#include "types.h"
#include "Game/Entities/Kabuto.h"

namespace Game {
namespace FixKabuto {

/*
 * --INFO--
 * Address:	803006EC
 * Size:	0000A4
 */
FixKabuto::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80300728
	addi     r0, r31, 0x2ec
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2ec(r31)
	stw      r0, 0x2f0(r31)
	stw      r0, 0x2f4(r31)

lbl_80300728:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game6Kabuto3ObjFv
	lis      r3, __vt__Q34Game9FixKabuto3Obj@ha
	addi     r0, r31, 0x2ec
	addi     r5, r3, __vt__Q34Game9FixKabuto3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x31c
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
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
 * Address:	80300790
 * Size:	000064
 */
void FixKabuto::Obj::onKill(Game::CreatureKillArg*)
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
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x310(r12)
	mtctr    r12
	bctrl
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
 * Address:	803007F4
 * Size:	0001A4
 */
void FixKabuto::Obj::changeMaterial()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r3, 0x180(r3)
	lwz      r4, 0x174(r27)
	lwz      r12, 0(r3)
	lwz      r29, 8(r4)
	lwz      r12, 0xe0(r12)
	lwz      r30, 4(r29)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x174(r27)
	lis      r3, j3dSys@ha
	lbz      r0, 0(r31)
	addi     r27, r3, j3dSys@l
	lwz      r3, 8(r4)
	li       r28, 0
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r31)
	stb      r0, 1(r3)
	lhz      r0, 2(r31)
	sth      r0, 2(r3)
	lhz      r0, 4(r31)
	sth      r0, 4(r3)
	lbz      r0, 6(r31)
	stb      r0, 6(r3)
	lbz      r0, 7(r31)
	stb      r0, 7(r3)
	lbz      r0, 8(r31)
	stb      r0, 8(r3)
	lbz      r0, 9(r31)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r31)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r31)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r31)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r31)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r31)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r31)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r31)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r31)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r31)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r31)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r31)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r31)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r31)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r31)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0x1c(r3)
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0xc(r3)
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	b        lbl_80300974

lbl_8030093C:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r27)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_80300974:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_8030093C
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80300998
 * Size:	000140
 */
void FixKabuto::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80300A34
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx11TKkabutoRot@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TKkabutoRot@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0x287
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80300A34:
	stw      r3, 0x2e4(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80300AC0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx12TKkabutoWait@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx12TKkabutoWait@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0x288
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80300AC0:
	stw      r3, 0x2e8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80300AD8
 * Size:	000018
 */
void FixKabuto::Obj::setupEffect()
{
	/*
	lwz      r4, 0x2e4(r3)
	addi     r0, r3, 0x18c
	stw      r0, 0x10(r4)
	lwz      r3, 0x2e8(r3)
	stw      r0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80300AF0
 * Size:	000058
 */
void FixKabuto::Obj::startRotateEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80300B48
 * Size:	000030
 */
void FixKabuto::Obj::finishRotateEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e4(r3)
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
 * Address:	80300B78
 * Size:	000058
 */
void FixKabuto::Obj::startWaitEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x2e8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80300BD0
 * Size:	000030
 */
void FixKabuto::Obj::finishWaitEffect()
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
 * Address:	80300C00
 * Size:	000050
 */
void FixKabuto::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e8(r31)
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
 * Address:	80300C50
 * Size:	000050
 */
void FixKabuto::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e8(r31)
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

} // namespace FixKabuto
} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	80300CA0
 * Size:	00009C
 */
TKkabutoWait::~TKkabutoWait()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80300D20
	lis      r3, __vt__Q23efx12TKkabutoWait@ha
	addi     r3, r3, __vt__Q23efx12TKkabutoWait@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80300D10
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80300D10
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80300D10:
	extsh.   r0, r31
	ble      lbl_80300D20
	mr       r3, r30
	bl       __dl__FPv

lbl_80300D20:
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
 * Address:	80300D3C
 * Size:	00009C
 */
TKkabutoRot::~TKkabutoRot()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80300DBC
	lis      r3, __vt__Q23efx11TKkabutoRot@ha
	addi     r3, r3, __vt__Q23efx11TKkabutoRot@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80300DAC
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80300DAC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80300DAC:
	extsh.   r0, r31
	ble      lbl_80300DBC
	mr       r3, r30
	bl       __dl__FPv

lbl_80300DBC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	80300DD8
 * Size:	000008
 */
u32 FixKabuto::Obj::getEnemyTypeID() { return 0x60; }

/*
 * --INFO--
 * Address:	80300DE0
 * Size:	000014
 */
void EnemyBase::@748 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -748
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80300DF4
 * Size:	000014
 */
void EnemyBase::@748 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -748
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80300E08
 * Size:	000014
 */
void EnemyBase::@748 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -748
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80300E1C
 * Size:	000014
 */
void EnemyBase::@748 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -748
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80300E30
 * Size:	000014
 */
void EnemyBase::@748 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -748
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80300E44
 * Size:	000014
 */
void EnemyBase::@748 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -748
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80300E58
 * Size:	000008
 */
TKkabutoRot::@4 @~TKkabutoRot()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx11TKkabutoRotFv
	*/
}

/*
 * --INFO--
 * Address:	80300E60
 * Size:	000008
 */
TKkabutoWait::@4 @~TKkabutoWait()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx12TKkabutoWaitFv
	*/
}
} // namespace efx

} // namespace efx
