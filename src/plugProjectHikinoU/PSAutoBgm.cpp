#include "types.h"

/*
 * --INFO--
 * Address:	80338DB4
 * Size:	0000A8
 */
void JADUtility::PrmRadioButton<unsigned char>::~PrmRadioButton()
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
	  beq-      .loc_0x8C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52E8
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x70
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x312650

	.loc_0x70:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31BDF8

	.loc_0x7C:
	  extsh.    r0, r31
	  ble-      .loc_0x8C
	  mr        r3, r30
	  bl        -0x314D88

	.loc_0x8C:
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
 * Address:	80338E5C
 * Size:	0000A8
 */
void JADUtility::PrmSlider<unsigned char>::~PrmSlider()
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
	  beq-      .loc_0x8C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x70
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x3126F8

	.loc_0x70:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31BEA0

	.loc_0x7C:
	  extsh.    r0, r31
	  ble-      .loc_0x8C
	  mr        r3, r30
	  bl        -0x314E30

	.loc_0x8C:
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
 * Address:	80338F04
 * Size:	000098
 */
void JADUtility::PrmHio<unsigned char>::~PrmHio()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x60
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x312790

	.loc_0x60:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31BF38

	.loc_0x6C:
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x314EC8

	.loc_0x7C:
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
 * Address:	80338F9C
 * Size:	000088
 */
void JADUtility::Prm<unsigned char>::~Prm()
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
	  beq-      .loc_0x6C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x50
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x312818

	.loc_0x50:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31BFC0

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x314F50

	.loc_0x6C:
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
 * Address:	80339024
 * Size:	000290
 */
PSAutoBgm::Conductor::~Conductor()
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
	  beq-      .loc_0x274
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xE8
	  subi      r0, r3, 0x5338
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xE8
	  subi      r0, r3, 0x52E8
	  stw       r0, 0xE8(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xE8
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xE8(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xE8
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xE8(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x104
	  addi      r0, r4, 0x6774
	  stw       r0, 0xE8(r30)
	  beq-      .loc_0x8C
	  li        r4, 0
	  bl        -0x3128DC

	.loc_0x8C:
	  addi      r3, r30, 0xE8
	  li        r4, 0
	  bl        -0x31C084

	.loc_0x98:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0x104
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0x52D4
	  stw       r0, 0xB8(r30)
	  beq-      .loc_0x104
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xB8(r30)
	  beq-      .loc_0x104
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xB8(r30)
	  beq-      .loc_0x104
	  lis       r4, 0x804A
	  addic.    r3, r30, 0xD4
	  addi      r0, r4, 0x6774
	  stw       r0, 0xB8(r30)
	  beq-      .loc_0xF8
	  li        r4, 0
	  bl        -0x312948

	.loc_0xF8:
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0x31C0F0

	.loc_0x104:
	  addic.    r0, r30, 0x98
	  beq-      .loc_0x118
	  addi      r3, r30, 0x98
	  li        r4, 0
	  bl        -0x312968

	.loc_0x118:
	  cmplwi    r30, 0
	  beq-      .loc_0x264
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5310
	  stw       r0, 0x0(r30)
	  b         .loc_0x150

	.loc_0x130:
	  cmplwi    r4, 0
	  beq-      .loc_0x13C
	  subi      r4, r4, 0xC

	.loc_0x13C:
	  cmplwi    r4, 0
	  beq-      .loc_0x148
	  addi      r4, r4, 0xC

	.loc_0x148:
	  addi      r3, r30, 0x2C
	  bl        -0x31254C

	.loc_0x150:
	  lwz       r4, 0x2C(r30)
	  cmplwi    r4, 0
	  mr        r0, r4
	  beq-      .loc_0x164
	  subi      r0, r4, 0xC

	.loc_0x164:
	  cmplwi    r0, 0
	  bne+      .loc_0x130
	  lis       r4, 0x8034
	  lwz       r3, 0x64(r30)
	  subi      r4, r4, 0x6828
	  bl        -0x277A54
	  addic.    r0, r30, 0x68
	  beq-      .loc_0x1C0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x68
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x1C0
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x84
	  addi      r0, r4, 0x6774
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x1B4
	  li        r4, 0
	  bl        -0x312A04

	.loc_0x1B4:
	  addi      r3, r30, 0x68
	  li        r4, 0
	  bl        -0x31C1AC

	.loc_0x1C0:
	  cmplwi    r30, 0
	  beq-      .loc_0x264
	  lis       r3, 0x804A
	  addi      r0, r3, 0x66E0
	  stw       r0, 0x0(r30)
	  b         .loc_0x1E0

	.loc_0x1D8:
	  addi      r3, r30, 0x1C
	  bl        -0x3125DC

	.loc_0x1E0:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0x1D8
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x244
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x6704
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x244
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x671C
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x244
	  addic.    r0, r30, 0x38
	  beq-      .loc_0x230
	  addi      r3, r30, 0x38
	  li        r4, 0
	  bl        -0x312A80

	.loc_0x230:
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x244
	  addi      r3, r30, 0x2C
	  li        r4, 0
	  bl        -0x3129FC

	.loc_0x244:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0x258
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x312A10

	.loc_0x258:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31C250

	.loc_0x264:
	  extsh.    r0, r31
	  ble-      .loc_0x274
	  mr        r3, r30
	  bl        -0x3151E0

	.loc_0x274:
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
 * Address:	803392B4
 * Size:	000034
 */
void PSAutoBgm::Conductor::removeCallback(unsigned char, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xB4(r4)
	  li        r4, 0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	803392E8
 * Size:	00011C
 */
void PSAutoBgm::Conductor::seqCpuSync_AutoBgm(JASTrack*, unsigned short,
                                              unsigned long, JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,0,16,31
	  cmpwi     r0, 0x600
	  stmw      r26, 0x8(r1)
	  mr        r29, r5
	  mr        r26, r3
	  mr        r28, r4
	  mr        r30, r6
	  mr        r31, r7
	  beq-      .loc_0x7C
	  bge-      .loc_0x40
	  cmpwi     r0, 0x300
	  beq-      .loc_0x4C
	  b         .loc_0x104

	.loc_0x40:
	  cmpwi     r0, 0x800
	  beq-      .loc_0x7C
	  b         .loc_0x104

	.loc_0x4C:
	  lbz       r4, 0xE4(r26)
	  mr        r3, r28
	  bl        -0x296DA0
	  mr        r3, r26
	  mr        r4, r28
	  bl        .loc_0x11C
	  li        r0, 0
	  mr        r3, r26
	  stw       r0, 0xB0(r26)
	  bl        0x37BC
	  rlwinm    r3,r3,0,24,31
	  b         .loc_0x108

	.loc_0x7C:
	  rlwinm    r0,r30,0,28,31
	  mr        r3, r26
	  mr        r27, r0
	  bl        0x37A4
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r0,r27,0,24,31
	  cmplw     r0, r3
	  blt-      .loc_0xB8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0xC3
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x30ED5C

	.loc_0xB8:
	  mr        r3, r26
	  mr        r4, r27
	  bl        0x3B54
	  mr.       r27, r3
	  bne-      .loc_0xE8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0xC5
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x30ED8C

	.loc_0xE8:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        0x80C
	  b         .loc_0x108

	.loc_0x104:
	  li        r3, 0

	.loc_0x108:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x11C:
	*/
}

/*
 * --INFO--
 * Address:	80339404
 * Size:	0000F4
 */
void PSAutoBgm::Conductor::createTables(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r5, r1, 0xA
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0x2
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x2972D8
	  mr        r3, r31
	  addi      r5, r1, 0x8
	  li        r4, 0x3
	  bl        -0x2972E8
	  lhz       r7, 0xA(r1)
	  mr        r3, r31
	  lhz       r6, 0x8(r1)
	  addi      r5, r1, 0xA
	  lwz       r0, 0xC(r31)
	  rlwimi    r6,r7,16,0,15
	  li        r4, 0x4
	  add       r0, r6, r0
	  stw       r0, 0xA8(r30)
	  bl        -0x297310
	  mr        r3, r31
	  addi      r5, r1, 0x8
	  li        r4, 0x5
	  bl        -0x297320
	  lhz       r4, 0xA(r1)
	  lhz       r3, 0x8(r1)
	  lwz       r0, 0xC(r31)
	  rlwimi    r3,r4,16,0,15
	  add       r0, r3, r0
	  stw       r0, 0xAC(r30)
	  lwz       r0, 0xA8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0xE6
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x30EE74

	.loc_0xB4:
	  lwz       r0, 0xAC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0xE7
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x30EE9C

	.loc_0xDC:
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
 * Address:	803394F8
 * Size:	0002A4
 */
PSAutoBgm::Track::Track()
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
	  bl        0x3954
	  lis       r3, 0x804E
	  li        r4, 0xFF
	  subi      r0, r3, 0x53D8
	  addi      r29, r31, 0xA0
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  mr        r3, r29
	  stb       r4, 0x98(r31)
	  stb       r4, 0x99(r31)
	  stw       r0, 0x9C(r31)
	  bl        -0x31C578
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x312DAC
	  lis       r3, 0x804E
	  addi      r30, r31, 0xD0
	  subi      r0, r3, 0x534C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5360
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31C5C8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x312DFC
	  lis       r3, 0x804E
	  addi      r29, r31, 0x100
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52C0
	  mr        r28, r29
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52E8
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        -0x31C61C
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r28
	  stw       r3, 0x0(r28)
	  addi      r3, r28, 0x1C
	  stb       r0, 0x18(r28)
	  bl        -0x312E50
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x6760
	  lis       r4, 0x804A
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0x674C
	  lis       r3, 0x804E
	  addi      r6, r4, 0x6738
	  stw       r0, 0x0(r29)
	  li        r5, 0x8
	  li        r4, 0
	  subi      r0, r3, 0x5388
	  stw       r6, 0x0(r29)
	  li        r3, 0x8
	  stw       r5, 0x30(r29)
	  stw       r4, 0x34(r29)
	  stw       r4, 0x38(r29)
	  stw       r0, 0x0(r29)
	  bl        -0x3156A8
	  stw       r3, 0x2C(r29)
	  subi      r4, r2, 0x200
	  lwz       r3, 0x2C(r29)
	  bl        -0x26EE0C
	  addi      r28, r31, 0x13C
	  mr        r3, r28
	  bl        -0x31C6A4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r28
	  stw       r3, 0x0(r28)
	  addi      r3, r28, 0x1C
	  stb       r0, 0x18(r28)
	  bl        -0x312ED8
	  lis       r3, 0x804E
	  addi      r29, r31, 0x16C
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r28)
	  mr        r3, r29
	  bl        -0x31C6F4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x312F28
	  lis       r3, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r3, 0x52AC
	  li        r5, 0
	  stw       r0, 0x0(r29)
	  subi      r0, r4, 0x52C0
	  lis       r3, 0x804E
	  addi      r4, r31, 0x84
	  stw       r0, 0x0(r29)
	  subi      r3, r3, 0x52D4
	  li        r0, 0x3
	  stw       r3, 0x0(r29)
	  addi      r3, r31, 0x1C
	  stw       r5, 0x19C(r31)
	  stb       r0, 0x18(r31)
	  bl        -0x312E3C
	  addi      r4, r31, 0xBC
	  addi      r3, r31, 0x1C
	  bl        -0x312E48
	  addi      r4, r31, 0xEC
	  addi      r3, r31, 0x1C
	  bl        -0x312E54
	  addi      r4, r31, 0x11C
	  addi      r3, r31, 0x1C
	  bl        -0x312E60
	  addi      r4, r31, 0x158
	  addi      r3, r31, 0x1C
	  bl        -0x312E6C
	  addi      r4, r31, 0x188
	  addi      r3, r31, 0x1C
	  bl        -0x312E78
	  li        r0, 0x3
	  lis       r3, 0x8034
	  stb       r0, 0x19(r31)
	  subi      r0, r3, 0x644C
	  mr        r3, r31
	  stw       r0, 0x5C(r31)
	  stw       r31, 0x60(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033979C
 * Size:	00003C
 */
void PSAutoBgm::Track::afterGetFromFree()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x200
	  stw       r0, 0x14(r1)
	  li        r0, 0xFF
	  stb       r0, 0x99(r3)
	  li        r0, 0
	  sth       r0, 0xCC(r3)
	  stb       r0, 0xFC(r3)
	  lwz       r3, 0x12C(r3)
	  bl        -0x26EF6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803397D8
 * Size:	0003DC
 */
PSAutoBgm::Track::~Track()
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
	  beq-      .loc_0x3C0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x16C
	  subi      r0, r3, 0x53D8
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x16C
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x16C(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x16C
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x16C(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x16C
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x16C(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x188
	  addi      r0, r4, 0x6774
	  stw       r0, 0x16C(r30)
	  beq-      .loc_0x8C
	  li        r4, 0
	  bl        -0x313090

	.loc_0x8C:
	  addi      r3, r30, 0x16C
	  li        r4, 0
	  bl        -0x31C838

	.loc_0x98:
	  addic.    r0, r30, 0x13C
	  beq-      .loc_0x104
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x13C
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x13C(r30)
	  beq-      .loc_0x104
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x13C
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x13C(r30)
	  beq-      .loc_0x104
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x13C
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x13C(r30)
	  beq-      .loc_0x104
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x158
	  addi      r0, r4, 0x6774
	  stw       r0, 0x13C(r30)
	  beq-      .loc_0xF8
	  li        r4, 0
	  bl        -0x3130FC

	.loc_0xF8:
	  addi      r3, r30, 0x13C
	  li        r4, 0
	  bl        -0x31C8A4

	.loc_0x104:
	  addic.    r0, r30, 0x100
	  beq-      .loc_0x18C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5388
	  stw       r0, 0x100(r30)
	  lwz       r3, 0x12C(r30)
	  bl        -0x31581C
	  addic.    r0, r30, 0x100
	  beq-      .loc_0x18C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x100
	  addi      r0, r3, 0x6738
	  stw       r0, 0x100(r30)
	  beq-      .loc_0x18C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x100
	  addi      r0, r3, 0x674C
	  stw       r0, 0x100(r30)
	  beq-      .loc_0x18C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x100
	  addi      r0, r3, 0x6760
	  stw       r0, 0x100(r30)
	  beq-      .loc_0x18C
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x11C
	  addi      r0, r4, 0x6774
	  stw       r0, 0x100(r30)
	  beq-      .loc_0x180
	  li        r4, 0
	  bl        -0x313184

	.loc_0x180:
	  addi      r3, r30, 0x100
	  li        r4, 0
	  bl        -0x31C92C

	.loc_0x18C:
	  addic.    r0, r30, 0xD0
	  beq-      .loc_0x1F8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xD0
	  subi      r0, r3, 0x52E8
	  stw       r0, 0xD0(r30)
	  beq-      .loc_0x1F8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xD0
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xD0(r30)
	  beq-      .loc_0x1F8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xD0
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xD0(r30)
	  beq-      .loc_0x1F8
	  lis       r4, 0x804A
	  addic.    r3, r30, 0xEC
	  addi      r0, r4, 0x6774
	  stw       r0, 0xD0(r30)
	  beq-      .loc_0x1EC
	  li        r4, 0
	  bl        -0x3131F0

	.loc_0x1EC:
	  addi      r3, r30, 0xD0
	  li        r4, 0
	  bl        -0x31C998

	.loc_0x1F8:
	  addic.    r0, r30, 0xA0
	  beq-      .loc_0x264
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA0
	  subi      r0, r3, 0x5374
	  stw       r0, 0xA0(r30)
	  beq-      .loc_0x264
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA0
	  subi      r0, r3, 0x5360
	  stw       r0, 0xA0(r30)
	  beq-      .loc_0x264
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA0
	  subi      r0, r3, 0x534C
	  stw       r0, 0xA0(r30)
	  beq-      .loc_0x264
	  lis       r4, 0x804A
	  addic.    r3, r30, 0xBC
	  addi      r0, r4, 0x6774
	  stw       r0, 0xA0(r30)
	  beq-      .loc_0x258
	  li        r4, 0
	  bl        -0x31325C

	.loc_0x258:
	  addi      r3, r30, 0xA0
	  li        r4, 0
	  bl        -0x31CA04

	.loc_0x264:
	  cmplwi    r30, 0
	  beq-      .loc_0x3B0
	  lis       r3, 0x804E
	  subi      r0, r3, 0x53B0
	  stw       r0, 0x0(r30)
	  b         .loc_0x29C

	.loc_0x27C:
	  cmplwi    r4, 0
	  beq-      .loc_0x288
	  subi      r4, r4, 0xC

	.loc_0x288:
	  cmplwi    r4, 0
	  beq-      .loc_0x294
	  addi      r4, r4, 0xC

	.loc_0x294:
	  addi      r3, r30, 0x2C
	  bl        -0x312E4C

	.loc_0x29C:
	  lwz       r4, 0x2C(r30)
	  cmplwi    r4, 0
	  mr        r0, r4
	  beq-      .loc_0x2B0
	  subi      r0, r4, 0xC

	.loc_0x2B0:
	  cmplwi    r0, 0
	  bne+      .loc_0x27C
	  lis       r4, 0x8034
	  lwz       r3, 0x64(r30)
	  subi      r4, r4, 0x5C50
	  bl        -0x278354
	  addic.    r0, r30, 0x68
	  beq-      .loc_0x30C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x68
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x30C
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x84
	  addi      r0, r4, 0x6774
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x300
	  li        r4, 0
	  bl        -0x313304

	.loc_0x300:
	  addi      r3, r30, 0x68
	  li        r4, 0
	  bl        -0x31CAAC

	.loc_0x30C:
	  cmplwi    r30, 0
	  beq-      .loc_0x3B0
	  lis       r3, 0x804A
	  addi      r0, r3, 0x66E0
	  stw       r0, 0x0(r30)
	  b         .loc_0x32C

	.loc_0x324:
	  addi      r3, r30, 0x1C
	  bl        -0x312EDC

	.loc_0x32C:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0x324
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x390
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x6704
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x390
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x671C
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x390
	  addic.    r0, r30, 0x38
	  beq-      .loc_0x37C
	  addi      r3, r30, 0x38
	  li        r4, 0
	  bl        -0x313380

	.loc_0x37C:
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x390
	  addi      r3, r30, 0x2C
	  li        r4, 0
	  bl        -0x3132FC

	.loc_0x390:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0x3A4
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x313310

	.loc_0x3A4:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31CB50

	.loc_0x3B0:
	  extsh.    r0, r31
	  ble-      .loc_0x3C0
	  mr        r3, r30
	  bl        -0x315AE0

	.loc_0x3C0:
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
 * Address:	80339BB4
 * Size:	00003C
 */
void PSAutoBgm::Track::removeCallback(unsigned char, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3C(r4)
	  li        r4, 0
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0xB4(r3)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80339BF0
 * Size:	0001B8
 */
void PSAutoBgm::Track::seqCpuSync_AutoBgm_Track(JASTrack*, unsigned short,
                                                unsigned long, JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r5
	  rlwinm    r0,r27,0,16,31
	  lis       r5, 0x8049
	  cmpwi     r0, 0x800
	  mr        r31, r3
	  mr        r26, r4
	  mr        r29, r6
	  mr        r28, r7
	  subi      r30, r5, 0x1A0
	  beq-      .loc_0x15C
	  bge-      .loc_0x1A0
	  cmpwi     r0, 0x600
	  beq-      .loc_0x48
	  b         .loc_0x1A0

	.loc_0x48:
	  li        r0, 0xFF
	  stb       r0, 0x99(r31)
	  lbz       r3, 0x168(r31)
	  cmplwi    r3, 0x10
	  beq-      .loc_0xB4
	  lbz       r0, 0x98(r31)
	  cmplw     r3, r0
	  blt-      .loc_0x7C
	  addi      r3, r30, 0
	  addi      r5, r30, 0x1C
	  li        r4, 0x1A0
	  crclr     6, 0x6
	  bl        -0x30F628

	.loc_0x7C:
	  lwz       r3, 0x3C(r31)
	  lbz       r4, 0x168(r31)
	  lwz       r3, 0xC(r3)
	  bl        0x3284
	  stw       r3, 0x19C(r31)
	  lwz       r0, 0x19C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  addi      r3, r30, 0
	  addi      r5, r30, 0x10
	  li        r4, 0x1A2
	  crclr     6, 0x6
	  bl        -0x30F65C
	  b         .loc_0xBC

	.loc_0xB4:
	  li        r0, 0
	  stw       r0, 0x19C(r31)

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x2E74
	  rlwinm    r29,r3,0,24,31
	  li        r28, 0
	  li        r30, 0
	  b         .loc_0xE8

	.loc_0xD4:
	  mr        r3, r31
	  mr        r4, r28
	  bl        0x3050
	  stb       r30, 0x2C1(r3)
	  addi      r28, r28, 0x1

	.loc_0xE8:
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r29
	  blt+      .loc_0xD4
	  lwz       r3, 0x19C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lbz       r3, 0xFC(r3)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x144

	.loc_0x124:
	  lbz       r3, 0xFC(r31)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31

	.loc_0x144:
	  lha       r0, 0xCC(r31)
	  rlwinm    r0,r0,0,16,31
	  mulli     r0, r0, 0x78
	  add       r0, r3, r0
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1A4

	.loc_0x15C:
	  bl        .loc_0x1B8
	  lbz       r4, 0x99(r31)
	  mr        r3, r31
	  bl        0x2FC4
	  cmplwi    r3, 0
	  beq-      .loc_0x198
	  lbz       r4, 0x99(r31)
	  mr        r3, r31
	  bl        0x2FB0
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r29
	  mr        r7, r28
	  bl        0xDA0
	  b         .loc_0x1A4

	.loc_0x198:
	  li        r3, 0
	  b         .loc_0x1A4

	.loc_0x1A0:
	  li        r3, 0

	.loc_0x1A4:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x1B8:
	*/
}

/*
 * --INFO--
 * Address:	80339DA8
 * Size:	000060
 */
void PSAutoBgm::Track::incCurModule()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x99(r3)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x2C
	  li        r0, 0
	  stb       r0, 0x99(r31)
	  b         .loc_0x4C

	.loc_0x2C:
	  bl        0x2D50
	  rlwinm    r4,r3,0,24,31
	  lbz       r3, 0x99(r31)
	  subi      r0, r4, 0x1
	  cmpw      r3, r0
	  beq-      .loc_0x4C
	  addi      r0, r3, 0x1
	  stb       r0, 0x99(r31)

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
 * Address:	80339E08
 * Size:	000054
 */
void PSAutoBgm::Module::afterGetFromFree()
{
	/*
	.loc_0x0:
	  li        r5, 0x40
	  li        r4, 0
	  sth       r5, 0xC0(r3)
	  li        r0, 0x60
	  stb       r4, 0x180(r3)
	  sth       r4, 0x1B0(r3)
	  sth       r4, 0x1E0(r3)
	  stb       r4, 0xF0(r3)
	  sth       r4, 0x90(r3)
	  stb       r4, 0x120(r3)
	  sth       r4, 0x210(r3)
	  stb       r0, 0x240(r3)
	  stb       r5, 0x270(r3)
	  stw       r4, 0x2A8(r3)
	  stw       r4, 0x2B0(r3)
	  stb       r4, 0x2B4(r3)
	  sth       r4, 0x2A4(r3)
	  stb       r4, 0x2C1(r3)
	  stb       r4, 0x2A0(r3)
	  stb       r4, 0x2C0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80339E5C
 * Size:	000554
 */
PSAutoBgm::Module::Module()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bl        -0x27F918
	  lis       r3, 0x804E
	  addi      r29, r31, 0x64
	  subi      r0, r3, 0x53FC
	  stw       r0, 0x0(r31)
	  mr        r3, r29
	  bl        -0x31CEC8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x3136FC
	  lis       r3, 0x804E
	  addi      r30, r31, 0x94
	  subi      r0, r3, 0x534C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5360
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31CF18
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x31374C
	  lis       r3, 0x804E
	  addi      r29, r31, 0xC4
	  subi      r0, r3, 0x534C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x5360
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        -0x31CF68
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x31379C
	  lis       r3, 0x804E
	  addi      r30, r31, 0xF4
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31CFB8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x3137EC
	  lis       r3, 0x804E
	  addi      r29, r31, 0x124
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52E8
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        -0x31D008
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x31383C
	  lis       r3, 0x804E
	  addi      r30, r31, 0x154
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31D058
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x31388C
	  lis       r3, 0x804E
	  addi      r29, r31, 0x184
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        -0x31D0A8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x3138DC
	  lis       r3, 0x804E
	  addi      r30, r31, 0x1B4
	  subi      r0, r3, 0x534C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5360
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31D0F8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x31392C
	  lis       r3, 0x804E
	  addi      r29, r31, 0x1E4
	  subi      r0, r3, 0x534C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x5360
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        -0x31D148
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x31397C
	  lis       r3, 0x804E
	  addi      r30, r31, 0x214
	  subi      r0, r3, 0x534C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5360
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31D198
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x3139CC
	  lis       r3, 0x804E
	  addi      r29, r31, 0x244
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        -0x31D1E8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x313A1C
	  lis       r3, 0x804E
	  addi      r30, r31, 0x274
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r29)
	  mr        r3, r30
	  bl        -0x31D238
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x313A6C
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x52AC
	  lis       r4, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x1
	  subi      r5, r4, 0x52E8
	  stw       r0, 0x0(r30)
	  li        r4, 0
	  subi      r0, r3, 0x1
	  li        r3, 0x68
	  stw       r5, 0x0(r30)
	  li        r5, 0
	  sth       r4, 0x2A4(r31)
	  stw       r4, 0x2A8(r31)
	  stb       r4, 0x2AC(r31)
	  stw       r4, 0x2B0(r31)
	  stb       r4, 0x2B4(r31)
	  stb       r4, 0x2C0(r31)
	  stb       r4, 0x2C1(r31)
	  sth       r0, 0x2C2(r31)
	  lwz       r4, -0x6798(r13)
	  bl        -0x316344
	  mr.       r0, r3
	  beq-      .loc_0x440
	  mr        r4, r31
	  bl        0xFF8
	  mr        r0, r3

	.loc_0x440:
	  stw       r0, 0x2B8(r31)
	  li        r3, 0x40
	  li        r5, 0
	  lwz       r4, -0x6798(r13)
	  bl        -0x31636C
	  mr.       r0, r3
	  beq-      .loc_0x468
	  mr        r4, r31
	  bl        0x1898
	  mr        r0, r3

	.loc_0x468:
	  stw       r0, 0x2BC(r31)
	  addi      r4, r31, 0x80
	  addi      r3, r31, 0x1C
	  bl        -0x3139EC
	  addi      r4, r31, 0xB0
	  addi      r3, r31, 0x1C
	  bl        -0x3139F8
	  addi      r4, r31, 0xE0
	  addi      r3, r31, 0x1C
	  bl        -0x313A04
	  addi      r4, r31, 0x110
	  addi      r3, r31, 0x1C
	  bl        -0x313A10
	  addi      r4, r31, 0x140
	  addi      r3, r31, 0x1C
	  bl        -0x313A1C
	  addi      r4, r31, 0x170
	  addi      r3, r31, 0x1C
	  bl        -0x313A28
	  addi      r4, r31, 0x1A0
	  addi      r3, r31, 0x1C
	  bl        -0x313A34
	  addi      r4, r31, 0x1D0
	  addi      r3, r31, 0x1C
	  bl        -0x313A40
	  lwz       r4, 0x2B8(r31)
	  addi      r3, r31, 0x1C
	  addi      r4, r4, 0x28
	  bl        -0x313A50
	  lwz       r4, 0x2BC(r31)
	  addi      r3, r31, 0x1C
	  addi      r4, r4, 0x28
	  bl        -0x313A60
	  addi      r4, r31, 0x200
	  addi      r3, r31, 0x1C
	  bl        -0x313A6C
	  addi      r4, r31, 0x230
	  addi      r3, r31, 0x1C
	  bl        -0x313A78
	  addi      r4, r31, 0x260
	  addi      r3, r31, 0x1C
	  bl        -0x313A84
	  addi      r4, r31, 0x290
	  addi      r3, r31, 0x1C
	  bl        -0x313A90
	  li        r0, 0x15
	  lis       r3, 0x8034
	  stb       r0, 0x19(r31)
	  subi      r0, r3, 0x5524
	  mr        r3, r31
	  stw       r0, 0x5C(r31)
	  stw       r31, 0x60(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033A3B0
 * Size:	00072C
 */
PSAutoBgm::Module::~Module()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr.       r30, r3
	  stw       r29, 0x14(r1)
	  beq-      .loc_0x70C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x53FC
	  stw       r0, 0x0(r30)
	  lwz       r29, 0x2B8(r30)
	  cmplwi    r29, 0
	  beq-      .loc_0xBC
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x5410
	  stw       r0, 0x0(r29)
	  beq-      .loc_0xB4
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x52D4
	  stw       r0, 0xC(r29)
	  beq-      .loc_0xB4
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xC(r29)
	  beq-      .loc_0xB4
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xC(r29)
	  beq-      .loc_0xB4
	  lis       r4, 0x804A
	  addic.    r3, r29, 0x28
	  addi      r0, r4, 0x6774
	  stw       r0, 0xC(r29)
	  beq-      .loc_0xA8
	  li        r4, 0
	  bl        -0x313C84

	.loc_0xA8:
	  addi      r3, r29, 0xC
	  li        r4, 0
	  bl        -0x31D42C

	.loc_0xB4:
	  mr        r3, r29
	  bl        -0x3163B4

	.loc_0xBC:
	  lwz       r29, 0x2BC(r30)
	  cmplwi    r29, 0
	  beq-      .loc_0x148
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x5410
	  stw       r0, 0x0(r29)
	  beq-      .loc_0x140
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x52D4
	  stw       r0, 0xC(r29)
	  beq-      .loc_0x140
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xC(r29)
	  beq-      .loc_0x140
	  lis       r3, 0x804E
	  addic.    r0, r29, 0xC
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xC(r29)
	  beq-      .loc_0x140
	  lis       r4, 0x804A
	  addic.    r3, r29, 0x28
	  addi      r0, r4, 0x6774
	  stw       r0, 0xC(r29)
	  beq-      .loc_0x134
	  li        r4, 0
	  bl        -0x313D10

	.loc_0x134:
	  addi      r3, r29, 0xC
	  li        r4, 0
	  bl        -0x31D4B8

	.loc_0x140:
	  mr        r3, r29
	  bl        -0x316440

	.loc_0x148:
	  addic.    r0, r30, 0x274
	  beq-      .loc_0x1B4
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x274
	  subi      r0, r3, 0x52E8
	  stw       r0, 0x274(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x274
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x274(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x274
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x274(r30)
	  beq-      .loc_0x1B4
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x290
	  addi      r0, r4, 0x6774
	  stw       r0, 0x274(r30)
	  beq-      .loc_0x1A8
	  li        r4, 0
	  bl        -0x313D84

	.loc_0x1A8:
	  addi      r3, r30, 0x274
	  li        r4, 0
	  bl        -0x31D52C

	.loc_0x1B4:
	  addic.    r0, r30, 0x244
	  beq-      .loc_0x220
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x244
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x244(r30)
	  beq-      .loc_0x220
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x244
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x244(r30)
	  beq-      .loc_0x220
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x244
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x244(r30)
	  beq-      .loc_0x220
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x260
	  addi      r0, r4, 0x6774
	  stw       r0, 0x244(r30)
	  beq-      .loc_0x214
	  li        r4, 0
	  bl        -0x313DF0

	.loc_0x214:
	  addi      r3, r30, 0x244
	  li        r4, 0
	  bl        -0x31D598

	.loc_0x220:
	  addic.    r0, r30, 0x214
	  beq-      .loc_0x28C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x214
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x28C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x214
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x28C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x214
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x28C
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x230
	  addi      r0, r4, 0x6774
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x280
	  li        r4, 0
	  bl        -0x313E5C

	.loc_0x280:
	  addi      r3, r30, 0x214
	  li        r4, 0
	  bl        -0x31D604

	.loc_0x28C:
	  addic.    r0, r30, 0x1E4
	  beq-      .loc_0x2F8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x1E4
	  subi      r0, r3, 0x5374
	  stw       r0, 0x1E4(r30)
	  beq-      .loc_0x2F8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x1E4
	  subi      r0, r3, 0x5360
	  stw       r0, 0x1E4(r30)
	  beq-      .loc_0x2F8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x1E4
	  subi      r0, r3, 0x534C
	  stw       r0, 0x1E4(r30)
	  beq-      .loc_0x2F8
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x200
	  addi      r0, r4, 0x6774
	  stw       r0, 0x1E4(r30)
	  beq-      .loc_0x2EC
	  li        r4, 0
	  bl        -0x313EC8

	.loc_0x2EC:
	  addi      r3, r30, 0x1E4
	  li        r4, 0
	  bl        -0x31D670

	.loc_0x2F8:
	  addic.    r0, r30, 0x1B4
	  beq-      .loc_0x364
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x1B4
	  subi      r0, r3, 0x5374
	  stw       r0, 0x1B4(r30)
	  beq-      .loc_0x364
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x1B4
	  subi      r0, r3, 0x5360
	  stw       r0, 0x1B4(r30)
	  beq-      .loc_0x364
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x1B4
	  subi      r0, r3, 0x534C
	  stw       r0, 0x1B4(r30)
	  beq-      .loc_0x364
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x1D0
	  addi      r0, r4, 0x6774
	  stw       r0, 0x1B4(r30)
	  beq-      .loc_0x358
	  li        r4, 0
	  bl        -0x313F34

	.loc_0x358:
	  addi      r3, r30, 0x1B4
	  li        r4, 0
	  bl        -0x31D6DC

	.loc_0x364:
	  addic.    r0, r30, 0x184
	  beq-      .loc_0x3D0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x184
	  subi      r0, r3, 0x5374
	  stw       r0, 0x184(r30)
	  beq-      .loc_0x3D0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x184
	  subi      r0, r3, 0x5360
	  stw       r0, 0x184(r30)
	  beq-      .loc_0x3D0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x184
	  subi      r0, r3, 0x534C
	  stw       r0, 0x184(r30)
	  beq-      .loc_0x3D0
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x1A0
	  addi      r0, r4, 0x6774
	  stw       r0, 0x184(r30)
	  beq-      .loc_0x3C4
	  li        r4, 0
	  bl        -0x313FA0

	.loc_0x3C4:
	  addi      r3, r30, 0x184
	  li        r4, 0
	  bl        -0x31D748

	.loc_0x3D0:
	  addic.    r0, r30, 0x154
	  beq-      .loc_0x43C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x154
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x154(r30)
	  beq-      .loc_0x43C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x154
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x154(r30)
	  beq-      .loc_0x43C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x154
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x154(r30)
	  beq-      .loc_0x43C
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x170
	  addi      r0, r4, 0x6774
	  stw       r0, 0x154(r30)
	  beq-      .loc_0x430
	  li        r4, 0
	  bl        -0x31400C

	.loc_0x430:
	  addi      r3, r30, 0x154
	  li        r4, 0
	  bl        -0x31D7B4

	.loc_0x43C:
	  addic.    r0, r30, 0x124
	  beq-      .loc_0x4A8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x124
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x124(r30)
	  beq-      .loc_0x4A8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x124
	  subi      r0, r3, 0x52C0
	  stw       r0, 0x124(r30)
	  beq-      .loc_0x4A8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x124
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x124(r30)
	  beq-      .loc_0x4A8
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x140
	  addi      r0, r4, 0x6774
	  stw       r0, 0x124(r30)
	  beq-      .loc_0x49C
	  li        r4, 0
	  bl        -0x314078

	.loc_0x49C:
	  addi      r3, r30, 0x124
	  li        r4, 0
	  bl        -0x31D820

	.loc_0x4A8:
	  addic.    r0, r30, 0xF4
	  beq-      .loc_0x514
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xF4
	  subi      r0, r3, 0x52E8
	  stw       r0, 0xF4(r30)
	  beq-      .loc_0x514
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xF4
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xF4(r30)
	  beq-      .loc_0x514
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xF4
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xF4(r30)
	  beq-      .loc_0x514
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x110
	  addi      r0, r4, 0x6774
	  stw       r0, 0xF4(r30)
	  beq-      .loc_0x508
	  li        r4, 0
	  bl        -0x3140E4

	.loc_0x508:
	  addi      r3, r30, 0xF4
	  li        r4, 0
	  bl        -0x31D88C

	.loc_0x514:
	  addic.    r0, r30, 0xC4
	  beq-      .loc_0x580
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xC4
	  subi      r0, r3, 0x52D4
	  stw       r0, 0xC4(r30)
	  beq-      .loc_0x580
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xC4
	  subi      r0, r3, 0x52C0
	  stw       r0, 0xC4(r30)
	  beq-      .loc_0x580
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xC4
	  subi      r0, r3, 0x52AC
	  stw       r0, 0xC4(r30)
	  beq-      .loc_0x580
	  lis       r4, 0x804A
	  addic.    r3, r30, 0xE0
	  addi      r0, r4, 0x6774
	  stw       r0, 0xC4(r30)
	  beq-      .loc_0x574
	  li        r4, 0
	  bl        -0x314150

	.loc_0x574:
	  addi      r3, r30, 0xC4
	  li        r4, 0
	  bl        -0x31D8F8

	.loc_0x580:
	  addic.    r0, r30, 0x94
	  beq-      .loc_0x5EC
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x94
	  subi      r0, r3, 0x5374
	  stw       r0, 0x94(r30)
	  beq-      .loc_0x5EC
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x94
	  subi      r0, r3, 0x5360
	  stw       r0, 0x94(r30)
	  beq-      .loc_0x5EC
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x94
	  subi      r0, r3, 0x534C
	  stw       r0, 0x94(r30)
	  beq-      .loc_0x5EC
	  lis       r4, 0x804A
	  addic.    r3, r30, 0xB0
	  addi      r0, r4, 0x6774
	  stw       r0, 0x94(r30)
	  beq-      .loc_0x5E0
	  li        r4, 0
	  bl        -0x3141BC

	.loc_0x5E0:
	  addi      r3, r30, 0x94
	  li        r4, 0
	  bl        -0x31D964

	.loc_0x5EC:
	  addic.    r0, r30, 0x64
	  beq-      .loc_0x658
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x64
	  subi      r0, r3, 0x5374
	  stw       r0, 0x64(r30)
	  beq-      .loc_0x658
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x64
	  subi      r0, r3, 0x5360
	  stw       r0, 0x64(r30)
	  beq-      .loc_0x658
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x64
	  subi      r0, r3, 0x534C
	  stw       r0, 0x64(r30)
	  beq-      .loc_0x658
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x80
	  addi      r0, r4, 0x6774
	  stw       r0, 0x64(r30)
	  beq-      .loc_0x64C
	  li        r4, 0
	  bl        -0x314228

	.loc_0x64C:
	  addi      r3, r30, 0x64
	  li        r4, 0
	  bl        -0x31D9D0

	.loc_0x658:
	  cmplwi    r30, 0
	  beq-      .loc_0x6FC
	  lis       r3, 0x804A
	  addi      r0, r3, 0x66E0
	  stw       r0, 0x0(r30)
	  b         .loc_0x678

	.loc_0x670:
	  addi      r3, r30, 0x1C
	  bl        -0x313E00

	.loc_0x678:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0x670
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x6DC
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x6704
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x6DC
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x671C
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x6DC
	  addic.    r0, r30, 0x38
	  beq-      .loc_0x6C8
	  addi      r3, r30, 0x38
	  li        r4, 0
	  bl        -0x3142A4

	.loc_0x6C8:
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x6DC
	  addi      r3, r30, 0x2C
	  li        r4, 0
	  bl        -0x314220

	.loc_0x6DC:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0x6F0
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x314234

	.loc_0x6F0:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31DA74

	.loc_0x6FC:
	  extsh.    r0, r31
	  ble-      .loc_0x70C
	  mr        r3, r30
	  bl        -0x316A04

	.loc_0x70C:
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
 * Address:	8033AADC
 * Size:	000044
 */
void PSAutoBgm::Module::removeCallback(unsigned char, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3C(r4)
	  li        r4, 0
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x3C(r3)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0xB4(r3)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	8033AB20
 * Size:	000218
 */
void PSAutoBgm::Module::seqCpuSync_AutoBgm_Module(JASTrack*, unsigned short,
                                                  unsigned long, JASTrack*)
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
	  rlwinm    r0,r5,0,16,31
	  mr        r30, r3
	  cmpwi     r0, 0x800
	  mr        r31, r4
	  beq-      .loc_0x34
	  b         .loc_0x1F4

	.loc_0x34:
	  mr        r3, r31
	  mr        r4, r30
	  li        r5, 0x14
	  bl        -0x27A4
	  lbz       r0, 0x150(r30)
	  mr        r3, r31
	  lbz       r5, 0x180(r30)
	  li        r4, 0x3
	  rlwimi    r5,r0,8,16,23
	  rlwinm    r5,r5,0,16,31
	  bl        -0x298A90
	  lbz       r3, 0x240(r30)
	  cmplwi    r3, 0x7F
	  ble-      .loc_0x74
	  lfs       f2, -0x1FC(r2)
	  b         .loc_0x8C

	.loc_0x74:
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x1F0(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f0, f1

	.loc_0x8C:
	  lbz       r3, 0x270(r30)
	  cmplwi    r3, 0x7F
	  ble-      .loc_0xA0
	  lfs       f31, -0x1FC(r2)
	  b         .loc_0xB8

	.loc_0xA0:
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f31, f0, f1

	.loc_0xB8:
	  lfs       f0, -0x1FC(r2)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, -0x1
	  fdivs     f1, f2, f0
	  bl        -0x299DF4
	  lfs       f0, -0x1FC(r2)
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, -0x1
	  fdivs     f1, f31, f0
	  bl        -0x299E0C
	  lha       r0, 0x210(r30)
	  li        r4, 0
	  lis       r3, 0x1
	  stb       r0, 0x356(r31)
	  subi      r0, r3, 0x1
	  sth       r4, 0x2A4(r30)
	  stb       r4, 0x2C0(r30)
	  sth       r0, 0x2C2(r30)
	  lwz       r3, 0x2B8(r30)
	  stb       r4, 0x8(r3)
	  lwz       r3, 0x2BC(r30)
	  stb       r4, 0x8(r3)
	  lwz       r3, 0x2B8(r30)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  lwz       r3, 0x2BC(r30)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  li        r4, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x160
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x298
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x31063C

	.loc_0x160:
	  lbz       r0, 0x2C1(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x218
	  li        r0, 0x1
	  stb       r0, 0x2C1(r30)

	.loc_0x180:
	  lwz       r3, 0x3C(r30)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  li        r4, 0
	  bl        0x2064
	  lbz       r3, 0x2A0(r3)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1E0

	.loc_0x1C0:
	  lbz       r3, 0x2A0(r30)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31

	.loc_0x1E0:
	  lha       r0, 0x90(r30)
	  mulli     r0, r0, 0x78
	  add       r0, r3, r0
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1F8

	.loc_0x1F4:
	  li        r3, 0

	.loc_0x1F8:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x218:
	*/
}

/*
 * --INFO--
 * Address:	8033AD38
 * Size:	0001BC
 */
void PSAutoBgm::Module::setTableAddress(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  li        r31, 0
	  lwz       r3, 0x3C(r3)
	  lha       r0, 0x1B0(r30)
	  lwz       r3, 0xC(r3)
	  rlwinm    r0,r0,0,16,31
	  lwz       r3, 0x3C(r3)
	  mulli     r0, r0, 0x3
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0xA8(r3)
	  add       r5, r3, r0
	  lbzx      r3, r3, r0
	  lbz       r0, 0x1(r5)
	  lbz       r5, 0x2(r5)
	  rlwinm    r0,r0,8,0,23
	  rlwimi    r0,r3,16,8,15
	  or        r0, r5, r0
	  stw       r0, 0x2A8(r30)
	  lwz       r3, 0x2A8(r30)
	  lwz       r0, 0xC(r4)
	  add       r0, r3, r0
	  stw       r0, 0x2A8(r30)
	  lwz       r3, 0x3C(r30)
	  lha       r0, 0x1E0(r30)
	  lwz       r3, 0xC(r3)
	  rlwinm    r0,r0,0,16,31
	  lwz       r3, 0x3C(r3)
	  mulli     r0, r0, 0x3
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0xAC(r3)
	  add       r5, r3, r0
	  lbzx      r3, r3, r0
	  lbz       r0, 0x1(r5)
	  lbz       r5, 0x2(r5)
	  rlwinm    r0,r0,8,0,23
	  rlwimi    r0,r3,16,8,15
	  or        r0, r5, r0
	  stw       r0, 0x2B0(r30)
	  lwz       r3, 0x2B0(r30)
	  lwz       r0, 0xC(r4)
	  add       r0, r3, r0
	  stw       r0, 0x2B0(r30)
	  lwz       r29, 0x2A8(r30)
	  lbz       r0, 0x0(r29)
	  lbz       r4, 0x1(r29)
	  lbz       r3, 0x2(r29)
	  b         .loc_0x10C

	.loc_0xCC:
	  addi      r31, r31, 0x1
	  rlwinm    r27,r31,0,24,31
	  cmpwi     r27, 0xFF
	  blt-      .loc_0xF8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x2D6
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x3107EC

	.loc_0xF8:
	  mulli     r0, r27, 0x3
	  add       r3, r29, r0
	  lbz       r0, 0x0(r3)
	  lbz       r4, 0x1(r3)
	  lbz       r3, 0x2(r3)

	.loc_0x10C:
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bne+      .loc_0xCC
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0xFF
	  bne+      .loc_0xCC
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xFF
	  bne+      .loc_0xCC
	  stb       r31, 0x2AC(r30)
	  lis       r4, 0x8049
	  lis       r3, 0x8049
	  li        r28, 0
	  lwz       r27, 0x2B0(r30)
	  subi      r29, r4, 0x1A0
	  subi      r31, r3, 0x190
	  lbz       r0, 0x0(r27)
	  lbz       r3, 0x1(r27)
	  b         .loc_0x18C

	.loc_0x158:
	  addi      r28, r28, 0x1
	  rlwinm    r26,r28,0,24,31
	  cmpwi     r26, 0xFF
	  blt-      .loc_0x17C
	  mr        r3, r29
	  mr        r5, r31
	  li        r4, 0x2EC
	  crclr     6, 0x6
	  bl        -0x310870

	.loc_0x17C:
	  rlwinm    r0,r26,1,0,30
	  add       r3, r27, r0
	  lbz       r0, 0x0(r3)
	  lbz       r3, 0x1(r3)

	.loc_0x18C:
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bne+      .loc_0x158
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xFF
	  bne+      .loc_0x158
	  stb       r28, 0x2B4(r30)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033AEF4
 * Size:	000154
 */
void PSAutoBgm::Module::cycleLoop(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r3, 0x3C(r3)
	  lwz       r3, 0xC(r3)
	  lbz       r4, 0x99(r3)
	  bl        0x1E04
	  cmplw     r3, r31
	  beq-      .loc_0x4C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x30B
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x3108FC

	.loc_0x4C:
	  lwz       r3, 0x3C(r31)
	  lwz       r3, 0xC(r3)
	  lbz       r30, 0x99(r3)
	  bl        0x1BD8
	  rlwinm    r3,r3,0,24,31
	  subi      r0, r3, 0x1
	  cmpw      r30, r0
	  bge-      .loc_0x84
	  lhz       r3, 0x2A4(r31)
	  lha       r0, 0xC0(r31)
	  cmpw      r3, r0
	  blt-      .loc_0x84
	  li        r3, 0x1
	  b         .loc_0x13C

	.loc_0x84:
	  lbz       r4, 0x2C0(r31)
	  rlwinm    r0,r4,2,0,29
	  add       r3, r31, r0
	  lwz       r6, 0x2B8(r3)
	  lbz       r5, 0x38(r6)
	  cmplwi    r5, 0
	  bne-      .loc_0xC4
	  addi      r3, r4, 0x1
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x2C0(r31)
	  cmplwi    r0, 0x2
	  blt-      .loc_0xBC
	  li        r0, 0
	  stb       r0, 0x2C0(r31)

	.loc_0xBC:
	  li        r3, 0x2
	  b         .loc_0x13C

	.loc_0xC4:
	  lbz       r3, 0x8(r6)
	  addi      r3, r3, 0x1
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x8(r6)
	  cmplw     r0, r5
	  ble-      .loc_0xE4
	  li        r0, 0
	  stb       r0, 0x8(r6)

	.loc_0xE4:
	  lbz       r0, 0x8(r6)
	  cmplwi    r0, 0
	  bne-      .loc_0x118
	  lbz       r3, 0x2C0(r31)
	  addi      r3, r3, 0x1
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x2C0(r31)
	  cmplwi    r0, 0x2
	  blt-      .loc_0x110
	  li        r0, 0
	  stb       r0, 0x2C0(r31)

	.loc_0x110:
	  li        r3, 0x2
	  b         .loc_0x13C

	.loc_0x118:
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x138
	  lwz       r0, 0x2B8(r31)
	  cmplw     r6, r0
	  bne-      .loc_0x138
	  li        r3, 0x3
	  b         .loc_0x13C

	.loc_0x138:
	  li        r3, 0

	.loc_0x13C:
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
 * Address:	8033B048
 * Size:	000010
 */
void PSAutoBgm::CycleBase::cycleTop(JASTrack*)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x3C(r3)
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033B058
 * Size:	0001BC
 */
void PSAutoBgm::CycleBase::play(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  lwz       r6, 0x4(r3)
	  lbz       r0, 0x120(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xD0
	  lbz       r5, 0x3C(r30)
	  lbz       r0, 0x2B4(r6)
	  cmplw     r5, r0
	  bne-      .loc_0x48
	  li        r3, 0x4
	  b         .loc_0x1A0

	.loc_0x48:
	  lwz       r4, 0x3C(r6)
	  lwz       r4, 0xC(r4)
	  lwz       r4, 0x19C(r4)
	  cmplwi    r4, 0
	  bne-      .loc_0x9C
	  addi      r0, r5, 0x1
	  rlwinm    r6,r5,1,23,30
	  stb       r0, 0x3C(r30)
	  lwz       r4, 0x4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x2B0(r4)
	  lwz       r12, 0x10(r12)
	  add       r4, r5, r6
	  lbzx      r5, r5, r6
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r5,8,16,23
	  rlwinm    r29,r0,0,16,31
	  mtctr     r12
	  bctrl
	  or        r5, r29, r3
	  b         .loc_0xB4

	.loc_0x9C:
	  addi      r0, r5, 0x1
	  mr        r3, r4
	  stb       r0, 0x3C(r30)
	  lbz       r4, 0x99(r4)
	  bl        0x1C18
	  lhz       r5, 0x2B6(r3)

	.loc_0xB4:
	  lwz       r6, 0x4(r30)
	  mr        r3, r31
	  li        r4, 0x8
	  sth       r5, 0x2B6(r6)
	  bl        -0x299030
	  li        r3, 0x3
	  b         .loc_0x1A0

	.loc_0xD0:
	  lwz       r3, 0x3C(r6)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x178
	  lis       r3, 0x19
	  lwz       r4, -0x67A4(r13)
	  addi      r0, r3, 0x660D
	  lbz       r5, 0x2B4(r6)
	  mullw     r3, r4, r0
	  lis       r0, 0x4330
	  stw       r5, 0x14(r1)
	  lfd       f2, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x1F4(r2)
	  addis     r3, r3, 0x3C6F
	  lfd       f1, 0x10(r1)
	  subi      r3, r3, 0xCA1
	  rlwinm    r0,r3,23,9,31
	  stw       r3, -0x67A4(r13)
	  oris      r0, r0, 0x3F80
	  fsubs     f2, f1, f2
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x4(r30)
	  lfs       f1, 0x8(r1)
	  lwz       r29, 0x2B0(r3)
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0x27964C
	  rlwinm    r0,r3,1,15,30
	  lwz       r12, 0x0(r30)
	  lbzx      r5, r29, r0
	  add       r4, r29, r0
	  lbz       r0, 0x1(r4)
	  mr        r3, r30
	  rlwimi    r0,r5,8,16,23
	  lwz       r12, 0x10(r12)
	  rlwinm    r29,r0,0,16,31
	  mtctr     r12
	  bctrl
	  or        r29, r29, r3
	  b         .loc_0x184

	.loc_0x178:
	  lbz       r4, 0x99(r3)
	  bl        0x1B48
	  lhz       r29, 0x2B6(r3)

	.loc_0x184:
	  mr        r3, r31
	  mr        r5, r29
	  li        r4, 0x8
	  bl        -0x2990FC
	  lwz       r4, 0x4(r30)
	  li        r3, 0x1
	  sth       r29, 0x2B6(r4)

	.loc_0x1A0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033B214
 * Size:	000078
 */
void PSAutoBgm::CycleBase::checkCloser(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lbz       r0, 0x120(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x34
	  lbz       r4, 0x3C(r3)
	  lbz       r0, 0x2B4(r5)
	  cmplw     r4, r0
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x34:
	  lbz       r4, 0x8(r3)
	  lbz       r0, 0x38(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x64
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033B28C
 * Size:	000184
 */
PSAutoBgm::OnCycle::OnCycle(PSAutoBgm::Module*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x804E
	  subi      r3, r3, 0x5410
	  mr        r5, r30
	  mr        r31, r5
	  addi      r26, r31, 0xC
	  stw       r3, 0x0(r30)
	  mr        r3, r26
	  stw       r4, 0x4(r5)
	  stb       r0, 0x8(r5)
	  bl        -0x31E2FC
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r26
	  stw       r3, 0x0(r26)
	  addi      r3, r26, 0x1C
	  stb       r0, 0x18(r26)
	  bl        -0x314B30
	  lis       r3, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r3, 0x52AC
	  addi      r29, r30, 0x40
	  lis       r3, 0x804E
	  stw       r0, 0x0(r26)
	  subi      r0, r3, 0x52C0
	  subi      r5, r4, 0x52D4
	  stw       r0, 0x0(r26)
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5424
	  li        r4, 0
	  stw       r5, 0x0(r26)
	  mr        r3, r29
	  stb       r4, 0x3C(r31)
	  stw       r0, 0x0(r30)
	  bl        -0x314A5C
	  li        r0, 0x2
	  addi      r26, r29, 0x10
	  sth       r0, 0xC(r29)
	  mr        r3, r26
	  bl        -0x314A70
	  li        r0, 0x2
	  li        r3, 0x38
	  sth       r0, 0xC(r26)
	  sth       r0, 0x20(r29)
	  bl        -0x3173A8
	  lis       r4, 0x8034
	  lis       r5, 0x8034
	  subi      r4, r4, 0x2F14
	  li        r6, 0x14
	  subi      r5, r5, 0x4BF0
	  li        r7, 0x2
	  bl        -0x279980
	  lis       r4, 0x1
	  mr        r28, r3
	  subi      r31, r4, 0x1
	  li        r27, 0
	  b         .loc_0x140

	.loc_0xFC:
	  rlwinm    r0,r27,0,24,31
	  mulli     r0, r0, 0x14
	  add       r26, r28, r0
	  sth       r31, 0x10(r26)
	  lwz       r3, 0x8(r29)
	  lhz       r0, 0xC(r29)
	  cmplw     r3, r0
	  blt-      .loc_0x130
	  lwz       r4, 0x0(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x130
	  mr        r3, r29
	  bl        -0x314794

	.loc_0x130:
	  mr        r3, r29
	  mr        r4, r26
	  bl        -0x314AE0
	  addi      r27, r27, 0x1

	.loc_0x140:
	  rlwinm    r0,r27,0,24,31
	  cmpwi     r0, 0x2
	  blt+      .loc_0xFC
	  li        r3, 0x8
	  bl        -0x317430
	  stw       r3, 0x24(r29)
	  li        r0, 0
	  mr        r3, r30
	  lwz       r4, 0x24(r29)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x24(r29)
	  stw       r0, 0x4(r4)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033B410
 * Size:	000058
 */
void PSAutoBgm::PrmLink<unsigned short>::~PrmLink()
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
	  beq-      .loc_0x3C
	  beq-      .loc_0x2C
	  li        r4, 0
	  bl        -0x314C68

	.loc_0x2C:
	  extsh.    r0, r31
	  ble-      .loc_0x3C
	  mr        r3, r30
	  bl        -0x317394

	.loc_0x3C:
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
 * Address:	8033B468
 * Size:	000360
 */
void PSAutoBgm::OnCycle::play(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  lwz       r6, 0x4(r3)
	  lbz       r0, 0x120(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1CC
	  bne-      .loc_0xD4
	  lbz       r5, 0x3C(r30)
	  lbz       r0, 0x2B4(r6)
	  cmplw     r5, r0
	  bne-      .loc_0x4C
	  li        r0, 0x4
	  b         .loc_0x1A4

	.loc_0x4C:
	  lwz       r4, 0x3C(r6)
	  lwz       r4, 0xC(r4)
	  lwz       r4, 0x19C(r4)
	  cmplwi    r4, 0
	  bne-      .loc_0xA0
	  addi      r0, r5, 0x1
	  rlwinm    r6,r5,1,23,30
	  stb       r0, 0x3C(r30)
	  lwz       r4, 0x4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x2B0(r4)
	  lwz       r12, 0x10(r12)
	  add       r4, r5, r6
	  lbzx      r5, r5, r6
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r5,8,16,23
	  rlwinm    r29,r0,0,16,31
	  mtctr     r12
	  bctrl
	  or        r5, r29, r3
	  b         .loc_0xB8

	.loc_0xA0:
	  addi      r0, r5, 0x1
	  mr        r3, r4
	  stb       r0, 0x3C(r30)
	  lbz       r4, 0x99(r4)
	  bl        0x1804
	  lhz       r5, 0x2B6(r3)

	.loc_0xB8:
	  lwz       r6, 0x4(r30)
	  mr        r3, r31
	  li        r4, 0x8
	  sth       r5, 0x2B6(r6)
	  bl        -0x299444
	  li        r0, 0x3
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x3C(r6)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x17C
	  lis       r3, 0x19
	  lwz       r4, -0x67A4(r13)
	  addi      r0, r3, 0x660D
	  lbz       r5, 0x2B4(r6)
	  mullw     r3, r4, r0
	  lis       r0, 0x4330
	  stw       r5, 0x14(r1)
	  lfd       f2, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x1F4(r2)
	  addis     r3, r3, 0x3C6F
	  lfd       f1, 0x10(r1)
	  subi      r3, r3, 0xCA1
	  rlwinm    r0,r3,23,9,31
	  stw       r3, -0x67A4(r13)
	  oris      r0, r0, 0x3F80
	  fsubs     f2, f1, f2
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x4(r30)
	  lfs       f1, 0xC(r1)
	  lwz       r29, 0x2B0(r3)
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0x279A60
	  rlwinm    r0,r3,1,15,30
	  lwz       r12, 0x0(r30)
	  lbzx      r5, r29, r0
	  add       r4, r29, r0
	  lbz       r0, 0x1(r4)
	  mr        r3, r30
	  rlwimi    r0,r5,8,16,23
	  lwz       r12, 0x10(r12)
	  rlwinm    r29,r0,0,16,31
	  mtctr     r12
	  bctrl
	  or        r29, r29, r3
	  b         .loc_0x188

	.loc_0x17C:
	  lbz       r4, 0x99(r3)
	  bl        0x1734
	  lhz       r29, 0x2B6(r3)

	.loc_0x188:
	  mr        r3, r31
	  mr        r5, r29
	  li        r4, 0x8
	  bl        -0x299510
	  lwz       r3, 0x4(r30)
	  li        r0, 0x1
	  sth       r29, 0x2B6(r3)

	.loc_0x1A4:
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1B8
	  li        r3, 0x4
	  b         .loc_0x344

	.loc_0x1B8:
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x360
	  li        r3, 0x2
	  b         .loc_0x344

	.loc_0x1CC:
	  bl        .loc_0x360
	  lwz       r5, 0x4(r30)
	  lbz       r0, 0x120(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x274
	  lbz       r4, 0x3C(r30)
	  lbz       r0, 0x2B4(r5)
	  cmplw     r4, r0
	  beq-      .loc_0x340
	  lwz       r3, 0x3C(r5)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x248
	  addi      r0, r4, 0x1
	  mr        r3, r30
	  stb       r0, 0x3C(r30)
	  rlwinm    r0,r4,1,23,30
	  lwz       r4, 0x4(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r5, 0x2B0(r4)
	  lwz       r12, 0x10(r12)
	  add       r4, r5, r0
	  lbzx      r5, r5, r0
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r5,8,16,23
	  rlwinm    r29,r0,0,16,31
	  mtctr     r12
	  bctrl
	  or        r5, r29, r3
	  b         .loc_0x25C

	.loc_0x248:
	  addi      r0, r4, 0x1
	  stb       r0, 0x3C(r30)
	  lbz       r4, 0x99(r3)
	  bl        0x1660
	  lhz       r5, 0x2B6(r3)

	.loc_0x25C:
	  lwz       r6, 0x4(r30)
	  mr        r3, r31
	  li        r4, 0x8
	  sth       r5, 0x2B6(r6)
	  bl        -0x2995E8
	  b         .loc_0x340

	.loc_0x274:
	  lwz       r3, 0x3C(r5)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x31C
	  lis       r3, 0x19
	  lwz       r4, -0x67A4(r13)
	  addi      r0, r3, 0x660D
	  lbz       r5, 0x2B4(r5)
	  mullw     r3, r4, r0
	  lis       r0, 0x4330
	  stw       r5, 0x14(r1)
	  lfd       f2, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x1F4(r2)
	  addis     r3, r3, 0x3C6F
	  lfd       f1, 0x10(r1)
	  subi      r3, r3, 0xCA1
	  rlwinm    r0,r3,23,9,31
	  stw       r3, -0x67A4(r13)
	  oris      r0, r0, 0x3F80
	  fsubs     f2, f1, f2
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x4(r30)
	  lfs       f1, 0x8(r1)
	  lwz       r29, 0x2B0(r3)
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0x279C00
	  rlwinm    r0,r3,1,15,30
	  lwz       r12, 0x0(r30)
	  lbzx      r5, r29, r0
	  add       r4, r29, r0
	  lbz       r0, 0x1(r4)
	  mr        r3, r30
	  rlwimi    r0,r5,8,16,23
	  lwz       r12, 0x10(r12)
	  rlwinm    r29,r0,0,16,31
	  mtctr     r12
	  bctrl
	  or        r29, r29, r3
	  b         .loc_0x328

	.loc_0x31C:
	  lbz       r4, 0x99(r3)
	  bl        0x1594
	  lhz       r29, 0x2B6(r3)

	.loc_0x328:
	  mr        r3, r31
	  mr        r5, r29
	  li        r4, 0x8
	  bl        -0x2996B0
	  lwz       r3, 0x4(r30)
	  sth       r29, 0x2B6(r3)

	.loc_0x340:
	  li        r3, 0

	.loc_0x344:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x360:
	*/
}

/*
 * --INFO--
 * Address:	8033B7C8
 * Size:	000274
 */
void PSAutoBgm::OnCycle::setTip(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r29, r4
	  mr        r28, r3
	  lwz       r4, 0x4(r3)
	  lwz       r3, 0x3C(r4)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x200
	  lbz       r31, 0x2AC(r4)
	  cmplwi    r31, 0x1
	  ble-      .loc_0x1F8
	  lis       r3, 0x19
	  lwz       r4, -0x67A4(r13)
	  addi      r3, r3, 0x660D
	  lis       r0, 0x4330
	  mullw     r3, r4, r3
	  stw       r31, 0x14(r1)
	  lfd       f2, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x1F4(r2)
	  lfd       f1, 0x10(r1)
	  addis     r3, r3, 0x3C6F
	  fsubs     f2, f1, f2
	  subi      r3, r3, 0xCA1
	  rlwinm    r0,r3,23,9,31
	  stw       r3, -0x67A4(r13)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0xC(r1)
	  lfs       f1, 0xC(r1)
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0x279D08
	  rlwinm    r30,r3,0,16,31
	  mr        r3, r28
	  bl        .loc_0x274
	  mr        r27, r3
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x120
	  cmplw     r0, r30
	  bne-      .loc_0x120
	  lis       r3, 0x19
	  lwz       r4, -0x67A4(r13)
	  addi      r0, r3, 0x660D
	  subi      r3, r31, 0x1
	  mullw     r4, r4, r0
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f2, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x1F4(r2)
	  addis     r3, r4, 0x3C6F
	  lfd       f1, 0x10(r1)
	  subi      r3, r3, 0xCA1
	  rlwinm    r0,r3,23,9,31
	  fsubs     f2, f1, f2
	  oris      r0, r0, 0x3F80
	  stw       r3, -0x67A4(r13)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0x279D84
	  rlwinm    r30,r3,0,16,31
	  rlwinm    r0,r27,0,16,31
	  cmplw     r30, r0
	  blt-      .loc_0x120
	  addi      r30, r30, 0x1

	.loc_0x120:
	  lwz       r27, 0x40(r28)
	  cmplwi    r27, 0
	  beq-      .loc_0x138
	  mr        r4, r27
	  addi      r3, r28, 0x40
	  bl        -0x314CD8

	.loc_0x138:
	  cmplwi    r27, 0
	  bne-      .loc_0x158
	  lwz       r27, 0x50(r28)
	  cmplwi    r27, 0
	  beq-      .loc_0x158
	  mr        r4, r27
	  addi      r3, r28, 0x50
	  bl        -0x314CF8

	.loc_0x158:
	  cmplwi    r27, 0
	  bne-      .loc_0x17C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x12C
	  li        r4, 0x155
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x311300

	.loc_0x17C:
	  lwz       r3, 0x0(r27)
	  li        r31, 0
	  sth       r30, 0x0(r3)
	  lwz       r3, 0x58(r28)
	  lhz       r0, 0x5C(r28)
	  cmplw     r3, r0
	  blt-      .loc_0x1B0
	  lwz       r31, 0x50(r28)
	  cmplwi    r31, 0
	  beq-      .loc_0x1B0
	  mr        r4, r31
	  addi      r3, r28, 0x50
	  bl        -0x314D50

	.loc_0x1B0:
	  mr        r4, r27
	  addi      r3, r28, 0x50
	  bl        -0x31509C
	  cmplwi    r31, 0
	  beq-      .loc_0x20C
	  lwz       r3, 0x48(r28)
	  lhz       r0, 0x4C(r28)
	  cmplw     r3, r0
	  blt-      .loc_0x1E8
	  lwz       r4, 0x40(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x1E8
	  addi      r3, r28, 0x40
	  bl        -0x314D88

	.loc_0x1E8:
	  mr        r4, r31
	  addi      r3, r28, 0x40
	  bl        -0x3150D4
	  b         .loc_0x20C

	.loc_0x1F8:
	  li        r30, 0
	  b         .loc_0x20C

	.loc_0x200:
	  lbz       r4, 0x99(r3)
	  bl        0x1350
	  lhz       r30, 0x2C2(r3)

	.loc_0x20C:
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r30,0,16,31
	  mulli     r0, r0, 0x3
	  mr        r3, r29
	  sth       r30, 0x2C2(r4)
	  li        r4, 0x6
	  lwz       r5, 0x4(r28)
	  lwz       r5, 0x2A8(r5)
	  add       r6, r5, r0
	  lbzx      r5, r5, r0
	  lbz       r0, 0x1(r6)
	  lbz       r6, 0x2(r6)
	  rlwinm    r0,r0,8,0,23
	  rlwimi    r0,r5,16,8,15
	  or        r27, r6, r0
	  rlwinm    r5,r27,16,16,31
	  bl        -0x299928
	  rlwinm    r5,r27,0,16,31
	  mr        r3, r29
	  li        r4, 0x7
	  bl        -0x299938
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x274:
	*/
}

/*
 * --INFO--
 * Address:	8033BA3C
 * Size:	00005C
 */
void PSAutoBgm::OnCycle::historiesAreSameAll()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x58(r3)
	  lhz       r0, 0x60(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x1C
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr

	.loc_0x1C:
	  lwz       r4, 0x50(r3)
	  lwz       r3, 0x0(r4)
	  lwz       r5, 0xC(r4)
	  lhz       r3, 0x0(r3)
	  b         .loc_0x50

	.loc_0x30:
	  lwz       r4, 0x0(r5)
	  lhz       r0, 0x0(r4)
	  cmplw     r3, r0
	  beq-      .loc_0x4C
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr

	.loc_0x4C:
	  lwz       r5, 0xC(r5)

	.loc_0x50:
	  cmplwi    r5, 0
	  bne+      .loc_0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033BA98
 * Size:	0000BC
 */
void PSAutoBgm::OnCycle::avoidCheck()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  lbz       r31, 0x8(r3)
	  lwz       r3, 0x3C(r4)
	  lwz       r30, 0xC(r3)
	  lwz       r3, 0x3C(r30)
	  lbz       r0, 0x98(r30)
	  lwz       r3, 0xC(r3)
	  cmplwi    r0, 0x10
	  lwz       r3, 0xB4(r3)
	  addi      r29, r3, 0x33C
	  blt-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x1E4
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x3114B4

	.loc_0x60:
	  li        r0, 0xFF
	  mr        r3, r29
	  stb       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  stb       r0, 0x9(r1)
	  lbz       r0, 0x98(r30)
	  stb       r0, 0x8(r1)
	  stb       r31, 0x9(r1)
	  bl        0x33C0
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x9C
	  lis       r3, 0x1
	  subi      r3, r3, 0x8000
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r3, 0

	.loc_0xA0:
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
 * Address:	8033BB54
 * Size:	0000B0
 */
PSAutoBgm::OffCycle::OffCycle(PSAutoBgm::Module*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  subi      r3, r5, 0x5410
	  stw       r3, 0x0(r30)
	  addi      r31, r30, 0xC
	  mr        r3, r31
	  stw       r4, 0x4(r30)
	  stb       r0, 0x8(r30)
	  bl        -0x31EBC0
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r31
	  stw       r3, 0x0(r31)
	  addi      r3, r31, 0x1C
	  stb       r0, 0x18(r31)
	  bl        -0x3153F4
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x52AC
	  lis       r4, 0x804E
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  subi      r5, r4, 0x52D4
	  stw       r0, 0x0(r31)
	  li        r4, 0
	  subi      r0, r3, 0x5438
	  mr        r3, r30
	  stw       r5, 0x0(r31)
	  stb       r4, 0x3C(r30)
	  stw       r0, 0x0(r30)
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
 * Address:	8033BC04
 * Size:	00015C
 */
PSAutoBgm::AutoBgm::AutoBgm(const char*, const char*, const JAInter::SoundInfo&,
                            JADUtility::AccessMode, PSSystem::DirectorMgrBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x8049
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r4
	  mr        r4, r5
	  mr        r5, r6
	  mr        r29, r3
	  mr        r6, r8
	  subi      r31, r7, 0x1A0
	  bl        -0x9380
	  lis       r3, 0x804E
	  addi      r28, r29, 0xB8
	  subi      r0, r3, 0x5528
	  stw       r0, 0x10(r29)
	  addi      r3, r28, 0x258
	  stw       r3, 0xB8(r29)
	  bl        -0x281454
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x2811D0
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r4, r4, 0x5474
	  addi      r27, r29, 0x33C
	  stw       r4, 0x4(r28)
	  subi      r5, r3, 0x54B4
	  addi      r7, r4, 0x2C
	  addi      r8, r28, 0x258
	  lwz       r4, 0x0(r28)
	  li        r6, 0
	  addi      r0, r5, 0x30
	  mr        r3, r27
	  stw       r7, 0x0(r4)
	  li        r4, 0
	  lwz       r9, 0x0(r28)
	  sub       r7, r8, r9
	  stw       r7, 0x1C(r9)
	  stw       r6, 0x250(r28)
	  stw       r29, 0x254(r28)
	  stw       r5, 0x4(r28)
	  lwz       r5, 0x0(r28)
	  stw       r0, 0x0(r5)
	  lwz       r5, 0x0(r28)
	  sub       r0, r8, r5
	  stw       r0, 0x1C(r5)
	  stw       r6, 0x338(r29)
	  bl        -0x281AD8
	  lis       r4, 0x804E
	  addi      r3, r27, 0x4
	  subi      r0, r4, 0x54C0
	  stw       r0, 0x0(r27)
	  bl        -0x315408
	  li        r0, 0
	  mr        r3, r30
	  sth       r0, 0x10(r27)
	  stb       r0, 0x12(r27)
	  bl        -0x2713DC
	  addi      r3, r3, 0x1
	  bl        -0x317D48
	  stw       r3, 0x330(r29)
	  mr        r4, r30
	  lwz       r3, 0x330(r29)
	  bl        -0x2714AC
	  lwz       r0, -0x6794(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  addi      r3, r31, 0x74
	  addi      r5, r31, 0x10
	  li        r4, 0x2DE
	  crclr     6, 0x6
	  bl        -0x3116E4

	.loc_0x124:
	  lwz       r0, -0x6794(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  addi      r3, r31, 0
	  addi      r5, r31, 0x10
	  li        r4, 0x477
	  crclr     6, 0x6
	  bl        -0x311704

	.loc_0x144:
	  mr        r3, r29
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033BD60
 * Size:	000078
 */
PSAutoBgm::MeloArrMgr::~MeloArrMgr()
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
	  beq-      .loc_0x5C
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x4
	  subi      r0, r3, 0x54C0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x40
	  addi      r3, r30, 0x4
	  li        r4, 0
	  bl        -0x315534

	.loc_0x40:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x281BAC
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        -0x317D04

	.loc_0x5C:
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
 * Address:	8033BDD8
 * Size:	000154
 */
PSAutoBgm::ConductorMgr::~ConductorMgr()
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
	  beq-      .loc_0x138
	  lis       r3, 0x804E
	  addi      r4, r30, 0x258
	  subi      r3, r3, 0x54B4
	  stw       r3, 0x4(r30)
	  addi      r0, r3, 0x30
	  lwz       r3, 0x0(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x0(r30)
	  sub       r0, r4, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0x114
	  lis       r3, 0x804E
	  subi      r3, r3, 0x5474
	  stw       r3, 0x4(r30)
	  addi      r0, r3, 0x2C
	  lwz       r3, 0x0(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x0(r30)
	  sub       r0, r4, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0x114
	  lis       r4, 0x804A
	  addi      r3, r30, 0x250
	  addi      r4, r4, 0x6788
	  addic.    r0, r30, 0x214
	  stw       r4, 0x4(r30)
	  addi      r0, r4, 0x2C
	  lwz       r4, 0x0(r30)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x0(r30)
	  sub       r0, r3, r4
	  stw       r0, 0x1C(r4)
	  beq-      .loc_0x108
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6738
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x674C
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6760
	  stw       r0, 0x214(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x230
	  addi      r0, r4, 0x6774
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xFC
	  li        r4, 0
	  bl        -0x315700

	.loc_0xFC:
	  addi      r3, r30, 0x214
	  li        r4, 0
	  bl        -0x31EEA8

	.loc_0x108:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x281634

	.loc_0x114:
	  extsh.    r0, r31
	  beq-      .loc_0x128
	  addi      r3, r30, 0x258
	  li        r4, 0
	  bl        -0x2816C0

	.loc_0x128:
	  extsh.    r0, r31
	  ble-      .loc_0x138
	  mr        r3, r30
	  bl        -0x317E58

	.loc_0x138:
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
 * Address:	8033BF2C
 * Size:	00012C
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor,
                                PSAutoBgm::AutoBgm>::~PrmDataMgrNode()
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
	  beq-      .loc_0x110
	  lis       r3, 0x804E
	  addi      r0, r30, 0x258
	  subi      r3, r3, 0x5474
	  stw       r3, 0x4(r30)
	  addi      r4, r3, 0x2C
	  lwz       r3, 0x0(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x0(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0xEC
	  lis       r4, 0x804A
	  addi      r3, r30, 0x250
	  addi      r4, r4, 0x6788
	  addic.    r0, r30, 0x214
	  stw       r4, 0x4(r30)
	  addi      r0, r4, 0x2C
	  lwz       r4, 0x0(r30)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x0(r30)
	  sub       r0, r3, r4
	  stw       r0, 0x1C(r4)
	  beq-      .loc_0xE0
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6738
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xE0
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x674C
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xE0
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6760
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xE0
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x230
	  addi      r0, r4, 0x6774
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xD4
	  li        r4, 0
	  bl        -0x31582C

	.loc_0xD4:
	  addi      r3, r30, 0x214
	  li        r4, 0
	  bl        -0x31EFD4

	.loc_0xE0:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x281760

	.loc_0xEC:
	  extsh.    r0, r31
	  beq-      .loc_0x100
	  addi      r3, r30, 0x258
	  li        r4, 0
	  bl        -0x2817EC

	.loc_0x100:
	  extsh.    r0, r31
	  ble-      .loc_0x110
	  mr        r3, r30
	  bl        -0x317F84

	.loc_0x110:
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
 * Address:	8033C058
 * Size:	000150
 */
void PSAutoBgm::AutoBgm::startSeq()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x91B4
	  mr        r3, r28
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  mr        r3, r28
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r29, 0x0(r3)
	  li        r30, 0
	  lwz       r28, 0x308(r28)
	  lis       r31, 0x4330
	  lfd       f29, -0x1F0(r2)
	  lfs       f30, -0x1FC(r2)
	  lfs       f31, -0x1F8(r2)
	  b         .loc_0x100

	.loc_0x90:
	  mr        r3, r28
	  mr        r4, r30
	  bl        0xE0C
	  stb       r30, 0x98(r3)
	  mr        r3, r28
	  mr        r4, r30
	  bl        0xDFC
	  mr        r4, r3
	  stw       r31, 0x8(r1)
	  lbz       r0, 0x198(r3)
	  mr        r3, r29
	  lbz       r4, 0x98(r4)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f29
	  fdivs     f0, f0, f30
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0xE0
	  fmr       f1, f31
	  b         .loc_0xF4

	.loc_0xE0:
	  lfs       f1, -0x1F4(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xF0
	  b         .loc_0xF4

	.loc_0xF0:
	  fmr       f1, f0

	.loc_0xF4:
	  li        r5, 0
	  bl        -0x287C74
	  addi      r30, r30, 0x1

	.loc_0x100:
	  mr        r3, r28
	  bl        0x9B8
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x90

	.loc_0x118:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033C1A8
 * Size:	000044
 */
void PSAutoBgm::AutoBgm::scene1st(PSSystem::TaskChecker*)
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
	  bl        -0xA218
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x44:
	*/
}

/*
 * --INFO--
 * Address:	8033C1EC
 * Size:	000180
 */
void PSAutoBgm::AutoBgm::loadConductor(PSSystem::TaskChecker*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r31, r4
	  subi      r29, r5, 0x1A0
	  lwz       r0, -0x6794(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  addi      r3, r29, 0x74
	  addi      r5, r29, 0x10
	  li        r4, 0x2DE
	  crclr     6, 0x6
	  bl        -0x311BE8

	.loc_0x40:
	  lwz       r3, -0x6794(r13)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x64
	  addi      r3, r29, 0
	  addi      r5, r29, 0x10
	  li        r4, 0x4A8
	  crclr     6, 0x6
	  bl        -0x311C0C

	.loc_0x64:
	  lwz       r4, 0x330(r26)
	  mr        r3, r28
	  bl        -0x32147C
	  mr.       r30, r3
	  bne-      .loc_0x90
	  lwz       r6, 0x330(r26)
	  addi      r3, r29, 0
	  addi      r5, r29, 0x80
	  li        r4, 0x4AB
	  crclr     6, 0x6
	  bl        -0x311C38

	.loc_0x90:
	  lwz       r0, 0x338(r26)
	  lwz       r3, 0xC(r30)
	  cmplwi    r0, 0
	  addi      r0, r3, 0x1F
	  rlwinm    r27,r0,0,0,26
	  beq-      .loc_0xBC
	  addi      r3, r29, 0
	  addi      r5, r29, 0x10
	  li        r4, 0x4B5
	  crclr     6, 0x6
	  bl        -0x311C64

	.loc_0xBC:
	  mr        r3, r27
	  li        r4, -0x20
	  li        r5, 0
	  bl        -0x318CD4
	  stw       r3, 0x338(r26)
	  lwz       r0, 0x338(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  addi      r3, r29, 0
	  addi      r5, r29, 0x10
	  li        r4, 0x4B7
	  crclr     6, 0x6
	  bl        -0x311C98

	.loc_0xF0:
	  cmplwi    r31, 0
	  mr        r29, r26
	  beq-      .loc_0x118
	  mr        r3, r31
	  bl        -0x24C784
	  lbz       r4, 0x18(r31)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stb       r0, 0x18(r31)
	  bl        -0x24C6BC

	.loc_0x118:
	  lis       r3, 0x8034
	  lhz       r4, 0x0(r30)
	  subi      r7, r3, 0x3C94
	  lwz       r5, 0x338(r26)
	  mr        r3, r28
	  mr        r6, r27
	  mr        r8, r29
	  bl        -0x294B10
	  cmpwi     r3, 0x1
	  bne-      .loc_0x148
	  stw       r31, 0x334(r26)
	  b         .loc_0x16C

	.loc_0x148:
	  cmplwi    r31, 0
	  beq-      .loc_0x16C
	  mr        r3, r31
	  bl        -0x24C7D8
	  lbz       r4, 0x18(r31)
	  mr        r3, r31
	  subi      r0, r4, 0x1
	  stb       r0, 0x18(r31)
	  bl        -0x24C710

	.loc_0x16C:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033C36C
 * Size:	000074
 */
void PSAutoBgm::AutoBgm::loadedCallback(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  addi      r3, r31, 0xB8
	  lwz       r4, 0x338(r4)
	  bl        -0x281A08
	  lwz       r3, 0x338(r31)
	  li        r4, 0
	  bl        -0x318D2C
	  li        r0, 0
	  stw       r0, 0x338(r31)
	  lwz       r31, 0x334(r31)
	  cmplwi    r31, 0
	  beq-      .loc_0x60
	  mr        r3, r31
	  bl        -0x24C84C
	  lbz       r4, 0x18(r31)
	  mr        r3, r31
	  subi      r0, r4, 0x1
	  stb       r0, 0x18(r31)
	  bl        -0x24C784

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033C3E0
 * Size:	000168
 */
void PSAutoBgm::AutoBgm::pauseOn(PSSystem::SeqBase::PauseMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x14C
	  stw       r30, 0x44(r29)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x64
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x51E
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x311E00

	.loc_0x64:
	  mr        r3, r29
	  lwz       r12, 0x10(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r30, 0x2
	  lwz       r3, 0x0(r3)
	  li        r31, 0
	  beq-      .loc_0xD0
	  bge-      .loc_0x9C
	  cmpwi     r30, 0
	  beq-      .loc_0xA8
	  bge-      .loc_0xB0
	  b         .loc_0x11C

	.loc_0x9C:
	  cmpwi     r30, 0x4
	  bge-      .loc_0x11C
	  b         .loc_0xF0

	.loc_0xA8:
	  li        r0, 0x1
	  stw       r0, 0x44(r29)

	.loc_0xB0:
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x287348
	  b         .loc_0x138

	.loc_0xC8:
	  li        r31, 0x1
	  b         .loc_0x138

	.loc_0xD0:
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lbz       r5, 0x48(r29)
	  li        r4, 0x1
	  bl        -0x287368
	  b         .loc_0x138

	.loc_0xE8:
	  li        r31, 0x1
	  b         .loc_0x138

	.loc_0xF0:
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  mr        r3, r29
	  li        r4, 0
	  lwz       r12, 0x10(r29)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x138

	.loc_0x114:
	  li        r31, 0x1
	  b         .loc_0x138

	.loc_0x11C:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x548
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x311ED4

	.loc_0x138:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x14C
	  li        r0, 0x4
	  stw       r0, 0x44(r29)

	.loc_0x14C:
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
 * Address:	8033C548
 * Size:	000020
 */
void PSAutoBgm::AutoBgm::pauseOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xA9E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033C568
 * Size:	000190
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::~PrmSetRc()
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
	  beq-      .loc_0x174
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5310
	  stw       r0, 0x0(r30)
	  b         .loc_0x50

	.loc_0x30:
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  subi      r4, r4, 0xC

	.loc_0x3C:
	  cmplwi    r4, 0
	  beq-      .loc_0x48
	  addi      r4, r4, 0xC

	.loc_0x48:
	  addi      r3, r30, 0x2C
	  bl        -0x315990

	.loc_0x50:
	  lwz       r4, 0x2C(r30)
	  cmplwi    r4, 0
	  mr        r0, r4
	  beq-      .loc_0x64
	  subi      r0, r4, 0xC

	.loc_0x64:
	  cmplwi    r0, 0
	  bne+      .loc_0x30
	  lis       r4, 0x8034
	  lwz       r3, 0x64(r30)
	  subi      r4, r4, 0x6828
	  bl        -0x27AE98
	  addic.    r0, r30, 0x68
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x68
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xC0
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x84
	  addi      r0, r4, 0x6774
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xB4
	  li        r4, 0
	  bl        -0x315E48

	.loc_0xB4:
	  addi      r3, r30, 0x68
	  li        r4, 0
	  bl        -0x31F5F0

	.loc_0xC0:
	  cmplwi    r30, 0
	  beq-      .loc_0x164
	  lis       r3, 0x804A
	  addi      r0, r3, 0x66E0
	  stw       r0, 0x0(r30)
	  b         .loc_0xE0

	.loc_0xD8:
	  addi      r3, r30, 0x1C
	  bl        -0x315A20

	.loc_0xE0:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0xD8
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x144
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x6704
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x144
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x671C
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x144
	  addic.    r0, r30, 0x38
	  beq-      .loc_0x130
	  addi      r3, r30, 0x38
	  li        r4, 0
	  bl        -0x315EC4

	.loc_0x130:
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x144
	  addi      r3, r30, 0x2C
	  li        r4, 0
	  bl        -0x315E40

	.loc_0x144:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0x158
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x315E54

	.loc_0x158:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31F694

	.loc_0x164:
	  extsh.    r0, r31
	  ble-      .loc_0x174
	  mr        r3, r30
	  bl        -0x318624

	.loc_0x174:
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
 * Address:	8033C6F8
 * Size:	0000C4
 */
JADUtility::StrEditBox::~StrEditBox()
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
	  beq-      .loc_0xA8
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5388
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x2C(r30)
	  bl        -0x318650
	  cmplwi    r30, 0
	  beq-      .loc_0x98
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6738
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804A
	  addi      r0, r3, 0x674C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6760
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x315FB0

	.loc_0x8C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31F758

	.loc_0x98:
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x3186E8

	.loc_0xA8:
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
 * Address:	8033C7BC
 * Size:	0000A8
 */
void JADUtility::PrmSlider<short>::~PrmSlider()
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
	  beq-      .loc_0x8C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5374
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5360
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x534C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x70
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x316058

	.loc_0x70:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31F800

	.loc_0x7C:
	  extsh.    r0, r31
	  ble-      .loc_0x8C
	  mr        r3, r30
	  bl        -0x318790

	.loc_0x8C:
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
 * Address:	8033C864
 * Size:	000098
 */
void JADUtility::PrmHio<short>::~PrmHio()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5360
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x534C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x60
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x3160F0

	.loc_0x60:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31F898

	.loc_0x6C:
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x318828

	.loc_0x7C:
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
 * Address:	8033C8FC
 * Size:	000088
 */
void JADUtility::Prm<short>::~Prm()
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
	  beq-      .loc_0x6C
	  lis       r3, 0x804E
	  subi      r0, r3, 0x534C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x50
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x316178

	.loc_0x50:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31F920

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x3188B0

	.loc_0x6C:
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
 * Address:	8033C984
 * Size:	000190
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::~PrmSetRc()
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
	  beq-      .loc_0x174
	  lis       r3, 0x804E
	  subi      r0, r3, 0x53B0
	  stw       r0, 0x0(r30)
	  b         .loc_0x50

	.loc_0x30:
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  subi      r4, r4, 0xC

	.loc_0x3C:
	  cmplwi    r4, 0
	  beq-      .loc_0x48
	  addi      r4, r4, 0xC

	.loc_0x48:
	  addi      r3, r30, 0x2C
	  bl        -0x315DAC

	.loc_0x50:
	  lwz       r4, 0x2C(r30)
	  cmplwi    r4, 0
	  mr        r0, r4
	  beq-      .loc_0x64
	  subi      r0, r4, 0xC

	.loc_0x64:
	  cmplwi    r0, 0
	  bne+      .loc_0x30
	  lis       r4, 0x8034
	  lwz       r3, 0x64(r30)
	  subi      r4, r4, 0x5C50
	  bl        -0x27B2B4
	  addic.    r0, r30, 0x68
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x68
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xC0
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x84
	  addi      r0, r4, 0x6774
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xB4
	  li        r4, 0
	  bl        -0x316264

	.loc_0xB4:
	  addi      r3, r30, 0x68
	  li        r4, 0
	  bl        -0x31FA0C

	.loc_0xC0:
	  cmplwi    r30, 0
	  beq-      .loc_0x164
	  lis       r3, 0x804A
	  addi      r0, r3, 0x66E0
	  stw       r0, 0x0(r30)
	  b         .loc_0xE0

	.loc_0xD8:
	  addi      r3, r30, 0x1C
	  bl        -0x315E3C

	.loc_0xE0:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0xD8
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x144
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x6704
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x144
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x671C
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x144
	  addic.    r0, r30, 0x38
	  beq-      .loc_0x130
	  addi      r3, r30, 0x38
	  li        r4, 0
	  bl        -0x3162E0

	.loc_0x130:
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x144
	  addi      r3, r30, 0x2C
	  li        r4, 0
	  bl        -0x31625C

	.loc_0x144:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0x158
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x316270

	.loc_0x158:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x31FAB0

	.loc_0x164:
	  extsh.    r0, r31
	  ble-      .loc_0x174
	  mr        r3, r30
	  bl        -0x318A40

	.loc_0x174:
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
 * Address:	8033CB14
 * Size:	000008
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::getChildNum()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x94(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033CB1C
 * Size:	000008
 */
u32 JADUtility::PrmSetRc<PSAutoBgm::Track>::getPrmObjHeap() { return 0x0; }

/*
 * --INFO--
 * Address:	8033CB24
 * Size:	000008
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::getChildNum()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x94(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033CB2C
 * Size:	000008
 */
u32 JADUtility::PrmSetRc<PSAutoBgm::Module>::getPrmObjHeap() { return 0x0; }

/*
 * --INFO--
 * Address:	8033CB34
 * Size:	000090
 */
void JADUtility::Prm<short>::save(JSUMemoryOutputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  addi      r4, r1, 0xA
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lha       r0, 0x2C(r3)
	  mr        r3, r29
	  sth       r0, 0xA(r1)
	  bl        -0x31698C
	  li        r30, 0
	  mr        r31, r30
	  b         .loc_0x60

	.loc_0x48:
	  stb       r31, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x3169AC
	  addi      r30, r30, 0x1

	.loc_0x60:
	  lbz       r0, 0x18(r28)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x48
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
 * Address:	8033CBC4
 * Size:	000064
 */
void JADUtility::Prm<short>::load(JSUMemoryInputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  addi      r4, r30, 0x2C
	  bl        -0x316818
	  lbz       r4, 0x18(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	8033CC28
 * Size:	000090
 */
void JADUtility::Prm<unsigned char>::save(JSUMemoryOutputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x1
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  addi      r4, r1, 0x9
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lbz       r0, 0x2C(r3)
	  mr        r3, r29
	  stb       r0, 0x9(r1)
	  bl        -0x316A80
	  li        r30, 0
	  mr        r31, r30
	  b         .loc_0x60

	.loc_0x48:
	  stb       r31, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x316AA0
	  addi      r30, r30, 0x1

	.loc_0x60:
	  lbz       r0, 0x18(r28)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x48
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
 * Address:	8033CCB8
 * Size:	000064
 */
void JADUtility::Prm<unsigned char>::load(JSUMemoryInputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  addi      r4, r30, 0x2C
	  bl        -0x31690C
	  lbz       r4, 0x18(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	8033CD1C
 * Size:	00003C
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::getChild(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x2C
	  rlwinm    r4,r4,0,24,31
	  stw       r0, 0x14(r1)
	  bl        -0x31605C
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r3, 0x0(r3)
	  b         .loc_0x2C

	.loc_0x28:
	  li        r3, 0

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033CD58
 * Size:	000114
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::load(JSUMemoryInputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  mr        r31, r4
	  bl        -0x282760
	  lbz       r0, 0x94(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  mr        r3, r30
	  lwz       r28, -0x77D4(r13)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x319810

	.loc_0x60:
	  lbz       r29, 0x94(r30)
	  mulli     r3, r29, 0x2C4
	  addi      r3, r3, 0x10
	  bl        -0x318E18
	  lis       r4, 0x8034
	  lis       r5, 0x8034
	  subi      r4, r4, 0x61A4
	  mr        r7, r29
	  subi      r5, r5, 0x5C50
	  li        r6, 0x2C4
	  bl        -0x27B3F0
	  mr        r29, r3
	  li        r26, 0
	  b         .loc_0xE8

	.loc_0x98:
	  rlwinm    r0,r26,0,24,31
	  mulli     r0, r0, 0x2C4
	  add       r27, r29, r0
	  addic.    r4, r27, 0x2C
	  beq-      .loc_0xB0
	  addi      r4, r4, 0xC

	.loc_0xB0:
	  addi      r3, r30, 0x2C
	  bl        -0x316528
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  mr        r4, r31
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r26, r26, 0x1

	.loc_0xE8:
	  lbz       r0, 0x94(r30)
	  rlwinm    r3,r26,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x98
	  mr        r3, r28
	  bl        -0x3198B0

	.loc_0x100:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033CE6C
 * Size:	000090
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::PrmSetRc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        -0x282924
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r3, r3, 0x53B0
	  addi      r30, r31, 0x68
	  stw       r3, 0x0(r31)
	  mr        r3, r30
	  stw       r0, 0x64(r31)
	  bl        -0x31FEDC
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x316710
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x52AC
	  mr        r3, r31
	  stw       r4, 0x0(r30)
	  stb       r0, 0x2C(r30)
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
 * Address:	8033CEFC
 * Size:	00003C
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::getChild(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x2C
	  rlwinm    r4,r4,0,24,31
	  stw       r0, 0x14(r1)
	  bl        -0x31623C
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r3, 0x0(r3)
	  b         .loc_0x2C

	.loc_0x28:
	  li        r3, 0

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033CF38
 * Size:	000114
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::load(JSUMemoryInputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  mr        r31, r4
	  bl        -0x282940
	  lbz       r0, 0x94(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  mr        r3, r30
	  lwz       r28, -0x77D4(r13)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x3199F0

	.loc_0x60:
	  lbz       r29, 0x94(r30)
	  mulli     r3, r29, 0x1A0
	  addi      r3, r3, 0x10
	  bl        -0x318FF8
	  lis       r4, 0x8034
	  lis       r5, 0x8034
	  subi      r4, r4, 0x6B08
	  mr        r7, r29
	  subi      r5, r5, 0x6828
	  li        r6, 0x1A0
	  bl        -0x27B5D0
	  mr        r29, r3
	  li        r26, 0
	  b         .loc_0xE8

	.loc_0x98:
	  rlwinm    r0,r26,0,24,31
	  mulli     r0, r0, 0x1A0
	  add       r27, r29, r0
	  addic.    r4, r27, 0x2C
	  beq-      .loc_0xB0
	  addi      r4, r4, 0xC

	.loc_0xB0:
	  addi      r3, r30, 0x2C
	  bl        -0x316708
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  mr        r4, r31
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r26, r26, 0x1

	.loc_0xE8:
	  lbz       r0, 0x94(r30)
	  rlwinm    r3,r26,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x98
	  mr        r3, r28
	  bl        -0x319A90

	.loc_0x100:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D04C
 * Size:	000090
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::PrmSetRc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        -0x282B04
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r3, r3, 0x5310
	  addi      r30, r31, 0x68
	  stw       r3, 0x0(r31)
	  mr        r3, r30
	  stw       r0, 0x64(r31)
	  bl        -0x3200BC
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x3168F0
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x52AC
	  mr        r3, r31
	  stw       r4, 0x0(r30)
	  stb       r0, 0x2C(r30)
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
 * Address:	8033D0DC
 * Size:	000008
 */
u32 PSAutoBgm::CycleBase::avoidCheck() { return 0x0; }

/*
 * --INFO--
 * Address:	8033D0E4
 * Size:	000008
 */
u32 PSAutoBgm::CycleBase::getCycleType() { return 0x1; }

/*
 * --INFO--
 * Address:	8033D0EC
 * Size:	000034
 */
void PSAutoBgm::PrmLink<unsigned short>::PrmLink()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r4, r31, 0x10
	  bl        -0x31694C
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
 * Address:	8033D120
 * Size:	0001C4
 */
PSAutoBgm::AutoBgm::~AutoBgm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr.       r30, r3
	  stw       r29, 0x14(r1)
	  beq-      .loc_0x1A4
	  lis       r3, 0x804E
	  li        r4, 0
	  subi      r0, r3, 0x5528
	  stw       r0, 0x10(r30)
	  lwz       r3, 0x338(r30)
	  bl        -0x319AEC
	  addic.    r0, r30, 0x33C
	  beq-      .loc_0x6C
	  lis       r4, 0x804E
	  addic.    r3, r30, 0x340
	  subi      r0, r4, 0x54C0
	  stw       r0, 0x33C(r30)
	  beq-      .loc_0x60
	  li        r4, 0
	  bl        -0x316914

	.loc_0x60:
	  addi      r3, r30, 0x33C
	  li        r4, 0
	  bl        -0x282F8C

	.loc_0x6C:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0x174
	  lis       r3, 0x804E
	  addi      r4, r30, 0x310
	  subi      r3, r3, 0x54B4
	  addic.    r0, r30, 0xB8
	  stw       r3, 0xBC(r30)
	  addi      r0, r3, 0x30
	  lwz       r3, 0xB8(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0xB8(r30)
	  sub       r0, r4, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0x168
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xB8
	  subi      r3, r3, 0x5474
	  stw       r3, 0xBC(r30)
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xB8(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0xB8(r30)
	  sub       r0, r4, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0x168
	  lis       r3, 0x804A
	  addi      r0, r30, 0x308
	  addi      r3, r3, 0x6788
	  addic.    r29, r30, 0x2CC
	  stw       r3, 0xBC(r30)
	  addi      r4, r3, 0x2C
	  lwz       r3, 0xB8(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0xB8(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0x15C
	  lis       r3, 0x804A
	  cmplwi    r29, 0
	  addi      r0, r3, 0x6738
	  stw       r0, 0x2CC(r30)
	  beq-      .loc_0x15C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x674C
	  stw       r0, 0x2CC(r30)
	  beq-      .loc_0x15C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6760
	  stw       r0, 0x2CC(r30)
	  beq-      .loc_0x15C
	  lis       r4, 0x804A
	  addic.    r3, r29, 0x1C
	  addi      r0, r4, 0x6774
	  stw       r0, 0x2CC(r30)
	  beq-      .loc_0x150
	  li        r4, 0
	  bl        -0x316A9C

	.loc_0x150:
	  mr        r3, r29
	  li        r4, 0
	  bl        -0x320244

	.loc_0x15C:
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0x2829D0

	.loc_0x168:
	  addi      r3, r30, 0x310
	  li        r4, 0
	  bl        -0x282A54

	.loc_0x174:
	  cmplwi    r30, 0
	  beq-      .loc_0x194
	  lis       r4, 0x804E
	  mr        r3, r30
	  subi      r0, r4, 0x5AA4
	  li        r4, 0
	  stw       r0, 0x10(r30)
	  bl        -0xB158

	.loc_0x194:
	  extsh.    r0, r31
	  ble-      .loc_0x1A4
	  mr        r3, r30
	  bl        -0x31920C

	.loc_0x1A4:
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
 * Address:	8033D2E4
 * Size:	000008
 */
u32 PSAutoBgm::AutoBgm::getCastType() { return 0x3; }

/*
 * --INFO--
 * Address:	8033D2EC
 * Size:	000088
 */
void PSAutoBgm::AutoBgm::newSeqTrackRoot()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x2C8
	  stw       r30, 0x8(r1)
	  bl        -0x319464
	  mr.       r0, r3
	  beq-      .loc_0x6C
	  mr        r30, r0
	  bl        0x4FF4
	  lis       r4, 0x804E
	  addi      r3, r31, 0xB8
	  subi      r4, r4, 0x54DC
	  addic.    r0, r31, 0xB8
	  stw       r4, 0x0(r30)
	  stw       r3, 0x2C4(r30)
	  bne-      .loc_0x68
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x12C
	  li        r4, 0x2F3
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x312D10

	.loc_0x68:
	  mr        r0, r30

	.loc_0x6C:
	  mr        r3, r0
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
 * Address:	8033D374
 * Size:	0000D0
 */
void PSAutoBgm::AutoBgmSeqTrackRoot::beatUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0x553C
	  lwz       r3, 0x2C4(r31)
	  lwz       r30, 0x250(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0x48
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x12C
	  li        r4, 0x2F8
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x312D78

	.loc_0x48:
	  lbz       r0, 0x3C(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB4
	  lwz       r3, 0xB0(r30)
	  li        r31, 0
	  addi      r0, r3, 0x1
	  stw       r0, 0xB0(r30)
	  b         .loc_0x94

	.loc_0x68:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x4E8
	  lbz       r4, 0x99(r3)
	  cmplwi    r4, 0xFF
	  beq-      .loc_0x90
	  bl        -0x6D8
	  lhz       r4, 0x2A4(r3)
	  addi      r0, r4, 0x1
	  sth       r0, 0x2A4(r3)

	.loc_0x90:
	  addi      r31, r31, 0x1

	.loc_0x94:
	  mr        r3, r30
	  bl        -0x8F8
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x68
	  lbz       r3, 0x114(r30)
	  b         .loc_0xB8

	.loc_0xB4:
	  lbz       r3, 0x114(r30)

	.loc_0xB8:
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
 * Address:	8033D444
 * Size:	000008
 */
void PSAutoBgm::ConductorMgr::getSaveTempHeap()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6798(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D44C
 * Size:	000008
 */
void PSAutoBgm::ConductorMgr::getObjHeap()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6798(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D454
 * Size:	000008
 */
void PSAutoBgm::ConductorMgr::getDataHeap()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6798(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D45C
 * Size:	000008
 */
u32 PSAutoBgm::OnCycle::getCycleType() { return 0x0; }

/*
 * --INFO--
 * Address:	8033D464
 * Size:	000008
 */
void PSAutoBgm::Conductor::getEraseLink()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x98
	  blr
	*/
}

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033D46C
 * Size:	000004
 */
void SeqTrackRoot::onBeatTop() { }

/*
 * --INFO--
 * Address:	8033D470
 * Size:	0001A4
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor,
                                PSAutoBgm::AutoBgm>::initInstance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r0, 0x250(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  li        r3, 0x11C
	  li        r5, 0
	  bl        -0x319578
	  mr.       r31, r3
	  beq-      .loc_0x174
	  lwz       r29, 0x254(r30)
	  bl        -0x47C
	  lis       r3, 0x804E
	  mr        r4, r31
	  subi      r0, r3, 0x5338
	  addi      r3, r31, 0x98
	  stw       r0, 0x0(r31)
	  bl        -0x316D28
	  li        r0, 0
	  addi      r28, r31, 0xB8
	  stw       r0, 0xA8(r31)
	  mr        r3, r28
	  stw       r0, 0xAC(r31)
	  stw       r0, 0xB0(r31)
	  stw       r29, 0xB4(r31)
	  bl        -0x320534
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r28
	  stw       r3, 0x0(r28)
	  addi      r3, r28, 0x1C
	  stb       r0, 0x18(r28)
	  bl        -0x316D68
	  lis       r3, 0x804E
	  addi      r29, r31, 0xE8
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r28)
	  mr        r3, r29
	  bl        -0x320584
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x316DB8
	  lis       r3, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x0(r29)
	  subi      r0, r4, 0x52C0
	  lis       r3, 0x804E
	  addi      r4, r31, 0x104
	  stw       r0, 0x0(r29)
	  subi      r5, r3, 0x52E8
	  li        r0, 0x64
	  addi      r3, r31, 0x1C
	  stw       r5, 0x0(r29)
	  stb       r0, 0x118(r31)
	  bl        -0x316CC4
	  addi      r4, r31, 0xD4
	  addi      r3, r31, 0x1C
	  bl        -0x316CD0
	  addi      r4, r31, 0x84
	  addi      r3, r31, 0x1C
	  bl        -0x316CDC
	  li        r0, 0x11
	  lis       r3, 0x8034
	  stb       r0, 0x19(r31)
	  subi      r0, r3, 0x6D4C
	  lbz       r3, 0xE4(r31)
	  stb       r3, 0x118(r31)
	  stw       r0, 0x5C(r31)
	  stw       r31, 0x60(r31)

	.loc_0x174:
	  stw       r31, 0x250(r30)
	  li        r3, 0x1
	  b         .loc_0x184

	.loc_0x180:
	  li        r3, 0

	.loc_0x184:
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
 * Address:	8033D614
 * Size:	0000E8
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor,
                                PSAutoBgm::AutoBgm>::initInstance(void*, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r4, 0x30
	  li        r6, 0
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x64
	  addi      r5, r5, 0x40
	  stw       r0, 0x8(r1)
	  lis       r4, 0x804A
	  addi      r0, r4, 0x80
	  addi      r3, r1, 0x8
	  stw       r5, 0x8(r1)
	  mr        r4, r30
	  mr        r5, r31
	  stb       r6, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x316938
	  lwz       r3, 0x250(r29)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r3, 0x80
	  addi      r3, r1, 0x8
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x40
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x317358
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r3, 0

	.loc_0xCC:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D6FC
 * Size:	000014
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm>::@600
    @28 @__dt()
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x258
	  b         -0x17E0
	*/
}

} // namespace PSSystem

/*
 * --INFO--
 * Address:	8033D710
 * Size:	000014
 */
void JADUtility::DataMgrNode::@600 @28 @init()
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x258
	  b         -0x282588
	*/
}

/*
 * --INFO--
 * Address:	8033D724
 * Size:	000014
 */
PSAutoBgm::ConductorMgr::@600 @28 @~ConductorMgr()
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x258
	  b         -0x195C
	*/
}
