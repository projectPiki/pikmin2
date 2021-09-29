

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
 * Address:	802F89AC
 * Size:	00022C
 */
void makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<float>R10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lfs       f2, -0x1088(r2)
  stw       r0, 0x44(r1)
  lfs       f5, -0x1084(r2)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  lfs       f1, 0x0(r6)
  lfs       f0, 0x0(r5)
  fsubs     f0, f1, f0
  stfs      f5, 0xC(r1)
  fmuls     f6, f2, f0
  stfs      f6, 0x8(r1)
  lfs       f1, 0x8(r6)
  lfs       f0, 0x8(r5)
  fsubs     f0, f1, f0
  fmuls     f4, f2, f0
  stfs      f4, 0x10(r1)
  lfs       f8, 0x10(r4)
  lfs       f1, 0x14(r4)
  lfs       f7, 0xC(r4)
  fmuls     f0, f4, f8
  fmuls     f2, f6, f1
  fmuls     f3, f5, f7
  fmsubs    f1, f5, f1, f0
  fmsubs    f2, f4, f7, f2
  fmsubs    f3, f6, f8, f3
  fmuls     f0, f1, f1
  stfs      f1, 0x20(r1)
  fmuls     f4, f2, f2
  fmuls     f6, f3, f3
  stfs      f2, 0x24(r1)
  fadds     f0, f0, f4
  stfs      f3, 0x28(r1)
  fadds     f0, f6, f0
  fcmpo     cr0, f0, f5
  ble-      .loc_0xB8
  fmadds    f0, f1, f1, f4
  fadds     f1, f6, f0
  fcmpo     cr0, f1, f5
  ble-      .loc_0xBC
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xBC

.loc_0xB8:
  fmr       f1, f5

.loc_0xBC:
  lfs       f0, -0x1084(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xF4
  lfs       f0, -0x1080(r2)
  lfs       f2, 0x20(r1)
  fdivs     f3, f0, f1
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)

.loc_0xF4:
  lfs       f2, 0x20(r1)
  addi      r4, r1, 0x2C
  lfs       f5, 0x20(r31)
  lfs       f1, 0x24(r1)
  fmuls     f4, f2, f5
  lfs       f0, 0x28(r1)
  fmuls     f2, f1, f5
  lfs       f3, -0x1088(r2)
  fmuls     f1, f0, f5
  lfs       f0, -0x1084(r2)
  stfs      f4, 0x20(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  lfs       f2, 0x0(r6)
  lfs       f1, 0x0(r5)
  fadds     f1, f2, f1
  stfs      f0, 0x30(r1)
  fmuls     f0, f3, f1
  stfs      f0, 0x2C(r1)
  lfs       f1, 0x8(r6)
  lfs       f0, 0x8(r5)
  fadds     f0, f1, f0
  fmuls     f0, f3, f0
  stfs      f0, 0x34(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f2, -0x107C(r2)
  lfs       f0, -0x1084(r2)
  fadds     f2, f2, f1
  lfs       f1, -0x1078(r2)
  stfs      f0, 0x14(r1)
  stfs      f2, 0x30(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lfs       f3, 0x4(r31)
  fcmpo     cr0, f2, f3
  bge-      .loc_0x1A4
  fsubs     f0, f3, f2
  stfs      f3, 0x30(r1)
  fadds     f0, f1, f0
  stfs      f0, 0x18(r1)

.loc_0x1A4:
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x20(r3)
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x14(r3)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r3)
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x24(r1)
  stfs      f0, 0x18(r3)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x28(r3)
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x2C(r1)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x30(r1)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x34(r1)
  stfs      f0, 0x2C(r3)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802F8BD8
 * Size:	00012C
 */
void makeShadowSRT__Q24Game26SnakeWholeSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lfs       f1, -0x1084(r2)
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  lfs       f0, 0x20(r4)
  addi      r4, r1, 0x2C
  lwz       r3, -0x6CF8(r13)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f1, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x0(r5)
  stfs      f0, 0x2C(r1)
  stfs      f1, 0x30(r1)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x34(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f2, -0x107C(r2)
  lfs       f0, -0x1084(r2)
  fadds     f2, f2, f1
  lfs       f1, -0x1078(r2)
  stfs      f0, 0x14(r1)
  stfs      f2, 0x30(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lfs       f3, 0x4(r31)
  fcmpo     cr0, f2, f3
  bge-      .loc_0xA4
  fsubs     f0, f3, f2
  stfs      f3, 0x30(r1)
  fadds     f0, f1, f0
  stfs      f0, 0x18(r1)

.loc_0xA4:
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x20(r3)
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x14(r3)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r3)
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x24(r1)
  stfs      f0, 0x18(r3)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x28(r3)
  lwz       r3, 0x1C(r30)
  lfs       f0, 0x2C(r1)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x30(r1)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x34(r1)
  stfs      f0, 0x2C(r3)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802F8D04
 * Size:	0000EC
 */
void __ct__Q34Game10SnakeWhole19SnakeWholeShadowMgrFPQ34Game10SnakeWhole3Obj(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  stw       r29, 0x24(r3)
  li        r3, 0x20
  bl        -0x2D4E8C
  mr.       r0, r3
  beq-      .loc_0x44
  mr        r4, r29
  bl        -0xB7AC4
  mr        r0, r3

.loc_0x44:
  stw       r0, 0x28(r28)
  mr        r30, r28
  li        r29, 0

.loc_0x50:
  li        r3, 0x24
  bl        -0x2D4EB4
  mr.       r31, r3
  beq-      .loc_0x74
  li        r4, 0x2
  bl        -0xB7A8C
  lis       r3, 0x804D
  addi      r0, r3, 0x5A10
  stw       r0, 0x0(r31)

.loc_0x74:
  stw       r31, 0x2C(r30)
  lwz       r3, 0x28(r28)
  lwz       r4, 0x2C(r30)
  bl        0x118684
  li        r3, 0x24
  bl        -0x2D4EE8
  mr.       r31, r3
  beq-      .loc_0xA8
  li        r4, 0x2
  bl        -0xB7AC0
  lis       r3, 0x804D
  addi      r0, r3, 0x5A00
  stw       r0, 0x0(r31)

.loc_0xA8:
  stw       r31, 0x50(r30)
  lwz       r3, 0x28(r28)
  lwz       r4, 0x50(r30)
  bl        0x118650
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x9
  blt+      .loc_0x50
  lwz       r0, 0x24(r1)
  mr        r3, r28
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802F8DF0
 * Size:	0000C8
 */
void init__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x44(r1)
  subi      r11, r4, 0x2C4C
  stw       r31, 0x3C(r1)
  addi      r31, r1, 0x8
  stw       r30, 0x38(r1)
  mr        r30, r3
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  li        r28, 0
  lwz       r12, 0x24(r3)
  lwz       r10, 0x0(r11)
  lwz       r9, 0x4(r11)
  lwz       r8, 0x8(r11)
  lwz       r7, 0xC(r11)
  lwz       r6, 0x10(r11)
  lwz       r5, 0x14(r11)
  lwz       r4, 0x18(r11)
  lwz       r3, 0x1C(r11)
  lwz       r0, 0x20(r11)
  stw       r10, 0x8(r1)
  lwz       r29, 0x174(r12)
  stw       r9, 0xC(r1)
  stw       r8, 0x10(r1)
  stw       r7, 0x14(r1)
  stw       r6, 0x18(r1)
  stw       r5, 0x1C(r1)
  stw       r4, 0x20(r1)
  stw       r3, 0x24(r1)
  stw       r0, 0x28(r1)

.loc_0x80:
  lwz       r4, 0x0(r31)
  mr        r3, r29
  bl        0x14616C
  bl        0x130A24
  addi      r28, r28, 0x1
  stw       r3, 0x0(r30)
  cmpwi     r28, 0x9
  addi      r31, r31, 0x4
  addi      r30, r30, 0x4
  blt+      .loc_0x80
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802F8EB8
 * Size:	000078
 */
void startJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0x28(r3)
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  li        r30, 0
  mr        r31, r29

.loc_0x34:
  lwz       r3, 0x28(r29)
  lwz       r4, 0x2C(r31)
  bl        0x118514
  lwz       r3, 0x28(r29)
  lwz       r4, 0x50(r31)
  bl        0x118508
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x9
  blt+      .loc_0x34

.loc_0x5C:
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
 * Address:	802F8F30
 * Size:	000064
 */
void finishJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r4, 0x28(r3)
  lwz       r0, 0x10(r4)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  li        r30, 0
  mr        r31, r3

.loc_0x2C:
  lwz       r3, 0x2C(r31)
  bl        0x118670
  lwz       r3, 0x50(r31)
  bl        0x118668
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x9
  blt+      .loc_0x2C

.loc_0x4C:
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
 * Address:	802F8F94
 * Size:	00025C
 */
void update__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stmw      r27, 0xDC(r1)
  mr        r27, r3
  lwz       r3, 0x24(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xD0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x248
  lwz       r4, 0x24(r27)
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, -0x1084(r2)
  lis       r3, 0x8012
  lfs       f4, 0x8(r1)
  subi      r4, r3, 0xCB8
  lfs       f3, 0xC(r1)
  addi      r3, r1, 0x60
  lfs       f2, 0x10(r1)
  li        r5, 0
  lfs       f0, -0x1080(r2)
  li        r6, 0xC
  stfs      f4, 0x38(r1)
  li        r7, 0x9
  stfs      f3, 0x3C(r1)
  stfs      f2, 0x40(r1)
  stfs      f1, 0x44(r1)
  stfs      f0, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f1, 0x50(r1)
  stfs      f1, 0x54(r1)
  bl        -0x2377EC
  addi      r28, r1, 0x60
  li        r0, 0x3
  mr        r4, r27
  mr        r5, r28
  mtctr     r0

.loc_0xAC:
  lwz       r3, 0x0(r4)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x0(r5)
  stfs      f1, 0x4(r5)
  stfs      f2, 0x8(r5)
  lwz       r3, 0x4(r4)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0xC(r5)
  stfs      f1, 0x10(r5)
  stfs      f2, 0x14(r5)
  lwz       r3, 0x8(r4)
  addi      r4, r4, 0xC
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x18(r5)
  stfs      f1, 0x1C(r5)
  stfs      f2, 0x20(r5)
  addi      r5, r5, 0x24
  bdnz+     .loc_0xAC
  lis       r4, 0x8049
  lis       r3, 0x8049
  mr        r30, r27
  li        r27, 0
  subi      r31, r4, 0x2CDC
  subi      r29, r3, 0x2D00

.loc_0x124:
  lfs       f0, 0x0(r31)
  cmpwi     r27, 0x8
  stfs      f0, 0x58(r1)
  bge-      .loc_0x158
  addi      r0, r27, 0x1
  addi      r6, r1, 0x60
  mulli     r0, r0, 0xC
  lwz       r3, 0x2C(r30)
  mr        r5, r28
  addi      r4, r1, 0x38
  add       r6, r6, r0
  bl        -0x738
  b         .loc_0x1F8

.loc_0x158:
  lwz       r3, 0x0(r30)
  addi      r4, r1, 0x38
  lfs       f3, -0x1074(r2)
  addi      r5, r1, 0x2C
  lfs       f5, 0x0(r3)
  addi      r6, r1, 0x20
  lfs       f2, 0x0(r28)
  stfs      f5, 0x2C(r1)
  fmuls     f10, f5, f3
  frsp      f0, f5
  lfs       f6, 0x4(r28)
  lfs       f12, 0x10(r3)
  lfs       f4, 0x8(r28)
  fadds     f7, f10, f2
  stfs      f12, 0x30(r1)
  fmuls     f9, f12, f3
  lfs       f11, 0x20(r3)
  frsp      f1, f12
  fadds     f2, f0, f2
  fmuls     f8, f11, f3
  stfs      f11, 0x34(r1)
  frsp      f0, f11
  stfs      f5, 0x20(r1)
  fadds     f5, f9, f6
  fadds     f3, f8, f4
  stfs      f10, 0x2C(r1)
  fadds     f1, f1, f6
  fadds     f0, f0, f4
  stfs      f12, 0x24(r1)
  stfs      f11, 0x28(r1)
  stfs      f9, 0x30(r1)
  stfs      f8, 0x34(r1)
  stfs      f7, 0x2C(r1)
  stfs      f5, 0x30(r1)
  stfs      f3, 0x34(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r3, 0x2C(r30)
  bl        -0x7DC

.loc_0x1F8:
  lfs       f0, 0x0(r29)
  addi      r4, r1, 0x38
  addi      r5, r1, 0x14
  stfs      f0, 0x58(r1)
  lwz       r3, 0x0(r30)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f2, 0x1C(r1)
  lwz       r3, 0x50(r30)
  bl        -0x5E4
  addi      r27, r27, 0x1
  addi      r28, r28, 0xC
  cmpwi     r27, 0x9
  addi      r30, r30, 0x4
  addi      r29, r29, 0x4
  addi      r31, r31, 0x4
  blt+      .loc_0x124

.loc_0x248:
  lmw       r27, 0xDC(r1)
  lwz       r0, 0xF4(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}

/*
 * --INFO--
 * Address:	802F91F0
 * Size:	000070
 */
void __dt__Q24Game26SnakeWholeSphereShadowNodeFv(void)
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
  addi      r0, r4, 0x5A00
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x118358

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2D518C

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
 * Address:	802F9260
 * Size:	000070
 */
void __dt__Q24Game24SnakeWholeTubeShadowNodeFv(void)
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
  addi      r0, r4, 0x5A10
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x1182E8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2D51FC

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