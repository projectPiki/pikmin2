

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
 * Address:	8026F258
 * Size:	000150
 */
void __ct__Q34Game8ElecHiba3ObjFv(void)
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
  addi      r0, r31, 0x304
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x304(r31)
  stw       r0, 0x308(r31)
  stw       r0, 0x30C(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x16DF00
  lis       r3, 0x804C
  addi      r30, r31, 0x2C8
  addi      r3, r3, 0x5F9C
  addi      r0, r31, 0x304
  stw       r3, 0x0(r31)
  addi      r4, r3, 0x1B0
  addi      r5, r3, 0x2FC
  mr        r3, r30
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        0x1A20B4
  lis       r3, 0x804C
  li        r0, 0
  addi      r4, r3, 0x5EE8
  li        r3, 0x2C
  stw       r4, 0x0(r30)
  stw       r0, 0x18(r30)
  bl        -0x24B454
  mr.       r30, r3
  beq-      .loc_0xEC
  bl        -0x147990
  lis       r3, 0x804C
  lis       r4, 0x804B
  addi      r0, r3, 0x5DE0
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

.loc_0xEC:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x24B4A8
  mr.       r4, r3
  beq-      .loc_0x120
  lis       r5, 0x804B
  lis       r3, 0x804C
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x5DBC
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x120:
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
 * Address:	8026F3A8
 * Size:	000038
 */
void birth__Q34Game8ElecHiba3ObjFR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x16C9BC
  lfs       f0, -0x3280(r2)
  stfs      f0, 0x2C4(r31)
  stw       r31, 0x2E0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F3E0
 * Size:	000080
 */
void setInitialSetting__Q34Game8ElecHiba3ObjFPQ24Game21EnemyInitialParamBase(void)
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
  lwz       r0, 0x2D8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x60
  lfs       f1, -0x327C(r2)
  bl        0x548
  lwz       r30, 0x2D8(r30)
  b         .loc_0x54

.loc_0x38:
  lwz       r3, 0x18(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C4(r12)
  mtctr     r12
  bctrl     
  lwz       r30, 0x4(r30)

.loc_0x54:
  cmplwi    r30, 0
  bne+      .loc_0x38
  b         .loc_0x68

.loc_0x60:
  lfs       f1, -0x3278(r2)
  bl        0x510

.loc_0x68:
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
 * Address:	8026F460
 * Size:	000144
 */
void onInit__Q34Game8ElecHiba3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  bl        -0x16DA28
  lwz       r0, 0x1E0(r30)
  mr        r3, r30
  rlwinm    r0,r0,0,20,18
  stw       r0, 0x1E0(r30)
  lwz       r0, 0x1E0(r30)
  rlwinm    r0,r0,0,25,23
  stw       r0, 0x1E0(r30)
  lwz       r0, 0x1E0(r30)
  rlwinm    r0,r0,0,24,22
  stw       r0, 0x1E0(r30)
  bl        -0x167D30
  lwz       r0, 0x1E0(r30)
  mr        r3, r30
  oris      r0, r0, 0x40
  stw       r0, 0x1E0(r30)
  bl        -0x16DAB8
  lwz       r3, -0x6980(r13)
  mr        r4, r30
  bl        -0x2D864
  lfs       f0, -0x3280(r2)
  li        r0, 0x1
  mr        r3, r30
  stfs      f0, 0x2C4(r30)
  stb       r0, 0x2C0(r30)
  bl        0xC20
  lwz       r0, 0x2D8(r30)
  cmplwi    r0, 0
  beq-      .loc_0xB4
  mr        r31, r0
  b         .loc_0xAC

.loc_0x9C:
  lwz       r3, 0x18(r31)
  li        r4, 0
  bl        -0x13453C
  lwz       r31, 0x4(r31)

.loc_0xAC:
  cmplwi    r31, 0
  bne+      .loc_0x9C

.loc_0xB4:
  mr        r3, r30
  bl        0x1134
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x2F8(r30)
  bl        0x11BC
  lwz       r3, 0xC0(r30)
  lfs       f31, 0x81C(r3)
  bl        -0x1A5F94
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  mr        r4, r30
  lfd       f2, -0x3270(r2)
  addi      r6, r1, 0x8
  stw       r0, 0x10(r1)
  li        r5, 0x1
  lfs       f0, -0x3274(r2)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f31, f1
  fdivs     f0, f1, f0
  stfs      f0, 0x8(r1)
  lwz       r3, 0x2BC(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F5A4
 * Size:	000040
 */
void doUpdate__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r0, 0x2D8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x30
  lwz       r3, 0x2BC(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F5E4
 * Size:	000004
 */
void doDirectDraw__Q34Game8ElecHiba3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F5E8
 * Size:	000020
 */
void doDebugDraw__Q34Game8ElecHiba3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x169788
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F608
 * Size:	00004C
 */
void setFSM__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba3FSM(void)
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
 * Address:	8026F654
 * Size:	000038
 */
void getShadowParam__Q34Game8ElecHiba3ObjFRQ24Game11ShadowParam(void)
{
/*
.loc_0x0:
  lfs       f0, 0x18C(r3)
  lfs       f1, -0x3280(r2)
  stfs      f0, 0x0(r4)
  lfs       f0, -0x327C(r2)
  lfs       f2, 0x190(r3)
  stfs      f2, 0x4(r4)
  lfs       f2, 0x194(r3)
  stfs      f2, 0x8(r4)
  stfs      f1, 0xC(r4)
  stfs      f0, 0x10(r4)
  stfs      f1, 0x14(r4)
  stfs      f0, 0x18(r4)
  stfs      f0, 0x1C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F68C
 * Size:	0000CC
 */
void damageCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr.       r31, r4
  stw       r30, 0x10(r1)
  mr        r30, r3
  beq-      .loc_0xAC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xAC
  lbz       r0, 0x2F4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x98
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  lwz       r3, 0x2D4(r30)
  cmplwi    r3, 0
  beq-      .loc_0x88
  lwz       r3, 0x18(r3)
  mr        r4, r31
  bl        0xFE8
  b         .loc_0xA4

.loc_0x88:
  mr        r3, r30
  mr        r4, r31
  bl        0xFD8
  b         .loc_0xA4

.loc_0x98:
  fmr       f1, f31
  mr        r3, r30
  bl        0x960

.loc_0xA4:
  li        r3, 0x1
  b         .loc_0xB0

.loc_0xAC:
  li        r3, 0

.loc_0xB0:
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F758
 * Size:	000030
 */
void pressCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x278(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F788
 * Size:	000030
 */
void hipdropCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x278(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F7B8
 * Size:	000034
 */
void bombCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreatureR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x278(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F7EC
 * Size:	000100
 */
void doGetLifeGaugeParam__Q34Game8ElecHiba3ObjFRQ24Game14LifeGaugeParam(void)
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
  bl        0x130
  cmplwi    r3, 0
  beq-      .loc_0xE0
  mr        r4, r3
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x8(r1)
  lfs       f2, -0x3268(r2)
  stfs      f0, 0x0(r31)
  lfs       f0, -0x3264(r2)
  lfs       f1, 0xC(r1)
  stfs      f1, 0x4(r31)
  lfs       f1, 0x10(r1)
  stfs      f1, 0x8(r31)
  lfs       f3, 0x0(r31)
  lfs       f1, 0x18C(r30)
  fadds     f1, f3, f1
  stfs      f1, 0x0(r31)
  lfs       f3, 0x4(r31)
  lfs       f1, 0x190(r30)
  fadds     f1, f3, f1
  stfs      f1, 0x4(r31)
  lfs       f3, 0x8(r31)
  lfs       f1, 0x194(r30)
  fadds     f1, f3, f1
  stfs      f1, 0x8(r31)
  lfs       f1, 0x0(r31)
  fmuls     f1, f1, f2
  stfs      f1, 0x0(r31)
  lfs       f1, 0x4(r31)
  fmuls     f1, f1, f2
  stfs      f1, 0x4(r31)
  lfs       f1, 0x8(r31)
  fmuls     f1, f1, f2
  stfs      f1, 0x8(r31)
  lwz       r3, 0xC0(r30)
  lfs       f2, 0x4(r31)
  lfs       f1, 0x12C(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x4(r31)
  lfs       f2, 0x200(r30)
  lfs       f1, 0x204(r30)
  fdivs     f1, f2, f1
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  b         .loc_0xE8

.loc_0xE0:
  li        r0, 0
  stb       r0, 0x14(r31)

.loc_0xE8:
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
 * Address:	8026F8EC
 * Size:	00004C
 */
void injure__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x30
  lfs       f2, 0x200(r3)
  lfs       f1, 0x208(r3)
  lfs       f0, -0x3280(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x200(r3)
  lfs       f1, 0x200(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x30
  stfs      f0, 0x200(r3)

.loc_0x30:
  lfs       f0, -0x3280(r2)
  stfs      f0, 0x208(r3)
  lwz       r0, 0x1E0(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x1E0(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void getParentObjPtr__Q34Game8ElecHiba3ObjFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8026F938
 * Size:	00001C
 */
void getChildObjPtr__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x2D8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x14
  lwz       r3, 0x18(r3)
  blr       

.loc_0x14:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F954
 * Size:	000170
 */
void setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stfd      f29, 0x50(r1)
  psq_st    f29,0x58(r1),0,0
  stfd      f28, 0x40(r1)
  psq_st    f28,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  lwz       r12, 0x0(r3)
  mr        r30, r3
  fmr       f28, f1
  mr        r31, r4
  lwz       r12, 0x64(r12)
  lfs       f31, 0x2E4(r3)
  lfs       f30, 0x2E8(r3)
  lfs       f29, 0x2EC(r3)
  mtctr     r12
  bctrl     
  lfs       f0, -0x3260(r2)
  lfs       f2, 0x0(r31)
  fadds     f4, f0, f1
  lfs       f1, -0x3268(r2)
  lfs       f0, -0x3280(r2)
  fmuls     f3, f2, f1
  fmr       f1, f4
  fcmpo     cr0, f4, f0
  bge-      .loc_0x84
  fneg      f1, f4

.loc_0x84:
  lfs       f2, -0x325C(r2)
  lis       r3, 0x8050
  lfs       f0, -0x3280(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f4, f0
  fmuls     f3, f28, f3
  fctiwz    f0, f1
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmadds    f1, f3, f0, f29
  bge-      .loc_0xE4
  lfs       f0, -0x3258(r2)
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0xFC

.loc_0xE4:
  fmuls     f0, f4, f2
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0xFC:
  fmadds    f0, f3, f0, f31
  stfs      f30, 0xC(r1)
  lwz       r3, -0x6CF8(r13)
  addi      r4, r1, 0x8
  stfs      f1, 0x10(r1)
  stfs      f0, 0x8(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0xC(r1)
  mr        r3, r30
  addi      r4, r1, 0x8
  li        r5, 0
  bl        -0x1348E0
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  psq_l     f28,0x48(r1),0,0
  lfd       f28, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0x84(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8026FAC4
 * Size:	0005C8
 */
void interactDenkiAttack__Q34Game8ElecHiba3ObjFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x210(r1)
  mflr      r0
  stw       r0, 0x214(r1)
  stfd      f31, 0x200(r1)
  psq_st    f31,0x208(r1),0,0
  stfd      f30, 0x1F0(r1)
  psq_st    f30,0x1F8(r1),0,0
  stfd      f29, 0x1E0(r1)
  psq_st    f29,0x1E8(r1),0,0
  stfd      f28, 0x1D0(r1)
  psq_st    f28,0x1D8(r1),0,0
  stfd      f27, 0x1C0(r1)
  psq_st    f27,0x1C8(r1),0,0
  stfd      f26, 0x1B0(r1)
  psq_st    f26,0x1B8(r1),0,0
  stfd      f25, 0x1A0(r1)
  psq_st    f25,0x1A8(r1),0,0
  stfd      f24, 0x190(r1)
  psq_st    f24,0x198(r1),0,0
  stfd      f23, 0x180(r1)
  psq_st    f23,0x188(r1),0,0
  stfd      f22, 0x170(r1)
  psq_st    f22,0x178(r1),0,0
  stfd      f21, 0x160(r1)
  psq_st    f21,0x168(r1),0,0
  stfd      f20, 0x150(r1)
  psq_st    f20,0x158(r1),0,0
  stfd      f19, 0x140(r1)
  psq_st    f19,0x148(r1),0,0
  stfd      f18, 0x130(r1)
  psq_st    f18,0x138(r1),0,0
  stfd      f17, 0x120(r1)
  psq_st    f17,0x128(r1),0,0
  stfd      f16, 0x110(r1)
  psq_st    f16,0x118(r1),0,0
  stfd      f15, 0x100(r1)
  psq_st    f15,0x108(r1),0,0
  stfd      f14, 0xF0(r1)
  psq_st    f14,0xF8(r1),0,0
  stw       r31, 0xEC(r1)
  stw       r30, 0xE8(r1)
  mr        r30, r3
  lfs       f8, 0x8(r4)
  lfs       f31, 0x194(r3)
  lfs       f9, 0x4(r4)
  lfs       f3, 0x190(r3)
  fadds     f2, f8, f31
  lfs       f4, -0x3268(r2)
  fadds     f1, f9, f3
  lfs       f7, 0x1FC(r3)
  lfs       f0, -0x3280(r2)
  fmuls     f2, f4, f2
  lfs       f10, 0x0(r4)
  fmr       f5, f7
  lfs       f30, 0x18C(r3)
  fcmpo     cr0, f7, f0
  fmuls     f1, f4, f1
  fadds     f0, f10, f30
  fmuls     f0, f4, f0
  bge-      .loc_0xF4
  fneg      f5, f7

.loc_0xF4:
  lfs       f6, -0x325C(r2)
  lis       r3, 0x8050
  lfs       f4, -0x3280(r2)
  addi      r4, r3, 0x71A0
  fmuls     f5, f5, f6
  fcmpo     cr0, f7, f4
  fctiwz    f4, f5
  stfd      f4, 0xC0(r1)
  lwz       r0, 0xC4(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f24, 0x4(r3)
  bge-      .loc_0x14C
  lfs       f4, -0x3258(r2)
  fmuls     f4, f7, f4
  fctiwz    f4, f4
  stfd      f4, 0xC8(r1)
  lwz       r0, 0xCC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f4, r4, r0
  fneg      f23, f4
  b         .loc_0x164

.loc_0x14C:
  fmuls     f4, f7, f6
  fctiwz    f4, f4
  stfd      f4, 0xD0(r1)
  lwz       r0, 0xD4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f23, r4, r0

.loc_0x164:
  fsubs     f5, f9, f3
  lfs       f7, -0x3280(r2)
  fsubs     f6, f8, f31
  fsubs     f4, f10, f30
  fmuls     f8, f5, f5
  fmuls     f9, f6, f6
  fmr       f22, f4
  fmadds    f8, f4, f4, f8
  fmr       f21, f5
  fmr       f20, f6
  fadds     f8, f9, f8
  fcmpo     cr0, f8, f7
  ble-      .loc_0x1A8
  ble-      .loc_0x1AC
  fsqrte    f7, f8
  fmuls     f8, f7, f8
  b         .loc_0x1AC

.loc_0x1A8:
  fmr       f8, f7

.loc_0x1AC:
  lfs       f7, -0x3280(r2)
  fcmpo     cr0, f8, f7
  ble-      .loc_0x1CC
  lfs       f7, -0x327C(r2)
  fdivs     f7, f7, f8
  fmuls     f22, f22, f7
  fmuls     f21, f21, f7
  fmuls     f20, f20, f7

.loc_0x1CC:
  fmuls     f8, f23, f20
  lfs       f10, -0x3280(r2)
  fmuls     f9, f24, f21
  fmuls     f7, f10, f22
  fmsubs    f18, f24, f22, f8
  fmsubs    f19, f10, f20, f9
  fmsubs    f17, f23, f21, f7
  fmuls     f7, f18, f18
  fmuls     f8, f17, f17
  fmadds    f7, f19, f19, f7
  fadds     f8, f8, f7
  fcmpo     cr0, f8, f10
  ble-      .loc_0x210
  ble-      .loc_0x214
  fsqrte    f7, f8
  fmuls     f8, f7, f8
  b         .loc_0x214

.loc_0x210:
  fmr       f8, f10

.loc_0x214:
  lfs       f7, -0x3280(r2)
  fcmpo     cr0, f8, f7
  ble-      .loc_0x234
  lfs       f7, -0x327C(r2)
  fdivs     f7, f7, f8
  fmuls     f19, f19, f7
  fmuls     f18, f18, f7
  fmuls     f17, f17, f7

.loc_0x234:
  fmuls     f7, f5, f5
  lfs       f5, -0x3280(r2)
  fmuls     f6, f6, f6
  fmadds    f4, f4, f4, f7
  fadds     f6, f6, f4
  fcmpo     cr0, f6, f5
  ble-      .loc_0x260
  ble-      .loc_0x264
  fsqrte    f4, f6
  fmuls     f6, f4, f6
  b         .loc_0x264

.loc_0x260:
  fmr       f6, f5

.loc_0x264:
  lwz       r5, 0xC0(r30)
  addi      r3, r1, 0x54
  lfs       f4, -0x3268(r2)
  addi      r4, r1, 0x2C
  lfs       f7, 0x564(r5)
  lfs       f5, 0x44C(r5)
  fadds     f29, f6, f7
  lfs       f6, 0x58C(r5)
  lfs       f26, 0x474(r5)
  fneg      f28, f7
  fadds     f3, f3, f6
  stfs      f0, 0x2C(r1)
  fmuls     f25, f24, f5
  stfs      f3, 0xD8(r1)
  fsubs     f3, f29, f28
  fmuls     f27, f23, f5
  stfs      f1, 0x30(r1)
  fmuls     f0, f4, f3
  stfs      f2, 0x34(r1)
  stfs      f0, 0x38(r1)
  bl        -0x419D8
  li        r0, 0x1
  addi      r3, r1, 0x74
  stb       r0, 0x70(r1)
  addi      r4, r1, 0x54
  bl        -0x419AC
  addi      r3, r1, 0x74
  bl        -0x41938
  b         .loc_0x510

.loc_0x2D8:
  addi      r3, r1, 0x74
  bl        -0x4185C
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x508
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x334
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x508

.loc_0x334:
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f0, 0xD8(r1)
  lfs       f2, 0x8(r1)
  fsubs     f4, f1, f0
  lfs       f1, -0x3280(r2)
  lfs       f3, 0x10(r1)
  fsubs     f2, f2, f30
  fmuls     f0, f1, f4
  fsubs     f3, f3, f31
  fmadds    f0, f23, f2, f0
  fmadds    f5, f24, f3, f0
  fcmpo     cr0, f5, f1
  ble-      .loc_0x388
  fmr       f6, f5
  b         .loc_0x38C

.loc_0x388:
  fneg      f6, f5

.loc_0x38C:
  lwz       r3, 0xC0(r30)
  lfs       f0, 0x5B4(r3)
  fcmpo     cr0, f6, f0
  bge-      .loc_0x508
  fmuls     f0, f21, f4
  fmadds    f0, f22, f2, f0
  fmadds    f0, f20, f3, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x508
  fcmpo     cr0, f0, f28
  ble-      .loc_0x508
  fmuls     f1, f18, f4
  lfs       f0, -0x3280(r2)
  fmadds    f1, f19, f2, f1
  fmadds    f1, f17, f3, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x3D4
  b         .loc_0x3D8

.loc_0x3D4:
  fneg      f1, f1

.loc_0x3D8:
  lfs       f0, 0x5DC(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x508
  lwz       r0, 0x2F8(r30)
  cmpwi     r0, 0
  bne-      .loc_0x47C
  fdivs     f0, f5, f6
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lfs       f16, -0x3280(r2)
  lwz       r12, 0x18(r12)
  fmuls     f14, f0, f25
  fmuls     f15, f0, f27
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x420
  fmr       f16, f26

.loc_0x420:
  lwz       r6, 0xC0(r30)
  lis       r5, 0x804B
  lis       r4, 0x804B
  lis       r3, 0x804B
  lfs       f0, 0x604(r6)
  subi      r6, r5, 0x5D00
  addi      r5, r4, 0x4974
  addi      r0, r3, 0x4908
  stw       r6, 0x3C(r1)
  mr        r3, r31
  addi      r4, r1, 0x3C
  stw       r5, 0x3C(r1)
  stw       r30, 0x40(r1)
  stfs      f0, 0x44(r1)
  stfs      f15, 0x48(r1)
  stfs      f16, 0x4C(r1)
  stfs      f14, 0x50(r1)
  stw       r0, 0x3C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x508

.loc_0x47C:
  cmpwi     r0, 0x1
  bne-      .loc_0x4C4
  lfs       f0, 0x604(r3)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lis       r3, 0x804B
  stw       r0, 0x20(r1)
  addi      r0, r3, 0x4878
  mr        r3, r31
  addi      r4, r1, 0x20
  stw       r30, 0x24(r1)
  stw       r0, 0x20(r1)
  stfs      f0, 0x28(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x508

.loc_0x4C4:
  cmpwi     r0, 0x2
  bne-      .loc_0x508
  lfs       f0, 0x604(r3)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lis       r3, 0x804B
  stw       r0, 0x14(r1)
  addi      r0, r3, 0x4830
  mr        r3, r31
  addi      r4, r1, 0x14
  stw       r30, 0x18(r1)
  stw       r0, 0x14(r1)
  stfs      f0, 0x1C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x508:
  addi      r3, r1, 0x74
  bl        -0x41AD0

.loc_0x510:
  addi      r3, r1, 0x74
  bl        -0x41AA4
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2D8
  psq_l     f31,0x208(r1),0,0
  lfd       f31, 0x200(r1)
  psq_l     f30,0x1F8(r1),0,0
  lfd       f30, 0x1F0(r1)
  psq_l     f29,0x1E8(r1),0,0
  lfd       f29, 0x1E0(r1)
  psq_l     f28,0x1D8(r1),0,0
  lfd       f28, 0x1D0(r1)
  psq_l     f27,0x1C8(r1),0,0
  lfd       f27, 0x1C0(r1)
  psq_l     f26,0x1B8(r1),0,0
  lfd       f26, 0x1B0(r1)
  psq_l     f25,0x1A8(r1),0,0
  lfd       f25, 0x1A0(r1)
  psq_l     f24,0x198(r1),0,0
  lfd       f24, 0x190(r1)
  psq_l     f23,0x188(r1),0,0
  lfd       f23, 0x180(r1)
  psq_l     f22,0x178(r1),0,0
  lfd       f22, 0x170(r1)
  psq_l     f21,0x168(r1),0,0
  lfd       f21, 0x160(r1)
  psq_l     f20,0x158(r1),0,0
  lfd       f20, 0x150(r1)
  psq_l     f19,0x148(r1),0,0
  lfd       f19, 0x140(r1)
  psq_l     f18,0x138(r1),0,0
  lfd       f18, 0x130(r1)
  psq_l     f17,0x128(r1),0,0
  lfd       f17, 0x120(r1)
  psq_l     f16,0x118(r1),0,0
  lfd       f16, 0x110(r1)
  psq_l     f15,0x108(r1),0,0
  lfd       f15, 0x100(r1)
  psq_l     f14,0xF8(r1),0,0
  lfd       f14, 0xF0(r1)
  lwz       r31, 0xEC(r1)
  lwz       r0, 0x214(r1)
  lwz       r30, 0xE8(r1)
  mtlr      r0
  addi      r1, r1, 0x210
  blr
*/
}

/*
 * --INFO--
 * Address:	8027008C
 * Size:	00004C
 */
void addDamageMyself__Q34Game8ElecHiba3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x1E0(r3)
  rlwinm.   r0,r4,0,31,31
  bne-      .loc_0x3C
  ori       r0, r4, 0x2
  stw       r0, 0x1E0(r3)
  lwz       r4, 0x2D4(r3)
  cmplwi    r4, 0
  beq-      .loc_0x38
  lwz       r3, 0x18(r4)
  bl        .loc_0x4C
  b         .loc_0x3C

.loc_0x38:
  bl        .loc_0x4C

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	802700D8
 * Size:	00002C
 */
void damageIncrement__Q34Game8ElecHiba3ObjFf(void)
{
/*
.loc_0x0:
  lfs       f0, 0x208(r3)
  fadds     f0, f0, f1
  stfs      f0, 0x208(r3)
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,26,26
  beqlr-    
  lfs       f1, 0x20C(r3)
  lfs       f0, -0x327C(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x20C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80270104
 * Size:	000024
 */
void setupLodParms__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  li        r0, 0
  lfs       f0, 0x8BC(r4)
  stfs      f0, 0x264(r3)
  lwz       r4, 0xC0(r3)
  lfs       f0, 0x8E4(r4)
  stfs      f0, 0x268(r3)
  stb       r0, 0x26C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80270128
 * Size:	000038
 */
void updateEfxLod__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x2F0(r3)
  cmplwi    r4, 0
  beq-      .loc_0x28
  lbz       r0, 0xD8(r3)
  mr        r3, r4
  rlwinm    r4,r0,0,30,31
  bl        0x145048

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80270160
 * Size:	0000DC
 */
void createEffect__Q34Game8ElecHiba3ObjFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm.   r0,r4,0,24,31
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  beq-      .loc_0xB8
  li        r3, 0xB8
  bl        -0x24C2E4
  mr.       r30, r3
  beq-      .loc_0xB0
  lis       r4, 0x804B
  lis       r3, 0x804E
  subi      r0, r4, 0x5808
  addi      r29, r30, 0x4
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x6B68
  li        r4, 0x2D
  mr        r3, r29
  stw       r0, 0x0(r30)
  li        r5, 0x2E
  li        r6, 0x2F
  bl        0x13FF40
  lis       r3, 0x804E
  lis       r4, 0x8027
  addi      r0, r3, 0x6B7C
  li        r6, 0x24
  lis       r3, 0x8027
  stw       r0, 0x0(r29)
  addi      r5, r3, 0x344
  addi      r4, r4, 0x3D4
  addi      r3, r30, 0x38
  li        r7, 0x2
  bl        -0x1AE9B0
  lis       r3, 0x8027
  lis       r5, 0x8027
  addi      r4, r3, 0x2D8
  li        r6, 0x10
  addi      r3, r30, 0x80
  addi      r5, r5, 0x23C
  li        r7, 0x2
  bl        -0x1AE9D0

.loc_0xB0:
  stw       r30, 0x2F0(r31)
  b         .loc_0xC0

.loc_0xB8:
  li        r0, 0
  stw       r0, 0x2F0(r31)

.loc_0xC0:
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
 * Address:	8027023C
 * Size:	00009C
 */
void __dt__Q23efx14TDenkipoleSignFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804C
  addi      r3, r3, 0x5F50
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804B
  addi      r3, r3, 0x2C24
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x1E060C

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x24C204

.loc_0x80:
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
 * Address:	802702D8
 * Size:	00006C
 */
void __ct__Q23efx14TDenkipoleSignFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x804B
  lis       r5, 0x804E
  subi      r0, r4, 0x5808
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  subi      r0, r6, 0x1D84
  lis       r4, 0x804B
  addi      r5, r5, 0x698C
  stw       r0, 0x4(r3)
  addi      r6, r4, 0x2C24
  lis       r4, 0x804C
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  li        r8, 0
  li        r7, 0x32
  addi      r5, r6, 0x14
  stw       r0, 0x4(r3)
  addi      r4, r4, 0x5F50
  addi      r0, r4, 0x14
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x4(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80270344
 * Size:	000090
 */
void __dt__Q23efx10TDenkiPoleFv(void)
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
  beq-      .loc_0x74
  lis       r3, 0x804C
  addi      r0, r3, 0x5F34
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r3, 0x804B
  addi      r0, r3, 0x2998
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r3, 0x804B
  lis       r4, 0x8017
  addi      r0, r3, 0x297C
  li        r5, 0x10
  stw       r0, 0x0(r30)
  addi      r3, r30, 0x4
  addi      r4, r4, 0x5CC8
  li        r6, 0x2
  bl        -0x1AEBE0

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x24C300

.loc_0x74:
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
 * Address:	802703D4
 * Size:	000044
 */
void __ct__Q23efx10TDenkiPoleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x30
  li        r5, 0x31
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x13FC20
  lis       r4, 0x804C
  mr        r3, r31
  addi      r0, r4, 0x5F34
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void __dt__Q23efx10TDenkiHibaFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80270418
 * Size:	000110
 */
void startChargeEffect__Q34Game8ElecHiba3ObjFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r3
  lwz       r0, 0x2F0(r3)
  cmplwi    r0, 0
  beq-      .loc_0xFC
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x20
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x20(r1)
  lis       r4, 0x804B
  lfs       f1, 0x24(r1)
  lis       r3, 0x8051
  lfs       f0, 0x28(r1)
  addi      r5, r3, 0x41E4
  stfs      f2, 0x2C(r1)
  lis       r3, 0x804C
  lwz       r8, 0x18C(r31)
  subi      r6, r4, 0x5814
  stfs      f1, 0x30(r1)
  addi      r0, r3, 0x5F28
  lwz       r11, 0x2C(r1)
  addi      r4, r1, 0x38
  stfs      f0, 0x34(r1)
  lwz       r10, 0x30(r1)
  lwz       r9, 0x34(r1)
  lwz       r7, 0x190(r31)
  lwz       r3, 0x194(r31)
  stw       r11, 0x8(r1)
  lfs       f8, 0x0(r5)
  stw       r10, 0xC(r1)
  lfs       f7, 0x4(r5)
  stw       r9, 0x10(r1)
  lfs       f6, 0x8(r5)
  stw       r8, 0x14(r1)
  lfs       f2, 0x8(r1)
  stw       r7, 0x18(r1)
  lfs       f5, 0x14(r1)
  stw       r3, 0x1C(r1)
  lfs       f4, 0x18(r1)
  stw       r6, 0x38(r1)
  lfs       f3, 0x1C(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f8, 0x3C(r1)
  stfs      f7, 0x40(r1)
  stfs      f6, 0x44(r1)
  stw       r0, 0x38(r1)
  stfs      f5, 0x48(r1)
  stfs      f4, 0x4C(r1)
  stfs      f3, 0x50(r1)
  stfs      f2, 0x54(r1)
  stfs      f1, 0x58(r1)
  stfs      f0, 0x5C(r1)
  lwz       r3, 0x2F0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xFC:
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80270528
 * Size:	000038
 */
void finishChargeEffect__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2F0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80270560
 * Size:	000070
 */
void startDisChargeEffect__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x2F0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x60
  lwz       r3, 0x2F8(r3)
  cmpwi     r3, 0
  bne-      .loc_0x34
  mr        r3, r0
  li        r4, 0
  bl        0x144978
  b         .loc_0x60

.loc_0x34:
  cmpwi     r3, 0x1
  bne-      .loc_0x4C
  mr        r3, r0
  li        r4, 0x1
  bl        0x144960
  b         .loc_0x60

.loc_0x4C:
  cmpwi     r3, 0x2
  bne-      .loc_0x60
  mr        r3, r0
  li        r4, 0x2
  bl        0x144948

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802705D0
 * Size:	000038
 */
void finishDisChargeEffect__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2F0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80270608
 * Size:	000044
 */
void generatorKill__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xC4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x30
  mr        r4, r31
  bl        -0xC5938
  li        r0, 0
  stw       r0, 0xC4(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027064C
 * Size:	00006C
 */
void setVersusHibaOnOff__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0x50
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x50
  lwz       r3, -0x6978(r13)
  cmplwi    r3, 0
  beq-      .loc_0x50
  bl        -0x2B7D4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  li        r0, 0x1
  stb       r0, 0x2F4(r31)
  b         .loc_0x58

.loc_0x50:
  li        r0, 0
  stb       r0, 0x2F4(r31)

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
 * Address:	802706B8
 * Size:	00002C
 */
void setVersusHibaType__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x2FC(r3)
  lwz       r0, 0x300(r3)
  cmpw      r4, r0
  beqlr-    
  ble-      .loc_0x20
  li        r0, 0x1
  stw       r0, 0x2F8(r3)
  blr       

.loc_0x20:
  li        r0, 0x2
  stw       r0, 0x2F8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802706E4
 * Size:	000010
 */
void resetAttrHitCount__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x2FC(r3)
  stw       r0, 0x300(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802706F4
 * Size:	000070
 */
void addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x2B8(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x30
  lwz       r3, 0x2FC(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x2FC(r31)
  b         .loc_0x44

.loc_0x30:
  cmpwi     r0, 0
  bne-      .loc_0x44
  lwz       r3, 0x300(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x300(r31)

.loc_0x44:
  mr        r3, r31
  bl        -0x169348
  cmpwi     r3, 0x3
  bne-      .loc_0x5C
  lfs       f0, -0x3280(r2)
  stfs      f0, 0x2C4(r31)

.loc_0x5C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80270764
 * Size:	000040
 */
void isWaitFinish__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x2C4(r3)
  lfs       f0, 0x86C(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x38
  lwz       r0, 0x2F8(r3)
  cmpwi     r0, 0
  bne-      .loc_0x30
  lwz       r4, 0x2FC(r3)
  lwz       r0, 0x300(r3)
  cmpw      r4, r0
  beq-      .loc_0x38

.loc_0x30:
  li        r3, 0x1
  blr       

.loc_0x38:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	802707A4
 * Size:	000058
 */
void isAttackFinish__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x2C4(r3)
  lfs       f0, 0x86C(r4)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x48
  lwz       r5, 0x2F8(r3)
  cmpwi     r5, 0x1
  bne-      .loc_0x30
  lwz       r4, 0x300(r3)
  lwz       r0, 0x2FC(r3)
  cmpw      r4, r0
  bgt-      .loc_0x48

.loc_0x30:
  cmpwi     r5, 0x2
  bne-      .loc_0x50
  lwz       r4, 0x2FC(r3)
  lwz       r0, 0x300(r3)
  cmpw      r4, r0
  ble-      .loc_0x50

.loc_0x48:
  li        r3, 0x1
  blr       

.loc_0x50:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	802707FC
 * Size:	00000C
 */
void getName__Q23efx12ArgDenkiHibaFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  addi      r3, r3, 0x6868
  blr
*/
}

/*
 * --INFO--
 * Address:	80270808
 * Size:	000004
 */
void doSimulation__Q34Game8ElecHiba3ObjFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8027080C
 * Size:	000004
 */
void inWaterCallback__Q34Game8ElecHiba3ObjFPQ24Game8WaterBox(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80270810
 * Size:	000004
 */
void outWaterCallback__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80270814
 * Size:	000008
 */
void isLivingThing__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2C0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8027081C
 * Size:	000004
 */
void lifeRecover__Q34Game8ElecHiba3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80270820
 * Size:	000014
 */
void @772@12@viewOnPelletKilled__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x304
  b         -0x169F14
*/
}

/*
 * --INFO--
 * Address:	80270834
 * Size:	000014
 */
void @772@12@viewStartCarryMotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x304
  b         -0x16A19C
*/
}

/*
 * --INFO--
 * Address:	80270848
 * Size:	000014
 */
void @772@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x304
  b         -0x16A190
*/
}

/*
 * --INFO--
 * Address:	8027085C
 * Size:	000014
 */
void @772@12@view_finish_carrymotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x304
  b         -0x169DF4
*/
}

/*
 * --INFO--
 * Address:	80270870
 * Size:	000014
 */
void @772@12@view_start_carrymotion__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x304
  b         -0x169E34
*/
}

/*
 * --INFO--
 * Address:	80270884
 * Size:	000014
 */
void @772@12@viewGetShape__Q24Game9EnemyBaseFv(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x304
  b         -0x16A1F4
*/
}

/*
 * --INFO--
 * Address:	80270898
 * Size:	000008
 */
void @4@__dt__Q23efx14TDenkipoleSignFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x660
*/
}