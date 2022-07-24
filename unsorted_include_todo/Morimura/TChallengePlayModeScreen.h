#ifndef _MORIMURA_TCHALLENGEPLAYMODESCREEN_H
#define _MORIMURA_TCHALLENGEPLAYMODESCREEN_H

/*
    __vt__Q28Morimura24TChallengePlayModeScreen:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura24TChallengePlayModeScreenFPCcUl
    .4byte update__Q28Morimura24TChallengePlayModeScreenFv
    .4byte draw__Q28Morimura24TChallengePlayModeScreenFR8GraphicsP13J2DPerspGraph
*/

namespace Morimura {
struct TChallengePlayModeScreen {
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10

	TChallengePlayModeScreen();
};
} // namespace Morimura

#endif
