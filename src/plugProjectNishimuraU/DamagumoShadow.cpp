

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
 * Address:	802AAD94
 * Size:	00020C
 */
void __ct__Q34Game8Damagumo17DamagumoShadowMgrFPQ34Game8Damagumo3Obj(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r4
  mr        r28, r3
  stw       r27, 0x4(r3)
  li        r3, 0x20
  bl        -0x286F10
  mr.       r0, r3
  beq-      .loc_0x38
  mr        r4, r27
  bl        -0x69B48
  mr        r0, r3

.loc_0x38:
  stw       r0, 0x48(r28)
  li        r3, 0x24
  bl        -0x286F30
  mr.       r27, r3
  beq-      .loc_0x60
  li        r4, 0x2
  bl        -0x69B08
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x60:
  stw       r27, 0x4C(r28)
  lwz       r3, 0x48(r28)
  lwz       r4, 0x4C(r28)
  bl        0x166608
  mr        r31, r28
  mr        r30, r28
  li        r29, 0

.loc_0x7C:
  li        r3, 0x28
  bl        -0x286F70
  mr.       r27, r3
  beq-      .loc_0xA8
  li        r4, 0x2
  bl        -0x69B48
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2138
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0xA8:
  stw       r27, 0x50(r31)
  li        r3, 0x28
  bl        -0x286FA0
  mr.       r27, r3
  beq-      .loc_0xD8
  li        r4, 0x2
  bl        -0x69B78
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2148
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0xD8:
  stw       r27, 0x60(r31)
  li        r3, 0x28
  bl        -0x286FD0
  mr.       r27, r3
  beq-      .loc_0x108
  li        r4, 0x2
  bl        -0x69BA8
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2148
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0x108:
  stw       r27, 0x70(r31)
  li        r3, 0x24
  bl        -0x287000
  mr.       r27, r3
  beq-      .loc_0x130
  li        r4, 0x2
  bl        -0x69BD8
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x130:
  stw       r27, 0x80(r31)
  li        r3, 0x24
  bl        -0x287028
  mr.       r27, r3
  beq-      .loc_0x158
  li        r4, 0x2
  bl        -0x69C00
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x158:
  stw       r27, 0x90(r31)
  li        r3, 0x24
  bl        -0x287050
  mr.       r27, r3
  beq-      .loc_0x180
  li        r4, 0x2
  bl        -0x69C28
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x180:
  stw       r27, 0xA0(r31)
  lwz       r3, 0x48(r28)
  lwz       r4, 0x50(r31)
  bl        0x1664E8
  lwz       r3, 0x48(r28)
  lwz       r4, 0x60(r31)
  bl        0x1664DC
  lwz       r3, 0x48(r28)
  lwz       r4, 0x70(r31)
  bl        0x1664D0
  lwz       r3, 0x48(r28)
  lwz       r4, 0x80(r31)
  bl        0x1664C4
  lwz       r3, 0x48(r28)
  lwz       r4, 0x90(r31)
  bl        0x1664B8
  lwz       r3, 0x48(r28)
  lwz       r4, 0xA0(r31)
  bl        0x1664AC
  li        r0, 0
  addi      r29, r29, 0x1
  stw       r0, 0x8(r30)
  cmpwi     r29, 0x4
  addi      r31, r31, 0x4
  stw       r0, 0xC(r30)
  stw       r0, 0x10(r30)
  stw       r0, 0x14(r30)
  addi      r30, r30, 0x10
  blt+      .loc_0x7C
  mr        r3, r28
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802AAFA0
 * Size:	00014C
 */
void init__Q34Game8Damagumo17DamagumoShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x6688
  subi      r4, r2, 0x2388
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0x4(r3)
  lwz       r30, 0x174(r3)
  mr        r3, r30
  bl        0x194010
  bl        0x17E8C8
  stw       r3, 0x0(r29)
  mr        r3, r30
  addi      r4, r31, 0x14
  bl        0x193FFC
  lwz       r5, 0x50(r29)
  addi      r4, r31, 0x20
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193FE8
  lwz       r5, 0x60(r29)
  addi      r4, r31, 0x2C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193FD4
  lwz       r5, 0x70(r29)
  addi      r4, r31, 0x38
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193FC0
  lwz       r5, 0x54(r29)
  addi      r4, r31, 0x44
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193FAC
  lwz       r5, 0x64(r29)
  addi      r4, r31, 0x50
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F98
  lwz       r5, 0x74(r29)
  addi      r4, r31, 0x5C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F84
  lwz       r5, 0x58(r29)
  addi      r4, r31, 0x68
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F70
  lwz       r5, 0x68(r29)
  addi      r4, r31, 0x74
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F5C
  lwz       r5, 0x78(r29)
  addi      r4, r31, 0x80
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F48
  lwz       r5, 0x5C(r29)
  addi      r4, r31, 0x8C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F34
  lwz       r5, 0x6C(r29)
  addi      r4, r31, 0x98
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x193F20
  lwz       r4, 0x7C(r29)
  stw       r3, 0x24(r4)
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
 * Address:	802AB0EC
 * Size:	000018
 */
void setJointPosPtr__Q34Game8Damagumo17DamagumoShadowMgrFiiP10Vector3<float>(void)
{
/*
.loc_0x0:
  rlwinm    r4,r4,4,0,27
  rlwinm    r0,r5,2,0,29
  add       r3, r3, r4
  add       r3, r3, r0
  stw       r6, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AB104
 * Size:	00039C
 */
void update__Q34Game8Damagumo17DamagumoShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stfd      f31, 0x120(r1)
  psq_st    f31,0x128(r1),0,0
  stfd      f30, 0x110(r1)
  psq_st    f30,0x118(r1),0,0
  stfd      f29, 0x100(r1)
  psq_st    f29,0x108(r1),0,0
  stfd      f28, 0xF0(r1)
  psq_st    f28,0xF8(r1),0,0
  stfd      f27, 0xE0(r1)
  psq_st    f27,0xE8(r1),0,0
  stfd      f26, 0xD0(r1)
  psq_st    f26,0xD8(r1),0,0
  stfd      f25, 0xC0(r1)
  psq_st    f25,0xC8(r1),0,0
  stfd      f24, 0xB0(r1)
  psq_st    f24,0xB8(r1),0,0
  stfd      f23, 0xA0(r1)
  psq_st    f23,0xA8(r1),0,0
  stfd      f22, 0x90(r1)
  psq_st    f22,0x98(r1),0,0
  stmw      r26, 0x78(r1)
  mr        r26, r3
  addi      r3, r1, 0x8
  lwz       r4, 0x4(r26)
  bl        -0x49B0
  lfs       f3, -0x2380(r2)
  lfs       f2, -0x237C(r2)
  fmuls     f8, f3, f3
  lfs       f6, 0x8(r1)
  fmuls     f7, f2, f2
  lfs       f5, 0xC(r1)
  lfs       f4, 0x10(r1)
  lfs       f1, -0x2378(r2)
  fadds     f0, f8, f7
  stfs      f6, 0x50(r1)
  stfs      f5, 0x54(r1)
  fadds     f0, f8, f0
  stfs      f4, 0x58(r1)
  fcmpo     cr0, f0, f1
  stfs      f3, 0x5C(r1)
  stfs      f2, 0x60(r1)
  stfs      f3, 0x64(r1)
  ble-      .loc_0xD4
  fmadds    f0, f3, f3, f7
  fadds     f3, f8, f0
  fcmpo     cr0, f3, f1
  ble-      .loc_0xD8
  fsqrte    f0, f3
  fmuls     f3, f0, f3
  b         .loc_0xD8

.loc_0xD4:
  fmr       f3, f1

.loc_0xD8:
  lfs       f0, -0x2378(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x110
  lfs       f0, -0x2374(r2)
  lfs       f2, 0x5C(r1)
  fdivs     f3, f0, f3
  lfs       f1, 0x60(r1)
  lfs       f0, 0x64(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x5C(r1)
  stfs      f1, 0x60(r1)
  stfs      f0, 0x64(r1)

.loc_0x110:
  lwz       r3, 0x0(r26)
  addi      r4, r1, 0x50
  lfs       f0, -0x2370(r2)
  addi      r5, r1, 0x14
  lfs       f2, 0x1C(r3)
  lfs       f5, 0x2C(r3)
  lfs       f4, 0xC(r3)
  fadds     f3, f2, f0
  lfs       f1, -0x2360(r2)
  stfs      f2, 0x18(r1)
  lfs       f2, -0x2378(r2)
  stfs      f4, 0x14(r1)
  lfs       f0, -0x235C(r2)
  stfs      f5, 0x1C(r1)
  lfs       f5, -0x236C(r2)
  stfs      f3, 0x18(r1)
  lfs       f4, -0x2368(r2)
  lwz       r3, 0x4(r26)
  lfs       f3, -0x2364(r2)
  lfs       f6, 0x2D8(r3)
  fmuls     f1, f1, f6
  stfs      f2, 0x68(r1)
  fmuls     f24, f5, f6
  stfs      f2, 0x6C(r1)
  fmuls     f23, f4, f6
  fmuls     f22, f3, f6
  stfs      f1, 0x70(r1)
  stfs      f0, 0x74(r1)
  lwz       r3, 0x4C(r26)
  bl        0x47454
  lfs       f25, -0x2358(r2)
  mr        r31, r26
  lfs       f26, -0x2354(r2)
  mr        r30, r26
  lfs       f27, -0x2350(r2)
  addi      r29, r1, 0x2C
  lfs       f28, -0x2378(r2)
  addi      r28, r1, 0x38
  lfs       f29, -0x234C(r2)
  addi      r27, r1, 0x44
  lfs       f30, -0x2348(r2)
  li        r26, 0
  lfs       f31, -0x2344(r2)

.loc_0x1BC:
  stfs      f25, 0x68(r1)
  mr        r6, r29
  addi      r4, r1, 0x50
  addi      r5, r1, 0x20
  stfs      f26, 0x6C(r1)
  stfs      f24, 0x70(r1)
  stfs      f27, 0x74(r1)
  lwz       r3, 0x50(r31)
  bl        0x46D60
  stfs      f28, 0x68(r1)
  mr        r5, r29
  mr        r6, r28
  addi      r4, r1, 0x50
  stfs      f28, 0x6C(r1)
  stfs      f24, 0x70(r1)
  stfs      f27, 0x74(r1)
  lwz       r3, 0x60(r31)
  bl        0x46FB4
  stfs      f29, 0x68(r1)
  mr        r5, r28
  mr        r6, r27
  addi      r4, r1, 0x50
  stfs      f29, 0x6C(r1)
  stfs      f24, 0x70(r1)
  stfs      f27, 0x74(r1)
  lwz       r3, 0x70(r31)
  bl        0x46F90
  stfs      f28, 0x68(r1)
  mr        r5, r29
  addi      r4, r1, 0x50
  stfs      f28, 0x6C(r1)
  stfs      f23, 0x70(r1)
  stfs      f29, 0x74(r1)
  lwz       r3, 0x80(r31)
  bl        0x47394
  stfs      f30, 0x74(r1)
  mr        r5, r28
  addi      r4, r1, 0x50
  lwz       r3, 0x90(r31)
  bl        0x47380
  stfs      f22, 0x70(r1)
  mr        r5, r27
  addi      r4, r1, 0x50
  stfs      f31, 0x74(r1)
  lwz       r3, 0xA0(r31)
  bl        0x47368
  lwz       r3, 0x8(r30)
  cmplwi    r3, 0
  beq-      .loc_0x2A0
  lfs       f0, 0x20(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x24(r1)
  lwz       r3, 0x8(r30)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x28(r1)
  lwz       r3, 0x8(r30)
  stfs      f0, 0x8(r3)

.loc_0x2A0:
  lwz       r3, 0xC(r30)
  cmplwi    r3, 0
  beq-      .loc_0x2CC
  lfs       f0, 0x2C(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x30(r1)
  lwz       r3, 0xC(r30)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x34(r1)
  lwz       r3, 0xC(r30)
  stfs      f0, 0x8(r3)

.loc_0x2CC:
  lwz       r3, 0x10(r30)
  cmplwi    r3, 0
  beq-      .loc_0x2F8
  lfs       f0, 0x38(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x3C(r1)
  lwz       r3, 0x10(r30)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x40(r1)
  lwz       r3, 0x10(r30)
  stfs      f0, 0x8(r3)

.loc_0x2F8:
  lwz       r3, 0x14(r30)
  cmplwi    r3, 0
  beq-      .loc_0x324
  lfs       f0, 0x44(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x48(r1)
  lwz       r3, 0x14(r30)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x4C(r1)
  lwz       r3, 0x14(r30)
  stfs      f0, 0x8(r3)

.loc_0x324:
  addi      r26, r26, 0x1
  addi      r30, r30, 0x10
  cmpwi     r26, 0x4
  addi      r31, r31, 0x4
  blt+      .loc_0x1BC
  psq_l     f31,0x128(r1),0,0
  lfd       f31, 0x120(r1)
  psq_l     f30,0x118(r1),0,0
  lfd       f30, 0x110(r1)
  psq_l     f29,0x108(r1),0,0
  lfd       f29, 0x100(r1)
  psq_l     f28,0xF8(r1),0,0
  lfd       f28, 0xF0(r1)
  psq_l     f27,0xE8(r1),0,0
  lfd       f27, 0xE0(r1)
  psq_l     f26,0xD8(r1),0,0
  lfd       f26, 0xD0(r1)
  psq_l     f25,0xC8(r1),0,0
  lfd       f25, 0xC0(r1)
  psq_l     f24,0xB8(r1),0,0
  lfd       f24, 0xB0(r1)
  psq_l     f23,0xA8(r1),0,0
  lfd       f23, 0xA0(r1)
  psq_l     f22,0x98(r1),0,0
  lfd       f22, 0x90(r1)
  lmw       r26, 0x78(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	802AB4A0
 * Size:	000070
 */
void __dt__Q24Game17TubeShadowSetNodeFv(void)
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
  subi      r0, r4, 0x2148
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x1660A8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x28743C

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
 * Address:	802AB510
 * Size:	000070
 */
void __dt__Q24Game19TubeShadowTransNodeFv(void)
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
  subi      r0, r4, 0x2138
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x166038

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2874AC

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
 * Address:	802AB580
 * Size:	000070
 */
void __dt__Q24Game16SphereShadowNodeFv(void)
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
  subi      r0, r4, 0x2128
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x165FC8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x28751C

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