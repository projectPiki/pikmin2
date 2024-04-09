#ifndef _JSYSTEM_JAS_JASOSCILLATOR_H
#define _JSYSTEM_JAS_JASOSCILLATOR_H

#include "types.h"

struct JASOscillator {
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
	void initStart(const Data*);
	void incCounter();
	f32 getValue() const;
	bool release();
	f32 calc(const s16*);

	bool isValid() const { return mData != nullptr; }
	bool isStop() const { return _1C == 0; }
	u32 getTarget() { return mData->mTarget; }

	// unused/inlined
	void forceStop();

	const Data* mData; // _00
	f32 _04;           // _04
	f32 _08;           // _08
	f32 _0C;           // _0C
	f32 _10;           // _10
	f32 _14;           // _14
	u16 _18;           // _18
	u16 mRelease;      // _1A
	u8 _1C;            // _1C
	u8 _1D;            // _1D

	static const f32 relTableSampleCell[17];
	static const f32 relTableSqRoot[17];
	static const f32 relTableSquare[17];
	static const s16 oscTableForceStop[6];
};

#endif
