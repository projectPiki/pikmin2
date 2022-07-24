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
    virtual ~CNode();             // _08
    virtual void getChildCount(); // _0C

    // _00 VTBL
};

namespace ebi {
namespace title {
    struct TTitleMgr : public CNode {
        virtual ~TTitleMgr();     // _08
        virtual void _10() = 0;   // _10
        virtual void _14() = 0;   // _14
        virtual void @24 @__dt(); // _18

        // _00 VTBL
    };
} // namespace title
} // namespace ebi

#endif
