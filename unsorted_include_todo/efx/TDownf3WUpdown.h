#ifndef _EFX_TDOWNF3WUPDOWN_H
#define _EFX_TDOWNF3WUPDOWN_H

/*
    __vt__Q23efx14TDownf3WUpdown:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimpleMtx1 {
	virtual void create(Arg*); // _08
};
} // namespace efx

namespace efx {
struct TSimple1 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C (inline)
	virtual void fade();      // _10 (inline)
};
} // namespace efx

namespace efx {
struct TDownf3WUpdown : public TSimpleMtx1, public TSimple1 {
};
} // namespace efx

#endif
