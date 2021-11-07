#ifndef _PSM_DIRECTORMGR_2PBATTLE_H
#define _PSM_DIRECTORMGR_2PBATTLE_H

namespace PSM {
struct DirectorMgr_2PBattle {
    virtual ~DirectorMgr_2PBattle();                                 // _00
    virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _04
    virtual void _08() = 0;                                          // _08
    virtual void _0C() = 0;                                          // _0C
    virtual void @12 @__dt();                                        // _10

    // _00 VTBL
};
} // namespace PSM

#endif
