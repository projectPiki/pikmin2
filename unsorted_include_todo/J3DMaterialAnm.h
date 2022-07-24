#ifndef _J3DMATERIALANM_H
#define _J3DMATERIALANM_H

/*
    __vt__14J3DMaterialAnm:
    .4byte 0
    .4byte 0
    .4byte __dt__14J3DMaterialAnmFv
    .4byte calc__14J3DMaterialAnmCFP11J3DMaterial
*/

struct J3DMaterialAnm {
	virtual ~J3DMaterialAnm();             // _08
	virtual void calc(J3DMaterial*) const; // _0C

	// _00 VTBL
};

#endif
