#ifndef _PSSYSTEM_SEQSOUNDBASE_H
#define _PSSYSTEM_SEQSOUNDBASE_H

namespace PSSystem {
struct SeqSoundBase {
	virtual void stop(unsigned long); // _00
	virtual void _04() = 0;           // _04

	// _00 VTBL
};
} // namespace PSSystem

#endif
