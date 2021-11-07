#ifndef _MORIMURA_TCHALLENGESELECTEXPLANATIONWINDOW_H
#define _MORIMURA_TCHALLENGESELECTEXPLANATIONWINDOW_H

namespace Morimura {
struct TSelectExplanationWindow {
	virtual void _00() = 0;                       // _00
	virtual void update();                        // _04
	virtual void draw(Graphics&, J2DPerspGraph*); // _08

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TChallengeSelectExplanationWindow : public TSelectExplanationWindow {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08
	virtual void screenScaleUp();                    // _0C

	// _00 VTBL
};
} // namespace Morimura

#endif
