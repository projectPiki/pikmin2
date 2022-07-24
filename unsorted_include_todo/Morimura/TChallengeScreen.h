#ifndef _MORIMURA_TCHALLENGESCREEN_H
#define _MORIMURA_TCHALLENGESCREEN_H

/*
    __vt__Q28Morimura16TChallengeScreen:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura16TChallengeScreenFPCcUl
    .4byte update__Q28Morimura16TChallengeScreenFv
    .4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
    .4byte createAnimPane__Q28Morimura16TChallengeScreenFPc
    .4byte updateBckPane__Q28Morimura16TChallengeScreenFv
    .4byte 0
*/

namespace Morimura {
struct TScreenBase {
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10
};
} // namespace Morimura

namespace Morimura {
struct TChallengeScreen : public TScreenBase {
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void createAnimPane(char*);              // _14
	virtual void updateBckPane();                    // _18
	virtual void _1C() = 0;                          // _1C

	TChallengeScreen();
	void isRandAnimStart();
};
} // namespace Morimura

#endif
