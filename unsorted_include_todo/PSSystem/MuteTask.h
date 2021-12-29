#ifndef _PSSYSTEM_MUTETASK_H
#define _PSSYSTEM_MUTETASK_H

/*
    __vt__Q28PSSystem8MuteTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem8MuteTaskFR8JASTrack
*/

namespace PSSystem {
struct MuteTask {
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

#endif
