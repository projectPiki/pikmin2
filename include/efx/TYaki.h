#ifndef _EFX_TYAKI_H
#define _EFX_TYAKI_H

#include "efx/TChaseMtx.h"

namespace efx {
struct TYakiBody : public TChaseMtx4 {
	inline TYakiBody()
	    : TChaseMtx4(nullptr, PID_YakiBody_1, PID_YakiBody_2, PID_YakiBody_3, PID_YakiBody_4)
	{
	}

	void setRateLOD(int);

	// _00     = VTBL
	// _00-_54 = TChaseMtx4
};

struct TYakiDeadsmoke : public TChaseMtxT {
	inline TYakiDeadsmoke()
	    : TChaseMtxT(PID_YakiDeadSmoke)
	{
	}

	virtual ~TYakiDeadsmoke() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TYakiFlick : public TChaseMtx {
	inline TYakiFlick()
	    : TChaseMtx(PID_YakiFlick, nullptr)
	{
	}

	virtual ~TYakiFlick() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TYakiSteam : public TChaseMtx {
	inline TYakiSteam()
	    : TChaseMtx(PID_YakiSteam, nullptr)
	{
	}

	virtual ~TYakiSteam() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};
} // namespace efx

#endif
