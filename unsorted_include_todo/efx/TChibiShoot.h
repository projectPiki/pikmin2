#ifndef _EFX_TCHIBISHOOT_H
#define _EFX_TCHIBISHOOT_H

/*
    __vt__Q23efx11TChibiShoot:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple3Fv
    .4byte fade__Q23efx8TSimple3Fv
*/

namespace efx {
struct TSimpleMtx3 {
	virtual void create(Arg*); // _08
};
} // namespace efx

namespace efx {
struct TSimple3 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C (inline)
	virtual void fade();      // _10 (inline)
};
} // namespace efx

namespace efx {
struct TChibiShoot : public TSimpleMtx3, public TSimple3 {
};
} // namespace efx

#endif
