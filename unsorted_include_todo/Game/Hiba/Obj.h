#ifndef _GAME_HIBA_OBJ_H
#define _GAME_HIBA_OBJ_H

/*
    __vt__Q34Game4Hiba3Obj:
    .4byte 0
    .4byte 0
    .4byte getPosition__Q24Game9EnemyBaseFv
    .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
    .4byte getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
    .4byte collisionUpdatable__Q24Game8CreatureFv
    .4byte isPiki__Q24Game8CreatureFv
    .4byte isNavi__Q24Game8CreatureFv
    .4byte deferPikiCollision__Q24Game10CellObjectFv
    .4byte getTypeName__Q24Game8CreatureFv
    .4byte getObjType__Q24Game8CreatureFv
    .4byte constructor__Q24Game9EnemyBaseFv
    .4byte onInit__Q34Game4Hiba3ObjFPQ24Game15CreatureInitArg
    .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
    .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
    .4byte doAnimation__Q24Game9EnemyBaseFv
    .4byte doEntry__Q24Game9EnemyBaseFv
    .4byte doSetView__Q24Game9EnemyBaseFi
    .4byte doViewCalc__Q24Game9EnemyBaseFv
    .4byte doSimulation__Q34Game4Hiba3ObjFf
    .4byte doDirectDraw__Q34Game4Hiba3ObjFR8Graphics
    .4byte getBodyRadius__Q24Game9EnemyBaseFv
    .4byte getCellRadius__Q24Game9EnemyBaseFv
    .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte getFaceDir__Q24Game9EnemyBaseFv
    .4byte "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
    .4byte getVelocity__Q24Game9EnemyBaseFv
    .4byte "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
    .4byte "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
    .4byte updateTrMatrix__Q24Game9EnemyBaseFv
    .4byte isTeki__Q24Game9EnemyBaseFv
    .4byte isPellet__Q24Game8CreatureFv
    .4byte inWaterCallback__Q34Game4Hiba3ObjFPQ24Game8WaterBox
    .4byte outWaterCallback__Q34Game4Hiba3ObjFv
    .4byte inWater__Q24Game9EnemyBaseFv
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
    .4byte isFlying__Q24Game9EnemyBaseFv
    .4byte isUnderground__Q24Game8CreatureFv
    .4byte isLivingThing__Q34Game4Hiba3ObjFv
    .4byte isDebugCollision__Q24Game8CreatureFv
    .4byte setDebugCollision__Q24Game8CreatureFb
    .4byte doSave__Q24Game8CreatureFR6Stream
    .4byte doLoad__Q24Game8CreatureFR6Stream
    .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
    .4byte collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
    .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
    .4byte getJAIObject__Q24Game9EnemyBaseFv
    .4byte getPSCreature__Q24Game9EnemyBaseFv
    .4byte getSound_AILOD__Q24Game8CreatureFv
    .4byte getSound_PosPtr__Q24Game9EnemyBaseFv
    .4byte sound_culling__Q24Game9EnemyBaseFv
    .4byte getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
    .4byte getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
    .4byte on_movie_begin__Q24Game8CreatureFb
    .4byte on_movie_end__Q24Game8CreatureFb
    .4byte movieStartAnimation__Q24Game8CreatureFUl
    .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
    .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
    .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
    .4byte movieSetFaceDir__Q24Game8CreatureFf
    .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
    .4byte getShadowParam__Q34Game4Hiba3ObjFRQ24Game11ShadowParam
    .4byte needShadow__Q24Game9EnemyBaseFv
    .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
    .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
    .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
    .4byte startPick__Q24Game8CreatureFv
    .4byte endPick__Q24Game8CreatureFb
    .4byte getMabiki__Q24Game8CreatureFv
    .4byte getFootmarks__Q24Game8CreatureFv
    .4byte onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature
    .4byte onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
    .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
    .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
    .4byte isSlotFree__Q24Game8CreatureFs
    .4byte getFreeStickSlot__Q24Game8CreatureFv
    .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
    .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
    .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
    .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
    .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
    .4byte "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
    .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
    .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
    .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
    .4byte getSuckPos__Q24Game8CreatureFv
    .4byte getGoalPos__Q24Game8CreatureFv
    .4byte isSuckReady__Q24Game8CreatureFv
    .4byte isSuckArriveWait__Q24Game8CreatureFv
    .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
    .4byte getCreatureName__Q24Game9EnemyBaseFv
    .4byte getCreatureID__Q24Game9EnemyBaseFv
    .4byte 0
    .4byte 0
    .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
    .4byte __dt__Q34Game4Hiba3ObjFv
    .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
    .4byte setInitialSetting__Q34Game4Hiba3ObjFPQ24Game21EnemyInitialParamBase
    .4byte update__Q24Game9EnemyBaseFv
    .4byte doUpdate__Q34Game4Hiba3ObjFv
    .4byte doUpdateCommon__Q24Game9EnemyBaseFv
    .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
    .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
    .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
    .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
    .4byte doAnimationStick__Q24Game9EnemyBaseFv
    .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
    .4byte doDebugDraw__Q34Game4Hiba3ObjFR8Graphics
    .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
    .4byte doSimulationGround__Q24Game9EnemyBaseFf
    .4byte doSimulationFlying__Q24Game9EnemyBaseFf
    .4byte doSimulationStick__Q24Game9EnemyBaseFf
    .4byte changeMaterial__Q24Game9EnemyBaseFv
    .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
    .4byte getFitEffectPos__Q24Game9EnemyBaseFv
    .4byte viewGetShape__Q24Game9EnemyBaseFv
    .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
    .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
    .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
    .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
    .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
    .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
    .4byte setParameters__Q24Game9EnemyBaseFv
    .4byte initMouthSlots__Q24Game9EnemyBaseFv
    .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
    .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
    .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
    .4byte injure__Q24Game9EnemyBaseFv
    .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
    .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
    .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
    .4byte updateEfxHamon__Q24Game9EnemyBaseFv
    .4byte createEfxHamon__Q24Game9EnemyBaseFv
    .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
    .4byte getEnemyTypeID__Q34Game4Hiba3ObjFv
    .4byte getMouthSlots__Q24Game9EnemyBaseFv
    .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
    .4byte throwupItem__Q24Game9EnemyBaseFv
    .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
    .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
    .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
    .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
    .4byte damageCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
    .4byte pressCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
    .4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
    .4byte hipdropCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
    .4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
    .4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
    .4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
    .4byte "bombCallBack__Q34Game4Hiba3ObjFPQ24Game8CreatureR10Vector3<f>f"
    .4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
    .4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
    .4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
    .4byte doStartStoneState__Q24Game9EnemyBaseFv
    .4byte doFinishStoneState__Q24Game9EnemyBaseFv
    .4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
    .4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
    .4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
    .4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
    .4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
    .4byte lifeRecover__Q34Game4Hiba3ObjFv
    .4byte startCarcassMotion__Q24Game9EnemyBaseFv
    .4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
    .4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
    .4byte doBecomeCarcass__Q24Game9EnemyBaseFv
    .4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
    .4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
    .4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
    .4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
    .4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
    .4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
    .4byte getDownSmokeScale__Q24Game9EnemyBaseFv
    .4byte doStartMovie__Q24Game9EnemyBaseFv
    .4byte doEndMovie__Q24Game9EnemyBaseFv
    .4byte setFSM__Q34Game4Hiba3ObjFPQ34Game4Hiba3FSM
    .4byte 0
    .4byte 0
    .4byte viewGetBaseScale__Q24Game10PelletViewFv
    .4byte "@716@12@viewGetShape__Q24Game9EnemyBaseFv"
    .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
    .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
    .4byte "@716@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
    .4byte "@716@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
    .4byte "@716@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
    .4byte "@716@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
    .4byte "@716@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
    .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
*/

namespace Game {
struct EnemyBase {
	virtual void getPosition();                                     // _08 (weak)
	virtual void _0C() = 0;                                         // _0C
	virtual void getBoundingSphere(Sys::Sphere&);                   // _10 (weak)
	virtual void _14() = 0;                                         // _14
	virtual void _18() = 0;                                         // _18
	virtual void _1C() = 0;                                         // _1C
	virtual void _20() = 0;                                         // _20
	virtual void _24() = 0;                                         // _24
	virtual void _28() = 0;                                         // _28
	virtual void constructor();                                     // _2C
	virtual void onInit(CreatureInitArg*);                          // _30
	virtual void onKill(CreatureKillArg*);                          // _34
	virtual void onInitPost(CreatureInitArg*);                      // _38
	virtual void doAnimation();                                     // _3C
	virtual void doEntry();                                         // _40
	virtual void doSetView(int);                                    // _44
	virtual void doViewCalc();                                      // _48
	virtual void doSimulation(float);                               // _4C (weak)
	virtual void doDirectDraw(Graphics&);                           // _50
	virtual void getBodyRadius();                                   // _54 (weak)
	virtual void getCellRadius();                                   // _58 (weak)
	virtual void _5C() = 0;                                         // _5C
	virtual void _60() = 0;                                         // _60
	virtual void getFaceDir();                                      // _64 (weak)
	virtual void setVelocity(Vector3<float>&);                      // _68 (weak)
	virtual void getVelocity();                                     // _6C (weak)
	virtual void onSetPosition(Vector3<float>&);                    // _70 (weak)
	virtual void onSetPositionPost(Vector3<float>&);                // _74 (weak)
	virtual void updateTrMatrix();                                  // _78
	virtual void isTeki();                                          // _7C (weak)
	virtual void _80() = 0;                                         // _80
	virtual void inWaterCallback(WaterBox*);                        // _84 (weak)
	virtual void outWaterCallback();                                // _88 (weak)
	virtual void inWater();                                         // _8C (weak)
	virtual void _90() = 0;                                         // _90
	virtual void _94() = 0;                                         // _94
	virtual void _98() = 0;                                         // _98
	virtual void _9C() = 0;                                         // _9C
	virtual void _A0() = 0;                                         // _A0
	virtual void _A4() = 0;                                         // _A4
	virtual void _A8() = 0;                                         // _A8
	virtual void _AC() = 0;                                         // _AC
	virtual void _B0() = 0;                                         // _B0
	virtual void _B4() = 0;                                         // _B4
	virtual void _B8() = 0;                                         // _B8
	virtual void _BC() = 0;                                         // _BC
	virtual void _C0() = 0;                                         // _C0
	virtual void _C4() = 0;                                         // _C4
	virtual void _C8() = 0;                                         // _C8
	virtual void isFlying();                                        // _CC (weak)
	virtual void _D0() = 0;                                         // _D0
	virtual void isLivingThing();                                   // _D4 (weak)
	virtual void _D8() = 0;                                         // _D8
	virtual void _DC() = 0;                                         // _DC
	virtual void _E0() = 0;                                         // _E0
	virtual void _E4() = 0;                                         // _E4
	virtual void _E8() = 0;                                         // _E8
	virtual void collisionCallback(CollEvent&);                     // _EC
	virtual void _F0() = 0;                                         // _F0
	virtual void getJAIObject();                                    // _F4
	virtual void getPSCreature();                                   // _F8
	virtual void _FC() = 0;                                         // _FC
	virtual void getSound_PosPtr();                                 // _100 (weak)
	virtual void sound_culling();                                   // _104 (weak)
	virtual void getSound_CurrAnimFrame();                          // _108 (weak)
	virtual void getSound_CurrAnimSpeed();                          // _10C (weak)
	virtual void _110() = 0;                                        // _110
	virtual void _114() = 0;                                        // _114
	virtual void _118() = 0;                                        // _118
	virtual void _11C() = 0;                                        // _11C
	virtual void _120() = 0;                                        // _120
	virtual void _124() = 0;                                        // _124
	virtual void _128() = 0;                                        // _128
	virtual void _12C() = 0;                                        // _12C
	virtual void _130() = 0;                                        // _130
	virtual void getShadowParam(ShadowParam&);                      // _134
	virtual void needShadow();                                      // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);                // _13C
	virtual void getLODSphere(Sys::Sphere&);                        // _140 (weak)
	virtual void _144() = 0;                                        // _144
	virtual void _148() = 0;                                        // _148
	virtual void _14C() = 0;                                        // _14C
	virtual void _150() = 0;                                        // _150
	virtual void _154() = 0;                                        // _154
	virtual void onStickStart(Creature*);                           // _158
	virtual void onStickEnd(Creature*);                             // _15C
	virtual void _160() = 0;                                        // _160
	virtual void _164() = 0;                                        // _164
	virtual void _168() = 0;                                        // _168
	virtual void _16C() = 0;                                        // _16C
	virtual void _170() = 0;                                        // _170
	virtual void _174() = 0;                                        // _174
	virtual void _178() = 0;                                        // _178
	virtual void _17C() = 0;                                        // _17C
	virtual void _180() = 0;                                        // _180
	virtual void getVelocityAt(Vector3<float>&, Vector3<float>&);   // _184 (weak)
	virtual void _188() = 0;                                        // _188
	virtual void _18C() = 0;                                        // _18C
	virtual void _190() = 0;                                        // _190
	virtual void _194() = 0;                                        // _194
	virtual void _198() = 0;                                        // _198
	virtual void _19C() = 0;                                        // _19C
	virtual void _1A0() = 0;                                        // _1A0
	virtual void stimulate(Interaction&);                           // _1A4
	virtual void getCreatureName();                                 // _1A8 (weak)
	virtual void getCreatureID();                                   // _1AC (weak)
	virtual void _1B0() = 0;                                        // _1B0
	virtual void _1B4() = 0;                                        // _1B4
	virtual void _1B8() = 0;                                        // _1B8
	virtual ~EnemyBase();                                           // _1BC (weak)
	virtual void birth(Vector3<float>&, float);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);         // _1C4
	virtual void update();                                          // _1C8
	virtual void doUpdate();                                        // _1CC
	virtual void doUpdateCommon();                                  // _1D0
	virtual void doUpdateCarcass();                                 // _1D4
	virtual void doAnimationUpdateAnimator();                       // _1D8
	virtual void doAnimationCullingOff();                           // _1DC
	virtual void doAnimationCullingOn();                            // _1E0
	virtual void doAnimationStick();                                // _1E4
	virtual void doSimulationCarcass(float);                        // _1E8
	virtual void doDebugDraw(Graphics&);                            // _1EC
	virtual void doSimpleDraw(Viewport*);                           // _1F0 (weak)
	virtual void doSimulationGround(float);                         // _1F4
	virtual void doSimulationFlying(float);                         // _1F8
	virtual void doSimulationStick(float);                          // _1FC
	virtual void changeMaterial();                                  // _200
	virtual void getCommonEffectPos(Vector3<float>&);               // _204
	virtual void getFitEffectPos();                                 // _208
	virtual void viewGetShape();                                    // _20C (weak)
	virtual void view_start_carrymotion();                          // _210 (weak)
	virtual void view_finish_carrymotion();                         // _214 (weak)
	virtual void viewStartPreCarryMotion();                         // _218 (weak)
	virtual void viewStartCarryMotion();                            // _21C (weak)
	virtual void viewOnPelletKilled();                              // _220 (weak)
	virtual void getOffsetForMapCollision();                        // _224 (weak)
	virtual void setParameters();                                   // _228
	virtual void initMouthSlots();                                  // _22C (weak)
	virtual void initWalkSmokeEffect();                             // _230 (weak)
	virtual void getWalkSmokeEffectMgr();                           // _234 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent&);             // _238 (weak)
	virtual void injure();                                          // _23C
	virtual void setCollEvent(CollEvent&);                          // _240
	virtual void getEfxHamonPos(Vector3<float>*);                   // _244 (weak)
	virtual void createInstanceEfxHamon();                          // _248
	virtual void updateEfxHamon();                                  // _24C
	virtual void createEfxHamon();                                  // _250
	virtual void fadeEfxHamon();                                    // _254
	virtual void getEnemyTypeID();                                  // _258 (weak)
	virtual void getMouthSlots();                                   // _25C (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);              // _260
	virtual void throwupItem();                                     // _264
	virtual void getThrowupItemPosition(Vector3<float>*);           // _268
	virtual void getThrowupItemVelocity(Vector3<float>*);           // _26C
	virtual void throwupItemInDeathProcedure();                     // _270 (weak)
	virtual void setLODSphere(Sys::Sphere&);                        // _274 (weak)
	virtual void damageCallBack(Creature*, float, CollPart*);       // _278
	virtual void pressCallBack(Creature*, float, CollPart*);        // _27C
	virtual void flyCollisionCallBack(Creature*, float, CollPart*); // _280
	virtual void hipdropCallBack(Creature*, float, CollPart*);      // _284
	virtual void dropCallBack(Creature*);                           // _288
	virtual void earthquakeCallBack(Creature*, float);              // _28C
	virtual void farmCallBack(Creature*, float);                    // _290
	virtual void bombCallBack(Creature*, Vector3<float>&, float);   // _294
	virtual void eatWhitePikminCallBack(Creature*, float);          // _298
	virtual void dopeCallBack(Creature*, int);                      // _29C
	virtual void doDopeCallBack(Creature*, int);                    // _2A0 (weak)
	virtual void doStartStoneState();                               // _2A4
	virtual void doFinishStoneState();                              // _2A8
	virtual void getDamageCoeStoneState();                          // _2AC (weak)
	virtual void doStartEarthquakeState(float);                     // _2B0
	virtual void doFinishEarthquakeState();                         // _2B4
	virtual void doStartEarthquakeFitState();                       // _2B8
	virtual void doFinishEarthquakeFitState();                      // _2BC
	virtual void lifeRecover();                                     // _2C0 (weak)
	virtual void startCarcassMotion();                              // _2C4 (weak)
	virtual void setCarcassArg(PelletViewArg&);                     // _2C8
	virtual void getCarcassArgHeight();                             // _2CC (weak)
	virtual void doBecomeCarcass();                                 // _2D0
	virtual void startWaitingBirthTypeDrop();                       // _2D4
	virtual void finishWaitingBirthTypeDrop();                      // _2D8
	virtual void isFinishableWaitingBirthTypeDrop();                // _2DC
	virtual void doStartWaitingBirthTypeDrop();                     // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                    // _2E4
	virtual void wallCallback(const MoveInfo&);                     // _2E8 (weak)
	virtual void getDownSmokeScale();                               // _2EC
	virtual void doStartMovie();                                    // _2F0 (weak)
	virtual void doEndMovie();                                      // _2F4 (weak)
};
} // namespace Game

namespace Game {
struct Creature {
	virtual void _08() = 0;                                          // _08
	virtual void checkCollision(CellObject*);                        // _0C
	virtual void _10() = 0;                                          // _10
	virtual void collisionUpdatable();                               // _14 (weak)
	virtual void isPiki();                                           // _18
	virtual void isNavi();                                           // _1C
	virtual void _20() = 0;                                          // _20
	virtual void getTypeName();                                      // _24
	virtual void getObjType();                                       // _28 (weak)
	virtual void _2C() = 0;                                          // _2C
	virtual void onInit(CreatureInitArg*);                           // _30
	virtual void _34() = 0;                                          // _34
	virtual void _38() = 0;                                          // _38
	virtual void _3C() = 0;                                          // _3C
	virtual void _40() = 0;                                          // _40
	virtual void _44() = 0;                                          // _44
	virtual void _48() = 0;                                          // _48
	virtual void doSimulation(float);                                // _4C (weak)
	virtual void doDirectDraw(Graphics&);                            // _50
	virtual void _54() = 0;                                          // _54
	virtual void _58() = 0;                                          // _58
	virtual void initPosition(Vector3<float>&);                      // _5C
	virtual void onInitPosition(Vector3<float>&);                    // _60 (weak)
	virtual void _64() = 0;                                          // _64
	virtual void _68() = 0;                                          // _68
	virtual void _6C() = 0;                                          // _6C
	virtual void _70() = 0;                                          // _70
	virtual void _74() = 0;                                          // _74
	virtual void _78() = 0;                                          // _78
	virtual void _7C() = 0;                                          // _7C
	virtual void isPellet();                                         // _80
	virtual void inWaterCallback(WaterBox*);                         // _84 (weak)
	virtual void outWaterCallback();                                 // _88 (weak)
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
	virtual void _CC() = 0;                                          // _CC
	virtual void isUnderground();                                    // _D0 (weak)
	virtual void isLivingThing();                                    // _D4 (weak)
	virtual void isDebugCollision();                                 // _D8 (weak)
	virtual void setDebugCollision(bool);                            // _DC (weak)
	virtual void doSave(Stream&);                                    // _E0 (weak)
	virtual void doLoad(Stream&);                                    // _E4 (weak)
	virtual void bounceCallback(Sys::Triangle*);                     // _E8 (weak)
	virtual void _EC() = 0;                                          // _EC
	virtual void platCallback(PlatEvent&);                           // _F0 (weak)
	virtual void _F4() = 0;                                          // _F4
	virtual void _F8() = 0;                                          // _F8
	virtual void getSound_AILOD();                                   // _FC (weak)
	virtual void _100() = 0;                                         // _100
	virtual void _104() = 0;                                         // _104
	virtual void _108() = 0;                                         // _108
	virtual void _10C() = 0;                                         // _10C
	virtual void on_movie_begin(bool);                               // _110 (weak)
	virtual void on_movie_end(bool);                                 // _114 (weak)
	virtual void movieStartAnimation(unsigned long);                 // _118 (weak)
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);       // _11C (weak)
	virtual void movieSetAnimationLastFrame();                       // _120 (weak)
	virtual void movieSetTranslation(Vector3<float>&, float);        // _124 (weak)
	virtual void movieSetFaceDir(float);                             // _128 (weak)
	virtual void movieGotoPosition(Vector3<float>&);                 // _12C (weak)
	virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _130 (weak)
	virtual void getShadowParam(ShadowParam&);                       // _134
	virtual void _138() = 0;                                         // _138
	virtual void _13C() = 0;                                         // _13C
	virtual void _140() = 0;                                         // _140
	virtual void getLODCylinder(Sys::Cylinder&);                     // _144 (weak)
	virtual void startPick();                                        // _148 (weak)
	virtual void endPick(bool);                                      // _14C (weak)
	virtual void getMabiki();                                        // _150 (weak)
	virtual void getFootmarks();                                     // _154 (weak)
	virtual void _158() = 0;                                         // _158
	virtual void _15C() = 0;                                         // _15C
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
	virtual void ignoreAtari(Creature*);                             // _190 (weak)
	virtual void getSuckPos();                                       // _194 (weak)
	virtual void getGoalPos();                                       // _198 (weak)
	virtual void isSuckReady();                                      // _19C (weak)
	virtual void isSuckArriveWait();                                 // _1A0 (weak)
};
} // namespace Game

namespace Game {
struct CellObject {
	virtual void _08() = 0;            // _08
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
	virtual void _08() = 0;                                       // _08
	virtual void _0C() = 0;                                       // _0C
	virtual void _10() = 0;                                       // _10
	virtual void _14() = 0;                                       // _14
	virtual void _18() = 0;                                       // _18
	virtual void _1C() = 0;                                       // _1C
	virtual void _20() = 0;                                       // _20
	virtual void _24() = 0;                                       // _24
	virtual void _28() = 0;                                       // _28
	virtual void _2C() = 0;                                       // _2C
	virtual void onInit(CreatureInitArg*);                        // _30
	virtual void _34() = 0;                                       // _34
	virtual void _38() = 0;                                       // _38
	virtual void _3C() = 0;                                       // _3C
	virtual void _40() = 0;                                       // _40
	virtual void _44() = 0;                                       // _44
	virtual void _48() = 0;                                       // _48
	virtual void doSimulation(float);                             // _4C (weak)
	virtual void doDirectDraw(Graphics&);                         // _50
	virtual void _54() = 0;                                       // _54
	virtual void _58() = 0;                                       // _58
	virtual void _5C() = 0;                                       // _5C
	virtual void _60() = 0;                                       // _60
	virtual void _64() = 0;                                       // _64
	virtual void _68() = 0;                                       // _68
	virtual void _6C() = 0;                                       // _6C
	virtual void _70() = 0;                                       // _70
	virtual void _74() = 0;                                       // _74
	virtual void _78() = 0;                                       // _78
	virtual void _7C() = 0;                                       // _7C
	virtual void _80() = 0;                                       // _80
	virtual void inWaterCallback(WaterBox*);                      // _84 (weak)
	virtual void outWaterCallback();                              // _88 (weak)
	virtual void _8C() = 0;                                       // _8C
	virtual void _90() = 0;                                       // _90
	virtual void _94() = 0;                                       // _94
	virtual void _98() = 0;                                       // _98
	virtual void _9C() = 0;                                       // _9C
	virtual void _A0() = 0;                                       // _A0
	virtual void _A4() = 0;                                       // _A4
	virtual void _A8() = 0;                                       // _A8
	virtual void _AC() = 0;                                       // _AC
	virtual void _B0() = 0;                                       // _B0
	virtual void _B4() = 0;                                       // _B4
	virtual void _B8() = 0;                                       // _B8
	virtual void _BC() = 0;                                       // _BC
	virtual void _C0() = 0;                                       // _C0
	virtual void _C4() = 0;                                       // _C4
	virtual void _C8() = 0;                                       // _C8
	virtual void _CC() = 0;                                       // _CC
	virtual void _D0() = 0;                                       // _D0
	virtual void isLivingThing();                                 // _D4 (weak)
	virtual void _D8()  = 0;                                      // _D8
	virtual void _DC()  = 0;                                      // _DC
	virtual void _E0()  = 0;                                      // _E0
	virtual void _E4()  = 0;                                      // _E4
	virtual void _E8()  = 0;                                      // _E8
	virtual void _EC()  = 0;                                      // _EC
	virtual void _F0()  = 0;                                      // _F0
	virtual void _F4()  = 0;                                      // _F4
	virtual void _F8()  = 0;                                      // _F8
	virtual void _FC()  = 0;                                      // _FC
	virtual void _100() = 0;                                      // _100
	virtual void _104() = 0;                                      // _104
	virtual void _108() = 0;                                      // _108
	virtual void _10C() = 0;                                      // _10C
	virtual void _110() = 0;                                      // _110
	virtual void _114() = 0;                                      // _114
	virtual void _118() = 0;                                      // _118
	virtual void _11C() = 0;                                      // _11C
	virtual void _120() = 0;                                      // _120
	virtual void _124() = 0;                                      // _124
	virtual void _128() = 0;                                      // _128
	virtual void _12C() = 0;                                      // _12C
	virtual void _130() = 0;                                      // _130
	virtual void getShadowParam(ShadowParam&);                    // _134
	virtual void _138() = 0;                                      // _138
	virtual void _13C() = 0;                                      // _13C
	virtual void _140() = 0;                                      // _140
	virtual void _144() = 0;                                      // _144
	virtual void _148() = 0;                                      // _148
	virtual void _14C() = 0;                                      // _14C
	virtual void _150() = 0;                                      // _150
	virtual void _154() = 0;                                      // _154
	virtual void _158() = 0;                                      // _158
	virtual void _15C() = 0;                                      // _15C
	virtual void _160() = 0;                                      // _160
	virtual void _164() = 0;                                      // _164
	virtual void _168() = 0;                                      // _168
	virtual void _16C() = 0;                                      // _16C
	virtual void _170() = 0;                                      // _170
	virtual void _174() = 0;                                      // _174
	virtual void _178() = 0;                                      // _178
	virtual void _17C() = 0;                                      // _17C
	virtual void _180() = 0;                                      // _180
	virtual void _184() = 0;                                      // _184
	virtual void _188() = 0;                                      // _188
	virtual void _18C() = 0;                                      // _18C
	virtual void _190() = 0;                                      // _190
	virtual void _194() = 0;                                      // _194
	virtual void _198() = 0;                                      // _198
	virtual void _19C() = 0;                                      // _19C
	virtual void _1A0() = 0;                                      // _1A0
	virtual void _1A4() = 0;                                      // _1A4
	virtual void _1A8() = 0;                                      // _1A8
	virtual void _1AC() = 0;                                      // _1AC
	virtual void _1B0() = 0;                                      // _1B0
	virtual void _1B4() = 0;                                      // _1B4
	virtual void _1B8() = 0;                                      // _1B8
	virtual ~PelletView();                                        // _1BC (weak)
	virtual void _1C0() = 0;                                      // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);       // _1C4
	virtual void _1C8() = 0;                                      // _1C8
	virtual void doUpdate();                                      // _1CC
	virtual void _1D0() = 0;                                      // _1D0
	virtual void _1D4() = 0;                                      // _1D4
	virtual void _1D8() = 0;                                      // _1D8
	virtual void _1DC() = 0;                                      // _1DC
	virtual void _1E0() = 0;                                      // _1E0
	virtual void _1E4() = 0;                                      // _1E4
	virtual void _1E8() = 0;                                      // _1E8
	virtual void doDebugDraw(Graphics&);                          // _1EC
	virtual void _1F0() = 0;                                      // _1F0
	virtual void _1F4() = 0;                                      // _1F4
	virtual void _1F8() = 0;                                      // _1F8
	virtual void _1FC() = 0;                                      // _1FC
	virtual void _200() = 0;                                      // _200
	virtual void _204() = 0;                                      // _204
	virtual void _208() = 0;                                      // _208
	virtual void _20C() = 0;                                      // _20C
	virtual void _210() = 0;                                      // _210
	virtual void _214() = 0;                                      // _214
	virtual void _218() = 0;                                      // _218
	virtual void _21C() = 0;                                      // _21C
	virtual void _220() = 0;                                      // _220
	virtual void _224() = 0;                                      // _224
	virtual void _228() = 0;                                      // _228
	virtual void _22C() = 0;                                      // _22C
	virtual void _230() = 0;                                      // _230
	virtual void _234() = 0;                                      // _234
	virtual void _238() = 0;                                      // _238
	virtual void _23C() = 0;                                      // _23C
	virtual void _240() = 0;                                      // _240
	virtual void _244() = 0;                                      // _244
	virtual void _248() = 0;                                      // _248
	virtual void _24C() = 0;                                      // _24C
	virtual void _250() = 0;                                      // _250
	virtual void _254() = 0;                                      // _254
	virtual void getEnemyTypeID();                                // _258 (weak)
	virtual void _25C() = 0;                                      // _25C
	virtual void _260() = 0;                                      // _260
	virtual void _264() = 0;                                      // _264
	virtual void _268() = 0;                                      // _268
	virtual void _26C() = 0;                                      // _26C
	virtual void _270() = 0;                                      // _270
	virtual void _274() = 0;                                      // _274
	virtual void damageCallBack(Creature*, float, CollPart*);     // _278
	virtual void pressCallBack(Creature*, float, CollPart*);      // _27C
	virtual void _280() = 0;                                      // _280
	virtual void hipdropCallBack(Creature*, float, CollPart*);    // _284
	virtual void _288() = 0;                                      // _288
	virtual void _28C() = 0;                                      // _28C
	virtual void _290() = 0;                                      // _290
	virtual void bombCallBack(Creature*, Vector3<float>&, float); // _294
	virtual void _298() = 0;                                      // _298
	virtual void _29C() = 0;                                      // _29C
	virtual void _2A0() = 0;                                      // _2A0
	virtual void _2A4() = 0;                                      // _2A4
	virtual void _2A8() = 0;                                      // _2A8
	virtual void _2AC() = 0;                                      // _2AC
	virtual void _2B0() = 0;                                      // _2B0
	virtual void _2B4() = 0;                                      // _2B4
	virtual void _2B8() = 0;                                      // _2B8
	virtual void _2BC() = 0;                                      // _2BC
	virtual void lifeRecover();                                   // _2C0 (weak)
	virtual void _2C4() = 0;                                      // _2C4
	virtual void _2C8() = 0;                                      // _2C8
	virtual void _2CC() = 0;                                      // _2CC
	virtual void _2D0() = 0;                                      // _2D0
	virtual void _2D4() = 0;                                      // _2D4
	virtual void _2D8() = 0;                                      // _2D8
	virtual void _2DC() = 0;                                      // _2DC
	virtual void _2E0() = 0;                                      // _2E0
	virtual void _2E4() = 0;                                      // _2E4
	virtual void _2E8() = 0;                                      // _2E8
	virtual void _2EC() = 0;                                      // _2EC
	virtual void _2F0() = 0;                                      // _2F0
	virtual void _2F4() = 0;                                      // _2F4
	virtual void setFSM(FSM*);                                    // _2F8
	virtual void _2FC() = 0;                                      // _2FC
	virtual void _300() = 0;                                      // _300
	virtual void viewGetBaseScale();                              // _304 (weak)
	virtual void _308() = 0;                                      // _308
	virtual void viewGetCollTreeJointIndex();                     // _30C (weak)
	virtual void viewGetCollTreeOffset();                         // _310 (weak)
	virtual void _314() = 0;                                      // _314
	virtual void _318() = 0;                                      // _318
	virtual void _31C() = 0;                                      // _31C
	virtual void _320() = 0;                                      // _320
	virtual void _324() = 0;                                      // _324
	virtual void viewEntryShape(Matrixf&, Vector3<float>&);       // _328 (weak)
};
} // namespace Game

namespace Game {
namespace Hiba {
struct Obj : public EnemyBase, public Creature, public CellObject, public PelletView {
	virtual void onInit(CreatureInitArg*);                        // _30
	virtual void doSimulation(float);                             // _4C (weak)
	virtual void doDirectDraw(Graphics&);                         // _50
	virtual void inWaterCallback(WaterBox*);                      // _84 (weak)
	virtual void outWaterCallback();                              // _88 (weak)
	virtual void isLivingThing();                                 // _D4 (weak)
	virtual void getShadowParam(ShadowParam&);                    // _134
	virtual void _1B0() = 0;                                      // _1B0
	virtual void _1B4() = 0;                                      // _1B4
	virtual ~Obj();                                               // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);       // _1C4
	virtual void doUpdate();                                      // _1CC
	virtual void doDebugDraw(Graphics&);                          // _1EC
	virtual void getEnemyTypeID();                                // _258 (weak)
	virtual void damageCallBack(Creature*, float, CollPart*);     // _278
	virtual void pressCallBack(Creature*, float, CollPart*);      // _27C
	virtual void hipdropCallBack(Creature*, float, CollPart*);    // _284
	virtual void bombCallBack(Creature*, Vector3<float>&, float); // _294
	virtual void lifeRecover();                                   // _2C0 (weak)
	virtual void setFSM(FSM*);                                    // _2F8
	virtual void _2FC() = 0;                                      // _2FC
	virtual void _300() = 0;                                      // _300

	Obj();
	void interactFireAttack();
	void setupLodParms();
	void updateEfxLod();
	void createEffect();
	void startFireEffect();
	void finishFireEffect();
	void generatorKill();
};
} // namespace Hiba
} // namespace Game

#endif
