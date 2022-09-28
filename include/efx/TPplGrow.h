#ifndef _EFX_TPPLGROW_H
#define _EFX_TPPLGROW_H

#include "efx/TBase.h"
#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TPplGrow1 : public TSimple2 {
	inline TPplGrow1()
	    : TSimple2(PID_PplGrow1_1, PID_PplGrow1_2)
	{
	}

	// _00  = VTABLE
};

struct TPplGrow2 : public TSimple3 {
	inline TPplGrow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_PplGrow2_3)
	{
	}

	// _00  = VTABLE
};

struct TPpl5Grow2 : public TSimple3 {
	inline TPpl5Grow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_Ppl5Grow2)
	{
	}

	// _00  = VTABLE
};

struct TPpl10Grow2 : public TSimple3 {
	inline TPpl10Grow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_Ppl10Grow2)
	{
	}

	// _00  = VTABLE
};

struct TPpl20Grow2 : public TSimple3 {
	inline TPpl20Grow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_Ppl20Grow2)
	{
	}

	// _00  = VTABLE
};

} // namespace efx

#endif
