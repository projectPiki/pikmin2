#ifndef _EFX_TROCKWRUN_H
#define _EFX_TROCKWRUN_H

/*
    __vt__Q23efx9TRockWRun:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx9TRockWRunFPQ23efx3Arg
    .4byte forceKill__Q23efx9TRockWRunFv
    .4byte fade__Q23efx9TRockWRunFv
*/

namespace efx {
struct TRockWRun {
	virtual void create(Arg*); // _08 (weak)
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

#endif
