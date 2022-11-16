#include "Game/PikiState.h"
#include "Game/Piki.h"
#include "Game/PikiParms.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/MapMgr.h"
#include "Game/rumble.h"
#include "Game/MoviePlayer.h"
#include "Game/DeathMgr.h"
#include "Game/CameraMgr.h"
#include "Game/Interaction.h"
#include "Game/AIConstants.h"
#include "Game/EnemyBase.h"
#include "efx/TPiku.h"
#include "efx/TPk.h"
#include "efx/TEnemyDive.h"
#include "JSystem/JUT/JUTException.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "System.h"
#include "PikiAI.h"
#include "nans.h"

namespace Game {

static const int someArray[3] = { 0, 0, 0 };
static const char fileName[]  = "pikiState";

/*
 * --INFO--
 * Address:	80189378
 * Size:	000004
 */
void PikiState::dump() { }

/*
 * --INFO--
 * Address:	8018937C
 * Size:	000030
 */
void PikiState::getInfo(char* string) { sprintf(string, "%s", m_name); }

/*
 * --INFO--
 * Address:	801893AC
 * Size:	000B6C
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

/*
 * --INFO--
 * Address:	80189F18
 * Size:	000118
 */
void PikiFSM::transit(Piki* piki, int stateID, StateArg* stateArg)
{
	PikiState* currentState = piki->m_currentState;
	if (currentState != nullptr && currentState->m_id == PIKISTATE_Carrot) {
		currentState->cleanup(piki);
		return;
	}

	if (currentState) {
		if (!currentState->soft_transittable(stateID)) {
			return;
		}

		if (!currentState->transittable(stateID)) {
			JUT_PANICLINE(701, "*Transit(%d)(%d)\n(%s)=>(%s)\n", currentState->m_id, m_idToIndexArray[stateID], currentState->m_name,
			              static_cast<PikiState*>(m_states[m_idToIndexArray[stateID]])->m_name);
			JUT_PANICLINE(702, "---------- ‚¾‚ß‚¾‚æ?\n");
		}
	}

	m_stateID = stateID;
	StateMachine::transit(piki, stateID, stateArg);
}

/*
 * --INFO--
 * Address:	8018A030
 * Size:	000050
 */
void PikiFSM::transitForce(Piki* piki, int stateID, StateArg* stateArg)
{
	PikiState* currentState = piki->m_currentState;
	if (currentState != nullptr && currentState->m_id == PIKISTATE_Carrot) {
		currentState->cleanup(piki);
	} else {
		StateMachine::transit(piki, stateID, stateArg);
	}
}

/*
 * --INFO--
 * Address:	8018A080
 * Size:	000040
 */
void PikiWalkState::init(Piki* piki, StateArg* stateArg) { piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr); }

/*
 * --INFO--
 * Address:	8018A0C0
 * Size:	000024
 */
void PikiWalkState::exec(Piki* piki) { piki->m_brain->exec(); }

/*
 * --INFO--
 * Address:	8018A0E4
 * Size:	000004
 */
void PikiWalkState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018A0E8
 * Size:	000040
 */
void PikiDemoWaitState::init(Piki* piki, StateArg* stateArg) { piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr); }

/*
 * --INFO--
 * Address:	8018A128
 * Size:	000024
 */
void PikiDemoWaitState::exec(Piki* piki) { piki->m_brain->exec(); }

/*
 * --INFO--
 * Address:	8018A14C
 * Size:	000004
 */
void PikiDemoWaitState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018A150
 * Size:	000100
 */
void PikiCarrotState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
	piki->_180 = 0.3f;
	piki->setMoveVelocity(false);
	piki->setMoveRotation(false);
	piki->setCollisionFlick(true);
	piki->setUpdateTrMatrix(true);
	m_timeRemaining = 3.0f * randFloat() + 10.0f;
	m_isPlanted     = false;
}

/*
 * --INFO--
 * Address:	8018A250
 * Size:	000334
 */
void PikiCarrotState::exec(Piki* piki)
{
	if (piki->isAlive()) {
		piki->m_velocity = Vector3f(0.0f);
		if (m_isPlanted) {
			piki->setPosition(m_position, false);
			piki->m_position2 = Vector3f(0.0f);
		}

		m_timeRemaining -= sys->m_deltaTime;

		if (m_timeRemaining <= 0.0f) {
			Vector3f position = piki->getPosition();
			efx::Arg fxArg(position);
			efx::TPikuDead deadFX;

			deadFX.create(&fxArg);

			piki->startSound(PSSE_PK_CARROT_CRUSH, false);

			piki->kill(nullptr);
		}
		piki->m_animSpeed = 0.0f;
	}

	Vector3f pos = piki->m_position2;
	f32 length   = pos.normalise();
	if (length > 0.0f) { // regswaps here
		pos.negate();
		Matrixf natMatrix;
		natMatrix.makeNaturalPosture(pos);
		Matrixf matST;
		matST.makeST(piki->m_scale, Vector3f::zero);
		Matrixf concatMtx;
		Vector3f translation(0.0f, -10.0f, 0.0f);
		natMatrix.setTranslation(translation);
		piki->m_mainMatrix = concatMatrixf(natMatrix, matST);

		Vector3f newPos = piki->getPosition();
		piki->m_mainMatrix.setTranslation(newPos);
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

/*
 * --INFO--
 * Address:	8018A584
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	8018A65C
 * Size:	000124
 */
void PikiCarrotState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	if (!m_isPlanted) {
		m_isPlanted  = true;
		m_position   = piki->getPosition();
		m_position.y = mapMgr->getMinY(m_position);
		efx::Arg fxArg(m_position);
		m_position.y -= 8.0f;
		piki->m_soundObj->startFreePikiSound(PSSE_PK_CARROT_GROUND, 0, 0);

		efx::TPkAp appearFx;
		appearFx.create(&fxArg);
	}
}

/*
 * --INFO--
 * Address:	8018A780
 * Size:	000004
 */
void PikiCarrotState::collisionCallback(Piki* piki, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8018A784
 * Size:	0000D8
 */
void PikiSwallowedState::init(Piki* piki, StateArg* stateArg)
{
	int animIdx;
	SwallowedStateArg* swallowedArg = static_cast<SwallowedStateArg*>(stateArg);
	if (swallowedArg) {
		animIdx = swallowedArg->m_animIdx;
	} else {
		animIdx = IPikiAnims::ESA; // i.e., eat
	}

	piki->startMotion(animIdx, animIdx, nullptr, nullptr);

	Creature* creature = piki->m_sticker;
	CollPart* collpart = piki->m_stuckCollPart;

	if (piki->getCurrAction()) {
		piki->getCurrAction()->cleanup();
		piki->clearCurrAction();
		piki->getCreatureID();
	}

	if (creature != nullptr && collpart) {
		piki->startStickMouth(creature, collpart);
	}
}

/*
 * --INFO--
 * Address:	8018A85C
 * Size:	000074
 */
void PikiSwallowedState::exec(Piki* piki)
{
	if (!piki->isStickToMouth()) {
		piki->startSound(PSSE_PK_VC_SAVED, false);
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018A900
 * Size:	000054
 */
void PikiSwallowedState::cleanup(Piki* piki)
{
	piki->endStick();
	piki->m_brain->start(1, nullptr);
	piki->getCreatureID();
}

/*
 * --INFO--
 * Address:	8018A954
 * Size:	00020C
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
	_1C              = holeinArg->m_position - pikiPos; // regswaps here and...
	_1C.y            = 0.0f;

	_28 = _1C.normalise();
	_28 *= 0.5f;

	_10 = pikiPos + _1C * _28; // ... here, related to pikiPos I think
	_2C = -_28;

	m_countdown = 0.3f * randFloat();
	_34         = false;
	_44         = 0;

	piki->movie_begin(false);
	m_scale = 1.0f;
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

/*
 * --INFO--
 * Address:	8018AB60
 * Size:	0001C0
 */
void PikiHoleinState::exec(Piki* piki)
{
	piki->endStick();
	piki->m_scale = Vector3f(m_scale);

	if (_34) {
		piki->setPosition(m_position, false);
		return;
	}

	if (m_countdown > 0.0f) {
		m_countdown -= sys->m_deltaTime;
		return;
	}

	if (!_44) {
		_44 = true;
		piki->startSound(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
	}

	// some nonsense here
	f32 factor        = (40.0f + (-40.0f / SQUARE(_28)) * _2C * _2C);
	Vector3f position = _1C * _2C + _10;
	position.y += factor;

	piki->setPosition(position, false);

	_2C += 80.0f * sys->m_deltaTime;
	f32 val = _28 * 0.2f;
	if (_2C > val) {
		m_scale = (1.5f * _28 - (_2C - val)) / (_28 * 1.3f);
	}

	if ((_2C >= 1.5f * _28) && (!_34)) {
		_34        = true;
		m_position = position;
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

/*
 * --INFO--
 * Address:	8018AD20
 * Size:	000004
 */
void PikiHoleinState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018AD24
 * Size:	0001F4
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
	_10              = pikiPos * 0.6f + fountainonArg->m_position * 0.4f;
	_1C              = _10 - pikiPos;

	_28 = _1C.normalise();

	_2C = -_28;

	m_countdown = 0.3f * randFloat();
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

/*
 * --INFO--
 * Address:	8018AF18
 * Size:	0001A0
 */
void PikiFountainonState::exec(Piki* piki)
{
	if (m_countdown > 0.0f) {
		m_countdown -= sys->m_deltaTime;
		if (m_countdown <= 0.0f) {
			piki->startSound(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
		}
		return;
	}

	Vector3f position;

	// regswaps here
	f32 p1          = _28 * 0.4f;
	f32 val         = p1 * _2C * _2C;
	f32 p2          = -50.0f / SQUARE(_28);
	f32 otherFactor = 50.0f + val;

	if (_2C >= p1) {
		f32 factor = 50.0f + p2 * p1 * p1 + (_2C - p1);
		position   = _1C * p1 + _10;
		position.y += factor;
		_2C += sys->m_deltaTime * 400.0f;

	} else {
		position = _1C * _2C + _10;
		position.y += otherFactor;
		_2C += sys->m_deltaTime * 40.0f;

		if (_2C >= _28 * 0.4f) {
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

/*
 * --INFO--
 * Address:	8018B0B8
 * Size:	000004
 */
void PikiFountainonState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018B0BC
 * Size:	0000C8
 */
void PikiTaneState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, nullptr, nullptr);
	_14 = 10.0f - 0.5f * randFloat();
	_10 = 0.2f * _14;
	_14 *= 0.25f;
	piki->setCollisionFlick(false);
}

/*
 * --INFO--
 * Address:	8018B184
 * Size:	000038
 */
void PikiTaneState::exec(Piki* piki) { piki->applyAirDrag(sys->m_deltaTime, _10, _14); }

/*
 * --INFO--
 * Address:	8018B1BC
 * Size:	000034
 */
void PikiTaneState::cleanup(Piki* piki) { piki->setCollisionFlick(true); }

/*
 * --INFO--
 * Address:	8018B1F0
 * Size:	000064
 */
void PikiTaneState::bounceCallback(Piki* piki, Sys::Triangle*)
{
	piki->m_brain->start(1, nullptr);
	transit(piki, PIKISTATE_Walk, nullptr);
}

/*
 * --INFO--
 * Address:	8018B254
 * Size:	000114
 */
void PikiNukareState::init(Piki* piki, StateArg* stateArg)
{
	NukareStateArg* nukareArg = static_cast<NukareStateArg*>(stateArg);
	P2ASSERTLINE(1166, nukareArg != nullptr);

	piki->m_velocity = Vector3f(0.0f);
	piki->m_faceDir  = nukareArg->m_navi->getFaceDir();

	m_navi       = nukareArg->m_navi;
	piki->m_navi = nukareArg->m_navi;
	if (nukareArg->_00) {
		m_animIdx = IPikiAnims::NUKARE3;
	} else {
		m_animIdx = IPikiAnims::NUKARERU;
	}

	piki->startMotion(m_animIdx, m_animIdx, piki, nullptr);
	_14 = false;
	if (!playData->hasMetPikmin(piki->m_pikiKind)) {
		gameSystem->m_flags |= 0x8;
	}
}

/*
 * --INFO--
 * Address:	8018B368
 * Size:	00000C
 */
bool PikiNukareState::soft_transittable(int stateID) { return (stateID == PIKISTATE_Walk); }

/*
 * --INFO--
 * Address:	8018B374
 * Size:	000150
 */
void PikiNukareState::exec(Piki* piki)
{
	if (!piki->assertMotion(m_animIdx)) {
		_14 = true;
	}

	if (_14) {
		Vector3f position = piki->m_collTree->m_part->m_position;
		transit(piki, PIKISTATE_Walk, nullptr);
		position.y = mapMgr->getMinY(position);
		piki->setPosition(position, false);

		PikiAI::ActFormationInitArg initArg(piki->m_navi, 0);
		piki->m_brain->start(0, &initArg);

		int pikiType = piki->m_pikiKind;
		if (pikiType >= 0 && pikiType <= 4) {
			if (!playData->hasMetPikmin(piki->m_pikiKind)) {
				gameSystem->m_section->playMovie_helloPikmin(piki);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8018B4C4
 * Size:	00020C
 */
void PikiNukareState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.m_type) {
	case KEYEVENT_2:
		rumbleMgr->startRumble(0, (int)m_navi->m_naviIndex.typeView);

		Vector3f position = piki->getPosition();
		piki->_17C |= 0x10;
		Sys::Sphere sphere(position, 10.0f);
		WaterBox* wbox = piki->checkWater(nullptr, sphere);

		if (wbox) {
			efx::TEnemyDive diveFx;
			efx::ArgScale fxArg(position, 1.2f);
			diveFx.create(&fxArg);

			if (piki->m_navi == nullptr) {
				JUT_PANICLINE(1242, "getNavi():pullW");
			}

			piki->startSound(piki->m_navi, PSSE_EV_ITEM_LAND_WATER1_S, true);
			piki->startSound(piki->m_navi, PSSE_PL_PULLOUT_PIKI, false);

		} else {
			if (piki->m_navi == nullptr) {
				JUT_PANICLINE(1246, "getNavi():Pull");
			}
			efx::createSimplePkAp(position);
			piki->startSound(piki->m_navi, PSSE_PL_PULLOUT_PIKI, false);
		}

		break;
	case KEYEVENT_END:
		_14 = true;
		break;
	}
}

/*
 * --INFO--
 * Address:	8018B6D0
 * Size:	000010
 */
void PikiNukareState::cleanup(Piki* piki) { piki->_17C &= ~0x10; }

/*
 * --INFO--
 * Address:	8018B6E0
 * Size:	0000B8
 */
void PikiDopeState::init(Piki* piki, StateArg* stateArg)
{
	DopeStateArg* dopeArg = static_cast<DopeStateArg*>(stateArg);
	P2ASSERTLINE(1270, dopeArg != nullptr);
	_18              = dopeArg->_00;
	_14              = 0.3f * randFloat();
	_10              = false;
	piki->m_velocity = Vector3f(0.0f);
	m_navi           = nullptr;
}

/*
 * --INFO--
 * Address:	8018B798
 * Size:	000008
 */
void PikiDopeState::onFlute(Piki* piki, Navi* navi) { m_navi = navi; }

/*
 * --INFO--
 * Address:	8018B7A0
 * Size:	00018C
 */
void PikiDopeState::exec(Piki* piki)
{
	if (!_10) {
		_14 -= sys->m_deltaTime;
		if (_14 <= 0.0f) {
			_10 = true;

			if (randFloat() > 0.5f) { // the illusion of choice.
				m_animIdx = IPikiAnims::GROWUP1;
			} else {
				m_animIdx = IPikiAnims::GROWUP1;
			}

			piki->startMotion(m_animIdx, m_animIdx, piki, nullptr);
		}

	} else if (!piki->assertMotion(m_animIdx)) {
		piki->getCreatureID();

		if (m_navi) {
			piki->m_navi = m_navi;
			PikiAI::ActFormationInitArg initArg(piki->m_navi, 0);
			piki->m_brain->start(0, &initArg);
		}

		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018B92C
 * Size:	0000D8
 */
void PikiDopeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.m_type) {
	case 2:
		piki->startDope(_18);
		break;
	case 1000:
		if (m_navi) {
			piki->m_navi = m_navi;
			PikiAI::ActFormationInitArg initArg(piki->m_navi, 0);
			piki->m_brain->start(0, &initArg);
		}

		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/*
 * --INFO--
 * Address:	8018BA04
 * Size:	000004
 */
void PikiDopeState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018BA08
 * Size:	000024
 */
bool PikiPanicState::soft_transittable(int stateID)
{
	return !(stateID == PIKISTATE_Blow || stateID == PIKISTATE_Panic || stateID == PIKISTATE_FallMeck);
}

/*
 * --INFO--
 * Address:	8018BA2C
 * Size:	000070
 */
bool PikiPanicState::transittable(int stateID)
{
	if (m_panicType == PIKIPANIC_Panic && stateID != PIKISTATE_Panic) {
		return true;
	}

	if (stateID == PIKISTATE_Dying || (u32)(stateID - 10) <= 1 || // drown or swallowed
	    (u32)(stateID - 20) <= 2 ||                               // pressed, panic or zapped
	    stateID == PIKISTATE_Suikomi || stateID == PIKISTATE_Hanged || stateID == PIKISTATE_Flying) {
		return true;
	}

	return (_20 != 0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
inline void PikiPanicState::startSound(Piki* piki)
{
	u32 panicSound = PSSE_PK_VC_PANIC;
	switch (m_panicType) {
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

	piki->m_soundObj->startFreePikiSetSound(panicSound, PSGame::SeMgr::UNK_7, 90, 0);
}

/*
 * --INFO--
 * Address:	8018BA9C
 * Size:	000280
 */
void PikiPanicState::init(Piki* piki, StateArg* stateArg)
{
	PanicStateArg* panicArg = static_cast<PanicStateArg*>(stateArg);
	P2ASSERTLINE(1399, panicArg != nullptr);
	m_panicType = panicArg->m_panicType;
	_20         = false;
	_21         = true;
	piki->setMoveRotation(true);
	m_deathTimer = piki->getParms()->m_pikiParms.m_p055.m_value;
	m_deathTimer *= (0.1f * randFloat() + 1.0f);
	m_dramaTimer = 0.1f;
	m_angle      = piki->m_faceDir;
	m_speed      = 1.0f;
	piki->endStick();

	switch (m_panicType) {
	case PIKIPANIC_Water:
		efx::TPkEffect* effectsObjWat = piki->m_effectsObj;
		effectsObjWat->setFlag(PKEFF_Water);
		effectsObjWat->createWater_(effectsObjWat->_14);
		piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		break;

	case PIKIPANIC_Gas:
		efx::TPkEffect* effectsObjGas = piki->m_effectsObj;
		effectsObjGas->setFlag(PKEFF_Gas);
		effectsObjGas->createChudoku_(effectsObjGas->_0C);
		piki->startMotion(IPikiAnims::GASDEAD, IPikiAnims::GASDEAD, nullptr, nullptr);
		piki->setMoveRotation(false);
		break;

	case PIKIPANIC_Fire:
		piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		efx::TPkEffect* effectsObjFire = piki->m_effectsObj;
		effectsObjFire->setFlag(PKEFF_Fire);
		effectsObjFire->createMoe_(effectsObjFire->_0C);
		break;

	case PIKIPANIC_Panic:
	case PIKIPANIC_Other:
		_22          = 0;
		m_dramaTimer = 0.3f * randFloat();
		break;
	}

	startSound(piki);
	_28 = 2.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
inline void PikiPanicState::checkDemo(Piki* piki)
{
	int flag = 0;
	if (m_panicType == PIKIPANIC_Fire) {
		flag = DEMO_Pikmin_In_Danger_Fire;
	} else if (m_panicType == PIKIPANIC_Water) {
		flag = DEMO_Pikmin_In_Danger_Water;
	} else if (m_panicType == PIKIPANIC_Gas) {
		flag = DEMO_Pikmin_In_Danger_Poison;
	}

	if (flag != 0 && !playData->isDemoFlag(flag) && gameSystem->m_mode == GSM_STORY_MODE && gameSystem->m_flags & 0x20) {
		_28 -= sys->m_deltaTime;
		if (_28 <= 0.0f) {
			playData->setDemoFlag(flag);

			MoviePlayArg playArg("x16_hiba", nullptr, nullptr, 0);
			playArg.m_origin            = piki->getPosition();
			playArg.m_angle             = piki->getFaceDir();
			moviePlayer->m_targetObject = piki;
			moviePlayer->play(playArg);
		}
	}
}

/*
 * --INFO--
 * Address:	8018BD1C
 * Size:	000260
 */
void PikiPanicState::exec(Piki* piki)
{
	if (m_panicType == PIKIPANIC_Panic || m_panicType == PIKIPANIC_Other) {
		piki->m_velocity = Vector3f(0.0f);
		switch (_22) {
		case 0:
			m_dramaTimer -= sys->m_deltaTime;
			if (m_dramaTimer <= 0.0f) {
				_22 = 1;
				piki->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, piki, nullptr);
			}
			return;

		case 1:
			if (!piki->assertMotion(IPikiAnims::KIZUKU)) {
				_22 = 2;
			}
			return;
		}
	} else {
		checkDemo(piki);
	}

	if (m_panicType == PIKIPANIC_Gas) {
		panicLobster(piki);
	} else {
		panicRun(piki);
	}
}

/*
 * --INFO--
 * Address:	8018BF7C
 * Size:	000048
 */
void PikiPanicState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	_22 = 2;
	piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	8018BFC4
 * Size:	0002BC
 */
void PikiPanicState::panicRun(Piki* piki)
{
	Vector3f direction = Vector3f(pikmin2_sinf(m_angle), 0.0f, pikmin2_cosf(m_angle));
	piki->setSpeed(m_speed, direction);
	m_deathTimer -= sys->m_deltaTime;
	m_dramaTimer -= sys->m_deltaTime;

	if (m_deathTimer < 0.0f) {
		if (m_panicType == PIKIPANIC_Panic) {
			transit(piki, PIKISTATE_Walk, nullptr);
			return;
		}

		switch (m_panicType) {
		case PIKIPANIC_Fire:
			deathMgr->inc(2);
			break;
		case PIKIPANIC_Water:
			deathMgr->inc(3);
			break;
		case PIKIPANIC_Gas:
			deathMgr->inc(6);
			break;
		}
		transit(piki, PIKISTATE_Dying, nullptr);
		return;
	}

	if (m_dramaTimer < 0.0f) {
		startSound(piki);
		m_dramaTimer    = 0.2f * randFloat() + 0.2f;
		f32 angleOffset = DEG2RAD * (15.0f * randFloat() + 30.0f) * PI;
		if (piki->m_mgrIndex % 2 == 1) {
			angleOffset = -angleOffset;
		}
		m_angle += angleOffset;
		m_angle = roundAng(m_angle);
		m_speed *= 0.99f;
	}
}

/*
 * --INFO--
 * Address:	8018C280
 * Size:	0002D4
 */
void PikiPanicState::panicLobster(Piki* piki)
{
	if (_21) {
		_21          = false;
		f32 oldAngle = piki->m_faceDir;

		f32 angleOffset = DEG2RAD * (15.0f * randFloat() + 10.0f) * PI;
		if (piki->m_mgrIndex % 2 == 1) {
			angleOffset = -angleOffset;
		}
		oldAngle += angleOffset;

		f32 newAngle    = roundAng(oldAngle);
		f32 factor      = 20.0f * randFloat() + 120.0f;
		f32 randHeight  = 80.0f * randFloat() + 100.0f;
		Vector3f newPos = Vector3f(factor * pikmin2_sinf(newAngle), randHeight, factor * pikmin2_cosf(newAngle));

		piki->m_faceDir   = newAngle;
		piki->m_position2 = newPos;

		if (m_panicType == PIKIPANIC_Gas) {
			piki->startSound(PSSE_PK_VC_GAS_POISONING, true);
		}
	}

	m_deathTimer -= sys->m_deltaTime;

	if (m_deathTimer < 0.0f) {
		switch (m_panicType) {
		case PIKIPANIC_Fire:
			deathMgr->inc(2);
			break;
		case PIKIPANIC_Water:
			deathMgr->inc(3);
			break;
		case PIKIPANIC_Gas:
			deathMgr->inc(6);
			break;
		}

		if (m_panicType == PIKIPANIC_Gas) {
			DyingStateArg dyingArg;
			dyingArg.m_animIdx = IPikiAnims::GDEAD;
			transit(piki, PIKISTATE_Dying, &dyingArg);
			return;
		}

		transit(piki, PIKISTATE_Dying, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018C554
 * Size:	0000E4
 */
void PikiPanicState::cleanup(Piki* piki)
{
	piki->setMoveRotation(true);
	if (piki->m_fsm->m_stateID != PIKISTATE_Dying) {
		efx::TPkEffect* effectsObjFire = piki->m_effectsObj;
		effectsObjFire->killMoe_();
		if (effectsObjFire->isFlag(PKEFF_Fire)) {
			effectsObjFire->resetFlag(PKEFF_Fire);
			effectsObjFire->createMoeSmoke_(effectsObjFire->_0C);
			effectsObjFire->_24 = 60;
			efx::createSimpleChinka(*effectsObjFire->_0C);
		}

		efx::TPkEffect* effectsObjWater = piki->m_effectsObj;
		effectsObjWater->killWater_();
		if (effectsObjWater->isFlag(PKEFF_Water)) {
			effectsObjWater->resetFlag(PKEFF_Water);
			efx::createSimpleWaterOff(*effectsObjWater->_14);
		}

		efx::TPkEffect* effectsObjGas = piki->m_effectsObj;
		effectsObjGas->killChudoku_();
		if (effectsObjGas->isFlag(PKEFF_Gas)) {
			effectsObjGas->resetFlag(PKEFF_Gas);
			efx::createSimpleGedoku(*effectsObjGas->_0C);
		}
	}
}

/*
 * --INFO--
 * Address:	8018C638
 * Size:	00000C
 */
void PikiPanicState::bounceCallback(Piki* piki, Sys::Triangle*) { _21 = 1; }

/*
 * --INFO--
 * Address:	8018C644
 * Size:	00011C
 */
void PikiPanicState::onFlute(Piki* piki, Game::Navi*)
{
	_20 = true;
	transit(piki, PIKISTATE_Walk, nullptr);

	switch (m_panicType) {
	case PIKIPANIC_Fire:
		efx::TPkEffect* effectsObjFire = piki->m_effectsObj;
		effectsObjFire->killMoe_();
		if (effectsObjFire->isFlag(PKEFF_Fire)) {
			effectsObjFire->resetFlag(PKEFF_Fire);
			effectsObjFire->createMoeSmoke_(effectsObjFire->_0C);
			effectsObjFire->_24 = 60;
			efx::createSimpleChinka(*effectsObjFire->_0C);
		}
		break;
	case PIKIPANIC_Water:
		efx::TPkEffect* effectsObjWater = piki->m_effectsObj;
		effectsObjWater->killWater_();
		if (effectsObjWater->isFlag(PKEFF_Water)) {
			effectsObjWater->resetFlag(PKEFF_Water);
			efx::createSimpleWaterOff(*effectsObjWater->_14);
		}
		break;
	case PIKIPANIC_Gas:
		piki->setGasInvincible(90);
		efx::TPkEffect* effectsObjGas = piki->m_effectsObj;
		effectsObjGas->killChudoku_();
		if (effectsObjGas->isFlag(PKEFF_Gas)) {
			effectsObjGas->resetFlag(PKEFF_Gas);
			efx::createSimpleGedoku(*effectsObjGas->_0C);
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	8018C760
 * Size:	000004
 */
void PikiDeadState::init(Piki* piki, StateArg* stateArg) { }

/*
 * --INFO--
 * Address:	8018C764
 * Size:	000004
 */
void PikiDeadState::exec(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018C768
 * Size:	000010
 */
bool PikiDyingState::transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/*
 * --INFO--
 * Address:	8018C778
 * Size:	0000B4
 */
void PikiDyingState::init(Piki* piki, StateArg* stateArg)
{
	DyingStateArg* dyingArg = static_cast<DyingStateArg*>(stateArg);
	m_animIdx               = IPikiAnims::DEAD;
	_14                     = false;
	if (dyingArg) {
		m_animIdx = dyingArg->m_animIdx;
		_14       = dyingArg->_04;
		if (m_animIdx == IPikiAnims::NULLANIM) {
			m_animIdx = IPikiAnims::DEAD;
		}
	}

	piki->startMotion(m_animIdx, m_animIdx, piki, nullptr);
	piki->m_velocity = Vector3f(0.0f);
	piki->m_soundObj->startFreePikiSound(PSSE_PK_VC_DEAD1, 0, 0);
}

/*
 * --INFO--
 * Address:	8018C82C
 * Size:	0000DC
 */
void PikiDyingState::exec(Piki* piki)
{
	piki->m_velocity = Vector3f(0.0f);
	if (!piki->assertMotion(m_animIdx) && piki->isAlive()) {
		if (_14) {
			PikiKillArg killArg(-0x80000000);
			piki->kill(&killArg);

		} else if (moviePlayer == nullptr || !moviePlayer->isPlaying("s09_holein")) {
			piki->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8018C908
 * Size:	000004
 */
void PikiDyingState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018C90C
 * Size:	000064
 */
void PikiDyingState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (_14) {
		PikiKillArg killArg(-0x80000000);
		piki->kill(&killArg);
	} else {
		piki->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018C970
 * Size:	000010
 */
bool PikiDenkiDyingState::soft_transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/*
 * --INFO--
 * Address:	8018C980
 * Size:	000010
 */
bool PikiDenkiDyingState::transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/*
 * --INFO--
 * Address:	8018C990
 * Size:	000084
 */
void PikiDenkiDyingState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::DEAD, IPikiAnims::DEAD, piki, nullptr);
	_10               = 0.3f;
	piki->m_velocity  = Vector3f(0.0f);
	piki->m_position2 = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	8018CA14
 * Size:	000138
 */
void PikiDenkiDyingState::exec(Piki* piki)
{
	piki->m_velocity  = Vector3f(0.0f);
	piki->m_position2 = Vector3f(0.0f);
	_10 -= sys->m_deltaTime;

	if (_10 <= 0.0f) {
		efx::TPkKanden kandenFx;
		efx::Arg fxArg(Vector3f::zero);
		fxArg.m_position = piki->getPosition(); // why do this differently, smh.
		kandenFx.create(&fxArg);

		deathMgr->inc(4);
		piki->startSound(PSSE_PK_VC_ELEC_DEAD, true);
		piki->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018CB4C
 * Size:	000004
 */
void PikiDenkiDyingState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018CB50
 * Size:	000010
 */
bool PikiPressedState::soft_transittable(int stateID) { return (stateID == PIKISTATE_Dead); }

/*
 * --INFO--
 * Address:	8018CB60
 * Size:	000010
 */
bool PikiPressedState::transittable(int stateID) { return (u8)(stateID == PIKISTATE_Dead); }

/*
 * --INFO--
 * Address:	8018CB70
 * Size:	0000C8
 */
void PikiPressedState::init(Piki* piki, StateArg* stateArg)
{
	f32 pressedScale = piki->getParms()->m_pikiParms.m_p038.m_value;
	piki->m_scale    = Vector3f(pressedScale, pressedScale, 0.01f);
	_10              = 1.5f;
	piki->setUpdateTrMatrix(false);

	Vector3f rotation    = Vector3f(-HALF_PI, piki->m_faceDir, 0.0f);
	Vector3f translation = piki->getPosition();
	translation.y += 2.0f;

	piki->m_mainMatrix.makeSRT(piki->m_scale, rotation, translation);
}

/*
 * --INFO--
 * Address:	8018CC38
 * Size:	00010C
 */
void PikiPressedState::exec(Piki* piki)
{
	Vector3f rotation    = Vector3f(-HALF_PI, piki->m_faceDir, 0.0f);
	Vector3f translation = piki->getPosition();
	translation.y += 2.0f;

	piki->m_mainMatrix.makeSRT(piki->m_scale, rotation, translation);

	_10 -= sys->m_deltaTime;
	if (_10 <= 0.0f) {
		if (piki->isPikmin()) {
			deathMgr->inc(0);
		}
		piki->kill(nullptr);
	}

	piki->m_position2 = Vector3f(0.0f);
	piki->m_velocity  = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	8018CD44
 * Size:	000034
 */
void PikiPressedState::cleanup(Piki* piki) { piki->setUpdateTrMatrix(true); }

/*
 * --INFO--
 * Address:	8018CD78
 * Size:	000084
 */
void PikiLookAtState::init(Piki* piki, StateArg* stateArg)
{
	_14 = 0.3f * randFloat();
	_18 = 0;
	piki->m_soundObj->startFreePikiSound(PSSE_PK_VC_CALLED, 90, 0);
}

/*
 * --INFO--
 * Address:	8018CDFC
 * Size:	000004
 */
void PikiLookAtState::onFlute(Piki* piki, Game::Navi*) { }

/*
 * --INFO--
 * Address:	8018CE00
 * Size:	000180
 */
void PikiLookAtState::exec(Piki* piki)
{
	piki->m_velocity = Vector3f(0.0f);
	switch (_18) {
	case 0:
		_14 -= sys->m_deltaTime;
		if (_14 < 0.0f) {
			_14 = 0.0f;
			piki->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, this, nullptr);
			_18 = 1;
		}
		break;

	case 1:
		if (!piki->assertMotion(IPikiAnims::KIZUKU)) {
			_18 = 2;
		}
		break;

	case 2:
		if (piki->m_navi) {
			PikiAI::ActFormationInitArg initArg(piki->m_navi, 0);
			initArg._09 = 1;
			piki->m_brain->start(0, &initArg);
			transit(piki, PIKISTATE_Walk, nullptr);

		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	8018CF80
 * Size:	000028
 */
void PikiLookAtState::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.m_type) {
	case 1000:
		_18 = 2;
		break;
	case 0:
	case 1:
	case 2:
	case 3:
		break;
	}
}

/*
 * --INFO--
 * Address:	8018CFA8
 * Size:	000004
 */
void PikiLookAtState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018CFAC
 * Size:	0001FC
 */
void PikiAutoNukiState::init(Piki* piki, StateArg* stateArg)
{
	_10 = 0.2f * randFloat();
	_14 = 0;
	piki->startMotion(IPikiAnims::KAIFUKU2, IPikiAnims::KAIFUKU2, piki, nullptr);
	_14               = 1;
	Vector3f position = piki->getPosition();
	// piki->_17C |= 0x10;
	Sys::Sphere sphere(position, 10.0f);
	WaterBox* wbox = piki->checkWater(nullptr, sphere);

	if (wbox) {
		efx::TEnemyDive diveFx;
		efx::ArgScale fxArg(position, 1.2f);
		diveFx.create(&fxArg);
		if (piki->m_navi) {
			piki->startSound(piki->m_navi, PSSE_EV_ITEM_LAND_WATER1_S, true);
			piki->startSound(piki->m_navi, PSSE_PL_PULLOUT_PIKI, false);
		}
	} else if (piki->m_navi) {
		efx::createSimplePkAp(position);
		piki->startSound(piki->m_navi, PSSE_PL_PULLOUT_PIKI, false);
	}
}

/*
 * --INFO--
 * Address:	8018D1A8
 * Size:	000300
 */
void PikiAutoNukiState::exec(Piki* piki)
{
	switch (_14) {
	case 0:
		_10 -= sys->m_deltaTime;
		if (_10 < 0.0f) {
			_10 = 0.0f;
			piki->startMotion(IPikiAnims::KAIFUKU2, IPikiAnims::KAIFUKU2, piki, nullptr);
			_14 = 1;

			Vector3f position = piki->getPosition();
			Sys::Sphere sphere(position, 10.0f);
			WaterBox* wbox = piki->checkWater(nullptr, sphere);

			if (wbox) {
				efx::TEnemyDive diveFx;
				efx::ArgScale fxArg(position, 1.2f);
				diveFx.create(&fxArg);

				if (piki->m_navi) {
					piki->startSound(piki->m_navi, PSSE_EV_ITEM_LAND_WATER1_S, true);
					piki->startSound(piki->m_navi, PSSE_PL_PULLOUT_PIKI, false);
				}

			} else if (piki->m_navi) {
				efx::createSimplePkAp(position);
				piki->startSound(piki->m_navi, PSSE_PL_PULLOUT_PIKI, false);
			}
		}
		break;

	case 1:
		if (!piki->assertMotion(IPikiAnims::KAIFUKU2)) {
			_14 = 2;
		}
		break;

	case 2:
		if (piki->m_navi) {
			PikiAI::ActFormationInitArg initArg(piki->m_navi, 0);
			initArg._09 = 1;
			piki->m_brain->start(0, &initArg);

		} else {
			piki->m_brain->start(1, nullptr);
		}

		transit(piki, PIKISTATE_Walk, nullptr);

		int type = piki->m_pikiKind;
		if (type >= 0 && type <= 4 && !playData->hasMetPikmin(type)) {
			gameSystem->m_section->playMovie_helloPikmin(piki);
		}

		break;
	}
}

/*
 * --INFO--
 * Address:	8018D4A8
 * Size:	000028
 */
void PikiAutoNukiState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.m_type) {
	case 1000:
		_14 = 2;
		break;
	case 2:
		break;
	}
}

/*
 * --INFO--
 * Address:	8018D4D0
 * Size:	000004
 */
void PikiAutoNukiState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018D4D4
 * Size:	000064
 */
void PikiGoHangState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
	piki->setCollisionFlick(false);
}

/*
 * --INFO--
 * Address:	8018D538
 * Size:	0001C8
 */
void PikiGoHangState::exec(Piki* piki)
{
	if (piki->m_navi == nullptr) {
		transit(piki, PIKISTATE_Walk, nullptr);
		return;
	}

	CollPart* collpart = piki->m_navi->m_collTree->getCollPart('rhnd');
	Vector3f position  = piki->getPosition();
	Vector3f diff      = collpart->m_position - position;
	f32 length         = diff.normalise(); // can't use this bc no second round of fmadds - has to use a different normalise.
	f32 scale          = 1.0f;
	if (length > 2.0f * naviMgr->m_naviParms->m_naviParms.m_p037.m_value) {
		scale = 2.0f;
	}
	Vector3f naviPos = piki->m_navi->m_position2;
	f32 factor       = static_cast<NaviParms*>(piki->m_navi->m_parms)->m_naviParms.m_p060.m_value * scale;
	f32 dist         = naviPos.x * naviPos.x + naviPos.y * naviPos.y + naviPos.z * naviPos.z;
	_sqrtf(dist, &dist);
	piki->m_velocity = diff * (factor + dist);

	if (piki->m_navi->getStateID() != 6) {
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

/*
 * --INFO--
 * Address:	8018D700
 * Size:	000034
 */
void PikiGoHangState::cleanup(Piki* piki) { piki->setCollisionFlick(true); }

/*
 * --INFO--
 * Address:	8018D734
 * Size:	000004
 */
void PikiHangedState::onKeyEvent(SysShape::KeyEvent const& keyEvent) { }

/*
 * --INFO--
 * Address:	8018D738
 * Size:	0000C4
 */
void PikiHangedState::init(Piki* piki, StateArg* stateArg)
{
	piki->startSound(PSSE_PK_VC_HANG, false);
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, this, nullptr);
	piki->m_position2 = Vector3f(0.0f);
	piki->m_velocity  = Vector3f(0.0f);
	if (piki->m_navi) {
		piki->startSound(piki->m_navi, PSSE_PK_VC_THROW_WAIT, false);
	}

	piki->setAtari(false);
}

/*
 * --INFO--
 * Address:	8018D7FC
 * Size:	00006C
 */
void PikiHangedState::exec(Piki* piki)
{
	if (piki->m_navi != nullptr && piki->m_navi->getStateID() != 6) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018D868
 * Size:	000034
 */
void PikiHangedState::cleanup(Piki* piki) { piki->setAtari(true); }

/*
 * --INFO--
 * Address:	8018D89C
 * Size:	00006C
 */
bool PikiHangedState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8018D908
 * Size:	000004
 */
void PikiWaterHangedState::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	8018D90C
 * Size:	0000C4
 */
void PikiWaterHangedState::init(Piki* piki, StateArg* stateArg)
{
	WaterHangedStateArg* waterHangedArg = static_cast<WaterHangedStateArg*>(stateArg);
	if (waterHangedArg) {
		m_piki = waterHangedArg->m_piki;
	} else {
		m_piki = nullptr;
	}

	piki->startSound(PSSE_PK_VC_HANG, false);
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, this, nullptr);
	piki->m_position2 = Vector3f(0.0f);
	piki->m_velocity  = Vector3f(0.0f);
	piki->setAtari(false);
}

/*
 * --INFO--
 * Address:	8018D9D0
 * Size:	0000A8
 */
void PikiWaterHangedState::exec(Piki* piki)
{
	if (m_piki != 0) {
		int currActID   = m_piki->getCurrActionID();
		int currStateID = m_piki->getStateID();

		if (currActID != 12 || currStateID != PIKISTATE_Walk) {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	} else {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8018DA78
 * Size:	000034
 */
void PikiWaterHangedState::cleanup(Piki* piki) { piki->setAtari(true); }

/*
 * --INFO--
 * Address:	8018DAAC
 * Size:	00006C
 */
bool PikiWaterHangedState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8018DB18
 * Size:	000070
 */
void PikiHipDropState::init(Piki* piki, StateArg* stateArg)
{
	piki->m_position2.z = 0.0f;
	piki->m_position2.x = 0.0f;
	_14                 = 0;
	_10                 = 0.25f;
	piki->m_position2.y = 0.0f;

	efx::TPkEffect* effectsObj = piki->m_effectsObj;
	effectsObj->killNage_();
	effectsObj->createBlackDown_(effectsObj->_10);
	piki->m_updateContext._09 = true;
}

/*
 * --INFO--
 * Address:	8018DB88
 * Size:	0003C8
 */
void PikiHipDropState::exec(Piki* piki)
{
	if (_14 == 0) {
		piki->m_position2.y = 0.0f;
		_10 -= sys->m_deltaTime;
		if (_10 <= 0.0f) {
			piki->m_position2.y    = -_aiConstants->m_gravity.m_data / 2;
			Creature* closestEnemy = nullptr;
			f32 minDist            = 12800.0f;
			Vector3f position      = piki->getPosition();
			Sys::Sphere sphere(position, 50.0f);
			CellIteratorArg iterArg(sphere);
			iterArg._14 = 1;
			CellIterator iterator(iterArg);
			iterator.first();

			while (!iterator.isDone()) {
				Creature* creature = static_cast<Creature*>(*iterator);
				if (creature->isTeki() && creature->isAlive() && creature->isLivingThing()) {
					Vector3f creaturePos = creature->getPosition();
					Vector3f pikiPos     = piki->getPosition();
					Vector3f diff        = creaturePos - pikiPos;

					f32 currDist = _lenVec(diff);

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
					piki->m_position2.x = enemyPos.x;
					piki->m_position2.z = enemyPos.z;
				}
			}
			_14 = 1;
			piki->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
		}

	} else if (_14 == 1) {
		piki->m_faceDir += sys->m_deltaTime * PI / 0.2f;
		piki->m_faceDir = roundAng(piki->m_faceDir);

	} else if (_14 == 2) {
		piki->m_velocity = Vector3f(0.0f);
		_10 -= sys->m_deltaTime;
		if (_10 <= 0.0f) {
			transit(piki, PIKISTATE_Walk, nullptr);
			if (!piki->invokeAI()) {
				piki->m_brain->start(1, nullptr);
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

/*
 * --INFO--
 * Address:	8018DF50
 * Size:	000038
 */
void PikiHipDropState::cleanup(Piki* piki)
{
	piki->m_effectsObj->killBlackDown_();
	piki->m_updateContext._09 = false;
}

/*
 * --INFO--
 * Address:	8018DF88
 * Size:	000004
 */
void PikiHipDropState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	8018DF8C
 * Size:	00002C
 */
void PikiHipDropState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	if (_14 != 2) {
		dosin(piki);
	}
}

/*
 * --INFO--
 * Address:	8018DFB8
 * Size:	0002E0
 */
void PikiHipDropState::collisionCallback(Piki* piki, CollEvent& collEvent)
{
	if (!collEvent.m_collidingCreature->isPiki()) {
		Vector3f position = piki->getPosition();
		efx::createSimpleBlackDrop(position);
		rumbleMgr->startRumble(11, position, 2);
		cameraMgr->startVibration(6, position, 2);

		if (!collEvent.m_collidingCreature->isTeki()) {
			piki->startSound(PSSE_PK_SE_DOSUN, false);
		}

		if (collEvent.m_collidingCreature->isTeki()) {
			InteractHipdrop hipdrop(piki, piki->getParms()->m_pikiParms._1200.m_value, collEvent._04);
			bool check        = false;
			Vector3f velocity = piki->getVelocity();
			if (velocity.y < 0.0f) {
				check = collEvent.m_collidingCreature->stimulate(hipdrop);
				earthquake(piki);
			}

			InteractPress press(piki, 10.0f, collEvent._04);
			Vector3f velocity2 = piki->getVelocity();
			if (velocity2.y < 0.0f) {
				check = collEvent.m_collidingCreature->stimulate(press);
			}

			piki->startSound(PSSE_PK_SE_DOSUN_HIT, false);
			if (!check && collEvent._04 != nullptr && collEvent._04->isStickable() && collEvent.m_collidingCreature->isLivingThing()) {
				piki->startStick(collEvent.m_collidingCreature, collEvent._04);
				piki->startSound(collEvent.m_collidingCreature, PSSE_PK_SE_ATTACH, true);
			}
		}

		if (piki->getStateID() == PIKISTATE_HipDrop) {
			transit(piki, PIKISTATE_Walk, nullptr);
			if (!piki->invokeAI(&collEvent, true)) {
				piki->m_brain->start(1, nullptr);
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

/*
 * --INFO--
 * Address:	8018E298
 * Size:	00002C
 */
void PikiHipDropState::platCallback(Piki* piki, Game::PlatEvent&)
{
	if (_14 != 2) {
		dosin(piki);
	}
}

/*
 * --INFO--
 * Address:	8018E2C4
 * Size:	0000BC
 */
void PikiHipDropState::dosin(Piki* piki)
{
	Vector3f position = piki->getPosition();
	efx::createSimpleBlackDrop(position);
	rumbleMgr->startRumble(11, position, 2);
	cameraMgr->startVibration(6, position, 2);
	piki->startSound(PSSE_PK_SE_DOSUN, false);
	_14 = 2;
	_10 = 0.3f;
	earthquake(piki);
}

/*
 * --INFO--
 * Address:	8018E380
 * Size:	000108
 */
void PikiHipDropState::earthquake(Piki* piki)
{
	Vector3f position = piki->getPosition();
	f32 rad           = pikiMgr->m_parms->m_pikiParms._11D8.m_value;
	Sys::Sphere sphere(position, rad);
	CellIteratorArg iterArg(sphere);
	iterArg._14 = 1;

	CellIterator iterator(iterArg);
	iterator.first();

	while (!iterator.isDone()) {
		Creature* creature = static_cast<Creature*>(*iterator);
		InteractEarthquake earthquake(piki, 1.0f);
		creature->stimulate(earthquake);
		iterator.next();
	}
}

/*
 * --INFO--
 * Address:	8018E488
 * Size:	000088
 */
void PikiFallMeckState::init(Piki* piki, StateArg* stateArg)
{
	FallMeckStateArg* fallArg = static_cast<FallMeckStateArg*>(stateArg);
	piki->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	piki->endStick();
	if (fallArg) {
		_10 = fallArg->_00;
	} else {
		_10 = false;
	}
}

/*
 * --INFO--
 * Address:	8018E510
 * Size:	000038
 */
void PikiFallMeckState::exec(Piki* piki)
{
	if (piki->_248) {
		bounceCallback(piki, piki->_248);
	}
}

/*
 * --INFO--
 * Address:	8018E548
 * Size:	000004
 */
void PikiFallMeckState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	8018E54C
 * Size:	000004
 */
void PikiFallMeckState::collisionCallback(Piki* piki, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8018E550
 * Size:	000034
 */
void PikiFallMeckState::platCallback(Piki* piki, PlatEvent& platEvent) { transit(piki, PIKISTATE_Walk, nullptr); }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000284
//  */
// void PikiFallMeckState::becomePikihead(Piki* piki)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8018E584
 * Size:	00054C
 */
void PikiFallMeckState::bounceCallback(Piki* piki, Sys::Triangle*)
{
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

/*
 * --INFO--
 * Address:	8018EAD0
 * Size:	0000A0
 */
void PikiSuikomiState::init(Piki* piki, StateArg* stateArg)
{
	SuikomiStateArg* suikomiArg = static_cast<SuikomiStateArg*>(stateArg);
	P2ASSERTLINE(2572, suikomiArg != nullptr);
	m_creature = suikomiArg->m_creature;
	m_collpart = suikomiArg->m_collpart;
	_1C        = suikomiArg->_08;
	_10        = 0;
	piki->setMoveVelocity(false);
	piki->endStick();
}

/*
 * --INFO--
 * Address:	8018EB70
 * Size:	0000EC
 */
void PikiSuikomiState::exec(Piki* piki)
{
	if (!m_creature->isAlive()) {
		piki->m_scale = Vector3f(piki->getBaseScale());
		piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
		transit(piki, PIKISTATE_Walk, nullptr);
		return;
	}

	if (_10 == 0) {
		execMouth(piki);
	} else if (_10 == 1) {
		execString(piki);
	} else {
		execStomach(piki);
	}
}

/*
 * --INFO--
 * Address:	8018EC5C
 * Size:	0001FC
 */
void PikiSuikomiState::execMouth(Piki* piki)
{
	Vector3f position;
	if (m_collpart == nullptr) {
		position = _1C->m_position;
		position.y -= _1C->m_radius;

	} else {
		Sys::Tube tube;
		m_collpart->getTube(tube);
		position = tube.m_startPos;
	}

	Vector3f pikiPos = piki->getPosition();
	Vector3f diff    = position - pikiPos;
	f32 length       = _normaliseVec(diff); // regswaps.

	if (length < 10.0f) {
		if (m_collpart == nullptr) {
			piki->setMoveVelocity(true);
			piki->startCaptureStomach(_1C);
			_10 = 2;
			piki->startMotion(IPikiAnims::ESA, IPikiAnims::ESA, piki, nullptr);
			_20 = pikiMgr->m_parms->m_pikiParms._11B0.m_value;
		} else {
			piki->startStick(m_creature, m_collpart);
			piki->setMoveVelocity(true);
			_10 = 1;
		}

	} else {
		piki->m_position2 = diff * 600.0f;
	}
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	bne      lbl_8018ECB8
	lwz      r3, 0x1c(r30)
	lfs      f30, 0x50(r3)
	lfs      f0, 0x1c(r3)
	lfs      f31, 0x4c(r3)
	fsubs    f30, f30, f0
	lfs      f29, 0x54(r3)
	b        lbl_8018ECCC

lbl_8018ECB8:
	addi     r4, r1, 0x14
	bl       getTube__8CollPartFRQ23Sys4Tube
	lfs      f31, 0x14(r1)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)

lbl_8018ECCC:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f30, f0
	lfs      f1, 8(r1)
	fsubs    f4, f29, f2
	lfs      f0, lbl_80518DE0@sda21(r2)
	fsubs    f2, f31, f1
	fmuls    f1, f3, f3
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8018ED28
	ble      lbl_8018ED2C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8018ED2C

lbl_8018ED28:
	fmr      f1, f0

lbl_8018ED2C:
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8018ED50
	lfs      f0, lbl_80518DE4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	b        lbl_8018ED54

lbl_8018ED50:
	fmr      f1, f0

lbl_8018ED54:
	lfs      f0, lbl_80518DCC@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8018EE0C
	lwz      r5, 0x18(r30)
	cmplwi   r5, 0
	bne      lbl_8018EDDC
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x1e8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r30)
	mr       r3, r31
	bl       startCaptureStomach__Q24Game8FakePikiFP8CollPart
	li       r0, 2
	cmplwi   r31, 0
	stb      r0, 0x10(r30)
	mr       r6, r31
	beq      lbl_8018EDA8
	addi     r6, r31, 0x178

lbl_8018EDA8:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 8
	li       r5, 8
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f0, 0x11c8(r3)
	stfs     f0, 0x20(r30)
	b        lbl_8018EE28

lbl_8018EDDC:
	lwz      r4, 0x14(r30)
	mr       r3, r31
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x1e8(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x10(r30)
	b        lbl_8018EE28

lbl_8018EE0C:
	lfs      f0, lbl_80518E68@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f1, f3, f0
	fmuls    f0, f4, f0
	stfs     f2, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f0, 0x208(r31)

lbl_8018EE28:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018EE58
 * Size:	000038
 */
void PikiSuikomiState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if ((u32)keyEvent.m_type == 0) {
		piki->startSound(PSSE_PK_VC_SWALLOWED, PSGame::SeMgr::UNK_4);
	}
}

/*
 * --INFO--
 * Address:	8018EE90
 * Size:	000108
 */
void PikiSuikomiState::execString(Piki* piki)
{
	Sys::Tube tube;
	m_collpart->getTube(tube);
	Vector3f axisVec;
	tube.getAxisVector(axisVec);
	axisVec.x *= 350.0f;
	axisVec.y *= 350.0f;
	axisVec.z *= 350.0f;

	piki->m_position2 = axisVec;
	piki->move(sys->m_deltaTime);

	if (piki->_104.y >= 1.0f) {
		piki->endStick();
		piki->startCaptureStomach(_1C);
		_10 = 2;
		piki->startMotion(IPikiAnims::ESA, IPikiAnims::ESA, nullptr, nullptr);
		_20 = pikiMgr->m_parms->m_pikiParms._11B0.m_value;
	}
}

/*
 * --INFO--
 * Address:	8018EF98
 * Size:	000014
 */
bool PikiSuikomiState::ignoreAtari(Piki* piki, Creature* creature) { return (u8)(m_creature == creature); }

/*
 * --INFO--
 * Address:	8018EFAC
 * Size:	0001C0
 */
void PikiSuikomiState::execStomach(Piki* piki)
{
	if (m_creature) {
		if (m_creature->m_objectTypeID != 2) {
			JUT_PANICLINE(2680, "not teki (%s)!", m_creature->getCreatureName());
		}
		EnemyBase* enemy = static_cast<EnemyBase*>(m_creature);
		if (!enemy->isEvent(0, EB_Bittered) && !(enemy->m_health <= 0.0f)) {
			_20 -= sys->m_deltaTime;
		}
	}

	if (_10 == 3) {
		f32 scale = _20 / 0.5f;
		scale *= piki->getBaseScale();
		piki->m_scale = Vector3f(scale);
		if (_20 <= 0.0f) {
			if (piki->isPikmin()) {
				deathMgr->inc(0);
			}

			piki->kill(nullptr);
		}

	} else if (piki->m_stomachCaptureCollPart == nullptr) {
		Vector3f vec = Vector3f(0.0f, -900.0f, 0.0f);
		BlowStateArg blowArg(vec, 0.0f, 0, 10, m_creature);
		transit(piki, PIKISTATE_Blow, &blowArg);

	} else if (_20 <= 0.0f) {
		_10 = 3;
		_20 = 0.5f;
	}
}

/*
 * --INFO--
 * Address:	8018F16C
 * Size:	000048
 */
void PikiSuikomiState::cleanup(Piki* piki)
{
	piki->endCaptureStomach();
	piki->setMoveVelocity(true);
}

/*
 * --INFO--
 * Address:	8018F1B4
 * Size:	000004
 */
void PikiFlyingState::stopEffect(void) { }

/*
 * --INFO--
 * Address:	8018F1B8
 * Size:	000004
 */
void PikiFlyingState::restartEffect(void) { }

/*
 * --INFO--
 * Address:	8018F1BC
 * Size:	000124
 */
void PikiFlyingState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x23
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r7, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0x23
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c4(r31)
	cmplwi   r3, 0
	beq      lbl_8018F250
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 5
	bne      lbl_8018F234
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018F250

lbl_8018F234:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018F250:
	lwz      r3, 0x250(r31)
	li       r4, 0x2803
	li       r5, 0x5a
	li       r6, 0
	bl       startFreePikiSound__Q23PSM4PikiFUlUlUl
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x14(r30)
	li       r4, 0
	stw      r0, 0x30(r30)
	stb      r0, 0x15(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x1e8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x258(r31)
	lwz      r4, 0x10(r3)
	lwz      r5, 0x1c(r3)
	bl       "createNage___Q23efx9TPkEffectFP10Vector3<f>PA4_f"
	li       r0, 1
	stb      r0, 0x135(r31)
	lbz      r0, throwPikiDebug__Q24Game7PikiMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8018F2C8
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xdc(r12)
	mtctr    r12
	bctrl

lbl_8018F2C8:
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
 * Address:	8018F2E0
 * Size:	000074
 */
void PikiFlyingState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	transit(piki, PIKISTATE_Walk, nullptr);
	if (!piki->invokeAI()) {
		piki->m_brain->start(1, nullptr);
	}

	piki->m_soundObj->startFreePikiSound(PSSE_PK_VC_LAND, 90, 0);
}

/*
 * --INFO--
 * Address:	8018F354
 * Size:	000328
 */
void PikiFlyingState::collisionCallback(Piki* piki, Game::CollEvent&)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stmw     r27, 0x5c(r1)
	mr       r28, r3
	mr       r30, r5
	mr       r29, r4
	lwz      r3, 4(r5)
	lwz      r31, 0(r5)
	cmplwi   r3, 0
	beq      lbl_8018F384
	bl       isStickable__8CollPartFv

lbl_8018F384:
	mr       r3, r29
	lwz      r4, 0(r30)
	lwz      r12, 0(r29)
	lwz      r12, 0x190(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018F534
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018F534
	mr       r4, r29
	addi     r3, r1, 0x1c
	lwz      r12, 0(r29)
	li       r27, 0
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x20(r1)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8018F448
	lwz      r5, 4(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_80518DCC@sda21(r2)
	lis      r3, __vt__Q24Game13InteractPress@ha
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q24Game13InteractPress@l
	addi     r4, r1, 0x44
	stw      r29, 0x48(r1)
	stw      r0, 0x44(r1)
	stfs     f0, 0x4c(r1)
	stw      r5, 0x50(r1)
	lwz      r3, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r27, r3

lbl_8018F448:
	clrlwi.  r0, r27, 0x18
	bne      lbl_8018F498
	lwz      r5, 4(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_80518DCC@sda21(r2)
	lis      r3, __vt__Q24Game20InteractFlyCollision@ha
	stw      r0, 0x34(r1)
	addi     r0, r3, __vt__Q24Game20InteractFlyCollision@l
	addi     r4, r1, 0x34
	stw      r29, 0x38(r1)
	stw      r0, 0x34(r1)
	stfs     f0, 0x3c(r1)
	stw      r5, 0x40(r1)
	lwz      r3, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r27, r3

lbl_8018F498:
	clrlwi.  r0, r27, 0x18
	bne      lbl_8018F534
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_8018F4FC
	bl       isStickable__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018F4FC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018F4FC
	lwz      r4, 0(r30)
	mr       r3, r29
	lwz      r5, 4(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r4, 0(r30)
	mr       r3, r29
	li       r5, 0x2805
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	b        lbl_8018F534

lbl_8018F4FC:
	mr       r4, r29
	addi     r3, r1, 0x10
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	addi     r3, r1, 0x28
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	bl       "createSimpleInstick__3efxFR10Vector3<f>"

lbl_8018F534:
	lhz      r0, 0x128(r31)
	cmplwi   r0, 0x408
	bne      lbl_8018F5DC
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_8018F5DC
	lis      r4, 0x746F7073@ha
	addi     r3, r3, 0x30
	addi     r4, r4, 0x746F7073@l
	li       r5, 0x2a
	bl       match__4ID32FUlc
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018F5DC
	lwz      r4, 0(r30)
	mr       r3, r29
	lwz      r5, 4(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r4, 0(r30)
	mr       r3, r29
	li       r5, 0x2805
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI10ActCropArg@ha
	addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
	stw      r31, 0xc(r1)
	addi     r0, r3, __vt__Q26PikiAI10ActCropArg@l
	addi     r5, r1, 8
	stw      r4, 8(r1)
	li       r4, 8
	stw      r0, 8(r1)
	lwz      r3, 0x294(r29)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_8018F668

lbl_8018F5DC:
	mr       r3, r29
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 6
	bne      lbl_8018F668
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018F668
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r30
	li       r5, 1
	bl       invokeAI__Q24Game4PikiFPQ24Game9CollEventb
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018F650
	lwz      r3, 0x294(r29)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_8018F650:
	lwz      r3, 0x294(r29)
	bl       getCurrAction__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_8018F668
	lwz      r3, 0x294(r29)
	bl       getCurrAction__Q26PikiAI5BrainFv

lbl_8018F668:
	lmw      r27, 0x5c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018F67C
 * Size:	00006C
 */
bool PikiFlyingState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8018F6E8
 * Size:	0003CC
 */
void PikiFlyingState::exec(Piki* piki)
{
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

/*
 * --INFO--
 * Address:	8018FAB4
 * Size:	000068
 */
void PikiFlyingState::cleanup(Piki* piki)
{
	piki->m_updateContext._09 = false;
	piki->setMoveVelocity(true);
	piki->m_effectsObj->killNage_();
	piki->setDebugCollision(false);
}

/*
 * --INFO--
 * Address:	8018FB1C
 * Size:	000170
 */
void PikiFlickState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lis      r7, lbl_8047EC60@ha
	lis      r6, lbl_8047ED3C@ha
	addi     r7, r7, lbl_8047EC60@l
	mr       r29, r3
	mr       r30, r4
	addi     r0, r6, lbl_8047ED3C@l
	mr       r31, r5
	mr       r3, r7
	mr       r5, r0
	li       r4, 0xbf1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r0, 0
	sth      r0, 0x14(r29)
	lfs      f0, 0(r31)
	stfs     f0, 0x1c(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80518DC8@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80518E3C@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, lbl_80518E2C@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f0, f0, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x20(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_80518DC8@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_80518E1C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80518E58@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x204(r30)
	lfs      f31, 4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	cmplwi   r29, 0
	lfs      f0, lbl_80518E2C@sda21(r2)
	mr       r6, r29
	stw      r0, 0x18(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	fmuls    f0, f0, f31
	lfd      f2, 0x18(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f0, f0, f1, f31
	stfs     f0, 0x24(r29)
	beq      lbl_8018FC3C
	lwz      r6, 0x10(r29)

lbl_8018FC3C:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x16
	li       r5, 0x16
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	stw      r30, 0x28(r29)
	li       r0, 0
	stb      r0, 0x2c(r29)
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018FC8C
 * Size:	000018
 */
void PikiFlickState::onFlute(Piki* piki, Navi* navi)
{
	_18          = 0.0f;
	_2C          = true;
	piki->m_navi = navi;
}

/*
 * --INFO--
 * Address:	8018FCA4
 * Size:	000208
 */
void PikiFlickState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8047ED50@ha
	lis      r6, lbl_8047EC60@ha
	stw      r0, 0x34(r1)
	addi     r0, r6, lbl_8047EC60@l
	addi     r5, r5, lbl_8047ED50@l
	stw      r31, 0x2c(r1)
	mr       r31, r4
	li       r4, 0xc14
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lhz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_8018FDB8
	lfs      f1, 0x1c(r30)
	lfs      f0, lbl_80518DE0@sda21(r2)
	lfs      f2, 0x24(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8018FD2C
	lfs      f0, lbl_80518E38@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8018FD50

lbl_8018FD2C:
	lfs      f0, lbl_80518E34@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8018FD50:
	fneg     f2, f2
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x200(r31)
	lfs      f1, 0x1c(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8018FD70
	fneg     f1, f1

lbl_8018FD70:
	lfs      f0, lbl_80518E34@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f0, f2, f0
	stfs     f0, 0x208(r31)
	lfs      f1, 0x1fc(r31)
	lfs      f0, 0x20(r30)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	b        lbl_8018FE94

lbl_8018FDB8:
	cmplwi   r0, 2
	bne      lbl_8018FE68
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x18(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x18(r30)
	lfs      f1, 0x18(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8018FE38
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018FE38
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_8018FE10
	lwz      r6, 0x10(r30)

lbl_8018FE10:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0xe
	li       r5, 0xe
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 3
	sth      r0, 0x14(r30)

lbl_8018FE38:
	lfs      f2, lbl_80518E84@sda21(r2)
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x200(r31)
	lfs      f1, 0x208(r31)
	fmuls    f1, f2, f1
	stfs     f1, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	b        lbl_8018FE94

lbl_8018FE68:
	lfs      f2, lbl_80518E84@sda21(r2)
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_80518DE0@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x200(r31)
	lfs      f1, 0x208(r31)
	fmuls    f1, f2, f1
	stfs     f1, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_8018FE94:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018FEAC
 * Size:	000124
 */
void PikiFlickState::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lwz      r0, 0x1c(r4)
	mr       r30, r3
	lwz      r31, 0x28(r3)
	cmpwi    r0, 0x3e8
	beq      lbl_8018FEE8
	b        lbl_8018FFA8

lbl_8018FEE8:
	lhz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_8018FF30
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_8018FF04
	lwz      r6, 0x10(r30)

lbl_8018FF04:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x17
	li       r5, 0x17
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 1
	sth      r0, 0x14(r30)
	b        lbl_8018FFA8

lbl_8018FF30:
	cmplwi   r0, 1
	bne      lbl_8018FF84
	li       r0, 2
	sth      r0, 0x14(r30)
	lwz      r3, 0xc0(r31)
	lfs      f31, 0xae8(r3)
	lfs      f30, 0xac0(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	fsubs    f0, f30, f31
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f0, f0, f1, f31
	stfs     f0, 0x18(r30)
	b        lbl_8018FFA8

lbl_8018FF84:
	bl       rand
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018FFA8:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018FFD0
 * Size:	0000AC
 */
void PikiFlickState::cleanup(Piki* piki)
{
	if (piki->isAlive() && _2C) {
		PikiAI::ActFormationInitArg initArg(piki->m_navi, 0);
		initArg._09 = 1;
		piki->m_brain->start(0, &initArg);
	}
}

/*
 * --INFO--
 * Address:	8019007C
 * Size:	0001A4
 */
void PikiBlowState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bne      lbl_801900C0
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ED64@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0xc97
	addi     r5, r5, lbl_8047ED64@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801900F8

lbl_801900C0:
	lfs      f0, 0(r5)
	stfs     f0, 0x18(r30)
	lfs      f0, 4(r5)
	stfs     f0, 0x1c(r30)
	lfs      f0, 8(r5)
	stfs     f0, 0x20(r30)
	lfs      f0, 0xc(r5)
	stfs     f0, 0x24(r30)
	lbz      r0, 0x10(r5)
	stb      r0, 0x29(r30)
	lhz      r0, 0x12(r5)
	sth      r0, 0x2a(r30)
	lwz      r0, 0x14(r5)
	stw      r0, 0x14(r30)

lbl_801900F8:
	li       r0, 0
	cmplwi   r31, 0
	stb      r0, 0x28(r30)
	mr       r6, r31
	beq      lbl_80190110
	addi     r6, r31, 0x178

lbl_80190110:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x16
	li       r5, 0x16
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x10(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_80518DD8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 8(r1)
	lfs      f3, lbl_80518DC8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80518E2C@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f0, lbl_80518DE4@sda21(r2)
	lfs      f2, 0x1c(r30)
	fdivs    f3, f4, f3
	fmadds   f0, f1, f3, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x204(r31)
	lfs      f1, 0x18(r30)
	lfs      f2, 0x20(r30)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_80518E3C@sda21(r2)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lhz      r0, 0x2a(r30)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_801901E0
	lbz      r0, 0x2b9(r31)
	cmpwi    r0, 1
	blt      lbl_801901F0
	lwz      r4, 0x258(r31)
	lwz      r3, 0xc(r4)
	lwz      r4, 8(r4)
	bl       "createSimpleChiru__3efxFR10Vector3<f>l"
	mr       r3, r31
	li       r4, 0x2846
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	li       r0, 0
	stb      r0, 0x2b9(r31)
	b        lbl_801901F0

lbl_801901E0:
	mr       r3, r31
	li       r4, 0x2854
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb

lbl_801901F0:
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80190208
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv

lbl_80190208:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190220
 * Size:	000140
 */
void PikiBlowState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80190254
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv

lbl_80190254:
	lwz      r0, 0x10(r30)
	cmpwi    r0, 1
	beq      lbl_801902D0
	bge      lbl_80190348
	cmpwi    r0, 0
	bge      lbl_80190270
	b        lbl_80190348

lbl_80190270:
	lfs      f0, 0x18(r30)
	mr       r3, r31
	li       r4, 0x16
	stfs     f0, 0x200(r31)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x208(r31)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80190348
	li       r0, 1
	cmplwi   r31, 0
	stw      r0, 0x10(r30)
	mr       r6, r31
	beq      lbl_801902AC
	addi     r6, r31, 0x178

lbl_801902AC:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x17
	li       r5, 0x17
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80190348

lbl_801902D0:
	lfs      f0, 0x200(r31)
	mr       r3, r31
	lfs      f1, lbl_80518E84@sda21(r2)
	li       r4, 0x17
	fmuls    f0, f0, f1
	stfs     f0, 0x200(r31)
	lfs      f0, 0x208(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x208(r31)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80190324
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80190348

lbl_80190324:
	lwz      r5, 0x248(r31)
	cmplwi   r5, 0
	beq      lbl_80190348
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80190348:
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
 * Address:	80190360
 * Size:	000004
 */
void PikiBlowState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	80190364
 * Size:	000064
 */
void PikiBlowState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if ((u32)keyEvent.m_type == KEYEVENT_END && _10 == 0) {
		_10 = 1;
		piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, nullptr, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801903C8
 * Size:	000010
 */
void PikiBlowState::onFlute(Piki* piki, Navi* navi)
{
	_28          = 1;
	piki->m_navi = navi;
}

/*
 * --INFO--
 * Address:	801903D8
 * Size:	000168
 */
void PikiBlowState::bounceCallback(Piki* piki, Sys::Triangle*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518DE4@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lis      r3, 0x00008000@ha
	lbz      r5, 0x28(r30)
	addi     r0, r3, 0x00008000@l
	lhz      r6, 0x2a(r30)
	neg      r3, r5
	or       r3, r3, r5
	stfs     f0, 0xc(r1)
	srawi    r3, r3, 0x1f
	and      r0, r0, r3
	or       r0, r6, r0
	sth      r0, 8(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, 0x24(r30)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80190498
	lbz      r0, 0x2b9(r31)
	cmpwi    r0, 1
	blt      lbl_8019047C
	lwz      r4, 0x258(r31)
	lwz      r3, 0xc(r4)
	lwz      r4, 8(r4)
	bl       "createSimpleChiru__3efxFR10Vector3<f>l"
	li       r0, 0
	stb      r0, 0x2b9(r31)

lbl_8019047C:
	lwz      r4, 0x14(r30)
	cmplwi   r4, 0
	beq      lbl_80190498
	mr       r3, r31
	li       r5, 0x280a
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb

lbl_80190498:
	lbz      r0, 0x29(r30)
	cmplwi   r0, 0
	beq      lbl_80190508
	mr       r3, r31
	li       r4, 0x280b
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801904D8
	li       r3, 5
	bl       inc__Q24Game8DeathMgrFi

lbl_801904D8:
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0x19
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80190528

lbl_80190508:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	addi     r6, r1, 8
	li       r5, 7
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80190528:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190540
 * Size:	00008C
 */
void PikiKokeDamageState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bne      lbl_80190570
	lfs      f0, lbl_80518DE0@sda21(r2)
	li       r0, 0
	stfs     f0, 0x10(r31)
	sth      r0, 0x14(r31)
	b        lbl_80190580

lbl_80190570:
	lfs      f0, 4(r5)
	stfs     f0, 0x10(r31)
	lhz      r0, 0(r5)
	sth      r0, 0x14(r31)

lbl_80190580:
	cmplwi   r4, 0
	mr       r6, r4
	beq      lbl_80190590
	addi     r6, r4, 0x178

lbl_80190590:
	lwz      r12, 0(r4)
	mr       r3, r4
	li       r4, 0x17
	li       r5, 0x17
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x18(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801905CC
 * Size:	00015C
 */
void PikiKokeDamageState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, lbl_80518DE0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stfs     f2, 0x1e4(r4)
	stfs     f2, 0x1e8(r4)
	stfs     f2, 0x1ec(r4)
	stfs     f2, 0x200(r4)
	stfs     f2, 0x204(r4)
	stfs     f2, 0x208(r4)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 1
	bne      lbl_8019066C
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f0, 0x10(r30)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8019066C
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80190644
	addi     r6, r6, 0x178

lbl_80190644:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0xe
	li       r5, 0xe
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x18(r30)

lbl_8019066C:
	lwz      r0, 0x18(r30)
	cmpwi    r0, 0
	bne      lbl_80190698
	mr       r3, r31
	li       r4, 0x17
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80190698
	li       r0, 1
	stw      r0, 0x18(r30)
	b        lbl_80190710

lbl_80190698:
	lwz      r0, 0x18(r30)
	cmpwi    r0, 2
	bne      lbl_80190710
	mr       r3, r31
	li       r4, 0xe
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80190710
	lhz      r0, 0x14(r30)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_801906F0
	li       r0, 5
	mr       r3, r30
	sth      r0, 8(r1)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 0x13
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80190710

lbl_801906F0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80190710:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190728
 * Size:	00001C
 */
void PikiKokeDamageState::onFlute(Piki* piki, Game::Navi*)
{
	/*
	lhz      r0, 0x14(r3)
	lfs      f0, lbl_80518DE0@sda21(r2)
	ori      r0, r0, 0x8000
	sth      r0, 0x14(r3)
	stfs     f0, 0x10(r3)
	stw      r5, 0x2c4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190744
 * Size:	0000E8
 */
void PikiKokeDamageState::cleanup(Piki* piki)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80190814
	lhz      r3, 0x14(r30)
	rlwinm.  r0, r3, 0, 0x10, 0x10
	beq      lbl_801907DC
	lwz      r7, 0x2c4(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	li       r3, 0
	lis      r4, __vt__Q26PikiAI17CreatureActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q26PikiAI17CreatureActionArg@l
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	stw      r0, 8(r1)
	addi     r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	li       r0, 1
	addi     r5, r1, 8
	stb      r3, 0x11(r1)
	li       r4, 0
	stw      r7, 0xc(r1)
	stw      r6, 8(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x294(r31)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80190814

lbl_801907DC:
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80190804
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 5
	beq      lbl_80190814
	lwz      r3, 0x294(r31)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80190814

lbl_80190804:
	mr       r3, r31
	li       r4, 0x283f
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb

lbl_80190814:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019082C
 * Size:	000060
 */
void PikiKokeDamageState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_8019087C
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8019085C
	li       r0, 1
	stw      r0, 0x18(r3)
	b        lbl_8019087C

lbl_8019085C:
	cmpwi    r0, 2
	bne      lbl_8019087C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8019087C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019088C
 * Size:	000120
 */
void PikiKokeState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80518E4C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80190918
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801908EC
	addi     r6, r31, 0x178

lbl_801908EC:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x3c
	li       r5, 0x3c
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x11(r30)
	b        lbl_80190950

lbl_80190918:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80190928
	addi     r6, r31, 0x178

lbl_80190928:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x1a
	li       r5, 0x1a
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x11(r30)

lbl_80190950:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80518DC8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80518E88@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80518DD0@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0x10(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801909AC
 * Size:	00000C
 */
void PikiKokeState::onFlute(Piki* piki, Game::Navi*)
{
	// Generated from stb r0, 0x10(r3)
	// _10 = 0;
}

/*
 * --INFO--
 * Address:	801909B8
 * Size:	000094
 */
void PikiKokeState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r4, 0x1b8(r4)
	cmplwi   r4, 0
	beq      lbl_801909E0
	lha      r0, 0x20(r4)
	b        lbl_801909E4

lbl_801909E0:
	li       r0, -1

lbl_801909E4:
	cmpwi    r0, 0x1a
	beq      lbl_80190A10
	cmpwi    r0, 0x3c
	beq      lbl_80190A10
	lwz      r12, 0(r3)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80190A10:
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
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190A4C
 * Size:	0000F0
 */
void PikiKokeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	cmpwi    r0, 0xc8
	beq      lbl_80190A8C
	bge      lbl_80190A80
	cmpwi    r0, 2
	beq      lbl_80190AC0
	bge      lbl_80190B2C
	cmpwi    r0, 1
	bge      lbl_80190AE0
	b        lbl_80190B2C

lbl_80190A80:
	cmpwi    r0, 0x3e8
	beq      lbl_80190B14
	b        lbl_80190B2C

lbl_80190A8C:
	lbz      r0, 0x11(r3)
	cmplwi   r0, 0
	beq      lbl_80190AAC
	mr       r3, r4
	li       r4, 0x2843
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_80190B2C

lbl_80190AAC:
	mr       r3, r4
	li       r4, 0x2844
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_80190B2C

lbl_80190AC0:
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x200(r4)
	stfs     f0, 0x204(r4)
	stfs     f0, 0x208(r4)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	b        lbl_80190B2C

lbl_80190AE0:
	lbz      r5, 0x10(r3)
	addi     r0, r5, -1
	stb      r0, 0x10(r3)
	lbz      r0, 0x10(r3)
	extsb.   r0, r0
	bgt      lbl_80190B2C
	lbz      r0, 0x1c4(r4)
	ori      r0, r0, 2
	stb      r0, 0x1c4(r4)
	lbz      r0, 0x1e0(r4)
	ori      r0, r0, 2
	stb      r0, 0x1e0(r4)
	b        lbl_80190B2C

lbl_80190B14:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80190B2C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190B3C
 * Size:	000004
 */
void PikiKokeState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	80190B40
 * Size:	000200
 */
void PikiDrownState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x294(r4)
	li       r4, 1
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80190B7C
	addi     r6, r31, 0x178

lbl_80190B7C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x25
	li       r5, 0x25
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, 0x1b8(r31)
	cmplwi   r3, 0
	beq      lbl_80190BB0
	lha      r0, 0x20(r3)
	b        lbl_80190BB4

lbl_80190BB0:
	li       r0, -1

lbl_80190BB4:
	cmpwi    r0, 0x25
	bne      lbl_80190BC8
	li       r0, 0
	sth      r0, 0x10(r30)
	b        lbl_80190C00

lbl_80190BC8:
	li       r0, 1
	cmplwi   r31, 0
	sth      r0, 0x10(r30)
	mr       r6, r31
	beq      lbl_80190BE0
	addi     r6, r31, 0x178

lbl_80190BE0:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x26
	li       r5, 0x26
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl

lbl_80190C00:
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	li       r0, 0
	lfd      f3, lbl_80518DD8@sda21(r2)
	mr       r3, r31
	stw      r4, 8(r1)
	lfs      f2, lbl_80518DC8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80518E30@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80518DE0@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	fctiwz   f1, f1
	stfd     f1, 0x10(r1)
	lwz      r4, 0x14(r1)
	addi     r4, r4, 6
	sth      r4, 0x12(r30)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	sth      r0, 0x14(r30)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80190C80
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv

lbl_80190C80:
	li       r0, 0
	lfs      f0, lbl_80518DE0@sda21(r2)
	stw      r0, 0x20(r30)
	stb      r0, 0x30(r30)
	sth      r0, 0x16(r30)
	stfs     f0, 0x18(r30)
	stb      r0, 0x1c(r30)
	lwz      r30, 0x258(r31)
	mr       r3, r30
	bl       killMoe___Q23efx9TPkEffectFv
	lwz      r3, 0(r30)
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80190CD8
	rlwinm   r0, r3, 0, 0x1e, 0x1c
	mr       r3, r30
	stw      r0, 0(r30)
	lwz      r4, 0xc(r30)
	bl       "createMoeSmoke___Q23efx9TPkEffectFP10Vector3<f>"
	li       r0, 0x3c
	stw      r0, 0x24(r30)
	lwz      r3, 0xc(r30)
	bl       "createSimpleChinka__3efxFR10Vector3<f>"

lbl_80190CD8:
	lwz      r30, 0x258(r31)
	mr       r3, r30
	bl       killWater___Q23efx9TPkEffectFv
	lwz      r3, 0(r30)
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_80190D00
	rlwinm   r0, r3, 0, 0x1c, 0x1a
	stw      r0, 0(r30)
	lwz      r3, 0x14(r30)
	bl       "createSimpleWaterOff__3efxFR10Vector3<f>"

lbl_80190D00:
	lwz      r30, 0x258(r31)
	mr       r3, r30
	bl       killChudoku___Q23efx9TPkEffectFv
	lwz      r3, 0(r30)
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_80190D28
	rlwinm   r0, r3, 0, 0x1d, 0x1b
	stw      r0, 0(r30)
	lwz      r3, 0xc(r30)
	bl       "createSimpleGedoku__3efxFR10Vector3<f>"

lbl_80190D28:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190D40
 * Size:	000040
 */
bool PikiDrownState::soft_transittable(int)
{
	return false; // fake
	              /*
	              addi     r5, r4, -19
	              li       r3, 1
	              subfic   r0, r5, 1
	              orc      r5, r3, r5
	              mr       r6, r3
	              srwi     r0, r0, 1
	              subf     r0, r0, r5
	              rlwinm.  r0, r0, 1, 0x1f, 0x1f
	              bne      lbl_80190D68
	              li       r6, 0
	          
	          lbl_80190D68:
	              clrlwi.  r0, r6, 0x18
	              bnelr
	              cmpwi    r4, 5
	              beqlr
	              li       r3, 0
	              blr
	              */
}

/*
 * --INFO--
 * Address:	80190D80
 * Size:	000010
 */
void PikiDrownState::onFlute(Piki* piki, Game::Navi*)
{
	/*
	stw      r5, 0x20(r3)
	li       r0, 1
	stb      r0, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80190D90
 * Size:	00000C
 */
void PikiDrownState::outWaterCallback(Piki* piki)
{
	// Generated from stb r0, 0x1C(r3)
	// _1C = 1;
}

/*
 * --INFO--
 * Address:	80190D9C
 * Size:	00074C
 */
void PikiDrownState::exec(Piki* piki)
{
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

/*
 * --INFO--
 * Address:	801914E8
 * Size:	000004
 */
void PikiDrownState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	801914EC
 * Size:	000120
 */
void PikiDrownState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0xc(r1)
	mr       r31, r4
	cmpwi    r0, 2
	beq      lbl_8019152C
	bge      lbl_80191520
	cmpwi    r0, 0
	beq      lbl_80191544
	bge      lbl_80191560
	b        lbl_801915F8

lbl_80191520:
	cmpwi    r0, 0x3e8
	beq      lbl_801915C0
	b        lbl_801915F8

lbl_8019152C:
	lhz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_801915F8
	li       r0, 2
	sth      r0, 0x16(r3)
	b        lbl_801915F8

lbl_80191544:
	lwz      r3, 0x250(r31)
	li       r4, 0x2812
	li       r5, 2
	li       r6, 0
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
	b        lbl_801915F8

lbl_80191560:
	lhz      r0, 0x10(r3)
	cmplwi   r0, 1
	bne      lbl_801915F8
	lhz      r4, 0x12(r3)
	addi     r0, r4, -1
	sth      r0, 0x12(r3)
	lhz      r0, 0x12(r3)
	cmplwi   r0, 0
	bne      lbl_801915F8
	li       r0, 2
	cmplwi   r31, 0
	sth      r0, 0x10(r3)
	mr       r6, r31
	beq      lbl_8019159C
	addi     r6, r6, 0x178

lbl_8019159C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x27
	li       r5, 0x27
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_801915F8

lbl_801915C0:
	lhz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_801915F8
	bge      lbl_801915D4
	b        lbl_801915F8

lbl_801915D4:
	cmpwi    r0, 3
	bge      lbl_801915F8
	li       r3, 3
	bl       inc__Q24Game8DeathMgrFi
	li       r0, -1
	mr       r3, r31
	sth      r0, 0x2a4(r31)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_801915F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019160C
 * Size:	000358
 */
void PikiEmotionState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r4
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r3
	stw      r28, 0x60(r1)
	or.      r28, r5, r5
	lis      r5, lbl_8047EBE8@ha
	addi     r30, r5, lbl_8047EBE8@l
	bne      lbl_80191654
	addi     r3, r30, 0x78
	addi     r5, r30, 0xf4
	li       r4, 0xf59
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80191654:
	lhz      r3, 0(r28)
	li       r0, 0
	sth      r3, 0x24(r29)
	stb      r0, 0x1c(r29)
	lhz      r0, 0x24(r29)
	cmplwi   r0, 9
	beq      lbl_80191944
	cmplwi   r0, 8
	bgt      lbl_80191944
	lis      r3, lbl_804B37DC@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804B37DC@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80191690

lbl_80191690:
	lwz      r9, 0x19c(r30)
	addi     r3, r1, 0x40
	lwz      r8, 0x1a0(r30)
	li       r4, 3
	lwz      r7, 0x1a4(r30)
	lwz      r6, 0x1a8(r30)
	lwz      r5, 0x1ac(r30)
	lwz      r0, 0x1b0(r30)
	stw      r9, 0x40(r1)
	stw      r8, 0x44(r1)
	stw      r7, 0x48(r1)
	stw      r6, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r0, 0x54(r1)
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
	mr       r4, r3
	cmplwi   r31, 0
	sth      r4, 0x26(r29)
	mr       r6, r31
	beq      lbl_801916E4
	addi     r6, r31, 0x178

lbl_801916E4:
	lwz      r12, 0(r31)
	mr       r3, r31
	mr       r5, r4
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_80191704

lbl_80191704:
	lwz      r9, 0x1b4(r30)
	addi     r3, r1, 0x28
	lwz      r8, 0x1b8(r30)
	li       r4, 3
	lwz      r7, 0x1bc(r30)
	lwz      r6, 0x1c0(r30)
	lwz      r5, 0x1c4(r30)
	lwz      r0, 0x1c8(r30)
	stw      r9, 0x28(r1)
	stw      r8, 0x2c(r1)
	stw      r7, 0x30(r1)
	stw      r6, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x3c(r1)
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
	mr       r4, r3
	cmplwi   r31, 0
	sth      r4, 0x26(r29)
	mr       r6, r31
	beq      lbl_80191758
	addi     r6, r31, 0x178

lbl_80191758:
	lwz      r12, 0(r31)
	mr       r3, r31
	mr       r5, r4
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_80191778

lbl_80191778:
	lwz      r7, 0x1cc(r30)
	addi     r3, r1, 0x18
	lwz      r6, 0x1d0(r30)
	li       r4, 2
	lwz      r5, 0x1d4(r30)
	lwz      r0, 0x1d8(r30)
	stw      r7, 0x18(r1)
	stw      r6, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
	mr       r4, r3
	cmplwi   r31, 0
	sth      r4, 0x26(r29)
	mr       r6, r31
	beq      lbl_801917BC
	addi     r6, r31, 0x178

lbl_801917BC:
	lwz      r12, 0(r31)
	mr       r3, r31
	mr       r5, r4
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_801917DC

lbl_801917DC:
	lwz      r7, 0x1dc(r30)
	addi     r3, r1, 8
	lwz      r6, 0x1e0(r30)
	li       r4, 2
	lwz      r5, 0x1e4(r30)
	lwz      r0, 0x1e8(r30)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
	mr       r4, r3
	cmplwi   r31, 0
	sth      r4, 0x26(r29)
	mr       r6, r31
	beq      lbl_80191820
	addi     r6, r31, 0x178

lbl_80191820:
	lwz      r12, 0(r31)
	mr       r3, r31
	mr       r5, r4
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_80191840

lbl_80191840:
	li       r0, 0xc
	cmplwi   r31, 0
	sth      r0, 0x26(r29)
	mr       r6, r31
	beq      lbl_80191858
	addi     r6, r31, 0x178

lbl_80191858:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0xc
	li       r5, 0xc
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_8019187C

lbl_8019187C:
	li       r0, 0x31
	cmplwi   r31, 0
	sth      r0, 0x26(r29)
	mr       r6, r31
	beq      lbl_80191894
	addi     r6, r31, 0x178

lbl_80191894:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x31
	li       r5, 0x31
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_801918B8

lbl_801918B8:
	li       r0, 0x33
	cmplwi   r31, 0
	sth      r0, 0x26(r29)
	mr       r6, r31
	beq      lbl_801918D0
	addi     r6, r31, 0x178

lbl_801918D0:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x33
	li       r5, 0x33
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_801918F4

lbl_801918F4:
	li       r0, 0x1f
	cmplwi   r31, 0
	sth      r0, 0x26(r29)
	mr       r6, r31
	beq      lbl_8019190C
	addi     r6, r31, 0x178

lbl_8019190C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x1f
	li       r5, 0x1f
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80191944
	.global  lbl_80191930

lbl_80191930:
	addi     r3, r30, 0x78
	addi     r5, r30, 0x1ec
	li       r4, 0x1010
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80191944:
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

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void PikiEmotionState::doDump(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80191964
 * Size:	0000A8
 */
void PikiEmotionState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518DE0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lha      r4, 0x26(r30)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801919C8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801919F4

lbl_801919C8:
	lhz      r0, 0x24(r30)
	cmplwi   r0, 9
	bne      lbl_801919F4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801919F4:
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
 * Address:	80191A0C
 * Size:	000004
 */
void PikiEmotionState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	80191A10
 * Size:	0000C0
 */
void PikiEmotionState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	cmpwi    r0, 0x3e8
	beq      lbl_80191A5C
	bge      lbl_80191AC0
	cmpwi    r0, 0xc8
	beq      lbl_80191A38
	b        lbl_80191AC0

lbl_80191A38:
	lha      r0, 0x26(r3)
	cmpwi    r0, 0x31
	beq      lbl_80191A48
	b        lbl_80191AC0

lbl_80191A48:
	mr       r3, r4
	li       r4, 0x2835
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_80191AC0

lbl_80191A5C:
	lhz      r0, 0x24(r3)
	cmplwi   r0, 8
	bne      lbl_80191AA0
	lbz      r5, 0x1d(r3)
	addi     r0, r5, -1
	stb      r0, 0x1d(r3)
	lbz      r0, 0x1d(r3)
	cmplwi   r0, 0
	beq      lbl_80191AA0
	lhz      r0, 0x24(r3)
	addi     r5, r1, 8
	sth      r0, 8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80191AC0

lbl_80191AA0:
	li       r0, 0
	li       r5, 0
	stb      r0, 0x1d(r3)
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80191AC0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80191AD0
 * Size:	000170
 */
void PikiAbsorbState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	or.      r29, r5, r5
	bne      lbl_80191B14
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ECDC@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0x1072
	addi     r5, r5, lbl_8047ECDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80191B14:
	lwz      r0, 0(r29)
	stw      r0, 0x14(r30)
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_80191B44
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ECDC@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0x1074
	addi     r5, r5, lbl_8047ECDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80191B44:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80191B54
	addi     r6, r31, 0x178

lbl_80191B54:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x37
	li       r5, 0x37
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r3, r1, 8
	stb      r0, 0x10(r30)
	stb      r0, 0x18(r30)
	lwz      r4, 0x14(r30)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "turnTo__Q24Game8FakePikiFR10Vector3<f>"
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80191BF4
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ECDC@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0x107b
	addi     r5, r5, lbl_8047ECDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80191BF4:
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x250(r31)
	li       r5, 0x2833
	li       r6, 0
	bl       startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl
	li       r0, 0
	stb      r0, 0x19(r30)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80191C40
 * Size:	000154
 */
void PikiAbsorbState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518DE0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stfs     f0, 0x208(r4)
	stfs     f0, 0x200(r4)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lbz      r0, 0x10(r3)
	cmplwi   r0, 1
	bne      lbl_80191CE4
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80191CE4
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_80191CE4
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game14InteractAbsorb@ha
	addi     r5, r4, __vt__Q24Game11Interaction@l
	stw      r31, 0xc(r1)
	addi     r0, r3, __vt__Q24Game14InteractAbsorb@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r0, 8(r1)
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x18(r30)

lbl_80191CE4:
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_80191D18
	lbz      r3, 0x19(r30)
	addi     r0, r3, 1
	stb      r0, 0x19(r30)
	lbz      r0, 0x19(r30)
	cmplwi   r0, 0xb4
	ble      lbl_80191D18
	li       r3, 1
	li       r0, 0xb4
	stb      r3, 0x18(r30)
	stb      r0, 0x19(r30)

lbl_80191D18:
	mr       r3, r31
	li       r4, 0x37
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80191D7C
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_80191D5C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xe
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80191D7C

lbl_80191D5C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80191D7C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80191D94
 * Size:	00012C
 */
void PikiAbsorbState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0x1c(r1)
	cmpwi    r0, 1
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_80191DE8
	bge      lbl_80191DD0
	cmpwi    r0, 0
	bge      lbl_80191DDC
	b        lbl_80191EA4

lbl_80191DD0:
	cmpwi    r0, 0x3e8
	beq      lbl_80191E64
	b        lbl_80191EA4

lbl_80191DDC:
	li       r0, 1
	stb      r0, 0x10(r29)
	b        lbl_80191EA4

lbl_80191DE8:
	lwz      r3, 0x14(r29)
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x406
	beq      lbl_80191E14
	lis      r3, lbl_8047EC60@ha
	lis      r5, lbl_8047ECDC@ha
	addi     r3, r3, lbl_8047EC60@l
	li       r4, 0x10a5
	addi     r5, r5, lbl_8047ECDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80191E14:
	lwz      r3, 0x14(r29)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80191E50
	lbz      r0, 0x18(r29)
	cmplwi   r0, 0
	bne      lbl_80191E50
	mr       r3, r31
	bl       isShrinking__Q34Game9ItemHoney4ItemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80191EA4

lbl_80191E50:
	li       r0, 2
	mr       r3, r30
	stb      r0, 0x10(r29)
	bl       finishMotion__Q24Game8FakePikiFv
	b        lbl_80191EA4

lbl_80191E64:
	lbz      r0, 0x18(r29)
	cmplwi   r0, 0
	beq      lbl_80191E8C
	lwz      r12, 0(r3)
	li       r5, 0xe
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80191EA4

lbl_80191E8C:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80191EA4:
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
 * Address:	80191EC0
 * Size:	000004
 */
void PikiAbsorbState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	80191EC4
 * Size:	0000E0
 */
void PikiGrowupState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80518DF4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80191F20
	li       r0, 0x12
	sth      r0, 0x10(r30)
	b        lbl_80191F28

lbl_80191F20:
	li       r0, 0x13
	sth      r0, 0x10(r30)

lbl_80191F28:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80191F38
	addi     r6, r31, 0x178

lbl_80191F38:
	lwz      r12, 0(r31)
	mr       r3, r31
	lha      r4, 0x10(r30)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mr       r5, r4
	mtctr    r12
	bctrl
	lha      r4, 0x10(r30)
	mr       r3, r31
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80191F8C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80191F8C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80191FA4
 * Size:	000078
 */
void PikiGrowupState::exec(Piki* piki)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518DE0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lha      r4, 0x10(r30)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80192004
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80192004:
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
 * Address:	8019201C
 * Size:	0001A0
 */
void PikiGrowupState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	cmpwi    r0, 0x3e8
	beq      lbl_80192190
	bge      lbl_801921A8
	cmpwi    r0, 2
	beq      lbl_8019204C
	b        lbl_801921A8

lbl_8019204C:
	lbz      r0, 0x2b9(r31)
	cmpwi    r0, 2
	beq      lbl_801921A8
	mr       r3, r31
	li       r4, 2
	bl       changeHappa__Q24Game4PikiFi
	mr       r3, r31
	li       r4, 0x2845
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	mr       r3, r31
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_801920B0
	lwz      r0, 0x2c4(r31)
	cmplwi   r0, 0
	bne      lbl_801920A0
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	bl       getAliveOrima__Q24Game7NaviMgrFi
	stw      r3, 0x2c4(r31)

lbl_801920A0:
	lwz      r3, 0x2c4(r31)
	mr       r4, r31
	lwz      r3, 0x254(r3)
	bl       changeFlower__Q24Game6CPlateFPQ24Game8Creature

lbl_801920B0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_801921A8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x14
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801921A8
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80192180
	lfs      f0, lbl_80518DE0@sda21(r2)
	lis      r3, lbl_8047EE04@ha
	li       r0, 0
	mr       r4, r31
	addi     r5, r3, lbl_8047EE04@l
	stw      r0, 0x18(r1)
	addi     r3, r1, 8
	stw      r5, 0x14(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x14
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_80192180:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x14
	bl       setDemoFlag__Q24Game8PlayDataFi
	b        lbl_801921A8

lbl_80192190:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801921A8:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801921BC
 * Size:	000004
 */
void PikiGrowupState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	801921C0
 * Size:	000020
 */
void PikiEscapeState::init(Piki* piki, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       initRun__Q24Game15PikiEscapeStateFPQ24Game4Piki
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801921E0
 * Size:	000074
 */
void PikiEscapeState::initRun(Piki* piki)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stb      r0, 0x11(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80518DF4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80192238
	li       r0, 1
	b        lbl_8019223C

lbl_80192238:
	li       r0, 0

lbl_8019223C:
	stb      r0, 0x10(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000120
//  */
// void PikiEscapeState::initKoke(Piki* piki)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000190
//  */
// void PikiEscapeState::findTeki(Piki* piki)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80192254
 * Size:	0005C8
 */
void PikiEscapeState::exec(Piki* piki)
{
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

/*
 * --INFO--
 * Address:	8019281C
 * Size:	00017C
 */
void PikiEscapeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	cmpwi    r0, 0xc8
	beq      lbl_80192864
	bge      lbl_80192858
	cmpwi    r0, 2
	beq      lbl_801928A8
	bge      lbl_80192984
	cmpwi    r0, 1
	bge      lbl_801928DC
	b        lbl_80192984

lbl_80192858:
	cmpwi    r0, 0x3e8
	beq      lbl_80192924
	b        lbl_80192984

lbl_80192864:
	lbz      r0, 0x11(r31)
	cmpwi    r0, 2
	beq      lbl_80192880
	bge      lbl_80192984
	cmpwi    r0, 1
	bge      lbl_80192894
	b        lbl_80192984

lbl_80192880:
	mr       r3, r4
	li       r4, 0x2843
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_80192984

lbl_80192894:
	mr       r3, r4
	li       r4, 0x2844
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_80192984

lbl_801928A8:
	lbz      r0, 0x11(r31)
	cmplwi   r0, 1
	beq      lbl_801928BC
	cmplwi   r0, 2
	bne      lbl_80192984

lbl_801928BC:
	lfs      f0, lbl_80518DE0@sda21(r2)
	stfs     f0, 0x200(r4)
	stfs     f0, 0x204(r4)
	stfs     f0, 0x208(r4)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	b        lbl_80192984

lbl_801928DC:
	lbz      r0, 0x11(r31)
	cmplwi   r0, 1
	beq      lbl_801928F0
	cmplwi   r0, 2
	bne      lbl_80192984

lbl_801928F0:
	lbz      r3, 0x10(r31)
	addi     r0, r3, -1
	stb      r0, 0x10(r31)
	lbz      r0, 0x10(r31)
	extsb.   r0, r0
	bgt      lbl_80192984
	lbz      r0, 0x1c4(r4)
	ori      r0, r0, 2
	stb      r0, 0x1c4(r4)
	lbz      r0, 0x1e0(r4)
	ori      r0, r0, 2
	stb      r0, 0x1e0(r4)
	b        lbl_80192984

lbl_80192924:
	lbz      r0, 0x11(r31)
	cmplwi   r0, 1
	beq      lbl_80192938
	cmplwi   r0, 2
	bne      lbl_80192984

lbl_80192938:
	li       r0, 0
	stb      r0, 0x11(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518DD8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80518DC8@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80518DF4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019297C
	li       r0, 1
	b        lbl_80192980

lbl_8019297C:
	li       r0, 0

lbl_80192980:
	stb      r0, 0x10(r31)

lbl_80192984:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80192998
 * Size:	000004
 */
void PikiEscapeState::cleanup(Piki* piki) { }

/*
 * --INFO--
 * Address:	80192B24
 * Size:	000064
 */
// should be weak, but putting it in the header
// messes up FSM::init.
void StateMachine<Piki>::create(int limit)
{
	m_limit          = limit;
	m_count          = 0;
	m_states         = new FSMState<Piki>*[m_limit];
	m_indexToIDArray = new int[m_limit];
	m_idToIndexArray = new int[m_limit];
}

/*
 * --INFO--
 * Address:	80192B88
 * Size:	000084
 */
// should be weak, but putting it in the header
// messes up FSM::init.
void StateMachine<Piki>::registerState(FSMState<Piki>* state)
{
	if (m_count >= m_limit) {
		return;
	}
	m_states[m_count] = state;

	bool check;
	if (0 > state->m_id || !(state->m_id < m_limit)) {
		check = false;
	} else {
		check = true;
	}

	if (!check) {
		return;
	}

	state->m_stateMachine         = this;
	m_indexToIDArray[m_count]     = state->m_id;
	m_idToIndexArray[state->m_id] = m_count;
	m_count++;
}

} // namespace Game
