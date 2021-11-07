#ifndef _PSAUTOBGM_CYCLEBASE_H
#define _PSAUTOBGM_CYCLEBASE_H

namespace PSAutoBgm {
struct CycleBase {
	virtual void play(JASTrack*); // _00
	virtual void getCycleType();  // _04
	virtual void avoidCheck();    // _08

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
