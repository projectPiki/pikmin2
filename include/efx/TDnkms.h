#ifndef _EFX_TDNKMS_H
#define _EFX_TDNKMS_H

#include "efx/TSync.h"
#include "efx/TChasePos.h"

namespace efx {
struct TDnkmsHoudenA : public TChasePos {
	virtual ~TDnkmsHoudenA(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDnkmsHoudenB : public TChasePos {
	virtual ~TDnkmsHoudenB(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDnkmsThunderA : public TSync {
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TDnkmsThunderA();                               // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TSync
};

struct TDnkmsThunderB : public TSync {
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TDnkmsThunderB();                               // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TSync
};
} // namespace efx

#endif
