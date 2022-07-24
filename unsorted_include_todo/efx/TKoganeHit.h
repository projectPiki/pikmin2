#ifndef _EFX_TKOGANEHIT_H
#define _EFX_TKOGANEHIT_H

/*
    __vt__Q23efx10TKoganeHit:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TKoganeHitFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimple2 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TKoganeHit : public TSimple2 {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

#endif
