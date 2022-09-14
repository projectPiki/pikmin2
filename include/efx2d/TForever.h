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

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
	// vtable 2 (JPABaseEmitter + self)
	virtual ~TForever() { } // _34 (weak)

	void setGlobalAlpha(u8);
	void setGlobalEnvColor(JUtility::TColor&);
	void setGlobalScale(float);

	u16 _0C;                   // _0C
	JPABaseEmitter* m_emitter; // _10
};

struct TForeverN : public TBaseIF {
	TForeverN(u8);

	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
	virtual void setGroup(u8); // _14

	void setGlobalAlpha(u8);

	u8 m_length;          // _04
	u8 _05;               // _05
	u8 _06;               // _06
	u8 _07;               // _07
	TForever* m_forevers; // _08
};
} // namespace efx2d

#endif
