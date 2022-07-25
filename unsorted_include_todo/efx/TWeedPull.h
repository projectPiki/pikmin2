#ifndef _EFX_TWEEDPULL_H
#define _EFX_TWEEDPULL_H

/*
    __vt__Q23efx9TWeedPull:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple3FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple3Fv
    .4byte fade__Q23efx8TSimple3Fv
*/

namespace efx {
struct TSimple3 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

namespace efx {
struct TWeedPull : public TSimple3 {
};
} // namespace efx

#endif
