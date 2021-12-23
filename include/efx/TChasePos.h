#ifndef _EFX_TCHASEPOS_H
#define _EFX_TCHASEPOS_H

#include "Vector3.h"
#include "efx/TSync.h"

namespace efx {
struct TChasePos : public TSync {
	inline TChasePos(ushort effectID, Vector3f* position = nullptr)
	    : TSync()
	    , m_position(position)
	{
		m_effectID = effectID;
	}
	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TChasePos();                                    // _2C

	Vector3f* m_position; // _10
};
} // namespace efx

#endif
