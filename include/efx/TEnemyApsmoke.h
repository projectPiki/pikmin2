#ifndef _EFX_TENEMYAPSMOKE_H
#define _EFX_TENEMYAPSMOKE_H

#include "efx/TBase.h"
#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyApsmoke : public TBase {
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};

struct TEnemyApsmokeS : public TSimple1 {
	virtual bool create(Arg*); // _08
};

struct TEnemyApsmokeM : public TSimple1 {
	virtual bool create(Arg*); // _08
};

} // namespace efx

#endif
