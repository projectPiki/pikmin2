#ifndef _PSSYSTEM_SEQSOUND_H
#define _PSSYSTEM_SEQSOUND_H

#include "JSystem/JAI/JAISequence.h"

namespace PSSystem {
/**
 * @size{0x8}
 */
struct SeqSoundBase {
	virtual void stop(unsigned long);          // _00
	virtual void stopInner(unsigned long) = 0; // _04

	// VTBL _00
	void* _04; // _04
};

/**
 * @size{0x6A8}
 */
struct SeqSound : public JAISequence, public SeqSoundBase {
	// vtable 1 (JAISequence) (no changes)
	// vtable 2 (SeqSoundBase + self)
	virtual void stop(unsigned long);      // _00
	virtual void stopInner(unsigned long); // _08

	// _00 - _6A0: JAISequence
	// _6A0 - _6A8: SeqSoundBase
};

} // namespace PSSystem

#endif
