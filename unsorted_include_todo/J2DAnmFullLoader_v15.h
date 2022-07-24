#ifndef _J2DANMFULLLOADER_V15_H
#define _J2DANMFULLLOADER_V15_H

/*
    __vt__20J2DAnmFullLoader_v15:
    .4byte 0
    .4byte 0
    .4byte load__20J2DAnmFullLoader_v15FPCv
    .4byte setResource__20J2DAnmFullLoader_v15FP10J2DAnmBasePCv
    .4byte __dt__20J2DAnmFullLoader_v15Fv
*/

struct J2DAnmFullLoader_v15 {
	virtual void load(const void*);                     // _08
	virtual void setResource(J2DAnmBase*, const void*); // _0C
	virtual ~J2DAnmFullLoader_v15();                    // _10

	// _00 VTBL
};

#endif
