#ifndef _EFX_TOTAKARADIVE_H
#define _EFX_TOTAKARADIVE_H

/*
    __vt__Q23efx12TOtakaraDive:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx12TOtakaraDiveFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple3Fv
    .4byte fade__Q23efx8TSimple3Fv
*/

namespace efx {
struct TSimple3 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TOtakaraDive : public TSimple3 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
