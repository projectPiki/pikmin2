#ifndef _JSYSTEM_JAS_JASOSCILLATOR_H
#define _JSYSTEM_JAS_JASOSCILLATOR_H

#include "types.h"

struct JASOscillator {
	enum State {
		STATE_Stop      = 0,
		STATE_Start     = 1,
		STATE_Hold      = 2,
		STATE_Release   = 3,
		STATE_ForceStop = 4,
		STATE_Unk5      = 5,
	};

	enum EnvelopeMode {
		ENVMODE_Linear     = 0,
		ENVMODE_Square     = 1,
		ENVMODE_SqRoot     = 2,
		ENVMODE_SampleCell = 3,
		ENVMODE_Loop       = 13,
		ENVMODE_Hold       = 14,
		ENVMODE_Stop       = 15,
	};

	enum Target {
		TARGET_Volume = 0,
		TARGET_Pitch  = 1,
		TARGET_Pan    = 2,
		TARGET_FxMix  = 3,
		TARGET_Dolby  = 4,
	};

	struct Data {
		u32 mTarget;         // _00
		f32 mRate;           // _04
		s16* mAttack;        // _08
		const s16* mRelease; // _0C
		f32 mWidth;          // _10
		f32 mVertex;         // _14
	};

	JASOscillator();

	void init();
	void initStart(const Data* oscData);
	void incCounter();
	f32 getValue() const;
	bool release();
	f32 calc(const s16* envelopes);

	bool isValid() const { return mData != nullptr; }
	bool isStop() const { return mState == STATE_Stop; }
	u32 getTarget() { return mData->mTarget; }

	// unused/inlined
	void forceStop();

	static const f32 relTableSampleCell[17];
	static const f32 relTableSqRoot[17];
	static const f32 relTableSquare[17];
	static const s16 oscTableForceStop[6];

	const Data* mData;       // _00
	f32 mReleaseRate;        // _04
	f32 mPhase;              // _08
	f32 mTargetPhase;        // _0C
	f32 mPhaseChangeRate;    // _10
	f32 mInitialReleaseRate; // _14
	u16 mCurrEnvelopeID;     // _18
	u16 mRelease;            // _1A
	u8 mState;               // _1C
	u8 mEnvelopeMode;        // _1D
};

#endif
