#ifndef _EFX_THDAMAHIT3_H
#define _EFX_THDAMAHIT3_H

/*
    __vt__Q23efx10THdamaHit3:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple4FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct TSimple4 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

namespace efx {
struct THdamaHit3 : public TSimple4 {
};
} // namespace efx

#endif
