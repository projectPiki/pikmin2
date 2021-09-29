

/*
 * --INFO--
 * Address:	800D4558
 * Size:	000008
 */
void PPCMfmsr(void)
{
/*
.loc_0x0:
  mfmsr     r3
  blr
*/
}

/*
 * --INFO--
 * Address:	800D4560
 * Size:	000008
 */
void PPCMtmsr(void)
{
/*
.loc_0x0:
  mtmsr     r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCOrMsr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCAndMsr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCAndCMsr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4568
 * Size:	000008
 */
void PPCMfhid0(void)
{
/*
.loc_0x0:
  mfspr     r3, 0x3F0
  blr
*/
}

/*
 * --INFO--
 * Address:	800D4570
 * Size:	000008
 */
void PPCMthid0(void)
{
/*
.loc_0x0:
  mtspr     1008, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfhid1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4578
 * Size:	000008
 */
void PPCMfl2cr(void)
{
/*
.loc_0x0:
  mfspr     r3, 0x3F9
  blr
*/
}

/*
 * --INFO--
 * Address:	800D4580
 * Size:	000008
 */
void PPCMtl2cr(void)
{
/*
.loc_0x0:
  mtspr     1017, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	800D4588
 * Size:	000008
 */
void PPCMtdec(void)
{
/*
.loc_0x0:
  mtdec     r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfdec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4590
 * Size:	000008
 */
void PPCSync(void)
{
/*
.loc_0x0:
  sc        
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void PPCEieio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4598
 * Size:	000014
 */
void PPCHalt(void)
{
/*
.loc_0x0:
  sync      

.loc_0x4:
  nop       
  li        r3, 0
  nop       
  b         .loc_0x4
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfmmcr0(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45AC
 * Size:	000008
 */
void PPCMtmmcr0(void)
{
/*
.loc_0x0:
  mtspr     952, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfmmcr1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45B4
 * Size:	000008
 */
void PPCMtmmcr1(void)
{
/*
.loc_0x0:
  mtspr     956, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45BC
 * Size:	000008
 */
void PPCMtpmc1(void)
{
/*
.loc_0x0:
  mtspr     953, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45C4
 * Size:	000008
 */
void PPCMtpmc2(void)
{
/*
.loc_0x0:
  mtspr     954, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45CC
 * Size:	000008
 */
void PPCMtpmc3(void)
{
/*
.loc_0x0:
  mtspr     957, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45D4
 * Size:	000008
 */
void PPCMtpmc4(void)
{
/*
.loc_0x0:
  mtspr     958, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfsia(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMtsia(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45DC
 * Size:	000020
 */
void PPCMffpscr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x18(r1)
  stfd      f31, 0x10(r1)
  mffs      f31
  stfd      f31, 0x8(r1)
  lwz       r3, 0xC(r1)
  lfd       f31, 0x10(r1)
  addi      r1, r1, 0x18
  blr
*/
}

/*
 * --INFO--
 * Address:	800D45FC
 * Size:	000028
 */
void PPCMtfpscr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f31, 0x18(r1)
  li        r4, 0
  stw       r4, 0x10(r1)
  stw       r3, 0x14(r1)
  lfd       f31, 0x10(r1)
  mtfsf     255, f31
  lfd       f31, 0x18(r1)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800D4624
 * Size:	000008
 */
void PPCMfhid2(void)
{
/*
.loc_0x0:
  mfspr     r3, 0x398
  blr
*/
}

/*
 * --INFO--
 * Address:	800D462C
 * Size:	000008
 */
void PPCMthid2(void)
{
/*
.loc_0x0:
  mtspr     920, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCMfwpar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4634
 * Size:	000008
 */
void PPCMtwpar(void)
{
/*
.loc_0x0:
  mtspr     921, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfdmaU(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfdmaL(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMtdmaU(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMtdmaL(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpvr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void PPCEnableSpeculation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D463C
 * Size:	000028
 */
void PPCDisableSpeculation(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x8(r1)
  bl        -0xE0
  ori       r3, r3, 0x200
  bl        -0xE0
  lwz       r0, 0xC(r1)
  addi      r1, r1, 0x8
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCSetFpIEEEMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4664
 * Size:	000008
 */
void PPCSetFpNonIEEEMode(void)
{
/*
.loc_0x0:
  mtfsb1    29
  blr
*/
}