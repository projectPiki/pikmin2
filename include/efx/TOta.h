#ifndef _EFX_TOTA_H
#define _EFX_TOTA_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TOtaChargeelec : public TChaseMtxT2 {
	inline TOtaChargeelec()
	    : TChaseMtxT2(0, 0x12C, 0x12D)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargefire : public TChaseMtxT2 {
	inline TOtaChargefire()
	    : TChaseMtxT2(0, 0x12E, 0x12F)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargegas : public TChaseMtxT2 {
	inline TOtaChargegas()
	    : TChaseMtxT2(0, 0x130, 0x131)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargewat : public TChaseMtxT2 {
	inline TOtaChargewat()
	    : TChaseMtxT2(0, 0x132, 0x133)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaElec : public TSimple3 {
	inline TOtaElec()
	    : TSimple3(0x134, 0x135, 0x136)
	{
	}
	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TOtaFire : public TSimple5 {
	inline TOtaFire()
	    : TSimple5(0x137, 0x138, 0x139, 0x13A, 0x13B)
	{
	}

	// _00      = VTBL
	// _00-_24  = TSimple5
};

struct TOtaGas : public TSimple2 {
	inline TOtaGas()
	    : TSimple2(0x13C, 0x13D)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TOtaWat : public TSimple4 {
	inline TOtaWat()
	    : TSimple4(0x13E, 0x13F, 0x140, 0x141)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TOtaPartsOff : public TSimple1 {
	virtual void create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

} // namespace efx

#endif
