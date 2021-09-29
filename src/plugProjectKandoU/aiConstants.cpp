

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B62B0
 * Size:	000148
 */
void __ct__Q24Game11AIConstantsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x444(r1)
  stw       r31, 0x43C(r1)
  mr        r31, r3
  stw       r30, 0x438(r1)
  subi      r30, r4, 0x3D8
  addi      r4, r30, 0
  bl        0x265D74
  lis       r3, 0x804B
  mr        r4, r31
  addi      r0, r3, 0x5C10
  addi      r3, r31, 0x1C
  stw       r0, 0x0(r31)
  subi      r5, r2, 0x4F38
  bl        0x265DAC
  lis       r3, 0x804B
  mr        r4, r31
  addi      r0, r3, 0x5AF8
  addi      r3, r31, 0x2C
  stw       r0, 0x1C(r31)
  addi      r5, r30, 0xC
  bl        0x265D90
  lis       r3, 0x804B
  mr        r4, r31
  addi      r0, r3, 0x5AE0
  addi      r3, r31, 0x3C
  stw       r0, 0x2C(r31)
  subi      r5, r2, 0x4F30
  bl        0x265D74
  lis       r3, 0x804B
  mr        r4, r31
  addi      r0, r3, 0x5AE0
  addi      r3, r31, 0x4C
  stw       r0, 0x3C(r31)
  addi      r5, r30, 0x18
  bl        0x265D58
  lis       r4, 0x804B
  li        r6, 0x2710
  addi      r0, r4, 0x5AF8
  lfs       f0, -0x4F28(r2)
  stw       r0, 0x4C(r31)
  li        r4, 0x2
  li        r0, 0
  addi      r3, r30, 0x28
  stw       r4, 0x38(r31)
  li        r4, 0
  li        r5, 0
  li        r7, 0
  stw       r6, 0x48(r31)
  li        r6, 0
  li        r8, 0x2
  li        r9, 0
  stfs      f0, 0x58(r31)
  li        r10, 0
  stw       r0, 0x8(r1)
  bl        -0x19720C
  mr.       r30, r3
  beq-      .loc_0x12C
  mr        r4, r30
  addi      r3, r1, 0x10
  li        r5, -0x1
  bl        0x25F54C
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x1C(r1)
  bne-      .loc_0x118
  li        r0, 0
  stw       r0, 0x424(r1)

.loc_0x118:
  mr        r3, r31
  addi      r4, r1, 0x10
  bl        0x265D04
  mr        r3, r30
  bl        -0x192300

.loc_0x12C:
  lwz       r0, 0x444(r1)
  mr        r3, r31
  lwz       r31, 0x43C(r1)
  lwz       r30, 0x438(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}

/*
 * --INFO--
 * Address:	801B63F8
 * Size:	000070
 */
void __dt__Q24Game11AIConstantsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r0, r4, 0x5C10
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x5B10
  stw       r0, 0x0(r30)
  bl        0x25B150

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x192394

.loc_0x54:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}