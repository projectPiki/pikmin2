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
	virtual void stop(unsigned long); // _08
	virtual void _0C() = 0;           // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
