#ifndef _DOLPHIN_CRITICAL_REGIONS_H
#define _DOLPHIN_CRITICAL_REGIONS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void __init_critical_regions(void);
void __kill_critical_regions(void);
void __begin_critical_region(int region);
void __end_critical_region(int region);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
