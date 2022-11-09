#ifndef _JSYSTEM_JAS_JASDRIVER_H
#define _JSYSTEM_JAS_JASDRIVER_H

#include "JSystem/JAS/JASCallbackMgr.h"
#include "types.h"

struct JASTaskThread;

typedef s32 JASOutputRate;
typedef s32 JASMixMode;

namespace JASDriver {
float key2pitch_c5(int);
void setLevel(float, float, float);
void setMixerLevel(float, float);
void setAutoLevel(float);
void setDSPLevel(float);
u16 getChannelLevel();
u16 getAutoLevel();
float getAutoLevel_f32();
float getDSPLevel_f32();
void setOutputMode(unsigned long);
u32 getOutputMode();
bool rejectCallback(long (*)(void*), void*);
bool registerDspSyncCallback(long (*)(void*), void*);
bool registerSubFrameCallback(long (*)(void*), void*);
void subframeCallback();
void DSPSyncCallback();
void updateDacCallback();

void initAI(void (*)());
void startDMA();
void stopDMA();
void updateDac();
void updateDSP();
void readDspBuffer(short*, unsigned long);
void finishDSPFrame();
void registerMixCallback(short* (*)(long), JASMixMode);
float getDacRate();
int getSubFrames();
int getDacSize();
int getFrameSamples();
void mixMonoTrack(short*, unsigned long, short* (*)(long));
void mixMonoTrackWide(short*, unsigned long, short* (*)(long));
void mixExtraTrack(short*, unsigned long, short* (*)(long));
void mixInterleaveTrack(short*, unsigned long, short* (*)(long));

// unused/inlined:
void setChannelLevel(float);
s16 getDSPLevel();
float getChannelLevel_f32();
bool registerUpdateDacCallback(long (*)(void*), void*);
void setOutputRate(JASOutputRate);
void setSubFrames(u32);
void setNumDSPBuffer(u8);
void registerDacCallback(void (*)(short*, unsigned long));
void registDSPBufCallback(void (*)(short*, unsigned long));

extern u16 MAX_MIXERLEVEL;
extern u16 MAX_AUTOMIXERLEVEL;
extern u32 JAS_SYSTEM_OUTPUT_MODE;

extern const u8 sDspDacBufferCount;
extern const int sSubFrames;
extern const JASMixMode sMixMode;
extern const f32 sDacRate;

extern const f32 C5BASE_PITCHTABLE[0x80];

extern JASCallbackMgr sDspSyncCallback;
extern JASCallbackMgr sSubFrameCallback;
extern JASCallbackMgr sUpdateDacCallback;
} // namespace JASDriver

#endif
