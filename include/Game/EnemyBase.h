#ifndef _GAME_ENEMYBASE_H
#define _GAME_ENEMYBASE_H

#include "Game/AILODParm.h"
#include "Game/Creature.h"
#include "types.h"

namespace Game {
struct EnemyBase_VTBL {
	u8 gap0[476];

	void (*_1DC)(struct EnemyBase*);
	void (*_1E0)(struct EnemyBase*);
};

struct EnemyBase : public Creature {
	EnemyBase_VTBL* m_vtbl;    // _00
	u8 _04[0x1DC];             // _04
	u32 m_flags;               // _1E0
	u8 _1E4[0x80];             // _1E4
	Game::AILODParm m_lodParm; // _264
	u8 _268[0x58 - 8];         // _268

	/*virtual void getPosition();                                          //
	_00 virtual void Creature::checkCollision(Game::CellObject*);            //
	_04 virtual void getBoundingSphere(Sys::Sphere&);                        //
	_08 virtual void Creature::collisionUpdatable();                         //
	_0C virtual void Creature::isPiki();                                     //
	_10 virtual void Creature::isNavi();                                     //
	_14 virtual void CellObject::deferPikiCollision();                       //
	_18 virtual void Creature::getTypeName();                                //
	_1C virtual void Creature::getObjType();                                 //
	_20 virtual void constructor();                                          //
	_24 virtual void onInit(Game::CreatureInitArg*);                         //
	_28 virtual void onKill(Game::CreatureKillArg*);                         //
	_2C virtual void onInitPost(Game::CreatureInitArg*);                     //
	_30 virtual void doAnimation();                                          //
	_34 virtual void doEntry();                                              //
	_38 virtual void doSetView(int);                                         //
	_3C virtual void doViewCalc();                                           //
	_40 virtual void doSimulation(float);                                    //
	_44 virtual void Creature::doDirectDraw(Graphics&);                      //
	_48 virtual void getBodyRadius();                                        //
	_4C virtual void getCellRadius();                                        //
	_50 virtual void Creature::initPosition(Vector3f&);                      //
	_54 virtual void Creature::onInitPosition(Vector3f&);                    //
	_58 virtual void getFaceDir();                                           //
	_5C virtual void setVelocity(Vector3f&);                                 //
	_60 virtual void getVelocity();                                          //
	_64 virtual void onSetPosition(Vector3f&);                               //
	_68 virtual void onSetPositionPost(Vector3f&);                           //
	_6C virtual void updateTrMatrix();                                       //
	_70 virtual void isTeki();                                               //
	_74 virtual void Creature::isPellet();                                   //
	_78 virtual void inWaterCallback(Game::WaterBox*);                       //
	_7C virtual void outWaterCallback();                                     //
	_80 virtual void inWater();                                              //
	_84 virtual void Creature::getFlockMgr();                                //
	_88 virtual void Creature::onStartCapture();                             //
	_8C virtual void Creature::onUpdateCapture(Matrixf&);                    //
	_90 virtual void Creature::onEndCapture();                               //
	_94 virtual void Creature::isAtari();                                    //
	_98 virtual void Creature::setAtari(bool);                               //
	_9C virtual void Creature::isAlive();                                    //
	_A0 virtual void Creature::setAlive(bool);                               //
	_A4 virtual void Creature::isCollisionFlick();                           //
	_A8 virtual void Creature::setCollisionFlick(bool);                      //
	_AC virtual void Creature::isMovieActor();                               //
	_B0 virtual void Creature::isMovieExtra();                               //
	_B4 virtual void Creature::isMovieMotion();                              //
	_B8 virtual void Creature::setMovieMotion(bool);                         //
	_BC virtual void Creature::isBuried();                                   //
	_C0 virtual void isFlying();                                             //
	_C4 virtual void Creature::isUnderground();                              //
	_C8 virtual void Creature::isLivingThing();                              //
	_CC virtual void Creature::isDebugCollision();                           //
	_D0 virtual void Creature::setDebugCollision(bool);                      //
	_D4 virtual void Creature::doSave(Stream&);                              //
	_D8 virtual void Creature::doLoad(Stream&);                              //
	_DC virtual void Creature::bounceCallback(Sys::Triangle*);               //
	_E0 virtual void collisionCallback(Game::CollEvent&);                    //
	_E4 virtual void Creature::platCallback(Game::PlatEvent&);               //
	_E8 virtual void getJAIObject();                                         //
	_EC virtual void getPSCreature();                                        //
	_F0 virtual void Creature::getSound_AILOD();                             //
	_F4 virtual void getSound_PosPtr();                                      //
	_F8 virtual void sound_culling();                                        //
	_FC virtual void getSound_CurrAnimFrame();                               //
	_100 virtual void getSound_CurrAnimSpeed();                               //
	_104 virtual void Creature::on_movie_begin(bool);                         //
	_108 virtual void Creature::on_movie_end(bool);                           //
	_10C virtual void Creature::movieStartAnimation(unsigned long);           //
	_110 virtual void Creature::movieStartDemoAnimation(SysShape::AnimInfo*); //
	_114 virtual void Creature::movieSetAnimationLastFrame();                 //
	_118 virtual void Creature::movieSetTranslation(Vector3f&, float);        //
	_11C virtual void Creature::movieSetFaceDir(float);                       //
	_120 virtual void Creature::movieGotoPosition(Vector3f&);                 //
	_124 virtual void Creature::movieUserCommand(unsigned long,
	                                        Game::MoviePlayer*);     // _128
	virtual void Creature::getShadowParam(Game::ShadowParam&);       // _12C
	virtual void needShadow();                                       // _130
	virtual void getLifeGaugeParam(Game::LifeGaugeParam&);           // _134
	virtual void getLODSphere(Sys::Sphere&);                         // _138
	virtual void Creature::getLODCylinder(Sys::Cylinder&);           // _13C
	virtual void Creature::startPick();                              // _140
	virtual void Creature::endPick(bool);                            // _144
	virtual void Creature::getMabiki();                              // _148
	virtual void Creature::getFootmarks();                           // _14C
	virtual void onStickStart(Game::Creature*);                      // _150
	virtual void onStickEnd(Game::Creature*);                        // _154
	virtual void Creature::onStickStartSelf(Game::Creature*);        // _158
	virtual void Creature::onStickEndSelf(Game::Creature*);          // _15C
	virtual void Creature::isSlotFree(short);                        // _160
	virtual void Creature::getFreeStickSlot();                       // _164
	virtual void Creature::getNearFreeStickSlot(Vector3f&);          // _168
	virtual void Creature::getRandomFreeStickSlot();                 // _16C
	virtual void Creature::onSlotStickStart(Game::Creature*, short); // _170
	virtual void Creature::onSlotStickEnd(Game::Creature*, short);   // _174
	virtual void Creature::calcStickSlotGlobal(short, Vector3f&);    // _178
	virtual void getVelocityAt(Vector3f&, Vector3f&);                // _17C
	virtual void Creature::getAngularEffect(Vector3f&, Vector3f&);   // _180
	virtual void Creature::applyImpulse(Vector3f&, Vector3f&);       // _184
	virtual void Creature::ignoreAtari(Game::Creature*);             // _188
	virtual void Creature::getSuckPos();                             // _18C
	virtual void Creature::getGoalPos();                             // _190
	virtual void Creature::isSuckReady();                            // _194
	virtual void Creature::isSuckArriveWait();                       // _198
	virtual void stimulate(Game::Interaction&);                      // _19C
	virtual void getCreatureName();                                  // _1A0
	virtual void getCreatureID();                                    // _1A4
	virtual void _1A8() = 0;                                         // _1A8
	virtual void _1AC() = 0;                                         // _1AC
	virtual void @376 @onKeyEvent(const SysShape::KeyEvent&);        // _1B0

	virtual ~EnemyBase();                                    // _1B4
	virtual void birth(Vector3f&, float);                    // _1B8
	virtual void _1BC() = 0;                                 // _1BC
	virtual void update();                                   // _1C0
	virtual void _1C4() = 0;                                 // _1C4
	virtual void doUpdateCommon();                           // _1C8
	virtual void doUpdateCarcass();                          // _1CC
	virtual void doAnimationUpdateAnimator();                // _1D0
	virtual void doAnimationCullingOff();                    // _1D4
	virtual void doAnimationCullingOn();                     // _1D8
	virtual void doAnimationStick();                         // _1DC
	virtual void doSimulationCarcass(float);                 // _1E0
	virtual void doDebugDraw(Graphics&);                     // _1E4
	virtual void doSimpleDraw(Viewport*);                    // _1E8
	virtual void doSimulationGround(float);                  // _1EC
	virtual void doSimulationFlying(float);                  // _1F0
	virtual void doSimulationStick(float);                   // _1F4
	virtual void changeMaterial();                           // _1F8
	virtual void getCommonEffectPos(Vector3f&);              // _1FC
	virtual void getFitEffectPos();                          // _200
	virtual void viewGetShape();                             // _204
	virtual void view_start_carrymotion();                   // _208
	virtual void view_finish_carrymotion();                  // _20C
	virtual void viewStartPreCarryMotion();                  // _210
	virtual void viewStartCarryMotion();                     // _214
	virtual void viewOnPelletKilled();                       // _218
	virtual void getOffsetForMapCollision();                 // _21C
	virtual void setParameters();                            // _220
	virtual void initMouthSlots();                           // _224
	virtual void initWalkSmokeEffect();                      // _228
	virtual void getWalkSmokeEffectMgr();                    // _22C
	virtual void onKeyEvent(const SysShape::KeyEvent&);      // _230
	virtual void injure();                                   // _234
	virtual void setCollEvent(Game::CollEvent&);             // _238
	virtual void getEfxHamonPos(Vector3f*);                  // _23C
	virtual void createInstanceEfxHamon();                   // _240
	virtual void updateEfxHamon();                           // _244
	virtual void createEfxHamon();                           // _248
	virtual void fadeEfxHamon();                             // _24C
	virtual void _250() = 0;                                 // _250
	virtual void getMouthSlots();                            // _254
	virtual void doGetLifeGaugeParam(Game::LifeGaugeParam&); // _258
	virtual void throwupItem();                              // _25C
	virtual void getThrowupItemPosition(Vector3f*);          // _260
	virtual void getThrowupItemVelocity(Vector3f*);          // _264
	virtual void throwupItemInDeathProcedure();              // _268
	virtual void setLODSphere(Sys::Sphere&);                 // _26C
	virtual void damageCallBack(Game::Creature*, float,
	                            CollPart*); // _270
	virtual void pressCallBack(Game::Creature*, float,
	                           CollPart*); // _274
	virtual void flyCollisionCallBack(Game::Creature*, float,
	                                  CollPart*); // _278
	virtual void hipdropCallBack(Game::Creature*, float,
	                             CollPart*);                      // _27C
	virtual void dropCallBack(Game::Creature*);                   // _280
	virtual void earthquakeCallBack(Game::Creature*, float);      // _284
	virtual void farmCallBack(Game::Creature*, float);            // _288
	virtual void bombCallBack(Game::Creature*, Vector3f&, float); // _28C
	virtual void eatWhitePikminCallBack(Game::Creature*, float);  // _290
	virtual void dopeCallBack(Game::Creature*, int);              // _294
	virtual void doDopeCallBack(Game::Creature*, int);            // _298
	virtual void doStartStoneState();                             // _29C
	virtual void doFinishStoneState();                            // _2A0
	virtual void getDamageCoeStoneState();                        // _2A4
	virtual void doStartEarthquakeState(float);                   // _2A8
	virtual void doFinishEarthquakeState();                       // _2AC
	virtual void doStartEarthquakeFitState();                     // _2B0
	virtual void doFinishEarthquakeFitState();                    // _2B4
	virtual void lifeRecover();                                   // _2B8
	virtual void startCarcassMotion();                            // _2BC
	virtual void setCarcassArg(Game::PelletViewArg&);             // _2C0
	virtual void getCarcassArgHeight();                           // _2C4
	virtual void doBecomeCarcass();                               // _2C8
	virtual void startWaitingBirthTypeDrop();                     // _2CC
	virtual void finishWaitingBirthTypeDrop();                    // _2D0
	virtual void isFinishableWaitingBirthTypeDrop();              // _2D4
	virtual void doStartWaitingBirthTypeDrop();                   // _2D8
	virtual void doFinishWaitingBirthTypeDrop();                  // _2DC
	virtual void wallCallback(const Game::MoveInfo&);             // _2E0
	virtual void getDownSmokeScale();                             // _2E4
	virtual void doStartMovie();                                  // _2E8
	virtual void doEndMovie();                                    // _2EC
	                           // PelletView VTBL!
	virtual void _2F0() = 0;                                      // _2F0
	virtual void _2F4() = 0;                                      // _2F4
	virtual void PelletView::viewGetBaseScale();                  // _2F8
	virtual void @700 @12 @viewGetShape();                        // _2FC
	virtual void PelletView::viewGetCollTreeJointIndex();         // _300
	virtual void PelletView::viewGetCollTreeOffset();             // _304
	virtual void @700 @12 @view_start_carrymotion();              // _308
	virtual void @700 @12 @view_finish_carrymotion();             // _30C
	virtual void @700 @12 @viewStartPreCarryMotion();             // _310
	virtual void @700 @12 @viewStartCarryMotion();                // _314
	virtual void @700 @12 @viewOnPelletKilled();                  // _318
	virtual void PelletView::viewEntryShape(Matrixf&, Vector3f&); // _31C*/
};
} // namespace Game

#endif
