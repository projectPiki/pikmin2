#ifndef _PSM_DIRECTORMGR_SCENE_AUTOBGM_H
#define _PSM_DIRECTORMGR_SCENE_AUTOBGM_H

namespace PSM {
struct DirectorMgr_Scene {
    virtual void _00() = 0;                                          // _00
    virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _04
    virtual void _08() = 0;                                          // _08
    virtual void _0C() = 0;                                          // _0C
    virtual void _10() = 0;                                          // _10
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
