

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
 * Address:	8012B8AC
 * Size:	000050
 */
void __ct__Q34Game10BlueChappy3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1250
  lis       r3, 0x804B
  lis       r4, 0x8048
  subi      r5, r3, 0x1D50
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x3FEC
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
 * Address:	8012B8FC
 * Size:	00006C
 */
void loadTexData__Q34Game10BlueChappy3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, -0x7C20(r13)
  bl        0x320D04
  lwz       r0, -0x7C20(r13)
  addi      r4, r1, 0x8
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x8(r1)
  bl        0x320E74
  lwz       r0, 0x30(r3)
  addi      r4, r1, 0x8
  stw       r0, 0x44(r31)
  lwz       r0, -0x7C1C(r13)
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x8(r1)
  bl        0x320E58
  lwz       r0, 0x30(r3)
  stw       r0, 0x48(r31)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8012B968
 * Size:	000048
 */
void doAlloc__Q34Game10BlueChappy3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x884
  bl        -0x107ADC
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        -0x12054
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        0x3F04
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012B9B0
 * Size:	0000C8
 */
void __dt__Q34Game10BlueChappy3MgrFv(void)
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
  subi      r3, r3, 0x1D50
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  subi      r3, r3, 0x21E8
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
  bl        0x2E5B40

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x1079A4

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
 * Address:	8012BA78
 * Size:	000008
 */
void getEnemyTypeID__Q34Game10BlueChappy3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2A
  blr
*/
}

/*
 * --INFO--
 * Address:	8012BA80
 * Size:	000008
 */
void getChangeTexture0__Q34Game10BlueChappy3MgrFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8012BA88
 * Size:	000008
 */
void getChangeTexture1__Q34Game10BlueChappy3MgrFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x48(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8012BA90
 * Size:	000060
 */
void createObj__Q34Game10BlueChappy3MgrFi(void)
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
  mulli     r3, r31, 0x2F4
  addi      r3, r3, 0x10
  bl        -0x107B08
  lis       r4, 0x8013
  lis       r5, 0x8013
  subi      r4, r4, 0x440C
  mr        r7, r31
  subi      r5, r5, 0x4510
  li        r6, 0x2F4
  bl        -0x6A0E0
  stw       r3, 0x4C(r30)
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
 * Address:	8012BAF0
 * Size:	0000EC
 */
void __dt__Q34Game10BlueChappy3ObjFv(void)
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
  beq-      .loc_0xD0
  lis       r3, 0x804B
  addi      r5, r30, 0x2E4
  subi      r4, r3, 0x1C68
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r0, r4, 0x334
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r0, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r5, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC0
  lis       r3, 0x804B
  subi      r4, r3, 0x20B4
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r0, r4, 0x334
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r0, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r5, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC0
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
  bl        0x2E59DC

.loc_0xC0:
  extsh.    r0, r31
  ble-      .loc_0xD0
  mr        r3, r30
  bl        -0x107B08

.loc_0xD0:
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
 * Address:	8012BBDC
 * Size:	000010
 */
void getEnemy__Q34Game10BlueChappy3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2F4
  lwz       r3, 0x4C(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8012BBEC
 * Size:	000008
 */
void @4@__dt__Q34Game10BlueChappy3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x240
*/
}