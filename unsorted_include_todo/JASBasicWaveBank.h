#ifndef _JASBASICWAVEBANK_H
#define _JASBASICWAVEBANK_H

/*
    __vt__16JASBasicWaveBank:
    .4byte 0
    .4byte 0
    .4byte __dt__16JASBasicWaveBankFv
    .4byte getWaveHandle__16JASBasicWaveBankCFUl
    .4byte getWaveArc__16JASBasicWaveBankFi
*/

struct JASBasicWaveBank {
	virtual ~JASBasicWaveBank();                     // _08
	virtual void getWaveHandle(unsigned long) const; // _0C
	virtual void getWaveArc(int);                    // _10 (weak)
};

#endif
