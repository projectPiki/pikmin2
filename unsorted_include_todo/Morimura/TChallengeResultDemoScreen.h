#ifndef _MORIMURA_TCHALLENGERESULTDEMOSCREEN_H
#define _MORIMURA_TCHALLENGERESULTDEMOSCREEN_H

/*
    __vt__Q28Morimura26TChallengeResultDemoScreen:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura26TChallengeResultDemoScreenFPCcUl
    .4byte update__Q28Morimura26TChallengeResultDemoScreenFv
    .4byte draw__Q28Morimura26TChallengeResultDemoScreenFR8GraphicsP13J2DPerspGraph
*/

namespace Morimura {
struct TChallengeResultDemoScreen {
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10
};
} // namespace Morimura

#endif
