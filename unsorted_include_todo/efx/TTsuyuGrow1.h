#ifndef _EFX_TTSUYUGROW1_H
#define _EFX_TTSUYUGROW1_H

/*
    __vt__Q23efx11TTsuyuGrow1:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimpleMtx2 {
	virtual void create(Arg*); // _00

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TSimple2 {
	virtual void _00() = 0;   // _00
	virtual void forceKill(); // _04
	virtual void fade();      // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TTsuyuGrow1 : public TSimpleMtx2, public TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
