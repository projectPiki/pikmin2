

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void wcsrtombs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void mbsrtowcs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void wcrtomb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void mbrtowc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void mbrlen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6CC4
 * Size:	000118
 */
void wcstombs(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr.       r28, r3
	  mr        r29, r5
	  li        r31, 0
	  beq-      .loc_0x28
	  cmplwi    r4, 0
	  bne-      .loc_0x30

	.loc_0x28:
	  li        r3, 0
	  b         .loc_0x104

	.loc_0x30:
	  mr        r30, r4
	  b         .loc_0xF8

	.loc_0x38:
	  lhz       r6, 0x0(r30)
	  cmplwi    r6, 0
	  bne-      .loc_0x50
	  li        r0, 0
	  stbx      r0, r28, r31
	  b         .loc_0x104

	.loc_0x50:
	  lwz       r0, -0x7298(r2)
	  cmplwi    r6, 0x80
	  addi      r30, r30, 0x2
	  stw       r0, 0x8(r1)
	  bge-      .loc_0x6C
	  li        r27, 0x1
	  b         .loc_0x80

	.loc_0x6C:
	  cmplwi    r6, 0x800
	  bge-      .loc_0x7C
	  li        r27, 0x2
	  b         .loc_0x80

	.loc_0x7C:
	  li        r27, 0x3

	.loc_0x80:
	  cmpwi     r27, 0x2
	  addi      r5, r1, 0xC
	  add       r5, r5, r27
	  beq-      .loc_0xB8
	  bge-      .loc_0xA0
	  cmpwi     r27, 0x1
	  bge-      .loc_0xC8
	  b         .loc_0xD8

	.loc_0xA0:
	  cmpwi     r27, 0x4
	  bge-      .loc_0xD8
	  rlwinm    r0,r6,0,26,31
	  rlwinm    r6,r6,26,22,31
	  ori       r0, r0, 0x80
	  stbu      r0, -0x1(r5)

	.loc_0xB8:
	  rlwinm    r0,r6,0,26,31
	  rlwinm    r6,r6,26,22,31
	  ori       r0, r0, 0x80
	  stbu      r0, -0x1(r5)

	.loc_0xC8:
	  addi      r4, r1, 0x8
	  lbzx      r0, r4, r27
	  or        r0, r6, r0
	  stb       r0, -0x1(r5)

	.loc_0xD8:
	  add       r0, r31, r27
	  cmplw     r0, r29
	  bgt-      .loc_0x104
	  mr        r5, r27
	  add       r3, r28, r31
	  addi      r4, r1, 0xC
	  bl        0x3A60
	  add       r31, r31, r27

	.loc_0xF8:
	  cmplw     r31, r29
	  mr        r3, r31
	  ble+      .loc_0x38

	.loc_0x104:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void mbstowcs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void wctomb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void unicode_to_UTF8(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6DDC
 * Size:	000120
 */
void mbtowc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  bne-      .loc_0x2C
	  b         .loc_0x100

	.loc_0x2C:
	  cmplwi    r5, 0
	  bne-      .loc_0x3C
	  li        r30, -0x1
	  b         .loc_0x100

	.loc_0x3C:
	  mr        r3, r29
	  mr        r4, r5
	  bl        .loc_0x120
	  cmpwi     r3, 0
	  bge-      .loc_0x58
	  li        r30, -0x1
	  b         .loc_0x100

	.loc_0x58:
	  cmpwi     r3, 0x2
	  mr        r4, r29
	  beq-      .loc_0x88
	  bge-      .loc_0x74
	  cmpwi     r3, 0x1
	  bge-      .loc_0x9C
	  b         .loc_0xAC

	.loc_0x74:
	  cmpwi     r3, 0x4
	  bge-      .loc_0xAC
	  lbz       r0, 0x0(r29)
	  addi      r4, r29, 0x1
	  rlwinm    r30,r0,6,22,25

	.loc_0x88:
	  lbz       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  rlwinm    r0,r0,0,26,31
	  or        r0, r30, r0
	  rlwinm    r30,r0,6,16,25

	.loc_0x9C:
	  lbz       r0, 0x0(r4)
	  rlwinm    r0,r0,0,25,31
	  or        r0, r30, r0
	  rlwinm    r30,r0,0,16,31

	.loc_0xAC:
	  rlwinm.   r0,r30,0,16,31
	  bne-      .loc_0xBC
	  li        r0, 0
	  b         .loc_0xE0

	.loc_0xBC:
	  cmplwi    r0, 0x80
	  bge-      .loc_0xCC
	  li        r0, 0x1
	  b         .loc_0xE0

	.loc_0xCC:
	  cmplwi    r0, 0x800
	  bge-      .loc_0xDC
	  li        r0, 0x2
	  b         .loc_0xE0

	.loc_0xDC:
	  li        r0, 0x3

	.loc_0xE0:
	  cmpw      r0, r3
	  beq-      .loc_0xF0
	  li        r30, -0x1
	  b         .loc_0x100

	.loc_0xF0:
	  cmplwi    r31, 0
	  beq-      .loc_0xFC
	  sth       r30, 0x0(r31)

	.loc_0xFC:
	  mr        r30, r3

	.loc_0x100:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x120:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void utf8_to_unicode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6EFC
 * Size:	0000EC
 */
void is_utf8_complete(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, -0x1
	  blr

	.loc_0x10:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne-      .loc_0x24
	  li        r3, 0
	  blr

	.loc_0x24:
	  extsb     r5, r5
	  rlwinm.   r0,r5,0,24,24
	  bne-      .loc_0x38
	  li        r3, 0x1
	  blr

	.loc_0x38:
	  rlwinm    r0,r5,0,24,26
	  cmpwi     r0, 0xC0
	  bne-      .loc_0x70
	  cmplwi    r4, 0x2
	  blt-      .loc_0x68
	  lbz       r0, 0x1(r3)
	  li        r3, -0x1
	  rlwinm    r0,r0,0,24,24
	  cmpwi     r0, 0x80
	  bnelr-
	  li        r3, 0x2
	  blr

	.loc_0x68:
	  li        r3, -0x2
	  blr

	.loc_0x70:
	  rlwinm    r0,r5,0,24,27
	  cmpwi     r0, 0xE0
	  bne-      .loc_0xE4
	  cmplwi    r4, 0x3
	  blt-      .loc_0xB4
	  lbz       r0, 0x1(r3)
	  rlwinm    r0,r0,0,24,24
	  cmpwi     r0, 0x80
	  bne-      .loc_0xAC
	  lbz       r0, 0x2(r3)
	  rlwinm    r0,r0,0,24,24
	  cmpwi     r0, 0x80
	  bne-      .loc_0xAC
	  li        r3, 0x3
	  blr

	.loc_0xAC:
	  li        r3, -0x1
	  blr

	.loc_0xB4:
	  cmplwi    r4, 0x2
	  bne-      .loc_0xCC
	  lbz       r0, 0x1(r3)
	  rlwinm    r0,r0,0,24,24
	  cmpwi     r0, 0x80
	  beq-      .loc_0xD4

	.loc_0xCC:
	  cmplwi    r4, 0x1
	  bne-      .loc_0xDC

	.loc_0xD4:
	  li        r3, -0x2
	  blr

	.loc_0xDC:
	  li        r3, -0x1
	  blr

	.loc_0xE4:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void mblen(void)
{
	// UNUSED FUNCTION
}
