#ifndef _PSAUTOBGM_ONCYCLE_H
#define _PSAUTOBGM_ONCYCLE_H

namespace PSAutoBgm {
struct OnCycle {
	virtual void play(JASTrack*); // _00
	virtual void getCycleType();  // _04
	virtual void avoidCheck();    // _08

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
