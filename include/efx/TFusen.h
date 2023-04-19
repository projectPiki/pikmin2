#ifndef _EFX_TFUSEN_H
#define _EFX_TFUSEN_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TFusenAir : public TChaseMtx3 {
	TFusenAir()
	    : TChaseMtx3(nullptr, PID_FusenAir_Mar_1, PID_FusenAir_Mar_2, PID_FusenAir_Mar_3)
	{
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

struct TFusenAirhit : public TChasePosYRot2 {
	inline TFusenAirhit(Vector3f* pos, f32* faceDir)
	    : TChasePosYRot2(pos, faceDir, PID_FusenAirHit_Mar_1, PID_FusenAirHit_Mar_2)
	{
	}

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TFusenDead : public TChaseMtx2 {
	inline TFusenDead()
	    : TChaseMtx2(nullptr, PID_FusenDead_1, PID_FusenDead_2)
	{
	}
	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
};

struct TFusenhAir : public TChaseMtx3 {
	inline TFusenhAir()
	    : TChaseMtx3(nullptr, PID_FusenAir_Hana_1, PID_FusenAir_Hana_2, PID_FusenAir_Hana_3)
	{
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

struct TFusenhAirhit : public TChasePosYRot2 {
	inline TFusenhAirhit(Vector3f* pos, f32* faceDir)
	    : TChasePosYRot2(pos, faceDir, PID_FusenAirHit_Hana_1, PID_FusenAirHit_Hana_2)
	{
	}

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TFusenSui : public TChaseMtx {
	inline TFusenSui()
	    : TChaseMtx(PID_FusenSui, nullptr)
	{
	}
	virtual ~TFusenSui() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx

#endif
