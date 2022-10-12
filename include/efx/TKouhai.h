#ifndef _EFX_TKOUHAI_H
#define _EFX_TKOUHAI_H

#include "efx/TSimple.h"
#include "efx/TForever.h"

namespace efx {
struct TKouhai1 : public TForever2 {
	inline TKouhai1()
	    : TForever2(PID_Kouhai1_1, PID_Kouhai1_2)
	{
	}

	// _00     = VTBL
	// _00-_24 = TForever2
};

struct TKouhai2 : public TForever2 {
	inline TKouhai2()
	    : TForever2(PID_Kouhai2_1, PID_Kouhai2_2)
	{
	}

	// _00     = VTBL
	// _00-_24 = TForever2
};

struct TKouhai3 : public TForever2 {
	inline TKouhai3()
	    : TForever2(PID_Kouhai3_1, PID_Kouhai3_2)
	{
	}

	// _00     = VTBL
	// _00-_24 = TForever2
};

struct TKouhaiDamage : public TSimple1 {
	inline TKouhaiDamage()
	    : TSimple1(PID_KouhaiDamage)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TKouhaiFuku : public TSimple2 {
	inline TKouhaiFuku()
	    : TSimple2(PID_KouhaiFuku_1, PID_KouhaiFuku_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};
} // namespace efx

#endif
