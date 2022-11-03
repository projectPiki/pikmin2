.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemHole_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
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
.balign 8
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
	.4byte "generatorBirth__Q34Game8ItemHole3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game8ItemHole3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game8ItemHole3MgrFv
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
	.4byte "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
.global "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"
"__vt__Q24Game30StateMachine<Q24Game8CFSMItem>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
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
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q34Game8ItemHole4ItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
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
	.4byte init__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte canRide__Q34Game8ItemHole5StateFv
.global __vt__Q34Game8ItemHole11AppearState
__vt__Q34Game8ItemHole11AppearState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte canRide__Q34Game8ItemHole5StateFv
.global __vt__Q34Game8ItemHole11NormalState
__vt__Q34Game8ItemHole11NormalState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte canRide__Q34Game8ItemHole11NormalStateFv
.global __vt__Q34Game8ItemHole5State
__vt__Q34Game8ItemHole5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte canRide__Q34Game8ItemHole5StateFv
.global __vt__Q24Game10CItemState
__vt__Q24Game10CItemState:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
.global "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"
"__vt__Q24Game26FSMState<Q24Game8CFSMItem>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
.global __vt__Q34Game8ItemHole3FSM
__vt__Q34Game8ItemHole3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemHole3FSMFPQ24Game8CFSMItem
	.4byte "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
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
.balign 8
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game8ItemHole3FSMFPQ24Game8CFSMItem
init__Q34Game8ItemHole3FSMFPQ24Game8CFSMItem:
/* 801D1738 001CE678  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D173C 001CE67C  7C 08 02 A6 */	mflr r0
/* 801D1740 001CE680  38 80 00 03 */	li r4, 3
/* 801D1744 001CE684  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D1748 001CE688  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D174C 001CE68C  7C 7F 1B 78 */	mr r31, r3
/* 801D1750 001CE690  48 00 14 59 */	bl "create__Q24Game30StateMachine<Q24Game8CFSMItem>Fi"
/* 801D1754 001CE694  38 60 00 10 */	li r3, 0x10
/* 801D1758 001CE698  4B E5 27 4D */	bl __nw__FUl
/* 801D175C 001CE69C  7C 64 1B 79 */	or. r4, r3, r3
/* 801D1760 001CE6A0  41 82 00 40 */	beq .L_801D17A0
/* 801D1764 001CE6A4  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D1768 001CE6A8  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D176C 001CE6AC  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D1770 001CE6B0  3C A0 80 4B */	lis r5, __vt__Q34Game8ItemHole5State@ha
/* 801D1774 001CE6B4  90 04 00 00 */	stw r0, 0(r4)
/* 801D1778 001CE6B8  38 E0 00 00 */	li r7, 0
/* 801D177C 001CE6BC  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole11NormalState@ha
/* 801D1780 001CE6C0  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D1784 001CE6C4  90 E4 00 04 */	stw r7, 4(r4)
/* 801D1788 001CE6C8  38 A5 7D 8C */	addi r5, r5, __vt__Q34Game8ItemHole5State@l
/* 801D178C 001CE6CC  38 03 7D 54 */	addi r0, r3, __vt__Q34Game8ItemHole11NormalState@l
/* 801D1790 001CE6D0  90 E4 00 08 */	stw r7, 8(r4)
/* 801D1794 001CE6D4  90 C4 00 00 */	stw r6, 0(r4)
/* 801D1798 001CE6D8  90 A4 00 00 */	stw r5, 0(r4)
/* 801D179C 001CE6DC  90 04 00 00 */	stw r0, 0(r4)
.L_801D17A0:
/* 801D17A0 001CE6E0  7F E3 FB 78 */	mr r3, r31
/* 801D17A4 001CE6E4  48 00 15 15 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D17A8 001CE6E8  38 60 00 14 */	li r3, 0x14
/* 801D17AC 001CE6EC  4B E5 26 F9 */	bl __nw__FUl
/* 801D17B0 001CE6F0  7C 64 1B 79 */	or. r4, r3, r3
/* 801D17B4 001CE6F4  41 82 00 44 */	beq .L_801D17F8
/* 801D17B8 001CE6F8  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D17BC 001CE6FC  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D17C0 001CE700  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D17C4 001CE704  3C A0 80 4B */	lis r5, __vt__Q34Game8ItemHole5State@ha
/* 801D17C8 001CE708  90 04 00 00 */	stw r0, 0(r4)
/* 801D17CC 001CE70C  38 00 00 01 */	li r0, 1
/* 801D17D0 001CE710  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole11AppearState@ha
/* 801D17D4 001CE714  38 E0 00 00 */	li r7, 0
/* 801D17D8 001CE718  90 04 00 04 */	stw r0, 4(r4)
/* 801D17DC 001CE71C  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D17E0 001CE720  38 A5 7D 8C */	addi r5, r5, __vt__Q34Game8ItemHole5State@l
/* 801D17E4 001CE724  38 03 7D 1C */	addi r0, r3, __vt__Q34Game8ItemHole11AppearState@l
/* 801D17E8 001CE728  90 E4 00 08 */	stw r7, 8(r4)
/* 801D17EC 001CE72C  90 C4 00 00 */	stw r6, 0(r4)
/* 801D17F0 001CE730  90 A4 00 00 */	stw r5, 0(r4)
/* 801D17F4 001CE734  90 04 00 00 */	stw r0, 0(r4)
.L_801D17F8:
/* 801D17F8 001CE738  7F E3 FB 78 */	mr r3, r31
/* 801D17FC 001CE73C  48 00 14 BD */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D1800 001CE740  38 60 00 10 */	li r3, 0x10
/* 801D1804 001CE744  4B E5 26 A1 */	bl __nw__FUl
/* 801D1808 001CE748  7C 64 1B 79 */	or. r4, r3, r3
/* 801D180C 001CE74C  41 82 00 44 */	beq .L_801D1850
/* 801D1810 001CE750  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D1814 001CE754  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D1818 001CE758  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D181C 001CE75C  3C A0 80 4B */	lis r5, __vt__Q34Game8ItemHole5State@ha
/* 801D1820 001CE760  90 04 00 00 */	stw r0, 0(r4)
/* 801D1824 001CE764  38 00 00 02 */	li r0, 2
/* 801D1828 001CE768  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole10CloseState@ha
/* 801D182C 001CE76C  38 E0 00 00 */	li r7, 0
/* 801D1830 001CE770  90 04 00 04 */	stw r0, 4(r4)
/* 801D1834 001CE774  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D1838 001CE778  38 A5 7D 8C */	addi r5, r5, __vt__Q34Game8ItemHole5State@l
/* 801D183C 001CE77C  38 03 7C E4 */	addi r0, r3, __vt__Q34Game8ItemHole10CloseState@l
/* 801D1840 001CE780  90 E4 00 08 */	stw r7, 8(r4)
/* 801D1844 001CE784  90 C4 00 00 */	stw r6, 0(r4)
/* 801D1848 001CE788  90 A4 00 00 */	stw r5, 0(r4)
/* 801D184C 001CE78C  90 04 00 00 */	stw r0, 0(r4)
.L_801D1850:
/* 801D1850 001CE790  7F E3 FB 78 */	mr r3, r31
/* 801D1854 001CE794  48 00 14 65 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D1858 001CE798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D185C 001CE79C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D1860 001CE7A0  7C 08 03 A6 */	mtlr r0
/* 801D1864 001CE7A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801D1868 001CE7A8  4E 80 00 20 */	blr 

.global init__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItemPQ24Game8StateArg
init__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItemPQ24Game8StateArg:
/* 801D186C 001CE7AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D1870 001CE7B0  7C 08 02 A6 */	mflr r0
/* 801D1874 001CE7B4  7C 83 23 78 */	mr r3, r4
/* 801D1878 001CE7B8  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D187C 001CE7BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D1880 001CE7C0  38 80 00 01 */	li r4, 1
/* 801D1884 001CE7C4  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 801D1888 001CE7C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D188C 001CE7CC  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801D1890 001CE7D0  7D 89 03 A6 */	mtctr r12
/* 801D1894 001CE7D4  4E 80 04 21 */	bctrl 
/* 801D1898 001CE7D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D189C 001CE7DC  7C 08 03 A6 */	mtlr r0
/* 801D18A0 001CE7E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D18A4 001CE7E4  4E 80 00 20 */	blr 

.global exec__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem
exec__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem:
/* 801D18A8 001CE7E8  4E 80 00 20 */	blr 

.global cleanup__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem
cleanup__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem:
/* 801D18AC 001CE7EC  4E 80 00 20 */	blr 

.global init__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItemPQ24Game8StateArg
init__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItemPQ24Game8StateArg:
/* 801D18B0 001CE7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D18B4 001CE7F4  7C 08 02 A6 */	mflr r0
/* 801D18B8 001CE7F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D18BC 001CE7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D18C0 001CE800  7C 9F 23 78 */	mr r31, r4
/* 801D18C4 001CE804  38 80 00 01 */	li r4, 1
/* 801D18C8 001CE808  93 C1 00 08 */	stw r30, 8(r1)
/* 801D18CC 001CE80C  7C 7E 1B 78 */	mr r30, r3
/* 801D18D0 001CE810  7F E3 FB 78 */	mr r3, r31
/* 801D18D4 001CE814  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D18D8 001CE818  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801D18DC 001CE81C  7D 89 03 A6 */	mtctr r12
/* 801D18E0 001CE820  4E 80 04 21 */	bctrl 
/* 801D18E4 001CE824  C0 22 B2 DC */	lfs f1, lbl_8051963C@sda21(r2)
/* 801D18E8 001CE828  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D18EC 001CE82C  D0 3F 01 EC */	stfs f1, 0x1ec(r31)
/* 801D18F0 001CE830  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 801D18F4 001CE834  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D18F8 001CE838  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D18FC 001CE83C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D1900 001CE840  7C 08 03 A6 */	mtlr r0
/* 801D1904 001CE844  38 21 00 10 */	addi r1, r1, 0x10
/* 801D1908 001CE848  4E 80 00 20 */	blr 

.global exec__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem
exec__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem:
/* 801D190C 001CE84C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801D1910 001CE850  7C 08 02 A6 */	mflr r0
/* 801D1914 001CE854  90 01 00 44 */	stw r0, 0x44(r1)
/* 801D1918 001CE858  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801D191C 001CE85C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801D1920 001CE860  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801D1924 001CE864  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801D1928 001CE868  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801D192C 001CE86C  7C 7E 1B 78 */	mr r30, r3
/* 801D1930 001CE870  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 801D1934 001CE874  7C 9F 23 78 */	mr r31, r4
/* 801D1938 001CE878  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801D193C 001CE87C  C0 62 B2 E4 */	lfs f3, lbl_80519644@sda21(r2)
/* 801D1940 001CE880  EC 41 00 2A */	fadds f2, f1, f0
/* 801D1944 001CE884  C0 22 B2 E0 */	lfs f1, lbl_80519640@sda21(r2)
/* 801D1948 001CE888  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D194C 001CE88C  D0 43 00 10 */	stfs f2, 0x10(r3)
/* 801D1950 001CE890  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 801D1954 001CE894  EF E3 08 BC */	fnmsubs f31, f3, f2, f1
/* 801D1958 001CE898  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801D195C 001CE89C  4C 40 13 82 */	cror 2, 0, 2
/* 801D1960 001CE8A0  40 82 00 98 */	bne .L_801D19F8
/* 801D1964 001CE8A4  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801D1968 001CE8A8  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 801D196C 001CE8AC  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 801D1970 001CE8B0  FF E0 00 90 */	fmr f31, f0
/* 801D1974 001CE8B4  C0 45 00 00 */	lfs f2, 0(r5)
/* 801D1978 001CE8B8  38 06 A7 EC */	addi r0, r6, __vt__Q23efx3Arg@l
/* 801D197C 001CE8BC  C0 25 00 04 */	lfs f1, 4(r5)
/* 801D1980 001CE8C0  38 61 00 08 */	addi r3, r1, 8
/* 801D1984 001CE8C4  C0 05 00 08 */	lfs f0, 8(r5)
/* 801D1988 001CE8C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D198C 001CE8CC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801D1990 001CE8D0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801D1994 001CE8D4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801D1998 001CE8D8  81 84 00 00 */	lwz r12, 0(r4)
/* 801D199C 001CE8DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D19A0 001CE8E0  7D 89 03 A6 */	mtctr r12
/* 801D19A4 001CE8E4  4E 80 04 21 */	bctrl 
/* 801D19A8 001CE8E8  C0 41 00 08 */	lfs f2, 8(r1)
/* 801D19AC 001CE8EC  38 81 00 14 */	addi r4, r1, 0x14
/* 801D19B0 001CE8F0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801D19B4 001CE8F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801D19B8 001CE8F8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801D19BC 001CE8FC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801D19C0 001CE900  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801D19C4 001CE904  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 801D19C8 001CE908  81 83 00 00 */	lwz r12, 0(r3)
/* 801D19CC 001CE90C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D19D0 001CE910  7D 89 03 A6 */	mtctr r12
/* 801D19D4 001CE914  4E 80 04 21 */	bctrl 
/* 801D19D8 001CE918  7F C3 F3 78 */	mr r3, r30
/* 801D19DC 001CE91C  7F E4 FB 78 */	mr r4, r31
/* 801D19E0 001CE920  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D19E4 001CE924  38 A0 00 00 */	li r5, 0
/* 801D19E8 001CE928  38 C0 00 00 */	li r6, 0
/* 801D19EC 001CE92C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D19F0 001CE930  7D 89 03 A6 */	mtctr r12
/* 801D19F4 001CE934  4E 80 04 21 */	bctrl 
.L_801D19F8:
/* 801D19F8 001CE938  C0 02 B2 DC */	lfs f0, lbl_8051963C@sda21(r2)
/* 801D19FC 001CE93C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801D1A00 001CE940  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 801D1A04 001CE944  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801D1A08 001CE948  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801D1A0C 001CE94C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801D1A10 001CE950  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801D1A14 001CE954  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801D1A18 001CE958  7C 08 03 A6 */	mtlr r0
/* 801D1A1C 001CE95C  38 21 00 40 */	addi r1, r1, 0x40
/* 801D1A20 001CE960  4E 80 00 20 */	blr 

.global "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
"transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg":
/* 801D1A24 001CE964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D1A28 001CE968  7C 08 02 A6 */	mflr r0
/* 801D1A2C 001CE96C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D1A30 001CE970  80 63 00 08 */	lwz r3, 8(r3)
/* 801D1A34 001CE974  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1A38 001CE978  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D1A3C 001CE97C  7D 89 03 A6 */	mtctr r12
/* 801D1A40 001CE980  4E 80 04 21 */	bctrl 
/* 801D1A44 001CE984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D1A48 001CE988  7C 08 03 A6 */	mtlr r0
/* 801D1A4C 001CE98C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D1A50 001CE990  4E 80 00 20 */	blr 

.global cleanup__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem
cleanup__Q34Game8ItemHole11AppearStateFPQ24Game8CFSMItem:
/* 801D1A54 001CE994  4E 80 00 20 */	blr 

.global init__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItemPQ24Game8StateArg
init__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItemPQ24Game8StateArg:
/* 801D1A58 001CE998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D1A5C 001CE99C  7C 08 02 A6 */	mflr r0
/* 801D1A60 001CE9A0  7C 83 23 78 */	mr r3, r4
/* 801D1A64 001CE9A4  C0 02 B2 DC */	lfs f0, lbl_8051963C@sda21(r2)
/* 801D1A68 001CE9A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D1A6C 001CE9AC  38 80 00 00 */	li r4, 0
/* 801D1A70 001CE9B0  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 801D1A74 001CE9B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1A78 001CE9B8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801D1A7C 001CE9BC  7D 89 03 A6 */	mtctr r12
/* 801D1A80 001CE9C0  4E 80 04 21 */	bctrl 
/* 801D1A84 001CE9C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D1A88 001CE9C8  7C 08 03 A6 */	mtlr r0
/* 801D1A8C 001CE9CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801D1A90 001CE9D0  4E 80 00 20 */	blr 

.global exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem:
/* 801D1A94 001CE9D4  88 64 00 D8 */	lbz r3, 0xd8(r4)
/* 801D1A98 001CE9D8  38 00 FF CB */	li r0, -53
/* 801D1A9C 001CE9DC  7C 60 00 38 */	and r0, r3, r0
/* 801D1AA0 001CE9E0  98 04 00 D8 */	stb r0, 0xd8(r4)
/* 801D1AA4 001CE9E4  4E 80 00 20 */	blr 

.global cleanup__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
cleanup__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem:
/* 801D1AA8 001CE9E8  4E 80 00 20 */	blr 

.global movieUserCommand__Q34Game8ItemHole4ItemFUlPQ24Game11MoviePlayer
movieUserCommand__Q34Game8ItemHole4ItemFUlPQ24Game11MoviePlayer:
/* 801D1AAC 001CE9EC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801D1AB0 001CE9F0  7C 08 02 A6 */	mflr r0
/* 801D1AB4 001CE9F4  90 01 00 84 */	stw r0, 0x84(r1)
/* 801D1AB8 001CE9F8  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801D1ABC 001CE9FC  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801D1AC0 001CEA00  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 801D1AC4 001CEA04  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 801D1AC8 001CEA08  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801D1ACC 001CEA0C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801D1AD0 001CEA10  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801D1AD4 001CEA14  2C 04 00 64 */	cmpwi r4, 0x64
/* 801D1AD8 001CEA18  7C 7D 1B 78 */	mr r29, r3
/* 801D1ADC 001CEA1C  7C BE 2B 78 */	mr r30, r5
/* 801D1AE0 001CEA20  41 82 00 08 */	beq .L_801D1AE8
/* 801D1AE4 001CEA24  48 00 01 F8 */	b .L_801D1CDC
.L_801D1AE8:
/* 801D1AE8 001CEA28  38 61 00 3C */	addi r3, r1, 0x3c
/* 801D1AEC 001CEA2C  4B F9 AE 7D */	bl __ct__Q24Game14PelletIteratorFv
/* 801D1AF0 001CEA30  38 61 00 3C */	addi r3, r1, 0x3c
/* 801D1AF4 001CEA34  4B F9 AE 8D */	bl first__Q24Game14PelletIteratorFv
/* 801D1AF8 001CEA38  48 00 01 0C */	b .L_801D1C04
.L_801D1AFC:
/* 801D1AFC 001CEA3C  38 61 00 3C */	addi r3, r1, 0x3c
/* 801D1B00 001CEA40  4B F9 AE CD */	bl __ml__Q24Game14PelletIteratorFv
/* 801D1B04 001CEA44  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1B08 001CEA48  7C 7F 1B 78 */	mr r31, r3
/* 801D1B0C 001CEA4C  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 801D1B10 001CEA50  7D 89 03 A6 */	mtctr r12
/* 801D1B14 001CEA54  4E 80 04 21 */	bctrl 
/* 801D1B18 001CEA58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D1B1C 001CEA5C  41 82 00 E0 */	beq .L_801D1BFC
/* 801D1B20 001CEA60  7F E3 FB 78 */	mr r3, r31
/* 801D1B24 001CEA64  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D1B28 001CEA68  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801D1B2C 001CEA6C  7D 89 03 A6 */	mtctr r12
/* 801D1B30 001CEA70  4E 80 04 21 */	bctrl 
/* 801D1B34 001CEA74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D1B38 001CEA78  41 82 00 C4 */	beq .L_801D1BFC
/* 801D1B3C 001CEA7C  7F E4 FB 78 */	mr r4, r31
/* 801D1B40 001CEA80  38 61 00 14 */	addi r3, r1, 0x14
/* 801D1B44 001CEA84  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D1B48 001CEA88  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D1B4C 001CEA8C  7D 89 03 A6 */	mtctr r12
/* 801D1B50 001CEA90  4E 80 04 21 */	bctrl 
/* 801D1B54 001CEA94  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801D1B58 001CEA98  7F A4 EB 78 */	mr r4, r29
/* 801D1B5C 001CEA9C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801D1B60 001CEAA0  38 61 00 08 */	addi r3, r1, 8
/* 801D1B64 001CEAA4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801D1B68 001CEAA8  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 801D1B6C 001CEAAC  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 801D1B70 001CEAB0  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801D1B74 001CEAB4  81 9D 00 00 */	lwz r12, 0(r29)
/* 801D1B78 001CEAB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D1B7C 001CEABC  7D 89 03 A6 */	mtctr r12
/* 801D1B80 001CEAC0  4E 80 04 21 */	bctrl 
/* 801D1B84 001CEAC4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801D1B88 001CEAC8  7F E3 FB 78 */	mr r3, r31
/* 801D1B8C 001CEACC  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 801D1B90 001CEAD0  C0 21 00 08 */	lfs f1, 8(r1)
/* 801D1B94 001CEAD4  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 801D1B98 001CEAD8  EF C3 10 28 */	fsubs f30, f3, f2
/* 801D1B9C 001CEADC  EF E1 00 28 */	fsubs f31, f1, f0
/* 801D1BA0 001CEAE0  4B F9 4E 1D */	bl getBottomRadius__Q24Game6PelletFv
/* 801D1BA4 001CEAE4  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 801D1BA8 001CEAE8  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D1BAC 001CEAEC  EC 5F 17 FA */	fmadds f2, f31, f31, f2
/* 801D1BB0 001CEAF0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801D1BB4 001CEAF4  40 81 00 14 */	ble .L_801D1BC8
/* 801D1BB8 001CEAF8  40 81 00 14 */	ble .L_801D1BCC
/* 801D1BBC 001CEAFC  FC 00 10 34 */	frsqrte f0, f2
/* 801D1BC0 001CEB00  EC 40 00 B2 */	fmuls f2, f0, f2
/* 801D1BC4 001CEB04  48 00 00 08 */	b .L_801D1BCC
.L_801D1BC8:
/* 801D1BC8 001CEB08  FC 40 00 90 */	fmr f2, f0
.L_801D1BCC:
/* 801D1BCC 001CEB0C  EC 22 08 28 */	fsubs f1, f2, f1
/* 801D1BD0 001CEB10  C0 02 B2 E8 */	lfs f0, lbl_80519648@sda21(r2)
/* 801D1BD4 001CEB14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801D1BD8 001CEB18  40 80 00 24 */	bge .L_801D1BFC
/* 801D1BDC 001CEB1C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801D1BE0 001CEB20  7F E3 FB 78 */	mr r3, r31
/* 801D1BE4 001CEB24  C0 02 B2 EC */	lfs f0, lbl_8051964C@sda21(r2)
/* 801D1BE8 001CEB28  38 81 00 30 */	addi r4, r1, 0x30
/* 801D1BEC 001CEB2C  38 A0 00 00 */	li r5, 0
/* 801D1BF0 001CEB30  EC 01 00 2A */	fadds f0, f1, f0
/* 801D1BF4 001CEB34  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801D1BF8 001CEB38  4B F6 95 B1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_801D1BFC:
/* 801D1BFC 001CEB3C  38 61 00 3C */	addi r3, r1, 0x3c
/* 801D1C00 001CEB40  4B F9 AE 35 */	bl next__Q24Game14PelletIteratorFv
.L_801D1C04:
/* 801D1C04 001CEB44  38 61 00 3C */	addi r3, r1, 0x3c
/* 801D1C08 001CEB48  4B F9 AE ED */	bl isDone__Q24Game14PelletIteratorFv
/* 801D1C0C 001CEB4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D1C10 001CEB50  41 82 FE EC */	beq .L_801D1AFC
/* 801D1C14 001CEB54  80 1E 01 F0 */	lwz r0, 0x1f0(r30)
/* 801D1C18 001CEB58  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801D1C1C 001CEB5C  40 82 00 28 */	bne .L_801D1C44
/* 801D1C20 001CEB60  80 7D 01 D8 */	lwz r3, 0x1d8(r29)
/* 801D1C24 001CEB64  7F A4 EB 78 */	mr r4, r29
/* 801D1C28 001CEB68  38 A0 00 01 */	li r5, 1
/* 801D1C2C 001CEB6C  38 C0 00 00 */	li r6, 0
/* 801D1C30 001CEB70  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1C34 001CEB74  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D1C38 001CEB78  7D 89 03 A6 */	mtctr r12
/* 801D1C3C 001CEB7C  4E 80 04 21 */	bctrl 
/* 801D1C40 001CEB80  48 00 00 9C */	b .L_801D1CDC
.L_801D1C44:
/* 801D1C44 001CEB84  C0 22 B2 D8 */	lfs f1, lbl_80519638@sda21(r2)
/* 801D1C48 001CEB88  C0 1D 01 EC */	lfs f0, 0x1ec(r29)
/* 801D1C4C 001CEB8C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 801D1C50 001CEB90  41 82 00 14 */	beq .L_801D1C64
/* 801D1C54 001CEB94  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 801D1C58 001CEB98  38 80 18 1C */	li r4, 0x181c
/* 801D1C5C 001CEB9C  38 A0 00 00 */	li r5, 0
/* 801D1C60 001CEBA0  48 16 69 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_801D1C64:
/* 801D1C64 001CEBA4  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801D1C68 001CEBA8  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 801D1C6C 001CEBAC  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801D1C70 001CEBB0  38 81 00 20 */	addi r4, r1, 0x20
/* 801D1C74 001CEBB4  C0 23 00 04 */	lfs f1, 4(r3)
/* 801D1C78 001CEBB8  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801D1C7C 001CEBBC  C0 03 00 08 */	lfs f0, 8(r3)
/* 801D1C80 001CEBC0  90 01 00 20 */	stw r0, 0x20(r1)
/* 801D1C84 001CEBC4  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 801D1C88 001CEBC8  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801D1C8C 001CEBCC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801D1C90 001CEBD0  C0 1D 01 9C */	lfs f0, 0x19c(r29)
/* 801D1C94 001CEBD4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801D1C98 001CEBD8  C0 1D 01 A0 */	lfs f0, 0x1a0(r29)
/* 801D1C9C 001CEBDC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801D1CA0 001CEBE0  C0 1D 01 A4 */	lfs f0, 0x1a4(r29)
/* 801D1CA4 001CEBE4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801D1CA8 001CEBE8  80 7D 01 E0 */	lwz r3, 0x1e0(r29)
/* 801D1CAC 001CEBEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1CB0 001CEBF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D1CB4 001CEBF4  7D 89 03 A6 */	mtctr r12
/* 801D1CB8 001CEBF8  4E 80 04 21 */	bctrl 
/* 801D1CBC 001CEBFC  80 7D 01 D8 */	lwz r3, 0x1d8(r29)
/* 801D1CC0 001CEC00  7F A4 EB 78 */	mr r4, r29
/* 801D1CC4 001CEC04  38 A0 00 00 */	li r5, 0
/* 801D1CC8 001CEC08  38 C0 00 00 */	li r6, 0
/* 801D1CCC 001CEC0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1CD0 001CEC10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D1CD4 001CEC14  7D 89 03 A6 */	mtctr r12
/* 801D1CD8 001CEC18  4E 80 04 21 */	bctrl 
.L_801D1CDC:
/* 801D1CDC 001CEC1C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801D1CE0 001CEC20  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801D1CE4 001CEC24  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801D1CE8 001CEC28  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801D1CEC 001CEC2C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801D1CF0 001CEC30  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801D1CF4 001CEC34  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801D1CF8 001CEC38  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 801D1CFC 001CEC3C  7C 08 03 A6 */	mtlr r0
/* 801D1D00 001CEC40  38 21 00 80 */	addi r1, r1, 0x80
/* 801D1D04 001CEC44  4E 80 00 20 */	blr 

.if version == 1
.global interactGotKey__Q34Game8ItemHole4ItemFRQ24Game14InteractGotKey
interactGotKey__Q34Game8ItemHole4ItemFRQ24Game14InteractGotKey:
/* 801D1D08 001CEC48  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801D1D0C 001CEC4C  7C 08 02 A6 */	mflr r0
/* 801D1D10 001CEC50  90 01 00 54 */	stw r0, 0x54(r1)
/* 801D1D14 001CEC54  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801D1D18 001CEC58  7C 7F 1B 78 */	mr r31, r3
/* 801D1D1C 001CEC5C  4B FF AD 21 */	bl getStateID__Q24Game8CFSMItemFv
/* 801D1D20 001CEC60  2C 03 00 02 */	cmpwi r3, 2
/* 801D1D24 001CEC64  40 82 00 D4 */	bne .L_801D1DF8
/* 801D1D28 001CEC68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801D1D2C 001CEC6C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801D1D30 001CEC70  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801D1D34 001CEC74  41 82 00 C4 */	beq .L_801D1DF8
/* 801D1D38 001CEC78  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D1D3C 001CEC7C  3C 60 80 48 */	lis r3, lbl_80480538@ha
/* 801D1D40 001CEC80  38 00 00 00 */	li r0, 0
/* 801D1D44 001CEC84  7F E4 FB 78 */	mr r4, r31
/* 801D1D48 001CEC88  38 A3 05 38 */	addi r5, r3, lbl_80480538@l
/* 801D1D4C 001CEC8C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801D1D50 001CEC90  38 61 00 08 */	addi r3, r1, 8
/* 801D1D54 001CEC94  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801D1D58 001CEC98  90 01 00 20 */	stw r0, 0x20(r1)
/* 801D1D5C 001CEC9C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801D1D60 001CECA0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801D1D64 001CECA4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801D1D68 001CECA8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801D1D6C 001CECAC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801D1D70 001CECB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D1D74 001CECB4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801D1D78 001CECB8  90 01 00 40 */	stw r0, 0x40(r1)
/* 801D1D7C 001CECBC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801D1D80 001CECC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801D1D84 001CECC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D1D88 001CECC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D1D8C 001CECCC  7D 89 03 A6 */	mtctr r12
/* 801D1D90 001CECD0  4E 80 04 21 */	bctrl 
/* 801D1D94 001CECD4  C0 41 00 08 */	lfs f2, 8(r1)
/* 801D1D98 001CECD8  7F E3 FB 78 */	mr r3, r31
/* 801D1D9C 001CECDC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801D1DA0 001CECE0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801D1DA4 001CECE4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801D1DA8 001CECE8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801D1DAC 001CECEC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801D1DB0 001CECF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D1DB4 001CECF4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801D1DB8 001CECF8  7D 89 03 A6 */	mtctr r12
/* 801D1DBC 001CECFC  4E 80 04 21 */	bctrl 
/* 801D1DC0 001CED00  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801D1DC4 001CED04  38 81 00 14 */	addi r4, r1, 0x14
/* 801D1DC8 001CED08  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801D1DCC 001CED0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801D1DD0 001CED10  80 A5 00 58 */	lwz r5, 0x58(r5)
/* 801D1DD4 001CED14  80 05 00 CC */	lwz r0, 0xec(r5)
/* 801D1DD8 001CED18  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D1DDC 001CED1C  80 05 00 C8 */	lwz r0, 0xe8(r5)
/* 801D1DE0 001CED20  90 01 00 20 */	stw r0, 0x20(r1)
/* 801D1DE4 001CED24  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801D1DE8 001CED28  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801D1DEC 001CED2C  48 25 AB E5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801D1DF0 001CED30  38 60 00 01 */	li r3, 1
/* 801D1DF4 001CED34  48 00 00 08 */	b .L_801D1DFC
.L_801D1DF8:
/* 801D1DF8 001CED38  38 60 00 00 */	li r3, 0
.L_801D1DFC:
/* 801D1DFC 001CED3C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801D1E00 001CED40  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801D1E04 001CED44  7C 08 03 A6 */	mtlr r0
/* 801D1E08 001CED48  38 21 00 50 */	addi r1, r1, 0x50
/* 801D1E0C 001CED4C  4E 80 00 20 */	blr 
.else
.global interactGotKey__Q34Game8ItemHole4ItemFRQ24Game14InteractGotKey
interactGotKey__Q34Game8ItemHole4ItemFRQ24Game14InteractGotKey:
/* 801D1D08 001CEC48  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801D1D0C 001CEC4C  7C 08 02 A6 */	mflr r0
/* 801D1D10 001CEC50  90 01 00 54 */	stw r0, 0x54(r1)
/* 801D1D14 001CEC54  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801D1D18 001CEC58  7C 7F 1B 78 */	mr r31, r3
/* 801D1D1C 001CEC5C  4B FF AD 21 */	bl getStateID__Q24Game8CFSMItemFv
/* 801D1D20 001CEC60  2C 03 00 02 */	cmpwi r3, 2
/* 801D1D24 001CEC64  40 82 00 D4 */	bne .L_801D1DF8
/* 801D1D28 001CEC68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801D1D2C 001CEC6C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801D1D30 001CEC70  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801D1D34 001CEC74  41 82 00 C4 */	beq .L_801D1DF8
/* 801D1D38 001CEC78  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D1D3C 001CEC7C  3C 60 80 48 */	lis r3, lbl_80480538@ha
/* 801D1D40 001CEC80  38 00 00 00 */	li r0, 0
/* 801D1D44 001CEC84  7F E4 FB 78 */	mr r4, r31
/* 801D1D48 001CEC88  38 A3 05 38 */	addi r5, r3, lbl_80480538@l
/* 801D1D4C 001CEC8C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801D1D50 001CEC90  38 61 00 08 */	addi r3, r1, 8
/* 801D1D54 001CEC94  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801D1D58 001CEC98  90 01 00 20 */	stw r0, 0x20(r1)
/* 801D1D5C 001CEC9C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801D1D60 001CECA0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801D1D64 001CECA4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801D1D68 001CECA8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801D1D6C 001CECAC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801D1D70 001CECB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D1D74 001CECB4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801D1D78 001CECB8  90 01 00 40 */	stw r0, 0x40(r1)
/* 801D1D7C 001CECBC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801D1D80 001CECC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801D1D84 001CECC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D1D88 001CECC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D1D8C 001CECCC  7D 89 03 A6 */	mtctr r12
/* 801D1D90 001CECD0  4E 80 04 21 */	bctrl 
/* 801D1D94 001CECD4  C0 41 00 08 */	lfs f2, 8(r1)
/* 801D1D98 001CECD8  7F E3 FB 78 */	mr r3, r31
/* 801D1D9C 001CECDC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801D1DA0 001CECE0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801D1DA4 001CECE4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801D1DA8 001CECE8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801D1DAC 001CECEC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801D1DB0 001CECF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D1DB4 001CECF4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801D1DB8 001CECF8  7D 89 03 A6 */	mtctr r12
/* 801D1DBC 001CECFC  4E 80 04 21 */	bctrl 
/* 801D1DC0 001CED00  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801D1DC4 001CED04  38 81 00 14 */	addi r4, r1, 0x14
/* 801D1DC8 001CED08  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801D1DCC 001CED0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801D1DD0 001CED10  80 A5 00 58 */	lwz r5, 0x58(r5)
/* 801D1DD4 001CED14  80 05 00 CC */	lwz r0, 0xcc(r5)
/* 801D1DD8 001CED18  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D1DDC 001CED1C  80 05 00 C8 */	lwz r0, 0xc8(r5)
/* 801D1DE0 001CED20  90 01 00 20 */	stw r0, 0x20(r1)
/* 801D1DE4 001CED24  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801D1DE8 001CED28  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801D1DEC 001CED2C  48 25 AB E5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801D1DF0 001CED30  38 60 00 01 */	li r3, 1
/* 801D1DF4 001CED34  48 00 00 08 */	b .L_801D1DFC
.L_801D1DF8:
/* 801D1DF8 001CED38  38 60 00 00 */	li r3, 0
.L_801D1DFC:
/* 801D1DFC 001CED3C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801D1E00 001CED40  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801D1E04 001CED44  7C 08 03 A6 */	mtlr r0
/* 801D1E08 001CED48  38 21 00 50 */	addi r1, r1, 0x50
/* 801D1E0C 001CED4C  4E 80 00 20 */	blr 
.endif

.global getFaceDir__Q34Game8ItemHole4ItemFv
getFaceDir__Q34Game8ItemHole4ItemFv:
/* 801D1E10 001CED50  C0 23 01 E8 */	lfs f1, 0x1e8(r3)
/* 801D1E14 001CED54  4E 80 00 20 */	blr 

.global onInit__Q34Game8ItemHole4ItemFPQ24Game15CreatureInitArg
onInit__Q34Game8ItemHole4ItemFPQ24Game15CreatureInitArg:
/* 801D1E18 001CED58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D1E1C 001CED5C  7C 08 02 A6 */	mflr r0
/* 801D1E20 001CED60  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D1E24 001CED64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D1E28 001CED68  7C 9F 23 78 */	mr r31, r4
/* 801D1E2C 001CED6C  93 C1 00 08 */	stw r30, 8(r1)
/* 801D1E30 001CED70  7C 7E 1B 78 */	mr r30, r3
/* 801D1E34 001CED74  7F C4 F3 78 */	mr r4, r30
/* 801D1E38 001CED78  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801D1E3C 001CED7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1E40 001CED80  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801D1E44 001CED84  7D 89 03 A6 */	mtctr r12
/* 801D1E48 001CED88  4E 80 04 21 */	bctrl 
/* 801D1E4C 001CED8C  7F C3 F3 78 */	mr r3, r30
/* 801D1E50 001CED90  38 80 00 01 */	li r4, 1
/* 801D1E54 001CED94  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D1E58 001CED98  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801D1E5C 001CED9C  7D 89 03 A6 */	mtctr r12
/* 801D1E60 001CEDA0  4E 80 04 21 */	bctrl 
/* 801D1E64 001CEDA4  28 1F 00 00 */	cmplwi r31, 0
/* 801D1E68 001CEDA8  41 82 00 28 */	beq .L_801D1E90
/* 801D1E6C 001CEDAC  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801D1E70 001CEDB0  7F C4 F3 78 */	mr r4, r30
/* 801D1E74 001CEDB4  80 BF 00 04 */	lwz r5, 4(r31)
/* 801D1E78 001CEDB8  38 C0 00 00 */	li r6, 0
/* 801D1E7C 001CEDBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1E80 001CEDC0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D1E84 001CEDC4  7D 89 03 A6 */	mtctr r12
/* 801D1E88 001CEDC8  4E 80 04 21 */	bctrl 
/* 801D1E8C 001CEDCC  48 00 00 24 */	b .L_801D1EB0
.L_801D1E90:
/* 801D1E90 001CEDD0  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801D1E94 001CEDD4  7F C4 F3 78 */	mr r4, r30
/* 801D1E98 001CEDD8  38 A0 00 00 */	li r5, 0
/* 801D1E9C 001CEDDC  38 C0 00 00 */	li r6, 0
/* 801D1EA0 001CEDE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1EA4 001CEDE4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D1EA8 001CEDE8  7D 89 03 A6 */	mtctr r12
/* 801D1EAC 001CEDEC  4E 80 04 21 */	bctrl 
.L_801D1EB0:
/* 801D1EB0 001CEDF0  38 00 00 00 */	li r0, 0
/* 801D1EB4 001CEDF4  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D1EB8 001CEDF8  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 801D1EBC 001CEDFC  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 801D1EC0 001CEE00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D1EC4 001CEE04  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D1EC8 001CEE08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D1ECC 001CEE0C  7C 08 03 A6 */	mtlr r0
/* 801D1ED0 001CEE10  38 21 00 10 */	addi r1, r1, 0x10
/* 801D1ED4 001CEE14  4E 80 00 20 */	blr 

.global "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
"start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg":
/* 801D1ED8 001CEE18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D1EDC 001CEE1C  7C 08 02 A6 */	mflr r0
/* 801D1EE0 001CEE20  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D1EE4 001CEE24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D1EE8 001CEE28  7C DF 33 78 */	mr r31, r6
/* 801D1EEC 001CEE2C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D1EF0 001CEE30  7C BE 2B 78 */	mr r30, r5
/* 801D1EF4 001CEE34  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D1EF8 001CEE38  7C 9D 23 78 */	mr r29, r4
/* 801D1EFC 001CEE3C  38 80 00 00 */	li r4, 0
/* 801D1F00 001CEE40  93 81 00 10 */	stw r28, 0x10(r1)
/* 801D1F04 001CEE44  7C 7C 1B 78 */	mr r28, r3
/* 801D1F08 001CEE48  7F A3 EB 78 */	mr r3, r29
/* 801D1F0C 001CEE4C  4B FF AB 21 */	bl "setCurrState__Q24Game8CFSMItemFPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D1F10 001CEE50  7F 83 E3 78 */	mr r3, r28
/* 801D1F14 001CEE54  7F A4 EB 78 */	mr r4, r29
/* 801D1F18 001CEE58  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D1F1C 001CEE5C  7F C5 F3 78 */	mr r5, r30
/* 801D1F20 001CEE60  7F E6 FB 78 */	mr r6, r31
/* 801D1F24 001CEE64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D1F28 001CEE68  7D 89 03 A6 */	mtctr r12
/* 801D1F2C 001CEE6C  4E 80 04 21 */	bctrl 
/* 801D1F30 001CEE70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D1F34 001CEE74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D1F38 001CEE78  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D1F3C 001CEE7C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D1F40 001CEE80  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801D1F44 001CEE84  7C 08 03 A6 */	mtlr r0
/* 801D1F48 001CEE88  38 21 00 20 */	addi r1, r1, 0x20
/* 801D1F4C 001CEE8C  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game8ItemHole4ItemFv
changeMaterial__Q34Game8ItemHole4ItemFv:
/* 801D1F50 001CEE90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D1F54 001CEE94  7C 08 02 A6 */	mflr r0
/* 801D1F58 001CEE98  38 82 B2 F0 */	addi r4, r2, lbl_80519650@sda21
/* 801D1F5C 001CEE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D1F60 001CEEA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D1F64 001CEEA4  7C 7F 1B 78 */	mr r31, r3
/* 801D1F68 001CEEA8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 801D1F6C 001CEEAC  48 26 D0 79 */	bl getJoint__Q28SysShape5ModelFPc
/* 801D1F70 001CEEB0  A0 A3 00 38 */	lhz r5, 0x38(r3)
/* 801D1F74 001CEEB4  38 80 00 00 */	li r4, 0
/* 801D1F78 001CEEB8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801D1F7C 001CEEBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D1F80 001CEEC0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801D1F84 001CEEC4  7D 89 03 A6 */	mtctr r12
/* 801D1F88 001CEEC8  4E 80 04 21 */	bctrl 
/* 801D1F8C 001CEECC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D1F90 001CEED0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D1F94 001CEED4  7C 08 03 A6 */	mtlr r0
/* 801D1F98 001CEED8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D1F9C 001CEEDC  4E 80 00 20 */	blr 

.global onSetPosition__Q34Game8ItemHole4ItemFv
onSetPosition__Q34Game8ItemHole4ItemFv:
/* 801D1FA0 001CEEE0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801D1FA4 001CEEE4  7C 08 02 A6 */	mflr r0
/* 801D1FA8 001CEEE8  90 01 00 74 */	stw r0, 0x74(r1)
/* 801D1FAC 001CEEEC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801D1FB0 001CEEF0  7C 7F 1B 78 */	mr r31, r3
/* 801D1FB4 001CEEF4  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801D1FB8 001CEEF8  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 801D1FBC 001CEEFC  28 00 00 00 */	cmplwi r0, 0
/* 801D1FC0 001CEF00  41 82 00 20 */	beq .L_801D1FE0
/* 801D1FC4 001CEF04  7C 03 03 78 */	mr r3, r0
/* 801D1FC8 001CEF08  38 9F 01 9C */	addi r4, r31, 0x19c
/* 801D1FCC 001CEF0C  81 83 00 04 */	lwz r12, 4(r3)
/* 801D1FD0 001CEF10  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801D1FD4 001CEF14  7D 89 03 A6 */	mtctr r12
/* 801D1FD8 001CEF18  4E 80 04 21 */	bctrl 
/* 801D1FDC 001CEF1C  D0 3F 01 A0 */	stfs f1, 0x1a0(r31)
.L_801D1FE0:
/* 801D1FE0 001CEF20  7F E3 FB 78 */	mr r3, r31
/* 801D1FE4 001CEF24  38 80 00 15 */	li r4, 0x15
/* 801D1FE8 001CEF28  38 A0 00 00 */	li r5, 0
/* 801D1FEC 001CEF2C  48 04 C5 99 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 801D1FF0 001CEF30  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 801D1FF4 001CEF34  38 60 00 44 */	li r3, 0x44
/* 801D1FF8 001CEF38  C0 02 B2 F8 */	lfs f0, lbl_80519658@sda21(r2)
/* 801D1FFC 001CEF3C  D0 3F 01 C4 */	stfs f1, 0x1c4(r31)
/* 801D2000 001CEF40  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 801D2004 001CEF44  D0 3F 01 C8 */	stfs f1, 0x1c8(r31)
/* 801D2008 001CEF48  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801D200C 001CEF4C  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 801D2010 001CEF50  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801D2014 001CEF54  4B E5 1E 91 */	bl __nw__FUl
/* 801D2018 001CEF58  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D201C 001CEF5C  41 82 00 24 */	beq .L_801D2040
/* 801D2020 001CEF60  38 80 00 AF */	li r4, 0xaf
/* 801D2024 001CEF64  38 A0 00 B0 */	li r5, 0xb0
/* 801D2028 001CEF68  38 C0 00 B1 */	li r6, 0xb1
/* 801D202C 001CEF6C  38 E0 00 B2 */	li r7, 0xb2
/* 801D2030 001CEF70  48 1D E1 79 */	bl __ct__Q23efx9TForever4FUsUsUsUs
/* 801D2034 001CEF74  3C 60 80 4B */	lis r3, __vt__Q23efx8WarpZone@ha
/* 801D2038 001CEF78  38 03 7C C8 */	addi r0, r3, __vt__Q23efx8WarpZone@l
/* 801D203C 001CEF7C  90 1E 00 00 */	stw r0, 0(r30)
.L_801D2040:
/* 801D2040 001CEF80  93 DF 01 E0 */	stw r30, 0x1e0(r31)
/* 801D2044 001CEF84  7F E3 FB 78 */	mr r3, r31
/* 801D2048 001CEF88  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D204C 001CEF8C  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 801D2050 001CEF90  7D 89 03 A6 */	mtctr r12
/* 801D2054 001CEF94  4E 80 04 21 */	bctrl 
/* 801D2058 001CEF98  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801D205C 001CEF9C  38 7F 01 38 */	addi r3, r31, 0x138
/* 801D2060 001CEFA0  80 84 00 08 */	lwz r4, 8(r4)
/* 801D2064 001CEFA4  38 84 00 24 */	addi r4, r4, 0x24
/* 801D2068 001CEFA8  4B F1 82 65 */	bl PSMTXCopy
/* 801D206C 001CEFAC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801D2070 001CEFB0  80 63 00 08 */	lwz r3, 8(r3)
/* 801D2074 001CEFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2078 001CEFB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D207C 001CEFBC  7D 89 03 A6 */	mtctr r12
/* 801D2080 001CEFC0  4E 80 04 21 */	bctrl 
/* 801D2084 001CEFC4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801D2088 001CEFC8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801D208C 001CEFCC  48 25 78 15 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801D2090 001CEFD0  3C 80 66 75 */	lis r4, 0x66757461@ha
/* 801D2094 001CEFD4  7C 7E 1B 78 */	mr r30, r3
/* 801D2098 001CEFD8  38 61 00 14 */	addi r3, r1, 0x14
/* 801D209C 001CEFDC  38 84 74 61 */	addi r4, r4, 0x66757461@l
/* 801D20A0 001CEFE0  48 24 12 09 */	bl __ct__4ID32FUl
/* 801D20A4 001CEFE4  38 61 00 40 */	addi r3, r1, 0x40
/* 801D20A8 001CEFE8  4B FF 38 19 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801D20AC 001CEFEC  93 E1 00 40 */	stw r31, 0x40(r1)
/* 801D20B0 001CEFF0  38 61 00 44 */	addi r3, r1, 0x44
/* 801D20B4 001CEFF4  38 81 00 14 */	addi r4, r1, 0x14
/* 801D20B8 001CEFF8  38 A0 00 05 */	li r5, 5
/* 801D20BC 001CEFFC  4B EE F6 5D */	bl __copy
/* 801D20C0 001CF000  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801D20C4 001CF004  38 81 00 40 */	addi r4, r1, 0x40
/* 801D20C8 001CF008  80 6D 94 48 */	lwz r3, mgr__Q24Game8ItemHole@sda21(r13)
/* 801D20CC 001CF00C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801D20D0 001CF010  C0 02 B2 FC */	lfs f0, lbl_8051965C@sda21(r2)
/* 801D20D4 001CF014  80 03 00 88 */	lwz r0, 0x88(r3)
/* 801D20D8 001CF018  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801D20DC 001CF01C  90 01 00 50 */	stw r0, 0x50(r1)
/* 801D20E0 001CF020  93 C1 00 54 */	stw r30, 0x54(r1)
/* 801D20E4 001CF024  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801D20E8 001CF028  4B FF 38 3D */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801D20EC 001CF02C  90 7F 01 F0 */	stw r3, 0x1f0(r31)
/* 801D20F0 001CF030  3C 80 73 69 */	lis r4, 0x73696465@ha
/* 801D20F4 001CF034  38 61 00 08 */	addi r3, r1, 8
/* 801D20F8 001CF038  38 84 64 65 */	addi r4, r4, 0x73696465@l
/* 801D20FC 001CF03C  48 24 11 AD */	bl __ct__4ID32FUl
/* 801D2100 001CF040  38 61 00 20 */	addi r3, r1, 0x20
/* 801D2104 001CF044  4B FF 37 BD */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801D2108 001CF048  93 E1 00 20 */	stw r31, 0x20(r1)
/* 801D210C 001CF04C  38 61 00 24 */	addi r3, r1, 0x24
/* 801D2110 001CF050  38 81 00 08 */	addi r4, r1, 8
/* 801D2114 001CF054  38 A0 00 05 */	li r5, 5
/* 801D2118 001CF058  4B EE F6 01 */	bl __copy
/* 801D211C 001CF05C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801D2120 001CF060  38 81 00 20 */	addi r4, r1, 0x20
/* 801D2124 001CF064  80 6D 94 48 */	lwz r3, mgr__Q24Game8ItemHole@sda21(r13)
/* 801D2128 001CF068  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801D212C 001CF06C  C0 02 B2 FC */	lfs f0, lbl_8051965C@sda21(r2)
/* 801D2130 001CF070  80 03 00 8C */	lwz r0, 0x8c(r3)
/* 801D2134 001CF074  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801D2138 001CF078  90 01 00 30 */	stw r0, 0x30(r1)
/* 801D213C 001CF07C  93 C1 00 34 */	stw r30, 0x34(r1)
/* 801D2140 001CF080  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801D2144 001CF084  4B FF 37 E1 */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801D2148 001CF088  90 7F 01 F4 */	stw r3, 0x1f4(r31)
/* 801D214C 001CF08C  38 80 00 01 */	li r4, 1
/* 801D2150 001CF090  80 7F 01 F0 */	lwz r3, 0x1f0(r31)
/* 801D2154 001CF094  4B FF 2A 81 */	bl setCollision__Q24Game12PlatInstanceFb
/* 801D2158 001CF098  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801D215C 001CF09C  38 80 00 01 */	li r4, 1
/* 801D2160 001CF0A0  4B FF 2A 75 */	bl setCollision__Q24Game12PlatInstanceFb
/* 801D2164 001CF0A4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801D2168 001CF0A8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801D216C 001CF0AC  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801D2170 001CF0B0  7C 08 03 A6 */	mtlr r0
/* 801D2174 001CF0B4  38 21 00 70 */	addi r1, r1, 0x70
/* 801D2178 001CF0B8  4E 80 00 20 */	blr 

.global initDependency__Q34Game8ItemHole4ItemFv
initDependency__Q34Game8ItemHole4ItemFv:
/* 801D217C 001CF0BC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801D2180 001CF0C0  7C 08 02 A6 */	mflr r0
/* 801D2184 001CF0C4  90 01 00 54 */	stw r0, 0x54(r1)
/* 801D2188 001CF0C8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801D218C 001CF0CC  7C 7F 1B 78 */	mr r31, r3
/* 801D2190 001CF0D0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801D2194 001CF0D4  80 8D 94 F0 */	lwz r4, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801D2198 001CF0D8  28 04 00 00 */	cmplwi r4, 0
/* 801D219C 001CF0DC  41 82 00 08 */	beq .L_801D21A4
/* 801D21A0 001CF0E0  38 84 00 30 */	addi r4, r4, 0x30
.L_801D21A4:
/* 801D21A4 001CF0E4  38 00 00 00 */	li r0, 0
/* 801D21A8 001CF0E8  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801D21AC 001CF0EC  38 63 05 60 */	addi r3, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801D21B0 001CF0F0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801D21B4 001CF0F4  28 00 00 00 */	cmplwi r0, 0
/* 801D21B8 001CF0F8  90 61 00 30 */	stw r3, 0x30(r1)
/* 801D21BC 001CF0FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801D21C0 001CF100  90 81 00 38 */	stw r4, 0x38(r1)
/* 801D21C4 001CF104  40 82 00 20 */	bne .L_801D21E4
/* 801D21C8 001CF108  7C 83 23 78 */	mr r3, r4
/* 801D21CC 001CF10C  81 84 00 00 */	lwz r12, 0(r4)
/* 801D21D0 001CF110  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D21D4 001CF114  7D 89 03 A6 */	mtctr r12
/* 801D21D8 001CF118  4E 80 04 21 */	bctrl 
/* 801D21DC 001CF11C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801D21E0 001CF120  48 00 02 08 */	b .L_801D23E8
.L_801D21E4:
/* 801D21E4 001CF124  7C 83 23 78 */	mr r3, r4
/* 801D21E8 001CF128  81 84 00 00 */	lwz r12, 0(r4)
/* 801D21EC 001CF12C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D21F0 001CF130  7D 89 03 A6 */	mtctr r12
/* 801D21F4 001CF134  4E 80 04 21 */	bctrl 
/* 801D21F8 001CF138  90 61 00 34 */	stw r3, 0x34(r1)
/* 801D21FC 001CF13C  48 00 00 58 */	b .L_801D2254
.L_801D2200:
/* 801D2200 001CF140  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D2204 001CF144  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D2208 001CF148  81 83 00 00 */	lwz r12, 0(r3)
/* 801D220C 001CF14C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D2210 001CF150  7D 89 03 A6 */	mtctr r12
/* 801D2214 001CF154  4E 80 04 21 */	bctrl 
/* 801D2218 001CF158  7C 64 1B 78 */	mr r4, r3
/* 801D221C 001CF15C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801D2220 001CF160  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2224 001CF164  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D2228 001CF168  7D 89 03 A6 */	mtctr r12
/* 801D222C 001CF16C  4E 80 04 21 */	bctrl 
/* 801D2230 001CF170  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D2234 001CF174  40 82 01 B4 */	bne .L_801D23E8
/* 801D2238 001CF178  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D223C 001CF17C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D2240 001CF180  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2244 001CF184  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D2248 001CF188  7D 89 03 A6 */	mtctr r12
/* 801D224C 001CF18C  4E 80 04 21 */	bctrl 
/* 801D2250 001CF190  90 61 00 34 */	stw r3, 0x34(r1)
.L_801D2254:
/* 801D2254 001CF194  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801D2258 001CF198  38 61 00 30 */	addi r3, r1, 0x30
/* 801D225C 001CF19C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D2260 001CF1A0  7D 89 03 A6 */	mtctr r12
/* 801D2264 001CF1A4  4E 80 04 21 */	bctrl 
/* 801D2268 001CF1A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D226C 001CF1AC  41 82 FF 94 */	beq .L_801D2200
/* 801D2270 001CF1B0  48 00 01 78 */	b .L_801D23E8
.L_801D2274:
/* 801D2274 001CF1B4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D2278 001CF1B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D227C 001CF1BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D2280 001CF1C0  7D 89 03 A6 */	mtctr r12
/* 801D2284 001CF1C4  4E 80 04 21 */	bctrl 
/* 801D2288 001CF1C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D228C 001CF1CC  7C 60 1B 78 */	mr r0, r3
/* 801D2290 001CF1D0  7C 1E 03 78 */	mr r30, r0
/* 801D2294 001CF1D4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801D2298 001CF1D8  7D 89 03 A6 */	mtctr r12
/* 801D229C 001CF1DC  4E 80 04 21 */	bctrl 
/* 801D22A0 001CF1E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D22A4 001CF1E4  41 82 00 88 */	beq .L_801D232C
/* 801D22A8 001CF1E8  7F E4 FB 78 */	mr r4, r31
/* 801D22AC 001CF1EC  38 61 00 08 */	addi r3, r1, 8
/* 801D22B0 001CF1F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D22B4 001CF1F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D22B8 001CF1F8  7D 89 03 A6 */	mtctr r12
/* 801D22BC 001CF1FC  4E 80 04 21 */	bctrl 
/* 801D22C0 001CF200  7F C4 F3 78 */	mr r4, r30
/* 801D22C4 001CF204  38 61 00 14 */	addi r3, r1, 0x14
/* 801D22C8 001CF208  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D22CC 001CF20C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D22D0 001CF210  7D 89 03 A6 */	mtctr r12
/* 801D22D4 001CF214  4E 80 04 21 */	bctrl 
/* 801D22D8 001CF218  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 801D22DC 001CF21C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801D22E0 001CF220  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801D22E4 001CF224  EC 61 00 28 */	fsubs f3, f1, f0
/* 801D22E8 001CF228  C0 21 00 08 */	lfs f1, 8(r1)
/* 801D22EC 001CF22C  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D22F0 001CF230  EC 22 08 28 */	fsubs f1, f2, f1
/* 801D22F4 001CF234  EC 43 00 F2 */	fmuls f2, f3, f3
/* 801D22F8 001CF238  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 801D22FC 001CF23C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801D2300 001CF240  40 81 00 14 */	ble .L_801D2314
/* 801D2304 001CF244  40 81 00 14 */	ble .L_801D2318
/* 801D2308 001CF248  FC 00 08 34 */	frsqrte f0, f1
/* 801D230C 001CF24C  EC 20 00 72 */	fmuls f1, f0, f1
/* 801D2310 001CF250  48 00 00 08 */	b .L_801D2318
.L_801D2314:
/* 801D2314 001CF254  FC 20 00 90 */	fmr f1, f0
.L_801D2318:
/* 801D2318 001CF258  C0 02 B3 00 */	lfs f0, lbl_80519660@sda21(r2)
/* 801D231C 001CF25C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801D2320 001CF260  40 80 00 0C */	bge .L_801D232C
/* 801D2324 001CF264  93 DF 01 E4 */	stw r30, 0x1e4(r31)
/* 801D2328 001CF268  48 00 01 50 */	b .L_801D2478
.L_801D232C:
/* 801D232C 001CF26C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801D2330 001CF270  28 00 00 00 */	cmplwi r0, 0
/* 801D2334 001CF274  40 82 00 24 */	bne .L_801D2358
/* 801D2338 001CF278  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D233C 001CF27C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D2340 001CF280  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2344 001CF284  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D2348 001CF288  7D 89 03 A6 */	mtctr r12
/* 801D234C 001CF28C  4E 80 04 21 */	bctrl 
/* 801D2350 001CF290  90 61 00 34 */	stw r3, 0x34(r1)
/* 801D2354 001CF294  48 00 00 94 */	b .L_801D23E8
.L_801D2358:
/* 801D2358 001CF298  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D235C 001CF29C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D2360 001CF2A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2364 001CF2A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D2368 001CF2A8  7D 89 03 A6 */	mtctr r12
/* 801D236C 001CF2AC  4E 80 04 21 */	bctrl 
/* 801D2370 001CF2B0  90 61 00 34 */	stw r3, 0x34(r1)
/* 801D2374 001CF2B4  48 00 00 58 */	b .L_801D23CC
.L_801D2378:
/* 801D2378 001CF2B8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D237C 001CF2BC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D2380 001CF2C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2384 001CF2C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D2388 001CF2C8  7D 89 03 A6 */	mtctr r12
/* 801D238C 001CF2CC  4E 80 04 21 */	bctrl 
/* 801D2390 001CF2D0  7C 64 1B 78 */	mr r4, r3
/* 801D2394 001CF2D4  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801D2398 001CF2D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D239C 001CF2DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D23A0 001CF2E0  7D 89 03 A6 */	mtctr r12
/* 801D23A4 001CF2E4  4E 80 04 21 */	bctrl 
/* 801D23A8 001CF2E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D23AC 001CF2EC  40 82 00 3C */	bne .L_801D23E8
/* 801D23B0 001CF2F0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D23B4 001CF2F4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D23B8 001CF2F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D23BC 001CF2FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D23C0 001CF300  7D 89 03 A6 */	mtctr r12
/* 801D23C4 001CF304  4E 80 04 21 */	bctrl 
/* 801D23C8 001CF308  90 61 00 34 */	stw r3, 0x34(r1)
.L_801D23CC:
/* 801D23CC 001CF30C  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801D23D0 001CF310  38 61 00 30 */	addi r3, r1, 0x30
/* 801D23D4 001CF314  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D23D8 001CF318  7D 89 03 A6 */	mtctr r12
/* 801D23DC 001CF31C  4E 80 04 21 */	bctrl 
/* 801D23E0 001CF320  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D23E4 001CF324  41 82 FF 94 */	beq .L_801D2378
.L_801D23E8:
/* 801D23E8 001CF328  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801D23EC 001CF32C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D23F0 001CF330  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D23F4 001CF334  7D 89 03 A6 */	mtctr r12
/* 801D23F8 001CF338  4E 80 04 21 */	bctrl 
/* 801D23FC 001CF33C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801D2400 001CF340  7C 04 18 40 */	cmplw r4, r3
/* 801D2404 001CF344  40 82 FE 70 */	bne .L_801D2274
/* 801D2408 001CF348  7F E3 FB 78 */	mr r3, r31
/* 801D240C 001CF34C  4B FF A6 31 */	bl getStateID__Q24Game8CFSMItemFv
/* 801D2410 001CF350  2C 03 00 00 */	cmpwi r3, 0
/* 801D2414 001CF354  40 82 00 5C */	bne .L_801D2470
/* 801D2418 001CF358  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801D241C 001CF35C  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 801D2420 001CF360  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801D2424 001CF364  38 81 00 20 */	addi r4, r1, 0x20
/* 801D2428 001CF368  C0 23 00 04 */	lfs f1, 4(r3)
/* 801D242C 001CF36C  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801D2430 001CF370  C0 03 00 08 */	lfs f0, 8(r3)
/* 801D2434 001CF374  90 01 00 20 */	stw r0, 0x20(r1)
/* 801D2438 001CF378  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 801D243C 001CF37C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801D2440 001CF380  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801D2444 001CF384  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801D2448 001CF388  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801D244C 001CF38C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801D2450 001CF390  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801D2454 001CF394  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801D2458 001CF398  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801D245C 001CF39C  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 801D2460 001CF3A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2464 001CF3A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D2468 001CF3A8  7D 89 03 A6 */	mtctr r12
/* 801D246C 001CF3AC  4E 80 04 21 */	bctrl 
.L_801D2470:
/* 801D2470 001CF3B0  38 00 00 00 */	li r0, 0
/* 801D2474 001CF3B4  90 1F 01 E4 */	stw r0, 0x1e4(r31)
.L_801D2478:
/* 801D2478 001CF3B8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801D247C 001CF3BC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801D2480 001CF3C0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801D2484 001CF3C4  7C 08 03 A6 */	mtlr r0
/* 801D2488 001CF3C8  38 21 00 50 */	addi r1, r1, 0x50
/* 801D248C 001CF3CC  4E 80 00 20 */	blr 

.global makeTrMatrix__Q34Game8ItemHole4ItemFv
makeTrMatrix__Q34Game8ItemHole4ItemFv:
/* 801D2490 001CF3D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D2494 001CF3D4  7C 08 02 A6 */	mflr r0
/* 801D2498 001CF3D8  C0 02 B2 D8 */	lfs f0, lbl_80519638@sda21(r2)
/* 801D249C 001CF3DC  7C 66 1B 78 */	mr r6, r3
/* 801D24A0 001CF3E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D24A4 001CF3E4  38 81 00 08 */	addi r4, r1, 8
/* 801D24A8 001CF3E8  38 A1 00 14 */	addi r5, r1, 0x14
/* 801D24AC 001CF3EC  C0 23 01 E8 */	lfs f1, 0x1e8(r3)
/* 801D24B0 001CF3F0  38 66 01 38 */	addi r3, r6, 0x138
/* 801D24B4 001CF3F4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801D24B8 001CF3F8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801D24BC 001CF3FC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801D24C0 001CF400  C0 06 01 9C */	lfs f0, 0x19c(r6)
/* 801D24C4 001CF404  D0 01 00 08 */	stfs f0, 8(r1)
/* 801D24C8 001CF408  C0 26 01 A0 */	lfs f1, 0x1a0(r6)
/* 801D24CC 001CF40C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801D24D0 001CF410  C0 06 01 A4 */	lfs f0, 0x1a4(r6)
/* 801D24D4 001CF414  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801D24D8 001CF418  C0 06 01 EC */	lfs f0, 0x1ec(r6)
/* 801D24DC 001CF41C  EC 01 00 28 */	fsubs f0, f1, f0
/* 801D24E0 001CF420  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801D24E4 001CF424  48 25 63 A5 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801D24E8 001CF428  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D24EC 001CF42C  7C 08 03 A6 */	mtlr r0
/* 801D24F0 001CF430  38 21 00 20 */	addi r1, r1, 0x20
/* 801D24F4 001CF434  4E 80 00 20 */	blr 

.global canRide__Q34Game8ItemHole4ItemFv
canRide__Q34Game8ItemHole4ItemFv:
/* 801D24F8 001CF438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D24FC 001CF43C  7C 08 02 A6 */	mflr r0
/* 801D2500 001CF440  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2504 001CF444  4B FF A5 31 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D2508 001CF448  81 83 00 00 */	lwz r12, 0(r3)
/* 801D250C 001CF44C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801D2510 001CF450  7D 89 03 A6 */	mtctr r12
/* 801D2514 001CF454  4E 80 04 21 */	bctrl 
/* 801D2518 001CF458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D251C 001CF45C  7C 08 03 A6 */	mtlr r0
/* 801D2520 001CF460  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2524 001CF464  4E 80 00 20 */	blr 

.global canRide__Q34Game8ItemHole5StateFv
canRide__Q34Game8ItemHole5StateFv:
/* 801D2528 001CF468  38 60 00 00 */	li r3, 0
/* 801D252C 001CF46C  4E 80 00 20 */	blr 

.global do_setLODParm__Q34Game8ItemHole4ItemFRQ24Game9AILODParm
do_setLODParm__Q34Game8ItemHole4ItemFRQ24Game9AILODParm:
/* 801D2530 001CF470  C0 22 B3 04 */	lfs f1, lbl_80519664@sda21(r2)
/* 801D2534 001CF474  C0 02 B3 08 */	lfs f0, lbl_80519668@sda21(r2)
/* 801D2538 001CF478  D0 24 00 00 */	stfs f1, 0(r4)
/* 801D253C 001CF47C  D0 04 00 04 */	stfs f0, 4(r4)
/* 801D2540 001CF480  4E 80 00 20 */	blr 

.global sound_culling__Q34Game8ItemHole4ItemFv
sound_culling__Q34Game8ItemHole4ItemFv:
/* 801D2544 001CF484  38 60 00 00 */	li r3, 0
/* 801D2548 001CF488  4E 80 00 20 */	blr 

.global doAI__Q34Game8ItemHole4ItemFv
doAI__Q34Game8ItemHole4ItemFv:
/* 801D254C 001CF48C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D2550 001CF490  7C 08 02 A6 */	mflr r0
/* 801D2554 001CF494  38 A0 00 01 */	li r5, 1
/* 801D2558 001CF498  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D255C 001CF49C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D2560 001CF4A0  7C 7F 1B 78 */	mr r31, r3
/* 801D2564 001CF4A4  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 801D2568 001CF4A8  80 63 01 E0 */	lwz r3, 0x1e0(r3)
/* 801D256C 001CF4AC  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 801D2570 001CF4B0  48 1E 3E 41 */	bl setRateLOD__Q23efx8WarpZoneFib
/* 801D2574 001CF4B4  7F E3 FB 78 */	mr r3, r31
/* 801D2578 001CF4B8  4B FF A4 81 */	bl doAI__Q24Game8CFSMItemFv
/* 801D257C 001CF4BC  80 7F 01 E4 */	lwz r3, 0x1e4(r31)
/* 801D2580 001CF4C0  28 03 00 00 */	cmplwi r3, 0
/* 801D2584 001CF4C4  41 82 00 80 */	beq .L_801D2604
/* 801D2588 001CF4C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D258C 001CF4CC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801D2590 001CF4D0  7D 89 03 A6 */	mtctr r12
/* 801D2594 001CF4D4  4E 80 04 21 */	bctrl 
/* 801D2598 001CF4D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D259C 001CF4DC  40 82 00 80 */	bne .L_801D261C
/* 801D25A0 001CF4E0  38 00 00 00 */	li r0, 0
/* 801D25A4 001CF4E4  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801D25A8 001CF4E8  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 801D25AC 001CF4EC  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801D25B0 001CF4F0  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801D25B4 001CF4F4  38 81 00 08 */	addi r4, r1, 8
/* 801D25B8 001CF4F8  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 801D25BC 001CF4FC  90 01 00 08 */	stw r0, 8(r1)
/* 801D25C0 001CF500  C0 23 00 04 */	lfs f1, 4(r3)
/* 801D25C4 001CF504  C0 03 00 08 */	lfs f0, 8(r3)
/* 801D25C8 001CF508  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 801D25CC 001CF50C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801D25D0 001CF510  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801D25D4 001CF514  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801D25D8 001CF518  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801D25DC 001CF51C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801D25E0 001CF520  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801D25E4 001CF524  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801D25E8 001CF528  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801D25EC 001CF52C  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 801D25F0 001CF530  81 83 00 00 */	lwz r12, 0(r3)
/* 801D25F4 001CF534  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D25F8 001CF538  7D 89 03 A6 */	mtctr r12
/* 801D25FC 001CF53C  4E 80 04 21 */	bctrl 
/* 801D2600 001CF540  48 00 00 1C */	b .L_801D261C
.L_801D2604:
/* 801D2604 001CF544  7F E3 FB 78 */	mr r3, r31
/* 801D2608 001CF548  4B FF A4 35 */	bl getStateID__Q24Game8CFSMItemFv
/* 801D260C 001CF54C  2C 03 00 02 */	cmpwi r3, 2
/* 801D2610 001CF550  41 82 00 0C */	beq .L_801D261C
/* 801D2614 001CF554  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801D2618 001CF558  48 29 CB 89 */	bl PSPlayCaveHoleSound__FPQ23PSM8Creature
.L_801D261C:
/* 801D261C 001CF55C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D2620 001CF560  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D2624 001CF564  7C 08 03 A6 */	mtlr r0
/* 801D2628 001CF568  38 21 00 20 */	addi r1, r1, 0x20
/* 801D262C 001CF56C  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game8ItemHole4ItemFR8Graphics
doDirectDraw__Q34Game8ItemHole4ItemFR8Graphics:
/* 801D2630 001CF570  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801D2634 001CF574  7C 08 02 A6 */	mflr r0
/* 801D2638 001CF578  90 01 00 54 */	stw r0, 0x54(r1)
/* 801D263C 001CF57C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801D2640 001CF580  7C 9F 23 78 */	mr r31, r4
/* 801D2644 001CF584  38 80 00 00 */	li r4, 0
/* 801D2648 001CF588  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801D264C 001CF58C  7C 7E 1B 78 */	mr r30, r3
/* 801D2650 001CF590  7F E3 FB 78 */	mr r3, r31
/* 801D2654 001CF594  48 25 31 C9 */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 801D2658 001CF598  38 7E 01 38 */	addi r3, r30, 0x138
/* 801D265C 001CF59C  38 81 00 14 */	addi r4, r1, 0x14
/* 801D2660 001CF5A0  4B F1 7C 6D */	bl PSMTXCopy
/* 801D2664 001CF5A4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801D2668 001CF5A8  38 60 00 28 */	li r3, 0x28
/* 801D266C 001CF5AC  C0 02 B3 0C */	lfs f0, lbl_8051966C@sda21(r2)
/* 801D2670 001CF5B0  38 80 00 00 */	li r4, 0
/* 801D2674 001CF5B4  EC 21 00 2A */	fadds f1, f1, f0
/* 801D2678 001CF5B8  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801D267C 001CF5BC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801D2680 001CF5C0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801D2684 001CF5C4  4B F1 34 5D */	bl GXSetLineWidth
/* 801D2688 001CF5C8  C0 22 B2 F8 */	lfs f1, lbl_80519658@sda21(r2)
/* 801D268C 001CF5CC  7F E3 FB 78 */	mr r3, r31
/* 801D2690 001CF5D0  38 81 00 14 */	addi r4, r1, 0x14
/* 801D2694 001CF5D4  48 25 3F 79 */	bl drawAxis__8GraphicsFfP7Matrixf
/* 801D2698 001CF5D8  7F E3 FB 78 */	mr r3, r31
/* 801D269C 001CF5DC  38 80 00 00 */	li r4, 0
/* 801D26A0 001CF5E0  48 25 31 7D */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 801D26A4 001CF5E4  C0 42 B3 00 */	lfs f2, lbl_80519660@sda21(r2)
/* 801D26A8 001CF5E8  7F C3 F3 78 */	mr r3, r30
/* 801D26AC 001CF5EC  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 801D26B0 001CF5F0  7F E4 FB 78 */	mr r4, r31
/* 801D26B4 001CF5F4  C0 7E 01 A4 */	lfs f3, 0x1a4(r30)
/* 801D26B8 001CF5F8  38 A1 00 08 */	addi r5, r1, 8
/* 801D26BC 001CF5FC  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 801D26C0 001CF600  EC 22 08 2A */	fadds f1, f2, f1
/* 801D26C4 001CF604  D0 01 00 08 */	stfs f0, 8(r1)
/* 801D26C8 001CF608  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801D26CC 001CF60C  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 801D26D0 001CF610  48 00 55 15 */	bl "drawLODInfo__Q24Game8CreatureFR8GraphicsR10Vector3<f>"
/* 801D26D4 001CF614  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801D26D8 001CF618  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801D26DC 001CF61C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801D26E0 001CF620  7C 08 03 A6 */	mtlr r0
/* 801D26E4 001CF624  38 21 00 50 */	addi r1, r1, 0x50
/* 801D26E8 001CF628  4E 80 00 20 */	blr 

.global createFSM__Q34Game8ItemHole4ItemFv
createFSM__Q34Game8ItemHole4ItemFv:
/* 801D26EC 001CF62C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D26F0 001CF630  7C 08 02 A6 */	mflr r0
/* 801D26F4 001CF634  38 60 00 1C */	li r3, 0x1c
/* 801D26F8 001CF638  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D26FC 001CF63C  4B E5 17 A9 */	bl __nw__FUl
/* 801D2700 001CF640  28 03 00 00 */	cmplwi r3, 0
/* 801D2704 001CF644  41 82 00 30 */	beq .L_801D2734
/* 801D2708 001CF648  3C 80 80 4B */	lis r4, "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"@ha
/* 801D270C 001CF64C  3C A0 80 4B */	lis r5, __vt__Q24Game8CItemFSM@ha
/* 801D2710 001CF650  38 04 7A 50 */	addi r0, r4, "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"@l
/* 801D2714 001CF654  3C 80 80 4B */	lis r4, __vt__Q34Game8ItemHole3FSM@ha
/* 801D2718 001CF658  90 03 00 00 */	stw r0, 0(r3)
/* 801D271C 001CF65C  38 C0 FF FF */	li r6, -1
/* 801D2720 001CF660  38 A5 7A 38 */	addi r5, r5, __vt__Q24Game8CItemFSM@l
/* 801D2724 001CF664  38 04 7E 18 */	addi r0, r4, __vt__Q34Game8ItemHole3FSM@l
/* 801D2728 001CF668  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801D272C 001CF66C  90 A3 00 00 */	stw r5, 0(r3)
/* 801D2730 001CF670  90 03 00 00 */	stw r0, 0(r3)
.L_801D2734:
/* 801D2734 001CF674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D2738 001CF678  7C 08 03 A6 */	mtlr r0
/* 801D273C 001CF67C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2740 001CF680  4E 80 00 20 */	blr 

.global __ct__Q34Game8ItemHole3MgrFv
__ct__Q34Game8ItemHole3MgrFv:
/* 801D2744 001CF684  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D2748 001CF688  7C 08 02 A6 */	mflr r0
/* 801D274C 001CF68C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2750 001CF690  7C 80 07 35 */	extsh. r0, r4
/* 801D2754 001CF694  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D2758 001CF698  7C 7F 1B 78 */	mr r31, r3
/* 801D275C 001CF69C  41 82 00 0C */	beq .L_801D2768
/* 801D2760 001CF6A0  38 1F 00 90 */	addi r0, r31, 0x90
/* 801D2764 001CF6A4  90 1F 00 04 */	stw r0, 4(r31)
.L_801D2768:
/* 801D2768 001CF6A8  7F E3 FB 78 */	mr r3, r31
/* 801D276C 001CF6AC  38 80 00 00 */	li r4, 0
/* 801D2770 001CF6B0  4B FF AC B1 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801D2774 001CF6B4  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole3Mgr@ha
/* 801D2778 001CF6B8  38 02 B3 10 */	addi r0, r2, lbl_80519670@sda21
/* 801D277C 001CF6BC  38 83 79 7C */	addi r4, r3, __vt__Q34Game8ItemHole3Mgr@l
/* 801D2780 001CF6C0  7F E3 FB 78 */	mr r3, r31
/* 801D2784 001CF6C4  90 9F 00 00 */	stw r4, 0(r31)
/* 801D2788 001CF6C8  38 A4 00 74 */	addi r5, r4, 0x74
/* 801D278C 001CF6CC  38 80 00 01 */	li r4, 1
/* 801D2790 001CF6D0  90 BF 00 30 */	stw r5, 0x30(r31)
/* 801D2794 001CF6D4  90 1F 00 08 */	stw r0, 8(r31)
/* 801D2798 001CF6D8  4B FF A6 35 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801D279C 001CF6DC  3C 80 80 48 */	lis r4, lbl_80480548@ha
/* 801D27A0 001CF6E0  7F E3 FB 78 */	mr r3, r31
/* 801D27A4 001CF6E4  38 04 05 48 */	addi r0, r4, lbl_80480548@l
/* 801D27A8 001CF6E8  90 1F 00 28 */	stw r0, 0x28(r31)
/* 801D27AC 001CF6EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D27B0 001CF6F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D27B4 001CF6F4  7C 08 03 A6 */	mtlr r0
/* 801D27B8 001CF6F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D27BC 001CF6FC  4E 80 00 20 */	blr 

.global onLoadResources__Q34Game8ItemHole3MgrFv
onLoadResources__Q34Game8ItemHole3MgrFv:
/* 801D27C0 001CF700  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D27C4 001CF704  7C 08 02 A6 */	mflr r0
/* 801D27C8 001CF708  3C 80 80 48 */	lis r4, lbl_80480520@ha
/* 801D27CC 001CF70C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D27D0 001CF710  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D27D4 001CF714  3B E4 05 20 */	addi r31, r4, lbl_80480520@l
/* 801D27D8 001CF718  38 82 B3 18 */	addi r4, r2, lbl_80519678@sda21
/* 801D27DC 001CF71C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D27E0 001CF720  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D27E4 001CF724  7C 7D 1B 78 */	mr r29, r3
/* 801D27E8 001CF728  4B FF A6 ED */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801D27EC 001CF72C  7F A3 EB 78 */	mr r3, r29
/* 801D27F0 001CF730  38 9F 00 48 */	addi r4, r31, 0x48
/* 801D27F4 001CF734  38 A0 00 00 */	li r5, 0
/* 801D27F8 001CF738  3C C0 00 02 */	lis r6, 2
/* 801D27FC 001CF73C  4B FF A7 55 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801D2800 001CF740  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801D2804 001CF744  3C 80 00 04 */	lis r4, 4
/* 801D2808 001CF748  80 63 00 00 */	lwz r3, 0(r3)
/* 801D280C 001CF74C  4B EB 10 CD */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801D2810 001CF750  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801D2814 001CF754  80 63 00 00 */	lwz r3, 0(r3)
/* 801D2818 001CF758  4B EB 12 19 */	bl makeSharedDL__12J3DModelDataFv
/* 801D281C 001CF75C  7F A3 EB 78 */	mr r3, r29
/* 801D2820 001CF760  38 9F 00 5C */	addi r4, r31, 0x5c
/* 801D2824 001CF764  4B FF A9 A9 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801D2828 001CF768  7C 60 1B 78 */	mr r0, r3
/* 801D282C 001CF76C  7F A3 EB 78 */	mr r3, r29
/* 801D2830 001CF770  7C 1E 03 78 */	mr r30, r0
/* 801D2834 001CF774  38 BF 00 68 */	addi r5, r31, 0x68
/* 801D2838 001CF778  7F C4 F3 78 */	mr r4, r30
/* 801D283C 001CF77C  4B FF AA 65 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801D2840 001CF780  90 7D 00 88 */	stw r3, 0x88(r29)
/* 801D2844 001CF784  7F A3 EB 78 */	mr r3, r29
/* 801D2848 001CF788  7F C4 F3 78 */	mr r4, r30
/* 801D284C 001CF78C  38 BF 00 7C */	addi r5, r31, 0x7c
/* 801D2850 001CF790  4B FF AA 51 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801D2854 001CF794  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 801D2858 001CF798  38 61 00 08 */	addi r3, r1, 8
/* 801D285C 001CF79C  38 80 00 01 */	li r4, 1
/* 801D2860 001CF7A0  38 A0 00 02 */	li r5, 2
/* 801D2864 001CF7A4  38 C0 00 01 */	li r6, 1
/* 801D2868 001CF7A8  48 24 9B F1 */	bl setCode__Q27MapCode4CodeFiib
/* 801D286C 001CF7AC  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 801D2870 001CF7B0  38 81 00 08 */	addi r4, r1, 8
/* 801D2874 001CF7B4  4B F6 0E 81 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801D2878 001CF7B8  38 61 00 08 */	addi r3, r1, 8
/* 801D287C 001CF7BC  38 80 00 01 */	li r4, 1
/* 801D2880 001CF7C0  38 A0 00 01 */	li r5, 1
/* 801D2884 001CF7C4  38 C0 00 01 */	li r6, 1
/* 801D2888 001CF7C8  48 24 9B D1 */	bl setCode__Q27MapCode4CodeFiib
/* 801D288C 001CF7CC  80 7D 00 8C */	lwz r3, 0x8c(r29)
/* 801D2890 001CF7D0  38 81 00 08 */	addi r4, r1, 8
/* 801D2894 001CF7D4  4B F6 0E 61 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801D2898 001CF7D8  7F A3 EB 78 */	mr r3, r29
/* 801D289C 001CF7DC  7F C4 F3 78 */	mr r4, r30
/* 801D28A0 001CF7E0  4B FF A9 B1 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801D28A4 001CF7E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D28A8 001CF7E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D28AC 001CF7EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D28B0 001CF7F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D28B4 001CF7F4  7C 08 03 A6 */	mtlr r0
/* 801D28B8 001CF7F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801D28BC 001CF7FC  4E 80 00 20 */	blr 

.global setup__Q34Game8ItemHole3MgrFPQ24Game8BaseItem
setup__Q34Game8ItemHole3MgrFPQ24Game8BaseItem:
/* 801D28C0 001CF800  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D28C4 001CF804  7C 08 02 A6 */	mflr r0
/* 801D28C8 001CF808  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D28CC 001CF80C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D28D0 001CF810  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D28D4 001CF814  7C 9E 23 78 */	mr r30, r4
/* 801D28D8 001CF818  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D28DC 001CF81C  7C 7D 1B 78 */	mr r29, r3
/* 801D28E0 001CF820  38 60 00 14 */	li r3, 0x14
/* 801D28E4 001CF824  4B E5 15 C1 */	bl __nw__FUl
/* 801D28E8 001CF828  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D28EC 001CF82C  41 82 00 28 */	beq .L_801D2914
/* 801D28F0 001CF830  7F A3 EB 78 */	mr r3, r29
/* 801D28F4 001CF834  38 80 00 00 */	li r4, 0
/* 801D28F8 001CF838  4B FF A8 59 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 801D28FC 001CF83C  7C 64 1B 78 */	mr r4, r3
/* 801D2900 001CF840  7F E3 FB 78 */	mr r3, r31
/* 801D2904 001CF844  3C A0 00 02 */	lis r5, 2
/* 801D2908 001CF848  38 C0 00 02 */	li r6, 2
/* 801D290C 001CF84C  48 26 B8 CD */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801D2910 001CF850  7C 7F 1B 78 */	mr r31, r3
.L_801D2914:
/* 801D2914 001CF854  93 FE 01 74 */	stw r31, 0x174(r30)
/* 801D2918 001CF858  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801D291C 001CF85C  80 63 00 08 */	lwz r3, 8(r3)
/* 801D2920 001CF860  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2924 001CF864  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D2928 001CF868  7D 89 03 A6 */	mtctr r12
/* 801D292C 001CF86C  4E 80 04 21 */	bctrl 
/* 801D2930 001CF870  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801D2934 001CF874  80 63 00 08 */	lwz r3, 8(r3)
/* 801D2938 001CF878  81 83 00 00 */	lwz r12, 0(r3)
/* 801D293C 001CF87C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D2940 001CF880  7D 89 03 A6 */	mtctr r12
/* 801D2944 001CF884  4E 80 04 21 */	bctrl 
/* 801D2948 001CF888  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801D294C 001CF88C  80 63 00 08 */	lwz r3, 8(r3)
/* 801D2950 001CF890  4B E9 3F D5 */	bl makeDL__8J3DModelFv
/* 801D2954 001CF894  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801D2958 001CF898  80 63 00 08 */	lwz r3, 8(r3)
/* 801D295C 001CF89C  4B E9 3E 99 */	bl lock__8J3DModelFv
/* 801D2960 001CF8A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D2964 001CF8A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D2968 001CF8A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D296C 001CF8AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D2970 001CF8B0  7C 08 03 A6 */	mtlr r0
/* 801D2974 001CF8B4  38 21 00 20 */	addi r1, r1, 0x20
/* 801D2978 001CF8B8  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game8ItemHole3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
"generatorBirth__Q34Game8ItemHole3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm":
/* 801D297C 001CF8BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D2980 001CF8C0  7C 08 02 A6 */	mflr r0
/* 801D2984 001CF8C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2988 001CF8C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D298C 001CF8CC  93 C1 00 08 */	stw r30, 8(r1)
/* 801D2990 001CF8D0  7C 9E 23 78 */	mr r30, r4
/* 801D2994 001CF8D4  4B FF AD F9 */	bl birth__Q24Game12TNodeItemMgrFv
/* 801D2998 001CF8D8  38 80 00 00 */	li r4, 0
/* 801D299C 001CF8DC  7C 7F 1B 78 */	mr r31, r3
/* 801D29A0 001CF8E0  4B F6 86 29 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801D29A4 001CF8E4  7F E3 FB 78 */	mr r3, r31
/* 801D29A8 001CF8E8  7F C4 F3 78 */	mr r4, r30
/* 801D29AC 001CF8EC  38 A0 00 00 */	li r5, 0
/* 801D29B0 001CF8F0  4B F6 87 F9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801D29B4 001CF8F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D29B8 001CF8F8  7F E3 FB 78 */	mr r3, r31
/* 801D29BC 001CF8FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D29C0 001CF900  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D29C4 001CF904  7C 08 03 A6 */	mtlr r0
/* 801D29C8 001CF908  38 21 00 10 */	addi r1, r1, 0x10
/* 801D29CC 001CF90C  4E 80 00 20 */	blr 

.global __dt__Q34Game8ItemHole3MgrFv
__dt__Q34Game8ItemHole3MgrFv:
/* 801D29D0 001CF910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D29D4 001CF914  7C 08 02 A6 */	mflr r0
/* 801D29D8 001CF918  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D29DC 001CF91C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D29E0 001CF920  7C 9F 23 78 */	mr r31, r4
/* 801D29E4 001CF924  93 C1 00 08 */	stw r30, 8(r1)
/* 801D29E8 001CF928  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D29EC 001CF92C  41 82 00 FC */	beq .L_801D2AE8
/* 801D29F0 001CF930  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole3Mgr@ha
/* 801D29F4 001CF934  38 63 79 7C */	addi r3, r3, __vt__Q34Game8ItemHole3Mgr@l
/* 801D29F8 001CF938  90 7E 00 00 */	stw r3, 0(r30)
/* 801D29FC 001CF93C  38 03 00 74 */	addi r0, r3, 0x74
/* 801D2A00 001CF940  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D2A04 001CF944  41 82 00 D4 */	beq .L_801D2AD8
/* 801D2A08 001CF948  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801D2A0C 001CF94C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D2A10 001CF950  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801D2A14 001CF954  90 7E 00 00 */	stw r3, 0(r30)
/* 801D2A18 001CF958  38 03 00 74 */	addi r0, r3, 0x74
/* 801D2A1C 001CF95C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D2A20 001CF960  41 82 00 84 */	beq .L_801D2AA4
/* 801D2A24 001CF964  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801D2A28 001CF968  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801D2A2C 001CF96C  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801D2A30 001CF970  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801D2A34 001CF974  38 04 00 2C */	addi r0, r4, 0x2c
/* 801D2A38 001CF978  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801D2A3C 001CF97C  41 82 00 18 */	beq .L_801D2A54
/* 801D2A40 001CF980  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801D2A44 001CF984  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801D2A48 001CF988  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801D2A4C 001CF98C  38 80 00 00 */	li r4, 0
/* 801D2A50 001CF990  48 23 EB 39 */	bl __dt__5CNodeFv
.L_801D2A54:
/* 801D2A54 001CF994  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D2A58 001CF998  41 82 00 4C */	beq .L_801D2AA4
/* 801D2A5C 001CF99C  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801D2A60 001CF9A0  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D2A64 001CF9A4  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801D2A68 001CF9A8  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801D2A6C 001CF9AC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801D2A70 001CF9B0  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801D2A74 001CF9B4  41 82 00 30 */	beq .L_801D2AA4
/* 801D2A78 001CF9B8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801D2A7C 001CF9BC  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D2A80 001CF9C0  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801D2A84 001CF9C4  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801D2A88 001CF9C8  41 82 00 1C */	beq .L_801D2AA4
/* 801D2A8C 001CF9CC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D2A90 001CF9D0  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801D2A94 001CF9D4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D2A98 001CF9D8  38 80 00 00 */	li r4, 0
/* 801D2A9C 001CF9DC  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801D2AA0 001CF9E0  48 23 EA E9 */	bl __dt__5CNodeFv
.L_801D2AA4:
/* 801D2AA4 001CF9E4  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801D2AA8 001CF9E8  41 82 00 30 */	beq .L_801D2AD8
/* 801D2AAC 001CF9EC  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801D2AB0 001CF9F0  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801D2AB4 001CF9F4  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801D2AB8 001CF9F8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D2ABC 001CF9FC  41 82 00 1C */	beq .L_801D2AD8
/* 801D2AC0 001CFA00  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D2AC4 001CFA04  38 7E 00 30 */	addi r3, r30, 0x30
/* 801D2AC8 001CFA08  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D2ACC 001CFA0C  38 80 00 00 */	li r4, 0
/* 801D2AD0 001CFA10  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D2AD4 001CFA14  48 23 EA B5 */	bl __dt__5CNodeFv
.L_801D2AD8:
/* 801D2AD8 001CFA18  7F E0 07 35 */	extsh. r0, r31
/* 801D2ADC 001CFA1C  40 81 00 0C */	ble .L_801D2AE8
/* 801D2AE0 001CFA20  7F C3 F3 78 */	mr r3, r30
/* 801D2AE4 001CFA24  4B E5 15 D1 */	bl __dl__FPv
.L_801D2AE8:
/* 801D2AE8 001CFA28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D2AEC 001CFA2C  7F C3 F3 78 */	mr r3, r30
/* 801D2AF0 001CFA30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D2AF4 001CFA34  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D2AF8 001CFA38  7C 08 03 A6 */	mtlr r0
/* 801D2AFC 001CFA3C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2B00 001CFA40  4E 80 00 20 */	blr 

.global doNew__Q34Game8ItemHole3MgrFv
doNew__Q34Game8ItemHole3MgrFv:
/* 801D2B04 001CFA44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D2B08 001CFA48  7C 08 02 A6 */	mflr r0
/* 801D2B0C 001CFA4C  38 60 01 F8 */	li r3, 0x1f8
/* 801D2B10 001CFA50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2B14 001CFA54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D2B18 001CFA58  4B E5 13 8D */	bl __nw__FUl
/* 801D2B1C 001CFA5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D2B20 001CFA60  41 82 00 40 */	beq .L_801D2B60
/* 801D2B24 001CFA64  38 80 04 05 */	li r4, 0x405
/* 801D2B28 001CFA68  4B FF 94 C1 */	bl __ct__Q24Game8BaseItemFi
/* 801D2B2C 001CFA6C  3C 80 80 4B */	lis r4, __vt__Q24Game8CFSMItem@ha
/* 801D2B30 001CFA70  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole4Item@ha
/* 801D2B34 001CFA74  38 A4 74 C0 */	addi r5, r4, __vt__Q24Game8CFSMItem@l
/* 801D2B38 001CFA78  38 80 00 00 */	li r4, 0
/* 801D2B3C 001CFA7C  90 BF 00 00 */	stw r5, 0(r31)
/* 801D2B40 001CFA80  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801D2B44 001CFA84  38 63 7A 68 */	addi r3, r3, __vt__Q34Game8ItemHole4Item@l
/* 801D2B48 001CFA88  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801D2B4C 001CFA8C  38 03 01 B0 */	addi r0, r3, 0x1b0
/* 801D2B50 001CFA90  90 9F 01 D8 */	stw r4, 0x1d8(r31)
/* 801D2B54 001CFA94  90 9F 01 DC */	stw r4, 0x1dc(r31)
/* 801D2B58 001CFA98  90 7F 00 00 */	stw r3, 0(r31)
/* 801D2B5C 001CFA9C  90 1F 01 78 */	stw r0, 0x178(r31)
.L_801D2B60:
/* 801D2B60 001CFAA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D2B64 001CFAA4  7F E3 FB 78 */	mr r3, r31
/* 801D2B68 001CFAA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D2B6C 001CFAAC  7C 08 03 A6 */	mtlr r0
/* 801D2B70 001CFAB0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2B74 001CFAB4  4E 80 00 20 */	blr 

.global generatorGetID__Q34Game8ItemHole3MgrFv
generatorGetID__Q34Game8ItemHole3MgrFv:
/* 801D2B78 001CFAB8  3C 60 68 6F */	lis r3, 0x686F6C65@ha
/* 801D2B7C 001CFABC  38 63 6C 65 */	addi r3, r3, 0x686F6C65@l
/* 801D2B80 001CFAC0  4E 80 00 20 */	blr 

.global getCreatureName__Q34Game8ItemHole4ItemFv
getCreatureName__Q34Game8ItemHole4ItemFv:
/* 801D2B84 001CFAC4  38 62 B3 10 */	addi r3, r2, lbl_80519670@sda21
/* 801D2B88 001CFAC8  4E 80 00 20 */	blr 

.global onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf:
/* 801D2B8C 001CFACC  4E 80 00 20 */	blr 

.global canRide__Q34Game8ItemHole11NormalStateFv
canRide__Q34Game8ItemHole11NormalStateFv:
/* 801D2B90 001CFAD0  38 60 00 01 */	li r3, 1
/* 801D2B94 001CFAD4  4E 80 00 20 */	blr 

.global "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
"init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg":
/* 801D2B98 001CFAD8  4E 80 00 20 */	blr 

.global "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
"cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem":
/* 801D2B9C 001CFADC  4E 80 00 20 */	blr 

.global "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
"resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem":
/* 801D2BA0 001CFAE0  4E 80 00 20 */	blr 

.global "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
"restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem":
/* 801D2BA4 001CFAE4  4E 80 00 20 */	blr 

.global "create__Q24Game30StateMachine<Q24Game8CFSMItem>Fi"
"create__Q24Game30StateMachine<Q24Game8CFSMItem>Fi":
/* 801D2BA8 001CFAE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D2BAC 001CFAEC  7C 08 02 A6 */	mflr r0
/* 801D2BB0 001CFAF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2BB4 001CFAF4  38 00 00 00 */	li r0, 0
/* 801D2BB8 001CFAF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D2BBC 001CFAFC  7C 7F 1B 78 */	mr r31, r3
/* 801D2BC0 001CFB00  90 83 00 0C */	stw r4, 0xc(r3)
/* 801D2BC4 001CFB04  90 03 00 08 */	stw r0, 8(r3)
/* 801D2BC8 001CFB08  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801D2BCC 001CFB0C  54 03 10 3A */	slwi r3, r0, 2
/* 801D2BD0 001CFB10  4B E5 13 DD */	bl __nwa__FUl
/* 801D2BD4 001CFB14  90 7F 00 04 */	stw r3, 4(r31)
/* 801D2BD8 001CFB18  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801D2BDC 001CFB1C  54 03 10 3A */	slwi r3, r0, 2
/* 801D2BE0 001CFB20  4B E5 13 CD */	bl __nwa__FUl
/* 801D2BE4 001CFB24  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801D2BE8 001CFB28  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801D2BEC 001CFB2C  54 03 10 3A */	slwi r3, r0, 2
/* 801D2BF0 001CFB30  4B E5 13 BD */	bl __nwa__FUl
/* 801D2BF4 001CFB34  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801D2BF8 001CFB38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D2BFC 001CFB3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D2C00 001CFB40  7C 08 03 A6 */	mtlr r0
/* 801D2C04 001CFB44  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2C08 001CFB48  4E 80 00 20 */	blr 

.global "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
"transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg":
/* 801D2C0C 001CFB4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D2C10 001CFB50  7C 08 02 A6 */	mflr r0
/* 801D2C14 001CFB54  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D2C18 001CFB58  54 A0 10 3A */	slwi r0, r5, 2
/* 801D2C1C 001CFB5C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801D2C20 001CFB60  7C 9C 23 78 */	mr r28, r4
/* 801D2C24 001CFB64  7C 7B 1B 78 */	mr r27, r3
/* 801D2C28 001CFB68  7C DD 33 78 */	mr r29, r6
/* 801D2C2C 001CFB6C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801D2C30 001CFB70  7F 83 E3 78 */	mr r3, r28
/* 801D2C34 001CFB74  7F C4 00 2E */	lwzx r30, r4, r0
/* 801D2C38 001CFB78  4B FF 9D FD */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D2C3C 001CFB7C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D2C40 001CFB80  41 82 00 20 */	beq .L_801D2C60
/* 801D2C44 001CFB84  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2C48 001CFB88  7F 84 E3 78 */	mr r4, r28
/* 801D2C4C 001CFB8C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D2C50 001CFB90  7D 89 03 A6 */	mtctr r12
/* 801D2C54 001CFB94  4E 80 04 21 */	bctrl 
/* 801D2C58 001CFB98  80 1F 00 04 */	lwz r0, 4(r31)
/* 801D2C5C 001CFB9C  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801D2C60:
/* 801D2C60 001CFBA0  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801D2C64 001CFBA4  7C 1E 00 00 */	cmpw r30, r0
/* 801D2C68 001CFBA8  41 80 00 08 */	blt .L_801D2C70
.L_801D2C6C:
/* 801D2C6C 001CFBAC  48 00 00 00 */	b .L_801D2C6C
.L_801D2C70:
/* 801D2C70 001CFBB0  80 9B 00 04 */	lwz r4, 4(r27)
/* 801D2C74 001CFBB4  57 C0 10 3A */	slwi r0, r30, 2
/* 801D2C78 001CFBB8  7F 83 E3 78 */	mr r3, r28
/* 801D2C7C 001CFBBC  7F E4 00 2E */	lwzx r31, r4, r0
/* 801D2C80 001CFBC0  7F E4 FB 78 */	mr r4, r31
/* 801D2C84 001CFBC4  4B FF 9D A9 */	bl "setCurrState__Q24Game8CFSMItemFPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2C88 001CFBC8  7F E3 FB 78 */	mr r3, r31
/* 801D2C8C 001CFBCC  7F 84 E3 78 */	mr r4, r28
/* 801D2C90 001CFBD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D2C94 001CFBD4  7F A5 EB 78 */	mr r5, r29
/* 801D2C98 001CFBD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D2C9C 001CFBDC  7D 89 03 A6 */	mtctr r12
/* 801D2CA0 001CFBE0  4E 80 04 21 */	bctrl 
/* 801D2CA4 001CFBE4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801D2CA8 001CFBE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D2CAC 001CFBEC  7C 08 03 A6 */	mtlr r0
/* 801D2CB0 001CFBF0  38 21 00 20 */	addi r1, r1, 0x20
/* 801D2CB4 001CFBF4  4E 80 00 20 */	blr 

.global "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
"registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>":
/* 801D2CB8 001CFBF8  80 C3 00 08 */	lwz r6, 8(r3)
/* 801D2CBC 001CFBFC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801D2CC0 001CFC00  7C 06 00 00 */	cmpw r6, r0
/* 801D2CC4 001CFC04  4C 80 00 20 */	bgelr 
/* 801D2CC8 001CFC08  80 A3 00 04 */	lwz r5, 4(r3)
/* 801D2CCC 001CFC0C  54 C0 10 3A */	slwi r0, r6, 2
/* 801D2CD0 001CFC10  7C 85 01 2E */	stwx r4, r5, r0
/* 801D2CD4 001CFC14  80 A4 00 04 */	lwz r5, 4(r4)
/* 801D2CD8 001CFC18  2C 05 00 00 */	cmpwi r5, 0
/* 801D2CDC 001CFC1C  41 80 00 10 */	blt .L_801D2CEC
/* 801D2CE0 001CFC20  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801D2CE4 001CFC24  7C 05 00 00 */	cmpw r5, r0
/* 801D2CE8 001CFC28  41 80 00 0C */	blt .L_801D2CF4
.L_801D2CEC:
/* 801D2CEC 001CFC2C  38 00 00 00 */	li r0, 0
/* 801D2CF0 001CFC30  48 00 00 08 */	b .L_801D2CF8
.L_801D2CF4:
/* 801D2CF4 001CFC34  38 00 00 01 */	li r0, 1
.L_801D2CF8:
/* 801D2CF8 001CFC38  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801D2CFC 001CFC3C  4D 82 00 20 */	beqlr 
/* 801D2D00 001CFC40  90 64 00 08 */	stw r3, 8(r4)
/* 801D2D04 001CFC44  80 03 00 08 */	lwz r0, 8(r3)
/* 801D2D08 001CFC48  80 C4 00 04 */	lwz r6, 4(r4)
/* 801D2D0C 001CFC4C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801D2D10 001CFC50  54 00 10 3A */	slwi r0, r0, 2
/* 801D2D14 001CFC54  7C C5 01 2E */	stwx r6, r5, r0
/* 801D2D18 001CFC58  80 04 00 04 */	lwz r0, 4(r4)
/* 801D2D1C 001CFC5C  80 A3 00 08 */	lwz r5, 8(r3)
/* 801D2D20 001CFC60  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801D2D24 001CFC64  54 00 10 3A */	slwi r0, r0, 2
/* 801D2D28 001CFC68  7C A4 01 2E */	stwx r5, r4, r0
/* 801D2D2C 001CFC6C  80 83 00 08 */	lwz r4, 8(r3)
/* 801D2D30 001CFC70  38 04 00 01 */	addi r0, r4, 1
/* 801D2D34 001CFC74  90 03 00 08 */	stw r0, 8(r3)
/* 801D2D38 001CFC78  4E 80 00 20 */	blr 

.global __sinit_itemHole_cpp
__sinit_itemHole_cpp:
/* 801D2D3C 001CFC7C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801D2D40 001CFC80  38 00 FF FF */	li r0, -1
/* 801D2D44 001CFC84  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801D2D48 001CFC88  3C 60 80 4B */	lis r3, lbl_804B7970@ha
/* 801D2D4C 001CFC8C  90 0D 94 40 */	stw r0, lbl_80515AC0@sda21(r13)
/* 801D2D50 001CFC90  D4 03 79 70 */	stfsu f0, lbl_804B7970@l(r3)
/* 801D2D54 001CFC94  D0 0D 94 44 */	stfs f0, lbl_80515AC4@sda21(r13)
/* 801D2D58 001CFC98  D0 03 00 04 */	stfs f0, 4(r3)
/* 801D2D5C 001CFC9C  D0 03 00 08 */	stfs f0, 8(r3)
/* 801D2D60 001CFCA0  4E 80 00 20 */	blr 

.global "@48@__dt__Q34Game8ItemHole3MgrFv"
"@48@__dt__Q34Game8ItemHole3MgrFv":
/* 801D2D64 001CFCA4  38 63 FF D0 */	addi r3, r3, -48
/* 801D2D68 001CFCA8  4B FF FC 68 */	b __dt__Q34Game8ItemHole3MgrFv
