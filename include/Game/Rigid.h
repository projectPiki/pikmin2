#ifndef _GAME_RIGID_H
#define _GAME_RIGID_H

#include "Matrixf.h"
#include "Quat.h"
#include "types.h"

namespace Game {
/**
 * @size{0x88}
 */
struct RigidConfig {
	RigidConfig();

	Vector3f _00;        // _00
	Vector3f m_velocity; // _0C
	float _18;           // _18
	float _1C;           // _1C
	float _20;           // _20
	float _24;           // _24
	float _28;           // _28
	float _2C;           // _2C
	Vector3f _30;        // _30
	float _3C;           // _3C
	float _40;           // _40
	float _44;           // _44
	Quat _48;            // _48
	Matrixf _58;         // _58
};

struct Rigid {
	Rigid();
	void initPosition(Vector3f&, Vector3f&);
	void initPositionIndex(Vector3f&, int, Vector3f&);
	void updateMatrix(int);
	void computeForces(int);
	void integrate(float, int);
	bool resolveCollision(int, Vector3f&, Vector3f&, float);

	float _00;                // _000
	Matrixf _04;              // _004
	RigidConfig m_configs[2]; // _008
	Matrixf _144;             // _144
	u8 _174;                  // _174
	u8 _175;                  // _175
};
} // namespace Game

#endif
