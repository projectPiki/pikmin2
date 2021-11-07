#ifndef _J2DANMFULLLOADER_V15_H
#define _J2DANMFULLLOADER_V15_H

struct J2DAnmFullLoader_v15 {
	virtual void load(const void*);                     // _00
	virtual void setResource(J2DAnmBase*, const void*); // _04
	virtual ~J2DAnmFullLoader_v15();                    // _08

	// _00 VTBL
};

#endif
