#ifndef _EFX_TKURAGE_H
#define _EFX_TKURAGE_H

#include "efx/TSimple.h"
#include "efx/TForever.h"
#include "efx/TChaseMtx.h"
#include "efx/TChasePos.h"

namespace efx {
struct TKurageBomb : public TSimple2 {
	inline TKurageBomb()
	    : TSimple2(PID_KurageBomb_1, PID_KurageBomb_2)
	{
	}

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TKurageDeadrun : public TChaseMtxT {
	inline TKurageDeadrun()
	    : TChaseMtxT(PID_KurageDeadRun)
	{
	}

	virtual ~TKurageDeadrun() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtxT
};

struct TKurageEye : public TChaseMtx {
	inline TKurageEye()
	    : TChaseMtx(PID_KurageEye, nullptr)
	{
	}

	virtual ~TKurageEye() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtx
};

struct TKurageFlick : public TSimple1 {
	inline TKurageFlick()
	    : TSimple1(PID_KurageFlick)
	{
	}

	// _00		 = VTBL
	// _00-_0C = TSimple1
};

struct TKurageGepu : public TChasePos {
	inline TKurageGepu(Vector3f* pos)
	    : TChasePos(PID_KurageGepu, pos)
	{
	}

	virtual ~TKurageGepu() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChasePos
};

struct TKurageHire : public TChaseMtx3 {
	inline TKurageHire()
	    : TChaseMtx3(0, PID_KurageHire_1, PID_KurageHire_2, PID_KurageHire_3)
	{
	}

	void setLifeTime(s16);

	// _00		 = VTBL
	// _00-_40 = TChaseMtx3
};

struct TKurageKira : public TChasePos {
	inline TKurageKira(Vector3f* pos)
	    : TChasePos(PID_KurageKira, pos)
	{
	}

	virtual ~TKurageKira() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChasePos
};

struct TKurageSui : public TForever2 {
	inline TKurageSui()
	    : TForever2(PID_KurageSui_1, PID_KurageSui_2)
	{
	}

	void setGlobalTranslation(Vector3f&);

	// _00		 = VTBL
	// _00-_24 = TForever2
};

} // namespace efx

#endif
