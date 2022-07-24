#ifndef _FINDCONDITION_H
#define _FINDCONDITION_H

/*
    __vt__13FindCondition:
    .4byte 0
    .4byte 0
    .4byte satisfy__13FindConditionFP8CollPart
*/

struct FindCondition {
	virtual void satisfy(CollPart*); // _08

	// _00 VTBL
};

#endif
