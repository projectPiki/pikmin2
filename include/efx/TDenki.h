#ifndef _EFX_TDENKI_H
#define _EFX_TDENKI_H

#include "efx/TForever.h"

namespace efx {
struct TDenkiHiba : public TForever3 {
	inline TDenkiHiba()
	    : TForever3(PID_DenkiHiba_1, PID_DenkiHiba_2, PID_DenkiHiba_3)
	{
	}

	virtual bool create(Arg*); // _08

	// unused/inlined:
	void setRateLOD(int);

	// _00      = VTBL
	// _00-_34  = TForever3
};

struct TDenkiPole : public TForever2 {
	TDenkiPole()
	    : TForever2(PID_DenkiPole_1, PID_DenkiPole_2)
	{
	}

	~TDenkiPole() { }

	// _00      = VTBL
	// _00-_24  = TForever2
};

struct TDenkipoleSign : public TForever {
	TDenkipoleSign()
	    : TForever(PID_DenkiPoleSign)
	{
	}

	virtual ~TDenkipoleSign() { } // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct TDenkiHibaMgr : public TBase {
	inline TDenkiHibaMgr() { }

	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	bool createHiba(int);
	void setRateLOD(int);

	// unused/inlined:
	void createHiba();

	// _00  = VTBL
	TDenkiHiba mHiba;                 // _04
	TDenkiPole mPoles[2];             // _38
	TDenkipoleSign mPolesigns[2];     // _80
	Vector3f mOwnerPosition;          // _A0
	Vector3f mTargetCreaturePosition; // _AC
};
} // namespace efx

#endif
