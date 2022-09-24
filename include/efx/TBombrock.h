#ifndef _EFX_TBOMBROCK_H
#define _EFX_TBOMBROCK_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TBombrockABCD : public TSimple4 {
	inline TBombrockABCD()
	    : TSimple4(8, 9, 10, 11)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrockEFGH : public TSimple4 {
	inline TBombrockEFGH()
	    : TSimple4(12, 13, 14, 15)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrock : public TBase {
	inline TBombrock() { }

	virtual bool create(Arg* arg) // _08 (weak)
	{
		bool result = false;
		if ((&m_efxBombABCD)->create(arg) && (&m_efxBombEFGH)->create(arg)) {
			result = true;
		}
		return result;
	}
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00      = VTBL
	TBombrockABCD m_efxBombABCD; // _04
	TBombrockEFGH m_efxBombEFGH; // _20
};

struct TBombrockLight : public TChaseMtxT {
	virtual ~TBombrockLight(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};
} // namespace efx

#endif
