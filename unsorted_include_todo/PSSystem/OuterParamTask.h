#ifndef _PSSYSTEM_OUTERPARAMTASK_H
#define _PSSYSTEM_OUTERPARAMTASK_H

/*
    __vt__Q28PSSystem14OuterParamTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
    .4byte getPreParam__Q28PSSystem14OuterParamTaskFR8JASTrack
    .4byte timeTask__Q28PSSystem14OuterParamTaskFR8JASTrackf
*/

namespace PSSystem {
struct ModParamWithFade {
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct OuterParamTask : public ModParamWithFade {
	virtual void task(JASTrack&);            // _00
	virtual void getPreParam(JASTrack&);     // _04
	virtual void timeTask(JASTrack&, float); // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
