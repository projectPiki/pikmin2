#ifndef _EFX_TENEMYDEAD_H
#define _EFX_TENEMYDEAD_H

/*
    __vt__Q23efx10TEnemyDead:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TEnemyDeadFPQ23efx3Arg
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
struct TEnemyDead : public TSimple1 {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

#endif
