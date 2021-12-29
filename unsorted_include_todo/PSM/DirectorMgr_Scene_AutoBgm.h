#ifndef _PSM_DIRECTORMGR_SCENE_AUTOBGM_H
#define _PSM_DIRECTORMGR_SCENE_AUTOBGM_H

/*
        __vt__Q23PSM25DirectorMgr_Scene_AutoBgm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv
        .4byte
   newDirector__Q23PSM17DirectorMgr_SceneFUcRQ28PSSystem11DirectedBgm .4byte 0
        .4byte 0
        .4byte "@12@__dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv"
        .4byte isSlave__Q23PSM17DirectorMgr_SceneFv
        .4byte
   newPikminNumberDirector__Q23PSM25DirectorMgr_Scene_AutoBgmFiUcRQ28PSSystem11DirectedBgm
*/

namespace PSM {
struct DirectorMgr_Scene {
    virtual ~DirectorMgr_Scene();                                    // _00
    virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _04
    virtual void _08() = 0;                                          // _08
    virtual void _0C() = 0;                                          // _0C
    virtual void @12 @__dt();                                        // _10
    virtual void isSlave();                                          // _14

    // _00 VTBL
};
} // namespace PSM

namespace PSM {
struct DirectorMgr_Scene_AutoBgm : public DirectorMgr_Scene {
    virtual ~DirectorMgr_Scene_AutoBgm();                            // _00
    virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _04
    virtual void _08() = 0;                                          // _08
    virtual void _0C() = 0;                                          // _0C
    virtual void @12 @__dt();                                        // _10
    virtual void isSlave();                                          // _14
    virtual void newPikminNumberDirector(int, unsigned char,
                                         PSSystem::DirectedBgm&); // _18

    // _00 VTBL
};
} // namespace PSM

#endif
