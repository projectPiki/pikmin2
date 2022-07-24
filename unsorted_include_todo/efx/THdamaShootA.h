#ifndef _EFX_THDAMASHOOTA_H
#define _EFX_THDAMASHOOTA_H

/*
    __vt__Q23efx12THdamaShootA:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple1FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimple1 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct THdamaShootA : public TSimple1 {

	// _00 VTBL
};
} // namespace efx

#endif
