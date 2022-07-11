#ifndef _GAME_ILLUSTRATEDBOOK_H
#define _GAME_ILLUSTRATEDBOOK_H

#include "Camera.h"
#include "Controller.h"
#include "Game/Creature.h"
#include "Game/IconTexture.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
namespace IllustratedBook {
struct Camera : LookAtCamera {
	Camera(Controller*);

	virtual ~Camera();                // _00
	virtual void doUpdate();          // _70
	virtual void startVibration(int); // _74

	void addFovy(float);
	void resetControl();
	void setTarget(Creature*);
	void updateCameraShake();
	void updateFocus();

	// Unused/inlined:
	void debugDraw(Graphics&);
	unknown getFocus();
	void setAtOffset(const Vector3f&) const;

	Controller* _198;  // _198
	Creature* _19C;    // _19C
	Vector3f _1A0;     // _1A0
	Vector3f _1AC;     // _1AC
	Vector3f _1B8;     // _1B8
	float _1C4;        // _1C4
	float _1C8;        // _1C8
	float _1CC;        // _1CC
	float _1D0;        // _1D0
	float _1D4;        // _1D4
	Vector3f _1D8;     // _1D8
	Vector3f _1E4;     // _1E4
	Vector3f _1F0;     // _1F0
	Vector3f _1FC[10]; // _1FC
	unknown _274;      // _274
	float _278;        // _278
	float _27C;        // _27C
	float _280;        // _280
	float _284;        // _284
	float _288;        // _288
	float _28C;        // _28C
	float _290;        // _290
	float _294;        // _294
	float _298;        // _298
	float _29C;        // _29C
	Vector3f _2A0;     // _2A0
	Vector3f _2AC;     // _2AC
	Vector3f _2B8;     // _2B8
	Vector3f _2C4;     // _2C4
	Vector3f _2D0;     // _2D0
	float _2DC;        // _2DC
	float _2E0;        // _2E0
	float _2E4;        // _2E4
	float _2E8;        // _2E8
	float _2EC;        // _2EC
	float _2F0;        // _2F0
	float _2F4;        // _2F4
	float _2F8;        // _2F8
	float _2FC;        // _2FC
	u8 _300[4];        // _300
	float _304;        // _304
	float _308;        // _308
	float _30C;        // _30C
	float _310;        // _310
	float _314;        // _314
	float _318;        // _318
	float _31C;        // _31C
	float _320;        // _320
};

struct EnemyTexMgr : IconTexture::Mgr {
	inline EnemyTexMgr();

	IconTexture::Loader m_loader;

	// Unused/inlined:
	unknown create(); // might be static?
};
} // namespace IllustratedBook
} // namespace Game

#endif
