#include "Game/AILOD.h"
#include "Game/BaseItem.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemBarrel.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/pelletMgr.h"
#include "Game/itemMgr.h"
#include "Iterator.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JKR/JKRArchive.h"
#include "PS.h"
#include "SysShape/Joint.h"
#include "SysShape/Model.h"
#include "System.h"
#include "Vector3.h"
#include "efx/Arg.h"
#include "efx/WarpZone.h"
#include "id32.h"
#include "mapCode.h"
#include "sysMath.h"
#include "types.h"
#include "nans.h"
#include "Game/Entities/ItemHole.h"
#include "SoundID.h"
#include "PSSystem/PSSystemIF.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_itemHole_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480520
    lbl_80480520:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6974656D
        .4byte 0x486F6C65
        .4byte 0x00000000
    .global lbl_80480538
    lbl_80480538:
        .4byte 0x6732465F
        .4byte 0x61707065
        .4byte 0x61725F68
        .4byte 0x6F6C6500
    .global lbl_80480548
    lbl_80480548:
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6F
        .4byte 0x626A6563
        .4byte 0x74732F64
        .4byte 0x756E6765
        .4byte 0x6F6E5F68
        .4byte 0x6F6C6500
        .4byte 0x64756E67
        .4byte 0x656F6E5F
        .4byte 0x686F6C65
        .4byte 0x2E626D64
        .4byte 0x00000000
        .4byte 0x74657874
        .4byte 0x732E737A
        .4byte 0x73000000
        .4byte 0x6361705F
        .4byte 0x706C6174
        .4byte 0x666F726D
        .4byte 0x2E62696E
        .4byte 0x00000000
        .4byte 0x73696465
        .4byte 0x5F706C61
        .4byte 0x74666F72
        .4byte 0x6D2E6269
        .4byte 0x6E000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B7970
    lbl_804B7970:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game8ItemHole3Mgr
    __vt__Q34Game8ItemHole3Mgr:
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
        .4byte setup__Q34Game8ItemHole3MgrFPQ24Game8BaseItem
        .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
        .4byte onLoadResources__Q34Game8ItemHole3MgrFv
        .4byte loadEverytime__Q24Game11BaseItemMgrFv
        .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte generatorGetID__Q34Game8ItemHole3MgrFv
        .4byte
   "generatorBirth__Q34Game8ItemHole3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
        .4byte
   generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q24Game11BaseItemMgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q24Game11BaseItemMgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q34Game8ItemHole3MgrFv" .4byte getChildCount__5CNodeFv .4byte
   "getObject__27Container<Q24Game8BaseItem>FPv" .4byte
   "@48@getNext__Q24Game12TNodeItemMgrFPv" .4byte
   "@48@getStart__Q24Game12TNodeItemMgrFv" .4byte
   "@48@getEnd__Q24Game12TNodeItemMgrFv" .4byte
   "@48@get__Q24Game12TNodeItemMgrFPv" .4byte
   "getAt__27Container<Q24Game8BaseItem>Fi" .4byte
   "getTo__27Container<Q24Game8BaseItem>Fv" .4byte doNew__Q34Game8ItemHole3MgrFv
        .4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
        .4byte get__Q24Game12TNodeItemMgrFPv
        .4byte getNext__Q24Game12TNodeItemMgrFPv
        .4byte getStart__Q24Game12TNodeItemMgrFv
        .4byte getEnd__Q24Game12TNodeItemMgrFv
        .4byte __dt__Q34Game8ItemHole3MgrFv
    .global __vt__Q24Game8CItemFSM
    __vt__Q24Game8CItemFSM:
        .4byte 0
        .4byte 0
        .4byte "init__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .global "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"
    "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>":
        .4byte 0
        .4byte 0
        .4byte "init__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .global __vt__Q34Game8ItemHole4Item
    __vt__Q34Game8ItemHole4Item:
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
        .4byte constructor__Q24Game8CFSMItemFv
        .4byte onInit__Q34Game8ItemHole4ItemFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game8BaseItemFv
        .4byte doEntry__Q24Game8BaseItemFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8BaseItemFf
        .4byte doDirectDraw__Q34Game8ItemHole4ItemFR8Graphics
        .4byte getBodyRadius__Q24Game8CreatureFv
        .4byte getCellRadius__Q24Game8CreatureFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q34Game8ItemHole4ItemFv
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
        .4byte bounceCallback__Q24Game8CFSMItemFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game8CFSMItemFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CFSMItemFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game8BaseItemFv
        .4byte getPSCreature__Q24Game8BaseItemFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game8BaseItemFv
        .4byte sound_culling__Q34Game8ItemHole4ItemFv
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
        .4byte movieUserCommand__Q34Game8ItemHole4ItemFUlPQ24Game11MoviePlayer
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
        .4byte getCreatureName__Q34Game8ItemHole4ItemFv
        .4byte getCreatureID__Q24Game8BaseItemFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q34Game8ItemHole4ItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q34Game8ItemHole4ItemFv
        .4byte doAI__Q34Game8ItemHole4ItemFv
        .4byte move__Q24Game8BaseItemFf
        .4byte changeMaterial__Q34Game8ItemHole4ItemFv
        .4byte do_updateLOD__Q24Game8BaseItemFv
        .4byte do_setLODParm__Q34Game8ItemHole4ItemFRQ24Game9AILODParm
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
   interactGotKey__Q34Game8ItemHole4ItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q24Game8BaseItemFv .4byte update__Q24Game8BaseItemFv
        .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q34Game8ItemHole4ItemFv
        .4byte createFSM__Q34Game8ItemHole4ItemFv
        .4byte onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent
    .global "__vt__Q23efx28TSyncGroup4<Q23efx8TForever>"
    "__vt__Q23efx28TSyncGroup4<Q23efx8TForever>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
    .global __vt__Q23efx9TForever4
    __vt__Q23efx9TForever4:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
    .global __vt__Q23efx8WarpZone
    __vt__Q23efx8WarpZone:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
        .4byte "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
    .global __vt__Q34Game8ItemHole10CloseState
    __vt__Q34Game8ItemHole10CloseState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItemPQ24Game8StateArg .4byte
   exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem .4byte
   cleanup__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem .4byte
   "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem" .4byte
   "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem" .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
        .4byte
   onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
        .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
        .4byte
   onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
        .4byte
   onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent .4byte
   canRide__Q34Game8ItemHole5StateFv .global __vt__Q34Game8ItemHole11AppearState
    __vt__Q34Game8ItemHole11AppearState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItemPQ24Game8StateArg .4byte
   exec__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem .4byte
   cleanup__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem .4byte
   "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem" .4byte
   "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem" .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
        .4byte
   onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
        .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
        .4byte
   onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
        .4byte
   onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent .4byte
   canRide__Q34Game8ItemHole5StateFv .global __vt__Q34Game8ItemHole11NormalState
    __vt__Q34Game8ItemHole11NormalState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItemPQ24Game8StateArg .4byte
   exec__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem .4byte
   cleanup__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem .4byte
   "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem" .4byte
   "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem" .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
        .4byte
   onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
        .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
        .4byte
   onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
        .4byte
   onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent .4byte
   canRide__Q34Game8ItemHole11NormalStateFv .global __vt__Q34Game8ItemHole5State
    __vt__Q34Game8ItemHole5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
        .4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
        .4byte
   onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
        .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
        .4byte
   onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
        .4byte
   onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent .4byte
   canRide__Q34Game8ItemHole5StateFv .global __vt__Q24Game10CItemState
    __vt__Q24Game10CItemState:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
        .4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
        .4byte
   onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
        .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
        .4byte
   onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
        .4byte
   onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent .global
   "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"
    "__vt__Q24Game26FSMState<Q24Game8CFSMItem>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
        .4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .global __vt__Q34Game8ItemHole3FSM
    __vt__Q34Game8ItemHole3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game8ItemHole3FSMFPQ24Game8CFSMItem
        .4byte
   "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
        .4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
        .4byte
   "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515AC0
    lbl_80515AC0:
        .skip 0x4
    .global lbl_80515AC4
    lbl_80515AC4:
        .skip 0x4
    .global mgr__Q24Game8ItemHole
    mgr__Q24Game8ItemHole:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519638
    lbl_80519638:
        .4byte 0x00000000
    .global lbl_8051963C
    lbl_8051963C:
        .4byte 0x41C80000
    .global lbl_80519640
    lbl_80519640:
        .float 1.0
    .global lbl_80519644
    lbl_80519644:
        .4byte 0x3F555555
    .global lbl_80519648
    lbl_80519648:
        .4byte 0x42700000
    .global lbl_8051964C
    lbl_8051964C:
        .4byte 0x42F00000
    .global lbl_80519650
    lbl_80519650:
        .4byte 0x666C6167
        .4byte 0x00000000
    .global lbl_80519658
    lbl_80519658:
        .4byte 0x42480000
    .global lbl_8051965C
    lbl_8051965C:
        .4byte 0x42960000
    .global lbl_80519660
    lbl_80519660:
        .4byte 0x42200000
    .global lbl_80519664
    lbl_80519664:
        .4byte 0x3D99999A
    .global lbl_80519668
    lbl_80519668:
        .4byte 0x3D2E147B
    .global lbl_8051966C
    lbl_8051966C:
        .4byte 0x41200000
    .global lbl_80519670
    lbl_80519670:
        .4byte 0x486F6C65
        .4byte 0x00000000
    .global lbl_80519678
    lbl_80519678:
        .asciz "arc.szs"
*/

namespace Game {

/*
 * --INFO--
 * Address:	801D1738
 * Size:	000134
 */
void ItemHole::FSM::init(Game::CFSMItem*)
{
	create(HOLE_STATE_COUNT);
	registerState(new NormalState());
	registerState(new AppearState());
	registerState(new CloseState());
}

/*
 * --INFO--
 * Address:	801D186C
 * Size:	00003C
 * init__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItemPQ24Game8StateArg
 */
void ItemHole::NormalState::init(Game::CFSMItem* item, Game::StateArg* arg)
{
	static_cast<Item*>(item)->_1EC = 0.0f;
	item->setAlive(true);
}

/*
 * --INFO--
 * Address:	801D18A8
 * Size:	000004
 */
void ItemHole::NormalState::exec(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D18AC
 * Size:	000004
 */
void ItemHole::NormalState::cleanup(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D18B0
 * Size:	00005C
 * init__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItemPQ24Game8StateArg
 */
void ItemHole::AppearState::init(Game::CFSMItem* item, Game::StateArg* arg)
{
	item->setAlive(true);
	static_cast<Item*>(item)->_1EC = 25.0f;
	_10                            = 0.0f;
}

/*
 * --INFO--
 * Address:	801D190C
 * Size:	000118
 * exec__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem
 */
void ItemHole::AppearState::exec(Game::CFSMItem* item)
{
	_10 += sys->m_deltaTime;
	float v1 = -(_10 * 0.8333333f - 1.0f);
	if (v1 <= 0.0f) {
		efx::Arg arg;
		arg.m_position = item->getPosition();
		static_cast<Item*>(item)->_1E0->create(&arg);
		transit(item, Hole_Normal, nullptr);
		v1 = 0.0f;
	}
	static_cast<Item*>(item)->_1EC = v1 * 25.0f;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lwz      r5, sys@sda21(r13)
	mr       r30, r3
	lfs      f1, 0x10(r3)
	mr       r31, r4
	lfs      f0, 0x54(r5)
	lfs      f3, lbl_80519644@sda21(r2)
	fadds    f2, f1, f0
	lfs      f1, lbl_80519640@sda21(r2)
	lfs      f0, lbl_80519638@sda21(r2)
	stfs     f2, 0x10(r3)
	lfs      f2, 0x10(r3)
	fnmsubs  f31, f3, f2, f1
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_801D19F8
	lis      r3, "zero__10Vector3<f>"@ha
	lis      r6, __vt__Q23efx3Arg@ha
	addi     r5, r3, "zero__10Vector3<f>"@l
	fmr      f31, f0
	lfs      f2, 0(r5)
	addi     r0, r6, __vt__Q23efx3Arg@l
	lfs      f1, 4(r5)
	addi     r3, r1, 8
	lfs      f0, 8(r5)
	stw      r0, 0x14(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	lwz      r3, 0x1e0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801D19F8:
	lfs      f0, lbl_8051963C@sda21(r2)
	fmuls    f0, f0, f31
	stfs     f0, 0x1ec(r31)
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1A24
 * Size:	000030
 */
// void FSMState<Game::CFSMItem>::transit(Game::CFSMItem*, int, Game::StateArg*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801D1A54
 * Size:	000004
 */
void ItemHole::AppearState::cleanup(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D1A58
 * Size:	00003C
 * init__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItemPQ24Game8StateArg
 */
void ItemHole::CloseState::init(Game::CFSMItem* item, Game::StateArg* arg)
{
	static_cast<Item*>(item)->_1EC = 25.0f;
	item->setAlive(false);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	lfs      f0, lbl_8051963C@sda21(r2)
	stw      r0, 0x14(r1)
	li       r4, 0
	stfs     f0, 0x1ec(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
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
 * Address:	801D1A94
 * Size:	000014
 * exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
 */
void ItemHole::CloseState::exec(Game::CFSMItem* item)
{
	item->getSound_AILOD()->m_flags
	    &= AILOD::IsMid | AILOD::IsFar | AILOD::FLAG_UNKNOWN4 | AILOD::VisibleOnViewport2 | AILOD::VisibleOnViewport3;
	/*
	lbz      r3, 0xd8(r4)
	li       r0, -53
	and      r0, r3, r0
	stb      r0, 0xd8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1AA8
 * Size:	000004
 */
void ItemHole::CloseState::cleanup(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D1AAC
 * Size:	00025C
 * movieUserCommand__Q34Game8ItemHole4ItemFUlPQ24Game11MoviePlayer
 */
void ItemHole::Item::movieUserCommand(unsigned long p1, Game::MoviePlayer* player)
{
	if (p1 == 100) {
		PelletIterator iterator;
		iterator.first();
		while (!iterator.isDone()) {
			Pellet* pellet = (Pellet*)(*iterator);
			if (pellet->isPickable() && pellet->isAlive()) {
				Vector3f pelletPos = pellet->getPosition();
				Vector3f holePos   = getPosition();
				if (qdist2(pelletPos.x, pelletPos.z, holePos.x, holePos.z) - pellet->getBottomRadius() < 60.0f) {
					pelletPos.y += 120.0f;
					pellet->setPosition(pelletPos, false);
				}
			}
			iterator.next();
		}
		if (player->m_flags & 2) {
			if (_1EC != 0.0f) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
			}
			efx::Arg arg(m_position);
			_1E0->create(&arg);
			m_stateMachine->transit(this, Hole_Normal, nullptr);
		} else {
			m_stateMachine->transit(this, Hole_Appear, nullptr);
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	cmpwi    r4, 0x64
	mr       r29, r3
	mr       r30, r5
	beq      lbl_801D1AE8
	b        lbl_801D1CDC

lbl_801D1AE8:
	addi     r3, r1, 0x3c
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x3c
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_801D1C04

lbl_801D1AFC:
	addi     r3, r1, 0x3c
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D1BFC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D1BFC
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r29
	lfs      f1, 0x18(r1)
	addi     r3, r1, 8
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x10(r1)
	mr       r3, r31
	lfs      f2, 0x38(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0x30(r1)
	fsubs    f30, f3, f2
	fsubs    f31, f1, f0
	bl       getBottomRadius__Q24Game6PelletFv
	fmuls    f2, f30, f30
	lfs      f0, lbl_80519638@sda21(r2)
	fmadds   f2, f31, f31, f2
	fcmpo    cr0, f2, f0
	ble      lbl_801D1BC8
	ble      lbl_801D1BCC
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_801D1BCC

lbl_801D1BC8:
	fmr      f2, f0

lbl_801D1BCC:
	fsubs    f1, f2, f1
	lfs      f0, lbl_80519648@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801D1BFC
	lfs      f1, 0x34(r1)
	mr       r3, r31
	lfs      f0, lbl_8051964C@sda21(r2)
	addi     r4, r1, 0x30
	li       r5, 0
	fadds    f0, f1, f0
	stfs     f0, 0x34(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_801D1BFC:
	addi     r3, r1, 0x3c
	bl       next__Q24Game14PelletIteratorFv

lbl_801D1C04:
	addi     r3, r1, 0x3c
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D1AFC
	lwz      r0, 0x1f0(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_801D1C44
	lwz      r3, 0x1d8(r29)
	mr       r4, r29
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_801D1CDC

lbl_801D1C44:
	lfs      f1, lbl_80519638@sda21(r2)
	lfs      f0, 0x1ec(r29)
	fcmpu    cr0, f1, f0
	beq      lbl_801D1C64
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_801D1C64:
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f2, "zero__10Vector3<f>"@l(r3)
	lis      r5, __vt__Q23efx3Arg@ha
	addi     r4, r1, 0x20
	lfs      f1, 4(r3)
	addi     r0, r5, __vt__Q23efx3Arg@l
	lfs      f0, 8(r3)
	stw      r0, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x19c(r29)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x1a0(r29)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x1a4(r29)
	stfs     f0, 0x2c(r1)
	lwz      r3, 0x1e0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1d8(r29)
	mr       r4, r29
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801D1CDC:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0x84(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1D08
 * Size:	000108
 */
bool ItemHole::Item::interactGotKey(Game::InteractGotKey& interaction)
{
	if (getStateID() == Hole_Close && gameSystem->m_flags & 0x20) {
		MoviePlayArg arg;
		arg.m_courseName            = nullptr;
		arg.m_movieName             = "g2F_appear_hole";
		arg._0C                     = nullptr;
		arg.m_origin.x              = 0.0f;
		arg.m_origin.y              = 0.0f;
		arg.m_origin.z              = 0.0f;
		arg.m_angle                 = 0.0f;
		arg.m_naviID                = 0;
		arg._10                     = nullptr;
		arg._08                     = nullptr;
		arg.m_streamID              = 0;
		arg._14                     = 0;
		arg.m_soundPosition         = nullptr;
		arg.m_origin                = getPosition();
		arg.m_angle                 = getFaceDir();
		arg._10                     = gameSystem->m_section->_CC;
		arg._0C                     = gameSystem->m_section->_C8;
		moviePlayer->m_targetObject = this;
		moviePlayer->play(arg);
		return true;
	}
	return false;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	bl       getStateID__Q24Game8CFSMItemFv
	cmpwi    r3, 2
	bne      lbl_801D1DF8
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_801D1DF8
	lfs      f0, lbl_80519638@sda21(r2)
	lis      r3, lbl_80480538@ha
	li       r0, 0
	mr       r4, r31
	addi     r5, r3, lbl_80480538@l
	stw      r0, 0x18(r1)
	addi     r3, r1, 8
	stw      r5, 0x14(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x14
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r5, 0x58(r5)
	lwz      r0, 0xcc(r5)
	stw      r0, 0x24(r1)
	lwz      r0, 0xc8(r5)
	stw      r0, 0x20(r1)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r3, 1
	b        lbl_801D1DFC

lbl_801D1DF8:
	li       r3, 0

lbl_801D1DFC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1E10
 * Size:	000008
 */
float ItemHole::Item::getFaceDir()
{
	return m_faceDirection;
	/*
	lfs      f1, 0x1e8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1E18
 * Size:	0000C0
 * onInit__Q34Game8ItemHole4ItemFPQ24Game15CreatureInitArg
 */
void ItemHole::Item::onInit(Game::CreatureInitArg* arg)
{
	m_nodeItemMgr->setup(this);
	setAlive(true);
	if (arg) {
		m_stateMachine->start(this, static_cast<InitArg*>(arg)->m_initialState, nullptr);
	} else {
		m_stateMachine->start(this, Hole_Normal, nullptr);
	}
	m_barrel        = nullptr;
	m_faceDirection = 0.0f;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r4, r30
	lwz      r3, 0x180(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	beq      lbl_801D1E90
	lwz      r3, 0x1d8(r30)
	mr       r4, r30
	lwz      r5, 4(r31)
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801D1EB0

lbl_801D1E90:
	lwz      r3, 0x1d8(r30)
	mr       r4, r30
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801D1EB0:
	li       r0, 0
	lfs      f0, lbl_80519638@sda21(r2)
	stw      r0, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1ED8
 * Size:	000078
 */
// void StateMachine<Game::CFSMItem>::start(Game::CFSMItem*, int, Game::StateArg*)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r6
// 	stw      r30, 0x18(r1)
// 	mr       r30, r5
// 	stw      r29, 0x14(r1)
// 	mr       r29, r4
// 	li       r4, 0
// 	stw      r28, 0x10(r1)
// 	mr       r28, r3
// 	mr       r3, r29
// 	bl "setCurrState__Q24Game8CFSMItemFPQ24Game26FSMState<Q24Game8CFSMItem>" mr
// 	r3, r28 mr       r4, r29 lwz      r12, 0(r28) mr       r5, r30 mr       r6,
// 	r31 lwz      r12, 0x14(r12) mtctr    r12 bctrl lwz      r0, 0x24(r1) lwz
// 	r31, 0x1c(r1) lwz      r30, 0x18(r1) lwz      r29, 0x14(r1) lwz      r28,
// 	0x10(r1) mtlr     r0 addi     r1, r1, 0x20 blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801D1F50
 * Size:	000050
 */
void ItemHole::Item::changeMaterial()
{
	m_model->jointVisible(false, m_model->getJoint("flag")->m_jointIndex);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_80519650@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lhz      r5, 0x38(r3)
	li       r4, 0
	lwz      r3, 0x174(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1FA0
 * Size:	0001DC
 */
void ItemHole::Item::onSetPosition()
{
	if (mapMgr) {
		m_position.y = mapMgr->getMinY(m_position);
	}
	Radar::Mgr::entry(this, Radar_Hole, 0);
	m_boundingSphere.m_position = m_position;
	m_boundingSphere.m_radius   = 50.0f;
	_1E0                        = new efx::WarpZone();
	makeTrMatrix();
	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
	m_model->m_j3dModel->calc();
	Matrixf* worldMatrix = m_model->m_joints[0]->getWorldMatrix();

	ID32 futa('futa');
	PlatAddInstanceArg arg1;
	arg1.m_item     = this;
	arg1.m_id       = futa;
	arg1.m_platform = mgr->_88;
	arg1._1C        = 75.0f;
	arg1.m_matrix   = worldMatrix;
	_1F0            = platMgr->addInstance(arg1);

	ID32 side('futa');
	PlatAddInstanceArg arg2;
	arg2.m_item     = this;
	arg2.m_id       = side;
	arg2.m_platform = mgr->_8C;
	arg2._1C        = 75.0f;
	arg2.m_matrix   = worldMatrix;
	_1F4            = platMgr->addInstance(arg2);

	_1F0->setCollision(true);
	_1F4->setCollision(true);
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	stw      r30, 0x68(r1)
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801D1FE0
	mr       r3, r0
	addi     r4, r31, 0x19c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1a0(r31)

lbl_801D1FE0:
	mr       r3, r31
	li       r4, 0x15
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	lfs      f1, 0x19c(r31)
	li       r3, 0x44
	lfs      f0, lbl_80519658@sda21(r2)
	stfs     f1, 0x1c4(r31)
	lfs      f1, 0x1a0(r31)
	stfs     f1, 0x1c8(r31)
	lfs      f1, 0x1a4(r31)
	stfs     f1, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801D2040
	li       r4, 0xaf
	li       r5, 0xb0
	li       r6, 0xb1
	li       r7, 0xb2
	bl       __ct__Q23efx9TForever4FUsUsUsUs
	lis      r3, __vt__Q23efx8WarpZone@ha
	addi     r0, r3, __vt__Q23efx8WarpZone@l
	stw      r0, 0(r30)

lbl_801D2040:
	stw      r30, 0x1e0(r31)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c4(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r31)
	lwz      r3, 0x10(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, 0x66757461@ha
	mr       r30, r3
	addi     r3, r1, 0x14
	addi     r4, r4, 0x66757461@l
	bl       __ct__4ID32FUl
	addi     r3, r1, 0x40
	bl       __ct__Q24Game18PlatAddInstanceArgFv
	stw      r31, 0x40(r1)
	addi     r3, r1, 0x44
	addi     r4, r1, 0x14
	li       r5, 5
	bl       __copy
	lwz      r0, 0x1c(r1)
	addi     r4, r1, 0x40
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	stw      r0, 0x4c(r1)
	lfs      f0, lbl_8051965C@sda21(r2)
	lwz      r0, 0x88(r3)
	lwz      r3, platMgr__4Game@sda21(r13)
	stw      r0, 0x50(r1)
	stw      r30, 0x54(r1)
	stfs     f0, 0x5c(r1)
	bl       addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
	stw      r3, 0x1f0(r31)
	lis      r4, 0x73696465@ha
	addi     r3, r1, 8
	addi     r4, r4, 0x73696465@l
	bl       __ct__4ID32FUl
	addi     r3, r1, 0x20
	bl       __ct__Q24Game18PlatAddInstanceArgFv
	stw      r31, 0x20(r1)
	addi     r3, r1, 0x24
	addi     r4, r1, 8
	li       r5, 5
	bl       __copy
	lwz      r0, 0x10(r1)
	addi     r4, r1, 0x20
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	stw      r0, 0x2c(r1)
	lfs      f0, lbl_8051965C@sda21(r2)
	lwz      r0, 0x8c(r3)
	lwz      r3, platMgr__4Game@sda21(r13)
	stw      r0, 0x30(r1)
	stw      r30, 0x34(r1)
	stfs     f0, 0x3c(r1)
	bl       addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
	stw      r3, 0x1f4(r31)
	li       r4, 1
	lwz      r3, 0x1f0(r31)
	bl       setCollision__Q24Game12PlatInstanceFb
	lwz      r3, 0x1f4(r31)
	li       r4, 1
	bl       setCollision__Q24Game12PlatInstanceFb
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D217C
 * Size:	000314
 * initDependency__Q34Game8ItemHole4ItemFv
 */
void ItemHole::Item::initDependency()
{
	bool result;
	Iterator<BaseItem> iterator(ItemBarrel::mgr);
	iterator.first();
	while (!iterator.isDone()) {
		BaseItem* item = (*iterator);
		if (item->isAlive()) {
			Vector3f holePos   = getPosition();
			Vector3f barrelPos = item->getPosition();
			if (qdist2(holePos.x, holePos.z, barrelPos.x, barrelPos.z) < 40.0f) {
				m_barrel = static_cast<ItemBarrel::Item*>(item);
				return;
			}
		}
		iterator.next();
	}
	if (getStateID() == Hole_Normal) {
		efx::Arg arg(m_position);
		_1E0->create(&arg);
	}
	m_barrel = nullptr;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r4, mgr__Q24Game10ItemBarrel@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801D21A4
	addi     r4, r4, 0x30

lbl_801D21A4:
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r3, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x3c(r1)
	cmplwi   r0, 0
	stw      r3, 0x30(r1)
	stw      r0, 0x34(r1)
	stw      r4, 0x38(r1)
	bne      lbl_801D21E4
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801D23E8

lbl_801D21E4:
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801D2254

lbl_801D2200:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D23E8
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801D2254:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D2200
	b        lbl_801D23E8

lbl_801D2274:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r30, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D232C
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x14(r1)
	fsubs    f3, f1, f0
	lfs      f1, 8(r1)
	lfs      f0, lbl_80519638@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f2, f3, f3
	fmadds   f1, f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_801D2314
	ble      lbl_801D2318
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801D2318

lbl_801D2314:
	fmr      f1, f0

lbl_801D2318:
	lfs      f0, lbl_80519660@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801D232C
	stw      r30, 0x1e4(r31)
	b        lbl_801D2478

lbl_801D232C:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_801D2358
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801D23E8

lbl_801D2358:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801D23CC

lbl_801D2378:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D23E8
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801D23CC:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D2378

lbl_801D23E8:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_801D2274
	mr       r3, r31
	bl       getStateID__Q24Game8CFSMItemFv
	cmpwi    r3, 0
	bne      lbl_801D2470
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f2, "zero__10Vector3<f>"@l(r3)
	lis      r5, __vt__Q23efx3Arg@ha
	addi     r4, r1, 0x20
	lfs      f1, 4(r3)
	addi     r0, r5, __vt__Q23efx3Arg@l
	lfs      f0, 8(r3)
	stw      r0, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x2c(r1)
	lwz      r3, 0x1e0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D2470:
	li       r0, 0
	stw      r0, 0x1e4(r31)

lbl_801D2478:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D2490
 * Size:	000068
 */
void ItemHole::Item::makeTrMatrix()
{
	Vector3f t(0.0f, getFaceDir(), 0.0f);
	Vector3f r(m_position.x, m_position.y - _1EC, m_position.z);
	m_mainMatrix.makeTR(t, r);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80519638@sda21(r2)
	mr       r6, r3
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	addi     r5, r1, 0x14
	lfs      f1, 0x1e8(r3)
	addi     r3, r6, 0x138
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x19c(r6)
	stfs     f0, 8(r1)
	lfs      f1, 0x1a0(r6)
	stfs     f1, 0xc(r1)
	lfs      f0, 0x1a4(r6)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1ec(r6)
	fsubs    f0, f1, f0
	stfs     f0, 0xc(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D24F8
 * Size:	000030
 */
bool ItemHole::Item::canRide()
{
	return static_cast<State*>(getCurrState())->canRide();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getCurrState__Q24Game8CFSMItemFv
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
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
 * Address:	801D2528
 * Size:	000008
 */
// u32 ItemHole::State::canRide() { return 0x0; }

/*
 * --INFO--
 * Address:	801D2530
 * Size:	000014
 */
void ItemHole::Item::do_setLODParm(Game::AILODParm& parm)
{
	parm.m_far   = 0.075f;
	parm.m_close = 0.0425f;
	/*
	lfs      f1, lbl_80519664@sda21(r2)
	lfs      f0, lbl_80519668@sda21(r2)
	stfs     f1, 0(r4)
	stfs     f0, 4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D2544
 * Size:	000008
 */
bool ItemHole::Item::sound_culling() { return false; }

/*
 * --INFO--
 * Address:	801D254C
 * Size:	0000E4
 */
void ItemHole::Item::doAI()
{
	_1E0->setRateLOD(getSound_AILOD()->m_flags & (AILOD::IsFar | AILOD::IsMid), true);
	CFSMItem::doAI();
	if (m_barrel) {
		if (!m_barrel->isAlive()) {
			m_barrel = nullptr;
			efx::Arg arg(getPosition());
			return _1E0->create(&arg);
		}
	} else {
		if (getStateID() != Hole_Close) {
			return PSPlayCaveHoleSound(m_soundObj);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0xd8(r3)
	lwz      r3, 0x1e0(r3)
	clrlwi   r4, r0, 0x1e
	bl       setRateLOD__Q23efx8WarpZoneFib
	mr       r3, r31
	bl       doAI__Q24Game8CFSMItemFv
	lwz      r3, 0x1e4(r31)
	cmplwi   r3, 0
	beq      lbl_801D2604
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D261C
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x1e4(r31)
	lis      r5, __vt__Q23efx3Arg@ha
	addi     r0, r5, __vt__Q23efx3Arg@l
	addi     r4, r1, 8
	lfsu     f2, "zero__10Vector3<f>"@l(r3)
	stw      r0, 8(r1)
	lfs      f1, 4(r3)
	lfs      f0, 8(r3)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x1e0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D261C

lbl_801D2604:
	mr       r3, r31
	bl       getStateID__Q24Game8CFSMItemFv
	cmpwi    r3, 2
	beq      lbl_801D261C
	lwz      r3, 0x17c(r31)
	bl       PSPlayCaveHoleSound__FPQ23PSM8Creature

lbl_801D261C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D2630
 * Size:	0000BC
 */
void ItemHole::Item::doDirectDraw(Graphics& gfx)
{
	Matrixf v1;
	gfx.initPrimDraw(nullptr);
	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, v1.m_matrix.mtxView);
	v1.m_matrix.structView.ty += 10.0f;
	GXSetLineWidth(40, 0);
	gfx.drawAxis(50.0f, &v1);
	gfx.initPrimDraw(nullptr);
	Vector3f infoPos = m_position;
	infoPos.y += 40.0f;
	drawLODInfo(gfx, infoPos);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 0x48(r1)
	mr       r30, r3
	mr       r3, r31
	bl       initPrimDraw__8GraphicsFP7Matrixf
	addi     r3, r30, 0x138
	addi     r4, r1, 0x14
	bl       PSMTXCopy
	lfs      f1, 0x30(r1)
	li       r3, 0x28
	lfs      f0, lbl_8051966C@sda21(r2)
	li       r4, 0
	fadds    f1, f1, f0
	lfs      f0, 0x20(r1)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x30(r1)
	bl       GXSetLineWidth
	lfs      f1, lbl_80519658@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawAxis__8GraphicsFfP7Matrixf
	mr       r3, r31
	li       r4, 0
	bl       initPrimDraw__8GraphicsFP7Matrixf
	lfs      f2, lbl_80519660@sda21(r2)
	mr       r3, r30
	lfs      f1, 0x1a0(r30)
	mr       r4, r31
	lfs      f3, 0x1a4(r30)
	addi     r5, r1, 8
	lfs      f0, 0x19c(r30)
	fadds    f1, f2, f1
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "drawLODInfo__Q24Game8CreatureFR8GraphicsR10Vector3<f>"
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D26EC
 * Size:	000058
 */
CItemFSM* ItemHole::Item::createFSM()
{
	return new FSM();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x1c
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801D2734
	lis      r4, "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"@ha
	lis      r5, __vt__Q24Game8CItemFSM@ha
	addi     r0, r4, "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"@l
	lis      r4, __vt__Q34Game8ItemHole3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, __vt__Q24Game8CItemFSM@l
	addi     r0, r4, __vt__Q34Game8ItemHole3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_801D2734:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D2744
 * Size:	00007C
 */
ItemHole::Mgr::Mgr()
    : TNodeItemMgr()
{
	setName("Hole");
	setModelSize(1);
	m_objectPathComponent = "user/Kando/objects/dungeon_hole";

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_801D2768
	addi     r0, r31, 0x90
	stw      r0, 4(r31)

lbl_801D2768:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game12TNodeItemMgrFv
	lis      r3, __vt__Q34Game8ItemHole3Mgr@ha
	addi     r0, r2, lbl_80519670@sda21
	addi     r4, r3, __vt__Q34Game8ItemHole3Mgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r5, r4, 0x74
	li       r4, 1
	stw      r5, 0x30(r31)
	stw      r0, 8(r31)
	bl       setModelSize__Q24Game11BaseItemMgrFi
	lis      r4, lbl_80480548@ha
	mr       r3, r31
	addi     r0, r4, lbl_80480548@l
	stw      r0, 0x28(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D27C0
 * Size:	000100
 */
void ItemHole::Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("dungeon_hole.bmd", 0, 0x20000);
	m_modelData[0]->newSharedDisplayList(0x40000);
	m_modelData[0]->makeSharedDL();
	JKRArchive* archive = openTextArc("texts.szs");
	_88                 = loadPlatform(archive, "cap_platform.bin");
	_88                 = loadPlatform(archive, "side_platform.bin");
	MapCode::Code code;
	code.setCode(1, 2, true);
	_88->setMapCodeAll(code);
	code.setCode(1, 1, true);
	_8C->setMapCodeAll(code);
	closeTextArc(archive);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80480520@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80480520@l
	addi     r4, r2, lbl_80519678@sda21
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r29
	addi     r4, r31, 0x48
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
	addi     r4, r31, 0x5c
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	mr       r0, r3
	mr       r3, r29
	mr       r30, r0
	addi     r5, r31, 0x68
	mr       r4, r30
	bl       loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	stw      r3, 0x88(r29)
	mr       r3, r29
	mr       r4, r30
	addi     r5, r31, 0x7c
	bl       loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	stw      r3, 0x8c(r29)
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 2
	li       r6, 1
	bl       setCode__Q27MapCode4CodeFiib
	lwz      r3, 0x88(r29)
	addi     r4, r1, 8
	bl       setMapCodeAll__8PlatformFRQ27MapCode4Code
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 1
	li       r6, 1
	bl       setCode__Q27MapCode4CodeFiib
	lwz      r3, 0x8c(r29)
	addi     r4, r1, 8
	bl       setMapCodeAll__8PlatformFRQ27MapCode4Code
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
 * Address:	801D28C0
 * Size:	0000BC
 */
void ItemHole::Mgr::setup(Game::BaseItem* item)
{
	item->m_model = new SysShape::Model(getModelData(0), 0x20000, 2);
	item->m_model->m_j3dModel->calc();
	item->m_model->m_j3dModel->calcMaterial();
	item->m_model->m_j3dModel->makeDL();
	item->m_model->m_j3dModel->lock();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801D2914
	mr       r3, r29
	li       r4, 0
	bl       getModelData__Q24Game11BaseItemMgrFi
	mr       r4, r3
	mr       r3, r31
	lis      r5, 2
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r31, r3

lbl_801D2914:
	stw      r31, 0x174(r30)
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
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
 * Address:	801D297C
 * Size:	000054
 */
BaseItem* ItemHole::Mgr::generatorBirth(Vector3f& position, Vector3f& p2, Game::GenItemParm* parm)
{
	BaseItem* item = birth();
	item->init(nullptr);
	item->setPosition(position, false);
	return item;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	bl       birth__Q24Game12TNodeItemMgrFv
	li       r4, 0
	mr       r31, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	mr       r4, r30
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D29D0
 * Size:	000134
 */
ItemHole::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801D2AE8
	lis      r3, __vt__Q34Game8ItemHole3Mgr@ha
	addi     r3, r3, __vt__Q34Game8ItemHole3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801D2AD8
	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801D2AA4
	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801D2A54
	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801D2A54:
	addic.   r0, r30, 0x4c
	beq      lbl_801D2AA4
	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801D2AA4
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_801D2AA4
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_801D2AA4:
	addic.   r0, r30, 0x30
	beq      lbl_801D2AD8
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x30(r30)
	beq      lbl_801D2AD8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_801D2AD8:
	extsh.   r0, r31
	ble      lbl_801D2AE8
	mr       r3, r30
	bl       __dl__FPv

lbl_801D2AE8:
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
 * Address:	801D2B04
 * Size:	000074
 */
BaseItem* ItemHole::Mgr::doNew()
{
	// TODO: Make enum for overworld object ID
	return new Item(0x405);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x1f8
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801D2B60
	li       r4, 0x405
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game8CFSMItem@ha
	lis      r3, __vt__Q34Game8ItemHole4Item@ha
	addi     r5, r4, __vt__Q24Game8CFSMItem@l
	li       r4, 0
	stw      r5, 0(r31)
	addi     r0, r5, 0x1b0
	addi     r3, r3, __vt__Q34Game8ItemHole4Item@l
	stw      r0, 0x178(r31)
	addi     r0, r3, 0x1b0
	stw      r4, 0x1d8(r31)
	stw      r4, 0x1dc(r31)
	stw      r3, 0(r31)
	stw      r0, 0x178(r31)

lbl_801D2B60:
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
 * Address:	801D2B78
 * Size:	00000C
 */
u32 ItemHole::Mgr::generatorGetID()
{
	return 'hole';
	/*
	lis      r3, 0x686F6C65@ha
	addi     r3, r3, 0x686F6C65@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D2B84
 * Size:	000008
 */
char* ItemHole::Item::getCreatureName()
{
	return "Hole";
	/*
	addi     r3, r2, lbl_80519670@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D2B8C
 * Size:	000004
 */
// void CItemState::onDamage(Game::CFSMItem*, float) { }

/*
 * --INFO--
 * Address:	801D2B90
 * Size:	000008
 */
// u32 ItemHole::NormalState::canRide() { return 0x1; }

/*
 * --INFO--
 * Address:	801D2B98
 * Size:	000004
 */
// void FSMState<Game::CFSMItem>::init(Game::CFSMItem*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	801D2B9C
 * Size:	000004
 */
// void FSMState<Game::CFSMItem>::cleanup(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D2BA0
 * Size:	000004
 */
// void FSMState<Game::CFSMItem>::resume(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D2BA4
 * Size:	000004
 */
// void FSMState<Game::CFSMItem>::restart(Game::CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D2BA8
 * Size:	000064
 */
// void StateMachine<Game::CFSMItem>::create(int)
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
 * Address:	801D2C0C
 * Size:	0000AC
 */
// void StateMachine<Game::CFSMItem>::transit(Game::CFSMItem*, int, Game::StateArg*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  rlwinm    r0,r5,2,0,29
// 	  stmw      r27, 0xC(r1)
// 	  mr        r28, r4
// 	  mr        r27, r3
// 	  mr        r29, r6
// 	  lwz       r4, 0x14(r3)
// 	  mr        r3, r28
// 	  lwzx      r30, r4, r0
// 	  bl        -0x6204
// 	  mr.       r31, r3
// 	  beq-      .loc_0x54
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r28
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x4(r31)
// 	  stw       r0, 0x18(r27)

// 	.loc_0x54:
// 	  lwz       r0, 0xC(r27)
// 	  cmpw      r30, r0
// 	  blt-      .loc_0x64

// 	.loc_0x60:
// 	  b         .loc_0x60

// 	.loc_0x64:
// 	  lwz       r4, 0x4(r27)
// 	  rlwinm    r0,r30,2,0,29
// 	  mr        r3, r28
// 	  lwzx      r31, r4, r0
// 	  mr        r4, r31
// 	  bl        -0x6258
// 	  mr        r3, r31
// 	  mr        r4, r28
// 	  lwz       r12, 0x0(r31)
// 	  mr        r5, r29
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
 * Address:	801D2CB8
 * Size:	000084
 */
// void StateMachine<Game::CFSMItem>::registerState(Game::FSMState<Game::CFSMItem>*)
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

} // namespace Game

/*
 * --INFO--
 * Address:	801D2D3C
 * Size:	000028
 */
// void __sinit_itemHole_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804B7970@ha
// 	stw      r0, lbl_80515AC0@sda21(r13)
// 	stfsu    f0, lbl_804B7970@l(r3)
// 	stfs     f0, lbl_80515AC4@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }

// namespace Game {

// /*
//  * --INFO--
//  * Address:	801D2D64
//  * Size:	000008
//  */
// ItemHole::Mgr::@48 @~Mgr()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        __dt__Q34Game8ItemHole3MgrFv
// 	*/
// }
// } // namespace Game
