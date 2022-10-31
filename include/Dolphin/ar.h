#ifndef _DOLPHIN_AR_H
#define _DOLPHIN_AR_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef void (*ARQCallback)(u32);

typedef struct _ARQRequest {
	u32 _00; // _00
	u32 _04; // _04
	u32 _08; // _08
	u32 _0C; // _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C
} ARQRequest;

void ARQPostRequest(ARQRequest*, u32, u32, int, u32, u32, u32, ARQCallback);

u32 ARGetBaseAddress();

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
