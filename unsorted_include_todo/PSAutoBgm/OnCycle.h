#ifndef _PSAUTOBGM_ONCYCLE_H
#define _PSAUTOBGM_ONCYCLE_H

/*
    __vt__Q29PSAutoBgm7OnCycle:
    .4byte 0
    .4byte 0
    .4byte play__Q29PSAutoBgm7OnCycleFP8JASTrack
    .4byte getCycleType__Q29PSAutoBgm7OnCycleFv
    .4byte avoidCheck__Q29PSAutoBgm7OnCycleFv
*/

namespace PSAutoBgm {
struct OnCycle {
	virtual void play(JASTrack*); // _08
	virtual void getCycleType();  // _0C (inline)
	virtual void avoidCheck();    // _10

	OnCycle();
	void setTip(JASTrack*);
	void historiesAreSameAll();
};
} // namespace PSAutoBgm

#endif
