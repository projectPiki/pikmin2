

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
 * Address:	802996A0
 * Size:	000154
 */
void __ct__Q34Game10KumaChappy3ObjFv(void)
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
  addi      r0, r31, 0x2F8
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2F8(r31)
  stw       r0, 0x2FC(r31)
  stw       r0, 0x300(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x198348
  lis       r3, 0x804D
  addi      r0, r31, 0x2F8
  subi      r5, r3, 0x4360
  addi      r3, r31, 0x2C0
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x308
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x16F3CC
  addi      r3, r31, 0x2D8
  bl        -0x1611E0
  li        r3, 0x2C
  bl        -0x27588C
  mr.       r30, r3
  beq-      .loc_0xDC
  bl        -0x171DC8
  lis       r3, 0x804D
  lis       r4, 0x804B
  subi      r0, r3, 0x4488
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

.loc_0xDC:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x2758E0
  mr.       r4, r3
  beq-      .loc_0x110
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  subi      r0, r3, 0x44B0
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x110:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2FC(r12)
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
 * Address:	802997F4
 * Size:	000004
 */
void setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802997F8
 * Size:	00007C
 */
void onInit__Q34Game10KumaChappy3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x197DB4
  lwz       r4, 0x1E0(r31)
  li        r0, -0x1
  lfs       f0, -0x27F8(r2)
  mr        r3, r31
  rlwinm    r4,r4,0,26,24
  stw       r4, 0x1E0(r31)
  stfs      f0, 0x2C8(r31)
  stfs      f0, 0x2D0(r31)
  stw       r0, 0x2D4(r31)
  bl        0x6BC
  mr        r3, r31
  bl        0x6C4
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x6
  li        r6, 0
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
 * Address:	80299874
 * Size:	000060
 */
void doUpdate__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x2C8(r3)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x2C8(r3)
  bl        0x9E0
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x2D8
  bl        -0x161290
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802998D4
 * Size:	000004
 */
void doDirectDraw__Q34Game10KumaChappy3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802998D8
 * Size:	000020
 */
void doDebugDraw__Q34Game10KumaChappy3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x193A78
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802998F8
 * Size:	00004C
 */
void setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x2BC(r3)
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x2B4(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80299944
 * Size:	0000C4
 */
void getShadowParam__Q34Game10KumaChappy3ObjFRQ24Game11ShadowParam(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  subi      r4, r2, 0x27F4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x174(r3)
  bl        0x1A567C
  bl        0x18FF34
  lfs       f4, 0x2C(r3)
  lfs       f3, 0x1C(r3)
  lfs       f1, 0xC(r3)
  lfs       f0, -0x27F0(r2)
  stfs      f1, 0x0(r31)
  lfs       f2, -0x27EC(r2)
  stfs      f3, 0x4(r31)
  stfs      f4, 0x8(r31)
  lfs       f1, 0x4(r31)
  fsubs     f0, f1, f0
  stfs      f0, 0x4(r31)
  lfs       f1, 0x190(r30)
  lfs       f0, 0x4(r31)
  fadds     f1, f2, f1
  fcmpo     cr0, f0, f1
  bge-      .loc_0x70
  stfs      f1, 0x4(r31)

.loc_0x70:
  lfs       f1, -0x27F8(r2)
  lfs       f0, -0x27E8(r2)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x9C
  lfs       f0, -0x27E4(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0xA4

.loc_0x9C:
  lfs       f0, -0x27E0(r2)
  stfs      f0, 0x18(r31)

.loc_0xA4:
  lfs       f0, -0x27DC(r2)
  stfs      f0, 0x1C(r31)
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
 * Address:	80299A08
 * Size:	000038
 */
void damageCallBack__Q34Game10KumaChappy3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  bne-      .loc_0x1C
  lfs       f0, -0x27D8(r2)
  fmuls     f1, f1, f0

.loc_0x1C:
  lfs       f2, -0x27E8(r2)
  bl        -0x1939FC
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80299A40
 * Size:	000028
 */
void startCarcassMotion__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x4
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x194A50
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80299A68
 * Size:	0000A8
 */
void getOffsetForMapCollision__Q34Game10KumaChappy3ObjFv(void)
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
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  lis       r3, 0x8051
  lfsu      f0, 0x41E4(r3)
  stfs      f0, 0x0(r30)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x4(r30)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x8(r30)
  b         .loc_0x90

.loc_0x58:
  lwz       r3, 0x174(r31)
  subi      r4, r2, 0x27F4
  bl        0x1A551C
  bl        0x18FDD4
  lfs       f2, 0xC(r3)
  lfs       f0, 0x18C(r31)
  lfs       f3, 0x2C(r3)
  lfs       f1, 0x194(r31)
  fsubs     f2, f2, f0
  lfs       f0, -0x27F8(r2)
  fsubs     f3, f3, f1
  stfs      f2, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f3, 0x8(r30)

.loc_0x90:
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
 * Address:	80299B10
 * Size:	0000DC
 */
void initMouthSlots__Q34Game10KumaChappy3ObjFv(void)
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
  li        r4, 0x5
  addi      r3, r30, 0x2D8
  bl        -0x1615E0
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D8
  li        r4, 0
  subi      r6, r2, 0x27D4
  bl        -0x1614BC
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D8
  li        r4, 0x1
  subi      r6, r2, 0x27CC
  bl        -0x1614D0
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D8
  li        r4, 0x2
  subi      r6, r2, 0x27C4
  bl        -0x1614E4
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D8
  li        r4, 0x3
  subi      r6, r2, 0x27BC
  bl        -0x1614F8
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D8
  li        r4, 0x4
  subi      r6, r2, 0x27B4
  bl        -0x16150C
  lfs       f31, -0x27AC(r2)
  li        r31, 0
  b         .loc_0xB0

.loc_0x9C:
  mr        r4, r31
  addi      r3, r30, 0x2D8
  bl        -0x16143C
  stfs      f31, 0x1C(r3)
  addi      r31, r31, 0x1

.loc_0xB0:
  lwz       r0, 0x2D8(r30)
  cmpw      r31, r0
  blt+      .loc_0x9C
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
 * Address:	80299BEC
 * Size:	000064
 */
void initWalkSmokeEffect__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x2C0
  bl        -0x16F8A4
  lwz       r5, 0x174(r31)
  addi      r3, r31, 0x2C0
  lfs       f1, -0x27A0(r2)
  li        r4, 0
  subi      r6, r2, 0x27A8
  bl        -0x16F640
  lwz       r5, 0x174(r31)
  addi      r3, r31, 0x2C0
  lfs       f1, -0x27A0(r2)
  li        r4, 0x1
  subi      r6, r2, 0x279C
  bl        -0x16F658
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80299C50
 * Size:	000008
 */
void getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2C0
  blr
*/
}

/*
 * --INFO--
 * Address:	80299C58
 * Size:	000014
 */
void doBecomeCarcass__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f0, -0x27F8(r2)
  stfs      f0, 0x2C8(r3)
  stfs      f0, 0x200(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80299C6C
 * Size:	0001FC
 */
void doUpdateCarcass__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lwz       r3, 0x17C(r3)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2C8(r31)
  lfs       f0, 0x844(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x9C
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2C8(r31)
  lwz       r3, -0x6DF8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x1D8
  lwz       r4, 0xC0(r31)
  lfs       f1, 0x2C8(r31)
  lfs       f0, 0x844(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1D8
  lfs       f1, -0x27F8(r2)
  mr        r4, r31
  bl        -0x17F26C
  b         .loc_0x1D8

.loc_0x9C:
  lfs       f2, 0x200(r31)
  lfs       f1, 0x204(r31)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x1D8
  lfs       f0, 0x86C(r3)
  lwz       r3, -0x6514(r13)
  fdivs     f1, f1, f0
  lfs       f0, 0x54(r3)
  fmadds    f0, f1, f0, f2
  stfs      f0, 0x200(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x204(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1D8
  lwz       r3, 0x17C(r31)
  li        r4, 0
  lwz       r3, 0x4(r3)
  bl        -0x15EC60
  lfs       f31, 0x140(r31)
  addi      r3, r1, 0x8
  lfs       f30, 0x160(r31)
  bl        -0x16B13C
  lfs       f0, 0x18C(r31)
  lis       r3, 0x8051
  fmr       f1, f31
  subi      r3, r3, 0x2E20
  stfs      f0, 0x8(r1)
  fmr       f2, f30
  lfs       f0, 0x190(r31)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x194(r31)
  stfs      f0, 0x10(r1)
  bl        -0x264C84
  stfs      f1, 0x14(r1)
  mr        r3, r31
  lfs       f0, 0x2AC(r31)
  stfs      f0, 0x34(r1)
  lbz       r4, 0x1F3(r31)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x38(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, -0x6E20(r13)
  addi      r5, r1, 0x8
  bl        -0x18C910
  cmplwi    r3, 0
  beq-      .loc_0x1D8
  li        r4, 0
  bl        -0x15EE18
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D8

.loc_0x19C:
  lwz       r0, -0x6DF8(r13)
  cmplwi    r0, 0
  beq-      .loc_0x1D8
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2C8(r31)
  lfs       f0, 0x844(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1D8
  lfs       f0, -0x27F8(r2)
  mr        r4, r31
  stfs      f0, 0x2C8(r31)
  stfs      f0, 0x200(r31)
  lwz       r3, -0x6DF8(r13)
  bl        -0x17F2C8

.loc_0x1D8:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  lwz       r0, 0x74(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80299E68
 * Size:	000064
 */
void doGetLifeGaugeParam__Q34Game10KumaChappy3ObjFRQ24Game14LifeGaugeParam(void)
{
/*
.loc_0x0:
  lfs       f0, 0x18C(r3)
  stfs      f0, 0x0(r4)
  lwz       r5, 0x17C(r3)
  lwz       r0, 0x4(r5)
  cmplwi    r0, 0
  beq-      .loc_0x2C
  lfs       f1, -0x2794(r2)
  lfs       f0, 0x190(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r4)
  b         .loc_0x40

.loc_0x2C:
  lwz       r5, 0xC0(r3)
  lfs       f1, 0x190(r3)
  lfs       f0, 0x12C(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r4)

.loc_0x40:
  lfs       f1, 0x194(r3)
  lfs       f0, -0x27A0(r2)
  stfs      f1, 0x8(r4)
  lfs       f2, 0x200(r3)
  lfs       f1, 0x204(r3)
  fdivs     f1, f2, f1
  stfs      f1, 0xC(r4)
  stfs      f0, 0x10(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80299ECC
 * Size:	000024
 */
void getViewAngle__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x2C8(r3)
  lfs       f0, 0x62C(r4)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1C
  lfs       f1, -0x2790(r2)
  blr       

.loc_0x1C:
  lfs       f1, 0x424(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80299EF0
 * Size:	000010
 */
void resetWayPoint__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x2EC(r3)
  stw       r0, 0x2F0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80299F00
 * Size:	0000B0
 */
void setNearestWayPoint__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f0, -0x27A0(r2)
  stw       r0, 0x34(r1)
  li        r0, 0
  addi      r4, r1, 0x8
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r3, 0x2EC(r3)
  stw       r3, 0x2F0(r31)
  lfs       f1, 0x18C(r31)
  lwz       r3, -0x6CF8(r13)
  stfs      f1, 0x8(r1)
  lfs       f1, 0x190(r31)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x194(r31)
  stfs      f1, 0x10(r1)
  stw       r0, 0x14(r1)
  stb       r0, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x8(r3)
  bl        -0x126F90
  stw       r3, 0x2EC(r31)
  lwz       r3, 0x2EC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x84
  lfs       f1, 0x50(r3)
  lfs       f2, 0x54(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x2E0(r31)
  stfs      f1, 0x2E4(r31)
  stfs      f2, 0x2E8(r31)
  b         .loc_0x9C

.loc_0x84:
  lfs       f0, 0x198(r31)
  stfs      f0, 0x2E0(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2E4(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2E8(r31)

.loc_0x9C:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80299FB0
 * Size:	000260
 */
void setLinkWayPoint__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  mr        r31, r3
  stw       r30, 0x78(r1)
  stw       r29, 0x74(r1)
  stw       r28, 0x70(r1)
  lwz       r4, 0x2EC(r3)
  cmplwi    r4, 0
  beq-      .loc_0x1B8
  lwz       r3, 0x2F0(r31)
  li        r29, 0
  li        r28, -0x1
  cmplwi    r3, 0
  beq-      .loc_0x44
  lha       r28, 0x36(r3)

.loc_0x44:
  addi      r3, r1, 0x8
  li        r5, 0x1
  bl        -0x127ADC
  addi      r3, r1, 0x8
  bl        -0x127AD0
  addi      r30, r1, 0x2C
  b         .loc_0xB8

.loc_0x60:
  addi      r3, r1, 0x8
  bl        -0x127A50
  extsh     r0, r3
  cmpw      r0, r28
  beq-      .loc_0xB0
  lwz       r5, -0x6CF8(r13)
  mr        r4, r3
  lwz       r3, 0x8(r5)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lbz       r0, 0x34(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0xB0
  stw       r3, 0x0(r30)
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0xB0:
  addi      r3, r1, 0x8
  bl        -0x127B08

.loc_0xB8:
  addi      r3, r1, 0x8
  bl        -0x127AE4
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  cmpwi     r29, 0
  beq-      .loc_0x154
  lwz       r0, 0x2EC(r31)
  stw       r0, 0x2F0(r31)
  bl        -0x1D0AE8
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0x54(r1)
  xoris     r0, r29, 0x8000
  lfd       f2, -0x2788(r2)
  addi      r3, r1, 0x2C
  stw       r4, 0x50(r1)
  lfs       f0, -0x278C(r2)
  lfd       f1, 0x50(r1)
  stw       r0, 0x5C(r1)
  fsubs     f1, f1, f2
  stw       r4, 0x58(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0x58(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x60(r1)
  lwz       r0, 0x64(r1)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  stw       r0, 0x2EC(r31)
  lwz       r3, 0x2EC(r31)
  lfs       f1, 0x50(r3)
  lfs       f2, 0x54(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x2E0(r31)
  stfs      f1, 0x2E4(r31)
  stfs      f2, 0x2E8(r31)
  b         .loc_0x240

.loc_0x154:
  cmpwi     r28, 0
  blt-      .loc_0x1B8
  lwz       r3, -0x6CF8(r13)
  extsh     r4, r28
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x1B8
  lbz       r0, 0x34(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x1B8
  lwz       r0, 0x2EC(r31)
  stw       r0, 0x2F0(r31)
  stw       r3, 0x2EC(r31)
  lwz       r3, 0x2EC(r31)
  lfs       f1, 0x50(r3)
  lfs       f2, 0x54(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x2E0(r31)
  stfs      f1, 0x2E4(r31)
  stfs      f2, 0x2E8(r31)
  b         .loc_0x240

.loc_0x1B8:
  lwz       r3, 0x2EC(r31)
  li        r0, 0
  lfs       f0, -0x27A0(r2)
  addi      r4, r1, 0x14
  stw       r3, 0x2F0(r31)
  lfs       f1, 0x18C(r31)
  lwz       r3, -0x6CF8(r13)
  stfs      f1, 0x14(r1)
  lfs       f1, 0x190(r31)
  stfs      f1, 0x18(r1)
  lfs       f1, 0x194(r31)
  stfs      f1, 0x1C(r1)
  stw       r0, 0x20(r1)
  stb       r0, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r3, 0x8(r3)
  bl        -0x1271E4
  stw       r3, 0x2EC(r31)
  lwz       r3, 0x2EC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x228
  lfs       f1, 0x50(r3)
  lfs       f2, 0x54(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x2E0(r31)
  stfs      f1, 0x2E4(r31)
  stfs      f2, 0x2E8(r31)
  b         .loc_0x240

.loc_0x228:
  lfs       f0, 0x198(r31)
  stfs      f0, 0x2E0(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2E4(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2E8(r31)

.loc_0x240:
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  lwz       r28, 0x70(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A210
 * Size:	00006C
 */
void getSearchedTarget__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x2C8(r3)
  lfs       f0, 0x62C(r4)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x30
  lfs       f1, -0x2790(r2)
  b         .loc_0x34

.loc_0x30:
  lfs       f1, 0x424(r4)

.loc_0x34:
  lfs       f2, 0x3D4(r4)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  bl        -0x187204
  cmplwi    r3, 0
  beq-      .loc_0x58
  lfs       f0, -0x27F8(r2)
  stfs      f0, 0x2C8(r31)

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A27C
 * Size:	000128
 */
void updateTargetDistance__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r3, 0x2EC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lfs       f0, 0x58(r3)
  b         .loc_0x30

.loc_0x28:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x384(r3)

.loc_0x30:
  lfs       f2, 0x194(r31)
  fmuls     f0, f0, f0
  lfs       f1, 0x2E8(r31)
  lfs       f3, 0x18C(r31)
  fsubs     f2, f2, f1
  lfs       f1, 0x2E0(r31)
  fsubs     f3, f3, f1
  fmuls     f1, f2, f2
  fmadds    f1, f3, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x6C
  mr        r3, r31
  bl        -0x32C
  lfs       f0, -0x27F8(r2)
  stfs      f0, 0x2D0(r31)

.loc_0x6C:
  lfs       f1, 0x2D0(r31)
  lfs       f0, -0x27EC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x114
  lfs       f1, -0x27F8(r2)
  li        r0, 0
  lfs       f0, -0x27A0(r2)
  addi      r4, r1, 0x8
  stfs      f1, 0x2D0(r31)
  lwz       r3, 0x2EC(r31)
  stw       r3, 0x2F0(r31)
  lfs       f1, 0x18C(r31)
  lwz       r3, -0x6CF8(r13)
  stfs      f1, 0x8(r1)
  lfs       f1, 0x190(r31)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x194(r31)
  stfs      f1, 0x10(r1)
  stw       r0, 0x14(r1)
  stb       r0, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x8(r3)
  bl        -0x12737C
  stw       r3, 0x2EC(r31)
  lwz       r3, 0x2EC(r31)
  cmplwi    r3, 0
  beq-      .loc_0xF4
  lfs       f1, 0x50(r3)
  lfs       f2, 0x54(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x2E0(r31)
  stfs      f1, 0x2E4(r31)
  stfs      f2, 0x2E8(r31)
  b         .loc_0x10C

.loc_0xF4:
  lfs       f0, 0x198(r31)
  stfs      f0, 0x2E0(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2E4(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2E8(r31)

.loc_0x10C:
  mr        r3, r31
  bl        .loc_0x128

.loc_0x114:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x128:
*/
}

/*
 * --INFO--
 * Address:	8029A3A4
 * Size:	0000BC
 */
void updateHomePosition__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lfs       f0, -0x27F8(r2)
  lfs       f5, 0x1FC(r3)
  fmr       f1, f5
  fcmpo     cr0, f5, f0
  bge-      .loc_0x1C
  fneg      f1, f5

.loc_0x1C:
  lfs       f3, -0x2780(r2)
  lis       r5, 0x8050
  lfs       f0, -0x27F8(r2)
  addi      r5, r5, 0x71A0
  fmuls     f2, f1, f3
  lwz       r4, 0xC0(r3)
  fcmpo     cr0, f5, f0
  lfs       f1, 0x194(r3)
  lfs       f6, 0x384(r4)
  fctiwz    f0, f2
  lfs       f2, 0x190(r3)
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  add       r4, r5, r0
  lfs       f0, 0x4(r4)
  fmadds    f4, f0, f6, f1
  bge-      .loc_0x88
  lfs       f0, -0x277C(r2)
  fmuls     f0, f5, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r5, r0
  fneg      f1, f0
  b         .loc_0xA0

.loc_0x88:
  fmuls     f0, f5, f3
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r5, r0

.loc_0xA0:
  lfs       f0, 0x18C(r3)
  fmadds    f0, f1, f6, f0
  stfs      f0, 0x198(r3)
  stfs      f2, 0x19C(r3)
  stfs      f4, 0x1A0(r3)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A460
 * Size:	000070
 */
void createChappyRelation__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x1C
  bl        -0x2765D8
  mr.       r31, r3
  beq-      .loc_0x3C
  bl        0x176F08
  lis       r3, 0x804D
  subi      r0, r3, 0x4370
  stw       r0, 0x0(r31)
  stw       r30, 0x18(r31)

.loc_0x3C:
  stw       r31, 0x2F4(r30)
  li        r0, 0
  lwz       r3, 0x2F4(r30)
  stw       r0, 0x10(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0x4(r3)
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
 * Address:	8029A4D0
 * Size:	00007C
 */
void startEnemyRumble__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  subi      r4, r2, 0x27F4
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x1A4AF8
  bl        0x18F3B0
  lfs       f2, 0x2C(r3)
  addi      r5, r1, 0x8
  lfs       f1, 0x1C(r3)
  li        r4, 0xB
  lfs       f0, 0xC(r3)
  li        r6, 0x2
  lwz       r3, -0x6958(r13)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  lfs       f0, 0x190(r31)
  stfs      f0, 0xC(r1)
  bl        -0x46DA4
  lfs       f1, -0x2778(r2)
  mr        r3, r31
  addi      r4, r1, 0x8
  bl        -0x1969E4
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A54C
 * Size:	000060
 */
void __dt__Q24Game14ChappyRelationFv(void)
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
  beq-      .loc_0x44
  lis       r5, 0x804D
  li        r4, 0
  subi      r0, r5, 0x4370
  stw       r0, 0x0(r30)
  bl        0x17700C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2764D8

.loc_0x44:
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
 * Address:	8029A5AC
 * Size:	000008
 */
void getMouthSlots__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2D8
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A5B4
 * Size:	000008
 */
void getDownSmokeScale__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x27E8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A5BC
 * Size:	000008
 */
void getChappyRelation__Q34Game10KumaChappy3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x2F4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8029A5C4
 * Size:	000014
 */
void @760@12@viewOnPelletKilled__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2F8
  b         -0x193CB8
*/
}

/*
 * --INFO--
 * Address:	8029A5D8
 * Size:	000014
 */
void @760@12@viewStartCarryMotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2F8
  b         -0x193F40
*/
}

/*
 * --INFO--
 * Address:	8029A5EC
 * Size:	000014
 */
void @760@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2F8
  b         -0x193F34
*/
}

/*
 * --INFO--
 * Address:	8029A600
 * Size:	000014
 */
void @760@12@view_finish_carrymotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2F8
  b         -0x193B98
*/
}

/*
 * --INFO--
 * Address:	8029A614
 * Size:	000014
 */
void @760@12@view_start_carrymotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2F8
  b         -0x193BD8
*/
}

/*
 * --INFO--
 * Address:	8029A628
 * Size:	000014
 */
void @760@12@viewGetShape__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2F8
  b         -0x193F98
*/
}