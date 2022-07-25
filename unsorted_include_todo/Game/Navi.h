#ifndef _GAME_NAVI_H
#define _GAME_NAVI_H

/*
    __vt__Q24Game4Navi:
    .4byte 0
    .4byte 0
    .4byte getPosition__Q24Game4NaviFv
    .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
    .4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
    .4byte collisionUpdatable__Q24Game8CreatureFv
    .4byte isPiki__Q24Game8CreatureFv
    .4byte isNavi__Q24Game8CreatureFv
    .4byte deferPikiCollision__Q24Game10CellObjectFv
    .4byte getTypeName__Q24Game8CreatureFv
    .4byte getObjType__Q24Game8CreatureFv
    .4byte constructor__Q24Game8CreatureFv
    .4byte onInit__Q24Game4NaviFPQ24Game15CreatureInitArg
    .4byte onKill__Q24Game4NaviFPQ24Game15CreatureKillArg
    .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
    .4byte doAnimation__Q24Game4NaviFv
    .4byte doEntry__Q24Game4NaviFv
    .4byte doSetView__Q24Game4NaviFi
    .4byte doViewCalc__Q24Game4NaviFv
    .4byte doSimulation__Q24Game4NaviFf
    .4byte doDirectDraw__Q24Game4NaviFR8Graphics
    .4byte getBodyRadius__Q24Game8CreatureFv
    .4byte getCellRadius__Q24Game8CreatureFv
    .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte getFaceDir__Q24Game8FakePikiFv
    .4byte "setVelocity__Q24Game4NaviFR10Vector3<f>"
    .4byte getVelocity__Q24Game8FakePikiFv
    .4byte "onSetPosition__Q24Game4NaviFR10Vector3<f>"
    .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
    .4byte updateTrMatrix__Q24Game8FakePikiFv
    .4byte isTeki__Q24Game8CreatureFv
    .4byte isPellet__Q24Game8CreatureFv
    .4byte inWaterCallback__Q24Game4NaviFPQ24Game8WaterBox
    .4byte outWaterCallback__Q24Game4NaviFv
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
    .4byte bounceCallback__Q24Game4NaviFPQ23Sys8Triangle
    .4byte collisionCallback__Q24Game4NaviFRQ24Game9CollEvent
    .4byte platCallback__Q24Game4NaviFRQ24Game9PlatEvent
    .4byte getJAIObject__Q24Game4NaviFv
    .4byte getPSCreature__Q24Game4NaviFv
    .4byte getSound_AILOD__Q24Game8CreatureFv
    .4byte getSound_PosPtr__Q24Game8FakePikiFv
    .4byte sound_culling__Q24Game8CreatureFv
    .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
    .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
    .4byte on_movie_begin__Q24Game4NaviFb
    .4byte on_movie_end__Q24Game4NaviFb
    .4byte movieStartAnimation__Q24Game4NaviFUl
    .4byte movieStartDemoAnimation__Q24Game4NaviFPQ28SysShape8AnimInfo
    .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
    .4byte "movieSetTranslation__Q24Game4NaviFR10Vector3<f>f"
    .4byte movieSetFaceDir__Q24Game4NaviFf
    .4byte "movieGotoPosition__Q24Game4NaviFR10Vector3<f>"
    .4byte movieUserCommand__Q24Game4NaviFUlPQ24Game11MoviePlayer
    .4byte getShadowParam__Q24Game4NaviFRQ24Game11ShadowParam
    .4byte needShadow__Q24Game8CreatureFv
    .4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
    .4byte getLODSphere__Q24Game4NaviFRQ23Sys6Sphere
    .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
    .4byte startPick__Q24Game8CreatureFv
    .4byte endPick__Q24Game8CreatureFb
    .4byte getMabiki__Q24Game8CreatureFv
    .4byte getFootmarks__Q24Game8CreatureFv
    .4byte onStickStart__Q24Game4NaviFPQ24Game8Creature
    .4byte onStickEnd__Q24Game4NaviFPQ24Game8Creature
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
    .4byte ignoreAtari__Q24Game4NaviFPQ24Game8Creature
    .4byte getSuckPos__Q24Game8CreatureFv
    .4byte getGoalPos__Q24Game8CreatureFv
    .4byte isSuckReady__Q24Game8CreatureFv
    .4byte isSuckArriveWait__Q24Game8CreatureFv
    .4byte stimulate__Q24Game4NaviFRQ24Game11Interaction
    .4byte getCreatureName__Q24Game4NaviFv
    .4byte getCreatureID__Q24Game4NaviFv
    .4byte 0
    .4byte 0
    .4byte "@376@onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent"
    .4byte getDownfloorMass__Q24Game4NaviFv
    .4byte isPikmin__Q24Game8FakePikiFv
    .4byte doColorChange__Q24Game8FakePikiFv
    .4byte doDebugDL__Q24Game8FakePikiFv
    .4byte update__Q24Game4NaviFv
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
    .4byte getMapCollisionRadius__Q24Game4NaviFv
    .4byte "wallCallback__Q24Game4NaviFR10Vector3<f>"
    .4byte startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
    .4byte onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent
    .4byte updateLookCreature__Q24Game8FakePikiFv
    .4byte do_updateLookCreature__Q24Game4NaviFv
    .4byte onSetPosition__Q24Game8FakePikiFv
    .4byte isWalking__Q24Game4NaviFv
    .4byte "viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"
    .4byte viewGetShape__Q24Game4NaviFv
    .4byte viewGetBaseScale__Q24Game4NaviFv
    .4byte transit__Q24Game4NaviFiPQ24Game8StateArg
    .4byte 0
    .4byte 0
    .4byte "@784@12@viewGetBaseScale__Q24Game4NaviFv"
    .4byte "@784@12@viewGetShape__Q24Game4NaviFv"
    .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
    .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
    .4byte view_start_carrymotion__Q24Game10PelletViewFv
    .4byte view_finish_carrymotion__Q24Game10PelletViewFv
    .4byte viewStartPreCarryMotion__Q24Game10PelletViewFv
    .4byte viewStartCarryMotion__Q24Game10PelletViewFv
    .4byte viewOnPelletKilled__Q24Game10PelletViewFv
    .4byte "@784@12@viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"
*/

namespace Game {
struct Creature {
	virtual void getPosition();                                      // _08
	virtual void checkCollision(CellObject*);                        // _0C
	virtual void _10() = 0;                                          // _10
	virtual void collisionUpdatable();                               // _14 (weak)
	virtual void isPiki();                                           // _18
	virtual void isNavi();                                           // _1C
	virtual void _20() = 0;                                          // _20
	virtual void getTypeName();                                      // _24
	virtual void getObjType();                                       // _28 (weak)
	virtual void constructor();                                      // _2C (weak)
	virtual void onInit(CreatureInitArg*);                           // _30
	virtual void onKill(CreatureKillArg*);                           // _34
	virtual void onInitPost(CreatureInitArg*);                       // _38 (weak)
	virtual void doAnimation();                                      // _3C
	virtual void doEntry();                                          // _40
	virtual void doSetView(int);                                     // _44
	virtual void doViewCalc();                                       // _48
	virtual void doSimulation(float);                                // _4C
	virtual void doDirectDraw(Graphics&);                            // _50
	virtual void getBodyRadius();                                    // _54
	virtual void getCellRadius();                                    // _58
	virtual void initPosition(Vector3<float>&);                      // _5C
	virtual void onInitPosition(Vector3<float>&);                    // _60 (weak)
	virtual void _64() = 0;                                          // _64
	virtual void setVelocity(Vector3<float>&);                       // _68 (weak)
	virtual void _6C() = 0;                                          // _6C
	virtual void onSetPosition(Vector3<float>&);                     // _70
	virtual void onSetPositionPost(Vector3<float>&);                 // _74 (weak)
	virtual void _78() = 0;                                          // _78
	virtual void isTeki();                                           // _7C
	virtual void isPellet();                                         // _80
	virtual void inWaterCallback(WaterBox*);                         // _84
	virtual void outWaterCallback();                                 // _88
	virtual void _8C() = 0;                                          // _8C
	virtual void getFlockMgr();                                      // _90 (weak)
	virtual void onStartCapture();                                   // _94 (weak)
	virtual void onUpdateCapture(Matrixf&);                          // _98 (weak)
	virtual void onEndCapture();                                     // _9C (weak)
	virtual void isAtari();                                          // _A0 (weak)
	virtual void setAtari(bool);                                     // _A4 (weak)
	virtual void isAlive();                                          // _A8 (weak)
	virtual void setAlive(bool);                                     // _AC (weak)
	virtual void isCollisionFlick();                                 // _B0 (weak)
	virtual void setCollisionFlick(bool);                            // _B4 (weak)
	virtual void isMovieActor();                                     // _B8 (weak)
	virtual void isMovieExtra();                                     // _BC (weak)
	virtual void isMovieMotion();                                    // _C0 (weak)
	virtual void setMovieMotion(bool);                               // _C4 (weak)
	virtual void isBuried();                                         // _C8 (weak)
	virtual void isFlying();                                         // _CC (weak)
	virtual void isUnderground();                                    // _D0 (weak)
	virtual void isLivingThing();                                    // _D4 (weak)
	virtual void isDebugCollision();                                 // _D8 (weak)
	virtual void setDebugCollision(bool);                            // _DC (weak)
	virtual void doSave(Stream&);                                    // _E0 (weak)
	virtual void doLoad(Stream&);                                    // _E4 (weak)
	virtual void bounceCallback(Sys::Triangle*);                     // _E8
	virtual void collisionCallback(CollEvent&);                      // _EC
	virtual void platCallback(PlatEvent&);                           // _F0
	virtual void getJAIObject();                                     // _F4
	virtual void getPSCreature();                                    // _F8
	virtual void getSound_AILOD();                                   // _FC (weak)
	virtual void _100() = 0;                                         // _100
	virtual void sound_culling();                                    // _104
	virtual void getSound_CurrAnimFrame();                           // _108 (weak)
	virtual void getSound_CurrAnimSpeed();                           // _10C (weak)
	virtual void on_movie_begin(bool);                               // _110
	virtual void on_movie_end(bool);                                 // _114
	virtual void movieStartAnimation(unsigned long);                 // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);       // _11C
	virtual void movieSetAnimationLastFrame();                       // _120 (weak)
	virtual void movieSetTranslation(Vector3<float>&, float);        // _124
	virtual void movieSetFaceDir(float);                             // _128
	virtual void movieGotoPosition(Vector3<float>&);                 // _12C
	virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _130
	virtual void getShadowParam(ShadowParam&);                       // _134
	virtual void needShadow();                                       // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);                 // _13C
	virtual void getLODSphere(Sys::Sphere&);                         // _140
	virtual void getLODCylinder(Sys::Cylinder&);                     // _144 (weak)
	virtual void startPick();                                        // _148 (weak)
	virtual void endPick(bool);                                      // _14C (weak)
	virtual void getMabiki();                                        // _150 (weak)
	virtual void getFootmarks();                                     // _154 (weak)
	virtual void onStickStart(Creature*);                            // _158
	virtual void onStickEnd(Creature*);                              // _15C
	virtual void onStickStartSelf(Creature*);                        // _160 (weak)
	virtual void onStickEndSelf(Creature*);                          // _164 (weak)
	virtual void isSlotFree(short);                                  // _168 (weak)
	virtual void getFreeStickSlot();                                 // _16C (weak)
	virtual void getNearFreeStickSlot(Vector3<float>&);              // _170 (weak)
	virtual void getRandomFreeStickSlot();                           // _174 (weak)
	virtual void onSlotStickStart(Creature*, short);                 // _178 (weak)
	virtual void onSlotStickEnd(Creature*, short);                   // _17C (weak)
	virtual void calcStickSlotGlobal(short, Vector3<float>&);        // _180 (weak)
	virtual void _184() = 0;                                         // _184
	virtual void getAngularEffect(Vector3<float>&, Vector3<float>&); // _188 (weak)
	virtual void applyImpulse(Vector3<float>&, Vector3<float>&);     // _18C
	virtual void ignoreAtari(Creature*);                             // _190
	virtual void getSuckPos();                                       // _194 (weak)
	virtual void getGoalPos();                                       // _198 (weak)
	virtual void isSuckReady();                                      // _19C (weak)
	virtual void isSuckArriveWait();                                 // _1A0 (weak)
};
} // namespace Game

namespace Game {
struct FakePiki {
	virtual void getPosition();                                                               // _08
	virtual void _0C() = 0;                                                                   // _0C
	virtual void getBoundingSphere(Sys::Sphere&);                                             // _10 (weak)
	virtual void _14() = 0;                                                                   // _14
	virtual void _18() = 0;                                                                   // _18
	virtual void _1C() = 0;                                                                   // _1C
	virtual void _20() = 0;                                                                   // _20
	virtual void _24() = 0;                                                                   // _24
	virtual void _28() = 0;                                                                   // _28
	virtual void _2C() = 0;                                                                   // _2C
	virtual void onInit(CreatureInitArg*);                                                    // _30
	virtual void onKill(CreatureKillArg*);                                                    // _34
	virtual void _38() = 0;                                                                   // _38
	virtual void doAnimation();                                                               // _3C
	virtual void doEntry();                                                                   // _40
	virtual void doSetView(int);                                                              // _44
	virtual void doViewCalc();                                                                // _48
	virtual void doSimulation(float);                                                         // _4C
	virtual void doDirectDraw(Graphics&);                                                     // _50
	virtual void _54() = 0;                                                                   // _54
	virtual void _58() = 0;                                                                   // _58
	virtual void _5C() = 0;                                                                   // _5C
	virtual void _60() = 0;                                                                   // _60
	virtual void getFaceDir();                                                                // _64 (weak)
	virtual void setVelocity(Vector3<float>&);                                                // _68 (weak)
	virtual void getVelocity();                                                               // _6C (weak)
	virtual void onSetPosition(Vector3<float>&);                                              // _70
	virtual void _74() = 0;                                                                   // _74
	virtual void updateTrMatrix();                                                            // _78
	virtual void _7C() = 0;                                                                   // _7C
	virtual void _80() = 0;                                                                   // _80
	virtual void inWaterCallback(WaterBox*);                                                  // _84
	virtual void outWaterCallback();                                                          // _88
	virtual void inWater();                                                                   // _8C (weak)
	virtual void _90() = 0;                                                                   // _90
	virtual void _94() = 0;                                                                   // _94
	virtual void _98() = 0;                                                                   // _98
	virtual void _9C() = 0;                                                                   // _9C
	virtual void _A0() = 0;                                                                   // _A0
	virtual void _A4() = 0;                                                                   // _A4
	virtual void _A8() = 0;                                                                   // _A8
	virtual void _AC() = 0;                                                                   // _AC
	virtual void _B0() = 0;                                                                   // _B0
	virtual void _B4() = 0;                                                                   // _B4
	virtual void _B8() = 0;                                                                   // _B8
	virtual void _BC() = 0;                                                                   // _BC
	virtual void _C0() = 0;                                                                   // _C0
	virtual void _C4() = 0;                                                                   // _C4
	virtual void _C8() = 0;                                                                   // _C8
	virtual void _CC() = 0;                                                                   // _CC
	virtual void _D0() = 0;                                                                   // _D0
	virtual void _D4() = 0;                                                                   // _D4
	virtual void _D8() = 0;                                                                   // _D8
	virtual void _DC() = 0;                                                                   // _DC
	virtual void _E0() = 0;                                                                   // _E0
	virtual void _E4() = 0;                                                                   // _E4
	virtual void bounceCallback(Sys::Triangle*);                                              // _E8
	virtual void collisionCallback(CollEvent&);                                               // _EC
	virtual void platCallback(PlatEvent&);                                                    // _F0
	virtual void getJAIObject();                                                              // _F4
	virtual void getPSCreature();                                                             // _F8
	virtual void _FC() = 0;                                                                   // _FC
	virtual void getSound_PosPtr();                                                           // _100 (weak)
	virtual void _104() = 0;                                                                  // _104
	virtual void _108() = 0;                                                                  // _108
	virtual void _10C() = 0;                                                                  // _10C
	virtual void on_movie_begin(bool);                                                        // _110
	virtual void on_movie_end(bool);                                                          // _114
	virtual void movieStartAnimation(unsigned long);                                          // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);                                // _11C
	virtual void _120() = 0;                                                                  // _120
	virtual void movieSetTranslation(Vector3<float>&, float);                                 // _124
	virtual void movieSetFaceDir(float);                                                      // _128
	virtual void movieGotoPosition(Vector3<float>&);                                          // _12C
	virtual void movieUserCommand(unsigned long, MoviePlayer*);                               // _130
	virtual void getShadowParam(ShadowParam&);                                                // _134
	virtual void _138() = 0;                                                                  // _138
	virtual void _13C() = 0;                                                                  // _13C
	virtual void getLODSphere(Sys::Sphere&);                                                  // _140
	virtual void _144() = 0;                                                                  // _144
	virtual void _148() = 0;                                                                  // _148
	virtual void _14C() = 0;                                                                  // _14C
	virtual void _150() = 0;                                                                  // _150
	virtual void _154() = 0;                                                                  // _154
	virtual void onStickStart(Creature*);                                                     // _158
	virtual void onStickEnd(Creature*);                                                       // _15C
	virtual void _160() = 0;                                                                  // _160
	virtual void _164() = 0;                                                                  // _164
	virtual void _168() = 0;                                                                  // _168
	virtual void _16C() = 0;                                                                  // _16C
	virtual void _170() = 0;                                                                  // _170
	virtual void _174() = 0;                                                                  // _174
	virtual void _178() = 0;                                                                  // _178
	virtual void _17C() = 0;                                                                  // _17C
	virtual void _180() = 0;                                                                  // _180
	virtual void getVelocityAt(Vector3<float>&, Vector3<float>&);                             // _184 (weak)
	virtual void _188() = 0;                                                                  // _188
	virtual void _18C() = 0;                                                                  // _18C
	virtual void ignoreAtari(Creature*);                                                      // _190
	virtual void _194() = 0;                                                                  // _194
	virtual void _198() = 0;                                                                  // _198
	virtual void _19C() = 0;                                                                  // _19C
	virtual void _1A0() = 0;                                                                  // _1A0
	virtual void stimulate(Interaction&);                                                     // _1A4
	virtual void getCreatureName();                                                           // _1A8 (weak)
	virtual void getCreatureID();                                                             // _1AC (weak)
	virtual void _1B0() = 0;                                                                  // _1B0
	virtual void _1B4() = 0;                                                                  // _1B4
	virtual void _1B8() = 0;                                                                  // _1B8
	virtual void getDownfloorMass();                                                          // _1BC
	virtual void isPikmin();                                                                  // _1C0 (weak)
	virtual void doColorChange();                                                             // _1C4 (weak)
	virtual void doDebugDL();                                                                 // _1C8 (weak)
	virtual void update();                                                                    // _1CC
	virtual void move(float);                                                                 // _1D0
	virtual void useMoveRotation();                                                           // _1D4 (weak)
	virtual void setMoveRotation(bool);                                                       // _1D8 (weak)
	virtual void useUpdateTrMatrix();                                                         // _1DC (weak)
	virtual void setUpdateTrMatrix(bool);                                                     // _1E0 (weak)
	virtual void useMoveVelocity();                                                           // _1E4 (weak)
	virtual void setMoveVelocity(bool);                                                       // _1E8 (weak)
	virtual void useMapCollision();                                                           // _1EC (weak)
	virtual void setMapCollision(bool);                                                       // _1F0 (weak)
	virtual void isZikatu();                                                                  // _1F4 (weak)
	virtual void setZikatu(bool);                                                             // _1F8 (weak)
	virtual void wasZikatu();                                                                 // _1FC (weak)
	virtual void getMapCollisionRadius();                                                     // _200
	virtual void wallCallback(Vector3<float>&);                                               // _204
	virtual void startMotion(int, int, SysShape::MotionListener*, SysShape::MotionListener*); // _208
	virtual void onKeyEvent(const SysShape::KeyEvent&);                                       // _20C (weak)
	virtual void updateLookCreature();                                                        // _210
	virtual void do_updateLookCreature();                                                     // _214
	virtual void onSetPosition();                                                             // _218 (weak)
};
} // namespace Game

namespace Game {
struct CellObject {
	virtual void getPosition();        // _08
	virtual void _0C() = 0;            // _0C
	virtual void _10() = 0;            // _10
	virtual void _14() = 0;            // _14
	virtual void _18() = 0;            // _18
	virtual void _1C() = 0;            // _1C
	virtual void deferPikiCollision(); // _20 (weak)
};
} // namespace Game

namespace Game {
struct PelletView {
	virtual void getPosition();                                 // _08
	virtual void _0C() = 0;                                     // _0C
	virtual void _10() = 0;                                     // _10
	virtual void _14() = 0;                                     // _14
	virtual void _18() = 0;                                     // _18
	virtual void _1C() = 0;                                     // _1C
	virtual void _20() = 0;                                     // _20
	virtual void _24() = 0;                                     // _24
	virtual void _28() = 0;                                     // _28
	virtual void _2C() = 0;                                     // _2C
	virtual void onInit(CreatureInitArg*);                      // _30
	virtual void onKill(CreatureKillArg*);                      // _34
	virtual void _38() = 0;                                     // _38
	virtual void doAnimation();                                 // _3C
	virtual void doEntry();                                     // _40
	virtual void doSetView(int);                                // _44
	virtual void doViewCalc();                                  // _48
	virtual void doSimulation(float);                           // _4C
	virtual void doDirectDraw(Graphics&);                       // _50
	virtual void _54() = 0;                                     // _54
	virtual void _58() = 0;                                     // _58
	virtual void _5C() = 0;                                     // _5C
	virtual void _60() = 0;                                     // _60
	virtual void _64() = 0;                                     // _64
	virtual void setVelocity(Vector3<float>&);                  // _68 (weak)
	virtual void _6C() = 0;                                     // _6C
	virtual void onSetPosition(Vector3<float>&);                // _70
	virtual void _74() = 0;                                     // _74
	virtual void _78() = 0;                                     // _78
	virtual void _7C() = 0;                                     // _7C
	virtual void _80() = 0;                                     // _80
	virtual void inWaterCallback(WaterBox*);                    // _84
	virtual void outWaterCallback();                            // _88
	virtual void _8C() = 0;                                     // _8C
	virtual void _90() = 0;                                     // _90
	virtual void _94() = 0;                                     // _94
	virtual void _98() = 0;                                     // _98
	virtual void _9C() = 0;                                     // _9C
	virtual void _A0() = 0;                                     // _A0
	virtual void _A4() = 0;                                     // _A4
	virtual void _A8() = 0;                                     // _A8
	virtual void _AC() = 0;                                     // _AC
	virtual void _B0() = 0;                                     // _B0
	virtual void _B4() = 0;                                     // _B4
	virtual void _B8() = 0;                                     // _B8
	virtual void _BC() = 0;                                     // _BC
	virtual void _C0() = 0;                                     // _C0
	virtual void _C4() = 0;                                     // _C4
	virtual void _C8() = 0;                                     // _C8
	virtual void _CC() = 0;                                     // _CC
	virtual void _D0() = 0;                                     // _D0
	virtual void _D4() = 0;                                     // _D4
	virtual void _D8() = 0;                                     // _D8
	virtual void _DC() = 0;                                     // _DC
	virtual void _E0() = 0;                                     // _E0
	virtual void _E4() = 0;                                     // _E4
	virtual void bounceCallback(Sys::Triangle*);                // _E8
	virtual void collisionCallback(CollEvent&);                 // _EC
	virtual void platCallback(PlatEvent&);                      // _F0
	virtual void getJAIObject();                                // _F4
	virtual void getPSCreature();                               // _F8
	virtual void _FC()  = 0;                                    // _FC
	virtual void _100() = 0;                                    // _100
	virtual void _104() = 0;                                    // _104
	virtual void _108() = 0;                                    // _108
	virtual void _10C() = 0;                                    // _10C
	virtual void on_movie_begin(bool);                          // _110
	virtual void on_movie_end(bool);                            // _114
	virtual void movieStartAnimation(unsigned long);            // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);  // _11C
	virtual void _120() = 0;                                    // _120
	virtual void movieSetTranslation(Vector3<float>&, float);   // _124
	virtual void movieSetFaceDir(float);                        // _128
	virtual void movieGotoPosition(Vector3<float>&);            // _12C
	virtual void movieUserCommand(unsigned long, MoviePlayer*); // _130
	virtual void getShadowParam(ShadowParam&);                  // _134
	virtual void _138() = 0;                                    // _138
	virtual void _13C() = 0;                                    // _13C
	virtual void getLODSphere(Sys::Sphere&);                    // _140
	virtual void _144() = 0;                                    // _144
	virtual void _148() = 0;                                    // _148
	virtual void _14C() = 0;                                    // _14C
	virtual void _150() = 0;                                    // _150
	virtual void _154() = 0;                                    // _154
	virtual void onStickStart(Creature*);                       // _158
	virtual void onStickEnd(Creature*);                         // _15C
	virtual void _160() = 0;                                    // _160
	virtual void _164() = 0;                                    // _164
	virtual void _168() = 0;                                    // _168
	virtual void _16C() = 0;                                    // _16C
	virtual void _170() = 0;                                    // _170
	virtual void _174() = 0;                                    // _174
	virtual void _178() = 0;                                    // _178
	virtual void _17C() = 0;                                    // _17C
	virtual void _180() = 0;                                    // _180
	virtual void _184() = 0;                                    // _184
	virtual void _188() = 0;                                    // _188
	virtual void _18C() = 0;                                    // _18C
	virtual void ignoreAtari(Creature*);                        // _190
	virtual void _194() = 0;                                    // _194
	virtual void _198() = 0;                                    // _198
	virtual void _19C() = 0;                                    // _19C
	virtual void _1A0() = 0;                                    // _1A0
	virtual void stimulate(Interaction&);                       // _1A4
	virtual void getCreatureName();                             // _1A8 (weak)
	virtual void getCreatureID();                               // _1AC (weak)
	virtual void _1B0() = 0;                                    // _1B0
	virtual void _1B4() = 0;                                    // _1B4
	virtual void _1B8() = 0;                                    // _1B8
	virtual void getDownfloorMass();                            // _1BC
	virtual void _1C0() = 0;                                    // _1C0
	virtual void _1C4() = 0;                                    // _1C4
	virtual void _1C8() = 0;                                    // _1C8
	virtual void update();                                      // _1CC
	virtual void _1D0() = 0;                                    // _1D0
	virtual void _1D4() = 0;                                    // _1D4
	virtual void _1D8() = 0;                                    // _1D8
	virtual void _1DC() = 0;                                    // _1DC
	virtual void _1E0() = 0;                                    // _1E0
	virtual void _1E4() = 0;                                    // _1E4
	virtual void _1E8() = 0;                                    // _1E8
	virtual void _1EC() = 0;                                    // _1EC
	virtual void _1F0() = 0;                                    // _1F0
	virtual void _1F4() = 0;                                    // _1F4
	virtual void _1F8() = 0;                                    // _1F8
	virtual void _1FC() = 0;                                    // _1FC
	virtual void getMapCollisionRadius();                       // _200
	virtual void wallCallback(Vector3<float>&);                 // _204
	virtual void _208() = 0;                                    // _208
	virtual void onKeyEvent(const SysShape::KeyEvent&);         // _20C (weak)
	virtual void _210() = 0;                                    // _210
	virtual void do_updateLookCreature();                       // _214
	virtual void _218() = 0;                                    // _218
	virtual void isWalking();                                   // _21C
	virtual void viewEntryShape(Matrixf&, Vector3<float>&);     // _220 (weak)
	virtual void viewGetShape();                                // _224 (weak)
	virtual void viewGetBaseScale();                            // _228 (weak)
	virtual void transit(int, StateArg*);                       // _22C
	virtual void _230() = 0;                                    // _230
	virtual void _234() = 0;                                    // _234
	virtual void _238() = 0;                                    // _238
	virtual void _23C() = 0;                                    // _23C
	virtual void viewGetCollTreeJointIndex();                   // _240 (weak)
	virtual void viewGetCollTreeOffset();                       // _244 (weak)
	virtual void view_start_carrymotion();                      // _248 (weak)
	virtual void view_finish_carrymotion();                     // _24C (weak)
	virtual void viewStartPreCarryMotion();                     // _250 (weak)
	virtual void viewStartCarryMotion();                        // _254 (weak)
	virtual void viewOnPelletKilled();                          // _258 (weak)
};
} // namespace Game

namespace Game {
struct Navi : public Creature, public FakePiki, public CellObject, public PelletView {
	virtual void getPosition();                                 // _08
	virtual void onInit(CreatureInitArg*);                      // _30
	virtual void onKill(CreatureKillArg*);                      // _34
	virtual void doAnimation();                                 // _3C
	virtual void doEntry();                                     // _40
	virtual void doSetView(int);                                // _44
	virtual void doViewCalc();                                  // _48
	virtual void doSimulation(float);                           // _4C
	virtual void doDirectDraw(Graphics&);                       // _50
	virtual void setVelocity(Vector3<float>&);                  // _68 (weak)
	virtual void onSetPosition(Vector3<float>&);                // _70
	virtual void inWaterCallback(WaterBox*);                    // _84
	virtual void outWaterCallback();                            // _88
	virtual void bounceCallback(Sys::Triangle*);                // _E8
	virtual void collisionCallback(CollEvent&);                 // _EC
	virtual void platCallback(PlatEvent&);                      // _F0
	virtual void getJAIObject();                                // _F4
	virtual void getPSCreature();                               // _F8
	virtual void on_movie_begin(bool);                          // _110
	virtual void on_movie_end(bool);                            // _114
	virtual void movieStartAnimation(unsigned long);            // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);  // _11C
	virtual void movieSetTranslation(Vector3<float>&, float);   // _124
	virtual void movieSetFaceDir(float);                        // _128
	virtual void movieGotoPosition(Vector3<float>&);            // _12C
	virtual void movieUserCommand(unsigned long, MoviePlayer*); // _130
	virtual void getShadowParam(ShadowParam&);                  // _134
	virtual void getLODSphere(Sys::Sphere&);                    // _140
	virtual void onStickStart(Creature*);                       // _158
	virtual void onStickEnd(Creature*);                         // _15C
	virtual void ignoreAtari(Creature*);                        // _190
	virtual void stimulate(Interaction&);                       // _1A4
	virtual void getCreatureName();                             // _1A8 (weak)
	virtual void getCreatureID();                               // _1AC (weak)
	virtual void _1B0() = 0;                                    // _1B0
	virtual void _1B4() = 0;                                    // _1B4
	virtual void getDownfloorMass();                            // _1BC
	virtual void update();                                      // _1CC
	virtual void getMapCollisionRadius();                       // _200
	virtual void wallCallback(Vector3<float>&);                 // _204
	virtual void onKeyEvent(const SysShape::KeyEvent&);         // _20C (weak)
	virtual void do_updateLookCreature();                       // _214
	virtual void isWalking();                                   // _21C
	virtual void viewEntryShape(Matrixf&, Vector3<float>&);     // _220 (weak)
	virtual void viewGetShape();                                // _224 (weak)
	virtual void viewGetBaseScale();                            // _228 (weak)
	virtual void transit(int, StateArg*);                       // _22C
	virtual void _230() = 0;                                    // _230
	virtual void _234() = 0;                                    // _234

	Navi();
	void procActionButton();
	void setupNukuAdjustArg(Game::ItemPikihead::Item*, Game::NaviNukuAdjustStateArg&);
	void hasDope(int);
	void getDopeCount(int);
	void useDope(int);
	void incDopeCount(int);
	void applyDopes(int, Vector3<float>&);
	void applyDopeSmoke(Game::CellObject*);
	void getStateID();
	void getOlimarData();
	void updateCursor();
	void setLifeMax();
	void getLifeRatio();
	void set_movie_draw(bool);
	void setDeadLaydown();
	void checkHole();
	void checkCave();
	void checkBigFountain();
	void checkOnyon();
	void disableController();
	void control();
	void makeVelocity();
	void reviseController(Vector3<float>&);
	void callPikis();
	void invincible();
	void setInvincibleTimer(unsigned char);
	void startDamage(float);
	void addDamage(float, bool);
	void enterAllPikis();
	void formationable();
	void updateKaisanDisable();
	void clearKaisanDisable();
	void throwable();
	void startThrowDisable();
	void updateThrowDisable();
	void clearThrowDisable();
	void holeinAllPikis(Vector3<float>&);
	void fountainonAllPikis(Vector3<float>&);
	void demowaitAllPikis();
	void releasePikis();
	void makeCStick(bool);
	void isCStickNetural();
	void findNextThrowPiki();
	void ogGetNextThrowPiki();
	void throwPiki(Game::Piki*, Vector3<float>&);
	void commandOn();
	void demoCheck();
	void checkDemoNaviAndPiki(Sys::Sphere&);
};
} // namespace Game

#endif
