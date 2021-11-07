#ifndef _J3DJOINTTREE_H
#define _J3DJOINTTREE_H

struct J3DJointTree {
	virtual void calc(J3DMtxBuffer*, const Vec&, const float (&)[3][4]); // _00
	virtual ~J3DJointTree();                                             // _04
	virtual void _08() = 0;                                              // _08

	// _00 VTBL
};

#endif
