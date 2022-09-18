#ifndef _GAME_ENEMYFUNC_H
#define _GAME_ENEMYFUNC_H

#include "Game/Piki.h"
#include "types.h"

namespace Game {
struct Creature;
struct Piki;
struct Navi;
} // namespace Game

template <typename T> struct Condition;

namespace Game {
namespace EnemyFunc {

void flickStickPikmin(Creature*, f32, f32, f32, f32, Condition<Piki>*);
Creature* getNearestPikminOrNavi(Creature*, f32, f32, f32*, Condition<Navi>*, Condition<Piki>*);
Navi* getNearestNavi(Creature*, f32, f32, f32*, Condition<Navi>*);

} // namespace EnemyFunc
} // namespace Game

#endif
