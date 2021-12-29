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
    virtual void _00() = 0;                                // _00
    virtual void JSGFGetType() const;                      // _04
    virtual void _08() = 0;                                // _08
    virtual void _0C() = 0;                                // _0C
    virtual void _10() = 0;                                // _10
    virtual void _14() = 0;                                // _14
    virtual void _18() = 0;                                // _18
    virtual void _1C() = 0;                                // _1C
    virtual void _20() = 0;                                // _20
    virtual void _24() = 0;                                // _24
    virtual void _28() = 0;                                // _28
    virtual void _2C() = 0;                                // _2C
    virtual void _30() = 0;                                // _30
    virtual void JSGGetProjectionType() const;             // _34
    virtual void JSGSetProjectionType(TECameraProjection); // _38
    virtual void _3C() = 0;                                // _3C
    virtual void _40() = 0;                                // _40
    virtual void _44() = 0;                                // _44
    virtual void _48() = 0;                                // _48
    virtual void _4C() = 0;                                // _4C
    virtual void _50() = 0;                                // _50
    virtual void _54() = 0;                                // _54
    virtual void _58() = 0;                                // _58
    virtual void JSGGetProjectionField(float*) const;      // _5C
    virtual void JSGSetProjectionField(const float*);      // _60
    virtual void JSGGetViewType() const;                   // _64
    virtual void JSGSetViewType(TECameraView);             // _68
    virtual void _6C() = 0;                                // _6C
    virtual void _70() = 0;                                // _70
    virtual void JSGGetViewUpVector(Vec*) const;           // _74
    virtual void JSGSetViewUpVector(const Vec&);           // _78

    // _00 VTBL
};
} // namespace JStage

namespace JStage {
struct TObject {
    virtual void _00() = 0;                                             // _00
    virtual void _04() = 0;                                             // _04
    virtual void _08() = 0;                                             // _08
    virtual void JSGUpdate();                                           // _0C
    virtual void _10() = 0;                                             // _10
    virtual void _14() = 0;                                             // _14
    virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _18
    virtual void _1C() = 0;                                             // _1C
    virtual void JSGGetParent(TObject**, unsigned long*) const;         // _20
    virtual void JSGSetParent(TObject*, unsigned long);                 // _24
    virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _28
    virtual void JSGFindNodeID(const char*) const;                      // _2C
    virtual void JSGGetNodeTransformation(unsigned long,
                                          float (*)[4]) const; // _30

    // _00 VTBL
};
} // namespace JStage

namespace Game {
namespace P2JST {
    struct ObjectBase {
        virtual void _00() = 0;                                  // _00
        virtual void _04() = 0;                                  // _04
        virtual void _08() = 0;                                  // _08
        virtual void _0C() = 0;                                  // _0C
        virtual void _10() = 0;                                  // _10
        virtual void _14() = 0;                                  // _14
        virtual void _18() = 0;                                  // _18
        virtual void _1C() = 0;                                  // _1C
        virtual void _20() = 0;                                  // _20
        virtual void _24() = 0;                                  // _24
        virtual void _28() = 0;                                  // _28
        virtual void _2C() = 0;                                  // _2C
        virtual void _30() = 0;                                  // _30
        virtual void _34() = 0;                                  // _34
        virtual void _38() = 0;                                  // _38
        virtual void _3C() = 0;                                  // _3C
        virtual void _40() = 0;                                  // _40
        virtual void _44() = 0;                                  // _44
        virtual void _48() = 0;                                  // _48
        virtual void _4C() = 0;                                  // _4C
        virtual void _50() = 0;                                  // _50
        virtual void _54() = 0;                                  // _54
        virtual void _58() = 0;                                  // _58
        virtual void _5C() = 0;                                  // _5C
        virtual void _60() = 0;                                  // _60
        virtual void _64() = 0;                                  // _64
        virtual void _68() = 0;                                  // _68
        virtual void _6C() = 0;                                  // _6C
        virtual void _70() = 0;                                  // _70
        virtual void _74() = 0;                                  // _74
        virtual void _78() = 0;                                  // _78
        virtual void _7C() = 0;                                  // _7C
        virtual void _80() = 0;                                  // _80
        virtual void _84() = 0;                                  // _84
        virtual void _88() = 0;                                  // _88
        virtual void _8C() = 0;                                  // _8C
        virtual void _90() = 0;                                  // _90
        virtual void _94() = 0;                                  // _94
        virtual void _98() = 0;                                  // _98
        virtual void _9C() = 0;                                  // _9C
        virtual void _A0() = 0;                                  // _A0
        virtual void parseUserData_(unsigned long, const void*); // _A4

        // _00 VTBL
    };
} // namespace P2JST
} // namespace Game

namespace Game {
namespace P2JST {
    struct ObjectCamera : public TCamera, public TObject, public ObjectBase {
        virtual ~ObjectCamera();                // _00
        virtual void JSGFGetType() const;       // _04
        virtual void JSGGetName() const;        // _08
        virtual void JSGUpdate();               // _0C
        virtual void JSGGetFlag() const;        // _10
        virtual void JSGSetFlag(unsigned long); // _14
        virtual void JSGGetData(unsigned long, void*,
                                unsigned long) const; // _18
        virtual void JSGSetData(unsigned long, const void*,
                                unsigned long);                     // _1C
        virtual void JSGGetParent(TObject**, unsigned long*) const; // _20
        virtual void JSGSetParent(TObject*, unsigned long);         // _24
        virtual void JSGSetRelation(bool, TObject*, unsigned long); // _28
        virtual void JSGFindNodeID(const char*) const;              // _2C
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
        virtual void _90() = 0;                                    // _90
        virtual void @4 @reset();                                  // _94
        virtual void @4 @update();                                 // _98
        virtual void @4 @start();                                  // _9C
        virtual void @4 @stop();                                   // _A0
        virtual void parseUserData_(unsigned long, const void*);   // _A4
        virtual void updateCamera();                               // _A8
        virtual void setProjection();                              // _AC
        virtual void setView();                                    // _B0
        virtual void isRunning();                                  // _B4
        virtual void reset();                                      // _B8
        virtual void update();                                     // _BC
        virtual void start();                                      // _C0
        virtual void stop();                                       // _C4
        virtual void _C8() = 0;                                    // _C8

        // _00 VTBL
    };
} // namespace P2JST
} // namespace Game

#endif
