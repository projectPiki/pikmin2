#ifndef _EBI_TYESNOCURSOR_H
#define _EBI_TYESNOCURSOR_H

#include "efx2d/T2DCursor.h"
#include "ebi/E2DGraph.h"
#include "System.h"

struct J2DPane;

namespace ebi {
struct TYesNoCursor {
	TYesNoCursor()
	    : mCursor(&mPos)
	    , mSpeed(5.0f * sys->mDeltaTime)
	    , mTimer(0.0f)
	{
		mPane1 = nullptr;
		mPane2 = nullptr;
	}

	void update()
	{
		if (mPane1 && mPane2) {
			Vector2f pos1 = E2DPane_getGlbCenter(mPane1);
			Vector2f pos2 = E2DPane_getGlbCenter(mPane2);

			if (mIsLeft) {
				mTimer += mSpeed;
				if (mTimer > 1.0f) {
					mTimer = 1.0f;
				}
			} else {
				mTimer -= mSpeed;
				if (mTimer < 0.0f) {
					mTimer = 0.0f;
				}
			}
			mPos = interpolatePos(pos1, pos2, mTimer);
		}
		FORCE_DONT_INLINE;
	}

	inline void setPanes(J2DPane* pane1, J2DPane* pane2)
	{
		mPane1 = pane1;
		mPane2 = pane2;
	}

	inline void start()
	{
		mTimer  = 1.0f;
		mIsLeft = true;
	}

	inline void stop()
	{
		mTimer  = 0.0f;
		mIsLeft = false;
	}

	// This might belong somewhere else since its not really TYesNoCursor specific
	Vector2f interpolatePos(Vector2f pos1, Vector2f pos2, f32 time) { return (pos1 * time) + (pos2 * (1.0f - time)); }

	efx2d::T2DCursor mCursor; // _00
	Vector2f mPos;            // _1C
	f32 mSpeed;               // _24
	f32 mTimer;               // _28
	bool mIsLeft;             // _2C (true when left option is selected, false when right side is selected)
	J2DPane* mPane1;          // _30
	J2DPane* mPane2;          // _34
};
} // namespace ebi

#endif
