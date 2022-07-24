#ifndef _JASSIMPLEWAVEBANK_H
#define _JASSIMPLEWAVEBANK_H

/*
    __vt__17JASSimpleWaveBank:
    .4byte 0
    .4byte 0
    .4byte __dt__17JASSimpleWaveBankFv
    .4byte getWaveHandle__17JASSimpleWaveBankCFUl
    .4byte getWaveArc__17JASSimpleWaveBankFi
    .4byte 0
    .4byte 0
    .4byte onDispose__10JASWaveArcFv
    .4byte onLoadDone__10JASWaveArcFv
    .4byte onEraseDone__10JASWaveArcFv
    .4byte 0
*/

struct JASWaveArc {
	virtual ~JASWaveArc();                           // _08
	virtual void getWaveHandle(unsigned long) const; // _0C
	virtual void getWaveArc(int);                    // _10
	virtual void _14() = 0;                          // _14
	virtual void _18() = 0;                          // _18
	virtual void onDispose();                        // _1C
	virtual void onLoadDone();                       // _20
	virtual void onEraseDone();                      // _24

	// _00 VTBL
};

struct JASSimpleWaveBank : public JASWaveArc {
	virtual ~JASSimpleWaveBank();                    // _08
	virtual void getWaveHandle(unsigned long) const; // _0C
	virtual void getWaveArc(int);                    // _10
	virtual void _14() = 0;                          // _14
	virtual void _18() = 0;                          // _18
	virtual void _28() = 0;                          // _28

	// _00 VTBL
};

#endif
