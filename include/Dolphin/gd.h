#ifndef _DOLPHIN_GD_H
#define _DOLPHIN_GD_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct GDCurrentDL {
	u8* begin;
	s32 length;
	u8* pDisplayListData;
	u8* end;
} GDCurrentDL;

extern GDCurrentDL* __GDCurrentDL;

void GDInitGDLObj(struct GDCurrentDL* GDL_Obj, u8* param_2, s32 param_3);
void GDFlushCurrToMem(void);
void GDPadCurr32(void);
void GDOverflowed(void);

static inline void __GDWrite(u8 data) { *__GDCurrentDL->pDisplayListData++ = data; }

typedef void (*GDOverflowCallback)(void);
static GDOverflowCallback overflowcb = (GDOverflowCallback)NULL;

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
