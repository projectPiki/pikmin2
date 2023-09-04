#ifndef _GAME_P2JST_OBJECTCAMERA_H
#define _GAME_P2JST_OBJECTCAMERA_H

#include "types.h"
#include "Dolphin/vec.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "Game/P2JST/ObjectBase.h"
#include "JSystem/JStage/TCamera.h"

struct Camera;

namespace Game {
struct MoviePlayer;

namespace P2JST {
extern f32 sFovBackup;
// Size: 0xC9
struct ObjectCamera : public JStage::TCamera, public ObjectBase {
	ObjectCamera(const char*, Game::MoviePlayer*);

	////////////////// VTABLE
	virtual ~ObjectCamera();                           // _08
	virtual char const* JSGGetName() const;            // _10
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
	void setParms(Camera*);

	// _00 - VTABLE (JStage::TCamera)
	// _04 - VTABLE2 (ObjectBase)
	u8 _20[0x34];          // _20 - unknown
	u32 _54;               // _54 - unknown
	u8 _58[0x8];           // _58 - unknown
	Matrixf mViewMatrix;   // _60
	Vec mViewPos;          // _90 - view position?
	Vec mViewTargetPos;    // _9C - view target position?
	f32 mViewRoll;         // _A8 - view roll?
	f32 mProjectionNear;   // _AC - projectionNear?
	f32 mProjectionFar;    // _B0 - projectionFar?
	f32 mProjectionFovy;   // _B4 - projectionFovy?
	f32 mProjectionAspect; // _B8 - projectionAspect?
	Camera* mCameraObj;    // _BC - owner?
	Camera* mCameraObj2;   // _C0 - camera obj?
	bool mIsRunning;       // _C4
};

} // namespace P2JST
} // namespace Game

#endif
