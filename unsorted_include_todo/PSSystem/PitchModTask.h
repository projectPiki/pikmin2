#ifndef _PSSYSTEM_PITCHMODTASK_H
#define _PSSYSTEM_PITCHMODTASK_H

/*
    __vt__Q28PSSystem12PitchModTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
    .4byte getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc
    .4byte getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv
    .4byte tableTask__Q28PSSystem12PitchModTaskFR8JASTrackf
*/

namespace PSSystem {
struct ModParamWithTableTask {
	virtual void task(JASTrack&); // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct TriangleTableModTask {
	virtual void _08() = 0;                      // _08
	virtual void getTgtWithTable(unsigned char); // _0C
	virtual void getTableIdxNum();               // _10

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct PitchModTask : public ModParamWithTableTask, public TriangleTableModTask {
	virtual void tableTask(JASTrack&, float); // _14

	// _00 VTBL
};
} // namespace PSSystem

#endif
