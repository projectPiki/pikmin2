#ifndef _JASDRUMSET_H
#define _JASDRUMSET_H

/*
    __vt__10JASDrumSet:
    .4byte 0
    .4byte 0
    .4byte __dt__10JASDrumSetFv
    .4byte getParam__10JASDrumSetCFiiP12JASInstParam
    .4byte getType__10JASDrumSetCFv
    .4byte 0
*/

struct JASDrumSet {
	virtual ~JASDrumSet();                                // _08
	virtual void getParam(int, int, JASInstParam*) const; // _0C
	virtual void getType() const;                         // _10
	virtual void _14() = 0;                               // _14

	// _00 VTBL
};

#endif
