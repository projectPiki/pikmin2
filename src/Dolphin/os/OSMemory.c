#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void OSGetPhysicalMemSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void OSGetConsoleSimulatedMemSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EF794
 * Size:	00003C
 */
void OnReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  beq-      .loc_0x28
	  lis       r3, 0xCC00
	  li        r0, 0xFF
	  sth       r0, 0x4010(r3)
	  lis       r3, 0xF000
	  bl        -0x7B8

	.loc_0x28:
	  li        r3, 0x1
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EF7D0
 * Size:	00006C
 */
void MEMIntrruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  addi      r8, r3, 0x4000
	  li        r0, 0
	  stwu      r1, -0x8(r1)
	  lhz       r7, 0x4024(r3)
	  lis       r3, 0x804F
	  lhz       r6, 0x22(r8)
	  addi      r3, r3, 0x6670
	  lhz       r5, 0x1E(r8)
	  rlwimi    r6,r7,16,6,15
	  sth       r0, 0x20(r8)
	  lwz       r12, 0x3C(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x54
	  mtlr      r12
	  li        r3, 0xF
	  crclr     6, 0x6
	  blrl
	  b         .loc_0x5C

	.loc_0x54:
	  li        r3, 0xF
	  bl        -0x1D78

	.loc_0x5C:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EF83C
 * Size:	0000C4
 */
void OSProtectRange(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r26, 0x18(r1)
	  addi      r26, r3, 0
	  cmplwi    r26, 0x4
	  bge-      .loc_0xB0
	  add       r3, r4, r5
	  addi      r0, r3, 0x3FF
	  rlwinm    r27,r4,0,0,21
	  rlwinm    r29,r0,0,0,21
	  addi      r3, r27, 0
	  rlwinm    r31,r6,0,30,31
	  sub       r4, r29, r27
	  bl        -0x315C
	  bl        -0xC40
	  lis       r0, 0x8000
	  srw       r30, r0, r26
	  addi      r28, r3, 0
	  addi      r3, r30, 0
	  bl        -0x88C
	  lis       r3, 0xCC00
	  addi      r5, r3, 0x4000
	  rlwinm    r3,r26,2,0,29
	  rlwinm    r0,r27,22,16,31
	  sthx      r0, r5, r3
	  rlwinm    r4,r29,22,16,31
	  add       r3, r5, r3
	  sth       r4, 0x2(r3)
	  addi      r4, r5, 0x10
	  rlwinm    r6,r26,1,0,30
	  li        r0, 0x3
	  lhz       r5, 0x10(r5)
	  slw       r3, r0, r6
	  slw       r0, r31, r6
	  andc      r5, r5, r3
	  or        r5, r5, r0
	  cmplwi    r31, 0x3
	  sth       r5, 0x0(r4)
	  beq-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x858

	.loc_0xA8:
	  mr        r3, r28
	  bl        -0xC88

	.loc_0xB0:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EF900
 * Size:	000080
 */
void Config24MB(void)
{
	/*
	.loc_0x0:
	  li        r7, 0
	  lis       r4, 0
	  addi      r4, r4, 0x2
	  lis       r3, 0x8000
	  addi      r3, r3, 0x1FF
	  lis       r6, 0x100
	  addi      r6, r6, 0x2
	  lis       r5, 0x8100
	  addi      r5, r5, 0xFF
	  isync
	  mtdbatu   0, r7
	  mtdbatl   0, r4
	  mtdbatu   0, r3
	  isync
	  mtibatu   0, r7
	  mtibatl   0, r4
	  mtibatu   0, r3
	  isync
	  mtdbatu   2, r7
	  mtdbatl   2, r6
	  mtdbatu   2, r5
	  isync
	  mtibatu   2, r7
	  mtibatl   2, r6
	  mtibatu   2, r5
	  isync
	  mfmsr     r3
	  ori       r3, r3, 0x30
	  mtsrr1    r3
	  mflr      r3
	  mtsrr0    r3
	  rfi
	*/
}

/*
 * --INFO--
 * Address:	800EF980
 * Size:	000080
 */
void Config48MB(void)
{
	/*
	.loc_0x0:
	  li        r7, 0
	  lis       r4, 0
	  addi      r4, r4, 0x2
	  lis       r3, 0x8000
	  addi      r3, r3, 0x3FF
	  lis       r6, 0x200
	  addi      r6, r6, 0x2
	  lis       r5, 0x8200
	  addi      r5, r5, 0x1FF
	  isync
	  mtdbatu   0, r7
	  mtdbatl   0, r4
	  mtdbatu   0, r3
	  isync
	  mtibatu   0, r7
	  mtibatl   0, r4
	  mtibatu   0, r3
	  isync
	  mtdbatu   2, r7
	  mtdbatl   2, r6
	  mtdbatu   2, r5
	  isync
	  mtibatu   2, r7
	  mtibatl   2, r6
	  mtibatu   2, r5
	  isync
	  mfmsr     r3
	  ori       r3, r3, 0x30
	  mtsrr1    r3
	  mflr      r3
	  mtsrr0    r3
	  rfi
	*/
}

/*
 * --INFO--
 * Address:	800EFA00
 * Size:	000018
 */
void RealMode(void)
{
	/*
	.loc_0x0:
	  rlwinm    r3,r3,0,2,31
	  mtsrr0    r3
	  mfmsr     r3
	  rlwinm    r3,r3,0,28,25
	  mtsrr1    r3
	  rfi
	*/
}

/*
 * --INFO--
 * Address:	800EFA18
 * Size:	000118
 */
void __OSInitMemoryProtection(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x50(r1)
	  stmw      r27, 0x3C(r1)
	  lis       r27, 0x8000
	  lwz       r31, 0xF0(r27)
	  bl        -0xDF8
	  lis       r4, 0xCC00
	  addi      r28, r4, 0x4000
	  li        r0, 0
	  sth       r0, 0x20(r28)
	  li        r0, 0xFF
	  mr        r30, r3
	  sth       r0, 0x10(r28)
	  lis       r3, 0xF000
	  bl        -0xA54
	  lis       r3, 0x800F
	  subi      r29, r3, 0x830
	  mr        r4, r29
	  li        r3, 0
	  bl        -0xDE4
	  mr        r4, r29
	  li        r3, 0x1
	  bl        -0xDF0
	  mr        r4, r29
	  li        r3, 0x2
	  bl        -0xDFC
	  mr        r4, r29
	  li        r3, 0x3
	  bl        -0xE08
	  mr        r4, r29
	  li        r3, 0x4
	  bl        -0xE14
	  lis       r3, 0x804B
	  subi      r3, r3, 0x6210
	  bl        0x800
	  lwz       r3, 0xF0(r27)
	  lwz       r0, 0x28(r27)
	  cmplw     r3, r0
	  bge-      .loc_0xC0
	  subis     r0, r3, 0x180
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  lis       r3, 0x8180
	  lis       r4, 0x180
	  bl        -0x33E0
	  li        r0, 0x2
	  sth       r0, 0x28(r28)

	.loc_0xC0:
	  lis       r0, 0x180
	  cmplw     r31, r0
	  bgt-      .loc_0xDC
	  lis       r3, 0x800F
	  subi      r3, r3, 0x700
	  bl        -0xEC
	  b         .loc_0xF4

	.loc_0xDC:
	  lis       r0, 0x300
	  cmplw     r31, r0
	  bgt-      .loc_0xF4
	  lis       r3, 0x800F
	  subi      r3, r3, 0x680
	  bl        -0x108

	.loc_0xF4:
	  lis       r3, 0x800
	  bl        -0xA88
	  mr        r3, r30
	  bl        -0xEB8
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  addi      r1, r1, 0x50
	  mtlr      r0
	  blr
	*/
}
