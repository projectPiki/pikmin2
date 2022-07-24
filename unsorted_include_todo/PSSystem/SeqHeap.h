#ifndef _PSSYSTEM_SEQHEAP_H
#define _PSSYSTEM_SEQHEAP_H

/*
    __vt__Q28PSSystem7SeqHeap:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem7SeqHeapFv
    .4byte loadSeqAsync__Q28PSSystem7SeqHeapFPQ28PSSystem11TaskChecker
*/

namespace PSSystem {
struct SeqHeap {
	virtual ~SeqHeap();                      // _08
	virtual void loadSeqAsync(TaskChecker*); // _0C

	void requestCallback(unsigned long, unsigned short, JAISequence*);
	void loadedCallback(unsigned long, unsigned long);
};
} // namespace PSSystem

#endif
