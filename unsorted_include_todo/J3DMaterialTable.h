#ifndef _J3DMATERIALTABLE_H
#define _J3DMATERIALTABLE_H

/*
    __vt__16J3DMaterialTable:
    .4byte 0
    .4byte 0
    .4byte __dt__16J3DMaterialTableFv
    .4byte 0
*/

struct J3DMaterialTable {
	virtual ~J3DMaterialTable(); // _08
	virtual void _0C() = 0;      // _0C

	void clear();
	J3DMaterialTable();
	void allocTexMtxAnimator(J3DAnmTextureSRTKey*, J3DTexMtxAnm**);
	void allocTevRegAnimator(J3DAnmTevRegKey*, J3DTevColorAnm**, J3DTevKColorAnm**);
	void removeTexMtxAnimator(J3DAnmTextureSRTKey*);
	void removeTevRegAnimator(J3DAnmTevRegKey*);
	void entryMatColorAnimator(J3DAnmColor*);
	void entryTexMtxAnimator(J3DAnmTextureSRTKey*);
	void entryTevRegAnimator(J3DAnmTevRegKey*);
};

#endif
