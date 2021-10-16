extern int __OSArenaHi;
int __OSArenaLo = -1;

/*
 * --INFO--
 * Address:	800EC424
 * Size:	000008
 */
int OSGetArenaHi(void)
{return __OSArenaHi;}
/*
.loc_0x0:
  lwz       r3, -0x7098(r13)
  blr
*/

/*
 * --INFO--
 * Address:	800EC42C
 * Size:	000008
 */
int OSGetArenaLo(void)
{return __OSArenaLo;}
/*
.loc_0x0:
  lwz       r3, -0x7CA0(r13)
  blr
*/

/*
 * --INFO--
 * Address:	800EC434
 * Size:	000008
 */
void OSSetArenaHi(int arena_hi)

{
  __OSArenaHi = arena_hi;
  return;
}
/*
.loc_0x0:
  stw       r3, -0x7098(r13)
  blr
*/

/*
 * --INFO--
 * Address:	800EC43C
 * Size:	000008
 */
void OSSetArenaLo(int arena_lo)

{
  __OSArenaLo = arena_lo;
  return;
}
/*
.loc_0x0:
  stw       r3, -0x7CA0(r13)
  blr
*/

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