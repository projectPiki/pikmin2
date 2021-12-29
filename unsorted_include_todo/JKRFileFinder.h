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
	virtual ~JKRFileFinder(); // _00
	virtual void _04() = 0;   // _04

	// _00 VTBL
};

#endif
