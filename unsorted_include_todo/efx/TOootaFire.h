#ifndef _EFX_TOOOTAFIRE_H
#define _EFX_TOOOTAFIRE_H

/*
    __vt__Q23efx10TOootaFire:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TOootaFireFPQ23efx3Arg
    .4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
struct TSyncGroup6<efx::TChaseMtx> {
	virtual void create(Arg*);                               // _08
	virtual void TSyncGroup6<TChaseMtx>::forceKill();        // _0C (weak)
	virtual void TSyncGroup6<TChaseMtx>::fade();             // _10 (weak)
	virtual void TSyncGroup6<TChaseMtx>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup6<TChaseMtx>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TOootaFire : public TSyncGroup6<efx::TChaseMtx> {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
