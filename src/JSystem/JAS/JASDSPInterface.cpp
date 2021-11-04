#include "types.h"

/*
 * --INFO--
 * Address:	800A5310
 * Size:	00004C
 */
void JASDsp::boot(void (*)(void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x756B(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x24
	  li        r0, 0x1
	  stb       r0, -0x756C(r13)
	  stb       r0, -0x756B(r13)

	.loc_0x24:
	  lbz       r0, -0x756C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  bl        0x5600
	  li        r0, 0
	  stb       r0, -0x756C(r13)

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A535C
 * Size:	000020
 */
void JASDsp::releaseHalt(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x53F8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A537C
 * Size:	000020
 */
void JASDsp::finishWork(unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x5818
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A539C
 * Size:	000020
 */
void JASDsp::syncFrame(unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x5C78
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A53BC
 * Size:	000024
 */
void JASDsp::setDSPMixerLevel(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stfs      f1, -0x7570(r13)
	  bl        0x5494
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A53E0
 * Size:	000008
 */
void JASDsp::getDSPMixerLevel()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7570(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A53E8
 * Size:	000010
 */
void JASDsp::getDSPHandle(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r3, 0x180
	  lwz       r3, -0x7578(r13)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDsp::getDSPHandleNc(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDsp::setFilterTable(short*, short*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASDsp::flushBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDsp::flushChannelAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDsp::cacheChannelAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A53F8
 * Size:	000028
 */
void JASDsp::invalChannelAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x6000
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7578(r13)
	  bl        0x472E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5420
 * Size:	0000C4
 */
void JASDsp::initBuffer()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x6000
	  li        r5, 0x20
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r4, -0x7548(r13)
	  bl        -0x813F4
	  stw       r3, -0x7578(r13)
	  li        r3, 0x80
	  lwz       r4, -0x7548(r13)
	  li        r5, 0x20
	  bl        -0x81408
	  stw       r3, -0x7574(r13)
	  li        r4, 0x6000
	  lwz       r3, -0x7578(r13)
	  bl        0xE04
	  lwz       r3, -0x7574(r13)
	  li        r4, 0x80
	  bl        0xDF8
	  li        r31, 0
	  b         .loc_0x6C

	.loc_0x58:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        .loc_0xC4
	  addi      r31, r31, 0x1

	.loc_0x6C:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x58
	  lis       r4, 0x8048
	  lis       r3, 0x8048
	  subi      r5, r4, 0x6F40
	  lwz       r4, -0x7578(r13)
	  subi      r6, r3, 0x6F80
	  lwz       r7, -0x7574(r13)
	  li        r3, 0x40
	  bl        0x532C
	  lwz       r3, -0x7578(r13)
	  li        r4, 0x6000
	  bl        0x47258
	  lwz       r3, -0x7574(r13)
	  li        r4, 0x80
	  bl        0x4724C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xC4:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASDsp::getFXHandle(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDsp::getFXHandleNc(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A54E4
 * Size:	000154
 */
void JASDsp::setFXLine(unsigned char, short*, JASDsp::FxlineConfig_*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r3,5,19,26
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r29, r5
	  lwz       r6, -0x7574(r13)
	  add       r31, r6, r0
	  bl        0x49730
	  li        r0, 0
	  cmplwi    r29, 0
	  sth       r0, 0x0(r31)
	  mr        r30, r3
	  beq-      .loc_0xBC
	  lha       r0, 0x4(r29)
	  lis       r3, 0x804A
	  addi      r3, r3, 0x4440
	  sth       r0, 0xA(r31)
	  lhz       r0, 0x2(r29)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0x8(r31)
	  lha       r0, 0x8(r29)
	  sth       r0, 0xE(r31)
	  lhz       r0, 0x6(r29)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0xC(r31)
	  lwz       r0, 0xC(r29)
	  sth       r0, 0x2(r31)
	  lha       r0, 0x10(r29)
	  sth       r0, 0x10(r31)
	  lha       r0, 0x12(r29)
	  sth       r0, 0x12(r31)
	  lha       r0, 0x14(r29)
	  sth       r0, 0x14(r31)
	  lha       r0, 0x16(r29)
	  sth       r0, 0x16(r31)
	  lha       r0, 0x18(r29)
	  sth       r0, 0x18(r31)
	  lha       r0, 0x1A(r29)
	  sth       r0, 0x1A(r31)
	  lha       r0, 0x1C(r29)
	  sth       r0, 0x1C(r31)
	  lha       r0, 0x1E(r29)
	  sth       r0, 0x1E(r31)

	.loc_0xBC:
	  cmplwi    r28, 0
	  beq-      .loc_0xF4
	  cmplwi    r29, 0
	  beq-      .loc_0xF4
	  lwz       r0, 0xC(r29)
	  mr        r3, r28
	  mulli     r27, r0, 0xA0
	  stw       r28, 0x4(r31)
	  mr        r4, r27
	  bl        0xCA0
	  mr        r3, r28
	  mr        r4, r27
	  bl        0x47148
	  b         .loc_0x108

	.loc_0xF4:
	  cmplwi    r29, 0
	  beq-      .loc_0x104
	  cmplwi    r28, 0
	  beq-      .loc_0x108

	.loc_0x104:
	  stw       r28, 0x4(r31)

	.loc_0x108:
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lbz       r0, 0x0(r29)
	  sth       r0, 0x0(r31)
	  b         .loc_0x128

	.loc_0x120:
	  li        r0, 0
	  sth       r0, 0x0(r31)

	.loc_0x128:
	  mr        r3, r31
	  li        r4, 0x20
	  bl        0x47104
	  mr        r3, r30
	  bl        0x49644
	  lmw       r27, 0xC(r1)
	  li        r3, 0x1
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void JASDsp::changeFXLineParam(unsigned char, unsigned char, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5638
 * Size:	00003C
 */
void JASDsp::TChannel::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  sth       r0, 0xC(r3)
	  sth       r0, 0x2(r3)
	  sth       r0, 0x10A(r3)
	  sth       r0, 0x0(r3)
	  sth       r0, 0x58(r3)
	  stw       r0, 0x68(r3)
	  bl        0x388
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5674
 * Size:	0000A0
 */
void JASDsp::TChannel::playStart(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r5, 0
	  stw       r4, 0x10C(r3)
	  li        r0, 0x1
	  cmpwi     r5, 0x14
	  sth       r4, 0x60(r3)
	  sth       r0, 0x8(r3)
	  sth       r4, 0x66(r3)
	  sth       r4, 0x78(r3)
	  sth       r4, 0xA8(r3)
	  sth       r4, 0x7A(r3)
	  sth       r4, 0xAA(r3)
	  sth       r4, 0x7C(r3)
	  sth       r4, 0xAC(r3)
	  sth       r4, 0x7E(r3)
	  sth       r4, 0xAE(r3)
	  bge-      .loc_0x94
	  sth       r4, 0x80(r3)
	  sth       r4, 0x82(r3)
	  sth       r4, 0x84(r3)
	  sth       r4, 0x86(r3)
	  sth       r4, 0x88(r3)
	  sth       r4, 0x8A(r3)
	  sth       r4, 0x8C(r3)
	  sth       r4, 0x8E(r3)
	  sth       r4, 0x90(r3)
	  sth       r4, 0x92(r3)
	  sth       r4, 0x94(r3)
	  sth       r4, 0x96(r3)
	  sth       r4, 0x98(r3)
	  sth       r4, 0x9A(r3)
	  sth       r4, 0x9C(r3)
	  sth       r4, 0x9E(r3)
	  sth       r4, 0xA0(r3)
	  sth       r4, 0xA2(r3)
	  sth       r4, 0xA4(r3)
	  sth       r4, 0xA6(r3)

	.loc_0x94:
	  li        r0, 0x1
	  sth       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5714
 * Size:	00000C
 */
void JASDsp::TChannel::playStop(void)
{
	// Generated from sth r0, 0x0(r3)
	_00 = 0;
}

/*
 * --INFO--
 * Address:	800A5720
 * Size:	000010
 */
void JASDsp::TChannel::replyFinishRequest(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  sth       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5730
 * Size:	00000C
 */
void JASDsp::TChannel::forceStop(void)
{
	// Generated from sth r0, 0x10A(r3)
	_10A = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDsp::TChannel::isActive() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A573C
 * Size:	000014
 */
void JASDsp::TChannel::isFinish() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x2(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDsp::TChannel::getBlockCounter() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDsp::TChannel::getRemainSamples() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5750
 * Size:	000150
 */
void JASDsp::TChannel::setWaveInfo(JASWaveInfo const&, unsigned long,
                                   unsigned long)
{
	/*
	.loc_0x0:
	  stw       r5, 0x118(r3)
	  subi      r7, r13, 0x7EE8
	  lbz       r8, 0x0(r4)
	  subi      r5, r13, 0x7EE0
	  li        r0, 0
	  lbzx      r7, r7, r8
	  sth       r7, 0x64(r3)
	  lbzx      r5, r5, r8
	  sth       r5, 0x100(r3)
	  stw       r0, 0x68(r3)
	  lhz       r0, 0x100(r3)
	  cmplwi    r0, 0x4
	  bltlr-
	  lwz       r5, 0x1C(r4)
	  lwz       r0, 0x10(r4)
	  stw       r5, 0x11C(r3)
	  sth       r0, 0x102(r3)
	  lhz       r0, 0x102(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  cmplwi    r6, 0x1
	  bne-      .loc_0x5C
	  lwz       r6, 0x14(r4)

	.loc_0x5C:
	  lwz       r5, 0x14(r4)
	  lwz       r0, 0x18(r4)
	  stw       r5, 0x110(r3)
	  lha       r5, 0x20(r4)
	  stw       r0, 0x114(r3)
	  lha       r0, 0x22(r4)
	  sth       r5, 0x104(r3)
	  sth       r0, 0x106(r3)
	  b         .loc_0x88

	.loc_0x80:
	  lwz       r0, 0x11C(r3)
	  stw       r0, 0x114(r3)

	.loc_0x88:
	  cmplwi    r6, 0
	  beq-      .loc_0xFC
	  lwz       r0, 0x114(r3)
	  cmplw     r0, r6
	  ble-      .loc_0xFC
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x2
	  bge-      .loc_0xB4
	  cmpwi     r0, 0
	  bge-      .loc_0xC0
	  b         .loc_0xFC

	.loc_0xB4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xFC
	  b         .loc_0xF8

	.loc_0xC0:
	  stw       r6, 0x68(r3)
	  lhz       r0, 0x100(r3)
	  lwz       r4, 0x118(r3)
	  mullw     r0, r6, r0
	  rlwinm    r0,r0,28,4,31
	  add       r0, r4, r0
	  stw       r0, 0x118(r3)
	  lwz       r0, 0x110(r3)
	  sub       r0, r0, r6
	  stw       r0, 0x110(r3)
	  lwz       r0, 0x114(r3)
	  sub       r0, r0, r6
	  stw       r0, 0x114(r3)
	  b         .loc_0xFC

	.loc_0xF8:
	  stw       r6, 0x68(r3)

	.loc_0xFC:
	  li        r0, 0
	  cmpwi     r0, 0x10
	  bgelr-
	  li        r0, 0
	  sth       r0, 0xB0(r3)
	  sth       r0, 0xB2(r3)
	  sth       r0, 0xB4(r3)
	  sth       r0, 0xB6(r3)
	  sth       r0, 0xB8(r3)
	  sth       r0, 0xBA(r3)
	  sth       r0, 0xBC(r3)
	  sth       r0, 0xBE(r3)
	  sth       r0, 0xC0(r3)
	  sth       r0, 0xC2(r3)
	  sth       r0, 0xC4(r3)
	  sth       r0, 0xC6(r3)
	  sth       r0, 0xC8(r3)
	  sth       r0, 0xCA(r3)
	  sth       r0, 0xCC(r3)
	  sth       r0, 0xCE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A58A0
 * Size:	000018
 */
void JASDsp::TChannel::setOscInfo(unsigned long)
{
	/*
	.loc_0x0:
	  li        r5, 0
	  li        r0, 0x10
	  stw       r5, 0x118(r3)
	  sth       r0, 0x64(r3)
	  sth       r4, 0x100(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A58B8
 * Size:	00002C
 */
void JASDsp::TChannel::initAutoMixer(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x58(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x18
	  lhz       r0, 0x56(r3)
	  sth       r0, 0x54(r3)
	  blr

	.loc_0x18:
	  li        r4, 0
	  li        r0, 0x1
	  sth       r4, 0x54(r3)
	  sth       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A58E4
 * Size:	00002C
 */
void JASDsp::TChannel::setAutoMixer(unsigned short, unsigned char,
                                    unsigned char, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r9,r6,0,24,31
	  rlwinm    r8,r7,8,16,23
	  rlwimi    r9,r5,8,16,23
	  rlwinm    r6,r7,1,23,30
	  sth       r9, 0x50(r3)
	  or        r5, r8, r6
	  li        r0, 0x1
	  sth       r5, 0x52(r3)
	  sth       r4, 0x56(r3)
	  sth       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDsp::TChannel::updateAMVolume(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASDsp::TChannel::updateAMPan(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASDsp::TChannel::updateAMFX(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5910
 * Size:	000018
 */
void JASDsp::TChannel::setPitch(unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,16,31
	  cmplwi    r0, 0x7FFF
	  blt-      .loc_0x10
	  li        r4, 0x7FFF

	.loc_0x10:
	  sth       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5928
 * Size:	00000C
 */
void JASDsp::TChannel::setMixerInitDelayMax(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  sth       r0, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5934
 * Size:	000020
 */
void JASDsp::TChannel::setMixerInitVolume(unsigned char, short)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,21,28
	  li        r0, 0
	  addi      r4, r4, 0x10
	  add       r4, r3, r4
	  sth       r5, 0x4(r4)
	  sth       r5, 0x2(r4)
	  sth       r0, 0x6(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5954
 * Size:	000018
 */
void JASDsp::TChannel::setMixerInitDelaySamples(unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,21,28
	  rlwinm    r6,r5,8,16,23
	  rlwimi    r6,r5,0,24,31
	  addi      r0, r4, 0x16
	  sthx      r6, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A596C
 * Size:	000020
 */
void JASDsp::TChannel::setMixerDelaySamples(unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,21,28
	  addi      r4, r4, 0x10
	  add       r4, r3, r4
	  lhz       r0, 0x6(r4)
	  rlwinm    r0,r0,0,24,31
	  rlwimi    r0,r5,8,16,23
	  sth       r0, 0x6(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A598C
 * Size:	00002C
 */
void JASDsp::TChannel::setMixerVolume(unsigned char, short)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x10A(r3)
	  cmplwi    r0, 0
	  bnelr-
	  rlwinm    r4,r4,3,21,28
	  addi      r4, r4, 0x10
	  add       r4, r3, r4
	  sth       r5, 0x2(r4)
	  lhz       r0, 0x6(r4)
	  rlwinm    r0,r0,0,24,31
	  sth       r0, 0x6(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A59B8
 * Size:	00000C
 */
void JASDsp::TChannel::setPauseFlag(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  sth       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A59C4
 * Size:	000024
 */
void JASDsp::TChannel::flush(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x180
	  stw       r0, 0x14(r1)
	  bl        0x46D44
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A59E8
 * Size:	000048
 */
void JASDsp::TChannel::initFilter(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x7FFF
	  sth       r4, 0x120(r3)
	  sth       r4, 0x122(r3)
	  sth       r4, 0x124(r3)
	  sth       r4, 0x126(r3)
	  sth       r4, 0x128(r3)
	  sth       r4, 0x12A(r3)
	  sth       r4, 0x12C(r3)
	  sth       r4, 0x12E(r3)
	  sth       r0, 0x120(r3)
	  sth       r4, 0x148(r3)
	  sth       r4, 0x14A(r3)
	  sth       r4, 0x14C(r3)
	  sth       r4, 0x14E(r3)
	  sth       r0, 0x148(r3)
	  sth       r4, 0x150(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5A30
 * Size:	000038
 */
void JASDsp::TChannel::setFilterMode(unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm.   r5,r4,0,26,26
	  rlwinm    r0,r4,0,27,31
	  beq-      .loc_0x1C
	  cmplwi    r0, 0x14
	  ble-      .loc_0x28
	  li        r0, 0x14
	  b         .loc_0x28

	.loc_0x1C:
	  cmplwi    r0, 0x18
	  ble-      .loc_0x28
	  li        r0, 0x18

	.loc_0x28:
	  rlwinm    r0,r0,0,24,31
	  add       r0, r5, r0
	  sth       r0, 0x108(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5A68
 * Size:	000024
 */
void JASDsp::TChannel::setIIRFilterParam(short*)
{
	/*
	.loc_0x0:
	  lha       r0, 0x0(r4)
	  sth       r0, 0x148(r3)
	  lha       r0, 0x2(r4)
	  sth       r0, 0x14A(r3)
	  lha       r0, 0x4(r4)
	  sth       r0, 0x14C(r3)
	  lha       r0, 0x6(r4)
	  sth       r0, 0x14E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5A8C
 * Size:	000044
 */
void JASDsp::TChannel::setFIR8FilterParam(short*)
{
	/*
	.loc_0x0:
	  lha       r0, 0x0(r4)
	  sth       r0, 0x120(r3)
	  lha       r0, 0x2(r4)
	  sth       r0, 0x122(r3)
	  lha       r0, 0x4(r4)
	  sth       r0, 0x124(r3)
	  lha       r0, 0x6(r4)
	  sth       r0, 0x126(r3)
	  lha       r0, 0x8(r4)
	  sth       r0, 0x128(r3)
	  lha       r0, 0xA(r4)
	  sth       r0, 0x12A(r3)
	  lha       r0, 0xC(r4)
	  sth       r0, 0x12C(r3)
	  lha       r0, 0xE(r4)
	  sth       r0, 0x12E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5AD0
 * Size:	000008
 */
void JASDsp::TChannel::setDistFilter(short a1)
{
	// Generated from sth r4, 0x150(r3)
	_150 = a1;
}

/*
 * --INFO--
 * Address:	800A5AD8
 * Size:	000020
 */
void JASDsp::TChannel::setBusConnect(unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  lis       r6, 0x8048
	  rlwinm    r4,r4,3,21,28
	  rlwinm    r7,r5,1,23,30
	  subi      r5, r6, 0x6A40
	  addi      r0, r4, 0x10
	  lhzx      r4, r5, r7
	  sthx      r4, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5AF8
 * Size:	000090
 */
void DSP_CreateMap2(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,4,0,27
	  lwz       r5, -0x7578(r13)
	  mulli     r4, r0, 0x180
	  li        r0, 0x4
	  li        r3, 0
	  li        r6, 0
	  add       r4, r5, r4
	  mtctr     r0

	.loc_0x20:
	  lhz       r0, 0x0(r4)
	  rlwinm    r3,r3,1,16,30
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  ori       r0, r3, 0x1
	  rlwinm    r3,r0,0,16,31

	.loc_0x38:
	  lhz       r0, 0x180(r4)
	  rlwinm    r3,r3,1,16,30
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  ori       r0, r3, 0x1
	  rlwinm    r3,r0,0,16,31

	.loc_0x50:
	  lhz       r0, 0x300(r4)
	  rlwinm    r3,r3,1,16,30
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  ori       r0, r3, 0x1
	  rlwinm    r3,r0,0,16,31

	.loc_0x68:
	  lhz       r0, 0x480(r4)
	  rlwinm    r3,r3,1,16,30
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  ori       r0, r3, 0x1
	  rlwinm    r3,r0,0,16,31

	.loc_0x80:
	  addi      r4, r4, 0x600
	  addi      r6, r6, 0x3
	  bdnz+     .loc_0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
void DSP_CreateMap()
{
	// UNUSED FUNCTION
}
