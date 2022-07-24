#ifndef _PSSYSTEM_TASKBASE_H
#define _PSSYSTEM_TASKBASE_H

/*
    __vt__Q28PSSystem8TaskBase:
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace PSSystem {
struct TaskBase {
	virtual void _08() = 0; // _08

	TaskBase();
};
} // namespace PSSystem

#endif
