#include "types.h"

/*
 * --INFO--
 * Address:	80098A68
 * Size:	000028
 */
void JASWSParser::getGroupCount(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x14(r3)
	  bl        0x4A4
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098A90
 * Size:	000204
 */
void JASWSParser::createBasicWaveBank(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r16, 0x30(r1)
	  mr        r16, r3
	  bl        0x358C
	  mr        r29, r3
	  bl        -0x752F8
	  mr        r25, r3
	  mr        r28, r16
	  mr        r4, r29
	  li        r3, 0x2C
	  li        r5, 0
	  bl        -0x74B84
	  mr.       r24, r3
	  beq-      .loc_0x48
	  bl        0x1390
	  mr        r24, r3

	.loc_0x48:
	  cmplwi    r24, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x1F0

	.loc_0x58:
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        0x42C
	  mr        r23, r3
	  mr        r3, r24
	  lwz       r4, 0x8(r23)
	  bl        0x14E8
	  mr        r31, r23
	  li        r27, 0
	  li        r26, 0
	  li        r30, 0
	  b         .loc_0x1BC

	.loc_0x88:
	  lwz       r4, 0xC(r31)
	  mr        r3, r28
	  bl        0x3E4
	  mr        r4, r3
	  mr        r3, r28
	  lwz       r4, 0xC(r4)
	  bl        0x3BC
	  mr        r22, r3
	  mr        r3, r24
	  mr        r4, r26
	  bl        0x1484
	  lwz       r4, 0x10(r28)
	  mr        r18, r3
	  mr        r3, r28
	  bl        0x384
	  addi      r0, r30, 0x8
	  lwzx      r4, r3, r0
	  mr        r3, r28
	  bl        0x35C
	  lwz       r4, 0x4(r22)
	  mr        r21, r3
	  mr        r3, r18
	  bl        0x1760
	  mr        r20, r21
	  mr        r19, r22
	  li        r17, 0
	  b         .loc_0x198

	.loc_0xF4:
	  lwz       r4, 0x74(r20)
	  mr        r3, r28
	  bl        0x318
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x8(r1)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x9(r1)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0xC(r1)
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x10(r3)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x14(r3)
	  stw       r0, 0x1C(r1)
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x20(r1)
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x24(r1)
	  lha       r0, 0x20(r3)
	  sth       r0, 0x28(r1)
	  lha       r0, 0x22(r3)
	  mr        r3, r28
	  sth       r0, 0x2A(r1)
	  lwz       r4, 0x8(r19)
	  bl        0x29C
	  lwz       r0, 0x0(r3)
	  mr        r3, r18
	  mr        r4, r17
	  addi      r6, r1, 0x8
	  rlwinm    r5,r0,0,16,31
	  mr        r16, r5
	  bl        0x1954
	  cmplw     r27, r16
	  bge-      .loc_0x18C
	  mr        r27, r16

	.loc_0x18C:
	  addi      r20, r20, 0x4
	  addi      r19, r19, 0x4
	  addi      r17, r17, 0x1

	.loc_0x198:
	  lwz       r0, 0x4(r22)
	  cmplw     r17, r0
	  blt+      .loc_0xF4
	  mr        r3, r18
	  mr        r4, r21
	  bl        0x330C
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x4
	  addi      r26, r26, 0x1

	.loc_0x1BC:
	  lwz       r0, 0x8(r23)
	  cmplw     r26, r0
	  blt+      .loc_0x88
	  mr        r3, r24
	  addi      r4, r27, 0x1
	  bl        0x1470
	  mr        r3, r29
	  bl        -0x754B4
	  lwz       r0, -0x75F0(r13)
	  sub       r4, r25, r3
	  mr        r3, r24
	  add       r0, r0, r4
	  stw       r0, -0x75F0(r13)

	.loc_0x1F0:
	  lmw       r16, 0x30(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098C94
 * Size:	0001F8
 */
void JASWSParser::createSimpleWaveBank(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r23, 0x3C(r1)
	  mr        r23, r3
	  bl        0x3388
	  mr        r25, r3
	  bl        -0x754FC
	  lwz       r4, 0x14(r23)
	  mr        r31, r3
	  mr        r24, r23
	  mr        r3, r23
	  bl        0x258
	  mr        r23, r3
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x1E4

	.loc_0x4C:
	  mr        r4, r25
	  li        r3, 0x68
	  li        r5, 0
	  bl        -0x74DAC
	  mr.       r30, r3
	  beq-      .loc_0x6C
	  bl        0x29CC
	  mr        r30, r3

	.loc_0x6C:
	  cmplwi    r30, 0
	  bne-      .loc_0x7C
	  li        r3, 0
	  b         .loc_0x1E4

	.loc_0x7C:
	  lwz       r4, 0xC(r23)
	  mr        r3, r24
	  li        r26, 0
	  bl        0x1E8
	  mr        r4, r3
	  mr        r3, r24
	  lwz       r4, 0xC(r4)
	  bl        0x1C0
	  lwz       r4, 0x10(r24)
	  mr        r29, r3
	  mr        r3, r24
	  bl        0x198
	  mr        r4, r3
	  mr        r3, r24
	  lwz       r4, 0x8(r4)
	  bl        0x170
	  mr        r23, r29
	  mr        r28, r3
	  li        r27, 0
	  b         .loc_0xF4

	.loc_0xCC:
	  lwz       r4, 0x8(r23)
	  mr        r3, r24
	  bl        .loc_0x1F8
	  lwz       r0, 0x0(r3)
	  rlwinm    r0,r0,0,16,31
	  cmplw     r26, r0
	  bge-      .loc_0xEC
	  mr        r26, r0

	.loc_0xEC:
	  addi      r23, r23, 0x4
	  addi      r27, r27, 0x1

	.loc_0xF4:
	  lwz       r0, 0x4(r29)
	  cmplw     r27, r0
	  blt+      .loc_0xCC
	  mr        r3, r30
	  addi      r4, r26, 0x1
	  bl        0x2AB8
	  mr        r27, r28
	  mr        r26, r29
	  li        r23, 0
	  b         .loc_0x1B0

	.loc_0x11C:
	  lwz       r4, 0x74(r27)
	  mr        r3, r24
	  bl        0xEC
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x8(r1)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x9(r1)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0xC(r1)
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x10(r3)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x14(r3)
	  stw       r0, 0x1C(r1)
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x20(r1)
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x24(r1)
	  lha       r0, 0x20(r3)
	  sth       r0, 0x28(r1)
	  lha       r0, 0x22(r3)
	  mr        r3, r24
	  sth       r0, 0x2A(r1)
	  lwz       r4, 0x8(r26)
	  bl        .loc_0x1F8
	  mr        r4, r3
	  mr        r3, r30
	  lwz       r0, 0x0(r4)
	  addi      r5, r1, 0x8
	  rlwinm    r4,r0,0,16,31
	  bl        0x2AEC
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x4
	  addi      r23, r23, 0x1

	.loc_0x1B0:
	  lwz       r0, 0x4(r29)
	  cmplw     r23, r0
	  blt+      .loc_0x11C
	  mr        r4, r28
	  addi      r3, r30, 0x4
	  bl        0x30F0
	  mr        r3, r25
	  bl        -0x756AC
	  lwz       r0, -0x75F0(r13)
	  sub       r4, r31, r3
	  mr        r3, r30
	  add       r0, r0, r4
	  stw       r0, -0x75F0(r13)

	.loc_0x1E4:
	  lmw       r23, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x1F8:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASWSParser::getUsedHeapSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098E8C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TCtrlWave>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098EA4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TWave>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098EBC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TWaveArchive>(const void*,
                                                      unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098ED4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TWaveArchiveBank>(const void*,
                                                          unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098EEC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TCtrl>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098F04
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TCtrlScene>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098F1C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASWSParser::TCtrlGroup>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}
