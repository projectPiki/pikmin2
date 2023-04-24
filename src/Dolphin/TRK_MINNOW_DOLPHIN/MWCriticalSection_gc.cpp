#include "types.h"

extern "C" {
bool OSRestoreInterrupts(uint);
uint OSDisableInterrupts();

/*
 * --INFO--
 * Address:	800C15EC
 * Size:	000004
 */
void MWInitializeCriticalSection(uint* section) { }

/*
 * --INFO--
 * Address:	800C15BC
 * Size:	000030
 */
void MWEnterCriticalSection(uint* section) { *section = OSDisableInterrupts(); }

/*
 * --INFO--
 * Address:	800C1598
 * Size:	000024
 */
void MWExitCriticalSection(uint* section) { OSRestoreInterrupts(*section); }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void MWTerminateCriticalSection()
{
	// UNUSED FUNCTION
}
};
