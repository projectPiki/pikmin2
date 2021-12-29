#ifndef _EFX_TDANGOTURN_H
#define _EFX_TDANGOTURN_H

/*
    __vt__Q23efx10TDangoTurn:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TDangoTurnFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TDangoTurn : public TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
