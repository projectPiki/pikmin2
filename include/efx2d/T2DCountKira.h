#ifndef _EFX2D_T2DCOUNTKIRA_H
#define _EFX2D_T2DCOUNTKIRA_H

#include "types.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct T2DCountKira : public TForever {
	T2DCountKira()
	    : TForever(8)
	{
		mScale = 1.0f;
	}
	virtual bool create(Arg*);  // _08
	virtual ~T2DCountKira() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
	f32 mScale;
};
} // namespace efx2d

#endif
