#ifndef _JUTCONSOLE_H
#define _JUTCONSOLE_H

/*
    __vt__10JUTConsole:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTConsoleFv
    .4byte 0
*/

struct JUTConsole {
	virtual ~JUTConsole();  // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
