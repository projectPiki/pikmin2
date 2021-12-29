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
	virtual ~JASWaveArc();                           // _00
	virtual void getWaveHandle(unsigned long) const; // _04
	virtual void getWaveArc(int);                    // _08
	virtual void _0C() = 0;                          // _0C
	virtual void _10() = 0;                          // _10
	virtual void onDispose();                        // _14
	virtual void onLoadDone();                       // _18
	virtual void onEraseDone();                      // _1C

	// _00 VTBL
};

struct JASSimpleWaveBank : public JASWaveArc {
	virtual ~JASSimpleWaveBank();                    // _00
	virtual void getWaveHandle(unsigned long) const; // _04
	virtual void getWaveArc(int);                    // _08
	virtual void _0C() = 0;                          // _0C
	virtual void _10() = 0;                          // _10
	virtual void onDispose();                        // _14
	virtual void onLoadDone();                       // _18
	virtual void onEraseDone();                      // _1C
	virtual void _20() = 0;                          // _20

	// _00 VTBL
};

#endif
