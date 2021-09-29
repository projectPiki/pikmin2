

/*
 * --INFO--
 * Address:	800FEE64
 * Size:	000030
 */
void WriteProc(void)
{
/*
.loc_0x0:
  lis       r4, 0x804F
  rlwinm    r3,r3,8,0,23
  addi      r0, r4, 0x75C0
  add       r3, r0, r3
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0
  bnelr-    
  lbz       r0, 0x5(r3)
  lwz       r3, 0x14(r3)
  andi.     r0, r0, 0x3A
  stb       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void GBAWriteAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800FEE94
 * Size:	0000C4
 */
void GBAWrite(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x30(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  addi      r30, r5, 0
  stw       r29, 0x24(r1)
  addi      r29, r4, 0
  stw       r28, 0x20(r1)
  addi      r28, r3, 0
  lis       r3, 0x804F
  rlwinm    r6,r28,8,0,23
  addi      r0, r3, 0x75C0
  add       r31, r0, r6
  lwz       r0, 0x1C(r31)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  li        r3, 0x2
  b         .loc_0x90

.loc_0x4C:
  li        r0, 0x15
  stb       r0, 0x0(r31)
  addi      r4, r29, 0
  addi      r3, r31, 0x1
  li        r5, 0x4
  bl        -0xF9D58
  stw       r29, 0x18(r31)
  lis       r4, 0x8010
  subi      r0, r4, 0xFCC
  stw       r30, 0x14(r31)
  lis       r3, 0x8010
  subi      r6, r3, 0x119C
  stw       r0, 0x1C(r31)
  addi      r3, r28, 0
  li        r4, 0x5
  li        r5, 0x1
  bl        0x2D8

.loc_0x90:
  cmpwi     r3, 0
  beq-      .loc_0x9C
  b         .loc_0xA4

.loc_0x9C:
  mr        r3, r28
  bl        0x134

.loc_0xA4:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  addi      r1, r1, 0x30
  mtlr      r0
  blr
*/
}