#include "JSystem/JUT/JUTDirectPrint.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sAsciiTable__14JUTDirectPrint
    sAsciiTable__14JUTDirectPrint:
        .4byte 0x7A7A7A7A
        .4byte 0x7A7A7A7A
        .4byte 0x7AFDFE7A
        .4byte 0x7A7A7A7A
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFF296465
        .4byte 0x662B6768
        .4byte 0x2526692A
        .4byte 0x6A272C6B
        .4byte 0x00010203
        .4byte 0x04050607
        .4byte 0x0809246C
        .4byte 0x6D6E6F28
        .4byte 0x700A0B0C
        .4byte 0x0D0E0F10
        .4byte 0x11121314
        .4byte 0x15161718
        .4byte 0x191A1B1C
        .4byte 0x1D1E1F20
        .4byte 0x21222371
        .4byte 0x72737475
        .4byte 0xFF7D7E7F
        .4byte 0x80818283
        .4byte 0x84858687
        .4byte 0x88898A8B
        .4byte 0x8C8D8E8F
        .4byte 0x90919293
        .4byte 0x94959676
        .4byte 0x7778797A
    .global sFontData__14JUTDirectPrint
    sFontData__14JUTDirectPrint:
        .4byte 0x70871C30
        .4byte 0x8988A250
        .4byte 0x88808290
        .4byte 0x88830C90
        .4byte 0x888402F8
        .4byte 0x88882210
        .4byte 0x71CF9C10
        .4byte 0xF9CF9C70
        .4byte 0x8208A288
        .4byte 0xF200A288
        .4byte 0x0BC11C78
        .4byte 0x0A222208
        .4byte 0x8A222208
        .4byte 0x71C21C70
        .4byte 0x23C738F8
        .4byte 0x5228A480
        .4byte 0x8A282280
        .4byte 0x8BC822F0
        .4byte 0xFA282280
        .4byte 0x8A28A480
        .4byte 0x8BC738F8
        .4byte 0xF9C89C08
        .4byte 0x82288808
        .4byte 0x82088808
        .4byte 0xF2EF8808
        .4byte 0x82288888
        .4byte 0x82288888
        .4byte 0x81C89C70
        .4byte 0x8A08A270
        .4byte 0x920DA288
        .4byte 0xA20AB288
        .4byte 0xC20AAA88
        .4byte 0xA208A688
        .4byte 0x9208A288
        .4byte 0x8BE8A270
        .4byte 0xF1CF1CF8
        .4byte 0x8A28A220
        .4byte 0x8A28A020
        .4byte 0xF22F1C20
        .4byte 0x82AA0220
        .4byte 0x82492220
        .4byte 0x81A89C20
        .4byte 0x8A28A288
        .4byte 0x8A28A288
        .4byte 0x8A289488
        .4byte 0x8A2A8850
        .4byte 0x894A9420
        .4byte 0x894AA220
        .4byte 0x70852220
        .4byte 0xF8011000
        .4byte 0x08020800
        .4byte 0x10840400
        .4byte 0x20040470
        .4byte 0x40840400
        .4byte 0x80020800
        .4byte 0xF8011000
        .4byte 0x70800000
        .4byte 0x88822200
        .4byte 0x08820400
        .4byte 0x108F8800
        .4byte 0x20821000
        .4byte 0x00022200
        .4byte 0x20800020
        .4byte 0x00000000
    .global sFontData2__14JUTDirectPrint
    sFontData2__14JUTDirectPrint:
        .4byte 0x51421820
        .4byte 0x53E7A420
        .4byte 0x014A2C40
        .4byte 0x01471000
        .4byte 0x0142AA00
        .4byte 0x03EAA400
        .4byte 0x01471A78
        .4byte 0x00000000
        .4byte 0x50008010
        .4byte 0x20010820
        .4byte 0xF8020040
        .4byte 0x20420820
        .4byte 0x50441010
        .4byte 0x00880000
        .4byte 0x00070E00
        .4byte 0x01088840
        .4byte 0x78898820
        .4byte 0x004A8810
        .4byte 0x788A8810
        .4byte 0x01098808
        .4byte 0x00040E04
        .4byte 0x70800620
        .4byte 0x11400820
        .4byte 0x12200820
        .4byte 0x10001020
        .4byte 0x10000820
        .4byte 0x100F8820
        .4byte 0x70000620
        .4byte 0x60070000
        .4byte 0x110F82A0
        .4byte 0x12AA8AE0
        .4byte 0x084F92A0
        .4byte 0x100FBE1C
        .4byte 0x10089008
        .4byte 0x60070808
        .4byte 0x00000000
        .4byte 0x02000200
        .4byte 0x7A078270
        .4byte 0x8BC81E88
        .4byte 0x8A2822F8
        .4byte 0x9A282280
        .4byte 0x6BC79E78
        .4byte 0x30000000
        .4byte 0x48080810
        .4byte 0x41E80000
        .4byte 0x422F1830
        .4byte 0xFBE88810
        .4byte 0x40288890
        .4byte 0x43C89C60
        .4byte 0x81000000
        .4byte 0x81000000
        .4byte 0x990F3C70
        .4byte 0xA10AA288
        .4byte 0xE10AA288
        .4byte 0xA10AA288
        .4byte 0x98CAA270
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0xF1EF1E20
        .4byte 0x8A28A0F8
        .4byte 0x8A281C20
        .4byte 0xF1E80220
        .4byte 0x80283C38
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x8A28B688
        .4byte 0x8A2A8888
        .4byte 0x8A2A8878
        .4byte 0x894A8808
        .4byte 0x788536F0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xF8000000
        .4byte 0x10000000
        .4byte 0x20000000
        .4byte 0x40000000
        .4byte 0xF8000000
    .global twiceBit$379
    twiceBit$379:
        .4byte 0x00000000
        .4byte 0x00000003
        .4byte 0x0000000C
        .4byte 0x0000000F
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global sDirectPrint__14JUTDirectPrint
    sDirectPrint__14JUTDirectPrint:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805165B0
    lbl_805165B0:
        .4byte 0x25730000
        .4byte 0x00000000
    .global lbl_805165B8
    lbl_805165B8:
        .4byte 0x40600000
        .4byte 0x00000000
    .global lbl_805165C0
    lbl_805165C0:
        .4byte 0x3FDC1893
        .4byte 0x74BC6A7F
    .global lbl_805165C8
    lbl_805165C8:
        .4byte 0xBFC2F1A9
        .4byte 0xFBE76C8B
    .global lbl_805165D0
    lbl_805165D0:
        .4byte 0x3FD29FBE
        .4byte 0x76C8B439
    .global lbl_805165D8
    lbl_805165D8:
        .4byte 0x3FD78D4F
        .4byte 0xDF3B645A
    .global lbl_805165E0
    lbl_805165E0:
        .4byte 0x3FB22D0E
        .4byte 0x56041893
    .global lbl_805165E8
    lbl_805165E8:
        .4byte 0x40300000
        .4byte 0x00000000
    .global lbl_805165F0
    lbl_805165F0:
        .4byte 0x3FB91687
        .4byte 0x2B020C4A
    .global lbl_805165F8
    lbl_805165F8:
        .4byte 0x3FD072B0
        .4byte 0x20C49BA6
    .global lbl_80516600
    lbl_80516600:
        .4byte 0x3FE020C4
        .4byte 0x9BA5E354
    .global lbl_80516608
    lbl_80516608:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
JUTDirectPrint::JUTDirectPrint()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029BCC
 * Size:	000074
 */
JUTDirectPrint* JUTDirectPrint::start()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, sDirectPrint__14JUTDirectPrint@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80029C28
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80029C24
	li       r0, -1
	li       r4, 0
	stw      r0, 0x18(r31)
	li       r5, 0
	li       r6, 0
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs
	mr       r3, r31
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       setCharColor__14JUTDirectPrintFUcUcUc

lbl_80029C24:
	stw      r31, sDirectPrint__14JUTDirectPrint@sda21(r13)

lbl_80029C28:
	lwz      r0, 0x14(r1)
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029C40
 * Size:	0000F8
 */
void JUTDirectPrint::erase(int, int, int, int)
{
	/*
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beqlr
	lhz      r0, 4(r3)
	cmplwi   r0, 0x190
	ble      lbl_80029C60
	slwi     r4, r4, 1
	slwi     r6, r6, 1

lbl_80029C60:
	lhz      r0, 6(r3)
	cmplwi   r0, 0x12c
	ble      lbl_80029C74
	slwi     r5, r5, 1
	slwi     r7, r7, 1

lbl_80029C74:
	lhz      r8, 8(r3)
	slwi     r0, r4, 1
	lwz      r9, 0x14(r3)
	li       r10, 0
	mullw    r4, r8, r5
	slwi     r4, r4, 1
	add      r8, r4, r0
	add      r8, r9, r8
	b        lbl_80029D2C

lbl_80029C98:
	cmpwi    r6, 0
	li       r9, 0
	ble      lbl_80029D18
	cmpwi    r6, 8
	addi     r5, r6, -8
	ble      lbl_80029CF4
	addi     r0, r5, 7
	li       r4, 0x1080
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_80029CF4

lbl_80029CC8:
	sth      r4, 0(r8)
	addi     r9, r9, 8
	sth      r4, 2(r8)
	sth      r4, 4(r8)
	sth      r4, 6(r8)
	sth      r4, 8(r8)
	sth      r4, 0xa(r8)
	sth      r4, 0xc(r8)
	sth      r4, 0xe(r8)
	addi     r8, r8, 0x10
	bdnz     lbl_80029CC8

lbl_80029CF4:
	subf     r0, r9, r6
	li       r4, 0x1080
	mtctr    r0
	cmpw     r9, r6
	bge      lbl_80029D18

lbl_80029D08:
	sth      r4, 0(r8)
	addi     r8, r8, 2
	addi     r9, r9, 1
	bdnz     lbl_80029D08

lbl_80029D18:
	lhz      r0, 8(r3)
	addi     r10, r10, 1
	subf     r0, r6, r0
	slwi     r0, r0, 1
	add      r8, r8, r0

lbl_80029D2C:
	cmpw     r10, r7
	blt      lbl_80029C98
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029D38
 * Size:	000254
 */
void JUTDirectPrint::drawChar(int, int, int)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r7, sAsciiTable__14JUTDirectPrint@ha
	cmpwi    r6, 0x64
	mr       r9, r6
	stmw     r27, 0xc(r1)
	addi     r7, r7, sAsciiTable__14JUTDirectPrint@l
	blt      lbl_80029D58
	addi     r9, r6, -100

lbl_80029D58:
	lis      r8, 0x66666667@ha
	cmpwi    r6, 0x64
	addi     r0, r8, 0x66666667@l
	addi     r30, r7, 0x180
	mulhw    r0, r0, r9
	srawi    r6, r0, 1
	srwi     r8, r6, 0x1f
	srawi    r0, r0, 1
	add      r6, r6, r8
	mulli    r8, r6, 5
	srwi     r6, r0, 0x1f
	add      r0, r0, r6
	mulli    r0, r0, 7
	subf     r6, r8, r9
	slwi     r0, r0, 2
	mulli    r8, r6, 6
	add      r30, r30, r0
	bge      lbl_80029DA8
	addi     r30, r7, 0x80
	add      r30, r30, r0

lbl_80029DA8:
	lhz      r0, 8(r3)
	li       r9, 0x190
	lhz      r11, 4(r3)
	li       r10, 0x12c
	mullw    r6, r0, r5
	lhz      r0, 6(r3)
	subfc    r5, r9, r11
	lwz      r12, 0x14(r3)
	mr       r9, r30
	subfe    r5, r5, r5
	addi     r5, r5, 2
	subfc    r0, r10, r0
	subfe    r10, r0, r0
	li       r11, 0
	addi     r0, r10, 2
	mullw    r6, r0, r6
	mullw    r4, r4, r5
	slwi     r6, r6, 1
	slwi     r4, r4, 1
	add      r10, r6, r4
	mulli    r4, r5, 6
	add      r10, r12, r10

lbl_80029E00:
	lwz      r6, 0(r9)
	cmpwi    r5, 1
	addi     r9, r9, 4
	slw      r12, r6, r8
	bne      lbl_80029E1C
	rlwinm   r6, r12, 0x1f, 1, 6
	b        lbl_80029E4C

lbl_80029E1C:
	addi     r30, r7, 0x2b4
	rlwinm   r6, r12, 6, 0x1c, 0x1d
	rlwinm   r31, r12, 4, 0x1c, 0x1d
	rlwinm   r12, r12, 8, 0x1c, 0x1d
	lwzx     r6, r30, r6
	lwzx     r31, r30, r31
	lwzx     r12, r30, r12
	slwi     r6, r6, 4
	slwi     r31, r31, 8
	or       r6, r12, r6
	or       r6, r31, r6
	slwi     r6, r6, 0x13

lbl_80029E4C:
	addi     r12, r4, 1
	srwi     r12, r12, 1
	mtctr    r12
	cmpwi    r4, 0
	ble      lbl_80029F60

lbl_80029E60:
	rlwinm.  r28, r6, 0, 1, 1
	beq      lbl_80029E70
	lhz      r30, 0x20(r3)
	b        lbl_80029E74

lbl_80029E70:
	li       r30, 0x40

lbl_80029E74:
	rlwinm.  r12, r6, 0, 0, 0
	beq      lbl_80029E84
	lhz      r29, 0x22(r3)
	b        lbl_80029E88

lbl_80029E84:
	li       r29, 0x20

lbl_80029E88:
	rlwinm.  r27, r6, 0, 2, 2
	beq      lbl_80029E98
	lhz      r12, 0x22(r3)
	b        lbl_80029E9C

lbl_80029E98:
	li       r12, 0x20

lbl_80029E9C:
	cmplwi   r28, 0
	beq      lbl_80029EAC
	lhz      r31, 0x1c(r3)
	b        lbl_80029EB0

lbl_80029EAC:
	li       r31, 0

lbl_80029EB0:
	add      r12, r30, r12
	cmpwi    r0, 1
	add      r12, r29, r12
	or       r12, r31, r12
	sth      r12, 0(r10)
	clrlwi   r29, r12, 0x10
	ble      lbl_80029ED8
	lhz      r12, 8(r3)
	slwi     r12, r12, 1
	sthx     r29, r10, r12

lbl_80029ED8:
	cmplwi   r27, 0
	beq      lbl_80029EE8
	lhz      r29, 0x26(r3)
	b        lbl_80029EEC

lbl_80029EE8:
	li       r29, 0x40

lbl_80029EEC:
	cmplwi   r28, 0
	beq      lbl_80029EFC
	lhz      r30, 0x28(r3)
	b        lbl_80029F00

lbl_80029EFC:
	li       r30, 0x20

lbl_80029F00:
	rlwinm.  r12, r6, 0, 3, 3
	beq      lbl_80029F10
	lhz      r12, 0x28(r3)
	b        lbl_80029F14

lbl_80029F10:
	li       r12, 0x20

lbl_80029F14:
	cmplwi   r27, 0
	beq      lbl_80029F24
	lhz      r31, 0x1c(r3)
	b        lbl_80029F28

lbl_80029F24:
	li       r31, 0

lbl_80029F28:
	add      r12, r29, r12
	cmpwi    r0, 1
	add      r12, r30, r12
	or       r12, r31, r12
	sth      r12, 2(r10)
	clrlwi   r27, r12, 0x10
	ble      lbl_80029F54
	lhz      r12, 8(r3)
	slwi     r12, r12, 1
	addi     r12, r12, 2
	sthx     r27, r10, r12

lbl_80029F54:
	slwi     r6, r6, 2
	addi     r10, r10, 4
	bdnz     lbl_80029E60

lbl_80029F60:
	lhz      r6, 8(r3)
	addi     r11, r11, 1
	cmpwi    r11, 7
	mullw    r6, r6, r0
	subf     r6, r4, r6
	slwi     r6, r6, 1
	add      r10, r10, r6
	blt      lbl_80029E00
	lmw      r27, 0xc(r1)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029F8C
 * Size:	000034
 */
void JUTDirectPrint::changeFrameBuffer(void*, unsigned short, unsigned short)
{
	/*
	stw      r4, 0(r3)
	addi     r0, r5, 0xf
	rlwinm   r0, r0, 0, 0x10, 0x1b
	stw      r4, 0x14(r3)
	sth      r5, 4(r3)
	sth      r6, 6(r3)
	sth      r0, 8(r3)
	lhz      r4, 8(r3)
	lhz      r0, 6(r3)
	mullw    r0, r4, r0
	slwi     r0, r0, 1
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000228
 */
// void JUTDirectPrint::printSub(unsigned short, unsigned short, const char*, __va_list_struct*, bool)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000280
 */
// void JUTDirectPrint::print(unsigned short, unsigned short, const char*, ...)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80029FC0
 * Size:	00002C
 */
void JUTDirectPrint::drawString(unsigned short, unsigned short, char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r6
	addi     r6, r2, lbl_805165B0@sda21
	stw      r0, 0x14(r1)
	crclr    6
	bl       drawString_f__14JUTDirectPrintFUsUsPCce
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029FEC
 * Size:	000174
 */
void JUTDirectPrint::drawString_f(unsigned short, unsigned short, const char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1A0(r1)
	  mflr      r0
	  stw       r0, 0x1A4(r1)
	  stmw      r24, 0x180(r1)
	  mr        r24, r3
	  mr        r25, r4
	  bne-      cr1, .loc_0x3C
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x3C:
	  stw       r3, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  lwz       r0, 0x14(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  addi      r3, r1, 0x1A8
	  addi      r0, r1, 0x8
	  lis       r4, 0x400
	  stw       r3, 0x6C(r1)
	  mr        r26, r5
	  mr        r27, r25
	  stw       r4, 0x68(r1)
	  addi      r3, r1, 0x68
	  stw       r0, 0x70(r1)
	  beq-      .loc_0x160
	  mr        r5, r6
	  mr        r6, r3
	  addi      r3, r1, 0x74
	  li        r4, 0x100
	  bl        0x9D5D8
	  mr.       r28, r3
	  mr        r29, r25
	  ble-      .loc_0x154
	  lis       r3, 0x804A
	  addi      r30, r1, 0x74
	  rlwinm    r25,r25,0,16,31
	  addi      r31, r3, 0xE0
	  b         .loc_0x14C

	.loc_0xC4:
	  lbz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,25,31
	  lbzx      r6, r31, r0
	  cmpwi     r6, 0xFE
	  bne-      .loc_0xE4
	  mr        r27, r29
	  addi      r26, r26, 0x7
	  b         .loc_0x144

	.loc_0xE4:
	  cmpwi     r6, 0xFD
	  bne-      .loc_0x128
	  rlwinm    r6,r27,0,16,31
	  lis       r3, 0x2AAB
	  sub       r4, r6, r25
	  addi      r5, r4, 0x2F
	  subi      r0, r3, 0x5555
	  mulhw     r3, r0, r5
	  addi      r0, r6, 0x30
	  srawi     r3, r3, 0x3
	  rlwinm    r4,r3,1,31,31
	  add       r3, r3, r4
	  mulli     r3, r3, 0x30
	  sub       r3, r5, r3
	  sub       r0, r0, r3
	  rlwinm    r27,r0,0,16,31
	  b         .loc_0x144

	.loc_0x128:
	  cmpwi     r6, 0xFF
	  beq-      .loc_0x140
	  mr        r3, r24
	  rlwinm    r4,r27,0,16,31
	  rlwinm    r5,r26,0,16,31
	  bl        -0x3F0

	.loc_0x140:
	  addi      r27, r27, 0x6

	.loc_0x144:
	  subi      r28, r28, 0x1
	  addi      r30, r30, 0x1

	.loc_0x14C:
	  cmpwi     r28, 0
	  bgt+      .loc_0xC4

	.loc_0x154:
	  lwz       r3, 0x14(r24)
	  lwz       r4, 0xC(r24)
	  bl        0xC2600

	.loc_0x160:
	  lmw       r24, 0x180(r1)
	  lwz       r0, 0x1A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1A0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002A160
 * Size:	000030
 */
void JUTDirectPrint::setCharColor(JUtility::TColor)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r4
	lbz      r4, 0(r4)
	lbz      r5, 1(r6)
	stw      r0, 0x14(r1)
	lbz      r6, 2(r6)
	bl       setCharColor__14JUTDirectPrintFUcUcUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002A190
 * Size:	00017C
 */
void JUTDirectPrint::setCharColor(unsigned char, unsigned char, unsigned char)
{
	/*
	stwu     r1, -0x70(r1)
	clrlwi   r0, r5, 0x18
	lis      r8, 0x4330
	clrlwi   r7, r4, 0x18
	xoris    r0, r0, 0x8000
	stw      r8, 0x58(r1)
	xoris    r7, r7, 0x8000
	clrlwi   r9, r6, 0x18
	stw      r0, 0x5c(r1)
	xoris    r9, r9, 0x8000
	lfd      f0, lbl_80516608@sda21(r2)
	li       r10, 0xff
	lfd      f1, 0x58(r1)
	lfd      f2, lbl_80516600@sda21(r2)
	fsub     f1, f1, f0
	stw      r7, 0x54(r1)
	lfd      f3, lbl_805165F8@sda21(r2)
	stw      r8, 0x50(r1)
	fmul     f1, f2, f1
	lfd      f6, lbl_805165D0@sda21(r2)
	lfd      f2, 0x50(r1)
	stw      r9, 0x4c(r1)
	fsub     f2, f2, f0
	lfd      f8, lbl_805165C8@sda21(r2)
	stw      r8, 0x48(r1)
	fmadd    f1, f3, f2, f1
	lfd      f3, lbl_805165E8@sda21(r2)
	lfd      f2, 0x48(r1)
	stw      r0, 0x1c(r1)
	fsub     f2, f2, f0
	lfd      f9, lbl_805165C0@sda21(r2)
	stw      r8, 0x18(r1)
	lfd      f10, lbl_805165B8@sda21(r2)
	lfd      f4, 0x18(r1)
	stw      r7, 0x14(r1)
	fsub     f5, f4, f0
	lfd      f4, lbl_805165F0@sda21(r2)
	stw      r8, 0x10(r1)
	fmadd    f1, f4, f2, f1
	lfd      f7, 0x10(r1)
	fmul     f6, f6, f5
	stw      r9, 0xc(r1)
	lfd      f5, lbl_805165D8@sda21(r2)
	fadd     f1, f3, f1
	fsub     f7, f7, f0
	stw      r8, 8(r1)
	fctiwz   f1, f1
	stw      r0, 0x3c(r1)
	fmsub    f7, f8, f7, f6
	lfd      f3, 8(r1)
	stw      r8, 0x38(r1)
	lfd      f6, lbl_805165E0@sda21(r2)
	stfd     f1, 0x60(r1)
	fsub     f1, f3, f0
	lfd      f2, 0x38(r1)
	fmadd    f3, f9, f1, f7
	stb      r4, 0x18(r3)
	lwz      r0, 0x64(r1)
	fsub     f2, f2, f0
	stb      r5, 0x19(r3)
	rlwinm   r0, r0, 8, 0x10, 0x17
	fadd     f3, f10, f3
	stb      r6, 0x1a(r3)
	fmul     f2, f5, f2
	stb      r10, 0x1b(r3)
	fctiwz   f3, f3
	stw      r7, 0x34(r1)
	stw      r8, 0x30(r1)
	lfd      f1, 0x30(r1)
	stw      r9, 0x2c(r1)
	fsub     f1, f1, f0
	stw      r8, 0x28(r1)
	fmsub    f1, f9, f1, f2
	lfd      f2, 0x28(r1)
	stfd     f3, 0x20(r1)
	fsub     f0, f2, f0
	sth      r0, 0x1c(r3)
	lwz      r0, 0x24(r1)
	fnmsub   f0, f6, f0, f1
	sth      r0, 0x1e(r3)
	rlwinm   r4, r0, 0x1f, 0x11, 0x1f
	rlwinm   r0, r0, 0x1e, 0x12, 0x1f
	sth      r4, 0x20(r3)
	fadd     f0, f10, f0
	sth      r0, 0x22(r3)
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	sth      r0, 0x24(r3)
	rlwinm   r4, r0, 0x1f, 0x11, 0x1f
	rlwinm   r0, r0, 0x1e, 0x12, 0x1f
	sth      r4, 0x26(r3)
	sth      r0, 0x28(r3)
	addi     r1, r1, 0x70
	blr
	*/
}
