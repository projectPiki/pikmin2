#ifndef _DOLPHIN_PRINT_H
#define _DOLPHIN_PRINT_H

#include "stdio.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#define DEFINE__PRINT(unit) \
	inline static void _Print(char*, ...) { printf(unit); }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
