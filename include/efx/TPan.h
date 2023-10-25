#ifndef _EFX_TPAN_H
#define _EFX_TPAN_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TForever.h"

namespace efx {
struct TPanApp : public TSimple1 {
	inline TPanApp()
	    : TSimple1(PID_PanApp)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPanHide : public TForever {
	inline TPanHide()
	    : TForever(PID_PanHide)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TPanHide() { }    // _48 (weak)

	// _00     = VTBL
	// _00-_10 = TForever
};

struct TPanSmoke : public TChasePos {
	inline TPanSmoke(Vector3f* pos)
	    : TChasePos(pos, PID_PanSmoke)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TPanSmoke() { }   // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};
} // namespace efx

#endif
