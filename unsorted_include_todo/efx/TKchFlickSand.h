#ifndef _EFX_TKCHFLICKSAND_H
#define _EFX_TKCHFLICKSAND_H

/*
    __vt__Q23efx13TKchFlickSand:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx13TKchFlickSandFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TKchFlickSand : public TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
