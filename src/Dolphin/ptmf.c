

/*
 * --INFO--
 * Address:	800C1AF4
 * Size:	000030
 */
void __ptmf_test(void)
{
/*
.loc_0x0:
  lwz       r5, 0x0(r3)
  lwz       r6, 0x4(r3)
  lwz       r7, 0x8(r3)
  li        r3, 0x1
  cmpwi     r5, 0
  cmpwi     cr6, r6, 0
  cmpwi     cr7, r7, 0
  bnelr-    
  bnelr-    cr6
  bnelr-    cr7
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void __ptmf_cmpr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void __ptmf_call(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void __ptmf_call4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1B24
 * Size:	000028
 */
void __ptmf_scall(void)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r12)
  lwz       r11, 0x4(r12)
  lwz       r12, 0x8(r12)
  add       r3, r3, r0
  cmpwi     r11, 0
  blt-      .loc_0x20
  lwzx      r12, r3, r12
  lwzx      r12, r12, r11

.loc_0x20:
  mtctr     r12
  bctr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void __ptmf_scall4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void __ptmf_cast(void)
{
	// UNUSED FUNCTION
}