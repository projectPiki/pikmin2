#ifndef _GAME_FAKEPIKI_H
#define _GAME_FAKEPIKI_H

/*
        __vt__Q24Game8FakePiki:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game8FakePikiFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game8CreatureFv
        .4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game8FakePikiFv
        .4byte doEntry__Q24Game8FakePikiFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8FakePikiFf
        .4byte doDirectDraw__Q24Game8CreatureFR8Graphics
        .4byte getBodyRadius__Q24Game8CreatureFv
        .4byte getCellRadius__Q24Game8CreatureFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game8FakePikiFv
        .4byte "setVelocity__Q24Game8FakePikiFR10Vector3<f>"
        .4byte getVelocity__Q24Game8FakePikiFv
        .4byte "onSetPosition__Q24Game8FakePikiFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game8FakePikiFv
        .4byte isTeki__Q24Game8CreatureFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game8FakePikiFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game8FakePikiFv
        .4byte inWater__Q24Game8FakePikiFv
        .4byte getFlockMgr__Q24Game8CreatureFv
        .4byte onStartCapture__Q24Game8CreatureFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q24Game8CreatureFv
        .4byte isAtari__Q24Game8CreatureFv
        .4byte setAtari__Q24Game8CreatureFb
        .4byte isAlive__Q24Game8CreatureFv
        .4byte setAlive__Q24Game8CreatureFb
        .4byte isCollisionFlick__Q24Game8CreatureFv
        .4byte setCollisionFlick__Q24Game8CreatureFb
        .4byte isMovieActor__Q24Game8CreatureFv
        .4byte isMovieExtra__Q24Game8CreatureFv
        .4byte isMovieMotion__Q24Game8CreatureFv
        .4byte setMovieMotion__Q24Game8CreatureFb
        .4byte isBuried__Q24Game8CreatureFv
        .4byte isFlying__Q24Game8CreatureFv
        .4byte isUnderground__Q24Game8CreatureFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game8CreatureFv
        .4byte getPSCreature__Q24Game8CreatureFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game8FakePikiFv
        .4byte sound_culling__Q24Game8CreatureFv
        .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
        .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8FakePikiFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game8CreatureFv
        .4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game8FakePikiFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game8CreatureFv
        .4byte getCreatureID__Q24Game8CreatureFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent"
        .4byte getDownfloorMass__Q24Game8FakePikiFv
        .4byte isPikmin__Q24Game8FakePikiFv
        .4byte doColorChange__Q24Game8FakePikiFv
        .4byte doDebugDL__Q24Game8FakePikiFv
        .4byte update__Q24Game8FakePikiFv
        .4byte move__Q24Game8FakePikiFf
        .4byte useMoveRotation__Q24Game8FakePikiFv
        .4byte setMoveRotation__Q24Game8FakePikiFb
        .4byte useUpdateTrMatrix__Q24Game8FakePikiFv
        .4byte setUpdateTrMatrix__Q24Game8FakePikiFb
        .4byte useMoveVelocity__Q24Game8FakePikiFv
        .4byte setMoveVelocity__Q24Game8FakePikiFb
        .4byte useMapCollision__Q24Game8FakePikiFv
        .4byte setMapCollision__Q24Game8FakePikiFb
        .4byte isZikatu__Q24Game8FakePikiFv
        .4byte setZikatu__Q24Game8FakePikiFb
        .4byte wasZikatu__Q24Game8FakePikiFv
        .4byte getMapCollisionRadius__Q24Game8FakePikiFv
        .4byte "wallCallback__Q24Game8FakePikiFR10Vector3<f>"
        .4byte
   startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
        .4byte onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent
        .4byte updateLookCreature__Q24Game8FakePikiFv
        .4byte do_updateLookCreature__Q24Game8FakePikiFv
        .4byte onSetPosition__Q24Game8FakePikiFv
        .4byte isWalking__Q24Game8FakePikiFv
        .4byte 0
*/

namespace Game {
struct Creature {
    virtual void _00() = 0;                                          // _00
    virtual void checkCollision(CellObject*);                        // _04
    virtual void _08() = 0;                                          // _08
    virtual void collisionUpdatable();                               // _0C
    virtual void isPiki();                                           // _10
    virtual void isNavi();                                           // _14
    virtual void _18() = 0;                                          // _18
    virtual void getTypeName();                                      // _1C
    virtual void getObjType();                                       // _20
    virtual void constructor();                                      // _24
    virtual void onInit(CreatureInitArg*);                           // _28
    virtual void onKill(CreatureKillArg*);                           // _2C
    virtual void onInitPost(CreatureInitArg*);                       // _30
    virtual void _34() = 0;                                          // _34
    virtual void _38() = 0;                                          // _38
    virtual void doSetView(int);                                     // _3C
    virtual void doViewCalc();                                       // _40
    virtual void _44() = 0;                                          // _44
    virtual void doDirectDraw(Graphics&);                            // _48
    virtual void getBodyRadius();                                    // _4C
    virtual void getCellRadius();                                    // _50
    virtual void initPosition(Vector3<float>&);                      // _54
    virtual void onInitPosition(Vector3<float>&);                    // _58
    virtual void _5C() = 0;                                          // _5C
    virtual void _60() = 0;                                          // _60
    virtual void _64() = 0;                                          // _64
    virtual void _68() = 0;                                          // _68
    virtual void onSetPositionPost(Vector3<float>&);                 // _6C
    virtual void _70() = 0;                                          // _70
    virtual void isTeki();                                           // _74
    virtual void isPellet();                                         // _78
    virtual void _7C() = 0;                                          // _7C
    virtual void _80() = 0;                                          // _80
    virtual void _84() = 0;                                          // _84
    virtual void getFlockMgr();                                      // _88
    virtual void onStartCapture();                                   // _8C
    virtual void onUpdateCapture(Matrixf&);                          // _90
    virtual void onEndCapture();                                     // _94
    virtual void isAtari();                                          // _98
    virtual void setAtari(bool);                                     // _9C
    virtual void isAlive();                                          // _A0
    virtual void setAlive(bool);                                     // _A4
    virtual void isCollisionFlick();                                 // _A8
    virtual void setCollisionFlick(bool);                            // _AC
    virtual void isMovieActor();                                     // _B0
    virtual void isMovieExtra();                                     // _B4
    virtual void isMovieMotion();                                    // _B8
    virtual void setMovieMotion(bool);                               // _BC
    virtual void isBuried();                                         // _C0
    virtual void isFlying();                                         // _C4
    virtual void isUnderground();                                    // _C8
    virtual void isLivingThing();                                    // _CC
    virtual void isDebugCollision();                                 // _D0
    virtual void setDebugCollision(bool);                            // _D4
    virtual void doSave(Stream&);                                    // _D8
    virtual void doLoad(Stream&);                                    // _DC
    virtual void bounceCallback(Sys::Triangle*);                     // _E0
    virtual void collisionCallback(CollEvent&);                      // _E4
    virtual void platCallback(PlatEvent&);                           // _E8
    virtual void getJAIObject();                                     // _EC
    virtual void getPSCreature();                                    // _F0
    virtual void getSound_AILOD();                                   // _F4
    virtual void _F8() = 0;                                          // _F8
    virtual void sound_culling();                                    // _FC
    virtual void getSound_CurrAnimFrame();                           // _100
    virtual void getSound_CurrAnimSpeed();                           // _104
    virtual void on_movie_begin(bool);                               // _108
    virtual void on_movie_end(bool);                                 // _10C
    virtual void movieStartAnimation(unsigned long);                 // _110
    virtual void movieStartDemoAnimation(SysShape::AnimInfo*);       // _114
    virtual void movieSetAnimationLastFrame();                       // _118
    virtual void movieSetTranslation(Vector3<float>&, float);        // _11C
    virtual void _120() = 0;                                         // _120
    virtual void movieGotoPosition(Vector3<float>&);                 // _124
    virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _128
    virtual void getShadowParam(ShadowParam&);                       // _12C
    virtual void needShadow();                                       // _130
    virtual void getLifeGaugeParam(LifeGaugeParam&);                 // _134
    virtual void getLODSphere(Sys::Sphere&);                         // _138
    virtual void getLODCylinder(Sys::Cylinder&);                     // _13C
    virtual void startPick();                                        // _140
    virtual void endPick(bool);                                      // _144
    virtual void getMabiki();                                        // _148
    virtual void getFootmarks();                                     // _14C
    virtual void onStickStart(Creature*);                            // _150
    virtual void onStickEnd(Creature*);                              // _154
    virtual void onStickStartSelf(Creature*);                        // _158
    virtual void onStickEndSelf(Creature*);                          // _15C
    virtual void isSlotFree(short);                                  // _160
    virtual void getFreeStickSlot();                                 // _164
    virtual void getNearFreeStickSlot(Vector3<float>&);              // _168
    virtual void getRandomFreeStickSlot();                           // _16C
    virtual void onSlotStickStart(Creature*, short);                 // _170
    virtual void onSlotStickEnd(Creature*, short);                   // _174
    virtual void calcStickSlotGlobal(short, Vector3<float>&);        // _178
    virtual void _17C() = 0;                                         // _17C
    virtual void getAngularEffect(Vector3<float>&, Vector3<float>&); // _180
    virtual void applyImpulse(Vector3<float>&, Vector3<float>&);     // _184
    virtual void ignoreAtari(Creature*);                             // _188
    virtual void getSuckPos();                                       // _18C
    virtual void getGoalPos();                                       // _190
    virtual void isSuckReady();                                      // _194
    virtual void isSuckArriveWait();                                 // _198
    virtual void stimulate(Interaction&);                            // _19C
    virtual void getCreatureName();                                  // _1A0
    virtual void getCreatureID();                                    // _1A4

    // _00 VTBL
};
} // namespace Game

namespace Game {
struct CellObject {
    virtual void _00() = 0;            // _00
    virtual void _04() = 0;            // _04
    virtual void _08() = 0;            // _08
    virtual void _0C() = 0;            // _0C
    virtual void _10() = 0;            // _10
    virtual void _14() = 0;            // _14
    virtual void deferPikiCollision(); // _18

    // _00 VTBL
};
} // namespace Game

namespace Game {
struct FakePiki : public Creature, public CellObject {
    virtual void getPosition();                                      // _00
    virtual void checkCollision(CellObject*);                        // _04
    virtual void getBoundingSphere(Sys::Sphere&);                    // _08
    virtual void collisionUpdatable();                               // _0C
    virtual void isPiki();                                           // _10
    virtual void isNavi();                                           // _14
    virtual void deferPikiCollision();                               // _18
    virtual void getTypeName();                                      // _1C
    virtual void getObjType();                                       // _20
    virtual void constructor();                                      // _24
    virtual void onInit(CreatureInitArg*);                           // _28
    virtual void onKill(CreatureKillArg*);                           // _2C
    virtual void onInitPost(CreatureInitArg*);                       // _30
    virtual void doAnimation();                                      // _34
    virtual void doEntry();                                          // _38
    virtual void doSetView(int);                                     // _3C
    virtual void doViewCalc();                                       // _40
    virtual void doSimulation(float);                                // _44
    virtual void doDirectDraw(Graphics&);                            // _48
    virtual void getBodyRadius();                                    // _4C
    virtual void getCellRadius();                                    // _50
    virtual void initPosition(Vector3<float>&);                      // _54
    virtual void onInitPosition(Vector3<float>&);                    // _58
    virtual void getFaceDir();                                       // _5C
    virtual void setVelocity(Vector3<float>&);                       // _60
    virtual void getVelocity();                                      // _64
    virtual void onSetPosition(Vector3<float>&);                     // _68
    virtual void onSetPositionPost(Vector3<float>&);                 // _6C
    virtual void updateTrMatrix();                                   // _70
    virtual void isTeki();                                           // _74
    virtual void isPellet();                                         // _78
    virtual void inWaterCallback(WaterBox*);                         // _7C
    virtual void outWaterCallback();                                 // _80
    virtual void inWater();                                          // _84
    virtual void getFlockMgr();                                      // _88
    virtual void onStartCapture();                                   // _8C
    virtual void onUpdateCapture(Matrixf&);                          // _90
    virtual void onEndCapture();                                     // _94
    virtual void isAtari();                                          // _98
    virtual void setAtari(bool);                                     // _9C
    virtual void isAlive();                                          // _A0
    virtual void setAlive(bool);                                     // _A4
    virtual void isCollisionFlick();                                 // _A8
    virtual void setCollisionFlick(bool);                            // _AC
    virtual void isMovieActor();                                     // _B0
    virtual void isMovieExtra();                                     // _B4
    virtual void isMovieMotion();                                    // _B8
    virtual void setMovieMotion(bool);                               // _BC
    virtual void isBuried();                                         // _C0
    virtual void isFlying();                                         // _C4
    virtual void isUnderground();                                    // _C8
    virtual void isLivingThing();                                    // _CC
    virtual void isDebugCollision();                                 // _D0
    virtual void setDebugCollision(bool);                            // _D4
    virtual void doSave(Stream&);                                    // _D8
    virtual void doLoad(Stream&);                                    // _DC
    virtual void bounceCallback(Sys::Triangle*);                     // _E0
    virtual void collisionCallback(CollEvent&);                      // _E4
    virtual void platCallback(PlatEvent&);                           // _E8
    virtual void getJAIObject();                                     // _EC
    virtual void getPSCreature();                                    // _F0
    virtual void getSound_AILOD();                                   // _F4
    virtual void getSound_PosPtr();                                  // _F8
    virtual void sound_culling();                                    // _FC
    virtual void getSound_CurrAnimFrame();                           // _100
    virtual void getSound_CurrAnimSpeed();                           // _104
    virtual void on_movie_begin(bool);                               // _108
    virtual void on_movie_end(bool);                                 // _10C
    virtual void movieStartAnimation(unsigned long);                 // _110
    virtual void movieStartDemoAnimation(SysShape::AnimInfo*);       // _114
    virtual void movieSetAnimationLastFrame();                       // _118
    virtual void movieSetTranslation(Vector3<float>&, float);        // _11C
    virtual void movieSetFaceDir(float);                             // _120
    virtual void movieGotoPosition(Vector3<float>&);                 // _124
    virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _128
    virtual void getShadowParam(ShadowParam&);                       // _12C
    virtual void needShadow();                                       // _130
    virtual void getLifeGaugeParam(LifeGaugeParam&);                 // _134
    virtual void getLODSphere(Sys::Sphere&);                         // _138
    virtual void getLODCylinder(Sys::Cylinder&);                     // _13C
    virtual void startPick();                                        // _140
    virtual void endPick(bool);                                      // _144
    virtual void getMabiki();                                        // _148
    virtual void getFootmarks();                                     // _14C
    virtual void onStickStart(Creature*);                            // _150
    virtual void onStickEnd(Creature*);                              // _154
    virtual void onStickStartSelf(Creature*);                        // _158
    virtual void onStickEndSelf(Creature*);                          // _15C
    virtual void isSlotFree(short);                                  // _160
    virtual void getFreeStickSlot();                                 // _164
    virtual void getNearFreeStickSlot(Vector3<float>&);              // _168
    virtual void getRandomFreeStickSlot();                           // _16C
    virtual void onSlotStickStart(Creature*, short);                 // _170
    virtual void onSlotStickEnd(Creature*, short);                   // _174
    virtual void calcStickSlotGlobal(short, Vector3<float>&);        // _178
    virtual void getVelocityAt(Vector3<float>&, Vector3<float>&);    // _17C
    virtual void getAngularEffect(Vector3<float>&, Vector3<float>&); // _180
    virtual void applyImpulse(Vector3<float>&, Vector3<float>&);     // _184
    virtual void ignoreAtari(Creature*);                             // _188
    virtual void getSuckPos();                                       // _18C
    virtual void getGoalPos();                                       // _190
    virtual void isSuckReady();                                      // _194
    virtual void isSuckArriveWait();                                 // _198
    virtual void stimulate(Interaction&);                            // _19C
    virtual void getCreatureName();                                  // _1A0
    virtual void getCreatureID();                                    // _1A4
    virtual void _1A8() = 0;                                         // _1A8
    virtual void _1AC() = 0;                                         // _1AC
    virtual void @376 @onKeyEvent(const SysShape::KeyEvent&);        // _1B0
    virtual void getDownfloorMass();                                 // _1B4
    virtual void isPikmin();                                         // _1B8
    virtual void doColorChange();                                    // _1BC
    virtual void doDebugDL();                                        // _1C0
    virtual void update();                                           // _1C4
    virtual void move(float);                                        // _1C8
    virtual bool useMoveRotation();                                  // _1CC
    virtual void setMoveRotation(bool);                              // _1D0
    virtual void useUpdateTrMatrix();                                // _1D4
    virtual void setUpdateTrMatrix(bool);                            // _1D8
    virtual void useMoveVelocity();                                  // _1DC
    virtual void setMoveVelocity(bool);                              // _1E0
    virtual void useMapCollision();                                  // _1E4
    virtual void setMapCollision(bool);                              // _1E8
    virtual void isZikatu();                                         // _1EC
    virtual void setZikatu(bool);                                    // _1F0
    virtual void wasZikatu();                                        // _1F4
    virtual void getMapCollisionRadius();                            // _1F8
    virtual void wallCallback(Vector3<float>&);                      // _1FC
    virtual void startMotion(int, int, SysShape::MotionListener*,
                             SysShape::MotionListener*); // _200
    virtual void onKeyEvent(const SysShape::KeyEvent&);  // _204
    virtual void updateLookCreature();                   // _208
    virtual void do_updateLookCreature();                // _20C
    virtual void onSetPosition();                        // _210
    virtual void isWalking();                            // _214
    virtual void _218() = 0;                             // _218

    // _00 VTBL
};
} // namespace Game

#endif
