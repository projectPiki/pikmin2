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
    virtual void _00() = 0;   // _00
    virtual void _04() = 0;   // _04
    virtual void @12 @__dt(); // _08
    virtual ~CellMgrParms();  // _0C

    // _00 VTBL
};

#endif
