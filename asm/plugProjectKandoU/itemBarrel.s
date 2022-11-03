.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemBarrel_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
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
.balign 8
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
	.4byte "generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game10ItemBarrel3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game10ItemBarrel3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
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
	.4byte "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
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
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q34Game10ItemBarrel4ItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q34Game10ItemBarrel4ItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game10ItemBarrel4ItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game10ItemBarrel4ItemFv
	.4byte "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
.global "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"
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
	.4byte "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv"
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
	.4byte "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
.global "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>"
"__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>"
"__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"
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
	.4byte "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv"
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
	.4byte "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
.global __vt__Q34Game10ItemBarrel12DamagedState
__vt__Q34Game10ItemBarrel12DamagedState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
	.4byte exec__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item
	.4byte cleanup__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Itemf
	.4byte onKeyEvent__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
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
	.4byte init__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
	.4byte exec__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item
	.4byte cleanup__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Itemf
	.4byte onKeyEvent__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
.global __vt__Q34Game10ItemBarrel11NormalState
__vt__Q34Game10ItemBarrel11NormalState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
	.4byte exec__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
	.4byte cleanup__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Itemf
	.4byte onKeyEvent__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
.global __vt__Q34Game10ItemBarrel5State
__vt__Q34Game10ItemBarrel5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game10ItemBarrel5StateFPQ34Game10ItemBarrel4Itemf
	.4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"
"__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Itemf"
	.4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"
"__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
.global __vt__Q34Game10ItemBarrel3FSM
__vt__Q34Game10ItemBarrel3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ItemBarrel3FSMFPQ34Game10ItemBarrel4Item
	.4byte "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
	.4byte "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
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
.balign 8
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game10ItemBarrel3FSMFPQ34Game10ItemBarrel4Item
init__Q34Game10ItemBarrel3FSMFPQ34Game10ItemBarrel4Item:
/* 801F7970 001F48B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7974 001F48B4  7C 08 02 A6 */	mflr r0
/* 801F7978 001F48B8  38 80 00 03 */	li r4, 3
/* 801F797C 001F48BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7980 001F48C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F7984 001F48C4  7C 7F 1B 78 */	mr r31, r3
/* 801F7988 001F48C8  48 00 14 81 */	bl "create__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>Fi"
/* 801F798C 001F48CC  38 60 00 10 */	li r3, 0x10
/* 801F7990 001F48D0  4B E2 C5 15 */	bl __nw__FUl
/* 801F7994 001F48D4  7C 64 1B 79 */	or. r4, r3, r3
/* 801F7998 001F48D8  41 82 00 40 */	beq .L_801F79D8
/* 801F799C 001F48DC  3C 60 80 4C */	lis r3, "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"@ha
/* 801F79A0 001F48E0  3C C0 80 4C */	lis r6, "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"@ha
/* 801F79A4 001F48E4  38 03 D5 34 */	addi r0, r3, "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"@l
/* 801F79A8 001F48E8  3C A0 80 4C */	lis r5, __vt__Q34Game10ItemBarrel5State@ha
/* 801F79AC 001F48EC  90 04 00 00 */	stw r0, 0(r4)
/* 801F79B0 001F48F0  38 E0 00 00 */	li r7, 0
/* 801F79B4 001F48F4  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel11NormalState@ha
/* 801F79B8 001F48F8  38 C6 D5 00 */	addi r6, r6, "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"@l
/* 801F79BC 001F48FC  90 E4 00 04 */	stw r7, 4(r4)
/* 801F79C0 001F4900  38 A5 D4 CC */	addi r5, r5, __vt__Q34Game10ItemBarrel5State@l
/* 801F79C4 001F4904  38 03 D4 98 */	addi r0, r3, __vt__Q34Game10ItemBarrel11NormalState@l
/* 801F79C8 001F4908  90 E4 00 08 */	stw r7, 8(r4)
/* 801F79CC 001F490C  90 C4 00 00 */	stw r6, 0(r4)
/* 801F79D0 001F4910  90 A4 00 00 */	stw r5, 0(r4)
/* 801F79D4 001F4914  90 04 00 00 */	stw r0, 0(r4)
.L_801F79D8:
/* 801F79D8 001F4918  7F E3 FB 78 */	mr r3, r31
/* 801F79DC 001F491C  48 00 15 2D */	bl "registerState__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ24Game34FSMState<Q34Game10ItemBarrel4Item>"
/* 801F79E0 001F4920  38 60 00 14 */	li r3, 0x14
/* 801F79E4 001F4924  4B E2 C4 C1 */	bl __nw__FUl
/* 801F79E8 001F4928  7C 64 1B 79 */	or. r4, r3, r3
/* 801F79EC 001F492C  41 82 00 44 */	beq .L_801F7A30
/* 801F79F0 001F4930  3C 60 80 4C */	lis r3, "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"@ha
/* 801F79F4 001F4934  3C C0 80 4C */	lis r6, "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"@ha
/* 801F79F8 001F4938  38 03 D5 34 */	addi r0, r3, "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"@l
/* 801F79FC 001F493C  3C A0 80 4C */	lis r5, __vt__Q34Game10ItemBarrel5State@ha
/* 801F7A00 001F4940  90 04 00 00 */	stw r0, 0(r4)
/* 801F7A04 001F4944  38 00 00 01 */	li r0, 1
/* 801F7A08 001F4948  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel12DamagedState@ha
/* 801F7A0C 001F494C  38 E0 00 00 */	li r7, 0
/* 801F7A10 001F4950  90 04 00 04 */	stw r0, 4(r4)
/* 801F7A14 001F4954  38 C6 D5 00 */	addi r6, r6, "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"@l
/* 801F7A18 001F4958  38 A5 D4 CC */	addi r5, r5, __vt__Q34Game10ItemBarrel5State@l
/* 801F7A1C 001F495C  38 03 D4 1C */	addi r0, r3, __vt__Q34Game10ItemBarrel12DamagedState@l
/* 801F7A20 001F4960  90 E4 00 08 */	stw r7, 8(r4)
/* 801F7A24 001F4964  90 C4 00 00 */	stw r6, 0(r4)
/* 801F7A28 001F4968  90 A4 00 00 */	stw r5, 0(r4)
/* 801F7A2C 001F496C  90 04 00 00 */	stw r0, 0(r4)
.L_801F7A30:
/* 801F7A30 001F4970  7F E3 FB 78 */	mr r3, r31
/* 801F7A34 001F4974  48 00 14 D5 */	bl "registerState__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ24Game34FSMState<Q34Game10ItemBarrel4Item>"
/* 801F7A38 001F4978  38 60 00 14 */	li r3, 0x14
/* 801F7A3C 001F497C  4B E2 C4 69 */	bl __nw__FUl
/* 801F7A40 001F4980  7C 64 1B 79 */	or. r4, r3, r3
/* 801F7A44 001F4984  41 82 00 44 */	beq .L_801F7A88
/* 801F7A48 001F4988  3C 60 80 4C */	lis r3, "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"@ha
/* 801F7A4C 001F498C  3C C0 80 4C */	lis r6, "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"@ha
/* 801F7A50 001F4990  38 03 D5 34 */	addi r0, r3, "__vt__Q24Game34FSMState<Q34Game10ItemBarrel4Item>"@l
/* 801F7A54 001F4994  3C A0 80 4C */	lis r5, __vt__Q34Game10ItemBarrel5State@ha
/* 801F7A58 001F4998  90 04 00 00 */	stw r0, 0(r4)
/* 801F7A5C 001F499C  38 00 00 02 */	li r0, 2
/* 801F7A60 001F49A0  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel9DeadState@ha
/* 801F7A64 001F49A4  38 E0 00 00 */	li r7, 0
/* 801F7A68 001F49A8  90 04 00 04 */	stw r0, 4(r4)
/* 801F7A6C 001F49AC  38 C6 D5 00 */	addi r6, r6, "__vt__Q24Game35ItemState<Q34Game10ItemBarrel4Item>"@l
/* 801F7A70 001F49B0  38 A5 D4 CC */	addi r5, r5, __vt__Q34Game10ItemBarrel5State@l
/* 801F7A74 001F49B4  38 03 D4 64 */	addi r0, r3, __vt__Q34Game10ItemBarrel9DeadState@l
/* 801F7A78 001F49B8  90 E4 00 08 */	stw r7, 8(r4)
/* 801F7A7C 001F49BC  90 C4 00 00 */	stw r6, 0(r4)
/* 801F7A80 001F49C0  90 A4 00 00 */	stw r5, 0(r4)
/* 801F7A84 001F49C4  90 04 00 00 */	stw r0, 0(r4)
.L_801F7A88:
/* 801F7A88 001F49C8  7F E3 FB 78 */	mr r3, r31
/* 801F7A8C 001F49CC  48 00 14 7D */	bl "registerState__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ24Game34FSMState<Q34Game10ItemBarrel4Item>"
/* 801F7A90 001F49D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7A94 001F49D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F7A98 001F49D8  7C 08 03 A6 */	mtlr r0
/* 801F7A9C 001F49DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7AA0 001F49E0  4E 80 00 20 */	blr 

.global init__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
init__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg:
/* 801F7AA4 001F49E4  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F7AA8 001F49E8  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 801F7AAC 001F49EC  4E 80 00 20 */	blr 

.global exec__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
exec__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item:
/* 801F7AB0 001F49F0  4E 80 00 20 */	blr 

.global cleanup__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
cleanup__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item:
/* 801F7AB4 001F49F4  4E 80 00 20 */	blr 

.global onDamage__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Itemf
onDamage__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Itemf:
/* 801F7AB8 001F49F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7ABC 001F49FC  7C 08 02 A6 */	mflr r0
/* 801F7AC0 001F4A00  C0 42 B9 30 */	lfs f2, lbl_80519C90@sda21(r2)
/* 801F7AC4 001F4A04  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7AC8 001F4A08  C0 04 01 F4 */	lfs f0, 0x1f4(r4)
/* 801F7ACC 001F4A0C  EC 00 08 2A */	fadds f0, f0, f1
/* 801F7AD0 001F4A10  D0 04 01 F4 */	stfs f0, 0x1f4(r4)
/* 801F7AD4 001F4A14  C0 24 01 EC */	lfs f1, 0x1ec(r4)
/* 801F7AD8 001F4A18  C0 04 01 F4 */	lfs f0, 0x1f4(r4)
/* 801F7ADC 001F4A1C  EC 01 00 28 */	fsubs f0, f1, f0
/* 801F7AE0 001F4A20  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 801F7AE4 001F4A24  D0 44 01 F4 */	stfs f2, 0x1f4(r4)
/* 801F7AE8 001F4A28  C0 04 01 EC */	lfs f0, 0x1ec(r4)
/* 801F7AEC 001F4A2C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801F7AF0 001F4A30  40 80 00 1C */	bge .L_801F7B0C
/* 801F7AF4 001F4A34  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7AF8 001F4A38  38 A0 00 02 */	li r5, 2
/* 801F7AFC 001F4A3C  38 C0 00 00 */	li r6, 0
/* 801F7B00 001F4A40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F7B04 001F4A44  7D 89 03 A6 */	mtctr r12
/* 801F7B08 001F4A48  4E 80 04 21 */	bctrl 
.L_801F7B0C:
/* 801F7B0C 001F4A4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7B10 001F4A50  7C 08 03 A6 */	mtlr r0
/* 801F7B14 001F4A54  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7B18 001F4A58  4E 80 00 20 */	blr 

.global "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
"transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg":
/* 801F7B1C 001F4A5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7B20 001F4A60  7C 08 02 A6 */	mflr r0
/* 801F7B24 001F4A64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7B28 001F4A68  80 63 00 08 */	lwz r3, 8(r3)
/* 801F7B2C 001F4A6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7B30 001F4A70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F7B34 001F4A74  7D 89 03 A6 */	mtctr r12
/* 801F7B38 001F4A78  4E 80 04 21 */	bctrl 
/* 801F7B3C 001F4A7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7B40 001F4A80  7C 08 03 A6 */	mtlr r0
/* 801F7B44 001F4A84  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7B48 001F4A88  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent:
/* 801F7B4C 001F4A8C  4E 80 00 20 */	blr 

.global init__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
init__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg:
/* 801F7B50 001F4A90  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F7B54 001F4A94  7C 08 02 A6 */	mflr r0
/* 801F7B58 001F4A98  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F7B5C 001F4A9C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801F7B60 001F4AA0  7C 9F 23 79 */	or. r31, r4, r4
/* 801F7B64 001F4AA4  7F E5 FB 78 */	mr r5, r31
/* 801F7B68 001F4AA8  41 82 00 08 */	beq .L_801F7B70
/* 801F7B6C 001F4AAC  38 A5 01 78 */	addi r5, r5, 0x178
.L_801F7B70:
/* 801F7B70 001F4AB0  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F7B74 001F4AB4  38 80 00 01 */	li r4, 1
/* 801F7B78 001F4AB8  48 23 11 11 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F7B7C 001F4ABC  C0 02 B9 34 */	lfs f0, lbl_80519C94@sda21(r2)
/* 801F7B80 001F4AC0  7F E3 FB 78 */	mr r3, r31
/* 801F7B84 001F4AC4  38 80 00 00 */	li r4, 0
/* 801F7B88 001F4AC8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801F7B8C 001F4ACC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F7B90 001F4AD0  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F7B94 001F4AD4  7D 89 03 A6 */	mtctr r12
/* 801F7B98 001F4AD8  4E 80 04 21 */	bctrl 
/* 801F7B9C 001F4ADC  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F7BA0 001F4AE0  48 03 70 91 */	bl finish__Q24Game11TSoundEventFv
/* 801F7BA4 001F4AE4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F7BA8 001F4AE8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F7BAC 001F4AEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F7BB0 001F4AF0  7D 89 03 A6 */	mtctr r12
/* 801F7BB4 001F4AF4  4E 80 04 21 */	bctrl 
/* 801F7BB8 001F4AF8  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F7BBC 001F4AFC  41 82 00 20 */	beq .L_801F7BDC
/* 801F7BC0 001F4B00  3C 60 80 48 */	lis r3, lbl_804819E0@ha
/* 801F7BC4 001F4B04  3C A0 80 48 */	lis r5, lbl_804819F0@ha
/* 801F7BC8 001F4B08  38 63 19 E0 */	addi r3, r3, lbl_804819E0@l
/* 801F7BCC 001F4B0C  38 80 00 90 */	li r4, 0x90
/* 801F7BD0 001F4B10  38 A5 19 F0 */	addi r5, r5, lbl_804819F0@l
/* 801F7BD4 001F4B14  4C C6 31 82 */	crclr 6
/* 801F7BD8 001F4B18  4B E3 2A 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F7BDC:
/* 801F7BDC 001F4B1C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F7BE0 001F4B20  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F7BE4 001F4B24  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 801F7BE8 001F4B28  7D 89 03 A6 */	mtctr r12
/* 801F7BEC 001F4B2C  4E 80 04 21 */	bctrl 
/* 801F7BF0 001F4B30  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 801F7BF4 001F4B34  38 80 18 1C */	li r4, 0x181c
/* 801F7BF8 001F4B38  38 A0 00 00 */	li r5, 0
/* 801F7BFC 001F4B3C  48 14 0A 35 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 801F7C00 001F4B40  7F E3 FB 78 */	mr r3, r31
/* 801F7C04 001F4B44  38 80 58 6B */	li r4, 0x586b
/* 801F7C08 001F4B48  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F7C0C 001F4B4C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801F7C10 001F4B50  7D 89 03 A6 */	mtctr r12
/* 801F7C14 001F4B54  4E 80 04 21 */	bctrl 
/* 801F7C18 001F4B58  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801F7C1C 001F4B5C  38 A0 00 00 */	li r5, 0
/* 801F7C20 001F4B60  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801F7C24 001F4B64  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 801F7C28 001F4B68  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F7C2C 001F4B6C  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 801F7C30 001F4B70  3C 60 80 4C */	lis r3, __vt__Q23efx11TBarrelDead@ha
/* 801F7C34 001F4B74  38 80 00 05 */	li r4, 5
/* 801F7C38 001F4B78  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F7C3C 001F4B7C  38 03 D4 50 */	addi r0, r3, __vt__Q23efx11TBarrelDead@l
/* 801F7C40 001F4B80  38 E0 00 06 */	li r7, 6
/* 801F7C44 001F4B84  38 C0 00 07 */	li r6, 7
/* 801F7C48 001F4B88  B0 81 00 28 */	sth r4, 0x28(r1)
/* 801F7C4C 001F4B8C  7F E4 FB 78 */	mr r4, r31
/* 801F7C50 001F4B90  38 61 00 08 */	addi r3, r1, 8
/* 801F7C54 001F4B94  B0 E1 00 2A */	sth r7, 0x2a(r1)
/* 801F7C58 001F4B98  B0 C1 00 2C */	sth r6, 0x2c(r1)
/* 801F7C5C 001F4B9C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801F7C60 001F4BA0  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801F7C64 001F4BA4  90 A1 00 38 */	stw r5, 0x38(r1)
/* 801F7C68 001F4BA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F7C6C 001F4BAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F7C70 001F4BB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F7C74 001F4BB4  7D 89 03 A6 */	mtctr r12
/* 801F7C78 001F4BB8  4E 80 04 21 */	bctrl 
/* 801F7C7C 001F4BBC  C0 41 00 08 */	lfs f2, 8(r1)
/* 801F7C80 001F4BC0  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801F7C84 001F4BC4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801F7C88 001F4BC8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801F7C8C 001F4BCC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801F7C90 001F4BD0  38 61 00 24 */	addi r3, r1, 0x24
/* 801F7C94 001F4BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7C98 001F4BD8  38 81 00 14 */	addi r4, r1, 0x14
/* 801F7C9C 001F4BDC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801F7CA0 001F4BE0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801F7CA4 001F4BE4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801F7CA8 001F4BE8  48 1B 74 15 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 801F7CAC 001F4BEC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F7CB0 001F4BF0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801F7CB4 001F4BF4  7C 08 03 A6 */	mtlr r0
/* 801F7CB8 001F4BF8  38 21 00 50 */	addi r1, r1, 0x50
/* 801F7CBC 001F4BFC  4E 80 00 20 */	blr 

.global exec__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item
exec__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item:
/* 801F7CC0 001F4C00  4E 80 00 20 */	blr 

.global cleanup__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item
cleanup__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item:
/* 801F7CC4 001F4C04  4E 80 00 20 */	blr 

.global onDamage__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Itemf
onDamage__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Itemf:
/* 801F7CC8 001F4C08  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent:
/* 801F7CCC 001F4C0C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F7CD0 001F4C10  7C 08 02 A6 */	mflr r0
/* 801F7CD4 001F4C14  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F7CD8 001F4C18  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801F7CDC 001F4C1C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801F7CE0 001F4C20  7C 9E 23 78 */	mr r30, r4
/* 801F7CE4 001F4C24  38 9E 01 C4 */	addi r4, r30, 0x1c4
/* 801F7CE8 001F4C28  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F7CEC 001F4C2C  4B F6 BC 3D */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 801F7CF0 001F4C30  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F7CF4 001F4C34  41 82 00 E8 */	beq .L_801F7DDC
/* 801F7CF8 001F4C38  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801F7CFC 001F4C3C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801F7D00 001F4C40  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801F7D04 001F4C44  41 82 00 D8 */	beq .L_801F7DDC
/* 801F7D08 001F4C48  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F7D0C 001F4C4C  3C 60 80 48 */	lis r3, lbl_804819FC@ha
/* 801F7D10 001F4C50  38 00 00 00 */	li r0, 0
/* 801F7D14 001F4C54  7F C4 F3 78 */	mr r4, r30
/* 801F7D18 001F4C58  38 A3 19 FC */	addi r5, r3, lbl_804819FC@l
/* 801F7D1C 001F4C5C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F7D20 001F4C60  38 61 00 08 */	addi r3, r1, 8
/* 801F7D24 001F4C64  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801F7D28 001F4C68  90 01 00 20 */	stw r0, 0x20(r1)
/* 801F7D2C 001F4C6C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801F7D30 001F4C70  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801F7D34 001F4C74  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801F7D38 001F4C78  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801F7D3C 001F4C7C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801F7D40 001F4C80  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F7D44 001F4C84  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801F7D48 001F4C88  90 01 00 40 */	stw r0, 0x40(r1)
/* 801F7D4C 001F4C8C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F7D50 001F4C90  90 01 00 44 */	stw r0, 0x44(r1)
/* 801F7D54 001F4C94  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F7D58 001F4C98  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F7D5C 001F4C9C  7D 89 03 A6 */	mtctr r12
/* 801F7D60 001F4CA0  4E 80 04 21 */	bctrl 
/* 801F7D64 001F4CA4  C0 41 00 08 */	lfs f2, 8(r1)
/* 801F7D68 001F4CA8  7F C3 F3 78 */	mr r3, r30
/* 801F7D6C 001F4CAC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801F7D70 001F4CB0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801F7D74 001F4CB4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801F7D78 001F4CB8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801F7D7C 001F4CBC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801F7D80 001F4CC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F7D84 001F4CC4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801F7D88 001F4CC8  7D 89 03 A6 */	mtctr r12
/* 801F7D8C 001F4CCC  4E 80 04 21 */	bctrl 
/* 801F7D90 001F4CD0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801F7D94 001F4CD4  38 81 00 14 */	addi r4, r1, 0x14
/* 801F7D98 001F4CD8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801F7D9C 001F4CDC  93 C3 01 94 */	stw r30, 0x194(r3)
/* 801F7DA0 001F4CE0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801F7DA4 001F4CE4  48 23 4C 2D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801F7DA8 001F4CE8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F7DAC 001F4CEC  38 80 38 47 */	li r4, 0x3847
/* 801F7DB0 001F4CF0  38 A0 00 00 */	li r5, 0
/* 801F7DB4 001F4CF4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F7DB8 001F4CF8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801F7DBC 001F4CFC  7D 89 03 A6 */	mtctr r12
/* 801F7DC0 001F4D00  4E 80 04 21 */	bctrl 
/* 801F7DC4 001F4D04  7F E3 FB 78 */	mr r3, r31
/* 801F7DC8 001F4D08  C0 22 B9 38 */	lfs f1, lbl_80519C98@sda21(r2)
/* 801F7DCC 001F4D0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F7DD0 001F4D10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F7DD4 001F4D14  7D 89 03 A6 */	mtctr r12
/* 801F7DD8 001F4D18  4E 80 04 21 */	bctrl 
.L_801F7DDC:
/* 801F7DDC 001F4D1C  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F7DE0 001F4D20  7F C4 F3 78 */	mr r4, r30
/* 801F7DE4 001F4D24  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801F7DE8 001F4D28  80 6D 94 F0 */	lwz r3, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801F7DEC 001F4D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7DF0 001F4D30  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801F7DF4 001F4D34  7D 89 03 A6 */	mtctr r12
/* 801F7DF8 001F4D38  4E 80 04 21 */	bctrl 
/* 801F7DFC 001F4D3C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F7E00 001F4D40  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801F7E04 001F4D44  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801F7E08 001F4D48  7C 08 03 A6 */	mtlr r0
/* 801F7E0C 001F4D4C  38 21 00 50 */	addi r1, r1, 0x50
/* 801F7E10 001F4D50  4E 80 00 20 */	blr 

.global init__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
init__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg:
/* 801F7E14 001F4D54  4E 80 00 20 */	blr 

.global exec__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item
exec__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item:
/* 801F7E18 001F4D58  4E 80 00 20 */	blr 

.global cleanup__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item
cleanup__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item:
/* 801F7E1C 001F4D5C  4E 80 00 20 */	blr 

.global onDamage__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Itemf
onDamage__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Itemf:
/* 801F7E20 001F4D60  C0 04 01 F4 */	lfs f0, 0x1f4(r4)
/* 801F7E24 001F4D64  EC 00 08 2A */	fadds f0, f0, f1
/* 801F7E28 001F4D68  D0 04 01 F4 */	stfs f0, 0x1f4(r4)
/* 801F7E2C 001F4D6C  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent:
/* 801F7E30 001F4D70  4E 80 00 20 */	blr 

.global doSave__Q34Game10ItemBarrel4ItemFR6Stream
doSave__Q34Game10ItemBarrel4ItemFR6Stream:
/* 801F7E34 001F4D74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7E38 001F4D78  7C 08 02 A6 */	mflr r0
/* 801F7E3C 001F4D7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7E40 001F4D80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F7E44 001F4D84  7C 9F 23 78 */	mr r31, r4
/* 801F7E48 001F4D88  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7E4C 001F4D8C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801F7E50 001F4D90  7D 89 03 A6 */	mtctr r12
/* 801F7E54 001F4D94  4E 80 04 21 */	bctrl 
/* 801F7E58 001F4D98  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 801F7E5C 001F4D9C  7F E3 FB 78 */	mr r3, r31
/* 801F7E60 001F4DA0  48 21 D8 11 */	bl writeByte__6StreamFUc
/* 801F7E64 001F4DA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7E68 001F4DA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F7E6C 001F4DAC  7C 08 03 A6 */	mtlr r0
/* 801F7E70 001F4DB0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7E74 001F4DB4  4E 80 00 20 */	blr 

.global doLoad__Q34Game10ItemBarrel4ItemFR6Stream
doLoad__Q34Game10ItemBarrel4ItemFR6Stream:
/* 801F7E78 001F4DB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7E7C 001F4DBC  7C 08 02 A6 */	mflr r0
/* 801F7E80 001F4DC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7E84 001F4DC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F7E88 001F4DC8  7C 7F 1B 78 */	mr r31, r3
/* 801F7E8C 001F4DCC  7C 83 23 78 */	mr r3, r4
/* 801F7E90 001F4DD0  48 21 C6 0D */	bl readByte__6StreamFv
/* 801F7E94 001F4DD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F7E98 001F4DD8  40 82 00 88 */	bne .L_801F7F20
/* 801F7E9C 001F4DDC  28 1F 00 00 */	cmplwi r31, 0
/* 801F7EA0 001F4DE0  7F E5 FB 78 */	mr r5, r31
/* 801F7EA4 001F4DE4  41 82 00 08 */	beq .L_801F7EAC
/* 801F7EA8 001F4DE8  38 BF 01 78 */	addi r5, r31, 0x178
.L_801F7EAC:
/* 801F7EAC 001F4DEC  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F7EB0 001F4DF0  38 80 00 01 */	li r4, 1
/* 801F7EB4 001F4DF4  48 23 0D D5 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F7EB8 001F4DF8  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F7EBC 001F4DFC  48 23 10 45 */	bl setLastFrame__Q28SysShape8AnimatorFv
/* 801F7EC0 001F4E00  7F E3 FB 78 */	mr r3, r31
/* 801F7EC4 001F4E04  38 80 00 00 */	li r4, 0
/* 801F7EC8 001F4E08  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F7ECC 001F4E0C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F7ED0 001F4E10  7D 89 03 A6 */	mtctr r12
/* 801F7ED4 001F4E14  4E 80 04 21 */	bctrl 
/* 801F7ED8 001F4E18  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F7EDC 001F4E1C  38 9F 01 C4 */	addi r4, r31, 0x1c4
/* 801F7EE0 001F4E20  4B F6 BA 49 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 801F7EE4 001F4E24  28 03 00 00 */	cmplwi r3, 0
/* 801F7EE8 001F4E28  41 82 00 18 */	beq .L_801F7F00
/* 801F7EEC 001F4E2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7EF0 001F4E30  C0 22 B9 38 */	lfs f1, lbl_80519C98@sda21(r2)
/* 801F7EF4 001F4E34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F7EF8 001F4E38  7D 89 03 A6 */	mtctr r12
/* 801F7EFC 001F4E3C  4E 80 04 21 */	bctrl 
.L_801F7F00:
/* 801F7F00 001F4E40  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F7F04 001F4E44  7F E4 FB 78 */	mr r4, r31
/* 801F7F08 001F4E48  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801F7F0C 001F4E4C  80 6D 94 F0 */	lwz r3, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801F7F10 001F4E50  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7F14 001F4E54  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801F7F18 001F4E58  7D 89 03 A6 */	mtctr r12
/* 801F7F1C 001F4E5C  4E 80 04 21 */	bctrl 
.L_801F7F20:
/* 801F7F20 001F4E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7F24 001F4E64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F7F28 001F4E68  7C 08 03 A6 */	mtlr r0
/* 801F7F2C 001F4E6C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7F30 001F4E70  4E 80 00 20 */	blr 

.global constructor__Q34Game10ItemBarrel4ItemFv
constructor__Q34Game10ItemBarrel4ItemFv:
/* 801F7F34 001F4E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7F38 001F4E78  7C 08 02 A6 */	mflr r0
/* 801F7F3C 001F4E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7F40 001F4E80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F7F44 001F4E84  7C 7F 1B 78 */	mr r31, r3
/* 801F7F48 001F4E88  38 60 00 84 */	li r3, 0x84
/* 801F7F4C 001F4E8C  4B E2 BF 59 */	bl __nw__FUl
/* 801F7F50 001F4E90  7C 60 1B 79 */	or. r0, r3, r3
/* 801F7F54 001F4E94  41 82 00 10 */	beq .L_801F7F64
/* 801F7F58 001F4E98  7F E4 FB 78 */	mr r4, r31
/* 801F7F5C 001F4E9C  48 26 96 C5 */	bl __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
/* 801F7F60 001F4EA0  7C 60 1B 78 */	mr r0, r3
.L_801F7F64:
/* 801F7F64 001F4EA4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801F7F68 001F4EA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7F6C 001F4EAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F7F70 001F4EB0  7C 08 03 A6 */	mtlr r0
/* 801F7F74 001F4EB4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7F78 001F4EB8  4E 80 00 20 */	blr 

.global onInit__Q34Game10ItemBarrel4ItemFPQ24Game15CreatureInitArg
onInit__Q34Game10ItemBarrel4ItemFPQ24Game15CreatureInitArg:
/* 801F7F7C 001F4EBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7F80 001F4EC0  7C 08 02 A6 */	mflr r0
/* 801F7F84 001F4EC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7F88 001F4EC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F7F8C 001F4ECC  93 C1 00 08 */	stw r30, 8(r1)
/* 801F7F90 001F4ED0  7C 7E 1B 78 */	mr r30, r3
/* 801F7F94 001F4ED4  38 60 00 14 */	li r3, 0x14
/* 801F7F98 001F4ED8  4B E2 BF 0D */	bl __nw__FUl
/* 801F7F9C 001F4EDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F7FA0 001F4EE0  41 82 00 28 */	beq .L_801F7FC8
/* 801F7FA4 001F4EE4  80 6D 94 F0 */	lwz r3, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801F7FA8 001F4EE8  38 80 00 00 */	li r4, 0
/* 801F7FAC 001F4EEC  4B FD 51 A5 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 801F7FB0 001F4EF0  7C 64 1B 78 */	mr r4, r3
/* 801F7FB4 001F4EF4  7F E3 FB 78 */	mr r3, r31
/* 801F7FB8 001F4EF8  3C A0 00 02 */	lis r5, 2
/* 801F7FBC 001F4EFC  38 C0 00 02 */	li r6, 2
/* 801F7FC0 001F4F00  48 24 62 19 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801F7FC4 001F4F04  7C 7F 1B 78 */	mr r31, r3
.L_801F7FC8:
/* 801F7FC8 001F4F08  93 FE 01 74 */	stw r31, 0x174(r30)
/* 801F7FCC 001F4F0C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801F7FD0 001F4F10  80 63 00 08 */	lwz r3, 8(r3)
/* 801F7FD4 001F4F14  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7FD8 001F4F18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F7FDC 001F4F1C  7D 89 03 A6 */	mtctr r12
/* 801F7FE0 001F4F20  4E 80 04 21 */	bctrl 
/* 801F7FE4 001F4F24  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801F7FE8 001F4F28  80 63 00 08 */	lwz r3, 8(r3)
/* 801F7FEC 001F4F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7FF0 001F4F30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F7FF4 001F4F34  7D 89 03 A6 */	mtctr r12
/* 801F7FF8 001F4F38  4E 80 04 21 */	bctrl 
/* 801F7FFC 001F4F3C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801F8000 001F4F40  80 63 00 08 */	lwz r3, 8(r3)
/* 801F8004 001F4F44  4B E6 E9 21 */	bl makeDL__8J3DModelFv
/* 801F8008 001F4F48  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801F800C 001F4F4C  80 63 00 08 */	lwz r3, 8(r3)
/* 801F8010 001F4F50  4B E6 E7 E5 */	bl lock__8J3DModelFv
/* 801F8014 001F4F54  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801F8018 001F4F58  7F C4 F3 78 */	mr r4, r30
/* 801F801C 001F4F5C  38 A0 00 00 */	li r5, 0
/* 801F8020 001F4F60  38 C0 00 00 */	li r6, 0
/* 801F8024 001F4F64  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8028 001F4F68  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F802C 001F4F6C  7D 89 03 A6 */	mtctr r12
/* 801F8030 001F4F70  4E 80 04 21 */	bctrl 
/* 801F8034 001F4F74  7F C3 F3 78 */	mr r3, r30
/* 801F8038 001F4F78  38 80 00 01 */	li r4, 1
/* 801F803C 001F4F7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F8040 001F4F80  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F8044 001F4F84  7D 89 03 A6 */	mtctr r12
/* 801F8048 001F4F88  4E 80 04 21 */	bctrl 
/* 801F804C 001F4F8C  7F C3 F3 78 */	mr r3, r30
/* 801F8050 001F4F90  48 00 04 29 */	bl createBarrel__Q34Game10ItemBarrel4ItemFv
/* 801F8054 001F4F94  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F8058 001F4F98  28 1E 00 00 */	cmplwi r30, 0
/* 801F805C 001F4F9C  7F C5 F3 78 */	mr r5, r30
/* 801F8060 001F4FA0  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801F8064 001F4FA4  80 6D 94 F0 */	lwz r3, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801F8068 001F4FA8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 801F806C 001F4FAC  90 1E 01 B8 */	stw r0, 0x1b8(r30)
/* 801F8070 001F4FB0  41 82 00 08 */	beq .L_801F8078
/* 801F8074 001F4FB4  38 BE 01 78 */	addi r5, r30, 0x178
.L_801F8078:
/* 801F8078 001F4FB8  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801F807C 001F4FBC  38 80 00 01 */	li r4, 1
/* 801F8080 001F4FC0  48 23 0C 09 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F8084 001F4FC4  80 AD 94 F0 */	lwz r5, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801F8088 001F4FC8  38 C0 00 00 */	li r6, 0
/* 801F808C 001F4FCC  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 801F8090 001F4FD0  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 801F8094 001F4FD4  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 801F8098 001F4FD8  4B F3 BF D5 */	bl createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
/* 801F809C 001F4FDC  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F80A0 001F4FE0  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
/* 801F80A4 001F4FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F80A8 001F4FE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F80AC 001F4FEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F80B0 001F4FF0  7C 08 03 A6 */	mtlr r0
/* 801F80B4 001F4FF4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F80B8 001F4FF8  4E 80 00 20 */	blr 

.global "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
"start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg":
/* 801F80BC 001F4FFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F80C0 001F5000  7C 08 02 A6 */	mflr r0
/* 801F80C4 001F5004  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F80C8 001F5008  38 00 00 00 */	li r0, 0
/* 801F80CC 001F500C  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801F80D0 001F5010  81 83 00 00 */	lwz r12, 0(r3)
/* 801F80D4 001F5014  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F80D8 001F5018  7D 89 03 A6 */	mtctr r12
/* 801F80DC 001F501C  4E 80 04 21 */	bctrl 
/* 801F80E0 001F5020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F80E4 001F5024  7C 08 03 A6 */	mtlr r0
/* 801F80E8 001F5028  38 21 00 10 */	addi r1, r1, 0x10
/* 801F80EC 001F502C  4E 80 00 20 */	blr 

.global onSetPosition__Q34Game10ItemBarrel4ItemFv
onSetPosition__Q34Game10ItemBarrel4ItemFv:
/* 801F80F0 001F5030  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F80F4 001F5034  7C 08 02 A6 */	mflr r0
/* 801F80F8 001F5038  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F80FC 001F503C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8100 001F5040  7C 7F 1B 78 */	mr r31, r3
/* 801F8104 001F5044  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8108 001F5048  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 801F810C 001F504C  7D 89 03 A6 */	mtctr r12
/* 801F8110 001F5050  4E 80 04 21 */	bctrl 
/* 801F8114 001F5054  7F E3 FB 78 */	mr r3, r31
/* 801F8118 001F5058  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F811C 001F505C  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 801F8120 001F5060  7D 89 03 A6 */	mtctr r12
/* 801F8124 001F5064  4E 80 04 21 */	bctrl 
/* 801F8128 001F5068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F812C 001F506C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8130 001F5070  7C 08 03 A6 */	mtlr r0
/* 801F8134 001F5074  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8138 001F5078  4E 80 00 20 */	blr 

.global updateBoundSphere__Q34Game10ItemBarrel4ItemFv
updateBoundSphere__Q34Game10ItemBarrel4ItemFv:
/* 801F813C 001F507C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8140 001F5080  7C 08 02 A6 */	mflr r0
/* 801F8144 001F5084  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8148 001F5088  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F814C 001F508C  7C 7F 1B 78 */	mr r31, r3
/* 801F8150 001F5090  48 00 02 0D */	bl getWorkRadius__Q34Game10ItemBarrel4ItemFv
/* 801F8154 001F5094  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801F8158 001F5098  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
/* 801F815C 001F509C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801F8160 001F50A0  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 801F8164 001F50A4  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801F8168 001F50A8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 801F816C 001F50AC  D0 3F 01 D0 */	stfs f1, 0x1d0(r31)
/* 801F8170 001F50B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8174 001F50B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8178 001F50B8  7C 08 03 A6 */	mtlr r0
/* 801F817C 001F50BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8180 001F50C0  4E 80 00 20 */	blr 

.global doAI__Q34Game10ItemBarrel4ItemFv
doAI__Q34Game10ItemBarrel4ItemFv:
/* 801F8184 001F50C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8188 001F50C8  7C 08 02 A6 */	mflr r0
/* 801F818C 001F50CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8190 001F50D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8194 001F50D4  93 C1 00 08 */	stw r30, 8(r1)
/* 801F8198 001F50D8  7C 7E 1B 78 */	mr r30, r3
/* 801F819C 001F50DC  7F C4 F3 78 */	mr r4, r30
/* 801F81A0 001F50E0  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F81A4 001F50E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F81A8 001F50E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F81AC 001F50EC  7D 89 03 A6 */	mtctr r12
/* 801F81B0 001F50F0  4E 80 04 21 */	bctrl 
/* 801F81B4 001F50F4  7F C3 F3 78 */	mr r3, r30
/* 801F81B8 001F50F8  4B FD 44 55 */	bl updateCollTree__Q24Game8BaseItemFv
/* 801F81BC 001F50FC  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 801F81C0 001F5100  7F C3 F3 78 */	mr r3, r30
/* 801F81C4 001F5104  83 E4 00 00 */	lwz r31, 0(r4)
/* 801F81C8 001F5108  48 00 01 95 */	bl getWorkRadius__Q34Game10ItemBarrel4ItemFv
/* 801F81CC 001F510C  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 801F81D0 001F5110  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 801F81D4 001F5114  48 03 6A 6D */	bl update__Q24Game11TSoundEventFv
/* 801F81D8 001F5118  2C 03 00 02 */	cmpwi r3, 2
/* 801F81DC 001F511C  41 82 00 08 */	beq .L_801F81E4
/* 801F81E0 001F5120  48 00 00 50 */	b .L_801F8230
.L_801F81E4:
/* 801F81E4 001F5124  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F81E8 001F5128  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F81EC 001F512C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F81F0 001F5130  7D 89 03 A6 */	mtctr r12
/* 801F81F4 001F5134  4E 80 04 21 */	bctrl 
/* 801F81F8 001F5138  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F81FC 001F513C  41 82 00 20 */	beq .L_801F821C
/* 801F8200 001F5140  3C 60 80 48 */	lis r3, lbl_804819E0@ha
/* 801F8204 001F5144  3C A0 80 48 */	lis r5, lbl_804819F0@ha
/* 801F8208 001F5148  38 63 19 E0 */	addi r3, r3, lbl_804819E0@l
/* 801F820C 001F514C  38 80 01 2A */	li r4, 0x12a
/* 801F8210 001F5150  38 A5 19 F0 */	addi r5, r5, lbl_804819F0@l
/* 801F8214 001F5154  4C C6 31 82 */	crclr 6
/* 801F8218 001F5158  4B E3 24 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F821C:
/* 801F821C 001F515C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F8220 001F5160  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F8224 001F5164  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 801F8228 001F5168  7D 89 03 A6 */	mtctr r12
/* 801F822C 001F516C  4E 80 04 21 */	bctrl 
.L_801F8230:
/* 801F8230 001F5170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8234 001F5174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8238 001F5178  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F823C 001F517C  7C 08 03 A6 */	mtlr r0
/* 801F8240 001F5180  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8244 001F5184  4E 80 00 20 */	blr 

.global "getVectorField__Q34Game10ItemBarrel4ItemFRQ23Sys6SphereR10Vector3<f>"
"getVectorField__Q34Game10ItemBarrel4ItemFRQ23Sys6SphereR10Vector3<f>":
/* 801F8248 001F5188  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F824C 001F518C  7C 08 02 A6 */	mflr r0
/* 801F8250 001F5190  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F8254 001F5194  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801F8258 001F5198  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801F825C 001F519C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801F8260 001F51A0  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801F8264 001F51A4  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 801F8268 001F51A8  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 801F826C 001F51AC  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 801F8270 001F51B0  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 801F8274 001F51B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8278 001F51B8  C0 04 00 04 */	lfs f0, 4(r4)
/* 801F827C 001F51BC  7C BF 2B 78 */	mr r31, r5
/* 801F8280 001F51C0  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801F8284 001F51C4  C0 63 01 A4 */	lfs f3, 0x1a4(r3)
/* 801F8288 001F51C8  EF A1 00 28 */	fsubs f29, f1, f0
/* 801F828C 001F51CC  C0 44 00 08 */	lfs f2, 8(r4)
/* 801F8290 001F51D0  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801F8294 001F51D4  EF 83 10 28 */	fsubs f28, f3, f2
/* 801F8298 001F51D8  C0 04 00 00 */	lfs f0, 0(r4)
/* 801F829C 001F51DC  EC 5D 07 72 */	fmuls f2, f29, f29
/* 801F82A0 001F51E0  EF C1 00 28 */	fsubs f30, f1, f0
/* 801F82A4 001F51E4  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F82A8 001F51E8  EC 7C 07 32 */	fmuls f3, f28, f28
/* 801F82AC 001F51EC  EC 3E 17 BA */	fmadds f1, f30, f30, f2
/* 801F82B0 001F51F0  EF E3 08 2A */	fadds f31, f3, f1
/* 801F82B4 001F51F4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801F82B8 001F51F8  40 81 00 14 */	ble .L_801F82CC
/* 801F82BC 001F51FC  40 81 00 14 */	ble .L_801F82D0
/* 801F82C0 001F5200  FC 00 F8 34 */	frsqrte f0, f31
/* 801F82C4 001F5204  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801F82C8 001F5208  48 00 00 08 */	b .L_801F82D0
.L_801F82CC:
/* 801F82CC 001F520C  FF E0 00 90 */	fmr f31, f0
.L_801F82D0:
/* 801F82D0 001F5210  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F82D4 001F5214  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801F82D8 001F5218  40 81 00 1C */	ble .L_801F82F4
/* 801F82DC 001F521C  C0 02 B9 3C */	lfs f0, lbl_80519C9C@sda21(r2)
/* 801F82E0 001F5220  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801F82E4 001F5224  EF DE 00 32 */	fmuls f30, f30, f0
/* 801F82E8 001F5228  EF BD 00 32 */	fmuls f29, f29, f0
/* 801F82EC 001F522C  EF 9C 00 32 */	fmuls f28, f28, f0
/* 801F82F0 001F5230  48 00 00 08 */	b .L_801F82F8
.L_801F82F4:
/* 801F82F4 001F5234  FF E0 00 90 */	fmr f31, f0
.L_801F82F8:
/* 801F82F8 001F5238  48 00 00 65 */	bl getWorkRadius__Q34Game10ItemBarrel4ItemFv
/* 801F82FC 001F523C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 801F8300 001F5240  40 81 00 14 */	ble .L_801F8314
/* 801F8304 001F5244  D3 DF 00 00 */	stfs f30, 0(r31)
/* 801F8308 001F5248  D3 BF 00 04 */	stfs f29, 4(r31)
/* 801F830C 001F524C  D3 9F 00 08 */	stfs f28, 8(r31)
/* 801F8310 001F5250  48 00 00 14 */	b .L_801F8324
.L_801F8314:
/* 801F8314 001F5254  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F8318 001F5258  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801F831C 001F525C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801F8320 001F5260  D0 1F 00 08 */	stfs f0, 8(r31)
.L_801F8324:
/* 801F8324 001F5264  38 60 00 01 */	li r3, 1
/* 801F8328 001F5268  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801F832C 001F526C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801F8330 001F5270  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801F8334 001F5274  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801F8338 001F5278  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 801F833C 001F527C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 801F8340 001F5280  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 801F8344 001F5284  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 801F8348 001F5288  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F834C 001F528C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8350 001F5290  7C 08 03 A6 */	mtlr r0
/* 801F8354 001F5294  38 21 00 50 */	addi r1, r1, 0x50
/* 801F8358 001F5298  4E 80 00 20 */	blr 

.global getWorkRadius__Q34Game10ItemBarrel4ItemFv
getWorkRadius__Q34Game10ItemBarrel4ItemFv:
/* 801F835C 001F529C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F8360 001F52A0  7C 08 02 A6 */	mflr r0
/* 801F8364 001F52A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F8368 001F52A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F836C 001F52AC  7C 7F 1B 78 */	mr r31, r3
/* 801F8370 001F52B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8374 001F52B4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801F8378 001F52B8  7D 89 03 A6 */	mtctr r12
/* 801F837C 001F52BC  4E 80 04 21 */	bctrl 
/* 801F8380 001F52C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F8384 001F52C4  41 82 00 18 */	beq .L_801F839C
/* 801F8388 001F52C8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 801F838C 001F52CC  38 81 00 08 */	addi r4, r1, 8
/* 801F8390 001F52D0  4B F3 E8 B1 */	bl getBoundingSphere__8CollTreeFRQ23Sys6Sphere
/* 801F8394 001F52D4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 801F8398 001F52D8  48 00 00 08 */	b .L_801F83A0
.L_801F839C:
/* 801F839C 001F52DC  C0 22 B9 30 */	lfs f1, lbl_80519C90@sda21(r2)
.L_801F83A0:
/* 801F83A0 001F52E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F83A4 001F52E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F83A8 001F52E8  7C 08 03 A6 */	mtlr r0
/* 801F83AC 001F52EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801F83B0 001F52F0  4E 80 00 20 */	blr 

.global getWorkDistance__Q34Game10ItemBarrel4ItemFRQ23Sys6Sphere
getWorkDistance__Q34Game10ItemBarrel4ItemFRQ23Sys6Sphere:
/* 801F83B4 001F52F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801F83B8 001F52F8  7C 08 02 A6 */	mflr r0
/* 801F83BC 001F52FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801F83C0 001F5300  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801F83C4 001F5304  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801F83C8 001F5308  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F83CC 001F530C  7C 7F 1B 78 */	mr r31, r3
/* 801F83D0 001F5310  C0 04 00 04 */	lfs f0, 4(r4)
/* 801F83D4 001F5314  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801F83D8 001F5318  C0 63 01 A4 */	lfs f3, 0x1a4(r3)
/* 801F83DC 001F531C  EC 81 00 28 */	fsubs f4, f1, f0
/* 801F83E0 001F5320  C0 44 00 08 */	lfs f2, 8(r4)
/* 801F83E4 001F5324  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801F83E8 001F5328  C0 04 00 00 */	lfs f0, 0(r4)
/* 801F83EC 001F532C  EC 43 10 28 */	fsubs f2, f3, f2
/* 801F83F0 001F5330  EC 64 01 32 */	fmuls f3, f4, f4
/* 801F83F4 001F5334  EC 21 00 28 */	fsubs f1, f1, f0
/* 801F83F8 001F5338  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F83FC 001F533C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801F8400 001F5340  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 801F8404 001F5344  EF E2 08 2A */	fadds f31, f2, f1
/* 801F8408 001F5348  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801F840C 001F534C  40 81 00 14 */	ble .L_801F8420
/* 801F8410 001F5350  40 81 00 14 */	ble .L_801F8424
/* 801F8414 001F5354  FC 00 F8 34 */	frsqrte f0, f31
/* 801F8418 001F5358  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801F841C 001F535C  48 00 00 08 */	b .L_801F8424
.L_801F8420:
/* 801F8420 001F5360  FF E0 00 90 */	fmr f31, f0
.L_801F8424:
/* 801F8424 001F5364  7F E3 FB 78 */	mr r3, r31
/* 801F8428 001F5368  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F842C 001F536C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801F8430 001F5370  7D 89 03 A6 */	mtctr r12
/* 801F8434 001F5374  4E 80 04 21 */	bctrl 
/* 801F8438 001F5378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F843C 001F537C  41 82 00 18 */	beq .L_801F8454
/* 801F8440 001F5380  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 801F8444 001F5384  38 81 00 08 */	addi r4, r1, 8
/* 801F8448 001F5388  4B F3 E7 F9 */	bl getBoundingSphere__8CollTreeFRQ23Sys6Sphere
/* 801F844C 001F538C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801F8450 001F5390  48 00 00 08 */	b .L_801F8458
.L_801F8454:
/* 801F8454 001F5394  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
.L_801F8458:
/* 801F8458 001F5398  EC 3F 00 28 */	fsubs f1, f31, f0
/* 801F845C 001F539C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801F8460 001F53A0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801F8464 001F53A4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801F8468 001F53A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F846C 001F53AC  7C 08 03 A6 */	mtlr r0
/* 801F8470 001F53B0  38 21 00 30 */	addi r1, r1, 0x30
/* 801F8474 001F53B4  4E 80 00 20 */	blr 

.global createBarrel__Q34Game10ItemBarrel4ItemFv
createBarrel__Q34Game10ItemBarrel4ItemFv:
/* 801F8478 001F53B8  80 8D 94 F0 */	lwz r4, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801F847C 001F53BC  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F8480 001F53C0  80 84 00 88 */	lwz r4, 0x88(r4)
/* 801F8484 001F53C4  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 801F8488 001F53C8  D0 23 01 EC */	stfs f1, 0x1ec(r3)
/* 801F848C 001F53CC  C0 23 01 EC */	lfs f1, 0x1ec(r3)
/* 801F8490 001F53D0  D0 23 01 F0 */	stfs f1, 0x1f0(r3)
/* 801F8494 001F53D4  D0 03 01 F4 */	stfs f0, 0x1f4(r3)
/* 801F8498 001F53D8  4E 80 00 20 */	blr 

.global interactAttack__Q34Game10ItemBarrel4ItemFRQ24Game14InteractAttack
interactAttack__Q34Game10ItemBarrel4ItemFRQ24Game14InteractAttack:
/* 801F849C 001F53DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F84A0 001F53E0  7C 08 02 A6 */	mflr r0
/* 801F84A4 001F53E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F84A8 001F53E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F84AC 001F53EC  7C 9F 23 78 */	mr r31, r4
/* 801F84B0 001F53F0  93 C1 00 08 */	stw r30, 8(r1)
/* 801F84B4 001F53F4  7C 7E 1B 78 */	mr r30, r3
/* 801F84B8 001F53F8  80 64 00 04 */	lwz r3, 4(r4)
/* 801F84BC 001F53FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801F84C0 001F5400  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F84C4 001F5404  7D 89 03 A6 */	mtctr r12
/* 801F84C8 001F5408  4E 80 04 21 */	bctrl 
/* 801F84CC 001F540C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F84D0 001F5410  41 82 00 0C */	beq .L_801F84DC
/* 801F84D4 001F5414  38 60 00 00 */	li r3, 0
/* 801F84D8 001F5418  48 00 00 F4 */	b .L_801F85CC
.L_801F84DC:
/* 801F84DC 001F541C  80 7E 01 DC */	lwz r3, 0x1dc(r30)
/* 801F84E0 001F5420  28 03 00 00 */	cmplwi r3, 0
/* 801F84E4 001F5424  41 82 00 E4 */	beq .L_801F85C8
/* 801F84E8 001F5428  81 83 00 00 */	lwz r12, 0(r3)
/* 801F84EC 001F542C  7F C4 F3 78 */	mr r4, r30
/* 801F84F0 001F5430  C0 3F 00 08 */	lfs f1, 8(r31)
/* 801F84F4 001F5434  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F84F8 001F5438  7D 89 03 A6 */	mtctr r12
/* 801F84FC 001F543C  4E 80 04 21 */	bctrl 
/* 801F8500 001F5440  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 801F8504 001F5444  48 03 66 E5 */	bl event__Q24Game11TSoundEventFv
/* 801F8508 001F5448  2C 03 00 02 */	cmpwi r3, 2
/* 801F850C 001F544C  41 82 00 BC */	beq .L_801F85C8
/* 801F8510 001F5450  40 80 00 10 */	bge .L_801F8520
/* 801F8514 001F5454  2C 03 00 01 */	cmpwi r3, 1
/* 801F8518 001F5458  40 80 00 14 */	bge .L_801F852C
/* 801F851C 001F545C  48 00 00 AC */	b .L_801F85C8
.L_801F8520:
/* 801F8520 001F5460  2C 03 00 04 */	cmpwi r3, 4
/* 801F8524 001F5464  40 80 00 A4 */	bge .L_801F85C8
/* 801F8528 001F5468  48 00 00 54 */	b .L_801F857C
.L_801F852C:
/* 801F852C 001F546C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F8530 001F5470  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F8534 001F5474  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F8538 001F5478  7D 89 03 A6 */	mtctr r12
/* 801F853C 001F547C  4E 80 04 21 */	bctrl 
/* 801F8540 001F5480  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F8544 001F5484  41 82 00 20 */	beq .L_801F8564
/* 801F8548 001F5488  3C 60 80 48 */	lis r3, lbl_804819E0@ha
/* 801F854C 001F548C  3C A0 80 48 */	lis r5, lbl_804819F0@ha
/* 801F8550 001F5490  38 63 19 E0 */	addi r3, r3, lbl_804819E0@l
/* 801F8554 001F5494  38 80 01 69 */	li r4, 0x169
/* 801F8558 001F5498  38 A5 19 F0 */	addi r5, r5, lbl_804819F0@l
/* 801F855C 001F549C  4C C6 31 82 */	crclr 6
/* 801F8560 001F54A0  4B E3 20 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F8564:
/* 801F8564 001F54A4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F8568 001F54A8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F856C 001F54AC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801F8570 001F54B0  7D 89 03 A6 */	mtctr r12
/* 801F8574 001F54B4  4E 80 04 21 */	bctrl 
/* 801F8578 001F54B8  48 00 00 50 */	b .L_801F85C8
.L_801F857C:
/* 801F857C 001F54BC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F8580 001F54C0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F8584 001F54C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F8588 001F54C8  7D 89 03 A6 */	mtctr r12
/* 801F858C 001F54CC  4E 80 04 21 */	bctrl 
/* 801F8590 001F54D0  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F8594 001F54D4  41 82 00 20 */	beq .L_801F85B4
/* 801F8598 001F54D8  3C 60 80 48 */	lis r3, lbl_804819E0@ha
/* 801F859C 001F54DC  3C A0 80 48 */	lis r5, lbl_804819F0@ha
/* 801F85A0 001F54E0  38 63 19 E0 */	addi r3, r3, lbl_804819E0@l
/* 801F85A4 001F54E4  38 80 01 70 */	li r4, 0x170
/* 801F85A8 001F54E8  38 A5 19 F0 */	addi r5, r5, lbl_804819F0@l
/* 801F85AC 001F54EC  4C C6 31 82 */	crclr 6
/* 801F85B0 001F54F0  4B E3 20 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F85B4:
/* 801F85B4 001F54F4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F85B8 001F54F8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F85BC 001F54FC  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801F85C0 001F5500  7D 89 03 A6 */	mtctr r12
/* 801F85C4 001F5504  4E 80 04 21 */	bctrl 
.L_801F85C8:
/* 801F85C8 001F5508  38 60 00 01 */	li r3, 1
.L_801F85CC:
/* 801F85CC 001F550C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F85D0 001F5510  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F85D4 001F5514  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F85D8 001F5518  7C 08 03 A6 */	mtlr r0
/* 801F85DC 001F551C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F85E0 001F5520  4E 80 00 20 */	blr 

.global onDamage__Q34Game10ItemBarrel5StateFPQ34Game10ItemBarrel4Itemf
onDamage__Q34Game10ItemBarrel5StateFPQ34Game10ItemBarrel4Itemf:
/* 801F85E4 001F5524  4E 80 00 20 */	blr 

.global __ct__Q34Game10ItemBarrel3MgrFv
__ct__Q34Game10ItemBarrel3MgrFv:
/* 801F85E8 001F5528  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801F85EC 001F552C  7C 08 02 A6 */	mflr r0
/* 801F85F0 001F5530  90 01 04 44 */	stw r0, 0x444(r1)
/* 801F85F4 001F5534  7C 80 07 35 */	extsh. r0, r4
/* 801F85F8 001F5538  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801F85FC 001F553C  7C 7F 1B 78 */	mr r31, r3
/* 801F8600 001F5540  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801F8604 001F5544  41 82 00 0C */	beq .L_801F8610
/* 801F8608 001F5548  38 1F 00 8C */	addi r0, r31, 0x8c
/* 801F860C 001F554C  90 1F 00 04 */	stw r0, 4(r31)
.L_801F8610:
/* 801F8610 001F5550  7F E3 FB 78 */	mr r3, r31
/* 801F8614 001F5554  38 80 00 00 */	li r4, 0
/* 801F8618 001F5558  4B FD 4E 09 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801F861C 001F555C  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel3Mgr@ha
/* 801F8620 001F5560  38 02 B9 40 */	addi r0, r2, lbl_80519CA0@sda21
/* 801F8624 001F5564  38 83 CC B4 */	addi r4, r3, __vt__Q34Game10ItemBarrel3Mgr@l
/* 801F8628 001F5568  7F E3 FB 78 */	mr r3, r31
/* 801F862C 001F556C  90 9F 00 00 */	stw r4, 0(r31)
/* 801F8630 001F5570  38 A4 00 74 */	addi r5, r4, 0x74
/* 801F8634 001F5574  38 80 00 01 */	li r4, 1
/* 801F8638 001F5578  90 BF 00 30 */	stw r5, 0x30(r31)
/* 801F863C 001F557C  90 1F 00 08 */	stw r0, 8(r31)
/* 801F8640 001F5580  4B FD 47 8D */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801F8644 001F5584  3C 80 80 48 */	lis r4, lbl_80481A0C@ha
/* 801F8648 001F5588  38 60 01 14 */	li r3, 0x114
/* 801F864C 001F558C  38 04 1A 0C */	addi r0, r4, lbl_80481A0C@l
/* 801F8650 001F5590  90 1F 00 28 */	stw r0, 0x28(r31)
/* 801F8654 001F5594  4B E2 B8 51 */	bl __nw__FUl
/* 801F8658 001F5598  7C 60 1B 79 */	or. r0, r3, r3
/* 801F865C 001F559C  41 82 00 0C */	beq .L_801F8668
/* 801F8660 001F55A0  48 00 00 CD */	bl __ct__Q34Game10ItemBarrel11BarrelParmsFv
/* 801F8664 001F55A4  7C 60 1B 78 */	mr r0, r3
.L_801F8668:
/* 801F8668 001F55A8  90 1F 00 88 */	stw r0, 0x88(r31)
/* 801F866C 001F55AC  38 00 00 00 */	li r0, 0
/* 801F8670 001F55B0  3C 60 80 48 */	lis r3, lbl_80481A28@ha
/* 801F8674 001F55B4  38 80 00 00 */	li r4, 0
/* 801F8678 001F55B8  90 01 00 08 */	stw r0, 8(r1)
/* 801F867C 001F55BC  38 63 1A 28 */	addi r3, r3, lbl_80481A28@l
/* 801F8680 001F55C0  38 A0 00 00 */	li r5, 0
/* 801F8684 001F55C4  38 C0 00 00 */	li r6, 0
/* 801F8688 001F55C8  38 E0 00 00 */	li r7, 0
/* 801F868C 001F55CC  39 00 00 02 */	li r8, 2
/* 801F8690 001F55D0  39 20 00 00 */	li r9, 0
/* 801F8694 001F55D4  39 40 00 00 */	li r10, 0
/* 801F8698 001F55D8  4B E2 6A F1 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801F869C 001F55DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F86A0 001F55E0  41 82 00 4C */	beq .L_801F86EC
/* 801F86A4 001F55E4  7F C4 F3 78 */	mr r4, r30
/* 801F86A8 001F55E8  38 61 00 10 */	addi r3, r1, 0x10
/* 801F86AC 001F55EC  38 A0 FF FF */	li r5, -1
/* 801F86B0 001F55F0  48 21 D2 49 */	bl __ct__9RamStreamFPvi
/* 801F86B4 001F55F4  38 00 00 01 */	li r0, 1
/* 801F86B8 001F55F8  2C 00 00 01 */	cmpwi r0, 1
/* 801F86BC 001F55FC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801F86C0 001F5600  40 82 00 0C */	bne .L_801F86CC
/* 801F86C4 001F5604  38 00 00 00 */	li r0, 0
/* 801F86C8 001F5608  90 01 04 24 */	stw r0, 0x424(r1)
.L_801F86CC:
/* 801F86CC 001F560C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 801F86D0 001F5610  38 81 00 10 */	addi r4, r1, 0x10
/* 801F86D4 001F5614  81 83 00 D8 */	lwz r12, 0xd8(r3)
/* 801F86D8 001F5618  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F86DC 001F561C  7D 89 03 A6 */	mtctr r12
/* 801F86E0 001F5620  4E 80 04 21 */	bctrl 
/* 801F86E4 001F5624  7F C3 F3 78 */	mr r3, r30
/* 801F86E8 001F5628  4B E2 B9 F1 */	bl __dla__FPv
.L_801F86EC:
/* 801F86EC 001F562C  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801F86F0 001F5630  7F E3 FB 78 */	mr r3, r31
/* 801F86F4 001F5634  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801F86F8 001F5638  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801F86FC 001F563C  7C 08 03 A6 */	mtlr r0
/* 801F8700 001F5640  38 21 04 40 */	addi r1, r1, 0x440
/* 801F8704 001F5644  4E 80 00 20 */	blr 

.global read__Q34Game10ItemBarrel11BarrelParmsFR6Stream
read__Q34Game10ItemBarrel11BarrelParmsFR6Stream:
/* 801F8708 001F5648  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F870C 001F564C  7C 08 02 A6 */	mflr r0
/* 801F8710 001F5650  38 63 00 DC */	addi r3, r3, 0xdc
/* 801F8714 001F5654  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8718 001F5658  48 21 B0 DD */	bl read__10ParametersFR6Stream
/* 801F871C 001F565C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8720 001F5660  7C 08 03 A6 */	mtlr r0
/* 801F8724 001F5664  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8728 001F5668  4E 80 00 20 */	blr 

.global __ct__Q34Game10ItemBarrel11BarrelParmsFv
__ct__Q34Game10ItemBarrel11BarrelParmsFv:
/* 801F872C 001F566C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8730 001F5670  7C 08 02 A6 */	mflr r0
/* 801F8734 001F5674  3C A0 73 30 */	lis r5, 0x73303030@ha
/* 801F8738 001F5678  3C 80 80 4B */	lis r4, __vt__Q24Game13CreatureParms@ha
/* 801F873C 001F567C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8740 001F5680  38 04 AC B0 */	addi r0, r4, __vt__Q24Game13CreatureParms@l
/* 801F8744 001F5684  38 A5 30 30 */	addi r5, r5, 0x73303030@l
/* 801F8748 001F5688  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F874C 001F568C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F8750 001F5690  7C 7E 1B 78 */	mr r30, r3
/* 801F8754 001F5694  3C 60 80 48 */	lis r3, lbl_804819C8@ha
/* 801F8758 001F5698  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801F875C 001F569C  3B E3 19 C8 */	addi r31, r3, lbl_804819C8@l
/* 801F8760 001F56A0  38 1E 00 D4 */	addi r0, r30, 0xd4
/* 801F8764 001F56A4  38 60 00 00 */	li r3, 0
/* 801F8768 001F56A8  90 1E 00 00 */	stw r0, 0(r30)
/* 801F876C 001F56AC  38 1F 00 80 */	addi r0, r31, 0x80
/* 801F8770 001F56B0  7F C4 F3 78 */	mr r4, r30
/* 801F8774 001F56B4  38 DF 00 94 */	addi r6, r31, 0x94
/* 801F8778 001F56B8  90 7E 00 04 */	stw r3, 4(r30)
/* 801F877C 001F56BC  38 7E 00 0C */	addi r3, r30, 0xc
/* 801F8780 001F56C0  90 1E 00 08 */	stw r0, 8(r30)
/* 801F8784 001F56C4  48 21 AE D5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F8788 001F56C8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F878C 001F56CC  3C A0 73 30 */	lis r5, 0x73303031@ha
/* 801F8790 001F56D0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F8794 001F56D4  C0 02 B9 48 */	lfs f0, lbl_80519CA8@sda21(r2)
/* 801F8798 001F56D8  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801F879C 001F56DC  7F C4 F3 78 */	mr r4, r30
/* 801F87A0 001F56E0  C0 22 B9 30 */	lfs f1, lbl_80519C90@sda21(r2)
/* 801F87A4 001F56E4  38 7E 00 34 */	addi r3, r30, 0x34
/* 801F87A8 001F56E8  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801F87AC 001F56EC  38 A5 30 31 */	addi r5, r5, 0x73303031@l
/* 801F87B0 001F56F0  C0 02 B9 3C */	lfs f0, lbl_80519C9C@sda21(r2)
/* 801F87B4 001F56F4  38 DF 00 A8 */	addi r6, r31, 0xa8
/* 801F87B8 001F56F8  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801F87BC 001F56FC  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801F87C0 001F5700  48 21 AE 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F87C4 001F5704  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F87C8 001F5708  3C A0 73 30 */	lis r5, 0x73303032@ha
/* 801F87CC 001F570C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F87D0 001F5710  C0 02 B9 48 */	lfs f0, lbl_80519CA8@sda21(r2)
/* 801F87D4 001F5714  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F87D8 001F5718  7F C4 F3 78 */	mr r4, r30
/* 801F87DC 001F571C  C0 22 B9 30 */	lfs f1, lbl_80519C90@sda21(r2)
/* 801F87E0 001F5720  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801F87E4 001F5724  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801F87E8 001F5728  38 A5 30 32 */	addi r5, r5, 0x73303032@l
/* 801F87EC 001F572C  C0 02 B9 3C */	lfs f0, lbl_80519C9C@sda21(r2)
/* 801F87F0 001F5730  38 DF 00 B8 */	addi r6, r31, 0xb8
/* 801F87F4 001F5734  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 801F87F8 001F5738  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 801F87FC 001F573C  48 21 AE 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F8800 001F5740  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F8804 001F5744  3C A0 73 30 */	lis r5, 0x73303033@ha
/* 801F8808 001F5748  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F880C 001F574C  C0 02 B9 4C */	lfs f0, lbl_80519CAC@sda21(r2)
/* 801F8810 001F5750  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801F8814 001F5754  7F C4 F3 78 */	mr r4, r30
/* 801F8818 001F5758  C0 22 B9 30 */	lfs f1, lbl_80519C90@sda21(r2)
/* 801F881C 001F575C  38 7E 00 84 */	addi r3, r30, 0x84
/* 801F8820 001F5760  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 801F8824 001F5764  38 A5 30 33 */	addi r5, r5, 0x73303033@l
/* 801F8828 001F5768  C0 02 B9 3C */	lfs f0, lbl_80519C9C@sda21(r2)
/* 801F882C 001F576C  38 C2 B9 50 */	addi r6, r2, lbl_80519CB0@sda21
/* 801F8830 001F5770  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801F8834 001F5774  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 801F8838 001F5778  48 21 AE 21 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F883C 001F577C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F8840 001F5780  3C A0 73 30 */	lis r5, 0x73303034@ha
/* 801F8844 001F5784  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F8848 001F5788  C0 02 B9 58 */	lfs f0, lbl_80519CB8@sda21(r2)
/* 801F884C 001F578C  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801F8850 001F5790  7F C4 F3 78 */	mr r4, r30
/* 801F8854 001F5794  C0 22 B9 5C */	lfs f1, lbl_80519CBC@sda21(r2)
/* 801F8858 001F5798  38 7E 00 AC */	addi r3, r30, 0xac
/* 801F885C 001F579C  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 801F8860 001F57A0  38 A5 30 34 */	addi r5, r5, 0x73303034@l
/* 801F8864 001F57A4  C0 02 B9 60 */	lfs f0, lbl_80519CC0@sda21(r2)
/* 801F8868 001F57A8  38 DF 00 C8 */	addi r6, r31, 0xc8
/* 801F886C 001F57AC  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 801F8870 001F57B0  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 801F8874 001F57B4  48 21 AD E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F8878 001F57B8  3C 80 80 4B */	lis r4, "__vt__7Parm<f>"@ha
/* 801F887C 001F57BC  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel11BarrelParms@ha
/* 801F8880 001F57C0  38 04 AC BC */	addi r0, r4, "__vt__7Parm<f>"@l
/* 801F8884 001F57C4  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 801F8888 001F57C8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801F888C 001F57CC  39 23 CD 74 */	addi r9, r3, __vt__Q34Game10ItemBarrel11BarrelParms@l
/* 801F8890 001F57D0  C0 02 B9 64 */	lfs f0, lbl_80519CC4@sda21(r2)
/* 801F8894 001F57D4  39 1E 01 10 */	addi r8, r30, 0x110
/* 801F8898 001F57D8  C0 22 B9 5C */	lfs f1, lbl_80519CBC@sda21(r2)
/* 801F889C 001F57DC  38 E0 00 00 */	li r7, 0
/* 801F88A0 001F57E0  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 801F88A4 001F57E4  38 1F 00 D8 */	addi r0, r31, 0xd8
/* 801F88A8 001F57E8  C0 02 B9 60 */	lfs f0, lbl_80519CC0@sda21(r2)
/* 801F88AC 001F57EC  38 7E 00 E8 */	addi r3, r30, 0xe8
/* 801F88B0 001F57F0  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 801F88B4 001F57F4  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F88B8 001F57F8  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 801F88BC 001F57FC  38 C2 B9 68 */	addi r6, r2, lbl_80519CC8@sda21
/* 801F88C0 001F5800  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 801F88C4 001F5804  91 3E 00 D8 */	stw r9, 0xd8(r30)
/* 801F88C8 001F5808  91 1E 00 DC */	stw r8, 0xdc(r30)
/* 801F88CC 001F580C  90 FE 00 E0 */	stw r7, 0xe0(r30)
/* 801F88D0 001F5810  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 801F88D4 001F5814  48 21 AD 85 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F88D8 001F5818  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F88DC 001F581C  C0 42 B9 70 */	lfs f2, lbl_80519CD0@sda21(r2)
/* 801F88E0 001F5820  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F88E4 001F5824  C0 22 B9 3C */	lfs f1, lbl_80519C9C@sda21(r2)
/* 801F88E8 001F5828  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 801F88EC 001F582C  7F C3 F3 78 */	mr r3, r30
/* 801F88F0 001F5830  C0 02 B9 74 */	lfs f0, lbl_80519CD4@sda21(r2)
/* 801F88F4 001F5834  D0 5E 01 00 */	stfs f2, 0x100(r30)
/* 801F88F8 001F5838  D0 3E 01 08 */	stfs f1, 0x108(r30)
/* 801F88FC 001F583C  D0 1E 01 0C */	stfs f0, 0x10c(r30)
/* 801F8900 001F5840  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8904 001F5844  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F8908 001F5848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F890C 001F584C  7C 08 03 A6 */	mtlr r0
/* 801F8910 001F5850  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8914 001F5854  4E 80 00 20 */	blr 

.global birth__Q34Game10ItemBarrel3MgrFv
birth__Q34Game10ItemBarrel3MgrFv:
/* 801F8918 001F5858  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F891C 001F585C  7C 08 02 A6 */	mflr r0
/* 801F8920 001F5860  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8924 001F5864  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8928 001F5868  93 C1 00 08 */	stw r30, 8(r1)
/* 801F892C 001F586C  7C 7E 1B 78 */	mr r30, r3
/* 801F8930 001F5870  38 60 01 FC */	li r3, 0x1fc
/* 801F8934 001F5874  4B E2 B5 71 */	bl __nw__FUl
/* 801F8938 001F5878  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F893C 001F587C  41 82 00 BC */	beq .L_801F89F8
/* 801F8940 001F5880  38 80 04 10 */	li r4, 0x410
/* 801F8944 001F5884  4B FD 36 A5 */	bl __ct__Q24Game8BaseItemFi
/* 801F8948 001F5888  3C 60 80 4C */	lis r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@ha
/* 801F894C 001F588C  38 00 00 00 */	li r0, 0
/* 801F8950 001F5890  38 83 D1 F8 */	addi r4, r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@l
/* 801F8954 001F5894  38 60 00 1C */	li r3, 0x1c
/* 801F8958 001F5898  90 9F 00 00 */	stw r4, 0(r31)
/* 801F895C 001F589C  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F8960 001F58A0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F8964 001F58A4  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F8968 001F58A8  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F896C 001F58AC  4B E2 B5 39 */	bl __nw__FUl
/* 801F8970 001F58B0  28 03 00 00 */	cmplwi r3, 0
/* 801F8974 001F58B4  41 82 00 30 */	beq .L_801F89A4
/* 801F8978 001F58B8  3C 80 80 4C */	lis r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>"@ha
/* 801F897C 001F58BC  3C A0 80 4C */	lis r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>"@ha
/* 801F8980 001F58C0  38 04 D1 E0 */	addi r0, r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>"@l
/* 801F8984 001F58C4  3C 80 80 4C */	lis r4, __vt__Q34Game10ItemBarrel3FSM@ha
/* 801F8988 001F58C8  90 03 00 00 */	stw r0, 0(r3)
/* 801F898C 001F58CC  38 C0 FF FF */	li r6, -1
/* 801F8990 001F58D0  38 A5 D1 C8 */	addi r5, r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>"@l
/* 801F8994 001F58D4  38 04 D5 54 */	addi r0, r4, __vt__Q34Game10ItemBarrel3FSM@l
/* 801F8998 001F58D8  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F899C 001F58DC  90 A3 00 00 */	stw r5, 0(r3)
/* 801F89A0 001F58E0  90 03 00 00 */	stw r0, 0(r3)
.L_801F89A4:
/* 801F89A4 001F58E4  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F89A8 001F58E8  7F E4 FB 78 */	mr r4, r31
/* 801F89AC 001F58EC  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F89B0 001F58F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F89B4 001F58F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F89B8 001F58F8  7D 89 03 A6 */	mtctr r12
/* 801F89BC 001F58FC  4E 80 04 21 */	bctrl 
/* 801F89C0 001F5900  3C 80 80 4C */	lis r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@ha
/* 801F89C4 001F5904  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F89C8 001F5908  38 84 CF A4 */	addi r4, r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@l
/* 801F89CC 001F590C  90 9F 00 00 */	stw r4, 0(r31)
/* 801F89D0 001F5910  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F89D4 001F5914  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F89D8 001F5918  48 03 61 F5 */	bl __ct__Q24Game11TSoundEventFv
/* 801F89DC 001F591C  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel4Item@ha
/* 801F89E0 001F5920  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F89E4 001F5924  38 63 CD 80 */	addi r3, r3, __vt__Q34Game10ItemBarrel4Item@l
/* 801F89E8 001F5928  90 7F 00 00 */	stw r3, 0(r31)
/* 801F89EC 001F592C  38 03 01 B0 */	addi r0, r3, 0x1b0
/* 801F89F0 001F5930  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F89F4 001F5934  D0 1F 01 18 */	stfs f0, 0x118(r31)
.L_801F89F8:
/* 801F89F8 001F5938  7F C3 F3 78 */	mr r3, r30
/* 801F89FC 001F593C  7F E4 FB 78 */	mr r4, r31
/* 801F8A00 001F5940  4B FD 4E 29 */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801F8A04 001F5944  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8A08 001F5948  7F E3 FB 78 */	mr r3, r31
/* 801F8A0C 001F594C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8A10 001F5950  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F8A14 001F5954  7C 08 03 A6 */	mtlr r0
/* 801F8A18 001F5958  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8A1C 001F595C  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
"generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm":
/* 801F8A20 001F5960  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8A24 001F5964  7C 08 02 A6 */	mflr r0
/* 801F8A28 001F5968  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8A2C 001F596C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8A30 001F5970  93 C1 00 08 */	stw r30, 8(r1)
/* 801F8A34 001F5974  7C 9E 23 78 */	mr r30, r4
/* 801F8A38 001F5978  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8A3C 001F597C  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 801F8A40 001F5980  7D 89 03 A6 */	mtctr r12
/* 801F8A44 001F5984  4E 80 04 21 */	bctrl 
/* 801F8A48 001F5988  38 80 00 00 */	li r4, 0
/* 801F8A4C 001F598C  7C 7F 1B 78 */	mr r31, r3
/* 801F8A50 001F5990  4B F4 25 79 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801F8A54 001F5994  7F E3 FB 78 */	mr r3, r31
/* 801F8A58 001F5998  7F C4 F3 78 */	mr r4, r30
/* 801F8A5C 001F599C  38 A0 00 00 */	li r5, 0
/* 801F8A60 001F59A0  4B F4 27 49 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801F8A64 001F59A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8A68 001F59A8  7F E3 FB 78 */	mr r3, r31
/* 801F8A6C 001F59AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8A70 001F59B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F8A74 001F59B4  7C 08 03 A6 */	mtlr r0
/* 801F8A78 001F59B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8A7C 001F59BC  4E 80 00 20 */	blr 

.global onLoadResources__Q34Game10ItemBarrel3MgrFv
onLoadResources__Q34Game10ItemBarrel3MgrFv:
/* 801F8A80 001F59C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F8A84 001F59C4  7C 08 02 A6 */	mflr r0
/* 801F8A88 001F59C8  3C 80 80 48 */	lis r4, lbl_804819C8@ha
/* 801F8A8C 001F59CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F8A90 001F59D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F8A94 001F59D4  3B E4 19 C8 */	addi r31, r4, lbl_804819C8@l
/* 801F8A98 001F59D8  38 82 B9 78 */	addi r4, r2, lbl_80519CD8@sda21
/* 801F8A9C 001F59DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F8AA0 001F59E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F8AA4 001F59E4  7C 7D 1B 78 */	mr r29, r3
/* 801F8AA8 001F59E8  4B FD 44 2D */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801F8AAC 001F59EC  7F A3 EB 78 */	mr r3, r29
/* 801F8AB0 001F59F0  38 9F 00 E8 */	addi r4, r31, 0xe8
/* 801F8AB4 001F59F4  38 A0 00 00 */	li r5, 0
/* 801F8AB8 001F59F8  3C C0 00 02 */	lis r6, 2
/* 801F8ABC 001F59FC  4B FD 44 95 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F8AC0 001F5A00  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801F8AC4 001F5A04  3C 80 00 04 */	lis r4, 4
/* 801F8AC8 001F5A08  80 63 00 00 */	lwz r3, 0(r3)
/* 801F8ACC 001F5A0C  4B E8 AE 0D */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F8AD0 001F5A10  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801F8AD4 001F5A14  80 63 00 00 */	lwz r3, 0(r3)
/* 801F8AD8 001F5A18  4B E8 AF 59 */	bl makeSharedDL__12J3DModelDataFv
/* 801F8ADC 001F5A1C  7F A3 EB 78 */	mr r3, r29
/* 801F8AE0 001F5A20  38 9F 00 F4 */	addi r4, r31, 0xf4
/* 801F8AE4 001F5A24  4B FD 46 E9 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801F8AE8 001F5A28  7C 60 1B 78 */	mr r0, r3
/* 801F8AEC 001F5A2C  7F A3 EB 78 */	mr r3, r29
/* 801F8AF0 001F5A30  7C 1E 03 78 */	mr r30, r0
/* 801F8AF4 001F5A34  38 BF 01 00 */	addi r5, r31, 0x100
/* 801F8AF8 001F5A38  7F C4 F3 78 */	mr r4, r30
/* 801F8AFC 001F5A3C  4B FD 45 01 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F8B00 001F5A40  7F A3 EB 78 */	mr r3, r29
/* 801F8B04 001F5A44  7F C4 F3 78 */	mr r4, r30
/* 801F8B08 001F5A48  38 BF 01 0C */	addi r5, r31, 0x10c
/* 801F8B0C 001F5A4C  4B FD 45 71 */	bl loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F8B10 001F5A50  7F A3 EB 78 */	mr r3, r29
/* 801F8B14 001F5A54  7F C4 F3 78 */	mr r4, r30
/* 801F8B18 001F5A58  4B FD 47 39 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801F8B1C 001F5A5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F8B20 001F5A60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F8B24 001F5A64  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F8B28 001F5A68  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F8B2C 001F5A6C  7C 08 03 A6 */	mtlr r0
/* 801F8B30 001F5A70  38 21 00 20 */	addi r1, r1, 0x20
/* 801F8B34 001F5A74  4E 80 00 20 */	blr 

.global __dt__Q34Game10ItemBarrel3MgrFv
__dt__Q34Game10ItemBarrel3MgrFv:
/* 801F8B38 001F5A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8B3C 001F5A7C  7C 08 02 A6 */	mflr r0
/* 801F8B40 001F5A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8B44 001F5A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8B48 001F5A88  7C 9F 23 78 */	mr r31, r4
/* 801F8B4C 001F5A8C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F8B50 001F5A90  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F8B54 001F5A94  41 82 00 FC */	beq .L_801F8C50
/* 801F8B58 001F5A98  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel3Mgr@ha
/* 801F8B5C 001F5A9C  38 63 CC B4 */	addi r3, r3, __vt__Q34Game10ItemBarrel3Mgr@l
/* 801F8B60 001F5AA0  90 7E 00 00 */	stw r3, 0(r30)
/* 801F8B64 001F5AA4  38 03 00 74 */	addi r0, r3, 0x74
/* 801F8B68 001F5AA8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F8B6C 001F5AAC  41 82 00 D4 */	beq .L_801F8C40
/* 801F8B70 001F5AB0  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801F8B74 001F5AB4  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F8B78 001F5AB8  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801F8B7C 001F5ABC  90 7E 00 00 */	stw r3, 0(r30)
/* 801F8B80 001F5AC0  38 03 00 74 */	addi r0, r3, 0x74
/* 801F8B84 001F5AC4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F8B88 001F5AC8  41 82 00 84 */	beq .L_801F8C0C
/* 801F8B8C 001F5ACC  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801F8B90 001F5AD0  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801F8B94 001F5AD4  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801F8B98 001F5AD8  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801F8B9C 001F5ADC  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F8BA0 001F5AE0  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F8BA4 001F5AE4  41 82 00 18 */	beq .L_801F8BBC
/* 801F8BA8 001F5AE8  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801F8BAC 001F5AEC  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801F8BB0 001F5AF0  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801F8BB4 001F5AF4  38 80 00 00 */	li r4, 0
/* 801F8BB8 001F5AF8  48 21 89 D1 */	bl __dt__5CNodeFv
.L_801F8BBC:
/* 801F8BBC 001F5AFC  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F8BC0 001F5B00  41 82 00 4C */	beq .L_801F8C0C
/* 801F8BC4 001F5B04  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801F8BC8 001F5B08  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F8BCC 001F5B0C  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801F8BD0 001F5B10  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801F8BD4 001F5B14  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F8BD8 001F5B18  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F8BDC 001F5B1C  41 82 00 30 */	beq .L_801F8C0C
/* 801F8BE0 001F5B20  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F8BE4 001F5B24  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F8BE8 001F5B28  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F8BEC 001F5B2C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F8BF0 001F5B30  41 82 00 1C */	beq .L_801F8C0C
/* 801F8BF4 001F5B34  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F8BF8 001F5B38  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801F8BFC 001F5B3C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F8C00 001F5B40  38 80 00 00 */	li r4, 0
/* 801F8C04 001F5B44  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F8C08 001F5B48  48 21 89 81 */	bl __dt__5CNodeFv
.L_801F8C0C:
/* 801F8C0C 001F5B4C  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F8C10 001F5B50  41 82 00 30 */	beq .L_801F8C40
/* 801F8C14 001F5B54  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F8C18 001F5B58  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F8C1C 001F5B5C  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F8C20 001F5B60  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F8C24 001F5B64  41 82 00 1C */	beq .L_801F8C40
/* 801F8C28 001F5B68  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F8C2C 001F5B6C  38 7E 00 30 */	addi r3, r30, 0x30
/* 801F8C30 001F5B70  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F8C34 001F5B74  38 80 00 00 */	li r4, 0
/* 801F8C38 001F5B78  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F8C3C 001F5B7C  48 21 89 4D */	bl __dt__5CNodeFv
.L_801F8C40:
/* 801F8C40 001F5B80  7F E0 07 35 */	extsh. r0, r31
/* 801F8C44 001F5B84  40 81 00 0C */	ble .L_801F8C50
/* 801F8C48 001F5B88  7F C3 F3 78 */	mr r3, r30
/* 801F8C4C 001F5B8C  4B E2 B4 69 */	bl __dl__FPv
.L_801F8C50:
/* 801F8C50 001F5B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8C54 001F5B94  7F C3 F3 78 */	mr r3, r30
/* 801F8C58 001F5B98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8C5C 001F5B9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F8C60 001F5BA0  7C 08 03 A6 */	mtlr r0
/* 801F8C64 001F5BA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8C68 001F5BA8  4E 80 00 20 */	blr 

.global doNew__Q34Game10ItemBarrel3MgrFv
doNew__Q34Game10ItemBarrel3MgrFv:
/* 801F8C6C 001F5BAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8C70 001F5BB0  7C 08 02 A6 */	mflr r0
/* 801F8C74 001F5BB4  38 60 01 FC */	li r3, 0x1fc
/* 801F8C78 001F5BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8C7C 001F5BBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8C80 001F5BC0  4B E2 B2 25 */	bl __nw__FUl
/* 801F8C84 001F5BC4  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F8C88 001F5BC8  41 82 00 BC */	beq .L_801F8D44
/* 801F8C8C 001F5BCC  38 80 04 10 */	li r4, 0x410
/* 801F8C90 001F5BD0  4B FD 33 59 */	bl __ct__Q24Game8BaseItemFi
/* 801F8C94 001F5BD4  3C 60 80 4C */	lis r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@ha
/* 801F8C98 001F5BD8  38 00 00 00 */	li r0, 0
/* 801F8C9C 001F5BDC  38 83 D1 F8 */	addi r4, r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@l
/* 801F8CA0 001F5BE0  38 60 00 1C */	li r3, 0x1c
/* 801F8CA4 001F5BE4  90 9F 00 00 */	stw r4, 0(r31)
/* 801F8CA8 001F5BE8  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F8CAC 001F5BEC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F8CB0 001F5BF0  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F8CB4 001F5BF4  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F8CB8 001F5BF8  4B E2 B1 ED */	bl __nw__FUl
/* 801F8CBC 001F5BFC  28 03 00 00 */	cmplwi r3, 0
/* 801F8CC0 001F5C00  41 82 00 30 */	beq .L_801F8CF0
/* 801F8CC4 001F5C04  3C 80 80 4C */	lis r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>"@ha
/* 801F8CC8 001F5C08  3C A0 80 4C */	lis r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>"@ha
/* 801F8CCC 001F5C0C  38 04 D1 E0 */	addi r0, r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>"@l
/* 801F8CD0 001F5C10  3C 80 80 4C */	lis r4, __vt__Q34Game10ItemBarrel3FSM@ha
/* 801F8CD4 001F5C14  90 03 00 00 */	stw r0, 0(r3)
/* 801F8CD8 001F5C18  38 C0 FF FF */	li r6, -1
/* 801F8CDC 001F5C1C  38 A5 D1 C8 */	addi r5, r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBarrel4Item>"@l
/* 801F8CE0 001F5C20  38 04 D5 54 */	addi r0, r4, __vt__Q34Game10ItemBarrel3FSM@l
/* 801F8CE4 001F5C24  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F8CE8 001F5C28  90 A3 00 00 */	stw r5, 0(r3)
/* 801F8CEC 001F5C2C  90 03 00 00 */	stw r0, 0(r3)
.L_801F8CF0:
/* 801F8CF0 001F5C30  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F8CF4 001F5C34  7F E4 FB 78 */	mr r4, r31
/* 801F8CF8 001F5C38  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F8CFC 001F5C3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8D00 001F5C40  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F8D04 001F5C44  7D 89 03 A6 */	mtctr r12
/* 801F8D08 001F5C48  4E 80 04 21 */	bctrl 
/* 801F8D0C 001F5C4C  3C 80 80 4C */	lis r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@ha
/* 801F8D10 001F5C50  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F8D14 001F5C54  38 84 CF A4 */	addi r4, r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>"@l
/* 801F8D18 001F5C58  90 9F 00 00 */	stw r4, 0(r31)
/* 801F8D1C 001F5C5C  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F8D20 001F5C60  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F8D24 001F5C64  48 03 5E A9 */	bl __ct__Q24Game11TSoundEventFv
/* 801F8D28 001F5C68  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBarrel4Item@ha
/* 801F8D2C 001F5C6C  C0 02 B9 30 */	lfs f0, lbl_80519C90@sda21(r2)
/* 801F8D30 001F5C70  38 63 CD 80 */	addi r3, r3, __vt__Q34Game10ItemBarrel4Item@l
/* 801F8D34 001F5C74  90 7F 00 00 */	stw r3, 0(r31)
/* 801F8D38 001F5C78  38 03 01 B0 */	addi r0, r3, 0x1b0
/* 801F8D3C 001F5C7C  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F8D40 001F5C80  D0 1F 01 18 */	stfs f0, 0x118(r31)
.L_801F8D44:
/* 801F8D44 001F5C84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8D48 001F5C88  7F E3 FB 78 */	mr r3, r31
/* 801F8D4C 001F5C8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8D50 001F5C90  7C 08 03 A6 */	mtlr r0
/* 801F8D54 001F5C94  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8D58 001F5C98  4E 80 00 20 */	blr 

.global generatorGetID__Q34Game10ItemBarrel3MgrFv
generatorGetID__Q34Game10ItemBarrel3MgrFv:
/* 801F8D5C 001F5C9C  3C 60 62 61 */	lis r3, 0x6261726C@ha
/* 801F8D60 001F5CA0  38 63 72 6C */	addi r3, r3, 0x6261726C@l
/* 801F8D64 001F5CA4  4E 80 00 20 */	blr 

.global getCreatureName__Q34Game10ItemBarrel4ItemFv
getCreatureName__Q34Game10ItemBarrel4ItemFv:
/* 801F8D68 001F5CA8  38 62 B9 40 */	addi r3, r2, lbl_80519CA0@sda21
/* 801F8D6C 001F5CAC  4E 80 00 20 */	blr 

.global "doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv"
"doAI__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>Fv":
/* 801F8D70 001F5CB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8D74 001F5CB4  7C 08 02 A6 */	mflr r0
/* 801F8D78 001F5CB8  7C 64 1B 78 */	mr r4, r3
/* 801F8D7C 001F5CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8D80 001F5CC0  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F8D84 001F5CC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8D88 001F5CC8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F8D8C 001F5CCC  7D 89 03 A6 */	mtctr r12
/* 801F8D90 001F5CD0  4E 80 04 21 */	bctrl 
/* 801F8D94 001F5CD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8D98 001F5CD8  7C 08 03 A6 */	mtlr r0
/* 801F8D9C 001F5CDC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8DA0 001F5CE0  4E 80 00 20 */	blr 

.global "onDamage__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Itemf"
"onDamage__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Itemf":
/* 801F8DA4 001F5CE4  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent":
/* 801F8DA8 001F5CE8  4E 80 00 20 */	blr 

.global "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
"onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle":
/* 801F8DAC 001F5CEC  4E 80 00 20 */	blr 

.global "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
"onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent":
/* 801F8DB0 001F5CF0  4E 80 00 20 */	blr 

.global "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
"onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent":
/* 801F8DB4 001F5CF4  4E 80 00 20 */	blr 

.global "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
"init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg":
/* 801F8DB8 001F5CF8  4E 80 00 20 */	blr 

.global "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
"exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item":
/* 801F8DBC 001F5CFC  4E 80 00 20 */	blr 

.global "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
"cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item":
/* 801F8DC0 001F5D00  4E 80 00 20 */	blr 

.global "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
"resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item":
/* 801F8DC4 001F5D04  4E 80 00 20 */	blr 

.global "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
"restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item":
/* 801F8DC8 001F5D08  4E 80 00 20 */	blr 

.global "init__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
"init__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item":
/* 801F8DCC 001F5D0C  4E 80 00 20 */	blr 

.global "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
"exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item":
/* 801F8DD0 001F5D10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8DD4 001F5D14  7C 08 02 A6 */	mflr r0
/* 801F8DD8 001F5D18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8DDC 001F5D1C  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801F8DE0 001F5D20  28 03 00 00 */	cmplwi r3, 0
/* 801F8DE4 001F5D24  41 82 00 14 */	beq .L_801F8DF8
/* 801F8DE8 001F5D28  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8DEC 001F5D2C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F8DF0 001F5D30  7D 89 03 A6 */	mtctr r12
/* 801F8DF4 001F5D34  4E 80 04 21 */	bctrl 
.L_801F8DF8:
/* 801F8DF8 001F5D38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8DFC 001F5D3C  7C 08 03 A6 */	mtlr r0
/* 801F8E00 001F5D40  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8E04 001F5D44  4E 80 00 20 */	blr 

.global "create__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>Fi"
"create__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>Fi":
/* 801F8E08 001F5D48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8E0C 001F5D4C  7C 08 02 A6 */	mflr r0
/* 801F8E10 001F5D50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8E14 001F5D54  38 00 00 00 */	li r0, 0
/* 801F8E18 001F5D58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F8E1C 001F5D5C  7C 7F 1B 78 */	mr r31, r3
/* 801F8E20 001F5D60  90 83 00 0C */	stw r4, 0xc(r3)
/* 801F8E24 001F5D64  90 03 00 08 */	stw r0, 8(r3)
/* 801F8E28 001F5D68  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F8E2C 001F5D6C  54 03 10 3A */	slwi r3, r0, 2
/* 801F8E30 001F5D70  4B E2 B1 7D */	bl __nwa__FUl
/* 801F8E34 001F5D74  90 7F 00 04 */	stw r3, 4(r31)
/* 801F8E38 001F5D78  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F8E3C 001F5D7C  54 03 10 3A */	slwi r3, r0, 2
/* 801F8E40 001F5D80  4B E2 B1 6D */	bl __nwa__FUl
/* 801F8E44 001F5D84  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801F8E48 001F5D88  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F8E4C 001F5D8C  54 03 10 3A */	slwi r3, r0, 2
/* 801F8E50 001F5D90  4B E2 B1 5D */	bl __nwa__FUl
/* 801F8E54 001F5D94  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801F8E58 001F5D98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8E5C 001F5D9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F8E60 001F5DA0  7C 08 03 A6 */	mtlr r0
/* 801F8E64 001F5DA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8E68 001F5DA8  4E 80 00 20 */	blr 

.global "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
"transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg":
/* 801F8E6C 001F5DAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F8E70 001F5DB0  7C 08 02 A6 */	mflr r0
/* 801F8E74 001F5DB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F8E78 001F5DB8  54 A0 10 3A */	slwi r0, r5, 2
/* 801F8E7C 001F5DBC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801F8E80 001F5DC0  7C 7B 1B 78 */	mr r27, r3
/* 801F8E84 001F5DC4  7C 9C 23 78 */	mr r28, r4
/* 801F8E88 001F5DC8  7C DD 33 78 */	mr r29, r6
/* 801F8E8C 001F5DCC  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801F8E90 001F5DD0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801F8E94 001F5DD4  28 1E 00 00 */	cmplwi r30, 0
/* 801F8E98 001F5DD8  7F E3 00 2E */	lwzx r31, r3, r0
/* 801F8E9C 001F5DDC  41 82 00 20 */	beq .L_801F8EBC
/* 801F8EA0 001F5DE0  7F C3 F3 78 */	mr r3, r30
/* 801F8EA4 001F5DE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F8EA8 001F5DE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F8EAC 001F5DEC  7D 89 03 A6 */	mtctr r12
/* 801F8EB0 001F5DF0  4E 80 04 21 */	bctrl 
/* 801F8EB4 001F5DF4  80 1E 00 04 */	lwz r0, 4(r30)
/* 801F8EB8 001F5DF8  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801F8EBC:
/* 801F8EBC 001F5DFC  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801F8EC0 001F5E00  7C 1F 00 00 */	cmpw r31, r0
/* 801F8EC4 001F5E04  41 80 00 08 */	blt .L_801F8ECC
.L_801F8EC8:
/* 801F8EC8 001F5E08  48 00 00 00 */	b .L_801F8EC8
.L_801F8ECC:
/* 801F8ECC 001F5E0C  80 7B 00 04 */	lwz r3, 4(r27)
/* 801F8ED0 001F5E10  57 E0 10 3A */	slwi r0, r31, 2
/* 801F8ED4 001F5E14  7F 84 E3 78 */	mr r4, r28
/* 801F8ED8 001F5E18  7F A5 EB 78 */	mr r5, r29
/* 801F8EDC 001F5E1C  7C 63 00 2E */	lwzx r3, r3, r0
/* 801F8EE0 001F5E20  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801F8EE4 001F5E24  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8EE8 001F5E28  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F8EEC 001F5E2C  7D 89 03 A6 */	mtctr r12
/* 801F8EF0 001F5E30  4E 80 04 21 */	bctrl 
/* 801F8EF4 001F5E34  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801F8EF8 001F5E38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F8EFC 001F5E3C  7C 08 03 A6 */	mtlr r0
/* 801F8F00 001F5E40  38 21 00 20 */	addi r1, r1, 0x20
/* 801F8F04 001F5E44  4E 80 00 20 */	blr 

.global "registerState__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ24Game34FSMState<Q34Game10ItemBarrel4Item>"
"registerState__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ24Game34FSMState<Q34Game10ItemBarrel4Item>":
/* 801F8F08 001F5E48  80 C3 00 08 */	lwz r6, 8(r3)
/* 801F8F0C 001F5E4C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F8F10 001F5E50  7C 06 00 00 */	cmpw r6, r0
/* 801F8F14 001F5E54  4C 80 00 20 */	bgelr 
/* 801F8F18 001F5E58  80 A3 00 04 */	lwz r5, 4(r3)
/* 801F8F1C 001F5E5C  54 C0 10 3A */	slwi r0, r6, 2
/* 801F8F20 001F5E60  7C 85 01 2E */	stwx r4, r5, r0
/* 801F8F24 001F5E64  80 A4 00 04 */	lwz r5, 4(r4)
/* 801F8F28 001F5E68  2C 05 00 00 */	cmpwi r5, 0
/* 801F8F2C 001F5E6C  41 80 00 10 */	blt .L_801F8F3C
/* 801F8F30 001F5E70  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F8F34 001F5E74  7C 05 00 00 */	cmpw r5, r0
/* 801F8F38 001F5E78  41 80 00 0C */	blt .L_801F8F44
.L_801F8F3C:
/* 801F8F3C 001F5E7C  38 00 00 00 */	li r0, 0
/* 801F8F40 001F5E80  48 00 00 08 */	b .L_801F8F48
.L_801F8F44:
/* 801F8F44 001F5E84  38 00 00 01 */	li r0, 1
.L_801F8F48:
/* 801F8F48 001F5E88  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F8F4C 001F5E8C  4D 82 00 20 */	beqlr 
/* 801F8F50 001F5E90  90 64 00 08 */	stw r3, 8(r4)
/* 801F8F54 001F5E94  80 03 00 08 */	lwz r0, 8(r3)
/* 801F8F58 001F5E98  80 C4 00 04 */	lwz r6, 4(r4)
/* 801F8F5C 001F5E9C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801F8F60 001F5EA0  54 00 10 3A */	slwi r0, r0, 2
/* 801F8F64 001F5EA4  7C C5 01 2E */	stwx r6, r5, r0
/* 801F8F68 001F5EA8  80 04 00 04 */	lwz r0, 4(r4)
/* 801F8F6C 001F5EAC  80 A3 00 08 */	lwz r5, 8(r3)
/* 801F8F70 001F5EB0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801F8F74 001F5EB4  54 00 10 3A */	slwi r0, r0, 2
/* 801F8F78 001F5EB8  7C A4 01 2E */	stwx r5, r4, r0
/* 801F8F7C 001F5EBC  80 83 00 08 */	lwz r4, 8(r3)
/* 801F8F80 001F5EC0  38 04 00 01 */	addi r0, r4, 1
/* 801F8F84 001F5EC4  90 03 00 08 */	stw r0, 8(r3)
/* 801F8F88 001F5EC8  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent":
/* 801F8F8C 001F5ECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8F90 001F5ED0  7C 08 02 A6 */	mflr r0
/* 801F8F94 001F5ED4  7C 66 1B 78 */	mr r6, r3
/* 801F8F98 001F5ED8  7C 85 23 78 */	mr r5, r4
/* 801F8F9C 001F5EDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8FA0 001F5EE0  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F8FA4 001F5EE4  28 03 00 00 */	cmplwi r3, 0
/* 801F8FA8 001F5EE8  41 82 00 18 */	beq .L_801F8FC0
/* 801F8FAC 001F5EEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8FB0 001F5EF0  7C C4 33 78 */	mr r4, r6
/* 801F8FB4 001F5EF4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801F8FB8 001F5EF8  7D 89 03 A6 */	mtctr r12
/* 801F8FBC 001F5EFC  4E 80 04 21 */	bctrl 
.L_801F8FC0:
/* 801F8FC0 001F5F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F8FC4 001F5F04  7C 08 03 A6 */	mtlr r0
/* 801F8FC8 001F5F08  38 21 00 10 */	addi r1, r1, 0x10
/* 801F8FCC 001F5F0C  4E 80 00 20 */	blr 

.global "platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent"
"platCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9PlatEvent":
/* 801F8FD0 001F5F10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F8FD4 001F5F14  7C 08 02 A6 */	mflr r0
/* 801F8FD8 001F5F18  7C 66 1B 78 */	mr r6, r3
/* 801F8FDC 001F5F1C  7C 85 23 78 */	mr r5, r4
/* 801F8FE0 001F5F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F8FE4 001F5F24  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F8FE8 001F5F28  28 03 00 00 */	cmplwi r3, 0
/* 801F8FEC 001F5F2C  41 82 00 18 */	beq .L_801F9004
/* 801F8FF0 001F5F30  81 83 00 00 */	lwz r12, 0(r3)
/* 801F8FF4 001F5F34  7C C4 33 78 */	mr r4, r6
/* 801F8FF8 001F5F38  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801F8FFC 001F5F3C  7D 89 03 A6 */	mtctr r12
/* 801F9000 001F5F40  4E 80 04 21 */	bctrl 
.L_801F9004:
/* 801F9004 001F5F44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9008 001F5F48  7C 08 03 A6 */	mtlr r0
/* 801F900C 001F5F4C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9010 001F5F50  4E 80 00 20 */	blr 

.global "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent"
"collisionCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRQ24Game9CollEvent":
/* 801F9014 001F5F54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9018 001F5F58  7C 08 02 A6 */	mflr r0
/* 801F901C 001F5F5C  7C 66 1B 78 */	mr r6, r3
/* 801F9020 001F5F60  7C 85 23 78 */	mr r5, r4
/* 801F9024 001F5F64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9028 001F5F68  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F902C 001F5F6C  28 03 00 00 */	cmplwi r3, 0
/* 801F9030 001F5F70  41 82 00 18 */	beq .L_801F9048
/* 801F9034 001F5F74  81 83 00 00 */	lwz r12, 0(r3)
/* 801F9038 001F5F78  7C C4 33 78 */	mr r4, r6
/* 801F903C 001F5F7C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801F9040 001F5F80  7D 89 03 A6 */	mtctr r12
/* 801F9044 001F5F84  4E 80 04 21 */	bctrl 
.L_801F9048:
/* 801F9048 001F5F88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F904C 001F5F8C  7C 08 03 A6 */	mtlr r0
/* 801F9050 001F5F90  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9054 001F5F94  4E 80 00 20 */	blr 

.global "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle"
"bounceCallback__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FPQ23Sys8Triangle":
/* 801F9058 001F5F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F905C 001F5F9C  7C 08 02 A6 */	mflr r0
/* 801F9060 001F5FA0  7C 66 1B 78 */	mr r6, r3
/* 801F9064 001F5FA4  7C 85 23 78 */	mr r5, r4
/* 801F9068 001F5FA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F906C 001F5FAC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F9070 001F5FB0  28 03 00 00 */	cmplwi r3, 0
/* 801F9074 001F5FB4  41 82 00 18 */	beq .L_801F908C
/* 801F9078 001F5FB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F907C 001F5FBC  7C C4 33 78 */	mr r4, r6
/* 801F9080 001F5FC0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801F9084 001F5FC4  7D 89 03 A6 */	mtctr r12
/* 801F9088 001F5FC8  4E 80 04 21 */	bctrl 
.L_801F908C:
/* 801F908C 001F5FCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9090 001F5FD0  7C 08 03 A6 */	mtlr r0
/* 801F9094 001F5FD4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9098 001F5FD8  4E 80 00 20 */	blr 

.global __sinit_itemBarrel_cpp
__sinit_itemBarrel_cpp:
/* 801F909C 001F5FDC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801F90A0 001F5FE0  38 00 FF FF */	li r0, -1
/* 801F90A4 001F5FE4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801F90A8 001F5FE8  3C 60 80 4C */	lis r3, lbl_804BCCA8@ha
/* 801F90AC 001F5FEC  90 0D 94 E8 */	stw r0, lbl_80515B68@sda21(r13)
/* 801F90B0 001F5FF0  D4 03 CC A8 */	stfsu f0, lbl_804BCCA8@l(r3)
/* 801F90B4 001F5FF4  D0 0D 94 EC */	stfs f0, lbl_80515B6C@sda21(r13)
/* 801F90B8 001F5FF8  D0 03 00 04 */	stfs f0, 4(r3)
/* 801F90BC 001F5FFC  D0 03 00 08 */	stfs f0, 8(r3)
/* 801F90C0 001F6000  4E 80 00 20 */	blr 

.global "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent":
/* 801F90C4 001F6004  38 63 FE 88 */	addi r3, r3, -376
/* 801F90C8 001F6008  4B FF FE C4 */	b "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBarrel4Item,Q34Game10ItemBarrel3FSM,Q34Game10ItemBarrel5State>FRCQ28SysShape8KeyEvent"

.global "@48@__dt__Q34Game10ItemBarrel3MgrFv"
"@48@__dt__Q34Game10ItemBarrel3MgrFv":
/* 801F90CC 001F600C  38 63 FF D0 */	addi r3, r3, -48
/* 801F90D0 001F6010  4B FF FA 68 */	b __dt__Q34Game10ItemBarrel3MgrFv
