#ifndef _JSYSTEM_JAS_JASDRIVER_H
#define _JSYSTEM_JAS_JASDRIVER_H

#include "JSystem/JAudio/JAS/JASCallbackMgr.h"
#include "types.h"

struct JASTaskThread;

typedef s32 JASOutputRate;

enum JASMixMode {
	MixMode_Mono       = 0,
	MixMode_Mono_Wide  = 1,
	MixMode_Extra      = 2,
	MixMode_InterLeave = 3,
};

namespace JASDriver {
typedef void (*DspDacCallback)(u32, s32);
typedef short* (*MixCallback)(s32);

f32 key2pitch_c5(int);
void setLevel(f32, f32, f32);
void setMixerLevel(f32, f32);
void setAutoLevel(f32);
void setDSPLevel(f32);
u16 getChannelLevel();
u16 getAutoLevel();
f32 getAutoLevel_f32();
f32 getDSPLevel_f32();
void setOutputMode(u32);
u32 getOutputMode();
bool rejectCallback(long (*)(void*), void*);
bool registerDspSyncCallback(long (*)(void*), void*);
bool registerSubFrameCallback(long (*)(void*), void*);
void subframeCallback();
void DSPSyncCallback();
void updateDacCallback();

void initAI(void (*func)());
void startDMA();
void stopDMA();
void updateDac();
void updateDSP();
void readDspBuffer(short*, u32);
void finishDSPFrame();
void registerMixCallback(short* (*)(long), JASMixMode);
f32 getDacRate();
int getSubFrames();
int getDacSize();
int getFrameSamples();
void mixMonoTrack(short*, u32, short* (*)(long));
void mixMonoTrackWide(short*, u32, short* (*)(long));
void mixExtraTrack(short*, u32, short* (*)(long));
void mixInterleaveTrack(short*, u32, short* (*)(long));

// unused/inlined:
void setChannelLevel(f32);
s16 getDSPLevel();
f32 getChannelLevel_f32();
bool registerUpdateDacCallback(long (*)(void*), void*);
void setOutputRate(JASOutputRate);
void setSubFrames(u32);
void setNumDSPBuffer(u8);
void registerDacCallback(void (*)(short*, u32));
void registDSPBufCallback(void (*)(short*, u32));

extern u16 MAX_MIXERLEVEL;
extern u16 MAX_AUTOMIXERLEVEL;
extern u32 JAS_SYSTEM_OUTPUT_MODE;

extern const f32 C5BASE_PITCHTABLE[0x80];

extern JASCallbackMgr sDspSyncCallback;
extern JASCallbackMgr sSubFrameCallback;
extern JASCallbackMgr sUpdateDacCallback;

extern u32* sDspDacBuffer;
extern u32 sDspDacReadBuffer;
extern u32 sDspDacWriteBuffer;
extern u32 sDspStatus;
extern DspDacCallback sDspDacCallback;

extern MixCallback extMixCallback;
} // namespace JASDriver

#endif
