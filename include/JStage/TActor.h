#ifndef _JSTAGE_TACTOR_H
#define _JSTAGE_TACTOR_H
#include "JStage/TObject.h"
#include "Dolphin/vec.h"

namespace JStage {
struct TActor : public TObject {

	virtual ~TActor() = 0;                              // _08
	virtual int JSGFGetType() const;                    // _0C
	virtual void JSGGetTranslation(Vec*) const;         // _3C
	virtual void JSGSetTranslation(const Vec&);         // _40
	virtual void JSGGetScaling(Vec*) const;             // _44
	virtual void JSGSetScaling(const Vec&);             // _48
	virtual void JSGGetRotation(Vec*) const;            // _4C
	virtual void JSGSetRotation(const Vec&);            // _50
	virtual int JSGGetShape() const;                    // _54
	virtual void JSGSetShape(unsigned long);            // _58
	virtual int JSGGetAnimation() const;                // _5C
	virtual void JSGSetAnimation(unsigned long);        // _60
	virtual f32 JSGGetAnimationFrame() const;           // _64
	virtual void JSGSetAnimationFrame(float);           // _68
	virtual f32 JSGGetAnimationFrameMax() const;        // _6C
	virtual f32 JSGGetAnimationTransition() const;      // _70
	virtual void JSGSetAnimationTransition(float);      // _74
	virtual int JSGGetTextureAnimation() const;         // _78
	virtual void JSGSetTextureAnimation(unsigned long); // _7C
	virtual f32 JSGGetTextureAnimationFrame() const;    // _80
	virtual void JSGSetTextureAnimationFrame(float);    // _84
	virtual f32 JSGGetTextureAnimationFrameMax() const; // _88
};
} // namespace JStage

#endif
