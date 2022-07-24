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
    virtual ~DirectorMgr_Scene(); // _08 (inline)
    virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _0C
    virtual void _10() = 0;                                          // _10
    virtual void _14() = 0;                                          // _14
    virtual void @12 @__dt(); // _18 (inline)
    virtual void isSlave();   // _1C (inline)
};
} // namespace PSM

namespace PSM {
struct DirectorMgr_Scene_AutoBgm : public DirectorMgr_Scene {
    virtual ~DirectorMgr_Scene_AutoBgm(); // _08 (inline)
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void @12 @__dt();             // _18 (inline)
    virtual void newPikminNumberDirector(int, unsigned char,
                                         PSSystem::DirectedBgm&); // _20
};
} // namespace PSM

#endif
