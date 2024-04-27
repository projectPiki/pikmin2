#ifndef _EFX2D_TCHASEPOS_H
#define _EFX2D_TCHASEPOS_H

#include "Vector2.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct TChasePos : public TForever {
	TChasePos(u16 id)
	    : TForever(id)
	{
	}

	inline TChasePos(u16 id, Vector2f* pos)
	    : mChasePosition(pos)
	    , TForever(id)
	{
	}

	// vtable 1
	virtual bool create(Arg*); // _08
	// vtable 2
	virtual ~TChasePos() { }               // _34 (weak)
	virtual void execute(JPABaseEmitter*); // _38

	// _00		= VTBL
	// _00-_14	= TForever
	Vector2f* mChasePosition; // _14
};

struct TChasePosDir : public TForever {
	TChasePosDir(u16 id, Vector2f& pos, Vector2f& dir)
	    : TForever(id)
	{
		mChasePosition = &pos;
		mDirection     = &dir;
	}
	// vtable 1
	virtual bool create(Arg*); // _08
	// vtable 2
	virtual ~TChasePosDir() { }            // _34 (weak)
	virtual void execute(JPABaseEmitter*); // _38

	// _00		= VTBL
	// _00-_14	= TForever
	Vector2f* mChasePosition; // _14
	Vector2f* mDirection;     // _18
};
} // namespace efx2d

#endif
