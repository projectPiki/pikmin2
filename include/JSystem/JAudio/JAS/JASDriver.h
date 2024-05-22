#ifndef _JSYSTEM_JAS_JASDRIVER_H
#define _JSYSTEM_JAS_JASDRIVER_H

#include "JSystem/JAudio/JAS/JASCallbackMgr.h"
#include "types.h"

struct JASTaskThread;

enum JASOutputRate {
	JASOUTRATE_0, // 0
};

enum JASMixMode {
	MixMode_Mono       = 0,
	MixMode_Mono_Wide  = 1,
	MixMode_Extra      = 2,
	MixMode_InterLeave = 3,
};

enum JASOutputMode {
	JASOUTPUT_Mono     = 0,
	JASOUTPUT_Stereo   = 1,
	JASOUTPUT_Surround = 2,
};

namespace JASDriver {
typedef s32 (*DriverCallback)(void*);
typedef void (*DspDacCallback)(s16*, u32);
typedef s16* (*MixCallback)(s32);
typedef void (*MixFunc)(s16*, u32, MixCallback);

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
bool rejectCallback(DriverCallback, void*);
bool registerDspSyncCallback(DriverCallback, void*);
bool registerSubFrameCallback(DriverCallback, void*);
void subframeCallback();
void DSPSyncCallback();
void updateDacCallback();

void initAI(void (*func)());
void startDMA();
void stopDMA();
void updateDac();
void updateDSP();
void readDspBuffer(s16*, u32);
void finishDSPFrame();
void registerMixCallback(MixCallback, JASMixMode);
f32 getDacRate();
u32 getSubFrames();
static int getDacSize();
static int getFrameSamples();
static void mixMonoTrack(s16*, u32, MixCallback);
static void mixMonoTrackWide(s16*, u32, MixCallback);
static void mixExtraTrack(s16*, u32, MixCallback);
static void mixInterleaveTrack(s16*, u32, MixCallback);

// unused/inlined:
void setChannelLevel(f32);
s16 getDSPLevel();
f32 getChannelLevel_f32();
bool registerUpdateDacCallback(DriverCallback, void*);
void setOutputRate(JASOutputRate);
void setSubFrames(u32);
void setNumDSPBuffer(u8);
void registerDacCallback(DspDacCallback);
void registDSPBufCallback(DspDacCallback);

extern u16 MAX_MIXERLEVEL;
extern u16 MAX_AUTOMIXERLEVEL;
extern u32 JAS_SYSTEM_OUTPUT_MODE;

} // namespace JASDriver

#endif
