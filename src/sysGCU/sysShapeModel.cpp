

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
 * Address:	8043E1D8
 * Size:	0000C4
 */
void __ct__Q28SysShape5ModelFP12J3DModelDataUlUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r7, 0x804C
  stw       r0, 0x24(r1)
  subi      r0, r7, 0x40DC
  stmw      r27, 0xC(r1)
  mr        r27, r3
  lis       r3, 0x804F
  mr        r28, r4
  mr        r29, r5
  mr        r30, r6
  stw       r0, 0x0(r27)
  subi      r0, r3, 0x33E4
  li        r3, 0xDC
  stw       r0, 0x0(r27)
  bl        -0x41A370
  mr.       r31, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  addi      r0, r3, 0x19F0
  stw       r0, 0x0(r31)
  addi      r3, r31, 0x88
  bl        -0x3DF5E8
  mr        r3, r31
  bl        -0x3D7F3C
  mr        r3, r31
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        -0x3D7ECC

.loc_0x78:
  stw       r31, 0x8(r27)
  mr        r3, r27
  lwz       r4, 0x8(r27)
  lwz       r4, 0x4(r4)
  lhz       r0, 0x2C(r4)
  stw       r0, 0xC(r27)
  bl        0x88C
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0x5(r27)
  mr        r3, r27
  stb       r0, 0x4(r27)
  bl        -0x15630
  mr        r3, r27
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E29C
 * Size:	00017C
 */
void enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  beq-      .loc_0x144
  bge-      .loc_0x15C
  cmpwi     r4, 0
  bge-      .loc_0x38
  b         .loc_0x15C

.loc_0x38:
  li        r30, 0
  b         .loc_0x130

.loc_0x40:
  li        r3, 0xF4
  bl        -0x41A43C
  mr.       r31, r3
  beq-      .loc_0x104
  lis       r3, 0x804A
  lis       r4, 0x8008
  addi      r0, r3, 0x1B10
  li        r6, 0x8
  lis       r3, 0x8007
  stw       r0, 0x0(r31)
  subi      r5, r3, 0x5B9C
  addi      r4, r4, 0x3CF0
  addi      r3, r31, 0x4
  li        r7, 0x2
  bl        -0x37CAD8
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x3EF0
  li        r6, 0x8
  addi      r3, r31, 0x14
  subi      r5, r5, 0x5B60
  li        r7, 0x8
  bl        -0x37CAF8
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x3D08
  li        r6, 0xC
  addi      r3, r31, 0x54
  subi      r5, r5, 0x5B24
  li        r7, 0x8
  bl        -0x37CB18
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x424C
  li        r6, 0x8
  addi      r3, r31, 0xB4
  subi      r5, r5, 0x5ADC
  li        r7, 0x4
  bl        -0x37CB38
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x4234
  li        r6, 0x8
  addi      r3, r31, 0xD4
  subi      r5, r5, 0x5AA0
  li        r7, 0x4
  bl        -0x37CB58
  mr        r3, r31
  bl        -0x3D42A8

.loc_0x104:
  lwz       r3, 0x60(r29)
  rlwinm    r28,r30,2,14,29
  lwzx      r3, r3, r28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x60(r29)
  addi      r30, r30, 0x1
  lwzx      r3, r3, r28
  stw       r31, 0x3C(r3)

.loc_0x130:
  lhz       r0, 0x5C(r29)
  rlwinm    r3,r30,0,16,31
  cmplw     r3, r0
  blt+      .loc_0x40
  b         .loc_0x15C

.loc_0x144:
  lis       r3, 0x804A
  li        r4, 0x4F
  subi      r3, r3, 0x5370
  addi      r5, r2, 0x25A8
  crclr     6, 0x6
  bl        -0x413DB4

.loc_0x15C:
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
 * Address:	8043E418
 * Size:	000174
 */
void enableMaterialAnim__Q28SysShape5ModelFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r3
  beq-      .loc_0x140
  bge-      .loc_0x158
  cmpwi     r4, 0
  bge-      .loc_0x2C
  b         .loc_0x158

.loc_0x2C:
  lwz       r3, 0x8(r28)
  li        r29, 0
  lwz       r30, 0x4(r3)
  b         .loc_0x12C

.loc_0x3C:
  li        r3, 0xF4
  bl        -0x41A5B4
  mr.       r31, r3
  beq-      .loc_0x100
  lis       r3, 0x804A
  lis       r4, 0x8008
  addi      r0, r3, 0x1B10
  li        r6, 0x8
  lis       r3, 0x8007
  stw       r0, 0x0(r31)
  subi      r5, r3, 0x5B9C
  addi      r4, r4, 0x3CF0
  addi      r3, r31, 0x4
  li        r7, 0x2
  bl        -0x37CC50
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x3EF0
  li        r6, 0x8
  addi      r3, r31, 0x14
  subi      r5, r5, 0x5B60
  li        r7, 0x8
  bl        -0x37CC70
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x3D08
  li        r6, 0xC
  addi      r3, r31, 0x54
  subi      r5, r5, 0x5B24
  li        r7, 0x8
  bl        -0x37CC90
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x424C
  li        r6, 0x8
  addi      r3, r31, 0xB4
  subi      r5, r5, 0x5ADC
  li        r7, 0x4
  bl        -0x37CCB0
  lis       r3, 0x8008
  lis       r5, 0x8007
  addi      r4, r3, 0x4234
  li        r6, 0x8
  addi      r3, r31, 0xD4
  subi      r5, r5, 0x5AA0
  li        r7, 0x4
  bl        -0x37CCD0
  mr        r3, r31
  bl        -0x3D4420

.loc_0x100:
  lwz       r3, 0x60(r30)
  rlwinm    r27,r29,2,14,29
  lwzx      r3, r3, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x60(r30)
  addi      r29, r29, 0x1
  lwzx      r3, r3, r27
  stw       r31, 0x3C(r3)

.loc_0x12C:
  lhz       r0, 0x5C(r30)
  rlwinm    r3,r29,0,16,31
  cmplw     r3, r0
  blt+      .loc_0x3C
  b         .loc_0x158

.loc_0x140:
  lis       r3, 0x804A
  li        r4, 0x64
  subi      r3, r3, 0x5370
  addi      r5, r2, 0x25A8
  crclr     6, 0x6
  bl        -0x413F2C

.loc_0x158:
  li        r0, 0x1
  stb       r0, 0x4(r28)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E58C
 * Size:	000048
 */
void getMatrix__Q28SysShape5ModelFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, -0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x1C
  li        r3, 0
  b         .loc_0x38

.loc_0x1C:
  mulli     r0, r4, 0x3C
  lwz       r3, 0x10(r3)
  add.      r3, r3, r0
  beq-      .loc_0x34
  bl        -0x14D18
  b         .loc_0x38

.loc_0x34:
  li        r3, 0

.loc_0x38:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E5D4
 * Size:	00015C
 */
void getRoughBoundingRadius__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  mr        r4, r31
  bl        .loc_0x15C
  lfs       f0, 0x25B0(r2)
  li        r4, 0
  lwz       r5, 0xC(r31)
  fmr       f3, f0
  lfs       f9, 0x8(r1)
  fmr       f1, f0
  lfs       f10, 0xC(r1)
  lfs       f11, 0x10(r1)
  mtctr     r5
  cmpwi     r5, 0
  ble-      .loc_0x100

.loc_0x4C:
  lwz       r3, 0x10(r31)
  addi      r0, r4, 0x18
  lwzx      r3, r3, r0
  lfs       f2, 0x4C(r3)
  lfs       f5, 0x50(r3)
  fsubs     f7, f2, f10
  lfs       f4, 0x48(r3)
  fsubs     f8, f5, f11
  lfs       f2, 0x44(r3)
  lfs       f5, 0x40(r3)
  fsubs     f6, f4, f9
  fmuls     f12, f7, f7
  lfs       f4, 0x3C(r3)
  fmuls     f8, f8, f8
  fsubs     f7, f2, f11
  fmadds    f2, f6, f6, f12
  fsubs     f5, f5, f10
  fsubs     f4, f4, f9
  fadds     f6, f8, f2
  fcmpo     cr0, f6, f3
  ble-      .loc_0xB0
  ble-      .loc_0xB4
  fsqrte    f2, f6
  fmuls     f6, f2, f6
  b         .loc_0xB4

.loc_0xB0:
  fmr       f6, f3

.loc_0xB4:
  fmuls     f2, f5, f5
  fmuls     f5, f7, f7
  fmadds    f2, f4, f4, f2
  fadds     f2, f5, f2
  fcmpo     cr0, f2, f1
  ble-      .loc_0xDC
  ble-      .loc_0xE0
  fsqrte    f4, f2
  fmuls     f2, f4, f2
  b         .loc_0xE0

.loc_0xDC:
  fmr       f2, f1

.loc_0xE0:
  fcmpo     cr0, f6, f0
  ble-      .loc_0xEC
  fmr       f0, f6

.loc_0xEC:
  fcmpo     cr0, f2, f0
  ble-      .loc_0xF8
  fmr       f0, f2

.loc_0xF8:
  addi      r4, r4, 0x3C
  bdnz+     .loc_0x4C

.loc_0x100:
  fmr       f1, f0
  lfs       f3, 0x25B0(r2)
  li        r4, 0
  mtctr     r5
  cmpwi     r5, 0
  ble-      .loc_0x13C

.loc_0x118:
  lwz       r3, 0x10(r31)
  addi      r0, r4, 0x18
  lwzx      r3, r3, r0
  lfs       f2, 0x38(r3)
  fcmpo     cr0, f2, f3
  ble-      .loc_0x134
  fmr       f3, f2

.loc_0x134:
  addi      r4, r4, 0x3C
  bdnz+     .loc_0x118

.loc_0x13C:
  fcmpo     cr0, f3, f0
  bge-      .loc_0x148
  fmr       f1, f3

.loc_0x148:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x15C:
*/
}

/*
 * --INFO--
 * Address:	8043E730
 * Size:	000174
 */
void getRoughCenter__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stfd      f27, 0x10(r1)
  psq_st    f27,0x18(r1),0,0
  lfs       f5, 0x25B0(r2)
  li        r6, 0
  lwz       r0, 0xC(r4)
  fmr       f6, f5
  fmr       f7, f5
  fmr       f8, f5
  fmr       f9, f5
  fmr       f10, f5
  fmr       f28, f5
  fmr       f27, f5
  fmr       f2, f5
  fmr       f0, f5
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x11C

.loc_0x68:
  lwz       r5, 0x10(r4)
  addi      r0, r6, 0x18
  lwzx      r5, r5, r0
  lfs       f12, 0x4C(r5)
  lfs       f13, 0x50(r5)
  fmuls     f1, f12, f12
  lfs       f11, 0x48(r5)
  fmuls     f3, f13, f13
  lfs       f31, 0x3C(r5)
  lfs       f30, 0x40(r5)
  fmadds    f1, f11, f11, f1
  lfs       f29, 0x44(r5)
  fadds     f3, f3, f1
  fcmpo     cr0, f3, f2
  ble-      .loc_0xB4
  ble-      .loc_0xB8
  fsqrte    f1, f3
  fmuls     f3, f1, f3
  b         .loc_0xB8

.loc_0xB4:
  fmr       f3, f2

.loc_0xB8:
  fmuls     f1, f30, f30
  fmuls     f4, f29, f29
  fmadds    f1, f31, f31, f1
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE0
  ble-      .loc_0xE4
  fsqrte    f4, f1
  fmuls     f1, f4, f1
  b         .loc_0xE4

.loc_0xE0:
  fmr       f1, f0

.loc_0xE4:
  fcmpo     cr0, f3, f28
  ble-      .loc_0xFC
  fmr       f5, f11
  fmr       f6, f12
  fmr       f7, f13
  fmr       f28, f3

.loc_0xFC:
  fcmpo     cr0, f1, f27
  ble-      .loc_0x114
  fmr       f8, f31
  fmr       f9, f30
  fmr       f10, f29
  fmr       f27, f1

.loc_0x114:
  addi      r6, r6, 0x3C
  bdnz+     .loc_0x68

.loc_0x11C:
  fadds     f2, f5, f8
  lfs       f3, 0x25B4(r2)
  fadds     f1, f6, f9
  fadds     f0, f7, f10
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x0(r3)
  stfs      f1, 0x4(r3)
  stfs      f0, 0x8(r3)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  psq_l     f27,0x18(r1),0,0
  lfd       f27, 0x10(r1)
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void entry__Q28SysShape5ModelFRQ23Sys6Sphere(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043E8A4
 * Size:	000098
 */
void isVisible__Q28SysShape5ModelFRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  li        r29, 0
  lwz       r5, -0x6514(r13)
  lwz       r30, 0x24(r5)
  b         .loc_0x6C

.loc_0x28:
  mr        r3, r30
  mr        r4, r29
  bl        -0x192E4
  mr        r31, r3
  bl        -0x1969C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  lwz       r3, 0x44(r31)
  mr        r4, r28
  bl        -0x24760
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  li        r0, 0x1
  li        r3, 0x1
  stb       r0, 0x6(r27)
  b         .loc_0x84

.loc_0x68:
  addi      r29, r29, 0x1

.loc_0x6C:
  lwz       r0, 0x264(r30)
  cmpw      r29, r0
  blt+      .loc_0x28
  li        r0, 0
  li        r3, 0
  stb       r0, 0x6(r27)

.loc_0x84:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E93C
 * Size:	000080
 */
void jointVisible__Q28SysShape5ModelFbi(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x44
  lwz       r3, 0x8(r3)
  rlwinm    r0,r5,2,14,29
  lwz       r3, 0x4(r3)
  lwz       r3, 0x28(r3)
  lwzx      r3, r3, r0
  lwz       r4, 0x58(r3)
  b         .loc_0x38

.loc_0x24:
  lwz       r3, 0x8(r4)
  lwz       r0, 0xC(r3)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xC(r3)
  lwz       r4, 0x4(r4)

.loc_0x38:
  cmplwi    r4, 0
  bne+      .loc_0x24
  blr       

.loc_0x44:
  lwz       r3, 0x8(r3)
  rlwinm    r0,r5,2,14,29
  lwz       r3, 0x4(r3)
  lwz       r3, 0x28(r3)
  lwzx      r3, r3, r0
  lwz       r4, 0x58(r3)
  b         .loc_0x74

.loc_0x60:
  lwz       r3, 0x8(r4)
  lwz       r0, 0xC(r3)
  ori       r0, r0, 0x1
  stw       r0, 0xC(r3)
  lwz       r4, 0x4(r4)

.loc_0x74:
  cmplwi    r4, 0
  bne+      .loc_0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E9BC
 * Size:	000058
 */
void hide__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r5, 0
  b         .loc_0x44

.loc_0x8:
  lwz       r4, 0x8(r3)
  rlwinm    r0,r5,2,14,29
  lwz       r4, 0x4(r4)
  lwz       r4, 0x28(r4)
  lwzx      r4, r4, r0
  lwz       r6, 0x58(r4)
  b         .loc_0x38

.loc_0x24:
  lwz       r4, 0x8(r6)
  lwz       r0, 0xC(r4)
  ori       r0, r0, 0x1
  stw       r0, 0xC(r4)
  lwz       r6, 0x4(r6)

.loc_0x38:
  cmplwi    r6, 0
  bne+      .loc_0x24
  addi      r5, r5, 0x1

.loc_0x44:
  lwz       r0, 0xC(r3)
  rlwinm    r4,r5,0,16,31
  cmpw      r4, r0
  blt+      .loc_0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EA14
 * Size:	000058
 */
void show__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r5, 0
  b         .loc_0x44

.loc_0x8:
  lwz       r4, 0x8(r3)
  rlwinm    r0,r5,2,14,29
  lwz       r4, 0x4(r4)
  lwz       r4, 0x28(r4)
  lwzx      r4, r4, r0
  lwz       r6, 0x58(r4)
  b         .loc_0x38

.loc_0x24:
  lwz       r4, 0x8(r6)
  lwz       r0, 0xC(r4)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xC(r4)
  lwz       r6, 0x4(r6)

.loc_0x38:
  cmplwi    r6, 0
  bne+      .loc_0x24
  addi      r5, r5, 0x1

.loc_0x44:
  lwz       r0, 0xC(r3)
  rlwinm    r4,r5,0,16,31
  cmpw      r4, r0
  blt+      .loc_0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EA6C
 * Size:	000044
 */
void hidePackets__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r7, 0
  b         .loc_0x28

.loc_0x8:
  rlwinm    r0,r7,0,16,31
  lwz       r5, 0xC4(r6)
  mulli     r4, r0, 0x3C
  addi      r7, r7, 0x1
  addi      r4, r4, 0x10
  lwzx      r0, r5, r4
  ori       r0, r0, 0x10
  stwx      r0, r5, r4

.loc_0x28:
  lwz       r6, 0x8(r3)
  rlwinm    r4,r7,0,16,31
  lwz       r5, 0x4(r6)
  lhz       r0, 0x7C(r5)
  cmplw     r4, r0
  blt+      .loc_0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EAB0
 * Size:	000044
 */
void showPackets__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r7, 0
  b         .loc_0x28

.loc_0x8:
  rlwinm    r0,r7,0,16,31
  lwz       r5, 0xC4(r6)
  mulli     r4, r0, 0x3C
  addi      r7, r7, 0x1
  addi      r4, r4, 0x10
  lwzx      r0, r5, r4
  rlwinm    r0,r0,0,28,26
  stwx      r0, r5, r4

.loc_0x28:
  lwz       r6, 0x8(r3)
  rlwinm    r4,r7,0,16,31
  lwz       r5, 0x4(r6)
  lhz       r0, 0x7C(r5)
  cmplw     r4, r0
  blt+      .loc_0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EAF4
 * Size:	0000BC
 */
void initJoints__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r31, 0xC(r3)
  mulli     r3, r31, 0x3C
  addi      r3, r3, 0x10
  bl        -0x41AB6C
  lis       r4, 0x8044
  lis       r5, 0x8044
  subi      r4, r4, 0x13F0
  mr        r7, r31
  subi      r5, r5, 0x1450
  li        r6, 0x3C
  bl        -0x37D144
  stw       r3, 0x10(r30)
  li        r31, 0
  b         .loc_0x84

.loc_0x50:
  lwz       r4, 0x8(r30)
  rlwinm    r0,r31,0,16,31
  mulli     r0, r0, 0x3C
  lwz       r3, 0x10(r30)
  lwz       r5, 0x4(r4)
  rlwinm    r6,r31,2,14,29
  mr        r4, r31
  lwz       r7, 0x28(r5)
  mr        r5, r30
  add       r3, r3, r0
  lwzx      r6, r7, r6
  bl        -0x1534C
  addi      r31, r31, 0x1

.loc_0x84:
  lwz       r0, 0xC(r30)
  rlwinm    r3,r31,0,16,31
  cmpw      r3, r0
  blt+      .loc_0x50
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0xD8
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
 * Address:	8043EBB0
 * Size:	000060
 */
void __dt__Q28SysShape5JointFv(void)
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
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x33F4
  stw       r0, 0x0(r30)
  bl        -0x2D658
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x41AB3C

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
 * Address:	8043EC10
 * Size:	00005C
 */
void __ct__Q28SysShape5JointFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2D894
  lis       r3, 0x804F
  lfs       f1, 0x25B8(r2)
  subi      r0, r3, 0x33F4
  lfs       f0, 0x25BC(r2)
  stw       r0, 0x0(r31)
  mr        r3, r31
  stfs      f1, 0x1C(r31)
  stfs      f1, 0x20(r31)
  stfs      f1, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x2C(r31)
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
 * Address:	8043EC6C
 * Size:	000330
 */
void initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  mulli     r0, r4, 0x3C
  stmw      r23, 0xC(r1)
  mr        r30, r3
  mr        r31, r5
  lwz       r3, 0x10(r3)
  add       r26, r3, r0
  stw       r31, 0xC(r26)
  lwz       r4, 0x18(r26)
  lwz       r3, 0xC(r4)
  lwz       r25, 0x10(r4)
  cmplwi    r3, 0
  beq-      .loc_0x1A8
  lhz       r0, 0x14(r3)
  lwz       r3, 0x10(r30)
  mulli     r4, r0, 0x3C
  add       r0, r3, r4
  stw       r0, 0x10(r26)
  lwz       r0, 0x10(r30)
  add       r28, r0, r4
  stw       r26, 0xC(r28)
  lwz       r4, 0x18(r28)
  lwz       r3, 0xC(r4)
  lwz       r29, 0x10(r4)
  cmplwi    r3, 0
  beq-      .loc_0x108
  lhz       r0, 0x14(r3)
  lwz       r3, 0x10(r30)
  mulli     r4, r0, 0x3C
  add       r0, r3, r4
  stw       r0, 0x10(r28)
  lwz       r0, 0x10(r30)
  add       r27, r0, r4
  stw       r28, 0xC(r27)
  lwz       r3, 0x18(r27)
  bl        0x2AC
  mr        r23, r3
  lwz       r3, 0x18(r27)
  bl        0x298
  cmplwi    r23, 0
  mr        r24, r3
  beq-      .loc_0xD8
  mr        r3, r23
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r27
  add       r0, r6, r0
  stw       r0, 0x10(r27)
  bl        .loc_0x0

.loc_0xD8:
  cmplwi    r24, 0
  beq-      .loc_0x108
  mr        r3, r24
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r28
  add       r0, r6, r0
  stw       r0, 0x4(r27)
  bl        .loc_0x0

.loc_0x108:
  cmplwi    r29, 0
  beq-      .loc_0x1A8
  lhz       r0, 0x14(r29)
  lwz       r3, 0x10(r30)
  mulli     r4, r0, 0x3C
  add       r0, r3, r4
  stw       r0, 0x4(r28)
  lwz       r0, 0x10(r30)
  add       r27, r0, r4
  stw       r26, 0xC(r27)
  lwz       r3, 0x18(r27)
  bl        0x20C
  mr        r24, r3
  lwz       r3, 0x18(r27)
  bl        0x1F8
  cmplwi    r24, 0
  mr        r23, r3
  beq-      .loc_0x178
  mr        r3, r24
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r27
  add       r0, r6, r0
  stw       r0, 0x10(r27)
  bl        .loc_0x0

.loc_0x178:
  cmplwi    r23, 0
  beq-      .loc_0x1A8
  mr        r3, r23
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r26
  add       r0, r6, r0
  stw       r0, 0x4(r27)
  bl        .loc_0x0

.loc_0x1A8:
  cmplwi    r25, 0
  beq-      .loc_0x31C
  lhz       r0, 0x14(r25)
  lwz       r3, 0x10(r30)
  mulli     r4, r0, 0x3C
  add       r0, r3, r4
  stw       r0, 0x4(r26)
  lwz       r0, 0x10(r30)
  add       r28, r0, r4
  stw       r31, 0xC(r28)
  lwz       r4, 0x18(r28)
  lwz       r3, 0xC(r4)
  lwz       r25, 0x10(r4)
  cmplwi    r3, 0
  beq-      .loc_0x27C
  lhz       r0, 0x14(r3)
  lwz       r3, 0x10(r30)
  mulli     r4, r0, 0x3C
  add       r0, r3, r4
  stw       r0, 0x10(r28)
  lwz       r0, 0x10(r30)
  add       r26, r0, r4
  stw       r28, 0xC(r26)
  lwz       r3, 0x18(r26)
  bl        0x138
  mr        r24, r3
  lwz       r3, 0x18(r26)
  bl        0x124
  cmplwi    r24, 0
  mr        r23, r3
  beq-      .loc_0x24C
  mr        r3, r24
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r26
  add       r0, r6, r0
  stw       r0, 0x10(r26)
  bl        .loc_0x0

.loc_0x24C:
  cmplwi    r23, 0
  beq-      .loc_0x27C
  mr        r3, r23
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r28
  add       r0, r6, r0
  stw       r0, 0x4(r26)
  bl        .loc_0x0

.loc_0x27C:
  cmplwi    r25, 0
  beq-      .loc_0x31C
  lhz       r0, 0x14(r25)
  lwz       r3, 0x10(r30)
  mulli     r4, r0, 0x3C
  add       r0, r3, r4
  stw       r0, 0x4(r28)
  lwz       r0, 0x10(r30)
  add       r25, r0, r4
  stw       r31, 0xC(r25)
  lwz       r3, 0x18(r25)
  bl        0x98
  mr        r24, r3
  lwz       r3, 0x18(r25)
  bl        0x84
  cmplwi    r24, 0
  mr        r23, r3
  beq-      .loc_0x2EC
  mr        r3, r24
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r25
  add       r0, r6, r0
  stw       r0, 0x10(r25)
  bl        .loc_0x0

.loc_0x2EC:
  cmplwi    r23, 0
  beq-      .loc_0x31C
  mr        r3, r23
  bl        .loc_0x330
  rlwinm    r4,r3,0,16,31
  lwz       r6, 0x10(r30)
  mulli     r0, r4, 0x3C
  mr        r3, r30
  mr        r5, r31
  add       r0, r6, r0
  stw       r0, 0x4(r25)
  bl        .loc_0x0

.loc_0x31C:
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x330:
*/
}

/*
 * --INFO--
 * Address:	8043EF9C
 * Size:	000008
 */
void J3DJoint::getJntNo() const
{
/*
.loc_0x0:
  lhz       r3, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EFA4
 * Size:	000008
 */
void J3DJoint::getYounger()
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EFAC
 * Size:	000008
 */
void J3DJoint::getChild()
{
/*
.loc_0x0:
  lwz       r3, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EFB4
 * Size:	000030
 */
void getJointIndex__Q28SysShape5ModelFPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x54(r3)
  bl        -0x410248
  lwz       r0, 0x14(r1)
  rlwinm    r3,r3,0,16,31
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043EFE4
 * Size:	00005C
 */
void getJoint__Q28SysShape5ModelFPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x54(r3)
  bl        -0x410280
  lwz       r0, 0xC(r31)
  rlwinm    r3,r3,0,16,31
  cmpw      r3, r0
  bge-      .loc_0x44
  mulli     r0, r3, 0x3C
  lwz       r3, 0x10(r31)
  add       r3, r3, r0
  b         .loc_0x48

.loc_0x44:
  li        r3, 0

.loc_0x48:
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
 * Size:	000050
 */
void update__Q28SysShape5ModelFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F040
 * Size:	00000C
 */
void setViewCalcModeImm__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, -0x7980(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F04C
 * Size:	00000C
 */
void setViewCalcModeInd__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, -0x7980(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void needViewCalc__Q28SysShape5ModelFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F058
 * Size:	000068
 */
void viewCalc__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, -0x7980(r13)
  cmplwi    r0, 0
  bne-      .loc_0x28
  bl        0x94
  b         .loc_0x38

.loc_0x28:
  bl        0x8C
  rlwinm    r0,r3,0,24,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31

.loc_0x38:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x54
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F0C0
 * Size:	00004C
 */
void setCurrentViewNo__Q28SysShape5ModelFUl(void)
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
  bl        .loc_0x4C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x34
  lwz       r3, 0x8(r30)
  lwz       r3, 0x84(r3)
  stw       r31, 0x30(r3)

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	8043F10C
 * Size:	000014
 */
void isMtxImmediate__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r0, 0x8(r3)
  rlwinm    r3,r0,28,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F120
 * Size:	000008
 */
void isModel__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F128
 * Size:	000008
 */
void isVisible__Q28SysShape5ModelFv(void)
{
/*
.loc_0x0:
  lbz       r3, 0x6(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F130
 * Size:	000030
 */
void jointVisible__Q28SysShape5ModelFbPQ28SysShape5Joint(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lhz       r5, 0x38(r5)
  lwz       r12, 0x28(r12)
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
 * Address:	8043F160
 * Size:	000028
 */
void __sinit_sysShapeModel_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6408(r13)
  stfsu     f0, -0x3400(r3)
  stfs      f0, -0x6404(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}