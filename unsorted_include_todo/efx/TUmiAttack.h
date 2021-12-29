#ifndef _EFX_TUMIATTACK_H
#define _EFX_TUMIATTACK_H

/*
    __vt__Q23efx10TUmiAttack:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TUmiAttackFPQ23efx3Arg
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
struct TUmiAttack : public TSimple1 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
