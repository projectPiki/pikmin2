#ifndef _THP_THPDRAW_H
#define _THP_THPDRAW_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void THPGXRestore(void);
void THPPlayerStop();
void THPPlayerSetVolume(int, int);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
