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

	void setGlobalAlpha(uchar);
	void setGlobalEnvColor(JUtility::TColor&);
	void setGlobalScale(float);

	short _0C;                 // _0C
	JPABaseEmitter* m_emitter; // _10
};

struct TForeverN : public TBase {
	TForeverN(uchar);

	virtual bool create(Arg*);    // _00
	virtual void kill();          // _04
	virtual void fade();          // _08
	virtual void setGroup(uchar); // _0C

	void setGlobalAlpha(uchar);
};
} // namespace efx2d

#endif
