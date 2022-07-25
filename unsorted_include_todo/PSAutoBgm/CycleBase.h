#ifndef _PSAUTOBGM_CYCLEBASE_H
#define _PSAUTOBGM_CYCLEBASE_H

/*
    __vt__Q29PSAutoBgm9CycleBase:
    .4byte 0
    .4byte 0
    .4byte play__Q29PSAutoBgm9CycleBaseFP8JASTrack
    .4byte getCycleType__Q29PSAutoBgm9CycleBaseFv
    .4byte avoidCheck__Q29PSAutoBgm9CycleBaseFv
*/

namespace PSAutoBgm {
struct CycleBase {
	virtual void play(JASTrack*); // _08
	virtual void getCycleType();  // _0C (weak)
	virtual void avoidCheck();    // _10 (weak)

	void cycleTop(JASTrack*);
	void checkCloser(JASTrack*);
};
} // namespace PSAutoBgm

#endif
