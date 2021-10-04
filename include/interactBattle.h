#ifndef _interactBattle_H
#define _interactBattle_H

#include "types.h"

namespace Game {
struct Interaction__vt {
    void* pointer;
    void* pointer2;
    bool (*actCommon)(void*, void*);
    bool (*actPiki)(void*, struct Piki*);
    bool (*actNavi)(void*, struct Navi*);
    bool (*actEnemy)(void*, struct EnemyBase*);
    bool (*actPellet)(void*, struct Pellet*);
    bool (*actOnyon)(void*, struct Onyon*);
    bool (*actItem)(void*, struct BaseItem*);
};

struct Creature__vt {
    u8 filler[0x1C];
    bool (*isNavi)(void*); // _1C
    u8 filler2[0x7C - 0x20];
    bool (*isTeki)(void*); // _7C
};

struct Creature {
    Creature__vt* m_vtbl;

    char filler[376];

    bool isStickTo();
    void endStick();
};

struct Navi {
    char filler[800];
};
struct Piki {
    char filler[712];
};
struct BaseItem {
    char filler[472];
};
struct Pellet {
    char filler[1112];
};
struct Onyon {
    char filler[608];
};
struct EnemyBase {
    char filler[700];
};
class InteractFlick {
public:
    Interaction__vt* __vt;
    Creature* pCreature;
    float knockback;
    float damage;
    float dunno;

private:
    bool actCommon(Creature*);
    bool actNavi(Navi*);
    bool actPiki(Piki*);
};
class InteractAttack {
public:
    Interaction__vt* __vt;
    Creature* pCreature;
    float unk1;
    float unk2;

private:
    bool actCommon(Creature*);
    bool actNavi(Navi*);
    bool actEnemy(EnemyBase*);
    bool actItem(BaseItem*);
};

} // namespace Game
#endif
