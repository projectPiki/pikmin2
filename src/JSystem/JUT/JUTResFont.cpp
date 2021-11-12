#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global saoAboutEncoding___10JUTResFont
    saoAboutEncoding___10JUTResFont:
        .4byte isLeadByte_1Byte__7JUTFontFi
        .4byte isLeadByte_2Byte__7JUTFontFi
        .4byte isLeadByte_ShiftJIS__7JUTFontFi
    .global lbl_8047418C
    lbl_8047418C:
        .asciz "JUTResFont: Unknown data block\n"
    .global lbl_804741AC
    lbl_804741AC:
        .asciz "Unknown data block\n"
    .global halftofull$725
    halftofull$725:
        .4byte 0x81408149
        .4byte 0x81688194
        .4byte 0x81908193
        .4byte 0x81958166
        .4byte 0x8169816A
        .4byte 0x8196817B
        .4byte 0x8143817C
        .4byte 0x8144815E
        .4byte 0x824F8250
        .4byte 0x82518252
        .4byte 0x82538254
        .4byte 0x82558256
        .4byte 0x82578258
        .4byte 0x81468147
        .4byte 0x81838181
        .4byte 0x81848148
        .4byte 0x81978260
        .4byte 0x82618262
        .4byte 0x82638264
        .4byte 0x82658266
        .4byte 0x82678268
        .4byte 0x8269826A
        .4byte 0x826B826C
        .4byte 0x826D826E
        .4byte 0x826F8270
        .4byte 0x82718272
        .4byte 0x82738274
        .4byte 0x82758276
        .4byte 0x82778278
        .4byte 0x8279816D
        .4byte 0x818F816E
        .4byte 0x814F8151
        .4byte 0x81658281
        .4byte 0x82828283
        .4byte 0x82848285
        .4byte 0x82868287
        .4byte 0x82888289
        .4byte 0x828A828B
        .4byte 0x828C828D
        .4byte 0x828E828F
        .4byte 0x82908291
        .4byte 0x82928293
        .4byte 0x82948295
        .4byte 0x82968297
        .4byte 0x82988299
        .4byte 0x829A816F
        .4byte 0x81628170
        .4byte 0x81600000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JUTResFont
    __vt__10JUTResFont:
        .4byte 0
        .4byte 0
        .4byte __dt__10JUTResFontFv
        .4byte setGX__10JUTResFontFv
        .4byte setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor
        .4byte drawChar_scale__10JUTResFontFffffib
        .4byte getLeading__10JUTResFontCFv
        .4byte getAscent__10JUTResFontCFv
        .4byte getDescent__10JUTResFontCFv
        .4byte getHeight__10JUTResFontCFv
        .4byte getWidth__10JUTResFontCFv
        .4byte getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth
        .4byte getCellWidth__10JUTResFontCFv
        .4byte getCellHeight__10JUTResFontCFv
        .4byte getFontType__10JUTResFontCFv
        .4byte getResFont__10JUTResFontCFv
        .4byte isLeadByte__10JUTResFontCFi
        .4byte loadImage__10JUTResFontFi11_GXTexMapID
        .4byte setBlock__10JUTResFontFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805166E0
    lbl_805166E0:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_805166E8
    lbl_805166E8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805166F0
    lbl_805166F0:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80031180
 * Size:	00004C
 */
JUTResFont::JUTResFont()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__7JUTFontFv
	lis      r4, __vt__10JUTResFont@ha
	mr       r3, r31
	addi     r0, r4, __vt__10JUTResFont@l
	stw      r0, 0(r31)
	bl       initialize_state__10JUTResFontFv
	mr       r3, r31
	bl       initialize_state__7JUTFontFv
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
 * Address:	800311CC
 * Size:	000074
 */
JUTResFont::JUTResFont(const ResFONT*, JKRHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__7JUTFontFv
	lis      r4, __vt__10JUTResFont@ha
	mr       r3, r29
	addi     r0, r4, __vt__10JUTResFont@l
	stw      r0, 0(r29)
	bl       initialize_state__10JUTResFontFv
	mr       r3, r29
	bl       initialize_state__7JUTFontFv
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       initiate__10JUTResFontFPC7ResFONTP7JKRHeap
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

/*
 * --INFO--
 * Address:	80031240
 * Size:	00008C
 */
JUTResFont::~JUTResFont()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800312B0
	lis      r4, __vt__10JUTResFont@ha
	addi     r0, r4, __vt__10JUTResFont@l
	stw      r0, 0(r30)
	lbz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_8003128C
	bl       deleteMemBlocks_ResFont__10JUTResFontFv
	mr       r3, r30
	bl       initialize_state__10JUTResFontFv
	mr       r3, r30
	bl       initialize_state__7JUTFontFv

lbl_8003128C:
	cmplwi   r30, 0
	beq      lbl_800312A0
	lis      r3, __vt__7JUTFont@ha
	addi     r0, r3, __vt__7JUTFont@l
	stw      r0, 0(r30)

lbl_800312A0:
	extsh.   r0, r31
	ble      lbl_800312B0
	mr       r3, r30
	bl       __dl__FPv

lbl_800312B0:
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
 * Address:	800312CC
 * Size:	000024
 */
void JUTResFont::deleteMemBlocks_ResFont()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x50(r3)
	bl       __dla__FPv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800312F0
 * Size:	00002C
 */
void JUTResFont::initialize_state()
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0x48(r3)
	stw      r4, 0x50(r3)
	stw      r4, 0x54(r3)
	stw      r4, 0x58(r3)
	stw      r4, 0x5c(r3)
	stw      r4, 0x1c(r3)
	stw      r4, 0x20(r3)
	stw      r0, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003131C
 * Size:	000080
 */
void JUTResFont::initiate(const ResFONT*, JKRHeap*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       protected_initiate__10JUTResFontFPC7ResFONTP7JKRHeap
	clrlwi.  r0, r3, 0x18
	bne      lbl_80031384
	lwz      r3, 0x50(r31)
	bl       __dla__FPv
	li       r4, 0
	li       r0, -1
	stw      r4, 0x48(r31)
	mr       r3, r31
	stw      r4, 0x50(r31)
	stw      r4, 0x54(r31)
	stw      r4, 0x58(r31)
	stw      r4, 0x5c(r31)
	stw      r4, 0x1c(r31)
	stw      r4, 0x20(r31)
	stw      r0, 0x44(r31)
	bl       initialize_state__7JUTFontFv
	li       r0, 0
	li       r3, 0
	stb      r0, 4(r31)
	b        lbl_80031388

lbl_80031384:
	li       r3, 1

lbl_80031388:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003139C
 * Size:	000138
 */
void JUTResFont::protected_initiate(const ResFONT*, JKRHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x50(r3)
	bl       __dla__FPv
	li       r4, 0
	li       r0, -1
	stw      r4, 0x48(r31)
	mr       r3, r31
	stw      r4, 0x50(r31)
	stw      r4, 0x54(r31)
	stw      r4, 0x58(r31)
	stw      r4, 0x5c(r31)
	stw      r4, 0x1c(r31)
	stw      r4, 0x20(r31)
	stw      r0, 0x44(r31)
	bl       initialize_state__7JUTFontFv
	cmplwi   r29, 0
	bne      lbl_80031408
	li       r3, 0
	b        lbl_800314B8

lbl_80031408:
	stw      r29, 0x48(r31)
	li       r0, 1
	mr       r3, r31
	stb      r0, 4(r31)
	bl       countBlock__10JUTResFontFv
	lhz      r6, 0x64(r31)
	mr       r4, r30
	lhz      r0, 0x62(r31)
	li       r5, 0
	lhz      r3, 0x60(r31)
	add      r0, r0, r6
	add      r0, r3, r0
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x50(r31)
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	bne      lbl_80031458
	li       r3, 0
	b        lbl_800314B8

lbl_80031458:
	lhz      r0, 0x60(r31)
	cmplwi   r0, 0
	beq      lbl_80031474
	stw      r3, 0x54(r31)
	lhz      r0, 0x60(r31)
	slwi     r0, r0, 2
	add      r3, r3, r0

lbl_80031474:
	lhz      r0, 0x62(r31)
	cmplwi   r0, 0
	beq      lbl_80031490
	stw      r3, 0x58(r31)
	lhz      r0, 0x62(r31)
	slwi     r0, r0, 2
	add      r3, r3, r0

lbl_80031490:
	lhz      r0, 0x64(r31)
	cmplwi   r0, 0
	beq      lbl_800314A0
	stw      r3, 0x5c(r31)

lbl_800314A0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_800314B8:
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
 * Address:	800314D4
 * Size:	00010C
 */
void JUTResFont::countBlock()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	sth      r0, 0x60(r3)
	lis      r3, 0x4D415031@ha
	addi     r31, r3, 0x4D415031@l
	sth      r0, 0x62(r28)
	sth      r0, 0x64(r28)
	lwz      r3, 0x48(r28)
	addi     r30, r3, 0x20
	b        lbl_800315B0

lbl_8003151C:
	lwz      r4, 0(r30)
	cmpw     r4, r31
	beq      lbl_80031588
	bge      lbl_80031554
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_800315A4
	bge      lbl_80031598
	lis      r3, 0x474C5931@ha
	addi     r0, r3, 0x474C5931@l
	cmpw     r4, r0
	beq      lbl_80031578
	b        lbl_80031598

lbl_80031554:
	lis      r3, 0x57494431@ha
	addi     r0, r3, 0x57494431@l
	cmpw     r4, r0
	beq      lbl_80031568
	b        lbl_80031598

lbl_80031568:
	lhz      r3, 0x60(r28)
	addi     r0, r3, 1
	sth      r0, 0x60(r28)
	b        lbl_800315A4

lbl_80031578:
	lhz      r3, 0x62(r28)
	addi     r0, r3, 1
	sth      r0, 0x62(r28)
	b        lbl_800315A4

lbl_80031588:
	lhz      r3, 0x64(r28)
	addi     r0, r3, 1
	sth      r0, 0x64(r28)
	b        lbl_800315A4

lbl_80031598:
	lis      r3, lbl_8047418C@ha
	addi     r3, r3, lbl_8047418C@l
	bl       JUTReportConsole

lbl_800315A4:
	lwz      r0, 4(r30)
	addi     r29, r29, 1
	add      r30, r30, r0

lbl_800315B0:
	lwz      r3, 0x48(r28)
	lwz      r0, 0xc(r3)
	cmplw    r29, r0
	blt      lbl_8003151C
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
 * Address:	800315E0
 * Size:	00013C
 */
void JUTResFont::setBlock()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, 0x0000FFFF@ha
	stw      r0, 0x34(r1)
	addi     r0, r4, 0x0000FFFF@l
	stmw     r25, 0x14(r1)
	mr       r25, r3
	li       r30, 0
	lis      r3, 0x4D415031@ha
	addi     r31, r3, 0x4D415031@l
	li       r26, 0
	mr       r29, r30
	mr       r28, r30
	sth      r0, 0x68(r25)
	lwz      r3, 0x48(r25)
	addi     r27, r3, 0x20
	b        lbl_800316F8

lbl_80031624:
	lwz      r4, 0(r27)
	cmpw     r4, r31
	beq      lbl_800316B4
	bge      lbl_8003165C
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_80031670
	bge      lbl_800316E0
	lis      r3, 0x474C5931@ha
	addi     r0, r3, 0x474C5931@l
	cmpw     r4, r0
	beq      lbl_800316A4
	b        lbl_800316E0

lbl_8003165C:
	lis      r3, 0x57494431@ha
	addi     r0, r3, 0x57494431@l
	cmpw     r4, r0
	beq      lbl_80031694
	b        lbl_800316E0

lbl_80031670:
	stw      r27, 0x4c(r25)
	lis      r3, saoAboutEncoding___10JUTResFont@ha
	addi     r0, r3, saoAboutEncoding___10JUTResFont@l
	lwz      r3, 0x4c(r25)
	lhz      r3, 8(r3)
	slwi     r3, r3, 2
	add      r0, r0, r3
	stw      r0, 0x6c(r25)
	b        lbl_800316EC

lbl_80031694:
	lwz      r3, 0x54(r25)
	stwx     r27, r3, r30
	addi     r30, r30, 4
	b        lbl_800316EC

lbl_800316A4:
	lwz      r3, 0x58(r25)
	stwx     r27, r3, r29
	addi     r29, r29, 4
	b        lbl_800316EC

lbl_800316B4:
	lwz      r3, 0x5c(r25)
	stwx     r27, r3, r28
	lwz      r3, 0x5c(r25)
	lhz      r0, 0x68(r25)
	lwzx     r3, r3, r28
	lhz      r3, 0xa(r3)
	cmplw    r0, r3
	ble      lbl_800316D8
	sth      r3, 0x68(r25)

lbl_800316D8:
	addi     r28, r28, 4
	b        lbl_800316EC

lbl_800316E0:
	lis      r3, lbl_804741AC@ha
	addi     r3, r3, lbl_804741AC@l
	bl       JUTReportConsole

lbl_800316EC:
	lwz      r0, 4(r27)
	addi     r26, r26, 1
	add      r27, r27, r0

lbl_800316F8:
	lwz      r3, 0x48(r25)
	lwz      r0, 0xc(r3)
	cmplw    r26, r0
	blt      lbl_80031624
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003171C
 * Size:	0000F8
 */
void JUTResFont::setGX()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 1
	stw      r0, 0x14(r1)
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	li       r4, 0
	bl       GXSetTevOp
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 3
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 2
	li       r7, 0xf
	bl       GXSetVtxAttrFmt
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031814
 * Size:	000240
 */
void JUTResFont::setGX(JUtility::TColor, JUtility::TColor)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0(r4)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	cmplwi   r0, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	bne      lbl_80031860
	lwz      r4, 0(r31)
	addis    r0, r4, 1
	cmplwi   r0, 0xffff
	bne      lbl_80031860
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80031A3C

lbl_80031860:
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 2
	bl       GXSetNumTevStages
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	lwz      r0, 0(r30)
	addi     r4, r1, 0xc
	li       r3, 1
	stw      r0, 0xc(r1)
	bl       GXSetTevColor
	lwz      r0, 0(r31)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 2
	li       r5, 4
	li       r6, 8
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 0
	li       r4, 1
	li       r5, 2
	li       r6, 4
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 1
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	li       r4, 0xf
	li       r5, 0
	li       r6, 0xa
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 1
	li       r4, 7
	li       r5, 0
	li       r6, 5
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 3
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 2
	li       r7, 0xf
	bl       GXSetVtxAttrFmt
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc

lbl_80031A3C:
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
 * Address:	80031A54
 * Size:	000404
 */
void JUTResFont::drawChar_scale(float, float, float, float, int, bool)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	fmr      f26, f1
	mr       r27, r5
	fmr      f27, f2
	mr       r31, r3
	fmr      f30, f3
	addi     r6, r1, 8
	fmr      f28, f4
	li       r5, 0
	bl       loadFont__10JUTResFontFi11_GXTexMapIDPQ27JUTFont6TWidth
	lbz      r0, 5(r31)
	cmplwi   r0, 0
	bne      lbl_80031ACC
	clrlwi.  r0, r27, 0x18
	bne      lbl_80031AD4

lbl_80031ACC:
	fmr      f31, f26
	b        lbl_80031B24

lbl_80031AD4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14(r1)
	lbz      r0, 8(r1)
	stw      r4, 0x10(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f0, f0, f1
	lfd      f1, lbl_805166F0@sda21(r2)
	stw      r4, 0x18(r1)
	fdivs    f2, f30, f0
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fnmsubs  f31, f0, f2, f26

lbl_80031B24:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	lwz      r0, 8(r31)
	stw      r4, 0x18(r1)
	lfd      f2, lbl_805166E8@sda21(r2)
	xoris    r3, r0, 0x8000
	lfd      f0, 0x18(r1)
	lbz      r0, 5(r31)
	fsubs    f0, f0, f2
	stw      r3, 0x14(r1)
	cmplwi   r0, 0
	stw      r4, 0x10(r1)
	fdivs    f1, f30, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f29, f0, f1
	bne      lbl_80031C34
	clrlwi.  r0, r27, 0x18
	bne      lbl_80031BE4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f2, lbl_805166E8@sda21(r2)
	stw      r4, 0x18(r1)
	lbz      r3, 9(r1)
	lfd      f0, 0x18(r1)
	lbz      r0, 8(r1)
	fsubs    f0, f0, f2
	stw      r4, 0x10(r1)
	add      r0, r3, r0
	xoris    r0, r0, 0x8000
	fdivs    f1, f30, f0
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f29, f0, f1
	b        lbl_80031C34

lbl_80031BE4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	lbz      r0, 9(r1)
	stw      r4, 0x18(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r0, 0x14(r1)
	fsubs    f0, f0, f1
	lfd      f1, lbl_805166F0@sda21(r2)
	stw      r4, 0x10(r1)
	fdivs    f2, f30, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f29, f0, f2

lbl_80031C34:
	mr       r3, r31
	fadds    f30, f31, f30
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0x1c(r12)
	fsubs    f0, f0, f1
	fdivs    f26, f28, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x10(r1)
	lwz      r12, 0x24(r12)
	fsubs    f0, f0, f1
	fnmsubs  f26, f0, f26, f27
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 0x20(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x20(r1)
	lwz      r12, 0x20(r12)
	fsubs    f0, f0, f1
	fdivs    f28, f28, f0
	mtctr    r12
	bctrl
	lhz      r0, 0x66(r31)
	xoris    r10, r3, 0x8000
	lwz      r3, 0x58(r31)
	lis      r7, 0x4330
	slwi     r0, r0, 2
	lwz      r11, 0x1c(r31)
	lwzx     r8, r3, r0
	li       r3, 0
	lwz      r12, 0x20(r31)
	slwi     r6, r11, 0xf
	lhz      r5, 0xc(r8)
	li       r4, 9
	lhz      r0, 0xe(r8)
	slwi     r9, r12, 0xf
	add      r5, r11, r5
	lhz      r11, 0x1a(r8)
	add      r0, r12, r0
	lhz      r12, 0x1c(r8)
	slwi     r8, r5, 0xf
	stw      r10, 0x2c(r1)
	slwi     r0, r0, 0xf
	lfd      f1, lbl_805166E8@sda21(r2)
	divw     r30, r6, r11
	stw      r7, 0x28(r1)
	li       r5, 1
	lfd      f0, 0x28(r1)
	li       r6, 4
	li       r7, 0
	fsubs    f0, f0, f1
	divw     r29, r9, r12
	fmadds   f27, f0, f28, f27
	divw     r28, r8, r11
	divw     r27, r0, r12
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r8, 0xCC008000@ha
	lfs      f0, lbl_805166E0@sda21(r2)
	stfs     f31, 0xCC008000@l(r8)
	li       r3, 0
	li       r4, 9
	li       r5, 1
	stfs     f26, -0x8000(r8)
	li       r6, 3
	li       r7, 0
	stfs     f0, -0x8000(r8)
	lwz      r0, 0xc(r31)
	stw      r0, -0x8000(r8)
	sth      r30, -0x8000(r8)
	sth      r29, -0x8000(r8)
	stfs     f30, -0x8000(r8)
	stfs     f26, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x10(r31)
	stw      r0, -0x8000(r8)
	sth      r28, -0x8000(r8)
	sth      r29, -0x8000(r8)
	stfs     f30, -0x8000(r8)
	stfs     f27, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x18(r31)
	stw      r0, -0x8000(r8)
	sth      r28, -0x8000(r8)
	sth      r27, -0x8000(r8)
	stfs     f31, -0x8000(r8)
	stfs     f27, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x14(r31)
	stw      r0, -0x8000(r8)
	sth      r30, -0x8000(r8)
	sth      r27, -0x8000(r8)
	bl       GXSetVtxAttrFmt
	fmr      f1, f29
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031E58
 * Size:	00000C
 */
void JUTResFont::getDescent() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031E64
 * Size:	00005C
 */
void JUTResFont::getHeight() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	add      r3, r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031EC0
 * Size:	00000C
 */
void JUTResFont::getAscent() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0xa(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031ECC
 * Size:	000088
 */
void JUTResFont::loadFont(int, _GXTexMapID, JUTFont::TWidth*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r6, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_80031F0C
	lwz      r12, 0(r3)
	mr       r5, r6
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80031F0C:
	mr       r3, r29
	mr       r4, r30
	bl       getFontCode__10JUTResFontCFi
	lwz      r12, 0(r29)
	mr       r0, r3
	mr       r3, r29
	mr       r5, r31
	lwz      r12, 0x44(r12)
	mr       r4, r0
	mtctr    r12
	bctrl
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
 * Address:	80031F54
 * Size:	0000C0
 */
void JUTResFont::getWidthEntry(int, JUTFont::TWidth*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getFontCode__10JUTResFontCFi
	li       r0, 0
	lwz      r7, 0x54(r30)
	stb      r0, 0(r31)
	li       r8, 0
	lwz      r5, 0x4c(r30)
	mr       r4, r7
	lhz      r6, 0x60(r30)
	lhz      r0, 0xe(r5)
	stb      r0, 1(r31)
	mtctr    r6
	cmpwi    r6, 0
	ble      lbl_80031FFC

lbl_80031FA4:
	lwz      r5, 0(r4)
	lhz      r0, 8(r5)
	cmpw     r0, r3
	bgt      lbl_80031FF0
	lhz      r0, 0xa(r5)
	cmpw     r3, r0
	bgt      lbl_80031FF0
	slwi     r0, r8, 2
	lwzx     r4, r7, r0
	lhz      r0, 8(r4)
	subf     r0, r0, r3
	slwi     r3, r0, 1
	addi     r3, r3, 0xc
	add      r3, r4, r3
	lbz      r0, 0(r3)
	stb      r0, 0(r31)
	lbz      r0, 1(r3)
	stb      r0, 1(r31)
	b        lbl_80031FFC

lbl_80031FF0:
	addi     r4, r4, 4
	addi     r8, r8, 1
	bdnz     lbl_80031FA4

lbl_80031FFC:
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
 * Address:	80032014
 * Size:	00004C
 */
void JUTResFont::getCellWidth() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r4, 0x58(r3)
	stw      r0, 0x14(r1)
	cmplwi   r4, 0
	beq      lbl_80032040
	lwz      r4, 0(r4)
	cmplwi   r4, 0
	beq      lbl_80032040
	lhz      r3, 0xc(r4)
	b        lbl_80032050

lbl_80032040:
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_80032050:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032060
 * Size:	00000C
 */
void JUTResFont::getWidth() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0xe(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003206C
 * Size:	00004C
 */
void JUTResFont::getCellHeight() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r4, 0x58(r3)
	stw      r0, 0x14(r1)
	cmplwi   r4, 0
	beq      lbl_80032098
	lwz      r4, 0(r4)
	cmplwi   r4, 0
	beq      lbl_80032098
	lhz      r3, 0xe(r4)
	b        lbl_800320A8

lbl_80032098:
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_800320A8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800320B8
 * Size:	000030
 */
void JUTResFont::isLeadByte(int) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r5, 0x6c(r3)
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r5)
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
 * Address:	800320E8
 * Size:	0001AC
 */
void JUTResFont::getFontCode(int) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r5, 0x4c(r3)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lhz      r31, 0x12(r5)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 2
	bne      lbl_80032158
	lhz      r0, 0x68(r29)
	cmplwi   r0, 0x8000
	blt      lbl_80032158
	cmpwi    r30, 0x20
	blt      lbl_80032158
	cmplwi   r30, 0x7f
	bge      lbl_80032158
	lis      r3, halftofull$725@ha
	slwi     r0, r30, 1
	addi     r3, r3, halftofull$725@l
	add      r3, r3, r0
	lhz      r30, -0x40(r3)

lbl_80032158:
	lwz      r5, 0x5c(r29)
	li       r6, 0
	lhz      r0, 0x64(r29)
	mr       r3, r5
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80032274

lbl_80032174:
	lwz      r4, 0(r3)
	lhz      r0, 0xa(r4)
	cmpw     r0, r30
	bgt      lbl_80032268
	lhz      r0, 0xc(r4)
	cmpw     r30, r0
	bgt      lbl_80032268
	slwi     r0, r6, 2
	lwzx     r4, r5, r0
	lhz      r0, 8(r4)
	cmplwi   r0, 0
	bne      lbl_800321B0
	lhz      r0, 0xa(r4)
	subf     r31, r0, r30
	b        lbl_80032274

lbl_800321B0:
	cmplwi   r0, 2
	bne      lbl_800321D0
	lhz      r0, 0xa(r4)
	subf     r0, r0, r30
	slwi     r0, r0, 1
	add      r3, r4, r0
	lhz      r31, 0x10(r3)
	b        lbl_80032274

lbl_800321D0:
	cmplwi   r0, 3
	bne      lbl_80032238
	lhz      r3, 0xe(r4)
	addi     r4, r4, 0x10
	li       r5, 0
	addi     r6, r3, -1
	b        lbl_8003222C

lbl_800321EC:
	add      r3, r6, r5
	srwi     r0, r3, 0x1f
	add      r0, r0, r3
	srawi    r7, r0, 1
	slwi     r3, r7, 2
	lhzx     r0, r4, r3
	cmpw     r30, r0
	bge      lbl_80032214
	addi     r6, r7, -1
	b        lbl_8003222C

lbl_80032214:
	ble      lbl_80032220
	addi     r5, r7, 1
	b        lbl_8003222C

lbl_80032220:
	add      r3, r4, r3
	lhz      r31, 2(r3)
	b        lbl_80032274

lbl_8003222C:
	cmpw     r6, r5
	bge      lbl_800321EC
	b        lbl_80032274

lbl_80032238:
	cmplwi   r0, 1
	bne      lbl_80032274
	lhz      r0, 0xe(r4)
	li       r5, 0
	cmplwi   r0, 1
	bne      lbl_80032254
	addi     r5, r4, 0x10

lbl_80032254:
	mr       r3, r29
	mr       r4, r30
	bl       convertSjis__10JUTResFontCFiPUs
	mr       r31, r3
	b        lbl_80032274

lbl_80032268:
	addi     r3, r3, 4
	addi     r6, r6, 1
	bdnz     lbl_80032174

lbl_80032274:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80032294
 * Size:	00000C
 */
void JUTResFont::getFontType() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800322A0
 * Size:	000180
 */
void JUTResFont::loadImage(int, _GXTexMapID)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	lhz      r7, 0x62(r3)
	li       r3, 0
	mtctr    r7
	cmpwi    r7, 0
	ble      lbl_8003231C

lbl_800322DC:
	lwz      r6, 0x58(r28)
	lwzx     r5, r6, r3
	lhz      r0, 8(r5)
	cmpw     r0, r4
	bgt      lbl_80032310
	lhz      r0, 0xa(r5)
	cmpw     r4, r0
	bgt      lbl_80032310
	slwi     r0, r31, 2
	lwzx     r3, r6, r0
	lhz      r0, 8(r3)
	subf     r4, r0, r4
	b        lbl_8003231C

lbl_80032310:
	addi     r3, r3, 4
	addi     r31, r31, 1
	bdnz     lbl_800322DC

lbl_8003231C:
	cmpw     r31, r7
	beq      lbl_80032400
	lwz      r3, 0x58(r28)
	slwi     r7, r31, 2
	lwzx     r5, r3, r7
	lhz      r6, 0x16(r5)
	lhz      r3, 0x18(r5)
	lhz      r0, 0xc(r5)
	mullw    r3, r6, r3
	divw     r30, r4, r3
	mullw    r3, r30, r3
	subf     r4, r3, r4
	divw     r5, r4, r6
	mullw    r3, r5, r6
	subf     r3, r3, r4
	mullw    r0, r3, r0
	stw      r0, 0x1c(r28)
	lwz      r3, 0x58(r28)
	lwzx     r3, r3, r7
	lhz      r0, 0xe(r3)
	mullw    r0, r5, r0
	stw      r0, 0x20(r28)
	lwz      r0, 0x44(r28)
	cmpw     r30, r0
	bne      lbl_8003238C
	lhz      r0, 0x66(r28)
	cmpw     r31, r0
	beq      lbl_800323F4

lbl_8003238C:
	lwz      r4, 0x58(r28)
	addi     r3, r28, 0x24
	li       r8, 0
	li       r9, 0
	lwzx     r11, r4, r7
	li       r10, 0
	lwz      r0, 0x10(r11)
	lhz      r5, 0x1a(r11)
	mullw    r4, r30, r0
	lhz      r6, 0x1c(r11)
	lhz      r7, 0x14(r11)
	addi     r4, r4, 0x20
	add      r4, r11, r4
	bl       GXInitTexObj
	lfs      f1, lbl_805166E0@sda21(r2)
	addi     r3, r28, 0x24
	li       r4, 1
	li       r5, 1
	fmr      f2, f1
	li       r6, 0
	fmr      f3, f1
	li       r7, 0
	li       r8, 0
	bl       GXInitTexObjLOD
	stw      r30, 0x44(r28)
	sth      r31, 0x66(r28)

lbl_800323F4:
	mr       r4, r29
	addi     r3, r28, 0x24
	bl       GXLoadTexObj

lbl_80032400:
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
 * Address:	80032420
 * Size:	000044
 */
void JUTResFont::convertSjis(int, unsigned short*) const
{
	/*
	clrlwi   r3, r4, 0x18
	rlwinm   r4, r4, 0x18, 0x18, 0x1f
	addi     r6, r3, -64
	cmpwi    r6, 0x40
	blt      lbl_80032438
	addi     r6, r6, -1

lbl_80032438:
	cmplwi   r5, 0
	li       r3, 0x31c
	beq      lbl_80032448
	lhz      r3, 0(r5)

lbl_80032448:
	addi     r0, r4, -136
	clrlwi   r4, r3, 0x10
	mulli    r3, r0, 0xbc
	addi     r0, r3, -94
	add      r3, r0, r4
	add      r3, r6, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032464
 * Size:	000008
 */
void JUTResFont::getResFont() const
{
	/*
	lwz      r3, 0x48(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003246C
 * Size:	00000C
 */
void JUTResFont::getLeading() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0x10(r3)
	blr
	*/
}
