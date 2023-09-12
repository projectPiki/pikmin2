#ifndef _THP_THPBUFFER_H
#define _THP_THPBUFFER_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct THPTextureSet {
	u8* ytexture;
	u8* utexture;
	u8* vtexture;
	s32 frameNumber;
} THPTextureSet;

typedef struct THPAudioBuffer {
	s16* buffer;
	s16* curPtr;
	u32 validSample;
} THPAudioBuffer;

typedef struct THPReadBuffer {
	u8* ptr;
	s32 frameNumber;
	BOOL isValid;
} THPReadBuffer;

#ifdef __cplusplus
}
#endif

#endif