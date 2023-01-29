#include "types.h"

/*
 * --INFO--
 * Address:	800BC584
 * Size:	0000A8
 */
void TRKDoSetOption(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  subi      r31, r4, 0x66F0
	  stw       r30, 0x48(r1)
	  lbz       r0, 0x18(r3)
	  lbz       r30, 0x1C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x58
	  addi      r3, r31, 0
	  bl        -0x230
	  cmplwi    r30, 0
	  beq-      .loc_0x48
	  addi      r3, r31, 0x20
	  bl        -0x240
	  b         .loc_0x50

	.loc_0x48:
	  addi      r3, r31, 0x28
	  bl        -0x24C

	.loc_0x50:
	  mr        r3, r30
	  bl        0x4428

	.loc_0x58:
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7534
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        0x3FCC
	  lwz       r0, 0x54(r1)
	  li        r3, 0
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC62C
 * Size:	0000A8
 */
void TRKDoStop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  bl        0x1D1C
	  cmpwi     r3, 0x704
	  beq-      .loc_0x44
	  bge-      .loc_0x2C
	  cmpwi     r3, 0
	  beq-      .loc_0x3C
	  b         .loc_0x5C

	.loc_0x2C:
	  cmpwi     r3, 0x706
	  beq-      .loc_0x54
	  bge-      .loc_0x5C
	  b         .loc_0x4C

	.loc_0x3C:
	  li        r31, 0
	  b         .loc_0x60

	.loc_0x44:
	  li        r31, 0x21
	  b         .loc_0x60

	.loc_0x4C:
	  li        r31, 0x22
	  b         .loc_0x60

	.loc_0x54:
	  li        r31, 0x20
	  b         .loc_0x60

	.loc_0x5C:
	  li        r31, 0x1

	.loc_0x60:
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB75E4
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r0, 0x8(r1)
	  stb       r31, 0x10(r1)
	  bl        0x3F20
	  lwz       r0, 0x54(r1)
	  li        r3, 0
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC6D4
 * Size:	000220
 */
void TRKDoStep(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x164(r1)
	  stmw      r27, 0x14C(r1)
	  mr        r27, r3
	  bl        -0x860
	  lbz       r31, 0x18(r27)
	  lwz       r29, 0x20(r27)
	  cmpwi     r31, 0x10
	  lwz       r28, 0x24(r27)
	  beq-      .loc_0x58
	  bge-      .loc_0x4C
	  cmpwi     r31, 0x1
	  beq-      .loc_0xA0
	  bge-      .loc_0xF0
	  cmpwi     r31, 0
	  bge-      .loc_0x58
	  b         .loc_0xF0

	.loc_0x4C:
	  cmpwi     r31, 0x12
	  bge-      .loc_0xF0
	  b         .loc_0xA0

	.loc_0x58:
	  lbz       r30, 0x1C(r27)
	  cmplwi    r30, 0x1
	  bge-      .loc_0x12C
	  addi      r3, r1, 0x108
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7690
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x11
	  stb       r3, 0x10C(r1)
	  addi      r3, r1, 0x108
	  li        r4, 0x40
	  stw       r5, 0x108(r1)
	  stb       r0, 0x110(r1)
	  bl        0x3E70
	  li        r3, 0
	  b         .loc_0x20C

	.loc_0xA0:
	  bl        0x1E1C
	  cmplw     r3, r29
	  blt-      .loc_0xB4
	  cmplw     r3, r28
	  ble-      .loc_0x12C

	.loc_0xB4:
	  addi      r3, r1, 0xC8
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB76E0
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x11
	  stb       r3, 0xCC(r1)
	  addi      r3, r1, 0xC8
	  li        r4, 0x40
	  stw       r5, 0xC8(r1)
	  stb       r0, 0xD0(r1)
	  bl        0x3E20
	  li        r3, 0
	  b         .loc_0x20C

	.loc_0xF0:
	  addi      r3, r1, 0x88
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB771C
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x12
	  stb       r3, 0x8C(r1)
	  addi      r3, r1, 0x88
	  li        r4, 0x40
	  stw       r5, 0x88(r1)
	  stb       r0, 0x90(r1)
	  bl        0x3DE4
	  li        r3, 0
	  b         .loc_0x20C

	.loc_0x12C:
	  bl        0x1B80
	  cmpwi     r3, 0
	  bne-      .loc_0x174
	  addi      r3, r1, 0x48
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7764
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x16
	  stb       r3, 0x4C(r1)
	  addi      r3, r1, 0x48
	  li        r4, 0x40
	  stw       r5, 0x48(r1)
	  stb       r0, 0x50(r1)
	  bl        0x3D9C
	  li        r3, 0
	  b         .loc_0x20C

	.loc_0x174:
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB77A0
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        0x3D60
	  cmpwi     r31, 0x10
	  li        r3, 0
	  beq-      .loc_0x1DC
	  bge-      .loc_0x1D0
	  cmpwi     r31, 0x1
	  beq-      .loc_0x1F4
	  bge-      .loc_0x20C
	  cmpwi     r31, 0
	  bge-      .loc_0x1DC
	  b         .loc_0x20C

	.loc_0x1D0:
	  cmpwi     r31, 0x12
	  bge-      .loc_0x20C
	  b         .loc_0x1F4

	.loc_0x1DC:
	  subfic    r0, r31, 0x10
	  mr        r3, r30
	  cntlzw    r0, r0
	  rlwinm    r4,r0,27,5,31
	  bl        0x1D98
	  b         .loc_0x20C

	.loc_0x1F4:
	  subfic    r0, r31, 0x11
	  mr        r3, r29
	  cntlzw    r0, r0
	  mr        r4, r28
	  rlwinm    r5,r0,27,5,31
	  bl        0x1CC4

	.loc_0x20C:
	  lmw       r27, 0x14C(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC8F4
 * Size:	0000B0
 */
void TRKDoContinue(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r3, 0x1
	  stw       r0, 0x94(r1)
	  subi      r4, r4, 0x66BC
	  crclr     6, 0x6
	  bl        0x4C38
	  bl        0x1A6C
	  cmpwi     r3, 0
	  bne-      .loc_0x68
	  addi      r3, r1, 0x48
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7878
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x16
	  stb       r3, 0x4C(r1)
	  addi      r3, r1, 0x48
	  li        r4, 0x40
	  stw       r5, 0x48(r1)
	  stb       r0, 0x50(r1)
	  bl        0x3C88
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x68:
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB78B4
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        0x3C4C
	  bl        0x402C

	.loc_0xA0:
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000250
 */
void TRKDoFlushCache(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BC9A4
 * Size:	000290
 */
void TRKDoWriteRegisters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0xE4(r1)
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  stw       r28, 0xD0(r1)
	  mr        r28, r3
	  lbz       r31, 0x18(r3)
	  lhz       r30, 0x1C(r3)
	  lhz       r29, 0x20(r3)
	  bl        -0xB48
	  cmplw     r30, r29
	  ble-      .loc_0x78
	  addi      r3, r1, 0x4C
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7938
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x14
	  stb       r3, 0x50(r1)
	  addi      r3, r1, 0x4C
	  li        r4, 0x40
	  stw       r5, 0x4C(r1)
	  stb       r0, 0x54(r1)
	  bl        0x3BC8
	  li        r3, 0
	  b         .loc_0x270

	.loc_0x78:
	  mr        r3, r28
	  li        r4, 0x40
	  bl        -0xB98
	  cmpwi     r31, 0x2
	  beq-      .loc_0xEC
	  bge-      .loc_0xA0
	  cmpwi     r31, 0
	  beq-      .loc_0xAC
	  bge-      .loc_0xCC
	  b         .loc_0x12C

	.loc_0xA0:
	  cmpwi     r31, 0x4
	  bge-      .loc_0x12C
	  b         .loc_0x10C

	.loc_0xAC:
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r28
	  addi      r6, r1, 0x8
	  li        r7, 0
	  bl        0x2AA0
	  mr        r31, r3
	  b         .loc_0x130

	.loc_0xCC:
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r28
	  addi      r6, r1, 0x8
	  li        r7, 0
	  bl        0x2574
	  mr        r31, r3
	  b         .loc_0x130

	.loc_0xEC:
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r28
	  addi      r6, r1, 0x8
	  li        r7, 0
	  bl        0x23E4
	  mr        r31, r3
	  b         .loc_0x130

	.loc_0x10C:
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r28
	  addi      r6, r1, 0x8
	  li        r7, 0
	  bl        0x1F8C
	  mr        r31, r3
	  b         .loc_0x130

	.loc_0x12C:
	  li        r31, 0x703

	.loc_0x130:
	  mr        r3, r28
	  li        r4, 0
	  bl        -0xC20
	  cmpwi     r31, 0
	  bne-      .loc_0x17C
	  addi      r3, r1, 0x8C
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7A40
	  li        r3, 0x40
	  li        r0, 0x80
	  stw       r3, 0x8C(r1)
	  mr        r3, r28
	  addi      r4, r1, 0x8C
	  li        r5, 0x40
	  stb       r0, 0x90(r1)
	  stb       r31, 0x94(r1)
	  bl        -0xD30
	  mr        r31, r3

	.loc_0x17C:
	  cmpwi     r31, 0
	  beq-      .loc_0x234
	  cmpwi     r31, 0x703
	  beq-      .loc_0x1C0
	  bge-      .loc_0x1A8
	  cmpwi     r31, 0x701
	  beq-      .loc_0x1C8
	  bge-      .loc_0x1D8
	  cmpwi     r31, 0x302
	  beq-      .loc_0x1D0
	  b         .loc_0x1F8

	.loc_0x1A8:
	  cmpwi     r31, 0x706
	  beq-      .loc_0x1F0
	  bge-      .loc_0x1F8
	  cmpwi     r31, 0x705
	  bge-      .loc_0x1E8
	  b         .loc_0x1E0

	.loc_0x1C0:
	  li        r31, 0x12
	  b         .loc_0x1FC

	.loc_0x1C8:
	  li        r31, 0x14
	  b         .loc_0x1FC

	.loc_0x1D0:
	  li        r31, 0x2
	  b         .loc_0x1FC

	.loc_0x1D8:
	  li        r31, 0x15
	  b         .loc_0x1FC

	.loc_0x1E0:
	  li        r31, 0x21
	  b         .loc_0x1FC

	.loc_0x1E8:
	  li        r31, 0x22
	  b         .loc_0x1FC

	.loc_0x1F0:
	  li        r31, 0x20
	  b         .loc_0x1FC

	.loc_0x1F8:
	  li        r31, 0x3

	.loc_0x1FC:
	  addi      r3, r1, 0xC
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7AF8
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0x10(r1)
	  addi      r3, r1, 0xC
	  li        r4, 0x40
	  stw       r0, 0xC(r1)
	  stb       r31, 0x14(r1)
	  bl        0x3A0C
	  li        r3, 0
	  b         .loc_0x270

	.loc_0x234:
	  lis       r4, 0x8048
	  li        r3, 0x1
	  subi      r4, r4, 0x6690
	  crclr     6, 0x6
	  bl        0x4960
	  mr        r3, r28
	  bl        -0x13A8
	  mr        r31, r3
	  lis       r4, 0x8048
	  li        r3, 0x1
	  subi      r4, r4, 0x6670
	  mr        r5, r31
	  crclr     6, 0x6
	  bl        0x493C
	  mr        r3, r31

	.loc_0x270:
	  lwz       r0, 0xE4(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  lwz       r28, 0xD0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BCC34
 * Size:	0002E0
 */
void TRKDoReadRegisters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0xE4(r1)
	  stw       r31, 0xDC(r1)
	  subi      r31, r5, 0x66F0
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  mr        r29, r3
	  lhz       r4, 0x1C(r3)
	  lhz       r0, 0x20(r3)
	  cmplw     r4, r0
	  ble-      .loc_0x70
	  addi      r3, r1, 0x4C
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7BC0
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x14
	  stb       r3, 0x50(r1)
	  addi      r3, r1, 0x4C
	  li        r4, 0x40
	  stw       r5, 0x4C(r1)
	  stb       r0, 0x54(r1)
	  bl        0x3940
	  li        r3, 0
	  b         .loc_0x2C4

	.loc_0x70:
	  li        r4, 0x80
	  li        r0, 0x468
	  stb       r4, 0x90(r1)
	  li        r4, 0
	  stw       r0, 0x8C(r1)
	  bl        -0xDFC
	  lwz       r5, 0x8(r29)
	  addi      r4, r31, 0x98
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x487C
	  mr        r3, r29
	  addi      r4, r1, 0x8C
	  li        r5, 0x40
	  bl        -0x10E4
	  lwz       r5, 0x8(r29)
	  addi      r4, r31, 0x98
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x4858
	  mr        r5, r29
	  addi      r6, r1, 0x8
	  li        r3, 0
	  li        r4, 0x24
	  li        r7, 0x1
	  bl        0x27FC
	  mr        r30, r3
	  addi      r4, r31, 0xC0
	  li        r3, 0x4
	  mr        r5, r30
	  crclr     6, 0x6
	  bl        0x4828
	  lwz       r5, 0x8(r29)
	  addi      r4, r31, 0x98
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x4814
	  cmpwi     r30, 0
	  bne-      .loc_0x128
	  mr        r5, r29
	  addi      r6, r1, 0x8
	  li        r3, 0
	  li        r4, 0x21
	  li        r7, 0x1
	  bl        0x22A4
	  mr        r30, r3

	.loc_0x128:
	  mr        r5, r30
	  addi      r4, r31, 0xF8
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x47DC
	  lwz       r5, 0x8(r29)
	  addi      r4, r31, 0x98
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x47C8
	  cmpwi     r30, 0
	  bne-      .loc_0x174
	  mr        r5, r29
	  addi      r6, r1, 0x8
	  li        r3, 0
	  li        r4, 0x60
	  li        r7, 0x1
	  bl        0x20E8
	  mr        r30, r3

	.loc_0x174:
	  mr        r5, r30
	  addi      r4, r31, 0x120
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x4790
	  lwz       r5, 0x8(r29)
	  addi      r4, r31, 0x98
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x477C
	  cmpwi     r30, 0
	  bne-      .loc_0x1C0
	  mr        r5, r29
	  addi      r6, r1, 0x8
	  li        r3, 0
	  li        r4, 0x1F
	  li        r7, 0x1
	  bl        0x1C64
	  mr        r30, r3

	.loc_0x1C0:
	  mr        r5, r30
	  addi      r4, r31, 0x150
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x4744
	  lwz       r5, 0x8(r29)
	  addi      r4, r31, 0x98
	  li        r3, 0x4
	  crclr     6, 0x6
	  bl        0x4730
	  cmpwi     r30, 0
	  beq-      .loc_0x290
	  cmpwi     r30, 0x704
	  beq-      .loc_0x23C
	  bge-      .loc_0x214
	  cmpwi     r30, 0x702
	  beq-      .loc_0x234
	  bge-      .loc_0x224
	  cmpwi     r30, 0x701
	  bge-      .loc_0x22C
	  b         .loc_0x254

	.loc_0x214:
	  cmpwi     r30, 0x706
	  beq-      .loc_0x24C
	  bge-      .loc_0x254
	  b         .loc_0x244

	.loc_0x224:
	  li        r30, 0x12
	  b         .loc_0x258

	.loc_0x22C:
	  li        r30, 0x14
	  b         .loc_0x258

	.loc_0x234:
	  li        r30, 0x15
	  b         .loc_0x258

	.loc_0x23C:
	  li        r30, 0x21
	  b         .loc_0x258

	.loc_0x244:
	  li        r30, 0x22
	  b         .loc_0x258

	.loc_0x24C:
	  li        r30, 0x20
	  b         .loc_0x258

	.loc_0x254:
	  li        r30, 0x3

	.loc_0x258:
	  addi      r3, r1, 0xC
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7DE4
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0x10(r1)
	  addi      r3, r1, 0xC
	  li        r4, 0x40
	  stw       r0, 0xC(r1)
	  stb       r30, 0x14(r1)
	  bl        0x3720
	  li        r3, 0
	  b         .loc_0x2C4

	.loc_0x290:
	  addi      r4, r31, 0x60
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x4678
	  mr        r3, r29
	  bl        -0x1690
	  addi      r4, r31, 0x80
	  mr        r31, r3
	  li        r3, 0x1
	  mr        r5, r31
	  crclr     6, 0x6
	  bl        0x4658
	  mr        r3, r31

	.loc_0x2C4:
	  lwz       r0, 0xE4(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BCF14
 * Size:	00023C
 */
void TRKDoWriteMemory(void)
{
	/*
	.loc_0x0:
	  rlwinm    r11,r1,0,27,31
	  mr        r12, r1
	  subfic    r11, r11, -0x940
	  stwux     r1, r1, r11
	  mflr      r0
	  stw       r0, 0x4(r12)
	  stmw      r27, -0x14(r12)
	  mr        r27, r3
	  lis       r3, 0x8048
	  subi      r31, r3, 0x66F0
	  addi      r4, r31, 0x180
	  li        r3, 0x1
	  lwz       r28, 0x20(r27)
	  lhz       r29, 0x1C(r27)
	  lbz       r30, 0x18(r27)
	  mr        r6, r28
	  lbz       r5, 0x14(r27)
	  mr        r7, r29
	  mr        r8, r30
	  crclr     6, 0x6
	  bl        0x45E4
	  rlwinm.   r0,r30,0,30,30
	  beq-      .loc_0x98
	  addi      r3, r1, 0x64
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7EC8
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x12
	  stb       r3, 0x68(r1)
	  addi      r3, r1, 0x64
	  li        r4, 0x40
	  stw       r5, 0x64(r1)
	  stb       r0, 0x6C(r1)
	  bl        0x3638
	  li        r3, 0
	  b         .loc_0x224

	.loc_0x98:
	  stw       r29, 0x20(r1)
	  mr        r3, r27
	  li        r4, 0x40
	  bl        -0x112C
	  rlwinm.   r0,r30,0,25,25
	  beq-      .loc_0xE4
	  rlwinm    r0,r28,0,27,31
	  addi      r4, r1, 0x100
	  lwz       r5, 0x20(r1)
	  mr        r3, r27
	  add       r4, r4, r0
	  bl        -0x127C
	  mr        r4, r28
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  li        r6, 0
	  bl        0x1298
	  mr        r30, r3
	  b         .loc_0x114

	.loc_0xE4:
	  lwz       r5, 0x20(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x100
	  bl        -0x12A8
	  rlwinm    r0,r30,29,31,31
	  mr        r4, r28
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  xori      r6, r0, 0x1
	  li        r7, 0
	  bl        0x2624
	  mr        r30, r3

	.loc_0x114:
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x1174
	  cmpwi     r30, 0
	  bne-      .loc_0x160
	  addi      r3, r1, 0xA4
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7F94
	  li        r3, 0x40
	  li        r0, 0x80
	  stw       r3, 0xA4(r1)
	  mr        r3, r27
	  addi      r4, r1, 0xA4
	  li        r5, 0x40
	  stb       r0, 0xA8(r1)
	  stb       r30, 0xAC(r1)
	  bl        -0x1284
	  mr        r30, r3

	.loc_0x160:
	  cmpwi     r30, 0
	  beq-      .loc_0x1F0
	  subi      r0, r30, 0x700
	  cmplwi    r0, 0x6
	  bgt-      .loc_0x1B4
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x6878
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r30, 0x15
	  b         .loc_0x1B8
	  li        r30, 0x13
	  b         .loc_0x1B8
	  li        r30, 0x21
	  b         .loc_0x1B8
	  li        r30, 0x22
	  b         .loc_0x1B8
	  li        r30, 0x20
	  b         .loc_0x1B8

	.loc_0x1B4:
	  li        r30, 0x3

	.loc_0x1B8:
	  addi      r3, r1, 0x24
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8024
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0x28(r1)
	  addi      r3, r1, 0x24
	  li        r4, 0x40
	  stw       r0, 0x24(r1)
	  stb       r30, 0x2C(r1)
	  bl        0x34E0
	  li        r3, 0
	  b         .loc_0x224

	.loc_0x1F0:
	  addi      r4, r31, 0x60
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x4438
	  mr        r3, r27
	  bl        -0x18D0
	  addi      r4, r31, 0x80
	  mr        r31, r3
	  li        r3, 0x1
	  mr        r5, r31
	  crclr     6, 0x6
	  bl        0x4418
	  mr        r3, r31

	.loc_0x224:
	  lwz       r10, 0x0(r1)
	  lmw       r27, -0x14(r10)
	  lwz       r0, 0x4(r10)
	  mtlr      r0
	  mr        r1, r10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD150
 * Size:	000244
 */
void TRKDoReadMemory(void)
{
	/*
	.loc_0x0:
	  rlwinm    r11,r1,0,27,31
	  mr        r12, r1
	  subfic    r11, r11, -0x940
	  stwux     r1, r1, r11
	  mflr      r0
	  stw       r0, 0x4(r12)
	  stmw      r26, -0x18(r12)
	  mr        r31, r3
	  lis       r3, 0x8048
	  subi      r29, r3, 0x66F0
	  addi      r4, r29, 0x1B0
	  li        r3, 0x1
	  lwz       r26, 0x20(r31)
	  lhz       r27, 0x1C(r31)
	  lbz       r30, 0x18(r31)
	  mr        r6, r26
	  lbz       r5, 0x14(r31)
	  mr        r7, r27
	  mr        r8, r30
	  crclr     6, 0x6
	  bl        0x43A8
	  rlwinm.   r0,r30,0,30,30
	  beq-      .loc_0x98
	  addi      r3, r1, 0x64
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8104
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x12
	  stb       r3, 0x68(r1)
	  addi      r3, r1, 0x64
	  li        r4, 0x40
	  stw       r5, 0x64(r1)
	  stb       r0, 0x6C(r1)
	  bl        0x33FC
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x98:
	  rlwinm.   r28,r30,0,25,25
	  stw       r27, 0x20(r1)
	  beq-      .loc_0xC0
	  mr        r4, r26
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  li        r6, 0x1
	  bl        0x1080
	  mr        r30, r3
	  b         .loc_0xE0

	.loc_0xC0:
	  rlwinm    r0,r30,29,31,31
	  mr        r4, r26
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  xori      r6, r0, 0x1
	  li        r7, 0x1
	  bl        0x241C
	  mr        r30, r3

	.loc_0xE0:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x137C
	  cmpwi     r30, 0
	  bne-      .loc_0x168
	  addi      r3, r1, 0xA4
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB819C
	  lwz       r4, 0x20(r1)
	  li        r0, 0x80
	  stb       r30, 0xAC(r1)
	  mr        r3, r31
	  addi      r4, r4, 0x40
	  li        r5, 0x40
	  stw       r4, 0xA4(r1)
	  addi      r4, r1, 0xA4
	  stb       r0, 0xA8(r1)
	  bl        -0x1490
	  cmpwi     r28, 0
	  beq-      .loc_0x154
	  rlwinm    r0,r26,0,27,31
	  addi      r4, r1, 0x100
	  lwz       r5, 0x20(r1)
	  mr        r3, r31
	  add       r4, r4, r0
	  bl        -0x14B0
	  mr        r30, r3
	  b         .loc_0x168

	.loc_0x154:
	  lwz       r5, 0x20(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x100
	  bl        -0x14C8
	  mr        r30, r3

	.loc_0x168:
	  cmpwi     r30, 0
	  beq-      .loc_0x1F8
	  subi      r0, r30, 0x700
	  cmplwi    r0, 0x6
	  bgt-      .loc_0x1BC
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x6894
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r28, 0x15
	  b         .loc_0x1C0
	  li        r28, 0x13
	  b         .loc_0x1C0
	  li        r28, 0x21
	  b         .loc_0x1C0
	  li        r28, 0x22
	  b         .loc_0x1C0
	  li        r28, 0x20
	  b         .loc_0x1C0

	.loc_0x1BC:
	  li        r28, 0x3

	.loc_0x1C0:
	  addi      r3, r1, 0x24
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8268
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0x28(r1)
	  addi      r3, r1, 0x24
	  li        r4, 0x40
	  stw       r0, 0x24(r1)
	  stb       r28, 0x2C(r1)
	  bl        0x329C
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x1F8:
	  addi      r4, r29, 0x60
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x41F4
	  mr        r3, r31
	  bl        -0x1B14
	  addi      r4, r29, 0x80
	  mr        r29, r3
	  li        r3, 0x1
	  mr        r5, r29
	  crclr     6, 0x6
	  bl        0x41D4
	  mr        r3, r29

	.loc_0x22C:
	  lwz       r10, 0x0(r1)
	  lmw       r26, -0x18(r10)
	  lwz       r0, 0x4(r10)
	  mtlr      r0
	  mr        r1, r10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TRKDoCPUType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BD394
 * Size:	000008
 */
u32 TRKDoSupportMask(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800BD39C
 * Size:	000008
 */
u32 TRKDoVersions(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800BD3A4
 * Size:	000058
 */
void TRKDoOverride(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0x40
	  stw       r0, 0x54(r1)
	  addi      r3, r1, 0x8
	  bl        -0xB8308
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        0x31F8
	  bl        0x2E84
	  lwz       r0, 0x54(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD3FC
 * Size:	000058
 */
void TRKDoReset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0x40
	  stw       r0, 0x54(r1)
	  addi      r3, r1, 0x8
	  bl        -0xB8360
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        0x31A0
	  bl        -0xB83B4
	  lwz       r0, 0x54(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD454
 * Size:	000078
 */
void TRKDoDisconnect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  li        r5, 0x40
	  stw       r0, 0x64(r1)
	  addi      r4, r3, 0x4278
	  li        r0, 0
	  addi      r3, r1, 0x14
	  stw       r0, 0x0(r4)
	  li        r4, 0
	  bl        -0xB83C8
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0x18(r1)
	  addi      r3, r1, 0x14
	  li        r4, 0x40
	  stw       r5, 0x14(r1)
	  stb       r0, 0x1C(r1)
	  bl        0x3138
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  bl        -0x2000
	  addi      r3, r1, 0x8
	  bl        -0x1FF0
	  lwz       r0, 0x64(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD4CC
 * Size:	000064
 */
void TRKDoConnect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  li        r5, 0x40
	  stw       r0, 0x54(r1)
	  addi      r4, r3, 0x4278
	  li        r0, 0x1
	  addi      r3, r1, 0x8
	  stw       r0, 0x0(r4)
	  li        r4, 0
	  bl        -0xB8440
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0
	  stb       r3, 0xC(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0x40
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        0x30C0
	  lwz       r0, 0x54(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void TRKDoUnsupported(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TRKDoError(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TRKStandardACK(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TRKSendACK(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void TRKMessageIntoReply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BD530
 * Size:	00000C
 */
void SetTRKConnected(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  stw       r3, 0x4278(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD53C
 * Size:	000010
 */
void GetTRKConnected(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4278
	  lwz       r3, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD54C
 * Size:	0000A8
 */
void OutputData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r4
	  mr        r31, r3
	  subi      r29, r6, 0x6514
	  subi      r30, r5, 0x650C
	  li        r28, 0
	  b         .loc_0x78

	.loc_0x30:
	  lbz       r5, 0x0(r31)
	  mr        r4, r29
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x3FBC
	  rlwinm    r0,r28,28,0,3
	  rlwinm    r3,r28,1,31,31
	  sub       r0, r0, r3
	  rlwinm    r0,r0,4,0,31
	  add       r0, r0, r3
	  cmpwi     r0, 0xF
	  bne-      .loc_0x70
	  mr        r4, r30
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x3F90

	.loc_0x70:
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x1

	.loc_0x78:
	  cmpw      r28, r27
	  blt+      .loc_0x30
	  lis       r4, 0x8048
	  li        r3, 0x8
	  subi      r4, r4, 0x650C
	  crclr     6, 0x6
	  bl        0x3F6C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
