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

	Vector3f _00;       // _00, for mConfigs: (_034, _0BC)
	Vector3f mVelocity; // _0C, for mConfigs: (_040, _0C8)
	f32 _18;            // _18, for mConfigs: (_04C, _0D4)
	f32 _1C;            // _1C, for mConfigs: (_050, _0D8)
	f32 _20;            // _20, for mConfigs: (_054, _0DC)
	f32 _24;            // _24, for mConfigs: (_058, _0E0)
	f32 _28;            // _28, for mConfigs: (_05C, _0E4)
	f32 _2C;            // _2C, for mConfigs: (_060, _0E8)
	Vector3f _30;       // _30, for mConfigs: (_064, _0EC)
	f32 _3C;            // _3C, for mConfigs: (_070, _0F8)
	f32 _40;            // _40, for mConfigs: (_074, _0FC)
	f32 _44;            // _44, for mConfigs: (_078, _100)
	Quat _48;           // _48, for mConfigs: (_07C, _104)
	Matrixf _58;        // _58, for mConfigs: (_08C, _114)
};

struct Rigid {
	Rigid();
	void initPosition(Vector3f&, Vector3f&);
	void initPositionIndex(Vector3f&, int, Vector3f&);
	void updateMatrix(int);
	void computeForces(int);
	void integrate(f32, int);
	bool resolveCollision(int, Vector3f&, Vector3f&, f32);

	f32 _00;                 // _000
	Matrixf _04;             // _004
	RigidConfig mConfigs[2]; // _034, [1] at _0BC
	Matrixf _144;            // _144
	u8 _174;                 // _174
	u8 _175;                 // _175
};
} // namespace Game

#endif
