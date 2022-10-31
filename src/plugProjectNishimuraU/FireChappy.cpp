#include "Game/Entities/FireChappy.h"

namespace Game {
namespace FireChappy {

/*
 * --INFO--
 * Address:	8028F62C
 * Size:	0000AC
 */
Obj::Obj()
{
	createEffect();
	createMaterialAnimation();
}

/*
 * --INFO--
 * Address:	8028F6D8
 * Size:	000058
 */
void Obj::onInit(CreatureInitArg* arg)
{
	ChappyBase::Obj::onInit(arg);
	setupEffect();
	_2E4 = false;
	startFireState();
	startMaterialAnimation();
}

/*
 * --INFO--
 * Address:	8028F730
 * Size:	000048
 */
void Obj::onKill(CreatureKillArg* inputArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishFireState__Q34Game10FireChappy3ObjFb
	mr       r3, r30
	mr       r4, r31
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
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
 * Address:	8028F778
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8028F77C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8028F79C
 * Size:	0000C0
 */
void Obj::changeMaterial()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x174(r3)
	lwz      r29, 8(r3)
	lwz      r12, 0(r29)
	mr       r3, r29
	lwz      r30, 4(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	bl       updateMaterialAnimation__Q34Game10FireChappy3ObjFv
	lis      r3, j3dSys@ha
	li       r28, 0
	addi     r31, r3, j3dSys@l
	b        lbl_8028F82C

lbl_8028F7F4:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r31)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8028F82C:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_8028F7F4
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F85C
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       updateFireState__Q34Game10FireChappy3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F890
 * Size:	0000A0
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
	lwz      r3, 0x2c8(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051B9C8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051B9CC@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f0, lbl_8051B9D0@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8028F908
	lfs      f0, lbl_8051B9D4@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_8028F910

lbl_8028F908:
	lfs      f0, lbl_8051B9D8@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_8028F910:
	lfs      f0, lbl_8051B9DC@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	8028F930
 * Size:	0000E0
 */
void Obj::collisionCallback(CollEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
	lbz      r0, 0x2e4(r30)
	cmplwi   r0, 0
	beq      lbl_8028F9F8
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8028F9F8
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028F9F8
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8028F9B8
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028F9F8

lbl_8028F9B8:
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractFire@ha
	addi     r4, r1, 8
	lfs      f0, 0x604(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r3, __vt__Q24Game12InteractFire@l
	stw      r5, 8(r1)
	stw      r30, 0xc(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8028F9F8:
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
 * Address:	8028FA10
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game10FireChappy3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FA44
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game10FireChappy3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FA78
 * Size:	000020
 */
void Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game10FireChappy3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FA98
 * Size:	000020
 */
void Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game10FireChappy3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FAB8
 * Size:	000048
 */
void Obj::startFireState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	bne      lbl_8028FAE4
	li       r0, 1
	stb      r0, 0x2e4(r31)
	bl       startBodyEffect__Q34Game10FireChappy3ObjFv

lbl_8028FAE4:
	lfs      f0, lbl_8051B9E0@sda21(r2)
	stfs     f0, 0x2f8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FB00
 * Size:	000094
 */
void Obj::finishFireState(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	beq      lbl_8028FB7C
	li       r0, 0
	stb      r0, 0x2e4(r30)
	bl       finishBodyEffect__Q34Game10FireChappy3ObjFv
	clrlwi.  r0, r31, 0x18
	beq      lbl_8028FB48
	mr       r3, r30
	bl       createDeadSteamEffect__Q34Game10FireChappy3ObjFv
	b        lbl_8028FB50

lbl_8028FB48:
	mr       r3, r30
	bl       createDeadSmokeEffect__Q34Game10FireChappy3ObjFv

lbl_8028FB50:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58b5
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8028FB7C:
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
 * Address:	8028FB94
 * Size:	00010C
 */
void Obj::updateFireState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	beq      lbl_8028FC44
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50b4
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       updateEfxLod__Q34Game10FireChappy3ObjFv
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_8028FC8C
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	beq      lbl_8028FC8C
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2e4(r31)
	bl       finishBodyEffect__Q34Game10FireChappy3ObjFv
	mr       r3, r31
	bl       createDeadSteamEffect__Q34Game10FireChappy3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58b5
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_8028FC8C

lbl_8028FC44:
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028FC8C
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	bne      lbl_8028FC8C
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	bne      lbl_8028FC84
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x2e4(r31)
	bl       startBodyEffect__Q34Game10FireChappy3ObjFv

lbl_8028FC84:
	lfs      f0, lbl_8051B9E0@sda21(r2)
	stfs     f0, 0x2f8(r31)

lbl_8028FC8C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FCA0
 * Size:	00004C
 */
void Obj::createMaterialAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x28
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
	li       r5, 0
	addi     r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
	li       r6, 0xc
	li       r7, 2
	bl       __construct_new_array
	stw      r3, 0x2fc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FCEC
 * Size:	000060
 */
void Obj::startMaterialAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2fc(r3)
	lwz      r4, 0x180(r31)
	lwz      r12, 0(r3)
	lwz      r4, 0x48(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2fc(r31)
	lwzu     r12, 0xc(r3)
	lwz      r4, 0x180(r31)
	lwz      r12, 8(r12)
	lwz      r4, 0x4c(r4)
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
 * Address:	8028FD4C
 * Size:	000108
 */
void Obj::updateMaterialAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f31, lbl_8051B9E0@sda21(r2)
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	bne      lbl_8028FE1C
	lwz      r4, 0x2fc(r31)
	lwz      r3, 4(r4)
	lfs      f31, 8(r4)
	cmplwi   r3, 0
	beq      lbl_8028FD94
	bl       getFrameMax__Q23Sys16MatBaseAnimationFv
	b        lbl_8028FD98

lbl_8028FD94:
	lfs      f1, lbl_8051B9CC@sda21(r2)

lbl_8028FD98:
	lfs      f0, lbl_8051B9E0@sda21(r2)
	lfs      f2, 0x2f8(r31)
	fsubs    f1, f1, f0
	fcmpu    cr0, f0, f2
	bne      lbl_8028FDDC
	lfs      f0, lbl_8051B9D0@sda21(r2)
	fsubs    f0, f1, f0
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8028FDFC
	fcmpo    cr0, f31, f1
	cror     2, 0, 2
	bne      lbl_8028FDFC
	lfs      f0, lbl_8051B9E4@sda21(r2)
	fsubs    f0, f2, f0
	stfs     f0, 0x2f8(r31)
	b        lbl_8028FDFC

lbl_8028FDDC:
	lfs      f1, lbl_8051B9E4@sda21(r2)
	lfs      f0, lbl_8051B9CC@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x2f8(r31)
	lfs      f1, 0x2f8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8028FDFC
	stfs     f0, 0x2f8(r31)

lbl_8028FDFC:
	lfs      f1, 0x2f8(r31)
	lfs      f0, lbl_8051B9CC@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8028FE18
	fmr      f31, f0
	b        lbl_8028FE1C

lbl_8028FE18:
	fmr      f31, f1

lbl_8028FE1C:
	fmr      f1, f31
	lwz      r3, 0x2fc(r31)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x2fc(r31)
	fmr      f1, f31
	addi     r3, r3, 0xc
	bl       animate__Q23Sys15MatBaseAnimatorFf
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FE54
 * Size:	00002C
 */
void Obj::updateEfxLod()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0xd8(r3)
	lwz      r3, 0x2e8(r3)
	clrlwi   r4, r0, 0x1e
	bl       setRateLOD__Q23efx9TYakiBodyFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028FE80
 * Size:	000288
 */
void Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x54
	stw      r30, 8(r1)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8028FECC
	li       r4, 0
	li       r5, 0x1e6
	li       r6, 0x1e7
	li       r7, 0x1e8
	li       r8, 0x1e9
	bl       __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs
	lis      r3, __vt__Q23efx9TYakiBody@ha
	addi     r0, r3, __vt__Q23efx9TYakiBody@l
	stw      r0, 0(r30)

lbl_8028FECC:
	stw      r30, 0x2e8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8028FF54
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx9THanachoY@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9THanachoY@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x8c
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

lbl_8028FF54:
	stw      r3, 0x2d8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8028FFDC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx10TYakiFlick@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TYakiFlick@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x242
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

lbl_8028FFDC:
	stw      r3, 0x2ec(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80290064
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx10TChaseMtxT@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx10TChaseMtxT@l
	lis      r4, __vt__Q23efx14TYakiDeadsmoke@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TYakiDeadsmoke@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x241
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

lbl_80290064:
	stw      r3, 0x2f0(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802900EC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx10TYakiSteam@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TYakiSteam@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x286
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

lbl_802900EC:
	stw      r3, 0x2f4(r31)
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
 * Address:	80290108
 * Size:	000084
 */
void Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051B9E8@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	lwz      r3, 0x2e8(r30)
	mr       r31, r0
	mr       r4, r31
	bl       setMtxptr__Q23efx10TChaseMtx4FPA4_f
	lwz      r3, 0x2ec(r30)
	addi     r4, r2, lbl_8051B9F0@sda21
	stw      r31, 0x10(r3)
	lwz      r3, 0x2f0(r30)
	stw      r31, 0x10(r3)
	lwz      r3, 0x2f4(r30)
	stw      r31, 0x10(r3)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x2d8(r30)
	stw      r3, 0x10(r4)
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
 * Address:	8029018C
 * Size:	000034
 */
void Obj::startSleepEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802901C0
 * Size:	000030
 */
void Obj::finishSleepEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d8(r3)
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
 * Address:	802901F0
 * Size:	000034
 */
void Obj::startBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	80290224
 * Size:	000030
 */
void Obj::finishBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e8(r3)
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
 * Address:	80290254
 * Size:	000040
 */
void Obj::createFlickEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	beq      lbl_80290284
	lwz      r3, 0x2ec(r3)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80290284:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80290294
 * Size:	000034
 */
void Obj::createDeadSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802902C8
 * Size:	000034
 */
void Obj::createDeadSteamEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802902FC
 * Size:	00008C
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
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
 * Address:	80290388
 * Size:	00008C
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace FireChappy
} // namespace Game
