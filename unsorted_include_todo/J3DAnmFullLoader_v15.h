#ifndef _J3DANMFULLLOADER_V15_H
#define _J3DANMFULLLOADER_V15_H

/*
    __vt__20J3DAnmFullLoader_v15:
    .4byte 0
    .4byte 0
    .4byte load__20J3DAnmFullLoader_v15FPCv
    .4byte setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv
    .4byte __dt__20J3DAnmFullLoader_v15Fv
*/

struct J3DAnmFullLoader_v15 {
	virtual void load(const void*);                     // _08
	virtual void setResource(J3DAnmBase*, const void*); // _0C
	virtual ~J3DAnmFullLoader_v15();                    // _10
};

#endif
