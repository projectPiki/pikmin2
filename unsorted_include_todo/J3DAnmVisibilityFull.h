#ifndef _J3DANMVISIBILITYFULL_H
#define _J3DANMVISIBILITYFULL_H

/*
    __vt__20J3DAnmVisibilityFull:
    .4byte 0
    .4byte 0
    .4byte __dt__20J3DAnmVisibilityFullFv
    .4byte getKind__20J3DAnmVisibilityFullCFv
*/

struct J3DAnmVisibilityFull {
	virtual ~J3DAnmVisibilityFull(); // _00
	virtual void getKind() const;    // _04

	// _00 VTBL
};

#endif
