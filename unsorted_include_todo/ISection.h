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
*/

struct ISection {
	virtual ~ISection();    // _08 (weak)
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};

#endif
