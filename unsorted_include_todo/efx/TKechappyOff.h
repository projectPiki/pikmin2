#ifndef _EFX_TKECHAPPYOFF_H
#define _EFX_TKECHAPPYOFF_H

/*
    __vt__Q23efx12TKechappyOff:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimpleMtx1 {
	virtual void create(Arg*); // _00

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TSimple1 {
	virtual void _00() = 0;   // _00
	virtual void forceKill(); // _04
	virtual void fade();      // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TKechappyOff : public TSimpleMtx1, public TSimple1 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
