

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __do_puthex2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __do_puthex4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __do_puthex8(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void __do_puthex32(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __do_puts(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __do_putchar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void usr_puts(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void usr_putchar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BC380
 * Size:	000004
 */
void usr_put_initialize(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void usr_puts_ram(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void usr_putchar_ram(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void usr_put_initialize_ram(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BC384
 * Size:	000088
 */
void usr_puts_serial(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0
  b         .loc_0x54

.loc_0x28:
  bl        0x1190
  stb       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0
  stb       r31, 0x9(r1)
  bl        0x1170
  addi      r3, r1, 0x8
  bl        0x31324
  mr        r3, r30
  bl        0x1160
  li        r3, 0

.loc_0x54:
  cmpwi     r3, 0
  bne-      .loc_0x6C
  lbz       r0, 0x0(r29)
  addi      r29, r29, 0x1
  extsb.    r30, r0
  bne+      .loc_0x28

.loc_0x6C:
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
 * Address:	........
 * Size:	000058
 */
void usr_putchar_serial(void)
{
	// UNUSED FUNCTION
}