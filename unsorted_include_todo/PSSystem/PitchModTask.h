#ifndef _PSSYSTEM_PITCHMODTASK_H
#define _PSSYSTEM_PITCHMODTASK_H

namespace PSSystem {
struct ModParamWithTableTask {
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct TriangleTableModTask {
	virtual void _00() = 0;                      // _00
	virtual void getTgtWithTable(unsigned char); // _04
	virtual void getTableIdxNum();               // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct PitchModTask : public ModParamWithTableTask,
                      public TriangleTableModTask {
	virtual void task(JASTrack&);                // _00
	virtual void getTgtWithTable(unsigned char); // _04
	virtual void getTableIdxNum();               // _08
	virtual void tableTask(JASTrack&, float);    // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
