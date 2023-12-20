#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void __init_critical_regions(void) { return; }

/**
 * @note Address: 0x800C6260
 * @note Size: 0x4
 */
void __kill_critical_regions(void) { return; }

/**
 * @note Address: 0x800C625C
 * @note Size: 0x4
 */
void __begin_critical_region(int region) { return; }

/**
 * @note Address: 0x800C6258
 * @note Size: 0x4
 */
void __end_critical_region(int region) { return; }
