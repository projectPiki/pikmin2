#ifndef _PSSYSTEM_BANKRANDTASK_H
#define _PSSYSTEM_BANKRANDTASK_H

/*
    __vt__Q28PSSystem12BankRandTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
    .4byte getPreParam__Q28PSSystem12BankRandTaskFR8JASTrack
    .4byte timeTask__Q28PSSystem12BankRandTaskFR8JASTrackf
*/

namespace PSSystem {
struct ModParamWithFade {
	virtual void task(JASTrack&); // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct BankRandTask : public ModParamWithFade {
	virtual void getPreParam(JASTrack&);     // _0C
	virtual void timeTask(JASTrack&, float); // _10

	// _00 VTBL
};
} // namespace PSSystem

#endif
