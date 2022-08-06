#ifndef _JSTAGE_TACTOR_H
#define _JSTAGE_TACTOR_H
#include "JStage/TObject.h"
#include "Dolphin/vec.h"
/*
    __vt__Q26JStage6TActor:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte JSGFGetType__Q26JStage6TActorCFv
    .4byte JSGGetName__Q26JStage7TObjectCFv
    .4byte JSGUpdate__Q26JStage7TObjectFv
    .4byte JSGGetFlag__Q26JStage7TObjectCFv
    .4byte JSGSetFlag__Q26JStage7TObjectFUl
    .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
    .4byte JSGSetData__Q26JStage7TObjectFUlPCvUl
    .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
    .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
    .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
    .4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
    .4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
    .4byte JSGGetTranslation__Q26JStage6TActorCFP3Vec
    .4byte JSGSetTranslation__Q26JStage6TActorFRC3Vec
    .4byte JSGGetScaling__Q26JStage6TActorCFP3Vec
    .4byte JSGSetScaling__Q26JStage6TActorFRC3Vec
    .4byte JSGGetRotation__Q26JStage6TActorCFP3Vec
    .4byte JSGSetRotation__Q26JStage6TActorFRC3Vec
    .4byte JSGGetShape__Q26JStage6TActorCFv
    .4byte JSGSetShape__Q26JStage6TActorFUl
    .4byte JSGGetAnimation__Q26JStage6TActorCFv
    .4byte JSGSetAnimation__Q26JStage6TActorFUl
    .4byte JSGGetAnimationFrame__Q26JStage6TActorCFv
    .4byte JSGSetAnimationFrame__Q26JStage6TActorFf
    .4byte JSGGetAnimationFrameMax__Q26JStage6TActorCFv
    .4byte JSGGetAnimationTransition__Q26JStage6TActorCFv
    .4byte JSGSetAnimationTransition__Q26JStage6TActorFf
    .4byte JSGGetTextureAnimation__Q26JStage6TActorCFv
    .4byte JSGSetTextureAnimation__Q26JStage6TActorFUl
    .4byte JSGGetTextureAnimationFrame__Q26JStage6TActorCFv
    .4byte JSGSetTextureAnimationFrame__Q26JStage6TActorFf
    .4byte JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv
*/

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
