#include "types.h"

// can't include OS headers bc report needs to not generate crclr
extern void SetTRKConnected(u32);
extern u32 GetTRKConnected(void);
extern void OSReport(const char*);

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void usr_putchar_serial(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BC384
 * @note Size: 0x88
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

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void usr_put_initialize_ram(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void usr_putchar_ram(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void usr_puts_ram(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BC380
 * @note Size: 0x4
 */
void usr_put_initialize(void) { }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void usr_putchar(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void usr_puts(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __do_putchar(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __do_puts(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x130
 */
void __do_puthex32(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __do_puthex8(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __do_puthex4(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __do_puthex2(void)
{
	// UNUSED FUNCTION
}
