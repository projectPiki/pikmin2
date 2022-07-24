#ifndef _PSSYSTEM_SEQPAUSEOFFRESERVATOR_H
#define _PSSYSTEM_SEQPAUSEOFFRESERVATOR_H

/*
    __vt__Q28PSSystem21SeqPauseOffReservator:
    .4byte 0
    .4byte 0
    .4byte reservatorTask__Q28PSSystem21SeqPauseOffReservatorFv
*/

namespace PSSystem {
struct SeqPauseOffReservator {
	virtual void reservatorTask(); // _08
};
} // namespace PSSystem

#endif
