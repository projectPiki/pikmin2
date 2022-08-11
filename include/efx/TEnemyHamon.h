#ifndef _EFX_TENEMYHAMON_H
#define _EFX_TENEMYHAMON_H

#include "types.h"
#include "efx/TBase.h"
#include "efx/TChasePos.h"
#include "Vector3.h"
#include "Game/enemyInfo.h"

namespace efx {

/**
 * @size = 0x14
 */
struct TEnemyHamonM : public TChasePos {
    virtual bool create(Arg*);      // _08
    virtual void forceKill();       // _0C (weak)
    virtual void fade();            // _10 (weak)

    // _00      = VTABLE
    // _04-_14  = TChasePos
};

/**
 * @size = 0x14
 */
struct TEnemyHamonMInd : public TChasePos {
    virtual bool create(Arg*);      // _08
    virtual ~TEnemyHamonMInd();     // _48 (weak, thunk at _1C)

    // _00      = VTABLE
    // _04-_14  = TChasePos
};

/**
 * @size = 0x2C
 */
struct TEnemyHamonChasePos : public TBase {
    virtual bool create(Arg*);      // _08
    virtual void forceKill();       // _0C (weak)
    virtual void fade();            // _10 (weak)

    // _00      = VTABLE
    TEnemyHamonM m_hamonM;          // _04
    TEnemyHamonMInd m_hamonMInd;    // _18
};

/**
 * @size = 0x48
 */
struct TEnemyHamon : public TBase {
    virtual bool create(Arg*);      // _08
    virtual void forceKill();       // _0C (weak)
    virtual void fade();            // _10 (weak)

    void update(Vector3f&);
    void getLimitDepth_();

    // _00      = VTABLE
    TEnemyHamonChasePos m_hamonChasePos;    // _04
    u32 _30;                                // _30 - unknown
    Vector3f _34;                           // _34
    u8 _40[0x4];                            // _40 - unknown
    Game::EnemyTypeID m_enemyID;            // _44
};

}



#endif