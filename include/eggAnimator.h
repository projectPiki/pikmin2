#ifndef _EGG_ANIMATOR_H
#define _EGG_ANIMATOR_H

#include "common.h"
#include "types.h"

namespace Game {
namespace Egg {

    struct ProperAnimator : public EnemyAnimatorBase {
        virtual ~ProperAnimator();
        virtual void setAnimMgr(SysShape::AnimMgr*);
        virtual u32* getAnimator();
        virtual u32* getAnimator(int);

        u8 m_word8;                   // _08
        u8 m_wordC;                   // _0C
        u32 m_animator;               // _10
        u32 m_word14;                 // _14
        u32 m_word18;                 // _18
        u32 m_word1C;                 // _1C
        SysShape::AnimMgr* m_manager; // _20
    };

} // namespace Egg
} // namespace Game

#endif