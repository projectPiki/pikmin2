#ifndef _THP_THPAUDIODECODE_H
#define _THP_THPAUDIODECODE_H

#include "Dolphin/os.h"

#ifdef __cplusplus
extern "C" {
#endif
int THPAudioDecode(s16* arg1, u8* arg2, int arg3); // TODO: determine args and name properly

BOOL CreateAudioDecodeThread(OSPriority, void*);
void AudioDecodeThreadStart();
void AudioDecodeThreadCancel();

void PushFreeAudioBuffer(void* buf);
void PushDecodedAudioBuffer(void* buf);

void* PopFreeAudioBuffer();
void* PopDecodedAudioBuffer(s32 flags);

#ifdef __cplusplus
}
#endif

#endif
