#ifndef _EFX_2DEFFECT_H
#define _EFX_2DEFFECT_H

#include "efx2d/TSimple.h"
#include "efx2d/TForever.h"
#include "efx2d/TChasePos.h"

namespace efx2d {

struct T2DBattleDive : public TSimple3 {
	inline T2DBattleDive()
	    : TSimple3(PID_BattleDive_1, PID_BattleDive_2, PID_BattleDive_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple3
};

struct T2DCavecomp : public TSimple2 {
	inline T2DCavecomp()
	    : TSimple2(PID_Cavecomp_1, PID_Cavecomp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DCavecompLoop : public TForever {
	inline T2DCavecompLoop()
	    : TForever(PID_Cavecomp_Loop)
	{
	}

	virtual ~T2DCavecompLoop() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DChalDive : public TForever {
	T2DChalDive()
	    : TForever(PID_ChalDive)
	{
	}

	virtual ~T2DChalDive() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DChalDiveEnd : public TSimple1 {
	inline T2DChalDiveEnd()
	    : TSimple1(PID_ChalDiveEnd)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DChangesmoke : public TSimple1 {
	inline T2DChangesmoke()
	    : TSimple1(PID_Changesmoke)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DCountKira : public TForever {
	T2DCountKira()
	    : TForever(PID_2DCountKira)
	{
		mScale = 1.0f;
	}
	virtual bool create(Arg*);  // _08
	virtual ~T2DCountKira() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
	f32 mScale;
};

struct T2DCursor : public TChasePos {
	T2DCursor(Vector2f* pos)
	    : TChasePos(PID_2DCursor_1, pos)
	{
		mScale = 1.0f;
	}

	virtual bool create(Arg*); // _08
	virtual ~T2DCursor() { }   // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
	f32 mScale; // _18
};

struct T2DCvnameCave : public TForever3 {
	inline T2DCvnameCave()
	    : TForever3(PID_2DCvnameCave_1, PID_2DCvnameCave_2, PID_2DCvnameCave_3)
	{
	}
	// _00     = VTBL
	// _00-_0C = TForeverN
};

struct T2DCvnameChal : public TForever {
	inline T2DCvnameChal()
	    : TForever(PID_2DCvnameChal)
	{
	}
	virtual ~T2DCvnameChal() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DCvnameVs : public TForever2 {
	inline T2DCvnameVs()
	    : TForever2(PID_2DCvnameVs_1, PID_2DCvnameVs_2)
	{
	}
	// _00     = VTBL
	// _00-_0C = TForeverN
};

struct T2DExtractUp : public TSimple1 {
	inline T2DExtractUp()
	    : TSimple1(PID_ExtractUp)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple1
};

struct T2DGoBatl : public TSimple3 {
	inline T2DGoBatl()
	    : TSimple3(PID_GoBatl_1, PID_GoBatl_2, PID_GoBatl_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple3
};

struct T2DGoChal : public TSimple2 {
	inline T2DGoChal()
	    : TSimple2(PID_GoChal_1, PID_GoChal_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DOtakantei : public TForever5 {
	inline T2DOtakantei()
	    : TForever5(PID_OtaKantei_1, PID_OtaKantei_2, PID_OtaKantei_3, PID_OtaKantei_4, PID_OtaKantei_5)
	{
	}

	// _00     = VTBL
	// _00-_0C = TForeverN
};

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

struct T2DSprayset : public TSimple2 {
	inline T2DSprayset()
	    : TSimple2(PID_SpraySet_1, PID_SpraySet_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DSprayset_forVS : public TSimple2 {
	inline T2DSprayset_forVS()
	    : TSimple2(PID_SpraySet_1, PID_SpraySet_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_14 = TSimple2
};

}; // namespace efx2d
#endif
