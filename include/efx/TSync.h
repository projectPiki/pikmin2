#ifndef _EFX_TSYNC_H
#define _EFX_TSYNC_H

#include "efx/EffectID.h"
#include "efx/TBase.h"
#include "JSystem/JPA/JPAEmitter.h"

namespace efx {
struct TSync : public TBase, public JPAEmitterCallBack {
	inline TSync()
	    : TBase()
	    , m_emitter(nullptr)
	    , m_effectID(EID_Sync)
	    , m_flags(0)
	{
	}
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void execute(JPABaseEmitter*);                       // _14 (thunk at _04)
	virtual void executeAfter(JPABaseEmitter*);                  // _18 (thunk at _08)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*) = 0; // _1C
	virtual void doExecuteAfter(JPABaseEmitter*);                // _20
	virtual void startDemoDrawOff();                             // _24
	virtual void endDemoDrawOn();                                // _28
	virtual ~TSync();                                            // _2C (thunk at _00)

	JPABaseEmitter* m_emitter;
	u16 m_effectID;
	u8 m_flags;
};
} // namespace efx

#endif
