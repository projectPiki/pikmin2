#ifndef _EFX_TOTA_H
#define _EFX_TOTA_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TOtaChargeelec : public TChaseMtxT2 {
	inline TOtaChargeelec()
	    : TChaseMtxT2(0, PID_OtaChargeelec_1, PID_OtaChargeelec_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargefire : public TChaseMtxT2 {
	inline TOtaChargefire()
	    : TChaseMtxT2(0, PID_OtaChargefire_1, PID_OtaChargefire_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargegas : public TChaseMtxT2 {
	inline TOtaChargegas()
	    : TChaseMtxT2(0, PID_OtaChargegas_1, PID_OtaChargegas_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargewat : public TChaseMtxT2 {
	inline TOtaChargewat()
	    : TChaseMtxT2(0, PID_OtaChargewat_1, PID_OtaChargewat_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaElec : public TSimple3 {
	inline TOtaElec()
	    : TSimple3(PID_OtaElec_1, PID_OtaElec_2, PID_OtaElec_3)
	{
	}
	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TOtaFire : public TSimple5 {
	inline TOtaFire()
	    : TSimple5(PID_OtaFire_1, PID_OtaFire_2, PID_OtaFire_3, PID_OtaFire_4, PID_OtaFire_5)
	{
	}

	// _00      = VTBL
	// _00-_24  = TSimple5
};

struct TOtaGas : public TSimple2 {
	inline TOtaGas()
	    : TSimple2(PID_OtaGas_1, PID_OtaGas_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TOtaWat : public TSimple4 {
	inline TOtaWat()
	    : TSimple4(PID_OtaWat_1, PID_OtaWat_2, PID_OtaWat_3, PID_OtaWat_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TOtaPartsoff : public TSimple1 {
	inline TOtaPartsoff()
	    : TSimple1(PID_OtaPartsOff)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

} // namespace efx

#endif
