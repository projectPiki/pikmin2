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
	virtual void task(JASTrack&); // _08
};
} // namespace PSSystem

namespace PSSystem {
struct OuterParamTask : public ModParamWithFade {
	virtual void getPreParam(JASTrack&);     // _0C
	virtual void timeTask(JASTrack&, float); // _10
};
} // namespace PSSystem

#endif
