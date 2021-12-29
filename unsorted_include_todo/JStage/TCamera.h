#ifndef _JSTAGE_TCAMERA_H
#define _JSTAGE_TCAMERA_H

/*
    __vt__Q26JStage7TCamera:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte JSGFGetType__Q26JStage7TCameraCFv
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
    .4byte JSGGetProjectionType__Q26JStage7TCameraCFv
    .4byte JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection
    .4byte JSGGetProjectionNear__Q26JStage7TCameraCFv
    .4byte JSGSetProjectionNear__Q26JStage7TCameraFf
    .4byte JSGGetProjectionFar__Q26JStage7TCameraCFv
    .4byte JSGSetProjectionFar__Q26JStage7TCameraFf
    .4byte JSGGetProjectionFovy__Q26JStage7TCameraCFv
    .4byte JSGSetProjectionFovy__Q26JStage7TCameraFf
    .4byte JSGGetProjectionAspect__Q26JStage7TCameraCFv
    .4byte JSGSetProjectionAspect__Q26JStage7TCameraFf
    .4byte JSGGetProjectionField__Q26JStage7TCameraCFPf
    .4byte JSGSetProjectionField__Q26JStage7TCameraFPCf
    .4byte JSGGetViewType__Q26JStage7TCameraCFv
    .4byte JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView
    .4byte JSGGetViewPosition__Q26JStage7TCameraCFP3Vec
    .4byte JSGSetViewPosition__Q26JStage7TCameraFRC3Vec
    .4byte JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec
    .4byte JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec
    .4byte JSGGetViewTargetPosition__Q26JStage7TCameraCFP3Vec
    .4byte JSGSetViewTargetPosition__Q26JStage7TCameraFRC3Vec
    .4byte JSGGetViewRoll__Q26JStage7TCameraCFv
    .4byte JSGSetViewRoll__Q26JStage7TCameraFf
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
struct TCamera : public TObject {
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
	virtual void JSGGetProjectionType() const;                 // _34
	virtual void JSGSetProjectionType(TECameraProjection);     // _38
	virtual void JSGGetProjectionNear() const;                 // _3C
	virtual void JSGSetProjectionNear(float);                  // _40
	virtual void JSGGetProjectionFar() const;                  // _44
	virtual void JSGSetProjectionFar(float);                   // _48
	virtual void JSGGetProjectionFovy() const;                 // _4C
	virtual void JSGSetProjectionFovy(float);                  // _50
	virtual void JSGGetProjectionAspect() const;               // _54
	virtual void JSGSetProjectionAspect(float);                // _58
	virtual void JSGGetProjectionField(float*) const;          // _5C
	virtual void JSGSetProjectionField(const float*);          // _60
	virtual void JSGGetViewType() const;                       // _64
	virtual void JSGSetViewType(TECameraView);                 // _68
	virtual void JSGGetViewPosition(Vec*) const;               // _6C
	virtual void JSGSetViewPosition(const Vec&);               // _70
	virtual void JSGGetViewUpVector(Vec*) const;               // _74
	virtual void JSGSetViewUpVector(const Vec&);               // _78
	virtual void JSGGetViewTargetPosition(Vec*) const;         // _7C
	virtual void JSGSetViewTargetPosition(const Vec&);         // _80
	virtual void JSGGetViewRoll() const;                       // _84
	virtual void JSGSetViewRoll(float);                        // _88
	virtual void _8C() = 0;                                    // _8C

	// _00 VTBL
};
} // namespace JStage

#endif
