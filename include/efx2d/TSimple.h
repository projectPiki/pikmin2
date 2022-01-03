#ifndef _EFX2D_TSIMPLE_H
#define _EFX2D_TSIMPLE_H

#include "efx2d/Arg.h"
#include "efx2d/TBase.h"

struct JPABaseEmitter;

namespace efx2d {
struct TSimple1 : public TBase {
	TSimple1(ushort effectID, JPABaseEmitter* emitter)
	{
		m_effectIDs[0] = effectID;
		m_emitters[0]  = emitter;
	}

	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	ushort m_effectIDs[1];         // _08
	JPABaseEmitter* m_emitters[1]; // _0C
};

struct TSimple2 : public TBase {
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	ushort m_effectIDs[2];         // _08
	JPABaseEmitter* m_emitters[2]; // _0C
};

struct TSimple3 : public TBase {
	TSimple3(ushort effectID1, ushort effectID2, ushort effectID3)
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
	ushort m_effectIDs[3];         // _08
	JPABaseEmitter* m_emitters[3]; // _10
};
} // namespace efx2d

#endif
