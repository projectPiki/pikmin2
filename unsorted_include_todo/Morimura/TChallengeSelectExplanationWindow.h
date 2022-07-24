#ifndef _MORIMURA_TCHALLENGESELECTEXPLANATIONWINDOW_H
#define _MORIMURA_TCHALLENGESELECTEXPLANATIONWINDOW_H

/*
    __vt__Q28Morimura33TChallengeSelectExplanationWindow:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura33TChallengeSelectExplanationWindowFPCcUl
    .4byte update__Q28Morimura24TSelectExplanationWindowFv
    .4byte draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
    .4byte screenScaleUp__Q28Morimura33TChallengeSelectExplanationWindowFv
*/

namespace Morimura {
struct TSelectExplanationWindow {
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10
};
} // namespace Morimura

namespace Morimura {
struct TChallengeSelectExplanationWindow : public TSelectExplanationWindow {
	virtual void create(const char*, unsigned long); // _08
	virtual void screenScaleUp();                    // _14
};
} // namespace Morimura

#endif
