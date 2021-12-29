#ifndef _EBI_TITLE_TTITLEMGR_H
#define _EBI_TITLE_TTITLEMGR_H

/*
        __vt__Q33ebi5title9TTitleMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q33ebi5title9TTitleMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q33ebi5title9TTitleMgrFv"
*/

struct CNode {
    virtual ~CNode();             // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

namespace ebi {
namespace title {
    struct TTitleMgr : public CNode {
        virtual ~TTitleMgr();         // _00
        virtual void getChildCount(); // _04
        virtual void _08() = 0;       // _08
        virtual void _0C() = 0;       // _0C
        virtual void @24 @__dt();     // _10

        // _00 VTBL
    };
} // namespace title
} // namespace ebi

#endif
