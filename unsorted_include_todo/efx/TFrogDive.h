#ifndef _EFX_TFROGDIVE_H
#define _EFX_TFROGDIVE_H

/*
    __vt__Q23efx9TFrogDive:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple4FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct TSimple4 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TFrogDive : public TSimple4 {
};
} // namespace efx

#endif
