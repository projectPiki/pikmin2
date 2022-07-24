#ifndef _EFX_TSIMPLEMTX1_H
#define _EFX_TSIMPLEMTX1_H

/*
    __vt__Q23efx11TSimpleMtx1:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimple1 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TSimpleMtx1 : public TSimple1 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
