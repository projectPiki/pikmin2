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

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "naviDemoCheck";

namespace Game {
// Trigger Sizes for Onion Detection
const static f32 sRedOnionTriggerSize    = 125.0f;
const static f32 sYellowOnionTriggerSize = 1600.0f;
const static f32 sBlueOnionTriggerSize   = 750.0f;

// Trigger Sizes for Treasure Detection
const static f32 sFirstTreasureTriggerSize = 200.0f;
const static f32 sGlobeTreasureTriggerSize = 100.0f;
const static f32 sLouieTreasureTriggerSize = 200.0f;

// Trigger Sizes for Cave and Exploration
const static f32 sNewCaveTriggerSize    = 60.0f;
const static f32 sDeeperCaveTriggerSize = 40.0f;
const static f32 sFindGeyserTriggerSize = 40.0f;

// Trigger Sizes for Special Items
const static f32 sCandypopTriggerSize    = 350.0f;
const static f32 sMoldTriggerSize        = 40.0f;
const static f32 sSpicySprayTriggerSize  = 40.0f;
const static f32 sBitterSprayTriggerSize = 40.0f;

/**
 * Checks if a cutscene can be played based on certain conditions.
 *
 * @return true if a cutscene can be played, false otherwise.
 *
 * @note Address: 0x8021F3D0
 * @note Size: 0x1790
 */
bool Navi::demoCheck()
{
	// No cutscenes in multiplayer or if the camera is changing player
	if (!gameSystem->isStoryMode() || cameraMgr->isChangePlayer()) {
		return false;
	}

	// If the movie player is active, don't play any cutscenes
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return false;
	}

	// Inactive player can't trigger cutscenes
	if (!mController1) {
		return false;
	}

	// Seems to be an unused leftover of the beta gate cutscene that played when near the gate
	if (itemGateMgr) {
		playData->isDemoFlag(DEMO_First_Gate_Down);
	}

	// Finding white and black candypop bud
	{
		EnemyMgrBase* candypopBudMgr = generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Pom);
		bool hasWhite                = playData->hasGotWhites();
		bool hasPurple               = playData->hasGotPurples();

		if (candypopBudMgr && (hasWhite || hasPurple)) {
			EnemyIterator<Pom::Obj> iter(static_cast<Pom::Mgr*>(candypopBudMgr));

			CI_LOOP(iter)
			{
				Pom::Obj* currentBud = (Pom::Obj*)*iter;
				int budColor         = currentBud->getPikiKind();

				// If the bud colour is white or purple, and the player has the respective pikmin, play the cutscene
				if ((budColor == Purple || budColor == White) && (budColor != Purple || hasPurple) && (budColor != White || hasWhite)) {

					Sys::Sphere bounds;
					currentBud->getBoundingSphere(bounds);
					bounds.mRadius += sCandypopTriggerSize;

					// Check if the player is near the candypop bud
					if (checkDemoNaviAndPiki(bounds)) {
						if (budColor == White) {
							MoviePlayArg arg("g38_find_whitepom", nullptr, nullptr, 0);

							arg.mOrigin                = currentBud->getPosition();
							arg.mAngle                 = currentBud->getFaceDir();
							moviePlayer->mTargetObject = currentBud;
							currentBud->movie_begin(false);
							moviePlayer->play(arg);
							playData->setDemoFlag(DEMO_White_Candypop);
							return true;
						} else {
							MoviePlayArg arg("g39_find_blackpom", nullptr, nullptr, 0);

							arg.mOrigin                = currentBud->getPosition();
							arg.mAngle                 = currentBud->getFaceDir();
							moviePlayer->mTargetObject = currentBud;
							currentBud->movie_begin(false);
							moviePlayer->play(arg);
							playData->setDemoFlag(DEMO_Purple_Candypop);
							return true;
						}
					}
				}
			}
		}
	}

	// Finding red/yellow/blue onion
	{
		if (ItemOnyon::mgr) {
			// Only Louie can trigger the red onion cutscene
			if (!playData->isDemoFlag(DEMO_Louie_Finds_Red_Onion) && mNaviIndex == NAVIID_Louie) {
				Onyon* redOnion = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
				if (redOnion) {
					Vector3f onionPosition  = redOnion->getPosition();
					Vector3f playerPosition = getPosition();

					f32 distanceToOnion = onionPosition.distance(playerPosition);
					if (distanceToOnion < sRedOnionTriggerSize) {
						playData->setDemoFlag(DEMO_Louie_Finds_Red_Onion);
						MoviePlayArg arg("x03_find_red_onyon", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);

						arg.mOrigin                = onionPosition;
						arg.mAngle                 = redOnion->getFaceDir();
						moviePlayer->mTargetObject = redOnion;
						moviePlayer->play(arg);
					}
				}
			}

			// Yellow onion cutscene
			if (!playData->isDemoFlag(DEMO_Find_Yellow_Onion)) {
				Onyon* yellowOnion = ItemOnyon::mgr->getOnyon(ONYON_TYPE_YELLOW);
				if (yellowOnion) {
					Vector3f onionPosition  = yellowOnion->getPosition();
					Vector3f playerPosition = getPosition();

					f32 distanceToOnion = onionPosition.distance(playerPosition);
					if (distanceToOnion < sYellowOnionTriggerSize) {
						playData->setDemoFlag(DEMO_Find_Yellow_Onion);
						MoviePlayArg arg("x10_find_yellow_onyon", nullptr, nullptr, 0);

						// Find the first wild yellow pikmin for the camera to focus on
						// (the game will crash if this runs and no yellow pikmin exist)
						Iterator<Piki> pikiIter(pikiMgr);
						Piki* targetPiki = nullptr;
						CI_LOOP(pikiIter)
						{
							Piki* temp = *pikiIter;
							if (temp->getKind() == Yellow) {
								targetPiki = temp;
								break;
							}
						}

// INTNS: Added this code for poor new modders wondering why they crash
#if FOR_MODDING
						JUT_ASSERT(targetPiki, "No yellow pikmin found for yellow onion cutscene\n");
#endif

						arg.mOrigin                = targetPiki->getPosition();
						arg.mAngle                 = targetPiki->getFaceDir();
						moviePlayer->mTargetObject = targetPiki;
						moviePlayer->play(arg);
					}
				}
			}

			// Blue onion cutscene
			if (!playData->isDemoFlag(DEMO_Find_Blue_Onion)) {
				Onyon* blueOnion = ItemOnyon::mgr->getOnyon(ONYON_TYPE_BLUE);
				if (blueOnion) {
					Vector3f onionPosition  = blueOnion->getPosition();
					Vector3f playerPosition = getPosition();

					f32 distanceToOnion = onionPosition.distance(playerPosition);
					if (distanceToOnion < sBlueOnionTriggerSize) {
						playData->setDemoFlag(DEMO_Find_Blue_Onion);
						MoviePlayArg arg("x11_find_blue_onyon", nullptr, nullptr, 0);

						// Make any Wogpoles visible in the cutscene
						GeneralMgrIterator<EnemyBase> enemyIter(generalEnemyMgr);
						CI_LOOP(enemyIter)
						{
							EnemyBase* cEnemy = enemyIter.getObject();
							if (cEnemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Tadpole) {
								cEnemy->movie_begin(false);
							}
						}

						// Find the first wild blue pikmin for the camera to focus on, and makes them visible
						// (the game will crash if this runs and no blue pikmin exist)
						Iterator<Piki> pikiIter(pikiMgr);
						Piki* targetPiki = nullptr;
						CI_LOOP(pikiIter)
						{
							Piki* temp = *pikiIter;
							if (temp->getKind() == Blue) {
								targetPiki = temp;
								targetPiki->movie_begin(false);
							}
						}

// INTNS: Added this code for poor new modders wondering why they crash
#if FOR_MODDING
						JUT_ASSERT(targetPiki, "No blue pikmin found for blue onion cutscene\n");
#endif

						arg.mOrigin        = targetPiki->getPosition();
						arg.mAngle         = targetPiki->getFaceDir();
						arg.mSoundPosition = targetPiki->getSound_PosPtr();

						moviePlayer->mTargetObject = targetPiki;
						moviePlayer->play(arg);
					}
				}
			}
		}
	}

	// Finding treasure
	{
		if (pelletMgr && !playData->isDemoFlag(DEMO_Discover_Treasure)) {
			PelletIterator pelletIterator;
			CI_LOOP(pelletIterator)
			{
				Pellet* currentPellet = *pelletIterator;

				if (currentPellet->getKind() == PelletType::Treasure) {

					Vector3f pelletPosition = currentPellet->getPosition();
					Sys::Sphere bound(pelletPosition, currentPellet->getBottomRadius() + sFirstTreasureTriggerSize);

					if (checkDemoNaviAndPiki(bound)) {
						MoviePlayArg arg("g04_find_treasure", nullptr, nullptr, 0);

						arg.mOrigin = currentPellet->getPosition();

						Vector3f forwardVec;
						currentPellet->mBaseTrMatrix.getBasis(2, forwardVec);
						arg.mAngle                 = JMath::atanTable_.atan2_(forwardVec.x, forwardVec.z);
						moviePlayer->mTargetObject = currentPellet;
						moviePlayer->play(arg);
						playData->setDemoFlag(DEMO_Discover_Treasure);
						return true;
					}
				}
			}
		}
	}

	// Finding specific treasures
	{
		if (pelletMgr) {
			Iterator<PelletItem::Object> itemIterator(PelletItem::mgr);
			CI_LOOP(itemIterator)
			{
				PelletItem::Object* currentItem = *itemIterator;
				int itemIndex                   = currentItem->getConfigIndex();

				// If the treasure hasn't been found yet, and the item is allowed to be discovered
				if (!playData->isFindItemDemoFlag(itemIndex) && !currentItem->discoverDisabled()) {
					Vector3f itemPosition = currentItem->getPosition();
					f32 itemRadius        = currentItem->getBottomRadius() + sGlobeTreasureTriggerSize;

					// If the item is the spherical atlas or geographic projection, play regardless of distance
					bool toSkipDistanceCheck
					    = itemIndex != OlimarData::ODII_SphericalAtlas && itemIndex != OlimarData::ODII_GeographicProjection;

					Sys::Sphere checkBounds(itemPosition, itemRadius);
					FakePiki* nearObject = nullptr;
					if (!toSkipDistanceCheck) {
						// Get the closest Pikmin or Player
						nearObject = checkDemoNaviAndPiki(checkBounds);
					}

					// If there's a nearby Pikmin or Player, or the item is a special case, play the cutscene
					if (nearObject || toSkipDistanceCheck) {
						char moviePath[PATH_MAX];
						sprintf(moviePath, "s16_find_item_%02d", itemIndex);
						MoviePlayArg arg(moviePath, nullptr, nullptr, 0);

						arg.mOrigin = currentItem->getPosition();

						Vector3f forwardVec;
						currentItem->mBaseTrMatrix.getBasis(2, forwardVec);
						arg.mAngle                 = JMath::atanTable_.atan2_(forwardVec.x, forwardVec.z);
						moviePlayer->mTargetObject = currentItem;
						moviePlayer->play(arg);
						playData->setFindItemDemoFlag(itemIndex);
						return true;
					}
				}
			}
		}
	}

	// Finding Louie after Titan Dweevil
	{
		if (pelletMgr && !playData->isDemoFlag(DEMO_Find_Loozy_Treasure)) {
			Iterator<PelletOtakara::Object> otakaraIterator(PelletOtakara::mgr);
			CI_LOOP(otakaraIterator)
			{
				PelletOtakara::Object* currentObject = *otakaraIterator;

				// If the item is Louie, the player hasn't found him, and he's not on the Titan Dweevil (still fighting)
				if (currentObject->mPelletFlag == Pellet::FLAG_LOOZY && !currentObject->mCaptureMatrix
				    && !currentObject->discoverDisabled()) {

					Vector3f louiePosition = currentObject->getPosition();
					Sys::Sphere checkBounds(louiePosition, currentObject->getBottomRadius() + sLouieTreasureTriggerSize);

					if (checkDemoNaviAndPiki(checkBounds)) {
						MoviePlayArg arg("g37_get_louie", nullptr, nullptr, 0);

						arg.mOrigin = currentObject->getPosition();

						Vector3f forwardVec;
						currentObject->mBaseTrMatrix.getBasis(2, forwardVec);
						arg.mAngle                 = JMAAtan2Radian(forwardVec.x, forwardVec.z);
						moviePlayer->mTargetObject = currentObject;
						moviePlayer->play(arg);
						playData->setDemoFlag(DEMO_Find_Loozy_Treasure);
						return true;
					}
				}
			}
		}
	}

	// Finding a new cave entrance
	{
		if (ItemCave::mgr && gameSystem->mSection->getCurrentCourseInfo() != nullptr) {
			int levelIndex = gameSystem->mSection->getCurrentCourseInfo()->mCourseIndex;

			// Search for an unfound cave near the captain/pikmin
			ItemCave::Item* targetCave = nullptr;
			Iterator<BaseItem> caveIterator(ItemCave::mgr);
			CI_LOOP(caveIterator)
			{
				ItemCave::Item* currentCave = static_cast<ItemCave::Item*>(*caveIterator);

				// If the cave hasn't been visited yet
				if (playData->isCaveFirstTime(levelIndex, currentCave->mCaveID)) {
					Sys::Sphere bound;
					currentCave->getBoundingSphere(bound);
					bound.mRadius += sNewCaveTriggerSize;

					// If there is a Pikmin or Player near the cave entrance
					FakePiki* objTouchingCave = checkDemoNaviAndPiki(bound);
					if (objTouchingCave) {
						targetCave = currentCave;
						break;
					}
				}
			}

			if (targetCave && moviePlayer) {
				char path[PATH_MAX];
				sprintf(path, "g05_find_cave_%s", targetCave->mCaveID.getStr());

				// Mark the cave as visited in the pause map screen
				if (Radar::mgr) {
					FOREACH_NODE(Radar::Point, Radar::mgr->mActiveRadarNodes.mChild, cPoint)
					{
						if (cPoint->mObjType == Radar::MAP_UNENTERED_CAVE && targetCave->mCaveID.getID() == cPoint->getCaveID()) {
							cPoint->mObjType = Radar::MAP_INCOMPLETE_CAVE;
						}
					}
				}

				MoviePlayArg arg(path, nullptr, nullptr, 0);
				playData->setCaveVisit(levelIndex, targetCave->mCaveID);
				arg.mOrigin                = targetCave->getPosition();
				arg.mAngle                 = targetCave->getFaceDir();
				moviePlayer->mTargetObject = targetCave;
				moviePlayer->play(arg);
				return true;
			}
		}
	}

	// Finding a hole in a cave
	{
		if (ItemHole::mgr && !playData->isDemoFlag(DEMO_Find_Cave_Deeper_Hole)) {
			ItemHole::Item* targetHole = nullptr;
			Iterator<BaseItem> holeIterator(ItemHole::mgr);

			// Find the closest hole to the player
			f32 checkRadius = sDeeperCaveTriggerSize;
			CI_LOOP(holeIterator)
			{
				ItemHole::Item* currentHole = static_cast<ItemHole::Item*>(*holeIterator);

				Sys::Sphere bounds;
				currentHole->getBoundingSphere(bounds);

				Vector3f deltaPosition = bounds.mPosition - mPosition;
				f32 distanceToHole     = deltaPosition.length() - bounds.mRadius;
				if (distanceToHole < checkRadius) {
					targetHole  = currentHole;
					checkRadius = distanceToHole;
				}
			}

			// If a hole was found, play the cutscene
			if (targetHole && moviePlayer) {
				MoviePlayArg arg("g0A_cv_find_hole", nullptr, nullptr, 0);
				arg.mOrigin                = targetHole->getPosition();
				arg.mAngle                 = targetHole->getFaceDir();
				moviePlayer->mTargetObject = targetHole;
				moviePlayer->play(arg);
				playData->setDemoFlag(DEMO_Find_Cave_Deeper_Hole);
				return true;
			}
		}
	}

	// Finding a geyser in a cave
	{
		if (ItemBigFountain::mgr && !playData->isDemoFlag(DEMO_Find_Cave_Geyser)) {
			ItemBigFountain::Item* targetGeyser = nullptr;
			Iterator<BaseItem> geyserIterator(ItemBigFountain::mgr);

			// Find closest Geyser
			f32 checkRadius = sFindGeyserTriggerSize;
			CI_LOOP(geyserIterator)
			{
				ItemBigFountain::Item* currentGeyser = static_cast<ItemBigFountain::Item*>(*geyserIterator);

				Sys::Sphere bounds;
				currentGeyser->getBoundingSphere(bounds);
				bounds.mRadius += checkRadius;

				// Check if the player is near the geyser (why is this casting to a different type?)
				targetGeyser = reinterpret_cast<ItemBigFountain::Item*>(checkDemoNaviAndPiki(bounds));
				if (targetGeyser) {
					targetGeyser = currentGeyser;
					break;
				}
			}

			// If a geyser was found, play the cutscene
			if (targetGeyser && moviePlayer) {
				MoviePlayArg arg("g0B_cv_find_fountain", nullptr, nullptr, 0);
				arg.mOrigin                = targetGeyser->getPosition();
				arg.mAngle                 = targetGeyser->getFaceDir();
				moviePlayer->mTargetObject = targetGeyser;
				moviePlayer->play(arg);
				playData->setDemoFlag(DEMO_Find_Cave_Geyser);
				return true;
			}
		}
	}

	// Finding the first spiderwort mold
	{
		if (ItemRock::mgr && !playData->isDemoFlag(DEMO_Find_Spiderwort_Mold)) {
			Iterator<BaseItem> moldIterator(ItemRock::mgr);
			ItemRock::Item* targetMold;

			f32 checkRadius = sMoldTriggerSize;
			CI_LOOP(moldIterator)
			{
				targetMold = static_cast<ItemRock::Item*>(*moldIterator);

				Sys::Sphere bounds;
				targetMold->getBoundingSphere(bounds);
				bounds.mRadius += checkRadius;

				// If the player is near the mold, play the cutscene
				if (checkDemoNaviAndPiki(bounds)) {
					MoviePlayArg arg("g19_find_rock", nullptr, nullptr, 0);
					arg.mOrigin                = targetMold->getPosition();
					arg.mAngle                 = targetMold->getFaceDir();
					moviePlayer->mTargetObject = targetMold;
					moviePlayer->play(arg);
					playData->setDemoFlag(DEMO_Find_Spiderwort_Mold);
					return true;
				}
			}
		}
	}

	// Finding the first spicy drop
	{
		if (ItemHoney::mgr && !playData->isDemoFlag(DEMO_Find_Spicy_Drop)) {
			ItemHoney::Item* targetSpicyDrop = nullptr;
			Iterator<ItemHoney::Item> spicyDropIterator(ItemHoney::mgr);

			// Find the closest spicy spray drop
			f32 checkRadius = sSpicySprayTriggerSize;
			CI_LOOP(spicyDropIterator)
			{
				ItemHoney::Item* currentSpicyDrop = *spicyDropIterator;

				// If the drop is a spicy drop, and is alive (not picked up or destroyed)
				if (currentSpicyDrop->demoOK() && currentSpicyDrop->mHoneyType == HONEY_R && currentSpicyDrop->isAlive()) {
					Sys::Sphere bounds;
					currentSpicyDrop->getBoundingSphere(bounds);

					Vector3f deltaPosition = bounds.mPosition - mPosition;
					f32 distanceToDrop     = deltaPosition.length() - bounds.mRadius;
					if (distanceToDrop < checkRadius) {
						targetSpicyDrop = currentSpicyDrop;
						checkRadius     = distanceToDrop;
					}
				}
			}

			// If a spicy drop was found, play the cutscene
			if (targetSpicyDrop && moviePlayer) {
				MoviePlayArg arg("g2D_red_extract", nullptr, nullptr, 0);
				arg.mOrigin                = targetSpicyDrop->getPosition();
				arg.mAngle                 = targetSpicyDrop->getFaceDir();
				moviePlayer->mTargetObject = targetSpicyDrop;
				moviePlayer->play(arg);
				playData->setDemoFlag(DEMO_Find_Spicy_Drop);
				return true;
			}
		}
	}

	// Finding the first bitter drop
	{
		if (ItemHoney::mgr && !playData->isDemoFlag(DEMO_Find_Bitter_Drop)) {
			ItemHoney::Item* targetBitterDrop = nullptr;
			Iterator<ItemHoney::Item> bitterDropIterator(ItemHoney::mgr);

			// Find the closest bitter spray drop
			f32 checkRadius = sBitterSprayTriggerSize;
			CI_LOOP(bitterDropIterator)
			{
				ItemHoney::Item* currentBitterDrop = *bitterDropIterator;

				// If the drop is a bitter drop, and is alive (not picked up or destroyed)
				if (currentBitterDrop->demoOK() && currentBitterDrop->mHoneyType == HONEY_B && currentBitterDrop->isAlive()) {
					Sys::Sphere bounds;
					currentBitterDrop->getBoundingSphere(bounds);

					Vector3f deltaPosition = bounds.mPosition - mPosition;
					f32 distanceToDrop     = deltaPosition.length() - bounds.mRadius;
					if (distanceToDrop < checkRadius) {
						targetBitterDrop = currentBitterDrop;
						checkRadius      = distanceToDrop;
					}
				}
			}

			// If a bitter drop was found, play the cutscene
			if (targetBitterDrop && moviePlayer) {
				MoviePlayArg arg("g2E_black_extract", nullptr, nullptr, 0);
				arg.mOrigin                = targetBitterDrop->getPosition();
				arg.mAngle                 = targetBitterDrop->getFaceDir();
				moviePlayer->mTargetObject = targetBitterDrop;
				moviePlayer->play(arg);
				playData->setDemoFlag(DEMO_Find_Bitter_Drop);
				return true;
			}
		}
	}

	FORCE_DONT_INLINE;
	return false;
}

/**
 * Checks if a player or Pikmin within the specified bounds.
 *
 * @param bounds The bounding sphere to check against.
 * @return A pointer to the found FakePiki object if it meets the criteria, otherwise nullptr.
 *
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

		// If the object is a navi or piki (not bulbmin), and is alive, and is within the bounds, return it
		if ((obj->isNavi() || obj->isPiki()) && obj->isAlive() && (!obj->isPiki() || obj->isPikmin())) {
			Vector3f objectPosition = obj->getPosition();
			f32 distanceToBounds    = objectPosition.distance(bounds.mPosition);

			if (distanceToBounds <= bounds.mRadius) {
				return obj;
			}
		}
	}

	return nullptr;
}

} // namespace Game
