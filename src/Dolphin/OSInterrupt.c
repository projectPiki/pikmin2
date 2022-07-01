#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800EEC38
 * Size:	000014
 */
int OSDisableInterrupts(void)
{
	/*
	.loc_0x0:
	  mfmsr     r3
	  rlwinm    r4,r3,0,17,15
	  mtmsr     r4
	  rlwinm    r3,r3,17,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EEC4C
 * Size:	000014
 */
void OSEnableInterrupts(void)
{
	/*
	.loc_0x0:
	  mfmsr     r3
	  ori       r4, r3, 0x8000
	  mtmsr     r4
	  rlwinm    r3,r3,17,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EEC60
 * Size:	000024
 */
void OSRestoreInterrupts(int)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  mfmsr     r4
	  beq-      .loc_0x14
	  ori       r5, r4, 0x8000
	  b         .loc_0x18

	.loc_0x14:
	  rlwinm    r5,r4,0,17,15

	.loc_0x18:
	  mtmsr     r5
	  rlwinm    r3,r4,17,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EEC84
 * Size:	00001C
 */
void __OSSetInterruptHandler(int, void*)
{
	/*
	.loc_0x0:
	  extsh     r0, r3
	  lwz       r3, -0x7080(r13)
	  rlwinm    r0,r0,2,0,29
	  add       r5, r3, r0
	  lwz       r3, 0x0(r5)
	  stw       r4, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EECA0
 * Size:	000014
 */
void __OSGetInterruptHandler(void)
{
	/*
	.loc_0x0:
	  extsh     r0, r3
	  lwz       r3, -0x7080(r13)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EECB4
 * Size:	000074
 */
void __OSInterruptInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  lis       r31, 0x8000
	  addi      r0, r31, 0x3040
	  stw       r0, -0x7080(r13)
	  li        r4, 0
	  li        r5, 0x80
	  lwz       r3, -0x7080(r13)
	  bl        -0xE9C28
	  li        r0, 0
	  stw       r0, 0xC4(r31)
	  lis       r3, 0xCC00
	  addi      r4, r3, 0x3000
	  stw       r0, 0xC8(r31)
	  li        r0, 0xF0
	  li        r3, -0x20
	  stw       r0, 0x4(r4)
	  bl        0x300
	  lis       r3, 0x800F
	  subi      r4, r3, 0xBAC
	  li        r3, 0x4
	  bl        -0x3414
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EED28
 * Size:	0002D8
 */
void SetInterruptMask(void)
{
	/*
	.loc_0x0:
	  cntlzw    r0, r3
	  cmpwi     r0, 0xC
	  bge-      .loc_0x2C
	  cmpwi     r0, 0x8
	  beq-      .loc_0x10C
	  bge-      .loc_0x13C
	  cmpwi     r0, 0x5
	  bge-      .loc_0xB8
	  cmpwi     r0, 0
	  bge-      .loc_0x4C
	  b         .loc_0x2D4

	.loc_0x2C:
	  cmpwi     r0, 0x11
	  bge-      .loc_0x40
	  cmpwi     r0, 0xF
	  bge-      .loc_0x1E0
	  b         .loc_0x18C

	.loc_0x40:
	  cmpwi     r0, 0x1B
	  bge-      .loc_0x2D4
	  b         .loc_0x220

	.loc_0x4C:
	  rlwinm    r0,r4,0,0,0
	  cmplwi    r0, 0
	  li        r5, 0
	  bne-      .loc_0x60
	  ori       r5, r5, 0x1

	.loc_0x60:
	  rlwinm    r0,r4,0,1,1
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  ori       r5, r5, 0x2

	.loc_0x70:
	  rlwinm    r0,r4,0,2,2
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  ori       r5, r5, 0x4

	.loc_0x80:
	  rlwinm    r0,r4,0,3,3
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  ori       r5, r5, 0x8

	.loc_0x90:
	  rlwinm    r0,r4,0,4,4
	  cmplwi    r0, 0
	  bne-      .loc_0xA0
	  ori       r5, r5, 0x10

	.loc_0xA0:
	  lis       r4, 0xCC00
	  rlwinm    r0,r5,0,16,31
	  addi      r4, r4, 0x4000
	  sth       r0, 0x1C(r4)
	  rlwinm    r3,r3,0,5,31
	  b         .loc_0x2D4

	.loc_0xB8:
	  lis       r5, 0xCC00
	  addi      r5, r5, 0x5000
	  addi      r5, r5, 0xA
	  rlwinm    r0,r4,0,5,5
	  lhz       r6, 0x0(r5)
	  cmplwi    r0, 0
	  rlwinm    r6,r6,0,29,22
	  bne-      .loc_0xDC
	  ori       r6, r6, 0x10

	.loc_0xDC:
	  rlwinm    r0,r4,0,6,6
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  ori       r6, r6, 0x40

	.loc_0xEC:
	  rlwinm    r0,r4,0,7,7
	  cmplwi    r0, 0
	  bne-      .loc_0xFC
	  ori       r6, r6, 0x100

	.loc_0xFC:
	  rlwinm    r0,r6,0,16,31
	  sth       r0, 0x0(r5)
	  rlwinm    r3,r3,0,8,4
	  b         .loc_0x2D4

	.loc_0x10C:
	  rlwinm    r0,r4,0,8,8
	  lis       r4, 0xCC00
	  cmplwi    r0, 0
	  lwz       r5, 0x6C00(r4)
	  li        r0, -0x2D
	  and       r5, r5, r0
	  bne-      .loc_0x12C
	  ori       r5, r5, 0x4

	.loc_0x12C:
	  lis       r4, 0xCC00
	  stw       r5, 0x6C00(r4)
	  rlwinm    r3,r3,0,9,7
	  b         .loc_0x2D4

	.loc_0x13C:
	  rlwinm    r0,r4,0,9,9
	  lis       r5, 0xCC00
	  cmplwi    r0, 0
	  lwz       r5, 0x6800(r5)
	  li        r0, -0x2C10
	  and       r5, r5, r0
	  bne-      .loc_0x15C
	  ori       r5, r5, 0x1

	.loc_0x15C:
	  rlwinm    r0,r4,0,10,10
	  cmplwi    r0, 0
	  bne-      .loc_0x16C
	  ori       r5, r5, 0x4

	.loc_0x16C:
	  rlwinm    r0,r4,0,11,11
	  cmplwi    r0, 0
	  bne-      .loc_0x17C
	  ori       r5, r5, 0x400

	.loc_0x17C:
	  lis       r4, 0xCC00
	  stw       r5, 0x6800(r4)
	  rlwinm    r3,r3,0,12,8
	  b         .loc_0x2D4

	.loc_0x18C:
	  lis       r5, 0xCC00
	  addi      r6, r5, 0x6800
	  addi      r6, r6, 0x14
	  rlwinm    r0,r4,0,12,12
	  lwz       r7, 0x0(r6)
	  li        r5, -0xC10
	  cmplwi    r0, 0
	  and       r7, r7, r5
	  bne-      .loc_0x1B4
	  ori       r7, r7, 0x1

	.loc_0x1B4:
	  rlwinm    r0,r4,0,13,13
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  ori       r7, r7, 0x4

	.loc_0x1C4:
	  rlwinm    r0,r4,0,14,14
	  cmplwi    r0, 0
	  bne-      .loc_0x1D4
	  ori       r7, r7, 0x400

	.loc_0x1D4:
	  stw       r7, 0x0(r6)
	  rlwinm    r3,r3,0,15,11
	  b         .loc_0x2D4

	.loc_0x1E0:
	  lis       r5, 0xCC00
	  addi      r5, r5, 0x6800
	  addi      r5, r5, 0x28
	  rlwinm    r0,r4,0,15,15
	  lwz       r6, 0x0(r5)
	  cmplwi    r0, 0
	  rlwinm    r6,r6,0,0,27
	  bne-      .loc_0x204
	  ori       r6, r6, 0x1

	.loc_0x204:
	  rlwinm    r0,r4,0,16,16
	  cmplwi    r0, 0
	  bne-      .loc_0x214
	  ori       r6, r6, 0x4

	.loc_0x214:
	  stw       r6, 0x0(r5)
	  rlwinm    r3,r3,0,17,14
	  b         .loc_0x2D4

	.loc_0x220:
	  rlwinm    r0,r4,0,17,17
	  cmplwi    r0, 0
	  li        r5, 0xF0
	  bne-      .loc_0x234
	  ori       r5, r5, 0x800

	.loc_0x234:
	  rlwinm    r0,r4,0,20,20
	  cmplwi    r0, 0
	  bne-      .loc_0x244
	  ori       r5, r5, 0x8

	.loc_0x244:
	  rlwinm    r0,r4,0,21,21
	  cmplwi    r0, 0
	  bne-      .loc_0x254
	  ori       r5, r5, 0x4

	.loc_0x254:
	  rlwinm    r0,r4,0,22,22
	  cmplwi    r0, 0
	  bne-      .loc_0x264
	  ori       r5, r5, 0x2

	.loc_0x264:
	  rlwinm    r0,r4,0,23,23
	  cmplwi    r0, 0
	  bne-      .loc_0x274
	  ori       r5, r5, 0x1

	.loc_0x274:
	  rlwinm    r0,r4,0,24,24
	  cmplwi    r0, 0
	  bne-      .loc_0x284
	  ori       r5, r5, 0x100

	.loc_0x284:
	  rlwinm    r0,r4,0,25,25
	  cmplwi    r0, 0
	  bne-      .loc_0x294
	  ori       r5, r5, 0x1000

	.loc_0x294:
	  rlwinm    r0,r4,0,18,18
	  cmplwi    r0, 0
	  bne-      .loc_0x2A4
	  ori       r5, r5, 0x200

	.loc_0x2A4:
	  rlwinm    r0,r4,0,19,19
	  cmplwi    r0, 0
	  bne-      .loc_0x2B4
	  ori       r5, r5, 0x400

	.loc_0x2B4:
	  rlwinm    r0,r4,0,26,26
	  cmplwi    r0, 0
	  bne-      .loc_0x2C4
	  ori       r5, r5, 0x2000

	.loc_0x2C4:
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x3000
	  stw       r5, 0x4(r4)
	  rlwinm    r3,r3,0,27,16

	.loc_0x2D4:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void OSGetInterruptMask(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void OSSetInterruptMask(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EF000
 * Size:	000088
 */
void __OSMaskInterrupts(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r31, r3
	  bl        -0x3E4
	  lis       r4, 0x8000
	  lwz       r29, 0xC4(r4)
	  mr        r30, r3
	  lwz       r5, 0xC8(r4)
	  or        r0, r29, r5
	  andc      r3, r31, r0
	  or        r31, r31, r29
	  stw       r31, 0xC4(r4)
	  or        r31, r31, r5
	  b         .loc_0x48

	.loc_0x48:
	  b         .loc_0x4C

	.loc_0x4C:
	  b         .loc_0x58

	.loc_0x50:
	  mr        r4, r31
	  bl        -0x32C

	.loc_0x58:
	  cmplwi    r3, 0
	  bne+      .loc_0x50
	  mr        r3, r30
	  bl        -0x404
	  mr        r3, r29
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EF088
 * Size:	000088
 */
void __OSUnmaskInterrupts(int)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r31, r3
	  bl        -0x46C
	  lis       r4, 0x8000
	  lwz       r29, 0xC4(r4)
	  mr        r30, r3
	  lwz       r5, 0xC8(r4)
	  or        r0, r29, r5
	  and       r3, r31, r0
	  andc      r31, r29, r31
	  stw       r31, 0xC4(r4)
	  or        r31, r31, r5
	  b         .loc_0x48

	.loc_0x48:
	  b         .loc_0x4C

	.loc_0x4C:
	  b         .loc_0x58

	.loc_0x50:
	  mr        r4, r31
	  bl        -0x3B4

	.loc_0x58:
	  cmplwi    r3, 0
	  bne+      .loc_0x50
	  mr        r3, r30
	  bl        -0x48C
	  mr        r3, r29
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EF110
 * Size:	000344
 */
void __OSDispatchInterrupt(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  mr        r30, r4
	  lis       r3, 0xCC00
	  lwz       r31, 0x3000(r3)
	  rlwinm    r31,r31,0,16,14
	  cmplwi    r31, 0
	  beq-      .loc_0x44
	  addi      r3, r3, 0x3000
	  lwz       r0, 0x4(r3)
	  and       r0, r31, r0
	  cmplwi    r0, 0
	  bne-      .loc_0x4C

	.loc_0x44:
	  mr        r3, r30
	  bl        -0x20CC

	.loc_0x4C:
	  rlwinm    r0,r31,0,24,24
	  cmplwi    r0, 0
	  li        r0, 0
	  beq-      .loc_0xB8
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x4000
	  lhz       r4, 0x1E(r3)
	  rlwinm    r3,r4,0,31,31
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  oris      r0, r0, 0x8000

	.loc_0x78:
	  rlwinm    r3,r4,0,30,30
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  oris      r0, r0, 0x4000

	.loc_0x88:
	  rlwinm    r3,r4,0,29,29
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  oris      r0, r0, 0x2000

	.loc_0x98:
	  rlwinm    r3,r4,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  oris      r0, r0, 0x1000

	.loc_0xA8:
	  rlwinm    r3,r4,0,27,27
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  oris      r0, r0, 0x800

	.loc_0xB8:
	  rlwinm    r3,r31,0,25,25
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x5000
	  lhz       r4, 0xA(r3)
	  rlwinm    r3,r4,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  oris      r0, r0, 0x400

	.loc_0xE0:
	  rlwinm    r3,r4,0,26,26
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  oris      r0, r0, 0x200

	.loc_0xF0:
	  rlwinm    r3,r4,0,24,24
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  oris      r0, r0, 0x100

	.loc_0x100:
	  rlwinm    r3,r31,0,26,26
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lis       r3, 0xCC00
	  lwz       r3, 0x6C00(r3)
	  rlwinm    r3,r3,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  oris      r0, r0, 0x80

	.loc_0x124:
	  rlwinm    r3,r31,0,27,27
	  cmplwi    r3, 0
	  beq-      .loc_0x1D0
	  lis       r3, 0xCC00
	  lwz       r4, 0x6800(r3)
	  rlwinm    r3,r4,0,30,30
	  cmplwi    r3, 0
	  beq-      .loc_0x148
	  oris      r0, r0, 0x40

	.loc_0x148:
	  rlwinm    r3,r4,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  oris      r0, r0, 0x20

	.loc_0x158:
	  rlwinm    r3,r4,0,20,20
	  cmplwi    r3, 0
	  beq-      .loc_0x168
	  oris      r0, r0, 0x10

	.loc_0x168:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800
	  lwz       r4, 0x14(r3)
	  rlwinm    r3,r4,0,30,30
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  oris      r0, r0, 0x8

	.loc_0x184:
	  rlwinm    r3,r4,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0x194
	  oris      r0, r0, 0x4

	.loc_0x194:
	  rlwinm    r3,r4,0,20,20
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  oris      r0, r0, 0x2

	.loc_0x1A4:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800
	  lwz       r4, 0x28(r3)
	  rlwinm    r3,r4,0,30,30
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  oris      r0, r0, 0x1

	.loc_0x1C0:
	  rlwinm    r3,r4,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0x1D0
	  ori       r0, r0, 0x8000

	.loc_0x1D0:
	  rlwinm    r3,r31,0,18,18
	  cmplwi    r3, 0
	  beq-      .loc_0x1E0
	  ori       r0, r0, 0x20

	.loc_0x1E0:
	  rlwinm    r3,r31,0,19,19
	  cmplwi    r3, 0
	  beq-      .loc_0x1F0
	  ori       r0, r0, 0x40

	.loc_0x1F0:
	  rlwinm    r3,r31,0,21,21
	  cmplwi    r3, 0
	  beq-      .loc_0x200
	  ori       r0, r0, 0x1000

	.loc_0x200:
	  rlwinm    r3,r31,0,22,22
	  cmplwi    r3, 0
	  beq-      .loc_0x210
	  ori       r0, r0, 0x2000

	.loc_0x210:
	  rlwinm    r3,r31,0,23,23
	  cmplwi    r3, 0
	  beq-      .loc_0x220
	  ori       r0, r0, 0x80

	.loc_0x220:
	  rlwinm    r3,r31,0,28,28
	  cmplwi    r3, 0
	  beq-      .loc_0x230
	  ori       r0, r0, 0x800

	.loc_0x230:
	  rlwinm    r3,r31,0,29,29
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  ori       r0, r0, 0x400

	.loc_0x240:
	  rlwinm    r3,r31,0,30,30
	  cmplwi    r3, 0
	  beq-      .loc_0x250
	  ori       r0, r0, 0x200

	.loc_0x250:
	  rlwinm    r3,r31,0,20,20
	  cmplwi    r3, 0
	  beq-      .loc_0x260
	  ori       r0, r0, 0x4000

	.loc_0x260:
	  rlwinm    r3,r31,0,31,31
	  cmplwi    r3, 0
	  beq-      .loc_0x270
	  ori       r0, r0, 0x100

	.loc_0x270:
	  lis       r3, 0x8000
	  lwz       r4, 0xC4(r3)
	  lwz       r3, 0xC8(r3)
	  or        r3, r4, r3
	  andc      r4, r0, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x320
	  lis       r3, 0x804B
	  subi      r0, r3, 0x6240
	  mr        r3, r0
	  b         .loc_0x29C

	.loc_0x29C:
	  b         .loc_0x2A0

	.loc_0x2A0:
	  lwz       r0, 0x0(r3)
	  and       r0, r4, r0
	  cmplwi    r0, 0
	  beq-      .loc_0x2BC
	  cntlzw    r0, r0
	  extsh     r29, r0
	  b         .loc_0x2C4

	.loc_0x2BC:
	  addi      r3, r3, 0x4
	  b         .loc_0x2A0

	.loc_0x2C4:
	  lwz       r3, -0x7080(r13)
	  rlwinm    r0,r29,2,0,29
	  lwzx      r31, r3, r0
	  cmplwi    r31, 0
	  beq-      .loc_0x320
	  cmpwi     r29, 0x4
	  ble-      .loc_0x2F8
	  sth       r29, -0x7078(r13)
	  bl        0x379C
	  stw       r4, -0x706C(r13)
	  stw       r3, -0x7070(r13)
	  lwz       r0, 0x198(r30)
	  stw       r0, -0x707C(r13)

	.loc_0x2F8:
	  bl        0x25FC
	  mr        r3, r29
	  mr        r4, r30
	  mr        r12, r31
	  mtlr      r12
	  blrl
	  bl        0x2624
	  bl        0x2B3C
	  mr        r3, r30
	  bl        -0x23A0

	.loc_0x320:
	  mr        r3, r30
	  bl        -0x23A8
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EF454
 * Size:	000050
 */
void ExternalInterruptHandler(void)
{
	/*
	.loc_0x0:
	  stw       r0, 0x0(r4)
	  stw       r1, 0x4(r4)
	  stw       r2, 0x8(r4)
	  stmw      r6, 0x18(r4)
	  mfspr     r0, 0x391
	  stw       r0, 0x1A8(r4)
	  mfspr     r0, 0x392
	  stw       r0, 0x1AC(r4)
	  mfspr     r0, 0x393
	  stw       r0, 0x1B0(r4)
	  mfspr     r0, 0x394
	  stw       r0, 0x1B4(r4)
	  mfspr     r0, 0x395
	  stw       r0, 0x1B8(r4)
	  mfspr     r0, 0x396
	  stw       r0, 0x1BC(r4)
	  mfspr     r0, 0x397
	  stw       r0, 0x1C0(r4)
	  stwu      r1, -0x8(r1)
	  b         -0x390
	*/
}
