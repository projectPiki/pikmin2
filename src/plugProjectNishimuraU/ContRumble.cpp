

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
 * Size:	000060
 */
void __ct__Q24Game10RumbleNodeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void update__Q24Game10RumbleNodeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void startRumble__Q24Game10RumbleNodeFifPQ24Game10RumbleDataf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void isSameLabel__Q24Game10RumbleNodeFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void isRumbleEnd__Q24Game10RumbleNodeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80252B20
 * Size:	000158
 */
void __ct__Q24Game10ContRumbleFii(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stmw      r25, 0x14(r1)
  mr        r30, r3
  li        r0, 0x1
  stb       r0, 0x0(r3)
  mr        r31, r5
  lfs       f0, -0x39F8(r2)
  li        r3, 0x30
  stw       r4, 0x4(r30)
  stfs      f0, 0x8(r30)
  stfs      f0, 0xC(r30)
  stfs      f0, 0x10(r30)
  bl        -0x22ECBC
  mr.       r27, r3
  beq-      .loc_0x80
  bl        0x1BE824
  lis       r4, 0x804C
  li        r3, -0x1
  addi      r0, r4, 0x1BE8
  lfs       f0, -0x39F8(r2)
  stw       r0, 0x0(r27)
  li        r0, 0
  stw       r3, 0x18(r27)
  stfs      f0, 0x1C(r27)
  stfs      f0, 0x20(r27)
  stfs      f0, 0x24(r27)
  stfs      f0, 0x28(r27)
  stw       r0, 0x2C(r27)

.loc_0x80:
  stw       r27, 0x14(r30)
  li        r3, 0x30
  bl        -0x22ED04
  mr.       r27, r3
  beq-      .loc_0xC8
  bl        0x1BE7DC
  lis       r4, 0x804C
  li        r3, -0x1
  addi      r0, r4, 0x1BE8
  lfs       f0, -0x39F8(r2)
  stw       r0, 0x0(r27)
  li        r0, 0
  stw       r3, 0x18(r27)
  stfs      f0, 0x1C(r27)
  stfs      f0, 0x20(r27)
  stfs      f0, 0x24(r27)
  stfs      f0, 0x28(r27)
  stw       r0, 0x2C(r27)

.loc_0xC8:
  lis       r3, 0x804C
  stw       r27, 0x18(r30)
  lfs       f31, -0x39F8(r2)
  addi      r27, r3, 0x1BE8
  li        r25, 0
  li        r28, -0x1
  li        r29, 0
  b         .loc_0x128

.loc_0xE8:
  li        r3, 0x30
  bl        -0x22ED68
  mr.       r26, r3
  beq-      .loc_0x118
  bl        0x1BE778
  stw       r27, 0x0(r26)
  stw       r28, 0x18(r26)
  stfs      f31, 0x1C(r26)
  stfs      f31, 0x20(r26)
  stfs      f31, 0x24(r26)
  stfs      f31, 0x28(r26)
  stw       r29, 0x2C(r26)

.loc_0x118:
  lwz       r3, 0x18(r30)
  mr        r4, r26
  bl        0x1BE7C8
  addi      r25, r25, 0x1

.loc_0x128:
  cmpw      r25, r31
  blt+      .loc_0xE8
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x1C(r30)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  lmw       r25, 0x14(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80252C78
 * Size:	00008C
 */
void init__Q24Game10ContRumbleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f0, -0x39F8(r2)
  stw       r0, 0x24(r1)
  li        r0, 0x1
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  stb       r0, 0x0(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  lwz       r3, 0x14(r3)
  lwz       r30, 0x10(r3)
  b         .loc_0x5C

.loc_0x40:
  lwz       r31, 0x4(r30)
  mr        r3, r30
  bl        0x1BE910
  lwz       r3, 0x18(r29)
  mr        r4, r30
  bl        0x1BE73C
  mr        r30, r31

.loc_0x5C:
  cmplwi    r30, 0
  bne+      .loc_0x40
  lwz       r3, 0x4(r29)
  li        r4, 0x2
  bl        -0x15E8B8
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
 * Address:	80252D04
 * Size:	000290
 */
void update__Q24Game10ContRumbleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lfs       f30, -0x39F8(r2)
  lwz       r3, 0x14(r3)
  fmr       f31, f30
  lwz       r3, 0x10(r3)
  b         .loc_0x198

.loc_0x40:
  lwz       r31, 0x4(r3)
  mr        r30, r3
  stfs      f31, 0x1C(r3)
  lwz       r6, 0x2C(r3)
  cmplwi    r6, 0
  beq-      .loc_0xF4
  lwz       r3, 0x0(r6)
  li        r4, 0
  mr        r5, r4
  subic.    r0, r3, 0x1
  mtctr     r0
  ble-      .loc_0xE0

.loc_0x70:
  lwz       r3, 0x4(r6)
  addi      r0, r4, 0x1
  lfs       f1, 0x24(r30)
  lfsx      f0, r3, r5
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xD4
  rlwinm    r0,r0,2,0,29
  lfsx      f3, r3, r0
  fcmpo     cr0, f1, f3
  bge-      .loc_0xD4
  rlwinm    r5,r4,2,0,29
  lwz       r4, 0x8(r6)
  lfsx      f5, r3, r5
  lfs       f2, -0x39F4(r2)
  fsubs     f4, f1, f5
  lfsx      f0, r4, r0
  fsubs     f3, f3, f5
  lfsx      f1, r4, r5
  fdivs     f3, f4, f3
  fsubs     f2, f2, f3
  fmuls     f0, f3, f0
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x1C(r30)
  b         .loc_0xE0

.loc_0xD4:
  addi      r5, r5, 0x4
  addi      r4, r4, 0x1
  bdnz+     .loc_0x70

.loc_0xE0:
  lfs       f1, 0x1C(r30)
  lfs       f0, 0x20(r30)
  fmuls     f0, f1, f0
  stfs      f0, 0x1C(r30)
  b         .loc_0xFC

.loc_0xF4:
  lfs       f0, 0x20(r3)
  stfs      f0, 0x1C(r3)

.loc_0xFC:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x24(r30)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x24(r30)
  lfs       f0, 0x1C(r30)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x120
  fmr       f30, f0

.loc_0x120:
  lwz       r4, 0x2C(r30)
  cmplwi    r4, 0
  beq-      .loc_0x15C
  lwz       r0, 0x0(r4)
  cmpwi     r0, 0
  ble-      .loc_0x174
  rlwinm    r3,r0,2,0,29
  lwz       r4, 0x4(r4)
  subi      r0, r3, 0x4
  lfs       f1, 0x24(r30)
  lfsx      f0, r4, r0
  fcmpo     cr0, f1, f0
  bge-      .loc_0x174
  li        r0, 0
  b         .loc_0x178

.loc_0x15C:
  lfs       f1, 0x24(r30)
  lfs       f0, 0x28(r30)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x174
  li        r0, 0
  b         .loc_0x178

.loc_0x174:
  li        r0, 0x1

.loc_0x178:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x194
  mr        r3, r30
  bl        0x1BE748
  lwz       r3, 0x18(r29)
  mr        r4, r30
  bl        0x1BE574

.loc_0x194:
  mr        r3, r31

.loc_0x198:
  cmplwi    r3, 0
  bne+      .loc_0x40
  lfs       f3, -0x39F8(r2)
  fcmpo     cr0, f30, f3
  ble-      .loc_0x220
  lfs       f1, 0x8(r29)
  lfs       f0, -0x39F4(r2)
  fadds     f1, f1, f30
  stfs      f1, 0x8(r29)
  lwz       r3, -0x6514(r13)
  lfs       f2, 0xC(r29)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0xC(r29)
  stfs      f3, 0x10(r29)
  lfs       f1, 0x8(r29)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1FC
  lbz       r0, 0x0(r29)
  cmplwi    r0, 0
  beq-      .loc_0x264
  lwz       r3, 0x4(r29)
  li        r4, 0
  bl        -0x15EACC
  b         .loc_0x264

.loc_0x1FC:
  fsubs     f0, f1, f0
  stfs      f0, 0x8(r29)
  lbz       r0, 0x0(r29)
  cmplwi    r0, 0
  beq-      .loc_0x264
  lwz       r3, 0x4(r29)
  li        r4, 0x1
  bl        -0x15EAF0
  b         .loc_0x264

.loc_0x220:
  stfs      f3, 0x8(r29)
  lfs       f0, -0x39F0(r2)
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x10(r29)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x10(r29)
  lfs       f1, 0x10(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x24C
  stfs      f3, 0xC(r29)

.loc_0x24C:
  lbz       r0, 0x0(r29)
  cmplwi    r0, 0
  beq-      .loc_0x264
  lwz       r3, 0x4(r29)
  li        r4, 0x2
  bl        -0x15EB38

.loc_0x264:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x44(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80252F94
 * Size:	000058
 */
void setController__Q24Game10ContRumbleFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,24,31
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lbz       r0, 0x0(r30)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  lwz       r3, 0x4(r30)
  li        r4, 0x2
  bl        -0x15EBA0

.loc_0x3C:
  stb       r31, 0x0(r30)
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
 * Address:	80252FEC
 * Size:	000104
 */
void startRumble__Q24Game10ContRumbleFif(void)
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
  stfs      f1, 0x8(r1)
  lwz       r3, 0x18(r3)
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  lwz       r3, 0x1C(r28)
  cmplwi    r3, 0
  beq-      .loc_0xE4
  lfs       f1, 0xC(r28)
  lfs       f0, -0x39EC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE4
  bl        0xE398
  lwz       r4, 0x18(r28)
  mr        r31, r3
  lwz       r30, 0x10(r4)
  mr        r3, r30
  bl        0x1BE57C
  cmplwi    r31, 0
  beq-      .loc_0x98
  lfs       f1, 0x8(r1)
  lfs       f0, -0x39F8(r2)
  stw       r29, 0x18(r30)
  stfs      f0, 0x1C(r30)
  stfs      f1, 0x20(r30)
  stfs      f0, 0x24(r30)
  stfs      f0, 0x28(r30)
  stw       r31, 0x2C(r30)
  b         .loc_0xD8

.loc_0x98:
  lfs       f0, -0x39F8(r2)
  mr        r3, r28
  mr        r4, r29
  addi      r5, r1, 0x8
  stfs      f0, 0xC(r1)
  addi      r6, r1, 0xC
  bl        0x16C
  lfs       f2, 0xC(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, -0x39F8(r2)
  stw       r29, 0x18(r30)
  stfs      f0, 0x1C(r30)
  stfs      f1, 0x20(r30)
  stfs      f0, 0x24(r30)
  stfs      f2, 0x28(r30)
  stw       r31, 0x2C(r30)

.loc_0xD8:
  lwz       r3, 0x14(r28)
  mr        r4, r30
  bl        0x1BE33C

.loc_0xE4:
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
 * Address:	802530F0
 * Size:	000088
 */
void rumbleStop__Q24Game10ContRumbleFv(void)
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
  lwz       r3, 0x14(r3)
  lwz       r31, 0x10(r3)
  mr        r29, r31
  b         .loc_0x4C

.loc_0x30:
  lwz       r30, 0x4(r29)
  mr        r3, r29
  bl        0x1BE4A8
  lwz       r3, 0x18(r28)
  mr        r4, r29
  bl        0x1BE2D4
  mr        r29, r30

.loc_0x4C:
  cmplwi    r29, 0
  bne+      .loc_0x30
  cmplwi    r31, 0
  beq-      .loc_0x68
  lwz       r3, 0x4(r28)
  li        r4, 0x2
  bl        -0x15ED28

.loc_0x68:
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
 * Address:	80253178
 * Size:	000090
 */
void rumbleStop__Q24Game10ContRumbleFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  lwz       r3, 0x14(r3)
  lwz       r31, 0x10(r3)
  mr        r29, r31
  b         .loc_0x50

.loc_0x28:
  lwz       r0, 0x18(r29)
  lwz       r30, 0x4(r29)
  cmpw      r0, r28
  bne-      .loc_0x4C
  mr        r3, r29
  bl        0x1BE41C
  lwz       r3, 0x18(r27)
  mr        r4, r29
  bl        0x1BE248

.loc_0x4C:
  mr        r29, r30

.loc_0x50:
  cmplwi    r29, 0
  bne+      .loc_0x28
  cmplwi    r31, 0
  beq-      .loc_0x7C
  lwz       r3, 0x14(r27)
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  lwz       r3, 0x4(r27)
  li        r4, 0x2
  bl        -0x15EDC4

.loc_0x7C:
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
 * Size:	000028
 */
void stopMotor__Q24Game10ContRumbleFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80253208
 * Size:	00009C
 */
void getRumbleParameter__Q24Game10ContRumbleFiRfRf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  lis       r3, 0x5555
  lis       r7, 0x8048
  stw       r31, 0x2C(r1)
  subi      r31, r4, 0x8
  addi      r10, r7, 0x4850
  addi      r0, r3, 0x5556
  mulhw     r7, r0, r31
  lwz       r9, 0x0(r10)
  lwz       r12, 0x4(r10)
  lis       r4, 0x8048
  lwz       r11, 0x8(r10)
  addi      r3, r1, 0x8
  addi      r8, r4, 0x485C
  rlwinm    r0,r7,1,31,31
  add       r7, r7, r0
  stw       r9, 0x14(r1)
  mulli     r0, r7, 0x3
  lwz       r10, 0x0(r8)
  lwz       r9, 0x4(r8)
  addi      r4, r1, 0x14
  lwz       r8, 0x8(r8)
  rlwinm    r7,r7,2,0,29
  sub       r0, r31, r0
  stw       r12, 0x18(r1)
  lfs       f1, 0x0(r5)
  rlwinm    r0,r0,2,0,29
  stw       r11, 0x1C(r1)
  lfsx      f0, r4, r7
  stw       r10, 0x8(r1)
  fmuls     f0, f1, f0
  stw       r9, 0xC(r1)
  stw       r8, 0x10(r1)
  stfs      f0, 0x0(r5)
  lfsx      f0, r3, r0
  stfs      f0, 0x0(r6)
  lwz       r31, 0x2C(r1)
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802532A4
 * Size:	000060
 */
void __dt__Q24Game10RumbleNodeFv(void)
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
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1BE8
  stw       r0, 0x0(r30)
  bl        0x1BE2B4
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x22F230

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