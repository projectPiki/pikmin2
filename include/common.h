#ifndef _COMMON_H
#define _COMMON_H

// This file is for storing commonly used and shared class definitions,
// if a class here were to have appropriate function definitions then it
// would be found in its respective file somewhere in the filesystem.
#include "types.h"

namespace SysShape {
class AnimMgr {
};
} // namespace SysShape

extern const float lbl_80517ED8;
namespace Game {
class EnemyAnimatorBase {
    // _00 vtbl
    f32 m_animSpeed; // _04

    virtual ~EnemyAnimatorBase();

    virtual void setAnimMgr(SysShape::AnimMgr*) = 0;
    virtual u32* getAnimator()                  = 0;
    virtual u32* getAnimator(int)               = 0;

    virtual void animate(float);      // TODO
    virtual void animate(int, float); // TODO
    virtual void resetAnimSpeed(void) { m_animSpeed = lbl_80517ED8; }
    virtual u32 getTypeID(void) { return 'base'; }
};
} // namespace Game

#endif