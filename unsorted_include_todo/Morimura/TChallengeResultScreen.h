#ifndef _MORIMURA_TCHALLENGERESULTSCREEN_H
#define _MORIMURA_TCHALLENGERESULTSCREEN_H

/*
    __vt__Q28Morimura22TChallengeResultScreen:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura22TChallengeResultScreenFPCcUl
    .4byte update__Q28Morimura16TChallengeScreenFv
    .4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
    .4byte createAnimPane__Q28Morimura22TChallengeResultScreenFPc
    .4byte updateBckPane__Q28Morimura22TChallengeResultScreenFv
    .4byte 0
*/

namespace Morimura {
struct TChallengeScreen {
	virtual void _08() = 0; // _08
	virtual void update();  // _0C

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TScreenBase {
	virtual void _08() = 0;                       // _08
	virtual void _0C() = 0;                       // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TChallengeResultScreen : public TChallengeScreen, public TScreenBase {
	virtual void create(const char*, unsigned long); // _08
	virtual void createAnimPane(char*);              // _14
	virtual void updateBckPane();                    // _18
	virtual void _1C() = 0;                          // _1C

	// _00 VTBL
};
} // namespace Morimura

#endif
