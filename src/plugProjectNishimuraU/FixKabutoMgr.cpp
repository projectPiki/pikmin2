

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
 * Address:	80300394
 * Size:	000050
 */
void __ct__Q34Game9FixKabuto3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C640
  lis       r3, 0x804D
  lis       r4, 0x8049
  addi      r5, r3, 0x6DB8
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x26D8
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
 * Address:	803003E4
 * Size:	000048
 */
void doAlloc__Q34Game9FixKabuto3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x808
  bl        -0x2DC558
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        -0xBA4
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x1D0B78
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030042C
 * Size:	000060
 */
void createObj__Q34Game9FixKabuto3MgrFi(void)
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
  mulli     r3, r31, 0x2FC
  addi      r3, r3, 0x10
  bl        -0x2DC4A4
  lis       r4, 0x8030
  lis       r5, 0x8030
  addi      r4, r4, 0x6EC
  mr        r7, r31
  addi      r5, r5, 0x48C
  li        r6, 0x2FC
  bl        -0x23EA7C
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
 * Address:	8030048C
 * Size:	0000F0
 */
void __dt__Q34Game9FixKabuto3ObjFv(void)
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
  beq-      .loc_0xD4
  lis       r3, 0x804D
  addi      r0, r30, 0x2EC
  addi      r4, r3, 0x6F38
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x31C
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC4
  lis       r3, 0x804D
  addi      r0, r30, 0x2E4
  addi      r4, r3, 0x3C54
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x31C
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC4
  lis       r3, 0x804B
  addi      r0, r30, 0x2BC
  subi      r4, r3, 0x5CDC
  addi      r3, r30, 0x290
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x1B0
  addi      r6, r4, 0x2F8
  li        r4, -0x1
  stw       r5, 0x178(r30)
  lwz       r5, 0x17C(r30)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r30)
  sub       r0, r0, r5
  stw       r0, 0xC(r5)
  bl        0x11103C

.loc_0xC4:
  extsh.    r0, r31
  ble-      .loc_0xD4
  mr        r3, r30
  bl        -0x2DC4A8

.loc_0xD4:
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
 * Address:	8030057C
 * Size:	000010
 */
void getEnemy__Q34Game9FixKabuto3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2FC
  lwz       r3, 0x48(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8030058C
 * Size:	000080
 */
void loadTexData__Q34Game9FixKabuto3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  li        r0, 0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  stw       r0, 0x44(r3)
  addi      r3, r1, 0x8
  lwz       r4, -0x7AD8(r13)
  bl        0x14C028
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0x14C1E4
  cmplwi    r3, 0
  beq-      .loc_0x44
  lwz       r0, 0x30(r3)
  stw       r0, 0x44(r31)

.loc_0x44:
  lwz       r0, 0x44(r31)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x26C0
  li        r4, 0x52
  subi      r5, r5, 0x26AC
  crclr     6, 0x6
  bl        -0x2D5FB4

.loc_0x6C:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8030060C
 * Size:	0000C8
 */
void __dt__Q34Game9FixKabuto3MgrFv(void)
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
  lis       r3, 0x804D
  addi      r3, r3, 0x6DB8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804D
  addi      r3, r3, 0x3B58
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
  bl        0x110EE4

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x2DC600

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
 * Address:	803006D4
 * Size:	000008
 */
void getEnemyTypeID__Q34Game9FixKabuto3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	803006DC
 * Size:	000008
 */
void getChangeTexture__Q34Game9FixKabuto3MgrFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803006E4
 * Size:	000008
 */
void @4@__dt__Q34Game9FixKabuto3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xDC
*/
}