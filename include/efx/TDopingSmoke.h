#ifndef _EFX_TDOPINGSMOKE_H
#define _EFX_TDOPINGSMOKE_H

#include "efx/TSimple.h"
#include "Vector3.h"

namespace efx {
struct TDopingSmoke : public TSimple1 {
	virtual bool create(Arg*); // _08

	inline void setEmitterVector(Vector3f* vec)
	{
		JPABaseEmitter* emit = m_emitters[0];
		emit->_18.x          = vec->x;
		emit->_18.y          = vec->y;
		emit->_18.z          = vec->z;
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif
