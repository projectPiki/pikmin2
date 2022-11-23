#ifndef _EFX_TONYON_H
#define _EFX_TONYON_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TOnyonEatAB : public TSimpleMtx2 {
	inline TOnyonEatAB(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_OnyonEatAB_1, PID_OnyonEatAB_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TOnyonEatC : public TSimpleMtx1 {
	inline TOnyonEatC(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_OnyonEatC)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimpleMtx1
};

struct TOnyonLay : public TSimple2 {
	inline TOnyonLay()
	    : TSimple2(PID_OnyonLay_1, PID_OnyonLay_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TOnyonPuffKira : public TSimple1 {
	inline TOnyonPuffKira()
	    : TSimple1(PID_OnyonPuffKira)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOnyonPuffPuff : public TSimpleMtx1 {
	inline TOnyonPuffPuff(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_OnyonPuffPuff)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimpleMtx1
};
} // namespace efx

#endif
