#ifndef _EFX2D_TFOREVER_H
#define _EFX2D_TFOREVER_H

#include "efx2d/TBase.h"
#include "JSystem/JPA/JPAEmitter.h"

namespace JUtility {
struct TColor;
} // namespace JUtility

namespace efx2d {
struct TForever : public TBase, public JPAEmitterCallback {
	TForever();

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _00
	virtual void kill();       // _04
	virtual void fade();       // _08
	// vtable 2 (JPABaseEmitter + self)
	virtual ~TForever(); // _14

	void setGlobalAlpha(u8);
	void setGlobalEnvColor(JUtility::TColor&);
	void setGlobalScale(float);

	short _0C;                 // _0C
	JPABaseEmitter* m_emitter; // _10
};

struct TForeverN : public TBase {
	TForeverN(u8);

	virtual bool create(Arg*); // _00
	virtual void kill();       // _04
	virtual void fade();       // _08
	virtual void setGroup(u8); // _0C

	void setGlobalAlpha(u8);
};
} // namespace efx2d

#endif
