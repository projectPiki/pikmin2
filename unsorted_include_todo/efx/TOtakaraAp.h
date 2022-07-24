#ifndef _EFX_TOTAKARAAP_H
#define _EFX_TOTAKARAAP_H

/*
    __vt__Q23efx10TOtakaraAp:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TOtakaraApFPQ23efx3Arg
    .4byte forceKill__Q23efx10TOtakaraApFv
    .4byte fade__Q23efx10TOtakaraApFv
*/

namespace efx {
struct TOtakaraAp {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

#endif
