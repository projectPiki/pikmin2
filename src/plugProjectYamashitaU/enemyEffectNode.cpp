#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game20EnemyEffectNodeHamon
    __vt__Q24Game20EnemyEffectNodeHamon:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game20EnemyEffectNodeHamonFv
        .4byte getChildCount__5CNodeFv
        .4byte create__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
        .4byte fade__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
        .4byte forceKill__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
    .global __vt__Q24Game19EnemyEffectNodeBase
    __vt__Q24Game19EnemyEffectNodeBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game19EnemyEffectNodeBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518128
    lbl_80518128:
        .4byte 0x946796E4
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012E510
 * Size:	000134
 */
EnemyEffectNodeHamon::EnemyEffectNodeHamon()
{
	/*
	stwu     r1, -0x30(r1)
	lis      r4, __vt__5CNode@ha
	addi     r0, r4, __vt__5CNode@l
	lis      r5, __vt__Q23efx12TEnemyHamonM@ha
	stmw     r25, 0x14(r1)
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r31, r4, __vt__Q23efx5TSync@l
	lis      r12, __vt__Q24Game20EnemyEffectNodeHamon@ha
	lis      r4, __vt__Q23efx9TChasePos@ha
	lis      r6, __vt__18JPAEmitterCallBack@ha
	addi     r11, r4, __vt__Q23efx9TChasePos@l
	addi     r29, r2, lbl_80518128@sda21
	addi     r30, r6, __vt__18JPAEmitterCallBack@l
	lis      r28, __vt__Q24Game19EnemyEffectNodeBase@ha
	lis      r4, __vt__Q23efx15TEnemyHamonMInd@ha
	addi     r8, r5, __vt__Q23efx12TEnemyHamonM@l
	addi     r5, r4, __vt__Q23efx15TEnemyHamonMInd@l
	addi     r12, r12, __vt__Q24Game20EnemyEffectNodeHamon@l
	addi     r4, r28, __vt__Q24Game19EnemyEffectNodeBase@l
	lis      r10, __vt__Q23efx5TBase@ha
	addi     r28, r10, __vt__Q23efx5TBase@l
	lis      r9, __vt__Q23efx11TEnemyHamon@ha
	stw      r0, 0(r3)
	li       r0, 0
	lis      r7, __vt__Q23efx19TEnemyHamonChasePos@ha
	addi     r27, r31, 0x14
	stw      r0, 0x10(r3)
	addi     r26, r11, 0x14
	addi     r10, r3, 0x4c
	li       r6, 0x58
	stw      r0, 0xc(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	stw      r29, 0x14(r3)
	addi     r29, r7, __vt__Q23efx19TEnemyHamonChasePos@l
	addi     r7, r8, 0x14
	stw      r4, 0(r3)
	addi     r4, r9, __vt__Q23efx11TEnemyHamon@l
	li       r9, 0x57
	stw      r12, 0(r3)
	li       r12, 0x2b2
	stw      r28, 0x18(r3)
	stw      r4, 0x18(r3)
	addi     r4, r5, 0x14
	stw      r28, 0x1c(r3)
	stw      r29, 0x1c(r3)
	stw      r28, 0x20(r3)
	stw      r30, 0x24(r3)
	stw      r31, 0x20(r3)
	stw      r27, 0x24(r3)
	stw      r0, 0x28(r3)
	sth      r12, 0x2c(r3)
	stb      r0, 0x2e(r3)
	stw      r11, 0x20(r3)
	stw      r26, 0x24(r3)
	stw      r10, 0x30(r3)
	sth      r9, 0x2c(r3)
	stw      r8, 0x20(r3)
	stw      r7, 0x24(r3)
	stw      r28, 0x34(r3)
	stw      r30, 0x38(r3)
	stw      r31, 0x34(r3)
	stw      r27, 0x38(r3)
	stw      r0, 0x3c(r3)
	sth      r12, 0x40(r3)
	stb      r0, 0x42(r3)
	stw      r11, 0x34(r3)
	stw      r26, 0x38(r3)
	stw      r10, 0x44(r3)
	sth      r6, 0x40(r3)
	stw      r5, 0x34(r3)
	stw      r4, 0x38(r3)
	stw      r0, 0x48(r3)
	stb      r0, 0x58(r3)
	lmw      r25, 0x14(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8012E644
 * Size:	00009C
 */
TEnemyHamonMInd::~TEnemyHamonMInd()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012E6C4
	lis      r3, __vt__Q23efx15TEnemyHamonMInd@ha
	addi     r3, r3, __vt__Q23efx15TEnemyHamonMInd@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012E6B4
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012E6B4
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8012E6B4:
	extsh.   r0, r31
	ble      lbl_8012E6C4
	mr       r3, r30
	bl       __dl__FPv

lbl_8012E6C4:
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
 * Address:	8012E6E0
 * Size:	00009C
 */
TEnemyHamonM::~TEnemyHamonM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012E760
	lis      r3, __vt__Q23efx12TEnemyHamonM@ha
	addi     r3, r3, __vt__Q23efx12TEnemyHamonM@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012E750
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012E750
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8012E750:
	extsh.   r0, r31
	ble      lbl_8012E760
	mr       r3, r30
	bl       __dl__FPv

lbl_8012E760:
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
 * Address:	8012E77C
 * Size:	000060
 */
EnemyEffectNodeBase::~EnemyEffectNodeBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012E7C0
	lis      r5, __vt__Q24Game19EnemyEffectNodeBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game19EnemyEffectNodeBase@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8012E7C0
	mr       r3, r30
	bl       __dl__FPv

lbl_8012E7C0:
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
 * Address:	8012E7DC
 * Size:	00011C
 */
void EnemyEffectNodeHamon::create(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012E8D4
	mr       r3, r30
	lfs      f31, 0x1f8(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	mr       r31, r3
	lwz      r12, 0(r30)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lwz      r7, 0xc(r1)
	addi     r5, r3, __vt__Q23efx3Arg@l
	lwz      r6, 0x10(r1)
	lis      r3, __vt__Q23efx12ArgEnemyType@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx12ArgEnemyType@l
	addi     r3, r29, 0x18
	addi     r4, r1, 0x20
	stw      r7, 0x18(r1)
	lfs      f2, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stw      r5, 0x20(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x20(r1)
	stw      r31, 0x30(r1)
	stfs     f31, 0x34(r1)
	lwz      r12, 0x18(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x280(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r29)

lbl_8012E8D4:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012E8F8
 * Size:	00002C
 */
void EnemyEffectNodeHamon::fade(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8012E924
 * Size:	000044
 */
void TEnemyHamon::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	lwz      r12, 4(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x40(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012E968
 * Size:	000050
 */
void TEnemyHamonChasePos::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	lwz      r12, 4(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	lwz      r12, 0x18(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8012E9B8
 * Size:	00002C
 */
void EnemyEffectNodeHamon::forceKill(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8012E9E4
 * Size:	000044
 */
void TEnemyHamon::forceKill()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	lwz      r12, 4(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x40(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012EA28
 * Size:	000050
 */
void TEnemyHamonChasePos::forceKill()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	lwz      r12, 4(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	lwz      r12, 0x18(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8012EA78
 * Size:	00004C
 */
void EnemyEffectNodeHamon::update(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r3, r4
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x244(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	addi     r4, r1, 8
	bl       "update__Q23efx11TEnemyHamonFR10Vector3<f>"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012EAC4
 * Size:	000160
 */
EnemyEffectNodeHamon::~EnemyEffectNodeHamon()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	beq      lbl_8012EC04
	lis      r3, __vt__Q24Game20EnemyEffectNodeHamon@ha
	addic.   r0, r29, 0x18
	addi     r0, r3, __vt__Q24Game20EnemyEffectNodeHamon@l
	stw      r0, 0(r29)
	beq      lbl_8012EBD4
	lis      r3, __vt__Q23efx11TEnemyHamon@ha
	addic.   r31, r29, 0x1c
	addi     r0, r3, __vt__Q23efx11TEnemyHamon@l
	stw      r0, 0x18(r29)
	beq      lbl_8012EBD4
	lis      r3, __vt__Q23efx19TEnemyHamonChasePos@ha
	addic.   r4, r31, 0x18
	addi     r0, r3, __vt__Q23efx19TEnemyHamonChasePos@l
	stw      r0, 0x1c(r29)
	beq      lbl_8012EB78
	lis      r3, __vt__Q23efx15TEnemyHamonMInd@ha
	cmplwi   r4, 0
	addi     r3, r3, __vt__Q23efx15TEnemyHamonMInd@l
	stw      r3, 0x34(r29)
	addi     r0, r3, 0x14
	stw      r0, 0x38(r29)
	beq      lbl_8012EB78
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0x34(r29)
	addi     r0, r3, 0x14
	stw      r0, 0x38(r29)
	beq      lbl_8012EB78
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r31, 0x1c
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0x34(r29)
	addi     r0, r5, 0x14
	stw      r0, 0x38(r29)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8012EB78:
	addic.   r0, r31, 4
	beq      lbl_8012EBD4
	lis      r3, __vt__Q23efx12TEnemyHamonM@ha
	cmplwi   r0, 0
	addi     r3, r3, __vt__Q23efx12TEnemyHamonM@l
	stw      r3, 0x20(r29)
	addi     r0, r3, 0x14
	stw      r0, 0x24(r29)
	beq      lbl_8012EBD4
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0x20(r29)
	addi     r0, r3, 0x14
	stw      r0, 0x24(r29)
	beq      lbl_8012EBD4
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r31, 8
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0x20(r29)
	addi     r0, r5, 0x14
	stw      r0, 0x24(r29)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8012EBD4:
	cmplwi   r29, 0
	beq      lbl_8012EBF4
	lis      r4, __vt__Q24Game19EnemyEffectNodeBase@ha
	mr       r3, r29
	addi     r0, r4, __vt__Q24Game19EnemyEffectNodeBase@l
	li       r4, 0
	stw      r0, 0(r29)
	bl       __dt__5CNodeFv

lbl_8012EBF4:
	extsh.   r0, r30
	ble      lbl_8012EC04
	mr       r3, r29
	bl       __dl__FPv

lbl_8012EC04:
	lwz      r0, 0x24(r1)
	mr       r3, r29
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace efx
