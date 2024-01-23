#ifndef _JSYSTEM_JAS_JASINST_H
#define _JSYSTEM_JAS_JASINST_H

#include "types.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"

struct JASInstEffect {
	JASInstEffect()
	    : mTarget(0)
	{
	}

	virtual f32 getY(int, int) const = 0; // _08
	// virtual void _0C(); 					// _0C - maybe.

	void setTarget(int);

	u8 mTarget; // _04
};

/**
 * @size{0x10}
 */
struct JASInstRand : public JASInstEffect {
	JASInstRand()
	    : mFloor(1.0f)
	    , mCeiling(0.0f)
	{
	}

	virtual f32 getY(int, int) const; // _08

	f32 mFloor;   // _08
	f32 mCeiling; // _0C
};

/**
 * @size{0x10}
 */
struct JASInstSense : public JASInstEffect {
	JASInstSense()
	    : mRegister(0)
	    , mKey(60)
	    , mFloor(1.0f)
	    , mCeiling(1.0f)
	{
	}

	virtual f32 getY(int, int) const; // _08

	void setParams(int, int, f32, f32);

	u8 mRegister; // _08
	u8 mKey;      // _09
	f32 mFloor;   // _0C
	f32 mCeiling; // _10
};

/**
 * @size = 0x28
 */
struct JASInstParam {
	inline JASInstParam()
	    : mWaveFormat(0)
	    , mWaveID(0)
	    , mOscData(nullptr)
	    , mOscCount(0)
	    , mVolume(1.0f)
	    , mPitch(1.0f)
	    , mPanning(0.5f)
	    , _1C(0.0f)
	    , _20(0.0f)
	    , mIsPercussion(false)
	    , _26(0)
	{
	}

	u8 mWaveFormat;                 // _00
	u32 mWaveID;                    // _04
	JASOscillator::Data** mOscData; // _08
	u32 mOscCount;                  // _0C
	f32 mVolume;                    // _10
	f32 mPitch;                     // _14
	f32 mPanning;                   // _18
	f32 _1C;                        // _1C
	f32 _20;                        // _20
	bool mIsPercussion;             // _24
	u8 _25;                         // _25
	u16 _26;                        // _26
};

/**
 * @size{0x4}
 */
struct JASInst {
	/**
	 * @fabricated
	 * @size{0x10}
	 */
	struct TVeloRegion {
		s32 mVelocity; // _00
		u32 mWaveID;   // _04
		f32 mVolume;   // _08
		f32 mPitch;    // _0C
	};

	/**
	 * @reifiedAddress{800998CC}
	 * @reifiedFile{JSystem/JAS/JASBasicInst.cpp}
	 */
	virtual ~JASInst() {};                                    // _08 (weak)
	virtual bool getParam(int, int, JASInstParam*) const = 0; // _0C
	virtual u32 getType() const                          = 0; // _10
};

struct JASBasicInst : public JASInst {
	struct TKeymap {
		TKeymap();
		~TKeymap();

		void setVeloRegionCount(u32);
		TVeloRegion* getVeloRegion(int);
		TVeloRegion* getVeloRegion(int) const;

		int mBaseKey;              // _00
		u32 mVeloRegionCount;      // _04 - velo region count?
		TVeloRegion* mVeloRegions; // _08 - velo region pointer?
	};

	JASBasicInst();

	virtual ~JASBasicInst();                              // _08
	virtual bool getParam(int, int, JASInstParam*) const; // _0C
	/**
	 * @reifiedAddress{80099E54}
	 * @reifiedFile{JSystem/JAS/JASBasicInst.cpp}
	 */
	virtual u32 getType() const { return 'BSIC'; } // _10 (weak)
	virtual int getKeymapIndex(int) const;         // _14

	void setKeyRegionCount(u32);
	void setEffectCount(u32);
	void setEffect(int, JASInstEffect*);
	void setOscCount(u32);
	void setOsc(int, JASOscillator::Data*);
	TKeymap* getKeyRegion(int);

	// unused/inlined:
	void searchKeymap(int) const;
	JASInstEffect* getEffect(int);
	JASOscillator::Data* getOsc(int);
	TKeymap* getKeyRegion(int) const;

	// _00 = VTABLE
	f32 mPitch;                     // _04
	f32 mVolume;                    // _08
	JASInstEffect** mEffects;       // _0C
	u32 mEffectCount;               // _10
	JASOscillator::Data** mOscData; // _14
	u32 mOscCount;                  // _18
	u32 mKeymapCount;               // _1C
	TKeymap* mKeymap;               // _20
};

#endif
