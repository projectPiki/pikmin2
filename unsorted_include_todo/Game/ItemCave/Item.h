#ifndef _GAME_ITEMCAVE_ITEM_H
#define _GAME_ITEMCAVE_ITEM_H

/*
    __vt__Q34Game8ItemCave4Item:
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
    .4byte onInit__Q34Game8ItemCave4ItemFPQ24Game15CreatureInitArg
    .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
    .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
    .4byte doAnimation__Q24Game8BaseItemFv
    .4byte doEntry__Q24Game8BaseItemFv
    .4byte doSetView__Q24Game8CreatureFi
    .4byte doViewCalc__Q24Game8CreatureFv
    .4byte doSimulation__Q24Game8BaseItemFf
    .4byte doDirectDraw__Q34Game8ItemCave4ItemFR8Graphics
    .4byte getBodyRadius__Q24Game8CreatureFv
    .4byte getCellRadius__Q24Game8CreatureFv
    .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
    .4byte getFaceDir__Q34Game8ItemCave4ItemFv
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
    .4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FPQ23Sys8Triangle"
    .4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9CollEvent"
    .4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9PlatEvent"
    .4byte getJAIObject__Q24Game8BaseItemFv
    .4byte getPSCreature__Q24Game8BaseItemFv
    .4byte getSound_AILOD__Q24Game8CreatureFv
    .4byte getSound_PosPtr__Q24Game8BaseItemFv
    .4byte sound_culling__Q34Game8ItemCave4ItemFv
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
    .4byte getCreatureName__Q34Game8ItemCave4ItemFv
    .4byte getCreatureID__Q24Game8BaseItemFv
    .4byte 0
    .4byte 0
    .4byte "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"
    .4byte initDependency__Q34Game8ItemCave4ItemFv
    .4byte startSound__Q24Game8BaseItemFUl
    .4byte makeTrMatrix__Q34Game8ItemCave4ItemFv
    .4byte doAI__Q34Game8ItemCave4ItemFv
    .4byte move__Q24Game8BaseItemFf
    .4byte changeMaterial__Q34Game8ItemCave4ItemFv
    .4byte do_updateLOD__Q24Game8BaseItemFv
    .4byte do_setLODParm__Q34Game8ItemCave4ItemFRQ24Game9AILODParm
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
    .4byte onSetPosition__Q34Game8ItemCave4ItemFv
    .4byte "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"
*/

namespace Game {
struct BaseItem {
	virtual void getPosition();                                   // _08 (weak)
	virtual void _0C() = 0;                                       // _0C
	virtual void getBoundingSphere(Sys::Sphere&);                 // _10 (weak)
	virtual void _14() = 0;                                       // _14
	virtual void _18() = 0;                                       // _18
	virtual void _1C() = 0;                                       // _1C
	virtual void _20() = 0;                                       // _20
	virtual void _24() = 0;                                       // _24
	virtual void _28() = 0;                                       // _28
	virtual void constructor();                                   // _2C
	virtual void onInit(CreatureInitArg*);                        // _30
	virtual void _34() = 0;                                       // _34
	virtual void _38() = 0;                                       // _38
	virtual void doAnimation();                                   // _3C (weak)
	virtual void doEntry();                                       // _40
	virtual void _44() = 0;                                       // _44
	virtual void _48() = 0;                                       // _48
	virtual void doSimulation(float);                             // _4C
	virtual void doDirectDraw(Graphics&);                         // _50
	virtual void _54() = 0;                                       // _54
	virtual void _58() = 0;                                       // _58
	virtual void _5C() = 0;                                       // _5C
	virtual void _60() = 0;                                       // _60
	virtual void getFaceDir();                                    // _64 (weak)
	virtual void setVelocity(Vector3<float>&);                    // _68 (weak)
	virtual void getVelocity();                                   // _6C (weak)
	virtual void onSetPosition(Vector3<float>&);                  // _70 (weak)
	virtual void _74() = 0;                                       // _74
	virtual void updateTrMatrix();                                // _78
	virtual void _7C() = 0;                                       // _7C
	virtual void _80() = 0;                                       // _80
	virtual void _84() = 0;                                       // _84
	virtual void _88() = 0;                                       // _88
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
	virtual void _D4() = 0;                                       // _D4
	virtual void _D8() = 0;                                       // _D8
	virtual void _DC() = 0;                                       // _DC
	virtual void _E0() = 0;                                       // _E0
	virtual void _E4() = 0;                                       // _E4
	virtual void _E8() = 0;                                       // _E8
	virtual void _EC() = 0;                                       // _EC
	virtual void _F0() = 0;                                       // _F0
	virtual void getJAIObject();                                  // _F4
	virtual void getPSCreature();                                 // _F8
	virtual void _FC() = 0;                                       // _FC
	virtual void getSound_PosPtr();                               // _100 (weak)
	virtual void sound_culling();                                 // _104
	virtual void _108() = 0;                                      // _108
	virtual void _10C() = 0;                                      // _10C
	virtual void _110() = 0;                                      // _110
	virtual void _114() = 0;                                      // _114
	virtual void movieStartAnimation(unsigned long);              // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);    // _11C
	virtual void movieSetAnimationLastFrame();                    // _120
	virtual void movieSetTranslation(Vector3<float>&, float);     // _124
	virtual void _128() = 0;                                      // _128
	virtual void _12C() = 0;                                      // _12C
	virtual void _130() = 0;                                      // _130
	virtual void _134() = 0;                                      // _134
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
	virtual void getVelocityAt(Vector3<float>&, Vector3<float>&); // _184 (weak)
	virtual void _188() = 0;                                      // _188
	virtual void _18C() = 0;                                      // _18C
	virtual void _190() = 0;                                      // _190
	virtual void _194() = 0;                                      // _194
	virtual void _198() = 0;                                      // _198
	virtual void _19C() = 0;                                      // _19C
	virtual void _1A0() = 0;                                      // _1A0
	virtual void stimulate(Interaction&);                         // _1A4
	virtual void getCreatureName();                               // _1A8 (weak)
	virtual void getCreatureID();                                 // _1AC (weak)
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
	virtual void getMapCollisionRadius();                         // _1DC (weak)
	virtual void interactAttack(InteractAttack&);                 // _1E0 (weak)
	virtual void interactBreakBridge(InteractBreakBridge&);       // _1E4 (weak)
	virtual void interactEat(InteractEat&);                       // _1E8 (weak)
	virtual void interactFlockAttack(InteractFlockAttack&);       // _1EC (weak)
	virtual void interactAbsorb(InteractAbsorb&);                 // _1F0 (weak)
	virtual void interactFue(InteractFue&);                       // _1F4 (weak)
	virtual void interactFarmKarero(InteractFarmKarero&);         // _1F8 (weak)
	virtual void interactFarmHaero(InteractFarmHaero&);           // _1FC (weak)
	virtual void interactGotKey(InteractGotKey&);                 // _200 (weak)
	virtual void getVectorField(Sys::Sphere&, Vector3<float>&);   // _204 (weak)
	virtual void getWorkDistance(Sys::Sphere&);                   // _208 (weak)
	virtual void do_doAnimation();                                // _20C (weak)
	virtual void updateBoundSphere();                             // _210 (weak)
	virtual void update();                                        // _214
	virtual void entryShape();                                    // _218
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
	virtual void onKill(CreatureKillArg*);                           // _34 (weak)
	virtual void onInitPost(CreatureInitArg*);                       // _38 (weak)
	virtual void _3C() = 0;                                          // _3C
	virtual void _40() = 0;                                          // _40
	virtual void doSetView(int);                                     // _44
	virtual void doViewCalc();                                       // _48
	virtual void _4C() = 0;                                          // _4C
	virtual void doDirectDraw(Graphics&);                            // _50
	virtual void getBodyRadius();                                    // _54
	virtual void getCellRadius();                                    // _58
	virtual void initPosition(Vector3<float>&);                      // _5C
	virtual void onInitPosition(Vector3<float>&);                    // _60 (weak)
	virtual void getFaceDir();                                       // _64 (weak)
	virtual void _68() = 0;                                          // _68
	virtual void _6C() = 0;                                          // _6C
	virtual void _70() = 0;                                          // _70
	virtual void onSetPositionPost(Vector3<float>&);                 // _74 (weak)
	virtual void _78() = 0;                                          // _78
	virtual void isTeki();                                           // _7C
	virtual void isPellet();                                         // _80
	virtual void inWaterCallback(WaterBox*);                         // _84 (weak)
	virtual void outWaterCallback();                                 // _88 (weak)
	virtual void inWater();                                          // _8C (weak)
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
	virtual void _E8() = 0;                                          // _E8
	virtual void _EC() = 0;                                          // _EC
	virtual void _F0() = 0;                                          // _F0
	virtual void _F4() = 0;                                          // _F4
	virtual void _F8() = 0;                                          // _F8
	virtual void getSound_AILOD();                                   // _FC (weak)
	virtual void _100() = 0;                                         // _100
	virtual void sound_culling();                                    // _104
	virtual void getSound_CurrAnimFrame();                           // _108 (weak)
	virtual void getSound_CurrAnimSpeed();                           // _10C (weak)
	virtual void on_movie_begin(bool);                               // _110 (weak)
	virtual void on_movie_end(bool);                                 // _114 (weak)
	virtual void _118() = 0;                                         // _118
	virtual void _11C() = 0;                                         // _11C
	virtual void _120() = 0;                                         // _120
	virtual void _124() = 0;                                         // _124
	virtual void movieSetFaceDir(float);                             // _128 (weak)
	virtual void movieGotoPosition(Vector3<float>&);                 // _12C (weak)
	virtual void movieUserCommand(unsigned long, MoviePlayer*);      // _130 (weak)
	virtual void getShadowParam(ShadowParam&);                       // _134
	virtual void needShadow();                                       // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);                 // _13C
	virtual void getLODSphere(Sys::Sphere&);                         // _140 (weak)
	virtual void getLODCylinder(Sys::Cylinder&);                     // _144 (weak)
	virtual void startPick();                                        // _148 (weak)
	virtual void endPick(bool);                                      // _14C (weak)
	virtual void getMabiki();                                        // _150 (weak)
	virtual void getFootmarks();                                     // _154 (weak)
	virtual void onStickStart(Creature*);                            // _158 (weak)
	virtual void onStickEnd(Creature*);                              // _15C (weak)
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
namespace FSMItem < Game
{
	namespace ItemCave {
	namespace Item, Game
	{
		namespace ItemCave {
		namespace FSM, Game
		{
			namespace ItemCave {
			struct State >
			{
				virtual void _08() = 0;                                                  // _08
				virtual void _0C() = 0;                                                  // _0C
				virtual void _10() = 0;                                                  // _10
				virtual void _14() = 0;                                                  // _14
				virtual void _18() = 0;                                                  // _18
				virtual void _1C() = 0;                                                  // _1C
				virtual void _20() = 0;                                                  // _20
				virtual void _24() = 0;                                                  // _24
				virtual void _28() = 0;                                                  // _28
				virtual void _2C() = 0;                                                  // _2C
				virtual void onInit(CreatureInitArg*);                                   // _30
				virtual void _34() = 0;                                                  // _34
				virtual void _38() = 0;                                                  // _38
				virtual void _3C() = 0;                                                  // _3C
				virtual void _40() = 0;                                                  // _40
				virtual void _44() = 0;                                                  // _44
				virtual void _48() = 0;                                                  // _48
				virtual void _4C() = 0;                                                  // _4C
				virtual void doDirectDraw(Graphics&);                                    // _50
				virtual void _54() = 0;                                                  // _54
				virtual void _58() = 0;                                                  // _58
				virtual void _5C() = 0;                                                  // _5C
				virtual void _60() = 0;                                                  // _60
				virtual void getFaceDir();                                               // _64 (weak)
				virtual void _68() = 0;                                                  // _68
				virtual void _6C() = 0;                                                  // _6C
				virtual void _70() = 0;                                                  // _70
				virtual void _74() = 0;                                                  // _74
				virtual void _78() = 0;                                                  // _78
				virtual void _7C() = 0;                                                  // _7C
				virtual void _80() = 0;                                                  // _80
				virtual void _84() = 0;                                                  // _84
				virtual void _88() = 0;                                                  // _88
				virtual void _8C() = 0;                                                  // _8C
				virtual void _90() = 0;                                                  // _90
				virtual void _94() = 0;                                                  // _94
				virtual void _98() = 0;                                                  // _98
				virtual void _9C() = 0;                                                  // _9C
				virtual void _A0() = 0;                                                  // _A0
				virtual void _A4() = 0;                                                  // _A4
				virtual void _A8() = 0;                                                  // _A8
				virtual void _AC() = 0;                                                  // _AC
				virtual void _B0() = 0;                                                  // _B0
				virtual void _B4() = 0;                                                  // _B4
				virtual void _B8() = 0;                                                  // _B8
				virtual void _BC() = 0;                                                  // _BC
				virtual void _C0() = 0;                                                  // _C0
				virtual void _C4() = 0;                                                  // _C4
				virtual void _C8() = 0;                                                  // _C8
				virtual void _CC() = 0;                                                  // _CC
				virtual void _D0() = 0;                                                  // _D0
				virtual void _D4() = 0;                                                  // _D4
				virtual void _D8() = 0;                                                  // _D8
				virtual void _DC() = 0;                                                  // _DC
				virtual void _E0() = 0;                                                  // _E0
				virtual void _E4() = 0;                                                  // _E4
				virtual void FSMItem < Item, FSM, bounceCallback(Sys::Triangle*);        // _E8 (weak)
				virtual void FSMItem < Item, FSM, collisionCallback(CollEvent&);         // _EC (weak)
				virtual void FSMItem < Item, FSM, platCallback(PlatEvent&);              // _F0 (weak)
				virtual void _F4()  = 0;                                                 // _F4
				virtual void _F8()  = 0;                                                 // _F8
				virtual void _FC()  = 0;                                                 // _FC
				virtual void _100() = 0;                                                 // _100
				virtual void sound_culling();                                            // _104
				virtual void _108() = 0;                                                 // _108
				virtual void _10C() = 0;                                                 // _10C
				virtual void _110() = 0;                                                 // _110
				virtual void _114() = 0;                                                 // _114
				virtual void _118() = 0;                                                 // _118
				virtual void _11C() = 0;                                                 // _11C
				virtual void _120() = 0;                                                 // _120
				virtual void _124() = 0;                                                 // _124
				virtual void _128() = 0;                                                 // _128
				virtual void _12C() = 0;                                                 // _12C
				virtual void _130() = 0;                                                 // _130
				virtual void _134() = 0;                                                 // _134
				virtual void _138() = 0;                                                 // _138
				virtual void _13C() = 0;                                                 // _13C
				virtual void _140() = 0;                                                 // _140
				virtual void _144() = 0;                                                 // _144
				virtual void _148() = 0;                                                 // _148
				virtual void _14C() = 0;                                                 // _14C
				virtual void _150() = 0;                                                 // _150
				virtual void _154() = 0;                                                 // _154
				virtual void _158() = 0;                                                 // _158
				virtual void _15C() = 0;                                                 // _15C
				virtual void _160() = 0;                                                 // _160
				virtual void _164() = 0;                                                 // _164
				virtual void _168() = 0;                                                 // _168
				virtual void _16C() = 0;                                                 // _16C
				virtual void _170() = 0;                                                 // _170
				virtual void _174() = 0;                                                 // _174
				virtual void _178() = 0;                                                 // _178
				virtual void _17C() = 0;                                                 // _17C
				virtual void _180() = 0;                                                 // _180
				virtual void _184() = 0;                                                 // _184
				virtual void _188() = 0;                                                 // _188
				virtual void _18C() = 0;                                                 // _18C
				virtual void _190() = 0;                                                 // _190
				virtual void _194() = 0;                                                 // _194
				virtual void _198() = 0;                                                 // _198
				virtual void _19C() = 0;                                                 // _19C
				virtual void _1A0() = 0;                                                 // _1A0
				virtual void _1A4() = 0;                                                 // _1A4
				virtual void getCreatureName();                                          // _1A8 (weak)
				virtual void _1AC() = 0;                                                 // _1AC
				virtual void _1B0() = 0;                                                 // _1B0
				virtual void _1B4() = 0;                                                 // _1B4
				virtual void _1B8() = 0;                                                 // _1B8
				virtual void initDependency();                                           // _1BC
				virtual void _1C0() = 0;                                                 // _1C0
				virtual void makeTrMatrix();                                             // _1C4
				virtual void doAI();                                                     // _1C8
				virtual void _1CC() = 0;                                                 // _1CC
				virtual void changeMaterial();                                           // _1D0
				virtual void _1D4() = 0;                                                 // _1D4
				virtual void do_setLODParm(AILODParm&);                                  // _1D8
				virtual void _1DC() = 0;                                                 // _1DC
				virtual void _1E0() = 0;                                                 // _1E0
				virtual void _1E4() = 0;                                                 // _1E4
				virtual void _1E8() = 0;                                                 // _1E8
				virtual void _1EC() = 0;                                                 // _1EC
				virtual void _1F0() = 0;                                                 // _1F0
				virtual void _1F4() = 0;                                                 // _1F4
				virtual void _1F8() = 0;                                                 // _1F8
				virtual void _1FC() = 0;                                                 // _1FC
				virtual void _200() = 0;                                                 // _200
				virtual void _204() = 0;                                                 // _204
				virtual void _208() = 0;                                                 // _208
				virtual void _20C() = 0;                                                 // _20C
				virtual void _210() = 0;                                                 // _210
				virtual void _214() = 0;                                                 // _214
				virtual void _218() = 0;                                                 // _218
				virtual void onSetPosition();                                            // _21C
				virtual void FSMItem < Item, FSM, onKeyEvent(const SysShape::KeyEvent&); // _220 (weak)
			};
			} // namespace ItemCave
		}     // namespace Game
		}     // namespace ItemCave
	}         // namespace Game
	}         // namespace ItemCave
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemCave {
struct Item : public BaseItem, public Creature, public CellObject, public State > {
	virtual void onInit(CreatureInitArg*);  // _30
	virtual void doDirectDraw(Graphics&);   // _50
	virtual void getFaceDir();              // _64 (weak)
	virtual void sound_culling();           // _104
	virtual void getCreatureName();         // _1A8 (weak)
	virtual void _1B0() = 0;                // _1B0
	virtual void _1B4() = 0;                // _1B4
	virtual void initDependency();          // _1BC
	virtual void makeTrMatrix();            // _1C4
	virtual void doAI();                    // _1C8
	virtual void changeMaterial();          // _1D0
	virtual void do_setLODParm(AILODParm&); // _1D8
	virtual void onSetPosition();           // _21C

	Item();
	void createLightEvent();
	void getCaveOtakaraNum();
	void getCaveOtakaraMax();
	void complete();
};
} // namespace ItemCave
} // namespace Game

#endif
