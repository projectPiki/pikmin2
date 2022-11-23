#include "Game/Entities/Item.h"
#include "Game/Piki.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "Game/MapMgr.h"
#include "Game/BirthMgr.h"
#include "Game/gameStages.h"
#include "efx/TPod.h"
#include "efx/Container.h"
#include "efx/Arg.h"
#include "efx/TUfo.h"
#include "efx/TOnyon.h"
#include "efx/OnyonSpot.h"
#include "SysShape/Animator.h"
#include "Sys/DrawBuffers.h"
#include "nans.h"
#include "ParticleID.h"
#include "VSOtakaraName.h"
#include "Radar.h"
#include "PS.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "PSM/Scene.h"
#include "JSystem/JAL/JALCalc.h"
#include "Dolphin/rand.h"
#include "PikiAi.h"

static bool sVolveFlag;

namespace Game {

static const char someOnyonMgrArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char onyonMgrName[]      = "onyonMgr";

/*
 * --INFO--
 * Address:	80174CA0
 * Size:	00080C
 */
void Onyon::movieUserCommand(u32 code, MoviePlayer* player)
{
	switch (code) {
	case 100: // 0x64
	case 105: // 0x69
		if (!playData->hasBootContainer(m_onyonType)) {
			JUT_PANICLINE(534, "BIKKURI no boot!\n");
		}

		int allPikiCount = GameStat::getAllPikmins(m_onyonType);

		if (code == 105 || !GameStat::checkZikatu(m_onyonType)) {
			playData->setContainer(m_onyonType);
			ItemPikihead::Item* pikiHead = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (pikiHead) {
				ItemPikihead::InitArg pikiHeadInitArg((EPikiKind)m_onyonType, Vector3f::zero);
				pikiHead->init(&pikiHeadInitArg);
				BirthMgr::inc(pikiHead->m_pikiColor);
				pikiHead->movie_begin(false);
				doEmit(pikiHead, true);
				return;
			}

			gameSystem->m_section->_12C->frameInitAll();
			gameSystem->m_section->_130->frameInitAll();
			ItemPikihead::Item* targetPikihead = nullptr;
			f32 maxDist                        = 0.0f;
			Iterator<ItemPikihead::Item> iterSprout(ItemPikihead::mgr);

			CI_LOOP(iterSprout)
			{
				ItemPikihead::Item* item = (*iterSprout);
				if (item->isAlive()) {
					f32 sphereDist = item->calcSphereDistance(this);
					if (sphereDist > maxDist) {
						maxDist        = sphereDist;
						targetPikihead = item;
					}
				}
			}

			if (targetPikihead) {
				GameStat::mePikis.dec(targetPikihead->m_pikiColor);
				int& pikiHeadCount = playData->m_pikiContainer.getCount(targetPikihead->m_pikiColor, targetPikihead->m_pikiHappa);
				pikiHeadCount++;
				CreatureKillArg killArg(1);
				targetPikihead->kill(&killArg);
			} else {

				Iterator<Piki> iterPiki(pikiMgr);
				Piki* targetPiki = nullptr;
				CI_LOOP(iterPiki)
				{
					Piki* piki = (*iterPiki);
					if (piki->isAlive() && !piki->isZikatu()) {
						f32 sphereDist = piki->calcSphereDistance(this);
						if (sphereDist > maxDist) {
							maxDist    = sphereDist;
							targetPiki = piki;
						}
					}
				}

				if (targetPiki) {
					int& pikiCount = playData->m_pikiContainer.getCount(targetPiki->m_pikiKind, targetPiki->m_happaKind);
					pikiCount++;
					CreatureKillArg pikiKillArg(1);
					targetPiki->kill(&pikiKillArg);
				}
			}

			ItemPikihead::Item* sprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (sprout) {
				ItemPikihead::InitArg sproutInitArg((EPikiKind)m_onyonType, Vector3f::zero);
				sprout->init(&sproutInitArg);
				BirthMgr::inc(sprout->m_pikiColor);
				sprout->movie_begin(false);
				doEmit(sprout, true);
			} else {
				JUT_PANICLINE(641, "onyon supply failure!\n");
			}
		}
		break;

	case 101: // 0x65
		if (!(m_onyonType > ONYON_TYPE_YELLOW)) {
			if (moviePlayer->m_flags & 0x2) {
				setSpotState(SPOTSTATE_Opened);
			} else {
				setSpotState(SPOTSTATE_Closing);
			}
		} else if (m_onyonType == ONYON_TYPE_SHIP || m_onyonType == ONYON_TYPE_POD) {
			setSpotEffect(true);
		}
		break;

	case 102: // 0x66
		if (!(m_onyonType > ONYON_TYPE_YELLOW)) {
			if (moviePlayer->m_flags & 0x2) {
				setSpotState(SPOTSTATE_Closed);
			} else {
				setSpotState(SPOTSTATE_Opening);
			}
		} else if (m_onyonType == ONYON_TYPE_SHIP || m_onyonType == ONYON_TYPE_POD) {
			setSpotEffect(false);
		}
		break;

	case 103: // 0x67
		if (m_onyonType == ONYON_TYPE_SHIP) {
			startPropera();
		}
		break;

	case 104: // 0x68
		if (m_onyonType == ONYON_TYPE_SHIP) {
			stopPropera();
		}
		break;
	}
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000034
//  */
// void Onyon::openUFO(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000068
//  */
// void Onyon::closeUFO(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	801754AC
 * Size:	0000E4
 */
bool Onyon::isSuckReady()
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		if (m_suckState == SUCKSTATE_Opened || m_suckState == SUCKSTATE_GetPellet || m_suckState == SUCKSTATE_IdleOpen) {
			return true;
		} else if (m_suckState == SUCKSTATE_IdleClosed) {
			m_animator.startAnim(0, this);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->isStoryFlag(STORY_DebtPaid)) {
				sound = PSSE_EV_PODGOLD_OPEN;
			} // debt repayed
			startSound(sound);

			m_animSpeed = 30.0f;
			m_suckState = SUCKSTATE_Opening;
			m_ufoPodOpen->create(nullptr);
			m_suckTimer = 0.0f;
		}
		return false;
	} else {
		return true;
	}
}

/*
 * --INFO--
 * Address:	80175590
 * Size:	000028
 * Matches!
 * Can either be C-style BOOL or weird if/else with temp and casting.
 */
BOOL Onyon::isSuckArriveWait() { return m_onyonType == ONYON_TYPE_SHIP ? m_suckState == SUCKSTATE_Closing : FALSE; }

/*
 * --INFO--
 * Address:	801755B8
 * Size:	00068C
 */
void Onyon::setType(int type)
{
	m_onyonType = type;
	setupTevRegAnim(m_onyonType);
	m_container    = nullptr;
	m_containerAct = nullptr;
	m_ufoSpot      = nullptr;
	m_ufoSpotAct01 = nullptr;
	m_ufoPodOpen   = nullptr;
	SysShape::Joint* jnt;

	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		m_container    = new efx::Container;
		m_containerAct = new efx::ContainerAct;

	} else if (m_onyonType == ONYON_TYPE_SHIP) {
		jnt              = m_model->getJoint("start1");
		m_ufoSpot        = new ::efx::TUfoSpot(jnt->getWorldMatrix()->m_matrix.mtxView);
		m_ufoPodOpenSuck = new ::efx::TUfoPodOpenSuck(jnt->getWorldMatrix());
		m_ufoSpotAct01   = new ::efx::TUfoSpotact_ver01(jnt->getWorldMatrix()->m_matrix.mtxView);

		jnt          = m_model->getJoint("pmotion3");
		m_ufoPodOpen = new ::efx::TUfoPodOpen(jnt->getWorldMatrix()->m_matrix.mtxView);

		jnt = m_model->getJoint("in1");
		P2ASSERTLINE(782, jnt);
		m_ufoGasIn = new ::efx::TUfoGasIn(jnt->getWorldMatrix());
		jnt        = m_model->getJoint("out");
		P2ASSERTLINE(784, jnt);
		m_ufoGasOut = new ::efx::TUfoGasOut(jnt->getWorldMatrix());

	} else if (m_onyonType == ONYON_TYPE_POD) {
		jnt = m_model->getJoint("pot_ctr");
		P2ASSERTLINE(788, jnt);
		m_podOpenA = new ::efx::TPodOpenA;
		m_podOpenB = new ::efx::TPodOpenB(jnt->getWorldMatrix());
		m_podSpot  = new ::efx::TPodSpot(&m_position, &m_faceDir);
		m_podKira  = new ::efx::TPodKira(jnt->getWorldMatrix());

		m_podKira->create(nullptr);
		m_podOpenB->create(nullptr);
		m_podSpot->create(nullptr);

		efx::Arg arg(this);
		m_podOpenA->create(&arg);
	}
}

/*
 * --INFO--
 * Address:	80175D4C
 * Size:	0000D0
 */
void Onyon::setupTevRegAnim(int type)
{
	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		m_matAnim1->start(&ItemOnyon::mgr->m_onyonTevAnim[type]);
		m_onyonType = type;
	} else if (m_onyonType == ONYON_TYPE_SHIP) {
		m_matAnim1->start(&ItemOnyon::mgr->m_ufoTevAnim[0]);
		m_matAnim2 = new Sys::MatLoopAnimator;
		m_matAnim2->start(&ItemOnyon::mgr->m_ufoTevAnim[1]);
	}
}

/*
 * --INFO--
 * Address:	80175E1C
 * Size:	000074
 */
bool Onyon::stimulate(Interaction& act) { return act.actCommon(this) ? act.actOnyon(this) : false; }

/*
 * --INFO--
 * Address:	80175E90
 * Size:	000158
 */
bool InteractSuckArrive::actOnyon(Onyon* item)
{
	if (item->m_onyonType == ONYON_TYPE_SHIP) {
		SysShape::Joint* jnt = item->m_model->getJoint("pmotion3");
		if (jnt) {
			efx::TUfoPodSuck efx(jnt->getWorldMatrix());
			efx.create(nullptr);
		}
		item->m_suckTimer = 0.0f;
		if (item->m_suckState == Onyon::SUCKSTATE_IdleClosed) {
			SysShape::MotionListener* mlisten = item;
			item->m_animator.startAnim(0, mlisten);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->isStoryFlag(STORY_DebtPaid)) // debt repayed
				sound = PSSE_EV_PODGOLD_OPEN;
			item->startSound(sound);
			item->m_animSpeed = 30.0f;
			item->m_suckState = Onyon::SUCKSTATE_Opening;
			item->m_ufoPodOpen->create(0);
			return true;
		}
		if (item->m_suckState == Onyon::SUCKSTATE_Closing) {
			JUT_PANICLINE(859, "damedayo !: arrive  ufoSuckState=%d\n", item->m_suckState);
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80175FE8
 * Size:	000008
 */
bool Onyon::needShadow() { return false; }

/*
 * --INFO--
 * Address:	80175FF0
 * Size:	0000A4
 */
void Onyon::getShadowParam(ShadowParam& param)
{
	param.m_position = getPosition();
	if (m_onyonType == ONYON_TYPE_POD) {
		param.m_position.y += 80.0f;
		param.m_boundingSphere.m_radius = 100.0f;
		param._1C                       = 27.0f; // shadow size
	}
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	80176094
 * Size:	000034
 */
bool Onyon::sound_culling() { return (m_onyonType <= ONYON_TYPE_YELLOW) ? Creature::sound_culling() : false; }

/*
 * --INFO--
 * Address:	801760C8
 * Size:	000DBC
 */
bool InteractSuckDone::actOnyon(Onyon* item)
{
	// this right here is what causes the glitch to break the seeds from stuff brought to onions during cutscenes
	if (item->isMovieActor() && !item->isMovieExtra()) {
		return false;
	}

	P2ASSERTLINE(899, m_creature->isPellet());
	Pellet* pellet = static_cast<Pellet*>(m_creature);

	if (item->m_onyonType <= ONYON_TYPE_YELLOW) {
		item->m_animator.startAnim(3, item);
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);

	} else if (item->m_onyonType == ONYON_TYPE_POD) {
		item->m_animator.startAnim(2, item);
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
		efx::TPodGepu podFX;
		Vector3f position = item->getPosition();
		efx::Arg arg(position);
		podFX.create(&arg);
		if (moviePlayer && moviePlayer->m_demoState == 0) {
			Vector3f pos = item->getPosition();
			int money    = pellet->m_config->m_params.m_money.m_data;
			if (money > 0 && (pellet->getKind() == 1 || pellet->getKind() == 3 || pellet->getKind() == 4)) {
				pos += Vector3f(0.0f, 80.0f, 0.0f);
				carryInfoMgr->appearPoko(pos, money);
			}
		}

	} else {
		item->m_animator.startAnim(0, item);
		item->m_animator.setFrameByKeyType(0);
		item->m_suckState = Onyon::SUCKSTATE_GetPellet;
		item->m_animSpeed = 30.0f;
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
		item->m_suckTimer    = 0.0f;
		SysShape::Joint* jnt = item->m_model->getJoint("pmotion3");
		efx::TUfoPodGepu ufoFX(jnt->getWorldMatrix());
		ufoFX.create(nullptr);

		if (moviePlayer && moviePlayer->m_demoState == 0) {
			Vector3f pos = item->getPosition();

			f32 theta = item->getFaceDir();
			pos += Vector3f(20.0f * pikmin2_sinf(theta), 117.0f, 20.0f * pikmin2_cosf(theta));
			int money = pellet->m_config->m_params.m_money.m_data;
			if (money > 0) {
				carryInfoMgr->appearPoko(pos, money);
			}
		}
	}

	item->m_pikminType = item->m_onyonType;
	if (item->m_onyonType <= ONYON_TYPE_YELLOW) {
		SysShape::Joint* jnt = item->m_model->getJoint("body_l");
		if (jnt) {
			::efx::TOnyonEatAB onyonFX(jnt->getWorldMatrix());
			onyonFX.create(nullptr);
		}
	}

	if (gameSystem->isChallengeMode() && !strcmp(pellet->m_config->m_params.m_name.m_data, "key")) {
		InteractGotKey act(item);
		Iterator<BaseItem> iterFountain(ItemBigFountain::mgr);
		CI_LOOP(iterFountain)
		{
			Game::ItemBigFountain::Item* cFountain = static_cast<ItemBigFountain::Item*>(*iterFountain);
			cFountain->stimulate(act);
		}
		Iterator<BaseItem> iterHole(ItemHole::mgr);
		CI_LOOP(iterHole)
		{
			Game::ItemHole::Item* cHole = static_cast<ItemHole::Item*>(*iterHole);
			cHole->stimulate(act);
		}
	}

	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		int i = 0;

		const char* peltnames[2] = { "", "" };
		peltnames[0]             = VsOtakaraName::cBedamaRed;
		peltnames[1]             = VsOtakaraName::cBedamaBlue;

		while (i < 2) {
			if (!strcmp(peltnames[i], pellet->m_config->m_params.m_name.m_data)) {
				if (i == 1 - item->m_onyonType) {
					_08           = 1;
					Vector3f offs = item->getFlagSetPos();
					offs.y += (pellet->getCylinderHeight() * 0.5f + 2.0f);
					pellet->setPosition(offs, 0);
					Vector3f vel(0.0f, 400.0f, 0.0f);
					pellet->setVelocity(vel);
					pellet->setAlive(true);
					pellet->finish_carrymotion();
					pellet->m_pelletSM->transit(pellet, 5, 0);
				} else {
					GameMessageVsBattleFinished mesg;
					mesg._04 = 1 - i;
					gameSystem->m_section->sendMessage(mesg);
					return true;
				}
			}
			i++;
		}

		if (pellet->_32C == 6) {
			GameMessageVsGetOtakara mesg(1 - item->m_onyonType);
			gameSystem->m_section->sendMessage(mesg);
			return true;
		}

		if (pellet->_32C == 3) {
			GameMessageVsGotCard mesg(1 - item->m_onyonType);
			gameSystem->m_section->sendMessage(mesg);
			return true;
		}
	}

	if (gameSystem->m_mode != GSM_VERSUS_MODE) {
		int money = pellet->m_config->m_params.m_money.m_data;
		if (gameSystem->m_inCave) {
			playData->_EC += money;
		} else {
			gameSystem->m_section->_PADDING00 += money;
		}
	}

	if (gameSystem->isChallengeMode()) {
		gameSystem->m_section->addChallengeScore(pellet->m_config->m_params.m_money.m_data);
		return true;

	} else {
		// number pellet (checks if color matches onion)
		if (pellet->getKind() == PELTYPE_NUMBER) {
			int color = pellet->m_pelletColor;
			int min, max;
			pellet->getPikiBirthCount(min, max);
			u16 type = item->m_onyonType;
			if (type == ONYON_TYPE_POD || (u16)color == type) {
				item->m_toBirth += max;
			} else {
				item->m_toBirth += min;
			}
		} else {
			// carry treasure/item/carcass to an onion/ship
			if (pellet->getKind() == PELTYPE_TREASURE || pellet->getKind() == PELTYPE_UPGRADE || pellet->getKind() == PELTYPE_CARCASS) {
				// brought to the pod (the game just assumes youre in a cave)
				if (item->m_onyonType == ONYON_TYPE_POD) {
					if (pellet->m_config->m_params.m_money.m_data > 0) {
						playData->obtainPellet_Cave(pellet);
					}
					// brought to the ship (the game just assumes youre above ground)
				} else if (item->m_onyonType == ONYON_TYPE_SHIP) {
					if (pellet->m_config->m_params.m_money.m_data > 0) {
						playData->obtainPellet_Main(pellet);
						if (!strcmp("yes", pellet->m_config->m_params.m_unique.m_data)) {
							CourseInfo* info = gameSystem->m_section->getCurrentCourseInfo();
							if (info) {
								playData->incGroundOtakara(info->m_courseIndex);
							}
						}
					}
					// carry carcass to onions
				} else if (pellet->getKind() == PELTYPE_CARCASS) {
					int min, max;
					pellet->getPikiBirthCount(min, max);
					item->m_toBirth += max;
				}
			} else {
				pellet->getKind();
			}
		}
	}
	return true;
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stmw     r27, 0x12c(r1)
	mr       r30, r4
	lis      r4, lbl_8047E620@ha
	mr       r29, r3
	mr       r3, r30
	addi     r28, r4, lbl_8047E620@l
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176128
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80176128
	li       r3, 0
	b        lbl_80176E70

lbl_80176128:
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80176158
	addi     r3, r28, 0x18
	addi     r5, r28, 0x60
	li       r4, 0x383
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80176158:
	lhz      r0, 0x22e(r30)
	lwz      r31, 4(r29)
	cmplwi   r0, 2
	bgt      lbl_801761A0
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_80176178
	addi     r5, r30, 0x178

lbl_80176178:
	addi     r3, r30, 0x1a8
	li       r4, 3
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	mr       r3, r30
	li       r4, 0x3805
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	b        lbl_80176550

lbl_801761A0:
	cmplwi   r0, 3
	bne      lbl_8017635C
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_801761B8
	addi     r5, r30, 0x178

lbl_801761B8:
	addi     r3, r30, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	mr       r3, r30
	li       r4, 0x3805
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0xd4(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r3, __vt__Q23efx8TPodGepu@ha
	li       r7, 0x17e
	stw      r0, 0xd4(r1)
	addi     r0, r3, __vt__Q23efx8TPodGepu@l
	li       r6, 0x17f
	mr       r4, r30
	sth      r7, 0xd8(r1)
	addi     r3, r1, 0x5c
	sth      r6, 0xda(r1)
	stw      r5, 0xdc(r1)
	stw      r5, 0xe0(r1)
	stw      r0, 0xd4(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x5c(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0x60(r1)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lfs      f0, 0x64(r1)
	addi     r3, r1, 0xd4
	stw      r0, 0xc4(r1)
	addi     r4, r1, 0xc4
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80176550
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80176550
	mr       r4, r30
	addi     r3, r1, 0x50
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x50(r1)
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	stfs     f2, 0xb8(r1)
	stfs     f1, 0xbc(r1)
	stfs     f0, 0xc0(r1)
	lwz      r3, 0x35c(r31)
	lwz      r28, 0x170(r3)
	cmpwi    r28, 0
	ble      lbl_80176550
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_8017631C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_8017631C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_80176550

lbl_8017631C:
	lfs      f1, 0xb8(r1)
	mr       r5, r28
	lfs      f4, lbl_80518A2C@sda21(r2)
	addi     r4, r1, 0xb8
	lfs      f0, 0xc0(r1)
	fadds    f3, f1, f4
	lfs      f2, 0xbc(r1)
	lfs      f1, lbl_80518A4C@sda21(r2)
	fadds    f0, f0, f4
	lwz      r3, carryInfoMgr@sda21(r13)
	fadds    f1, f2, f1
	stfs     f3, 0xb8(r1)
	stfs     f1, 0xbc(r1)
	stfs     f0, 0xc0(r1)
	bl       "appearPoko__12CarryInfoMgrFRC10Vector3<f>i"
	b        lbl_80176550

lbl_8017635C:
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_8017636C
	addi     r5, r30, 0x178

lbl_8017636C:
	addi     r3, r30, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	addi     r3, r30, 0x1a8
	li       r4, 0
	bl       setFrameByKeyType__Q28SysShape8AnimatorFUl
	li       r0, 2
	lfs      f0, lbl_80518A30@sda21(r2)
	stb      r0, 0x240(r30)
	mr       r3, r30
	li       r4, 0x3805
	stfs     f0, 0x1d4(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r28, 0x54
	stfs     f0, 0x244(r30)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0xf8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx11TUfoPodGepu@ha
	stw      r0, 0xf8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1c4
	li       r5, 0x1c5
	stw      r0, 0xf8(r1)
	addi     r0, r4, __vt__Q23efx11TUfoPodGepu@l
	li       r4, 0
	stw      r3, 0x108(r1)
	addi     r3, r1, 0xf8
	sth      r7, 0xfc(r1)
	sth      r5, 0xfe(r1)
	stw      r6, 0x100(r1)
	stw      r6, 0x104(r1)
	stw      r0, 0xf8(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80176550
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80176550
	mr       r4, r30
	addi     r3, r1, 0x44
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	mr       r3, r30
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 0xac(r1)
	stfs     f1, 0xb0(r1)
	stfs     f0, 0xb4(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80176490
	fneg     f2, f2

lbl_80176490:
	lfs      f3, lbl_80518A60@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f5, lbl_80518A5C@sda21(r2)
	fcmpo    cr0, f1, f0
	lfs      f4, 0xac(r1)
	fctiwz   f0, f2
	stfd     f0, 0x110(r1)
	lwz      r0, 0x114(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f6, f5, f0
	bge      lbl_801764F4
	lfs      f0, lbl_80518A64@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x118(r1)
	lwz      r0, 0x11c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8017650C

lbl_801764F4:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x120(r1)
	lwz      r0, 0x124(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8017650C:
	fmuls    f3, f5, f0
	lfs      f0, 0xb4(r1)
	lfs      f2, 0xb0(r1)
	lfs      f1, lbl_80518A68@sda21(r2)
	fadds    f0, f0, f6
	fadds    f3, f4, f3
	fadds    f1, f2, f1
	stfs     f0, 0xb4(r1)
	stfs     f3, 0xac(r1)
	stfs     f1, 0xb0(r1)
	lwz      r3, 0x35c(r31)
	lwz      r5, 0x170(r3)
	cmpwi    r5, 0
	ble      lbl_80176550
	lwz      r3, carryInfoMgr@sda21(r13)
	addi     r4, r1, 0xac
	bl       "appearPoko__12CarryInfoMgrFRC10Vector3<f>i"

lbl_80176550:
	lhz      r0, 0x22e(r30)
	sth      r0, 0x230(r30)
	lhz      r0, 0x22e(r30)
	cmplwi   r0, 2
	bgt      lbl_801765D8
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_80518A6C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_801765D8
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0xe4(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx11TOnyonEatAB@ha
	stw      r0, 0xe4(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0xfe
	li       r5, 0xff
	stw      r0, 0xe4(r1)
	addi     r0, r4, __vt__Q23efx11TOnyonEatAB@l
	li       r4, 0
	stw      r3, 0xf4(r1)
	addi     r3, r1, 0xe4
	sth      r7, 0xe8(r1)
	sth      r5, 0xea(r1)
	stw      r6, 0xec(r1)
	stw      r6, 0xf0(r1)
	stw      r0, 0xe4(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg

lbl_801765D8:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801765F4
	cmpwi    r0, 3
	bne      lbl_801765F8

lbl_801765F4:
	li       r3, 1

lbl_801765F8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801769EC
	lwz      r3, 0x35c(r31)
	addi     r4, r2, lbl_80518A74@sda21
	lwz      r3, 0x40(r3)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801769EC
	lis      r4, __vt__Q24Game11Interaction@ha
	lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
	addi     r0, r4, __vt__Q24Game11Interaction@l
	stw      r30, 0x34(r1)
	lis      r4, __vt__Q24Game14InteractGotKey@ha
	cmplwi   r3, 0
	stw      r0, 0x30(r1)
	addi     r0, r4, __vt__Q24Game14InteractGotKey@l
	stw      r0, 0x30(r1)
	beq      lbl_80176644
	addi     r3, r3, 0x30

lbl_80176644:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0xa8(r1)
	cmplwi   r0, 0
	stw      r4, 0x9c(r1)
	stw      r0, 0xa0(r1)
	stw      r3, 0xa4(r1)
	bne      lbl_80176680
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801767F0

lbl_80176680:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801766EC

lbl_80176698:
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801767F0
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)

lbl_801766EC:
	lwz      r12, 0x9c(r1)
	addi     r3, r1, 0x9c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176698
	b        lbl_801767F0

lbl_8017670C:
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	addi     r4, r1, 0x30
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xa8(r1)
	cmplwi   r0, 0
	bne      lbl_80176760
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801767F0

lbl_80176760:
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801767D4

lbl_80176780:
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801767F0
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)

lbl_801767D4:
	lwz      r12, 0x9c(r1)
	addi     r3, r1, 0x9c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176780

lbl_801767F0:
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa0(r1)
	cmplw    r4, r3
	bne      lbl_8017670C
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80176820
	addi     r3, r3, 0x30

lbl_80176820:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x98(r1)
	cmplwi   r0, 0
	stw      r4, 0x8c(r1)
	stw      r0, 0x90(r1)
	stw      r3, 0x94(r1)
	bne      lbl_8017685C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801769CC

lbl_8017685C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801768C8

lbl_80176874:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801769CC
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)

lbl_801768C8:
	lwz      r12, 0x8c(r1)
	addi     r3, r1, 0x8c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176874
	b        lbl_801769CC

lbl_801768E8:
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	addi     r4, r1, 0x30
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x98(r1)
	cmplwi   r0, 0
	bne      lbl_8017693C
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801769CC

lbl_8017693C:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801769B0

lbl_8017695C:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801769CC
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)

lbl_801769B0:
	lwz      r12, 0x8c(r1)
	addi     r3, r1, 0x8c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017695C

lbl_801769CC:
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x90(r1)
	cmplw    r4, r3
	bne      lbl_801768E8

lbl_801769EC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80176C18
	lwz      r3, lbl_80520E60@sda21(r2)
	addi     r28, r1, 0x28
	lwz      r0, lbl_80520E64@sda21(r2)
	li       r27, 0
	stw      r3, 0x28(r1)
	lwz      r3, cBedamaRed__13VsOtakaraName@sda21(r13)
	stw      r0, 0x2c(r1)
	lwz      r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
	stw      r3, 0x28(r1)
	stw      r0, 0x2c(r1)

lbl_80176A24:
	lwz      r4, 0x35c(r31)
	lwz      r3, 0(r28)
	lwz      r4, 0x40(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80176B5C
	lhz      r0, 0x22e(r30)
	subfic   r0, r0, 1
	cmpw     r27, r0
	bne      lbl_80176B18
	li       r0, 1
	mr       r4, r30
	stb      r0, 8(r29)
	addi     r3, r1, 0x38
	bl       getFlagSetPos__Q24Game5OnyonFv
	lfs      f2, 0x38(r1)
	mr       r3, r31
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f3, lbl_80518A7C@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_80518A78@sda21(r2)
	addi     r4, r1, 0x80
	lfs      f0, 0x84(r1)
	li       r5, 0
	fmadds   f1, f3, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x84(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f1, lbl_80518A2C@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_80518A80@sda21(r2)
	addi     r4, r1, 0x74
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	stfs     f1, 0x7c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       finish_carrymotion__Q24Game6PelletFv
	lwz      r3, 0x3c8(r31)
	mr       r4, r31
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80176B5C

lbl_80176B18:
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game27GameMessageVsBattleFinished@ha
	addi     r4, r4, __vt__Q24Game11GameMessage@l
	subfic   r0, r27, 1
	stw      r4, 0x20(r1)
	addi     r5, r3, __vt__Q24Game27GameMessageVsBattleFinished@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r1, 0x20
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176B5C:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 2
	blt      lbl_80176A24
	lbz      r0, 0x32c(r31)
	cmplwi   r0, 6
	bne      lbl_80176BC8
	lhz      r4, 0x22e(r30)
	lis      r3, __vt__Q24Game11GameMessage@ha
	addi     r0, r3, __vt__Q24Game11GameMessage@l
	lis      r3, __vt__Q24Game23GameMessageVsGetOtakara@ha
	stw      r0, 0x68(r1)
	subfic   r5, r4, 1
	addi     r3, r3, __vt__Q24Game23GameMessageVsGetOtakara@l
	li       r0, 1
	stw      r3, 0x68(r1)
	addi     r4, r1, 0x68
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r5, 0x6c(r1)
	stw      r0, 0x70(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176BC8:
	cmplwi   r0, 3
	bne      lbl_80176C18
	lhz      r4, 0x22e(r30)
	lis      r3, __vt__Q24Game11GameMessage@ha
	addi     r0, r3, __vt__Q24Game11GameMessage@l
	lis      r3, __vt__Q24Game20GameMessageVsGotCard@ha
	stw      r0, 0x18(r1)
	subfic   r5, r4, 1
	addi     r0, r3, __vt__Q24Game20GameMessageVsGotCard@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x18(r1)
	addi     r4, r1, 0x18
	stw      r5, 0x1c(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176C18:
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	beq      lbl_80176C60
	lbz      r0, 0x48(r5)
	lwz      r3, 0x35c(r31)
	cmplwi   r0, 0
	lwz      r4, 0x170(r3)
	beq      lbl_80176C50
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r0, 0xec(r3)
	add      r0, r0, r4
	stw      r0, 0xec(r3)
	b        lbl_80176C60

lbl_80176C50:
	lwz      r3, 0x58(r5)
	lwz      r0, 0x48(r3)
	add      r0, r0, r4
	stw      r0, 0x48(r3)

lbl_80176C60:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_80176C7C
	cmpwi    r0, 3
	bne      lbl_80176C80

lbl_80176C7C:
	li       r3, 1

lbl_80176C80:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176CAC
	lwz      r3, 0x58(r4)
	lwz      r4, 0x35c(r31)
	lwz      r12, 0(r3)
	lwz      r4, 0x170(r4)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176CAC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80176D1C
	lhz      r29, 0x43e(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	addi     r5, r1, 0x10
	bl       getPikiBirthCount__Q24Game6PelletFRiRi
	lhz      r3, 0x22e(r30)
	cmplwi   r3, 3
	beq      lbl_80176CF4
	clrlwi   r0, r29, 0x10
	cmplw    r0, r3
	bne      lbl_80176D08

lbl_80176CF4:
	lhz      r3, 0x22c(r30)
	lwz      r0, 0x10(r1)
	add      r0, r3, r0
	sth      r0, 0x22c(r30)
	b        lbl_80176E6C

lbl_80176D08:
	lhz      r3, 0x22c(r30)
	lwz      r0, 0x14(r1)
	add      r0, r3, r0
	sth      r0, 0x22c(r30)
	b        lbl_80176E6C

lbl_80176D1C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_80176D7C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80176D7C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80176E58

lbl_80176D7C:
	lhz      r0, 0x22e(r30)
	cmplwi   r0, 3
	bne      lbl_80176DA8
	lwz      r3, 0x35c(r31)
	lwz      r0, 0x170(r3)
	cmpwi    r0, 0
	ble      lbl_80176E6C
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	bl       obtainPellet_Cave__Q24Game8PlayDataFPQ24Game6Pellet
	b        lbl_80176E6C

lbl_80176DA8:
	cmplwi   r0, 4
	bne      lbl_80176E14
	lwz      r3, 0x35c(r31)
	lwz      r0, 0x170(r3)
	cmpwi    r0, 0
	ble      lbl_80176E6C
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	bl       obtainPellet_Main__Q24Game8PlayDataFPQ24Game6Pellet
	lwz      r4, 0x35c(r31)
	addi     r3, r2, lbl_80518A84@sda21
	lwz      r4, 0x180(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80176E6C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_80176E6C
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0x48(r4)
	bl       incGroundOtakara__Q24Game8PlayDataFi
	b        lbl_80176E6C

lbl_80176E14:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80176E6C
	mr       r3, r31
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       getPikiBirthCount__Q24Game6PelletFRiRi
	lhz      r3, 0x22c(r30)
	lwz      r0, 8(r1)
	add      r0, r3, r0
	sth      r0, 0x22c(r30)
	b        lbl_80176E6C

lbl_80176E58:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl

lbl_80176E6C:
	li       r3, 1

lbl_80176E70:
	lmw      r27, 0x12c(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	80176E84
 * Size:	00000C
 */
void Onyon::startPropera(void) { m_propera = 20.0f; }

/*
 * --INFO--
 * Address:	80176E90
 * Size:	00000C
 */
void Onyon::stopPropera(void) { m_propera = -20.0f; }

/*
 * --INFO--
 * Address:	80176E9C
 * Size:	00016C
 */
void Onyon::doDirectDraw(Graphics& gfx)
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		gfx.initPrimDraw(0);
		Vector3f pos = getInStart_UFO();
		gfx._084     = 0;
		gfx._085     = 255;
		gfx._086     = 0;
		gfx._087     = 255;
		gfx.drawSphere(pos, 5.0);
		pos      = getOutStart_UFO();
		gfx._084 = 100;
		gfx._085 = 255;
		gfx._086 = 0;
		gfx._087 = 255;
		gfx.drawSphere(pos, 5.0);
		SysShape::Joint* jnt = m_model->getJoint("start1");
		Matrixf* mtx         = jnt->getWorldMatrix();
		pos.x                = mtx->m_matrix.structView.tx;
		pos.y                = mtx->m_matrix.structView.ty;
		pos.z                = mtx->m_matrix.structView.tz;
		gfx._084             = 100;
		gfx._085             = 255;
		gfx._086             = 0;
		gfx._087             = 255;
		gfx.drawSphere(pos, 20.0);
	}

	Vector3f orig = Vector3f(m_position.x, m_position.y + 40.0f, m_position.z);
	drawLODInfo(gfx, orig);
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000B0
//  */
// Onyon::Onyon(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80177008
 * Size:	000034
 */
void Onyon::onInit(CreatureInitArg*)
{
	m_toBirth           = 0;
	m_pikisToWithdraw   = 0;
	m_isReleasingPikis  = false;
	m_releasePikisTimer = 0.0f;
	m_purplesToWithdraw = 0;
	m_whitesToWithdraw  = 0;
	m_pikiOutJoint      = nullptr;
	m_pikiInJoint       = nullptr;
	m_suckState         = SUCKSTATE_IdleClosed;
}

/*
 * --INFO--
 * Address:	8017703C
 * Size:	000004
 */
void Onyon::onKill(Game::CreatureKillArg*) { }

/*
 * --INFO--
 * Address:	80177040
 * Size:	00023C
 */
void Onyon::onSetPosition(void)
{
	if (mapMgr) {
		m_position.y = mapMgr->getMinY(m_position);
	}
	WPSearchArg wparg(m_position, 0, 0, 10.0);
	if (mapMgr && mapMgr->m_routeMgr) {
		m_goalWayPoint = mapMgr->m_routeMgr->getNearestWayPoint(wparg);
	} else {
		m_goalWayPoint = nullptr;
	}

	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		setSpotEffect(true);
	} else {
		setSpotEffect(false);
	}

	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		efx::OnyonSpotArg spotarg(m_position, m_onyonType);
		m_spotbeam_model = particleMgr->createModelEffect(&spotarg);
		setSpotState(SPOTSTATE_Closed);
		if (gameSystem->m_mode == GSM_STORY_MODE) {
			if (!playData->hasBootContainer(m_onyonType)) {
				setSpotState(SPOTSTATE_Opened);
				startWaitMotion();
			} else {
				setSpotState(SPOTSTATE_Closed);
			}
		} else {
			setSpotState(SPOTSTATE_Opened);
		}
	}

	if (m_onyonType == ONYON_TYPE_SHIP) {
		m_pikiInJoint  = m_model->getJoint("in1");
		m_pikiOutJoint = m_model->getJoint("out");
	} else {
		m_pikiOutJoint = nullptr;
		m_pikiInJoint  = nullptr;
	}

	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		Radar::cRadarType radarids[] = { Radar::MAP_BLUE_ONION, Radar::MAP_RED_ONION, Radar::MAP_YELLOW_ONION };
		Radar::Mgr::entry(this, radarids[m_onyonType], 0);

	} else if (m_onyonType == ONYON_TYPE_POD) {
		Radar::Mgr::entry(this, Radar::MAP_CAVE_POD, 0);
	} else {
		Radar::Mgr::entry(this, Radar::MAP_SHIP, 0);
	}
}

/*
 * --INFO--
 * Address:	8017727C
 * Size:	000110
 */
void Onyon::setSpotState(Onyon::cSpotState state)
{
	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		m_spotState = state;
		if (m_spotbeam_model) {
			m_spotbeam_model->m_culled = false;
		}
		switch (m_spotState) {
		case SPOTSTATE_Closed:
			m_spotGrowTimer = 0.0f;
			setSpotEffect(false);
			break;
		case SPOTSTATE_Opened:
			m_spotGrowTimer = 1.0f;
			setSpotEffect(true);
			break;
		case SPOTSTATE_Closing:
			m_spotGrowTimer = 0.0f;
			setSpotEffect(false);
			break;
		case SPOTSTATE_Opening:
			m_spotGrowTimer = 1.0f;
			setSpotEffect(true);
			break;
		}

		Vector3f angle(m_spotGrowTimer, 1.0f, m_spotGrowTimer);
		Matrixf mtx;
		mtx.makeSRT(angle, Vector3f::zero, m_position);
		PSMTXCopy(mtx.m_matrix.mtxView, m_spotbeam_model->m_mtx.m_matrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void Onyon::updateSpot()
{
	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		switch (m_spotState) {
		case SPOTSTATE_Closed:
		case SPOTSTATE_Opened:
			break;
		case SPOTSTATE_Closing:
			m_spotGrowTimer = (sys->m_deltaTime * 0.7f + m_spotGrowTimer);
			if (m_spotGrowTimer >= 1.0f) {
				m_spotGrowTimer = 1.0f;
				m_spotState     = SPOTSTATE_Opened;
				setSpotEffect(true);
			}
			Vector3f angleClose(m_spotGrowTimer, 1.0f, m_spotGrowTimer);
			Matrixf mtxClose;
			mtxClose.makeSRT(angleClose, Vector3f::zero, m_position);
			PSMTXCopy(mtxClose.m_matrix.mtxView, m_spotbeam_model->m_mtx.m_matrix.mtxView);
			break;

		case SPOTSTATE_Opening:
			m_spotGrowTimer = -(sys->m_deltaTime * 0.7f - m_spotGrowTimer);
			if (m_spotGrowTimer <= 0.0f) {
				m_spotGrowTimer = 0.0f;
				m_spotState     = SPOTSTATE_Closed;
				setSpotEffect(false);
			}
			Vector3f angleOpen(m_spotGrowTimer, 1.0f, m_spotGrowTimer);
			Matrixf mtxOpen;
			mtxOpen.makeSRT(angleOpen, Vector3f::zero, m_position);
			PSMTXCopy(mtxOpen.m_matrix.mtxView, m_spotbeam_model->m_mtx.m_matrix.mtxView);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8017738C
 * Size:	0000AC
 */
Vector3f Onyon::getSuckPos()
{
	Vector3f temp = m_position;
	if (m_objectTypeID == OBJTYPE_Ufo) {
		SysShape::Joint* jnt = m_model->getJoint("goal");
		if (jnt) {
			Matrixf* mtx = jnt->getWorldMatrix();
			temp.x       = mtx->m_matrix.structView.tx;
			temp.y       = mtx->m_matrix.structView.ty;
			temp.z       = mtx->m_matrix.structView.tz;
		}
	} else {
		temp.y += 95.0f;
	}

	return temp;
}

/*
 * --INFO--
 * Address:	80177438
 * Size:	0000D8
 */
Vector3f Onyon::getGoalPos()
{
	Vector3f goalPos = m_position;
	if (m_objectTypeID == OBJTYPE_Ufo) {
		goalPos.x = 135.0f * pikmin2_sinf(m_faceDir) + goalPos.x;
		goalPos.z = 135.0f * pikmin2_cosf(m_faceDir) + goalPos.z;
	}
	return goalPos;
}

/*
 * --INFO--
 * Address:	80177510
 * Size:	000318
 */
void Onyon::doAI()
{
	SysShape::AnimInfo* info = m_animator.m_animInfo;
	int animid;
	if (!info) {
		animid = -1;
	} else {
		animid = info->m_id;
	}

	if (animid == 2 && m_onyonType <= ONYON_TYPE_YELLOW) {
		PSM::SeSound* sound = static_cast<PSM::SeSound*>(m_soundObj->startSound(PSSE_PK_SE_INSIDE_ONYON, 0));
		if (sound) {
			PSGame::SoundTable::SePerspInfo persp;
			persp._04              = 0.0f;
			persp._00              = 1.0f;
			persp._08              = 0.0f;
			persp._0C              = 0.0f;
			persp._10              = 0.0f;
			persp.m_isSpecialSound = 0;
			persp.m_noGetDist      = 0;
			persp.set(1.0, 200.0, 0.2, 400.0, 0.0);
			sound->specializePerspCalc(persp);
		}
		efxPafuPafu();
	}

	updateSpot();

	if (m_onyonType == ONYON_TYPE_SHIP && (!isMovieActor() || isMovieExtra())) {
		if (m_suckState == SUCKSTATE_Closing && m_animSpeed < 1.0f) {
			m_animSpeed = 30.0f;
		}
		if (m_suckState == SUCKSTATE_IdleOpen) {
			m_suckTimer += sys->m_deltaTime;
			// stay open for 3 seconds without interruption
			if (m_suckTimer > 3.0f) {
				m_animator.setFrameByKeyType(1);
				m_animator.m_flags |= 2;
				m_animSpeed = 30.0f;
				m_ufoPodOpenSuck->fade();
				SoundID soundid = PSSE_EV_POD_CLOSE;
				m_suckState     = SUCKSTATE_Closing;
				if (playData->isStoryFlag(STORY_DebtPaid)) // payed debt
					soundid = PSSE_EV_PODGOLD_CLOSE;
				startSound(soundid);
				m_ufoPodOpen->fade();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80177828
 * Size:	000078
 */
void Onyon::forceClose()
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		m_animator.setFrameByKeyType(1000);
		m_animSpeed = 0.0f;
		m_ufoPodOpenSuck->fade();
		m_suckState = SUCKSTATE_IdleClosed;
		m_ufoPodOpen->fade();
	}
}

/*
 * --INFO--
 * Address:	801778A0
 * Size:	000078
 */
void Onyon::do_updateLOD()
{
	AILODParm lod;
	if (m_onyonType == ONYON_TYPE_POD) {
		lod.m_isCylinder = true;
	}
	updateLOD(lod);
	if (isMovieActor()) {
		m_lod.m_flags |= (AILOD_FLAG_VISIBLE_VP0 + AILOD_FLAG_VISIBLE_VP1 + AILOD_FLAG_NEED_SHADOW);
	}
}

/*
 * --INFO--
 * Address:	80177918
 * Size:	000064
 */
void Onyon::getLODCylinder(Sys::Cylinder& cylinder)
{
	Vector3f vec1, vec2;
	vec1 = m_position;
	vec1.y += 100.0f;
	vec2 = m_position;
	cylinder.set(vec1, vec2, 40.0f);
}

/*
 * --INFO--
 * Address:	8017797C
 * Size:	000470
 */
void Onyon::do_doAnimation()
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		if (m_propera != 0.0f) {
			f32* speed = getPMotionSpeed(2);
			*speed += m_propera * sys->m_deltaTime;
			if (*speed < 30.0f) {
				*speed    = 30.0f;
				m_propera = 0.0f;
			} else if (*speed > 30.0f) {
				*speed    = 30.0f;
				m_propera = 0.0f;
			}
		}
		f32* speed = getPMotionSpeed(1);
		if (*speed > 0.0f) {
			PSM::SeSound* sound = PSStartSoundVec(PSSE_PK_SE_INSIDE_VOLVE, (Vec*)getSound_PosPtr());
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
				persp._04              = 0.0f;
				persp._00              = 1.0f;
				persp._08              = 0.0f;
				persp._0C              = 0.0f;
				persp._10              = 0.0f;
				persp.m_isSpecialSound = 0;
				persp.m_noGetDist      = 0;
				persp.set(1.0, 200.0, 0.4, 400.0, 0.0);
				sound->specializePerspCalc(persp);
			}
			SysShape::Animator* anim = getPAnimator(1);
			f32 time                 = anim->m_timer;
			getPAnimator(1); // sus
			if (time > 5.0f && time < 8.0f && !sVolveFlag) {
				PSM::SeSound* sound = static_cast<PSM::SeSound*>(m_soundObj->startSound(PSSE_EV_ROCKET_VOLVE, 0));
				if (sound) {
					PSGame::SoundTable::SePerspInfo persp;
					persp._04              = 0.0f;
					persp._00              = 1.0f;
					persp._08              = 0.0f;
					persp._0C              = 0.0f;
					persp._10              = 0.0f;
					persp.m_isSpecialSound = 0;
					persp.m_noGetDist      = 0;
					persp.set(1.0, 250.0, 0.5, 500.0, 0.0);
					sound->specializePerspCalc(persp);
				}
				sVolveFlag = true;
			} else if (time > 10.0f) {
				sVolveFlag = false;
			}
		}
	}

	update_pmotions();

	u16 onyonType = m_onyonType;
	if (gameSystem->m_flags & 2) {
		if (onyonType == ONYON_TYPE_SHIP) {
			SoundID soundid = PSSE_EV_UFO_PISTON;

			if (playData->isStoryFlag(STORY_DebtPaid)) { // payed debt
				soundid = PSSE_EV_DOL2GOLD_PISTON;
			}

			PSM::SeSound* sound = static_cast<PSM::SeSound*>(m_soundObj->startSound(soundid, 0));
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
				persp._04              = 0.0f;
				persp._00              = 1.0f;
				persp._08              = 0.0f;
				persp._0C              = 0.0f;
				persp._10              = 0.0f;
				persp.m_isSpecialSound = false;
				persp.m_noGetDist      = false;
				persp.set(1.0f, 300.0f, 0.5f, 1000.0f, 0.0f);
				sound->specializePerspCalc(persp);

				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
				scene                  = (scene->isGameScene()) ? scene : nullptr;

				if (scene) {
					if (scene->_4C < 390) {
						f32 calc = JALCalc::linearTransform(scene->_4C, 0.0f, 390.0f, 0.25f, 1.0f, true);
						sound->setVolume(calc, 0, 0);
					} else {
						sound->setVolume(1.0f, 0, 0);
					}
				}
			}
		} else if (m_onyonType == ONYON_TYPE_POD) {
			SoundID soundid = PSSE_EV_POD_PROPELLER;
			if (playData->isStoryFlag(STORY_DebtPaid)) { // payed debt
				soundid = PSSE_EV_PODGOLD_PROPELLER;
			}

			PSM::SeSound* sound = static_cast<PSM::SeSound*>(m_soundObj->startSound(soundid, 0));
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
				persp._04              = 0.0f;
				persp._00              = 1.0f;
				persp._08              = 0.0f;
				persp._0C              = 0.0f;
				persp._10              = 0.0f;
				persp.m_isSpecialSound = false;
				persp.m_noGetDist      = false;
				persp.set(1.0f, 400.0f, 0.3f, 1000.0f, 0.0f);
				sound->specializePerspCalc(persp);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80177DEC
 * Size:	000008
 */
Vector3f* BaseItem::getSound_PosPtr() { return &m_position; }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000E0
//  */
// void Onyon::initTube(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80177DF4
 * Size:	000198
 */
void Onyon::startWaitMotion(void)
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		int whites = playData->m_pikiContainer.getColorSum(White);
		int purple = playData->m_pikiContainer.getColorSum(Purple);
		if (whites + purple > 0) {
			*getPMotionSpeed(1) = 30.0f;
			m_ufoGasIn->create(0);
			m_ufoGasOut->create(0);
		} else {
			m_ufoGasIn->fade();
			m_ufoGasOut->fade();
			*getPMotionSpeed(1) = 0.0f;
		}

	} else {
		m_animSpeed = 30.0f;
		if (m_onyonType == ONYON_TYPE_POD) {
			m_animator.startAnim(0, 0);
		} else {
			if (getStoreCount() > 0) {
				int animid;
				if (!m_animator.m_animInfo) {
					animid = -1;
				} else {
					animid = m_animator.m_animInfo->m_id;
				}
				if (animid <= (u32)1 || animid == 3) {
					SysShape::MotionListener* mlisten = this;
					m_animator.startAnim(2, mlisten);
				}
			} else {
				SysShape::MotionListener* mlisten = this;
				m_animator.startAnim(0, mlisten);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80177F8C
 * Size:	000078
 */
void Onyon::onKeyEvent_UFO(const SysShape::KeyEvent& event)
{
	switch (event.m_type) {
	case KEYEVENT_NULL:
		if (m_suckState != SUCKSTATE_Opening) {
			return;
		}
		m_animSpeed = 0.0f;
		m_suckState = SUCKSTATE_Opened;
		break;

	case KEYEVENT_1:
		if (m_suckState != SUCKSTATE_GetPellet) {
			return;
		}
		m_suckState = SUCKSTATE_IdleOpen;
		m_suckTimer = 0.0f;
		m_animSpeed = 0.0f;
		break;

	case KEYEVENT_END:
		m_suckState = SUCKSTATE_IdleClosed;
		break;
	}
}

/*
 * --INFO--
 * Address:	80178004
 * Size:	00013C
 */
// almost matches, something weird happening with cos function? might need inline
Vector3f Onyon::getFlagSetPos()
{
	f32 dir         = getFaceDir();
	Vector3f offset = Vector3f(100.0f * pikmin2_sinf(dir), 0.0f, 100.0f * pikmin2_cosf(dir));
	Vector3f pos    = getPosition();
	pos += offset;
	return pos;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80178058
	fneg     f2, f2

lbl_80178058:
	lfs      f3, lbl_80518A60@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f4, lbl_80518A50@sda21(r2)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f4, f0
	bge      lbl_801780B8
	lfs      f0, lbl_80518A64@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_801780D0

lbl_801780B8:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_801780D0:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518A50@sda21(r2)
	lfs      f4, 0x10(r1)
	fmuls    f1, f0, f30
	lfs      f2, 8(r1)
	lfs      f3, 0xc(r1)
	fadds    f4, f4, f31
	lfs      f0, lbl_80518A2C@sda21(r2)
	fadds    f2, f2, f1
	fadds    f3, f3, f0
	stfs     f2, 0(r30)
	stfs     f3, 4(r30)
	stfs     f4, 8(r30)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178140
 * Size:	00004C
 */
void Onyon::onKeyEvent(SysShape::KeyEvent const& event)
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		onKeyEvent_UFO(event);
	} else {
		onKeyEvent_Onyon(event);
	}
}

/*
 * --INFO--
 * Address:	8017818C
 * Size:	0000AC
 */
void Onyon::vsChargePikmin()
{
	P2ASSERTLINE(1791, gameSystem->m_mode == GSM_VERSUS_MODE);
	m_pikminType = m_onyonType;
	m_toBirth++;
	SysShape::AnimInfo* info = m_animator.m_animInfo;
	int animid;
	if (!info) {
		animid = -1;
	} else {
		animid = info->m_id;
	}
	if (animid == 0 || animid == 2) {
		SysShape::MotionListener* mlisten = this;
		m_animator.startAnim(1, mlisten);
	}
}

/*
 * --INFO--
 * Address:	80178238
 * Size:	000648
 */
void Onyon::onKeyEvent_Onyon(SysShape::KeyEvent const& event)
{
	SysShape::AnimInfo* info = m_animator.m_animInfo;
	int animid;
	if (!info) {
		animid = -1;
	} else {
		animid = info->m_id;
	}

	switch (event.m_type) {
	case KEYEVENT_END:
		if (m_toBirth) {
			if (m_onyonType <= ONYON_TYPE_YELLOW) {
				SysShape::MotionListener* mlisten = this;
				m_animator.startAnim(1, mlisten);
			}
		} else {
			startWaitMotion();
		}
		break;

	case KEYEVENT_100:
		if (animid == 2)
			efxPafuKira();
		break;

	case KEYEVENT_1:
		if (m_onyonType <= ONYON_TYPE_YELLOW) {
			switch (animid) {
			case 1: // shoot out seeds
				if (m_toBirth) {
					int shootcount = m_toBirth >> 1;
					if (shootcount <= 0) {
						shootcount = 1;
					}

					for (int i = 0; i < shootcount; i++) {
						if (gameSystem && gameSystem->m_mode == GSM_VERSUS_MODE) {
							// versus mode onion counts
							int reds  = GameStat::getMapPikmins(Red);
							int blues = GameStat::getMapPikmins(Blue);
							if (m_onyonType == ONYON_TYPE_BLUE && blues >= 50) {
								m_toBirth--;
								continue;
							} else if (m_onyonType == ONYON_TYPE_RED && reds >= 50) {
								m_toBirth--;
								continue;
							}
						}

						ItemPikihead::Item* obj = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
						if (obj) {
							m_pikminType = m_onyonType;
							ItemPikihead::InitArg arg((EPikiKind)m_pikminType, Vector3f::zero);
							obj->init(&arg);
							m_toBirth--;
							BirthMgr::inc(obj->m_pikiColor);
							doEmit(obj, false);

						} else { // returned pikihead is null, 100 pikmin limit must be reached
							if (gameSystem->m_flags & 0x20 && !playData->isDemoFlag(DEMO_Max_Pikmin_On_Field)) {
								playData->setDemoFlag(DEMO_Max_Pikmin_On_Field);

								// if wild pikmin exist, play 95 pikmin CS, otherwise play 100 pikmin CS
								char* movieName = (GameStat::zikatuPikis > 0) ? (char*)"g16_95_pikmin" : (char*)"g16_100_pikmin";
								MoviePlayArg arg(movieName, nullptr, gameSystem->m_section->_C8, 0);
								arg.m_origin = getPosition();
								arg.m_angle  = getFaceDir();
								movie_begin(0);
								moviePlayer->play(arg);
							}

							m_pikminType = m_onyonType;
							int& count   = playData->m_pikiContainer.getCount(m_pikminType, Leaf);
							count++;
							BirthMgr::inc(m_onyonType);
							m_toBirth--;
						}
					}
				} else {
					m_animator.m_flags |= 2;
				}
				break;

			case 2:
				startWaitMotion();
				break;
			}
		}
		break;

	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	80178880
 * Size:	000298
 */
void Onyon::doEmit(Creature* seed, bool isSetAngle)
{
	startSound(PSSE_PK_SE_ONY_SEED_EJECT);
	Vector3f onyonpos = m_position;
	onyonpos.y += 110.0f;
	efx::TOnyonLay layFX;
	efx::Arg arg(m_position);

	layFX.create(&arg);
	seed->setPosition(onyonpos, false);

	if (gameSystem->m_mode == GSM_STORY_MODE && moviePlayer->m_flags & 1 && moviePlayer->isPlaying("x18_exp_pellet")) {
		seed->movie_begin(0);
	}

	f32 angle;
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		angle = roundAng((HALF_PI * randFloat() - QUARTER_PI) + getFaceDir());

	} else if (isSetAngle) {
		angle = 0.0f;

	} else {
		angle = randFloat() * TAU;
	}

	Vector3f velocity(pikmin2_sinf(angle) * 130.0f, 700.0f, pikmin2_cosf(angle) * 130.0f);
	seed->setVelocity(velocity);
}

/*
 * --INFO--
 * Address:	80178B18
 * Size:	0000A0
 */
CollPart* Onyon::getLegPart(int id)
{
	P2ASSERTBOUNDSINCLUSIVELINE(2005, 0, id, 2);

	u32 tags[3] = { 'leg1', 'leg2', 'leg3' };
	return m_collTree->getCollPart(tags[id]);
}

/*
 * --INFO--
 * Address:	80178BB8
 * Size:	0000C0
 */
CollPart* Onyon::getFootPart(int id)
{
	P2ASSERTBOUNDSINCLUSIVELINE(2014, 0, id, 2);

	u32 tags[3]    = { 'fot1', 'fot2', 'fot3' };
	CollPart* part = m_collTree->getCollPart(tags[id]);
	JUT_ASSERTLINE(2020, part, "oh! no!\n"); // oh no! indeed
	return part;
}

/*
 * --INFO--
 * Address:	80178C78
 * Size:	00012C
 */
void Onyon::makeTrMatrix()
{
	Vector3f angle(0.0f, m_faceDir, 0.0f);
	m_mainMatrix.makeTR(m_position, angle);
	updateCollTree();
	if (gameSystem->paused() || moviePlayer->m_demoState != 0) {
		return;
	}

	if (m_isReleasingPikis) {
		if (m_releasePikisTimer <= 0.0f) {
			if (exitPiki()) {
				m_pikisToWithdraw--;
				if (!((int)m_pikisToWithdraw > 0)) {
					m_isReleasingPikis = 0;
				}
				m_releasePikisTimer = (randFloat() * 0.1f + 0.2f) * 0.05f;
			} else {

				m_pikisToWithdraw  = 0;
				m_isReleasingPikis = 0;
			}
		} else {
			m_releasePikisTimer -= sys->m_deltaTime;
		}
	}
}

/*
 * --INFO--
 * Address:	80178DA4
 * Size:	000138
 */
void Onyon::changeMaterial()
{
	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		int animid;
		if (!m_animator.m_animInfo) {
			animid = -1;
		} else {
			animid = m_animator.m_animInfo->m_id;
		}

		f32 mattime, anmtime;
		Sys::MatBaseAnimation* anim = m_matAnim1->m_animation;
		if (anim) {
			mattime = anim->getFrameMax();
		} else {
			mattime = 0.0f;
		}

		if (animid == 4) {
			f32 timer = m_animator.m_timer;
			if (m_animator.m_animInfo) {
				anmtime = (f32)m_animator.m_animInfo->m_anm->m_time;
			} else {
				anmtime = 0.0f;
			}
			Sys::MatLoopAnimator* loopAnim = m_matAnim1;
			if (anmtime != 0.0f) {
				anmtime = timer / anmtime;
			} else {
				anmtime = 1.0f;
			}
			loopAnim->setCurrentFrame(mattime * anmtime);
		} else {
			m_matAnim1->setCurrentFrame(mattime);
		}

		m_matAnim1->animate(0.0f);

	} else if (m_onyonType == ONYON_TYPE_SHIP) {
		m_matAnim1->animate(30.0f);
		m_matAnim2->animate(30.0f);
		m_model->m_j3dModel->calcMaterial();
		m_model->m_j3dModel->diff();
	}
}

/*
 * --INFO--
 * Address:	80178EDC
 * Size:	0001D4
 */
void Onyon::setSpotEffect(bool flag)
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		if (flag) {
			m_ufoSpot->create(0);
		} else {
			m_ufoSpot->fade();
		}
	} else if (m_onyonType == ONYON_TYPE_POD) {
		if (flag) {
			::efx::Arg arg(m_position);
			m_podOpenA->create(&arg);
			m_podOpenB->create(0);
			m_podSpot->create(0);
		} else {
			m_podOpenA->fade();
			m_podOpenB->fade();
			m_podOpenA->fade(); // yes it does this one twice for some reason
			m_podSpot->fade();
		}
	} else if (m_onyonType < ONYON_TYPE_POD) {
		if (flag) {
			efx::ArgType arg(this);
			m_container->create(&arg);
		} else {
			m_container->fade();
		}
	}
}

/*
 * --INFO--
 * Address:	801790B0
 * Size:	000134
 */
void Onyon::setSpotEffectActive(bool flag)
{
	if (flag && gameSystem && !(gameSystem->m_flags & 0x20)) {
		flag = false;
	}

	if (m_onyonType == ONYON_TYPE_SHIP) {
		if (flag) {
			m_ufoSpotAct01->create(0);
		} else {
			m_ufoSpotAct01->fade();
		}
	}

	if (m_onyonType < ONYON_TYPE_POD) {
		if (flag) {
			efx::ArgType arg(this);
			m_containerAct->create(&arg);
		} else {
			m_containerAct->fade();
		}
	}
}

/*
 * --INFO--
 * Address:	801791E4
 * Size:	000168
 */
void Onyon::efxSuikomi()
{
	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		efx::TOnyonEatC onyonFX(&m_mainMatrix);
		onyonFX.create(nullptr);
		startSound(PSSE_EV_HOME_PELLET_BACUUM);

	} else if (m_onyonType == ONYON_TYPE_POD) {
		startSound(PSSE_EV_ROCKET_VACUUM);
		efx::TPodSuck efx;
		::efx::Arg arg(m_position);
		efx.create(&arg);

	} else if (m_onyonType == ONYON_TYPE_SHIP) {
		startSound(PSSE_EV_ROCKET_VACUUM);
		m_ufoPodOpenSuck->create(0);
	}
}

/*
 * --INFO--
 * Address:	8017934C
 * Size:	0001A0
 */
void Onyon::efxPafuPafu()
{
	if (!(randFloat() > 0.05f)) {
		char* jntnames[3]      = { "kasi1jnt1", "kasi1jnt2", "kasi1jnt3" };
		int id                 = (int)(randFloat() * 3.0f);
		SysShape::Joint* joint = m_model->getJoint(jntnames[id]);
		if (joint && m_lod.m_flags & 4) {
			efx::TOnyonPuffPuff puffFX(joint->getWorldMatrix());
			puffFX.create(nullptr);

			PSM::SeSound* sound = static_cast<PSM::SeSound*>(m_soundObj->startSound(PSSE_EV_ONYON_GAS, 0));
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
				persp._04              = 0.0f;
				persp._00              = 1.0f;
				persp._08              = 0.0f;
				persp._0C              = 0.0f;
				persp._10              = 0.0f;
				persp.m_isSpecialSound = 0;
				persp.m_noGetDist      = 0;
				persp.set(1.0, 250.0, 0.8, 500.0, 0.0);
				sound->specializePerspCalc(persp);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801794EC
 * Size:	0000B0
 */
void Onyon::efxPafuKira()
{
	SysShape::Joint* joint = m_model->getJoint("flow");
	if (joint && m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) {
		Matrixf* mtx = joint->getWorldMatrix();
		Vector3f position;
		mtx->getTranslation(position);

		efx::TOnyonPuffKira puffSparkleFX;
		efx::Arg arg(position);
		puffSparkleFX.create(&arg);
	}
}

/*
 * --INFO--
 * Address:	8017959C
 * Size:	00002C
 */
int Onyon::getStoreCount() { return playData->m_pikiContainer.getColorSum(m_onyonType); }

/*
 * --INFO--
 * Address:	801795C8
 * Size:	000244
 */
void Onyon::enterPiki(Piki* piki)
{
	int& count = playData->m_pikiContainer.getCount(piki->m_pikiKind, piki->m_happaKind);
	count++;

	PikiKillArg killarg(1);
	piki->kill(&killarg);

	if (m_onyonType <= ONYON_TYPE_YELLOW && m_toBirth) {
		int animid;
		if (!m_animator.m_animInfo) {
			animid = -1;
		} else {
			animid = m_animator.m_animInfo->m_id;
		}
		if (animid != 1) {
			m_animator.startAnim(1, this);
		}

	} else {
		startWaitMotion();
	}
}

/*
 * --INFO--
 * Address:	8017980C
 * Size:	000048
 */
void Onyon::exitPikis(int add, int color)
{
	m_isReleasingPikis = true;
	m_pikisToWithdraw += add;
	m_releasePikisTimer = 0.0f;
	if (color == Purple) {
		m_purplesToWithdraw += add;
	}
	if (color == White) {
		m_whitesToWithdraw += add;
	}
}

/*
 * --INFO--
 * Address:	80179854
 * Size:	000454
 */
Creature* Onyon::exitPiki()
{
	if (!(gameSystem->m_flags & 0x20)) {
		return nullptr;
	}

	int color = m_onyonType;
	int happa = -1;
	if (m_onyonType == ONYON_TYPE_SHIP) {
		if ((int)m_whitesToWithdraw > 0) {
			color = White;
		} else {
			if ((int)m_purplesToWithdraw > 0) {
				color = Purple;
			} else {
				JUT_PANICLINE(2296, "exitWhite/Black zero (UFO)\n");
			}
		}
	}
	for (int i = Flower; !(i < Leaf); i--) {
		if (playData->m_pikiContainer.getCount(color, i) > 0) {
			happa = i;
			break;
		}
	}

	Piki* piki;
	if (happa == -1) {
		return nullptr;
	} else {
		piki = pikiMgr->birth();
		if (!piki) {
			m_pikisToWithdraw   = 0;
			m_whitesToWithdraw  = 0;
			m_purplesToWithdraw = 0;
			m_isReleasingPikis  = false;
			return nullptr;

		} else {
			if (color == White) {
				m_whitesToWithdraw--;
			} else if (color == Purple) {
				m_purplesToWithdraw--;
			}
			P2ASSERTLINE(2338, piki);

			int& count = playData->m_pikiContainer.getCount(color, happa);
			count--;
			playData->m_pikiContainer.getColorSum(color);
			piki->init(nullptr);
			piki->changeShape(color);
			piki->changeHappa(happa);

			if (m_onyonType == ONYON_TYPE_SHIP) {
				Vector3f outpos   = getOutStart_UFO();
				Vector3f onyonpos = getPosition();
				Vector3f vel      = outpos - onyonpos;
				vel.normalise();
				vel *= randFloat() * 30.0f + 100.0f;

				piki->setPosition(outpos, false);
				piki->setVelocity(vel);
				piki->startSound(this, PSSE_PK_VC_ONY_EXIT, true);
				piki->m_faceDir = m_faceDir;

				Navi* navi = piki->m_brain->searchOrima();
				if (navi) {
					piki->m_navi = navi;
					PikiAI::ActFormationInitArg arg(navi);
					piki->m_brain->start(0, &arg);
				} else {
					piki->m_brain->start(1, 0);
				}

				int whites = playData->m_pikiContainer.getColorSum(White);
				int purple = playData->m_pikiContainer.getColorSum(Purple);
				if (whites + purple == 0) {
					m_ufoGasIn->fade();
					m_ufoGasOut->fade();
					*getPMotionSpeed(1) = 0.0f;
				}

			} else {
				PikiAI::CreatureActionArg arg(this);
				piki->m_brain->start(3, &arg);
			}
		}
	}

	return piki;
}

/*
 * --INFO--
 * Address:	80179CA8
 * Size:	0000B8
 */
bool Onyon::insideAccessArea(Vector3f& navipos)
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		Vector3f pos = getGoalPos();
		if (sqrDistanceXZ(navipos, pos) < 900.0f) {
			return true;
		}
	} else {
		Vector3f pos = m_position;
		if (sqrDistanceXZ(navipos, pos) < 900.0f) {
			return true;
		}
	}
	return false;
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000048
//  */
// void Onyon::insideBootArea(Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000088
//  */
// void Onyon::getOnyonState(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80179D60
 * Size:	00011C
 */
BaseItem* ItemOnyon::Mgr::generatorBirth(Vector3f&, Vector3f&, GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r29, r6
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  li        r30, 0
	  lwz       r0, 0x4(r6)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x6C
	  bge-      .loc_0x44
	  cmpwi     r0, 0
	  beq-      .loc_0x54
	  bge-      .loc_0x60
	  b         .loc_0x84

	.loc_0x44:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x80
	  bge-      .loc_0x84
	  b         .loc_0x78

	.loc_0x54:
	  li        r31, 0
	  li        r30, 0
	  b         .loc_0x84

	.loc_0x60:
	  li        r31, 0
	  li        r30, 0x1
	  b         .loc_0x84

	.loc_0x6C:
	  li        r31, 0
	  li        r30, 0x2
	  b         .loc_0x84

	.loc_0x78:
	  li        r31, 0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, 0x2

	.loc_0x84:
	  cmpwi     r31, 0
	  bne-      .loc_0xDC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x6D22C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB4
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xB4:
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x6D1F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xDC:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1094
	  lfs       f0, 0x4(r28)
	  mr        r30, r3
	  mr        r4, r27
	  li        r5, 0
	  stfs      f0, 0x228(r3)
	  bl        -0x3ECB8
	  mr        r3, r30

	.loc_0x108:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179E7C
 * Size:	000004
 */
void ItemOnyon::Mgr::setupSoundViewerAndBas() { }

/*
 * --INFO--
 * Address:	80179E80
 * Size:	0000C4
 */
void Onyon::getInEnd_UFO(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x248(r4)
	cmplwi   r0, 0
	beq      lbl_80179EF8
	lfs      f1, lbl_80518A2C@sda21(r2)
	mr       r3, r0
	lfs      f0, lbl_80518B28@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f2, 0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r31)
	b        lbl_80179F30

lbl_80179EF8:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E7BC@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0x9f1
	addi     r5, r5, lbl_8047E7BC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 4(r31)
	lfs      f0, 8(r3)
	stfs     f0, 8(r31)

lbl_80179F30:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80179F44
 * Size:	000168
 */
Vector3f Onyon::getInStart_UFO(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r3, 0x248(r4)
	cmplwi   r3, 0
	beq      lbl_80179FBC
	lfs      f1, lbl_80518A2C@sda21(r2)
	lfs      f0, lbl_80518B28@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f31, 8(r1)
	lfs      f30, 0x10(r1)
	lfs      f0, 0xc(r1)
	stfs     f31, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f30, 0x1c(r1)
	b        lbl_80179FE4

lbl_80179FBC:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E7BC@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0x9f1
	addi     r5, r5, lbl_8047E7BC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f31, "zero__10Vector3<f>"@l(r3)
	lfs      f30, 8(r3)

lbl_80179FE4:
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f7, 0x20(r1)
	lfs      f4, 0x28(r1)
	fsubs    f2, f31, f7
	lfs      f5, lbl_80518A2C@sda21(r2)
	fsubs    f6, f30, f4
	lfs      f3, 0x24(r1)
	fmadds   f0, f2, f2, f5
	fmuls    f1, f6, f6
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f5
	ble      lbl_8017A038
	ble      lbl_8017A03C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8017A03C

lbl_8017A038:
	fmr      f1, f5

lbl_8017A03C:
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8017A05C
	lfs      f0, lbl_80518A58@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0

lbl_8017A05C:
	lfs      f0, lbl_80518B2C@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f1, f5, f0
	fmuls    f0, f6, f0
	fadds    f2, f7, f2
	fadds    f1, f3, f1
	fadds    f0, f4, f0
	stfs     f2, 0(r30)
	stfs     f1, 4(r30)
	stfs     f0, 8(r30)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A0AC
 * Size:	0000C4
 */
Vector3f Onyon::getOutStart_UFO(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x24c(r4)
	cmplwi   r0, 0
	beq      lbl_8017A124
	lfs      f1, lbl_80518A2C@sda21(r2)
	mr       r3, r0
	lfs      f0, lbl_80518B28@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f2, 0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r31)
	b        lbl_8017A15C

lbl_8017A124:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E7C8@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa09
	addi     r5, r5, lbl_8047E7C8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 4(r31)
	lfs      f0, 8(r3)
	stfs     f0, 8(r31)

lbl_8017A15C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000124
//  */
// void Onyon::init_pmotions(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8017A1A4
 * Size:	00007C
 */
f32* Onyon::getPMotionSpeed(int i)
{
	P2ASSERTBOUNDSLINE(2603, 0, i, (int)m_pMotionCount);
	return &m_pMotionSpeeds[i];
}

/*
 * --INFO--
 * Address:	8017A220
 * Size:	00007C
 */
SysShape::Animator* Onyon::getPAnimator(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_8017A254
	lwz      r0, 0x250(r30)
	cmpw     r31, r0
	bge      lbl_8017A254
	li       r3, 1

lbl_8017A254:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A278
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa31
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A278:
	mulli    r0, r31, 0x1c
	lwz      r3, 0x254(r30)
	add      r3, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000094
//  */
// void Onyon::start_pmotion(int, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8017A29C
 * Size:	000198
 */
void Onyon::update_pmotions(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	mr       r26, r3
	lwz      r3, sys@sda21(r13)
	lhz      r0, 0x22e(r26)
	lis      r4, lbl_8047E620@ha
	lfs      f31, 0x54(r3)
	addi     r31, r4, lbl_8047E620@l
	cmplwi   r0, 4
	bne      lbl_8017A418
	li       r30, 0
	addi     r28, r1, 8
	mr       r29, r30
	li       r27, 0
	b        lbl_8017A40C

lbl_8017A2E8:
	lwz      r5, 0x1cc(r31)
	cmpwi    r27, 0
	lwz      r4, 0x1d0(r31)
	li       r3, 0
	lwz      r0, 0x1d4(r31)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	blt      lbl_8017A31C
	lwz      r0, 0x250(r26)
	cmpw     r27, r0
	bge      lbl_8017A31C
	li       r3, 1

lbl_8017A31C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A338
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A338:
	lwz      r0, 0x254(r26)
	cmpwi    r27, 0
	li       r3, 0
	add      r25, r0, r30
	blt      lbl_8017A35C
	lwz      r0, 0x250(r26)
	cmpw     r27, r0
	bge      lbl_8017A35C
	li       r3, 1

lbl_8017A35C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A378
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A378:
	mr       r3, r25
	lwz      r4, 0x258(r26)
	lwz      r12, 0(r25)
	lfsx     f0, r4, r29
	lwz      r12, 0xc(r12)
	fmuls    f1, f31, f0
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r26)
	lwz      r4, 0(r28)
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_8017A3E4
	lhz      r24, 0x38(r3)
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r25, 0x174(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r25)
	rlwinm   r0, r24, 2, 0xe, 0x1d
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwzx     r4, r4, r0
	stw      r3, 0x54(r4)
	b        lbl_8017A3FC

lbl_8017A3E4:
	lwz      r6, 0(r28)
	addi     r3, r31, 0x18
	addi     r5, r31, 0x1d8
	li       r4, 0xa53
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A3FC:
	addi     r30, r30, 0x1c
	addi     r29, r29, 4
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_8017A40C:
	lwz      r0, 0x250(r26)
	cmpw     r27, r0
	blt      lbl_8017A2E8

lbl_8017A418:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A434
 * Size:	0001E8
 */
void ItemOnyon::Mgr::initDependency(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	addi     r3, r3, 0x4c
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017A480
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A5EC

lbl_8017A480:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A4EC

lbl_8017A498:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A5EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017A4EC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017A498
	b        lbl_8017A5EC

lbl_8017A50C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x1bc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017A55C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A5EC

lbl_8017A55C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A5D0

lbl_8017A57C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A5EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017A5D0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017A57C

lbl_8017A5EC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017A50C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A61C
 * Size:	000004
 */
void BaseItem::initDependency() { }

/*
 * --INFO--
 * Address:	8017A620
 * Size:	00004C
 */
J3DModelData* ItemOnyon::Mgr::generatorGetShape(GenItemParm*)
{
	/*
	lwz      r0, 4(r4)
	cmpwi    r0, 3
	beq      lbl_8017A650
	bge      lbl_8017A63C
	cmpwi    r0, 0
	bge      lbl_8017A648
	b        lbl_8017A65C

lbl_8017A63C:
	cmpwi    r0, 5
	bge      lbl_8017A65C
	b        lbl_8017A658

lbl_8017A648:
	li       r4, 0
	b        lbl_8017A65C

lbl_8017A650:
	li       r4, 1
	b        lbl_8017A65C

lbl_8017A658:
	li       r4, 2

lbl_8017A65C:
	lwz      r3, 0x1c(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A66C
 * Size:	000054
 */
GenItemParm* ItemOnyon::Mgr::generatorNewItemParm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0xc
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8017A6B0
	lis      r4, __vt__Q24Game11GenItemParm@ha
	lis      r5, __vt__12GenOnyonParm@ha
	addi     r0, r4, __vt__Q24Game11GenItemParm@l
	li       r4, 0
	stw      r0, 0(r3)
	addi     r5, r5, __vt__12GenOnyonParm@l
	li       r0, 1
	stw      r5, 0(r3)
	stw      r4, 4(r3)
	stb      r0, 8(r3)

lbl_8017A6B0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A6C0
 * Size:	00008C
 */
void ItemOnyon::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	lwz      r4, 4(r31)
	mr       r3, r30
	bl       writeInt__6StreamFi
	lis      r4, lbl_8047E808@ha
	mr       r3, r30
	addi     r4, r4, lbl_8047E808@l
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lbz      r4, 8(r31)
	mr       r3, r30
	bl       writeByte__6StreamFUc
	lis      r4, lbl_8047E81C@ha
	mr       r3, r30
	addi     r4, r4, lbl_8047E81C@l
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A74C
 * Size:	000078
 */
void ItemOnyon::Mgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	mr       r3, r29
	bl       readInt__6StreamFv
	lis      r4, 0x30303031@ha
	stw      r3, 4(r30)
	addi     r0, r4, 0x30303031@l
	cmplw    r31, r0
	blt      lbl_8017A7A8
	mr       r3, r29
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 1
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 8(r30)

lbl_8017A7A8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A7C4
 * Size:	000188
 */
ItemOnyon::Mgr::Mgr()
    : BaseItemMgr(1)
{
	m_onyons[ONYON_TYPE_YELLOW] = nullptr;
	m_onyons[ONYON_TYPE_RED]    = nullptr;
	m_onyons[ONYON_TYPE_BLUE]   = nullptr;
	m_ufo                       = nullptr;
	m_pod                       = nullptr;
	BaseItemMgr::m_name         = "Onyon";
	m_modelData                 = new J3DModelData*[3];
	m_onyonAnimMgrFile          = nullptr;
	m_podAnimMgrFile            = nullptr;
	m_ufoAnimMgrFile            = nullptr;
}

/*
 * --INFO--
 * Address:	8017AB6C
 * Size:	00011C
 */
ItemOnyon::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017AC6C
	lis      r3, __vt__Q34Game9ItemOnyon3Mgr@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, __vt__Q34Game9ItemOnyon3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_8017AC28
	lis      r4, "__vt__28NodeObjectMgr<Q24Game5Onyon>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__28NodeObjectMgr<Q24Game5Onyon>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_8017ABD8
	lis      r4, "__vt__26TObjectNode<Q24Game5Onyon>"@ha
	addi     r0, r4, "__vt__26TObjectNode<Q24Game5Onyon>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8017ABD8:
	addic.   r0, r30, 0x4c
	beq      lbl_8017AC28
	lis      r3, "__vt__24ObjectMgr<Q24Game5Onyon>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__24ObjectMgr<Q24Game5Onyon>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_8017AC28
	lis      r3, "__vt__24Container<Q24Game5Onyon>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__24Container<Q24Game5Onyon>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_8017AC28
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_8017AC28:
	addic.   r0, r30, 0x30
	beq      lbl_8017AC5C
	lis      r3, "__vt__24Container<Q24Game5Onyon>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__24Container<Q24Game5Onyon>"@l
	stw      r0, 0x30(r30)
	beq      lbl_8017AC5C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_8017AC5C:
	extsh.   r0, r31
	ble      lbl_8017AC6C
	mr       r3, r30
	bl       __dl__FPv

lbl_8017AC6C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017AC88
 * Size:	000254
 */
void Onyon::on_movie_end(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lhz      r4, 0x22e(r3)
	cmplwi   r4, 4
	bne      lbl_8017ACC4
	lbz      r0, 0x240(r31)
	cmplwi   r0, 5
	bne      lbl_8017ACFC
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x1d4(r31)
	b        lbl_8017ACFC

lbl_8017ACC4:
	cmplwi   r4, 2
	li       r5, 0
	bgt      lbl_8017ACE4
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8017ACE4
	li       r5, 1

lbl_8017ACE4:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8017ACF4
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasBootContainer__Q24Game8PlayDataFi

lbl_8017ACF4:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r31)

lbl_8017ACFC:
	lhz      r4, 0x22e(r31)
	cmplwi   r4, 2
	bgt      lbl_8017AD28
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_8017AD1C
	lha      r0, 0x20(r3)
	b        lbl_8017AD20

lbl_8017AD1C:
	li       r0, -1

lbl_8017AD20:
	cmpwi    r0, 1
	beq      lbl_8017AEC4

lbl_8017AD28:
	cmplwi   r4, 4
	bne      lbl_8017AE24
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r30, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r30, r3
	ble      lbl_8017ADC4
	lwz      r0, 0x250(r31)
	cmpwi    r0, 1
	bgt      lbl_8017AD84
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa2b
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017AD84:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r31)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017AEC4

lbl_8017ADC4:
	lwz      r3, 0x218(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r31)
	cmpwi    r0, 1
	bgt      lbl_8017AE14
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa2b
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017AE14:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r31)
	stfs     f0, 4(r3)
	b        lbl_8017AEC4

lbl_8017AE24:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r31)
	lhz      r4, 0x22e(r31)
	cmplwi   r4, 3
	bne      lbl_8017AE4C
	addi     r3, r31, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017AEC4

lbl_8017AE4C:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017AEA8
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_8017AE74
	lha      r0, 0x20(r3)
	b        lbl_8017AE78

lbl_8017AE74:
	li       r0, -1

lbl_8017AE78:
	cmplwi   r0, 1
	ble      lbl_8017AE88
	cmpwi    r0, 3
	bne      lbl_8017AEC4

lbl_8017AE88:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_8017AE98
	addi     r5, r31, 0x178

lbl_8017AE98:
	addi     r3, r31, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017AEC4

lbl_8017AEA8:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_8017AEB8
	addi     r5, r31, 0x178

lbl_8017AEB8:
	addi     r3, r31, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017AEC4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017AEDC
 * Size:	000BC0
 */
void ItemOnyon::Mgr::birth(int, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, lbl_8047E620@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r3
	mr       r28, r4
	mr       r26, r5
	addi     r31, r6, lbl_8047E620@l
	li       r25, 0
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8017AF24
	bl       __ct__5CNodeFv
	lis      r3, "__vt__26TObjectNode<Q24Game5Onyon>"@ha
	addi     r0, r3, "__vt__26TObjectNode<Q24Game5Onyon>"@l
	stw      r0, 0(r29)

lbl_8017AF24:
	cmpwi    r28, 1
	beq      lbl_8017B2EC
	bge      lbl_8017AF3C
	cmpwi    r28, 0
	bge      lbl_8017AF48
	b        lbl_8017BA60

lbl_8017AF3C:
	cmpwi    r28, 3
	bge      lbl_8017BA60
	b        lbl_8017B600

lbl_8017AF48:
	li       r3, 0x260
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_8017AFD4
	li       r4, 0x402
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game5Onyon@ha
	li       r3, 8
	addi     r4, r4, __vt__Q24Game5Onyon@l
	stw      r4, 0(r27)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017AF8C
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8017AF8C:
	stw      r0, 0x114(r27)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r3, 0xc
	stfs     f0, 0x118(r27)
	stw      r0, 0x23c(r27)
	stfs     f0, 0x228(r27)
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8017AFC4
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r25)

lbl_8017AFC4:
	stw      r25, 0x234(r27)
	li       r0, 0
	stw      r0, 0x238(r27)
	stw      r0, 0x1f4(r27)

lbl_8017AFD4:
	mr       r3, r27
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	slwi     r25, r28, 2
	addi     r3, r27, 0x1a8
	add      r5, r30, r25
	li       r4, 0
	lwz      r0, 0x88(r5)
	li       r5, 0
	stw      r0, 0x1b8(r27)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r3, 0x14
	stfs     f0, 0x1d4(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B030
	lwz      r4, 0x1c(r30)
	li       r5, 0
	li       r6, 2
	lwzx     r4, r4, r25
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8017B030:
	stw      r0, 0x174(r27)
	mr       r3, r27
	mr       r4, r26
	bl       setType__Q24Game5OnyonFi
	add      r5, r30, r25
	lwz      r3, 0x114(r27)
	lwz      r4, 0x174(r27)
	li       r6, 0
	lwz      r5, 0x94(r5)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lis      r4, 0x6C656731@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x6C656731@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_8017B078
	li       r0, 1
	stb      r0, 0x58(r3)

lbl_8017B078:
	lis      r4, 0x6C656732@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x6C656732@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_8017B098
	li       r0, 1
	stb      r0, 0x58(r3)

lbl_8017B098:
	lis      r4, 0x6C656733@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x6C656733@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_8017B0B8
	li       r0, 1
	stb      r0, 0x58(r3)

lbl_8017B0B8:
	cmplwi   r3, 0
	bne      lbl_8017B0D4
	addi     r3, r31, 0x18
	addi     r5, r31, 0xdc
	li       r4, 0x695
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B0D4:
	lis      r4, 0x666F7431@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x666F7431@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	bne      lbl_8017B100
	addi     r3, r31, 0x18
	addi     r5, r31, 0xe8
	li       r4, 0x69a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B100:
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B1F0
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r28, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r28, r3
	ble      lbl_8017B198
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B158
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B158:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017B290

lbl_8017B198:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B1E0
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B1E0:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	b        lbl_8017B290

lbl_8017B1F0:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r4, 0x22e(r27)
	cmplwi   r4, 3
	bne      lbl_8017B218
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B290

lbl_8017B218:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017B274
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_8017B240
	lha      r0, 0x20(r3)
	b        lbl_8017B244

lbl_8017B240:
	li       r0, -1

lbl_8017B244:
	cmplwi   r0, 1
	ble      lbl_8017B254
	cmpwi    r0, 3
	bne      lbl_8017B290

lbl_8017B254:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B264
	addi     r5, r27, 0x178

lbl_8017B264:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B290

lbl_8017B274:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B284
	addi     r5, r27, 0x178

lbl_8017B284:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017B290:
	slwi     r0, r26, 2
	mr       r25, r27
	add      r3, r30, r0
	mr       r4, r26
	stw      r27, 0xa0(r3)
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasBootContainer__Q24Game8PlayDataFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8017BA60
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017BA60
	addi     r3, r27, 0x1a8
	li       r4, 4
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x1d4(r27)
	b        lbl_8017BA60

lbl_8017B2EC:
	li       r3, 0x260
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_8017B378
	li       r4, 0x402
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game5Onyon@ha
	li       r3, 8
	addi     r4, r4, __vt__Q24Game5Onyon@l
	stw      r4, 0(r27)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B330
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8017B330:
	stw      r0, 0x114(r27)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r3, 0xc
	stfs     f0, 0x118(r27)
	stw      r0, 0x23c(r27)
	stfs     f0, 0x228(r27)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8017B368
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r26)

lbl_8017B368:
	stw      r26, 0x234(r27)
	li       r0, 0
	stw      r0, 0x238(r27)
	stw      r0, 0x1f4(r27)

lbl_8017B378:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8017B398
	mr       r4, r27
	bl       createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r27
	bl       addShadow__Q24Game9ShadowMgrFPQ24Game8Creature

lbl_8017B398:
	mr       r3, r27
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	slwi     r25, r28, 2
	addi     r3, r27, 0x1a8
	add      r5, r30, r25
	li       r4, 0
	lwz      r0, 0x88(r5)
	li       r5, 0
	stw      r0, 0x1b8(r27)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r3, 0x14
	stfs     f0, 0x1d4(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B3F4
	lwz      r4, 0x1c(r30)
	li       r5, 0
	li       r6, 2
	lwzx     r4, r4, r25
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8017B3F4:
	stw      r0, 0x174(r27)
	mr       r3, r27
	li       r4, 3
	bl       setType__Q24Game5OnyonFi
	add      r5, r30, r25
	lwz      r3, 0x114(r27)
	lwz      r4, 0x174(r27)
	li       r6, 0
	lwz      r5, 0x94(r5)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B50C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r26, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r26, r3
	ble      lbl_8017B4B4
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B474
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B474:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017B5AC

lbl_8017B4B4:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B4FC
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B4FC:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	b        lbl_8017B5AC

lbl_8017B50C:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r4, 0x22e(r27)
	cmplwi   r4, 3
	bne      lbl_8017B534
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B5AC

lbl_8017B534:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017B590
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_8017B55C
	lha      r0, 0x20(r3)
	b        lbl_8017B560

lbl_8017B55C:
	li       r0, -1

lbl_8017B560:
	cmplwi   r0, 1
	ble      lbl_8017B570
	cmpwi    r0, 3
	bne      lbl_8017B5AC

lbl_8017B570:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B580
	addi     r5, r27, 0x178

lbl_8017B580:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B5AC

lbl_8017B590:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B5A0
	addi     r5, r27, 0x178

lbl_8017B5A0:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017B5AC:
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	stw      r27, 0xac(r30)
	mr       r25, r27
	b        lbl_8017BA60

lbl_8017B600:
	li       r3, 0x260
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_8017B68C
	li       r4, 0x402
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game5Onyon@ha
	li       r3, 8
	addi     r4, r4, __vt__Q24Game5Onyon@l
	stw      r4, 0(r27)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B644
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8017B644:
	stw      r0, 0x114(r27)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r3, 0xc
	stfs     f0, 0x118(r27)
	stw      r0, 0x23c(r27)
	stfs     f0, 0x228(r27)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8017B67C
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r26)

lbl_8017B67C:
	stw      r26, 0x234(r27)
	li       r0, 0
	stw      r0, 0x238(r27)
	stw      r0, 0x1f4(r27)

lbl_8017B68C:
	mr       r3, r27
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	slwi     r25, r28, 2
	addi     r3, r27, 0x1a8
	add      r5, r30, r25
	li       r4, 0
	lwz      r0, 0x88(r5)
	li       r5, 0
	stw      r0, 0x1b8(r27)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r0, 0x403
	li       r3, 0x14
	stfs     f0, 0x1d4(r27)
	sth      r0, 0x128(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B6F0
	lwz      r4, 0x1c(r30)
	lis      r5, 8
	li       r6, 2
	lwzx     r4, r4, r25
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8017B6F0:
	stw      r0, 0x174(r27)
	lis      r4, 0x100
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       newDifferedDisplayList__8J3DModelFUl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	mr       r3, r27
	li       r4, 4
	bl       setType__Q24Game5OnyonFi
	add      r5, r30, r25
	lwz      r3, 0x114(r27)
	lwz      r4, 0x174(r27)
	li       r6, 0
	lwz      r5, 0x94(r5)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B8B8
	li       r0, 3
	stw      r0, 0x250(r27)
	lwz      r25, 0x250(r27)
	mulli    r3, r25, 0x1c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q28SysShape8AnimatorFv@ha
	mr       r7, r25
	addi     r4, r4, __ct__Q28SysShape8AnimatorFv@l
	li       r5, 0
	li       r6, 0x1c
	bl       __construct_new_array
	stw      r3, 0x254(r27)
	lwz      r0, 0x250(r27)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x258(r27)
	mr       r6, r5
	mr       r7, r5
	b        lbl_8017B808

lbl_8017B7D0:
	lwz      r4, 0x1b8(r27)
	cmpwi    r5, 0
	lwz      r3, 0x254(r27)
	addi     r0, r6, 0x10
	stwx     r4, r3, r0
	bne      lbl_8017B7F0
	lfs      f0, lbl_80518A30@sda21(r2)
	b        lbl_8017B7F4

lbl_8017B7F0:
	lfs      f0, lbl_80518A2C@sda21(r2)

lbl_8017B7F4:
	lwz      r3, 0x258(r27)
	addi     r6, r6, 0x1c
	addi     r5, r5, 1
	stfsx    f0, r3, r7
	addi     r7, r7, 4

lbl_8017B808:
	lwz      r0, 0x250(r27)
	cmpw     r5, r0
	blt      lbl_8017B7D0
	cmpwi    r0, 0
	bgt      lbl_8017B830
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B830:
	lwz      r3, 0x254(r27)
	li       r4, 1
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B860
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B860:
	lwz      r3, 0x254(r27)
	li       r4, 2
	li       r5, 0
	addi     r3, r3, 0x1c
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lwz      r0, 0x250(r27)
	cmpwi    r0, 2
	bgt      lbl_8017B894
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B894:
	lwz      r3, 0x254(r27)
	li       r4, 3
	li       r5, 0
	addi     r3, r3, 0x38
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A30@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 8(r3)
	b        lbl_8017B8C8

lbl_8017B8B8:
	li       r0, 0
	stw      r0, 0x250(r27)
	stw      r0, 0x254(r27)
	stw      r0, 0x258(r27)

lbl_8017B8C8:
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B9B8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r26, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r26, r3
	ble      lbl_8017B960
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B920
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B920:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017BA58

lbl_8017B960:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B9A8
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B9A8:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	b        lbl_8017BA58

lbl_8017B9B8:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r4, 0x22e(r27)
	cmplwi   r4, 3
	bne      lbl_8017B9E0
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017BA58

lbl_8017B9E0:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017BA3C
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_8017BA08
	lha      r0, 0x20(r3)
	b        lbl_8017BA0C

lbl_8017BA08:
	li       r0, -1

lbl_8017BA0C:
	cmplwi   r0, 1
	ble      lbl_8017BA1C
	cmpwi    r0, 3
	bne      lbl_8017BA58

lbl_8017BA1C:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017BA2C
	addi     r5, r27, 0x178

lbl_8017BA2C:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017BA58

lbl_8017BA3C:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017BA4C
	addi     r5, r27, 0x178

lbl_8017BA4C:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017BA58:
	mr       r25, r27
	stw      r27, 0xb0(r30)

lbl_8017BA60:
	stw      r25, 0x18(r29)
	mr       r4, r29
	addi     r3, r30, 0x6c
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r25
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017BA9C
 * Size:	000060
 */
Onyon* ItemOnyon::Mgr::getOnyon(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	blt      lbl_8017BAC8
	cmpwi    r4, 3
	bge      lbl_8017BAC8
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r3, 0xa0(r3)
	b        lbl_8017BAEC

lbl_8017BAC8:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E838@ha
	mr       r6, r4
	li       r4, 0xb72
	addi     r3, r3, lbl_8047E638@l
	addi     r5, r5, lbl_8047E838@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_8017BAEC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017BAFC
 * Size:	000020
 */
void ItemOnyon::Mgr::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       load__Q34Game9ItemOnyon3MgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017BB1C
 * Size:	000528
 */
void ItemOnyon::Mgr::load(void)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r4, lbl_8047E620@ha
	li       r5, 0
	stw      r0, 0xb4(r1)
	stmw     r27, 0x9c(r1)
	mr       r31, r3
	addi     r30, r4, lbl_8047E620@l
	addi     r4, r30, 0x230
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 0x68
	addi     r4, r30, 0x23c
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 0x68
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8017BB70
	lwz      r29, 0x34(r3)
	b        lbl_8017BB74

lbl_8017BB70:
	li       r29, 0

lbl_8017BB74:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x230
	bl       heapStatusEnd__6SystemFPc
	addi     r3, r30, 0x258
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BBA8
	addi     r3, r30, 0x18
	addi     r5, r30, 0x264
	li       r4, 0xb96
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BBA8:
	mr       r3, r27
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r4, 0x1c(r31)
	li       r28, 0
	li       r0, 0
	stw      r3, 0(r4)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, 0x44(r3)
	cmpwi    r4, 2
	beq      lbl_8017BBDC
	cmpwi    r4, 3
	bne      lbl_8017BBE0

lbl_8017BBDC:
	li       r0, 1

lbl_8017BBE0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8017BBF4
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8017BCDC

lbl_8017BBF4:
	cmpwi    r4, 1
	beq      lbl_8017BCDC
	lwz      r5, playData__4Game@sda21(r13)
	addi     r3, r1, 0x38
	addi     r4, r30, 0x298
	lbz      r0, 0x2f(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BC18
	addi     r4, r30, 0x27c

lbl_8017BC18:
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r4, r1, 0x38
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 0x50(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8017BC40
	lwz      r28, 0x34(r3)
	b        lbl_8017BC44

lbl_8017BC40:
	li       r28, 0

lbl_8017BC44:
	addi     r3, r2, lbl_80518B38@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BC6C
	addi     r3, r30, 0x18
	addi     r5, r30, 0x2b0
	li       r4, 0xbb6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BC6C:
	mr       r3, r27
	li       r4, 0x30
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r5, 0x1c(r31)
	mr       r27, r3
	lis      r4, 4
	stw      r27, 4(r5)
	lwz      r3, 0x1c(r31)
	lwz      r3, 4(r3)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r31)
	lwz      r3, 4(r3)
	bl       makeSharedDL__12J3DModelDataFv
	li       r4, 0
	b        lbl_8017BCC8

lbl_8017BCA8:
	lwz      r3, 0x80(r27)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8017BCC8:
	lhz      r0, 0x7c(r27)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8017BCA8
	b        lbl_8017BCE8

lbl_8017BCDC:
	lwz      r3, 0x1c(r31)
	li       r0, 0
	stw      r0, 4(r3)

lbl_8017BCE8:
	lwz      r3, 0x1c(r31)
	li       r4, 0
	lwz      r3, 0(r3)
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	addi     r3, r30, 0x2c8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r31)
	mr       r4, r3
	addi     r3, r31, 0xb4
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r30, 0x2d8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r31)
	mr       r4, r3
	addi     r3, r31, 0xc8
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r30, 0x2e8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r31)
	mr       r4, r3
	addi     r3, r31, 0xdc
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r0, r30, 0x2fc
	mr       r3, r31
	stw      r0, 0x28(r31)
	addi     r4, r30, 0x310
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	lwz      r4, 0x1c(r31)
	mr       r27, r3
	mr       r6, r29
	li       r7, 0
	lwz      r5, 0(r4)
	addi     r4, r30, 0x31c
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x88(r31)
	mr       r3, r27
	addi     r4, r30, 0x330
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x94(r31)
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lwz      r4, 0x44(r3)
	cmpwi    r4, 2
	beq      lbl_8017BDC4
	cmpwi    r4, 3
	bne      lbl_8017BDC8

lbl_8017BDC4:
	li       r0, 1

lbl_8017BDC8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8017BDDC
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8017BE54

lbl_8017BDDC:
	cmpwi    r4, 1
	beq      lbl_8017BE54
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BE00
	addi     r0, r30, 0x340
	stw      r0, 0x28(r31)
	b        lbl_8017BE08

lbl_8017BE00:
	addi     r0, r30, 0x354
	stw      r0, 0x28(r31)

lbl_8017BE08:
	mr       r3, r31
	addi     r4, r30, 0x310
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	lwz      r4, 0x1c(r31)
	mr       r27, r3
	mr       r6, r28
	li       r7, 0
	lwz      r5, 4(r4)
	addi     r4, r30, 0x364
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x8c(r31)
	mr       r3, r27
	addi     r4, r30, 0x370
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x98(r31)
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	b        lbl_8017BE60

lbl_8017BE54:
	li       r0, 0
	stw      r0, 0x8c(r31)
	stw      r0, 0x98(r31)

lbl_8017BE60:
	lwz      r5, playData__4Game@sda21(r13)
	addi     r3, r1, 8
	addi     r4, r30, 0x398
	lbz      r0, 0x2f(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BE7C
	addi     r4, r30, 0x37c

lbl_8017BE7C:
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 0x20(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8017BEA4
	lwz      r28, 0x34(r3)
	b        lbl_8017BEA8

lbl_8017BEA4:
	li       r28, 0

lbl_8017BEA8:
	addi     r3, r2, lbl_80518B40@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BED0
	addi     r3, r30, 0x18
	addi     r5, r30, 0x3b0
	li       r4, 0xc33
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BED0:
	lis      r4, 0x21020030@ha
	mr       r3, r27
	addi     r4, r4, 0x21020030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r5, 0x1c(r31)
	mr       r29, r3
	lis      r4, 4
	stw      r29, 8(r5)
	lwz      r3, 0x1c(r31)
	lwz      r3, 8(r3)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r31)
	lwz      r3, 8(r3)
	bl       makeSharedDL__12J3DModelDataFv
	li       r4, 0
	b        lbl_8017BF30

lbl_8017BF10:
	lwz      r3, 0x80(r29)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8017BF30:
	lhz      r0, 0x7c(r29)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8017BF10
	lwz      r3, 0x1c(r31)
	li       r4, 0
	lwz      r3, 8(r3)
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	addi     r3, r2, lbl_80518B48@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BF78
	addi     r3, r30, 0x18
	addi     r5, r30, 0x60
	li       r4, 0xc4f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BF78:
	lwz      r5, 0x1c(r31)
	mr       r4, r27
	addi     r3, r31, 0xf0
	lwz      r5, 8(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r30, 0x3c4
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BFB4
	addi     r3, r30, 0x18
	addi     r5, r30, 0x60
	li       r4, 0xc54
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BFB4:
	lwz      r5, 0x1c(r31)
	mr       r4, r27
	addi     r3, r31, 0x104
	lwz      r5, 8(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BFE4
	addi     r0, r30, 0x3d0
	stw      r0, 0x28(r31)
	b        lbl_8017BFEC

lbl_8017BFE4:
	addi     r0, r30, 0x3e4
	stw      r0, 0x28(r31)

lbl_8017BFEC:
	mr       r3, r31
	addi     r4, r30, 0x310
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	mr       r5, r29
	mr       r27, r3
	mr       r6, r28
	addi     r4, r30, 0x3f4
	li       r7, 0
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x90(r31)
	mr       r3, r27
	addi     r4, r30, 0x370
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x9c(r31)
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	lmw      r27, 0x9c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C044
 * Size:	00000C
 */
u32 ItemOnyon::Mgr::generatorGetID()
{
	/*
	lis      r3, 0x6F6E796E@ha
	addi     r3, r3, 0x6F6E796E@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C050
 * Size:	00000C
 */
u32 ItemOnyon::Mgr::generatorLocalVersion()
{
	/*
	lis      r3, 0x30303031@ha
	addi     r3, r3, 0x30303031@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C05C
 * Size:	00002C
 */
void ItemOnyon::Mgr::doAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C088
 * Size:	00002C
 */
void ItemOnyon::Mgr::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C0B4
 * Size:	00002C
 */
void ItemOnyon::Mgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C0E0
 * Size:	00002C
 */
void ItemOnyon::Mgr::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C10C
 * Size:	00002C
 */
void ItemOnyon::Mgr::doSimulation(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C138
 * Size:	00002C
 */
void ItemOnyon::Mgr::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C164
 * Size:	000004
 */
void BaseItemMgr::killAll(void) { }

/*
 * --INFO--
 * Address:	8017C168
 * Size:	000004
 */
void BaseItemMgr::setup(Game::BaseItem*) { }

/*
 * --INFO--
 * Address:	8017C16C
 * Size:	000004
 */
void BaseItemMgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	8017C170
 * Size:	000008
 */
bool BaseItemMgr::loadEverytime() { return true; }

/*
 * --INFO--
 * Address:	8017C178
 * Size:	000004
 */
void BaseItemMgr::onUpdateUseList(GenItemParm*, int) { }

/*
 * --INFO--
 * Address:	8017C17C
 * Size:	00002C
 */
void* ItemOnyon::Mgr::getEnd()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C1A8
 * Size:	000008
 */
void* NodeObjectMgr<Game::Onyon>::getEnd() { return nullptr; }

namespace Game {

/*
 * --INFO--
 * Address:	8017C1B0
 * Size:	00002C
 */
void* ItemOnyon::Mgr::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C1DC
 * Size:	000008
 */
void* NodeObjectMgr<Game::Onyon>::getStart()
{
	/*
	lwz      r3, 0x30(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017C1E4
 * Size:	00002C
 */
void* ItemOnyon::Mgr::getNext(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C210
 * Size:	000008
 */
void* NodeObjectMgr<Game::Onyon>::getNext(void*)
{
	/*
	lwz      r3, 4(r4)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017C218
 * Size:	00002C
 */
Onyon* ItemOnyon::Mgr::get(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C244
 * Size:	000008
 */
Game::Onyon* NodeObjectMgr<Game::Onyon>::get(void*)
{
	/*
	lwz      r3, 0x18(r4)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017C24C
 * Size:	000008
 */
int GenItemParm::getShapeID(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C270
 * Size:	000008
 */
char* Onyon::getCreatureName()
{
	/*
	addi     r3, r2, lbl_80518B30@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C278
 * Size:	000008
 */
s32 BaseItem::getCreatureID() { return -0x1; }

/*
 * --INFO--
 * Address:	8017C280
 * Size:	000004
 */
void BaseItem::do_setLODParm(Game::AILODParm&) { }

/*
 * --INFO--
 * Address:	8017C284
 * Size:	000008
 */
f32 BaseItem::getMapCollisionRadius(void)
{
	/*
	lfs      f1, 0x1d0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C28C
 * Size:	000008
 */
bool BaseItem::interactAttack(InteractAttack&) { return false; }

/*
 * --INFO--
 * Address:	8017C294
 * Size:	000008
 */
bool BaseItem::interactBreakBridge(InteractBreakBridge&) { return false; }

/*
 * --INFO--
 * Address:	8017C29C
 * Size:	000008
 */
bool BaseItem::interactEat(InteractEat&) { return false; }

/*
 * --INFO--
 * Address:	8017C2A4
 * Size:	000008
 */
bool BaseItem::interactFlockAttack(Game::InteractFlockAttack&) { return false; }

/*
 * --INFO--
 * Address:	8017C2AC
 * Size:	000008
 */
bool BaseItem::interactAbsorb(Game::InteractAbsorb&) { return false; }

/*
 * --INFO--
 * Address:	8017C2B4
 * Size:	000008
 */
bool BaseItem::interactFue(Game::InteractFue&) { return false; }

/*
 * --INFO--
 * Address:	8017C2BC
 * Size:	000008
 */
bool BaseItem::interactFarmKarero(Game::InteractFarmKarero&) { return false; }

/*
 * --INFO--
 * Address:	8017C2C4
 * Size:	000008
 */
bool BaseItem::interactFarmHaero(Game::InteractFarmHaero&) { return false; }

/*
 * --INFO--
 * Address:	8017C2CC
 * Size:	000008
 */
bool BaseItem::interactGotKey(Game::InteractGotKey&) { return false; }

/*
 * --INFO--
 * Address:	8017C2D4
 * Size:	000008
 */
bool BaseItem::getVectorField(Sys::Sphere&, Vector3f&) { return true; }

/*
 * --INFO--
 * Address:	8017C2DC
 * Size:	000008
 */
f32 BaseItem::getWorkDistance(Sys::Sphere& sphere) { return 128000.0f; }

/*
 * --INFO--
 * Address:	8017C2E4
 * Size:	000004
 */
void BaseItem::bounceCallback(Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	8017C2E8
 * Size:	000004
 */
void BaseItem::collisionCallback(Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8017C2EC
 * Size:	000004
 */
void BaseItem::platCallback(Game::PlatEvent&) { }

/*
 * --INFO--
 * Address:	8017C2F0
 * Size:	000004
 */
void BaseItem::updateBoundSphere(void) { }

/*
 * --INFO--
 * Address:	8017C2F4
 * Size:	000024
 */
void BaseItem::getBoundingSphere(Sys::Sphere& sphere) { sphere = m_boundingSphere; }

/*
 * --INFO--
 * Address:	8017C318
 * Size:	000044
 */
void BaseItem::onSetPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x19c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x1a0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x1a4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x21c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C35C
 * Size:	000004
 */
void BaseItem::onSetPosition() { }

/*
 * --INFO--
 * Address:	8017C360
 * Size:	00001C
 */
Vector3f BaseItem::getVelocity() { return m_velocity; }

/*
 * --INFO--
 * Address:	8017C37C
 * Size:	000014
 */
void BaseItem::getVelocityAt(Vector3f& a, Vector3f& b) { b = Vector3f(0.0f); }

/*
 * --INFO--
 * Address:	8017C73C
 * Size:	00000C
 */
const char* ItemPikihead::InitArg::getName()
{
	/*
	lis      r3, lbl_8047EA5C@ha
	addi     r3, r3, lbl_8047EA5C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C748
 * Size:	00000C
 */
const char* ItemInitArg::getName()
{
	/*
	lis      r3, lbl_8047EA74@ha
	addi     r3, r3, lbl_8047EA74@l
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C754
 * Size:	000018
 */
void NodeObjectMgr<Game::Onyon>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x30(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C76C
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017C7B4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C920

lbl_8017C7B4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C820

lbl_8017C7CC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017C920
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017C820:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017C7CC
	b        lbl_8017C920

lbl_8017C840:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017C890
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C920

lbl_8017C890:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C904

lbl_8017C8B0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017C920
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017C904:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017C8B0

lbl_8017C920:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017C840
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C950
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017C998
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CB04

lbl_8017C998:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CA04

lbl_8017C9B0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CB04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CA04:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017C9B0
	b        lbl_8017CB04

lbl_8017CA24:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017CA74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CB04

lbl_8017CA74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CAE8

lbl_8017CA94:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CB04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CAE8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CA94

lbl_8017CB04:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CA24
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017CB34
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017CB84
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CCF4

lbl_8017CB84:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CBF0

lbl_8017CB9C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CCF4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CBF0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CB9C
	b        lbl_8017CCF4

lbl_8017CC10:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017CC64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CCF4

lbl_8017CC64:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CCD8

lbl_8017CC84:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CCF4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CCD8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CC84

lbl_8017CCF4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CC10
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017CD28
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017CD70
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CEDC

lbl_8017CD70:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CDDC

lbl_8017CD88:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CEDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CDDC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CD88
	b        lbl_8017CEDC

lbl_8017CDFC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017CE4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CEDC

lbl_8017CE4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CEC0

lbl_8017CE6C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CEDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CEC0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CE6C

lbl_8017CEDC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CDFC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017CF0C
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017CF5C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D0CC

lbl_8017CF5C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CFC8

lbl_8017CF74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D0CC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CFC8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CF74
	b        lbl_8017D0CC

lbl_8017CFE8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017D03C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D0CC

lbl_8017D03C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D0B0

lbl_8017D05C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D0CC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017D0B0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017D05C

lbl_8017D0CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CFE8
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D100
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doDirectDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017D150
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D2C0

lbl_8017D150:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D1BC

lbl_8017D168:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D2C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017D1BC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017D168
	b        lbl_8017D2C0

lbl_8017D1DC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017D230
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D2C0

lbl_8017D230:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D2A4

lbl_8017D250:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D2C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017D2A4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017D250

lbl_8017D2C0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017D1DC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D2F4
 * Size:	00002C
 */
void* Container<Game::Onyon>::getObject(void* obj)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D320
 * Size:	000008
 */
Game::Onyon* Container<Game::Onyon>::getAt(int to) { return nullptr; }

/*
 * --INFO--
 * Address:	8017D328
 * Size:	000008
 */
int Container<Game::Onyon>::getTo() { return 0; }
