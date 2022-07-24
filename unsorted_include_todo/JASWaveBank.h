#ifndef _JASWAVEBANK_H
#define _JASWAVEBANK_H

/*
    __vt__11JASWaveBank:
    .4byte 0
    .4byte 0
    .4byte __dt__11JASWaveBankFv
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JASWaveBank {
	virtual ~JASWaveBank(); // _08 (inline)
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};

#endif
