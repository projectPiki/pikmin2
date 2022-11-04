#ifndef _JSYSTEM_JAI_JAINTER_STREAMMGR_H
#define _JSYSTEM_JAI_JAINTER_STREAMMGR_H

#include "JSystem/JAI/JAInter.h"

struct JAIStream;
struct JASAramStream;

namespace JAInter {
namespace StreamMgr {
struct BufferInfo {
};

/**
 * @fabricated
 * @size{0x20}
 */
struct StreamUpdate {
	inline StreamUpdate()
	    : _18(0)
	    , _1C(nullptr)
	{
	}

	inline void reset()
	{
		_00 = 0;
		_01 = 0;
		_04 = 1.0f;
		_08 = 1.0f;
		_0C = 0.5f;
		_10 = 0.5f;
		_14 = 0.5f;
		_1C = nullptr;
	}

	u8 _00;
	u8 _01;
	u8 _02;
	f32 _04;
	f32 _08;
	f32 _0C;
	f32 _10;
	f32 _14;
	u32 _18;
	JAIStream* _1C;
};

typedef void (*AllocCallback)(BufferInfo);
typedef void (*DeallocCallback)();
typedef void (*ExternalAramBufferCallback)(JASHeap*);
typedef void (*MgrCallback)();

void init();
void storeStreamBuffer(JAIStream**, JAInter::Actor*, u32, u32, u8, JAInter::SoundInfo*);
void releaseStreamBuffer(JAIStream*, u32);
void checkSystem();
void PlayingStream();
void changeCallback();
void processGFrameStream();
void checkEntriedStream();
void systemCallBack(u32, JASAramStream*, void*);
void prepareSystem(long);
void playDirect(char*);
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
	u16 _0 : 1;
	u16 _1 : 1;
	u16 _2 : 1;
	u16 _3 : 1;
	u16 _4 : 1;
	u16 _5 : 1;
	u16 _6 : 1;
} flags;
extern u8 prepareSw;
extern u8 prepareFlag;
extern u8 externalAram;
extern u8 finishFlag;
extern StreamUpdate* streamUpdate;
extern void* streamList;
extern JAIStream* streamSound;
extern void* initOnCodeStrm;
extern JASAramStream* streamSystem;
extern u32 systemStatus;
extern u32 controlStatus;
extern JASHeap* aramBufferHeap;
extern void* aramParentHeap;
extern AllocCallback allocCallback;
extern DeallocCallback deallocCallback;
/*
 * This isn't the same type as the param to setExternalAramBuffer.
 * It must return typeof(aramParentHeap).
 */
extern void* (*externalAramCallback)(void);
extern int dataFileNumber;
extern MgrCallback mgrCallback;

extern u32 sChannelMax;
extern u32 decodedBufferBlocks;
} // namespace StreamMgr
} // namespace JAInter

#endif
