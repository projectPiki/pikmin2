#ifndef _PSAUTOBGM_OFFCYCLE_H
#define _PSAUTOBGM_OFFCYCLE_H

namespace PSAutoBgm {
struct CycleBase {
	virtual void play(JASTrack*); // _00
	virtual void getCycleType();  // _04
	virtual void avoidCheck();    // _08

	// _00 VTBL
};
} // namespace PSAutoBgm

namespace PSAutoBgm {
struct OffCycle : public CycleBase {
	virtual void play(JASTrack*); // _00
	virtual void getCycleType();  // _04
	virtual void avoidCheck();    // _08

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
