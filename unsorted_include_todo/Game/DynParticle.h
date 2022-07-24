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
	virtual void constructor();            // _08 (inline)
	virtual void doAnimation();            // _0C (inline)
	virtual void doEntry();                // _10 (inline)
	virtual void doSetView(unsigned long); // _14 (inline)
	virtual void doViewCalc();             // _18 (inline)
	virtual void doSimulation(float);      // _1C (inline)
	virtual void doDirectDraw(Graphics&);  // _20 (inline)

	void getAt(int);
	DynParticle();
};
} // namespace Game

#endif
