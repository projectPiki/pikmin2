

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
 * Address:	803688CC
 * Size:	000050
 */
void __ct__Q34Game6Jigumo3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x239C4C
  lis       r3, 0x804E
  lis       r4, 0x8049
  addi      r5, r3, 0x2B68
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  addi      r0, r4, 0x1A64
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
 * Address:	8036891C
 * Size:	000048
 */
void doAlloc__Q34Game6Jigumo3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x934
  bl        -0x344A90
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x2390B0
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
 * Address:	80368964
 * Size:	00024C
 */
void __ct__Q34Game6Jigumo5ParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x1A58
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x25F1E8
  lis       r3, 0x804E
  lis       r5, 0x6670
  addi      r0, r3, 0x2C48
  addi      r4, r30, 0x8F4
  stw       r0, 0xD8(r30)
  li        r7, 0
  addi      r0, r31, 0x20
  addi      r3, r30, 0x804
  stw       r4, 0x7F8(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x30
  stw       r7, 0x7FC(r30)
  stw       r0, 0x800(r30)
  bl        0xAAC98
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x5C0(r2)
  stw       r0, 0x804(r30)
  addi      r3, r30, 0x82C
  lfs       f1, 0x5C4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x81C(r30)
  addi      r5, r5, 0x3032
  lfs       f0, 0x5C8(r2)
  addi      r6, r31, 0x3C
  stfs      f1, 0x824(r30)
  stfs      f0, 0x828(r30)
  bl        0xAAC5C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x5C0(r2)
  stw       r0, 0x82C(r30)
  addi      r3, r30, 0x854
  lfs       f1, 0x5C4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x844(r30)
  addi      r5, r5, 0x3033
  lfs       f0, 0x5C8(r2)
  addi      r6, r31, 0x48
  stfs      f1, 0x84C(r30)
  stfs      f0, 0x850(r30)
  bl        0xAAC20
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x5CC(r2)
  stw       r0, 0x854(r30)
  addi      r3, r30, 0x87C
  lfs       f1, 0x5C4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x86C(r30)
  addi      r5, r5, 0x3034
  lfs       f0, 0x5D0(r2)
  addi      r6, r31, 0x58
  stfs      f1, 0x874(r30)
  stfs      f0, 0x878(r30)
  bl        0xAABE4
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x5D4(r2)
  stw       r0, 0x87C(r30)
  addi      r3, r30, 0x8A4
  lfs       f1, 0x5C4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x894(r30)
  addi      r5, r5, 0x3035
  lfs       f0, 0x5D0(r2)
  addi      r6, r31, 0x68
  stfs      f1, 0x89C(r30)
  stfs      f0, 0x8A0(r30)
  bl        0xAABA8
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5344
  lfs       f0, 0x5C8(r2)
  stw       r0, 0x8A4(r30)
  addi      r3, r30, 0x8CC
  lfs       f1, 0x5C4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x8BC(r30)
  addi      r5, r5, 0x3031
  lfs       f0, 0x5D8(r2)
  addi      r6, r31, 0x74
  stfs      f1, 0x8C4(r30)
  stfs      f0, 0x8C8(r30)
  bl        0xAAB6C
  lis       r3, 0x804B
  li        r0, 0x1E
  subi      r3, r3, 0x5370
  li        r6, 0
  stw       r3, 0x8CC(r30)
  li        r5, 0x78
  li        r4, 0x1
  lfs       f9, 0x5DC(r2)
  stw       r0, 0x8E4(r30)
  li        r0, 0x8
  lfs       f8, 0x5E0(r2)
  mr        r3, r30
  stw       r6, 0x8EC(r30)
  lfs       f7, 0x5E4(r2)
  stw       r5, 0x8F0(r30)
  lfs       f6, 0x5E8(r2)
  stb       r4, 0x8F8(r30)
  lfs       f5, 0x5EC(r2)
  stb       r4, 0x8F9(r30)
  lfs       f4, 0x5F0(r2)
  stb       r4, 0x8FA(r30)
  lfs       f3, 0x5CC(r2)
  stb       r4, 0x8FB(r30)
  lfs       f2, 0x5F4(r2)
  stb       r6, 0x8FC(r30)
  lfs       f1, 0x5F8(r2)
  stb       r4, 0x8FD(r30)
  lfs       f0, 0x5FC(r2)
  stb       r6, 0x8FE(r30)
  stfs      f9, 0x900(r30)
  stfs      f8, 0x904(r30)
  stfs      f7, 0x908(r30)
  stfs      f6, 0x90C(r30)
  stb       r0, 0x910(r30)
  stfs      f5, 0x914(r30)
  stfs      f4, 0x918(r30)
  stfs      f3, 0x91C(r30)
  stfs      f4, 0x920(r30)
  stfs      f2, 0x924(r30)
  stfs      f1, 0x928(r30)
  stfs      f0, 0x92C(r30)
  stfs      f8, 0x930(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80368BB0
 * Size:	000020
 */
void birth__Q34Game6Jigumo3MgrFRQ24Game13EnemyBirthArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2397F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80368BD0
 * Size:	000068
 */
void loadModelData__Q34Game6Jigumo3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x238AD8
  li        r5, 0
  b         .loc_0x40

.loc_0x20:
  lwz       r3, 0x80(r4)
  rlwinm    r0,r5,2,14,29
  addi      r5, r5, 0x1
  lwzx      r3, r3, r0
  lwz       r0, 0xC(r3)
  rlwinm    r0,r0,0,20,15
  ori       r0, r0, 0x2000
  stw       r0, 0xC(r3)

.loc_0x40:
  lwz       r4, 0x1C(r31)
  rlwinm    r0,r5,0,16,31
  lhz       r3, 0x7C(r4)
  cmplw     r0, r3
  blt+      .loc_0x20
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80368C38
 * Size:	0000B0
 */
void __dt__Q34Game6Jigumo3MgrFv(void)
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
  beq-      .loc_0x94
  lis       r3, 0x804E
  addi      r3, r3, 0x2B68
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0xA88D0

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x344C14

.loc_0x94:
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
 * Address:	80368CE8
 * Size:	00002C
 */
void doLoadBmd__Q34Game6Jigumo3MgrFPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x24
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x30
  bl        -0x2F946C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80368D14
 * Size:	000008
 */
void getEnemyTypeID__Q34Game6Jigumo3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x3F
  blr
*/
}

/*
 * --INFO--
 * Address:	80368D1C
 * Size:	000060
 */
void createObj__Q34Game6Jigumo3MgrFi(void)
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
  mulli     r3, r31, 0x39C
  addi      r3, r3, 0x10
  bl        -0x344D94
  lis       r4, 0x8037
  lis       r5, 0x8037
  subi      r4, r4, 0x6BFC
  mr        r7, r31
  subi      r5, r5, 0x7284
  li        r6, 0x39C
  bl        -0x2A736C
  stw       r3, 0x44(r30)
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
 * Address:	80368D7C
 * Size:	0000BC
 */
void __dt__Q34Game6Jigumo3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xA0
  lis       r3, 0x804E
  addi      r0, r31, 0x38C
  addi      r4, r3, 0x2C58
  stw       r4, 0x0(r31)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x2FC
  stw       r3, 0x178(r31)
  lwz       r3, 0x17C(r31)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r31)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0x90
  lis       r3, 0x804B
  addi      r0, r31, 0x2BC
  subi      r4, r3, 0x5CDC
  addi      r3, r31, 0x290
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x1B0
  addi      r6, r4, 0x2F8
  li        r4, -0x1
  stw       r5, 0x178(r31)
  lwz       r5, 0x17C(r31)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r31)
  sub       r0, r0, r5
  stw       r0, 0xC(r5)
  bl        0xA8780

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x344D64

.loc_0xA0:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80368E38
 * Size:	000010
 */
void getEnemy__Q34Game6Jigumo3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x39C
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80368E48
 * Size:	000050
 */
void read__Q34Game6Jigumo5ParmsFR6Stream(void)
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
  bl        0xAA990
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0xAA984
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0xAA978
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
 * Address:	80368E98
 * Size:	000008
 */
void @4@__dt__Q34Game6Jigumo3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x264
*/
}