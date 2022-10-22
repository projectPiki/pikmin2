#ifndef _JSYSTEM_JAI_JAINTER_FX_H
#define _JSYSTEM_JAI_JAINTER_FX_H

#include "JSystem/JAS/JASDsp.h"
#include "types.h"

namespace JAInter {
namespace Fx {
/**
 * @fabricated
 */
struct Init {
	u32 m_sceneMax;             // _00
	u32 m_bufferMax1;           // _04
	u32 m_bufferMax2;           // _08
	u32 m_bufferMax3;           // _0C
	u32 m_bufferMax4;           // _10
	s32* m_scenePointerOffsets; // _14
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
