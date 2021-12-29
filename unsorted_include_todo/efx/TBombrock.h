#ifndef _EFX_TBOMBROCK_H
#define _EFX_TBOMBROCK_H

/*
    __vt__Q23efx9TBombrock:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx9TBombrockFPQ23efx3Arg
    .4byte forceKill__Q23efx9TBombrockFv
    .4byte fade__Q23efx9TBombrockFv
*/

namespace efx {
struct TBombrock {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
