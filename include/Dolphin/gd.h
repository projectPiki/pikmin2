#ifndef _DOLPHIN_GD_H
#define _DOLPHIN_GD_H

#include "Dolphin/gx.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

//////////////// GD TYPES //////////////////
// Overflow callback function type.
typedef void (*GDOverflowCallback)(void);

// Struct for data download (size 0x10).
typedef struct GDCurrentDL {
	u8* begin;            // _00
	s32 length;           // _04
	u8* pDisplayListData; // _08
	u8* end;              // _0C
} GDCurrentDL;

////////////////////////////////////////////

////////////// GD FUNCTIONS ////////////////
// GD base functions.
void GDInitGDLObj(GDCurrentDL* obj, u8* start, s32 len);
void GDFlushCurrToMem();
void GDPadCurr32();
void GDOverflowed(void);

// GD geometry functions.
void GDSetVtxDescv(GXVtxDescList* list);
void GDSetArray(GXAttr attr, const void* data, u8 stride);
void GDSetArrayRaw(GXAttr attr, u32 data, u8 stride);

////////////////////////////////////////////

///////////// GD DECLARATIONS //////////////

extern GDCurrentDL* __GDCurrentDL;
extern GDOverflowCallback overflowcb;

////////////////////////////////////////////

/////////// GD HELPER FUNCTIONS ////////////

static inline void __GDWrite(u8 data) { *__GDCurrentDL->pDisplayListData++ = data; }

static inline void __GDCheckOverflowed(size_t size)
{
	if (__GDCurrentDL->pDisplayListData + size > __GDCurrentDL->end) {
		GDOverflowed();
	}
}

static inline void __GDSetCurrent(GDCurrentDL* obj) { __GDCurrentDL = obj; }

static inline void __GDWriteU32(u32 data)
{
	__GDWrite((data >> 24) & 0xFF);
	__GDWrite((data >> 16) & 0xFF);
	__GDWrite((data >> 8) & 0xFF);
	__GDWrite((data >> 0) & 0xFF);
}

static inline void __GDWriteU16(u16 data)
{
	__GDWrite((data >> 8) & 0xFF);
	__GDWrite((data >> 0) & 0xFF);
}

static inline void __GDWriteU8(u8 data) { __GDWrite((data >> 0) & 0xFF); }

static inline void __GDWriteF32(f32 data)
{
	__GDWrite(((u8*)&data)[0]);
	__GDWrite(((u8*)&data)[1]);
	__GDWrite(((u8*)&data)[2]);
	__GDWrite(((u8*)&data)[3]);
}

inline void GDOverflowCheck(u32 len)
{
	if (__GDCurrentDL->pDisplayListData + len > __GDCurrentDL->end) {
		GDOverflowed();
	}
}

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
