

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
 * Address:	802FF7CC
 * Size:	000050
 */
void __ct__Q34Game11GreenKabuto3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1BA78
  lis       r3, 0x804D
  lis       r4, 0x8049
  addi      r5, r3, 0x6540
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x27C0
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
 * Address:	802FF81C
 * Size:	000048
 */
void doAlloc__Q34Game11GreenKabuto3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x808
  bl        -0x2DB990
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x1CFFB0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	802FF864
 * Size:	000058
 */
void __ct__Q34Game6Kabuto5ParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1F60DC
  lis       r4, 0x804D
  lis       r3, 0x8049
  addi      r0, r4, 0x6624
  addi      r5, r31, 0x804
  stw       r0, 0xD8(r31)
  li        r4, 0
  subi      r0, r3, 0x27A4
  mr        r3, r31
  stw       r5, 0x7F8(r31)
  stw       r4, 0x7FC(r31)
  stw       r0, 0x800(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802FF8BC
 * Size:	000060
 */
void createObj__Q34Game11GreenKabuto3MgrFi(void)
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
  bl        -0x2DB934
  lis       r4, 0x8030
  lis       r5, 0x8030
  subi      r4, r4, 0x438
  mr        r7, r31
  subi      r5, r5, 0x6E4
  li        r6, 0x2F4
  bl        -0x23DF0C
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
 * Address:	802FF91C
 * Size:	0000EC
 */
void __dt__Q34Game11GreenKabuto3ObjFv(void)
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
  lis       r3, 0x804D
  addi      r5, r30, 0x2E4
  addi      r4, r3, 0x6630
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r0, r4, 0x31C
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r0, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r5, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC0
  lis       r3, 0x804D
  addi      r4, r3, 0x3C54
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r0, r4, 0x31C
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
  bl        0x111BB0

.loc_0xC0:
  extsh.    r0, r31
  ble-      .loc_0xD0
  mr        r3, r30
  bl        -0x2DB934

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
 * Address:	802FFA08
 * Size:	000010
 */
void getEnemy__Q34Game11GreenKabuto3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2F4
  lwz       r3, 0x48(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	802FFA18
 * Size:	000080
 */
void loadTexData__Q34Game11GreenKabuto3MgrFv(void)
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
  lwz       r4, -0x7AE8(r13)
  bl        0x14CB9C
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0x14CD58
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
  subi      r3, r3, 0x2794
  li        r4, 0x52
  subi      r5, r5, 0x2780
  crclr     6, 0x6
  bl        -0x2D5440

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
 * Address:	802FFA98
 * Size:	0000C8
 */
void __dt__Q34Game11GreenKabuto3MgrFv(void)
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
  addi      r3, r3, 0x6540
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
  bl        0x111A58

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x2DBA8C

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
 * Address:	802FFB60
 * Size:	000008
 */
void getEnemyTypeID__Q34Game11GreenKabuto3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B
  blr
*/
}

/*
 * --INFO--
 * Address:	802FFB68
 * Size:	000008
 */
void getChangeTexture__Q34Game11GreenKabuto3MgrFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802FFB70
 * Size:	000050
 */
void read__Q34Game6Kabuto5ParmsFR6Stream(void)
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
  bl        0x113C68
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x113C5C
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x113C50
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
 * Address:	802FFBC0
 * Size:	000008
 */
void @4@__dt__Q34Game11GreenKabuto3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x12C
*/
}