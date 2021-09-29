

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
 * Address:	8012DAE8
 * Size:	000148
 */
void __ct__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  beq-      .loc_0x40
  addi      r0, r31, 0x2D8
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2D8(r31)
  stw       r0, 0x2DC(r31)
  stw       r0, 0x2E0(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x2C790
  lis       r3, 0x804B
  addi      r4, r31, 0x2D8
  subi      r3, r3, 0xB20
  li        r0, 0
  stw       r3, 0x0(r31)
  addi      r5, r3, 0x1B0
  addi      r6, r3, 0x308
  addi      r3, r31, 0x2C0
  stw       r5, 0x178(r31)
  lwz       r5, 0x17C(r31)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r31)
  sub       r4, r4, r5
  stw       r4, 0xC(r5)
  stw       r0, 0x2BC(r31)
  bl        0xA9D8
  addi      r3, r31, 0x2D0
  bl        -0x3824
  li        r3, 0x2C
  bl        -0x109CDC
  mr.       r30, r3
  beq-      .loc_0xE4
  bl        -0x6218
  lis       r3, 0x804B
  lis       r4, 0x804B
  subi      r0, r3, 0x49D8
  lis       r3, 0x804F
  stw       r0, 0x0(r30)
  subi      r4, r4, 0x4678
  subi      r3, r3, 0x4200
  li        r0, 0
  stw       r4, 0x10(r30)
  stw       r3, 0x10(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x1C(r30)
  stw       r0, 0x14(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x20(r30)

.loc_0xE4:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x109D30
  mr.       r4, r3
  beq-      .loc_0x118
  lis       r5, 0x804B
  lis       r3, 0x804B
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  subi      r0, r3, 0x44D0
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x118:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8012DC30
 * Size:	000068
 */
void birth__Q34Game12KochappyBase3ObjFR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2B244
  lwz       r3, 0x2BC(r31)
  lis       r6, 0x7261
  mr        r4, r31
  li        r5, 0
  lwz       r12, 0x0(r3)
  addi      r6, r6, 0x6E64
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r31)
  subi      r4, r2, 0x6280
  bl        0x311370
  stw       r3, 0x2C8(r31)
  lfs       f0, -0x627C(r2)
  stfs      f0, 0x2CC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DC98
 * Size:	000004
 */
void setInitialSetting__Q34Game12KochappyBase3ObjFPQ24Game21EnemyInitialParamBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DC9C
 * Size:	000068
 */
void onInit__Q34Game12KochappyBase3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2C258
  lwz       r3, 0x174(r31)
  subi      r4, r2, 0x6280
  bl        0x311328
  stw       r3, 0x2C8(r31)
  lis       r3, 0x7261
  lfs       f0, -0x627C(r2)
  mr        r4, r31
  addi      r6, r3, 0x6E64
  li        r5, 0
  stfs      f0, 0x2CC(r31)
  lwz       r3, 0x2BC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DD04
 * Size:	000088
 */
void doUpdate__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6B70(r13)
  li        r4, 0x23
  bl        0xB96A8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x74
  lis       r3, 0x8051
  lfsu      f0, 0x41E4(r3)
  stfs      f0, 0x1D4(r31)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x1D8(r31)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x1DC(r31)
  lfs       f0, 0x1D4(r31)
  stfs      f0, 0x1C8(r31)
  lfs       f0, 0x1D8(r31)
  stfs      f0, 0x1CC(r31)
  lfs       f0, 0x1DC(r31)
  stfs      f0, 0x1D0(r31)

.loc_0x74:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DD8C
 * Size:	000004
 */
void doDirectDraw__Q34Game12KochappyBase3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DD90
 * Size:	000020
 */
void doDebugDraw__Q34Game12KochappyBase3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x27F30
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DDB0
 * Size:	000088
 */
void getShadowParam__Q34Game12KochappyBase3ObjFRQ24Game11ShadowParam(void)
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
  lwz       r3, 0x2C8(r3)
  bl        0x2FBAD0
  lfs       f4, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  lfs       f5, -0x6278(r2)
  stfs      f0, 0x0(r31)
  lfs       f3, -0x627C(r2)
  stfs      f1, 0x4(r31)
  lfs       f2, -0x6274(r2)
  stfs      f4, 0x8(r31)
  lfs       f1, -0x6270(r2)
  lfs       f4, 0x190(r30)
  lfs       f0, -0x626C(r2)
  fadds     f4, f5, f4
  stfs      f4, 0x4(r31)
  stfs      f3, 0xC(r31)
  stfs      f2, 0x10(r31)
  stfs      f3, 0x14(r31)
  stfs      f1, 0x18(r31)
  stfs      f0, 0x1C(r31)
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
 * Address:	8012DE38
 * Size:	000040
 */
void bounceCallback__Q34Game12KochappyBase3ObjFPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x26A58
  cmpwi     r3, 0
  bne-      .loc_0x2C
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x400
  stw       r0, 0x1E0(r31)

.loc_0x2C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DE78
 * Size:	0000A0
 */
void pressCallBack__Q34Game12KochappyBase3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x80
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x8C

.loc_0x80:
  li        r3, 0
  b         .loc_0x8C

.loc_0x88:
  li        r3, 0

.loc_0x8C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DF18
 * Size:	000020
 */
void doStartStoneState__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2B030
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DF38
 * Size:	000004
 */
void doFinishStoneState__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DF3C
 * Size:	000064
 */
void getOffsetForMapCollision__Q34Game12KochappyBase3ObjFv(void)
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
  lwz       r3, 0x2C8(r4)
  bl        0x2FB944
  lfs       f2, 0xC(r3)
  lfs       f0, 0x18C(r31)
  lfs       f3, 0x2C(r3)
  lfs       f1, 0x194(r31)
  fsubs     f2, f2, f0
  lfs       f0, -0x627C(r2)
  fsubs     f3, f3, f1
  stfs      f2, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f3, 0x8(r30)
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
 * Address:	8012DFA0
 * Size:	000028
 */
void startCarcassMotion__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x5
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x28FB0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012DFC8
 * Size:	00008C
 */
void initMouthSlots__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r4, 0x1
  addi      r3, r30, 0x2C0
  bl        0xA568
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2C0
  li        r4, 0
  subi      r6, r2, 0x6268
  bl        0xA68C
  lfs       f31, -0x6260(r2)
  li        r31, 0
  b         .loc_0x60

.loc_0x4C:
  mr        r4, r31
  addi      r3, r30, 0x2C0
  bl        0xA75C
  stfs      f31, 0x1C(r3)
  addi      r31, r31, 0x1

.loc_0x60:
  lwz       r0, 0x2C0(r30)
  cmpw      r31, r0
  blt+      .loc_0x4C
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8012E054
 * Size:	00008C
 */
void initWalkSmokeEffect__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r4, r2, 0x625C
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x310F74
  cmplwi    r3, 0
  beq-      .loc_0x78
  lwz       r3, 0x174(r31)
  subi      r4, r2, 0x6254
  bl        0x310F60
  cmplwi    r3, 0
  beq-      .loc_0x78
  addi      r3, r31, 0x2D0
  li        r4, 0x2
  bl        -0x3D34
  lwz       r5, 0x174(r31)
  addi      r3, r31, 0x2D0
  lfs       f1, -0x624C(r2)
  li        r4, 0
  subi      r6, r2, 0x625C
  bl        -0x3AD0
  lwz       r5, 0x174(r31)
  addi      r3, r31, 0x2D0
  lfs       f1, -0x624C(r2)
  li        r4, 0x1
  subi      r6, r2, 0x6254
  bl        -0x3AE8

.loc_0x78:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012E0E0
 * Size:	000008
 */
void getWalkSmokeEffectMgr__Q34Game12KochappyBase3ObjFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2D0
  blr
*/
}