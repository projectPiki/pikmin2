#ifndef _PSSYSTEM_IDMASKTASK_H
#define _PSSYSTEM_IDMASKTASK_H

/*
    __vt__Q28PSSystem10IdMaskTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem10IdMaskTaskFR8JASTrack
*/

namespace PSSystem {
struct IdMaskTask {
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

#endif
