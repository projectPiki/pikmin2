

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
 * Address:	8034B3C4
 * Size:	000054
 */
void init__Q34Game3Egg3FSMFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x21AB78
  li        r3, 0x10
  bl        -0x327540
  mr.       r4, r3
  beq-      .loc_0x38
  li        r4, 0
  bl        .loc_0x54
  mr        r4, r3

.loc_0x38:
  mr        r3, r31
  bl        -0x21AAF8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x54:
*/
}

/*
 * --INFO--
 * Address:	8034B418
 * Size:	00003C
 */
void __ct__Q34Game3Egg9StateWaitFi(void)
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  subi      r6, r6, 0x40E8
  subi      r5, r5, 0x410C
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x10
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8034B454
 * Size:	000040
 */
void init__Q34Game3Egg9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  mr        r3, r31
  bl        -0x246470
  mr        r3, r31
  bl        -0x24419C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8034B494
 * Size:	0001A8
 */
void exec__Q34Game3Egg9StateWaitFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lfs       f0, 0x18(r2)
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  lfs       f1, 0x200(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x13C
  mr        r3, r31
  bl        0xDEC
  mr        r3, r31
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r31)
  lwz       r12, 0x204(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x24(r1)
  lis       r4, 0x804B
  lwz       r6, 0x28(r1)
  subi      r0, r4, 0x5808
  lwz       r5, 0x2C(r1)
  lis       r4, 0x804B
  stw       r7, 0xC(r1)
  lis       r7, 0x804E
  subi      r9, r4, 0x5814
  lfs       f0, 0x1C(r2)
  stw       r6, 0x10(r1)
  lis       r8, 0x804B
  lfs       f3, 0xC(r1)
  lis       r4, 0x804E
  stw       r5, 0x14(r1)
  li        r6, 0x49
  lfs       f2, 0x10(r1)
  li        r5, 0
  lfs       f1, 0x14(r1)
  addi      r7, r7, 0x6A78
  stw       r0, 0x18(r1)
  subi      r8, r8, 0x5820
  subi      r0, r4, 0x4120
  addi      r4, r1, 0x30
  stw       r9, 0x30(r1)
  stw       r7, 0x18(r1)
  stw       r3, 0x40(r1)
  addi      r3, r1, 0x18
  stfs      f3, 0x34(r1)
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stw       r8, 0x30(r1)
  stfs      f0, 0x44(r1)
  sth       r6, 0x1C(r1)
  stw       r5, 0x20(r1)
  stw       r0, 0x18(r1)
  bl        0x63A04
  lis       r3, 0x804B
  lis       r4, 0x804F
  subi      r0, r3, 0x5808
  addi      r3, r1, 0x8
  stw       r0, 0x8(r1)
  subi      r0, r4, 0x7A2C
  addi      r4, r1, 0x30
  stw       r0, 0x8(r1)
  bl        0x7D7E0
  lwz       r3, 0x28C(r31)
  li        r4, 0x58DC
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  bl        -0x2104DC

.loc_0x13C:
  lfs       f1, 0x20C(r31)
  lfs       f0, 0x1C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x160
  mr        r3, r31
  bl        -0x2443E4
  lfs       f0, 0x18(r2)
  stfs      f0, 0x20C(r31)

.loc_0x160:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x194
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x194
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        -0x246618
  mr        r3, r31
  bl        -0x244344

.loc_0x194:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}