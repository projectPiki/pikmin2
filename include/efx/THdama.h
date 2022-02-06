#ifndef _EFX_THDAMA_H
#define _EFX_THDAMA_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct THdamaDeadbomb : public TChaseMtx4 {
};

struct THdamaHit1 : public TSimple5 {
};

struct THdamaHit2 : public TSimple4 {
};

struct THdamaHit2W : public TSimple3 {
	virtual bool create(Arg*); // _00
};
} // namespace efx

#endif
