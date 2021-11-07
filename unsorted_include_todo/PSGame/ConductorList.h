#ifndef _PSGAME_CONDUCTORLIST_H
#define _PSGAME_CONDUCTORLIST_H

namespace PSGame {
struct ConductorList {
    virtual ~ConductorList();   // _00
    virtual void read(Stream&); // _04
    virtual void _08() = 0;     // _08
    virtual void _0C() = 0;     // _0C
    virtual void @28 @__dt();   // _10

    // _00 VTBL
};
} // namespace PSGame

#endif
