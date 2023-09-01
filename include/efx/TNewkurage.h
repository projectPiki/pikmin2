#ifndef _EFX_TNEWKURAGE_H
#define _EFX_TNEWKURAGE_H

#include "efx/TSimple.h"
#include "efx/TForever.h"
#include "efx/TChaseMtx.h"
#include "efx/TChasePos.h"

namespace efx {
struct TNewkurageBomb : public TSimple2 {
	inline TNewkurageBomb()
	    : TSimple2(PID_NewKurageBomb_1, PID_NewKurageBomb_2)
	{
	}

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TNewkurageDeadrun : public TChaseMtxT {
	inline TNewkurageDeadrun()
	    : TChaseMtxT(PID_NewKurageDeadRun)
	{
	}

	virtual ~TNewkurageDeadrun() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtxT
};

struct TNewkurageEye : public TChaseMtx {
	inline TNewkurageEye()
	    : TChaseMtx(PID_NewKurageEye, nullptr)
	{
	}

	virtual ~TNewkurageEye() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtx
};

struct TNewkurageFlick : public TSimple1 {
	inline TNewkurageFlick()
	    : TSimple1(PID_NewKurageFlick)
	{
	}

	// _00		 = VTBL
	// _00-_0C = TSimple1
};

struct TNewkurageHire : public TChaseMtx3 {
	inline TNewkurageHire()
	    : TChaseMtx3(0, PID_NewKurageHire_1, PID_NewKurageHire_2, PID_NewKurageHire_3)
	{
	}

	void setLifeTime(s16);

	// _00		 = VTBL
	// _00-_40 = TChaseMtx3
};

struct TNewkurageKira : public TChasePos {
	inline TNewkurageKira(Vector3f* posPtr)
	    : TChasePos(PID_NewKurageKira, posPtr)
	{
	}

	virtual ~TNewkurageKira() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChasePos
};

struct TNewkurageSui : public TForever2 {
	inline TNewkurageSui()
	    : TForever2(PID_NewKurageSui_1, PID_NewKurageSui_2)
	{
	}

	void setGlobalTranslation(Vector3f&);

	// _00		 = VTBL
	// _00-_24 = TForever2
};

} // namespace efx

#endif
