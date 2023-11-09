#ifndef _JSYSTEM_JAS_JASDSP_H
#define _JSYSTEM_JAS_JASDSP_H

#include "types.h"

struct JASWaveInfo;

namespace JASDsp {
// typedef s16 Fxline[0x10];
/** @fabricated */
struct Fxline {
	u16 _00;    // _00
	u16 _02;    // _02
	s16* _04;   // _04
	u16 _08;    // _08
	u16 _0A;    // _0A
	u16 _0C;    // _0C
	u16 _0E;    // _0E
	u16 _10[8]; // _10

	// u16 _12;  // _12
	// u16 _14;  // _14
	// u16 _16;  // _16
	// u16 _18;  // _18
	// u16 _1A;  // _1A
	// u16 _1C;  // _1C
	// u16 _1E;  // _1E
};
struct TChannel {
	/**
	 * @fabricated
	 * probably mixer
	 */
	struct TChannel_0x10 {
		u16 _00;
		s16 _02;
		u16 _04;
		u16 _06;
	};

	void init();
	void playStart();
	void playStop();
	void replyFinishRequest();
	void forceStop();
	bool isFinish() const;
	void setWaveInfo(const JASWaveInfo&, u32, u32);
	void setOscInfo(u32);
	void initAutoMixer();
	void setAutoMixer(u16, u8, u8, u8, u8);
	void setPitch(u16);
	void setMixerInitDelayMax(u8);
	void setMixerInitVolume(u8, s16);
	void setMixerInitDelaySamples(u8, u8);
	void setMixerDelaySamples(u8, u8);
	void setMixerVolume(u8, s16);
	void setPauseFlag(u8);
	void flush();
	void initFilter();
	void setFilterMode(u16);
	void setIIRFilterParam(s16*);
	void setFIR8FilterParam(s16*);
	void setDistFilter(s16);
	void setBusConnect(u8, u8);

	// unused/inlined:
	bool isActive() const;
	u16 getBlockCounter() const;
	u16 getRemainSamples() const;
	void updateAMVolume(u16);
	void updateAMPan(u8, u8);
	void updateAMFX(u8);

	u16 _00;    // _00
	u16 _02;    // _02
	s16 mPitch; // _04
	u32 : 0;
	u16 _08;                // _08
	u16 _0A;                // _0A
	u16 mPauseFlag;         // _0C
	u16 mMixerInitDelayMax; // _0E
	TChannel_0x10 _10[4];   // _10 (unknown length)
	u8 _30[0x20];           // _30
	u16 _50;                // _50
	u16 _52;                // _52
	u16 _54;                // _54
	u16 _56;                // _56
	u16 _58;                // _58
	u32 : 0;
	u8 _5C[4];               // _5C
	u16 _60;                 // _60
	u16 _62;                 // _62
	u16 _64;                 // _64
	u16 _66;                 // _66
	u32 _68;                 // _68
	u8 _6C[0xC];             // _6C
	u16 _78[4];              // _78
	u16 _80[0x14];           // _80
	u16 _A8[4];              // _A8
	u16 _B0[0x10];           // _B0
	u8 _D0[0x30];            // _D0
	u16 _100;                // _100
	u16 _102;                // _102
	s16 _104;                // _104
	s16 _106;                // _106
	u16 mFilterMode;         // _108
	u16 _10A;                // _10A
	u32 _10C;                // _10C
	u32 _110;                // _110
	u32 _114;                // _114
	u32 _118;                // _118
	u32 _11C;                // _11C
	s16 mFir8FilterParam[8]; // _120
	u8 _130[0x18];           // _130
	s16 mIirFilterParam[4];  // _148
	short mDistFilter;       // _150
};

struct FxlineConfig_ {
	u8 _00;     // _00
	s16 _02;    // _02
	s16 _04;    // _04
	s16 _06;    // _06
	s16 _08;    // _08
	s16 _0A;    // _0A
	u32 _0C;    // _0C
	s16 _10[8]; // _10

	// s16 _12; // _12
	// s16 _14; // _14
	// s16 _16; // _16
	// s16 _18; // _18
	// s16 _1A; // _1A
	// s16 _1C; // _1C
	// s16 _1E; // _1E
};

void boot(void (*)(void*));
void releaseHalt(u32);
void finishWork(u16);
void syncFrame(u32, u32, u32);
void setDSPMixerLevel(f32);
f32 getDSPMixerLevel();
TChannel* getDSPHandle(int index);
void invalChannelAll();
void initBuffer();
bool setFXLine(u8, short*, JASDsp::FxlineConfig_*);

// unused/inlined:
void getDSPHandleNc(int);
void setFilterTable(short*, short*, u32);
void flushBuffer();
void flushChannelAll();
void cacheChannelAll();
Fxline& getFXHandle(u8);
void getFXHandleNc(u8);
void changeFXLineParam(u8, u8, u32);

extern u8* CH_BUF;
extern Fxline* FX_BUF;
extern f32 sDSPVolume;
extern const s16 SEND_TABLE[12];
extern const u16 DSPADPCM_FILTER[32];
extern const u16 DSPRES_FILTER[640];

} // namespace JASDsp

struct JASDSPChannel {
	typedef long (*Callback)(u32, JASDsp::TChannel*, void*);
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
	s16 _04;
	u32 _08;
	u32 _0C;
	Callback _10;
	void* _14;
	JASDsp::TChannel* _18;

	static JASDSPChannel* sDspChannels;
};

u16 DSP_CreateMap2(u32);

// unused/inlined:
void DSP_CreateMap();

#endif
