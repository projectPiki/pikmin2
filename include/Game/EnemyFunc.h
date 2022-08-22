#ifndef _GAME_ENEMYFUNC_H
#define _GAME_ENEMYFUNC_H

#include "Game/Piki.h"
#include "types.h"

namespace Game {
struct Creature;
struct Piki;
} // namespace Game

template <typename T> struct Condition;

namespace Game {
namespace EnemyFunc {

void flickStickPikmin(Game::Creature*, float, float, float, float, Condition<Game::Piki>*);

} // namespace EnemyFunc
} // namespace Game

#endif
