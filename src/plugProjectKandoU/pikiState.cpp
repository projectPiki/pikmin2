#include "Game/PikiState.h"
#include "Game/Piki.h"
#include "Game/PikiParms.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/NaviState.h"
#include "Game/NaviParms.h"
#include "Game/MapMgr.h"
#include "Game/rumble.h"
#include "Game/MoviePlayer.h"
#include "Game/DeathMgr.h"
#include "Game/CameraMgr.h"
#include "Game/Interaction.h"
#include "Game/AIConstants.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/CPlate.h"
#include "efx/TPiku.h"
#include "efx/TPk.h"
#include "efx/TEnemyDive.h"
#include "KandoLib/Choice.h"
#include "P2Macros.h"
#include "PSM/Navi.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "System.h"
#include "PikiAI.h"
#include "nans.h"

namespace Game {

static const int someArray[3] = { 0, 0, 0 };
static const char fileName[]  = "pikiState";

/**
 * @note Address: 0x80189378
 * @note Size: 0x4
 */
void PikiState::dump() { }

/**
 * @note Address: 0x8018937C
 * @note Size: 0x30
 */
void PikiState::getInfo(char* string) { sprintf(string, "%s", mName); }

/**
 * @note Address: 0x801893AC
 * @note Size: 0xB6C
 */
void PikiFSM::init(Piki* piki)
{
	create(PIKISTATE_Count);
	registerState(new PikiWalkState);
	registerState(new PikiDemoWaitState);
	registerState(new PikiLookAtState);
	registerState(new PikiGoHangState);
	registerState(new PikiHangedState);
	registerState(new PikiWaterHangedState);
	registerState(new PikiFlyingState);
	registerState(new PikiKokeDamageState);
	registerState(new PikiBlowState);
	registerState(new PikiFlickState);
	registerState(new PikiDrownState);
	registerState(new PikiSwallowedState);
	registerState(new PikiNukareState);
	registerState(new PikiAbsorbState);
	registerState(new PikiGrowupState);
	registerState(new PikiTaneState);
	registerState(new PikiDopeState);
	registerState(new PikiAutoNukiState);
	registerState(new PikiHipDropState);
	registerState(new PikiEmotionState);
	registerState(new PikiPressedState);
	registerState(new PikiPanicState);
	registerState(new PikiDenkiDyingState);
	registerState(new PikiFallMeckState);
	registerState(new PikiDyingState);
	registerState(new PikiDeadState);
	registerState(new PikiSuikomiState);
	registerState(new PikiHoleinState);
	registerState(new PikiFountainonState);
	registerState(new PikiKokeState);
	registerState(new PikiEscapeState);
	registerState(new PikiCarrotState);
}

/**
 * @note Address: 0x80189F18
 * @note Size: 0x118
 */
void PikiFSM::transit(Piki* piki, int stateID, StateArg* stateArg)
{
	PikiState* currentState = piki->mCurrentState;
	if (currentState != nullptr && currentState->mId == PIKISTATE_Carrot) {
		currentState->cleanup(piki);
		return;
	}

	if (currentState) {
		if (!currentState->soft_transittable(stateID)) {
			return;
		}

		if (!currentState->transittable(stateID)) {
			JUT_PANICLINE(701, "*Transit(%d)(%d)\n(%s)=>(%s)\n", currentState->mId, mIdToIndexArray[stateID], currentState->mName,
			              static_cast<PikiState*>(mStates[mIdToIndexArray[stateID]])->mName);
			JUT_PANICLINE(702, "---------- だめだよ～\n");
		}
	}

	mStateID = stateID;
	StateMachine::transit(piki, stateID, stateArg);
}

/**
 * @note Address: 0x8018A030
 * @note Size: 0x50
 */
void PikiFSM::transitForce(Piki* piki, int stateID, StateArg* stateArg)
{
	PikiState* currentState = piki->mCurrentState;
	if (currentState != nullptr && currentState->mId == PIKISTATE_Carrot) {
		currentState->cleanup(piki);
	} else {
		StateMachine::transit(piki, stateID, stateArg);
	}
}

/**
 * @note Address: 0x8018A080
 * @note Size: 0x40
 */
void PikiWalkState::init(Piki* piki, StateArg* stateArg) { piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr); }

/**
 * @note Address: 0x8018A0C0
 * @note Size: 0x24
 */
void PikiWalkState::exec(Piki* piki) { piki->mBrain->exec(); }

/**
 * @note Address: 0x8018A0E4
 * @note Size: 0x4
 */
void PikiWalkState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018A0E8
 * @note Size: 0x40
 */
void PikiDemoWaitState::init(Piki* piki, StateArg* stateArg) { piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr); }

/**
 * @note Address: 0x8018A128
 * @note Size: 0x24
 */
void PikiDemoWaitState::exec(Piki* piki) { piki->mBrain->exec(); }

/**
 * @note Address: 0x8018A14C
 * @note Size: 0x4
 */
void PikiDemoWaitState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018A150
 * @note Size: 0x100
 */
void PikiCarrotState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
	piki->mTraceMoveRadius = 0.3f;
	piki->setMoveVelocity(false);
	piki->setMoveRotation(false);
	piki->setCollisionFlick(true);
	piki->setUpdateTrMatrix(true);
	mTimeRemaining = 3.0f * randFloat() + 10.0f;
	mIsPlanted     = false;
}

/**
 * @note Address: 0x8018A250
 * @note Size: 0x334
 */
void PikiCarrotState::exec(Piki* piki)
{
	if (piki->isAlive()) {
		piki->mTargetVelocity = Vector3f(0.0f);
		if (mIsPlanted) {
			piki->setPosition(mPosition, false);
			piki->mVelocity = Vector3f(0.0f);
		}

		mTimeRemaining -= sys->mDeltaTime;

		if (mTimeRemaining <= 0.0f) {
			Vector3f position = piki->getPosition();
			efx::Arg fxArg(position);
			efx::TPikuDead deadFX;

			deadFX.create(&fxArg);

			piki->startSound(PSSE_PK_CARROT_CRUSH, false);

			piki->kill(nullptr);
		}
		piki->mAnimSpeed = 0.0f;
	}

	Vector3f pos = piki->mVelocity;
	f32 length   = pos.normalise();
	if (length > 0.0f) { // regswaps here
		pos.negate();
		Matrixf natMatrix;
		natMatrix.makeNaturalPosture(pos);
		Matrixf matST;
		matST.makeST(piki->mScale, Vector3f::zero);
		Matrixf concatMtx;
		Vector3f translation(0.0f, -10.0f, 0.0f);
		natMatrix.setTranslation(translation);
		piki->mBaseTrMatrix = natMatrix + matST;

		Vector3f newPos = piki->getPosition();
		piki->mBaseTrMatrix.setTranslation(newPos);
	}
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	mr       r31, r4
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	stw      r28, 0x110(r1)
	mr       r28, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018A394
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	lbz      r0, 0x14(r28)
	cmplwi   r0, 0
	beq      lbl_8018A2CC
	mr       r3, r31
	addi     r4, r28, 0x18
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)

lbl_8018A2CC:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x10(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x10(r28)
	lfs      f1, 0x10(r28)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8018A38C
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 0x14(r1)
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lfs      f1, 0x18(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f0, 0x1c(r1)
	lis      r3, __vt__Q23efx9TPikuDead@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r6, 0x276
	li       r5, 0
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx9TPikuDead@l
	addi     r3, r1, 0x2c
	stw      r4, 0x38(r1)
	addi     r4, r1, 0x38
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	sth      r6, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r0, 0x2c(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	mr       r3, r31
	li       r4, 0x3857
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8018A38C:
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x234(r31)

lbl_8018A394:
	lfs      f3, 0x200(r31)
	lfs      f1, lbl_80518DE0@sda21(r2)
	stfs     f3, 0x20(r1)
	fmuls    f0, f3, f3
	lfs      f2, 0x204(r31)
	stfs     f2, 0x24(r1)
	fmuls    f4, f2, f2
	lfs      f2, 0x208(r31)
	fadds    f0, f0, f4
	fmuls    f5, f2, f2
	stfs     f2, 0x28(r1)
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8018A3E8
	fmadds   f0, f3, f3, f4
	fadds    f4, f5, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8018A3EC
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8018A3EC

lbl_8018A3E8:
	fmr      f4, f1

lbl_8018A3EC:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8018A428
	lfs      f0, lbl_80518DE4@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	b        lbl_8018A42C

lbl_8018A428:
	fmr      f4, f0

lbl_8018A42C:
	lfs      f1, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f4, f1
	ble      lbl_8018A564
	lfs      f3, 0x20(r1)
	addi     r3, r1, 0xd8
	lfs      f4, lbl_80518DE8@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f2, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f3, f3, f4
	fmuls    f2, f2, f4
	fmuls    f0, f0, f4
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "makeNaturalPosture__7MatrixfFR10Vector3<f>f"
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r3, r1, 0xa8
	addi     r5, r4, "zero__10Vector3<f>"@l
	addi     r4, r31, 0x168
	bl       "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lfs      f1, lbl_80518DE0@sda21(r2)
	addi     r3, r1, 0xd8
	lfs      f0, lbl_80518DEC@sda21(r2)
	addi     r4, r1, 0xa8
	stfs     f1, 0xe4(r1)
	addi     r5, r1, 0x48
	stfs     f0, 0xf4(r1)
	stfs     f1, 0x104(r1)
	bl       PSMTXConcat
	lwz      r12, 0x48(r1)
	mr       r4, r31
	lwz      r28, 0x4c(r1)
	addi     r3, r1, 8
	lwz      r29, 0x50(r1)
	lwz      r30, 0x54(r1)
	lwz      r11, 0x58(r1)
	lwz      r10, 0x5c(r1)
	lwz      r9, 0x60(r1)
	lwz      r8, 0x64(r1)
	lwz      r7, 0x68(r1)
	lwz      r6, 0x6c(r1)
	lwz      r5, 0x70(r1)
	lwz      r0, 0x74(r1)
	stw      r12, 0x78(r1)
	stw      r12, 0x138(r31)
	stw      r28, 0x13c(r31)
	stw      r29, 0x140(r31)
	stw      r30, 0x144(r31)
	stw      r11, 0x148(r31)
	stw      r10, 0x14c(r31)
	stw      r9, 0x150(r31)
	stw      r8, 0x154(r31)
	stw      r7, 0x158(r31)
	stw      r6, 0x15c(r31)
	stw      r5, 0x160(r31)
	stw      r0, 0x164(r31)
	lwz      r12, 0(r31)
	stw      r28, 0x7c(r1)
	lwz      r12, 8(r12)
	stw      r29, 0x80(r1)
	stw      r30, 0x84(r1)
	stw      r11, 0x88(r1)
	stw      r10, 0x8c(r1)
	stw      r9, 0x90(r1)
	stw      r8, 0x94(r1)
	stw      r7, 0x98(r1)
	stw      r6, 0x9c(r1)
	stw      r5, 0xa0(r1)
	stw      r0, 0xa4(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x144(r31)
	stfs     f1, 0x154(r31)
	stfs     f2, 0x164(r31)

lbl_8018A564:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r28, 0x110(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/**
 * @note Address: 0x8018A584
 * @note Size: 0xD8
 */
void PikiCarrotState::cleanup(Piki* piki)
{
	piki->setUpdateTrMatrix(true);
	Vector3f position = piki->getPosition();
	efx::Arg fxArg(position);
	efx::TPikuBomb bombFx;
	bombFx.create(&fxArg);

	piki->startSound(PSSE_PK_CARROT_CRUSH, false);
	piki->kill(nullptr);
}

/**
 * @note Address: 0x8018A65C
 * @note Size: 0x124
 */
void PikiCarrotState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	if (!mIsPlanted) {
		mIsPlanted  = true;
		mPosition   = piki->getPosition();
		mPosition.y = mapMgr->getMinY(mPosition);
		efx::Arg fxArg(mPosition);
		mPosition.y -= 8.0f;
		piki->mSoundObj->startFreePikiSound(PSSE_PK_CARROT_GROUND, 0, 0);

		efx::TPkAp appearFx;
		appearFx.create(&fxArg);
	}
}

/**
 * @note Address: 0x8018A780
 * @note Size: 0x4
 */
void PikiCarrotState::collisionCallback(Piki* piki, Game::CollEvent&) { }

/**
 * @note Address: 0x8018A784
 * @note Size: 0xD8
 */
void PikiSwallowedState::init(Piki* piki, StateArg* stateArg)
{
	int animIdx;
	SwallowedStateArg* swallowedArg = static_cast<SwallowedStateArg*>(stateArg);
	if (swallowedArg) {
		animIdx = swallowedArg->mAnimIdx;
	} else {
		animIdx = IPikiAnims::ESA; // i.e., eat
	}

	piki->startMotion(animIdx, animIdx, nullptr, nullptr);

	Creature* creature = piki->mSticker;
	CollPart* collpart = piki->mStuckCollPart;

	if (piki->getCurrAction()) {
		piki->getCurrAction()->cleanup();
		piki->clearCurrAction();
		piki->getCreatureID();
	}

	if (creature != nullptr && collpart) {
		piki->startStickMouth(creature, collpart);
	}
}

/**
 * @note Address: 0x8018A85C
 * @note Size: 0x74
 */
void PikiSwallowedState::exec(Piki* piki)
{
	if (!piki->isStickToMouth()) {
		piki->startSound(PSSE_PK_VC_SAVED, false);
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018A900
 * @note Size: 0x54
 */
void PikiSwallowedState::cleanup(Piki* piki)
{
	piki->endStick();
	piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	piki->getCreatureID();
}

/**
 * @note Address: 0x8018A954
 * @note Size: 0x20C
 */
void PikiHoleinState::init(Piki* piki, StateArg* stateArg)
{
	HoleinStateArg* holeinArg = static_cast<HoleinStateArg*>(stateArg);
	if (holeinArg == nullptr) {
		JUT_PANICLINE(949, "need HoleinStateArg !\n");
	}

	piki->endStick();
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
	Vector3f pikiPos = piki->getPosition();
	mPosDiff         = holeinArg->mPosition - pikiPos; // regswaps here and...
	mPosDiff.y       = 0.0f;

	mTargetDist = mPosDiff.normalise();
	mTargetDist *= 0.5f;

	mGoalPos = pikiPos + mPosDiff * mTargetDist; // ... here, related to pikiPos I think
	mTimer   = -mTargetDist;

	mCountdown      = 0.3f * randFloat();
	mNeedHoldPos    = false;
	mHasPlayedSound = false;

	piki->movie_begin(false);
	mScale = 1.0f;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	or.      r31, r5, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bne      lbl_8018A998
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ECA8@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0x3b5
	addi     r5, r5, lbl_8047ECA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8018A998:
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	mr       r3, r30
	li       r4, 0x1d
	lwz      r12, 0(r30)
	li       r5, 0x1d
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f2, 0(r31)
	lfs      f1, 0xc(r1)
	lfs      f4, 4(r31)
	fsubs    f3, f2, f0
	lfs      f2, 0x10(r1)
	lfs      f5, 8(r31)
	fsubs    f6, f4, f1
	lfs      f4, lbl_80518DE0@sda21(r2)
	stfs     f3, 0x1c(r29)
	fsubs    f3, f5, f2
	stfs     f6, 0x20(r29)
	stfs     f3, 0x24(r29)
	stfs     f4, 0x20(r29)
	lfs      f6, 0x1c(r29)
	lfs      f5, 0x20(r29)
	lfs      f7, 0x24(r29)
	fmuls    f3, f6, f6
	fmuls    f5, f5, f5
	fmuls    f7, f7, f7
	fadds    f3, f3, f5
	fadds    f3, f7, f3
	fcmpo    cr0, f3, f4
	ble      lbl_8018AA58
	fmadds   f3, f6, f6, f5
	fadds    f5, f7, f3
	fcmpo    cr0, f5, f4
	ble      lbl_8018AA5C
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_8018AA5C

lbl_8018AA58:
	fmr      f5, f4

lbl_8018AA5C:
	lfs      f3, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_8018AA98
	lfs      f4, lbl_80518DE4@sda21(r2)
	lfs      f3, 0x1c(r29)
	fdivs    f4, f4, f5
	fmuls    f3, f3, f4
	stfs     f3, 0x1c(r29)
	lfs      f3, 0x20(r29)
	fmuls    f3, f3, f4
	stfs     f3, 0x20(r29)
	lfs      f3, 0x24(r29)
	fmuls    f3, f3, f4
	stfs     f3, 0x24(r29)
	b        lbl_8018AA9C

lbl_8018AA98:
	fmr      f5, f3

lbl_8018AA9C:
	stfs     f5, 0x28(r29)
	lfs      f3, lbl_80518DF4@sda21(r2)
	lfs      f4, 0x28(r29)
	fmuls    f3, f4, f3
	stfs     f3, 0x28(r29)
	lfs      f6, 0x28(r29)
	lfs      f3, 0x1c(r29)
	lfs      f4, 0x20(r29)
	fmuls    f3, f3, f6
	lfs      f5, 0x24(r29)
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	fadds    f2, f2, f5
	stfs     f0, 0x10(r29)
	stfs     f1, 0x14(r29)
	stfs     f2, 0x18(r29)
	lfs      f0, 0x28(r29)
	fneg     f0, f0
	stfs     f0, 0x2c(r29)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x1c(r1)
	li       r0, 0
	lfd      f3, lbl_80518DD8@sda21(r2)
	mr       r3, r30
	stw      r4, 0x18(r1)
	li       r4, 0
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80518DC4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r29)
	stb      r0, 0x34(r29)
	stb      r0, 0x44(r29)
	bl       movie_begin__Q24Game8CreatureFb
	lfs      f0, lbl_80518DE4@sda21(r2)
	stfs     f0, 0x48(r29)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8018AB60
 * @note Size: 0x1C0
 */
void PikiHoleinState::exec(Piki* piki)
{
	piki->endStick();
	piki->mScale = Vector3f(mScale);

	if (mNeedHoldPos) {
		piki->setPosition(mHeldPosition, false);
		return;
	}

	if (mCountdown > 0.0f) {
		mCountdown -= sys->mDeltaTime;
		return;
	}

	if (!mHasPlayedSound) {
		mHasPlayedSound = true;
		piki->startSound(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
	}

	// some nonsense here
	f32 factor        = (40.0f + (-40.0f / SQUARE(mTargetDist)) * mTimer * mTimer);
	Vector3f position = mPosDiff * mTimer + mGoalPos;
	position.y += factor;

	piki->setPosition(position, false);

	mTimer += 80.0f * sys->mDeltaTime;
	f32 val = mTargetDist * 0.2f;
	if (mTimer > val) {
		mScale = (1.5f * mTargetDist - (mTimer - val)) / (mTargetDist * 1.3f);
	}

	if ((mTimer >= 1.5f * mTargetDist) && (!mNeedHoldPos)) {
		mNeedHoldPos  = true;
		mHeldPosition = position;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	lfs      f0, 0x48(r30)
	stfs     f0, 0x168(r31)
	stfs     f0, 0x16c(r31)
	stfs     f0, 0x170(r31)
	lbz      r0, 0x34(r30)
	cmplwi   r0, 0
	beq      lbl_8018ABB4
	mr       r3, r31
	addi     r4, r30, 0x38
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_8018AD08

lbl_8018ABB4:
	lfs      f1, 0x30(r30)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8018ABD8
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x30(r30)
	b        lbl_8018AD08

lbl_8018ABD8:
	lbz      r0, 0x44(r30)
	cmplwi   r0, 0
	bne      lbl_8018ABFC
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x44(r30)
	li       r4, 0x282f
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb

lbl_8018ABFC:
	lfs      f0, 0x28(r30)
	mr       r3, r31
	lfs      f1, lbl_80518DFC@sda21(r2)
	addi     r4, r1, 8
	fmuls    f0, f0, f0
	lfs      f8, 0x2c(r30)
	lfs      f2, 0x20(r30)
	li       r5, 0
	lfs      f4, 0x24(r30)
	fdivs    f6, f1, f0
	lfs      f0, 0x1c(r30)
	lfs      f7, lbl_80518DF8@sda21(r2)
	lfs      f3, 0x14(r30)
	lfs      f5, 0x18(r30)
	lfs      f1, 0x10(r30)
	fmuls    f6, f6, f8
	fmuls    f2, f2, f8
	fmuls    f4, f4, f8
	fmuls    f6, f8, f6
	fadds    f2, f3, f2
	fmuls    f0, f0, f8
	fadds    f6, f7, f6
	fadds    f3, f5, f4
	stfs     f2, 0xc(r1)
	fadds    f1, f1, f0
	fadds    f0, f2, f6
	stfs     f3, 0x10(r1)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80518E00@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x2c(r30)
	lfs      f0, lbl_80518E04@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x2c(r30)
	lfs      f3, 0x28(r30)
	lfs      f1, 0x2c(r30)
	fmuls    f0, f0, f3
	fcmpo    cr0, f1, f0
	ble      lbl_8018ACC0
	fsubs    f1, f1, f0
	lfs      f2, lbl_80518E08@sda21(r2)
	lfs      f0, lbl_80518E0C@sda21(r2)
	fmsubs   f1, f2, f3, f1
	fmuls    f0, f0, f3
	fdivs    f0, f1, f0
	stfs     f0, 0x48(r30)

lbl_8018ACC0:
	lfs      f1, lbl_80518E08@sda21(r2)
	lfs      f0, 0x28(r30)
	lfs      f2, 0x2c(r30)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8018AD08
	lbz      r0, 0x34(r30)
	cmplwi   r0, 0
	bne      lbl_8018AD08
	li       r0, 1
	stb      r0, 0x34(r30)
	lfs      f0, 8(r1)
	stfs     f0, 0x38(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x3c(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x40(r30)

lbl_8018AD08:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8018AD20
 * @note Size: 0x4
 */
void PikiHoleinState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018AD24
 * @note Size: 0x1F4
 */
void PikiFountainonState::init(Piki* piki, StateArg* stateArg)
{
	FountainonStateArg* fountainonArg = static_cast<FountainonStateArg*>(stateArg);
	if (fountainonArg == nullptr) {
		JUT_PANICLINE(1050, "need FountainonStateArg !\n");
	}

	piki->endStick();
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);

	Vector3f pikiPos = piki->getPosition(); // regswaps here
	mAvgPosition     = pikiPos * 0.6f + fountainonArg->mPosition * 0.4f;
	mPosDiff         = mAvgPosition - pikiPos;

	mTargetDist = mPosDiff.normalise();

	mTimer = -mTargetDist;

	mCountdown = 0.3f * randFloat();
	piki->movie_begin(false);

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	or.      r31, r5, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bne      lbl_8018AD68
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ECC0@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0x41a
	addi     r5, r5, lbl_8047ECC0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8018AD68:
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	mr       r3, r30
	li       r4, 0x1d
	lwz      r12, 0(r30)
	li       r5, 0x1d
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f8, 8(r1)
	lfs      f7, lbl_80518E10@sda21(r2)
	lfs      f9, 0xc(r1)
	lfs      f5, lbl_80518E14@sda21(r2)
	fmuls    f2, f8, f7
	lfs      f0, 0(r31)
	fmuls    f4, f9, f7
	lfs      f1, 4(r31)
	fmuls    f0, f0, f5
	lfs      f10, 0x10(r1)
	fmuls    f3, f1, f5
	lfs      f6, 8(r31)
	fmuls    f7, f10, f7
	lfs      f1, lbl_80518DE0@sda21(r2)
	fadds    f0, f2, f0
	fmuls    f2, f6, f5
	fadds    f3, f4, f3
	stfs     f0, 0x10(r29)
	fadds    f0, f7, f2
	stfs     f3, 0x14(r29)
	stfs     f0, 0x18(r29)
	lfs      f0, 0x10(r29)
	lfs      f2, 0x14(r29)
	lfs      f3, 0x18(r29)
	fsubs    f0, f0, f8
	fsubs    f2, f2, f9
	fsubs    f3, f3, f10
	stfs     f0, 0x1c(r29)
	stfs     f2, 0x20(r29)
	stfs     f3, 0x24(r29)
	lfs      f3, 0x1c(r29)
	lfs      f2, 0x20(r29)
	lfs      f4, 0x24(r29)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8018AE68
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8018AE6C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8018AE6C

lbl_8018AE68:
	fmr      f2, f1

lbl_8018AE6C:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8018AEA8
	lfs      f1, lbl_80518DE4@sda21(r2)
	lfs      f0, 0x1c(r29)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x1c(r29)
	lfs      f0, 0x20(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r29)
	lfs      f0, 0x24(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x24(r29)
	b        lbl_8018AEAC

lbl_8018AEA8:
	fmr      f2, f0

lbl_8018AEAC:
	stfs     f2, 0x28(r29)
	lfs      f0, 0x28(r29)
	fneg     f0, f0
	stfs     f0, 0x2c(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	mr       r3, r30
	lfd      f3, lbl_80518DD8@sda21(r2)
	li       r4, 0
	stw      r0, 0x18(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80518DC4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r29)
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8018AF18
 * @note Size: 0x1A0
 */
void PikiFountainonState::exec(Piki* piki)
{
	if (mCountdown > 0.0f) {
		mCountdown -= sys->mDeltaTime;
		if (mCountdown <= 0.0f) {
			piki->startSound(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
		}
		return;
	}

	Vector3f position;

	// regswaps here
	f32 p1          = mTargetDist * 0.4f;
	f32 val         = p1 * mTimer * mTimer;
	f32 p2          = -50.0f / SQUARE(mTargetDist);
	f32 otherFactor = 50.0f + val;

	if (mTimer >= p1) {
		f32 factor = 50.0f + p2 * p1 * p1 + (mTimer - p1);
		position   = mPosDiff * p1 + mAvgPosition;
		position.y += factor;
		mTimer += sys->mDeltaTime * 400.0f;

	} else {
		position = mPosDiff * mTimer + mAvgPosition;
		position.y += otherFactor;
		mTimer += sys->mDeltaTime * 40.0f;

		if (mTimer >= mTargetDist * 0.4f) {
			piki->startSound(PSSE_PK_ESCAPE_HOLE, 0);
		}
	}

	piki->setPosition(position, false);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_80518DE0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	lfs      f2, 0x30(r3)
	fcmpo    cr0, f2, f1
	ble      lbl_8018AF70
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fsubs    f0, f2, f0
	stfs     f0, 0x30(r3)
	lfs      f0, 0x30(r3)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8018B0A4
	mr       r3, r31
	li       r4, 0x282f
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_8018B0A4

lbl_8018AF70:
	lfs      f3, 0x28(r3)
	lfs      f6, lbl_80518E14@sda21(r2)
	fmuls    f1, f3, f3
	lfs      f2, lbl_80518E18@sda21(r2)
	lfs      f0, 0x2c(r3)
	fmuls    f8, f6, f3
	lfs      f5, lbl_80518E1C@sda21(r2)
	fdivs    f2, f2, f1
	fmuls    f1, f2, f0
	fcmpo    cr0, f0, f8
	fmuls    f1, f0, f1
	fadds    f9, f5, f1
	cror     2, 1, 2
	bne      lbl_8018B014
	fmuls    f2, f2, f8
	lfs      f4, 0x20(r3)
	lfs      f6, 0x24(r3)
	fsubs    f1, f0, f8
	lfs      f3, 0x1c(r3)
	fmuls    f4, f4, f8
	fmadds   f2, f8, f2, f5
	lfs      f5, 0x14(r3)
	fmuls    f6, f6, f8
	lfs      f7, 0x18(r3)
	fadds    f5, f5, f4
	lfs      f4, 0x10(r3)
	fmuls    f3, f3, f8
	lwz      r4, sys@sda21(r13)
	fadds    f1, f2, f1
	stfs     f5, 0xc(r1)
	fadds    f6, f7, f6
	lfs      f2, lbl_80518E20@sda21(r2)
	fadds    f3, f4, f3
	fadds    f1, f5, f1
	stfs     f6, 0x10(r1)
	stfs     f3, 8(r1)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x54(r4)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c(r3)
	b        lbl_8018B094

lbl_8018B014:
	lfs      f1, 0x20(r3)
	lfs      f4, 0x24(r3)
	fmuls    f2, f1, f0
	lfs      f3, 0x14(r3)
	lfs      f1, 0x1c(r3)
	fmuls    f4, f4, f0
	lfs      f5, 0x18(r3)
	fadds    f7, f3, f2
	lfs      f3, 0x10(r3)
	fmuls    f2, f1, f0
	fadds    f4, f5, f4
	lwz      r4, sys@sda21(r13)
	fadds    f1, f7, f9
	fadds    f3, f3, f2
	stfs     f7, 0xc(r1)
	lfs      f2, lbl_80518DF8@sda21(r2)
	stfs     f4, 0x10(r1)
	stfs     f3, 8(r1)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x54(r4)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x28(r3)
	lfs      f1, 0x2c(r3)
	fmuls    f0, f6, f0
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8018B094
	mr       r3, r31
	li       r4, 0x285a
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb

lbl_8018B094:
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_8018B0A4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8018B0B8
 * @note Size: 0x4
 */
void PikiFountainonState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018B0BC
 * @note Size: 0xC8
 */
void PikiTaneState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, nullptr, nullptr);
	mVerticalDrag   = 10.0f - 0.5f * randFloat();
	mHorizontalDrag = 0.2f * mVerticalDrag;
	mVerticalDrag *= 0.25f;
	piki->setCollisionFlick(false);
}

/**
 * @note Address: 0x8018B184
 * @note Size: 0x38
 */
void PikiTaneState::exec(Piki* piki) { piki->applyAirDrag(sys->mDeltaTime, mHorizontalDrag, mVerticalDrag); }

/**
 * @note Address: 0x8018B1BC
 * @note Size: 0x34
 */
void PikiTaneState::cleanup(Piki* piki) { piki->setCollisionFlick(true); }

/**
 * @note Address: 0x8018B1F0
 * @note Size: 0x64
 */
void PikiTaneState::bounceCallback(Piki* piki, Sys::Triangle*)
{
	piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	transit(piki, PIKISTATE_Walk, nullptr);
}

/**
 * @note Address: 0x8018B254
 * @note Size: 0x114
 */
void PikiNukareState::init(Piki* piki, StateArg* stateArg)
{
	NukareStateArg* nukareArg = static_cast<NukareStateArg*>(stateArg);
	P2ASSERTLINE(1166, nukareArg != nullptr);

	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mFaceDir        = nukareArg->mNavi->getFaceDir();

	mNavi       = nukareArg->mNavi;
	piki->mNavi = nukareArg->mNavi;
	if (nukareArg->mIsPlucking) {
		mAnimIdx = IPikiAnims::NUKARE3;
	} else {
		mAnimIdx = IPikiAnims::NUKARERU;
	}

	piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);
	mDoFinish = false;

	// Stop time from advancing and disallow pausing when a new type starts to be plucked,
	// so the player can't avoid the new pikmin cutscene (this flag is reset after any cutscene finishes)
	// (Note that this isn't set when using pluckaphone on the Pikmin)
	if (!playData->hasMetPikmin(piki->mPikiKind)) {
		gameSystem->setFlag(GAMESYS_DisablePause);
	}
}

/**
 * @note Address: 0x8018B368
 * @note Size: 0xC
 */
bool PikiNukareState::soft_transittable(int stateID) { return (stateID == PIKISTATE_Walk); }

/**
 * @note Address: 0x8018B374
 * @note Size: 0x150
 */
void PikiNukareState::exec(Piki* piki)
{
	if (!piki->assertMotion(mAnimIdx)) {
		mDoFinish = true;
	}

	if (mDoFinish) {
		Vector3f position = piki->mCollTree->mPart->mPosition;
		transit(piki, PIKISTATE_Walk, nullptr);
		position.y = mapMgr->getMinY(position);
		piki->setPosition(position, false);

		PikiAI::ActFormationInitArg initArg(piki->mNavi);
		piki->mBrain->start(PikiAI::ACT_Formation, &initArg);

		int pikiType = piki->mPikiKind;
		if (pikiType >= 0 && pikiType <= 4) {
			if (!playData->hasMetPikmin(piki->mPikiKind)) {
				gameSystem->mSection->playMovie_helloPikmin(piki);
			}
		}
	}
}

/**
 * @note Address: 0x8018B4C4
 * @note Size: 0x20C
 */
void PikiNukareState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_2:
		rumbleMgr->startRumble(RUMBLETYPE_PluckPiki, (int)mNavi->mNaviIndex);

		Vector3f position = piki->getPosition();
		piki->setFPFlag(FPFLAGS_PikiBeingPlucked);
		Sys::Sphere sphere(position, 10.0f);
		WaterBox* wbox = piki->checkWater(nullptr, sphere);

		if (wbox) {
			efx::TEnemyDive diveFx;
			efx::ArgScale fxArg(position, 1.2f);
			diveFx.create(&fxArg);

			if (piki->mNavi == nullptr) {
				JUT_PANICLINE(1242, "getNavi():pullW");
			}

			piki->startSound(piki->mNavi, PSSE_EV_ITEM_LAND_WATER1_S, true);
			piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);

		} else {
			if (piki->mNavi == nullptr) {
				JUT_PANICLINE(1246, "getNavi():Pull");
			}
			efx::createSimplePkAp(position);
			piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
		}

		break;
	case KEYEVENT_END:
		mDoFinish = true;
		break;
	}
}

/**
 * @note Address: 0x8018B6D0
 * @note Size: 0x10
 */
void PikiNukareState::cleanup(Piki* piki) { piki->resetFPFlag(FPFLAGS_PikiBeingPlucked); }

/**
 * @note Address: 0x8018B6E0
 * @note Size: 0xB8
 */
void PikiDopeState::init(Piki* piki, StateArg* stateArg)
{
	DopeStateArg* dopeArg = static_cast<DopeStateArg*>(stateArg);
	P2ASSERTLINE(1270, dopeArg != nullptr);
	mDopeState            = dopeArg->mDopeType;
	mStartWaitTime        = 0.3f * randFloat();
	mHasAnimStarted       = false;
	piki->mTargetVelocity = Vector3f(0.0f);
	mNavi                 = nullptr;
}

/**
 * @note Address: 0x8018B798
 * @note Size: 0x8
 */
void PikiDopeState::onFlute(Piki* piki, Navi* navi) { mNavi = navi; }

/**
 * @note Address: 0x8018B7A0
 * @note Size: 0x18C
 */
void PikiDopeState::exec(Piki* piki)
{
	if (!mHasAnimStarted) {
		mStartWaitTime -= sys->mDeltaTime;
		if (mStartWaitTime <= 0.0f) {
			mHasAnimStarted = true;

			if (randFloat() > 0.5f) { // the illusion of choice.
				mAnimIdx = IPikiAnims::GROWUP1;
			} else {
				mAnimIdx = IPikiAnims::GROWUP1;
			}

			piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);
		}

	} else if (!piki->assertMotion(mAnimIdx)) {
		piki->getCreatureID();

		if (mNavi) {
			piki->mNavi = mNavi;
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
		}

		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018B92C
 * @note Size: 0xD8
 */
void PikiDopeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case 2:
		piki->startDope(mDopeState);
		break;
	case 1000:
		if (mNavi) {
			piki->mNavi = mNavi;
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
		}

		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x8018BA04
 * @note Size: 0x4
 */
void PikiDopeState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018BA08
 * @note Size: 0x24
 */
bool PikiPanicState::soft_transittable(int stateID)
{
	return !(stateID == PIKISTATE_Blow || stateID == PIKISTATE_Panic || stateID == PIKISTATE_FallMeck);
}

/**
 * @note Address: 0x8018BA2C
 * @note Size: 0x70
 */
bool PikiPanicState::transittable(int stateID)
{
	if (mPanicType == PIKIPANIC_Panic && stateID != PIKISTATE_Panic) {
		return true;
	}

	if (stateID == PIKISTATE_Dying || (u32)(stateID - 10) <= 1 || // drown or swallowed
	    (u32)(stateID - 20) <= 2 ||                               // pressed, panic or zapped
	    stateID == PIKISTATE_Suikomi || stateID == PIKISTATE_Hanged || stateID == PIKISTATE_Flying) {
		return true;
	}

	return (mIsCalled != 0);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
inline void PikiPanicState::startSound(Piki* piki)
{
	u32 panicSound = PSSE_PK_VC_PANIC;
	switch (mPanicType) {
	case PIKIPANIC_Water:
		panicSound = PSSE_PK_VC_WATER_PANIC;
		break;
	case PIKIPANIC_Fire:
		panicSound = PSSE_PK_VC_FIRED;
		break;
	case PIKIPANIC_Gas:
	case PIKIPANIC_Panic:
	case PIKIPANIC_Other:
		break;
	}

	piki->mSoundObj->startFreePikiSetSound(panicSound, PSGame::SeMgr::SETSE_PikiPanicRun, 90, 0);
}

/**
 * @note Address: 0x8018BA9C
 * @note Size: 0x280
 */
void PikiPanicState::init(Piki* piki, StateArg* stateArg)
{
	PanicStateArg* panicArg = static_cast<PanicStateArg*>(stateArg);
	P2ASSERTLINE(1399, panicArg != nullptr);
	mPanicType       = panicArg->mPanicType;
	mIsCalled        = false;
	mIsLobsterLanded = true;
	piki->setMoveRotation(true);
	mDeathTimer = piki->getParms()->mPikiParms.mPanicMaxTime.mValue;
	mDeathTimer *= (0.1f * randFloat() + 1.0f);
	mDramaTimer = 0.1f;
	mAngle      = piki->mFaceDir;
	mSpeed      = 1.0f;
	piki->endStick();

	switch (mPanicType) {
	case PIKIPANIC_Water:
		efx::TPkEffect* effectsObjWat = piki->mEffectsObj;
		effectsObjWat->setFlag(PKEFF_Water);
		effectsObjWat->createWater_(effectsObjWat->mAltStemPosition);
		piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		break;

	case PIKIPANIC_Gas:
		efx::TPkEffect* effectsObjGas = piki->mEffectsObj;
		effectsObjGas->setFlag(PKEFF_Gas);
		effectsObjGas->createChudoku_(effectsObjGas->mStemPosition);
		piki->startMotion(IPikiAnims::GASDEAD, IPikiAnims::GASDEAD, nullptr, nullptr);
		piki->setMoveRotation(false);
		break;

	case PIKIPANIC_Fire:
		piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		efx::TPkEffect* effectsObjFire = piki->mEffectsObj;
		effectsObjFire->setFlag(PKEFF_Fire);
		effectsObjFire->createMoe_(effectsObjFire->mStemPosition);
		break;

	case PIKIPANIC_Panic:
	case PIKIPANIC_Other:
		mSubState   = 0;
		mDramaTimer = 0.3f * randFloat();
		break;
	}

	startSound(piki);
	mDemoWaitTime = 2.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x17C
 */
inline void PikiPanicState::checkDemo(Piki* piki)
{
	int flag = 0;
	if (mPanicType == PIKIPANIC_Fire) {
		flag = DEMO_Pikmin_In_Danger_Fire;
	} else if (mPanicType == PIKIPANIC_Water) {
		flag = DEMO_Pikmin_In_Danger_Water;
	} else if (mPanicType == PIKIPANIC_Gas) {
		flag = DEMO_Pikmin_In_Danger_Poison;
	}

	if (flag != 0 && !playData->isDemoFlag(flag) && gameSystem->isStoryMode() && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		mDemoWaitTime -= sys->mDeltaTime;
		if (mDemoWaitTime <= 0.0f) {
			playData->setDemoFlag(flag);

			MoviePlayArg playArg("x16_hiba", nullptr, nullptr, 0);
			playArg.mOrigin            = piki->getPosition();
			playArg.mAngle             = piki->getFaceDir();
			moviePlayer->mTargetObject = piki;
			moviePlayer->play(playArg);
		}
	}
}

/**
 * @note Address: 0x8018BD1C
 * @note Size: 0x260
 */
void PikiPanicState::exec(Piki* piki)
{
	if (mPanicType == PIKIPANIC_Panic || mPanicType == PIKIPANIC_Other) {
		piki->mTargetVelocity = Vector3f(0.0f);
		switch (mSubState) {
		case 0:
			mDramaTimer -= sys->mDeltaTime;
			if (mDramaTimer <= 0.0f) {
				mSubState = 1;
				piki->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, piki, nullptr);
			}
			return;

		case 1:
			if (!piki->assertMotion(IPikiAnims::KIZUKU)) {
				mSubState = 2;
			}
			return;
		}
	} else {
		checkDemo(piki);
	}

	if (mPanicType == PIKIPANIC_Gas) {
		panicLobster(piki);
	} else {
		panicRun(piki);
	}
}

/**
 * @note Address: 0x8018BF7C
 * @note Size: 0x48
 */
void PikiPanicState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	mSubState = 2;
	piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
}

/**
 * @note Address: 0x8018BFC4
 * @note Size: 0x2BC
 */
void PikiPanicState::panicRun(Piki* piki)
{
	Vector3f direction = Vector3f(sinf(mAngle), 0.0f, cosf(mAngle));
	piki->setSpeed(mSpeed, direction);
	mDeathTimer -= sys->mDeltaTime;
	mDramaTimer -= sys->mDeltaTime;

	if (mDeathTimer < 0.0f) {
		if (mPanicType == PIKIPANIC_Panic) {
			transit(piki, PIKISTATE_Walk, nullptr);
			return;
		}

		switch (mPanicType) {
		case PIKIPANIC_Fire:
			deathMgr->inc(DeathCounter::COD_Fire);
			break;
		case PIKIPANIC_Water:
			deathMgr->inc(DeathCounter::COD_Water);
			break;
		case PIKIPANIC_Gas:
			deathMgr->inc(DeathCounter::COD_Poison);
			break;
		}
		transit(piki, PIKISTATE_Dying, nullptr);
		return;
	}

	if (mDramaTimer < 0.0f) {
		startSound(piki);
		mDramaTimer     = 0.2f * randFloat() + 0.2f;
		f32 angleOffset = DEG2RAD * (15.0f * randFloat() + 30.0f) * PI;
		if (piki->mMgrIndex % 2 == 1) {
			angleOffset = -angleOffset;
		}
		mAngle += angleOffset;
		mAngle = roundAng(mAngle);
		mSpeed *= 0.99f;
	}
}

/**
 * @note Address: 0x8018C280
 * @note Size: 0x2D4
 */
void PikiPanicState::panicLobster(Piki* piki)
{
	if (mIsLobsterLanded) {
		mIsLobsterLanded = false;
		f32 oldAngle     = piki->mFaceDir;

		f32 angleOffset = DEG2RAD * (15.0f * randFloat() + 10.0f) * PI;
		if (piki->mMgrIndex % 2 == 1) {
			angleOffset = -angleOffset;
		}
		oldAngle += angleOffset;

		f32 newAngle    = roundAng(oldAngle);
		f32 factor      = 20.0f * randFloat() + 120.0f;
		f32 randHeight  = 80.0f * randFloat() + 100.0f;
		Vector3f newPos = Vector3f(factor * sinf(newAngle), randHeight, factor * cosf(newAngle));

		piki->mFaceDir  = newAngle;
		piki->mVelocity = newPos;

		if (mPanicType == PIKIPANIC_Gas) {
			piki->startSound(PSSE_PK_VC_GAS_POISONING, true);
		}
	}

	mDeathTimer -= sys->mDeltaTime;

	if (mDeathTimer < 0.0f) {
		switch (mPanicType) {
		case PIKIPANIC_Fire:
			deathMgr->inc(DeathCounter::COD_Fire);
			break;
		case PIKIPANIC_Water:
			deathMgr->inc(DeathCounter::COD_Water);
			break;
		case PIKIPANIC_Gas:
			deathMgr->inc(DeathCounter::COD_Poison);
			break;
		}

		if (mPanicType == PIKIPANIC_Gas) {
			DyingStateArg dyingArg;
			dyingArg.mAnimIdx = IPikiAnims::GDEAD;
			transit(piki, PIKISTATE_Dying, &dyingArg);
			return;
		}

		transit(piki, PIKISTATE_Dying, nullptr);
	}
}

/**
 * @note Address: 0x8018C554
 * @note Size: 0xE4
 */
void PikiPanicState::cleanup(Piki* piki)
{
	piki->setMoveRotation(true);
	if (piki->mFsm->mStateID != PIKISTATE_Dying) {
		efx::TPkEffect* effectsObjFire = piki->mEffectsObj;
		effectsObjFire->killMoe_();
		if (effectsObjFire->isFlag(PKEFF_Fire)) {
			effectsObjFire->resetFlag(PKEFF_Fire);
			effectsObjFire->createMoeSmoke_(effectsObjFire->mStemPosition);
			effectsObjFire->mMoeSmokeTimer = 60;
			efx::createSimpleChinka(*effectsObjFire->mStemPosition);
		}

		efx::TPkEffect* effectsObjWater = piki->mEffectsObj;
		effectsObjWater->killWater_();
		if (effectsObjWater->isFlag(PKEFF_Water)) {
			effectsObjWater->resetFlag(PKEFF_Water);
			efx::createSimpleWaterOff(*effectsObjWater->mAltStemPosition);
		}

		efx::TPkEffect* effectsObjGas = piki->mEffectsObj;
		effectsObjGas->killChudoku_();
		if (effectsObjGas->isFlag(PKEFF_Gas)) {
			effectsObjGas->resetFlag(PKEFF_Gas);
			efx::createSimpleGedoku(*effectsObjGas->mStemPosition);
		}
	}
}

/**
 * @note Address: 0x8018C638
 * @note Size: 0xC
 */
void PikiPanicState::bounceCallback(Piki* piki, Sys::Triangle*) { mIsLobsterLanded = true; }

/**
 * @note Address: 0x8018C644
 * @note Size: 0x11C
 */
void PikiPanicState::onFlute(Piki* piki, Game::Navi*)
{
	mIsCalled = true;
	transit(piki, PIKISTATE_Walk, nullptr);

	switch (mPanicType) {
	case PIKIPANIC_Fire:
		efx::TPkEffect* effectsObjFire = piki->mEffectsObj;
		effectsObjFire->killMoe_();
		if (effectsObjFire->isFlag(PKEFF_Fire)) {
			effectsObjFire->resetFlag(PKEFF_Fire);
			effectsObjFire->createMoeSmoke_(effectsObjFire->mStemPosition);
			effectsObjFire->mMoeSmokeTimer = 60;
			efx::createSimpleChinka(*effectsObjFire->mStemPosition);
		}
		break;
	case PIKIPANIC_Water:
		efx::TPkEffect* effectsObjWater = piki->mEffectsObj;
		effectsObjWater->killWater_();
		if (effectsObjWater->isFlag(PKEFF_Water)) {
			effectsObjWater->resetFlag(PKEFF_Water);
			efx::createSimpleWaterOff(*effectsObjWater->mAltStemPosition);
		}
		break;
	case PIKIPANIC_Gas:
		piki->setGasInvincible(90);
		efx::TPkEffect* effectsObjGas = piki->mEffectsObj;
		effectsObjGas->killChudoku_();
		if (effectsObjGas->isFlag(PKEFF_Gas)) {
			effectsObjGas->resetFlag(PKEFF_Gas);
			efx::createSimpleGedoku(*effectsObjGas->mStemPosition);
		}
		break;
	}
}

/**
 * @note Address: 0x8018C760
 * @note Size: 0x4
 */
void PikiDeadState::init(Piki* piki, StateArg* stateArg) { }

/**
 * @note Address: 0x8018C764
 * @note Size: 0x4
 */
void PikiDeadState::exec(Piki* piki) { }

/**
 * @note Address: 0x8018C768
 * @note Size: 0x10
 */
bool PikiDyingState::transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/**
 * @note Address: 0x8018C778
 * @note Size: 0xB4
 */
void PikiDyingState::init(Piki* piki, StateArg* stateArg)
{
	DyingStateArg* dyingArg = static_cast<DyingStateArg*>(stateArg);
	mAnimIdx                = IPikiAnims::DEAD;
	mDoUseKillArg           = false;
	if (dyingArg) {
		mAnimIdx      = dyingArg->mAnimIdx;
		mDoUseKillArg = dyingArg->mDoUseKillArg;
		if (mAnimIdx == IPikiAnims::NULLANIM) {
			mAnimIdx = IPikiAnims::DEAD;
		}
	}

	piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_DEAD1, 0, 0);
}

/**
 * @note Address: 0x8018C82C
 * @note Size: 0xDC
 */
void PikiDyingState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	if (!piki->assertMotion(mAnimIdx) && piki->isAlive()) {
		if (mDoUseKillArg) {
			PikiKillArg killArg(-CKILL_VsChargePiki);
			piki->kill(&killArg);

		} else if (moviePlayer == nullptr || !moviePlayer->isPlaying("s09_holein")) {
			piki->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x8018C908
 * @note Size: 0x4
 */
void PikiDyingState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018C90C
 * @note Size: 0x64
 */
void PikiDyingState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (mDoUseKillArg) {
		PikiKillArg killArg(-CKILL_VsChargePiki);
		piki->kill(&killArg);
	} else {
		piki->kill(nullptr);
	}
}

/**
 * @note Address: 0x8018C970
 * @note Size: 0x10
 */
bool PikiDenkiDyingState::soft_transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/**
 * @note Address: 0x8018C980
 * @note Size: 0x10
 */
bool PikiDenkiDyingState::transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/**
 * @note Address: 0x8018C990
 * @note Size: 0x84
 */
void PikiDenkiDyingState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::DEAD, IPikiAnims::DEAD, piki, nullptr);
	mWaitTime             = 0.3f;
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mVelocity       = Vector3f(0.0f);
}

/**
 * @note Address: 0x8018CA14
 * @note Size: 0x138
 */
void PikiDenkiDyingState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mVelocity       = Vector3f(0.0f);
	mWaitTime -= sys->mDeltaTime;

	if (mWaitTime <= 0.0f) {
		efx::TPkKanden kandenFx;
		efx::Arg fxArg(Vector3f::zero);
		fxArg.mPosition = piki->getPosition(); // why do this differently, smh.
		kandenFx.create(&fxArg);

		deathMgr->inc(DeathCounter::COD_Electricity);
		piki->startSound(PSSE_PK_VC_ELEC_DEAD, true);
		piki->kill(nullptr);
	}
}

/**
 * @note Address: 0x8018CB4C
 * @note Size: 0x4
 */
void PikiDenkiDyingState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018CB50
 * @note Size: 0x10
 */
bool PikiPressedState::soft_transittable(int stateID) { return (stateID == PIKISTATE_Dead); }

/**
 * @note Address: 0x8018CB60
 * @note Size: 0x10
 */
bool PikiPressedState::transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/**
 * @note Address: 0x8018CB70
 * @note Size: 0xC8
 */
void PikiPressedState::init(Piki* piki, StateArg* stateArg)
{
	f32 pressedScale = piki->getParms()->mPikiParms.mPressedScale.mValue;
	piki->mScale     = Vector3f(pressedScale, pressedScale, 0.01f);
	mWaitTime        = 1.5f;
	piki->setUpdateTrMatrix(false);

	Vector3f rotation    = Vector3f(-HALF_PI, piki->mFaceDir, 0.0f);
	Vector3f translation = piki->getPosition();
	translation.y += 2.0f;

	piki->mBaseTrMatrix.makeSRT(piki->mScale, rotation, translation);
}

/**
 * @note Address: 0x8018CC38
 * @note Size: 0x10C
 */
void PikiPressedState::exec(Piki* piki)
{
	Vector3f rotation    = Vector3f(-HALF_PI, piki->mFaceDir, 0.0f);
	Vector3f translation = piki->getPosition();
	translation.y += 2.0f;

	piki->mBaseTrMatrix.makeSRT(piki->mScale, rotation, translation);

	mWaitTime -= sys->mDeltaTime;
	if (mWaitTime <= 0.0f) {
		if (piki->isPikmin()) {
			deathMgr->inc(DeathCounter::COD_Battle);
		}
		piki->kill(nullptr);
	}

	piki->mVelocity       = Vector3f(0.0f);
	piki->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x8018CD44
 * @note Size: 0x34
 */
void PikiPressedState::cleanup(Piki* piki) { piki->setUpdateTrMatrix(true); }

/**
 * @note Address: 0x8018CD78
 * @note Size: 0x84
 */
void PikiLookAtState::init(Piki* piki, StateArg* stateArg)
{
	mWaitTime = 0.3f * randFloat();
	mSubState = 0;
	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_CALLED, 90, 0);
}

/**
 * @note Address: 0x8018CDFC
 * @note Size: 0x4
 */
void PikiLookAtState::onFlute(Piki* piki, Game::Navi*) { }

/**
 * @note Address: 0x8018CE00
 * @note Size: 0x180
 */
void PikiLookAtState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	switch (mSubState) {
	case 0:
		mWaitTime -= sys->mDeltaTime;
		if (mWaitTime < 0.0f) {
			mWaitTime = 0.0f;
			piki->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, this, nullptr);
			mSubState = 1;
		}
		break;

	case 1:
		if (!piki->assertMotion(IPikiAnims::KIZUKU)) {
			mSubState = 2;
		}
		break;

	case 2:
		if (piki->mNavi) {
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			initArg.mDoUseTouchCooldown = true;
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
			transit(piki, PIKISTATE_Walk, nullptr);

		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x8018CF80
 * @note Size: 0x28
 */
void PikiLookAtState::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case 1000:
		mSubState = 2;
		break;
	case 0:
	case 1:
	case 2:
	case 3:
		break;
	}
}

/**
 * @note Address: 0x8018CFA8
 * @note Size: 0x4
 */
void PikiLookAtState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018CFAC
 * @note Size: 0x1FC
 */
void PikiAutoNukiState::init(Piki* piki, StateArg* stateArg)
{
	mTimer = 0.2f * randFloat();
	mState = 0;
	piki->startMotion(IPikiAnims::KAIFUKU2, IPikiAnims::KAIFUKU2, piki, nullptr);
	mState            = 1;
	Vector3f position = piki->getPosition();
	Sys::Sphere sphere(position, 10.0f);
	WaterBox* wbox = piki->checkWater(nullptr, sphere);

	if (wbox) {
		efx::TEnemyDive diveFx;
		efx::ArgScale fxArg(position, 1.2f);
		diveFx.create(&fxArg);
		if (piki->mNavi) {
			piki->startSound(piki->mNavi, PSSE_EV_ITEM_LAND_WATER1_S, true);
			piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
		}
	} else if (piki->mNavi) {
		efx::createSimplePkAp(position);
		piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
	}
}

/**
 * @note Address: 0x8018D1A8
 * @note Size: 0x300
 */
void PikiAutoNukiState::exec(Piki* piki)
{
	switch (mState) {
	case 0:
		mTimer -= sys->mDeltaTime;
		if (mTimer < 0.0f) {
			mTimer = 0.0f;
			piki->startMotion(IPikiAnims::KAIFUKU2, IPikiAnims::KAIFUKU2, piki, nullptr);
			mState = 1;

			Vector3f position = piki->getPosition();
			Sys::Sphere sphere(position, 10.0f);
			WaterBox* wbox = piki->checkWater(nullptr, sphere);

			if (wbox) {
				efx::TEnemyDive diveFx;
				efx::ArgScale fxArg(position, 1.2f);
				diveFx.create(&fxArg);

				if (piki->mNavi) {
					piki->startSound(piki->mNavi, PSSE_EV_ITEM_LAND_WATER1_S, true);
					piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
				}

			} else if (piki->mNavi) {
				efx::createSimplePkAp(position);
				piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
			}
		}
		break;

	case 1:
		if (!piki->assertMotion(IPikiAnims::KAIFUKU2)) {
			mState = 2;
		}
		break;

	case 2:
		if (piki->mNavi) {
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			initArg.mDoUseTouchCooldown = true;
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);

		} else {
			piki->mBrain->start(PikiAI::ACT_Free, nullptr);
		}

		transit(piki, PIKISTATE_Walk, nullptr);

		int type = piki->mPikiKind;
		if (type >= 0 && type <= 4 && !playData->hasMetPikmin(type)) {
			gameSystem->mSection->playMovie_helloPikmin(piki);
		}

		break;
	}
}

/**
 * @note Address: 0x8018D4A8
 * @note Size: 0x28
 */
void PikiAutoNukiState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_END:
		mState = 2;
		break;
	case KEYEVENT_2:
		break;
	}
}

/**
 * @note Address: 0x8018D4D0
 * @note Size: 0x4
 */
void PikiAutoNukiState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018D4D4
 * @note Size: 0x64
 */
void PikiGoHangState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
	piki->setCollisionFlick(false);
}

/**
 * @note Address: 0x8018D538
 * @note Size: 0x1C8
 */
void PikiGoHangState::exec(Piki* piki)
{
	if (piki->mNavi == nullptr) {
		transit(piki, PIKISTATE_Walk, nullptr);
		return;
	}

	CollPart* collpart = piki->mNavi->mCollTree->getCollPart('rhnd');
	Vector3f position  = piki->getPosition();
	Vector3f diff      = collpart->mPosition - position;
	f32 length         = _normalise2(diff); // can't use this bc no second round of fmadds - has to use a different normalise.
	f32 scale          = 1.0f;
	if (length > 2.0f * naviMgr->mNaviParms->mNaviParms.mGrabPikiRange.mValue) {
		scale = 2.0f;
	}
	Vector3f naviPos      = piki->mNavi->mVelocity;
	f32 factor            = scale * static_cast<NaviParms*>(piki->mNavi->mParms)->mNaviParms.mAutopluckDistance.mValue;
	f32 dist              = naviPos.length();
	piki->mTargetVelocity = diff * (factor + dist);

	if (piki->mNavi->getStateID() != NSID_ThrowWait) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r5, 0x2c4(r4)
	cmplwi   r5, 0
	bne      lbl_8018D580
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018D6E4

lbl_8018D580:
	lis      r4, 0x72686E64@ha
	lwz      r3, 0x114(r5)
	addi     r4, r4, 0x72686E64@l
	bl       getCollPart__8CollTreeFUl
	mr       r4, r30
	mr       r31, r3
	lwz      r12, 0(r30)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r31)
	lfs      f0, 0xc(r1)
	lfs      f2, 0x54(r31)
	fsubs    f4, f1, f0
	lfs      f0, 0x10(r1)
	lfs      f1, 0x4c(r31)
	fsubs    f5, f2, f0
	lfs      f0, 8(r1)
	fmuls    f2, f4, f4
	fsubs    f3, f1, f0
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmuls    f6, f5, f5
	fmadds   f1, f3, f3, f2
	fadds    f2, f6, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8018D5FC
	ble      lbl_8018D600
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8018D600

lbl_8018D5FC:
	fmr      f2, f0

lbl_8018D600:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8018D624
	lfs      f0, lbl_80518DE4@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	b        lbl_8018D628

lbl_8018D624:
	fmr      f2, f0

lbl_8018D628:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lfs      f1, lbl_80518E30@sda21(r2)
	lwz      r3, 0xc8(r3)
	lfs      f8, lbl_80518DE4@sda21(r2)
	lfs      f0, 0x660(r3)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_8018D64C
	fmr      f8, f1

lbl_8018D64C:
	lwz      r3, 0x2c4(r30)
	lwz      r4, 0xc0(r30)
	lfs      f0, 0x204(r3)
	lfs      f6, 0x208(r3)
	fmuls    f7, f0, f0
	lfs      f1, 0x200(r3)
	lfs      f2, 0x2c8(r4)
	fmuls    f6, f6, f6
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmadds   f1, f1, f1, f7
	fmuls    f7, f8, f2
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8018D694
	ble      lbl_8018D698
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8018D698

lbl_8018D694:
	fmr      f1, f0

lbl_8018D698:
	fadds    f7, f7, f1
	fmuls    f2, f3, f7
	fmuls    f1, f4, f7
	fmuls    f0, f5, f7
	stfs     f2, 0x1e4(r30)
	stfs     f1, 0x1e8(r30)
	stfs     f0, 0x1ec(r30)
	lwz      r3, 0x2c4(r30)
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 6
	beq      lbl_8018D6E4
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018D6E4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8018D700
 * @note Size: 0x34
 */
void PikiGoHangState::cleanup(Piki* piki) { piki->setCollisionFlick(true); }

/**
 * @note Address: 0x8018D734
 * @note Size: 0x4
 */
void PikiHangedState::onKeyEvent(SysShape::KeyEvent const& keyEvent) { }

/**
 * @note Address: 0x8018D738
 * @note Size: 0xC4
 */
void PikiHangedState::init(Piki* piki, StateArg* stateArg)
{
	piki->startSound(PSSE_PK_VC_HANG, false);
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, this, nullptr);
	piki->mVelocity       = Vector3f(0.0f);
	piki->mTargetVelocity = Vector3f(0.0f);
	if (piki->mNavi) {
		piki->startSound(piki->mNavi, PSSE_PK_VC_THROW_WAIT, false);
	}

	piki->setAtari(false);
}

/**
 * @note Address: 0x8018D7FC
 * @note Size: 0x6C
 */
void PikiHangedState::exec(Piki* piki)
{
	if (piki->mNavi != nullptr && piki->mNavi->getStateID() != 6) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018D868
 * @note Size: 0x34
 */
void PikiHangedState::cleanup(Piki* piki) { piki->setAtari(true); }

/**
 * @note Address: 0x8018D89C
 * @note Size: 0x6C
 */
bool PikiHangedState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018D908
 * @note Size: 0x4
 */
void PikiWaterHangedState::onKeyEvent(SysShape::KeyEvent const&) { }

/**
 * @note Address: 0x8018D90C
 * @note Size: 0xC4
 */
void PikiWaterHangedState::init(Piki* piki, StateArg* stateArg)
{
	WaterHangedStateArg* waterHangedArg = static_cast<WaterHangedStateArg*>(stateArg);
	if (waterHangedArg) {
		mPiki = waterHangedArg->mPiki;
	} else {
		mPiki = nullptr;
	}

	piki->startSound(PSSE_PK_VC_HANG, false);
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, this, nullptr);
	piki->mVelocity       = Vector3f(0.0f);
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->setAtari(false);
}

/**
 * @note Address: 0x8018D9D0
 * @note Size: 0xA8
 */
void PikiWaterHangedState::exec(Piki* piki)
{
	if (mPiki) {
		int currActID   = mPiki->getCurrActionID();
		int currStateID = mPiki->getStateID();

		if (currActID != PikiAI::ACT_Rescue || currStateID != PIKISTATE_Walk) {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	} else {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018DA78
 * @note Size: 0x34
 */
void PikiWaterHangedState::cleanup(Piki* piki) { piki->setAtari(true); }

/**
 * @note Address: 0x8018DAAC
 * @note Size: 0x6C
 */
bool PikiWaterHangedState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018DB18
 * @note Size: 0x70
 */
void PikiHipDropState::init(Piki* piki, StateArg* stateArg)
{
	piki->mVelocity.z = 0.0f;
	piki->mVelocity.x = 0.0f;
	mSubState         = 0;
	mWaitTimer        = 0.25f;
	piki->mVelocity.y = 0.0f;

	efx::TPkEffect* effectsObj = piki->mEffectsObj;
	effectsObj->killNage_();
	effectsObj->createBlackDown_(effectsObj->mHamonPosPtr);
	piki->mUpdateContext.mDoForceActive = true;
}

/**
 * @note Address: 0x8018DB88
 * @note Size: 0x3C8
 */
void PikiHipDropState::exec(Piki* piki)
{
	if (mSubState == 0) {
		piki->mVelocity.y = 0.0f;
		mWaitTimer -= sys->mDeltaTime;
		if (mWaitTimer <= 0.0f) {
			piki->mVelocity.y      = -_aiConstants->mGravity.mData * 0.5f;
			Creature* closestEnemy = nullptr;
			f32 minDist            = 12800.0f;
			Vector3f position      = piki->getPosition();
			Sys::Sphere sphere(position, 50.0f);
			CellIteratorArg iterArg(sphere);
			iterArg.mUseCustomRadius = 1;
			CellIterator iterator(iterArg);
			iterator.first();

			while (!iterator.isDone()) {
				Creature* creature = static_cast<Creature*>(*iterator);
				if (creature->isTeki() && creature->isAlive() && creature->isLivingThing()) {
					Vector3f creaturePos = creature->getPosition();
					Vector3f pikiPos     = piki->getPosition();
					// Vector3f diff        = Vector3f(creaturePos.x - pikiPos.x, creaturePos.y - pikiPos.y, creaturePos.x - pikiPos.x);

					f32 currDist = creaturePos.distance(pikiPos);

					if (currDist < minDist) {
						minDist      = currDist;
						closestEnemy = creature;
					}
				}
				iterator.next();
			}

			if (closestEnemy) {
				Vector3f enemyPos = closestEnemy->getPosition();
				f32 dist          = _distanceXZ(enemyPos, position);

				if (dist > 0.0f) {
					f32 norm = (1.0f / dist);
					norm     = 120.0f * norm;
					enemyPos.x *= norm;
					enemyPos.z *= norm;
					piki->mVelocity.x = enemyPos.x;
					piki->mVelocity.z = enemyPos.z;
				}
			}
			mSubState = 1;
			piki->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
		}

	} else if (mSubState == 1) {
		piki->mFaceDir += sys->mDeltaTime * PI / 0.2f;
		piki->mFaceDir = roundAng(piki->mFaceDir);

	} else if (mSubState == 2) {
		piki->mTargetVelocity = Vector3f(0.0f);
		mWaitTimer -= sys->mDeltaTime;
		if (mWaitTimer <= 0.0f) {
			transit(piki, PIKISTATE_Walk, nullptr);
			if (!piki->invokeAI()) {
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		}
	}
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stfd     f27, 0xd0(r1)
	psq_st   f27, 216(r1), 0, qr0
	stfd     f26, 0xc0(r1)
	psq_st   f26, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r28, r3
	mr       r29, r4
	lhz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_8018DE50
	lfs      f2, lbl_80518DE0@sda21(r2)
	stfs     f2, 0x204(r29)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x10(r28)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r28)
	lfs      f0, 0x10(r28)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8018DF00
	lwz      r5, _aiConstants__4Game@sda21(r13)
	addi     r3, r1, 0x2c
	lfs      f1, lbl_80518DF4@sda21(r2)
	li       r31, 0
	lfs      f0, 0x28(r5)
	lfs      f30, lbl_80518E64@sda21(r2)
	fneg     f0, f0
	fmuls    f0, f1, f0
	stfs     f0, 0x204(r29)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x2c(r1)
	addi     r3, r1, 0x48
	lfs      f29, 0x34(r1)
	addi     r4, r1, 0x38
	lfs      f1, 0x30(r1)
	lfs      f0, lbl_80518E1C@sda21(r2)
	stfs     f31, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f29, 0x40(r1)
	stfs     f0, 0x44(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x68
	stw      r0, 0x5c(r1)
	addi     r4, r1, 0x48
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x68
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8018DD8C

lbl_8018DC94:
	addi     r3, r1, 0x68
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018DD84
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018DD84
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018DD84
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lfs      f28, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f27, 0x24(r1)
	lfs      f26, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	lfs      f2, 0x14(r1)
	fsubs    f4, f27, f0
	lfs      f1, 0x1c(r1)
	fsubs    f3, f28, f2
	lfs      f0, lbl_80518DE0@sda21(r2)
	fsubs    f2, f26, f1
	fmuls    f1, f4, f4
	fmuls    f2, f2, f2
	fmadds   f1, f3, f3, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8018DD70
	ble      lbl_8018DD74
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8018DD74

lbl_8018DD70:
	fmr      f1, f0

lbl_8018DD74:
	fcmpo    cr0, f1, f30
	bge      lbl_8018DD84
	fmr      f30, f1
	mr       r31, r30

lbl_8018DD84:
	addi     r3, r1, 0x68
	bl       next__Q24Game12CellIteratorFv

lbl_8018DD8C:
	addi     r3, r1, 0x68
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018DC94
	cmplwi   r31, 0
	beq      lbl_8018DE20
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f1, 8(r1)
	fsubs    f4, f0, f29
	lfs      f0, lbl_80518DE0@sda21(r2)
	fsubs    f3, f1, f31
	fmuls    f1, f4, f4
	fmadds   f2, f3, f3, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8018DDF0
	ble      lbl_8018DDF4
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8018DDF4

lbl_8018DDF0:
	fmr      f2, f0

lbl_8018DDF4:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8018DE20
	lfs      f0, lbl_80518DE4@sda21(r2)
	lfs      f1, lbl_80518E50@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f0, f1, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	stfs     f3, 0x200(r29)
	stfs     f4, 0x208(r29)

lbl_8018DE20:
	li       r0, 1
	mr       r3, r29
	sth      r0, 0x14(r28)
	li       r4, 9
	li       r5, 9
	li       r6, 0
	lwz      r12, 0(r29)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_8018DF00

lbl_8018DE50:
	cmplwi   r0, 1
	bne      lbl_8018DE8C
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_80518E3C@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518E04@sda21(r2)
	fmuls    f1, f2, f1
	lfs      f2, 0x1fc(r29)
	fdivs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x1fc(r29)
	lfs      f1, 0x1fc(r29)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r29)
	b        lbl_8018DF00

lbl_8018DE8C:
	cmplwi   r0, 2
	bne      lbl_8018DF00
	lfs      f2, lbl_80518DE0@sda21(r2)
	stfs     f2, 0x1e4(r29)
	stfs     f2, 0x1e8(r29)
	stfs     f2, 0x1ec(r29)
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x10(r28)
	lfs      f0, 0x54(r5)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r28)
	lfs      f0, 0x10(r28)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8018DF00
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       invokeAI__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018DF00
	lwz      r3, 0x294(r29)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_8018DF00:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	psq_l    f27, 216(r1), 0, qr0
	lfd      f27, 0xd0(r1)
	psq_l    f26, 200(r1), 0, qr0
	lfd      f26, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0x124(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/**
 * @note Address: 0x8018DF50
 * @note Size: 0x38
 */
void PikiHipDropState::cleanup(Piki* piki)
{
	piki->mEffectsObj->killBlackDown_();
	piki->mUpdateContext.mDoForceActive = false;
}

/**
 * @note Address: 0x8018DF88
 * @note Size: 0x4
 */
void PikiHipDropState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&) { }

/**
 * @note Address: 0x8018DF8C
 * @note Size: 0x2C
 */
void PikiHipDropState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	if (mSubState != 2) {
		dosin(piki);
	}
}

/**
 * @note Address: 0x8018DFB8
 * @note Size: 0x2E0
 */
void PikiHipDropState::collisionCallback(Piki* piki, CollEvent& collEvent)
{
	if (!collEvent.mCollidingCreature->isPiki()) {
		Vector3f position = piki->getPosition();
		efx::createSimpleBlackDrop(position);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);
		cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);

		if (!collEvent.mCollidingCreature->isTeki()) {
			piki->startSound(PSSE_PK_SE_DOSUN, false);
		}

		if (collEvent.mCollidingCreature->isTeki()) {
			InteractHipdrop hipdrop(piki, piki->getParms()->mPikiParms.mPoundDamage.mValue, collEvent.mCollisionObj);
			bool check        = false;
			Vector3f velocity = piki->getVelocity();
			if (velocity.y < 0.0f) {
				check = collEvent.mCollidingCreature->stimulate(hipdrop);
				earthquake(piki);
			}

			InteractPress press(piki, 10.0f, collEvent.mCollisionObj);
			Vector3f velocity2 = piki->getVelocity();
			if (velocity2.y < 0.0f) {
				check = collEvent.mCollidingCreature->stimulate(press);
			}

			piki->startSound(PSSE_PK_SE_DOSUN_HIT, false);
			if (!check && collEvent.mCollisionObj != nullptr && collEvent.mCollisionObj->isStickable()
			    && collEvent.mCollidingCreature->isLivingThing()) {
				piki->startStick(collEvent.mCollidingCreature, collEvent.mCollisionObj);
				piki->startSound(collEvent.mCollidingCreature, PSSE_PK_SE_ATTACH, true);
			}
		}

		if (piki->getStateID() == PIKISTATE_HipDrop) {
			transit(piki, PIKISTATE_Walk, nullptr);
			if (!piki->invokeAI(&collEvent, true)) {
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		}
	}
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r5
	stw      r30, 0x68(r1)
	mr       r30, r4
	stw      r29, 0x64(r1)
	mr       r29, r3
	stw      r28, 0x60(r1)
	lwz      r3, 0(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018E278
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	addi     r3, r1, 0x4c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	bl       "createSimpleBlackDrop__3efxFR10Vector3<f>"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x4c
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x4c
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018E090
	mr       r3, r30
	li       r4, 0x284e
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_8018E090
	b        lbl_8018E278

lbl_8018E090:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018E220
	lwz      r7, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game14InteractAttack@ha
	lis      r3, __vt__Q24Game15InteractHipdrop@ha
	lwz      r8, 4(r31)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	lfs      f0, 0x1218(r7)
	addi     r5, r4, __vt__Q24Game14InteractAttack@l
	addi     r0, r3, __vt__Q24Game15InteractHipdrop@l
	mr       r4, r30
	stw      r6, 0x3c(r1)
	addi     r3, r1, 0x14
	li       r28, 0
	stw      r5, 0x3c(r1)
	stw      r30, 0x40(r1)
	stfs     f0, 0x44(r1)
	stw      r8, 0x48(r1)
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8018E140
	lwz      r3, 0(r31)
	addi     r4, r1, 0x3c
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r29
	mr       r28, r0
	mr       r4, r30
	bl       earthquake__Q24Game16PikiHipDropStateFPQ24Game4Piki

lbl_8018E140:
	lwz      r5, 4(r31)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_80518DCC@sda21(r2)
	lis      r3, __vt__Q24Game13InteractPress@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q24Game13InteractPress@l
	mr       r4, r30
	stw      r30, 0x30(r1)
	addi     r3, r1, 8
	stw      r0, 0x2c(r1)
	stfs     f0, 0x34(r1)
	stw      r5, 0x38(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8018E1B0
	lwz      r3, 0(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r28, r3

lbl_8018E1B0:
	mr       r3, r30
	li       r4, 0x287c
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb
	clrlwi.  r0, r28, 0x18
	bne      lbl_8018E220
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_8018E220
	bl       isStickable__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018E220
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018E220
	lwz      r4, 0(r31)
	mr       r3, r30
	lwz      r5, 4(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r4, 0(r31)
	mr       r3, r30
	li       r5, 0x2805
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb

lbl_8018E220:
	mr       r3, r30
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0x12
	bne      lbl_8018E278
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	li       r5, 1
	bl       invokeAI__Q24Game4PikiFPQ24Game9CollEventb
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018E278
	lwz      r3, 0x294(r30)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_8018E278:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x8018E298
 * @note Size: 0x2C
 */
void PikiHipDropState::platCallback(Piki* piki, Game::PlatEvent&)
{
	if (mSubState != 2) {
		dosin(piki);
	}
}

/**
 * @note Address: 0x8018E2C4
 * @note Size: 0xBC
 */
void PikiHipDropState::dosin(Piki* piki)
{
	Vector3f position = piki->getPosition();
	efx::createSimpleBlackDrop(position);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);
	cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
	piki->startSound(PSSE_PK_SE_DOSUN, false);
	mSubState  = 2;
	mWaitTimer = 0.3f;
	earthquake(piki);
}

/**
 * @note Address: 0x8018E380
 * @note Size: 0x108
 */
void PikiHipDropState::earthquake(Piki* piki)
{
	Vector3f position = piki->getPosition();
	f32 rad           = pikiMgr->mParms->mPikiParms.mPoundAOERange.mValue;
	Sys::Sphere sphere(position, rad);
	CellIteratorArg iterArg(sphere);
	iterArg.mUseCustomRadius = 1;

	CellIterator iterator(iterArg);
	iterator.first();

	while (!iterator.isDone()) {
		Creature* creature = static_cast<Creature*>(*iterator);
		InteractEarthquake earthquake(piki, 1.0f);
		creature->stimulate(earthquake);
		iterator.next();
	}
}

/**
 * @note Address: 0x8018E488
 * @note Size: 0x88
 */
void PikiFallMeckState::init(Piki* piki, StateArg* stateArg)
{
	FallMeckStateArg* fallArg = static_cast<FallMeckStateArg*>(stateArg);
	piki->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	piki->endStick();
	if (fallArg) {
		mDoAutoPluck = fallArg->mDoAutoPluck;
	} else {
		mDoAutoPluck = false;
	}
}

/**
 * @note Address: 0x8018E510
 * @note Size: 0x38
 */
void PikiFallMeckState::exec(Piki* piki)
{
	if (piki->mFakePikiBounceTriangle) {
		bounceCallback(piki, piki->mFakePikiBounceTriangle);
	}
}

/**
 * @note Address: 0x8018E548
 * @note Size: 0x4
 */
void PikiFallMeckState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x8018E54C
 * @note Size: 0x4
 */
void PikiFallMeckState::collisionCallback(Piki* piki, Game::CollEvent&) { }

/**
 * @note Address: 0x8018E550
 * @note Size: 0x34
 */
void PikiFallMeckState::platCallback(Piki* piki, PlatEvent& platEvent) { transit(piki, PIKISTATE_Walk, nullptr); }

/**
 * @note Address: N/A
 * @note Size: 0x284
 */
bool PikiFallMeckState::becomePikihead(Piki* piki)
{
	bool check;
	if (GameStat::mePikis >= 99) {
		return false;
	} else {
		PikiMgr::mBirthMode        = PikiMgr::PSM_Force;
		ItemPikihead::Item* sprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
		PikiMgr::mBirthMode        = PikiMgr::PSM_Normal;

		Vector3f pikiPos = piki->getPosition();
		pikiPos.y        = mapMgr->getMinY(pikiPos);
		if (sprout) {
			if (piki->inWater()) {
				efx::TEnemyDive fxDive;
				efx::ArgScale fxArg(pikiPos, 1.2f);

				fxDive.create(&fxArg);
			} else {
				efx::createSimplePkAp(pikiPos);
				piki->startSound(PSSE_PK_SE_ONY_SEED_GROUND, true);
			}

			ItemPikihead::InitArg initArg((EPikiKind)piki->mPikiKind, Vector3f::zero, 1, 0, -1.0f);

			if (mDoAutoPluck) {
				initArg.mAutopluckTimer = 10.0f + 3.0f * sys->mDeltaTime;
			}
			sprout->init(&initArg);
			sprout->setPosition(pikiPos, false);

			CreatureKillArg killArg(CKILL_DontCountAsDeath);

			piki->kill(&killArg);

			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8018E584
 * @note Size: 0x54C
 */
void PikiFallMeckState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	bool check;
	if (mDoAutoPluck && triangle && ItemPikihead::mgr) {
		if (becomePikihead(piki)) {
			return;
		}
	} else if (triangle && !triangle->mCode.isBald() && piki->might_bury() && ItemPikihead::mgr) {
		if (becomePikihead(piki)) {
			return;
		}
	}

	transit(piki, PIKISTATE_Walk, nullptr);

	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stw      r31, 0xfc(r1)
	stw      r30, 0xf8(r1)
	mr       r30, r4
	stw      r29, 0xf4(r1)
	mr       r29, r3
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_8018E814
	cmplwi   r5, 0
	beq      lbl_8018E814
	lwz      r0, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8018E814
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x63
	blt      lbl_8018E5E8
	li       r0, 0
	b        lbl_8018E808

lbl_8018E5E8:
	li       r0, 1
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r31, r3
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	mr       r4, r30
	addi     r3, r1, 0x68
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x68(r1)
	addi     r4, r1, 0x4c
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	stfs     f2, 0x4c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	stfs     f1, 0x50(r1)
	beq      lbl_8018E804
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018E720
	lwz      r3, 0x4c(r1)
	lis      r5, __vt__Q23efx5TBase@ha
	lwz      r4, 0x50(r1)
	addi     r10, r5, __vt__Q23efx5TBase@l
	lwz      r0, 0x54(r1)
	lis      r6, __vt__Q23efx8TSimple2@ha
	stw      r3, 0x74(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r5, r3, __vt__Q23efx3Arg@l
	lfs      f0, lbl_80518E28@sda21(r2)
	li       r7, 0
	stw      r4, 0x78(r1)
	lfs      f3, 0x74(r1)
	lis      r4, __vt__Q23efx10TEnemyDive@ha
	stw      r0, 0x7c(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lfs      f2, 0x78(r1)
	li       r9, 0x159
	lfs      f1, 0x7c(r1)
	li       r8, 0x15a
	stw      r10, 0x58(r1)
	addi     r10, r6, __vt__Q23efx8TSimple2@l
	addi     r6, r4, __vt__Q23efx10TEnemyDive@l
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	stw      r10, 0x58(r1)
	addi     r3, r1, 0x58
	addi     r4, r1, 0xb4
	stw      r5, 0xb4(r1)
	sth      r9, 0x5c(r1)
	sth      r8, 0x5e(r1)
	stw      r7, 0x60(r1)
	stw      r7, 0x64(r1)
	stw      r6, 0x58(r1)
	stfs     f3, 0xb8(r1)
	stfs     f2, 0xbc(r1)
	stfs     f1, 0xc0(r1)
	stw      r0, 0xb4(r1)
	stfs     f0, 0xc4(r1)
	bl       create__Q23efx10TEnemyDiveFPQ23efx3Arg
	b        lbl_8018E738

lbl_8018E720:
	addi     r3, r1, 0x4c
	bl       "createSimplePkAp__3efxFR10Vector3<f>"
	mr       r3, r30
	li       r4, 0x2817
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb

lbl_8018E738:
	lbz      r7, 0x2b8(r30)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	addi     r0, r3, __vt__Q24Game15CreatureInitArg@l
	lis      r5, __vt__Q24Game11ItemInitArg@ha
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0xc8(r1)
	addi     r4, r3, "zero__10Vector3<f>"@l
	addi     r6, r5, __vt__Q24Game11ItemInitArg@l
	lfs      f3, 0(r4)
	lis      r5, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f2, 4(r4)
	li       r3, 1
	lfs      f1, 8(r4)
	li       r0, 0
	lfs      f0, lbl_80518DE8@sda21(r2)
	addi     r4, r5, __vt__Q34Game12ItemPikihead7InitArg@l
	stw      r6, 0xc8(r1)
	stw      r4, 0xc8(r1)
	stw      r7, 0xcc(r1)
	stfs     f3, 0xd0(r1)
	stfs     f2, 0xd4(r1)
	stfs     f1, 0xd8(r1)
	stb      r3, 0xdc(r1)
	stw      r0, 0xe0(r1)
	stfs     f0, 0xe4(r1)
	lbz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_8018E7C0
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_80518DD0@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518DCC@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xe4(r1)

lbl_8018E7C0:
	mr       r3, r31
	addi     r4, r1, 0xc8
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	addi     r4, r1, 0x4c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lis      r3, __vt__Q24Game15CreatureKillArg@ha
	li       r0, 1
	addi     r5, r3, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0x14(r1)
	mr       r3, r30
	addi     r4, r1, 0x10
	stw      r5, 0x10(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r0, 1
	b        lbl_8018E808

lbl_8018E804:
	li       r0, 0

lbl_8018E808:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8018EA94
	b        lbl_8018EAB4

lbl_8018E814:
	cmplwi   r5, 0
	beq      lbl_8018EA94
	addi     r3, r5, 0x5c
	bl       isBald__Q27MapCode4CodeFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018EA94
	mr       r3, r30
	bl       might_bury__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018EA94
	lwz      r0, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8018EA94
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x63
	blt      lbl_8018E86C
	li       r0, 0
	b        lbl_8018EA8C

lbl_8018E86C:
	li       r0, 1
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r31, r3
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	mr       r4, r30
	addi     r3, r1, 0x34
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x34(r1)
	addi     r4, r1, 0x18
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	stfs     f2, 0x18(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	stfs     f1, 0x1c(r1)
	beq      lbl_8018EA88
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018E9A4
	lwz      r3, 0x18(r1)
	lis      r5, __vt__Q23efx5TBase@ha
	lwz      r4, 0x1c(r1)
	addi     r10, r5, __vt__Q23efx5TBase@l
	lwz      r0, 0x20(r1)
	lis      r6, __vt__Q23efx8TSimple2@ha
	stw      r3, 0x40(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r5, r3, __vt__Q23efx3Arg@l
	lfs      f0, lbl_80518E28@sda21(r2)
	li       r7, 0
	stw      r4, 0x44(r1)
	lfs      f3, 0x40(r1)
	lis      r4, __vt__Q23efx10TEnemyDive@ha
	stw      r0, 0x48(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lfs      f2, 0x44(r1)
	li       r9, 0x159
	lfs      f1, 0x48(r1)
	li       r8, 0x15a
	stw      r10, 0x24(r1)
	addi     r10, r6, __vt__Q23efx8TSimple2@l
	addi     r6, r4, __vt__Q23efx10TEnemyDive@l
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	stw      r10, 0x24(r1)
	addi     r3, r1, 0x24
	addi     r4, r1, 0x80
	stw      r5, 0x80(r1)
	sth      r9, 0x28(r1)
	sth      r8, 0x2a(r1)
	stw      r7, 0x2c(r1)
	stw      r7, 0x30(r1)
	stw      r6, 0x24(r1)
	stfs     f3, 0x84(r1)
	stfs     f2, 0x88(r1)
	stfs     f1, 0x8c(r1)
	stw      r0, 0x80(r1)
	stfs     f0, 0x90(r1)
	bl       create__Q23efx10TEnemyDiveFPQ23efx3Arg
	b        lbl_8018E9BC

lbl_8018E9A4:
	addi     r3, r1, 0x18
	bl       "createSimplePkAp__3efxFR10Vector3<f>"
	mr       r3, r30
	li       r4, 0x2817
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb

lbl_8018E9BC:
	lbz      r7, 0x2b8(r30)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	addi     r0, r3, __vt__Q24Game15CreatureInitArg@l
	lis      r5, __vt__Q24Game11ItemInitArg@ha
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x94(r1)
	addi     r4, r3, "zero__10Vector3<f>"@l
	addi     r6, r5, __vt__Q24Game11ItemInitArg@l
	lfs      f3, 0(r4)
	lis      r5, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f2, 4(r4)
	li       r3, 1
	lfs      f1, 8(r4)
	li       r0, 0
	lfs      f0, lbl_80518DE8@sda21(r2)
	addi     r4, r5, __vt__Q34Game12ItemPikihead7InitArg@l
	stw      r6, 0x94(r1)
	stw      r4, 0x94(r1)
	stw      r7, 0x98(r1)
	stfs     f3, 0x9c(r1)
	stfs     f2, 0xa0(r1)
	stfs     f1, 0xa4(r1)
	stb      r3, 0xa8(r1)
	stw      r0, 0xac(r1)
	stfs     f0, 0xb0(r1)
	lbz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_8018EA44
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_80518DD0@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518DCC@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xb0(r1)

lbl_8018EA44:
	mr       r3, r31
	addi     r4, r1, 0x94
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	addi     r4, r1, 0x18
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lis      r3, __vt__Q24Game15CreatureKillArg@ha
	li       r0, 1
	addi     r5, r3, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0xc(r1)
	mr       r3, r30
	addi     r4, r1, 8
	stw      r5, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r0, 1
	b        lbl_8018EA8C

lbl_8018EA88:
	li       r0, 0

lbl_8018EA8C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8018EAB4

lbl_8018EA94:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018EAB4:
	lwz      r0, 0x104(r1)
	lwz      r31, 0xfc(r1)
	lwz      r30, 0xf8(r1)
	lwz      r29, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x8018EAD0
 * @note Size: 0xA0
 */
void PikiSuikomiState::init(Piki* piki, StateArg* stateArg)
{
	SuikomiStateArg* suikomiArg = static_cast<SuikomiStateArg*>(stateArg);
	P2ASSERTLINE(2572, suikomiArg != nullptr);
	mCreature        = suikomiArg->mCreature;
	mCollpart        = suikomiArg->mCollpart;
	mStomachCollpart = suikomiArg->mStomachCollpart;
	mState           = 0;
	piki->setMoveVelocity(false);
	piki->endStick();
}

/**
 * @note Address: 0x8018EB70
 * @note Size: 0xEC
 */
void PikiSuikomiState::exec(Piki* piki)
{
	if (!mCreature->isAlive()) {
		piki->mScale = Vector3f(piki->getBaseScale());
		piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
		transit(piki, PIKISTATE_Walk, nullptr);
		return;
	}

	if (mState == 0) {
		execMouth(piki);
	} else if (mState == 1) {
		execString(piki);
	} else {
		execStomach(piki);
	}
}

/**
 * @note Address: 0x8018EC5C
 * @note Size: 0x1FC
 */
void PikiSuikomiState::execMouth(Piki* piki)
{
	Vector3f position;
	if (mCollpart == nullptr) {
		position = mStomachCollpart->mPosition;
		position.y -= mStomachCollpart->mRadius;

	} else {
		Sys::Tube tube;
		mCollpart->getTube(tube);
		position = tube.mStartPos;
	}

	Vector3f pikiPos = piki->getPosition();
	Vector3f diff    = position - pikiPos;
	f32 length       = _normalise2(diff);

	if (length < 10.0f) {
		if (mCollpart == nullptr) {
			piki->setMoveVelocity(true);
			piki->startCaptureStomach(mStomachCollpart);
			mState = 2;
			piki->startMotion(IPikiAnims::ESA, IPikiAnims::ESA, piki, nullptr);
			mTimer = pikiMgr->mParms->mPikiParms.mKurageKillTime.mValue;
		} else {
			piki->startStick(mCreature, mCollpart);
			piki->setMoveVelocity(true);
			mState = 1;
		}

	} else {
		piki->mVelocity = diff * 600.0f;
	}
}

/**
 * @note Address: 0x8018EE58
 * @note Size: 0x38
 */
void PikiSuikomiState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_LOOP_START) {
		piki->startSound(PSSE_PK_VC_SWALLOWED, PSGame::SeMgr::SETSE_PikiInJellyfloat);
	}
}

/**
 * @note Address: 0x8018EE90
 * @note Size: 0x108
 */
void PikiSuikomiState::execString(Piki* piki)
{
	Sys::Tube tube;
	mCollpart->getTube(tube);
	Vector3f axisVec;
	tube.getAxisVector(axisVec);
	axisVec *= 350.0f;

	piki->mVelocity = axisVec;
	piki->move(sys->mDeltaTime);

	if (piki->mClimbingPosition.y >= 1.0f) {
		piki->endStick();
		piki->startCaptureStomach(mStomachCollpart);
		mState = 2;
		piki->startMotion(IPikiAnims::ESA, IPikiAnims::ESA, nullptr, nullptr);
		mTimer = pikiMgr->mParms->mPikiParms.mKurageKillTime.mValue;
	}
}

/**
 * @note Address: 0x8018EF98
 * @note Size: 0x14
 */
bool PikiSuikomiState::ignoreAtari(Piki* piki, Creature* creature) { return (u8)(mCreature == creature); }

/**
 * @note Address: 0x8018EFAC
 * @note Size: 0x1C0
 */
void PikiSuikomiState::execStomach(Piki* piki)
{
	if (mCreature) {
		if (mCreature->mObjectTypeID != OBJTYPE_Teki) {
			JUT_PANICLINE(2680, "not teki (%s)!", mCreature->getCreatureName());
		}

		EnemyBase* enemy = static_cast<EnemyBase*>(mCreature);
		if (!enemy->isEvent(0, EB_Bittered) && !(enemy->mHealth <= 0.0f)) {
			mTimer -= sys->mDeltaTime;
		}
	}

	if (mState == 3) {
		f32 scale = mTimer / 0.5f;
		scale *= piki->getBaseScale();
		piki->mScale = Vector3f(scale);
		if (mTimer <= 0.0f) {
			if (piki->isPikmin()) {
				deathMgr->inc(DeathCounter::COD_Battle);
			}

			piki->kill(nullptr);
		}

	} else if (piki->mTargetCollObj == nullptr) {
		Vector3f vec = Vector3f(0.0f, -900.0f, 0.0f);
		BlowStateArg blowArg(vec, 0.0f, 0, 10, mCreature);
		transit(piki, PIKISTATE_Blow, &blowArg);

	} else if (mTimer <= 0.0f) {
		mState = 3;
		mTimer = 0.5f;
	}
}

/**
 * @note Address: 0x8018F16C
 * @note Size: 0x48
 */
void PikiSuikomiState::cleanup(Piki* piki)
{
	piki->endCaptureStomach();
	piki->setMoveVelocity(true);
}

/**
 * @note Address: 0x8018F1B4
 * @note Size: 0x4
 */
void PikiFlyingState::stopEffect() { }

/**
 * @note Address: 0x8018F1B8
 * @note Size: 0x4
 */
void PikiFlyingState::restartEffect() { }

/**
 * @note Address: 0x8018F1BC
 * @note Size: 0x124
 */
void PikiFlyingState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::ROLLJUMP, IPikiAnims::ROLLJUMP, nullptr, nullptr);

	Navi* navi = piki->mNavi;
	if (navi) {
		if (piki->getKind() == Bulbmin) {
			navi->mSoundObj->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
		} else {
			navi->mSoundObj->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
		}
	}

	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_THROWN, 90, 0);

	mIsFlowerPiki = 0;
	mFrameCounter = 0;
	mUnusedVal    = 0;
	piki->setMoveVelocity(false);

	efx::TPkEffect* effectsObj = piki->mEffectsObj;
	effectsObj->createNage_(effectsObj->mHamonPosPtr, effectsObj->mBaseObjMatrix->mMatrix.mtxView);
	piki->mUpdateContext.mDoForceActive = true;
	if (PikiMgr::throwPikiDebug) {
		piki->setDebugCollision(true);
	}
}

/**
 * @note Address: 0x8018F2E0
 * @note Size: 0x74
 */
void PikiFlyingState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	transit(piki, PIKISTATE_Walk, nullptr);
	if (!piki->invokeAI()) {
		piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	}

	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_LAND, 90, 0);
}

/**
 * @note Address: 0x8018F354
 * @note Size: 0x328
 */
void PikiFlyingState::collisionCallback(Piki* piki, CollEvent& event)
{
	Creature* creature = event.mCollidingCreature;
	if (event.mCollisionObj) {
		event.mCollisionObj->isStickable();
	}

	piki->ignoreAtari(event.mCollidingCreature);

	if (creature->isTeki() && creature->isAlive()) {
		bool pressCheck = false;

		Vector3f pikiVel = piki->getVelocity();
		if (pikiVel.y < 0.0f) {
			InteractPress press(piki, 10.0f, event.mCollisionObj);
			pressCheck = event.mCollidingCreature->stimulate(press);
		}

		if (!pressCheck) {
			InteractFlyCollision flyCol(piki, 10.0f, event.mCollisionObj);
			pressCheck = event.mCollidingCreature->stimulate(flyCol);
		}

		if (!pressCheck) {
			if (event.mCollisionObj && event.mCollisionObj->isStickable() && creature->isLivingThing()) {
				piki->startStick(event.mCollidingCreature, event.mCollisionObj);
				piki->startSound(event.mCollidingCreature, PSSE_PK_SE_ATTACH, true);
			} else {
				Vector3f pikiPos = piki->getPosition();
				efx::createSimpleInstick(pikiPos);
			}
		}
	}

	if (creature->mObjectTypeID == OBJTYPE_Plant && event.mCollisionObj && event.mCollisionObj->mCurrentID.match('tops', '*')) {
		piki->startStick(event.mCollidingCreature, event.mCollisionObj);
		piki->startSound(event.mCollidingCreature, PSSE_PK_SE_ATTACH, true);

		transit(piki, PIKISTATE_Walk, nullptr);

		PikiAI::ActCropArg cropArg;
		cropArg.mCreature = creature;

		piki->mBrain->start(PikiAI::ACT_Crop, &cropArg);

	} else if (piki->getStateID() == PIKISTATE_Flying && creature->isCollisionFlick()) {
		transit(piki, PIKISTATE_Walk, nullptr);
		if (!piki->invokeAI(&event, true)) {
			piki->mBrain->start(PikiAI::ACT_Free, nullptr);
		}

		// uh-huh.
		if (piki->mBrain->getCurrAction()) {
			piki->mBrain->getCurrAction();
		}
	}
}

/**
 * @note Address: 0x8018F67C
 * @note Size: 0x6C
 */
bool PikiFlyingState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018F6E8
 * @note Size: 0x3CC
 */
void PikiFlyingState::exec(Piki* piki)
{
	if (mFrameCounter++ >= 240) {
		bounceCallback(piki, nullptr);
		return;
	}

	if (piki->getKind() == Purple && piki->mVelocity.y <= 0.0f) {
		transit(piki, PIKISTATE_HipDrop, nullptr);
		return;
	}

	f32 gravityFactor = 0.8f * _aiConstants->mGravity.mData; // f30
	f32 flowerFallFactor
	    = _aiConstants->mGravity.mData * static_cast<PikiParms*>(piki->mParms)->mPikiParms.mFlowerPikiGravity.mValue; // f29

	f32 fallDiff   = gravityFactor - flowerFallFactor;
	f32 fallFactor = (gravityFactor * 0.15f - 0.075f * fallDiff) - flowerFallFactor * 0.15f; // f28

	if (mIsFlowerPiki == 0 && piki->getHappa() == Flower && piki->mVelocity.y <= 0.0f) {
		mIsFlowerPiki = 1;
		piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, nullptr, nullptr);

		f32 throwHeight;
		if (piki->getKind() == Yellow) {
			throwHeight = naviMgr->mNaviParms->mNaviParms.mThrowHeightYellow.mValue;
		} else {
			throwHeight = naviMgr->mNaviParms->mNaviParms.mThrowHeightMax.mValue;
		}

		f32 sqrVal = fallFactor * fallFactor + (2.0f * throwHeight) * flowerFallFactor;
		sqrVal     = _sqrtf(sqrVal);

		mVelocityDirection.x = piki->mVelocity.x;
		mVelocityDirection.y = 0.0f;
		mVelocityDirection.z = piki->mVelocity.z;

		mVelocityDirection.normalise();

		f32 xSpeed            = piki->mVelocity.x * piki->mVelocity.x;
		f32 zSpeed            = piki->mVelocity.z * piki->mVelocity.z;
		f32 totalXZSpeed      = xSpeed + zSpeed;
		totalXZSpeed          = _sqrtf(totalXZSpeed);
		mDirectionalSpeed     = totalXZSpeed;
		mHalfDirectionalSpeed = 0.5f * totalXZSpeed;

		piki->mVelocity.y       = 0.0f;
		piki->mTargetVelocity.x = piki->mVelocity.x;
		piki->mTargetVelocity.z = piki->mVelocity.z;
		piki->mTargetVelocity   = 0.0f;
		mSlowFallWaitTimer      = 0.0f;
	} else if (mIsFlowerPiki) {
		piki->mFaceDir = roundAng(piki->mFaceDir + PI * sys->mDeltaTime / 0.42f);
		mSlowFallWaitTimer += sys->mDeltaTime;

		if (mSlowFallWaitTimer < randFloat() - 0.5f) {
			piki->mVelocity += sys->mDeltaTime;
		}
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stfd     f28, 0x20(r1)
	psq_st   f28, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r5, 0x30(r3)
	addi     r0, r5, 1
	cmpwi    r0, 0xf0
	stw      r0, 0x30(r3)
	blt      lbl_8018F750
	lwz      r12, 0(r3)
	li       r5, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8018FA7C

lbl_8018F750:
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 3
	bne      lbl_8018F78C
	lfs      f1, 0x204(r31)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8018F78C
	lwz      r12, 0(r3)
	li       r5, 0x12
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018FA7C

lbl_8018F78C:
	lwz      r4, _aiConstants__4Game@sda21(r13)
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x28(r4)
	lfs      f1, lbl_80518E74@sda21(r2)
	lfs      f0, 0xbb0(r3)
	fmuls    f30, f1, f2
	lbz      r3, 0x14(r30)
	fmuls    f29, f2, f0
	lfs      f0, lbl_80518E7C@sda21(r2)
	lfs      f1, lbl_80518E78@sda21(r2)
	cmplwi   r3, 0
	fsubs    f31, f30, f29
	fmuls    f0, f0, f31
	fmsubs   f0, f30, f1, f0
	fnmsubs  f28, f29, f1, f0
	bne      lbl_8018F9B4
	lbz      r0, 0x2b9(r31)
	cmpwi    r0, 2
	bne      lbl_8018F9B4
	lfs      f1, 0x204(r31)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8018F9B4
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x14(r30)
	li       r4, 0x24
	li       r5, 0x24
	li       r6, 0
	lwz      r12, 0(r31)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r31)
	lfs      f1, lbl_80518E30@sda21(r2)
	cmpwi    r0, 2
	bne      lbl_8018F838
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f0, 0x5c0(r3)
	b        lbl_8018F844

lbl_8018F838:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f0, 0x570(r3)

lbl_8018F844:
	fmuls    f1, f1, f0
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmuls    f1, f1, f29
	fmadds   f2, f28, f28, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8018F86C
	ble      lbl_8018F870
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8018F870

lbl_8018F86C:
	fmr      f2, f0

lbl_8018F870:
	fneg     f1, f28
	lwz      r3, naviMgr__4Game@sda21(r13)
	lfs      f0, 0x200(r31)
	lwz      r3, 0xc8(r3)
	fadds    f1, f1, f2
	lfs      f5, lbl_80518DF4@sda21(r2)
	lfs      f4, 0x638(r3)
	lfs      f2, lbl_80518DE0@sda21(r2)
	fdivs    f3, f1, f29
	stfs     f0, 0x1c(r30)
	stfs     f2, 0x20(r30)
	lfs      f0, 0x208(r31)
	stfs     f0, 0x24(r30)
	lfs      f6, 0x1c(r30)
	fmuls    f0, f5, f4
	lfs      f4, 0x20(r30)
	lfs      f5, 0x24(r30)
	fmuls    f1, f6, f6
	fmuls    f4, f4, f4
	fdivs    f0, f0, f3
	fmuls    f3, f5, f5
	fadds    f1, f1, f4
	fadds    f1, f3, f1
	fcmpo    cr0, f1, f2
	ble      lbl_8018F8F0
	fmadds   f1, f6, f6, f4
	fadds    f3, f3, f1
	fcmpo    cr0, f3, f2
	ble      lbl_8018F8F4
	frsqrte  f1, f3
	fmuls    f3, f1, f3
	b        lbl_8018F8F4

lbl_8018F8F0:
	fmr      f3, f2

lbl_8018F8F4:
	lfs      f1, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_8018F92C
	lfs      f2, lbl_80518DE4@sda21(r2)
	lfs      f1, 0x1c(r30)
	fdivs    f2, f2, f3
	fmuls    f1, f1, f2
	stfs     f1, 0x1c(r30)
	lfs      f1, 0x20(r30)
	fmuls    f1, f1, f2
	stfs     f1, 0x20(r30)
	lfs      f1, 0x24(r30)
	fmuls    f1, f1, f2
	stfs     f1, 0x24(r30)

lbl_8018F92C:
	lfs      f4, 0x200(r31)
	lfs      f3, 0x208(r31)
	fmuls    f2, f4, f4
	lfs      f1, lbl_80518DE0@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f2, f2, f3
	fcmpo    cr0, f2, f1
	ble      lbl_8018F964
	fmadds   f2, f4, f4, f3
	fcmpo    cr0, f2, f1
	ble      lbl_8018F968
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_8018F968

lbl_8018F964:
	fmr      f2, f1

lbl_8018F968:
	lfs      f1, lbl_80518DF4@sda21(r2)
	stfs     f2, 0x28(r30)
	fmuls    f2, f1, f2
	lfs      f1, lbl_80518DE0@sda21(r2)
	stfs     f2, 0x2c(r30)
	lfs      f2, 0x200(r31)
	fmuls    f2, f2, f0
	stfs     f2, 0x200(r31)
	lfs      f2, 0x208(r31)
	fmuls    f0, f2, f0
	stfs     f0, 0x208(r31)
	lfs      f0, 0x200(r31)
	stfs     f0, 0x1e4(r31)
	lfs      f0, 0x208(r31)
	stfs     f0, 0x1ec(r31)
	stfs     f1, 0x204(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f1, 0x10(r30)
	b        lbl_8018FA7C

lbl_8018F9B4:
	cmplwi   r3, 0
	beq      lbl_8018FA7C
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_80518E3C@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518E80@sda21(r2)
	fmuls    f1, f2, f1
	lfs      f2, 0x1fc(r31)
	fdivs    f0, f1, f0
	fadds    f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_80518DC8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80518DF4@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_80518E5C@sda21(r2)
	lfs      f5, 0x10(r30)
	lfs      f0, lbl_80518E78@sda21(r2)
	fdivs    f3, f4, f3
	fsubs    f1, f3, f1
	fcmpo    cr0, f5, f0
	fmuls    f2, f2, f1
	bge      lbl_8018FA4C
	fdivs    f0, f31, f0
	fnmsubs  f4, f5, f0, f30
	b        lbl_8018FA50

lbl_8018FA4C:
	fmr      f4, f29

lbl_8018FA50:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f1, lbl_80518DE4@sda21(r2)
	lfs      f0, 0x28(r3)
	lwz      r3, sys@sda21(r13)
	fadds    f3, f1, f2
	fsubs    f2, f0, f4
	lfs      f0, 0x204(r31)
	lfs      f1, 0x54(r3)
	fmuls    f2, f3, f2
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x204(r31)

lbl_8018FA7C:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	psq_l    f28, 40(r1), 0, qr0
	lfd      f28, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x8018FAB4
 * @note Size: 0x68
 */
void PikiFlyingState::cleanup(Piki* piki)
{
	piki->mUpdateContext.mDoForceActive = false;
	piki->setMoveVelocity(true);
	piki->mEffectsObj->killNage_();
	piki->setDebugCollision(false);
}

/**
 * @note Address: 0x8018FB1C
 * @note Size: 0x170
 */
void PikiFlickState::init(Piki* piki, StateArg* stateArg)
{
	// ??
	JUT_PANICLINE(3057, "flick:init:erase\n");
	mState = FLICK_Start;

	FlickStateArg* flickArg = static_cast<FlickStateArg*>(stateArg);
	mKnockBackAngle         = flickArg->mAngle;
	mFaceDirOffset          = 0.1f * (PI * randFloat());
	piki->mVelocity.y       = 50.0f * randFloat() + 100.0f;
	f32 baseSpeed           = flickArg->mSpeed;
	mKnockBackSpeed         = (0.1f * baseSpeed) * randFloat() + baseSpeed;

	piki->startMotion(IPikiAnims::JHIT, IPikiAnims::JHIT, this, nullptr);
	mPiki       = piki;
	mIsWhistled = false;
}

/**
 * @note Address: 0x8018FC8C
 * @note Size: 0x18
 */
void PikiFlickState::onFlute(Piki* piki, Navi* navi)
{
	mKnockDownTimer = 0.0f;
	mIsWhistled     = true;
	piki->mNavi     = navi;
}

/**
 * @note Address: 0x8018FCA4
 * @note Size: 0x208
 */
void PikiFlickState::exec(Piki* piki)
{
	// ???
	JUT_PANICLINE(3092, "flick:exec:erase\n");
	if (mState == FLICK_Start) { // yeet the piki.
		f32 speed         = mKnockBackSpeed;
		piki->mVelocity.x = -speed * sinf(mKnockBackAngle);
		piki->mVelocity.z = -speed * cosf(mKnockBackAngle);

		piki->mFaceDir = roundAng(piki->mFaceDir + mFaceDirOffset);
		return;
	}

	if (mState == FLICK_Land) { // piki has landed.
		mKnockDownTimer -= sys->mDeltaTime;
		if (mKnockDownTimer < 0.0f && piki->isAlive()) { // if knock down timer has expired + piki is alive (!), get up.
			piki->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, this, nullptr);
			mState = FLICK_Stand;
		}

		// Adjust simulation velocity?
		piki->mVelocity.x = 0.9f * piki->mVelocity.x;
		piki->mVelocity.z = 0.9f * piki->mVelocity.z;

		// set actual velocity to 0.
		piki->mTargetVelocity = Vector3f(0.0f);
		return;
	}

	// we're either flying through the air or standing up
	piki->mVelocity.x = 0.9f * piki->mVelocity.x;
	piki->mVelocity.z = 0.9f * piki->mVelocity.z;

	piki->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x8018FEAC
 * @note Size: 0x124
 */
void PikiFlickState::onKeyEvent(SysShape::KeyEvent const& event)
{
	Piki* piki = mPiki;
	switch (event.mType) {
	case KEYEVENT_END:
		if (mState == FLICK_Start) { // initial flick anim ends
			piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, this, nullptr);
			mState = FLICK_InAir;
			return;
		}

		if (mState == FLICK_InAir) { // thrown through air animation ends
			mState      = FLICK_Land;
			f32 minTime = static_cast<PikiParms*>(piki->mParms)->mPikiParms.mKnockdownRecoverTimeMin.mValue;
			f32 maxTime = static_cast<PikiParms*>(piki->mParms)->mPikiParms.mKnockdownRecoverTimeMax.mValue;

			mKnockDownTimer = (maxTime - minTime) * randFloat() + minTime;
			return;
		}

		// getup animation ends
		randFloat(); // something's gotten commented out here I assume
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x8018FFD0
 * @note Size: 0xAC
 */
void PikiFlickState::cleanup(Piki* piki)
{
	// if piki is alive and has been whistled by a captain, put them in the party!
	if (piki->isAlive() && mIsWhistled) {
		PikiAI::ActFormationInitArg initArg(piki->mNavi);
		initArg.mDoUseTouchCooldown = true;
		piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
	}
}

/**
 * @note Address: 0x8019007C
 * @note Size: 0x1A4
 */
void PikiBlowState::init(Piki* piki, StateArg* stateArg)
{
	BlowStateArg* blowArg = static_cast<BlowStateArg*>(stateArg);
	if (!blowArg) {
		JUT_PANICLINE(3223, "flick needs PikiBlowInitArg !\n");
	} else {
		mBlowDirection = blowArg->mBlowDirection;
		mChanceToLeaf  = blowArg->mChanceToLeaf;
		mIsLethal      = blowArg->mIsLethal;
		mFlags         = blowArg->mFlags;
		mHeldNavi      = blowArg->mHeldNavi;
	}

	mIsWhistled = false;
	piki->startMotion(IPikiAnims::JHIT, IPikiAnims::JHIT, piki, nullptr);
	mState = 0;

	piki->mVelocity.y = mBlowDirection.y * (0.1f * randFloat() + 1.0f);
	piki->mFaceDir    = roundAng(JMath::atanTable_.atan2_(mBlowDirection.x, mBlowDirection.z) + PI);

	if (mFlags & 0x4) {
		if (piki->getHappa() >= Bud) {
			efx::TPkEffect* effectObj = piki->mEffectsObj;
			efx::createSimpleChiru(*effectObj->mStemPosition, effectObj->mPikiColor);
			piki->startSound(PSSE_PK_FLOWER_FALL_VOICE, true);
			piki->mHappaKind = Leaf;
		}
	} else {
		piki->startSound(PSSE_PK_VC_SCATTERED, true);
	}

	if (piki->isStickTo()) {
		piki->endStick();
	}
}

/**
 * @note Address: 0x80190220
 * @note Size: 0x140
 */
void PikiBlowState::exec(Piki* piki)
{
	if (piki->isStickTo()) {
		piki->endStick();
	}

	switch (mState) {
	case BLOW_Start:
		piki->mVelocity.x = mBlowDirection.x;
		piki->mVelocity.z = mBlowDirection.z;
		if (!piki->assertMotion(IPikiAnims::JHIT)) {
			mState = BLOW_Knockback;
			piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, piki, nullptr);
		}
		break;
	case BLOW_Knockback:
		piki->mVelocity.x *= 0.9f;
		piki->mVelocity.z *= 0.9f;
		if (!piki->assertMotion(IPikiAnims::JKOKE)) {
			transit(piki, PIKISTATE_Walk, nullptr);
		} else if (piki->mFakePikiBounceTriangle) {
			bounceCallback(piki, piki->mFakePikiBounceTriangle);
		}
		break;
	}
}

/**
 * @note Address: 0x80190360
 * @note Size: 0x4
 */
void PikiBlowState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x80190364
 * @note Size: 0x64
 */
void PikiBlowState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_END && mState == BLOW_Start) {
		mState = BLOW_Knockback;
		piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, nullptr, nullptr);
	}
}

/**
 * @note Address: 0x801903C8
 * @note Size: 0x10
 */
void PikiBlowState::onFlute(Piki* piki, Navi* navi)
{
	mIsWhistled = true;
	piki->mNavi = navi;
}

/**
 * @note Address: 0x801903D8
 * @note Size: 0x168
 */
void PikiBlowState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	u16 flag = (mIsWhistled ? 0x8000 : 0) | mFlags;
	KokeDamageStateArg kokeArg(flag, 1.0f);
	if (randFloat() < mChanceToLeaf) {
		if (piki->getHappa() >= Bud) {
			efx::TPkEffect* effectsObj = piki->mEffectsObj;
			efx::createSimpleChiru(*effectsObj->mStemPosition, effectsObj->mPikiColor);
			piki->mHappaKind = Leaf;
		}

		if (mHeldNavi) {
			piki->startSound(mHeldNavi, PSSE_PK_VC_DAMAGED, true);
		}
	}

	if (mIsLethal) {
		piki->startSound(PSSE_PK_VC_PRESSED, true);
		if (piki->isPikmin()) {
			DeathMgr::inc(DeathCounter::COD_Explosion);
		}
		piki->kill(nullptr);
		transit(piki, PIKISTATE_Dead, nullptr);

	} else {
		transit(piki, PIKISTATE_KokeDamage, &kokeArg);
	}
}

/**
 * @note Address: 0x80190540
 * @note Size: 0x8C
 */
void PikiKokeDamageState::init(Piki* piki, StateArg* stateArg)
{
	KokeDamageStateArg* kokeArg = static_cast<KokeDamageStateArg*>(stateArg);
	if (!kokeArg) {
		mTimer = 0.0f;
		mFlags = 0;

	} else {
		mTimer = kokeArg->mTime;
		mFlags = kokeArg->mFlags;
	}

	piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, piki, nullptr);
	mState = KOKEDAMAGE_Start;
}

/**
 * @note Address: 0x801905CC
 * @note Size: 0x15C
 */
void PikiKokeDamageState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mVelocity       = Vector3f(0.0f);

	if (mState == KOKEDAMAGE_Unk1) {
		mTimer -= sys->mDeltaTime;
		if (mTimer <= 0.0f) {
			piki->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, piki, nullptr);
			mState = KOKEDAMAGE_Unk2;
		}
	}

	if (mState == 0 && !piki->assertMotion(IPikiAnims::JKOKE)) {
		mState = KOKEDAMAGE_Unk1;
		return;
	}

	if (mState == KOKEDAMAGE_Unk2 && !piki->assertMotion(IPikiAnims::GETUP)) {
		if (mFlags & 0x8) {
			EmotionStateArg emotionArg(5);
			transit(piki, PIKISTATE_Emotion, &emotionArg);
		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x80190728
 * @note Size: 0x1C
 */
void PikiKokeDamageState::onFlute(Piki* piki, Navi* navi)
{
	mFlags |= 0x8000;
	mTimer      = 0.0f;
	piki->mNavi = navi;
}

/**
 * @note Address: 0x80190744
 * @note Size: 0xE8
 */
void PikiKokeDamageState::cleanup(Piki* piki)
{
	if (piki->isAlive()) {
		if (mFlags & 0x8000) {
			PikiAI::ActFormationInitArg formArg(piki->mNavi);
			formArg.mDoUseTouchCooldown = true;
			piki->mBrain->start(PikiAI::ACT_Formation, &formArg);
		} else if (mFlags & 0x2) {
			if (piki->getKind() != Bulbmin) {
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		} else {
			piki->startSound(PSSE_PK_VC_ANGRY1, true);
		}
	}
}

/**
 * @note Address: 0x8019082C
 * @note Size: 0x60
 */
void PikiKokeDamageState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_END) {
		if (mState == KOKEDAMAGE_Start) {
			mState = KOKEDAMAGE_Unk1;
			return;
		}

		if (mState == KOKEDAMAGE_Unk2) {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x8019088C
 * @note Size: 0x120
 */
void PikiKokeState::init(Piki* piki, StateArg* stateArg)
{
	if (randFloat() < 0.99f) {
		piki->startMotion(IPikiAnims::KOROBU2, IPikiAnims::KOROBU2, piki, nullptr);
		mFallSoundType = true;
	} else {
		piki->startMotion(IPikiAnims::KOROBU, IPikiAnims::KOROBU, piki, nullptr);
		mFallSoundType = false;
	}

	mTimer = 4.0f * randFloat() + 3.0f;
}

/**
 * @note Address: 0x801909AC
 * @note Size: 0xC
 */
void PikiKokeState::onFlute(Piki* piki, Navi* navi) { mTimer = 0; }

/**
 * @note Address: 0x801909B8
 * @note Size: 0x94
 */
void PikiKokeState::exec(Piki* piki)
{
	int animIdx = piki->mAnimator.mSelfAnimator.getAnimIndex();

	if (animIdx != IPikiAnims::KOROBU && animIdx != IPikiAnims::KOROBU2) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}

	// *= doesnt work here
	piki->mTargetVelocity = piki->mTargetVelocity * 0.955f;
}

/**
 * @note Address: 0x80190A4C
 * @note Size: 0xF0
 */
void PikiKokeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_200:
		if (mFallSoundType) {
			piki->startSound(PSSE_PK_VC_SLIP1, true);
		} else {
			piki->startSound(PSSE_PK_VC_SLIP2, true);
		}
		break;

	case KEYEVENT_2:
		piki->mVelocity       = Vector3f(0.0f);
		piki->mTargetVelocity = Vector3f(0.0f);
		break;

	case KEYEVENT_LOOP_END:
		mTimer--;
		if (mTimer <= 0) {
			piki->mAnimator.mSelfAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
			piki->mAnimator.mBoundAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
		}
		break;

	case KEYEVENT_END:
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x80190B3C
 * @note Size: 0x4
 */
void PikiKokeState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x80190B40
 * @note Size: 0x200
 */
void PikiDrownState::init(Piki* piki, StateArg* stateArg)
{
	piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	piki->startMotion(IPikiAnims::TYAKUSUI, IPikiAnims::TYAKUSUI, piki, nullptr);

	if (piki->mAnimator.mSelfAnimator.getAnimIndex() == IPikiAnims::TYAKUSUI) {
		mSubState = 0;
	} else {
		mSubState = 1;
		piki->startMotion(IPikiAnims::OBORERU, IPikiAnims::OBORERU, piki, nullptr);
	}

	mSizumuAnimDelay      = randInt(2) + 6;
	piki->mTargetVelocity = Vector3f(0.0f);
	mUnusedVal            = 0;
	piki->mTargetVelocity = Vector3f(0.0f);

	if (piki->isStickTo()) {
		piki->endStick();
	}

	mNavi      = nullptr;
	mIsCalled  = false;
	mMoveState = 0;
	_18        = 0.0f;
	mIsEscaped = false;

	efx::TPkEffect* effectsObj = piki->mEffectsObj;
	effectsObj->killMoe_();
	if (effectsObj->isFlag(PKEFF_Fire)) {
		effectsObj->resetFlag(PKEFF_Fire);
		effectsObj->createMoeSmoke_(effectsObj->mStemPosition);
		effectsObj->mMoeSmokeTimer = 60;
		efx::createSimpleChinka(*effectsObj->mStemPosition);
	}

	efx::TPkEffect* effectsObj2 = piki->mEffectsObj;
	effectsObj2->killWater_();
	if (effectsObj2->isFlag(PKEFF_Water)) {
		effectsObj2->resetFlag(PKEFF_Water);
		efx::createSimpleWaterOff(*effectsObj2->mAltStemPosition);
	}

	efx::TPkEffect* effectsObj3 = piki->mEffectsObj;
	effectsObj3->killChudoku_();
	if (effectsObj3->isFlag(PKEFF_Gas)) {
		effectsObj3->resetFlag(PKEFF_Gas);
		efx::createSimpleGedoku(*effectsObj3->mStemPosition);
	}
}

/**
 * @note Address: 0x80190D40
 * @note Size: 0x40
 */
bool PikiDrownState::soft_transittable(int stateID)
{
	return stateID == PIKISTATE_Emotion || stateID == PIKISTATE_Pressed || stateID == PIKISTATE_WaterHanged;
}

/**
 * @note Address: 0x80190D80
 * @note Size: 0x10
 */
void PikiDrownState::onFlute(Piki* piki, Navi* navi)
{
	mNavi     = navi;
	mIsCalled = true;
}

/**
 * @note Address: 0x80190D90
 * @note Size: 0xC
 */
void PikiDrownState::outWaterCallback(Piki* piki) { mIsEscaped = true; }

/**
 * @note Address: 0x80190D9C
 * @note Size: 0x74C
 */
void PikiDrownState::exec(Piki* piki)
{
	if (mIsEscaped) {
		if (mNavi) {
			Vector3f naviPos = mNavi->getPosition();
			Vector3f pikiPos = piki->getPosition();
			piki->mFaceDir   = JMath::atanTable_.atan2_(naviPos.x - pikiPos.x, naviPos.z - pikiPos.z);
		}

		piki->mVelocity = Vector3f(100.0f * sinf(piki->mFaceDir), 160.0f, 100.0f * cosf(piki->mFaceDir));
		EmotionStateArg emotionArg(5);
		transit(piki, PIKISTATE_Emotion, &emotionArg);
		return;
	}

	if (piki->mWaterBox) {
		f32 level        = piki->mWaterBox->getSeaLevel();
		Vector3f pikiPos = piki->getPosition();

		if (mSubState == 0) {
			switch (mMoveState) {
			case 0:
				piki->mVelocity.z = 0.0f;
				piki->mVelocity.x = 0.0f;
				if (piki->mVelocity.y < 60.0f) {
					piki->mVelocity.y += 500.0f * sys->mDeltaTime;
				}
				piki->mTargetVelocity = piki->mVelocity;
				break;

			case 2:
				piki->mVelocity       = Vector3f(0.0f);
				piki->mVelocity.y     = 60.0f;
				piki->mTargetVelocity = piki->mVelocity;

				Vector3f newPikiPos = piki->getPosition();
				if (newPikiPos.y >= level - 5.0f) {
					piki->mPosition.x = newPikiPos.x;
					piki->mPosition.y = level - 5.0f;
					piki->mPosition.z = newPikiPos.z;
					mSubState         = 1;
					piki->startMotion(IPikiAnims::OBORERU, IPikiAnims::OBORERU, piki, nullptr);
					piki->mSoundObj->startFreePikiSetSound(PSSE_PK_VC_WATER_DROWN, PSGame::SeMgr::SETSE_PikiWorking, 0, 0);
				}
				break;
			}
		} else if (mSubState == 2) {
			piki->mVelocity.z       = 0.0f;
			piki->mVelocity.x       = 0.0f;
			piki->mVelocity.y       = -5.0f;
			piki->mTargetVelocity.y = piki->mVelocity.y;
			piki->mTargetVelocity.z = 0.0f;
			piki->mTargetVelocity.x = 0.0f;
		} else {
			Vector3f newPikiPos = piki->getPosition();
			if (newPikiPos.y < level - 5.0f) {
				piki->mPosition.x = newPikiPos.x;
				piki->mPosition.y = level - 5.0f;
				piki->mPosition.z = newPikiPos.z;
			}
			piki->mVelocity.y       = 0.0f;
			piki->mTargetVelocity.y = 0.0f;
		}
	}

	if (mSubState == 1 && !piki->assertMotion(IPikiAnims::OBORERU)) {
		mSubState = 2;
		piki->startMotion(IPikiAnims::SIZUMU, IPikiAnims::SIZUMU, piki, nullptr);

	} else if (mSubState == 2 && !piki->assertMotion(IPikiAnims::IPikiAnims::SIZUMU)) {
		DeathMgr::inc(DeathCounter::COD_Water);
		piki->mTekiKillID = -1;
		piki->kill(nullptr);
	}

	if (mSubState == 1) {
		Navi* navi;
		if (mNavi) {
			navi = mNavi;
		} else {
			navi = piki->mNavi;
		}

		if (!navi) {
			for (int i = 0; i < 2; i++) {
				Navi* currNavi = naviMgr->getAt(i);
				if (currNavi->isAlive()) {
					Vector3f currNaviPos = currNavi->getPosition();
					Vector3f currPikiPos = piki->getPosition();
					// Vector3f sep = currNaviPos - currPikiPos;
					if (currNaviPos.distance(currPikiPos) < 1000.0f) {
						navi = currNavi;
					}
				}
			}
		}

		if (!mIsCalled) {
			piki->mTargetVelocity.x = 0.0f;
			piki->mTargetVelocity.z = 0.0f;
			piki->mVelocity.z       = 0.0f;
			piki->mVelocity.x       = 0.0f;
			return;
		}

		if (navi) {
			Vector3f sep = navi->getPosition() - piki->getPosition();
			_normalise2(sep);

			mMoveVelocity = sep * piki->getSpeed(1.0f);

			Vector3f oldVel = piki->mTargetVelocity;
			Vector3f newSep = mMoveVelocity - piki->mTargetVelocity;
			f32 speedDiff   = _normalise2(newSep);
			f32 modifier    = 15.0f;
			if (mIsCalled) {
				speedDiff *= 2.0f;
			}

			if (speedDiff > speedDiff * sys->mDeltaTime) {
				piki->mTargetVelocity = newSep * speedDiff * sys->mDeltaTime + oldVel;
			} else {
				piki->mTargetVelocity = newSep * sys->mDeltaTime + oldVel;
			}

			piki->mVelocity.x = piki->mTargetVelocity.x;
			piki->mVelocity.z = piki->mTargetVelocity.z;
			piki->mVelocity   = piki->mTargetVelocity;
		}
	}

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stmw     r27, 0x9c(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_80190F08
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_80190E38
	lwz      r12, 0(r4)
	addi     r3, r1, 0x6c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x60
	lwz      r12, 0(r31)
	lfs      f30, 0x6c(r1)
	lwz      r12, 8(r12)
	lfs      f31, 0x74(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x60(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x68(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f30, f1
	fsubs    f2, f31, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x1fc(r31)

lbl_80190E38:
	lfs      f5, 0x1fc(r31)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_80190E50
	fneg     f1, f5

lbl_80190E50:
	lfs      f2, lbl_80518E34@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518DE0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_80518E58@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_80190EB0
	lfs      f0, lbl_80518E38@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80190EC8

lbl_80190EB0:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80190EC8:
	fmuls    f1, f3, f0
	lfs      f0, lbl_80518E90@sda21(r2)
	li       r0, 5
	mr       r3, r30
	mr       r4, r31
	addi     r6, r1, 8
	stfs     f1, 0x200(r31)
	li       r5, 0x13
	stfs     f0, 0x204(r31)
	stfs     f4, 0x208(r31)
	sth      r0, 8(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801914BC

lbl_80190F08:
	lwz      r3, 0x190(r31)
	cmplwi   r3, 0
	beq      lbl_80191104
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	fmr      f30, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x54
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_80191088
	lhz      r0, 0x16(r30)
	cmpwi    r0, 1
	beq      lbl_80191104
	bge      lbl_80190F68
	cmpwi    r0, 0
	bge      lbl_80190F74
	b        lbl_80191104

lbl_80190F68:
	cmpwi    r0, 3
	bge      lbl_80191104
	b        lbl_80190FC0

lbl_80190F74:
	lfs      f1, lbl_80518DE0@sda21(r2)
	lfs      f0, lbl_80518E94@sda21(r2)
	stfs     f1, 0x208(r31)
	stfs     f1, 0x200(r31)
	lfs      f2, 0x204(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_80190FA4
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_80518E98@sda21(r2)
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x204(r31)

lbl_80190FA4:
	lfs      f0, 0x200(r31)
	stfs     f0, 0x1e4(r31)
	lfs      f0, 0x204(r31)
	stfs     f0, 0x1e8(r31)
	lfs      f0, 0x208(r31)
	stfs     f0, 0x1ec(r31)
	b        lbl_80191104

lbl_80190FC0:
	lfs      f1, lbl_80518DE0@sda21(r2)
	mr       r4, r31
	lfs      f0, lbl_80518E94@sda21(r2)
	addi     r3, r1, 0x48
	stfs     f1, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f1, 0x208(r31)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x200(r31)
	stfs     f0, 0x1e4(r31)
	lfs      f0, 0x204(r31)
	stfs     f0, 0x1e8(r31)
	lfs      f0, 0x208(r31)
	stfs     f0, 0x1ec(r31)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518E9C@sda21(r2)
	lfs      f1, 0x4c(r1)
	fsubs    f0, f30, f0
	lfs      f2, 0x48(r1)
	lfs      f3, 0x50(r1)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80191104
	stfs     f2, 0x20c(r31)
	cmplwi   r31, 0
	li       r0, 1
	mr       r6, r31
	stfs     f0, 0x210(r31)
	stfs     f3, 0x214(r31)
	sth      r0, 0x10(r30)
	beq      lbl_8019104C
	addi     r6, r31, 0x178

lbl_8019104C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x26
	li       r5, 0x26
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, 0x250(r31)
	li       r4, 0x2812
	li       r5, 2
	li       r6, 0
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
	b        lbl_80191104

lbl_80191088:
	cmplwi   r0, 2
	bne      lbl_801910B8
	lfs      f1, lbl_80518DE0@sda21(r2)
	lfs      f0, lbl_80518EA0@sda21(r2)
	stfs     f1, 0x208(r31)
	stfs     f1, 0x200(r31)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x204(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f1, 0x1ec(r31)
	stfs     f1, 0x1e4(r31)
	b        lbl_80191104

lbl_801910B8:
	mr       r4, r31
	addi     r3, r1, 0x3c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518E9C@sda21(r2)
	lfs      f1, 0x40(r1)
	fsubs    f0, f30, f0
	lfs      f2, 0x3c(r1)
	lfs      f3, 0x44(r1)
	fcmpo    cr0, f1, f0
	bge      lbl_801910F8
	stfs     f2, 0x20c(r31)
	stfs     f0, 0x210(r31)
	stfs     f3, 0x214(r31)

lbl_801910F8:
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x1e8(r31)

lbl_80191104:
	lhz      r0, 0x10(r30)
	cmplwi   r0, 1
	bne      lbl_80191160
	mr       r3, r31
	li       r4, 0x26
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80191160
	li       r0, 2
	cmplwi   r31, 0
	sth      r0, 0x10(r30)
	mr       r6, r31
	beq      lbl_8019113C
	addi     r6, r31, 0x178

lbl_8019113C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x27
	li       r5, 0x27
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_8019119C

lbl_80191160:
	lhz      r0, 0x10(r30)
	cmplwi   r0, 2
	bne      lbl_8019119C
	mr       r3, r31
	li       r4, 0x27
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019119C
	li       r3, 3
	bl       inc__Q24Game8DeathMgrFi
	li       r0, -1
	mr       r3, r31
	sth      r0, 0x2a4(r31)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8019119C:
	lhz      r0, 0x10(r30)
	cmplwi   r0, 1
	bne      lbl_801914BC
	lwz      r0, 0x20(r30)
	cmplwi   r0, 0
	beq      lbl_801911BC
	mr       r29, r0
	b        lbl_801911C0

lbl_801911BC:
	lwz      r29, 0x2c4(r31)

lbl_801911C0:
	cmplwi   r29, 0
	bne      lbl_801912A0
	li       r28, 0

lbl_801911CC:
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80191294
	mr       r4, r27
	addi     r3, r1, 0x30
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x24
	lwz      r12, 0(r31)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	lfs      f31, 0x34(r1)
	lfs      f29, 0x38(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x28(r1)
	lfs      f2, 0x24(r1)
	fsubs    f3, f31, f0
	lfs      f1, 0x2c(r1)
	fsubs    f2, f30, f2
	lfs      f0, lbl_80518DE0@sda21(r2)
	fsubs    f1, f29, f1
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80191280
	ble      lbl_80191284
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80191284

lbl_80191280:
	fmr      f1, f0

lbl_80191284:
	lfs      f0, lbl_80518EA4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80191294
	mr       r29, r27

lbl_80191294:
	addi     r28, r28, 1
	cmpwi    r28, 2
	blt      lbl_801911CC

lbl_801912A0:
	lbz      r0, 0x30(r30)
	cmplwi   r0, 0
	bne      lbl_801912C4
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1ec(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x200(r31)
	b        lbl_801914BC

lbl_801912C4:
	cmplwi   r29, 0
	beq      lbl_801914BC
	mr       r4, r31
	addi     r3, r1, 0xc
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x18
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x20(r1)
	fsubs    f31, f1, f0
	lfs      f0, 0x14(r1)
	lfs      f1, 0x18(r1)
	fsubs    f30, f2, f0
	lfs      f0, 0xc(r1)
	fmuls    f2, f31, f31
	fsubs    f29, f1, f0
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmuls    f3, f30, f30
	fmadds   f1, f29, f29, f2
	fadds    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019134C
	ble      lbl_80191350
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80191350

lbl_8019134C:
	fmr      f1, f0

lbl_80191350:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80191370
	lfs      f0, lbl_80518DE4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f29, f29, f0
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0

lbl_80191370:
	lfs      f1, lbl_80518DF4@sda21(r2)
	mr       r3, r31
	bl       getSpeed__Q24Game4PikiFf
	fmuls    f4, f29, f1
	lfs      f2, lbl_80518DE0@sda21(r2)
	fmuls    f3, f31, f1
	fmuls    f0, f30, f1
	stfs     f4, 0x24(r30)
	stfs     f3, 0x28(r30)
	stfs     f0, 0x2c(r30)
	lfs      f0, 0x28(r30)
	lfs      f1, 0x1e8(r31)
	lfs      f4, 0x2c(r30)
	fsubs    f8, f0, f1
	lfs      f0, 0x1ec(r31)
	lfs      f3, 0x24(r30)
	fsubs    f9, f4, f0
	lfs      f6, 0x1e4(r31)
	fmuls    f4, f8, f8
	fsubs    f7, f3, f6
	fmuls    f5, f9, f9
	fmadds   f3, f7, f7, f4
	fadds    f3, f5, f3
	fcmpo    cr0, f3, f2
	ble      lbl_801913E4
	ble      lbl_801913E8
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_801913E8

lbl_801913E4:
	fmr      f3, f2

lbl_801913E8:
	lfs      f2, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_8019140C
	lfs      f2, lbl_80518DE4@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f7, f7, f2
	fmuls    f8, f8, f2
	fmuls    f9, f9, f2
	b        lbl_80191410

lbl_8019140C:
	fmr      f3, f2

lbl_80191410:
	lbz      r0, 0x30(r30)
	lfs      f10, lbl_80518E48@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_80191428
	lfs      f2, lbl_80518E30@sda21(r2)
	fmuls    f10, f10, f2

lbl_80191428:
	lwz      r3, sys@sda21(r13)
	lfs      f5, 0x54(r3)
	fmuls    f2, f10, f5
	fcmpo    cr0, f3, f2
	ble      lbl_80191470
	fmuls    f4, f7, f10
	fmuls    f3, f8, f10
	fmuls    f2, f9, f10
	fmuls    f4, f4, f5
	fmuls    f3, f3, f5
	fmuls    f2, f2, f5
	fadds    f4, f6, f4
	fadds    f1, f1, f3
	fadds    f0, f0, f2
	stfs     f4, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	b        lbl_80191494

lbl_80191470:
	fmuls    f4, f7, f5
	fmuls    f3, f8, f5
	fmuls    f2, f9, f5
	fadds    f4, f6, f4
	fadds    f1, f1, f3
	fadds    f0, f0, f2
	stfs     f4, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80191494:
	lfs      f0, 0x1e4(r31)
	stfs     f0, 0x200(r31)
	lfs      f0, 0x1ec(r31)
	stfs     f0, 0x208(r31)
	lfs      f0, 0x1e4(r31)
	stfs     f0, 0x200(r31)
	lfs      f0, 0x1e8(r31)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x1ec(r31)
	stfs     f0, 0x208(r31)

lbl_801914BC:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	lmw      r27, 0x9c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x801914E8
 * @note Size: 0x4
 */
void PikiDrownState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x801914EC
 * @note Size: 0x120
 */
void PikiDrownState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_2:
		if (mSubState == 0) {
			mMoveState = 2;
		}
		break;

	case KEYEVENT_LOOP_START:
		piki->mSoundObj->startFreePikiSetSound(PSSE_PK_VC_WATER_DROWN, PSGame::SeMgr::SETSE_PikiWorking, 0, 0);
		break;

	case KEYEVENT_LOOP_END:
		if (mSubState == 1) {
			mSizumuAnimDelay--;
			if (mSizumuAnimDelay == 0) {
				mSubState = 2;
				piki->startMotion(IPikiAnims::SIZUMU, IPikiAnims::SIZUMU, piki, nullptr);
			}
		}
		break;

	case KEYEVENT_END:
		switch (mSubState) {
		case 0:
			// commented out code probably
			break;
		case 2:
			DeathMgr::inc(DeathCounter::COD_Water);
			piki->mTekiKillID = -1;
			piki->kill(nullptr);
			break;
		}
		break;
	}
}

/**
 * @note Address: 0x8019160C
 * @note Size: 0x358
 */
void PikiEmotionState::init(Piki* piki, StateArg* stateArg)
{
	EmotionStateArg* emotionArg = static_cast<EmotionStateArg*>(stateArg);
	P2ASSERTLINE(3929, emotionArg);

	mEmotionType = emotionArg->mType;
	mUnusedVal   = 0;

	if (mEmotionType == 9) {
		return;
	}

	switch (mEmotionType) {
	case 0: {
		KandoLib::Choice choiceList[3] = { (KandoLib::Choice) { IPikiAnims::JUMPB1, 0.33f }, (KandoLib::Choice) { IPikiAnims::JUMP, 0.33f },
			                               (KandoLib::Choice) { IPikiAnims::JUMPR1, 0.33f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 3);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 1: {
		KandoLib::Choice choiceList[3] = { (KandoLib::Choice) { IPikiAnims::JUMPB1, 0.33f }, (KandoLib::Choice) { IPikiAnims::JUMP, 0.33f },
			                               (KandoLib::Choice) { IPikiAnims::JUMPR1, 0.33f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 3);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 2: {
		KandoLib::Choice choiceList[2]
		    = { (KandoLib::Choice) { IPikiAnims::SAGASU, 0.5f }, (KandoLib::Choice) { IPikiAnims::SAGASU2, 0.5f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 2);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 4: {
		KandoLib::Choice choiceList[2]
		    = { (KandoLib::Choice) { IPikiAnims::GAKKARI, 0.5f }, (KandoLib::Choice) { IPikiAnims::SAGASU2, 0.5f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 2);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 3: {
		mAnimIdx = IPikiAnims::GAKKARI;
		piki->startMotion(IPikiAnims::GAKKARI, IPikiAnims::GAKKARI, piki, nullptr);
		break;
	}

	case 5: {
		mAnimIdx = IPikiAnims::MIZUAGE;
		piki->startMotion(IPikiAnims::MIZUAGE, IPikiAnims::MIZUAGE, piki, nullptr);
		break;
	}

	case 6: {
		mAnimIdx = IPikiAnims::JUMPB1;
		piki->startMotion(IPikiAnims::JUMPB1, IPikiAnims::JUMPB1, piki, nullptr);
		break;
	}

	case 7: {
		mAnimIdx = IPikiAnims::WAIT;
		piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, piki, nullptr);
		break;
	}

	case 8:
		JUT_PANICLINE(4112, "rapCnt の使い方がよくなので凍結中! (RAPTURE)\n");
		break;
	}
}

/**
 * @note Address: 0x80191964
 * @note Size: 0xA8
 */
void PikiEmotionState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	if (!piki->assertMotion(mAnimIdx)) {
		transit(piki, PIKISTATE_Walk, nullptr);
	} else if (mEmotionType == 9) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80191A0C
 * @note Size: 0x4
 */
void PikiEmotionState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x80191A10
 * @note Size: 0xC0
 */
void PikiEmotionState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_200:
		switch (mAnimIdx) {
		case IPikiAnims::MIZUAGE:
			piki->startSound(PSSE_PK_VC_BURUBURU, true);
			break;
		}
		break;

	case KEYEVENT_END:
		if (mEmotionType == 8) {
			mRepeatCounter--;
			if (mRepeatCounter) {
				EmotionStateArg emotionArg(mEmotionType);
				init(piki, &emotionArg);
				return;
			}
		}
		mRepeatCounter = 0;
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x80191AD0
 * @note Size: 0x170
 */
void PikiAbsorbState::init(Piki* piki, StateArg* stateArg)
{
	AbsorbStateArg* absorbArg = static_cast<AbsorbStateArg*>(stateArg);
	P2ASSERTLINE(4210, absorbArg);
	mAbsorbingCreature = absorbArg->mCreature;
	P2ASSERTLINE(4212, mAbsorbingCreature);
	piki->startMotion(IPikiAnims::MIZUNOMI, IPikiAnims::MIZUNOMI, piki, nullptr);
	mState             = 0;
	mHasAbsorbed       = 0;
	Vector3f targetPos = mAbsorbingCreature->getPosition();
	piki->turnTo(targetPos);

	P2ASSERTLINE(4219, mAbsorbingCreature->getJAIObject());
	piki->mSoundObj->startPikiSound(mAbsorbingCreature->getJAIObject(), PSSE_PK_VC_DRINK, 0);
	mAbsorbTimer = 0;
}

/**
 * @note Address: 0x80191C40
 * @note Size: 0x154
 */
void PikiAbsorbState::exec(Piki* piki)
{
	piki->mVelocity.z     = 0.0f;
	piki->mVelocity.x     = 0.0f;
	piki->mTargetVelocity = Vector3f(0.0f);

	if (mState == 1 && mAbsorbingCreature->isAlive() && !mHasAbsorbed) {
		InteractAbsorb absorb(piki);
		mAbsorbingCreature->stimulate(absorb);
		mHasAbsorbed = 1;
	}

	if (!mHasAbsorbed) {
		mAbsorbTimer++;
		if (mAbsorbTimer > 180) {
			mHasAbsorbed = 1;
			mAbsorbTimer = 180;
		}
	}

	if (!piki->assertMotion(IPikiAnims::MIZUNOMI)) {
		if (mHasAbsorbed) {
			transit(piki, PIKISTATE_Growup, nullptr);
		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x80191D94
 * @note Size: 0x12C
 */
void PikiAbsorbState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_LOOP_START:
		mState = 1;
		break;

	case KEYEVENT_LOOP_END:
		Creature* creature = mAbsorbingCreature;
		P2ASSERTLINE(4261, creature->mObjectTypeID == OBJTYPE_Honey);
		ItemHoney::Item* nectar = (ItemHoney::Item*)mAbsorbingCreature;

		if (!mAbsorbingCreature->isAlive() || mHasAbsorbed || !nectar->isShrinking()) {
			mState = 2;
			piki->finishMotion();
		}
		break;

	case KEYEVENT_END:
		if (mHasAbsorbed) {
			transit(piki, PIKISTATE_Growup, nullptr);
		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x80191EC0
 * @note Size: 0x4
 */
void PikiAbsorbState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x80191EC4
 * @note Size: 0xE0
 */
void PikiGrowupState::init(Piki* piki, StateArg* stateArg)
{
	if (randFloat() > 0.5f) {
		mAnimIdx = IPikiAnims::GROWUP1;
	} else {
		mAnimIdx = IPikiAnims::GROWUP2;
	}

	piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);

	if (!piki->assertMotion(mAnimIdx)) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80191FA4
 * @note Size: 0x78
 */
void PikiGrowupState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	if (!piki->assertMotion(mAnimIdx)) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8019201C
 * @note Size: 0x1A0
 */
void PikiGrowupState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_2:
		if (piki->getHappa() != Flower) {
			piki->changeHappa(Flower);
			piki->startSound(PSSE_PK_FLOWER_VOICE, true);
			if (piki->getCurrActionID() == 0) {
				if (!piki->mNavi) {
					piki->mNavi = naviMgr->getAliveOrima(ALIVEORIMA_Active);
				}

				piki->mNavi->mCPlateMgr->changeFlower(piki);
			}

			if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_First_Nectar_Use)) {
				if (moviePlayer) {
					MoviePlayArg movieArg("g34_yellow_extract", nullptr, nullptr, 0);
					movieArg.setTarget(piki);
					moviePlayer->mTargetObject = piki;
					moviePlayer->play(movieArg);
				}

				playData->setDemoFlag(DEMO_First_Nectar_Use);
			}
		}
		break;

	case KEYEVENT_END:
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x801921BC
 * @note Size: 0x4
 */
void PikiGrowupState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x801921C0
 * @note Size: 0x20
 */
void PikiEscapeState::init(Piki* piki, StateArg* stateArg) { initRun(piki); }

/**
 * @note Address: 0x801921E0
 * @note Size: 0x74
 */
void PikiEscapeState::initRun(Piki* piki)
{
	mSubState = 0;

	u8 check;
	if (randFloat() > 0.5f) {
		check = 1;
	} else {
		check = 0;
	}

	mDoFinishAnim = check;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x120
//  */
// void PikiEscapeState::initKoke(Piki* piki)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x190
 */
Creature* PikiEscapeState::findTeki(Piki* piki)
{
	Vector3f pikiPos = piki->getPosition();

	Sys::Sphere sphere(pikiPos, 200.0f);

	CellIteratorArg iterArg(sphere);
	CellIterator iter(iterArg);

	f32 minDist      = 200.0f;
	Creature* target = nullptr;

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isTeki() && creature->isLivingThing() && creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			Vector3f diff
			    = Vector3f(creaturePos.y - sphere.mPosition.y, creaturePos.z - sphere.mPosition.z, creaturePos.x - sphere.mPosition.x);
			f32 len = _length2(diff);
			if (len < minDist) {
				target  = creature;
				minDist = len;
			}
		}
	}

	return target;
}

/**
 * @note Address: 0x80192254
 * @note Size: 0x5C8
 */
void PikiEscapeState::exec(Piki* piki)
{
	switch (mSubState) {
	case 1:
	case 2:
		piki->mTargetVelocity *= 0.955f;
		return;
	}

	Creature* target = findTeki(piki);

	if (target) {
		Vector3f targetPos = target->getPosition();
		Vector3f pikiPos   = piki->getPosition();

		Vector3f diff = pikiPos - targetPos;

		f32 dist = diff.normalise();
		f32 val  = 1.0f;
		if ((u8)mDoFinishAnim != (u8)0) {
			val = -1.0f;
		}
		Vector3f axis(0.0f, val, 0.0f);

		// cross product needs fixing.
		Vector3f vec = cross(diff, axis);
		vec.normalise();

		f32 randVal = randFloat();
		if (dist - target->getBodyRadius() < 20.0f * randVal - 10.0f) {
			piki->setSpeed(0.6f, diff);
		} else {
			piki->setSpeed(0.6f, vec);
		}

		if (randFloat() < 0.01f) {
			if (randFloat() < 0.2f) {
				piki->startMotion(IPikiAnims::KOROBU2, IPikiAnims::KOROBU2, piki, nullptr);
				mSubState = 2;
			} else {
				piki->startMotion(IPikiAnims::KOROBU, IPikiAnims::KOROBU, piki, nullptr);
				mSubState = 1;
			}

			mDoFinishAnim = 4.0f * randFloat() + 3.0f;
			return;
		}

		if (randFloat() < 0.1f) {
			mSubState     = 0;
			mDoFinishAnim = (randFloat() > 0.5f) ? 1 : 0;
		}
	}
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	stw      r29, 0xe4(r1)
	stw      r28, 0xe0(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x11(r3)
	cmpwi    r0, 3
	bge      lbl_801922D4
	cmpwi    r0, 1
	bge      lbl_801922A8
	b        lbl_801922D4

lbl_801922A8:
	lfs      f2, lbl_80518E8C@sda21(r2)
	lfs      f0, 0x1e4(r31)
	lfs      f1, 0x1e8(r31)
	lfs      f3, 0x1ec(r31)
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2
	fmuls    f2, f3, f2
	stfs     f0, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f2, 0x1ec(r31)
	b        lbl_801927E4

lbl_801922D4:
	mr       r4, r31
	addi     r3, r1, 0x18
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x18(r1)
	addi     r3, r1, 0x60
	lfs      f2, 0x1c(r1)
	addi     r4, r1, 8
	lfs      f1, 0x20(r1)
	lfs      f0, lbl_80518EA8@sda21(r2)
	stfs     f3, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	addi     r3, r1, 0x80
	addi     r4, r1, 0x60
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	lfs      f31, lbl_80518EA8@sda21(r2)
	addi     r3, r1, 0x80
	li       r28, 0
	bl       first__Q24Game12CellIteratorFv
	b        lbl_80192418

lbl_80192338:
	addi     r3, r1, 0x80
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192410
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192410
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192410
	mr       r4, r29
	addi     r3, r1, 0x24
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r1)
	lfs      f0, 0xc(r1)
	lfs      f3, 0x24(r1)
	fsubs    f4, f1, f0
	lfs      f2, 8(r1)
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x10(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801923FC
	ble      lbl_80192400
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80192400

lbl_801923FC:
	fmr      f1, f0

lbl_80192400:
	fcmpo    cr0, f1, f31
	bge      lbl_80192410
	mr       r28, r29
	fmr      f31, f1

lbl_80192410:
	addi     r3, r1, 0x80
	bl       next__Q24Game12CellIteratorFv

lbl_80192418:
	addi     r3, r1, 0x80
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192338
	cmplwi   r28, 0
	beq      lbl_801927E4
	mr       r4, r28
	addi     r3, r1, 0x3c
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x30
	lwz      r12, 0(r31)
	lfs      f30, 0x3c(r1)
	lwz      r12, 8(r12)
	lfs      f31, 0x40(r1)
	lfs      f29, 0x44(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	fsubs    f3, f1, f30
	lfs      f4, 0x38(r1)
	fsubs    f2, f0, f31
	lfs      f1, lbl_80518DE0@sda21(r2)
	fsubs    f4, f4, f29
	fmuls    f0, f3, f3
	fmuls    f5, f2, f2
	stfs     f3, 0x54(r1)
	fmuls    f6, f4, f4
	stfs     f2, 0x58(r1)
	fadds    f0, f0, f5
	stfs     f4, 0x5c(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801924CC
	fmadds   f0, f3, f3, f5
	fadds    f31, f6, f0
	fcmpo    cr0, f31, f1
	ble      lbl_801924D0
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801924D0

lbl_801924CC:
	fmr      f31, f1

lbl_801924D0:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8019250C
	lfs      f0, lbl_80518DE4@sda21(r2)
	lfs      f2, 0x54(r1)
	fdivs    f3, f0, f31
	lfs      f1, 0x58(r1)
	lfs      f0, 0x5c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x54(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	b        lbl_80192510

lbl_8019250C:
	fmr      f31, f0

lbl_80192510:
	lbz      r0, 0x10(r30)
	lfs      f3, lbl_80518DE4@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_80192524
	lfs      f3, lbl_80518DE8@sda21(r2)

lbl_80192524:
	lfs      f4, 0x54(r1)
	lfs      f2, lbl_80518DE0@sda21(r2)
	lfs      f1, 0x58(r1)
	fmuls    f0, f4, f2
	lfs      f5, 0x5c(r1)
	fmuls    f6, f1, f2
	fmsubs   f0, f5, f2, f0
	fnmsubs  f1, f5, f3, f6
	fmsubs   f3, f4, f3, f6
	fmuls    f4, f0, f0
	stfs     f0, 0x4c(r1)
	fmuls    f0, f1, f1
	fmuls    f5, f3, f3
	stfs     f1, 0x48(r1)
	fadds    f0, f0, f4
	stfs     f3, 0x50(r1)
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019258C
	fmadds   f0, f1, f1, f4
	fadds    f1, f5, f0
	fcmpo    cr0, f1, f2
	ble      lbl_80192590
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80192590

lbl_8019258C:
	fmr      f1, f2

lbl_80192590:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801925C8
	lfs      f0, lbl_80518DE4@sda21(r2)
	lfs      f2, 0x48(r1)
	fdivs    f3, f0, f1
	lfs      f1, 0x4c(r1)
	lfs      f0, 0x50(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)

lbl_801925C8:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	mr       r3, r28
	lwz      r12, 0(r28)
	stw      r0, 0xc8(r1)
	lfd      f2, lbl_80518DD8@sda21(r2)
	lfd      f1, 0xc8(r1)
	lfs      f0, lbl_80518DC8@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x54(r12)
	fdivs    f30, f1, f0
	mtctr    r12
	bctrl
	lfs      f2, lbl_80518E54@sda21(r2)
	fsubs    f1, f31, f1
	lfs      f0, lbl_80518DCC@sda21(r2)
	fmsubs   f0, f2, f30, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80192630
	lfs      f1, lbl_80518E10@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x54
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_80192640

lbl_80192630:
	lfs      f1, lbl_80518E10@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x48
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_80192640:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0xc8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0xc8(r1)
	lfs      f0, lbl_80518E5C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80192764
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0xc8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0xc8(r1)
	lfs      f0, lbl_80518E04@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801926E4
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801926B8
	addi     r6, r31, 0x178

lbl_801926B8:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x3c
	li       r5, 0x3c
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 2
	stb      r0, 0x11(r30)
	b        lbl_8019271C

lbl_801926E4:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801926F4
	addi     r6, r31, 0x178

lbl_801926F4:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x1a
	li       r5, 0x1a
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x11(r30)

lbl_8019271C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0xc8(r1)
	lfs      f2, lbl_80518DC8@sda21(r2)
	lfd      f0, 0xc8(r1)
	lfs      f1, lbl_80518E88@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80518DD0@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	stb      r0, 0x10(r30)
	b        lbl_801927E4

lbl_80192764:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0xd0(r1)
	lfs      f0, lbl_80518E2C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801927E4
	li       r0, 0
	stb      r0, 0x11(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0xd0(r1)
	lfs      f0, lbl_80518DF4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801927DC
	li       r0, 1
	b        lbl_801927E0

lbl_801927DC:
	li       r0, 0

lbl_801927E0:
	stb      r0, 0x10(r30)

lbl_801927E4:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	lwz      r0, 0x124(r1)
	lwz      r28, 0xe0(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/**
 * @note Address: 0x8019281C
 * @note Size: 0x17C
 */
void PikiEscapeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_200:
		switch (mSubState) {
		case 2:
			piki->startSound(PSSE_PK_VC_SLIP1, true);
			break;
		case 1:
			piki->startSound(PSSE_PK_VC_SLIP2, true);
			break;
		}
		break;

	case KEYEVENT_2:
		if (mSubState == 1 || mSubState == 2) {
			piki->mVelocity       = Vector3f(0.0f);
			piki->mTargetVelocity = Vector3f(0.0f);
		}
		break;

	case KEYEVENT_LOOP_END:
		if (mSubState == 1 || mSubState == 2) {
			mDoFinishAnim--;
			if (mDoFinishAnim <= 0) {
				piki->mAnimator.mSelfAnimator.mFlags |= SysShape::Animator::AnimFinishMotion;
				piki->mAnimator.mBoundAnimator.mFlags |= SysShape::Animator::AnimFinishMotion;
			}
		}
		break;

	case KEYEVENT_END:
		if (mSubState == 1 || mSubState == 2) {
			mSubState     = 0;
			mDoFinishAnim = (randFloat() > 0.5f) ? 1 : 0;
		}
		break;
	}
}

/**
 * @note Address: 0x80192998
 * @note Size: 0x4
 */
void PikiEscapeState::cleanup(Piki* piki) { }

/**
 * @note Address: 0x80192B24
 * @note Size: 0x64
 */
// should be weak, but putting it in the header
// messes up FSM::init.
void StateMachine<Piki>::create(int limit)
{
	mLimit          = limit;
	mCount          = 0;
	mStates         = new FSMState<Piki>*[mLimit];
	mIndexToIDArray = new int[mLimit];
	mIdToIndexArray = new int[mLimit];
}

/**
 * @note Address: 0x80192B88
 * @note Size: 0x84
 */
// should be weak, but putting it in the header
// messes up FSM::init.
void StateMachine<Piki>::registerState(FSMState<Piki>* state)
{
	if (mCount >= mLimit) {
		return;
	}
	mStates[mCount] = state;

	bool check;
	if (0 > state->mId || !(state->mId < mLimit)) {
		check = false;
	} else {
		check = true;
	}

	if (!check) {
		return;
	}

	state->mStateMachine        = this;
	mIndexToIDArray[mCount]     = state->mId;
	mIdToIndexArray[state->mId] = mCount;
	mCount++;
}

} // namespace Game
