#include "types.h"

/*
 * --INFO--
 * Address:	800C0464
 * Size:	000088
 */
void TRKLoadContext(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r3)
	  lwz       r1, 0x4(r3)
	  lwz       r2, 0x8(r3)
	  lhz       r5, 0x1A2(r3)
	  rlwinm.   r6,r5,0,30,30
	  beq-      .loc_0x28
	  rlwinm    r5,r5,0,31,29
	  sth       r5, 0x1A2(r3)
	  lmw       r5, 0x14(r3)
	  b         .loc_0x2C

	.loc_0x28:
	  lmw       r13, 0x34(r3)

	.loc_0x2C:
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r4, 0x80(r31)
	  mtcr      r4
	  lwz       r4, 0x84(r31)
	  mtlr      r4
	  lwz       r4, 0x88(r31)
	  mtctr     r4
	  lwz       r4, 0x8C(r31)
	  mtxer     r4
	  mfmsr     r4
	  rlwinm    r4,r4,0,17,15
	  rlwinm    r4,r4,0,31,29
	  mtmsr     r4
	  mtsprg    1, r2
	  lwz       r4, 0xC(r31)
	  mtsprg    2, r4
	  lwz       r4, 0x10(r31)
	  mtsprg    3, r4
	  lwz       r2, 0x198(r31)
	  lwz       r4, 0x19C(r31)
	  lwz       r31, 0x7C(r31)
	  b         -0x25F4
	*/
}

/*
 * --INFO--
 * Address:	800C04EC
 * Size:	000004
 */
void TRKUARTInterruptHandler(void) { }

/*
 * --INFO--
 * Address:	800C04F0
 * Size:	000058
 */
void InitializeProgramEndTrap(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x800D
	  lis       r3, 0x8048
	  stw       r0, 0x14(r1)
	  li        r5, 0x4
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x4598
	  subi      r4, r3, 0x63B8
	  addi      r3, r31, 0x4
	  bl        -0xBD3E8
	  addi      r3, r31, 0x4
	  li        r4, 0x4
	  bl        0x2C2D8
	  addi      r3, r31, 0x4
	  li        r4, 0x4
	  bl        0x2C1E8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0548
 * Size:	000030
 */
void TRK_board_display(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  subi      r3, r5, 0x63B4
	  crclr     6, 0x6
	  bl        0x2D188
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0578
 * Size:	000030
 */
void UnreserveEXI2Port(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6920
	  lwz       r12, 0x20(r3)
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
 * Address:	800C05A8
 * Size:	000030
 */
void ReserveEXI2Port(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6920
	  lwz       r12, 0x24(r3)
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
 * Address:	........
 * Size:	0000F0
 */
void TRKReadUARTPoll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void WriteUART1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void WriteUARTFlush(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C05D8
 * Size:	00003C
 */
void TRKWriteUARTN(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r5, r5, 0x6920
	  lwz       r12, 0x14(r5)
	  mtctr     r12
	  bctrl
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0614
 * Size:	00003C
 */
void TRKReadUARTN(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r5, r5, 0x6920
	  lwz       r12, 0x10(r5)
	  mtctr     r12
	  bctrl
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0650
 * Size:	000030
 */
void TRKPollUART(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6920
	  lwz       r12, 0xC(r3)
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
 * Address:	800C0680
 * Size:	000048
 */
void EnableEXI2Interrupts(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x4810(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x38
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6920
	  lwz       r12, 0x4(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x38
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C06C8
 * Size:	000050
 */
void TRKInitializeIntDrivenUART(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x800C
	  lis       r3, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x984
	  lwz       r12, 0x6920(r3)
	  mr        r3, r6
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6920
	  lwz       r12, 0x18(r3)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0718
 * Size:	00026C
 */
void InitMetroTRKCommTable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0x1
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  subi      r29, r4, 0x63B8
	  mr        r4, r30
	  addi      r3, r29, 0x8
	  crclr     6, 0x6
	  bl        0x2CFA0
	  lis       r3, 0x804F
	  li        r0, 0
	  cmpwi     r30, 0x2
	  stb       r0, 0x4810(r3)
	  bne-      .loc_0xEC
	  addi      r3, r29, 0x20
	  crclr     6, 0x6
	  bl        0x2CF80
	  lis       r30, 0x804F
	  lis       r12, 0x800C
	  lis       r11, 0x804A
	  lis       r10, 0x800C
	  lis       r9, 0x800C
	  lis       r8, 0x800C
	  lis       r7, 0x800C
	  lis       r6, 0x800C
	  lis       r5, 0x800C
	  lis       r4, 0x800C
	  lis       r3, 0x800C
	  addi      r31, r30, 0x4810
	  li        r29, 0x1
	  addi      r30, r12, 0xC48
	  addi      r12, r11, 0x6920
	  addi      r11, r10, 0xC38
	  addi      r10, r9, 0xC30
	  addi      r9, r8, 0xC28
	  addi      r8, r7, 0xC20
	  addi      r7, r6, 0xC40
	  addi      r6, r5, 0xC18
	  addi      r5, r4, 0xC10
	  addi      r4, r3, 0xC08
	  li        r0, 0
	  stb       r29, 0x0(r31)
	  li        r3, 0
	  stw       r30, 0x0(r12)
	  stw       r11, 0x18(r12)
	  stw       r10, 0x1C(r12)
	  stw       r9, 0x10(r12)
	  stw       r8, 0x14(r12)
	  stw       r7, 0x8(r12)
	  stw       r6, 0xC(r12)
	  stw       r5, 0x20(r12)
	  stw       r4, 0x24(r12)
	  stw       r0, 0x4(r12)
	  b         .loc_0x250

	.loc_0xEC:
	  cmpwi     r30, 0x1
	  bne-      .loc_0x188
	  addi      r3, r29, 0x38
	  crclr     6, 0x6
	  bl        0x2CED8
	  bl        0x2A7A8
	  lis       r31, 0x800C
	  lis       r12, 0x800C
	  addi      r31, r31, 0x14C0
	  lis       r30, 0x804A
	  lis       r11, 0x800C
	  lis       r10, 0x800C
	  lis       r9, 0x800C
	  lis       r8, 0x800C
	  lis       r7, 0x800C
	  lis       r6, 0x800C
	  lis       r5, 0x800C
	  lis       r4, 0x800C
	  stwu      r31, 0x6920(r30)
	  addi      r12, r12, 0x1494
	  addi      r11, r11, 0x148C
	  addi      r10, r10, 0x1398
	  addi      r9, r9, 0x12D8
	  addi      r8, r8, 0x14B8
	  addi      r7, r7, 0x1220
	  addi      r6, r6, 0x12B4
	  addi      r5, r5, 0x1290
	  addi      r0, r4, 0x11FC
	  stw       r12, 0x18(r30)
	  mr        r31, r3
	  stw       r11, 0x1C(r30)
	  stw       r10, 0x10(r30)
	  stw       r9, 0x14(r30)
	  stw       r8, 0x8(r30)
	  stw       r7, 0xC(r30)
	  stw       r6, 0x20(r30)
	  stw       r5, 0x24(r30)
	  stw       r0, 0x4(r30)
	  b         .loc_0x24C

	.loc_0x188:
	  cmpwi     r30, 0
	  bne-      .loc_0x224
	  addi      r3, r29, 0x5C
	  crclr     6, 0x6
	  bl        0x2CE3C
	  bl        0x11DB8
	  lis       r31, 0x800C
	  lis       r12, 0x800C
	  addi      r31, r31, 0xF0C
	  lis       r30, 0x804A
	  lis       r11, 0x800C
	  lis       r10, 0x800C
	  lis       r9, 0x800C
	  lis       r8, 0x800C
	  lis       r7, 0x800C
	  lis       r6, 0x800C
	  lis       r5, 0x800C
	  lis       r4, 0x800C
	  stwu      r31, 0x6920(r30)
	  addi      r12, r12, 0xEE0
	  addi      r11, r11, 0xED8
	  addi      r10, r10, 0xDEC
	  addi      r9, r9, 0xD2C
	  addi      r8, r8, 0xF04
	  addi      r7, r7, 0xC74
	  addi      r6, r6, 0xD08
	  addi      r5, r5, 0xCE4
	  addi      r0, r4, 0xC50
	  stw       r12, 0x18(r30)
	  mr        r31, r3
	  stw       r11, 0x1C(r30)
	  stw       r10, 0x10(r30)
	  stw       r9, 0x14(r30)
	  stw       r8, 0x8(r30)
	  stw       r7, 0xC(r30)
	  stw       r6, 0x20(r30)
	  stw       r5, 0x24(r30)
	  stw       r0, 0x4(r30)
	  b         .loc_0x24C

	.loc_0x224:
	  mr        r4, r30
	  addi      r3, r29, 0x80
	  crclr     6, 0x6
	  bl        0x2CDA4
	  addi      r3, r29, 0xAC
	  crclr     6, 0x6
	  bl        0x2CD98
	  addi      r3, r29, 0xDC
	  crclr     6, 0x6
	  bl        0x2CD8C

	.loc_0x24C:
	  mr        r3, r31

	.loc_0x250:
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
 * Address:	800C0984
 * Size:	000038
 */
void TRKEXICallBack(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        0x310AC
	  mr        r3, r31
	  li        r4, 0x500
	  bl        -0x540
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
