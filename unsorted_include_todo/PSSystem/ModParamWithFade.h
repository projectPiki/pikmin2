#ifndef _PSSYSTEM_MODPARAMWITHFADE_H
#define _PSSYSTEM_MODPARAMWITHFADE_H

/*
    __vt__Q28PSSystem16ModParamWithFade:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
    .4byte 0
    .4byte 0
*/

namespace PSSystem {
struct ModParamWithFade {
	virtual void task(JASTrack&); // _08
	virtual void _0C() = 0;       // _0C
	virtual void _10() = 0;       // _10
};
} // namespace PSSystem

#endif
