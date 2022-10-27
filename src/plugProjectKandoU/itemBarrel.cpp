#include "CollInfo.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemBarrel.h"
#include "Game/Interaction.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/itemMgr.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "PSM/ObjBase.h"
#include "PSM/WorkItem.h"
#include "Sys/Sphere.h"
#include "SysShape/Model.h"
#include "nans.h"
#include "stream.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_itemBarrel_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804819C8
    lbl_804819C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6974656D
        .4byte 0x42617272
        .4byte 0x656C0000
    .global lbl_804819E0
    lbl_804819E0:
        .4byte 0x6974656D
        .4byte 0x42617272
        .4byte 0x656C2E63
        .4byte 0x70700000
    .global lbl_804819F0
    lbl_804819F0:
        .asciz "P2Assert"
        .skip 3
    .global lbl_804819FC
    lbl_804819FC:
        .4byte 0x7831325F
        .4byte 0x64726169
        .4byte 0x6E5F7761
        .4byte 0x74657200
    .global lbl_80481A0C
    lbl_80481A0C:
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6F
        .4byte 0x626A6563
        .4byte 0x74732F62
        .4byte 0x61727265
        .4byte 0x6C000000
    .global lbl_80481A28
    lbl_80481A28:
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F697465
        .4byte 0x6D2F6261
        .4byte 0x7272656C
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
        .4byte 0x42617272
        .4byte 0x656C3A3A
        .4byte 0x5061726D
        .4byte 0x73000000
        .4byte 0x6D6F6465
        .4byte 0x6C2E626D
        .4byte 0x64000000
        .4byte 0x74657874
        .4byte 0x732E737A
        .4byte 0x73000000
        .4byte 0x616E696D
        .4byte 0x4D67722E
        .4byte 0x74787400
        .4byte 0x636F6C6C
        .4byte 0x2E747874
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804BCCA8
    lbl_804BCCA8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game10ItemBarrel3Mgr
    __vt__Q34Game10ItemBarrel3Mgr:
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
        .4byte onLoadResources__Q34Game10ItemBarrel3MgrFv
        .4byte loadEverytime__Q24Game11BaseItemMgrFv
        .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte generatorGetID__Q34Game10ItemBarrel3MgrFv
        .4byte
   "generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
        .4byte
   generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q24Game11BaseItemMgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q24Game11BaseItemMgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q34Game10ItemBarrel3MgrFv" .4byte getChildCount__5CNodeFv .4byte
   "getObject__27Container<Q24Game8BaseItem>FPv" .4byte
   "@48@getNext__Q24Game12TNodeItemMgrFPv" .4byte
   "@48@getStart__Q24Game12TNodeItemMgrFv" .4byte
   "@48@getEnd__Q24Game12TNodeItemMgrFv" .4byte
   "@48@get__Q24Game12TNodeItemMgrFPv" .4byte
   "getAt__27Container<Q24Game8BaseItem>Fi" .4byte
   "getTo__27Container<Q24Game8BaseItem>Fv" .4byte
   doNew__Q34Game10ItemBarrel3MgrFv .4byte
   kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem .4byte
   get__Q24Game12TNodeItemMgrFPv .4byte getNext__Q24Game12TNodeItemMgrFPv .4byte
   getStart__Q24Game12TNodeItemMgrFv .4byte getEnd__Q24Game12TNodeItemMgrFv
        .4byte __dt__Q34Game10ItemBarrel3MgrFv
        .4byte birth__Q34Game10ItemBarrel3MgrFv
    .global __vt__Q34Game10ItemBarrel11BarrelParms
    __vt__Q34Game10ItemBarrel11BarrelParms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game10ItemBarrel11BarrelParmsFR6Stream
    .global __vt__Q34Game10ItemBarrel4Item
    __vt__Q34Game10ItemBarrel4Item:
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
        .4byte constructor__Q34Game10ItemBarrel4ItemFv
        .4byte onInit__Q34Game10ItemBarrel4ItemFPQ24Game15CreatureInitArg
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
        .4byte doSave__Q34Game10ItemBarrel4ItemFR6Stream
        .4byte doLoad__Q34Game10ItemBarrel4ItemFR6Stream
        .4byte
   "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
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
        .4byte getCreatureName__Q34Game10ItemBarrel4ItemFv
        .4byte getCreatureID__Q24Game8BaseItemFv
        .4byte 0
        .4byte 0
        .4byte
   "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte doAI__Q34Game10ItemBarrel4ItemFv
        .4byte move__Q24Game8BaseItemFf
        .4byte changeMaterial__Q24Game8BaseItemFv
        .4byte do_updateLOD__Q24Game8BaseItemFv
        .4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
        .4byte getMapCollisionRadius__Q24Game8BaseItemFv
        .4byte interactAttack__Q34Game10ItemBarrel4ItemFRQ24Game14InteractAttack
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack .4byte
   interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb .4byte
   interactFue__Q24Game8BaseItemFRQ24Game11InteractFue .4byte
   interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero .4byte
   interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero .4byte
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q34Game10ItemBarrel4ItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q34Game10ItemBarrel4ItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q34Game10ItemBarrel4ItemFv .4byte
   update__Q24Game8BaseItemFv .4byte entryShape__Q24Game8BaseItemFv .4byte
   onSetPosition__Q34Game10ItemBarrel4ItemFv .4byte
   "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
    .global
   "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"
    "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>":
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
   "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
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
   "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte
   "doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv"
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
   "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
    .global "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>"
    "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .global "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>"
    "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .global
   "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"
    "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>":
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
   "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
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
   "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte
   "doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv"
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
   "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
    .global __vt__Q34Game10ItemBarrel12DamagedState
    __vt__Q34Game10ItemBarrel12DamagedState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
        .4byte exec__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item
        .4byte
   cleanup__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   onDamage__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Itemf .4byte
   onKeyEvent__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
    .global __vt__Q23efx11TBarrelDead
    __vt__Q23efx11TBarrelDead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q34Game10ItemBarrel9DeadState
    __vt__Q34Game10ItemBarrel9DeadState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
        .4byte exec__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item
        .4byte cleanup__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   onDamage__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Itemf .4byte
   onKeyEvent__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game10ItemBarrel11NormalState
    __vt__Q34Game10ItemBarrel11NormalState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
        .4byte exec__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
        .4byte
   cleanup__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   onDamage__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Itemf .4byte
   onKeyEvent__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game10ItemBarrel5State
    __vt__Q34Game10ItemBarrel5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte onDamage__Q34Game10ItemBarrel5StateFPQ34Game10ItemBarrel4Itemf
        .4byte
   "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"
    "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Itemf"
        .4byte
   "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"
    "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .global __vt__Q34Game10ItemBarrel3FSM
    __vt__Q34Game10ItemBarrel3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game10ItemBarrel3FSMFPQ34Game10ItemBarrel4Item
        .4byte
   "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
        .4byte
   "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515B68
    lbl_80515B68:
        .skip 0x4
    .global lbl_80515B6C
    lbl_80515B6C:
        .skip 0x4
    .global mgr__Q24Game10ItemBarrel
    mgr__Q24Game10ItemBarrel:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519C90
    lbl_80519C90:
        .4byte 0x00000000
    .global lbl_80519C94
    lbl_80519C94:
        .4byte 0x41F00000
    .global lbl_80519C98
    lbl_80519C98:
        .4byte 0xC2C80000
    .global lbl_80519C9C
    lbl_80519C9C:
        .float 1.0
    .global lbl_80519CA0
    lbl_80519CA0:
        .4byte 0x42617272
        .4byte 0x656C0000
    .global lbl_80519CA8
    lbl_80519CA8:
        .float 0.5
    .global lbl_80519CAC
    lbl_80519CAC:
        .float 0.25
    .global lbl_80519CB0
    lbl_80519CB0:
        .4byte 0x61636365
        .4byte 0x6C000000
    .global lbl_80519CB8
    lbl_80519CB8:
        .float 0.1
    .global lbl_80519CBC
    lbl_80519CBC:
        .4byte 0x3C23D70A
    .global lbl_80519CC0
    lbl_80519CC0:
        .4byte 0x40000000
    .global lbl_80519CC4
    lbl_80519CC4:
        .float 0.3
    .global lbl_80519CC8
    lbl_80519CC8:
        .4byte 0x83898343
        .4byte 0x83740000
    .global lbl_80519CD0
    lbl_80519CD0:
        .4byte 0x42C80000
    .global lbl_80519CD4
    lbl_80519CD4:
        .4byte 0x476A6000
    .global lbl_80519CD8
    lbl_80519CD8:
        .4byte 0x6172632E
        .4byte 0x737A7300
*/

namespace Game {

/*
 * --INFO--
 * Address:	801F7970
 * Size:	000134
 */
void ItemBarrel::FSM::init(Game::ItemBarrel::Item*)
{
	create(BARREL_STATE_COUNT);
	registerState(new NormalState());
	registerState(new DamagedState());
	registerState(new DeadState());
}

/*
 * --INFO--
 * Address:	801F7AA4
 * Size:	00000C
 */
void ItemBarrel::NormalState::init(Game::ItemBarrel::Item* item, Game::StateArg* arg)
{
	item->m_animSpeed = 0.0f;
	/*
	lfs      f0, lbl_80519C90@sda21(r2)
	stfs     f0, 0x1d4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F7AB0
 * Size:	000004
 */
void ItemBarrel::NormalState::exec(Game::ItemBarrel::Item*) { }

/*
 * --INFO--
 * Address:	801F7AB4
 * Size:	000004
 */
void ItemBarrel::NormalState::cleanup(Game::ItemBarrel::Item*) { }

/*
 * --INFO--
 * Address:	801F7AB8
 * Size:	000064
 */
void ItemBarrel::NormalState::onDamage(Game::ItemBarrel::Item* item, float damage)
{
	item->_1F4 += damage;
	item->_1EC -= item->_1F4;
	item->_1F4 = 0.0f;
	if (item->_1EC < 0.0f) {
		transit(item, Barrel_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801F7B1C
 * Size:	000030
 */
// void transit__Q24Game34FSMState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg(void)
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

/*
 * --INFO--
 * Address:	801F7B4C
 * Size:	000004
 */
void ItemBarrel::NormalState::onKeyEvent(Game::ItemBarrel::Item*, SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801F7B50
 * Size:	000170
 */
void ItemBarrel::DeadState::init(Game::ItemBarrel::Item*, Game::StateArg*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	or.      r31, r4, r4
	mr       r5, r31
	beq      lbl_801F7B70
	addi     r5, r5, 0x178

lbl_801F7B70:
	addi     r3, r31, 0x1a8
	li       r4, 1
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80519C94@sda21(r2)
	mr       r3, r31
	li       r4, 0
	stfs     f0, 0x1d4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1e0
	bl       finish__Q24Game11TSoundEventFv
	lwz      r3, 0x17c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xa
	beq      lbl_801F7BDC
	lis      r3, lbl_804819E0@ha
	lis      r5, lbl_804819F0@ha
	addi     r3, r3, lbl_804819E0@l
	li       r4, 0x90
	addi     r5, r5, lbl_804819F0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F7BDC:
	lwz      r3, 0x17c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	mr       r3, r31
	li       r4, 0x586b
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x24(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx11TBarrelDead@ha
	li       r4, 5
	stw      r0, 0x24(r1)
	addi     r0, r3, __vt__Q23efx11TBarrelDead@l
	li       r7, 6
	li       r6, 7
	sth      r4, 0x28(r1)
	mr       r4, r31
	addi     r3, r1, 8
	sth      r7, 0x2a(r1)
	sth      r6, 0x2c(r1)
	stw      r5, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0xc(r1)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lfs      f0, 0x10(r1)
	addi     r3, r1, 0x24
	stw      r0, 0x14(r1)
	addi     r4, r1, 0x14
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F7CC0
 * Size:	000004
 */
void ItemBarrel::DeadState::exec(Game::ItemBarrel::Item*) { }

/*
 * --INFO--
 * Address:	801F7CC4
 * Size:	000004
 */
void ItemBarrel::DeadState::cleanup(Game::ItemBarrel::Item*) { }

/*
 * --INFO--
 * Address:	801F7CC8
 * Size:	000004
 */
void ItemBarrel::DeadState::onDamage(Game::ItemBarrel::Item*, float) { }

/*
 * --INFO--
 * Address:	801F7CCC
 * Size:	000148
 * onKeyEvent__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
 */
void ItemBarrel::DeadState::onKeyEvent(Game::ItemBarrel::Item* item, SysShape::KeyEvent const& event)
{
	WaterBox* waterbox = mapMgr->findWater(item->m_boundingSphere);
	if (waterbox && gameSystem->m_flags & 0x20) {
		// TODO: Use a suitable ctor? Or inline the default as {}
		MoviePlayArg movieArg;
		movieArg.m_courseName    = nullptr;
		movieArg.m_movieName     = "x12_drain_water";
		movieArg._0C             = nullptr;
		movieArg.m_origin.x      = 0.0f;
		movieArg.m_origin.y      = 0.0f;
		movieArg.m_origin.z      = 0.0f;
		movieArg.m_angle         = 0.0f;
		movieArg.m_naviID        = 0;
		movieArg._10             = nullptr;
		movieArg._08             = nullptr;
		movieArg.m_streamID      = 0;
		movieArg._14             = 0;
		movieArg.m_soundPosition = nullptr;
		movieArg.m_origin        = item->getPosition();
		movieArg.m_angle         = item->getFaceDir();
		moviePlayer->play(movieArg);
		// TODO: Uncomment this line.
		// item->m_soundObj->startSound(PSSE_EV_WATER_OUT, 0);
		waterbox->startDown(-100.0f);
	}
	item->m_animSpeed = 0.0f;
	mgr->kill(item);
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  addi      r4, r30, 0x1C4
	  lwz       r3, -0x6CF8(r13)
	  bl        -0x943C4
	  mr.       r31, r3
	  beq-      .loc_0x110
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x110
	  lfs       f0, -0x46D0(r2)
	  lis       r3, 0x8048
	  li        r0, 0
	  mr        r4, r30
	  addi      r5, r3, 0x19FC
	  stw       r0, 0x18(r1)
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r30, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x234C2C
	  lwz       r3, 0x17C(r30)
	  li        r4, 0x3847
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, -0x46C8(r2)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x110:
	  lfs       f0, -0x46D0(r2)
	  mr        r4, r30
	  stfs      f0, 0x1D4(r30)
	  lwz       r3, -0x6B10(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7E14
 * Size:	000004
 */
void ItemBarrel::DamagedState::init(Game::ItemBarrel::Item*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	801F7E18
 * Size:	000004
 */
void ItemBarrel::DamagedState::exec(Game::ItemBarrel::Item*) { }

/*
 * --INFO--
 * Address:	801F7E1C
 * Size:	000004
 */
void ItemBarrel::DamagedState::cleanup(Game::ItemBarrel::Item*) { }

/*
 * --INFO--
 * Address:	801F7E20
 * Size:	000010
 * onDamage__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Itemf
 */
void ItemBarrel::DamagedState::onDamage(Game::ItemBarrel::Item* item, float damage) { item->_1F4 += damage; }

/*
 * --INFO--
 * Address:	801F7E30
 * Size:	000004
 */
void ItemBarrel::DamagedState::onKeyEvent(Game::ItemBarrel::Item*, SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801F7E34
 * Size:	000044
 */
void ItemBarrel::Item::doSave(Stream& output) { output.writeByte(isAlive()); }

/*
 * --INFO--
 * Address:	801F7E78
 * Size:	0000BC
 */
void ItemBarrel::Item::doLoad(Stream& input)
{
	if (input.readByte() == 0) {
		m_animator.startAnim(1, this);
		m_animator.setLastFrame();
		setAlive(false);
		WaterBox* waterbox = mapMgr->findWater(m_boundingSphere);
		if (waterbox) {
			waterbox->startDown(-100.0f);
		}
		m_animSpeed = 0.0f;
		mgr->kill(this);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
// ItemBarrel::Item::Item(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	801F7F34
 * Size:	000048
 */
void ItemBarrel::Item::constructor(void)
{
	// m_soundObj = new PSM::WorkItem(this);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x84
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801F7F64
	mr       r4, r31
	bl       __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
	mr       r0, r3

lbl_801F7F64:
	stw      r0, 0x17c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F7F7C
 * Size:	000140
 */
void ItemBarrel::Item::onInit(Game::CreatureInitArg*)
{
	m_model = new SysShape::Model(mgr->getModelData(0), 0x20000, 2);
	m_model->m_j3dModel->calc();
	m_model->m_j3dModel->calcMaterial();
	m_model->m_j3dModel->makeDL();
	m_model->m_j3dModel->lock();
	m_stateMachine->start(this, Barrel_Normal, nullptr);
	setAlive(true);
	createBarrel();
	m_animSpeed          = 0.0f;
	m_animator.m_animMgr = mgr->m_animMgr;
	m_animator.startAnim(1, this);
	m_collTree->createFromFactory(m_model, mgr->m_collPartFactory, nullptr);
	_1F4 = 0.0f;
}

/*
 * --INFO--
 * Address:	801F80BC
 * Size:	000034
 * start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg
 */
// void start__Q24Game38StateMachine<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  stw       r0, 0x1DC(r4)
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

/*
 * --INFO--
 * Address:	801F80F0
 * Size:	00004C
 */
void ItemBarrel::Item::onSetPosition(void)
{
	makeTrMatrix();
	updateBoundSphere();
}

/*
 * --INFO--
 * Address:	801F813C
 * Size:	000048
 */
void ItemBarrel::Item::updateBoundSphere(void)
{
	float radius                = getWorkRadius();
	m_boundingSphere.m_position = m_position;
	m_boundingSphere.m_radius   = radius;
}

/*
 * --INFO--
 * Address:	801F8184
 * Size:	0000C4
 */
void ItemBarrel::Item::doAI(void)
{
	m_stateMachine->exec(this);
	updateCollTree();
	m_collTree->m_part->m_radius = getWorkRadius();
	switch (m_soundEvent.update()) {
	case 2:
		P2ASSERTLINE(298, m_soundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(m_soundObj)->eventStop();
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r4, r30
	lwz      r3, 0x1d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       updateCollTree__Q24Game8BaseItemFv
	lwz      r4, 0x114(r30)
	mr       r3, r30
	lwz      r31, 0(r4)
	bl       getWorkRadius__Q34Game10ItemBarrel4ItemFv
	stfs     f1, 0x1c(r31)
	addi     r3, r30, 0x1e0
	bl       update__Q24Game11TSoundEventFv
	cmpwi    r3, 2
	beq      lbl_801F81E4
	b        lbl_801F8230

lbl_801F81E4:
	lwz      r3, 0x17c(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xa
	beq      lbl_801F821C
	lis      r3, lbl_804819E0@ha
	lis      r5, lbl_804819F0@ha
	addi     r3, r3, lbl_804819E0@l
	li       r4, 0x12a
	addi     r5, r5, lbl_804819F0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F821C:
	lwz      r3, 0x17c(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl

lbl_801F8230:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F8248
 * Size:	000114
 */
bool ItemBarrel::Item::getVectorField(Sys::Sphere& p1, Vector3f& p2)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stfd     f28, 0x10(r1)
	psq_st   f28, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lfs      f0, 4(r4)
	mr       r31, r5
	lfs      f1, 0x1a0(r3)
	lfs      f3, 0x1a4(r3)
	fsubs    f29, f1, f0
	lfs      f2, 8(r4)
	lfs      f1, 0x19c(r3)
	fsubs    f28, f3, f2
	lfs      f0, 0(r4)
	fmuls    f2, f29, f29
	fsubs    f30, f1, f0
	lfs      f0, lbl_80519C90@sda21(r2)
	fmuls    f3, f28, f28
	fmadds   f1, f30, f30, f2
	fadds    f31, f3, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801F82CC
	ble      lbl_801F82D0
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801F82D0

lbl_801F82CC:
	fmr      f31, f0

lbl_801F82D0:
	lfs      f0, lbl_80519C90@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_801F82F4
	lfs      f0, lbl_80519C9C@sda21(r2)
	fdivs    f0, f0, f31
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	fmuls    f28, f28, f0
	b        lbl_801F82F8

lbl_801F82F4:
	fmr      f31, f0

lbl_801F82F8:
	bl       getWorkRadius__Q34Game10ItemBarrel4ItemFv
	fcmpo    cr0, f31, f1
	ble      lbl_801F8314
	stfs     f30, 0(r31)
	stfs     f29, 4(r31)
	stfs     f28, 8(r31)
	b        lbl_801F8324

lbl_801F8314:
	lfs      f0, lbl_80519C90@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)

lbl_801F8324:
	li       r3, 1
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	psq_l    f28, 24(r1), 0, qr0
	lfd      f28, 0x10(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F835C
 * Size:	000058
 */
float ItemBarrel::Item::getWorkRadius(void)
{
	Sys::Sphere bounds;
	if (isAlive()) {
		m_collTree->getBoundingSphere(bounds);
		return bounds.m_radius;
	} else {
		return 0.0f;
	}
}

/*
 * --INFO--
 * Address:	801F83B4
 * Size:	0000C4
 */
float ItemBarrel::Item::getWorkDistance(Sys::Sphere&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f0, 4(r4)
	lfs      f1, 0x1a0(r3)
	lfs      f3, 0x1a4(r3)
	fsubs    f4, f1, f0
	lfs      f2, 8(r4)
	lfs      f1, 0x19c(r3)
	lfs      f0, 0(r4)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519C90@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801F8420
	ble      lbl_801F8424
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801F8424

lbl_801F8420:
	fmr      f31, f0

lbl_801F8424:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F8454
	lwz      r3, 0x114(r31)
	addi     r4, r1, 8
	bl       getBoundingSphere__8CollTreeFRQ23Sys6Sphere
	lfs      f0, 0x14(r1)
	b        lbl_801F8458

lbl_801F8454:
	lfs      f0, lbl_80519C90@sda21(r2)

lbl_801F8458:
	fsubs    f1, f31, f0
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F8478
 * Size:	000024
 */
void ItemBarrel::Item::createBarrel(void)
{
	_1EC = mgr->m_parms->m_barrelParms.p000.m_value;
	_1F0 = _1EC;
	_1F4 = 0.0f;
}

/*
 * --INFO--
 * Address:	801F849C
 * Size:	000148
 */
bool ItemBarrel::Item::interactAttack(Game::InteractAttack& interaction)
{
	if (interaction.m_creature->isNavi()) {
		return false;
	}
	if (m_currentState) {
		m_currentState->onDamage(this, interaction._08);
		switch (m_soundEvent.event()) {
		case 1:
			P2ASSERTLINE(361, m_soundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(m_soundObj)->eventStart();
			break;
		case 2:
			break;
		case 3:
			P2ASSERTLINE(368, m_soundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(m_soundObj)->eventRestart();
			break;
		}
		return true;
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F84DC
	li       r3, 0
	b        lbl_801F85CC

lbl_801F84DC:
	lwz      r3, 0x1dc(r30)
	cmplwi   r3, 0
	beq      lbl_801F85C8
	lwz      r12, 0(r3)
	mr       r4, r30
	lfs      f1, 8(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1e0
	bl       event__Q24Game11TSoundEventFv
	cmpwi    r3, 2
	beq      lbl_801F85C8
	bge      lbl_801F8520
	cmpwi    r3, 1
	bge      lbl_801F852C
	b        lbl_801F85C8

lbl_801F8520:
	cmpwi    r3, 4
	bge      lbl_801F85C8
	b        lbl_801F857C

lbl_801F852C:
	lwz      r3, 0x17c(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xa
	beq      lbl_801F8564
	lis      r3, lbl_804819E0@ha
	lis      r5, lbl_804819F0@ha
	addi     r3, r3, lbl_804819E0@l
	li       r4, 0x169
	addi     r5, r5, lbl_804819F0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F8564:
	lwz      r3, 0x17c(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_801F85C8

lbl_801F857C:
	lwz      r3, 0x17c(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xa
	beq      lbl_801F85B4
	lis      r3, lbl_804819E0@ha
	lis      r5, lbl_804819F0@ha
	addi     r3, r3, lbl_804819E0@l
	li       r4, 0x170
	addi     r5, r5, lbl_804819F0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F85B4:
	lwz      r3, 0x17c(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl

lbl_801F85C8:
	li       r3, 1

lbl_801F85CC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F85E4
 * Size:	000004
 */
// void ItemBarrel::State::onDamage(Game::ItemBarrel::Item*, float) { }

/*
 * --INFO--
 * Address:	801F85E8
 * Size:	000120
 * __ct__Q34Game10ItemBarrel3MgrFv
 */
ItemBarrel::Mgr::Mgr(void)
    : TNodeItemMgr()
{
	setName("Barrel");
	setModelSize(1);
	m_objectPathComponent = "user/Kando/objects/barrel";
	m_parms               = new BarrelParms();
	char* resource        = (char*)JKRDvdRipper::loadToMainRAM("user/Abe/item/barrelParms.txt", nullptr, Switch_0, 0, nullptr,
                                                        JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (resource) {
		RamStream stream(resource, -1);
		stream.m_mode = STREAM_MODE_TEXT;
		if (stream.m_mode == STREAM_MODE_TEXT) {
			stream.m_tabCount = 0;
		}
		m_parms->read(stream);
		delete[] resource;
	}
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	extsh.   r0, r4
	stw      r31, 0x43c(r1)
	mr       r31, r3
	stw      r30, 0x438(r1)
	beq      lbl_801F8610
	addi     r0, r31, 0x8c
	stw      r0, 4(r31)

lbl_801F8610:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game12TNodeItemMgrFv
	lis      r3, __vt__Q34Game10ItemBarrel3Mgr@ha
	addi     r0, r2, lbl_80519CA0@sda21
	addi     r4, r3, __vt__Q34Game10ItemBarrel3Mgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r5, r4, 0x74
	li       r4, 1
	stw      r5, 0x30(r31)
	stw      r0, 8(r31)
	bl       setModelSize__Q24Game11BaseItemMgrFi
	lis      r4, lbl_80481A0C@ha
	li       r3, 0x114
	addi     r0, r4, lbl_80481A0C@l
	stw      r0, 0x28(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801F8668
	bl       __ct__Q34Game10ItemBarrel11BarrelParmsFv
	mr       r0, r3

lbl_801F8668:
	stw      r0, 0x88(r31)
	li       r0, 0
	lis      r3, lbl_80481A28@ha
	li       r4, 0
	stw      r0, 8(r1)
	addi     r3, r3, lbl_80481A28@l
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r30, r3, r3
	beq      lbl_801F86EC
	mr       r4, r30
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_801F86CC
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_801F86CC:
	lwz      r3, 0x88(r31)
	addi     r4, r1, 0x10
	lwz      r12, 0xd8(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       __dla__FPv

lbl_801F86EC:
	lwz      r0, 0x444(r1)
	mr       r3, r31
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F8708
 * Size:	000024
 * read__Q34Game10ItemBarrel11BarrelParmsFR6Stream
 */
// void ItemBarrel::BarrelParms::read(Stream&)
// {
// }

/*
 * --INFO--
 * Address:	801F872C
 * Size:	0001EC
 * __ct__Q34Game10ItemBarrel11BarrelParmsFv
 */
// ItemBarrel::BarrelParms::BarrelParms(void)
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
// 	lis      r3, lbl_804819C8@ha
// 	stw      r0, 0xd8(r30)
// 	addi     r31, r3, lbl_804819C8@l
// 	addi     r0, r30, 0xd4
// 	li       r3, 0
// 	stw      r0, 0(r30)
// 	addi     r0, r31, 0x80
// 	mr       r4, r30
// 	addi     r6, r31, 0x94
// 	stw      r3, 4(r30)
// 	addi     r3, r30, 0xc
// 	stw      r0, 8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303031@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519CA8@sda21(r2)
// 	stw      r0, 0xc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519C90@sda21(r2)
// 	addi     r3, r30, 0x34
// 	stfs     f0, 0x24(r30)
// 	addi     r5, r5, 0x73303031@l
// 	lfs      f0, lbl_80519C9C@sda21(r2)
// 	addi     r6, r31, 0xa8
// 	stfs     f1, 0x2c(r30)
// 	stfs     f0, 0x30(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303032@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519CA8@sda21(r2)
// 	stw      r0, 0x34(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519C90@sda21(r2)
// 	addi     r3, r30, 0x5c
// 	stfs     f0, 0x4c(r30)
// 	addi     r5, r5, 0x73303032@l
// 	lfs      f0, lbl_80519C9C@sda21(r2)
// 	addi     r6, r31, 0xb8
// 	stfs     f1, 0x54(r30)
// 	stfs     f0, 0x58(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303033@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519CAC@sda21(r2)
// 	stw      r0, 0x5c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519C90@sda21(r2)
// 	addi     r3, r30, 0x84
// 	stfs     f0, 0x74(r30)
// 	addi     r5, r5, 0x73303033@l
// 	lfs      f0, lbl_80519C9C@sda21(r2)
// 	addi     r6, r2, lbl_80519CB0@sda21
// 	stfs     f1, 0x7c(r30)
// 	stfs     f0, 0x80(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303034@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80519CB8@sda21(r2)
// 	stw      r0, 0x84(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80519CBC@sda21(r2)
// 	addi     r3, r30, 0xac
// 	stfs     f0, 0x9c(r30)
// 	addi     r5, r5, 0x73303034@l
// 	lfs      f0, lbl_80519CC0@sda21(r2)
// 	addi     r6, r31, 0xc8
// 	stfs     f1, 0xa4(r30)
// 	stfs     f0, 0xa8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r4, "__vt__7Parm<f>"@ha
// 	lis      r3, __vt__Q34Game10ItemBarrel11BarrelParms@ha
// 	addi     r0, r4, "__vt__7Parm<f>"@l
// 	lis      r5, 0x70303030@ha
// 	stw      r0, 0xac(r30)
// 	addi     r9, r3, __vt__Q34Game10ItemBarrel11BarrelParms@l
// 	lfs      f0, lbl_80519CC4@sda21(r2)
// 	addi     r8, r30, 0x110
// 	lfs      f1, lbl_80519CBC@sda21(r2)
// 	li       r7, 0
// 	stfs     f0, 0xc4(r30)
// 	addi     r0, r31, 0xd8
// 	lfs      f0, lbl_80519CC0@sda21(r2)
// 	addi     r3, r30, 0xe8
// 	stfs     f1, 0xcc(r30)
// 	addi     r4, r30, 0xdc
// 	addi     r5, r5, 0x70303030@l
// 	addi     r6, r2, lbl_80519CC8@sda21
// 	stfs     f0, 0xd0(r30)
// 	stw      r9, 0xd8(r30)
// 	stw      r8, 0xdc(r30)
// 	stw      r7, 0xe0(r30)
// 	stw      r0, 0xe4(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lfs      f2, lbl_80519CD0@sda21(r2)
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f1, lbl_80519C9C@sda21(r2)
// 	stw      r0, 0xe8(r30)
// 	mr       r3, r30
// 	lfs      f0, lbl_80519CD4@sda21(r2)
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

/*
 * --INFO--
 * Address:	801F8918
 * Size:	000108
 * birth__Q34Game10ItemBarrel3MgrFv
 */
ItemBarrel::Item* ItemBarrel::Mgr::birth(void)
{
	Item* item = new Item();
	entry(item);
	return item;
}

/*
 * --INFO--
 * Address:	801F8A20
 * Size:	000060
 * generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm
 */
BaseItem* ItemBarrel::Mgr::generatorBirth(Vector3f& position, Vector3f& p2, GenItemParm* parm)
{
	Item* item = birth();
	item->init(nullptr);
	item->setPosition(position, false);
	return item;
}

/*
 * --INFO--
 * Address:	801F8A80
 * Size:	0000B8
 */
void ItemBarrel::Mgr::onLoadResources(void)
{
	loadArchive("arc.szs");
	loadBmd("model.bmd", 0, 0x20000);
	m_modelData[0]->newSharedDisplayList(0x40000);
	m_modelData[0]->makeSharedDL();
	JKRArchive* arc = openTextArc("texts.szs");
	loadAnimMgr(arc, "animMgr.txt");
	loadCollision(arc, "coll.txt");
	closeTextArc(arc);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804819C8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_804819C8@l
	addi     r4, r2, lbl_80519CD8@sda21
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r29
	addi     r4, r31, 0xe8
	li       r5, 0
	lis      r6, 2
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	lwz      r3, 0x1c(r29)
	lis      r4, 4
	lwz      r3, 0(r3)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r29)
	lwz      r3, 0(r3)
	bl       makeSharedDL__12J3DModelDataFv
	mr       r3, r29
	addi     r4, r31, 0xf4
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	mr       r0, r3
	mr       r3, r29
	mr       r30, r0
	addi     r5, r31, 0x100
	mr       r4, r30
	bl       loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	mr       r3, r29
	mr       r4, r30
	addi     r5, r31, 0x10c
	bl       loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	mr       r3, r29
	mr       r4, r30
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
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
 * Address:	801F8B38
 * Size:	000134
 * __dt__Q34Game10ItemBarrel3MgrFv
 */
// ItemBarrel::Mgr::~Mgr(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801F8C50
// 	lis      r3, __vt__Q34Game10ItemBarrel3Mgr@ha
// 	addi     r3, r3, __vt__Q34Game10ItemBarrel3Mgr@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x74
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801F8C40
// 	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x74
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801F8C0C
// 	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r3, r30, 0x6c
// 	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r4, 0x4c(r30)
// 	addi     r0, r4, 0x2c
// 	stw      r0, 0x68(r30)
// 	beq      lbl_801F8BBC
// 	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
// 	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
// 	stw      r0, 0x6c(r30)
// 	li       r4, 0
// 	bl       __dt__5CNodeFv

// lbl_801F8BBC:
// 	addic.   r0, r30, 0x4c
// 	beq      lbl_801F8C0C
// 	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r3, 0x4c(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x68(r30)
// 	beq      lbl_801F8C0C
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0x4c(r30)
// 	beq      lbl_801F8C0C
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 0x4c
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0x4c(r30)
// 	bl       __dt__5CNodeFv

// lbl_801F8C0C:
// 	addic.   r0, r30, 0x30
// 	beq      lbl_801F8C40
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x30
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801F8C40
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 0x30
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0x30(r30)
// 	bl       __dt__5CNodeFv

// lbl_801F8C40:
// 	extsh.   r0, r31
// 	ble      lbl_801F8C50
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801F8C50:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801F8C6C
 * Size:	0000F0
 * doNew__Q34Game10ItemBarrel3MgrFv
 */
// void ItemBarrel::Mgr::doNew(void)
// {
// }

/*
 * --INFO--
 * Address:	801F8D5C
 * Size:	00000C
 */
// void ItemBarrel::Mgr::generatorGetID(void)
// {
// }

/*
 * --INFO--
 * Address:	801F8D68
 * Size:	000008
 */
// void ItemBarrel::Item::getCreatureName(void)
// {
// 	/*
// 	addi     r3, r2, lbl_80519CA0@sda21
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801F8D70
 * Size:	000034
 * doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv
 */
// void doAI__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State> Fv(void)
// {
// }

/*
 * --INFO--
 * Address:	801F8DA4
 * Size:	000004
 */
// void onDamage__Q24Game35ItemState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Itemf(void) { }

/*
 * --INFO--
 * Address:	801F8DA8
 * Size:	000004
 */
// void onKeyEvent__Q24Game35ItemState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent(void) { }

/*
 * --INFO--
 * Address:	801F8DAC
 * Size:	000004
 */
// void onBounce__Q24Game35ItemState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle(void) { }

/*
 * --INFO--
 * Address:	801F8DB0
 * Size:	000004
 */
// void onPlatCollision__Q24Game35ItemState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent(void) { }

/*
 * --INFO--
 * Address:	801F8DB4
 * Size:	000004
 */
// void onCollision__Q24Game35ItemState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent(void) { }

/*
 * --INFO--
 * Address:	801F8DB8
 * Size:	000004
 */
// void init__Q24Game34FSMState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg(void) { }

/*
 * --INFO--
 * Address:	801F8DBC
 * Size:	000004
 */
// void exec__Q24Game34FSMState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Item(void) { }

/*
 * --INFO--
 * Address:	801F8DC0
 * Size:	000004
 */
// void cleanup__Q24Game34FSMState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Item(void) { }

/*
 * --INFO--
 * Address:	801F8DC4
 * Size:	000004
 */
// void resume__Q24Game34FSMState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Item(void) { }

/*
 * --INFO--
 * Address:	801F8DC8
 * Size:	000004
 */
// void restart__Q24Game34FSMState<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Item(void) { }

/*
 * --INFO--
 * Address:	801F8DCC
 * Size:	000004
 */
// void init__Q24Game38StateMachine<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Item(void) { }

/*
 * --INFO--
 * Address:	801F8DD0
 * Size:	000038
 */
// void exec__Q24Game38StateMachine<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4Item(void)
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

} // namespace Game

/*
 * --INFO--
 * Address:	801F8E08
 * Size:	000064
 */
// void create__Q24Game38StateMachine<Game::ItemBarrel::Item> Fi(void)
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

/*
 * --INFO--
 * Address:	801F8E6C
 * Size:	00009C
 */
// void transit__Q24Game38StateMachine<Game::ItemBarrel::Item> FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg(void)
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

/*
 * --INFO--
 * Address:	801F8F08
 * Size:	000084
 */
// void registerState__Q24Game38StateMachine<Game::ItemBarrel::Item> FPQ24Game34FSMState<Game::ItemBarrel::Item>(void)
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

/*
 * --INFO--
 * Address:	801F8F8C
 * Size:	000044
 */
// void onKeyEvent__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State> FRCQ28SysShape8KeyEvent(void)
// {
// }

/*
 * --INFO--
 * Address:	801F8FD0
 * Size:	000044
 */
// void platCallback__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State> FRQ24Game9PlatEvent(void)
// {
// }

/*
 * --INFO--
 * Address:	801F9014
 * Size:	000044
 */
// void collisionCallback__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>
// FRQ24Game9CollEvent(void)
// {
// }

/*
 * --INFO--
 * Address:	801F9058
 * Size:	000044
 */
// void bounceCallback__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State> FPQ23Sys8Triangle(void)
// {
// }

/*
 * --INFO--
 * Address:	801F909C
 * Size:	000028
 */
// void __sinit_itemBarrel_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804BCCA8@ha
// 	stw      r0, lbl_80515B68@sda21(r13)
// 	stfsu    f0, lbl_804BCCA8@l(r3)
// 	stfs     f0, lbl_80515B6C@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801F90C4
 * Size:	000008
 */
// void @376 @onKeyEvent__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>
// FRCQ28SysShape8KeyEvent(void)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x178
// 	  b         -0x13C
// 	*/
// }

/*
 * --INFO--
 * Address:	801F90CC
 * Size:	000008
 */
// @48 @Game::ItemBarrel::Mgr::~Mgr(void)
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        __dt__Q34Game10ItemBarrel3MgrFv
// 	*/
// }
