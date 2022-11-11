#ifndef _EFX_TSIMPLEMTX_H
#define _EFX_TSIMPLEMTX_H

#include "Matrixf.h"
#include "efx/TSimple.h"
#include "efx/TCallBack_StaticClipping.h"

namespace efx {
struct TSimpleMtx1 : public TSimple1 {
	inline TSimpleMtx1(Matrixf* mat, u16 effectID)
	    : TSimple1(effectID)
	{
		m_mtx = mat;
	}

	virtual bool create(Arg*); // _08

	inline bool setEmitterCallbacks() // this could afford to be a template for all these functions
	{
		Arg newArg;
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
			TCallBack_StaticClipping* callback = &mCallBack_StaticClipping;
			m_emitters[i]                      = particleMgr->create(m_effectIDs[i], newArg.m_position, 0);

			if (m_emitters[i]) {
				m_emitters[i]->m_emitterCallback = callback;

			} else {
				return false;
			}
		}
		return true;
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
	Matrixf* m_mtx; // _0C
};

struct TSimpleMtx2 : public TSimple2 {
	inline TSimpleMtx2(Matrixf* mat, u16 effectID1, u16 effectID2)
	    : TSimple2(effectID1, effectID2)
	{
		m_mtx = mat;
	}

	virtual bool create(Arg*); // _08

	inline bool setEmitterCallbacks() // this could afford to be a template for all these functions
	{
		Arg newArg;
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
			TCallBack_StaticClipping* callback = &mCallBack_StaticClipping;
			m_emitters[i]                      = particleMgr->create(m_effectIDs[i], newArg.m_position, 0);

			if (m_emitters[i]) {
				m_emitters[i]->m_emitterCallback = callback;

			} else {
				return false;
			}
		}
		return true;
	}

	// _00		= VTBL
	// _00-_10	= TSimple2
	Matrixf* m_mtx; // _10
};

struct TSimpleMtx3 : public TSimple3 {
	inline TSimpleMtx3(Matrixf* mat, u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
		m_mtx = mat;
	}

	virtual bool create(Arg*); // _08

	inline bool setEmitterCallbacks() // this could afford to be a template for all these functions
	{
		Arg newArg;
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
			TCallBack_StaticClipping* callback = &mCallBack_StaticClipping;
			m_emitters[i]                      = particleMgr->create(m_effectIDs[i], newArg.m_position, 0);

			if (m_emitters[i]) {
				m_emitters[i]->m_emitterCallback = callback;

			} else {
				return false;
			}
		}
		return true;
	}

	// _00		= VTBL
	// _00-_18	= TSimple3
	Matrixf* m_mtx; // _18
};

struct TSimpleMtx4 : public TSimple4 {
	inline TSimpleMtx4(Matrixf* mat, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
	    : TSimple4(effectID1, effectID2, effectID3, effectID4)
	{
		m_mtx = mat;
	}

	virtual bool create(Arg*); // _08

	inline bool setEmitterCallbacks() // this could afford to be a template for all these functions
	{
		Arg newArg;
		for (int i = 0; i < (int)(sizeof(m_emitters) / sizeof(m_emitters[0])); i++) {
			TCallBack_StaticClipping* callback = &mCallBack_StaticClipping;
			m_emitters[i]                      = particleMgr->create(m_effectIDs[i], newArg.m_position, 0);

			if (m_emitters[i]) {
				m_emitters[i]->m_emitterCallback = callback;

			} else {
				return false;
			}
		}
		return true;
	}

	// _00		= VTBL
	// _00-_1C	= TSimple4
	Matrixf* m_mtx; // _1C
};
} // namespace efx

#endif
