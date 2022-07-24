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
	virtual void create(Arg*); // _08 (inline)
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

#endif
