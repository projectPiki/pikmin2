#include "types.h"
//#include "Dolphin/os.h"
extern void OSReport(const char*);
extern void SetTRKConnected(u32);
extern u32 GetTRKConnected(void);

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
void usr_put_initialize(void) { }

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
BOOL usr_puts_serial(const char* msg)
{
	BOOL connect_ = FALSE;
	char c;
	char buf[2];

	while (!connect_ && (c = *msg++) != '\0') {
		BOOL connect = GetTRKConnected();

		buf[0] = c;
		buf[1] = '\0';

		SetTRKConnected(FALSE);
		OSReport(buf);

		SetTRKConnected(connect);
		connect_ = FALSE;
	}
	return connect_;
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
