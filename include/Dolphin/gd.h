#ifndef _DOLPHIN_GD_H
#define _DOLPHIN_GD_H

#include "Dolphin/gx.h"
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
void GDSetVtxDescv(struct _GXVtxDescList*);

static inline void __GDWrite(u8 data) { *__GDCurrentDL->pDisplayListData++ = data; }

static inline void __GDWriteU16(u16 data)
{
	*__GDCurrentDL->pDisplayListData++ = ((u8*)&data)[0];
	*__GDCurrentDL->pDisplayListData++ = ((u8*)&data)[1];
}

static inline void __GDWriteF32(f32 data)
{
	*__GDCurrentDL->pDisplayListData++ = ((u8*)&data)[0];
	*__GDCurrentDL->pDisplayListData++ = ((u8*)&data)[1];
	*__GDCurrentDL->pDisplayListData++ = ((u8*)&data)[2];
	*__GDCurrentDL->pDisplayListData++ = ((u8*)&data)[3];
}

typedef void (*GDOverflowCallback)(void);
extern GDOverflowCallback overflowcb;

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
