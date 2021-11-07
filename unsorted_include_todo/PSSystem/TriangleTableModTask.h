#ifndef _PSSYSTEM_TRIANGLETABLEMODTASK_H
#define _PSSYSTEM_TRIANGLETABLEMODTASK_H

namespace PSSystem {
struct ModParamWithTableTask {
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct TriangleTableModTask : public ModParamWithTableTask {
	virtual void task(JASTrack&);                // _00
	virtual void getTgtWithTable(unsigned char); // _04
	virtual void getTableIdxNum();               // _08
	virtual void _0C() = 0;                      // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
