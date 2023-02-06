#include "types.h"
#include "PikiAI.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"
#include "Dolphin/rand.h"

static const char aiAttackName[] = "aiAttack";

namespace PikiAI {

/*
 * --INFO--
 * Address:	801A04CC
 * Size:	000070
 */
void ActAttack::getInfo(char* dest)
{
	char* actions[] = { "SA", "AJ", "JA", "JP", "LT" };
	sprintf(dest, "attack %s", actions[_18]);
}

/*
 * --INFO--
 * Address:	801A053C
 * Size:	000044
 */
void ActAttack::emotion_success()
{
	Game::EmotionStateArg emotionArg(1);
	mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &emotionArg);
}

/*
 * --INFO--
 * Address:	801A0580
 * Size:	0000D4
 */
ActAttack::ActAttack(Game::Piki* piki)
    : Action(piki)
{
	mStickAttack = new ActStickAttack(piki);
	mApproachPos = new ActApproachPos(piki);
	mName        = "Attack";
}

/*
 * --INFO--
 * Address:	801A0654
 * Size:	00011C
 */
void ActAttack::init(ActionArg* initarg)
{
	bool incorrectArg = false;
	if (initarg) {
		bool comp = (strcmp("ActAttackArg", initarg->getName()) == 0);
		if (comp) {
			incorrectArg = true;
		}
	}
	P2ASSERTLINE(144, incorrectArg);
	ActAttackArg* attackArg = static_cast<ActAttackArg*>(initarg);
	mCreature               = attackArg->mCreature;
	mCollPart               = attackArg->mCollPart;

	if (mParent->isStickTo()) {
		initStickAttack();
	} else if (randFloat() > 0.8f) {
		initJumpAdjust();
	} else {
		initAdjust();
	}

	_36 = 0;
}

/*
 * --INFO--
 * Address:	801A0770
 * Size:	000084
 */
void ActAttack::initStickAttack()
{
	f32 damage = mParent->getAttackDamage();
	StickAttackActionArg stickArg(damage, mCreature, 2, 0);
	mStickAttack->init(&stickArg);
	_18 = 0;
}

/*
 * --INFO--
 * Address:	801A07F4
 * Size:	0000A8
 */
void ActAttack::initAdjust()
{
	calcAttackPos();
	ApproachPosActionArg approachArg(mAttackSphere.mPosition, mAttackSphere.mRadius + 10.0f, -1.0f, 0, 0);
	approachArg._18 = 1;
	approachArg._19 = 1;
	_18             = 1;
	mApproachPos->init(&approachArg);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       calcAttackPos__Q26PikiAI9ActAttackFv
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f1, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f0, lbl_805190A8@sda21(r2)
	li       r3, 0
	stw      r0, 8(r1)
	li       r0, 1
	fadds    f1, f0, f1
	lfs      f0, lbl_805190AC@sda21(r2)
	lfs      f2, 0x24(r31)
	addi     r4, r1, 8
	stfs     f2, 0xc(r1)
	lfs      f2, 0x28(r31)
	stfs     f2, 0x10(r1)
	lfs      f2, 0x2c(r31)
	stb      r3, 0x20(r1)
	stb      r3, 0x21(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r0, 0x20(r1)
	stb      r0, 0x21(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A089C
 * Size:	0000AC
 */
void ActAttack::initJumpAdjust()
{
	calcAttackPos();
	ApproachPosActionArg approachArg(mAttackSphere.mPosition, mAttackSphere.mRadius + 10.0f, -1.0f, 0, 0);
	approachArg._18 = 1;
	approachArg._19 = 1;
	_18             = 2;
	mApproachPos->init(&approachArg);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       calcAttackPos__Q26PikiAI9ActAttackFv
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f1, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f0, lbl_805190A8@sda21(r2)
	li       r5, 0
	stw      r0, 8(r1)
	li       r3, 1
	fadds    f1, f0, f1
	lfs      f0, lbl_805190B0@sda21(r2)
	lfs      f2, 0x24(r31)
	li       r0, 2
	addi     r4, r1, 8
	stfs     f2, 0xc(r1)
	lfs      f2, 0x28(r31)
	stfs     f2, 0x10(r1)
	lfs      f2, 0x2c(r31)
	stb      r5, 0x20(r1)
	stb      r5, 0x21(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r3, 0x20(r1)
	stb      r3, 0x21(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A0948
 * Size:	00008C
 */
bool ActAttack::applicable()
{
	if (mParent->isStickTo()) {
		return true;
	}

	calcAttackPos();
	Vector3f pos = mParent->getPosition();
	return !(FABS(mAttackSphere.mPosition.y - pos.y) > 20.0f);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void ActAttack::initJump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A09D4
 * Size:	0001C4
 */
void ActAttack::calcAttackPos()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	li       r31, 0
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0A6C
	lwz      r30, 0x10(r29)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A0A68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A0A68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A0A6C

lbl_801A0A68:
	li       r31, 1

lbl_801A0A6C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_801A0B34
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 8
	stw      r4, 8(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x28
	stw      r3, 8(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r29)
	addi     r4, r1, 0x24
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A0AE8
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r29)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r29)
	b        lbl_801A0B7C

lbl_801A0AE8:
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0x18
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x2c(r29)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r29)
	b        lbl_801A0B7C

lbl_801A0B34:
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0xc
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2c(r29)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r29)

lbl_801A0B7C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A0B98
 * Size:	00094C
 */
int ActAttack::exec()
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	mr       r31, r3
	stw      r30, 0x108(r1)
	stw      r29, 0x104(r1)
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A0BD8
	li       r3, 0
	b        lbl_801A14C8

lbl_801A0BD8:
	lhz      r0, 0x18(r31)
	cmplwi   r0, 4
	beq      lbl_801A0CB4
	lwz      r3, 4(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A0CB4
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A0C2C
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0CB4

lbl_801A0C2C:
	li       r0, 4
	sth      r0, 0x18(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xf4(r1)
	lfd      f3, lbl_805190A0@sda21(r2)
	stw      r0, 0xf0(r1)
	lfs      f1, lbl_80519094@sda21(r2)
	lfd      f2, 0xf0(r1)
	lfs      f0, lbl_805190C8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A0C74
	li       r0, 0x36
	sth      r0, 0x34(r31)
	b        lbl_801A0C7C

lbl_801A0C74:
	li       r0, 0x35
	sth      r0, 0x34(r31)

lbl_801A0C7C:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801A0C8C
	lwz      r6, 0xc(r31)

lbl_801A0C8C:
	lwz      r3, 4(r31)
	li       r7, 0
	lha      r4, 0x34(r31)
	lwz      r12, 0(r3)
	mr       r5, r4
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x36(r31)

lbl_801A0CB4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801A0CF8
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_801A0CF8
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0CF8
	bl       PSMGetPikiBattleD__Fv
	lbz      r4, 0x54(r3)
	addi     r0, r4, 1
	stb      r0, 0x54(r3)

lbl_801A0CF8:
	lhz      r0, 0x18(r31)
	cmpwi    r0, 3
	beq      lbl_801A1264
	bge      lbl_801A0D18
	cmpwi    r0, 0
	beq      lbl_801A0D24
	bge      lbl_801A0F70
	b        lbl_801A14C4

lbl_801A0D18:
	cmpwi    r0, 5
	bge      lbl_801A14C4
	b        lbl_801A1480

lbl_801A0D24:
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A0D48
	li       r3, 0
	b        lbl_801A14C8

lbl_801A0D48:
	cmpwi    r3, 2
	bne      lbl_801A14C4
	lwz      r3, 4(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A14C4
	lwz      r3, 0x10(r31)
	li       r30, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0DDC
	lwz      r29, 0x10(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A0DD8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A0DD8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A0DDC

lbl_801A0DD8:
	li       r30, 1

lbl_801A0DDC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_801A0EA4
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 0xc
	stw      r4, 0xc(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x80
	stw      r3, 0xc(r1)
	stw      r0, 0x7c(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x7c
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A0E58
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A0EEC

lbl_801A0E58:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A0EEC

lbl_801A0EA4:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x38
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x38(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A0EEC:
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 0xd4(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f1, lbl_805190A8@sda21(r2)
	li       r5, 0
	stw      r0, 0xd4(r1)
	li       r3, 1
	fadds    f2, f1, f0
	lfs      f0, lbl_805190B0@sda21(r2)
	lfs      f1, 0x24(r31)
	li       r0, 2
	addi     r4, r1, 0xd4
	stfs     f1, 0xd8(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0xdc(r1)
	lfs      f1, 0x2c(r31)
	stb      r5, 0xec(r1)
	stb      r5, 0xed(r1)
	stfs     f1, 0xe0(r1)
	stfs     f2, 0xe4(r1)
	stfs     f0, 0xe8(r1)
	stb      r3, 0xec(r1)
	stb      r3, 0xed(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801A14C4

lbl_801A0F70:
	lwz      r3, 0x10(r31)
	li       r29, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0FEC
	lwz      r30, 0x10(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A0FE8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A0FE8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A0FEC

lbl_801A0FE8:
	li       r29, 1

lbl_801A0FEC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_801A10B4
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 0x10
	stw      r4, 0x10(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0xc4
	stw      r3, 0x10(r1)
	stw      r0, 0xc0(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0xc0
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A1068
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A10FC

lbl_801A1068:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x50
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x50(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x58(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A10FC

lbl_801A10B4:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x5c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x5c(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x60(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x64(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A10FC:
	lwz      r3, 0x20(r31)
	lfs      f0, 0x24(r31)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x28(r31)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x2c(r31)
	stfs     f0, 0x18(r3)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A1254
	lhz      r0, 0x18(r31)
	cmplwi   r0, 1
	bne      lbl_801A11A0
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0xac(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, 2
	li       r0, 0
	stw      r4, 0xac(r1)
	addi     r4, r1, 0xac
	stfs     f1, 0xb0(r1)
	stw      r5, 0xb4(r1)
	stw      r3, 0xb8(r1)
	stb      r0, 0xbc(r1)
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x18(r31)
	b        lbl_801A14C4

lbl_801A11A0:
	li       r0, 3
	addi     r3, r1, 0x44
	sth      r0, 0x18(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r31)
	lfs      f0, 0x48(r1)
	lfs      f2, 0x2c(r31)
	fsubs    f3, f1, f0
	lfs      f0, 0x4c(r1)
	lfs      f1, 0x24(r31)
	fsubs    f4, f2, f0
	lfs      f0, 0x44(r1)
	fmuls    f3, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_805190B8@sda21(r2)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f3
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A1210
	ble      lbl_801A1214
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A1214

lbl_801A1210:
	fmr      f1, f0

lbl_801A1214:
	lfs      f0, lbl_805190B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A1230
	lfs      f0, lbl_805190BC@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0

lbl_801A1230:
	lfs      f0, lbl_805190C0@sda21(r2)
	lwz      r3, 4(r31)
	fmuls    f2, f0, f2
	lfs      f1, lbl_805190C4@sda21(r2)
	fmuls    f0, f0, f4
	stfs     f2, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f0, 0x208(r3)
	b        lbl_801A14C4

lbl_801A1254:
	cmpwi    r3, 2
	bne      lbl_801A14C4
	li       r3, 2
	b        lbl_801A14C8

lbl_801A1264:
	lwz      r3, 4(r31)
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_801A14C4
	lwz      r3, 0x10(r31)
	li       r30, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A12F0
	lwz      r29, 0x10(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A12EC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A12EC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A12F0

lbl_801A12EC:
	li       r30, 1

lbl_801A12F0:
	clrlwi.  r0, r30, 0x18
	beq      lbl_801A13B8
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 8
	stw      r4, 8(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x6c
	stw      r3, 8(r1)
	stw      r0, 0x68(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x68
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A136C
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A1400

lbl_801A136C:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A1400

lbl_801A13B8:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x20(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A1400:
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 0x90(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f1, lbl_805190A8@sda21(r2)
	li       r3, 0
	stw      r0, 0x90(r1)
	li       r0, 1
	fadds    f2, f1, f0
	lfs      f0, lbl_805190AC@sda21(r2)
	lfs      f1, 0x24(r31)
	addi     r4, r1, 0x90
	stfs     f1, 0x94(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0x98(r1)
	lfs      f1, 0x2c(r31)
	stb      r3, 0xa8(r1)
	stb      r3, 0xa9(r1)
	stfs     f1, 0x9c(r1)
	stfs     f2, 0xa0(r1)
	stfs     f0, 0xa4(r1)
	stb      r0, 0xa8(r1)
	stb      r0, 0xa9(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801A14C4

lbl_801A1480:
	lwz      r3, 4(r31)
	lha      r4, 0x34(r31)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A149C
	li       r0, 1
	stb      r0, 0x36(r31)

lbl_801A149C:
	lwz      r3, 4(r31)
	lfs      f0, lbl_805190B8@sda21(r2)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lbz      r0, 0x36(r31)
	cmplwi   r0, 0
	beq      lbl_801A14C4
	li       r3, 2
	b        lbl_801A14C8

lbl_801A14C4:
	li       r3, 1

lbl_801A14C8:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	lwz      r29, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A14E4
 * Size:	000054
 */
void ActAttack::cleanup()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_805190B8@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lhz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_801A1514
	b        lbl_801A1528

lbl_801A1514:
	lwz      r3, 0x1c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801A1528:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1538
 * Size:	0000E0
 */
void ActAttack::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r3, 0(r5)
	lwz      r0, 0x10(r29)
	cmplw    r3, r0
	bne      lbl_801A15FC
	lhz      r0, 0x18(r29)
	cmplwi   r0, 3
	bne      lbl_801A15FC
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_801A15FC
	bl       isStickable__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A15FC
	lwz      r4, 0(r31)
	mr       r3, r30
	lwz      r5, 4(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 4(r29)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r29)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, 2
	li       r0, 0
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r0, 0x18(r1)
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x18(r29)

lbl_801A15FC:
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
 * Address:	801A1618
 * Size:	00024C
 */
void ActAttack::bounceCallback(Game::Piki*, Sys::Triangle*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	lhz      r0, 0x18(r3)
	cmplwi   r0, 3
	bne      lbl_801A1848
	lwz      r3, 0x10(r31)
	li       r29, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A16BC
	lwz      r30, 0x10(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A16B8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A16B8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A16BC

lbl_801A16B8:
	li       r29, 1

lbl_801A16BC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_801A1784
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 8
	stw      r4, 8(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x28
	stw      r3, 8(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x24
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A1738
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A17CC

lbl_801A1738:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0xc
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A17CC

lbl_801A1784:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x18
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A17CC:
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 0x38(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f1, lbl_805190A8@sda21(r2)
	li       r3, 0
	stw      r0, 0x38(r1)
	li       r0, 1
	fadds    f2, f1, f0
	lfs      f0, lbl_805190AC@sda21(r2)
	lfs      f1, 0x24(r31)
	addi     r4, r1, 0x38
	stfs     f1, 0x3c(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0x40(r1)
	lfs      f1, 0x2c(r31)
	stb      r3, 0x50(r1)
	stb      r3, 0x51(r1)
	stfs     f1, 0x44(r1)
	stfs     f2, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stb      r0, 0x50(r1)
	stb      r0, 0x51(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801A1848:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1864
 * Size:	000024
 */
void ActAttack::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	lwz      r0, 0x1c(r4)
	cmplwi   r0, 0x3e8
	bnelr
	lhz      r0, 0x18(r3)
	cmplwi   r0, 4
	bnelr
	li       r0, 1
	stb      r0, 0x36(r3)
	blr
	*/
}

} // namespace PikiAI
