#ifndef _MORIMURA_TCHALLENGERESULTDEMOSCREEN_H
#define _MORIMURA_TCHALLENGERESULTDEMOSCREEN_H

namespace Morimura {
struct TChallengeResultDemoScreen {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
