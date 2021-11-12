#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_fogMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A610
    lbl_8049A610:
        .4byte 0x83748348
        .4byte 0x834F837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC3B8
    lbl_804EC3B8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516220
    lbl_80516220:
        .skip 0x4
    .global lbl_80516224
    lbl_80516224:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520760
    lbl_80520760:
        .4byte 0x44200000
    .global lbl_80520764
    lbl_80520764:
        .4byte 0x453D0000
    .global lbl_80520768
    lbl_80520768:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80432948
 * Size:	000074
 */
FogMgr::FogMgr()
{
	/*
	lis      r6, __vt__5CNode@ha
	lis      r5, lbl_8049A610@ha
	addi     r0, r6, __vt__5CNode@l
	lis      r4, __vt__6FogMgr@ha
	stw      r0, 0(r3)
	li       r10, 0
	addi     r9, r5, lbl_8049A610@l
	addi     r8, r4, __vt__6FogMgr@l
	stw      r10, 0x10(r3)
	li       r7, 2
	lfs      f1, lbl_80520760@sda21(r2)
	li       r6, 0xad
	stw      r10, 0xc(r3)
	li       r5, 0xb1
	lfs      f0, lbl_80520764@sda21(r2)
	li       r4, 0xfc
	stw      r10, 8(r3)
	li       r0, 0xff
	stw      r10, 4(r3)
	stw      r9, 0x14(r3)
	stw      r8, 0(r3)
	stw      r7, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f0, 0x20(r3)
	stb      r6, 0x24(r3)
	stb      r5, 0x25(r3)
	stb      r4, 0x26(r3)
	stb      r0, 0x27(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	804329BC
 * Size:	000040
 */
void FogMgr::off(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80520768@sda21(r2)
	stw      r0, 0x14(r1)
	addi     r4, r1, 8
	fmr      f2, f1
	lwz      r0, 0x24(r3)
	fmr      f3, f1
	fmr      f4, f1
	li       r3, 0
	stw      r0, 8(r1)
	bl       GXSetFog
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804329FC
 * Size:	0000AC
 */
void FogMgr::set(Graphics&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lwz      r4, 0x25c(r4)
	mr       r30, r3
	lwz      r0, 0x24(r3)
	lwz      r31, 0x44(r4)
	stw      r0, 8(r1)
	mr       r3, r31
	bl       getFar__6CameraFv
	fmr      f31, f1
	mr       r3, r31
	bl       getNear__6CameraFv
	fmr      f3, f1
	lwz      r3, 0x18(r30)
	fmr      f4, f31
	lfs      f1, 0x1c(r30)
	lfs      f2, 0x20(r30)
	addi     r4, r1, 8
	bl       GXSetFog
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	addi     r3, r1, 0xc
	addi     r5, r31, 0xb4
	bl       GXInitFogAdjTable
	bl       getRenderModeObj__6SystemFv
	lhz      r0, 4(r3)
	addi     r5, r1, 0xc
	li       r3, 1
	rlwinm   r4, r0, 0x1f, 0x11, 0x1f
	bl       GXSetFogRangeAdj
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80432AA8
 * Size:	000024
 */
void FogMgr::setColor(Color4&)
{
	/*
	lbz      r0, 0(r4)
	stb      r0, 0x24(r3)
	lbz      r0, 1(r4)
	stb      r0, 0x25(r3)
	lbz      r0, 2(r4)
	stb      r0, 0x26(r3)
	lbz      r0, 3(r4)
	stb      r0, 0x27(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80432ACC
 * Size:	000024
 */
void FogMgr::getColor(Color4&)
{
	/*
	lbz      r0, 0x24(r3)
	stb      r0, 0(r4)
	lbz      r0, 0x25(r3)
	stb      r0, 1(r4)
	lbz      r0, 0x26(r3)
	stb      r0, 2(r4)
	lbz      r0, 0x27(r3)
	stb      r0, 3(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80432AF0
 * Size:	000028
 */
void __sinit_fogMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC3B8@ha
	stw      r0, lbl_80516220@sda21(r13)
	stfsu    f0, lbl_804EC3B8@l(r3)
	stfs     f0, lbl_80516224@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
