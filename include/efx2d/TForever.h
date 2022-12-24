#ifndef _EFX2D_TFOREVER_H
#define _EFX2D_TFOREVER_H

#include "efx2d/TBase.h"
#include "JSystem/JPA/JPAEmitter.h"

namespace JUtility {
struct TColor;
} // namespace JUtility

namespace efx2d {
struct TForever : public TBase, public JPAEmitterCallBack {
	TForever();

	TForever(u16 effectID)
	{
		m_efxID   = effectID;
		m_emitter = nullptr;
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
	// vtable 2 (JPABaseEmitter + self)
	virtual ~TForever() { } // _34 (weak)

	void setGlobalAlpha(u8);
	void setGlobalEnvColor(JUtility::TColor&);
	void setGlobalScale(float);

	// _00		= VTBL
	// _04-_0C	= JPAEmitterCallBack
	u16 m_efxID;               // _0C
	JPABaseEmitter* m_emitter; // _10
};

struct TForeverN : public TBaseIF {
	TForeverN(u8 c);

	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
	virtual void setGroup(u8); // _14

	void setGlobalAlpha(u8);

	// _00 VTBL
	u8 m_length;          // _04
	u8 _05;               // _05
	u8 _06;               // _06
	u8 _07;               // _07
	TForever* m_forevers; // _08
};

struct TForever2 : public TForeverN {
	// _00		= VTBL
	// _00-_0C	= TForeverN
};

struct TForever3 : public TForeverN {
	// _00		= VTBL
	// _00-_0C	= TForeverN
};

struct TForever5 : public TForeverN {
	inline TForever5(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u16 effectID5)
	    : TForeverN(5)
	{
		m_forevers[0].m_efxID = effectID1;
		m_forevers[1].m_efxID = effectID2;
		m_forevers[2].m_efxID = effectID3;
		m_forevers[3].m_efxID = effectID4;
		m_forevers[4].m_efxID = effectID5;
	}

	// _00		= VTBL
	// _00-_0C	= TForeverN
};
} // namespace efx2d

#endif
