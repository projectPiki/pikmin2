#ifndef _EFX_TDANGOCRASH_H
#define _EFX_TDANGOCRASH_H

/*
    __vt__Q23efx11TDangoCrash:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TDangoCrashFPQ23efx3Arg
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
struct TDangoCrash : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
