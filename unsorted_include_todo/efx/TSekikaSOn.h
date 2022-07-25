#ifndef _EFX_TSEKIKASON_H
#define _EFX_TSEKIKASON_H

/*
    __vt__Q23efx10TSekikaSOn:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TSekikaSOnFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimple1 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

namespace efx {
struct TSekikaSOn : public TSimple1 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
