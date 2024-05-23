#ifndef _JSYSTEM_JAS_JASDSP_H
#define _JSYSTEM_JAS_JASDSP_H

#include "types.h"
#include "Dolphin/dsp.h"

struct JASWaveInfo;

namespace JASDsp {
// typedef s16 Fxline[0x10];
/** @fabricated */
struct Fxline {
	u16 mBufferStatus; // _00
	u16 _02;           // _02
	s16* mAudioBuffer; // _04
	u16 _08;           // _08
	u16 _0A;           // _0A
	u16 _0C;           // _0C
	u16 _0E;           // _0E
	u16 _10[8];        // _10

	// u16 _12;  // _12
	// u16 _14;  // _14
	// u16 _16;  // _16
	// u16 _18;  // _18
	// u16 _1A;  // _1A
	// u16 _1C;  // _1C
	// u16 _1E;  // _1E
};
struct TChannel {
	// fabricated
	struct TMixer {
		u16 mBusConnect; // _00
		s16 mMixVolume;  // _02
		u16 mBaseVolume; // _04
		u16 mMixFlags;   // _06, delay and volume
	};

	void init();
	void playStart();
	void playStop();
	void replyFinishRequest();
	void forceStop();
	bool isFinish() const;
	void setWaveInfo(const JASWaveInfo& info, u32 dataOffset, u32 blockCount);
	void setOscInfo(u32 bytesPerBlock);
	void initAutoMixer();
	void setAutoMixer(u16 level, u8, u8, u8, u8);
	void setPitch(u16 pitch);
	void setMixerInitDelayMax(u8 mixerInitDelayMax);
	void setMixerInitVolume(u8 index, s16 volume);
	void setMixerInitDelaySamples(u8 index, u8 samples);
	void setMixerDelaySamples(u8 index, u8 samples);
	void setMixerVolume(u8 index, s16 volume);
	void setPauseFlag(u8 pauseFlag);
	void flush();
	void initFilter();
	void setFilterMode(u16 filterMode);
	void setIIRFilterParam(s16* params);
	void setFIR8FilterParam(s16* params);
	void setDistFilter(s16 distFilter);
	void setBusConnect(u8 index, u8 connectType);

	// unused/inlined:
	bool isActive() const;
	u16 getBlockCounter() const;
	u16 getRemainSamples() const;
	void updateAMVolume(u16);
	void updateAMPan(u8, u8);
	void updateAMFX(u8);

	u16 mIsActive;            // _00
	u16 mIsFinished;          // _02
	s16 mPitch;               // _04
	u16 _06;                  // _06
	u16 mIsPlaying;           // _08
	u16 _0A;                  // _0A
	u16 mPauseFlag;           // _0C
	u16 mMixerInitDelayMax;   // _0E
	TMixer mMixer[4];         // _10
	u8 _30[0x20];             // _30
	u16 mVolumeAndPan;        // _50
	u16 mFxMixAndDolby;       // _52
	u16 mCurrentMixerValue;   // _54
	u16 mMixerLevel;          // _56
	u16 mIsMixerInitialized;  // _58
	u16 _5A;                  // _5A
	u8 _5C[4];                // _5C
	u16 _60;                  // _60
	u16 _62;                  // _62
	u16 mSamplesPerBlock;     // _64
	u16 _66;                  // _66
	u32 mBlockCount;          // _68
	u8 _6C[0x4];              // _6C
	u32 mSampleOffset;        // _70
	u32 mCurrentSampleOffset; // _74
	s16 _78[4];               // _78
	s16 _80[20];              // _80
	s16 _A8[4];               // _A8
	u16 _B0[0x10];            // _B0
	u8 _D0[0x30];             // _D0
	u16 mBytesPerBlock;       // _100
	u16 mLoopOffset;          // _102
	s16 mLast;                // _104
	s16 mPenult;              // _106
	u16 mFilterMode;          // _108
	u16 mForcedStop;          // _10A
	u32 _10C;                 // _10C
	u32 mLoopStartOffset;     // _110
	u32 mNextSampleOffset;    // _114
	u32 mDataOffset;          // _118
	u32 mSampleCount;         // _11C
	s16 mFir8FilterParam[8];  // _120
	u8 _130[0x18];            // _130
	s16 mIirFilterParam[4];   // _148
	s16 mDistFilter;          // _150
	u8 _152[0x2E];            // _152
};

struct FxlineConfig_ {
	u8 mStatus;       // _00
	u16 _02;          // _02
	s16 _04;          // _04
	u16 _06;          // _06
	s16 _08;          // _08
	s16 _0A;          // _0A
	u32 mBufferCount; // _0C
	s16 _10[8];       // _10
};

void boot(DSPCallback callback);
void releaseHalt(u32);
void finishWork(u16);
void syncFrame(u32, u32, u32);
void setDSPMixerLevel(f32);
f32 getDSPMixerLevel();
TChannel* getDSPHandle(int index);
void invalChannelAll();
void initBuffer();
bool setFXLine(u8, s16*, JASDsp::FxlineConfig_*);

// unused/inlined:
void getDSPHandleNc(int);
void setFilterTable(s16*, s16*, u32);
void flushBuffer();
void flushChannelAll();
void cacheChannelAll();
Fxline& getFXHandle(u8);
void getFXHandleNc(u8);
void changeFXLineParam(u8, u8, u32);

extern TChannel* CH_BUF;
extern Fxline* FX_BUF;
extern f32 sDSPVolume;

} // namespace JASDsp

struct JASDSPChannel {
	typedef s32 (*Callback)(u32, JASDsp::TChannel*, void*);
	JASDSPChannel();
	void free();
	void start();
	void drop();
	static void initAll();
	static JASDSPChannel* alloc(u8, Callback, void*);
	static JASDSPChannel* allocForce(u8, Callback, void*);
	void setPriority(u8);
	static JASDSPChannel* getLowestChannel(int);
	void updateProc();
	static void updateAll();
	static bool killActiveChannel();
	static JASDSPChannel* getHandle(u32 index);

	// unused/inlined:
	static JASDSPChannel* getLowestActiveChannel();
	void getNumUse();
	void getNumFree();
	void getNumBreak();

	s32 _00;
	s16 mPriority;
	u32 mFlags; // some kind of bitflag?
	u32 _0C;
	Callback mCallback;
	void* mCallbackArgs;
	JASDsp::TChannel* mChannel;

	static JASDSPChannel* sDspChannels;
};

u16 DSP_CreateMap2(u32);

// unused/inlined:
void DSP_CreateMap();

#endif
