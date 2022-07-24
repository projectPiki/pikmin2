#ifndef _PSSYSTEM_PITCHRESETTASK_H
#define _PSSYSTEM_PITCHRESETTASK_H

/*
    __vt__Q28PSSystem14PitchResetTask:
    .4byte 0
    .4byte 0
    .4byte task__Q28PSSystem14PitchResetTaskFR8JASTrack
*/

namespace PSSystem {
struct PitchResetTask {
	virtual void task(JASTrack&); // _08 (inline)
};
} // namespace PSSystem

#endif
