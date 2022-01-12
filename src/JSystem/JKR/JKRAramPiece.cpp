#include "JSystem/JKR/Aram.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRAramPiece_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473540
    lbl_80473540:
        .4byte 0x64697265
        .4byte 0x6374696F
        .4byte 0x6E203D20
        .4byte 0x25780A00
        .4byte 0x736F7572
        .4byte 0x6365203D
        .4byte 0x2025780A
        .4byte 0x00000000
        .4byte 0x64657374
        .4byte 0x696E6174
        .4byte 0x696F6E20
        .4byte 0x3D202578
        .4byte 0x0A000000
        .4byte 0x6C656E67
        .4byte 0x7468203D
        .4byte 0x2025780A
        .4byte 0x00000000
        .4byte 0x4A4B5241
        .4byte 0x72616D50
        .4byte 0x69656365
        .4byte 0x2E637070
        .4byte 0x00000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sAramPieceCommandList__12JKRAramPiece
    sAramPieceCommandList__12JKRAramPiece:
        .skip 0x24
    .global mMutex__12JKRAramPiece
    mMutex__12JKRAramPiece:
        .skip 0x18

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805164D8
    lbl_805164D8:
        .4byte 0x41626F72
        .4byte 0x742E0000
*/

/*
 * --INFO--
 * Address:	80019AD8
 * Size:	000020
 */
void JKRAramPiece::sendCommand(JKRAMCommand*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       startDMA__12JKRAramPieceFP12JKRAMCommand
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019AF8
 * Size:	0001AC
 */
void JKRAramPiece::orderSync(int, unsigned long, unsigned long, unsigned long, JKRAramBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r8, 0x8050
	  lis       r9, 0x8047
	  stw       r0, 0x34(r1)
	  addi      r0, r8, 0x6DE8
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r3, r0
	  addi      r31, r9, 0x3540
	  bl        0xD6038
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD602C
	  rlwinm.   r0,r27,0,27,31
	  bne-      .loc_0x58
	  rlwinm.   r0,r28,0,27,31
	  beq-      .loc_0xAC

	.loc_0x58:
	  mr        r4, r25
	  addi      r3, r31, 0
	  crclr     6, 0x6
	  bl        0xD3B90
	  mr        r4, r27
	  addi      r3, r31, 0x10
	  crclr     6, 0x6
	  bl        0xD3B80
	  mr        r4, r28
	  addi      r3, r31, 0x20
	  crclr     6, 0x6
	  bl        0xD3B70
	  mr        r4, r29
	  addi      r3, r31, 0x34
	  crclr     6, 0x6
	  bl        0xD3B60
	  addi      r3, r31, 0x44
	  li        r4, 0x6B
	  subi      r5, r2, 0x7E88
	  crclr     6, 0x6
	  bl        0xD3BCC

	.loc_0xAC:
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x8
	  li        r5, -0x4
	  bl        0xA390
	  lwz       r4, -0x77D8(r13)
	  mr        r26, r3
	  li        r3, 0x98
	  li        r5, -0x4
	  bl        0xA37C
	  mr.       r31, r3
	  beq-      .loc_0xE0
	  bl        0x1F4
	  mr        r31, r3

	.loc_0xE0:
	  stw       r25, 0x40(r31)
	  lis       r3, 0x804A
	  li        r6, 0
	  li        r0, 0x1
	  stw       r27, 0x48(r31)
	  subi      r3, r3, 0x488
	  mr        r4, r26
	  li        r5, 0x1
	  stw       r28, 0x4C(r31)
	  stw       r30, 0x50(r31)
	  stw       r29, 0x44(r31)
	  stw       r6, 0x58(r31)
	  stw       r0, 0x0(r26)
	  stw       r31, 0x4(r26)
	  bl        0xD590C
	  lwz       r0, 0x58(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lis       r3, 0x8050
	  addi      r4, r31, 0x20
	  addi      r3, r3, 0x6DC4
	  bl        0xCCB8

	.loc_0x138:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD600C
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD5F24
	  addi      r3, r31, 0x68
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xD5990
	  lis       r3, 0x8050
	  addi      r4, r31, 0x20
	  addi      r3, r3, 0x6DC4
	  bl        0xCFC0
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD5FD4
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1B8
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD5FBC
	  lmw       r25, 0x14(r1)
	  li        r3, 0x1
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80019CA4
 * Size:	000078
 */
void JKRAramPiece::startDMA(JKRAMCommand*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x40(r3)
	cmpwi    r0, 1
	bne      lbl_80019CD4
	lwz      r3, 0x4c(r31)
	lwz      r4, 0x44(r31)
	bl       DCInvalidateRange
	b        lbl_80019CE0

lbl_80019CD4:
	lwz      r3, 0x48(r31)
	lwz      r4, 0x44(r31)
	bl       DCStoreRange

lbl_80019CE0:
	lis      r3, doneDMA__12JKRAramPieceFUl@ha
	lwz      r5, 0x40(r31)
	addi     r10, r3, doneDMA__12JKRAramPieceFUl@l
	lwz      r7, 0x48(r31)
	lwz      r8, 0x4c(r31)
	mr       r3, r31
	lwz      r9, 0x44(r31)
	li       r4, 0
	li       r6, 0
	bl       ARQPostRequest
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019D1C
 * Size:	0000A8
 */
void JKRAramPiece::doneDMA(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x40(r3)
	cmpwi    r0, 1
	bne      lbl_80019D48
	lwz      r3, 0x4c(r31)
	lwz      r4, 0x44(r31)
	bl       DCInvalidateRange

lbl_80019D48:
	lwz      r0, 0x60(r31)
	cmpwi    r0, 0
	beq      lbl_80019D68
	cmpwi    r0, 2
	bne      lbl_80019DB0
	lwz      r3, 0x64(r31)
	bl       sendCommand__9JKRDecompFP16JKRDecompCommand
	b        lbl_80019DB0

lbl_80019D68:
	lwz      r12, 0x58(r31)
	cmplwi   r12, 0
	beq      lbl_80019D84
	mr       r3, r31
	mtctr    r12
	bctrl
	b        lbl_80019DB0

lbl_80019D84:
	lwz      r3, 0x5c(r31)
	cmplwi   r3, 0
	beq      lbl_80019DA0
	mr       r4, r31
	li       r5, 0
	bl       OSSendMessage
	b        lbl_80019DB0

lbl_80019DA0:
	mr       r4, r31
	addi     r3, r31, 0x68
	li       r5, 0
	bl       OSSendMessage

lbl_80019DB0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019DC4
 * Size:	000070
 */
JKRAMCommand::JKRAMCommand()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	addi     r3, r4, 0x20
	bl       __ct__10JSUPtrLinkFPv
	mr       r4, r31
	addi     r3, r31, 0x30
	bl       __ct__10JSUPtrLinkFPv
	addi     r3, r31, 0x68
	addi     r4, r31, 0x88
	li       r5, 1
	bl       OSInitMessageQueue
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x58(r31)
	stw      r0, 0x5c(r31)
	stw      r0, 0x60(r31)
	stw      r0, 0x8c(r31)
	stw      r0, 0x90(r31)
	stw      r0, 0x94(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019E34
 * Size:	0000A8
 */
JKRAMCommand::~JKRAMCommand()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80019EC0
	lwz      r3, 0x8c(r30)
	cmplwi   r3, 0
	beq      lbl_80019E64
	bl       __dl__FPv

lbl_80019E64:
	lwz      r3, 0x90(r30)
	cmplwi   r3, 0
	beq      lbl_80019E74
	bl       __dl__FPv

lbl_80019E74:
	lwz      r3, 0x94(r30)
	cmplwi   r3, 0
	beq      lbl_80019E88
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80019E88:
	addic.   r0, r30, 0x30
	beq      lbl_80019E9C
	addi     r3, r30, 0x30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80019E9C:
	addic.   r0, r30, 0x20
	beq      lbl_80019EB0
	addi     r3, r30, 0x20
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80019EB0:
	extsh.   r0, r31
	ble      lbl_80019EC0
	mr       r3, r30
	bl       __dl__FPv

lbl_80019EC0:
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
 * Address:	80019EDC
 * Size:	000044
 */
void __sinit_JKRAramPiece_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sAramPieceCommandList__12JKRAramPiece@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sAramPieceCommandList__12JKRAramPiece@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sAramPieceCommandList__12JKRAramPiece@ha
	lis      r4, "__dt__23JSUList<12JKRAMCommand>Fv"@ha
	lis      r5, lbl_804EFF30@ha
	addi     r3, r3, sAramPieceCommandList__12JKRAramPiece@l
	addi     r4, r4, "__dt__23JSUList<12JKRAMCommand>Fv"@l
	addi     r5, r5, lbl_804EFF30@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
