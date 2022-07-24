#ifndef _EFX_TTANKFIRE_H
#define _EFX_TTANKFIRE_H

/*
    __vt__Q23efx9TTankFire:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx9TTankFireFPQ23efx3Arg
    .4byte forceKill__Q23efx9TTankFireFv
    .4byte fade__Q23efx9TTankFireFv
*/

namespace efx {
struct TTankFire {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

#endif
