#ifndef _EFX2D_FILESELECT_H
#define _EFX2D_FILESELECT_H

#include "types.h"
#include "efx2d/Arg.h"
#include "efx2d/TSimple.h"
#include "efx2d/TChasePos.h"

namespace efx2d {
namespace FileSelect {
struct ArgFilecopy : public Arg {
	ArgFilecopy(Vector2f posA, Vector2f posB, JUtility::TColor color)
	    : Arg(posA)
	    , mAltPosition(posB)
	    , mColor(color)
	{
	}
	virtual const char* getName() { return "ArgFilecopy"; } // _08 (weak)

	// _00-_08	= Vector2f
	// _08 		= VTBL
	Vector2f mAltPosition;
	JUtility::TColor mColor; // _14
};

struct T2DFilecopyBase : public TForever {
	inline T2DFilecopyBase(u16 effectID)
	    : TForever(effectID)
	{
		mResMgrId = 1;
	}

	virtual bool create(Arg*);     // _08
	virtual ~T2DFilecopyBase() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DFilecopy : public T2DFilecopyBase {
	inline T2DFilecopy()
	    : T2DFilecopyBase(0)
	{
		mResMgrId = 1;
	}

	virtual ~T2DFilecopy() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = T2DFilecopyBase
};

struct T2DFilecopyM : public T2DFilecopyBase {
	inline T2DFilecopyM()
	    : T2DFilecopyBase(1)
	{
		mResMgrId = 1;
	}

	virtual ~T2DFilecopyM() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = T2DFilecopyBase
};

struct T2DFilecopied : public TSimple1 {
	inline T2DFilecopied()
	    : TSimple1(9)
	{
		mResMgrId = 1;
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DFiledecide : public TSimple2 {
	inline T2DFiledecide()
	    : TSimple2(2, 3)
	{
		mResMgrId = 1;
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DFiledelete : public TSimple1 {
	inline T2DFiledelete()
	    : TSimple1(4)
	{
		mResMgrId = 1;
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DFiledeleteM : public TSimple1 {
	inline T2DFiledeleteM()
	    : TSimple1(5)
	{
		mResMgrId = 1;
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DFiledeleting : public TForever {
	inline T2DFiledeleting()
	    : TForever(10)
	{
		mResMgrId = 1;
	}

	virtual ~T2DFiledeleting() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DFiledeletingM : public TForever {
	inline T2DFiledeletingM()
	    : TForever(11)
	{
		mResMgrId = 1;
	}

	virtual ~T2DFiledeletingM() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DFilesel : public TChasePos {
	inline T2DFilesel(Vector2f* pos)
	    : TChasePos(6, pos)
	{
		mResMgrId = 1;
	}

	virtual ~T2DFilesel() { } // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
};

struct T2DFileselM : public TChasePos {
	inline T2DFileselM(Vector2f* pos)
	    : TChasePos(7, pos)
	{
		mResMgrId = 1;
	}

	virtual ~T2DFileselM() { } // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
};

} // namespace FileSelect
} // namespace efx2d

#endif
