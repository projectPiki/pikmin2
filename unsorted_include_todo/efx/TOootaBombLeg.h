#ifndef _EFX_TOOOTABOMBLEG_H
#define _EFX_TOOOTABOMBLEG_H

/*
    __vt__Q23efx13TOootaBombLeg:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx13TOootaBombLegFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimple1 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TOootaBombLeg : public TSimple1 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
