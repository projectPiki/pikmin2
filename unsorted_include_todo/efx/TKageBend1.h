#ifndef _EFX_TKAGEBEND1_H
#define _EFX_TKAGEBEND1_H

/*
    __vt__Q23efx10TKageBend1:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimpleMtx2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

namespace efx {
struct TSimple2 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C (weak)
	virtual void fade();      // _10 (weak)
};
} // namespace efx

namespace efx {
struct TKageBend1 : public TSimpleMtx2, public TSimple2 {
};
} // namespace efx

#endif
