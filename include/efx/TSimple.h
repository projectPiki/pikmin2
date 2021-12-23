#ifndef _EFX_TSIMPLE_H
#define _EFX_TSIMPLE_H

#include "efx/Arg.h"
#include "efx/TBase.h"

struct JPABaseEmitter;

namespace efx {
struct TSimple1 : public efx::TBase {
	TSimple1(ushort effectID, JPABaseEmitter* emitter)
	{
		m_effectIDs[0] = effectID;
		m_emitters[0]  = emitter;
	}

	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	ushort m_effectIDs[1];         // _04
	JPABaseEmitter* m_emitters[1]; // _08
};

struct TSimple2 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	ushort m_effectIDs[2];         // _04
	JPABaseEmitter* m_emitters[2]; // _08
};

struct TSimple3 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	ushort m_effectIDs[3];         // _04
	JPABaseEmitter* m_emitters[3]; // _0C
};

struct TSimple4 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	ushort m_effectIDs[4];         // _04
	JPABaseEmitter* m_emitters[4]; // _0C
};

struct TSimple5 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	ushort m_effectIDs[5];         // _04
	JPABaseEmitter* m_emitters[5]; // _10
};
} // namespace efx

#endif
