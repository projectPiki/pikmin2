#ifndef _EFX_TOTAKARAAPS_H
#define _EFX_TOTAKARAAPS_H

/*
    __vt__Q23efx11TOtakaraApS:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TOtakaraApSFPQ23efx3Arg
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
struct TOtakaraApS : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
