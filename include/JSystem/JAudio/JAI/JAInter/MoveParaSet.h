#ifndef _JSYSTEM_JAI_JAINTER_MOVEPARASET_H
#define _JSYSTEM_JAI_JAINTER_MOVEPARASET_H

#include "types.h"

namespace JAInter {

enum ParaSetResults {
	MOVEPARA_SetCurrent = 0,
	MOVEPARA_SetTarget  = 1,
	MOVEPARA_AlreadySet = 2,
};
/**
 * @size = 0x10
 */
struct MoveParaSet {
	MoveParaSet(f32 value = 1.0f)
	{
		mCurrentValue = value;
		mTargetValue  = value;
		mMoveCounter  = 0;
	}

	int set(f32 value, u32 steps); // set current value by supplying steps = 0; otherwise, sets base value
	BOOL move();                   // if mMoveCounter != 0, moves mCurrentValue closer to mTargetValue by mMoveAmount

	/** @fabricated */
	inline MoveParaSet& operator=(const MoveParaSet& other)
	{
		mCurrentValue = other.mCurrentValue;
		mTargetValue  = other.mTargetValue;
		mMoveCounter  = other.mMoveCounter;
		return *this;
	}

	f32 mTargetValue;  // _00
	f32 mCurrentValue; // _04
	f32 mMoveAmount;   // _08
	u32 mMoveCounter;  // _0C
};

/**
 * @size = 0x10
 */
struct MoveParaSetInitHalf : public MoveParaSet {
	MoveParaSetInitHalf()
	    : MoveParaSet(0.5f)
	{
	}

	MoveParaSetInitHalf(f32 value)
	    : MoveParaSet(value)
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

	MoveParaSetInitZero(f32 value)
	    : MoveParaSet(value)
	{
	}
};

} // namespace JAInter
#endif
