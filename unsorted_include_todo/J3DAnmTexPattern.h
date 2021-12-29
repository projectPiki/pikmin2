#ifndef _J3DANMTEXPATTERN_H
#define _J3DANMTEXPATTERN_H

/*
    __vt__16J3DAnmTexPattern:
    .4byte 0
    .4byte 0
    .4byte __dt__16J3DAnmTexPatternFv
    .4byte getKind__16J3DAnmTexPatternCFv
*/

struct J3DAnmTexPattern {
	virtual ~J3DAnmTexPattern();  // _00
	virtual void getKind() const; // _04

	// _00 VTBL
};

#endif
