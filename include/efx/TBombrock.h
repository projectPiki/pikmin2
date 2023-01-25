#ifndef _EFX_TBOMBROCK_H
#define _EFX_TBOMBROCK_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TBombrockABCD : public TSimple4 {
	inline TBombrockABCD()
	    : TSimple4(PID_BombrockABCD_1, PID_BombrockABCD_2, PID_BombrockABCD_3, PID_BombrockABCD_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrockEFGH : public TSimple4 {
	inline TBombrockEFGH()
	    : TSimple4(PID_BombrockEFGH_1, PID_BombrockEFGH_2, PID_BombrockEFGH_3, PID_BombrockEFGH_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrock : public TBase {
	inline TBombrock() { }

	virtual bool create(Arg* arg) // _08 (weak)
	{
		bool result = false;
		if ((&mEfxBombABCD)->create(arg) && (&mEfxBombEFGH)->create(arg)) {
			result = true;
		}
		return result;
	}
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00      = VTBL
	TBombrockABCD mEfxBombABCD; // _04
	TBombrockEFGH mEfxBombEFGH; // _20
};

struct TBombrockLight : public TChaseMtxT {
	inline TBombrockLight()
	    : TChaseMtxT(PID_BombrockLight)
	{
	}

	virtual ~TBombrockLight() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};
} // namespace efx

#endif
