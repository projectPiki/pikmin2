#ifndef _EFX_TOOOTA_H
#define _EFX_TOOOTA_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TOootaBombBody : public TSimple1 {
	inline TOootaBombBody()
	    : TSimple1(PID_OoOtaBombBody)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaBombLeg : public TSimple1 {
	inline TOootaBombLeg()
	    : TSimple1(PID_OoOtaBombLeg)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaChangeBody : public TChaseMtx {
	inline TOootaChangeBody()
	    : TChaseMtx(PID_OoOtaChangeBody, nullptr)
	{
	}

	virtual ~TOootaChangeBody() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TOootaChangeLeg : public TChasePosPosLocalYScale {
	inline TOootaChangeLeg()
	    : TChasePosPosLocalYScale(PID_OoOtaChangeLeg, 100.0f)
	{
	}

	virtual ~TOootaChangeLeg() { } // _48 (weak)

	// _00     = VTBL
	// _00-_1C = TChasePosPosLocalYScale
};

struct TOootaDeadAwa : public TChaseMtx {
	inline TOootaDeadAwa()
	    : TChaseMtx(PID_OoOtaDeadAwa, nullptr)
	{
	}

	virtual ~TOootaDeadAwa() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TOootaDeadBody : public TChaseMtx3 {
	inline TOootaDeadBody()
	    : TChaseMtx3(nullptr, PID_OoOtaDeadBody_1, PID_OoOtaDeadBody_2, PID_OoOtaDeadBody_3)
	{
	}

	// _00     = VTBL
	// _00-_40 = TChaseMtx3
};

struct TOootaDeadLeg : public TChasePosPosLocalYScale3 {
	inline TOootaDeadLeg()
	    : TChasePosPosLocalYScale3(nullptr, nullptr, 100.0f, PID_OoOtaDeadLeg_1, PID_OoOtaDeadLeg_2, PID_OoOtaDeadLeg_3)
	{
	}

	// _00     = VTBL
	// _00-_58 = TChasePosPosLocalYScale3
};

struct TOootaElec : public TChasePosPosLocalZScale3 {
	inline TOootaElec()
	    : TChasePosPosLocalZScale3(nullptr, nullptr, 300.0f, PID_OoOtaElec_1, PID_OoOtaElec_2, PID_OoOtaElec_3)
	{
	}

	// _00     = VTBL
	// _00-_58 = TChasePosPosLocalZScale3
};

struct TOootaElecAttack1 : public TChasePos {
	inline TOootaElecAttack1()
	    : TChasePos(PID_OoOtaElecAttack1, nullptr)
	{
	}

	virtual ~TOootaElecAttack1() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TOootaElecAttack2 : public TChasePos2 {
	inline TOootaElecAttack2()
	    : TChasePos2(nullptr, PID_OoOtaElecAttack2_1, PID_OoOtaElecAttack2_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TOootaElecLeg : public TChasePosPosLocalZScale {
	inline TOootaElecLeg()
	    : TChasePosPosLocalZScale(PID_OoOtaElecLeg, 100.0f)
	{
	}

	virtual ~TOootaElecLeg() { } // _48 (weak)

	// _00     = VTBL
	// _00-_1C = TChasePosPosLocalZScale
};

struct TOootaElecparts : public TChasePos {
	inline TOootaElecparts(Vector3f* pos)
	    : TChasePos(PID_OoOtaElecParts, pos)
	{
	}

	virtual ~TOootaElecparts() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TOootaFire : public TChaseMtx6 {
	inline TOootaFire()
	    : TChaseMtx6(nullptr, PID_OoOtaFire_1, PID_OoOtaFire_2, PID_OoOtaFire_3, PID_OoOtaFire_4, PID_OoOtaFire_6, PID_OoOtaFire_5)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_7C = TChaseMtx6
};

struct TOootaFoot : public TChasePos2 {
	inline TOootaFoot()
	    : TChasePos2(nullptr, PID_OoOtaFoot_1, PID_OoOtaFoot_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TOootaGas : public TChasePosYRot2 {
	inline TOootaGas(Vector3f* pos, f32* rot)
	    : TChasePosYRot2(pos, rot, PID_OoOtaGas_1, PID_OoOtaGas_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TOootaParticle : public TChasePos {
	inline TOootaParticle()
	    : TChasePos(PID_OoOtaParticle, nullptr)
	{
	}

	virtual ~TOootaParticle() { } // _48 (weak)

	void setGlobalDynamicsScale(f32);

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TOootaPartsoff : public TSimple1 {
	inline TOootaPartsoff()
	    : TSimple1(PID_OoOtaPartsOff)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaPdead : public TSimple1 {
	inline TOootaPdead()
	    : TSimple1(PID_OoOtaPDead)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaPhouden : public TChasePos2 {
	inline TOootaPhouden(Vector3f* pos)
	    : TChasePos2(pos, PID_OoOtaPHouden_1, PID_OoOtaPHouden_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TOootaStartBody : public TChaseMtx {
	inline TOootaStartBody()
	    : TChaseMtx(PID_OoOtaStartBody, nullptr)
	{
	}

	virtual ~TOootaStartBody() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TOootaStartLeg : public TChasePosPosLocalYScale {
	inline TOootaStartLeg()
	    : TChasePosPosLocalYScale(PID_OoOtaStartLeg, 100.0f)
	{
	}

	virtual ~TOootaStartLeg() { } // _48 (weak)

	// _00     = VTBL
	// _00-_1C = TChasePosPosLocalYScale
};

struct TOootaStartOta : public TChaseMtxT {
	inline TOootaStartOta()
	    : TChaseMtxT(PID_OoOtaStartOta)
	{
	}

	virtual ~TOootaStartOta() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TOootaStartSmoke : public TSimple1 {
	inline TOootaStartSmoke()
	    : TSimple1(PID_OoOtaStartSmoke)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaWalk : public TSimple2 {
	inline TOootaWalk()
	    : TSimple2(PID_OoOtaWalk_1, PID_OoOtaWalk_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TOootaWbHit : public TSimple4 {
	inline TOootaWbHit()
	    : TSimple4(PID_OoOtaWbHit_1, PID_OoOtaWbHit_2, PID_OoOtaWbHit_3, PID_OoOtaWbHit_4)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple4
};

struct TOootaWbomb : public TChasePos4 {
	inline TOootaWbomb(Vector3f* pos)
	    : TChasePos4(pos, PID_OoOtaWbomb_1, PID_OoOtaWbomb_2, PID_OoOtaWbomb_3, PID_OoOtaWbomb_4)
	{
	}

	// _00     = VTBL
	// _00-_54 = TChasePos4
};

struct TOootaWbShot : public TSimpleMtx2 {
	inline TOootaWbShot(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_OoOtaWbShot_1, PID_OoOtaWbShot_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};
} // namespace efx

#endif
