#ifndef _PSM_DIRECTORMGR_SCENE_H
#define _PSM_DIRECTORMGR_SCENE_H

namespace PSM {
struct DirectorMgr_Scene {
    virtual ~DirectorMgr_Scene();                                    // _00
    virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _04
    virtual void _08() = 0;                                          // _08
    virtual void _0C() = 0;                                          // _0C
    virtual void @12 @__dt();                                        // _10
    virtual void isSlave();                                          // _14
    virtual void newPikminNumberDirector(int, unsigned char,
                                         PSSystem::DirectedBgm&); // _18
    virtual void _1C() = 0;                                       // _1C

    // _00 VTBL
};
} // namespace PSM

#endif
