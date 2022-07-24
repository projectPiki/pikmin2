#ifndef _EFX_TPKBLACKDROP_H
#define _EFX_TPKBLACKDROP_H

/*
    __vt__Q23efx12TPkBlackDrop:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple3FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple3Fv
    .4byte fade__Q23efx8TSimple3Fv
*/

namespace efx {
struct TSimple3 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TPkBlackDrop : public TSimple3 {
};
} // namespace efx

#endif
