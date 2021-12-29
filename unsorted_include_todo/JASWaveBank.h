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
	virtual ~JASWaveBank(); // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};

#endif
