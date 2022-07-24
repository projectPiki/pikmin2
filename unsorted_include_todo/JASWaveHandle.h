#ifndef _JASWAVEHANDLE_H
#define _JASWAVEHANDLE_H

/*
    __vt__13JASWaveHandle:
    .4byte 0
    .4byte 0
    .4byte __dt__13JASWaveHandleFv
    .4byte 0
    .4byte 0
*/

struct JASWaveHandle {
	virtual ~JASWaveHandle(); // _08
	virtual void _0C() = 0;   // _0C
	virtual void _10() = 0;   // _10

	// _00 VTBL
};

#endif
