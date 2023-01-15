#ifndef _EFX2D_T2DSENSOR_H
#define _EFX2D_T2DSENSOR_H

#include "types.h"
#include "efx2d/TSimple.h"

namespace efx2d {
struct T2DSensorAct : public TSimple2 {
	inline T2DSensorAct()
	    : TSimple2(PID_SensorAct_1, PID_SensorAct_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DSensorAct_forVS : public TSimple2 {
	inline T2DSensorAct_forVS()
	    : TSimple2(PID_SensorAct_1, PID_SensorAct_2)
	{
	}

	bool create(Arg*);

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DSensorComp : public TSimple2 {
	inline T2DSensorComp()
	    : TSimple2(PID_SensorComp_1, PID_SensorComp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DSensorGet_forVS : public TSimple2 {
	inline T2DSensorGet_forVS()
	    : TSimple2(PID_SensorGet_1, PID_SensorGet_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DSensorGet : public TSimple3 {
	inline T2DSensorGet()
	    : TSimple3(PID_SensorGet_1, PID_SensorGet_2, PID_SensorGet_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple3
};
} // namespace efx2d

#endif
