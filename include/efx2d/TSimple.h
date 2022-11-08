#ifndef _EFX2D_TSIMPLE_H
#define _EFX2D_TSIMPLE_H

#include "efx2d/Arg.h"
#include "efx2d/TBase.h"

struct JPABaseEmitter;

namespace efx2d {
struct TSimple1 : public TBase {
	TSimple1(u16 effectID, JPABaseEmitter* emitter)
	{
		m_effectIDs[0] = effectID;
		m_emitters[0]  = emitter;
	}

	inline TSimple1(u16 effectID)
	{
		m_effectIDs[0] = effectID;
		m_emitters[0]  = nullptr;
	}

	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C (weak)
	virtual void fade();       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = TBase
	u16 m_effectIDs[1];            // _08
	JPABaseEmitter* m_emitters[1]; // _0C
};

struct TSimple2 : public TBase {
	TSimple2(u16 effectID1, u16 effectID2)
	{
		m_effectIDs[0] = effectID1;
		m_effectIDs[1] = effectID2;
		m_emitters[0]  = nullptr;
		m_emitters[1]  = nullptr;
	}

	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C (weak)
	virtual void fade();       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = TBase
	u16 m_effectIDs[2];            // _08
	JPABaseEmitter* m_emitters[2]; // _0C
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

	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C (weak)
	virtual void fade();       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = TBase
	u16 m_effectIDs[3];            // _08
	JPABaseEmitter* m_emitters[3]; // _10
};
} // namespace efx2d

#endif
