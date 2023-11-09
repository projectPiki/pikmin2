#ifndef _PSSYSTEM_SEQSOUND_H
#define _PSSYSTEM_SEQSOUND_H

#include "JSystem/JAudio/JAI/JAISequence.h"

namespace PSSystem {
struct SeqBase;

/**
 * @size{0x8}
 */
struct SeqSoundBase {
	SeqSoundBase()
	    : mSeq(nullptr)
	{
	}

	virtual void stop(u32);          // _08
	virtual void stopInner(u32) = 0; // _0C

	// VTBL _00
	SeqBase* mSeq; // _04
};

/**
 * @size{0x6A8}
 */
struct SeqSound : public JAISequence, public SeqSoundBase {
	SeqSound();

	// vtable 1 (JAISequence) (no changes) 	- _08-_D0
	// vtable 2 (SeqSoundBase + self)		- _DC-_E0 (thunk)
	virtual void stopInner(u32); // _E4 (weak)

	// _00 - _6A0: JAISequence
	// _6A0 - _6A8: SeqSoundBase
};

} // namespace PSSystem

#endif
