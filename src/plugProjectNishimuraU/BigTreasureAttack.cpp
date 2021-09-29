

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
 * Address:	........
 * Size:	00004C
 */
void __ct__Q34Game11BigTreasure16AttackShadowNodeFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F39A8
 * Size:	000108
 */
void makeShadowSRT__Q34Game11BigTreasure16AttackShadowNodeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lfs       f1, -0x1160(r2)
  stw       r0, 0x44(r1)
  addi      r4, r1, 0x2C
  lfs       f0, -0x115C(r2)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lfs       f2, 0x28(r3)
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f1, 0x14(r1)
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f2, 0x28(r1)
  lwz       r5, 0x24(r31)
  lfs       f2, 0x8(r5)
  lfs       f1, 0x4(r5)
  lfs       f0, 0x0(r5)
  stfs      f0, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f2, 0x34(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f2, -0x1158(r2)
  lfs       f0, 0x8(r1)
  fadds     f1, f2, f1
  stfs      f1, 0x30(r1)
  lwz       r3, 0x1C(r31)
  stfs      f0, 0x0(r3)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x20(r3)
  lwz       r3, 0x1C(r31)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x14(r3)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r3)
  lwz       r3, 0x1C(r31)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x24(r1)
  stfs      f0, 0x18(r3)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x28(r3)
  lwz       r3, 0x1C(r31)
  lfs       f0, 0x2C(r1)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x30(r1)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x34(r1)
  stfs      f0, 0x2C(r3)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __ct__Q34Game11BigTreasure21BigTreasureFireAttackFPQ34Game11BigTreasure3ObjPQ34Game11BigTreasure26BigTreasureAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void init__Q34Game11BigTreasure21BigTreasureFireAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void start__Q34Game11BigTreasure21BigTreasureFireAttackFR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F3AB0
 * Size:	000374
 */
void update__Q34Game11BigTreasure21BigTreasureFireAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stfd      f31, 0x110(r1)
  psq_st    f31,0x118(r1),0,0
  stfd      f30, 0x100(r1)
  psq_st    f30,0x108(r1),0,0
  stfd      f29, 0xF0(r1)
  psq_st    f29,0xF8(r1),0,0
  stfd      f28, 0xE0(r1)
  psq_st    f28,0xE8(r1),0,0
  stfd      f27, 0xD0(r1)
  psq_st    f27,0xD8(r1),0,0
  stw       r31, 0xCC(r1)
  stw       r30, 0xC8(r1)
  mr        r30, r3
  lfs       f2, -0x1150(r2)
  lfs       f3, 0x20(r3)
  fcmpo     cr0, f3, f2
  bge-      .loc_0x74
  lwz       r3, -0x6514(r13)
  lfs       f1, -0x114C(r2)
  lfs       f0, 0x54(r3)
  fmadds    f0, f1, f0, f3
  stfs      f0, 0x20(r30)
  lfs       f0, 0x20(r30)
  fcmpo     cr0, f0, f2
  ble-      .loc_0x74
  stfs      f2, 0x20(r30)

.loc_0x74:
  lwz       r5, 0x1C(r30)
  addi      r3, r1, 0x54
  lfs       f0, -0x1148(r2)
  addi      r4, r1, 0x30
  lfs       f4, 0x28(r5)
  lfs       f3, -0x1140(r2)
  fmuls     f1, f0, f4
  lfs       f2, 0x20(r30)
  fmuls     f5, f3, f4
  lfs       f0, -0x1144(r2)
  lfs       f31, 0x24(r30)
  fmuls     f6, f2, f1
  lfs       f30, 0x28(r30)
  fmuls     f28, f0, f4
  lfs       f29, 0x2C(r30)
  fmuls     f27, f5, f5
  fmuls     f31, f31, f6
  lfs       f2, 0x30(r30)
  fmuls     f30, f30, f6
  lfs       f1, 0x34(r30)
  fmuls     f29, f29, f6
  lfs       f0, 0x38(r30)
  fadds     f31, f31, f2
  fadds     f30, f30, f1
  stfs      f3, 0x3C(r1)
  fadds     f29, f29, f0
  stfs      f31, 0x30(r1)
  stfs      f30, 0x34(r1)
  stfs      f29, 0x38(r1)
  bl        -0xC57F8
  li        r0, 0x1
  addi      r3, r1, 0x74
  stb       r0, 0x70(r1)
  addi      r4, r1, 0x54
  bl        -0xC57CC
  addi      r3, r1, 0x74
  bl        -0xC5758
  b         .loc_0x308

.loc_0x10C:
  addi      r3, r1, 0x74
  bl        -0xC567C
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x300
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f0, -0x1160(r2)
  fsubs     f1, f30, f1
  lfs       f2, 0x8(r1)
  lfs       f3, 0x10(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x168
  b         .loc_0x16C

.loc_0x168:
  fneg      f1, f1

.loc_0x16C:
  fcmpo     cr0, f1, f28
  bge-      .loc_0x300
  fsubs     f0, f29, f3
  fsubs     f1, f31, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f27
  bge-      .loc_0x300
  lwz       r7, 0x18(r30)
  lis       r5, 0x804B
  lis       r4, 0x804B
  mr        r3, r31
  lwz       r6, 0xC0(r7)
  subi      r5, r5, 0x5D00
  addi      r0, r4, 0x4878
  lfs       f0, 0x604(r6)
  stw       r5, 0x24(r1)
  stw       r7, 0x28(r1)
  stw       r0, 0x24(r1)
  stfs      f0, 0x2C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2CC
  mr        r3, r31
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x300
  bl        -0x22A704
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC4(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0xC0(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0xC0(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1138(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x280
  lwz       r5, 0x18(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f1, -0x1160(r2)
  lfs       f0, -0x1134(r2)
  lis       r3, 0x804B
  stw       r0, 0x40(r1)
  addi      r0, r3, 0x4E04
  mr        r3, r31
  addi      r4, r1, 0x40
  stw       r5, 0x44(r1)
  stw       r0, 0x40(r1)
  stfs      f1, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x300

.loc_0x280:
  lwz       r4, 0x18(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f0, -0x1160(r2)
  lis       r3, 0x804B
  stw       r0, 0x14(r1)
  addi      r5, r3, 0x4DE0
  li        r0, 0
  stw       r4, 0x18(r1)
  mr        r3, r31
  addi      r4, r1, 0x14
  stw       r5, 0x14(r1)
  stfs      f0, 0x1C(r1)
  stw       r0, 0x20(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x300

.loc_0x2CC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x300
  mr        r3, r31
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x300:
  addi      r3, r1, 0x74
  bl        -0xC58B4

.loc_0x308:
  addi      r3, r1, 0x74
  bl        -0xC5888
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x10C
  lfs       f1, 0x20(r30)
  lfs       f0, -0x1150(r2)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r0,r0,1,31,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  psq_l     f31,0x118(r1),0,0
  lfd       f31, 0x110(r1)
  psq_l     f30,0x108(r1),0,0
  lfd       f30, 0x100(r1)
  psq_l     f29,0xF8(r1),0,0
  lfd       f29, 0xF0(r1)
  psq_l     f28,0xE8(r1),0,0
  lfd       f28, 0xE0(r1)
  psq_l     f27,0xD8(r1),0,0
  lfd       f27, 0xD0(r1)
  lwz       r31, 0xCC(r1)
  lwz       r0, 0x124(r1)
  lwz       r30, 0xC8(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void finish__Q34Game11BigTreasure21BigTreasureFireAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __ct__Q34Game11BigTreasure20BigTreasureGasAttackFPQ34Game11BigTreasure3ObjPQ34Game11BigTreasure26BigTreasureAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void init__Q34Game11BigTreasure20BigTreasureGasAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void start__Q34Game11BigTreasure20BigTreasureGasAttackFR10Vector3<float>f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F3E24
 * Size:	000364
 */
void update__Q34Game11BigTreasure20BigTreasureGasAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stfd      f31, 0x100(r1)
  psq_st    f31,0x108(r1),0,0
  stfd      f30, 0xF0(r1)
  psq_st    f30,0xF8(r1),0,0
  stfd      f29, 0xE0(r1)
  psq_st    f29,0xE8(r1),0,0
  stfd      f28, 0xD0(r1)
  psq_st    f28,0xD8(r1),0,0
  stw       r31, 0xCC(r1)
  stw       r30, 0xC8(r1)
  mr        r30, r3
  lfs       f2, -0x1150(r2)
  lfs       f3, 0x20(r3)
  fcmpo     cr0, f3, f2
  bge-      .loc_0x6C
  lwz       r3, -0x6514(r13)
  lfs       f1, -0x111C(r2)
  lfs       f0, 0x54(r3)
  fmadds    f0, f1, f0, f3
  stfs      f0, 0x20(r30)
  lfs       f0, 0x20(r30)
  fcmpo     cr0, f0, f2
  ble-      .loc_0x6C
  stfs      f2, 0x20(r30)

.loc_0x6C:
  lfs       f1, 0x20(r30)
  lfs       f0, -0x1114(r2)
  lfs       f28, -0x1118(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x84
  lfs       f28, -0x115C(r2)

.loc_0x84:
  lfs       f0, -0x1110(r2)
  fmuls     f28, f28, f28
  lfs       f31, 0x24(r30)
  addi      r3, r1, 0x54
  fmuls     f0, f0, f1
  lfs       f30, 0x28(r30)
  lfs       f29, 0x2C(r30)
  lfs       f2, 0x30(r30)
  addi      r4, r1, 0x30
  fmuls     f31, f31, f0
  fmuls     f30, f30, f0
  lfs       f1, 0x34(r30)
  fmuls     f29, f29, f0
  lfs       f0, 0x38(r30)
  fadds     f31, f31, f2
  fadds     f30, f30, f1
  fadds     f29, f29, f0
  lfs       f0, -0x115C(r2)
  stfs      f31, 0x30(r1)
  stfs      f30, 0x34(r1)
  stfs      f29, 0x38(r1)
  stfs      f0, 0x3C(r1)
  bl        -0xC5B60
  li        r0, 0x1
  addi      r3, r1, 0x74
  stb       r0, 0x70(r1)
  addi      r4, r1, 0x54
  bl        -0xC5B34
  addi      r3, r1, 0x74
  bl        -0xC5AC0
  b         .loc_0x300

.loc_0x100:
  addi      r3, r1, 0x74
  bl        -0xC59E4
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2F8
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f0, -0x1160(r2)
  fsubs     f1, f30, f1
  lfs       f2, 0x8(r1)
  lfs       f3, 0x10(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x15C
  b         .loc_0x160

.loc_0x15C:
  fneg      f1, f1

.loc_0x160:
  lfs       f0, -0x110C(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2F8
  fsubs     f0, f29, f3
  fsubs     f1, f31, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f28
  bge-      .loc_0x2F8
  lwz       r7, 0x18(r30)
  lis       r5, 0x804B
  lis       r4, 0x804B
  mr        r3, r31
  lwz       r6, 0xC0(r7)
  subi      r5, r5, 0x5D00
  addi      r0, r4, 0x480C
  lfs       f0, 0x604(r6)
  stw       r5, 0x24(r1)
  stw       r7, 0x28(r1)
  stw       r0, 0x24(r1)
  stfs      f0, 0x2C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2C4
  mr        r3, r31
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2F8
  bl        -0x22AA70
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC4(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0xC0(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0xC0(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1108(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x278
  lwz       r5, 0x18(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f1, -0x1160(r2)
  lfs       f0, -0x1134(r2)
  lis       r3, 0x804B
  stw       r0, 0x40(r1)
  addi      r0, r3, 0x4E04
  mr        r3, r31
  addi      r4, r1, 0x40
  stw       r5, 0x44(r1)
  stw       r0, 0x40(r1)
  stfs      f1, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2F8

.loc_0x278:
  lwz       r4, 0x18(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f0, -0x1160(r2)
  lis       r3, 0x804B
  stw       r0, 0x14(r1)
  addi      r5, r3, 0x4DE0
  li        r0, 0
  stw       r4, 0x18(r1)
  mr        r3, r31
  addi      r4, r1, 0x14
  stw       r5, 0x14(r1)
  stfs      f0, 0x1C(r1)
  stw       r0, 0x20(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2F8

.loc_0x2C4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2F8
  mr        r3, r31
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x2F8:
  addi      r3, r1, 0x74
  bl        -0xC5C20

.loc_0x300:
  addi      r3, r1, 0x74
  bl        -0xC5BF4
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x100
  lfs       f1, 0x20(r30)
  lfs       f0, -0x1150(r2)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r0,r0,1,31,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  psq_l     f31,0x108(r1),0,0
  lfd       f31, 0x100(r1)
  psq_l     f30,0xF8(r1),0,0
  lfd       f30, 0xF0(r1)
  psq_l     f29,0xE8(r1),0,0
  lfd       f29, 0xE0(r1)
  psq_l     f28,0xD8(r1),0,0
  lfd       f28, 0xD0(r1)
  lwz       r31, 0xCC(r1)
  lwz       r0, 0x114(r1)
  lwz       r30, 0xC8(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void __ct__Q34Game11BigTreasure22BigTreasureWaterAttackFPQ34Game11BigTreasure3ObjPQ34Game11BigTreasure26BigTreasureAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __dt__Q23efx10TChasePos4Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void init__Q34Game11BigTreasure22BigTreasureWaterAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void start__Q34Game11BigTreasure22BigTreasureWaterAttackFR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F4188
 * Size:	000324
 */
void update__Q34Game11BigTreasure22BigTreasureWaterAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stfd      f31, 0xE0(r1)
  psq_st    f31,0xE8(r1),0,0
  stw       r31, 0xDC(r1)
  stw       r30, 0xD8(r1)
  stw       r29, 0xD4(r1)
  lwz       r5, -0x6514(r13)
  mr        r29, r3
  lfs       f0, -0x1104(r2)
  addi      r4, r29, 0x2C
  lfs       f3, 0x20(r3)
  li        r31, 0
  lfs       f2, 0x54(r5)
  fmr       f31, f0
  lfs       f1, 0x2C(r3)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x2C(r3)
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x24(r29)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x30(r29)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x30(r29)
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x28(r29)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x34(r29)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x34(r29)
  lfs       f1, 0x24(r29)
  fsubs     f0, f1, f0
  stfs      f0, 0x24(r29)
  lwz       r3, -0x6CF8(r13)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x30(r29)
  fcmpo     cr0, f0, f1
  bge-      .loc_0xB4
  stfs      f1, 0x30(r29)
  li        r31, 0x1
  lfs       f31, -0x110C(r2)

.loc_0xB4:
  lfs       f1, 0x2C(r29)
  fmuls     f31, f31, f31
  lfs       f0, -0x110C(r2)
  addi      r3, r1, 0x54
  stfs      f1, 0x30(r1)
  addi      r4, r1, 0x30
  lfs       f1, 0x30(r29)
  stfs      f1, 0x34(r1)
  lfs       f1, 0x34(r29)
  stfs      f1, 0x38(r1)
  stfs      f0, 0x3C(r1)
  bl        -0xC5EC8
  li        r0, 0x1
  addi      r3, r1, 0x74
  stb       r0, 0x70(r1)
  addi      r4, r1, 0x54
  bl        -0xC5E9C
  addi      r3, r1, 0x74
  bl        -0xC5E28
  b         .loc_0x2EC

.loc_0x104:
  addi      r3, r1, 0x74
  bl        -0xC5D4C
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2E4
  mr        r4, r30
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x30(r29)
  lfs       f0, 0xC(r1)
  lfs       f3, 0x2C(r29)
  fsubs     f4, f1, f0
  lfs       f0, 0x8(r1)
  lfs       f2, 0x34(r29)
  fsubs     f3, f3, f0
  lfs       f1, 0x10(r1)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0x2E4
  lwz       r4, 0x18(r29)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f0, -0x1160(r2)
  lis       r3, 0x804B
  stw       r0, 0x24(r1)
  addi      r0, r3, 0x4830
  mr        r3, r30
  stw       r4, 0x28(r1)
  stw       r0, 0x24(r1)
  stfs      f0, 0x2C(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2B0
  mr        r3, r30
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2E4
  bl        -0x22ADC4
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC4(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0xC0(r1)
  lfs       f2, -0x1150(r2)
  lfd       f1, 0xC0(r1)
  lfs       f0, -0x113C(r2)
  fsubs     f1, f1, f3
  fmuls     f1, f2, f1
  fdivs     f0, f1, f0
  fcmpo     cr0, f0, f2
  bge-      .loc_0x264
  lwz       r5, 0x18(r29)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f1, -0x1160(r2)
  lfs       f0, -0x1134(r2)
  lis       r3, 0x804B
  stw       r0, 0x40(r1)
  addi      r0, r3, 0x4E04
  mr        r3, r30
  addi      r4, r1, 0x40
  stw       r5, 0x44(r1)
  stw       r0, 0x40(r1)
  stfs      f1, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E4

.loc_0x264:
  lwz       r4, 0x18(r29)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f0, -0x1160(r2)
  lis       r3, 0x804B
  stw       r0, 0x14(r1)
  addi      r5, r3, 0x4DE0
  li        r0, 0
  stw       r4, 0x18(r1)
  mr        r3, r30
  addi      r4, r1, 0x14
  stw       r5, 0x14(r1)
  stfs      f0, 0x1C(r1)
  stw       r0, 0x20(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E4

.loc_0x2B0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2E4
  mr        r3, r30
  addi      r4, r1, 0x24
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x2E4:
  addi      r3, r1, 0x74
  bl        -0xC5F70

.loc_0x2EC:
  addi      r3, r1, 0x74
  bl        -0xC5F44
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x104
  mr        r3, r31
  psq_l     f31,0xE8(r1),0,0
  lwz       r0, 0xF4(r1)
  lfd       f31, 0xE0(r1)
  lwz       r31, 0xDC(r1)
  lwz       r30, 0xD8(r1)
  lwz       r29, 0xD4(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void finish__Q34Game11BigTreasure22BigTreasureWaterAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void __ct__Q34Game11BigTreasure21BigTreasureElecAttackFPQ34Game11BigTreasure3ObjPQ34Game11BigTreasure26BigTreasureAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __dt__Q23efx24TChasePosPosLocalZScale3Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F44AC
 * Size:	000084
 */
void __dt__Q23efx23TChasePosPosLocalZScaleFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804E
  addi      r3, r3, 0x67C4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x264864

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x2D045C

.loc_0x68:
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
 * Address:	........
 * Size:	000034
 */
void init__Q34Game11BigTreasure21BigTreasureElecAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void start__Q34Game11BigTreasure21BigTreasureElecAttackFR10Vector3<float>R10Vector3<float>b(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void startInteract__Q34Game11BigTreasure21BigTreasureElecAttackFPQ34Game11BigTreasure21BigTreasureElecAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F4530
 * Size:	000738
 */
void update__Q34Game11BigTreasure21BigTreasureElecAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x230(r1)
  mflr      r0
  stw       r0, 0x234(r1)
  stfd      f31, 0x220(r1)
  psq_st    f31,0x228(r1),0,0
  stfd      f30, 0x210(r1)
  psq_st    f30,0x218(r1),0,0
  stfd      f29, 0x200(r1)
  psq_st    f29,0x208(r1),0,0
  stfd      f28, 0x1F0(r1)
  psq_st    f28,0x1F8(r1),0,0
  stfd      f27, 0x1E0(r1)
  psq_st    f27,0x1E8(r1),0,0
  stfd      f26, 0x1D0(r1)
  psq_st    f26,0x1D8(r1),0,0
  stfd      f25, 0x1C0(r1)
  psq_st    f25,0x1C8(r1),0,0
  stfd      f24, 0x1B0(r1)
  psq_st    f24,0x1B8(r1),0,0
  stfd      f23, 0x1A0(r1)
  psq_st    f23,0x1A8(r1),0,0
  stfd      f22, 0x190(r1)
  psq_st    f22,0x198(r1),0,0
  stw       r31, 0x18C(r1)
  stw       r30, 0x188(r1)
  mr        r30, r3
  lbz       r0, 0x20(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1D0
  lfs       f4, 0x38(r30)
  lis       r3, 0x8050
  lfs       f3, -0x1104(r2)
  addi      r3, r3, 0x71A0
  lfs       f5, 0x3C(r30)
  addi      r8, r1, 0x34
  lfs       f0, 0x34(r30)
  fadds     f4, f4, f3
  lfs       f2, -0x1160(r2)
  addi      r7, r30, 0x28
  stfs      f0, 0x34(r1)
  li        r6, 0
  lfs       f1, 0x800(r3)
  stfs      f4, 0x38(r1)
  li        r0, -0x1
  lfs       f0, -0x10FC(r2)
  addi      r4, r1, 0xD8
  stfs      f5, 0x3C(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f3, 0x40(r1)
  lwz       r5, -0x6514(r13)
  lwz       r9, 0x1C(r30)
  lfs       f3, 0x0(r9)
  stw       r8, 0xD8(r1)
  stw       r7, 0xDC(r1)
  stfs      f3, 0xE0(r1)
  stfs      f2, 0xE4(r1)
  stw       r6, 0xE8(r1)
  stw       r6, 0x11C(r1)
  stb       r6, 0x14C(r1)
  stb       r6, 0xF1(r1)
  stb       r6, 0xF0(r1)
  stw       r6, 0x120(r1)
  stw       r6, 0xEC(r1)
  stb       r6, 0x168(r1)
  stw       r6, 0x16C(r1)
  stfs      f1, 0x104(r1)
  stfs      f0, 0x108(r1)
  stw       r0, 0x170(r1)
  stw       r6, 0x124(r1)
  stb       r6, 0xF2(r1)
  lwz       r0, 0x18(r30)
  stw       r0, 0xEC(r1)
  lwz       r12, 0x4(r3)
  lfs       f1, 0x54(r5)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x34(r1)
  lfs       f0, -0x1104(r2)
  stfs      f1, 0x34(r30)
  lfs       f1, 0x38(r1)
  stfs      f1, 0x38(r30)
  lfs       f1, 0x3C(r1)
  stfs      f1, 0x3C(r30)
  lfs       f1, 0x38(r30)
  fsubs     f0, f1, f0
  stfs      f0, 0x38(r30)
  lwz       r0, 0x11C(r1)
  cmplwi    r0, 0
  beq-      .loc_0x1B4
  lwz       r3, 0x1C(r30)
  lfs       f1, 0x28(r30)
  lfs       f0, 0x4(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x28(r30)
  lwz       r3, 0x1C(r30)
  lfs       f1, 0x30(r30)
  lfs       f0, 0x4(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x30(r30)
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1A8
  addi      r4, r30, 0x34
  li        r3, 0x595C
  bl        0x1799E0

.loc_0x1A8:
  lwz       r0, 0x11C(r1)
  stw       r0, 0x24(r30)
  b         .loc_0x1BC

.loc_0x1B4:
  li        r0, 0
  stw       r0, 0x24(r30)

.loc_0x1BC:
  lfs       f1, 0x2C(r30)
  lfs       f0, -0x1104(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0x2C(r30)
  b         .loc_0x200

.loc_0x1D0:
  lwz       r5, 0x18(r30)
  lis       r3, 0x8049
  subi      r4, r3, 0x2E10
  lwz       r3, 0x174(r5)
  bl        0x14A8D4
  bl        0x13518C
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x34(r30)
  stfs      f1, 0x38(r30)
  stfs      f2, 0x3C(r30)

.loc_0x200:
  lwz       r3, 0x40(r30)
  cmplwi    r3, 0
  beq-      .loc_0x6CC
  lfs       f0, 0x38(r3)
  lfs       f1, 0x38(r30)
  lfs       f4, 0x3C(r3)
  fsubs     f26, f0, f1
  lfs       f2, 0x3C(r30)
  lfs       f3, 0x34(r3)
  fsubs     f31, f4, f2
  lfs       f0, 0x34(r30)
  fmuls     f4, f26, f26
  fsubs     f30, f3, f0
  lfs       f3, -0x1160(r2)
  fmuls     f5, f31, f31
  fmadds    f4, f30, f30, f4
  fadds     f29, f5, f4
  fcmpo     cr0, f29, f3
  ble-      .loc_0x25C
  ble-      .loc_0x260
  fsqrte    f3, f29
  fmuls     f29, f3, f29
  b         .loc_0x260

.loc_0x25C:
  fmr       f29, f3

.loc_0x260:
  lfs       f3, -0x1160(r2)
  fcmpo     cr0, f29, f3
  ble-      .loc_0x284
  lfs       f3, -0x1150(r2)
  fdivs     f3, f3, f29
  fmuls     f30, f30, f3
  fmuls     f26, f26, f3
  fmuls     f31, f31, f3
  b         .loc_0x288

.loc_0x284:
  fmr       f29, f3

.loc_0x288:
  lfs       f4, -0x1160(r2)
  lfs       f5, -0x1150(r2)
  fmuls     f3, f30, f4
  fmuls     f6, f26, f4
  fmsubs    f25, f31, f4, f3
  fmsubs    f27, f30, f5, f6
  fnmsubs   f28, f31, f5, f6
  fmuls     f3, f25, f25
  fmuls     f5, f27, f27
  fmadds    f3, f28, f28, f3
  fadds     f5, f5, f3
  fcmpo     cr0, f5, f4
  ble-      .loc_0x2CC
  ble-      .loc_0x2D0
  fsqrte    f3, f5
  fmuls     f5, f3, f5
  b         .loc_0x2D0

.loc_0x2CC:
  fmr       f5, f4

.loc_0x2D0:
  lfs       f3, -0x1160(r2)
  fcmpo     cr0, f5, f3
  ble-      .loc_0x2F0
  lfs       f3, -0x1150(r2)
  fdivs     f3, f3, f5
  fmuls     f28, f28, f3
  fmuls     f25, f25, f3
  fmuls     f27, f27, f3

.loc_0x2F0:
  fmuls     f5, f28, f31
  lfs       f3, -0x1160(r2)
  fmuls     f6, f25, f30
  fmuls     f4, f27, f26
  fmsubs    f23, f27, f30, f5
  fmsubs    f24, f28, f26, f6
  fmsubs    f22, f25, f31, f4
  fmuls     f4, f23, f23
  fmuls     f5, f24, f24
  fmadds    f4, f22, f22, f4
  fadds     f4, f5, f4
  fcmpo     cr0, f4, f3
  ble-      .loc_0x334
  ble-      .loc_0x338
  fsqrte    f3, f4
  fmuls     f4, f3, f4
  b         .loc_0x338

.loc_0x334:
  fmr       f4, f3

.loc_0x338:
  lfs       f3, -0x1160(r2)
  fcmpo     cr0, f4, f3
  ble-      .loc_0x358
  lfs       f3, -0x1150(r2)
  fdivs     f3, f3, f4
  fmuls     f22, f22, f3
  fmuls     f23, f23, f3
  fmuls     f24, f24, f3

.loc_0x358:
  lfs       f4, -0x1114(r2)
  addi      r3, r1, 0x70
  lfs       f3, -0x115C(r2)
  addi      r4, r1, 0x24
  fmuls     f7, f4, f29
  fmuls     f4, f30, f7
  fmuls     f5, f26, f7
  fmuls     f6, f31, f7
  fadds     f4, f4, f0
  fadds     f5, f5, f1
  fadds     f6, f6, f2
  fadds     f0, f3, f7
  stfs      f4, 0x24(r1)
  stfs      f5, 0x28(r1)
  stfs      f6, 0x2C(r1)
  stfs      f0, 0x30(r1)
  bl        -0xC6528
  li        r0, 0x1
  addi      r3, r1, 0x90
  stb       r0, 0x8C(r1)
  addi      r4, r1, 0x70
  bl        -0xC64FC
  addi      r3, r1, 0x90
  bl        -0xC6488
  b         .loc_0x6BC

.loc_0x3BC:
  addi      r3, r1, 0x90
  bl        -0xC63AC
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6B4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x418
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6B4

.loc_0x418:
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0xC(r1)
  lfs       f0, 0x38(r30)
  lfs       f1, 0x8(r1)
  fsubs     f4, f2, f0
  lfs       f0, 0x34(r30)
  lfs       f2, 0x10(r1)
  fsubs     f3, f1, f0
  lfs       f0, 0x3C(r30)
  fmuls     f1, f25, f4
  fsubs     f2, f2, f0
  lfs       f0, -0x1160(r2)
  fmadds    f1, f28, f3, f1
  fmadds    f5, f27, f2, f1
  fcmpo     cr0, f5, f0
  ble-      .loc_0x474
  fmr       f1, f5
  b         .loc_0x478

.loc_0x474:
  fneg      f1, f5

.loc_0x478:
  lfs       f0, -0x1118(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x6B4
  fmuls     f1, f23, f4
  lfs       f0, -0x1160(r2)
  fmadds    f1, f22, f3, f1
  fmadds    f1, f24, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x4A0
  b         .loc_0x4A4

.loc_0x4A0:
  fneg      f1, f1

.loc_0x4A4:
  lfs       f0, -0x1104(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x6B4
  fmuls     f0, f26, f4
  lfs       f1, -0x1160(r2)
  fmadds    f0, f30, f3, f0
  fmadds    f0, f31, f2, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x6B4
  fcmpo     cr0, f0, f29
  bge-      .loc_0x6B4
  fmuls     f4, f5, f27
  fmuls     f3, f5, f28
  fmuls     f2, f4, f4
  fmadds    f0, f3, f3, f1
  fadds     f2, f2, f0
  fcmpo     cr0, f2, f1
  ble-      .loc_0x4FC
  ble-      .loc_0x500
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0x500

.loc_0x4FC:
  fmr       f2, f1

.loc_0x500:
  lfs       f0, -0x1160(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x51C
  lfs       f0, -0x1150(r2)
  fdivs     f0, f0, f2
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0

.loc_0x51C:
  lwz       r7, 0x18(r30)
  lis       r5, 0x804B
  lfs       f0, -0x10F8(r2)
  lis       r4, 0x804B
  lwz       r6, 0xC0(r7)
  lis       r3, 0x804B
  subi      r5, r5, 0x5D00
  fmuls     f3, f3, f0
  lfs       f1, 0x604(r6)
  fmuls     f4, f4, f0
  addi      r4, r4, 0x4974
  addi      r0, r3, 0x4908
  stw       r5, 0x58(r1)
  mr        r3, r31
  stw       r4, 0x58(r1)
  stw       r7, 0x5C(r1)
  stfs      f1, 0x60(r1)
  stfs      f3, 0x64(r1)
  stfs      f0, 0x68(r1)
  stfs      f4, 0x6C(r1)
  stw       r0, 0x58(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x680
  mr        r3, r31
  addi      r4, r1, 0x58
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x6B4
  bl        -0x22B538
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x17C(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x178(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0x178(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1114(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x634
  lwz       r5, 0x18(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f1, -0x1160(r2)
  lfs       f0, -0x1134(r2)
  lis       r3, 0x804B
  stw       r0, 0x44(r1)
  addi      r0, r3, 0x4E04
  mr        r3, r31
  addi      r4, r1, 0x44
  stw       r5, 0x48(r1)
  stw       r0, 0x44(r1)
  stfs      f1, 0x4C(r1)
  stfs      f1, 0x50(r1)
  stfs      f0, 0x54(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x6B4

.loc_0x634:
  lwz       r4, 0x18(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f0, -0x1160(r2)
  lis       r3, 0x804B
  stw       r0, 0x14(r1)
  addi      r5, r3, 0x4DE0
  li        r0, 0
  stw       r4, 0x18(r1)
  mr        r3, r31
  addi      r4, r1, 0x14
  stw       r5, 0x14(r1)
  stfs      f0, 0x1C(r1)
  stw       r0, 0x20(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x6B4

.loc_0x680:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6B4
  mr        r3, r31
  addi      r4, r1, 0x58
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x6B4:
  addi      r3, r1, 0x90
  bl        -0xC66E8

.loc_0x6BC:
  addi      r3, r1, 0x90
  bl        -0xC66BC
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x3BC

.loc_0x6CC:
  li        r3, 0
  psq_l     f31,0x228(r1),0,0
  lfd       f31, 0x220(r1)
  psq_l     f30,0x218(r1),0,0
  lfd       f30, 0x210(r1)
  psq_l     f29,0x208(r1),0,0
  lfd       f29, 0x200(r1)
  psq_l     f28,0x1F8(r1),0,0
  lfd       f28, 0x1F0(r1)
  psq_l     f27,0x1E8(r1),0,0
  lfd       f27, 0x1E0(r1)
  psq_l     f26,0x1D8(r1),0,0
  lfd       f26, 0x1D0(r1)
  psq_l     f25,0x1C8(r1),0,0
  lfd       f25, 0x1C0(r1)
  psq_l     f24,0x1B8(r1),0,0
  lfd       f24, 0x1B0(r1)
  psq_l     f23,0x1A8(r1),0,0
  lfd       f23, 0x1A0(r1)
  psq_l     f22,0x198(r1),0,0
  lfd       f22, 0x190(r1)
  lwz       r31, 0x18C(r1)
  lwz       r0, 0x234(r1)
  lwz       r30, 0x188(r1)
  mtlr      r0
  addi      r1, r1, 0x230
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void finish__Q34Game11BigTreasure21BigTreasureElecAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F4C68
 * Size:	0007B4
 */
void __ct__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure3Obj(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stmw      r22, 0x8(r1)
  lis       r5, 0x8012
  mr        r31, r3
  subi      r0, r5, 0xCB8
  mr        r22, r4
  mr        r4, r0
  addi      r3, r31, 0x28
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x3
  bl        -0x233468
  lis       r4, 0x8012
  addi      r3, r31, 0x70
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x4
  bl        -0x233484
  li        r0, 0
  lfs       f0, -0x1160(r2)
  stb       r0, 0x0(r31)
  li        r3, 0x48
  stb       r0, 0x1(r31)
  stb       r0, 0x2(r31)
  stb       r0, 0x3(r31)
  stw       r22, 0x4(r31)
  stfs      f0, 0x54(r31)
  stfs      f0, 0x58(r31)
  stfs      f0, 0x5C(r31)
  stfs      f0, 0x60(r31)
  bl        -0x2D0E50
  cmplwi    r3, 0
  beq-      .loc_0x128
  lfs       f0, -0x10F4(r2)
  li        r6, 0xF
  lfs       f1, -0x10F0(r2)
  li        r5, 0
  stfs      f0, 0x0(r3)
  li        r4, 0x1
  lfs       f0, -0x10EC(r2)
  li        r0, 0x3
  stfs      f1, 0x4(r3)
  lfs       f1, -0x10E8(r2)
  stfs      f0, 0x8(r3)
  lfs       f0, -0x10E4(r2)
  stfs      f1, 0xC(r3)
  lfs       f1, -0x1148(r2)
  stfs      f0, 0x10(r3)
  lfs       f0, -0x10E0(r2)
  stfs      f1, 0x14(r3)
  lfs       f1, -0x10DC(r2)
  stfs      f0, 0x18(r3)
  lfs       f0, -0x1150(r2)
  stfs      f1, 0x1C(r3)
  lfs       f4, -0x10D8(r2)
  stw       r6, 0x20(r3)
  lfs       f3, -0x110C(r2)
  stw       r5, 0x24(r3)
  lfs       f2, -0x1114(r2)
  stfs      f0, 0x28(r3)
  lfs       f1, -0x10D4(r2)
  stb       r4, 0x2C(r3)
  lfs       f0, -0x10D0(r2)
  stw       r0, 0x30(r3)
  stfs      f4, 0x34(r3)
  stfs      f3, 0x38(r3)
  stfs      f2, 0x3C(r3)
  stfs      f1, 0x40(r3)
  stfs      f0, 0x44(r3)

.loc_0x128:
  stw       r3, 0x11C(r31)
  li        r3, 0x18
  bl        -0x2D0EF4
  mr.       r0, r3
  beq-      .loc_0x144
  bl        0x11C5EC
  mr        r0, r3

.loc_0x144:
  stw       r0, 0x10(r31)
  li        r3, 0x18
  bl        -0x2D0F10
  mr.       r0, r3
  beq-      .loc_0x160
  bl        0x11C5D0
  mr        r0, r3

.loc_0x160:
  stw       r0, 0x14(r31)
  li        r25, 0

.loc_0x168:
  li        r3, 0x3C
  bl        -0x2D0F30
  mr.       r22, r3
  beq-      .loc_0x1B8
  lwz       r24, 0x11C(r31)
  lwz       r23, 0x4(r31)
  bl        0x11C5A8
  lis       r3, 0x804D
  lfs       f0, -0x1160(r2)
  addi      r0, r3, 0x59BC
  stw       r0, 0x0(r22)
  stw       r23, 0x18(r22)
  stw       r24, 0x1C(r22)
  stfs      f0, 0x20(r22)
  stfs      f0, 0x2C(r22)
  stfs      f0, 0x28(r22)
  stfs      f0, 0x24(r22)
  stfs      f0, 0x38(r22)
  stfs      f0, 0x34(r22)
  stfs      f0, 0x30(r22)

.loc_0x1B8:
  lwz       r3, 0x14(r31)
  mr        r4, r22
  bl        0x11C5E0
  addi      r25, r25, 0x1
  cmpwi     r25, 0x8
  blt+      .loc_0x168
  li        r3, 0x18
  bl        -0x2D0F98
  mr.       r0, r3
  beq-      .loc_0x1E8
  bl        0x11C548
  mr        r0, r3

.loc_0x1E8:
  stw       r0, 0x4C(r31)
  li        r3, 0x18
  bl        -0x2D0FB4
  mr.       r0, r3
  beq-      .loc_0x204
  bl        0x11C52C
  mr        r0, r3

.loc_0x204:
  stw       r0, 0x50(r31)
  li        r25, 0

.loc_0x20C:
  li        r3, 0x3C
  bl        -0x2D0FD4
  mr.       r22, r3
  beq-      .loc_0x25C
  lwz       r24, 0x11C(r31)
  lwz       r23, 0x4(r31)
  bl        0x11C504
  lis       r3, 0x804D
  lfs       f0, -0x1160(r2)
  addi      r0, r3, 0x59AC
  stw       r0, 0x0(r22)
  stw       r23, 0x18(r22)
  stw       r24, 0x1C(r22)
  stfs      f0, 0x20(r22)
  stfs      f0, 0x2C(r22)
  stfs      f0, 0x28(r22)
  stfs      f0, 0x24(r22)
  stfs      f0, 0x38(r22)
  stfs      f0, 0x34(r22)
  stfs      f0, 0x30(r22)

.loc_0x25C:
  lwz       r3, 0x50(r31)
  mr        r4, r22
  bl        0x11C53C
  addi      r25, r25, 0x1
  cmpwi     r25, 0xC8
  blt+      .loc_0x20C
  li        r3, 0x18
  bl        -0x2D103C
  mr.       r0, r3
  beq-      .loc_0x28C
  bl        0x11C4A4
  mr        r0, r3

.loc_0x28C:
  stw       r0, 0xB0(r31)
  li        r3, 0x18
  bl        -0x2D1058
  mr.       r0, r3
  beq-      .loc_0x2A8
  bl        0x11C488
  mr        r0, r3

.loc_0x2A8:
  stw       r0, 0xB4(r31)
  li        r24, 0

.loc_0x2B0:
  li        r3, 0x3C
  bl        -0x2D1078
  mr.       r4, r3
  beq-      .loc_0x33C
  lwz       r23, 0x11C(r31)
  mr        r25, r4
  lwz       r22, 0x4(r31)
  bl        0x11C45C
  lis       r3, 0x804D
  lfs       f0, -0x1160(r2)
  addi      r0, r3, 0x599C
  li        r3, 0x54
  stw       r0, 0x0(r25)
  stw       r22, 0x18(r25)
  stw       r23, 0x1C(r25)
  stfs      f0, 0x28(r25)
  stfs      f0, 0x24(r25)
  stfs      f0, 0x20(r25)
  stfs      f0, 0x34(r25)
  stfs      f0, 0x30(r25)
  stfs      f0, 0x2C(r25)
  bl        -0x2D10C8
  mr.       r22, r3
  beq-      .loc_0x334
  addi      r4, r25, 0x2C
  li        r5, 0x117
  li        r6, 0x118
  li        r7, 0x119
  li        r8, 0x11A
  bl        0xBB464
  lis       r3, 0x804D
  addi      r0, r3, 0x5980
  stw       r0, 0x0(r22)

.loc_0x334:
  stw       r22, 0x38(r25)
  mr        r4, r25

.loc_0x33C:
  lwz       r3, 0xB4(r31)
  bl        0x11C460
  addi      r24, r24, 0x1
  cmpwi     r24, 0x10
  blt+      .loc_0x2B0
  li        r3, 0x18
  bl        -0x2D1118
  mr.       r0, r3
  beq-      .loc_0x368
  bl        0x11C3C8
  mr        r0, r3

.loc_0x368:
  stw       r0, 0xC8(r31)
  li        r3, 0x18
  bl        -0x2D1134
  mr.       r0, r3
  beq-      .loc_0x384
  bl        0x11C3AC
  mr        r0, r3

.loc_0x384:
  lis       r5, 0x804E
  lis       r4, 0x804E
  lis       r3, 0x804D
  stw       r0, 0xCC(r31)
  addi      r5, r5, 0x698C
  addi      r4, r4, 0x6940
  addi      r3, r3, 0x58BC
  li        r26, 0
  addi      r25, r5, 0x14
  addi      r24, r4, 0x14
  addi      r30, r3, 0x14

.loc_0x3B0:
  li        r3, 0x50
  bl        -0x2D1178
  mr.       r4, r3
  beq-      .loc_0x504
  lwz       r27, 0x11C(r31)
  mr        r22, r4
  lwz       r23, 0x4(r31)
  bl        0x11C35C
  lis       r3, 0x804D
  li        r4, 0x1
  addi      r3, r3, 0x5924
  li        r0, 0
  stw       r3, 0x0(r22)
  li        r3, 0x58
  lfs       f0, -0x1160(r2)
  stw       r23, 0x18(r22)
  stw       r27, 0x1C(r22)
  stb       r4, 0x20(r22)
  stw       r0, 0x24(r22)
  stfs      f0, 0x30(r22)
  stfs      f0, 0x2C(r22)
  stfs      f0, 0x28(r22)
  stfs      f0, 0x3C(r22)
  stfs      f0, 0x38(r22)
  stfs      f0, 0x34(r22)
  stw       r0, 0x40(r22)
  bl        -0x2D11DC
  mr.       r23, r3
  beq-      .loc_0x44C
  lfs       f1, -0x1100(r2)
  li        r4, 0
  li        r5, 0
  li        r6, 0x108
  li        r7, 0x109
  li        r8, 0x10A
  bl        0xBBC64
  lis       r3, 0x804D
  addi      r0, r3, 0x5908
  stw       r0, 0x0(r23)

.loc_0x44C:
  stw       r23, 0x44(r22)
  li        r3, 0x14
  bl        -0x2D1218
  cmplwi    r3, 0
  beq-      .loc_0x4CC
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x0(r3)
  addi      r7, r5, 0x6940
  addi      r6, r22, 0x34
  li        r5, 0x248
  stw       r25, 0x4(r3)
  addi      r0, r4, 0x58BC
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r24, 0x4(r3)
  stw       r6, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r30, 0x4(r3)

.loc_0x4CC:
  stw       r3, 0x48(r22)
  li        r3, 0x2C
  bl        -0x2D1298
  mr.       r23, r3
  beq-      .loc_0x4FC
  addi      r4, r22, 0x34
  li        r5, 0x24A
  li        r6, 0x24B
  bl        0xBB0EC
  lis       r3, 0x804D
  addi      r0, r3, 0x58A0
  stw       r0, 0x0(r23)

.loc_0x4FC:
  stw       r23, 0x4C(r22)
  mr        r4, r22

.loc_0x504:
  lwz       r3, 0xCC(r31)
  bl        0x11C298
  addi      r26, r26, 0x1
  cmpwi     r26, 0x11
  blt+      .loc_0x3B0
  li        r3, 0x7C
  bl        -0x2D12E0
  mr.       r22, r3
  beq-      .loc_0x554
  li        r4, 0
  li        r5, 0x10C
  li        r6, 0x10D
  li        r7, 0x10E
  li        r8, 0x10F
  li        r9, 0x257
  li        r10, 0x110
  bl        0xBB570
  lis       r3, 0x804F
  subi      r0, r3, 0x5EE4
  stw       r0, 0x0(r22)

.loc_0x554:
  lis       r4, 0x804E
  lis       r3, 0x804D
  addi      r4, r4, 0x67C4
  stw       r22, 0x18(r31)
  addi      r3, r3, 0x57EC
  mr        r29, r31
  mr        r28, r31
  addi      r27, r4, 0x14
  addi      r26, r3, 0x14
  li        r23, 0

.loc_0x57C:
  li        r3, 0x34
  bl        -0x2D1344
  mr.       r22, r3
  beq-      .loc_0x5AC
  addi      r4, r31, 0x64
  addi      r5, r29, 0x54
  li        r6, 0x113
  li        r7, 0x114
  bl        0xBB7C8
  lis       r3, 0x804D
  addi      r0, r3, 0x5838
  stw       r0, 0x0(r22)

.loc_0x5AC:
  stw       r22, 0xA0(r29)
  mr        r30, r28
  li        r22, 0

.loc_0x5B8:
  li        r3, 0x1C
  bl        -0x2D1380
  cmplwi    r3, 0
  beq-      .loc_0x63C
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x67C4
  lfs       f0, -0x10EC(r2)
  li        r5, 0x10B
  stw       r25, 0x4(r3)
  addi      r0, r4, 0x57EC
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r27, 0x4(r3)
  stw       r8, 0x10(r3)
  stw       r8, 0x14(r3)
  stfs      f0, 0x18(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r26, 0x4(r3)

.loc_0x63C:
  addi      r22, r22, 0x1
  stw       r3, 0xD0(r30)
  cmpwi     r22, 0x3
  addi      r30, r30, 0x4
  blt+      .loc_0x5B8
  addi      r23, r23, 0x1
  addi      r28, r28, 0xC
  cmpwi     r23, 0x4
  addi      r29, r29, 0x4
  blt+      .loc_0x57C
  li        r3, 0x14
  bl        -0x2D142C
  cmplwi    r3, 0
  beq-      .loc_0x6E0
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  addi      r4, r4, 0x57A0
  li        r8, 0
  stw       r0, 0x0(r3)
  li        r7, 0x2B2
  addi      r6, r5, 0x6940
  li        r5, 0x24F
  stw       r25, 0x4(r3)
  addi      r0, r4, 0x14
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r24, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x6E0:
  stw       r3, 0x100(r31)
  li        r3, 0x2C
  bl        -0x2D14AC
  mr.       r22, r3
  beq-      .loc_0x710
  li        r4, 0
  li        r5, 0x250
  li        r6, 0x251
  bl        0xBAED8
  lis       r3, 0x804D
  addi      r0, r3, 0x5784
  stw       r0, 0x0(r22)

.loc_0x710:
  stw       r22, 0x104(r31)
  li        r3, 0x20
  bl        -0x2D14DC
  mr.       r0, r3
  beq-      .loc_0x730
  lwz       r4, 0x4(r31)
  bl        -0xB4114
  mr        r0, r3

.loc_0x730:
  stw       r0, 0x114(r31)
  li        r3, 0x40
  bl        -0x2D13F4
  li        r25, 0
  lis       r4, 0x804D
  stw       r3, 0x118(r31)
  mr        r22, r25
  lfs       f31, -0x1160(r2)
  addi      r23, r4, 0x59CC
  li        r26, 0

.loc_0x758:
  li        r3, 0x2C
  bl        -0x2D1520
  mr.       r24, r3
  beq-      .loc_0x77C
  li        r4, 0x2
  bl        -0xB40F8
  stw       r23, 0x0(r24)
  stw       r22, 0x24(r24)
  stfs      f31, 0x28(r24)

.loc_0x77C:
  lwz       r3, 0x118(r31)
  addi      r26, r26, 0x1
  cmpwi     r26, 0x10
  stwx      r24, r3, r25
  addi      r25, r25, 0x4
  blt+      .loc_0x758
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  lmw       r22, 0x8(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __dt__Q23efx10TChaseMtx6Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F541C
 * Size:	0001C8
 */
void init__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f0, -0x1160(r2)
  stw       r0, 0x24(r1)
  li        r0, 0
  stmw      r26, 0x8(r1)
  mr        r31, r3
  stb       r0, 0x0(r3)
  stb       r0, 0x1(r3)
  stb       r0, 0x2(r3)
  stb       r0, 0x3(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x54(r3)
  stfs      f0, 0x58(r3)
  stfs      f0, 0x5C(r3)
  stfs      f0, 0x60(r3)
  lwz       r3, 0x14(r3)
  lwz       r3, 0x10(r3)
  b         .loc_0x70

.loc_0x50:
  stfs      f0, 0x20(r3)
  stfs      f0, 0x2C(r3)
  stfs      f0, 0x28(r3)
  stfs      f0, 0x24(r3)
  stfs      f0, 0x38(r3)
  stfs      f0, 0x34(r3)
  stfs      f0, 0x30(r3)
  lwz       r3, 0x4(r3)

.loc_0x70:
  cmplwi    r3, 0
  bne+      .loc_0x50
  lwz       r3, 0x50(r31)
  lfs       f0, -0x1160(r2)
  lwz       r3, 0x10(r3)
  b         .loc_0xA8

.loc_0x88:
  stfs      f0, 0x20(r3)
  stfs      f0, 0x2C(r3)
  stfs      f0, 0x28(r3)
  stfs      f0, 0x24(r3)
  stfs      f0, 0x38(r3)
  stfs      f0, 0x34(r3)
  stfs      f0, 0x30(r3)
  lwz       r3, 0x4(r3)

.loc_0xA8:
  cmplwi    r3, 0
  bne+      .loc_0x88
  lwz       r3, 0xB4(r31)
  lfs       f0, -0x1160(r2)
  lwz       r3, 0x10(r3)
  b         .loc_0xDC

.loc_0xC0:
  stfs      f0, 0x28(r3)
  stfs      f0, 0x24(r3)
  stfs      f0, 0x20(r3)
  stfs      f0, 0x34(r3)
  stfs      f0, 0x30(r3)
  stfs      f0, 0x2C(r3)
  lwz       r3, 0x4(r3)

.loc_0xDC:
  cmplwi    r3, 0
  bne+      .loc_0xC0
  lwz       r4, 0xCC(r31)
  li        r3, 0x1
  lfs       f0, -0x1160(r2)
  li        r0, 0
  lwz       r4, 0x10(r4)
  b         .loc_0x124

.loc_0xFC:
  stb       r3, 0x20(r4)
  stw       r0, 0x24(r4)
  stfs      f0, 0x30(r4)
  stfs      f0, 0x2C(r4)
  stfs      f0, 0x28(r4)
  stfs      f0, 0x3C(r4)
  stfs      f0, 0x38(r4)
  stfs      f0, 0x34(r4)
  stw       r0, 0x40(r4)
  lwz       r4, 0x4(r4)

.loc_0x124:
  cmplwi    r4, 0
  bne+      .loc_0xFC
  lwz       r5, 0x4(r31)
  lis       r3, 0x8049
  subi      r4, r3, 0x2DFC
  lwz       r3, 0x174(r5)
  bl        0x149A8C
  bl        0x134344
  mr        r0, r3
  lwz       r3, 0x18(r31)
  mr        r4, r0
  bl        0xBB274
  li        r27, 0
  mr        r28, r31

.loc_0x15C:
  li        r26, 0
  mr        r29, r28

.loc_0x164:
  lwz       r3, 0x4(r31)
  mr        r4, r27
  addi      r5, r26, 0x1
  bl        -0x18658
  mr        r30, r3
  lwz       r3, 0x4(r31)
  mr        r4, r27
  mr        r5, r26
  bl        -0x1866C
  lwz       r4, 0xD0(r29)
  addi      r26, r26, 0x1
  cmpwi     r26, 0x3
  addi      r29, r29, 0x4
  stw       r3, 0x10(r4)
  stw       r30, 0x14(r4)
  blt+      .loc_0x164
  addi      r27, r27, 0x1
  addi      r28, r28, 0xC
  cmpwi     r27, 0x4
  blt+      .loc_0x15C
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802F55E4
 * Size:	0000E8
 */
void update__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        0x294
  mr        r3, r28
  bl        0x938
  mr        r3, r28
  bl        0x12F4
  mr        r3, r28
  bl        0x2010
  mr        r3, r28
  bl        0x264C
  mr        r31, r28
  li        r30, 0
  li        r29, 0

.loc_0x50:
  lbz       r0, 0x0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x88
  lwz       r3, 0x4(r28)
  li        r30, 0x1
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x88
  mr        r4, r29
  bl        -0x17E24
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88
  mr        r3, r28
  bl        0x224C

.loc_0x88:
  addi      r29, r29, 0x1
  addi      r31, r31, 0x1
  cmpwi     r29, 0x4
  blt+      .loc_0x50
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0xC8
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x8(r28)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x8(r28)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0xC(r28)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0xC(r28)

.loc_0xC8:
  lwz       r0, 0x24(r1)
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
 * Address:	........
 * Size:	00008C
 */
void setFireAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F56CC
 * Size:	000130
 */
void startFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lbz       r0, 0x1(r3)
  cmplwi    r0, 0
  bne-      .loc_0x11C
  li        r0, 0x1
  lfs       f0, -0x1160(r2)
  stb       r0, 0x1(r31)
  li        r4, 0x1
  stfs      f0, 0x8(r31)
  stfs      f0, 0xC(r31)
  lwz       r3, 0x4(r31)
  bl        -0x1742C
  rlwinm    r3,r3,0,24,31
  neg       r0, r3
  or        r0, r0, r3
  srawi     r3, r0, 0x1F
  addi      r0, r3, 0x2
  cmpwi     r0, 0x2
  beq-      .loc_0x84
  bge-      .loc_0x98
  cmpwi     r0, 0x1
  bge-      .loc_0x6C
  b         .loc_0x98

.loc_0x6C:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x103C(r4)
  stfs      f0, 0x28(r3)
  b         .loc_0x98

.loc_0x84:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x1064(r4)
  stfs      f0, 0x28(r3)

.loc_0x98:
  mr        r3, r31
  bl        0x2BC
  mr        r3, r31
  bl        .loc_0x130
  lis       r3, 0x8051
  lwz       r9, 0x11C(r31)
  addi      r8, r3, 0x41E4
  lis       r4, 0x804B
  lwz       r7, 0x0(r8)
  lis       r3, 0x804B
  lwz       r6, 0x4(r8)
  subi      r5, r4, 0x5814
  lfs       f3, 0x28(r9)
  subi      r0, r3, 0x5D24
  lwz       r3, 0x8(r8)
  addi      r4, r1, 0x14
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  lfs       f2, 0x8(r1)
  stw       r3, 0x10(r1)
  lfs       f1, 0xC(r1)
  stw       r5, 0x14(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  stw       r0, 0x14(r1)
  stfs      f3, 0x24(r1)
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x11C:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x130:
*/
}

/*
 * --INFO--
 * Address:	802F57FC
 * Size:	00009C
 */
void startNewFireList__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x14(r3)
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x84
  mr        r31, r3
  bl        0x11BDA8
  lfs       f1, -0x1160(r2)
  mr        r4, r31
  lfs       f0, -0x1154(r2)
  stfs      f1, 0x20(r31)
  lfs       f1, 0x1C(r30)
  stfs      f1, 0x24(r31)
  lfs       f1, 0x20(r30)
  stfs      f1, 0x28(r31)
  lfs       f1, 0x24(r30)
  stfs      f1, 0x2C(r31)
  lfs       f1, 0x28(r30)
  stfs      f1, 0x30(r31)
  lfs       f1, 0x2C(r30)
  stfs      f1, 0x34(r31)
  lfs       f1, 0x30(r30)
  stfs      f1, 0x38(r31)
  lfs       f1, 0x34(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r31)
  lwz       r3, 0x10(r30)
  bl        0x11BB8C

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
 * Address:	802F5898
 * Size:	00018C
 */
void updateFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0x1
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r3, 0x10(r3)
  lwz       r29, 0x10(r3)
  b         .loc_0xC0

.loc_0x30:
  lwz       r31, 0x4(r29)
  mr        r3, r29
  bl        -0x1E20
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  mr        r3, r29
  bl        0x11BCF0
  lwz       r3, 0x14(r28)
  mr        r4, r29
  bl        0x11BB1C

.loc_0x58:
  lwz       r3, 0x10(r28)
  lwz       r0, 0x10(r3)
  cmplw     r29, r0
  bne-      .loc_0x84
  mr        r3, r28
  mr        r4, r29
  li        r5, 0x2
  bl        0x188
  addi      r4, r28, 0x40
  li        r3, 0x5152
  bl        0x17879C

.loc_0x84:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0xBC
  lfs       f1, 0x20(r29)
  lfs       f0, -0x10CC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xBC
  mr        r3, r28
  mr        r4, r29
  li        r30, 0
  li        r5, 0x1
  bl        0x150
  addi      r4, r28, 0x34
  li        r3, 0x5151
  bl        0x178764

.loc_0xBC:
  mr        r29, r31

.loc_0xC0:
  cmplwi    r29, 0
  bne+      .loc_0x30
  lbz       r0, 0x1(r28)
  cmplwi    r0, 0
  beq-      .loc_0x16C
  mr        r3, r28
  bl        .loc_0x18C
  lfs       f1, 0x8(r28)
  lfs       f0, -0x10DC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x160
  lfs       f0, -0x1160(r2)
  stfs      f0, 0x8(r28)
  lwz       r3, 0x14(r28)
  lwz       r31, 0x10(r3)
  cmplwi    r31, 0
  beq-      .loc_0x160
  mr        r3, r31
  bl        0x11BC30
  lfs       f1, -0x1160(r2)
  mr        r4, r31
  lfs       f0, -0x1154(r2)
  stfs      f1, 0x20(r31)
  lfs       f1, 0x1C(r28)
  stfs      f1, 0x24(r31)
  lfs       f1, 0x20(r28)
  stfs      f1, 0x28(r31)
  lfs       f1, 0x24(r28)
  stfs      f1, 0x2C(r31)
  lfs       f1, 0x28(r28)
  stfs      f1, 0x30(r31)
  lfs       f1, 0x2C(r28)
  stfs      f1, 0x34(r31)
  lfs       f1, 0x30(r28)
  stfs      f1, 0x38(r31)
  lfs       f1, 0x34(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r31)
  lwz       r3, 0x10(r28)
  bl        0x11BA14

.loc_0x160:
  addi      r4, r28, 0x28
  li        r3, 0x5150
  bl        0x1786B4

.loc_0x16C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x18C:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void finishFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F5A24
 * Size:	000070
 */
void updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8049
  lwz       r5, 0x4(r31)
  subi      r4, r3, 0x2DFC
  lwz       r3, 0x174(r5)
  bl        0x14959C
  bl        0x133E54
  lfs       f0, 0x0(r3)
  stfs      f0, 0x1C(r31)
  lfs       f0, 0x10(r3)
  stfs      f0, 0x20(r31)
  lfs       f0, 0x20(r3)
  stfs      f0, 0x24(r31)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x2C(r31)
  lfs       f0, 0x2C(r3)
  stfs      f0, 0x30(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F5A94
 * Size:	0000A0
 */
void updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki(void)
{
/*
.loc_0x0:
  mulli     r0, r5, 0xC
  lwz       r5, 0x11C(r3)
  lfs       f3, 0x20(r4)
  lfs       f1, 0x28(r5)
  lfs       f0, 0x24(r4)
  add       r3, r3, r0
  lfs       f2, -0x1148(r2)
  stfs      f0, 0x28(r3)
  fmuls     f2, f2, f1
  lfs       f0, -0x1154(r2)
  lfs       f1, 0x28(r4)
  stfs      f1, 0x2C(r3)
  fmuls     f2, f3, f2
  lfs       f1, 0x2C(r4)
  stfs      f1, 0x30(r3)
  lfs       f1, 0x28(r3)
  fmuls     f1, f1, f2
  stfs      f1, 0x28(r3)
  lfs       f1, 0x2C(r3)
  fmuls     f1, f1, f2
  stfs      f1, 0x2C(r3)
  lfs       f1, 0x30(r3)
  fmuls     f1, f1, f2
  stfs      f1, 0x30(r3)
  lfs       f2, 0x28(r3)
  lfs       f1, 0x30(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x28(r3)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x34(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x2C(r3)
  lfs       f2, 0x30(r3)
  lfs       f1, 0x38(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x30(r3)
  lfs       f1, 0x2C(r3)
  fsubs     f0, f1, f0
  stfs      f0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void setGasAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F5B34
 * Size:	0002C4
 */
void startGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
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
  stw       r28, 0x20(r1)
  mr        r31, r3
  lbz       r0, 0x2(r3)
  cmplwi    r0, 0
  bne-      .loc_0x28C
  li        r0, 0x1
  lfs       f0, -0x1160(r2)
  stb       r0, 0x2(r31)
  li        r4, 0x2
  stfs      f0, 0x8(r31)
  stfs      f0, 0xC(r31)
  lwz       r3, 0x4(r31)
  bl        -0x178B8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  li        r0, 0x1
  b         .loc_0xBC

.loc_0x74:
  bl        -0x22C608
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x8(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1114(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB8
  li        r0, 0x2
  b         .loc_0xBC

.loc_0xB8:
  li        r0, 0x3

.loc_0xBC:
  cmpwi     r0, 0x2
  beq-      .loc_0x110
  bge-      .loc_0xD4
  cmpwi     r0, 0x1
  bge-      .loc_0xE0
  b         .loc_0x17C

.loc_0xD4:
  cmpwi     r0, 0x4
  bge-      .loc_0x17C
  b         .loc_0x148

.loc_0xE0:
  lwz       r3, 0x11C(r31)
  li        r0, 0x3
  lfs       f0, -0x110C(r2)
  stw       r0, 0x30(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f1, 0x10B4(r4)
  stfs      f1, 0x34(r3)
  lwz       r3, 0x11C(r31)
  stfs      f0, 0x38(r3)
  b         .loc_0x17C

.loc_0x110:
  lwz       r3, 0x11C(r31)
  li        r0, 0x4
  stw       r0, 0x30(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x10DC(r4)
  stfs      f0, 0x34(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x1104(r4)
  stfs      f0, 0x38(r3)
  b         .loc_0x17C

.loc_0x148:
  lwz       r3, 0x11C(r31)
  li        r0, 0x4
  stw       r0, 0x30(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x10DC(r4)
  stfs      f0, 0x34(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x112C(r4)
  stfs      f0, 0x38(r3)

.loc_0x17C:
  bl        -0x22C710
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x8(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1114(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1C8
  lwz       r3, 0x11C(r31)
  li        r0, 0x1
  stb       r0, 0x2C(r3)
  b         .loc_0x1D4

.loc_0x1C8:
  lwz       r3, 0x11C(r31)
  li        r0, 0
  stb       r0, 0x2C(r3)

.loc_0x1D4:
  mr        r3, r31
  bl        0x57C
  bl        -0x22C770
  lwz       r4, 0x11C(r31)
  lis       r30, 0x4330
  xoris     r3, r3, 0x8000
  stw       r30, 0x8(r1)
  lwz       r0, 0x30(r4)
  mr        r29, r31
  stw       r3, 0xC(r1)
  li        r28, 0
  xoris     r0, r0, 0x8000
  lfd       f31, -0x1130(r2)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f2, f0, f31
  lfs       f3, -0x10C8(r2)
  stw       r30, 0x10(r1)
  lfs       f1, -0x113C(r2)
  lfd       f0, 0x10(r1)
  fmuls     f2, f3, f2
  fsubs     f0, f0, f31
  fdivs     f30, f2, f1
  fdivs     f29, f3, f0
  b         .loc_0x274

.loc_0x238:
  xoris     r0, r28, 0x8000
  stw       r30, 0x10(r1)
  li        r4, 0
  stw       r0, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f31
  fmadds    f0, f29, f0, f30
  stfs      f0, 0x54(r29)
  lwz       r3, 0xA0(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x4
  addi      r28, r28, 0x1

.loc_0x274:
  lwz       r3, 0x11C(r31)
  lwz       r0, 0x30(r3)
  cmpw      r28, r0
  blt+      .loc_0x238
  mr        r3, r31
  bl        .loc_0x2C4

.loc_0x28C:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r0, 0x64(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr       

.loc_0x2C4:
*/
}

/*
 * --INFO--
 * Address:	802F5DF8
 * Size:	00014C
 */
void startNewGasList__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  mr        r28, r3
  mr        r31, r28
  b         .loc_0x11C

.loc_0x2C:
  lwz       r3, 0x50(r28)
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x114
  mr        r29, r3
  bl        0x11B798
  lfs       f3, 0x54(r31)
  lfs       f0, -0x1160(r2)
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  stfs      f0, 0x20(r29)
  bge-      .loc_0x60
  fneg      f1, f3

.loc_0x60:
  lfs       f2, -0x1128(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1160(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f4, 0x4(r3)
  bge-      .loc_0xB8
  lfs       f0, -0x1124(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0xD0

.loc_0xB8:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0xD0:
  stfs      f0, 0x24(r29)
  mr        r4, r29
  lfs       f1, -0x1160(r2)
  lfs       f0, -0x1120(r2)
  stfs      f1, 0x28(r29)
  stfs      f4, 0x2C(r29)
  lfs       f1, 0x64(r28)
  stfs      f1, 0x30(r29)
  lfs       f1, 0x68(r28)
  stfs      f1, 0x34(r29)
  lfs       f1, 0x6C(r28)
  stfs      f1, 0x38(r29)
  lfs       f1, 0x34(r29)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r29)
  lwz       r3, 0x4C(r28)
  bl        0x11B500

.loc_0x114:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x11C:
  lwz       r3, 0x11C(r28)
  lwz       r0, 0x30(r3)
  cmpw      r30, r0
  blt+      .loc_0x2C
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802F5F44
 * Size:	000344
 */
void updateGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r26, 0x28(r1)
  mr        r31, r3
  addi      r29, r1, 0x8
  li        r30, 0
  lwz       r0, -0x10C4(r2)
  lwz       r3, 0x4C(r3)
  stw       r0, 0x8(r1)
  lwz       r27, 0x10(r3)
  b         .loc_0x124

.loc_0x30:
  lwz       r28, 0x4(r27)
  mr        r3, r27
  bl        -0x2158
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  mr        r3, r27
  bl        0x11B644
  lwz       r3, 0x50(r31)
  mr        r4, r27
  bl        0x11B470

.loc_0x58:
  lwz       r3, 0x11C(r31)
  lwz       r3, 0x30(r3)
  divw      r0, r30, r3
  mullw     r0, r0, r3
  sub       r26, r30, r0
  lbzx      r0, r29, r26
  cmplwi    r0, 0
  beq-      .loc_0x11C
  lfs       f1, 0x20(r27)
  lfs       f0, -0x1114(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x11C
  li        r0, 0
  mr        r3, r31
  stbx      r0, r29, r26
  mr        r4, r27
  mr        r5, r26
  bl        0x300
  cmpwi     r26, 0
  bne-      .loc_0xC0
  mulli     r4, r26, 0xC
  li        r3, 0x5156
  addi      r4, r4, 0x70
  add       r4, r31, r4
  bl        0x1780B8
  b         .loc_0x11C

.loc_0xC0:
  cmpwi     r26, 0x1
  bne-      .loc_0xE0
  mulli     r4, r26, 0xC
  li        r3, 0x5157
  addi      r4, r4, 0x70
  add       r4, r31, r4
  bl        0x178098
  b         .loc_0x11C

.loc_0xE0:
  cmpwi     r26, 0x2
  bne-      .loc_0x100
  mulli     r4, r26, 0xC
  li        r3, 0x5158
  addi      r4, r4, 0x70
  add       r4, r31, r4
  bl        0x178078
  b         .loc_0x11C

.loc_0x100:
  cmpwi     r26, 0x3
  bne-      .loc_0x11C
  mulli     r4, r26, 0xC
  li        r3, 0x5159
  addi      r4, r4, 0x70
  add       r4, r31, r4
  bl        0x178058

.loc_0x11C:
  mr        r27, r28
  addi      r30, r30, 0x1

.loc_0x124:
  cmplwi    r27, 0
  bne+      .loc_0x30
  lbz       r0, 0x2(r31)
  cmplwi    r0, 0
  beq-      .loc_0x330
  mr        r3, r31
  bl        .loc_0x344
  mr        r4, r31
  li        r6, 0
  b         .loc_0x1C8

.loc_0x14C:
  lwz       r3, 0x4(r31)
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x1C0
  lbz       r0, 0x2C(r5)
  cmplwi    r0, 0
  beq-      .loc_0x194
  lfs       f2, 0x54(r4)
  lfs       f1, 0x34(r5)
  lfs       f0, -0x10C8(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x54(r4)
  lfs       f1, 0x54(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1C0
  fsubs     f0, f1, f0
  stfs      f0, 0x54(r4)
  b         .loc_0x1C0

.loc_0x194:
  lfs       f2, 0x54(r4)
  lfs       f1, 0x34(r5)
  lfs       f0, -0x1160(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x54(r4)
  lfs       f1, 0x54(r4)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1C0
  lfs       f0, -0x10C8(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x54(r4)

.loc_0x1C0:
  addi      r4, r4, 0x4
  addi      r6, r6, 0x1

.loc_0x1C8:
  lwz       r5, 0x11C(r31)
  lwz       r0, 0x30(r5)
  cmpw      r6, r0
  blt+      .loc_0x14C
  lfs       f1, 0x8(r31)
  lfs       f0, -0x10DC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2FC
  lfs       f0, -0x1160(r2)
  mr        r29, r31
  li        r30, 0
  stfs      f0, 0x8(r31)
  b         .loc_0x2EC

.loc_0x1FC:
  lwz       r3, 0x50(r31)
  lwz       r28, 0x10(r3)
  cmplwi    r28, 0
  beq-      .loc_0x2E4
  mr        r3, r28
  bl        0x11B47C
  lfs       f3, 0x54(r29)
  lfs       f0, -0x1160(r2)
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  stfs      f0, 0x20(r28)
  bge-      .loc_0x230
  fneg      f1, f3

.loc_0x230:
  lfs       f2, -0x1128(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1160(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f4, 0x4(r3)
  bge-      .loc_0x288
  lfs       f0, -0x1124(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x2A0

.loc_0x288:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x2A0:
  stfs      f0, 0x24(r28)
  mr        r4, r28
  lfs       f1, -0x1160(r2)
  lfs       f0, -0x1120(r2)
  stfs      f1, 0x28(r28)
  stfs      f4, 0x2C(r28)
  lfs       f1, 0x64(r31)
  stfs      f1, 0x30(r28)
  lfs       f1, 0x68(r31)
  stfs      f1, 0x34(r28)
  lfs       f1, 0x6C(r31)
  stfs      f1, 0x38(r28)
  lfs       f1, 0x34(r28)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r28)
  lwz       r3, 0x4C(r31)
  bl        0x11B1E4

.loc_0x2E4:
  addi      r29, r29, 0x4
  addi      r30, r30, 0x1

.loc_0x2EC:
  lwz       r3, 0x11C(r31)
  lwz       r0, 0x30(r3)
  cmpw      r30, r0
  blt+      .loc_0x1FC

.loc_0x2FC:
  lwz       r3, 0x11C(r31)
  lfs       f1, 0xC(r31)
  lfs       f0, 0x38(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x324
  lbz       r0, 0x2C(r3)
  lfs       f0, -0x1160(r2)
  xori      r0, r0, 0x1
  stb       r0, 0x2C(r3)
  stfs      f0, 0xC(r31)

.loc_0x324:
  addi      r4, r31, 0x64
  li        r3, 0x5155
  bl        0x177E44

.loc_0x330:
  lmw       r26, 0x28(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x344:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void finishGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F6288
 * Size:	000058
 */
void updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8049
  lwz       r5, 0x4(r31)
  subi      r4, r3, 0x2DE8
  lwz       r3, 0x174(r5)
  bl        0x148D38
  bl        0x1335F0
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x64(r31)
  stfs      f1, 0x68(r31)
  stfs      f2, 0x6C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F62E0
 * Size:	0000A0
 */
void updateGasSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure20BigTreasureGasAttacki(void)
{
/*
.loc_0x0:
  mulli     r0, r5, 0xC
  lwz       r5, 0x11C(r3)
  lfs       f3, 0x20(r4)
  lfs       f1, 0x28(r5)
  lfs       f0, 0x24(r4)
  add       r3, r3, r0
  lfs       f2, -0x1110(r2)
  stfs      f0, 0x70(r3)
  fmuls     f2, f2, f1
  lfs       f0, -0x1120(r2)
  lfs       f1, 0x28(r4)
  stfs      f1, 0x74(r3)
  fmuls     f2, f3, f2
  lfs       f1, 0x2C(r4)
  stfs      f1, 0x78(r3)
  lfs       f1, 0x70(r3)
  fmuls     f1, f1, f2
  stfs      f1, 0x70(r3)
  lfs       f1, 0x74(r3)
  fmuls     f1, f1, f2
  stfs      f1, 0x74(r3)
  lfs       f1, 0x78(r3)
  fmuls     f1, f1, f2
  stfs      f1, 0x78(r3)
  lfs       f2, 0x70(r3)
  lfs       f1, 0x30(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x70(r3)
  lfs       f2, 0x74(r3)
  lfs       f1, 0x34(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x74(r3)
  lfs       f2, 0x78(r3)
  lfs       f1, 0x38(r4)
  fadds     f1, f2, f1
  stfs      f1, 0x78(r3)
  lfs       f1, 0x74(r3)
  fsubs     f0, f1, f0
  stfs      f0, 0x74(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void setWaterAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F6380
 * Size:	00010C
 */
void startWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x3(r3)
  cmplwi    r0, 0
  bne-      .loc_0xF8
  li        r0, 0x1
  lfs       f0, -0x1160(r2)
  stb       r0, 0x3(r31)
  li        r4, 0x3
  stfs      f0, 0x8(r31)
  stfs      f0, 0xC(r31)
  lwz       r3, 0x4(r31)
  bl        -0x180E0
  rlwinm    r3,r3,0,24,31
  neg       r0, r3
  or        r0, r0, r3
  srawi     r3, r0, 0x1F
  addi      r0, r3, 0x2
  cmpwi     r0, 0x2
  beq-      .loc_0xAC
  bge-      .loc_0xE8
  cmpwi     r0, 0x1
  bge-      .loc_0x6C
  b         .loc_0xE8

.loc_0x6C:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x117C(r4)
  stfs      f0, 0x3C(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x11A4(r4)
  stfs      f0, 0x40(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x11CC(r4)
  stfs      f0, 0x44(r3)
  b         .loc_0xE8

.loc_0xAC:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x11F4(r4)
  stfs      f0, 0x3C(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x121C(r4)
  stfs      f0, 0x40(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0x1244(r4)
  stfs      f0, 0x44(r3)

.loc_0xE8:
  mr        r3, r31
  bl        0x600
  mr        r3, r31
  bl        .loc_0x10C

.loc_0xF8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x10C:
*/
}

/*
 * --INFO--
 * Address:	802F648C
 * Size:	00047C
 */
void startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stfd      f28, 0xA0(r1)
  psq_st    f28,0xA8(r1),0,0
  stfd      f27, 0x90(r1)
  psq_st    f27,0x98(r1),0,0
  stfd      f26, 0x80(r1)
  psq_st    f26,0x88(r1),0,0
  stfd      f25, 0x70(r1)
  psq_st    f25,0x78(r1),0,0
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  mr        r31, r3
  lwz       r3, 0xB4(r3)
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x42C
  lwz       r5, 0x4(r31)
  lis       r3, 0x8049
  subi      r4, r3, 0x2DD8
  lwz       r3, 0x174(r5)
  bl        0x148AE8
  bl        0x1333A0
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x20(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x20(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x11F
  li        r5, 0x120
  stw       r0, 0x20(r1)
  addi      r0, r4, 0x5738
  li        r4, 0
  stw       r3, 0x30(r1)
  addi      r3, r1, 0x20
  sth       r7, 0x24(r1)
  sth       r5, 0x26(r1)
  stw       r6, 0x28(r1)
  stw       r6, 0x2C(r1)
  stw       r0, 0x20(r1)
  bl        0xB8E3C
  lfs       f30, 0xBC(r31)
  mr        r3, r31
  lfs       f29, 0xC0(r31)
  lfs       f28, 0xC4(r31)
  bl        0x554
  cmplwi    r3, 0
  beq-      .loc_0x114
  mr        r4, r3
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f27, 0x14(r1)
  lfs       f26, 0x1C(r1)
  b         .loc_0x230

.loc_0x114:
  lwz       r4, 0x4(r31)
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f27, 0x8(r1)
  lfs       f26, 0x10(r1)
  bl        -0x22D020
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x38(r1)
  lfs       f1, -0x10C0(r2)
  lfd       f2, 0x38(r1)
  lfs       f0, -0x113C(r2)
  fsubs     f2, f2, f3
  fmuls     f1, f1, f2
  fdivs     f31, f1, f0
  bl        -0x22D050
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x44(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x40(r1)
  lfs       f2, -0x10C8(r2)
  lfd       f0, 0x40(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1160(r2)
  fmuls     f2, f2, f3
  fdivs     f2, f2, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1CC
  lfs       f0, -0x1124(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f1, f0
  b         .loc_0x1F0

.loc_0x1CC:
  lfs       f0, -0x1128(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x50(r1)
  lwz       r0, 0x54(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r3, r0

.loc_0x1F0:
  lfs       f0, -0x1160(r2)
  fmadds    f27, f31, f1, f27
  fcmpo     cr0, f2, f0
  bge-      .loc_0x204
  fneg      f2, f2

.loc_0x204:
  lfs       f0, -0x1128(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x58(r1)
  lwz       r0, 0x5C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r3, r0
  lfs       f0, 0x4(r3)
  fmadds    f26, f31, f0, f26

.loc_0x230:
  fsubs     f1, f26, f28
  lfs       f0, -0x1160(r2)
  fsubs     f2, f27, f30
  fmuls     f1, f1, f1
  fmadds    f25, f2, f2, f1
  fcmpo     cr0, f25, f0
  ble-      .loc_0x25C
  ble-      .loc_0x260
  fsqrte    f0, f25
  fmuls     f25, f0, f25
  b         .loc_0x260

.loc_0x25C:
  fmr       f25, f0

.loc_0x260:
  lwz       r3, 0x11C(r31)
  lfs       f31, 0x44(r3)
  bl        -0x22D154
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x5C(r1)
  lfs       f0, -0x10BC(r2)
  stw       r0, 0x58(r1)
  lfd       f3, -0x1130(r2)
  fmuls     f2, f0, f31
  lfd       f0, 0x58(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1150(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fsubs     f1, f1, f31
  fadds     f2, f25, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x2B4
  fmr       f2, f0

.loc_0x2B4:
  lwz       r4, -0x6514(r13)
  lis       r3, 0x8051
  lfs       f0, -0x1114(r2)
  fsubs     f1, f27, f30
  lfs       f5, 0x54(r4)
  subi      r3, r3, 0x2E20
  lfs       f4, -0x10B8(r2)
  fmuls     f3, f0, f2
  lfs       f0, -0x1104(r2)
  fdivs     f4, f4, f5
  fdivs     f27, f4, f0
  fdivs     f0, f27, f0
  fdivs     f0, f3, f0
  fsubs     f2, f26, f28
  fdivs     f26, f0, f5
  bl        -0x2C1674
  lwz       r3, 0x11C(r31)
  fmr       f31, f1
  lfs       f25, 0x40(r3)
  bl        -0x22D1EC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x54(r1)
  lfs       f0, -0x10BC(r2)
  stw       r0, 0x50(r1)
  lfd       f3, -0x1130(r2)
  fmuls     f2, f0, f25
  lfd       f0, 0x50(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1160(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fsubs     f1, f1, f25
  fadds     f3, f31, f1
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  bge-      .loc_0x350
  fneg      f1, f3

.loc_0x350:
  lfs       f2, -0x1128(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1160(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f31, f26, f0
  bge-      .loc_0x3AC
  lfs       f0, -0x1124(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f25, f0
  b         .loc_0x3C4

.loc_0x3AC:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f25, r4, r0

.loc_0x3C4:
  lwz       r3, 0xB4(r31)
  lwz       r30, 0x10(r3)
  mr        r3, r30
  bl        0x11AD74
  fmuls     f0, f26, f25
  li        r4, 0
  stfs      f0, 0x20(r30)
  stfs      f27, 0x24(r30)
  stfs      f31, 0x28(r30)
  stfs      f30, 0x2C(r30)
  stfs      f29, 0x30(r30)
  stfs      f28, 0x34(r30)
  lwz       r3, 0x38(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB0(r31)
  mr        r4, r30
  bl        0x11AB6C
  mr        r3, r31
  mr        r4, r30
  bl        0x11F0
  addi      r4, r31, 0xBC
  li        r3, 0x5954
  bl        0x177800

.loc_0x42C:
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  psq_l     f27,0x98(r1),0,0
  lfd       f27, 0x90(r1)
  psq_l     f26,0x88(r1),0,0
  lfd       f26, 0x80(r1)
  psq_l     f25,0x78(r1),0,0
  lfd       f25, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r0, 0xE4(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	802F6908
 * Size:	000164
 */
void updateWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  lwz       r3, 0xB0(r3)
  lwz       r29, 0x10(r3)
  b         .loc_0x108

.loc_0x28:
  lwz       r30, 0x4(r29)
  mr        r3, r29
  bl        -0x27B0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x104
  lwz       r3, 0x38(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  lis       r5, 0x804B
  subi      r0, r3, 0x5814
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  lis       r3, 0x804D
  subi      r11, r5, 0x5808
  addi      r10, r4, 0x6A3C
  lfs       f0, 0x2C(r29)
  addi      r0, r3, 0x5934
  li        r9, 0x11B
  li        r8, 0x11C
  stfs      f0, 0xC(r1)
  li        r7, 0x11D
  li        r6, 0x11E
  li        r5, 0
  lfs       f0, 0x30(r29)
  addi      r3, r1, 0x18
  addi      r4, r1, 0x8
  stfs      f0, 0x10(r1)
  lfs       f0, 0x34(r29)
  stw       r11, 0x18(r1)
  stw       r10, 0x18(r1)
  stfs      f0, 0x14(r1)
  sth       r9, 0x1C(r1)
  sth       r8, 0x1E(r1)
  sth       r7, 0x20(r1)
  sth       r6, 0x22(r1)
  stw       r5, 0x24(r1)
  stw       r5, 0x28(r1)
  stw       r5, 0x2C(r1)
  stw       r5, 0x30(r1)
  stw       r0, 0x18(r1)
  bl        0xB8788
  addi      r4, r29, 0x2C
  li        r3, 0x5953
  bl        0x1776CC
  mr        r3, r29
  bl        0x11ABE0
  lwz       r3, 0xB4(r31)
  mr        r4, r29
  bl        0x11AA0C
  mr        r3, r31
  mr        r4, r29
  bl        0x1190

.loc_0x104:
  mr        r29, r30

.loc_0x108:
  cmplwi    r29, 0
  bne+      .loc_0x28
  lbz       r0, 0x3(r31)
  cmplwi    r0, 0
  beq-      .loc_0x148
  mr        r3, r31
  bl        .loc_0x164
  lwz       r3, 0x11C(r31)
  lfs       f1, 0x8(r31)
  lfs       f0, 0x3C(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x148
  lfs       f0, -0x1160(r2)
  mr        r3, r31
  stfs      f0, 0x8(r31)
  bl        -0x5C0

.loc_0x148:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr       

.loc_0x164:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void finishWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F6A6C
 * Size:	000058
 */
void updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8049
  lwz       r5, 0x4(r31)
  subi      r4, r3, 0x2DD8
  lwz       r3, 0x174(r5)
  bl        0x148554
  bl        0x132E0C
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0xBC(r31)
  stfs      f1, 0xC0(r31)
  stfs      f2, 0xC4(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F6AC4
 * Size:	0002D8
 */
void getWaterTargetCreature__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  li        r4, 0
  lis       r5, 0x804B
  stw       r0, 0x444(r1)
  subi      r5, r5, 0x4364
  cmplwi    r4, 0
  stw       r31, 0x43C(r1)
  li        r31, 0
  stw       r30, 0x438(r1)
  mr        r30, r3
  stw       r29, 0x434(r1)
  stw       r28, 0x430(r1)
  lwz       r0, -0x6D0C(r13)
  stw       r4, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r4, 0xC(r1)
  stw       r0, 0x10(r1)
  bne-      .loc_0x68
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xF4

.loc_0x68:
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xD8

.loc_0x84:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xF4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xD8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x84

.loc_0xF4:
  addi      r28, r1, 0x18
  b         .loc_0x21C

.loc_0xFC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r29, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  lbz       r0, 0x2B8(r29)
  cmpwi     r0, 0
  beq-      .loc_0x160
  stw       r29, 0x0(r28)
  addi      r28, r28, 0x4
  addi      r31, r31, 0x1

.loc_0x160:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x18C
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x21C

.loc_0x18C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x200

.loc_0x1AC:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x21C
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x200:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1AC

.loc_0x21C:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xFC
  cmpwi     r31, 0
  beq-      .loc_0x2A0
  bl        -0x22D768
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0x41C(r1)
  xoris     r0, r31, 0x8000
  lfd       f2, -0x1130(r2)
  addi      r3, r1, 0x18
  stw       r4, 0x418(r1)
  lfs       f0, -0x113C(r2)
  lfd       f1, 0x418(r1)
  stw       r0, 0x424(r1)
  fsubs     f1, f1, f2
  stw       r4, 0x420(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0x420(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x428(r1)
  lwz       r0, 0x42C(r1)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  b         .loc_0x2B8

.loc_0x2A0:
  lwz       r3, 0x4(r30)
  li        r4, 0
  lfs       f1, -0x10B4(r2)
  li        r5, 0
  lfs       f2, -0x10B0(r2)
  bl        -0x1E4684

.loc_0x2B8:
  lwz       r0, 0x444(r1)
  lwz       r31, 0x43C(r1)
  lwz       r30, 0x438(r1)
  lwz       r29, 0x434(r1)
  lwz       r28, 0x430(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}

/*
 * --INFO--
 * Address:	802F6D9C
 * Size:	0003FC
 */
void setElecAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r3, 0x4(r3)
  bl        -0x18ADC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  bl        -0x22D824
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x8(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1114(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x6C
  li        r0, 0x1
  b         .loc_0xBC

.loc_0x6C:
  li        r0, 0x2
  b         .loc_0xBC

.loc_0x74:
  bl        -0x22D870
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, -0x1130(r2)
  stw       r0, 0x8(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1114(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB8
  li        r0, 0x3
  b         .loc_0xBC

.loc_0xB8:
  li        r0, 0x4

.loc_0xBC:
  cmpwi     r0, 0x3
  beq-      .loc_0x254
  bge-      .loc_0xD8
  cmpwi     r0, 0x1
  beq-      .loc_0xE4
  bge-      .loc_0x19C
  b         .loc_0x3C0

.loc_0xD8:
  cmpwi     r0, 0x5
  bge-      .loc_0x3C0
  b         .loc_0x30C

.loc_0xE4:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xA74(r4)
  stfs      f0, 0x0(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xA9C(r4)
  stfs      f0, 0x4(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xAC4(r4)
  stfs      f0, 0x8(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xAEC(r4)
  stfs      f0, 0xC(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xB14(r4)
  stfs      f0, 0x10(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xB3C(r4)
  stfs      f0, 0x14(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xB64(r4)
  stfs      f0, 0x18(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xB8C(r4)
  stfs      f0, 0x1C(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lwz       r0, 0xBB4(r4)
  stw       r0, 0x20(r3)
  b         .loc_0x3C0

.loc_0x19C:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xBDC(r4)
  stfs      f0, 0x0(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xC04(r4)
  stfs      f0, 0x4(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xC2C(r4)
  stfs      f0, 0x8(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xC54(r4)
  stfs      f0, 0xC(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xC7C(r4)
  stfs      f0, 0x10(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xCA4(r4)
  stfs      f0, 0x14(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xCCC(r4)
  stfs      f0, 0x18(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xCF4(r4)
  stfs      f0, 0x1C(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lwz       r0, 0xD1C(r4)
  stw       r0, 0x20(r3)
  b         .loc_0x3C0

.loc_0x254:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xD44(r4)
  stfs      f0, 0x0(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xD6C(r4)
  stfs      f0, 0x4(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xD94(r4)
  stfs      f0, 0x8(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xDBC(r4)
  stfs      f0, 0xC(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xDE4(r4)
  stfs      f0, 0x10(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xE0C(r4)
  stfs      f0, 0x14(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xE34(r4)
  stfs      f0, 0x18(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xE5C(r4)
  stfs      f0, 0x1C(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lwz       r0, 0xE84(r4)
  stw       r0, 0x20(r3)
  b         .loc_0x3C0

.loc_0x30C:
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xEAC(r4)
  stfs      f0, 0x0(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xED4(r4)
  stfs      f0, 0x4(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xEFC(r4)
  stfs      f0, 0x8(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xF24(r4)
  stfs      f0, 0xC(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xF4C(r4)
  stfs      f0, 0x10(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xF74(r4)
  stfs      f0, 0x14(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xF9C(r4)
  stfs      f0, 0x18(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lfs       f0, 0xFC4(r4)
  stfs      f0, 0x1C(r3)
  lwz       r4, 0x4(r31)
  lwz       r3, 0x11C(r31)
  lwz       r4, 0xC0(r4)
  lwz       r0, 0xFEC(r4)
  stw       r0, 0x20(r3)

.loc_0x3C0:
  lwz       r3, 0x11C(r31)
  lfs       f1, -0x1160(r2)
  lfs       f0, 0x1C(r3)
  fcmpu     cr0, f1, f0
  bne-      .loc_0x3E0
  lwz       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  b         .loc_0x3E8

.loc_0x3E0:
  li        r0, 0
  stw       r0, 0x24(r3)

.loc_0x3E8:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7198
 * Size:	000494
 */
void startElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
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
  stfd      f28, 0x90(r1)
  psq_st    f28,0x98(r1),0,0
  stfd      f27, 0x80(r1)
  psq_st    f27,0x88(r1),0,0
  stfd      f26, 0x70(r1)
  psq_st    f26,0x78(r1),0,0
  stfd      f25, 0x60(r1)
  psq_st    f25,0x68(r1),0,0
  stfd      f24, 0x50(r1)
  psq_st    f24,0x58(r1),0,0
  stmw      r27, 0x3C(r1)
  mr        r28, r3
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne-      .loc_0x440
  li        r0, 0x1
  lfs       f0, -0x1160(r2)
  stb       r0, 0x0(r28)
  stfs      f0, 0x8(r28)
  stfs      f0, 0xC(r28)
  bl        -0x470
  li        r31, 0
  mr        r30, r28

.loc_0x80:
  li        r27, 0
  mr        r29, r30

.loc_0x88:
  lwz       r3, 0xD0(r29)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x1
  addi      r29, r29, 0x4
  cmpwi     r27, 0x3
  blt+      .loc_0x88
  addi      r31, r31, 0x1
  addi      r30, r30, 0xC
  cmpwi     r31, 0x4
  blt+      .loc_0x80
  lwz       r5, 0x4(r28)
  lis       r3, 0x8049
  subi      r4, r3, 0x2E10
  lwz       r3, 0x174(r5)
  bl        0x147D7C
  bl        0x132634
  lwz       r4, 0xCC(r28)
  lfs       f29, 0x2C(r3)
  lwz       r27, 0x10(r4)
  lfs       f30, 0x1C(r3)
  cmplwi    r27, 0
  lfs       f31, 0xC(r3)
  beq-      .loc_0x188
  li        r0, 0
  lis       r3, 0x8051
  stw       r0, 0x24(r27)
  lfsu      f0, 0x41E4(r3)
  stfs      f0, 0x28(r27)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x2C(r27)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x30(r27)
  stfs      f31, 0x34(r27)
  stfs      f30, 0x38(r27)
  stfs      f29, 0x3C(r27)
  stb       r0, 0x20(r27)
  stw       r0, 0x40(r27)
  lbz       r0, 0x20(r27)
  cmplwi    r0, 0
  beq-      .loc_0x150
  lwz       r3, 0x48(r27)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x150:
  mr        r3, r27
  bl        0x11A2E4
  lwz       r3, 0xC8(r28)
  mr        r4, r27
  bl        0x11A110
  lwz       r3, 0x100(r28)
  addi      r0, r27, 0x34
  li        r4, 0
  stw       r0, 0x10(r3)
  lwz       r3, 0x100(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x188:
  bl        -0x22DD80
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0xC(r1)
  li        r31, 0
  lwz       r3, 0x11C(r28)
  stw       r4, 0x8(r1)
  lwz       r0, 0x20(r3)
  lfd       f4, -0x1130(r2)
  lfd       f0, 0x8(r1)
  xoris     r0, r0, 0x8000
  lfs       f3, -0x10C8(r2)
  fsubs     f0, f0, f4
  stw       r0, 0x14(r1)
  lfs       f1, -0x113C(r2)
  stw       r4, 0x10(r1)
  fmuls     f2, f3, f0
  lwz       r3, 0xCC(r28)
  lfd       f0, 0x10(r1)
  lwz       r4, 0x10(r3)
  fdivs     f1, f2, f1
  fsubs     f0, f0, f4
  fmr       f28, f1
  fdivs     f27, f3, f0
  b         .loc_0x3C4

.loc_0x1EC:
  lwz       r3, 0x11C(r28)
  lwz       r30, 0x4(r4)
  lwz       r0, 0x20(r3)
  cmpw      r31, r0
  bge-      .loc_0x3BC
  mr        r29, r4
  bl        -0x22DDFC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  lwz       r3, 0x11C(r28)
  stw       r0, 0x10(r1)
  lfd       f1, -0x1130(r2)
  lfd       f0, 0x10(r1)
  lfs       f2, -0x10AC(r2)
  fsubs     f3, f0, f1
  lfs       f1, -0x113C(r2)
  lfs       f0, -0x10DC(r2)
  lfs       f25, 0xC(r3)
  fmuls     f2, f2, f3
  lfs       f24, 0x14(r3)
  fdivs     f1, f2, f1
  fsubs     f0, f1, f0
  fadds     f26, f28, f0
  bl        -0x22DE44
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lwz       r3, 0x11C(r28)
  stw       r0, 0x8(r1)
  lfd       f2, -0x1130(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x113C(r2)
  fsubs     f2, f0, f2
  lfs       f0, 0x8(r3)
  fmuls     f2, f25, f2
  fdivs     f1, f2, f1
  fadds     f25, f0, f1
  bl        -0x22DE7C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x1C(r1)
  fmr       f4, f26
  lwz       r3, 0x11C(r28)
  stw       r0, 0x18(r1)
  lfd       f2, -0x1130(r2)
  lfd       f1, 0x18(r1)
  lfs       f0, -0x1160(r2)
  fsubs     f3, f1, f2
  lfs       f2, -0x113C(r2)
  lfs       f1, 0x10(r3)
  fcmpo     cr0, f26, f0
  fmuls     f0, f24, f3
  fdivs     f0, f0, f2
  fadds     f3, f1, f0
  bge-      .loc_0x2D0
  fneg      f4, f26

.loc_0x2D0:
  lfs       f2, -0x1128(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1160(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f4, f2
  fcmpo     cr0, f26, f0
  fctiwz    f0, f1
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f1, f25, f0
  bge-      .loc_0x32C
  lfs       f0, -0x1124(r2)
  fmuls     f0, f26, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x344

.loc_0x32C:
  fmuls     f0, f26, f2
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x344:
  li        r3, 0
  fmuls     f0, f25, f0
  stw       r3, 0x24(r29)
  li        r0, 0x1
  fadds     f28, f28, f27
  stfs      f0, 0x28(r29)
  stfs      f3, 0x2C(r29)
  stfs      f1, 0x30(r29)
  stfs      f31, 0x34(r29)
  stfs      f30, 0x38(r29)
  stfs      f29, 0x3C(r29)
  stb       r0, 0x20(r29)
  stw       r3, 0x40(r29)
  lbz       r0, 0x20(r29)
  cmplwi    r0, 0
  beq-      .loc_0x39C
  lwz       r3, 0x48(r29)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x39C:
  mr        r3, r29
  bl        0x11A098
  lwz       r3, 0xC8(r28)
  mr        r4, r29
  bl        0x119EC4
  mr        r3, r28
  mr        r4, r29
  bl        0x5C8

.loc_0x3BC:
  mr        r4, r30
  addi      r31, r31, 0x1

.loc_0x3C4:
  cmplwi    r4, 0
  bne+      .loc_0x1EC
  lwz       r3, 0x11C(r28)
  lis       r0, 0x4330
  stw       r0, 0x30(r1)
  lwz       r0, 0x20(r3)
  lfd       f4, -0x1130(r2)
  xoris     r0, r0, 0x8000
  lfs       f3, -0x10D4(r2)
  stw       r0, 0x34(r1)
  lfs       f2, -0x1150(r2)
  lfd       f0, 0x30(r1)
  lfs       f1, -0x10BC(r2)
  fsubs     f4, f0, f4
  lfs       f0, -0x114C(r2)
  fmuls     f3, f4, f3
  fmuls     f2, f3, f2
  fmuls     f1, f3, f1
  fmuls     f0, f3, f0
  fctiwz    f2, f2
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f2, 0x28(r1)
  stfd      f1, 0x20(r1)
  lwz       r0, 0x2C(r1)
  stfd      f0, 0x18(r1)
  lwz       r3, 0x24(r1)
  stw       r0, 0x108(r28)
  lwz       r0, 0x1C(r1)
  stw       r3, 0x10C(r28)
  stw       r0, 0x110(r28)

.loc_0x440:
  psq_l     f31,0xC8(r1),0,0
  lfd       f31, 0xC0(r1)
  psq_l     f30,0xB8(r1),0,0
  lfd       f30, 0xB0(r1)
  psq_l     f29,0xA8(r1),0,0
  lfd       f29, 0xA0(r1)
  psq_l     f28,0x98(r1),0,0
  lfd       f28, 0x90(r1)
  psq_l     f27,0x88(r1),0,0
  lfd       f27, 0x80(r1)
  psq_l     f26,0x78(r1),0,0
  lfd       f26, 0x70(r1)
  psq_l     f25,0x68(r1),0,0
  lfd       f25, 0x60(r1)
  psq_l     f24,0x58(r1),0,0
  lfd       f24, 0x50(r1)
  lmw       r27, 0x3C(r1)
  lwz       r0, 0xD4(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void startNewElecList__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F762C
 * Size:	000288
 */
void updateElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r3
  li        r29, 0
  lwz       r3, 0xC8(r3)
  lwz       r30, 0x10(r3)
  b         .loc_0xD4

.loc_0x24:
  lwz       r28, 0x4(r30)
  mr        r3, r30
  lwz       r27, 0x8(r30)
  bl        -0x312C
  lwz       r3, 0xC8(r31)
  lwz       r0, 0x10(r3)
  cmplw     r30, r0
  bne-      .loc_0x60
  lwz       r0, 0x40(r30)
  cmplwi    r0, 0
  beq-      .loc_0x60
  addi      r4, r30, 0x34
  li        r3, 0x515B
  bl        0x176A30
  b         .loc_0xCC

.loc_0x60:
  cmplwi    r27, 0
  beq-      .loc_0x90
  lwz       r0, 0x40(r27)
  cmplwi    r0, 0
  beq-      .loc_0x90
  lwz       r0, 0x40(r30)
  cmplwi    r0, 0
  bne-      .loc_0x90
  addi      r4, r30, 0x34
  li        r3, 0x515B
  bl        0x176A00
  b         .loc_0xCC

.loc_0x90:
  lwz       r0, 0x40(r30)
  cmplwi    r0, 0
  beq-      .loc_0xCC
  li        r0, 0x3
  mr        r3, r31
  mtctr     r0

.loc_0xA8:
  lwz       r0, 0x108(r3)
  cmpw      r29, r0
  bne-      .loc_0xC4
  addi      r4, r30, 0x34
  li        r3, 0x515A
  bl        0x1769CC
  b         .loc_0xCC

.loc_0xC4:
  addi      r3, r3, 0x4
  bdnz+     .loc_0xA8

.loc_0xCC:
  mr        r30, r28
  addi      r29, r29, 0x1

.loc_0xD4:
  cmplwi    r30, 0
  bne+      .loc_0x24
  lbz       r0, 0x0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x274
  lwz       r4, 0x11C(r31)
  lfs       f1, 0x8(r31)
  lfs       f0, 0x18(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x274
  lfs       f1, 0xC(r31)
  lfs       f0, 0x1C(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x274
  lwz       r3, 0x24(r4)
  lwz       r0, 0x20(r4)
  cmpw      r3, r0
  bgt-      .loc_0x274
  lwz       r3, 0xC8(r31)
  lwz       r30, 0x10(r3)
  cmplwi    r30, 0
  beq-      .loc_0x25C
  lwz       r3, 0x100(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x104(r31)
  addi      r4, r30, 0x34
  bl        0xB8BD0
  lwz       r3, 0x104(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r29, 0x4(r30)
  cmplwi    r29, 0
  beq-      .loc_0x1D0
  lwz       r0, 0x40(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1D0
  stw       r29, 0x40(r30)
  lwz       r0, 0x40(r30)
  cmplwi    r0, 0
  beq-      .loc_0x1D0
  lwz       r3, 0x4C(r30)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x40(r30)
  addi      r4, r30, 0x34
  lwz       r3, 0x44(r30)
  addi      r5, r5, 0x34
  bl        0xB95F0
  lwz       r3, 0x44(r30)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x1D0:
  li        r30, 0
  b         .loc_0x24C

.loc_0x1D8:
  lwz       r28, 0x4(r29)
  cmplwi    r28, 0
  beq-      .loc_0x244
  lwz       r0, 0x40(r29)
  cmplwi    r0, 0
  bne-      .loc_0x244
  stw       r28, 0x40(r29)
  lwz       r0, 0x40(r29)
  cmplwi    r0, 0
  beq-      .loc_0x244
  lwz       r3, 0x4C(r29)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x40(r29)
  addi      r4, r29, 0x34
  lwz       r3, 0x44(r29)
  addi      r5, r5, 0x34
  bl        0xB957C
  lwz       r3, 0x44(r29)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x244:
  mr        r29, r28
  addi      r30, r30, 0x1

.loc_0x24C:
  lwz       r3, 0x11C(r31)
  lwz       r0, 0x24(r3)
  cmpw      r30, r0
  blt+      .loc_0x1D8

.loc_0x25C:
  lfs       f0, -0x1160(r2)
  stfs      f0, 0xC(r31)
  lwz       r4, 0x11C(r31)
  lwz       r3, 0x24(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x24(r4)

.loc_0x274:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void finishElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F78B4
 * Size:	0001E4
 */
void finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  li        r0, 0
  stmw      r27, 0x2C(r1)
  mr        r31, r3
  stb       r0, 0x0(r3)
  stb       r0, 0x1(r3)
  stb       r0, 0x2(r3)
  stb       r0, 0x3(r3)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r30, 0
  mr        r29, r31

.loc_0x44:
  lwz       r3, 0xA0(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r29, r29, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x44
  lwz       r3, 0xC8(r31)
  lwz       r29, 0x10(r3)
  b         .loc_0x15C

.loc_0x74:
  lwz       r30, 0x4(r29)
  li        r0, 0
  stw       r0, 0x40(r29)
  lwz       r3, 0x48(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x44(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x20(r29)
  cmplwi    r0, 0
  beq-      .loc_0x12C
  lis       r3, 0x804B
  lis       r5, 0x804B
  subi      r0, r3, 0x5814
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  lis       r3, 0x804D
  subi      r8, r5, 0x5808
  addi      r7, r4, 0x6A78
  lfs       f0, 0x34(r29)
  addi      r0, r3, 0x5854
  li        r6, 0x249
  li        r5, 0
  stfs      f0, 0xC(r1)
  addi      r3, r1, 0x18
  addi      r4, r1, 0x8
  lfs       f0, 0x38(r29)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x3C(r29)
  stw       r8, 0x18(r1)
  stw       r7, 0x18(r1)
  stfs      f0, 0x14(r1)
  sth       r6, 0x1C(r1)
  stw       r5, 0x20(r1)
  stw       r0, 0x18(r1)
  bl        0xB75A8

.loc_0x12C:
  addi      r4, r29, 0x34
  li        r3, 0x595D
  bl        0x1766CC
  mr        r3, r29
  bl        0x119BE0
  lwz       r3, 0xCC(r31)
  mr        r4, r29
  bl        0x119A0C
  mr        r3, r31
  mr        r4, r29
  bl        0x1FC
  mr        r29, r30

.loc_0x15C:
  cmplwi    r29, 0
  bne+      .loc_0x74
  li        r29, 0
  mr        r27, r31

.loc_0x16C:
  li        r30, 0
  mr        r28, r27

.loc_0x174:
  lwz       r3, 0xD0(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r28, r28, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x174
  addi      r29, r29, 0x1
  addi      r27, r27, 0xC
  cmpwi     r29, 0x4
  blt+      .loc_0x16C
  lwz       r3, 0x100(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x104(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7A98
 * Size:	000080
 */
void addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r8, 0
  li        r6, 0
  stw       r0, 0x14(r1)
  li        r0, 0x10
  mtctr     r0

.loc_0x1C:
  lwz       r7, 0x118(r3)
  lwzx      r5, r7, r6
  lwz       r0, 0x24(r5)
  cmplwi    r0, 0
  bne-      .loc_0x64
  rlwinm    r5,r8,2,0,29
  addi      r0, r4, 0x2C
  lwzx      r4, r7, r5
  lfs       f0, -0x10A8(r2)
  stw       r0, 0x24(r4)
  lwz       r4, 0x118(r3)
  lwzx      r4, r4, r5
  stfs      f0, 0x28(r4)
  lwz       r4, 0x118(r3)
  lwz       r3, 0x114(r3)
  lwzx      r4, r4, r5
  bl        0x119914
  b         .loc_0x70

.loc_0x64:
  addi      r6, r6, 0x4
  addi      r8, r8, 0x1
  bdnz+     .loc_0x1C

.loc_0x70:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7B18
 * Size:	000080
 */
void addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r8, 0
  li        r6, 0
  stw       r0, 0x14(r1)
  li        r0, 0x10
  mtctr     r0

.loc_0x1C:
  lwz       r7, 0x118(r3)
  lwzx      r5, r7, r6
  lwz       r0, 0x24(r5)
  cmplwi    r0, 0
  bne-      .loc_0x64
  rlwinm    r5,r8,2,0,29
  addi      r0, r4, 0x34
  lwzx      r4, r7, r5
  lfs       f0, -0x10A4(r2)
  stw       r0, 0x24(r4)
  lwz       r4, 0x118(r3)
  lwzx      r4, r4, r5
  stfs      f0, 0x28(r4)
  lwz       r4, 0x118(r3)
  lwz       r3, 0x114(r3)
  lwzx      r4, r4, r5
  bl        0x119894
  b         .loc_0x70

.loc_0x64:
  addi      r6, r6, 0x4
  addi      r8, r8, 0x1
  bdnz+     .loc_0x1C

.loc_0x70:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7B98
 * Size:	00006C
 */
void delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  li        r29, 0
  mr        r27, r3
  addi      r30, r4, 0x2C
  mr        r31, r29
  li        r28, 0

.loc_0x24:
  lwz       r3, 0x118(r27)
  lwzx      r3, r3, r29
  lwz       r0, 0x24(r3)
  cmplw     r0, r30
  bne-      .loc_0x48
  stw       r31, 0x24(r3)
  lwz       r3, 0x118(r27)
  lwzx      r3, r3, r29
  bl        0x1199F4

.loc_0x48:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x10
  blt+      .loc_0x24
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7C04
 * Size:	00006C
 */
void delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  li        r29, 0
  mr        r27, r3
  addi      r30, r4, 0x34
  mr        r31, r29
  li        r28, 0

.loc_0x24:
  lwz       r3, 0x118(r27)
  lwzx      r3, r3, r29
  lwz       r0, 0x24(r3)
  cmplw     r0, r30
  bne-      .loc_0x48
  stw       r31, 0x24(r3)
  lwz       r3, 0x118(r27)
  lwzx      r3, r3, r29
  bl        0x119988

.loc_0x48:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x10
  blt+      .loc_0x24
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7C70
 * Size:	000044
 */
void updateAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r3, 0x114(r3)
  lwz       r31, 0x10(r3)
  b         .loc_0x28

.loc_0x1C:
  mr        r3, r31
  bl        -0x42E8
  lwz       r31, 0x4(r31)

.loc_0x28:
  cmplwi    r31, 0
  bne+      .loc_0x1C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F7CB4
 * Size:	00009C
 */
void __dt__Q23efx17TOootaElecAttack1Fv(void)
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
  lis       r3, 0x804D
  addi      r3, r3, 0x57A0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
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
  bl        -0x268084

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2D3C7C

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
 * Address:	802F7D50
 * Size:	00009C
 */
void __dt__Q23efx13TOootaElecLegFv(void)
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
  lis       r3, 0x804D
  addi      r3, r3, 0x57EC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x67C4
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
  bl        -0x268120

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2D3D18

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
 * Address:	802F7DEC
 * Size:	00009C
 */
void __dt__Q23efx15TOootaElecpartsFv(void)
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
  lis       r3, 0x804D
  addi      r3, r3, 0x58BC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
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
  bl        -0x2681BC

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2D3DB4

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
 * Address:	802F7E88
 * Size:	000060
 */
void __dt__Q34Game11BigTreasure21BigTreasureElecAttackFv(void)
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
  addi      r0, r5, 0x5924
  stw       r0, 0x0(r30)
  bl        0x1196D0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2D3E14

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
 * Address:	802F7EE8
 * Size:	000060
 */
void __dt__Q34Game11BigTreasure22BigTreasureWaterAttackFv(void)
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
  addi      r0, r5, 0x599C
  stw       r0, 0x0(r30)
  bl        0x119670
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2D3E74

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
 * Address:	802F7F48
 * Size:	000060
 */
void __dt__Q34Game11BigTreasure20BigTreasureGasAttackFv(void)
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
  addi      r0, r5, 0x59AC
  stw       r0, 0x0(r30)
  bl        0x119610
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2D3ED4

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
 * Address:	802F7FA8
 * Size:	000060
 */
void __dt__Q34Game11BigTreasure21BigTreasureFireAttackFv(void)
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
  addi      r0, r5, 0x59BC
  stw       r0, 0x0(r30)
  bl        0x1195B0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2D3F34

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
 * Address:	802F8008
 * Size:	000070
 */
void __dt__Q34Game11BigTreasure16AttackShadowNodeFv(void)
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
  addi      r0, r4, 0x59CC
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x119540

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2D3FA4

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
 * Address:	802F8078
 * Size:	000008
 */
void @4@__dt__Q23efx15TOootaElecpartsFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x290
*/
}

/*
 * --INFO--
 * Address:	802F8080
 * Size:	000008
 */
void @4@__dt__Q23efx13TOootaElecLegFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x334
*/
}

/*
 * --INFO--
 * Address:	802F8088
 * Size:	000008
 */
void @4@__dt__Q23efx17TOootaElecAttack1Fv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x3D8
*/
}