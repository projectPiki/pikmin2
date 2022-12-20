#ifndef _EFX2D_T2DCVNAME_H
#define _EFX2D_T2DCVNAME_H

#include "types.h"
#include "efx2d/TForever.h"
#include "efx2d/Arg.h"

namespace efx2d {
struct T2DCvnameCave : public TForeverN {
	inline T2DCvnameCave()
	    : TForeverN(3)
	{
		m_forevers[0].m_efxID = PID_2DCvnameCave_1;
		m_forevers[1].m_efxID = PID_2DCvnameCave_2;
		m_forevers[2].m_efxID = PID_2DCvnameCave_3;
	}
	// _00     = VTBL
	// _00-_0C = TForeverN
};

struct T2DCvnameChal : public TForever {
	inline T2DCvnameChal()
	    : TForever(PID_2DCvnameChal)
	{
	}
	virtual ~T2DCvnameChal(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DCvnameVs : public TForeverN {
	inline T2DCvnameVs()
	    : TForeverN(2)
	{
		m_forevers[0].m_efxID = PID_2DCvnameVs_1;
		m_forevers[1].m_efxID = PID_2DCvnameVs_2;
	}
	// _00     = VTBL
	// _00-_0C = TForeverN
};
} // namespace efx2d

#endif
