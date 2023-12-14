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
	void init(Matrixf*, f32);
	void draw(Graphics&);

	bool mIsEffectCreated; // _00
	Matrixf* mMatrix;      // _04 - unknown
	f32 mHeightOffset;     // _08 - height?
	Vector3f mPosition;    // _0C
};

/**
 * @size = 0x8
 */
struct Mgr {
	Mgr();

	void alloc(int);
	void update(EnemyBase*);

	void setup(int objIdx, SysShape::Model* model, char* name, f32 heightOffset);

	// unused/inlined
	void draw(Graphics&);

	int mNumObjects; // _00
	Obj* mObjects;   // _04 - array of objects
};

} // namespace WalkSmokeEffect
} // namespace Game

#endif
