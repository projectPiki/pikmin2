#ifndef _JKRARCFINDER_H
#define _JKRARCFINDER_H

/*
    __vt__12JKRArcFinder:
    .4byte 0
    .4byte 0
    .4byte __dt__12JKRArcFinderFv
    .4byte findNextFile__12JKRArcFinderFv
*/

struct JKRArcFinder {
	virtual ~JKRArcFinder();     // _08 (weak)
	virtual void findNextFile(); // _0C

	JKRArcFinder(JKRArchive*, long, long);
};

#endif
