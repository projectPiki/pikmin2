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
	virtual ~J3DMaterialTable(); // _00
	virtual void _04() = 0;      // _04

	// _00 VTBL
};

#endif
