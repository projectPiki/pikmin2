#ifndef _EFX_TDOPINGSMOKE_H
#define _EFX_TDOPINGSMOKE_H

#include "efx/TSimple.h"
#include "Vector3.h"

namespace efx {
struct TDopingSmoke : public TSimple1 {
	TDopingSmoke()
	    : TSimple1(PID_DopingSmoke_2)
	{
	}
	virtual bool create(Arg*); // _08

	inline void setEmitterVector(Vector3f* vec)
	{
		JPABaseEmitter* emit = mEmitters[0];
		emit->mLocalDir.x    = vec->x;
		emit->mLocalDir.y    = vec->y;
		emit->mLocalDir.z    = vec->z;
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif
