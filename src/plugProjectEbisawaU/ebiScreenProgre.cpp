#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496520
    lbl_80496520:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E50726F
        .4byte 0x67726500
        .4byte 0x54536372
        .4byte 0x65656E50
        .4byte 0x726F6772
        .4byte 0x653A3A6C
        .4byte 0x6F616452
        .4byte 0x65736F75
        .4byte 0x72636500
        .4byte 0x70726F67
        .4byte 0x72652E73
        .4byte 0x7A730000
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E50726F
        .4byte 0x6772652E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3
    .global lbl_80496578
    lbl_80496578:
        .4byte 0x54536372
        .4byte 0x65656E50
        .4byte 0x726F6772
        .4byte 0x653A3A73
        .4byte 0x65744172
        .4byte 0x63686976
        .4byte 0x65000000
    .global lbl_80496594
    lbl_80496594:
        .4byte 0x70726F67
        .4byte 0x72652E62
        .4byte 0x6C6F0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23ebi13TScreenProgre
    __vt__Q23ebi13TScreenProgre:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q23ebi13TScreenProgreFP10JKRArchive
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FA58
    lbl_8051FA58:
        .4byte 0x40555555
    .global lbl_8051FA5C
    lbl_8051FA5C:
        .4byte 0x00000000
    .global lbl_8051FA60
    lbl_8051FA60:
        .float 1.0
    .global lbl_8051FA64
    lbl_8051FA64:
        .4byte 0x437F0000
    .global lbl_8051FA68
    lbl_8051FA68:
        .float 0.5
    .global lbl_8051FA6C
    lbl_8051FA6C:
        .4byte 0xBF000000
    .global lbl_8051FA70
    lbl_8051FA70:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803CD6D8
 * Size:	0000B0
 */
void TScreenProgre::loadResource(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r4, lbl_80496520@ha
	li       r5, 0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	addi     r31, r4, lbl_80496520@l
	addi     r4, r31, 0x10
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	mr       r29, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 8
	addi     r4, r31, 0x2c
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r30, r3, r3
	bne      lbl_803CD748
	addi     r3, r31, 0x38
	addi     r5, r31, 0x4c
	li       r4, 0x25
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CD748:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x10
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CD788
 * Size:	000318
 */
void TScreenProgre::setArchive(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_80496578@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_80496578@l
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r4, r0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803CD7D4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803CD7D4:
	stw      r0, 0x24(r31)
	lis      r3, lbl_80496594@ha
	addi     r4, r3, lbl_80496594@l
	mr       r6, r30
	lwz      r3, 0x24(r31)
	lis      r5, 0x110
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 0x24(r31)
	mr       r4, r3
	bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
	lis      r4, 0x675F3030@ha
	lwz      r3, 0x24(r31)
	addi     r6, r4, 0x675F3030@l
	li       r5, 0x6d
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x28(r31)
	lis      r3, 0x675F3031@ha
	addi     r6, r3, 0x675F3031@l
	li       r5, 0x6d
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x2c(r31)
	lis      r3, 0x675F3032@ha
	addi     r6, r3, 0x675F3032@l
	li       r5, 0x6d
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x30(r31)
	lis      r3, 0x6E5F3030@ha
	addi     r6, r3, 0x6E5F3030@l
	li       r5, 0x7769
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x34(r31)
	lis      r3, 0x00796573@ha
	addi     r6, r3, 0x00796573@l
	li       r5, 0
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x38(r31)
	li       r6, 0x6e6f
	li       r5, 0
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x3c(r31)
	lis      r3, 0x696C3030@ha
	addi     r6, r3, 0x696C3030@l
	li       r5, 0
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x40(r31)
	lis      r3, 0x69723030@ha
	addi     r6, r3, 0x69723030@l
	li       r5, 0
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x44(r31)
	lis      r3, 0x696C3031@ha
	addi     r6, r3, 0x696C3031@l
	li       r5, 0
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x48(r31)
	lis      r3, 0x69723031@ha
	addi     r6, r3, 0x69723031@l
	li       r5, 0
	lwz      r3, 0x24(r31)
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	stw      r3, 0x4c(r31)
	li       r4, 1
	lwz      r3, 0x28(r31)
	bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
	lwz      r3, 0x28(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	li       r4, 1
	bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
	lwz      r3, 0x2c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r31)
	li       r4, 1
	bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
	lwz      r3, 0x30(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r31)
	li       r4, 1
	bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
	lwz      r3, 0x34(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x6F6C6F72@ha
	lis      r4, 0x00735F63@ha
	lwz      r3, 0x24(r31)
	addi     r6, r5, 0x6F6C6F72@l
	addi     r5, r4, 0x00735F63@l
	bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
	mr       r30, r3
	lwz      r4, 0x3c(r31)
	addi     r3, r31, 0x50
	mr       r5, r30
	bl       set__Q23ebi26E2DCallBack_BlinkFontColorFP10J2DTextBoxP10J2DTextBox
	lwz      r4, 0x3c(r31)
	mr       r5, r30
	addi     r3, r31, 0x9c
	bl       set__Q23ebi26E2DCallBack_BlinkFontColorFP10J2DTextBoxP10J2DTextBox
	lwz      r3, 0x24(r31)
	addi     r5, r31, 0x50
	lwz      r4, 0x38(r31)
	bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
	lwz      r3, 0x24(r31)
	addi     r5, r31, 0x9c
	lwz      r4, 0x3c(r31)
	bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
	lwz      r3, 0x24(r31)
	bl       E2DPane_setTreeShow__3ebiFP7J2DPane
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r30)
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lis      r3, lbl_80496578@ha
	stw      r0, 0xc(r31)
	addi     r4, r3, lbl_80496578@l
	stw      r0, 0x10(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x18(r31)
	lwz      r3, 0x48(r31)
	lwz      r0, 0x40(r31)
	stw      r0, 0x118(r31)
	stw      r3, 0x11c(r31)
	lwz      r3, 0x4c(r31)
	lwz      r0, 0x44(r31)
	stw      r0, 0x150(r31)
	stw      r3, 0x154(r31)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
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
 * Address:	803CDAA0
 * Size:	0003E4
 */
void TScreenProgre::startScreen(long, unsigned long)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r5
	stw      r30, 0x48(r1)
	mr       r30, r3
	stw      r29, 0x44(r1)
	stw      r4, 0x20(r3)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 1
	beq      lbl_803CDD84
	bge      lbl_803CDAE0
	cmpwi    r0, 0
	bge      lbl_803CDAEC
	b        lbl_803CDE58

lbl_803CDAE0:
	cmpwi    r0, 3
	bge      lbl_803CDE58
	b        lbl_803CDDF0

lbl_803CDAEC:
	li       r0, 0
	li       r4, 0
	stb      r0, 9(r30)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r30)
	cmplwi   r0, 1
	bne      lbl_803CDC54
	li       r4, 1
	lfs      f2, lbl_8051FA58@sda21(r2)
	stb      r4, 0x6c(r30)
	li       r0, 0
	lfs      f0, lbl_8051FA5C@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x94(r30)
	stfs     f0, 0x90(r30)
	stb      r4, 0x98(r30)
	stb      r0, 0x99(r30)
	stb      r0, 0xb8(r30)
	lwz      r3, 0xb4(r30)
	cmplwi   r3, 0
	beq      lbl_803CDC38
	lwz      r7, 0xbc(r30)
	mr       r29, r3
	addi     r4, r1, 0x30
	stw      r7, 0x14(r1)
	lbz      r5, 0x14(r1)
	lbz      r0, 0x15(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x16(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x17(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0xc0(r30)
	stw      r7, 0x28(r1)
	stw      r6, 0x10(r1)
	lbz      r5, 0x10(r1)
	lbz      r0, 0x11(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x12(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x13(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0xc4(r30)
	stw      r6, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc8(r30)
	mr       r3, r29
	addi     r4, r1, 0x34
	stw      r0, 0x34(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CDC38:
	lfs      f0, lbl_8051FA60@sda21(r2)
	li       r0, 1
	stfs     f0, 0x110(r30)
	stb      r0, 0x114(r30)
	stfs     f0, 0x148(r30)
	stb      r0, 0x14c(r30)
	b        lbl_803CDD40

lbl_803CDC54:
	li       r0, 0
	stb      r0, 0x6c(r30)
	lwz      r3, 0x68(r30)
	cmplwi   r3, 0
	beq      lbl_803CDD00
	lwz      r7, 0x70(r30)
	mr       r29, r3
	addi     r4, r1, 0x20
	stw      r7, 0xc(r1)
	lbz      r5, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0xe(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0xf(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0x74(r30)
	stw      r7, 0x18(r1)
	stw      r6, 8(r1)
	lbz      r5, 8(r1)
	lbz      r0, 9(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0xa(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0xb(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0x78(r30)
	stw      r6, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x7c(r30)
	mr       r3, r29
	addi     r4, r1, 0x24
	stw      r0, 0x24(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CDD00:
	li       r4, 1
	lfs      f2, lbl_8051FA58@sda21(r2)
	stb      r4, 0xb8(r30)
	li       r0, 0
	lfs      f0, lbl_8051FA5C@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0xe0(r30)
	stfs     f0, 0xdc(r30)
	stb      r4, 0xe4(r30)
	stb      r0, 0xe5(r30)
	stfs     f0, 0x110(r30)
	stb      r0, 0x114(r30)
	stfs     f0, 0x148(r30)
	stb      r0, 0x14c(r30)

lbl_803CDD40:
	addi     r3, r30, 0xe8
	bl       update__Q23ebi12TYesNoCursorFv
	addi     r3, r30, 0x120
	bl       update__Q23ebi12TYesNoCursorFv
	addi     r3, r30, 0xe8
	li       r4, 0
	lwz      r12, 0xe8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x120
	li       r4, 0
	lwz      r12, 0x120(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_803CDE58

lbl_803CDD84:
	li       r0, 0
	li       r4, 0
	stb      r0, 9(r30)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803CDE58

lbl_803CDDF0:
	li       r0, 0
	li       r4, 0
	stb      r0, 9(r30)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803CDE58:
	mr       r3, r30
	mr       r5, r31
	li       r4, 1
	bl       startState__Q23ebi13TScreenProgreFQ33ebi13TScreenProgre9enumStateUl
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
 * Address:	803CDE84
 * Size:	000054
 */
void TScreenProgre::fadeout(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 9(r3)
	cmplwi   r0, 0
	bne      lbl_803CDEA4
	li       r3, 0
	b        lbl_803CDEC8

lbl_803CDEA4:
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	beq      lbl_803CDEC4
	mr       r5, r4
	li       r4, 3
	bl       startState__Q23ebi13TScreenProgreFQ33ebi13TScreenProgre9enumStateUl
	li       r3, 1
	b        lbl_803CDEC8

lbl_803CDEC4:
	li       r3, 0

lbl_803CDEC8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CDED8
 * Size:	000028
 */
void TScreenProgre::isFinish(void)
{
	/*
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	bne      lbl_803CDEF8
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_803CDEF8
	li       r3, 1
	blr

lbl_803CDEF8:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void TScreenProgre::killScreen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CDF00
 * Size:	0000C0
 */
void TScreenProgre::startState(ebi::TScreenProgre::enumState, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x1c(r3)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 2
	beq      lbl_803CDFAC
	bge      lbl_803CDF38
	cmpwi    r0, 0
	beq      lbl_803CDF44
	bge      lbl_803CDF70
	b        lbl_803CDFAC

lbl_803CDF38:
	cmpwi    r0, 4
	bge      lbl_803CDFAC
	b        lbl_803CDF7C

lbl_803CDF44:
	addi     r3, r31, 0xe8
	lwz      r12, 0xe8(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x120
	lwz      r12, 0x120(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803CDFAC

lbl_803CDF70:
	stw      r5, 0xc(r31)
	stw      r5, 0x10(r31)
	b        lbl_803CDFAC

lbl_803CDF7C:
	stw      r5, 0x14(r31)
	addi     r3, r31, 0xe8
	stw      r5, 0x18(r31)
	lwz      r12, 0xe8(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x120
	lwz      r12, 0x120(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803CDFAC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CDFC0
 * Size:	000554
 */
void TScreenProgre::update(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 2
	beq      lbl_803CE284
	bge      lbl_803CDFF8
	cmpwi    r0, 0
	beq      lbl_803CE4FC
	bge      lbl_803CE004
	b        lbl_803CE4FC

lbl_803CDFF8:
	cmpwi    r0, 4
	bge      lbl_803CE4FC
	b        lbl_803CE424

lbl_803CE004:
	lwz      r3, 0xc(r31)
	cmplwi   r3, 0
	beq      lbl_803CE018
	addi     r0, r3, -1
	stw      r0, 0xc(r31)

lbl_803CE018:
	lwz      r0, 0x20(r31)
	cmpwi    r0, 1
	beq      lbl_803CE0E4
	bge      lbl_803CE034
	cmpwi    r0, 0
	bge      lbl_803CE040
	b        lbl_803CE1D0

lbl_803CE034:
	cmpwi    r0, 3
	bge      lbl_803CE1D0
	b        lbl_803CE15C

lbl_803CE040:
	lwz      r4, 0x10(r31)
	cmplwi   r4, 0
	beq      lbl_803CE080
	lwz      r3, 0xc(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f2, lbl_8051FA70@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803CE084

lbl_803CE080:
	lfs      f1, lbl_8051FA5C@sda21(r2)

lbl_803CE084:
	lfs      f0, lbl_8051FA60@sda21(r2)
	lwz      r3, 0x28(r31)
	fsubs    f0, f0, f1
	lfs      f1, lbl_8051FA64@sda21(r2)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r30, 0x1c(r1)
	mr       r4, r30
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r31)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0xe8
	bl       update__Q23ebi12TYesNoCursorFv
	addi     r3, r31, 0x120
	bl       update__Q23ebi12TYesNoCursorFv
	b        lbl_803CE1D0

lbl_803CE0E4:
	lwz      r4, 0x10(r31)
	cmplwi   r4, 0
	beq      lbl_803CE124
	lwz      r3, 0xc(r31)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051FA70@sda21(r2)
	stw      r3, 0x1c(r1)
	lfd      f0, 0x18(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803CE128

lbl_803CE124:
	lfs      f1, lbl_8051FA5C@sda21(r2)

lbl_803CE128:
	lfs      f0, lbl_8051FA60@sda21(r2)
	lwz      r3, 0x2c(r31)
	fsubs    f0, f0, f1
	lfs      f1, lbl_8051FA64@sda21(r2)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	b        lbl_803CE1D0

lbl_803CE15C:
	lwz      r4, 0x10(r31)
	cmplwi   r4, 0
	beq      lbl_803CE19C
	lwz      r3, 0xc(r31)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051FA70@sda21(r2)
	stw      r3, 0x1c(r1)
	lfd      f0, 0x18(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803CE1A0

lbl_803CE19C:
	lfs      f1, lbl_8051FA5C@sda21(r2)

lbl_803CE1A0:
	lfs      f0, lbl_8051FA60@sda21(r2)
	lwz      r3, 0x30(r31)
	fsubs    f0, f0, f1
	lfs      f1, lbl_8051FA64@sda21(r2)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl

lbl_803CE1D0:
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_803CE4FC
	li       r0, 2
	stw      r0, 0x1c(r31)
	lwz      r0, 0x1c(r31)
	cmpwi    r0, 2
	beq      lbl_803CE4FC
	bge      lbl_803CE204
	cmpwi    r0, 0
	beq      lbl_803CE210
	bge      lbl_803CE23C
	b        lbl_803CE4FC

lbl_803CE204:
	cmpwi    r0, 4
	bge      lbl_803CE4FC
	b        lbl_803CE24C

lbl_803CE210:
	addi     r3, r31, 0xe8
	lwz      r12, 0xe8(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x120
	lwz      r12, 0x120(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803CE4FC

lbl_803CE23C:
	li       r0, 0
	stw      r0, 0xc(r31)
	stw      r0, 0x10(r31)
	b        lbl_803CE4FC

lbl_803CE24C:
	li       r0, 0
	addi     r3, r31, 0xe8
	stw      r0, 0x14(r31)
	stw      r0, 0x18(r31)
	lwz      r12, 0xe8(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x120
	lwz      r12, 0x120(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803CE4FC

lbl_803CE284:
	lwz      r3, 0x24(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r31)
	cmpwi    r0, 0
	beq      lbl_803CE2A8
	b        lbl_803CE418

lbl_803CE2A8:
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_803CE404
	lbz      r0, 9(r31)
	cmplwi   r0, 0
	bne      lbl_803CE404
	lwz      r3, 4(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_803CE2E0
	lfs      f1, 0x48(r3)
	lfs      f0, lbl_8051FA68@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803CE2E8

lbl_803CE2E0:
	li       r0, 1
	b        lbl_803CE2EC

lbl_803CE2E8:
	li       r0, 0

lbl_803CE2EC:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803CE358
	lbz      r0, 8(r31)
	cmplwi   r0, 1
	bne      lbl_803CE404
	li       r6, 0
	li       r0, 1
	stb      r6, 8(r31)
	li       r4, 0x1802
	lfs      f2, lbl_8051FA58@sda21(r2)
	li       r5, 0
	stb      r6, 0x98(r31)
	lfs      f0, lbl_8051FA5C@sda21(r2)
	stb      r0, 0x99(r31)
	stb      r0, 0xb8(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0xe0(r31)
	stfs     f0, 0xdc(r31)
	stb      r0, 0xe4(r31)
	stb      r6, 0xe5(r31)
	stb      r6, 0x114(r31)
	stb      r6, 0x14c(r31)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803CE404

lbl_803CE358:
	lwz      r0, 0x18(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803CE374
	lfs      f1, 0x48(r3)
	lfs      f0, lbl_8051FA6C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803CE37C

lbl_803CE374:
	li       r0, 1
	b        lbl_803CE380

lbl_803CE37C:
	li       r0, 0

lbl_803CE380:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803CE3EC
	lbz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_803CE404
	li       r6, 1
	lfs      f2, lbl_8051FA58@sda21(r2)
	stb      r6, 8(r31)
	li       r0, 0
	lfs      f0, lbl_8051FA5C@sda21(r2)
	li       r4, 0x1802
	stb      r6, 0x6c(r31)
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x94(r31)
	stfs     f0, 0x90(r31)
	stb      r6, 0x98(r31)
	stb      r0, 0x99(r31)
	stb      r0, 0xe4(r31)
	stb      r6, 0xe5(r31)
	stb      r6, 0x114(r31)
	stb      r6, 0x14c(r31)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803CE404

lbl_803CE3EC:
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_803CE404
	mr       r3, r31
	bl       setDecide__Q23ebi13TScreenProgreFv
	b        lbl_803CE4FC

lbl_803CE404:
	addi     r3, r31, 0xe8
	bl       update__Q23ebi12TYesNoCursorFv
	addi     r3, r31, 0x120
	bl       update__Q23ebi12TYesNoCursorFv
	b        lbl_803CE4FC

lbl_803CE418:
	li       r0, 1
	stb      r0, 9(r31)
	b        lbl_803CE4FC

lbl_803CE424:
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_803CE438
	addi     r0, r3, -1
	stw      r0, 0x14(r31)

lbl_803CE438:
	lwz      r4, 0x18(r31)
	cmplwi   r4, 0
	beq      lbl_803CE478
	lwz      r3, 0x14(r31)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051FA70@sda21(r2)
	stw      r3, 0x1c(r1)
	lfd      f0, 0x18(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803CE47C

lbl_803CE478:
	lfs      f1, lbl_8051FA5C@sda21(r2)

lbl_803CE47C:
	lfs      f0, lbl_8051FA64@sda21(r2)
	lwz      r0, 0x20(r31)
	fmuls    f0, f0, f1
	cmpwi    r0, 1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	beq      lbl_803CE4D0
	bge      lbl_803CE4AC
	cmpwi    r0, 0
	bge      lbl_803CE4B8
	b        lbl_803CE4FC

lbl_803CE4AC:
	cmpwi    r0, 3
	bge      lbl_803CE4FC
	b        lbl_803CE4E8

lbl_803CE4B8:
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803CE4FC

lbl_803CE4D0:
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803CE4FC

lbl_803CE4E8:
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803CE4FC:
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
 * Address:	803CE514
 * Size:	0000DC
 */
void TScreenProgre::draw(void)
{
	/*
	stwu     r1, -0x2b0(r1)
	mflr     r0
	stw      r0, 0x2b4(r1)
	stw      r31, 0x2ac(r1)
	stw      r30, 0x2a8(r1)
	mr       r30, r3
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0
	beq      lbl_803CE5D8
	lwz      r4, sys@sda21(r13)
	addi     r3, r1, 8
	lwz      r4, 0x24(r4)
	addi     r31, r4, 0x190
	bl       __ct__8GraphicsFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	mr       r5, r31
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__8Graphics@ha
	addic.   r4, r1, 0x198
	addi     r0, r3, __vt__8Graphics@l
	stw      r0, 0x274(r1)
	beq      lbl_803CE5B0
	lis      r3, __vt__13J2DPerspGraph@ha
	cmplwi   r4, 0
	addi     r0, r3, __vt__13J2DPerspGraph@l
	stw      r0, 0(r4)
	beq      lbl_803CE5B0
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0(r4)

lbl_803CE5B0:
	addic.   r4, r1, 0xc4
	beq      lbl_803CE5D8
	lis      r3, __vt__13J2DOrthoGraph@ha
	cmplwi   r4, 0
	addi     r0, r3, __vt__13J2DOrthoGraph@l
	stw      r0, 0(r4)
	beq      lbl_803CE5D8
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0(r4)

lbl_803CE5D8:
	lwz      r0, 0x2b4(r1)
	lwz      r31, 0x2ac(r1)
	lwz      r30, 0x2a8(r1)
	mtlr     r0
	addi     r1, r1, 0x2b0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CE5F0
 * Size:	000308
 */
void TScreenProgre::setDecide(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	stw      r30, 0x68(r1)
	lbz      r0, 8(r3)
	cmplwi   r0, 1
	bne      lbl_803CE770
	li       r0, 0
	stb      r0, 0x6c(r31)
	lwz      r3, 0x68(r31)
	cmplwi   r3, 0
	beq      lbl_803CE6C0
	lwz      r7, 0x80(r31)
	mr       r30, r3
	addi     r4, r1, 0x60
	stw      r7, 0x24(r1)
	lbz      r5, 0x24(r1)
	lbz      r0, 0x25(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x26(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x27(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0x84(r31)
	stw      r7, 0x58(r1)
	stw      r6, 0x20(r1)
	lbz      r5, 0x20(r1)
	lbz      r0, 0x21(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x22(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x23(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0x88(r31)
	stw      r6, 0x5c(r1)
	stw      r0, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x8c(r31)
	mr       r3, r30
	addi     r4, r1, 0x64
	stw      r0, 0x64(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CE6C0:
	li       r0, 0
	stb      r0, 0xb8(r31)
	lwz      r3, 0xb4(r31)
	cmplwi   r3, 0
	beq      lbl_803CE8C8
	lwz      r7, 0xbc(r31)
	mr       r30, r3
	addi     r4, r1, 0x50
	stw      r7, 0x1c(r1)
	lbz      r5, 0x1c(r1)
	lbz      r0, 0x1d(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x1e(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x1f(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0xc0(r31)
	stw      r7, 0x48(r1)
	stw      r6, 0x18(r1)
	lbz      r5, 0x18(r1)
	lbz      r0, 0x19(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x1a(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x1b(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0xc4(r31)
	stw      r6, 0x4c(r1)
	stw      r0, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc8(r31)
	mr       r3, r30
	addi     r4, r1, 0x54
	stw      r0, 0x54(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	b        lbl_803CE8C8

lbl_803CE770:
	li       r0, 0
	stb      r0, 0x6c(r31)
	lwz      r3, 0x68(r31)
	cmplwi   r3, 0
	beq      lbl_803CE81C
	lwz      r7, 0x70(r31)
	mr       r30, r3
	addi     r4, r1, 0x40
	stw      r7, 0x14(r1)
	lbz      r5, 0x14(r1)
	lbz      r0, 0x15(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x16(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x17(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0x74(r31)
	stw      r7, 0x38(r1)
	stw      r6, 0x10(r1)
	lbz      r5, 0x10(r1)
	lbz      r0, 0x11(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x12(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x13(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0x78(r31)
	stw      r6, 0x3c(r1)
	stw      r0, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x7c(r31)
	mr       r3, r30
	addi     r4, r1, 0x44
	stw      r0, 0x44(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CE81C:
	li       r0, 0
	stb      r0, 0xb8(r31)
	lwz      r3, 0xb4(r31)
	cmplwi   r3, 0
	beq      lbl_803CE8C8
	lwz      r7, 0xcc(r31)
	mr       r30, r3
	addi     r4, r1, 0x30
	stw      r7, 0xc(r1)
	lbz      r5, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0xe(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0xf(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0xd0(r31)
	stw      r7, 0x28(r1)
	stw      r6, 8(r1)
	lbz      r5, 8(r1)
	lbz      r0, 9(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0xa(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0xb(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0xd4(r31)
	stw      r6, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xd8(r31)
	mr       r3, r30
	addi     r4, r1, 0x34
	stw      r0, 0x34(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CE8C8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 1
	stb      r0, 9(r31)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}
} // namespace ebi
