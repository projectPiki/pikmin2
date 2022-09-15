#ifndef _J3DMODELDATA_H
#define _J3DMODELDATA_H

/*
    __vt__12J3DModelData:
    .4byte 0
    .4byte 0
    .4byte __dt__12J3DModelDataFv
*/

struct J3DModelData {
	virtual ~J3DModelData(); // _08 (weak)

	void clear();
	J3DModelData();
	void newSharedDisplayList(unsigned long);
	void indexToPtr();
	void makeSharedDL();
	void simpleCalcMaterial(unsigned short, float (*)[4]);
	void syncJ3DSysFlags() const;
};

#endif
