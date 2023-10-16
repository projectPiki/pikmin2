#ifndef _EFX_TTUTORIALSNOW_H
#define _EFX_TTUTORIALSNOW_H

#include "efx/TChasePos.h"

namespace efx {
struct TTutorialSnow : public TChasePos {
	inline TTutorialSnow()
	    : TChasePos(PID_TutorialSnow, nullptr)
	{
	}

	virtual ~TTutorialSnow() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif
