#ifndef _EFX_TOTAKARA_H
#define _EFX_TOTAKARA_H

#include "efx/TSimple.h"

namespace efx {
struct TOtakaraApL : public TSimple3 {
	inline TOtakaraApL()
	    : TSimple3(PID_OtakaraApL_1, PID_OtakaraApL_2, PID_OtakaraApL_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TOtakaraApS : public TSimple2 {
	inline TOtakaraApS()
	    : TSimple2(PID_OtakaraApS_1, PID_OtakaraApS_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TOtakaraAp : public TBase {
	TOtakaraAp()
	    : TBase()
	{
	}
	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00 VTBL
};

struct TOtakaraDive : public TSimple3 {
	inline TOtakaraDive()
	    : TSimple3(PID_OtakaraDive_1, PID_OtakaraDive_2, PID_OtakaraDive_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_18 = TSimple3
};

} // namespace efx

#endif
