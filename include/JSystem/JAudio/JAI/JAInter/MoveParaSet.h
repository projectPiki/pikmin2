#ifndef _JSYSTEM_JAI_JAINTER_MOVEPARASET_H
#define _JSYSTEM_JAI_JAINTER_MOVEPARASET_H

#include "types.h"

namespace JAInter {

/**
 * @size = 0x10
 */
struct MoveParaSet {
	MoveParaSet(f32 v1 = 1.0f)
	{
		_04 = v1;
		_00 = v1;
		_0C = 0;
	}

	int set(f32, u32);
	BOOL move();

	/** @fabricated */
	inline MoveParaSet& operator=(const MoveParaSet& other)
	{
		_04 = other._04;
		_00 = other._00;
		_0C = other._0C;
		return *this;
	}

	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08 - unknown
	u32 _0C; // _0C - unknown
};

/**
 * @size = 0x10
 */
struct MoveParaSetInitHalf : public MoveParaSet {
	MoveParaSetInitHalf()
	    : MoveParaSet(0.5f)
	{
	}
};

/**
 * @size = 0x10
 */
struct MoveParaSetInitZero : public MoveParaSet {
	MoveParaSetInitZero()
	    : MoveParaSet(0.0f)
	{
	}
};

} // namespace JAInter
#endif
