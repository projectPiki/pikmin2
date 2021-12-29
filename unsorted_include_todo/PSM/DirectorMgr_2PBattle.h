#ifndef _PSM_DIRECTORMGR_2PBATTLE_H
#define _PSM_DIRECTORMGR_2PBATTLE_H

/*
        __vt__Q23PSM20DirectorMgr_2PBattle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM20DirectorMgr_2PBattleFv
        .4byte
   newDirector__Q23PSM20DirectorMgr_2PBattleFUcRQ28PSSystem11DirectedBgm .4byte
   0 .4byte 0 .4byte "@12@__dt__Q23PSM20DirectorMgr_2PBattleFv"
*/

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
