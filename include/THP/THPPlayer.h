#ifndef _THP_THPPLAYER_H
#define _THP_THPPLAYER_H

#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/gx.h"
#include "THP/THPBuffer.h"
#include "THP/THPFile.h"
#include "THP/THPInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct THPPlayer {
	DVDFileInfo fileInfo;
	THPHeader header;
	THPFrameCompInfo compInfo;
	THPVideoInfo videoInfo;
	THPAudioInfo audioInfo;
	void* thpWork;
	BOOL open;
	u8 state;
	u8 internalState;
	u8 playFlag;
	u8 audioExist;
	s32 dvdError;
	s32 videoError;
	BOOL onMemory;
	u8* movieData;
	s32 initOffset;
	s32 initReadSize;
	s32 initReadFrame;
	u32 curField;
	s64 retaceCount;
	s32 prevCount;
	s32 curCount;
	s32 videoDecodeCount;
	f32 curVolume;
	f32 targetVolume;
	f32 deltaVolume;
	s32 rampCount;
	s32 curAudioTrack;
	s32 curVideoNumber;
	s32 curAudioNumber;
	THPTextureSet* dispTextureSet;
	THPAudioBuffer* playAudioBuffer;
	THPReadBuffer readBuffer[10];
	THPTextureSet textureSet[3];
	THPAudioBuffer audioBuffer[6];
} THPPlayer; // Size: 0x1f0

extern THPPlayer ActivePlayer;

BOOL THPPlayerInit();
void THPPlayerQuit();
BOOL THPPlayerOpen(const char* fileName, BOOL onMemory);
BOOL THPPlayerClose();
BOOL THPPlayerPlay();
void THPPlayerStop();
BOOL THPPlayerPause();
BOOL THPPlayerPrepare(s32 offset, u8 flag, s32 audioTrack);

BOOL THPPlayerSetBuffer(u8* data);

u32 THPPlayerCalcNeedMemory();

BOOL THPPlayerGetVideoInfo(void* dst);
// BOOL THPPlayerGetAudioInfo(void *dst);
// f32 THPPlayerGetFrameRate();
BOOL THPPlayerSetVolume(s32 vol, s32 duration);

s32 THPPlayerDrawCurrentFrame(GXRenderModeObj* rmode, s32, s32, s32, s32); // TODO, parameter names from dwarf info if it exists
u32 THPPlayerGetTotalFrame();
u8 THPPlayerGetState();

void THPPlayerPostDrawDone();

#ifdef __cplusplus
}
#endif

void PrepareReady(int msg);

#endif /* _THP_THPPLAYER_H */
