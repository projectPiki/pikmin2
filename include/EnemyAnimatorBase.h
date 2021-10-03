#ifndef _ENEMY_ANIMATOR_BASE_h
#define _ENEMY_ANIMATOR_BASE_h

#include "common.h"
#include "types.h"

extern const float lbl_80517ED8;
namespace Game {
struct EnemyAnimatorBase {
    // _00 vtbl
    f32 m_animSpeed; // _04

    EnemyAnimatorBase();
    virtual ~EnemyAnimatorBase() { }

    virtual void setAnimMgr(SysShape::AnimMgr*) = 0;
    virtual u32* getAnimator()                  = 0;
    virtual u32* getAnimator(int)               = 0;

    virtual void animate(float);       // TODO
    virtual void animate(int, float);  // TODO
    virtual void resetAnimSpeed(void); // TODO
    virtual u32 getTypeID(void);       // TODO
};
} // namespace Game

#endif