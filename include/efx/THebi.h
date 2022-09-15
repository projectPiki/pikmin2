#ifndef _EFX_THEBI_H
#define _EFX_THEBI_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"
#include "efx/TForever.h"

namespace efx {
struct THebiAphd_base : public TSimple4 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct THebiAphd_appear1 : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_first : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_late : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_dive : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_appear : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_dive : public THebiAphd_base {
	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiDead : public TChaseMtxT4 {
	// _00      = VTBL
	// _00-_54  = TChaseMtxT4
};

struct THebiDeadHane_ver01 : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THebiRot : public TForever {
	virtual ~THebiRot(); // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct THebiWait : public TForever {
	virtual ~THebiWait(); // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

} // namespace efx

#endif
