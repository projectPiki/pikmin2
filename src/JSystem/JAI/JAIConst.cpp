#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JAIConst_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global dummyZeroVec__Q27JAInter5Const
    dummyZeroVec__Q27JAInter5Const:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global sCInfos_0__Q27JAInter5Const
    sCInfos_0__Q27JAInter5Const:
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x00000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global nullCamera__Q27JAInter5Const
    nullCamera__Q27JAInter5Const:
        .skip 0x68
    .global nullActor__Q27JAInter5Const
    nullActor__Q27JAInter5Const:
        .skip 0x14
    .global camMtx__Q27JAInter5Const
    camMtx__Q27JAInter5Const:
        .skip 0x30
    .global camTrans__Q27JAInter5Const
    camTrans__Q27JAInter5Const:
        .skip 0xC
    .global camPreTrans__Q27JAInter5Const
    camPreTrans__Q27JAInter5Const:
        .skip 0xC

    .section .sbss # 0x80514D80 - 0x80516360
    .global random__Q27JAInter5Const
    random__Q27JAInter5Const:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	800AD1C4
 * Size:	0000F4
 */
void JAInter::transInitDataFile(unsigned char*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800AD2A0
	cmplwi   r31, 0
	li       r6, 0
	ble      lbl_800AD2A0
	cmplwi   r31, 8
	addi     r4, r31, -8
	ble      lbl_800AD274
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmplwi   r4, 0
	ble      lbl_800AD274

lbl_800AD224:
	add      r4, r30, r6
	add      r5, r3, r6
	lbz      r0, 0(r4)
	addi     r6, r6, 8
	stb      r0, 0(r5)
	lbz      r0, 1(r4)
	stb      r0, 1(r5)
	lbz      r0, 2(r4)
	stb      r0, 2(r5)
	lbz      r0, 3(r4)
	stb      r0, 3(r5)
	lbz      r0, 4(r4)
	stb      r0, 4(r5)
	lbz      r0, 5(r4)
	stb      r0, 5(r5)
	lbz      r0, 6(r4)
	stb      r0, 6(r5)
	lbz      r0, 7(r4)
	stb      r0, 7(r5)
	bdnz     lbl_800AD224

lbl_800AD274:
	subf     r0, r6, r31
	add      r5, r30, r6
	add      r4, r3, r6
	mtctr    r0
	cmplw    r6, r31
	bge      lbl_800AD2A0

lbl_800AD28C:
	lbz      r0, 0(r5)
	addi     r5, r5, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_800AD28C

lbl_800AD2A0:
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
 * Address:	800AD2B8
 * Size:	0000E4
 */
void JAInter::loadTmpDVDFile(char*, unsigned char**)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	mr       r31, r4
	stw      r30, 0x108(r1)
	mr       r30, r3
	addi     r3, r1, 0x10
	bl       __ct__10JKRDvdFileFv
	mr       r4, r30
	addi     r3, r1, 0x10
	bl       open__10JKRDvdFileFPCc
	clrlwi.  r0, r3, 0x18
	bne      lbl_800AD308
	li       r0, 0
	addi     r3, r1, 0x10
	stw      r0, 0(r31)
	li       r4, -1
	bl       __dt__10JKRDvdFileFv
	b        lbl_800AD384

lbl_800AD308:
	lwz      r4, 0xa0(r1)
	cmplwi   r4, 0
	bne      lbl_800AD32C
	li       r0, 0
	addi     r3, r1, 0x10
	stw      r0, 0(r31)
	li       r4, -1
	bl       __dt__10JKRDvdFileFv
	b        lbl_800AD384

lbl_800AD32C:
	lwz      r3, JASDram@sda21(r13)
	li       r5, -32
	bl       alloc__7JKRHeapFUli
	stw      r3, 0(r31)
	li       r0, 0
	mr       r3, r30
	li       r5, 0
	stw      r0, 8(r1)
	li       r6, 0
	li       r7, 0
	li       r8, 1
	lwz      r4, 0(r31)
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	cmplwi   r3, 0
	bne      lbl_800AD378
	li       r0, 0
	stw      r0, 0(r31)

lbl_800AD378:
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__10JKRDvdFileFv

lbl_800AD384:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD39C
 * Size:	000030
 */
void JAInter::deleteTmpDVDFile(unsigned char**)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_800AD3BC
	lwz      r3, JASDram@sda21(r13)
	bl       freeTail__7JKRHeapFv

lbl_800AD3BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD3CC
 * Size:	000040
 */
void JAInter::routeToTrack(unsigned long)
{
	/*
	rlwinm.  r4, r3, 0, 0, 3
	li       r5, 0
	bne      lbl_800AD3E0
	li       r3, 0
	blr

lbl_800AD3E0:
	addis    r0, r4, 0xf000
	cmplwi   r0, 0
	bne      lbl_800AD3F4
	li       r5, 0xf
	b        lbl_800AD404

lbl_800AD3F4:
	addis    r0, r4, 0xe000
	cmplwi   r0, 0
	bne      lbl_800AD404
	li       r5, 0xff

lbl_800AD404:
	and      r3, r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD40C
 * Size:	000084
 */
void __sinit_JAIConst_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r7, camTrans__Q27JAInter5Const@ha
	lis      r5, camPreTrans__Q27JAInter5Const@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	addi     r7, r7, camTrans__Q27JAInter5Const@l
	lis      r6, nullCamera__Q27JAInter5Const@ha
	lis      r4, camMtx__Q27JAInter5Const@ha
	lis      r3, nullActor__Q27JAInter5Const@ha
	stwu     r0, nullActor__Q27JAInter5Const@l(r3)
	addi     r5, r5, camPreTrans__Q27JAInter5Const@l
	addi     r4, r4, camMtx__Q27JAInter5Const@l
	cmplwi   r0, 0
	stwu     r7, nullCamera__Q27JAInter5Const@l(r6)
	stw      r5, 4(r6)
	stw      r4, 8(r6)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	bne      lbl_800AD46C
	li       r0, 1
	stb      r0, 0x10(r3)
	b        lbl_800AD474

lbl_800AD46C:
	li       r0, 1
	stb      r0, 0x10(r3)

lbl_800AD474:
	addi     r3, r13, random__Q27JAInter5Const@sda21
	li       r4, 0
	bl       __ct__Q25JMath13TRandom_fast_FUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
