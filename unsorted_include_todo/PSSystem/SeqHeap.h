#ifndef _PSSYSTEM_SEQHEAP_H
#define _PSSYSTEM_SEQHEAP_H

namespace PSSystem {
struct SeqHeap {
	virtual ~SeqHeap();                      // _00
	virtual void loadSeqAsync(TaskChecker*); // _04

	// _00 VTBL
};
} // namespace PSSystem

#endif
