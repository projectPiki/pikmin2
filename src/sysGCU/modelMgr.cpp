#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499E68
    lbl_80499E68:
        .4byte 0x6D6F6465
        .4byte 0x6C4D6772
        .4byte 0x00000000
    .global lbl_80499E74
    lbl_80499E74:
        .4byte 0x6D6F6465
        .4byte 0x6C4D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80499E84
    lbl_80499E84:
        .4byte 0x736F6C69
        .4byte 0x64206865
        .4byte 0x61702063
        .4byte 0x72656174
        .4byte 0x696F6E20
        .4byte 0x6661696C
        .4byte 0x65642021
        .4byte 0x0A000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x736F6C69
        .4byte 0x64486561
        .4byte 0x70206E75
        .4byte 0x6C6C210A
        .4byte 0x00000000
        .4byte 0x6661696C
        .4byte 0x65642074
        .4byte 0x6F206E65
        .4byte 0x77206D6F
        .4byte 0x64656C20
        .4byte 0x21206964
        .4byte 0x20256420
        .4byte 0x69647820
        .4byte 0x25640A00
*/

/*
namespace SysShape {

 * --INFO--
 * Address:	8042AB00
 * Size:	0001D8
 */
void __ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<Model*>(
    void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r26, r4
	  mr        r25, r3
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  mr        r31, r9
	  stw       r26, 0x0(r3)
	  rlwinm    r3,r4,2,0,29
	  bl        -0x406B88
	  cmpwi     r26, 0
	  stw       r3, 0x4(r25)
	  li        r5, 0
	  ble-      .loc_0x12C
	  cmpwi     r26, 0x8
	  subi      r6, r26, 0x8
	  ble-      .loc_0xFC
	  addi      r0, r6, 0x7
	  mr        r3, r27
	  rlwinm    r0,r0,29,3,31
	  li        r4, 0
	  mtctr     r0
	  cmpwi     r6, 0
	  ble-      .loc_0xFC

	.loc_0x70:
	  lwz       r0, 0x0(r3)
	  addi      r11, r4, 0x4
	  lwz       r6, 0x4(r25)
	  addi      r10, r4, 0x8
	  addi      r9, r4, 0xC
	  addi      r8, r4, 0x10
	  stwx      r0, r6, r4
	  addi      r7, r4, 0x14
	  addi      r6, r4, 0x18
	  addi      r0, r4, 0x1C
	  lwz       r24, 0x4(r3)
	  addi      r4, r4, 0x20
	  lwz       r12, 0x4(r25)
	  addi      r5, r5, 0x8
	  stwx      r24, r12, r11
	  lwz       r12, 0x8(r3)
	  lwz       r11, 0x4(r25)
	  stwx      r12, r11, r10
	  lwz       r11, 0xC(r3)
	  lwz       r10, 0x4(r25)
	  stwx      r11, r10, r9
	  lwz       r10, 0x10(r3)
	  lwz       r9, 0x4(r25)
	  stwx      r10, r9, r8
	  lwz       r9, 0x14(r3)
	  lwz       r8, 0x4(r25)
	  stwx      r9, r8, r7
	  lwz       r8, 0x18(r3)
	  lwz       r7, 0x4(r25)
	  stwx      r8, r7, r6
	  lwz       r7, 0x1C(r3)
	  addi      r3, r3, 0x20
	  lwz       r6, 0x4(r25)
	  stwx      r7, r6, r0
	  bdnz+     .loc_0x70

	.loc_0xFC:
	  rlwinm    r6,r5,2,0,29
	  sub       r0, r26, r5
	  add       r4, r27, r6
	  mtctr     r0
	  cmpw      r5, r26
	  bge-      .loc_0x12C

	.loc_0x114:
	  lwz       r0, 0x0(r4)
	  addi      r4, r4, 0x4
	  lwz       r3, 0x4(r25)
	  stwx      r0, r3, r6
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0x114

	.loc_0x12C:
	  stw       r28, 0x8(r25)
	  rlwinm    r3,r28,2,0,29
	  stw       r29, 0x10(r25)
	  stw       r30, 0x14(r25)
	  stw       r31, 0x18(r25)
	  bl        -0x406C94
	  stw       r3, 0xC(r25)
	  mr        r3, r25
	  bl        .loc_0x1D8
	  addi      r0, r3, 0x1F
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  li        r30, 0
	  rlwinm    r29,r0,0,0,26
	  subi      r27, r4, 0x618C
	  subi      r26, r3, 0x617C
	  li        r24, 0
	  b         .loc_0x1B8

	.loc_0x174:
	  lwz       r4, -0x77D4(r13)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x405F10
	  lwz       r4, 0xC(r25)
	  stwx      r3, r4, r24
	  lwz       r3, 0xC(r25)
	  lwzx      r0, r3, r24
	  cmplwi    r0, 0
	  bne-      .loc_0x1B0
	  mr        r3, r27
	  mr        r5, r26
	  li        r4, 0x52
	  crclr     6, 0x6
	  bl        -0x40066C

	.loc_0x1B0:
	  addi      r24, r24, 0x4
	  addi      r30, r30, 0x1

	.loc_0x1B8:
	  cmpw      r30, r28
	  blt+      .loc_0x174
	  mr        r3, r25
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1D8:
	*/
}

/*
 * --INFO--
 * Address:	8042ACD8
 * Size:	000084
 */
void ModelMgr::calcMaximumModelSize(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8042AD2C

lbl_8042AD08:
	lwz      r4, 4(r28)
	mr       r3, r28
	lwzx     r4, r4, r31
	bl       calcModelSize__Q28SysShape8ModelMgrFP12J3DModelData
	cmplw    r3, r30
	ble      lbl_8042AD24
	mr       r30, r3

lbl_8042AD24:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_8042AD2C:
	lwz      r0, 0(r28)
	cmpw     r29, r0
	blt      lbl_8042AD08
	lwz      r0, 0x24(r1)
	addi     r3, r30, 0x7c
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
 * Address:	8042AD5C
 * Size:	0000A0
 */
void ModelMgr::calcModelSize(J3DModelData*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_8042AD88
	li       r3, 0
	b        lbl_8042ADE0

lbl_8042AD88:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	mr       r31, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8042ADB8
	lwz      r5, 0x10(r29)
	mr       r4, r30
	lwz      r6, 0x14(r29)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r4, r3

lbl_8042ADB8:
	lwz      r3, 0x18(r29)
	cmplwi   r3, 0
	beq      lbl_8042ADD4
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8042ADD4:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	subf     r3, r3, r31

lbl_8042ADE0:
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
 * Address:	8042ADFC
 * Size:	0001C8
 */
void ModelMgr::createModel(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	slwi     r30, r4, 2
	mr       r28, r4
	lis      r4, lbl_80499E68@ha
	mr       r29, r5
	addi     r31, r4, lbl_80499E68@l
	lwz      r3, 4(r3)
	lwzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8042AE3C
	li       r3, 0
	b        lbl_8042AFB0

lbl_8042AE3C:
	cmpwi    r28, 0
	li       r3, 0
	blt      lbl_8042AE58
	lwz      r0, 0(r27)
	cmpw     r28, r0
	bge      lbl_8042AE58
	li       r3, 1

lbl_8042AE58:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042AE74
	addi     r3, r31, 0xc
	addi     r5, r31, 0x3c
	li       r4, 0x98
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042AE74:
	cmpwi    r29, 0
	li       r3, 0
	blt      lbl_8042AE90
	lwz      r0, 8(r27)
	cmpw     r29, r0
	bge      lbl_8042AE90
	li       r3, 1

lbl_8042AE90:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042AEAC
	addi     r3, r31, 0xc
	addi     r5, r31, 0x3c
	li       r4, 0x99
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042AEAC:
	lwz      r4, 0xc(r27)
	slwi     r0, r29, 2
	lwz      r3, sys@sda21(r13)
	lwzx     r26, r4, r0
	mr       r4, r26
	bl       startChangeCurrentHeap__6SystemFP7JKRHeap
	cmplwi   r26, 0
	beq      lbl_8042AED8
	mr       r3, r26
	bl       freeAll__7JKRHeapFv
	b        lbl_8042AF38

lbl_8042AED8:
	lwz      r4, 8(r27)
	li       r5, 0
	cmpwi    r4, 0
	ble      lbl_8042AF24
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8042AF10
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8042AF10

lbl_8042AF08:
	addi     r5, r5, 8
	bdnz     lbl_8042AF08

lbl_8042AF10:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bge      lbl_8042AF24

lbl_8042AF20:
	bdnz     lbl_8042AF20

lbl_8042AF24:
	addi     r3, r31, 0xc
	addi     r5, r31, 0x48
	li       r4, 0xad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042AF38:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8042AF60
	lwz      r4, 4(r27)
	lwz      r5, 0x10(r27)
	lwzx     r4, r4, r30
	lwz      r6, 0x14(r27)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r26, r3

lbl_8042AF60:
	lwz      r3, 0x18(r27)
	cmplwi   r3, 0
	beq      lbl_8042AF80
	lwz      r12, 0(r3)
	mr       r4, r26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8042AF80:
	cmplwi   r26, 0
	bne      lbl_8042AFA4
	mr       r6, r28
	mr       r7, r29
	addi     r3, r31, 0xc
	addi     r5, r31, 0x5c
	li       r4, 0xb8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042AFA4:
	lwz      r3, sys@sda21(r13)
	bl       endChangeCurrentHeap__6SystemFv
	mr       r3, r26

lbl_8042AFB0:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // SysShape
