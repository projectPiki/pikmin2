#ifndef _J3DMATERIALANM_H
#define _J3DMATERIALANM_H

struct J3DMaterialAnm {
	virtual ~J3DMaterialAnm();             // _00
	virtual void calc(J3DMaterial*) const; // _04

	// _00 VTBL
};

#endif
