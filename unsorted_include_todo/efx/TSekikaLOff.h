#ifndef _EFX_TSEKIKALOFF_H
#define _EFX_TSEKIKALOFF_H

/*
    __vt__Q23efx11TSekikaLOff:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSekikaLOffFPQ23efx3Arg
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
struct TSekikaLOff : public TSimple1 {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

#endif
