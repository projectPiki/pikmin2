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
	virtual int JSGFGetType() const;                    // _04
	virtual void JSGGetTranslation(Vec*) const;         // _34
	virtual void JSGSetTranslation(const Vec&);         // _38
	virtual void JSGGetScaling(Vec*) const;             // _3C
	virtual void JSGSetScaling(const Vec&);             // _40
	virtual void JSGGetRotation(Vec*) const;            // _44
	virtual void JSGSetRotation(const Vec&);            // _48
	virtual int JSGGetShape() const;                    // _4C
	virtual void JSGSetShape(unsigned long);            // _50
	virtual int JSGGetAnimation() const;                // _54
	virtual void JSGSetAnimation(unsigned long);        // _58
	virtual f32 JSGGetAnimationFrame() const;           // _5C
	virtual void JSGSetAnimationFrame(float);           // _60
	virtual f32 JSGGetAnimationFrameMax() const;        // _64
	virtual f32 JSGGetAnimationTransition() const;      // _68
	virtual void JSGSetAnimationTransition(float);      // _6C
	virtual int JSGGetTextureAnimation() const;         // _70
	virtual void JSGSetTextureAnimation(unsigned long); // _74
	virtual f32 JSGGetTextureAnimationFrame() const;    // _78
	virtual void JSGSetTextureAnimationFrame(float);    // _7C
	virtual f32 JSGGetTextureAnimationFrameMax() const; // _80
	virtual void _84() = 0;                             // _84

	// _00 VTBL
	~TActor();
};
} // namespace JStage

#endif
