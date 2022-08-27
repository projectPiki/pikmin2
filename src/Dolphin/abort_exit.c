#include "Dolphin/critical_regions.h"

void __destroy_global_chain(void);
void _ExitProcess(void);

extern void (*_dtors[])(void);

static void (*__console_exit)(void);
void (*__stdio_exit)(void);
static int __atexit_curr_func;
int __aborting;

static void (*__atexit_funcs[64])(void);

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __exit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2460
 * Size:	0000F0
 */
void exit(int status)
{
	int i;
	void (**dtor)(void);

	if (!__aborting) {
		__begin_critical_region(0);
		__end_critical_region(0);
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
	__begin_critical_region(0);
	while (__atexit_curr_func > 0)
		__atexit_funcs[--__atexit_curr_func]();
	__end_critical_region(0);
	__kill_critical_regions();
	if (__console_exit != NULL) {

		__console_exit();
		__console_exit = NULL;
	}
	_ExitProcess();
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __atexit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void atexit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void abort(void)
{
	// UNUSED FUNCTION
}
