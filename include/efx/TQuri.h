#ifndef _EFX_TQURI_H
#define _EFX_TQURI_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TQuriApp : public TChaseMtxT {
	inline TQuriApp()
	    : TChaseMtxT(PID_QuriApp)
	{
	}

	virtual ~TQuriApp() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TQuriDisap : public TChaseMtxT {
	inline TQuriDisap()
	    : TChaseMtxT(PID_QuriDisap)
	{
	}

	virtual ~TQuriDisap() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TQuriGlow : public TChaseMtxT {
	inline TQuriGlow()
	    : TChaseMtxT(PID_QuriGlow)
	{
	}

	virtual ~TQuriGlow() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TQuriHit : public TSimple2 {
	inline TQuriHit()
	    : TSimple2(PID_QuriHit_1, PID_QuriHit_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TQuriHit
};
} // namespace efx

#endif
