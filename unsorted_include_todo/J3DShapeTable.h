#ifndef _J3DSHAPETABLE_H
#define _J3DSHAPETABLE_H

/*
    __vt__13J3DShapeTable:
    .4byte 0
    .4byte 0
    .4byte __dt__13J3DShapeTableFv
*/

struct J3DShapeTable {
	virtual ~J3DShapeTable(); // _08 (weak)

	void initShapeNodes(J3DDrawMtxData*, J3DVertexData*);
	void sortVcdVatCmd();
};

#endif
