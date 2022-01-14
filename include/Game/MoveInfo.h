#ifndef _GAME_MOVEINFO_H
#define _GAME_MOVEINFO_H

#include "IDelegate.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "types.h"

namespace Sys {
struct Triangle;
} // namespace Sys

namespace Game {
struct BaseItem;
struct DynCreature;
struct TDispTriangleArray;

struct MoveInfo {
	Sys::Sphere _00;                                  // _00
	Delegate2<DynCreature, Vector3f&, Vector3f&> _10; // _10
	BaseItem* _14;                                    // _14
	u8 _18;                                           // _18
	u8 _19;                                           // _19
	u8 _1A;                                           // _1A
	Vector3f _1C;                                     // _1C
	float _28;                                        // _28
	unkptr _2C;                                       // _2C
	float _30;                                        // _30
	u8 _34[16];                                       // _34
	Sys::Triangle* _44;                               // _44
	Sys::Triangle* _48;                               // _48
	Sys::Triangle* _4C;                               // _4C
	Vector3f _50;                                     // _50
	Vector3f _5C;                                     // _5C
	float _60;                                        // _60
	float _64;                                        // _64
	float _68;                                        // _68
	u8 _74;                                           // _74
	float _78;                                        // _78
	float _7C;                                        // _7C
	float _80;                                        // _80
	Vector3f _84;                                     // _84
	u8 _90;                                           // _90
	TDispTriangleArray* _94;                          // _94
	int _98;                                          // _98
};
} // namespace Game

#endif
