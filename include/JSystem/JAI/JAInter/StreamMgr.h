#ifndef _JSYSTEM_JAI_JAINTER_STREAMMGR_H
#define _JSYSTEM_JAI_JAINTER_STREAMMGR_H

#include "JSystem/JAI/JAInter.h"

struct JAIStream;
struct JASAramStream;

namespace JAInter {
namespace StreamMgr {
struct BufferInfo { };

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
void getDecodedBufferSize(u32);
u32 getChannelMax();

// unused/inlined:
void RequestStream();
void setParentHeap(JASHeap*);
void setAllockCallback(AllocCallback);
void setDeallockCallback(DeallocCallback);
void setDecodedBufferBlocks(u32);
void getStreamSound();
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
extern unkptr streamUpdate;
extern unkptr streamList;
extern JAIStream* streamSound;
extern unkptr initOnCodeStrm;
extern JASAramStream* streamSystem;
extern u32 systemStatus;
extern int controlStatus;
extern JASHeap* aramBufferHeap;
extern unkptr aramParentHeap;
extern AllocCallback allocCallback;
extern DeallocCallback deallocCallback;
/*
 * This isn't the same type as the param to setExternalAramBuffer.
 * It must return typeof(aramParentHeap).
 */
extern unkptr externalAramCallback;
extern u32 dataFileNumber;
extern MgrCallback mgrCallback;

extern const u32 sChannelMax;
extern const u32 decodedBufferBlocks;
} // namespace StreamMgr
} // namespace JAInter

#endif
