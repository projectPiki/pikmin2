#ifndef _JSTAGE_TACTOR_H
#define _JSTAGE_TACTOR_H

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
    .4byte 0
*/

namespace JStage {
struct TObject {
	virtual void _00() = 0;                                             // _00
	virtual void JSGFGetType() const;                                   // _04
	virtual void JSGGetName() const;                                    // _08
	virtual void JSGUpdate();                                           // _0C
	virtual void JSGGetFlag() const;                                    // _10
	virtual void JSGSetFlag(unsigned long);                             // _14
	virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _18
	virtual void JSGSetData(unsigned long, const void*, unsigned long); // _1C
	virtual void JSGGetParent(TObject**, unsigned long*) const;         // _20
	virtual void JSGSetParent(TObject*, unsigned long);                 // _24
	virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _28
	virtual void JSGFindNodeID(const char*) const;                      // _2C
	virtual void JSGGetNodeTransformation(unsigned long,
	                                      float (*)[4]) const; // _30

	// _00 VTBL
};
} // namespace JStage

namespace JStage {
struct TActor : public TObject {
	virtual void _00() = 0;                                             // _00
	virtual void JSGFGetType() const;                                   // _04
	virtual void JSGGetName() const;                                    // _08
	virtual void JSGUpdate();                                           // _0C
	virtual void JSGGetFlag() const;                                    // _10
	virtual void JSGSetFlag(unsigned long);                             // _14
	virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _18
	virtual void JSGSetData(unsigned long, const void*, unsigned long); // _1C
	virtual void JSGGetParent(TObject**, unsigned long*) const;         // _20
	virtual void JSGSetParent(TObject*, unsigned long);                 // _24
	virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _28
	virtual void JSGFindNodeID(const char*) const;                      // _2C
	virtual void JSGGetNodeTransformation(unsigned long,
	                                      float (*)[4]) const; // _30
	virtual void JSGGetTranslation(Vec*) const;                // _34
	virtual void JSGSetTranslation(const Vec&);                // _38
	virtual void JSGGetScaling(Vec*) const;                    // _3C
	virtual void JSGSetScaling(const Vec&);                    // _40
	virtual void JSGGetRotation(Vec*) const;                   // _44
	virtual void JSGSetRotation(const Vec&);                   // _48
	virtual void JSGGetShape() const;                          // _4C
	virtual void JSGSetShape(unsigned long);                   // _50
	virtual void JSGGetAnimation() const;                      // _54
	virtual void JSGSetAnimation(unsigned long);               // _58
	virtual void JSGGetAnimationFrame() const;                 // _5C
	virtual void JSGSetAnimationFrame(float);                  // _60
	virtual void JSGGetAnimationFrameMax() const;              // _64
	virtual void JSGGetAnimationTransition() const;            // _68
	virtual void JSGSetAnimationTransition(float);             // _6C
	virtual void JSGGetTextureAnimation() const;               // _70
	virtual void JSGSetTextureAnimation(unsigned long);        // _74
	virtual void JSGGetTextureAnimationFrame() const;          // _78
	virtual void JSGSetTextureAnimationFrame(float);           // _7C
	virtual void JSGGetTextureAnimationFrameMax() const;       // _80
	virtual void _84() = 0;                                    // _84

	// _00 VTBL
};
} // namespace JStage

#endif
