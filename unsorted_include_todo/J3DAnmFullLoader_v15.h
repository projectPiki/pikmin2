#ifndef _J3DANMFULLLOADER_V15_H
#define _J3DANMFULLLOADER_V15_H

struct J3DAnmFullLoader_v15 {
	virtual void load(const void*);                     // _00
	virtual void setResource(J3DAnmBase*, const void*); // _04
	virtual ~J3DAnmFullLoader_v15();                    // _08

	// _00 VTBL
};

#endif
