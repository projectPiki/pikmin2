

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void __msl_strdup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void __msl_itoa(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void __msl_strrev(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void __msl_strnicmp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __set_idle_proc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void __get_file_modes(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D8
 */
void __handle_reopen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
void __handle_open(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __reopen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00023C
 */
void freopen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000250
 */
void fopen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6610
 * Size:	000138
 */
void fflush(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  bne-      .loc_0x24
  bl        -0x3C28
  b         .loc_0x120

.loc_0x24:
  lbz       r0, 0xA(r31)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lhz       r0, 0x4(r31)
  rlwinm.   r0,r0,26,29,31
  bne-      .loc_0x44

.loc_0x3C:
  li        r3, -0x1
  b         .loc_0x120

.loc_0x44:
  lbz       r0, 0x4(r31)
  rlwinm    r0,r0,29,29,31
  cmplwi    r0, 0x1
  bne-      .loc_0x5C
  li        r3, 0
  b         .loc_0x120

.loc_0x5C:
  lbz       r3, 0x8(r31)
  rlwinm    r0,r3,27,29,31
  cmplwi    r0, 0x3
  blt-      .loc_0x78
  li        r0, 0x2
  rlwimi    r3,r0,5,24,26
  stb       r3, 0x8(r31)

.loc_0x78:
  lbz       r0, 0x8(r31)
  rlwinm    r0,r0,27,29,31
  cmplwi    r0, 0x2
  bne-      .loc_0x90
  li        r0, 0
  stw       r0, 0x28(r31)

.loc_0x90:
  lbz       r4, 0x8(r31)
  rlwinm    r0,r4,27,29,31
  cmplwi    r0, 0x1
  beq-      .loc_0xB4
  li        r0, 0
  li        r3, 0
  rlwimi    r4,r0,5,24,26
  stb       r4, 0x8(r31)
  b         .loc_0x120

.loc_0xB4:
  lhz       r0, 0x4(r31)
  rlwinm    r0,r0,26,29,31
  cmplwi    r0, 0x1
  beq-      .loc_0xCC
  li        r30, 0
  b         .loc_0xD8

.loc_0xCC:
  mr        r3, r31
  bl        0x500
  mr        r30, r3

.loc_0xD8:
  mr        r3, r31
  li        r4, 0
  bl        -0x590
  cmpwi     r3, 0
  beq-      .loc_0x104
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0xA(r31)
  li        r3, -0x1
  stw       r0, 0x28(r31)
  b         .loc_0x120

.loc_0x104:
  lbz       r0, 0x8(r31)
  li        r4, 0
  rlwimi    r0,r4,5,24,26
  li        r3, 0
  stb       r0, 0x8(r31)
  stw       r30, 0x18(r31)
  stw       r4, 0x28(r31)

.loc_0x120:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800C6748
 * Size:	0001BC
 */
void fclose(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  bne-      .loc_0x28
  li        r3, -0x1
  b         .loc_0x1A0

.loc_0x28:
  lhz       r0, 0x4(r31)
  rlwinm.   r3,r0,26,29,31
  bne-      .loc_0x3C
  li        r3, 0
  b         .loc_0x1A0

.loc_0x3C:
  cmplwi    r31, 0
  bne-      .loc_0x50
  bl        -0x3D88
  mr        r29, r3
  b         .loc_0x140

.loc_0x50:
  lbz       r0, 0xA(r31)
  cmplwi    r0, 0
  bne-      .loc_0x64
  cmplwi    r3, 0
  bne-      .loc_0x6C

.loc_0x64:
  li        r29, -0x1
  b         .loc_0x140

.loc_0x6C:
  lbz       r0, 0x4(r31)
  rlwinm    r0,r0,29,29,31
  cmplwi    r0, 0x1
  bne-      .loc_0x84
  li        r29, 0
  b         .loc_0x140

.loc_0x84:
  lbz       r3, 0x8(r31)
  rlwinm    r0,r3,27,29,31
  cmplwi    r0, 0x3
  blt-      .loc_0xA0
  li        r0, 0x2
  rlwimi    r3,r0,5,24,26
  stb       r3, 0x8(r31)

.loc_0xA0:
  lbz       r0, 0x8(r31)
  rlwinm    r0,r0,27,29,31
  cmplwi    r0, 0x2
  bne-      .loc_0xB8
  li        r0, 0
  stw       r0, 0x28(r31)

.loc_0xB8:
  lbz       r3, 0x8(r31)
  rlwinm    r0,r3,27,29,31
  cmplwi    r0, 0x1
  beq-      .loc_0xD8
  li        r29, 0
  rlwimi    r3,r29,5,24,26
  stb       r3, 0x8(r31)
  b         .loc_0x140

.loc_0xD8:
  lhz       r0, 0x4(r31)
  rlwinm    r0,r0,26,29,31
  cmplwi    r0, 0x1
  beq-      .loc_0xF0
  li        r30, 0
  b         .loc_0xFC

.loc_0xF0:
  mr        r3, r31
  bl        0x3A4
  mr        r30, r3

.loc_0xFC:
  mr        r3, r31
  li        r4, 0
  bl        -0x6EC
  cmpwi     r3, 0
  beq-      .loc_0x128
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0xA(r31)
  li        r29, -0x1
  stw       r0, 0x28(r31)
  b         .loc_0x140

.loc_0x128:
  li        r29, 0
  lbz       r0, 0x8(r31)
  rlwimi    r0,r29,5,24,26
  stb       r0, 0x8(r31)
  stw       r30, 0x18(r31)
  stw       r29, 0x28(r31)

.loc_0x140:
  lwz       r12, 0x44(r31)
  lwz       r3, 0x0(r31)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r31)
  li        r4, 0
  rlwimi    r0,r4,6,23,25
  mr        r30, r3
  sth       r0, 0x4(r31)
  stw       r4, 0x0(r31)
  lbz       r0, 0x8(r31)
  rlwinm.   r0,r0,28,31,31
  beq-      .loc_0x17C
  lwz       r3, 0x1C(r31)
  bl        -0x4370

.loc_0x17C:
  cmpwi     r29, 0
  li        r3, 0
  bne-      .loc_0x190
  cmpwi     r30, 0
  beq-      .loc_0x194

.loc_0x190:
  li        r3, 0x1

.loc_0x194:
  neg       r0, r3
  or        r0, r0, r3
  srawi     r3, r0, 0x1F

.loc_0x1A0:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void tmpfile(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void tmpnam(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void rename(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void remove(void)
{
	// UNUSED FUNCTION
}