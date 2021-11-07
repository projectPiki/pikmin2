#ifndef _PSSYSTEM_MODPARAMWITHFADE_H
#define _PSSYSTEM_MODPARAMWITHFADE_H

namespace PSSystem {
struct ModParamWithFade {
	virtual void task(JASTrack&); // _00
	virtual void _04() = 0;       // _04
	virtual void _08() = 0;       // _08
	virtual void _0C() = 0;       // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
