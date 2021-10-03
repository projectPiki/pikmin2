

/*
 * --INFO--
 * Address:	8009EF94
 * Size:	00012C
 */
void JASTrack::JASTrack()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x786D8
  addi      r3, r31, 0xE8
  bl        0x3878
  addi      r3, r31, 0xF4
  bl        0x954C
  li        r0, 0
  addi      r3, r31, 0x148
  stw       r0, 0x144(r31)
  bl        .loc_0x12C
  addi      r3, r31, 0x268
  bl        -0x28BC
  li        r4, 0
  lfs       f0, -0x75E8(r2)
  stw       r4, 0x2F8(r31)
  li        r0, 0x78
  addi      r3, r31, 0xF4
  stfs      f0, 0x340(r31)
  stfs      f0, 0x344(r31)
  stw       r4, 0x348(r31)
  stw       r4, 0x34C(r31)
  sth       r4, 0x350(r31)
  sth       r0, 0x352(r31)
  sth       r0, 0x354(r31)
  stb       r4, 0x356(r31)
  stb       r4, 0x357(r31)
  stb       r4, 0x358(r31)
  stb       r4, 0x359(r31)
  stb       r4, 0x35A(r31)
  stb       r4, 0x35B(r31)
  stb       r4, 0x362(r31)
  stb       r4, 0x363(r31)
  stb       r4, 0x364(r31)
  stb       r4, 0x365(r31)
  stb       r4, 0x366(r31)
  bl        0x9504
  lis       r4, 0x804A
  addi      r3, r31, 0x148
  addi      r5, r4, 0x3CF8
  lha       r0, 0x0(r5)
  li        r4, 0x120
  sth       r0, 0x2E0(r31)
  lha       r0, 0x2(r5)
  sth       r0, 0x2E2(r31)
  lha       r0, 0x4(r5)
  sth       r0, 0x2E4(r31)
  lha       r0, 0x6(r5)
  sth       r0, 0x2E6(r31)
  lha       r0, 0x8(r5)
  sth       r0, 0x2E8(r31)
  lha       r0, 0xA(r5)
  sth       r0, 0x2EA(r31)
  lha       r0, 0xC(r5)
  sth       r0, 0x2EC(r31)
  lha       r0, 0xE(r5)
  sth       r0, 0x2EE(r31)
  lha       r0, 0x10(r5)
  sth       r0, 0x2F0(r31)
  lha       r0, 0x12(r5)
  sth       r0, 0x2F2(r31)
  lha       r0, 0x14(r5)
  sth       r0, 0x2F4(r31)
  lha       r0, 0x16(r5)
  sth       r0, 0x2F6(r31)
  bl        0x71C0
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x12C:
*/
}

/*
 * --INFO--
 * Address:	8009F0C0
 * Size:	00004C
 */
void JASTrack::TimedParam_::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x50
  lis       r4, 0x800A
  mr        r3, r31
  subi      r4, r4, 0xEF4
  li        r5, 0
  li        r6, 0x10
  li        r7, 0x12
  bl        0x2274C
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8009F10C
 * Size:	000018
 */
void JASTrack::MoveParam_::__ct(void)
{
/*
.loc_0x0:
  lfs       f0, -0x75E8(r2)
  stfs      f0, 0x0(r3)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009F124
 * Size:	000130
 */
void JASTrack::AInnerParam_::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x75E8(r2)
  li        r5, 0
  stw       r0, 0x14(r1)
  li        r6, 0x10
  li        r7, 0x4
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x800A
  stfs      f0, 0x0(r31)
  subi      r4, r3, 0xEF4
  addi      r3, r31, 0xC0
  stfs      f0, 0x4(r31)
  stfs      f0, 0x8(r31)
  stfs      f0, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f0, 0x14(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x2C(r31)
  stfs      f0, 0x30(r31)
  stfs      f0, 0x34(r31)
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stfs      f0, 0x44(r31)
  stfs      f0, 0x48(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stfs      f0, 0x58(r31)
  stfs      f0, 0x5C(r31)
  stfs      f0, 0x60(r31)
  stfs      f0, 0x64(r31)
  stfs      f0, 0x68(r31)
  stfs      f0, 0x6C(r31)
  stfs      f0, 0x70(r31)
  stfs      f0, 0x74(r31)
  stfs      f0, 0x78(r31)
  stfs      f0, 0x7C(r31)
  stfs      f0, 0x80(r31)
  stfs      f0, 0x84(r31)
  stfs      f0, 0x88(r31)
  stfs      f0, 0x8C(r31)
  stfs      f0, 0x90(r31)
  stfs      f0, 0x94(r31)
  stfs      f0, 0x98(r31)
  stfs      f0, 0x9C(r31)
  stfs      f0, 0xA0(r31)
  stfs      f0, 0xA4(r31)
  stfs      f0, 0xA8(r31)
  stfs      f0, 0xAC(r31)
  stfs      f0, 0xB0(r31)
  stfs      f0, 0xB4(r31)
  stfs      f0, 0xB8(r31)
  stfs      f0, 0xBC(r31)
  bl        0x22628
  lfs       f0, -0x75E8(r2)
  mr        r3, r31
  stfs      f0, 0x100(r31)
  stfs      f0, 0x104(r31)
  stfs      f0, 0x108(r31)
  stfs      f0, 0x10C(r31)
  stfs      f0, 0x110(r31)
  stfs      f0, 0x114(r31)
  stfs      f0, 0x118(r31)
  stfs      f0, 0x11C(r31)
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
 * Size:	000054
 */
void JSUList<JASChannel>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JASTrack::~JASTrack()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F254
 * Size:	0001E8
 */
void JASTrack::init()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xC
  bl        -0x2A14
  addi      r3, r31, 0x54
  bl        -0x2F64
  addi      r3, r31, 0x94
  bl        0x377C
  li        r0, 0
  addi      r3, r31, 0xF4
  stw       r0, 0xE0(r31)
  stb       r0, 0xE4(r31)
  stb       r0, 0xE5(r31)
  stb       r0, 0xE6(r31)
  stw       r0, 0xC0(r31)
  stw       r0, 0xC4(r31)
  stw       r0, 0xC8(r31)
  stw       r0, 0xCC(r31)
  stw       r0, 0xD0(r31)
  stw       r0, 0xD4(r31)
  stw       r0, 0xD8(r31)
  stw       r0, 0xDC(r31)
  bl        0x927C
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x144(r31)
  bl        0x410
  addi      r3, r31, 0x268
  bl        -0x2B6C
  lis       r3, 0x8048
  li        r7, 0xF
  subi      r6, r3, 0x7408
  stw       r7, 0x2D8(r31)
  lwz       r5, 0x0(r6)
  li        r0, 0
  lfs       f2, 0x4(r6)
  stw       r5, 0x2A8(r31)
  lwz       r4, 0x8(r6)
  stfs      f2, 0x2AC(r31)
  lwz       r3, 0xC(r6)
  stw       r4, 0x2B0(r31)
  lfs       f1, 0x10(r6)
  stw       r3, 0x2B4(r31)
  lfs       f0, 0x14(r6)
  stfs      f1, 0x2B8(r31)
  stfs      f0, 0x2BC(r31)
  stw       r7, 0x2DC(r31)
  stw       r5, 0x2C0(r31)
  stfs      f2, 0x2C4(r31)
  stw       r4, 0x2C8(r31)
  stw       r3, 0x2CC(r31)
  stfs      f1, 0x2D0(r31)
  stfs      f0, 0x2D4(r31)
  stw       r0, 0x2F8(r31)
  stw       r0, 0x2FC(r31)
  stw       r0, 0x300(r31)
  stw       r0, 0x304(r31)
  stw       r0, 0x308(r31)
  stw       r0, 0x30C(r31)
  stw       r0, 0x310(r31)
  stw       r0, 0x314(r31)
  stw       r0, 0x318(r31)
  stw       r0, 0x31C(r31)
  stw       r0, 0x320(r31)
  stw       r0, 0x324(r31)
  stw       r0, 0x328(r31)
  stw       r0, 0x32C(r31)
  stw       r0, 0x330(r31)
  stw       r0, 0x334(r31)
  stw       r0, 0x338(r31)
  lwz       r3, 0x33C(r31)
  cmplwi    r3, 0
  beq-      .loc_0x134
  bl        -0x2F38

.loc_0x134:
  lfs       f1, -0x75E8(r2)
  li        r0, 0
  lfs       f0, -0x75E4(r2)
  addi      r3, r31, 0xE8
  stfs      f1, 0x340(r31)
  stfs      f0, 0x344(r31)
  stw       r0, 0x348(r31)
  bl        0x34B4
  li        r5, 0
  li        r4, 0x78
  stw       r5, 0x34C(r31)
  li        r0, 0x30
  mr        r3, r31
  sth       r5, 0x350(r31)
  sth       r4, 0x352(r31)
  sth       r0, 0x354(r31)
  bl        0x1308
  li        r5, 0
  li        r4, 0xA
  stb       r5, 0x356(r31)
  li        r3, 0xD
  li        r0, 0x1
  stb       r5, 0x357(r31)
  stb       r4, 0x358(r31)
  stb       r5, 0x359(r31)
  stb       r5, 0x35A(r31)
  stb       r5, 0x35B(r31)
  stb       r5, 0x35C(r31)
  stb       r5, 0x35F(r31)
  stb       r3, 0x13E(r31)
  stb       r5, 0x35D(r31)
  stb       r5, 0x360(r31)
  stb       r3, 0x13F(r31)
  stb       r5, 0x35E(r31)
  stb       r5, 0x361(r31)
  stb       r3, 0x140(r31)
  stb       r5, 0x362(r31)
  stb       r5, 0x363(r31)
  stb       r0, 0x364(r31)
  stb       r5, 0x365(r31)
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
 * Size:	000120
 */
void JASTrack::inherit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F43C
 * Size:	00020C
 */
void JASTrack::mainProc()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  lbz       r0, 0x365(r3)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  lwz       r5, 0x2F8(r31)
  cmplwi    r5, 0
  beq-      .loc_0xAC
  lhz       r4, 0x352(r31)
  lis       r3, 0x4330
  lhz       r0, 0x352(r5)
  stw       r4, 0xC(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x8(r1)
  lfs       f0, -0x75E4(r2)
  lfd       f1, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f3, f1, f2
  stw       r3, 0x10(r1)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fdivs     f3, f3, f1
  fcmpo     cr0, f3, f0
  ble-      .loc_0x80
  fmr       f3, f0

.loc_0x80:
  lfs       f1, 0x340(r31)
  lfs       f0, -0x75E4(r2)
  fadds     f1, f1, f3
  stfs      f1, 0x340(r31)
  lfs       f1, 0x340(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xA4
  li        r3, 0
  b         .loc_0x1EC

.loc_0xA4:
  fsubs     f0, f1, f0
  stfs      f0, 0x340(r31)

.loc_0xAC:
  addi      r3, r31, 0x94
  li        r4, 0x7
  bl        0x354C
  addi      r3, r31, 0x94
  bl        0x3610
  mr        r3, r31
  bl        0x170
  lbz       r0, 0x362(r31)
  cmplwi    r0, 0
  beq-      .loc_0xE0
  lbz       r0, 0x358(r31)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x174

.loc_0xE0:
  lwz       r0, 0x14(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0x108
  mr        r3, r31
  li        r4, 0
  bl        0x598
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x16C
  li        r0, 0
  stw       r0, 0x14(r31)

.loc_0x108:
  lwz       r3, 0x4C(r31)
  cmpwi     r3, 0
  ble-      .loc_0x11C
  subi      r0, r3, 0x1
  stw       r0, 0x4C(r31)

.loc_0x11C:
  lwz       r0, 0x14(r31)
  cmpwi     r0, 0
  ble-      .loc_0x15C
  addi      r3, r31, 0xC
  bl        -0x2C30
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x16C
  lwz       r3, 0xE0(r31)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x15C
  lbz       r0, 0xE4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  li        r0, 0
  stw       r0, 0xC0(r31)

.loc_0x15C:
  mr        r4, r31
  subi      r3, r13, 0x758C
  bl        -0x1420
  mr        r30, r3

.loc_0x16C:
  mr        r3, r31
  bl        0x774

.loc_0x174:
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        0x14D0
  cmpwi     r30, 0
  bge-      .loc_0x194
  li        r3, -0x1
  b         .loc_0x1EC

.loc_0x194:
  mr        r30, r31
  li        r29, 0
  li        r31, 0

.loc_0x1A0:
  lwz       r28, 0x2FC(r30)
  cmplwi    r28, 0
  beq-      .loc_0x1D8
  lbz       r0, 0x35B(r28)
  cmplwi    r0, 0
  beq-      .loc_0x1D8
  mr        r3, r28
  bl        .loc_0x0
  extsb     r0, r3
  cmpwi     r0, -0x1
  bne-      .loc_0x1D8
  mr        r3, r28
  bl        0x1A84
  stw       r31, 0x2FC(r30)

.loc_0x1D8:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x10
  blt+      .loc_0x1A0
  li        r3, 0

.loc_0x1EC:
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
 * Address:	8009F648
 * Size:	000028
 */
void JASTrack::setInterrupt(unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x94
  rlwinm    r4,r4,0,16,31
  stw       r0, 0x14(r1)
  bl        0x33E0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8009F670
 * Size:	000060
 */
void JASTrack::tryInterrupt()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x50(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  li        r3, 0
  b         .loc_0x4C

.loc_0x28:
  addi      r3, r31, 0x94
  bl        0x3400
  cmplwi    r3, 0
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0x4C

.loc_0x40:
  mr        r4, r3
  addi      r3, r31, 0xC
  bl        -0x2D50

.loc_0x4C:
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
 * Size:	000028
 */
void JASTrack::setBankNumber(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F6D0
 * Size:	000008
 */
void JASTrack::assignExtBuffer(JASOuterParam *)
{
/*
.loc_0x0:
  stw       r4, 0x33C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASTrack::setPanSwitchExt(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASTrack::setPanSwitchParent(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASTrack::setPanSwitchJcs(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASTrack::getBank() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASTrack::getProgramNumber() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getVolume() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getPitch() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getPan() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getFxmix() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getDolby() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F6D8
 * Size:	0000CC
 */
void JASTrack::initTimed()
{
/*
.loc_0x0:
  lfs       f1, -0x75E8(r2)
  li        r5, 0
  lfs       f0, -0x75E4(r2)
  b         .loc_0x64

.loc_0x10:
  rlwinm    r0,r5,4,20,27
  addi      r5, r5, 0x6
  add       r4, r3, r0
  stfs      f1, 0x150(r4)
  stfs      f0, 0x148(r4)
  stfs      f0, 0x14C(r4)
  stfs      f1, 0x160(r4)
  stfs      f0, 0x158(r4)
  stfs      f0, 0x15C(r4)
  stfs      f1, 0x170(r4)
  stfs      f0, 0x168(r4)
  stfs      f0, 0x16C(r4)
  stfs      f1, 0x180(r4)
  stfs      f0, 0x178(r4)
  stfs      f0, 0x17C(r4)
  stfs      f1, 0x190(r4)
  stfs      f0, 0x188(r4)
  stfs      f0, 0x18C(r4)
  stfs      f1, 0x1A0(r4)
  stfs      f0, 0x198(r4)
  stfs      f0, 0x19C(r4)

.loc_0x64:
  rlwinm    r0,r5,0,24,31
  cmplwi    r0, 0x12
  blt+      .loc_0x10
  lfs       f1, -0x75E8(r2)
  lfs       f0, -0x75D8(r2)
  stfs      f1, 0x158(r3)
  stfs      f1, 0x15C(r3)
  stfs      f0, 0x178(r3)
  stfs      f0, 0x17C(r3)
  stfs      f0, 0x248(r3)
  stfs      f0, 0x24C(r3)
  stfs      f1, 0x258(r3)
  stfs      f1, 0x25C(r3)
  stfs      f1, 0x168(r3)
  stfs      f1, 0x16C(r3)
  stfs      f1, 0x188(r3)
  stfs      f1, 0x18C(r3)
  stfs      f1, 0x218(r3)
  stfs      f1, 0x21C(r3)
  stfs      f1, 0x228(r3)
  stfs      f1, 0x22C(r3)
  stfs      f1, 0x238(r3)
  stfs      f1, 0x23C(r3)
  stfs      f1, 0x198(r3)
  stfs      f1, 0x19C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009F7A4
 * Size:	000010
 */
void JASTrack::connectBus(int, int)
{
/*
.loc_0x0:
  rlwinm    r0,r4,1,0,30
  add       r3, r3, r0
  sth       r5, 0x12A(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009F7B4
 * Size:	0001A4
 */
void JASTrack::noteOn(unsigned char, long, long, long, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r25, 0x24(r1)
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  lbz       r0, 0x363(r3)
  cmplwi    r0, 0
  beq-      .loc_0x48
  lbz       r0, 0x358(r26)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x48
  li        r3, -0x1
  b         .loc_0x190

.loc_0x48:
  rlwinm    r0,r27,0,24,31
  li        r3, 0x1
  lbz       r4, 0x35A(r26)
  slw       r0, r3, r0
  and.      r0, r4, r0
  beq-      .loc_0x68
  li        r3, -0x1
  b         .loc_0x190

.loc_0x68:
  mr        r3, r26
  mr        r4, r27
  li        r5, 0
  bl        0x1D4
  addi      r3, r26, 0x268
  bl        -0x2FF4
  rlwinm    r3,r3,0,24,31
  bl        -0x6764
  rlwinm    r25,r3,0,24,31
  addi      r3, r26, 0x268
  bl        -0x2FF8
  lwz       r12, 0x144(r26)
  mr        r5, r3
  cmplwi    r12, 0
  bne-      .loc_0xD0
  lis       r3, 0x800A
  lhz       r7, 0x282(r26)
  addi      r8, r3, 0x2948
  rlwinm    r4,r5,0,24,31
  mr        r3, r25
  mr        r9, r26
  rlwinm    r5,r28,0,24,31
  rlwinm    r6,r29,0,24,31
  bl        -0x66F8
  mr        r28, r3
  b         .loc_0xF0

.loc_0xD0:
  mr        r3, r26
  mr        r4, r25
  rlwinm    r6,r28,0,24,31
  rlwinm    r7,r29,0,24,31
  lhz       r8, 0x282(r26)
  mtctr     r12
  bctrl     
  mr        r28, r3

.loc_0xF0:
  cmplwi    r28, 0
  bne-      .loc_0x100
  li        r3, -0x1
  b         .loc_0x190

.loc_0x100:
  stw       r30, 0x2C(r28)
  mr        r3, r26
  mr        r4, r28
  bl        -0x78FDC
  rlwinm    r0,r27,2,22,29
  lis       r5, 0x4330
  add       r4, r26, r0
  stw       r5, 0x8(r1)
  lfd       f3, -0x75E0(r2)
  mr        r3, r28
  stw       r28, 0xC0(r4)
  stw       r31, 0xC8(r28)
  lhz       r6, 0x278(r26)
  lhz       r4, 0x27A(r26)
  stw       r6, 0xC(r1)
  lhz       r0, 0x27C(r26)
  lfd       f0, 0x8(r1)
  stw       r4, 0x14(r1)
  fsubs     f1, f0, f3
  stw       r5, 0x10(r1)
  lfd       f0, 0x10(r1)
  stw       r0, 0x1C(r1)
  fsubs     f2, f0, f3
  stw       r5, 0x18(r1)
  lfd       f0, 0x18(r1)
  fsubs     f3, f0, f3
  bl        0x3D80
  mr        r3, r26
  mr        r4, r28
  bl        .loc_0x1A4
  lhz       r4, 0x350(r26)
  cmplwi    r4, 0
  beq-      .loc_0x18C
  mr        r3, r28
  bl        0x3C4C

.loc_0x18C:
  li        r3, 0

.loc_0x190:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x1A4:
*/
}

/*
 * --INFO--
 * Address:	8009F958
 * Size:	0000A4
 */
void JASTrack::overwriteOsc(JASChannel *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r4
  mr        r30, r3
  li        r28, 0
  mr        r29, r3

.loc_0x20:
  lwz       r3, 0x2D8(r30)
  cmplwi    r3, 0xF
  beq-      .loc_0x7C
  rlwinm.   r0,r3,0,28,28
  rlwinm    r31,r3,0,30,31
  beq-      .loc_0x4C
  mr        r3, r26
  mr        r4, r31
  addi      r5, r29, 0x2A8
  bl        0x3BF4
  b         .loc_0x6C

.loc_0x4C:
  rlwinm.   r0,r3,0,29,29
  beq-      .loc_0x6C
  lwz       r27, 0x2B4(r29)
  mr        r3, r26
  mr        r4, r31
  addi      r5, r29, 0x2A8
  bl        0x3BD4
  stw       r27, 0x2B4(r29)

.loc_0x6C:
  mr        r3, r26
  mr        r4, r31
  addi      r5, r29, 0x2A8
  bl        0x3C08

.loc_0x7C:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x18
  cmpwi     r28, 0x2
  addi      r30, r30, 0x4
  blt+      .loc_0x20
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8009F9FC
 * Size:	000068
 */
void JASTrack::noteOff(unsigned char, unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,22,29
  stw       r31, 0xC(r1)
  add       r31, r3, r0
  lwz       r3, 0xC0(r31)
  cmplwi    r3, 0
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x54

.loc_0x2C:
  rlwinm.   r0,r5,0,16,31
  bne-      .loc_0x40
  li        r4, 0
  bl        0x3D94
  b         .loc_0x48

.loc_0x40:
  mr        r4, r5
  bl        0x3D88

.loc_0x48:
  li        r0, 0
  li        r3, 0x1
  stw       r0, 0xC0(r31)

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
 * Address:	8009FA64
 * Size:	000064
 */
void JASTrack::gateOn(unsigned char, long, long, long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,22,29
  add       r3, r3, r0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r7
  lwz       r31, 0xC0(r3)
  cmplwi    r31, 0
  bne-      .loc_0x34
  li        r3, -0x1
  b         .loc_0x4C

.loc_0x34:
  rlwinm    r4,r5,0,24,31
  mr        r3, r31
  rlwinm    r5,r6,0,24,31
  bl        -0x6450
  stw       r30, 0x2C(r31)
  li        r3, 0

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
 * Address:	8009FAC8
 * Size:	00002C
 */
void JASTrack::checkNoteStop(long)
{
/*
.loc_0x0:
  rlwinm    r0,r4,2,0,29
  add       r3, r3, r0
  lwz       r3, 0xC0(r3)
  cmplwi    r3, 0
  bne-      .loc_0x1C
  li        r3, 0x1
  blr       

.loc_0x1C:
  lwz       r0, 0x18(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8009FAF4
 * Size:	0000E0
 */
void JASTrack::oscSetupFull(unsigned char, unsigned long, unsigned long)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,25,31,31
  rlwinm    r8,r4,28,31,31
  rlwinm    r12,r4,0,28,31
  rlwinm    r9,r4,26,31,31
  rlwinm    r10,r4,27,31,31
  beq-      .loc_0x70
  mulli     r11, r8, 0x18
  lis       r4, 0x8048
  cmpwi     r12, 0x1
  subi      r7, r4, 0x7408
  lwz       r0, 0x0(r7)
  add       r11, r3, r11
  lfs       f0, 0x4(r7)
  stw       r0, 0x2A8(r11)
  lwz       r4, 0x8(r7)
  stfs      f0, 0x2AC(r11)
  lwz       r0, 0xC(r7)
  stw       r4, 0x2B0(r11)
  lfs       f1, 0x10(r7)
  stw       r0, 0x2B4(r11)
  lfs       f0, 0x14(r7)
  stfs      f1, 0x2B8(r11)
  stfs      f0, 0x2BC(r11)
  stw       r12, 0x2A8(r11)
  beq-      .loc_0x68
  b         .loc_0x70

.loc_0x68:
  lfs       f0, -0x75E4(r2)
  stfs      f0, 0x2BC(r11)

.loc_0x70:
  cmplwi    r9, 0
  beq-      .loc_0xA4
  cmplwi    r5, 0
  bne-      .loc_0x90
  mulli     r0, r8, 0x18
  li        r7, 0
  add       r4, r3, r0
  stw       r7, 0x2B0(r4)

.loc_0x90:
  mulli     r0, r8, 0x18
  lwz       r4, 0xC(r3)
  add       r5, r4, r5
  add       r4, r3, r0
  stw       r5, 0x2B0(r4)

.loc_0xA4:
  cmplwi    r10, 0
  beqlr-    
  cmplwi    r6, 0
  bne-      .loc_0xC8
  mulli     r0, r8, 0x18
  lis       r4, 0x804A
  addi      r5, r4, 0x3D10
  add       r4, r3, r0
  stw       r5, 0x2B4(r4)

.loc_0xC8:
  mulli     r0, r8, 0x18
  lwz       r4, 0xC(r3)
  add       r4, r4, r6
  add       r3, r3, r0
  stw       r4, 0x2B4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009FBD4
 * Size:	000070
 */
void JASTrack::oscSetupSimpleEnv(unsigned char, unsigned long)
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  cmpwi     r0, 0x1
  beq-      .loc_0x60
  bgelr-    
  cmpwi     r0, 0
  bltlr-    
  lis       r4, 0x8048
  subi      r6, r4, 0x7408
  lwz       r0, 0x0(r6)
  lfs       f0, 0x4(r6)
  stw       r0, 0x2A8(r3)
  lwz       r4, 0x8(r6)
  stfs      f0, 0x2AC(r3)
  lwz       r0, 0xC(r6)
  stw       r4, 0x2B0(r3)
  lfs       f1, 0x10(r6)
  stw       r0, 0x2B4(r3)
  lfs       f0, 0x14(r6)
  stfs      f1, 0x2B8(r3)
  stfs      f0, 0x2BC(r3)
  lwz       r0, 0xC(r3)
  add       r0, r0, r5
  stw       r0, 0x2B0(r3)
  blr       

.loc_0x60:
  lwz       r0, 0xC(r3)
  add       r0, r0, r5
  stw       r0, 0x2B4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JASTrack::updateOscParam(int, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009FC44
 * Size:	0000DC
 */
void JASTrack::oscSetupSimple(unsigned char)
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  cmpwi     r0, 0x1
  beq-      .loc_0x64
  bge-      .loc_0x1C
  cmpwi     r0, 0
  bge-      .loc_0x28
  blr       

.loc_0x1C:
  cmpwi     r0, 0x3
  bgelr-    
  b         .loc_0xA0

.loc_0x28:
  lis       r4, 0x8048
  subi      r5, r4, 0x73F0
  lwz       r0, 0x0(r5)
  lfs       f0, 0x4(r5)
  stw       r0, 0x2C0(r3)
  lwz       r4, 0x8(r5)
  stfs      f0, 0x2C4(r3)
  lwz       r0, 0xC(r5)
  stw       r4, 0x2C8(r3)
  lfs       f1, 0x10(r5)
  stw       r0, 0x2CC(r3)
  lfs       f0, 0x14(r5)
  stfs      f1, 0x2D0(r3)
  stfs      f0, 0x2D4(r3)
  blr       

.loc_0x64:
  lis       r4, 0x8048
  subi      r5, r4, 0x73D8
  lwz       r0, 0x0(r5)
  lfs       f0, 0x4(r5)
  stw       r0, 0x2A8(r3)
  lwz       r4, 0x8(r5)
  stfs      f0, 0x2AC(r3)
  lwz       r0, 0xC(r5)
  stw       r4, 0x2B0(r3)
  lfs       f1, 0x10(r5)
  stw       r0, 0x2B4(r3)
  lfs       f0, 0x14(r5)
  stfs      f1, 0x2B8(r3)
  stfs      f0, 0x2BC(r3)
  blr       

.loc_0xA0:
  lis       r4, 0x8048
  subi      r5, r4, 0x73D8
  lwz       r0, 0x0(r5)
  lfs       f0, 0x4(r5)
  stw       r0, 0x2C0(r3)
  lwz       r4, 0x8(r5)
  stfs      f0, 0x2C4(r3)
  lwz       r0, 0xC(r5)
  stw       r4, 0x2C8(r3)
  lfs       f1, 0x10(r5)
  stw       r0, 0x2CC(r3)
  lfs       f0, 0x14(r5)
  stfs      f1, 0x2D0(r3)
  stfs      f0, 0x2D4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009FD20
 * Size:	0000E8
 */
void JASTrack::updateTimedParam()
{
/*
.loc_0x0:
  li        r0, 0x12
  mr        r5, r3
  lfs       f3, -0x75E8(r2)
  li        r6, 0
  mtctr     r0

.loc_0x14:
  lfs       f0, 0x150(r5)
  fcmpo     cr0, f0, f3
  ble-      .loc_0xCC
  lfs       f2, 0x148(r5)
  cmpwi     r6, 0x5
  lfs       f1, 0x154(r5)
  lfs       f0, -0x75E4(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x148(r5)
  lfs       f1, 0x150(r5)
  fsubs     f0, f1, f0
  stfs      f0, 0x150(r5)
  ble-      .loc_0x50
  cmpwi     r6, 0xB
  blt-      .loc_0x68

.loc_0x50:
  li        r0, 0x1
  lwz       r4, 0x34C(r3)
  slw       r0, r0, r6
  or        r0, r4, r0
  stw       r0, 0x34C(r3)
  b         .loc_0xCC

.loc_0x68:
  cmpwi     r6, 0x9
  lfs       f0, 0x148(r5)
  beq-      .loc_0xB8
  bge-      .loc_0x90
  cmpwi     r6, 0x7
  beq-      .loc_0xA8
  bge-      .loc_0xB0
  cmpwi     r6, 0x6
  bge-      .loc_0xA0
  b         .loc_0xCC

.loc_0x90:
  cmpwi     r6, 0xB
  beq-      .loc_0xC8
  bge-      .loc_0xCC
  b         .loc_0xC0

.loc_0xA0:
  stfs      f0, 0x2B8(r3)
  b         .loc_0xCC

.loc_0xA8:
  stfs      f0, 0x2AC(r3)
  b         .loc_0xCC

.loc_0xB0:
  stfs      f0, 0x2BC(r3)
  b         .loc_0xCC

.loc_0xB8:
  stfs      f0, 0x2D0(r3)
  b         .loc_0xCC

.loc_0xC0:
  stfs      f0, 0x2C4(r3)
  b         .loc_0xCC

.loc_0xC8:
  stfs      f0, 0x2D4(r3)

.loc_0xCC:
  addi      r5, r5, 0x10
  addi      r6, r6, 0x1
  bdnz+     .loc_0x14
  lwz       r0, 0x34C(r3)
  ori       r0, r0, 0x2
  stw       r0, 0x34C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009FE08
 * Size:	0003E8
 */
void JASTrack::updateTrackAll()
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stfd      f29, 0x70(r1)
  psq_st    f29,0x78(r1),0,0
  stfd      f28, 0x60(r1)
  psq_st    f28,0x68(r1),0,0
  stfd      f27, 0x50(r1)
  psq_st    f27,0x58(r1),0,0
  stfd      f26, 0x40(r1)
  psq_st    f26,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r31, r3
  lis       r0, 0x4330
  lhz       r3, 0x27E(r3)
  li        r4, 0
  stw       r0, 0x10(r1)
  lfd       f3, -0x75E0(r2)
  stw       r3, 0x14(r1)
  lfs       f2, -0x75D4(r2)
  lfd       f0, 0x10(r1)
  lfs       f1, -0x75D0(r2)
  fsubs     f3, f0, f3
  lfs       f0, 0x258(r31)
  fmuls     f4, f1, f0
  fdivs     f29, f3, f2
  psq_st    f4,0x8(r1),0x1,0x4
  lbz       r3, 0x8(r1)
  extsb     r3, r3
  extsb.    r0, r3
  bge-      .loc_0x9C
  neg       r0, r3
  li        r3, 0
  extsb     r4, r0

.loc_0x9C:
  li        r0, 0x10
  stb       r0, 0x13C(r31)
  stb       r4, 0x136(r31)
  stb       r3, 0x137(r31)
  lbz       r0, 0x359(r31)
  lfs       f28, 0x148(r31)
  cmplwi    r0, 0
  bne-      .loc_0xC0
  fmuls     f28, f28, f28

.loc_0xC0:
  lbz       r0, 0x363(r31)
  cmplwi    r0, 0
  beq-      .loc_0xD0
  lfs       f28, -0x75E8(r2)

.loc_0xD0:
  lhz       r3, 0x276(r31)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x14(r1)
  lfs       f1, 0x158(r31)
  lfd       f0, 0x10(r1)
  fsubs     f2, f0, f2
  bl        -0x3928
  fmr       f30, f1
  addi      r3, r31, 0xE8
  bl        0x29A0
  lwz       r3, 0x33C(r31)
  fmuls     f27, f30, f1
  lfs       f26, 0x178(r31)
  cmplwi    r3, 0
  lfs       f31, 0x168(r31)
  lfs       f30, 0x188(r31)
  beq-      .loc_0x1F4
  li        r4, 0x1
  bl        -0x3AC4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x138
  lwz       r3, 0x33C(r31)
  lfs       f0, 0x4(r3)
  fmuls     f28, f28, f0

.loc_0x138:
  lwz       r3, 0x33C(r31)
  li        r4, 0x2
  bl        -0x3AE4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x158
  lwz       r3, 0x33C(r31)
  lfs       f0, 0x8(r3)
  fmuls     f27, f27, f0

.loc_0x158:
  lwz       r3, 0x33C(r31)
  li        r4, 0x4
  bl        -0x3B04
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x18C
  lwz       r3, 0x33C(r31)
  fmr       f1, f31
  fmr       f3, f29
  lbz       r4, 0x35D(r31)
  lfs       f2, 0xC(r3)
  mr        r3, r31
  bl        0x267C
  fmr       f31, f1

.loc_0x18C:
  lwz       r3, 0x33C(r31)
  li        r4, 0x10
  bl        -0x3B38
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1C0
  lwz       r3, 0x33C(r31)
  fmr       f1, f30
  fmr       f3, f29
  lbz       r4, 0x35E(r31)
  lfs       f2, 0x10(r3)
  mr        r3, r31
  bl        0x2648
  fmr       f30, f1

.loc_0x1C0:
  lwz       r3, 0x33C(r31)
  li        r4, 0x8
  bl        -0x3B6C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1F4
  lwz       r3, 0x33C(r31)
  fmr       f1, f26
  fmr       f3, f29
  lbz       r4, 0x35C(r31)
  lfs       f2, 0x14(r3)
  mr        r3, r31
  bl        0x2614
  fmr       f26, f1

.loc_0x1F4:
  lwz       r4, 0x2F8(r31)
  cmplwi    r4, 0
  beq-      .loc_0x20C
  lbz       r0, 0x357(r31)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x224

.loc_0x20C:
  stfs      f28, 0xF4(r31)
  stfs      f27, 0xF8(r31)
  stfs      f26, 0xFC(r31)
  stfs      f31, 0x100(r31)
  stfs      f30, 0x104(r31)
  b         .loc_0x3A0

.loc_0x224:
  lhz       r3, 0x280(r31)
  lis       r0, 0x4330
  lfs       f0, 0xF4(r4)
  fmr       f1, f26
  stw       r3, 0x14(r1)
  mr        r3, r31
  fmuls     f0, f0, f28
  lfd       f4, -0x75E0(r2)
  stw       r0, 0x10(r1)
  lfs       f2, -0x75D4(r2)
  lfd       f3, 0x10(r1)
  stfs      f0, 0xF4(r31)
  fsubs     f0, f3, f4
  lwz       r4, 0x2F8(r31)
  fdivs     f29, f0, f2
  lfs       f0, 0xF8(r4)
  fmuls     f0, f0, f27
  fmr       f3, f29
  stfs      f0, 0xF8(r31)
  lwz       r5, 0x2F8(r31)
  lbz       r4, 0x35F(r31)
  lfs       f2, 0xFC(r5)
  bl        0x2584
  stfs      f1, 0xFC(r31)
  fmr       f1, f31
  fmr       f3, f29
  mr        r3, r31
  lwz       r5, 0x2F8(r31)
  lbz       r4, 0x360(r31)
  lfs       f2, 0x100(r5)
  bl        0x2564
  stfs      f1, 0x100(r31)
  fmr       f1, f30
  fmr       f3, f29
  mr        r3, r31
  lwz       r5, 0x2F8(r31)
  lbz       r4, 0x361(r31)
  lfs       f2, 0x104(r5)
  bl        0x2544
  stfs      f1, 0x104(r31)
  lwz       r3, 0x33C(r31)
  cmplwi    r3, 0
  beq-      .loc_0x318
  li        r4, 0x80
  bl        -0x3C78
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x318
  li        r30, 0
  b         .loc_0x304

.loc_0x2E8:
  lwz       r3, 0x33C(r31)
  mr        r4, r30
  bl        -0x3C68
  rlwinm    r4,r30,1,23,30
  addi      r30, r30, 0x1
  addi      r0, r4, 0x108
  sthx      r3, r31, r0

.loc_0x304:
  rlwinm    r0,r30,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x2E8
  li        r0, 0x8
  stb       r0, 0x13D(r31)

.loc_0x318:
  lfs       f1, -0x75D4(r2)
  lfs       f0, 0x208(r31)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  sth       r0, 0x118(r31)
  lfs       f0, 0x218(r31)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  sth       r0, 0x11A(r31)
  lfs       f0, 0x228(r31)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  sth       r0, 0x11C(r31)
  lfs       f0, 0x238(r31)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  sth       r0, 0x11E(r31)
  lbz       r0, 0x13D(r31)
  ori       r0, r0, 0x20
  stb       r0, 0x13D(r31)
  lfs       f0, 0x198(r31)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  sth       r0, 0x128(r31)

.loc_0x3A0:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  psq_l     f27,0x58(r1),0,0
  lfd       f27, 0x50(r1)
  psq_l     f26,0x48(r1),0,0
  lfd       f26, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0xA4(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	800A01F0
 * Size:	0004E0
 */
void JASTrack::updateTrack(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  stw       r0, 0xB4(r1)
  stfd      f31, 0xA0(r1)
  psq_st    f31,0xA8(r1),0,0
  stfd      f30, 0x90(r1)
  psq_st    f30,0x98(r1),0,0
  stfd      f29, 0x80(r1)
  psq_st    f29,0x88(r1),0,0
  stfd      f28, 0x70(r1)
  psq_st    f28,0x78(r1),0,0
  stfd      f27, 0x60(r1)
  psq_st    f27,0x68(r1),0,0
  stfd      f26, 0x50(r1)
  psq_st    f26,0x58(r1),0,0
  stmw      r24, 0x30(r1)
  mr        r25, r3
  lis       r3, 0x4330
  lhz       r5, 0x27E(r25)
  rlwinm.   r0,r4,0,14,14
  stw       r3, 0x10(r1)
  mr        r26, r4
  lfd       f2, -0x75E0(r2)
  stw       r5, 0x14(r1)
  lfs       f0, -0x75D4(r2)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fdivs     f26, f1, f0
  beq-      .loc_0xAC
  lfs       f1, -0x75D0(r2)
  li        r4, 0
  lfs       f0, 0x258(r25)
  fmuls     f3, f1, f0
  psq_st    f3,0x8(r1),0x1,0x4
  lbz       r3, 0x8(r1)
  extsb     r3, r3
  extsb.    r0, r3
  bge-      .loc_0xA4
  neg       r0, r3
  li        r3, 0
  extsb     r4, r0

.loc_0xA4:
  stb       r4, 0x136(r25)
  stb       r3, 0x137(r25)

.loc_0xAC:
  rlwinm.   r0,r26,0,25,25
  beq-      .loc_0xC8
  lwz       r0, 0x2F8(r25)
  cmplwi    r0, 0
  bne-      .loc_0xC8
  mr        r3, r25
  bl        .loc_0x4E0

.loc_0xC8:
  rlwinm.   r31,r26,0,31,31
  lfs       f30, -0x75E4(r2)
  beq-      .loc_0x140
  lbz       r0, 0x359(r25)
  lfs       f31, 0x148(r25)
  cmplwi    r0, 0
  bne-      .loc_0xE8
  fmuls     f31, f31, f31

.loc_0xE8:
  lbz       r0, 0x363(r25)
  cmplwi    r0, 0
  beq-      .loc_0xF8
  lfs       f31, -0x75E8(r2)

.loc_0xF8:
  lwz       r3, 0x33C(r25)
  cmplwi    r3, 0
  beq-      .loc_0x120
  li        r4, 0x1
  bl        -0x3E94
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x120
  lwz       r3, 0x33C(r25)
  lfs       f0, 0x4(r3)
  fmuls     f31, f31, f0

.loc_0x120:
  lbz       r0, 0x362(r25)
  cmplwi    r0, 0
  beq-      .loc_0x140
  lbz       r0, 0x358(r25)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x140
  lfs       f0, 0x248(r25)
  fmuls     f31, f31, f0

.loc_0x140:
  rlwinm.   r30,r26,0,30,30
  beq-      .loc_0x1A4
  lhz       r3, 0x276(r25)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x14(r1)
  lfs       f1, 0x158(r25)
  lfd       f0, 0x10(r1)
  fsubs     f2, f0, f2
  bl        -0x3D88
  fmr       f30, f1
  addi      r3, r25, 0xE8
  bl        0x2540
  lwz       r3, 0x33C(r25)
  fmuls     f30, f30, f1
  cmplwi    r3, 0
  beq-      .loc_0x1A4
  li        r4, 0x2
  bl        -0x3F18
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1A4
  lwz       r3, 0x33C(r25)
  lfs       f0, 0x8(r3)
  fmuls     f30, f30, f0

.loc_0x1A4:
  rlwinm.   r29,r26,0,28,28
  beq-      .loc_0x1EC
  lwz       r3, 0x33C(r25)
  lfs       f29, 0x178(r25)
  cmplwi    r3, 0
  beq-      .loc_0x1EC
  li        r4, 0x8
  bl        -0x3F4C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1EC
  lwz       r3, 0x33C(r25)
  fmr       f1, f29
  fmr       f3, f26
  lbz       r4, 0x35C(r25)
  lfs       f2, 0x14(r3)
  mr        r3, r25
  bl        0x2234
  fmr       f29, f1

.loc_0x1EC:
  rlwinm.   r28,r26,0,29,29
  beq-      .loc_0x234
  lwz       r3, 0x33C(r25)
  lfs       f28, 0x168(r25)
  cmplwi    r3, 0
  beq-      .loc_0x234
  li        r4, 0x4
  bl        -0x3F94
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x234
  lwz       r3, 0x33C(r25)
  fmr       f1, f28
  fmr       f3, f26
  lbz       r4, 0x35D(r25)
  lfs       f2, 0xC(r3)
  mr        r3, r25
  bl        0x21EC
  fmr       f28, f1

.loc_0x234:
  rlwinm.   r27,r26,0,27,27
  beq-      .loc_0x27C
  lwz       r3, 0x33C(r25)
  lfs       f27, 0x188(r25)
  cmplwi    r3, 0
  beq-      .loc_0x27C
  li        r4, 0x10
  bl        -0x3FDC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x27C
  lwz       r3, 0x33C(r25)
  fmr       f1, f27
  fmr       f3, f26
  lbz       r4, 0x35E(r25)
  lfs       f2, 0x10(r3)
  mr        r3, r25
  bl        0x21A4
  fmr       f27, f1

.loc_0x27C:
  rlwinm.   r0,r26,0,16,19
  beq-      .loc_0x2F4
  lfs       f1, -0x75D4(r2)
  lfs       f0, 0x208(r25)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  sth       r0, 0x118(r25)
  lfs       f0, 0x218(r25)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  sth       r0, 0x11A(r25)
  lfs       f0, 0x228(r25)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  sth       r0, 0x11C(r25)
  lfs       f0, 0x238(r25)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  sth       r0, 0x11E(r25)
  lbz       r0, 0x13D(r25)
  ori       r0, r0, 0x20
  stb       r0, 0x13D(r25)

.loc_0x2F4:
  lwz       r3, 0x33C(r25)
  cmplwi    r3, 0
  beq-      .loc_0x358
  rlwinm.   r0,r26,0,24,24
  beq-      .loc_0x358
  li        r4, 0x80
  bl        -0x4098
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x358
  li        r24, 0
  b         .loc_0x33C

.loc_0x320:
  lwz       r3, 0x33C(r25)
  mr        r4, r24
  bl        -0x4088
  rlwinm    r4,r24,1,23,30
  addi      r24, r24, 0x1
  addi      r0, r4, 0x108
  sthx      r3, r25, r0

.loc_0x33C:
  rlwinm    r0,r24,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x320
  lbz       r0, 0x13D(r25)
  rlwinm    r3,r0,0,26,26
  addi      r0, r3, 0x8
  stb       r0, 0x13D(r25)

.loc_0x358:
  rlwinm.   r0,r26,0,26,26
  beq-      .loc_0x37C
  lfs       f1, -0x75D4(r2)
  lfs       f0, 0x198(r25)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  sth       r0, 0x128(r25)

.loc_0x37C:
  lwz       r4, 0x2F8(r25)
  cmplwi    r4, 0
  beq-      .loc_0x394
  lbz       r0, 0x357(r25)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x3D4

.loc_0x394:
  cmplwi    r31, 0
  beq-      .loc_0x3A0
  stfs      f31, 0xF4(r25)

.loc_0x3A0:
  cmplwi    r30, 0
  beq-      .loc_0x3AC
  stfs      f30, 0xF8(r25)

.loc_0x3AC:
  cmplwi    r29, 0
  beq-      .loc_0x3B8
  stfs      f29, 0xFC(r25)

.loc_0x3B8:
  cmplwi    r28, 0
  beq-      .loc_0x3C4
  stfs      f28, 0x100(r25)

.loc_0x3C4:
  cmplwi    r27, 0
  beq-      .loc_0x49C
  stfs      f27, 0x104(r25)
  b         .loc_0x49C

.loc_0x3D4:
  lhz       r3, 0x280(r25)
  lis       r0, 0x4330
  stw       r0, 0x28(r1)
  cmplwi    r31, 0
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x2C(r1)
  lfs       f0, -0x75D4(r2)
  lfd       f1, 0x28(r1)
  fsubs     f1, f1, f2
  fdivs     f26, f1, f0
  beq-      .loc_0x40C
  lfs       f0, 0xF4(r4)
  fmuls     f0, f0, f31
  stfs      f0, 0xF4(r25)

.loc_0x40C:
  cmplwi    r30, 0
  beq-      .loc_0x424
  lwz       r3, 0x2F8(r25)
  lfs       f0, 0xF8(r3)
  fmuls     f0, f0, f30
  stfs      f0, 0xF8(r25)

.loc_0x424:
  cmplwi    r29, 0
  beq-      .loc_0x44C
  lwz       r3, 0x2F8(r25)
  fmr       f1, f29
  fmr       f3, f26
  lbz       r4, 0x35F(r25)
  lfs       f2, 0xFC(r3)
  mr        r3, r25
  bl        0x1FD4
  stfs      f1, 0xFC(r25)

.loc_0x44C:
  cmplwi    r28, 0
  beq-      .loc_0x474
  lwz       r3, 0x2F8(r25)
  fmr       f1, f28
  fmr       f3, f26
  lbz       r4, 0x360(r25)
  lfs       f2, 0x100(r3)
  mr        r3, r25
  bl        0x1FAC
  stfs      f1, 0x100(r25)

.loc_0x474:
  cmplwi    r27, 0
  beq-      .loc_0x49C
  lwz       r3, 0x2F8(r25)
  fmr       f1, f27
  fmr       f3, f26
  lbz       r4, 0x361(r25)
  lfs       f2, 0x104(r3)
  mr        r3, r25
  bl        0x1F84
  stfs      f1, 0x104(r25)

.loc_0x49C:
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  psq_l     f29,0x88(r1),0,0
  lfd       f29, 0x80(r1)
  psq_l     f28,0x78(r1),0,0
  lfd       f28, 0x70(r1)
  psq_l     f27,0x68(r1),0,0
  lfd       f27, 0x60(r1)
  psq_l     f26,0x58(r1),0,0
  lfd       f26, 0x50(r1)
  lmw       r24, 0x30(r1)
  lwz       r0, 0xB4(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr       

.loc_0x4E0:
*/
}

/*
 * --INFO--
 * Address:	800A06D0
 * Size:	0003B4
 */
void JASTrack::updateTempo()
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r24, 0x20(r1)
  mr        r24, r3
  lwz       r3, 0x2F8(r3)
  cmplwi    r3, 0
  bne-      .loc_0xB4
  lhz       r3, 0x354(r24)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0xC(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x10(r1)
  fsubs     f0, f0, f2
  stfs      f0, 0x344(r24)
  lhz       r0, 0x352(r24)
  lfs       f1, 0x344(r24)
  stw       r0, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r24)
  bl        0x7AC0
  lfs       f2, 0x344(r24)
  lfs       f0, -0x75CC(r2)
  fdivs     f1, f2, f1
  stfs      f1, 0x344(r24)
  lfs       f1, 0x344(r24)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r24)
  lwz       r3, 0x33C(r24)
  cmplwi    r3, 0
  beq-      .loc_0xC8
  li        r4, 0x40
  bl        -0x42FC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  lwz       r3, 0x33C(r24)
  lfs       f1, 0x344(r24)
  lfs       f0, 0x18(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r24)
  b         .loc_0xC8

.loc_0xB4:
  lfs       f0, 0x344(r3)
  stfs      f0, 0x344(r24)
  lwz       r3, 0x2F8(r24)
  lhz       r0, 0x354(r3)
  sth       r0, 0x354(r24)

.loc_0xC8:
  li        r25, 0
  mr        r26, r24

.loc_0xD0:
  lwz       r24, 0x2FC(r26)
  cmplwi    r24, 0
  beq-      .loc_0x390
  lbz       r0, 0x35B(r24)
  cmplwi    r0, 0
  beq-      .loc_0x390
  lwz       r3, 0x2F8(r24)
  cmplwi    r3, 0
  bne-      .loc_0x188
  lhz       r3, 0x354(r24)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x14(r1)
  lfd       f0, 0x10(r1)
  stw       r0, 0x8(r1)
  fsubs     f0, f0, f2
  stfs      f0, 0x344(r24)
  lhz       r0, 0x352(r24)
  lfs       f1, 0x344(r24)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r24)
  bl        0x79EC
  lfs       f2, 0x344(r24)
  lfs       f0, -0x75CC(r2)
  fdivs     f1, f2, f1
  stfs      f1, 0x344(r24)
  lfs       f1, 0x344(r24)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r24)
  lwz       r3, 0x33C(r24)
  cmplwi    r3, 0
  beq-      .loc_0x19C
  li        r4, 0x40
  bl        -0x43D0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  lwz       r3, 0x33C(r24)
  lfs       f1, 0x344(r24)
  lfs       f0, 0x18(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r24)
  b         .loc_0x19C

.loc_0x188:
  lfs       f0, 0x344(r3)
  stfs      f0, 0x344(r24)
  lwz       r3, 0x2F8(r24)
  lhz       r0, 0x354(r3)
  sth       r0, 0x354(r24)

.loc_0x19C:
  li        r31, 0
  mr        r27, r24

.loc_0x1A4:
  lwz       r28, 0x2FC(r27)
  cmplwi    r28, 0
  beq-      .loc_0x380
  lbz       r0, 0x35B(r28)
  cmplwi    r0, 0
  beq-      .loc_0x380
  lwz       r3, 0x2F8(r28)
  cmplwi    r3, 0
  bne-      .loc_0x25C
  lhz       r3, 0x354(r28)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x14(r1)
  lfd       f0, 0x10(r1)
  stw       r0, 0x8(r1)
  fsubs     f0, f0, f2
  stfs      f0, 0x344(r28)
  lhz       r0, 0x352(r28)
  lfs       f1, 0x344(r28)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r28)
  bl        0x7918
  lfs       f2, 0x344(r28)
  lfs       f0, -0x75CC(r2)
  fdivs     f1, f2, f1
  stfs      f1, 0x344(r28)
  lfs       f1, 0x344(r28)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r28)
  lwz       r3, 0x33C(r28)
  cmplwi    r3, 0
  beq-      .loc_0x270
  li        r4, 0x40
  bl        -0x44A4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x270
  lwz       r3, 0x33C(r28)
  lfs       f1, 0x344(r28)
  lfs       f0, 0x18(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r28)
  b         .loc_0x270

.loc_0x25C:
  lfs       f0, 0x344(r3)
  stfs      f0, 0x344(r28)
  lwz       r3, 0x2F8(r28)
  lhz       r0, 0x354(r3)
  sth       r0, 0x354(r28)

.loc_0x270:
  li        r30, 0

.loc_0x274:
  lwz       r29, 0x2FC(r28)
  cmplwi    r29, 0
  beq-      .loc_0x370
  lbz       r0, 0x35B(r29)
  cmplwi    r0, 0
  beq-      .loc_0x370
  lwz       r3, 0x2F8(r29)
  cmplwi    r3, 0
  bne-      .loc_0x32C
  lhz       r3, 0x354(r29)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f2, -0x75E0(r2)
  stw       r3, 0x14(r1)
  lfd       f0, 0x10(r1)
  stw       r0, 0x8(r1)
  fsubs     f0, f0, f2
  stfs      f0, 0x344(r29)
  lhz       r0, 0x352(r29)
  lfs       f1, 0x344(r29)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r29)
  bl        0x7848
  lfs       f2, 0x344(r29)
  lfs       f0, -0x75CC(r2)
  fdivs     f1, f2, f1
  stfs      f1, 0x344(r29)
  lfs       f1, 0x344(r29)
  fmuls     f0, f1, f0
  stfs      f0, 0x344(r29)
  lwz       r3, 0x33C(r29)
  cmplwi    r3, 0
  beq-      .loc_0x340
  li        r4, 0x40
  bl        -0x4574
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x340
  lwz       r3, 0x33C(r29)
  bl        .loc_0x3B4
  lfs       f0, 0x344(r29)
  fmuls     f0, f0, f1
  stfs      f0, 0x344(r29)
  b         .loc_0x340

.loc_0x32C:
  lfs       f0, 0x344(r3)
  stfs      f0, 0x344(r29)
  lwz       r3, 0x2F8(r29)
  lhz       r0, 0x354(r3)
  sth       r0, 0x354(r29)

.loc_0x340:
  li        r24, 0

.loc_0x344:
  lwz       r3, 0x2FC(r29)
  cmplwi    r3, 0
  beq-      .loc_0x360
  lbz       r0, 0x35B(r3)
  cmplwi    r0, 0
  beq-      .loc_0x360
  bl        .loc_0x0

.loc_0x360:
  addi      r24, r24, 0x1
  addi      r29, r29, 0x4
  cmpwi     r24, 0x10
  blt+      .loc_0x344

.loc_0x370:
  addi      r30, r30, 0x1
  addi      r28, r28, 0x4
  cmpwi     r30, 0x10
  blt+      .loc_0x274

.loc_0x380:
  addi      r31, r31, 0x1
  addi      r27, r27, 0x4
  cmpwi     r31, 0x10
  blt+      .loc_0x1A4

.loc_0x390:
  addi      r25, r25, 0x1
  addi      r26, r26, 0x4
  cmpwi     r25, 0x10
  blt+      .loc_0xD0
  lmw       r24, 0x20(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x3B4:
*/
}

/*
 * --INFO--
 * Address:	800A0A84
 * Size:	000008
 */
void JASOuterParam::getTempo() const
{
/*
.loc_0x0:
  lfs       f1, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A0A8C
 * Size:	000294
 */
void JASTrack::updateSeq(unsigned long, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r18, 0x8(r1)
  mr        r18, r3
  mr        r31, r5
  lwz       r3, 0x33C(r3)
  lwz       r0, 0x34C(r18)
  cmplwi    r3, 0
  or        r21, r4, r0
  beq-      .loc_0x44
  bl        -0x4630
  rlwinm    r0,r3,0,16,31
  lwz       r3, 0x33C(r18)
  or        r21, r21, r0
  li        r4, 0
  bl        -0x464C

.loc_0x44:
  addi      r3, r18, 0xE8
  bl        0x1D9C
  li        r0, 0
  cmplwi    r21, 0
  stw       r0, 0x34C(r18)
  beq-      .loc_0x68
  mr        r3, r18
  mr        r4, r21
  bl        -0x900

.loc_0x68:
  li        r20, 0
  mr        r22, r18

.loc_0x70:
  lwz       r18, 0x2FC(r22)
  cmplwi    r18, 0
  beq-      .loc_0x270
  lbz       r0, 0x35B(r18)
  cmplwi    r0, 0
  beq-      .loc_0x270
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x264
  lwz       r3, 0x33C(r18)
  lwz       r0, 0x34C(r18)
  cmplwi    r3, 0
  or        r29, r21, r0
  beq-      .loc_0xBC
  bl        -0x46A8
  rlwinm    r0,r3,0,16,31
  lwz       r3, 0x33C(r18)
  or        r29, r29, r0
  li        r4, 0
  bl        -0x46C4

.loc_0xBC:
  addi      r3, r18, 0xE8
  bl        0x1D24
  li        r0, 0
  cmplwi    r29, 0
  stw       r0, 0x34C(r18)
  beq-      .loc_0xE0
  mr        r3, r18
  mr        r4, r29
  bl        -0x978

.loc_0xE0:
  li        r30, 0
  mr        r23, r18

.loc_0xE8:
  lwz       r24, 0x2FC(r23)
  cmplwi    r24, 0
  beq-      .loc_0x250
  lbz       r0, 0x35B(r24)
  cmplwi    r0, 0
  beq-      .loc_0x250
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x244
  lwz       r3, 0x33C(r24)
  lwz       r0, 0x34C(r24)
  cmplwi    r3, 0
  or        r27, r29, r0
  beq-      .loc_0x134
  bl        -0x4720
  rlwinm    r0,r3,0,16,31
  lwz       r3, 0x33C(r24)
  or        r27, r27, r0
  li        r4, 0
  bl        -0x473C

.loc_0x134:
  addi      r3, r24, 0xE8
  bl        0x1CAC
  li        r0, 0
  cmplwi    r27, 0
  stw       r0, 0x34C(r24)
  beq-      .loc_0x158
  mr        r3, r24
  mr        r4, r27
  bl        -0x9F0

.loc_0x158:
  li        r28, 0

.loc_0x15C:
  lwz       r25, 0x2FC(r24)
  cmplwi    r25, 0
  beq-      .loc_0x230
  lbz       r0, 0x35B(r25)
  cmplwi    r0, 0
  beq-      .loc_0x230
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x224
  lwz       r3, 0x33C(r25)
  lwz       r0, 0x34C(r25)
  cmplwi    r3, 0
  or        r26, r27, r0
  beq-      .loc_0x1A8
  bl        -0x4794
  rlwinm    r0,r3,0,16,31
  lwz       r3, 0x33C(r25)
  or        r26, r26, r0
  li        r4, 0
  bl        -0x47B0

.loc_0x1A8:
  addi      r3, r25, 0xE8
  bl        0x1C38
  li        r0, 0
  cmplwi    r26, 0
  stw       r0, 0x34C(r25)
  beq-      .loc_0x1CC
  mr        r3, r25
  mr        r4, r26
  bl        -0xA64

.loc_0x1CC:
  rlwinm    r19,r31,0,24,31
  li        r18, 0

.loc_0x1D4:
  lwz       r3, 0x2FC(r25)
  cmplwi    r3, 0
  beq-      .loc_0x210
  lbz       r0, 0x35B(r3)
  cmplwi    r0, 0
  beq-      .loc_0x210
  cmplwi    r19, 0
  beq-      .loc_0x204
  mr        r4, r26
  mr        r5, r31
  bl        .loc_0x0
  b         .loc_0x210

.loc_0x204:
  lwz       r0, 0x34C(r3)
  or        r0, r0, r26
  stw       r0, 0x34C(r3)

.loc_0x210:
  addi      r18, r18, 0x1
  addi      r25, r25, 0x4
  cmpwi     r18, 0x10
  blt+      .loc_0x1D4
  b         .loc_0x230

.loc_0x224:
  lwz       r0, 0x34C(r25)
  or        r0, r0, r27
  stw       r0, 0x34C(r25)

.loc_0x230:
  addi      r28, r28, 0x1
  addi      r24, r24, 0x4
  cmpwi     r28, 0x10
  blt+      .loc_0x15C
  b         .loc_0x250

.loc_0x244:
  lwz       r0, 0x34C(r24)
  or        r0, r0, r29
  stw       r0, 0x34C(r24)

.loc_0x250:
  addi      r30, r30, 0x1
  addi      r23, r23, 0x4
  cmpwi     r30, 0x10
  blt+      .loc_0xE8
  b         .loc_0x270

.loc_0x264:
  lwz       r0, 0x34C(r18)
  or        r0, r0, r21
  stw       r0, 0x34C(r18)

.loc_0x270:
  addi      r20, r20, 0x1
  addi      r22, r22, 0x4
  cmpwi     r20, 0x10
  blt+      .loc_0x70
  lmw       r18, 0x8(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	800A0D20
 * Size:	0000D8
 */
void JASTrack::seqTimeToDspTime(long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  lis       r6, 0x4330
  xoris     r0, r4, 0x8000
  rlwinm    r4,r5,0,24,31
  stw       r0, 0xC(r1)
  lbz       r0, 0x364(r3)
  stw       r6, 0x8(r1)
  lfd       f1, -0x75B8(r2)
  cmplwi    r0, 0
  lfd       f0, 0x8(r1)
  stw       r4, 0x14(r1)
  lfd       f2, -0x75E0(r2)
  fsubs     f31, f0, f1
  stw       r6, 0x10(r1)
  lfs       f0, -0x75C8(r2)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fmuls     f31, f31, f1
  fdivs     f31, f31, f0
  beq-      .loc_0x6C
  lfs       f0, 0x344(r3)
  fdivs     f31, f31, f0
  b         .loc_0xB4

.loc_0x6C:
  lhz       r0, 0x354(r3)
  stw       r6, 0x10(r1)
  lfs       f1, -0x75C4(r2)
  stw       r0, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  fdivs     f0, f1, f0
  fmuls     f31, f31, f0
  bl        0x744C
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, -0x75E0(r2)
  stw       r0, 0x8(r1)
  lfs       f0, -0x75C0(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fdivs     f0, f1, f0
  fmuls     f31, f31, f0

.loc_0xB4:
  fctiwz    f0, f31
  stfd      f0, 0x10(r1)
  lwz       r3, 0x14(r1)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800A0DF8
 * Size:	000084
 */
void JASTrack::setParam(int, float, int)
{
/*
.loc_0x0:
  rlwinm    r4,r4,4,0,27
  stwu      r1, -0x20(r1)
  addi      r4, r4, 0x148
  cmpwi     r5, 0
  add       r4, r3, r4
  stfs      f1, 0x4(r4)
  bgt-      .loc_0x38
  lfs       f0, 0x4(r4)
  lfs       f1, -0x75E8(r2)
  stfs      f0, 0x0(r4)
  lfs       f0, -0x75E4(r2)
  stfs      f1, 0xC(r4)
  stfs      f0, 0x8(r4)
  b         .loc_0x7C

.loc_0x38:
  xoris     r3, r5, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfs       f3, 0x4(r4)
  stw       r0, 0x8(r1)
  lfs       f1, 0x0(r4)
  lfd       f2, -0x75B8(r2)
  lfd       f0, 0x8(r1)
  fsubs     f1, f3, f1
  stw       r3, 0x14(r1)
  fsubs     f0, f0, f2
  stw       r0, 0x10(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  stfs      f1, 0xC(r4)
  stfs      f0, 0x8(r4)

.loc_0x7C:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800A0E7C
 * Size:	000064
 */
void JASTrack::setSeqData(unsigned char *, long)
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
  bl        -0x1C44
  li        r0, 0x3
  mr        r4, r31
  stb       r0, 0x357(r30)
  addi      r3, r30, 0xC
  li        r5, 0
  bl        -0x45F8
  mr        r3, r30
  bl        -0x10B0
  li        r0, 0x2
  li        r3, 0x1
  stb       r0, 0x35B(r30)
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
 * Address:	800A0EE0
 * Size:	000078
 */
void JASTrack::startSeq()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x35B(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x50
  bge-      .loc_0x2C
  cmpwi     r0, 0
  beq-      .loc_0x38
  bge-      .loc_0x40
  b         .loc_0x58

.loc_0x2C:
  cmpwi     r0, 0x4
  bge-      .loc_0x58
  b         .loc_0x48

.loc_0x38:
  li        r3, 0
  b         .loc_0x68

.loc_0x40:
  li        r3, 0
  b         .loc_0x68

.loc_0x48:
  li        r3, 0
  b         .loc_0x68

.loc_0x50:
  li        r0, 0x1
  stb       r0, 0x35B(r3)

.loc_0x58:
  lis       r5, 0x800A
  mr        r4, r3
  addi      r3, r5, 0x2658
  bl        0x3AC8

.loc_0x68:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A0F58
 * Size:	0000FC
 */
void JASTrack::stopSeq()
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
  lbz       r0, 0x35B(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0xD4
  bge-      .loc_0x38
  cmpwi     r0, 0
  bge-      .loc_0xDC
  b         .loc_0xD4

.loc_0x38:
  cmpwi     r0, 0x3
  bge-      .loc_0xD4
  li        r0, 0
  stb       r0, 0x35B(r29)
  lbz       r0, 0x366(r29)
  cmplwi    r0, 0
  beq-      .loc_0xDC
  cmplwi    r29, 0
  beq-      .loc_0xDC
  lwz       r30, 0x0(r29)
  b         .loc_0x90

.loc_0x64:
  lwz       r3, 0x0(r30)
  li        r4, 0
  lwz       r31, 0xC(r3)
  bl        0x2800
  lwz       r3, 0x0(r30)
  bl        0x37F0
  lwz       r4, 0x0(r30)
  mr        r3, r29
  lwz       r4, 0x0(r4)
  bl        -0x7A3BC
  mr        r30, r31

.loc_0x90:
  cmplwi    r30, 0
  bne+      .loc_0x64
  cmplwi    r29, 0
  beq-      .loc_0xAC
  mr        r3, r29
  li        r4, 0
  bl        -0x7A798

.loc_0xAC:
  li        r0, 0
  stw       r0, 0x0(r29)
  lwz       r3, -0x7584(r13)
  cmplwi    r3, 0
  beq-      .loc_0xC8
  stw       r29, 0x0(r3)
  b         .loc_0xCC

.loc_0xC8:
  stw       r29, -0x7588(r13)

.loc_0xCC:
  stw       r29, -0x7584(r13)
  b         .loc_0xDC

.loc_0xD4:
  li        r0, 0x3
  stb       r0, 0x35B(r29)

.loc_0xDC:
  lwz       r0, 0x24(r1)
  li        r3, 0x1
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
 * Address:	800A1054
 * Size:	00003C
 */
void JASTrack::stopSeqMain()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  li        r5, 0x1
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x5E4
  mr        r3, r31
  bl        .loc_0x3C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x3C:
*/
}

/*
 * --INFO--
 * Address:	800A1090
 * Size:	0001D4
 */
void JASTrack::close()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lbz       r0, 0x35B(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1B4
  lwz       r0, 0x2F8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x78
  li        r28, 0
  li        r30, 0
  b         .loc_0x68

.loc_0x44:
  rlwinm    r3,r28,2,22,29
  addi      r29, r3, 0xC0
  lwzx      r3, r31, r29
  cmplwi    r3, 0
  beq-      .loc_0x64
  li        r4, 0xA
  bl        0x26DC
  stwx      r30, r31, r29

.loc_0x64:
  addi      r28, r28, 0x1

.loc_0x68:
  rlwinm    r0,r28,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x44
  b         .loc_0xB4

.loc_0x78:
  li        r28, 0
  li        r30, 0
  b         .loc_0xA8

.loc_0x84:
  rlwinm    r3,r28,2,22,29
  addi      r29, r3, 0xC0
  lwzx      r3, r31, r29
  cmplwi    r3, 0
  beq-      .loc_0xA4
  li        r4, 0
  bl        0x269C
  stwx      r30, r31, r29

.loc_0xA4:
  addi      r28, r28, 0x1

.loc_0xA8:
  rlwinm    r0,r28,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x84

.loc_0xB4:
  li        r30, 0
  mr        r29, r31
  stb       r30, 0x35B(r31)
  li        r28, 0

.loc_0xC4:
  lwz       r3, 0x2FC(r29)
  cmplwi    r3, 0
  beq-      .loc_0xD8
  bl        .loc_0x0
  stw       r30, 0x2FC(r29)

.loc_0xD8:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x10
  blt+      .loc_0xC4
  li        r0, 0
  stb       r0, 0x363(r31)
  lwz       r29, 0x0(r31)
  b         .loc_0x124

.loc_0xF8:
  lwz       r3, 0x0(r29)
  li        r4, 0
  lwz       r30, 0xC(r3)
  bl        0x2634
  lwz       r3, 0x0(r29)
  bl        0x3624
  lwz       r4, 0x0(r29)
  mr        r3, r31
  lwz       r4, 0x0(r4)
  bl        -0x7A588
  mr        r29, r30

.loc_0x124:
  cmplwi    r29, 0
  bne+      .loc_0xF8
  lbz       r0, 0x366(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1B4
  cmplwi    r31, 0
  beq-      .loc_0x1B4
  lwz       r29, 0x0(r31)
  b         .loc_0x174

.loc_0x148:
  lwz       r3, 0x0(r29)
  li        r4, 0
  lwz       r30, 0xC(r3)
  bl        0x25E4
  lwz       r3, 0x0(r29)
  bl        0x35D4
  lwz       r4, 0x0(r29)
  mr        r3, r31
  lwz       r4, 0x0(r4)
  bl        -0x7A5D8
  mr        r29, r30

.loc_0x174:
  cmplwi    r29, 0
  bne+      .loc_0x148
  cmplwi    r31, 0
  beq-      .loc_0x190
  mr        r3, r31
  li        r4, 0
  bl        -0x7A9B4

.loc_0x190:
  li        r0, 0
  stw       r0, 0x0(r31)
  lwz       r3, -0x7584(r13)
  cmplwi    r3, 0
  beq-      .loc_0x1AC
  stw       r31, 0x0(r3)
  b         .loc_0x1B0

.loc_0x1AC:
  stw       r31, -0x7588(r13)

.loc_0x1B0:
  stw       r31, -0x7584(r13)

.loc_0x1B4:
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
 * Address:	800A1264
 * Size:	000080
 */
void JASTrack::setNoteMask(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  rlwinm    r29,r4,0,24,31
  li        r27, 0
  li        r30, 0x1
  li        r31, 0
  stb       r4, 0x35A(r3)
  b         .loc_0x60

.loc_0x2C:
  rlwinm    r0,r27,0,24,31
  slw       r0, r30, r0
  and.      r0, r29, r0
  beq-      .loc_0x5C
  rlwinm    r3,r27,2,22,29
  addi      r28, r3, 0xC0
  lwzx      r3, r26, r28
  cmplwi    r3, 0
  beq-      .loc_0x5C
  li        r4, 0xA
  bl        0x2510
  stwx      r31, r26, r28

.loc_0x5C:
  addi      r27, r27, 0x1

.loc_0x60:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x2C
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800A12E4
 * Size:	000234
 */
void JASTrack::muteTrack(bool)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r26, r4
  mr        r28, r3
  stb       r26, 0x363(r3)
  lwz       r0, 0x34C(r3)
  ori       r0, r0, 0x1
  stw       r0, 0x34C(r3)
  lbz       r0, 0x363(r3)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  lbz       r0, 0x358(r28)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x7C
  li        r24, 0
  li        r25, 0
  b         .loc_0x70

.loc_0x4C:
  rlwinm    r3,r24,2,22,29
  addi      r23, r3, 0xC0
  lwzx      r3, r28, r23
  cmplwi    r3, 0
  beq-      .loc_0x6C
  li        r4, 0xA
  bl        0x2480
  stwx      r25, r28, r23

.loc_0x6C:
  addi      r24, r24, 0x1

.loc_0x70:
  rlwinm    r0,r24,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x4C

.loc_0x7C:
  li        r27, 0

.loc_0x80:
  lwz       r24, 0x2FC(r28)
  cmplwi    r24, 0
  beq-      .loc_0x210
  stb       r26, 0x363(r24)
  lwz       r0, 0x34C(r24)
  ori       r0, r0, 0x1
  stw       r0, 0x34C(r24)
  lbz       r0, 0x363(r24)
  cmplwi    r0, 0
  beq-      .loc_0xF0
  lbz       r0, 0x358(r24)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0xF0
  li        r29, 0
  mr        r25, r29
  b         .loc_0xE4

.loc_0xC0:
  rlwinm    r3,r29,2,22,29
  addi      r23, r3, 0xC0
  lwzx      r3, r24, r23
  cmplwi    r3, 0
  beq-      .loc_0xE0
  li        r4, 0xA
  bl        0x240C
  stwx      r25, r24, r23

.loc_0xE0:
  addi      r29, r29, 0x1

.loc_0xE4:
  rlwinm    r0,r29,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0xC0

.loc_0xF0:
  li        r31, 0
  mr        r29, r24

.loc_0xF8:
  lwz       r30, 0x2FC(r29)
  cmplwi    r30, 0
  beq-      .loc_0x200
  stb       r26, 0x363(r30)
  lwz       r0, 0x34C(r30)
  ori       r0, r0, 0x1
  stw       r0, 0x34C(r30)
  lbz       r0, 0x363(r30)
  cmplwi    r0, 0
  beq-      .loc_0x168
  lbz       r0, 0x358(r30)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x168
  li        r24, 0
  mr        r25, r24
  b         .loc_0x15C

.loc_0x138:
  rlwinm    r3,r24,2,22,29
  addi      r23, r3, 0xC0
  lwzx      r3, r30, r23
  cmplwi    r3, 0
  beq-      .loc_0x158
  li        r4, 0xA
  bl        0x2394
  stwx      r25, r30, r23

.loc_0x158:
  addi      r24, r24, 0x1

.loc_0x15C:
  rlwinm    r0,r24,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x138

.loc_0x168:
  li        r25, 0

.loc_0x16C:
  lwz       r23, 0x2FC(r30)
  cmplwi    r23, 0
  beq-      .loc_0x1F0
  stb       r26, 0x363(r23)
  lwz       r0, 0x34C(r23)
  ori       r0, r0, 0x1
  stw       r0, 0x34C(r23)
  lbz       r0, 0x363(r23)
  cmplwi    r0, 0
  beq-      .loc_0x1C8
  lbz       r0, 0x358(r23)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x1C8
  li        r24, 0
  b         .loc_0x1BC

.loc_0x1A8:
  mr        r3, r23
  mr        r4, r24
  li        r5, 0xA
  bl        -0x1A9C
  addi      r24, r24, 0x1

.loc_0x1BC:
  rlwinm    r0,r24,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x1A8

.loc_0x1C8:
  li        r24, 0

.loc_0x1CC:
  lwz       r3, 0x2FC(r23)
  cmplwi    r3, 0
  beq-      .loc_0x1E0
  mr        r4, r26
  bl        .loc_0x0

.loc_0x1E0:
  addi      r24, r24, 0x1
  addi      r23, r23, 0x4
  cmpwi     r24, 0x10
  blt+      .loc_0x1CC

.loc_0x1F0:
  addi      r25, r25, 0x1
  addi      r30, r30, 0x4
  cmpwi     r25, 0x10
  blt+      .loc_0x16C

.loc_0x200:
  addi      r31, r31, 0x1
  addi      r29, r29, 0x4
  cmpwi     r31, 0x10
  blt+      .loc_0xF8

.loc_0x210:
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0x10
  blt+      .loc_0x80
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JASTrack::muteChildTracks(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A1518
 * Size:	000044
 */
void JASTrack::start(void *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xC
  bl        -0x4C78
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x35B(r31)
  bl        -0x1738
  lwz       r0, 0x14(r1)
  li        r3, 0
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A155C
 * Size:	0001DC
 */
void JASTrack::openChild(unsigned char, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,2,22,29
  stmw      r27, 0xC(r1)
  mr        r27, r3
  add       r30, r27, r0
  mr        r28, r4
  mr        r29, r5
  lwz       r3, 0x2FC(r30)
  cmplwi    r3, 0
  beq-      .loc_0x3C
  bl        -0x4FC
  li        r0, 0
  stw       r0, 0x2FC(r30)

.loc_0x3C:
  lwz       r31, -0x7588(r13)
  cmplwi    r31, 0
  bne-      .loc_0x50
  li        r31, 0
  b         .loc_0x68

.loc_0x50:
  lwz       r0, 0x0(r31)
  cmplwi    r0, 0
  stw       r0, -0x7588(r13)
  bne-      .loc_0x68
  li        r0, 0
  stw       r0, -0x7584(r13)

.loc_0x68:
  cmplwi    r31, 0
  beq-      .loc_0x7C
  mr        r3, r31
  bl        -0x263C
  mr        r31, r3

.loc_0x7C:
  cmplwi    r31, 0
  bne-      .loc_0x8C
  li        r3, 0
  b         .loc_0x1C8

.loc_0x8C:
  mr        r3, r31
  bl        -0x2398
  li        r3, 0x1
  rlwinm    r0,r28,0,24,31
  stb       r3, 0x366(r31)
  stw       r27, 0x2F8(r31)
  stb       r29, 0x357(r31)
  lwz       r4, 0x348(r27)
  rlwinm    r3,r4,4,0,27
  rlwinm    r4,r4,0,0,3
  or        r0, r3, r0
  addis     r3, r4, 0x1000
  rlwinm    r0,r0,0,4,31
  or        r0, r3, r0
  stw       r0, 0x348(r31)
  stw       r31, 0x2FC(r30)
  lwz       r3, 0x2F8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x1C4
  lhz       r3, 0x352(r3)
  li        r0, 0
  sth       r3, 0x352(r31)
  stb       r0, 0x365(r31)
  lwz       r3, 0x2F8(r31)
  lfs       f0, 0x344(r3)
  stfs      f0, 0x344(r31)
  lwz       r3, 0x2F8(r31)
  lhz       r0, 0x354(r3)
  sth       r0, 0x354(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x364(r3)
  stb       r0, 0x364(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x362(r3)
  stb       r0, 0x362(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x358(r3)
  stb       r0, 0x358(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x359(r3)
  stb       r0, 0x359(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x363(r3)
  stb       r0, 0x363(r31)
  lbz       r0, 0x357(r31)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x1C4
  lwz       r4, 0x2F8(r31)
  addi      r3, r31, 0x268
  addi      r4, r4, 0x268
  bl        -0x4EE4
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x35C(r3)
  stb       r0, 0x35C(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x35F(r3)
  stb       r0, 0x35F(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x13E(r3)
  stb       r0, 0x13E(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x35D(r3)
  stb       r0, 0x35D(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x360(r3)
  stb       r0, 0x360(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x13F(r3)
  stb       r0, 0x13F(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x35E(r3)
  stb       r0, 0x35E(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x361(r3)
  stb       r0, 0x361(r31)
  lwz       r3, 0x2F8(r31)
  lbz       r0, 0x140(r3)
  stb       r0, 0x140(r31)

.loc_0x1C4:
  mr        r3, r31

.loc_0x1C8:
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
 * Size:	0000B8
 */
void JASTrack::loadTbl(unsigned long, unsigned long, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A1738
 * Size:	000040
 */
void JASTrack::exchangeRegisterValue(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,24,31
  cmplwi    r0, 0x40
  bge-      .loc_0x20
  bl        .loc_0x40
  b         .loc_0x30

.loc_0x20:
  subi      r0, r4, 0x40
  rlwinm    r0,r0,1,23,30
  add       r3, r3, r0
  lhz       r3, 0x74(r3)

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x40:
*/
}

/*
 * --INFO--
 * Address:	800A1778
 * Size:	000094
 */
void JASTrack::readReg32(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,24,31
  cmpwi     r0, 0x28
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bge-      .loc_0x30
  cmpwi     r0, 0x23
  beq-      .loc_0x48
  b         .loc_0x6C

.loc_0x30:
  cmpwi     r0, 0x2C
  bge-      .loc_0x6C
  rlwinm    r0,r0,2,0,29
  add       r3, r30, r0
  lwz       r31, 0x1E8(r3)
  b         .loc_0x78

.loc_0x48:
  li        r4, 0x4
  bl        .loc_0x94
  rlwinm    r31,r3,16,0,15
  li        r4, 0x5
  mr        r3, r30
  bl        .loc_0x94
  rlwinm    r0,r3,0,16,31
  or        r31, r31, r0
  b         .loc_0x78

.loc_0x6C:
  mr        r3, r30
  bl        .loc_0x94
  rlwinm    r31,r3,0,16,31

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x94:
*/
}

/*
 * --INFO--
 * Address:	800A180C
 * Size:	000218
 */
void JASTrack::readReg16(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r5,r4,0,24,31
  stw       r0, 0x14(r1)
  subi      r0, r5, 0x20
  cmplwi    r0, 0x10
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bgt-      .loc_0x1F0
  lis       r5, 0x804A
  rlwinm    r0,r0,2,0,29
  addi      r5, r5, 0x4350
  lwzx      r0, r5, r0
  mtctr     r0
  bctr      
  addi      r3, r30, 0x268
  bl        -0x5014
  rlwinm    r31,r3,0,24,31
  b         .loc_0x1FC
  addi      r3, r30, 0x268
  bl        -0x5014
  rlwinm    r31,r3,0,24,31
  b         .loc_0x1FC
  li        r4, 0
  bl        .loc_0x0
  rlwinm    r31,r3,8,16,23
  mr        r3, r30
  li        r4, 0x1
  bl        .loc_0x0
  or        r31, r31, r3
  b         .loc_0x1FC
  li        r0, 0x4
  addi      r3, r30, 0x3C
  li        r31, 0
  li        r5, 0xF
  mtctr     r0

.loc_0x94:
  lwz       r4, 0x2FC(r3)
  rlwinm    r31,r31,1,16,30
  cmplwi    r4, 0
  beq-      .loc_0xB8
  lbz       r0, 0x35B(r4)
  cmplwi    r0, 0
  beq-      .loc_0xB8
  ori       r0, r31, 0x1
  rlwinm    r31,r0,0,16,31

.loc_0xB8:
  lwz       r4, 0x2F8(r3)
  rlwinm    r31,r31,1,16,30
  cmplwi    r4, 0
  beq-      .loc_0xDC
  lbz       r0, 0x35B(r4)
  cmplwi    r0, 0
  beq-      .loc_0xDC
  ori       r0, r31, 0x1
  rlwinm    r31,r0,0,16,31

.loc_0xDC:
  lwz       r4, 0x2F4(r3)
  rlwinm    r31,r31,1,16,30
  cmplwi    r4, 0
  beq-      .loc_0x100
  lbz       r0, 0x35B(r4)
  cmplwi    r0, 0
  beq-      .loc_0x100
  ori       r0, r31, 0x1
  rlwinm    r31,r0,0,16,31

.loc_0x100:
  lwz       r4, 0x2F0(r3)
  rlwinm    r31,r31,1,16,30
  cmplwi    r4, 0
  beq-      .loc_0x124
  lbz       r0, 0x35B(r4)
  cmplwi    r0, 0
  beq-      .loc_0x124
  ori       r0, r31, 0x1
  rlwinm    r31,r0,0,16,31

.loc_0x124:
  subi      r3, r3, 0x10
  subi      r5, r5, 0x3
  bdnz+     .loc_0x94
  b         .loc_0x1FC
  li        r0, 0x4
  addi      r4, r30, 0x1C
  li        r31, 0
  li        r5, 0x7
  mtctr     r0

.loc_0x148:
  lwz       r3, 0xC0(r4)
  rlwinm    r31,r31,1,16,30
  cmplwi    r3, 0
  bne-      .loc_0x160
  li        r0, 0x1
  b         .loc_0x178

.loc_0x160:
  lwz       r0, 0x18(r3)
  cmpwi     r0, 0
  bne-      .loc_0x174
  li        r0, 0x1
  b         .loc_0x178

.loc_0x174:
  li        r0, 0

.loc_0x178:
  lwz       r3, 0xBC(r4)
  rlwinm    r0,r0,0,24,31
  or        r31, r31, r0
  cmplwi    r3, 0
  rlwinm    r31,r31,1,16,30
  bne-      .loc_0x198
  li        r0, 0x1
  b         .loc_0x1B0

.loc_0x198:
  lwz       r0, 0x18(r3)
  cmpwi     r0, 0
  bne-      .loc_0x1AC
  li        r0, 0x1
  b         .loc_0x1B0

.loc_0x1AC:
  li        r0, 0

.loc_0x1B0:
  rlwinm    r0,r0,0,24,31
  subi      r5, r5, 0x1
  or        r31, r31, r0
  subi      r4, r4, 0x8
  bdnz+     .loc_0x148
  b         .loc_0x1FC
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1DC
  li        r0, 0
  b         .loc_0x1E8

.loc_0x1DC:
  rlwinm    r0,r0,1,0,30
  add       r3, r30, r0
  lhz       r0, 0x3A(r3)

.loc_0x1E8:
  mr        r31, r0
  b         .loc_0x1FC

.loc_0x1F0:
  rlwinm    r0,r4,1,23,30
  add       r3, r30, r0
  lhz       r31, 0x268(r3)

.loc_0x1FC:
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
 * Address:	800A1A24
 * Size:	0000D0
 */
void JASTrack::writeRegDirect(unsigned char, unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,0,24,31
  cmpwi     r0, 0x20
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  bge-      .loc_0x48
  cmpwi     r0, 0x3
  bge-      .loc_0x9C
  cmpwi     r0, 0
  bge-      .loc_0x58
  b         .loc_0x9C

.loc_0x48:
  cmpwi     r0, 0x22
  beq-      .loc_0x70
  bge-      .loc_0x9C
  b         .loc_0xB0

.loc_0x58:
  rlwinm    r3,r29,0,24,31
  mr        r29, r3
  bl        -0x54D0
  rlwinm    r4,r3,0,16,31
  b         .loc_0xA0
  b         .loc_0xB0

.loc_0x70:
  rlwinm    r31,r29,24,24,31
  rlwinm    r30,r29,0,16,31
  mr        r3, r31
  bl        -0x54EC
  sth       r31, 0x268(r28)
  rlwinm    r0,r30,0,24,31
  mr        r4, r29
  li        r30, 0x1
  sth       r3, 0x26E(r28)
  mr        r29, r0
  b         .loc_0xA0

.loc_0x9C:
  mr        r4, r29

.loc_0xA0:
  rlwinm    r0,r30,1,23,30
  add       r3, r28, r0
  sth       r29, 0x268(r3)
  sth       r4, 0x26E(r28)

.loc_0xB0:
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
 * Size:	000008
 */
void JASRegisterParam::setFlag(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSULoByte(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A1AF4
 * Size:	0005B0
 */
void JASTrack::writeRegParam(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  rlwinm    r0,r4,0,28,31
  cmpwi     r0, 0xA
  stmw      r22, 0x8(r1)
  mr        r31, r3
  rlwinm    r3,r4,0,24,31
  beq-      .loc_0x48
  bge-      .loc_0x34
  cmpwi     r0, 0x9
  bge-      .loc_0x6C
  b         .loc_0x94

.loc_0x34:
  cmpwi     r0, 0xC
  bge-      .loc_0x94
  li        r27, 0
  li        r26, 0xB
  b         .loc_0x9C

.loc_0x48:
  lwz       r3, 0x10(r31)
  li        r26, 0xA
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lbz       r0, 0x0(r3)
  rlwinm    r3,r0,28,28,31
  rlwinm    r27,r0,0,28,29
  addi      r25, r3, 0x4
  b         .loc_0x9C

.loc_0x6C:
  lwz       r3, 0x10(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lbz       r0, 0x0(r3)
  rlwinm    r27,r0,0,28,29
  rlwinm    r26,r0,0,24,27
  cmplwi    r27, 0x8
  bne-      .loc_0x9C
  li        r27, 0x10
  b         .loc_0x9C

.loc_0x94:
  rlwinm    r27,r3,0,28,29
  rlwinm    r26,r3,0,30,31

.loc_0x9C:
  lwz       r3, 0x10(r31)
  cmplwi    r26, 0xA
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lbz       r30, 0x0(r3)
  bne-      .loc_0x128
  lwz       r3, 0x10(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lbz       r4, 0x0(r3)
  cmpwi     r4, 0x28
  bge-      .loc_0xD8
  cmpwi     r4, 0x23
  beq-      .loc_0xF0
  b         .loc_0x118

.loc_0xD8:
  cmpwi     r4, 0x2C
  bge-      .loc_0x118
  rlwinm    r0,r4,2,0,29
  add       r3, r31, r0
  lwz       r22, 0x1E8(r3)
  b         .loc_0x124

.loc_0xF0:
  mr        r3, r31
  li        r4, 0x4
  bl        -0x3E0
  rlwinm    r22,r3,16,0,15
  li        r4, 0x5
  mr        r3, r31
  bl        -0x3F0
  rlwinm    r0,r3,0,16,31
  or        r22, r22, r0
  b         .loc_0x124

.loc_0x118:
  mr        r3, r31
  bl        -0x404
  rlwinm    r22,r3,0,16,31

.loc_0x124:
  mr        r24, r22

.loc_0x128:
  cmplwi    r27, 0x10
  bgt-      .loc_0x1C8
  lis       r3, 0x804A
  rlwinm    r0,r27,2,0,29
  addi      r3, r3, 0x4394
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lwz       r4, 0x10(r31)
  mr        r3, r31
  addi      r0, r4, 0x1
  stw       r0, 0x10(r31)
  lbz       r4, 0x0(r4)
  bl        -0x444
  extsh     r23, r3
  b         .loc_0x1C8
  lwz       r3, 0x10(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lbz       r23, 0x0(r3)
  b         .loc_0x1C8
  addi      r3, r31, 0xC
  bl        -0x5228
  extsh     r23, r3
  b         .loc_0x1C8
  lwz       r3, 0x10(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lbz       r4, 0x0(r3)
  rlwinm.   r0,r4,0,24,24
  beq-      .loc_0x1B0
  rlwinm    r0,r4,8,0,23
  extsh     r23, r0
  b         .loc_0x1C8

.loc_0x1B0:
  rlwinm    r3,r4,8,0,23
  rlwinm    r0,r4,1,0,30
  or        r0, r3, r0
  extsh     r23, r0
  b         .loc_0x1C8
  li        r23, -0x1

.loc_0x1C8:
  mr        r3, r31
  mr        r4, r30
  bl        -0x4B8
  cmpwi     r26, 0x20
  extsh     r22, r3
  beq-      .loc_0x314
  bge-      .loc_0x230
  cmpwi     r26, 0xA
  beq-      .loc_0x398
  bge-      .loc_0x218
  cmpwi     r26, 0x2
  beq-      .loc_0x288
  bge-      .loc_0x20C
  cmpwi     r26, 0
  beq-      .loc_0x43C
  bge-      .loc_0x26C
  b         .loc_0x43C

.loc_0x20C:
  cmpwi     r26, 0x4
  bge-      .loc_0x43C
  b         .loc_0x2B4

.loc_0x218:
  cmpwi     r26, 0x10
  beq-      .loc_0x2CC
  bge-      .loc_0x43C
  cmpwi     r26, 0xC
  bge-      .loc_0x43C
  b         .loc_0x2C0

.loc_0x230:
  cmpwi     r26, 0x50
  beq-      .loc_0x364
  bge-      .loc_0x254
  cmpwi     r26, 0x40
  beq-      .loc_0x35C
  bge-      .loc_0x43C
  cmpwi     r26, 0x30
  beq-      .loc_0x354
  b         .loc_0x43C

.loc_0x254:
  cmpwi     r26, 0x90
  beq-      .loc_0x378
  bge-      .loc_0x43C
  cmpwi     r26, 0x60
  beq-      .loc_0x36C
  b         .loc_0x43C

.loc_0x26C:
  cmplwi    r27, 0x4
  bne-      .loc_0x280
  rlwinm    r3,r23,0,24,31
  bl        -0x57B8
  mr        r23, r3

.loc_0x280:
  add       r23, r23, r22
  b         .loc_0x43C

.loc_0x288:
  extsh     r0, r23
  mr        r3, r31
  mullw     r22, r22, r0
  li        r4, 0x4
  rlwinm    r5,r22,16,16,31
  bl        -0x36C
  rlwinm    r5,r22,0,16,31
  mr        r3, r31
  li        r4, 0x5
  bl        -0x37C
  b         .loc_0x59C

.loc_0x2B4:
  sub       r0, r22, r23
  sth       r0, 0x26E(r31)
  b         .loc_0x59C

.loc_0x2C0:
  sub       r0, r22, r23
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x2CC:
  cmplwi    r27, 0x4
  bne-      .loc_0x2E0
  rlwinm    r3,r23,0,24,31
  bl        -0x5818
  mr        r23, r3

.loc_0x2E0:
  extsh.    r0, r23
  bge-      .loc_0x300
  extsh     r0, r23
  rlwinm    r3,r22,0,16,31
  neg       r0, r0
  sraw      r0, r3, r0
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x300:
  rlwinm    r3,r22,0,16,31
  extsh     r0, r23
  slw       r0, r3, r0
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x314:
  cmplwi    r27, 0x4
  bne-      .loc_0x328
  rlwinm    r3,r23,0,24,31
  bl        -0x5860
  mr        r23, r3

.loc_0x328:
  extsh.    r0, r23
  bge-      .loc_0x344
  extsh     r0, r23
  neg       r0, r0
  sraw      r0, r22, r0
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x344:
  extsh     r0, r23
  slw       r0, r22, r0
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x354:
  and       r23, r23, r22
  b         .loc_0x43C

.loc_0x35C:
  or        r23, r23, r22
  b         .loc_0x43C

.loc_0x364:
  xor       r23, r23, r22
  b         .loc_0x43C

.loc_0x36C:
  neg       r0, r22
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x378:
  bl        -0x57C8
  rlwinm    r4,r23,0,16,31
  mr        r28, r3
  divwu     r0, r28, r4
  mullw     r0, r0, r4
  sub       r0, r28, r0
  extsh     r23, r0
  b         .loc_0x43C

.loc_0x398:
  cmpwi     r25, 0x6
  extsh     r4, r23
  beq-      .loc_0x3F0
  bge-      .loc_0x3B8
  cmpwi     r25, 0x4
  beq-      .loc_0x3C8
  bge-      .loc_0x3D8
  b         .loc_0x434

.loc_0x3B8:
  cmpwi     r25, 0x8
  beq-      .loc_0x424
  bge-      .loc_0x434
  b         .loc_0x40C

.loc_0x3C8:
  lwz       r3, 0xC(r31)
  add       r0, r24, r4
  lbzx      r28, r3, r0
  b         .loc_0x434

.loc_0x3D8:
  rlwinm    r0,r4,1,0,30
  addi      r3, r31, 0xC
  add       r4, r24, r0
  bl        -0x5504
  rlwinm    r28,r3,0,16,31
  b         .loc_0x434

.loc_0x3F0:
  rlwinm    r0,r4,1,0,30
  addi      r3, r31, 0xC
  add       r4, r4, r0
  add       r4, r24, r4
  bl        -0x5508
  mr        r28, r3
  b         .loc_0x434

.loc_0x40C:
  rlwinm    r0,r4,2,0,29
  addi      r3, r31, 0xC
  add       r4, r24, r0
  bl        -0x54F8
  mr        r28, r3
  b         .loc_0x434

.loc_0x424:
  addi      r3, r31, 0xC
  add       r4, r24, r4
  bl        -0x550C
  mr        r28, r3

.loc_0x434:
  rlwinm    r0,r28,0,16,31
  extsh     r23, r0

.loc_0x43C:
  cmpwi     r30, 0x22
  beq-      .loc_0x514
  bge-      .loc_0x468
  cmpwi     r30, 0x20
  beq-      .loc_0x4C4
  bge-      .loc_0x4A8
  cmpwi     r30, 0x3
  bge-      .loc_0x550
  cmpwi     r30, 0
  bge-      .loc_0x494
  b         .loc_0x550

.loc_0x468:
  cmpwi     r30, 0x2E
  beq-      .loc_0x4E4
  bge-      .loc_0x488
  cmpwi     r30, 0x2C
  bge-      .loc_0x550
  cmpwi     r30, 0x28
  bge-      .loc_0x540
  b         .loc_0x550

.loc_0x488:
  cmpwi     r30, 0x30
  bge-      .loc_0x550
  b         .loc_0x4FC

.loc_0x494:
  rlwinm    r3,r23,0,24,31
  mr        r23, r3
  bl        -0x59DC
  rlwinm    r29,r3,0,16,31
  b         .loc_0x554

.loc_0x4A8:
  addi      r3, r31, 0x268
  bl        -0x5764
  rlwinm    r0,r23,0,24,31
  li        r30, 0x6
  rlwimi    r0,r3,8,16,23
  extsh     r23, r0
  b         .loc_0x554

.loc_0x4C4:
  addi      r3, r31, 0x268
  bl        -0x5770
  extsh     r0, r23
  li        r30, 0x6
  rlwinm    r0,r0,8,0,23
  rlwimi    r0,r3,0,24,31
  extsh     r23, r0
  b         .loc_0x554

.loc_0x4E4:
  lhz       r3, 0x282(r31)
  rlwinm    r0,r23,0,24,31
  li        r30, 0xD
  rlwimi    r0,r3,0,16,23
  extsh     r23, r0
  b         .loc_0x554

.loc_0x4FC:
  lhz       r0, 0x282(r31)
  extsh     r3, r23
  rlwimi    r0,r3,8,0,23
  li        r30, 0xD
  extsh     r23, r0
  b         .loc_0x554

.loc_0x514:
  extsh     r22, r23
  mr        r3, r31
  srawi     r0, r22, 0x8
  li        r4, 0
  rlwinm    r5,r0,0,16,31
  bl        -0x5F8
  rlwinm    r0,r22,0,24,31
  li        r30, 0x1
  mr        r23, r0
  mr        r29, r0
  b         .loc_0x554

.loc_0x540:
  rlwinm    r0,r30,2,0,29
  add       r3, r31, r0
  stw       r28, 0x1E8(r3)
  b         .loc_0x59C

.loc_0x550:
  rlwinm    r29,r23,0,16,31

.loc_0x554:
  rlwinm    r0,r30,1,23,30
  rlwinm    r4,r30,0,24,31
  add       r3, r31, r0
  sth       r23, 0x268(r3)
  cmpwi     r4, 0x7
  sth       r29, 0x26E(r31)
  beq-      .loc_0x590
  bge-      .loc_0x59C
  cmpwi     r4, 0x6
  bge-      .loc_0x580
  b         .loc_0x59C

.loc_0x580:
  li        r0, 0xF
  stw       r0, 0x2D8(r31)
  stw       r0, 0x2DC(r31)
  b         .loc_0x59C

.loc_0x590:
  lwz       r0, 0x34C(r31)
  ori       r0, r0, 0x2
  stw       r0, 0x34C(r31)

.loc_0x59C:
  lmw       r22, 0x8(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800A20A4
 * Size:	000024
 */
void JASTrack::readSelfPort(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x54
  stw       r0, 0x14(r1)
  bl        -0x5D1C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A20C8
 * Size:	000024
 */
void JASTrack::writeSelfPort(int, unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x54
  stw       r0, 0x14(r1)
  bl        -0x5CF4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A20EC
 * Size:	000068
 */
void JASTrack::writePortAppDirect(unsigned long, unsigned short)
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
  addi      r3, r30, 0x54
  bl        -0x5D40
  cmplwi    r31, 0
  beq-      .loc_0x34
  cmplwi    r31, 0x1
  bne-      .loc_0x4C

.loc_0x34:
  cmplwi    r31, 0
  addi      r3, r30, 0x94
  li        r4, 0x4
  bne-      .loc_0x48
  li        r4, 0x3

.loc_0x48:
  bl        0x908

.loc_0x4C:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A2154
 * Size:	000038
 */
void JASTrack::readPortAppDirect(unsigned long, unsigned short *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x54
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  bl        -0x5DBC
  sth       r3, 0x0(r31)
  li        r3, 0x1
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
 * Size:	000038
 */
void JASTrack::routeTrack(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JASTrack::routeTrack(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A218C
 * Size:	0000B4
 */
void JASTrack::writePortApp(unsigned long, unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r7, r4
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,4,28,31
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x4C

.loc_0x28:
  rlwinm    r6,r7,2,26,29
  addi      r0, r6, 0x2FC
  lwzx      r3, r3, r0
  cmplwi    r3, 0
  bne-      .loc_0x44
  li        r31, 0
  b         .loc_0x50

.loc_0x44:
  rlwinm    r7,r7,28,4,31
  bdnz+     .loc_0x28

.loc_0x4C:
  mr        r31, r3

.loc_0x50:
  cmplwi    r31, 0
  bne-      .loc_0x60
  li        r3, 0
  b         .loc_0x9C

.loc_0x60:
  rlwinm    r30,r4,16,24,31
  addi      r3, r31, 0x54
  mr        r4, r30
  bl        -0x5E2C
  cmplwi    r30, 0
  beq-      .loc_0x80
  cmplwi    r30, 0x1
  bne-      .loc_0x98

.loc_0x80:
  cmplwi    r30, 0
  addi      r3, r31, 0x94
  li        r4, 0x4
  bne-      .loc_0x94
  li        r4, 0x3

.loc_0x94:
  bl        0x81C

.loc_0x98:
  li        r3, 0x1

.loc_0x9C:
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
 * Address:	800A2240
 * Size:	000084
 */
void JASTrack::readPortApp(unsigned long, unsigned short *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r4
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,4,28,31
  stw       r31, 0xC(r1)
  mr        r31, r5
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x4C

.loc_0x28:
  rlwinm    r5,r6,2,26,29
  addi      r0, r5, 0x2FC
  lwzx      r3, r3, r0
  cmplwi    r3, 0
  bne-      .loc_0x44
  li        r3, 0
  b         .loc_0x4C

.loc_0x44:
  rlwinm    r6,r6,28,4,31
  bdnz+     .loc_0x28

.loc_0x4C:
  cmplwi    r3, 0
  bne-      .loc_0x5C
  li        r3, 0
  b         .loc_0x70

.loc_0x5C:
  addi      r3, r3, 0x54
  rlwinm    r4,r4,16,24,31
  bl        -0x5EF4
  sth       r3, 0x0(r31)
  li        r3, 0x1

.loc_0x70:
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
 * Size:	000058
 */
void JASTrack::checkExportApp(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASTrack::checkImportApp(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A22C4
 * Size:	000168
 */
void JASTrack::pause(bool, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm.   r0,r4,0,24,31
  stmw      r26, 0x8(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r31, r5
  stb       r30, 0x362(r3)
  beq-      .loc_0xC4
  lbz       r0, 0x358(r29)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x40
  lwz       r0, 0x34C(r29)
  ori       r0, r0, 0x1
  stw       r0, 0x34C(r29)

.loc_0x40:
  lbz       r0, 0x358(r29)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x88
  li        r26, 0
  li        r28, 0
  b         .loc_0x7C

.loc_0x58:
  rlwinm    r3,r26,2,22,29
  addi      r27, r3, 0xC0
  lwzx      r3, r29, r27
  cmplwi    r3, 0
  beq-      .loc_0x78
  li        r4, 0xA
  bl        0x1494
  stwx      r28, r29, r27

.loc_0x78:
  addi      r26, r26, 0x1

.loc_0x7C:
  rlwinm    r0,r26,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x58

.loc_0x88:
  lbz       r0, 0x358(r29)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0xFC
  li        r26, 0
  mr        r28, r29

.loc_0x9C:
  lwz       r3, 0xC0(r28)
  cmplwi    r3, 0
  beq-      .loc_0xB0
  li        r4, 0x1
  bl        0x1324

.loc_0xB0:
  addi      r26, r26, 0x1
  addi      r28, r28, 0x4
  cmpwi     r26, 0x8
  blt+      .loc_0x9C
  b         .loc_0xFC

.loc_0xC4:
  lwz       r0, 0x34C(r29)
  mr        r28, r29
  li        r26, 0
  ori       r0, r0, 0x1
  stw       r0, 0x34C(r29)

.loc_0xD8:
  lwz       r3, 0xC0(r28)
  cmplwi    r3, 0
  beq-      .loc_0xEC
  li        r4, 0
  bl        0x12E8

.loc_0xEC:
  addi      r26, r26, 0x1
  addi      r28, r28, 0x4
  cmpwi     r26, 0x8
  blt+      .loc_0xD8

.loc_0xFC:
  rlwinm    r0,r30,0,24,31
  addi      r3, r29, 0x94
  cntlzw    r0, r0
  rlwinm    r4,r0,27,5,31
  bl        0x66C
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x154
  li        r26, 0
  mr        r28, r29

.loc_0x120:
  lwz       r3, 0x2FC(r28)
  cmplwi    r3, 0
  beq-      .loc_0x144
  lbz       r0, 0x35B(r3)
  cmplwi    r0, 0
  beq-      .loc_0x144
  mr        r4, r30
  li        r5, 0x1
  bl        .loc_0x0

.loc_0x144:
  addi      r26, r26, 0x1
  addi      r28, r28, 0x4
  cmpwi     r26, 0x10
  blt+      .loc_0x120

.loc_0x154:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800A242C
 * Size:	000170
 */
void JASTrack::getTranspose() const
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r28, r3
  lwz       r31, 0x2F8(r3)
  cmplwi    r31, 0
  beq-      .loc_0x154
  lwz       r30, 0x2F8(r31)
  cmplwi    r30, 0
  beq-      .loc_0x13C
  lwz       r29, 0x2F8(r30)
  cmplwi    r29, 0
  beq-      .loc_0x124
  lwz       r27, 0x2F8(r29)
  cmplwi    r27, 0
  beq-      .loc_0x10C
  lwz       r26, 0x2F8(r27)
  cmplwi    r26, 0
  beq-      .loc_0xF4
  lwz       r25, 0x2F8(r26)
  cmplwi    r25, 0
  beq-      .loc_0xDC
  lwz       r24, 0x2F8(r25)
  cmplwi    r24, 0
  beq-      .loc_0xC4
  lwz       r23, 0x2F8(r24)
  cmplwi    r23, 0
  beq-      .loc_0xAC
  lwz       r3, 0x2F8(r23)
  cmplwi    r3, 0
  beq-      .loc_0x94
  bl        .loc_0x0
  lbz       r0, 0x356(r23)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0x9C

.loc_0x94:
  lbz       r3, 0x356(r23)
  extsb     r3, r3

.loc_0x9C:
  lbz       r0, 0x356(r24)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0xB4

.loc_0xAC:
  lbz       r3, 0x356(r24)
  extsb     r3, r3

.loc_0xB4:
  lbz       r0, 0x356(r25)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0xCC

.loc_0xC4:
  lbz       r3, 0x356(r25)
  extsb     r3, r3

.loc_0xCC:
  lbz       r0, 0x356(r26)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0xE4

.loc_0xDC:
  lbz       r3, 0x356(r26)
  extsb     r3, r3

.loc_0xE4:
  lbz       r0, 0x356(r27)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0xFC

.loc_0xF4:
  lbz       r3, 0x356(r27)
  extsb     r3, r3

.loc_0xFC:
  lbz       r0, 0x356(r29)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0x114

.loc_0x10C:
  lbz       r3, 0x356(r29)
  extsb     r3, r3

.loc_0x114:
  lbz       r0, 0x356(r30)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0x12C

.loc_0x124:
  lbz       r3, 0x356(r30)
  extsb     r3, r3

.loc_0x12C:
  lbz       r0, 0x356(r31)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0x144

.loc_0x13C:
  lbz       r3, 0x356(r31)
  extsb     r3, r3

.loc_0x144:
  lbz       r0, 0x356(r28)
  extsb     r0, r0
  add       r3, r0, r3
  b         .loc_0x15C

.loc_0x154:
  lbz       r3, 0x356(r28)
  extsb     r3, r3

.loc_0x15C:
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800A259C
 * Size:	00003C
 */
void JASTrack::setTempo(unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  sth       r4, 0x352(r3)
  lwz       r0, 0x2F8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x24
  bl        -0x1EE8
  b         .loc_0x2C

.loc_0x24:
  li        r0, 0x1
  stb       r0, 0x365(r3)

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A25D8
 * Size:	000030
 */
void JASTrack::setTimebase(unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  sth       r4, 0x354(r3)
  lwz       r0, 0x2F8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x20
  bl        -0x1F24

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A2608
 * Size:	000050
 */
void JASTrack::panCalc(float, float, float, unsigned char)
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  cmpwi     r0, 0x1
  beq-      .loc_0x2C
  bge-      .loc_0x1C
  cmpwi     r0, 0
  bgelr-    
  b         .loc_0x48

.loc_0x1C:
  cmpwi     r0, 0x3
  bge-      .loc_0x48
  b         .loc_0x34
  blr       

.loc_0x2C:
  fmr       f1, f2
  blr       

.loc_0x34:
  lfs       f4, -0x75E4(r2)
  fmuls     f0, f2, f3
  fsubs     f2, f4, f3
  fmadds    f1, f1, f2, f0
  blr       

.loc_0x48:
  lfs       f1, -0x75E8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A2658
 * Size:	0000F4
 */
void JASTrack::rootCallback(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  bne-      .loc_0x20
  li        r3, -0x1
  b         .loc_0xE0

.loc_0x20:
  lbz       r0, 0x35B(r31)
  cmplwi    r0, 0
  bne-      .loc_0x34
  li        r3, -0x1
  b         .loc_0xE0

.loc_0x34:
  cmplwi    r0, 0x3
  bne-      .loc_0x48
  bl        -0x1640
  li        r3, -0x1
  b         .loc_0xE0

.loc_0x48:
  lfs       f1, 0x340(r31)
  subi      r3, r13, 0x7EF8
  lfs       f0, 0x344(r31)
  li        r4, 0x4
  fadds     f0, f1, f0
  stfs      f0, 0x340(r31)
  bl        0x4A034
  lfs       f1, 0x340(r31)
  lfs       f0, -0x7EF8(r13)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xC8
  mr        r3, r31
  li        r4, 0
  li        r5, 0x1
  bl        -0x1C4C
  b         .loc_0xDC

.loc_0x88:
  subi      r3, r13, 0x7EF8
  li        r4, 0x4
  bl        0x4A004
  lfs       f1, 0x340(r31)
  mr        r3, r31
  lfs       f0, -0x7EF8(r13)
  fsubs     f0, f1, f0
  stfs      f0, 0x340(r31)
  bl        -0x32C4
  extsb     r0, r3
  cmpwi     r0, -0x1
  bne-      .loc_0xC8
  mr        r3, r31
  bl        -0x16C0
  li        r3, -0x1
  b         .loc_0xE0

.loc_0xC8:
  lfs       f1, 0x340(r31)
  lfs       f0, -0x7EF8(r13)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  beq+      .loc_0x88

.loc_0xDC:
  li        r3, 0

.loc_0xE0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A274C
 * Size:	000008
 */
void JASTrack::registerSeqCallback(unsigned short (*) (JASTrack *, unsigned short))
{
/*
.loc_0x0:
  stw       r3, -0x7590(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A2754
 * Size:	0000D4
 */
void JASTrack::newMemPool(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x368
  lwz       r4, -0x7548(r13)
  bl        -0x7E734
  lwz       r4, -0x7548(r13)
  mr        r31, r3
  li        r3, 0x2C
  li        r5, 0
  bl        -0x7E850
  mr.       r0, r3
  beq-      .loc_0x50
  bl        -0x639C
  mr        r0, r3

.loc_0x50:
  stw       r0, 0x33C(r31)
  li        r30, 0x1
  stw       r31, -0x7588(r13)
  b         .loc_0xA8

.loc_0x60:
  lwz       r4, -0x7548(r13)
  li        r3, 0x368
  li        r5, 0
  bl        -0x7E778
  stw       r3, 0x0(r31)
  li        r3, 0x2C
  li        r5, 0
  lwz       r4, -0x7548(r13)
  bl        -0x7E894
  mr.       r0, r3
  beq-      .loc_0x94
  bl        -0x63E0
  mr        r0, r3

.loc_0x94:
  lwz       r3, 0x0(r31)
  addi      r30, r30, 0x1
  stw       r0, 0x33C(r3)
  lwz       r31, 0x0(r31)
  stw       r31, -0x7584(r13)

.loc_0xA8:
  cmpw      r30, r29
  blt+      .loc_0x60
  li        r0, 0
  stw       r0, 0x0(r31)
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
 * Address:	........
 * Size:	00004C
 */
void JASTrack::getFreeMemCount()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A2828
 * Size:	000030
 */
void JASVibrate::JASVibrate()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0x30
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x30:
*/
}

/*
 * --INFO--
 * Address:	800A2858
 * Size:	000018
 */
void JASVibrate::init()
{
/*
.loc_0x0:
  lfs       f1, -0x75B0(r2)
  lfs       f0, -0x75E8(r2)
  stfs      f1, 0x8(r3)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A2870
 * Size:	000034
 */
void JASVibrate::incCounter()
{
/*
.loc_0x0:
  lfs       f2, 0x0(r3)
  lfs       f1, 0x8(r3)
  lfd       f0, -0x75A8(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x0(r3)
  lfs       f1, 0x0(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bnelr-    
  lfs       f0, -0x75A0(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A28A4
 * Size:	0000A4
 */
void JASVibrate::getValue() const
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f2, -0x75E8(r2)
  lfs       f3, 0x4(r3)
  stw       r0, 0x24(r1)
  fcmpu     cr0, f2, f3
  bne-      .loc_0x24
  lfs       f1, -0x75E4(r2)
  b         .loc_0x94

.loc_0x24:
  lfs       f1, -0x759C(r2)
  lfs       f0, 0x0(r3)
  fmuls     f1, f1, f0
  fcmpo     cr0, f1, f2
  bge-      .loc_0x64
  lfs       f0, -0x7598(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f1, f0
  b         .loc_0x88

.loc_0x64:
  lfs       f0, -0x7594(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r3, r0

.loc_0x88:
  fmuls     f1, f1, f3
  lfs       f2, -0x7590(r2)
  bl        -0x6364

.loc_0x94:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800A2948
 * Size:	0000B0
 */
void JASTrack::channelUpdateCallback(unsigned long, JASChannel *, JASDsp::TChannel *, void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r3, 0x2
  stw       r0, 0x14(r1)
  beq-      .loc_0x5C
  bge-      .loc_0x28
  cmpwi     r3, 0
  beq-      .loc_0x34
  bge-      .loc_0x40
  b         .loc_0xA0

.loc_0x28:
  cmpwi     r3, 0x4
  bge-      .loc_0xA0
  b         .loc_0x4C

.loc_0x34:
  addi      r3, r6, 0xF4
  bl        0x5DD8
  b         .loc_0xA0

.loc_0x40:
  addi      r3, r6, 0xF4
  bl        0x5C68
  b         .loc_0xA0

.loc_0x4C:
  mr        r3, r4
  li        r4, 0
  bl        0xE2C
  b         .loc_0xA0

.loc_0x5C:
  li        r0, 0x8
  mr        r3, r6
  li        r5, 0
  mtctr     r0

.loc_0x6C:
  lwz       r0, 0xC0(r3)
  cmplw     r4, r0
  bne-      .loc_0x8C
  rlwinm    r0,r5,2,0,29
  li        r5, 0
  add       r3, r6, r0
  stw       r5, 0xC0(r3)
  b         .loc_0x98

.loc_0x8C:
  addi      r3, r3, 0x4
  addi      r5, r5, 0x1
  bdnz+     .loc_0x6C

.loc_0x98:
  mr        r3, r6
  bl        -0x7BDC0

.loc_0xA0:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getChannelCount() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JASTrack::getReleaseChannelCount() const
{
	// UNUSED FUNCTION
}
