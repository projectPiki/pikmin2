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
};

#endif
