#ifndef _EFX_TONEEMITTER_H
#define _EFX_TONEEMITTER_H

#include "Vector3.h"
#include "efx/Context.h"
#include "efx/TBase.h"
#include "JSystem/JParticle/JPAEmitter.h"

namespace efx {

struct TOneEmitter : public TBase, public JPAEmitterCallBack {
	inline TOneEmitter() { }

	inline TOneEmitter(u16 effectID)
	    : mEmitter(nullptr)
	    , mEffectID(effectID)
	{
		mContext.clearRelations();
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff()             // _34 (weak)
	{
		if (mEmitter) {
			mEmitter->setFlag(JPAEMIT_IsDemoOn);
		}
	}
	virtual void endDemoDrawOn() // _38 (weak)
	{
		if (mEmitter) {
			mEmitter->resetFlag(JPAEMIT_IsDemoOn);
		}
	}
	virtual ~TOneEmitter() { } // _3C (weak)

	void add(Context*);

	// Unused/inlined:
	void del(Context*);

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	JPABaseEmitter* mEmitter; // _08
	u16 mEffectID;            // _0C
	Context mContext;         // _10
};

/**
 * @size{0x2C}
 */
struct TOneEmitterChasePos : public TBase, public JPAEmitterCallBack {
	inline TOneEmitterChasePos(u16 effectID)
	{
		mEmitter  = nullptr;
		mEffectID = effectID;
		mContext.clearRelations();
	}
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff()
	{
		if (mEmitter == nullptr) {
			return;
		}
		mEmitter->mFlags |= 4;
	} // _34 (weak)
	virtual void endDemoDrawOn()
	{
		if (mEmitter == nullptr) {
			return;
		}
		mEmitter->mFlags &= ~4;
	}                                  // _38 (weak)
	virtual ~TOneEmitterChasePos() { } // _3C (weak)

	void add(ContextChasePos*);
	void del(ContextChasePos*);

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	ContextChasePos mContext; // _08
	JPABaseEmitter* mEmitter; // _24
	u16 mEffectID;            // _28
};

struct TOneEmitterSimple : public TBase, public JPAEmitterCallBack {
	inline TOneEmitterSimple(u16 effectID) // something like this, may need reordering
	    : mEmitter(nullptr)
	    , mEffectID(effectID)
	    , _14(0)
	{
		_18 = 10;
		_10 = new Vector3f[_18];
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		if (mEmitter) {
			particleMgr->forceKill(mEmitter);
			mEmitter = nullptr;
		}
	}
	virtual void fade() // _10 (weak)
	{
		if (mEmitter) {
			particleMgr->fade(mEmitter);
			mEmitter = nullptr;
		}
	}
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff()             // _34 (weak)
	{
		if (mEmitter) {
			mEmitter->mFlags |= 0x4;
		}
	}
	virtual void endDemoDrawOn() // _38 (weak)
	{
		if (mEmitter) {
			mEmitter->mFlags &= ~0x4;
		}
	}
	virtual ~TOneEmitterSimple() { } // _3C (weak)

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	JPABaseEmitter* mEmitter; // _08
	u16 mEffectID;            // _0C
	Vector3f* _10;            // _10
	int _14;                  // _14
	int _18;                  // _18, vector count?
};
} // namespace efx

#endif
