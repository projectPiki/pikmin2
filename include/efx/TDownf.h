#ifndef _EFX_TDOWNF_H
#define _EFX_TDOWNF_H

#include "efx/TSimpleMtx.h"

namespace efx {
struct TDownf1On : public TSimpleMtx1 {
	inline TDownf1On(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1On)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf1Updown : public TSimpleMtx1 {
	inline TDownf1Updown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1Updown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf1WOn : public TSimpleMtx1 {
	inline TDownf1WOn(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1WOn)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf1WUpdown : public TSimpleMtx1 {
	inline TDownf1WUpdown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1WUpdown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2On : public TSimpleMtx1 {
	inline TDownf2On(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2On)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2Updown : public TSimpleMtx1 {
	inline TDownf2Updown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2Updown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2WOn : public TSimpleMtx1 {
	inline TDownf2WOn(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2WOn)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2WUpdown : public TSimpleMtx1 {
	inline TDownf2WUpdown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2WUpdown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf3Updown : public TSimpleMtx1 {
	inline TDownf3Updown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF3Updown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf3WOn : public TSimpleMtx1 {
	inline TDownf3WOn(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF3WOn)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf3WUpdown : public TSimpleMtx1 {
	inline TDownf3WUpdown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF3WUpdown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx

#endif
