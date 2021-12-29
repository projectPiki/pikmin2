#ifndef _JUTGAMEPAD_H
#define _JUTGAMEPAD_H

/*
    __vt__10JUTGamePad:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTGamePadFv
    .4byte 0
*/

struct JUTGamePad {
	virtual ~JUTGamePad();  // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
