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

#define CandypopTriggerSize          350.0f
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

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_navi_demoCheck_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482D30
    lbl_80482D30:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6E617669
        .4byte 0x44656D6F
        .4byte 0x43686563
        .4byte 0x6B000000
        .4byte 0x6733385F
        .4byte 0x66696E64
        .4byte 0x5F776869
        .4byte 0x7465706F
        .4byte 0x6D000000
        .4byte 0x6733395F
        .4byte 0x66696E64
        .4byte 0x5F626C61
        .4byte 0x636B706F
        .4byte 0x6D000000
        .4byte 0x7830335F
        .4byte 0x66696E64
        .4byte 0x5F726564
        .4byte 0x5F6F6E79
        .4byte 0x6F6E0000
        .4byte 0x7831305F
        .4byte 0x66696E64
        .4byte 0x5F79656C
        .4byte 0x6C6F775F
        .4byte 0x6F6E796F
        .4byte 0x6E000000
        .4byte 0x7831315F
        .4byte 0x66696E64
        .4byte 0x5F626C75
        .4byte 0x655F6F6E
        .4byte 0x796F6E00
        .4byte 0x6730345F
        .4byte 0x66696E64
        .4byte 0x5F747265
        .4byte 0x61737572
        .4byte 0x65000000
        .4byte 0x7331365F
        .4byte 0x66696E64
        .4byte 0x5F697465
        .4byte 0x6D5F2530
        .4byte 0x32640000
        .4byte 0x6733375F
        .4byte 0x6765745F
        .4byte 0x6C6F7569
        .4byte 0x65000000
        .4byte 0x6730355F
        .4byte 0x66696E64
        .4byte 0x5F636176
        .4byte 0x655F2573
        .4byte 0x00000000
        .4byte 0x6730415F
        .4byte 0x63765F66
        .4byte 0x696E645F
        .4byte 0x686F6C65
        .4byte 0x00000000
        .4byte 0x6730425F
        .4byte 0x63765F66
        .4byte 0x696E645F
        .4byte 0x666F756E
        .4byte 0x7461696E
        .4byte 0x00000000
        .4byte 0x6731395F
        .4byte 0x66696E64
        .4byte 0x5F726F63
        .4byte 0x6B000000
        .4byte 0x6732445F
        .4byte 0x7265645F
        .4byte 0x65787472
        .4byte 0x61637400
        .4byte 0x6732455F
        .4byte 0x626C6163
        .4byte 0x6B5F6578
        .4byte 0x74726163
        .4byte 0x74000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0A18
    lbl_804C0A18:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global "__vt__Q24Game30EnemyIterator<Q34Game3Pom3Obj>"
    "__vt__Q24Game30EnemyIterator<Q34Game3Pom3Obj>":
        .4byte 0
        .4byte 0
        .4byte "first__Q24Game30EnemyIterator<Q34Game3Pom3Obj>Fv"
        .4byte "next__Q24Game30EnemyIterator<Q34Game3Pom3Obj>Fv"
        .4byte "isDone__Q24Game30EnemyIterator<Q34Game3Pom3Obj>Fv"
        .4byte "__ml__Q24Game30EnemyIterator<Q34Game3Pom3Obj>Fv"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C40
    lbl_80515C40:
        .skip 0x4
    .global lbl_80515C44
    lbl_80515C44:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A0D8
    lbl_8051A0D8:
        .float 350.0
    .global lbl_8051A0DC
    lbl_8051A0DC:
        .float 125.0
    .global lbl_8051A0E0
    lbl_8051A0E0:
        .float 1600.0
    .global lbl_8051A0E4
    lbl_8051A0E4:
        .float 750.0
    .global lbl_8051A0E8
    lbl_8051A0E8:
        .float 200.0
    .global lbl_8051A0EC
    lbl_8051A0EC:
        .float 100.0
    .global lbl_8051A0F0
    lbl_8051A0F0:
        .float 60.0
    .global lbl_8051A0F4
    lbl_8051A0F4:
        .float 40.0
    .global lbl_8051A0F8
    lbl_8051A0F8:
        .float 0.0
*/

namespace Game {
#pragma dont_inline on // they have to have used with with all the non inline iterators, and a few non-inline vector3 functions
/*
 * --INFO--
 * Address:	8021F3D0
 * Size:	001790
 */
bool Navi::demoCheck()
{
	if (gameSystem->m_mode != GSM_STORY_MODE || cameraMgr->isChangePlayer()) {
		return false;
	}

	if (moviePlayer && moviePlayer->m_demoState != 0) {
		return false;
	}

	// inactive navi cant trigger cutscenes
	if (!m_controller1) {
		return false;
	}

	// unused leftover of beta gate cutscene that played on getting near the gate
	if (itemGateMgr) {
		playData->isDemoFlag(DEMO_First_Gate_Down);
	}

	Pom::Mgr* pommgr = static_cast<Pom::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Pom));
	bool purpleflag  = playData->isDemoFlag(DEMO_Purple_Candypop);
	bool whiteflag   = playData->isDemoFlag(DEMO_White_Candypop);
	if (pommgr && (purpleflag || whiteflag)) {
		// help this is broken
		EnemyIterator<Pom::Obj> iter((Container<Pom::Obj>*)pommgr, 0, 0);
		CI_LOOP(iter)
		{
			Pom::Obj* cPom = *iter;
			int color      = cPom->m_pikiKind;
			if ((color == Purple || color == White) && (color != Purple || purpleflag) && (color != White || whiteflag)) {
				Sys::Sphere bounds;
				cPom->getBoundingSphere(bounds);
				bounds.m_radius += CandypopTriggerSize;
				if (checkDemoNaviAndPiki(bounds)) {
					if (color == White) {
						MoviePlayArg arg("g38_find_whitepom", nullptr, nullptr, 0);
						arg.m_origin                = cPom->getPosition();
						arg.m_angle                 = cPom->getFaceDir();
						moviePlayer->m_targetObject = cPom;
						cPom->movie_begin(false);
						moviePlayer->play(arg);
						playData->setDemoFlag(DEMO_White_Candypop);
						return true;
					} else {
						MoviePlayArg arg("g39_find_blackpom", nullptr, nullptr, 0);
						arg.m_origin                = cPom->getPosition();
						arg.m_angle                 = cPom->getFaceDir();
						moviePlayer->m_targetObject = cPom;
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
		if (!playData->isDemoFlag(DEMO_Louie_Finds_Red_Onion) && m_naviIndex == 1) {
			Onyon* onyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
			if (onyon) {
				Vector3f onyonpos = onyon->getPosition();
				Vector3f navipos  = getPosition();
				f32 dist          = onyonpos.distance(navipos);
				if (dist < FindRedOnionTriggerSize) {
					playData->setDemoFlag(DEMO_Louie_Finds_Red_Onion);
					MoviePlayArg arg("x03_find_red_onyon", nullptr, gameSystem->m_section->_C8, 0);
					arg.m_origin                = onyonpos;
					arg.m_angle                 = onyon->getFaceDir();
					moviePlayer->m_targetObject = onyon;
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
					Piki* cPiki;
					CI_LOOP(pikiIter)
					{
						cPiki = *pikiIter;
						if (cPiki->m_pikiColor == Yellow) {
							break;
						}
					}
					arg.m_origin                = cPiki->getPosition();
					arg.m_angle                 = cPiki->getFaceDir();
					moviePlayer->m_targetObject = onyon;
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
					playData->setDemoFlag(DEMO_Find_Yellow_Onion);
					MoviePlayArg arg("x11_find_blue_onyon", nullptr, nullptr, 0);

					// make any wogpoles visible in the cutscene
					GeneralMgrIterator<EnemyBase> enemyIter(generalEnemyMgr);
					enemyIter.first();
					while (enemyIter.m_container->getEnd() != enemyIter.m_index) {
						EnemyBase* cEnemy;
						cEnemy = enemyIter.getObject();
						if (cEnemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Tadpole) {
							cEnemy->movie_begin(false);
						}
						enemyIter.next();
					}

					// find a wild blue pikmin for the camera to focus on (also make any blue pikmin visible)
					// (the game will crash if this runs and no blue pikmin exist)
					Iterator<Piki> pikiIter(pikiMgr);
					Piki* cPiki;
					CI_LOOP(pikiIter)
					{
						Piki* temp = *pikiIter;
						if (temp->m_pikiColor == Blue) {
							cPiki = temp;
							cPiki->movie_begin(false);
						}
					}
					arg.m_origin        = cPiki->getPosition();
					arg.m_angle         = cPiki->getFaceDir();
					arg.m_soundPosition = cPiki->getSound_PosPtr();

					moviePlayer->m_targetObject = cPiki;
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
			if (pelt->getKind() == 3) {
				Vector3f peltPos = pelt->getPosition();
				Sys::Sphere bound(peltPos, pelt->getBottomRadius() + FindFirstTreasureTriggerSize);
				if (checkDemoNaviAndPiki(bound)) {
					MoviePlayArg arg("g04_find_treasure", nullptr, nullptr, 0);
					arg.m_origin = pelt->getPosition();
					Vector3f test;
					pelt->m_objMatrix.getBasis(2, test);
					arg.m_angle                 = JMath::atanTable_.atan2_(test.x, test.z);
					moviePlayer->m_targetObject = pelt;
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
			Pellet* pelt = *itemIt;
			int id       = pelt->getConfigIndex();
			if (!playData->isFindItemDemoFlag(id) && !pelt->discoverDisabled()) {
				bool check       = false;
				Vector3f peltPos = pelt->getPosition();
				Sys::Sphere bound(peltPos, pelt->getBottomRadius() + FindGlobeTreasureTriggerSize);
				// only the two globe treasures should check if a captain/pikmin is near, others play instantly
				if (id == 10 || id == 11) {
					check = true;
				}
				bool check2 = false;
				if (check) {
					check2 = checkDemoNaviAndPiki(bound);
				}
				// if the navi/piki check was run, only continue if it passed
				if (check || check2) {
					char path[256];
					sprintf(path, "s16_find_item_%02d", id);
					MoviePlayArg arg(path, nullptr, nullptr, 0);
					arg.m_origin = pelt->getPosition();
					Vector3f test;
					pelt->m_objMatrix.getBasis(2, test);
					arg.m_angle                 = JMath::atanTable_.atan2_(test.x, test.z);
					moviePlayer->m_targetObject = pelt;
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
			Pellet* pelt = *otaIt;
			// check pellet is louie and isnt still attached to TD
			if (pelt->m_pelletFlag == Pellet::FLAG_LOOZY && !pelt->m_captureMatrix && !pelt->discoverDisabled()) {
				Vector3f peltPos = pelt->getPosition();
				Sys::Sphere bound(peltPos, pelt->getBottomRadius() + FindLouieTreasureTriggerSize);
				if (checkDemoNaviAndPiki(bound)) {
					MoviePlayArg arg("g37_get_louie", nullptr, nullptr, 0);
					arg.m_origin = pelt->getPosition();
					Vector3f test;
					pelt->m_objMatrix.getBasis(2, test);
					arg.m_angle                 = JMath::atanTable_.atan2_(test.x, test.z);
					moviePlayer->m_targetObject = pelt;
					moviePlayer->play(arg);
					playData->setDemoFlag(DEMO_Find_Loozy_Treasure);
					return true;
				}
			}
		}
	}

	// Play cutscene of finding a new cave entrance
	if (ItemCave::mgr && gameSystem->m_section->getCurrentCourseInfo() != nullptr) {
		int id = gameSystem->m_section->getCurrentCourseInfo()->m_courseIndex;
		// search for an unfound cave near the captain/pikmin
		Iterator<BaseItem> caveIt(ItemCave::mgr);
		ItemCave::Item* cCave;
		CI_LOOP(caveIt)
		{
			cCave = static_cast<ItemCave::Item*>(*caveIt);
			if (playData->isCaveFirstTime(id, cCave->m_caveID)) {
				Sys::Sphere bound;
				cCave->getBoundingSphere(bound);
				bound.m_radius += FindNewCaveTriggerSize;
				if (checkDemoNaviAndPiki(bound))
					break;
			}
		}

		if (cCave && moviePlayer) {
			char path[256];
			sprintf(path, "g05_find_cave_%s", cCave->m_caveID);
			// mark the cave as visited in the pause map screen
			FOREACH_NODE(Radar::Point, Radar::mgr->m_pointNode1.m_child, cPoint)
			{
				if (cPoint->m_objType == Radar::MAP_UNENTERED_CAVE && cPoint->m_caveID == cCave->m_caveID.getID()) {
					cPoint->m_objType == Radar::MAP_INCOMPLETE_CAVE;
				}
			}
			MoviePlayArg arg(path, nullptr, nullptr, 0);
			playData->setCaveVisit(id, cCave->m_caveID);
			arg.m_origin                = cCave->getPosition();
			arg.m_angle                 = cCave->getFaceDir();
			moviePlayer->m_targetObject = cCave;
			moviePlayer->play(arg);
			return true;
		}
	}

	// cutscene of finding a hole to delve deeper in a cave
	if (ItemHole::mgr && !playData->isDemoFlag(DEMO_Find_Cave_Deeper_Hole)) {
		Iterator<BaseItem> holeIt(ItemHole::mgr);
		ItemHole::Item* cHole;
		f32 checkrad = FindCaveDeeperTriggerSize;
		CI_LOOP(holeIt)
		{
			ItemHole::Item* temp = static_cast<ItemHole::Item*>(*holeIt);
			Sys::Sphere bounds;
			cHole->getBoundingSphere(bounds);
			Vector3f naviPos = cHole->m_position - m_position3;
			f32 len          = naviPos.length();
			if (len < checkrad) {
				cHole = temp;
				checkrad -= len;
			}
		}

		if (cHole && moviePlayer) {
			MoviePlayArg arg("g0A_cv_find_hole", nullptr, nullptr, 0);
			arg.m_origin                = cHole->getPosition();
			arg.m_angle                 = cHole->getFaceDir();
			moviePlayer->m_targetObject = cHole;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Cave_Deeper_Hole);
			return true;
		}
	}

	if (ItemBigFountain::mgr && !playData->isDemoFlag(DEMO_Find_Cave_Geyser)) {
		Iterator<BaseItem> fountainIt(ItemBigFountain::mgr);
		ItemBigFountain::Item* cFountain;
		f32 checkrad = FindGeyserTriggerSize;
		CI_LOOP(fountainIt)
		{
			cFountain = static_cast<ItemBigFountain::Item*>(*fountainIt);
			Sys::Sphere bounds;
			cFountain->getBoundingSphere(bounds);
			bounds.m_radius += checkrad;
			if (checkDemoNaviAndPiki(bounds))
				break;
		}

		if (cFountain && moviePlayer) {
			MoviePlayArg arg("g0B_cv_find_fountain", nullptr, nullptr, 0);
			arg.m_origin                = cFountain->getPosition();
			arg.m_angle                 = cFountain->getFaceDir();
			moviePlayer->m_targetObject = cFountain;
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
			bounds.m_radius += checkrad;
			if (checkDemoNaviAndPiki(bounds))
				break;
		}

		if (cRock && moviePlayer) {
			MoviePlayArg arg("g19_find_rock", nullptr, nullptr, 0);
			arg.m_origin                = cRock->getPosition();
			arg.m_angle                 = cRock->getFaceDir();
			moviePlayer->m_targetObject = cRock;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Spiderwort_Mold);
			return true;
		}
	}

	// find the first spicy drop cutscene
	if (ItemHoney::mgr && !playData->isDemoFlag(DEMO_Find_Spicy_Drop)) {
		Iterator<ItemHoney::Item> honeyIt(ItemHoney::mgr);
		ItemHoney::Item* cHoney;
		f32 checkrad = FindSpicySprayTriggerSize;
		CI_LOOP(honeyIt)
		{
			ItemHoney::Item* temp = *honeyIt;
			if (temp->demoOK() && temp->m_honeyType == 1 && temp->isAlive()) {
				Sys::Sphere bounds;
				cHoney->getBoundingSphere(bounds);
				Vector3f naviPos = cHoney->m_position - m_position3;
				f32 len          = naviPos.length();
				if (len < checkrad) {
					cHoney = temp;
					checkrad -= len;
				}
			}
		}

		if (cHoney && moviePlayer) {
			MoviePlayArg arg("g2D_red_extract", nullptr, nullptr, 0);
			arg.m_origin                = cHoney->getPosition();
			arg.m_angle                 = cHoney->getFaceDir();
			moviePlayer->m_targetObject = cHoney;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Spicy_Drop);
			return true;
		}
	}

	// find the first bitter drop cutscene
	if (ItemHoney::mgr && !playData->isDemoFlag(DEMO_Find_Bitter_Drop)) {
		Iterator<ItemHoney::Item> honeyIt(ItemHoney::mgr);
		ItemHoney::Item* cHoney;
		f32 checkrad = FindBitterSprayTriggerSize;
		for (honeyIt.first(); !honeyIt.isDone(); honeyIt.next()) {
			ItemHoney::Item* temp = *honeyIt;
			if (temp->demoOK() && temp->m_honeyType == 2 && temp->isAlive()) {
				Sys::Sphere bounds;
				cHoney->getBoundingSphere(bounds);
				Vector3f naviPos = cHoney->m_position - m_position3;
				f32 len          = naviPos.length();
				if (len < checkrad) {
					cHoney = temp;
					checkrad -= len;
				}
			}
		}

		if (cHoney && moviePlayer) {
			MoviePlayArg arg("g2E_black_extract", nullptr, nullptr, 0);
			arg.m_origin                = cHoney->getPosition();
			arg.m_angle                 = cHoney->getFaceDir();
			moviePlayer->m_targetObject = cHoney;
			moviePlayer->play(arg);
			playData->setDemoFlag(DEMO_Find_Bitter_Drop);
			return true;
		}
	}

	return false;

	/*
	stwu     r1, -0x860(r1)
	mflr     r0
	stw      r0, 0x864(r1)
	stfd     f31, 0x850(r1)
	psq_st   f31, -1960(r1), 0, qr0
	stfd     f30, 0x840(r1)
	psq_st   f30, -1976(r1), 0, qr0
	stfd     f29, 0x830(r1)
	psq_st   f29, -1992(r1), 0, qr0
	stmw     r26, 0x818(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r5, lbl_80482D30@ha
	mr       r31, r3
	lwz      r0, 0x44(r4)
	addi     r30, r5, lbl_80482D30@l
	cmpwi    r0, 0
	bne      lbl_8021F424
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       isChangePlayer__Q24Game9CameraMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021F42C

lbl_8021F424:
	li       r3, 0
	b        lbl_80220B34

lbl_8021F42C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021F44C
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_8021F44C
	li       r3, 0
	b        lbl_80220B34

lbl_8021F44C:
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	bne      lbl_8021F460
	li       r3, 0
	b        lbl_80220B34

lbl_8021F460:
	lwz      r0, itemGateMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8021F478
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 8
	bl       isDemoFlag__Q24Game8PlayDataFi

lbl_8021F478:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x52
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r27, r0
	li       r4, 0x19
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi   r0, r3, 0x18
	lwz      r3, playData__4Game@sda21(r13)
	cntlzw   r0, r0
	li       r4, 0x1a
	srwi     r29, r0, 5
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi   r0, r3, 0x18
	cmplwi   r27, 0
	cntlzw   r0, r0
	srwi     r28, r0, 5
	beq      lbl_8021F6EC
	clrlwi.  r0, r29, 0x18
	bne      lbl_8021F4D4
	clrlwi.  r0, r28, 0x18
	beq      lbl_8021F6EC

lbl_8021F4D4:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8021F4E4
	addi     r5, r27, 4

lbl_8021F4E4:
	lis      r3, "__vt__Q24Game30EnemyIterator<Q34Game3Pom3Obj>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__Q24Game30EnemyIterator<Q34Game3Pom3Obj>"@l
	stw      r0, 0x330(r1)
	addi     r3, r1, 0x324
	stw      r4, 0x324(r1)
	stw      r0, 0x328(r1)
	stw      r5, 0x32c(r1)
	bl       "first__Q24Game30EnemyIterator<Q34Game3Pom3Obj>Fv"
	b        lbl_8021F6CC

lbl_8021F50C:
	lwz      r3, 0x32c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r27, 0x2d8(r3)
	mr       r26, r3
	cmpwi    r27, 3
	beq      lbl_8021F538
	cmpwi    r27, 4
	bne      lbl_8021F6C4

lbl_8021F538:
	cmpwi    r27, 3
	bne      lbl_8021F548
	clrlwi.  r0, r28, 0x18
	beq      lbl_8021F6C4

lbl_8021F548:
	cmpwi    r27, 4
	bne      lbl_8021F558
	clrlwi.  r0, r29, 0x18
	beq      lbl_8021F6C4

lbl_8021F558:
	mr       r3, r26
	addi     r4, r1, 0x314
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x320(r1)
	mr       r3, r31
	lfs      f0, lbl_8051A0D8@sda21(r2)
	addi     r4, r1, 0x314
	fadds    f0, f1, f0
	stfs     f0, 0x320(r1)
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_8021F6C4
	cmpwi    r27, 4
	bne      lbl_8021F630
	addi     r3, r1, 0x5d8
	addi     r4, r30, 0x1c
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0x128
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x128(r1)
	mr       r3, r26
	lfs      f1, 0x12c(r1)
	lfs      f0, 0x130(r1)
	stfs     f2, 0x5f0(r1)
	stfs     f1, 0x5f4(r1)
	stfs     f0, 0x5f8(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x5fc(r1)
	mr       r3, r26
	lwz      r5, moviePlayer__4Game@sda21(r13)
	li       r4, 0
	stw      r26, 0x194(r5)
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x5d8
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x19
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_8021F630:
	addi     r3, r1, 0x5a4
	addi     r4, r30, 0x30
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0x11c
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x11c(r1)
	mr       r3, r26
	lfs      f1, 0x120(r1)
	lfs      f0, 0x124(r1)
	stfs     f2, 0x5bc(r1)
	stfs     f1, 0x5c0(r1)
	stfs     f0, 0x5c4(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x5c8(r1)
	mr       r3, r26
	lwz      r5, moviePlayer__4Game@sda21(r13)
	li       r4, 0
	stw      r26, 0x194(r5)
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x5a4
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1a
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_8021F6C4:
	addi     r3, r1, 0x324
	bl       "next__Q24Game30EnemyIterator<Q34Game3Pom3Obj>Fv"

lbl_8021F6CC:
	lwz      r3, 0x32c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x328(r1)
	cmplw    r4, r3
	bne      lbl_8021F50C

lbl_8021F6EC:
	lwz      r0, mgr__Q24Game9ItemOnyon@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8021FBF4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x24
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021F814
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 1
	bne      lbl_8021F814
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	or.      r26, r3, r3
	beq      lbl_8021F814
	mr       r4, r26
	addi     r3, r1, 0x110
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x110(r1)
	mr       r4, r31
	lfs      f1, 0x114(r1)
	addi     r3, r1, 0x104
	lfs      f0, 0x118(r1)
	stfs     f2, 0x308(r1)
	stfs     f1, 0x30c(r1)
	stfs     f0, 0x310(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x104(r1)
	addi     r3, r1, 0x308
	lfs      f1, 0x108(r1)
	addi     r4, r1, 0x2fc
	lfs      f0, 0x10c(r1)
	stfs     f2, 0x2fc(r1)
	stfs     f1, 0x300(r1)
	stfs     f0, 0x304(r1)
	bl       "distance__10Vector3<f>FR10Vector3<f>"
	lfs      f0, lbl_8051A0DC@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8021F814
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x24
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r6, gameSystem__4Game@sda21(r13)
	addi     r3, r1, 0x570
	addi     r4, r30, 0x44
	li       r5, 0
	lwz      r6, 0x58(r6)
	li       r7, 0
	lwz      r6, 0xc8(r6)
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	lfs      f2, 0x308(r1)
	mr       r3, r26
	lfs      f1, 0x30c(r1)
	lfs      f0, 0x310(r1)
	stfs     f2, 0x588(r1)
	stfs     f1, 0x58c(r1)
	stfs     f0, 0x590(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x594(r1)
	addi     r4, r1, 0x570
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_8021F814:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2a
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021F9B4
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 2
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_8021F9B4
	mr       r4, r3
	addi     r3, r1, 0xf8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xf8(r1)
	mr       r4, r31
	lfs      f1, 0xfc(r1)
	addi     r3, r1, 0xec
	lfs      f0, 0x100(r1)
	stfs     f2, 0x2f0(r1)
	stfs     f1, 0x2f4(r1)
	stfs     f0, 0x2f8(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xec(r1)
	addi     r3, r1, 0x2f0
	lfs      f1, 0xf0(r1)
	addi     r4, r1, 0x2e4
	lfs      f0, 0xf4(r1)
	stfs     f2, 0x2e4(r1)
	stfs     f1, 0x2e8(r1)
	stfs     f0, 0x2ec(r1)
	bl       "distance__10Vector3<f>FR10Vector3<f>"
	lfs      f0, lbl_8051A0E0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8021F9B4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2a
	bl       setDemoFlag__Q24Game8PlayDataFi
	addi     r3, r1, 0x53c
	addi     r4, r30, 0x58
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	lwz      r0, pikiMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r4, 0
	addi     r3, r1, 0x2d4
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r4, 0x2e0(r1)
	li       r26, 0
	stw      r5, 0x2d4(r1)
	stw      r4, 0x2d8(r1)
	stw      r0, 0x2dc(r1)
	bl       "first__22Iterator<Q24Game4Piki>Fv"
	b        lbl_8021F938

lbl_8021F908:
	lwz      r3, 0x2dc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 2
	bne      lbl_8021F930
	mr       r26, r3
	b        lbl_8021F958

lbl_8021F930:
	addi     r3, r1, 0x2d4
	bl       "next__22Iterator<Q24Game4Piki>Fv"

lbl_8021F938:
	lwz      r3, 0x2dc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2d8(r1)
	cmplw    r4, r3
	bne      lbl_8021F908

lbl_8021F958:
	mr       r4, r26
	addi     r3, r1, 0xe0
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xe0(r1)
	mr       r3, r26
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	stfs     f2, 0x554(r1)
	stfs     f1, 0x558(r1)
	stfs     f0, 0x55c(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x560(r1)
	addi     r4, r1, 0x53c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_8021F9B4:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2b
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021FBF4
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 0
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_8021FBF4
	mr       r4, r3
	addi     r3, r1, 0xd4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xd4(r1)
	mr       r4, r31
	lfs      f1, 0xd8(r1)
	addi     r3, r1, 0xc8
	lfs      f0, 0xdc(r1)
	stfs     f2, 0x2c8(r1)
	stfs     f1, 0x2cc(r1)
	stfs     f0, 0x2d0(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc8(r1)
	addi     r3, r1, 0x2c8
	lfs      f1, 0xcc(r1)
	addi     r4, r1, 0x2bc
	lfs      f0, 0xd0(r1)
	stfs     f2, 0x2bc(r1)
	stfs     f1, 0x2c0(r1)
	stfs     f0, 0x2c4(r1)
	bl       "distance__10Vector3<f>FR10Vector3<f>"
	lfs      f0, lbl_8051A0E4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8021FBF4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2b
	bl       setDemoFlag__Q24Game8PlayDataFi
	addi     r3, r1, 0x508
	addi     r4, r30, 0x70
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021FA88
	addi     r3, r3, 4

lbl_8021FA88:
	li       r0, 0
	stw      r3, 0x2b4(r1)
	addi     r3, r1, 0x2ac
	stw      r0, 0x2b8(r1)
	stw      r0, 0x2ac(r1)
	stw      r0, 0x2b0(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	b        lbl_8021FAEC

lbl_8021FAA8:
	lwz      r12, 0(r3)
	lwz      r4, 0x2b0(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x1b
	bne      lbl_8021FAE4
	mr       r3, r27
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8021FAE4:
	addi     r3, r1, 0x2ac
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_8021FAEC:
	lwz      r3, 0x2ac(r1)
	cmplwi   r3, 0
	bne      lbl_8021FAA8
	lwz      r0, pikiMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r4, 0
	addi     r3, r1, 0x29c
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r4, 0x2a8(r1)
	li       r26, 0
	stw      r5, 0x29c(r1)
	stw      r4, 0x2a0(r1)
	stw      r0, 0x2a4(r1)
	bl       "first__22Iterator<Q24Game4Piki>Fv"
	b        lbl_8021FB60

lbl_8021FB28:
	lwz      r3, 0x2a4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r4, r3
	cmpwi    r0, 0
	bne      lbl_8021FB58
	mr       r26, r4
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8021FB58:
	addi     r3, r1, 0x29c
	bl       "next__22Iterator<Q24Game4Piki>Fv"

lbl_8021FB60:
	lwz      r3, 0x2a4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2a0(r1)
	cmplw    r4, r3
	bne      lbl_8021FB28
	mr       r4, r26
	addi     r3, r1, 0xbc
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xbc(r1)
	mr       r3, r26
	lfs      f1, 0xc0(r1)
	lfs      f0, 0xc4(r1)
	stfs     f2, 0x520(r1)
	stfs     f1, 0x524(r1)
	stfs     f0, 0x528(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x52c(r1)
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x538(r1)
	addi     r4, r1, 0x508
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_8021FBF4:
	lwz      r0, pelletMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8021FD58
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021FD58
	addi     r3, r1, 0x28c
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x28c
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_8021FD48

lbl_8021FC28:
	addi     r3, r1, 0x28c
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r26, r3
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_8021FD40
	mr       r4, r26
	addi     r3, r1, 0xb0
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0xb0(r1)
	mr       r3, r26
	lfs      f30, 0xb4(r1)
	lfs      f29, 0xb8(r1)
	bl       getBottomRadius__Q24Game6PelletFv
	lfs      f0, lbl_8051A0E8@sda21(r2)
	mr       r3, r31
	stfs     f31, 0x27c(r1)
	addi     r4, r1, 0x27c
	fadds    f0, f0, f1
	stfs     f30, 0x280(r1)
	stfs     f29, 0x284(r1)
	stfs     f0, 0x288(r1)
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_8021FD40
	addi     r3, r1, 0x4d4
	addi     r4, r30, 0x84
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0xa4
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xa4(r1)
	addi     r3, r26, 0x138
	lfs      f1, 0xa8(r1)
	addi     r5, r1, 0x270
	lfs      f0, 0xac(r1)
	li       r4, 2
	stfs     f2, 0x4ec(r1)
	stfs     f1, 0x4f0(r1)
	stfs     f0, 0x4f4(r1)
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x270(r1)
	lfs      f2, 0x278(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x4f8(r1)
	addi     r4, r1, 0x4d4
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_8021FD40:
	addi     r3, r1, 0x28c
	bl       next__Q24Game14PelletIteratorFv

lbl_8021FD48:
	addi     r3, r1, 0x28c
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021FC28

lbl_8021FD58:
	lwz      r0, pelletMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8021FF3C
	lwz      r5, mgr__Q24Game10PelletItem@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8021FD74
	addi     r5, r5, 0x54

lbl_8021FD74:
	lis      r3, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	stw      r0, 0x26c(r1)
	addi     r3, r1, 0x260
	stw      r4, 0x260(r1)
	stw      r0, 0x264(r1)
	stw      r5, 0x268(r1)
	bl       "first__36Iterator<Q34Game10PelletItem6Object>Fv"
	b        lbl_8021FF1C

lbl_8021FD9C:
	lwz      r3, 0x268(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	bl       getConfigIndex__Q24Game6PelletFv
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r26, r0
	mr       r4, r26
	bl       isFindItemDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021FF14
	mr       r3, r27
	bl       discoverDisabled__Q24Game6PelletFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021FF14
	mr       r4, r27
	addi     r3, r1, 0x98
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x98(r1)
	mr       r3, r27
	lfs      f30, 0x9c(r1)
	lfs      f31, 0xa0(r1)
	bl       getBottomRadius__Q24Game6PelletFv
	lfs      f0, lbl_8051A0EC@sda21(r2)
	cmpwi    r26, 0xa
	li       r28, 0
	fadds    f0, f0, f1
	beq      lbl_8021FE30
	cmpwi    r26, 0xb
	beq      lbl_8021FE30
	li       r28, 1

lbl_8021FE30:
	clrlwi.  r0, r28, 0x18
	stfs     f29, 0x250(r1)
	li       r3, 0
	stfs     f30, 0x254(r1)
	stfs     f31, 0x258(r1)
	stfs     f0, 0x25c(r1)
	bne      lbl_8021FE58
	mr       r3, r31
	addi     r4, r1, 0x250
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere

lbl_8021FE58:
	cmplwi   r3, 0
	bne      lbl_8021FE68
	clrlwi.  r0, r28, 0x18
	beq      lbl_8021FF14

lbl_8021FE68:
	mr       r5, r26
	addi     r3, r1, 0x70c
	addi     r4, r30, 0x98
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x4a0
	addi     r4, r1, 0x70c
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r27
	addi     r3, r1, 0x8c
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x8c(r1)
	addi     r3, r27, 0x138
	lfs      f1, 0x90(r1)
	addi     r5, r1, 0x244
	lfs      f0, 0x94(r1)
	li       r4, 2
	stfs     f2, 0x4b8(r1)
	stfs     f1, 0x4bc(r1)
	stfs     f0, 0x4c0(r1)
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x244(r1)
	lfs      f2, 0x24c(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x4c4(r1)
	addi     r4, r1, 0x4a0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r27, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       setFindItemDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_8021FF14:
	addi     r3, r1, 0x260
	bl       "next__36Iterator<Q34Game10PelletItem6Object>Fv"

lbl_8021FF1C:
	lwz      r3, 0x268(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x264(r1)
	cmplw    r4, r3
	bne      lbl_8021FD9C

lbl_8021FF3C:
	lwz      r0, pelletMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_802200E8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x18
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802200E8
	lwz      r5, mgr__Q24Game13PelletOtakara@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8021FF6C
	addi     r5, r5, 0x54

lbl_8021FF6C:
	lis      r3, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
	stw      r0, 0x240(r1)
	addi     r3, r1, 0x234
	stw      r4, 0x234(r1)
	stw      r0, 0x238(r1)
	stw      r5, 0x23c(r1)
	bl       "first__39Iterator<Q34Game13PelletOtakara6Object>Fv"
	b        lbl_802200C8

lbl_8021FF94:
	lwz      r3, 0x23c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x32c(r3)
	mr       r27, r3
	cmplwi   r0, 0
	bne      lbl_802200C0
	lwz      r0, 0xb8(r27)
	cmplwi   r0, 0
	bne      lbl_802200C0
	bl       discoverDisabled__Q24Game6PelletFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802200C0
	mr       r4, r27
	addi     r3, r1, 0x80
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x80(r1)
	mr       r3, r27
	lfs      f30, 0x84(r1)
	lfs      f31, 0x88(r1)
	bl       getBottomRadius__Q24Game6PelletFv
	lfs      f0, lbl_8051A0E8@sda21(r2)
	mr       r3, r31
	stfs     f29, 0x224(r1)
	addi     r4, r1, 0x224
	fadds    f0, f0, f1
	stfs     f30, 0x228(r1)
	stfs     f31, 0x22c(r1)
	stfs     f0, 0x230(r1)
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_802200C0
	addi     r3, r1, 0x46c
	addi     r4, r30, 0xac
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r27
	addi     r3, r1, 0x74
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x74(r1)
	addi     r3, r27, 0x138
	lfs      f1, 0x78(r1)
	addi     r5, r1, 0x218
	lfs      f0, 0x7c(r1)
	li       r4, 2
	stfs     f2, 0x484(r1)
	stfs     f1, 0x488(r1)
	stfs     f0, 0x48c(r1)
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x218(r1)
	lfs      f2, 0x220(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x490(r1)
	addi     r4, r1, 0x46c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r27, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x18
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_802200C0:
	addi     r3, r1, 0x234
	bl       "next__39Iterator<Q34Game13PelletOtakara6Object>Fv"

lbl_802200C8:
	lwz      r3, 0x23c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x238(r1)
	cmplw    r4, r3
	bne      lbl_8021FF94

lbl_802200E8:
	lwz      r0, mgr__Q24Game8ItemCave@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220304
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80220304
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, mgr__Q24Game8ItemCave@sda21(r13)
	li       r28, 0
	lwz      r29, 0x48(r3)
	cmplwi   r5, 0
	beq      lbl_80220144
	addi     r5, r5, 0x30

lbl_80220144:
	lis      r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x214(r1)
	addi     r3, r1, 0x208
	stw      r4, 0x208(r1)
	stw      r0, 0x20c(r1)
	stw      r5, 0x210(r1)
	bl       "first__26Iterator<Q24Game8BaseItem>Fv"
	b        lbl_802201EC

lbl_8022016C:
	lwz      r3, 0x210(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r26, r0
	mr       r4, r29
	addi     r5, r26, 0x1e8
	bl       isCaveFirstTime__Q24Game8PlayDataFiR4ID32
	clrlwi.  r0, r3, 0x18
	beq      lbl_802201E4
	mr       r3, r26
	addi     r4, r1, 0x1f8
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x204(r1)
	mr       r3, r31
	lfs      f0, lbl_8051A0F0@sda21(r2)
	addi     r4, r1, 0x1f8
	fadds    f0, f1, f0
	stfs     f0, 0x204(r1)
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_802201E4
	mr       r28, r26
	b        lbl_8022020C

lbl_802201E4:
	addi     r3, r1, 0x208
	bl       "next__26Iterator<Q24Game8BaseItem>Fv"

lbl_802201EC:
	lwz      r3, 0x210(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20c(r1)
	cmplw    r4, r3
	bne      lbl_8022016C

lbl_8022020C:
	cmplwi   r28, 0
	beq      lbl_80220304
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220304
	addi     r3, r1, 0x60c
	addi     r4, r30, 0xbc
	addi     r5, r28, 0x1e8
	crclr    6
	bl       sprintf
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80220278
	lwz      r5, 0x10(r3)
	li       r0, 0xb
	b        lbl_80220270

lbl_8022024C:
	lwz      r3, 0x18(r5)
	cmpwi    r3, 0x13
	bne      lbl_8022026C
	lwz      r4, 0x1f0(r28)
	lwz      r3, 0x20(r5)
	cmplw    r4, r3
	bne      lbl_8022026C
	stw      r0, 0x18(r5)

lbl_8022026C:
	lwz      r5, 4(r5)

lbl_80220270:
	cmplwi   r5, 0
	bne      lbl_8022024C

lbl_80220278:
	addi     r3, r1, 0x438
	addi     r4, r1, 0x60c
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r29
	addi     r5, r28, 0x1e8
	bl       setCaveVisit__Q24Game8PlayDataFiR4ID32
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x68(r1)
	mr       r3, r28
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	stfs     f2, 0x450(r1)
	stfs     f1, 0x454(r1)
	stfs     f0, 0x458(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x45c(r1)
	addi     r4, r1, 0x438
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r28, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r3, 1
	b        lbl_80220B34

lbl_80220304:
	lwz      r0, mgr__Q24Game8ItemHole@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_802204A0
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 3
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802204A0
	lwz      r5, mgr__Q24Game8ItemHole@sda21(r13)
	li       r26, 0
	cmplwi   r5, 0
	beq      lbl_80220338
	addi     r5, r5, 0x30

lbl_80220338:
	lis      r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x1f4(r1)
	lfs      f29, lbl_8051A0F4@sda21(r2)
	addi     r3, r1, 0x1e8
	stw      r4, 0x1e8(r1)
	stw      r0, 0x1ec(r1)
	stw      r5, 0x1f0(r1)
	bl       "first__26Iterator<Q24Game8BaseItem>Fv"
	b        lbl_802203E4

lbl_80220364:
	lwz      r3, 0x1f0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	addi     r4, r1, 0x1d8
	lwz      r12, 0x10(r12)
	mr       r27, r0
	mtctr    r12
	bctrl
	addi     r3, r1, 0x5c
	addi     r4, r1, 0x1d8
	addi     r5, r31, 0x20c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x5c(r1)
	addi     r3, r1, 0x1cc
	lfs      f1, 0x60(r1)
	lfs      f0, 0x64(r1)
	stfs     f2, 0x1cc(r1)
	stfs     f1, 0x1d0(r1)
	stfs     f0, 0x1d4(r1)
	bl       "length__10Vector3<f>CFv"
	lfs      f0, 0x1e4(r1)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_802203DC
	mr       r26, r27
	fmr      f29, f0

lbl_802203DC:
	addi     r3, r1, 0x1e8
	bl       "next__26Iterator<Q24Game8BaseItem>Fv"

lbl_802203E4:
	lwz      r3, 0x1f0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1ec(r1)
	cmplw    r4, r3
	bne      lbl_80220364
	cmplwi   r26, 0
	beq      lbl_802204A0
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_802204A0
	addi     r3, r1, 0x404
	addi     r4, r30, 0xd0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0x50
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x50(r1)
	mr       r3, r26
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	stfs     f2, 0x41c(r1)
	stfs     f1, 0x420(r1)
	stfs     f0, 0x424(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x428(r1)
	addi     r4, r1, 0x404
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 3
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_802204A0:
	lwz      r0, mgr__Q24Game15ItemBigFountain@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8022061C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8022061C
	lwz      r5, mgr__Q24Game15ItemBigFountain@sda21(r13)
	li       r26, 0
	cmplwi   r5, 0
	beq      lbl_802204D4
	addi     r5, r5, 0x30

lbl_802204D4:
	lis      r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x1c8(r1)
	addi     r3, r1, 0x1bc
	stw      r4, 0x1bc(r1)
	stw      r0, 0x1c0(r1)
	stw      r5, 0x1c4(r1)
	bl       "first__26Iterator<Q24Game8BaseItem>Fv"
	lfs      f31, lbl_8051A0F4@sda21(r2)
	b        lbl_80220560

lbl_80220500:
	lwz      r3, 0x1c4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	addi     r4, r1, 0x1ac
	lwz      r12, 0x10(r12)
	mr       r27, r0
	mtctr    r12
	bctrl
	lfs      f0, 0x1b8(r1)
	mr       r3, r31
	addi     r4, r1, 0x1ac
	fadds    f0, f0, f31
	stfs     f0, 0x1b8(r1)
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
	or.      r26, r3, r3
	beq      lbl_80220558
	mr       r26, r27
	b        lbl_80220580

lbl_80220558:
	addi     r3, r1, 0x1bc
	bl       "next__26Iterator<Q24Game8BaseItem>Fv"

lbl_80220560:
	lwz      r3, 0x1c4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c0(r1)
	cmplw    r4, r3
	bne      lbl_80220500

lbl_80220580:
	cmplwi   r26, 0
	beq      lbl_8022061C
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8022061C
	addi     r3, r1, 0x3d0
	addi     r4, r30, 0xe4
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0x44
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	mr       r3, r26
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 0x3e8(r1)
	stfs     f1, 0x3ec(r1)
	stfs     f0, 0x3f0(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3f4(r1)
	addi     r4, r1, 0x3d0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_8022061C:
	lwz      r0, mgr__Q24Game8ItemRock@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220778
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 9
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80220778
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8022064C
	addi     r5, r5, 0x30

lbl_8022064C:
	lis      r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x1a8(r1)
	addi     r3, r1, 0x19c
	stw      r4, 0x19c(r1)
	stw      r0, 0x1a0(r1)
	stw      r5, 0x1a4(r1)
	bl       "first__26Iterator<Q24Game8BaseItem>Fv"
	lfs      f31, lbl_8051A0F4@sda21(r2)
	b        lbl_80220758

lbl_80220678:
	lwz      r3, 0x1a4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	addi     r4, r1, 0x18c
	lwz      r12, 0x10(r12)
	mr       r26, r0
	mtctr    r12
	bctrl
	lfs      f0, 0x198(r1)
	mr       r3, r31
	addi     r4, r1, 0x18c
	fadds    f0, f0, f31
	stfs     f0, 0x198(r1)
	bl       checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_80220750
	addi     r3, r1, 0x39c
	addi     r4, r30, 0xfc
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0x38
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x38(r1)
	mr       r3, r26
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	stfs     f2, 0x3b4(r1)
	stfs     f1, 0x3b8(r1)
	stfs     f0, 0x3bc(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3c0(r1)
	addi     r4, r1, 0x39c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 9
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_80220750:
	addi     r3, r1, 0x19c
	bl       "next__26Iterator<Q24Game8BaseItem>Fv"

lbl_80220758:
	lwz      r3, 0x1a4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1a0(r1)
	cmplw    r4, r3
	bne      lbl_80220678

lbl_80220778:
	lwz      r0, mgr__Q24Game9ItemHoney@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220954
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x10
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80220954
	lwz      r5, mgr__Q24Game9ItemHoney@sda21(r13)
	li       r26, 0
	cmplwi   r5, 0
	beq      lbl_802207AC
	addi     r5, r5, 0x30

lbl_802207AC:
	lis      r3, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
	stw      r0, 0x188(r1)
	lfs      f29, lbl_8051A0F4@sda21(r2)
	addi     r3, r1, 0x17c
	stw      r4, 0x17c(r1)
	stw      r0, 0x180(r1)
	stw      r5, 0x184(r1)
	bl       "first__32Iterator<Q34Game9ItemHoney4Item>Fv"
	b        lbl_80220898

lbl_802207D8:
	lwz      r3, 0x184(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0x22c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220890
	lbz      r0, 0x1e0(r27)
	cmplwi   r0, 1
	bne      lbl_80220890
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220890
	mr       r3, r27
	addi     r4, r1, 0x16c
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x2c
	addi     r4, r1, 0x16c
	addi     r5, r31, 0x20c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x2c(r1)
	addi     r3, r1, 0x160
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	stfs     f2, 0x160(r1)
	stfs     f1, 0x164(r1)
	stfs     f0, 0x168(r1)
	bl       "length__10Vector3<f>CFv"
	lfs      f0, 0x178(r1)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80220890
	mr       r26, r27
	fmr      f29, f0

lbl_80220890:
	addi     r3, r1, 0x17c
	bl       "next__32Iterator<Q34Game9ItemHoney4Item>Fv"

lbl_80220898:
	lwz      r3, 0x184(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x180(r1)
	cmplw    r4, r3
	bne      lbl_802207D8
	cmplwi   r26, 0
	beq      lbl_80220954
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220954
	addi     r3, r1, 0x368
	addi     r4, r30, 0x10c
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 0x20
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r26
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x380(r1)
	stfs     f1, 0x384(r1)
	stfs     f0, 0x388(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38c(r1)
	addi     r4, r1, 0x368
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x10
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_80220954:
	lwz      r0, mgr__Q24Game9ItemHoney@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220B30
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x11
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80220B30
	lwz      r5, mgr__Q24Game9ItemHoney@sda21(r13)
	li       r26, 0
	cmplwi   r5, 0
	beq      lbl_80220988
	addi     r5, r5, 0x30

lbl_80220988:
	lis      r3, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
	stw      r0, 0x15c(r1)
	lfs      f29, lbl_8051A0F4@sda21(r2)
	addi     r3, r1, 0x150
	stw      r4, 0x150(r1)
	stw      r0, 0x154(r1)
	stw      r5, 0x158(r1)
	bl       "first__32Iterator<Q34Game9ItemHoney4Item>Fv"
	b        lbl_80220A74

lbl_802209B4:
	lwz      r3, 0x158(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0x22c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220A6C
	lbz      r0, 0x1e0(r27)
	cmplwi   r0, 2
	bne      lbl_80220A6C
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220A6C
	mr       r3, r27
	addi     r4, r1, 0x140
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x14
	addi     r4, r1, 0x140
	addi     r5, r31, 0x20c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x14(r1)
	addi     r3, r1, 0x134
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x134(r1)
	stfs     f1, 0x138(r1)
	stfs     f0, 0x13c(r1)
	bl       "length__10Vector3<f>CFv"
	lfs      f0, 0x14c(r1)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80220A6C
	mr       r26, r27
	fmr      f29, f0

lbl_80220A6C:
	addi     r3, r1, 0x150
	bl       "next__32Iterator<Q34Game9ItemHoney4Item>Fv"

lbl_80220A74:
	lwz      r3, 0x158(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x154(r1)
	cmplw    r4, r3
	bne      lbl_802209B4
	cmplwi   r26, 0
	beq      lbl_80220B30
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80220B30
	addi     r3, r1, 0x334
	addi     r4, r30, 0x11c
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl
"__ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>Ul"
	mr       r4, r26
	addi     r3, r1, 8
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r26
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x34c(r1)
	stfs     f1, 0x350(r1)
	stfs     f0, 0x354(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x358(r1)
	addi     r4, r1, 0x334
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r26, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x11
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r3, 1
	b        lbl_80220B34

lbl_80220B30:
	li       r3, 0

lbl_80220B34:
	psq_l    f31, -1960(r1), 0, qr0
	lfd      f31, 0x850(r1)
	psq_l    f30, -1976(r1), 0, qr0
	lfd      f30, 0x840(r1)
	psq_l    f29, -1992(r1), 0, qr0
	lfd      f29, 0x830(r1)
	lmw      r26, 0x818(r1)
	lwz      r0, 0x864(r1)
	mtlr     r0
	addi     r1, r1, 0x860
	blr
	*/
}

} // namespace Game

/*
 * distance__10Vector3<f>FR10Vector3<f>
 * --INFO--
 * Address:	80220B60
 * Size:	000058
 */
// template <>
// float Vector3f::distance(Vector3f& other)
//{
// float magnitude = ((*this) - (other)).magnitude();
// if (magnitude <= 0.0f) {
// 	return 0.0f;
// }
// return pikmin2_sqrtf(magnitude);
// return ((*this) - other).length();
/*
lfs      f1, 4(r3)
lfs      f0, 4(r4)
lfs      f3, 0(r3)
fsubs    f4, f1, f0
lfs      f2, 0(r4)
lfs      f1, 8(r3)
lfs      f0, 8(r4)
fsubs    f3, f3, f2
fmuls    f2, f4, f4
fsubs    f4, f1, f0
lfs      f0, lbl_8051A0F8@sda21(r2)
fmadds   f1, f3, f3, f2
fmuls    f2, f4, f4
fadds    f1, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_80220BB0
blelr
frsqrte  f0, f1
fmuls    f1, f0, f1
blr

lbl_80220BB0:
fmr      f1, f0
blr
*/
//}

/*
 * --INFO--
 * Address:	80220BB8
 * Size:	0000E4
 */
// void Game::EnemyIterator<Game::Pom::Obj>::next()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_80220BF8
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_80220C88

// lbl_80220BF8:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_80220C6C

// lbl_80220C18:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80220C88
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_80220C6C:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80220C18

// lbl_80220C88:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80220C9C
 * Size:	00004C
 */
// void Game::EnemyIterator<Game::Pom::Obj>::isDone()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r3, 8(r3)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 4(r31)
// 	subf     r0, r0, r3
// 	cntlzw   r0, r0
// 	srwi     r3, r0, 5
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80220CE8
 * Size:	000040
 */
// void Game::MoviePlayArg(char*, char*, IDelegate3<Game::MovieConfig*, unsigned long, unsigned long>*, unsigned long)
// {
// 	/*
// 	.loc_0x0:
// 	  stw       r4, 0x0(r3)
// 	  li        r0, 0
// 	  lfs       f0, -0x4268(r2)
// 	  stw       r5, 0x4(r3)
// 	  stw       r6, 0xC(r3)
// 	  stfs      f0, 0x18(r3)
// 	  stfs      f0, 0x1C(r3)
// 	  stfs      f0, 0x20(r3)
// 	  stfs      f0, 0x24(r3)
// 	  stw       r7, 0x28(r3)
// 	  stw       r0, 0x10(r3)
// 	  stw       r0, 0x8(r3)
// 	  stw       r0, 0x2C(r3)
// 	  stw       r0, 0x14(r3)
// 	  stw       r0, 0x30(r3)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80220D28
 * Size:	0000DC
 */
// void Game::EnemyIterator<Game::Pom::Obj>::first()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_80220D64
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_80220DF0

// lbl_80220D64:
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_80220DD4

// lbl_80220D80:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80220DF0
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_80220DD4:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80220D80

// lbl_80220DF0:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

#pragma dont_inline off
namespace Game {

/*
 * --INFO--
 * Address:	80220E04
 * Size:	0001C4
 */
FakePiki* Navi::checkDemoNaviAndPiki(Sys::Sphere& bounds)
{
	if (!(gameSystem->m_flags & GAMESYS_Unk6)) {
		return nullptr;
	}

	CellIteratorArg arg;
	arg.m_sphere = bounds;
	arg._14      = 1;
	CellIterator cell(arg);
	CI_LOOP(cell)
	{
		FakePiki* obj = static_cast<FakePiki*>(*cell);
		if ((obj->isNavi() || obj->isPiki()) && obj->isAlive() && (!obj->isPiki() || obj->isPikmin())) {
			Vector3f pos = obj->getPosition();
			f32 dist     = _distanceBetween2(pos, bounds.m_position);
			if (dist <= bounds.m_radius) {
				return obj;
			}
		}
	}
	return nullptr;
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r4
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_80220E34
	li       r3, 0
	b        lbl_80220FB0

lbl_80220E34:
	addi     r3, r1, 0x14
	bl       __ct__Q24Game15CellIteratorArgFv
	lfs      f0, 0(r30)
	li       r0, 1
	addi     r3, r1, 0x34
	addi     r4, r1, 0x14
	stfs     f0, 0x14(r1)
	lfs      f0, 4(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 8(r30)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0xc(r30)
	stfs     f0, 0x20(r1)
	stw      r0, 0x28(r1)
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x34
	bl       first__Q24Game12CellIteratorFv
	b        lbl_80220F9C

lbl_80220E7C:
	addi     r3, r1, 0x34
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80220EBC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220F94

lbl_80220EBC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220F94
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220F10
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220F94

lbl_80220F10:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 4(r30)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0(r30)
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r30)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A0F8@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80220F78
	ble      lbl_80220F7C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80220F7C

lbl_80220F78:
	fmr      f1, f0

lbl_80220F7C:
	lfs      f0, 0xc(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80220F94
	mr       r3, r31
	b        lbl_80220FB0

lbl_80220F94:
	addi     r3, r1, 0x34
	bl       next__Q24Game12CellIteratorFv

lbl_80220F9C:
	addi     r3, r1, 0x34
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80220E7C
	li       r3, 0

lbl_80220FB0:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80220FC8
 * Size:	000038
 */
// void Game::EnemyIterator<Game::Pom::Obj>::operator*(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r4, 4(r4)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80221000
 * Size:	000028
 */
void __sinit_navi_demoCheck_cpp()
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C0A18@ha
	stw      r0, lbl_80515C40@sda21(r13)
	stfsu    f0, lbl_804C0A18@l(r3)
	stfs     f0, lbl_80515C44@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
