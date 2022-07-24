#ifndef _J2DANMVISIBILITYFULL_H
#define _J2DANMVISIBILITYFULL_H

/*
    __vt__20J2DAnmVisibilityFull:
    .4byte 0
    .4byte 0
    .4byte __dt__20J2DAnmVisibilityFullFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C (inline)
};

struct J2DAnmVisibilityFull : public J2DAnmBase {
	virtual ~J2DAnmVisibilityFull(); // _08 (inline)
};

#endif
