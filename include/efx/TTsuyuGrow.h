#ifndef _EFX_TTSUYUGROW_H
#define _EFX_TTSUYUGROW_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TTsuyuGrow0 : public TSimple1 {
	inline TTsuyuGrow0()
	    : TSimple1(PID_TsuyuGrow0)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TTsuyuGrow1 : public TSimpleMtx2 {
	inline TTsuyuGrow1()
	    : TSimpleMtx2(nullptr, PID_TsuyuGrow1_1, PID_TsuyuGrow1_2)
	{
	}

	inline TTsuyuGrow1(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_TsuyuGrow1_1, PID_TsuyuGrow1_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TTsuyuGrow2 : public TSimpleMtx2 {
	inline TTsuyuGrow2()
	    : TSimpleMtx2(nullptr, PID_TsuyuGrow2_1, PID_TsuyuGrow2_2)
	{
	}

	inline TTsuyuGrow2(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_TsuyuGrow2_1, PID_TsuyuGrow2_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TTsuyuGrowon : public TSimple1 {
	inline TTsuyuGrowon()
	    : TSimple1(PID_TsuyuGrowOn)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};
} // namespace efx

#endif
