#ifndef _GAME_BASEITEM_H
#define _GAME_BASEITEM_H

/*
    __vt__Q24Game8BaseItem:
    .4byte 0
    .4byte 0
    .4byte getPosition__Q24Game8BaseItemFv
    .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
    .4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
    .4byte collisionUpdatable__Q24Game8CreatureFv
    .4byte isPiki__Q24Game8CreatureFv
    .4byte isNavi__Q24Game8CreatureFv
    .4byte deferPikiCollision__Q24Game10CellObjectFv
    .4byte getTypeName__Q24Game8CreatureFv
    .4byte getObjType__Q24Game8CreatureFv
    .4byte constructor__Q24Game8BaseItemFv
    .4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
    .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
    .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
    .4byte doAnimation__Q24Game8BaseItemFv
    .4byte doEntry__Q24Game8BaseItemFv
    .4byte doSetView__Q24Game8CreatureFi
    .4byte doViewCalc__Q24Game8CreatureFv
    .4byte doSimulation__Q24Game8BaseItemFf
    .4byte doDirectDraw__Q24Game8CreatureFR8Graphics
    .4byte getBodyRadius__Q24Game8CreatureFv
    .4byte getCellRadius__Q24Game8CreatureFv
    .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte getFaceDir__Q24Game8BaseItemFv
    .4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
    .4byte getVelocity__Q24Game8BaseItemFv
    .4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
    .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
    .4byte updateTrMatrix__Q24Game8BaseItemFv
    .4byte isTeki__Q24Game8CreatureFv
    .4byte isPellet__Q24Game8CreatureFv
    .4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
    .4byte outWaterCallback__Q24Game8CreatureFv
    .4byte inWater__Q24Game8CreatureFv
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
    .4byte bounceCallback__Q24Game8BaseItemFPQ23Sys8Triangle
    .4byte collisionCallback__Q24Game8BaseItemFRQ24Game9CollEvent
    .4byte platCallback__Q24Game8BaseItemFRQ24Game9PlatEvent
    .4byte getJAIObject__Q24Game8BaseItemFv
    .4byte getPSCreature__Q24Game8BaseItemFv
    .4byte getSound_AILOD__Q24Game8CreatureFv
    .4byte getSound_PosPtr__Q24Game8BaseItemFv
    .4byte sound_culling__Q24Game8CreatureFv
    .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
    .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
    .4byte on_movie_begin__Q24Game8CreatureFb
    .4byte on_movie_end__Q24Game8CreatureFb
    .4byte movieStartAnimation__Q24Game8BaseItemFUl
    .4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
    .4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
    .4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
    .4byte movieSetFaceDir__Q24Game8CreatureFf
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
    .4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
    .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
    .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
    .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
    .4byte getSuckPos__Q24Game8CreatureFv
    .4byte getGoalPos__Q24Game8CreatureFv
    .4byte isSuckReady__Q24Game8CreatureFv
    .4byte isSuckArriveWait__Q24Game8CreatureFv
    .4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
    .4byte getCreatureName__Q24Game8BaseItemFv
    .4byte getCreatureID__Q24Game8BaseItemFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte initDependency__Q24Game8BaseItemFv
    .4byte startSound__Q24Game8BaseItemFUl
    .4byte makeTrMatrix__Q24Game8BaseItemFv
    .4byte doAI__Q24Game8BaseItemFv
    .4byte move__Q24Game8BaseItemFf
    .4byte changeMaterial__Q24Game8BaseItemFv
    .4byte do_updateLOD__Q24Game8BaseItemFv
    .4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
    .4byte getMapCollisionRadius__Q24Game8BaseItemFv
    .4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
    .4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
    .4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
    .4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
    .4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
    .4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
    .4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
    .4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
    .4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
    .4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
    .4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
    .4byte do_doAnimation__Q24Game8BaseItemFv
    .4byte updateBoundSphere__Q24Game8BaseItemFv
    .4byte update__Q24Game8BaseItemFv
    .4byte entryShape__Q24Game8BaseItemFv
    .4byte onSetPosition__Q24Game8BaseItemFv
*/

namespace Game {
struct Creature {
	virtual void _08() = 0;                                          // _08
	virtual void checkCollision(CellObject*);                        // _0C
	virtual void _10() = 0;                                          // _10
	virtual void collisionUpdatable();                               // _14
	virtual void isPiki();                                           // _18
	virtual void isNavi();                                           // _1C
	virtual void _20() = 0;                                          // _20
	virtual void getTypeName();                                      // _24
	virtual void getObjType();                                       // _28
	virtual void _2C() = 0;                                          // _2C
	virtual void onInit(CreatureInitArg*);                           // _30
	virtual void onKill(CreatureKillArg*);                           // _34
	virtual void onInitPost(CreatureInitArg*);                       // _38
	virtual void _3C() = 0;                                          // _3C
	virtual void _40() = 0;                                          // _40
	virtual void doSetView(int);                                     // _44
	virtual void doViewCalc();                                       // _48
	virtual void _4C() = 0;                                          // _4C
	virtual void doDirectDraw(Graphics&);                            // _50
	virtual void getBodyRadius();                                    // _54
	virtual void getCellRadius();                                    // _58
	virtual void initPosition(Vector3<float>&);                      // _5C
	virtual void onInitPosition(Vector3<float>&);                    // _60
	virtual void _64() = 0;                                          // _64
	virtual void _68() = 0;                                          // _68
	virtual void _6C() = 0;                                          // _6C
	virtual void _70() = 0;                                          // _70
	virtual void onSetPositionPost(Vector3<float>&);                 // _74
	virtual void _78() = 0;                                          // _78
	virtual void isTeki();                                           // _7C
	virtual void isPellet();                                         // _80
	virtual void inWaterCallback(WaterBox*);                         // _84
	virtual void outWaterCallback();                                 // _88
	virtual void inWater();                                          // _8C
	virtual void getFlockMgr();                                      // _90
	virtual void onStartCapture();                                   // _94
	virtual void onUpdateCapture(Matrixf&);                          // _98
	virtual void onEndCapture();                                     // _9C
	virtual void isAtari();                                          // _A0
	virtual void setAtari(bool);                                     // _A4
	virtual void isAlive();                                          // _A8
	virtual void setAlive(bool);                                     // _AC
	virtual void isCollisionFlick();                                 // _B0
	virtual void setCollisionFlick(bool);                            // _B4
	virtual void isMovieActor();                                     // _B8
	virtual void isMovieExtra();                                     // _BC
	virtual void isMovieMotion();                                    // _C0
	virtual void setMovieMotion(bool);                               // _C4
	virtual void isBuried();                                         // _C8
	virtual void isFlying();                                         // _CC
	virtual void isUnderground();                                    // _D0
	virtual void isLivingThing();                                    // _D4
	virtual void isDebugCollision();                                 // _D8
	virtual void setDebugCollision(bool);                            // _DC
	virtual void doSave(Stream&);                                    // _E0
	virtual void doLoad(Stream&);                                    // _E4
	virtual void _E8() = 0;                                          // _E8
	virtual void _EC() = 0;                                          // _EC
	virtual void _F0() = 0;                                          // _F0
	virtual void _F4() = 0;                                          // _F4
	virtual void _F8() = 0;                                          // _F8
	virtual void getSound_AILOD();                                   // _FC
	virtual void _100() = 0;                                         // _100
	virtual void sound_culling();                                    // _104
	virtual void getSound_CurrAnimFrame();                           // _108
	virtual void getSound_CurrAnimSpeed();                           // _10C
	virtual void on_movie_begin(bool);                               // _110
	virtual void on_movie_end(bool);                                 // _114
	virtual void _118() = 0;                                         // _118
	virtual void _11C() = 0;                                         // _11C
	virtual void _120() = 0;                                         // _120
	virtual void _124() = 0;                                         // _124
	virtual void movieSetFaceDir(float);                             // _128
	virtual void movieGotoPosition(Vector3<float>&);                 // _12C
	virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _130
	virtual void getShadowParam(ShadowParam&);                       // _134
	virtual void needShadow();                                       // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);                 // _13C
	virtual void getLODSphere(Sys::Sphere&);                         // _140
	virtual void getLODCylinder(Sys::Cylinder&);                     // _144
	virtual void startPick();                                        // _148
	virtual void endPick(bool);                                      // _14C
	virtual void getMabiki();                                        // _150
	virtual void getFootmarks();                                     // _154
	virtual void onStickStart(Creature*);                            // _158
	virtual void onStickEnd(Creature*);                              // _15C
	virtual void onStickStartSelf(Creature*);                        // _160
	virtual void onStickEndSelf(Creature*);                          // _164
	virtual void isSlotFree(short);                                  // _168
	virtual void getFreeStickSlot();                                 // _16C
	virtual void getNearFreeStickSlot(Vector3<float>&);              // _170
	virtual void getRandomFreeStickSlot();                           // _174
	virtual void onSlotStickStart(Creature*, short);                 // _178
	virtual void onSlotStickEnd(Creature*, short);                   // _17C
	virtual void calcStickSlotGlobal(short, Vector3<float>&);        // _180
	virtual void _184() = 0;                                         // _184
	virtual void getAngularEffect(Vector3<float>&, Vector3<float>&); // _188
	virtual void applyImpulse(Vector3<float>&, Vector3<float>&);     // _18C
	virtual void ignoreAtari(Creature*);                             // _190
	virtual void getSuckPos();                                       // _194
	virtual void getGoalPos();                                       // _198
	virtual void isSuckReady();                                      // _19C
	virtual void isSuckArriveWait();                                 // _1A0

	// _00 VTBL
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
	virtual void deferPikiCollision(); // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct BaseItem : public Creature, public CellObject {
	virtual void getPosition();                                   // _08
	virtual void getBoundingSphere(Sys::Sphere&);                 // _10
	virtual void constructor();                                   // _2C
	virtual void doAnimation();                                   // _3C
	virtual void doEntry();                                       // _40
	virtual void doSimulation(float);                             // _4C
	virtual void getFaceDir();                                    // _64
	virtual void setVelocity(Vector3<float>&);                    // _68
	virtual void getVelocity();                                   // _6C
	virtual void onSetPosition(Vector3<float>&);                  // _70
	virtual void updateTrMatrix();                                // _78
	virtual void bounceCallback(Sys::Triangle*);                  // _E8
	virtual void collisionCallback(CollEvent&);                   // _EC
	virtual void platCallback(PlatEvent&);                        // _F0
	virtual void getJAIObject();                                  // _F4
	virtual void getPSCreature();                                 // _F8
	virtual void getSound_PosPtr();                               // _100
	virtual void movieStartAnimation(unsigned long);              // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);    // _11C
	virtual void movieSetAnimationLastFrame();                    // _120
	virtual void movieSetTranslation(Vector3<float>&, float);     // _124
	virtual void getVelocityAt(Vector3<float>&, Vector3<float>&); // _184
	virtual void stimulate(Interaction&);                         // _1A4
	virtual void getCreatureName();                               // _1A8
	virtual void getCreatureID();                                 // _1AC
	virtual void _1B0() = 0;                                      // _1B0
	virtual void _1B4() = 0;                                      // _1B4
	virtual void _1B8() = 0;                                      // _1B8
	virtual void initDependency();                                // _1BC
	virtual void startSound(unsigned long);                       // _1C0
	virtual void makeTrMatrix();                                  // _1C4
	virtual void doAI();                                          // _1C8
	virtual void move(float);                                     // _1CC
	virtual void changeMaterial();                                // _1D0
	virtual void do_updateLOD();                                  // _1D4
	virtual void do_setLODParm(AILODParm&);                       // _1D8
	virtual void getMapCollisionRadius();                         // _1DC
	virtual void interactAttack(InteractAttack&);                 // _1E0
	virtual void interactBreakBridge(InteractBreakBridge&);       // _1E4
	virtual void interactEat(InteractEat&);                       // _1E8
	virtual void interactFlockAttack(InteractFlockAttack&);       // _1EC
	virtual void interactAbsorb(InteractAbsorb&);                 // _1F0
	virtual void interactFue(InteractFue&);                       // _1F4
	virtual void interactFarmKarero(InteractFarmKarero&);         // _1F8
	virtual void interactFarmHaero(InteractFarmHaero&);           // _1FC
	virtual void interactGotKey(InteractGotKey&);                 // _200
	virtual void getVectorField(Sys::Sphere&, Vector3<float>&);   // _204
	virtual void getWorkDistance(Sys::Sphere&);                   // _208
	virtual void do_doAnimation();                                // _20C
	virtual void updateBoundSphere();                             // _210
	virtual void update();                                        // _214
	virtual void entryShape();                                    // _218
	virtual void onSetPosition();                                 // _21C

	// _00 VTBL
};
} // namespace Game

#endif
