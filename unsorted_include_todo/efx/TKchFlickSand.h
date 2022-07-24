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
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TKchFlickSand : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
