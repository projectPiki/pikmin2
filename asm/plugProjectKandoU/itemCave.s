.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemCave_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80480F98, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80480F98
.balign 4
.obj lbl_80480FA4, local
	.asciz "itemCave"
.endobj lbl_80480FA4
.balign 4
.obj lbl_80480FB0, local
	.asciz "startTime"
.endobj lbl_80480FB0
.balign 4
.obj lbl_80480FBC, local
	.asciz "Distance"
.endobj lbl_80480FBC
.balign 4
.obj lbl_80480FC8, local
	.asciz "Enter Dist"
.endobj lbl_80480FC8
.balign 4
.obj lbl_80480FD4, local
	.asciz "Exit  Dist"
.endobj lbl_80480FD4
.balign 4
.obj lbl_80480FE0, local
	.asciz "*** ITEMCAVE MAT\n"
.endobj lbl_80480FE0
.balign 4
.obj lbl_80480FF4, local
	.asciz "%s %d/%d"
.endobj lbl_80480FF4
.balign 4
.obj lbl_80481000, local
	.asciz "user/Kando/objects/dungeon_hole"
.endobj lbl_80481000
.balign 4
.obj lbl_80481020, local
	.asciz "dungeon_hole.bmd"
.endobj lbl_80481020
.balign 4
.obj lbl_80481034, local
	.asciz "texts.szs"
.endobj lbl_80481034
.balign 4
.obj lbl_80481040, local
	.asciz "cap_platform.bin"
.endobj lbl_80481040
.balign 4
.obj lbl_80481054, local
	.asciz "side_platform.bin"
.endobj lbl_80481054
.balign 4
.obj lbl_80481068, local
	.asciz "itemCave.cpp"
.endobj lbl_80481068
.balign 4
.obj lbl_80481078, local
	.asciz "P2Assert"
.endobj lbl_80481078
.balign 4
.obj lbl_80481084, local
	.asciz "\t# id (for stages.txt)\r\n"
.endobj lbl_80481084

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__11GenCaveParm, weak
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.endobj __vt__11GenCaveParm
.obj __vt__Q34Game8ItemCave3Mgr, global
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
	.4byte setup__Q34Game8ItemCave3MgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q34Game8ItemCave3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game8ItemCave3MgrFv
	.4byte "generatorBirth__Q34Game8ItemCave3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game8ItemCave3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game8ItemCave3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game8ItemCave3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game8ItemCave3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game8ItemCave3MgrFv
.endobj __vt__Q34Game8ItemCave3Mgr
.obj __vt__Q34Game8ItemCave4Item, global
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
.endobj __vt__Q34Game8ItemCave4Item
.obj "__vt__8Parm<Uc>", weak
	.4byte 0
	.4byte 0
	.4byte "size__8Parm<Uc>Fv"
	.4byte "write__8Parm<Uc>FR6Stream"
	.4byte "read__8Parm<Uc>FR6Stream"
.endobj "__vt__8Parm<Uc>"
.obj "__vt__Q24Game30ItemFSM<Q34Game8ItemCave4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game30ItemFSM<Q34Game8ItemCave4Item>"
.obj "__vt__Q24Game35StateMachine<Q34Game8ItemCave4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game35StateMachine<Q34Game8ItemCave4Item>"
.obj "__vt__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>", weak
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
	.4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>Fv"
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
	.4byte "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>"
.obj __vt__Q34Game8ItemCave9OpenState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item
	.4byte cleanup__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game8ItemCave9OpenState
.obj __vt__Q34Game8ItemCave11NormalState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item
	.4byte cleanup__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game8ItemCave11NormalState
.obj __vt__Q34Game8ItemCave5State, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game8ItemCave5State
.obj "__vt__Q24Game32ItemState<Q34Game8ItemCave4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent"
.endobj "__vt__Q24Game32ItemState<Q34Game8ItemCave4Item>"
.obj "__vt__Q24Game31FSMState<Q34Game8ItemCave4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game31FSMState<Q34Game8ItemCave4Item>"
.obj __vt__Q34Game8ItemCave3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemCave3FSMFPQ34Game8ItemCave4Item
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
.endobj __vt__Q34Game8ItemCave3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj mgr__Q24Game8ItemCave, global
	.skip 0x4
.endobj mgr__Q24Game8ItemCave

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805199E0, local
	.asciz "FogParm"
.endobj lbl_805199E0
.balign 4
.obj lbl_805199E8, local
	.asciz "startZ"
.endobj lbl_805199E8
.balign 4
.obj lbl_805199F0, local
	.float 32.0
.endobj lbl_805199F0
.obj lbl_805199F4, local
	.float 1.0
.endobj lbl_805199F4
.obj lbl_805199F8, local
	.float 12800.0
.endobj lbl_805199F8
.balign 4
.obj lbl_805199FC, local
	.asciz "endZ"
.endobj lbl_805199FC
.balign 4
.obj lbl_80519A04, local
	.float 1200.0
.endobj lbl_80519A04
.obj lbl_80519A08, local
	.float 2.0
.endobj lbl_80519A08
.obj lbl_80519A0C, local
	.float 0.0
.endobj lbl_80519A0C
.obj lbl_80519A10, local
	.float 30.0
.endobj lbl_80519A10
.balign 4
.obj lbl_80519A14, local
	.asciz "endTime"
.endobj lbl_80519A14
.balign 4
.obj lbl_80519A1C, local
	.asciz "Red"
.endobj lbl_80519A1C
.balign 4
.obj lbl_80519A20, local
	.asciz "Green"
.endobj lbl_80519A20
.balign 4
.obj lbl_80519A28, local
	.asciz "Blue"
.endobj lbl_80519A28
.balign 4
.obj lbl_80519A30, local
	.float 2000.0
.endobj lbl_80519A30
.obj lbl_80519A34, local
	.float 190.0
.endobj lbl_80519A34
.obj lbl_80519A38, local
	.float 240.0
.endobj lbl_80519A38
.obj lbl_80519A3C, local
	.float 50.0
.endobj lbl_80519A3C
.obj lbl_80519A40, local
	.float 65.0
.endobj lbl_80519A40
.obj lbl_80519A44, local
	.float 75.0
.endobj lbl_80519A44
.obj lbl_80519A48, local
	.float 40.0
.endobj lbl_80519A48
.obj lbl_80519A4C, local
	.float 490000.0
.endobj lbl_80519A4C
.balign 4
.obj lbl_80519A50, local
	.asciz "flag"
.endobj lbl_80519A50
.balign 4
.obj lbl_80519A58, local
	.float 1.5
.endobj lbl_80519A58
.obj lbl_80519A5C, local
	.float 0.5
.endobj lbl_80519A5C
.obj lbl_80519A60, local
	.float 1024.0
.endobj lbl_80519A60
.obj lbl_80519A64, local
	.float 500.0
.endobj lbl_80519A64
.balign 8
.obj lbl_80519A68, local
	.8byte 0x4330000000000000
.endobj lbl_80519A68
.obj lbl_80519A70, local
	.float 0.15
.endobj lbl_80519A70
.obj lbl_80519A74, local
	.float 0.085
.endobj lbl_80519A74
.obj lbl_80519A78, local
	.float 10.0
.endobj lbl_80519A78
.obj lbl_80519A7C, local
	.float 60.0
.endobj lbl_80519A7C
.balign 4
.obj lbl_80519A80, local
	.asciz "Cave"
.endobj lbl_80519A80
.balign 4
.obj lbl_80519A88, local
	.asciz "arc.szs"
.endobj lbl_80519A88
.balign 4
.obj lbl_80519A90, local
	.asciz "\r\n"
.endobj lbl_80519A90

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game8ItemCave3FSMFPQ34Game8ItemCave4Item, global
/* 801E9FB8 001E6EF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E9FBC 001E6EFC  7C 08 02 A6 */	mflr r0
/* 801E9FC0 001E6F00  38 80 00 02 */	li r4, 2
/* 801E9FC4 001E6F04  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E9FC8 001E6F08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E9FCC 001E6F0C  7C 7F 1B 78 */	mr r31, r3
/* 801E9FD0 001E6F10  48 00 1E AD */	bl "create__Q24Game35StateMachine<Q34Game8ItemCave4Item>Fi"
/* 801E9FD4 001E6F14  38 60 00 10 */	li r3, 0x10
/* 801E9FD8 001E6F18  4B E3 9E CD */	bl __nw__FUl
/* 801E9FDC 001E6F1C  7C 64 1B 79 */	or. r4, r3, r3
/* 801E9FE0 001E6F20  41 82 00 40 */	beq .L_801EA020
/* 801E9FE4 001E6F24  3C 60 80 4C */	lis r3, "__vt__Q24Game31FSMState<Q34Game8ItemCave4Item>"@ha
/* 801E9FE8 001E6F28  3C C0 80 4C */	lis r6, "__vt__Q24Game32ItemState<Q34Game8ItemCave4Item>"@ha
/* 801E9FEC 001E6F2C  38 03 A9 D0 */	addi r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemCave4Item>"@l
/* 801E9FF0 001E6F30  3C A0 80 4C */	lis r5, __vt__Q34Game8ItemCave5State@ha
/* 801E9FF4 001E6F34  90 04 00 00 */	stw r0, 0(r4)
/* 801E9FF8 001E6F38  38 E0 00 00 */	li r7, 0
/* 801E9FFC 001E6F3C  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemCave11NormalState@ha
/* 801EA000 001E6F40  38 C6 A9 9C */	addi r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemCave4Item>"@l
/* 801EA004 001E6F44  90 E4 00 04 */	stw r7, 4(r4)
/* 801EA008 001E6F48  38 A5 A9 68 */	addi r5, r5, __vt__Q34Game8ItemCave5State@l
/* 801EA00C 001E6F4C  38 03 A9 34 */	addi r0, r3, __vt__Q34Game8ItemCave11NormalState@l
/* 801EA010 001E6F50  90 E4 00 08 */	stw r7, 8(r4)
/* 801EA014 001E6F54  90 C4 00 00 */	stw r6, 0(r4)
/* 801EA018 001E6F58  90 A4 00 00 */	stw r5, 0(r4)
/* 801EA01C 001E6F5C  90 04 00 00 */	stw r0, 0(r4)
.L_801EA020:
/* 801EA020 001E6F60  7F E3 FB 78 */	mr r3, r31
/* 801EA024 001E6F64  48 00 1F 61 */	bl "registerState__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ24Game31FSMState<Q34Game8ItemCave4Item>"
/* 801EA028 001E6F68  38 60 00 10 */	li r3, 0x10
/* 801EA02C 001E6F6C  4B E3 9E 79 */	bl __nw__FUl
/* 801EA030 001E6F70  7C 64 1B 79 */	or. r4, r3, r3
/* 801EA034 001E6F74  41 82 00 40 */	beq .L_801EA074
/* 801EA038 001E6F78  3C 60 80 4C */	lis r3, "__vt__Q24Game31FSMState<Q34Game8ItemCave4Item>"@ha
/* 801EA03C 001E6F7C  3C C0 80 4C */	lis r6, "__vt__Q24Game32ItemState<Q34Game8ItemCave4Item>"@ha
/* 801EA040 001E6F80  38 03 A9 D0 */	addi r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemCave4Item>"@l
/* 801EA044 001E6F84  3C A0 80 4C */	lis r5, __vt__Q34Game8ItemCave5State@ha
/* 801EA048 001E6F88  90 04 00 00 */	stw r0, 0(r4)
/* 801EA04C 001E6F8C  38 E0 00 00 */	li r7, 0
/* 801EA050 001E6F90  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemCave9OpenState@ha
/* 801EA054 001E6F94  38 C6 A9 9C */	addi r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemCave4Item>"@l
/* 801EA058 001E6F98  90 E4 00 04 */	stw r7, 4(r4)
/* 801EA05C 001E6F9C  38 A5 A9 68 */	addi r5, r5, __vt__Q34Game8ItemCave5State@l
/* 801EA060 001E6FA0  38 03 A9 00 */	addi r0, r3, __vt__Q34Game8ItemCave9OpenState@l
/* 801EA064 001E6FA4  90 E4 00 08 */	stw r7, 8(r4)
/* 801EA068 001E6FA8  90 C4 00 00 */	stw r6, 0(r4)
/* 801EA06C 001E6FAC  90 A4 00 00 */	stw r5, 0(r4)
/* 801EA070 001E6FB0  90 04 00 00 */	stw r0, 0(r4)
.L_801EA074:
/* 801EA074 001E6FB4  7F E3 FB 78 */	mr r3, r31
/* 801EA078 001E6FB8  48 00 1F 0D */	bl "registerState__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ24Game31FSMState<Q34Game8ItemCave4Item>"
/* 801EA07C 001E6FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EA080 001E6FC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EA084 001E6FC4  7C 08 03 A6 */	mtlr r0
/* 801EA088 001E6FC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801EA08C 001E6FCC  4E 80 00 20 */	blr 
.endfn init__Q34Game8ItemCave3FSMFPQ34Game8ItemCave4Item

.fn init__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg, global
/* 801EA090 001E6FD0  4E 80 00 20 */	blr 
.endfn init__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg

.fn exec__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item, global
/* 801EA094 001E6FD4  4E 80 00 20 */	blr 
.endfn exec__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item

.fn cleanup__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item, global
/* 801EA098 001E6FD8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item

.fn init__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg, global
/* 801EA09C 001E6FDC  4E 80 00 20 */	blr 
.endfn init__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg

.fn exec__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item, global
/* 801EA0A0 001E6FE0  4E 80 00 20 */	blr 
.endfn exec__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item

.fn cleanup__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item, global
/* 801EA0A4 001E6FE4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item

.fn __ct__Q34Game8ItemCave4ItemFv, global
/* 801EA0A8 001E6FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EA0AC 001E6FEC  7C 08 02 A6 */	mflr r0
/* 801EA0B0 001E6FF0  38 80 04 0A */	li r4, 0x40a
/* 801EA0B4 001E6FF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EA0B8 001E6FF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EA0BC 001E6FFC  7C 7F 1B 78 */	mr r31, r3
/* 801EA0C0 001E7000  4B FE 1F 29 */	bl __ct__Q24Game8BaseItemFi
/* 801EA0C4 001E7004  3C 60 80 4C */	lis r3, "__vt__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>"@ha
/* 801EA0C8 001E7008  38 00 00 00 */	li r0, 0
/* 801EA0CC 001E700C  38 83 A6 DC */	addi r4, r3, "__vt__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>"@l
/* 801EA0D0 001E7010  38 60 00 1C */	li r3, 0x1c
/* 801EA0D4 001E7014  90 9F 00 00 */	stw r4, 0(r31)
/* 801EA0D8 001E7018  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801EA0DC 001E701C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801EA0E0 001E7020  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801EA0E4 001E7024  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801EA0E8 001E7028  4B E3 9D BD */	bl __nw__FUl
/* 801EA0EC 001E702C  28 03 00 00 */	cmplwi r3, 0
/* 801EA0F0 001E7030  41 82 00 30 */	beq .L_801EA120
/* 801EA0F4 001E7034  3C 80 80 4C */	lis r4, "__vt__Q24Game35StateMachine<Q34Game8ItemCave4Item>"@ha
/* 801EA0F8 001E7038  3C A0 80 4C */	lis r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemCave4Item>"@ha
/* 801EA0FC 001E703C  38 04 A6 C4 */	addi r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemCave4Item>"@l
/* 801EA100 001E7040  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemCave3FSM@ha
/* 801EA104 001E7044  90 03 00 00 */	stw r0, 0(r3)
/* 801EA108 001E7048  38 C0 FF FF */	li r6, -1
/* 801EA10C 001E704C  38 A5 A6 AC */	addi r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemCave4Item>"@l
/* 801EA110 001E7050  38 04 A9 F0 */	addi r0, r4, __vt__Q34Game8ItemCave3FSM@l
/* 801EA114 001E7054  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801EA118 001E7058  90 A3 00 00 */	stw r5, 0(r3)
/* 801EA11C 001E705C  90 03 00 00 */	stw r0, 0(r3)
.L_801EA120:
/* 801EA120 001E7060  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801EA124 001E7064  7F E4 FB 78 */	mr r4, r31
/* 801EA128 001E7068  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801EA12C 001E706C  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA130 001E7070  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EA134 001E7074  7D 89 03 A6 */	mtctr r12
/* 801EA138 001E7078  4E 80 04 21 */	bctrl 
/* 801EA13C 001E707C  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemCave4Item@ha
/* 801EA140 001E7080  38 7F 01 E8 */	addi r3, r31, 0x1e8
/* 801EA144 001E7084  38 84 A4 74 */	addi r4, r4, __vt__Q34Game8ItemCave4Item@l
/* 801EA148 001E7088  90 9F 00 00 */	stw r4, 0(r31)
/* 801EA14C 001E708C  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801EA150 001E7090  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801EA154 001E7094  48 22 91 1D */	bl __ct__4ID32Fv
/* 801EA158 001E7098  38 7F 02 04 */	addi r3, r31, 0x204
/* 801EA15C 001E709C  38 80 00 01 */	li r4, 1
/* 801EA160 001E70A0  48 00 00 2D */	bl __ct__Q34Game8ItemCave7FogParmFv
/* 801EA164 001E70A4  38 00 00 00 */	li r0, 0
/* 801EA168 001E70A8  7F E3 FB 78 */	mr r3, r31
/* 801EA16C 001E70AC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801EA170 001E70B0  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 801EA174 001E70B4  90 1F 02 00 */	stw r0, 0x200(r31)
/* 801EA178 001E70B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EA17C 001E70BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EA180 001E70C0  7C 08 03 A6 */	mtlr r0
/* 801EA184 001E70C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801EA188 001E70C8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8ItemCave4ItemFv

.fn __ct__Q34Game8ItemCave7FogParmFv, weak
/* 801EA18C 001E70CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EA190 001E70D0  7C 08 02 A6 */	mflr r0
/* 801EA194 001E70D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EA198 001E70D8  7C 80 07 35 */	extsh. r0, r4
/* 801EA19C 001E70DC  3C 80 80 48 */	lis r4, lbl_80480F98@ha
/* 801EA1A0 001E70E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EA1A4 001E70E4  3B E4 0F 98 */	addi r31, r4, lbl_80480F98@l
/* 801EA1A8 001E70E8  93 C1 00 08 */	stw r30, 8(r1)
/* 801EA1AC 001E70EC  7C 7E 1B 78 */	mr r30, r3
/* 801EA1B0 001E70F0  41 82 00 0C */	beq .L_801EA1BC
/* 801EA1B4 001E70F4  38 1E 01 78 */	addi r0, r30, 0x178
/* 801EA1B8 001E70F8  90 1E 00 00 */	stw r0, 0(r30)
.L_801EA1BC:
/* 801EA1BC 001E70FC  38 00 00 00 */	li r0, 0
/* 801EA1C0 001E7100  3C A0 66 67 */	lis r5, 0x66673030@ha
/* 801EA1C4 001E7104  90 1E 00 04 */	stw r0, 4(r30)
/* 801EA1C8 001E7108  38 02 B6 80 */	addi r0, r2, lbl_805199E0@sda21
/* 801EA1CC 001E710C  7F C4 F3 78 */	mr r4, r30
/* 801EA1D0 001E7110  38 7E 00 0C */	addi r3, r30, 0xc
/* 801EA1D4 001E7114  90 1E 00 08 */	stw r0, 8(r30)
/* 801EA1D8 001E7118  38 A5 30 30 */	addi r5, r5, 0x66673030@l
/* 801EA1DC 001E711C  38 C2 B6 88 */	addi r6, r2, lbl_805199E8@sda21
/* 801EA1E0 001E7120  48 22 94 79 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA1E4 001E7124  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA1E8 001E7128  3C A0 66 67 */	lis r5, 0x66673031@ha
/* 801EA1EC 001E712C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA1F0 001E7130  C0 02 B6 90 */	lfs f0, lbl_805199F0@sda21(r2)
/* 801EA1F4 001E7134  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801EA1F8 001E7138  7F C4 F3 78 */	mr r4, r30
/* 801EA1FC 001E713C  C0 22 B6 94 */	lfs f1, lbl_805199F4@sda21(r2)
/* 801EA200 001E7140  38 7E 00 34 */	addi r3, r30, 0x34
/* 801EA204 001E7144  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801EA208 001E7148  38 A5 30 31 */	addi r5, r5, 0x66673031@l
/* 801EA20C 001E714C  C0 02 B6 98 */	lfs f0, lbl_805199F8@sda21(r2)
/* 801EA210 001E7150  38 C2 B6 9C */	addi r6, r2, lbl_805199FC@sda21
/* 801EA214 001E7154  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801EA218 001E7158  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801EA21C 001E715C  48 22 94 3D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA220 001E7160  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA224 001E7164  3C A0 66 67 */	lis r5, 0x66673032@ha
/* 801EA228 001E7168  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA22C 001E716C  C0 02 B6 A4 */	lfs f0, lbl_80519A04@sda21(r2)
/* 801EA230 001E7170  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801EA234 001E7174  7F C4 F3 78 */	mr r4, r30
/* 801EA238 001E7178  C0 22 B6 94 */	lfs f1, lbl_805199F4@sda21(r2)
/* 801EA23C 001E717C  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801EA240 001E7180  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801EA244 001E7184  38 A5 30 32 */	addi r5, r5, 0x66673032@l
/* 801EA248 001E7188  C0 02 B6 98 */	lfs f0, lbl_805199F8@sda21(r2)
/* 801EA24C 001E718C  38 DF 00 18 */	addi r6, r31, 0x18
/* 801EA250 001E7190  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 801EA254 001E7194  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 801EA258 001E7198  48 22 94 01 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA25C 001E719C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA260 001E71A0  3C A0 66 67 */	lis r5, 0x66673033@ha
/* 801EA264 001E71A4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA268 001E71A8  C0 02 B6 A8 */	lfs f0, lbl_80519A08@sda21(r2)
/* 801EA26C 001E71AC  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801EA270 001E71B0  7F C4 F3 78 */	mr r4, r30
/* 801EA274 001E71B4  C0 22 B6 AC */	lfs f1, lbl_80519A0C@sda21(r2)
/* 801EA278 001E71B8  38 7E 00 84 */	addi r3, r30, 0x84
/* 801EA27C 001E71BC  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 801EA280 001E71C0  38 A5 30 33 */	addi r5, r5, 0x66673033@l
/* 801EA284 001E71C4  C0 02 B6 B0 */	lfs f0, lbl_80519A10@sda21(r2)
/* 801EA288 001E71C8  38 C2 B6 B4 */	addi r6, r2, lbl_80519A14@sda21
/* 801EA28C 001E71CC  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801EA290 001E71D0  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 801EA294 001E71D4  48 22 93 C5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA298 001E71D8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA29C 001E71DC  3C A0 66 67 */	lis r5, 0x66673034@ha
/* 801EA2A0 001E71E0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA2A4 001E71E4  C0 02 B6 A8 */	lfs f0, lbl_80519A08@sda21(r2)
/* 801EA2A8 001E71E8  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801EA2AC 001E71EC  7F C4 F3 78 */	mr r4, r30
/* 801EA2B0 001E71F0  C0 22 B6 AC */	lfs f1, lbl_80519A0C@sda21(r2)
/* 801EA2B4 001E71F4  38 7E 00 AC */	addi r3, r30, 0xac
/* 801EA2B8 001E71F8  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 801EA2BC 001E71FC  38 A5 30 34 */	addi r5, r5, 0x66673034@l
/* 801EA2C0 001E7200  C0 02 B6 B0 */	lfs f0, lbl_80519A10@sda21(r2)
/* 801EA2C4 001E7204  38 C2 B6 BC */	addi r6, r2, lbl_80519A1C@sda21
/* 801EA2C8 001E7208  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 801EA2CC 001E720C  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 801EA2D0 001E7210  48 22 93 89 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA2D4 001E7214  3C 60 80 4C */	lis r3, "__vt__8Parm<Uc>"@ha
/* 801EA2D8 001E7218  3C A0 66 67 */	lis r5, 0x66673035@ha
/* 801EA2DC 001E721C  38 03 A6 98 */	addi r0, r3, "__vt__8Parm<Uc>"@l
/* 801EA2E0 001E7220  38 60 00 0A */	li r3, 0xa
/* 801EA2E4 001E7224  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801EA2E8 001E7228  38 E0 00 00 */	li r7, 0
/* 801EA2EC 001E722C  38 00 00 FF */	li r0, 0xff
/* 801EA2F0 001E7230  7F C4 F3 78 */	mr r4, r30
/* 801EA2F4 001E7234  98 7E 00 C4 */	stb r3, 0xc4(r30)
/* 801EA2F8 001E7238  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 801EA2FC 001E723C  38 A5 30 35 */	addi r5, r5, 0x66673035@l
/* 801EA300 001E7240  38 C2 B6 C0 */	addi r6, r2, lbl_80519A20@sda21
/* 801EA304 001E7244  98 FE 00 C6 */	stb r7, 0xc6(r30)
/* 801EA308 001E7248  98 1E 00 C7 */	stb r0, 0xc7(r30)
/* 801EA30C 001E724C  48 22 93 4D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA310 001E7250  3C 60 80 4C */	lis r3, "__vt__8Parm<Uc>"@ha
/* 801EA314 001E7254  3C A0 66 67 */	lis r5, 0x66673036@ha
/* 801EA318 001E7258  38 03 A6 98 */	addi r0, r3, "__vt__8Parm<Uc>"@l
/* 801EA31C 001E725C  38 60 00 6E */	li r3, 0x6e
/* 801EA320 001E7260  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 801EA324 001E7264  38 E0 00 00 */	li r7, 0
/* 801EA328 001E7268  38 00 00 FF */	li r0, 0xff
/* 801EA32C 001E726C  7F C4 F3 78 */	mr r4, r30
/* 801EA330 001E7270  98 7E 00 E0 */	stb r3, 0xe0(r30)
/* 801EA334 001E7274  38 7E 00 E4 */	addi r3, r30, 0xe4
/* 801EA338 001E7278  38 A5 30 36 */	addi r5, r5, 0x66673036@l
/* 801EA33C 001E727C  38 C2 B6 C8 */	addi r6, r2, lbl_80519A28@sda21
/* 801EA340 001E7280  98 FE 00 E2 */	stb r7, 0xe2(r30)
/* 801EA344 001E7284  98 1E 00 E3 */	stb r0, 0xe3(r30)
/* 801EA348 001E7288  48 22 93 11 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA34C 001E728C  3C 60 80 4C */	lis r3, "__vt__8Parm<Uc>"@ha
/* 801EA350 001E7290  3C A0 66 67 */	lis r5, 0x66673037@ha
/* 801EA354 001E7294  38 03 A6 98 */	addi r0, r3, "__vt__8Parm<Uc>"@l
/* 801EA358 001E7298  38 60 00 76 */	li r3, 0x76
/* 801EA35C 001E729C  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 801EA360 001E72A0  38 E0 00 00 */	li r7, 0
/* 801EA364 001E72A4  38 00 00 FF */	li r0, 0xff
/* 801EA368 001E72A8  7F C4 F3 78 */	mr r4, r30
/* 801EA36C 001E72AC  98 7E 00 FC */	stb r3, 0xfc(r30)
/* 801EA370 001E72B0  38 7E 01 00 */	addi r3, r30, 0x100
/* 801EA374 001E72B4  38 A5 30 37 */	addi r5, r5, 0x66673037@l
/* 801EA378 001E72B8  38 DF 00 24 */	addi r6, r31, 0x24
/* 801EA37C 001E72BC  98 FE 00 FE */	stb r7, 0xfe(r30)
/* 801EA380 001E72C0  98 1E 00 FF */	stb r0, 0xff(r30)
/* 801EA384 001E72C4  48 22 92 D5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA388 001E72C8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA38C 001E72CC  3C A0 66 67 */	lis r5, 0x66673038@ha
/* 801EA390 001E72D0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA394 001E72D4  C0 02 B6 D0 */	lfs f0, lbl_80519A30@sda21(r2)
/* 801EA398 001E72D8  90 1E 01 00 */	stw r0, 0x100(r30)
/* 801EA39C 001E72DC  7F C4 F3 78 */	mr r4, r30
/* 801EA3A0 001E72E0  C0 22 B6 AC */	lfs f1, lbl_80519A0C@sda21(r2)
/* 801EA3A4 001E72E4  38 7E 01 28 */	addi r3, r30, 0x128
/* 801EA3A8 001E72E8  D0 1E 01 18 */	stfs f0, 0x118(r30)
/* 801EA3AC 001E72EC  38 A5 30 38 */	addi r5, r5, 0x66673038@l
/* 801EA3B0 001E72F0  C0 02 B6 98 */	lfs f0, lbl_805199F8@sda21(r2)
/* 801EA3B4 001E72F4  38 DF 00 30 */	addi r6, r31, 0x30
/* 801EA3B8 001E72F8  D0 3E 01 20 */	stfs f1, 0x120(r30)
/* 801EA3BC 001E72FC  D0 1E 01 24 */	stfs f0, 0x124(r30)
/* 801EA3C0 001E7300  48 22 92 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA3C4 001E7304  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA3C8 001E7308  3C A0 66 67 */	lis r5, 0x66673039@ha
/* 801EA3CC 001E730C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA3D0 001E7310  C0 02 B6 D4 */	lfs f0, lbl_80519A34@sda21(r2)
/* 801EA3D4 001E7314  90 1E 01 28 */	stw r0, 0x128(r30)
/* 801EA3D8 001E7318  7F C4 F3 78 */	mr r4, r30
/* 801EA3DC 001E731C  C0 22 B6 AC */	lfs f1, lbl_80519A0C@sda21(r2)
/* 801EA3E0 001E7320  38 7E 01 50 */	addi r3, r30, 0x150
/* 801EA3E4 001E7324  D0 1E 01 40 */	stfs f0, 0x140(r30)
/* 801EA3E8 001E7328  38 A5 30 39 */	addi r5, r5, 0x66673039@l
/* 801EA3EC 001E732C  C0 02 B6 98 */	lfs f0, lbl_805199F8@sda21(r2)
/* 801EA3F0 001E7330  38 DF 00 3C */	addi r6, r31, 0x3c
/* 801EA3F4 001E7334  D0 3E 01 48 */	stfs f1, 0x148(r30)
/* 801EA3F8 001E7338  D0 1E 01 4C */	stfs f0, 0x14c(r30)
/* 801EA3FC 001E733C  48 22 92 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801EA400 001E7340  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801EA404 001E7344  C0 42 B6 D8 */	lfs f2, lbl_80519A38@sda21(r2)
/* 801EA408 001E7348  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801EA40C 001E734C  C0 22 B6 AC */	lfs f1, lbl_80519A0C@sda21(r2)
/* 801EA410 001E7350  90 1E 01 50 */	stw r0, 0x150(r30)
/* 801EA414 001E7354  7F C3 F3 78 */	mr r3, r30
/* 801EA418 001E7358  C0 02 B6 98 */	lfs f0, lbl_805199F8@sda21(r2)
/* 801EA41C 001E735C  D0 5E 01 68 */	stfs f2, 0x168(r30)
/* 801EA420 001E7360  D0 3E 01 70 */	stfs f1, 0x170(r30)
/* 801EA424 001E7364  D0 1E 01 74 */	stfs f0, 0x174(r30)
/* 801EA428 001E7368  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EA42C 001E736C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801EA430 001E7370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EA434 001E7374  7C 08 03 A6 */	mtlr r0
/* 801EA438 001E7378  38 21 00 10 */	addi r1, r1, 0x10
/* 801EA43C 001E737C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8ItemCave7FogParmFv

.fn onInit__Q34Game8ItemCave4ItemFPQ24Game15CreatureInitArg, global
/* 801EA440 001E7380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EA444 001E7384  7C 08 02 A6 */	mflr r0
/* 801EA448 001E7388  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EA44C 001E738C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EA450 001E7390  7C 7F 1B 78 */	mr r31, r3
/* 801EA454 001E7394  7F E4 FB 78 */	mr r4, r31
/* 801EA458 001E7398  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801EA45C 001E739C  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA460 001E73A0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801EA464 001E73A4  7D 89 03 A6 */	mtctr r12
/* 801EA468 001E73A8  4E 80 04 21 */	bctrl 
/* 801EA46C 001E73AC  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801EA470 001E73B0  7F E4 FB 78 */	mr r4, r31
/* 801EA474 001E73B4  38 A0 00 00 */	li r5, 0
/* 801EA478 001E73B8  38 C0 00 00 */	li r6, 0
/* 801EA47C 001E73BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA480 001E73C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801EA484 001E73C4  7D 89 03 A6 */	mtctr r12
/* 801EA488 001E73C8  4E 80 04 21 */	bctrl 
/* 801EA48C 001E73CC  7F E3 FB 78 */	mr r3, r31
/* 801EA490 001E73D0  38 80 00 01 */	li r4, 1
/* 801EA494 001E73D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EA498 001E73D8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801EA49C 001E73DC  7D 89 03 A6 */	mtctr r12
/* 801EA4A0 001E73E0  4E 80 04 21 */	bctrl 
/* 801EA4A4 001E73E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EA4A8 001E73E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EA4AC 001E73EC  7C 08 03 A6 */	mtlr r0
/* 801EA4B0 001E73F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801EA4B4 001E73F4  4E 80 00 20 */	blr 
.endfn onInit__Q34Game8ItemCave4ItemFPQ24Game15CreatureInitArg

.fn "start__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg", weak
/* 801EA4B8 001E73F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EA4BC 001E73FC  7C 08 02 A6 */	mflr r0
/* 801EA4C0 001E7400  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EA4C4 001E7404  38 00 00 00 */	li r0, 0
/* 801EA4C8 001E7408  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801EA4CC 001E740C  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA4D0 001E7410  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EA4D4 001E7414  7D 89 03 A6 */	mtctr r12
/* 801EA4D8 001E7418  4E 80 04 21 */	bctrl 
/* 801EA4DC 001E741C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EA4E0 001E7420  7C 08 03 A6 */	mtlr r0
/* 801EA4E4 001E7424  38 21 00 10 */	addi r1, r1, 0x10
/* 801EA4E8 001E7428  4E 80 00 20 */	blr 
.endfn "start__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"

.fn makeTrMatrix__Q34Game8ItemCave4ItemFv, global
/* 801EA4EC 001E742C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EA4F0 001E7430  7C 08 02 A6 */	mflr r0
/* 801EA4F4 001E7434  C0 02 B6 AC */	lfs f0, lbl_80519A0C@sda21(r2)
/* 801EA4F8 001E7438  7C 64 1B 78 */	mr r4, r3
/* 801EA4FC 001E743C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EA500 001E7440  38 A1 00 08 */	addi r5, r1, 8
/* 801EA504 001E7444  C0 23 01 FC */	lfs f1, 0x1fc(r3)
/* 801EA508 001E7448  38 64 01 38 */	addi r3, r4, 0x138
/* 801EA50C 001E744C  38 84 01 9C */	addi r4, r4, 0x19c
/* 801EA510 001E7450  D0 01 00 08 */	stfs f0, 8(r1)
/* 801EA514 001E7454  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801EA518 001E7458  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801EA51C 001E745C  48 23 E3 6D */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801EA520 001E7460  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EA524 001E7464  7C 08 03 A6 */	mtlr r0
/* 801EA528 001E7468  38 21 00 20 */	addi r1, r1, 0x20
/* 801EA52C 001E746C  4E 80 00 20 */	blr 
.endfn makeTrMatrix__Q34Game8ItemCave4ItemFv

.fn onSetPosition__Q34Game8ItemCave4ItemFv, global
/* 801EA530 001E7470  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801EA534 001E7474  7C 08 02 A6 */	mflr r0
/* 801EA538 001E7478  C0 02 B6 DC */	lfs f0, lbl_80519A3C@sda21(r2)
/* 801EA53C 001E747C  90 01 00 74 */	stw r0, 0x74(r1)
/* 801EA540 001E7480  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801EA544 001E7484  7C 7F 1B 78 */	mr r31, r3
/* 801EA548 001E7488  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801EA54C 001E748C  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801EA550 001E7490  38 60 00 44 */	li r3, 0x44
/* 801EA554 001E7494  D0 3F 01 C4 */	stfs f1, 0x1c4(r31)
/* 801EA558 001E7498  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 801EA55C 001E749C  D0 3F 01 C8 */	stfs f1, 0x1c8(r31)
/* 801EA560 001E74A0  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801EA564 001E74A4  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 801EA568 001E74A8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801EA56C 001E74AC  4B E3 99 39 */	bl __nw__FUl
/* 801EA570 001E74B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801EA574 001E74B4  41 82 00 24 */	beq .L_801EA598
/* 801EA578 001E74B8  38 80 00 AF */	li r4, 0xaf
/* 801EA57C 001E74BC  38 A0 00 B0 */	li r5, 0xb0
/* 801EA580 001E74C0  38 C0 00 B1 */	li r6, 0xb1
/* 801EA584 001E74C4  38 E0 00 B2 */	li r7, 0xb2
/* 801EA588 001E74C8  48 1C 5C 21 */	bl __ct__Q23efx9TForever4FUsUsUsUs
/* 801EA58C 001E74CC  3C 60 80 4B */	lis r3, __vt__Q23efx8WarpZone@ha
/* 801EA590 001E74D0  38 03 7C C8 */	addi r0, r3, __vt__Q23efx8WarpZone@l
/* 801EA594 001E74D4  90 1E 00 00 */	stw r0, 0(r30)
.L_801EA598:
/* 801EA598 001E74D8  93 DF 01 F8 */	stw r30, 0x1f8(r31)
/* 801EA59C 001E74DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EA5A0 001E74E0  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801EA5A4 001E74E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA5A8 001E74E8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EA5AC 001E74EC  7D 89 03 A6 */	mtctr r12
/* 801EA5B0 001E74F0  4E 80 04 21 */	bctrl 
/* 801EA5B4 001E74F4  28 03 00 00 */	cmplwi r3, 0
/* 801EA5B8 001E74F8  41 82 00 7C */	beq .L_801EA634
/* 801EA5BC 001E74FC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EA5C0 001E7500  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801EA5C4 001E7504  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA5C8 001E7508  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EA5CC 001E750C  7D 89 03 A6 */	mtctr r12
/* 801EA5D0 001E7510  4E 80 04 21 */	bctrl 
/* 801EA5D4 001E7514  80 83 00 48 */	lwz r4, 0x48(r3)
/* 801EA5D8 001E7518  38 BF 01 E8 */	addi r5, r31, 0x1e8
/* 801EA5DC 001E751C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EA5E0 001E7520  4B FF E1 E9 */	bl isCaveFirstTime__Q24Game8PlayDataFiR4ID32
/* 801EA5E4 001E7524  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA5E8 001E7528  41 82 00 18 */	beq .L_801EA600
/* 801EA5EC 001E752C  80 BF 01 F0 */	lwz r5, 0x1f0(r31)
/* 801EA5F0 001E7530  7F E3 FB 78 */	mr r3, r31
/* 801EA5F4 001E7534  38 80 00 13 */	li r4, 0x13
/* 801EA5F8 001E7538  48 03 3F 8D */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 801EA5FC 001E753C  48 00 00 38 */	b .L_801EA634
.L_801EA600:
/* 801EA600 001E7540  7F E3 FB 78 */	mr r3, r31
/* 801EA604 001E7544  48 00 09 C1 */	bl complete__Q34Game8ItemCave4ItemFv
/* 801EA608 001E7548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA60C 001E754C  41 82 00 18 */	beq .L_801EA624
/* 801EA610 001E7550  80 BF 01 F0 */	lwz r5, 0x1f0(r31)
/* 801EA614 001E7554  7F E3 FB 78 */	mr r3, r31
/* 801EA618 001E7558  38 80 00 14 */	li r4, 0x14
/* 801EA61C 001E755C  48 03 3F 69 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 801EA620 001E7560  48 00 00 14 */	b .L_801EA634
.L_801EA624:
/* 801EA624 001E7564  80 BF 01 F0 */	lwz r5, 0x1f0(r31)
/* 801EA628 001E7568  7F E3 FB 78 */	mr r3, r31
/* 801EA62C 001E756C  38 80 00 0B */	li r4, 0xb
/* 801EA630 001E7570  48 03 3F 55 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
.L_801EA634:
/* 801EA634 001E7574  7F E3 FB 78 */	mr r3, r31
/* 801EA638 001E7578  48 00 09 8D */	bl complete__Q34Game8ItemCave4ItemFv
/* 801EA63C 001E757C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA640 001E7580  41 82 00 0C */	beq .L_801EA64C
/* 801EA644 001E7584  C0 02 B6 E0 */	lfs f0, lbl_80519A40@sda21(r2)
/* 801EA648 001E7588  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_801EA64C:
/* 801EA64C 001E758C  7F E3 FB 78 */	mr r3, r31
/* 801EA650 001E7590  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EA654 001E7594  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 801EA658 001E7598  7D 89 03 A6 */	mtctr r12
/* 801EA65C 001E759C  4E 80 04 21 */	bctrl 
/* 801EA660 001E75A0  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801EA664 001E75A4  38 7F 01 38 */	addi r3, r31, 0x138
/* 801EA668 001E75A8  80 84 00 08 */	lwz r4, 8(r4)
/* 801EA66C 001E75AC  38 84 00 24 */	addi r4, r4, 0x24
/* 801EA670 001E75B0  4B EF FC 5D */	bl PSMTXCopy
/* 801EA674 001E75B4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EA678 001E75B8  80 63 00 08 */	lwz r3, 8(r3)
/* 801EA67C 001E75BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA680 001E75C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EA684 001E75C4  7D 89 03 A6 */	mtctr r12
/* 801EA688 001E75C8  4E 80 04 21 */	bctrl 
/* 801EA68C 001E75CC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EA690 001E75D0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801EA694 001E75D4  48 23 F2 0D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801EA698 001E75D8  3C 80 66 75 */	lis r4, 0x66757461@ha
/* 801EA69C 001E75DC  7C 7E 1B 78 */	mr r30, r3
/* 801EA6A0 001E75E0  38 61 00 14 */	addi r3, r1, 0x14
/* 801EA6A4 001E75E4  38 84 74 61 */	addi r4, r4, 0x66757461@l
/* 801EA6A8 001E75E8  48 22 8C 01 */	bl __ct__4ID32FUl
/* 801EA6AC 001E75EC  38 61 00 40 */	addi r3, r1, 0x40
/* 801EA6B0 001E75F0  4B FD B2 11 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801EA6B4 001E75F4  93 E1 00 40 */	stw r31, 0x40(r1)
/* 801EA6B8 001E75F8  38 61 00 44 */	addi r3, r1, 0x44
/* 801EA6BC 001E75FC  38 81 00 14 */	addi r4, r1, 0x14
/* 801EA6C0 001E7600  38 A0 00 05 */	li r5, 5
/* 801EA6C4 001E7604  4B ED 70 55 */	bl __copy
/* 801EA6C8 001E7608  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801EA6CC 001E760C  3C 60 80 48 */	lis r3, lbl_80480FE0@ha
/* 801EA6D0 001E7610  38 83 0F E0 */	addi r4, r3, lbl_80480FE0@l
/* 801EA6D4 001E7614  80 AD 94 A0 */	lwz r5, mgr__Q24Game8ItemCave@sda21(r13)
/* 801EA6D8 001E7618  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801EA6DC 001E761C  7F C3 F3 78 */	mr r3, r30
/* 801EA6E0 001E7620  C0 02 B6 E4 */	lfs f0, lbl_80519A44@sda21(r2)
/* 801EA6E4 001E7624  80 05 00 88 */	lwz r0, 0x88(r5)
/* 801EA6E8 001E7628  90 01 00 50 */	stw r0, 0x50(r1)
/* 801EA6EC 001E762C  93 C1 00 54 */	stw r30, 0x54(r1)
/* 801EA6F0 001E7630  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801EA6F4 001E7634  48 23 DB E1 */	bl print__7MatrixfFPc
/* 801EA6F8 001E7638  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801EA6FC 001E763C  38 81 00 40 */	addi r4, r1, 0x40
/* 801EA700 001E7640  4B FD B2 25 */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801EA704 001E7644  90 7F 03 80 */	stw r3, 0x380(r31)
/* 801EA708 001E7648  3C 80 73 69 */	lis r4, 0x73696465@ha
/* 801EA70C 001E764C  38 61 00 08 */	addi r3, r1, 8
/* 801EA710 001E7650  38 84 64 65 */	addi r4, r4, 0x73696465@l
/* 801EA714 001E7654  48 22 8B 95 */	bl __ct__4ID32FUl
/* 801EA718 001E7658  38 61 00 20 */	addi r3, r1, 0x20
/* 801EA71C 001E765C  4B FD B1 A5 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801EA720 001E7660  93 E1 00 20 */	stw r31, 0x20(r1)
/* 801EA724 001E7664  38 61 00 24 */	addi r3, r1, 0x24
/* 801EA728 001E7668  38 81 00 08 */	addi r4, r1, 8
/* 801EA72C 001E766C  38 A0 00 05 */	li r5, 5
/* 801EA730 001E7670  4B ED 6F E9 */	bl __copy
/* 801EA734 001E7674  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801EA738 001E7678  38 81 00 20 */	addi r4, r1, 0x20
/* 801EA73C 001E767C  80 6D 94 A0 */	lwz r3, mgr__Q24Game8ItemCave@sda21(r13)
/* 801EA740 001E7680  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801EA744 001E7684  C0 02 B6 E4 */	lfs f0, lbl_80519A44@sda21(r2)
/* 801EA748 001E7688  80 03 00 8C */	lwz r0, 0x8c(r3)
/* 801EA74C 001E768C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801EA750 001E7690  90 01 00 30 */	stw r0, 0x30(r1)
/* 801EA754 001E7694  93 C1 00 34 */	stw r30, 0x34(r1)
/* 801EA758 001E7698  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801EA75C 001E769C  4B FD B1 C9 */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801EA760 001E76A0  90 7F 03 84 */	stw r3, 0x384(r31)
/* 801EA764 001E76A4  38 80 00 01 */	li r4, 1
/* 801EA768 001E76A8  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 801EA76C 001E76AC  4B FD A4 69 */	bl setCollision__Q24Game12PlatInstanceFb
/* 801EA770 001E76B0  80 7F 03 84 */	lwz r3, 0x384(r31)
/* 801EA774 001E76B4  38 80 00 01 */	li r4, 1
/* 801EA778 001E76B8  4B FD A4 5D */	bl setCollision__Q24Game12PlatInstanceFb
/* 801EA77C 001E76BC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801EA780 001E76C0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801EA784 001E76C4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801EA788 001E76C8  7C 08 03 A6 */	mtlr r0
/* 801EA78C 001E76CC  38 21 00 70 */	addi r1, r1, 0x70
/* 801EA790 001E76D0  4E 80 00 20 */	blr 
.endfn onSetPosition__Q34Game8ItemCave4ItemFv

.fn initDependency__Q34Game8ItemCave4ItemFv, global
/* 801EA794 001E76D4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801EA798 001E76D8  7C 08 02 A6 */	mflr r0
/* 801EA79C 001E76DC  90 01 00 54 */	stw r0, 0x54(r1)
/* 801EA7A0 001E76E0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801EA7A4 001E76E4  7C 7F 1B 78 */	mr r31, r3
/* 801EA7A8 001E76E8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801EA7AC 001E76EC  80 8D 94 F0 */	lwz r4, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801EA7B0 001E76F0  28 04 00 00 */	cmplwi r4, 0
/* 801EA7B4 001E76F4  41 82 00 08 */	beq .L_801EA7BC
/* 801EA7B8 001E76F8  38 84 00 30 */	addi r4, r4, 0x30
.L_801EA7BC:
/* 801EA7BC 001E76FC  38 00 00 00 */	li r0, 0
/* 801EA7C0 001E7700  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801EA7C4 001E7704  38 63 05 60 */	addi r3, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801EA7C8 001E7708  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801EA7CC 001E770C  28 00 00 00 */	cmplwi r0, 0
/* 801EA7D0 001E7710  90 61 00 30 */	stw r3, 0x30(r1)
/* 801EA7D4 001E7714  90 01 00 34 */	stw r0, 0x34(r1)
/* 801EA7D8 001E7718  90 81 00 38 */	stw r4, 0x38(r1)
/* 801EA7DC 001E771C  40 82 00 20 */	bne .L_801EA7FC
/* 801EA7E0 001E7720  7C 83 23 78 */	mr r3, r4
/* 801EA7E4 001E7724  81 84 00 00 */	lwz r12, 0(r4)
/* 801EA7E8 001E7728  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801EA7EC 001E772C  7D 89 03 A6 */	mtctr r12
/* 801EA7F0 001E7730  4E 80 04 21 */	bctrl 
/* 801EA7F4 001E7734  90 61 00 34 */	stw r3, 0x34(r1)
/* 801EA7F8 001E7738  48 00 02 08 */	b .L_801EAA00
.L_801EA7FC:
/* 801EA7FC 001E773C  7C 83 23 78 */	mr r3, r4
/* 801EA800 001E7740  81 84 00 00 */	lwz r12, 0(r4)
/* 801EA804 001E7744  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801EA808 001E7748  7D 89 03 A6 */	mtctr r12
/* 801EA80C 001E774C  4E 80 04 21 */	bctrl 
/* 801EA810 001E7750  90 61 00 34 */	stw r3, 0x34(r1)
/* 801EA814 001E7754  48 00 00 58 */	b .L_801EA86C
.L_801EA818:
/* 801EA818 001E7758  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA81C 001E775C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EA820 001E7760  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA824 001E7764  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801EA828 001E7768  7D 89 03 A6 */	mtctr r12
/* 801EA82C 001E776C  4E 80 04 21 */	bctrl 
/* 801EA830 001E7770  7C 64 1B 78 */	mr r4, r3
/* 801EA834 001E7774  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801EA838 001E7778  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA83C 001E777C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EA840 001E7780  7D 89 03 A6 */	mtctr r12
/* 801EA844 001E7784  4E 80 04 21 */	bctrl 
/* 801EA848 001E7788  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA84C 001E778C  40 82 01 B4 */	bne .L_801EAA00
/* 801EA850 001E7790  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA854 001E7794  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EA858 001E7798  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA85C 001E779C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EA860 001E77A0  7D 89 03 A6 */	mtctr r12
/* 801EA864 001E77A4  4E 80 04 21 */	bctrl 
/* 801EA868 001E77A8  90 61 00 34 */	stw r3, 0x34(r1)
.L_801EA86C:
/* 801EA86C 001E77AC  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801EA870 001E77B0  38 61 00 30 */	addi r3, r1, 0x30
/* 801EA874 001E77B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EA878 001E77B8  7D 89 03 A6 */	mtctr r12
/* 801EA87C 001E77BC  4E 80 04 21 */	bctrl 
/* 801EA880 001E77C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA884 001E77C4  41 82 FF 94 */	beq .L_801EA818
/* 801EA888 001E77C8  48 00 01 78 */	b .L_801EAA00
.L_801EA88C:
/* 801EA88C 001E77CC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA890 001E77D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA894 001E77D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801EA898 001E77D8  7D 89 03 A6 */	mtctr r12
/* 801EA89C 001E77DC  4E 80 04 21 */	bctrl 
/* 801EA8A0 001E77E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA8A4 001E77E4  7C 60 1B 78 */	mr r0, r3
/* 801EA8A8 001E77E8  7C 1E 03 78 */	mr r30, r0
/* 801EA8AC 001E77EC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801EA8B0 001E77F0  7D 89 03 A6 */	mtctr r12
/* 801EA8B4 001E77F4  4E 80 04 21 */	bctrl 
/* 801EA8B8 001E77F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA8BC 001E77FC  41 82 00 88 */	beq .L_801EA944
/* 801EA8C0 001E7800  7F E4 FB 78 */	mr r4, r31
/* 801EA8C4 001E7804  38 61 00 08 */	addi r3, r1, 8
/* 801EA8C8 001E7808  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EA8CC 001E780C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EA8D0 001E7810  7D 89 03 A6 */	mtctr r12
/* 801EA8D4 001E7814  4E 80 04 21 */	bctrl 
/* 801EA8D8 001E7818  7F C4 F3 78 */	mr r4, r30
/* 801EA8DC 001E781C  38 61 00 14 */	addi r3, r1, 0x14
/* 801EA8E0 001E7820  81 9E 00 00 */	lwz r12, 0(r30)
/* 801EA8E4 001E7824  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EA8E8 001E7828  7D 89 03 A6 */	mtctr r12
/* 801EA8EC 001E782C  4E 80 04 21 */	bctrl 
/* 801EA8F0 001E7830  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 801EA8F4 001E7834  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801EA8F8 001E7838  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801EA8FC 001E783C  EC 61 00 28 */	fsubs f3, f1, f0
/* 801EA900 001E7840  C0 21 00 08 */	lfs f1, 8(r1)
/* 801EA904 001E7844  C0 02 B6 AC */	lfs f0, lbl_80519A0C@sda21(r2)
/* 801EA908 001E7848  EC 22 08 28 */	fsubs f1, f2, f1
/* 801EA90C 001E784C  EC 43 00 F2 */	fmuls f2, f3, f3
/* 801EA910 001E7850  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 801EA914 001E7854  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EA918 001E7858  40 81 00 14 */	ble .L_801EA92C
/* 801EA91C 001E785C  40 81 00 14 */	ble .L_801EA930
/* 801EA920 001E7860  FC 00 08 34 */	frsqrte f0, f1
/* 801EA924 001E7864  EC 20 00 72 */	fmuls f1, f0, f1
/* 801EA928 001E7868  48 00 00 08 */	b .L_801EA930
.L_801EA92C:
/* 801EA92C 001E786C  FC 20 00 90 */	fmr f1, f0
.L_801EA930:
/* 801EA930 001E7870  C0 02 B6 E8 */	lfs f0, lbl_80519A48@sda21(r2)
/* 801EA934 001E7874  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EA938 001E7878  40 80 00 0C */	bge .L_801EA944
/* 801EA93C 001E787C  93 DF 01 F4 */	stw r30, 0x1f4(r31)
/* 801EA940 001E7880  48 00 01 50 */	b .L_801EAA90
.L_801EA944:
/* 801EA944 001E7884  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801EA948 001E7888  28 00 00 00 */	cmplwi r0, 0
/* 801EA94C 001E788C  40 82 00 24 */	bne .L_801EA970
/* 801EA950 001E7890  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA954 001E7894  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EA958 001E7898  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA95C 001E789C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EA960 001E78A0  7D 89 03 A6 */	mtctr r12
/* 801EA964 001E78A4  4E 80 04 21 */	bctrl 
/* 801EA968 001E78A8  90 61 00 34 */	stw r3, 0x34(r1)
/* 801EA96C 001E78AC  48 00 00 94 */	b .L_801EAA00
.L_801EA970:
/* 801EA970 001E78B0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA974 001E78B4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EA978 001E78B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA97C 001E78BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EA980 001E78C0  7D 89 03 A6 */	mtctr r12
/* 801EA984 001E78C4  4E 80 04 21 */	bctrl 
/* 801EA988 001E78C8  90 61 00 34 */	stw r3, 0x34(r1)
/* 801EA98C 001E78CC  48 00 00 58 */	b .L_801EA9E4
.L_801EA990:
/* 801EA990 001E78D0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA994 001E78D4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EA998 001E78D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA99C 001E78DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801EA9A0 001E78E0  7D 89 03 A6 */	mtctr r12
/* 801EA9A4 001E78E4  4E 80 04 21 */	bctrl 
/* 801EA9A8 001E78E8  7C 64 1B 78 */	mr r4, r3
/* 801EA9AC 001E78EC  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801EA9B0 001E78F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA9B4 001E78F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EA9B8 001E78F8  7D 89 03 A6 */	mtctr r12
/* 801EA9BC 001E78FC  4E 80 04 21 */	bctrl 
/* 801EA9C0 001E7900  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA9C4 001E7904  40 82 00 3C */	bne .L_801EAA00
/* 801EA9C8 001E7908  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EA9CC 001E790C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EA9D0 001E7910  81 83 00 00 */	lwz r12, 0(r3)
/* 801EA9D4 001E7914  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EA9D8 001E7918  7D 89 03 A6 */	mtctr r12
/* 801EA9DC 001E791C  4E 80 04 21 */	bctrl 
/* 801EA9E0 001E7920  90 61 00 34 */	stw r3, 0x34(r1)
.L_801EA9E4:
/* 801EA9E4 001E7924  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801EA9E8 001E7928  38 61 00 30 */	addi r3, r1, 0x30
/* 801EA9EC 001E792C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EA9F0 001E7930  7D 89 03 A6 */	mtctr r12
/* 801EA9F4 001E7934  4E 80 04 21 */	bctrl 
/* 801EA9F8 001E7938  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EA9FC 001E793C  41 82 FF 94 */	beq .L_801EA990
.L_801EAA00:
/* 801EAA00 001E7940  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801EAA04 001E7944  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAA08 001E7948  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801EAA0C 001E794C  7D 89 03 A6 */	mtctr r12
/* 801EAA10 001E7950  4E 80 04 21 */	bctrl 
/* 801EAA14 001E7954  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801EAA18 001E7958  7C 04 18 40 */	cmplw r4, r3
/* 801EAA1C 001E795C  40 82 FE 70 */	bne .L_801EA88C
/* 801EAA20 001E7960  7F E3 FB 78 */	mr r3, r31
/* 801EAA24 001E7964  48 00 05 A1 */	bl complete__Q34Game8ItemCave4ItemFv
/* 801EAA28 001E7968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EAA2C 001E796C  40 82 00 5C */	bne .L_801EAA88
/* 801EAA30 001E7970  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801EAA34 001E7974  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 801EAA38 001E7978  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801EAA3C 001E797C  38 81 00 20 */	addi r4, r1, 0x20
/* 801EAA40 001E7980  C0 23 00 04 */	lfs f1, 4(r3)
/* 801EAA44 001E7984  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801EAA48 001E7988  C0 03 00 08 */	lfs f0, 8(r3)
/* 801EAA4C 001E798C  90 01 00 20 */	stw r0, 0x20(r1)
/* 801EAA50 001E7990  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 801EAA54 001E7994  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801EAA58 001E7998  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801EAA5C 001E799C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801EAA60 001E79A0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801EAA64 001E79A4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801EAA68 001E79A8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801EAA6C 001E79AC  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801EAA70 001E79B0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801EAA74 001E79B4  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801EAA78 001E79B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAA7C 001E79BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EAA80 001E79C0  7D 89 03 A6 */	mtctr r12
/* 801EAA84 001E79C4  4E 80 04 21 */	bctrl 
.L_801EAA88:
/* 801EAA88 001E79C8  38 00 00 00 */	li r0, 0
/* 801EAA8C 001E79CC  90 1F 01 F4 */	stw r0, 0x1f4(r31)
.L_801EAA90:
/* 801EAA90 001E79D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801EAA94 001E79D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801EAA98 001E79D8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801EAA9C 001E79DC  7C 08 03 A6 */	mtlr r0
/* 801EAAA0 001E79E0  38 21 00 50 */	addi r1, r1, 0x50
/* 801EAAA4 001E79E4  4E 80 00 20 */	blr 
.endfn initDependency__Q34Game8ItemCave4ItemFv

.fn sound_culling__Q34Game8ItemCave4ItemFv, global
/* 801EAAA8 001E79E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EAAAC 001E79EC  7C 08 02 A6 */	mflr r0
/* 801EAAB0 001E79F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EAAB4 001E79F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EAAB8 001E79F8  7C 7F 1B 78 */	mr r31, r3
/* 801EAABC 001E79FC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801EAAC0 001E7A00  4B F7 01 61 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 801EAAC4 001E7A04  28 03 00 00 */	cmplwi r3, 0
/* 801EAAC8 001E7A08  41 82 00 54 */	beq .L_801EAB1C
/* 801EAACC 001E7A0C  7C 64 1B 78 */	mr r4, r3
/* 801EAAD0 001E7A10  38 61 00 08 */	addi r3, r1, 8
/* 801EAAD4 001E7A14  81 84 00 00 */	lwz r12, 0(r4)
/* 801EAAD8 001E7A18  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EAADC 001E7A1C  7D 89 03 A6 */	mtctr r12
/* 801EAAE0 001E7A20  4E 80 04 21 */	bctrl 
/* 801EAAE4 001E7A24  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801EAAE8 001E7A28  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801EAAEC 001E7A2C  C0 41 00 08 */	lfs f2, 8(r1)
/* 801EAAF0 001E7A30  EC 61 00 28 */	fsubs f3, f1, f0
/* 801EAAF4 001E7A34  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 801EAAF8 001E7A38  C0 02 B6 EC */	lfs f0, lbl_80519A4C@sda21(r2)
/* 801EAAFC 001E7A3C  EC 42 08 28 */	fsubs f2, f2, f1
/* 801EAB00 001E7A40  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801EAB04 001E7A44  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801EAB08 001E7A48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EAB0C 001E7A4C  4C 41 13 82 */	cror 2, 1, 2
/* 801EAB10 001E7A50  40 82 00 0C */	bne .L_801EAB1C
/* 801EAB14 001E7A54  38 60 00 01 */	li r3, 1
/* 801EAB18 001E7A58  48 00 00 08 */	b .L_801EAB20
.L_801EAB1C:
/* 801EAB1C 001E7A5C  38 60 00 00 */	li r3, 0
.L_801EAB20:
/* 801EAB20 001E7A60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EAB24 001E7A64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EAB28 001E7A68  7C 08 03 A6 */	mtlr r0
/* 801EAB2C 001E7A6C  38 21 00 20 */	addi r1, r1, 0x20
/* 801EAB30 001E7A70  4E 80 00 20 */	blr 
.endfn sound_culling__Q34Game8ItemCave4ItemFv

.fn changeMaterial__Q34Game8ItemCave4ItemFv, global
/* 801EAB34 001E7A74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EAB38 001E7A78  7C 08 02 A6 */	mflr r0
/* 801EAB3C 001E7A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EAB40 001E7A80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EAB44 001E7A84  7C 7F 1B 78 */	mr r31, r3
/* 801EAB48 001E7A88  48 00 04 7D */	bl complete__Q34Game8ItemCave4ItemFv
/* 801EAB4C 001E7A8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EAB50 001E7A90  40 82 00 2C */	bne .L_801EAB7C
/* 801EAB54 001E7A94  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EAB58 001E7A98  38 82 B6 F0 */	addi r4, r2, lbl_80519A50@sda21
/* 801EAB5C 001E7A9C  48 25 44 89 */	bl getJoint__Q28SysShape5ModelFPc
/* 801EAB60 001E7AA0  A0 A3 00 38 */	lhz r5, 0x38(r3)
/* 801EAB64 001E7AA4  38 80 00 00 */	li r4, 0
/* 801EAB68 001E7AA8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EAB6C 001E7AAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAB70 001E7AB0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801EAB74 001E7AB4  7D 89 03 A6 */	mtctr r12
/* 801EAB78 001E7AB8  4E 80 04 21 */	bctrl 
.L_801EAB7C:
/* 801EAB7C 001E7ABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EAB80 001E7AC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EAB84 001E7AC4  7C 08 03 A6 */	mtlr r0
/* 801EAB88 001E7AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801EAB8C 001E7ACC  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game8ItemCave4ItemFv

.fn createLightEvent__Q34Game8ItemCave4ItemFv, global
/* 801EAB90 001E7AD0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801EAB94 001E7AD4  7C 08 02 A6 */	mflr r0
/* 801EAB98 001E7AD8  90 01 00 54 */	stw r0, 0x54(r1)
/* 801EAB9C 001E7ADC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801EABA0 001E7AE0  7C 7F 1B 78 */	mr r31, r3
/* 801EABA4 001E7AE4  80 03 02 00 */	lwz r0, 0x200(r3)
/* 801EABA8 001E7AE8  28 00 00 00 */	cmplwi r0, 0
/* 801EABAC 001E7AEC  40 82 01 1C */	bne .L_801EACC8
/* 801EABB0 001E7AF0  39 40 00 00 */	li r10, 0
/* 801EABB4 001E7AF4  C0 C2 B6 F8 */	lfs f6, lbl_80519A58@sda21(r2)
/* 801EABB8 001E7AF8  99 41 00 08 */	stb r10, 8(r1)
/* 801EABBC 001E7AFC  3D 00 43 30 */	lis r8, 0x4330
/* 801EABC0 001E7B00  61 49 00 03 */	ori r9, r10, 3
/* 801EABC4 001E7B04  C0 A2 B6 FC */	lfs f5, lbl_80519A5C@sda21(r2)
/* 801EABC8 001E7B08  99 41 00 09 */	stb r10, 9(r1)
/* 801EABCC 001E7B0C  61 43 00 01 */	ori r3, r10, 1
/* 801EABD0 001E7B10  C0 82 B6 A8 */	lfs f4, lbl_80519A08@sda21(r2)
/* 801EABD4 001E7B14  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801EABD8 001E7B18  99 41 00 08 */	stb r10, 8(r1)
/* 801EABDC 001E7B1C  60 07 00 10 */	ori r7, r0, 0x10
/* 801EABE0 001E7B20  C0 62 B6 AC */	lfs f3, lbl_80519A0C@sda21(r2)
/* 801EABE4 001E7B24  55 25 06 3A */	rlwinm r5, r9, 0, 0x18, 0x1d
/* 801EABE8 001E7B28  99 41 00 09 */	stb r10, 9(r1)
/* 801EABEC 001E7B2C  55 26 06 3C */	rlwinm r6, r9, 0, 0x18, 0x1e
/* 801EABF0 001E7B30  C0 22 B7 00 */	lfs f1, lbl_80519A60@sda21(r2)
/* 801EABF4 001E7B34  60 A4 00 0C */	ori r4, r5, 0xc
/* 801EABF8 001E7B38  C0 02 B7 04 */	lfs f0, lbl_80519A64@sda21(r2)
/* 801EABFC 001E7B3C  38 1F 01 9C */	addi r0, r31, 0x19c
/* 801EAC00 001E7B40  98 61 00 09 */	stb r3, 9(r1)
/* 801EAC04 001E7B44  C8 42 B7 08 */	lfd f2, lbl_80519A68@sda21(r2)
/* 801EAC08 001E7B48  99 21 00 08 */	stb r9, 8(r1)
/* 801EAC0C 001E7B4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EAC10 001E7B50  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 801EAC14 001E7B54  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 801EAC18 001E7B58  D0 C1 00 14 */	stfs f6, 0x14(r1)
/* 801EAC1C 001E7B5C  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 801EAC20 001E7B60  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 801EAC24 001E7B64  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 801EAC28 001E7B68  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801EAC2C 001E7B6C  91 41 00 28 */	stw r10, 0x28(r1)
/* 801EAC30 001E7B70  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801EAC34 001E7B74  C0 3F 02 50 */	lfs f1, 0x250(r31)
/* 801EAC38 001E7B78  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 801EAC3C 001E7B7C  91 01 00 30 */	stw r8, 0x30(r1)
/* 801EAC40 001E7B80  98 E1 00 09 */	stb r7, 9(r1)
/* 801EAC44 001E7B84  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801EAC48 001E7B88  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801EAC4C 001E7B8C  C0 3F 02 A0 */	lfs f1, 0x2a0(r31)
/* 801EAC50 001E7B90  C0 1F 02 78 */	lfs f0, 0x278(r31)
/* 801EAC54 001E7B94  91 01 00 38 */	stw r8, 0x38(r1)
/* 801EAC58 001E7B98  98 C1 00 08 */	stb r6, 8(r1)
/* 801EAC5C 001E7B9C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801EAC60 001E7BA0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801EAC64 001E7BA4  89 3F 03 00 */	lbz r9, 0x300(r31)
/* 801EAC68 001E7BA8  88 FF 02 E4 */	lbz r7, 0x2e4(r31)
/* 801EAC6C 001E7BAC  88 DF 02 C8 */	lbz r6, 0x2c8(r31)
/* 801EAC70 001E7BB0  91 21 00 34 */	stw r9, 0x34(r1)
/* 801EAC74 001E7BB4  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 801EAC78 001E7BB8  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 801EAC7C 001E7BBC  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 801EAC80 001E7BC0  EC 61 10 28 */	fsubs f3, f1, f2
/* 801EAC84 001E7BC4  90 C1 00 44 */	stw r6, 0x44(r1)
/* 801EAC88 001E7BC8  EC 20 10 28 */	fsubs f1, f0, f2
/* 801EAC8C 001E7BCC  91 01 00 40 */	stw r8, 0x40(r1)
/* 801EAC90 001E7BD0  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 801EAC94 001E7BD4  98 A1 00 08 */	stb r5, 8(r1)
/* 801EAC98 001E7BD8  EC 00 10 28 */	fsubs f0, f0, f2
/* 801EAC9C 001E7BDC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801EACA0 001E7BE0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801EACA4 001E7BE4  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801EACA8 001E7BE8  C0 1F 03 1C */	lfs f0, 0x31c(r31)
/* 801EACAC 001E7BEC  98 81 00 08 */	stb r4, 8(r1)
/* 801EACB0 001E7BF0  90 01 00 28 */	stw r0, 0x28(r1)
/* 801EACB4 001E7BF4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801EACB8 001E7BF8  4B FC A3 B5 */	bl getLightMgr__Q24Game10GameSystemFv
/* 801EACBC 001E7BFC  38 81 00 08 */	addi r4, r1, 8
/* 801EACC0 001E7C00  4B F3 48 25 */	bl createEventLight__Q24Game12GameLightMgrFRQ24Game17GameLightEventArg
/* 801EACC4 001E7C04  90 7F 02 00 */	stw r3, 0x200(r31)
.L_801EACC8:
/* 801EACC8 001E7C08  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801EACCC 001E7C0C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801EACD0 001E7C10  7C 08 03 A6 */	mtlr r0
/* 801EACD4 001E7C14  38 21 00 50 */	addi r1, r1, 0x50
/* 801EACD8 001E7C18  4E 80 00 20 */	blr 
.endfn createLightEvent__Q34Game8ItemCave4ItemFv

.fn do_setLODParm__Q34Game8ItemCave4ItemFRQ24Game9AILODParm, global
/* 801EACDC 001E7C1C  C0 22 B7 10 */	lfs f1, lbl_80519A70@sda21(r2)
/* 801EACE0 001E7C20  C0 02 B7 14 */	lfs f0, lbl_80519A74@sda21(r2)
/* 801EACE4 001E7C24  D0 24 00 00 */	stfs f1, 0(r4)
/* 801EACE8 001E7C28  D0 04 00 04 */	stfs f0, 4(r4)
/* 801EACEC 001E7C2C  4E 80 00 20 */	blr 
.endfn do_setLODParm__Q34Game8ItemCave4ItemFRQ24Game9AILODParm

.fn doAI__Q34Game8ItemCave4ItemFv, global
/* 801EACF0 001E7C30  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801EACF4 001E7C34  7C 08 02 A6 */	mflr r0
/* 801EACF8 001E7C38  38 A0 00 00 */	li r5, 0
/* 801EACFC 001E7C3C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801EAD00 001E7C40  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801EAD04 001E7C44  7C 7F 1B 78 */	mr r31, r3
/* 801EAD08 001E7C48  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801EAD0C 001E7C4C  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 801EAD10 001E7C50  80 63 01 F8 */	lwz r3, 0x1f8(r3)
/* 801EAD14 001E7C54  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 801EAD18 001E7C58  48 1C B6 99 */	bl setRateLOD__Q23efx8WarpZoneFib
/* 801EAD1C 001E7C5C  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801EAD20 001E7C60  7F E4 FB 78 */	mr r4, r31
/* 801EAD24 001E7C64  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAD28 001E7C68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EAD2C 001E7C6C  7D 89 03 A6 */	mtctr r12
/* 801EAD30 001E7C70  4E 80 04 21 */	bctrl 
/* 801EAD34 001E7C74  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801EAD38 001E7C78  28 03 00 00 */	cmplwi r3, 0
/* 801EAD3C 001E7C7C  41 82 00 8C */	beq .L_801EADC8
/* 801EAD40 001E7C80  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAD44 001E7C84  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801EAD48 001E7C88  7D 89 03 A6 */	mtctr r12
/* 801EAD4C 001E7C8C  4E 80 04 21 */	bctrl 
/* 801EAD50 001E7C90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EAD54 001E7C94  40 82 00 74 */	bne .L_801EADC8
/* 801EAD58 001E7C98  38 00 00 00 */	li r0, 0
/* 801EAD5C 001E7C9C  7F E3 FB 78 */	mr r3, r31
/* 801EAD60 001E7CA0  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 801EAD64 001E7CA4  48 00 02 61 */	bl complete__Q34Game8ItemCave4ItemFv
/* 801EAD68 001E7CA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EAD6C 001E7CAC  40 82 00 5C */	bne .L_801EADC8
/* 801EAD70 001E7CB0  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801EAD74 001E7CB4  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 801EAD78 001E7CB8  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801EAD7C 001E7CBC  38 81 00 14 */	addi r4, r1, 0x14
/* 801EAD80 001E7CC0  C0 23 00 04 */	lfs f1, 4(r3)
/* 801EAD84 001E7CC4  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801EAD88 001E7CC8  C0 03 00 08 */	lfs f0, 8(r3)
/* 801EAD8C 001E7CCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EAD90 001E7CD0  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801EAD94 001E7CD4  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801EAD98 001E7CD8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801EAD9C 001E7CDC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801EADA0 001E7CE0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801EADA4 001E7CE4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801EADA8 001E7CE8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801EADAC 001E7CEC  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801EADB0 001E7CF0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801EADB4 001E7CF4  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801EADB8 001E7CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801EADBC 001E7CFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EADC0 001E7D00  7D 89 03 A6 */	mtctr r12
/* 801EADC4 001E7D04  4E 80 04 21 */	bctrl 
.L_801EADC8:
/* 801EADC8 001E7D08  7F E3 FB 78 */	mr r3, r31
/* 801EADCC 001E7D0C  48 00 01 F9 */	bl complete__Q34Game8ItemCave4ItemFv
/* 801EADD0 001E7D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801EADD4 001E7D14  40 82 01 18 */	bne .L_801EAEEC
/* 801EADD8 001E7D18  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801EADDC 001E7D1C  4B F6 FE 45 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 801EADE0 001E7D20  7C 7E 1B 79 */	or. r30, r3, r3
/* 801EADE4 001E7D24  41 82 00 E8 */	beq .L_801EAECC
/* 801EADE8 001E7D28  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EADEC 001E7D2C  48 28 43 B5 */	bl PSPlayCaveHoleSound__FPQ23PSM8Creature
/* 801EADF0 001E7D30  7F C4 F3 78 */	mr r4, r30
/* 801EADF4 001E7D34  38 61 00 08 */	addi r3, r1, 8
/* 801EADF8 001E7D38  81 9E 00 00 */	lwz r12, 0(r30)
/* 801EADFC 001E7D3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EAE00 001E7D40  7D 89 03 A6 */	mtctr r12
/* 801EAE04 001E7D44  4E 80 04 21 */	bctrl 
/* 801EAE08 001E7D48  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EAE0C 001E7D4C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801EAE10 001E7D50  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801EAE14 001E7D54  EC 81 00 28 */	fsubs f4, f1, f0
/* 801EAE18 001E7D58  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801EAE1C 001E7D5C  C0 41 00 08 */	lfs f2, 8(r1)
/* 801EAE20 001E7D60  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 801EAE24 001E7D64  EC A3 00 28 */	fsubs f5, f3, f0
/* 801EAE28 001E7D68  EC 64 01 32 */	fmuls f3, f4, f4
/* 801EAE2C 001E7D6C  EC 22 08 28 */	fsubs f1, f2, f1
/* 801EAE30 001E7D70  C0 02 B6 AC */	lfs f0, lbl_80519A0C@sda21(r2)
/* 801EAE34 001E7D74  EC 45 01 72 */	fmuls f2, f5, f5
/* 801EAE38 001E7D78  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 801EAE3C 001E7D7C  EC 22 08 2A */	fadds f1, f2, f1
/* 801EAE40 001E7D80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EAE44 001E7D84  40 81 00 14 */	ble .L_801EAE58
/* 801EAE48 001E7D88  40 81 00 14 */	ble .L_801EAE5C
/* 801EAE4C 001E7D8C  FC 00 08 34 */	frsqrte f0, f1
/* 801EAE50 001E7D90  EC 20 00 72 */	fmuls f1, f0, f1
/* 801EAE54 001E7D94  48 00 00 08 */	b .L_801EAE5C
.L_801EAE58:
/* 801EAE58 001E7D98  FC 20 00 90 */	fmr f1, f0
.L_801EAE5C:
/* 801EAE5C 001E7D9C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EAE60 001E7DA0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801EAE64 001E7DA4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801EAE68 001E7DA8  41 82 00 34 */	beq .L_801EAE9C
/* 801EAE6C 001E7DAC  C0 1F 03 44 */	lfs f0, 0x344(r31)
/* 801EAE70 001E7DB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EAE74 001E7DB4  40 80 00 28 */	bge .L_801EAE9C
/* 801EAE78 001E7DB8  7F E3 FB 78 */	mr r3, r31
/* 801EAE7C 001E7DBC  38 80 30 7B */	li r4, 0x307b
/* 801EAE80 001E7DC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EAE84 001E7DC4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801EAE88 001E7DC8  7D 89 03 A6 */	mtctr r12
/* 801EAE8C 001E7DCC  4E 80 04 21 */	bctrl 
/* 801EAE90 001E7DD0  7F E3 FB 78 */	mr r3, r31
/* 801EAE94 001E7DD4  4B FF FC FD */	bl createLightEvent__Q34Game8ItemCave4ItemFv
/* 801EAE98 001E7DD8  48 00 00 54 */	b .L_801EAEEC
.L_801EAE9C:
/* 801EAE9C 001E7DDC  C0 1F 03 6C */	lfs f0, 0x36c(r31)
/* 801EAEA0 001E7DE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EAEA4 001E7DE4  40 81 00 48 */	ble .L_801EAEEC
/* 801EAEA8 001E7DE8  80 9F 02 00 */	lwz r4, 0x200(r31)
/* 801EAEAC 001E7DEC  28 04 00 00 */	cmplwi r4, 0
/* 801EAEB0 001E7DF0  41 82 00 3C */	beq .L_801EAEEC
/* 801EAEB4 001E7DF4  88 64 00 18 */	lbz r3, 0x18(r4)
/* 801EAEB8 001E7DF8  38 00 00 00 */	li r0, 0
/* 801EAEBC 001E7DFC  60 63 00 01 */	ori r3, r3, 1
/* 801EAEC0 001E7E00  98 64 00 18 */	stb r3, 0x18(r4)
/* 801EAEC4 001E7E04  90 1F 02 00 */	stw r0, 0x200(r31)
/* 801EAEC8 001E7E08  48 00 00 24 */	b .L_801EAEEC
.L_801EAECC:
/* 801EAECC 001E7E0C  80 9F 02 00 */	lwz r4, 0x200(r31)
/* 801EAED0 001E7E10  28 04 00 00 */	cmplwi r4, 0
/* 801EAED4 001E7E14  41 82 00 18 */	beq .L_801EAEEC
/* 801EAED8 001E7E18  88 64 00 18 */	lbz r3, 0x18(r4)
/* 801EAEDC 001E7E1C  38 00 00 00 */	li r0, 0
/* 801EAEE0 001E7E20  60 63 00 01 */	ori r3, r3, 1
/* 801EAEE4 001E7E24  98 64 00 18 */	stb r3, 0x18(r4)
/* 801EAEE8 001E7E28  90 1F 02 00 */	stw r0, 0x200(r31)
.L_801EAEEC:
/* 801EAEEC 001E7E2C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801EAEF0 001E7E30  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801EAEF4 001E7E34  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801EAEF8 001E7E38  7C 08 03 A6 */	mtlr r0
/* 801EAEFC 001E7E3C  38 21 00 30 */	addi r1, r1, 0x30
/* 801EAF00 001E7E40  4E 80 00 20 */	blr 
.endfn doAI__Q34Game8ItemCave4ItemFv

.fn getCaveOtakaraNum__Q34Game8ItemCave4ItemFv, global
/* 801EAF04 001E7E44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EAF08 001E7E48  7C 08 02 A6 */	mflr r0
/* 801EAF0C 001E7E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EAF10 001E7E50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EAF14 001E7E54  7C 7F 1B 78 */	mr r31, r3
/* 801EAF18 001E7E58  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801EAF1C 001E7E5C  80 64 00 58 */	lwz r3, 0x58(r4)
/* 801EAF20 001E7E60  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAF24 001E7E64  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EAF28 001E7E68  7D 89 03 A6 */	mtctr r12
/* 801EAF2C 001E7E6C  4E 80 04 21 */	bctrl 
/* 801EAF30 001E7E70  7C 64 1B 79 */	or. r4, r3, r3
/* 801EAF34 001E7E74  41 82 00 18 */	beq .L_801EAF4C
/* 801EAF38 001E7E78  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EAF3C 001E7E7C  38 BF 01 E8 */	addi r5, r31, 0x1e8
/* 801EAF40 001E7E80  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801EAF44 001E7E84  4B FF DA D5 */	bl getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 801EAF48 001E7E88  48 00 00 08 */	b .L_801EAF50
.L_801EAF4C:
/* 801EAF4C 001E7E8C  38 60 FF FF */	li r3, -1
.L_801EAF50:
/* 801EAF50 001E7E90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EAF54 001E7E94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EAF58 001E7E98  7C 08 03 A6 */	mtlr r0
/* 801EAF5C 001E7E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 801EAF60 001E7EA0  4E 80 00 20 */	blr 
.endfn getCaveOtakaraNum__Q34Game8ItemCave4ItemFv

.fn getCaveOtakaraMax__Q34Game8ItemCave4ItemFv, global
/* 801EAF64 001E7EA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EAF68 001E7EA8  7C 08 02 A6 */	mflr r0
/* 801EAF6C 001E7EAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EAF70 001E7EB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EAF74 001E7EB4  7C 7F 1B 78 */	mr r31, r3
/* 801EAF78 001E7EB8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801EAF7C 001E7EBC  80 64 00 58 */	lwz r3, 0x58(r4)
/* 801EAF80 001E7EC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAF84 001E7EC4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EAF88 001E7EC8  7D 89 03 A6 */	mtctr r12
/* 801EAF8C 001E7ECC  4E 80 04 21 */	bctrl 
/* 801EAF90 001E7ED0  7C 64 1B 79 */	or. r4, r3, r3
/* 801EAF94 001E7ED4  41 82 00 18 */	beq .L_801EAFAC
/* 801EAF98 001E7ED8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EAF9C 001E7EDC  38 BF 01 E8 */	addi r5, r31, 0x1e8
/* 801EAFA0 001E7EE0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801EAFA4 001E7EE4  4B FF DB 2D */	bl getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 801EAFA8 001E7EE8  48 00 00 08 */	b .L_801EAFB0
.L_801EAFAC:
/* 801EAFAC 001E7EEC  38 60 FF FF */	li r3, -1
.L_801EAFB0:
/* 801EAFB0 001E7EF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EAFB4 001E7EF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EAFB8 001E7EF8  7C 08 03 A6 */	mtlr r0
/* 801EAFBC 001E7EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 801EAFC0 001E7F00  4E 80 00 20 */	blr 
.endfn getCaveOtakaraMax__Q34Game8ItemCave4ItemFv

.fn complete__Q34Game8ItemCave4ItemFv, global
/* 801EAFC4 001E7F04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EAFC8 001E7F08  7C 08 02 A6 */	mflr r0
/* 801EAFCC 001E7F0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EAFD0 001E7F10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EAFD4 001E7F14  93 C1 00 08 */	stw r30, 8(r1)
/* 801EAFD8 001E7F18  7C 7E 1B 78 */	mr r30, r3
/* 801EAFDC 001E7F1C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801EAFE0 001E7F20  80 64 00 58 */	lwz r3, 0x58(r4)
/* 801EAFE4 001E7F24  81 83 00 00 */	lwz r12, 0(r3)
/* 801EAFE8 001E7F28  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EAFEC 001E7F2C  7D 89 03 A6 */	mtctr r12
/* 801EAFF0 001E7F30  4E 80 04 21 */	bctrl 
/* 801EAFF4 001E7F34  7C 64 1B 79 */	or. r4, r3, r3
/* 801EAFF8 001E7F38  41 82 00 1C */	beq .L_801EB014
/* 801EAFFC 001E7F3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EB000 001E7F40  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 801EB004 001E7F44  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801EB008 001E7F48  4B FF DA 11 */	bl getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 801EB00C 001E7F4C  7C 7F 1B 78 */	mr r31, r3
/* 801EB010 001E7F50  48 00 00 08 */	b .L_801EB018
.L_801EB014:
/* 801EB014 001E7F54  3B E0 FF FF */	li r31, -1
.L_801EB018:
/* 801EB018 001E7F58  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EB01C 001E7F5C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801EB020 001E7F60  81 83 00 00 */	lwz r12, 0(r3)
/* 801EB024 001E7F64  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EB028 001E7F68  7D 89 03 A6 */	mtctr r12
/* 801EB02C 001E7F6C  4E 80 04 21 */	bctrl 
/* 801EB030 001E7F70  7C 64 1B 79 */	or. r4, r3, r3
/* 801EB034 001E7F74  41 82 00 18 */	beq .L_801EB04C
/* 801EB038 001E7F78  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EB03C 001E7F7C  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 801EB040 001E7F80  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801EB044 001E7F84  4B FF DA 8D */	bl getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 801EB048 001E7F88  48 00 00 08 */	b .L_801EB050
.L_801EB04C:
/* 801EB04C 001E7F8C  38 60 FF FF */	li r3, -1
.L_801EB050:
/* 801EB050 001E7F90  7F E5 FE 70 */	srawi r5, r31, 0x1f
/* 801EB054 001E7F94  54 64 0F FE */	srwi r4, r3, 0x1f
/* 801EB058 001E7F98  7C 03 F8 10 */	subfc r0, r3, r31
/* 801EB05C 001E7F9C  7C 65 21 14 */	adde r3, r5, r4
/* 801EB060 001E7FA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EB064 001E7FA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801EB068 001E7FA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EB06C 001E7FAC  7C 08 03 A6 */	mtlr r0
/* 801EB070 001E7FB0  38 21 00 10 */	addi r1, r1, 0x10
/* 801EB074 001E7FB4  4E 80 00 20 */	blr 
.endfn complete__Q34Game8ItemCave4ItemFv

.fn doDirectDraw__Q34Game8ItemCave4ItemFR8Graphics, global
/* 801EB078 001E7FB8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801EB07C 001E7FBC  7C 08 02 A6 */	mflr r0
/* 801EB080 001E7FC0  90 01 00 84 */	stw r0, 0x84(r1)
/* 801EB084 001E7FC4  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801EB088 001E7FC8  7C 9F 23 78 */	mr r31, r4
/* 801EB08C 001E7FCC  38 80 00 00 */	li r4, 0
/* 801EB090 001E7FD0  93 C1 00 78 */	stw r30, 0x78(r1)
/* 801EB094 001E7FD4  7C 7E 1B 78 */	mr r30, r3
/* 801EB098 001E7FD8  7F E3 FB 78 */	mr r3, r31
/* 801EB09C 001E7FDC  93 A1 00 74 */	stw r29, 0x74(r1)
/* 801EB0A0 001E7FE0  48 23 A7 7D */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 801EB0A4 001E7FE4  38 7E 01 38 */	addi r3, r30, 0x138
/* 801EB0A8 001E7FE8  38 81 00 3C */	addi r4, r1, 0x3c
/* 801EB0AC 001E7FEC  4B EF F2 21 */	bl PSMTXCopy
/* 801EB0B0 001E7FF0  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 801EB0B4 001E7FF4  38 60 00 28 */	li r3, 0x28
/* 801EB0B8 001E7FF8  C0 02 B7 18 */	lfs f0, lbl_80519A78@sda21(r2)
/* 801EB0BC 001E7FFC  38 80 00 00 */	li r4, 0
/* 801EB0C0 001E8000  EC 21 00 2A */	fadds f1, f1, f0
/* 801EB0C4 001E8004  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 801EB0C8 001E8008  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801EB0CC 001E800C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801EB0D0 001E8010  4B EF AA 11 */	bl GXSetLineWidth
/* 801EB0D4 001E8014  C0 22 B6 DC */	lfs f1, lbl_80519A3C@sda21(r2)
/* 801EB0D8 001E8018  7F E3 FB 78 */	mr r3, r31
/* 801EB0DC 001E801C  38 81 00 3C */	addi r4, r1, 0x3c
/* 801EB0E0 001E8020  48 23 B5 2D */	bl drawAxis__8GraphicsFfP7Matrixf
/* 801EB0E4 001E8024  80 6D 89 D8 */	lwz r3, systemFont__9JFWSystem@sda21(r13)
/* 801EB0E8 001E8028  38 C0 00 00 */	li r6, 0
/* 801EB0EC 001E802C  38 00 00 FF */	li r0, 0xff
/* 801EB0F0 001E8030  38 A0 00 66 */	li r5, 0x66
/* 801EB0F4 001E8034  C0 02 B6 94 */	lfs f0, lbl_805199F4@sda21(r2)
/* 801EB0F8 001E8038  38 80 00 99 */	li r4, 0x99
/* 801EB0FC 001E803C  90 61 00 20 */	stw r3, 0x20(r1)
/* 801EB100 001E8040  7F E3 FB 78 */	mr r3, r31
/* 801EB104 001E8044  90 C1 00 24 */	stw r6, 0x24(r1)
/* 801EB108 001E8048  90 C1 00 28 */	stw r6, 0x28(r1)
/* 801EB10C 001E804C  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801EB110 001E8050  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801EB114 001E8054  98 A1 00 34 */	stb r5, 0x34(r1)
/* 801EB118 001E8058  98 81 00 35 */	stb r4, 0x35(r1)
/* 801EB11C 001E805C  98 01 00 36 */	stb r0, 0x36(r1)
/* 801EB120 001E8060  98 01 00 37 */	stb r0, 0x37(r1)
/* 801EB124 001E8064  98 C1 00 38 */	stb r6, 0x38(r1)
/* 801EB128 001E8068  98 A1 00 39 */	stb r5, 0x39(r1)
/* 801EB12C 001E806C  98 01 00 3A */	stb r0, 0x3a(r1)
/* 801EB130 001E8070  98 01 00 3B */	stb r0, 0x3b(r1)
/* 801EB134 001E8074  80 9F 02 5C */	lwz r4, 0x25c(r31)
/* 801EB138 001E8078  48 23 C7 71 */	bl initPerspPrintf__8GraphicsFP8Viewport
/* 801EB13C 001E807C  C0 02 B6 94 */	lfs f0, lbl_805199F4@sda21(r2)
/* 801EB140 001E8080  38 E0 00 0A */	li r7, 0xa
/* 801EB144 001E8084  38 C0 00 C8 */	li r6, 0xc8
/* 801EB148 001E8088  38 A0 00 FF */	li r5, 0xff
/* 801EB14C 001E808C  38 00 00 00 */	li r0, 0
/* 801EB150 001E8090  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801EB154 001E8094  7F C4 F3 78 */	mr r4, r30
/* 801EB158 001E8098  38 61 00 08 */	addi r3, r1, 8
/* 801EB15C 001E809C  98 C1 00 35 */	stb r6, 0x35(r1)
/* 801EB160 001E80A0  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801EB164 001E80A4  98 A1 00 37 */	stb r5, 0x37(r1)
/* 801EB168 001E80A8  98 01 00 38 */	stb r0, 0x38(r1)
/* 801EB16C 001E80AC  98 C1 00 39 */	stb r6, 0x39(r1)
/* 801EB170 001E80B0  98 01 00 3A */	stb r0, 0x3a(r1)
/* 801EB174 001E80B4  98 A1 00 3B */	stb r5, 0x3b(r1)
/* 801EB178 001E80B8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801EB17C 001E80BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801EB180 001E80C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EB184 001E80C4  7D 89 03 A6 */	mtctr r12
/* 801EB188 001E80C8  4E 80 04 21 */	bctrl 
/* 801EB18C 001E80CC  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801EB190 001E80D0  C0 02 B7 1C */	lfs f0, lbl_80519A7C@sda21(r2)
/* 801EB194 001E80D4  C0 61 00 08 */	lfs f3, 8(r1)
/* 801EB198 001E80D8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801EB19C 001E80DC  EC 02 00 2A */	fadds f0, f2, f0
/* 801EB1A0 001E80E0  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801EB1A4 001E80E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EB1A8 001E80E8  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801EB1AC 001E80EC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801EB1B0 001E80F0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801EB1B4 001E80F4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801EB1B8 001E80F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801EB1BC 001E80FC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EB1C0 001E8100  7D 89 03 A6 */	mtctr r12
/* 801EB1C4 001E8104  4E 80 04 21 */	bctrl 
/* 801EB1C8 001E8108  7C 64 1B 79 */	or. r4, r3, r3
/* 801EB1CC 001E810C  41 82 00 1C */	beq .L_801EB1E8
/* 801EB1D0 001E8110  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EB1D4 001E8114  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 801EB1D8 001E8118  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801EB1DC 001E811C  4B FF D8 3D */	bl getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 801EB1E0 001E8120  7C 7D 1B 78 */	mr r29, r3
/* 801EB1E4 001E8124  48 00 00 08 */	b .L_801EB1EC
.L_801EB1E8:
/* 801EB1E8 001E8128  3B A0 FF FF */	li r29, -1
.L_801EB1EC:
/* 801EB1EC 001E812C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801EB1F0 001E8130  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801EB1F4 001E8134  81 83 00 00 */	lwz r12, 0(r3)
/* 801EB1F8 001E8138  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801EB1FC 001E813C  7D 89 03 A6 */	mtctr r12
/* 801EB200 001E8140  4E 80 04 21 */	bctrl 
/* 801EB204 001E8144  7C 64 1B 79 */	or. r4, r3, r3
/* 801EB208 001E8148  41 82 00 1C */	beq .L_801EB224
/* 801EB20C 001E814C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801EB210 001E8150  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 801EB214 001E8154  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801EB218 001E8158  4B FF D8 B9 */	bl getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 801EB21C 001E815C  7C 69 1B 78 */	mr r9, r3
/* 801EB220 001E8160  48 00 00 08 */	b .L_801EB228
.L_801EB224:
/* 801EB224 001E8164  39 20 FF FF */	li r9, -1
.L_801EB228:
/* 801EB228 001E8168  3C 80 80 48 */	lis r4, lbl_80480FF4@ha
/* 801EB22C 001E816C  7F E3 FB 78 */	mr r3, r31
/* 801EB230 001E8170  38 C4 0F F4 */	addi r6, r4, lbl_80480FF4@l
/* 801EB234 001E8174  7F A8 EB 78 */	mr r8, r29
/* 801EB238 001E8178  38 81 00 20 */	addi r4, r1, 0x20
/* 801EB23C 001E817C  38 A1 00 14 */	addi r5, r1, 0x14
/* 801EB240 001E8180  38 FE 01 E8 */	addi r7, r30, 0x1e8
/* 801EB244 001E8184  4C C6 31 82 */	crclr 6
/* 801EB248 001E8188  48 23 C8 95 */	bl "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
/* 801EB24C 001E818C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801EB250 001E8190  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801EB254 001E8194  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 801EB258 001E8198  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 801EB25C 001E819C  7C 08 03 A6 */	mtlr r0
/* 801EB260 001E81A0  38 21 00 80 */	addi r1, r1, 0x80
/* 801EB264 001E81A4  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game8ItemCave4ItemFR8Graphics

.fn __ct__Q34Game8ItemCave3MgrFv, global
/* 801EB268 001E81A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EB26C 001E81AC  7C 08 02 A6 */	mflr r0
/* 801EB270 001E81B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EB274 001E81B4  7C 80 07 35 */	extsh. r0, r4
/* 801EB278 001E81B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EB27C 001E81BC  7C 7F 1B 78 */	mr r31, r3
/* 801EB280 001E81C0  41 82 00 0C */	beq .L_801EB28C
/* 801EB284 001E81C4  38 1F 00 90 */	addi r0, r31, 0x90
/* 801EB288 001E81C8  90 1F 00 04 */	stw r0, 4(r31)
.L_801EB28C:
/* 801EB28C 001E81CC  7F E3 FB 78 */	mr r3, r31
/* 801EB290 001E81D0  38 80 00 00 */	li r4, 0
/* 801EB294 001E81D4  4B FE 21 8D */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801EB298 001E81D8  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemCave3Mgr@ha
/* 801EB29C 001E81DC  38 02 B7 20 */	addi r0, r2, lbl_80519A80@sda21
/* 801EB2A0 001E81E0  38 83 A3 B8 */	addi r4, r3, __vt__Q34Game8ItemCave3Mgr@l
/* 801EB2A4 001E81E4  7F E3 FB 78 */	mr r3, r31
/* 801EB2A8 001E81E8  90 9F 00 00 */	stw r4, 0(r31)
/* 801EB2AC 001E81EC  38 A4 00 74 */	addi r5, r4, 0x74
/* 801EB2B0 001E81F0  38 80 00 01 */	li r4, 1
/* 801EB2B4 001E81F4  90 BF 00 30 */	stw r5, 0x30(r31)
/* 801EB2B8 001E81F8  90 1F 00 08 */	stw r0, 8(r31)
/* 801EB2BC 001E81FC  4B FE 1B 11 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801EB2C0 001E8200  3C 80 80 48 */	lis r4, lbl_80481000@ha
/* 801EB2C4 001E8204  7F E3 FB 78 */	mr r3, r31
/* 801EB2C8 001E8208  38 04 10 00 */	addi r0, r4, lbl_80481000@l
/* 801EB2CC 001E820C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 801EB2D0 001E8210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EB2D4 001E8214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EB2D8 001E8218  7C 08 03 A6 */	mtlr r0
/* 801EB2DC 001E821C  38 21 00 10 */	addi r1, r1, 0x10
/* 801EB2E0 001E8220  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8ItemCave3MgrFv

.fn onLoadResources__Q34Game8ItemCave3MgrFv, global
/* 801EB2E4 001E8224  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EB2E8 001E8228  7C 08 02 A6 */	mflr r0
/* 801EB2EC 001E822C  3C 80 80 48 */	lis r4, lbl_80480F98@ha
/* 801EB2F0 001E8230  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EB2F4 001E8234  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EB2F8 001E8238  3B E4 0F 98 */	addi r31, r4, lbl_80480F98@l
/* 801EB2FC 001E823C  38 82 B7 28 */	addi r4, r2, lbl_80519A88@sda21
/* 801EB300 001E8240  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EB304 001E8244  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EB308 001E8248  7C 7D 1B 78 */	mr r29, r3
/* 801EB30C 001E824C  4B FE 1B C9 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801EB310 001E8250  7F A3 EB 78 */	mr r3, r29
/* 801EB314 001E8254  38 9F 00 88 */	addi r4, r31, 0x88
/* 801EB318 001E8258  38 A0 00 00 */	li r5, 0
/* 801EB31C 001E825C  3C C0 00 02 */	lis r6, 2
/* 801EB320 001E8260  4B FE 1C 31 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801EB324 001E8264  7F A3 EB 78 */	mr r3, r29
/* 801EB328 001E8268  38 9F 00 9C */	addi r4, r31, 0x9c
/* 801EB32C 001E826C  4B FE 1E A1 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801EB330 001E8270  7C 60 1B 78 */	mr r0, r3
/* 801EB334 001E8274  7F A3 EB 78 */	mr r3, r29
/* 801EB338 001E8278  7C 1E 03 78 */	mr r30, r0
/* 801EB33C 001E827C  38 BF 00 A8 */	addi r5, r31, 0xa8
/* 801EB340 001E8280  7F C4 F3 78 */	mr r4, r30
/* 801EB344 001E8284  4B FE 1F 5D */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801EB348 001E8288  90 7D 00 88 */	stw r3, 0x88(r29)
/* 801EB34C 001E828C  7F A3 EB 78 */	mr r3, r29
/* 801EB350 001E8290  7F C4 F3 78 */	mr r4, r30
/* 801EB354 001E8294  38 BF 00 BC */	addi r5, r31, 0xbc
/* 801EB358 001E8298  4B FE 1F 49 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801EB35C 001E829C  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 801EB360 001E82A0  38 61 00 08 */	addi r3, r1, 8
/* 801EB364 001E82A4  38 80 00 01 */	li r4, 1
/* 801EB368 001E82A8  38 A0 00 02 */	li r5, 2
/* 801EB36C 001E82AC  38 C0 00 01 */	li r6, 1
/* 801EB370 001E82B0  48 23 10 E9 */	bl setCode__Q27MapCode4CodeFiib
/* 801EB374 001E82B4  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 801EB378 001E82B8  38 81 00 08 */	addi r4, r1, 8
/* 801EB37C 001E82BC  4B F4 83 79 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801EB380 001E82C0  38 61 00 08 */	addi r3, r1, 8
/* 801EB384 001E82C4  38 80 00 01 */	li r4, 1
/* 801EB388 001E82C8  38 A0 00 00 */	li r5, 0
/* 801EB38C 001E82CC  38 C0 00 01 */	li r6, 1
/* 801EB390 001E82D0  48 23 10 C9 */	bl setCode__Q27MapCode4CodeFiib
/* 801EB394 001E82D4  80 7D 00 8C */	lwz r3, 0x8c(r29)
/* 801EB398 001E82D8  38 81 00 08 */	addi r4, r1, 8
/* 801EB39C 001E82DC  4B F4 83 59 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801EB3A0 001E82E0  7F A3 EB 78 */	mr r3, r29
/* 801EB3A4 001E82E4  7F C4 F3 78 */	mr r4, r30
/* 801EB3A8 001E82E8  4B FE 1E A9 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801EB3AC 001E82EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EB3B0 001E82F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EB3B4 001E82F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801EB3B8 001E82F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801EB3BC 001E82FC  7C 08 03 A6 */	mtlr r0
/* 801EB3C0 001E8300  38 21 00 20 */	addi r1, r1, 0x20
/* 801EB3C4 001E8304  4E 80 00 20 */	blr 
.endfn onLoadResources__Q34Game8ItemCave3MgrFv

.fn setup__Q34Game8ItemCave3MgrFPQ24Game8BaseItem, global
/* 801EB3C8 001E8308  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EB3CC 001E830C  7C 08 02 A6 */	mflr r0
/* 801EB3D0 001E8310  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EB3D4 001E8314  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EB3D8 001E8318  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EB3DC 001E831C  7C 9E 23 78 */	mr r30, r4
/* 801EB3E0 001E8320  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EB3E4 001E8324  7C 7D 1B 78 */	mr r29, r3
/* 801EB3E8 001E8328  38 60 00 14 */	li r3, 0x14
/* 801EB3EC 001E832C  4B E3 8A B9 */	bl __nw__FUl
/* 801EB3F0 001E8330  7C 7F 1B 79 */	or. r31, r3, r3
/* 801EB3F4 001E8334  41 82 00 28 */	beq .L_801EB41C
/* 801EB3F8 001E8338  7F A3 EB 78 */	mr r3, r29
/* 801EB3FC 001E833C  38 80 00 00 */	li r4, 0
/* 801EB400 001E8340  4B FE 1D 51 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 801EB404 001E8344  7C 64 1B 78 */	mr r4, r3
/* 801EB408 001E8348  7F E3 FB 78 */	mr r3, r31
/* 801EB40C 001E834C  3C A0 00 02 */	lis r5, 2
/* 801EB410 001E8350  38 C0 00 02 */	li r6, 2
/* 801EB414 001E8354  48 25 2D C5 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801EB418 001E8358  7C 7F 1B 78 */	mr r31, r3
.L_801EB41C:
/* 801EB41C 001E835C  93 FE 01 74 */	stw r31, 0x174(r30)
/* 801EB420 001E8360  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EB424 001E8364  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EB428 001E8368  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801EB42C 001E836C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801EB430 001E8370  7C 08 03 A6 */	mtlr r0
/* 801EB434 001E8374  38 21 00 20 */	addi r1, r1, 0x20
/* 801EB438 001E8378  4E 80 00 20 */	blr 
.endfn setup__Q34Game8ItemCave3MgrFPQ24Game8BaseItem

.fn generatorNewItemParm__Q34Game8ItemCave3MgrFv, global
/* 801EB43C 001E837C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EB440 001E8380  7C 08 02 A6 */	mflr r0
/* 801EB444 001E8384  38 60 01 CC */	li r3, 0x1cc
/* 801EB448 001E8388  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EB44C 001E838C  4B E3 8A 59 */	bl __nw__FUl
/* 801EB450 001E8390  7C 60 1B 79 */	or. r0, r3, r3
/* 801EB454 001E8394  41 82 00 0C */	beq .L_801EB460
/* 801EB458 001E8398  48 00 00 1D */	bl __ct__11GenCaveParmFv
/* 801EB45C 001E839C  7C 60 1B 78 */	mr r0, r3
.L_801EB460:
/* 801EB460 001E83A0  7C 03 03 78 */	mr r3, r0
/* 801EB464 001E83A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EB468 001E83A8  7C 08 03 A6 */	mtlr r0
/* 801EB46C 001E83AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801EB470 001E83B0  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q34Game8ItemCave3MgrFv

.fn __ct__11GenCaveParmFv, weak
/* 801EB474 001E83B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EB478 001E83B8  7C 08 02 A6 */	mflr r0
/* 801EB47C 001E83BC  3C 80 80 4B */	lis r4, __vt__Q24Game11GenItemParm@ha
/* 801EB480 001E83C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EB484 001E83C4  38 04 26 24 */	addi r0, r4, __vt__Q24Game11GenItemParm@l
/* 801EB488 001E83C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EB48C 001E83CC  7C 7F 1B 78 */	mr r31, r3
/* 801EB490 001E83D0  3C 60 80 4C */	lis r3, __vt__11GenCaveParm@ha
/* 801EB494 001E83D4  90 1F 00 00 */	stw r0, 0(r31)
/* 801EB498 001E83D8  38 03 A3 AC */	addi r0, r3, __vt__11GenCaveParm@l
/* 801EB49C 001E83DC  38 7F 00 44 */	addi r3, r31, 0x44
/* 801EB4A0 001E83E0  90 1F 00 00 */	stw r0, 0(r31)
/* 801EB4A4 001E83E4  48 22 7D CD */	bl __ct__4ID32Fv
/* 801EB4A8 001E83E8  38 7F 00 50 */	addi r3, r31, 0x50
/* 801EB4AC 001E83EC  38 80 00 01 */	li r4, 1
/* 801EB4B0 001E83F0  4B FF EC DD */	bl __ct__Q34Game8ItemCave7FogParmFv
/* 801EB4B4 001E83F4  38 00 00 02 */	li r0, 2
/* 801EB4B8 001E83F8  38 80 00 00 */	li r4, 0
/* 801EB4BC 001E83FC  7C 09 03 A6 */	mtctr r0
.L_801EB4C0:
/* 801EB4C0 001E8400  7C 7F 22 14 */	add r3, r31, r4
/* 801EB4C4 001E8404  38 00 00 00 */	li r0, 0
/* 801EB4C8 001E8408  98 03 00 24 */	stb r0, 0x24(r3)
/* 801EB4CC 001E840C  38 84 00 08 */	addi r4, r4, 8
/* 801EB4D0 001E8410  98 03 00 04 */	stb r0, 4(r3)
/* 801EB4D4 001E8414  98 03 00 25 */	stb r0, 0x25(r3)
/* 801EB4D8 001E8418  98 03 00 05 */	stb r0, 5(r3)
/* 801EB4DC 001E841C  98 03 00 26 */	stb r0, 0x26(r3)
/* 801EB4E0 001E8420  98 03 00 06 */	stb r0, 6(r3)
/* 801EB4E4 001E8424  98 03 00 27 */	stb r0, 0x27(r3)
/* 801EB4E8 001E8428  98 03 00 07 */	stb r0, 7(r3)
/* 801EB4EC 001E842C  98 03 00 28 */	stb r0, 0x28(r3)
/* 801EB4F0 001E8430  98 03 00 08 */	stb r0, 8(r3)
/* 801EB4F4 001E8434  98 03 00 29 */	stb r0, 0x29(r3)
/* 801EB4F8 001E8438  98 03 00 09 */	stb r0, 9(r3)
/* 801EB4FC 001E843C  98 03 00 2A */	stb r0, 0x2a(r3)
/* 801EB500 001E8440  98 03 00 0A */	stb r0, 0xa(r3)
/* 801EB504 001E8444  98 03 00 2B */	stb r0, 0x2b(r3)
/* 801EB508 001E8448  98 03 00 0B */	stb r0, 0xb(r3)
/* 801EB50C 001E844C  7C 7F 22 14 */	add r3, r31, r4
/* 801EB510 001E8450  38 84 00 08 */	addi r4, r4, 8
/* 801EB514 001E8454  98 03 00 24 */	stb r0, 0x24(r3)
/* 801EB518 001E8458  98 03 00 04 */	stb r0, 4(r3)
/* 801EB51C 001E845C  98 03 00 25 */	stb r0, 0x25(r3)
/* 801EB520 001E8460  98 03 00 05 */	stb r0, 5(r3)
/* 801EB524 001E8464  98 03 00 26 */	stb r0, 0x26(r3)
/* 801EB528 001E8468  98 03 00 06 */	stb r0, 6(r3)
/* 801EB52C 001E846C  98 03 00 27 */	stb r0, 0x27(r3)
/* 801EB530 001E8470  98 03 00 07 */	stb r0, 7(r3)
/* 801EB534 001E8474  98 03 00 28 */	stb r0, 0x28(r3)
/* 801EB538 001E8478  98 03 00 08 */	stb r0, 8(r3)
/* 801EB53C 001E847C  98 03 00 29 */	stb r0, 0x29(r3)
/* 801EB540 001E8480  98 03 00 09 */	stb r0, 9(r3)
/* 801EB544 001E8484  98 03 00 2A */	stb r0, 0x2a(r3)
/* 801EB548 001E8488  98 03 00 0A */	stb r0, 0xa(r3)
/* 801EB54C 001E848C  98 03 00 2B */	stb r0, 0x2b(r3)
/* 801EB550 001E8490  98 03 00 0B */	stb r0, 0xb(r3)
/* 801EB554 001E8494  42 00 FF 6C */	bdnz .L_801EB4C0
/* 801EB558 001E8498  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801EB55C 001E849C  38 7F 00 44 */	addi r3, r31, 0x44
/* 801EB560 001E84A0  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801EB564 001E84A4  48 22 7D 75 */	bl setID__4ID32FUl
/* 801EB568 001E84A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EB56C 001E84AC  7F E3 FB 78 */	mr r3, r31
/* 801EB570 001E84B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EB574 001E84B4  7C 08 03 A6 */	mtlr r0
/* 801EB578 001E84B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801EB57C 001E84BC  4E 80 00 20 */	blr 
.endfn __ct__11GenCaveParmFv

.fn generatorWrite__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParm, global
/* 801EB580 001E84C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EB584 001E84C4  7C 08 02 A6 */	mflr r0
/* 801EB588 001E84C8  3C 60 80 48 */	lis r3, lbl_80480F98@ha
/* 801EB58C 001E84CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EB590 001E84D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EB594 001E84D4  3B E3 0F 98 */	addi r31, r3, lbl_80480F98@l
/* 801EB598 001E84D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EB59C 001E84DC  7C BE 2B 79 */	or. r30, r5, r5
/* 801EB5A0 001E84E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EB5A4 001E84E4  7C 9D 23 78 */	mr r29, r4
/* 801EB5A8 001E84E8  40 82 00 18 */	bne .L_801EB5C0
/* 801EB5AC 001E84EC  38 7F 00 D0 */	addi r3, r31, 0xd0
/* 801EB5B0 001E84F0  38 BF 00 E0 */	addi r5, r31, 0xe0
/* 801EB5B4 001E84F4  38 80 04 A9 */	li r4, 0x4a9
/* 801EB5B8 001E84F8  4C C6 31 82 */	crclr 6
/* 801EB5BC 001E84FC  4B E3 F0 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EB5C0:
/* 801EB5C0 001E8500  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801EB5C4 001E8504  7F A3 EB 78 */	mr r3, r29
/* 801EB5C8 001E8508  48 22 8E 6D */	bl textWriteTab__6StreamFi
/* 801EB5CC 001E850C  7F A3 EB 78 */	mr r3, r29
/* 801EB5D0 001E8510  38 9E 00 04 */	addi r4, r30, 4
/* 801EB5D4 001E8514  48 22 9F F9 */	bl writeString__6StreamFPc
/* 801EB5D8 001E8518  7F A3 EB 78 */	mr r3, r29
/* 801EB5DC 001E851C  38 82 B7 30 */	addi r4, r2, lbl_80519A90@sda21
/* 801EB5E0 001E8520  4C C6 31 82 */	crclr 6
/* 801EB5E4 001E8524  48 22 8B F9 */	bl textWriteText__6StreamFPce
/* 801EB5E8 001E8528  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801EB5EC 001E852C  7F A3 EB 78 */	mr r3, r29
/* 801EB5F0 001E8530  48 22 8E 45 */	bl textWriteTab__6StreamFi
/* 801EB5F4 001E8534  7F A3 EB 78 */	mr r3, r29
/* 801EB5F8 001E8538  38 9E 00 24 */	addi r4, r30, 0x24
/* 801EB5FC 001E853C  48 22 9F D1 */	bl writeString__6StreamFPc
/* 801EB600 001E8540  7F A3 EB 78 */	mr r3, r29
/* 801EB604 001E8544  38 82 B7 30 */	addi r4, r2, lbl_80519A90@sda21
/* 801EB608 001E8548  4C C6 31 82 */	crclr 6
/* 801EB60C 001E854C  48 22 8B D1 */	bl textWriteText__6StreamFPce
/* 801EB610 001E8550  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801EB614 001E8554  7F A3 EB 78 */	mr r3, r29
/* 801EB618 001E8558  48 22 8E 1D */	bl textWriteTab__6StreamFi
/* 801EB61C 001E855C  7F A4 EB 78 */	mr r4, r29
/* 801EB620 001E8560  38 7E 00 44 */	addi r3, r30, 0x44
/* 801EB624 001E8564  48 22 7E 3D */	bl write__4ID32FR6Stream
/* 801EB628 001E8568  7F A3 EB 78 */	mr r3, r29
/* 801EB62C 001E856C  38 9F 00 EC */	addi r4, r31, 0xec
/* 801EB630 001E8570  4C C6 31 82 */	crclr 6
/* 801EB634 001E8574  48 22 8B A9 */	bl textWriteText__6StreamFPce
/* 801EB638 001E8578  7F A4 EB 78 */	mr r4, r29
/* 801EB63C 001E857C  38 7E 00 50 */	addi r3, r30, 0x50
/* 801EB640 001E8580  48 22 80 C5 */	bl write__10ParametersFR6Stream
/* 801EB644 001E8584  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EB648 001E8588  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EB64C 001E858C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801EB650 001E8590  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801EB654 001E8594  7C 08 03 A6 */	mtlr r0
/* 801EB658 001E8598  38 21 00 20 */	addi r1, r1, 0x20
/* 801EB65C 001E859C  4E 80 00 20 */	blr 
.endfn generatorWrite__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParmUl, global
/* 801EB660 001E85A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EB664 001E85A4  7C 08 02 A6 */	mflr r0
/* 801EB668 001E85A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EB66C 001E85AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EB670 001E85B0  7C DF 33 78 */	mr r31, r6
/* 801EB674 001E85B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EB678 001E85B8  7C BE 2B 79 */	or. r30, r5, r5
/* 801EB67C 001E85BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EB680 001E85C0  7C 9D 23 78 */	mr r29, r4
/* 801EB684 001E85C4  40 82 00 20 */	bne .L_801EB6A4
/* 801EB688 001E85C8  3C 60 80 48 */	lis r3, lbl_80481068@ha
/* 801EB68C 001E85CC  3C A0 80 48 */	lis r5, lbl_80481078@ha
/* 801EB690 001E85D0  38 63 10 68 */	addi r3, r3, lbl_80481068@l
/* 801EB694 001E85D4  38 80 04 BC */	li r4, 0x4bc
/* 801EB698 001E85D8  38 A5 10 78 */	addi r5, r5, lbl_80481078@l
/* 801EB69C 001E85DC  4C C6 31 82 */	crclr 6
/* 801EB6A0 001E85E0  4B E3 EF A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EB6A4:
/* 801EB6A4 001E85E4  7F A3 EB 78 */	mr r3, r29
/* 801EB6A8 001E85E8  38 80 00 00 */	li r4, 0
/* 801EB6AC 001E85EC  38 A0 00 00 */	li r5, 0
/* 801EB6B0 001E85F0  48 22 9A 25 */	bl readString__6StreamFPci
/* 801EB6B4 001E85F4  38 00 00 02 */	li r0, 2
/* 801EB6B8 001E85F8  38 C0 00 00 */	li r6, 0
/* 801EB6BC 001E85FC  7C 09 03 A6 */	mtctr r0
.L_801EB6C0:
/* 801EB6C0 001E8600  7C 83 32 14 */	add r4, r3, r6
/* 801EB6C4 001E8604  38 A6 00 04 */	addi r5, r6, 4
/* 801EB6C8 001E8608  88 04 00 00 */	lbz r0, 0(r4)
/* 801EB6CC 001E860C  7C BE 2A 14 */	add r5, r30, r5
/* 801EB6D0 001E8610  38 C6 00 08 */	addi r6, r6, 8
/* 801EB6D4 001E8614  98 05 00 00 */	stb r0, 0(r5)
/* 801EB6D8 001E8618  88 04 00 01 */	lbz r0, 1(r4)
/* 801EB6DC 001E861C  98 05 00 01 */	stb r0, 1(r5)
/* 801EB6E0 001E8620  88 04 00 02 */	lbz r0, 2(r4)
/* 801EB6E4 001E8624  98 05 00 02 */	stb r0, 2(r5)
/* 801EB6E8 001E8628  88 04 00 03 */	lbz r0, 3(r4)
/* 801EB6EC 001E862C  98 05 00 03 */	stb r0, 3(r5)
/* 801EB6F0 001E8630  88 04 00 04 */	lbz r0, 4(r4)
/* 801EB6F4 001E8634  98 05 00 04 */	stb r0, 4(r5)
/* 801EB6F8 001E8638  88 04 00 05 */	lbz r0, 5(r4)
/* 801EB6FC 001E863C  98 05 00 05 */	stb r0, 5(r5)
/* 801EB700 001E8640  88 04 00 06 */	lbz r0, 6(r4)
/* 801EB704 001E8644  98 05 00 06 */	stb r0, 6(r5)
/* 801EB708 001E8648  88 04 00 07 */	lbz r0, 7(r4)
/* 801EB70C 001E864C  7C 83 32 14 */	add r4, r3, r6
/* 801EB710 001E8650  98 05 00 07 */	stb r0, 7(r5)
/* 801EB714 001E8654  38 A6 00 04 */	addi r5, r6, 4
/* 801EB718 001E8658  7C BE 2A 14 */	add r5, r30, r5
/* 801EB71C 001E865C  38 C6 00 08 */	addi r6, r6, 8
/* 801EB720 001E8660  88 04 00 00 */	lbz r0, 0(r4)
/* 801EB724 001E8664  98 05 00 00 */	stb r0, 0(r5)
/* 801EB728 001E8668  88 04 00 01 */	lbz r0, 1(r4)
/* 801EB72C 001E866C  98 05 00 01 */	stb r0, 1(r5)
/* 801EB730 001E8670  88 04 00 02 */	lbz r0, 2(r4)
/* 801EB734 001E8674  98 05 00 02 */	stb r0, 2(r5)
/* 801EB738 001E8678  88 04 00 03 */	lbz r0, 3(r4)
/* 801EB73C 001E867C  98 05 00 03 */	stb r0, 3(r5)
/* 801EB740 001E8680  88 04 00 04 */	lbz r0, 4(r4)
/* 801EB744 001E8684  98 05 00 04 */	stb r0, 4(r5)
/* 801EB748 001E8688  88 04 00 05 */	lbz r0, 5(r4)
/* 801EB74C 001E868C  98 05 00 05 */	stb r0, 5(r5)
/* 801EB750 001E8690  88 04 00 06 */	lbz r0, 6(r4)
/* 801EB754 001E8694  98 05 00 06 */	stb r0, 6(r5)
/* 801EB758 001E8698  88 04 00 07 */	lbz r0, 7(r4)
/* 801EB75C 001E869C  98 05 00 07 */	stb r0, 7(r5)
/* 801EB760 001E86A0  42 00 FF 60 */	bdnz .L_801EB6C0
/* 801EB764 001E86A4  7F A3 EB 78 */	mr r3, r29
/* 801EB768 001E86A8  38 80 00 00 */	li r4, 0
/* 801EB76C 001E86AC  38 A0 00 00 */	li r5, 0
/* 801EB770 001E86B0  48 22 99 65 */	bl readString__6StreamFPci
/* 801EB774 001E86B4  38 00 00 02 */	li r0, 2
/* 801EB778 001E86B8  38 C0 00 00 */	li r6, 0
/* 801EB77C 001E86BC  7C 09 03 A6 */	mtctr r0
.L_801EB780:
/* 801EB780 001E86C0  7C 83 32 14 */	add r4, r3, r6
/* 801EB784 001E86C4  38 A6 00 24 */	addi r5, r6, 0x24
/* 801EB788 001E86C8  88 04 00 00 */	lbz r0, 0(r4)
/* 801EB78C 001E86CC  7C BE 2A 14 */	add r5, r30, r5
/* 801EB790 001E86D0  38 C6 00 08 */	addi r6, r6, 8
/* 801EB794 001E86D4  98 05 00 00 */	stb r0, 0(r5)
/* 801EB798 001E86D8  88 04 00 01 */	lbz r0, 1(r4)
/* 801EB79C 001E86DC  98 05 00 01 */	stb r0, 1(r5)
/* 801EB7A0 001E86E0  88 04 00 02 */	lbz r0, 2(r4)
/* 801EB7A4 001E86E4  98 05 00 02 */	stb r0, 2(r5)
/* 801EB7A8 001E86E8  88 04 00 03 */	lbz r0, 3(r4)
/* 801EB7AC 001E86EC  98 05 00 03 */	stb r0, 3(r5)
/* 801EB7B0 001E86F0  88 04 00 04 */	lbz r0, 4(r4)
/* 801EB7B4 001E86F4  98 05 00 04 */	stb r0, 4(r5)
/* 801EB7B8 001E86F8  88 04 00 05 */	lbz r0, 5(r4)
/* 801EB7BC 001E86FC  98 05 00 05 */	stb r0, 5(r5)
/* 801EB7C0 001E8700  88 04 00 06 */	lbz r0, 6(r4)
/* 801EB7C4 001E8704  98 05 00 06 */	stb r0, 6(r5)
/* 801EB7C8 001E8708  88 04 00 07 */	lbz r0, 7(r4)
/* 801EB7CC 001E870C  7C 83 32 14 */	add r4, r3, r6
/* 801EB7D0 001E8710  98 05 00 07 */	stb r0, 7(r5)
/* 801EB7D4 001E8714  38 A6 00 24 */	addi r5, r6, 0x24
/* 801EB7D8 001E8718  7C BE 2A 14 */	add r5, r30, r5
/* 801EB7DC 001E871C  38 C6 00 08 */	addi r6, r6, 8
/* 801EB7E0 001E8720  88 04 00 00 */	lbz r0, 0(r4)
/* 801EB7E4 001E8724  98 05 00 00 */	stb r0, 0(r5)
/* 801EB7E8 001E8728  88 04 00 01 */	lbz r0, 1(r4)
/* 801EB7EC 001E872C  98 05 00 01 */	stb r0, 1(r5)
/* 801EB7F0 001E8730  88 04 00 02 */	lbz r0, 2(r4)
/* 801EB7F4 001E8734  98 05 00 02 */	stb r0, 2(r5)
/* 801EB7F8 001E8738  88 04 00 03 */	lbz r0, 3(r4)
/* 801EB7FC 001E873C  98 05 00 03 */	stb r0, 3(r5)
/* 801EB800 001E8740  88 04 00 04 */	lbz r0, 4(r4)
/* 801EB804 001E8744  98 05 00 04 */	stb r0, 4(r5)
/* 801EB808 001E8748  88 04 00 05 */	lbz r0, 5(r4)
/* 801EB80C 001E874C  98 05 00 05 */	stb r0, 5(r5)
/* 801EB810 001E8750  88 04 00 06 */	lbz r0, 6(r4)
/* 801EB814 001E8754  98 05 00 06 */	stb r0, 6(r5)
/* 801EB818 001E8758  88 04 00 07 */	lbz r0, 7(r4)
/* 801EB81C 001E875C  98 05 00 07 */	stb r0, 7(r5)
/* 801EB820 001E8760  42 00 FF 60 */	bdnz .L_801EB780
/* 801EB824 001E8764  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 801EB828 001E8768  38 03 30 31 */	addi r0, r3, 0x30303031@l
/* 801EB82C 001E876C  7C 1F 00 40 */	cmplw r31, r0
/* 801EB830 001E8770  41 80 00 10 */	blt .L_801EB840
/* 801EB834 001E8774  7F A4 EB 78 */	mr r4, r29
/* 801EB838 001E8778  38 7E 00 44 */	addi r3, r30, 0x44
/* 801EB83C 001E877C  48 22 7C B5 */	bl read__4ID32FR6Stream
.L_801EB840:
/* 801EB840 001E8780  3C 60 30 30 */	lis r3, 0x30303032@ha
/* 801EB844 001E8784  38 03 30 32 */	addi r0, r3, 0x30303032@l
/* 801EB848 001E8788  7C 1F 00 40 */	cmplw r31, r0
/* 801EB84C 001E878C  41 80 00 10 */	blt .L_801EB85C
/* 801EB850 001E8790  7F A4 EB 78 */	mr r4, r29
/* 801EB854 001E8794  38 7E 00 50 */	addi r3, r30, 0x50
/* 801EB858 001E8798  48 22 7F 9D */	bl read__10ParametersFR6Stream
.L_801EB85C:
/* 801EB85C 001E879C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EB860 001E87A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EB864 001E87A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801EB868 001E87A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801EB86C 001E87AC  7C 08 03 A6 */	mtlr r0
/* 801EB870 001E87B0  38 21 00 20 */	addi r1, r1, 0x20
/* 801EB874 001E87B4  4E 80 00 20 */	blr 
.endfn generatorRead__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParmUl

.fn "generatorBirth__Q34Game8ItemCave3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 801EB878 001E87B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EB87C 001E87BC  7C 08 02 A6 */	mflr r0
/* 801EB880 001E87C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EB884 001E87C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EB888 001E87C8  7C 7F 1B 78 */	mr r31, r3
/* 801EB88C 001E87CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EB890 001E87D0  7C DE 33 79 */	or. r30, r6, r6
/* 801EB894 001E87D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EB898 001E87D8  7C BD 2B 78 */	mr r29, r5
/* 801EB89C 001E87DC  93 81 00 10 */	stw r28, 0x10(r1)
/* 801EB8A0 001E87E0  7C 9C 23 78 */	mr r28, r4
/* 801EB8A4 001E87E4  40 82 00 20 */	bne .L_801EB8C4
/* 801EB8A8 001E87E8  3C 60 80 48 */	lis r3, lbl_80481068@ha
/* 801EB8AC 001E87EC  3C A0 80 48 */	lis r5, lbl_80481078@ha
/* 801EB8B0 001E87F0  38 63 10 68 */	addi r3, r3, lbl_80481068@l
/* 801EB8B4 001E87F4  38 80 04 D4 */	li r4, 0x4d4
/* 801EB8B8 001E87F8  38 A5 10 78 */	addi r5, r5, lbl_80481078@l
/* 801EB8BC 001E87FC  4C C6 31 82 */	crclr 6
/* 801EB8C0 001E8800  4B E3 ED 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EB8C4:
/* 801EB8C4 001E8804  7F E3 FB 78 */	mr r3, r31
/* 801EB8C8 001E8808  4B FE 1E C5 */	bl birth__Q24Game12TNodeItemMgrFv
/* 801EB8CC 001E880C  7C 60 1B 78 */	mr r0, r3
/* 801EB8D0 001E8810  38 7E 00 04 */	addi r3, r30, 4
/* 801EB8D4 001E8814  7C 1F 03 78 */	mr r31, r0
/* 801EB8D8 001E8818  4B ED F0 39 */	bl strlen
/* 801EB8DC 001E881C  38 63 00 01 */	addi r3, r3, 1
/* 801EB8E0 001E8820  4B E3 86 CD */	bl __nwa__FUl
/* 801EB8E4 001E8824  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 801EB8E8 001E8828  38 7E 00 24 */	addi r3, r30, 0x24
/* 801EB8EC 001E882C  4B ED F0 25 */	bl strlen
/* 801EB8F0 001E8830  38 63 00 01 */	addi r3, r3, 1
/* 801EB8F4 001E8834  4B E3 86 B9 */	bl __nwa__FUl
/* 801EB8F8 001E8838  90 7F 01 E4 */	stw r3, 0x1e4(r31)
/* 801EB8FC 001E883C  38 9E 00 04 */	addi r4, r30, 4
/* 801EB900 001E8840  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 801EB904 001E8844  4B ED EF 55 */	bl strcpy
/* 801EB908 001E8848  80 7F 01 E4 */	lwz r3, 0x1e4(r31)
/* 801EB90C 001E884C  38 9E 00 24 */	addi r4, r30, 0x24
/* 801EB910 001E8850  4B ED EF 49 */	bl strcpy
/* 801EB914 001E8854  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 801EB918 001E8858  38 7F 01 E8 */	addi r3, r31, 0x1e8
/* 801EB91C 001E885C  48 22 79 BD */	bl setID__4ID32FUl
/* 801EB920 001E8860  7F E3 FB 78 */	mr r3, r31
/* 801EB924 001E8864  38 80 00 00 */	li r4, 0
/* 801EB928 001E8868  4B F4 F6 A1 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801EB92C 001E886C  C0 1D 00 04 */	lfs f0, 4(r29)
/* 801EB930 001E8870  7F E3 FB 78 */	mr r3, r31
/* 801EB934 001E8874  7F 84 E3 78 */	mr r4, r28
/* 801EB938 001E8878  38 A0 00 00 */	li r5, 0
/* 801EB93C 001E887C  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 801EB940 001E8880  4B F4 F8 69 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801EB944 001E8884  38 7F 02 04 */	addi r3, r31, 0x204
/* 801EB948 001E8888  38 9E 00 50 */	addi r4, r30, 0x50
/* 801EB94C 001E888C  48 00 00 29 */	bl __as__Q34Game8ItemCave7FogParmFRCQ34Game8ItemCave7FogParm
/* 801EB950 001E8890  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EB954 001E8894  7F E3 FB 78 */	mr r3, r31
/* 801EB958 001E8898  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EB95C 001E889C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801EB960 001E88A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801EB964 001E88A4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801EB968 001E88A8  7C 08 03 A6 */	mtlr r0
/* 801EB96C 001E88AC  38 21 00 20 */	addi r1, r1, 0x20
/* 801EB970 001E88B0  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game8ItemCave3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn __as__Q34Game8ItemCave7FogParmFRCQ34Game8ItemCave7FogParm, weak
/* 801EB974 001E88B4  80 04 00 04 */	lwz r0, 4(r4)
/* 801EB978 001E88B8  80 A4 00 08 */	lwz r5, 8(r4)
/* 801EB97C 001E88BC  90 03 00 04 */	stw r0, 4(r3)
/* 801EB980 001E88C0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 801EB984 001E88C4  90 A3 00 08 */	stw r5, 8(r3)
/* 801EB988 001E88C8  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 801EB98C 001E88CC  90 03 00 10 */	stw r0, 0x10(r3)
/* 801EB990 001E88D0  80 04 00 18 */	lwz r0, 0x18(r4)
/* 801EB994 001E88D4  90 A3 00 14 */	stw r5, 0x14(r3)
/* 801EB998 001E88D8  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 801EB99C 001E88DC  90 03 00 18 */	stw r0, 0x18(r3)
/* 801EB9A0 001E88E0  80 04 00 20 */	lwz r0, 0x20(r4)
/* 801EB9A4 001E88E4  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 801EB9A8 001E88E8  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 801EB9AC 001E88EC  90 03 00 20 */	stw r0, 0x20(r3)
/* 801EB9B0 001E88F0  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 801EB9B4 001E88F4  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 801EB9B8 001E88F8  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 801EB9BC 001E88FC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801EB9C0 001E8900  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 801EB9C4 001E8904  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 801EB9C8 001E8908  80 04 00 38 */	lwz r0, 0x38(r4)
/* 801EB9CC 001E890C  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 801EB9D0 001E8910  80 A4 00 3C */	lwz r5, 0x3c(r4)
/* 801EB9D4 001E8914  90 03 00 38 */	stw r0, 0x38(r3)
/* 801EB9D8 001E8918  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801EB9DC 001E891C  90 A3 00 3C */	stw r5, 0x3c(r3)
/* 801EB9E0 001E8920  80 A4 00 44 */	lwz r5, 0x44(r4)
/* 801EB9E4 001E8924  90 03 00 40 */	stw r0, 0x40(r3)
/* 801EB9E8 001E8928  80 04 00 48 */	lwz r0, 0x48(r4)
/* 801EB9EC 001E892C  90 A3 00 44 */	stw r5, 0x44(r3)
/* 801EB9F0 001E8930  C0 24 00 4C */	lfs f1, 0x4c(r4)
/* 801EB9F4 001E8934  90 03 00 48 */	stw r0, 0x48(r3)
/* 801EB9F8 001E8938  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 801EB9FC 001E893C  D0 23 00 4C */	stfs f1, 0x4c(r3)
/* 801EBA00 001E8940  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 801EBA04 001E8944  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 801EBA08 001E8948  C0 04 00 58 */	lfs f0, 0x58(r4)
/* 801EBA0C 001E894C  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 801EBA10 001E8950  80 04 00 60 */	lwz r0, 0x60(r4)
/* 801EBA14 001E8954  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 801EBA18 001E8958  80 A4 00 64 */	lwz r5, 0x64(r4)
/* 801EBA1C 001E895C  90 03 00 60 */	stw r0, 0x60(r3)
/* 801EBA20 001E8960  80 04 00 68 */	lwz r0, 0x68(r4)
/* 801EBA24 001E8964  90 A3 00 64 */	stw r5, 0x64(r3)
/* 801EBA28 001E8968  80 A4 00 6C */	lwz r5, 0x6c(r4)
/* 801EBA2C 001E896C  90 03 00 68 */	stw r0, 0x68(r3)
/* 801EBA30 001E8970  80 04 00 70 */	lwz r0, 0x70(r4)
/* 801EBA34 001E8974  90 A3 00 6C */	stw r5, 0x6c(r3)
/* 801EBA38 001E8978  C0 24 00 74 */	lfs f1, 0x74(r4)
/* 801EBA3C 001E897C  90 03 00 70 */	stw r0, 0x70(r3)
/* 801EBA40 001E8980  C0 04 00 78 */	lfs f0, 0x78(r4)
/* 801EBA44 001E8984  D0 23 00 74 */	stfs f1, 0x74(r3)
/* 801EBA48 001E8988  C0 24 00 7C */	lfs f1, 0x7c(r4)
/* 801EBA4C 001E898C  D0 03 00 78 */	stfs f0, 0x78(r3)
/* 801EBA50 001E8990  C0 04 00 80 */	lfs f0, 0x80(r4)
/* 801EBA54 001E8994  D0 23 00 7C */	stfs f1, 0x7c(r3)
/* 801EBA58 001E8998  80 04 00 88 */	lwz r0, 0x88(r4)
/* 801EBA5C 001E899C  D0 03 00 80 */	stfs f0, 0x80(r3)
/* 801EBA60 001E89A0  80 A4 00 8C */	lwz r5, 0x8c(r4)
/* 801EBA64 001E89A4  90 03 00 88 */	stw r0, 0x88(r3)
/* 801EBA68 001E89A8  80 04 00 90 */	lwz r0, 0x90(r4)
/* 801EBA6C 001E89AC  90 A3 00 8C */	stw r5, 0x8c(r3)
/* 801EBA70 001E89B0  80 A4 00 94 */	lwz r5, 0x94(r4)
/* 801EBA74 001E89B4  90 03 00 90 */	stw r0, 0x90(r3)
/* 801EBA78 001E89B8  80 04 00 98 */	lwz r0, 0x98(r4)
/* 801EBA7C 001E89BC  90 A3 00 94 */	stw r5, 0x94(r3)
/* 801EBA80 001E89C0  C0 24 00 9C */	lfs f1, 0x9c(r4)
/* 801EBA84 001E89C4  90 03 00 98 */	stw r0, 0x98(r3)
/* 801EBA88 001E89C8  C0 04 00 A0 */	lfs f0, 0xa0(r4)
/* 801EBA8C 001E89CC  D0 23 00 9C */	stfs f1, 0x9c(r3)
/* 801EBA90 001E89D0  C0 24 00 A4 */	lfs f1, 0xa4(r4)
/* 801EBA94 001E89D4  D0 03 00 A0 */	stfs f0, 0xa0(r3)
/* 801EBA98 001E89D8  C0 04 00 A8 */	lfs f0, 0xa8(r4)
/* 801EBA9C 001E89DC  D0 23 00 A4 */	stfs f1, 0xa4(r3)
/* 801EBAA0 001E89E0  80 04 00 B0 */	lwz r0, 0xb0(r4)
/* 801EBAA4 001E89E4  D0 03 00 A8 */	stfs f0, 0xa8(r3)
/* 801EBAA8 001E89E8  80 A4 00 B4 */	lwz r5, 0xb4(r4)
/* 801EBAAC 001E89EC  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 801EBAB0 001E89F0  80 04 00 B8 */	lwz r0, 0xb8(r4)
/* 801EBAB4 001E89F4  90 A3 00 B4 */	stw r5, 0xb4(r3)
/* 801EBAB8 001E89F8  80 A4 00 BC */	lwz r5, 0xbc(r4)
/* 801EBABC 001E89FC  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 801EBAC0 001E8A00  80 04 00 C0 */	lwz r0, 0xc0(r4)
/* 801EBAC4 001E8A04  90 A3 00 BC */	stw r5, 0xbc(r3)
/* 801EBAC8 001E8A08  88 A4 00 C4 */	lbz r5, 0xc4(r4)
/* 801EBACC 001E8A0C  90 03 00 C0 */	stw r0, 0xc0(r3)
/* 801EBAD0 001E8A10  88 04 00 C5 */	lbz r0, 0xc5(r4)
/* 801EBAD4 001E8A14  98 A3 00 C4 */	stb r5, 0xc4(r3)
/* 801EBAD8 001E8A18  88 A4 00 C6 */	lbz r5, 0xc6(r4)
/* 801EBADC 001E8A1C  98 03 00 C5 */	stb r0, 0xc5(r3)
/* 801EBAE0 001E8A20  88 04 00 C7 */	lbz r0, 0xc7(r4)
/* 801EBAE4 001E8A24  98 A3 00 C6 */	stb r5, 0xc6(r3)
/* 801EBAE8 001E8A28  80 A4 00 CC */	lwz r5, 0xcc(r4)
/* 801EBAEC 001E8A2C  98 03 00 C7 */	stb r0, 0xc7(r3)
/* 801EBAF0 001E8A30  80 04 00 D0 */	lwz r0, 0xd0(r4)
/* 801EBAF4 001E8A34  90 A3 00 CC */	stw r5, 0xcc(r3)
/* 801EBAF8 001E8A38  80 A4 00 D4 */	lwz r5, 0xd4(r4)
/* 801EBAFC 001E8A3C  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 801EBB00 001E8A40  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 801EBB04 001E8A44  90 A3 00 D4 */	stw r5, 0xd4(r3)
/* 801EBB08 001E8A48  90 03 00 D8 */	stw r0, 0xd8(r3)
/* 801EBB0C 001E8A4C  80 04 00 DC */	lwz r0, 0xdc(r4)
/* 801EBB10 001E8A50  88 A4 00 E0 */	lbz r5, 0xe0(r4)
/* 801EBB14 001E8A54  90 03 00 DC */	stw r0, 0xdc(r3)
/* 801EBB18 001E8A58  88 04 00 E1 */	lbz r0, 0xe1(r4)
/* 801EBB1C 001E8A5C  98 A3 00 E0 */	stb r5, 0xe0(r3)
/* 801EBB20 001E8A60  88 A4 00 E2 */	lbz r5, 0xe2(r4)
/* 801EBB24 001E8A64  98 03 00 E1 */	stb r0, 0xe1(r3)
/* 801EBB28 001E8A68  88 04 00 E3 */	lbz r0, 0xe3(r4)
/* 801EBB2C 001E8A6C  98 A3 00 E2 */	stb r5, 0xe2(r3)
/* 801EBB30 001E8A70  80 A4 00 E8 */	lwz r5, 0xe8(r4)
/* 801EBB34 001E8A74  98 03 00 E3 */	stb r0, 0xe3(r3)
/* 801EBB38 001E8A78  80 04 00 EC */	lwz r0, 0xec(r4)
/* 801EBB3C 001E8A7C  90 A3 00 E8 */	stw r5, 0xe8(r3)
/* 801EBB40 001E8A80  80 A4 00 F0 */	lwz r5, 0xf0(r4)
/* 801EBB44 001E8A84  90 03 00 EC */	stw r0, 0xec(r3)
/* 801EBB48 001E8A88  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 801EBB4C 001E8A8C  90 A3 00 F0 */	stw r5, 0xf0(r3)
/* 801EBB50 001E8A90  80 A4 00 F8 */	lwz r5, 0xf8(r4)
/* 801EBB54 001E8A94  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 801EBB58 001E8A98  88 04 00 FC */	lbz r0, 0xfc(r4)
/* 801EBB5C 001E8A9C  90 A3 00 F8 */	stw r5, 0xf8(r3)
/* 801EBB60 001E8AA0  88 A4 00 FD */	lbz r5, 0xfd(r4)
/* 801EBB64 001E8AA4  98 03 00 FC */	stb r0, 0xfc(r3)
/* 801EBB68 001E8AA8  88 04 00 FE */	lbz r0, 0xfe(r4)
/* 801EBB6C 001E8AAC  98 A3 00 FD */	stb r5, 0xfd(r3)
/* 801EBB70 001E8AB0  88 A4 00 FF */	lbz r5, 0xff(r4)
/* 801EBB74 001E8AB4  98 03 00 FE */	stb r0, 0xfe(r3)
/* 801EBB78 001E8AB8  80 04 01 04 */	lwz r0, 0x104(r4)
/* 801EBB7C 001E8ABC  98 A3 00 FF */	stb r5, 0xff(r3)
/* 801EBB80 001E8AC0  80 A4 01 08 */	lwz r5, 0x108(r4)
/* 801EBB84 001E8AC4  90 03 01 04 */	stw r0, 0x104(r3)
/* 801EBB88 001E8AC8  80 04 01 0C */	lwz r0, 0x10c(r4)
/* 801EBB8C 001E8ACC  90 A3 01 08 */	stw r5, 0x108(r3)
/* 801EBB90 001E8AD0  80 A4 01 10 */	lwz r5, 0x110(r4)
/* 801EBB94 001E8AD4  90 03 01 0C */	stw r0, 0x10c(r3)
/* 801EBB98 001E8AD8  80 04 01 14 */	lwz r0, 0x114(r4)
/* 801EBB9C 001E8ADC  90 A3 01 10 */	stw r5, 0x110(r3)
/* 801EBBA0 001E8AE0  C0 24 01 18 */	lfs f1, 0x118(r4)
/* 801EBBA4 001E8AE4  90 03 01 14 */	stw r0, 0x114(r3)
/* 801EBBA8 001E8AE8  C0 04 01 1C */	lfs f0, 0x11c(r4)
/* 801EBBAC 001E8AEC  D0 23 01 18 */	stfs f1, 0x118(r3)
/* 801EBBB0 001E8AF0  C0 24 01 20 */	lfs f1, 0x120(r4)
/* 801EBBB4 001E8AF4  D0 03 01 1C */	stfs f0, 0x11c(r3)
/* 801EBBB8 001E8AF8  C0 04 01 24 */	lfs f0, 0x124(r4)
/* 801EBBBC 001E8AFC  D0 23 01 20 */	stfs f1, 0x120(r3)
/* 801EBBC0 001E8B00  80 04 01 2C */	lwz r0, 0x12c(r4)
/* 801EBBC4 001E8B04  D0 03 01 24 */	stfs f0, 0x124(r3)
/* 801EBBC8 001E8B08  80 A4 01 30 */	lwz r5, 0x130(r4)
/* 801EBBCC 001E8B0C  90 03 01 2C */	stw r0, 0x12c(r3)
/* 801EBBD0 001E8B10  80 04 01 34 */	lwz r0, 0x134(r4)
/* 801EBBD4 001E8B14  90 A3 01 30 */	stw r5, 0x130(r3)
/* 801EBBD8 001E8B18  80 A4 01 38 */	lwz r5, 0x138(r4)
/* 801EBBDC 001E8B1C  90 03 01 34 */	stw r0, 0x134(r3)
/* 801EBBE0 001E8B20  80 04 01 3C */	lwz r0, 0x13c(r4)
/* 801EBBE4 001E8B24  90 A3 01 38 */	stw r5, 0x138(r3)
/* 801EBBE8 001E8B28  C0 24 01 40 */	lfs f1, 0x140(r4)
/* 801EBBEC 001E8B2C  90 03 01 3C */	stw r0, 0x13c(r3)
/* 801EBBF0 001E8B30  C0 04 01 44 */	lfs f0, 0x144(r4)
/* 801EBBF4 001E8B34  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 801EBBF8 001E8B38  C0 24 01 48 */	lfs f1, 0x148(r4)
/* 801EBBFC 001E8B3C  D0 03 01 44 */	stfs f0, 0x144(r3)
/* 801EBC00 001E8B40  C0 04 01 4C */	lfs f0, 0x14c(r4)
/* 801EBC04 001E8B44  D0 23 01 48 */	stfs f1, 0x148(r3)
/* 801EBC08 001E8B48  80 04 01 54 */	lwz r0, 0x154(r4)
/* 801EBC0C 001E8B4C  D0 03 01 4C */	stfs f0, 0x14c(r3)
/* 801EBC10 001E8B50  80 A4 01 58 */	lwz r5, 0x158(r4)
/* 801EBC14 001E8B54  90 03 01 54 */	stw r0, 0x154(r3)
/* 801EBC18 001E8B58  80 04 01 5C */	lwz r0, 0x15c(r4)
/* 801EBC1C 001E8B5C  90 A3 01 58 */	stw r5, 0x158(r3)
/* 801EBC20 001E8B60  80 A4 01 60 */	lwz r5, 0x160(r4)
/* 801EBC24 001E8B64  90 03 01 5C */	stw r0, 0x15c(r3)
/* 801EBC28 001E8B68  80 04 01 64 */	lwz r0, 0x164(r4)
/* 801EBC2C 001E8B6C  90 A3 01 60 */	stw r5, 0x160(r3)
/* 801EBC30 001E8B70  C0 24 01 68 */	lfs f1, 0x168(r4)
/* 801EBC34 001E8B74  90 03 01 64 */	stw r0, 0x164(r3)
/* 801EBC38 001E8B78  C0 04 01 6C */	lfs f0, 0x16c(r4)
/* 801EBC3C 001E8B7C  D0 23 01 68 */	stfs f1, 0x168(r3)
/* 801EBC40 001E8B80  C0 24 01 70 */	lfs f1, 0x170(r4)
/* 801EBC44 001E8B84  D0 03 01 6C */	stfs f0, 0x16c(r3)
/* 801EBC48 001E8B88  C0 04 01 74 */	lfs f0, 0x174(r4)
/* 801EBC4C 001E8B8C  D0 23 01 70 */	stfs f1, 0x170(r3)
/* 801EBC50 001E8B90  D0 03 01 74 */	stfs f0, 0x174(r3)
/* 801EBC54 001E8B94  4E 80 00 20 */	blr 
.endfn __as__Q34Game8ItemCave7FogParmFRCQ34Game8ItemCave7FogParm

.fn __dt__Q34Game8ItemCave3MgrFv, weak
/* 801EBC58 001E8B98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EBC5C 001E8B9C  7C 08 02 A6 */	mflr r0
/* 801EBC60 001E8BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EBC64 001E8BA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EBC68 001E8BA8  7C 9F 23 78 */	mr r31, r4
/* 801EBC6C 001E8BAC  93 C1 00 08 */	stw r30, 8(r1)
/* 801EBC70 001E8BB0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801EBC74 001E8BB4  41 82 00 FC */	beq .L_801EBD70
/* 801EBC78 001E8BB8  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemCave3Mgr@ha
/* 801EBC7C 001E8BBC  38 63 A3 B8 */	addi r3, r3, __vt__Q34Game8ItemCave3Mgr@l
/* 801EBC80 001E8BC0  90 7E 00 00 */	stw r3, 0(r30)
/* 801EBC84 001E8BC4  38 03 00 74 */	addi r0, r3, 0x74
/* 801EBC88 001E8BC8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801EBC8C 001E8BCC  41 82 00 D4 */	beq .L_801EBD60
/* 801EBC90 001E8BD0  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801EBC94 001E8BD4  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801EBC98 001E8BD8  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801EBC9C 001E8BDC  90 7E 00 00 */	stw r3, 0(r30)
/* 801EBCA0 001E8BE0  38 03 00 74 */	addi r0, r3, 0x74
/* 801EBCA4 001E8BE4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801EBCA8 001E8BE8  41 82 00 84 */	beq .L_801EBD2C
/* 801EBCAC 001E8BEC  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801EBCB0 001E8BF0  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801EBCB4 001E8BF4  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801EBCB8 001E8BF8  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801EBCBC 001E8BFC  38 04 00 2C */	addi r0, r4, 0x2c
/* 801EBCC0 001E8C00  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801EBCC4 001E8C04  41 82 00 18 */	beq .L_801EBCDC
/* 801EBCC8 001E8C08  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801EBCCC 001E8C0C  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801EBCD0 001E8C10  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801EBCD4 001E8C14  38 80 00 00 */	li r4, 0
/* 801EBCD8 001E8C18  48 22 58 B1 */	bl __dt__5CNodeFv
.L_801EBCDC:
/* 801EBCDC 001E8C1C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801EBCE0 001E8C20  41 82 00 4C */	beq .L_801EBD2C
/* 801EBCE4 001E8C24  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801EBCE8 001E8C28  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801EBCEC 001E8C2C  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801EBCF0 001E8C30  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801EBCF4 001E8C34  38 03 00 2C */	addi r0, r3, 0x2c
/* 801EBCF8 001E8C38  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801EBCFC 001E8C3C  41 82 00 30 */	beq .L_801EBD2C
/* 801EBD00 001E8C40  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801EBD04 001E8C44  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801EBD08 001E8C48  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801EBD0C 001E8C4C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801EBD10 001E8C50  41 82 00 1C */	beq .L_801EBD2C
/* 801EBD14 001E8C54  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801EBD18 001E8C58  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801EBD1C 001E8C5C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801EBD20 001E8C60  38 80 00 00 */	li r4, 0
/* 801EBD24 001E8C64  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801EBD28 001E8C68  48 22 58 61 */	bl __dt__5CNodeFv
.L_801EBD2C:
/* 801EBD2C 001E8C6C  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801EBD30 001E8C70  41 82 00 30 */	beq .L_801EBD60
/* 801EBD34 001E8C74  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801EBD38 001E8C78  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801EBD3C 001E8C7C  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801EBD40 001E8C80  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801EBD44 001E8C84  41 82 00 1C */	beq .L_801EBD60
/* 801EBD48 001E8C88  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801EBD4C 001E8C8C  38 7E 00 30 */	addi r3, r30, 0x30
/* 801EBD50 001E8C90  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801EBD54 001E8C94  38 80 00 00 */	li r4, 0
/* 801EBD58 001E8C98  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801EBD5C 001E8C9C  48 22 58 2D */	bl __dt__5CNodeFv
.L_801EBD60:
/* 801EBD60 001E8CA0  7F E0 07 35 */	extsh. r0, r31
/* 801EBD64 001E8CA4  40 81 00 0C */	ble .L_801EBD70
/* 801EBD68 001E8CA8  7F C3 F3 78 */	mr r3, r30
/* 801EBD6C 001E8CAC  4B E3 83 49 */	bl __dl__FPv
.L_801EBD70:
/* 801EBD70 001E8CB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EBD74 001E8CB4  7F C3 F3 78 */	mr r3, r30
/* 801EBD78 001E8CB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EBD7C 001E8CBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801EBD80 001E8CC0  7C 08 03 A6 */	mtlr r0
/* 801EBD84 001E8CC4  38 21 00 10 */	addi r1, r1, 0x10
/* 801EBD88 001E8CC8  4E 80 00 20 */	blr 
.endfn __dt__Q34Game8ItemCave3MgrFv

.fn doNew__Q34Game8ItemCave3MgrFv, weak
/* 801EBD8C 001E8CCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EBD90 001E8CD0  7C 08 02 A6 */	mflr r0
/* 801EBD94 001E8CD4  38 60 03 88 */	li r3, 0x388
/* 801EBD98 001E8CD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EBD9C 001E8CDC  4B E3 81 09 */	bl __nw__FUl
/* 801EBDA0 001E8CE0  7C 60 1B 79 */	or. r0, r3, r3
/* 801EBDA4 001E8CE4  41 82 00 0C */	beq .L_801EBDB0
/* 801EBDA8 001E8CE8  4B FF E3 01 */	bl __ct__Q34Game8ItemCave4ItemFv
/* 801EBDAC 001E8CEC  7C 60 1B 78 */	mr r0, r3
.L_801EBDB0:
/* 801EBDB0 001E8CF0  7C 03 03 78 */	mr r3, r0
/* 801EBDB4 001E8CF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EBDB8 001E8CF8  7C 08 03 A6 */	mtlr r0
/* 801EBDBC 001E8CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 801EBDC0 001E8D00  4E 80 00 20 */	blr 
.endfn doNew__Q34Game8ItemCave3MgrFv

.fn generatorGetID__Q34Game8ItemCave3MgrFv, weak
/* 801EBDC4 001E8D04  3C 60 63 61 */	lis r3, 0x63617665@ha
/* 801EBDC8 001E8D08  38 63 76 65 */	addi r3, r3, 0x63617665@l
/* 801EBDCC 001E8D0C  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game8ItemCave3MgrFv

.fn generatorLocalVersion__Q34Game8ItemCave3MgrFv, weak
/* 801EBDD0 001E8D10  3C 60 30 30 */	lis r3, 0x30303032@ha
/* 801EBDD4 001E8D14  38 63 30 32 */	addi r3, r3, 0x30303032@l
/* 801EBDD8 001E8D18  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q34Game8ItemCave3MgrFv

.fn getCreatureName__Q34Game8ItemCave4ItemFv, weak
/* 801EBDDC 001E8D1C  38 62 B7 20 */	addi r3, r2, lbl_80519A80@sda21
/* 801EBDE0 001E8D20  4E 80 00 20 */	blr 
.endfn getCreatureName__Q34Game8ItemCave4ItemFv

.fn getFaceDir__Q34Game8ItemCave4ItemFv, weak
/* 801EBDE4 001E8D24  C0 23 01 FC */	lfs f1, 0x1fc(r3)
/* 801EBDE8 001E8D28  4E 80 00 20 */	blr 
.endfn getFaceDir__Q34Game8ItemCave4ItemFv

.fn "doAI__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>Fv", weak
/* 801EBDEC 001E8D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EBDF0 001E8D30  7C 08 02 A6 */	mflr r0
/* 801EBDF4 001E8D34  7C 64 1B 78 */	mr r4, r3
/* 801EBDF8 001E8D38  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EBDFC 001E8D3C  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801EBE00 001E8D40  81 83 00 00 */	lwz r12, 0(r3)
/* 801EBE04 001E8D44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EBE08 001E8D48  7D 89 03 A6 */	mtctr r12
/* 801EBE0C 001E8D4C  4E 80 04 21 */	bctrl 
/* 801EBE10 001E8D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EBE14 001E8D54  7C 08 03 A6 */	mtlr r0
/* 801EBE18 001E8D58  38 21 00 10 */	addi r1, r1, 0x10
/* 801EBE1C 001E8D5C  4E 80 00 20 */	blr 
.endfn "doAI__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>Fv"

.fn "onDamage__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Itemf", weak
/* 801EBE20 001E8D60  4E 80 00 20 */	blr 
.endfn "onDamage__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Itemf"

.fn "onKeyEvent__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent", weak
/* 801EBE24 001E8D64  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent"

.fn "onBounce__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle", weak
/* 801EBE28 001E8D68  4E 80 00 20 */	blr 
.endfn "onBounce__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle"

.fn "onPlatCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent", weak
/* 801EBE2C 001E8D6C  4E 80 00 20 */	blr 
.endfn "onPlatCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent"

.fn "onCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent", weak
/* 801EBE30 001E8D70  4E 80 00 20 */	blr 
.endfn "onCollision__Q24Game32ItemState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent"

.fn "init__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ24Game8StateArg", weak
/* 801EBE34 001E8D74  4E 80 00 20 */	blr 
.endfn "init__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemPQ24Game8StateArg"

.fn "exec__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item", weak
/* 801EBE38 001E8D78  4E 80 00 20 */	blr 
.endfn "exec__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"

.fn "cleanup__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item", weak
/* 801EBE3C 001E8D7C  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"

.fn "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item", weak
/* 801EBE40 001E8D80  4E 80 00 20 */	blr 
.endfn "resume__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"

.fn "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item", weak
/* 801EBE44 001E8D84  4E 80 00 20 */	blr 
.endfn "restart__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"

.fn "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg", weak
/* 801EBE48 001E8D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EBE4C 001E8D8C  7C 08 02 A6 */	mflr r0
/* 801EBE50 001E8D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EBE54 001E8D94  80 63 00 08 */	lwz r3, 8(r3)
/* 801EBE58 001E8D98  81 83 00 00 */	lwz r12, 0(r3)
/* 801EBE5C 001E8D9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EBE60 001E8DA0  7D 89 03 A6 */	mtctr r12
/* 801EBE64 001E8DA4  4E 80 04 21 */	bctrl 
/* 801EBE68 001E8DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EBE6C 001E8DAC  7C 08 03 A6 */	mtlr r0
/* 801EBE70 001E8DB0  38 21 00 10 */	addi r1, r1, 0x10
/* 801EBE74 001E8DB4  4E 80 00 20 */	blr 
.endfn "transit__Q24Game31FSMState<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"

.fn "init__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item", weak
/* 801EBE78 001E8DB8  4E 80 00 20 */	blr 
.endfn "init__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"

.fn "create__Q24Game35StateMachine<Q34Game8ItemCave4Item>Fi", weak
/* 801EBE7C 001E8DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EBE80 001E8DC0  7C 08 02 A6 */	mflr r0
/* 801EBE84 001E8DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EBE88 001E8DC8  38 00 00 00 */	li r0, 0
/* 801EBE8C 001E8DCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EBE90 001E8DD0  7C 7F 1B 78 */	mr r31, r3
/* 801EBE94 001E8DD4  90 83 00 0C */	stw r4, 0xc(r3)
/* 801EBE98 001E8DD8  90 03 00 08 */	stw r0, 8(r3)
/* 801EBE9C 001E8DDC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801EBEA0 001E8DE0  54 03 10 3A */	slwi r3, r0, 2
/* 801EBEA4 001E8DE4  4B E3 81 09 */	bl __nwa__FUl
/* 801EBEA8 001E8DE8  90 7F 00 04 */	stw r3, 4(r31)
/* 801EBEAC 001E8DEC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801EBEB0 001E8DF0  54 03 10 3A */	slwi r3, r0, 2
/* 801EBEB4 001E8DF4  4B E3 80 F9 */	bl __nwa__FUl
/* 801EBEB8 001E8DF8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801EBEBC 001E8DFC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801EBEC0 001E8E00  54 03 10 3A */	slwi r3, r0, 2
/* 801EBEC4 001E8E04  4B E3 80 E9 */	bl __nwa__FUl
/* 801EBEC8 001E8E08  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801EBECC 001E8E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EBED0 001E8E10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EBED4 001E8E14  7C 08 03 A6 */	mtlr r0
/* 801EBED8 001E8E18  38 21 00 10 */	addi r1, r1, 0x10
/* 801EBEDC 001E8E1C  4E 80 00 20 */	blr 
.endfn "create__Q24Game35StateMachine<Q34Game8ItemCave4Item>Fi"

.fn "size__8Parm<Uc>Fv", weak
/* 801EBEE0 001E8E20  38 60 00 01 */	li r3, 1
/* 801EBEE4 001E8E24  4E 80 00 20 */	blr 
.endfn "size__8Parm<Uc>Fv"

.fn "transit__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg", weak
/* 801EBEE8 001E8E28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EBEEC 001E8E2C  7C 08 02 A6 */	mflr r0
/* 801EBEF0 001E8E30  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EBEF4 001E8E34  54 A0 10 3A */	slwi r0, r5, 2
/* 801EBEF8 001E8E38  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801EBEFC 001E8E3C  7C 7B 1B 78 */	mr r27, r3
/* 801EBF00 001E8E40  7C 9C 23 78 */	mr r28, r4
/* 801EBF04 001E8E44  7C DD 33 78 */	mr r29, r6
/* 801EBF08 001E8E48  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801EBF0C 001E8E4C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801EBF10 001E8E50  28 1E 00 00 */	cmplwi r30, 0
/* 801EBF14 001E8E54  7F E3 00 2E */	lwzx r31, r3, r0
/* 801EBF18 001E8E58  41 82 00 20 */	beq .L_801EBF38
/* 801EBF1C 001E8E5C  7F C3 F3 78 */	mr r3, r30
/* 801EBF20 001E8E60  81 9E 00 00 */	lwz r12, 0(r30)
/* 801EBF24 001E8E64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EBF28 001E8E68  7D 89 03 A6 */	mtctr r12
/* 801EBF2C 001E8E6C  4E 80 04 21 */	bctrl 
/* 801EBF30 001E8E70  80 1E 00 04 */	lwz r0, 4(r30)
/* 801EBF34 001E8E74  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801EBF38:
/* 801EBF38 001E8E78  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801EBF3C 001E8E7C  7C 1F 00 00 */	cmpw r31, r0
/* 801EBF40 001E8E80  41 80 00 08 */	blt .L_801EBF48
.L_801EBF44:
/* 801EBF44 001E8E84  48 00 00 00 */	b .L_801EBF44
.L_801EBF48:
/* 801EBF48 001E8E88  80 7B 00 04 */	lwz r3, 4(r27)
/* 801EBF4C 001E8E8C  57 E0 10 3A */	slwi r0, r31, 2
/* 801EBF50 001E8E90  7F 84 E3 78 */	mr r4, r28
/* 801EBF54 001E8E94  7F A5 EB 78 */	mr r5, r29
/* 801EBF58 001E8E98  7C 63 00 2E */	lwzx r3, r3, r0
/* 801EBF5C 001E8E9C  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801EBF60 001E8EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EBF64 001E8EA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EBF68 001E8EA8  7D 89 03 A6 */	mtctr r12
/* 801EBF6C 001E8EAC  4E 80 04 21 */	bctrl 
/* 801EBF70 001E8EB0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801EBF74 001E8EB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EBF78 001E8EB8  7C 08 03 A6 */	mtlr r0
/* 801EBF7C 001E8EBC  38 21 00 20 */	addi r1, r1, 0x20
/* 801EBF80 001E8EC0  4E 80 00 20 */	blr 
.endfn "transit__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"

.fn "registerState__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ24Game31FSMState<Q34Game8ItemCave4Item>", weak
/* 801EBF84 001E8EC4  80 C3 00 08 */	lwz r6, 8(r3)
/* 801EBF88 001E8EC8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801EBF8C 001E8ECC  7C 06 00 00 */	cmpw r6, r0
/* 801EBF90 001E8ED0  4C 80 00 20 */	bgelr 
/* 801EBF94 001E8ED4  80 A3 00 04 */	lwz r5, 4(r3)
/* 801EBF98 001E8ED8  54 C0 10 3A */	slwi r0, r6, 2
/* 801EBF9C 001E8EDC  7C 85 01 2E */	stwx r4, r5, r0
/* 801EBFA0 001E8EE0  80 A4 00 04 */	lwz r5, 4(r4)
/* 801EBFA4 001E8EE4  2C 05 00 00 */	cmpwi r5, 0
/* 801EBFA8 001E8EE8  41 80 00 10 */	blt .L_801EBFB8
/* 801EBFAC 001E8EEC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801EBFB0 001E8EF0  7C 05 00 00 */	cmpw r5, r0
/* 801EBFB4 001E8EF4  41 80 00 0C */	blt .L_801EBFC0
.L_801EBFB8:
/* 801EBFB8 001E8EF8  38 00 00 00 */	li r0, 0
/* 801EBFBC 001E8EFC  48 00 00 08 */	b .L_801EBFC4
.L_801EBFC0:
/* 801EBFC0 001E8F00  38 00 00 01 */	li r0, 1
.L_801EBFC4:
/* 801EBFC4 001E8F04  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801EBFC8 001E8F08  4D 82 00 20 */	beqlr 
/* 801EBFCC 001E8F0C  90 64 00 08 */	stw r3, 8(r4)
/* 801EBFD0 001E8F10  80 03 00 08 */	lwz r0, 8(r3)
/* 801EBFD4 001E8F14  80 C4 00 04 */	lwz r6, 4(r4)
/* 801EBFD8 001E8F18  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801EBFDC 001E8F1C  54 00 10 3A */	slwi r0, r0, 2
/* 801EBFE0 001E8F20  7C C5 01 2E */	stwx r6, r5, r0
/* 801EBFE4 001E8F24  80 04 00 04 */	lwz r0, 4(r4)
/* 801EBFE8 001E8F28  80 A3 00 08 */	lwz r5, 8(r3)
/* 801EBFEC 001E8F2C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801EBFF0 001E8F30  54 00 10 3A */	slwi r0, r0, 2
/* 801EBFF4 001E8F34  7C A4 01 2E */	stwx r5, r4, r0
/* 801EBFF8 001E8F38  80 83 00 08 */	lwz r4, 8(r3)
/* 801EBFFC 001E8F3C  38 04 00 01 */	addi r0, r4, 1
/* 801EC000 001E8F40  90 03 00 08 */	stw r0, 8(r3)
/* 801EC004 001E8F44  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ24Game31FSMState<Q34Game8ItemCave4Item>"

.fn "exec__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item", weak
/* 801EC008 001E8F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC00C 001E8F4C  7C 08 02 A6 */	mflr r0
/* 801EC010 001E8F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EC014 001E8F54  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801EC018 001E8F58  28 03 00 00 */	cmplwi r3, 0
/* 801EC01C 001E8F5C  41 82 00 14 */	beq .L_801EC030
/* 801EC020 001E8F60  81 83 00 00 */	lwz r12, 0(r3)
/* 801EC024 001E8F64  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801EC028 001E8F68  7D 89 03 A6 */	mtctr r12
/* 801EC02C 001E8F6C  4E 80 04 21 */	bctrl 
.L_801EC030:
/* 801EC030 001E8F70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EC034 001E8F74  7C 08 03 A6 */	mtlr r0
/* 801EC038 001E8F78  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC03C 001E8F7C  4E 80 00 20 */	blr 
.endfn "exec__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"

.fn "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent", weak
/* 801EC040 001E8F80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC044 001E8F84  7C 08 02 A6 */	mflr r0
/* 801EC048 001E8F88  7C 66 1B 78 */	mr r6, r3
/* 801EC04C 001E8F8C  7C 85 23 78 */	mr r5, r4
/* 801EC050 001E8F90  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EC054 001E8F94  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801EC058 001E8F98  28 03 00 00 */	cmplwi r3, 0
/* 801EC05C 001E8F9C  41 82 00 18 */	beq .L_801EC074
/* 801EC060 001E8FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EC064 001E8FA4  7C C4 33 78 */	mr r4, r6
/* 801EC068 001E8FA8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801EC06C 001E8FAC  7D 89 03 A6 */	mtctr r12
/* 801EC070 001E8FB0  4E 80 04 21 */	bctrl 
.L_801EC074:
/* 801EC074 001E8FB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EC078 001E8FB8  7C 08 03 A6 */	mtlr r0
/* 801EC07C 001E8FBC  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC080 001E8FC0  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"

.fn "platCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9PlatEvent", weak
/* 801EC084 001E8FC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC088 001E8FC8  7C 08 02 A6 */	mflr r0
/* 801EC08C 001E8FCC  7C 66 1B 78 */	mr r6, r3
/* 801EC090 001E8FD0  7C 85 23 78 */	mr r5, r4
/* 801EC094 001E8FD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EC098 001E8FD8  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801EC09C 001E8FDC  28 03 00 00 */	cmplwi r3, 0
/* 801EC0A0 001E8FE0  41 82 00 18 */	beq .L_801EC0B8
/* 801EC0A4 001E8FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801EC0A8 001E8FE8  7C C4 33 78 */	mr r4, r6
/* 801EC0AC 001E8FEC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801EC0B0 001E8FF0  7D 89 03 A6 */	mtctr r12
/* 801EC0B4 001E8FF4  4E 80 04 21 */	bctrl 
.L_801EC0B8:
/* 801EC0B8 001E8FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EC0BC 001E8FFC  7C 08 03 A6 */	mtlr r0
/* 801EC0C0 001E9000  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC0C4 001E9004  4E 80 00 20 */	blr 
.endfn "platCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9PlatEvent"

.fn "collisionCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9CollEvent", weak
/* 801EC0C8 001E9008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC0CC 001E900C  7C 08 02 A6 */	mflr r0
/* 801EC0D0 001E9010  7C 66 1B 78 */	mr r6, r3
/* 801EC0D4 001E9014  7C 85 23 78 */	mr r5, r4
/* 801EC0D8 001E9018  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EC0DC 001E901C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801EC0E0 001E9020  28 03 00 00 */	cmplwi r3, 0
/* 801EC0E4 001E9024  41 82 00 18 */	beq .L_801EC0FC
/* 801EC0E8 001E9028  81 83 00 00 */	lwz r12, 0(r3)
/* 801EC0EC 001E902C  7C C4 33 78 */	mr r4, r6
/* 801EC0F0 001E9030  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801EC0F4 001E9034  7D 89 03 A6 */	mtctr r12
/* 801EC0F8 001E9038  4E 80 04 21 */	bctrl 
.L_801EC0FC:
/* 801EC0FC 001E903C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EC100 001E9040  7C 08 03 A6 */	mtlr r0
/* 801EC104 001E9044  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC108 001E9048  4E 80 00 20 */	blr 
.endfn "collisionCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRQ24Game9CollEvent"

.fn "bounceCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FPQ23Sys8Triangle", weak
/* 801EC10C 001E904C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC110 001E9050  7C 08 02 A6 */	mflr r0
/* 801EC114 001E9054  7C 66 1B 78 */	mr r6, r3
/* 801EC118 001E9058  7C 85 23 78 */	mr r5, r4
/* 801EC11C 001E905C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EC120 001E9060  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801EC124 001E9064  28 03 00 00 */	cmplwi r3, 0
/* 801EC128 001E9068  41 82 00 18 */	beq .L_801EC140
/* 801EC12C 001E906C  81 83 00 00 */	lwz r12, 0(r3)
/* 801EC130 001E9070  7C C4 33 78 */	mr r4, r6
/* 801EC134 001E9074  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801EC138 001E9078  7D 89 03 A6 */	mtctr r12
/* 801EC13C 001E907C  4E 80 04 21 */	bctrl 
.L_801EC140:
/* 801EC140 001E9080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EC144 001E9084  7C 08 03 A6 */	mtlr r0
/* 801EC148 001E9088  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC14C 001E908C  4E 80 00 20 */	blr 
.endfn "bounceCallback__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FPQ23Sys8Triangle"

.fn __sinit_itemCave_cpp, local
/* 801EC150 001E9090  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801EC154 001E9094  38 00 FF FF */	li r0, -1
/* 801EC158 001E9098  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801EC15C 001E909C  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 801EC160 001E90A0  90 0D 94 98 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801EC164 001E90A4  D4 03 A3 A0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801EC168 001E90A8  D0 0D 94 9C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801EC16C 001E90AC  D0 03 00 04 */	stfs f0, 4(r3)
/* 801EC170 001E90B0  D0 03 00 08 */	stfs f0, 8(r3)
/* 801EC174 001E90B4  4E 80 00 20 */	blr 
.endfn __sinit_itemCave_cpp

.fn "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent", weak
/* 801EC178 001E90B8  38 63 FE 88 */	addi r3, r3, -376
/* 801EC17C 001E90BC  4B FF FE C4 */	b "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"
.endfn "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemCave4Item,Q34Game8ItemCave3FSM,Q34Game8ItemCave5State>FRCQ28SysShape8KeyEvent"

.fn "@48@__dt__Q34Game8ItemCave3MgrFv", weak
/* 801EC180 001E90C0  38 63 FF D0 */	addi r3, r3, -48
/* 801EC184 001E90C4  4B FF FA D4 */	b __dt__Q34Game8ItemCave3MgrFv
.endfn "@48@__dt__Q34Game8ItemCave3MgrFv"
