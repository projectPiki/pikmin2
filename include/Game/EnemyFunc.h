#ifndef _GAME_ENEMYFUNC_H
#define _GAME_ENEMYFUNC_H

#include "Game/Piki.h"
#include "types.h"

namespace Game {
struct Creature;
struct EnemyBase;
struct Piki;
struct Navi;
} // namespace Game

template <typename T> struct Condition;

namespace Game {
namespace EnemyFunc {

void flickStickPikmin(Creature*, f32, f32, f32, f32, Condition<Piki>*);
Creature* getNearestPikminOrNavi(Creature*, f32, f32, f32*, Condition<Navi>*, Condition<Piki>*);
Navi* getNearestNavi(Creature*, f32, f32, f32*, Condition<Navi>*);
bool isStartFlick(EnemyBase*, bool);
void walkToTarget(EnemyBase*, Vector3f&, f32, f32, f32);
void attackNavi(Creature*, f32, f32, f32, CollPart*, Condition<Navi>*);
void eatPikmin(EnemyBase*, Condition<Piki>*);
void swallowPikmin(Creature*, f32, Condition<Piki>*);

} // namespace EnemyFunc
} // namespace Game

#endif
