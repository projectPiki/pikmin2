#ifndef _EFX_TENEMYDIVE_H
#define _EFX_TENEMYDIVE_H

/*
    __vt__Q23efx10TEnemyDive:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TEnemyDiveFPQ23efx3Arg
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
struct TEnemyDive : public TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
