

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
 * Address:	8012D5E4
 * Size:	000050
 */
void __ct__Q34Game14YellowKochappy3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x214
  lis       r3, 0x804B
  lis       r4, 0x8048
  subi      r5, r3, 0xCF0
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x3EBC
  stw       r5, 0x4(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012D634
 * Size:	000048
 */
void doAlloc__Q34Game14YellowKochappy3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x880
  bl        -0x1097A8
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        -0x1B25C
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        0x2238
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012D67C
 * Size:	000048
 */
void loadTexData__Q34Game14YellowKochappy3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, -0x7C08(r13)
  bl        0x31EF84
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0x31F0FC
  lwz       r0, 0x30(r3)
  stw       r0, 0x44(r31)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8012D6C4
 * Size:	0000C8
 */
void __dt__Q34Game14YellowKochappy3MgrFv(void)
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
  beq-      .loc_0xAC
  lis       r3, 0x804B
  subi      r3, r3, 0xCF0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  subi      r3, r3, 0xC08
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0x2E3E2C

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x1096B8

.loc_0xAC:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012D78C
 * Size:	000008
 */
void getEnemyTypeID__Q34Game14YellowKochappy3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2D
  blr
*/
}

/*
 * --INFO--
 * Address:	8012D794
 * Size:	000060
 */
void createObj__Q34Game14YellowKochappy3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  mulli     r3, r31, 0x2E8
  addi      r3, r3, 0x10
  bl        -0x10980C
  lis       r4, 0x8013
  lis       r5, 0x8013
  subi      r4, r4, 0x2DEC
  mr        r7, r31
  subi      r5, r5, 0x2B10
  li        r6, 0x2E8
  bl        -0x6BDE4
  stw       r3, 0x48(r30)
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
 * Address:	8012D7F4
 * Size:	000010
 */
void getEnemy__Q34Game14YellowKochappy3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2E8
  lwz       r3, 0x48(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8012D804
 * Size:	000008
 */
void @4@__dt__Q34Game14YellowKochappy3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x144
*/
}