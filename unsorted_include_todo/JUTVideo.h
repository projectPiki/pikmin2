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
	virtual ~JUTVideo();    // _08
	virtual void _0C() = 0; // _0C
};

#endif
