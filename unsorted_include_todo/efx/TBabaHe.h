#ifndef _EFX_TBABAHE_H
#define _EFX_TBABAHE_H

/*
    __vt__Q23efx7TBabaHe:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx7TBabaHeFPQ23efx3Arg
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
struct TBabaHe : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
