#ifndef _JUTGAMEPAD_H
#define _JUTGAMEPAD_H

struct JUTGamePad {
	virtual ~JUTGamePad();  // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
