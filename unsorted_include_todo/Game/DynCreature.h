#ifndef _GAME_DYNCREATURE_H
#define _GAME_DYNCREATURE_H

/*
    __vt__Q24Game11DynCreature:
    .4byte 0
    .4byte 0
    .4byte getPosition__Q24Game11DynCreatureFv
    .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
    .4byte 0
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
    .4byte doAnimation__Q24Game8CreatureFv
    .4byte doEntry__Q24Game8CreatureFv
    .4byte doSetView__Q24Game8CreatureFi
    .4byte doViewCalc__Q24Game8CreatureFv
    .4byte doSimulation__Q24Game8CreatureFf
    .4byte doDirectDraw__Q24Game8CreatureFR8Graphics
    .4byte getBodyRadius__Q24Game8CreatureFv
    .4byte getCellRadius__Q24Game8CreatureFv
    .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte 0
    .4byte "setVelocity__Q24Game11DynCreatureFR10Vector3<f>"
    .4byte getVelocity__Q24Game11DynCreatureFv
    .4byte "onSetPosition__Q24Game11DynCreatureFR10Vector3<f>"
    .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
    .4byte 0
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
    .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
    .4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
    .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
    .4byte getJAIObject__Q24Game8CreatureFv
    .4byte getPSCreature__Q24Game8CreatureFv
    .4byte getSound_AILOD__Q24Game8CreatureFv
    .4byte getSound_PosPtr__Q24Game8CreatureFv
    .4byte sound_culling__Q24Game8CreatureFv
    .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
    .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
    .4byte on_movie_begin__Q24Game8CreatureFb
    .4byte on_movie_end__Q24Game8CreatureFb
    .4byte movieStartAnimation__Q24Game8CreatureFUl
    .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
    .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
    .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
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
    .4byte "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
    .4byte "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
    .4byte "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
    .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
    .4byte getSuckPos__Q24Game8CreatureFv
    .4byte getGoalPos__Q24Game8CreatureFv
    .4byte isSuckReady__Q24Game8CreatureFv
    .4byte isSuckArriveWait__Q24Game8CreatureFv
    .4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
    .4byte getCreatureName__Q24Game8CreatureFv
    .4byte getCreatureID__Q24Game8CreatureFv
    .4byte onSetPosition__Q24Game11DynCreatureFv
*/

namespace Game {
struct Creature {
	virtual void getPosition();                                      // _08
	virtual void checkCollision(CellObject*);                        // _0C
	virtual void _10() = 0;                                          // _10
	virtual void collisionUpdatable();                               // _14 (inline)
	virtual void isPiki();                                           // _18
	virtual void isNavi();                                           // _1C
	virtual void _20() = 0;                                          // _20
	virtual void getTypeName();                                      // _24
	virtual void getObjType();                                       // _28 (inline)
	virtual void constructor();                                      // _2C (inline)
	virtual void onInit(CreatureInitArg*);                           // _30 (inline)
	virtual void onKill(CreatureKillArg*);                           // _34 (inline)
	virtual void onInitPost(CreatureInitArg*);                       // _38 (inline)
	virtual void doAnimation();                                      // _3C
	virtual void doEntry();                                          // _40
	virtual void doSetView(int);                                     // _44
	virtual void doViewCalc();                                       // _48
	virtual void doSimulation(float);                                // _4C (inline)
	virtual void doDirectDraw(Graphics&);                            // _50 (inline)
	virtual void getBodyRadius();                                    // _54
	virtual void getCellRadius();                                    // _58
	virtual void initPosition(Vector3<float>&);                      // _5C
	virtual void onInitPosition(Vector3<float>&);                    // _60 (inline)
	virtual void _64() = 0;                                          // _64
	virtual void setVelocity(Vector3<float>&);                       // _68
	virtual void getVelocity();                                      // _6C
	virtual void onSetPosition(Vector3<float>&);                     // _70
	virtual void onSetPositionPost(Vector3<float>&);                 // _74 (inline)
	virtual void _78() = 0;                                          // _78
	virtual void isTeki();                                           // _7C
	virtual void isPellet();                                         // _80
	virtual void inWaterCallback(WaterBox*);                         // _84 (inline)
	virtual void outWaterCallback();                                 // _88 (inline)
	virtual void inWater();                                          // _8C (inline)
	virtual void getFlockMgr();                                      // _90 (inline)
	virtual void onStartCapture();                                   // _94 (inline)
	virtual void onUpdateCapture(Matrixf&);                          // _98 (inline)
	virtual void onEndCapture();                                     // _9C (inline)
	virtual void isAtari();                                          // _A0 (inline)
	virtual void setAtari(bool);                                     // _A4 (inline)
	virtual void isAlive();                                          // _A8 (inline)
	virtual void setAlive(bool);                                     // _AC (inline)
	virtual void isCollisionFlick();                                 // _B0 (inline)
	virtual void setCollisionFlick(bool);                            // _B4 (inline)
	virtual void isMovieActor();                                     // _B8 (inline)
	virtual void isMovieExtra();                                     // _BC (inline)
	virtual void isMovieMotion();                                    // _C0 (inline)
	virtual void setMovieMotion(bool);                               // _C4 (inline)
	virtual void isBuried();                                         // _C8 (inline)
	virtual void isFlying();                                         // _CC (inline)
	virtual void isUnderground();                                    // _D0 (inline)
	virtual void isLivingThing();                                    // _D4 (inline)
	virtual void isDebugCollision();                                 // _D8 (inline)
	virtual void setDebugCollision(bool);                            // _DC (inline)
	virtual void doSave(Stream&);                                    // _E0 (inline)
	virtual void doLoad(Stream&);                                    // _E4 (inline)
	virtual void bounceCallback(Sys::Triangle*);                     // _E8 (inline)
	virtual void collisionCallback(CollEvent&);                      // _EC (inline)
	virtual void platCallback(PlatEvent&);                           // _F0 (inline)
	virtual void getJAIObject();                                     // _F4 (inline)
	virtual void getPSCreature();                                    // _F8 (inline)
	virtual void getSound_AILOD();                                   // _FC (inline)
	virtual void getSound_PosPtr();                                  // _100 (inline)
	virtual void sound_culling();                                    // _104
	virtual void getSound_CurrAnimFrame();                           // _108 (inline)
	virtual void getSound_CurrAnimSpeed();                           // _10C (inline)
	virtual void on_movie_begin(bool);                               // _110 (inline)
	virtual void on_movie_end(bool);                                 // _114 (inline)
	virtual void movieStartAnimation(unsigned long);                 // _118 (inline)
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);       // _11C (inline)
	virtual void movieSetAnimationLastFrame();                       // _120 (inline)
	virtual void movieSetTranslation(Vector3<float>&, float);        // _124 (inline)
	virtual void movieSetFaceDir(float);                             // _128 (inline)
	virtual void movieGotoPosition(Vector3<float>&);                 // _12C (inline)
	virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _130 (inline)
	virtual void getShadowParam(ShadowParam&);                       // _134
	virtual void needShadow();                                       // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);                 // _13C
	virtual void getLODSphere(Sys::Sphere&);                         // _140 (inline)
	virtual void getLODCylinder(Sys::Cylinder&);                     // _144 (inline)
	virtual void startPick();                                        // _148 (inline)
	virtual void endPick(bool);                                      // _14C (inline)
	virtual void getMabiki();                                        // _150 (inline)
	virtual void getFootmarks();                                     // _154 (inline)
	virtual void onStickStart(Creature*);                            // _158 (inline)
	virtual void onStickEnd(Creature*);                              // _15C (inline)
	virtual void onStickStartSelf(Creature*);                        // _160 (inline)
	virtual void onStickEndSelf(Creature*);                          // _164 (inline)
	virtual void isSlotFree(short);                                  // _168 (inline)
	virtual void getFreeStickSlot();                                 // _16C (inline)
	virtual void getNearFreeStickSlot(Vector3<float>&);              // _170 (inline)
	virtual void getRandomFreeStickSlot();                           // _174 (inline)
	virtual void onSlotStickStart(Creature*, short);                 // _178 (inline)
	virtual void onSlotStickEnd(Creature*, short);                   // _17C (inline)
	virtual void calcStickSlotGlobal(short, Vector3<float>&);        // _180 (inline)
	virtual void getVelocityAt(Vector3<float>&, Vector3<float>&);    // _184
	virtual void getAngularEffect(Vector3<float>&, Vector3<float>&); // _188
	virtual void applyImpulse(Vector3<float>&, Vector3<float>&);     // _18C
	virtual void ignoreAtari(Creature*);                             // _190 (inline)
	virtual void getSuckPos();                                       // _194 (inline)
	virtual void getGoalPos();                                       // _198 (inline)
	virtual void isSuckReady();                                      // _19C (inline)
	virtual void isSuckArriveWait();                                 // _1A0 (inline)
	virtual void stimulate(Interaction&);                            // _1A4 (inline)
	virtual void getCreatureName();                                  // _1A8 (inline)
	virtual void getCreatureID();                                    // _1AC (inline)
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
	virtual void deferPikiCollision(); // _20 (inline)
};
} // namespace Game

namespace Game {
struct DynCreature : public Creature, public CellObject {
	virtual void getPosition();                                      // _08
	virtual void _10() = 0;                                          // _10
	virtual void _64() = 0;                                          // _64
	virtual void setVelocity(Vector3<float>&);                       // _68
	virtual void getVelocity();                                      // _6C
	virtual void onSetPosition(Vector3<float>&);                     // _70
	virtual void _78() = 0;                                          // _78
	virtual void getVelocityAt(Vector3<float>&, Vector3<float>&);    // _184
	virtual void getAngularEffect(Vector3<float>&, Vector3<float>&); // _188
	virtual void applyImpulse(Vector3<float>&, Vector3<float>&);     // _18C
	virtual void onSetPosition();                                    // _1B0 (inline)

	DynCreature();
	void createParticles(int);
	void releaseParticles();
	void updateParticlePositions();
	void computeForces(float);
	void tracemoveCallback(Vector3<float>&, Vector3<float>&);
	void simulate(float);
};
} // namespace Game

#endif
