#ifndef _PSSYSTEM_FLAGWAITTASK_H
#define _PSSYSTEM_FLAGWAITTASK_H

/*
    __vt__Q28PSSystem12FlagWaitTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem12FlagWaitTaskFR8JASTrack
*/

namespace PSSystem {
struct FlagWaitTask {
	virtual void task(JASTrack&); // _08 (weak)
};
} // namespace PSSystem

#endif
