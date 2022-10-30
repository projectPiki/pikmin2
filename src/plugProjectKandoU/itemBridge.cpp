#include "types.h"

#include "Game/Entities/ItemBridge.h"
#include "Game/StateMachine.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481228
    lbl_80481228:
        .4byte 0x6974656D
        .4byte 0x42726964
        .4byte 0x67650000
    .global lbl_80481234
    lbl_80481234:
        .4byte 0x6974656D
        .4byte 0x42726964
        .4byte 0x67652E63
        .4byte 0x70700000
    .global lbl_80481244
    lbl_80481244:
        .4byte 0x63656C6C
        .4byte 0x4C617965
        .4byte 0x72696E64
        .4byte 0x6578206F
        .4byte 0x76657266
        .4byte 0x6C6F770A
        .4byte 0x00000000
    .global lbl_80481260
    lbl_80481260:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x09238BB4
        .4byte 0x835E8343
        .4byte 0x83760D0A
        .4byte 0x00000000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6F
        .4byte 0x626A6563
        .4byte 0x74732F62
        .4byte 0x72696467
        .4byte 0x65000000
        .4byte 0x2F757365
        .4byte 0x722F4162
        .4byte 0x652F6974
        .4byte 0x656D2F62
        .4byte 0x72696467
        .4byte 0x65506172
        .4byte 0x6D732E74
        .4byte 0x78740000
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F697465
        .4byte 0x6D2F6272
        .4byte 0x69646765
        .4byte 0x5061726D
        .4byte 0x732E7478
        .4byte 0x74000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x3A3A5072
        .4byte 0x6F706572
        .4byte 0x74790000
        .4byte 0x66726963
        .4byte 0x74696F6E
        .4byte 0x286E6F74
        .4byte 0x20757365
        .4byte 0x64290000
        .4byte 0x77616C6C
        .4byte 0x5265666C
        .4byte 0x65637469
        .4byte 0x6F6E0000
        .4byte 0x66616365
        .4byte 0x44697241
        .4byte 0x646A7573
        .4byte 0x74000000
        .4byte 0x626F756E
        .4byte 0x63654661
        .4byte 0x63746F72
        .4byte 0x00000000
        .4byte 0x42726964
        .4byte 0x67653A3A
        .4byte 0x5061726D
        .4byte 0x73000000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F62
        .4byte 0x72696467
        .4byte 0x652F735F
        .4byte 0x62726964
        .4byte 0x67650000
        .4byte 0x735F6272
        .4byte 0x69646765
        .4byte 0x2E626D64
        .4byte 0x00000000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F62
        .4byte 0x72696467
        .4byte 0x652F736C
        .4byte 0x6F70655F
        .4byte 0x75000000
        .4byte 0x736C6F70
        .4byte 0x655F752E
        .4byte 0x626D6400
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F62
        .4byte 0x72696467
        .4byte 0x652F6C5F
        .4byte 0x62726964
        .4byte 0x67650000
        .4byte 0x6C5F6272
        .4byte 0x69646765
        .4byte 0x2E626D64
        .4byte 0x00000000
        .4byte 0x74657874
        .4byte 0x732E737A
        .4byte 0x73000000
        .4byte 0x706C6174
        .4byte 0x666F726D
        .4byte 0x2E62696E
        .4byte 0x00000000
        .4byte 0x726F6F6D
        .4byte 0x25303264
        .4byte 0x00000000
        .4byte 0x68616D65
        .4byte 0x2D646F6B
        .4byte 0x6B757269
        .4byte 0x20767320
        .4byte 0x6E616B61
        .4byte 0x6D6F746F
        .4byte 0x2D6B6F75
        .4byte 0x6A690A00
        .4byte 0x68616D65
        .4byte 0x2D646F6B
        .4byte 0x6B757269
        .4byte 0x0A000000
    .global lbl_80481418
    lbl_80481418:
        .4byte 0x42726964
        .4byte 0x6765496E
        .4byte 0x69744172
        .4byte 0x67000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global bridgeFirstPos
    bridgeFirstPos:
        .4byte 0x422A0000
        .4byte 0x41480000
        .4byte 0x422A0000
        .4byte 0x41480000
    .global bridgeGrad
    bridgeGrad:
        .4byte 0x00000000
        .4byte 0x41000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game10ItemBridge13BridgeInitArg
    __vt__Q34Game10ItemBridge13BridgeInitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q34Game10ItemBridge13BridgeInitArgFv
    .global __vt__Q34Game10ItemBridge3Mgr
    __vt__Q34Game10ItemBridge3Mgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12TNodeItemMgrFv
        .4byte doEntry__Q24Game12TNodeItemMgrFv
        .4byte doSetView__Q24Game12TNodeItemMgrFi
        .4byte doViewCalc__Q24Game12TNodeItemMgrFv
        .4byte doSimulation__Q24Game12TNodeItemMgrFf
        .4byte doDirectDraw__Q24Game12TNodeItemMgrFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__Q24Game11BaseItemMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte initDependency__Q24Game12TNodeItemMgrFv
        .4byte killAll__Q24Game12TNodeItemMgrFv
        .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
        .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
        .4byte onLoadResources__Q34Game10ItemBridge3MgrFv
        .4byte loadEverytime__Q24Game11BaseItemMgrFv
        .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte generatorGetID__Q34Game10ItemBridge3MgrFv
        .4byte
   "generatorBirth__Q34Game10ItemBridge3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
        .4byte
   generatorWrite__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q34Game10ItemBridge3MgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q34Game10ItemBridge3MgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q34Game10ItemBridge3MgrFv" .4byte getChildCount__5CNodeFv .4byte
   "getObject__27Container<Q24Game8BaseItem>FPv" .4byte
   "@48@getNext__Q24Game12TNodeItemMgrFPv" .4byte
   "@48@getStart__Q24Game12TNodeItemMgrFv" .4byte
   "@48@getEnd__Q24Game12TNodeItemMgrFv" .4byte
   "@48@get__Q24Game12TNodeItemMgrFPv" .4byte
   "getAt__27Container<Q24Game8BaseItem>Fi" .4byte
   "getTo__27Container<Q24Game8BaseItem>Fv" .4byte
   doNew__Q34Game10ItemBridge3MgrFv .4byte
   kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem .4byte
   get__Q24Game12TNodeItemMgrFPv .4byte getNext__Q24Game12TNodeItemMgrFPv .4byte
   getStart__Q24Game12TNodeItemMgrFv .4byte getEnd__Q24Game12TNodeItemMgrFv
        .4byte __dt__Q34Game10ItemBridge3MgrFv
        .4byte birth__Q34Game10ItemBridge3MgrFv
    .global __vt__Q34Game10ItemBridge11BridgeParms
    __vt__Q34Game10ItemBridge11BridgeParms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game10ItemBridge11BridgeParmsFR6Stream
    .global __vt__13GenBridgeParm
    __vt__13GenBridgeParm:
        .4byte 0
        .4byte 0
        .4byte getShapeID__Q24Game11GenItemParmFv
    .global __vt__Q23efx10TBridgeSet
    __vt__Q23efx10TBridgeSet:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game10ItemBridge4Item
    __vt__Q34Game10ItemBridge4Item:
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
        .4byte constructor__Q34Game10ItemBridge4ItemFv
        .4byte onInit__Q34Game10ItemBridge4ItemFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game8BaseItemFv
        .4byte doEntry__Q24Game8BaseItemFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8BaseItemFf
        .4byte doDirectDraw__Q34Game10ItemBridge4ItemFR8Graphics
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
        .4byte doSave__Q34Game10ItemBridge4ItemFR6Stream
        .4byte doLoad__Q34Game10ItemBridge4ItemFR6Stream
        .4byte
   "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"
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
        .4byte getLODCylinder__Q34Game10ItemBridge4ItemFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q34Game10ItemBridge4ItemFv
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
        .4byte getCreatureName__Q34Game10ItemBridge4ItemFv
        .4byte getCreatureID__Q24Game8BaseItemFv
        .4byte 0
        .4byte 0
        .4byte
   "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q34Game10ItemBridge4ItemFv
        .4byte doAI__Q34Game10ItemBridge4ItemFv
        .4byte move__Q24Game8BaseItemFf
        .4byte changeMaterial__Q34Game10ItemBridge4ItemFv
        .4byte do_updateLOD__Q34Game10ItemBridge4ItemFv
        .4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
        .4byte getMapCollisionRadius__Q24Game8BaseItemFv
        .4byte interactAttack__Q34Game10ItemBridge4ItemFRQ24Game14InteractAttack
        .4byte
   interactBreakBridge__Q34Game10ItemBridge4ItemFRQ24Game19InteractBreakBridge
        .4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
        .4byte
   interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack .4byte
   interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb .4byte
   interactFue__Q24Game8BaseItemFRQ24Game11InteractFue .4byte
   interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero .4byte
   interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero .4byte
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q34Game10ItemBridge4ItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q34Game10ItemBridge4ItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q34Game10ItemBridge4ItemFv .4byte
   update__Q34Game10ItemBridge4ItemFv .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q34Game10ItemBridge4ItemFv
        .4byte
   "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
    .global
   "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"
    "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>":
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
        .4byte 0
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
   "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"
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
   "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte
   "doAI__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>Fv"
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
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte 0 .4byte 0
        .4byte do_doAnimation__Q24Game8BaseItemFv
        .4byte updateBoundSphere__Q24Game8BaseItemFv
        .4byte update__Q24Game8BaseItemFv
        .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q24Game8BaseItemFv
        .4byte
   "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
    .global "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"
    "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
    .global "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"
    "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
    .global
   "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"
    "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>":
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
   "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"
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
   "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte
   "doAI__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>Fv"
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
   "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
    .global __vt__Q34Game10ItemBridge11NormalState
    __vt__Q34Game10ItemBridge11NormalState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4ItemPQ24Game8StateArg
        .4byte exec__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item
        .4byte
   cleanup__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
        .4byte
   "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game10ItemBridge5State
    __vt__Q34Game10ItemBridge5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
        .4byte
   "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game35ItemState<Q34Game10ItemBridge4Item>"
    "__vt__Q24Game35ItemState<Q34Game10ItemBridge4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
        .4byte
   "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game34FSMState<Q34Game10ItemBridge4Item>"
    "__vt__Q24Game34FSMState<Q34Game10ItemBridge4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
    .global __vt__Q34Game10ItemBridge3FSM
    __vt__Q34Game10ItemBridge3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game10ItemBridge3FSMFPQ34Game10ItemBridge4Item
        .4byte
   "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
        .4byte
   "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"

    .section .sbss # 0x80514D80 - 0x80516360
    .global mgr__Q24Game10ItemBridge
    mgr__Q24Game10ItemBridge:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519B10
    lbl_80519B10:
        .4byte 0x00000000
    .global lbl_80519B14
    lbl_80519B14:
        .4byte 0x432A0000
    .global lbl_80519B18
    lbl_80519B18:
        .4byte 0x42200000
    .global lbl_80519B1C
    lbl_80519B1C:
        .4byte 0x42A00000
    .global lbl_80519B20
    lbl_80519B20:
        .4byte 0x43B40000
    .global lbl_80519B24
    lbl_80519B24:
        .float 1.0
    .global lbl_80519B28
    lbl_80519B28:
        .4byte 0x42C80000
    .global lbl_80519B2C
    lbl_80519B2C:
        .4byte 0x42B40000
    .global lbl_80519B30
    lbl_80519B30:
        .4byte 0x4479C000
    .global lbl_80519B34
    lbl_80519B34:
        .4byte 0x40A00000
    .global lbl_80519B38
    lbl_80519B38:
        .4byte 0x41200000
        .4byte 0x00000000
    .global lbl_80519B40
    lbl_80519B40:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519B48
    lbl_80519B48:
        .4byte 0x41A00000
    .global lbl_80519B4C
    lbl_80519B4C:
        .4byte 0xC1A00000
    .global lbl_80519B50
    lbl_80519B50:
        .4byte 0x43160000
    .global lbl_80519B54
    lbl_80519B54:
        .4byte 0x43A2F983
    .global lbl_80519B58
    lbl_80519B58:
        .4byte 0xC3A2F983
    .global lbl_80519B5C
    lbl_80519B5C:
        .4byte 0x42960000
    .global lbl_80519B60
    lbl_80519B60:
        .4byte 0xC2C80000
    .global lbl_80519B64
    lbl_80519B64:
        .4byte 0x42D20000
    .global lbl_80519B68
    lbl_80519B68:
        .4byte 0x43960000
    .global lbl_80519B6C
    lbl_80519B6C:
        .4byte 0x42700000
    .global lbl_80519B70
    lbl_80519B70:
        .4byte 0xC1200000
    .global lbl_80519B74
    lbl_80519B74:
        .4byte 0xBF800000
    .global lbl_80519B78
    lbl_80519B78:
        .4byte 0x47FA0000
    .global lbl_80519B7C
    lbl_80519B7C:
        .4byte 0x42726964
        .4byte 0x67650000
    .global lbl_80519B84
    lbl_80519B84:
        .float 0.5
    .global lbl_80519B88
    lbl_80519B88:
        .float 0.25
    .global lbl_80519B8C
    lbl_80519B8C:
        .4byte 0x61636365
        .4byte 0x6C000000
    .global lbl_80519B94
    lbl_80519B94:
        .float 0.1
    .global lbl_80519B98
    lbl_80519B98:
        .4byte 0x3C23D70A
    .global lbl_80519B9C
    lbl_80519B9C:
        .4byte 0x40000000
    .global lbl_80519BA0
    lbl_80519BA0:
        .float 0.3
    .global lbl_80519BA4
    lbl_80519BA4:
        .4byte 0x83898343
        .4byte 0x83740000
    .global lbl_80519BAC
    lbl_80519BAC:
        .4byte 0x471C4000
    .global lbl_80519BB0
    lbl_80519BB0:
        .4byte 0x6172632E
        .4byte 0x737A7300
    .global lbl_80519BB8
    lbl_80519BB8:
        .4byte 0x66696E61
        .4byte 0x6C000000
*/

namespace Game {
namespace ItemBridge {
/*
 * --INFO--
 * Address:	801EDF74
 * Size:	000084
 */
void FSM::init(Item* item)
{
	create(ITEM_BRIDGE_STATE_COUNT);
	registerState(new NormalState(ITEM_BRIDGE_STATE_NORMAL));
}

/*
 * --INFO--
 * Address:	801EDFF8
 * Size:	000004
 */
void NormalState::init(Item*, StateArg*) { }

/*
 * --INFO--
 * Address:	801EDFFC
 * Size:	000004
 */
void NormalState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801EE000
 * Size:	000004
 */
void NormalState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
// Item::Item()
// {
// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	801EE004
 * Size:	000180
 */
void Item::onInit(Game::CreatureInitArg* settings)
{
	m_bridgeType = 0;
	if (settings) {
		m_bridgeType = ((BridgeInitArg*)settings)->m_bridgeType;
	}

	m_model = new SysShape::Model(mgr->getModelData(m_bridgeType), 0x20000, 2);
	m_model->m_j3dModel->calc();
	m_model->m_j3dModel->calcMaterial();
	m_model->m_j3dModel->makeDL();
	m_model->m_j3dModel->lock();
	m_stateMachine->start(this, ITEM_BRIDGE_STATE_NORMAL, nullptr);
	setAlive(true);

	_1F4 = 0.0f;

	BridgeInfo* info    = mgr->getBridgeInfo(m_bridgeType);
	f32 stageLength     = mgr->m_parms->m_bridgeParms.m_p000.m_value;
	m_stageCount        = info->m_stageCount;
	m_stageLengthsArray = new float[m_stageCount];
	for (int i = 0; i < m_stageCount; i++) {
		m_stageLengthsArray[i] = stageLength;
	}

	_200 = nullptr;
	_1FC = nullptr;
	_1F8 = 0;
}

/*
 * --INFO--
 * Address:	801EE184
 * Size:	000034
 */
void StateMachine<Game::ItemBridge::Item>::start(Game::ItemBridge::Item* item, int stateID, StateArg* arg)
{
	item->m_currentState = nullptr;
	transit(item, stateID, arg);
}

/*
 * --INFO--
 * Address:	801EE1B8
 * Size:	000110
 */
void Item::update()
{
	// TODO: matches but the virtual table is all fucked up lol,
	// currently it matches with offsets but logically this makes
	// no sense whatsoever

	if (_1F0 > 0) {
		_1EC += _1F0;
	} else if (_1EC > 0) {
		_1EC -= 5;
		if (_1EC < 0) {
			_1EC = 0;
		}
	}

	_1F0 = 0;

	makeTrMatrix();
	do_doAnimation();
	m_soundObj->exec();
	updateCell();

	if (m_cellLayerIndex < 0 || m_cellLayerIndex > 10) {
		getTypeName();
		JUT_PANICLINE(245, "cellLayerindex overflow\n");
	}

	changeMaterial();
}
} // namespace ItemBridge
} // namespace Game

// /*
//  * --INFO--
//  * Address:	801EE2C8
//  * Size:	0001B4
//  */
// void ItemBridge::Item::getLODCylinder(Sys::Cylinder&)
// {
// 	/*
// 	stwu     r1, -0xa0(r1)
// 	mflr     r0
// 	stw      r0, 0xa4(r1)
// 	stw      r31, 0x9c(r1)
// 	mr       r31, r4
// 	stw      r30, 0x98(r1)
// 	mr       r30, r3
// 	mr       r4, r30
// 	addi     r3, r1, 0x20
// 	lwz      r12, 0(r30)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	lfs      f2, 0x20(r1)
// 	lfs      f1, 0x24(r1)
// 	lfs      f0, 0x28(r1)
// 	stfs     f2, 0x50(r1)
// 	stfs     f1, 0x54(r1)
// 	stfs     f0, 0x58(r1)
// 	lhz      r0, 0x214(r30)
// 	cmpwi    r0, 1
// 	beq      lbl_801EE354
// 	bge      lbl_801EE330
// 	cmpwi    r0, 0
// 	bge      lbl_801EE33C
// 	b        lbl_801EE384

// lbl_801EE330:
// 	cmpwi    r0, 3
// 	bge      lbl_801EE384
// 	b        lbl_801EE370

// lbl_801EE33C:
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	lfs      f0, lbl_80519B14@sda21(r2)
// 	stfs     f1, 0x44(r1)
// 	stfs     f1, 0x48(r1)
// 	stfs     f0, 0x4c(r1)
// 	b        lbl_801EE384

// lbl_801EE354:
// 	lfs      f2, lbl_80519B10@sda21(r2)
// 	lfs      f1, lbl_80519B18@sda21(r2)
// 	lfs      f0, lbl_80519B1C@sda21(r2)
// 	stfs     f2, 0x44(r1)
// 	stfs     f1, 0x48(r1)
// 	stfs     f0, 0x4c(r1)
// 	b        lbl_801EE384

// lbl_801EE370:
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	lfs      f0, lbl_80519B20@sda21(r2)
// 	stfs     f1, 0x44(r1)
// 	stfs     f1, 0x48(r1)
// 	stfs     f0, 0x4c(r1)

// lbl_801EE384:
// 	lfs      f1, lbl_80519B24@sda21(r2)
// 	addi     r3, r1, 0x5c
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	addi     r4, r1, 0x38
// 	stfs     f1, 0x38(r1)
// 	addi     r5, r1, 0x2c
// 	stfs     f1, 0x3c(r1)
// 	stfs     f1, 0x40(r1)
// 	lfs      f1, 0x1f4(r30)
// 	stfs     f0, 0x2c(r1)
// 	stfs     f1, 0x30(r1)
// 	stfs     f0, 0x34(r1)
// 	bl       "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"
// 	addi     r3, r1, 0x5c
// 	addi     r4, r1, 0x44
// 	addi     r5, r1, 8
// 	bl       PSMTXMultVec
// 	lfs      f5, 8(r1)
// 	mr       r4, r30
// 	lfs      f4, 0xc(r1)
// 	addi     r3, r1, 0x14
// 	lfs      f3, 0x10(r1)
// 	lfs      f2, 0x58(r1)
// 	lfs      f1, 0x54(r1)
// 	lfs      f0, 0x50(r1)
// 	fadds    f2, f3, f2
// 	stfs     f3, 0x4c(r1)
// 	fadds    f1, f4, f1
// 	fadds    f0, f5, f0
// 	stfs     f5, 0x44(r1)
// 	stfs     f4, 0x48(r1)
// 	stfs     f0, 0x44(r1)
// 	stfs     f1, 0x48(r1)
// 	stfs     f2, 0x4c(r1)
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f3, 0x1c(r1)
// 	mr       r3, r31
// 	lfs      f2, lbl_80519B28@sda21(r2)
// 	addi     r4, r1, 0x50
// 	lfs      f1, 0x18(r1)
// 	addi     r5, r1, 0x44
// 	lfs      f0, 0x14(r1)
// 	fmuls    f5, f3, f2
// 	lfs      f6, 0x58(r1)
// 	fmuls    f3, f1, f2
// 	lfs      f4, 0x54(r1)
// 	fmuls    f0, f0, f2
// 	lfs      f2, 0x50(r1)
// 	fsubs    f5, f6, f5
// 	lfs      f1, lbl_80519B2C@sda21(r2)
// 	fsubs    f3, f4, f3
// 	fsubs    f0, f2, f0
// 	stfs     f5, 0x58(r1)
// 	stfs     f0, 0x50(r1)
// 	stfs     f3, 0x54(r1)
// 	bl       "set__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
// 	lwz      r0, 0xa4(r1)
// 	lwz      r31, 0x9c(r1)
// 	lwz      r30, 0x98(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0xa0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE47C
//  * Size:	000044
//  */
// void ItemBridge::Item::do_updateLOD(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r3
// 	addi     r3, r1, 8
// 	bl       __ct__Q24Game9AILODParmFv
// 	li       r0, 1
// 	mr       r3, r31
// 	stb      r0, 0x10(r1)
// 	addi     r4, r1, 8
// 	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE4C0
//  * Size:	000004
//  */
// void ItemBridge::Item::doDirectDraw(Graphics&) { }

// /*
//  * --INFO--
//  * Address:	801EE4C4
//  * Size:	000048
//  */
// void ItemBridge::Item::constructor(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	li       r3, 0x84
// 	bl       __nw__FUl
// 	or.      r0, r3, r3
// 	beq      lbl_801EE4F4
// 	mr       r4, r31
// 	bl       __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
// 	mr       r0, r3

// lbl_801EE4F4:
// 	stw      r0, 0x17c(r31)
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE50C
//  * Size:	0000FC
//  */
// void ItemBridge::Item::doLoad(Stream&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	mr       r3, r31
// 	bl       readInt__6StreamFv
// 	stw      r3, 0x218(r30)
// 	li       r5, 0
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	li       r4, 0
// 	b        lbl_801EE554

// lbl_801EE544:
// 	lwz      r3, 0x220(r30)
// 	addi     r5, r5, 1
// 	stfsx    f0, r3, r4
// 	addi     r4, r4, 4

// lbl_801EE554:
// 	lwz      r0, 0x21c(r30)
// 	cmpw     r5, r0
// 	blt      lbl_801EE544
// 	mr       r3, r31
// 	bl       readFloat__6StreamFv
// 	lwz      r4, 0x218(r30)
// 	lwz      r0, 0x21c(r30)
// 	cmpw     r4, r0
// 	blt      lbl_801EE5D8
// 	mr       r3, r30
// 	li       r4, 0
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0xac(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r3, 0x1fc(r30)
// 	cmplwi   r3, 0
// 	beq      lbl_801EE5E4
// 	lwz      r0, 0x200(r30)
// 	cmplwi   r0, 0
// 	beq      lbl_801EE5E4
// 	li       r4, 1
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r30)
// 	li       r4, 1
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x1fc(r30)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r30)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb
// 	b        lbl_801EE5E4

// lbl_801EE5D8:
// 	lwz      r3, 0x220(r30)
// 	slwi     r0, r4, 2
// 	stfsx    f1, r3, r0

// lbl_801EE5E4:
// 	lwz      r4, 0x218(r30)
// 	mr       r3, r30
// 	bl       setCurrStage__Q34Game10ItemBridge4ItemFi
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE608
//  * Size:	000074
//  */
// void ItemBridge::Item::doSave(Stream&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	lwz      r4, 0x218(r3)
// 	mr       r3, r31
// 	bl       writeInt__6StreamFi
// 	lwz      r3, 0x218(r30)
// 	lwz      r0, 0x21c(r30)
// 	cmpw     r3, r0
// 	blt      lbl_801EE650
// 	lfs      f1, lbl_80519B30@sda21(r2)
// 	mr       r3, r31
// 	bl       writeFloat__6StreamFf
// 	b        lbl_801EE664

// lbl_801EE650:
// 	lwz      r4, 0x220(r30)
// 	slwi     r0, r3, 2
// 	mr       r3, r31
// 	lfsx     f1, r4, r0
// 	bl       writeFloat__6StreamFf

// lbl_801EE664:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE67C
//  * Size:	000090
//  */
// void ItemBridge::Item::onSetPosition(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	stw      r0, 0x24(r1)
// 	addi     r5, r1, 8
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r3
// 	addi     r4, r31, 0x19c
// 	lfs      f1, 0x1f4(r3)
// 	addi     r3, r31, 0x138
// 	stfs     f0, 8(r1)
// 	stfs     f1, 0xc(r1)
// 	stfs     f0, 0x10(r1)
// 	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x3c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
// 	mr       r4, r31
// 	addi     r5, r31, 0x204
// 	bl
// 	setupPlatInstanceAttacher__Q34Game10ItemBridge3MgrFPQ34Game10ItemBridge4ItemRQ24Game20PlatInstanceAttacher
// 	addi     r3, r31, 0x204
// 	li       r4, 1
// 	bl       fixCollision__Q24Game20PlatInstanceAttacherFb
// 	mr       r3, r31
// 	bl       createWayPoints__Q34Game10ItemBridge4ItemFv
// 	mr       r3, r31
// 	li       r4, 0
// 	bl       setCurrStage__Q34Game10ItemBridge4ItemFi
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE70C
//  * Size:	000024
//  */
// void ItemBridge::Item::updateBoundSphere(void)
// {
// 	/*
// 	lfs      f1, 0x19c(r3)
// 	lfs      f0, lbl_80519B28@sda21(r2)
// 	stfs     f1, 0x1c4(r3)
// 	lfs      f1, 0x1a0(r3)
// 	stfs     f1, 0x1c8(r3)
// 	lfs      f1, 0x1a4(r3)
// 	stfs     f1, 0x1cc(r3)
// 	stfs     f0, 0x1d0(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE730
//  * Size:	000124
//  */
// void ItemBridge::Item::changeMaterial(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	stw      r30, 0x18(r1)
// 	stw      r29, 0x14(r1)
// 	stw      r28, 0x10(r1)
// 	mr       r28, r3
// 	addi     r3, r28, 0x204
// 	bl       setShapeVisibility__Q24Game20PlatInstanceAttacherFv
// 	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
// 	lhz      r4, 0x214(r28)
// 	bl       getBridgeInfo__Q34Game10ItemBridge3MgrFi
// 	mr       r31, r3
// 	lwz      r5, 0xc(r3)
// 	cmpwi    r5, -1
// 	beq      lbl_801EE834
// 	lwz      r3, 0x218(r28)
// 	lwz      r0, 0x21c(r28)
// 	cmpw     r3, r0
// 	bne      lbl_801EE81C
// 	li       r29, 0
// 	li       r30, 0
// 	b        lbl_801EE7F0

// lbl_801EE790:
// 	srwi     r3, r29, 0x1f
// 	clrlwi   r0, r29, 0x1f
// 	xor      r0, r0, r3
// 	subf.    r0, r3, r0
// 	bne      lbl_801EE7C8
// 	lwz      r3, 0x174(r28)
// 	li       r4, 0
// 	lwz      r5, 8(r31)
// 	lwz      r12, 0(r3)
// 	lhzx     r5, r5, r30
// 	lwz      r12, 0x28(r12)
// 	mtctr    r12
// 	bctrl
// 	b        lbl_801EE7E8

// lbl_801EE7C8:
// 	lwz      r3, 0x174(r28)
// 	li       r4, 1
// 	lwz      r5, 8(r31)
// 	lwz      r12, 0(r3)
// 	lhzx     r5, r5, r30
// 	lwz      r12, 0x28(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801EE7E8:
// 	addi     r30, r30, 2
// 	addi     r29, r29, 1

// lbl_801EE7F0:
// 	lwz      r0, 4(r31)
// 	cmpw     r29, r0
// 	blt      lbl_801EE790
// 	lwz      r3, 0x174(r28)
// 	li       r4, 1
// 	lwz      r5, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x28(r12)
// 	mtctr    r12
// 	bctrl
// 	b        lbl_801EE834

// lbl_801EE81C:
// 	lwz      r3, 0x174(r28)
// 	li       r4, 0
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x28(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801EE834:
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE854
//  * Size:	0001A0
//  */
// void ItemBridge::Item::doAI(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	mr       r4, r31
// 	lwz      r3, 0x1d8(r3)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r3, r31, 0x1e0
// 	bl       update__Q24Game11TSoundEventFv
// 	cmpwi    r3, 2
// 	beq      lbl_801EE894
// 	b        lbl_801EE8E0

// lbl_801EE894:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	cmpwi    r3, 0xa
// 	beq      lbl_801EE8CC
// 	lis      r3, lbl_80481234@ha
// 	lis      r5, lbl_80481260@ha
// 	addi     r3, r3, lbl_80481234@l
// 	li       r4, 0x1be
// 	addi     r5, r5, lbl_80481260@l
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801EE8CC:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x90(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801EE8E0:
// 	lbz      r3, 0x1f8(r31)
// 	cmplwi   r3, 0
// 	beq      lbl_801EE9E0
// 	addi     r0, r3, -1
// 	stb      r0, 0x1f8(r31)
// 	lbz      r0, 0x1f8(r31)
// 	cmplwi   r0, 0
// 	bne      lbl_801EE9E0
// 	lwz      r4, 0x218(r31)
// 	mr       r3, r31
// 	addi     r4, r4, 1
// 	bl       setCurrStage__Q34Game10ItemBridge4ItemFi
// 	lwz      r3, 0x218(r31)
// 	lwz      r0, 0x21c(r31)
// 	cmpw     r3, r0
// 	bne      lbl_801EE9E0
// 	mr       r3, r31
// 	li       r4, 0
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0xac(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r3, spSysIF__8PSSystem@sda21(r13)
// 	li       r4, 0x181c
// 	li       r5, 0
// 	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
// 	lwz      r3, 0x1fc(r31)
// 	cmplwi   r3, 0
// 	beq      lbl_801EE98C
// 	lwz      r0, 0x200(r31)
// 	cmplwi   r0, 0
// 	beq      lbl_801EE98C
// 	li       r4, 1
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r31)
// 	li       r4, 1
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x1fc(r31)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r31)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb

// lbl_801EE98C:
// 	addi     r3, r31, 0x1e0
// 	bl       finish__Q24Game11TSoundEventFv
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	cmpwi    r3, 0xa
// 	beq      lbl_801EE9CC
// 	lis      r3, lbl_80481234@ha
// 	lis      r5, lbl_80481260@ha
// 	addi     r3, r3, lbl_80481234@l
// 	li       r4, 0x1d7
// 	addi     r5, r5, lbl_80481260@l
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801EE9CC:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x94(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801EE9E0:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EE9F4
//  * Size:	00028C
//  */
// void ItemBridge::Item::setCurrStage(int)
// {
// 	/*
// 	stwu     r1, -0x70(r1)
// 	mflr     r0
// 	stw      r0, 0x74(r1)
// 	stfd     f31, 0x60(r1)
// 	psq_st   f31, 104(r1), 0, qr0
// 	stfd     f30, 0x50(r1)
// 	psq_st   f30, 88(r1), 0, qr0
// 	stfd     f29, 0x40(r1)
// 	psq_st   f29, 72(r1), 0, qr0
// 	stmw     r27, 0x2c(r1)
// 	mr       r29, r3
// 	mr       r30, r4
// 	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
// 	lhz      r4, 0x214(r29)
// 	bl       getBridgeInfo__Q34Game10ItemBridge3MgrFi
// 	mr       r31, r3
// 	lwz      r4, 0xc(r3)
// 	cmpwi    r4, -1
// 	beq      lbl_801EEB44
// 	lwz      r0, 0x21c(r29)
// 	cmpw     r30, r0
// 	bne      lbl_801EEA98
// 	li       r28, 0
// 	b        lbl_801EEA70

// lbl_801EEA54:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r28, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 0
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	addi     r28, r28, 1

// lbl_801EEA70:
// 	lwz      r0, 4(r31)
// 	clrlwi   r3, r28, 0x10
// 	cmpw     r3, r0
// 	blt      lbl_801EEA54
// 	lwz      r0, 0xc(r31)
// 	addi     r3, r29, 0x204
// 	li       r4, 1
// 	clrlwi   r5, r0, 0x10
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	b        lbl_801EEBDC

// lbl_801EEA98:
// 	addi     r3, r29, 0x204
// 	clrlwi   r5, r4, 0x10
// 	li       r4, 0
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	slwi     r28, r30, 1
// 	li       r27, 0
// 	b        lbl_801EEB30

// lbl_801EEAB4:
// 	cmpw     r4, r28
// 	bgt      lbl_801EEB14
// 	srwi     r3, r4, 0x1f
// 	clrlwi   r0, r4, 0x1f
// 	xor      r0, r0, r3
// 	subf     r0, r3, r0
// 	cmpwi    r0, 1
// 	beq      lbl_801EEADC
// 	cmpw     r4, r28
// 	bne      lbl_801EEAF8

// lbl_801EEADC:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r27, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 1
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	b        lbl_801EEB2C

// lbl_801EEAF8:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r27, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 0
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	b        lbl_801EEB2C

// lbl_801EEB14:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r27, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 0
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs

// lbl_801EEB2C:
// 	addi     r27, r27, 1

// lbl_801EEB30:
// 	lwz      r0, 4(r31)
// 	clrlwi   r4, r27, 0x10
// 	cmpw     r4, r0
// 	blt      lbl_801EEAB4
// 	b        lbl_801EEBDC

// lbl_801EEB44:
// 	slwi     r28, r30, 1
// 	li       r27, 0
// 	b        lbl_801EEBCC

// lbl_801EEB50:
// 	cmpw     r4, r28
// 	bgt      lbl_801EEBB0
// 	srwi     r3, r4, 0x1f
// 	clrlwi   r0, r4, 0x1f
// 	xor      r0, r0, r3
// 	subf     r0, r3, r0
// 	cmpwi    r0, 1
// 	beq      lbl_801EEB78
// 	cmpw     r4, r28
// 	bne      lbl_801EEB94

// lbl_801EEB78:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r27, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 1
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	b        lbl_801EEBC8

// lbl_801EEB94:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r27, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 0
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs
// 	b        lbl_801EEBC8

// lbl_801EEBB0:
// 	lwz      r4, 8(r31)
// 	rlwinm   r0, r27, 1, 0xf, 0x1e
// 	addi     r3, r29, 0x204
// 	lhzx     r5, r4, r0
// 	li       r4, 0
// 	bl       setCollision__Q24Game20PlatInstanceAttacherFbUs

// lbl_801EEBC8:
// 	addi     r27, r27, 1

// lbl_801EEBCC:
// 	lwz      r0, 4(r31)
// 	clrlwi   r4, r27, 0x10
// 	cmpw     r4, r0
// 	blt      lbl_801EEB50

// lbl_801EEBDC:
// 	stw      r30, 0x218(r29)
// 	lwz      r0, 0x218(r29)
// 	cmpwi    r0, -1
// 	beq      lbl_801EEC54
// 	mr       r4, r29
// 	addi     r3, r1, 8
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f3, 0x10(r1)
// 	mr       r4, r29
// 	lfs      f2, lbl_80519B34@sda21(r2)
// 	addi     r3, r1, 0x14
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, 8(r1)
// 	fmuls    f30, f3, f2
// 	fmuls    f31, f1, f2
// 	lwz      r5, 0x218(r29)
// 	fmuls    f29, f0, f2
// 	bl       getStagePos__Q34Game10ItemBridge4ItemFi
// 	lfs      f2, 0x1c(r1)
// 	lfs      f1, 0x18(r1)
// 	lfs      f0, 0x14(r1)
// 	fsubs    f2, f2, f30
// 	lwz      r3, 0x1fc(r29)
// 	fsubs    f1, f1, f31
// 	fsubs    f0, f0, f29
// 	cmplwi   r3, 0
// 	beq      lbl_801EEC54
// 	stfs     f0, 0x4c(r3)
// 	stfs     f1, 0x50(r3)
// 	stfs     f2, 0x54(r3)

// lbl_801EEC54:
// 	psq_l    f31, 104(r1), 0, qr0
// 	lfd      f31, 0x60(r1)
// 	psq_l    f30, 88(r1), 0, qr0
// 	lfd      f30, 0x50(r1)
// 	psq_l    f29, 72(r1), 0, qr0
// 	lfd      f29, 0x40(r1)
// 	lmw      r27, 0x2c(r1)
// 	lwz      r0, 0x74(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x70
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EEC80
//  * Size:	0001CC
//  */
// void ItemBridge::Item::createWayPoints(void)
// {
// 	/*
// 	stwu     r1, -0xa0(r1)
// 	mflr     r0
// 	stw      r0, 0xa4(r1)
// 	stfd     f31, 0x90(r1)
// 	psq_st   f31, 152(r1), 0, qr0
// 	stfd     f30, 0x80(r1)
// 	psq_st   f30, 136(r1), 0, qr0
// 	stfd     f29, 0x70(r1)
// 	psq_st   f29, 120(r1), 0, qr0
// 	stw      r31, 0x6c(r1)
// 	mr       r31, r3
// 	addi     r3, r1, 0x20
// 	mr       r4, r31
// 	bl       getStartPos__Q34Game10ItemBridge4ItemFv
// 	lwz      r3, mapMgr__4Game@sda21(r13)
// 	li       r0, 0
// 	lfs      f29, 0x20(r1)
// 	lfs      f31, 0x24(r1)
// 	cmplwi   r3, 0
// 	lfs      f30, 0x28(r1)
// 	lfs      f0, lbl_80519B38@sda21(r2)
// 	stfs     f29, 0x44(r1)
// 	stfs     f31, 0x48(r1)
// 	stfs     f30, 0x4c(r1)
// 	stw      r0, 0x50(r1)
// 	stb      r0, 0x54(r1)
// 	stfs     f0, 0x58(r1)
// 	beq      lbl_801EED34
// 	lwz      r3, 8(r3)
// 	cmplwi   r3, 0
// 	beq      lbl_801EED34
// 	addi     r4, r1, 0x44
// 	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
// 	stw      r3, 0x1fc(r31)
// 	li       r4, 1
// 	lwz      r3, 0x1fc(r31)
// 	stfs     f29, 0x4c(r3)
// 	stfs     f31, 0x50(r3)
// 	stfs     f30, 0x54(r3)
// 	lwz      r3, 0x1fc(r31)
// 	bl       setBridge__Q24Game8WayPointFb
// 	lwz      r3, 0x1fc(r31)
// 	li       r4, 0
// 	bl       setOpen__Q24Game8WayPointFb
// 	b        lbl_801EED3C

// lbl_801EED34:
// 	li       r0, 0
// 	stw      r0, 0x1fc(r31)

// lbl_801EED3C:
// 	lwz      r5, 0x21c(r31)
// 	mr       r4, r31
// 	addi     r3, r1, 0x14
// 	addi     r5, r5, -1
// 	bl       getStagePos__Q34Game10ItemBridge4ItemFi
// 	lfs      f30, 0x14(r1)
// 	mr       r4, r31
// 	lfs      f31, 0x18(r1)
// 	addi     r3, r1, 8
// 	lfs      f29, 0x1c(r1)
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f2, 8(r1)
// 	li       r0, 0
// 	lfs      f4, lbl_80519B18@sda21(r2)
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, 0x10(r1)
// 	fmuls    f3, f2, f4
// 	fmuls    f2, f1, f4
// 	lwz      r3, mapMgr__4Game@sda21(r13)
// 	fmuls    f1, f0, f4
// 	lfs      f0, lbl_80519B38@sda21(r2)
// 	fadds    f30, f30, f3
// 	fadds    f31, f31, f2
// 	fadds    f29, f29, f1
// 	cmplwi   r3, 0
// 	stfs     f30, 0x2c(r1)
// 	stfs     f31, 0x30(r1)
// 	stfs     f29, 0x34(r1)
// 	stw      r0, 0x38(r1)
// 	stb      r0, 0x3c(r1)
// 	stfs     f0, 0x40(r1)
// 	beq      lbl_801EEE18
// 	lwz      r3, 8(r3)
// 	cmplwi   r3, 0
// 	beq      lbl_801EEE18
// 	addi     r4, r1, 0x2c
// 	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
// 	stw      r3, 0x200(r31)
// 	li       r4, 1
// 	lwz      r3, 0x200(r31)
// 	stfs     f30, 0x4c(r3)
// 	stfs     f31, 0x50(r3)
// 	stfs     f29, 0x54(r3)
// 	lwz      r3, 0x200(r31)
// 	bl       setBridge__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r31)
// 	li       r4, 0
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x1fc(r31)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r31)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb
// 	b        lbl_801EEE20

// lbl_801EEE18:
// 	li       r0, 0
// 	stw      r0, 0x200(r31)

// lbl_801EEE20:
// 	psq_l    f31, 152(r1), 0, qr0
// 	lfd      f31, 0x90(r1)
// 	psq_l    f30, 136(r1), 0, qr0
// 	lfd      f30, 0x80(r1)
// 	psq_l    f29, 120(r1), 0, qr0
// 	lfd      f29, 0x70(r1)
// 	lwz      r0, 0xa4(r1)
// 	lwz      r31, 0x6c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0xa0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EEE4C
//  * Size:	0000E8
//  */
// void ItemBridge::Item::getStagePos(int)
// {
// 	/*
// 	stwu     r1, -0x40(r1)
// 	mflr     r0
// 	stw      r0, 0x44(r1)
// 	stfd     f31, 0x30(r1)
// 	psq_st   f31, 56(r1), 0, qr0
// 	stw      r31, 0x2c(r1)
// 	stw      r30, 0x28(r1)
// 	stw      r29, 0x24(r1)
// 	mr       r30, r4
// 	mr       r31, r5
// 	mr       r29, r3
// 	mr       r3, r30
// 	mr       r4, r31
// 	bl       getStageZ__Q34Game10ItemBridge4ItemFi
// 	fmr      f31, f1
// 	mr       r4, r30
// 	addi     r3, r1, 8
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f2, 8(r1)
// 	cmpwi    r31, 1
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, 0x10(r1)
// 	fmuls    f4, f2, f31
// 	lfs      f5, 0x19c(r30)
// 	fmuls    f2, f1, f31
// 	lfs      f3, 0x1a0(r30)
// 	fmuls    f0, f0, f31
// 	lfs      f1, 0x1a4(r30)
// 	fadds    f4, f5, f4
// 	fadds    f3, f3, f2
// 	fadds    f5, f1, f0
// 	blt      lbl_801EEF04
// 	addi     r0, r31, -1
// 	lis      r4, 0x4330019C@ha
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r30)
// 	stw      r3, 0x1c(r1)
// 	lis      r3, bridgeGrad@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0x18(r1)
// 	addi     r3, r3, bridgeGrad@l
// 	lfsx     f0, r3, r0
// 	lfd      f1, 0x18(r1)
// 	fsubs    f1, f1, f2
// 	fmadds   f3, f1, f0, f3

// lbl_801EEF04:
// 	stfs     f4, 0(r29)
// 	stfs     f3, 4(r29)
// 	stfs     f5, 8(r29)
// 	psq_l    f31, 56(r1), 0, qr0
// 	lwz      r0, 0x44(r1)
// 	lfd      f31, 0x30(r1)
// 	lwz      r31, 0x2c(r1)
// 	lwz      r30, 0x28(r1)
// 	lwz      r29, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x40
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EEF34
//  * Size:	0000A0
//  */
// void ItemBridge::Item::getStartPos(void)
// {
// 	/*
// 	stwu     r1, -0x50(r1)
// 	mflr     r0
// 	stw      r0, 0x54(r1)
// 	stfd     f31, 0x40(r1)
// 	psq_st   f31, 72(r1), 0, qr0
// 	stfd     f30, 0x30(r1)
// 	psq_st   f30, 56(r1), 0, qr0
// 	stfd     f29, 0x20(r1)
// 	psq_st   f29, 40(r1), 0, qr0
// 	stw      r31, 0x1c(r1)
// 	lfs      f31, 0x4330019C@l(r4)
// 	mr       r31, r3
// 	lfs      f30, 0x1a0(r4)
// 	addi     r3, r1, 8
// 	lfs      f29, 0x1a4(r4)
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f2, lbl_80519B48@sda21(r2)
// 	lfs      f0, 8(r1)
// 	lfs      f1, 0xc(r1)
// 	fmuls    f0, f0, f2
// 	lfs      f3, 0x10(r1)
// 	fmuls    f1, f1, f2
// 	fmuls    f2, f3, f2
// 	fsubs    f0, f31, f0
// 	fsubs    f1, f30, f1
// 	fsubs    f2, f29, f2
// 	stfs     f0, 0(r31)
// 	stfs     f1, 4(r31)
// 	stfs     f2, 8(r31)
// 	psq_l    f31, 72(r1), 0, qr0
// 	lfd      f31, 0x40(r1)
// 	psq_l    f30, 56(r1), 0, qr0
// 	lfd      f30, 0x30(r1)
// 	psq_l    f29, 40(r1), 0, qr0
// 	lfd      f29, 0x20(r1)
// 	lwz      r0, 0x54(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x50
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EEFD4
//  * Size:	00005C
//  */
// void ItemBridge::Item::getStageZ(int)
// {
// 	/*
// 	cmpwi    r4, 0
// 	stwu     r1, -0x10(r1)
// 	lfs      f1, lbl_80519B4C@sda21(r2)
// 	ble      lbl_801EF020
// 	addi     r0, r4, -1
// 	lis      r4, 0x433001F4@ha
// 	xoris    r5, r0, 0x8000
// 	lhz      r0, 0x214(r3)
// 	stw      r5, 0xc(r1)
// 	lis      r3, bridgeFirstPos@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 8(r1)
// 	addi     r3, r3, bridgeFirstPos@l
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfd      f1, 8(r1)
// 	lfsx     f0, r3, r0
// 	fsubs    f1, f1, f2
// 	fmadds   f1, f3, f1, f0

// lbl_801EF020:
// 	lfs      f0, lbl_80519B38@sda21(r2)
// 	fsubs    f1, f1, f0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000008
//  */
// void ItemBridge::Item::getStageDepth(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	801EF030
//  * Size:	000008
//  */
// void ItemBridge::Item::getStageWidth(void)
// {
// 	/*
// 	lfs      f1, lbl_80519B50@sda21(r2)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EF038
//  * Size:	0000A4
//  */
// void ItemBridge::Item::getBridgeZVec(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	lfs      f3, 0x433001F4@l(r4)
// 	fmr      f1, f3
// 	fcmpo    cr0, f3, f0
// 	bge      lbl_801EF054
// 	fneg     f1, f3

// lbl_801EF054:
// 	lfs      f2, lbl_80519B54@sda21(r2)
// 	lis      r4, sincosTable___5JMath@ha
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	addi     r5, r4, sincosTable___5JMath@l
// 	fmuls    f1, f1, f2
// 	fcmpo    cr0, f3, f0
// 	fctiwz   f0, f1
// 	stfd     f0, 8(r1)
// 	lwz      r0, 0xc(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	add      r4, r5, r0
// 	lfs      f1, 4(r4)
// 	bge      lbl_801EF0AC
// 	lfs      f0, lbl_80519B58@sda21(r2)
// 	fmuls    f0, f3, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 0x10(r1)
// 	lwz      r0, 0x14(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r5, r0
// 	fneg     f0, f0
// 	b        lbl_801EF0C4

// lbl_801EF0AC:
// 	fmuls    f0, f3, f2
// 	fctiwz   f0, f0
// 	stfd     f0, 0x18(r1)
// 	lwz      r0, 0x1c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r5, r0

// lbl_801EF0C4:
// 	stfs     f0, 0(r3)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	stfs     f0, 4(r3)
// 	stfs     f1, 8(r3)
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EF0DC
//  * Size:	0000B8
//  */
// void ItemBridge::Item::getBridgeXVec(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	lfs      f3, 0x1f4(r4)
// 	fcmpo    cr0, f3, f0
// 	bge      lbl_801EF11C
// 	lfs      f0, lbl_80519B58@sda21(r2)
// 	lis      r4, sincosTable___5JMath@ha
// 	addi     r4, r4, sincosTable___5JMath@l
// 	fmuls    f0, f3, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 8(r1)
// 	lwz      r0, 0xc(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r4, r0
// 	fneg     f1, f0
// 	b        lbl_801EF140

// lbl_801EF11C:
// 	lfs      f0, lbl_80519B54@sda21(r2)
// 	lis      r4, sincosTable___5JMath@ha
// 	addi     r4, r4, sincosTable___5JMath@l
// 	fmuls    f0, f3, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 0x10(r1)
// 	lwz      r0, 0x14(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f1, r4, r0

// lbl_801EF140:
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fneg     f2, f1
// 	fcmpo    cr0, f3, f0
// 	bge      lbl_801EF154
// 	fneg     f3, f3

// lbl_801EF154:
// 	lfs      f1, lbl_80519B54@sda21(r2)
// 	lis      r4, sincosTable___5JMath@ha
// 	addi     r4, r4, sincosTable___5JMath@l
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fmuls    f1, f3, f1
// 	fctiwz   f1, f1
// 	stfd     f1, 0x18(r1)
// 	lwz      r0, 0x1c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	add      r4, r4, r0
// 	lfs      f1, 4(r4)
// 	stfs     f1, 0(r3)
// 	stfs     f0, 4(r3)
// 	stfs     f2, 8(r3)
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// } // namespace Game

// /*
//  * --INFO--
//  * Address:	801EF194
//  * Size:	0001F0
//  */
// void getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3f RfRf(void)
// {
// 	/*
// 	stwu     r1, -0x80(r1)
// 	mflr     r0
// 	stw      r0, 0x84(r1)
// 	stfd     f31, 0x70(r1)
// 	psq_st   f31, 120(r1), 0, qr0
// 	stfd     f30, 0x60(r1)
// 	psq_st   f30, 104(r1), 0, qr0
// 	stw      r31, 0x5c(r1)
// 	stw      r30, 0x58(r1)
// 	stw      r29, 0x54(r1)
// 	stw      r28, 0x50(r1)
// 	mr       r28, r3
// 	mr       r29, r4
// 	lfs      f31, 0x19c(r3)
// 	mr       r30, r5
// 	lfs      f30, 0x1a4(r3)
// 	mr       r31, r6
// 	mr       r4, r28
// 	addi     r3, r1, 8
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f0, 8(r1)
// 	lfs      f2, lbl_80519B48@sda21(r2)
// 	lfs      f1, 0x10(r1)
// 	fmuls    f4, f0, f2
// 	lfs      f0, 0x1f4(r28)
// 	fmuls    f2, f1, f2
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	lfs      f3, 8(r29)
// 	fsubs    f4, f31, f4
// 	fsubs    f5, f30, f2
// 	lfs      f2, 0(r29)
// 	fcmpo    cr0, f0, f1
// 	fsubs    f4, f2, f4
// 	fsubs    f5, f3, f5
// 	bge      lbl_801EF24C
// 	lfs      f1, lbl_80519B58@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f1, f0, f1
// 	fctiwz   f1, f1
// 	stfd     f1, 0x18(r1)
// 	lwz      r0, 0x1c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f1, r3, r0
// 	fneg     f2, f1
// 	b        lbl_801EF270

// lbl_801EF24C:
// 	lfs      f1, lbl_80519B54@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f1, f0, f1
// 	fctiwz   f1, f1
// 	stfd     f1, 0x20(r1)
// 	lwz      r0, 0x24(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f2, r3, r0

// lbl_801EF270:
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	fmr      f3, f0
// 	fneg     f6, f2
// 	fcmpo    cr0, f0, f1
// 	bge      lbl_801EF288
// 	fneg     f3, f0

// lbl_801EF288:
// 	lfs      f2, lbl_80519B54@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f2, f3, f2
// 	addi     r3, r3, 4
// 	fcmpo    cr0, f0, f1
// 	fmr      f8, f0
// 	fctiwz   f1, f2
// 	stfd     f1, 0x28(r1)
// 	lwz      r0, 0x2c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f7, r3, r0
// 	bge      lbl_801EF2C4
// 	fneg     f8, f0

// lbl_801EF2C4:
// 	lfs      f3, lbl_80519B54@sda21(r2)
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	fmuls    f2, f8, f3
// 	fcmpo    cr0, f0, f1
// 	fctiwz   f1, f2
// 	stfd     f1, 0x30(r1)
// 	lwz      r0, 0x34(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f2, r3, r0
// 	bge      lbl_801EF318
// 	lfs      f1, lbl_80519B58@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f0, f0, f1
// 	fctiwz   f0, f0
// 	stfd     f0, 0x38(r1)
// 	lwz      r0, 0x3c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r3, r0
// 	fneg     f3, f0
// 	b        lbl_801EF338

// lbl_801EF318:
// 	fmuls    f0, f0, f3
// 	lis      r3, sincosTable___5JMath@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fctiwz   f0, f0
// 	stfd     f0, 0x40(r1)
// 	lwz      r0, 0x44(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f3, r3, r0

// lbl_801EF338:
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fmadds   f1, f4, f7, f0
// 	fmadds   f0, f4, f3, f0
// 	fmadds   f1, f5, f6, f1
// 	fmadds   f0, f5, f2, f0
// 	stfs     f1, 0(r30)
// 	stfs     f0, 0(r31)
// 	psq_l    f31, 120(r1), 0, qr0
// 	lfd      f31, 0x70(r1)
// 	psq_l    f30, 104(r1), 0, qr0
// 	lfd      f30, 0x60(r1)
// 	lwz      r31, 0x5c(r1)
// 	lwz      r30, 0x58(r1)
// 	lwz      r29, 0x54(r1)
// 	lwz      r0, 0x84(r1)
// 	lwz      r28, 0x50(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x80
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EF384
//  * Size:	000138
//  */
// void workable__Q34Game10ItemBridge4ItemFR10Vector3f(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	addi     r5, r1, 0xc
// 	addi     r6, r1, 8
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r3
// 	bl       "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
// 	lwz      r3, 0x218(r31)
// 	lwz      r0, 0x21c(r31)
// 	cmpw     r3, r0
// 	bne      lbl_801EF3BC
// 	li       r3, 0
// 	b        lbl_801EF4A8

// lbl_801EF3BC:
// 	cmpwi    r3, 0
// 	lfs      f3, lbl_80519B4C@sda21(r2)
// 	ble      lbl_801EF404
// 	addi     r0, r3, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r31)
// 	stw      r3, 0x14(r1)
// 	lis      r3, bridgeFirstPos@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0x10(r1)
// 	addi     r3, r3, bridgeFirstPos@l
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfd      f1, 0x10(r1)
// 	lfsx     f0, r3, r0
// 	fsubs    f1, f1, f2
// 	fmadds   f3, f3, f1, f0

// lbl_801EF404:
// 	lfs      f2, lbl_80519B38@sda21(r2)
// 	lfs      f0, 8(r1)
// 	fsubs    f3, f3, f2
// 	fsubs    f1, f0, f2
// 	fadds    f0, f2, f3
// 	stfs     f1, 8(r1)
// 	fcmpo    cr0, f1, f0
// 	ble      lbl_801EF42C
// 	li       r3, 0
// 	b        lbl_801EF4A8

// lbl_801EF42C:
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EF46C
// 	fcmpo    cr0, f1, f3
// 	cror     2, 0, 2
// 	bne      lbl_801EF46C
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, lbl_80519B5C@sda21(r2)
// 	fabs     f1, f1
// 	frsp     f1, f1
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EF480
// 	li       r3, 0
// 	b        lbl_801EF4A8

// lbl_801EF46C:
// 	lfs      f0, lbl_80519B60@sda21(r2)
// 	fcmpo    cr0, f1, f0
// 	bge      lbl_801EF480
// 	li       r3, 0
// 	b        lbl_801EF4A8

// lbl_801EF480:
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, lbl_80519B64@sda21(r2)
// 	fabs     f1, f1
// 	frsp     f1, f1
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EF4A4
// 	li       r3, 0
// 	b        lbl_801EF4A8

// lbl_801EF4A4:
// 	li       r3, 1

// lbl_801EF4A8:
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EF4BC
//  * Size:	000430
//  */
// void getVectorField__Q34Game10ItemBridge4ItemFRQ23Sys6SphereR10Vector3f(void)
// {
// 	/*
// 	stwu     r1, -0x80(r1)
// 	mflr     r0
// 	stw      r0, 0x84(r1)
// 	stfd     f31, 0x70(r1)
// 	psq_st   f31, 120(r1), 0, qr0
// 	stfd     f30, 0x60(r1)
// 	psq_st   f30, 104(r1), 0, qr0
// 	stfd     f29, 0x50(r1)
// 	psq_st   f29, 88(r1), 0, qr0
// 	stw      r31, 0x4c(r1)
// 	stw      r30, 0x48(r1)
// 	stw      r29, 0x44(r1)
// 	mr       r29, r3
// 	mr       r30, r4
// 	lwz      r3, 0x218(r3)
// 	mr       r31, r5
// 	lwz      r0, 0x21c(r29)
// 	cmpw     r3, r0
// 	bne      lbl_801EF510
// 	li       r3, 0
// 	b        lbl_801EF8B8

// lbl_801EF510:
// 	lfs      f31, 0x19c(r29)
// 	mr       r4, r29
// 	lfs      f30, 0x1a0(r29)
// 	addi     r3, r1, 0x10
// 	lfs      f29, 0x1a4(r29)
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfs      f0, 0x14(r1)
// 	lfs      f2, 0x10(r1)
// 	fmuls    f1, f0, f3
// 	lfs      f0, 0x18(r1)
// 	fmuls    f5, f2, f3
// 	lfs      f2, 4(r30)
// 	fmuls    f4, f0, f3
// 	lfs      f3, 8(r30)
// 	fsubs    f6, f30, f1
// 	lfs      f1, 0(r30)
// 	fsubs    f7, f29, f4
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fsubs    f5, f31, f5
// 	fsubs    f4, f6, f2
// 	fsubs    f3, f7, f3
// 	fsubs    f2, f5, f1
// 	fmuls    f1, f4, f4
// 	fmuls    f5, f3, f3
// 	fmadds   f1, f2, f2, f1
// 	fadds    f1, f5, f1
// 	fcmpo    cr0, f1, f0
// 	ble      lbl_801EF594
// 	ble      lbl_801EF598
// 	frsqrte  f0, f1
// 	fmuls    f1, f0, f1
// 	b        lbl_801EF598

// lbl_801EF594:
// 	fmr      f1, f0

// lbl_801EF598:
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fcmpo    cr0, f1, f0
// 	ble      lbl_801EF5BC
// 	lfs      f0, lbl_80519B24@sda21(r2)
// 	fdivs    f0, f0, f1
// 	fmuls    f2, f2, f0
// 	fmuls    f4, f4, f0
// 	fmuls    f3, f3, f0
// 	b        lbl_801EF5C0

// lbl_801EF5BC:
// 	fmr      f1, f0

// lbl_801EF5C0:
// 	lfs      f0, lbl_80519B68@sda21(r2)
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EF5E0
// 	stfs     f2, 0(r31)
// 	stfs     f4, 4(r31)
// 	stfs     f3, 8(r31)
// 	b        lbl_801EF8B4

// lbl_801EF5E0:
// 	mr       r3, r29
// 	mr       r4, r30
// 	addi     r5, r1, 0xc
// 	addi     r6, r1, 8
// 	bl       "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
// 	lwz      r3, 0x218(r29)
// 	lfs      f2, lbl_80519B4C@sda21(r2)
// 	cmpwi    r3, 0
// 	ble      lbl_801EF640
// 	addi     r0, r3, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r29)
// 	stw      r3, 0x24(r1)
// 	lis      r3, bridgeFirstPos@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0x20(r1)
// 	addi     r3, r3, bridgeFirstPos@l
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfd      f1, 0x20(r1)
// 	lfsx     f0, r3, r0
// 	fsubs    f1, f1, f2
// 	fmadds   f2, f3, f1, f0

// lbl_801EF640:
// 	lfs      f1, lbl_80519B38@sda21(r2)
// 	lfs      f0, 0xc(r1)
// 	fsubs    f2, f2, f1
// 	lfs      f1, lbl_80519B48@sda21(r2)
// 	fabs     f4, f0
// 	lfs      f3, 8(r1)
// 	lfs      f0, lbl_80519B6C@sda21(r2)
// 	fadds    f2, f1, f2
// 	frsp     f1, f4
// 	fsubs    f2, f3, f2
// 	fcmpo    cr0, f1, f0
// 	stfs     f2, 8(r1)
// 	bge      lbl_801EF740
// 	lfs      f0, lbl_80519B70@sda21(r2)
// 	fcmpo    cr0, f2, f0
// 	cror     2, 0, 2
// 	bne      lbl_801EF720
// 	lfs      f3, 0x1f4(r29)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fmr      f1, f3
// 	fcmpo    cr0, f3, f0
// 	bge      lbl_801EF69C
// 	fneg     f1, f3

// lbl_801EF69C:
// 	lfs      f2, lbl_80519B54@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	addi     r4, r3, sincosTable___5JMath@l
// 	fmuls    f1, f1, f2
// 	fcmpo    cr0, f3, f0
// 	fctiwz   f0, f1
// 	stfd     f0, 0x20(r1)
// 	lwz      r0, 0x24(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	add      r3, r4, r0
// 	lfs      f1, 4(r3)
// 	bge      lbl_801EF6F4
// 	lfs      f0, lbl_80519B58@sda21(r2)
// 	fmuls    f0, f3, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 0x28(r1)
// 	lwz      r0, 0x2c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r4, r0
// 	fneg     f0, f0
// 	b        lbl_801EF70C

// lbl_801EF6F4:
// 	fmuls    f0, f3, f2
// 	fctiwz   f0, f0
// 	stfd     f0, 0x30(r1)
// 	lwz      r0, 0x34(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r4, r0

// lbl_801EF70C:
// 	stfs     f0, 0(r31)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	stfs     f0, 4(r31)
// 	stfs     f1, 8(r31)
// 	b        lbl_801EF8B4

// lbl_801EF720:
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fcmpo    cr0, f2, f0
// 	cror     2, 0, 2
// 	bne      lbl_801EF738
// 	li       r3, 0
// 	b        lbl_801EF8B8

// lbl_801EF738:
// 	li       r3, 0
// 	b        lbl_801EF8B8

// lbl_801EF740:
// 	lfs      f0, lbl_80519B70@sda21(r2)
// 	fcmpo    cr0, f2, f0
// 	ble      lbl_801EF7EC
// 	lfs      f3, 0x1f4(r29)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fmr      f1, f3
// 	fcmpo    cr0, f3, f0
// 	bge      lbl_801EF764
// 	fneg     f1, f3

// lbl_801EF764:
// 	lfs      f2, lbl_80519B54@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	addi     r4, r3, sincosTable___5JMath@l
// 	fmuls    f1, f1, f2
// 	fcmpo    cr0, f3, f0
// 	fctiwz   f0, f1
// 	stfd     f0, 0x30(r1)
// 	lwz      r0, 0x34(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	add      r3, r4, r0
// 	lfs      f1, 4(r3)
// 	bge      lbl_801EF7BC
// 	lfs      f0, lbl_80519B58@sda21(r2)
// 	fmuls    f0, f3, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 0x28(r1)
// 	lwz      r0, 0x2c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r4, r0
// 	fneg     f2, f0
// 	b        lbl_801EF7D4

// lbl_801EF7BC:
// 	fmuls    f0, f3, f2
// 	fctiwz   f0, f0
// 	stfd     f0, 0x20(r1)
// 	lwz      r0, 0x24(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f2, r4, r0

// lbl_801EF7D4:
// 	lfs      f0, lbl_80519B74@sda21(r2)
// 	lfs      f3, lbl_80519B10@sda21(r2)
// 	fmuls    f2, f2, f0
// 	fmuls    f3, f3, f0
// 	fmuls    f4, f1, f0
// 	b        lbl_801EF8A8

// lbl_801EF7EC:
// 	lfs      f2, 0x1f4(r29)
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fcmpo    cr0, f2, f0
// 	bge      lbl_801EF828
// 	lfs      f0, lbl_80519B58@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f0, f2, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 0x30(r1)
// 	lwz      r0, 0x34(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f0, r3, r0
// 	fneg     f1, f0
// 	b        lbl_801EF84C

// lbl_801EF828:
// 	lfs      f0, lbl_80519B54@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f0, f2, f0
// 	fctiwz   f0, f0
// 	stfd     f0, 0x28(r1)
// 	lwz      r0, 0x2c(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	lfsx     f1, r3, r0

// lbl_801EF84C:
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fneg     f4, f1
// 	fcmpo    cr0, f2, f0
// 	bge      lbl_801EF860
// 	fneg     f2, f2

// lbl_801EF860:
// 	lfs      f0, lbl_80519B54@sda21(r2)
// 	lis      r3, sincosTable___5JMath@ha
// 	lfs      f3, lbl_80519B10@sda21(r2)
// 	addi     r3, r3, sincosTable___5JMath@l
// 	fmuls    f1, f2, f0
// 	lfs      f0, 0xc(r1)
// 	fcmpo    cr0, f0, f3
// 	fctiwz   f0, f1
// 	stfd     f0, 0x20(r1)
// 	lwz      r0, 0x24(r1)
// 	rlwinm   r0, r0, 3, 0x12, 0x1c
// 	add      r3, r3, r0
// 	lfs      f2, 4(r3)
// 	ble      lbl_801EF8A8
// 	lfs      f0, lbl_80519B74@sda21(r2)
// 	fmuls    f2, f2, f0
// 	fmuls    f3, f3, f0
// 	fmuls    f4, f4, f0

// lbl_801EF8A8:
// 	stfs     f2, 0(r31)
// 	stfs     f3, 4(r31)
// 	stfs     f4, 8(r31)

// lbl_801EF8B4:
// 	li       r3, 1

// lbl_801EF8B8:
// 	psq_l    f31, 120(r1), 0, qr0
// 	lfd      f31, 0x70(r1)
// 	psq_l    f30, 104(r1), 0, qr0
// 	lfd      f30, 0x60(r1)
// 	psq_l    f29, 88(r1), 0, qr0
// 	lfd      f29, 0x50(r1)
// 	lwz      r31, 0x4c(r1)
// 	lwz      r30, 0x48(r1)
// 	lwz      r0, 0x84(r1)
// 	lwz      r29, 0x44(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x80
// 	blr
// 	*/
// }

// namespace Game {

// /*
//  * --INFO--
//  * Address:	801EF8EC
//  * Size:	000148
//  */
// void ItemBridge::Item::getWorkDistance(Sys::Sphere&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	addi     r5, r1, 0xc
// 	addi     r6, r1, 8
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r3
// 	bl       "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
// 	lwz      r3, 0x218(r31)
// 	lwz      r0, 0x21c(r31)
// 	cmpw     r3, r0
// 	bne      lbl_801EF924
// 	lfs      f1, lbl_80519B78@sda21(r2)
// 	b        lbl_801EFA20

// lbl_801EF924:
// 	cmpwi    r3, 0
// 	lfs      f3, lbl_80519B4C@sda21(r2)
// 	ble      lbl_801EF96C
// 	addi     r0, r3, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r31)
// 	stw      r3, 0x14(r1)
// 	lis      r3, bridgeFirstPos@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0x10(r1)
// 	addi     r3, r3, bridgeFirstPos@l
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfd      f1, 0x10(r1)
// 	lfsx     f0, r3, r0
// 	fsubs    f1, f1, f2
// 	fmadds   f3, f3, f1, f0

// lbl_801EF96C:
// 	lfs      f1, lbl_80519B38@sda21(r2)
// 	lfs      f0, 8(r1)
// 	fsubs    f3, f3, f1
// 	fsubs    f2, f0, f1
// 	fadds    f0, f1, f3
// 	stfs     f2, 8(r1)
// 	fcmpo    cr0, f2, f0
// 	ble      lbl_801EF994
// 	lfs      f1, lbl_80519B78@sda21(r2)
// 	b        lbl_801EFA20

// lbl_801EF994:
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	fcmpo    cr0, f2, f1
// 	cror     2, 1, 2
// 	bne      lbl_801EF9D8
// 	fcmpo    cr0, f2, f3
// 	cror     2, 0, 2
// 	bne      lbl_801EF9D8
// 	lfs      f2, 0xc(r1)
// 	lfs      f0, lbl_80519B5C@sda21(r2)
// 	fabs     f2, f2
// 	frsp     f2, f2
// 	fcmpo    cr0, f2, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EFA20
// 	fsubs    f1, f2, f0
// 	b        lbl_801EFA20
// 	b        lbl_801EFA20

// lbl_801EF9D8:
// 	lfs      f0, lbl_80519B60@sda21(r2)
// 	fcmpo    cr0, f2, f0
// 	bge      lbl_801EF9EC
// 	lfs      f1, lbl_80519B78@sda21(r2)
// 	b        lbl_801EFA20

// lbl_801EF9EC:
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, lbl_80519B64@sda21(r2)
// 	fabs     f1, f1
// 	frsp     f1, f1
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EFA10
// 	lfs      f1, lbl_80519B78@sda21(r2)
// 	b        lbl_801EFA20

// lbl_801EFA10:
// 	lfs      f0, 8(r1)
// 	fsubs    f0, f0, f3
// 	fabs     f0, f0
// 	frsp     f1, f0

// lbl_801EFA20:
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EFA34
//  * Size:	000448
//  */
// void ItemBridge::Item::interactAttack(Game::InteractAttack&)
// {
// 	/*
// 	stwu     r1, -0x110(r1)
// 	mflr     r0
// 	stw      r0, 0x114(r1)
// 	stfd     f31, 0x100(r1)
// 	psq_st   f31, 264(r1), 0, qr0
// 	stw      r31, 0xfc(r1)
// 	stw      r30, 0xf8(r1)
// 	mr       r31, r3
// 	mr       r30, r4
// 	addi     r3, r31, 0x1e0
// 	bl       event__Q24Game11TSoundEventFv
// 	cmpwi    r3, 2
// 	beq      lbl_801EFB20
// 	bge      lbl_801EFA78
// 	cmpwi    r3, 1
// 	bge      lbl_801EFA84
// 	b        lbl_801EFB20

// lbl_801EFA78:
// 	cmpwi    r3, 4
// 	bge      lbl_801EFB20
// 	b        lbl_801EFAD4

// lbl_801EFA84:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	cmpwi    r3, 0xa
// 	beq      lbl_801EFABC
// 	lis      r3, lbl_80481234@ha
// 	lis      r5, lbl_80481260@ha
// 	addi     r3, r3, lbl_80481234@l
// 	li       r4, 0x339
// 	addi     r5, r5, lbl_80481260@l
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801EFABC:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x88(r12)
// 	mtctr    r12
// 	bctrl
// 	b        lbl_801EFB20

// lbl_801EFAD4:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	cmpwi    r3, 0xa
// 	beq      lbl_801EFB0C
// 	lis      r3, lbl_80481234@ha
// 	lis      r5, lbl_80481260@ha
// 	addi     r3, r3, lbl_80481234@l
// 	li       r4, 0x340
// 	addi     r5, r5, lbl_80481260@l
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801EFB0C:
// 	lwz      r3, 0x17c(r31)
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x8c(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801EFB20:
// 	lbz      r0, 0x1f8(r31)
// 	cmplwi   r0, 0
// 	beq      lbl_801EFB34
// 	li       r3, 1
// 	b        lbl_801EFE5C

// lbl_801EFB34:
// 	lwz      r4, 0x218(r31)
// 	lwz      r0, 0x21c(r31)
// 	cmpw     r4, r0
// 	bne      lbl_801EFB4C
// 	li       r3, 0
// 	b        lbl_801EFE5C

// lbl_801EFB4C:
// 	lwz      r3, 0x220(r31)
// 	slwi     r0, r4, 2
// 	lfs      f1, 8(r30)
// 	lfsx     f2, r3, r0
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	fsubs    f1, f2, f1
// 	stfsx    f1, r3, r0
// 	lfsx     f1, r3, r0
// 	fcmpo    cr0, f1, f0
// 	cror     2, 0, 2
// 	bne      lbl_801EFE58
// 	lwz      r30, 0x218(r31)
// 	lfs      f31, lbl_80519B4C@sda21(r2)
// 	cmpwi    r30, 0
// 	ble      lbl_801EFBC4
// 	addi     r0, r30, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r31)
// 	stw      r3, 0xd4(r1)
// 	lis      r3, bridgeFirstPos@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0xd0(r1)
// 	addi     r3, r3, bridgeFirstPos@l
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfd      f1, 0xd0(r1)
// 	lfsx     f0, r3, r0
// 	fsubs    f1, f1, f2
// 	fmadds   f31, f3, f1, f0

// lbl_801EFBC4:
// 	lfs      f0, lbl_80519B38@sda21(r2)
// 	mr       r4, r31
// 	addi     r3, r1, 0x14
// 	fsubs    f31, f31, f0
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f2, 0x14(r1)
// 	cmpwi    r30, 1
// 	lfs      f1, 0x18(r1)
// 	lfs      f0, 0x1c(r1)
// 	fmuls    f4, f2, f31
// 	lfs      f5, 0x19c(r31)
// 	fmuls    f2, f1, f31
// 	lfs      f3, 0x1a0(r31)
// 	fmuls    f0, f0, f31
// 	lfs      f1, 0x1a4(r31)
// 	fadds    f4, f5, f4
// 	fadds    f3, f3, f2
// 	fadds    f5, f1, f0
// 	blt      lbl_801EFC48
// 	addi     r0, r30, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r31)
// 	stw      r3, 0xdc(r1)
// 	lis      r3, bridgeGrad@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0xd8(r1)
// 	addi     r3, r3, bridgeGrad@l
// 	lfsx     f0, r3, r0
// 	lfd      f1, 0xd8(r1)
// 	fsubs    f1, f1, f2
// 	fmadds   f3, f1, f0, f3

// lbl_801EFC48:
// 	stfs     f4, 0x64(r1)
// 	addi     r3, r1, 0xa0
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	addi     r4, r1, 0x64
// 	stfs     f3, 0x68(r1)
// 	addi     r5, r1, 0x58
// 	stfs     f5, 0x6c(r1)
// 	lfs      f1, 0x1f4(r31)
// 	stfs     f0, 0x58(r1)
// 	stfs     f1, 0x5c(r1)
// 	stfs     f0, 0x60(r1)
// 	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
// 	lis      r4, __vt__Q23efx5TBase@ha
// 	lis      r3, __vt__Q23efx8TSimple1@ha
// 	addi     r0, r4, __vt__Q23efx5TBase@l
// 	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
// 	stw      r0, 0x48(r1)
// 	addi     r0, r3, __vt__Q23efx8TSimple1@l
// 	lis      r3, __vt__Q23efx10TBridgeSet@ha
// 	addi     r5, r1, 0xa0
// 	stw      r0, 0x48(r1)
// 	addi     r0, r4, __vt__Q23efx11TSimpleMtx1@l
// 	li       r7, 0x11
// 	li       r6, 0
// 	stw      r0, 0x48(r1)
// 	addi     r0, r3, __vt__Q23efx10TBridgeSet@l
// 	addi     r3, r1, 0x48
// 	li       r4, 0
// 	sth      r7, 0x4c(r1)
// 	stw      r6, 0x50(r1)
// 	stw      r5, 0x54(r1)
// 	stw      r0, 0x48(r1)
// 	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
// 	lwz      r3, 0x1f0(r31)
// 	lfs      f31, lbl_80519B4C@sda21(r2)
// 	addi     r0, r3, 0x8c
// 	stw      r0, 0x1f0(r31)
// 	lwz      r3, 0x218(r31)
// 	addic.   r30, r3, 1
// 	ble      lbl_801EFD24
// 	addi     r0, r30, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r31)
// 	stw      r3, 0xe4(r1)
// 	lis      r3, bridgeFirstPos@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0xe0(r1)
// 	addi     r3, r3, bridgeFirstPos@l
// 	lfs      f3, lbl_80519B48@sda21(r2)
// 	lfd      f1, 0xe0(r1)
// 	lfsx     f0, r3, r0
// 	fsubs    f1, f1, f2
// 	fmadds   f31, f3, f1, f0

// lbl_801EFD24:
// 	lfs      f0, lbl_80519B38@sda21(r2)
// 	mr       r4, r31
// 	addi     r3, r1, 8
// 	fsubs    f31, f31, f0
// 	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
// 	lfs      f2, 8(r1)
// 	cmpwi    r30, 1
// 	lfs      f1, 0xc(r1)
// 	lfs      f0, 0x10(r1)
// 	fmuls    f4, f2, f31
// 	lfs      f5, 0x19c(r31)
// 	fmuls    f2, f1, f31
// 	lfs      f3, 0x1a0(r31)
// 	fmuls    f0, f0, f31
// 	lfs      f1, 0x1a4(r31)
// 	fadds    f4, f5, f4
// 	fadds    f3, f3, f2
// 	fadds    f5, f1, f0
// 	blt      lbl_801EFDA8
// 	addi     r0, r30, -1
// 	lis      r4, 0x4330
// 	xoris    r3, r0, 0x8000
// 	lhz      r0, 0x214(r31)
// 	stw      r3, 0xec(r1)
// 	lis      r3, bridgeGrad@ha
// 	lfd      f2, lbl_80519B40@sda21(r2)
// 	slwi     r0, r0, 2
// 	stw      r4, 0xe8(r1)
// 	addi     r3, r3, bridgeGrad@l
// 	lfsx     f0, r3, r0
// 	lfd      f1, 0xe8(r1)
// 	fsubs    f1, f1, f2
// 	fmadds   f3, f1, f0, f3

// lbl_801EFDA8:
// 	stfs     f4, 0x3c(r1)
// 	addi     r3, r1, 0x70
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	addi     r4, r1, 0x3c
// 	stfs     f3, 0x40(r1)
// 	addi     r5, r1, 0x30
// 	stfs     f5, 0x44(r1)
// 	lfs      f1, 0x1f4(r31)
// 	stfs     f0, 0x30(r1)
// 	stfs     f1, 0x34(r1)
// 	stfs     f0, 0x38(r1)
// 	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
// 	lis      r4, __vt__Q23efx5TBase@ha
// 	lis      r3, __vt__Q23efx8TSimple1@ha
// 	addi     r0, r4, __vt__Q23efx5TBase@l
// 	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
// 	stw      r0, 0x20(r1)
// 	addi     r0, r3, __vt__Q23efx8TSimple1@l
// 	lis      r3, __vt__Q23efx10TBridgeSet@ha
// 	addi     r5, r1, 0x70
// 	stw      r0, 0x20(r1)
// 	addi     r0, r4, __vt__Q23efx11TSimpleMtx1@l
// 	li       r7, 0x11
// 	li       r6, 0
// 	stw      r0, 0x20(r1)
// 	addi     r0, r3, __vt__Q23efx10TBridgeSet@l
// 	addi     r3, r1, 0x20
// 	li       r4, 0
// 	sth      r7, 0x24(r1)
// 	stw      r6, 0x28(r1)
// 	stw      r5, 0x2c(r1)
// 	stw      r0, 0x20(r1)
// 	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
// 	lwz      r5, 0x1f0(r31)
// 	li       r0, 0x28
// 	mr       r3, r31
// 	li       r4, 0x3801
// 	addi     r5, r5, 0x3c
// 	stw      r5, 0x1f0(r31)
// 	stb      r0, 0x1f8(r31)
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x1c0(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801EFE58:
// 	li       r3, 1

// lbl_801EFE5C:
// 	psq_l    f31, 264(r1), 0, qr0
// 	lwz      r0, 0x114(r1)
// 	lfd      f31, 0x100(r1)
// 	lwz      r31, 0xfc(r1)
// 	lwz      r30, 0xf8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x110
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EFE7C
//  * Size:	0000F0
//  */
// void ItemBridge::Item::interactBreakBridge(Game::InteractBreakBridge&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lbz      r0, 0x1f8(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_801EFEA8
// 	lwz      r5, 0x218(r31)
// 	cmpwi    r5, 0
// 	bne      lbl_801EFEB0

// lbl_801EFEA8:
// 	li       r3, 0
// 	b        lbl_801EFF58

// lbl_801EFEB0:
// 	addi     r0, r5, -1
// 	lwz      r5, 0x220(r31)
// 	slwi     r0, r0, 2
// 	lfs      f0, 8(r4)
// 	lfsx     f1, r5, r0
// 	fadds    f0, f1, f0
// 	stfsx    f0, r5, r0
// 	lwz      r4, mgr__Q24Game10ItemBridge@sda21(r13)
// 	lfsx     f1, r5, r0
// 	lwz      r4, 0x90(r4)
// 	lfs      f0, 0x100(r4)
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_801EFF54
// 	stfsx    f0, r5, r0
// 	lwz      r4, 0x218(r31)
// 	addi     r4, r4, -1
// 	bl       setCurrStage__Q34Game10ItemBridge4ItemFi
// 	mr       r3, r31
// 	li       r4, 1
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0xac(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r3, 0x1fc(r31)
// 	cmplwi   r3, 0
// 	beq      lbl_801EFF54
// 	lwz      r0, 0x200(r31)
// 	cmplwi   r0, 0
// 	beq      lbl_801EFF54
// 	li       r4, 0
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r31)
// 	li       r4, 0
// 	bl       setOpen__Q24Game8WayPointFb
// 	lwz      r3, 0x1fc(r31)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb
// 	lwz      r3, 0x200(r31)
// 	li       r4, 0
// 	bl       setWater__Q24Game8WayPointFb

// lbl_801EFF54:
// 	li       r3, 0

// lbl_801EFF58:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000008
//  */
// void ItemBridge::Item::getWorkRadius(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	801EFF6C
//  * Size:	00004C
//  */
// void ItemBridge::Mgr::generatorNewItemParm(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	li       r3, 8
// 	stw      r0, 0x14(r1)
// 	bl       __nw__FUl
// 	cmplwi   r3, 0
// 	beq      lbl_801EFFA8
// 	lis      r5, __vt__Q24Game11GenItemParm@ha
// 	lis      r4, __vt__13GenBridgeParm@ha
// 	addi     r5, r5, __vt__Q24Game11GenItemParm@l
// 	li       r0, 0
// 	stw      r5, 0(r3)
// 	addi     r4, r4, __vt__13GenBridgeParm@l
// 	stw      r4, 0(r3)
// 	sth      r0, 4(r3)

// lbl_801EFFA8:
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801EFFB8
//  * Size:	000088
//  */
// void ItemBridge::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r3, lbl_80481228@ha
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	addi     r31, r3, lbl_80481228@l
// 	stw      r30, 0x18(r1)
// 	or.      r30, r5, r5
// 	stw      r29, 0x14(r1)
// 	mr       r29, r4
// 	bne      lbl_801EFFF8
// 	addi     r3, r31, 0xc
// 	addi     r5, r31, 0x38
// 	li       r4, 0x3ac
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801EFFF8:
// 	lwz      r4, 0x414(r29)
// 	mr       r3, r29
// 	bl       textWriteTab__6StreamFi
// 	lhz      r0, 4(r30)
// 	mr       r3, r29
// 	extsh    r4, r0
// 	bl       writeShort__6StreamFs
// 	mr       r3, r29
// 	addi     r4, r31, 0x44
// 	crclr    6
// 	bl       textWriteText__6StreamFPce
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0040
//  * Size:	000088
//  */
// void ItemBridge::Mgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r6
// 	stw      r30, 0x18(r1)
// 	or.      r30, r5, r5
// 	stw      r29, 0x14(r1)
// 	mr       r29, r4
// 	bne      lbl_801F0084
// 	lis      r3, lbl_80481234@ha
// 	lis      r5, lbl_80481260@ha
// 	addi     r3, r3, lbl_80481234@l
// 	li       r4, 0x3b6
// 	addi     r5, r5, lbl_80481260@l
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F0084:
// 	lis      r3, 0x30303031@ha
// 	addi     r0, r3, 0x30303031@l
// 	cmplw    r31, r0
// 	blt      lbl_801F00A4
// 	mr       r3, r29
// 	bl       readShort__6StreamFv
// 	sth      r3, 4(r30)
// 	b        lbl_801F00AC

// lbl_801F00A4:
// 	li       r0, 0
// 	sth      r0, 4(r30)

// lbl_801F00AC:
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F00C8
//  * Size:	000130
//  */
// ItemBridge::Mgr::Mgr(void)
// {
// 	/*
// 	stwu     r1, -0x440(r1)
// 	mflr     r0
// 	stw      r0, 0x444(r1)
// 	extsh.   r0, r4
// 	lis      r4, lbl_80481228@ha
// 	stw      r31, 0x43c(r1)
// 	addi     r31, r4, lbl_80481228@l
// 	stw      r30, 0x438(r1)
// 	mr       r30, r3
// 	beq      lbl_801F00F8
// 	addi     r0, r30, 0x94
// 	stw      r0, 4(r30)

// lbl_801F00F8:
// 	mr       r3, r30
// 	li       r4, 0
// 	bl       __ct__Q24Game12TNodeItemMgrFv
// 	lis      r3, __vt__Q34Game10ItemBridge3Mgr@ha
// 	addi     r0, r2, lbl_80519B7C@sda21
// 	addi     r4, r3, __vt__Q34Game10ItemBridge3Mgr@l
// 	mr       r3, r30
// 	stw      r4, 0(r30)
// 	addi     r5, r4, 0x74
// 	li       r4, 3
// 	stw      r5, 0x30(r30)
// 	stw      r0, 8(r30)
// 	bl       setModelSize__Q24Game11BaseItemMgrFi
// 	addi     r0, r31, 0x54
// 	li       r3, 0x114
// 	stw      r0, 0x28(r30)
// 	bl       __nw__FUl
// 	or.      r0, r3, r3
// 	beq      lbl_801F014C
// 	bl       __ct__Q34Game10ItemBridge11BridgeParmsFv
// 	mr       r0, r3

// lbl_801F014C:
// 	stw      r0, 0x90(r30)
// 	addi     r3, r31, 0x70
// 	bl       DVDConvertPathToEntrynum
// 	addi     r3, r31, 0x90
// 	bl       DVDConvertPathToEntrynum
// 	li       r0, 0
// 	addi     r3, r31, 0x70
// 	stw      r0, 8(r1)
// 	li       r4, 0
// 	li       r5, 0
// 	li       r6, 0
// 	li       r7, 0
// 	li       r8, 2
// 	li       r9, 0
// 	li       r10, 0
// 	bl
// loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
// 	or.      r31, r3, r3
// 	beq      lbl_801F01DC
// 	mr       r4, r31
// 	addi     r3, r1, 0x10
// 	li       r5, -1
// 	bl       __ct__9RamStreamFPvi
// 	li       r0, 1
// 	cmpwi    r0, 1
// 	stw      r0, 0x1c(r1)
// 	bne      lbl_801F01BC
// 	li       r0, 0
// 	stw      r0, 0x424(r1)

// lbl_801F01BC:
// 	lwz      r3, 0x90(r30)
// 	addi     r4, r1, 0x10
// 	lwz      r12, 0xd8(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r3, r31
// 	bl       __dla__FPv

// lbl_801F01DC:
// 	lwz      r0, 0x444(r1)
// 	mr       r3, r30
// 	lwz      r31, 0x43c(r1)
// 	lwz      r30, 0x438(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x440
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F01F8
//  * Size:	000024
//  */
// void ItemBridge::BridgeParms::read(Stream&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	addi     r3, r3, 0xdc
// 	stw      r0, 0x14(r1)
// 	bl       read__10ParametersFR6Stream
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F021C
//  * Size:	0001EC
//  */
// ItemBridge::BridgeParms::BridgeParms(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r5, 0x73303030@ha
// 	lis      r4, __vt__Q24Game13CreatureParms@ha
// 	stw      r0, 0x14(r1)
// 	addi     r0, r4, __vt__Q24Game13CreatureParms@l
// 	addi     r5, r5, 0x73303030@l
// 	stw      r31, 0xc(r1)
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	lis      r3, lbl_80481228@ha
// 	stw      r0, 0xd8(r30)
// 	addi     r31, r3, lbl_80481228@l
// 	addi     r0, r30, 0xd4
// 	li       r3, 0
// 	stw      r0, 0(r30)
// 	addi     r0, r31, 0xb0
// 	mr       r4, r30
// 	addi     r6, r31, 0xc4
// 	stw      r3, 4(r30)
// 	addi     r3, r30, 0xc
// 	stw      r0, 8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303031@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519B84@sda21(r2)
// 	stw      r0, 0xc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	addi     r3, r30, 0x34
// 	stfs     f0, 0x24(r30)
// 	addi     r5, r5, 0x73303031@l
// 	lfs      f0, lbl_80519B24@sda21(r2)
// 	addi     r6, r31, 0xd8
// 	stfs     f1, 0x2c(r30)
// 	stfs     f0, 0x30(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303032@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519B84@sda21(r2)
// 	stw      r0, 0x34(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	addi     r3, r30, 0x5c
// 	stfs     f0, 0x4c(r30)
// 	addi     r5, r5, 0x73303032@l
// 	lfs      f0, lbl_80519B24@sda21(r2)
// 	addi     r6, r31, 0xe8
// 	stfs     f1, 0x54(r30)
// 	stfs     f0, 0x58(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303033@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519B88@sda21(r2)
// 	stw      r0, 0x5c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	addi     r3, r30, 0x84
// 	stfs     f0, 0x74(r30)
// 	addi     r5, r5, 0x73303033@l
// 	lfs      f0, lbl_80519B24@sda21(r2)
// 	addi     r6, r2, lbl_80519B8C@sda21
// 	stfs     f1, 0x7c(r30)
// 	stfs     f0, 0x80(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303034@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519B94@sda21(r2)
// 	stw      r0, 0x84(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519B98@sda21(r2)
// 	addi     r3, r30, 0xac
// 	stfs     f0, 0x9c(r30)
// 	addi     r5, r5, 0x73303034@l
// 	lfs      f0, lbl_80519B9C@sda21(r2)
// 	addi     r6, r31, 0xf8
// 	stfs     f1, 0xa4(r30)
// 	stfs     f0, 0xa8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r4, "__vt__7Parm<f>"@ha
// 	lis      r3, __vt__Q34Game10ItemBridge11BridgeParms@ha
// 	addi     r0, r4, "__vt__7Parm<f>"@l
// 	lis      r5, 0x70303030@ha
// 	stw      r0, 0xac(r30)
// 	addi     r9, r3, __vt__Q34Game10ItemBridge11BridgeParms@l
// 	lfs      f0, lbl_80519BA0@sda21(r2)
// 	addi     r8, r30, 0x110
// 	lfs      f1, lbl_80519B98@sda21(r2)
// 	li       r7, 0
// 	stfs     f0, 0xc4(r30)
// 	addi     r0, r31, 0x108
// 	lfs      f0, lbl_80519B9C@sda21(r2)
// 	addi     r3, r30, 0xe8
// 	stfs     f1, 0xcc(r30)
// 	addi     r4, r30, 0xdc
// 	addi     r5, r5, 0x70303030@l
// 	addi     r6, r2, lbl_80519BA4@sda21
// 	stfs     f0, 0xd0(r30)
// 	stw      r9, 0xd8(r30)
// 	stw      r8, 0xdc(r30)
// 	stw      r7, 0xe0(r30)
// 	stw      r0, 0xe4(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lfs      f2, lbl_80519B28@sda21(r2)
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f1, lbl_80519B10@sda21(r2)
// 	stw      r0, 0xe8(r30)
// 	mr       r3, r30
// 	lfs      f0, lbl_80519BAC@sda21(r2)
// 	stfs     f2, 0x100(r30)
// 	stfs     f1, 0x108(r30)
// 	stfs     f0, 0x10c(r30)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0408
//  * Size:	000118
//  */
// void ItemBridge::Mgr::birth(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	li       r3, 0x224
// 	bl       __nw__FUl
// 	or.      r31, r3, r3
// 	beq      lbl_801F04F8
// 	li       r4, 0x40d
// 	bl       __ct__Q24Game8BaseItemFi
// 	lis      r3,
// "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
// 	li       r0, 0
// 	addi     r4, r3,
// "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
// 	li       r3, 0x1c
// 	stw      r4, 0(r31)
// 	addi     r4, r4, 0x1b0
// 	stw      r4, 0x178(r31)
// 	stw      r0, 0x1d8(r31)
// 	stw      r0, 0x1dc(r31)
// 	bl       __nw__FUl
// 	cmplwi   r3, 0
// 	beq      lbl_801F0494
// 	lis      r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@ha
// 	lis      r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@ha
// 	addi     r0, r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@l
// 	lis      r4, __vt__Q34Game10ItemBridge3FSM@ha
// 	stw      r0, 0(r3)
// 	li       r6, -1
// 	addi     r5, r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@l
// 	addi     r0, r4, __vt__Q34Game10ItemBridge3FSM@l
// 	stw      r6, 0x18(r3)
// 	stw      r5, 0(r3)
// 	stw      r0, 0(r3)

// lbl_801F0494:
// 	stw      r3, 0x1d8(r31)
// 	mr       r4, r31
// 	lwz      r3, 0x1d8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	lis      r4,
// "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
// 	addi     r3, r31, 0x1e0
// 	addi     r4, r4,
// "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
// 	stw      r4, 0(r31)
// 	addi     r0, r4, 0x1b0
// 	stw      r0, 0x178(r31)
// 	bl       __ct__Q24Game11TSoundEventFv
// 	lis      r4, __vt__Q34Game10ItemBridge4Item@ha
// 	addi     r3, r31, 0x204
// 	addi     r4, r4, __vt__Q34Game10ItemBridge4Item@l
// 	stw      r4, 0(r31)
// 	addi     r0, r4, 0x1b0
// 	stw      r0, 0x178(r31)
// 	bl       __ct__Q24Game20PlatInstanceAttacherFv
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	li       r0, 0
// 	stfs     f0, 0x118(r31)
// 	stw      r0, 0x218(r31)

// lbl_801F04F8:
// 	mr       r3, r30
// 	mr       r4, r31
// 	bl       entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0520
//  * Size:	0000A8
//  */
// void generatorBirth__Q34Game10ItemBridge3MgrFR10Vector3f R10Vector3f PQ24Game11GenItemParm(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r8, 0x804B
// 	  lis       r7, 0x804C
// 	  stw       r0, 0x24(r1)
// 	  subi      r8, r8, 0x5D0C
// 	  li        r0, 0
// 	  subi      r7, r7, 0x4C70
// 	  stw       r31, 0x1C(r1)
// 	  cmplwi    r6, 0
// 	  stw       r30, 0x18(r1)
// 	  mr        r30, r5
// 	  stw       r29, 0x14(r1)
// 	  mr        r29, r4
// 	  stw       r8, 0x8(r1)
// 	  stw       r7, 0x8(r1)
// 	  sth       r0, 0xC(r1)
// 	  beq-      .loc_0x50
// 	  lhz       r0, 0x4(r6)
// 	  sth       r0, 0xC(r1)

// 	.loc_0x50:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0xBC(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  addi      r4, r1, 0x8
// 	  mr        r31, r3
// 	  bl        -0xB55C0
// 	  lfs       f1, 0x4(r30)
// 	  bl        0x221640
// 	  stfs      f1, 0x1F4(r31)
// 	  mr        r3, r31
// 	  mr        r4, r29
// 	  li        r5, 0
// 	  bl        -0xB53FC
// 	  lwz       r0, 0x24(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  lwz       r29, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F05C8
//  * Size:	000260
//  */
// void ItemBridge::Mgr::onLoadResources(void)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, lbl_80481228@ha
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	addi     r31, r4, lbl_80481228@l
// 	stw      r30, 0x18(r1)
// 	mr       r30, r3
// 	li       r3, 0xc
// 	stw      r29, 0x14(r1)
// 	stw      r28, 0x10(r1)
// 	bl       __nwa__FUl
// 	stw      r3, 0x88(r30)
// 	li       r6, 0
// 	addi     r0, r31, 0x118
// 	mr       r3, r30
// 	lwz      r5, 0x88(r30)
// 	addi     r4, r2, lbl_80519BB0@sda21
// 	stw      r6, 0(r5)
// 	lwz      r5, 0x88(r30)
// 	stw      r6, 4(r5)
// 	lwz      r5, 0x88(r30)
// 	stw      r6, 8(r5)
// 	stw      r0, 0x28(r30)
// 	bl       loadArchive__Q24Game11BaseItemMgrFPc
// 	mr       r3, r30
// 	addi     r4, r31, 0x134
// 	li       r5, 0
// 	lis      r6, 2
// 	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
// 	addi     r0, r31, 0x144
// 	mr       r3, r30
// 	stw      r0, 0x28(r30)
// 	addi     r4, r2, lbl_80519BB0@sda21
// 	bl       loadArchive__Q24Game11BaseItemMgrFPc
// 	mr       r3, r30
// 	addi     r4, r31, 0x160
// 	li       r5, 1
// 	lis      r6, 2
// 	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
// 	addi     r0, r31, 0x16c
// 	mr       r3, r30
// 	stw      r0, 0x28(r30)
// 	addi     r4, r2, lbl_80519BB0@sda21
// 	bl       loadArchive__Q24Game11BaseItemMgrFPc
// 	mr       r3, r30
// 	addi     r4, r31, 0x188
// 	li       r5, 2
// 	lis      r6, 2
// 	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
// 	li       r28, 0
// 	li       r29, 0

// lbl_801F0698:
// 	lwz      r3, 0x1c(r30)
// 	lis      r4, 4
// 	lwzx     r3, r3, r29
// 	bl       newSharedDisplayList__12J3DModelDataFUl
// 	lwz      r3, 0x1c(r30)
// 	lwzx     r3, r3, r29
// 	bl       makeSharedDL__12J3DModelDataFv
// 	addi     r28, r28, 1
// 	addi     r29, r29, 4
// 	cmpwi    r28, 3
// 	blt      lbl_801F0698
// 	addi     r3, r1, 8
// 	li       r4, 3
// 	li       r5, 0
// 	li       r6, 1
// 	bl       setCode__Q27MapCode4CodeFiib
// 	addi     r0, r31, 0x118
// 	mr       r3, r30
// 	stw      r0, 0x28(r30)
// 	addi     r4, r31, 0x198
// 	bl       openTextArc__Q24Game11BaseItemMgrFPc
// 	mr       r0, r3
// 	mr       r3, r30
// 	mr       r28, r0
// 	addi     r5, r31, 0x1a4
// 	mr       r4, r28
// 	bl       loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
// 	lwz      r5, 0x88(r30)
// 	addi     r4, r1, 8
// 	stw      r3, 0(r5)
// 	lwz      r3, 0x88(r30)
// 	lwz      r3, 0(r3)
// 	bl       setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
// 	mr       r3, r30
// 	mr       r4, r28
// 	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
// 	addi     r0, r31, 0x144
// 	mr       r3, r30
// 	stw      r0, 0x28(r30)
// 	addi     r4, r31, 0x198
// 	bl       openTextArc__Q24Game11BaseItemMgrFPc
// 	mr       r0, r3
// 	mr       r3, r30
// 	mr       r28, r0
// 	addi     r5, r31, 0x1a4
// 	mr       r4, r28
// 	bl       loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
// 	lwz      r5, 0x88(r30)
// 	addi     r4, r1, 8
// 	stw      r3, 4(r5)
// 	lwz      r3, 0x88(r30)
// 	lwz      r3, 4(r3)
// 	bl       setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
// 	mr       r3, r30
// 	mr       r4, r28
// 	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
// 	addi     r0, r31, 0x16c
// 	mr       r3, r30
// 	stw      r0, 0x28(r30)
// 	addi     r4, r31, 0x198
// 	bl       openTextArc__Q24Game11BaseItemMgrFPc
// 	mr       r0, r3
// 	mr       r3, r30
// 	mr       r28, r0
// 	addi     r5, r31, 0x1a4
// 	mr       r4, r28
// 	bl       loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
// 	lwz      r5, 0x88(r30)
// 	addi     r4, r1, 8
// 	stw      r3, 8(r5)
// 	lwz      r3, 0x88(r30)
// 	lwz      r3, 8(r3)
// 	bl       setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
// 	mr       r3, r30
// 	mr       r4, r28
// 	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
// 	li       r3, 0x40
// 	bl       __nwa__FUl
// 	lis      r4, __ct__Q34Game10ItemBridge10BridgeInfoFv@ha
// 	li       r5, 0
// 	addi     r4, r4, __ct__Q34Game10ItemBridge10BridgeInfoFv@l
// 	li       r6, 0x10
// 	li       r7, 3
// 	bl       __construct_new_array
// 	stw      r3, 0x8c(r30)
// 	li       r28, 0

// lbl_801F07F0:
// 	mr       r3, r30
// 	mr       r4, r28
// 	bl       createBridgeInfo__Q34Game10ItemBridge3MgrFi
// 	addi     r28, r28, 1
// 	cmpwi    r28, 3
// 	blt      lbl_801F07F0
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0828
//  * Size:	00001C
//  */
// ItemBridge::BridgeInfo::BridgeInfo(void)
// {
// 	/*
// 	li       r4, 0
// 	li       r0, -1
// 	stw      r4, 0(r3)
// 	stw      r4, 4(r3)
// 	stw      r4, 8(r3)
// 	stw      r0, 0xc(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0844
//  * Size:	000078
//  */
// void ItemBridge::Mgr::getBridgeInfo(int)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	li       r0, 0
// 	stw      r31, 0xc(r1)
// 	or.      r31, r4, r4
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	blt      lbl_801F0874
// 	cmpwi    r31, 3
// 	bge      lbl_801F0874
// 	li       r0, 1

// lbl_801F0874:
// 	clrlwi.  r0, r0, 0x18
// 	bne      lbl_801F0898
// 	lis      r3, lbl_80481234@ha
// 	lis      r5, lbl_80481260@ha
// 	addi     r3, r3, lbl_80481234@l
// 	li       r4, 0x467
// 	addi     r5, r5, lbl_80481260@l
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F0898:
// 	lwz      r3, 0x8c(r30)
// 	slwi     r0, r31, 4
// 	add      r3, r3, r0
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F08BC
//  * Size:	00020C
//  */
// void ItemBridge::Mgr::createBridgeInfo(int)
// {
// 	/*
// 	stwu     r1, -0x230(r1)
// 	mflr     r0
// 	stw      r0, 0x234(r1)
// 	li       r0, 0
// 	stmw     r25, 0x214(r1)
// 	or.      r25, r4, r4
// 	lis      r4, lbl_80481228@ha
// 	mr       r26, r3
// 	addi     r31, r4, lbl_80481228@l
// 	blt      lbl_801F08F0
// 	cmpwi    r25, 3
// 	bge      lbl_801F08F0
// 	li       r0, 1

// lbl_801F08F0:
// 	clrlwi.  r0, r0, 0x18
// 	bne      lbl_801F090C
// 	addi     r3, r31, 0xc
// 	addi     r5, r31, 0x38
// 	li       r4, 0x46d
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F090C:
// 	lwz      r3, 0x1c(r26)
// 	slwi     r0, r25, 2
// 	lwzx     r29, r3, r0
// 	cmplwi   r29, 0
// 	bne      lbl_801F0934
// 	addi     r3, r31, 0xc
// 	addi     r5, r31, 0x38
// 	li       r4, 0x46f
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F0934:
// 	li       r28, 0
// 	li       r30, 0

// lbl_801F093C:
// 	mr       r5, r30
// 	addi     r3, r1, 8
// 	addi     r4, r31, 0x1b4
// 	crclr    6
// 	bl       sprintf
// 	lwz      r3, 0x54(r29)
// 	addi     r4, r1, 8
// 	bl       getIndex__10JUTNameTabCFPCc
// 	clrlwi   r0, r3, 0x10
// 	cmplwi   r0, 0xffff
// 	beq      lbl_801F096C
// 	addi     r28, r28, 1

// lbl_801F096C:
// 	addi     r30, r30, 1
// 	cmpwi    r30, 0x20
// 	blt      lbl_801F093C
// 	srwi     r3, r28, 0x1f
// 	clrlwi   r0, r28, 0x1f
// 	xor      r0, r0, r3
// 	subf.    r0, r3, r0
// 	beq      lbl_801F09A0
// 	addi     r3, r31, 0xc
// 	addi     r5, r31, 0x38
// 	li       r4, 0x47a
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F09A0:
// 	srwi     r0, r28, 0x1f
// 	lwz      r5, 0x8c(r26)
// 	slwi     r4, r25, 4
// 	slwi     r3, r28, 1
// 	add      r0, r0, r28
// 	add      r27, r5, r4
// 	srawi    r0, r0, 1
// 	stw      r0, 0(r27)
// 	stw      r28, 4(r27)
// 	bl       __nwa__FUl
// 	stw      r3, 8(r27)
// 	li       r26, 0
// 	li       r30, 0
// 	b        lbl_801F0A4C

// lbl_801F09D8:
// 	mr       r5, r26
// 	addi     r3, r1, 8
// 	addi     r4, r31, 0x1b4
// 	crclr    6
// 	bl       sprintf
// 	lwz      r3, 0x54(r29)
// 	addi     r4, r1, 8
// 	bl       getIndex__10JUTNameTabCFPCc
// 	extsh    r0, r3
// 	lwz      r4, 8(r27)
// 	cmpwi    r0, -1
// 	sthx     r3, r4, r30
// 	bne      lbl_801F0A44
// 	li       r25, 0
// 	b        lbl_801F0A24

// lbl_801F0A14:
// 	lwz      r3, 0x54(r29)
// 	clrlwi   r4, r25, 0x10
// 	bl       getName__10JUTNameTabCFUs
// 	addi     r25, r25, 1

// lbl_801F0A24:
// 	lhz      r0, 0x2c(r29)
// 	cmpw     r25, r0
// 	blt      lbl_801F0A14
// 	addi     r3, r31, 0xc
// 	addi     r5, r31, 0x1c0
// 	li       r4, 0x48b
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F0A44:
// 	addi     r30, r30, 2
// 	addi     r26, r26, 1

// lbl_801F0A4C:
// 	cmpw     r26, r28
// 	blt      lbl_801F09D8
// 	lwz      r3, 0x54(r29)
// 	addi     r4, r2, lbl_80519BB8@sda21
// 	bl       getIndex__10JUTNameTabCFPCc
// 	extsh    r0, r3
// 	cmpwi    r0, -1
// 	beq      lbl_801F0A74
// 	stw      r0, 0xc(r27)
// 	b        lbl_801F0AB4

// lbl_801F0A74:
// 	li       r0, -1
// 	li       r25, 0
// 	stw      r0, 0xc(r27)
// 	b        lbl_801F0A94

// lbl_801F0A84:
// 	lwz      r3, 0x54(r29)
// 	clrlwi   r4, r25, 0x10
// 	bl       getName__10JUTNameTabCFUs
// 	addi     r25, r25, 1

// lbl_801F0A94:
// 	lhz      r0, 0x2c(r29)
// 	cmpw     r25, r0
// 	blt      lbl_801F0A84
// 	addi     r3, r31, 0xc
// 	addi     r5, r31, 0x1e0
// 	li       r4, 0x49c
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_801F0AB4:
// 	lmw      r25, 0x214(r1)
// 	lwz      r0, 0x234(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x230
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0AC8
//  * Size:	0001A0
//  */
// void ItemBridge::Mgr::setupPlatInstanceAttacher(Game::ItemBridge::Item*, Game::PlatInstanceAttacher&)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x50(r1)
// 	  mflr      r0
// 	  stw       r0, 0x54(r1)
// 	  stw       r31, 0x4C(r1)
// 	  stw       r30, 0x48(r1)
// 	  mr        r30, r5
// 	  stw       r29, 0x44(r1)
// 	  mr        r29, r4
// 	  stw       r28, 0x40(r1)
// 	  mr        r28, r3
// 	  lhz       r0, 0x214(r4)
// 	  cmplwi    r0, 0x3
// 	  blt-      .loc_0x50
// 	  lis       r3, 0x8048
// 	  lis       r5, 0x8048
// 	  addi      r3, r3, 0x1234
// 	  li        r4, 0x4A2
// 	  addi      r5, r5, 0x1260
// 	  crclr     6, 0x6
// 	  bl        -0x1C64D4

// 	.loc_0x50:
// 	  lhz       r31, 0x214(r29)
// 	  li        r0, 0
// 	  cmpwi     r31, 0
// 	  blt-      .loc_0x6C
// 	  cmpwi     r31, 0x3
// 	  bge-      .loc_0x6C
// 	  li        r0, 0x1

// 	.loc_0x6C:
// 	  rlwinm.   r0,r0,0,24,31
// 	  bne-      .loc_0x90
// 	  lis       r3, 0x8048
// 	  lis       r5, 0x8048
// 	  addi      r3, r3, 0x1234
// 	  li        r4, 0x467
// 	  addi      r5, r5, 0x1260
// 	  crclr     6, 0x6
// 	  bl        -0x1C6514

// 	.loc_0x90:
// 	  lwz       r5, 0x8C(r28)
// 	  rlwinm    r0,r31,4,0,27
// 	  lis       r4, 0x6E6F
// 	  addi      r3, r1, 0x2C
// 	  add       r31, r5, r0
// 	  addi      r4, r4, 0x6E65
// 	  bl        0x222738
// 	  lhz       r0, 0x214(r29)
// 	  mr        r3, r30
// 	  lwz       r6, 0x88(r28)
// 	  mr        r4, r29
// 	  rlwinm    r0,r0,2,0,29
// 	  addi      r5, r1, 0x2C
// 	  lwzx      r6, r6, r0
// 	  li        r7, 0
// 	  bl        -0x2B9D8
// 	  li        r29, 0
// 	  li        r28, 0
// 	  b         .loc_0x144

// 	.loc_0xDC:
// 	  rlwinm    r3,r29,1,31,31
// 	  rlwinm    r0,r29,0,31,31
// 	  xor       r0, r0, r3
// 	  sub.      r0, r0, r3
// 	  bne-      .loc_0x118
// 	  lis       r4, 0x6272
// 	  addi      r3, r1, 0x20
// 	  addi      r4, r4, 0x626B
// 	  bl        0x2226E4
// 	  lwz       r5, 0x8(r31)
// 	  mr        r3, r30
// 	  addi      r4, r1, 0x20
// 	  lhzx      r5, r5, r28
// 	  bl        -0x2B73C
// 	  b         .loc_0x13C

// 	.loc_0x118:
// 	  lis       r4, 0x6272
// 	  addi      r3, r1, 0x14
// 	  addi      r4, r4, 0x5F5F
// 	  bl        0x2226BC
// 	  lwz       r5, 0x8(r31)
// 	  mr        r3, r30
// 	  addi      r4, r1, 0x14
// 	  lhzx      r5, r5, r28
// 	  bl        -0x2B764

// 	.loc_0x13C:
// 	  addi      r28, r28, 0x2
// 	  addi      r29, r29, 0x1

// 	.loc_0x144:
// 	  lwz       r0, 0x4(r31)
// 	  cmpw      r29, r0
// 	  blt+      .loc_0xDC
// 	  lwz       r0, 0xC(r31)
// 	  cmpwi     r0, -0x1
// 	  beq-      .loc_0x180
// 	  lis       r4, 0x6669
// 	  addi      r3, r1, 0x8
// 	  addi      r4, r4, 0x6E6C
// 	  bl        0x222678
// 	  lwz       r0, 0xC(r31)
// 	  mr        r3, r30
// 	  addi      r4, r1, 0x8
// 	  rlwinm    r5,r0,0,16,31
// 	  bl        -0x2B7A8

// 	.loc_0x180:
// 	  lwz       r0, 0x54(r1)
// 	  lwz       r31, 0x4C(r1)
// 	  lwz       r30, 0x48(r1)
// 	  lwz       r29, 0x44(r1)
// 	  lwz       r28, 0x40(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x50
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0C68
//  * Size:	00000C
//  */
// void ItemBridge::BridgeInitArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_80481418@ha
// 	addi     r3, r3, lbl_80481418@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0C74
//  * Size:	000134
//  */
// ItemBridge::Mgr::~Mgr(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801F0D8C
// 	lis      r3, __vt__Q34Game10ItemBridge3Mgr@ha
// 	addi     r3, r3, __vt__Q34Game10ItemBridge3Mgr@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x74
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801F0D7C
// 	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x74
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801F0D48
// 	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r3, r30, 0x6c
// 	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r4, 0x4c(r30)
// 	addi     r0, r4, 0x2c
// 	stw      r0, 0x68(r30)
// 	beq      lbl_801F0CF8
// 	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
// 	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
// 	stw      r0, 0x6c(r30)
// 	li       r4, 0
// 	bl       __dt__5CNodeFv

// lbl_801F0CF8:
// 	addic.   r0, r30, 0x4c
// 	beq      lbl_801F0D48
// 	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r3, 0x4c(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x68(r30)
// 	beq      lbl_801F0D48
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0x4c(r30)
// 	beq      lbl_801F0D48
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 0x4c
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0x4c(r30)
// 	bl       __dt__5CNodeFv

// lbl_801F0D48:
// 	addic.   r0, r30, 0x30
// 	beq      lbl_801F0D7C
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x30
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801F0D7C
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 0x30
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0x30(r30)
// 	bl       __dt__5CNodeFv

// lbl_801F0D7C:
// 	extsh.   r0, r31
// 	ble      lbl_801F0D8C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801F0D8C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0DA8
//  * Size:	000100
//  */
// void ItemBridge::Mgr::doNew(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	li       r3, 0x224
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	bl       __nw__FUl
// 	or.      r31, r3, r3
// 	beq      lbl_801F0E90
// 	li       r4, 0x40d
// 	bl       __ct__Q24Game8BaseItemFi
// 	lis      r3,
// "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
// 	li       r0, 0
// 	addi     r4, r3,
// "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
// 	li       r3, 0x1c
// 	stw      r4, 0(r31)
// 	addi     r4, r4, 0x1b0
// 	stw      r4, 0x178(r31)
// 	stw      r0, 0x1d8(r31)
// 	stw      r0, 0x1dc(r31)
// 	bl       __nw__FUl
// 	cmplwi   r3, 0
// 	beq      lbl_801F0E2C
// 	lis      r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@ha
// 	lis      r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@ha
// 	addi     r0, r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@l
// 	lis      r4, __vt__Q34Game10ItemBridge3FSM@ha
// 	stw      r0, 0(r3)
// 	li       r6, -1
// 	addi     r5, r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@l
// 	addi     r0, r4, __vt__Q34Game10ItemBridge3FSM@l
// 	stw      r6, 0x18(r3)
// 	stw      r5, 0(r3)
// 	stw      r0, 0(r3)

// lbl_801F0E2C:
// 	stw      r3, 0x1d8(r31)
// 	mr       r4, r31
// 	lwz      r3, 0x1d8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	lis      r4,
// "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
// 	addi     r3, r31, 0x1e0
// 	addi     r4, r4,
// "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
// 	stw      r4, 0(r31)
// 	addi     r0, r4, 0x1b0
// 	stw      r0, 0x178(r31)
// 	bl       __ct__Q24Game11TSoundEventFv
// 	lis      r4, __vt__Q34Game10ItemBridge4Item@ha
// 	addi     r3, r31, 0x204
// 	addi     r4, r4, __vt__Q34Game10ItemBridge4Item@l
// 	stw      r4, 0(r31)
// 	addi     r0, r4, 0x1b0
// 	stw      r0, 0x178(r31)
// 	bl       __ct__Q24Game20PlatInstanceAttacherFv
// 	lfs      f0, lbl_80519B10@sda21(r2)
// 	li       r0, 0
// 	stfs     f0, 0x118(r31)
// 	stw      r0, 0x218(r31)

// lbl_801F0E90:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0EA8
//  * Size:	00000C
//  */
// void ItemBridge::Mgr::generatorGetID(void)
// {
// 	/*
// 	lis      r3, 0x62726467@ha
// 	addi     r3, r3, 0x62726467@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0EB4
//  * Size:	00000C
//  */
// void ItemBridge::Mgr::generatorLocalVersion(void)
// {
// 	/*
// 	lis      r3, 0x30303031@ha
// 	addi     r3, r3, 0x30303031@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0EC0
//  * Size:	000004
//  */
// void ItemBridge::Item::makeTrMatrix(void) { }

// /*
//  * --INFO--
//  * Address:	801F0EC4
//  * Size:	000008
//  */
// void ItemBridge::Item::getCreatureName(void)
// {
// 	/*
// 	addi     r3, r2, lbl_80519B7C@sda21
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0ECC
//  * Size:	000008
//  */
// void ItemBridge::Item::getMabiki(void)
// {
// 	/*
// 	addi     r3, r3, 0x1ec
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0ED4
//  * Size:	000034
//  */
// void doAI__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State> Fv(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r4, r3
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1D8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0F08
//  * Size:	000004
//  */
// void onDamage__Q24Game35ItemState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Itemf(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F0C
//  * Size:	000004
//  */
// void onKeyEvent__Q24Game35ItemState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F10
//  * Size:	000004
//  */
// void onBounce__Q24Game35ItemState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F14
//  * Size:	000004
//  */
// void onPlatCollision__Q24Game35ItemState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F18
//  * Size:	000004
//  */
// void onCollision__Q24Game35ItemState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F1C
//  * Size:	000004
//  */
// void init__Q24Game34FSMState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemPQ24Game8StateArg(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F20
//  * Size:	000004
//  */
// void exec__Q24Game34FSMState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Item(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F24
//  * Size:	000004
//  */
// void cleanup__Q24Game34FSMState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Item(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F28
//  * Size:	000004
//  */
// void resume__Q24Game34FSMState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Item(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F2C
//  * Size:	000004
//  */
// void restart__Q24Game34FSMState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Item(void) { }

// /*
//  * --INFO--
//  * Address:	801F0F30
//  * Size:	000030
//  */
// void transit__Q24Game34FSMState<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0F60
//  * Size:	000004
//  */
// void init__Q24Game38StateMachine<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Item(void) { }

// } // namespace Game

// /*
//  * --INFO--
//  * Address:	801F0F64
//  * Size:	000064
//  */
// void create__Q24Game38StateMachine<Game::ItemBridge::Item> Fi(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	li       r0, 0
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	stw      r4, 0xc(r3)
// 	stw      r0, 8(r3)
// 	lwz      r0, 0xc(r3)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 4(r31)
// 	lwz      r0, 0xc(r31)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 0x10(r31)
// 	lwz      r0, 0xc(r31)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 0x14(r31)
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F0FC8
//  * Size:	00009C
//  */
// void transit__Q24Game38StateMachine<Game::ItemBridge::Item> FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  rlwinm    r0,r5,2,0,29
// 	  stmw      r27, 0xC(r1)
// 	  mr        r27, r3
// 	  mr        r28, r4
// 	  mr        r29, r6
// 	  lwz       r30, 0x1DC(r4)
// 	  lwz       r3, 0x14(r3)
// 	  cmplwi    r30, 0
// 	  lwzx      r31, r3, r0
// 	  beq-      .loc_0x50
// 	  mr        r3, r30
// 	  lwz       r12, 0x0(r30)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x4(r30)
// 	  stw       r0, 0x18(r27)

// 	.loc_0x50:
// 	  lwz       r0, 0xC(r27)
// 	  cmpw      r31, r0
// 	  blt-      .loc_0x60

// 	.loc_0x5C:
// 	  b         .loc_0x5C

// 	.loc_0x60:
// 	  lwz       r3, 0x4(r27)
// 	  rlwinm    r0,r31,2,0,29
// 	  mr        r4, r28
// 	  mr        r5, r29
// 	  lwzx      r3, r3, r0
// 	  stw       r3, 0x1DC(r28)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lmw       r27, 0xC(r1)
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F1064
//  * Size:	000084
//  */
// void registerState__Q24Game38StateMachine<Game::ItemBridge::Item> FPQ24Game34FSMState<Game::ItemBridge::Item>(void)
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r6, 0x8(r3)
// 	  lwz       r0, 0xC(r3)
// 	  cmpw      r6, r0
// 	  bgelr-
// 	  lwz       r5, 0x4(r3)
// 	  rlwinm    r0,r6,2,0,29
// 	  stwx      r4, r5, r0
// 	  lwz       r5, 0x4(r4)
// 	  cmpwi     r5, 0
// 	  blt-      .loc_0x34
// 	  lwz       r0, 0xC(r3)
// 	  cmpw      r5, r0
// 	  blt-      .loc_0x3C

// 	.loc_0x34:
// 	  li        r0, 0
// 	  b         .loc_0x40

// 	.loc_0x3C:
// 	  li        r0, 0x1

// 	.loc_0x40:
// 	  rlwinm.   r0,r0,0,24,31
// 	  beqlr-
// 	  stw       r3, 0x8(r4)
// 	  lwz       r0, 0x8(r3)
// 	  lwz       r6, 0x4(r4)
// 	  lwz       r5, 0x10(r3)
// 	  rlwinm    r0,r0,2,0,29
// 	  stwx      r6, r5, r0
// 	  lwz       r0, 0x4(r4)
// 	  lwz       r5, 0x8(r3)
// 	  lwz       r4, 0x14(r3)
// 	  rlwinm    r0,r0,2,0,29
// 	  stwx      r5, r4, r0
// 	  lwz       r4, 0x8(r3)
// 	  addi      r0, r4, 0x1
// 	  stw       r0, 0x8(r3)
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F10E8
//  * Size:	000038
//  */
// void exec__Q24Game38StateMachine<Game::ItemBridge::Item> FPQ34Game10ItemBridge4Item(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r4)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x28
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x28:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F1120
//  * Size:	000044
//  */
// void onKeyEvent__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State> FRCQ28SysShape8KeyEvent(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x24(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F1164
//  * Size:	000044
//  */
// void platCallback__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State> FRQ24Game9PlatEvent(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x2C(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F11A8
//  * Size:	000044
//  */
// void collisionCallback__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State>
// FRQ24Game9CollEvent(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x30(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F11EC
//  * Size:	000044
//  */
// void bounceCallback__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State> FPQ23Sys8Triangle(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x28(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F1230
//  * Size:	000008
//  */
// void @376 @onKeyEvent__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State>
// FRCQ28SysShape8KeyEvent(void)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x178
// 	  b         -0x114
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801F1238
//  * Size:	000008
//  */
// @48 @Game::ItemBridge::Mgr::~Mgr(void)
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        __dt__Q34Game10ItemBridge3MgrFv
// 	*/
// }
