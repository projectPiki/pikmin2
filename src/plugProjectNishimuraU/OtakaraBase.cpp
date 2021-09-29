

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
 * Address:	802B624C
 * Size:	000130
 */
void __ct__Q34Game11OtakaraBase3ObjFv(void)
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
  addi      r0, r31, 0x2F4
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2F4(r31)
  stw       r0, 0x2F8(r31)
  stw       r0, 0x2FC(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x1B4EF4
  lis       r3, 0x804D
  addi      r0, r31, 0x2F4
  subi      r5, r3, 0xF7C
  li        r3, 0x2C
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x324
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x292428
  mr.       r30, r3
  beq-      .loc_0xCC
  bl        -0x18E964
  lis       r3, 0x804D
  lis       r4, 0x804B
  subi      r0, r3, 0x1098
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

.loc_0xCC:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x29247C
  mr.       r4, r3
  beq-      .loc_0x100
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  subi      r0, r3, 0x10BC
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x100:
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
 * Address:	802B637C
 * Size:	000004
 */
void setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6380
 * Size:	000104
 */
void onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B493C
  li        r0, -0x1
  lfs       f0, -0x20D0(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x2C4(r31)
  bl        0xCC4
  li        r0, 0
  lfs       f1, -0x20CC(r2)
  stb       r0, 0x2D0(r31)
  mr        r3, r31
  lfs       f0, -0x20D0(r2)
  stfs      f1, 0x2C8(r31)
  stfs      f0, 0x2CC(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x304(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5D
  bne-      .loc_0xC8
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,21,19
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,25,23
  stw       r0, 0x1E0(r31)
  lbz       r0, 0x2B0(r31)
  extsb.    r0, r0
  bne-      .loc_0xA4
  mr        r3, r31
  bl        0x1518

.loc_0xA4:
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0xB
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xF0

.loc_0xC8:
  lfs       f0, -0x20CC(r2)
  mr        r4, r31
  li        r5, 0x2
  li        r6, 0
  stfs      f0, 0x2E8(r31)
  lwz       r3, 0x2BC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
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
 * Address:	802B6484
 * Size:	000008
 */
void getEnemyTypeID__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0x3B
  blr
*/
}

/*
 * --INFO--
 * Address:	802B648C
 * Size:	000004
 */
void setupEffect__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6490
 * Size:	00005C
 */
void onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x1
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0xFAC
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  mr        r4, r31
  bl        -0x1B45E8
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
 * Address:	802B64EC
 * Size:	000034
 */
void doUpdate__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6520
 * Size:	0000F0
 */
void doUpdateCommon__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B3620
  lfs       f1, 0x2C8(r31)
  lfs       f0, -0x20C8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x54
  lwz       r4, -0x6514(r13)
  mr        r3, r31
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x2C8(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x320(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x1060

.loc_0x54:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5D
  bne-      .loc_0xDC
  lwz       r3, 0x230(r31)
  cmplwi    r3, 0
  beq-      .loc_0xD4
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA8
  li        r0, 0
  lfs       f0, -0x20D0(r2)
  stw       r0, 0x230(r31)
  stfs      f0, 0x200(r31)
  b         .loc_0xDC

.loc_0xA8:
  lwz       r3, 0x230(r31)
  bl        -0x117058
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xDC
  lwz       r3, 0x230(r31)
  bl        -0x116A40
  li        r0, 0
  lfs       f0, -0x20D0(r2)
  stw       r0, 0x230(r31)
  stfs      f0, 0x200(r31)
  b         .loc_0xDC

.loc_0xD4:
  lfs       f0, -0x20D0(r2)
  stfs      f0, 0x200(r31)

.loc_0xDC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6610
 * Size:	000004
 */
void startDisChargeSE__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6614
 * Size:	00007C
 */
void doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  bl        -0x1B35A8
  lwz       r3, 0x2E0(r31)
  cmplwi    r3, 0
  beq-      .loc_0x68
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4C
  mr        r3, r31
  li        r4, 0
  bl        0xE04
  b         .loc_0x68

.loc_0x4C:
  addi      r3, r1, 0x8
  bl        -0x1CC3C4
  lfs       f0, 0x2EC(r31)
  addi      r4, r1, 0x8
  stfs      f0, 0x24(r1)
  lwz       r3, 0x2E0(r31)
  bl        -0x116B7C

.loc_0x68:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6690
 * Size:	000004
 */
void doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6694
 * Size:	000020
 */
void doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1B0834
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B66B4
 * Size:	00004C
 */
void setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM(void)
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
 * Address:	802B6700
 * Size:	0000EC
 */
void getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  subi      r4, r2, 0x20C4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x174(r3)
  bl        0x1888C0
  bl        0x173178
  lfs       f4, 0x2C(r3)
  lfs       f3, 0x1C(r3)
  lfs       f0, 0xC(r3)
  lfs       f2, -0x20BC(r2)
  stfs      f0, 0x0(r31)
  lfs       f1, -0x20D0(r2)
  stfs      f3, 0x4(r31)
  lfs       f0, -0x20C8(r2)
  stfs      f4, 0x8(r31)
  lfs       f3, 0x4(r31)
  fsubs     f2, f3, f2
  stfs      f2, 0x4(r31)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  lwz       r0, 0x2E0(r30)
  cmplwi    r0, 0
  beq-      .loc_0x80
  lfs       f0, -0x20B8(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0x88

.loc_0x80:
  lfs       f0, -0x20B4(r2)
  stfs      f0, 0x18(r31)

.loc_0x88:
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xA4
  lfs       f1, 0x18(r31)
  lfs       f0, -0x20B0(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x18(r31)

.loc_0xA4:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5D
  bne-      .loc_0xCC
  lfs       f0, -0x20AC(r2)
  stfs      f0, 0x1C(r31)
  b         .loc_0xD4

.loc_0xCC:
  lfs       f0, -0x20BC(r2)
  stfs      f0, 0x1C(r31)

.loc_0xD4:
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
 * Address:	802B67EC
 * Size:	000034
 */
void damageCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x20
  bl        0xD7C
  li        r3, 0x1
  b         .loc_0x24

.loc_0x20:
  li        r3, 0

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6820
 * Size:	000078
 */
void hipdropCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  beq-      .loc_0x48
  lwz       r0, 0x2E0(r29)
  cmplwi    r0, 0
  beq-      .loc_0x44
  lwz       r4, 0xC0(r29)
  lfs       f1, 0x81C(r4)
  bl        0xD20
  b         .loc_0x48

.loc_0x44:
  bl        0xD18

.loc_0x48:
  lfs       f1, -0x20D0(r2)
  mr        r3, r29
  mr        r4, r30
  mr        r5, r31
  bl        -0x1B07B4
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6898
 * Size:	000070
 */
void earthquakeCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8Creaturef(void)
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
  fmr       f31, f1
  lwz       r0, 0x2E0(r3)
  mr        r31, r4
  cmplwi    r0, 0
  beq-      .loc_0x40
  lwz       r4, 0xC0(r30)
  lfs       f1, 0x81C(r4)
  bl        0xCA8

.loc_0x40:
  fmr       f1, f31
  mr        r3, r30
  mr        r4, r31
  bl        -0x1B0520
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
 * Address:	802B6908
 * Size:	000024
 */
void bombCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreatureR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0xC68
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B692C
 * Size:	00004C
 */
void doStartStoneState__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B3A4C
  mr        r3, r31
  li        r4, 0x1
  bl        0xB10
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30C(r12)
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
 * Address:	802B6978
 * Size:	00004C
 */
void doFinishStoneState__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B3A84
  lbz       r0, 0x2D0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x38
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x308(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B69C4
 * Size:	00004C
 */
void doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1AF10C
  mr        r3, r31
  li        r4, 0x1
  bl        0xA78
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30C(r12)
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
 * Address:	802B6A10
 * Size:	00004C
 */
void doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1AF0C4
  lbz       r0, 0x2D0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x38
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x308(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6A5C
 * Size:	00004C
 */
void doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1AF10C
  mr        r3, r31
  li        r4, 0x1
  bl        0x9E0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30C(r12)
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
 * Address:	802B6AA8
 * Size:	00004C
 */
void doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1AF154
  lbz       r0, 0x2D0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x38
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x308(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6AF4
 * Size:	000040
 */
void doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1AF170
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x318(r12)
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
 * Address:	802B6B34
 * Size:	000004
 */
void effectDrawOff__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6B38
 * Size:	000064
 */
void doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1AF184
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x314(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5D
  bne-      .loc_0x50
  mr        r3, r31
  bl        0xDB4

.loc_0x50:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6B9C
 * Size:	000004
 */
void effectDrawOn__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6BA0
 * Size:	000028
 */
void startCarcassMotion__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0xB
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x1B1BB0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6BC8
 * Size:	00002C
 */
void doStartMovie__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x318(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6BF4
 * Size:	00002C
 */
void doEndMovie__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x314(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6C20
 * Size:	000140
 */
void isMovePositionSet__Q34Game11OtakaraBase3ObjFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  rlwinm.   r0,r4,0,24,31
  stw       r31, 0x3C(r1)
  li        r31, 0
  stw       r30, 0x38(r1)
  mr        r30, r3
  bne-      .loc_0x44
  lwz       r4, 0xC0(r30)
  lfs       f1, 0x2E8(r30)
  lfs       f0, 0x894(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x44
  bl        .loc_0x140
  mr        r31, r3
  b         .loc_0x58

.loc_0x44:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x2E8(r30)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2E8(r30)

.loc_0x58:
  cmplwi    r31, 0
  beq-      .loc_0x98
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x14(r1)
  stfs      f0, 0x2D4(r30)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x2D8(r30)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x2DC(r30)
  stw       r31, 0x230(r30)
  b         .loc_0x114

.loc_0x98:
  lwz       r7, 0x2E0(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x43A0
  lis       r3, 0x804D
  stw       r0, 0x20(r1)
  subi      r0, r3, 0xF88
  mr        r3, r30
  addi      r6, r1, 0x20
  stw       r0, 0x20(r1)
  li        r4, 0
  li        r5, 0
  stw       r30, 0x24(r1)
  stw       r7, 0x28(r1)
  lwz       r7, 0xC0(r30)
  lfs       f1, 0x424(r7)
  lfs       f2, 0x3D4(r7)
  bl        -0x1A3CA8
  mr.       r31, r3
  beq-      .loc_0x10C
  mr        r4, r30
  mr        r5, r31
  addi      r3, r1, 0x8
  bl        0x198
  lfs       f0, 0x8(r1)
  stfs      f0, 0x2D4(r30)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x2D8(r30)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x2DC(r30)

.loc_0x10C:
  li        r0, 0
  stw       r0, 0x230(r30)

.loc_0x114:
  cmplwi    r31, 0
  beq-      .loc_0x124
  li        r3, 0x1
  b         .loc_0x128

.loc_0x124:
  li        r3, 0

.loc_0x128:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x140:
*/
}

/*
 * --INFO--
 * Address:	802B6D60
 * Size:	000148
 */
void getNearestTreasure__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  mr        r29, r3
  addi      r3, r1, 0x14
  lwz       r4, 0xC0(r29)
  li        r31, 0
  lfs       f0, 0x3D4(r4)
  fmuls     f31, f0, f0
  bl        -0x14A430
  addi      r3, r1, 0x14
  bl        -0x14A420
  b         .loc_0x110

.loc_0x48:
  addi      r3, r1, 0x14
  bl        -0x14A3E0
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x108
  lwz       r0, 0xB8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x108
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1E4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x108
  mr        r4, r30
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f4, 0x10(r1)
  lfs       f0, 0x1A0(r29)
  lwz       r3, 0xC0(r29)
  fsubs     f2, f4, f0
  lfs       f5, 0x8(r1)
  lfs       f1, 0x198(r29)
  lfs       f0, 0x35C(r3)
  fsubs     f3, f5, f1
  fmuls     f1, f2, f2
  fmuls     f0, f0, f0
  fmadds    f1, f3, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x108
  lfs       f0, 0x194(r29)
  lfs       f1, 0x18C(r29)
  fsubs     f0, f0, f4
  fsubs     f1, f1, f5
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0x108
  mr        r31, r30
  fmr       f31, f0

.loc_0x108:
  addi      r3, r1, 0x14
  bl        -0x14A438

.loc_0x110:
  addi      r3, r1, 0x14
  bl        -0x14A380
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x48
  mr        r3, r31
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6EA8
 * Size:	0001C8
 */
void getTargetPosition__Q34Game11OtakaraBase3ObjFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  lwz       r12, 0x0(r4)
  mr        r29, r3
  mr        r30, r4
  mr        r31, r5
  lwz       r12, 0x8(r12)
  addi      r3, r1, 0x14
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lfs       f30, 0x14(r1)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x18(r1)
  lfs       f29, 0x1C(r1)
  mtctr     r12
  bctrl     
  lfs       f0, 0x10(r1)
  lfs       f2, 0x8(r1)
  fsubs     f1, f29, f0
  lfs       f0, -0x20D0(r2)
  fsubs     f8, f30, f2
  lfs       f5, 0x198(r30)
  lfs       f6, 0x19C(r30)
  fmuls     f3, f1, f1
  fmadds    f2, f8, f8, f0
  lfs       f7, 0x1A0(r30)
  fadds     f3, f3, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0xB8
  ble-      .loc_0xBC
  fsqrte    f2, f3
  fmuls     f3, f2, f3
  b         .loc_0xBC

.loc_0xB8:
  fmr       f3, f0

.loc_0xBC:
  lfs       f2, -0x20D0(r2)
  fcmpo     cr0, f3, f2
  ble-      .loc_0xDC
  lfs       f2, -0x20C8(r2)
  fdivs     f2, f2, f3
  fmuls     f8, f8, f2
  fmuls     f0, f0, f2
  fmuls     f1, f1, f2

.loc_0xDC:
  lwz       r3, 0xC0(r30)
  lfs       f2, 0x2E4(r3)
  lfs       f9, 0x35C(r3)
  fmuls     f1, f1, f2
  fmuls     f8, f8, f2
  fmuls     f0, f0, f2
  fadds     f1, f1, f29
  fadds     f8, f8, f30
  fmuls     f2, f9, f9
  fsubs     f3, f1, f7
  fsubs     f4, f8, f5
  fadds     f0, f0, f31
  fmuls     f3, f3, f3
  fmadds    f3, f4, f4, f3
  fcmpo     cr0, f3, f2
  ble-      .loc_0x188
  fsubs     f1, f1, f7
  lfs       f0, -0x20D0(r2)
  fsubs     f8, f8, f5
  fmuls     f3, f1, f1
  fmadds    f2, f8, f8, f0
  fadds     f3, f3, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0x14C
  ble-      .loc_0x150
  fsqrte    f2, f3
  fmuls     f3, f2, f3
  b         .loc_0x150

.loc_0x14C:
  fmr       f3, f0

.loc_0x150:
  lfs       f2, -0x20D0(r2)
  fcmpo     cr0, f3, f2
  ble-      .loc_0x170
  lfs       f2, -0x20C8(r2)
  fdivs     f2, f2, f3
  fmuls     f8, f8, f2
  fmuls     f0, f0, f2
  fmuls     f1, f1, f2

.loc_0x170:
  fmuls     f8, f8, f9
  fmuls     f0, f0, f9
  fmuls     f1, f1, f9
  fadds     f8, f8, f5
  fadds     f0, f0, f6
  fadds     f1, f1, f7

.loc_0x188:
  stfs      f8, 0x0(r29)
  stfs      f0, 0x4(r29)
  stfs      f1, 0x8(r29)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r0, 0x64(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7070
 * Size:	000094
 */
void resetTreasure__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20D0(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x2E0(r3)
  lis       r3, 0x626F
  addi      r4, r3, 0x6479
  stfs      f0, 0x2E4(r31)
  stfs      f0, 0x2EC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x1CC(r3)
  stfs      f0, 0x2F0(r31)
  lwz       r3, 0x114(r31)
  bl        -0x18126C
  lfs       f0, -0x20A8(r2)
  li        r4, 0
  lfs       f2, -0x20D0(r2)
  stfs      f0, 0x1C(r3)
  lfs       f0, -0x20A4(r2)
  fmr       f3, f2
  stfs      f2, 0x24(r3)
  mr        r3, r31
  lfs       f1, -0x20C8(r2)
  lwz       r5, 0x114(r31)
  lfs       f4, -0x20A0(r2)
  lwz       r5, 0x0(r5)
  stfs      f0, 0x1C(r5)
  stfs      f2, 0x24(r5)
  bl        -0x1A3FD0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void setTreasure__Q34Game11OtakaraBase3ObjFPQ24Game8Creature(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802B7104
 * Size:	00010C
 */
void isTakeTreasure__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r31, 0x230(r3)
  cmplwi    r31, 0
  beq-      .loc_0xD8
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x8(r1)
  mr        r3, r31
  lfs       f30, 0xC(r1)
  lfs       f29, 0x10(r1)
  bl        -0x1507A0
  lfs       f2, -0x20A4(r2)
  lfs       f0, -0x20B4(r2)
  fadds     f5, f2, f1
  fcmpo     cr0, f5, f0
  bge-      .loc_0x80
  fmr       f5, f0

.loc_0x80:
  lfs       f0, 0x190(r30)
  lfs       f2, 0x18C(r30)
  fsubs     f3, f30, f0
  lfs       f1, 0x194(r30)
  fsubs     f2, f31, f2
  lfs       f0, -0x20D0(r2)
  fsubs     f1, f29, f1
  fmuls     f3, f3, f3
  fmuls     f4, f1, f1
  fmadds    f1, f2, f2, f3
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC4
  ble-      .loc_0xC8
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xC8

.loc_0xC4:
  fmr       f1, f0

.loc_0xC8:
  fcmpo     cr0, f1, f5
  bge-      .loc_0xD8
  li        r3, 0x1
  b         .loc_0xDC

.loc_0xD8:
  li        r3, 0

.loc_0xDC:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7210
 * Size:	00024C
 */
void takeTreasure__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r30, 0x230(r3)
  cmplwi    r30, 0
  beq-      .loc_0x214
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E4
  lwz       r0, 0xB8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1E4
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E4
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1E4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E4
  lwz       r31, 0x230(r29)
  cmplwi    r31, 0
  beq-      .loc_0x148
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x8(r1)
  mr        r3, r31
  lfs       f30, 0xC(r1)
  lfs       f29, 0x10(r1)
  bl        -0x15091C
  lfs       f2, -0x20A4(r2)
  lfs       f0, -0x20B4(r2)
  fadds     f3, f2, f1
  fcmpo     cr0, f3, f0
  bge-      .loc_0xF0
  fmr       f3, f0

.loc_0xF0:
  lfs       f0, 0x190(r29)
  lfs       f2, 0x18C(r29)
  fsubs     f4, f30, f0
  lfs       f1, 0x194(r29)
  fsubs     f2, f31, f2
  lfs       f0, -0x20D0(r2)
  fsubs     f1, f29, f1
  fmuls     f4, f4, f4
  fmuls     f5, f1, f1
  fmadds    f1, f2, f2, f4
  fadds     f1, f5, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x134
  ble-      .loc_0x138
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x138

.loc_0x134:
  fmr       f1, f0

.loc_0x138:
  fcmpo     cr0, f1, f3
  bge-      .loc_0x148
  li        r0, 0x1
  b         .loc_0x14C

.loc_0x148:
  li        r0, 0

.loc_0x14C:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x1E4
  stw       r30, 0x2E0(r29)
  mr        r3, r30
  lwz       r4, 0xC0(r29)
  lfs       f0, 0x81C(r4)
  stfs      f0, 0x2E4(r29)
  bl        -0x1509A4
  lfs       f0, -0x209C(r2)
  mr        r3, r30
  fmuls     f0, f0, f1
  stfs      f0, 0x2EC(r29)
  bl        -0x1509C4
  stfs      f1, 0x2F0(r29)
  lis       r3, 0x626F
  addi      r4, r3, 0x6479
  lwz       r3, 0x114(r29)
  bl        -0x18155C
  mr        r31, r3
  mr        r3, r30
  bl        -0x1509E4
  stfs      f1, 0x1C(r31)
  mr        r3, r30
  lfs       f0, 0x2EC(r29)
  stfs      f0, 0x24(r31)
  lwz       r4, 0x114(r29)
  lwz       r30, 0x0(r4)
  bl        -0x150A00
  lfs       f2, -0x20A8(r2)
  li        r0, 0x1
  fadds     f0, f2, f1
  stfs      f0, 0x1C(r30)
  lfs       f0, 0x2EC(r29)
  stfs      f0, 0x24(r30)
  lfs       f0, 0x2F0(r29)
  fadds     f0, f0, f2
  stfs      f0, 0x2F0(r29)
  b         .loc_0x1E8

.loc_0x1E4:
  li        r0, 0

.loc_0x1E8:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x214
  lwz       r3, 0x174(r29)
  subi      r4, r2, 0x20C4
  bl        0x187BDC
  bl        0x172494
  mr        r4, r3
  lwz       r3, 0x2E0(r29)
  bl        -0x117970
  li        r3, 0x1
  b         .loc_0x218

.loc_0x214:
  li        r3, 0

.loc_0x218:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r0, 0x64(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802B745C
 * Size:	0000F8
 */
void fallTreasure__Q34Game11OtakaraBase3ObjFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, 0x2E0(r3)
  cmplwi    r3, 0
  beq-      .loc_0xDC
  bl        -0x1178E8
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x60
  lfs       f1, -0x20D0(r2)
  addi      r4, r1, 0x8
  lfs       f0, -0x2098(r2)
  stfs      f1, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  lwz       r3, 0x2E0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  mr        r3, r30
  bl        0x2BC
  li        r0, 0
  lis       r3, 0x626F
  stw       r0, 0x2E0(r30)
  addi      r4, r3, 0x6479
  lfs       f0, -0x20D0(r2)
  stfs      f0, 0x2E4(r30)
  stfs      f0, 0x2EC(r30)
  lwz       r3, 0xC0(r30)
  lfs       f0, 0x1CC(r3)
  stfs      f0, 0x2F0(r30)
  lwz       r3, 0x114(r30)
  bl        -0x1816AC
  lfs       f0, -0x20A8(r2)
  li        r4, 0
  lfs       f2, -0x20D0(r2)
  stfs      f0, 0x1C(r3)
  lfs       f0, -0x20A4(r2)
  fmr       f3, f2
  stfs      f2, 0x24(r3)
  mr        r3, r30
  lfs       f1, -0x20C8(r2)
  lwz       r5, 0x114(r30)
  lfs       f4, -0x20A0(r2)
  lwz       r5, 0x0(r5)
  stfs      f0, 0x1C(r5)
  stfs      f2, 0x24(r5)
  bl        -0x1A4410
  li        r3, 0x1
  b         .loc_0xE0

.loc_0xDC:
  li        r3, 0

.loc_0xE0:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7554
 * Size:	000028
 */
void isDropTreasure__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x2E4(r3)
  lfs       f0, -0x20D0(r2)
  fcmpu     cr0, f1, f0
  beq-      .loc_0x20
  fcmpo     cr0, f1, f0
  ble-      .loc_0x20
  li        r3, 0
  blr       

.loc_0x20:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	802B757C
 * Size:	000054
 */
void damageTreasure__Q34Game11OtakaraBase3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x2E0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  lfs       f2, 0x2E4(r3)
  lfs       f0, -0x20D0(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x2E4(r3)
  lfs       f1, 0x2E4(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x44
  stfs      f0, 0x2E4(r3)
  b         .loc_0x44

.loc_0x3C:
  lfs       f2, -0x20C8(r2)
  bl        -0x1B1590

.loc_0x44:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B75D0
 * Size:	0001A8
 */
void attackTarget__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xD0(r1)
  mflr      r0
  stw       r0, 0xD4(r1)
  stfd      f31, 0xC0(r1)
  psq_st    f31,0xC8(r1),0,0
  stfd      f30, 0xB0(r1)
  psq_st    f30,0xB8(r1),0,0
  stfd      f29, 0xA0(r1)
  psq_st    f29,0xA8(r1),0,0
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  mr        r30, r3
  addi      r3, r1, 0x24
  lwz       r5, 0xC0(r30)
  addi      r4, r1, 0x14
  lfs       f2, 0x190(r30)
  lfs       f0, 0x564(r5)
  lfs       f1, 0x58C(r5)
  lfs       f3, 0x5B4(r5)
  fadds     f31, f2, f0
  lfs       f0, 0x18C(r30)
  fsubs     f30, f2, f1
  fmuls     f29, f3, f3
  stfs      f0, 0x14(r1)
  lfs       f0, 0x190(r30)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x194(r30)
  stfs      f0, 0x1C(r1)
  stfs      f3, 0x20(r1)
  bl        -0x892A4
  li        r0, 0x1
  addi      r3, r1, 0x44
  stb       r0, 0x40(r1)
  addi      r4, r1, 0x24
  bl        -0x89278
  addi      r3, r1, 0x44
  bl        -0x89204
  b         .loc_0x168

.loc_0x98:
  addi      r3, r1, 0x44
  bl        -0x89128
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xF4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160

.loc_0xF4:
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  lfs       f2, 0x8(r1)
  fcmpo     cr0, f31, f0
  lfs       f3, 0x10(r1)
  ble-      .loc_0x160
  fcmpo     cr0, f30, f0
  bge-      .loc_0x160
  lfs       f0, 0x194(r30)
  lfs       f1, 0x18C(r30)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x160
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x2FC(r12)
  mtctr     r12
  bctrl     

.loc_0x160:
  addi      r3, r1, 0x44
  bl        -0x89234

.loc_0x168:
  addi      r3, r1, 0x44
  bl        -0x89208
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x98
  psq_l     f31,0xC8(r1),0,0
  lfd       f31, 0xC0(r1)
  psq_l     f30,0xB8(r1),0,0
  lfd       f30, 0xB0(r1)
  psq_l     f29,0xA8(r1),0,0
  lfd       f29, 0xA0(r1)
  lwz       r31, 0x9C(r1)
  lwz       r0, 0xD4(r1)
  lwz       r30, 0x98(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7778
 * Size:	000004
 */
void interactCreature__Q34Game11OtakaraBase3ObjFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B777C
 * Size:	000134
 */
void createTreasureFallEffect__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  subi      r4, r2, 0x2094
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x18784C
  bl        0x172104
  lfs       f1, 0x2F0(r31)
  lfs       f0, -0x20A8(r2)
  lfs       f4, 0xC(r3)
  fsubs     f0, f1, f0
  lfs       f1, -0x208C(r2)
  lfs       f3, 0x1C(r3)
  lfs       f2, 0x2C(r3)
  fmuls     f5, f1, f0
  lfs       f0, -0x20C8(r2)
  stfs      f4, 0x20(r1)
  fcmpo     cr0, f5, f0
  stfs      f3, 0x24(r1)
  stfs      f2, 0x28(r1)
  bge-      .loc_0x68
  fadds     f0, f0, f5
  lfs       f1, -0x209C(r2)
  fmuls     f5, f1, f0

.loc_0x68:
  lwz       r4, 0x20(r1)
  lis       r3, 0x804B
  lwz       r6, 0x24(r1)
  subi      r0, r3, 0x5808
  lwz       r5, 0x28(r1)
  lis       r3, 0x804B
  stw       r4, 0x8(r1)
  lis       r4, 0x804E
  subi      r9, r3, 0x5814
  lis       r8, 0x804B
  stw       r6, 0xC(r1)
  lis       r3, 0x804E
  lfs       f2, 0x8(r1)
  li        r6, 0x27F
  stw       r5, 0x10(r1)
  li        r5, 0
  lfs       f1, 0xC(r1)
  addi      r7, r4, 0x6A78
  stw       r0, 0x14(r1)
  subi      r8, r8, 0x5D24
  lfs       f0, 0x10(r1)
  addi      r0, r3, 0x6E44
  stw       r9, 0x2C(r1)
  addi      r3, r1, 0x14
  addi      r4, r1, 0x2C
  stw       r7, 0x14(r1)
  stfs      f2, 0x30(r1)
  stfs      f1, 0x34(r1)
  stfs      f0, 0x38(r1)
  stw       r8, 0x2C(r1)
  stfs      f5, 0x3C(r1)
  sth       r6, 0x18(r1)
  stw       r5, 0x1C(r1)
  stw       r0, 0x14(r1)
  bl        0xFC060
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x5967
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B78B0
 * Size:	000088
 */
void startEscapeSE__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x230(r3)
  cmplwi    r0, 0
  bne-      .loc_0x74
  lfs       f1, 0x2CC(r31)
  lfs       f0, -0x2088(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x64
  lwz       r12, 0x0(r3)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x58F0
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x20D0(r2)
  stfs      f0, 0x2CC(r31)
  b         .loc_0x74

.loc_0x64:
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2CC(r31)

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
 * Address:	802B7938
 * Size:	0000FC
 */
void initBombOtakara__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r0, 0x230(r3)
  cmplwi    r0, 0
  bne-      .loc_0xE4
  lwz       r3, -0x6E20(r13)
  li        r4, 0x24
  bl        -0x1A9CC0
  mr.       r31, r3
  beq-      .loc_0xE4
  addi      r3, r1, 0x8
  bl        -0x188D50
  lfs       f0, 0x1FC(r30)
  mr        r3, r31
  addi      r4, r1, 0x8
  stfs      f0, 0x14(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x230(r30)
  lwz       r3, 0x230(r30)
  cmplwi    r3, 0
  beq-      .loc_0xE4
  li        r4, 0
  bl        -0x17C9E4
  lwz       r3, 0x174(r30)
  subi      r4, r2, 0x20C4
  bl        0x18762C
  bl        0x171EE4
  mr        r4, r3
  lwz       r3, 0x230(r30)
  bl        -0x117F20
  lwz       r5, 0x230(r30)
  lis       r3, 0x626F
  lfs       f1, -0x20A8(r2)
  addi      r4, r3, 0x6479
  stw       r30, 0x2CC(r5)
  lfs       f0, -0x20B0(r2)
  stfs      f1, 0x2EC(r30)
  stfs      f0, 0x2F0(r30)
  lwz       r3, 0x114(r30)
  bl        -0x181BAC
  lfs       f1, -0x2084(r2)
  lfs       f0, -0x20B0(r2)
  stfs      f1, 0x1C(r3)
  lfs       f1, 0x2EC(r30)
  stfs      f1, 0x24(r3)
  lwz       r3, 0x114(r30)
  lwz       r3, 0x0(r3)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x2EC(r30)
  stfs      f0, 0x24(r3)

.loc_0xE4:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7A34
 * Size:	000068
 */
void isTransitChaseState__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x1E0(r3)
  rlwinm.   r0,r4,0,27,27
  bne-      .loc_0x2C
  rlwinm.   r0,r4,0,30,30
  bne-      .loc_0x2C
  lwz       r0, 0x1F4(r3)
  cmpwi     r0, 0
  beq-      .loc_0x34

.loc_0x2C:
  li        r3, 0x1
  b         .loc_0x58

.loc_0x34:
  lwz       r6, 0xC0(r3)
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r6)
  lfs       f2, 0x3D4(r6)
  bl        -0x1A5388
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31

.loc_0x58:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7A9C
 * Size:	00008C
 */
void stimulateBomb__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x2080(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6514(r13)
  lfs       f2, 0x2E8(r3)
  lfs       f1, 0x54(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x2E8(r3)
  lfs       f1, 0x2E8(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x70
  lwz       r3, 0x230(r31)
  cmplwi    r3, 0
  beq-      .loc_0x70
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x70
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r31)
  lwz       r3, 0x230(r31)
  bl        0x935C8

.loc_0x70:
  lwz       r0, 0x1E0(r31)
  lwz       r31, 0xC(r1)
  rlwinm    r3,r0,26,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7B28
 * Size:	000038
 */
void getChaseTargetCreature__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  li        r5, 0
  stw       r0, 0x14(r1)
  li        r6, 0
  lwz       r7, 0xC0(r3)
  lfs       f1, 0x424(r7)
  lfs       f2, 0x3D4(r7)
  bl        -0x1A4AFC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7B60
 * Size:	00009C
 */
void satisfy__Q24Game30ConditionNotStickClientAndItemFPQ24Game4Piki(void)
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
  beq-      .loc_0x80
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x80
  lwz       r3, 0xF4(r31)
  lwz       r0, 0x4(r30)
  cmplw     r3, r0
  beq-      .loc_0x80
  lwz       r0, 0x8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x78
  cmplw     r3, r0
  beq-      .loc_0x80

.loc_0x78:
  li        r3, 0x1
  b         .loc_0x84

.loc_0x80:
  li        r3, 0

.loc_0x84:
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
 * Address:	802B7BFC
 * Size:	0000BC
 */
void __dt__Q34Game11OtakaraBase3ObjFv(void)
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
  lis       r3, 0x804D
  addi      r0, r31, 0x2F4
  subi      r4, r3, 0xF7C
  stw       r4, 0x0(r31)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x324
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
  bl        0x159900

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x293BE4

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
 * Address:	802B7CB8
 * Size:	000008
 */
void getDownSmokeScale__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x207C(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7CC0
 * Size:	000008
 */
void getCellRadius__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x2F0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802B7CC8
 * Size:	000004
 */
void createEffect__Q34Game11OtakaraBase3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}