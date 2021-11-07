#ifndef _CELLMGRPARMS_H
#define _CELLMGRPARMS_H

struct CellMgrParms {
    virtual void _00() = 0;   // _00
    virtual void _04() = 0;   // _04
    virtual void @12 @__dt(); // _08
    virtual ~CellMgrParms();  // _0C

    // _00 VTBL
};

#endif
