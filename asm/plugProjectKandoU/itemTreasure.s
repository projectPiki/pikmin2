.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemTreasure_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_804816B8
lbl_804816B8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x6974656D
	.4byte 0x54726561
	.4byte 0x73757265
	.4byte 0x00000000
.global lbl_804816D4
lbl_804816D4:
	.4byte 0x7831345F
	.4byte 0x77686974
	.4byte 0x655F6469
	.4byte 0x67000000
.global lbl_804816E4
lbl_804816E4:
	.4byte 0x6974656D
	.4byte 0x54726561
	.4byte 0x73757265
	.4byte 0x2E637070
	.4byte 0x00000000
.global lbl_804816F8
lbl_804816F8:
	.asciz "P2Assert"
	.skip 3
.global lbl_80481704
lbl_80481704:
	.4byte 0x54726561
	.4byte 0x73757265
	.4byte 0x00000000
	.4byte 0x75736572
	.4byte 0x2F4B616E
	.4byte 0x646F2F6F
	.4byte 0x626A6563
	.4byte 0x74732F74
	.4byte 0x72656173
	.4byte 0x75726500
	.4byte 0x75736572
	.4byte 0x2F416265
	.4byte 0x2F697465
	.4byte 0x6D2F7472
	.4byte 0x65617375
	.4byte 0x72655061
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
	.4byte 0x50656C6C
	.4byte 0x6574496E
	.4byte 0x69744172
	.4byte 0x67000000
	.4byte 0x41726753
	.4byte 0x63616C65
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804BBC18
lbl_804BBC18:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game12ItemTreasure3Mgr
__vt__Q34Game12ItemTreasure3Mgr:
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
	.4byte onLoadResources__Q34Game12ItemTreasure3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game12ItemTreasure3MgrFv
	.4byte "generatorBirth__Q34Game12ItemTreasure3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game12ItemTreasure3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game12ItemTreasure3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game12ItemTreasure3MgrFv
	.4byte birth__Q34Game12ItemTreasure3MgrFv
.global __vt__Q34Game12ItemTreasure13TreasureParms
__vt__Q34Game12ItemTreasure13TreasureParms:
	.4byte 0
	.4byte 0
	.4byte read__Q34Game12ItemTreasure13TreasureParmsFR6Stream
.global __vt__Q34Game12ItemTreasure4Item
__vt__Q34Game12ItemTreasure4Item:
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
	.4byte constructor__Q34Game12ItemTreasure4ItemFv
	.4byte onInit__Q34Game12ItemTreasure4ItemFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q34Game12ItemTreasure4ItemFR8Graphics
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
	.4byte "bounceCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9PlatEvent"
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
	.4byte ignoreAtari__Q34Game12ItemTreasure4ItemFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q34Game12ItemTreasure4ItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte doAI__Q34Game12ItemTreasure4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q34Game12ItemTreasure4ItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q34Game12ItemTreasure4ItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q34Game12ItemTreasure4ItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game12ItemTreasure4ItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game12ItemTreasure4ItemFv
	.4byte "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
.global __vt__Q44Game12ItemTreasure4Item10DummyShape
__vt__Q44Game12ItemTreasure4Item10DummyShape:
	.4byte 0
	.4byte 0
	.4byte getMatrix__Q44Game12ItemTreasure4Item10DummyShapeFi
	.4byte isModel__Q28SysShape9MtxObjectFv
.global __vt__Q28SysShape9MtxObject
__vt__Q28SysShape9MtxObject:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte isModel__Q28SysShape9MtxObjectFv
.global "__vt__Q24Game90WorkItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"
"__vt__Q24Game90WorkItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>":
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
	.4byte "bounceCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>Fv"
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
	.4byte "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
.global "__vt__Q24Game35ItemFSM<Q34Game12ItemTreasure4Item>"
"__vt__Q24Game35ItemFSM<Q34Game12ItemTreasure4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "start__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>"
"__vt__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "start__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"
"__vt__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>":
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
	.4byte "bounceCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>Fv"
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
	.4byte "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
.global __vt__Q34Game12ItemTreasure11NormalState
__vt__Q34Game12ItemTreasure11NormalState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4ItemPQ24Game8StateArg
	.4byte exec__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item
	.4byte cleanup__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Itemf
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent"
.global __vt__Q34Game12ItemTreasure5State
__vt__Q34Game12ItemTreasure5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "cleanup__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game12ItemTreasure5StateFPQ34Game12ItemTreasure4Itemf
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game37ItemState<Q34Game12ItemTreasure4Item>"
"__vt__Q24Game37ItemState<Q34Game12ItemTreasure4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "cleanup__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Itemf"
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game36FSMState<Q34Game12ItemTreasure4Item>"
"__vt__Q24Game36FSMState<Q34Game12ItemTreasure4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "cleanup__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
.global __vt__Q34Game12ItemTreasure3FSM
__vt__Q34Game12ItemTreasure3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12ItemTreasure3FSMFPQ34Game12ItemTreasure4Item
	.4byte "start__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
	.4byte "transit__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515B48
lbl_80515B48:
	.skip 0x4
.global lbl_80515B4C
lbl_80515B4C:
	.skip 0x4
.global mgr__Q24Game12ItemTreasure
mgr__Q24Game12ItemTreasure:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519BD0
lbl_80519BD0:
	.4byte 0x00000000
.global lbl_80519BD4
lbl_80519BD4:
	.float 0.25
.global lbl_80519BD8
lbl_80519BD8:
	.float 0.5
.global lbl_80519BDC
lbl_80519BDC:
	.4byte 0x47000000
.global lbl_80519BE0
lbl_80519BE0:
	.4byte 0x41200000
.global lbl_80519BE4
lbl_80519BE4:
	.4byte 0x43160000
.global lbl_80519BE8
lbl_80519BE8:
	.4byte 0x40400000
	.4byte 0x00000000
.global lbl_80519BF0
lbl_80519BF0:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_80519BF8
lbl_80519BF8:
	.float 1.0
.global lbl_80519BFC
lbl_80519BFC:
	.4byte 0x40A00000
.global lbl_80519C00
lbl_80519C00:
	.4byte 0x3F400000
.global lbl_80519C04
lbl_80519C04:
	.4byte 0x3F59999A
.global lbl_80519C08
lbl_80519C08:
	.4byte 0x61636365
	.4byte 0x6C000000
.global lbl_80519C10
lbl_80519C10:
	.float 0.1
.global lbl_80519C14
lbl_80519C14:
	.4byte 0x3C23D70A
.global lbl_80519C18
lbl_80519C18:
	.4byte 0x40000000
.global lbl_80519C1C
lbl_80519C1C:
	.float 0.3
.global lbl_80519C20
lbl_80519C20:
	.4byte 0x437A0000
.global lbl_80519C24
lbl_80519C24:
	.4byte 0x476A6000
.global lbl_80519C28
lbl_80519C28:
	.4byte 0x443B8000
.global lbl_80519C2C
lbl_80519C2C:
	.4byte 0x44960000
.global lbl_80519C30
lbl_80519C30:
	.4byte 0x44BB8000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game12ItemTreasure3FSMFPQ34Game12ItemTreasure4Item
init__Q34Game12ItemTreasure3FSMFPQ34Game12ItemTreasure4Item:
/* 801F316C 001F00AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3170 001F00B0  7C 08 02 A6 */	mflr r0
/* 801F3174 001F00B4  38 80 00 01 */	li r4, 1
/* 801F3178 001F00B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F317C 001F00BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3180 001F00C0  7C 7F 1B 78 */	mr r31, r3
/* 801F3184 001F00C4  48 00 18 8D */	bl "create__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>Fi"
/* 801F3188 001F00C8  38 60 00 10 */	li r3, 0x10
/* 801F318C 001F00CC  4B E3 0D 19 */	bl __nw__FUl
/* 801F3190 001F00D0  7C 64 1B 79 */	or. r4, r3, r3
/* 801F3194 001F00D4  41 82 00 40 */	beq .L_801F31D4
/* 801F3198 001F00D8  3C 60 80 4C */	lis r3, "__vt__Q24Game36FSMState<Q34Game12ItemTreasure4Item>"@ha
/* 801F319C 001F00DC  3C C0 80 4C */	lis r6, "__vt__Q24Game37ItemState<Q34Game12ItemTreasure4Item>"@ha
/* 801F31A0 001F00E0  38 03 C4 48 */	addi r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemTreasure4Item>"@l
/* 801F31A4 001F00E4  3C A0 80 4C */	lis r5, __vt__Q34Game12ItemTreasure5State@ha
/* 801F31A8 001F00E8  90 04 00 00 */	stw r0, 0(r4)
/* 801F31AC 001F00EC  38 E0 00 00 */	li r7, 0
/* 801F31B0 001F00F0  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemTreasure11NormalState@ha
/* 801F31B4 001F00F4  38 C6 C4 14 */	addi r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemTreasure4Item>"@l
/* 801F31B8 001F00F8  90 E4 00 04 */	stw r7, 4(r4)
/* 801F31BC 001F00FC  38 A5 C3 E0 */	addi r5, r5, __vt__Q34Game12ItemTreasure5State@l
/* 801F31C0 001F0100  38 03 C3 AC */	addi r0, r3, __vt__Q34Game12ItemTreasure11NormalState@l
/* 801F31C4 001F0104  90 E4 00 08 */	stw r7, 8(r4)
/* 801F31C8 001F0108  90 C4 00 00 */	stw r6, 0(r4)
/* 801F31CC 001F010C  90 A4 00 00 */	stw r5, 0(r4)
/* 801F31D0 001F0110  90 04 00 00 */	stw r0, 0(r4)
.L_801F31D4:
/* 801F31D4 001F0114  7F E3 FB 78 */	mr r3, r31
/* 801F31D8 001F0118  48 00 19 39 */	bl "registerState__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ24Game36FSMState<Q34Game12ItemTreasure4Item>"
/* 801F31DC 001F011C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F31E0 001F0120  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F31E4 001F0124  7C 08 03 A6 */	mtlr r0
/* 801F31E8 001F0128  38 21 00 10 */	addi r1, r1, 0x10
/* 801F31EC 001F012C  4E 80 00 20 */	blr 

.global init__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4ItemPQ24Game8StateArg
init__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4ItemPQ24Game8StateArg:
/* 801F31F0 001F0130  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F31F4 001F0134  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 801F31F8 001F0138  4E 80 00 20 */	blr 

.global exec__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item
exec__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item:
/* 801F31FC 001F013C  4E 80 00 20 */	blr 

.global cleanup__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item
cleanup__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item:
/* 801F3200 001F0140  4E 80 00 20 */	blr 

.global onDamage__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Itemf
onDamage__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Itemf:
/* 801F3204 001F0144  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801F3208 001F0148  7C 08 02 A6 */	mflr r0
/* 801F320C 001F014C  90 01 00 84 */	stw r0, 0x84(r1)
/* 801F3210 001F0150  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801F3214 001F0154  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801F3218 001F0158  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 801F321C 001F015C  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 801F3220 001F0160  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801F3224 001F0164  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801F3228 001F0168  FF C0 08 90 */	fmr f30, f1
/* 801F322C 001F016C  7C 9F 23 78 */	mr r31, r4
/* 801F3230 001F0170  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801F3234 001F0174  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801F3238 001F0178  41 82 02 C8 */	beq .L_801F3500
/* 801F323C 001F017C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801F3240 001F0180  2C 00 00 00 */	cmpwi r0, 0
/* 801F3244 001F0184  40 82 02 BC */	bne .L_801F3500
/* 801F3248 001F0188  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801F324C 001F018C  38 80 00 2D */	li r4, 0x2d
/* 801F3250 001F0190  4B FF 41 91 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801F3254 001F0194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F3258 001F0198  40 82 02 A8 */	bne .L_801F3500
/* 801F325C 001F019C  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F3260 001F01A0  4B F7 2F E9 */	bl getBuryDepth__Q24Game6PelletFv
/* 801F3264 001F01A4  FF E0 08 90 */	fmr f31, f1
/* 801F3268 001F01A8  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F326C 001F01AC  4B F7 2F D1 */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F3270 001F01B0  FC 01 F8 00 */	fcmpu cr0, f1, f31
/* 801F3274 001F01B4  40 82 02 8C */	bne .L_801F3500
/* 801F3278 001F01B8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801F327C 001F01BC  38 80 00 2D */	li r4, 0x2d
/* 801F3280 001F01C0  4B FF 41 25 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801F3284 001F01C4  38 A0 00 00 */	li r5, 0
/* 801F3288 001F01C8  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F328C 001F01CC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801F3290 001F01D0  3C C0 80 48 */	lis r6, lbl_804816D4@ha
/* 801F3294 001F01D4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 801F3298 001F01D8  28 05 00 00 */	cmplwi r5, 0
/* 801F329C 001F01DC  38 C6 16 D4 */	addi r6, r6, lbl_804816D4@l
/* 801F32A0 001F01E0  90 A1 00 28 */	stw r5, 0x28(r1)
/* 801F32A4 001F01E4  38 04 BC 9C */	addi r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 801F32A8 001F01E8  90 C1 00 24 */	stw r6, 0x24(r1)
/* 801F32AC 001F01EC  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801F32B0 001F01F0  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801F32B4 001F01F4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801F32B8 001F01F8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801F32BC 001F01FC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801F32C0 001F0200  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 801F32C4 001F0204  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801F32C8 001F0208  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801F32CC 001F020C  90 A1 00 50 */	stw r5, 0x50(r1)
/* 801F32D0 001F0210  90 A1 00 38 */	stw r5, 0x38(r1)
/* 801F32D4 001F0214  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801F32D8 001F0218  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F32DC 001F021C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801F32E0 001F0220  90 A1 00 18 */	stw r5, 0x18(r1)
/* 801F32E4 001F0224  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801F32E8 001F0228  40 82 00 1C */	bne .L_801F3304
/* 801F32EC 001F022C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F32F0 001F0230  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F32F4 001F0234  7D 89 03 A6 */	mtctr r12
/* 801F32F8 001F0238  4E 80 04 21 */	bctrl 
/* 801F32FC 001F023C  90 61 00 18 */	stw r3, 0x18(r1)
/* 801F3300 001F0240  48 00 01 74 */	b .L_801F3474
.L_801F3304:
/* 801F3304 001F0244  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3308 001F0248  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F330C 001F024C  7D 89 03 A6 */	mtctr r12
/* 801F3310 001F0250  4E 80 04 21 */	bctrl 
/* 801F3314 001F0254  90 61 00 18 */	stw r3, 0x18(r1)
/* 801F3318 001F0258  48 00 00 58 */	b .L_801F3370
.L_801F331C:
/* 801F331C 001F025C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F3320 001F0260  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F3324 001F0264  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3328 001F0268  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F332C 001F026C  7D 89 03 A6 */	mtctr r12
/* 801F3330 001F0270  4E 80 04 21 */	bctrl 
/* 801F3334 001F0274  7C 64 1B 78 */	mr r4, r3
/* 801F3338 001F0278  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801F333C 001F027C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3340 001F0280  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F3344 001F0284  7D 89 03 A6 */	mtctr r12
/* 801F3348 001F0288  4E 80 04 21 */	bctrl 
/* 801F334C 001F028C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F3350 001F0290  40 82 01 24 */	bne .L_801F3474
/* 801F3354 001F0294  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F3358 001F0298  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F335C 001F029C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3360 001F02A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F3364 001F02A4  7D 89 03 A6 */	mtctr r12
/* 801F3368 001F02A8  4E 80 04 21 */	bctrl 
/* 801F336C 001F02AC  90 61 00 18 */	stw r3, 0x18(r1)
.L_801F3370:
/* 801F3370 001F02B0  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801F3374 001F02B4  38 61 00 14 */	addi r3, r1, 0x14
/* 801F3378 001F02B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F337C 001F02BC  7D 89 03 A6 */	mtctr r12
/* 801F3380 001F02C0  4E 80 04 21 */	bctrl 
/* 801F3384 001F02C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F3388 001F02C8  41 82 FF 94 */	beq .L_801F331C
/* 801F338C 001F02CC  48 00 00 E8 */	b .L_801F3474
.L_801F3390:
/* 801F3390 001F02D0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F3394 001F02D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3398 001F02D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F339C 001F02DC  7D 89 03 A6 */	mtctr r12
/* 801F33A0 001F02E0  4E 80 04 21 */	bctrl 
/* 801F33A4 001F02E4  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 801F33A8 001F02E8  2C 00 00 04 */	cmpwi r0, 4
/* 801F33AC 001F02EC  40 82 00 0C */	bne .L_801F33B8
/* 801F33B0 001F02F0  38 80 00 00 */	li r4, 0
/* 801F33B4 001F02F4  4B F4 86 9D */	bl movie_begin__Q24Game8CreatureFb
.L_801F33B8:
/* 801F33B8 001F02F8  80 01 00 20 */	lwz r0, 0x20(r1)
/* 801F33BC 001F02FC  28 00 00 00 */	cmplwi r0, 0
/* 801F33C0 001F0300  40 82 00 24 */	bne .L_801F33E4
/* 801F33C4 001F0304  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F33C8 001F0308  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F33CC 001F030C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F33D0 001F0310  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F33D4 001F0314  7D 89 03 A6 */	mtctr r12
/* 801F33D8 001F0318  4E 80 04 21 */	bctrl 
/* 801F33DC 001F031C  90 61 00 18 */	stw r3, 0x18(r1)
/* 801F33E0 001F0320  48 00 00 94 */	b .L_801F3474
.L_801F33E4:
/* 801F33E4 001F0324  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F33E8 001F0328  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F33EC 001F032C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F33F0 001F0330  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F33F4 001F0334  7D 89 03 A6 */	mtctr r12
/* 801F33F8 001F0338  4E 80 04 21 */	bctrl 
/* 801F33FC 001F033C  90 61 00 18 */	stw r3, 0x18(r1)
/* 801F3400 001F0340  48 00 00 58 */	b .L_801F3458
.L_801F3404:
/* 801F3404 001F0344  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F3408 001F0348  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F340C 001F034C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3410 001F0350  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F3414 001F0354  7D 89 03 A6 */	mtctr r12
/* 801F3418 001F0358  4E 80 04 21 */	bctrl 
/* 801F341C 001F035C  7C 64 1B 78 */	mr r4, r3
/* 801F3420 001F0360  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801F3424 001F0364  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3428 001F0368  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F342C 001F036C  7D 89 03 A6 */	mtctr r12
/* 801F3430 001F0370  4E 80 04 21 */	bctrl 
/* 801F3434 001F0374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F3438 001F0378  40 82 00 3C */	bne .L_801F3474
/* 801F343C 001F037C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F3440 001F0380  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F3444 001F0384  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3448 001F0388  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F344C 001F038C  7D 89 03 A6 */	mtctr r12
/* 801F3450 001F0390  4E 80 04 21 */	bctrl 
/* 801F3454 001F0394  90 61 00 18 */	stw r3, 0x18(r1)
.L_801F3458:
/* 801F3458 001F0398  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801F345C 001F039C  38 61 00 14 */	addi r3, r1, 0x14
/* 801F3460 001F03A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F3464 001F03A4  7D 89 03 A6 */	mtctr r12
/* 801F3468 001F03A8  4E 80 04 21 */	bctrl 
/* 801F346C 001F03AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F3470 001F03B0  41 82 FF 94 */	beq .L_801F3404
.L_801F3474:
/* 801F3474 001F03B4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801F3478 001F03B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F347C 001F03BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F3480 001F03C0  7D 89 03 A6 */	mtctr r12
/* 801F3484 001F03C4  4E 80 04 21 */	bctrl 
/* 801F3488 001F03C8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801F348C 001F03CC  7C 04 18 40 */	cmplw r4, r3
/* 801F3490 001F03D0  40 82 FF 00 */	bne .L_801F3390
/* 801F3494 001F03D4  7F E3 FB 78 */	mr r3, r31
/* 801F3498 001F03D8  38 80 00 00 */	li r4, 0
/* 801F349C 001F03DC  4B F4 85 B5 */	bl movie_begin__Q24Game8CreatureFb
/* 801F34A0 001F03E0  80 9F 01 FC */	lwz r4, 0x1fc(r31)
/* 801F34A4 001F03E4  38 61 00 08 */	addi r3, r1, 8
/* 801F34A8 001F03E8  81 84 00 00 */	lwz r12, 0(r4)
/* 801F34AC 001F03EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F34B0 001F03F0  7D 89 03 A6 */	mtctr r12
/* 801F34B4 001F03F4  4E 80 04 21 */	bctrl 
/* 801F34B8 001F03F8  C0 41 00 08 */	lfs f2, 8(r1)
/* 801F34BC 001F03FC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801F34C0 001F0400  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801F34C4 001F0404  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 801F34C8 001F0408  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801F34CC 001F040C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801F34D0 001F0410  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F34D4 001F0414  81 83 00 00 */	lwz r12, 0(r3)
/* 801F34D8 001F0418  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801F34DC 001F041C  7D 89 03 A6 */	mtctr r12
/* 801F34E0 001F0420  4E 80 04 21 */	bctrl 
/* 801F34E4 001F0424  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801F34E8 001F0428  38 81 00 24 */	addi r4, r1, 0x24
/* 801F34EC 001F042C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801F34F0 001F0430  80 1F 01 FC */	lwz r0, 0x1fc(r31)
/* 801F34F4 001F0434  90 03 01 94 */	stw r0, 0x194(r3)
/* 801F34F8 001F0438  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801F34FC 001F043C  48 23 94 D5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_801F3500:
/* 801F3500 001F0440  C0 3F 02 30 */	lfs f1, 0x230(r31)
/* 801F3504 001F0444  7F E3 FB 78 */	mr r3, r31
/* 801F3508 001F0448  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F350C 001F044C  EC 21 F0 2A */	fadds f1, f1, f30
/* 801F3510 001F0450  D0 3F 02 30 */	stfs f1, 0x230(r31)
/* 801F3514 001F0454  C0 5F 01 F4 */	lfs f2, 0x1f4(r31)
/* 801F3518 001F0458  C0 3F 02 30 */	lfs f1, 0x230(r31)
/* 801F351C 001F045C  EC 22 08 28 */	fsubs f1, f2, f1
/* 801F3520 001F0460  D0 3F 01 F4 */	stfs f1, 0x1f4(r31)
/* 801F3524 001F0464  D0 1F 02 30 */	stfs f0, 0x230(r31)
/* 801F3528 001F0468  48 00 09 21 */	bl getCurrMaxLife__Q34Game12ItemTreasure4ItemFv
/* 801F352C 001F046C  FF E0 08 90 */	fmr f31, f1
/* 801F3530 001F0470  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F3534 001F0474  4B F7 2D 09 */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F3538 001F0478  EC 7E F8 24 */	fdivs f3, f30, f31
/* 801F353C 001F047C  C0 82 B8 74 */	lfs f4, lbl_80519BD4@sda21(r2)
/* 801F3540 001F0480  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801F3544 001F0484  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3548 001F0488  EC 24 00 72 */	fmuls f1, f4, f1
/* 801F354C 001F048C  EC 21 10 FC */	fnmsubs f1, f1, f3, f2
/* 801F3550 001F0490  D0 3F 01 F8 */	stfs f1, 0x1f8(r31)
/* 801F3554 001F0494  C0 3F 01 F4 */	lfs f1, 0x1f4(r31)
/* 801F3558 001F0498  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F355C 001F049C  4C 40 13 82 */	cror 2, 0, 2
/* 801F3560 001F04A0  40 82 00 28 */	bne .L_801F3588
/* 801F3564 001F04A4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3568 001F04A8  38 80 38 32 */	li r4, 0x3832
/* 801F356C 001F04AC  38 A0 00 00 */	li r5, 0
/* 801F3570 001F04B0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3574 001F04B4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801F3578 001F04B8  7D 89 03 A6 */	mtctr r12
/* 801F357C 001F04BC  4E 80 04 21 */	bctrl 
/* 801F3580 001F04C0  7F E3 FB 78 */	mr r3, r31
/* 801F3584 001F04C4  48 00 08 95 */	bl setLife__Q34Game12ItemTreasure4ItemFv
.L_801F3588:
/* 801F3588 001F04C8  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 801F358C 001F04CC  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3590 001F04D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F3594 001F04D4  4C 40 13 82 */	cror 2, 0, 2
/* 801F3598 001F04D8  40 82 00 10 */	bne .L_801F35A8
/* 801F359C 001F04DC  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801F35A0 001F04E0  7F E3 FB 78 */	mr r3, r31
/* 801F35A4 001F04E4  48 00 00 29 */	bl releasePellet__Q34Game12ItemTreasure4ItemFv
.L_801F35A8:
/* 801F35A8 001F04E8  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801F35AC 001F04EC  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801F35B0 001F04F0  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801F35B4 001F04F4  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801F35B8 001F04F8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801F35BC 001F04FC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801F35C0 001F0500  7C 08 03 A6 */	mtlr r0
/* 801F35C4 001F0504  38 21 00 80 */	addi r1, r1, 0x80
/* 801F35C8 001F0508  4E 80 00 20 */	blr 

.global releasePellet__Q34Game12ItemTreasure4ItemFv
releasePellet__Q34Game12ItemTreasure4ItemFv:
/* 801F35CC 001F050C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801F35D0 001F0510  7C 08 02 A6 */	mflr r0
/* 801F35D4 001F0514  90 01 00 74 */	stw r0, 0x74(r1)
/* 801F35D8 001F0518  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801F35DC 001F051C  7C 7F 1B 78 */	mr r31, r3
/* 801F35E0 001F0520  80 63 01 FC */	lwz r3, 0x1fc(r3)
/* 801F35E4 001F0524  28 03 00 00 */	cmplwi r3, 0
/* 801F35E8 001F0528  41 82 02 68 */	beq .L_801F3850
/* 801F35EC 001F052C  4B FA C5 B1 */	bl endCapture__Q24Game8CreatureFv
/* 801F35F0 001F0530  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F35F4 001F0534  80 63 03 28 */	lwz r3, 0x328(r3)
/* 801F35F8 001F0538  28 03 00 00 */	cmplwi r3, 0
/* 801F35FC 001F053C  41 82 00 0C */	beq .L_801F3608
/* 801F3600 001F0540  C0 22 B8 78 */	lfs f1, lbl_80519BD8@sda21(r2)
/* 801F3604 001F0544  48 04 93 CD */	bl fadein__Q29TexCaster6CasterFf
.L_801F3608:
/* 801F3608 001F0548  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F360C 001F054C  4B F7 33 BD */	bl getPickRadius__Q24Game6PelletFv
/* 801F3610 001F0550  80 BF 01 9C */	lwz r5, 0x19c(r31)
/* 801F3614 001F0554  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801F3618 001F0558  80 1F 01 A0 */	lwz r0, 0x1a0(r31)
/* 801F361C 001F055C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801F3620 001F0560  81 1F 01 A4 */	lwz r8, 0x1a4(r31)
/* 801F3624 001F0564  38 E4 A7 EC */	addi r7, r4, __vt__Q23efx3Arg@l
/* 801F3628 001F0568  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801F362C 001F056C  38 A3 A7 F8 */	addi r5, r3, __vt__Q23efx5TBase@l
/* 801F3630 001F0570  3C 80 80 4B */	lis r4, __vt__Q23efx8ArgScale@ha
/* 801F3634 001F0574  3C 60 80 4E */	lis r3, __vt__Q23efx10TOtakaraAp@ha
/* 801F3638 001F0578  90 01 00 10 */	stw r0, 0x10(r1)
/* 801F363C 001F057C  38 C4 A2 DC */	addi r6, r4, __vt__Q23efx8ArgScale@l
/* 801F3640 001F0580  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 801F3644 001F0584  38 03 71 3C */	addi r0, r3, __vt__Q23efx10TOtakaraAp@l
/* 801F3648 001F0588  91 01 00 14 */	stw r8, 0x14(r1)
/* 801F364C 001F058C  38 61 00 08 */	addi r3, r1, 8
/* 801F3650 001F0590  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801F3654 001F0594  38 81 00 3C */	addi r4, r1, 0x3c
/* 801F3658 001F0598  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 801F365C 001F059C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801F3660 001F05A0  90 A1 00 08 */	stw r5, 8(r1)
/* 801F3664 001F05A4  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 801F3668 001F05A8  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 801F366C 001F05AC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801F3670 001F05B0  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 801F3674 001F05B4  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 801F3678 001F05B8  90 01 00 08 */	stw r0, 8(r1)
/* 801F367C 001F05BC  48 1C 25 39 */	bl create__Q23efx10TOtakaraApFPQ23efx3Arg
/* 801F3680 001F05C0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3684 001F05C4  38 80 38 33 */	li r4, 0x3833
/* 801F3688 001F05C8  38 A0 00 00 */	li r5, 0
/* 801F368C 001F05CC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3690 001F05D0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801F3694 001F05D4  7D 89 03 A6 */	mtctr r12
/* 801F3698 001F05D8  4E 80 04 21 */	bctrl 
/* 801F369C 001F05DC  4B ED 5F 05 */	bl rand
/* 801F36A0 001F05E0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801F36A4 001F05E4  3C 00 43 30 */	lis r0, 0x4330
/* 801F36A8 001F05E8  90 61 00 54 */	stw r3, 0x54(r1)
/* 801F36AC 001F05EC  C8 62 B8 90 */	lfd f3, lbl_80519BF0@sda21(r2)
/* 801F36B0 001F05F0  90 01 00 50 */	stw r0, 0x50(r1)
/* 801F36B4 001F05F4  C0 42 B8 7C */	lfs f2, lbl_80519BDC@sda21(r2)
/* 801F36B8 001F05F8  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 801F36BC 001F05FC  C0 02 B8 78 */	lfs f0, lbl_80519BD8@sda21(r2)
/* 801F36C0 001F0600  EC 61 18 28 */	fsubs f3, f1, f3
/* 801F36C4 001F0604  C0 22 B8 80 */	lfs f1, lbl_80519BE0@sda21(r2)
/* 801F36C8 001F0608  EC 43 10 24 */	fdivs f2, f3, f2
/* 801F36CC 001F060C  EC 02 00 28 */	fsubs f0, f2, f0
/* 801F36D0 001F0610  EC 01 00 32 */	fmuls f0, f1, f0
/* 801F36D4 001F0614  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801F36D8 001F0618  4B ED 5E C9 */	bl rand
/* 801F36DC 001F061C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801F36E0 001F0620  3C 00 43 30 */	lis r0, 0x4330
/* 801F36E4 001F0624  90 61 00 5C */	stw r3, 0x5c(r1)
/* 801F36E8 001F0628  38 81 00 18 */	addi r4, r1, 0x18
/* 801F36EC 001F062C  C0 02 B8 84 */	lfs f0, lbl_80519BE4@sda21(r2)
/* 801F36F0 001F0630  90 01 00 58 */	stw r0, 0x58(r1)
/* 801F36F4 001F0634  C8 42 B8 90 */	lfd f2, lbl_80519BF0@sda21(r2)
/* 801F36F8 001F0638  C8 21 00 58 */	lfd f1, 0x58(r1)
/* 801F36FC 001F063C  C0 62 B8 7C */	lfs f3, lbl_80519BDC@sda21(r2)
/* 801F3700 001F0640  EC 81 10 28 */	fsubs f4, f1, f2
/* 801F3704 001F0644  C0 22 B8 78 */	lfs f1, lbl_80519BD8@sda21(r2)
/* 801F3708 001F0648  C0 42 B8 80 */	lfs f2, lbl_80519BE0@sda21(r2)
/* 801F370C 001F064C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801F3710 001F0650  EC 04 18 24 */	fdivs f0, f4, f3
/* 801F3714 001F0654  EC 00 08 28 */	fsubs f0, f0, f1
/* 801F3718 001F0658  EC 02 00 32 */	fmuls f0, f2, f0
/* 801F371C 001F065C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801F3720 001F0660  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F3724 001F0664  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3728 001F0668  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801F372C 001F066C  7D 89 03 A6 */	mtctr r12
/* 801F3730 001F0670  4E 80 04 21 */	bctrl 
/* 801F3734 001F0674  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801F3738 001F0678  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801F373C 001F067C  2C 00 00 01 */	cmpwi r0, 1
/* 801F3740 001F0680  40 82 00 9C */	bne .L_801F37DC
/* 801F3744 001F0684  4B ED 5E 5D */	bl rand
/* 801F3748 001F0688  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801F374C 001F068C  3C 00 43 30 */	lis r0, 0x4330
/* 801F3750 001F0690  90 61 00 5C */	stw r3, 0x5c(r1)
/* 801F3754 001F0694  3C 60 80 4B */	lis r3, __vt__Q24Game11GameMessage@ha
/* 801F3758 001F0698  38 A3 05 90 */	addi r5, r3, __vt__Q24Game11GameMessage@l
/* 801F375C 001F069C  3C 60 80 4B */	lis r3, __vt__Q24Game30GameMessageVsBirthTekiTreasure@ha
/* 801F3760 001F06A0  90 01 00 58 */	stw r0, 0x58(r1)
/* 801F3764 001F06A4  38 63 61 30 */	addi r3, r3, __vt__Q24Game30GameMessageVsBirthTekiTreasure@l
/* 801F3768 001F06A8  C8 42 B8 90 */	lfd f2, lbl_80519BF0@sda21(r2)
/* 801F376C 001F06AC  38 00 00 00 */	li r0, 0
/* 801F3770 001F06B0  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 801F3774 001F06B4  38 81 00 24 */	addi r4, r1, 0x24
/* 801F3778 001F06B8  C0 22 B8 7C */	lfs f1, lbl_80519BDC@sda21(r2)
/* 801F377C 001F06BC  EC 40 10 28 */	fsubs f2, f0, f2
/* 801F3780 001F06C0  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801F3784 001F06C4  C0 02 B8 88 */	lfs f0, lbl_80519BE8@sda21(r2)
/* 801F3788 001F06C8  90 61 00 24 */	stw r3, 0x24(r1)
/* 801F378C 001F06CC  EC 42 08 24 */	fdivs f2, f2, f1
/* 801F3790 001F06D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801F3794 001F06D4  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 801F3798 001F06D8  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801F379C 001F06DC  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 801F37A0 001F06E0  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801F37A4 001F06E4  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801F37A8 001F06E8  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801F37AC 001F06EC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801F37B0 001F06F0  FC 00 00 1E */	fctiwz f0, f0
/* 801F37B4 001F06F4  98 01 00 38 */	stb r0, 0x38(r1)
/* 801F37B8 001F06F8  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 801F37BC 001F06FC  80 A1 00 54 */	lwz r5, 0x54(r1)
/* 801F37C0 001F0700  38 05 00 01 */	addi r0, r5, 1
/* 801F37C4 001F0704  90 01 00 34 */	stw r0, 0x34(r1)
/* 801F37C8 001F0708  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801F37CC 001F070C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F37D0 001F0710  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801F37D4 001F0714  7D 89 03 A6 */	mtctr r12
/* 801F37D8 001F0718  4E 80 04 21 */	bctrl 
.L_801F37DC:
/* 801F37DC 001F071C  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F37E0 001F0720  48 03 B4 51 */	bl finish__Q24Game11TSoundEventFv
/* 801F37E4 001F0724  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F37E8 001F0728  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F37EC 001F072C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F37F0 001F0730  7D 89 03 A6 */	mtctr r12
/* 801F37F4 001F0734  4E 80 04 21 */	bctrl 
/* 801F37F8 001F0738  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F37FC 001F073C  41 82 00 20 */	beq .L_801F381C
/* 801F3800 001F0740  3C 60 80 48 */	lis r3, lbl_804816E4@ha
/* 801F3804 001F0744  3C A0 80 48 */	lis r5, lbl_804816F8@ha
/* 801F3808 001F0748  38 63 16 E4 */	addi r3, r3, lbl_804816E4@l
/* 801F380C 001F074C  38 80 01 47 */	li r4, 0x147
/* 801F3810 001F0750  38 A5 16 F8 */	addi r5, r5, lbl_804816F8@l
/* 801F3814 001F0754  4C C6 31 82 */	crclr 6
/* 801F3818 001F0758  4B E3 6E 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F381C:
/* 801F381C 001F075C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3820 001F0760  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3824 001F0764  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 801F3828 001F0768  7D 89 03 A6 */	mtctr r12
/* 801F382C 001F076C  4E 80 04 21 */	bctrl 
/* 801F3830 001F0770  7F E3 FB 78 */	mr r3, r31
/* 801F3834 001F0774  38 80 00 00 */	li r4, 0
/* 801F3838 001F0778  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F383C 001F077C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F3840 001F0780  7D 89 03 A6 */	mtctr r12
/* 801F3844 001F0784  4E 80 04 21 */	bctrl 
/* 801F3848 001F0788  38 00 00 00 */	li r0, 0
/* 801F384C 001F078C  90 1F 01 FC */	stw r0, 0x1fc(r31)
.L_801F3850:
/* 801F3850 001F0790  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801F3854 001F0794  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801F3858 001F0798  7C 08 03 A6 */	mtlr r0
/* 801F385C 001F079C  38 21 00 70 */	addi r1, r1, 0x70
/* 801F3860 001F07A0  4E 80 00 20 */	blr 

.global constructor__Q34Game12ItemTreasure4ItemFv
constructor__Q34Game12ItemTreasure4ItemFv:
/* 801F3864 001F07A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3868 001F07A8  7C 08 02 A6 */	mflr r0
/* 801F386C 001F07AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F3870 001F07B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3874 001F07B4  7C 7F 1B 78 */	mr r31, r3
/* 801F3878 001F07B8  38 60 00 84 */	li r3, 0x84
/* 801F387C 001F07BC  4B E3 06 29 */	bl __nw__FUl
/* 801F3880 001F07C0  7C 60 1B 79 */	or. r0, r3, r3
/* 801F3884 001F07C4  41 82 00 10 */	beq .L_801F3894
/* 801F3888 001F07C8  7F E4 FB 78 */	mr r4, r31
/* 801F388C 001F07CC  48 26 DD 95 */	bl __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
/* 801F3890 001F07D0  7C 60 1B 78 */	mr r0, r3
.L_801F3894:
/* 801F3894 001F07D4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801F3898 001F07D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F389C 001F07DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F38A0 001F07E0  7C 08 03 A6 */	mtlr r0
/* 801F38A4 001F07E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F38A8 001F07E8  4E 80 00 20 */	blr 

.global onInit__Q34Game12ItemTreasure4ItemFPQ24Game15CreatureInitArg
onInit__Q34Game12ItemTreasure4ItemFPQ24Game15CreatureInitArg:
/* 801F38AC 001F07EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F38B0 001F07F0  7C 08 02 A6 */	mflr r0
/* 801F38B4 001F07F4  38 A0 00 00 */	li r5, 0
/* 801F38B8 001F07F8  38 C0 00 00 */	li r6, 0
/* 801F38BC 001F07FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F38C0 001F0800  38 00 00 00 */	li r0, 0
/* 801F38C4 001F0804  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F38C8 001F0808  7C 7F 1B 78 */	mr r31, r3
/* 801F38CC 001F080C  7F E4 FB 78 */	mr r4, r31
/* 801F38D0 001F0810  90 03 01 74 */	stw r0, 0x174(r3)
/* 801F38D4 001F0814  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F38D8 001F0818  81 83 00 00 */	lwz r12, 0(r3)
/* 801F38DC 001F081C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F38E0 001F0820  7D 89 03 A6 */	mtctr r12
/* 801F38E4 001F0824  4E 80 04 21 */	bctrl 
/* 801F38E8 001F0828  7F E3 FB 78 */	mr r3, r31
/* 801F38EC 001F082C  38 80 00 01 */	li r4, 1
/* 801F38F0 001F0830  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F38F4 001F0834  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F38F8 001F0838  7D 89 03 A6 */	mtctr r12
/* 801F38FC 001F083C  4E 80 04 21 */	bctrl 
/* 801F3900 001F0840  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 801F3904 001F0844  38 9F 01 EC */	addi r4, r31, 0x1ec
/* 801F3908 001F0848  38 DF 01 C4 */	addi r6, r31, 0x1c4
/* 801F390C 001F084C  38 A0 00 00 */	li r5, 0
/* 801F3910 001F0850  38 E0 00 00 */	li r7, 0
/* 801F3914 001F0854  4B F4 07 9D */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 801F3918 001F0858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F391C 001F085C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3920 001F0860  7C 08 03 A6 */	mtlr r0
/* 801F3924 001F0864  38 21 00 10 */	addi r1, r1, 0x10
/* 801F3928 001F0868  4E 80 00 20 */	blr 

.global "start__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
"start__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg":
/* 801F392C 001F086C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3930 001F0870  7C 08 02 A6 */	mflr r0
/* 801F3934 001F0874  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F3938 001F0878  38 00 00 00 */	li r0, 0
/* 801F393C 001F087C  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801F3940 001F0880  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3944 001F0884  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F3948 001F0888  7D 89 03 A6 */	mtctr r12
/* 801F394C 001F088C  4E 80 04 21 */	bctrl 
/* 801F3950 001F0890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F3954 001F0894  7C 08 03 A6 */	mtlr r0
/* 801F3958 001F0898  38 21 00 10 */	addi r1, r1, 0x10
/* 801F395C 001F089C  4E 80 00 20 */	blr 

.global onSetPosition__Q34Game12ItemTreasure4ItemFv
onSetPosition__Q34Game12ItemTreasure4ItemFv:
/* 801F3960 001F08A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3964 001F08A4  7C 08 02 A6 */	mflr r0
/* 801F3968 001F08A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F396C 001F08AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3970 001F08B0  7C 7F 1B 78 */	mr r31, r3
/* 801F3974 001F08B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3978 001F08B8  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 801F397C 001F08BC  7D 89 03 A6 */	mtctr r12
/* 801F3980 001F08C0  4E 80 04 21 */	bctrl 
/* 801F3984 001F08C4  38 7F 01 38 */	addi r3, r31, 0x138
/* 801F3988 001F08C8  38 9F 01 9C */	addi r4, r31, 0x19c
/* 801F398C 001F08CC  48 23 4E B5 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 801F3990 001F08D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F3994 001F08D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3998 001F08D8  7C 08 03 A6 */	mtlr r0
/* 801F399C 001F08DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F39A0 001F08E0  4E 80 00 20 */	blr 

.global updateBoundSphere__Q34Game12ItemTreasure4ItemFv
updateBoundSphere__Q34Game12ItemTreasure4ItemFv:
/* 801F39A4 001F08E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F39A8 001F08E8  7C 08 02 A6 */	mflr r0
/* 801F39AC 001F08EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F39B0 001F08F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F39B4 001F08F4  7C 7F 1B 78 */	mr r31, r3
/* 801F39B8 001F08F8  48 00 06 49 */	bl getWorkRadius__Q34Game12ItemTreasure4ItemFv
/* 801F39BC 001F08FC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801F39C0 001F0900  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
/* 801F39C4 001F0904  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801F39C8 001F0908  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 801F39CC 001F090C  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801F39D0 001F0910  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 801F39D4 001F0914  D0 3F 01 D0 */	stfs f1, 0x1d0(r31)
/* 801F39D8 001F0918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F39DC 001F091C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F39E0 001F0920  7C 08 03 A6 */	mtlr r0
/* 801F39E4 001F0924  38 21 00 10 */	addi r1, r1, 0x10
/* 801F39E8 001F0928  4E 80 00 20 */	blr 

.global doAI__Q34Game12ItemTreasure4ItemFv
doAI__Q34Game12ItemTreasure4ItemFv:
/* 801F39EC 001F092C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F39F0 001F0930  7C 08 02 A6 */	mflr r0
/* 801F39F4 001F0934  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F39F8 001F0938  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801F39FC 001F093C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801F3A00 001F0940  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801F3A04 001F0944  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801F3A08 001F0948  7C 7E 1B 78 */	mr r30, r3
/* 801F3A0C 001F094C  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F3A10 001F0950  7F C4 F3 78 */	mr r4, r30
/* 801F3A14 001F0954  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3A18 001F0958  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F3A1C 001F095C  7D 89 03 A6 */	mtctr r12
/* 801F3A20 001F0960  4E 80 04 21 */	bctrl 
/* 801F3A24 001F0964  7F C3 F3 78 */	mr r3, r30
/* 801F3A28 001F0968  48 00 05 D9 */	bl getWorkRadius__Q34Game12ItemTreasure4ItemFv
/* 801F3A2C 001F096C  D0 3E 01 D0 */	stfs f1, 0x1d0(r30)
/* 801F3A30 001F0970  7F C3 F3 78 */	mr r3, r30
/* 801F3A34 001F0974  4B FD 8B D9 */	bl updateCollTree__Q24Game8BaseItemFv
/* 801F3A38 001F0978  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 801F3A3C 001F097C  7F C3 F3 78 */	mr r3, r30
/* 801F3A40 001F0980  83 E4 00 00 */	lwz r31, 0(r4)
/* 801F3A44 001F0984  48 00 05 BD */	bl getWorkRadius__Q34Game12ItemTreasure4ItemFv
/* 801F3A48 001F0988  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 801F3A4C 001F098C  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3A50 001F0990  28 03 00 00 */	cmplwi r3, 0
/* 801F3A54 001F0994  41 82 00 7C */	beq .L_801F3AD0
/* 801F3A58 001F0998  4B F7 27 E5 */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F3A5C 001F099C  C0 02 B8 78 */	lfs f0, lbl_80519BD8@sda21(r2)
/* 801F3A60 001F09A0  38 81 00 08 */	addi r4, r1, 8
/* 801F3A64 001F09A4  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3A68 001F09A8  EC 20 00 72 */	fmuls f1, f0, f1
/* 801F3A6C 001F09AC  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 801F3A70 001F09B0  38 63 01 38 */	addi r3, r3, 0x138
/* 801F3A74 001F09B4  EF E1 00 28 */	fsubs f31, f1, f0
/* 801F3A78 001F09B8  4B EF 68 55 */	bl PSMTXCopy
/* 801F3A7C 001F09BC  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3A80 001F09C0  38 81 00 08 */	addi r4, r1, 8
/* 801F3A84 001F09C4  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 801F3A88 001F09C8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801F3A8C 001F09CC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801F3A90 001F09D0  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3A94 001F09D4  4B FA C0 69 */	bl updateCapture__Q24Game8CreatureFR7Matrixf
/* 801F3A98 001F09D8  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3A9C 001F09DC  4B F7 27 A1 */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F3AA0 001F09E0  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 801F3AA4 001F09E4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801F3AA8 001F09E8  4C 41 13 82 */	cror 2, 1, 2
/* 801F3AAC 001F09EC  40 82 00 18 */	bne .L_801F3AC4
/* 801F3AB0 001F09F0  80 9E 01 FC */	lwz r4, 0x1fc(r30)
/* 801F3AB4 001F09F4  38 00 FF CB */	li r0, -53
/* 801F3AB8 001F09F8  88 64 00 D8 */	lbz r3, 0xd8(r4)
/* 801F3ABC 001F09FC  7C 60 00 38 */	and r0, r3, r0
/* 801F3AC0 001F0A00  98 04 00 D8 */	stb r0, 0xd8(r4)
.L_801F3AC4:
/* 801F3AC4 001F0A04  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 801F3AC8 001F0A08  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3ACC 001F0A0C  D0 03 03 20 */	stfs f0, 0x320(r3)
.L_801F3AD0:
/* 801F3AD0 001F0A10  7F C3 F3 78 */	mr r3, r30
/* 801F3AD4 001F0A14  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F3AD8 001F0A18  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801F3ADC 001F0A1C  7D 89 03 A6 */	mtctr r12
/* 801F3AE0 001F0A20  4E 80 04 21 */	bctrl 
/* 801F3AE4 001F0A24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F3AE8 001F0A28  41 82 00 64 */	beq .L_801F3B4C
/* 801F3AEC 001F0A2C  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 801F3AF0 001F0A30  48 03 B1 51 */	bl update__Q24Game11TSoundEventFv
/* 801F3AF4 001F0A34  2C 03 00 02 */	cmpwi r3, 2
/* 801F3AF8 001F0A38  41 82 00 08 */	beq .L_801F3B00
/* 801F3AFC 001F0A3C  48 00 00 50 */	b .L_801F3B4C
.L_801F3B00:
/* 801F3B00 001F0A40  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F3B04 001F0A44  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3B08 001F0A48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F3B0C 001F0A4C  7D 89 03 A6 */	mtctr r12
/* 801F3B10 001F0A50  4E 80 04 21 */	bctrl 
/* 801F3B14 001F0A54  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F3B18 001F0A58  41 82 00 20 */	beq .L_801F3B38
/* 801F3B1C 001F0A5C  3C 60 80 48 */	lis r3, lbl_804816E4@ha
/* 801F3B20 001F0A60  3C A0 80 48 */	lis r5, lbl_804816F8@ha
/* 801F3B24 001F0A64  38 63 16 E4 */	addi r3, r3, lbl_804816E4@l
/* 801F3B28 001F0A68  38 80 01 96 */	li r4, 0x196
/* 801F3B2C 001F0A6C  38 A5 16 F8 */	addi r5, r5, lbl_804816F8@l
/* 801F3B30 001F0A70  4C C6 31 82 */	crclr 6
/* 801F3B34 001F0A74  4B E3 6B 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F3B38:
/* 801F3B38 001F0A78  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F3B3C 001F0A7C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3B40 001F0A80  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 801F3B44 001F0A84  7D 89 03 A6 */	mtctr r12
/* 801F3B48 001F0A88  4E 80 04 21 */	bctrl 
.L_801F3B4C:
/* 801F3B4C 001F0A8C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801F3B50 001F0A90  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F3B54 001F0A94  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801F3B58 001F0A98  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801F3B5C 001F0A9C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801F3B60 001F0AA0  7C 08 03 A6 */	mtlr r0
/* 801F3B64 001F0AA4  38 21 00 50 */	addi r1, r1, 0x50
/* 801F3B68 001F0AA8  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game12ItemTreasure4ItemFR8Graphics
doDirectDraw__Q34Game12ItemTreasure4ItemFR8Graphics:
/* 801F3B6C 001F0AAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3B70 001F0AB0  7C 08 02 A6 */	mflr r0
/* 801F3B74 001F0AB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F3B78 001F0AB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3B7C 001F0ABC  7C 9F 23 78 */	mr r31, r4
/* 801F3B80 001F0AC0  38 80 00 00 */	li r4, 0
/* 801F3B84 001F0AC4  93 C1 00 08 */	stw r30, 8(r1)
/* 801F3B88 001F0AC8  7C 7E 1B 78 */	mr r30, r3
/* 801F3B8C 001F0ACC  7F E3 FB 78 */	mr r3, r31
/* 801F3B90 001F0AD0  48 23 1C 8D */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 801F3B94 001F0AD4  C0 3E 01 D0 */	lfs f1, 0x1d0(r30)
/* 801F3B98 001F0AD8  7F E3 FB 78 */	mr r3, r31
/* 801F3B9C 001F0ADC  38 9E 01 C4 */	addi r4, r30, 0x1c4
/* 801F3BA0 001F0AE0  48 23 1F 0D */	bl "drawSphere__8GraphicsFR10Vector3<f>f"
/* 801F3BA4 001F0AE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F3BA8 001F0AE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3BAC 001F0AEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F3BB0 001F0AF0  7C 08 03 A6 */	mtlr r0
/* 801F3BB4 001F0AF4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F3BB8 001F0AF8  4E 80 00 20 */	blr 

.global "getVectorField__Q34Game12ItemTreasure4ItemFRQ23Sys6SphereR10Vector3<f>"
"getVectorField__Q34Game12ItemTreasure4ItemFRQ23Sys6SphereR10Vector3<f>":
/* 801F3BBC 001F0AFC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F3BC0 001F0B00  7C 08 02 A6 */	mflr r0
/* 801F3BC4 001F0B04  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F3BC8 001F0B08  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801F3BCC 001F0B0C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801F3BD0 001F0B10  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801F3BD4 001F0B14  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801F3BD8 001F0B18  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 801F3BDC 001F0B1C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 801F3BE0 001F0B20  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 801F3BE4 001F0B24  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 801F3BE8 001F0B28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3BEC 001F0B2C  C0 04 00 04 */	lfs f0, 4(r4)
/* 801F3BF0 001F0B30  7C BF 2B 78 */	mr r31, r5
/* 801F3BF4 001F0B34  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801F3BF8 001F0B38  C0 63 01 A4 */	lfs f3, 0x1a4(r3)
/* 801F3BFC 001F0B3C  EF E1 00 28 */	fsubs f31, f1, f0
/* 801F3C00 001F0B40  C0 44 00 08 */	lfs f2, 8(r4)
/* 801F3C04 001F0B44  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801F3C08 001F0B48  EF 83 10 28 */	fsubs f28, f3, f2
/* 801F3C0C 001F0B4C  C0 04 00 00 */	lfs f0, 0(r4)
/* 801F3C10 001F0B50  EC 5F 07 F2 */	fmuls f2, f31, f31
/* 801F3C14 001F0B54  EF A1 00 28 */	fsubs f29, f1, f0
/* 801F3C18 001F0B58  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3C1C 001F0B5C  EC 7C 07 32 */	fmuls f3, f28, f28
/* 801F3C20 001F0B60  EC 3D 17 7A */	fmadds f1, f29, f29, f2
/* 801F3C24 001F0B64  EF C3 08 2A */	fadds f30, f3, f1
/* 801F3C28 001F0B68  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801F3C2C 001F0B6C  40 81 00 14 */	ble .L_801F3C40
/* 801F3C30 001F0B70  40 81 00 14 */	ble .L_801F3C44
/* 801F3C34 001F0B74  FC 00 F0 34 */	frsqrte f0, f30
/* 801F3C38 001F0B78  EF C0 07 B2 */	fmuls f30, f0, f30
/* 801F3C3C 001F0B7C  48 00 00 08 */	b .L_801F3C44
.L_801F3C40:
/* 801F3C40 001F0B80  FF C0 00 90 */	fmr f30, f0
.L_801F3C44:
/* 801F3C44 001F0B84  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3C48 001F0B88  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801F3C4C 001F0B8C  40 81 00 1C */	ble .L_801F3C68
/* 801F3C50 001F0B90  C0 02 B8 98 */	lfs f0, lbl_80519BF8@sda21(r2)
/* 801F3C54 001F0B94  EC 00 F0 24 */	fdivs f0, f0, f30
/* 801F3C58 001F0B98  EF BD 00 32 */	fmuls f29, f29, f0
/* 801F3C5C 001F0B9C  EF FF 00 32 */	fmuls f31, f31, f0
/* 801F3C60 001F0BA0  EF 9C 00 32 */	fmuls f28, f28, f0
/* 801F3C64 001F0BA4  48 00 00 08 */	b .L_801F3C6C
.L_801F3C68:
/* 801F3C68 001F0BA8  FF C0 00 90 */	fmr f30, f0
.L_801F3C6C:
/* 801F3C6C 001F0BAC  48 00 03 95 */	bl getWorkRadius__Q34Game12ItemTreasure4ItemFv
/* 801F3C70 001F0BB0  C0 02 B8 9C */	lfs f0, lbl_80519BFC@sda21(r2)
/* 801F3C74 001F0BB4  EC 00 08 2A */	fadds f0, f0, f1
/* 801F3C78 001F0BB8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801F3C7C 001F0BBC  40 81 00 14 */	ble .L_801F3C90
/* 801F3C80 001F0BC0  D3 BF 00 00 */	stfs f29, 0(r31)
/* 801F3C84 001F0BC4  D3 FF 00 04 */	stfs f31, 4(r31)
/* 801F3C88 001F0BC8  D3 9F 00 08 */	stfs f28, 8(r31)
/* 801F3C8C 001F0BCC  48 00 00 14 */	b .L_801F3CA0
.L_801F3C90:
/* 801F3C90 001F0BD0  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3C94 001F0BD4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801F3C98 001F0BD8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801F3C9C 001F0BDC  D0 1F 00 08 */	stfs f0, 8(r31)
.L_801F3CA0:
/* 801F3CA0 001F0BE0  38 60 00 01 */	li r3, 1
/* 801F3CA4 001F0BE4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801F3CA8 001F0BE8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801F3CAC 001F0BEC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801F3CB0 001F0BF0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801F3CB4 001F0BF4  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 801F3CB8 001F0BF8  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 801F3CBC 001F0BFC  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 801F3CC0 001F0C00  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 801F3CC4 001F0C04  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F3CC8 001F0C08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3CCC 001F0C0C  7C 08 03 A6 */	mtlr r0
/* 801F3CD0 001F0C10  38 21 00 50 */	addi r1, r1, 0x50
/* 801F3CD4 001F0C14  4E 80 00 20 */	blr 

.global getWorkDistance__Q34Game12ItemTreasure4ItemFRQ23Sys6Sphere
getWorkDistance__Q34Game12ItemTreasure4ItemFRQ23Sys6Sphere:
/* 801F3CD8 001F0C18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F3CDC 001F0C1C  7C 08 02 A6 */	mflr r0
/* 801F3CE0 001F0C20  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F3CE4 001F0C24  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801F3CE8 001F0C28  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801F3CEC 001F0C2C  C0 04 00 04 */	lfs f0, 4(r4)
/* 801F3CF0 001F0C30  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801F3CF4 001F0C34  C0 63 01 A4 */	lfs f3, 0x1a4(r3)
/* 801F3CF8 001F0C38  EC 81 00 28 */	fsubs f4, f1, f0
/* 801F3CFC 001F0C3C  C0 44 00 08 */	lfs f2, 8(r4)
/* 801F3D00 001F0C40  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801F3D04 001F0C44  EC 43 10 28 */	fsubs f2, f3, f2
/* 801F3D08 001F0C48  C0 04 00 00 */	lfs f0, 0(r4)
/* 801F3D0C 001F0C4C  EC 64 01 32 */	fmuls f3, f4, f4
/* 801F3D10 001F0C50  EC 21 00 28 */	fsubs f1, f1, f0
/* 801F3D14 001F0C54  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F3D18 001F0C58  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801F3D1C 001F0C5C  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 801F3D20 001F0C60  EF E2 08 2A */	fadds f31, f2, f1
/* 801F3D24 001F0C64  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801F3D28 001F0C68  40 81 00 14 */	ble .L_801F3D3C
/* 801F3D2C 001F0C6C  40 81 00 14 */	ble .L_801F3D40
/* 801F3D30 001F0C70  FC 00 F8 34 */	frsqrte f0, f31
/* 801F3D34 001F0C74  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801F3D38 001F0C78  48 00 00 08 */	b .L_801F3D40
.L_801F3D3C:
/* 801F3D3C 001F0C7C  FF E0 00 90 */	fmr f31, f0
.L_801F3D40:
/* 801F3D40 001F0C80  48 00 02 C1 */	bl getWorkRadius__Q34Game12ItemTreasure4ItemFv
/* 801F3D44 001F0C84  EC 3F 08 28 */	fsubs f1, f31, f1
/* 801F3D48 001F0C88  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801F3D4C 001F0C8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F3D50 001F0C90  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801F3D54 001F0C94  7C 08 03 A6 */	mtlr r0
/* 801F3D58 001F0C98  38 21 00 20 */	addi r1, r1, 0x20
/* 801F3D5C 001F0C9C  4E 80 00 20 */	blr 

.global setTreasure__Q34Game12ItemTreasure4ItemFPQ24Game6Pellet
setTreasure__Q34Game12ItemTreasure4ItemFPQ24Game6Pellet:
/* 801F3D60 001F0CA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F3D64 001F0CA4  7C 08 02 A6 */	mflr r0
/* 801F3D68 001F0CA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F3D6C 001F0CAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F3D70 001F0CB0  7C 9F 23 78 */	mr r31, r4
/* 801F3D74 001F0CB4  38 81 00 08 */	addi r4, r1, 8
/* 801F3D78 001F0CB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F3D7C 001F0CBC  7C 7E 1B 78 */	mr r30, r3
/* 801F3D80 001F0CC0  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801F3D84 001F0CC4  38 7E 02 00 */	addi r3, r30, 0x200
/* 801F3D88 001F0CC8  D0 01 00 08 */	stfs f0, 8(r1)
/* 801F3D8C 001F0CCC  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 801F3D90 001F0CD0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801F3D94 001F0CD4  C0 1E 01 A4 */	lfs f0, 0x1a4(r30)
/* 801F3D98 001F0CD8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801F3D9C 001F0CDC  48 23 4A A5 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 801F3DA0 001F0CE0  93 FE 01 FC */	stw r31, 0x1fc(r30)
/* 801F3DA4 001F0CE4  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3DA8 001F0CE8  28 03 00 00 */	cmplwi r3, 0
/* 801F3DAC 001F0CEC  41 82 00 54 */	beq .L_801F3E00
/* 801F3DB0 001F0CF0  38 9E 02 00 */	addi r4, r30, 0x200
/* 801F3DB4 001F0CF4  4B FA BC F5 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 801F3DB8 001F0CF8  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3DBC 001F0CFC  4B F7 24 8D */	bl getBuryDepth__Q24Game6PelletFv
/* 801F3DC0 001F0D00  D0 3E 01 F8 */	stfs f1, 0x1f8(r30)
/* 801F3DC4 001F0D04  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801F3DC8 001F0D08  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801F3DCC 001F0D0C  2C 00 00 01 */	cmpwi r0, 1
/* 801F3DD0 001F0D10  40 82 00 1C */	bne .L_801F3DEC
/* 801F3DD4 001F0D14  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801F3DD8 001F0D18  88 03 03 2C */	lbz r0, 0x32c(r3)
/* 801F3DDC 001F0D1C  28 00 00 06 */	cmplwi r0, 6
/* 801F3DE0 001F0D20  40 82 00 0C */	bne .L_801F3DEC
/* 801F3DE4 001F0D24  C0 0D 84 88 */	lfs f0, cBedamaYellowDepth__13VsOtakaraName@sda21(r13)
/* 801F3DE8 001F0D28  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
.L_801F3DEC:
/* 801F3DEC 001F0D2C  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 801F3DF0 001F0D30  7F C3 F3 78 */	mr r3, r30
/* 801F3DF4 001F0D34  80 9E 01 FC */	lwz r4, 0x1fc(r30)
/* 801F3DF8 001F0D38  D0 04 03 20 */	stfs f0, 0x320(r4)
/* 801F3DFC 001F0D3C  48 00 00 1D */	bl setLife__Q34Game12ItemTreasure4ItemFv
.L_801F3E00:
/* 801F3E00 001F0D40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F3E04 001F0D44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F3E08 001F0D48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F3E0C 001F0D4C  7C 08 03 A6 */	mtlr r0
/* 801F3E10 001F0D50  38 21 00 20 */	addi r1, r1, 0x20
/* 801F3E14 001F0D54  4E 80 00 20 */	blr 

.global setLife__Q34Game12ItemTreasure4ItemFv
setLife__Q34Game12ItemTreasure4ItemFv:
/* 801F3E18 001F0D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3E1C 001F0D5C  7C 08 02 A6 */	mflr r0
/* 801F3E20 001F0D60  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F3E24 001F0D64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3E28 001F0D68  7C 7F 1B 78 */	mr r31, r3
/* 801F3E2C 001F0D6C  48 00 00 1D */	bl getCurrMaxLife__Q34Game12ItemTreasure4ItemFv
/* 801F3E30 001F0D70  D0 3F 01 F4 */	stfs f1, 0x1f4(r31)
/* 801F3E34 001F0D74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F3E38 001F0D78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3E3C 001F0D7C  7C 08 03 A6 */	mtlr r0
/* 801F3E40 001F0D80  38 21 00 10 */	addi r1, r1, 0x10
/* 801F3E44 001F0D84  4E 80 00 20 */	blr 

.global getCurrMaxLife__Q34Game12ItemTreasure4ItemFv
getCurrMaxLife__Q34Game12ItemTreasure4ItemFv:
/* 801F3E48 001F0D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3E4C 001F0D8C  7C 08 02 A6 */	mflr r0
/* 801F3E50 001F0D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F3E54 001F0D94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3E58 001F0D98  7C 7F 1B 78 */	mr r31, r3
/* 801F3E5C 001F0D9C  80 63 01 FC */	lwz r3, 0x1fc(r3)
/* 801F3E60 001F0DA0  4B F7 23 DD */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F3E64 001F0DA4  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801F3E68 001F0DA8  C0 02 B8 74 */	lfs f0, lbl_80519BD4@sda21(r2)
/* 801F3E6C 001F0DAC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801F3E70 001F0DB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F3E74 001F0DB4  40 80 00 14 */	bge .L_801F3E88
/* 801F3E78 001F0DB8  80 6D 94 D0 */	lwz r3, mgr__Q24Game12ItemTreasure@sda21(r13)
/* 801F3E7C 001F0DBC  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801F3E80 001F0DC0  C0 23 01 78 */	lfs f1, 0x178(r3)
/* 801F3E84 001F0DC4  48 00 00 48 */	b .L_801F3ECC
.L_801F3E88:
/* 801F3E88 001F0DC8  C0 02 B8 78 */	lfs f0, lbl_80519BD8@sda21(r2)
/* 801F3E8C 001F0DCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F3E90 001F0DD0  40 80 00 14 */	bge .L_801F3EA4
/* 801F3E94 001F0DD4  80 6D 94 D0 */	lwz r3, mgr__Q24Game12ItemTreasure@sda21(r13)
/* 801F3E98 001F0DD8  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801F3E9C 001F0DDC  C0 23 01 50 */	lfs f1, 0x150(r3)
/* 801F3EA0 001F0DE0  48 00 00 2C */	b .L_801F3ECC
.L_801F3EA4:
/* 801F3EA4 001F0DE4  C0 02 B8 A0 */	lfs f0, lbl_80519C00@sda21(r2)
/* 801F3EA8 001F0DE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F3EAC 001F0DEC  40 80 00 14 */	bge .L_801F3EC0
/* 801F3EB0 001F0DF0  80 6D 94 D0 */	lwz r3, mgr__Q24Game12ItemTreasure@sda21(r13)
/* 801F3EB4 001F0DF4  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801F3EB8 001F0DF8  C0 23 01 28 */	lfs f1, 0x128(r3)
/* 801F3EBC 001F0DFC  48 00 00 10 */	b .L_801F3ECC
.L_801F3EC0:
/* 801F3EC0 001F0E00  80 6D 94 D0 */	lwz r3, mgr__Q24Game12ItemTreasure@sda21(r13)
/* 801F3EC4 001F0E04  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801F3EC8 001F0E08  C0 23 01 00 */	lfs f1, 0x100(r3)
.L_801F3ECC:
/* 801F3ECC 001F0E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F3ED0 001F0E10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3ED4 001F0E14  7C 08 03 A6 */	mtlr r0
/* 801F3ED8 001F0E18  38 21 00 10 */	addi r1, r1, 0x10
/* 801F3EDC 001F0E1C  4E 80 00 20 */	blr 

.global interactAttack__Q34Game12ItemTreasure4ItemFRQ24Game14InteractAttack
interactAttack__Q34Game12ItemTreasure4ItemFRQ24Game14InteractAttack:
/* 801F3EE0 001F0E20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F3EE4 001F0E24  7C 08 02 A6 */	mflr r0
/* 801F3EE8 001F0E28  7C 85 23 78 */	mr r5, r4
/* 801F3EEC 001F0E2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F3EF0 001F0E30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F3EF4 001F0E34  7C 7F 1B 78 */	mr r31, r3
/* 801F3EF8 001F0E38  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F3EFC 001F0E3C  28 03 00 00 */	cmplwi r3, 0
/* 801F3F00 001F0E40  41 82 00 E4 */	beq .L_801F3FE4
/* 801F3F04 001F0E44  81 83 00 00 */	lwz r12, 0(r3)
/* 801F3F08 001F0E48  7F E4 FB 78 */	mr r4, r31
/* 801F3F0C 001F0E4C  C0 25 00 08 */	lfs f1, 8(r5)
/* 801F3F10 001F0E50  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F3F14 001F0E54  7D 89 03 A6 */	mtctr r12
/* 801F3F18 001F0E58  4E 80 04 21 */	bctrl 
/* 801F3F1C 001F0E5C  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F3F20 001F0E60  48 03 AC C9 */	bl event__Q24Game11TSoundEventFv
/* 801F3F24 001F0E64  2C 03 00 02 */	cmpwi r3, 2
/* 801F3F28 001F0E68  41 82 00 BC */	beq .L_801F3FE4
/* 801F3F2C 001F0E6C  40 80 00 10 */	bge .L_801F3F3C
/* 801F3F30 001F0E70  2C 03 00 01 */	cmpwi r3, 1
/* 801F3F34 001F0E74  40 80 00 14 */	bge .L_801F3F48
/* 801F3F38 001F0E78  48 00 00 AC */	b .L_801F3FE4
.L_801F3F3C:
/* 801F3F3C 001F0E7C  2C 03 00 04 */	cmpwi r3, 4
/* 801F3F40 001F0E80  40 80 00 A4 */	bge .L_801F3FE4
/* 801F3F44 001F0E84  48 00 00 54 */	b .L_801F3F98
.L_801F3F48:
/* 801F3F48 001F0E88  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3F4C 001F0E8C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3F50 001F0E90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F3F54 001F0E94  7D 89 03 A6 */	mtctr r12
/* 801F3F58 001F0E98  4E 80 04 21 */	bctrl 
/* 801F3F5C 001F0E9C  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F3F60 001F0EA0  41 82 00 20 */	beq .L_801F3F80
/* 801F3F64 001F0EA4  3C 60 80 48 */	lis r3, lbl_804816E4@ha
/* 801F3F68 001F0EA8  3C A0 80 48 */	lis r5, lbl_804816F8@ha
/* 801F3F6C 001F0EAC  38 63 16 E4 */	addi r3, r3, lbl_804816E4@l
/* 801F3F70 001F0EB0  38 80 02 2B */	li r4, 0x22b
/* 801F3F74 001F0EB4  38 A5 16 F8 */	addi r5, r5, lbl_804816F8@l
/* 801F3F78 001F0EB8  4C C6 31 82 */	crclr 6
/* 801F3F7C 001F0EBC  4B E3 66 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F3F80:
/* 801F3F80 001F0EC0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3F84 001F0EC4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3F88 001F0EC8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801F3F8C 001F0ECC  7D 89 03 A6 */	mtctr r12
/* 801F3F90 001F0ED0  4E 80 04 21 */	bctrl 
/* 801F3F94 001F0ED4  48 00 00 50 */	b .L_801F3FE4
.L_801F3F98:
/* 801F3F98 001F0ED8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3F9C 001F0EDC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3FA0 001F0EE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F3FA4 001F0EE4  7D 89 03 A6 */	mtctr r12
/* 801F3FA8 001F0EE8  4E 80 04 21 */	bctrl 
/* 801F3FAC 001F0EEC  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F3FB0 001F0EF0  41 82 00 20 */	beq .L_801F3FD0
/* 801F3FB4 001F0EF4  3C 60 80 48 */	lis r3, lbl_804816E4@ha
/* 801F3FB8 001F0EF8  3C A0 80 48 */	lis r5, lbl_804816F8@ha
/* 801F3FBC 001F0EFC  38 63 16 E4 */	addi r3, r3, lbl_804816E4@l
/* 801F3FC0 001F0F00  38 80 02 31 */	li r4, 0x231
/* 801F3FC4 001F0F04  38 A5 16 F8 */	addi r5, r5, lbl_804816F8@l
/* 801F3FC8 001F0F08  4C C6 31 82 */	crclr 6
/* 801F3FCC 001F0F0C  4B E3 66 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F3FD0:
/* 801F3FD0 001F0F10  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F3FD4 001F0F14  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F3FD8 001F0F18  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801F3FDC 001F0F1C  7D 89 03 A6 */	mtctr r12
/* 801F3FE0 001F0F20  4E 80 04 21 */	bctrl 
.L_801F3FE4:
/* 801F3FE4 001F0F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F3FE8 001F0F28  38 60 00 01 */	li r3, 1
/* 801F3FEC 001F0F2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F3FF0 001F0F30  7C 08 03 A6 */	mtlr r0
/* 801F3FF4 001F0F34  38 21 00 10 */	addi r1, r1, 0x10
/* 801F3FF8 001F0F38  4E 80 00 20 */	blr 

.global onDamage__Q34Game12ItemTreasure5StateFPQ34Game12ItemTreasure4Itemf
onDamage__Q34Game12ItemTreasure5StateFPQ34Game12ItemTreasure4Itemf:
/* 801F3FFC 001F0F3C  4E 80 00 20 */	blr 

.global getWorkRadius__Q34Game12ItemTreasure4ItemFv
getWorkRadius__Q34Game12ItemTreasure4ItemFv:
/* 801F4000 001F0F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4004 001F0F44  7C 08 02 A6 */	mflr r0
/* 801F4008 001F0F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F400C 001F0F4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4010 001F0F50  7C 7F 1B 78 */	mr r31, r3
/* 801F4014 001F0F54  80 63 01 FC */	lwz r3, 0x1fc(r3)
/* 801F4018 001F0F58  28 03 00 00 */	cmplwi r3, 0
/* 801F401C 001F0F5C  41 82 00 24 */	beq .L_801F4040
/* 801F4020 001F0F60  4B F7 22 1D */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F4024 001F0F64  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801F4028 001F0F68  C0 02 B8 98 */	lfs f0, lbl_80519BF8@sda21(r2)
/* 801F402C 001F0F6C  EC 22 08 24 */	fdivs f1, f2, f1
/* 801F4030 001F0F70  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801F4034 001F0F74  EC 20 08 28 */	fsubs f1, f0, f1
/* 801F4038 001F0F78  4B F7 22 1D */	bl getBuryRadius__Q24Game6PelletFf
/* 801F403C 001F0F7C  48 00 00 08 */	b .L_801F4044
.L_801F4040:
/* 801F4040 001F0F80  C0 22 B8 80 */	lfs f1, lbl_80519BE0@sda21(r2)
.L_801F4044:
/* 801F4044 001F0F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4048 001F0F88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F404C 001F0F8C  7C 08 03 A6 */	mtlr r0
/* 801F4050 001F0F90  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4054 001F0F94  4E 80 00 20 */	blr 

.global isVisible__Q34Game12ItemTreasure4ItemFv
isVisible__Q34Game12ItemTreasure4ItemFv:
/* 801F4058 001F0F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F405C 001F0F9C  7C 08 02 A6 */	mflr r0
/* 801F4060 001F0FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4064 001F0FA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4068 001F0FA8  7C 7F 1B 78 */	mr r31, r3
/* 801F406C 001F0FAC  80 63 01 FC */	lwz r3, 0x1fc(r3)
/* 801F4070 001F0FB0  28 03 00 00 */	cmplwi r3, 0
/* 801F4074 001F0FB4  40 82 00 0C */	bne .L_801F4080
/* 801F4078 001F0FB8  38 60 00 00 */	li r3, 0
/* 801F407C 001F0FBC  48 00 00 28 */	b .L_801F40A4
.L_801F4080:
/* 801F4080 001F0FC0  4B F7 21 BD */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F4084 001F0FC4  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801F4088 001F0FC8  C0 02 B8 A4 */	lfs f0, lbl_80519C04@sda21(r2)
/* 801F408C 001F0FCC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801F4090 001F0FD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F4094 001F0FD4  7C 00 00 26 */	mfcr r0
/* 801F4098 001F0FD8  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 801F409C 001F0FDC  7C 00 00 34 */	cntlzw r0, r0
/* 801F40A0 001F0FE0  54 03 D9 7E */	srwi r3, r0, 5
.L_801F40A4:
/* 801F40A4 001F0FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F40A8 001F0FE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F40AC 001F0FEC  7C 08 03 A6 */	mtlr r0
/* 801F40B0 001F0FF0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F40B4 001F0FF4  4E 80 00 20 */	blr 

.global ignoreAtari__Q34Game12ItemTreasure4ItemFPQ24Game8Creature
ignoreAtari__Q34Game12ItemTreasure4ItemFPQ24Game8Creature:
/* 801F40B8 001F0FF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F40BC 001F0FFC  7C 08 02 A6 */	mflr r0
/* 801F40C0 001F1000  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F40C4 001F1004  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F40C8 001F1008  7C 9F 23 78 */	mr r31, r4
/* 801F40CC 001F100C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F40D0 001F1010  7C 7E 1B 78 */	mr r30, r3
/* 801F40D4 001F1014  80 63 01 FC */	lwz r3, 0x1fc(r3)
/* 801F40D8 001F1018  28 03 00 00 */	cmplwi r3, 0
/* 801F40DC 001F101C  40 82 00 0C */	bne .L_801F40E8
/* 801F40E0 001F1020  38 00 00 00 */	li r0, 0
/* 801F40E4 001F1024  48 00 00 28 */	b .L_801F410C
.L_801F40E8:
/* 801F40E8 001F1028  4B F7 21 55 */	bl getBuryDepthMax__Q24Game6PelletFv
/* 801F40EC 001F102C  C0 5E 01 F8 */	lfs f2, 0x1f8(r30)
/* 801F40F0 001F1030  C0 02 B8 A4 */	lfs f0, lbl_80519C04@sda21(r2)
/* 801F40F4 001F1034  EC 22 08 24 */	fdivs f1, f2, f1
/* 801F40F8 001F1038  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801F40FC 001F103C  40 81 00 0C */	ble .L_801F4108
/* 801F4100 001F1040  38 00 00 00 */	li r0, 0
/* 801F4104 001F1044  48 00 00 08 */	b .L_801F410C
.L_801F4108:
/* 801F4108 001F1048  38 00 00 01 */	li r0, 1
.L_801F410C:
/* 801F410C 001F104C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F4110 001F1050  40 82 00 3C */	bne .L_801F414C
/* 801F4114 001F1054  7F E3 FB 78 */	mr r3, r31
/* 801F4118 001F1058  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F411C 001F105C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F4120 001F1060  7D 89 03 A6 */	mtctr r12
/* 801F4124 001F1064  4E 80 04 21 */	bctrl 
/* 801F4128 001F1068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F412C 001F106C  41 82 00 18 */	beq .L_801F4144
/* 801F4130 001F1070  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801F4134 001F1074  2C 00 00 04 */	cmpwi r0, 4
/* 801F4138 001F1078  40 82 00 0C */	bne .L_801F4144
/* 801F413C 001F107C  38 60 00 00 */	li r3, 0
/* 801F4140 001F1080  48 00 00 10 */	b .L_801F4150
.L_801F4144:
/* 801F4144 001F1084  38 60 00 01 */	li r3, 1
/* 801F4148 001F1088  48 00 00 08 */	b .L_801F4150
.L_801F414C:
/* 801F414C 001F108C  38 60 00 00 */	li r3, 0
.L_801F4150:
/* 801F4150 001F1090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4154 001F1094  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F4158 001F1098  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F415C 001F109C  7C 08 03 A6 */	mtlr r0
/* 801F4160 001F10A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4164 001F10A4  4E 80 00 20 */	blr 

.global __ct__Q34Game12ItemTreasure3MgrFv
__ct__Q34Game12ItemTreasure3MgrFv:
/* 801F4168 001F10A8  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801F416C 001F10AC  7C 08 02 A6 */	mflr r0
/* 801F4170 001F10B0  90 01 04 44 */	stw r0, 0x444(r1)
/* 801F4174 001F10B4  7C 80 07 35 */	extsh. r0, r4
/* 801F4178 001F10B8  3C 80 80 48 */	lis r4, lbl_804816B8@ha
/* 801F417C 001F10BC  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801F4180 001F10C0  3B E4 16 B8 */	addi r31, r4, lbl_804816B8@l
/* 801F4184 001F10C4  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801F4188 001F10C8  7C 7E 1B 78 */	mr r30, r3
/* 801F418C 001F10CC  41 82 00 0C */	beq .L_801F4198
/* 801F4190 001F10D0  38 1E 00 8C */	addi r0, r30, 0x8c
/* 801F4194 001F10D4  90 1E 00 04 */	stw r0, 4(r30)
.L_801F4198:
/* 801F4198 001F10D8  7F C3 F3 78 */	mr r3, r30
/* 801F419C 001F10DC  38 80 00 00 */	li r4, 0
/* 801F41A0 001F10E0  4B FD 92 81 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801F41A4 001F10E4  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemTreasure3Mgr@ha
/* 801F41A8 001F10E8  38 9F 00 4C */	addi r4, r31, 0x4c
/* 801F41AC 001F10EC  38 63 BC 24 */	addi r3, r3, __vt__Q34Game12ItemTreasure3Mgr@l
/* 801F41B0 001F10F0  38 1F 00 58 */	addi r0, r31, 0x58
/* 801F41B4 001F10F4  90 7E 00 00 */	stw r3, 0(r30)
/* 801F41B8 001F10F8  38 A3 00 74 */	addi r5, r3, 0x74
/* 801F41BC 001F10FC  38 60 01 8C */	li r3, 0x18c
/* 801F41C0 001F1100  90 BE 00 30 */	stw r5, 0x30(r30)
/* 801F41C4 001F1104  90 9E 00 08 */	stw r4, 8(r30)
/* 801F41C8 001F1108  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F41CC 001F110C  4B E2 FC D9 */	bl __nw__FUl
/* 801F41D0 001F1110  7C 60 1B 79 */	or. r0, r3, r3
/* 801F41D4 001F1114  41 82 00 0C */	beq .L_801F41E0
/* 801F41D8 001F1118  48 00 00 C9 */	bl __ct__Q34Game12ItemTreasure13TreasureParmsFv
/* 801F41DC 001F111C  7C 60 1B 78 */	mr r0, r3
.L_801F41E0:
/* 801F41E0 001F1120  90 1E 00 88 */	stw r0, 0x88(r30)
/* 801F41E4 001F1124  38 00 00 00 */	li r0, 0
/* 801F41E8 001F1128  38 7F 00 74 */	addi r3, r31, 0x74
/* 801F41EC 001F112C  38 80 00 00 */	li r4, 0
/* 801F41F0 001F1130  90 01 00 08 */	stw r0, 8(r1)
/* 801F41F4 001F1134  38 A0 00 00 */	li r5, 0
/* 801F41F8 001F1138  38 C0 00 00 */	li r6, 0
/* 801F41FC 001F113C  38 E0 00 00 */	li r7, 0
/* 801F4200 001F1140  39 00 00 02 */	li r8, 2
/* 801F4204 001F1144  39 20 00 00 */	li r9, 0
/* 801F4208 001F1148  39 40 00 00 */	li r10, 0
/* 801F420C 001F114C  4B E2 AF 7D */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801F4210 001F1150  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F4214 001F1154  41 82 00 4C */	beq .L_801F4260
/* 801F4218 001F1158  7F E4 FB 78 */	mr r4, r31
/* 801F421C 001F115C  38 61 00 10 */	addi r3, r1, 0x10
/* 801F4220 001F1160  38 A0 FF FF */	li r5, -1
/* 801F4224 001F1164  48 22 16 D5 */	bl __ct__9RamStreamFPvi
/* 801F4228 001F1168  38 00 00 01 */	li r0, 1
/* 801F422C 001F116C  2C 00 00 01 */	cmpwi r0, 1
/* 801F4230 001F1170  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801F4234 001F1174  40 82 00 0C */	bne .L_801F4240
/* 801F4238 001F1178  38 00 00 00 */	li r0, 0
/* 801F423C 001F117C  90 01 04 24 */	stw r0, 0x424(r1)
.L_801F4240:
/* 801F4240 001F1180  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 801F4244 001F1184  38 81 00 10 */	addi r4, r1, 0x10
/* 801F4248 001F1188  81 83 00 D8 */	lwz r12, 0xd8(r3)
/* 801F424C 001F118C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F4250 001F1190  7D 89 03 A6 */	mtctr r12
/* 801F4254 001F1194  4E 80 04 21 */	bctrl 
/* 801F4258 001F1198  7F E3 FB 78 */	mr r3, r31
/* 801F425C 001F119C  4B E2 FE 7D */	bl __dla__FPv
.L_801F4260:
/* 801F4260 001F11A0  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801F4264 001F11A4  7F C3 F3 78 */	mr r3, r30
/* 801F4268 001F11A8  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801F426C 001F11AC  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801F4270 001F11B0  7C 08 03 A6 */	mtlr r0
/* 801F4274 001F11B4  38 21 04 40 */	addi r1, r1, 0x440
/* 801F4278 001F11B8  4E 80 00 20 */	blr 

.global read__Q34Game12ItemTreasure13TreasureParmsFR6Stream
read__Q34Game12ItemTreasure13TreasureParmsFR6Stream:
/* 801F427C 001F11BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4280 001F11C0  7C 08 02 A6 */	mflr r0
/* 801F4284 001F11C4  38 63 00 DC */	addi r3, r3, 0xdc
/* 801F4288 001F11C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F428C 001F11CC  48 21 F5 69 */	bl read__10ParametersFR6Stream
/* 801F4290 001F11D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4294 001F11D4  7C 08 03 A6 */	mtlr r0
/* 801F4298 001F11D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F429C 001F11DC  4E 80 00 20 */	blr 

.global __ct__Q34Game12ItemTreasure13TreasureParmsFv
__ct__Q34Game12ItemTreasure13TreasureParmsFv:
/* 801F42A0 001F11E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F42A4 001F11E4  7C 08 02 A6 */	mflr r0
/* 801F42A8 001F11E8  3C A0 73 30 */	lis r5, 0x73303030@ha
/* 801F42AC 001F11EC  3C 80 80 4B */	lis r4, __vt__Q24Game13CreatureParms@ha
/* 801F42B0 001F11F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F42B4 001F11F4  38 04 AC B0 */	addi r0, r4, __vt__Q24Game13CreatureParms@l
/* 801F42B8 001F11F8  38 A5 30 30 */	addi r5, r5, 0x73303030@l
/* 801F42BC 001F11FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F42C0 001F1200  93 C1 00 08 */	stw r30, 8(r1)
/* 801F42C4 001F1204  7C 7E 1B 78 */	mr r30, r3
/* 801F42C8 001F1208  3C 60 80 48 */	lis r3, lbl_804816B8@ha
/* 801F42CC 001F120C  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801F42D0 001F1210  3B E3 16 B8 */	addi r31, r3, lbl_804816B8@l
/* 801F42D4 001F1214  38 1E 00 D4 */	addi r0, r30, 0xd4
/* 801F42D8 001F1218  38 60 00 00 */	li r3, 0
/* 801F42DC 001F121C  90 1E 00 00 */	stw r0, 0(r30)
/* 801F42E0 001F1220  38 1F 00 94 */	addi r0, r31, 0x94
/* 801F42E4 001F1224  7F C4 F3 78 */	mr r4, r30
/* 801F42E8 001F1228  38 DF 00 A8 */	addi r6, r31, 0xa8
/* 801F42EC 001F122C  90 7E 00 04 */	stw r3, 4(r30)
/* 801F42F0 001F1230  38 7E 00 0C */	addi r3, r30, 0xc
/* 801F42F4 001F1234  90 1E 00 08 */	stw r0, 8(r30)
/* 801F42F8 001F1238  48 21 F3 61 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F42FC 001F123C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F4300 001F1240  3C A0 73 30 */	lis r5, 0x73303031@ha
/* 801F4304 001F1244  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F4308 001F1248  C0 02 B8 78 */	lfs f0, lbl_80519BD8@sda21(r2)
/* 801F430C 001F124C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801F4310 001F1250  7F C4 F3 78 */	mr r4, r30
/* 801F4314 001F1254  C0 22 B8 70 */	lfs f1, lbl_80519BD0@sda21(r2)
/* 801F4318 001F1258  38 7E 00 34 */	addi r3, r30, 0x34
/* 801F431C 001F125C  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801F4320 001F1260  38 A5 30 31 */	addi r5, r5, 0x73303031@l
/* 801F4324 001F1264  C0 02 B8 98 */	lfs f0, lbl_80519BF8@sda21(r2)
/* 801F4328 001F1268  38 DF 00 BC */	addi r6, r31, 0xbc
/* 801F432C 001F126C  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801F4330 001F1270  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801F4334 001F1274  48 21 F3 25 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F4338 001F1278  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F433C 001F127C  3C A0 73 30 */	lis r5, 0x73303032@ha
/* 801F4340 001F1280  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F4344 001F1284  C0 02 B8 78 */	lfs f0, lbl_80519BD8@sda21(r2)
/* 801F4348 001F1288  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F434C 001F128C  7F C4 F3 78 */	mr r4, r30
/* 801F4350 001F1290  C0 22 B8 70 */	lfs f1, lbl_80519BD0@sda21(r2)
/* 801F4354 001F1294  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801F4358 001F1298  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801F435C 001F129C  38 A5 30 32 */	addi r5, r5, 0x73303032@l
/* 801F4360 001F12A0  C0 02 B8 98 */	lfs f0, lbl_80519BF8@sda21(r2)
/* 801F4364 001F12A4  38 DF 00 CC */	addi r6, r31, 0xcc
/* 801F4368 001F12A8  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 801F436C 001F12AC  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 801F4370 001F12B0  48 21 F2 E9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F4374 001F12B4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F4378 001F12B8  3C A0 73 30 */	lis r5, 0x73303033@ha
/* 801F437C 001F12BC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F4380 001F12C0  C0 02 B8 74 */	lfs f0, lbl_80519BD4@sda21(r2)
/* 801F4384 001F12C4  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801F4388 001F12C8  7F C4 F3 78 */	mr r4, r30
/* 801F438C 001F12CC  C0 22 B8 70 */	lfs f1, lbl_80519BD0@sda21(r2)
/* 801F4390 001F12D0  38 7E 00 84 */	addi r3, r30, 0x84
/* 801F4394 001F12D4  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 801F4398 001F12D8  38 A5 30 33 */	addi r5, r5, 0x73303033@l
/* 801F439C 001F12DC  C0 02 B8 98 */	lfs f0, lbl_80519BF8@sda21(r2)
/* 801F43A0 001F12E0  38 C2 B8 A8 */	addi r6, r2, lbl_80519C08@sda21
/* 801F43A4 001F12E4  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801F43A8 001F12E8  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 801F43AC 001F12EC  48 21 F2 AD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F43B0 001F12F0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F43B4 001F12F4  3C A0 73 30 */	lis r5, 0x73303034@ha
/* 801F43B8 001F12F8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F43BC 001F12FC  C0 02 B8 B0 */	lfs f0, lbl_80519C10@sda21(r2)
/* 801F43C0 001F1300  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801F43C4 001F1304  7F C4 F3 78 */	mr r4, r30
/* 801F43C8 001F1308  C0 22 B8 B4 */	lfs f1, lbl_80519C14@sda21(r2)
/* 801F43CC 001F130C  38 7E 00 AC */	addi r3, r30, 0xac
/* 801F43D0 001F1310  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 801F43D4 001F1314  38 A5 30 34 */	addi r5, r5, 0x73303034@l
/* 801F43D8 001F1318  C0 02 B8 B8 */	lfs f0, lbl_80519C18@sda21(r2)
/* 801F43DC 001F131C  38 DF 00 DC */	addi r6, r31, 0xdc
/* 801F43E0 001F1320  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 801F43E4 001F1324  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 801F43E8 001F1328  48 21 F2 71 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F43EC 001F132C  3C 80 80 4B */	lis r4, "__vt__7Parm<f>"@ha
/* 801F43F0 001F1330  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemTreasure13TreasureParms@ha
/* 801F43F4 001F1334  38 04 AC BC */	addi r0, r4, "__vt__7Parm<f>"@l
/* 801F43F8 001F1338  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 801F43FC 001F133C  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801F4400 001F1340  39 23 BC E4 */	addi r9, r3, __vt__Q34Game12ItemTreasure13TreasureParms@l
/* 801F4404 001F1344  C0 02 B8 BC */	lfs f0, lbl_80519C1C@sda21(r2)
/* 801F4408 001F1348  39 1E 01 88 */	addi r8, r30, 0x188
/* 801F440C 001F134C  C0 22 B8 B4 */	lfs f1, lbl_80519C14@sda21(r2)
/* 801F4410 001F1350  38 E0 00 00 */	li r7, 0
/* 801F4414 001F1354  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 801F4418 001F1358  38 1F 00 EC */	addi r0, r31, 0xec
/* 801F441C 001F135C  C0 02 B8 B8 */	lfs f0, lbl_80519C18@sda21(r2)
/* 801F4420 001F1360  38 7E 00 E8 */	addi r3, r30, 0xe8
/* 801F4424 001F1364  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 801F4428 001F1368  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F442C 001F136C  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 801F4430 001F1370  38 DF 00 FC */	addi r6, r31, 0xfc
/* 801F4434 001F1374  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 801F4438 001F1378  91 3E 00 D8 */	stw r9, 0xd8(r30)
/* 801F443C 001F137C  91 1E 00 DC */	stw r8, 0xdc(r30)
/* 801F4440 001F1380  90 FE 00 E0 */	stw r7, 0xe0(r30)
/* 801F4444 001F1384  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 801F4448 001F1388  48 21 F2 11 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F444C 001F138C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F4450 001F1390  3C A0 70 30 */	lis r5, 0x70303031@ha
/* 801F4454 001F1394  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F4458 001F1398  C0 02 B8 C0 */	lfs f0, lbl_80519C20@sda21(r2)
/* 801F445C 001F139C  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 801F4460 001F13A0  38 7E 01 10 */	addi r3, r30, 0x110
/* 801F4464 001F13A4  C0 22 B8 98 */	lfs f1, lbl_80519BF8@sda21(r2)
/* 801F4468 001F13A8  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F446C 001F13AC  D0 1E 01 00 */	stfs f0, 0x100(r30)
/* 801F4470 001F13B0  38 A5 30 31 */	addi r5, r5, 0x70303031@l
/* 801F4474 001F13B4  C0 02 B8 C4 */	lfs f0, lbl_80519C24@sda21(r2)
/* 801F4478 001F13B8  38 DF 01 08 */	addi r6, r31, 0x108
/* 801F447C 001F13BC  D0 3E 01 08 */	stfs f1, 0x108(r30)
/* 801F4480 001F13C0  D0 1E 01 0C */	stfs f0, 0x10c(r30)
/* 801F4484 001F13C4  48 21 F1 D5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F4488 001F13C8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F448C 001F13CC  3C A0 70 30 */	lis r5, 0x70303032@ha
/* 801F4490 001F13D0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F4494 001F13D4  C0 02 B8 C8 */	lfs f0, lbl_80519C28@sda21(r2)
/* 801F4498 001F13D8  90 1E 01 10 */	stw r0, 0x110(r30)
/* 801F449C 001F13DC  38 7E 01 38 */	addi r3, r30, 0x138
/* 801F44A0 001F13E0  C0 22 B8 98 */	lfs f1, lbl_80519BF8@sda21(r2)
/* 801F44A4 001F13E4  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F44A8 001F13E8  D0 1E 01 28 */	stfs f0, 0x128(r30)
/* 801F44AC 001F13EC  38 A5 30 32 */	addi r5, r5, 0x70303032@l
/* 801F44B0 001F13F0  C0 02 B8 C4 */	lfs f0, lbl_80519C24@sda21(r2)
/* 801F44B4 001F13F4  38 DF 01 14 */	addi r6, r31, 0x114
/* 801F44B8 001F13F8  D0 3E 01 30 */	stfs f1, 0x130(r30)
/* 801F44BC 001F13FC  D0 1E 01 34 */	stfs f0, 0x134(r30)
/* 801F44C0 001F1400  48 21 F1 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F44C4 001F1404  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F44C8 001F1408  3C A0 70 30 */	lis r5, 0x70303033@ha
/* 801F44CC 001F140C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F44D0 001F1410  C0 02 B8 CC */	lfs f0, lbl_80519C2C@sda21(r2)
/* 801F44D4 001F1414  90 1E 01 38 */	stw r0, 0x138(r30)
/* 801F44D8 001F1418  38 7E 01 60 */	addi r3, r30, 0x160
/* 801F44DC 001F141C  C0 22 B8 98 */	lfs f1, lbl_80519BF8@sda21(r2)
/* 801F44E0 001F1420  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F44E4 001F1424  D0 1E 01 50 */	stfs f0, 0x150(r30)
/* 801F44E8 001F1428  38 A5 30 33 */	addi r5, r5, 0x70303033@l
/* 801F44EC 001F142C  C0 02 B8 C4 */	lfs f0, lbl_80519C24@sda21(r2)
/* 801F44F0 001F1430  38 DF 01 20 */	addi r6, r31, 0x120
/* 801F44F4 001F1434  D0 3E 01 58 */	stfs f1, 0x158(r30)
/* 801F44F8 001F1438  D0 1E 01 5C */	stfs f0, 0x15c(r30)
/* 801F44FC 001F143C  48 21 F1 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F4500 001F1440  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F4504 001F1444  C0 42 B8 D0 */	lfs f2, lbl_80519C30@sda21(r2)
/* 801F4508 001F1448  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F450C 001F144C  C0 22 B8 98 */	lfs f1, lbl_80519BF8@sda21(r2)
/* 801F4510 001F1450  90 1E 01 60 */	stw r0, 0x160(r30)
/* 801F4514 001F1454  7F C3 F3 78 */	mr r3, r30
/* 801F4518 001F1458  C0 02 B8 C4 */	lfs f0, lbl_80519C24@sda21(r2)
/* 801F451C 001F145C  D0 5E 01 78 */	stfs f2, 0x178(r30)
/* 801F4520 001F1460  D0 3E 01 80 */	stfs f1, 0x180(r30)
/* 801F4524 001F1464  D0 1E 01 84 */	stfs f0, 0x184(r30)
/* 801F4528 001F1468  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F452C 001F146C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F4530 001F1470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4534 001F1474  7C 08 03 A6 */	mtlr r0
/* 801F4538 001F1478  38 21 00 10 */	addi r1, r1, 0x10
/* 801F453C 001F147C  4E 80 00 20 */	blr 

.global birth__Q34Game12ItemTreasure3MgrFv
birth__Q34Game12ItemTreasure3MgrFv:
/* 801F4540 001F1480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4544 001F1484  7C 08 02 A6 */	mflr r0
/* 801F4548 001F1488  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F454C 001F148C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4550 001F1490  93 C1 00 08 */	stw r30, 8(r1)
/* 801F4554 001F1494  7C 7E 1B 78 */	mr r30, r3
/* 801F4558 001F1498  38 60 02 34 */	li r3, 0x234
/* 801F455C 001F149C  4B E2 F9 49 */	bl __nw__FUl
/* 801F4560 001F14A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F4564 001F14A4  41 82 00 E4 */	beq .L_801F4648
/* 801F4568 001F14A8  38 80 04 0E */	li r4, 0x40e
/* 801F456C 001F14AC  4B FD 7A 7D */	bl __ct__Q24Game8BaseItemFi
/* 801F4570 001F14B0  3C 60 80 4C */	lis r3, "__vt__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@ha
/* 801F4574 001F14B4  38 00 00 00 */	li r0, 0
/* 801F4578 001F14B8  38 83 C1 88 */	addi r4, r3, "__vt__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@l
/* 801F457C 001F14BC  38 60 00 1C */	li r3, 0x1c
/* 801F4580 001F14C0  90 9F 00 00 */	stw r4, 0(r31)
/* 801F4584 001F14C4  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F4588 001F14C8  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F458C 001F14CC  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F4590 001F14D0  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F4594 001F14D4  4B E2 F9 11 */	bl __nw__FUl
/* 801F4598 001F14D8  28 03 00 00 */	cmplwi r3, 0
/* 801F459C 001F14DC  41 82 00 30 */	beq .L_801F45CC
/* 801F45A0 001F14E0  3C 80 80 4C */	lis r4, "__vt__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>"@ha
/* 801F45A4 001F14E4  3C A0 80 4C */	lis r5, "__vt__Q24Game35ItemFSM<Q34Game12ItemTreasure4Item>"@ha
/* 801F45A8 001F14E8  38 04 C1 70 */	addi r0, r4, "__vt__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>"@l
/* 801F45AC 001F14EC  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemTreasure3FSM@ha
/* 801F45B0 001F14F0  90 03 00 00 */	stw r0, 0(r3)
/* 801F45B4 001F14F4  38 C0 FF FF */	li r6, -1
/* 801F45B8 001F14F8  38 A5 C1 58 */	addi r5, r5, "__vt__Q24Game35ItemFSM<Q34Game12ItemTreasure4Item>"@l
/* 801F45BC 001F14FC  38 04 C4 68 */	addi r0, r4, __vt__Q34Game12ItemTreasure3FSM@l
/* 801F45C0 001F1500  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F45C4 001F1504  90 A3 00 00 */	stw r5, 0(r3)
/* 801F45C8 001F1508  90 03 00 00 */	stw r0, 0(r3)
.L_801F45CC:
/* 801F45CC 001F150C  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F45D0 001F1510  7F E4 FB 78 */	mr r4, r31
/* 801F45D4 001F1514  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F45D8 001F1518  81 83 00 00 */	lwz r12, 0(r3)
/* 801F45DC 001F151C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F45E0 001F1520  7D 89 03 A6 */	mtctr r12
/* 801F45E4 001F1524  4E 80 04 21 */	bctrl 
/* 801F45E8 001F1528  3C 80 80 4C */	lis r4, "__vt__Q24Game90WorkItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@ha
/* 801F45EC 001F152C  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F45F0 001F1530  38 84 BF 34 */	addi r4, r4, "__vt__Q24Game90WorkItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@l
/* 801F45F4 001F1534  90 9F 00 00 */	stw r4, 0(r31)
/* 801F45F8 001F1538  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F45FC 001F153C  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F4600 001F1540  48 03 A5 CD */	bl __ct__Q24Game11TSoundEventFv
/* 801F4604 001F1544  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemTreasure4Item@ha
/* 801F4608 001F1548  3C 80 80 4C */	lis r4, __vt__Q28SysShape9MtxObject@ha
/* 801F460C 001F154C  38 A3 BC F0 */	addi r5, r3, __vt__Q34Game12ItemTreasure4Item@l
/* 801F4610 001F1550  3C 60 80 4C */	lis r3, __vt__Q44Game12ItemTreasure4Item10DummyShape@ha
/* 801F4614 001F1554  90 BF 00 00 */	stw r5, 0(r31)
/* 801F4618 001F1558  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801F461C 001F155C  38 A4 BF 24 */	addi r5, r4, __vt__Q28SysShape9MtxObject@l
/* 801F4620 001F1560  38 83 BF 14 */	addi r4, r3, __vt__Q44Game12ItemTreasure4Item10DummyShape@l
/* 801F4624 001F1564  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F4628 001F1568  38 7F 01 38 */	addi r3, r31, 0x138
/* 801F462C 001F156C  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F4630 001F1570  38 00 00 00 */	li r0, 0
/* 801F4634 001F1574  90 BF 01 EC */	stw r5, 0x1ec(r31)
/* 801F4638 001F1578  90 9F 01 EC */	stw r4, 0x1ec(r31)
/* 801F463C 001F157C  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 801F4640 001F1580  90 7F 01 F0 */	stw r3, 0x1f0(r31)
/* 801F4644 001F1584  90 1F 01 FC */	stw r0, 0x1fc(r31)
.L_801F4648:
/* 801F4648 001F1588  7F C3 F3 78 */	mr r3, r30
/* 801F464C 001F158C  7F E4 FB 78 */	mr r4, r31
/* 801F4650 001F1590  4B FD 91 D9 */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801F4654 001F1594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4658 001F1598  7F E3 FB 78 */	mr r3, r31
/* 801F465C 001F159C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F4660 001F15A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F4664 001F15A4  7C 08 03 A6 */	mtlr r0
/* 801F4668 001F15A8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F466C 001F15AC  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game12ItemTreasure3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
"generatorBirth__Q34Game12ItemTreasure3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm":
/* 801F4670 001F15B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4674 001F15B4  7C 08 02 A6 */	mflr r0
/* 801F4678 001F15B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F467C 001F15BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4680 001F15C0  93 C1 00 08 */	stw r30, 8(r1)
/* 801F4684 001F15C4  7C 9E 23 78 */	mr r30, r4
/* 801F4688 001F15C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F468C 001F15CC  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 801F4690 001F15D0  7D 89 03 A6 */	mtctr r12
/* 801F4694 001F15D4  4E 80 04 21 */	bctrl 
/* 801F4698 001F15D8  38 80 00 00 */	li r4, 0
/* 801F469C 001F15DC  7C 7F 1B 78 */	mr r31, r3
/* 801F46A0 001F15E0  4B F4 69 29 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801F46A4 001F15E4  7F E3 FB 78 */	mr r3, r31
/* 801F46A8 001F15E8  7F C4 F3 78 */	mr r4, r30
/* 801F46AC 001F15EC  38 A0 00 00 */	li r5, 0
/* 801F46B0 001F15F0  4B F4 6A F9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801F46B4 001F15F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F46B8 001F15F8  7F E3 FB 78 */	mr r3, r31
/* 801F46BC 001F15FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F46C0 001F1600  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F46C4 001F1604  7C 08 03 A6 */	mtlr r0
/* 801F46C8 001F1608  38 21 00 10 */	addi r1, r1, 0x10
/* 801F46CC 001F160C  4E 80 00 20 */	blr 

.global onLoadResources__Q34Game12ItemTreasure3MgrFv
onLoadResources__Q34Game12ItemTreasure3MgrFv:
/* 801F46D0 001F1610  4E 80 00 20 */	blr 

.global __dt__Q34Game12ItemTreasure3MgrFv
__dt__Q34Game12ItemTreasure3MgrFv:
/* 801F46D4 001F1614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F46D8 001F1618  7C 08 02 A6 */	mflr r0
/* 801F46DC 001F161C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F46E0 001F1620  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F46E4 001F1624  7C 9F 23 78 */	mr r31, r4
/* 801F46E8 001F1628  93 C1 00 08 */	stw r30, 8(r1)
/* 801F46EC 001F162C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F46F0 001F1630  41 82 00 FC */	beq .L_801F47EC
/* 801F46F4 001F1634  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemTreasure3Mgr@ha
/* 801F46F8 001F1638  38 63 BC 24 */	addi r3, r3, __vt__Q34Game12ItemTreasure3Mgr@l
/* 801F46FC 001F163C  90 7E 00 00 */	stw r3, 0(r30)
/* 801F4700 001F1640  38 03 00 74 */	addi r0, r3, 0x74
/* 801F4704 001F1644  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F4708 001F1648  41 82 00 D4 */	beq .L_801F47DC
/* 801F470C 001F164C  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801F4710 001F1650  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F4714 001F1654  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801F4718 001F1658  90 7E 00 00 */	stw r3, 0(r30)
/* 801F471C 001F165C  38 03 00 74 */	addi r0, r3, 0x74
/* 801F4720 001F1660  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F4724 001F1664  41 82 00 84 */	beq .L_801F47A8
/* 801F4728 001F1668  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801F472C 001F166C  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801F4730 001F1670  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801F4734 001F1674  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801F4738 001F1678  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F473C 001F167C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F4740 001F1680  41 82 00 18 */	beq .L_801F4758
/* 801F4744 001F1684  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801F4748 001F1688  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801F474C 001F168C  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801F4750 001F1690  38 80 00 00 */	li r4, 0
/* 801F4754 001F1694  48 21 CE 35 */	bl __dt__5CNodeFv
.L_801F4758:
/* 801F4758 001F1698  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F475C 001F169C  41 82 00 4C */	beq .L_801F47A8
/* 801F4760 001F16A0  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801F4764 001F16A4  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F4768 001F16A8  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801F476C 001F16AC  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801F4770 001F16B0  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F4774 001F16B4  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F4778 001F16B8  41 82 00 30 */	beq .L_801F47A8
/* 801F477C 001F16BC  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F4780 001F16C0  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F4784 001F16C4  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F4788 001F16C8  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F478C 001F16CC  41 82 00 1C */	beq .L_801F47A8
/* 801F4790 001F16D0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F4794 001F16D4  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801F4798 001F16D8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F479C 001F16DC  38 80 00 00 */	li r4, 0
/* 801F47A0 001F16E0  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F47A4 001F16E4  48 21 CD E5 */	bl __dt__5CNodeFv
.L_801F47A8:
/* 801F47A8 001F16E8  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F47AC 001F16EC  41 82 00 30 */	beq .L_801F47DC
/* 801F47B0 001F16F0  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F47B4 001F16F4  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F47B8 001F16F8  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F47BC 001F16FC  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F47C0 001F1700  41 82 00 1C */	beq .L_801F47DC
/* 801F47C4 001F1704  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F47C8 001F1708  38 7E 00 30 */	addi r3, r30, 0x30
/* 801F47CC 001F170C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F47D0 001F1710  38 80 00 00 */	li r4, 0
/* 801F47D4 001F1714  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F47D8 001F1718  48 21 CD B1 */	bl __dt__5CNodeFv
.L_801F47DC:
/* 801F47DC 001F171C  7F E0 07 35 */	extsh. r0, r31
/* 801F47E0 001F1720  40 81 00 0C */	ble .L_801F47EC
/* 801F47E4 001F1724  7F C3 F3 78 */	mr r3, r30
/* 801F47E8 001F1728  4B E2 F8 CD */	bl __dl__FPv
.L_801F47EC:
/* 801F47EC 001F172C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F47F0 001F1730  7F C3 F3 78 */	mr r3, r30
/* 801F47F4 001F1734  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F47F8 001F1738  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F47FC 001F173C  7C 08 03 A6 */	mtlr r0
/* 801F4800 001F1740  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4804 001F1744  4E 80 00 20 */	blr 

.global doNew__Q34Game12ItemTreasure3MgrFv
doNew__Q34Game12ItemTreasure3MgrFv:
/* 801F4808 001F1748  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F480C 001F174C  7C 08 02 A6 */	mflr r0
/* 801F4810 001F1750  38 60 02 34 */	li r3, 0x234
/* 801F4814 001F1754  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4818 001F1758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F481C 001F175C  4B E2 F6 89 */	bl __nw__FUl
/* 801F4820 001F1760  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F4824 001F1764  41 82 00 E4 */	beq .L_801F4908
/* 801F4828 001F1768  38 80 04 0E */	li r4, 0x40e
/* 801F482C 001F176C  4B FD 77 BD */	bl __ct__Q24Game8BaseItemFi
/* 801F4830 001F1770  3C 60 80 4C */	lis r3, "__vt__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@ha
/* 801F4834 001F1774  38 00 00 00 */	li r0, 0
/* 801F4838 001F1778  38 83 C1 88 */	addi r4, r3, "__vt__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@l
/* 801F483C 001F177C  38 60 00 1C */	li r3, 0x1c
/* 801F4840 001F1780  90 9F 00 00 */	stw r4, 0(r31)
/* 801F4844 001F1784  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F4848 001F1788  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F484C 001F178C  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F4850 001F1790  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F4854 001F1794  4B E2 F6 51 */	bl __nw__FUl
/* 801F4858 001F1798  28 03 00 00 */	cmplwi r3, 0
/* 801F485C 001F179C  41 82 00 30 */	beq .L_801F488C
/* 801F4860 001F17A0  3C 80 80 4C */	lis r4, "__vt__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>"@ha
/* 801F4864 001F17A4  3C A0 80 4C */	lis r5, "__vt__Q24Game35ItemFSM<Q34Game12ItemTreasure4Item>"@ha
/* 801F4868 001F17A8  38 04 C1 70 */	addi r0, r4, "__vt__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>"@l
/* 801F486C 001F17AC  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemTreasure3FSM@ha
/* 801F4870 001F17B0  90 03 00 00 */	stw r0, 0(r3)
/* 801F4874 001F17B4  38 C0 FF FF */	li r6, -1
/* 801F4878 001F17B8  38 A5 C1 58 */	addi r5, r5, "__vt__Q24Game35ItemFSM<Q34Game12ItemTreasure4Item>"@l
/* 801F487C 001F17BC  38 04 C4 68 */	addi r0, r4, __vt__Q34Game12ItemTreasure3FSM@l
/* 801F4880 001F17C0  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F4884 001F17C4  90 A3 00 00 */	stw r5, 0(r3)
/* 801F4888 001F17C8  90 03 00 00 */	stw r0, 0(r3)
.L_801F488C:
/* 801F488C 001F17CC  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F4890 001F17D0  7F E4 FB 78 */	mr r4, r31
/* 801F4894 001F17D4  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F4898 001F17D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F489C 001F17DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F48A0 001F17E0  7D 89 03 A6 */	mtctr r12
/* 801F48A4 001F17E4  4E 80 04 21 */	bctrl 
/* 801F48A8 001F17E8  3C 80 80 4C */	lis r4, "__vt__Q24Game90WorkItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@ha
/* 801F48AC 001F17EC  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F48B0 001F17F0  38 84 BF 34 */	addi r4, r4, "__vt__Q24Game90WorkItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>"@l
/* 801F48B4 001F17F4  90 9F 00 00 */	stw r4, 0(r31)
/* 801F48B8 001F17F8  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F48BC 001F17FC  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F48C0 001F1800  48 03 A3 0D */	bl __ct__Q24Game11TSoundEventFv
/* 801F48C4 001F1804  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemTreasure4Item@ha
/* 801F48C8 001F1808  3C 80 80 4C */	lis r4, __vt__Q28SysShape9MtxObject@ha
/* 801F48CC 001F180C  38 A3 BC F0 */	addi r5, r3, __vt__Q34Game12ItemTreasure4Item@l
/* 801F48D0 001F1810  3C 60 80 4C */	lis r3, __vt__Q44Game12ItemTreasure4Item10DummyShape@ha
/* 801F48D4 001F1814  90 BF 00 00 */	stw r5, 0(r31)
/* 801F48D8 001F1818  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801F48DC 001F181C  38 A4 BF 24 */	addi r5, r4, __vt__Q28SysShape9MtxObject@l
/* 801F48E0 001F1820  38 83 BF 14 */	addi r4, r3, __vt__Q44Game12ItemTreasure4Item10DummyShape@l
/* 801F48E4 001F1824  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F48E8 001F1828  38 7F 01 38 */	addi r3, r31, 0x138
/* 801F48EC 001F182C  C0 02 B8 70 */	lfs f0, lbl_80519BD0@sda21(r2)
/* 801F48F0 001F1830  38 00 00 00 */	li r0, 0
/* 801F48F4 001F1834  90 BF 01 EC */	stw r5, 0x1ec(r31)
/* 801F48F8 001F1838  90 9F 01 EC */	stw r4, 0x1ec(r31)
/* 801F48FC 001F183C  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 801F4900 001F1840  90 7F 01 F0 */	stw r3, 0x1f0(r31)
/* 801F4904 001F1844  90 1F 01 FC */	stw r0, 0x1fc(r31)
.L_801F4908:
/* 801F4908 001F1848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F490C 001F184C  7F E3 FB 78 */	mr r3, r31
/* 801F4910 001F1850  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F4914 001F1854  7C 08 03 A6 */	mtlr r0
/* 801F4918 001F1858  38 21 00 10 */	addi r1, r1, 0x10
/* 801F491C 001F185C  4E 80 00 20 */	blr 

.global generatorGetID__Q34Game12ItemTreasure3MgrFv
generatorGetID__Q34Game12ItemTreasure3MgrFv:
/* 801F4920 001F1860  3C 60 74 72 */	lis r3, 0x74727372@ha
/* 801F4924 001F1864  38 63 73 72 */	addi r3, r3, 0x74727372@l
/* 801F4928 001F1868  4E 80 00 20 */	blr 

.global getCreatureName__Q34Game12ItemTreasure4ItemFv
getCreatureName__Q34Game12ItemTreasure4ItemFv:
/* 801F492C 001F186C  3C 60 80 48 */	lis r3, lbl_80481704@ha
/* 801F4930 001F1870  38 63 17 04 */	addi r3, r3, lbl_80481704@l
/* 801F4934 001F1874  4E 80 00 20 */	blr 

.global getMatrix__Q44Game12ItemTreasure4Item10DummyShapeFi
getMatrix__Q44Game12ItemTreasure4Item10DummyShapeFi:
/* 801F4938 001F1878  80 63 00 04 */	lwz r3, 4(r3)
/* 801F493C 001F187C  4E 80 00 20 */	blr 

.global isModel__Q28SysShape9MtxObjectFv
isModel__Q28SysShape9MtxObjectFv:
/* 801F4940 001F1880  38 60 00 00 */	li r3, 0
/* 801F4944 001F1884  4E 80 00 20 */	blr 

.global "doAI__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>Fv"
"doAI__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>Fv":
/* 801F4948 001F1888  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F494C 001F188C  7C 08 02 A6 */	mflr r0
/* 801F4950 001F1890  7C 64 1B 78 */	mr r4, r3
/* 801F4954 001F1894  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4958 001F1898  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F495C 001F189C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4960 001F18A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F4964 001F18A4  7D 89 03 A6 */	mtctr r12
/* 801F4968 001F18A8  4E 80 04 21 */	bctrl 
/* 801F496C 001F18AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4970 001F18B0  7C 08 03 A6 */	mtlr r0
/* 801F4974 001F18B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4978 001F18B8  4E 80 00 20 */	blr 

.global "onDamage__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Itemf"
"onDamage__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Itemf":
/* 801F497C 001F18BC  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent":
/* 801F4980 001F18C0  4E 80 00 20 */	blr 

.global "onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle"
"onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle":
/* 801F4984 001F18C4  4E 80 00 20 */	blr 

.global "onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent"
"onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent":
/* 801F4988 001F18C8  4E 80 00 20 */	blr 

.global "onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent"
"onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent":
/* 801F498C 001F18CC  4E 80 00 20 */	blr 

.global "init__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg"
"init__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg":
/* 801F4990 001F18D0  4E 80 00 20 */	blr 

.global "exec__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
"exec__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item":
/* 801F4994 001F18D4  4E 80 00 20 */	blr 

.global "cleanup__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
"cleanup__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item":
/* 801F4998 001F18D8  4E 80 00 20 */	blr 

.global "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
"resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item":
/* 801F499C 001F18DC  4E 80 00 20 */	blr 

.global "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
"restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item":
/* 801F49A0 001F18E0  4E 80 00 20 */	blr 

.global "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
"transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg":
/* 801F49A4 001F18E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F49A8 001F18E8  7C 08 02 A6 */	mflr r0
/* 801F49AC 001F18EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F49B0 001F18F0  80 63 00 08 */	lwz r3, 8(r3)
/* 801F49B4 001F18F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F49B8 001F18F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F49BC 001F18FC  7D 89 03 A6 */	mtctr r12
/* 801F49C0 001F1900  4E 80 04 21 */	bctrl 
/* 801F49C4 001F1904  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F49C8 001F1908  7C 08 03 A6 */	mtlr r0
/* 801F49CC 001F190C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F49D0 001F1910  4E 80 00 20 */	blr 

.global "init__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
"init__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item":
/* 801F49D4 001F1914  4E 80 00 20 */	blr 

.global "exec__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
"exec__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item":
/* 801F49D8 001F1918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F49DC 001F191C  7C 08 02 A6 */	mflr r0
/* 801F49E0 001F1920  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F49E4 001F1924  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801F49E8 001F1928  28 03 00 00 */	cmplwi r3, 0
/* 801F49EC 001F192C  41 82 00 14 */	beq .L_801F4A00
/* 801F49F0 001F1930  81 83 00 00 */	lwz r12, 0(r3)
/* 801F49F4 001F1934  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F49F8 001F1938  7D 89 03 A6 */	mtctr r12
/* 801F49FC 001F193C  4E 80 04 21 */	bctrl 
.L_801F4A00:
/* 801F4A00 001F1940  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4A04 001F1944  7C 08 03 A6 */	mtlr r0
/* 801F4A08 001F1948  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4A0C 001F194C  4E 80 00 20 */	blr 

.global "create__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>Fi"
"create__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>Fi":
/* 801F4A10 001F1950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4A14 001F1954  7C 08 02 A6 */	mflr r0
/* 801F4A18 001F1958  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4A1C 001F195C  38 00 00 00 */	li r0, 0
/* 801F4A20 001F1960  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4A24 001F1964  7C 7F 1B 78 */	mr r31, r3
/* 801F4A28 001F1968  90 83 00 0C */	stw r4, 0xc(r3)
/* 801F4A2C 001F196C  90 03 00 08 */	stw r0, 8(r3)
/* 801F4A30 001F1970  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F4A34 001F1974  54 03 10 3A */	slwi r3, r0, 2
/* 801F4A38 001F1978  4B E2 F5 75 */	bl __nwa__FUl
/* 801F4A3C 001F197C  90 7F 00 04 */	stw r3, 4(r31)
/* 801F4A40 001F1980  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F4A44 001F1984  54 03 10 3A */	slwi r3, r0, 2
/* 801F4A48 001F1988  4B E2 F5 65 */	bl __nwa__FUl
/* 801F4A4C 001F198C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801F4A50 001F1990  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F4A54 001F1994  54 03 10 3A */	slwi r3, r0, 2
/* 801F4A58 001F1998  4B E2 F5 55 */	bl __nwa__FUl
/* 801F4A5C 001F199C  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801F4A60 001F19A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4A64 001F19A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F4A68 001F19A8  7C 08 03 A6 */	mtlr r0
/* 801F4A6C 001F19AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4A70 001F19B0  4E 80 00 20 */	blr 

.global "transit__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
"transit__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg":
/* 801F4A74 001F19B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F4A78 001F19B8  7C 08 02 A6 */	mflr r0
/* 801F4A7C 001F19BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F4A80 001F19C0  54 A0 10 3A */	slwi r0, r5, 2
/* 801F4A84 001F19C4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801F4A88 001F19C8  7C 7B 1B 78 */	mr r27, r3
/* 801F4A8C 001F19CC  7C 9C 23 78 */	mr r28, r4
/* 801F4A90 001F19D0  7C DD 33 78 */	mr r29, r6
/* 801F4A94 001F19D4  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801F4A98 001F19D8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801F4A9C 001F19DC  28 1E 00 00 */	cmplwi r30, 0
/* 801F4AA0 001F19E0  7F E3 00 2E */	lwzx r31, r3, r0
/* 801F4AA4 001F19E4  41 82 00 20 */	beq .L_801F4AC4
/* 801F4AA8 001F19E8  7F C3 F3 78 */	mr r3, r30
/* 801F4AAC 001F19EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F4AB0 001F19F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F4AB4 001F19F4  7D 89 03 A6 */	mtctr r12
/* 801F4AB8 001F19F8  4E 80 04 21 */	bctrl 
/* 801F4ABC 001F19FC  80 1E 00 04 */	lwz r0, 4(r30)
/* 801F4AC0 001F1A00  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801F4AC4:
/* 801F4AC4 001F1A04  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801F4AC8 001F1A08  7C 1F 00 00 */	cmpw r31, r0
/* 801F4ACC 001F1A0C  41 80 00 08 */	blt .L_801F4AD4
.L_801F4AD0:
/* 801F4AD0 001F1A10  48 00 00 00 */	b .L_801F4AD0
.L_801F4AD4:
/* 801F4AD4 001F1A14  80 7B 00 04 */	lwz r3, 4(r27)
/* 801F4AD8 001F1A18  57 E0 10 3A */	slwi r0, r31, 2
/* 801F4ADC 001F1A1C  7F 84 E3 78 */	mr r4, r28
/* 801F4AE0 001F1A20  7F A5 EB 78 */	mr r5, r29
/* 801F4AE4 001F1A24  7C 63 00 2E */	lwzx r3, r3, r0
/* 801F4AE8 001F1A28  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801F4AEC 001F1A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4AF0 001F1A30  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F4AF4 001F1A34  7D 89 03 A6 */	mtctr r12
/* 801F4AF8 001F1A38  4E 80 04 21 */	bctrl 
/* 801F4AFC 001F1A3C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801F4B00 001F1A40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F4B04 001F1A44  7C 08 03 A6 */	mtlr r0
/* 801F4B08 001F1A48  38 21 00 20 */	addi r1, r1, 0x20
/* 801F4B0C 001F1A4C  4E 80 00 20 */	blr 

.global "registerState__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ24Game36FSMState<Q34Game12ItemTreasure4Item>"
"registerState__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ24Game36FSMState<Q34Game12ItemTreasure4Item>":
/* 801F4B10 001F1A50  80 C3 00 08 */	lwz r6, 8(r3)
/* 801F4B14 001F1A54  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F4B18 001F1A58  7C 06 00 00 */	cmpw r6, r0
/* 801F4B1C 001F1A5C  4C 80 00 20 */	bgelr 
/* 801F4B20 001F1A60  80 A3 00 04 */	lwz r5, 4(r3)
/* 801F4B24 001F1A64  54 C0 10 3A */	slwi r0, r6, 2
/* 801F4B28 001F1A68  7C 85 01 2E */	stwx r4, r5, r0
/* 801F4B2C 001F1A6C  80 A4 00 04 */	lwz r5, 4(r4)
/* 801F4B30 001F1A70  2C 05 00 00 */	cmpwi r5, 0
/* 801F4B34 001F1A74  41 80 00 10 */	blt .L_801F4B44
/* 801F4B38 001F1A78  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F4B3C 001F1A7C  7C 05 00 00 */	cmpw r5, r0
/* 801F4B40 001F1A80  41 80 00 0C */	blt .L_801F4B4C
.L_801F4B44:
/* 801F4B44 001F1A84  38 00 00 00 */	li r0, 0
/* 801F4B48 001F1A88  48 00 00 08 */	b .L_801F4B50
.L_801F4B4C:
/* 801F4B4C 001F1A8C  38 00 00 01 */	li r0, 1
.L_801F4B50:
/* 801F4B50 001F1A90  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F4B54 001F1A94  4D 82 00 20 */	beqlr 
/* 801F4B58 001F1A98  90 64 00 08 */	stw r3, 8(r4)
/* 801F4B5C 001F1A9C  80 03 00 08 */	lwz r0, 8(r3)
/* 801F4B60 001F1AA0  80 C4 00 04 */	lwz r6, 4(r4)
/* 801F4B64 001F1AA4  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801F4B68 001F1AA8  54 00 10 3A */	slwi r0, r0, 2
/* 801F4B6C 001F1AAC  7C C5 01 2E */	stwx r6, r5, r0
/* 801F4B70 001F1AB0  80 04 00 04 */	lwz r0, 4(r4)
/* 801F4B74 001F1AB4  80 A3 00 08 */	lwz r5, 8(r3)
/* 801F4B78 001F1AB8  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801F4B7C 001F1ABC  54 00 10 3A */	slwi r0, r0, 2
/* 801F4B80 001F1AC0  7C A4 01 2E */	stwx r5, r4, r0
/* 801F4B84 001F1AC4  80 83 00 08 */	lwz r4, 8(r3)
/* 801F4B88 001F1AC8  38 04 00 01 */	addi r0, r4, 1
/* 801F4B8C 001F1ACC  90 03 00 08 */	stw r0, 8(r3)
/* 801F4B90 001F1AD0  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent":
/* 801F4B94 001F1AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4B98 001F1AD8  7C 08 02 A6 */	mflr r0
/* 801F4B9C 001F1ADC  7C 66 1B 78 */	mr r6, r3
/* 801F4BA0 001F1AE0  7C 85 23 78 */	mr r5, r4
/* 801F4BA4 001F1AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4BA8 001F1AE8  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F4BAC 001F1AEC  28 03 00 00 */	cmplwi r3, 0
/* 801F4BB0 001F1AF0  41 82 00 18 */	beq .L_801F4BC8
/* 801F4BB4 001F1AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4BB8 001F1AF8  7C C4 33 78 */	mr r4, r6
/* 801F4BBC 001F1AFC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801F4BC0 001F1B00  7D 89 03 A6 */	mtctr r12
/* 801F4BC4 001F1B04  4E 80 04 21 */	bctrl 
.L_801F4BC8:
/* 801F4BC8 001F1B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4BCC 001F1B0C  7C 08 03 A6 */	mtlr r0
/* 801F4BD0 001F1B10  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4BD4 001F1B14  4E 80 00 20 */	blr 

.global "platCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9PlatEvent"
"platCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9PlatEvent":
/* 801F4BD8 001F1B18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4BDC 001F1B1C  7C 08 02 A6 */	mflr r0
/* 801F4BE0 001F1B20  7C 66 1B 78 */	mr r6, r3
/* 801F4BE4 001F1B24  7C 85 23 78 */	mr r5, r4
/* 801F4BE8 001F1B28  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4BEC 001F1B2C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F4BF0 001F1B30  28 03 00 00 */	cmplwi r3, 0
/* 801F4BF4 001F1B34  41 82 00 18 */	beq .L_801F4C0C
/* 801F4BF8 001F1B38  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4BFC 001F1B3C  7C C4 33 78 */	mr r4, r6
/* 801F4C00 001F1B40  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801F4C04 001F1B44  7D 89 03 A6 */	mtctr r12
/* 801F4C08 001F1B48  4E 80 04 21 */	bctrl 
.L_801F4C0C:
/* 801F4C0C 001F1B4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4C10 001F1B50  7C 08 03 A6 */	mtlr r0
/* 801F4C14 001F1B54  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4C18 001F1B58  4E 80 00 20 */	blr 

.global "collisionCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9CollEvent"
"collisionCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRQ24Game9CollEvent":
/* 801F4C1C 001F1B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4C20 001F1B60  7C 08 02 A6 */	mflr r0
/* 801F4C24 001F1B64  7C 66 1B 78 */	mr r6, r3
/* 801F4C28 001F1B68  7C 85 23 78 */	mr r5, r4
/* 801F4C2C 001F1B6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4C30 001F1B70  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F4C34 001F1B74  28 03 00 00 */	cmplwi r3, 0
/* 801F4C38 001F1B78  41 82 00 18 */	beq .L_801F4C50
/* 801F4C3C 001F1B7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4C40 001F1B80  7C C4 33 78 */	mr r4, r6
/* 801F4C44 001F1B84  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801F4C48 001F1B88  7D 89 03 A6 */	mtctr r12
/* 801F4C4C 001F1B8C  4E 80 04 21 */	bctrl 
.L_801F4C50:
/* 801F4C50 001F1B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4C54 001F1B94  7C 08 03 A6 */	mtlr r0
/* 801F4C58 001F1B98  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4C5C 001F1B9C  4E 80 00 20 */	blr 

.global "bounceCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FPQ23Sys8Triangle"
"bounceCallback__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FPQ23Sys8Triangle":
/* 801F4C60 001F1BA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4C64 001F1BA4  7C 08 02 A6 */	mflr r0
/* 801F4C68 001F1BA8  7C 66 1B 78 */	mr r6, r3
/* 801F4C6C 001F1BAC  7C 85 23 78 */	mr r5, r4
/* 801F4C70 001F1BB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4C74 001F1BB4  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F4C78 001F1BB8  28 03 00 00 */	cmplwi r3, 0
/* 801F4C7C 001F1BBC  41 82 00 18 */	beq .L_801F4C94
/* 801F4C80 001F1BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4C84 001F1BC4  7C C4 33 78 */	mr r4, r6
/* 801F4C88 001F1BC8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801F4C8C 001F1BCC  7D 89 03 A6 */	mtctr r12
/* 801F4C90 001F1BD0  4E 80 04 21 */	bctrl 
.L_801F4C94:
/* 801F4C94 001F1BD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4C98 001F1BD8  7C 08 03 A6 */	mtlr r0
/* 801F4C9C 001F1BDC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4CA0 001F1BE0  4E 80 00 20 */	blr 

.global __sinit_itemTreasure_cpp
__sinit_itemTreasure_cpp:
/* 801F4CA4 001F1BE4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801F4CA8 001F1BE8  38 00 FF FF */	li r0, -1
/* 801F4CAC 001F1BEC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801F4CB0 001F1BF0  3C 60 80 4C */	lis r3, lbl_804BBC18@ha
/* 801F4CB4 001F1BF4  90 0D 94 C8 */	stw r0, lbl_80515B48@sda21(r13)
/* 801F4CB8 001F1BF8  D4 03 BC 18 */	stfsu f0, lbl_804BBC18@l(r3)
/* 801F4CBC 001F1BFC  D0 0D 94 CC */	stfs f0, lbl_80515B4C@sda21(r13)
/* 801F4CC0 001F1C00  D0 03 00 04 */	stfs f0, 4(r3)
/* 801F4CC4 001F1C04  D0 03 00 08 */	stfs f0, 8(r3)
/* 801F4CC8 001F1C08  4E 80 00 20 */	blr 

.global "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent":
/* 801F4CCC 001F1C0C  38 63 FE 88 */	addi r3, r3, -376
/* 801F4CD0 001F1C10  4B FF FE C4 */	b "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemTreasure4Item,Q34Game12ItemTreasure3FSM,Q34Game12ItemTreasure5State>FRCQ28SysShape8KeyEvent"

.global "@48@__dt__Q34Game12ItemTreasure3MgrFv"
"@48@__dt__Q34Game12ItemTreasure3MgrFv":
/* 801F4CD4 001F1C14  38 63 FF D0 */	addi r3, r3, -48
/* 801F4CD8 001F1C18  4B FF F9 FC */	b __dt__Q34Game12ItemTreasure3MgrFv
