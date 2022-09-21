#ifndef _GAME_ENEMYFUNC_H
#define _GAME_ENEMYFUNC_H

#include "Game/Piki.h"
#include "types.h"

namespace Game {
struct Creature;
struct Piki;
struct EnemyBase;
} // namespace Game

template <typename T> struct Condition;

namespace Game {
namespace EnemyFunc {

void flickStickPikmin(Game::Creature*, float, float, float, float, Condition<Game::Piki>*);
void eatPikmin(Game::EnemyBase*, Condition<Game::Piki>*);
s32 getStickPikminColorNum(Game::Creature*, int);

} // namespace EnemyFunc
} // namespace Game

#endif
