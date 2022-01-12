#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_itemWeed_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481FC0
    lbl_80481FC0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6974656D
        .4byte 0x57656564
        .4byte 0x00000000
    .global lbl_80481FD8
    lbl_80481FD8:
        .4byte 0x6974656D
        .4byte 0x57656564
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80481FE8
    lbl_80481FE8:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80481FF4
    lbl_80481FF4:
        .4byte 0x835F8381
        .4byte 0x8362834E
        .4byte 0x0A000000
    .global lbl_80482000
    lbl_80482000:
        .4byte 0x666C6F63
        .4byte 0x6B4D6772
        .4byte 0x2E680000
        .4byte 0x919082C6
        .4byte 0x8FAC90CE
        .4byte 0x00000000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6F
        .4byte 0x626A6563
        .4byte 0x74732F77
        .4byte 0x65656400
        .4byte 0x77656564
        .4byte 0x312E626D
        .4byte 0x64000000
        .4byte 0x73746F6E
        .4byte 0x65312E62
        .4byte 0x6D640000
        .4byte 0x73746F6E
        .4byte 0x65322E62
        .4byte 0x6D640000
        .4byte 0x73746F6E
        .4byte 0x65332E62
        .4byte 0x6D640000
        .4byte 0x092382A4
        .4byte 0x82B682E1
        .4byte 0x89A49094
        .4byte 0x0D0A0000
        .4byte 0x092390CE
        .4byte 0x82A99190
        .4byte 0x82A90D0A
        .4byte 0x00000000
    .global lbl_80482080
    lbl_80482080:
        .4byte 0x4974656D
        .4byte 0x57656564
        .4byte 0x3A3A496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x4974656D
        .4byte 0x486F6E65
        .4byte 0x793A3A49
        .4byte 0x6E697441
        .4byte 0x72670000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804BFBA0
    lbl_804BFBA0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game8ItemWeed7InitArg
    __vt__Q34Game8ItemWeed7InitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q34Game8ItemWeed7InitArgFv
    .global __vt__11GenWeedParm
    __vt__11GenWeedParm:
        .4byte 0
        .4byte 0
        .4byte getShapeID__Q24Game11GenItemParmFv
    .global __vt__Q34Game8ItemWeed9WaitState
    __vt__Q34Game8ItemWeed9WaitState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4ItemPQ24Game8StateArg
        .4byte exec__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item
        .4byte cleanup__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item
        .4byte
   "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
        .4byte
   "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game8ItemWeed3Mgr
    __vt__Q34Game8ItemWeed3Mgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12TNodeItemMgrFv
        .4byte doEntry__Q24Game12TNodeItemMgrFv
        .4byte doSetView__Q24Game12TNodeItemMgrFi
        .4byte doViewCalc__Q24Game12TNodeItemMgrFv
        .4byte doSimulation__Q24Game12TNodeItemMgrFf
        .4byte doDirectDraw__Q24Game12TNodeItemMgrFR8Graphics
        .4byte doSimpleDraw__Q34Game8ItemWeed3MgrFP8Viewport
        .4byte loadResources__Q24Game11BaseItemMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte initDependency__Q24Game12TNodeItemMgrFv
        .4byte killAll__Q24Game12TNodeItemMgrFv
        .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
        .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
        .4byte onLoadResources__Q34Game8ItemWeed3MgrFv
        .4byte loadEverytime__Q24Game11BaseItemMgrFv
        .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte generatorGetID__Q34Game8ItemWeed3MgrFv
        .4byte
   "generatorBirth__Q34Game8ItemWeed3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
        .4byte
   generatorWrite__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q34Game8ItemWeed3MgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q34Game8ItemWeed3MgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q34Game8ItemWeed3MgrFv" .4byte getChildCount__5CNodeFv .4byte
   "getObject__27Container<Q24Game8BaseItem>FPv" .4byte
   "@48@getNext__Q24Game12TNodeItemMgrFPv" .4byte
   "@48@getStart__Q24Game12TNodeItemMgrFv" .4byte
   "@48@getEnd__Q24Game12TNodeItemMgrFv" .4byte
   "@48@get__Q24Game12TNodeItemMgrFPv" .4byte
   "getAt__27Container<Q24Game8BaseItem>Fi" .4byte
   "getTo__27Container<Q24Game8BaseItem>Fv" .4byte doNew__Q34Game8ItemWeed3MgrFv
        .4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
        .4byte get__Q24Game12TNodeItemMgrFPv
        .4byte getNext__Q24Game12TNodeItemMgrFPv
        .4byte getStart__Q24Game12TNodeItemMgrFv
        .4byte getEnd__Q24Game12TNodeItemMgrFv
        .4byte __dt__Q34Game8ItemWeed3MgrFv
        .4byte getCaveName__Q34Game8ItemWeed3MgrFi
        .4byte getCaveID__Q34Game8ItemWeed3MgrFPc
    .global __vt__Q34Game8ItemWeed4Item
    __vt__Q34Game8ItemWeed4Item:
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
        .4byte onInit__Q34Game8ItemWeed4ItemFPQ24Game15CreatureInitArg
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
        .4byte getFlockMgr__Q34Game8ItemWeed4ItemFv
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
        .4byte
   "bounceCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9PlatEvent"
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
        .4byte ignoreAtari__Q34Game8ItemWeed4ItemFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
        .4byte getCreatureName__Q34Game8ItemWeed4ItemFv
        .4byte getCreatureID__Q24Game8BaseItemFv
        .4byte 0
        .4byte 0
        .4byte
   "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q34Game8ItemWeed4ItemFv
        .4byte doAI__Q34Game8ItemWeed4ItemFv
        .4byte move__Q24Game8BaseItemFf
        .4byte changeMaterial__Q24Game8BaseItemFv
        .4byte do_updateLOD__Q24Game8BaseItemFv
        .4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
        .4byte getMapCollisionRadius__Q24Game8BaseItemFv
        .4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q34Game8ItemWeed4ItemFRQ24Game19InteractFlockAttack
        .4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
        .4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
        .4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
        .4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
        .4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
        .4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
        .4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
        .4byte do_doAnimation__Q24Game8BaseItemFv
        .4byte updateBoundSphere__Q34Game8ItemWeed4ItemFv
        .4byte update__Q24Game8BaseItemFv
        .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q34Game8ItemWeed4ItemFv
        .4byte
   "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
        .4byte doSimpleDraw__Q34Game8ItemWeed4ItemFP8Viewport
    .global __vt__Q44Game8ItemWeed4Item10DummyShape
    __vt__Q44Game8ItemWeed4Item10DummyShape:
        .4byte 0
        .4byte 0
        .4byte getMatrix__Q44Game8ItemWeed4Item10DummyShapeFi
        .4byte isModel__Q28SysShape9MtxObjectFv
    .global "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"
    "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
    .global "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"
    "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
    .global
   "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"
    "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>":
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
        .4byte
   "bounceCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9PlatEvent"
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
        .4byte
   "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte
   "doAI__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>Fv"
        .4byte move__Q24Game8BaseItemFf
        .4byte changeMaterial__Q24Game8BaseItemFv
        .4byte do_updateLOD__Q24Game8BaseItemFv
        .4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
        .4byte getMapCollisionRadius__Q24Game8BaseItemFv
        .4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack .4byte
   interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb .4byte
   interactFue__Q24Game8BaseItemFRQ24Game11InteractFue .4byte
   interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero .4byte
   interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero .4byte
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q24Game8BaseItemFv .4byte update__Q24Game8BaseItemFv
        .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q24Game8BaseItemFv
        .4byte
   "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
    .global __vt__Q34Game8ItemWeed5State
    __vt__Q34Game8ItemWeed5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
        .4byte
   "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>"
    "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
        .4byte
   "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>"
    "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
    .global __vt__Q34Game8ItemWeed3FSM
    __vt__Q34Game8ItemWeed3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game8ItemWeed3FSMFPQ34Game8ItemWeed4Item
        .4byte
   "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
        .4byte
   "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
    .global __vt__Q34Game8ItemWeed7WeedMgr
    __vt__Q34Game8ItemWeed7WeedMgr:
        .4byte 0
        .4byte 0
        .4byte "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte
   "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock" .4byte
   do_update__Q34Game8ItemWeed7WeedMgrFv .4byte
   do_update_boundSphere__Q34Game8ItemWeed7WeedMgrFv .4byte
   doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai .4byte
   isWeed__Q24Game12BaseFlockMgrFi .4byte fear__Q24Game12BaseFlockMgrFi .4byte 0
        .4byte 0
        .4byte "@32@__dt__Q34Game8ItemWeed7WeedMgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"
        .4byte "@32@getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "@32@getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@32@getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@32@get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getAt__32Container<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getTo__32Container<Q34Game8ItemWeed4Weed>Fv"
        .4byte "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte __dt__Q34Game8ItemWeed7WeedMgrFv
    .global "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"
    "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>":
        .4byte 0
        .4byte 0
        .4byte "__dt__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__32Container<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getTo__32Container<Q34Game8ItemWeed4Weed>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@28@doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@28@doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "@28@doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@28@doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff"
        .4byte "@28@doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff"
        .4byte "doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
    .global "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"
    "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>":
        .4byte 0
        .4byte 0
        .4byte "__dt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getNext__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getStart__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getEnd__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "get__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getAt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getTo__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@28@doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@28@doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "@28@doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@28@doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff"
        .4byte
   "@28@doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte
   "@28@resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   pausable__16GenericObjectMgrFv .4byte frozenable__16GenericObjectMgrFv .4byte
   getMatrixLoadType__16GenericObjectMgrFv .4byte
   "doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   "doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   "doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi" .4byte
   "doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   "doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff" .4byte
   "doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics" .4byte
   "birth__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   "resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   "clearMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .4byte
   "onAlloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv" .global
   "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"
    "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>":
        .4byte 0
        .4byte 0
        .4byte "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte
   "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock" .4byte
   do_update__Q24Game12BaseFlockMgrFv .4byte 0 .4byte
   doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai .4byte
   isWeed__Q24Game12BaseFlockMgrFi .4byte fear__Q24Game12BaseFlockMgrFi .4byte 0
        .4byte 0
        .4byte "@32@__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"
        .4byte "@32@getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "@32@getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@32@getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@32@get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getAt__32Container<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getTo__32Container<Q34Game8ItemWeed4Weed>Fv"
        .4byte "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
    .global "__vt__32Container<Q34Game8ItemWeed4Weed>"
    "__vt__32Container<Q34Game8ItemWeed4Weed>":
        .4byte 0
        .4byte 0
        .4byte "__dt__32Container<Q34Game8ItemWeed4Weed>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__32Container<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getTo__32Container<Q34Game8ItemWeed4Weed>Fv"
    .global __vt__Q34Game8ItemWeed4Weed
    __vt__Q34Game8ItemWeed4Weed:
        .4byte 0
        .4byte 0
        .4byte makeMatrix__Q34Game8ItemWeed4WeedFv
        .4byte isVisible__Q24Game6TFlockFv
        .4byte isWeed__Q34Game8ItemWeed4WeedFv
        .4byte fear__Q24Game6TFlockFv
        .4byte getRadius__Q24Game6TFlockFv
        .4byte damaged__Q34Game8ItemWeed4WeedFf
        .4byte constructor__Q24Game6TFlockFv
    .global "__vt__31Iterator<Q34Game8ItemWeed4Weed>"
    "__vt__31Iterator<Q34Game8ItemWeed4Weed>":
        .4byte 0
        .4byte 0
        .4byte "first__31Iterator<Q34Game8ItemWeed4Weed>Fv"
        .4byte "next__31Iterator<Q34Game8ItemWeed4Weed>Fv"
        .4byte "isDone__31Iterator<Q34Game8ItemWeed4Weed>Fv"
        .4byte "__ml__31Iterator<Q34Game8ItemWeed4Weed>Fv"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515BD8
    lbl_80515BD8:
        .skip 0x4
    .global lbl_80515BDC
    lbl_80515BDC:
        .skip 0x4
    .global mgr__Q24Game8ItemWeed
    mgr__Q24Game8ItemWeed:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519EF8
    lbl_80519EF8:
        .4byte 0x00000000
    .global lbl_80519EFC
    lbl_80519EFC:
        .float 1.0
    .global lbl_80519F00
    lbl_80519F00:
        .4byte 0x47000000
    .global lbl_80519F04
    lbl_80519F04:
        .4byte 0x40C90FDB
    .global lbl_80519F08
    lbl_80519F08:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519F10
    lbl_80519F10:
        .4byte 0x42700000
    .global lbl_80519F14
    lbl_80519F14:
        .4byte 0x40400000
    .global lbl_80519F18
    lbl_80519F18:
        .4byte 0x43A2F983
    .global lbl_80519F1C
    lbl_80519F1C:
        .4byte 0xC3A2F983
    .global lbl_80519F20
    lbl_80519F20:
        .4byte 0x42960000
    .global lbl_80519F24
    lbl_80519F24:
        .4byte 0x3F6B851F
    .global lbl_80519F28
    lbl_80519F28:
        .4byte 0x41200000
    .global lbl_80519F2C
    lbl_80519F2C:
        .4byte 0x40000000
    .global lbl_80519F30
    lbl_80519F30:
        .4byte 0x40490FDB
    .global lbl_80519F34
    lbl_80519F34:
        .4byte 0x41F00000
    .global lbl_80519F38
    lbl_80519F38:
        .4byte 0x43480000
    .global lbl_80519F3C
    lbl_80519F3C:
        .4byte 0x6172632E
        .4byte 0x737A7300
    .global lbl_80519F44
    lbl_80519F44:
        .4byte 0x77656564
        .4byte 0x00000000
    .global lbl_80519F4C
    lbl_80519F4C:
        .4byte 0x57656564
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8020F280
 * Size:	000038
 */
ItemWeed::Weed::Weed(void)
{
	/*
	lis      r5, __vt__Q24Game6TFlock@ha
	lis      r4, __vt__Q34Game8ItemWeed4Weed@ha
	addi     r0, r5, __vt__Q24Game6TFlock@l
	li       r5, 0
	stw      r0, 0xc(r3)
	addi     r0, r4, __vt__Q34Game8ItemWeed4Weed@l
	lfs      f0, lbl_80519EF8@sda21(r2)
	stb      r5, 0x40(r3)
	stw      r0, 0xc(r3)
	stfs     f0, 0(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	stw      r5, 0x50(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void init__Q34Game8ItemWeed4WeedFPQ34Game8ItemWeed7WeedMgrR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	8020F2B8
 * Size:	000008
 */
u32 ItemWeed::Weed::damaged(float) { return 0x1; }

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void setPosition__Q34Game8ItemWeed4WeedFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	8020F2C0
 * Size:	0000AC
 */
void ItemWeed::Weed::makeMatrix(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	addi     r3, r31, 0x10
	lfs      f1, lbl_80519EF8@sda21(r2)
	addi     r4, r1, 0x14
	stw      r0, 0x30(r1)
	addi     r5, r1, 0x20
	lfd      f3, lbl_80519F08@sda21(r2)
	addi     r6, r1, 8
	lfd      f0, 0x30(r1)
	lfs      f2, lbl_80519F00@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519F04@sda21(r2)
	stfs     f1, 0x20(r1)
	fdivs    f2, f3, f2
	stfs     f1, 0x28(r1)
	fmuls    f0, f0, f2
	stfs     f0, 0x24(r1)
	lfs      f0, 0x44(r31)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x48(r31)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x4c(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0(r31)
	stfs     f0, 8(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ItemWeed::Weed::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
ItemWeed::WeedMgr::WeedMgr(int)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020F36C
 * Size:	000100
 */
void __dt__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020F450
	lis      r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_8020F40C
	lis      r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_8020F40C
	lis      r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_8020F40C
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0x3c(r30)
	beq      lbl_8020F40C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x3c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x3c(r30)
	bl       __dt__5CNodeFv

lbl_8020F40C:
	addic.   r0, r30, 0x20
	beq      lbl_8020F440
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0x20(r30)
	beq      lbl_8020F440
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_8020F440:
	extsh.   r0, r31
	ble      lbl_8020F450
	mr       r3, r30
	bl       __dl__FPv

lbl_8020F450:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020F46C
 * Size:	0000A0
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::~MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020F4F0
	lis      r4, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addi     r4, r4, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8020F4E0
	lis      r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addi     r4, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8020F4E0
	lis      r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addi     r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0(r30)
	beq      lbl_8020F4E0
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8020F4E0:
	extsh.   r0, r31
	ble      lbl_8020F4F0
	mr       r3, r30
	bl       __dl__FPv

lbl_8020F4F0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020F50C
 * Size:	000070
 */
void Container<Game::ItemWeed::Weed>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020F560
	lis      r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addi     r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0(r30)
	beq      lbl_8020F550
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8020F550:
	extsh.   r0, r31
	ble      lbl_8020F560
	mr       r3, r30
	bl       __dl__FPv

lbl_8020F560:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void ItemWeed::WeedMgr::init(Sys::Sphere&, Game::ItemWeed::cWeedType)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00022C
 */
void ItemWeed::WeedMgr::createWeeds(Game::ItemWeed::cWeedType)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020F57C
 * Size:	000008
 */
void getMaxObjects__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	lwz      r3, 0x60(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8020F584
 * Size:	000004
 */
void ItemWeed::WeedMgr::do_update_boundSphere(void) { }

/*
 * --INFO--
 * Address:	8020F588
 * Size:	000018
 */
void ItemWeed::WeedMgr::do_update(void)
{
	/*
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bnelr
	lbz      r0, 0x1d(r3)
	cmplwi   r0, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020F5A0
 * Size:	000084
 */
void ItemWeed::FSM::init(Game::ItemWeed::Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "create__Q24Game35StateMachine<Q34Game8ItemWeed4Item>Fi"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8020F608
	lis      r3, "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>"@ha
	lis      r6, "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>"@ha
	addi     r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>"@l
	lis      r5, __vt__Q34Game8ItemWeed5State@ha
	stw      r0, 0(r4)
	li       r7, 0
	lis      r3, __vt__Q34Game8ItemWeed9WaitState@ha
	addi     r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>"@l
	stw      r7, 4(r4)
	addi     r5, r5, __vt__Q34Game8ItemWeed5State@l
	addi     r0, r3, __vt__Q34Game8ItemWeed9WaitState@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8020F608:
	mr       r3, r31
	bl
"registerState__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ24Game31FSMState<Q34Game8ItemWeed4Item>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
ItemWeed::Item::Item(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020F624
 * Size:	00015C
 */
void ItemWeed::Item::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r29, r3
	mr       r31, r4
	mr       r4, r29
	lwz      r3, 0x1d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	bne      lbl_8020F698
	lis      r3, lbl_80481FD8@ha
	lis      r5, lbl_80481FE8@ha
	addi     r3, r3, lbl_80481FD8@l
	li       r4, 0xc2
	addi     r5, r5, lbl_80481FE8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020F698:
	lwz      r30, 4(r31)
	li       r3, 0x6c
	lwz      r0, 8(r31)
	stw      r0, 0x1ec(r29)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8020F750
	lis      r3, __vt__Q24Game12BaseFlockMgr@ha
	mr       r27, r31
	addi     r0, r3, __vt__Q24Game12BaseFlockMgr@l
	li       r5, 1
	stw      r0, 0(r31)
	addi     r28, r27, 0x20
	li       r4, -1
	li       r0, 0
	stb      r5, 0x1d(r31)
	mr       r3, r28
	stb      r5, 0x1c(r31)
	stw      r4, 4(r31)
	stw      r0, 8(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addi     r0, r3, __vt__16GenericContainer@l
	lis      r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0(r28)
	addi     r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	addi     r4, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
	li       r5, 0
	stw      r0, 0(r28)
	addi     r0, r4, 0x30
	addi     r3, r27, 0x3c
	stb      r5, 0x18(r28)
	stw      r4, 0(r27)
	stw      r0, 0x20(r27)
	bl       "__ct__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	lis      r3, __vt__Q34Game8ItemWeed7WeedMgr@ha
	mr       r4, r30
	addi     r5, r3, __vt__Q34Game8ItemWeed7WeedMgr@l
	addi     r3, r31, 0x3c
	stw      r5, 0(r31)
	addi     r0, r5, 0x30
	stw      r0, 0x20(r31)
	bl       "alloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
	li       r0, 5
	stw      r0, 4(r31)

lbl_8020F750:
	stw      r31, 0x1e8(r29)
	mr       r3, r29
	li       r4, 0
	lwz      r12, 0(r29)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020F780
 * Size:	000034
 */
void start__Q24Game35StateMachine<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020F7B4
 * Size:	000268
 */
void ItemWeed::Item::onSetPosition(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r3
	addi     r3, r28, 0x138
	addi     r4, r28, 0x19c
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lfs      f3, 0x1d0(r28)
	li       r29, 0
	lfs      f1, 0x1a0(r28)
	lfs      f2, 0x1a4(r28)
	lwz      r30, 0x1ec(r28)
	lwz      r31, 0x1e8(r28)
	lfs      f0, 0x19c(r28)
	stfs     f0, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f3, 0x18(r31)
	b        lbl_8020F9CC

lbl_8020F818:
	addi     r3, r31, 0x3c
	lwz      r12, 0x3c(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_8020F9C8
	cmpwi    r30, 1
	bne      lbl_8020F848
	li       r0, 0
	stb      r0, 0x40(r28)
	b        lbl_8020F88C

lbl_8020F848:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80519F00@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80519F14@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	addi     r0, r3, 1
	stb      r0, 0x40(r28)

lbl_8020F88C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_80519F00@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, 0x18(r31)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519F00@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80519F04@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519EF8@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8020F900
	fneg     f1, f3

lbl_8020F900:
	lfs      f2, lbl_80519F18@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519EF8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f31, f0
	bge      lbl_8020F95C
	lfs      f0, lbl_80519F1C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8020F974

lbl_8020F95C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8020F974:
	lfs      f0, 0x14(r31)
	fmuls    f3, f31, f1
	lfs      f2, 0xc(r31)
	mr       r3, r28
	lfs      f1, 0x10(r31)
	fadds    f4, f4, f0
	lfs      f0, lbl_80519EFC@sda21(r2)
	stw      r31, 0x50(r28)
	fadds    f3, f3, f2
	lfs      f2, lbl_80519EF8@sda21(r2)
	stfs     f0, 0x44(r28)
	fadds    f2, f2, f1
	stfs     f0, 0x48(r28)
	stfs     f0, 0x4c(r28)
	stfs     f3, 0(r28)
	stfs     f2, 4(r28)
	stfs     f4, 8(r28)
	lwz      r12, 0xc(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8020F9C8:
	addi     r29, r29, 1

lbl_8020F9CC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_8020F818
	lfs      f1, lbl_80519F10@sda21(r2)
	mr       r3, r31
	bl       resolveCollision__Q24Game12BaseFlockMgrFf
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020FA1C
 * Size:	00003C
 */
void ItemWeed::Item::ignoreAtari(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020FA58
 * Size:	000078
 */
void ItemWeed::Item::updateBoundSphere(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x114(r3)
	lfs      f0, 0x1d0(r3)
	lwz      r4, 0(r4)
	stfs     f0, 0x1c(r4)
	lfs      f0, 0x19c(r3)
	stfs     f0, 0x1c4(r3)
	lfs      f0, 0x1a0(r3)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1a4(r3)
	stfs     f0, 0x1cc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020FAC0
	lis      r3, lbl_80481FD8@ha
	lis      r5, lbl_80481FF4@ha
	addi     r3, r3, lbl_80481FD8@l
	li       r4, 0xe1
	addi     r5, r5, lbl_80481FF4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020FAC0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020FAD0
 * Size:	0002E0
 */
void ItemWeed::Item::interactFlockAttack(Game::InteractFlockAttack&)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stmw     r27, 0x5c(r1)
	mr       r29, r4
	mr       r28, r3
	li       r30, 0
	lwz      r27, 8(r4)
	lwz      r31, 0x1e8(r3)
	cmpwi    r27, 0
	blt      lbl_8020FB1C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r27, r3
	bge      lbl_8020FB1C
	li       r30, 1

lbl_8020FB1C:
	clrlwi.  r0, r30, 0x18
	bne      lbl_8020FB40
	lis      r3, lbl_80482000@ha
	lis      r5, lbl_80481FE8@ha
	addi     r3, r3, lbl_80482000@l
	li       r4, 0xab
	addi     r5, r5, lbl_80481FE8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020FB40:
	mr       r3, r31
	mr       r4, r27
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r3)
	lfs      f2, 8(r3)
	lfs      f0, 0(r3)
	stfs     f0, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x14(r29)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x18(r29)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x1c(r29)
	lwz      r3, 0x1e8(r28)
	lwz      r4, 8(r29)
	lfs      f1, 0xc(r29)
	bl       attackFlock__Q24Game12BaseFlockMgrFif
	mr       r31, r3
	cmpwi    r31, 1
	bne      lbl_8020FD70
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020FBD0
	lwz      r0, 0x1ec(r28)
	cmpwi    r0, 0
	bne      lbl_8020FBD0
	addi     r3, r1, 0x28
	bl       "createSimpleStoneAttack__3efxFR10Vector3<f>"

lbl_8020FBD0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_80519F00@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_80519F24@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8020FD70
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_8020FD70
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	li       r0, 0
	addi     r5, r4, __vt__Q24Game15CreatureInitArg@l
	lis      r4, __vt__Q34Game9ItemHoney7InitArg@ha
	stw      r5, 8(r1)
	addi     r5, r4, __vt__Q34Game9ItemHoney7InitArg@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stb      r0, 0xc(r1)
	stb      r0, 0xd(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f2, 0x2c(r1)
	lfs      f0, lbl_80519F28@sda21(r2)
	lfs      f3, 0x28(r1)
	lfs      f1, 0x30(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x20(r1)
	stfs     f3, 0x1c(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x20(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f2, lbl_80519F08@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f3, lbl_80519F00@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f1, lbl_80519F30@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_80519F2C@sda21(r2)
	lfs      f0, lbl_80519EF8@sda21(r2)
	fdivs    f3, f4, f3
	fmuls    f1, f1, f3
	fmuls    f5, f2, f1
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8020FCBC
	fneg     f1, f5

lbl_8020FCBC:
	lfs      f2, lbl_80519F18@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519EF8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_80519F34@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_8020FD1C
	lfs      f0, lbl_80519F1C@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8020FD34

lbl_8020FD1C:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8020FD34:
	fmuls    f1, f3, f0
	lfs      f0, lbl_80519F38@sda21(r2)
	stfs     f4, 0x18(r1)
	mr       r3, r30
	addi     r4, r1, 0x1c
	li       r5, 0
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x10
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8020FD70:
	neg      r0, r31
	or       r0, r0, r31
	srwi     r0, r0, 0x1f
	stb      r0, 0x10(r29)
	lwz      r3, 0x1e8(r28)
	lwz      r4, 8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lmw      r27, 0x5c(r1)
	li       r3, 1
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020FDB0
 * Size:	00002C
 */
void getFlock__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020FDDC
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getAt(int)
{
	/*
	mulli    r0, r4, 0x54
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8020FDEC
 * Size:	000084
 */
void ItemWeed::Item::doAI(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x1d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       updateCollTree__Q24Game8BaseItemFv
	lwz      r3, 0x1e8(r31)
	bl       update__Q24Game12BaseFlockMgrFv
	lwz      r3, 0x1e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_8020FE5C
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_8020FE5C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020FE70
 * Size:	000008
 */
void getNumObjects__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	lwz      r3, 0x5c(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8020FE78
 * Size:	00003C
 */
void ItemWeed::Item::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x1e8(r3)
	lwz      r6, mgr__Q24Game8ItemWeed@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r5, 0x1c(r6)
	lwz      r12, 0x24(r12)
	lwz      r6, 0x18(r6)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020FEB4
 * Size:	00013C
 */
ItemWeed::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	lis      r4, lbl_80481FC0@ha
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80481FC0@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	beq      lbl_8020FEEC
	addi     r0, r28, 0x88
	stw      r0, 4(r28)

lbl_8020FEEC:
	mr       r3, r28
	li       r4, 0
	bl       __ct__Q24Game12TNodeItemMgrFv
	lis      r3, __vt__Q34Game8ItemWeed3Mgr@ha
	addi     r5, r31, 0x4c
	addi     r3, r3, __vt__Q34Game8ItemWeed3Mgr@l
	addi     r0, r31, 0x58
	stw      r3, 0(r28)
	addi     r6, r3, 0x74
	mr       r3, r28
	li       r4, 4
	stw      r6, 0x30(r28)
	stw      r5, 8(r28)
	stw      r0, 0x28(r28)
	bl       setModelSize__Q24Game11BaseItemMgrFi
	mr       r3, r28
	addi     r4, r2, lbl_80519F3C@sda21
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r28
	addi     r4, r31, 0x70
	li       r5, 0
	lis      r6, 2
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	mr       r3, r28
	addi     r4, r31, 0x7c
	li       r5, 1
	lis      r6, 2
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	mr       r3, r28
	addi     r4, r31, 0x88
	li       r5, 2
	lis      r6, 2
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	mr       r3, r28
	addi     r4, r31, 0x94
	li       r5, 3
	lis      r6, 2
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	lis      r3, j3dDefaultMtx@ha
	li       r30, 0
	addi     r31, r3, j3dDefaultMtx@l

lbl_8020FF90:
	mr       r3, r28
	mr       r4, r30
	bl       getModelData__Q24Game11BaseItemMgrFi
	lis      r4, 4
	mr       r29, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r29
	mr       r5, r31
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	mr       r3, r29
	bl       makeSharedDL__12J3DModelDataFv
	addi     r30, r30, 1
	cmpwi    r30, 4
	blt      lbl_8020FF90
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020FFF0
 * Size:	000200
 */
void ItemWeed::Mgr::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r3, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	beq      lbl_80210010
	addi     r3, r3, 0x30

lbl_80210010:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x14(r1)
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8021004C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802101BC

lbl_8021004C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802100B8

lbl_80210064:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802101BC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802100B8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80210064
	b        lbl_802101BC

lbl_802100D8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8021012C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802101BC

lbl_8021012C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802101A0

lbl_8021014C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802101BC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802101A0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021014C

lbl_802101BC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802100D8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802101F0
 * Size:	000004
 */
void ItemWeed::Mgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void ItemWeed::Mgr::birth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802101F4
 * Size:	000008
 */
void ItemWeed::Mgr::getCaveName(int)
{
	/*
	addi     r3, r2, lbl_80519F44@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	802101FC
 * Size:	00004C
 */
void ItemWeed::Mgr::getCaveID(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r2, lbl_80519F44@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       strlen
	mr       r5, r3
	mr       r4, r31
	addi     r3, r2, lbl_80519F44@sda21
	bl       strncmp
	neg      r0, r3
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210248
 * Size:	000004
 */
void ItemWeed::WaitState::init(Game::ItemWeed::Item*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	8021024C
 * Size:	000004
 */
void ItemWeed::WaitState::exec(Game::ItemWeed::Item*) { }

/*
 * --INFO--
 * Address:	80210250
 * Size:	000004
 */
void ItemWeed::WaitState::cleanup(Game::ItemWeed::Item*) { }

/*
 * --INFO--
 * Address:	80210254
 * Size:	000054
 */
void ItemWeed::Mgr::generatorNewItemParm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0xc
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80210298
	lis      r4, __vt__Q24Game11GenItemParm@ha
	lis      r5, __vt__11GenWeedParm@ha
	addi     r0, r4, __vt__Q24Game11GenItemParm@l
	li       r4, 0x32
	stw      r0, 0(r3)
	addi     r5, r5, __vt__11GenWeedParm@l
	li       r0, 0
	stw      r5, 0(r3)
	stw      r4, 8(r3)
	sth      r0, 4(r3)

lbl_80210298:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802102A8
 * Size:	0000B0
 */
void ItemWeed::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_80481FC0@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r3, lbl_80481FC0@l
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_802102E8
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0x1cc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802102E8:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r0, 8(r30)
	mr       r3, r29
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0xa0
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lha      r4, 4(r30)
	mr       r3, r29
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0xb0
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210358
 * Size:	00008C
 */
void ItemWeed::Mgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_8021039C
	lis      r3, lbl_80481FD8@ha
	lis      r5, lbl_80481FE8@ha
	addi     r3, r3, lbl_80481FD8@l
	li       r4, 0x1da
	addi     r5, r5, lbl_80481FE8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021039C:
	mr       r3, r29
	bl       readShort__6StreamFv
	lis      r4, 0x30303031@ha
	extsh    r3, r3
	addi     r0, r4, 0x30303031@l
	stw      r3, 8(r30)
	cmplw    r31, r0
	blt      lbl_802103C8
	mr       r3, r29
	bl       readShort__6StreamFv
	sth      r3, 4(r30)

lbl_802103C8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802103E4
 * Size:	0001DC
 */
void generatorBirth__Q34Game8ItemWeed3MgrFR10Vector3f R10Vector3f PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr.       r30, r6
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1FD8
	  li        r4, 0x1E4
	  addi      r5, r5, 0x1FE8
	  crclr     6, 0x6
	  bl        -0x1E5DE8

	.loc_0x48:
	  li        r3, 0x1F0
	  bl        -0x1EC58C
	  mr.       r31, r3
	  beq-      .loc_0x168
	  li        r4, 0x412
	  bl        -0x44458
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0xDC
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1EC5C4
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0xF4
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x10C
	  addi      r0, r4, 0x1D0
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xBC:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0x344
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x1B0
	  subi      r4, r4, 0x40DC
	  subi      r0, r3, 0x11C
	  stw       r5, 0x178(r31)
	  li        r3, 0x8
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x1E0(r31)
	  bl        -0x1EC648
	  mr.       r0, r3
	  beq-      .loc_0x11C
	  bl        -0xDC49C
	  mr        r0, r3

	.loc_0x11C:
	  stw       r0, 0x114(r31)
	  addi      r0, r31, 0x138
	  lfs       f0, -0x4440(r2)
	  addi      r4, r31, 0x1E0
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  stfs      f0, 0x1D0(r31)
	  li        r7, 0
	  stw       r0, 0x1E4(r31)
	  lwz       r3, 0x114(r31)
	  bl        -0xDC478
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x1EC(r31)

	.loc_0x168:
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x42D2C
	  lis       r3, 0x804B
	  lha       r6, 0x4(r30)
	  lwz       r5, 0x8(r30)
	  subi      r0, r3, 0x5D0C
	  lis       r4, 0x804C
	  mr        r3, r31
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x454
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r6, 0x10(r1)
	  bl        -0xD55C0
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xD53F0
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802105C0
 * Size:	00000C
 */
void ItemWeed::InitArg::getName(void)
{
	/*
	lis      r3, lbl_80482080@ha
	addi     r3, r3, lbl_80482080@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	802105CC
 * Size:	000134
 */
ItemWeed::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802106E4
	lis      r3, __vt__Q34Game8ItemWeed3Mgr@ha
	addi     r3, r3, __vt__Q34Game8ItemWeed3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_802106D4
	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_802106A0
	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_80210650
	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80210650:
	addic.   r0, r30, 0x4c
	beq      lbl_802106A0
	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_802106A0
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_802106A0
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_802106A0:
	addic.   r0, r30, 0x30
	beq      lbl_802106D4
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x30(r30)
	beq      lbl_802106D4
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_802106D4:
	extsh.   r0, r31
	ble      lbl_802106E4
	mr       r3, r30
	bl       __dl__FPv

lbl_802106E4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210700
 * Size:	000148
 */
void ItemWeed::Mgr::doNew(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x1f0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80210830
	li       r4, 0x412
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80210784
	lis      r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@ha
	lis      r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@ha
	addi     r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@l
	lis      r4, __vt__Q34Game8ItemWeed3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@l
	addi     r0, r4, __vt__Q34Game8ItemWeed3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_80210784:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q34Game8ItemWeed4Item@ha
	lis      r4, __vt__Q28SysShape9MtxObject@ha
	addi     r5, r3, __vt__Q34Game8ItemWeed4Item@l
	lis      r3, __vt__Q44Game8ItemWeed4Item10DummyShape@ha
	stw      r5, 0(r31)
	addi     r5, r5, 0x1b0
	addi     r4, r4, __vt__Q28SysShape9MtxObject@l
	addi     r0, r3, __vt__Q44Game8ItemWeed4Item10DummyShape@l
	stw      r5, 0x178(r31)
	li       r3, 8
	stw      r4, 0x1e0(r31)
	stw      r0, 0x1e0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802107E4
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_802107E4:
	stw      r0, 0x114(r31)
	addi     r0, r31, 0x138
	lfs      f0, lbl_80519F20@sda21(r2)
	addi     r4, r31, 0x1e0
	addi     r6, r31, 0x1c4
	li       r5, 0
	stfs     f0, 0x1d0(r31)
	li       r7, 0
	stw      r0, 0x1e4(r31)
	lwz      r3, 0x114(r31)
	bl
createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x1ec(r31)

lbl_80210830:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210848
 * Size:	00000C
 */
void ItemWeed::Mgr::generatorGetID(void)
{
	/*
	lis      r3, 0x77656564@ha
	addi     r3, r3, 0x77656564@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210854
 * Size:	00000C
 */
void ItemWeed::Mgr::generatorLocalVersion(void)
{
	/*
	lis      r3, 0x30303031@ha
	addi     r3, r3, 0x30303031@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210860
 * Size:	000008
 */
void ItemWeed::Item::getCreatureName(void)
{
	/*
	addi     r3, r2, lbl_80519F4C@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210868
 * Size:	000008
 */
void ItemWeed::Item::getFlockMgr(void)
{
	/*
	lwz      r3, 0x1e8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210870
 * Size:	000004
 */
void ItemWeed::Item::makeTrMatrix(void) { }

/*
 * --INFO--
 * Address:	80210874
 * Size:	000008
 */
void ItemWeed::Item::DummyShape::getMatrix(int)
{
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021087C
 * Size:	000034
 */
void doAI__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802108B0
 * Size:	000118
 */
ItemWeed::WeedMgr::~WeedMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802109AC
	lis      r3, __vt__Q34Game8ItemWeed7WeedMgr@ha
	addi     r3, r3, __vt__Q34Game8ItemWeed7WeedMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_8021099C
	lis      r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_80210968
	lis      r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_80210968
	lis      r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_80210968
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0x3c(r30)
	beq      lbl_80210968
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x3c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x3c(r30)
	bl       __dt__5CNodeFv

lbl_80210968:
	addic.   r0, r30, 0x20
	beq      lbl_8021099C
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0x20(r30)
	beq      lbl_8021099C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_8021099C:
	extsh.   r0, r31
	ble      lbl_802109AC
	mr       r3, r30
	bl       __dl__FPv

lbl_802109AC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802109C8
 * Size:	000088
 */
void ObjectMgr<Game::ItemWeed::Weed>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80210A34
	lis      r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addi     r4, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80210A24
	lis      r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addi     r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0(r30)
	beq      lbl_80210A24
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80210A24:
	extsh.   r0, r31
	ble      lbl_80210A34
	mr       r3, r30
	bl       __dl__FPv

lbl_80210A34:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80210A50
 * Size:	000010
 */
void ItemWeed::Weed::isWeed(void)
{
	/*
	lbz      r0, 0x40(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80210A60
 * Size:	00002C
 */
void getNext__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210A8C
 * Size:	00002C
 */
void getStart__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210AB8
 * Size:	000024
 */
void killFlock__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPQ24Game6TFlock(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x3c
	stw      r0, 0x14(r1)
	bl "kill__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPQ34Game8ItemWeed4Weed" lwz
	r0, 0x14(r1) mtlr     r0 addi     r1, r1, 0x10 blr
	*/
}

/*
 * --INFO--
 * Address:	80210ADC
 * Size:	000004
 */
void onDamage__Q24Game32ItemState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Itemf(void) { }

/*
 * --INFO--
 * Address:	80210AE0
 * Size:	000004
 */
void onKeyEvent__Q24Game32ItemState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent(void) { }

/*
 * --INFO--
 * Address:	80210AE4
 * Size:	000004
 */
void onBounce__Q24Game32ItemState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle(void) { }

/*
 * --INFO--
 * Address:	80210AE8
 * Size:	000004
 */
void onPlatCollision__Q24Game32ItemState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent(void) { }

/*
 * --INFO--
 * Address:	80210AEC
 * Size:	000004
 */
void onCollision__Q24Game32ItemState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent(void) { }

/*
 * --INFO--
 * Address:	80210AF0
 * Size:	000004
 */
void init__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemPQ24Game8StateArg(void) { }

/*
 * --INFO--
 * Address:	80210AF4
 * Size:	000004
 */
void exec__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void) { }

/*
 * --INFO--
 * Address:	80210AF8
 * Size:	000004
 */
void cleanup__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void) { }

/*
 * --INFO--
 * Address:	80210AFC
 * Size:	000004
 */
void resume__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void) { }

/*
 * --INFO--
 * Address:	80210B00
 * Size:	000004
 */
void restart__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void) { }

/*
 * --INFO--
 * Address:	80210B04
 * Size:	000030
 */
void transit__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210B34
 * Size:	000004
 */
void init__Q24Game35StateMachine<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void) { }

/*
 * --INFO--
 * Address:	80210B38
 * Size:	000064
 */
void create__Q24Game35StateMachine<Game::ItemWeed::Item> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xc(r3)
	stw      r0, 8(r3)
	lwz      r0, 0xc(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x10(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210B9C
 * Size:	000060
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	cmpwi    r3, -1
	beq      lbl_80210BE4
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x54
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_80210BE8

lbl_80210BE4:
	li       r3, 0

lbl_80210BE8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210BFC
 * Size:	000054
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::kill(Game::ItemWeed::Weed*)
{
	/*
	lwz      r0, 0x24(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_80210C14:
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	cmplw    r0, r4
	bne      lbl_80210C40
	lwz      r4, 0x2c(r3)
	li       r0, 1
	stbx     r0, r4, r6
	lwz      r4, 0x20(r3)
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	blr

lbl_80210C40:
	addi     r5, r5, 0x54
	addi     r6, r6, 1
	bdnz     lbl_80210C14
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210C50
 * Size:	000040
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_80210C88

lbl_80210C68:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_80210C80
	mr       r3, r6
	blr

lbl_80210C80:
	addi     r6, r6, 1
	bdnz     lbl_80210C68

lbl_80210C88:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210C90
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210CC0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210CC8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210CD0
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doAnimation()
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80210D08
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80210D08

lbl_80210D00:
	addi     r5, r5, 8
	bdnz     lbl_80210D00

lbl_80210D08:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_80210D18:
	bdnz     lbl_80210D18
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210D20
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doEntry()
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80210D58
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80210D58

lbl_80210D50:
	addi     r5, r5, 8
	bdnz     lbl_80210D50

lbl_80210D58:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_80210D68:
	bdnz     lbl_80210D68
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210D70
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doSetView(int)
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80210DA8
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80210DA8

lbl_80210DA0:
	addi     r5, r5, 8
	bdnz     lbl_80210DA0

lbl_80210DA8:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_80210DB8:
	bdnz     lbl_80210DB8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210DC0
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doViewCalc()
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80210DF8
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80210DF8

lbl_80210DF0:
	addi     r5, r5, 8
	bdnz     lbl_80210DF0

lbl_80210DF8:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_80210E08:
	bdnz     lbl_80210E08
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210E10
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doSimulation(float)
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80210E48
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80210E48

lbl_80210E40:
	addi     r5, r5, 8
	bdnz     lbl_80210E40

lbl_80210E48:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_80210E58:
	bdnz     lbl_80210E58
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210E60
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doDirectDraw(Graphics&)
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80210E98
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80210E98

lbl_80210E90:
	addi     r5, r5, 8
	bdnz     lbl_80210E90

lbl_80210E98:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_80210EA8:
	bdnz     lbl_80210EA8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210EB0
 * Size:	000018
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210EC8
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_80210EE8

lbl_80210EDC:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_80210EE8:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_80210EDC
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210EF8
 * Size:	000004
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::onAlloc() { }

/*
 * --INFO--
 * Address:	80210EFC
 * Size:	00003C
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80210F30

lbl_80210F10:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_80210F28
	mr       r3, r5
	blr

lbl_80210F28:
	addi     r5, r5, 1
	bdnz     lbl_80210F10

lbl_80210F30:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210F38
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::get(void*)
{
	/*
	mulli    r0, r4, 0x54
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210F48
 * Size:	00002C
 */
void Container<Game::ItemWeed::Weed>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80210F74
 * Size:	000008
 */
u32 Container<Game::ItemWeed::Weed>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80210F7C
 * Size:	000008
 */
u32 Container<Game::ItemWeed::Weed>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80210F84
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80210FCC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211128

lbl_80210FCC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211038

lbl_80210FE4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80211128
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80211038:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80210FE4
	b        lbl_80211128

lbl_80211058:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80211098
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211128

lbl_80211098:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8021110C

lbl_802110B8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80211128
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8021110C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802110B8

lbl_80211128:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80211058
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211158
 * Size:	00004C
 */
void Iterator<Game::ItemWeed::Weed>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802111A4
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_802111EC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211348

lbl_802111EC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211258

lbl_80211204:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80211348
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80211258:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80211204
	b        lbl_80211348

lbl_80211278:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_802112B8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211348

lbl_802112B8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8021132C

lbl_802112D8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80211348
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8021132C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802112D8

lbl_80211348:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80211278
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211378
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_802113C0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8021151C

lbl_802113C0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8021142C

lbl_802113D8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021151C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8021142C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802113D8
	b        lbl_8021151C

lbl_8021144C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8021148C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8021151C

lbl_8021148C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211500

lbl_802114AC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021151C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80211500:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802114AC

lbl_8021151C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8021144C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021154C
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80211594
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802116F0

lbl_80211594:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211600

lbl_802115AC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802116F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80211600:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802115AC
	b        lbl_802116F0

lbl_80211620:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80211660
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802116F0

lbl_80211660:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802116D4

lbl_80211680:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802116F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802116D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80211680

lbl_802116F0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80211620
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211720
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80211768
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802118C4

lbl_80211768:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802117D4

lbl_80211780:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802118C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802117D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80211780
	b        lbl_802118C4

lbl_802117F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80211834
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802118C4

lbl_80211834:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802118A8

lbl_80211854:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802118C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802118A8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80211854

lbl_802118C4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802117F4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802118F4
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8021193C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211A98

lbl_8021193C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802119A8

lbl_80211954:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80211A98
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802119A8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80211954
	b        lbl_80211A98

lbl_802119C8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80211A08
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211A98

lbl_80211A08:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80211A7C

lbl_80211A28:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80211A98
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80211A7C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80211A28

lbl_80211A98:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802119C8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211AC8
 * Size:	000188
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::alloc(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r31
	mulli    r3, r29, 0x54
	stw      r28, 0x10(r1)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game8ItemWeed4WeedFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q34Game8ItemWeed4WeedFv@l
	li       r5, 0
	li       r6, 0x54
	bl       __construct_new_array
	stw      r3, 0x28(r30)
	li       r0, 0
	mr       r3, r29
	stw      r31, 0x24(r30)
	stw      r0, 0x20(r30)
	bl       __nwa__FUl
	cmpwi    r31, 0
	stw      r3, 0x2c(r30)
	li       r11, 0
	ble      lbl_80211BE8
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_80211BC4
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80211BC4

lbl_80211B5C:
	lwz      r3, 0x2c(r30)
	li       r10, 1
	addi     r8, r11, 1
	addi     r7, r11, 2
	stbx     r10, r3, r11
	addi     r6, r11, 3
	addi     r5, r11, 4
	addi     r4, r11, 5
	lwz      r9, 0x2c(r30)
	addi     r3, r11, 6
	addi     r0, r11, 7
	addi     r11, r11, 8
	stbx     r10, r9, r8
	lwz      r8, 0x2c(r30)
	stbx     r10, r8, r7
	lwz      r7, 0x2c(r30)
	stbx     r10, r7, r6
	lwz      r6, 0x2c(r30)
	stbx     r10, r6, r5
	lwz      r5, 0x2c(r30)
	stbx     r10, r5, r4
	lwz      r4, 0x2c(r30)
	stbx     r10, r4, r3
	lwz      r3, 0x2c(r30)
	stbx     r10, r3, r0
	bdnz     lbl_80211B5C

lbl_80211BC4:
	subf     r0, r11, r31
	li       r4, 1
	mtctr    r0
	cmpw     r11, r31
	bge      lbl_80211BE8

lbl_80211BD8:
	lwz      r3, 0x2c(r30)
	stbx     r4, r3, r11
	addi     r11, r11, 1
	bdnz     lbl_80211BD8

lbl_80211BE8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	li       r29, 0
	b        lbl_80211C28

lbl_80211C08:
	lwz      r0, 0x28(r30)
	add      r3, r0, r29
	lwz      r12, 0xc(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 0x54
	addi     r28, r28, 1

lbl_80211C28:
	cmpw     r28, r31
	blt      lbl_80211C08
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211C50
 * Size:	00009C
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	lis      r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	lis      r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
	addi     r5, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211CEC
 * Size:	00009C
 */
void transit__Q24Game35StateMachine<Game::ItemWeed::Item> FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x1DC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x1DC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211D88
 * Size:	000084
 */
void registerState__Q24Game35StateMachine<Game::ItemWeed::Item> FPQ24Game31FSMState<Game::ItemWeed::Item>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211E0C
 * Size:	000038
 */
void exec__Q24Game35StateMachine<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211E44
 * Size:	000044
 */
void onKeyEvent__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State> FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211E88
 * Size:	000044
 */
void platCallback__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State> FRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211ECC
 * Size:	000044
 */
void collisionCallback__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State> FRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211F10
 * Size:	000044
 */
void bounceCallback__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State> FPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211F54
 * Size:	000014
 */
void isFlagAlive__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fi(void)
{
	/*
	lwz      r3, 0x68(r3)
	lbzx     r0, r3, r4
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211F68
 * Size:	00002C
 */
void getEnd__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211F94
 * Size:	00002C
 */
void get__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211FC0
 * Size:	000038
 */
void Iterator<Game::ItemWeed::Weed>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80211FF8
 * Size:	0000E4
 */
void Iterator<Game::ItemWeed::Weed>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80212038
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802120C8

lbl_80212038:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802120AC

lbl_80212058:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802120C8
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_802120AC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80212058

lbl_802120C8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802120DC
 * Size:	0000DC
 */
void Iterator<Game::ItemWeed::Weed>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80212118
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802121A4

lbl_80212118:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80212188

lbl_80212134:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802121A4
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80212188:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80212134

lbl_802121A4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802121B8
 * Size:	000028
 */
void __sinit_itemWeed_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804BFBA0@ha
	stw      r0, lbl_80515BD8@sda21(r13)
	stfsu    f0, lbl_804BFBA0@l(r3)
	stfs     f0, lbl_80515BDC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802121E0
 * Size:	000008
 */
void @32 @__dt__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	addi     r3, r3, -32
	b        "__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	802121E8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	802121F0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	802121F8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff"
	*/
}

/*
 * --INFO--
 * Address:	80212200
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212208
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
	*/
}

/*
 * --INFO--
 * Address:	80212210
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212218
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212220
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	80212228
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff"
	*/
}

/*
 * --INFO--
 * Address:	80212230
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212238
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi"
	*/
}

/*
 * --INFO--
 * Address:	80212240
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212248
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212250
 * Size:	000008
 */
void @32 @getEnd__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	addi     r3, r3, -32
	b        "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212258
 * Size:	000008
 */
void @32 @getStart__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	addi     r3, r3, -32
	b        "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80212260
 * Size:	000008
 */
void @32 @getNext__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	addi     r3, r3, -32
	b        "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
	*/
}

/*
 * --INFO--
 * Address:	80212268
 * Size:	000008
 */
void @32 @get__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	addi     r3, r3, -32
	b        "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
	*/
}

/*
 * --INFO--
 * Address:	80212270
 * Size:	000008
 */
@32 @Game::ItemWeed::WeedMgr::~WeedMgr(void)
{
	/*
	addi     r3, r3, -32
	b        __dt__Q34Game8ItemWeed7WeedMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80212278
 * Size:	000008
 */
void @376 @onKeyEvent__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State> FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x438
	*/
}

/*
 * --INFO--
 * Address:	80212280
 * Size:	000008
 */
@48 @Game::ItemWeed::Mgr::~Mgr(void)
{
	/*
	addi     r3, r3, -48
	b        __dt__Q34Game8ItemWeed3MgrFv
	*/
}
