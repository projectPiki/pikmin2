#ifndef _EFX_TSYNC_H
#define _EFX_TSYNC_H

#include "efx/TBase.h"
#include "JSystem/JParticle/JPAEmitter.h"

#define TSYNCFLAG_DemoDrawOff (0x1)

namespace efx {
struct TSync : public TBase, public JPAEmitterCallBack {
	inline TSync()
	    : TBase()
	    , mEmitter(nullptr)
	    , mEffectID(PID_SyncDefault)
	    , mFlags(0)
	{
	}

	inline TSync(u16 effectID)
	    : TBase()
	    , mEmitter(nullptr)
	    , mEffectID(effectID)
	    , mFlags(0)
	{
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void execute(JPABaseEmitter*);                               // _30 (weak; thunk at _20)
	virtual void executeAfter(JPABaseEmitter*);                          // _34 (weak; thunk at _24)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*) = 0;         // _38
	virtual void doExecuteAfter(JPABaseEmitter*) { }                     // _3C (weak)
	virtual void startDemoDrawOff() { mFlags |= TSYNCFLAG_DemoDrawOff; } // _40 (weak)
	virtual void endDemoDrawOn() { mFlags &= ~TSYNCFLAG_DemoDrawOff; }   // _44 (weak)
	virtual ~TSync() { }                                                 // _48 (weak; thunk at _1C)

	inline JPABaseEmitter* getEmitter() const { return mEmitter; }

	// _00		= VTBL
	// _04		= JPAEmitterCallBack
	JPABaseEmitter* mEmitter; // _08
	u16 mEffectID;            // _0C
	u8 mFlags;                // _0E
};
} // namespace efx

#endif
