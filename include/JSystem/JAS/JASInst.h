#ifndef _JSYSTEM_JAS_JASINST_H
#define _JSYSTEM_JAS_JASINST_H

#include "types.h"
#include "JSystem/JAS/JASOscillator.h"

struct JASInstEffect {
	JASInstEffect()
	    : m_target(0)
	{
	}

	virtual float getY(int, int) const = 0; // _08
	// virtual void _0C(); 					// _0C - maybe.

	void setTarget(int);

	u8 m_target; // _04
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

	virtual float getY(int, int) const; // _08
	// virtual void _0C(); 					// _0C - maybe.

	float _08;
	float _0C;
};

/**
 * @size{0x10}
 */
struct JASInstSense : public JASInstEffect {
	JASInstSense()
	    : JASInstEffect()
	    , _08(1.0f)
	    , _0C(0.0f)
	{
	}

	virtual float getY(int, int) const; // _08
	// virtual void _0C(); 					// _0C - maybe.

	void setParams(int, int, float, float);

	u8 _08;    // _08
	u8 _09;    // _09
	float _0C; // _0C
	float _10; // _10
};

/**
 * @size = 0x28
 */
struct JASInstParam {
	inline JASInstParam()
	    : _00(0)
	    , _04(0)
	    , m_oscData(nullptr)
	    , m_oscCount(0)
	    , _10(1.0f)
	    , _14(1.0f)
	    , _18(0.5f)
	    , _1C(0.0f)
	    , _20(0.0f)
	    , _24(0)
	    , _26(0)
	{
	}

	u8 _00;                          // _00
	u32 _04;                         // _04
	JASOscillator::Data** m_oscData; // _08
	int m_oscCount;                  // _0C - possibly oscillator count?
	float _10;                       // _10
	float _14;                       // _14
	float _18;                       // _18
	float _1C;                       // _1C
	float _20;                       // _20
	u8 _24;                          // _24
	u8 _25;                          // _25
	short _26;                       // _26
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
	virtual int getKeymapIndex(int) const                = 0; // _14
};

struct JASBasicInst : public JASInst {
	struct TKeymap {
		TKeymap();
		~TKeymap();

		void setVeloRegionCount(u32);
		TVeloRegion* getVeloRegion(int);
		TVeloRegion* getVeloRegion(int) const;

		int _00;                    // _00
		u32 m_veloRegionCount;      // _04 - velo region count?
		TVeloRegion* m_veloRegions; // _08 - velo region pointer?
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
	float _04;                       // _04
	float _08;                       // _08
	JASInstEffect** m_effects;       // _0C
	u32 m_effectCount;               // _10
	JASOscillator::Data** m_oscData; // _14
	u32 m_oscCount;                  // _18
	u32 m_keymapCount;               // _1C
	TKeymap* m_keymap;               // _20
};

#endif
