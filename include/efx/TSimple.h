#ifndef _EFX_TSIMPLE_H
#define _EFX_TSIMPLE_H

#include "efx/Arg.h"
#include "efx/TBase.h"

struct JPABaseEmitter;

namespace efx {
struct TSimple1 : public efx::TBase {
	TSimple1(u16 arg1, JPABaseEmitter* arg2)
	    : _04(arg1)
	    , m_emitter(arg2)
	{
	}

	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	u16 _04;
	JPABaseEmitter* m_emitter; // _08
};

struct TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};

struct TSimple3 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};

struct TSimple4 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};

struct TSimple5 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
