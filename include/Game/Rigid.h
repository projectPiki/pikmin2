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

	Vector3f _00;        // _00, for m_configs: (_034, _0BC)
	Vector3f m_velocity; // _0C, for m_configs: (_040, _0C8)
	float _18;           // _18, for m_configs: (_04C, _0D4)
	float _1C;           // _1C, for m_configs: (_050, _0D8)
	float _20;           // _20, for m_configs: (_054, _0DC)
	float _24;           // _24, for m_configs: (_058, _0E0)
	float _28;           // _28, for m_configs: (_05C, _0E4)
	float _2C;           // _2C, for m_configs: (_060, _0E8)
	Vector3f _30;        // _30, for m_configs: (_064, _0EC)
	float _3C;           // _3C, for m_configs: (_070, _0F8)
	float _40;           // _40, for m_configs: (_074, _0FC)
	float _44;           // _44, for m_configs: (_078, _100)
	Quat _48;            // _48, for m_configs: (_07C, _104)
	Matrixf _58;         // _58, for m_configs: (_08C, _114)
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
	RigidConfig m_configs[2]; // _034, [1] at _0BC
	Matrixf _144;             // _144
	u8 _174;                  // _174
	u8 _175;                  // _175
};
} // namespace Game

#endif
