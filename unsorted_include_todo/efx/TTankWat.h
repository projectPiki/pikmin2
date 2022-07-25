#ifndef _EFX_TTANKWAT_H
#define _EFX_TTANKWAT_H

/*
    __vt__Q23efx8TTankWat:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TTankWatFPQ23efx3Arg
    .4byte forceKill__Q23efx8TTankWatFv
    .4byte fade__Q23efx8TTankWatFv
    .4byte startDemoDrawOff__Q23efx8TTankWatFv
    .4byte endDemoDrawOn__Q23efx8TTankWatFv
*/

namespace efx {
struct TTankWat {
	virtual void create(Arg*);       // _08
	virtual void forceKill();        // _0C (weak)
	virtual void fade();             // _10 (weak)
	virtual void startDemoDrawOff(); // _14 (weak)
	virtual void endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

#endif
