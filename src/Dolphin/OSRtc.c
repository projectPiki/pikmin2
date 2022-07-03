#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void GetRTC(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00022C
 */
void __OSGetRTC(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void __OSSetRTC(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void ReadSram(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F0A7C
 * Size:	000060
 */
void WriteSramCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r3, 0x66E0
	  stw       r30, 0x10(r1)
	  addi      r30, r31, 0x40
	  lwz       r4, 0x40(r31)
	  add       r3, r31, r4
	  subfic    r5, r4, 0x40
	  bl        .loc_0x60
	  stw       r3, 0x4C(r31)
	  lwz       r0, 0x4C(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x48
	  li        r0, 0x40
	  stw       r0, 0x0(r30)

	.loc_0x48:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	800F0ADC
 * Size:	000118
 */
void WriteSram(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r6, 0x800F
	  stw       r0, 0x4(r1)
	  addi      r0, r6, 0xA7C
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r4, 0
	  li        r4, 0x1
	  stw       r30, 0x20(r1)
	  addi      r30, r5, 0
	  mr        r5, r0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  li        r3, 0
	  bl        -0xFBA4
	  cmpwi     r3, 0
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0xFC

	.loc_0x4C:
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x3
	  bl        -0x10384
	  cmpwi     r3, 0
	  bne-      .loc_0x74
	  li        r3, 0
	  bl        -0xFAE0
	  li        r3, 0
	  b         .loc_0xFC

	.loc_0x74:
	  rlwinm    r31,r31,6,0,25
	  addi      r0, r31, 0x100
	  oris      r0, r0, 0xA000
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x14
	  li        r3, 0
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x10F2C
	  cntlzw    r0, r3
	  rlwinm    r31,r0,27,5,31
	  li        r3, 0
	  bl        -0x10B54
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r4, r29, 0
	  addi      r5, r30, 0
	  or        r31, r31, r0
	  li        r3, 0
	  li        r6, 0x1
	  bl        -0x10D00
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0x102DC
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0xFB68
	  cntlzw    r0, r31
	  rlwinm    r3,r0,27,5,31

	.loc_0xFC:
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
 * Address:	800F0BF4
 * Size:	00013C
 */
void __OSInitSram(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  li        r4, 0x40
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0x66E0
	  addi      r3, r30, 0
	  stw       r31, 0x44(r30)
	  stw       r31, 0x48(r30)
	  bl        -0x4538
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0xFCC4
	  cmpwi     r3, 0
	  bne-      .loc_0x50
	  b         .loc_0x110

	.loc_0x50:
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x3
	  bl        -0x104A0
	  cmpwi     r3, 0
	  bne-      .loc_0x74
	  li        r3, 0
	  bl        -0xFBFC
	  b         .loc_0x110

	.loc_0x74:
	  lis       r3, 0x2000
	  addi      r0, r3, 0x100
	  stw       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  li        r3, 0
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x11040
	  cntlzw    r0, r3
	  rlwinm    r31,r0,27,5,31
	  li        r3, 0
	  bl        -0x10C68
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r4, r30, 0
	  or        r31, r31, r0
	  li        r3, 0
	  li        r5, 0x40
	  li        r6, 0
	  li        r7, 0
	  bl        -0x10D78
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0x10CA0
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0x10408
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0xFC94
	  cntlzw    r0, r31
	  rlwinm    r31,r0,27,5,31

	.loc_0x110:
	  stw       r31, 0x4C(r30)
	  li        r0, 0x40
	  stw       r0, 0x40(r30)
	  bl        0x99C
	  bl        0xA08
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void LockSram(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F0D30
 * Size:	00005C
 */
void __OSLockSram(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x66E0
	  bl        -0x2110
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  bl        -0x20FC
	  li        r31, 0
	  b         .loc_0x44

	.loc_0x38:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x44:
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F0D8C
 * Size:	00005C
 */
u8* __OSLockSramEx(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x66E0
	  bl        -0x216C
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  bl        -0x2158
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x38:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  addi      r3, r31, 0x14
	  stw       r0, 0x0(r4)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F0DE8
 * Size:	00033C
 */
void UnlockSram(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x4(r1)
	  lis       r3, 0x804F
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r31, r3, 0x66E0
	  beq-      .loc_0x314
	  cmplwi    r4, 0
	  bne-      .loc_0x1D4
	  lbz       r3, 0x13(r31)
	  rlwinm    r0,r3,0,30,31
	  cmplwi    r0, 0x2
	  ble-      .loc_0x40
	  rlwinm    r0,r3,0,0,29
	  stb       r0, 0x13(r31)

	.loc_0x40:
	  li        r0, 0
	  sth       r0, 0x2(r31)
	  addi      r5, r31, 0x14
	  addi      r6, r31, 0xC
	  addi      r3, r5, 0x1
	  sth       r0, 0x0(r31)
	  sub       r3, r3, r6
	  cmplw     r6, r5
	  rlwinm    r3,r3,31,1,31
	  bge-      .loc_0x1D4
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x1A4

	.loc_0x74:
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0x0(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0x2(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x2(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0x4(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x4(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0x6(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x6(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0x8(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x8(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0xA(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0xA(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0xC(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0xC(r6)
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0xE(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0xE(r6)
	  addi      r6, r6, 0x10
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  bdnz+     .loc_0x74
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x1D4

	.loc_0x1A4:
	  mtctr     r3

	.loc_0x1A8:
	  lhz       r5, 0x0(r31)
	  lhz       r0, 0x0(r6)
	  add       r0, r5, r0
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r6)
	  addi      r6, r6, 0x2
	  lhz       r5, 0x2(r31)
	  not       r0, r0
	  add       r0, r5, r0
	  sth       r0, 0x2(r31)
	  bdnz+     .loc_0x1A8

	.loc_0x1D4:
	  addi      r30, r31, 0x40
	  lwz       r0, 0x40(r31)
	  cmplw     r4, r0
	  bge-      .loc_0x1E8
	  stw       r4, 0x0(r30)

	.loc_0x1E8:
	  lwz       r0, 0x0(r30)
	  cmplwi    r0, 0x14
	  bgt-      .loc_0x21C
	  addi      r4, r31, 0x14
	  lhz       r3, 0x3C(r31)
	  rlwinm    r0,r3,0,17,21
	  cmplwi    r0, 0x5000
	  beq-      .loc_0x214
	  rlwinm    r0,r3,0,24,25
	  cmplwi    r0, 0xC0
	  bne-      .loc_0x21C

	.loc_0x214:
	  li        r0, 0
	  sth       r0, 0x28(r4)

	.loc_0x21C:
	  lwz       r29, 0x0(r30)
	  lis       r3, 0x800F
	  addi      r5, r3, 0xA7C
	  subfic    r27, r29, 0x40
	  add       r28, r31, r29
	  li        r3, 0
	  li        r4, 0x1
	  bl        -0x100B0
	  cmpwi     r3, 0
	  bne-      .loc_0x24C
	  li        r0, 0
	  b         .loc_0x2FC

	.loc_0x24C:
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x3
	  bl        -0x10890
	  cmpwi     r3, 0
	  bne-      .loc_0x274
	  li        r3, 0
	  bl        -0xFFEC
	  li        r0, 0
	  b         .loc_0x2FC

	.loc_0x274:
	  rlwinm    r3,r29,6,0,25
	  addi      r0, r3, 0x100
	  oris      r0, r0, 0xA000
	  stw       r0, 0x10(r1)
	  addi      r4, r1, 0x10
	  li        r3, 0
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x11438
	  cntlzw    r0, r3
	  rlwinm    r29,r0,27,5,31
	  li        r3, 0
	  bl        -0x11060
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r4, r28, 0
	  addi      r5, r27, 0
	  or        r29, r29, r0
	  li        r3, 0
	  li        r6, 0x1
	  bl        -0x1120C
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r29, r29, r0
	  li        r3, 0
	  bl        -0x107E8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r29, r29, r0
	  li        r3, 0
	  bl        -0x10074
	  cntlzw    r0, r29
	  rlwinm    r0,r0,27,5,31

	.loc_0x2FC:
	  stw       r0, 0x4C(r31)
	  lwz       r0, 0x4C(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x314
	  li        r0, 0x40
	  stw       r0, 0x0(r30)

	.loc_0x314:
	  li        r0, 0
	  stw       r0, 0x48(r31)
	  lwz       r3, 0x44(r31)
	  bl        -0x24A8
	  lwz       r3, 0x4C(r31)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1124
 * Size:	000024
 */
void __OSUnlockSram(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x34C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1148
 * Size:	000024
 */
void __OSUnlockSramEx(int p1)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r4, 0x14
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x370
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F116C
 * Size:	000010
 */
void __OSSyncSram(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x66E0
	  lwz       r3, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void __OSCheckSram(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F117C
 * Size:	000124
 */
void __OSReadROM(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r5, 0
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  bl        -0x4AB4
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x10240
	  cmpwi     r3, 0
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x48:
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x3
	  bl        -0x10A20
	  cmpwi     r3, 0
	  bne-      .loc_0x70
	  li        r3, 0
	  bl        -0x1017C
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x70:
	  rlwinm    r0,r31,6,0,25
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x14
	  li        r3, 0
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x115C0
	  cntlzw    r0, r3
	  rlwinm    r31,r0,27,5,31
	  li        r3, 0
	  bl        -0x111E8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r4, r29, 0
	  addi      r5, r30, 0
	  or        r31, r31, r0
	  li        r3, 0
	  li        r6, 0
	  li        r7, 0
	  bl        -0x112F8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0x11220
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0x10988
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r31, r31, r0
	  li        r3, 0
	  bl        -0x10214
	  cntlzw    r0, r31
	  rlwinm    r3,r0,27,5,31

	.loc_0x108:
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
 * Address:	........
 * Size:	00005C
 */
void __OSReadROMCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void __OSReadROMAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F12A0
 * Size:	000080
 */
uint OSGetSoundMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x66E0
	  bl        -0x2680
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  bl        -0x266C
	  li        r31, 0
	  b         .loc_0x44

	.loc_0x38:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x44:
	  lbz       r0, 0x13(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x58
	  li        r31, 0x1
	  b         .loc_0x5C

	.loc_0x58:
	  li        r31, 0

	.loc_0x5C:
	  li        r3, 0
	  li        r4, 0
	  bl        -0x51C
	  mr        r3, r31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1320
 * Size:	0000A4
 */
void OSSetSoundMode(uint)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x66E0
	  stw       r30, 0x18(r1)
	  rlwinm    r30,r3,2,29,29
	  bl        -0x2708
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  bl        -0x26F4
	  li        r31, 0
	  b         .loc_0x4C

	.loc_0x40:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x4C:
	  lbz       r3, 0x13(r31)
	  rlwinm    r0,r3,0,29,29
	  cmplw     r30, r0
	  bne-      .loc_0x6C
	  li        r3, 0
	  li        r4, 0
	  bl        -0x59C
	  b         .loc_0x8C

	.loc_0x6C:
	  rlwinm    r0,r3,0,30,28
	  stb       r0, 0x13(r31)
	  li        r3, 0x1
	  li        r4, 0
	  lbz       r0, 0x13(r31)
	  or        r0, r0, r30
	  stb       r0, 0x13(r31)
	  bl        -0x5C0

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F13C4
 * Size:	000070
 */
void OSGetProgressiveMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r3, 0x66E0
	  bl        -0x27A4
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  bl        -0x2790
	  li        r31, 0
	  b         .loc_0x44

	.loc_0x38:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x44:
	  lbz       r0, 0x13(r31)
	  li        r3, 0
	  li        r4, 0
	  rlwinm    r31,r0,25,31,31
	  bl        -0x630
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1434
 * Size:	0000A4
 */
void OSSetProgressiveMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x66E0
	  stw       r30, 0x18(r1)
	  rlwinm    r30,r3,7,24,24
	  bl        -0x281C
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  bl        -0x2808
	  li        r31, 0
	  b         .loc_0x4C

	.loc_0x40:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x4C:
	  lbz       r3, 0x13(r31)
	  rlwinm    r0,r3,0,24,24
	  cmplw     r30, r0
	  bne-      .loc_0x6C
	  li        r3, 0
	  li        r4, 0
	  bl        -0x6B0
	  b         .loc_0x8C

	.loc_0x6C:
	  rlwinm    r0,r3,0,25,23
	  stb       r0, 0x13(r31)
	  li        r3, 0x1
	  li        r4, 0
	  lbz       r0, 0x13(r31)
	  or        r0, r0, r30
	  stb       r0, 0x13(r31)
	  bl        -0x6D4

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void OSGetVideoMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void OSSetVideoMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void OSGetLanguage(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void OSSetLanguage(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __OSGetBootMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void __OSSetBootMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void OSGetEuRgb60Mode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F14D8
 * Size:	0000A4
 */
void OSSetEuRgb60Mode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x66E0
	  stw       r30, 0x18(r1)
	  rlwinm    r30,r3,6,25,25
	  bl        -0x28C0
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  bl        -0x28AC
	  li        r31, 0
	  b         .loc_0x4C

	.loc_0x40:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x4C:
	  lbz       r3, 0x11(r31)
	  rlwinm    r0,r3,0,25,25
	  cmplw     r30, r0
	  bne-      .loc_0x6C
	  li        r3, 0
	  li        r4, 0
	  bl        -0x754
	  b         .loc_0x8C

	.loc_0x6C:
	  rlwinm    r0,r3,0,26,24
	  stb       r0, 0x11(r31)
	  li        r3, 0x1
	  li        r4, 0
	  lbz       r0, 0x11(r31)
	  or        r0, r0, r30
	  stb       r0, 0x11(r31)
	  bl        -0x778

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F157C
 * Size:	000084
 */
void OSGetWirelessID(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x66E0
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  bl        -0x2964
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  bl        -0x2950
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x40:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  addi      r3, r31, 0x14
	  stw       r0, 0x0(r4)

	.loc_0x50:
	  rlwinm    r0,r30,1,0,30
	  add       r3, r3, r0
	  lhz       r31, 0x1C(r3)
	  li        r3, 0
	  li        r4, 0x14
	  bl        -0x7F8
	  mr        r3, r31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1600
 * Size:	0000AC
 */
void OSSetWirelessID(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r5, 0x66E0
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  bl        -0x29F0
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x48
	  bl        -0x29DC
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x48:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  addi      r3, r31, 0x14
	  stw       r0, 0x0(r4)

	.loc_0x58:
	  rlwinm    r0,r29,1,0,30
	  add       r4, r3, r0
	  lhzu      r3, 0x1C(r4)
	  rlwinm    r0,r30,0,16,31
	  cmplw     r3, r0
	  beq-      .loc_0x84
	  sth       r30, 0x0(r4)
	  li        r3, 0x1
	  li        r4, 0x14
	  bl        -0x894
	  b         .loc_0x90

	.loc_0x84:
	  li        r3, 0
	  li        r4, 0x14
	  bl        -0x8A4

	.loc_0x90:
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
 * Address:	800F16AC
 * Size:	000070
 */
void OSGetGbsMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r3, 0x66E0
	  bl        -0x2A8C
	  lwz       r0, 0x48(r31)
	  addi      r4, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  bl        -0x2A78
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x38:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  addi      r3, r31, 0x14
	  stw       r0, 0x0(r4)

	.loc_0x48:
	  lhz       r31, 0x28(r3)
	  li        r3, 0
	  li        r4, 0x14
	  bl        -0x918
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F171C
 * Size:	0000B8
 */
void OSSetGbsMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  rlwinm    r4,r3,0,16,31
	  stw       r0, 0x4(r1)
	  rlwinm    r0,r3,0,17,21
	  cmplwi    r0, 0x5000
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  lis       r3, 0x804F
	  addi      r31, r3, 0x66E0
	  beq-      .loc_0x3C
	  rlwinm    r0,r4,0,24,25
	  cmplwi    r0, 0xC0
	  bne-      .loc_0x40

	.loc_0x3C:
	  li        r30, 0

	.loc_0x40:
	  bl        -0x2B24
	  lwz       r0, 0x48(r31)
	  addi      r5, r31, 0x48
	  cmpwi     r0, 0
	  beq-      .loc_0x60
	  bl        -0x2B10
	  li        r4, 0
	  b         .loc_0x70

	.loc_0x60:
	  stw       r3, 0x44(r31)
	  li        r0, 0x1
	  addi      r4, r31, 0x14
	  stw       r0, 0x0(r5)

	.loc_0x70:
	  lhz       r0, 0x28(r4)
	  rlwinm    r3,r30,0,16,31
	  cmplw     r3, r0
	  bne-      .loc_0x90
	  li        r3, 0
	  li        r4, 0x14
	  bl        -0x9BC
	  b         .loc_0xA0

	.loc_0x90:
	  sth       r30, 0x28(r4)
	  li        r3, 0x1
	  li        r4, 0x14
	  bl        -0x9D0

	.loc_0xA0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}
