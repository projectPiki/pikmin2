

/*
 * --INFO--
 * Address:	800CC258
 * Size:	000088
 */
void fwide(void)
{
/*
.loc_0x0:
  cmplwi    r3, 0
  beq-      .loc_0x14
  lhz       r0, 0x4(r3)
  rlwinm.   r0,r0,26,29,31
  bne-      .loc_0x1C

.loc_0x14:
  li        r3, 0
  blr       

.loc_0x1C:
  lbz       r5, 0x5(r3)
  rlwinm    r0,r5,28,30,31
  cmpwi     r0, 0x1
  beq-      .loc_0x80
  bge-      .loc_0x3C
  cmpwi     r0, 0
  bge-      .loc_0x48
  blr       

.loc_0x3C:
  cmpwi     r0, 0x3
  bgelr-    
  b         .loc_0x78

.loc_0x48:
  cmpwi     r4, 0
  ble-      .loc_0x60
  li        r0, 0x2
  rlwimi    r5,r0,4,26,27
  stb       r5, 0x5(r3)
  b         .loc_0x70

.loc_0x60:
  bge-      .loc_0x70
  li        r0, 0x1
  rlwimi    r5,r0,4,26,27
  stb       r5, 0x5(r3)

.loc_0x70:
  mr        r3, r4
  blr       

.loc_0x78:
  li        r3, 0x1
  blr       

.loc_0x80:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void fgetws(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void fputws(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void ungetwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void fgetwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void getwchar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void getwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void fputwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void putwchar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void putwc(void)
{
	// UNUSED FUNCTION
}