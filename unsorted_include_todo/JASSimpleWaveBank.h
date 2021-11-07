#ifndef _JASSIMPLEWAVEBANK_H
#define _JASSIMPLEWAVEBANK_H

struct JASWaveArc {
	virtual void _00() = 0;     // _00
	virtual void _04() = 0;     // _04
	virtual void _08() = 0;     // _08
	virtual void _0C() = 0;     // _0C
	virtual void _10() = 0;     // _10
	virtual void onDispose();   // _14
	virtual void onLoadDone();  // _18
	virtual void onEraseDone(); // _1C

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
