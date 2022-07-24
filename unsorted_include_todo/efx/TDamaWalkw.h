#ifndef _EFX_TDAMAWALKW_H
#define _EFX_TDAMAWALKW_H

/*
    __vt__Q23efx10TDamaWalkw:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple3FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple3Fv
    .4byte fade__Q23efx8TSimple3Fv
*/

namespace efx {
struct TSimple3 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TDamaWalkw : public TSimple3 {

	// _00 VTBL
};
} // namespace efx

#endif
