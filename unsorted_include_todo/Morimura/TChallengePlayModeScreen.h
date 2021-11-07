#ifndef _MORIMURA_TCHALLENGEPLAYMODESCREEN_H
#define _MORIMURA_TCHALLENGEPLAYMODESCREEN_H

namespace Morimura {
struct TChallengePlayModeScreen {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
