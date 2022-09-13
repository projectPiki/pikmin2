#ifndef _JKRFILEFINDER_H
#define _JKRFILEFINDER_H

/*
    __vt__13JKRFileFinder:
    .4byte 0
    .4byte 0
    .4byte __dt__13JKRFileFinderFv
    .4byte 0
*/

struct JKRFileFinder {
	virtual ~JKRFileFinder(); // _08 (weak)
	virtual void _0C() = 0;   // _0C
};

#endif
