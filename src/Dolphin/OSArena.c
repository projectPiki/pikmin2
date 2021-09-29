

/*
 * --INFO--
 * Address:	800EC424
 * Size:	000008
 */
void OSGetArenaHi(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7098(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800EC42C
 * Size:	000008
 */
void OSGetArenaLo(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7CA0(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800EC434
 * Size:	000008
 */
void OSSetArenaHi(void)
{
/*
.loc_0x0:
  stw       r3, -0x7098(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800EC43C
 * Size:	000008
 */
void OSSetArenaLo(void)
{
/*
.loc_0x0:
  stw       r3, -0x7CA0(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void OSAllocFromArenaLo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void OSAllocFromArenaHi(void)
{
	// UNUSED FUNCTION
}