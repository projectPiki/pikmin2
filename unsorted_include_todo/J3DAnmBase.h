#ifndef _J3DANMBASE_H
#define _J3DANMBASE_H

/*
    __vt__10J3DAnmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__10J3DAnmBaseFv
    .4byte 0
*/

struct J3DAnmBase {
	virtual ~J3DAnmBase();  // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
