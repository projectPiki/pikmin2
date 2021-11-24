#ifndef _GAME_ENEMYBASE_H
#define _GAME_ENEMYBASE_H

#include "Game/AILODParm.h"
#include "Game/Creature.h"
#include "SysShape/Animator.h"
#include "Vector3.h"
#include "types.h"

namespace SysShape {
struct KeyEvent;
struct MotionListener {
	virtual void onKeyEvent(const KeyEvent&);
};
} // namespace SysShape

namespace Game {
struct EnemyInitialParamBase;
struct EnemyBase : public Creature, SysShape::MotionListener {
	virtual Vector3f getPosition();                             // _00
	virtual void checkCollision(CellObject*);                   // _04
	virtual void getBoundingSphere(Sys::Sphere&);               // _08
	virtual bool collisionUpdatable();                          // _0C
	virtual bool isPiki();                                      // _10
	virtual bool isNavi();                                      // _14
	virtual bool deferPikiCollision();                          // _18
	virtual char* getTypeName();                                // _1C
	virtual u8 getObjType();                                    // _20
	virtual void constructor();                                 // _24
	virtual void onInit(CreatureInitArg*);                      // _28
	virtual void onKill(CreatureKillArg*);                      // _2C
	virtual void onInitPost(CreatureInitArg*);                  // _30
	virtual void doAnimation();                                 // _34
	virtual void doEntry();                                     // _38
	virtual void doSetView(int);                                // _3C
	virtual void doViewCalc();                                  // _40
	virtual void doSimulation(float);                           // _44
	virtual void doDirectDraw(Graphics&);                       // _48
	virtual float getBodyRadius();                              // _4C
	virtual float getCellRadius();                              // _50
	virtual void initPosition(Vector3f&);                       // _54
	virtual void onInitPosition(Vector3f&);                     // _58
	virtual float getFaceDir();                                 // _5C
	virtual void setVelocity(Vector3f&);                        // _60
	virtual Vector3f getVelocity();                             // _64
	virtual void onSetPosition(Vector3f&);                      // _68
	virtual void onSetPositionPost(Vector3f&);                  // _6C
	virtual void updateTrMatrix();                              // _70
	virtual bool isTeki();                                      // _74
	virtual bool isPellet();                                    // _78
	virtual void inWaterCallback(WaterBox*);                    // _7C
	virtual void outWaterCallback();                            // _80
	virtual bool inWater();                                     // _84
	virtual void getFlockMgr();                                 // _88
	virtual void onStartCapture();                              // _8C
	virtual void onUpdateCapture(Matrixf&);                     // _90
	virtual void onEndCapture();                                // _94
	virtual bool isAtari();                                     // _98
	virtual void setAtari(bool);                                // _9C
	virtual bool isAlive();                                     // _A0
	virtual void setAlive(bool);                                // _A4
	virtual bool isCollisionFlick();                            // _A8
	virtual void setCollisionFlick(bool);                       // _AC
	virtual bool isMovieActor();                                // _B0
	virtual bool isMovieExtra();                                // _B4
	virtual bool isMovieMotion();                               // _B8
	virtual void setMovieMotion(bool);                          // _BC
	virtual bool isBuried();                                    // _C0
	virtual bool isFlying();                                    // _C4
	virtual bool isUnderground();                               // _C8
	virtual bool isLivingThing();                               // _CC
	virtual bool isDebugCollision();                            // _D0
	virtual void setDebugCollision(bool);                       // _D4
	virtual void doSave(Stream&);                               // _D8
	virtual void doLoad(Stream&);                               // _DC
	virtual void bounceCallback(Sys::Triangle*);                // _E0
	virtual void collisionCallback(CollEvent&);                 // _E4
	virtual void platCallback(PlatEvent&);                      // _E8
	virtual void getJAIObject();                                // _EC
	virtual PSM::Creature* getPSCreature();                     // _F0
	virtual void getSound_AILOD();                              // _F4
	virtual Vector3f* getSound_PosPtr();                        // _F8
	virtual bool sound_culling();                               // _FC
	virtual float getSound_CurrAnimFrame();                     // _100
	virtual float getSound_CurrAnimSpeed();                     // _104
	virtual void on_movie_begin(bool);                          // _108
	virtual void on_movie_end(bool);                            // _10C
	virtual void movieStartAnimation(unsigned long);            // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);  // _114
	virtual void movieSetAnimationLastFrame();                  // _118
	virtual void movieSetTranslation(Vector3f&, float);         // _11C
	virtual void movieSetFaceDir(float);                        // _120
	virtual void movieGotoPosition(Vector3f&);                  // _124
	virtual void movieUserCommand(unsigned long, MoviePlayer*); // _128
	virtual void getShadowParam(ShadowParam&);                  // _12C
	virtual bool needShadow();                                  // _130
	virtual void getLifeGaugeParam(LifeGaugeParam&);            // _134
	virtual void getLODSphere(Sys::Sphere&);                    // _138
	virtual void getLODCylinder(Sys::Cylinder&);                // _13C
	virtual void startPick();                                   // _140
	virtual void endPick(bool);                                 // _144
	virtual u32* getMabiki();                                   // _148
	virtual Footmarks* getFootmarks();                          // _14C
	virtual void onStickStart(Creature*);                       // _150
	virtual void onStickEnd(Creature*);                         // _154
	virtual void onStickStartSelf(Creature*);                   // _158
	virtual void onStickEndSelf(Creature*);                     // _15C
	virtual bool isSlotFree(short);                             // _160
	virtual int getFreeStickSlot();                             // _164
	virtual int getNearFreeStickSlot(Vector3f&);                // _168
	virtual int getRandomFreeStickSlot();                       // _16C
	virtual void onSlotStickStart(Creature*, short);            // _170
	virtual void onSlotStickEnd(Creature*, short);              // _174
	virtual void calcStickSlotGlobal(short, Vector3f&);         // _178
	virtual void getVelocityAt(Vector3f&, Vector3f&);           // _17C
	virtual void getAngularEffect(Vector3f&, Vector3f&);        // _180
	virtual void applyImpulse(Vector3f&, Vector3f&);            // _184
	virtual bool ignoreAtari(Creature*);                        // _188
	virtual void getSuckPos();                                  // _18C
	virtual void getGoalPos();                                  // _190
	virtual bool isSuckReady();                                 // _194
	virtual bool isSuckArriveWait();                            // _198
	virtual void stimulate(Interaction&);                       // _19C
	virtual char* getCreatureName();                            // _1A0
	virtual s32 getCreatureID();                                // _1A4
	// VTBL 2
	virtual ~EnemyBase();                                           // _1AC
	virtual void birth(Vector3f&, float);                           // _1B0
	virtual void SetInitialSetting(EnemyInitialParamBase*) = 0;     // _1B4
	virtual void update();                                          // _1B8
	virtual void doUpdate() = 0;                                    // _1BC
	virtual void doUpdateCommon();                                  // _1C0
	virtual void doUpdateCarcass();                                 // _1C4
	virtual void doAnimationUpdateAnimator();                       // _1C8
	virtual void doAnimationCullingOff();                           // _1CC
	virtual void doAnimationCullingOn();                            // _1D0
	virtual void doAnimationStick();                                // _1D4
	virtual void doSimulationCarcass(float);                        // _1D8
	virtual void doDebugDraw(Graphics&);                            // _1DC
	virtual void doSimpleDraw(struct Viewport*);                    // _1E0
	virtual void doSimulationGround(float);                         // _1E4
	virtual void doSimulationFlying(float);                         // _1E8
	virtual void doSimulationStick(float);                          // _1EC
	virtual void changeMaterial();                                  // _1F0
	virtual void getCommonEffectPos(Vector3f&);                     // _1F4
	virtual void getFitEffectPos();                                 // _1F8
	virtual void viewGetShape();                                    // _1FC
	virtual void view_start_carrymotion();                          // _200
	virtual void view_finish_carrymotion();                         // _204
	virtual void viewStartPreCarryMotion();                         // _208
	virtual void viewStartCarryMotion();                            // _20C
	virtual void viewOnPelletKilled();                              // _210
	virtual void getOffsetForMapCollision();                        // _214
	virtual void setParameters();                                   // _218
	virtual void initMouthSlots();                                  // _21C
	virtual void initWalkSmokeEffect();                             // _220
	virtual void getWalkSmokeEffectMgr();                           // _224
	virtual void onKeyEvent(const SysShape::KeyEvent&);             // _228
	virtual void injure();                                          // _22C
	virtual void setCollEvent(CollEvent&);                          // _230
	virtual void getEfxHamonPos(Vector3f*);                         // _234
	virtual void createInstanceEfxHamon();                          // _238
	virtual void updateEfxHamon();                                  // _23C
	virtual void createEfxHamon();                                  // _240
	virtual void fadeEfxHamon();                                    // _244
	virtual s32 getEnemyTypeID() = 0;                               // _248
	virtual void getMouthSlots();                                   // _24C
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);              // _250
	virtual void throwupItem();                                     // _254
	virtual void getThrowupItemPosition(Vector3f*);                 // _258
	virtual void getThrowupItemVelocity(Vector3f*);                 // _25C
	virtual void throwupItemInDeathProcedure();                     // _260
	virtual void setLODSphere(Sys::Sphere&);                        // _264
	virtual bool damageCallBack(Creature*, float, CollPart*);       // _268
	virtual bool pressCallBack(Creature*, float, CollPart*);        // _26C
	virtual bool flyCollisionCallBack(Creature*, float, CollPart*); // _270
	virtual bool hipdropCallBack(Creature*, float, CollPart*);      // _274
	virtual bool dropCallBack(Creature*);                           // _288
	virtual bool earthquakeCallBack(Creature*, float);              // _28C
	virtual bool farmCallBack(Creature*, float);                    // _290
	virtual bool bombCallBack(Creature*, Vector3f&, float);         // _294
	virtual bool eatWhitePikminCallBack(Creature*, float);          // _298
	virtual bool dopeCallBack(Creature*, int);                      // _29C
	virtual bool doDopeCallBack(Creature*, int);                    // _2A0
	virtual void doStartStoneState();                               // _2A4
	virtual void doFinishStoneState();                              // _2A8
	virtual void getDamageCoeStoneState();                          // _2AC
	virtual void doStartEarthquakeState(float);                     // _2B0
	virtual void doFinishEarthquakeState();                         // _2B4
	virtual void doStartEarthquakeFitState();                       // _2B8
	virtual void doFinishEarthquakeFitState();                      // _2BC
	virtual void lifeRecover();                                     // _2C0
	virtual void startCarcassMotion();                              // _2C4
	virtual void setCarcassArg(struct PelletViewArg&);              // _2C8
	virtual void getCarcassArgHeight();                             // _2C4
	virtual void doBecomeCarcass();                                 // _2C8
	virtual void startWaitingBirthTypeDrop();                       // _2CC
	virtual void finishWaitingBirthTypeDrop();                      // _2D0
	virtual bool isFinishableWaitingBirthTypeDrop();                // _2D4
	virtual void doStartWaitingBirthTypeDrop();                     // _2D8
	virtual void doFinishWaitingBirthTypeDrop();                    // _2DC
	virtual void wallCallback(const struct MoveInfo&);              // _2E0
	virtual void getDownSmokeScale();                               // _2E4
	virtual void doStartMovie();                                    // _2E8
	virtual void doEndMovie();                                      // _2EC
	virtual void _2F0() = 0;                                        // _2F0
	virtual void _2F4() = 0;                                        // _2F4
	virtual void viewGetBaseScale();                                // _2F8
	                                                                /*
	                                                            virtual void @700 @12 @viewGetShape();                           // _2FC
	                                                            virtual void viewGetCollTreeJointIndex();                        // _300
	                                                            virtual void viewGetCollTreeOffset();                            // _304
	                                                            virtual void @700 @12 @view_start_carrymotion();                 // _308
	                                                            virtual void @700 @12 @view_finish_carrymotion();                // _30C
	                                                            virtual void @700 @12 @viewStartPreCarryMotion();                // _310
	                                                            virtual void @700 @12 @viewStartCarryMotion();                   // _314
	                                                            virtual void @700 @12 @viewOnPelletKilled();                     // _318
	                                                            virtual void viewEntryShape(Matrixf&, Vector3f&);          // _31C
	                                                                */

	u8 _04[0x1DC];             // _04
	u32 m_flags;               // _1E0
	u8 _1E4[0x80];             // _1E4
	Game::AILODParm m_lodParm; // _264
	u8 _268[0x58 - 8];         // _268
};
} // namespace Game

#endif
