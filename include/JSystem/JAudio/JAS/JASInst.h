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
	    : JASInstEffect()
	    , _08(1.0f)
	    , _0C(0.0f)
	{
	}

	virtual f32 getY(int, int) const; // _08
	// virtual void _0C(); 					// _0C - maybe.

	f32 _08;
	f32 _0C;
};

/**
 * @size{0x10}
 */
struct JASInstSense : public JASInstEffect {
	JASInstSense()
	    : JASInstEffect()
	    , _08(0)
	    , _09(60)
	    , _0C(1.0f)
	    , _10(1.0f)
	{
	}

	virtual f32 getY(int, int) const; // _08
	// virtual void _0C(); 					// _0C - maybe.

	void setParams(int, int, f32, f32);

	u8 _08;  // _08
	u8 _09;  // _09
	f32 _0C; // _0C
	f32 _10; // _10
};

/**
 * @size = 0x28
 */
struct JASInstParam {
	inline JASInstParam()
	    : _00(0)
	    , _04(0)
	    , mOscData(nullptr)
	    , mOscCount(0)
	    , _10(1.0f)
	    , _14(1.0f)
	    , _18(0.5f)
	    , _1C(0.0f)
	    , _20(0.0f)
	    , _24(0)
	    , _26(0)
	{
	}

	u8 _00;                         // _00
	u32 _04;                        // _04
	JASOscillator::Data** mOscData; // _08
	u32 mOscCount;                  // _0C - possibly oscillator count?
	f32 _10;                        // _10
	f32 _14;                        // _14
	f32 _18;                        // _18
	f32 _1C;                        // _1C
	f32 _20;                        // _20
	u8 _24;                         // _24
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
		s32 _00;
		u32 _04;
		f32 _08;
		f32 _0C;
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

		int _00;                   // _00
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
	f32 _04;                        // _04
	f32 _08;                        // _08
	JASInstEffect** mEffects;       // _0C
	u32 mEffectCount;               // _10
	JASOscillator::Data** mOscData; // _14
	u32 mOscCount;                  // _18
	u32 mKeymapCount;               // _1C
	TKeymap* mKeymap;               // _20
};

#endif
