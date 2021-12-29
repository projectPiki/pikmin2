#ifndef _GAME_DYNPARTICLE_H
#define _GAME_DYNPARTICLE_H

/*
    __vt__Q24Game11DynParticle:
    .4byte 0
    .4byte 0
    .4byte constructor__Q24Game11DynParticleFv
    .4byte doAnimation__Q24Game11DynParticleFv
    .4byte doEntry__Q24Game11DynParticleFv
    .4byte doSetView__Q24Game11DynParticleFUl
    .4byte doViewCalc__Q24Game11DynParticleFv
    .4byte doSimulation__Q24Game11DynParticleFf
    .4byte doDirectDraw__Q24Game11DynParticleFR8Graphics
*/

namespace Game {
struct DynParticle {
	virtual void constructor();            // _00
	virtual void doAnimation();            // _04
	virtual void doEntry();                // _08
	virtual void doSetView(unsigned long); // _0C
	virtual void doViewCalc();             // _10
	virtual void doSimulation(float);      // _14
	virtual void doDirectDraw(Graphics&);  // _18

	// _00 VTBL
};
} // namespace Game

#endif
