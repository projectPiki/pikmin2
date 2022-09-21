#ifndef _GAME_WALKSMOKEEFFECT_H
#define _GAME_WALKSMOKEEFFECT_H

#include "Matrixf.h"
#include "Vector3.h"
#include "Graphics.h"
#include "types.h"

namespace SysShape {
struct Model;
} // namespace SysShape

namespace Game {
struct EnemyBase;
namespace WalkSmokeEffect {

/**
 * @size = 0x18
 */
struct Obj {
	Obj();

	// inlined
	void update(EnemyBase*);

	// unused
	void init(Matrixf*, float);
	void draw(Graphics&);

	bool _00;            // _00
	Matrixf* m_matrix;   // _04 - unknown
	float _08;           // _08 - height?
	Vector3f m_position; // _0C
};

/**
 * @size = 0x8
 */
struct Mgr {
	Mgr();

	void alloc(int);
	void update(EnemyBase*);
	void setup(int, SysShape::Model*, char*, float);

	// unused/inlined
	void draw(Graphics&);

	int m_objCount; // _00
	Obj* m_objects; // _04 - array of objects
};

} // namespace WalkSmokeEffect
} // namespace Game

#endif
