#ifndef _EFX_TENEMYAPSMOKE_H
#define _EFX_TENEMYAPSMOKE_H

#include "efx/TBase.h"
#include "types.h"

namespace efx {
struct TEnemyApsmoke : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
};

} // namespace efx

#endif
