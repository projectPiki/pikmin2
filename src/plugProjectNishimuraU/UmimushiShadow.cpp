

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
 * Address:	802F27DC
 * Size:	0001DC
 */
void makeShadowSRT__Q24Game22UmimushiTubeShadowNodeFRQ24Game15JointShadowParmP7MatrixfR10Vector3<float>R10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stfd      f30, 0x10(r1)
  psq_st    f30,0x18(r1),0,0
  lfs       f3, 0x0(r5)
  lfs       f5, 0x10(r5)
  lfs       f6, 0x20(r5)
  lfs       f2, 0x4(r5)
  lfs       f7, 0x14(r5)
  lfs       f8, 0x24(r5)
  lfs       f0, 0xC(r5)
  lfs       f4, -0x11E0(r2)
  stfs      f0, 0x0(r7)
  lfs       f12, -0x11DC(r2)
  lfs       f0, 0x1C(r5)
  stfs      f0, 0x4(r7)
  lfs       f0, 0x2C(r5)
  stfs      f0, 0x8(r7)
  lfs       f0, 0x1C(r4)
  lfs       f1, 0x18(r4)
  fmuls     f0, f2, f0
  lfs       f2, 0x0(r7)
  fmadds    f0, f3, f1, f0
  fadds     f0, f2, f0
  stfs      f0, 0x0(r7)
  lfs       f0, 0x1C(r4)
  lfs       f1, 0x18(r4)
  fmuls     f0, f7, f0
  lfs       f2, 0x4(r7)
  fmadds    f0, f5, f1, f0
  fadds     f0, f2, f0
  stfs      f0, 0x4(r7)
  lfs       f0, 0x1C(r4)
  lfs       f1, 0x18(r4)
  fmuls     f0, f8, f0
  lfs       f2, 0x8(r7)
  fmadds    f0, f6, f1, f0
  fadds     f0, f2, f0
  stfs      f0, 0x8(r7)
  lfs       f7, 0x0(r7)
  lfs       f6, 0x0(r6)
  lfs       f9, 0x4(r7)
  fsubs     f0, f7, f6
  lfs       f8, 0x4(r6)
  lfs       f11, 0x8(r7)
  lfs       f10, 0x8(r6)
  fsubs     f1, f9, f8
  fmuls     f0, f4, f0
  fsubs     f2, f11, f10
  lfs       f30, 0x14(r4)
  fmuls     f1, f4, f1
  lfs       f13, 0xC(r4)
  fmuls     f3, f0, f30
  fmuls     f2, f4, f2
  lfs       f31, 0x10(r4)
  fmuls     f5, f1, f13
  fmsubs    f4, f2, f13, f3
  fmuls     f3, f2, f31
  fmsubs    f5, f0, f31, f5
  fmuls     f13, f4, f4
  fmsubs    f3, f1, f30, f3
  fmuls     f31, f5, f5
  fmadds    f13, f3, f3, f13
  fadds     f13, f31, f13
  fcmpo     cr0, f13, f12
  ble-      .loc_0x11C
  ble-      .loc_0x120
  fsqrte    f12, f13
  fmuls     f13, f12, f13
  b         .loc_0x120

.loc_0x11C:
  fmr       f13, f12

.loc_0x120:
  lfs       f12, -0x11DC(r2)
  fcmpo     cr0, f13, f12
  ble-      .loc_0x140
  lfs       f12, -0x11D8(r2)
  fdivs     f12, f12, f13
  fmuls     f3, f3, f12
  fmuls     f4, f4, f12
  fmuls     f5, f5, f12

.loc_0x140:
  lfs       f30, 0x20(r4)
  fadds     f12, f9, f8
  lfs       f9, 0x24(r4)
  fadds     f7, f7, f6
  lfs       f13, -0x11E0(r2)
  fadds     f6, f11, f10
  lfs       f8, 0x4(r4)
  lwz       r4, 0x1C(r3)
  fmadds    f10, f13, f12, f9
  lfs       f9, -0x11D4(r2)
  fmuls     f3, f3, f30
  stfs      f0, 0x0(r4)
  fmuls     f4, f4, f30
  fsubs     f0, f10, f8
  stfs      f1, 0x10(r4)
  fmuls     f5, f5, f30
  lfs       f8, -0x11DC(r2)
  fmuls     f1, f13, f7
  stfs      f2, 0x20(r4)
  fadds     f2, f9, f0
  lwz       r4, 0x1C(r3)
  fmuls     f0, f13, f6
  stfs      f8, 0x4(r4)
  stfs      f2, 0x14(r4)
  stfs      f8, 0x24(r4)
  lwz       r4, 0x1C(r3)
  stfs      f3, 0x8(r4)
  stfs      f4, 0x18(r4)
  stfs      f5, 0x28(r4)
  lwz       r3, 0x1C(r3)
  stfs      f1, 0xC(r3)
  stfs      f10, 0x1C(r3)
  stfs      f0, 0x2C(r3)
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  psq_l     f30,0x18(r1),0,0
  lfd       f30, 0x10(r1)
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802F29B8
 * Size:	0000CC
 */
void makeShadowSRT__Q24Game24UmimushiSphereShadowNodeFRQ24Game15JointShadowParmP7MatrixfR10Vector3<float>b(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r7,0,24,31
  beq-      .loc_0x48
  lfs       f0, -0x11D0(r2)
  lfs       f1, 0x20(r4)
  lfs       f5, 0x8(r5)
  lfs       f6, 0x18(r5)
  fadds     f0, f0, f1
  lfs       f11, 0x0(r5)
  fmuls     f5, f5, f1
  lfs       f3, 0x10(r5)
  fmuls     f6, f6, f1
  lfs       f4, 0x20(r5)
  lfs       f7, 0x28(r5)
  fmuls     f11, f11, f0
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0
  fmuls     f7, f7, f1
  b         .loc_0x60

.loc_0x48:
  lfs       f3, -0x11DC(r2)
  lfs       f11, 0x20(r4)
  fmr       f4, f3
  fmr       f5, f3
  fmr       f6, f3
  fmr       f7, f11

.loc_0x60:
  lfs       f8, 0x0(r6)
  lfs       f2, 0x4(r6)
  lfs       f1, 0x24(r4)
  lfs       f0, 0x4(r4)
  lfs       f10, 0x8(r6)
  fadds     f9, f2, f1
  lwz       r4, 0x1C(r3)
  fsubs     f1, f2, f0
  lfs       f2, -0x11D4(r2)
  stfs      f11, 0x0(r4)
  lfs       f0, -0x11DC(r2)
  fadds     f1, f2, f1
  stfs      f3, 0x10(r4)
  stfs      f4, 0x20(r4)
  lwz       r4, 0x1C(r3)
  stfs      f0, 0x4(r4)
  stfs      f1, 0x14(r4)
  stfs      f0, 0x24(r4)
  lwz       r4, 0x1C(r3)
  stfs      f5, 0x8(r4)
  stfs      f6, 0x18(r4)
  stfs      f7, 0x28(r4)
  lwz       r3, 0x1C(r3)
  stfs      f8, 0xC(r3)
  stfs      f9, 0x1C(r3)
  stfs      f10, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2A84
 * Size:	0000C4
 */
void __ct__Q34Game8UmiMushi17UmimushiShadowMgrFPQ34Game8UmiMushi3Obj(void)
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
  stw       r31, 0x8(r3)
  li        r3, 0x20
  bl        -0x2CEC04
  mr.       r0, r3
  beq-      .loc_0x3C
  mr        r4, r31
  bl        -0xB183C
  mr        r0, r3

.loc_0x3C:
  stw       r0, 0xC(r30)
  li        r3, 0x24
  bl        -0x2CEC24
  mr.       r31, r3
  beq-      .loc_0x64
  li        r4, 0x2
  bl        -0xB17FC
  lis       r3, 0x804D
  addi      r0, r3, 0x52B8
  stw       r0, 0x0(r31)

.loc_0x64:
  stw       r31, 0x10(r30)
  lwz       r3, 0xC(r30)
  lwz       r4, 0x10(r30)
  bl        0x11E914
  li        r3, 0x24
  bl        -0x2CEC58
  mr.       r31, r3
  beq-      .loc_0x98
  li        r4, 0x2
  bl        -0xB1830
  lis       r3, 0x804D
  addi      r0, r3, 0x52A8
  stw       r0, 0x0(r31)

.loc_0x98:
  stw       r31, 0x14(r30)
  lwz       r3, 0xC(r30)
  lwz       r4, 0x14(r30)
  bl        0x11E8E0
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
 * Address:	802F2B48
 * Size:	000068
 */
void init__Q34Game8UmiMushi17UmimushiShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lis       r3, 0x8049
  lwz       r5, 0x8(r30)
  subi      r4, r3, 0x2E40
  lwz       r31, 0x174(r5)
  mr        r3, r31
  bl        0x14C470
  bl        0x136D28
  lis       r4, 0x8049
  stw       r3, 0x0(r30)
  subi      r4, r4, 0x2E34
  mr        r3, r31
  bl        0x14C458
  bl        0x136D10
  stw       r3, 0x4(r30)
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
 * Address:	802F2BB0
 * Size:	00015C
 */
void update__Q34Game8UmiMushi17UmimushiShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, 0x8(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, -0x11DC(r2)
  addi      r4, r1, 0x2C
  lfs       f1, 0x8(r1)
  addi      r6, r1, 0x20
  lfs       f0, 0xC(r1)
  addi      r7, r1, 0x14
  lfs       f4, 0x10(r1)
  lfs       f2, -0x11D8(r2)
  stfs      f1, 0x2C(r1)
  lfs       f1, -0x11CC(r2)
  stfs      f0, 0x30(r1)
  lfs       f0, -0x11C8(r2)
  stfs      f4, 0x34(r1)
  stfs      f3, 0x38(r1)
  stfs      f2, 0x3C(r1)
  stfs      f3, 0x40(r1)
  lwz       r3, 0x0(r31)
  lfs       f5, 0x2C(r3)
  lfs       f4, 0x1C(r3)
  lfs       f2, 0xC(r3)
  stfs      f2, 0x20(r1)
  stfs      f4, 0x24(r1)
  stfs      f5, 0x28(r1)
  stfs      f1, 0x44(r1)
  stfs      f3, 0x48(r1)
  stfs      f0, 0x4C(r1)
  stfs      f3, 0x50(r1)
  lwz       r3, 0x10(r31)
  lwz       r5, 0x4(r31)
  bl        -0x474
  lfs       f2, -0x11DC(r2)
  lfs       f1, -0x11C4(r2)
  lfs       f0, -0x11CC(r2)
  stfs      f2, 0x44(r1)
  stfs      f2, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  mr        r7, r3
  lwz       r3, 0x14(r31)
  lwz       r5, 0x4(r31)
  addi      r4, r1, 0x2C
  addi      r6, r1, 0x14
  bl        -0x2E0
  lwz       r3, 0x8(r31)
  lwz       r3, 0x17C(r3)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x130
  lwz       r12, 0x0(r3)
  lwz       r12, 0x204(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x130
  lwz       r3, 0x10(r31)
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  beq-      .loc_0x148
  bl        0x11E8F8
  b         .loc_0x148

.loc_0x130:
  lwz       r4, 0x10(r31)
  lwz       r0, 0xC(r4)
  cmplwi    r0, 0
  bne-      .loc_0x148
  lwz       r3, 0xC(r31)
  bl        0x11E6CC

.loc_0x148:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2D0C
 * Size:	000070
 */
void __dt__Q24Game24UmimushiSphereShadowNodeFv(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804D
  addi      r0, r4, 0x52A8
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x11E83C

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2CECA8

.loc_0x54:
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
 * Address:	802F2D7C
 * Size:	000070
 */
void __dt__Q24Game22UmimushiTubeShadowNodeFv(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804D
  addi      r0, r4, 0x52B8
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x11E7CC

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2CED18

.loc_0x54:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}