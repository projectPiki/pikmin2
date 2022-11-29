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
#include "LoadResource.h"
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
#include "JSystem/J3D/J3DModelLoader.h"

Game::ItemOnyon::Mgr* Game::ItemOnyon::mgr;
static bool sVolveFlag;

namespace Game {

static const char UNUSED_1[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char UNUSED_2[] = "onyonMgr";

/*
 * --INFO--
 * Address:	80174CA0
 * Size:	00080C
 */
void Onyon::movieUserCommand(u32 code, MoviePlayer* player)
{
	// TODO: make code enum
	switch (code) {
	case 100: // 0x64
	case 105: // 0x69
		if (!playData->hasBootContainer(m_onyonType)) {
			JUT_PANICLINE(534, "BIKKURI no boot!\n");
		}

		// Redundant call
		GameStat::getAllPikmins(m_onyonType);

		// This whole section of code is almost entirely redundant, it spawns a new sprout,
		// kills it, then spawns the actual sprout it uses, WTF?
		if (code == 105 || !GameStat::checkZikatu(static_cast<EPikiKind>(m_onyonType))) {
			playData->setContainer(m_onyonType);

			// Generate new sprout and play cutscene
			ItemPikihead::Item* newSprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (newSprout) {
				ItemPikihead::InitArg newSproutArg((EPikiKind)m_onyonType, Vector3f::zero);
				newSprout->init(&newSproutArg);
				BirthMgr::inc(newSprout->m_color);
				newSprout->movie_begin(false);
				doEmit(newSprout, true);
				return;
			}

			gameSystem->m_section->_12C->frameInitAll();
			gameSystem->m_section->_130->frameInitAll();

			ItemPikihead::Item* furthestPiki = nullptr;
			f32 maxDist                      = 0.0f;
			Iterator<ItemPikihead::Item> iterHeads(ItemPikihead::mgr);
			CI_LOOP(iterHeads)
			{
				ItemPikihead::Item* head = *iterHeads;
				if (!head->isAlive()) {
					continue;
				}

				f32 curDist = head->calcSphereDistance(this);
				if (curDist > maxDist) {
					maxDist      = curDist;
					furthestPiki = head;
				}
			}

			if (furthestPiki) {
				GameStat::mePikis.dec(furthestPiki->m_color);

				int& pikiHeadCount = playData->m_pikiContainer.getCount(furthestPiki->m_color, furthestPiki->m_headType);
				pikiHeadCount++;

				CreatureKillArg killArg(1);
				furthestPiki->kill(&killArg);
			} else {
				// No piki head, try kill an actual Piki

				Iterator<Piki> iterPiki(pikiMgr);
				Piki* targetPiki = nullptr;

				CI_LOOP(iterPiki)
				{
					Piki* piki = *iterPiki;
					if (piki->isAlive() && !piki->isZikatu()) {
						f32 curDist = piki->calcSphereDistance(this);
						if (curDist > maxDist) {
							maxDist    = curDist;
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

			newSprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (newSprout) {
				ItemPikihead::InitArg sproutArg(static_cast<EPikiKind>(m_onyonType), Vector3f::zero);
				newSprout->init(&sproutArg);
				BirthMgr::inc(newSprout->m_color);
				newSprout->movie_begin(false);
				doEmit(newSprout, true);
			} else {
				JUT_PANICLINE(641, "onyon supply failure!\n");
			}
		}
		break;

	case 101: // 0x65
		if (m_onyonType <= ONYON_TYPE_YELLOW) {
			if (moviePlayer->m_flags & MoviePlayer::IS_FINISHED) {
				setSpotState(SPOTSTATE_Opened);
			} else {
				setSpotState(SPOTSTATE_Closing);
			}
		} else if (m_onyonType == ONYON_TYPE_SHIP || m_onyonType == ONYON_TYPE_POD) {
			setSpotEffect(true);
		}
		break;

	case 102: // 0x66
		if (m_onyonType <= ONYON_TYPE_YELLOW) {
			if (moviePlayer->m_flags & MoviePlayer::IS_FINISHED) {
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
		}

		if (m_suckState == SUCKSTATE_IdleClosed) {
			m_animator.startAnim(0, this);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->isStoryFlag(STORY_DebtPaid)) {
				sound = PSSE_EV_PODGOLD_OPEN; // Gold UFO
			}
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
			if (playData->isStoryFlag(STORY_DebtPaid)) {
				sound = PSSE_EV_PODGOLD_OPEN; // Gold UFO
			}

			item->startSound(sound);
			item->m_animSpeed = 30.0f;
			item->m_suckState = Onyon::SUCKSTATE_Opening;
			item->m_ufoPodOpen->create(nullptr);
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
		param.m_size                    = 27.0f;
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
	// Causes the glitch regarding sprouts and objects brought to onions during cutscenes
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

			// carcass (1), ?? (3) or item (4)
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

			const f32 theta = item->getFaceDir();
			pos += Vector3f(20.0f * pikmin2_sinf(theta), 117.0f, 20.0f * pikmin2_cosf(theta));
			int money = pellet->m_config->m_params.m_money.m_data;
			if (money > 0) {
				carryInfoMgr->appearPoko(pos, money);
			}
		}
	}

	item->m_pikminType = item->m_onyonType;
	if (item->m_onyonType <= ONYON_TYPE_YELLOW) {
		SysShape::Joint* jnt = item->m_model->getJoint("body_1");
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
		const char* peltnames[2] = { VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue };

		for (int i = 0; i < 2; i++) {
			if (!strcmp(peltnames[i], pellet->m_config->m_params.m_name.m_data)) {
				if (i == 1 - item->m_onyonType) {
					_08 = 1;

					Vector3f offs = item->getFlagSetPos();
					offs.y += (pellet->getCylinderHeight() * 0.5f + 2.0f);
					pellet->setPosition(offs, 0);

					Vector3f vel(0.0f, 400.0f, 0.0f);
					pellet->setVelocity(vel);
					pellet->setAlive(true);
					pellet->finish_carrymotion();

					// TODO: define when pellet states
					pellet->m_pelletSM->transit(pellet, 5, nullptr);
				} else {
					GameMessageVsBattleFinished msg;
					msg.m_winningSide = 1 - i;
					gameSystem->m_section->sendMessage(msg);
					return true;
				}
			}
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
		int money = pellet->getPokoValue();

		if (gameSystem->m_inCave) {
			playData->m_cavePokoCount += money;
		} else {
			gameSystem->m_section->_PADDING00 += money;
		}
	}

	if (gameSystem->isChallengeMode()) {
		gameSystem->m_section->addChallengeScore(pellet->m_config->m_params.m_money.m_data);
		return true;
	}

	// number pellet (checks if color matches onion)
	if (pellet->getKind() == PELTYPE_NUMBER) {
		int min, max;

		u16 color = (int)pellet->m_pelletColor;
		pellet->getPikiBirthCount(min, max);

		u32 type = item->m_onyonType;
		if (type == ONYON_TYPE_POD || (u32)color == (u16)type) {
			item->m_toBirth += max;
		} else {
			item->m_toBirth += min;
		}
	} else {
		// carry treasure/item/carcass to an onion/ship
		if (pellet->getKind() == PELTYPE_TREASURE || pellet->getKind() == PELTYPE_UPGRADE || pellet->getKind() == PELTYPE_CARCASS) {
			// brought to the pod (the game just assumes you're in a cave)
			if (item->m_onyonType == ONYON_TYPE_POD) {
				if (pellet->m_config->m_params.m_money.m_data > 0) {
					playData->obtainPellet_Cave(pellet);
				}
				// brought to the ship (the game just assumes you're above ground)
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

	return true;
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
Onyon::Onyon()
    : BaseItem(OBJTYPE_Onyon)
{
	m_collTree       = new CollTree();
	m_mass           = 0.0f;
	m_goalWayPoint   = nullptr;
	m_faceDir        = 0.0f;
	m_matAnim1       = new Sys::MatLoopAnimator;
	m_matAnim2       = nullptr;
	m_spotbeam_model = nullptr;
}

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
			f32& speed = getPMotionSpeed(2);
			speed += m_propera * sys->m_deltaTime;
			if (speed < 30.0f) {
				speed     = 30.0f;
				m_propera = 0.0f;
			} else if (speed > 30.0f) {
				speed     = 30.0f;
				m_propera = 0.0f;
			}
		}
		f32& speed = getPMotionSpeed(1);
		if (speed > 0.0f) {
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
			SysShape::Animator anim = getPAnimator(1);
			f32 time                = anim.m_timer;
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
 * Address:	........
 * Size:	0000E0
 */
void Onyon::initTube()
{
	CollPart* part = m_collTree->getCollPart('leg1');
	if (part) {
		part->m_partType = COLLTYPE_TUBE;
	}

	part = m_collTree->getCollPart('leg2');
	if (part) {
		part->m_partType = COLLTYPE_TUBE;
	}

	part = m_collTree->getCollPart('leg3');
	if (part) {
		part->m_partType = COLLTYPE_TUBE;
	}
	if (!part) {
		JUT_PANICLINE(1685, "bikkuri!\n");
	}

	part = m_collTree->getCollPart('fot1');
	JUT_ASSERTLINE(1690, part, "I\'am bikkuri-ed\n");
}

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
			getPMotionSpeed(1) = 30.0f;
			m_ufoGasIn->create(0);
			m_ufoGasOut->create(0);
		} else {
			m_ufoGasIn->fade();
			m_ufoGasOut->fade();
			getPMotionSpeed(1) = 0.0f;
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
					m_animator.startAnim(2, this);
				}
			} else {
				m_animator.startAnim(0, this);
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
Vector3f Onyon::getFlagSetPos()
{
	const f32 dir   = getFaceDir();
	Vector3f offset = Vector3f(100.0f * pikmin2_sinf(dir), 0.0f, 100.0f * pikmin2_cosf(dir));
	Vector3f pos    = getPosition();
	pos += offset;
	return pos;
}

/*
 * --INFO--
 * Address:	80178140
 * Size:	00004C
 */
void Onyon::onKeyEvent(const SysShape::KeyEvent& event)
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
					int shootcount = m_toBirth / 2;
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
							BirthMgr::inc(obj->m_color);
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
		char* jntnames[3]      = { "kasi1jnt1", "kass2jnt1", "kasi3jnt1" };
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
					getPMotionSpeed(1) = 0.0f;
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

/*
 * --INFO--
 * Address:	80179D60
 * Size:	00011C
 */
BaseItem* ItemOnyon::Mgr::generatorBirth(Vector3f& pos, Vector3f& angle, GenItemParm* parm)
{
	GenOnyonParm* onyonparm = static_cast<GenOnyonParm*>(parm);
	int objectType;
	int onyonType = ONYON_TYPE_BLUE;

	switch (onyonparm->m_onyonIndex) {
	case ONYON_TYPE_BLUE:
		objectType = ONYON_OBJECT_ONYON;
		onyonType  = ONYON_TYPE_BLUE;
		break;

	case ONYON_TYPE_RED:
		objectType = ONYON_OBJECT_ONYON;
		onyonType  = ONYON_TYPE_RED;
		break;

	case ONYON_TYPE_YELLOW:
		objectType = ONYON_OBJECT_ONYON;
		onyonType  = ONYON_TYPE_YELLOW;
		break;

	case ONYON_TYPE_POD:
		objectType = ONYON_OBJECT_POD;
		break;

	case ONYON_TYPE_SHIP:
		objectType = ONYON_OBJECT_SHIP;
		break;
	}

	if (objectType == ONYON_OBJECT_ONYON) {
		if (!playData->hasContainer(onyonType) && onyonparm->m_isAfterBoot)
			return nullptr;
		if (!onyonparm->m_isAfterBoot && playData->hasContainer(onyonType))
			return nullptr;
	}

	Onyon* onyon     = birth(objectType, onyonType);
	onyon->m_faceDir = angle.y;
	onyon->setPosition(pos, false);
	return onyon;
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
Vector3f Onyon::getInEnd_UFO()
{
	if (m_pikiInJoint) {
		return getJointPosition(m_pikiInJoint); // this is necessary to make the stack line up for both this and the next function
	} else {
		JUT_PANICLINE(2545, "not ufo\n");
		return Vector3f::zero;
	}
}

/*
 * --INFO--
 * Address:	80179F44
 * Size:	000168
 */
Vector3f Onyon::getInStart_UFO()
{
	Vector3f jntpos = getInEnd_UFO();
	f32 jX          = jntpos.x;
	f32 jZ          = jntpos.z;
	Vector3f pos    = getPosition();
	Vector3f fixpos(jX - pos.x, 0.0f, jZ - pos.z);
	_normalise(fixpos);
	return (pos + (fixpos * 90.0f));
}

/*
 * --INFO--
 * Address:	8017A0AC
 * Size:	0000C4
 */
Vector3f Onyon::getOutStart_UFO()
{
	if (m_pikiOutJoint) {
		return getJointPosition(m_pikiOutJoint);
	} else {
		JUT_PANICLINE(2569, "‚¾‚ß‚Å‚·");
		return Vector3f::zero;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void Onyon::init_pmotions()
{
	f32 speed;
	if (m_onyonType == ONYON_TYPE_SHIP) {
		m_pMotionCount  = 3;
		m_pMotionList   = new SysShape::Animator[m_pMotionCount];
		m_pMotionSpeeds = new f32[m_pMotionCount];

		for (int i = 0; i < m_pMotionCount; i++) {
			m_pMotionList[i].m_animMgr = m_animator.m_animMgr;
			if (i == 0) {
				speed = 30.0f;
			} else {
				speed = 0.0f;
			}
			m_pMotionSpeeds[i] = speed;
		}

		getPAnimator(0).startAnim(1, nullptr);
		getPAnimator(1).startAnim(2, nullptr);
		getPAnimator(2).startAnim(3, nullptr);

		m_pMotionSpeeds[2] = 30.0f;

	} else {
		m_pMotionCount  = 0;
		m_pMotionList   = nullptr;
		m_pMotionSpeeds = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8017A1A4
 * Size:	00007C
 */
f32& Onyon::getPMotionSpeed(int i)
{
	bool check = (0 <= i && i < m_pMotionCount);
	P2ASSERTLINE(2603, check);
	return m_pMotionSpeeds[i];
}

/*
 * --INFO--
 * Address:	8017A220
 * Size:	00007C
 */
SysShape::Animator& Onyon::getPAnimator(int i)
{
	bool check = (0 <= i && i < m_pMotionCount);
	P2ASSERTLINE(2609, check);
	return m_pMotionList[i];
}

/*
 * --INFO--
 * Address:	8017A29C
 * Size:	000198
 */
void Onyon::update_pmotions()
{
	f32 time = sys->m_deltaTime;
	if (m_onyonType == ONYON_TYPE_SHIP) {
		for (int i = 0; i < m_pMotionCount; i++) {
			char* names[3] = { "pmotion1", "pmotion2", "pmotion3" };

			SysShape::Animator& panim = getPAnimator(i);
			panim.animate(time * getPMotionSpeed(i));
			SysShape::Joint* jnt = m_model->getJoint(names[i]);
			if (jnt) {
				u16 id                 = jnt->m_jointIndex;
				SysShape::Model* model = m_model;
				J3DMtxCalc* calc       = static_cast<SysShape::BaseAnimator*>(&panim)->getCalc();
				model->m_j3dModel->m_modelData->m_jointTree.m_joints[id]->m_mtxCalc = static_cast<J3DMtxCalcAnmBase*>(calc);
			} else {
				JUT_PANICLINE(2643, "no joint (%s)\n", names[i]);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8017A434
 * Size:	0001E8
 */
void ItemOnyon::Mgr::initDependency()
{
	Iterator<Onyon> iterOnyon(&m_nodeObjectMgr);
	CI_LOOP(iterOnyon)
	{
		Onyon* item = static_cast<Onyon*>(*iterOnyon);
		item->initDependency();
	}
}

/*
 * --INFO--
 * Address:	8017A620
 * Size:	00004C
 */
J3DModelData* ItemOnyon::Mgr::generatorGetShape(GenItemParm* parm)
{
	GenOnyonParm* onyonparm = static_cast<GenOnyonParm*>(parm);

	int objType;
	switch (onyonparm->m_onyonIndex) {
	case ONYON_TYPE_RED:
	case ONYON_TYPE_BLUE:
	case ONYON_TYPE_YELLOW:
		objType = ONYON_OBJECT_ONYON;
		break;
	case ONYON_TYPE_POD:
		objType = ONYON_OBJECT_POD;
		break;
	case ONYON_TYPE_SHIP:
		objType = ONYON_OBJECT_SHIP;
		break;
	}

	return m_modelData[objType];
}

/*
 * --INFO--
 * Address:	8017A66C
 * Size:	000054
 */
GenItemParm* ItemOnyon::Mgr::generatorNewItemParm() { return new GenOnyonParm(); }

/*
 * --INFO--
 * Address:	8017A6C0
 * Size:	00008C
 */
void ItemOnyon::Mgr::generatorWrite(Stream& ram, Game::GenItemParm* parm)
{
	GenOnyonParm* onyonparm = static_cast<GenOnyonParm*>(parm);
	ram.textWriteTab(ram.m_tabCount);
	ram.writeInt(onyonparm->m_onyonIndex);
	ram.textWriteText("\t# onyon index\r\n");

	ram.textWriteTab(ram.m_tabCount);
	ram.writeByte(onyonparm->m_isAfterBoot);
	ram.textWriteText("\t# after boot? true==1\r\n");
}

/*
 * --INFO--
 * Address:	8017A74C
 * Size:	000078
 */
void ItemOnyon::Mgr::generatorRead(Stream& ram, Game::GenItemParm* parm, unsigned long flag)
{
	GenOnyonParm* onyonparm = static_cast<GenOnyonParm*>(parm);
	onyonparm->m_onyonIndex = ram.readInt();
	if (flag >= '0001') {
		onyonparm->m_isAfterBoot = !(1 - ram.readByte());
	}
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
	m_animMgrFiles[0]           = nullptr;
	m_animMgrFiles[1]           = nullptr;
	m_animMgrFiles[2]           = nullptr;
}

/*
 * --INFO--
 * Address:	8017A7C4
 * Size:	000188
 */
ItemOnyon::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	8017AC88
 * Size:	000254
 */
void Onyon::on_movie_end(bool)
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		if (m_suckState == SUCKSTATE_IdleClosed) {
			m_animSpeed = 0.0f;
		}
	} else {
		bool checkboot = false;
		if (m_onyonType <= ONYON_TYPE_YELLOW && gameSystem->m_mode == GSM_STORY_MODE) {
			checkboot = true;
		}
		if (checkboot) {
			playData->hasBootContainer(m_onyonType);
		}
		m_animSpeed = 30.0f;
	}

	if (m_onyonType <= ONYON_TYPE_YELLOW) {

		int animid = (m_animator.m_animInfo) ? m_animator.m_animInfo->m_id : -1;

		if (animid == 1) {
			return;
		}
	}

	startWaitMotion();
}

/*
 * --INFO--
 * Address:	8017AEDC
 * Size:	000BC0
 */
Onyon* ItemOnyon::Mgr::birth(int objtype, int onyontype)
{
	Onyon* resultOnyon          = nullptr;
	TObjectNode<Onyon>* nodeobj = new TObjectNode<Onyon>;

	switch (objtype) {
	case ONYON_OBJECT_ONYON:
		Onyon* onyon = new Onyon;
		onyon->init(nullptr);

		onyon->m_animator.m_animMgr = m_animMgrFiles[objtype];
		onyon->m_animator.startAnim(0, nullptr);
		onyon->m_animSpeed = 30.0f;
		onyon->m_model     = new SysShape::Model(m_modelData[objtype], 0, 2);
		onyon->setType(onyontype);

		onyon->m_collTree->createFromFactory(onyon->m_model, m_collFactories[objtype], nullptr);
		onyon->initTube();

		onyon->startWaitMotion();

		resultOnyon         = onyon;
		m_onyons[onyontype] = onyon;
		playData->hasBootContainer(onyontype);

		// play boot animation if the onion isnt booted (glitched onion)
		if (gameSystem->m_mode == GSM_STORY_MODE && !playData->hasBootContainer(onyontype)) {
			onyon->m_animator.startAnim(4, nullptr);
			onyon->m_animSpeed = 0.0f;
		}
		break;

	case ONYON_OBJECT_POD:
		onyon = new Onyon;
		if (shadowMgr) {
			shadowMgr->createShadow(onyon);
			shadowMgr->addShadow(onyon);
		}
		onyon->init(nullptr);
		onyon->m_animator.m_animMgr = m_animMgrFiles[objtype];
		onyon->m_animator.startAnim(0, nullptr);
		onyon->m_animSpeed = 30.0f;
		onyon->m_model     = new SysShape::Model(m_modelData[objtype], 0, 2);
		onyon->setType(ONYON_TYPE_POD);

		onyon->m_collTree->createFromFactory(onyon->m_model, m_collFactories[objtype], nullptr);

		onyon->startWaitMotion();

		onyon->m_model->m_j3dModel->calc();
		onyon->m_model->m_j3dModel->calcMaterial();
		onyon->m_model->m_j3dModel->makeDL();
		onyon->m_model->m_j3dModel->lock();

		m_pod       = onyon;
		resultOnyon = onyon;
		break;

	case ONYON_OBJECT_SHIP:
		onyon = new Onyon;

		onyon->init(nullptr);
		onyon->m_animator.m_animMgr = m_animMgrFiles[objtype];
		onyon->m_animator.startAnim(0, nullptr);
		onyon->m_animSpeed    = 0.0f;
		onyon->m_objectTypeID = OBJTYPE_Ufo;
		onyon->m_model        = new SysShape::Model(m_modelData[objtype], 0x00080000, 2);

		onyon->m_model->m_j3dModel->newDifferedDisplayList(0x1000000);
		onyon->m_model->m_j3dModel->calc();
		onyon->m_model->m_j3dModel->calcMaterial();
		onyon->m_model->m_j3dModel->makeDL();
		onyon->m_model->m_j3dModel->lock();

		onyon->setType(ONYON_TYPE_SHIP);
		onyon->m_collTree->createFromFactory(onyon->m_model, m_collFactories[objtype], nullptr);

		onyon->init_pmotions();

		onyon->startWaitMotion();
		resultOnyon = onyon;
		m_ufo       = onyon;

		break;
	}

	nodeobj->m_contents = resultOnyon;
	m_nodeObjectMgr.m_node.add(nodeobj);
	nodeobj->m_contents->constructor();
	return resultOnyon;
}

/*
 * --INFO--
 * Address:	8017BA9C
 * Size:	000060
 */
Onyon* ItemOnyon::Mgr::getOnyon(int i)
{
	if (i >= 0 && i < ONYON_TYPE_MAX) {
		return m_onyons[i];
	} else {
		JUT_PANICLINE(2930, "illegal onyon index %d\n", i);
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	8017BAFC
 * Size:	000020
 */
void ItemOnyon::Mgr::init() { load(); }

/*
 * --INFO--
 * Address:	8017BB1C
 * Size:	000528
 */
void ItemOnyon::Mgr::load()
{
	sys->heapStatusStart("onyon-arc", nullptr);
	LoadResource::Arg loadarg("user/Kando/onyon/arc.szs");
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(loadarg);
	JKRArchive* onyonarc;
	if (node) {
		onyonarc = node->m_archive;
	} else {
		onyonarc = nullptr;
	}
	sys->heapStatusEnd("onyon-arc");

	void* file = JKRFileLoader::getGlbResource("goal.bmd", nullptr);
	JUT_ASSERTLINE(2966, file, "goal.bmd not found !!\n");
	m_modelData[0] = J3DModelLoaderDataBase::load(file, 0x240000);

	JKRArchive* podarc = nullptr;
	if ((gameSystem->isChallengeMode() || gameSystem->m_inCave) && gameSystem->m_mode != GSM_VERSUS_MODE) {
		LoadResource::Arg loadpodarg(playData->isStoryFlag(STORY_DebtPaid) ? "user/Kando/pod_gold/arc.szs" : "user/Kando/pod/arc.szs");
		loadpodarg.m_heap = getCurrentHeap();
		node              = gLoadResourceMgr->mountArchive(loadpodarg);
		if (node) {
			podarc = node->m_archive;
		} else {
			podarc = nullptr;
		}

		file = JKRFileLoader::getGlbResource("pot.bmd", nullptr);
		JUT_ASSERTLINE(2998, file, "pot.bmd not found !!\n");
		J3DModelData* modelDataPod = J3DModelLoaderDataBase::load(file, 0x00000030);
		m_modelData[1]             = modelDataPod;
		m_modelData[1]->newSharedDisplayList(0x40000);
		m_modelData[1]->makeSharedDL();
		for (u16 i = 0; i < modelDataPod->m_shapeTable.m_count; i++) {
			u32 flags                                      = modelDataPod->m_shapeTable.m_items[i]->m_flags & 0xFFFF0FFF;
			modelDataPod->m_shapeTable.m_items[i]->m_flags = flags | 0x2000;
		}

	} else {
		m_modelData[1] = nullptr;
	}

	SysShape::Model::enableMaterialAnim(m_modelData[0], 0);

	file = JKRFileLoader::getGlbResource("kidou_blue.brk", nullptr);
	m_onyonTevAnim[0].attachResource(file, m_modelData[0]); // blue mat anim

	file = JKRFileLoader::getGlbResource("kidou_red.brk", nullptr);
	m_onyonTevAnim[1].attachResource(file, m_modelData[0]); // red mat anim

	file = JKRFileLoader::getGlbResource("kidou_yellow.brk", nullptr);
	m_onyonTevAnim[2].attachResource(file, m_modelData[0]); // yellow mat anim

	m_objectPathComponent               = "user/Kando/onyon";
	JKRArchive* onyontextarc            = openTextArc("texts.szs");
	m_animMgrFiles[ONYON_OBJECT_ONYON]  = SysShape::AnimMgr::load(onyontextarc, "onyonAnimMgr.txt", m_modelData[0], onyonarc, nullptr);
	m_collFactories[ONYON_OBJECT_ONYON] = CollPartFactory::load(onyontextarc, "onyonColl.txt");
	closeTextArc(onyontextarc);

	if ((gameSystem->isChallengeMode() || gameSystem->m_inCave) && gameSystem->m_mode != GSM_VERSUS_MODE) {
		if (playData->m_storyFlags & STORY_DebtPaid) {
			m_objectPathComponent = "user/Kando/pod_gold";
		} else {
			m_objectPathComponent = "user/Kando/pod";
		}
		JKRArchive* podtextarc            = openTextArc("texts.szs");
		m_animMgrFiles[ONYON_OBJECT_POD]  = SysShape::AnimMgr::load(podtextarc, "animMgr.txt", m_modelData[1], podarc, nullptr);
		m_collFactories[ONYON_OBJECT_POD] = CollPartFactory::load(podtextarc, "coll.txt");
		closeTextArc(podtextarc);
	} else {
		m_animMgrFiles[ONYON_OBJECT_POD]  = nullptr;
		m_collFactories[ONYON_OBJECT_POD] = nullptr;
	}

	JKRArchive* ufoarc;
	LoadResource::Arg loadufoarg(playData->isStoryFlag(STORY_DebtPaid) ? "user/Kando/ufo_gold/arc.szs" : "user/Kando/ufo/arc.szs");
	loadufoarg.m_heap = getCurrentHeap();
	node              = gLoadResourceMgr->mountArchive(loadufoarg);
	if (node) {
		ufoarc = node->m_archive;
	} else {
		ufoarc = nullptr;
	}
	file = JKRFileLoader::getGlbResource("ufo.bmd", nullptr);
	JUT_ASSERTLINE(3123, file, "ufo.bmd not found!\n");
	J3DModelData* modelDataUfo = J3DModelLoaderDataBase::load(file, 0x21020030);
	m_modelData[2]             = modelDataUfo;
	m_modelData[2]->newSharedDisplayList(0x40000);
	m_modelData[2]->makeSharedDL();
	for (u16 i = 0; i < modelDataUfo->m_shapeTable.m_count; i++) {
		u32 flags                                      = modelDataUfo->m_shapeTable.m_items[i]->m_flags & 0xFFFF0FFF;
		modelDataUfo->m_shapeTable.m_items[i]->m_flags = flags | 0x2000;
	}

	SysShape::Model::enableMaterialAnim(m_modelData[2], 0);

	file = JKRFileLoader::getGlbResource("ufo.brk", nullptr);
	P2ASSERTLINE(3151, file);
	m_ufoTevAnim[0].attachResource(file, m_modelData[2]);

	file = JKRFileLoader::getGlbResource("ufo_2.brk", nullptr);
	P2ASSERTLINE(3156, file);
	m_ufoTevAnim[1].attachResource(file, m_modelData[2]);

	if (playData->m_storyFlags & STORY_DebtPaid) {
		m_objectPathComponent = "user/Kando/ufo_gold";
	} else {
		m_objectPathComponent = "user/Kando/ufo";
	}

	JKRArchive* ufotextarc             = openTextArc("texts.szs");
	m_animMgrFiles[ONYON_OBJECT_SHIP]  = SysShape::AnimMgr::load(ufotextarc, "animmgr.txt", modelDataUfo, ufoarc, nullptr);
	m_collFactories[ONYON_OBJECT_SHIP] = CollPartFactory::load(ufotextarc, "coll.txt");
	closeTextArc(ufotextarc);
}

} // namespace Game
