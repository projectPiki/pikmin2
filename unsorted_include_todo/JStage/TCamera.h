#ifndef _JSTAGE_TCAMERA_H
#define _JSTAGE_TCAMERA_H

namespace JStage {
struct TObject {
	virtual void _00() = 0;                                             // _00
	virtual void _04() = 0;                                             // _04
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
