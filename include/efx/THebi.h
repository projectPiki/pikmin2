#ifndef _EFX_THEBI_H
#define _EFX_THEBI_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"
#include "efx/TForever.h"

namespace efx {
struct THebiAphd_base : public TSimple4 {
	inline THebiAphd_base(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u32 duration)
	    : TSimple4(effectID1, effectID2, effectID3, effectID4)
	    , mMaxDuration(duration) // this is from the THebiAphd_dive ctor
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
	u32 mMaxDuration; // _1C
};

struct THebiAphd_appear1 : public THebiAphd_base {
	inline THebiAphd_appear1()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 40)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_first : public THebiAphd_base {
	inline THebiAphd_appear2_first()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 65)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_late : public THebiAphd_base {
	inline THebiAphd_appear2_late()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 35)
	{
	}

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
	inline THebiAphd_kkabuto_appear()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 30)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_dive : public THebiAphd_base {
	inline THebiAphd_kkabuto_dive()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 17)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiDead : public TChaseMtxT4 {
	inline THebiDead()
	    : TChaseMtxT4(nullptr, PID_HebiDead_1, PID_HebiDead_2, PID_HebiDead_3, PID_HebiDead_4)
	{
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtxT4
};

struct THebiDeadHane_ver01 : public TSimple1 {
	inline THebiDeadHane_ver01()
	    : TSimple1(PID_HebiDeadHane)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THebiRot : public TForever {
	inline THebiRot()
	    : TForever(PID_HebiROT)
	{
	}

	virtual ~THebiRot() { } // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct THebiWait : public TForever {
	inline THebiWait()
	    : TForever(PID_HebiWAIT)
	{
	}

	virtual ~THebiWait() { } // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

} // namespace efx

#endif
