#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/GameSystem.h"
#include "Game/CameraMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/Entities/ItemGate.h"
#include "Game/Entities/Pom.h"
#include "Game/gamePlayData.h"
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyIterator.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/ItemCave.h"
#include "Game/Entities/ItemHole.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/ItemRock.h"
#include "Game/Entities/ItemHoney.h"
#include "Radar.h"
#include "nans.h"

#define FindCandypopTriggerSize      350.0f
#define FindRedOnionTriggerSize      125.0f
#define FindYellowOnionTriggerSize   1600.0f
#define FindBlueOnionTriggerSize     750.0f
#define FindFirstTreasureTriggerSize 200.0f
#define FindGlobeTreasureTriggerSize 100.0f
#define FindLouieTreasureTriggerSize 200.0f
#define FindNewCaveTriggerSize       60.0f
#define FindCaveDeeperTriggerSize    40.0f
#define FindGeyserTriggerSize        40.0f
#define FindMoldTriggerSize          40.0f
#define FindSpicySprayTriggerSize    40.0f
#define FindBitterSprayTriggerSize   40.0f

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "naviDemoCheck";

namespace Game {
/**
 * @note Address: 0x8021F3D0
 * @note Size: 0x1790
 */
bool Navi::demoCheck()
{
	// no cutscenes outside story mode + no cutscenes while changing player?
	if (!gameSystem->isStoryMode() || cameraMgr->isChangePlayer()) {
		return false;
	}

	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return false;
	}

	// inactive navi cant trigger cutscenes
	if (!mController1) {
		return false;
	}

	// unused leftover of beta gate cutscene that played on getting near the gate
	if (itemGateMgr) {
		playData->isDemoFlag(DEMO_First_Gate_Down);
	}

	// don't even ask.
	EnemyMgrBase* pommgr = generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Pom);

	bool hasWhite  = playData->hasGotWhites();
	bool hasPurple = playData->hasGotPurples();
	if (pommgr && (hasWhite || hasPurple)) {
		EnemyIterator<Pom::Obj> iter(static_cast<Pom::Mgr*>(pommgr)); // DO NOT
		CI_LOOP(iter)
		{
			Pom::Obj* cPom = (Pom::Obj*)*iter; // EVEN ASK
			int color      = cPom->getPikiKind();

			if ((color == Purple || color == White) && (color != Purple || hasPurple) && (color != White || hasWhite)) {
				Sys::Sphere bounds;
				cPom->getBoundingSphere(bounds);
				bounds.mRadius += FindCandypopTriggerSize;
				if (checkDemoNaviAndPiki(bounds)) {
					if (color == White) {
						MoviePlayArg arg("g38_find_whitepom", nullptr, nullptr, 0);
						arg.mOrigin                = cPom->getPosition();
						arg.mAngle                 = cPom->getFaceDir();
						moviePlayer->mTargetObject = cPom;
						cPom->movie_begin(false);
						moviePlayer->play(arg);
						playData->setDemoFlag(DEMO_White_Candypop);
						return true;
					} else {
						MoviePlayArg arg("g39_find_blackpom", nullptr, nullptr, 0);
						arg.mOrigin                = cPom->getPosition();
						arg.mAngle                 = cPom->getFaceDir();
						moviePlayer->mTargetObject = cPom;
						cPom->movie_begin(false);
						moviePlayer->play(arg);
						playData->setDemoFlag(DEMO_Purple_Candypop);
						return true;
					}
				}
			}
		}
	}

	if (ItemOnyon::mgr) {

		// find red onion cutscene, only Louie can trigger it
		if (!playData->isDemoFlag(DEMO_Louie_Finds_Red_Onion) && mNaviIndex == NAVIID_Louie) {
			Onyon* onyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
			if (onyon) {
				Vector3f onyonpos = onyon->getPosition();
				Vector3f navipos  = getPosition();
				f32 dist          = onyonpos.distance(navipos);
				if (dist < FindRedOnionTriggerSize) {
					playData->setDemoFlag(DEMO_Louie_Finds_Red_Onion);
					MoviePlayArg arg("x03_find_red_onyon", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
					arg.mOrigin                = onyonpos;
					arg.mAngle                 = onyon->getFaceDir();
					moviePlayer->mTargetObject = onyon;
					moviePlayer->play(arg);
				}
			}
		}

		if (!playData->isDemoFlag(DEMO_Find_Yellow_Onion)) {
			Onyon* onyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_YELLOW);
			if (onyon) {
				Vector3f onyonpos = onyon->getPosition();
				Vector3f navipos  = getPosition();
				f32 dist          = onyonpos.distance(navipos);
				if (dist < FindYellowOnionTriggerSize) {
					playData->setDemoFlag(DEMO_Find_Yellow_Onion);
					MoviePlayArg arg("x10_find_yellow_onyon", nullptr, nullptr, 0);

					// find a wild yellow pikmin for the camera to focus on
					// (the game will crash if this runs and no yellow pikmin exist)
					Iterator<Piki> pikiIter(pikiMgr);
					Piki* cPiki = nullptr;
					CI_LOOP(pikiIter)
					{
						Piki* temp = *pikiIter;
						if (temp->getKind() == Yellow) {
							cPiki = temp;
							break;
						}
					}
					arg.mOrigin                = cPiki->getPosition();
					arg.mAngle                 = cPiki->getFaceDir();
					moviePlayer->mTargetObject = cPiki;
					moviePlayer->play(arg);
				}
			}
		}

		if (!playData->isDemoFlag(DEMO_Find_Blue_Onion)) {
			Onyon* onyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_BLUE);
			if (onyon) {
				Vector3f onyonpos = onyon->getPosition();
				Vector3f navipos  = getPosition();
				f32 dist          = onyonpos.distance(navipos);
				if (dist < FindBlueOnionTriggerSize) {
					playData->setDemoFlag(DEMO_Find_Blue_Onion);
					MoviePlayArg arg("x11_find_blue_onyon", nullptr, nullptr, 0);

					// make any wogpoles visible in the cutscene
					GeneralMgrIterator<EnemyBase> enemyIter(generalEnemyMgr);
					CI_LOOP(enemyIter)
					{
						EnemyBase* cEnemy = enemyIter.getObject();
						if (cEnemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Tadpole) {
							cEnemy->movie_begin(false);
						}
					}

					// find a wild blue pikmin for the camera to focus on (also make any blue pikmin visible)
					// (the game will crash if this runs and no blue pikmin exist)
					Iterator<Piki> pikiIter(pikiMgr);
					Piki* cPiki = nullptr;
					CI_LOOP(pikiIter)
					{
						Piki* temp = *pikiIter;
						if (temp->getKind() == Blue) {
							cPiki = temp;
							cPiki->movie_begin(false);
						}
					}
					arg.mOrigin        = cPiki->getPosition();
					arg.mAngle         = cPiki->getFaceDir();
					arg.mSoundPosition = cPiki->getSound_PosPtr();

					moviePlayer->mTargetObject = cPiki;
					moviePlayer->play(arg);
				}
			}
		}
	}

	if (pelletMgr && !playData->isDemoFlag(DEMO_Discover_Treasure)) {
		PelletIterator pelIt;
		CI_LOOP(pelIt)
		{
			Pellet* pelt = *pelIt;
			if (pelt->getKind() == PelletType::Treasure) {
				Vector3f peltPos = pelt->getPosition();
				Sys::Sphere bound(peltPos, pelt->getBottomRadius() + FindFirstTreasureTriggerSize);
				if (checkDemoNaviAndPiki(bound)) {
					MoviePlayArg arg("g04_find_treasure", nullptr, nullptr, 0);
					arg.mOrigin = pelt->getPosition();
					Vector3f test;
					pelt->mBaseTrMatrix.getBasis(2, test);
					arg.mAngle                 = JMath::atanTable_.atan2_(test.x, test.z);
					moviePlayer->mTargetObject = pelt;
					moviePlayer->play(arg);
					playData->setDemoFlag(DEMO_Discover_Treasure);
					return true;
				}
			}
		}
	}

	if (pelletMgr) {
		Iterator<PelletItem::Object> itemIt(PelletItem::mgr);
		CI_LOOP(itemIt)
		{
			PelletItem::Object* pelt = *itemIt;
			int id                   = pelt->getConfigIndex();
			if (!playData->isFindItemDemoFlag(id) && !pelt->discoverDisabled()) {
				Vector3f peltPos = pelt->getPosition();
				f32 radius       = pelt->getBottomRadius() + FindGlobeTreasureTriggerSize;
				// only the two globe treasures should check if a captain/pikmin is near, others play instantly
				bool check = false;
				if (id != OlimarData::ODII_SphericalAtlas && id != OlimarData::ODII_GeographicProjection) {
					check = true;
				}

				Sys::Sphere bound(peltPos, radius);
				FakePiki* result = nullptr;
				if (!check) {
					result = checkDemoNaviAndPiki(bound);
				}
				// if the navi/piki check was run, only continue if it passed
				if (result || check) {
					char path[256];
					sprintf(path, "s16_find_item_%02d", id);
					MoviePlayArg arg(path, nullptr, nullptr, 0);
					arg.mOrigin = pelt->getPosition();
					Vector3f test;
					pelt->mBaseTrMatrix.getBasis(2, test);
					arg.mAngle                 = JMath::atanTable_.atan2_(test.x, test.z);
					moviePlayer->mTargetObject = pelt;
					moviePlayer->play(arg);
					playData->setFindItemDemoFlag(id);
					return true;
				}
			}
		}
	}

	if (pelletMgr && !playData->isDemoFlag(DEMO_Find_Loozy_Treasure)) {
		Iterator<PelletOtakara::Object> otaIt(PelletOtakara::mgr);
		CI_LOOP(otaIt)
		{
			PelletOtakara::Object* pelt = *otaIt;
			// check pellet is Louie and isn't still attached to Titan Dweevil
			if (pelt->mPelletFlag == Pellet::FLAG_LOOZY && !pelt->mCaptureMatrix && !pelt->discoverDisabled()) {
				Vector3f peltPos = pelt->getPosition();
				Sys::Sphere bound(peltPos, pelt->getBottomRadius() + FindLouieTreasureTriggerSize);
				if (checkDemoNaviAndPiki(bound)) {
					MoviePlayArg arg("g37_get_louie", nullptr, nullptr, 0);
					arg.mOrigin = pelt->getPosition();
					Vector3f test;
					pelt->mBaseTrMatrix.getBasis(2, test);
					arg.mAngle                 = JMAAtan2Radian(test.x, test.z);
					moviePlayer->mTargetObject = pelt;
					moviePlayer->play(arg);
					playData->setDemoFlag(DEMO_Find_Loozy_Treasure);
					return true;
				}
			}
		}
	}

	// Play cutscene of finding a new cave entrance
	if (ItemCave::mgr && gameSystem->mSection->getCurrentCourseInfo() != nullptr) {
		int id = gameSystem->mSection->getCurrentCourseInfo()->mCourseIndex;
		// search for an unfound cave near the captain/pikmin
		ItemCave::Item* cCave = nullptr;
		Iterator<BaseItem> caveIt(ItemCave::mgr);
		CI_LOOP(caveIt)
		{
			ItemCave::Item* temp = static_cast<ItemCave::Item*>(*caveIt);
			if (playData->isCaveFirstTime(id, temp->mCaveID)) {
				Sys::Sphere bound;
				temp->getBoundingSphere(bound);
				bound.mRadius += FindNewCaveTriggerSize;
				FakePiki* piki = checkDemoNaviAndPiki(bound);
				if (piki) {
					cCave = temp;
					break;
				}
			}
		}

		if (cCave && moviePlayer) {
			char path[256];
			sprintf(path, "g05_find_cave_%s", cCave->mCaveID.getStr());
			// mark the cave as visited in the pause map screen
			if (Radar::mgr) {
				FOREACH_NODE(Radar::Point, Radar::mgr->mPointNode1.mChild, cPoint)
				{
					if (cPoint->mObjType == Radar::MAP_UNENTERED_CAVE && cCave->mCaveID.getID() == cPoint->getCaveID()) {
						cPoint->mObjType = Radar::MAP_INCOMPLETE_CAVE;
					}
				}
			}
			MoviePlayArg arg(path, nullptr, nullptr, 0);
			playData->setCaveVisit(id, cCave->mCaveID);
			arg.mOrigin                = cCave->getPosition();
			arg.mAngle                 = cCave->getFaceDir();
			moviePlayer->mTargetObject = cCave;
			moviePlayer->play(arg);
			return true;
		}
	}

	// cutscene of finding a hole to delve deeper in a cave
	if (ItemHole::mgr && !playData->isDemoFlag(DEMO_Find_Cave_Deeper_Hole)) {
		ItemHole::Item* cHole = nullptr;
		Iterator<BaseItem> holeIt(ItemHole::mgr);
		f32 checkrad = FindCaveDeeperTriggerSize;
		CI_LOOP(holeIt)
		{
			ItemHole::Item* temp = static_cast<ItemHole::Item*>(*holeIt);
			Sys::Sphere bounds;
			temp->getBoundingSphere(bounds);
			Vector3f posDiff = bounds.mPosition - mPosition;
			f32 len          = posDiff.length() - bounds.mRadius;
			if (len < checkrad) {
				cHole    = temp;
				checkrad = len;
			}
		}

		if (cHole && moviePlayer) {
			MoviePlayArg arg("g0A_cv_find_hole", nullptr, nullptr, 0);
			arg.mOrigin                = cHole->getPosition();
			arg.mAngle                 = cHole->getFaceDir();
			moviePlayer->mTargetObject = cHole;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Cave_Deeper_Hole);
			return true;
		}
	}

	if (ItemBigFountain::mgr && !playData->isDemoFlag(DEMO_Find_Cave_Geyser)) {
		ItemBigFountain::Item* cFountain = nullptr;
		Iterator<BaseItem> fountainIt(ItemBigFountain::mgr);
		f32 checkrad = FindGeyserTriggerSize;
		CI_LOOP(fountainIt)
		{
			ItemBigFountain::Item* item = static_cast<ItemBigFountain::Item*>(*fountainIt);
			Sys::Sphere bounds;
			item->getBoundingSphere(bounds);
			bounds.mRadius += checkrad;
			// I have no clue why were writing a pikmin to a geyser object but I guess theyre both creatures
			cFountain = reinterpret_cast<ItemBigFountain::Item*>(checkDemoNaviAndPiki(bounds));
			if (cFountain) {
				cFountain = item;
				break;
			}
		}

		if (cFountain && moviePlayer) {
			MoviePlayArg arg("g0B_cv_find_fountain", nullptr, nullptr, 0);
			arg.mOrigin                = cFountain->getPosition();
			arg.mAngle                 = cFountain->getFaceDir();
			moviePlayer->mTargetObject = cFountain;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Cave_Geyser);
			return true;
		}
	}

	if (ItemRock::mgr && !playData->isDemoFlag(DEMO_Find_Spiderwort_Mold)) {
		Iterator<BaseItem> rockIt(ItemRock::mgr);
		ItemRock::Item* cRock;
		f32 checkrad = FindMoldTriggerSize;
		CI_LOOP(rockIt)
		{
			cRock = static_cast<ItemRock::Item*>(*rockIt);
			Sys::Sphere bounds;
			cRock->getBoundingSphere(bounds);
			bounds.mRadius += checkrad;
			if (checkDemoNaviAndPiki(bounds)) {
				MoviePlayArg arg("g19_find_rock", nullptr, nullptr, 0);
				arg.mOrigin                = cRock->getPosition();
				arg.mAngle                 = cRock->getFaceDir();
				moviePlayer->mTargetObject = cRock;
				moviePlayer->play(arg);
				playData->setDemoFlag(DEMO_Find_Spiderwort_Mold);
				return true;
			}
		}
	}

	// find the first spicy drop cutscene
	if (ItemHoney::mgr && !playData->isDemoFlag(DEMO_Find_Spicy_Drop)) {
		ItemHoney::Item* cHoney = nullptr;
		Iterator<ItemHoney::Item> honeyIt(ItemHoney::mgr);
		f32 checkrad = FindSpicySprayTriggerSize;
		CI_LOOP(honeyIt)
		{
			ItemHoney::Item* temp = *honeyIt;
			if (temp->demoOK() && temp->mHoneyType == HONEY_R && temp->isAlive()) {
				Sys::Sphere bounds;
				temp->getBoundingSphere(bounds);
				Vector3f naviPos = bounds.mPosition - mPosition;
				f32 len          = naviPos.length() - bounds.mRadius;
				if (len < checkrad) {
					cHoney   = temp;
					checkrad = len;
				}
			}
		}

		if (cHoney && moviePlayer) {
			MoviePlayArg arg("g2D_red_extract", nullptr, nullptr, 0);
			arg.mOrigin                = cHoney->getPosition();
			arg.mAngle                 = cHoney->getFaceDir();
			moviePlayer->mTargetObject = cHoney;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Spicy_Drop);
			return true;
		}
	}

	// find the first bitter drop cutscene
	if (ItemHoney::mgr && !playData->isDemoFlag(DEMO_Find_Bitter_Drop)) {
		ItemHoney::Item* cHoney = nullptr;
		Iterator<ItemHoney::Item> honeyIt(ItemHoney::mgr);
		f32 checkrad = FindBitterSprayTriggerSize;
		for (honeyIt.first(); !honeyIt.isDone(); honeyIt.next()) {
			ItemHoney::Item* temp = *honeyIt;
			if (temp->demoOK() && temp->mHoneyType == HONEY_B && temp->isAlive()) {
				Sys::Sphere bounds;
				temp->getBoundingSphere(bounds);
				Vector3f naviPos = bounds.mPosition - mPosition;
				f32 len          = naviPos.length() - bounds.mRadius;
				if (len < checkrad) {
					cHoney   = temp;
					checkrad = len;
				}
			}
		}

		if (cHoney && moviePlayer) {
			MoviePlayArg arg("g2E_black_extract", nullptr, nullptr, 0);
			arg.mOrigin                = cHoney->getPosition();
			arg.mAngle                 = cHoney->getFaceDir();
			moviePlayer->mTargetObject = cHoney;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Bitter_Drop);
			return true;
		}
	}

	FORCE_DONT_INLINE;

	return false;
}

/**
 * @note Address: 0x80220E04
 * @note Size: 0x1C4
 */
FakePiki* Navi::checkDemoNaviAndPiki(Sys::Sphere& bounds)
{
	if (!(gameSystem->isFlag(GAMESYS_IsGameWorldActive))) {
		return nullptr;
	}

	CellIteratorArg arg;
	arg.mSphere          = bounds;
	arg.mUseCustomRadius = TRUE;
	CellIterator cell(arg);
	CI_LOOP(cell)
	{
		FakePiki* obj = static_cast<FakePiki*>(*cell);
		if ((obj->isNavi() || obj->isPiki()) && obj->isAlive() && (!obj->isPiki() || obj->isPikmin())) {
			Vector3f pos = obj->getPosition();
			f32 dist     = pos.distance(bounds.mPosition);
			if (dist <= bounds.mRadius) {
				return obj;
			}
		}
	}
	return nullptr;
}

} // namespace Game
