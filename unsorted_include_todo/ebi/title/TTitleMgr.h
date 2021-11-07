#ifndef _EBI_TITLE_TTITLEMGR_H
#define _EBI_TITLE_TTITLEMGR_H

struct CNode {
    virtual void _00() = 0;       // _00
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
