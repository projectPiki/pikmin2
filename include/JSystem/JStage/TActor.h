#ifndef _JSTAGE_TACTOR_H
#define _JSTAGE_TACTOR_H
#include "JSystem/JStage/TObject.h"
#include "Dolphin/vec.h"
#include "JSystem/JStudio/TObject.h"

namespace JStage {
struct TActor : public TObject {
	typedef JStudio::TObject_actor StudioObject;

	virtual ~TActor() = 0;                              // _08
	virtual int JSGFGetType() const;                    // _0C
	virtual void JSGGetTranslation(Vec*) const;         // _3C
	virtual void JSGSetTranslation(const Vec&);         // _40
	virtual void JSGGetScaling(Vec*) const;             // _44
	virtual void JSGSetScaling(const Vec&);             // _48
	virtual void JSGGetRotation(Vec*) const;            // _4C
	virtual void JSGSetRotation(const Vec&);            // _50
	virtual int JSGGetShape() const;                    // _54
	virtual void JSGSetShape(u32);                      // _58
	virtual int JSGGetAnimation() const;                // _5C
	virtual void JSGSetAnimation(u32);                  // _60
	virtual f32 JSGGetAnimationFrame() const;           // _64
	virtual void JSGSetAnimationFrame(f32);             // _68
	virtual f32 JSGGetAnimationFrameMax() const;        // _6C
	virtual f32 JSGGetAnimationTransition() const;      // _70
	virtual void JSGSetAnimationTransition(f32);        // _74
	virtual int JSGGetTextureAnimation() const;         // _78
	virtual void JSGSetTextureAnimation(u32);           // _7C
	virtual f32 JSGGetTextureAnimationFrame() const;    // _80
	virtual void JSGSetTextureAnimationFrame(f32);      // _84
	virtual f32 JSGGetTextureAnimationFrameMax() const; // _88

	// _00 = VTBL
};
} // namespace JStage

#endif
