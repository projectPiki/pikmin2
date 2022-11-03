.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80480B10
lbl_80480B10:
	.4byte 0x6974656D
	.4byte 0x526F636B
	.4byte 0x00000000
	.4byte 0x8D729470
	.4byte 0x83498375
	.4byte 0x83578346
	.4byte 0x834E8367
	.4byte 0x00000000
	.4byte 0x75736572
	.4byte 0x2F4B616E
	.4byte 0x646F2F6F
	.4byte 0x626A6563
	.4byte 0x74732F6F
	.4byte 0x6A616D61
	.4byte 0x726F636B
	.4byte 0x00000000
	.4byte 0x75736572
	.4byte 0x2F416265
	.4byte 0x2F697465
	.4byte 0x6D2F726F
	.4byte 0x636B5061
	.4byte 0x726D732E
	.4byte 0x74787400
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
	.4byte 0x506C616E
	.4byte 0x743A3A50
	.4byte 0x61726D73
	.4byte 0x00000000
	.4byte 0x83898343
	.4byte 0x83742830
	.4byte 0x29000000
	.4byte 0x83898343
	.4byte 0x83742831
	.4byte 0x29000000
	.4byte 0x83898343
	.4byte 0x83742832
	.4byte 0x29000000
	.4byte 0x83898343
	.4byte 0x83742833
	.4byte 0x29000000
	.4byte 0x8DC490B6
	.4byte 0x8E9E8AD4
	.4byte 0x28302920
	.4byte 0x5B95AA5D
	.4byte 0x00000000
	.4byte 0x8DC490B6
	.4byte 0x8E9E8AD4
	.4byte 0x28312920
	.4byte 0x5B95AA5D
	.4byte 0x00000000
	.4byte 0x8DC490B6
	.4byte 0x8E9E8AD4
	.4byte 0x28322920
	.4byte 0x5B95AA5D
	.4byte 0x00000000
	.4byte 0x8DC490B6
	.4byte 0x8E9E8AD4
	.4byte 0x28332920
	.4byte 0x5B95AA5D
	.4byte 0x00000000
	.4byte 0x8E648E96
	.4byte 0x94BC8C61
	.4byte 0x28302900
	.4byte 0x726F636B
	.4byte 0x2E626D64
	.4byte 0x00000000
	.4byte 0x74657874
	.4byte 0x732E737A
	.4byte 0x73000000
	.4byte 0x616E696D
	.4byte 0x6D67722E
	.4byte 0x74787400
.global lbl_80480C84
lbl_80480C84:
	.4byte 0x4172674B
	.4byte 0x6F756861
	.4byte 0x69000000
.global lbl_80480C90
lbl_80480C90:
	.4byte 0x526F636B
	.4byte 0x284D616E
	.4byte 0x6A752900
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game8ItemRock3Mgr
__vt__Q34Game8ItemRock3Mgr:
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
	.4byte onLoadResources__Q34Game8ItemRock3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game8ItemRock3MgrFv
	.4byte "generatorBirth__Q34Game8ItemRock3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game8ItemRock3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game8ItemRock3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game8ItemRock3MgrFv
	.4byte birth__Q34Game8ItemRock3MgrFv
.global __vt__Q34Game8ItemRock9RockParms
__vt__Q34Game8ItemRock9RockParms:
	.4byte 0
	.4byte 0
	.4byte read__Q34Game8ItemRock9RockParmsFR6Stream
.global __vt__Q23efx11TKouhaiFuku
__vt__Q23efx11TKouhaiFuku:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx9ArgKouhai
__vt__Q23efx9ArgKouhai:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx9ArgKouhaiFv
.global __vt__Q23efx8TKouhai3
__vt__Q23efx8TKouhai3:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.global __vt__Q23efx8TKouhai2
__vt__Q23efx8TKouhai2:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.global __vt__Q23efx8TKouhai1
__vt__Q23efx8TKouhai1:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.global __vt__Q34Game8ItemRock4Item
__vt__Q34Game8ItemRock4Item:
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
	.4byte constructor__Q34Game8ItemRock4ItemFv
	.4byte onInit__Q34Game8ItemRock4ItemFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game8ItemRock4ItemFPQ24Game15CreatureKillArg
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
	.4byte doSave__Q34Game8ItemRock4ItemFR6Stream
	.4byte doLoad__Q34Game8ItemRock4ItemFR6Stream
	.4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q34Game8ItemRock4ItemFb
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
	.4byte getCreatureName__Q34Game8ItemRock4ItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte doAI__Q34Game8ItemRock4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q34Game8ItemRock4ItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q34Game8ItemRock4ItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q34Game8ItemRock4ItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game8ItemRock4ItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game8ItemRock4ItemFv
	.4byte onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent
.global "__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"
"__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>":
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
	.4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>Fv"
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
	.4byte 0
	.4byte 0
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q24Game8BaseItemFv
	.4byte "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"
.global "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"
"__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"
"__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"
"__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>":
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
	.4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>Fv"
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
	.4byte "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"
.global __vt__Q34Game8ItemRock7UpState
__vt__Q34Game8ItemRock7UpState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Item
	.4byte cleanup__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Item
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Itemf
	.4byte onKeyEvent__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
.global __vt__Q34Game8ItemRock9DownState
__vt__Q34Game8ItemRock9DownState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item
	.4byte cleanup__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Itemf
	.4byte onKeyEvent__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
.global __vt__Q34Game8ItemRock11NormalState
__vt__Q34Game8ItemRock11NormalState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Item
	.4byte cleanup__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Item
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Itemf
	.4byte onKeyEvent__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
.global __vt__Q34Game8ItemRock5State
__vt__Q34Game8ItemRock5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game8ItemRock5StateFPQ34Game8ItemRock4Itemf
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"
"__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"
"__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
.global __vt__Q34Game8ItemRock3FSM
__vt__Q34Game8ItemRock3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemRock3FSMFPQ34Game8ItemRock4Item
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global mgr__Q24Game8ItemRock
mgr__Q24Game8ItemRock:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_805198C8
lbl_805198C8:
	.4byte 0x00000000
.global lbl_805198CC
lbl_805198CC:
	.float 1.0
.global lbl_805198D0
lbl_805198D0:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_805198D8
lbl_805198D8:
	.4byte 0x41F00000
.global lbl_805198DC
lbl_805198DC:
	.4byte 0x43340000
.global lbl_805198E0
lbl_805198E0:
	.4byte 0x47000000
.global lbl_805198E4
lbl_805198E4:
	.4byte 0x40A00000
.global lbl_805198E8
lbl_805198E8:
	.4byte 0x3E4CCCCD
.global lbl_805198EC
lbl_805198EC:
	.4byte 0x41200000
.global lbl_805198F0
lbl_805198F0:
	.4byte 0x41C80000
.global lbl_805198F4
lbl_805198F4:
	.4byte 0x42700000
.global lbl_805198F8
lbl_805198F8:
	.float 0.5
.global lbl_805198FC
lbl_805198FC:
	.float 0.25
.global lbl_80519900
lbl_80519900:
	.4byte 0x61636365
	.4byte 0x6C000000
.global lbl_80519908
lbl_80519908:
	.float 0.1
.global lbl_8051990C
lbl_8051990C:
	.4byte 0x3C23D70A
.global lbl_80519910
lbl_80519910:
	.4byte 0x40000000
.global lbl_80519914
lbl_80519914:
	.float 0.3
.global lbl_80519918
lbl_80519918:
	.4byte 0x44BB8000
.global lbl_8051991C
lbl_8051991C:
	.4byte 0x476A6000
.global lbl_80519920
lbl_80519920:
	.4byte 0x44960000
.global lbl_80519924
lbl_80519924:
	.4byte 0x443B8000
.global lbl_80519928
lbl_80519928:
	.4byte 0x437A0000
.global lbl_8051992C
lbl_8051992C:
	.4byte 0x43160000
.global lbl_80519930
lbl_80519930:
	.4byte 0x420C0000
.global lbl_80519934
lbl_80519934:
	.4byte 0x41A00000
.global lbl_80519938
lbl_80519938:
	.4byte 0x6172632E
	.4byte 0x737A7300

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game8ItemRock3FSMFPQ34Game8ItemRock4Item
init__Q34Game8ItemRock3FSMFPQ34Game8ItemRock4Item:
/* 801E0E84 001DDDC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0E88 001DDDC8  7C 08 02 A6 */	mflr r0
/* 801E0E8C 001DDDCC  38 80 00 03 */	li r4, 3
/* 801E0E90 001DDDD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0E94 001DDDD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E0E98 001DDDD8  7C 7F 1B 78 */	mr r31, r3
/* 801E0E9C 001DDDDC  48 00 25 9D */	bl "create__Q24Game35StateMachine<Q34Game8ItemRock4Item>Fi"
/* 801E0EA0 001DDDE0  38 60 00 14 */	li r3, 0x14
/* 801E0EA4 001DDDE4  4B E4 30 01 */	bl __nw__FUl
/* 801E0EA8 001DDDE8  7C 64 1B 79 */	or. r4, r3, r3
/* 801E0EAC 001DDDEC  41 82 00 40 */	beq .L_801E0EEC
/* 801E0EB0 001DDDF0  3C 60 80 4C */	lis r3, "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"@ha
/* 801E0EB4 001DDDF4  3C C0 80 4C */	lis r6, "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"@ha
/* 801E0EB8 001DDDF8  38 03 A2 88 */	addi r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"@l
/* 801E0EBC 001DDDFC  3C A0 80 4C */	lis r5, __vt__Q34Game8ItemRock5State@ha
/* 801E0EC0 001DDE00  90 04 00 00 */	stw r0, 0(r4)
/* 801E0EC4 001DDE04  38 E0 00 00 */	li r7, 0
/* 801E0EC8 001DDE08  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock11NormalState@ha
/* 801E0ECC 001DDE0C  38 C6 A2 54 */	addi r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"@l
/* 801E0ED0 001DDE10  90 E4 00 04 */	stw r7, 4(r4)
/* 801E0ED4 001DDE14  38 A5 A2 20 */	addi r5, r5, __vt__Q34Game8ItemRock5State@l
/* 801E0ED8 001DDE18  38 03 A1 EC */	addi r0, r3, __vt__Q34Game8ItemRock11NormalState@l
/* 801E0EDC 001DDE1C  90 E4 00 08 */	stw r7, 8(r4)
/* 801E0EE0 001DDE20  90 C4 00 00 */	stw r6, 0(r4)
/* 801E0EE4 001DDE24  90 A4 00 00 */	stw r5, 0(r4)
/* 801E0EE8 001DDE28  90 04 00 00 */	stw r0, 0(r4)
.L_801E0EEC:
/* 801E0EEC 001DDE2C  7F E3 FB 78 */	mr r3, r31
/* 801E0EF0 001DDE30  48 00 26 49 */	bl "registerState__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ24Game31FSMState<Q34Game8ItemRock4Item>"
/* 801E0EF4 001DDE34  38 60 00 14 */	li r3, 0x14
/* 801E0EF8 001DDE38  4B E4 2F AD */	bl __nw__FUl
/* 801E0EFC 001DDE3C  7C 64 1B 79 */	or. r4, r3, r3
/* 801E0F00 001DDE40  41 82 00 44 */	beq .L_801E0F44
/* 801E0F04 001DDE44  3C 60 80 4C */	lis r3, "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"@ha
/* 801E0F08 001DDE48  3C C0 80 4C */	lis r6, "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"@ha
/* 801E0F0C 001DDE4C  38 03 A2 88 */	addi r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"@l
/* 801E0F10 001DDE50  3C A0 80 4C */	lis r5, __vt__Q34Game8ItemRock5State@ha
/* 801E0F14 001DDE54  90 04 00 00 */	stw r0, 0(r4)
/* 801E0F18 001DDE58  38 00 00 01 */	li r0, 1
/* 801E0F1C 001DDE5C  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock9DownState@ha
/* 801E0F20 001DDE60  38 E0 00 00 */	li r7, 0
/* 801E0F24 001DDE64  90 04 00 04 */	stw r0, 4(r4)
/* 801E0F28 001DDE68  38 C6 A2 54 */	addi r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"@l
/* 801E0F2C 001DDE6C  38 A5 A2 20 */	addi r5, r5, __vt__Q34Game8ItemRock5State@l
/* 801E0F30 001DDE70  38 03 A1 B8 */	addi r0, r3, __vt__Q34Game8ItemRock9DownState@l
/* 801E0F34 001DDE74  90 E4 00 08 */	stw r7, 8(r4)
/* 801E0F38 001DDE78  90 C4 00 00 */	stw r6, 0(r4)
/* 801E0F3C 001DDE7C  90 A4 00 00 */	stw r5, 0(r4)
/* 801E0F40 001DDE80  90 04 00 00 */	stw r0, 0(r4)
.L_801E0F44:
/* 801E0F44 001DDE84  7F E3 FB 78 */	mr r3, r31
/* 801E0F48 001DDE88  48 00 25 F1 */	bl "registerState__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ24Game31FSMState<Q34Game8ItemRock4Item>"
/* 801E0F4C 001DDE8C  38 60 00 14 */	li r3, 0x14
/* 801E0F50 001DDE90  4B E4 2F 55 */	bl __nw__FUl
/* 801E0F54 001DDE94  7C 64 1B 79 */	or. r4, r3, r3
/* 801E0F58 001DDE98  41 82 00 44 */	beq .L_801E0F9C
/* 801E0F5C 001DDE9C  3C 60 80 4C */	lis r3, "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"@ha
/* 801E0F60 001DDEA0  3C C0 80 4C */	lis r6, "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"@ha
/* 801E0F64 001DDEA4  38 03 A2 88 */	addi r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemRock4Item>"@l
/* 801E0F68 001DDEA8  3C A0 80 4C */	lis r5, __vt__Q34Game8ItemRock5State@ha
/* 801E0F6C 001DDEAC  90 04 00 00 */	stw r0, 0(r4)
/* 801E0F70 001DDEB0  38 00 00 02 */	li r0, 2
/* 801E0F74 001DDEB4  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock7UpState@ha
/* 801E0F78 001DDEB8  38 E0 00 00 */	li r7, 0
/* 801E0F7C 001DDEBC  90 04 00 04 */	stw r0, 4(r4)
/* 801E0F80 001DDEC0  38 C6 A2 54 */	addi r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemRock4Item>"@l
/* 801E0F84 001DDEC4  38 A5 A2 20 */	addi r5, r5, __vt__Q34Game8ItemRock5State@l
/* 801E0F88 001DDEC8  38 03 A1 84 */	addi r0, r3, __vt__Q34Game8ItemRock7UpState@l
/* 801E0F8C 001DDECC  90 E4 00 08 */	stw r7, 8(r4)
/* 801E0F90 001DDED0  90 C4 00 00 */	stw r6, 0(r4)
/* 801E0F94 001DDED4  90 A4 00 00 */	stw r5, 0(r4)
/* 801E0F98 001DDED8  90 04 00 00 */	stw r0, 0(r4)
.L_801E0F9C:
/* 801E0F9C 001DDEDC  7F E3 FB 78 */	mr r3, r31
/* 801E0FA0 001DDEE0  48 00 25 99 */	bl "registerState__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ24Game31FSMState<Q34Game8ItemRock4Item>"
/* 801E0FA4 001DDEE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0FA8 001DDEE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E0FAC 001DDEEC  7C 08 03 A6 */	mtlr r0
/* 801E0FB0 001DDEF0  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0FB4 001DDEF4  4E 80 00 20 */	blr 

.global init__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
init__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg:
/* 801E0FB8 001DDEF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0FBC 001DDEFC  7C 08 02 A6 */	mflr r0
/* 801E0FC0 001DDF00  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0FC4 001DDF04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E0FC8 001DDF08  7C 7F 1B 78 */	mr r31, r3
/* 801E0FCC 001DDF0C  7C 83 23 78 */	mr r3, r4
/* 801E0FD0 001DDF10  48 00 0F 41 */	bl startWaitMotion__Q34Game8ItemRock4ItemFv
/* 801E0FD4 001DDF14  38 00 00 00 */	li r0, 0
/* 801E0FD8 001DDF18  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801E0FDC 001DDF1C  98 1F 00 11 */	stb r0, 0x11(r31)
/* 801E0FE0 001DDF20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E0FE4 001DDF24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0FE8 001DDF28  7C 08 03 A6 */	mtlr r0
/* 801E0FEC 001DDF2C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0FF0 001DDF30  4E 80 00 20 */	blr 

.global exec__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Item
exec__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Item:
/* 801E0FF4 001DDF34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0FF8 001DDF38  7C 08 02 A6 */	mflr r0
/* 801E0FFC 001DDF3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1000 001DDF40  80 C4 02 1C */	lwz r6, 0x21c(r4)
/* 801E1004 001DDF44  80 A4 02 0C */	lwz r5, 0x20c(r4)
/* 801E1008 001DDF48  54 C0 10 3A */	slwi r0, r6, 2
/* 801E100C 001DDF4C  2C 06 00 00 */	cmpwi r6, 0
/* 801E1010 001DDF50  7C 45 04 2E */	lfsx f2, r5, r0
/* 801E1014 001DDF54  40 81 00 60 */	ble .L_801E1074
/* 801E1018 001DDF58  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801E101C 001DDF5C  C0 24 02 14 */	lfs f1, 0x214(r4)
/* 801E1020 001DDF60  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801E1024 001DDF64  EC 01 00 2A */	fadds f0, f1, f0
/* 801E1028 001DDF68  D0 04 02 14 */	stfs f0, 0x214(r4)
/* 801E102C 001DDF6C  C0 04 02 14 */	lfs f0, 0x214(r4)
/* 801E1030 001DDF70  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801E1034 001DDF74  4C 41 13 82 */	cror 2, 1, 2
/* 801E1038 001DDF78  40 82 00 3C */	bne .L_801E1074
/* 801E103C 001DDF7C  38 00 00 01 */	li r0, 1
/* 801E1040 001DDF80  38 A0 00 02 */	li r5, 2
/* 801E1044 001DDF84  98 03 00 11 */	stb r0, 0x11(r3)
/* 801E1048 001DDF88  38 C0 00 00 */	li r6, 0
/* 801E104C 001DDF8C  80 04 02 1C */	lwz r0, 0x21c(r4)
/* 801E1050 001DDF90  80 E4 02 08 */	lwz r7, 0x208(r4)
/* 801E1054 001DDF94  54 00 10 3A */	slwi r0, r0, 2
/* 801E1058 001DDF98  7C E7 02 14 */	add r7, r7, r0
/* 801E105C 001DDF9C  C0 07 FF FC */	lfs f0, -4(r7)
/* 801E1060 001DDFA0  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 801E1064 001DDFA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1068 001DDFA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801E106C 001DDFAC  7D 89 03 A6 */	mtctr r12
/* 801E1070 001DDFB0  4E 80 04 21 */	bctrl 
.L_801E1074:
/* 801E1074 001DDFB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1078 001DDFB8  7C 08 03 A6 */	mtlr r0
/* 801E107C 001DDFBC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1080 001DDFC0  4E 80 00 20 */	blr 

.global "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
"transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg":
/* 801E1084 001DDFC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1088 001DDFC8  7C 08 02 A6 */	mflr r0
/* 801E108C 001DDFCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1090 001DDFD0  80 63 00 08 */	lwz r3, 8(r3)
/* 801E1094 001DDFD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1098 001DDFD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801E109C 001DDFDC  7D 89 03 A6 */	mtctr r12
/* 801E10A0 001DDFE0  4E 80 04 21 */	bctrl 
/* 801E10A4 001DDFE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E10A8 001DDFE8  7C 08 03 A6 */	mtlr r0
/* 801E10AC 001DDFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E10B0 001DDFF0  4E 80 00 20 */	blr 

.global cleanup__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Item
cleanup__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Item:
/* 801E10B4 001DDFF4  4E 80 00 20 */	blr 

.global onDamage__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Itemf
onDamage__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4Itemf:
/* 801E10B8 001DDFF8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E10BC 001DDFFC  7C 08 02 A6 */	mflr r0
/* 801E10C0 001DE000  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E10C4 001DE004  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801E10C8 001DE008  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801E10CC 001DE00C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E10D0 001DE010  93 C1 00 08 */	stw r30, 8(r1)
/* 801E10D4 001DE014  FF E0 08 90 */	fmr f31, f1
/* 801E10D8 001DE018  7C 9F 23 78 */	mr r31, r4
/* 801E10DC 001DE01C  7C 7E 1B 78 */	mr r30, r3
/* 801E10E0 001DE020  7F E3 FB 78 */	mr r3, r31
/* 801E10E4 001DE024  48 00 0F 59 */	bl startDamageMotion__Q34Game8ItemRock4ItemFv
/* 801E10E8 001DE028  C0 3F 02 18 */	lfs f1, 0x218(r31)
/* 801E10EC 001DE02C  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E10F0 001DE030  EC 21 F8 2A */	fadds f1, f1, f31
/* 801E10F4 001DE034  D0 3F 02 18 */	stfs f1, 0x218(r31)
/* 801E10F8 001DE038  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 801E10FC 001DE03C  C0 3F 02 18 */	lfs f1, 0x218(r31)
/* 801E1100 001DE040  EC 22 08 28 */	fsubs f1, f2, f1
/* 801E1104 001DE044  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 801E1108 001DE048  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 801E110C 001DE04C  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801E1110 001DE050  80 7F 02 08 */	lwz r3, 0x208(r31)
/* 801E1114 001DE054  54 00 10 3A */	slwi r0, r0, 2
/* 801E1118 001DE058  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801E111C 001DE05C  7C 63 02 14 */	add r3, r3, r0
/* 801E1120 001DE060  C0 03 00 04 */	lfs f0, 4(r3)
/* 801E1124 001DE064  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801E1128 001DE068  40 80 00 2C */	bge .L_801E1154
/* 801E112C 001DE06C  38 00 00 01 */	li r0, 1
/* 801E1130 001DE070  7F C3 F3 78 */	mr r3, r30
/* 801E1134 001DE074  98 1E 00 10 */	stb r0, 0x10(r30)
/* 801E1138 001DE078  7F E4 FB 78 */	mr r4, r31
/* 801E113C 001DE07C  38 A0 00 01 */	li r5, 1
/* 801E1140 001DE080  38 C0 00 00 */	li r6, 0
/* 801E1144 001DE084  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1148 001DE088  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801E114C 001DE08C  7D 89 03 A6 */	mtctr r12
/* 801E1150 001DE090  4E 80 04 21 */	bctrl 
.L_801E1154:
/* 801E1154 001DE094  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801E1158 001DE098  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E115C 001DE09C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801E1160 001DE0A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E1164 001DE0A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E1168 001DE0A8  7C 08 03 A6 */	mtlr r0
/* 801E116C 001DE0AC  38 21 00 20 */	addi r1, r1, 0x20
/* 801E1170 001DE0B0  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game8ItemRock11NormalStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent:
/* 801E1174 001DE0B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801E1178 001DE0B8  7C 08 02 A6 */	mflr r0
/* 801E117C 001DE0BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801E1180 001DE0C0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801E1184 001DE0C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801E1188 001DE0C8  7C 9F 23 78 */	mr r31, r4
/* 801E118C 001DE0CC  28 00 00 64 */	cmplwi r0, 0x64
/* 801E1190 001DE0D0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801E1194 001DE0D4  7C 7E 1B 78 */	mr r30, r3
/* 801E1198 001DE0D8  40 82 00 3C */	bne .L_801E11D4
/* 801E119C 001DE0DC  81 84 00 00 */	lwz r12, 0(r4)
/* 801E11A0 001DE0E0  38 61 00 08 */	addi r3, r1, 8
/* 801E11A4 001DE0E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E11A8 001DE0E8  7D 89 03 A6 */	mtctr r12
/* 801E11AC 001DE0EC  4E 80 04 21 */	bctrl 
/* 801E11B0 001DE0F0  C0 41 00 08 */	lfs f2, 8(r1)
/* 801E11B4 001DE0F4  7F E3 FB 78 */	mr r3, r31
/* 801E11B8 001DE0F8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801E11BC 001DE0FC  38 81 00 14 */	addi r4, r1, 0x14
/* 801E11C0 001DE100  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801E11C4 001DE104  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801E11C8 001DE108  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801E11CC 001DE10C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801E11D0 001DE110  48 00 07 F9 */	bl "startFukuEffect__Q34Game8ItemRock4ItemFR10Vector3<f>"
.L_801E11D4:
/* 801E11D4 001DE114  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 801E11D8 001DE118  28 00 00 00 */	cmplwi r0, 0
/* 801E11DC 001DE11C  41 82 00 40 */	beq .L_801E121C
/* 801E11E0 001DE120  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801E11E4 001DE124  7F C3 F3 78 */	mr r3, r30
/* 801E11E8 001DE128  80 DF 02 08 */	lwz r6, 0x208(r31)
/* 801E11EC 001DE12C  7F E4 FB 78 */	mr r4, r31
/* 801E11F0 001DE130  54 00 10 3A */	slwi r0, r0, 2
/* 801E11F4 001DE134  38 A0 00 02 */	li r5, 2
/* 801E11F8 001DE138  7C E6 02 14 */	add r7, r6, r0
/* 801E11FC 001DE13C  38 C0 00 00 */	li r6, 0
/* 801E1200 001DE140  C0 07 FF FC */	lfs f0, -4(r7)
/* 801E1204 001DE144  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801E1208 001DE148  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E120C 001DE14C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801E1210 001DE150  7D 89 03 A6 */	mtctr r12
/* 801E1214 001DE154  4E 80 04 21 */	bctrl 
/* 801E1218 001DE158  48 00 00 3C */	b .L_801E1254
.L_801E121C:
/* 801E121C 001DE15C  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 801E1220 001DE160  28 00 00 00 */	cmplwi r0, 0
/* 801E1224 001DE164  41 82 00 28 */	beq .L_801E124C
/* 801E1228 001DE168  7F C3 F3 78 */	mr r3, r30
/* 801E122C 001DE16C  7F E4 FB 78 */	mr r4, r31
/* 801E1230 001DE170  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1234 001DE174  38 A0 00 01 */	li r5, 1
/* 801E1238 001DE178  38 C0 00 00 */	li r6, 0
/* 801E123C 001DE17C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801E1240 001DE180  7D 89 03 A6 */	mtctr r12
/* 801E1244 001DE184  4E 80 04 21 */	bctrl 
/* 801E1248 001DE188  48 00 00 0C */	b .L_801E1254
.L_801E124C:
/* 801E124C 001DE18C  7F E3 FB 78 */	mr r3, r31
/* 801E1250 001DE190  48 00 0C C1 */	bl startWaitMotion__Q34Game8ItemRock4ItemFv
.L_801E1254:
/* 801E1254 001DE194  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801E1258 001DE198  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801E125C 001DE19C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801E1260 001DE1A0  7C 08 03 A6 */	mtlr r0
/* 801E1264 001DE1A4  38 21 00 30 */	addi r1, r1, 0x30
/* 801E1268 001DE1A8  4E 80 00 20 */	blr 

.global init__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
init__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg:
/* 801E126C 001DE1AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1270 001DE1B0  7C 08 02 A6 */	mflr r0
/* 801E1274 001DE1B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1278 001DE1B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E127C 001DE1BC  7C 9F 23 78 */	mr r31, r4
/* 801E1280 001DE1C0  7F E3 FB 78 */	mr r3, r31
/* 801E1284 001DE1C4  48 00 0E 55 */	bl startDownMotion__Q34Game8ItemRock4ItemFv
/* 801E1288 001DE1C8  7F E3 FB 78 */	mr r3, r31
/* 801E128C 001DE1CC  38 80 38 3B */	li r4, 0x383b
/* 801E1290 001DE1D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E1294 001DE1D4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801E1298 001DE1D8  7D 89 03 A6 */	mtctr r12
/* 801E129C 001DE1DC  4E 80 04 21 */	bctrl 
/* 801E12A0 001DE1E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E12A4 001DE1E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E12A8 001DE1E8  7C 08 03 A6 */	mtlr r0
/* 801E12AC 001DE1EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E12B0 001DE1F0  4E 80 00 20 */	blr 

.global exec__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item
exec__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item:
/* 801E12B4 001DE1F4  4E 80 00 20 */	blr 

.global cleanup__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item
cleanup__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item:
/* 801E12B8 001DE1F8  4E 80 00 20 */	blr 

.global onDamage__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Itemf
onDamage__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Itemf:
/* 801E12BC 001DE1FC  C0 04 02 18 */	lfs f0, 0x218(r4)
/* 801E12C0 001DE200  EC 00 08 2A */	fadds f0, f0, f1
/* 801E12C4 001DE204  D0 04 02 18 */	stfs f0, 0x218(r4)
/* 801E12C8 001DE208  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent:
/* 801E12CC 001DE20C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E12D0 001DE210  7C 08 02 A6 */	mflr r0
/* 801E12D4 001DE214  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E12D8 001DE218  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E12DC 001DE21C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E12E0 001DE220  7C 9F 23 78 */	mr r31, r4
/* 801E12E4 001DE224  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E12E8 001DE228  7C 7E 1B 78 */	mr r30, r3
/* 801E12EC 001DE22C  D0 04 02 14 */	stfs f0, 0x214(r4)
/* 801E12F0 001DE230  80 64 02 1C */	lwz r3, 0x21c(r4)
/* 801E12F4 001DE234  38 03 00 01 */	addi r0, r3, 1
/* 801E12F8 001DE238  90 04 02 1C */	stw r0, 0x21c(r4)
/* 801E12FC 001DE23C  80 04 02 1C */	lwz r0, 0x21c(r4)
/* 801E1300 001DE240  80 64 02 20 */	lwz r3, 0x220(r4)
/* 801E1304 001DE244  7C 00 18 00 */	cmpw r0, r3
/* 801E1308 001DE248  41 80 00 28 */	blt .L_801E1330
/* 801E130C 001DE24C  90 7F 02 1C */	stw r3, 0x21c(r31)
/* 801E1310 001DE250  7F E3 FB 78 */	mr r3, r31
/* 801E1314 001DE254  38 80 00 00 */	li r4, 0
/* 801E1318 001DE258  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E131C 001DE25C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801E1320 001DE260  7D 89 03 A6 */	mtctr r12
/* 801E1324 001DE264  4E 80 04 21 */	bctrl 
/* 801E1328 001DE268  7F E3 FB 78 */	mr r3, r31
/* 801E132C 001DE26C  48 00 06 39 */	bl finishLoopEffect__Q34Game8ItemRock4ItemFv
.L_801E1330:
/* 801E1330 001DE270  80 7F 02 1C */	lwz r3, 0x21c(r31)
/* 801E1334 001DE274  3C 80 43 30 */	lis r4, 0x4330
/* 801E1338 001DE278  80 1F 02 20 */	lwz r0, 0x220(r31)
/* 801E133C 001DE27C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801E1340 001DE280  90 81 00 08 */	stw r4, 8(r1)
/* 801E1344 001DE284  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801E1348 001DE288  C8 42 B5 70 */	lfd f2, lbl_805198D0@sda21(r2)
/* 801E134C 001DE28C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801E1350 001DE290  C0 62 B5 6C */	lfs f3, lbl_805198CC@sda21(r2)
/* 801E1354 001DE294  C8 01 00 08 */	lfd f0, 8(r1)
/* 801E1358 001DE298  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E135C 001DE29C  EC 20 10 28 */	fsubs f1, f0, f2
/* 801E1360 001DE2A0  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 801E1364 001DE2A4  90 81 00 10 */	stw r4, 0x10(r1)
/* 801E1368 001DE2A8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801E136C 001DE2AC  EC 00 10 28 */	fsubs f0, f0, f2
/* 801E1370 001DE2B0  EC 01 00 24 */	fdivs f0, f1, f0
/* 801E1374 001DE2B4  EC 23 00 28 */	fsubs f1, f3, f0
/* 801E1378 001DE2B8  4B F4 21 81 */	bl setPower__Q34Game4Farm8ObstacleFf
/* 801E137C 001DE2BC  7F E3 FB 78 */	mr r3, r31
/* 801E1380 001DE2C0  48 00 04 D9 */	bl startLoopEffect__Q34Game8ItemRock4ItemFv
/* 801E1384 001DE2C4  7F C3 F3 78 */	mr r3, r30
/* 801E1388 001DE2C8  7F E4 FB 78 */	mr r4, r31
/* 801E138C 001DE2CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1390 001DE2D0  38 A0 00 00 */	li r5, 0
/* 801E1394 001DE2D4  38 C0 00 00 */	li r6, 0
/* 801E1398 001DE2D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801E139C 001DE2DC  7D 89 03 A6 */	mtctr r12
/* 801E13A0 001DE2E0  4E 80 04 21 */	bctrl 
/* 801E13A4 001DE2E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E13A8 001DE2E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E13AC 001DE2EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E13B0 001DE2F0  7C 08 03 A6 */	mtlr r0
/* 801E13B4 001DE2F4  38 21 00 20 */	addi r1, r1, 0x20
/* 801E13B8 001DE2F8  4E 80 00 20 */	blr 

.global init__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
init__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg:
/* 801E13BC 001DE2FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E13C0 001DE300  7C 08 02 A6 */	mflr r0
/* 801E13C4 001DE304  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E13C8 001DE308  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E13CC 001DE30C  7C 9F 23 78 */	mr r31, r4
/* 801E13D0 001DE310  7F E3 FB 78 */	mr r3, r31
/* 801E13D4 001DE314  48 00 0F 91 */	bl startUpMotion__Q34Game8ItemRock4ItemFv
/* 801E13D8 001DE318  C0 22 B5 78 */	lfs f1, lbl_805198D8@sda21(r2)
/* 801E13DC 001DE31C  7F E3 FB 78 */	mr r3, r31
/* 801E13E0 001DE320  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E13E4 001DE324  38 80 38 3A */	li r4, 0x383a
/* 801E13E8 001DE328  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 801E13EC 001DE32C  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 801E13F0 001DE330  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E13F4 001DE334  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801E13F8 001DE338  7D 89 03 A6 */	mtctr r12
/* 801E13FC 001DE33C  4E 80 04 21 */	bctrl 
/* 801E1400 001DE340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1404 001DE344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E1408 001DE348  7C 08 03 A6 */	mtlr r0
/* 801E140C 001DE34C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1410 001DE350  4E 80 00 20 */	blr 

.global exec__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Item
exec__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Item:
/* 801E1414 001DE354  4E 80 00 20 */	blr 

.global cleanup__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Item
cleanup__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Item:
/* 801E1418 001DE358  4E 80 00 20 */	blr 

.global onDamage__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Itemf
onDamage__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4Itemf:
/* 801E141C 001DE35C  C0 04 02 18 */	lfs f0, 0x218(r4)
/* 801E1420 001DE360  EC 00 08 2A */	fadds f0, f0, f1
/* 801E1424 001DE364  D0 04 02 18 */	stfs f0, 0x218(r4)
/* 801E1428 001DE368  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game8ItemRock7UpStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent:
/* 801E142C 001DE36C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E1430 001DE370  7C 08 02 A6 */	mflr r0
/* 801E1434 001DE374  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E1438 001DE378  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E143C 001DE37C  7C 9F 23 78 */	mr r31, r4
/* 801E1440 001DE380  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E1444 001DE384  7C 7E 1B 78 */	mr r30, r3
/* 801E1448 001DE388  7F E3 FB 78 */	mr r3, r31
/* 801E144C 001DE38C  80 A4 02 1C */	lwz r5, 0x21c(r4)
/* 801E1450 001DE390  38 80 00 01 */	li r4, 1
/* 801E1454 001DE394  38 05 FF FF */	addi r0, r5, -1
/* 801E1458 001DE398  90 1F 02 1C */	stw r0, 0x21c(r31)
/* 801E145C 001DE39C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E1460 001DE3A0  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801E1464 001DE3A4  7D 89 03 A6 */	mtctr r12
/* 801E1468 001DE3A8  4E 80 04 21 */	bctrl 
/* 801E146C 001DE3AC  80 7F 02 1C */	lwz r3, 0x21c(r31)
/* 801E1470 001DE3B0  3C 80 43 30 */	lis r4, 0x4330
/* 801E1474 001DE3B4  80 1F 02 20 */	lwz r0, 0x220(r31)
/* 801E1478 001DE3B8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801E147C 001DE3BC  90 81 00 08 */	stw r4, 8(r1)
/* 801E1480 001DE3C0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801E1484 001DE3C4  C8 42 B5 70 */	lfd f2, lbl_805198D0@sda21(r2)
/* 801E1488 001DE3C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801E148C 001DE3CC  C0 62 B5 6C */	lfs f3, lbl_805198CC@sda21(r2)
/* 801E1490 001DE3D0  C8 01 00 08 */	lfd f0, 8(r1)
/* 801E1494 001DE3D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1498 001DE3D8  EC 20 10 28 */	fsubs f1, f0, f2
/* 801E149C 001DE3DC  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 801E14A0 001DE3E0  90 81 00 10 */	stw r4, 0x10(r1)
/* 801E14A4 001DE3E4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801E14A8 001DE3E8  EC 00 10 28 */	fsubs f0, f0, f2
/* 801E14AC 001DE3EC  EC 01 00 24 */	fdivs f0, f1, f0
/* 801E14B0 001DE3F0  EC 23 00 28 */	fsubs f1, f3, f0
/* 801E14B4 001DE3F4  4B F4 20 45 */	bl setPower__Q34Game4Farm8ObstacleFf
/* 801E14B8 001DE3F8  7F E3 FB 78 */	mr r3, r31
/* 801E14BC 001DE3FC  48 00 03 9D */	bl startLoopEffect__Q34Game8ItemRock4ItemFv
/* 801E14C0 001DE400  7F C3 F3 78 */	mr r3, r30
/* 801E14C4 001DE404  7F E4 FB 78 */	mr r4, r31
/* 801E14C8 001DE408  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E14CC 001DE40C  38 A0 00 00 */	li r5, 0
/* 801E14D0 001DE410  38 C0 00 00 */	li r6, 0
/* 801E14D4 001DE414  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801E14D8 001DE418  7D 89 03 A6 */	mtctr r12
/* 801E14DC 001DE41C  4E 80 04 21 */	bctrl 
/* 801E14E0 001DE420  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E14E4 001DE424  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E14E8 001DE428  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E14EC 001DE42C  7C 08 03 A6 */	mtlr r0
/* 801E14F0 001DE430  38 21 00 20 */	addi r1, r1, 0x20
/* 801E14F4 001DE434  4E 80 00 20 */	blr 

.global constructor__Q34Game8ItemRock4ItemFv
constructor__Q34Game8ItemRock4ItemFv:
/* 801E14F8 001DE438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E14FC 001DE43C  7C 08 02 A6 */	mflr r0
/* 801E1500 001DE440  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1504 001DE444  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E1508 001DE448  7C 7F 1B 78 */	mr r31, r3
/* 801E150C 001DE44C  38 60 00 84 */	li r3, 0x84
/* 801E1510 001DE450  4B E4 29 95 */	bl __nw__FUl
/* 801E1514 001DE454  7C 60 1B 79 */	or. r0, r3, r3
/* 801E1518 001DE458  41 82 00 10 */	beq .L_801E1528
/* 801E151C 001DE45C  7F E4 FB 78 */	mr r4, r31
/* 801E1520 001DE460  48 28 01 01 */	bl __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
/* 801E1524 001DE464  7C 60 1B 78 */	mr r0, r3
.L_801E1528:
/* 801E1528 001DE468  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801E152C 001DE46C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1530 001DE470  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E1534 001DE474  7C 08 03 A6 */	mtlr r0
/* 801E1538 001DE478  38 21 00 10 */	addi r1, r1, 0x10
/* 801E153C 001DE47C  4E 80 00 20 */	blr 

.global onInit__Q34Game8ItemRock4ItemFPQ24Game15CreatureInitArg
onInit__Q34Game8ItemRock4ItemFPQ24Game15CreatureInitArg:
/* 801E1540 001DE480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1544 001DE484  7C 08 02 A6 */	mflr r0
/* 801E1548 001DE488  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E154C 001DE48C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1550 001DE490  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E1554 001DE494  7C 7F 1B 78 */	mr r31, r3
/* 801E1558 001DE498  38 60 00 14 */	li r3, 0x14
/* 801E155C 001DE49C  93 C1 00 08 */	stw r30, 8(r1)
/* 801E1560 001DE4A0  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 801E1564 001DE4A4  4B E4 29 41 */	bl __nw__FUl
/* 801E1568 001DE4A8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E156C 001DE4AC  41 82 00 28 */	beq .L_801E1594
/* 801E1570 001DE4B0  80 6D 94 80 */	lwz r3, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E1574 001DE4B4  38 80 00 00 */	li r4, 0
/* 801E1578 001DE4B8  4B FE BB D9 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 801E157C 001DE4BC  7C 64 1B 78 */	mr r4, r3
/* 801E1580 001DE4C0  7F C3 F3 78 */	mr r3, r30
/* 801E1584 001DE4C4  3C A0 00 02 */	lis r5, 2
/* 801E1588 001DE4C8  38 C0 00 02 */	li r6, 2
/* 801E158C 001DE4CC  48 25 CC 4D */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801E1590 001DE4D0  7C 7E 1B 78 */	mr r30, r3
.L_801E1594:
/* 801E1594 001DE4D4  93 DF 01 74 */	stw r30, 0x174(r31)
/* 801E1598 001DE4D8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801E159C 001DE4DC  80 63 00 08 */	lwz r3, 8(r3)
/* 801E15A0 001DE4E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E15A4 001DE4E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E15A8 001DE4E8  7D 89 03 A6 */	mtctr r12
/* 801E15AC 001DE4EC  4E 80 04 21 */	bctrl 
/* 801E15B0 001DE4F0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801E15B4 001DE4F4  80 63 00 08 */	lwz r3, 8(r3)
/* 801E15B8 001DE4F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801E15BC 001DE4FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801E15C0 001DE500  7D 89 03 A6 */	mtctr r12
/* 801E15C4 001DE504  4E 80 04 21 */	bctrl 
/* 801E15C8 001DE508  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801E15CC 001DE50C  80 63 00 08 */	lwz r3, 8(r3)
/* 801E15D0 001DE510  4B E8 53 55 */	bl makeDL__8J3DModelFv
/* 801E15D4 001DE514  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801E15D8 001DE518  80 63 00 08 */	lwz r3, 8(r3)
/* 801E15DC 001DE51C  4B E8 52 19 */	bl lock__8J3DModelFv
/* 801E15E0 001DE520  38 60 00 24 */	li r3, 0x24
/* 801E15E4 001DE524  4B E4 28 C1 */	bl __nw__FUl
/* 801E15E8 001DE528  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E15EC 001DE52C  41 82 00 1C */	beq .L_801E1608
/* 801E15F0 001DE530  38 80 00 C7 */	li r4, 0xc7
/* 801E15F4 001DE534  38 A0 00 C8 */	li r5, 0xc8
/* 801E15F8 001DE538  48 1C EA 19 */	bl __ct__Q23efx9TForever2FUsUs
/* 801E15FC 001DE53C  3C 60 80 4C */	lis r3, __vt__Q23efx8TKouhai1@ha
/* 801E1600 001DE540  38 03 9A CC */	addi r0, r3, __vt__Q23efx8TKouhai1@l
/* 801E1604 001DE544  90 1E 00 00 */	stw r0, 0(r30)
.L_801E1608:
/* 801E1608 001DE548  93 DF 01 F0 */	stw r30, 0x1f0(r31)
/* 801E160C 001DE54C  38 60 00 24 */	li r3, 0x24
/* 801E1610 001DE550  4B E4 28 95 */	bl __nw__FUl
/* 801E1614 001DE554  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E1618 001DE558  41 82 00 1C */	beq .L_801E1634
/* 801E161C 001DE55C  38 80 00 C9 */	li r4, 0xc9
/* 801E1620 001DE560  38 A0 00 CA */	li r5, 0xca
/* 801E1624 001DE564  48 1C E9 ED */	bl __ct__Q23efx9TForever2FUsUs
/* 801E1628 001DE568  3C 60 80 4C */	lis r3, __vt__Q23efx8TKouhai2@ha
/* 801E162C 001DE56C  38 03 9A B0 */	addi r0, r3, __vt__Q23efx8TKouhai2@l
/* 801E1630 001DE570  90 1E 00 00 */	stw r0, 0(r30)
.L_801E1634:
/* 801E1634 001DE574  93 DF 01 F4 */	stw r30, 0x1f4(r31)
/* 801E1638 001DE578  38 60 00 24 */	li r3, 0x24
/* 801E163C 001DE57C  4B E4 28 69 */	bl __nw__FUl
/* 801E1640 001DE580  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E1644 001DE584  41 82 00 1C */	beq .L_801E1660
/* 801E1648 001DE588  38 80 00 CB */	li r4, 0xcb
/* 801E164C 001DE58C  38 A0 00 CC */	li r5, 0xcc
/* 801E1650 001DE590  48 1C E9 C1 */	bl __ct__Q23efx9TForever2FUsUs
/* 801E1654 001DE594  3C 60 80 4C */	lis r3, __vt__Q23efx8TKouhai3@ha
/* 801E1658 001DE598  38 03 9A 94 */	addi r0, r3, __vt__Q23efx8TKouhai3@l
/* 801E165C 001DE59C  90 1E 00 00 */	stw r0, 0(r30)
.L_801E1660:
/* 801E1660 001DE5A0  93 DF 01 F8 */	stw r30, 0x1f8(r31)
/* 801E1664 001DE5A4  28 1F 00 00 */	cmplwi r31, 0
/* 801E1668 001DE5A8  C0 02 B5 78 */	lfs f0, lbl_805198D8@sda21(r2)
/* 801E166C 001DE5AC  7F E5 FB 78 */	mr r5, r31
/* 801E1670 001DE5B0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801E1674 001DE5B4  80 6D 94 80 */	lwz r3, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E1678 001DE5B8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 801E167C 001DE5BC  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801E1680 001DE5C0  41 82 00 08 */	beq .L_801E1688
/* 801E1684 001DE5C4  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E1688:
/* 801E1688 001DE5C8  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E168C 001DE5CC  38 80 00 02 */	li r4, 2
/* 801E1690 001DE5D0  48 24 75 F9 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E1694 001DE5D4  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801E1698 001DE5D8  7F E4 FB 78 */	mr r4, r31
/* 801E169C 001DE5DC  38 A0 00 00 */	li r5, 0
/* 801E16A0 001DE5E0  38 C0 00 00 */	li r6, 0
/* 801E16A4 001DE5E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E16A8 001DE5E8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E16AC 001DE5EC  7D 89 03 A6 */	mtctr r12
/* 801E16B0 001DE5F0  4E 80 04 21 */	bctrl 
/* 801E16B4 001DE5F4  7F E3 FB 78 */	mr r3, r31
/* 801E16B8 001DE5F8  38 80 00 01 */	li r4, 1
/* 801E16BC 001DE5FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E16C0 001DE600  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801E16C4 001DE604  7D 89 03 A6 */	mtctr r12
/* 801E16C8 001DE608  4E 80 04 21 */	bctrl 
/* 801E16CC 001DE60C  7F E3 FB 78 */	mr r3, r31
/* 801E16D0 001DE610  38 80 00 03 */	li r4, 3
/* 801E16D4 001DE614  48 00 0F 19 */	bl createRock__Q34Game8ItemRock4ItemFi
/* 801E16D8 001DE618  80 8D 94 80 */	lwz r4, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E16DC 001DE61C  38 DF 01 C4 */	addi r6, r31, 0x1c4
/* 801E16E0 001DE620  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 801E16E4 001DE624  38 A0 00 00 */	li r5, 0
/* 801E16E8 001DE628  80 84 00 88 */	lwz r4, 0x88(r4)
/* 801E16EC 001DE62C  38 E0 00 00 */	li r7, 0
/* 801E16F0 001DE630  C0 04 02 40 */	lfs f0, 0x240(r4)
/* 801E16F4 001DE634  D0 03 00 00 */	stfs f0, 0(r3)
/* 801E16F8 001DE638  80 8D 94 80 */	lwz r4, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E16FC 001DE63C  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 801E1700 001DE640  80 84 00 88 */	lwz r4, 0x88(r4)
/* 801E1704 001DE644  C0 04 02 68 */	lfs f0, 0x268(r4)
/* 801E1708 001DE648  D0 03 00 04 */	stfs f0, 4(r3)
/* 801E170C 001DE64C  80 8D 94 80 */	lwz r4, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E1710 001DE650  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 801E1714 001DE654  80 84 00 88 */	lwz r4, 0x88(r4)
/* 801E1718 001DE658  C0 04 02 90 */	lfs f0, 0x290(r4)
/* 801E171C 001DE65C  D0 03 00 08 */	stfs f0, 8(r3)
/* 801E1720 001DE660  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 801E1724 001DE664  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801E1728 001DE668  4B F5 29 89 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 801E172C 001DE66C  38 00 00 00 */	li r0, 0
/* 801E1730 001DE670  98 1F 01 FC */	stb r0, 0x1fc(r31)
/* 801E1734 001DE674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1738 001DE678  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E173C 001DE67C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E1740 001DE680  7C 08 03 A6 */	mtlr r0
/* 801E1744 001DE684  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1748 001DE688  4E 80 00 20 */	blr 

.global "start__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
"start__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg":
/* 801E174C 001DE68C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1750 001DE690  7C 08 02 A6 */	mflr r0
/* 801E1754 001DE694  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1758 001DE698  38 00 00 00 */	li r0, 0
/* 801E175C 001DE69C  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801E1760 001DE6A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1764 001DE6A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801E1768 001DE6A8  7D 89 03 A6 */	mtctr r12
/* 801E176C 001DE6AC  4E 80 04 21 */	bctrl 
/* 801E1770 001DE6B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1774 001DE6B4  7C 08 03 A6 */	mtlr r0
/* 801E1778 001DE6B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801E177C 001DE6BC  4E 80 00 20 */	blr 

.global onKill__Q34Game8ItemRock4ItemFPQ24Game15CreatureKillArg
onKill__Q34Game8ItemRock4ItemFPQ24Game15CreatureKillArg:
/* 801E1780 001DE6C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1784 001DE6C4  7C 08 02 A6 */	mflr r0
/* 801E1788 001DE6C8  7C 64 1B 78 */	mr r4, r3
/* 801E178C 001DE6CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1790 001DE6D0  80 6D 94 80 */	lwz r3, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E1794 001DE6D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1798 001DE6D8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801E179C 001DE6DC  7D 89 03 A6 */	mtctr r12
/* 801E17A0 001DE6E0  4E 80 04 21 */	bctrl 
/* 801E17A4 001DE6E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E17A8 001DE6E8  7C 08 03 A6 */	mtlr r0
/* 801E17AC 001DE6EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E17B0 001DE6F0  4E 80 00 20 */	blr 

.global onSetPosition__Q34Game8ItemRock4ItemFv
onSetPosition__Q34Game8ItemRock4ItemFv:
/* 801E17B4 001DE6F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E17B8 001DE6F8  7C 08 02 A6 */	mflr r0
/* 801E17BC 001DE6FC  C0 22 B5 7C */	lfs f1, lbl_805198DC@sda21(r2)
/* 801E17C0 001DE700  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E17C4 001DE704  C0 42 B5 6C */	lfs f2, lbl_805198CC@sda21(r2)
/* 801E17C8 001DE708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E17CC 001DE70C  7C 7F 1B 78 */	mr r31, r3
/* 801E17D0 001DE710  7F E4 FB 78 */	mr r4, r31
/* 801E17D4 001DE714  80 6D 91 D8 */	lwz r3, farmMgr__Q24Game4Farm@sda21(r13)
/* 801E17D8 001DE718  4B F4 2C 9D */	bl addObstacle__Q34Game4Farm7FarmMgrFPQ24Game8Creatureff
/* 801E17DC 001DE71C  90 7F 01 EC */	stw r3, 0x1ec(r31)
/* 801E17E0 001DE720  7F E3 FB 78 */	mr r3, r31
/* 801E17E4 001DE724  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E17E8 001DE728  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 801E17EC 001DE72C  7D 89 03 A6 */	mtctr r12
/* 801E17F0 001DE730  4E 80 04 21 */	bctrl 
/* 801E17F4 001DE734  7F E3 FB 78 */	mr r3, r31
/* 801E17F8 001DE738  48 00 00 61 */	bl startLoopEffect__Q34Game8ItemRock4ItemFv
/* 801E17FC 001DE73C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1800 001DE740  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E1804 001DE744  7C 08 03 A6 */	mtlr r0
/* 801E1808 001DE748  38 21 00 10 */	addi r1, r1, 0x10
/* 801E180C 001DE74C  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent:
/* 801E1810 001DE750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1814 001DE754  7C 08 02 A6 */	mflr r0
/* 801E1818 001DE758  7C 66 1B 78 */	mr r6, r3
/* 801E181C 001DE75C  7C 85 23 78 */	mr r5, r4
/* 801E1820 001DE760  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1824 001DE764  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E1828 001DE768  28 03 00 00 */	cmplwi r3, 0
/* 801E182C 001DE76C  41 82 00 18 */	beq .L_801E1844
/* 801E1830 001DE770  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1834 001DE774  7C C4 33 78 */	mr r4, r6
/* 801E1838 001DE778  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801E183C 001DE77C  7D 89 03 A6 */	mtctr r12
/* 801E1840 001DE780  4E 80 04 21 */	bctrl 
.L_801E1844:
/* 801E1844 001DE784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1848 001DE788  7C 08 03 A6 */	mtlr r0
/* 801E184C 001DE78C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1850 001DE790  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent":
/* 801E1854 001DE794  4E 80 00 20 */	blr 

.global startLoopEffect__Q34Game8ItemRock4ItemFv
startLoopEffect__Q34Game8ItemRock4ItemFv:
/* 801E1858 001DE798  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E185C 001DE79C  7C 08 02 A6 */	mflr r0
/* 801E1860 001DE7A0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801E1864 001DE7A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E1868 001DE7A8  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 801E186C 001DE7AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E1870 001DE7B0  7C 7F 1B 78 */	mr r31, r3
/* 801E1874 001DE7B4  90 01 00 08 */	stw r0, 8(r1)
/* 801E1878 001DE7B8  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801E187C 001DE7BC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801E1880 001DE7C0  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 801E1884 001DE7C4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801E1888 001DE7C8  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 801E188C 001DE7CC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801E1890 001DE7D0  80 03 02 1C */	lwz r0, 0x21c(r3)
/* 801E1894 001DE7D4  2C 00 00 01 */	cmpwi r0, 1
/* 801E1898 001DE7D8  41 82 00 4C */	beq .L_801E18E4
/* 801E189C 001DE7DC  40 80 00 10 */	bge .L_801E18AC
/* 801E18A0 001DE7E0  2C 00 00 00 */	cmpwi r0, 0
/* 801E18A4 001DE7E4  40 80 00 14 */	bge .L_801E18B8
/* 801E18A8 001DE7E8  48 00 00 94 */	b .L_801E193C
.L_801E18AC:
/* 801E18AC 001DE7EC  2C 00 00 03 */	cmpwi r0, 3
/* 801E18B0 001DE7F0  40 80 00 8C */	bge .L_801E193C
/* 801E18B4 001DE7F4  48 00 00 5C */	b .L_801E1910
.L_801E18B8:
/* 801E18B8 001DE7F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801E18BC 001DE7FC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E18C0 001DE800  7D 89 03 A6 */	mtctr r12
/* 801E18C4 001DE804  4E 80 04 21 */	bctrl 
/* 801E18C8 001DE808  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801E18CC 001DE80C  38 81 00 08 */	addi r4, r1, 8
/* 801E18D0 001DE810  81 83 00 00 */	lwz r12, 0(r3)
/* 801E18D4 001DE814  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E18D8 001DE818  7D 89 03 A6 */	mtctr r12
/* 801E18DC 001DE81C  4E 80 04 21 */	bctrl 
/* 801E18E0 001DE820  48 00 00 70 */	b .L_801E1950
.L_801E18E4:
/* 801E18E4 001DE824  81 83 00 00 */	lwz r12, 0(r3)
/* 801E18E8 001DE828  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E18EC 001DE82C  7D 89 03 A6 */	mtctr r12
/* 801E18F0 001DE830  4E 80 04 21 */	bctrl 
/* 801E18F4 001DE834  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801E18F8 001DE838  38 81 00 08 */	addi r4, r1, 8
/* 801E18FC 001DE83C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1900 001DE840  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1904 001DE844  7D 89 03 A6 */	mtctr r12
/* 801E1908 001DE848  4E 80 04 21 */	bctrl 
/* 801E190C 001DE84C  48 00 00 44 */	b .L_801E1950
.L_801E1910:
/* 801E1910 001DE850  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1914 001DE854  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1918 001DE858  7D 89 03 A6 */	mtctr r12
/* 801E191C 001DE85C  4E 80 04 21 */	bctrl 
/* 801E1920 001DE860  80 7F 01 F0 */	lwz r3, 0x1f0(r31)
/* 801E1924 001DE864  38 81 00 08 */	addi r4, r1, 8
/* 801E1928 001DE868  81 83 00 00 */	lwz r12, 0(r3)
/* 801E192C 001DE86C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1930 001DE870  7D 89 03 A6 */	mtctr r12
/* 801E1934 001DE874  4E 80 04 21 */	bctrl 
/* 801E1938 001DE878  48 00 00 18 */	b .L_801E1950
.L_801E193C:
/* 801E193C 001DE87C  7F E3 FB 78 */	mr r3, r31
/* 801E1940 001DE880  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E1944 001DE884  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1948 001DE888  7D 89 03 A6 */	mtctr r12
/* 801E194C 001DE88C  4E 80 04 21 */	bctrl 
.L_801E1950:
/* 801E1950 001DE890  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E1954 001DE894  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E1958 001DE898  7C 08 03 A6 */	mtlr r0
/* 801E195C 001DE89C  38 21 00 20 */	addi r1, r1, 0x20
/* 801E1960 001DE8A0  4E 80 00 20 */	blr 

.global finishLoopEffect__Q34Game8ItemRock4ItemFv
finishLoopEffect__Q34Game8ItemRock4ItemFv:
/* 801E1964 001DE8A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1968 001DE8A8  7C 08 02 A6 */	mflr r0
/* 801E196C 001DE8AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1970 001DE8B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E1974 001DE8B4  7C 7F 1B 78 */	mr r31, r3
/* 801E1978 001DE8B8  80 63 01 F0 */	lwz r3, 0x1f0(r3)
/* 801E197C 001DE8BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1980 001DE8C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E1984 001DE8C4  7D 89 03 A6 */	mtctr r12
/* 801E1988 001DE8C8  4E 80 04 21 */	bctrl 
/* 801E198C 001DE8CC  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801E1990 001DE8D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1994 001DE8D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E1998 001DE8D8  7D 89 03 A6 */	mtctr r12
/* 801E199C 001DE8DC  4E 80 04 21 */	bctrl 
/* 801E19A0 001DE8E0  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801E19A4 001DE8E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E19A8 001DE8E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E19AC 001DE8EC  7D 89 03 A6 */	mtctr r12
/* 801E19B0 001DE8F0  4E 80 04 21 */	bctrl 
/* 801E19B4 001DE8F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E19B8 001DE8F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E19BC 001DE8FC  7C 08 03 A6 */	mtlr r0
/* 801E19C0 001DE900  38 21 00 10 */	addi r1, r1, 0x10
/* 801E19C4 001DE904  4E 80 00 20 */	blr 

.global "startFukuEffect__Q34Game8ItemRock4ItemFR10Vector3<f>"
"startFukuEffect__Q34Game8ItemRock4ItemFR10Vector3<f>":
/* 801E19C8 001DE908  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801E19CC 001DE90C  7C 08 02 A6 */	mflr r0
/* 801E19D0 001DE910  3C C0 80 4C */	lis r6, __vt__Q23efx11TKouhaiFuku@ha
/* 801E19D4 001DE914  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 801E19D8 001DE918  90 01 00 34 */	stw r0, 0x34(r1)
/* 801E19DC 001DE91C  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 801E19E0 001DE920  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple2@ha
/* 801E19E4 001DE924  38 E0 00 00 */	li r7, 0
/* 801E19E8 001DE928  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801E19EC 001DE92C  39 00 00 D0 */	li r8, 0xd0
/* 801E19F0 001DE930  7C 7F 1B 78 */	mr r31, r3
/* 801E19F4 001DE934  38 C6 9A 74 */	addi r6, r6, __vt__Q23efx11TKouhaiFuku@l
/* 801E19F8 001DE938  90 01 00 18 */	stw r0, 0x18(r1)
/* 801E19FC 001DE93C  38 05 6A 64 */	addi r0, r5, __vt__Q23efx8TSimple2@l
/* 801E1A00 001DE940  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801E1A04 001DE944  38 61 00 18 */	addi r3, r1, 0x18
/* 801E1A08 001DE948  90 01 00 18 */	stw r0, 0x18(r1)
/* 801E1A0C 001DE94C  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801E1A10 001DE950  38 A0 00 D1 */	li r5, 0xd1
/* 801E1A14 001DE954  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 801E1A18 001DE958  B0 A1 00 1E */	sth r5, 0x1e(r1)
/* 801E1A1C 001DE95C  90 E1 00 20 */	stw r7, 0x20(r1)
/* 801E1A20 001DE960  90 E1 00 24 */	stw r7, 0x24(r1)
/* 801E1A24 001DE964  90 C1 00 18 */	stw r6, 0x18(r1)
/* 801E1A28 001DE968  90 01 00 08 */	stw r0, 8(r1)
/* 801E1A2C 001DE96C  C0 04 00 00 */	lfs f0, 0(r4)
/* 801E1A30 001DE970  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801E1A34 001DE974  C0 04 00 04 */	lfs f0, 4(r4)
/* 801E1A38 001DE978  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801E1A3C 001DE97C  C0 04 00 08 */	lfs f0, 8(r4)
/* 801E1A40 001DE980  38 81 00 08 */	addi r4, r1, 8
/* 801E1A44 001DE984  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801E1A48 001DE988  48 1C D5 CD */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 801E1A4C 001DE98C  7F E3 FB 78 */	mr r3, r31
/* 801E1A50 001DE990  38 80 38 39 */	li r4, 0x3839
/* 801E1A54 001DE994  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E1A58 001DE998  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801E1A5C 001DE99C  7D 89 03 A6 */	mtctr r12
/* 801E1A60 001DE9A0  4E 80 04 21 */	bctrl 
/* 801E1A64 001DE9A4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801E1A68 001DE9A8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801E1A6C 001DE9AC  7C 08 03 A6 */	mtlr r0
/* 801E1A70 001DE9B0  38 21 00 30 */	addi r1, r1, 0x30
/* 801E1A74 001DE9B4  4E 80 00 20 */	blr 

.global doLoad__Q34Game8ItemRock4ItemFR6Stream
doLoad__Q34Game8ItemRock4ItemFR6Stream:
/* 801E1A78 001DE9B8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801E1A7C 001DE9BC  7C 08 02 A6 */	mflr r0
/* 801E1A80 001DE9C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801E1A84 001DE9C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801E1A88 001DE9C8  7C 9F 23 78 */	mr r31, r4
/* 801E1A8C 001DE9CC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801E1A90 001DE9D0  7C 7E 1B 78 */	mr r30, r3
/* 801E1A94 001DE9D4  7F E3 FB 78 */	mr r3, r31
/* 801E1A98 001DE9D8  48 23 2F F9 */	bl readInt__6StreamFv
/* 801E1A9C 001DE9DC  90 7E 02 1C */	stw r3, 0x21c(r30)
/* 801E1AA0 001DE9E0  7F E3 FB 78 */	mr r3, r31
/* 801E1AA4 001DE9E4  48 23 33 09 */	bl readFloat__6StreamFv
/* 801E1AA8 001DE9E8  D0 3E 02 14 */	stfs f1, 0x214(r30)
/* 801E1AAC 001DE9EC  7F E3 FB 78 */	mr r3, r31
/* 801E1AB0 001DE9F0  48 23 32 FD */	bl readFloat__6StreamFv
/* 801E1AB4 001DE9F4  D0 3E 02 00 */	stfs f1, 0x200(r30)
/* 801E1AB8 001DE9F8  3C 80 43 30 */	lis r4, 0x4330
/* 801E1ABC 001DE9FC  C8 42 B5 70 */	lfd f2, lbl_805198D0@sda21(r2)
/* 801E1AC0 001DEA00  80 7E 02 1C */	lwz r3, 0x21c(r30)
/* 801E1AC4 001DEA04  80 1E 02 20 */	lwz r0, 0x220(r30)
/* 801E1AC8 001DEA08  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801E1ACC 001DEA0C  90 81 00 18 */	stw r4, 0x18(r1)
/* 801E1AD0 001DEA10  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801E1AD4 001DEA14  C0 62 B5 6C */	lfs f3, lbl_805198CC@sda21(r2)
/* 801E1AD8 001DEA18  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801E1ADC 001DEA1C  80 7E 01 EC */	lwz r3, 0x1ec(r30)
/* 801E1AE0 001DEA20  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 801E1AE4 001DEA24  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E1AE8 001DEA28  EC 20 10 28 */	fsubs f1, f0, f2
/* 801E1AEC 001DEA2C  90 81 00 20 */	stw r4, 0x20(r1)
/* 801E1AF0 001DEA30  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 801E1AF4 001DEA34  EC 00 10 28 */	fsubs f0, f0, f2
/* 801E1AF8 001DEA38  EC 01 00 24 */	fdivs f0, f1, f0
/* 801E1AFC 001DEA3C  EC 23 00 28 */	fsubs f1, f3, f0
/* 801E1B00 001DEA40  4B F4 19 F9 */	bl setPower__Q34Game4Farm8ObstacleFf
/* 801E1B04 001DEA44  7F C3 F3 78 */	mr r3, r30
/* 801E1B08 001DEA48  48 00 03 C9 */	bl initMotion__Q34Game8ItemRock4ItemFv
/* 801E1B0C 001DEA4C  80 7E 01 F0 */	lwz r3, 0x1f0(r30)
/* 801E1B10 001DEA50  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1B14 001DEA54  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E1B18 001DEA58  7D 89 03 A6 */	mtctr r12
/* 801E1B1C 001DEA5C  4E 80 04 21 */	bctrl 
/* 801E1B20 001DEA60  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 801E1B24 001DEA64  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1B28 001DEA68  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E1B2C 001DEA6C  7D 89 03 A6 */	mtctr r12
/* 801E1B30 001DEA70  4E 80 04 21 */	bctrl 
/* 801E1B34 001DEA74  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 801E1B38 001DEA78  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1B3C 001DEA7C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E1B40 001DEA80  7D 89 03 A6 */	mtctr r12
/* 801E1B44 001DEA84  4E 80 04 21 */	bctrl 
/* 801E1B48 001DEA88  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801E1B4C 001DEA8C  80 7E 02 20 */	lwz r3, 0x220(r30)
/* 801E1B50 001DEA90  7C 00 18 00 */	cmpw r0, r3
/* 801E1B54 001DEA94  41 80 00 20 */	blt .L_801E1B74
/* 801E1B58 001DEA98  90 7E 02 1C */	stw r3, 0x21c(r30)
/* 801E1B5C 001DEA9C  7F C3 F3 78 */	mr r3, r30
/* 801E1B60 001DEAA0  38 80 00 00 */	li r4, 0
/* 801E1B64 001DEAA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1B68 001DEAA8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801E1B6C 001DEAAC  7D 89 03 A6 */	mtctr r12
/* 801E1B70 001DEAB0  4E 80 04 21 */	bctrl 
.L_801E1B74:
/* 801E1B74 001DEAB4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801E1B78 001DEAB8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801E1B7C 001DEABC  90 01 00 08 */	stw r0, 8(r1)
/* 801E1B80 001DEAC0  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 801E1B84 001DEAC4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801E1B88 001DEAC8  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 801E1B8C 001DEACC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801E1B90 001DEAD0  C0 1E 01 A4 */	lfs f0, 0x1a4(r30)
/* 801E1B94 001DEAD4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801E1B98 001DEAD8  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801E1B9C 001DEADC  2C 00 00 01 */	cmpwi r0, 1
/* 801E1BA0 001DEAE0  41 82 00 50 */	beq .L_801E1BF0
/* 801E1BA4 001DEAE4  40 80 00 10 */	bge .L_801E1BB4
/* 801E1BA8 001DEAE8  2C 00 00 00 */	cmpwi r0, 0
/* 801E1BAC 001DEAEC  40 80 00 14 */	bge .L_801E1BC0
/* 801E1BB0 001DEAF0  48 00 00 A0 */	b .L_801E1C50
.L_801E1BB4:
/* 801E1BB4 001DEAF4  2C 00 00 03 */	cmpwi r0, 3
/* 801E1BB8 001DEAF8  40 80 00 98 */	bge .L_801E1C50
/* 801E1BBC 001DEAFC  48 00 00 64 */	b .L_801E1C20
.L_801E1BC0:
/* 801E1BC0 001DEB00  7F C3 F3 78 */	mr r3, r30
/* 801E1BC4 001DEB04  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1BC8 001DEB08  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1BCC 001DEB0C  7D 89 03 A6 */	mtctr r12
/* 801E1BD0 001DEB10  4E 80 04 21 */	bctrl 
/* 801E1BD4 001DEB14  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 801E1BD8 001DEB18  38 81 00 08 */	addi r4, r1, 8
/* 801E1BDC 001DEB1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1BE0 001DEB20  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1BE4 001DEB24  7D 89 03 A6 */	mtctr r12
/* 801E1BE8 001DEB28  4E 80 04 21 */	bctrl 
/* 801E1BEC 001DEB2C  48 00 00 78 */	b .L_801E1C64
.L_801E1BF0:
/* 801E1BF0 001DEB30  7F C3 F3 78 */	mr r3, r30
/* 801E1BF4 001DEB34  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1BF8 001DEB38  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1BFC 001DEB3C  7D 89 03 A6 */	mtctr r12
/* 801E1C00 001DEB40  4E 80 04 21 */	bctrl 
/* 801E1C04 001DEB44  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 801E1C08 001DEB48  38 81 00 08 */	addi r4, r1, 8
/* 801E1C0C 001DEB4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1C10 001DEB50  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1C14 001DEB54  7D 89 03 A6 */	mtctr r12
/* 801E1C18 001DEB58  4E 80 04 21 */	bctrl 
/* 801E1C1C 001DEB5C  48 00 00 48 */	b .L_801E1C64
.L_801E1C20:
/* 801E1C20 001DEB60  7F C3 F3 78 */	mr r3, r30
/* 801E1C24 001DEB64  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1C28 001DEB68  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1C2C 001DEB6C  7D 89 03 A6 */	mtctr r12
/* 801E1C30 001DEB70  4E 80 04 21 */	bctrl 
/* 801E1C34 001DEB74  80 7E 01 F0 */	lwz r3, 0x1f0(r30)
/* 801E1C38 001DEB78  38 81 00 08 */	addi r4, r1, 8
/* 801E1C3C 001DEB7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1C40 001DEB80  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1C44 001DEB84  7D 89 03 A6 */	mtctr r12
/* 801E1C48 001DEB88  4E 80 04 21 */	bctrl 
/* 801E1C4C 001DEB8C  48 00 00 18 */	b .L_801E1C64
.L_801E1C50:
/* 801E1C50 001DEB90  7F C3 F3 78 */	mr r3, r30
/* 801E1C54 001DEB94  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1C58 001DEB98  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1C5C 001DEB9C  7D 89 03 A6 */	mtctr r12
/* 801E1C60 001DEBA0  4E 80 04 21 */	bctrl 
.L_801E1C64:
/* 801E1C64 001DEBA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801E1C68 001DEBA8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801E1C6C 001DEBAC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801E1C70 001DEBB0  7C 08 03 A6 */	mtlr r0
/* 801E1C74 001DEBB4  38 21 00 30 */	addi r1, r1, 0x30
/* 801E1C78 001DEBB8  4E 80 00 20 */	blr 

.global doSave__Q34Game8ItemRock4ItemFR6Stream
doSave__Q34Game8ItemRock4ItemFR6Stream:
/* 801E1C7C 001DEBBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1C80 001DEBC0  7C 08 02 A6 */	mflr r0
/* 801E1C84 001DEBC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1C88 001DEBC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E1C8C 001DEBCC  7C 9F 23 78 */	mr r31, r4
/* 801E1C90 001DEBD0  93 C1 00 08 */	stw r30, 8(r1)
/* 801E1C94 001DEBD4  7C 7E 1B 78 */	mr r30, r3
/* 801E1C98 001DEBD8  80 83 02 1C */	lwz r4, 0x21c(r3)
/* 801E1C9C 001DEBDC  7F E3 FB 78 */	mr r3, r31
/* 801E1CA0 001DEBE0  48 23 3B 21 */	bl writeInt__6StreamFi
/* 801E1CA4 001DEBE4  C0 3E 02 14 */	lfs f1, 0x214(r30)
/* 801E1CA8 001DEBE8  7F E3 FB 78 */	mr r3, r31
/* 801E1CAC 001DEBEC  48 23 3B 9D */	bl writeFloat__6StreamFf
/* 801E1CB0 001DEBF0  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 801E1CB4 001DEBF4  7F E3 FB 78 */	mr r3, r31
/* 801E1CB8 001DEBF8  48 23 3B 91 */	bl writeFloat__6StreamFf
/* 801E1CBC 001DEBFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1CC0 001DEC00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E1CC4 001DEC04  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E1CC8 001DEC08  7C 08 03 A6 */	mtlr r0
/* 801E1CCC 001DEC0C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1CD0 001DEC10  4E 80 00 20 */	blr 

.global updateBoundSphere__Q34Game8ItemRock4ItemFv
updateBoundSphere__Q34Game8ItemRock4ItemFv:
/* 801E1CD4 001DEC14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1CD8 001DEC18  7C 08 02 A6 */	mflr r0
/* 801E1CDC 001DEC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1CE0 001DEC20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E1CE4 001DEC24  7C 7F 1B 78 */	mr r31, r3
/* 801E1CE8 001DEC28  48 00 0C 11 */	bl getWorkRadius__Q34Game8ItemRock4ItemFv
/* 801E1CEC 001DEC2C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801E1CF0 001DEC30  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
/* 801E1CF4 001DEC34  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801E1CF8 001DEC38  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 801E1CFC 001DEC3C  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801E1D00 001DEC40  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 801E1D04 001DEC44  D0 3F 01 D0 */	stfs f1, 0x1d0(r31)
/* 801E1D08 001DEC48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E1D0C 001DEC4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1D10 001DEC50  7C 08 03 A6 */	mtlr r0
/* 801E1D14 001DEC54  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1D18 001DEC58  4E 80 00 20 */	blr 

.global doAI__Q34Game8ItemRock4ItemFv
doAI__Q34Game8ItemRock4ItemFv:
/* 801E1D1C 001DEC5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E1D20 001DEC60  7C 08 02 A6 */	mflr r0
/* 801E1D24 001DEC64  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E1D28 001DEC68  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E1D2C 001DEC6C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E1D30 001DEC70  7C 7E 1B 78 */	mr r30, r3
/* 801E1D34 001DEC74  7F C4 F3 78 */	mr r4, r30
/* 801E1D38 001DEC78  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801E1D3C 001DEC7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1D40 001DEC80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E1D44 001DEC84  7D 89 03 A6 */	mtctr r12
/* 801E1D48 001DEC88  4E 80 04 21 */	bctrl 
/* 801E1D4C 001DEC8C  7F C3 F3 78 */	mr r3, r30
/* 801E1D50 001DEC90  4B FE A8 BD */	bl updateCollTree__Q24Game8BaseItemFv
/* 801E1D54 001DEC94  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 801E1D58 001DEC98  7F C3 F3 78 */	mr r3, r30
/* 801E1D5C 001DEC9C  83 E4 00 00 */	lwz r31, 0(r4)
/* 801E1D60 001DECA0  48 00 0B 99 */	bl getWorkRadius__Q34Game8ItemRock4ItemFv
/* 801E1D64 001DECA4  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 801E1D68 001DECA8  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 801E1D6C 001DECAC  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801E1D70 001DECB0  41 82 00 F8 */	beq .L_801E1E68
/* 801E1D74 001DECB4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801E1D78 001DECB8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801E1D7C 001DECBC  90 01 00 08 */	stw r0, 8(r1)
/* 801E1D80 001DECC0  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 801E1D84 001DECC4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801E1D88 001DECC8  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 801E1D8C 001DECCC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801E1D90 001DECD0  C0 1E 01 A4 */	lfs f0, 0x1a4(r30)
/* 801E1D94 001DECD4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801E1D98 001DECD8  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801E1D9C 001DECDC  2C 00 00 01 */	cmpwi r0, 1
/* 801E1DA0 001DECE0  41 82 00 50 */	beq .L_801E1DF0
/* 801E1DA4 001DECE4  40 80 00 10 */	bge .L_801E1DB4
/* 801E1DA8 001DECE8  2C 00 00 00 */	cmpwi r0, 0
/* 801E1DAC 001DECEC  40 80 00 14 */	bge .L_801E1DC0
/* 801E1DB0 001DECF0  48 00 00 A0 */	b .L_801E1E50
.L_801E1DB4:
/* 801E1DB4 001DECF4  2C 00 00 03 */	cmpwi r0, 3
/* 801E1DB8 001DECF8  40 80 00 98 */	bge .L_801E1E50
/* 801E1DBC 001DECFC  48 00 00 64 */	b .L_801E1E20
.L_801E1DC0:
/* 801E1DC0 001DED00  7F C3 F3 78 */	mr r3, r30
/* 801E1DC4 001DED04  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1DC8 001DED08  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1DCC 001DED0C  7D 89 03 A6 */	mtctr r12
/* 801E1DD0 001DED10  4E 80 04 21 */	bctrl 
/* 801E1DD4 001DED14  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 801E1DD8 001DED18  38 81 00 08 */	addi r4, r1, 8
/* 801E1DDC 001DED1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1DE0 001DED20  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1DE4 001DED24  7D 89 03 A6 */	mtctr r12
/* 801E1DE8 001DED28  4E 80 04 21 */	bctrl 
/* 801E1DEC 001DED2C  48 00 00 B8 */	b .L_801E1EA4
.L_801E1DF0:
/* 801E1DF0 001DED30  7F C3 F3 78 */	mr r3, r30
/* 801E1DF4 001DED34  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1DF8 001DED38  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1DFC 001DED3C  7D 89 03 A6 */	mtctr r12
/* 801E1E00 001DED40  4E 80 04 21 */	bctrl 
/* 801E1E04 001DED44  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 801E1E08 001DED48  38 81 00 08 */	addi r4, r1, 8
/* 801E1E0C 001DED4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1E10 001DED50  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1E14 001DED54  7D 89 03 A6 */	mtctr r12
/* 801E1E18 001DED58  4E 80 04 21 */	bctrl 
/* 801E1E1C 001DED5C  48 00 00 88 */	b .L_801E1EA4
.L_801E1E20:
/* 801E1E20 001DED60  7F C3 F3 78 */	mr r3, r30
/* 801E1E24 001DED64  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1E28 001DED68  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1E2C 001DED6C  7D 89 03 A6 */	mtctr r12
/* 801E1E30 001DED70  4E 80 04 21 */	bctrl 
/* 801E1E34 001DED74  80 7E 01 F0 */	lwz r3, 0x1f0(r30)
/* 801E1E38 001DED78  38 81 00 08 */	addi r4, r1, 8
/* 801E1E3C 001DED7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1E40 001DED80  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1E44 001DED84  7D 89 03 A6 */	mtctr r12
/* 801E1E48 001DED88  4E 80 04 21 */	bctrl 
/* 801E1E4C 001DED8C  48 00 00 58 */	b .L_801E1EA4
.L_801E1E50:
/* 801E1E50 001DED90  7F C3 F3 78 */	mr r3, r30
/* 801E1E54 001DED94  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E1E58 001DED98  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801E1E5C 001DED9C  7D 89 03 A6 */	mtctr r12
/* 801E1E60 001DEDA0  4E 80 04 21 */	bctrl 
/* 801E1E64 001DEDA4  48 00 00 40 */	b .L_801E1EA4
.L_801E1E68:
/* 801E1E68 001DEDA8  80 7E 01 F0 */	lwz r3, 0x1f0(r30)
/* 801E1E6C 001DEDAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1E70 001DEDB0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E1E74 001DEDB4  7D 89 03 A6 */	mtctr r12
/* 801E1E78 001DEDB8  4E 80 04 21 */	bctrl 
/* 801E1E7C 001DEDBC  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 801E1E80 001DEDC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1E84 001DEDC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E1E88 001DEDC8  7D 89 03 A6 */	mtctr r12
/* 801E1E8C 001DEDCC  4E 80 04 21 */	bctrl 
/* 801E1E90 001DEDD0  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 801E1E94 001DEDD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1E98 001DEDD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E1E9C 001DEDDC  7D 89 03 A6 */	mtctr r12
/* 801E1EA0 001DEDE0  4E 80 04 21 */	bctrl 
.L_801E1EA4:
/* 801E1EA4 001DEDE4  88 7E 01 FC */	lbz r3, 0x1fc(r30)
/* 801E1EA8 001DEDE8  28 03 00 00 */	cmplwi r3, 0
/* 801E1EAC 001DEDEC  41 82 00 0C */	beq .L_801E1EB8
/* 801E1EB0 001DEDF0  38 03 FF FF */	addi r0, r3, -1
/* 801E1EB4 001DEDF4  98 1E 01 FC */	stb r0, 0x1fc(r30)
.L_801E1EB8:
/* 801E1EB8 001DEDF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E1EBC 001DEDFC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E1EC0 001DEE00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E1EC4 001DEE04  7C 08 03 A6 */	mtlr r0
/* 801E1EC8 001DEE08  38 21 00 20 */	addi r1, r1, 0x20
/* 801E1ECC 001DEE0C  4E 80 00 20 */	blr 

.global initMotion__Q34Game8ItemRock4ItemFv
initMotion__Q34Game8ItemRock4ItemFv:
/* 801E1ED0 001DEE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1ED4 001DEE14  7C 08 02 A6 */	mflr r0
/* 801E1ED8 001DEE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1EDC 001DEE1C  48 00 00 35 */	bl startWaitMotion__Q34Game8ItemRock4ItemFv
/* 801E1EE0 001DEE20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1EE4 001DEE24  7C 08 03 A6 */	mtlr r0
/* 801E1EE8 001DEE28  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1EEC 001DEE2C  4E 80 00 20 */	blr 

.global on_movie_end__Q34Game8ItemRock4ItemFb
on_movie_end__Q34Game8ItemRock4ItemFb:
/* 801E1EF0 001DEE30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E1EF4 001DEE34  7C 08 02 A6 */	mflr r0
/* 801E1EF8 001DEE38  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E1EFC 001DEE3C  48 00 00 15 */	bl startWaitMotion__Q34Game8ItemRock4ItemFv
/* 801E1F00 001DEE40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E1F04 001DEE44  7C 08 03 A6 */	mtlr r0
/* 801E1F08 001DEE48  38 21 00 10 */	addi r1, r1, 0x10
/* 801E1F0C 001DEE4C  4E 80 00 20 */	blr 

.global startWaitMotion__Q34Game8ItemRock4ItemFv
startWaitMotion__Q34Game8ItemRock4ItemFv:
/* 801E1F10 001DEE50  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E1F14 001DEE54  7C 08 02 A6 */	mflr r0
/* 801E1F18 001DEE58  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E1F1C 001DEE5C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E1F20 001DEE60  7C 7F 1B 78 */	mr r31, r3
/* 801E1F24 001DEE64  80 03 02 1C */	lwz r0, 0x21c(r3)
/* 801E1F28 001DEE68  2C 00 00 02 */	cmpwi r0, 2
/* 801E1F2C 001DEE6C  41 82 00 B8 */	beq .L_801E1FE4
/* 801E1F30 001DEE70  40 80 00 14 */	bge .L_801E1F44
/* 801E1F34 001DEE74  2C 00 00 00 */	cmpwi r0, 0
/* 801E1F38 001DEE78  41 82 00 18 */	beq .L_801E1F50
/* 801E1F3C 001DEE7C  40 80 00 88 */	bge .L_801E1FC4
/* 801E1F40 001DEE80  48 00 00 E8 */	b .L_801E2028
.L_801E1F44:
/* 801E1F44 001DEE84  2C 00 00 04 */	cmpwi r0, 4
/* 801E1F48 001DEE88  40 80 00 E0 */	bge .L_801E2028
/* 801E1F4C 001DEE8C  48 00 00 B8 */	b .L_801E2004
.L_801E1F50:
/* 801E1F50 001DEE90  4B EE 76 51 */	bl rand
/* 801E1F54 001DEE94  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801E1F58 001DEE98  3C 00 43 30 */	lis r0, 0x4330
/* 801E1F5C 001DEE9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801E1F60 001DEEA0  C8 62 B5 70 */	lfd f3, lbl_805198D0@sda21(r2)
/* 801E1F64 001DEEA4  90 01 00 08 */	stw r0, 8(r1)
/* 801E1F68 001DEEA8  C0 22 B5 80 */	lfs f1, lbl_805198E0@sda21(r2)
/* 801E1F6C 001DEEAC  C8 41 00 08 */	lfd f2, 8(r1)
/* 801E1F70 001DEEB0  C0 02 B5 88 */	lfs f0, lbl_805198E8@sda21(r2)
/* 801E1F74 001DEEB4  EC 42 18 28 */	fsubs f2, f2, f3
/* 801E1F78 001DEEB8  EC 22 08 24 */	fdivs f1, f2, f1
/* 801E1F7C 001DEEBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801E1F80 001DEEC0  40 81 00 24 */	ble .L_801E1FA4
/* 801E1F84 001DEEC4  28 1F 00 00 */	cmplwi r31, 0
/* 801E1F88 001DEEC8  7F E5 FB 78 */	mr r5, r31
/* 801E1F8C 001DEECC  41 82 00 08 */	beq .L_801E1F94
/* 801E1F90 001DEED0  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E1F94:
/* 801E1F94 001DEED4  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E1F98 001DEED8  38 80 00 02 */	li r4, 2
/* 801E1F9C 001DEEDC  48 24 6C ED */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E1FA0 001DEEE0  48 00 00 88 */	b .L_801E2028
.L_801E1FA4:
/* 801E1FA4 001DEEE4  28 1F 00 00 */	cmplwi r31, 0
/* 801E1FA8 001DEEE8  7F E5 FB 78 */	mr r5, r31
/* 801E1FAC 001DEEEC  41 82 00 08 */	beq .L_801E1FB4
/* 801E1FB0 001DEEF0  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E1FB4:
/* 801E1FB4 001DEEF4  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E1FB8 001DEEF8  38 80 00 03 */	li r4, 3
/* 801E1FBC 001DEEFC  48 24 6C CD */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E1FC0 001DEF00  48 00 00 68 */	b .L_801E2028
.L_801E1FC4:
/* 801E1FC4 001DEF04  28 1F 00 00 */	cmplwi r31, 0
/* 801E1FC8 001DEF08  7F E5 FB 78 */	mr r5, r31
/* 801E1FCC 001DEF0C  41 82 00 08 */	beq .L_801E1FD4
/* 801E1FD0 001DEF10  38 A5 01 78 */	addi r5, r5, 0x178
.L_801E1FD4:
/* 801E1FD4 001DEF14  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E1FD8 001DEF18  38 80 00 01 */	li r4, 1
/* 801E1FDC 001DEF1C  48 24 6C AD */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E1FE0 001DEF20  48 00 00 48 */	b .L_801E2028
.L_801E1FE4:
/* 801E1FE4 001DEF24  28 1F 00 00 */	cmplwi r31, 0
/* 801E1FE8 001DEF28  7F E5 FB 78 */	mr r5, r31
/* 801E1FEC 001DEF2C  41 82 00 08 */	beq .L_801E1FF4
/* 801E1FF0 001DEF30  38 A5 01 78 */	addi r5, r5, 0x178
.L_801E1FF4:
/* 801E1FF4 001DEF34  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E1FF8 001DEF38  38 80 00 00 */	li r4, 0
/* 801E1FFC 001DEF3C  48 24 6C 8D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E2000 001DEF40  48 00 00 28 */	b .L_801E2028
.L_801E2004:
/* 801E2004 001DEF44  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E2008 001DEF48  38 80 00 09 */	li r4, 9
/* 801E200C 001DEF4C  38 A0 00 00 */	li r5, 0
/* 801E2010 001DEF50  48 24 6C 79 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E2014 001DEF54  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E2018 001DEF58  38 80 03 E8 */	li r4, 0x3e8
/* 801E201C 001DEF5C  48 24 6D E5 */	bl setFrameByKeyType__Q28SysShape8AnimatorFUl
/* 801E2020 001DEF60  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E2024 001DEF64  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
.L_801E2028:
/* 801E2028 001DEF68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E202C 001DEF6C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E2030 001DEF70  7C 08 03 A6 */	mtlr r0
/* 801E2034 001DEF74  38 21 00 20 */	addi r1, r1, 0x20
/* 801E2038 001DEF78  4E 80 00 20 */	blr 

.global startDamageMotion__Q34Game8ItemRock4ItemFv
startDamageMotion__Q34Game8ItemRock4ItemFv:
/* 801E203C 001DEF7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E2040 001DEF80  7C 08 02 A6 */	mflr r0
/* 801E2044 001DEF84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E2048 001DEF88  80 03 02 1C */	lwz r0, 0x21c(r3)
/* 801E204C 001DEF8C  2C 00 00 02 */	cmpwi r0, 2
/* 801E2050 001DEF90  41 82 00 5C */	beq .L_801E20AC
/* 801E2054 001DEF94  40 80 00 74 */	bge .L_801E20C8
/* 801E2058 001DEF98  2C 00 00 00 */	cmpwi r0, 0
/* 801E205C 001DEF9C  41 82 00 10 */	beq .L_801E206C
/* 801E2060 001DEFA0  40 80 00 2C */	bge .L_801E208C
/* 801E2064 001DEFA4  48 00 00 64 */	b .L_801E20C8
/* 801E2068 001DEFA8  48 00 00 60 */	b .L_801E20C8
.L_801E206C:
/* 801E206C 001DEFAC  28 03 00 00 */	cmplwi r3, 0
/* 801E2070 001DEFB0  7C 65 1B 78 */	mr r5, r3
/* 801E2074 001DEFB4  41 82 00 08 */	beq .L_801E207C
/* 801E2078 001DEFB8  38 A5 01 78 */	addi r5, r5, 0x178
.L_801E207C:
/* 801E207C 001DEFBC  38 63 01 A8 */	addi r3, r3, 0x1a8
/* 801E2080 001DEFC0  38 80 00 06 */	li r4, 6
/* 801E2084 001DEFC4  48 24 6C 05 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E2088 001DEFC8  48 00 00 40 */	b .L_801E20C8
.L_801E208C:
/* 801E208C 001DEFCC  28 03 00 00 */	cmplwi r3, 0
/* 801E2090 001DEFD0  7C 65 1B 78 */	mr r5, r3
/* 801E2094 001DEFD4  41 82 00 08 */	beq .L_801E209C
/* 801E2098 001DEFD8  38 A5 01 78 */	addi r5, r5, 0x178
.L_801E209C:
/* 801E209C 001DEFDC  38 63 01 A8 */	addi r3, r3, 0x1a8
/* 801E20A0 001DEFE0  38 80 00 05 */	li r4, 5
/* 801E20A4 001DEFE4  48 24 6B E5 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E20A8 001DEFE8  48 00 00 20 */	b .L_801E20C8
.L_801E20AC:
/* 801E20AC 001DEFEC  28 03 00 00 */	cmplwi r3, 0
/* 801E20B0 001DEFF0  7C 65 1B 78 */	mr r5, r3
/* 801E20B4 001DEFF4  41 82 00 08 */	beq .L_801E20BC
/* 801E20B8 001DEFF8  38 A5 01 78 */	addi r5, r5, 0x178
.L_801E20BC:
/* 801E20BC 001DEFFC  38 63 01 A8 */	addi r3, r3, 0x1a8
/* 801E20C0 001DF000  38 80 00 04 */	li r4, 4
/* 801E20C4 001DF004  48 24 6B C5 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
.L_801E20C8:
/* 801E20C8 001DF008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E20CC 001DF00C  7C 08 03 A6 */	mtlr r0
/* 801E20D0 001DF010  38 21 00 10 */	addi r1, r1, 0x10
/* 801E20D4 001DF014  4E 80 00 20 */	blr 

.global startDownMotion__Q34Game8ItemRock4ItemFv
startDownMotion__Q34Game8ItemRock4ItemFv:
/* 801E20D8 001DF018  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801E20DC 001DF01C  7C 08 02 A6 */	mflr r0
/* 801E20E0 001DF020  90 01 00 74 */	stw r0, 0x74(r1)
/* 801E20E4 001DF024  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801E20E8 001DF028  7C 7F 1B 78 */	mr r31, r3
/* 801E20EC 001DF02C  80 63 01 F0 */	lwz r3, 0x1f0(r3)
/* 801E20F0 001DF030  81 83 00 00 */	lwz r12, 0(r3)
/* 801E20F4 001DF034  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E20F8 001DF038  7D 89 03 A6 */	mtctr r12
/* 801E20FC 001DF03C  4E 80 04 21 */	bctrl 
/* 801E2100 001DF040  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801E2104 001DF044  81 83 00 00 */	lwz r12, 0(r3)
/* 801E2108 001DF048  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E210C 001DF04C  7D 89 03 A6 */	mtctr r12
/* 801E2110 001DF050  4E 80 04 21 */	bctrl 
/* 801E2114 001DF054  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801E2118 001DF058  81 83 00 00 */	lwz r12, 0(r3)
/* 801E211C 001DF05C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E2120 001DF060  7D 89 03 A6 */	mtctr r12
/* 801E2124 001DF064  4E 80 04 21 */	bctrl 
/* 801E2128 001DF068  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801E212C 001DF06C  2C 00 00 02 */	cmpwi r0, 2
/* 801E2130 001DF070  41 82 01 74 */	beq .L_801E22A4
/* 801E2134 001DF074  40 80 02 1C */	bge .L_801E2350
/* 801E2138 001DF078  2C 00 00 00 */	cmpwi r0, 0
/* 801E213C 001DF07C  41 82 00 10 */	beq .L_801E214C
/* 801E2140 001DF080  40 80 00 B4 */	bge .L_801E21F4
/* 801E2144 001DF084  48 00 02 0C */	b .L_801E2350
/* 801E2148 001DF088  48 00 02 08 */	b .L_801E2350
.L_801E214C:
/* 801E214C 001DF08C  28 1F 00 00 */	cmplwi r31, 0
/* 801E2150 001DF090  7F E5 FB 78 */	mr r5, r31
/* 801E2154 001DF094  41 82 00 08 */	beq .L_801E215C
/* 801E2158 001DF098  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E215C:
/* 801E215C 001DF09C  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E2160 001DF0A0  38 80 00 07 */	li r4, 7
/* 801E2164 001DF0A4  48 24 6B 25 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E2168 001DF0A8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801E216C 001DF0AC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801E2170 001DF0B0  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 801E2174 001DF0B4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801E2178 001DF0B8  C0 5F 01 A4 */	lfs f2, 0x1a4(r31)
/* 801E217C 001DF0BC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801E2180 001DF0C0  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 801E2184 001DF0C4  38 C0 00 00 */	li r6, 0
/* 801E2188 001DF0C8  90 01 00 48 */	stw r0, 0x48(r1)
/* 801E218C 001DF0CC  3C 80 80 4C */	lis r4, __vt__Q23efx11TKouhaiFuku@ha
/* 801E2190 001DF0D0  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801E2194 001DF0D4  39 00 00 D0 */	li r8, 0xd0
/* 801E2198 001DF0D8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801E219C 001DF0DC  38 E0 00 D1 */	li r7, 0xd1
/* 801E21A0 001DF0E0  90 A1 00 48 */	stw r5, 0x48(r1)
/* 801E21A4 001DF0E4  38 A4 9A 74 */	addi r5, r4, __vt__Q23efx11TKouhaiFuku@l
/* 801E21A8 001DF0E8  38 61 00 48 */	addi r3, r1, 0x48
/* 801E21AC 001DF0EC  38 81 00 58 */	addi r4, r1, 0x58
/* 801E21B0 001DF0F0  B1 01 00 4C */	sth r8, 0x4c(r1)
/* 801E21B4 001DF0F4  B0 E1 00 4E */	sth r7, 0x4e(r1)
/* 801E21B8 001DF0F8  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801E21BC 001DF0FC  90 C1 00 54 */	stw r6, 0x54(r1)
/* 801E21C0 001DF100  90 A1 00 48 */	stw r5, 0x48(r1)
/* 801E21C4 001DF104  90 01 00 58 */	stw r0, 0x58(r1)
/* 801E21C8 001DF108  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801E21CC 001DF10C  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801E21D0 001DF110  D0 41 00 64 */	stfs f2, 0x64(r1)
/* 801E21D4 001DF114  48 1C CE 41 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 801E21D8 001DF118  7F E3 FB 78 */	mr r3, r31
/* 801E21DC 001DF11C  38 80 38 39 */	li r4, 0x3839
/* 801E21E0 001DF120  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E21E4 001DF124  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801E21E8 001DF128  7D 89 03 A6 */	mtctr r12
/* 801E21EC 001DF12C  4E 80 04 21 */	bctrl 
/* 801E21F0 001DF130  48 00 01 60 */	b .L_801E2350
.L_801E21F4:
/* 801E21F4 001DF134  28 1F 00 00 */	cmplwi r31, 0
/* 801E21F8 001DF138  7F E5 FB 78 */	mr r5, r31
/* 801E21FC 001DF13C  41 82 00 08 */	beq .L_801E2204
/* 801E2200 001DF140  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E2204:
/* 801E2204 001DF144  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E2208 001DF148  38 80 00 08 */	li r4, 8
/* 801E220C 001DF14C  48 24 6A 7D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E2210 001DF150  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801E2214 001DF154  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 801E2218 001DF158  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 801E221C 001DF15C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801E2220 001DF160  C0 7F 01 A4 */	lfs f3, 0x1a4(r31)
/* 801E2224 001DF164  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801E2228 001DF168  C0 02 B5 8C */	lfs f0, lbl_805198EC@sda21(r2)
/* 801E222C 001DF16C  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 801E2230 001DF170  90 01 00 28 */	stw r0, 0x28(r1)
/* 801E2234 001DF174  3C 80 80 4C */	lis r4, __vt__Q23efx11TKouhaiFuku@ha
/* 801E2238 001DF178  38 C0 00 00 */	li r6, 0
/* 801E223C 001DF17C  EC 42 00 28 */	fsubs f2, f2, f0
/* 801E2240 001DF180  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801E2244 001DF184  39 00 00 D0 */	li r8, 0xd0
/* 801E2248 001DF188  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801E224C 001DF18C  38 E0 00 D1 */	li r7, 0xd1
/* 801E2250 001DF190  90 A1 00 28 */	stw r5, 0x28(r1)
/* 801E2254 001DF194  38 A4 9A 74 */	addi r5, r4, __vt__Q23efx11TKouhaiFuku@l
/* 801E2258 001DF198  38 61 00 28 */	addi r3, r1, 0x28
/* 801E225C 001DF19C  B1 01 00 2C */	sth r8, 0x2c(r1)
/* 801E2260 001DF1A0  38 81 00 38 */	addi r4, r1, 0x38
/* 801E2264 001DF1A4  B0 E1 00 2E */	sth r7, 0x2e(r1)
/* 801E2268 001DF1A8  90 C1 00 30 */	stw r6, 0x30(r1)
/* 801E226C 001DF1AC  90 C1 00 34 */	stw r6, 0x34(r1)
/* 801E2270 001DF1B0  90 A1 00 28 */	stw r5, 0x28(r1)
/* 801E2274 001DF1B4  90 01 00 38 */	stw r0, 0x38(r1)
/* 801E2278 001DF1B8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801E227C 001DF1BC  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 801E2280 001DF1C0  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 801E2284 001DF1C4  48 1C CD 91 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 801E2288 001DF1C8  7F E3 FB 78 */	mr r3, r31
/* 801E228C 001DF1CC  38 80 38 39 */	li r4, 0x3839
/* 801E2290 001DF1D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E2294 001DF1D4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801E2298 001DF1D8  7D 89 03 A6 */	mtctr r12
/* 801E229C 001DF1DC  4E 80 04 21 */	bctrl 
/* 801E22A0 001DF1E0  48 00 00 B0 */	b .L_801E2350
.L_801E22A4:
/* 801E22A4 001DF1E4  28 1F 00 00 */	cmplwi r31, 0
/* 801E22A8 001DF1E8  7F E5 FB 78 */	mr r5, r31
/* 801E22AC 001DF1EC  41 82 00 08 */	beq .L_801E22B4
/* 801E22B0 001DF1F0  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E22B4:
/* 801E22B4 001DF1F4  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E22B8 001DF1F8  38 80 00 09 */	li r4, 9
/* 801E22BC 001DF1FC  48 24 69 CD */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E22C0 001DF200  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801E22C4 001DF204  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 801E22C8 001DF208  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 801E22CC 001DF20C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801E22D0 001DF210  C0 7F 01 A4 */	lfs f3, 0x1a4(r31)
/* 801E22D4 001DF214  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801E22D8 001DF218  C0 02 B5 90 */	lfs f0, lbl_805198F0@sda21(r2)
/* 801E22DC 001DF21C  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 801E22E0 001DF220  90 01 00 08 */	stw r0, 8(r1)
/* 801E22E4 001DF224  3C 80 80 4C */	lis r4, __vt__Q23efx11TKouhaiFuku@ha
/* 801E22E8 001DF228  38 C0 00 00 */	li r6, 0
/* 801E22EC 001DF22C  EC 42 00 28 */	fsubs f2, f2, f0
/* 801E22F0 001DF230  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801E22F4 001DF234  39 00 00 D0 */	li r8, 0xd0
/* 801E22F8 001DF238  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801E22FC 001DF23C  38 E0 00 D1 */	li r7, 0xd1
/* 801E2300 001DF240  90 A1 00 08 */	stw r5, 8(r1)
/* 801E2304 001DF244  38 A4 9A 74 */	addi r5, r4, __vt__Q23efx11TKouhaiFuku@l
/* 801E2308 001DF248  38 61 00 08 */	addi r3, r1, 8
/* 801E230C 001DF24C  B1 01 00 0C */	sth r8, 0xc(r1)
/* 801E2310 001DF250  38 81 00 18 */	addi r4, r1, 0x18
/* 801E2314 001DF254  B0 E1 00 0E */	sth r7, 0xe(r1)
/* 801E2318 001DF258  90 C1 00 10 */	stw r6, 0x10(r1)
/* 801E231C 001DF25C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 801E2320 001DF260  90 A1 00 08 */	stw r5, 8(r1)
/* 801E2324 001DF264  90 01 00 18 */	stw r0, 0x18(r1)
/* 801E2328 001DF268  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801E232C 001DF26C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801E2330 001DF270  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 801E2334 001DF274  48 1C CC E1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 801E2338 001DF278  7F E3 FB 78 */	mr r3, r31
/* 801E233C 001DF27C  38 80 38 39 */	li r4, 0x3839
/* 801E2340 001DF280  81 9F 00 00 */	lwz r12, 0(r31)
/* 801E2344 001DF284  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801E2348 001DF288  7D 89 03 A6 */	mtctr r12
/* 801E234C 001DF28C  4E 80 04 21 */	bctrl 
.L_801E2350:
/* 801E2350 001DF290  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801E2354 001DF294  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801E2358 001DF298  7C 08 03 A6 */	mtlr r0
/* 801E235C 001DF29C  38 21 00 70 */	addi r1, r1, 0x70
/* 801E2360 001DF2A0  4E 80 00 20 */	blr 

.global startUpMotion__Q34Game8ItemRock4ItemFv
startUpMotion__Q34Game8ItemRock4ItemFv:
/* 801E2364 001DF2A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E2368 001DF2A8  7C 08 02 A6 */	mflr r0
/* 801E236C 001DF2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E2370 001DF2B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E2374 001DF2B4  7C 7F 1B 78 */	mr r31, r3
/* 801E2378 001DF2B8  80 63 01 F0 */	lwz r3, 0x1f0(r3)
/* 801E237C 001DF2BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801E2380 001DF2C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E2384 001DF2C4  7D 89 03 A6 */	mtctr r12
/* 801E2388 001DF2C8  4E 80 04 21 */	bctrl 
/* 801E238C 001DF2CC  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801E2390 001DF2D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E2394 001DF2D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E2398 001DF2D8  7D 89 03 A6 */	mtctr r12
/* 801E239C 001DF2DC  4E 80 04 21 */	bctrl 
/* 801E23A0 001DF2E0  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801E23A4 001DF2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E23A8 001DF2E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E23AC 001DF2EC  7D 89 03 A6 */	mtctr r12
/* 801E23B0 001DF2F0  4E 80 04 21 */	bctrl 
/* 801E23B4 001DF2F4  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801E23B8 001DF2F8  2C 00 00 02 */	cmpwi r0, 2
/* 801E23BC 001DF2FC  41 82 00 44 */	beq .L_801E2400
/* 801E23C0 001DF300  40 80 00 14 */	bge .L_801E23D4
/* 801E23C4 001DF304  2C 00 00 00 */	cmpwi r0, 0
/* 801E23C8 001DF308  41 82 00 74 */	beq .L_801E243C
/* 801E23CC 001DF30C  40 80 00 14 */	bge .L_801E23E0
/* 801E23D0 001DF310  48 00 00 6C */	b .L_801E243C
.L_801E23D4:
/* 801E23D4 001DF314  2C 00 00 04 */	cmpwi r0, 4
/* 801E23D8 001DF318  40 80 00 64 */	bge .L_801E243C
/* 801E23DC 001DF31C  48 00 00 44 */	b .L_801E2420
.L_801E23E0:
/* 801E23E0 001DF320  28 1F 00 00 */	cmplwi r31, 0
/* 801E23E4 001DF324  7F E5 FB 78 */	mr r5, r31
/* 801E23E8 001DF328  41 82 00 08 */	beq .L_801E23F0
/* 801E23EC 001DF32C  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E23F0:
/* 801E23F0 001DF330  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E23F4 001DF334  38 80 00 0C */	li r4, 0xc
/* 801E23F8 001DF338  48 24 68 91 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E23FC 001DF33C  48 00 00 40 */	b .L_801E243C
.L_801E2400:
/* 801E2400 001DF340  28 1F 00 00 */	cmplwi r31, 0
/* 801E2404 001DF344  7F E5 FB 78 */	mr r5, r31
/* 801E2408 001DF348  41 82 00 08 */	beq .L_801E2410
/* 801E240C 001DF34C  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E2410:
/* 801E2410 001DF350  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E2414 001DF354  38 80 00 0B */	li r4, 0xb
/* 801E2418 001DF358  48 24 68 71 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801E241C 001DF35C  48 00 00 20 */	b .L_801E243C
.L_801E2420:
/* 801E2420 001DF360  28 1F 00 00 */	cmplwi r31, 0
/* 801E2424 001DF364  7F E5 FB 78 */	mr r5, r31
/* 801E2428 001DF368  41 82 00 08 */	beq .L_801E2430
/* 801E242C 001DF36C  38 BF 01 78 */	addi r5, r31, 0x178
.L_801E2430:
/* 801E2430 001DF370  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801E2434 001DF374  38 80 00 0A */	li r4, 0xa
/* 801E2438 001DF378  48 24 68 51 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
.L_801E243C:
/* 801E243C 001DF37C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E2440 001DF380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E2444 001DF384  7C 08 03 A6 */	mtlr r0
/* 801E2448 001DF388  38 21 00 10 */	addi r1, r1, 0x10
/* 801E244C 001DF38C  4E 80 00 20 */	blr 

.global "getVectorField__Q34Game8ItemRock4ItemFRQ23Sys6SphereR10Vector3<f>"
"getVectorField__Q34Game8ItemRock4ItemFRQ23Sys6SphereR10Vector3<f>":
/* 801E2450 001DF390  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801E2454 001DF394  7C 08 02 A6 */	mflr r0
/* 801E2458 001DF398  90 01 00 54 */	stw r0, 0x54(r1)
/* 801E245C 001DF39C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801E2460 001DF3A0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801E2464 001DF3A4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801E2468 001DF3A8  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801E246C 001DF3AC  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 801E2470 001DF3B0  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 801E2474 001DF3B4  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 801E2478 001DF3B8  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 801E247C 001DF3BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E2480 001DF3C0  C0 04 00 04 */	lfs f0, 4(r4)
/* 801E2484 001DF3C4  7C BF 2B 78 */	mr r31, r5
/* 801E2488 001DF3C8  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801E248C 001DF3CC  C0 63 01 A4 */	lfs f3, 0x1a4(r3)
/* 801E2490 001DF3D0  EF A1 00 28 */	fsubs f29, f1, f0
/* 801E2494 001DF3D4  C0 44 00 08 */	lfs f2, 8(r4)
/* 801E2498 001DF3D8  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801E249C 001DF3DC  EF 83 10 28 */	fsubs f28, f3, f2
/* 801E24A0 001DF3E0  C0 04 00 00 */	lfs f0, 0(r4)
/* 801E24A4 001DF3E4  EC 5D 07 72 */	fmuls f2, f29, f29
/* 801E24A8 001DF3E8  EF C1 00 28 */	fsubs f30, f1, f0
/* 801E24AC 001DF3EC  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E24B0 001DF3F0  EC 7C 07 32 */	fmuls f3, f28, f28
/* 801E24B4 001DF3F4  EC 3E 17 BA */	fmadds f1, f30, f30, f2
/* 801E24B8 001DF3F8  EF E3 08 2A */	fadds f31, f3, f1
/* 801E24BC 001DF3FC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801E24C0 001DF400  40 81 00 14 */	ble .L_801E24D4
/* 801E24C4 001DF404  40 81 00 14 */	ble .L_801E24D8
/* 801E24C8 001DF408  FC 00 F8 34 */	frsqrte f0, f31
/* 801E24CC 001DF40C  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801E24D0 001DF410  48 00 00 08 */	b .L_801E24D8
.L_801E24D4:
/* 801E24D4 001DF414  FF E0 00 90 */	fmr f31, f0
.L_801E24D8:
/* 801E24D8 001DF418  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E24DC 001DF41C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801E24E0 001DF420  40 81 00 1C */	ble .L_801E24FC
/* 801E24E4 001DF424  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E24E8 001DF428  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801E24EC 001DF42C  EF DE 00 32 */	fmuls f30, f30, f0
/* 801E24F0 001DF430  EF BD 00 32 */	fmuls f29, f29, f0
/* 801E24F4 001DF434  EF 9C 00 32 */	fmuls f28, f28, f0
/* 801E24F8 001DF438  48 00 00 08 */	b .L_801E2500
.L_801E24FC:
/* 801E24FC 001DF43C  FF E0 00 90 */	fmr f31, f0
.L_801E2500:
/* 801E2500 001DF440  48 00 03 F9 */	bl getWorkRadius__Q34Game8ItemRock4ItemFv
/* 801E2504 001DF444  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 801E2508 001DF448  40 81 00 14 */	ble .L_801E251C
/* 801E250C 001DF44C  D3 DF 00 00 */	stfs f30, 0(r31)
/* 801E2510 001DF450  D3 BF 00 04 */	stfs f29, 4(r31)
/* 801E2514 001DF454  D3 9F 00 08 */	stfs f28, 8(r31)
/* 801E2518 001DF458  48 00 00 14 */	b .L_801E252C
.L_801E251C:
/* 801E251C 001DF45C  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E2520 001DF460  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801E2524 001DF464  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801E2528 001DF468  D0 1F 00 08 */	stfs f0, 8(r31)
.L_801E252C:
/* 801E252C 001DF46C  38 60 00 01 */	li r3, 1
/* 801E2530 001DF470  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801E2534 001DF474  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801E2538 001DF478  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801E253C 001DF47C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801E2540 001DF480  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 801E2544 001DF484  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 801E2548 001DF488  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 801E254C 001DF48C  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 801E2550 001DF490  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801E2554 001DF494  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E2558 001DF498  7C 08 03 A6 */	mtlr r0
/* 801E255C 001DF49C  38 21 00 50 */	addi r1, r1, 0x50
/* 801E2560 001DF4A0  4E 80 00 20 */	blr 

.global getWorkDistance__Q34Game8ItemRock4ItemFRQ23Sys6Sphere
getWorkDistance__Q34Game8ItemRock4ItemFRQ23Sys6Sphere:
/* 801E2564 001DF4A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E2568 001DF4A8  7C 08 02 A6 */	mflr r0
/* 801E256C 001DF4AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E2570 001DF4B0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801E2574 001DF4B4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801E2578 001DF4B8  C0 04 00 04 */	lfs f0, 4(r4)
/* 801E257C 001DF4BC  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801E2580 001DF4C0  C0 63 01 A4 */	lfs f3, 0x1a4(r3)
/* 801E2584 001DF4C4  EC 81 00 28 */	fsubs f4, f1, f0
/* 801E2588 001DF4C8  C0 44 00 08 */	lfs f2, 8(r4)
/* 801E258C 001DF4CC  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801E2590 001DF4D0  EC 43 10 28 */	fsubs f2, f3, f2
/* 801E2594 001DF4D4  C0 04 00 00 */	lfs f0, 0(r4)
/* 801E2598 001DF4D8  EC 64 01 32 */	fmuls f3, f4, f4
/* 801E259C 001DF4DC  EC 21 00 28 */	fsubs f1, f1, f0
/* 801E25A0 001DF4E0  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E25A4 001DF4E4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801E25A8 001DF4E8  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 801E25AC 001DF4EC  EF E2 08 2A */	fadds f31, f2, f1
/* 801E25B0 001DF4F0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801E25B4 001DF4F4  40 81 00 14 */	ble .L_801E25C8
/* 801E25B8 001DF4F8  40 81 00 14 */	ble .L_801E25CC
/* 801E25BC 001DF4FC  FC 00 F8 34 */	frsqrte f0, f31
/* 801E25C0 001DF500  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801E25C4 001DF504  48 00 00 08 */	b .L_801E25CC
.L_801E25C8:
/* 801E25C8 001DF508  FF E0 00 90 */	fmr f31, f0
.L_801E25CC:
/* 801E25CC 001DF50C  48 00 03 2D */	bl getWorkRadius__Q34Game8ItemRock4ItemFv
/* 801E25D0 001DF510  EC 3F 08 28 */	fsubs f1, f31, f1
/* 801E25D4 001DF514  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801E25D8 001DF518  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E25DC 001DF51C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801E25E0 001DF520  7C 08 03 A6 */	mtlr r0
/* 801E25E4 001DF524  38 21 00 20 */	addi r1, r1, 0x20
/* 801E25E8 001DF528  4E 80 00 20 */	blr 

.global createRock__Q34Game8ItemRock4ItemFi
createRock__Q34Game8ItemRock4ItemFi:
/* 801E25EC 001DF52C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E25F0 001DF530  7C 08 02 A6 */	mflr r0
/* 801E25F4 001DF534  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E25F8 001DF538  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E25FC 001DF53C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E2600 001DF540  7C 9F 23 78 */	mr r31, r4
/* 801E2604 001DF544  38 1F 00 01 */	addi r0, r31, 1
/* 801E2608 001DF548  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E260C 001DF54C  7C 7E 1B 78 */	mr r30, r3
/* 801E2610 001DF550  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E2614 001DF554  54 1D 10 3A */	slwi r29, r0, 2
/* 801E2618 001DF558  93 E3 02 20 */	stw r31, 0x220(r3)
/* 801E261C 001DF55C  38 60 00 00 */	li r3, 0
/* 801E2620 001DF560  90 7E 02 1C */	stw r3, 0x21c(r30)
/* 801E2624 001DF564  7F A3 EB 78 */	mr r3, r29
/* 801E2628 001DF568  D0 1E 02 18 */	stfs f0, 0x218(r30)
/* 801E262C 001DF56C  4B E4 19 81 */	bl __nwa__FUl
/* 801E2630 001DF570  90 7E 02 08 */	stw r3, 0x208(r30)
/* 801E2634 001DF574  7F A3 EB 78 */	mr r3, r29
/* 801E2638 001DF578  4B E4 19 75 */	bl __nwa__FUl
/* 801E263C 001DF57C  90 7E 02 0C */	stw r3, 0x20c(r30)
/* 801E2640 001DF580  57 E3 10 3A */	slwi r3, r31, 2
/* 801E2644 001DF584  4B E4 19 69 */	bl __nwa__FUl
/* 801E2648 001DF588  90 7E 02 10 */	stw r3, 0x210(r30)
/* 801E264C 001DF58C  34 1F 00 01 */	addic. r0, r31, 1
/* 801E2650 001DF590  C0 22 B5 94 */	lfs f1, lbl_805198F4@sda21(r2)
/* 801E2654 001DF594  38 60 00 00 */	li r3, 0
/* 801E2658 001DF598  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E265C 001DF59C  80 9E 02 08 */	lwz r4, 0x208(r30)
/* 801E2660 001DF5A0  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E2664 001DF5A4  C0 05 01 00 */	lfs f0, 0x100(r5)
/* 801E2668 001DF5A8  D0 04 00 00 */	stfs f0, 0(r4)
/* 801E266C 001DF5AC  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E2670 001DF5B0  80 9E 02 08 */	lwz r4, 0x208(r30)
/* 801E2674 001DF5B4  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E2678 001DF5B8  C0 05 01 28 */	lfs f0, 0x128(r5)
/* 801E267C 001DF5BC  D0 04 00 04 */	stfs f0, 4(r4)
/* 801E2680 001DF5C0  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E2684 001DF5C4  80 9E 02 08 */	lwz r4, 0x208(r30)
/* 801E2688 001DF5C8  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E268C 001DF5CC  C0 05 01 50 */	lfs f0, 0x150(r5)
/* 801E2690 001DF5D0  D0 04 00 08 */	stfs f0, 8(r4)
/* 801E2694 001DF5D4  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E2698 001DF5D8  80 9E 02 08 */	lwz r4, 0x208(r30)
/* 801E269C 001DF5DC  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E26A0 001DF5E0  C0 05 01 78 */	lfs f0, 0x178(r5)
/* 801E26A4 001DF5E4  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801E26A8 001DF5E8  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E26AC 001DF5EC  80 9E 02 0C */	lwz r4, 0x20c(r30)
/* 801E26B0 001DF5F0  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E26B4 001DF5F4  C0 05 01 A0 */	lfs f0, 0x1a0(r5)
/* 801E26B8 001DF5F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 801E26BC 001DF5FC  D0 04 00 00 */	stfs f0, 0(r4)
/* 801E26C0 001DF600  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E26C4 001DF604  80 9E 02 0C */	lwz r4, 0x20c(r30)
/* 801E26C8 001DF608  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E26CC 001DF60C  C0 05 01 C8 */	lfs f0, 0x1c8(r5)
/* 801E26D0 001DF610  EC 01 00 32 */	fmuls f0, f1, f0
/* 801E26D4 001DF614  D0 04 00 04 */	stfs f0, 4(r4)
/* 801E26D8 001DF618  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E26DC 001DF61C  80 9E 02 0C */	lwz r4, 0x20c(r30)
/* 801E26E0 001DF620  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E26E4 001DF624  C0 05 01 F0 */	lfs f0, 0x1f0(r5)
/* 801E26E8 001DF628  EC 01 00 32 */	fmuls f0, f1, f0
/* 801E26EC 001DF62C  D0 04 00 08 */	stfs f0, 8(r4)
/* 801E26F0 001DF630  80 AD 94 80 */	lwz r5, mgr__Q24Game8ItemRock@sda21(r13)
/* 801E26F4 001DF634  80 9E 02 0C */	lwz r4, 0x20c(r30)
/* 801E26F8 001DF638  80 A5 00 88 */	lwz r5, 0x88(r5)
/* 801E26FC 001DF63C  C0 05 02 18 */	lfs f0, 0x218(r5)
/* 801E2700 001DF640  EC 01 00 32 */	fmuls f0, f1, f0
/* 801E2704 001DF644  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801E2708 001DF648  80 9E 02 08 */	lwz r4, 0x208(r30)
/* 801E270C 001DF64C  C0 04 00 00 */	lfs f0, 0(r4)
/* 801E2710 001DF650  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 801E2714 001DF654  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 801E2718 001DF658  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 801E271C 001DF65C  40 81 00 48 */	ble .L_801E2764
/* 801E2720 001DF660  38 1F 00 01 */	addi r0, r31, 1
/* 801E2724 001DF664  38 9F FF F9 */	addi r4, r31, -7
/* 801E2728 001DF668  2C 00 00 08 */	cmpwi r0, 8
/* 801E272C 001DF66C  40 81 00 20 */	ble .L_801E274C
/* 801E2730 001DF670  38 04 00 07 */	addi r0, r4, 7
/* 801E2734 001DF674  54 00 E8 FE */	srwi r0, r0, 3
/* 801E2738 001DF678  7C 09 03 A6 */	mtctr r0
/* 801E273C 001DF67C  2C 04 00 00 */	cmpwi r4, 0
/* 801E2740 001DF680  40 81 00 0C */	ble .L_801E274C
.L_801E2744:
/* 801E2744 001DF684  38 63 00 08 */	addi r3, r3, 8
/* 801E2748 001DF688  42 00 FF FC */	bdnz .L_801E2744
.L_801E274C:
/* 801E274C 001DF68C  38 9F 00 01 */	addi r4, r31, 1
/* 801E2750 001DF690  7C 03 20 50 */	subf r0, r3, r4
/* 801E2754 001DF694  7C 09 03 A6 */	mtctr r0
/* 801E2758 001DF698  7C 03 20 00 */	cmpw r3, r4
/* 801E275C 001DF69C  40 80 00 08 */	bge .L_801E2764
.L_801E2760:
/* 801E2760 001DF6A0  42 00 00 00 */	bdnz .L_801E2760
.L_801E2764:
/* 801E2764 001DF6A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E2768 001DF6A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E276C 001DF6AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E2770 001DF6B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E2774 001DF6B4  7C 08 03 A6 */	mtlr r0
/* 801E2778 001DF6B8  38 21 00 20 */	addi r1, r1, 0x20
/* 801E277C 001DF6BC  4E 80 00 20 */	blr 

.global interactAttack__Q34Game8ItemRock4ItemFRQ24Game14InteractAttack
interactAttack__Q34Game8ItemRock4ItemFRQ24Game14InteractAttack:
/* 801E2780 001DF6C0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801E2784 001DF6C4  7C 08 02 A6 */	mflr r0
/* 801E2788 001DF6C8  7C 85 23 78 */	mr r5, r4
/* 801E278C 001DF6CC  90 01 00 54 */	stw r0, 0x54(r1)
/* 801E2790 001DF6D0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801E2794 001DF6D4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801E2798 001DF6D8  7C 7E 1B 78 */	mr r30, r3
/* 801E279C 001DF6DC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E27A0 001DF6E0  28 03 00 00 */	cmplwi r3, 0
/* 801E27A4 001DF6E4  41 82 01 34 */	beq .L_801E28D8
/* 801E27A8 001DF6E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801E27AC 001DF6EC  7F C4 F3 78 */	mr r4, r30
/* 801E27B0 001DF6F0  C0 25 00 08 */	lfs f1, 8(r5)
/* 801E27B4 001DF6F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801E27B8 001DF6F8  7D 89 03 A6 */	mtctr r12
/* 801E27BC 001DF6FC  4E 80 04 21 */	bctrl 
/* 801E27C0 001DF700  88 1E 01 FC */	lbz r0, 0x1fc(r30)
/* 801E27C4 001DF704  28 00 00 00 */	cmplwi r0, 0
/* 801E27C8 001DF708  40 82 01 10 */	bne .L_801E28D8
/* 801E27CC 001DF70C  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801E27D0 001DF710  2C 00 00 01 */	cmpwi r0, 1
/* 801E27D4 001DF714  41 82 00 28 */	beq .L_801E27FC
/* 801E27D8 001DF718  40 80 00 10 */	bge .L_801E27E8
/* 801E27DC 001DF71C  2C 00 00 00 */	cmpwi r0, 0
/* 801E27E0 001DF720  40 80 00 14 */	bge .L_801E27F4
/* 801E27E4 001DF724  48 00 00 24 */	b .L_801E2808
.L_801E27E8:
/* 801E27E8 001DF728  2C 00 00 03 */	cmpwi r0, 3
/* 801E27EC 001DF72C  40 80 00 1C */	bge .L_801E2808
/* 801E27F0 001DF730  48 00 00 14 */	b .L_801E2804
.L_801E27F4:
/* 801E27F4 001DF734  3B E0 00 02 */	li r31, 2
/* 801E27F8 001DF738  48 00 00 10 */	b .L_801E2808
.L_801E27FC:
/* 801E27FC 001DF73C  3B E0 00 01 */	li r31, 1
/* 801E2800 001DF740  48 00 00 08 */	b .L_801E2808
.L_801E2804:
/* 801E2804 001DF744  3B E0 00 00 */	li r31, 0
.L_801E2808:
/* 801E2808 001DF748  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801E280C 001DF74C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 801E2810 001DF750  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801E2814 001DF754  3C 60 80 4E */	lis r3, __vt__Q23efx13TKouhaiDamage@ha
/* 801E2818 001DF758  90 01 00 08 */	stw r0, 8(r1)
/* 801E281C 001DF75C  38 84 6A 78 */	addi r4, r4, __vt__Q23efx8TSimple1@l
/* 801E2820 001DF760  38 00 00 CD */	li r0, 0xcd
/* 801E2824 001DF764  38 E0 00 00 */	li r7, 0
/* 801E2828 001DF768  90 81 00 08 */	stw r4, 8(r1)
/* 801E282C 001DF76C  38 C3 71 0C */	addi r6, r3, __vt__Q23efx13TKouhaiDamage@l
/* 801E2830 001DF770  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801E2834 001DF774  3C 60 80 4C */	lis r3, __vt__Q23efx9ArgKouhai@ha
/* 801E2838 001DF778  B0 01 00 0C */	sth r0, 0xc(r1)
/* 801E283C 001DF77C  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 801E2840 001DF780  38 03 9A 88 */	addi r0, r3, __vt__Q23efx9ArgKouhai@l
/* 801E2844 001DF784  38 61 00 08 */	addi r3, r1, 8
/* 801E2848 001DF788  90 E1 00 10 */	stw r7, 0x10(r1)
/* 801E284C 001DF78C  38 81 00 20 */	addi r4, r1, 0x20
/* 801E2850 001DF790  90 C1 00 08 */	stw r6, 8(r1)
/* 801E2854 001DF794  81 1E 01 9C */	lwz r8, 0x19c(r30)
/* 801E2858 001DF798  80 FE 01 A0 */	lwz r7, 0x1a0(r30)
/* 801E285C 001DF79C  80 DE 01 A4 */	lwz r6, 0x1a4(r30)
/* 801E2860 001DF7A0  91 01 00 14 */	stw r8, 0x14(r1)
/* 801E2864 001DF7A4  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801E2868 001DF7A8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801E286C 001DF7AC  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 801E2870 001DF7B0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801E2874 001DF7B4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801E2878 001DF7B8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801E287C 001DF7BC  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 801E2880 001DF7C0  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801E2884 001DF7C4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801E2888 001DF7C8  90 01 00 20 */	stw r0, 0x20(r1)
/* 801E288C 001DF7CC  93 E1 00 30 */	stw r31, 0x30(r1)
/* 801E2890 001DF7D0  48 1D 37 5D */	bl create__Q23efx13TKouhaiDamageFPQ23efx3Arg
/* 801E2894 001DF7D4  4B EE 6D 0D */	bl rand
/* 801E2898 001DF7D8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801E289C 001DF7DC  3C 00 43 30 */	lis r0, 0x4330
/* 801E28A0 001DF7E0  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801E28A4 001DF7E4  C8 62 B5 70 */	lfd f3, lbl_805198D0@sda21(r2)
/* 801E28A8 001DF7E8  90 01 00 38 */	stw r0, 0x38(r1)
/* 801E28AC 001DF7EC  C0 22 B5 80 */	lfs f1, lbl_805198E0@sda21(r2)
/* 801E28B0 001DF7F0  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 801E28B4 001DF7F4  C0 02 B5 84 */	lfs f0, lbl_805198E4@sda21(r2)
/* 801E28B8 001DF7F8  EC 42 18 28 */	fsubs f2, f2, f3
/* 801E28BC 001DF7FC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801E28C0 001DF800  EC 00 00 72 */	fmuls f0, f0, f1
/* 801E28C4 001DF804  FC 00 00 1E */	fctiwz f0, f0
/* 801E28C8 001DF808  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 801E28CC 001DF80C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801E28D0 001DF810  38 03 00 06 */	addi r0, r3, 6
/* 801E28D4 001DF814  98 1E 01 FC */	stb r0, 0x1fc(r30)
.L_801E28D8:
/* 801E28D8 001DF818  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801E28DC 001DF81C  38 60 00 01 */	li r3, 1
/* 801E28E0 001DF820  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801E28E4 001DF824  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801E28E8 001DF828  7C 08 03 A6 */	mtlr r0
/* 801E28EC 001DF82C  38 21 00 50 */	addi r1, r1, 0x50
/* 801E28F0 001DF830  4E 80 00 20 */	blr 

.global onDamage__Q34Game8ItemRock5StateFPQ34Game8ItemRock4Itemf
onDamage__Q34Game8ItemRock5StateFPQ34Game8ItemRock4Itemf:
/* 801E28F4 001DF834  4E 80 00 20 */	blr 

.global getWorkRadius__Q34Game8ItemRock4ItemFv
getWorkRadius__Q34Game8ItemRock4ItemFv:
/* 801E28F8 001DF838  80 83 02 1C */	lwz r4, 0x21c(r3)
/* 801E28FC 001DF83C  80 03 02 20 */	lwz r0, 0x220(r3)
/* 801E2900 001DF840  7C 04 00 00 */	cmpw r4, r0
/* 801E2904 001DF844  40 82 00 0C */	bne .L_801E2910
/* 801E2908 001DF848  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E290C 001DF84C  4E 80 00 20 */	blr 
.L_801E2910:
/* 801E2910 001DF850  80 63 02 10 */	lwz r3, 0x210(r3)
/* 801E2914 001DF854  54 80 10 3A */	slwi r0, r4, 2
/* 801E2918 001DF858  7C 23 04 2E */	lfsx f1, r3, r0
/* 801E291C 001DF85C  4E 80 00 20 */	blr 

.global __ct__Q34Game8ItemRock3MgrFv
__ct__Q34Game8ItemRock3MgrFv:
/* 801E2920 001DF860  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801E2924 001DF864  7C 08 02 A6 */	mflr r0
/* 801E2928 001DF868  90 01 04 44 */	stw r0, 0x444(r1)
/* 801E292C 001DF86C  7C 80 07 35 */	extsh. r0, r4
/* 801E2930 001DF870  3C 80 80 48 */	lis r4, lbl_80480B10@ha
/* 801E2934 001DF874  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801E2938 001DF878  3B E4 0B 10 */	addi r31, r4, lbl_80480B10@l
/* 801E293C 001DF87C  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801E2940 001DF880  7C 7E 1B 78 */	mr r30, r3
/* 801E2944 001DF884  41 82 00 0C */	beq .L_801E2950
/* 801E2948 001DF888  38 1E 00 8C */	addi r0, r30, 0x8c
/* 801E294C 001DF88C  90 1E 00 04 */	stw r0, 4(r30)
.L_801E2950:
/* 801E2950 001DF890  7F C3 F3 78 */	mr r3, r30
/* 801E2954 001DF894  38 80 00 00 */	li r4, 0
/* 801E2958 001DF898  4B FE AA C9 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801E295C 001DF89C  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock3Mgr@ha
/* 801E2960 001DF8A0  38 1F 00 0C */	addi r0, r31, 0xc
/* 801E2964 001DF8A4  38 83 99 A8 */	addi r4, r3, __vt__Q34Game8ItemRock3Mgr@l
/* 801E2968 001DF8A8  7F C3 F3 78 */	mr r3, r30
/* 801E296C 001DF8AC  90 9E 00 00 */	stw r4, 0(r30)
/* 801E2970 001DF8B0  38 A4 00 74 */	addi r5, r4, 0x74
/* 801E2974 001DF8B4  38 80 00 01 */	li r4, 1
/* 801E2978 001DF8B8  90 BE 00 30 */	stw r5, 0x30(r30)
/* 801E297C 001DF8BC  90 1E 00 08 */	stw r0, 8(r30)
/* 801E2980 001DF8C0  4B FE A4 4D */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801E2984 001DF8C4  38 1F 00 20 */	addi r0, r31, 0x20
/* 801E2988 001DF8C8  38 60 02 A4 */	li r3, 0x2a4
/* 801E298C 001DF8CC  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801E2990 001DF8D0  4B E4 15 15 */	bl __nw__FUl
/* 801E2994 001DF8D4  7C 60 1B 79 */	or. r0, r3, r3
/* 801E2998 001DF8D8  41 82 00 0C */	beq .L_801E29A4
/* 801E299C 001DF8DC  48 00 00 C9 */	bl __ct__Q34Game8ItemRock9RockParmsFv
/* 801E29A0 001DF8E0  7C 60 1B 78 */	mr r0, r3
.L_801E29A4:
/* 801E29A4 001DF8E4  90 1E 00 88 */	stw r0, 0x88(r30)
/* 801E29A8 001DF8E8  38 00 00 00 */	li r0, 0
/* 801E29AC 001DF8EC  38 7F 00 40 */	addi r3, r31, 0x40
/* 801E29B0 001DF8F0  38 80 00 00 */	li r4, 0
/* 801E29B4 001DF8F4  90 01 00 08 */	stw r0, 8(r1)
/* 801E29B8 001DF8F8  38 A0 00 00 */	li r5, 0
/* 801E29BC 001DF8FC  38 C0 00 00 */	li r6, 0
/* 801E29C0 001DF900  38 E0 00 00 */	li r7, 0
/* 801E29C4 001DF904  39 00 00 02 */	li r8, 2
/* 801E29C8 001DF908  39 20 00 00 */	li r9, 0
/* 801E29CC 001DF90C  39 40 00 00 */	li r10, 0
/* 801E29D0 001DF910  4B E3 C7 B9 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801E29D4 001DF914  7C 7F 1B 79 */	or. r31, r3, r3
/* 801E29D8 001DF918  41 82 00 4C */	beq .L_801E2A24
/* 801E29DC 001DF91C  7F E4 FB 78 */	mr r4, r31
/* 801E29E0 001DF920  38 61 00 10 */	addi r3, r1, 0x10
/* 801E29E4 001DF924  38 A0 FF FF */	li r5, -1
/* 801E29E8 001DF928  48 23 2F 11 */	bl __ct__9RamStreamFPvi
/* 801E29EC 001DF92C  38 00 00 01 */	li r0, 1
/* 801E29F0 001DF930  2C 00 00 01 */	cmpwi r0, 1
/* 801E29F4 001DF934  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801E29F8 001DF938  40 82 00 0C */	bne .L_801E2A04
/* 801E29FC 001DF93C  38 00 00 00 */	li r0, 0
/* 801E2A00 001DF940  90 01 04 24 */	stw r0, 0x424(r1)
.L_801E2A04:
/* 801E2A04 001DF944  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 801E2A08 001DF948  38 81 00 10 */	addi r4, r1, 0x10
/* 801E2A0C 001DF94C  81 83 00 D8 */	lwz r12, 0xd8(r3)
/* 801E2A10 001DF950  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E2A14 001DF954  7D 89 03 A6 */	mtctr r12
/* 801E2A18 001DF958  4E 80 04 21 */	bctrl 
/* 801E2A1C 001DF95C  7F E3 FB 78 */	mr r3, r31
/* 801E2A20 001DF960  4B E4 16 B9 */	bl __dla__FPv
.L_801E2A24:
/* 801E2A24 001DF964  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801E2A28 001DF968  7F C3 F3 78 */	mr r3, r30
/* 801E2A2C 001DF96C  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801E2A30 001DF970  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801E2A34 001DF974  7C 08 03 A6 */	mtlr r0
/* 801E2A38 001DF978  38 21 04 40 */	addi r1, r1, 0x440
/* 801E2A3C 001DF97C  4E 80 00 20 */	blr 

.global read__Q34Game8ItemRock9RockParmsFR6Stream
read__Q34Game8ItemRock9RockParmsFR6Stream:
/* 801E2A40 001DF980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E2A44 001DF984  7C 08 02 A6 */	mflr r0
/* 801E2A48 001DF988  38 63 00 DC */	addi r3, r3, 0xdc
/* 801E2A4C 001DF98C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E2A50 001DF990  48 23 0D A5 */	bl read__10ParametersFR6Stream
/* 801E2A54 001DF994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E2A58 001DF998  7C 08 03 A6 */	mtlr r0
/* 801E2A5C 001DF99C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E2A60 001DF9A0  4E 80 00 20 */	blr 

.global __ct__Q34Game8ItemRock9RockParmsFv
__ct__Q34Game8ItemRock9RockParmsFv:
/* 801E2A64 001DF9A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E2A68 001DF9A8  7C 08 02 A6 */	mflr r0
/* 801E2A6C 001DF9AC  3C A0 73 30 */	lis r5, 0x73303030@ha
/* 801E2A70 001DF9B0  3C 80 80 4B */	lis r4, __vt__Q24Game13CreatureParms@ha
/* 801E2A74 001DF9B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E2A78 001DF9B8  38 04 AC B0 */	addi r0, r4, __vt__Q24Game13CreatureParms@l
/* 801E2A7C 001DF9BC  38 A5 30 30 */	addi r5, r5, 0x73303030@l
/* 801E2A80 001DF9C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E2A84 001DF9C4  7C 7F 1B 78 */	mr r31, r3
/* 801E2A88 001DF9C8  3C 60 80 48 */	lis r3, lbl_80480B10@ha
/* 801E2A8C 001DF9CC  93 C1 00 08 */	stw r30, 8(r1)
/* 801E2A90 001DF9D0  3B C3 0B 10 */	addi r30, r3, lbl_80480B10@l
/* 801E2A94 001DF9D4  38 60 00 00 */	li r3, 0
/* 801E2A98 001DF9D8  7F E4 FB 78 */	mr r4, r31
/* 801E2A9C 001DF9DC  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 801E2AA0 001DF9E0  38 1F 00 D4 */	addi r0, r31, 0xd4
/* 801E2AA4 001DF9E4  38 DE 00 70 */	addi r6, r30, 0x70
/* 801E2AA8 001DF9E8  90 1F 00 00 */	stw r0, 0(r31)
/* 801E2AAC 001DF9EC  38 1E 00 5C */	addi r0, r30, 0x5c
/* 801E2AB0 001DF9F0  90 7F 00 04 */	stw r3, 4(r31)
/* 801E2AB4 001DF9F4  38 7F 00 0C */	addi r3, r31, 0xc
/* 801E2AB8 001DF9F8  90 1F 00 08 */	stw r0, 8(r31)
/* 801E2ABC 001DF9FC  48 23 0B 9D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2AC0 001DFA00  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2AC4 001DFA04  3C A0 73 30 */	lis r5, 0x73303031@ha
/* 801E2AC8 001DFA08  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2ACC 001DFA0C  C0 02 B5 98 */	lfs f0, lbl_805198F8@sda21(r2)
/* 801E2AD0 001DFA10  90 1F 00 0C */	stw r0, 0xc(r31)
/* 801E2AD4 001DFA14  7F E4 FB 78 */	mr r4, r31
/* 801E2AD8 001DFA18  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2ADC 001DFA1C  38 7F 00 34 */	addi r3, r31, 0x34
/* 801E2AE0 001DFA20  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 801E2AE4 001DFA24  38 A5 30 31 */	addi r5, r5, 0x73303031@l
/* 801E2AE8 001DFA28  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2AEC 001DFA2C  38 DE 00 84 */	addi r6, r30, 0x84
/* 801E2AF0 001DFA30  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 801E2AF4 001DFA34  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 801E2AF8 001DFA38  48 23 0B 61 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2AFC 001DFA3C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2B00 001DFA40  3C A0 73 30 */	lis r5, 0x73303032@ha
/* 801E2B04 001DFA44  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2B08 001DFA48  C0 02 B5 98 */	lfs f0, lbl_805198F8@sda21(r2)
/* 801E2B0C 001DFA4C  90 1F 00 34 */	stw r0, 0x34(r31)
/* 801E2B10 001DFA50  7F E4 FB 78 */	mr r4, r31
/* 801E2B14 001DFA54  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2B18 001DFA58  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801E2B1C 001DFA5C  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 801E2B20 001DFA60  38 A5 30 32 */	addi r5, r5, 0x73303032@l
/* 801E2B24 001DFA64  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2B28 001DFA68  38 DE 00 94 */	addi r6, r30, 0x94
/* 801E2B2C 001DFA6C  D0 3F 00 54 */	stfs f1, 0x54(r31)
/* 801E2B30 001DFA70  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 801E2B34 001DFA74  48 23 0B 25 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2B38 001DFA78  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2B3C 001DFA7C  3C A0 73 30 */	lis r5, 0x73303033@ha
/* 801E2B40 001DFA80  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2B44 001DFA84  C0 02 B5 9C */	lfs f0, lbl_805198FC@sda21(r2)
/* 801E2B48 001DFA88  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 801E2B4C 001DFA8C  7F E4 FB 78 */	mr r4, r31
/* 801E2B50 001DFA90  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2B54 001DFA94  38 7F 00 84 */	addi r3, r31, 0x84
/* 801E2B58 001DFA98  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 801E2B5C 001DFA9C  38 A5 30 33 */	addi r5, r5, 0x73303033@l
/* 801E2B60 001DFAA0  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2B64 001DFAA4  38 C2 B5 A0 */	addi r6, r2, lbl_80519900@sda21
/* 801E2B68 001DFAA8  D0 3F 00 7C */	stfs f1, 0x7c(r31)
/* 801E2B6C 001DFAAC  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 801E2B70 001DFAB0  48 23 0A E9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2B74 001DFAB4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2B78 001DFAB8  3C A0 73 30 */	lis r5, 0x73303034@ha
/* 801E2B7C 001DFABC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2B80 001DFAC0  C0 02 B5 A8 */	lfs f0, lbl_80519908@sda21(r2)
/* 801E2B84 001DFAC4  90 1F 00 84 */	stw r0, 0x84(r31)
/* 801E2B88 001DFAC8  7F E4 FB 78 */	mr r4, r31
/* 801E2B8C 001DFACC  C0 22 B5 AC */	lfs f1, lbl_8051990C@sda21(r2)
/* 801E2B90 001DFAD0  38 7F 00 AC */	addi r3, r31, 0xac
/* 801E2B94 001DFAD4  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 801E2B98 001DFAD8  38 A5 30 34 */	addi r5, r5, 0x73303034@l
/* 801E2B9C 001DFADC  C0 02 B5 B0 */	lfs f0, lbl_80519910@sda21(r2)
/* 801E2BA0 001DFAE0  38 DE 00 A4 */	addi r6, r30, 0xa4
/* 801E2BA4 001DFAE4  D0 3F 00 A4 */	stfs f1, 0xa4(r31)
/* 801E2BA8 001DFAE8  D0 1F 00 A8 */	stfs f0, 0xa8(r31)
/* 801E2BAC 001DFAEC  48 23 0A AD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2BB0 001DFAF0  3C 80 80 4B */	lis r4, "__vt__7Parm<f>"@ha
/* 801E2BB4 001DFAF4  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock9RockParms@ha
/* 801E2BB8 001DFAF8  38 04 AC BC */	addi r0, r4, "__vt__7Parm<f>"@l
/* 801E2BBC 001DFAFC  C0 02 B5 B4 */	lfs f0, lbl_80519914@sda21(r2)
/* 801E2BC0 001DFB00  90 1F 00 AC */	stw r0, 0xac(r31)
/* 801E2BC4 001DFB04  38 03 9A 68 */	addi r0, r3, __vt__Q34Game8ItemRock9RockParms@l
/* 801E2BC8 001DFB08  C0 22 B5 AC */	lfs f1, lbl_8051990C@sda21(r2)
/* 801E2BCC 001DFB0C  38 7F 00 DC */	addi r3, r31, 0xdc
/* 801E2BD0 001DFB10  D0 1F 00 C4 */	stfs f0, 0xc4(r31)
/* 801E2BD4 001DFB14  38 80 00 01 */	li r4, 1
/* 801E2BD8 001DFB18  C0 02 B5 B0 */	lfs f0, lbl_80519910@sda21(r2)
/* 801E2BDC 001DFB1C  D0 3F 00 CC */	stfs f1, 0xcc(r31)
/* 801E2BE0 001DFB20  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 801E2BE4 001DFB24  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 801E2BE8 001DFB28  48 00 00 21 */	bl __ct__Q44Game8ItemRock9RockParms5ParmsFv
/* 801E2BEC 001DFB2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E2BF0 001DFB30  7F E3 FB 78 */	mr r3, r31
/* 801E2BF4 001DFB34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E2BF8 001DFB38  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E2BFC 001DFB3C  7C 08 03 A6 */	mtlr r0
/* 801E2C00 001DFB40  38 21 00 10 */	addi r1, r1, 0x10
/* 801E2C04 001DFB44  4E 80 00 20 */	blr 

.global __ct__Q44Game8ItemRock9RockParms5ParmsFv
__ct__Q44Game8ItemRock9RockParms5ParmsFv:
/* 801E2C08 001DFB48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E2C0C 001DFB4C  7C 08 02 A6 */	mflr r0
/* 801E2C10 001DFB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E2C14 001DFB54  7C 80 07 35 */	extsh. r0, r4
/* 801E2C18 001DFB58  3C 80 80 48 */	lis r4, lbl_80480B10@ha
/* 801E2C1C 001DFB5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E2C20 001DFB60  3B E4 0B 10 */	addi r31, r4, lbl_80480B10@l
/* 801E2C24 001DFB64  93 C1 00 08 */	stw r30, 8(r1)
/* 801E2C28 001DFB68  7C 7E 1B 78 */	mr r30, r3
/* 801E2C2C 001DFB6C  41 82 00 0C */	beq .L_801E2C38
/* 801E2C30 001DFB70  38 1E 01 C4 */	addi r0, r30, 0x1c4
/* 801E2C34 001DFB74  90 1E 00 00 */	stw r0, 0(r30)
.L_801E2C38:
/* 801E2C38 001DFB78  38 00 00 00 */	li r0, 0
/* 801E2C3C 001DFB7C  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 801E2C40 001DFB80  90 1E 00 04 */	stw r0, 4(r30)
/* 801E2C44 001DFB84  38 1F 00 B4 */	addi r0, r31, 0xb4
/* 801E2C48 001DFB88  7F C4 F3 78 */	mr r4, r30
/* 801E2C4C 001DFB8C  38 7E 00 0C */	addi r3, r30, 0xc
/* 801E2C50 001DFB90  90 1E 00 08 */	stw r0, 8(r30)
/* 801E2C54 001DFB94  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 801E2C58 001DFB98  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 801E2C5C 001DFB9C  48 23 09 FD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2C60 001DFBA0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2C64 001DFBA4  3C A0 70 30 */	lis r5, 0x70303031@ha
/* 801E2C68 001DFBA8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2C6C 001DFBAC  C0 02 B5 B8 */	lfs f0, lbl_80519918@sda21(r2)
/* 801E2C70 001DFBB0  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801E2C74 001DFBB4  7F C4 F3 78 */	mr r4, r30
/* 801E2C78 001DFBB8  C0 22 B5 6C */	lfs f1, lbl_805198CC@sda21(r2)
/* 801E2C7C 001DFBBC  38 7E 00 34 */	addi r3, r30, 0x34
/* 801E2C80 001DFBC0  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801E2C84 001DFBC4  38 A5 30 31 */	addi r5, r5, 0x70303031@l
/* 801E2C88 001DFBC8  C0 02 B5 BC */	lfs f0, lbl_8051991C@sda21(r2)
/* 801E2C8C 001DFBCC  38 DF 00 D0 */	addi r6, r31, 0xd0
/* 801E2C90 001DFBD0  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801E2C94 001DFBD4  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801E2C98 001DFBD8  48 23 09 C1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2C9C 001DFBDC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2CA0 001DFBE0  3C A0 70 30 */	lis r5, 0x70303032@ha
/* 801E2CA4 001DFBE4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2CA8 001DFBE8  C0 02 B5 C0 */	lfs f0, lbl_80519920@sda21(r2)
/* 801E2CAC 001DFBEC  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801E2CB0 001DFBF0  7F C4 F3 78 */	mr r4, r30
/* 801E2CB4 001DFBF4  C0 22 B5 6C */	lfs f1, lbl_805198CC@sda21(r2)
/* 801E2CB8 001DFBF8  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801E2CBC 001DFBFC  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801E2CC0 001DFC00  38 A5 30 32 */	addi r5, r5, 0x70303032@l
/* 801E2CC4 001DFC04  C0 02 B5 BC */	lfs f0, lbl_8051991C@sda21(r2)
/* 801E2CC8 001DFC08  38 DF 00 DC */	addi r6, r31, 0xdc
/* 801E2CCC 001DFC0C  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 801E2CD0 001DFC10  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 801E2CD4 001DFC14  48 23 09 85 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2CD8 001DFC18  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2CDC 001DFC1C  3C A0 70 30 */	lis r5, 0x70303033@ha
/* 801E2CE0 001DFC20  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2CE4 001DFC24  C0 02 B5 C4 */	lfs f0, lbl_80519924@sda21(r2)
/* 801E2CE8 001DFC28  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801E2CEC 001DFC2C  7F C4 F3 78 */	mr r4, r30
/* 801E2CF0 001DFC30  C0 22 B5 6C */	lfs f1, lbl_805198CC@sda21(r2)
/* 801E2CF4 001DFC34  38 7E 00 84 */	addi r3, r30, 0x84
/* 801E2CF8 001DFC38  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 801E2CFC 001DFC3C  38 A5 30 33 */	addi r5, r5, 0x70303033@l
/* 801E2D00 001DFC40  C0 02 B5 BC */	lfs f0, lbl_8051991C@sda21(r2)
/* 801E2D04 001DFC44  38 DF 00 E8 */	addi r6, r31, 0xe8
/* 801E2D08 001DFC48  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801E2D0C 001DFC4C  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 801E2D10 001DFC50  48 23 09 49 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2D14 001DFC54  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2D18 001DFC58  3C A0 70 30 */	lis r5, 0x70303034@ha
/* 801E2D1C 001DFC5C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2D20 001DFC60  C0 02 B5 C8 */	lfs f0, lbl_80519928@sda21(r2)
/* 801E2D24 001DFC64  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801E2D28 001DFC68  7F C4 F3 78 */	mr r4, r30
/* 801E2D2C 001DFC6C  C0 22 B5 6C */	lfs f1, lbl_805198CC@sda21(r2)
/* 801E2D30 001DFC70  38 7E 00 AC */	addi r3, r30, 0xac
/* 801E2D34 001DFC74  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 801E2D38 001DFC78  38 A5 30 34 */	addi r5, r5, 0x70303034@l
/* 801E2D3C 001DFC7C  C0 02 B5 BC */	lfs f0, lbl_8051991C@sda21(r2)
/* 801E2D40 001DFC80  38 DF 00 F4 */	addi r6, r31, 0xf4
/* 801E2D44 001DFC84  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 801E2D48 001DFC88  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 801E2D4C 001DFC8C  48 23 09 0D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2D50 001DFC90  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2D54 001DFC94  3C A0 70 30 */	lis r5, 0x70303035@ha
/* 801E2D58 001DFC98  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2D5C 001DFC9C  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2D60 001DFCA0  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801E2D64 001DFCA4  7F C4 F3 78 */	mr r4, r30
/* 801E2D68 001DFCA8  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2D6C 001DFCAC  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 801E2D70 001DFCB0  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 801E2D74 001DFCB4  38 A5 30 35 */	addi r5, r5, 0x70303035@l
/* 801E2D78 001DFCB8  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2D7C 001DFCBC  38 DF 01 08 */	addi r6, r31, 0x108
/* 801E2D80 001DFCC0  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 801E2D84 001DFCC4  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 801E2D88 001DFCC8  48 23 08 D1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2D8C 001DFCCC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2D90 001DFCD0  3C A0 70 30 */	lis r5, 0x70303036@ha
/* 801E2D94 001DFCD4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2D98 001DFCD8  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2D9C 001DFCDC  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 801E2DA0 001DFCE0  7F C4 F3 78 */	mr r4, r30
/* 801E2DA4 001DFCE4  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2DA8 001DFCE8  38 7E 00 FC */	addi r3, r30, 0xfc
/* 801E2DAC 001DFCEC  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 801E2DB0 001DFCF0  38 A5 30 36 */	addi r5, r5, 0x70303036@l
/* 801E2DB4 001DFCF4  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2DB8 001DFCF8  38 DF 01 1C */	addi r6, r31, 0x11c
/* 801E2DBC 001DFCFC  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 801E2DC0 001DFD00  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 801E2DC4 001DFD04  48 23 08 95 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2DC8 001DFD08  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2DCC 001DFD0C  3C A0 70 30 */	lis r5, 0x70303037@ha
/* 801E2DD0 001DFD10  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2DD4 001DFD14  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2DD8 001DFD18  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 801E2DDC 001DFD1C  7F C4 F3 78 */	mr r4, r30
/* 801E2DE0 001DFD20  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2DE4 001DFD24  38 7E 01 24 */	addi r3, r30, 0x124
/* 801E2DE8 001DFD28  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 801E2DEC 001DFD2C  38 A5 30 37 */	addi r5, r5, 0x70303037@l
/* 801E2DF0 001DFD30  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2DF4 001DFD34  38 DF 01 30 */	addi r6, r31, 0x130
/* 801E2DF8 001DFD38  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 801E2DFC 001DFD3C  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 801E2E00 001DFD40  48 23 08 59 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2E04 001DFD44  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2E08 001DFD48  3C A0 70 30 */	lis r5, 0x70303038@ha
/* 801E2E0C 001DFD4C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2E10 001DFD50  C0 02 B5 6C */	lfs f0, lbl_805198CC@sda21(r2)
/* 801E2E14 001DFD54  90 1E 01 24 */	stw r0, 0x124(r30)
/* 801E2E18 001DFD58  7F C4 F3 78 */	mr r4, r30
/* 801E2E1C 001DFD5C  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2E20 001DFD60  38 7E 01 4C */	addi r3, r30, 0x14c
/* 801E2E24 001DFD64  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 801E2E28 001DFD68  38 A5 30 38 */	addi r5, r5, 0x70303038@l
/* 801E2E2C 001DFD6C  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2E30 001DFD70  38 DF 01 44 */	addi r6, r31, 0x144
/* 801E2E34 001DFD74  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 801E2E38 001DFD78  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 801E2E3C 001DFD7C  48 23 08 1D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2E40 001DFD80  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2E44 001DFD84  3C A0 70 30 */	lis r5, 0x70303039@ha
/* 801E2E48 001DFD88  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2E4C 001DFD8C  C0 02 B5 D0 */	lfs f0, lbl_80519930@sda21(r2)
/* 801E2E50 001DFD90  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 801E2E54 001DFD94  7F C4 F3 78 */	mr r4, r30
/* 801E2E58 001DFD98  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2E5C 001DFD9C  38 7E 01 74 */	addi r3, r30, 0x174
/* 801E2E60 001DFDA0  D0 1E 01 64 */	stfs f0, 0x164(r30)
/* 801E2E64 001DFDA4  38 A5 30 39 */	addi r5, r5, 0x70303039@l
/* 801E2E68 001DFDA8  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2E6C 001DFDAC  38 DF 01 44 */	addi r6, r31, 0x144
/* 801E2E70 001DFDB0  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 801E2E74 001DFDB4  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 801E2E78 001DFDB8  48 23 07 E1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2E7C 001DFDBC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2E80 001DFDC0  3C A0 70 30 */	lis r5, 0x70303130@ha
/* 801E2E84 001DFDC4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2E88 001DFDC8  C0 02 B5 D4 */	lfs f0, lbl_80519934@sda21(r2)
/* 801E2E8C 001DFDCC  90 1E 01 74 */	stw r0, 0x174(r30)
/* 801E2E90 001DFDD0  7F C4 F3 78 */	mr r4, r30
/* 801E2E94 001DFDD4  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2E98 001DFDD8  38 7E 01 9C */	addi r3, r30, 0x19c
/* 801E2E9C 001DFDDC  D0 1E 01 8C */	stfs f0, 0x18c(r30)
/* 801E2EA0 001DFDE0  38 A5 31 30 */	addi r5, r5, 0x70303130@l
/* 801E2EA4 001DFDE4  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2EA8 001DFDE8  38 DF 01 44 */	addi r6, r31, 0x144
/* 801E2EAC 001DFDEC  D0 3E 01 94 */	stfs f1, 0x194(r30)
/* 801E2EB0 001DFDF0  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 801E2EB4 001DFDF4  48 23 07 A5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801E2EB8 001DFDF8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801E2EBC 001DFDFC  C0 42 B5 8C */	lfs f2, lbl_805198EC@sda21(r2)
/* 801E2EC0 001DFE00  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801E2EC4 001DFE04  C0 22 B5 68 */	lfs f1, lbl_805198C8@sda21(r2)
/* 801E2EC8 001DFE08  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 801E2ECC 001DFE0C  7F C3 F3 78 */	mr r3, r30
/* 801E2ED0 001DFE10  C0 02 B5 CC */	lfs f0, lbl_8051992C@sda21(r2)
/* 801E2ED4 001DFE14  D0 5E 01 B4 */	stfs f2, 0x1b4(r30)
/* 801E2ED8 001DFE18  D0 3E 01 BC */	stfs f1, 0x1bc(r30)
/* 801E2EDC 001DFE1C  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 801E2EE0 001DFE20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E2EE4 001DFE24  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E2EE8 001DFE28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E2EEC 001DFE2C  7C 08 03 A6 */	mtlr r0
/* 801E2EF0 001DFE30  38 21 00 10 */	addi r1, r1, 0x10
/* 801E2EF4 001DFE34  4E 80 00 20 */	blr 

.global birth__Q34Game8ItemRock3MgrFv
birth__Q34Game8ItemRock3MgrFv:
/* 801E2EF8 001DFE38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E2EFC 001DFE3C  7C 08 02 A6 */	mflr r0
/* 801E2F00 001DFE40  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E2F04 001DFE44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E2F08 001DFE48  93 C1 00 08 */	stw r30, 8(r1)
/* 801E2F0C 001DFE4C  7C 7E 1B 78 */	mr r30, r3
/* 801E2F10 001DFE50  38 60 02 28 */	li r3, 0x228
/* 801E2F14 001DFE54  4B E4 0F 91 */	bl __nw__FUl
/* 801E2F18 001DFE58  7C 7F 1B 79 */	or. r31, r3, r3
/* 801E2F1C 001DFE5C  41 82 00 C4 */	beq .L_801E2FE0
/* 801E2F20 001DFE60  38 80 04 09 */	li r4, 0x409
/* 801E2F24 001DFE64  4B FE 90 C5 */	bl __ct__Q24Game8BaseItemFi
/* 801E2F28 001DFE68  3C 60 80 4C */	lis r3, "__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
/* 801E2F2C 001DFE6C  38 00 00 00 */	li r0, 0
/* 801E2F30 001DFE70  38 83 9F 60 */	addi r4, r3, "__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
/* 801E2F34 001DFE74  38 60 00 1C */	li r3, 0x1c
/* 801E2F38 001DFE78  90 9F 00 00 */	stw r4, 0(r31)
/* 801E2F3C 001DFE7C  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801E2F40 001DFE80  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801E2F44 001DFE84  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801E2F48 001DFE88  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801E2F4C 001DFE8C  4B E4 0F 59 */	bl __nw__FUl
/* 801E2F50 001DFE90  28 03 00 00 */	cmplwi r3, 0
/* 801E2F54 001DFE94  41 82 00 30 */	beq .L_801E2F84
/* 801E2F58 001DFE98  3C 80 80 4C */	lis r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@ha
/* 801E2F5C 001DFE9C  3C A0 80 4C */	lis r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@ha
/* 801E2F60 001DFEA0  38 04 9F 48 */	addi r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@l
/* 801E2F64 001DFEA4  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemRock3FSM@ha
/* 801E2F68 001DFEA8  90 03 00 00 */	stw r0, 0(r3)
/* 801E2F6C 001DFEAC  38 C0 FF FF */	li r6, -1
/* 801E2F70 001DFEB0  38 A5 9F 30 */	addi r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@l
/* 801E2F74 001DFEB4  38 04 A2 A8 */	addi r0, r4, __vt__Q34Game8ItemRock3FSM@l
/* 801E2F78 001DFEB8  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801E2F7C 001DFEBC  90 A3 00 00 */	stw r5, 0(r3)
/* 801E2F80 001DFEC0  90 03 00 00 */	stw r0, 0(r3)
.L_801E2F84:
/* 801E2F84 001DFEC4  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801E2F88 001DFEC8  7F E4 FB 78 */	mr r4, r31
/* 801E2F8C 001DFECC  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801E2F90 001DFED0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E2F94 001DFED4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E2F98 001DFED8  7D 89 03 A6 */	mtctr r12
/* 801E2F9C 001DFEDC  4E 80 04 21 */	bctrl 
/* 801E2FA0 001DFEE0  3C 80 80 4C */	lis r4, "__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
/* 801E2FA4 001DFEE4  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801E2FA8 001DFEE8  38 84 9D 0C */	addi r4, r4, "__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
/* 801E2FAC 001DFEEC  90 9F 00 00 */	stw r4, 0(r31)
/* 801E2FB0 001DFEF0  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801E2FB4 001DFEF4  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801E2FB8 001DFEF8  48 04 BC 15 */	bl __ct__Q24Game11TSoundEventFv
/* 801E2FBC 001DFEFC  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock4Item@ha
/* 801E2FC0 001DFF00  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E2FC4 001DFF04  38 63 9A E8 */	addi r3, r3, __vt__Q34Game8ItemRock4Item@l
/* 801E2FC8 001DFF08  38 00 00 00 */	li r0, 0
/* 801E2FCC 001DFF0C  90 7F 00 00 */	stw r3, 0(r31)
/* 801E2FD0 001DFF10  38 63 01 B0 */	addi r3, r3, 0x1b0
/* 801E2FD4 001DFF14  90 7F 01 78 */	stw r3, 0x178(r31)
/* 801E2FD8 001DFF18  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 801E2FDC 001DFF1C  90 1F 01 EC */	stw r0, 0x1ec(r31)
.L_801E2FE0:
/* 801E2FE0 001DFF20  7F C3 F3 78 */	mr r3, r30
/* 801E2FE4 001DFF24  7F E4 FB 78 */	mr r4, r31
/* 801E2FE8 001DFF28  4B FE A8 41 */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801E2FEC 001DFF2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E2FF0 001DFF30  7F E3 FB 78 */	mr r3, r31
/* 801E2FF4 001DFF34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E2FF8 001DFF38  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E2FFC 001DFF3C  7C 08 03 A6 */	mtlr r0
/* 801E3000 001DFF40  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3004 001DFF44  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game8ItemRock3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
"generatorBirth__Q34Game8ItemRock3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm":
/* 801E3008 001DFF48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E300C 001DFF4C  7C 08 02 A6 */	mflr r0
/* 801E3010 001DFF50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E3014 001DFF54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E3018 001DFF58  93 C1 00 08 */	stw r30, 8(r1)
/* 801E301C 001DFF5C  7C 9E 23 78 */	mr r30, r4
/* 801E3020 001DFF60  81 83 00 00 */	lwz r12, 0(r3)
/* 801E3024 001DFF64  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 801E3028 001DFF68  7D 89 03 A6 */	mtctr r12
/* 801E302C 001DFF6C  4E 80 04 21 */	bctrl 
/* 801E3030 001DFF70  38 80 00 00 */	li r4, 0
/* 801E3034 001DFF74  7C 7F 1B 78 */	mr r31, r3
/* 801E3038 001DFF78  4B F5 7F 91 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801E303C 001DFF7C  7F E3 FB 78 */	mr r3, r31
/* 801E3040 001DFF80  7F C4 F3 78 */	mr r4, r30
/* 801E3044 001DFF84  38 A0 00 00 */	li r5, 0
/* 801E3048 001DFF88  4B F5 81 61 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801E304C 001DFF8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E3050 001DFF90  7F E3 FB 78 */	mr r3, r31
/* 801E3054 001DFF94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E3058 001DFF98  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E305C 001DFF9C  7C 08 03 A6 */	mtlr r0
/* 801E3060 001DFFA0  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3064 001DFFA4  4E 80 00 20 */	blr 

.global onLoadResources__Q34Game8ItemRock3MgrFv
onLoadResources__Q34Game8ItemRock3MgrFv:
/* 801E3068 001DFFA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E306C 001DFFAC  7C 08 02 A6 */	mflr r0
/* 801E3070 001DFFB0  3C 80 80 48 */	lis r4, lbl_80480B10@ha
/* 801E3074 001DFFB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E3078 001DFFB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E307C 001DFFBC  3B E4 0B 10 */	addi r31, r4, lbl_80480B10@l
/* 801E3080 001DFFC0  38 82 B5 D8 */	addi r4, r2, lbl_80519938@sda21
/* 801E3084 001DFFC4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E3088 001DFFC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E308C 001DFFCC  7C 7D 1B 78 */	mr r29, r3
/* 801E3090 001DFFD0  4B FE 9E 45 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801E3094 001DFFD4  7F A3 EB 78 */	mr r3, r29
/* 801E3098 001DFFD8  38 9F 01 50 */	addi r4, r31, 0x150
/* 801E309C 001DFFDC  38 A0 00 00 */	li r5, 0
/* 801E30A0 001DFFE0  3C C0 20 02 */	lis r6, 0x2002
/* 801E30A4 001DFFE4  4B FE 9E AD */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801E30A8 001DFFE8  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801E30AC 001DFFEC  3C 80 00 04 */	lis r4, 4
/* 801E30B0 001DFFF0  80 63 00 00 */	lwz r3, 0(r3)
/* 801E30B4 001DFFF4  4B EA 08 25 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801E30B8 001DFFF8  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801E30BC 001DFFFC  80 63 00 00 */	lwz r3, 0(r3)
/* 801E30C0 001E0000  4B EA 09 71 */	bl makeSharedDL__12J3DModelDataFv
/* 801E30C4 001E0004  7F A3 EB 78 */	mr r3, r29
/* 801E30C8 001E0008  38 9F 01 5C */	addi r4, r31, 0x15c
/* 801E30CC 001E000C  4B FE A1 01 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801E30D0 001E0010  7C 60 1B 78 */	mr r0, r3
/* 801E30D4 001E0014  7F A3 EB 78 */	mr r3, r29
/* 801E30D8 001E0018  7C 1E 03 78 */	mr r30, r0
/* 801E30DC 001E001C  38 BF 01 68 */	addi r5, r31, 0x168
/* 801E30E0 001E0020  7F C4 F3 78 */	mr r4, r30
/* 801E30E4 001E0024  4B FE 9F 19 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801E30E8 001E0028  7F A3 EB 78 */	mr r3, r29
/* 801E30EC 001E002C  7F C4 F3 78 */	mr r4, r30
/* 801E30F0 001E0030  4B FE A1 61 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801E30F4 001E0034  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E30F8 001E0038  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E30FC 001E003C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E3100 001E0040  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E3104 001E0044  7C 08 03 A6 */	mtlr r0
/* 801E3108 001E0048  38 21 00 20 */	addi r1, r1, 0x20
/* 801E310C 001E004C  4E 80 00 20 */	blr 

.global __dt__Q34Game8ItemRock3MgrFv
__dt__Q34Game8ItemRock3MgrFv:
/* 801E3110 001E0050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3114 001E0054  7C 08 02 A6 */	mflr r0
/* 801E3118 001E0058  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E311C 001E005C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E3120 001E0060  7C 9F 23 78 */	mr r31, r4
/* 801E3124 001E0064  93 C1 00 08 */	stw r30, 8(r1)
/* 801E3128 001E0068  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E312C 001E006C  41 82 00 FC */	beq .L_801E3228
/* 801E3130 001E0070  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock3Mgr@ha
/* 801E3134 001E0074  38 63 99 A8 */	addi r3, r3, __vt__Q34Game8ItemRock3Mgr@l
/* 801E3138 001E0078  90 7E 00 00 */	stw r3, 0(r30)
/* 801E313C 001E007C  38 03 00 74 */	addi r0, r3, 0x74
/* 801E3140 001E0080  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E3144 001E0084  41 82 00 D4 */	beq .L_801E3218
/* 801E3148 001E0088  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801E314C 001E008C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E3150 001E0090  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801E3154 001E0094  90 7E 00 00 */	stw r3, 0(r30)
/* 801E3158 001E0098  38 03 00 74 */	addi r0, r3, 0x74
/* 801E315C 001E009C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E3160 001E00A0  41 82 00 84 */	beq .L_801E31E4
/* 801E3164 001E00A4  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801E3168 001E00A8  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801E316C 001E00AC  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801E3170 001E00B0  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801E3174 001E00B4  38 04 00 2C */	addi r0, r4, 0x2c
/* 801E3178 001E00B8  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801E317C 001E00BC  41 82 00 18 */	beq .L_801E3194
/* 801E3180 001E00C0  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801E3184 001E00C4  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801E3188 001E00C8  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801E318C 001E00CC  38 80 00 00 */	li r4, 0
/* 801E3190 001E00D0  48 22 E3 F9 */	bl __dt__5CNodeFv
.L_801E3194:
/* 801E3194 001E00D4  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E3198 001E00D8  41 82 00 4C */	beq .L_801E31E4
/* 801E319C 001E00DC  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801E31A0 001E00E0  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E31A4 001E00E4  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801E31A8 001E00E8  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801E31AC 001E00EC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801E31B0 001E00F0  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801E31B4 001E00F4  41 82 00 30 */	beq .L_801E31E4
/* 801E31B8 001E00F8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801E31BC 001E00FC  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E31C0 001E0100  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801E31C4 001E0104  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801E31C8 001E0108  41 82 00 1C */	beq .L_801E31E4
/* 801E31CC 001E010C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801E31D0 001E0110  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801E31D4 001E0114  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801E31D8 001E0118  38 80 00 00 */	li r4, 0
/* 801E31DC 001E011C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801E31E0 001E0120  48 22 E3 A9 */	bl __dt__5CNodeFv
.L_801E31E4:
/* 801E31E4 001E0124  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801E31E8 001E0128  41 82 00 30 */	beq .L_801E3218
/* 801E31EC 001E012C  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801E31F0 001E0130  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801E31F4 001E0134  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801E31F8 001E0138  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E31FC 001E013C  41 82 00 1C */	beq .L_801E3218
/* 801E3200 001E0140  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801E3204 001E0144  38 7E 00 30 */	addi r3, r30, 0x30
/* 801E3208 001E0148  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801E320C 001E014C  38 80 00 00 */	li r4, 0
/* 801E3210 001E0150  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E3214 001E0154  48 22 E3 75 */	bl __dt__5CNodeFv
.L_801E3218:
/* 801E3218 001E0158  7F E0 07 35 */	extsh. r0, r31
/* 801E321C 001E015C  40 81 00 0C */	ble .L_801E3228
/* 801E3220 001E0160  7F C3 F3 78 */	mr r3, r30
/* 801E3224 001E0164  4B E4 0E 91 */	bl __dl__FPv
.L_801E3228:
/* 801E3228 001E0168  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E322C 001E016C  7F C3 F3 78 */	mr r3, r30
/* 801E3230 001E0170  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E3234 001E0174  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E3238 001E0178  7C 08 03 A6 */	mtlr r0
/* 801E323C 001E017C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3240 001E0180  4E 80 00 20 */	blr 

.global doNew__Q34Game8ItemRock3MgrFv
doNew__Q34Game8ItemRock3MgrFv:
/* 801E3244 001E0184  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3248 001E0188  7C 08 02 A6 */	mflr r0
/* 801E324C 001E018C  38 60 02 28 */	li r3, 0x228
/* 801E3250 001E0190  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E3254 001E0194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E3258 001E0198  4B E4 0C 4D */	bl __nw__FUl
/* 801E325C 001E019C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801E3260 001E01A0  41 82 00 C4 */	beq .L_801E3324
/* 801E3264 001E01A4  38 80 04 09 */	li r4, 0x409
/* 801E3268 001E01A8  4B FE 8D 81 */	bl __ct__Q24Game8BaseItemFi
/* 801E326C 001E01AC  3C 60 80 4C */	lis r3, "__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
/* 801E3270 001E01B0  38 00 00 00 */	li r0, 0
/* 801E3274 001E01B4  38 83 9F 60 */	addi r4, r3, "__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
/* 801E3278 001E01B8  38 60 00 1C */	li r3, 0x1c
/* 801E327C 001E01BC  90 9F 00 00 */	stw r4, 0(r31)
/* 801E3280 001E01C0  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801E3284 001E01C4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801E3288 001E01C8  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801E328C 001E01CC  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801E3290 001E01D0  4B E4 0C 15 */	bl __nw__FUl
/* 801E3294 001E01D4  28 03 00 00 */	cmplwi r3, 0
/* 801E3298 001E01D8  41 82 00 30 */	beq .L_801E32C8
/* 801E329C 001E01DC  3C 80 80 4C */	lis r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@ha
/* 801E32A0 001E01E0  3C A0 80 4C */	lis r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@ha
/* 801E32A4 001E01E4  38 04 9F 48 */	addi r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@l
/* 801E32A8 001E01E8  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemRock3FSM@ha
/* 801E32AC 001E01EC  90 03 00 00 */	stw r0, 0(r3)
/* 801E32B0 001E01F0  38 C0 FF FF */	li r6, -1
/* 801E32B4 001E01F4  38 A5 9F 30 */	addi r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@l
/* 801E32B8 001E01F8  38 04 A2 A8 */	addi r0, r4, __vt__Q34Game8ItemRock3FSM@l
/* 801E32BC 001E01FC  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801E32C0 001E0200  90 A3 00 00 */	stw r5, 0(r3)
/* 801E32C4 001E0204  90 03 00 00 */	stw r0, 0(r3)
.L_801E32C8:
/* 801E32C8 001E0208  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801E32CC 001E020C  7F E4 FB 78 */	mr r4, r31
/* 801E32D0 001E0210  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801E32D4 001E0214  81 83 00 00 */	lwz r12, 0(r3)
/* 801E32D8 001E0218  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E32DC 001E021C  7D 89 03 A6 */	mtctr r12
/* 801E32E0 001E0220  4E 80 04 21 */	bctrl 
/* 801E32E4 001E0224  3C 80 80 4C */	lis r4, "__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
/* 801E32E8 001E0228  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801E32EC 001E022C  38 84 9D 0C */	addi r4, r4, "__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
/* 801E32F0 001E0230  90 9F 00 00 */	stw r4, 0(r31)
/* 801E32F4 001E0234  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801E32F8 001E0238  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801E32FC 001E023C  48 04 B8 D1 */	bl __ct__Q24Game11TSoundEventFv
/* 801E3300 001E0240  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemRock4Item@ha
/* 801E3304 001E0244  C0 02 B5 68 */	lfs f0, lbl_805198C8@sda21(r2)
/* 801E3308 001E0248  38 63 9A E8 */	addi r3, r3, __vt__Q34Game8ItemRock4Item@l
/* 801E330C 001E024C  38 00 00 00 */	li r0, 0
/* 801E3310 001E0250  90 7F 00 00 */	stw r3, 0(r31)
/* 801E3314 001E0254  38 63 01 B0 */	addi r3, r3, 0x1b0
/* 801E3318 001E0258  90 7F 01 78 */	stw r3, 0x178(r31)
/* 801E331C 001E025C  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 801E3320 001E0260  90 1F 01 EC */	stw r0, 0x1ec(r31)
.L_801E3324:
/* 801E3324 001E0264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E3328 001E0268  7F E3 FB 78 */	mr r3, r31
/* 801E332C 001E026C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E3330 001E0270  7C 08 03 A6 */	mtlr r0
/* 801E3334 001E0274  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3338 001E0278  4E 80 00 20 */	blr 

.global generatorGetID__Q34Game8ItemRock3MgrFv
generatorGetID__Q34Game8ItemRock3MgrFv:
/* 801E333C 001E027C  3C 60 72 6F */	lis r3, 0x726F636B@ha
/* 801E3340 001E0280  38 63 63 6B */	addi r3, r3, 0x726F636B@l
/* 801E3344 001E0284  4E 80 00 20 */	blr 

.global getName__Q23efx9ArgKouhaiFv
getName__Q23efx9ArgKouhaiFv:
/* 801E3348 001E0288  3C 60 80 48 */	lis r3, lbl_80480C84@ha
/* 801E334C 001E028C  38 63 0C 84 */	addi r3, r3, lbl_80480C84@l
/* 801E3350 001E0290  4E 80 00 20 */	blr 

.global getCreatureName__Q34Game8ItemRock4ItemFv
getCreatureName__Q34Game8ItemRock4ItemFv:
/* 801E3354 001E0294  3C 60 80 48 */	lis r3, lbl_80480C90@ha
/* 801E3358 001E0298  38 63 0C 90 */	addi r3, r3, lbl_80480C90@l
/* 801E335C 001E029C  4E 80 00 20 */	blr 

.global "doAI__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>Fv"
"doAI__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>Fv":
/* 801E3360 001E02A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3364 001E02A4  7C 08 02 A6 */	mflr r0
/* 801E3368 001E02A8  7C 64 1B 78 */	mr r4, r3
/* 801E336C 001E02AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E3370 001E02B0  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801E3374 001E02B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E3378 001E02B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E337C 001E02BC  7D 89 03 A6 */	mtctr r12
/* 801E3380 001E02C0  4E 80 04 21 */	bctrl 
/* 801E3384 001E02C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E3388 001E02C8  7C 08 03 A6 */	mtlr r0
/* 801E338C 001E02CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3390 001E02D0  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent":
/* 801E3394 001E02D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3398 001E02D8  7C 08 02 A6 */	mflr r0
/* 801E339C 001E02DC  7C 66 1B 78 */	mr r6, r3
/* 801E33A0 001E02E0  7C 85 23 78 */	mr r5, r4
/* 801E33A4 001E02E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E33A8 001E02E8  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E33AC 001E02EC  28 03 00 00 */	cmplwi r3, 0
/* 801E33B0 001E02F0  41 82 00 18 */	beq .L_801E33C8
/* 801E33B4 001E02F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E33B8 001E02F8  7C C4 33 78 */	mr r4, r6
/* 801E33BC 001E02FC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801E33C0 001E0300  7D 89 03 A6 */	mtctr r12
/* 801E33C4 001E0304  4E 80 04 21 */	bctrl 
.L_801E33C8:
/* 801E33C8 001E0308  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E33CC 001E030C  7C 08 03 A6 */	mtlr r0
/* 801E33D0 001E0310  38 21 00 10 */	addi r1, r1, 0x10
/* 801E33D4 001E0314  4E 80 00 20 */	blr 

.global "onDamage__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Itemf"
"onDamage__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Itemf":
/* 801E33D8 001E0318  4E 80 00 20 */	blr 

.global "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
"onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle":
/* 801E33DC 001E031C  4E 80 00 20 */	blr 

.global "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
"onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent":
/* 801E33E0 001E0320  4E 80 00 20 */	blr 

.global "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
"onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent":
/* 801E33E4 001E0324  4E 80 00 20 */	blr 

.global "init__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ24Game8StateArg"
"init__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ24Game8StateArg":
/* 801E33E8 001E0328  4E 80 00 20 */	blr 

.global "exec__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
"exec__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item":
/* 801E33EC 001E032C  4E 80 00 20 */	blr 

.global "cleanup__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
"cleanup__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item":
/* 801E33F0 001E0330  4E 80 00 20 */	blr 

.global "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
"resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item":
/* 801E33F4 001E0334  4E 80 00 20 */	blr 

.global "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
"restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item":
/* 801E33F8 001E0338  4E 80 00 20 */	blr 

.global "init__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
"init__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item":
/* 801E33FC 001E033C  4E 80 00 20 */	blr 

.global "exec__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
"exec__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item":
/* 801E3400 001E0340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3404 001E0344  7C 08 02 A6 */	mflr r0
/* 801E3408 001E0348  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E340C 001E034C  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801E3410 001E0350  28 03 00 00 */	cmplwi r3, 0
/* 801E3414 001E0354  41 82 00 14 */	beq .L_801E3428
/* 801E3418 001E0358  81 83 00 00 */	lwz r12, 0(r3)
/* 801E341C 001E035C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E3420 001E0360  7D 89 03 A6 */	mtctr r12
/* 801E3424 001E0364  4E 80 04 21 */	bctrl 
.L_801E3428:
/* 801E3428 001E0368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E342C 001E036C  7C 08 03 A6 */	mtlr r0
/* 801E3430 001E0370  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3434 001E0374  4E 80 00 20 */	blr 

.global "create__Q24Game35StateMachine<Q34Game8ItemRock4Item>Fi"
"create__Q24Game35StateMachine<Q34Game8ItemRock4Item>Fi":
/* 801E3438 001E0378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E343C 001E037C  7C 08 02 A6 */	mflr r0
/* 801E3440 001E0380  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E3444 001E0384  38 00 00 00 */	li r0, 0
/* 801E3448 001E0388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E344C 001E038C  7C 7F 1B 78 */	mr r31, r3
/* 801E3450 001E0390  90 83 00 0C */	stw r4, 0xc(r3)
/* 801E3454 001E0394  90 03 00 08 */	stw r0, 8(r3)
/* 801E3458 001E0398  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801E345C 001E039C  54 03 10 3A */	slwi r3, r0, 2
/* 801E3460 001E03A0  4B E4 0B 4D */	bl __nwa__FUl
/* 801E3464 001E03A4  90 7F 00 04 */	stw r3, 4(r31)
/* 801E3468 001E03A8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801E346C 001E03AC  54 03 10 3A */	slwi r3, r0, 2
/* 801E3470 001E03B0  4B E4 0B 3D */	bl __nwa__FUl
/* 801E3474 001E03B4  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801E3478 001E03B8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801E347C 001E03BC  54 03 10 3A */	slwi r3, r0, 2
/* 801E3480 001E03C0  4B E4 0B 2D */	bl __nwa__FUl
/* 801E3484 001E03C4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801E3488 001E03C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E348C 001E03CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E3490 001E03D0  7C 08 03 A6 */	mtlr r0
/* 801E3494 001E03D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3498 001E03D8  4E 80 00 20 */	blr 

.global "transit__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
"transit__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg":
/* 801E349C 001E03DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E34A0 001E03E0  7C 08 02 A6 */	mflr r0
/* 801E34A4 001E03E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E34A8 001E03E8  54 A0 10 3A */	slwi r0, r5, 2
/* 801E34AC 001E03EC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801E34B0 001E03F0  7C 7B 1B 78 */	mr r27, r3
/* 801E34B4 001E03F4  7C 9C 23 78 */	mr r28, r4
/* 801E34B8 001E03F8  7C DD 33 78 */	mr r29, r6
/* 801E34BC 001E03FC  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801E34C0 001E0400  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801E34C4 001E0404  28 1E 00 00 */	cmplwi r30, 0
/* 801E34C8 001E0408  7F E3 00 2E */	lwzx r31, r3, r0
/* 801E34CC 001E040C  41 82 00 20 */	beq .L_801E34EC
/* 801E34D0 001E0410  7F C3 F3 78 */	mr r3, r30
/* 801E34D4 001E0414  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E34D8 001E0418  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E34DC 001E041C  7D 89 03 A6 */	mtctr r12
/* 801E34E0 001E0420  4E 80 04 21 */	bctrl 
/* 801E34E4 001E0424  80 1E 00 04 */	lwz r0, 4(r30)
/* 801E34E8 001E0428  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801E34EC:
/* 801E34EC 001E042C  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801E34F0 001E0430  7C 1F 00 00 */	cmpw r31, r0
/* 801E34F4 001E0434  41 80 00 08 */	blt .L_801E34FC
.L_801E34F8:
/* 801E34F8 001E0438  48 00 00 00 */	b .L_801E34F8
.L_801E34FC:
/* 801E34FC 001E043C  80 7B 00 04 */	lwz r3, 4(r27)
/* 801E3500 001E0440  57 E0 10 3A */	slwi r0, r31, 2
/* 801E3504 001E0444  7F 84 E3 78 */	mr r4, r28
/* 801E3508 001E0448  7F A5 EB 78 */	mr r5, r29
/* 801E350C 001E044C  7C 63 00 2E */	lwzx r3, r3, r0
/* 801E3510 001E0450  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801E3514 001E0454  81 83 00 00 */	lwz r12, 0(r3)
/* 801E3518 001E0458  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E351C 001E045C  7D 89 03 A6 */	mtctr r12
/* 801E3520 001E0460  4E 80 04 21 */	bctrl 
/* 801E3524 001E0464  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801E3528 001E0468  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E352C 001E046C  7C 08 03 A6 */	mtlr r0
/* 801E3530 001E0470  38 21 00 20 */	addi r1, r1, 0x20
/* 801E3534 001E0474  4E 80 00 20 */	blr 

.global "registerState__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ24Game31FSMState<Q34Game8ItemRock4Item>"
"registerState__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ24Game31FSMState<Q34Game8ItemRock4Item>":
/* 801E3538 001E0478  80 C3 00 08 */	lwz r6, 8(r3)
/* 801E353C 001E047C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801E3540 001E0480  7C 06 00 00 */	cmpw r6, r0
/* 801E3544 001E0484  4C 80 00 20 */	bgelr 
/* 801E3548 001E0488  80 A3 00 04 */	lwz r5, 4(r3)
/* 801E354C 001E048C  54 C0 10 3A */	slwi r0, r6, 2
/* 801E3550 001E0490  7C 85 01 2E */	stwx r4, r5, r0
/* 801E3554 001E0494  80 A4 00 04 */	lwz r5, 4(r4)
/* 801E3558 001E0498  2C 05 00 00 */	cmpwi r5, 0
/* 801E355C 001E049C  41 80 00 10 */	blt .L_801E356C
/* 801E3560 001E04A0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801E3564 001E04A4  7C 05 00 00 */	cmpw r5, r0
/* 801E3568 001E04A8  41 80 00 0C */	blt .L_801E3574
.L_801E356C:
/* 801E356C 001E04AC  38 00 00 00 */	li r0, 0
/* 801E3570 001E04B0  48 00 00 08 */	b .L_801E3578
.L_801E3574:
/* 801E3574 001E04B4  38 00 00 01 */	li r0, 1
.L_801E3578:
/* 801E3578 001E04B8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801E357C 001E04BC  4D 82 00 20 */	beqlr 
/* 801E3580 001E04C0  90 64 00 08 */	stw r3, 8(r4)
/* 801E3584 001E04C4  80 03 00 08 */	lwz r0, 8(r3)
/* 801E3588 001E04C8  80 C4 00 04 */	lwz r6, 4(r4)
/* 801E358C 001E04CC  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801E3590 001E04D0  54 00 10 3A */	slwi r0, r0, 2
/* 801E3594 001E04D4  7C C5 01 2E */	stwx r6, r5, r0
/* 801E3598 001E04D8  80 04 00 04 */	lwz r0, 4(r4)
/* 801E359C 001E04DC  80 A3 00 08 */	lwz r5, 8(r3)
/* 801E35A0 001E04E0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801E35A4 001E04E4  54 00 10 3A */	slwi r0, r0, 2
/* 801E35A8 001E04E8  7C A4 01 2E */	stwx r5, r4, r0
/* 801E35AC 001E04EC  80 83 00 08 */	lwz r4, 8(r3)
/* 801E35B0 001E04F0  38 04 00 01 */	addi r0, r4, 1
/* 801E35B4 001E04F4  90 03 00 08 */	stw r0, 8(r3)
/* 801E35B8 001E04F8  4E 80 00 20 */	blr 

.global "platCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9PlatEvent"
"platCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9PlatEvent":
/* 801E35BC 001E04FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E35C0 001E0500  7C 08 02 A6 */	mflr r0
/* 801E35C4 001E0504  7C 66 1B 78 */	mr r6, r3
/* 801E35C8 001E0508  7C 85 23 78 */	mr r5, r4
/* 801E35CC 001E050C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E35D0 001E0510  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E35D4 001E0514  28 03 00 00 */	cmplwi r3, 0
/* 801E35D8 001E0518  41 82 00 18 */	beq .L_801E35F0
/* 801E35DC 001E051C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E35E0 001E0520  7C C4 33 78 */	mr r4, r6
/* 801E35E4 001E0524  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801E35E8 001E0528  7D 89 03 A6 */	mtctr r12
/* 801E35EC 001E052C  4E 80 04 21 */	bctrl 
.L_801E35F0:
/* 801E35F0 001E0530  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E35F4 001E0534  7C 08 03 A6 */	mtlr r0
/* 801E35F8 001E0538  38 21 00 10 */	addi r1, r1, 0x10
/* 801E35FC 001E053C  4E 80 00 20 */	blr 

.global "collisionCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9CollEvent"
"collisionCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRQ24Game9CollEvent":
/* 801E3600 001E0540  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3604 001E0544  7C 08 02 A6 */	mflr r0
/* 801E3608 001E0548  7C 66 1B 78 */	mr r6, r3
/* 801E360C 001E054C  7C 85 23 78 */	mr r5, r4
/* 801E3610 001E0550  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E3614 001E0554  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E3618 001E0558  28 03 00 00 */	cmplwi r3, 0
/* 801E361C 001E055C  41 82 00 18 */	beq .L_801E3634
/* 801E3620 001E0560  81 83 00 00 */	lwz r12, 0(r3)
/* 801E3624 001E0564  7C C4 33 78 */	mr r4, r6
/* 801E3628 001E0568  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801E362C 001E056C  7D 89 03 A6 */	mtctr r12
/* 801E3630 001E0570  4E 80 04 21 */	bctrl 
.L_801E3634:
/* 801E3634 001E0574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E3638 001E0578  7C 08 03 A6 */	mtlr r0
/* 801E363C 001E057C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3640 001E0580  4E 80 00 20 */	blr 

.global "bounceCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FPQ23Sys8Triangle"
"bounceCallback__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FPQ23Sys8Triangle":
/* 801E3644 001E0584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E3648 001E0588  7C 08 02 A6 */	mflr r0
/* 801E364C 001E058C  7C 66 1B 78 */	mr r6, r3
/* 801E3650 001E0590  7C 85 23 78 */	mr r5, r4
/* 801E3654 001E0594  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E3658 001E0598  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E365C 001E059C  28 03 00 00 */	cmplwi r3, 0
/* 801E3660 001E05A0  41 82 00 18 */	beq .L_801E3678
/* 801E3664 001E05A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E3668 001E05A8  7C C4 33 78 */	mr r4, r6
/* 801E366C 001E05AC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801E3670 001E05B0  7D 89 03 A6 */	mtctr r12
/* 801E3674 001E05B4  4E 80 04 21 */	bctrl 
.L_801E3678:
/* 801E3678 001E05B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E367C 001E05BC  7C 08 03 A6 */	mtlr r0
/* 801E3680 001E05C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801E3684 001E05C4  4E 80 00 20 */	blr 

.global "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent":
/* 801E3688 001E05C8  38 63 FE 88 */	addi r3, r3, -376
/* 801E368C 001E05CC  4B FF FD 08 */	b "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>FRCQ28SysShape8KeyEvent"

.global "@376@onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent":
/* 801E3690 001E05D0  38 63 FE 88 */	addi r3, r3, -376
/* 801E3694 001E05D4  4B FF E1 7C */	b onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent

.global "@48@__dt__Q34Game8ItemRock3MgrFv"
"@48@__dt__Q34Game8ItemRock3MgrFv":
/* 801E3698 001E05D8  38 63 FF D0 */	addi r3, r3, -48
/* 801E369C 001E05DC  4B FF FA 74 */	b __dt__Q34Game8ItemRock3MgrFv
