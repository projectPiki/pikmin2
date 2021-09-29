

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void __dc_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __del_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void __new_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void __init_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1718
 * Size:	000030
 */
void __copy(void)
{
/*
.loc_0x0:
  cmplwi    r3, 0
  beqlr-    
  cmplwi    r5, 0
  beqlr-    
  mr        r6, r3

.loc_0x14:
  lbz       r0, 0x0(r4)
  subic.    r5, r5, 0x1
  addi      r4, r4, 0x1
  stb       r0, 0x0(r6)
  addi      r6, r6, 0x1
  bne+      .loc_0x14
  blr
*/
}