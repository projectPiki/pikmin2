
/*
 * --INFO--
 * Address:	800C7428
 * Size:	000010
 */
extern void (*__stdio_exit)(void);

extern void __close_all(void);

void __stdio_atexit(void) { __stdio_exit = __close_all; }

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void perror(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ferror(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void feof(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void clearerr(void)
{
	// UNUSED FUNCTION
}
