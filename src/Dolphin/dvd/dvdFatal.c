static void (*FatalFunc)();

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
/* void ShowMessage(void)
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
/* void DVDSetAutoFatalMessaging(void)
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: 0x800DF8E4
 * @note Size: 0x30
 */
void __DVDPrintFatalMessage(void)
{
	if (FatalFunc != 0) {
		(*FatalFunc)();
	}
	return;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r12, -0x7188(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x20
	  mtlr      r12
	  blrl

	.loc_0x20:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}
