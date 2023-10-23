#ifndef _EFX_TCALLBACK_STATICCLIPPING_H
#define _EFX_TCALLBACK_STATICCLIPPING_H

#include "JSystem/JParticle/JPAEmitter.h"

namespace efx {
struct TCallBack_StaticClipping : public JPAEmitterCallBack {
	virtual ~TCallBack_StaticClipping() { }     // _08 (weak)
	virtual void executeAfter(JPABaseEmitter*); // _10
};
} // namespace efx

#endif
