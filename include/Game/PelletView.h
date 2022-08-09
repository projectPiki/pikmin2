#ifndef _GAME_PELLETVIEW_H
#define _GAME_PELLETVIEW_H

#include "types.h"

const float PELLETVIEW_BASE_SCALE = 1.0f;

struct Matrixf;
template <typename T> struct Vector3;
typedef Vector3<float> Vector3f;

namespace SysShape {
struct Model;
}

namespace Game {
struct Creature;
struct Pellet;
struct PelletViewArg;

// @trait
struct PelletView {
	inline PelletView()
	    : m_pellet(nullptr)
	    , m_creature(nullptr)
	{
	}

	virtual float viewGetBaseScale();                 // _08 (weak)
	virtual SysShape::Model* viewGetShape() = 0;      // _0C
	virtual int viewGetCollTreeJointIndex();          // _10 (weak)
	virtual Vector3f viewGetCollTreeOffset();         // _14 (weak)
	virtual void view_start_carrymotion();            // _18 (weak)
	virtual void view_finish_carrymotion();           // _1C (weak)
	virtual void viewStartPreCarryMotion();           // _20 (weak)
	virtual void viewStartCarryMotion();              // _24 (weak)
	virtual void viewOnPelletKilled();                // _28 (weak)
	virtual void viewEntryShape(Matrixf&, Vector3f&); // _2C (weak)

	void becomePellet(PelletViewArg*);
	void viewMakeMatrix(Matrixf&);

	// vtable _00
	Pellet* m_pellet;     // _04
	Creature* m_creature; // _08
};
} // namespace Game

#endif
