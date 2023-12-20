static void* __OSArenaHi = (void*)0x00000000;
static void* __OSArenaLo = (void*)0xffffffff;

/**
 * @note Address: 0x800EC424
 * @note Size: 0x8
 */
void* OSGetArenaHi(void) { return __OSArenaHi; }
/*
.loc_0x0:
  lwz       r3, -0x7098(r13)
  blr
*/

/**
 * @note Address: 0x800EC42C
 * @note Size: 0x8
 */
void* OSGetArenaLo(void) { return __OSArenaLo; }
/*
.loc_0x0:
  lwz       r3, -0x7CA0(r13)
  blr
*/

/**
 * @note Address: 0x800EC434
 * @note Size: 0x8
 */
void OSSetArenaHi(void* arena_hi)

{
	__OSArenaHi = arena_hi;
	return;
}
/*
.loc_0x0:
  stw       r3, -0x7098(r13)
  blr
*/

/**
 * @note Address: 0x800EC43C
 * @note Size: 0x8
 */
void OSSetArenaLo(void* arena_lo)

{
	__OSArenaLo = arena_lo;
	return;
}
/*
.loc_0x0:
  stw       r3, -0x7CA0(r13)
  blr
*/

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void OSAllocFromArenaLo(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void OSAllocFromArenaHi(void)
{
	// UNUSED FUNCTION
}
