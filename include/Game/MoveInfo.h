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
	inline MoveInfo(Sys::Sphere* sphere, Vector3f* vec, f32 a)
	    : _00(sphere)
	    , m_velocity(vec)
	    , _08(a)
	{
		_0C              = 0.0f;
		_10              = nullptr;
		m_bounceTriangle = nullptr;
		_74              = 0;
		_19              = 0;
		_18              = 0;
		m_wallTriangle   = nullptr;
		m_infoOrigin     = nullptr;
		_90              = 0;
		_94              = nullptr;
		_2C              = JMath::sincosTable_.m_table[256].first; // pi/2
		_30              = 0.6f;
		_98              = -1;
		_4C              = nullptr;
		_1A              = 0;
	}

	Sys::Sphere* _00;                                  // _00
	Vector3f* m_velocity;                              // _04
	f32 _08;                                           // _08
	f32 _0C;                                           // _0C
	Delegate2<DynCreature, Vector3f&, Vector3f&>* _10; // _10
	BaseItem* m_infoOrigin;                            // _14
	u8 _18;                                            // _18
	u8 _19;                                            // _19
	u8 _1A;                                            // _1A
	Vector3f _1C;                                      // _1C
	f32 _28;                                           // _28
	f32 _2C;                                           // _2C
	f32 _30;                                           // _30
	u8 _34[16];                                        // _34
	Sys::Triangle* m_bounceTriangle;                   // _44
	Sys::Triangle* m_wallTriangle;                     // _48
	Sys::Triangle* _4C;                                // _4C
	Vector3f m_position;                               // _50
	Vector3f m_reflectPosition;                        // _5C
	f32 _68;                                           // _60
	f32 _6C;                                           // _64
	f32 _70;                                           // _68
	u8 _74;                                            // _74
	f32 _78;                                           // _78
	f32 _7C;                                           // _7C
	f32 _80;                                           // _80
	Vector3f _84;                                      // _84
	u8 _90;                                            // _90
	TDispTriangleArray* _94;                           // _94
	int _98;                                           // _98
};
} // namespace Game

#endif
