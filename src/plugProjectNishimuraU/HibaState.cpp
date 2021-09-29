

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
 * Address:	8026B354
 * Size:	000128
 */
void init__Q34Game4Hiba3FSMFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x3
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x13AB08
  li        r3, 0x10
  bl        -0x2474D0
  mr.       r4, r3
  beq-      .loc_0x64
  lis       r3, 0x804B
  lis       r5, 0x804C
  subi      r0, r3, 0x65C
  lis       r3, 0x804C
  stw       r0, 0x0(r4)
  li        r7, 0
  addi      r6, r5, 0x5274
  subi      r5, r2, 0x3380
  stw       r7, 0x4(r4)
  addi      r0, r3, 0x5250
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x64:
  mr        r3, r31
  bl        -0x13AAB4
  li        r3, 0x10
  bl        -0x247520
  mr.       r4, r3
  beq-      .loc_0xB8
  lis       r3, 0x804B
  lis       r5, 0x804C
  subi      r0, r3, 0x65C
  lis       r3, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x1
  li        r7, 0
  addi      r6, r5, 0x5274
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x3378
  addi      r0, r3, 0x522C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0xB8:
  mr        r3, r31
  bl        -0x13AB08
  li        r3, 0x10
  bl        -0x247574
  mr.       r4, r3
  beq-      .loc_0x10C
  lis       r3, 0x804B
  lis       r5, 0x804C
  subi      r0, r3, 0x65C
  lis       r3, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x2
  li        r7, 0
  addi      r6, r5, 0x5274
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x3370
  addi      r0, r3, 0x5208
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x10C:
  mr        r3, r31
  bl        -0x13AB5C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B47C
 * Size:	00017C
 */
void init__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  mr        r31, r4
  lwz       r4, 0x1E0(r4)
  li        r0, 0
  ori       r4, r4, 0x4
  mr        r3, r31
  stw       r4, 0x1E0(r31)
  lwz       r4, 0x1E0(r31)
  rlwinm    r4,r4,0,21,19
  stw       r4, 0x1E0(r31)
  lwz       r4, 0x1E0(r31)
  ori       r4, r4, 0x1
  stw       r4, 0x1E0(r31)
  lwz       r4, 0x1E0(r31)
  rlwinm    r4,r4,0,29,27
  stw       r4, 0x1E0(r31)
  stb       r0, 0x2C0(r31)
  bl        0x10E4
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        -0x1664E0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x580C
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lfs       f1, -0x3368(r2)
  mr        r3, r31
  bl        0x202EF8
  mr        r4, r31
  addi      r3, r1, 0x18
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lfs       f2, 0x18(r1)
  lwz       r12, 0x0(r31)
  lfs       f1, 0x1C(r1)
  lfs       f0, 0x20(r1)
  lwz       r12, 0x258(r12)
  stfs      f2, 0x24(r1)
  lfs       f31, 0x1F8(r31)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  mtctr     r12
  bctrl     
  lwz       r6, 0x24(r1)
  lis       r5, 0x804B
  lwz       r0, 0x28(r1)
  lis       r4, 0x804B
  lwz       r8, 0x2C(r1)
  subi      r7, r5, 0x5814
  stw       r6, 0xC(r1)
  subi      r5, r4, 0x5808
  lis       r6, 0x804B
  lis       r4, 0x804F
  stw       r0, 0x10(r1)
  subi      r6, r6, 0x5820
  lfs       f2, 0xC(r1)
  subi      r0, r4, 0x7A2C
  stw       r8, 0x14(r1)
  addi      r4, r1, 0x30
  lfs       f1, 0x10(r1)
  stw       r7, 0x30(r1)
  lfs       f0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r3, 0x40(r1)
  addi      r3, r1, 0x8
  stfs      f2, 0x34(r1)
  stfs      f1, 0x38(r1)
  stfs      f0, 0x3C(r1)
  stw       r6, 0x30(r1)
  stfs      f31, 0x44(r1)
  stw       r0, 0x8(r1)
  bl        0x15D7AC
  psq_l     f31,0x58(r1),0,0
  lwz       r0, 0x64(r1)
  lfd       f31, 0x50(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B5F8
 * Size:	000008
 */
void getEnemyTypeID__Q34Game4Hiba3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0x14
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B600
 * Size:	000004
 */
void exec__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B604
 * Size:	000004
 */
void cleanup__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B608
 * Size:	000048
 */
void init__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x20
  lfs       f0, 0x0(r5)
  stfs      f0, 0x2C4(r4)
  b         .loc_0x28

.loc_0x20:
  lfs       f0, -0x3368(r2)
  stfs      f0, 0x2C4(r4)

.loc_0x28:
  mr        r3, r4
  li        r4, 0
  li        r5, 0
  bl        -0x166638
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B650
 * Size:	00008C
 */
void exec__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x3368(r2)
  stw       r0, 0x14(r1)
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x2C4(r4)
  lfs       f1, 0x54(r5)
  fadds     f1, f2, f1
  stfs      f1, 0x2C4(r4)
  lfs       f1, 0x200(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x7C

.loc_0x50:
  lwz       r5, 0xC0(r4)
  lfs       f1, 0x2C4(r4)
  lfs       f0, 0x81C(r5)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x7C
  lwz       r12, 0x0(r3)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x7C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B6DC
 * Size:	000004
 */
void cleanup__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B6E0
 * Size:	000048
 */
void init__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x3368(r2)
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x1
  stfs      f0, 0x2C4(r31)
  mr        r3, r31
  bl        -0x166704
  mr        r3, r31
  bl        0xE20
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B728
 * Size:	0000FC
 */
void exec__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x3368(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lfs       f1, 0x200(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  beq-      .loc_0x44
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x844(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x4C

.loc_0x44:
  mr        r3, r31
  bl        -0x1664D0

.loc_0x4C:
  lwz       r4, -0x6514(r13)
  mr        r3, r31
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  bl        0xD14
  mr        r3, r31
  bl        0xB18
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0xE4
  lfs       f1, 0x200(r31)
  lfs       f0, -0x3368(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xC4
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xE4

.loc_0xC4:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xE4:
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
 * Address:	8026B824
 * Size:	000024
 */
void cleanup__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        0xD54
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}