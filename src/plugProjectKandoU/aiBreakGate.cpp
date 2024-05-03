#include "PikiAI.h"
#include "Game/gameStat.h"
#include "Game/Entities/ItemGate.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"

namespace PikiAI {

static const char breakGateName[] = "actBreakWall";

/**
 * @note Address: 0x801D04E8
 * @note Size: 0xF8
 */
ActBreakGate::ActBreakGate(Game::Piki* parent)
    : Action(parent)
{
	mStickAttack = new ActStickAttack(parent);
	mGotoPos     = new ActGotoPos(parent);
	mFollowField = new ActFollowVectorField(parent);

	mName = "BreakGate";
}

/**
 * @note Address: 0x801D05E0
 * @note Size: 0xC8
 */
void ActBreakGate::init(ActionArg* actionArg)
{
	bool isCorrectArg = false;
	if (actionArg) {
		bool strCheck = strcmp("ActBreakGateArg", actionArg->getName()) == 0;
		if (strCheck) {
			isCorrectArg = true;
		}
	}

	P2ASSERTLINE(98, isCorrectArg);

	Game::GameStat::workPikis.inc(mParent);

	mGate            = static_cast<ActBreakGateArg*>(actionArg)->mGate;
	mResetStateAfter = 0;

	initFollow();
}

/**
 * @note Address: 0x801D06A8
 * @note Size: 0x68
 */
void ActBreakGate::initFollow()
{
	FollowVectorFieldActionArg followArg(mGate);
	mFollowField->init(&followArg);
	mState = 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void ActBreakGate::initGoto()
{
	GotoPosActionArg gotoArg;
	mGotoPos->init(&gotoArg);
	mState = 1;
}

/**
 * @note Address: 0x--------
 * @note Size: 0x114
 * --INLINE--
 */
void ActBreakGate::initStickAttack()
{
	u8 type = STICKATK_WhiteGate;
	if (mGate->mColor == GATECOLOR_Black) {
		type = STICKATK_BlackGate;
	} else if (mGate->mIsElectric) {
		type = STICKATK_ElecGate;
	}

	if (mResetStateAfter == 0) {
		f32 attackDamage = mParent->getAttackDamage();
		StickAttackActionArg stickAttackArg(attackDamage, mGate, Game::IPikiAnims::NULLANIM, type);
		mStickAttack->init(&stickAttackArg);

	} else {
		f32 attackDamage = mParent->getAttackDamage();
		StickAttackActionArg stickAttackArg(attackDamage, mGate, Game::IPikiAnims::JOB2, type);
		mStickAttack->init(&stickAttackArg);
	}

	mState = 2;
}

/**
 * @note Address: 0x801D0710
 * @note Size: 0x498
 */
int ActBreakGate::exec()
{
	if (!mGate->isAlive()) {
		return 0;
	}

	switch (mState) {
	case 2:
		mFollowField->exec();
		int stickResult = mStickAttack->exec();

		if (stickResult == 0) {
			initStickAttack();
		} else if (stickResult == 2) {
			initStickAttack();
		} else {
			return stickResult;
		}
		break;

	case 1:
		int followResult = mFollowField->exec();
		if (followResult == 0) {
			initStickAttack();
		} else {
			return followResult;
		}
		break;

	case 0:
		int gotoResult = mGotoPos->exec();
		if (gotoResult == 0) {
			initStickAttack();
		} else {
			return gotoResult;
		}
		break;
	}

	return 1;
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	mr       r31, r3
	stw      r30, 0xa8(r1)
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D074C
	li       r3, 0
	b        lbl_801D0B90

lbl_801D074C:
	lhz      r0, 0x14(r31)
	cmpwi    r0, 1
	beq      lbl_801D097C
	bge      lbl_801D0768
	cmpwi    r0, 0
	bge      lbl_801D0A84
	b        lbl_801D0B8C

lbl_801D0768:
	cmpwi    r0, 3
	bge      lbl_801D0B8C
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801D0888
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D07BC
	li       r30, 2
	b        lbl_801D07CC

lbl_801D07BC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D07CC
	li       r30, 3

lbl_801D07CC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D082C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x80
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x80(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 0x80(r1)
	stfs     f1, 0x84(r1)
	stw      r5, 0x88(r1)
	stw      r0, 0x8c(r1)
	stb      r30, 0x90(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D087C

lbl_801D082C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x94
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x94(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x94(r1)
	stfs     f1, 0x98(r1)
	stw      r5, 0x9c(r1)
	stw      r0, 0xa0(r1)
	stb      r30, 0xa4(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D087C:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C

lbl_801D0888:
	cmpwi    r3, 2
	bne      lbl_801D0B90
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D08AC
	li       r30, 2
	b        lbl_801D08BC

lbl_801D08AC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D08BC
	li       r30, 3

lbl_801D08BC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D091C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x58
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x58(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 0x58(r1)
	stfs     f1, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r0, 0x64(r1)
	stb      r30, 0x68(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D096C

lbl_801D091C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x6c
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x6c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x6c(r1)
	stfs     f1, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r0, 0x78(r1)
	stb      r30, 0x7c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D096C:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C
	b        lbl_801D0B90

lbl_801D097C:
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801D0B90
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D09B4
	li       r30, 2
	b        lbl_801D09C4

lbl_801D09B4:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D09C4
	li       r30, 3

lbl_801D09C4:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D0A24
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x30
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x30(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 0x30(r1)
	stfs     f1, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x3c(r1)
	stb      r30, 0x40(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0A74

lbl_801D0A24:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x44
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x44(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x44(r1)
	stfs     f1, 0x48(r1)
	stw      r5, 0x4c(r1)
	stw      r0, 0x50(r1)
	stb      r30, 0x54(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D0A74:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C
	b        lbl_801D0B90

lbl_801D0A84:
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801D0B90
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D0ABC
	li       r30, 2
	b        lbl_801D0ACC

lbl_801D0ABC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D0ACC
	li       r30, 3

lbl_801D0ACC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D0B2C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 8
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r30, 0x18(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0B7C

lbl_801D0B2C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x1c
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x28(r1)
	stb      r30, 0x2c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D0B7C:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C
	b        lbl_801D0B90

lbl_801D0B8C:
	li       r3, 1

lbl_801D0B90:
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x801D0BA8
 * @note Size: 0x5C
 */
void ActBreakGate::cleanup()
{
	Game::GameStat::workPikis.dec(mParent);
	switch (mState) {
	case 2:
		mStickAttack->cleanup();
		break;
	}
}

/**
 * @note Address: 0x801D0C04
 * @note Size: 0x44
 */
void ActBreakGate::emotion_success()
{
	Game::EmotionStateArg emotionArg(1);
	mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &emotionArg);
}

/**
 * @note Address: 0x801D0C48
 * @note Size: 0x144
 */
void ActBreakGate::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	if (platEvent.mNormal.y > 0.7f) {
		mResetStateAfter = 1;
	} else {
		mResetStateAfter = 0;
	}

	if (mState == 1) {
		initStickAttack();
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_80519630@sda21(r2)
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	lfs      f1, 8(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_801D0C7C
	li       r0, 1
	stb      r0, 0x24(r31)
	b        lbl_801D0C84

lbl_801D0C7C:
	li       r0, 0
	stb      r0, 0x24(r31)

lbl_801D0C84:
	lhz      r0, 0x14(r31)
	cmplwi   r0, 1
	bne      lbl_801D0D74
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D0CAC
	li       r30, 2
	b        lbl_801D0CBC

lbl_801D0CAC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D0CBC
	li       r30, 3

lbl_801D0CBC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D0D1C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 8
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r30, 0x18(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0D6C

lbl_801D0D1C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x1c
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x28(r1)
	stb      r30, 0x2c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D0D6C:
	li       r0, 2
	sth      r0, 0x14(r31)

lbl_801D0D74:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x801D0D8C
 * @note Size: 0x4
 */
void ActBreakGate::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/**
 * @note Address: 0x801D0D90
 * @note Size: 0x4
 */
void ActBreakGate::bounceCallback(Game::Piki*, Sys::Triangle*) { }

/**
 * @note Address: 0x801D0D94
 * @note Size: 0x4
 */
void ActBreakGate::onKeyEvent(const SysShape::KeyEvent&) { }

} // namespace PikiAI
