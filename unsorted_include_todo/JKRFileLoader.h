#ifndef _JKRFILELOADER_H
#define _JKRFILELOADER_H

struct JKRFileLoader {
	virtual ~JKRFileLoader(); // _00
	virtual void unmount();   // _04
	virtual void _08() = 0;   // _08
	virtual void _0C() = 0;   // _0C
	virtual void _10() = 0;   // _10
	virtual void _14() = 0;   // _14
	virtual void _18() = 0;   // _18
	virtual void _1C() = 0;   // _1C
	virtual void _20() = 0;   // _20
	virtual void _24() = 0;   // _24
	virtual void _28() = 0;   // _28
	virtual void _2C() = 0;   // _2C
	virtual void _30() = 0;   // _30
	virtual void _34() = 0;   // _34

	// _00 VTBL
};

#endif
