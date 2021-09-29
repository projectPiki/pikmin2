

/*
 * --INFO--
 * Address:	800FED70
 * Size:	000060
 */
void ReadProc(void)
{
/*
.loc_0x0:
  mflr      r0
  lis       r4, 0x804F
  stw       r0, 0x4(r1)
  rlwinm    r3,r3,8,0,23
  addi      r0, r4, 0x75C0
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  add       r31, r0, r3
  lwz       r0, 0x20(r31)
  cmpwi     r0, 0
  bne-      .loc_0x4C
  lwz       r3, 0x18(r31)
  addi      r4, r31, 0x5
  li        r5, 0x4
  bl        -0xF9C0C
  lbz       r0, 0x9(r31)
  lwz       r3, 0x14(r31)
  andi.     r0, r0, 0x3A
  stb       r0, 0x0(r3)

.loc_0x4C:
  lwz       r0, 0x1C(r1)
  lwz       r31, 0x14(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void GBAReadAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800FEDD0
 * Size:	000094
 */
void GBARead(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stw       r31, 0x24(r1)
  addi      r31, r3, 0
  lis       r3, 0x804F
  rlwinm    r6,r31,8,0,23
  addi      r0, r3, 0x75C0
  add       r8, r0, r6
  lwz       r0, 0x1C(r8)
  cmplwi    r0, 0
  beq-      .loc_0x38
  li        r3, 0x2
  b         .loc_0x6C

.loc_0x38:
  li        r0, 0x14
  stb       r0, 0x0(r8)
  lis       r7, 0x8010
  lis       r3, 0x8010
  stw       r4, 0x18(r8)
  subi      r6, r3, 0x1290
  subi      r0, r7, 0xFCC
  stw       r5, 0x14(r8)
  mr        r3, r31
  li        r4, 0x1
  stw       r0, 0x1C(r8)
  li        r5, 0x5
  bl        0x3C0

.loc_0x6C:
  cmpwi     r3, 0
  beq-      .loc_0x78
  b         .loc_0x80

.loc_0x78:
  mr        r3, r31
  bl        0x21C

.loc_0x80:
  lwz       r0, 0x2C(r1)
  lwz       r31, 0x24(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}