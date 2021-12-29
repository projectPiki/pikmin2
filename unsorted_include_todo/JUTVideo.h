#ifndef _JUTVIDEO_H
#define _JUTVIDEO_H

/*
    __vt__8JUTVideo:
    .4byte 0
    .4byte 0
    .4byte __dt__8JUTVideoFv
    .4byte 0
*/

struct JUTVideo {
	virtual ~JUTVideo();    // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
