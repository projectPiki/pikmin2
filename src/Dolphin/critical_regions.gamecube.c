#include "types.h"
#include "Dolphin/critical_regions.h"

/*
 * --INFO--
 * Address:	800C6258
 * Size:	000004
 */
void __end_critical_region(int region) { return; }

/*
 * --INFO--
 * Address:	800C625C
 * Size:	000004
 */
void __begin_critical_region(int region) { return; }

/*
 * --INFO--
 * Address:	800C6260
 * Size:	000004
 */
void __kill_critical_regions(void) { return; }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void __init_critical_regions(void) { return; }
