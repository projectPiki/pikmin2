#ifndef _J3DANMKEYLOADER_V15_H
#define _J3DANMKEYLOADER_V15_H

/*
    __vt__19J3DAnmKeyLoader_v15:
    .4byte 0
    .4byte 0
    .4byte load__19J3DAnmKeyLoader_v15FPCv
    .4byte setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv
    .4byte __dt__19J3DAnmKeyLoader_v15Fv
*/

struct J3DAnmKeyLoader_v15 {
	virtual void load(const void*);                     // _08
	virtual void setResource(J3DAnmBase*, const void*); // _0C
	virtual ~J3DAnmKeyLoader_v15();                     // _10
};

#endif
