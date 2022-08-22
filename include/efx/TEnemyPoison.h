#ifndef _EFX_TENEMYPOISON_H
#define _EFX_TENEMYPOISON_H

#include "efx/TBase.h"
#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyPoisonS : public TSimple1 {
	virtual bool create(Arg*); // _08
};

struct TEnemyPoisonL : public TSimple1 {
	virtual bool create(Arg*); // _08
};

} // namespace efx

#endif
