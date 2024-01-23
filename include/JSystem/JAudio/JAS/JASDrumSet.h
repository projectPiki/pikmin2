#ifndef _JSYSTEM_JAS_JASDRUMSET_H
#define _JSYSTEM_JAS_JASDRUMSET_H

#include "JSystem/JAudio/JAS/JASInst.h"
#include "types.h"

struct JASDrumSet : public JASInst {
	/**
	 * @size{0x20}
	 */
	struct TPerc {
		TPerc();
		~TPerc();
		void setEffectCount(u32 count);
		void setVeloRegionCount(u32 count);
		TVeloRegion* getVeloRegion(int index);
		void setEffect(int index, JASInstEffect* effect);
		void setRelease(u32 release);

		// unused/inlined:
		const TVeloRegion* getVeloRegion(int index) const { return mVeloRegions + index; }
		JASInstEffect* getEffect(int index) { return mEffects[index]; }

		f32 mPitch;                // _00
		f32 mVolume;               // _04
		f32 mPanning;              // _08
		u16 mRelease;              // _0C
		JASInstEffect** mEffects;  // _10
		u32 mEffectCount;          // _14
		u32 mVeloRegionCount;      // _18
		TVeloRegion* mVeloRegions; // _1C
	};

	/**
	 * @reifiedAddress{8009B450}
	 * @reifiedFile{JSystem/JAS/JASDrumSet.cpp}
	 */
	virtual ~JASDrumSet() {};                             // _08 (weak)
	virtual bool getParam(int, int, JASInstParam*) const; // _0C
	/**
	 * @reifiedAddress{8009B4D4}
	 * @reifiedFile{JSystem/JAS/JASDrumSet.cpp}
	 */
	virtual u32 getType() const { return 'PERC'; } // _10 (weak)

	TPerc* getPerc(int index);

	// unused/inlined:
	const TPerc* getPerc(int index) const { return mPercs + index; }

	TPerc mPercs[0x80]; // _04
};

#endif
