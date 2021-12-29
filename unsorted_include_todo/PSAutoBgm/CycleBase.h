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
	virtual void play(JASTrack*); // _00
	virtual void getCycleType();  // _04
	virtual void avoidCheck();    // _08

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
