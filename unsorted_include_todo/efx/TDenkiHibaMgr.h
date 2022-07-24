#ifndef _EFX_TDENKIHIBAMGR_H
#define _EFX_TDENKIHIBAMGR_H

/*
    __vt__Q23efx13TDenkiHibaMgr:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx13TDenkiHibaMgrFPQ23efx3Arg
    .4byte forceKill__Q23efx13TDenkiHibaMgrFv
    .4byte fade__Q23efx13TDenkiHibaMgrFv
*/

namespace efx {
struct TDenkiHibaMgr {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	void createHiba(int);
	void setRateLOD(int);
};
} // namespace efx

#endif
