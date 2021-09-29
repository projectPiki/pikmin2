

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020508C
 * Size:	000114
 */
void traceMove__Q24Game11ShapeMapMgrFRQ24Game8MoveInfof(void)
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
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r5, 0x14(r3)
  fmr       f31, f1
  lfs       f2, -0x4600(r2)
  mr        r29, r4
  addi      r0, r5, 0x1
  mr        r28, r3
  stw       r0, 0x14(r3)
  li        r31, 0x1
  lwz       r5, 0x4(r4)
  lwz       r4, 0x0(r4)
  lfs       f3, 0x0(r5)
  lfs       f1, 0x4(r5)
  fmuls     f0, f3, f3
  lfs       f4, 0x8(r5)
  fmuls     f1, f1, f1
  lfs       f5, 0xC(r4)
  fmuls     f4, f4, f4
  fadds     f0, f0, f1
  fadds     f0, f4, f0
  fcmpo     cr0, f0, f2
  ble-      .loc_0x94
  fmadds    f0, f3, f3, f1
  fadds     f3, f4, f0
  fcmpo     cr0, f3, f2
  ble-      .loc_0x98
  fsqrte    f0, f3
  fmuls     f3, f0, f3
  b         .loc_0x98

.loc_0x94:
  fmr       f3, f2

.loc_0x98:
  lfs       f0, -0x45FC(r2)

.loc_0x9C:
  fmuls     f1, f31, f3
  fcmpo     cr0, f1, f5
  ble-      .loc_0xB8
  rlwinm    r31,r31,1,0,30
  fmuls     f31, f31, f0
  cmpwi     r31, 0x8
  ble+      .loc_0x9C

.loc_0xB8:
  li        r30, 0
  b         .loc_0xD8

.loc_0xC0:
  fmr       f1, f31
  mr        r3, r28
  mr        r5, r29
  addi      r4, r28, 0x38
  bl        .loc_0x114
  addi      r30, r30, 0x1

.loc_0xD8:
  cmpw      r30, r31
  blt+      .loc_0xC0
  lwz       r0, 0x18(r28)
  add       r0, r0, r31
  stw       r0, 0x18(r28)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x114:
*/
}

/*
 * --INFO--
 * Address:	802051A0
 * Size:	000020
 */
void traceMove__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        .loc_0x20
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x20:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00030C
 */
void traceMove_test1030_1__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802051C0
 * Size:	0003BC
 */
void traceMove_test1203_cylinder__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof(void)
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
  stmw      r19, 0x6C(r1)
  mr        r19, r4
  lbz       r0, -0x6CF4(r13)
  lwz       r4, 0x18(r4)
  mr        r31, r5
  fmr       f28, f1
  cmplwi    r0, 0
  lwz       r26, 0x0(r5)
  mr        r30, r3
  lwz       r25, 0x4(r5)
  lwz       r24, 0x18(r4)
  beq-      .loc_0x70
  lwz       r12, 0x4(r3)
  mr        r4, r26
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     

.loc_0x70:
  lfs       f0, 0x0(r25)
  mr        r4, r26
  lfs       f1, 0x4(r25)
  fmuls     f0, f0, f28
  lfs       f29, 0x0(r26)
  lfs       f2, 0x8(r25)
  fmuls     f1, f1, f28
  lfs       f30, 0x4(r26)
  fadds     f0, f29, f0
  lfs       f31, 0x8(r26)
  fmuls     f2, f2, f28
  fadds     f1, f30, f1
  stfs      f0, 0x0(r26)
  fadds     f0, f31, f2
  stfs      f1, 0x4(r26)
  stfs      f0, 0x8(r26)
  lwz       r3, 0x18(r19)
  lwz       r12, 0x0(r3)
  lwz       r19, 0x1C(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  addi      r27, r1, 0x4C
  addi      r20, r1, 0x5C
  mr        r23, r3
  b         .loc_0x37C

.loc_0xD8:
  lwz       r3, 0x1C(r30)
  li        r22, 0
  lwz       r0, 0x1C(r23)
  li        r28, 0
  add       r0, r3, r0
  stw       r0, 0x1C(r30)
  b         .loc_0x36C

.loc_0xF4:
  lwz       r3, 0x24(r23)
  lbz       r0, -0x7BA8(r13)
  lwzx      r21, r3, r28
  cmplwi    r0, 0x1
  lwz       r3, 0x24(r19)
  mulli     r0, r21, 0x60
  add       r29, r3, r0
  blt-      .loc_0x138
  mr        r3, r29
  mr        r4, r26
  bl        0x2117E4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x138
  lwz       r3, 0x20(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x20(r30)
  b         .loc_0x364

.loc_0x138:
  lbz       r0, -0x6CF4(r13)
  cmplwi    r0, 0
  beq-      .loc_0x14C
  li        r0, 0x1
  stb       r0, -0x6530(r13)

.loc_0x14C:
  li        r0, 0
  stfs      f29, 0x2C(r1)
  stb       r0, 0x48(r1)
  stfs      f30, 0x30(r1)
  stfs      f31, 0x34(r1)
  lfs       f0, 0x0(r26)
  stfs      f0, 0x38(r1)
  lfs       f0, 0x4(r26)
  stfs      f0, 0x3C(r1)
  lfs       f0, 0x8(r26)
  stfs      f0, 0x40(r1)
  lfs       f0, 0xC(r26)
  stfs      f0, 0x44(r1)
  lbz       r0, 0x19(r31)
  cmplwi    r0, 0
  beq-      .loc_0x194
  li        r0, 0x1
  stb       r0, 0x48(r1)

.loc_0x194:
  lbz       r0, 0x1A(r31)
  cmplwi    r0, 0
  beq-      .loc_0x204
  lfs       f1, 0x28(r31)
  mr        r4, r26
  lfs       f2, 0xC(r26)
  addi      r3, r1, 0xC
  addi      r5, r31, 0x1C
  bl        0x21C2B4
  mr        r4, r29
  addi      r3, r1, 0xC
  addi      r5, r1, 0x8
  bl        0x21C570
  lfs       f1, 0xC(r29)
  lfs       f0, 0x8(r1)
  stfs      f1, 0x0(r27)
  lfs       f1, 0x10(r29)
  stfs      f1, 0x50(r1)
  lfs       f1, 0x14(r29)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  lfs       f0, 0x0(r26)
  stfs      f0, 0x0(r20)
  lfs       f0, 0x4(r26)
  stfs      f0, 0x60(r1)
  lfs       f0, 0x8(r26)
  stfs      f0, 0x64(r1)
  b         .loc_0x214

.loc_0x204:
  mr        r3, r29
  mr        r4, r24
  addi      r5, r1, 0x2C
  bl        0x2175FC

.loc_0x214:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x35C
  lwz       r3, 0x94(r31)
  cmplwi    r3, 0
  beq-      .loc_0x238
  mr        r4, r29
  mr        r5, r24
  mr        r6, r21
  bl        -0xA3058

.loc_0x238:
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x25C
  lwz       r12, 0x0(r3)
  mr        r4, r20
  mr        r5, r27
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x25C:
  lfs       f1, 0x50(r1)
  lfs       f0, 0x30(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x290
  stw       r29, 0x44(r31)
  lfs       f0, 0x0(r27)
  stfs      f0, 0x50(r31)
  lfs       f0, 0x50(r1)
  stfs      f0, 0x54(r31)
  lfs       f0, 0x54(r1)
  stfs      f0, 0x58(r31)
  b         .loc_0x2C4

.loc_0x290:
  fabs      f1, f1
  lfs       f0, 0x2C(r31)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2C4
  stw       r29, 0x48(r31)
  lfs       f0, 0x0(r27)
  stfs      f0, 0x5C(r31)
  lfs       f0, 0x50(r1)
  stfs      f0, 0x60(r31)
  lfs       f0, 0x54(r1)
  stfs      f0, 0x64(r31)

.loc_0x2C4:
  lfs       f4, 0x50(r1)
  lfs       f7, 0x4(r25)
  lfs       f5, 0x0(r27)
  fmuls     f0, f4, f7
  lfs       f8, 0x0(r25)
  lfs       f3, 0x54(r1)
  lfs       f6, 0x8(r25)
  fmadds    f2, f5, f8, f0
  lfs       f1, -0x45F8(r2)
  lfs       f0, 0x8(r31)
  fmadds    f2, f3, f6, f2
  fadds     f0, f1, f0
  fmuls     f2, f0, f2
  fmuls     f1, f5, f2
  fmuls     f0, f4, f2
  fmuls     f3, f3, f2
  fsubs     f2, f8, f1
  fsubs     f1, f7, f0
  fsubs     f0, f6, f3
  stfs      f2, 0x0(r25)
  stfs      f1, 0x4(r25)
  stfs      f0, 0x8(r25)
  lfs       f5, 0x58(r1)
  lfs       f0, 0x0(r27)
  lfs       f2, 0x50(r1)
  lfs       f4, 0x54(r1)
  fmuls     f0, f0, f5
  lfs       f1, 0x0(r26)
  fmuls     f2, f2, f5
  lfs       f3, 0x4(r26)
  fmuls     f4, f4, f5
  lfs       f5, 0x8(r26)
  fadds     f0, f1, f0
  fadds     f1, f3, f2
  fadds     f2, f5, f4
  stfs      f0, 0x0(r26)
  stfs      f1, 0x4(r26)
  stfs      f2, 0x8(r26)

.loc_0x35C:
  li        r0, 0
  stb       r0, -0x6530(r13)

.loc_0x364:
  addi      r28, r28, 0x4
  addi      r22, r22, 0x1

.loc_0x36C:
  lwz       r0, 0x1C(r23)
  cmpw      r22, r0
  blt+      .loc_0xF4
  lwz       r23, 0x4(r23)

.loc_0x37C:
  cmplwi    r23, 0
  bne+      .loc_0xD8
  mr        r3, r23
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  lmw       r19, 0x6C(r1)
  lwz       r0, 0xE4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000464
 */
void traceMove_test__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000464
 */
void traceMove_original__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020557C
 * Size:	000028
 */
void __sinit_mapMgrTraceMove_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6AD0(r13)
  stfsu     f0, -0x1100(r3)
  stfs      f0, -0x6ACC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}