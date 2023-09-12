#ifndef _THP_THPDRAW_H
#define _THP_THPDRAW_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void THPGXRestore(void);
void THPGXYuv2RgbSetup(u16* params);
void THPGXYuv2RgbDraw(u32* yImage, u32* uImage, u32* vImage, s16 x, s16 y, s16 texWidth, s16 texHeight, s16 polyWidth, s16 polyHeight);
void THPPlayerStop();
void THPPlayerSetVolume(int, int);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
