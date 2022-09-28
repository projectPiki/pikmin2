#ifndef _EFX_TENEMYPIYO_H
#define _EFX_TENEMYPIYO_H

#include "efx/TChasePos.h"

namespace efx {
struct TEnemyPiyo : public TChasePos {
	inline TEnemyPiyo()
	    : TChasePos(PID_EnemyPiyo)
	{
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	// 	_0C-_14
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TEnemyPiyo() { } // _48 (weak)
};
} // namespace efx

#endif
