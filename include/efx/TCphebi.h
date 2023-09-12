#ifndef _EFX_TCPHEBI_H
#define _EFX_TCPHEBI_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TCphebiDead : public TChaseMtx4 {
	inline TCphebiDead()
	    : TChaseMtx4(nullptr, PID_CphebiDead_1, PID_CphebiDead_2, PID_CphebiDead_3, PID_CphebiDead_4)
	{
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtx4
};

struct TCphebiDeadHane : public TSimple1 {
	inline TCphebiDeadHane()
	    : TSimple1(PID_CphebiDeadHane)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif
