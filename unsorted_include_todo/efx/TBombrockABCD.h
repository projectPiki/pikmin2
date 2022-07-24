#ifndef _EFX_TBOMBROCKABCD_H
#define _EFX_TBOMBROCKABCD_H

/*
    __vt__Q23efx13TBombrockABCD:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple4FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct TSimple4 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TBombrockABCD : public TSimple4 {

	// _00 VTBL
};
} // namespace efx

#endif
