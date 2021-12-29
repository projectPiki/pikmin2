#ifndef _PSSYSTEM_SEQSOUNDBASE_H
#define _PSSYSTEM_SEQSOUNDBASE_H

/*
    __vt__Q28PSSystem12SeqSoundBase:
    .4byte 0
    .4byte 0
    .4byte stop__Q28PSSystem12SeqSoundBaseFUl
    .4byte 0
*/

namespace PSSystem {
struct SeqSoundBase {
	virtual void stop(unsigned long); // _00
	virtual void _04() = 0;           // _04

	// _00 VTBL
};
} // namespace PSSystem

#endif
