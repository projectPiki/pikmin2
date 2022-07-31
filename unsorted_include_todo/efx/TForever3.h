#ifndef _EFX_TFOREVER3_H
#define _EFX_TFOREVER3_H

/*
    __vt__Q23efx9TForever3:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx28TSyncGroup3<Q23efx8TForever>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
    .4byte "fade__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
    .4byte "startDemoDrawOff__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
    .4byte "endDemoDrawOn__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
*/

namespace efx {
struct TSyncGroup3<efx::TForever> {
	virtual void TSyncGroup3<TForever>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup3<TForever>::forceKill();        // _0C (weak)
	virtual void TSyncGroup3<TForever>::fade();             // _10 (weak)
	virtual void TSyncGroup3<TForever>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup3<TForever>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TForever3 : public TSyncGroup3<efx::TForever> {

	TForever3(unsigned short, unsigned short, unsigned short);
};
} // namespace efx

#endif
