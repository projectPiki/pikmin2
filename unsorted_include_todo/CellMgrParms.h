#ifndef _CELLMGRPARMS_H
#define _CELLMGRPARMS_H

/*
    __vt__12CellMgrParms:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte "@12@__dt__12CellMgrParmsFv"
    .4byte __dt__12CellMgrParmsFv
*/

struct CellMgrParms {
	virtual void _08() = 0;  // _08
	virtual void _0C() = 0;  // _0C
	virtual ~CellMgrParms(); // _14 (weak)
};

#endif
