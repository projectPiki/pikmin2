#ifndef _THP_THPVIDEODECODE_H
#define _THP_THPVIDEODECODE_H

#include "Dolphin/os.h"
#include "THP/THPRead.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

BOOL CreateVideoDecodeThread(int, void*);
void VideoDecodeThreadStart();
void VideoDecodeThreadCancel();
void VideoDecoder(void*);
void VideoDecoderForOnMemory(void*);
void VideoDecode(THPReadBuffer*);
OSMessage PopFreeTextureSet();
BOOL PushFreeTextureSet(OSMessage*);
OSMessage PopDecodedTextureSet();
BOOL PushDecodedTextureSet(OSMessage*);

extern BOOL VideoDecodeThreadCreated;
extern OSMessageQueue FreeTextureSetQueue;
extern OSMessageQueue DecodedTextureSetQueue;
extern OSThread VideoDecodeThread;

#ifdef __cplusplus
};
#endif

#endif
