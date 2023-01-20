#ifndef _EFX_TFROG_H
#define _EFX_TFROG_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"

namespace efx {
struct TFrogDive : public TSimple4 {
	inline TFrogDive()
	    : TSimple4(PID_FrogDive_1, PID_FrogDive_2, PID_FrogDive_3, PID_FrogDive_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TFrogLanddrop : public TSimple2 {
	inline TFrogLanddrop()
	    : TSimple2(PID_FrogLandDrop_1, PID_FrogLandDrop_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TFrogPota : public TChasePos {
	inline TFrogPota()
	    : TChasePos(PID_FrogPota)
	{
	}

	virtual ~TFrogPota() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif
