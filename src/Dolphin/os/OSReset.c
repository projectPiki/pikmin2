#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800F02A4
 * Size:	000084
 */
void OSRegisterResetFunction(OSFunctionInfo* info)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x7058(r13)
	  b         .loc_0xC

	.loc_0x8:
	  lwz       r5, 0x8(r5)

	.loc_0xC:
	  cmplwi    r5, 0
	  beq-      .loc_0x24
	  lwz       r4, 0x4(r5)
	  lwz       r0, 0x4(r3)
	  cmplw     r4, r0
	  ble+      .loc_0x8

	.loc_0x24:
	  cmplwi    r5, 0
	  bne-      .loc_0x5C
	  subi      r5, r13, 0x7058
	  lwzu      r4, 0x4(r5)
	  cmplwi    r4, 0
	  bne-      .loc_0x44
	  stw       r3, -0x7058(r13)
	  b         .loc_0x48

	.loc_0x44:
	  stw       r3, 0x8(r4)

	.loc_0x48:
	  stw       r4, 0xC(r3)
	  li        r0, 0
	  stw       r0, 0x8(r3)
	  stw       r3, 0x0(r5)
	  blr

	.loc_0x5C:
	  stw       r5, 0x8(r3)
	  lwz       r4, 0xC(r5)
	  stw       r3, 0xC(r5)
	  cmplwi    r4, 0
	  stw       r4, 0xC(r3)
	  bne-      .loc_0x7C
	  stw       r3, -0x7058(r13)
	  blr

	.loc_0x7C:
	  stw       r3, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void OSUnregisterResetFunction(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void __OSCallResetFunctions(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F0328
 * Size:	000070
 */
void Reset(void)
{
	/*
	.loc_0x0:
	  b         .loc_0x20

	.loc_0x4:
	  mfspr     r8, 0x3F0
	  ori       r8, r8, 0x8
	  mtspr     1008, r8
	  isync
	  sync
	  nop
	  b         .loc_0x24

	.loc_0x20:
	  b         .loc_0x40

	.loc_0x24:
	  mftbl     r5

	.loc_0x28:
	  mftbl     r6
	  sub       r7, r6, r5
	  cmplwi    r7, 0x1124
	  blt+      .loc_0x28
	  nop
	  b         .loc_0x44

	.loc_0x40:
	  b         .loc_0x60

	.loc_0x44:
	  lis       r8, 0xCC00
	  ori       r8, r8, 0x3000
	  li        r4, 0x3
	  stw       r4, 0x24(r8)
	  stw       r3, 0x24(r8)
	  nop
	  b         .loc_0x64

	.loc_0x60:
	  b         .loc_0x6C

	.loc_0x64:
	  nop
	  b         .loc_0x64

	.loc_0x6C:
	  b         .loc_0x4
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void KillThreads(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F0398
 * Size:	000048
 */
void __OSDoHotReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  bl        -0x1774
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x2000
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  bl        -0x3B90
	  rlwinm    r3,r31,3,0,28
	  bl        -0xA0
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F03E0
 * Size:	0002BC
 */
void OSResetSystem(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r26, 0x28(r1)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r30, r5
	  bl        0x1608
	  bl        -0x3E00
	  cmpwi     r28, 0x2
	  beq-      .loc_0x40
	  cmpwi     r28, 0
	  bne-      .loc_0x4C
	  lwz       r0, -0x7050(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C

	.loc_0x40:
	  li        r3, 0x1
	  bl        0x4A5C
	  mr        r31, r3

	.loc_0x4C:
	  b         .loc_0x50

	.loc_0x50:
	  b         .loc_0x54

	.loc_0x54:
	  lwz       r26, -0x7058(r13)
	  li        r27, 0
	  b         .loc_0x60

	.loc_0x60:
	  b         .loc_0x64

	.loc_0x64:
	  b         .loc_0x88

	.loc_0x68:
	  li        r3, 0
	  lwz       r12, 0x0(r26)
	  mtlr      r12
	  blrl
	  cntlzw    r0, r3
	  lwz       r26, 0x8(r26)
	  rlwinm    r0,r0,27,5,31
	  or        r27, r27, r0

	.loc_0x88:
	  cmplwi    r26, 0
	  beq-      .loc_0x98
	  cmpwi     r27, 0
	  beq+      .loc_0x68

	.loc_0x98:
	  bl        0xCF4
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r27, r27, r0
	  cmpwi     r27, 0
	  beq-      .loc_0xB8
	  li        r0, 0
	  b         .loc_0xBC

	.loc_0xB8:
	  li        r0, 0x1

	.loc_0xBC:
	  cmpwi     r0, 0
	  beq+      .loc_0x54
	  cmpwi     r28, 0x1
	  bne-      .loc_0x104
	  cmpwi     r30, 0
	  beq-      .loc_0x104
	  bl        0x87C
	  lbz       r0, 0x13(r3)
	  ori       r0, r0, 0x40
	  stb       r0, 0x13(r3)
	  li        r3, 0x1
	  bl        0xC5C
	  b         .loc_0xF0

	.loc_0xF0:
	  b         .loc_0xF4

	.loc_0xF4:
	  bl        0xC98
	  cmpwi     r3, 0
	  beq+      .loc_0xF4
	  li        r29, 0

	.loc_0x104:
	  bl        -0x18AC
	  lwz       r27, -0x7058(r13)
	  li        r26, 0
	  b         .loc_0x114

	.loc_0x114:
	  b         .loc_0x118

	.loc_0x118:
	  b         .loc_0x13C

	.loc_0x11C:
	  li        r3, 0x1
	  lwz       r12, 0x0(r27)
	  mtlr      r12
	  blrl
	  cntlzw    r0, r3
	  lwz       r27, 0x8(r27)
	  rlwinm    r0,r0,27,5,31
	  or        r26, r26, r0

	.loc_0x13C:
	  cmplwi    r27, 0
	  beq-      .loc_0x14C
	  cmpwi     r26, 0
	  beq+      .loc_0x11C

	.loc_0x14C:
	  bl        0xC40
	  bl        -0x3BD8
	  cmpwi     r28, 0x1
	  bne-      .loc_0x180
	  bl        -0x1904
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x2000
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  bl        -0x3D20
	  rlwinm    r3,r29,3,0,28
	  bl        -0x230
	  b         .loc_0x1F8

	.loc_0x180:
	  cmpwi     r28, 0
	  bne-      .loc_0x1F8
	  lwz       r0, -0x7050(r13)
	  lis       r3, 0x8000
	  cmplwi    r0, 0
	  stw       r0, 0x30EC(r3)
	  beq-      .loc_0x1A4
	  mr        r3, r31
	  bl        0x4900

	.loc_0x1A4:
	  lis       r3, 0x8000
	  lwz       r3, 0xDC(r3)
	  b         .loc_0x1B0

	.loc_0x1B0:
	  b         .loc_0x1B4

	.loc_0x1B4:
	  b         .loc_0x1E0

	.loc_0x1B8:
	  lhz       r0, 0x2C8(r3)
	  lwz       r26, 0x2FC(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1D8
	  bge-      .loc_0x1DC
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1D8
	  b         .loc_0x1DC

	.loc_0x1D8:
	  bl        0x1CE0

	.loc_0x1DC:
	  mr        r3, r26

	.loc_0x1E0:
	  cmplwi    r3, 0
	  bne+      .loc_0x1B8
	  bl        0x147C
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x66C

	.loc_0x1F8:
	  lis       r3, 0x8000
	  lwz       r3, 0xDC(r3)
	  b         .loc_0x204

	.loc_0x204:
	  b         .loc_0x208

	.loc_0x208:
	  b         .loc_0x234

	.loc_0x20C:
	  lhz       r0, 0x2C8(r3)
	  lwz       r26, 0x2FC(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x22C
	  bge-      .loc_0x230
	  cmpwi     r0, 0x1
	  beq-      .loc_0x22C
	  b         .loc_0x230

	.loc_0x22C:
	  bl        0x1C8C

	.loc_0x230:
	  mr        r3, r26

	.loc_0x234:
	  cmplwi    r3, 0
	  bne+      .loc_0x20C
	  lis       r28, 0x8000
	  addi      r3, r28, 0x40
	  li        r4, 0
	  li        r5, 0x8C
	  bl        -0xEB578
	  addi      r3, r28, 0xD4
	  li        r4, 0
	  li        r5, 0x14
	  bl        -0xEB588
	  addi      r3, r28, 0xF4
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0xEB598
	  addi      r3, r28, 0x3000
	  li        r4, 0
	  li        r5, 0xC0
	  bl        -0xEB5A8
	  addi      r3, r28, 0x30C8
	  li        r4, 0
	  li        r5, 0xC
	  bl        -0xEB5B8
	  addi      r3, r28, 0x30E2
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0xEB5C8
	  mr        r3, r31
	  bl        0x47FC
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x44(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F069C
 * Size:	000034
 */
void OSGetResetCode(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  lbz       r0, 0x30E2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C
	  lwz       r0, 0x30F0(r3)
	  oris      r3, r0, 0x8000
	  b         .loc_0x30

	.loc_0x1C:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x3000
	  lwz       r0, 0x24(r3)
	  rlwinm    r0,r0,0,0,28
	  rlwinm    r3,r0,29,3,31

	.loc_0x30:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void OSSetBootDol(void)
{
	// UNUSED FUNCTION
}
