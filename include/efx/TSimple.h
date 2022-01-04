#ifndef _EFX_TSIMPLE_H
#define _EFX_TSIMPLE_H

#include "efx/Arg.h"
#include "efx/TBase.h"

struct JPABaseEmitter;

namespace efx {
struct TSimple1 : public efx::TBase {
	TSimple1(u16 effectID, JPABaseEmitter* emitter)
	{
		m_effectIDs[0] = effectID;
		m_emitters[0]  = emitter;
	}

	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	u16 m_effectIDs[1];            // _04
	JPABaseEmitter* m_emitters[1]; // _08
};

struct TSimple2 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	u16 m_effectIDs[2];            // _04
	JPABaseEmitter* m_emitters[2]; // _08
};

struct TSimple3 : public TBase {
	TSimple3(u16 effectID1, u16 effectID2, u16 effectID3)
	{
		m_effectIDs[0] = effectID1;
		m_effectIDs[1] = effectID2;
		m_effectIDs[2] = effectID3;
		m_emitters[0]  = nullptr;
		m_emitters[1]  = nullptr;
		m_emitters[2]  = nullptr;
	}

	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	u16 m_effectIDs[3];            // _04
	JPABaseEmitter* m_emitters[3]; // _0C
};

struct TSimple4 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	u16 m_effectIDs[4];            // _04
	JPABaseEmitter* m_emitters[4]; // _0C
};

struct TSimple5 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
	u16 m_effectIDs[5];            // _04
	JPABaseEmitter* m_emitters[5]; // _10
};
} // namespace efx

#endif
