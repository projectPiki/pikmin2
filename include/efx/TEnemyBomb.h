#ifndef _EFX_TENEMYBOMB_H
#define _EFX_TENEMYBOMB_H

#include "efx/TBase.h"
#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyBomb : public TBase {
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)

	// _00  = VTABLE
};

struct TEnemyBombS : public TSimple4 {
	virtual bool create(Arg*); // _08
};

struct TEnemyBombM : public TSimple4 {
	virtual bool create(Arg*); // _08
};

} // namespace efx

#endif
