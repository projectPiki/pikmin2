#ifndef _JSYSTEM_JAS_JASCHANNEL_H
#define _JSYSTEM_JAS_JASCHANNEL_H

#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASGenericMemPool.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JASDSPChannel;

struct JASChannel : public JSULink<JASChannel>,
                    JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap, JASThreadingModel::SingleThreaded> {

	typedef void (*Callback)(u32, JASChannel*, JASDsp::TChannel*, void*);

	enum CallbackType {
		CB_PLAY  = 0,
		CB_START = 1,
		CB_STOP  = 2,
		CB_TIMER = 3,
	};

	enum Status {
		STATUS_INACTIVE = 0,
		STATUS_ACTIVE   = 1,
		STATUS_RELEASE  = 2,
	};

	enum CalcType {
		// NB: haven't seen others used, add from calc_sw_table in JASChannel.cpp if needed
		CALC_None           = 0,
		CALC_AddChannelOnly = 1,
		CALC_AddAll         = 13,
		CALC_WeightAll      = 26,
	};

	struct EffectOscParam {
		EffectOscParam()
		    : mVolume(1.0f)
		    , mPitch(1.0f)
		    , mPan(0.5f)
		    , mFxMix(0.0f)
		    , mDolby(0.0f)
		{
		}

		f32 mVolume; // _00
		f32 mPitch;  // _04
		f32 mPan;    // _08
		f32 mFxMix;  // _0C
		f32 mDolby;  // _10
	};

	struct PanVector {
		f32 mSound;   // _00, param from JASInstParam
		f32 mEffect;  // _04, param from EffectOscParam
		f32 mChannel; // _08, param from JASChannelUpdater
	};

	union MixConfig {
		u16 mWhole;
		struct {
			u8 u;
			u8 l0 : 4;
			u8 l1 : 4;
		} mParts;
	};

	JASChannel(Callback callback, void* cbData);

	virtual ~JASChannel(); // _14 (weak)

	void setOscInit(int index, const JASOscillator::Data* data);
	void setMixConfig(int index, u16 mixConfig);
	void directReleaseOsc(u16 release);
	void copyOsc(int index, JASOscillator::Data* data);
	void overwriteOsc(int index, JASOscillator::Data* data);
	void setKeySweepTarget(u8, u32);
	void setPauseFlag(bool doPause);
	void setPanPower(f32 sound, f32 effect, f32 channel);
	BOOL play();
	BOOL playForce();
	void release(u16 release);
	void updateEffectorParam(JASDsp::TChannel* dspChan, u16* mixerVol, const EffectOscParam& oscParam);
	void initialUpdateDSPChannel(JASDsp::TChannel* dspChan);
	s32 updateDSPChannel(JASDsp::TChannel* dspChan);
	void updateAutoMixer(JASDsp::TChannel* dspChan, f32, f32, f32, f32);
	void updateMixer(f32, f32, f32, f32, u16* mixerVol);
	void sweepProc();
	void free();

	static s32 dspUpdateCallback(u32, JASDsp::TChannel* dspChan, void* tmpChan);
	static f32 calcEffect(const PanVector* params, const PanVector* power, u8);
	static f32 calcPan(const PanVector* params, const PanVector* power, u8);

	// unused/inlined:
	void effectOsc(int, JASChannel::EffectOscParam*);

	static const u8 calc_sw_table[27][3];

	// vtable 1: _10
	// vtable 2: _14
	int mStatus;                   // _18
	bool mPauseFlag;               // _1C
	JASDSPChannel* mDspChannel;    // _20
	Callback mCallback;            // _24
	void* mCallbackData;           // _28
	u32 mUpdateTimer;              // _2C
	JASOscillator mOscillators[4]; // _30
	MixConfig mMixConfigs[6];      // _B0
	u16 mPriority;                 // _BC
	f32 mTargetPitch;              // _C0
	u32 mSweepSteps;               // _C4
	u32 _C8;                       // _C8
	f32 mPanSound;                 // _CC
	f32 mPanChannel;               // _D0
	f32 mFxMixSound;               // _D4
	f32 mFxMixChannel;             // _D8
	f32 mDolbySound;               // _DC
	f32 mDolbyChannel;             // _E0
	u8 mWaveFormat;                // _E4
	const JASWaveInfo* mWaveInfo;  // _E8
	void* mWaveData;               // _EC
	f32 mActivePitch;              // _F0
	f32 mVolume;                   // _F4
	f32 mModifiedPitch;            // _F8
	f32 _FC;                       // _FC, related to volume
	f32 mVolumeChannel;            // _100, related to volume
	f32 mPitchChannel;             // _104, related to pitch
	u8 mPanCalcType;               // _108
	u8 mFxMixCalcType;             // _109
	u8 mDolbyCalcType;             // _10A
	PanVector mPanPower;           // _10C
};

/**
 * @size = 0x4D
 */
struct JASChannelUpdater {
	JASChannelUpdater();

	void init();
	void initialUpdateChannel(JASChannel*, JASDsp::TChannel*);
	void updateChannel(JASChannel*, JASDsp::TChannel*);

	f32 mVolume;              // _00
	f32 mPitch;               // _04
	f32 mPan;                 // _08
	f32 mFxMix;               // _0C
	f32 mDolby;               // _10
	s16 mFIR8FilterParams[8]; // _14
	s16 mIIRFilterParams[4];  // _24
	u8 _2C[8];                // _2C - unknown
	s16 _34;                  // _34 - unknown
	u16 mMixConfigs[6];       // _36
	u8 mDelaySamples[6];      // _42 - unknown
	u8 mDelayMax;             // _48
	u8 mFilterMode;           // _49
	u8 mPanCalcType;          // _4A
	u8 mFxMixCalcType;        // _4B
	u8 mDolbyCalcType;        // _4C
};

#endif
