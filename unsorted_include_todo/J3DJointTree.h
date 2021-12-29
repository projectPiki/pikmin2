#ifndef _J3DJOINTTREE_H
#define _J3DJOINTTREE_H

/*
    __vt__12J3DJointTree:
    .4byte 0
    .4byte 0
    .4byte calc__12J3DJointTreeFP12J3DMtxBufferRC3VecRA3_A4_Cf
    .4byte __dt__12J3DJointTreeFv
    .4byte 0
*/

struct J3DJointTree {
	virtual void calc(J3DMtxBuffer*, const Vec&, const float (&)[3][4]); // _00
	virtual ~J3DJointTree();                                             // _04
	virtual void _08() = 0;                                              // _08

	// _00 VTBL
};

#endif
