#ifndef _GAME_PELLETNUMBER_H
#define _GAME_PELLETNUMBER_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "efx/TPelkira.h"

namespace Game {
namespace PelletNumber {

struct Object : public Pellet {
    Object();

    virtual void constructor();                 // _02C
    virtual void do_onInit(CreatureInitArg*);   // _1CC
    virtual void getKind();                     // _1F4 (weak)
    virtual void changeMaterial();              // _1F8
    virtual void createKiraEffect(Vector3f&);   // _1FC

    efx::TPelkira_ver01* m_pelkira;   // _458
};

} // namespace PelletNumber
} // namespace Game

#endif