#ifndef _PSSYSTEM_TRIANGLETABLEMODTASK_H
#define _PSSYSTEM_TRIANGLETABLEMODTASK_H

/*
    __vt__Q28PSSystem20TriangleTableModTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
    .4byte getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc
    .4byte getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv
    .4byte 0
*/

namespace PSSystem {
struct ModParamWithTableTask {
	virtual void task(JASTrack&); // _08
};
} // namespace PSSystem

namespace PSSystem {
struct TriangleTableModTask : public ModParamWithTableTask {
	virtual void getTgtWithTable(unsigned char); // _0C (inline)
	virtual void getTableIdxNum();               // _10 (inline)
	virtual void _14() = 0;                      // _14
};
} // namespace PSSystem

#endif
