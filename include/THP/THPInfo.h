#ifndef _THP_THPINFO_H
#define _THP_THPINFO_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct THPVideoInfo {
	u32 xSize;
	u32 ySize;
	u32 videoType;
} THPVideoInfo;

typedef struct THPAudioInfo {
	u32 sndChannels;
	u32 sndFrequency;
	u32 sndNumSamples;
	u32 sndNumTracks;
} THPAudioInfo;

typedef struct THPFrameCompInfo {
	u32 numComponents;
	u8 frameComp[16];
} THPFrameCompInfo;

#ifdef __cplusplus
}
#endif

#endif
