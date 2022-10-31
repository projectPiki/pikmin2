#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_J2DBloSaver_cpp

    .section .sbss # 0x80514D80 - 0x80516360
    .global TextureNameConnect__11J2DBloSaver
    TextureNameConnect__11J2DBloSaver:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	800494E4
 * Size:	00000C
 */
u16 J2DTevBlock::getTexNo(unsigned long) const { return 0xFFFF; }

/*
 * --INFO--
 * Address:	800494F0
 * Size:	000004
 */
void J2DTevBlock::setTexNo(unsigned long, unsigned short) { }

/*
 * --INFO--
 * Address:	800494F4
 * Size:	000008
 */
J2DTevSwapModeTable* J2DTevBlock::getTevSwapModeTable(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	800494FC
 * Size:	000008
 */
J2DTevOrder* J2DTevBlock::getTevOrder(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80049504
 * Size:	00000C
 */
u16 J2DTevBlock::getFontNo() const { return 0xFFFF; }

/*
 * --INFO--
 * Address:	80049510
 * Size:	000008
 */
u8 J2DIndBlock::getIndTexStageNum() const { return 0x0; }

/*
 * --INFO--
 * Address:	80049518
 * Size:	000050
 */
J2DBloSaver::CTextureNameConnect::~CTextureNameConnect()
{
	clear();

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8004954C
	bl       clear__Q211J2DBloSaver19CTextureNameConnectFv
	extsh.   r0, r31
	ble      lbl_8004954C
	mr       r3, r30
	bl       __dl__FPv

lbl_8004954C:
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
 * Address:	80049568
 * Size:	000070
 */
void J2DBloSaver::CTextureNameConnect::clear()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0(r3)
	b        lbl_800495AC

lbl_8004958C:
	cmplwi   r31, 0
	lwz      r30, 8(r31)
	beq      lbl_800495A8
	lwz      r3, 4(r31)
	bl       __dla__FPv
	mr       r3, r31
	bl       __dl__FPv

lbl_800495A8:
	mr       r31, r30

lbl_800495AC:
	cmplwi   r31, 0
	bne      lbl_8004958C
	li       r0, 0
	stw      r0, 0(r29)
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
 * Address:	800495D8
 * Size:	000068
 */
J2DTevStage::J2DTevStage()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j2dDefaultTevStageInfo@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, j2dDefaultTevStageInfo@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setTevStageInfo__11J2DTevStageFRC15J2DTevStageInfo
	addi     r3, r2, j2dDefaultTevSwapMode@sda21
	lbz      r4, 7(r31)
	lbz      r0, 1(r3)
	mr       r3, r31
	rlwinm   r4, r4, 0, 0x1e, 0x1b
	slwi     r0, r0, 2
	or       r0, r4, r0
	stb      r0, 7(r31)
	lbz      r4, 7(r31)
	lbz      r0, j2dDefaultTevSwapMode@sda21(r2)
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r0, r4, r0
	stb      r0, 7(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049640
 * Size:	0001E0
 */
void J2DTevStage::setTevStageInfo(const J2DTevStageInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r5, 1(r4)
	stw      r31, 0xc(r1)
	lbz      r0, 2(r4)
	slwi     r5, r5, 4
	stw      r30, 8(r1)
	or       r5, r5, r0
	lbz      r6, 3(r4)
	lbz      r7, 4(r4)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	stb      r5, 2(r3)
	or       r0, r0, r7
	lbz      r6, 5(r4)
	stb      r0, 3(r3)
	rlwinm   r0, r6, 2, 0x16, 0x1d
	cmplwi   r6, 1
	lbz      r5, 1(r3)
	lbz      r10, 9(r4)
	rlwinm   r5, r5, 0, 0x1e, 0x1c
	lbz      r9, 8(r4)
	or       r0, r5, r0
	lbz      r8, 7(r4)
	stb      r0, 1(r3)
	lbz      r7, 6(r4)
	bgt      lbl_800496CC
	lbz      r5, 1(r3)
	rlwinm   r0, r8, 4, 0x14, 0x1b
	rlwinm   r5, r5, 0, 0x1c, 0x19
	or       r0, r5, r0
	stb      r0, 1(r3)
	lbz      r0, 1(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	or       r0, r0, r7
	stb      r0, 1(r3)
	b        lbl_800496E8

lbl_800496CC:
	lbz      r0, 1(r3)
	rlwimi   r0, r6, 3, 0x1a, 0x1b
	stb      r0, 1(r3)
	lbz      r0, 1(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 1(r3)

lbl_800496E8:
	lbz      r0, 1(r3)
	rlwinm   r5, r9, 3, 0x15, 0x1c
	lbz      r8, 0xc(r4)
	rlwinm   r6, r10, 6, 0x12, 0x19
	rlwinm   r7, r0, 0, 0x1d, 0x1b
	lbz      r0, 0xe(r4)
	or       r7, r7, r5
	lbz      r5, 0xa(r4)
	stb      r7, 1(r3)
	rlwinm   r9, r8, 7, 0x11, 0x18
	slwi     r12, r5, 5
	lbz      r7, 0xb(r4)
	lbz      r5, 1(r3)
	rlwinm   r10, r8, 0x1f, 0x19, 0x1f
	lbz      r31, 0xd(r4)
	rlwinm   r11, r7, 2, 0x16, 0x1d
	rlwimi   r6, r5, 0, 0x1a, 0x1f
	lbz      r30, 0x10(r4)
	stb      r6, 1(r3)
	rlwinm   r8, r31, 4, 0x14, 0x1b
	lbz      r6, 0x12(r4)
	rlwinm   r7, r0, 2, 0x16, 0x1d
	lbz      r5, 6(r3)
	cmplwi   r0, 1
	lbz      r31, 0xf(r4)
	rlwimi   r12, r5, 0, 0x1b, 0x1f
	lbz      r5, 0x11(r4)
	stb      r12, 6(r3)
	lbz      r12, 6(r3)
	rlwinm   r4, r12, 0, 0x1e, 0x1a
	or       r4, r4, r11
	stb      r4, 6(r3)
	lbz      r4, 6(r3)
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r4, r4, r10
	stb      r4, 6(r3)
	lbz      r4, 7(r3)
	rlwimi   r9, r4, 0, 0x19, 0x1f
	stb      r9, 7(r3)
	lbz      r4, 7(r3)
	rlwinm   r4, r4, 0, 0x1c, 0x18
	or       r4, r4, r8
	stb      r4, 7(r3)
	lbz      r4, 5(r3)
	rlwinm   r4, r4, 0, 0x1e, 0x1c
	or       r4, r4, r7
	stb      r4, 5(r3)
	bgt      lbl_800497D0
	lbz      r4, 5(r3)
	rlwinm   r0, r30, 4, 0x14, 0x1b
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r4, r4, r31
	stb      r4, 5(r3)
	lbz      r4, 5(r3)
	rlwinm   r4, r4, 0, 0x1c, 0x19
	or       r0, r4, r0
	stb      r0, 5(r3)
	b        lbl_800497EC

lbl_800497D0:
	lbz      r4, 5(r3)
	rlwimi   r4, r0, 3, 0x1a, 0x1b
	stb      r4, 5(r3)
	lbz      r0, 5(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 5(r3)

lbl_800497EC:
	lbz      r7, 5(r3)
	rlwinm   r4, r5, 3, 0x15, 0x1c
	rlwinm   r0, r6, 6, 0x12, 0x19
	rlwinm   r5, r7, 0, 0x1d, 0x1b
	or       r4, r5, r4
	stb      r4, 5(r3)
	lbz      r4, 5(r3)
	rlwimi   r0, r4, 0, 0x1a, 0x1f
	stb      r0, 5(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049820
 * Size:	00003C
 */
void __sinit_J2DBloSaver_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, __dt__Q211J2DBloSaver19CTextureNameConnectFv@ha
	lis      r5, lbl_804F0408@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	addi     r4, r3, __dt__Q211J2DBloSaver19CTextureNameConnectFv@l
	addi     r3, r13, TextureNameConnect__11J2DBloSaver@sda21
	stw      r0, TextureNameConnect__11J2DBloSaver@sda21(r13)
	addi     r5, r5, lbl_804F0408@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
