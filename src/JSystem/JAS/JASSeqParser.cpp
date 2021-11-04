#include "types.h"

/*
 * --INFO--
 * Address:	8009CAB8
 * Size:	000058
 */
void JASSeqParser::cmdOpenTrack(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r3, r30
	  lwz       r0, 0x0(r5)
	  lwz       r31, 0x4(r5)
	  rlwinm    r4,r0,0,28,31
	  rlwinm    r5,r0,26,30,31
	  bl        0x4A78
	  lwz       r4, 0xC(r30)
	  mr        r5, r31
	  bl        0x4A28
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CB10
 * Size:	000068
 */
void JASSeqParser::cmdOpenTrackBros(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, 0x2F8(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x2C:
	  lwz       r0, 0x0(r5)
	  lwz       r31, 0x4(r5)
	  rlwinm    r4,r0,0,28,31
	  rlwinm    r5,r0,26,30,31
	  bl        0x4A10
	  lwz       r4, 0xC(r30)
	  mr        r5, r31
	  bl        0x49C0
	  li        r3, 0

	.loc_0x50:
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
 * Address:	8009CB78
 * Size:	000108
 */
void JASSeqParser::cmdCall(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r3
	  mr        r30, r4
	  addi      r31, r30, 0xC
	  lwz       r3, 0x10(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r4)
	  lbz       r28, 0x0(r3)
	  rlwinm.   r0,r28,0,24,24
	  beq-      .loc_0xA4
	  lwz       r4, 0x4(r31)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r4)
	  bl        0x4C4C
	  rlwinm.   r0,r28,0,25,25
	  rlwinm    r27,r3,0,16,31
	  beq-      .loc_0xB0
	  rlwinm.   r0,r28,0,26,26
	  beq-      .loc_0x80
	  lwz       r4, 0x4(r31)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r4)
	  bl        0x4C20
	  rlwinm    r4,r3,0,16,31
	  b         .loc_0x8C

	.loc_0x80:
	  mr        r3, r31
	  bl        -0x188
	  mr        r4, r3

	.loc_0x8C:
	  mulli     r0, r27, 0x3
	  mr        r3, r31
	  add       r4, r4, r0
	  bl        -0x224
	  mr        r27, r3
	  b         .loc_0xB0

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x1AC
	  mr        r27, r3

	.loc_0xB0:
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r28
	  bl        0x1498
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lwz       r4, 0xC(r31)
	  lwz       r5, 0x4(r31)
	  addi      r3, r4, 0x1
	  rlwinm    r0,r4,2,0,29
	  stw       r3, 0xC(r31)
	  add       r3, r31, r0
	  stw       r5, 0x10(r3)
	  lwz       r0, 0x0(r31)
	  add       r0, r0, r27
	  stw       r0, 0x4(r31)

	.loc_0xF0:
	  lmw       r27, 0xC(r1)
	  li        r3, 0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CC80
 * Size:	000084
 */
void JASSeqParser::cmdRet(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r0, 0x0(r5)
	  rlwinm    r5,r0,0,24,31
	  bl        0x1430
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  addi      r4, r31, 0xC
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x40
	  li        r5, 0
	  b         .loc_0x5C

	.loc_0x40:
	  subi      r3, r3, 0x1
	  li        r5, 0x1
	  rlwinm    r0,r3,2,0,29
	  stw       r3, 0xC(r4)
	  add       r3, r4, r0
	  lwz       r0, 0x10(r3)
	  stw       r0, 0x4(r4)

	.loc_0x5C:
	  rlwinm.   r0,r5,0,24,31
	  bne-      .loc_0x6C
	  li        r3, 0x3
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

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
 * Address:	8009CD04
 * Size:	000144
 */
void JASSeqParser::cmdJmp(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  mr        r27, r4
	  li        r29, 0
	  addi      r31, r27, 0xC
	  li        r28, 0
	  lwz       r3, 0x10(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r4)
	  lbz       r30, 0x0(r3)
	  rlwinm.   r0,r30,0,24,24
	  beq-      .loc_0xE0
	  lwz       r3, 0x4(r31)
	  rlwinm.   r0,r30,0,25,25
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r3)
	  beq-      .loc_0xAC
	  mr        r3, r27
	  bl        0x4AB0
	  rlwinm.   r0,r30,0,26,26
	  rlwinm    r25,r3,0,16,31
	  beq-      .loc_0x88
	  lwz       r4, 0x4(r31)
	  mr        r3, r27
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r4)
	  bl        0x4A8C
	  rlwinm    r4,r3,0,16,31
	  b         .loc_0x94

	.loc_0x88:
	  mr        r3, r31
	  bl        -0x31C
	  mr        r4, r3

	.loc_0x94:
	  mulli     r0, r25, 0x3
	  mr        r3, r31
	  add       r4, r4, r0
	  bl        -0x3B8
	  mr        r25, r3
	  b         .loc_0xEC

	.loc_0xAC:
	  cmplwi    r4, 0x28
	  blt-      .loc_0xD0
	  cmplwi    r4, 0x2B
	  bgt-      .loc_0xD0
	  mr        r3, r27
	  bl        0x49B4
	  li        r29, 0x1
	  mr        r28, r3
	  b         .loc_0xEC

	.loc_0xD0:
	  mr        r3, r27
	  bl        0x49A0
	  mr        r25, r3
	  b         .loc_0xEC

	.loc_0xE0:
	  mr        r3, r31
	  bl        -0x374
	  mr        r25, r3

	.loc_0xEC:
	  mr        r3, r26
	  mr        r4, r27
	  mr        r5, r30
	  bl        0x12D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x120
	  mr        r3, r31
	  mr        r4, r28
	  li        r5, 0
	  bl        -0x564
	  b         .loc_0x12C

	.loc_0x120:
	  lwz       r0, 0x0(r31)
	  add       r0, r0, r25
	  stw       r0, 0x4(r31)

	.loc_0x12C:
	  lmw       r25, 0x14(r1)
	  li        r3, 0
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CE48
 * Size:	00003C
 */
void JASSeqParser::cmdLoopS(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x18(r4)
	  addi      r7, r4, 0xC
	  lwz       r6, 0x0(r5)
	  li        r3, 0
	  lwz       r5, 0x10(r4)
	  rlwinm    r0,r0,2,0,29
	  add       r4, r7, r0
	  stw       r5, 0x10(r4)
	  lwz       r5, 0xC(r7)
	  addi      r4, r5, 0x1
	  rlwinm    r0,r5,1,0,30
	  stw       r4, 0xC(r7)
	  add       r4, r7, r0
	  sth       r6, 0x30(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CE84
 * Size:	000028
 */
void JASSeqParser::cmdLoopE(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r4, 0xC
	  stw       r0, 0x14(r1)
	  bl        -0x5C8
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CEAC
 * Size:	000058
 */
void JASSeqParser::cmdReadPort(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r3, r30
	  lwz       r4, 0x0(r5)
	  bl        0x51D4
	  lwz       r0, 0x4(r31)
	  mr        r5, r3
	  mr        r3, r30
	  rlwinm    r4,r0,0,24,31
	  bl        0x4B40
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CF04
 * Size:	000034
 */
void JASSeqParser::cmdWritePort(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x4(r5)
	  lwz       r4, 0x0(r5)
	  rlwinm    r5,r0,0,16,31
	  bl        0x51A8
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CF38
 * Size:	000038
 */
void JASSeqParser::cmdParentWritePort(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x0(r5)
	  lwz       r0, 0x4(r5)
	  lwz       r3, 0x2F8(r4)
	  rlwinm    r4,r6,0,28,31
	  rlwinm    r5,r0,0,16,31
	  bl        0x5194
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CF70
 * Size:	000044
 */
void JASSeqParser::cmdChildWritePort(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x0(r5)
	  lwz       r0, 0x4(r5)
	  rlwinm    r3,r6,30,26,29
	  rlwinm    r5,r6,0,28,31
	  add       r3, r4, r3
	  lwz       r3, 0x2FC(r3)
	  mr        r4, r5
	  rlwinm    r5,r0,0,16,31
	  bl        0x5150
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CFB4
 * Size:	000018
 */
void JASSeqParser::cmdCheckPortImport(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  li        r3, 0
	  add       r5, r4, r0
	  lbz       r0, 0x54(r5)
	  sth       r0, 0x26E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CFCC
 * Size:	000018
 */
void JASSeqParser::cmdCheckPortExport(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  li        r3, 0
	  add       r5, r4, r0
	  lbz       r0, 0x64(r5)
	  sth       r0, 0x26E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CFE4
 * Size:	000018
 */
void JASSeqParser::cmdWait(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x0(r5)
	  neg       r0, r3
	  stw       r3, 0x14(r4)
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009CFFC
 * Size:	000048
 */
void JASSeqParser::cmdSetLastNote(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r3, r30
	  lwz       r31, 0x0(r5)
	  bl        0x5410
	  add       r31, r31, r3
	  li        r3, 0
	  stb       r31, 0xE5(r30)
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
 * Address:	8009D044
 * Size:	00001C
 */
void JASSeqParser::cmdTimeRelate(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r5)
	  li        r3, 0
	  neg       r0, r5
	  or        r0, r0, r5
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x364(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D060
 * Size:	000030
 */
void JASSeqParser::cmdSimpleOsc(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r5)
	  rlwinm    r4,r0,0,24,31
	  bl        0x2BCC
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D090
 * Size:	000034
 */
void JASSeqParser::cmdSimpleEnv(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r5)
	  lwz       r5, 0x4(r5)
	  rlwinm    r4,r0,0,24,31
	  bl        0x2B28
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D0C4
 * Size:	000070
 */
void JASSeqParser::cmdSimpleADSR(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r0, r4, 0x2E0
	  subi      r8, r3, 0x7420
	  lwz       r6, 0x0(r8)
	  li        r3, 0
	  lfs       f0, 0x4(r8)
	  stw       r6, 0x2A8(r4)
	  lwz       r7, 0x8(r8)
	  stfs      f0, 0x2AC(r4)
	  lwz       r6, 0xC(r8)
	  stw       r7, 0x2B0(r4)
	  lfs       f1, 0x10(r8)
	  stw       r6, 0x2B4(r4)
	  lfs       f0, 0x14(r8)
	  stfs      f1, 0x2B8(r4)
	  stfs      f0, 0x2BC(r4)
	  stw       r0, 0x2B0(r4)
	  lwz       r0, 0x0(r5)
	  sth       r0, 0x2E2(r4)
	  lwz       r0, 0x4(r5)
	  sth       r0, 0x2E8(r4)
	  lwz       r0, 0x8(r5)
	  sth       r0, 0x2EE(r4)
	  lwz       r0, 0xC(r5)
	  sth       r0, 0x2F0(r4)
	  lwz       r0, 0x10(r5)
	  sth       r0, 0x350(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D134
 * Size:	000010
 */
void JASSeqParser::cmdTranspose(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  li        r3, 0
	  stb       r0, 0x356(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D144
 * Size:	000054
 */
void JASSeqParser::cmdCloseTrack(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,2,22,29
	  add       r31, r4, r0
	  lwz       r3, 0x2FC(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x40

	.loc_0x30:
	  bl        0x3F1C
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x2FC(r31)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D198
 * Size:	000054
 */
void JASSeqParser::cmdOutSwitch(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x33C(r4)
	  cmplwi    r31, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x0(r5)
	  mr        r3, r31
	  rlwinm    r4,r0,0,16,31
	  bl        -0xD64
	  lis       r4, 0x1
	  mr        r3, r31
	  subi      r4, r4, 0x1
	  bl        -0xD50

	.loc_0x3C:
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
 * Address:	8009D1EC
 * Size:	00002C
 */
void JASSeqParser::cmdUpdateSync(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x0(r5)
	  bl        0x2FF0
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D218
 * Size:	000030
 */
void JASSeqParser::cmdBusConnect(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x0(r5)
	  lwz       r5, 0x4(r5)
	  bl        0x2574
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D248
 * Size:	000010
 */
void JASSeqParser::cmdPauseStatus(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  li        r3, 0
	  stb       r0, 0x358(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D258
 * Size:	000010
 */
void JASSeqParser::cmdVolumeMode(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  li        r3, 0
	  stb       r0, 0x359(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D268
 * Size:	000038
 */
void JASSeqParser::cmdSetInterrupt(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r4, 0x94
	  stw       r0, 0x14(r1)
	  lwz       r6, 0xC(r4)
	  lwz       r0, 0x4(r5)
	  lwz       r4, 0x0(r5)
	  add       r5, r6, r0
	  bl        0x57D8
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D2A0
 * Size:	00002C
 */
void JASSeqParser::cmdDisInterrupt(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r4, 0x94
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x0(r5)
	  bl        0x57D0
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D2CC
 * Size:	000018
 */
void JASSeqParser::cmdClrI(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x94(r4)
	  li        r3, 0
	  stw       r0, 0x50(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D2E4
 * Size:	000010
 */
void JASSeqParser::cmdSetI(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x94(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D2F4
 * Size:	000050
 */
void JASSeqParser::cmdRetI(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  addi      r3, r31, 0xC
	  stb       r0, 0x94(r4)
	  bl        -0x974
	  mr        r3, r31
	  bl        0x2354
	  lwz       r3, 0x14(r31)
	  lwz       r31, 0xC(r1)
	  neg       r0, r3
	  andc      r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D344
 * Size:	00001C
 */
void JASSeqParser::cmdIntTimer(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  li        r3, 0
	  lwz       r5, 0x4(r5)
	  stb       r0, 0x97(r4)
	  stw       r5, 0x98(r4)
	  stw       r5, 0x9C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D360
 * Size:	000058
 */
void JASSeqParser::cmdSyncCPU(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x1
	  stw       r0, 0x14(r1)
	  subi      r3, r3, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r12, -0x7590(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x0(r5)
	  mr        r3, r31
	  rlwinm    r4,r0,0,16,31
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  sth       r3, 0x26E(r31)
	  li        r3, 0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D3B8
 * Size:	000008
 */
u32 JASSeqParser::cmdFlushAll(JASTrack*, unsigned long*) { return 0x0; }

/*
 * --INFO--
 * Address:	8009D3C0
 * Size:	000008
 */
u32 JASSeqParser::cmdFlushRelease(JASTrack*, unsigned long*) { return 0x0; }

/*
 * --INFO--
 * Address:	8009D3C8
 * Size:	000030
 */
void JASSeqParser::cmdTimeBase(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r5)
	  rlwinm    r4,r0,0,16,31
	  bl        0x51F8
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D3F8
 * Size:	000030
 */
void JASSeqParser::cmdTempo(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r5)
	  rlwinm    r4,r0,0,16,31
	  bl        0x518C
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D428
 * Size:	000008
 */
u32 JASSeqParser::cmdFinish(JASTrack*, unsigned long*) { return 0x3; }

/*
 * --INFO--
 * Address:	8009D430
 * Size:	000008
 */
u32 JASSeqParser::cmdNop(JASTrack*, unsigned long*) { return 0x0; }

/*
 * --INFO--
 * Address:	8009D438
 * Size:	000084
 */
void JASSeqParser::cmdPanPowSet(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r0, 0x4330
	  lfd       f1, -0x7628(r2)
	  li        r3, 0
	  lwz       r6, 0x0(r5)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x7630(r2)
	  sth       r6, 0x278(r4)
	  lwz       r6, 0x4(r5)
	  stw       r0, 0x18(r1)
	  sth       r6, 0x27A(r4)
	  lwz       r0, 0x8(r5)
	  sth       r0, 0x27C(r4)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  sth       r0, 0x27E(r4)
	  lwz       r0, 0x10(r5)
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  sth       r0, 0x280(r4)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D4BC
 * Size:	000034
 */
void JASSeqParser::cmdFIRSet(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0xC(r4)
	  lwz       r0, 0x0(r5)
	  lwz       r3, 0x33C(r4)
	  add       r4, r6, r0
	  bl        -0xF80
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D4F0
 * Size:	000054
 */
void JASSeqParser::cmdEXTSet(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r0, 0x0(r5)
	  lwz       r3, 0xC(r4)
	  add       r31, r3, r0
	  mr        r3, r31
	  bl        -0x10CC
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x21AC
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D544
 * Size:	0000F8
 */
void JASSeqParser::cmdPanSwSet(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r3, 0
	  stw       r31, 0x1C(r1)
	  addi      r7, r1, 0x10
	  addi      r6, r1, 0x8
	  lwz       r31, -0x7620(r2)
	  lhz       r12, -0x761C(r2)
	  lbz       r11, -0x761A(r2)
	  lwz       r0, 0x0(r5)
	  lwz       r10, -0x7618(r2)
	  lhz       r9, -0x7614(r2)
	  rlwinm    r0,r0,27,5,31
	  lbz       r8, -0x7612(r2)
	  stw       r31, 0x10(r1)
	  sth       r12, 0x14(r1)
	  stb       r11, 0x16(r1)
	  lbzx      r0, r7, r0
	  stw       r10, 0x8(r1)
	  stb       r0, 0x35C(r4)
	  lwz       r0, 0x0(r5)
	  sth       r9, 0xC(r1)
	  rlwinm    r0,r0,27,5,31
	  stb       r8, 0xE(r1)
	  lbzx      r0, r6, r0
	  stb       r0, 0x35F(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,0,27,31
	  stb       r0, 0x13E(r4)
	  lwz       r0, 0x34C(r4)
	  ori       r0, r0, 0x1C
	  stw       r0, 0x34C(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,27,5,31
	  lbzx      r0, r7, r0
	  stb       r0, 0x35D(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,27,5,31
	  lbzx      r0, r6, r0
	  stb       r0, 0x360(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,0,27,31
	  stb       r0, 0x13F(r4)
	  lwz       r0, 0x34C(r4)
	  ori       r0, r0, 0x1C
	  stw       r0, 0x34C(r4)
	  lwz       r0, 0x8(r5)
	  rlwinm    r0,r0,27,5,31
	  lbzx      r0, r7, r0
	  stb       r0, 0x35E(r4)
	  lwz       r0, 0x8(r5)
	  rlwinm    r0,r0,27,5,31
	  lbzx      r0, r6, r0
	  stb       r0, 0x361(r4)
	  lwz       r0, 0x8(r5)
	  rlwinm    r0,r0,0,27,31
	  stb       r0, 0x140(r4)
	  lwz       r0, 0x34C(r4)
	  ori       r0, r0, 0x1C
	  stw       r0, 0x34C(r4)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D63C
 * Size:	00001C
 */
void JASSeqParser::cmdOscRoute(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r5)
	  li        r3, 0
	  rlwinm    r0,r5,30,26,29
	  rlwinm    r5,r5,0,28,31
	  add       r4, r4, r0
	  stw       r5, 0x2D8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D658
 * Size:	000048
 */
void JASSeqParser::cmdVibDepth(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lfd       f2, -0x7608(r2)
	  li        r3, 0
	  lwz       r6, 0x0(r5)
	  stw       r0, 0x8(r1)
	  rlwinm    r5,r6,8,16,23
	  rlwinm    r0,r6,1,23,30
	  or        r0, r5, r0
	  lfs       f0, -0x7610(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  stfs      f1, 0xEC(r4)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D6A0
 * Size:	000038
 */
void JASSeqParser::cmdVibDepthMidi(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lfd       f2, -0x7628(r2)
	  li        r3, 0
	  lwz       r5, 0x0(r5)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7610(r2)
	  stw       r5, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  stfs      f1, 0xEC(r4)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D6D8
 * Size:	000048
 */
void JASSeqParser::cmdVibPitch(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lfd       f2, -0x7628(r2)
	  li        r3, 0
	  lwz       r6, 0x0(r5)
	  stw       r0, 0x8(r1)
	  rlwinm    r5,r6,8,16,23
	  rlwinm    r0,r6,1,23,30
	  or        r0, r5, r0
	  lfs       f0, -0x7600(r2)
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  stfs      f1, 0xF0(r4)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D720
 * Size:	0000F4
 */
void JASSeqParser::cmdIIRSet(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r0, 0x4330
	  lfd       f4, -0x7608(r2)
	  li        r3, 0
	  lwz       r6, 0x0(r5)
	  stw       r0, 0x8(r1)
	  extsh     r6, r6
	  lfs       f3, -0x75FC(r2)
	  xoris     r6, r6, 0x8000
	  lfs       f2, -0x75F8(r2)
	  stw       r6, 0xC(r1)
	  lfs       f1, -0x75F4(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x10(r1)
	  fsubs     f0, f0, f4
	  stw       r0, 0x18(r1)
	  fdivs     f0, f0, f3
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x20C(r4)
	  lfs       f0, 0x20C(r4)
	  stfs      f0, 0x208(r4)
	  stfs      f2, 0x214(r4)
	  stfs      f1, 0x210(r4)
	  lwz       r0, 0x4(r5)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f4
	  fdivs     f0, f0, f3
	  stfs      f0, 0x21C(r4)
	  lfs       f0, 0x21C(r4)
	  stfs      f0, 0x218(r4)
	  stfs      f2, 0x224(r4)
	  stfs      f1, 0x220(r4)
	  lwz       r0, 0x8(r5)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f4
	  fdivs     f0, f0, f3
	  stfs      f0, 0x22C(r4)
	  lfs       f0, 0x22C(r4)
	  stfs      f0, 0x228(r4)
	  stfs      f2, 0x234(r4)
	  stfs      f1, 0x230(r4)
	  lwz       r0, 0xC(r5)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f4
	  fdivs     f0, f0, f3
	  stfs      f0, 0x23C(r4)
	  lfs       f0, 0x23C(r4)
	  stfs      f0, 0x238(r4)
	  stfs      f2, 0x244(r4)
	  stfs      f1, 0x240(r4)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D814
 * Size:	0000F8
 */
void JASSeqParser::cmdIIRCutOff(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r0, 0x4330
	  lis       r3, 0x804A
	  lfd       f4, -0x7608(r2)
	  lwz       r5, 0x0(r5)
	  addi      r3, r3, 0x38F8
	  stw       r0, 0x8(r1)
	  rlwinm    r5,r5,3,21,28
	  lfs       f3, -0x75F0(r2)
	  add       r6, r3, r5
	  lfs       f2, -0x75F8(r2)
	  lha       r5, 0x0(r6)
	  li        r3, 0
	  lfs       f1, -0x75F4(r2)
	  xoris     r5, r5, 0x8000
	  stw       r0, 0x10(r1)
	  stw       r5, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x18(r1)
	  fsubs     f0, f0, f4
	  stw       r0, 0x20(r1)
	  fdivs     f0, f0, f3
	  stfs      f0, 0x20C(r4)
	  lfs       f0, 0x20C(r4)
	  stfs      f0, 0x208(r4)
	  stfs      f2, 0x214(r4)
	  stfs      f1, 0x210(r4)
	  lha       r0, 0x2(r6)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f4
	  fdivs     f0, f0, f3
	  stfs      f0, 0x21C(r4)
	  lfs       f0, 0x21C(r4)
	  stfs      f0, 0x218(r4)
	  stfs      f2, 0x224(r4)
	  stfs      f1, 0x220(r4)
	  lha       r0, 0x4(r6)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f4
	  fdivs     f0, f0, f3
	  stfs      f0, 0x22C(r4)
	  lfs       f0, 0x22C(r4)
	  stfs      f0, 0x228(r4)
	  stfs      f2, 0x234(r4)
	  stfs      f1, 0x230(r4)
	  lha       r0, 0x6(r6)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f4
	  fdivs     f0, f0, f3
	  stfs      f0, 0x23C(r4)
	  lfs       f0, 0x23C(r4)
	  stfs      f0, 0x238(r4)
	  stfs      f2, 0x244(r4)
	  stfs      f1, 0x240(r4)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D90C
 * Size:	00003C
 */
void JASSeqParser::cmdOscFull(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r5)
	  lwz       r5, 0x4(r5)
	  lwz       r6, 0x8(r6)
	  rlwinm    r4,r0,0,24,31
	  bl        0x21C4
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D948
 * Size:	000010
 */
void JASSeqParser::cmdCheckWave(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r3, 0
	  sth       r0, 0x26E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009D958
 * Size:	000214
 */
void JASSeqParser::cmdPrintf(JASTrack*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0xC4(r1)
	  stmw      r27, 0xAC(r1)
	  addi      r31, r1, 0x8
	  mr        r29, r4
	  addi      r4, r1, 0x1C
	  mr        r3, r31
	  li        r30, 0
	  b         .loc_0x170

	.loc_0x2C:
	  lwz       r6, 0x10(r29)
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r29)
	  lbz       r0, 0x0(r6)
	  stbx      r0, r4, r5
	  lbzx      r6, r4, r5
	  extsb.    r0, r6
	  beq-      .loc_0x178
	  extsb     r0, r6
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x94
	  lwz       r6, 0x10(r29)
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r29)
	  lbz       r0, 0x0(r6)
	  stbx      r0, r4, r5
	  lbzx      r6, r4, r5
	  extsb.    r0, r6
	  beq-      .loc_0x178
	  extsb     r0, r6
	  cmpwi     r0, 0x6E
	  beq-      .loc_0x88
	  b         .loc_0x16C

	.loc_0x88:
	  li        r0, 0xD
	  stbx      r0, r4, r5
	  b         .loc_0x16C

	.loc_0x94:
	  cmpwi     r0, 0x25
	  bne-      .loc_0x16C
	  lwz       r6, 0x10(r29)
	  addi      r7, r1, 0x1C
	  addi      r5, r5, 0x1
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r29)
	  lbz       r0, 0x0(r6)
	  stbx      r0, r7, r5
	  lbzx      r6, r7, r5
	  extsb.    r0, r6
	  beq-      .loc_0x178
	  extsb     r0, r6
	  cmpwi     r0, 0x72
	  beq-      .loc_0x12C
	  bge-      .loc_0xEC
	  cmpwi     r0, 0x64
	  beq-      .loc_0x108
	  bge-      .loc_0x164
	  cmpwi     r0, 0x52
	  beq-      .loc_0x140
	  b         .loc_0x164

	.loc_0xEC:
	  cmpwi     r0, 0x78
	  beq-      .loc_0x114
	  bge-      .loc_0x164
	  cmpwi     r0, 0x74
	  beq-      .loc_0x154
	  bge-      .loc_0x164
	  b         .loc_0x120

	.loc_0x108:
	  li        r0, 0
	  stb       r0, 0x0(r3)
	  b         .loc_0x164

	.loc_0x114:
	  li        r0, 0x1
	  stb       r0, 0x0(r3)
	  b         .loc_0x164

	.loc_0x120:
	  li        r0, 0x2
	  stb       r0, 0x0(r3)
	  b         .loc_0x164

	.loc_0x12C:
	  li        r6, 0x3
	  li        r0, 0x64
	  stb       r6, 0x0(r3)
	  stbx      r0, r7, r5
	  b         .loc_0x164

	.loc_0x140:
	  li        r6, 0x4
	  li        r0, 0x78
	  stb       r6, 0x0(r3)
	  stbx      r0, r7, r5
	  b         .loc_0x164

	.loc_0x154:
	  li        r6, 0x5
	  li        r0, 0x78
	  stb       r6, 0x0(r3)
	  stbx      r0, r7, r5

	.loc_0x164:
	  addi      r3, r3, 0x1
	  addi      r30, r30, 0x1

	.loc_0x16C:
	  addi      r5, r5, 0x1

	.loc_0x170:
	  cmplwi    r5, 0x80
	  blt+      .loc_0x2C

	.loc_0x178:
	  addi      r28, r1, 0xC
	  li        r27, 0
	  b         .loc_0x1F4

	.loc_0x184:
	  lwz       r3, 0x10(r29)
	  lbz       r4, 0x0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r29)
	  cmplwi    r4, 0x2
	  lbz       r0, 0x0(r3)
	  stw       r0, 0x0(r28)
	  bne-      .loc_0x1B8
	  lwz       r3, 0xC(r29)
	  lwz       r0, 0x0(r28)
	  add       r0, r3, r0
	  stw       r0, 0x0(r28)
	  b         .loc_0x1E8

	.loc_0x1B8:
	  cmplwi    r4, 0x5
	  bne-      .loc_0x1CC
	  lwz       r0, 0x348(r29)
	  stw       r0, 0x0(r28)
	  b         .loc_0x1E8

	.loc_0x1CC:
	  cmplwi    r4, 0x3
	  blt-      .loc_0x1E8
	  lwz       r0, 0x0(r28)
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        0x3C00
	  stw       r3, 0x0(r28)

	.loc_0x1E8:
	  addi      r28, r28, 0x4
	  addi      r31, r31, 0x1
	  addi      r27, r27, 0x1

	.loc_0x1F4:
	  cmplw     r27, r30
	  blt+      .loc_0x184
	  lmw       r27, 0xAC(r1)
	  li        r3, 0
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void JASSeqParser::Cmd_Process(JASTrack*, unsigned char, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
void JASSeqParser::RegCmd_Process(JASTrack*, int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009DB6C
 * Size:	00018C
 */
void JASSeqParser::cmdSetParam(JASTrack*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm    r0,r5,0,28,29
	  cmplwi    r0, 0xC
	  stmw      r27, 0x1C(r1)
	  mr        r27, r4
	  addi      r31, r27, 0xC
	  rlwinm    r29,r5,0,24,31
	  lwz       r4, 0x10(r4)
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r27)
	  lbz       r30, 0x0(r4)
	  bgt-      .loc_0xC8
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x42E4
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r4, 0x4(r31)
	  mr        r3, r27
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r4)
	  bl        0x3C3C
	  extsh     r28, r3
	  b         .loc_0xC8
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r28, 0x0(r3)
	  b         .loc_0xC8
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r3)
	  rlwinm.   r0,r4,0,24,24
	  beq-      .loc_0xA8
	  rlwinm    r0,r4,8,0,23
	  extsh     r28, r0
	  b         .loc_0xC8

	.loc_0xA8:
	  rlwinm    r3,r4,8,0,23
	  rlwinm    r0,r4,1,0,30
	  or        r0, r3, r0
	  extsh     r28, r0
	  b         .loc_0xC8
	  mr        r3, r31
	  bl        -0x11E0
	  extsh     r28, r3

	.loc_0xC8:
	  rlwinm    r0,r29,0,30,31
	  li        r5, 0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x120
	  bge-      .loc_0xEC
	  cmpwi     r0, 0
	  beq-      .loc_0xF8
	  bge-      .loc_0x100
	  b         .loc_0x140

	.loc_0xEC:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x140
	  b         .loc_0x134

	.loc_0xF8:
	  li        r5, -0x1
	  b         .loc_0x140

	.loc_0x100:
	  lwz       r4, 0x4(r31)
	  mr        r3, r27
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r4, 0x0(r4)
	  bl        0x3B8C
	  rlwinm    r5,r3,0,16,31
	  b         .loc_0x140

	.loc_0x120:
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  lbz       r5, 0x0(r3)
	  b         .loc_0x140

	.loc_0x134:
	  mr        r3, r31
	  bl        -0x1258
	  rlwinm    r5,r3,0,16,31

	.loc_0x140:
	  extsh     r3, r28
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x7608(r2)
	  mr        r3, r27
	  stw       r4, 0xC(r1)
	  mr        r4, r30
	  lfs       f0, -0x75F0(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bl        0x311C
	  lmw       r27, 0x1C(r1)
	  li        r3, 0
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void JASSeqParser::cmdWait(JASTrack*, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void JASSeqParser::cmdNoteOff(JASTrack*, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009DCF8
 * Size:	0003D4
 */
void JASSeqParser::cmdNoteOn(JASTrack*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r30, r4
	  mr        r31, r5
	  lwz       r3, 0x10(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r4)
	  lbz       r29, 0x0(r3)
	  rlwinm.   r0,r29,0,24,24
	  beq-      .loc_0x40
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x3A08
	  rlwinm    r31,r3,0,24,31

	.loc_0x40:
	  mr        r3, r30
	  bl        0x46F0
	  rlwinm.   r0,r29,27,30,30
	  add       r3, r31, r3
	  rlwinm    r0,r29,27,30,31
	  rlwinm    r31,r3,0,24,31
	  mr        r28, r0
	  beq-      .loc_0x68
	  mr        r27, r31
	  lbz       r31, 0xE5(r30)

	.loc_0x68:
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r30)
	  lbz       r3, 0x0(r3)
	  rlwinm.   r0,r3,0,24,24
	  mr        r26, r3
	  beq-      .loc_0x94
	  rlwinm    r4,r3,0,25,31
	  mr        r3, r30
	  bl        0x39B4
	  rlwinm    r26,r3,0,24,31

	.loc_0x94:
	  rlwinm.   r3,r29,0,29,31
	  li        r23, 0
	  mr        r24, r3
	  bne-      .loc_0x218
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r30)
	  lbz       r3, 0x0(r3)
	  rlwinm.   r0,r3,0,24,24
	  mr        r25, r3
	  beq-      .loc_0xD0
	  rlwinm    r4,r3,0,25,31
	  mr        r3, r30
	  bl        0x3978
	  rlwinm    r25,r3,0,24,31

	.loc_0xD0:
	  rlwinm.   r3,r29,29,30,31
	  li        r29, 0
	  li        r4, 0
	  ble-      .loc_0x1F4
	  cmpwi     r3, 0x8
	  subi      r5, r3, 0x8
	  ble-      .loc_0x1C8
	  addi      r0, r5, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r5, 0
	  ble-      .loc_0x1C8

	.loc_0x100:
	  lwz       r6, 0x10(r30)
	  rlwinm    r29,r29,8,0,23
	  addi      r4, r4, 0x8
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r30)
	  lwz       r5, 0x10(r30)
	  lbz       r6, 0x0(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r6
	  rlwinm    r29,r29,8,0,23
	  lwz       r6, 0x10(r30)
	  lbz       r5, 0x0(r5)
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r5
	  rlwinm    r29,r29,8,0,23
	  lwz       r5, 0x10(r30)
	  lbz       r6, 0x0(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r6
	  rlwinm    r29,r29,8,0,23
	  lwz       r6, 0x10(r30)
	  lbz       r5, 0x0(r5)
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r5
	  rlwinm    r29,r29,8,0,23
	  lwz       r5, 0x10(r30)
	  lbz       r6, 0x0(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r6
	  rlwinm    r29,r29,8,0,23
	  lwz       r6, 0x10(r30)
	  lbz       r5, 0x0(r5)
	  addi      r0, r6, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r5
	  rlwinm    r29,r29,8,0,23
	  lwz       r5, 0x10(r30)
	  lbz       r6, 0x0(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x10(r30)
	  or        r29, r29, r6
	  rlwinm    r29,r29,8,0,23
	  lbz       r0, 0x0(r5)
	  or        r29, r29, r0
	  bdnz+     .loc_0x100

	.loc_0x1C8:
	  sub       r0, r3, r4
	  mtctr     r0
	  cmpw      r4, r3
	  bge-      .loc_0x1F4

	.loc_0x1D8:
	  lwz       r4, 0x10(r30)
	  rlwinm    r29,r29,8,0,23
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r30)
	  lbz       r0, 0x0(r4)
	  or        r29, r29, r0
	  bdnz+     .loc_0x1D8

	.loc_0x1F4:
	  cmplwi    r3, 0x1
	  bne-      .loc_0x268
	  rlwinm.   r0,r29,0,24,24
	  beq-      .loc_0x268
	  rlwinm    r4,r29,0,25,31
	  mr        r3, r30
	  bl        0x3834
	  mr        r29, r3
	  b         .loc_0x268

	.loc_0x218:
	  rlwinm.   r0,r29,29,30,31
	  beq-      .loc_0x234
	  subi      r0, r3, 0x1
	  mr        r3, r30
	  rlwinm    r4,r0,0,24,31
	  bl        0x3814
	  rlwinm    r24,r3,0,24,31

	.loc_0x234:
	  rlwinm.   r0,r28,0,31,31
	  beq-      .loc_0x260
	  lwz       r4, 0x10(r30)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r30)
	  lbz       r4, 0x0(r4)
	  bl        0x37F0
	  xori      r0, r28, 0x1
	  mr        r23, r3
	  rlwinm    r28,r0,0,24,31

	.loc_0x260:
	  li        r29, -0x1
	  li        r25, 0x64

	.loc_0x268:
	  stb       r28, 0xE4(r30)
	  mr        r28, r29
	  lbz       r0, 0xE6(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2DC
	  lbz       r0, 0xE4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x28C
	  li        r28, -0x1

	.loc_0x28C:
	  cmpwi     r28, -0x1
	  beq-      .loc_0x2A8
	  mr        r3, r30
	  mr        r4, r28
	  mr        r5, r25
	  bl        0x2D88
	  mr        r28, r3

	.loc_0x2A8:
	  lbz       r0, 0x362(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lbz       r0, 0x358(r30)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x33C

	.loc_0x2C0:
	  mr        r3, r30
	  mr        r4, r24
	  mr        r7, r28
	  rlwinm    r5,r31,0,24,31
	  rlwinm    r6,r26,0,24,31
	  bl        0x1A98
	  b         .loc_0x33C

	.loc_0x2DC:
	  cmpwi     r29, -0x1
	  beq-      .loc_0x2F8
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r25
	  bl        0x2D38
	  mr        r28, r3

	.loc_0x2F8:
	  lbz       r0, 0xE4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x308
	  li        r28, -0x1

	.loc_0x308:
	  lbz       r0, 0x362(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x320
	  lbz       r0, 0x358(r30)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x33C

	.loc_0x320:
	  mr        r3, r30
	  mr        r4, r24
	  mr        r7, r28
	  mr        r8, r23
	  rlwinm    r5,r31,0,24,31
	  rlwinm    r6,r26,0,24,31
	  bl        0x1784

	.loc_0x33C:
	  stw       r29, 0xE0(r30)
	  lbz       r0, 0xE4(r30)
	  rlwinm    r0,r0,0,31,31
	  stb       r0, 0xE6(r30)
	  lbz       r0, 0xE4(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x390
	  cmpwi     r28, -0x1
	  mr        r5, r28
	  bne-      .loc_0x378
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r25
	  bl        0x2CB8
	  mr        r5, r3

	.loc_0x378:
	  lwz       r3, 0xC0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  mr        r4, r27
	  bl        0x558C

	.loc_0x38C:
	  mr        r31, r27

	.loc_0x390:
	  addis     r0, r29, 0x1
	  stb       r31, 0xE5(r30)
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x3A8
	  li        r3, 0
	  b         .loc_0x3C0

	.loc_0x3A8:
	  cmplwi    r29, 0
	  li        r0, -0x1
	  beq-      .loc_0x3B8
	  mr        r0, r29

	.loc_0x3B8:
	  stw       r0, 0x14(r30)
	  li        r3, 0x1

	.loc_0x3C0:
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009E0CC
 * Size:	0000B4
 */
void JASSeqParser::conditionCheck(JASTrack*, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,0,28,31
	  lhz       r4, 0x26E(r4)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x60
	  bge-      .loc_0x2C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x44
	  bge-      .loc_0x50
	  cmpwi     r0, 0
	  bge-      .loc_0x3C
	  b         .loc_0xAC

	.loc_0x2C:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x94
	  bge-      .loc_0xAC
	  b         .loc_0x70

	.loc_0x3C:
	  li        r3, 0x1
	  blr

	.loc_0x44:
	  cntlzw    r0, r4
	  rlwinm    r3,r0,27,5,31
	  blr

	.loc_0x50:
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r3,r0,1,31,31
	  blr

	.loc_0x60:
	  subfic    r0, r4, 0x1
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr

	.loc_0x70:
	  lis       r3, 0x1
	  subi      r0, r3, 0x8000
	  rlwinm    r3,r0,0,16,31
	  sub       r0, r4, r3
	  orc       r3, r4, r3
	  rlwinm    r0,r0,31,1,31
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr

	.loc_0x94:
	  lis       r3, 0x1
	  subi      r0, r3, 0x8000
	  rlwinm    r0,r0,0,16,31
	  sub       r0, r4, r0
	  rlwinm    r3,r0,1,31,31
	  blr

	.loc_0xAC:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009E180
 * Size:	0006D4
 */
void JASSeqParser::parseSeq(JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stmw      r23, 0x7C(r1)
	  mr        r29, r3
	  mr        r31, r4

	.loc_0x18:
	  lwz       r3, 0x10(r31)
	  li        r23, 0
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r31)
	  lbz       r26, 0x0(r3)
	  rlwinm.   r0,r26,0,24,24
	  bne-      .loc_0x4C
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r26
	  bl        -0x4C8
	  mr        r23, r3
	  b         .loc_0x69C

	.loc_0x4C:
	  rlwinm    r3,r26,0,24,27
	  cmpwi     r3, 0x80
	  bne-      .loc_0x1AC
	  rlwinm.   r0,r26,0,29,31
	  bne-      .loc_0x1AC
	  subi      r3, r26, 0x80
	  subfic    r0, r26, 0x80
	  nor       r3, r3, r0
	  srawi     r3, r3, 0x1F
	  li        r0, 0
	  addic.    r6, r3, 0x2
	  mr        r7, r0
	  ble-      .loc_0x198
	  cmpwi     r6, 0x8
	  subi      r4, r6, 0x8
	  ble-      .loc_0x168
	  addi      r3, r4, 0x7
	  rlwinm    r3,r3,29,3,31
	  mtctr     r3
	  cmpwi     r4, 0
	  ble-      .loc_0x168

	.loc_0xA0:
	  lwz       r5, 0x10(r31)
	  rlwinm    r0,r0,8,0,23
	  addi      r7, r7, 0x8
	  addi      r3, r5, 0x1
	  stw       r3, 0x10(r31)
	  lwz       r4, 0x10(r31)
	  lbz       r5, 0x0(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r5
	  rlwinm    r0,r0,8,0,23
	  lwz       r5, 0x10(r31)
	  lbz       r4, 0x0(r4)
	  addi      r3, r5, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r4
	  rlwinm    r0,r0,8,0,23
	  lwz       r4, 0x10(r31)
	  lbz       r5, 0x0(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r5
	  rlwinm    r0,r0,8,0,23
	  lwz       r5, 0x10(r31)
	  lbz       r4, 0x0(r4)
	  addi      r3, r5, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r4
	  rlwinm    r0,r0,8,0,23
	  lwz       r4, 0x10(r31)
	  lbz       r5, 0x0(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r5
	  rlwinm    r0,r0,8,0,23
	  lwz       r5, 0x10(r31)
	  lbz       r4, 0x0(r4)
	  addi      r3, r5, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r4
	  rlwinm    r0,r0,8,0,23
	  lwz       r4, 0x10(r31)
	  lbz       r5, 0x0(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r31)
	  or        r0, r0, r5
	  rlwinm    r0,r0,8,0,23
	  lbz       r3, 0x0(r4)
	  or        r0, r0, r3
	  bdnz+     .loc_0xA0

	.loc_0x168:
	  sub       r3, r6, r7
	  mtctr     r3
	  cmpw      r7, r6
	  bge-      .loc_0x198

	.loc_0x178:
	  lwz       r4, 0x10(r31)
	  rlwinm    r0,r0,8,0,23
	  addi      r7, r7, 0x1
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r31)
	  lbz       r3, 0x0(r4)
	  or        r0, r0, r3
	  bdnz+     .loc_0x178

	.loc_0x198:
	  neg       r3, r0
	  stw       r0, 0x14(r31)
	  or        r0, r3, r0
	  rlwinm    r23,r0,1,31,31
	  b         .loc_0x69C

	.loc_0x1AC:
	  cmpwi     r3, 0x80
	  beq-      .loc_0x1BC
	  cmplwi    r26, 0xF9
	  bne-      .loc_0x23C

	.loc_0x1BC:
	  cmplwi    r26, 0xF9
	  bne-      .loc_0x1F8
	  lwz       r4, 0x10(r31)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r31)
	  lbz       r23, 0x0(r4)
	  rlwinm    r4,r23,0,29,31
	  bl        0x33DC
	  rlwinm.   r0,r23,0,24,24
	  rlwinm    r3,r3,0,24,31
	  addi      r26, r3, 0x80
	  beq-      .loc_0x1F8
	  ori       r0, r26, 0x8
	  rlwinm    r26,r0,0,24,31

	.loc_0x1F8:
	  rlwinm.   r0,r26,0,28,28
	  li        r5, 0
	  beq-      .loc_0x224
	  lwz       r3, 0x10(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r31)
	  lbz       r5, 0x0(r3)
	  cmpwi     r5, 0x64
	  ble-      .loc_0x224
	  subi      r0, r5, 0x62
	  mulli     r5, r0, 0x14

	.loc_0x224:
	  rlwinm    r4,r26,0,29,31
	  mr        r3, r31
	  rlwinm    r5,r5,0,16,31
	  bl        0x164C
	  li        r23, 0
	  b         .loc_0x69C

	.loc_0x23C:
	  rlwinm    r0,r26,0,24,27
	  cmpwi     r0, 0xA0
	  beq-      .loc_0x3CC
	  bge-      .loc_0x258
	  cmpwi     r0, 0x90
	  beq-      .loc_0x264
	  b         .loc_0x580

	.loc_0x258:
	  cmpwi     r0, 0xB0
	  beq-      .loc_0x3DC
	  b         .loc_0x580

	.loc_0x264:
	  addi      r27, r31, 0xC
	  rlwinm    r0,r26,0,28,29
	  lwz       r4, 0x10(r31)
	  cmplwi    r0, 0xC
	  rlwinm    r28,r26,0,28,31
	  addi      r3, r4, 0x1
	  stw       r3, 0x10(r31)
	  lbz       r26, 0x0(r4)
	  bgt-      .loc_0x318
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x4318
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r4, 0x4(r27)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r27)
	  lbz       r4, 0x0(r4)
	  bl        0x33D8
	  extsh     r30, r3
	  b         .loc_0x318
	  lwz       r3, 0x4(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r27)
	  lbz       r30, 0x0(r3)
	  b         .loc_0x318
	  lwz       r3, 0x4(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r27)
	  lbz       r4, 0x0(r3)
	  rlwinm.   r0,r4,0,24,24
	  beq-      .loc_0x2F8
	  rlwinm    r0,r4,8,0,23
	  extsh     r30, r0
	  b         .loc_0x318

	.loc_0x2F8:
	  rlwinm    r3,r4,8,0,23
	  rlwinm    r0,r4,1,0,30
	  or        r0, r3, r0
	  extsh     r30, r0
	  b         .loc_0x318
	  mr        r3, r27
	  bl        -0x1A44
	  extsh     r30, r3

	.loc_0x318:
	  rlwinm    r0,r28,0,30,31
	  li        r5, 0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x370
	  bge-      .loc_0x33C
	  cmpwi     r0, 0
	  beq-      .loc_0x348
	  bge-      .loc_0x350
	  b         .loc_0x390

	.loc_0x33C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x390
	  b         .loc_0x384

	.loc_0x348:
	  li        r5, -0x1
	  b         .loc_0x390

	.loc_0x350:
	  lwz       r4, 0x4(r27)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r27)
	  lbz       r4, 0x0(r4)
	  bl        0x3328
	  rlwinm    r5,r3,0,16,31
	  b         .loc_0x390

	.loc_0x370:
	  lwz       r3, 0x4(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r27)
	  lbz       r5, 0x0(r3)
	  b         .loc_0x390

	.loc_0x384:
	  mr        r3, r27
	  bl        -0x1ABC
	  rlwinm    r5,r3,0,16,31

	.loc_0x390:
	  extsh     r3, r30
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x68(r1)
	  lfd       f2, -0x7608(r2)
	  mr        r3, r31
	  stw       r4, 0x6C(r1)
	  mr        r4, r26
	  lfs       f0, -0x75F0(r2)
	  lfd       f1, 0x68(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  bl        0x28B8
	  li        r23, 0
	  b         .loc_0x69C

	.loc_0x3CC:
	  rlwinm    r4,r26,0,28,31
	  mr        r3, r31
	  bl        0x35A0
	  b         .loc_0x69C

	.loc_0x3DC:
	  lwz       r3, 0x10(r31)
	  rlwinm.   r23,r26,29,31,31
	  rlwinm    r24,r26,0,29,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r31)
	  lbz       r4, 0x0(r3)
	  beq-      .loc_0x404
	  mr        r3, r31
	  bl        0x31BC
	  rlwinm    r4,r3,0,24,31

	.loc_0x404:
	  cmpwi     r23, 0
	  li        r6, 0
	  beq-      .loc_0x418
	  cmpwi     r24, 0
	  beq-      .loc_0x458

	.loc_0x418:
	  lwz       r3, 0x10(r31)
	  addi      r7, r24, 0x1
	  li        r5, 0x3
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r31)
	  lbz       r3, 0x0(r3)
	  mtctr     r7
	  cmplwi    r7, 0
	  ble-      .loc_0x458

	.loc_0x43C:
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x44C
	  or        r0, r6, r5
	  rlwinm    r6,r0,0,16,31

	.loc_0x44C:
	  rlwinm    r3,r3,1,24,30
	  rlwinm    r5,r5,2,16,29
	  bdnz+     .loc_0x43C

	.loc_0x458:
	  lis       r3, 0x8048
	  rlwinm    r5,r4,2,22,29
	  subi      r0, r3, 0x73C0
	  rlwinm    r23,r4,0,24,31
	  add       r3, r0, r5
	  addi      r26, r31, 0xC
	  lwz       r0, -0x300(r3)
	  addi      r25, r1, 0x28
	  li        r27, 0
	  stw       r0, 0x8(r1)
	  lhz       r28, 0xA(r1)
	  lhz       r24, 0x8(r1)
	  or        r28, r28, r6
	  b         .loc_0x518

	.loc_0x490:
	  rlwinm    r0,r28,0,30,31
	  li        r3, 0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x4E4
	  bge-      .loc_0x4B4
	  cmpwi     r0, 0
	  beq-      .loc_0x4C0
	  bge-      .loc_0x4D4
	  b         .loc_0x508

	.loc_0x4B4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x508
	  b         .loc_0x4F0

	.loc_0x4C0:
	  lwz       r3, 0x4(r26)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r26)
	  lbz       r3, 0x0(r3)
	  b         .loc_0x508

	.loc_0x4D4:
	  mr        r3, r26
	  bl        -0x1C0C
	  rlwinm    r3,r3,0,16,31
	  b         .loc_0x508

	.loc_0x4E4:
	  mr        r3, r26
	  bl        -0x1BF4
	  b         .loc_0x508

	.loc_0x4F0:
	  lwz       r4, 0x4(r26)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r26)
	  lbz       r4, 0x0(r4)
	  bl        0x30B4

	.loc_0x508:
	  stw       r3, 0x0(r25)
	  rlwinm    r28,r28,30,18,31
	  addi      r25, r25, 0x4
	  addi      r27, r27, 0x1

	.loc_0x518:
	  cmpw      r27, r24
	  blt+      .loc_0x490
	  mulli     r5, r23, 0xC
	  lis       r4, 0x804A
	  addi      r3, r1, 0x10
	  addi      r0, r4, 0x3FE4
	  add       r6, r0, r5
	  lwz       r5, -0x900(r6)
	  lwz       r4, -0x8FC(r6)
	  lwz       r0, -0x8F8(r6)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  bl        0x23428
	  cmpwi     r3, 0
	  bne-      .loc_0x560
	  li        r3, 0
	  b         .loc_0x578

	.loc_0x560:
	  mr        r3, r29
	  mr        r4, r31
	  addi      r5, r1, 0x28
	  addi      r12, r1, 0x10
	  bl        0x23434
	  nop

	.loc_0x578:
	  mr        r23, r3
	  b         .loc_0x69C

	.loc_0x580:
	  lis       r3, 0x8048
	  rlwinm    r4,r26,2,0,29
	  subi      r0, r3, 0x73C0
	  addi      r25, r31, 0xC
	  add       r3, r0, r4
	  addi      r24, r1, 0x48
	  lwz       r0, -0x300(r3)
	  li        r28, 0
	  stw       r0, 0xC(r1)
	  lhz       r27, 0xE(r1)
	  lhz       r23, 0xC(r1)
	  b         .loc_0x638

	.loc_0x5B0:
	  rlwinm    r0,r27,0,30,31
	  li        r3, 0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x604
	  bge-      .loc_0x5D4
	  cmpwi     r0, 0
	  beq-      .loc_0x5E0
	  bge-      .loc_0x5F4
	  b         .loc_0x628

	.loc_0x5D4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x628
	  b         .loc_0x610

	.loc_0x5E0:
	  lwz       r3, 0x4(r25)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r25)
	  lbz       r3, 0x0(r3)
	  b         .loc_0x628

	.loc_0x5F4:
	  mr        r3, r25
	  bl        -0x1D2C
	  rlwinm    r3,r3,0,16,31
	  b         .loc_0x628

	.loc_0x604:
	  mr        r3, r25
	  bl        -0x1D14
	  b         .loc_0x628

	.loc_0x610:
	  lwz       r4, 0x4(r25)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r25)
	  lbz       r4, 0x0(r4)
	  bl        0x2F94

	.loc_0x628:
	  stw       r3, 0x0(r24)
	  rlwinm    r27,r27,30,18,31
	  addi      r24, r24, 0x4
	  addi      r28, r28, 0x1

	.loc_0x638:
	  cmpw      r28, r23
	  blt+      .loc_0x5B0
	  mulli     r5, r26, 0xC
	  lis       r4, 0x804A
	  addi      r3, r1, 0x1C
	  addi      r0, r4, 0x3FE4
	  add       r6, r0, r5
	  lwz       r5, -0x900(r6)
	  lwz       r4, -0x8FC(r6)
	  lwz       r0, -0x8F8(r6)
	  stw       r5, 0x1C(r1)
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        0x23308
	  cmpwi     r3, 0
	  bne-      .loc_0x680
	  li        r3, 0
	  b         .loc_0x698

	.loc_0x680:
	  mr        r3, r29
	  mr        r4, r31
	  addi      r5, r1, 0x48
	  addi      r12, r1, 0x1C
	  bl        0x23314
	  nop

	.loc_0x698:
	  mr        r23, r3

	.loc_0x69C:
	  cmplwi    r23, 0
	  beq+      .loc_0x18
	  cmplwi    r23, 0x1
	  beq-      .loc_0x6BC
	  cmplwi    r23, 0x3
	  bne+      .loc_0x18
	  li        r3, -0x1
	  b         .loc_0x6C0

	.loc_0x6BC:
	  li        r3, 0

	.loc_0x6C0:
	  lmw       r23, 0x7C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009E854
 * Size:	000740
 */
void __sinit_JASSeqParser_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  lis       r4, 0x804A
	  lis       r3, 0x8048
	  stmw      r14, 0xD8(r1)
	  addi      r16, r4, 0x3D68
	  addi      r20, r16, 0x27C
	  lwzu      r17, -0x60F0(r3)
	  lwz       r15, 0x5C(r16)
	  lwz       r18, 0x4(r3)
	  lwz       r19, 0x8(r3)
	  lwz       r0, 0x54(r16)
	  stw       r15, 0xC8(r1)
	  lwz       r15, 0x60(r16)
	  stw       r0, 0x84(r20)
	  lwz       r0, 0xC8(r1)
	  stw       r15, 0x14(r1)
	  lwz       r15, 0x64(r16)
	  stw       r0, 0x8C(r20)
	  lwz       r0, 0x14(r1)
	  stw       r15, 0x18(r1)
	  lwz       r15, 0x68(r16)
	  stw       r0, 0x90(r20)
	  lwz       r0, 0x18(r1)
	  lwz       r21, 0x0(r16)
	  lwz       r22, 0x4(r16)
	  lwz       r23, 0x8(r16)
	  lwz       r24, 0xC(r16)
	  lwz       r25, 0x10(r16)
	  lwz       r26, 0x14(r16)
	  lwz       r27, 0x18(r16)
	  lwz       r28, 0x1C(r16)
	  lwz       r29, 0x20(r16)
	  lwz       r30, 0x24(r16)
	  lwz       r31, 0x28(r16)
	  lwz       r12, 0x2C(r16)
	  lwz       r11, 0x30(r16)
	  lwz       r10, 0x34(r16)
	  lwz       r9, 0x38(r16)
	  lwz       r8, 0x3C(r16)
	  lwz       r7, 0x40(r16)
	  lwz       r6, 0x44(r16)
	  lwz       r5, 0x48(r16)
	  lwz       r4, 0x4C(r16)
	  lwz       r3, 0x50(r16)
	  lwz       r14, 0x58(r16)
	  stw       r0, 0x94(r20)
	  mr        r0, r15
	  stw       r15, 0x1C(r1)
	  stw       r17, 0x8(r1)
	  stw       r18, 0xC(r1)
	  stw       r19, 0x10(r1)
	  stw       r17, 0x27C(r16)
	  stw       r18, 0x280(r16)
	  stw       r19, 0x284(r16)
	  stw       r21, 0xC(r20)
	  stw       r22, 0x10(r20)
	  stw       r23, 0x14(r20)
	  stw       r24, 0x18(r20)
	  stw       r25, 0x1C(r20)
	  stw       r26, 0x20(r20)
	  stw       r17, 0x24(r20)
	  stw       r18, 0x28(r20)
	  stw       r19, 0x2C(r20)
	  stw       r27, 0x30(r20)
	  stw       r28, 0x34(r20)
	  stw       r29, 0x38(r20)
	  stw       r17, 0x3C(r20)
	  stw       r18, 0x40(r20)
	  stw       r19, 0x44(r20)
	  stw       r30, 0x48(r20)
	  stw       r31, 0x4C(r20)
	  stw       r12, 0x50(r20)
	  stw       r17, 0x54(r20)
	  stw       r18, 0x58(r20)
	  stw       r19, 0x5C(r20)
	  stw       r11, 0x60(r20)
	  stw       r10, 0x64(r20)
	  stw       r9, 0x68(r20)
	  stw       r8, 0x6C(r20)
	  stw       r7, 0x70(r20)
	  stw       r6, 0x74(r20)
	  stw       r5, 0x78(r20)
	  stw       r4, 0x7C(r20)
	  stw       r3, 0x80(r20)
	  stw       r14, 0x88(r20)
	  stw       r0, 0x98(r20)
	  lwz       r30, 0xC8(r16)
	  lwz       r0, 0xC0(r16)
	  stw       r30, 0xCC(r1)
	  lwz       r30, 0xCC(r16)
	  stw       r0, 0x108(r20)
	  lwz       r0, 0xCC(r1)
	  stw       r30, 0x20(r1)
	  lwz       r30, 0xD0(r16)
	  stw       r0, 0x110(r20)
	  lwz       r0, 0x20(r1)
	  stw       r30, 0x24(r1)
	  lwz       r30, 0xD4(r16)
	  stw       r0, 0x114(r20)
	  lwz       r0, 0x24(r1)
	  stw       r30, 0x28(r1)
	  lwz       r30, 0xD8(r16)
	  stw       r0, 0x118(r20)
	  lwz       r0, 0x28(r1)
	  stw       r30, 0x2C(r1)
	  lwz       r30, 0xDC(r16)
	  stw       r0, 0x11C(r20)
	  lwz       r0, 0x2C(r1)
	  stw       r30, 0x30(r1)
	  lwz       r30, 0xE0(r16)
	  stw       r0, 0x120(r20)
	  lwz       r0, 0x30(r1)
	  stw       r30, 0x34(r1)
	  lwz       r30, 0xE4(r16)
	  stw       r0, 0x124(r20)
	  lwz       r0, 0x34(r1)
	  stw       r30, 0x38(r1)
	  lwz       r30, 0xE8(r16)
	  stw       r0, 0x128(r20)
	  lwz       r0, 0x38(r1)
	  stw       r30, 0x3C(r1)
	  lwz       r30, 0xEC(r16)
	  stw       r0, 0x12C(r20)
	  lwz       r0, 0x3C(r1)
	  stw       r30, 0x40(r1)
	  lwz       r30, 0xF0(r16)
	  stw       r0, 0x130(r20)
	  lwz       r0, 0x40(r1)
	  stw       r30, 0x44(r1)
	  lwz       r30, 0xF4(r16)
	  stw       r0, 0x134(r20)
	  lwz       r0, 0x44(r1)
	  stw       r30, 0x48(r1)
	  lwz       r30, 0xF8(r16)
	  stw       r0, 0x138(r20)
	  lwz       r0, 0x48(r1)
	  stw       r30, 0x4C(r1)
	  lwz       r30, 0xFC(r16)
	  stw       r0, 0x13C(r20)
	  lwz       r0, 0x4C(r1)
	  stw       r30, 0x50(r1)
	  lwz       r30, 0x100(r16)
	  stw       r0, 0x140(r20)
	  lwz       r0, 0x50(r1)
	  stw       r30, 0x54(r1)
	  lwz       r30, 0x104(r16)
	  stw       r0, 0x144(r20)
	  lwz       r0, 0x54(r1)
	  lwz       r29, 0x6C(r16)
	  lwz       r28, 0x70(r16)
	  lwz       r27, 0x74(r16)
	  lwz       r26, 0x78(r16)
	  lwz       r25, 0x7C(r16)
	  lwz       r24, 0x80(r16)
	  lwz       r23, 0x84(r16)
	  lwz       r22, 0x88(r16)
	  lwz       r21, 0x8C(r16)
	  lwz       r15, 0x90(r16)
	  lwz       r14, 0x94(r16)
	  lwz       r12, 0x98(r16)
	  lwz       r11, 0x9C(r16)
	  lwz       r10, 0xA0(r16)
	  lwz       r9, 0xA4(r16)
	  lwz       r8, 0xA8(r16)
	  lwz       r7, 0xAC(r16)
	  lwz       r6, 0xB0(r16)
	  lwz       r5, 0xB4(r16)
	  lwz       r4, 0xB8(r16)
	  lwz       r3, 0xBC(r16)
	  lwz       r31, 0xC4(r16)
	  stw       r0, 0x148(r20)
	  mr        r0, r30
	  stw       r30, 0x58(r1)
	  stw       r29, 0x9C(r20)
	  stw       r28, 0xA0(r20)
	  stw       r27, 0xA4(r20)
	  stw       r26, 0xA8(r20)
	  stw       r25, 0xAC(r20)
	  stw       r24, 0xB0(r20)
	  stw       r23, 0xB4(r20)
	  stw       r22, 0xB8(r20)
	  stw       r21, 0xBC(r20)
	  stw       r17, 0xC0(r20)
	  stw       r18, 0xC4(r20)
	  stw       r19, 0xC8(r20)
	  stw       r15, 0xCC(r20)
	  stw       r14, 0xD0(r20)
	  stw       r12, 0xD4(r20)
	  stw       r11, 0xD8(r20)
	  stw       r10, 0xDC(r20)
	  stw       r9, 0xE0(r20)
	  stw       r17, 0xE4(r20)
	  stw       r18, 0xE8(r20)
	  stw       r19, 0xEC(r20)
	  stw       r8, 0xF0(r20)
	  stw       r7, 0xF4(r20)
	  stw       r6, 0xF8(r20)
	  stw       r5, 0xFC(r20)
	  stw       r4, 0x100(r20)
	  stw       r3, 0x104(r20)
	  stw       r31, 0x10C(r20)
	  stw       r0, 0x14C(r20)
	  lwz       r30, 0x164(r16)
	  lwz       r0, 0x15C(r16)
	  stw       r30, 0xD0(r1)
	  lwz       r30, 0x168(r16)
	  stw       r0, 0x1A4(r20)
	  lwz       r0, 0xD0(r1)
	  stw       r30, 0x5C(r1)
	  lwz       r30, 0x16C(r16)
	  stw       r0, 0x1AC(r20)
	  lwz       r0, 0x5C(r1)
	  stw       r30, 0x60(r1)
	  lwz       r30, 0x170(r16)
	  stw       r0, 0x1B0(r20)
	  lwz       r0, 0x60(r1)
	  stw       r30, 0x64(r1)
	  lwz       r30, 0x174(r16)
	  stw       r0, 0x1B4(r20)
	  lwz       r0, 0x64(r1)
	  stw       r30, 0x68(r1)
	  lwz       r30, 0x178(r16)
	  stw       r0, 0x1B8(r20)
	  lwz       r0, 0x68(r1)
	  stw       r30, 0x6C(r1)
	  lwz       r30, 0x17C(r16)
	  stw       r0, 0x1BC(r20)
	  lwz       r0, 0x6C(r1)
	  stw       r30, 0x70(r1)
	  lwz       r30, 0x180(r16)
	  stw       r0, 0x1C0(r20)
	  lwz       r0, 0x70(r1)
	  stw       r30, 0x74(r1)
	  lwz       r30, 0x184(r16)
	  stw       r0, 0x1C4(r20)
	  lwz       r0, 0x74(r1)
	  stw       r30, 0x78(r1)
	  lwz       r30, 0x188(r16)
	  stw       r0, 0x1C8(r20)
	  lwz       r0, 0x78(r1)
	  stw       r30, 0x7C(r1)
	  lwz       r30, 0x18C(r16)
	  stw       r0, 0x1CC(r20)
	  lwz       r0, 0x7C(r1)
	  stw       r30, 0x80(r1)
	  lwz       r30, 0x190(r16)
	  stw       r0, 0x1D0(r20)
	  lwz       r0, 0x80(r1)
	  stw       r30, 0x84(r1)
	  lwz       r30, 0x194(r16)
	  stw       r0, 0x1D4(r20)
	  lwz       r0, 0x84(r1)
	  stw       r30, 0x88(r1)
	  lwz       r30, 0x198(r16)
	  stw       r0, 0x1D8(r20)
	  lwz       r0, 0x88(r1)
	  stw       r30, 0x8C(r1)
	  lwz       r30, 0x19C(r16)
	  stw       r0, 0x1DC(r20)
	  lwz       r0, 0x8C(r1)
	  stw       r30, 0x90(r1)
	  lwz       r30, 0x1A0(r16)
	  stw       r0, 0x1E0(r20)
	  lwz       r0, 0x90(r1)
	  stw       r30, 0x94(r1)
	  lwz       r30, 0x1A4(r16)
	  stw       r0, 0x1E4(r20)
	  lwz       r0, 0x94(r1)
	  stw       r30, 0x98(r1)
	  lwz       r30, 0x1A8(r16)
	  stw       r0, 0x1E8(r20)
	  lwz       r0, 0x98(r1)
	  stw       r30, 0x9C(r1)
	  lwz       r30, 0x1AC(r16)
	  stw       r0, 0x1EC(r20)
	  lwz       r0, 0x9C(r1)
	  stw       r30, 0xA0(r1)
	  lwz       r30, 0x1B0(r16)
	  stw       r0, 0x1F0(r20)
	  lwz       r0, 0xA0(r1)
	  stw       r30, 0xA4(r1)
	  lwz       r30, 0x1B4(r16)
	  stw       r0, 0x1F4(r20)
	  lwz       r0, 0xA4(r1)
	  stw       r30, 0xA8(r1)
	  lwz       r30, 0x1B8(r16)
	  stw       r0, 0x1F8(r20)
	  lwz       r0, 0xA8(r1)
	  lwz       r29, 0x108(r16)
	  lwz       r28, 0x10C(r16)
	  lwz       r27, 0x110(r16)
	  lwz       r26, 0x114(r16)
	  lwz       r25, 0x118(r16)
	  lwz       r24, 0x11C(r16)
	  lwz       r23, 0x120(r16)
	  lwz       r22, 0x124(r16)
	  lwz       r21, 0x128(r16)
	  lwz       r15, 0x12C(r16)
	  lwz       r14, 0x130(r16)
	  lwz       r12, 0x134(r16)
	  lwz       r11, 0x138(r16)
	  lwz       r10, 0x13C(r16)
	  lwz       r9, 0x140(r16)
	  lwz       r8, 0x144(r16)
	  lwz       r7, 0x148(r16)
	  lwz       r6, 0x14C(r16)
	  lwz       r5, 0x150(r16)
	  lwz       r4, 0x154(r16)
	  lwz       r3, 0x158(r16)
	  lwz       r31, 0x160(r16)
	  stw       r0, 0x1FC(r20)
	  mr        r0, r30
	  stw       r30, 0xAC(r1)
	  stw       r29, 0x150(r20)
	  stw       r28, 0x154(r20)
	  stw       r27, 0x158(r20)
	  stw       r26, 0x15C(r20)
	  stw       r25, 0x160(r20)
	  stw       r24, 0x164(r20)
	  stw       r23, 0x168(r20)
	  stw       r22, 0x16C(r20)
	  stw       r21, 0x170(r20)
	  stw       r15, 0x174(r20)
	  stw       r14, 0x178(r20)
	  stw       r12, 0x17C(r20)
	  stw       r11, 0x180(r20)
	  stw       r10, 0x184(r20)
	  stw       r9, 0x188(r20)
	  stw       r8, 0x18C(r20)
	  stw       r7, 0x190(r20)
	  stw       r6, 0x194(r20)
	  stw       r5, 0x198(r20)
	  stw       r4, 0x19C(r20)
	  stw       r3, 0x1A0(r20)
	  stw       r31, 0x1A8(r20)
	  stw       r0, 0x200(r20)
	  lwz       r30, 0x218(r16)
	  lwz       r0, 0x210(r16)
	  stw       r30, 0xD4(r1)
	  lwz       r30, 0x21C(r16)
	  stw       r0, 0x258(r20)
	  lwz       r0, 0xD4(r1)
	  stw       r30, 0xB0(r1)
	  lwz       r30, 0x220(r16)
	  stw       r0, 0x260(r20)
	  lwz       r0, 0xB0(r1)
	  stw       r30, 0xB4(r1)
	  lwz       r30, 0x224(r16)
	  stw       r0, 0x264(r20)
	  lwz       r0, 0xB4(r1)
	  stw       r30, 0xB8(r1)
	  lwz       r30, 0x228(r16)
	  stw       r0, 0x268(r20)
	  lwz       r0, 0xB8(r1)
	  stw       r30, 0xBC(r1)
	  lwz       r30, 0x22C(r16)
	  stw       r0, 0x26C(r20)
	  lwz       r0, 0xBC(r1)
	  stw       r30, 0xC0(r1)
	  lwz       r30, 0x230(r16)
	  stw       r0, 0x270(r20)
	  lwz       r0, 0xC0(r1)
	  lwz       r29, 0x1BC(r16)
	  lwz       r28, 0x1C0(r16)
	  lwz       r27, 0x1C4(r16)
	  lwz       r26, 0x1C8(r16)
	  lwz       r25, 0x1CC(r16)
	  lwz       r24, 0x1D0(r16)
	  lwz       r23, 0x1D4(r16)
	  lwz       r22, 0x1D8(r16)
	  lwz       r21, 0x1DC(r16)
	  lwz       r15, 0x1E0(r16)
	  lwz       r14, 0x1E4(r16)
	  lwz       r12, 0x1E8(r16)
	  lwz       r11, 0x1EC(r16)
	  lwz       r10, 0x1F0(r16)
	  lwz       r9, 0x1F4(r16)
	  lwz       r8, 0x1F8(r16)
	  lwz       r7, 0x1FC(r16)
	  lwz       r6, 0x200(r16)
	  lwz       r5, 0x204(r16)
	  lwz       r4, 0x208(r16)
	  lwz       r3, 0x20C(r16)
	  lwz       r31, 0x214(r16)
	  stw       r0, 0x274(r20)
	  mr        r0, r30
	  stw       r30, 0xC4(r1)
	  stw       r29, 0x204(r20)
	  stw       r28, 0x208(r20)
	  stw       r27, 0x20C(r20)
	  stw       r26, 0x210(r20)
	  stw       r25, 0x214(r20)
	  stw       r24, 0x218(r20)
	  stw       r23, 0x21C(r20)
	  stw       r22, 0x220(r20)
	  stw       r21, 0x224(r20)
	  stw       r15, 0x228(r20)
	  stw       r14, 0x22C(r20)
	  stw       r12, 0x230(r20)
	  stw       r11, 0x234(r20)
	  stw       r10, 0x238(r20)
	  stw       r9, 0x23C(r20)
	  stw       r8, 0x240(r20)
	  stw       r7, 0x244(r20)
	  stw       r6, 0x248(r20)
	  stw       r5, 0x24C(r20)
	  stw       r4, 0x250(r20)
	  stw       r3, 0x254(r20)
	  stw       r31, 0x25C(r20)
	  stw       r0, 0x278(r20)
	  stw       r17, 0x27C(r20)
	  stw       r18, 0x280(r20)
	  stw       r19, 0x284(r20)
	  stw       r17, 0x288(r20)
	  stw       r18, 0x28C(r20)
	  stw       r19, 0x290(r20)
	  stw       r17, 0x294(r20)
	  stw       r18, 0x298(r20)
	  stw       r19, 0x29C(r20)
	  stw       r17, 0x2A0(r20)
	  stw       r18, 0x2A4(r20)
	  stw       r19, 0x2A8(r20)
	  stw       r17, 0x2AC(r20)
	  stw       r18, 0x2B0(r20)
	  stw       r19, 0x2B4(r20)
	  lwz       r22, 0x234(r16)
	  lwz       r21, 0x238(r16)
	  lwz       r19, 0x23C(r16)
	  lwz       r18, 0x240(r16)
	  lwz       r17, 0x244(r16)
	  lwz       r15, 0x248(r16)
	  lwz       r14, 0x24C(r16)
	  lwz       r12, 0x250(r16)
	  lwz       r11, 0x254(r16)
	  lwz       r10, 0x258(r16)
	  lwz       r9, 0x25C(r16)
	  lwz       r8, 0x260(r16)
	  lwz       r7, 0x264(r16)
	  lwz       r6, 0x268(r16)
	  lwz       r5, 0x26C(r16)
	  lwz       r4, 0x270(r16)
	  lwz       r3, 0x274(r16)
	  lwz       r0, 0x278(r16)
	  stw       r22, 0x2B8(r20)
	  stw       r21, 0x2BC(r20)
	  stw       r19, 0x2C0(r20)
	  stw       r18, 0x2C4(r20)
	  stw       r17, 0x2C8(r20)
	  stw       r15, 0x2CC(r20)
	  stw       r14, 0x2D0(r20)
	  stw       r12, 0x2D4(r20)
	  stw       r11, 0x2D8(r20)
	  stw       r10, 0x2DC(r20)
	  stw       r9, 0x2E0(r20)
	  stw       r8, 0x2E4(r20)
	  stw       r7, 0x2E8(r20)
	  stw       r6, 0x2EC(r20)
	  stw       r5, 0x2F0(r20)
	  stw       r4, 0x2F4(r20)
	  stw       r3, 0x2F8(r20)
	  stw       r0, 0x2FC(r20)
	  lmw       r14, 0xD8(r1)
	  addi      r1, r1, 0x120
	  blr
	*/
}
