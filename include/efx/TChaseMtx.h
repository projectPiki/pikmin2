#ifndef _EFX_TCHASEMTX_H
#define _EFX_TCHASEMTX_H

#include "Matrixf.h"
#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {
struct TChaseMtx : public TSync {
	/**
	 * @reifiedAddress{803B0548}
	 * @reifiedFile{plugProjectEbisawaU/efxBase.cpp}
	 */
	TChaseMtx()
	    : TSync()
	{
	}

	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _14
	virtual ~TChaseMtx();                                    // _2C (thunk at _00)

	Matrixf* m_mtx;
};

struct TChaseMtx2 : public TSyncGroup2<TChaseMtx> {
	TChaseMtx2(float (*)[4], unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtx3 : public TSyncGroup3<TChaseMtx> {
	TChaseMtx3(float (*)[4], unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtx4 : public TSyncGroup4<TChaseMtx> {
	TChaseMtx4(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtx5 : public TSyncGroup5<TChaseMtx> {
	TChaseMtx5(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtx6 : public TSyncGroup6<TChaseMtx> {
	TChaseMtx6(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtxT : public TSync {
	/**
	 * @reifiedAddress{803B08A8}
	 * @reifiedFile{plugProjectEbisawaU/efxBase.cpp}
	 */
	TChaseMtxT()
	    : TSync()
	{
	}

	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _14
	virtual ~TChaseMtxT();                                   // _2C (thunk at _00)

	Matrixf* m_mtx;
};

struct TChaseMtxT2 : public TSyncGroup2<TChaseMtxT> {
	TChaseMtxT2(float (*)[4], unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtxT3 : public TSyncGroup3<TChaseMtxT> {
	TChaseMtxT3(float (*)[4], unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

struct TChaseMtxT4 : public TSyncGroup4<TChaseMtxT> {
	TChaseMtxT4(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};

} // namespace efx

#endif
