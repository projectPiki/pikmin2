#ifndef _EFX_TCALLBACK_STATICCLIPPING_H
#define _EFX_TCALLBACK_STATICCLIPPING_H

#include "JSystem/JPA/JPAEmitter.h"

namespace efx {
struct TCallBack_StaticClipping : public JPAEmitterCallBack {
	virtual ~TCallBack_StaticClipping();        // _00
	virtual void executeAfter(JPABaseEmitter*); // _08
};
} // namespace efx

#endif
