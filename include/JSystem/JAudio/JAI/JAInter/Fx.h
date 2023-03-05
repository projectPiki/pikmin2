#ifndef _JSYSTEM_JAI_JAINTER_FX_H
#define _JSYSTEM_JAI_JAINTER_FX_H

#include "JSystem/JAudio/JAS/JASDsp.h"
#include "types.h"

namespace JAInter {
namespace Fx {
/**
 * @fabricated
 */
struct Init {
	u32 mSceneMax;             // _00
	u32 mBufferMax1;           // _04
	u32 mBufferMax2;           // _08
	u32 mBufferMax3;           // _0C
	u32 mBufferMax4;           // _10
	s32* mScenePointerOffsets; // _14
};

void init();
void setSceneMax(u8 sceneMax);
u8 getSceneMax();
void setBufferPointer(u8 index, s16* bufferPointer);
void setBufferMax(u32, u32, u32, u32);
u32 getBufferSizeMax(u8 index);
s16* getBufferPointer(u8 index);
JASDsp::FxlineConfig_** getFxconfigTable();
void setTablePointer(void** tablePointer);
void setScenePointer(u8 index, void* scenePointer);
void clearAllBuffer();

// unused/inlined:
void clearBuffer(u8 index);

extern Init* initOnCodeFxScene;
extern u8 mSceneMax;
extern u32* mBufferSizeMax;
extern s16** mBufferPointer;
extern JASDsp::FxlineConfig_** mFxconfigTable;
} // namespace Fx
} // namespace JAInter

#endif
