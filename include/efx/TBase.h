#ifndef _EFX_TBASE_H
#define _EFX_TBASE_H

#include "ParticleMgr.h"
#include "Vector3.h"
#include "efx/TCallBack_StaticClipping.h"
#include "efx/Arg.h"
#include "types.h"
#include "ParticleID.h"

namespace efx {
void makeMtxZAxisAlongPosPos(Mtx, Vector3f&, Vector3f&);

struct TBase {
	virtual bool create(Arg*) = 0; // _08
	virtual void forceKill()  = 0; // _0C
	virtual void fade()       = 0; // _10

	static TCallBack_StaticClipping mCallBack_StaticClipping;
};

} // namespace efx

#endif
