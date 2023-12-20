#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"

void __destroy_global_chain(void);
void _ExitProcess(void);

extern void (*_dtors[])(void);

static void (*__console_exit)(void);
void (*__stdio_exit)(void);
static int __atexit_curr_func;
int __aborting;

static void (*__atexit_funcs[64])(void);

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void abort(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void atexit(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void __atexit(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C2460
 * @note Size: 0xF0
 */
void exit(int status)
{
	int i;
	void (**dtor)(void);

	if (!__aborting) {
		__begin_critical_region(atexit_funcs_access);
		__end_critical_region(atexit_funcs_access);
		__destroy_global_chain();
		dtor = _dtors;
		while (*dtor != NULL) {
			(*dtor)();
			dtor++;
		}
		if (__stdio_exit != NULL) {
			__stdio_exit();
			__stdio_exit = NULL;
		}
	}
	__begin_critical_region(atexit_funcs_access);
	while (__atexit_curr_func > 0)
		__atexit_funcs[--__atexit_curr_func]();
	__end_critical_region(atexit_funcs_access);
	__kill_critical_regions();
	if (__console_exit != NULL) {

		__console_exit();
		__console_exit = NULL;
	}
	_ExitProcess();
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void __exit(void)
{
	// UNUSED FUNCTION
}
