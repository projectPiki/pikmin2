#ifndef _EFX_TENEMYPIYO_H
#define _EFX_TENEMYPIYO_H

#include "efx/EffectID.h"
#include "efx/TChasePos.h"

namespace efx {
struct TEnemyPiyo : public TChasePos {
	inline TEnemyPiyo()
	    : TChasePos(EID_EnemyPiyo)
	{
	}

	// vtable 1
	virtual bool create(Arg*); // _00
	// vtable 2
	virtual ~TEnemyPiyo(); // _2C
};
} // namespace efx

#endif
