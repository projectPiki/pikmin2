#ifndef _GAME_P2JST_OBJECTCAMERA_H
#define _GAME_P2JST_OBJECTCAMERA_H

/*
        __vt__Q34Game5P2JST12ObjectCamera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game5P2JST12ObjectCameraFv
        .4byte JSGFGetType__Q26JStage7TCameraCFv
        .4byte JSGGetName__Q34Game5P2JST12ObjectCameraCFv
        .4byte JSGUpdate__Q26JStage7TObjectFv
        .4byte JSGGetFlag__Q34Game5P2JST12ObjectCameraCFv
        .4byte JSGSetFlag__Q34Game5P2JST12ObjectCameraFUl
        .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
        .4byte JSGSetData__Q34Game5P2JST12ObjectCameraFUlPCvUl
        .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
        .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
        .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
        .4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
        .4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
        .4byte JSGGetProjectionType__Q26JStage7TCameraCFv
        .4byte
   JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection .4byte
   JSGGetProjectionNear__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionNear__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionFar__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionFar__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionFovy__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionFovy__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionAspect__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionAspect__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionField__Q26JStage7TCameraCFPf .4byte
   JSGSetProjectionField__Q26JStage7TCameraFPCf .4byte
   JSGGetViewType__Q26JStage7TCameraCFv .4byte
   JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView .4byte
   JSGGetViewPosition__Q34Game5P2JST12ObjectCameraCFP3Vec .4byte
   JSGSetViewPosition__Q34Game5P2JST12ObjectCameraFRC3Vec .4byte
   JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec .4byte
   JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec .4byte
   JSGGetViewTargetPosition__Q34Game5P2JST12ObjectCameraCFP3Vec .4byte
   JSGSetViewTargetPosition__Q34Game5P2JST12ObjectCameraFRC3Vec .4byte
   JSGGetViewRoll__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetViewRoll__Q34Game5P2JST12ObjectCameraFf .4byte 0 .4byte 0 .4byte
   "@4@reset__Q34Game5P2JST12ObjectCameraFv" .4byte
   "@4@update__Q34Game5P2JST12ObjectCameraFv" .4byte
   "@4@start__Q34Game5P2JST12ObjectCameraFv" .4byte
   "@4@stop__Q34Game5P2JST12ObjectCameraFv" .4byte
   parseUserData___Q34Game5P2JST10ObjectBaseFUlPCv .4byte
   updateCamera__Q34Game5P2JST12ObjectCameraFv .4byte
   setProjection__Q34Game5P2JST12ObjectCameraFv .4byte
   setView__Q34Game5P2JST12ObjectCameraFv .4byte
   isRunning__Q34Game5P2JST12ObjectCameraFv .4byte
   reset__Q34Game5P2JST12ObjectCameraFv .4byte
   update__Q34Game5P2JST12ObjectCameraFv .4byte
   start__Q34Game5P2JST12ObjectCameraFv .4byte
   stop__Q34Game5P2JST12ObjectCameraFv .4byte 0
*/

namespace JStage {
struct TCamera {
    virtual ~TCamera();                                                 // _08
    virtual void JSGFGetType() const;                                   // _0C
    virtual void JSGGetName() const;                                    // _10
    virtual void _14() = 0;                                             // _14
    virtual void JSGGetFlag() const;                                    // _18
    virtual void JSGSetFlag(unsigned long);                             // _1C
    virtual void _20() = 0;                                             // _20
    virtual void JSGSetData(unsigned long, const void*, unsigned long); // _24
    virtual void _28() = 0;                                             // _28
    virtual void _2C() = 0;                                             // _2C
    virtual void _30() = 0;                                             // _30
    virtual void _34() = 0;                                             // _34
    virtual void _38() = 0;                                             // _38
    virtual void JSGGetProjectionType() const;                          // _3C
    virtual void JSGSetProjectionType(TECameraProjection);              // _40
    virtual void JSGGetProjectionNear() const;                          // _44
    virtual void JSGSetProjectionNear(float);                           // _48
    virtual void JSGGetProjectionFar() const;                           // _4C
    virtual void JSGSetProjectionFar(float);                            // _50
    virtual void JSGGetProjectionFovy() const;                          // _54
    virtual void JSGSetProjectionFovy(float);                           // _58
    virtual void JSGGetProjectionAspect() const;                        // _5C
    virtual void JSGSetProjectionAspect(float);                         // _60
    virtual void JSGGetProjectionField(float*) const;                   // _64
    virtual void JSGSetProjectionField(const float*);                   // _68
    virtual void JSGGetViewType() const;                                // _6C
    virtual void JSGSetViewType(TECameraView);                          // _70
    virtual void JSGGetViewPosition(Vec*) const;                        // _74
    virtual void JSGSetViewPosition(const Vec&);                        // _78
    virtual void JSGGetViewUpVector(Vec*) const;                        // _7C
    virtual void JSGSetViewUpVector(const Vec&);                        // _80
};
} // namespace JStage

namespace JStage {
struct TObject {
    virtual ~TObject();                                                 // _08
    virtual void _0C() = 0;                                             // _0C
    virtual void JSGGetName() const;                                    // _10
    virtual void JSGUpdate();                                           // _14
    virtual void JSGGetFlag() const;                                    // _18
    virtual void JSGSetFlag(unsigned long);                             // _1C
    virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _20
    virtual void JSGSetData(unsigned long, const void*, unsigned long); // _24
    virtual void JSGGetParent(TObject**, unsigned long*) const;         // _28
    virtual void JSGSetParent(TObject*, unsigned long);                 // _2C
    virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _30
    virtual void JSGFindNodeID(const char*) const;                      // _34
    virtual void JSGGetNodeTransformation(unsigned long,
                                          float (*)[4]) const; // _38
};
} // namespace JStage

namespace Game {
namespace P2JST {
    struct ObjectBase {
        virtual ~ObjectBase();                  // _08
        virtual void _0C() = 0;                 // _0C
        virtual void JSGGetName() const;        // _10
        virtual void _14() = 0;                 // _14
        virtual void JSGGetFlag() const;        // _18
        virtual void JSGSetFlag(unsigned long); // _1C
        virtual void _20() = 0;                 // _20
        virtual void JSGSetData(unsigned long, const void*,
                                unsigned long);                  // _24
        virtual void _28() = 0;                                  // _28
        virtual void _2C() = 0;                                  // _2C
        virtual void _30() = 0;                                  // _30
        virtual void _34() = 0;                                  // _34
        virtual void _38() = 0;                                  // _38
        virtual void _3C() = 0;                                  // _3C
        virtual void _40() = 0;                                  // _40
        virtual void JSGGetProjectionNear() const;               // _44
        virtual void JSGSetProjectionNear(float);                // _48
        virtual void JSGGetProjectionFar() const;                // _4C
        virtual void JSGSetProjectionFar(float);                 // _50
        virtual void JSGGetProjectionFovy() const;               // _54
        virtual void JSGSetProjectionFovy(float);                // _58
        virtual void JSGGetProjectionAspect() const;             // _5C
        virtual void JSGSetProjectionAspect(float);              // _60
        virtual void _64() = 0;                                  // _64
        virtual void _68() = 0;                                  // _68
        virtual void _6C() = 0;                                  // _6C
        virtual void _70() = 0;                                  // _70
        virtual void JSGGetViewPosition(Vec*) const;             // _74
        virtual void JSGSetViewPosition(const Vec&);             // _78
        virtual void _7C() = 0;                                  // _7C
        virtual void _80() = 0;                                  // _80
        virtual void JSGGetViewTargetPosition(Vec*) const;       // _84
        virtual void JSGSetViewTargetPosition(const Vec&);       // _88
        virtual void JSGGetViewRoll() const;                     // _8C
        virtual void JSGSetViewRoll(float);                      // _90
        virtual void _94() = 0;                                  // _94
        virtual void _98() = 0;                                  // _98
        virtual void @4 @reset();                                // _9C (inline)
        virtual void @4 @update();                               // _A0 (inline)
        virtual void @4 @start();                                // _A4 (inline)
        virtual void @4 @stop();                                 // _A8 (inline)
        virtual void parseUserData_(unsigned long, const void*); // _AC (inline)
    };
} // namespace P2JST
} // namespace Game

namespace Game {
namespace P2JST {
    struct ObjectCamera : public TCamera, public TObject, public ObjectBase {
        virtual ~ObjectCamera();                // _08
        virtual void JSGGetName() const;        // _10
        virtual void JSGGetFlag() const;        // _18
        virtual void JSGSetFlag(unsigned long); // _1C
        virtual void JSGSetData(unsigned long, const void*,
                                unsigned long);            // _24
        virtual void JSGGetProjectionNear() const;         // _44
        virtual void JSGSetProjectionNear(float);          // _48
        virtual void JSGGetProjectionFar() const;          // _4C
        virtual void JSGSetProjectionFar(float);           // _50
        virtual void JSGGetProjectionFovy() const;         // _54
        virtual void JSGSetProjectionFovy(float);          // _58
        virtual void JSGGetProjectionAspect() const;       // _5C
        virtual void JSGSetProjectionAspect(float);        // _60
        virtual void JSGGetViewPosition(Vec*) const;       // _74
        virtual void JSGSetViewPosition(const Vec&);       // _78
        virtual void JSGGetViewTargetPosition(Vec*) const; // _84
        virtual void JSGSetViewTargetPosition(const Vec&); // _88
        virtual void JSGGetViewRoll() const;               // _8C
        virtual void JSGSetViewRoll(float);                // _90
        virtual void _94() = 0;                            // _94
        virtual void _98() = 0;                            // _98
        virtual void @4 @reset();                          // _9C (inline)
        virtual void @4 @update();                         // _A0 (inline)
        virtual void @4 @start();                          // _A4 (inline)
        virtual void @4 @stop();                           // _A8 (inline)
        virtual void updateCamera();                       // _B0
        virtual void setProjection();                      // _B4
        virtual void setView();                            // _B8
        virtual void isRunning();                          // _BC (inline)
        virtual void reset();                              // _C0 (inline)
        virtual void update();                             // _C4 (inline)
        virtual void start();                              // _C8 (inline)
        virtual void stop();                               // _CC (inline)
        virtual void _D0() = 0;                            // _D0

        ObjectCamera();
        void setCamera(Camera*);
    };
} // namespace P2JST
} // namespace Game

#endif
