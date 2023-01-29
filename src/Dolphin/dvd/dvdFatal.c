static void (*FatalFunc)();

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
/* void ShowMessage(void)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
/* void DVDSetAutoFatalMessaging(void)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	800DF8E4
 * Size:	000030
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
