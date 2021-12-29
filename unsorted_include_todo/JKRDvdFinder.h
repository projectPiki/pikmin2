#ifndef _JKRDVDFINDER_H
#define _JKRDVDFINDER_H

/*
    __vt__12JKRDvdFinder:
    .4byte 0
    .4byte 0
    .4byte __dt__12JKRDvdFinderFv
    .4byte findNextFile__12JKRDvdFinderFv
*/

struct JKRDvdFinder {
	virtual ~JKRDvdFinder();     // _00
	virtual void findNextFile(); // _04

	// _00 VTBL
};

#endif
