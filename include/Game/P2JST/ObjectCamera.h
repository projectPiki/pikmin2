#ifndef _GAME_P2JST_OBJECTCAMERA_H
#define _GAME_P2JST_OBJECTCAMERA_H

#include "types.h"
#include "Dolphin/vec.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "Game/P2JST/ObjectBase.h"
#include "JStage/TCamera.h"

struct Camera;

namespace Game {
struct MoviePlayer;

namespace P2JST {
// Size: 0xC9
struct ObjectCamera : public JStage::TCamera, public ObjectBase {
	ObjectCamera(const char*, Game::MoviePlayer*);

	////////////////// VTABLE
	virtual ~ObjectCamera();                           // _08
	virtual char* JSGGetName() const;                  // _10
	virtual u32 JSGGetFlag() const;                    // _18
	virtual void JSGSetFlag(u32);                      // _1C
	virtual void JSGSetData(u32, const void*, u32);    // _24
	virtual f32 JSGGetProjectionNear() const;          // _44
	virtual void JSGSetProjectionNear(f32);            // _48
	virtual f32 JSGGetProjectionFar() const;           // _4C
	virtual void JSGSetProjectionFar(f32);             // _50
	virtual f32 JSGGetProjectionFovy() const;          // _54
	virtual void JSGSetProjectionFovy(f32);            // _58
	virtual f32 JSGGetProjectionAspect() const;        // _5C
	virtual void JSGSetProjectionAspect(f32);          // _60
	virtual void JSGGetViewPosition(Vec*) const;       // _74
	virtual void JSGSetViewPosition(const Vec&);       // _78
	virtual void JSGGetViewTargetPosition(Vec*) const; // _84
	virtual void JSGSetViewTargetPosition(const Vec&); // _88
	virtual f32 JSGGetViewRoll() const;                // _8C
	virtual void JSGSetViewRoll(f32);                  // _90
	virtual void updateCamera();                       // _B0
	virtual void setProjection();                      // _B4
	virtual void setView();                            // _B8
	virtual bool isRunning() { return mIsRunning; }    // _BC (weak)
	virtual void reset();                              // _C0 (weak)
	virtual void update();                             // _C4 (weak)
	virtual void start();                              // _C8 (weak)
	virtual void stop();                               // _CC (weak)
	////////////////// END VTABLE

	void setCamera(Camera*);

	// _00 - VTABLE (JStage::TCamera)
	// _04 - VTABLE2 (ObjectBase)
	Game::MoviePlayer* _08;  // _08
	char* mName;             // _0C
	u32 _10;                 // _10 - flags?
	int _14;                 // _14
	void* _18;               // _18 - pointer to something?
	u32 _1C;                 // _1C
	u8 _20[0x34];            // _20 - unknown
	u32 _54;                 // _54 - unknown
	u8 _58[0x8];             // _58 - unknown
	Matrixf _60;             // _60
	Vector3f mViewPos;       // _90 - view position?
	Vector3f mViewTargetPos; // _9C - view target position?
	f32 mViewRoll;           // _A8 - view roll?
	f32 mProjectionNear;     // _AC - projectionNear?
	f32 mProjectionFar;      // _B0 - projectionFar?
	f32 mProjectionFovy;     // _B4 - projectionFovy?
	f32 mProjectionAspect;   // _BC - projectionAspect?
	Camera* _C0;             // _C0 - owner?
	Camera* _C4;             // _C4 - camera obj?
	bool mIsRunning;         // _C8
};

} // namespace P2JST
} // namespace Game

#endif
