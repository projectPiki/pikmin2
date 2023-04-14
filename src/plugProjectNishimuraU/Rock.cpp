#include "types.h"
#include "Game/Entities/Rock.h"

namespace Game {
namespace Rock {

/*
 * --INFO--
 * Address:	80262FF0
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	80263128
 * Size:	00005C
 */
void Obj::birth(Vector3f&, f32)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lfs      f2, lbl_8051ADA0@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_8051ADA4@sda21(r2)
	addi     r4, r1, 8
	lfs      f0, lbl_8051ADA8@sda21(r2)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263184
 * Size:	000028
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x44c(r4)
	stfs     f0, 0x2cc(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x474(r4)
	stfs     f0, 0x2d0(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x49c(r4)
	stfs     f0, 0x2d4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802631AC
 * Size:	0001E0
 */
void Obj::onInit(CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lbz      r0, 0x2b0(r31)
	extsb.   r0, r0
	bne      lbl_802631F0
	lfs      f1, lbl_8051ADAC@sda21(r2)
	stfs     f1, 0x1f8(r31)
	stfs     f1, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f1, 0x170(r31)
	lwz      r3, 0x114(r31)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_802631F0:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       setupEffect__Q34Game4Rock3ObjFv
	lfs      f0, lbl_8051ADB0@sda21(r2)
	li       r0, 0
	mr       r3, r31
	stfs     f0, 0x2c8(r31)
	stb      r0, 0x2c4(r31)
	stw      r0, 0x2c0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x13
	bne      lbl_8026333C
	lfs      f1, lbl_8051ADB0@sda21(r2)
	lfs      f0, 0x2ac(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_802632C8
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051ADC0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051ADB4@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051ADB8@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x2c8(r31)

lbl_802632C8:
	lbz      r0, 0x2b0(r31)
	extsb.   r0, r0
	bne      lbl_8026330C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	b        lbl_8026332C

lbl_8026330C:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8026332C:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	b        lbl_80263378

lbl_8026333C:
	mr       r3, r31
	bl       initMoveVelocity__Q34Game4Rock3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl

lbl_80263378:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263394
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishFallEffect();
	finishRollingGroundEffect();
	finishRollingWaterEffect();
	EnemyBase::onKill(arg);
}

/*
 * --INFO--
 * Address:	802633E8
 * Size:	000034
 */
void Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	8026341C
 * Size:	00004C
 */
void Obj::setFSM(FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2bc(r3)
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2b4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263468
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8026346C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026348C
 * Size:	0000E4
 */
void Obj::getShadowParam(ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x13
	bne      lbl_802634F4
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051ADC8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, 0x190(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0x194(r30)
	stfs     f0, 8(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 0x19c(r30)
	fsubs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x18(r31)
	b        lbl_80263534

lbl_802634F4:
	lfs      f2, lbl_8051ADCC@sda21(r2)
	lfs      f1, 0x190(r30)
	lfs      f3, 0x194(r30)
	lfs      f0, 0x18c(r30)
	fadds    f1, f2, f1
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f3, 8(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8026352C
	lfs      f0, lbl_8051ADC8@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_80263534

lbl_8026352C:
	lfs      f0, lbl_8051ADD0@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_80263534:
	lfs      f2, lbl_8051ADB0@sda21(r2)
	lfs      f0, lbl_8051ADD4@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f1, lbl_8051ADD8@sda21(r2)
	stfs     f0, 0x10(r31)
	stfs     f2, 0x14(r31)
	lfs      f0, 0x1f8(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263570
 * Size:	000060
 */
bool Obj::needShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80263598
	li       r3, 1
	b        lbl_802635BC

lbl_80263598:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_802635B0
	cmpwi    r3, 3
	bne      lbl_802635B8

lbl_802635B0:
	li       r3, 1
	b        lbl_802635BC

lbl_802635B8:
	li       r3, 0

lbl_802635BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802635D0
 * Size:	000088
 */
bool Obj::hipdropCallBack(Creature*, f32, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80263640
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80263640
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80263640
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80263644

lbl_80263640:
	li       r3, 0

lbl_80263644:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263658
 * Size:	0001A4
 */
void Obj::collisionCallback(CollEvent&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r29, r4
	mr       r28, r3
	lwz      r27, 0(r4)
	cmplwi   r27, 0
	beq      lbl_802637E8
	mr       r3, r27
	li       r31, 1
	lwz      r12, 0(r27)
	li       r30, 1
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802636BC
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026372C

lbl_802636BC:
	lwz      r0, 0xc8(r27)
	li       r31, 0
	cmplwi   r0, 0
	beq      lbl_802637B8
	lwz      r0, 0x2c0(r28)
	mr       r6, r28
	cmplwi   r0, 0
	beq      lbl_802636E0
	mr       r6, r0

lbl_802636E0:
	lwz      r5, 0xc0(r28)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r5, r4, __vt__Q24Game11Interaction@l
	addi     r3, r3, __vt__Q24Game13InteractPress@l
	addi     r4, r1, 0x18
	stw      r5, 0x18(r1)
	stw      r6, 0x1c(r1)
	stw      r3, 0x18(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802637B8

lbl_8026372C:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802637B8
	lwz      r5, 4(r29)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051ADDC@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game14InteractAttack@l
	mr       r3, r27
	stw      r28, 0xc(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r5, 0x14(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x2e4(r28)
	cmpwi    r0, 0x13
	bne      lbl_802637B8
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x13
	bne      lbl_802637B8
	li       r30, 0

lbl_802637B8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802637C8
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stfs     f0, 0x200(r28)

lbl_802637C8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802637E8
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl

lbl_802637E8:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802637FC
 * Size:	000054
 */
void Obj::wallCallback(const MoveInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_8026383C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8026383C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263850
 * Size:	00006C
 */
void Obj::inWaterCallback(WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4a
	bne      lbl_802638A8
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_802638A8
	mr       r3, r31
	bl       finishRollingGroundEffect__Q34Game4Rock3ObjFv
	mr       r3, r31
	bl       startRollingWaterEffect__Q34Game4Rock3ObjFv
	lfs      f1, 0x1f8(r31)
	mr       r3, r31
	bl       PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef

lbl_802638A8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802638BC
 * Size:	000060
 */
void Obj::outWaterCallback()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4a
	bne      lbl_80263908
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80263908
	mr       r3, r31
	bl       finishRollingWaterEffect__Q34Game4Rock3ObjFv
	mr       r3, r31
	bl       startRollingGroundEffect__Q34Game4Rock3ObjFv

lbl_80263908:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026391C
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8026393C
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8026395C
 * Size:	00002C
 */
bool Obj::ignoreAtari(Creature*)
{
	/*
	lwz      r0, 0x2c0(r3)
	cmplw    r4, r0
	bne      lbl_80263980
	lfs      f1, 0x2c8(r3)
	lfs      f0, lbl_8051ADD4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80263980
	li       r3, 1
	blr

lbl_80263980:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263988
 * Size:	00007C
 */
bool Obj::fallRockScaleUp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051ADD4@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f3, 0x1f8(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_802639EC
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2d4(r3)
	lfs      f0, 0x54(r4)
	fmadds   f1, f1, f0, f3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802639D0
	li       r31, 1
	fmr      f1, f2

lbl_802639D0:
	stfs     f1, 0x1f8(r3)
	stfs     f1, 0x168(r3)
	stfs     f1, 0x16c(r3)
	stfs     f1, 0x170(r3)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_802639EC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263A04
 * Size:	00007C
 */
void Obj::moveRockScaleUp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051ADD4@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f3, 0x1f8(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_80263A68
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051ADCC@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f1, f1, f0, f3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_80263A4C
	li       r31, 1
	fmr      f1, f2

lbl_80263A4C:
	stfs     f1, 0x1f8(r3)
	stfs     f1, 0x168(r3)
	stfs     f1, 0x16c(r3)
	stfs     f1, 0x170(r3)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_80263A68:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263A80
 * Size:	000100
 */
void Obj::initMoveVelocity()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80263AA4
	fneg     f1, f3

lbl_80263AA4:
	lfs      f2, lbl_8051ADE0@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051ADB0@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f4, 4(r4)
	bge      lbl_80263AFC
	lfs      f0, lbl_8051ADE4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f2, f0
	b        lbl_80263B14

lbl_80263AFC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r5, r0

lbl_80263B14:
	lfs      f1, lbl_8051ADB0@sda21(r2)
	frsp     f0, f2
	stfs     f2, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stfs     f4, 0x10(r1)
	lwz      r5, 0xc0(r3)
	lfs      f3, 0x2e4(r5)
	fmuls    f2, f0, f3
	fmuls    f1, f1, f3
	fmuls    f0, f4, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f2, 0x1d4(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1d8(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1dc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263B80
 * Size:	0003A0
 */
void Obj::updateMoveVelocity()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lbz      r0, 0x2c4(r3)
	cmplwi   r0, 0
	beq      lbl_80263DB4
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_80263BFC
	lwz      r4, 0x44(r4)
	li       r0, 0
	cmpwi    r4, 1
	beq      lbl_80263BE8
	cmpwi    r4, 3
	bne      lbl_80263BEC

lbl_80263BE8:
	li       r0, 1

lbl_80263BEC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80263BFC
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv

lbl_80263BFC:
	cmplwi   r3, 0
	bne      lbl_80263C24
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051ADE8@sda21(r2)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"

lbl_80263C24:
	cmplwi   r3, 0
	beq      lbl_80263C50
	mr       r4, r3
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f28, 0x44(r1)
	lfs      f29, 0x4c(r1)
	b        lbl_80263C68

lbl_80263C50:
	lfs      f3, 0x18c(r31)
	lfs      f2, 0x1d4(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1dc(r31)
	fadds    f28, f3, f2
	fadds    f29, f1, f0

lbl_80263C68:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f28, f4
	fsubs    f2, f29, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051ADF0@sda21(r2)
	lfs      f1, lbl_8051ADEC@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80263D1C
	lfs      f0, lbl_8051ADB0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80263D18
	fmr      f31, f1
	b        lbl_80263D1C

lbl_80263D18:
	fneg     f31, f1

lbl_80263D1C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x81c(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f28, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x38(r1)
	stfs     f31, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f28
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80263EEC

lbl_80263DB4:
	lfs      f2, lbl_8051ADF8@sda21(r2)
	mr       r4, r31
	lfs      f0, 0x1d4(r31)
	addi     r3, r1, 0x14
	lfs      f3, lbl_8051ADF4@sda21(r2)
	fmuls    f0, f2, f0
	lfs      f1, 0x1c8(r31)
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1d4(r31)
	lfs      f0, 0x1d8(r31)
	lfs      f1, 0x1cc(r31)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lfs      f1, 0x1d0(r31)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lfs      f3, 0x194(r31)
	lfs      f2, 0x1dc(r31)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x1d4(r31)
	fadds    f28, f3, f2
	lwz      r12, 8(r12)
	fadds    f29, f1, f0
	lfs      f31, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051ADF0@sda21(r2)
	lfs      f1, lbl_8051ADEC@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80263EC4
	lfs      f0, lbl_8051ADB0@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80263EC0
	fmr      f30, f1
	b        lbl_80263EC4

lbl_80263EC0:
	fneg     f30, f1

lbl_80263EC4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_80263EEC:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263F20
 * Size:	0001A4
 */
void Obj::createEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0x14
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80263FC0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx8TRockRun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx8TRockRun@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1aa
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80263FC0:
	stw      r3, 0x2d8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80264048
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx10TRockGrRun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TRockGrRun@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1a9
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80264048:
	stw      r3, 0x2dc(r31)
	li       r3, 0x58
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802640A4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx9TRockWRun@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	addi     r29, r30, 4
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q23efx9TRockWRun@l
	mr       r3, r29
	addi     r4, r30, 0x48
	stw      r0, 0(r30)
	li       r5, 0x28e
	li       r6, 0x28f
	li       r7, 0x290
	bl       "__ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs"
	lis      r3, __vt__Q23efx17TRockWRunChasePos@ha
	li       r0, 0
	addi     r3, r3, __vt__Q23efx17TRockWRunChasePos@l
	stw      r3, 0(r29)
	stb      r0, 0x54(r30)

lbl_802640A4:
	stw      r30, 0x2e0(r31)
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
 * Address:	802640C4
 * Size:	000018
 */
void Obj::setupEffect()
{
	mEfxRun->mPosition       = &mPosition;
	mEfxGroundRun->mPosition = &mPosition;
}

/*
 * --INFO--
 * Address:	802640DC
 * Size:	000034
 */
void Obj::startFallEffect() { mEfxRun->create(nullptr); }

/*
 * --INFO--
 * Address:	80264110
 * Size:	000030
 */
void Obj::finishFallEffect() { mEfxRun->fade(); }

/*
 * --INFO--
 * Address:	80264140
 * Size:	000034
 */
void Obj::startRollingGroundEffect() { mEfxGroundRun->create(nullptr); }

/*
 * --INFO--
 * Address:	80264174
 * Size:	000030
 */
void Obj::finishRollingGroundEffect() { mEfxGroundRun->fade(); }

/*
 * --INFO--
 * Address:	802641A4
 * Size:	0000E8
 */
void Obj::startRollingWaterEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_802641DC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)

lbl_802641DC:
	lwz      r3, 0x2e0(r31)
	li       r4, 0
	stfs     f0, 0x44(r3)
	lwz      r3, 0x2e0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x2e0(r31)
	lbz      r0, 0x54(r5)
	cmplwi   r0, 0
	beq      lbl_80264278
	lfs      f2, 0x44(r5)
	lfs      f1, 0x190(r31)
	lfs      f0, lbl_8051ADFC@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80264264
	lfs      f0, lbl_8051AE00@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80264264
	lfs      f1, 0x194(r31)
	addi     r3, r5, 4
	lfs      f0, 0x18c(r31)
	li       r4, 0
	stfs     f0, 0x48(r5)
	stfs     f2, 0x4c(r5)
	stfs     f1, 0x50(r5)
	lwz      r12, 4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80264278

lbl_80264264:
	addi     r3, r5, 4
	lwz      r12, 4(r5)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80264278:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026429C
 * Size:	000030
 */
void Obj::finishRollingWaterEffect() { mEfxWaterRun->fade(); }

/*
 * --INFO--
 * Address:	80264310
 * Size:	0000A4
 */
void Obj::updateWaterEffectPosition()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802643A4
	lwz      r5, 0x2e0(r3)
	lbz      r0, 0x54(r5)
	cmplwi   r0, 0
	beq      lbl_802643A4
	lfs      f2, 0x44(r5)
	lfs      f1, 0x190(r3)
	lfs      f0, lbl_8051ADFC@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80264390
	lfs      f0, lbl_8051AE00@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80264390
	lfs      f1, 0x194(r3)
	li       r4, 0
	lfs      f0, 0x18c(r3)
	addi     r3, r5, 4
	stfs     f0, 0x48(r5)
	stfs     f2, 0x4c(r5)
	stfs     f1, 0x50(r5)
	lwz      r12, 4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802643A4

lbl_80264390:
	addi     r3, r5, 4
	lwz      r12, 4(r5)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_802643A4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802643B4
 * Size:	000098
 */
void Obj::createRockDeadEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x34(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r10, r6, __vt__Q23efx5TBase@l
	stw      r0, 8(r1)
	addi     r9, r5, __vt__Q23efx8TSimple3@l
	lis      r4, __vt__Q23efx9TRockDead@ha
	li       r8, 0x1a6
	lfs      f0, 0x18c(r3)
	addi     r0, r4, __vt__Q23efx9TRockDead@l
	li       r7, 0x1a7
	li       r6, 0x1a8
	stfs     f0, 0xc(r1)
	li       r5, 0
	addi     r4, r1, 8
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	addi     r3, r1, 0x18
	stw      r10, 0x18(r1)
	stw      r9, 0x18(r1)
	stfs     f0, 0x14(r1)
	sth      r8, 0x1c(r1)
	sth      r7, 0x1e(r1)
	sth      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026444C
 * Size:	000064
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e0(r31)
	lwzu     r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802644B0
 * Size:	000064
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e0(r31)
	lwzu     r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Rock
} // namespace Game