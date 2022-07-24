#ifndef _PSSYSTEM_SEQPLAYRESERVATOR_H
#define _PSSYSTEM_SEQPLAYRESERVATOR_H

/*
    __vt__Q28PSSystem17SeqPlayReservator:
    .4byte 0
    .4byte 0
    .4byte reservatorTask__Q28PSSystem17SeqPlayReservatorFv
*/

namespace PSSystem {
struct SeqPlayReservator {
	virtual void reservatorTask(); // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
