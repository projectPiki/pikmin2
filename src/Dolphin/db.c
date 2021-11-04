

/*
 * --INFO--
 * Address:	800DABC4
 * Size:	000028
 */
void DBInit(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8000
	  addi      r0, r4, 0x40
	  lis       r3, 0x800E
	  stw       r0, -0x7258(r13)
	  subi      r3, r3, 0x53CC
	  subis     r0, r3, 0x8000
	  stw       r0, 0x48(r4)
	  li        r0, 0x1
	  stw       r0, -0x7254(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void DBIsDebuggerPresent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DABEC
 * Size:	000048
 */
void __DBExceptionDestinationAux(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0x4(r1)
	  addi      r3, r3, 0x7920
	  crclr     6, 0x6
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  lwz       r4, 0xC0(r0)
	  subis     r31, r4, 0x8000
	  bl        0x12ADC
	  mr        r3, r31
	  bl        0x12634
	  bl        -0x6684
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DAC34
 * Size:	000010
 */
void __DBExceptionDestination(void)
{
	/*
	.loc_0x0:
	  mfmsr     r3
	  ori       r3, r3, 0x30
	  mtmsr     r3
	  b         -0x54
	*/
}

/*
 * --INFO--
 * Address:	800DAC44
 * Size:	00001C
 */
void __DBIsExceptionMarked(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7258(r13)
	  rlwinm    r0,r3,0,24,31
	  li        r3, 0x1
	  lwz       r4, 0x4(r4)
	  slw       r0, r3, r0
	  and       r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __DBMarkException(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __DBSetPresent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DAC60
 * Size:	000050
 */
void DBPrintf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  bne-      cr1, .loc_0x28
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x28:
	  stw       r3, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  addi      r1, r1, 0x70
	  blr
	*/
}
