#ifndef _JSTAGE_TCAMERA_H
#define _JSTAGE_TCAMERA_H

#include "JSystem/JStage/TObject.h"
#include "Dolphin/vec.h"
#include "JSystem/JStudio/TObject.h"

namespace JStage {
enum TECameraProjection {};
enum TECameraView {};
struct TCamera : public TObject {
	typedef JStudio::TObject_camera StudioObject;

	virtual ~TCamera() = 0;                                // _08
	virtual int JSGFGetType() const;                       // _0C
	virtual int JSGGetProjectionType() const;              // _3C
	virtual void JSGSetProjectionType(TECameraProjection); // _40
	virtual f32 JSGGetProjectionNear() const;              // _44
	virtual void JSGSetProjectionNear(f32);                // _48
	virtual f32 JSGGetProjectionFar() const;               // _4C
	virtual void JSGSetProjectionFar(f32);                 // _50
	virtual f32 JSGGetProjectionFovy() const;              // _54
	virtual void JSGSetProjectionFovy(f32);                // _58
	virtual f32 JSGGetProjectionAspect() const;            // _5C
	virtual void JSGSetProjectionAspect(f32);              // _60
	virtual void JSGGetProjectionField(f32*) const;        // _64
	virtual void JSGSetProjectionField(const f32*);        // _68
	virtual int JSGGetViewType() const;                    // _6C
	virtual void JSGSetViewType(TECameraView);             // _70
	virtual void JSGGetViewPosition(Vec*) const;           // _74
	virtual void JSGSetViewPosition(const Vec&);           // _78
	virtual void JSGGetViewUpVector(Vec*) const;           // _7C
	virtual void JSGSetViewUpVector(const Vec&);           // _80
	virtual void JSGGetViewTargetPosition(Vec*) const;     // _84
	virtual void JSGSetViewTargetPosition(const Vec&);     // _88
	virtual f32 JSGGetViewRoll() const;                    // _8C
	virtual void JSGSetViewRoll(f32);                      // _90
};
} // namespace JStage

#endif
