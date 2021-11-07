#ifndef _JASBASICWAVEBANK_H
#define _JASBASICWAVEBANK_H

struct JASBasicWaveBank {
	virtual ~JASBasicWaveBank();                     // _00
	virtual void getWaveHandle(unsigned long) const; // _04
	virtual void getWaveArc(int);                    // _08

	// _00 VTBL
};

#endif
