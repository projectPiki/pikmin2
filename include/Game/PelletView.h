#ifndef _GAME_PELLETVIEW_H
#define _GAME_PELLETVIEW_H

#include "types.h"

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

	virtual float viewGetBaseScale();                 // _00
	virtual SysShape::Model* viewGetShape() = 0;      // _04
	virtual int viewGetCollTreeJointIndex();          // _08
	virtual Vector3f viewGetCollTreeOffset();         // _0C
	virtual void view_start_carrymotion();            // _10
	virtual void view_finish_carrymotion();           // _14
	virtual void viewStartPreCarryMotion();           // _18
	virtual void viewStartCarryMotion();              // _1C
	virtual void viewOnPelletKilled();                // _20
	virtual void viewEntryShape(Matrixf&, Vector3f&); // _24

	void becomePellet(PelletViewArg*);
	void viewMakeMatrix(Matrixf&);

	// vtable _00
	Pellet* m_pellet;     // _04
	Creature* m_creature; // _08
};
} // namespace Game

#endif
