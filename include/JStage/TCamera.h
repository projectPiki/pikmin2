#ifndef _JSTAGE_TCAMERA_H
#define _JSTAGE_TCAMERA_H

#include "JStage/TObject.h"
#include "Dolphin/vec.h"

namespace JStage {
enum TECameraProjection {};
enum TECameraView {};
struct TCamera : public TObject {
	virtual ~TCamera() = 0;                                // _08
	virtual int JSGFGetType() const;                       // _0C
	virtual int JSGGetProjectionType() const;              // _3C
	virtual void JSGSetProjectionType(TECameraProjection); // _40
	virtual float JSGGetProjectionNear() const;            // _44
	virtual void JSGSetProjectionNear(float);              // _48
	virtual float JSGGetProjectionFar() const;             // _4C
	virtual void JSGSetProjectionFar(float);               // _50
	virtual float JSGGetProjectionFovy() const;            // _54
	virtual void JSGSetProjectionFovy(float);              // _58
	virtual float JSGGetProjectionAspect() const;          // _5C
	virtual void JSGSetProjectionAspect(float);            // _60
	virtual void JSGGetProjectionField(float*) const;      // _64
	virtual void JSGSetProjectionField(const float*);      // _68
	virtual int JSGGetViewType() const;                    // _6C
	virtual void JSGSetViewType(TECameraView);             // _70
	virtual void JSGGetViewPosition(Vec*) const;           // _74
	virtual void JSGSetViewPosition(const Vec&);           // _78
	virtual void JSGGetViewUpVector(Vec*) const;           // _7C
	virtual void JSGSetViewUpVector(const Vec&);           // _80
	virtual void JSGGetViewTargetPosition(Vec*) const;     // _84
	virtual void JSGSetViewTargetPosition(const Vec&);     // _88
	virtual float JSGGetViewRoll() const;                  // _8C
	virtual void JSGSetViewRoll(float);                    // _90
};
} // namespace JStage

#endif
