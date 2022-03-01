#include "types.h"
#include "trk.h"
#include "Dolphin/AmcExi2Stubs.h"
/*
 * --INFO--
 * Address:	800C0C50
 * Size:	000024
 */
BOOL ddh_cc_initinterrupts(void)
{
	EXI2_EnableInterrupts();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0C74
 * Size:	000070
 */
int ddh_cc_peek(void)
{
	s32 temp_r3;
	u8 sp8[2048];

	temp_r3 = EXI2_Poll();
	if (temp_r3 <= 0) {
		return 0;
	}
	if (EXI2_ReadN(sp8, temp_r3) == 0) {
		CircleBufferWriteBytes(gRecvCB, sp8, temp_r3);
	} else {
		return -0x2719;
	}
	return temp_r3;
}

/*
 * --INFO--
 * Address:	800C0CE4
 * Size:	000024
 */
BOOL ddh_cc_post_stop(void)
{
	EXI2_Reserve();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0D08
 * Size:	000024
 */
BOOL ddh_cc_pre_continue(void)
{
	EXI2_Unreserve();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0D2C
 * Size:	0000C0
 */
int ddh_cc_write(int arg0, int arg1)
{
	int temp_r3;
	int phi_r30;
	int phi_r29;

	phi_r29 = arg0;
	phi_r30 = arg1;
	if (gIsInitialized == FALSE) {
		MWTRACE(8, "cc not initialized\n");
		return -0x2711;
	}
	MWTRACE(8, "cc_write : Output data 0x%08x %ld bytes\n", arg0, arg1);
	while (phi_r30 > 0) {
		MWTRACE(1, "cc_write sending %ld bytes\n", phi_r30);
		temp_r3 = EXI2_WriteN(phi_r29, phi_r30);
		if (temp_r3 == 0)
			break;
		phi_r29 += temp_r3;
		phi_r30 -= temp_r3;
	}

	return 0;
}

/*
 * --INFO--
 * Address:	800C0DEC
 * Size:	0000EC
 */
void ddh_cc_read(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x820(r1)
	  mflr      r0
	  stw       r0, 0x824(r1)
	  stmw      r27, 0x80C(r1)
	  mr        r27, r3
	  mr        r30, r4
	  li        r29, 0
	  lwz       r0, -0x7370(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  li        r3, -0x2711
	  b         .loc_0xD8

	.loc_0x30:
	  lis       r3, 0x8048
	  mr        r5, r30
	  subi      r4, r3, 0x6254
	  mr        r6, r30
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x714
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5020
	  b         .loc_0x8C

	.loc_0x58:
	  li        r29, 0
	  bl        0x11804
	  mr.       r28, r3
	  beq-      .loc_0x8C
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  bl        0x117F8
	  mr.       r29, r3
	  bne-      .loc_0x8C
	  mr        r3, r31
	  mr        r5, r28
	  addi      r4, r1, 0x8
	  bl        0x228

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x378
	  cmplw     r3, r30
	  blt+      .loc_0x58
	  cmplwi    r29, 0
	  bne-      .loc_0xBC
	  lis       r3, 0x804F
	  mr        r4, r27
	  addi      r3, r3, 0x5020
	  mr        r5, r30
	  bl        0xF4
	  b         .loc_0xD4

	.loc_0xBC:
	  lis       r3, 0x8048
	  mr        r5, r29
	  subi      r4, r3, 0x622C
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x68C

	.loc_0xD4:
	  mr        r3, r29

	.loc_0xD8:
	  lmw       r27, 0x80C(r1)
	  lwz       r0, 0x824(r1)
	  mtlr      r0
	  addi      r1, r1, 0x820
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0ED8
 * Size:	000008
 */
BOOL ddh_cc_close(void) { return FALSE; }

/*
 * --INFO--
 * Address:	800C0EE0
 * Size:	000024
 */
void ddh_cc_open(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7370(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x14
	  li        r3, -0x2715
	  blr

	.loc_0x14:
	  li        r0, 0x1
	  li        r3, 0
	  stw       r0, -0x7370(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0F04
 * Size:	000008
 */
BOOL ddh_cc_shutdown(void) { return FALSE; }

/*
 * --INFO--
 * Address:	800C0F0C
 * Size:	000088
 */
void ddh_cc_initialize(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x61FC
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x60C
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x116FC
	  lis       r4, 0x8048
	  li        r3, 0x1
	  subi      r4, r4, 0x61E8
	  crclr     6, 0x6
	  bl        0x5EC
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  addi      r3, r3, 0x5020
	  li        r5, 0x800
	  addi      r4, r4, 0x4820
	  bl        0x230
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
