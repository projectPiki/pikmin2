

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JAISound::JAISound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JAISound>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3838
 * Size:	0000EC
 */
void JAISequence::JAISequence()
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
	  mr        r4, r29
	  mr        r30, r4
	  bl        -0x8D0A4
	  lis       r4, 0x804A
	  li        r3, 0
	  addi      r4, r4, 0x6564
	  li        r0, 0xA
	  stw       r4, 0x10(r30)
	  stb       r3, 0x15(r30)
	  stb       r0, 0x16(r30)
	  stw       r3, 0x38(r30)
	  lwz       r31, -0x7494(r13)
	  bl        -0x5D00
	  mulli     r3, r3, 0x1C
	  mr        r4, r31
	  li        r5, 0x20
	  bl        -0x8F84C
	  stw       r3, 0x34(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6490
	  lfs       f0, -0x7380(r2)
	  stw       r0, 0x10(r29)
	  lis       r3, 0x800B
	  subi      r4, r3, 0x1A9C
	  li        r0, 0
	  stfs      f0, 0x4C(r29)
	  addi      r3, r29, 0x58
	  li        r5, 0
	  li        r6, 0x10
	  stfs      f0, 0x48(r29)
	  li        r7, 0x10
	  stw       r0, 0x54(r29)
	  bl        0xDF68
	  lis       r4, 0x800B
	  addi      r3, r29, 0x158
	  subi      r4, r4, 0x1A9C
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x14
	  bl        0xDF4C
	  addi      r3, r29, 0x30C
	  bl        -0x14964
	  addi      r3, r29, 0x674
	  bl        -0x17500
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Size:	000058
 */
void JAInter::SeqParameter::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JAISound::~JAISound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3924
 * Size:	000154
 */
void JAISe::JAISe()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r4, r31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        -0x8D190
	  lis       r4, 0x804A
	  li        r3, 0
	  addi      r4, r4, 0x6564
	  li        r0, 0xA
	  stw       r4, 0x10(r29)
	  stb       r3, 0x15(r29)
	  stb       r0, 0x16(r29)
	  stw       r3, 0x38(r29)
	  lwz       r30, -0x7494(r13)
	  bl        -0x5DEC
	  mulli     r3, r3, 0x1C
	  mr        r4, r30
	  li        r5, 0x20
	  bl        -0x8F938
	  stw       r3, 0x34(r29)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x639C
	  li        r5, 0
	  lis       r3, 0x800B
	  stw       r0, 0x10(r31)
	  subi      r4, r3, 0x1A9C
	  li        r6, 0x10
	  addi      r3, r31, 0x6C
	  li        r7, 0x10
	  bl        0xDE90
	  lis       r4, 0x800B
	  addi      r3, r31, 0x16C
	  subi      r4, r4, 0x1A9C
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x8
	  bl        0xDE74
	  lis       r4, 0x800B
	  addi      r3, r31, 0x1EC
	  subi      r4, r4, 0x1AB4
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x8
	  bl        0xDE58
	  lis       r4, 0x800B
	  addi      r3, r31, 0x26C
	  subi      r4, r4, 0x1A9C
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x8
	  bl        0xDE3C
	  lis       r4, 0x800B
	  addi      r3, r31, 0x2EC
	  subi      r4, r4, 0x1ACC
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x8
	  bl        0xDE20
	  lis       r4, 0x800B
	  addi      r3, r31, 0x36C
	  subi      r4, r4, 0x1ACC
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x8
	  bl        0xDE04
	  lis       r4, 0x800B
	  addi      r3, r31, 0x3EC
	  subi      r4, r4, 0x1A9C
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x8
	  bl        0xDDE8
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	800B3A78
 * Size:	0000AC
 */
void JAIStream::JAIStream()
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
	  mr        r4, r29
	  mr        r30, r4
	  bl        -0x8D2E4
	  lis       r4, 0x804A
	  li        r3, 0
	  addi      r4, r4, 0x6564
	  li        r0, 0xA
	  stw       r4, 0x10(r30)
	  stb       r3, 0x15(r30)
	  stb       r0, 0x16(r30)
	  stw       r3, 0x38(r30)
	  lwz       r31, -0x7494(r13)
	  bl        -0x5F40
	  mulli     r3, r3, 0x1C
	  mr        r4, r31
	  li        r5, 0x20
	  bl        -0x8FA8C
	  stw       r3, 0x34(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x62C8
	  li        r5, 0
	  lis       r3, 0x800B
	  stw       r0, 0x10(r29)
	  subi      r4, r3, 0x1A9C
	  li        r6, 0x10
	  addi      r3, r29, 0x64
	  li        r7, 0x14
	  bl        0xDD3C
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Size:	000114
 */
void JAISound::initMultiMoveParameter(JAInter::MoveParaSet*, unsigned char,
                                      unsigned long, float, float,
                                      unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3B24
 * Size:	000024
 */
void JAISe::getSeCategoryNumber()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  bl        -0x42E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B48
 * Size:	00000C
 */
void JAISound::getSwBit()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  lwz       r3, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B54
 * Size:	000010
 */
void JAISound::checkSwBit(unsigned long)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  lwz       r0, 0x0(r3)
	  and       r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B64
 * Size:	00000C
 */
void JAISound::getInfoPriority()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  lbz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B70
 * Size:	000018
 */
void JAISound::clearMainSoundPPointer()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x40(r3)
	  cmplwi    r3, 0
	  beqlr-
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B88
 * Size:	000014
 */
void JAISound::release()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x40(r3)
	  li        r0, 0
	  stw       r0, 0x0(r4)
	  stw       r0, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B9C
 * Size:	00004C
 */
void JAISound::start(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x28(r30)
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
 * Address:	800B3BE8
 * Size:	000030
 */
void JAISound::stop(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r4, r0
	  lwz       r3, -0x7498(r13)
	  bl        -0x72E4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3C18
 * Size:	000078
 */
void JAISound::setPrepareFlag(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lis       r0, 0xC000
	  lwz       r5, 0x20(r3)
	  rlwinm    r6,r5,0,0,1
	  cmpw      r6, r0
	  beq-      .loc_0x58
	  bge-      .loc_0x38
	  lis       r5, 0x8000
	  addi      r0, r5, 0x1
	  cmpw      r6, r0
	  bge-      .loc_0x68
	  b         .loc_0x44

	.loc_0x38:
	  cmpwi     r6, 0
	  beq-      .loc_0x68
	  b         .loc_0x68

	.loc_0x44:
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x68

	.loc_0x58:
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3C90
 * Size:	000020
 */
void JAIStream::setPrepareFlag(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1330
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3CB0
 * Size:	000020
 */
void JAISequence::setPrepareFlag(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x17B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3CD0
 * Size:	000078
 */
void JAISound::checkReady()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lis       r0, 0xC000
	  lwz       r4, 0x20(r3)
	  rlwinm    r5,r4,0,0,1
	  cmpw      r5, r0
	  beq-      .loc_0x58
	  bge-      .loc_0x38
	  lis       r4, 0x8000
	  addi      r0, r4, 0x1
	  cmpw      r5, r0
	  bge-      .loc_0x68
	  b         .loc_0x44

	.loc_0x38:
	  cmpwi     r5, 0
	  beq-      .loc_0x68
	  b         .loc_0x68

	.loc_0x44:
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x68

	.loc_0x58:
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3D48
 * Size:	000020
 */
void JAIStream::checkReady()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1284
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3D68
 * Size:	000020
 */
void JAISequence::checkReady()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1708
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3D88
 * Size:	000154
 */
void JAISound::setDistanceVolumeCommon(float, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x24
	  mulli     r0, r0, 0x1C
	  lwz       r3, 0x34(r3)
	  add       r3, r3, r0
	  lfs       f2, 0x18(r3)
	  b         .loc_0x64

	.loc_0x24:
	  lwz       r6, 0x34(r3)
	  li        r7, 0x1
	  lwz       r5, -0x7E2C(r13)
	  lfs       f2, 0x18(r6)
	  b         .loc_0x58

	.loc_0x38:
	  rlwinm    r0,r7,0,24,31
	  mulli     r3, r0, 0x1C
	  addi      r0, r3, 0x18
	  lfsx      f0, r6, r0
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x54
	  fmr       f2, f0

	.loc_0x54:
	  addi      r7, r7, 0x1

	.loc_0x58:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r5
	  blt+      .loc_0x38

	.loc_0x64:
	  lfs       f0, -0x7E4C(r13)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x78
	  lfs       f1, -0x7380(r2)
	  b         .loc_0x14C

	.loc_0x78:
	  rlwinm    r0,r4,0,24,31
	  fsubs     f2, f2, f0
	  cmplwi    r0, 0x3
	  fsubs     f3, f1, f0
	  ble-      .loc_0xC0
	  rlwinm    r3,r4,0,30,31
	  lis       r0, 0x4330
	  addi      r3, r3, 0x1
	  li        r5, 0x1
	  slw       r3, r5, r3
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, -0x7370(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fdivs     f3, f3, f0
	  b         .loc_0xF4

	.loc_0xC0:
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  rlwinm    r0,r4,0,30,31
	  li        r3, 0x1
	  slw       r3, r3, r0
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x7370(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fmuls     f3, f3, f0

	.loc_0xF4:
	  fcmpo     cr0, f2, f3
	  bge-      .loc_0x134
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x3
	  ble-      .loc_0x118
	  fdivs     f0, f2, f3
	  lfs       f1, -0x7380(r2)
	  fsubs     f1, f1, f0
	  b         .loc_0x14C

	.loc_0x118:
	  fdivs     f0, f2, f3
	  lfs       f2, -0x7380(r2)
	  lfs       f3, -0x7440(r13)
	  fsubs     f1, f2, f3
	  fsubs     f0, f2, f0
	  fmadds    f1, f1, f0, f3
	  b         .loc_0x14C

	.loc_0x134:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x3
	  ble-      .loc_0x148
	  lfs       f1, -0x737C(r2)
	  b         .loc_0x14C

	.loc_0x148:
	  lfs       f1, -0x7440(r13)

	.loc_0x14C:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B3EDC
 * Size:	00015C
 */
void JAISound::setDistancePanCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lwz       r0, -0x7E2C(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x120
	  lwz       r3, 0x34(r3)
	  lfs       f0, -0x7380(r2)
	  lfs       f2, 0x0(r3)
	  lfs       f1, 0x8(r3)
	  fabs      f2, f2
	  fabs      f3, f1
	  frsp      f1, f2
	  frsp      f2, f3
	  fmr       f4, f1
	  fmr       f3, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x50
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x50
	  lfs       f1, -0x7378(r2)
	  b         .loc_0x154

	.loc_0x50:
	  lfs       f0, -0x7E20(r13)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x60
	  fmr       f4, f0

	.loc_0x60:
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x6C
	  fmr       f3, f0

	.loc_0x6C:
	  lfs       f1, -0x737C(r2)
	  lfs       f2, 0x0(r3)
	  fcmpu     cr0, f1, f2
	  bne-      .loc_0x90
	  lfs       f0, 0x8(r3)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x90
	  lfs       f0, -0x7378(r2)
	  b         .loc_0x118

	.loc_0x90:
	  lfs       f0, -0x737C(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xCC
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xCC
	  lfs       f2, -0x7E1C(r13)
	  lfs       f1, -0x7E18(r13)
	  fsubs     f0, f2, f3
	  lfs       f3, -0x7380(r2)
	  fsubs     f2, f2, f4
	  fmuls     f0, f1, f0
	  fdivs     f0, f2, f0
	  fsubs     f0, f3, f0
	  b         .loc_0x118

	.loc_0xCC:
	  lfs       f0, -0x737C(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x104
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x104
	  lfs       f2, -0x7E1C(r13)
	  lfs       f1, -0x7E18(r13)
	  fsubs     f0, f2, f3
	  fsubs     f2, f2, f4
	  fmuls     f0, f1, f0
	  fdivs     f0, f2, f0
	  b         .loc_0x118

	.loc_0x104:
	  lfs       f0, -0x7E14(r13)
	  lfs       f1, -0x7378(r2)
	  fmuls     f0, f0, f3
	  fdivs     f0, f2, f0
	  fadds     f0, f1, f0

	.loc_0x118:
	  fmr       f1, f0
	  b         .loc_0x154

	.loc_0x120:
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x150
	  rlwinm    r3,r0,0,31,31
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x7370(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  b         .loc_0x154

	.loc_0x150:
	  lfs       f1, -0x7378(r2)

	.loc_0x154:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B4038
 * Size:	000270
 */
void JAISound::setPositionDopplarCommon(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f0, -0x737C(r2)
	  lwz       r3, 0x34(r3)
	  lfs       f6, 0x4(r3)
	  lfs       f2, 0x10(r3)
	  fmuls     f1, f6, f6
	  lfs       f5, 0x0(r3)
	  lfs       f3, 0xC(r3)
	  fsubs     f9, f6, f2
	  lfs       f7, 0x8(r3)
	  fmadds    f1, f5, f5, f1
	  lfs       f2, 0x14(r3)
	  fsubs     f8, f5, f3
	  fmadds    f4, f7, f7, f1
	  fsubs     f10, f7, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x8C
	  fsqrte    f1, f4
	  lfd       f3, -0x7368(r2)
	  lfd       f2, -0x7360(r2)
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f0, f1, f0
	  fmul      f4, f4, f0
	  frsp      f4, f4
	  b         .loc_0x110

	.loc_0x8C:
	  lfd       f0, -0x7358(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xA4
	  lis       r3, 0x8051
	  lfs       f4, 0x48B0(r3)
	  b         .loc_0x110

	.loc_0xA4:
	  stfs      f4, 0xC(r1)
	  lis       r0, 0x7F80
	  lwz       r5, 0xC(r1)
	  rlwinm    r3,r5,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0xCC
	  bge-      .loc_0xFC
	  cmpwi     r3, 0
	  beq-      .loc_0xE4
	  b         .loc_0xFC

	.loc_0xCC:
	  rlwinm.   r0,r5,0,9,31
	  beq-      .loc_0xDC
	  li        r0, 0x1
	  b         .loc_0x100

	.loc_0xDC:
	  li        r0, 0x2
	  b         .loc_0x100

	.loc_0xE4:
	  rlwinm.   r0,r5,0,9,31
	  beq-      .loc_0xF4
	  li        r0, 0x5
	  b         .loc_0x100

	.loc_0xF4:
	  li        r0, 0x3
	  b         .loc_0x100

	.loc_0xFC:
	  li        r0, 0x4

	.loc_0x100:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x110
	  lis       r3, 0x8051
	  lfs       f4, 0x48B0(r3)

	.loc_0x110:
	  fadds     f1, f6, f9
	  lfs       f0, -0x737C(r2)
	  fadds     f2, f5, f8
	  fadds     f3, f7, f10
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fmadds    f5, f3, f3, f1
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x17C
	  fsqrte    f1, f5
	  lfd       f3, -0x7368(r2)
	  lfd       f2, -0x7360(r2)
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f5, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f5, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f5, f0, f2
	  fmul      f0, f1, f0
	  fmul      f0, f5, f0
	  frsp      f0, f0
	  b         .loc_0x208

	.loc_0x17C:
	  lfd       f0, -0x7358(r2)
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x194
	  lis       r3, 0x8051
	  lfs       f0, 0x48B0(r3)
	  b         .loc_0x208

	.loc_0x194:
	  stfs      f5, 0x8(r1)
	  lis       r0, 0x7F80
	  lwz       r5, 0x8(r1)
	  rlwinm    r3,r5,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x1BC
	  bge-      .loc_0x1EC
	  cmpwi     r3, 0
	  beq-      .loc_0x1D4
	  b         .loc_0x1EC

	.loc_0x1BC:
	  rlwinm.   r0,r5,0,9,31
	  beq-      .loc_0x1CC
	  li        r0, 0x1
	  b         .loc_0x1F0

	.loc_0x1CC:
	  li        r0, 0x2
	  b         .loc_0x1F0

	.loc_0x1D4:
	  rlwinm.   r0,r5,0,9,31
	  beq-      .loc_0x1E4
	  li        r0, 0x5
	  b         .loc_0x1F0

	.loc_0x1E4:
	  li        r0, 0x3
	  b         .loc_0x1F0

	.loc_0x1EC:
	  li        r0, 0x4

	.loc_0x1F0:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x204
	  lis       r3, 0x8051
	  lfs       f0, 0x48B0(r3)
	  b         .loc_0x208

	.loc_0x204:
	  fmr       f0, f5

	.loc_0x208:
	  rlwinm    r3,r4,24,8,31
	  lis       r0, 0x4330
	  mullw     r3, r3, r3
	  stw       r0, 0x10(r1)
	  lfd       f2, -0x7348(r2)
	  fsubs     f4, f4, f0
	  lfs       f3, -0x7E10(r13)
	  lfs       f5, -0x7380(r2)
	  stw       r3, 0x14(r1)
	  lfs       f0, -0x7350(r2)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f3, f1
	  fdivs     f1, f4, f1
	  fsubs     f1, f5, f1
	  fdivs     f1, f5, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x258
	  fmr       f1, f0
	  b         .loc_0x268

	.loc_0x258:
	  lfs       f0, -0x734C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x268
	  fmr       f1, f0

	.loc_0x268:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B42A8
 * Size:	000074
 */
void JAISound::setDistanceDolbyCommon()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3C(r3)
	  lwz       r3, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  lfs       f1, 0x8(r3)
	  lfs       f2, -0x7E44(r13)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x28

	.loc_0x20:
	  lfs       f1, -0x737C(r2)
	  blr

	.loc_0x28:
	  lfs       f0, -0x737C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48
	  fsubs     f0, f2, f1
	  lfs       f1, -0x7E48(r13)
	  fmuls     f0, f1, f0
	  fdivs     f1, f0, f2
	  blr

	.loc_0x48:
	  lfs       f0, -0x7E40(r13)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x6C
	  fdivs     f0, f1, f0
	  lfs       f2, -0x7E48(r13)
	  lfs       f1, -0x7340(r2)
	  fsubs     f1, f1, f2
	  fmadds    f1, f1, f0, f2
	  blr

	.loc_0x6C:
	  lfs       f1, -0x7340(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B431C
 * Size:	000088
 */
void JAISequence::setSeqInterVolume(unsigned char, float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  rlwinm    r4,r4,4,20,27
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r4, 0x158
	  mr        r4, r5
	  add       r3, r30, r3
	  bl        0x1510
	  cmpwi     r3, 0x1
	  bne-      .loc_0x50
	  rlwinm    r0,r31,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2CC(r30)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2CC(r30)

	.loc_0x50:
	  lwz       r4, 0x308(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x70
	  cmpwi     r3, 0x2
	  beq-      .loc_0x70
	  lwz       r0, 0x8(r4)
	  oris      r0, r0, 0x4
	  stw       r0, 0x8(r4)

	.loc_0x70:
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
 * Address:	800B43A4
 * Size:	000088
 */
void JAISequence::setSeqInterPan(unsigned char, float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,4,20,27
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x298(r3)
	  add       r3, r3, r0
	  bl        0x1488
	  cmpwi     r3, 0x1
	  bne-      .loc_0x50
	  rlwinm    r0,r31,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2D0(r30)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2D0(r30)

	.loc_0x50:
	  lwz       r4, 0x308(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x70
	  cmpwi     r3, 0x2
	  beq-      .loc_0x70
	  lwz       r0, 0x8(r4)
	  oris      r0, r0, 0x8
	  stw       r0, 0x8(r4)

	.loc_0x70:
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
 * Address:	800B442C
 * Size:	000088
 */
void JAISequence::setSeqInterPitch(unsigned char, float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,4,20,27
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x29C(r3)
	  add       r3, r3, r0
	  bl        0x1400
	  cmpwi     r3, 0x1
	  bne-      .loc_0x50
	  rlwinm    r0,r31,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2D4(r30)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2D4(r30)

	.loc_0x50:
	  lwz       r4, 0x308(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x70
	  cmpwi     r3, 0x2
	  beq-      .loc_0x70
	  lwz       r0, 0x8(r4)
	  oris      r0, r0, 0x10
	  stw       r0, 0x8(r4)

	.loc_0x70:
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
 * Address:	........
 * Size:	000088
 */
void JAISequence::setSeqInterFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JAISequence::setSeqInterDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAISequence::setSeqTempoProportion(float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JAISequence::setSeqPortData(unsigned char, unsigned short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAISequence::setWaveReadMode(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackVolume(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackVolumeMulti(unsigned char, unsigned long, float,
                                      unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JAISequence::setTrackMuteSwitch(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JAISequence::setTrackMuteSwitchMulti(unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B44B4
 * Size:	000028
 */
void JAISequence::setTrackInterruptSwitch(unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x300(r3)
	  rlwinm    r0,r4,0,24,31
	  stbx      r5, r6, r0
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0x8(r3)
	  oris      r0, r0, 0x80
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackPan(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackPanMulti(unsigned char, unsigned long, float,
                                   unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackPitch(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackPitchMulti(unsigned char, unsigned long, float,
                                     unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B44DC
 * Size:	0000B0
 */
void JAISequence::setTrackFxmix(unsigned char, float, unsigned long)
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
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  blt-      .loc_0x44
	  lwz       r4, 0x308(r30)
	  rlwinm    r0,r31,0,24,31
	  li        r3, 0x1
	  lwz       r4, 0x4(r4)
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  beq-      .loc_0x98

	.loc_0x44:
	  lwz       r3, 0x2B4(r30)
	  rlwinm    r0,r31,4,20,27
	  mr        r4, r5
	  add       r3, r3, r0
	  bl        0x1328
	  cmpwi     r3, 0x1
	  bne-      .loc_0x78
	  rlwinm    r0,r31,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2EC(r30)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2EC(r30)

	.loc_0x78:
	  lwz       r4, 0x308(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x98
	  cmpwi     r3, 0x2
	  beq-      .loc_0x98
	  lwz       r0, 0x8(r4)
	  ori       r0, r0, 0x800
	  stw       r0, 0x8(r4)

	.loc_0x98:
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
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackFxmixMulti(unsigned char, unsigned long, float,
                                     unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAISequence::setTrackDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JAISequence::setTrackDolbyMulti(unsigned char, unsigned long, float,
                                     unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B458C
 * Size:	0000D0
 */
void JAISequence::setTrackPortData(unsigned char, unsigned char, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r7, 0x308(r3)
	  cmplwi    r7, 0
	  beq-      .loc_0xB0
	  lbz       r0, 0x15(r28)
	  cmplwi    r0, 0x4
	  blt-      .loc_0x5C
	  bl        0xF04
	  mr        r4, r3
	  mr        r5, r31
	  addi      r3, r28, 0x30C
	  bl        -0x12454
	  b         .loc_0x9C

	.loc_0x5C:
	  lwz       r4, 0x8(r7)
	  rlwinm    r3,r29,0,24,31
	  li        r5, 0x1
	  rlwinm    r0,r30,0,24,31
	  ori       r6, r4, 0x1000
	  rlwinm    r4,r29,2,22,29
	  stw       r6, 0x8(r7)
	  slw       r3, r5, r3
	  slw       r0, r5, r0
	  lwz       r5, 0x2F8(r28)
	  or        r3, r5, r3
	  stw       r3, 0x2F8(r28)
	  lwz       r5, 0x2FC(r28)
	  lwzx      r3, r5, r4
	  or        r0, r3, r0
	  stwx      r0, r5, r4

	.loc_0x9C:
	  lwz       r4, 0x2BC(r28)
	  rlwinm    r3,r29,2,22,29
	  rlwinm    r0,r30,1,23,30
	  lwzx      r3, r4, r3
	  sthx      r31, r3, r0

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
 * Size:	000114
 */
void JAISe::setSeInterRandomPara(float*, unsigned long, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B465C
 * Size:	000158
 */
void JAISe::setSeInterVolume(unsigned char, float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  rlwinm.   r6,r6,0,24,31
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  beq-      .loc_0x118
	  lis       r3, 0x19
	  lwz       r4, -0x7478(r13)
	  addi      r0, r3, 0x660D
	  lis       r5, 0x204
	  mullw     r3, r4, r0
	  lfs       f0, -0x7380(r2)
	  addi      r4, r5, 0x811
	  lfs       f2, -0x733C(r2)
	  addis     r3, r3, 0x3C6F
	  subi      r0, r3, 0xCA1
	  mulli     r3, r6, 0x3E8
	  stw       r0, -0x7478(r13)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  mulhwu    r4, r4, r3
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f1, f0
	  sub       r0, r3, r4
	  rlwinm    r0,r0,31,1,31
	  fmuls     f1, f2, f0
	  add       r0, r0, r4
	  rlwinm    r28,r0,26,6,31
	  bl        0xD458
	  rlwinm    r5,r28,1,0,30
	  lis       r0, 0x4330
	  divwu     r4, r3, r5
	  stw       r0, 0x10(r1)
	  lfd       f4, -0x7348(r2)
	  stw       r28, 0x1C(r1)
	  lfs       f1, -0x7338(r2)
	  stw       r0, 0x18(r1)
	  mullw     r0, r4, r5
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x7380(r2)
	  fsubs     f2, f2, f4
	  sub       r3, r3, r0
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)
	  lfd       f3, 0x10(r1)
	  fsubs     f3, f3, f4
	  fsubs     f2, f3, f2
	  fdivs     f2, f2, f1
	  fadds     f1, f31, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xFC
	  fmr       f31, f0
	  b         .loc_0x118

	.loc_0xFC:
	  lfs       f1, -0x737C(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x114
	  fmr       f31, f1
	  b         .loc_0x118

	.loc_0x114:
	  fadds     f31, f31, f2

	.loc_0x118:
	  rlwinm    r3,r30,4,20,27
	  fmr       f1, f31
	  addi      r3, r3, 0x16C
	  mr        r4, r31
	  add       r3, r29, r3
	  bl        0x10D0
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B47B4
 * Size:	000158
 */
void JAISe::setSeInterPan(unsigned char, float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  rlwinm.   r6,r6,0,24,31
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  beq-      .loc_0x118
	  lis       r3, 0x19
	  lwz       r4, -0x7478(r13)
	  addi      r0, r3, 0x660D
	  lis       r5, 0x204
	  mullw     r3, r4, r0
	  lfs       f0, -0x7380(r2)
	  addi      r4, r5, 0x811
	  lfs       f2, -0x733C(r2)
	  addis     r3, r3, 0x3C6F
	  subi      r0, r3, 0xCA1
	  mulli     r3, r6, 0x3E8
	  stw       r0, -0x7478(r13)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  mulhwu    r4, r4, r3
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f1, f0
	  sub       r0, r3, r4
	  rlwinm    r0,r0,31,1,31
	  fmuls     f1, f2, f0
	  add       r0, r0, r4
	  rlwinm    r28,r0,26,6,31
	  bl        0xD300
	  rlwinm    r5,r28,1,0,30
	  lis       r0, 0x4330
	  divwu     r4, r3, r5
	  stw       r0, 0x10(r1)
	  lfd       f4, -0x7348(r2)
	  stw       r28, 0x1C(r1)
	  lfs       f1, -0x7338(r2)
	  stw       r0, 0x18(r1)
	  mullw     r0, r4, r5
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x7380(r2)
	  fsubs     f2, f2, f4
	  sub       r3, r3, r0
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)
	  lfd       f3, 0x10(r1)
	  fsubs     f3, f3, f4
	  fsubs     f2, f3, f2
	  fdivs     f2, f2, f1
	  fadds     f1, f31, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xFC
	  fmr       f31, f0
	  b         .loc_0x118

	.loc_0xFC:
	  lfs       f1, -0x737C(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x114
	  fmr       f31, f1
	  b         .loc_0x118

	.loc_0x114:
	  fadds     f31, f31, f2

	.loc_0x118:
	  rlwinm    r3,r30,4,20,27
	  fmr       f1, f31
	  addi      r3, r3, 0x1EC
	  mr        r4, r31
	  add       r3, r29, r3
	  bl        0xF78
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void JAISe::setSeInterPitch(unsigned char, float, unsigned long, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JAISe::setSeInterFxmix(unsigned char, float, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JAISe::setSeInterFir(unsigned char, unsigned char, unsigned long,
                          unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B490C
 * Size:	000158
 */
void JAISe::setSeInterDolby(unsigned char, float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  rlwinm.   r6,r6,0,24,31
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  beq-      .loc_0x118
	  lis       r3, 0x19
	  lwz       r4, -0x7478(r13)
	  addi      r0, r3, 0x660D
	  lis       r5, 0x204
	  mullw     r3, r4, r0
	  lfs       f0, -0x7380(r2)
	  addi      r4, r5, 0x811
	  lfs       f2, -0x733C(r2)
	  addis     r3, r3, 0x3C6F
	  subi      r0, r3, 0xCA1
	  mulli     r3, r6, 0x3E8
	  stw       r0, -0x7478(r13)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  mulhwu    r4, r4, r3
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f1, f0
	  sub       r0, r3, r4
	  rlwinm    r0,r0,31,1,31
	  fmuls     f1, f2, f0
	  add       r0, r0, r4
	  rlwinm    r28,r0,26,6,31
	  bl        0xD1A8
	  rlwinm    r5,r28,1,0,30
	  lis       r0, 0x4330
	  divwu     r4, r3, r5
	  stw       r0, 0x10(r1)
	  lfd       f4, -0x7348(r2)
	  stw       r28, 0x1C(r1)
	  lfs       f1, -0x7338(r2)
	  stw       r0, 0x18(r1)
	  mullw     r0, r4, r5
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x7380(r2)
	  fsubs     f2, f2, f4
	  sub       r3, r3, r0
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)
	  lfd       f3, 0x10(r1)
	  fsubs     f3, f3, f4
	  fsubs     f2, f3, f2
	  fdivs     f2, f2, f1
	  fadds     f1, f31, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xFC
	  fmr       f31, f0
	  b         .loc_0x118

	.loc_0xFC:
	  lfs       f1, -0x737C(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x114
	  fmr       f31, f1
	  b         .loc_0x118

	.loc_0x114:
	  fadds     f31, f31, f2

	.loc_0x118:
	  rlwinm    r3,r30,4,20,27
	  fmr       f1, f31
	  addi      r3, r3, 0x3EC
	  mr        r4, r31
	  add       r3, r29, r3
	  bl        0xE20
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JAISe::setSePortData(unsigned char, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JAISe::getSePortData(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B4A64
 * Size:	00012C
 */
void JAISe::setSeDistanceParameters()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x15(r3)
	  lbz       r31, 0x19(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x2C
	  li        r31, 0

	.loc_0x2C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xDC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xE0(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xF0(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r30)
	  lwz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,21,21
	  bne-      .loc_0xFC
	  lwz       r3, -0x7498(r13)
	  lwz       r4, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x10(r30)
	  li        r5, 0x3
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xEC(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	800B4B90
 * Size:	000030
 */
void JAISe::setFxmix(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r5,r5,4,20,27
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  addi      r3, r5, 0x2EC
	  add       r3, r0, r3
	  bl        0xCAC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B4BC0
 * Size:	000070
 */
void JAISe::setSeDistanceVolume(unsigned char)
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
	  lwz       r4, 0x44(r3)
	  lwz       r4, 0x0(r4)
	  rlwinm.   r0,r4,0,30,30
	  bne-      .loc_0x48
	  lwz       r12, 0x10(r3)
	  rlwinm    r4,r4,16,29,31
	  lfs       f1, -0x7E50(r13)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4C

	.loc_0x48:
	  lfs       f1, -0x7380(r2)

	.loc_0x4C:
	  addi      r3, r30, 0x1AC
	  rlwinm    r4,r31,0,24,31
	  bl        0xC44
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
 * Address:	800B4C30
 * Size:	000074
 */
void JAISe::setSeDistancePan(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x7378(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x1A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x50

	.loc_0x40:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lfs       f1, 0x38(r3)

	.loc_0x50:
	  addi      r3, r30, 0x22C
	  rlwinm    r4,r31,0,24,31
	  bl        0xBD0
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
 * Address:	800B4CA4
 * Size:	000138
 */
void JAISe::setSeDistancePitch(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, -0x7380(r2)
	  stw       r0, 0x24(r1)
	  lwz       r5, 0x44(r3)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x90
	  lis       r5, 0x19
	  lwz       r6, -0x7478(r13)
	  addi      r5, r5, 0x660D
	  lis       r0, 0x4330
	  mullw     r5, r6, r5
	  stw       r0, 0x18(r1)
	  lfs       f4, -0x7334(r2)
	  lfd       f3, -0x7370(r2)
	  lfs       f0, -0x7330(r2)
	  addis     r5, r5, 0x3C6F
	  subi      r5, r5, 0xCA1
	  rlwinm    r0,r5,23,9,31
	  stw       r5, -0x7478(r13)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f2, f2, f1
	  fmuls     f2, f4, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,0,28,31
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f2, 0x18(r1)
	  fsubs     f2, f2, f3
	  fdivs     f0, f2, f0
	  fsubs     f1, f1, f0

	.loc_0x90:
	  lwz       r5, 0x44(r3)
	  lwz       r6, 0x0(r5)
	  rlwinm.   r0,r6,0,17,17
	  beq-      .loc_0xEC
	  rlwinm.   r0,r6,0,30,30
	  bne-      .loc_0xEC
	  rlwinm.   r0,r6,0,22,23
	  bne-      .loc_0xEC
	  lwz       r0, -0x7E2C(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xEC
	  lwz       r5, 0x34(r3)
	  lfs       f0, -0x7E50(r13)
	  lfs       f2, 0x18(r5)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE0
	  lfs       f0, -0x7E08(r13)
	  fadds     f1, f1, f0
	  b         .loc_0xEC

	.loc_0xE0:
	  fdivs     f0, f2, f0
	  lfs       f2, -0x7E08(r13)
	  fmadds    f1, f2, f0, f1

	.loc_0xEC:
	  rlwinm.   r0,r6,0,24,25
	  beq-      .loc_0x11C
	  lbz       r5, 0x17(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f3, -0x7348(r2)
	  stw       r5, 0x1C(r1)
	  lfs       f0, -0x7330(r2)
	  lfd       f2, 0x18(r1)
	  fsubs     f2, f2, f3
	  fdivs     f0, f2, f0
	  fadds     f1, f1, f0

	.loc_0x11C:
	  addi      r3, r3, 0x2AC
	  rlwinm    r4,r4,0,24,31
	  bl        0xA90
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B4DDC
 * Size:	000080
 */
void JAISe::setSePositionDopplar()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x15(r3)
	  lwz       r31, -0x7E3C(r13)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x2C
	  li        r31, 0x1

	.loc_0x2C:
	  lwz       r3, 0x44(r30)
	  lwz       r0, 0x0(r3)
	  rlwinm.   r4,r0,0,22,23
	  beq-      .loc_0x68
	  lwz       r0, -0x7E2C(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x68
	  lwz       r12, 0x10(r30)
	  mr        r3, r30
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r30, 0x27C
	  bl        0xA18

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
 * Address:	800B4E5C
 * Size:	0000C8
 */
void JAISe::setSeDistanceFxmix(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r5, 0x44(r3)
	  lhz       r6, -0x7448(r13)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x78
	  lwz       r0, -0x7E2C(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x78
	  lwz       r5, 0x34(r3)
	  lfs       f0, -0x7E50(r13)
	  lfs       f1, 0x18(r5)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x74
	  fdivs     f0, f1, f0
	  lhz       r5, -0x7E9A(r13)
	  lis       r0, 0x4330
	  lfd       f2, -0x7348(r2)
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r6, 0x14(r1)
	  b         .loc_0x78

	.loc_0x74:
	  lhz       r6, -0x7E9A(r13)

	.loc_0x78:
	  rlwinm    r0,r6,0,16,31
	  cmplwi    r0, 0x7F
	  ble-      .loc_0x88
	  li        r6, 0x7F

	.loc_0x88:
	  rlwinm    r5,r6,0,24,31
	  lis       r0, 0x4330
	  stw       r5, 0x14(r1)
	  addi      r3, r3, 0x32C
	  lfd       f2, -0x7348(r2)
	  rlwinm    r4,r4,0,24,31
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bl        0x948
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B4F24
 * Size:	000004
 */
void JAISe::setSeDistanceFir(unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B4F28
 * Size:	0000A4
 */
void JAISe::setSeDistanceDolby(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, -0x737C(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lbz       r0, 0x1A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x50

	.loc_0x40:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lfs       f1, 0x3C(r3)

	.loc_0x50:
	  fctiwz    f0, f1
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  addi      r3, r30, 0x42C
	  lfd       f2, -0x7348(r2)
	  rlwinm    r4,r31,0,24,31
	  stfd      f0, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,0,24,31
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bl        0x8A8
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
 * Address:	........
 * Size:	000008
 */
void JAIStream::setStreamMode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterVolume(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterPan(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterPitch(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B4FCC
 * Size:	00000C
 */
void JAIStream::setStreamPrepareFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x73B8(r13)
	  stb       r4, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B4FD8
 * Size:	000040
 */
void JAIStream::checkStreamReady()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2C
	  bl        0x3EC4
	  cmplwi    r3, 0x1
	  bne-      .loc_0x2C
	  li        r3, 0x1
	  b         .loc_0x30

	.loc_0x2C:
	  li        r3, 0

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5018
 * Size:	0000A0
 */
void JAIStream::setChannelVolume(unsigned char, float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  mr        r30, r4
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  bl        0x3E98
	  fmr       f1, f31
	  lwz       r3, 0x1C8(r29)
	  rlwinm    r0,r30,4,20,27
	  mr        r4, r31
	  add       r3, r3, r0
	  bl        0x7FC
	  cmpwi     r3, 0x1
	  bne-      .loc_0x68
	  rlwinm    r0,r30,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x1B8(r29)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x1B8(r29)

	.loc_0x68:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x80
	  lwz       r3, 0x1B4(r29)
	  lwz       r0, 0x18(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x18(r3)

	.loc_0x80:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B50B8
 * Size:	0000A0
 */
void JAIStream::setChannelPan(unsigned char, float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  mr        r30, r4
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  bl        0x3DF8
	  fmr       f1, f31
	  lwz       r3, 0x1CC(r29)
	  rlwinm    r0,r30,4,20,27
	  mr        r4, r31
	  add       r3, r3, r0
	  bl        0x75C
	  cmpwi     r3, 0x1
	  bne-      .loc_0x68
	  rlwinm    r0,r30,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x1BC(r29)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x1BC(r29)

	.loc_0x68:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x80
	  lwz       r3, 0x1B4(r29)
	  lwz       r0, 0x18(r3)
	  ori       r0, r0, 0x80
	  stw       r0, 0x18(r3)

	.loc_0x80:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIStream::setChannelFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIStream::setChannelDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelVolume(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5158
 * Size:	0001E8
 */
void JAISound::setPauseMode(unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lis       r0, 0xC000
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lwz       r6, 0x20(r3)
	  rlwinm    r4,r6,0,0,1
	  cmpw      r4, r0
	  beq-      .loc_0x10C
	  bge-      .loc_0x1D0
	  lis       r3, 0x8000
	  addi      r0, r3, 0x1
	  cmpw      r4, r0
	  bge-      .loc_0x1D0
	  addic.    r0, r31, 0x48
	  beq-      .loc_0x1D0
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x5C
	  li        r30, 0x4

	.loc_0x5C:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0xB4
	  cmpwi     r0, 0x2
	  beq-      .loc_0xA0
	  bge-      .loc_0x104
	  cmpwi     r0, 0x1
	  bge-      .loc_0x7C
	  b         .loc_0x104

	.loc_0x7C:
	  mr        r3, r31
	  mr        r4, r5
	  lwz       r12, 0x10(r31)
	  li        r5, 0x1
	  li        r6, 0xB
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xA0:
	  addi      r3, r31, 0x30C
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0x12F40
	  b         .loc_0x104

	.loc_0xB4:
	  lbz       r0, 0x2C1(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xF4
	  bge-      .loc_0x104
	  cmpwi     r0, 0x1
	  bge-      .loc_0xD0
	  b         .loc_0x104

	.loc_0xD0:
	  mr        r3, r31
	  lfs       f1, -0x7380(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x1
	  li        r5, 0xB
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xF4:
	  addi      r3, r31, 0x30C
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x12F94

	.loc_0x104:
	  stb       r30, 0x2C1(r31)
	  b         .loc_0x1D0

	.loc_0x10C:
	  addic.    r0, r31, 0x48
	  beq-      .loc_0x1D0
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x184
	  cmpwi     r0, 0x2
	  beq-      .loc_0x174
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0x1
	  bge-      .loc_0x134
	  b         .loc_0x1CC

	.loc_0x134:
	  rlwinm    r4,r5,0,24,31
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r4, 0x1
	  lwz       r12, 0x10(r3)
	  li        r5, 0xB
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x7348(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  fsubs     f1, f1, f2
	  lwz       r12, 0x1C(r12)
	  fdivs     f1, f1, f0
	  mtctr     r12
	  bctrl
	  b         .loc_0x1CC

	.loc_0x174:
	  bl        0x3BE0
	  li        r4, 0x1
	  bl        -0xBF2C
	  b         .loc_0x1CC

	.loc_0x184:
	  lbz       r0, 0x48(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1C0
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0x1
	  bge-      .loc_0x1A0
	  b         .loc_0x1CC

	.loc_0x1A0:
	  lwz       r12, 0x10(r3)
	  li        r4, 0x1
	  lfs       f1, -0x7380(r2)
	  li        r5, 0xB
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1CC

	.loc_0x1C0:
	  bl        0x3B94
	  li        r4, 0
	  bl        -0xBF78

	.loc_0x1CC:
	  stb       r30, 0x48(r31)

	.loc_0x1D0:
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
 * Address:	800B5340
 * Size:	000084
 */
void JAIStream::setVolume(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  rlwinm    r3,r5,4,20,27
	  addi      r3, r3, 0x64
	  add       r3, r30, r3
	  bl        0x4F0
	  cmpwi     r3, 0x1
	  bne-      .loc_0x4C
	  rlwinm    r0,r31,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x50(r30)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x50(r30)

	.loc_0x4C:
	  lwz       r4, 0x1B4(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x2
	  beq-      .loc_0x6C
	  lwz       r0, 0x18(r4)
	  oris      r0, r0, 0x4
	  stw       r0, 0x18(r4)

	.loc_0x6C:
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
 * Address:	800B53C4
 * Size:	0000AC
 */
void JAISequence::setVolumeU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,24,31
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x24(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x7340(r2)
	  stw       r4, 0xC(r1)
	  rlwinm    r4,r6,4,20,27
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  fsubs     f1, f1, f2
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r4, 0x158
	  mr        r4, r5
	  fdivs     f1, f1, f0
	  add       r3, r30, r3
	  bl        0x444
	  cmpwi     r3, 0x1
	  bne-      .loc_0x74
	  rlwinm    r0,r31,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2CC(r30)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2CC(r30)

	.loc_0x74:
	  lwz       r4, 0x308(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x94
	  cmpwi     r3, 0x2
	  beq-      .loc_0x94
	  lwz       r0, 0x8(r4)
	  oris      r0, r0, 0x4
	  stw       r0, 0x8(r4)

	.loc_0x94:
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
 * Address:	800B5470
 * Size:	00000C
 */
void JAISequence::setSeqPrepareFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x308(r3)
	  stb       r4, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B547C
 * Size:	00002C
 */
void JAISequence::checkSeqReady()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x24
	  lwz       r3, 0x2C4(r3)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x24
	  li        r3, 0x1
	  blr

	.loc_0x24:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B54A8
 * Size:	00002C
 */
void JAISequence::getSeqInterVolume(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x24

	.loc_0x14:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x15C(r3)
	  blr

	.loc_0x24:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterPitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JAISequence::getSeqTempoProportion()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqPortData(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JAISequence::getTrackParameterU7(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JAISequence::getTrackParameterF32(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISound::getPointer(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAISequence::getTrackPortData(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JAISe::getSeParametermeterF32(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JAIStream::getStreamInterVolume(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterPitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISound::getActorGroundNumber()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B54D4
 * Size:	00003C
 */
void JAISound::getTrackPortRoute(unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x20(r3)
	  rlwinm.   r0,r0,0,20,20
	  beq-      .loc_0x28
	  rlwinm    r3,r4,28,28,31
	  rlwinm    r0,r4,4,24,27
	  rlwinm    r5,r5,16,8,15
	  addis     r4, r3, 0x2000
	  add       r3, r0, r5
	  add       r3, r4, r3
	  blr

	.loc_0x28:
	  rlwinm    r3,r4,0,28,31
	  rlwinm    r0,r5,16,8,15
	  addis     r3, r3, 0x1000
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISe::getSeInfoPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5510
 * Size:	000088
 */
void JAISound::checkSoundHandle(unsigned long, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,0,1
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r6, 0x20(r3)
	  rlwinm    r4,r6,0,0,1
	  cmplw     r4, r0
	  beq-      .loc_0x40
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x40:
	  lwz       r4, 0x44(r3)
	  lbz       r0, 0x4(r5)
	  lbz       r4, 0x4(r4)
	  cmplw     r4, r0
	  bgt-      .loc_0x6C
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x6C:
	  li        r31, 0x1

	.loc_0x70:
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
 * Address:	800B5598
 * Size:	00004C
 */
void JAISequence::getFadeCounter()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r3, 0x14(r3)
	  bl        -0x1D88
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x30
	  lwz       r3, 0x28(r31)
	  b         .loc_0x38

	.loc_0x30:
	  lwz       r3, 0x1D4(r31)
	  subi      r3, r3, 0x1

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
 * Address:	800B55E4
 * Size:	00000C
 */
void JAISe::getFadeCounter()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1D8(r3)
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B55F0
 * Size:	000024
 */
void JAIStream::getFadeCounter()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x1B4(r3)
	  lwz       r0, 0x18(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x18
	  lwz       r3, 0x28(r3)
	  blr

	.loc_0x18:
	  lwz       r3, 0xE0(r3)
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5614
 * Size:	0000E8
 */
void JAISound::initParameter(void*, JAInter::Actor*, unsigned long,
                             unsigned long, unsigned char, JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r6, 0x20(r3)
	  beq-      .loc_0x64
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x38(r31)
	  lwz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x3C(r31)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0x30(r31)
	  b         .loc_0x58

	.loc_0x48:
	  li        r0, 0
	  stw       r0, 0x3C(r31)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0x30(r31)

	.loc_0x58:
	  lbz       r0, 0x10(r5)
	  stb       r0, 0x1A(r31)
	  b         .loc_0x78

	.loc_0x64:
	  li        r0, 0
	  stw       r0, 0x38(r31)
	  stw       r0, 0x3C(r31)
	  stb       r0, 0x1A(r31)
	  stw       r0, 0x30(r31)

	.loc_0x78:
	  stw       r4, 0x40(r31)
	  li        r0, 0xA
	  stw       r7, 0x28(r31)
	  stb       r8, 0x18(r31)
	  stw       r9, 0x44(r31)
	  stb       r0, 0x16(r31)
	  bl        -0x7B48
	  stb       r3, 0x19(r31)
	  li        r0, 0
	  sth       r0, 0x1C(r31)
	  stw       r0, 0x2C(r31)
	  lwz       r0, 0x3C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  bl        -0x7BF0
	  lfs       f0, -0x7328(r2)
	  lwz       r3, 0x34(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r3)
	  b         .loc_0xD4

	.loc_0xC8:
	  lfs       f0, -0x737C(r2)
	  lwz       r3, 0x34(r31)
	  stfs      f0, 0x18(r3)

	.loc_0xD4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B56FC
 * Size:	000070
 */
void JAInter::LinkSound::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x20
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0xC
	  lwz       r4, -0x7494(r13)
	  bl        -0x917E0
	  mr.       r31, r3
	  beq-      .loc_0x34
	  bl        -0x8EE5C

	.loc_0x34:
	  stw       r31, 0x0(r30)
	  li        r3, 0xC
	  li        r5, 0x20
	  lwz       r4, -0x7494(r13)
	  bl        -0x91800
	  mr.       r31, r3
	  beq-      .loc_0x54
	  bl        -0x8EE7C

	.loc_0x54:
	  stw       r31, 0x4(r30)
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
 * Address:	800B576C
 * Size:	00007C
 */
void JAInter::LinkSound::getSound(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x0(r3)
	  lwz       r31, 0x0(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x5C
	  mr        r4, r31
	  bl        -0x8EB7C
	  lwz       r3, 0x4(r29)
	  mr        r4, r31
	  bl        -0x8EE10
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x10(r3)
	  mr        r30, r3
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	800B57E8
 * Size:	000004
 */
void JAISound::onGet()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B57EC
 * Size:	000068
 */
void JAInter::LinkSound::releaseSound((JAISound*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x3C
	  lwz       r3, 0x4(r30)
	  bl        -0x8EBEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  lwz       r3, 0x0(r30)
	  mr        r4, r31
	  bl        -0x8EE88

	.loc_0x3C:
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	800B5854
 * Size:	000004
 */
void JAISound::onRelease()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::LinkSound::getFreeStartFirstObject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::LinkSound::getUsedEndFirstObject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5858
 * Size:	000098
 */
void JAInter::MoveParaSet::set((float, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x24
	  lfs       f0, 0x4(r3)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x24
	  li        r3, 0x2
	  b         .loc_0x90

	.loc_0x24:
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lfs       f0, 0x0(r3)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x40
	  li        r3, 0x2
	  b         .loc_0x90

	.loc_0x40:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r3)
	  bne-      .loc_0x58
	  stfs      f1, 0x4(r3)
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x58:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x4(r3)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r3)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r3)
	  stw       r4, 0xC(r3)
	  li        r3, 0x1

	.loc_0x90:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B58F0
 * Size:	00004C
 */
void JAInter::MoveParaSet::move(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x14
	  li        r0, 0
	  b         .loc_0x44

	.loc_0x14:
	  subic.    r0, r4, 0x1
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x38
	  lfs       f1, 0x4(r3)
	  li        r0, 0x1
	  lfs       f0, 0x8(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r3)
	  b         .loc_0x44

	.loc_0x38:
	  lfs       f0, 0x0(r3)
	  li        r0, 0
	  stfs      f0, 0x4(r3)

	.loc_0x44:
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B593C
 * Size:	00002C
 */
void JAIStream::getVolume(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x24

	.loc_0x14:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x68(r3)
	  blr

	.loc_0x24:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5968
 * Size:	0000E4
 */
void JAIStream::setPan(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r5,4,20,27
	  lwz       r6, 0x1A8(r3)
	  add       r7, r6, r0
	  lwz       r0, 0xC(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lfs       f0, 0x4(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x30:
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lfs       f0, 0x0(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x4C
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x4C:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r7)
	  bne-      .loc_0x64
	  stfs      f1, 0x4(r7)
	  li        r6, 0
	  b         .loc_0x9C

	.loc_0x64:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r6, 0x1
	  lfs       f3, 0x4(r7)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r7)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  stw       r4, 0xC(r7)

	.loc_0x9C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xBC
	  rlwinm    r0,r5,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x58(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x58(r3)

	.loc_0xBC:
	  lwz       r3, 0x1B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  cmpwi     r6, 0x2
	  beq-      .loc_0xDC
	  lwz       r0, 0x18(r3)
	  oris      r0, r0, 0x8
	  stw       r0, 0x18(r3)

	.loc_0xDC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5A4C
 * Size:	000030
 */
void JAIStream::getPan(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x1A8(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5A7C
 * Size:	0000E4
 */
void JAIStream::setPitch(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r5,4,20,27
	  lwz       r6, 0x1A4(r3)
	  add       r7, r6, r0
	  lwz       r0, 0xC(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lfs       f0, 0x4(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x30:
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lfs       f0, 0x0(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x4C
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x4C:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r7)
	  bne-      .loc_0x64
	  stfs      f1, 0x4(r7)
	  li        r6, 0
	  b         .loc_0x9C

	.loc_0x64:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r6, 0x1
	  lfs       f3, 0x4(r7)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r7)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  stw       r4, 0xC(r7)

	.loc_0x9C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xBC
	  rlwinm    r0,r5,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x54(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x54(r3)

	.loc_0xBC:
	  lwz       r3, 0x1B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  cmpwi     r6, 0x2
	  beq-      .loc_0xDC
	  lwz       r0, 0x18(r3)
	  oris      r0, r0, 0x10
	  stw       r0, 0x18(r3)

	.loc_0xDC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5B60
 * Size:	000030
 */
void JAIStream::getPitch(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x1A4(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5B90
 * Size:	0000E4
 */
void JAIStream::setFxmix(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r5,4,20,27
	  lwz       r6, 0x1AC(r3)
	  add       r7, r6, r0
	  lwz       r0, 0xC(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lfs       f0, 0x4(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x30:
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lfs       f0, 0x0(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x4C
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x4C:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r7)
	  bne-      .loc_0x64
	  stfs      f1, 0x4(r7)
	  li        r6, 0
	  b         .loc_0x9C

	.loc_0x64:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r6, 0x1
	  lfs       f3, 0x4(r7)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r7)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  stw       r4, 0xC(r7)

	.loc_0x9C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xBC
	  rlwinm    r0,r5,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x5C(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x5C(r3)

	.loc_0xBC:
	  lwz       r3, 0x1B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  cmpwi     r6, 0x2
	  beq-      .loc_0xDC
	  lwz       r0, 0x18(r3)
	  oris      r0, r0, 0x20
	  stw       r0, 0x18(r3)

	.loc_0xDC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5C74
 * Size:	000030
 */
void JAIStream::getFxmix(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x1AC(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5CA4
 * Size:	0000E4
 */
void JAIStream::setDolby(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r5,4,20,27
	  lwz       r6, 0x1B0(r3)
	  add       r7, r6, r0
	  lwz       r0, 0xC(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lfs       f0, 0x4(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x30:
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lfs       f0, 0x0(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x4C
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x4C:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r7)
	  bne-      .loc_0x64
	  stfs      f1, 0x4(r7)
	  li        r6, 0
	  b         .loc_0x9C

	.loc_0x64:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r6, 0x1
	  lfs       f3, 0x4(r7)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r7)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  stw       r4, 0xC(r7)

	.loc_0x9C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xBC
	  rlwinm    r0,r5,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x60(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x60(r3)

	.loc_0xBC:
	  lwz       r3, 0x1B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  cmpwi     r6, 0x2
	  beq-      .loc_0xDC
	  lwz       r0, 0x18(r3)
	  oris      r0, r0, 0x40
	  stw       r0, 0x18(r3)

	.loc_0xDC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5D88
 * Size:	000030
 */
void JAIStream::getDolby(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x1B0(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5DB8
 * Size:	000058
 */
void JAIStream::setVolumeU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,24,31
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x14(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x7340(r2)
	  stw       r4, 0xC(r1)
	  mr        r4, r5
	  lwz       r12, 0x10(r3)
	  mr        r5, r6
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x1C(r12)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
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
 * Address:	800B5E10
 * Size:	000040
 */
void JAIStream::getVolumeU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5E50
 * Size:	000058
 */
void JAIStream::setPanU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,24,31
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x14(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x7340(r2)
	  stw       r4, 0xC(r1)
	  mr        r4, r5
	  lwz       r12, 0x10(r3)
	  mr        r5, r6
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x24(r12)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
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
 * Address:	800B5EA8
 * Size:	000040
 */
void JAIStream::getPanU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5EE8
 * Size:	000058
 */
void JAIStream::setFxmixU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,24,31
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x14(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x7340(r2)
	  stw       r4, 0xC(r1)
	  mr        r4, r5
	  lwz       r12, 0x10(r3)
	  mr        r5, r6
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x34(r12)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
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
 * Address:	800B5F40
 * Size:	000040
 */
void JAIStream::getFxmixU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B5F80
 * Size:	000058
 */
void JAIStream::setDolbyU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,24,31
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x14(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x7340(r2)
	  stw       r4, 0xC(r1)
	  mr        r4, r5
	  lwz       r12, 0x10(r3)
	  mr        r5, r6
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x3C(r12)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
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
 * Address:	800B5FD8
 * Size:	000040
 */
void JAIStream::getDolbyU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6018
 * Size:	000004
 */
void JAIStream::setPortData(unsigned char, unsigned short)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B601C
 * Size:	00000C
 */
void JAIStream::getPortData(unsigned char)
{
	/*
	.loc_0x0:
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6028
 * Size:	000004
 */
void JAISound::setTempoProportion(float, unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B602C
 * Size:	000008
 */
void JAISound::getTempoProportion()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7380(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6034
 * Size:	000030
 */
void JAISound::setDirectVolume(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	800B6064
 * Size:	000030
 */
void JAISound::setDirectPan(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	800B6094
 * Size:	000030
 */
void JAISound::setDirectPitch(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x2C(r12)
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
 * Address:	800B60C4
 * Size:	000030
 */
void JAISound::setDirectFxmix(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x34(r12)
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
 * Address:	800B60F4
 * Size:	000030
 */
void JAISound::setDirectDolby(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x3C(r12)
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
 * Address:	800B6124
 * Size:	000030
 */
void JAISound::setDemoVolume(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	800B6154
 * Size:	000030
 */
void JAISound::setDemoPan(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	800B6184
 * Size:	000030
 */
void JAISound::setDemoPitch(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x2C(r12)
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
 * Address:	800B61B4
 * Size:	000030
 */
void JAISound::setDemoFxmix(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x34(r12)
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
 * Address:	800B61E4
 * Size:	000030
 */
void JAISound::setDemoDolby(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x3C(r12)
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
 * Address:	800B6214
 * Size:	000030
 */
void JAISound::setDemoVolumeU7(unsigned char, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x4C(r12)
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
 * Address:	800B6244
 * Size:	000030
 */
void JAISound::setDemoPanU7(unsigned char, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x54(r12)
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
 * Address:	800B6274
 * Size:	000030
 */
void JAISound::setDemoFxmixU7(unsigned char, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x5C(r12)
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
 * Address:	800B62A4
 * Size:	000030
 */
void JAISound::setDemoDolbyU7(unsigned char, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	800B62D4
 * Size:	000008
 */
void JAISound::setDistanceParameterMoveTime(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0x19(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B62DC
 * Size:	000008
 */
void JAISound::setAdjustPriority(short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B62E4
 * Size:	000010
 */
void JAISe::getVolume(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x170(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B62F4
 * Size:	000090
 */
void JAISe::setPan(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r6, r3, r0
	  lwz       r5, 0x1F8(r6)
	  cmplwi    r5, 0
	  bne-      .loc_0x24
	  lfs       f0, 0x1F0(r6)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x88

	.loc_0x24:
	  cmplwi    r5, 0
	  beq-      .loc_0x3C
	  add       r5, r3, r0
	  lfs       f0, 0x1EC(r5)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x88

	.loc_0x3C:
	  add       r5, r3, r0
	  cmplwi    r4, 0
	  stfs      f1, 0x1EC(r5)
	  bne-      .loc_0x54
	  stfs      f1, 0x1F0(r5)
	  b         .loc_0x88

	.loc_0x54:
	  addi      r3, r4, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x1F0(r5)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x1EC(r5)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x1F4(r5)
	  stw       r3, 0x1F8(r6)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6384
 * Size:	000010
 */
void JAISe::getPan(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x1F0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6394
 * Size:	000090
 */
void JAISe::setPitch(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r6, r3, r0
	  lwz       r5, 0x278(r6)
	  cmplwi    r5, 0
	  bne-      .loc_0x24
	  lfs       f0, 0x270(r6)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x88

	.loc_0x24:
	  cmplwi    r5, 0
	  beq-      .loc_0x3C
	  add       r5, r3, r0
	  lfs       f0, 0x26C(r5)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x88

	.loc_0x3C:
	  add       r5, r3, r0
	  cmplwi    r4, 0
	  stfs      f1, 0x26C(r5)
	  bne-      .loc_0x54
	  stfs      f1, 0x270(r5)
	  b         .loc_0x88

	.loc_0x54:
	  addi      r3, r4, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x270(r5)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x26C(r5)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x274(r5)
	  stw       r3, 0x278(r6)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6424
 * Size:	000010
 */
void JAISe::getPitch(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x270(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6434
 * Size:	000010
 */
void JAISe::getFxmix(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x2F0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6444
 * Size:	000090
 */
void JAISe::setDolby(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r6, r3, r0
	  lwz       r5, 0x3F8(r6)
	  cmplwi    r5, 0
	  bne-      .loc_0x24
	  lfs       f0, 0x3F0(r6)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x88

	.loc_0x24:
	  cmplwi    r5, 0
	  beq-      .loc_0x3C
	  add       r5, r3, r0
	  lfs       f0, 0x3EC(r5)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x88

	.loc_0x3C:
	  add       r5, r3, r0
	  cmplwi    r4, 0
	  stfs      f1, 0x3EC(r5)
	  bne-      .loc_0x54
	  stfs      f1, 0x3F0(r5)
	  b         .loc_0x88

	.loc_0x54:
	  addi      r3, r4, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x3F0(r5)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x3EC(r5)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x3F4(r5)
	  stw       r3, 0x3F8(r6)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B64D4
 * Size:	000010
 */
void JAISe::getDolby(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x3F0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B64E4
 * Size:	0000B4
 */
void JAISe::setVolumeU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r4,r4,0,24,31
	  lis       r0, 0x4330
	  rlwinm    r6,r6,4,20,27
	  stw       r4, 0xC(r1)
	  add       r7, r3, r6
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x178(r7)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  cmplwi    r0, 0
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bne-      .loc_0x48
	  lfs       f0, 0x170(r7)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x48:
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  add       r4, r3, r6
	  lfs       f0, 0x16C(r4)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x60:
	  add       r4, r3, r6
	  cmplwi    r5, 0
	  stfs      f1, 0x16C(r4)
	  bne-      .loc_0x78
	  stfs      f1, 0x170(r4)
	  b         .loc_0xAC

	.loc_0x78:
	  addi      r3, r5, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x170(r4)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x16C(r4)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x174(r4)
	  stw       r3, 0x178(r7)

	.loc_0xAC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6598
 * Size:	00002C
 */
void JAISe::getVolumeU7(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r3, r3, r0
	  lfs       f1, -0x7340(r2)
	  lfs       f0, 0x170(r3)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B65C4
 * Size:	0000B4
 */
void JAISe::setPanU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r4,r4,0,24,31
	  lis       r0, 0x4330
	  rlwinm    r6,r6,4,20,27
	  stw       r4, 0xC(r1)
	  add       r7, r3, r6
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x1F8(r7)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  cmplwi    r0, 0
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bne-      .loc_0x48
	  lfs       f0, 0x1F0(r7)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x48:
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  add       r4, r3, r6
	  lfs       f0, 0x1EC(r4)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x60:
	  add       r4, r3, r6
	  cmplwi    r5, 0
	  stfs      f1, 0x1EC(r4)
	  bne-      .loc_0x78
	  stfs      f1, 0x1F0(r4)
	  b         .loc_0xAC

	.loc_0x78:
	  addi      r3, r5, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x1F0(r4)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x1EC(r4)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x1F4(r4)
	  stw       r3, 0x1F8(r7)

	.loc_0xAC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6678
 * Size:	00002C
 */
void JAISe::getPanU7(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r3, r3, r0
	  lfs       f1, -0x7340(r2)
	  lfs       f0, 0x1F0(r3)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B66A4
 * Size:	0000B4
 */
void JAISe::setFxmixU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r4,r4,0,24,31
	  lis       r0, 0x4330
	  rlwinm    r6,r6,4,20,27
	  stw       r4, 0xC(r1)
	  add       r7, r3, r6
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x2F8(r7)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  cmplwi    r0, 0
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bne-      .loc_0x48
	  lfs       f0, 0x2F0(r7)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x48:
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  add       r4, r3, r6
	  lfs       f0, 0x2EC(r4)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x60:
	  add       r4, r3, r6
	  cmplwi    r5, 0
	  stfs      f1, 0x2EC(r4)
	  bne-      .loc_0x78
	  stfs      f1, 0x2F0(r4)
	  b         .loc_0xAC

	.loc_0x78:
	  addi      r3, r5, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x2F0(r4)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x2EC(r4)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x2F4(r4)
	  stw       r3, 0x2F8(r7)

	.loc_0xAC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6758
 * Size:	00002C
 */
void JAISe::getFxmixU7(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r3, r3, r0
	  lfs       f1, -0x7340(r2)
	  lfs       f0, 0x2F0(r3)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6784
 * Size:	0000B4
 */
void JAISe::setDolbyU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r4,r4,0,24,31
	  lis       r0, 0x4330
	  rlwinm    r6,r6,4,20,27
	  stw       r4, 0xC(r1)
	  add       r7, r3, r6
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x3F8(r7)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  cmplwi    r0, 0
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bne-      .loc_0x48
	  lfs       f0, 0x3F0(r7)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x48:
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  add       r4, r3, r6
	  lfs       f0, 0x3EC(r4)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xAC

	.loc_0x60:
	  add       r4, r3, r6
	  cmplwi    r5, 0
	  stfs      f1, 0x3EC(r4)
	  bne-      .loc_0x78
	  stfs      f1, 0x3F0(r4)
	  b         .loc_0xAC

	.loc_0x78:
	  addi      r3, r5, 0x1
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f3, 0x3F0(r4)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x3EC(r4)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x3F4(r4)
	  stw       r3, 0x3F8(r7)

	.loc_0xAC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6838
 * Size:	00002C
 */
void JAISe::getDolbyU7(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,4,20,27
	  stwu      r1, -0x10(r1)
	  add       r3, r3, r0
	  lfs       f1, -0x7340(r2)
	  lfs       f0, 0x3F0(r3)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6864
 * Size:	000130
 */
void JAISe::setPortData(unsigned char, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x58
	  rlwinm    r0,r28,1,23,30
	  rlwinm    r5,r28,0,24,31
	  add       r4, r3, r0
	  sth       r29, 0x48(r4)
	  li        r0, 0x1
	  slw       r0, r0, r5
	  lhz       r4, 0x68(r3)
	  or        r0, r4, r0
	  sth       r0, 0x68(r3)
	  b         .loc_0x110

	.loc_0x58:
	  lwz       r30, -0x7420(r13)
	  lbz       r31, 0x14(r3)
	  lwz       r7, 0x308(r30)
	  cmplwi    r7, 0
	  beq-      .loc_0x110
	  lbz       r0, 0x15(r30)
	  cmplwi    r0, 0x4
	  blt-      .loc_0xC0
	  lwz       r0, 0x20(r30)
	  addi      r3, r30, 0x30C
	  rlwinm.   r0,r0,0,20,20
	  beq-      .loc_0xA4
	  rlwinm    r4,r31,28,28,31
	  rlwinm    r6,r28,16,8,15
	  rlwinm    r0,r31,4,24,27
	  addis     r5, r4, 0x2000
	  add       r4, r0, r6
	  add       r4, r5, r4
	  b         .loc_0xB4

	.loc_0xA4:
	  rlwinm    r4,r31,0,28,31
	  rlwinm    r0,r28,16,8,15
	  addis     r4, r4, 0x1000
	  add       r4, r4, r0

	.loc_0xB4:
	  mr        r5, r29
	  bl        -0x14790
	  b         .loc_0xFC

	.loc_0xC0:
	  lwz       r3, 0x8(r7)
	  li        r5, 0x1
	  rlwinm    r0,r28,0,24,31
	  rlwinm    r4,r31,2,22,29
	  ori       r6, r3, 0x1000
	  slw       r3, r5, r31
	  stw       r6, 0x8(r7)
	  slw       r0, r5, r0
	  lwz       r5, 0x2F8(r30)
	  or        r3, r5, r3
	  stw       r3, 0x2F8(r30)
	  lwz       r5, 0x2FC(r30)
	  lwzx      r3, r5, r4
	  or        r0, r3, r0
	  stwx      r0, r5, r4

	.loc_0xFC:
	  lwz       r4, 0x2BC(r30)
	  rlwinm    r3,r31,2,22,29
	  rlwinm    r0,r28,1,23,30
	  lwzx      r3, r4, r3
	  sthx      r29, r3, r0

	.loc_0x110:
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
 * Address:	800B6994
 * Size:	0000AC
 */
void JAISe::getPortData(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x20(r3)
	  rlwinm.   r0,r0,0,0,1
	  bne-      .loc_0x98
	  lbz       r0, -0x73DC(r13)
	  lbz       r6, 0x14(r3)
	  extsb.    r0, r0
	  lwz       r5, -0x7420(r13)
	  bne-      .loc_0x40
	  lis       r3, 0x1
	  li        r0, 0x1
	  subi      r3, r3, 0x1
	  stb       r0, -0x73DC(r13)
	  sth       r3, -0x73DE(r13)

	.loc_0x40:
	  lbz       r0, 0x15(r5)
	  cmplwi    r0, 0x4
	  blt-      .loc_0x90
	  lwz       r0, 0x20(r5)
	  addi      r3, r5, 0x30C
	  rlwinm.   r0,r0,0,20,20
	  beq-      .loc_0x78
	  rlwinm    r5,r6,28,28,31
	  rlwinm    r4,r4,16,8,15
	  rlwinm    r0,r6,4,24,27
	  addis     r5, r5, 0x2000
	  add       r4, r0, r4
	  add       r4, r5, r4
	  b         .loc_0x88

	.loc_0x78:
	  rlwinm    r5,r6,0,28,31
	  rlwinm    r0,r4,16,8,15
	  addis     r4, r5, 0x1000
	  add       r4, r4, r0

	.loc_0x88:
	  subi      r5, r13, 0x73DE
	  bl        -0x147E0

	.loc_0x90:
	  lhz       r3, -0x73DE(r13)
	  b         .loc_0x9C

	.loc_0x98:
	  li        r3, 0

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6A40
 * Size:	000030
 */
void JAISequence::getPan(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x298(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6A70
 * Size:	000030
 */
void JAISequence::getPitch(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x29C(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6AA0
 * Size:	0000E4
 */
void JAISequence::setFxmix(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r5,4,20,27
	  lwz       r6, 0x2A0(r3)
	  add       r7, r6, r0
	  lwz       r0, 0xC(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lfs       f0, 0x4(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x30:
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lfs       f0, 0x0(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x4C
	  li        r6, 0x2
	  b         .loc_0x9C

	.loc_0x4C:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r7)
	  bne-      .loc_0x64
	  stfs      f1, 0x4(r7)
	  li        r6, 0
	  b         .loc_0x9C

	.loc_0x64:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r6, 0x1
	  lfs       f3, 0x4(r7)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r7)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  stw       r4, 0xC(r7)

	.loc_0x9C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xBC
	  rlwinm    r0,r5,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2D8(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2D8(r3)

	.loc_0xBC:
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  cmpwi     r6, 0x2
	  beq-      .loc_0xDC
	  lwz       r0, 0x8(r3)
	  oris      r0, r0, 0x20
	  stw       r0, 0x8(r3)

	.loc_0xDC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6B84
 * Size:	000030
 */
void JAISequence::getFxmix(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x2A0(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6BB4
 * Size:	000110
 */
void JAISequence::setDolby(float, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lwz       r6, -0x7498(r13)
	  lbz       r0, 0xD(r6)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x30
	  lwz       r6, 0x2A4(r3)
	  rlwinm    r0,r5,4,20,27
	  lfs       f1, -0x737C(r2)
	  add       r6, r6, r0
	  lfs       f0, 0x4(r6)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x108

	.loc_0x30:
	  lwz       r6, 0x2A4(r3)
	  rlwinm    r0,r5,4,20,27
	  add       r7, r6, r0
	  lwz       r0, 0xC(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lfs       f0, 0x4(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x5C
	  li        r6, 0x2
	  b         .loc_0xC8

	.loc_0x5C:
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  lfs       f0, 0x0(r7)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x78
	  li        r6, 0x2
	  b         .loc_0xC8

	.loc_0x78:
	  cmplwi    r4, 0
	  stfs      f1, 0x0(r7)
	  bne-      .loc_0x90
	  stfs      f1, 0x4(r7)
	  li        r6, 0
	  b         .loc_0xC8

	.loc_0x90:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r6, 0x1
	  lfs       f3, 0x4(r7)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r7)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  stw       r4, 0xC(r7)

	.loc_0xC8:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xE8
	  rlwinm    r0,r5,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2DC(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2DC(r3)

	.loc_0xE8:
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  cmpwi     r6, 0x2
	  beq-      .loc_0x108
	  lwz       r0, 0x8(r3)
	  oris      r0, r0, 0x40
	  stw       r0, 0x8(r3)

	.loc_0x108:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6CC4
 * Size:	000030
 */
void JAISequence::getDolby(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x14:
	  lwz       r3, 0x2A4(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  blr

	.loc_0x28:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6CF4
 * Size:	000098
 */
void JAISequence::setTempoProportion(float, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lwz       r0, 0x54(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C
	  lfs       f0, 0x4C(r3)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x78

	.loc_0x1C:
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lfs       f0, 0x48(r3)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x78

	.loc_0x30:
	  cmplwi    r4, 0
	  stfs      f1, 0x48(r3)
	  bne-      .loc_0x44
	  stfs      f1, 0x4C(r3)
	  b         .loc_0x78

	.loc_0x44:
	  addi      r4, r4, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x4C(r3)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x48(r3)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x50(r3)
	  stw       r4, 0x54(r3)

	.loc_0x78:
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lwz       r0, 0x8(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x8(r3)

	.loc_0x90:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6D8C
 * Size:	000024
 */
void JAISequence::getTempoProportion()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x14
	  cmplwi    r0, 0x5
	  bne-      .loc_0x1C

	.loc_0x14:
	  lfs       f1, 0x4C(r3)
	  blr

	.loc_0x1C:
	  lfs       f1, -0x732C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6DB0
 * Size:	000048
 */
void JAISequence::getVolumeU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x18
	  cmplwi    r0, 0x5
	  bne-      .loc_0x28

	.loc_0x18:
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x15C(r3)
	  b         .loc_0x2C

	.loc_0x28:
	  lfs       f1, -0x732C(r2)

	.loc_0x2C:
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6DF8
 * Size:	000148
 */
void JAISequence::setPanU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,4,20,27
	  lwz       r7, 0x298(r3)
	  add       r8, r7, r0
	  lwz       r9, 0xC(r8)
	  cmplwi    r9, 0
	  bne-      .loc_0x54
	  rlwinm    r7,r4,0,24,31
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f3, 0x4(r8)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpu     cr0, f3, f0
	  bne-      .loc_0x54
	  li        r7, 0x2
	  b         .loc_0x100

	.loc_0x54:
	  cmplwi    r9, 0
	  beq-      .loc_0x94
	  rlwinm    r7,r4,0,24,31
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f3, 0x0(r8)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpu     cr0, f3, f0
	  bne-      .loc_0x94
	  li        r7, 0x2
	  b         .loc_0x100

	.loc_0x94:
	  rlwinm    r0,r4,0,24,31
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  cmplwi    r5, 0
	  lfd       f3, -0x7348(r2)
	  stw       r4, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f3
	  fdivs     f0, f1, f0
	  stfs      f0, 0x0(r8)
	  bne-      .loc_0xD0
	  stfs      f0, 0x4(r8)
	  li        r7, 0
	  b         .loc_0x100

	.loc_0xD0:
	  addi      r0, r5, 0x1
	  stw       r4, 0x8(r1)
	  lfs       f2, 0x4(r8)
	  li        r7, 0x1
	  stw       r0, 0xC(r1)
	  lfs       f1, 0x0(r8)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f2, f1
	  fsubs     f0, f0, f3
	  fdivs     f0, f1, f0
	  stfs      f0, 0x8(r8)
	  stw       r0, 0xC(r8)

	.loc_0x100:
	  cmpwi     r7, 0x1
	  bne-      .loc_0x120
	  rlwinm    r0,r6,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2D0(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2D0(r3)

	.loc_0x120:
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x140
	  cmpwi     r7, 0x2
	  beq-      .loc_0x140
	  lwz       r0, 0x8(r3)
	  oris      r0, r0, 0x8
	  stw       r0, 0x8(r3)

	.loc_0x140:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6F40
 * Size:	00004C
 */
void JAISequence::getPanU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x18
	  cmplwi    r0, 0x5
	  bne-      .loc_0x2C

	.loc_0x18:
	  lwz       r3, 0x298(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  b         .loc_0x30

	.loc_0x2C:
	  lfs       f1, -0x732C(r2)

	.loc_0x30:
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B6F8C
 * Size:	000148
 */
void JAISequence::setFxmixU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,4,20,27
	  lwz       r7, 0x2A0(r3)
	  add       r8, r7, r0
	  lwz       r9, 0xC(r8)
	  cmplwi    r9, 0
	  bne-      .loc_0x54
	  rlwinm    r7,r4,0,24,31
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f3, 0x4(r8)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpu     cr0, f3, f0
	  bne-      .loc_0x54
	  li        r7, 0x2
	  b         .loc_0x100

	.loc_0x54:
	  cmplwi    r9, 0
	  beq-      .loc_0x94
	  rlwinm    r7,r4,0,24,31
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f2, -0x7348(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f3, 0x0(r8)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpu     cr0, f3, f0
	  bne-      .loc_0x94
	  li        r7, 0x2
	  b         .loc_0x100

	.loc_0x94:
	  rlwinm    r0,r4,0,24,31
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  cmplwi    r5, 0
	  lfd       f3, -0x7348(r2)
	  stw       r4, 0x8(r1)
	  lfs       f0, -0x7340(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f3
	  fdivs     f0, f1, f0
	  stfs      f0, 0x0(r8)
	  bne-      .loc_0xD0
	  stfs      f0, 0x4(r8)
	  li        r7, 0
	  b         .loc_0x100

	.loc_0xD0:
	  addi      r0, r5, 0x1
	  stw       r4, 0x8(r1)
	  lfs       f2, 0x4(r8)
	  li        r7, 0x1
	  stw       r0, 0xC(r1)
	  lfs       f1, 0x0(r8)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f2, f1
	  fsubs     f0, f0, f3
	  fdivs     f0, f1, f0
	  stfs      f0, 0x8(r8)
	  stw       r0, 0xC(r8)

	.loc_0x100:
	  cmpwi     r7, 0x1
	  bne-      .loc_0x120
	  rlwinm    r0,r6,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2D8(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2D8(r3)

	.loc_0x120:
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x140
	  cmpwi     r7, 0x2
	  beq-      .loc_0x140
	  lwz       r0, 0x8(r3)
	  oris      r0, r0, 0x20
	  stw       r0, 0x8(r3)

	.loc_0x140:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B70D4
 * Size:	00004C
 */
void JAISequence::getFxmixU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x18
	  cmplwi    r0, 0x5
	  bne-      .loc_0x2C

	.loc_0x18:
	  lwz       r3, 0x2A0(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  b         .loc_0x30

	.loc_0x2C:
	  lfs       f1, -0x732C(r2)

	.loc_0x30:
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B7120
 * Size:	000134
 */
void JAISequence::setDolbyU7(unsigned char, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r4,r4,0,24,31
	  lis       r0, 0x4330
	  lfd       f2, -0x7348(r2)
	  stw       r4, 0xC(r1)
	  lfs       f0, -0x7340(r2)
	  stw       r0, 0x8(r1)
	  lwz       r4, -0x7498(r13)
	  lfd       f1, 0x8(r1)
	  lbz       r0, 0xD(r4)
	  fsubs     f1, f1, f2
	  cmplwi    r0, 0x2
	  fdivs     f1, f1, f0
	  beq-      .loc_0x54
	  lwz       r4, 0x2A4(r3)
	  rlwinm    r0,r6,4,20,27
	  lfs       f1, -0x737C(r2)
	  add       r4, r4, r0
	  lfs       f0, 0x4(r4)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x12C

	.loc_0x54:
	  lwz       r4, 0x2A4(r3)
	  rlwinm    r0,r6,4,20,27
	  add       r8, r4, r0
	  lwz       r0, 0xC(r8)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lfs       f0, 0x4(r8)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x80
	  li        r7, 0x2
	  b         .loc_0xEC

	.loc_0x80:
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lfs       f0, 0x0(r8)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x9C
	  li        r7, 0x2
	  b         .loc_0xEC

	.loc_0x9C:
	  cmplwi    r5, 0
	  stfs      f1, 0x0(r8)
	  bne-      .loc_0xB4
	  stfs      f1, 0x4(r8)
	  li        r7, 0
	  b         .loc_0xEC

	.loc_0xB4:
	  addi      r4, r5, 0x1
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  li        r7, 0x1
	  lfs       f3, 0x4(r8)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x0(r8)
	  lfd       f1, -0x7348(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r8)
	  stw       r4, 0xC(r8)

	.loc_0xEC:
	  cmpwi     r7, 0x1
	  bne-      .loc_0x10C
	  rlwinm    r0,r6,0,24,31
	  li        r4, 0x1
	  lwz       r5, 0x2DC(r3)
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, 0x2DC(r3)

	.loc_0x10C:
	  lwz       r3, 0x308(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x12C
	  cmpwi     r7, 0x2
	  beq-      .loc_0x12C
	  lwz       r0, 0x8(r3)
	  oris      r0, r0, 0x40
	  stw       r0, 0x8(r3)

	.loc_0x12C:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B7254
 * Size:	00004C
 */
void JAISequence::getDolbyU7(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x18
	  cmplwi    r0, 0x5
	  bne-      .loc_0x2C

	.loc_0x18:
	  lwz       r3, 0x2A4(r3)
	  rlwinm    r0,r4,4,20,27
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  b         .loc_0x30

	.loc_0x2C:
	  lfs       f1, -0x732C(r2)

	.loc_0x30:
	  lfs       f0, -0x7340(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B72A0
 * Size:	00017C
 */
void JAISequence::setPortData(unsigned char, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x737C(r2)
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r30, r3
	  rlwinm    r28,r4,4,20,27
	  mr        r31, r4
	  add       r29, r30, r28
	  mr        r27, r5
	  lfs       f0, 0x5C(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x70
	  lbz       r0, 0x15(r30)
	  cmplwi    r0, 0x3
	  blt-      .loc_0x70
	  addi      r3, r30, 0x30C
	  rlwinm    r4,r31,16,8,15
	  addi      r5, r1, 0x8
	  bl        -0x150AC
	  lhz       r3, 0x8(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lfd       f1, -0x7348(r2)
	  stw       r3, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x5C(r29)

	.loc_0x70:
	  add       r3, r30, r28
	  lwz       r4, 0x64(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0xB0
	  rlwinm    r3,r27,0,16,31
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x7348(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0x5C(r29)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fcmpu     cr0, f2, f0
	  bne-      .loc_0xB0
	  li        r5, 0x2
	  b         .loc_0x128

	.loc_0xB0:
	  cmplwi    r4, 0
	  beq-      .loc_0xEC
	  rlwinm    r3,r27,0,16,31
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  add       r3, r30, r28
	  lfd       f1, -0x7348(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0x58(r3)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fcmpu     cr0, f2, f0
	  bne-      .loc_0xEC
	  li        r5, 0x2
	  b         .loc_0x128

	.loc_0xEC:
	  rlwinm    r4,r27,0,16,31
	  lis       r0, 0x4330
	  stw       r4, 0x14(r1)
	  add       r3, r30, r28
	  lfd       f2, -0x7348(r2)
	  li        r5, 0
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r4, 0x1C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  stfs      f1, 0x58(r3)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x5C(r29)

	.loc_0x128:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x148
	  rlwinm    r0,r31,0,24,31
	  li        r3, 0x1
	  lwz       r4, 0x2C8(r30)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, 0x2C8(r30)

	.loc_0x148:
	  lwz       r3, 0x308(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x168
	  cmpwi     r5, 0x2
	  beq-      .loc_0x168
	  lwz       r0, 0x8(r3)
	  ori       r0, r0, 0x10
	  stw       r0, 0x8(r3)

	.loc_0x168:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B741C
 * Size:	000030
 */
void JAISequence::getPortData(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x30C
	  subi      r5, r13, 0x73E0
	  stw       r0, 0x14(r1)
	  rlwinm    r4,r4,16,8,15
	  bl        -0x151F4
	  lwz       r0, 0x14(r1)
	  lhz       r3, -0x73E0(r13)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
