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
#include "JSystem/JAudio/JALCalc.h"
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
		if (!playData->hasBootContainer(mOnyonType)) {
			JUT_PANICLINE(534, "BIKKURI no boot!\n");
		}

		// Redundant call
		GameStat::getAllPikmins(mOnyonType);

		// This whole section of code is almost entirely redundant, it spawns a new sprout,
		// kills it, then spawns the actual sprout it uses, WTF?
		if (code == 105 || !GameStat::checkZikatu(static_cast<EPikiKind>(mOnyonType))) {
			playData->setContainer(mOnyonType);

			// Generate new sprout and play cutscene
			ItemPikihead::Item* newSprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (newSprout) {
				ItemPikihead::InitArg newSproutArg((EPikiKind)mOnyonType, Vector3f::zero);
				newSprout->init(&newSproutArg);
				BirthMgr::inc(newSprout->mColor);
				newSprout->movie_begin(false);
				doEmit(newSprout, true);
				return;
			}

			gameSystem->mSection->mDrawBuffer1->frameInitAll();
			gameSystem->mSection->mDrawBuffer2->frameInitAll();

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
				GameStat::mePikis.dec(furthestPiki->mColor);

				int& pikiHeadCount = playData->mPikiContainer.getCount(furthestPiki->mColor, furthestPiki->mHeadType);
				pikiHeadCount++;

				CreatureKillArg killArg(CKILL_Unk1);
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
					int& pikiCount = playData->mPikiContainer.getCount(targetPiki->mPikiKind, targetPiki->mHappaKind);
					pikiCount++;

					CreatureKillArg pikiKillArg(CKILL_Unk1);
					targetPiki->kill(&pikiKillArg);
				}
			}

			newSprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (newSprout) {
				ItemPikihead::InitArg sproutArg(static_cast<EPikiKind>(mOnyonType), Vector3f::zero);
				newSprout->init(&sproutArg);
				BirthMgr::inc(newSprout->mColor);
				newSprout->movie_begin(false);
				doEmit(newSprout, true);
			} else {
				JUT_PANICLINE(641, "onyon supply failure!\n");
			}
		}
		break;

	case 101: // 0x65
		if (mOnyonType <= ONYON_TYPE_YELLOW) {
			if (moviePlayer->isFlag(MVP_IsFinished)) {
				setSpotState(SPOTSTATE_Opened);
			} else {
				setSpotState(SPOTSTATE_Closing);
			}
		} else if (mOnyonType == ONYON_TYPE_SHIP || mOnyonType == ONYON_TYPE_POD) {
			setSpotEffect(true);
		}
		break;

	case 102: // 0x66
		if (mOnyonType <= ONYON_TYPE_YELLOW) {
			if (moviePlayer->isFlag(MVP_IsFinished)) {
				setSpotState(SPOTSTATE_Closed);
			} else {
				setSpotState(SPOTSTATE_Opening);
			}
		} else if (mOnyonType == ONYON_TYPE_SHIP || mOnyonType == ONYON_TYPE_POD) {
			setSpotEffect(false);
		}
		break;

	case 103: // 0x67
		if (mOnyonType == ONYON_TYPE_SHIP) {
			startPropera();
		}
		break;

	case 104: // 0x68
		if (mOnyonType == ONYON_TYPE_SHIP) {
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
	if (mOnyonType == ONYON_TYPE_SHIP) {
		if (mSuckState == SUCKSTATE_Opened || mSuckState == SUCKSTATE_GetPellet || mSuckState == SUCKSTATE_IdleOpen) {
			return true;
		}

		if (mSuckState == SUCKSTATE_IdleClosed) {
			mAnimator.startAnim(0, this);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->isStoryFlag(STORY_DebtPaid)) {
				sound = PSSE_EV_PODGOLD_OPEN; // Gold UFO
			}
			startSound(sound);

			mAnimSpeed = 30.0f;
			mSuckState = SUCKSTATE_Opening;
			mUfoPodOpen->create(nullptr);
			mSuckTimer = 0.0f;
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
BOOL Onyon::isSuckArriveWait() { return mOnyonType == ONYON_TYPE_SHIP ? mSuckState == SUCKSTATE_Closing : FALSE; }

/*
 * --INFO--
 * Address:	801755B8
 * Size:	00068C
 */
void Onyon::setType(int type)
{
	mOnyonType = type;
	setupTevRegAnim(mOnyonType);
	mContainer    = nullptr;
	mContainerAct = nullptr;
	mUfoSpot      = nullptr;
	mUfoSpotAct01 = nullptr;
	mUfoPodOpen   = nullptr;

	SysShape::Joint* jnt;
	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		mContainer    = new efx::Container;
		mContainerAct = new efx::ContainerAct;

	} else if (mOnyonType == ONYON_TYPE_SHIP) {
		jnt             = mModel->getJoint("start1");
		mUfoSpot        = new ::efx::TUfoSpot(jnt->getWorldMatrix()->mMatrix.mtxView);
		mUfoPodOpenSuck = new ::efx::TUfoPodOpenSuck(jnt->getWorldMatrix());
		mUfoSpotAct01   = new ::efx::TUfoSpotact_ver01(jnt->getWorldMatrix()->mMatrix.mtxView);

		jnt         = mModel->getJoint("pmotion3");
		mUfoPodOpen = new ::efx::TUfoPodOpen(jnt->getWorldMatrix()->mMatrix.mtxView);

		jnt = mModel->getJoint("in1");
		P2ASSERTLINE(782, jnt);
		mUfoGasIn = new ::efx::TUfoGasIn(jnt->getWorldMatrix());
		jnt       = mModel->getJoint("out");
		P2ASSERTLINE(784, jnt);
		mUfoGasOut = new ::efx::TUfoGasOut(jnt->getWorldMatrix());

	} else if (mOnyonType == ONYON_TYPE_POD) {
		jnt = mModel->getJoint("pot_ctr");
		P2ASSERTLINE(788, jnt);
		mPodOpenA = new ::efx::TPodOpenA;
		mPodOpenB = new ::efx::TPodOpenB(jnt->getWorldMatrix());
		mPodSpot  = new ::efx::TPodSpot(&mPosition, &mFaceDir);
		mPodKira  = new ::efx::TPodKira(jnt->getWorldMatrix());

		mPodKira->create(nullptr);
		mPodOpenB->create(nullptr);
		mPodSpot->create(nullptr);

		efx::Arg arg(this);
		mPodOpenA->create(&arg);
	}
}

/*
 * --INFO--
 * Address:	80175D4C
 * Size:	0000D0
 */
void Onyon::setupTevRegAnim(int type)
{
	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		mMatAnim1->start(&ItemOnyon::mgr->mOnyonTevAnim[type]);
		mOnyonType = type;
	} else if (mOnyonType == ONYON_TYPE_SHIP) {
		mMatAnim1->start(&ItemOnyon::mgr->mUfoTevAnim[0]);
		mMatAnim2 = new Sys::MatLoopAnimator;
		mMatAnim2->start(&ItemOnyon::mgr->mUfoTevAnim[1]);
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
	if (item->mOnyonType == ONYON_TYPE_SHIP) {
		SysShape::Joint* jnt = item->mModel->getJoint("pmotion3");
		if (jnt) {
			efx::TUfoPodSuck efx(jnt->getWorldMatrix());
			efx.create(nullptr);
		}

		item->mSuckTimer = 0.0f;

		if (item->mSuckState == Onyon::SUCKSTATE_IdleClosed) {
			SysShape::MotionListener* mlisten = item;
			item->mAnimator.startAnim(0, mlisten);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->isStoryFlag(STORY_DebtPaid)) {
				sound = PSSE_EV_PODGOLD_OPEN; // Gold UFO
			}

			item->startSound(sound);
			item->mAnimSpeed = 30.0f;
			item->mSuckState = Onyon::SUCKSTATE_Opening;
			item->mUfoPodOpen->create(nullptr);
			return true;
		}

		if (item->mSuckState == Onyon::SUCKSTATE_Closing) {
			JUT_PANICLINE(859, "damedayo !: arrive  ufoSuckState=%d\n", item->mSuckState);
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
	param.mPosition = getPosition();

	if (mOnyonType == ONYON_TYPE_POD) {
		param.mPosition.y += 80.0f;
		param.mBoundingSphere.mRadius = 100.0f;
		param.mSize                   = 27.0f;
	}

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	80176094
 * Size:	000034
 */
bool Onyon::sound_culling() { return (mOnyonType <= ONYON_TYPE_YELLOW) ? Creature::sound_culling() : false; }

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

	P2ASSERTLINE(899, mCreature->isPellet());
	Pellet* pellet = static_cast<Pellet*>(mCreature);

	if (item->mOnyonType <= ONYON_TYPE_YELLOW) {
		item->mAnimator.startAnim(3, item);
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
	} else if (item->mOnyonType == ONYON_TYPE_POD) {
		item->mAnimator.startAnim(2, item);
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);

		efx::TPodGepu podFX;
		Vector3f position = item->getPosition();
		efx::Arg arg(position);
		podFX.create(&arg);
		if (moviePlayer && moviePlayer->mDemoState == 0) {
			Vector3f pos = item->getPosition();
			int money    = pellet->mConfig->mParams.mMoney.mData;

			// carcass (1), ?? (3) or item (4)
			if (money > 0 && (pellet->getKind() == 1 || pellet->getKind() == 3 || pellet->getKind() == 4)) {
				pos += Vector3f(0.0f, 80.0f, 0.0f);
				carryInfoMgr->appearPoko(pos, money);
			}
		}
	} else {
		item->mAnimator.startAnim(0, item);
		item->mAnimator.setFrameByKeyType(0);
		item->mSuckState = Onyon::SUCKSTATE_GetPellet;
		item->mAnimSpeed = 30.0f;
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
		item->mSuckTimer     = 0.0f;
		SysShape::Joint* jnt = item->mModel->getJoint("pmotion3");
		efx::TUfoPodGepu ufoFX(jnt->getWorldMatrix());
		ufoFX.create(nullptr);

		if (moviePlayer && moviePlayer->mDemoState == 0) {
			Vector3f pos = item->getPosition();

			const f32 theta = item->getFaceDir();
			pos += Vector3f(20.0f * sinf(theta), 117.0f, 20.0f * cosf(theta));
			int money = pellet->mConfig->mParams.mMoney.mData;
			if (money > 0) {
				carryInfoMgr->appearPoko(pos, money);
			}
		}
	}

	item->mPikminType = item->mOnyonType;
	if (item->mOnyonType <= ONYON_TYPE_YELLOW) {
		SysShape::Joint* jnt = item->mModel->getJoint("body_1");
		if (jnt) {
			::efx::TOnyonEatAB onyonFX(jnt->getWorldMatrix());
			onyonFX.create(nullptr);
		}
	}

	if (gameSystem->isChallengeMode() && !strcmp(pellet->mConfig->mParams.mName.mData, "key")) {
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

	if (gameSystem->isVersusMode()) {
		const char* peltnames[2] = { VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue };

		for (int i = 0; i < 2; i++) {
			if (!strcmp(peltnames[i], pellet->mConfig->mParams.mName.mData)) {
				if (i == 1 - item->mOnyonType) {
					_08 = 1;

					Vector3f offs = item->getFlagSetPos();
					offs.y += (pellet->getCylinderHeight() * 0.5f + 2.0f);
					pellet->setPosition(offs, 0);

					Vector3f vel(0.0f, 400.0f, 0.0f);
					pellet->setVelocity(vel);
					pellet->setAlive(true);
					pellet->finish_carrymotion();

					// TODO: define when pellet states
					pellet->mPelletSM->transit(pellet, 5, nullptr);
				} else {
					GameMessageVsBattleFinished msg;
					msg.mWinningSide = 1 - i;
					gameSystem->mSection->sendMessage(msg);
					return true;
				}
			}
		}

		if (pellet->mPelletFlag == Pellet::FLAG_VS_BEDAMA_YELLOW) {
			GameMessageVsGetOtakara mesg(1 - item->mOnyonType);
			gameSystem->mSection->sendMessage(mesg);
			return true;
		}

		if (pellet->mPelletFlag == Pellet::FLAG_VS_CHERRY) {
			GameMessageVsGotCard mesg(1 - item->mOnyonType);
			gameSystem->mSection->sendMessage(mesg);
			return true;
		}
	}

	if (!gameSystem->isVersusMode()) {
		int money = pellet->getPokoValue();

		if (gameSystem->mIsInCave) {
			playData->mCavePokoCount += money;
		} else {
			gameSystem->mSection->mMoney += money;
		}
	}

	if (gameSystem->isChallengeMode()) {
		gameSystem->mSection->addChallengeScore(pellet->mConfig->mParams.mMoney.mData);
		return true;
	}

	// number pellet (checks if color matches onion)
	if (pellet->getKind() == PELTYPE_NUMBER) {
		int min, max;

		u16 color = (int)pellet->mPelletColor;
		pellet->getPikiBirthCount(min, max);

		u32 type = item->mOnyonType;
		if (type == ONYON_TYPE_POD || (u32)color == (u16)type) {
			item->mToBirth += max;
		} else {
			item->mToBirth += min;
		}
	} else {
		// carry treasure/item/carcass to an onion/ship
		if (pellet->getKind() == PELTYPE_TREASURE || pellet->getKind() == PELTYPE_UPGRADE || pellet->getKind() == PELTYPE_CARCASS) {
			// brought to the pod (the game just assumes you're in a cave)
			if (item->mOnyonType == ONYON_TYPE_POD) {
				if (pellet->mConfig->mParams.mMoney.mData > 0) {
					playData->obtainPellet_Cave(pellet);
				}
				// brought to the ship (the game just assumes you're above ground)
			} else if (item->mOnyonType == ONYON_TYPE_SHIP) {
				if (pellet->mConfig->mParams.mMoney.mData > 0) {
					playData->obtainPellet_Main(pellet);
					if (!strcmp("yes", pellet->mConfig->mParams.mUnique.mData)) {
						CourseInfo* info = gameSystem->mSection->getCurrentCourseInfo();
						if (info) {
							playData->incGroundOtakara(info->mCourseIndex);
						}
					}
				}
				// carry carcass to onions
			} else if (pellet->getKind() == PELTYPE_CARCASS) {
				int min, max;
				pellet->getPikiBirthCount(min, max);
				item->mToBirth += max;
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
void Onyon::startPropera() { mPropera = 20.0f; }

/*
 * --INFO--
 * Address:	80176E90
 * Size:	00000C
 */
void Onyon::stopPropera() { mPropera = -20.0f; }

/*
 * --INFO--
 * Address:	80176E9C
 * Size:	00016C
 */
void Onyon::doDirectDraw(Graphics& gfx)
{
	if (mOnyonType == ONYON_TYPE_SHIP) {
		gfx.initPrimDraw(0);
		Vector3f pos = getInStart_UFO();
		gfx._084     = Color4(0, 255, 0, 255);
		gfx.drawSphere(pos, 5.0);
		pos      = getOutStart_UFO();
		gfx._084 = Color4(100, 255, 0, 255);
		gfx.drawSphere(pos, 5.0);
		SysShape::Joint* jnt = mModel->getJoint("start1");
		Matrixf* mtx         = jnt->getWorldMatrix();
		pos.x                = mtx->mMatrix.structView.tx;
		pos.y                = mtx->mMatrix.structView.ty;
		pos.z                = mtx->mMatrix.structView.tz;
		gfx._084             = Color4(100, 255, 0, 255);
		gfx.drawSphere(pos, 20.0);
	}

	Vector3f orig = Vector3f(mPosition.x, mPosition.y + 40.0f, mPosition.z);
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
	mCollTree      = new CollTree();
	mMass          = 0.0f;
	mGoalWayPoint  = nullptr;
	mFaceDir       = 0.0f;
	mMatAnim1      = new Sys::MatLoopAnimator;
	mMatAnim2      = nullptr;
	mSpotbeamModel = nullptr;
}

/*
 * --INFO--
 * Address:	80177008
 * Size:	000034
 */
void Onyon::onInit(CreatureInitArg*)
{
	mToBirth           = 0;
	mPikisToWithdraw   = 0;
	mIsReleasingPikis  = false;
	mReleasePikisTimer = 0.0f;
	mPurplesToWithdraw = 0;
	mWhitesToWithdraw  = 0;
	mPikiOutJoint      = nullptr;
	mPikiInJoint       = nullptr;
	mSuckState         = SUCKSTATE_IdleClosed;
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
void Onyon::onSetPosition()
{
	if (mapMgr) {
		mPosition.y = mapMgr->getMinY(mPosition);
	}
	WPSearchArg wparg(mPosition, nullptr, false, 10.0);
	if (mapMgr && mapMgr->mRouteMgr) {
		mGoalWayPoint = mapMgr->mRouteMgr->getNearestWayPoint(wparg);
	} else {
		mGoalWayPoint = nullptr;
	}

	if (gameSystem->isVersusMode()) {
		setSpotEffect(true);
	} else {
		setSpotEffect(false);
	}

	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		efx::OnyonSpotArg spotarg(mPosition, mOnyonType);
		mSpotbeamModel = particleMgr->createModelEffect(&spotarg);
		setSpotState(SPOTSTATE_Closed);
		if (gameSystem->isStoryMode()) {
			if (!playData->hasBootContainer(mOnyonType)) {
				setSpotState(SPOTSTATE_Opened);
				startWaitMotion();
			} else {
				setSpotState(SPOTSTATE_Closed);
			}
		} else {
			setSpotState(SPOTSTATE_Opened);
		}
	}

	if (mOnyonType == ONYON_TYPE_SHIP) {
		mPikiInJoint  = mModel->getJoint("in1");
		mPikiOutJoint = mModel->getJoint("out");
	} else {
		mPikiOutJoint = nullptr;
		mPikiInJoint  = nullptr;
	}

	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		Radar::cRadarType radarids[] = { Radar::MAP_BLUE_ONION, Radar::MAP_RED_ONION, Radar::MAP_YELLOW_ONION };
		Radar::Mgr::entry(this, radarids[mOnyonType], 0);

	} else if (mOnyonType == ONYON_TYPE_POD) {
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
	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		mSpotState = state;
		if (mSpotbeamModel) {
			mSpotbeamModel->mCulled = false;
		}
		switch (mSpotState) {
		case SPOTSTATE_Closed:
			mSpotGrowTimer = 0.0f;
			setSpotEffect(false);
			break;
		case SPOTSTATE_Opened:
			mSpotGrowTimer = 1.0f;
			setSpotEffect(true);
			break;
		case SPOTSTATE_Closing:
			mSpotGrowTimer = 0.0f;
			setSpotEffect(false);
			break;
		case SPOTSTATE_Opening:
			mSpotGrowTimer = 1.0f;
			setSpotEffect(true);
			break;
		}

		Vector3f angle(mSpotGrowTimer, 1.0f, mSpotGrowTimer);
		Matrixf mtx;
		mtx.makeSRT(angle, Vector3f::zero, mPosition);
		PSMTXCopy(mtx.mMatrix.mtxView, mSpotbeamModel->mMtx.mMatrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void Onyon::updateSpot()
{
	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		switch (mSpotState) {
		case SPOTSTATE_Closed:
		case SPOTSTATE_Opened:
			break;
		case SPOTSTATE_Closing:
			mSpotGrowTimer = (sys->mDeltaTime * 0.7f + mSpotGrowTimer);
			if (mSpotGrowTimer >= 1.0f) {
				mSpotGrowTimer = 1.0f;
				mSpotState     = SPOTSTATE_Opened;
				setSpotEffect(true);
			}
			Vector3f angleClose(mSpotGrowTimer, 1.0f, mSpotGrowTimer);
			Matrixf mtxClose;
			mtxClose.makeSRT(angleClose, Vector3f::zero, mPosition);
			PSMTXCopy(mtxClose.mMatrix.mtxView, mSpotbeamModel->mMtx.mMatrix.mtxView);
			break;

		case SPOTSTATE_Opening:
			mSpotGrowTimer = -(sys->mDeltaTime * 0.7f - mSpotGrowTimer);
			if (mSpotGrowTimer <= 0.0f) {
				mSpotGrowTimer = 0.0f;
				mSpotState     = SPOTSTATE_Closed;
				setSpotEffect(false);
			}
			Vector3f angleOpen(mSpotGrowTimer, 1.0f, mSpotGrowTimer);
			Matrixf mtxOpen;
			mtxOpen.makeSRT(angleOpen, Vector3f::zero, mPosition);
			PSMTXCopy(mtxOpen.mMatrix.mtxView, mSpotbeamModel->mMtx.mMatrix.mtxView);
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
	Vector3f temp = mPosition;
	if (mObjectTypeID == OBJTYPE_Ufo) {
		SysShape::Joint* jnt = mModel->getJoint("goal");
		if (jnt) {
			Matrixf* mtx = jnt->getWorldMatrix();
			temp.x       = mtx->mMatrix.structView.tx;
			temp.y       = mtx->mMatrix.structView.ty;
			temp.z       = mtx->mMatrix.structView.tz;
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
	Vector3f goalPos = mPosition;
	if (mObjectTypeID == OBJTYPE_Ufo) {
		goalPos.x = 135.0f * sinf(mFaceDir) + goalPos.x;
		goalPos.z = 135.0f * cosf(mFaceDir) + goalPos.z;
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
	SysShape::AnimInfo* info = mAnimator.mAnimInfo;
	int animid;
	if (!info) {
		animid = -1;
	} else {
		animid = info->mId;
	}

	if (animid == 2 && mOnyonType <= ONYON_TYPE_YELLOW) {
		PSM::SeSound* sound = static_cast<PSM::SeSound*>(mSoundObj->startSound(PSSE_PK_SE_INSIDE_ONYON, 0));
		if (sound) {
			PSGame::SoundTable::SePerspInfo persp;
			persp.set(1.0, 200.0, 0.2, 400.0, 0.0);
			sound->specializePerspCalc(persp);
		}
		efxPafuPafu();
	}

	updateSpot();

	if (mOnyonType == ONYON_TYPE_SHIP && (!isMovieActor() || isMovieExtra())) {
		if (mSuckState == SUCKSTATE_Closing && mAnimSpeed < 1.0f) {
			mAnimSpeed = 30.0f;
		}
		if (mSuckState == SUCKSTATE_IdleOpen) {
			mSuckTimer += sys->mDeltaTime;
			// stay open for 3 seconds without interruption
			if (mSuckTimer > 3.0f) {
				mAnimator.setFrameByKeyType(1);
				mAnimator.mFlags |= 2;
				mAnimSpeed = 30.0f;
				mUfoPodOpenSuck->fade();
				SoundID soundid = PSSE_EV_POD_CLOSE;
				mSuckState      = SUCKSTATE_Closing;
				if (playData->isStoryFlag(STORY_DebtPaid)) // payed debt
					soundid = PSSE_EV_PODGOLD_CLOSE;
				startSound(soundid);
				mUfoPodOpen->fade();
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
	if (mOnyonType == ONYON_TYPE_SHIP) {
		mAnimator.setFrameByKeyType(1000);
		mAnimSpeed = 0.0f;
		mUfoPodOpenSuck->fade();
		mSuckState = SUCKSTATE_IdleClosed;
		mUfoPodOpen->fade();
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
	if (mOnyonType == ONYON_TYPE_POD) {
		lod.mIsCylinder = true;
	}
	updateLOD(lod);
	if (isMovieActor()) {
		mLod.setFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);
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
	vec1 = mPosition;
	vec1.y += 100.0f;
	vec2 = mPosition;
	cylinder.set(vec1, vec2, 40.0f);
}

/*
 * --INFO--
 * Address:	8017797C
 * Size:	000470
 */
void Onyon::do_doAnimation()
{
	if (mOnyonType == ONYON_TYPE_SHIP) {
		if (mPropera != 0.0f) {
			f32& speed = getPMotionSpeed(2);
			speed += mPropera * sys->mDeltaTime;
			if (speed < 30.0f) {
				speed    = 30.0f;
				mPropera = 0.0f;
			} else if (speed > 30.0f) {
				speed    = 30.0f;
				mPropera = 0.0f;
			}
		}
		f32& speed = getPMotionSpeed(1);
		if (speed > 0.0f) {
			PSM::SeSound* sound = PSStartSoundVec(PSSE_PK_SE_INSIDE_VOLVE, (Vec*)getSound_PosPtr());
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
				persp.set(1.0, 200.0, 0.4, 400.0, 0.0);
				sound->specializePerspCalc(persp);
			}
			SysShape::Animator anim = getPAnimator(1);
			f32 time                = anim.mTimer;
			getPAnimator(1); // sus
			if (time > 5.0f && time < 8.0f && !sVolveFlag) {
				PSM::SeSound* sound = static_cast<PSM::SeSound*>(mSoundObj->startSound(PSSE_EV_ROCKET_VOLVE, 0));
				if (sound) {
					PSGame::SoundTable::SePerspInfo persp;
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

	u16 onyonType = mOnyonType;
	if (gameSystem->isFlag(GAMESYS_IsPlaying)) {
		if (onyonType == ONYON_TYPE_SHIP) {
			SoundID soundid = PSSE_EV_UFO_PISTON;

			if (playData->isStoryFlag(STORY_DebtPaid)) { // payed debt
				soundid = PSSE_EV_DOL2GOLD_PISTON;
			}

			PSM::SeSound* sound = static_cast<PSM::SeSound*>(mSoundObj->startSound(soundid, 0));
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
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
		} else if (mOnyonType == ONYON_TYPE_POD) {
			SoundID soundid = PSSE_EV_POD_PROPELLER;
			if (playData->isStoryFlag(STORY_DebtPaid)) { // payed debt
				soundid = PSSE_EV_PODGOLD_PROPELLER;
			}

			PSM::SeSound* sound = static_cast<PSM::SeSound*>(mSoundObj->startSound(soundid, 0));
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
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
	CollPart* part = mCollTree->getCollPart('leg1');
	if (part) {
		part->mPartType = COLLTYPE_TUBE;
	}

	part = mCollTree->getCollPart('leg2');
	if (part) {
		part->mPartType = COLLTYPE_TUBE;
	}

	part = mCollTree->getCollPart('leg3');
	if (part) {
		part->mPartType = COLLTYPE_TUBE;
	}
	if (!part) {
		JUT_PANICLINE(1685, "bikkuri!\n");
	}

	part = mCollTree->getCollPart('fot1');
	JUT_ASSERTLINE(1690, part, "I\'am bikkuri-ed\n");
}

/*
 * --INFO--
 * Address:	80177DF4
 * Size:	000198
 */
void Onyon::startWaitMotion()
{
	if (mOnyonType == ONYON_TYPE_SHIP) {
		int whites = playData->mPikiContainer.getColorSum(White);
		int purple = playData->mPikiContainer.getColorSum(Purple);
		if (whites + purple > 0) {
			getPMotionSpeed(1) = 30.0f;
			mUfoGasIn->create(0);
			mUfoGasOut->create(0);
		} else {
			mUfoGasIn->fade();
			mUfoGasOut->fade();
			getPMotionSpeed(1) = 0.0f;
		}

	} else {
		mAnimSpeed = 30.0f;
		if (mOnyonType == ONYON_TYPE_POD) {
			mAnimator.startAnim(0, 0);
		} else {
			if (getStoreCount() > 0) {
				int animid;
				if (!mAnimator.mAnimInfo) {
					animid = -1;
				} else {
					animid = mAnimator.mAnimInfo->mId;
				}
				if (animid <= (u32)1 || animid == 3) {
					mAnimator.startAnim(2, this);
				}
			} else {
				mAnimator.startAnim(0, this);
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
	switch (event.mType) {
	case KEYEVENT_NULL:
		if (mSuckState != SUCKSTATE_Opening) {
			return;
		}
		mAnimSpeed = 0.0f;
		mSuckState = SUCKSTATE_Opened;
		break;

	case KEYEVENT_1:
		if (mSuckState != SUCKSTATE_GetPellet) {
			return;
		}
		mSuckState = SUCKSTATE_IdleOpen;
		mSuckTimer = 0.0f;
		mAnimSpeed = 0.0f;
		break;

	case KEYEVENT_END:
		mSuckState = SUCKSTATE_IdleClosed;
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
	Vector3f offset = Vector3f(100.0f * sinf(dir), 0.0f, 100.0f * cosf(dir));
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
	if (mOnyonType == ONYON_TYPE_SHIP) {
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
	P2ASSERTLINE(1791, gameSystem->isVersusMode());
	mPikminType = mOnyonType;
	mToBirth++;
	SysShape::AnimInfo* info = mAnimator.mAnimInfo;
	int animid;
	if (!info) {
		animid = -1;
	} else {
		animid = info->mId;
	}
	if (animid == 0 || animid == 2) {
		SysShape::MotionListener* mlisten = this;
		mAnimator.startAnim(1, mlisten);
	}
}

/*
 * --INFO--
 * Address:	80178238
 * Size:	000648
 */
void Onyon::onKeyEvent_Onyon(SysShape::KeyEvent const& event)
{
	SysShape::AnimInfo* info = mAnimator.mAnimInfo;
	int animid;
	if (!info) {
		animid = -1;
	} else {
		animid = info->mId;
	}

	switch (event.mType) {
	case KEYEVENT_END:
		if (mToBirth) {
			if (mOnyonType <= ONYON_TYPE_YELLOW) {
				SysShape::MotionListener* mlisten = this;
				mAnimator.startAnim(1, mlisten);
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
		if (mOnyonType <= ONYON_TYPE_YELLOW) {
			switch (animid) {
			case 1: // shoot out seeds
				if (mToBirth) {
					int shootcount = mToBirth / 2;
					if (shootcount <= 0) {
						shootcount = 1;
					}

					for (int i = 0; i < shootcount; i++) {
						if (gameSystem && gameSystem->isVersusMode()) {
							// versus mode onion counts
							int reds  = GameStat::getMapPikmins(Red);
							int blues = GameStat::getMapPikmins(Blue);
							if (mOnyonType == ONYON_TYPE_BLUE && blues >= 50) {
								mToBirth--;
								continue;
							} else if (mOnyonType == ONYON_TYPE_RED && reds >= 50) {
								mToBirth--;
								continue;
							}
						}

						ItemPikihead::Item* obj = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
						if (obj) {
							mPikminType = mOnyonType;
							ItemPikihead::InitArg arg((EPikiKind)mPikminType, Vector3f::zero);
							obj->init(&arg);
							mToBirth--;
							BirthMgr::inc(obj->mColor);
							doEmit(obj, false);

						} else { // returned pikihead is null, 100 pikmin limit must be reached
							if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_Max_Pikmin_On_Field)) {
								playData->setDemoFlag(DEMO_Max_Pikmin_On_Field);

								// if wild pikmin exist, play 95 pikmin CS, otherwise play 100 pikmin CS
								char* movieName = (GameStat::zikatuPikis > 0) ? (char*)"g16_95_pikmin" : (char*)"g16_100_pikmin";
								MoviePlayArg arg(movieName, nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
								arg.mOrigin = getPosition();
								arg.mAngle  = getFaceDir();
								movie_begin(0);
								moviePlayer->play(arg);
							}

							mPikminType = mOnyonType;
							int& count  = playData->mPikiContainer.getCount(mPikminType, Leaf);
							count++;
							BirthMgr::inc(mOnyonType);
							mToBirth--;
						}
					}
				} else {
					mAnimator.mFlags |= 2;
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
	Vector3f onyonpos = mPosition;
	onyonpos.y += 110.0f;
	efx::TOnyonLay layFX;
	efx::Arg arg(mPosition);

	layFX.create(&arg);
	seed->setPosition(onyonpos, false);

	if (gameSystem->isStoryMode() && moviePlayer->mFlags.isSet(1) && moviePlayer->isPlaying("x18_exp_pellet")) {
		seed->movie_begin(0);
	}

	f32 angle;
	if (gameSystem->isVersusMode()) {
		angle = roundAng((HALF_PI * randFloat() - QUARTER_PI) + getFaceDir());

	} else if (isSetAngle) {
		angle = 0.0f;

	} else {
		angle = randFloat() * TAU;
	}

	Vector3f velocity(sinf(angle) * 130.0f, 700.0f, cosf(angle) * 130.0f);
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
	return mCollTree->getCollPart(tags[id]);
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
	CollPart* part = mCollTree->getCollPart(tags[id]);
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
	Vector3f angle(0.0f, mFaceDir, 0.0f);
	mBaseTrMatrix.makeTR(mPosition, angle);
	updateCollTree();
	if (gameSystem->paused() || moviePlayer->mDemoState != 0) {
		return;
	}

	if (mIsReleasingPikis) {
		if (mReleasePikisTimer <= 0.0f) {
			if (exitPiki()) {
				mPikisToWithdraw--;
				if (!((int)mPikisToWithdraw > 0)) {
					mIsReleasingPikis = 0;
				}
				mReleasePikisTimer = (randFloat() * 0.1f + 0.2f) * 0.05f;
			} else {

				mPikisToWithdraw  = 0;
				mIsReleasingPikis = 0;
			}
		} else {
			mReleasePikisTimer -= sys->mDeltaTime;
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
	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		int animid;
		if (!mAnimator.mAnimInfo) {
			animid = -1;
		} else {
			animid = mAnimator.mAnimInfo->mId;
		}

		f32 mattime, anmtime;
		Sys::MatBaseAnimation* anim = mMatAnim1->mAnimation;
		if (anim) {
			mattime = anim->getFrameMax();
		} else {
			mattime = 0.0f;
		}

		if (animid == 4) {
			f32 timer = mAnimator.mTimer;
			if (mAnimator.mAnimInfo) {
				anmtime = (f32)mAnimator.mAnimInfo->mAnm->mMaxFrame;
			} else {
				anmtime = 0.0f;
			}
			Sys::MatLoopAnimator* loopAnim = mMatAnim1;
			if (anmtime != 0.0f) {
				anmtime = timer / anmtime;
			} else {
				anmtime = 1.0f;
			}
			loopAnim->setCurrentFrame(mattime * anmtime);
		} else {
			mMatAnim1->setCurrentFrame(mattime);
		}

		mMatAnim1->animate(0.0f);

	} else if (mOnyonType == ONYON_TYPE_SHIP) {
		mMatAnim1->animate(30.0f);
		mMatAnim2->animate(30.0f);
		mModel->mJ3dModel->calcMaterial();
		mModel->mJ3dModel->diff();
	}
}

/*
 * --INFO--
 * Address:	80178EDC
 * Size:	0001D4
 */
void Onyon::setSpotEffect(bool flag)
{
	if (mOnyonType == ONYON_TYPE_SHIP) {
		if (flag) {
			mUfoSpot->create(0);
		} else {
			mUfoSpot->fade();
		}
	} else if (mOnyonType == ONYON_TYPE_POD) {
		if (flag) {
			::efx::Arg arg(mPosition);
			mPodOpenA->create(&arg);
			mPodOpenB->create(0);
			mPodSpot->create(0);
		} else {
			mPodOpenA->fade();
			mPodOpenB->fade();
			mPodOpenA->fade(); // yes it does this one twice for some reason
			mPodSpot->fade();
		}
	} else if (mOnyonType < ONYON_TYPE_POD) {
		if (flag) {
			efx::ArgType arg(this);
			mContainer->create(&arg);
		} else {
			mContainer->fade();
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
	if (flag && gameSystem && !(gameSystem->isFlag(GAMESYS_IsGameWorldActive))) {
		flag = false;
	}

	if (mOnyonType == ONYON_TYPE_SHIP) {
		if (flag) {
			mUfoSpotAct01->create(0);
		} else {
			mUfoSpotAct01->fade();
		}
	}

	if (mOnyonType < ONYON_TYPE_POD) {
		if (flag) {
			efx::ArgType arg(this);
			mContainerAct->create(&arg);
		} else {
			mContainerAct->fade();
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
	if (mOnyonType <= ONYON_TYPE_YELLOW) {
		efx::TOnyonEatC onyonFX(&mBaseTrMatrix);
		onyonFX.create(nullptr);
		startSound(PSSE_EV_HOME_PELLET_BACUUM);

	} else if (mOnyonType == ONYON_TYPE_POD) {
		startSound(PSSE_EV_ROCKET_VACUUM);
		efx::TPodSuck efx;
		::efx::Arg arg(mPosition);
		efx.create(&arg);

	} else if (mOnyonType == ONYON_TYPE_SHIP) {
		startSound(PSSE_EV_ROCKET_VACUUM);
		mUfoPodOpenSuck->create(0);
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
		SysShape::Joint* joint = mModel->getJoint(jntnames[id]);
		if (joint && mLod.mFlags & 4) {
			efx::TOnyonPuffPuff puffFX(joint->getWorldMatrix());
			puffFX.create(nullptr);

			PSM::SeSound* sound = static_cast<PSM::SeSound*>(mSoundObj->startSound(PSSE_EV_ONYON_GAS, 0));
			if (sound) {
				PSGame::SoundTable::SePerspInfo persp;
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
	SysShape::Joint* joint = mModel->getJoint("flow");
	if (joint && mLod.isFlag(AILOD_IsVisible)) {
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
int Onyon::getStoreCount() { return playData->mPikiContainer.getColorSum(mOnyonType); }

/*
 * --INFO--
 * Address:	801795C8
 * Size:	000244
 */
void Onyon::enterPiki(Piki* piki)
{
	int& count = playData->mPikiContainer.getCount(piki->mPikiKind, piki->mHappaKind);
	count++;

	PikiKillArg killarg(1);
	piki->kill(&killarg);

	if (mOnyonType <= ONYON_TYPE_YELLOW && mToBirth) {
		int animid;
		if (!mAnimator.mAnimInfo) {
			animid = -1;
		} else {
			animid = mAnimator.mAnimInfo->mId;
		}
		if (animid != 1) {
			mAnimator.startAnim(1, this);
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
	mIsReleasingPikis = true;
	mPikisToWithdraw += add;
	mReleasePikisTimer = 0.0f;
	if (color == Purple) {
		mPurplesToWithdraw += add;
	}
	if (color == White) {
		mWhitesToWithdraw += add;
	}
}

/*
 * --INFO--
 * Address:	80179854
 * Size:	000454
 */
Creature* Onyon::exitPiki()
{
	if (!(gameSystem->isFlag(GAMESYS_IsGameWorldActive))) {
		return nullptr;
	}

	int color = mOnyonType;
	int happa = -1;
	if (mOnyonType == ONYON_TYPE_SHIP) {
		if ((int)mWhitesToWithdraw > 0) {
			color = White;
		} else {
			if ((int)mPurplesToWithdraw > 0) {
				color = Purple;
			} else {
				JUT_PANICLINE(2296, "exitWhite/Black zero (UFO)\n");
			}
		}
	}
	for (int i = Flower; !(i < Leaf); i--) {
		if (playData->mPikiContainer.getCount(color, i) > 0) {
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
			mPikisToWithdraw   = 0;
			mWhitesToWithdraw  = 0;
			mPurplesToWithdraw = 0;
			mIsReleasingPikis  = false;
			return nullptr;

		} else {
			if (color == White) {
				mWhitesToWithdraw--;
			} else if (color == Purple) {
				mPurplesToWithdraw--;
			}
			P2ASSERTLINE(2338, piki);

			int& count = playData->mPikiContainer.getCount(color, happa);
			count--;
			playData->mPikiContainer.getColorSum(color);
			piki->init(nullptr);
			piki->changeShape(color);
			piki->changeHappa(happa);

			if (mOnyonType == ONYON_TYPE_SHIP) {
				Vector3f outpos   = getOutStart_UFO();
				Vector3f onyonpos = getPosition();
				Vector3f vel      = outpos - onyonpos;
				vel.normalise();
				f32 factor = randFloat() * 30.0f + 100.0f;
				vel        = Vector3f(vel.x * factor, vel.y * factor, vel.z * factor);

				piki->setPosition(outpos, false);
				piki->setVelocity(vel);
				piki->startSound(this, PSSE_PK_VC_ONY_EXIT, true);
				piki->mFaceDir = mFaceDir;

				Navi* navi = piki->mBrain->searchOrima();
				if (navi) {
					piki->mNavi = navi;
					PikiAI::ActFormationInitArg arg(navi);
					piki->mBrain->start(0, &arg);
				} else {
					piki->mBrain->start(1, 0);
				}

				int whites = playData->mPikiContainer.getColorSum(White);
				int purple = playData->mPikiContainer.getColorSum(Purple);
				if (whites + purple == 0) {
					mUfoGasIn->fade();
					mUfoGasOut->fade();
					getPMotionSpeed(1) = 0.0f;
				}

			} else {
				PikiAI::CreatureActionArg arg(this);
				piki->mBrain->start(3, &arg);
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
	if (mOnyonType == ONYON_TYPE_SHIP) {
		Vector3f pos = getGoalPos();
		if (sqrDistanceXZ(navipos, pos) < 900.0f) {
			return true;
		}
	} else {
		Vector3f pos = mPosition;
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

	switch (onyonparm->mOnyonIndex) {
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
		if (!playData->hasContainer(onyonType) && onyonparm->mIsAfterBoot)
			return nullptr;
		if (!onyonparm->mIsAfterBoot && playData->hasContainer(onyonType))
			return nullptr;
	}

	Onyon* onyon    = birth(objectType, onyonType);
	onyon->mFaceDir = angle.y;
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
	if (mPikiInJoint) {
		return getJointPosition(mPikiInJoint); // this is necessary to make the stack line up for both this and the next function
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
	fixpos.normalise();
	return (pos + (fixpos * 90.0f));
}

/*
 * --INFO--
 * Address:	8017A0AC
 * Size:	0000C4
 */
Vector3f Onyon::getOutStart_UFO()
{
	if (mPikiOutJoint) {
		return getJointPosition(mPikiOutJoint);
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
	if (mOnyonType == ONYON_TYPE_SHIP) {
		mPMotionCount  = 3;
		mPMotionList   = new SysShape::Animator[mPMotionCount];
		mPMotionSpeeds = new f32[mPMotionCount];

		for (int i = 0; i < mPMotionCount; i++) {
			mPMotionList[i].mAnimMgr = mAnimator.mAnimMgr;
			if (i == 0) {
				speed = 30.0f;
			} else {
				speed = 0.0f;
			}
			mPMotionSpeeds[i] = speed;
		}

		getPAnimator(0).startAnim(1, nullptr);
		getPAnimator(1).startAnim(2, nullptr);
		getPAnimator(2).startAnim(3, nullptr);

		mPMotionSpeeds[2] = 30.0f;

	} else {
		mPMotionCount  = 0;
		mPMotionList   = nullptr;
		mPMotionSpeeds = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8017A1A4
 * Size:	00007C
 */
f32& Onyon::getPMotionSpeed(int i)
{
	bool check = (0 <= i && i < mPMotionCount);
	P2ASSERTLINE(2603, check);
	return mPMotionSpeeds[i];
}

/*
 * --INFO--
 * Address:	8017A220
 * Size:	00007C
 */
SysShape::Animator& Onyon::getPAnimator(int i)
{
	bool check = (0 <= i && i < mPMotionCount);
	P2ASSERTLINE(2609, check);
	return mPMotionList[i];
}

/*
 * --INFO--
 * Address:	8017A29C
 * Size:	000198
 */
void Onyon::update_pmotions()
{
	f32 time = sys->mDeltaTime;
	if (mOnyonType == ONYON_TYPE_SHIP) {
		for (int i = 0; i < mPMotionCount; i++) {
			char* names[3] = { "pmotion1", "pmotion2", "pmotion3" };

			SysShape::Animator& panim = getPAnimator(i);
			panim.animate(time * getPMotionSpeed(i));
			SysShape::Joint* jnt = mModel->getJoint(names[i]);
			if (jnt) {
				u16 id                                                         = jnt->mJointIndex;
				SysShape::Model* model                                         = mModel;
				J3DMtxCalc* calc                                               = static_cast<SysShape::BaseAnimator*>(&panim)->getCalc();
				model->mJ3dModel->mModelData->mJointTree.mJoints[id]->mMtxCalc = static_cast<J3DMtxCalcAnmBase*>(calc);
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
	Iterator<Onyon> iterOnyon(&mNodeObjectMgr);
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
	switch (onyonparm->mOnyonIndex) {
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

	return mModelData[objType];
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
	ram.textWriteTab(ram.mTabCount);
	ram.writeInt(onyonparm->mOnyonIndex);
	ram.textWriteText("\t# onyon index\r\n");

	ram.textWriteTab(ram.mTabCount);
	ram.writeByte(onyonparm->mIsAfterBoot);
	ram.textWriteText("\t# after boot? true==1\r\n");
}

/*
 * --INFO--
 * Address:	8017A74C
 * Size:	000078
 */
void ItemOnyon::Mgr::generatorRead(Stream& ram, Game::GenItemParm* parm, u32 flag)
{
	GenOnyonParm* onyonparm = static_cast<GenOnyonParm*>(parm);
	onyonparm->mOnyonIndex  = ram.readInt();
	if (flag >= '0001') {
		onyonparm->mIsAfterBoot = !(1 - ram.readByte());
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
	mOnyons[ONYON_TYPE_YELLOW] = nullptr;
	mOnyons[ONYON_TYPE_RED]    = nullptr;
	mOnyons[ONYON_TYPE_BLUE]   = nullptr;
	mUfo                       = nullptr;
	mPod                       = nullptr;
	mItemName                  = "Onyon";
	mModelData                 = new J3DModelData*[3];
	mAnimMgrFiles[0]           = nullptr;
	mAnimMgrFiles[1]           = nullptr;
	mAnimMgrFiles[2]           = nullptr;
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
	if (mOnyonType == ONYON_TYPE_SHIP) {
		if (mSuckState == SUCKSTATE_IdleClosed) {
			mAnimSpeed = 0.0f;
		}
	} else {
		bool checkboot = false;
		if (mOnyonType <= ONYON_TYPE_YELLOW && gameSystem->isStoryMode()) {
			checkboot = true;
		}
		if (checkboot) {
			playData->hasBootContainer(mOnyonType);
		}
		mAnimSpeed = 30.0f;
	}

	if (mOnyonType <= ONYON_TYPE_YELLOW) {

		int animid = (mAnimator.mAnimInfo) ? mAnimator.mAnimInfo->mId : -1;

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

		onyon->mAnimator.mAnimMgr = mAnimMgrFiles[objtype];
		onyon->mAnimator.startAnim(0, nullptr);
		onyon->mAnimSpeed = 30.0f;
		onyon->mModel     = new SysShape::Model(mModelData[objtype], 0, 2);
		onyon->setType(onyontype);

		onyon->mCollTree->createFromFactory(onyon->mModel, mCollFactories[objtype], nullptr);
		onyon->initTube();

		onyon->startWaitMotion();

		resultOnyon        = onyon;
		mOnyons[onyontype] = onyon;
		playData->hasBootContainer(onyontype);

		// play boot animation if the onion isnt booted (glitched onion)
		if (gameSystem->isStoryMode() && !playData->hasBootContainer(onyontype)) {
			onyon->mAnimator.startAnim(4, nullptr);
			onyon->mAnimSpeed = 0.0f;
		}
		break;

	case ONYON_OBJECT_POD:
		onyon = new Onyon;
		if (shadowMgr) {
			shadowMgr->createShadow(onyon);
			shadowMgr->addShadow(onyon);
		}
		onyon->init(nullptr);
		onyon->mAnimator.mAnimMgr = mAnimMgrFiles[objtype];
		onyon->mAnimator.startAnim(0, nullptr);
		onyon->mAnimSpeed = 30.0f;
		onyon->mModel     = new SysShape::Model(mModelData[objtype], 0, 2);
		onyon->setType(ONYON_TYPE_POD);

		onyon->mCollTree->createFromFactory(onyon->mModel, mCollFactories[objtype], nullptr);

		onyon->startWaitMotion();

		onyon->mModel->mJ3dModel->calc();
		onyon->mModel->mJ3dModel->calcMaterial();
		onyon->mModel->mJ3dModel->makeDL();
		onyon->mModel->mJ3dModel->lock();

		mPod        = onyon;
		resultOnyon = onyon;
		break;

	case ONYON_OBJECT_SHIP:
		onyon = new Onyon;

		onyon->init(nullptr);
		onyon->mAnimator.mAnimMgr = mAnimMgrFiles[objtype];
		onyon->mAnimator.startAnim(0, nullptr);
		onyon->mAnimSpeed    = 0.0f;
		onyon->mObjectTypeID = OBJTYPE_Ufo;
		onyon->mModel        = new SysShape::Model(mModelData[objtype], 0x00080000, 2);

		onyon->mModel->mJ3dModel->newDifferedDisplayList(0x1000000);
		onyon->mModel->mJ3dModel->calc();
		onyon->mModel->mJ3dModel->calcMaterial();
		onyon->mModel->mJ3dModel->makeDL();
		onyon->mModel->mJ3dModel->lock();

		onyon->setType(ONYON_TYPE_SHIP);
		onyon->mCollTree->createFromFactory(onyon->mModel, mCollFactories[objtype], nullptr);

		onyon->init_pmotions();

		onyon->startWaitMotion();
		resultOnyon = onyon;
		mUfo        = onyon;

		break;
	}

	nodeobj->mContents = resultOnyon;
	mNodeObjectMgr.mNode.add(nodeobj);
	nodeobj->mContents->constructor();
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
		return mOnyons[i];
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
		onyonarc = node->mArchive;
	} else {
		onyonarc = nullptr;
	}
	sys->heapStatusEnd("onyon-arc");

	void* file = JKRFileLoader::getGlbResource("goal.bmd", nullptr);
	JUT_ASSERTLINE(2966, file, "goal.bmd not found !!\n");
	mModelData[0] = J3DModelLoaderDataBase::load(file, 0x240000);

	JKRArchive* podarc = nullptr;
	if ((gameSystem->isChallengeMode() || gameSystem->mIsInCave) && !gameSystem->isVersusMode()) {
		LoadResource::Arg loadpodarg(playData->isStoryFlag(STORY_DebtPaid) ? "user/Kando/pod_gold/arc.szs" : "user/Kando/pod/arc.szs");
		loadpodarg.mHeap = JKRGetCurrentHeap();
		node             = gLoadResourceMgr->mountArchive(loadpodarg);
		if (node) {
			podarc = node->mArchive;
		} else {
			podarc = nullptr;
		}

		file = JKRFileLoader::getGlbResource("pot.bmd", nullptr);
		JUT_ASSERTLINE(2998, file, "pot.bmd not found !!\n");
		J3DModelData* modelDataPod = J3DModelLoaderDataBase::load(file, 0x00000030);
		mModelData[1]              = modelDataPod;
		mModelData[1]->newSharedDisplayList(0x40000);
		mModelData[1]->makeSharedDL();
		for (u16 i = 0; i < modelDataPod->mShapeTable.mCount; i++) {
			u32 flags                                   = modelDataPod->mShapeTable.mItems[i]->mFlags & 0xFFFF0FFF;
			modelDataPod->mShapeTable.mItems[i]->mFlags = flags | 0x2000;
		}

	} else {
		mModelData[1] = nullptr;
	}

	SysShape::Model::enableMaterialAnim(mModelData[0], 0);

	file = JKRFileLoader::getGlbResource("kidou_blue.brk", nullptr);
	mOnyonTevAnim[0].attachResource(file, mModelData[0]); // blue mat anim

	file = JKRFileLoader::getGlbResource("kidou_red.brk", nullptr);
	mOnyonTevAnim[1].attachResource(file, mModelData[0]); // red mat anim

	file = JKRFileLoader::getGlbResource("kidou_yellow.brk", nullptr);
	mOnyonTevAnim[2].attachResource(file, mModelData[0]); // yellow mat anim

	mObjectPathComponent               = "user/Kando/onyon";
	JKRArchive* onyontextarc           = openTextArc("texts.szs");
	mAnimMgrFiles[ONYON_OBJECT_ONYON]  = SysShape::AnimMgr::load(onyontextarc, "onyonAnimMgr.txt", mModelData[0], onyonarc, nullptr);
	mCollFactories[ONYON_OBJECT_ONYON] = CollPartFactory::load(onyontextarc, "onyonColl.txt");
	closeTextArc(onyontextarc);

	if ((gameSystem->isChallengeMode() || gameSystem->mIsInCave) && !gameSystem->isVersusMode()) {
		if (playData->mStoryFlags & STORY_DebtPaid) {
			mObjectPathComponent = "user/Kando/pod_gold";
		} else {
			mObjectPathComponent = "user/Kando/pod";
		}
		JKRArchive* podtextarc           = openTextArc("texts.szs");
		mAnimMgrFiles[ONYON_OBJECT_POD]  = SysShape::AnimMgr::load(podtextarc, "animMgr.txt", mModelData[1], podarc, nullptr);
		mCollFactories[ONYON_OBJECT_POD] = CollPartFactory::load(podtextarc, "coll.txt");
		closeTextArc(podtextarc);
	} else {
		mAnimMgrFiles[ONYON_OBJECT_POD]  = nullptr;
		mCollFactories[ONYON_OBJECT_POD] = nullptr;
	}

	JKRArchive* ufoarc;
	LoadResource::Arg loadufoarg(playData->isStoryFlag(STORY_DebtPaid) ? "user/Kando/ufo_gold/arc.szs" : "user/Kando/ufo/arc.szs");
	loadufoarg.mHeap = JKRGetCurrentHeap();
	node             = gLoadResourceMgr->mountArchive(loadufoarg);
	if (node) {
		ufoarc = node->mArchive;
	} else {
		ufoarc = nullptr;
	}
	file = JKRFileLoader::getGlbResource("ufo.bmd", nullptr);
	JUT_ASSERTLINE(3123, file, "ufo.bmd not found!\n");
	J3DModelData* modelDataUfo = J3DModelLoaderDataBase::load(file, 0x21020030);
	mModelData[2]              = modelDataUfo;
	mModelData[2]->newSharedDisplayList(0x40000);
	mModelData[2]->makeSharedDL();
	for (u16 i = 0; i < modelDataUfo->mShapeTable.mCount; i++) {
		u32 flags                                   = modelDataUfo->mShapeTable.mItems[i]->mFlags & 0xFFFF0FFF;
		modelDataUfo->mShapeTable.mItems[i]->mFlags = flags | 0x2000;
	}

	SysShape::Model::enableMaterialAnim(mModelData[2], 0);

	file = JKRFileLoader::getGlbResource("ufo.brk", nullptr);
	P2ASSERTLINE(3151, file);
	mUfoTevAnim[0].attachResource(file, mModelData[2]);

	file = JKRFileLoader::getGlbResource("ufo_2.brk", nullptr);
	P2ASSERTLINE(3156, file);
	mUfoTevAnim[1].attachResource(file, mModelData[2]);

	if (playData->mStoryFlags & STORY_DebtPaid) {
		mObjectPathComponent = "user/Kando/ufo_gold";
	} else {
		mObjectPathComponent = "user/Kando/ufo";
	}

	JKRArchive* ufotextarc            = openTextArc("texts.szs");
	mAnimMgrFiles[ONYON_OBJECT_SHIP]  = SysShape::AnimMgr::load(ufotextarc, "animmgr.txt", modelDataUfo, ufoarc, nullptr);
	mCollFactories[ONYON_OBJECT_SHIP] = CollPartFactory::load(ufotextarc, "coll.txt");
	closeTextArc(ufotextarc);
}

} // namespace Game
