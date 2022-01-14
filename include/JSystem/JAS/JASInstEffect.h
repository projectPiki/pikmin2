#ifndef _JSYSTEM_JAS_JASINSTEFFECT_H
#define _JSYSTEM_JAS_JASINSTEFFECT_H

#include "types.h"

struct JASInstEffect {
	JASInstEffect()
	    : m_target(0)
	{
	}
	virtual float getY(int, int) const = 0; // _00

	// virtual void _04(); // _04

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

	virtual float getY(int, int) const; // _00

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

	virtual float getY(int, int) const; // _00

	void setParams(int, int, float, float);

	u8 _08;    // _08
	u8 _09;    // _09
	float _0C; // _0C
	float _10; // _10
};

#endif
