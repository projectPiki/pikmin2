

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
 * Address:	8028C584
 * Size:	0001D0
 */
void init__Q34Game4Baby3FSMFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x5
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x15BD38
  li        r3, 0x10
  bl        -0x268700
  mr.       r4, r3
  beq-      .loc_0x64
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r7, 0
  subi      r6, r5, 0x5BF0
  subi      r5, r2, 0x2AD8
  stw       r7, 0x4(r4)
  subi      r0, r3, 0x5C14
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x64:
  mr        r3, r31
  bl        -0x15BCE4
  li        r3, 0x10
  bl        -0x268750
  mr.       r4, r3
  beq-      .loc_0xB8
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x1
  li        r7, 0
  subi      r6, r5, 0x5BF0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2AD0
  subi      r0, r3, 0x5C38
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0xB8:
  mr        r3, r31
  bl        -0x15BD38
  li        r3, 0x10
  bl        -0x2687A4
  mr.       r4, r3
  beq-      .loc_0x10C
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x2
  li        r7, 0
  subi      r6, r5, 0x5BF0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2AC8
  subi      r0, r3, 0x5C70
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x10C:
  mr        r3, r31
  bl        -0x15BD8C
  li        r3, 0x10
  bl        -0x2687F8
  mr.       r4, r3
  beq-      .loc_0x160
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x3
  li        r7, 0
  subi      r6, r5, 0x5BF0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2AC0
  subi      r0, r3, 0x5C94
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x160:
  mr        r3, r31
  bl        -0x15BDE0
  li        r3, 0x10
  bl        -0x26884C
  mr.       r4, r3
  beq-      .loc_0x1B4
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x4
  li        r7, 0
  subi      r6, r5, 0x5BF0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2AB8
  subi      r0, r3, 0x5CB8
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x1B4:
  mr        r3, r31
  bl        -0x15BE34
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C754
 * Size:	000058
 */
void init__Q34Game4Baby9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        0x15E8
  mr        r3, r31
  bl        -0x187054
  lfs       f0, -0x2AB0(r2)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x187790
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C7AC
 * Size:	000044
 */
void exec__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x34
  mr        r3, r4
  li        r4, 0
  bl        -0x1516EC

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C7F0
 * Size:	000004
 */
void cleanup__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C7F4
 * Size:	0000DC
 */
void init__Q34Game4Baby10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  mr        r3, r31
  bl        0x1548
  lfs       f0, -0x2AB0(r2)
  mr        r3, r31
  stfs      f0, 0x200(r31)
  bl        -0x1870FC
  lfs       f0, -0x2AB0(r2)
  mr        r3, r31
  li        r4, 0x1
  li        r5, 0
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x187838
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804B
  lis       r3, 0x804E
  subi      r0, r4, 0x5808
  lfs       f2, 0x8(r1)
  stw       r0, 0x14(r1)
  addi      r0, r3, 0x6A78
  lfs       f1, 0xC(r1)
  lis       r4, 0x804B
  lfs       f0, 0x10(r1)
  lis       r3, 0x804D
  subi      r4, r4, 0x5814
  li        r6, 0x3
  li        r5, 0
  stw       r0, 0x14(r1)
  subi      r0, r3, 0x5C4C
  addi      r3, r1, 0x14
  stw       r4, 0x20(r1)
  addi      r4, r1, 0x20
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  sth       r6, 0x18(r1)
  stw       r5, 0x1C(r1)
  stw       r0, 0x14(r1)
  bl        0x1226CC
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C8D0
 * Size:	000044
 */
void exec__Q34Game4Baby10StatePressFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x34
  mr        r3, r4
  li        r4, 0
  bl        -0x151810

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C914
 * Size:	000004
 */
void cleanup__Q34Game4Baby10StatePressFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C918
 * Size:	000040
 */
void init__Q34Game4Baby9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        0x15D0
  mr        r3, r31
  li        r4, 0x5
  li        r5, 0
  bl        -0x18793C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028C958
 * Size:	0000D8
 */
void exec__Q34Game4Baby9StateBornFPQ24Game9EnemyBase(void)
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
  lwz       r0, 0xC8(r4)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  lfs       f2, 0x1D4(r31)
  mr        r3, r31
  lfs       f0, -0x2AAC(r2)
  lfs       f3, 0x1DC(r31)
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  stfs      f2, 0x1D4(r31)
  stfs      f3, 0x1DC(r31)
  bl        -0x187700

.loc_0x4C:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0xC0
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2AB0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xA0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xC0

.loc_0xA0:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xC0:
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
 * Address:	8028CA30
 * Size:	000004
 */
void cleanup__Q34Game4Baby9StateBornFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8028CA34
 * Size:	000034
 */
void init__Q34Game4Baby9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  li        r4, 0x2
  stw       r0, 0x14(r1)
  li        r0, 0
  li        r5, 0
  stw       r0, 0x230(r3)
  bl        -0x187A50
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028CA68
 * Size:	000468
 */
void exec__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stfd      f31, 0xE0(r1)
  psq_st    f31,0xE8(r1),0,0
  stfd      f30, 0xD0(r1)
  psq_st    f30,0xD8(r1),0,0
  stfd      f29, 0xC0(r1)
  psq_st    f29,0xC8(r1),0,0
  stfd      f28, 0xB0(r1)
  psq_st    f28,0xB8(r1),0,0
  stfd      f27, 0xA0(r1)
  psq_st    f27,0xA8(r1),0,0
  stfd      f26, 0x90(r1)
  psq_st    f26,0x98(r1),0,0
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  stw       r29, 0x84(r1)
  stw       r28, 0x80(r1)
  lfs       f0, -0x2AB0(r2)
  mr        r30, r4
  lfs       f1, 0x200(r4)
  mr        r28, r3
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x84
  lwz       r12, 0x0(r3)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x418

.loc_0x84:
  lwz       r7, 0xC0(r30)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r7)
  li        r6, 0
  lfs       f2, 0x3D4(r7)
  bl        -0x179AB8
  mr.       r29, r3
  beq-      .loc_0x3D4
  mr        r4, r29
  lwz       r5, 0xC0(r30)
  lwz       r12, 0x0(r29)
  addi      r3, r1, 0x50
  lfs       f29, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x5C
  lwz       r12, 0x0(r30)
  lfs       f26, 0x50(r1)
  lwz       r12, 0x8(r12)
  lfs       f27, 0x58(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x5C(r1)
  lis       r3, 0x8051
  lfs       f0, 0x64(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f26, f1
  fsubs     f2, f27, f0
  bl        -0x257A68
  bl        0x18505C
  lwz       r12, 0x0(r30)
  fmr       f26, f1
  mr        r3, r30
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x185064
  fmr       f31, f1
  lfs       f0, -0x2AA4(r2)
  lfs       f1, -0x2AA8(r2)
  fmuls     f0, f0, f29
  fmuls     f28, f31, f30
  fmuls     f1, f1, f0
  fabs      f0, f28
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x174
  lfs       f0, -0x2AB0(r2)
  fcmpo     cr0, f28, f0
  ble-      .loc_0x170
  fmr       f28, f1
  b         .loc_0x174

.loc_0x170:
  fneg      f28, f1

.loc_0x174:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f28, f1
  bl        0x184FDC
  stfs      f1, 0x1FC(r30)
  fabs      f2, f31
  lfs       f0, -0x2AA4(r2)
  lfs       f3, 0x1FC(r30)
  lfs       f1, -0x2AA8(r2)
  frsp      f2, f2
  stfs      f3, 0x1A8(r30)
  lwz       r4, 0xC0(r30)
  lfs       f3, 0x58C(r4)
  fmuls     f0, f0, f3
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x234
  mr        r3, r30
  lfs       f29, 0x2E4(r4)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  bl        -0x1BD42C
  mr        r3, r30
  lfs       f2, 0x1D4(r30)
  lwz       r12, 0x0(r30)
  frsp      f26, f1
  lfs       f30, 0x1D8(r30)
  lfs       f0, 0x1DC(r30)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x74(r1)
  stfs      f30, 0x78(r1)
  stfs      f0, 0x7C(r1)
  mtctr     r12
  bctrl     
  bl        -0x1BD9C8
  fmuls     f0, f29, f26
  frsp      f1, f1
  stfs      f0, 0x1D4(r30)
  fmuls     f0, f29, f1
  stfs      f30, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)
  b         .loc_0x2A4

.loc_0x234:
  mr        r3, r30
  lfs       f1, -0x2AA0(r2)
  lwz       r12, 0x0(r30)
  lfs       f0, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  fmuls     f29, f1, f0
  mtctr     r12
  bctrl     
  bl        -0x1BD4A0
  mr        r3, r30
  lfs       f2, 0x1D4(r30)
  lwz       r12, 0x0(r30)
  frsp      f26, f1
  lfs       f30, 0x1D8(r30)
  lfs       f0, 0x1DC(r30)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x68(r1)
  stfs      f30, 0x6C(r1)
  stfs      f0, 0x70(r1)
  mtctr     r12
  bctrl     
  bl        -0x1BDA3C
  fmuls     f0, f29, f26
  frsp      f1, f1
  stfs      f0, 0x1D4(r30)
  fmuls     f0, f29, f1
  stfs      f30, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)

.loc_0x2A4:
  mr        r4, r30
  lwz       r5, 0xC0(r30)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x14
  lfs       f28, 0x58C(r5)
  li        r31, 0
  lwz       r12, 0x8(r12)
  lfs       f29, 0x564(r5)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lfs       f30, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x2C
  fsubs     f26, f0, f30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r29)
  lfs       f30, 0x30(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  lfs       f0, 0x24(r1)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x44
  fsubs     f27, f0, f30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r29)
  lfs       f30, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f27, f27
  lfs       f2, 0x40(r1)
  fmuls     f0, f29, f29
  fsubs     f2, f2, f30
  fmadds    f1, f26, f26, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3A8
  lfs       f0, -0x2AA4(r2)
  fabs      f2, f31
  lfs       f1, -0x2AA8(r2)
  fmuls     f0, f0, f28
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x3A8
  li        r31, 0x1

.loc_0x3A8:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x3DC
  mr        r3, r28
  mr        r4, r30
  lwz       r12, 0x0(r28)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3DC

.loc_0x3D4:
  mr        r3, r30
  bl        0xD08

.loc_0x3DC:
  lwz       r3, 0x188(r30)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x418
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x418
  mr        r3, r28
  mr        r4, r30
  lwz       r12, 0x0(r28)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x418:
  psq_l     f31,0xE8(r1),0,0
  lfd       f31, 0xE0(r1)
  psq_l     f30,0xD8(r1),0,0
  lfd       f30, 0xD0(r1)
  psq_l     f29,0xC8(r1),0,0
  lfd       f29, 0xC0(r1)
  psq_l     f28,0xB8(r1),0,0
  lfd       f28, 0xB0(r1)
  psq_l     f27,0xA8(r1),0,0
  lfd       f27, 0xA0(r1)
  psq_l     f26,0x98(r1),0,0
  lfd       f26, 0x90(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  lwz       r29, 0x84(r1)
  lwz       r0, 0xF4(r1)
  lwz       r28, 0x80(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}

/*
 * --INFO--
 * Address:	8028CED0
 * Size:	000004
 */
void cleanup__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8028CED4
 * Size:	000050
 */
void init__Q34Game4Baby11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x2AB0(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x18B530
  mr        r3, r31
  li        r4, 0x3
  li        r5, 0
  bl        -0x187F08
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028CF24
 * Size:	000104
 */
void exec__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r5, 0x188(r4)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0xF0
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x2
  bne-      .loc_0x80
  lwz       r6, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x5B4(r6)
  lfs       f2, 0x5DC(r6)
  lfs       f3, 0x604(r6)
  bl        -0x178D10
  mr        r3, r31
  li        r4, 0
  bl        -0x179448
  mr        r3, r31
  bl        0xAA0
  cmpwi     r3, 0
  bne-      .loc_0xF0
  mr        r3, r31
  li        r4, 0x4
  li        r5, 0
  bl        -0x187F98
  b         .loc_0xF0

.loc_0x80:
  cmplwi    r0, 0x3
  bne-      .loc_0xA0
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f1, 0x81C(r5)
  bl        -0x179138
  b         .loc_0xF0

.loc_0xA0:
  cmplwi    r0, 0x3E8
  bne-      .loc_0xF0
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2AB0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xD8
  lwz       r12, 0x0(r3)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xF0

.loc_0xD8:
  lwz       r12, 0x0(r3)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xF0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8028D028
 * Size:	000024
 */
void cleanup__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x18B6BC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}