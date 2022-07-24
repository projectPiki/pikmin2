#ifndef _PSSYSTEM_SIMPLEWAITTASK_H
#define _PSSYSTEM_SIMPLEWAITTASK_H

/*
    __vt__Q28PSSystem14SimpleWaitTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem14SimpleWaitTaskFR8JASTrack
*/

namespace PSSystem {
struct SimpleWaitTask {
	virtual void task(JASTrack&); // _08
};
} // namespace PSSystem

#endif
