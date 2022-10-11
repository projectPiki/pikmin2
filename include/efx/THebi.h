#ifndef _EFX_THEBI_H
#define _EFX_THEBI_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"
#include "efx/TForever.h"

namespace efx {
struct THebiAphd_base : public TSimple4 {
	inline THebiAphd_base(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u32 val)
	    : TSimple4(effectID1, effectID2, effectID3, effectID4)
	    , _1C(val) // this is from the THebiAphd_dive ctor
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
	u32 _1C; // _1C, unknown
};

struct THebiAphd_appear1 : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_first : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_late : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_dive : public THebiAphd_base {
	inline THebiAphd_dive()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 30)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_appear : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_dive : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiDead : public TChaseMtxT4 {
	// _00      = VTBL
	// _00-_54  = TChaseMtxT4
};

struct THebiDeadHane_ver01 : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THebiRot : public TForever {
	virtual ~THebiRot(); // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct THebiWait : public TForever {
	virtual ~THebiWait(); // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

} // namespace efx

#endif
