#ifndef _J2DANMKEYLOADER_V15_H
#define _J2DANMKEYLOADER_V15_H

struct J2DAnmKeyLoader_v15 {
	virtual void load(const void*);                     // _00
	virtual void setResource(J2DAnmBase*, const void*); // _04
	virtual ~J2DAnmKeyLoader_v15();                     // _08

	// _00 VTBL
};

#endif
