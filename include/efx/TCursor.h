#ifndef _EFX_TCURSOR_H
#define _EFX_TCURSOR_H

#include "efx/TOneEmitter.h"

// more could make more dots in effect?
#define WHISTLE_CONTEXT_NUM 16

namespace efx {
struct TCursor : public TBase {
	inline TCursor(u16 ownerID)
	    : mOneEmitter(PID_Cursor_Default)
	{
		init(ownerID, WHISTLE_CONTEXT_NUM);
	}

	virtual bool create(Arg*);                            // _08
	virtual void forceKill() { mOneEmitter.forceKill(); } // _0C (weak)
	virtual void fade() { mOneEmitter.fade(); }           // _10 (weak)

	void init(s32, s32);
	void update(Arg*);
	void calcPos_(Vector3f*, f32, s32);

	inline void initNoCheck(s32 whistleType, s32 contextNum)
	{
		if (contextNum < 0) {
			contextNum = 16;
		}

		mContextNum = contextNum;
		mAngleSpeed = kAngleSpeed;

		// Louie and President whistles are unused in vanilla as whistleType is always 0 for navis
		switch (whistleType) {
		case 0:
			mOneEmitter.mEffectID = PID_Cursor_Olimar;
			break;
		case 1:
			mOneEmitter.mEffectID = PID_Cursor_President;
			break;
		case 2:
			mOneEmitter.mEffectID = PID_Cursor_Louie;
			break;
		case 3:
			mOneEmitter.mEffectID = PID_WhistleFuebug;
			break;
		}
	}

	// _00      = VTBL
	TOneEmitter mOneEmitter;                    // _04
	s32 mContextNum;                            // _38
	Context mContextArray[WHISTLE_CONTEXT_NUM]; // _3C
	Vector3f mPosition;                         // _27C
	f32 mAngleTimer;                            // _288
	f32 mAngleSpeed;                            // _28C

	static f32 kAngleSpeed;
};
} // namespace efx

#endif
