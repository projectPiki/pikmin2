#ifndef _ISECTION_H
#define _ISECTION_H

/*
    __vt__8ISection:
    .4byte 0
    .4byte 0
    .4byte __dt__8ISectionFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct ISection {
	virtual ~ISection();    // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10

	// _00 VTBL
};

#endif
