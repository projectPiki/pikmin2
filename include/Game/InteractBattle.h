#ifndef _GAME_INTERACTBATTLE_H
#define _GAME_INTERACTBATTLE_H

#include "types.h"

namespace Game {
struct Piki;
struct Navi;
struct EnemyBase;
struct Pellet;
struct Onyon;
struct BaseItem;
struct Creature;

struct Interaction__vt {
    void* pointer;
    void* pointer2;
    bool (*actCommon)(void*, void*);
    bool (*actPiki)(void*, Piki*);
    bool (*actNavi)(void*, Navi*);
    bool (*actEnemy)(void*, EnemyBase*);
    bool (*actPellet)(void*, Pellet*);
    bool (*actOnyon)(void*, Onyon*);
    bool (*actItem)(void*, BaseItem*);
};

struct InteractFlick {
    bool actCommon(Creature*);
    bool actNavi(Navi*);
    bool actPiki(Piki*);

    Interaction__vt* m_vtbl; // _00
    Creature* m_creature;    // _04
    f32 m_knockback;         // _08
    f32 m_damage;            // _0C
    f32 _10;                 // _10
};

struct InteractAttack {
    bool actCommon(Creature*);
    bool actNavi(Navi*);
    bool actEnemy(EnemyBase*);
    bool actItem(BaseItem*);

    Interaction__vt* m_vtbl; // _00
    Creature* m_creature;    // _04
    f32 _08;                 // _08
    f32 _0C;                 // _0C
};
} // namespace Game
#endif
