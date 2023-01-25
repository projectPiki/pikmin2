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

	void init(long, long);
	void update(Arg*);
	void calcPos_(Vector3f*, f32, long);

	// _00      = VTBL
	TOneEmitter mOneEmitter;                    // _04
	long mContextNum;                           // _38
	Context mContextArray[WHISTLE_CONTEXT_NUM]; // _3C
	Vector3f mPosition;                         // _27C
	f32 mAngleTimer;                            // _288
	f32 mAngleSpeed;                            // _28C

	static f32 kAngleSpeed;
};
} // namespace efx

#endif
