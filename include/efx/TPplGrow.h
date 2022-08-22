#ifndef _EFX_TPPLGROW_H
#define _EFX_TPPLGROW_H

#include "efx/TBase.h"
#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TPplGrow1 : public TSimple2 {
	inline TPplGrow1(u16 effectID1, u16 effectID2)
	    : TSimple2(effectID1, effectID2)
	{
	}

	// _00  = VTABLE
};

struct TPplGrow2 : public TSimple3 {
	inline TPplGrow2(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	// _00  = VTABLE
};

struct TPpl5Grow2 : public TSimple3 {
	inline TPpl5Grow2(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	// _00  = VTABLE
};

struct TPpl10Grow2 : public TSimple3 {
	inline TPpl10Grow2(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	// _00  = VTABLE
};

struct TPpl20Grow2 : public TSimple3 {
	inline TPpl20Grow2(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	// _00  = VTABLE
};

} // namespace efx

#endif
