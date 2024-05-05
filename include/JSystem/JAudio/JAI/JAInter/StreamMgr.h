#ifndef _JSYSTEM_JAI_JAINTER_STREAMMGR_H
#define _JSYSTEM_JAI_JAINTER_STREAMMGR_H

#include "JSystem/JAudio/JAI/JAInter.h"

struct JAIStream;
struct JASAramStream;

namespace JAInter {
namespace StreamMgr {
struct BufferInfo {
	u8* mStart;  // _00
	u32 mLength; // _04
};

struct StreamUpdateData {
	inline StreamUpdateData()
	    : mActiveTrackFlag(0)
	    , mStream(nullptr)
	{
	}

	inline void reset()
	{
		_00     = 0;
		_01     = 0;
		_04     = 1.0f;
		_08     = 1.0f;
		_0C     = 0.5f;
		_10     = 0.5f;
		_14     = 0.5f;
		mStream = nullptr;
	}

	u8 _00;               // _00
	u8 _01;               // _01
	u8 mPrepareFlag;      // _02
	f32 _04;              // _04, volume
	f32 _08;              // _08, pitch
	f32 _0C;              // _0C, pan
	f32 _10;              // _10, fxmix
	f32 _14;              // _14, dolby
	u32 mActiveTrackFlag; // _18, see JAISoundTrackActiveFlags enum
	JAIStream* mStream;   // _1C
};

typedef BufferInfo (*AllocCallback)(s32);
typedef void (*DeallocCallback)();
typedef void (*ExternalAramBufferCallback)(JASHeap*);
typedef void (*MgrCallback)();

void init();
void storeStreamBuffer(JAIStream**, JAInter::Actor*, u32, u32, u8, JAInter::SoundInfo*);
void releaseStreamBuffer(JAIStream* stream, u32 fadeTime);
void checkSystem();
void PlayingStream();
void changeCallback();
void processGFrameStream();
void checkEntriedStream();
void systemCallBack(u32, JASAramStream*, void*);
void prepareSystem(s32);
void playDirect(char* path);
void stopDirect();
void initChannel();
JASAramStream* getStreamObjectPointer();
u32 getSystemStatus();
u32 getDecodedBufferBlocks();
u32 getDecodedBufferSize(u32);
u32 getChannelMax();

// unused/inlined:
void RequestStream();
void setParentHeap(JASHeap*);
void setAllockCallback(AllocCallback);
void setDeallockCallback(DeallocCallback);
void setDecodedBufferBlocks(u32);
JAIStream* getStreamSound();
void setChannelMax(u32);
void setExternalAramBuffer(ExternalAramBufferCallback);

extern struct Flags {
	u16 _00 : 1;
	u16 _01 : 1;
	u16 _02 : 1;
	u16 _03 : 1;
	u16 _04 : 1;
	u16 _05 : 1;
	u16 _06 : 1;
} flags;

extern u8 prepareSw;
extern u8 prepareFlag;
extern u8 externalAram;
extern u8 finishFlag;
extern StreamUpdateData* streamUpdate;
extern u16* streamList;
extern JAIStream* streamSound;
extern void* initOnCodeStrm;
extern JASAramStream* streamSystem;
extern u32 systemStatus;
extern u32 controlStatus;
extern JASHeap* aramBufferHeap;
extern JASHeap* aramParentHeap;
extern AllocCallback allocCallback;
extern DeallocCallback deallocCallback;
/**
 * This isn't the same type as the param to setExternalAramBuffer.
 * It must return typeof(aramParentHeap).
 */
extern JASHeap* (*externalAramCallback)();
extern int dataFileNumber;
extern MgrCallback mgrCallback;

extern u32 sChannelMax;
extern u32 decodedBufferBlocks;
} // namespace StreamMgr
} // namespace JAInter

#endif
