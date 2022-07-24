#ifndef _PSSYSTEM_MODPARAMWITHTABLETASK_H
#define _PSSYSTEM_MODPARAMWITHTABLETASK_H

/*
    __vt__Q28PSSystem21ModParamWithTableTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace PSSystem {
struct ModParamWithTableTask {
	virtual void task(JASTrack&); // _08
	virtual void _0C() = 0;       // _0C
	virtual void _10() = 0;       // _10
	virtual void _14() = 0;       // _14

	// _00 VTBL
};
} // namespace PSSystem

#endif
