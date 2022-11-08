#ifndef _EFX2D_FILESELECT_H
#define _EFX2D_FILESELECT_H

#include "types.h"
#include "efx2d/Arg.h"
#include "efx2d/TSimple.h"
#include "efx2d/TChasePos.h"

namespace efx2d {
namespace FileSelect {
struct ArgFilecopy : public Arg {
	virtual const char* getName(); // _08 (weak)

	// _00-_08	= Vector2f
	// _08 		= VTBL
};

struct T2DFilecopyBase : public TForever {
	virtual bool create(Arg*);  // _08
	virtual ~T2DFilecopyBase(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DFilecopy : public T2DFilecopyBase {
	virtual ~T2DFilecopy(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = T2DFilecopyBase
};

struct T2DFilecopyM : public T2DFilecopyBase {
	virtual ~T2DFilecopyM(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = T2DFilecopyBase
};

struct T2DFilecopied : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DFiledecide : public TSimple2 {
	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DFiledelete : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DFiledeleteM : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DFiledeleting : public TForever {
	virtual ~T2DFiledeleting(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DFiledeletingM : public TForever {
	virtual ~T2DFiledeletingM(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DFilesel : public TChasePos {
	virtual ~T2DFilesel(); // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
};

struct T2DFileselM : public TChasePos {
	virtual ~T2DFileselM(); // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
};

} // namespace FileSelect
} // namespace efx2d

#endif
