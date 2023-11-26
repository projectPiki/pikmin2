#ifndef _GAME_PELLETVIEW_H
#define _GAME_PELLETVIEW_H

#include "Vector3.h"
#include "Matrixf.h"
#include "types.h"

namespace SysShape {
struct Model;
}

namespace Game {
struct Creature;
struct Pellet;
struct EnemyBase;

struct PelletViewArg {
	PelletViewArg();

	char* mEnemyName;   // _00
	Vector3f mPosition; // _04
	Matrixf* mMatrix;   // _10
	Creature* mEnemy;   // _14
	Vector3f mScale;    // _18
};

// @trait
struct PelletView {
	inline PelletView()
	    : mPellet(nullptr)
	    , mCreature(nullptr)
	{
	}

	virtual f32 viewGetBaseScale() // _08 (weak)
	{
		return 1.0f;
	}
	virtual SysShape::Model* viewGetShape() = 0; // _0C
	virtual int viewGetCollTreeJointIndex()      // _10 (weak)
	{
		return 0;
	}
	virtual Vector3f viewGetCollTreeOffset() // _14 (weak)
	{
		return Vector3f::zero;
	}
	virtual void view_start_carrymotion() { }            // _18 (weak)
	virtual void view_finish_carrymotion() { }           // _1C (weak)
	virtual void viewStartPreCarryMotion() { }           // _20 (weak)
	virtual void viewStartCarryMotion() { }              // _24 (weak)
	virtual void viewOnPelletKilled() { }                // _28 (weak)
	virtual void viewEntryShape(Matrixf&, Vector3f&) { } // _2C (weak)

	Pellet* becomePellet(PelletViewArg*);
	void viewMakeMatrix(Matrixf&);

	// vtable _00
	Pellet* mPellet;     // _04
	Creature* mCreature; // _08
};
} // namespace Game

#endif
