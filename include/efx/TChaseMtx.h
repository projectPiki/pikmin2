#ifndef _EFX_TCHASEMTX_H
#define _EFX_TCHASEMTX_H

#include "Matrixf.h"
#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {
struct TChaseMtx : public TSync {
	TChaseMtx()
	    : TSync()
	{
	}

	inline TChaseMtx(u16 effectID, Matrixf* mtx) // probably
	    : TSync()
	    , mMtx(mtx)
	{
		mEffectID = effectID;
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChaseMtx() { }                                 // _48 (weak)

	// _00		= VTBL
	// _00-_10	= TSync
	Matrixf* mMtx; // _10
};

struct TChaseMtx2 : public TSyncGroup2<TChaseMtx> {
	TChaseMtx2(Mtx, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_2C	= TSyncGroup2<TChaseMtx>
};

struct TChaseMtx3 : public TSyncGroup3<TChaseMtx> {
	TChaseMtx3(Mtx, u16, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_40	= TSyncGroup3<TChaseMtx>
};

struct TChaseMtx4 : public TSyncGroup4<TChaseMtx> {
	TChaseMtx4(Mtx, u16, u16, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_54	= TSyncGroup4<TChaseMtx>
};

struct TChaseMtx5 : public TSyncGroup5<TChaseMtx> {
	// unused struct?
	TChaseMtx5(Mtx, u16, u16, u16, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_68	= TSyncGroup5<TChaseMtx>
};

struct TChaseMtx6 : public TSyncGroup6<TChaseMtx> {
	TChaseMtx6(Mtx, u16, u16, u16, u16, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_7C	= TSyncGroup6<TChaseMtx>
};

struct TChaseMtxT : public TSync {
	TChaseMtxT()
	    : TSync()
	{
	}

	inline TChaseMtxT(u16 effectID) // probably
	    : TSync()
	    , mMtx(nullptr)
	{
		mEffectID = effectID;
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChaseMtxT() { }                                // _48 (weak)

	// _00		= VTBL
	// _00-_10	= TSync
	Matrixf* mMtx; // _10
};

struct TChaseMtxT2 : public TSyncGroup2<TChaseMtxT> {
	TChaseMtxT2(Mtx, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_2C	= TSyncGroup2<TChaseMtx>
};

struct TChaseMtxT3 : public TSyncGroup3<TChaseMtxT> {
	// unused struct?
	TChaseMtxT3(Mtx, u16, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_40	= TSyncGroup3<TChaseMtx>
};

struct TChaseMtxT4 : public TSyncGroup4<TChaseMtxT> {
	TChaseMtxT4(Mtx, u16, u16, u16, u16);

	void setMtxptr(Mtx);

	// _00		= VTBL
	// _00-_54	= TSyncGroup4<TChaseMtx>
};

} // namespace efx

#endif
