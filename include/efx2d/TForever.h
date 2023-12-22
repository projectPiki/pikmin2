#ifndef _EFX2D_TFOREVER_H
#define _EFX2D_TFOREVER_H

#include "efx2d/TBase.h"
#include "JSystem/JParticle/JPAEmitter.h"

namespace JUtility {
struct TColor;
} // namespace JUtility

namespace efx2d {
struct TForever : public TBase, public JPAEmitterCallBack {
	TForever();

	TForever(u16 effectID)
	{
		mEfxID   = effectID;
		mEmitter = nullptr;
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
	// vtable 2 (JPABaseEmitter + self)
	virtual ~TForever() { } // _34 (weak)

	void setGlobalAlpha(u8);
	void setGlobalEnvColor(JUtility::TColor&);
	void setGlobalScale(f32);

	// _00		= VTBL
	// _04-_0C	= JPAEmitterCallBack
	u16 mEfxID;               // _0C
	JPABaseEmitter* mEmitter; // _10
};

struct TForeverN : public TBaseIF {
	TForeverN(u8 c);

	virtual bool create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
	virtual void setGroup(u8); // _14

	void setGlobalAlpha(u8);

	// _00 VTBL
	u8 mLength;          // _04
	u8 _05;              // _05
	u8 _06;              // _06
	u8 _07;              // _07
	TForever* mForevers; // _08
};

struct TForever2 : public TForeverN {
	TForever2(u16 effectID1, u16 effectID2)
	    : TForeverN(2)
	{
		mForevers[0].mEfxID = effectID1;
		mForevers[1].mEfxID = effectID2;
	}

	// _00		= VTBL
	// _00-_0C	= TForeverN
};

struct TForever3 : public TForeverN {
	TForever3(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TForeverN(3)
	{
		mForevers[0].mEfxID = effectID1;
		mForevers[1].mEfxID = effectID2;
		mForevers[2].mEfxID = effectID3;
	}
	// _00		= VTBL
	// _00-_0C	= TForeverN
};

struct TForever5 : public TForeverN {
	inline TForever5(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u16 effectID5)
	    : TForeverN(5)
	{
		mForevers[0].mEfxID = effectID1;
		mForevers[1].mEfxID = effectID2;
		mForevers[2].mEfxID = effectID3;
		mForevers[3].mEfxID = effectID4;
		mForevers[4].mEfxID = effectID5;
	}

	// _00		= VTBL
	// _00-_0C	= TForeverN
};
} // namespace efx2d

#endif
