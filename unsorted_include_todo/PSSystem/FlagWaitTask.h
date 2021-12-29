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
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

#endif
