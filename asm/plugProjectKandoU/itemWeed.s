.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemWeed_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80481FC0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80481FC0
.balign 4
.obj lbl_80481FCC, local
	.asciz "itemWeed"
.endobj lbl_80481FCC
.balign 4
.obj lbl_80481FD8, local
	.asciz "itemWeed.cpp"
.endobj lbl_80481FD8
.balign 4
.obj lbl_80481FE8, local
	.asciz "P2Assert"
.endobj lbl_80481FE8
.balign 4
.obj lbl_80481FF4, local # Shift-JIS
	.4byte 0x835F8381
	.4byte 0x8362834E
	.2byte 0x0A00
.endobj lbl_80481FF4
.balign 4
.obj lbl_80482000, local
	.asciz "flockMgr.h"
.endobj lbl_80482000
.balign 4
.obj lbl_8048200C, local # Shift-JIS
	.4byte 0x919082C6
	.4byte 0x8FAC90CE
	.byte 0
.endobj lbl_8048200C
.balign 4
.obj lbl_80482018, local
	.asciz "user/Kando/objects/weed"
.endobj lbl_80482018
.balign 4
.obj lbl_80482030, local
	.asciz "weed1.bmd"
.endobj lbl_80482030
.balign 4
.obj lbl_8048203C, local
	.asciz "stone1.bmd"
.endobj lbl_8048203C
.balign 4
.obj lbl_80482048, local
	.asciz "stone2.bmd"
.endobj lbl_80482048
.balign 4
.obj lbl_80482054, local
	.asciz "stone3.bmd"
.endobj lbl_80482054
.balign 4
.obj lbl_80482060, local # Shift-JIS
	.4byte 0x092382A4
	.4byte 0x82B682E1
	.4byte 0x89A49094
	.4byte 0x0D0A0000
.endobj lbl_80482060
.balign 4
.obj lbl_80482070, local # Shift-JIS
	.4byte 0x092390CE
	.4byte 0x82A99190
	.4byte 0x82A90D0A
	.byte 0
.endobj lbl_80482070
.balign 4
.obj lbl_80482080, local
	.asciz "ItemWeed::InitArg"
.endobj lbl_80482080
.balign 4
.obj lbl_80482094, local
	.asciz "ItemHoney::InitArg"
.endobj lbl_80482094

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game8ItemWeed7InitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q34Game8ItemWeed7InitArgFv
.endobj __vt__Q34Game8ItemWeed7InitArg
.obj __vt__11GenWeedParm, weak
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.endobj __vt__11GenWeedParm
.obj __vt__Q34Game8ItemWeed9WaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4ItemPQ24Game8StateArg
	.4byte exec__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item
	.4byte cleanup__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game8ItemWeed9WaitState
.obj __vt__Q34Game8ItemWeed3Mgr, global
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
	.4byte "generatorBirth__Q34Game8ItemWeed3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game8ItemWeed3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game8ItemWeed3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game8ItemWeed3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game8ItemWeed3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game8ItemWeed3MgrFv
	.4byte getCaveName__Q34Game8ItemWeed3MgrFi
	.4byte getCaveID__Q34Game8ItemWeed3MgrFPc
.endobj __vt__Q34Game8ItemWeed3Mgr
.obj __vt__Q34Game8ItemWeed4Item, global
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
	.4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
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
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q34Game8ItemWeed4ItemFRQ24Game19InteractFlockAttack
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
	.4byte "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
	.4byte doSimpleDraw__Q34Game8ItemWeed4ItemFP8Viewport
.endobj __vt__Q34Game8ItemWeed4Item
.obj __vt__Q44Game8ItemWeed4Item10DummyShape, weak
	.4byte 0
	.4byte 0
	.4byte getMatrix__Q44Game8ItemWeed4Item10DummyShapeFi
	.4byte isModel__Q28SysShape9MtxObjectFv
.endobj __vt__Q44Game8ItemWeed4Item10DummyShape
.obj "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"
.obj "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"
.obj "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>", weak
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
	.4byte "bounceCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>Fv"
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
	.4byte "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"
.obj __vt__Q34Game8ItemWeed5State, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game8ItemWeed5State
.obj "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
	.4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
.endobj "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>"
.obj "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>"
.obj __vt__Q34Game8ItemWeed3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8ItemWeed3FSMFPQ34Game8ItemWeed4Item
	.4byte "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
	.4byte "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
.endobj __vt__Q34Game8ItemWeed3FSM
.obj __vt__Q34Game8ItemWeed7WeedMgr, global
	.4byte 0
	.4byte 0
	.4byte "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
	.4byte "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
	.4byte "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock"
	.4byte do_update__Q34Game8ItemWeed7WeedMgrFv
	.4byte do_update_boundSphere__Q34Game8ItemWeed7WeedMgrFv
	.4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
	.4byte isWeed__Q24Game12BaseFlockMgrFi
	.4byte fear__Q24Game12BaseFlockMgrFi
	.4byte 0
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
.endobj __vt__Q34Game8ItemWeed7WeedMgr
.obj "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>", weak
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
.endobj "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"
.obj "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>", weak
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
	.4byte "@28@doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
	.4byte "doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff"
	.4byte "doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
	.4byte "birth__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "clearMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "onAlloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endobj "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"
.obj "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>", weak
	.4byte 0
	.4byte 0
	.4byte "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
	.4byte "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
	.4byte "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
	.4byte "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock"
	.4byte do_update__Q24Game12BaseFlockMgrFv
	.4byte 0
	.4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
	.4byte isWeed__Q24Game12BaseFlockMgrFi
	.4byte fear__Q24Game12BaseFlockMgrFi
	.4byte 0
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
.endobj "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"
.obj "__vt__32Container<Q34Game8ItemWeed4Weed>", weak
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
.endobj "__vt__32Container<Q34Game8ItemWeed4Weed>"
.obj __vt__Q34Game8ItemWeed4Weed, global
	.4byte 0
	.4byte 0
	.4byte makeMatrix__Q34Game8ItemWeed4WeedFv
	.4byte isVisible__Q24Game6TFlockFv
	.4byte isWeed__Q34Game8ItemWeed4WeedFv
	.4byte fear__Q24Game6TFlockFv
	.4byte getRadius__Q24Game6TFlockFv
	.4byte damaged__Q34Game8ItemWeed4WeedFf
	.4byte constructor__Q24Game6TFlockFv
.endobj __vt__Q34Game8ItemWeed4Weed
.obj "__vt__31Iterator<Q34Game8ItemWeed4Weed>", weak
	.4byte 0
	.4byte 0
	.4byte "first__31Iterator<Q34Game8ItemWeed4Weed>Fv"
	.4byte "next__31Iterator<Q34Game8ItemWeed4Weed>Fv"
	.4byte "isDone__31Iterator<Q34Game8ItemWeed4Weed>Fv"
	.4byte "__ml__31Iterator<Q34Game8ItemWeed4Weed>Fv"
.endobj "__vt__31Iterator<Q34Game8ItemWeed4Weed>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj mgr__Q24Game8ItemWeed, global
	.skip 0x4
.endobj mgr__Q24Game8ItemWeed

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519EF8, local
	.float 0.0
.endobj lbl_80519EF8
.obj lbl_80519EFC, local
	.float 1.0
.endobj lbl_80519EFC
.obj lbl_80519F00, local
	.float 32768.0
.endobj lbl_80519F00
.obj lbl_80519F04, local # tau
	.float 6.2831855
.endobj lbl_80519F04
.balign 8
.obj lbl_80519F08, local
	.8byte 0x4330000080000000
.endobj lbl_80519F08
.obj lbl_80519F10, local
	.float 60.0
.endobj lbl_80519F10
.obj lbl_80519F14, local
	.float 3.0
.endobj lbl_80519F14
.obj lbl_80519F18, local
	.float 325.9493
.endobj lbl_80519F18
.obj lbl_80519F1C, local
	.float -325.9493
.endobj lbl_80519F1C
.obj lbl_80519F20, local
	.float 75.0
.endobj lbl_80519F20
.obj lbl_80519F24, local
	.float 0.92
.endobj lbl_80519F24
.obj lbl_80519F28, local
	.float 10.0
.endobj lbl_80519F28
.obj lbl_80519F2C, local
	.float 2.0
.endobj lbl_80519F2C
.obj lbl_80519F30, local # pi
	.float 3.1415927
.endobj lbl_80519F30
.obj lbl_80519F34, local
	.float 30.0
.endobj lbl_80519F34
.obj lbl_80519F38, local
	.float 200.0
.endobj lbl_80519F38
.balign 4
.obj lbl_80519F3C, local
	.asciz "arc.szs"
.endobj lbl_80519F3C
.balign 4
.obj lbl_80519F44, local
	.asciz "weed"
.endobj lbl_80519F44
.balign 4
.obj lbl_80519F4C, local
	.asciz "Weed"
.endobj lbl_80519F4C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game8ItemWeed4WeedFv, global
/* 8020F280 0020C1C0  3C A0 80 4C */	lis r5, __vt__Q24Game6TFlock@ha
/* 8020F284 0020C1C4  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemWeed4Weed@ha
/* 8020F288 0020C1C8  38 05 FA 64 */	addi r0, r5, __vt__Q24Game6TFlock@l
/* 8020F28C 0020C1CC  38 A0 00 00 */	li r5, 0
/* 8020F290 0020C1D0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8020F294 0020C1D4  38 04 03 FC */	addi r0, r4, __vt__Q34Game8ItemWeed4Weed@l
/* 8020F298 0020C1D8  C0 02 BB 98 */	lfs f0, lbl_80519EF8@sda21(r2)
/* 8020F29C 0020C1DC  98 A3 00 40 */	stb r5, 0x40(r3)
/* 8020F2A0 0020C1E0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8020F2A4 0020C1E4  D0 03 00 00 */	stfs f0, 0(r3)
/* 8020F2A8 0020C1E8  D0 03 00 04 */	stfs f0, 4(r3)
/* 8020F2AC 0020C1EC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8020F2B0 0020C1F0  90 A3 00 50 */	stw r5, 0x50(r3)
/* 8020F2B4 0020C1F4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8ItemWeed4WeedFv

.fn damaged__Q34Game8ItemWeed4WeedFf, global
/* 8020F2B8 0020C1F8  38 60 00 01 */	li r3, 1
/* 8020F2BC 0020C1FC  4E 80 00 20 */	blr 
.endfn damaged__Q34Game8ItemWeed4WeedFf

.fn makeMatrix__Q34Game8ItemWeed4WeedFv, global
/* 8020F2C0 0020C200  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8020F2C4 0020C204  7C 08 02 A6 */	mflr r0
/* 8020F2C8 0020C208  90 01 00 44 */	stw r0, 0x44(r1)
/* 8020F2CC 0020C20C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8020F2D0 0020C210  7C 7F 1B 78 */	mr r31, r3
/* 8020F2D4 0020C214  4B EB A2 CD */	bl rand
/* 8020F2D8 0020C218  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020F2DC 0020C21C  3C 00 43 30 */	lis r0, 0x4330
/* 8020F2E0 0020C220  90 61 00 34 */	stw r3, 0x34(r1)
/* 8020F2E4 0020C224  38 7F 00 10 */	addi r3, r31, 0x10
/* 8020F2E8 0020C228  C0 22 BB 98 */	lfs f1, lbl_80519EF8@sda21(r2)
/* 8020F2EC 0020C22C  38 81 00 14 */	addi r4, r1, 0x14
/* 8020F2F0 0020C230  90 01 00 30 */	stw r0, 0x30(r1)
/* 8020F2F4 0020C234  38 A1 00 20 */	addi r5, r1, 0x20
/* 8020F2F8 0020C238  C8 62 BB A8 */	lfd f3, lbl_80519F08@sda21(r2)
/* 8020F2FC 0020C23C  38 C1 00 08 */	addi r6, r1, 8
/* 8020F300 0020C240  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8020F304 0020C244  C0 42 BB A0 */	lfs f2, lbl_80519F00@sda21(r2)
/* 8020F308 0020C248  EC 60 18 28 */	fsubs f3, f0, f3
/* 8020F30C 0020C24C  C0 02 BB A4 */	lfs f0, lbl_80519F04@sda21(r2)
/* 8020F310 0020C250  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8020F314 0020C254  EC 43 10 24 */	fdivs f2, f3, f2
/* 8020F318 0020C258  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8020F31C 0020C25C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8020F320 0020C260  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8020F324 0020C264  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 8020F328 0020C268  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8020F32C 0020C26C  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 8020F330 0020C270  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8020F334 0020C274  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8020F338 0020C278  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8020F33C 0020C27C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8020F340 0020C280  D0 01 00 08 */	stfs f0, 8(r1)
/* 8020F344 0020C284  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8020F348 0020C288  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8020F34C 0020C28C  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8020F350 0020C290  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8020F354 0020C294  48 21 8F 85 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8020F358 0020C298  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8020F35C 0020C29C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8020F360 0020C2A0  7C 08 03 A6 */	mtlr r0
/* 8020F364 0020C2A4  38 21 00 40 */	addi r1, r1, 0x40
/* 8020F368 0020C2A8  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game8ItemWeed4WeedFv

.fn "__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 8020F36C 0020C2AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F370 0020C2B0  7C 08 02 A6 */	mflr r0
/* 8020F374 0020C2B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F378 0020C2B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F37C 0020C2BC  7C 9F 23 78 */	mr r31, r4
/* 8020F380 0020C2C0  93 C1 00 08 */	stw r30, 8(r1)
/* 8020F384 0020C2C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020F388 0020C2C8  41 82 00 C8 */	beq .L_8020F450
/* 8020F38C 0020C2CC  3C 60 80 4C */	lis r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
/* 8020F390 0020C2D0  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020F394 0020C2D4  38 63 03 60 */	addi r3, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
/* 8020F398 0020C2D8  90 7E 00 00 */	stw r3, 0(r30)
/* 8020F39C 0020C2DC  38 03 00 30 */	addi r0, r3, 0x30
/* 8020F3A0 0020C2E0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020F3A4 0020C2E4  41 82 00 68 */	beq .L_8020F40C
/* 8020F3A8 0020C2E8  3C 60 80 4C */	lis r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 8020F3AC 0020C2EC  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020F3B0 0020C2F0  38 63 02 D4 */	addi r3, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 8020F3B4 0020C2F4  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8020F3B8 0020C2F8  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020F3BC 0020C2FC  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8020F3C0 0020C300  41 82 00 4C */	beq .L_8020F40C
/* 8020F3C4 0020C304  3C 60 80 4C */	lis r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 8020F3C8 0020C308  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020F3CC 0020C30C  38 63 02 58 */	addi r3, r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 8020F3D0 0020C310  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8020F3D4 0020C314  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020F3D8 0020C318  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8020F3DC 0020C31C  41 82 00 30 */	beq .L_8020F40C
/* 8020F3E0 0020C320  3C 60 80 4C */	lis r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 8020F3E4 0020C324  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020F3E8 0020C328  38 03 03 D0 */	addi r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 8020F3EC 0020C32C  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8020F3F0 0020C330  41 82 00 1C */	beq .L_8020F40C
/* 8020F3F4 0020C334  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020F3F8 0020C338  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8020F3FC 0020C33C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020F400 0020C340  38 80 00 00 */	li r4, 0
/* 8020F404 0020C344  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8020F408 0020C348  48 20 21 81 */	bl __dt__5CNodeFv
.L_8020F40C:
/* 8020F40C 0020C34C  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8020F410 0020C350  41 82 00 30 */	beq .L_8020F440
/* 8020F414 0020C354  3C 60 80 4C */	lis r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 8020F418 0020C358  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8020F41C 0020C35C  38 03 03 D0 */	addi r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 8020F420 0020C360  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020F424 0020C364  41 82 00 1C */	beq .L_8020F440
/* 8020F428 0020C368  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020F42C 0020C36C  38 7E 00 20 */	addi r3, r30, 0x20
/* 8020F430 0020C370  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020F434 0020C374  38 80 00 00 */	li r4, 0
/* 8020F438 0020C378  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020F43C 0020C37C  48 20 21 4D */	bl __dt__5CNodeFv
.L_8020F440:
/* 8020F440 0020C380  7F E0 07 35 */	extsh. r0, r31
/* 8020F444 0020C384  40 81 00 0C */	ble .L_8020F450
/* 8020F448 0020C388  7F C3 F3 78 */	mr r3, r30
/* 8020F44C 0020C38C  4B E1 4C 69 */	bl __dl__FPv
.L_8020F450:
/* 8020F450 0020C390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F454 0020C394  7F C3 F3 78 */	mr r3, r30
/* 8020F458 0020C398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F45C 0020C39C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020F460 0020C3A0  7C 08 03 A6 */	mtlr r0
/* 8020F464 0020C3A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F468 0020C3A8  4E 80 00 20 */	blr 
.endfn "__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "__dt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 8020F46C 0020C3AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F470 0020C3B0  7C 08 02 A6 */	mflr r0
/* 8020F474 0020C3B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F478 0020C3B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F47C 0020C3BC  7C 9F 23 78 */	mr r31, r4
/* 8020F480 0020C3C0  93 C1 00 08 */	stw r30, 8(r1)
/* 8020F484 0020C3C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020F488 0020C3C8  41 82 00 68 */	beq .L_8020F4F0
/* 8020F48C 0020C3CC  3C 80 80 4C */	lis r4, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 8020F490 0020C3D0  38 84 02 D4 */	addi r4, r4, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 8020F494 0020C3D4  90 9E 00 00 */	stw r4, 0(r30)
/* 8020F498 0020C3D8  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020F49C 0020C3DC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020F4A0 0020C3E0  41 82 00 40 */	beq .L_8020F4E0
/* 8020F4A4 0020C3E4  3C 80 80 4C */	lis r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 8020F4A8 0020C3E8  38 84 02 58 */	addi r4, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 8020F4AC 0020C3EC  90 9E 00 00 */	stw r4, 0(r30)
/* 8020F4B0 0020C3F0  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020F4B4 0020C3F4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020F4B8 0020C3F8  41 82 00 28 */	beq .L_8020F4E0
/* 8020F4BC 0020C3FC  3C 80 80 4C */	lis r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 8020F4C0 0020C400  38 04 03 D0 */	addi r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 8020F4C4 0020C404  90 1E 00 00 */	stw r0, 0(r30)
/* 8020F4C8 0020C408  41 82 00 18 */	beq .L_8020F4E0
/* 8020F4CC 0020C40C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8020F4D0 0020C410  38 80 00 00 */	li r4, 0
/* 8020F4D4 0020C414  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8020F4D8 0020C418  90 1E 00 00 */	stw r0, 0(r30)
/* 8020F4DC 0020C41C  48 20 20 AD */	bl __dt__5CNodeFv
.L_8020F4E0:
/* 8020F4E0 0020C420  7F E0 07 35 */	extsh. r0, r31
/* 8020F4E4 0020C424  40 81 00 0C */	ble .L_8020F4F0
/* 8020F4E8 0020C428  7F C3 F3 78 */	mr r3, r30
/* 8020F4EC 0020C42C  4B E1 4B C9 */	bl __dl__FPv
.L_8020F4F0:
/* 8020F4F0 0020C430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F4F4 0020C434  7F C3 F3 78 */	mr r3, r30
/* 8020F4F8 0020C438  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F4FC 0020C43C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020F500 0020C440  7C 08 03 A6 */	mtlr r0
/* 8020F504 0020C444  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F508 0020C448  4E 80 00 20 */	blr 
.endfn "__dt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "__dt__32Container<Q34Game8ItemWeed4Weed>Fv", weak
/* 8020F50C 0020C44C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F510 0020C450  7C 08 02 A6 */	mflr r0
/* 8020F514 0020C454  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F518 0020C458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F51C 0020C45C  7C 9F 23 78 */	mr r31, r4
/* 8020F520 0020C460  93 C1 00 08 */	stw r30, 8(r1)
/* 8020F524 0020C464  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020F528 0020C468  41 82 00 38 */	beq .L_8020F560
/* 8020F52C 0020C46C  3C 80 80 4C */	lis r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 8020F530 0020C470  38 04 03 D0 */	addi r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 8020F534 0020C474  90 1E 00 00 */	stw r0, 0(r30)
/* 8020F538 0020C478  41 82 00 18 */	beq .L_8020F550
/* 8020F53C 0020C47C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8020F540 0020C480  38 80 00 00 */	li r4, 0
/* 8020F544 0020C484  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8020F548 0020C488  90 1E 00 00 */	stw r0, 0(r30)
/* 8020F54C 0020C48C  48 20 20 3D */	bl __dt__5CNodeFv
.L_8020F550:
/* 8020F550 0020C490  7F E0 07 35 */	extsh. r0, r31
/* 8020F554 0020C494  40 81 00 0C */	ble .L_8020F560
/* 8020F558 0020C498  7F C3 F3 78 */	mr r3, r30
/* 8020F55C 0020C49C  4B E1 4B 59 */	bl __dl__FPv
.L_8020F560:
/* 8020F560 0020C4A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F564 0020C4A4  7F C3 F3 78 */	mr r3, r30
/* 8020F568 0020C4A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F56C 0020C4AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020F570 0020C4B0  7C 08 03 A6 */	mtlr r0
/* 8020F574 0020C4B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F578 0020C4B8  4E 80 00 20 */	blr 
.endfn "__dt__32Container<Q34Game8ItemWeed4Weed>Fv"

.fn "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 8020F57C 0020C4BC  80 63 00 60 */	lwz r3, 0x60(r3)
/* 8020F580 0020C4C0  4E 80 00 20 */	blr 
.endfn "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn do_update_boundSphere__Q34Game8ItemWeed7WeedMgrFv, global
/* 8020F584 0020C4C4  4E 80 00 20 */	blr 
.endfn do_update_boundSphere__Q34Game8ItemWeed7WeedMgrFv

.fn do_update__Q34Game8ItemWeed7WeedMgrFv, global
/* 8020F588 0020C4C8  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 8020F58C 0020C4CC  28 00 00 00 */	cmplwi r0, 0
/* 8020F590 0020C4D0  4C 82 00 20 */	bnelr 
/* 8020F594 0020C4D4  88 03 00 1D */	lbz r0, 0x1d(r3)
/* 8020F598 0020C4D8  28 00 00 00 */	cmplwi r0, 0
/* 8020F59C 0020C4DC  4E 80 00 20 */	blr 
.endfn do_update__Q34Game8ItemWeed7WeedMgrFv

.fn init__Q34Game8ItemWeed3FSMFPQ34Game8ItemWeed4Item, global
/* 8020F5A0 0020C4E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F5A4 0020C4E4  7C 08 02 A6 */	mflr r0
/* 8020F5A8 0020C4E8  38 80 00 01 */	li r4, 1
/* 8020F5AC 0020C4EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F5B0 0020C4F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F5B4 0020C4F4  7C 7F 1B 78 */	mr r31, r3
/* 8020F5B8 0020C4F8  48 00 15 81 */	bl "create__Q24Game35StateMachine<Q34Game8ItemWeed4Item>Fi"
/* 8020F5BC 0020C4FC  38 60 00 10 */	li r3, 0x10
/* 8020F5C0 0020C500  4B E1 48 E5 */	bl __nw__FUl
/* 8020F5C4 0020C504  7C 64 1B 79 */	or. r4, r3, r3
/* 8020F5C8 0020C508  41 82 00 40 */	beq .L_8020F608
/* 8020F5CC 0020C50C  3C 60 80 4C */	lis r3, "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>"@ha
/* 8020F5D0 0020C510  3C C0 80 4C */	lis r6, "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>"@ha
/* 8020F5D4 0020C514  38 03 01 B0 */	addi r0, r3, "__vt__Q24Game31FSMState<Q34Game8ItemWeed4Item>"@l
/* 8020F5D8 0020C518  3C A0 80 4C */	lis r5, __vt__Q34Game8ItemWeed5State@ha
/* 8020F5DC 0020C51C  90 04 00 00 */	stw r0, 0(r4)
/* 8020F5E0 0020C520  38 E0 00 00 */	li r7, 0
/* 8020F5E4 0020C524  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed9WaitState@ha
/* 8020F5E8 0020C528  38 C6 01 7C */	addi r6, r6, "__vt__Q24Game32ItemState<Q34Game8ItemWeed4Item>"@l
/* 8020F5EC 0020C52C  90 E4 00 04 */	stw r7, 4(r4)
/* 8020F5F0 0020C530  38 A5 01 48 */	addi r5, r5, __vt__Q34Game8ItemWeed5State@l
/* 8020F5F4 0020C534  38 03 FB C4 */	addi r0, r3, __vt__Q34Game8ItemWeed9WaitState@l
/* 8020F5F8 0020C538  90 E4 00 08 */	stw r7, 8(r4)
/* 8020F5FC 0020C53C  90 C4 00 00 */	stw r6, 0(r4)
/* 8020F600 0020C540  90 A4 00 00 */	stw r5, 0(r4)
/* 8020F604 0020C544  90 04 00 00 */	stw r0, 0(r4)
.L_8020F608:
/* 8020F608 0020C548  7F E3 FB 78 */	mr r3, r31
/* 8020F60C 0020C54C  48 00 27 7D */	bl "registerState__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ24Game31FSMState<Q34Game8ItemWeed4Item>"
/* 8020F610 0020C550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F614 0020C554  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F618 0020C558  7C 08 03 A6 */	mtlr r0
/* 8020F61C 0020C55C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F620 0020C560  4E 80 00 20 */	blr 
.endfn init__Q34Game8ItemWeed3FSMFPQ34Game8ItemWeed4Item

.fn onInit__Q34Game8ItemWeed4ItemFPQ24Game15CreatureInitArg, global
/* 8020F624 0020C564  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020F628 0020C568  7C 08 02 A6 */	mflr r0
/* 8020F62C 0020C56C  38 A0 00 00 */	li r5, 0
/* 8020F630 0020C570  38 C0 00 00 */	li r6, 0
/* 8020F634 0020C574  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020F638 0020C578  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8020F63C 0020C57C  7C 7D 1B 78 */	mr r29, r3
/* 8020F640 0020C580  7C 9F 23 78 */	mr r31, r4
/* 8020F644 0020C584  7F A4 EB 78 */	mr r4, r29
/* 8020F648 0020C588  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 8020F64C 0020C58C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F650 0020C590  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8020F654 0020C594  7D 89 03 A6 */	mtctr r12
/* 8020F658 0020C598  4E 80 04 21 */	bctrl 
/* 8020F65C 0020C59C  7F A3 EB 78 */	mr r3, r29
/* 8020F660 0020C5A0  38 80 00 01 */	li r4, 1
/* 8020F664 0020C5A4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8020F668 0020C5A8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8020F66C 0020C5AC  7D 89 03 A6 */	mtctr r12
/* 8020F670 0020C5B0  4E 80 04 21 */	bctrl 
/* 8020F674 0020C5B4  28 1F 00 00 */	cmplwi r31, 0
/* 8020F678 0020C5B8  40 82 00 20 */	bne .L_8020F698
/* 8020F67C 0020C5BC  3C 60 80 48 */	lis r3, lbl_80481FD8@ha
/* 8020F680 0020C5C0  3C A0 80 48 */	lis r5, lbl_80481FE8@ha
/* 8020F684 0020C5C4  38 63 1F D8 */	addi r3, r3, lbl_80481FD8@l
/* 8020F688 0020C5C8  38 80 00 C2 */	li r4, 0xc2
/* 8020F68C 0020C5CC  38 A5 1F E8 */	addi r5, r5, lbl_80481FE8@l
/* 8020F690 0020C5D0  4C C6 31 82 */	crclr 6
/* 8020F694 0020C5D4  4B E1 AF AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020F698:
/* 8020F698 0020C5D8  83 DF 00 04 */	lwz r30, 4(r31)
/* 8020F69C 0020C5DC  38 60 00 6C */	li r3, 0x6c
/* 8020F6A0 0020C5E0  80 1F 00 08 */	lwz r0, 8(r31)
/* 8020F6A4 0020C5E4  90 1D 01 EC */	stw r0, 0x1ec(r29)
/* 8020F6A8 0020C5E8  4B E1 47 FD */	bl __nw__FUl
/* 8020F6AC 0020C5EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8020F6B0 0020C5F0  41 82 00 A0 */	beq .L_8020F750
/* 8020F6B4 0020C5F4  3C 60 80 4C */	lis r3, __vt__Q24Game12BaseFlockMgr@ha
/* 8020F6B8 0020C5F8  7F FB FB 78 */	mr r27, r31
/* 8020F6BC 0020C5FC  38 03 FB 6C */	addi r0, r3, __vt__Q24Game12BaseFlockMgr@l
/* 8020F6C0 0020C600  38 A0 00 01 */	li r5, 1
/* 8020F6C4 0020C604  90 1F 00 00 */	stw r0, 0(r31)
/* 8020F6C8 0020C608  3B 9B 00 20 */	addi r28, r27, 0x20
/* 8020F6CC 0020C60C  38 80 FF FF */	li r4, -1
/* 8020F6D0 0020C610  38 00 00 00 */	li r0, 0
/* 8020F6D4 0020C614  98 BF 00 1D */	stb r5, 0x1d(r31)
/* 8020F6D8 0020C618  7F 83 E3 78 */	mr r3, r28
/* 8020F6DC 0020C61C  98 BF 00 1C */	stb r5, 0x1c(r31)
/* 8020F6E0 0020C620  90 9F 00 04 */	stw r4, 4(r31)
/* 8020F6E4 0020C624  90 1F 00 08 */	stw r0, 8(r31)
/* 8020F6E8 0020C628  48 20 1C A9 */	bl __ct__5CNodeFv
/* 8020F6EC 0020C62C  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 8020F6F0 0020C630  3C 80 80 4C */	lis r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 8020F6F4 0020C634  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 8020F6F8 0020C638  3C 60 80 4C */	lis r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
/* 8020F6FC 0020C63C  90 1C 00 00 */	stw r0, 0(r28)
/* 8020F700 0020C640  38 04 03 D0 */	addi r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 8020F704 0020C644  38 83 03 60 */	addi r4, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
/* 8020F708 0020C648  38 A0 00 00 */	li r5, 0
/* 8020F70C 0020C64C  90 1C 00 00 */	stw r0, 0(r28)
/* 8020F710 0020C650  38 04 00 30 */	addi r0, r4, 0x30
/* 8020F714 0020C654  38 7B 00 3C */	addi r3, r27, 0x3c
/* 8020F718 0020C658  98 BC 00 18 */	stb r5, 0x18(r28)
/* 8020F71C 0020C65C  90 9B 00 00 */	stw r4, 0(r27)
/* 8020F720 0020C660  90 1B 00 20 */	stw r0, 0x20(r27)
/* 8020F724 0020C664  48 00 25 2D */	bl "__ct__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
/* 8020F728 0020C668  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed7WeedMgr@ha
/* 8020F72C 0020C66C  7F C4 F3 78 */	mr r4, r30
/* 8020F730 0020C670  38 A3 01 E8 */	addi r5, r3, __vt__Q34Game8ItemWeed7WeedMgr@l
/* 8020F734 0020C674  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8020F738 0020C678  90 BF 00 00 */	stw r5, 0(r31)
/* 8020F73C 0020C67C  38 05 00 30 */	addi r0, r5, 0x30
/* 8020F740 0020C680  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8020F744 0020C684  48 00 23 85 */	bl "alloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
/* 8020F748 0020C688  38 00 00 05 */	li r0, 5
/* 8020F74C 0020C68C  90 1F 00 04 */	stw r0, 4(r31)
.L_8020F750:
/* 8020F750 0020C690  93 FD 01 E8 */	stw r31, 0x1e8(r29)
/* 8020F754 0020C694  7F A3 EB 78 */	mr r3, r29
/* 8020F758 0020C698  38 80 00 00 */	li r4, 0
/* 8020F75C 0020C69C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8020F760 0020C6A0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8020F764 0020C6A4  7D 89 03 A6 */	mtctr r12
/* 8020F768 0020C6A8  4E 80 04 21 */	bctrl 
/* 8020F76C 0020C6AC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8020F770 0020C6B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020F774 0020C6B4  7C 08 03 A6 */	mtlr r0
/* 8020F778 0020C6B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8020F77C 0020C6BC  4E 80 00 20 */	blr 
.endfn onInit__Q34Game8ItemWeed4ItemFPQ24Game15CreatureInitArg

.fn "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg", weak
/* 8020F780 0020C6C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F784 0020C6C4  7C 08 02 A6 */	mflr r0
/* 8020F788 0020C6C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F78C 0020C6CC  38 00 00 00 */	li r0, 0
/* 8020F790 0020C6D0  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 8020F794 0020C6D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F798 0020C6D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020F79C 0020C6DC  7D 89 03 A6 */	mtctr r12
/* 8020F7A0 0020C6E0  4E 80 04 21 */	bctrl 
/* 8020F7A4 0020C6E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F7A8 0020C6E8  7C 08 03 A6 */	mtlr r0
/* 8020F7AC 0020C6EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F7B0 0020C6F0  4E 80 00 20 */	blr 
.endfn "start__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"

.fn onSetPosition__Q34Game8ItemWeed4ItemFv, global
/* 8020F7B4 0020C6F4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8020F7B8 0020C6F8  7C 08 02 A6 */	mflr r0
/* 8020F7BC 0020C6FC  90 01 00 54 */	stw r0, 0x54(r1)
/* 8020F7C0 0020C700  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8020F7C4 0020C704  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8020F7C8 0020C708  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8020F7CC 0020C70C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8020F7D0 0020C710  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8020F7D4 0020C714  93 81 00 30 */	stw r28, 0x30(r1)
/* 8020F7D8 0020C718  7C 7C 1B 78 */	mr r28, r3
/* 8020F7DC 0020C71C  38 7C 01 38 */	addi r3, r28, 0x138
/* 8020F7E0 0020C720  38 9C 01 9C */	addi r4, r28, 0x19c
/* 8020F7E4 0020C724  48 21 90 5D */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 8020F7E8 0020C728  C0 7C 01 D0 */	lfs f3, 0x1d0(r28)
/* 8020F7EC 0020C72C  3B A0 00 00 */	li r29, 0
/* 8020F7F0 0020C730  C0 3C 01 A0 */	lfs f1, 0x1a0(r28)
/* 8020F7F4 0020C734  C0 5C 01 A4 */	lfs f2, 0x1a4(r28)
/* 8020F7F8 0020C738  83 DC 01 EC */	lwz r30, 0x1ec(r28)
/* 8020F7FC 0020C73C  83 FC 01 E8 */	lwz r31, 0x1e8(r28)
/* 8020F800 0020C740  C0 1C 01 9C */	lfs f0, 0x19c(r28)
/* 8020F804 0020C744  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8020F808 0020C748  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 8020F80C 0020C74C  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8020F810 0020C750  D0 7F 00 18 */	stfs f3, 0x18(r31)
/* 8020F814 0020C754  48 00 01 B8 */	b .L_8020F9CC
.L_8020F818:
/* 8020F818 0020C758  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8020F81C 0020C75C  81 9F 00 3C */	lwz r12, 0x3c(r31)
/* 8020F820 0020C760  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8020F824 0020C764  7D 89 03 A6 */	mtctr r12
/* 8020F828 0020C768  4E 80 04 21 */	bctrl 
/* 8020F82C 0020C76C  7C 7C 1B 79 */	or. r28, r3, r3
/* 8020F830 0020C770  41 82 01 98 */	beq .L_8020F9C8
/* 8020F834 0020C774  2C 1E 00 01 */	cmpwi r30, 1
/* 8020F838 0020C778  40 82 00 10 */	bne .L_8020F848
/* 8020F83C 0020C77C  38 00 00 00 */	li r0, 0
/* 8020F840 0020C780  98 1C 00 40 */	stb r0, 0x40(r28)
/* 8020F844 0020C784  48 00 00 48 */	b .L_8020F88C
.L_8020F848:
/* 8020F848 0020C788  4B EB 9D 59 */	bl rand
/* 8020F84C 0020C78C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020F850 0020C790  3C 00 43 30 */	lis r0, 0x4330
/* 8020F854 0020C794  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020F858 0020C798  C8 62 BB A8 */	lfd f3, lbl_80519F08@sda21(r2)
/* 8020F85C 0020C79C  90 01 00 08 */	stw r0, 8(r1)
/* 8020F860 0020C7A0  C0 22 BB A0 */	lfs f1, lbl_80519F00@sda21(r2)
/* 8020F864 0020C7A4  C8 41 00 08 */	lfd f2, 8(r1)
/* 8020F868 0020C7A8  C0 02 BB B4 */	lfs f0, lbl_80519F14@sda21(r2)
/* 8020F86C 0020C7AC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8020F870 0020C7B0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8020F874 0020C7B4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8020F878 0020C7B8  FC 00 00 1E */	fctiwz f0, f0
/* 8020F87C 0020C7BC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8020F880 0020C7C0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020F884 0020C7C4  38 03 00 01 */	addi r0, r3, 1
/* 8020F888 0020C7C8  98 1C 00 40 */	stb r0, 0x40(r28)
.L_8020F88C:
/* 8020F88C 0020C7CC  4B EB 9D 15 */	bl rand
/* 8020F890 0020C7D0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020F894 0020C7D4  3C 00 43 30 */	lis r0, 0x4330
/* 8020F898 0020C7D8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8020F89C 0020C7DC  C8 62 BB A8 */	lfd f3, lbl_80519F08@sda21(r2)
/* 8020F8A0 0020C7E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8020F8A4 0020C7E4  C0 22 BB A0 */	lfs f1, lbl_80519F00@sda21(r2)
/* 8020F8A8 0020C7E8  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8020F8AC 0020C7EC  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8020F8B0 0020C7F0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8020F8B4 0020C7F4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8020F8B8 0020C7F8  EF E0 00 72 */	fmuls f31, f0, f1
/* 8020F8BC 0020C7FC  4B EB 9C E5 */	bl rand
/* 8020F8C0 0020C800  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020F8C4 0020C804  3C 00 43 30 */	lis r0, 0x4330
/* 8020F8C8 0020C808  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020F8CC 0020C80C  C8 62 BB A8 */	lfd f3, lbl_80519F08@sda21(r2)
/* 8020F8D0 0020C810  90 01 00 08 */	stw r0, 8(r1)
/* 8020F8D4 0020C814  C0 42 BB A0 */	lfs f2, lbl_80519F00@sda21(r2)
/* 8020F8D8 0020C818  C8 01 00 08 */	lfd f0, 8(r1)
/* 8020F8DC 0020C81C  C0 22 BB A4 */	lfs f1, lbl_80519F04@sda21(r2)
/* 8020F8E0 0020C820  EC 60 18 28 */	fsubs f3, f0, f3
/* 8020F8E4 0020C824  C0 02 BB 98 */	lfs f0, lbl_80519EF8@sda21(r2)
/* 8020F8E8 0020C828  EC 43 10 24 */	fdivs f2, f3, f2
/* 8020F8EC 0020C82C  EC 61 00 B2 */	fmuls f3, f1, f2
/* 8020F8F0 0020C830  FC 20 18 90 */	fmr f1, f3
/* 8020F8F4 0020C834  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8020F8F8 0020C838  40 80 00 08 */	bge .L_8020F900
/* 8020F8FC 0020C83C  FC 20 18 50 */	fneg f1, f3
.L_8020F900:
/* 8020F900 0020C840  C0 42 BB B8 */	lfs f2, lbl_80519F18@sda21(r2)
/* 8020F904 0020C844  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8020F908 0020C848  C0 02 BB 98 */	lfs f0, lbl_80519EF8@sda21(r2)
/* 8020F90C 0020C84C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8020F910 0020C850  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8020F914 0020C854  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8020F918 0020C858  FC 00 08 1E */	fctiwz f0, f1
/* 8020F91C 0020C85C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8020F920 0020C860  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8020F924 0020C864  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020F928 0020C868  7C 64 02 14 */	add r3, r4, r0
/* 8020F92C 0020C86C  C0 03 00 04 */	lfs f0, 4(r3)
/* 8020F930 0020C870  EC 9F 00 32 */	fmuls f4, f31, f0
/* 8020F934 0020C874  40 80 00 28 */	bge .L_8020F95C
/* 8020F938 0020C878  C0 02 BB BC */	lfs f0, lbl_80519F1C@sda21(r2)
/* 8020F93C 0020C87C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8020F940 0020C880  FC 00 00 1E */	fctiwz f0, f0
/* 8020F944 0020C884  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8020F948 0020C888  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020F94C 0020C88C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020F950 0020C890  7C 04 04 2E */	lfsx f0, r4, r0
/* 8020F954 0020C894  FC 20 00 50 */	fneg f1, f0
/* 8020F958 0020C898  48 00 00 1C */	b .L_8020F974
.L_8020F95C:
/* 8020F95C 0020C89C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8020F960 0020C8A0  FC 00 00 1E */	fctiwz f0, f0
/* 8020F964 0020C8A4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8020F968 0020C8A8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8020F96C 0020C8AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020F970 0020C8B0  7C 24 04 2E */	lfsx f1, r4, r0
.L_8020F974:
/* 8020F974 0020C8B4  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8020F978 0020C8B8  EC 7F 00 72 */	fmuls f3, f31, f1
/* 8020F97C 0020C8BC  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8020F980 0020C8C0  7F 83 E3 78 */	mr r3, r28
/* 8020F984 0020C8C4  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 8020F988 0020C8C8  EC 84 00 2A */	fadds f4, f4, f0
/* 8020F98C 0020C8CC  C0 02 BB 9C */	lfs f0, lbl_80519EFC@sda21(r2)
/* 8020F990 0020C8D0  93 FC 00 50 */	stw r31, 0x50(r28)
/* 8020F994 0020C8D4  EC 63 10 2A */	fadds f3, f3, f2
/* 8020F998 0020C8D8  C0 42 BB 98 */	lfs f2, lbl_80519EF8@sda21(r2)
/* 8020F99C 0020C8DC  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 8020F9A0 0020C8E0  EC 42 08 2A */	fadds f2, f2, f1
/* 8020F9A4 0020C8E4  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8020F9A8 0020C8E8  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8020F9AC 0020C8EC  D0 7C 00 00 */	stfs f3, 0(r28)
/* 8020F9B0 0020C8F0  D0 5C 00 04 */	stfs f2, 4(r28)
/* 8020F9B4 0020C8F4  D0 9C 00 08 */	stfs f4, 8(r28)
/* 8020F9B8 0020C8F8  81 9C 00 0C */	lwz r12, 0xc(r28)
/* 8020F9BC 0020C8FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F9C0 0020C900  7D 89 03 A6 */	mtctr r12
/* 8020F9C4 0020C904  4E 80 04 21 */	bctrl 
.L_8020F9C8:
/* 8020F9C8 0020C908  3B BD 00 01 */	addi r29, r29, 1
.L_8020F9CC:
/* 8020F9CC 0020C90C  7F E3 FB 78 */	mr r3, r31
/* 8020F9D0 0020C910  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020F9D4 0020C914  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F9D8 0020C918  7D 89 03 A6 */	mtctr r12
/* 8020F9DC 0020C91C  4E 80 04 21 */	bctrl 
/* 8020F9E0 0020C920  7C 1D 18 00 */	cmpw r29, r3
/* 8020F9E4 0020C924  41 80 FE 34 */	blt .L_8020F818
/* 8020F9E8 0020C928  C0 22 BB B0 */	lfs f1, lbl_80519F10@sda21(r2)
/* 8020F9EC 0020C92C  7F E3 FB 78 */	mr r3, r31
/* 8020F9F0 0020C930  4B FF F4 3D */	bl resolveCollision__Q24Game12BaseFlockMgrFf
/* 8020F9F4 0020C934  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8020F9F8 0020C938  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8020F9FC 0020C93C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8020FA00 0020C940  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8020FA04 0020C944  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8020FA08 0020C948  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8020FA0C 0020C94C  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8020FA10 0020C950  7C 08 03 A6 */	mtlr r0
/* 8020FA14 0020C954  38 21 00 50 */	addi r1, r1, 0x50
/* 8020FA18 0020C958  4E 80 00 20 */	blr 
.endfn onSetPosition__Q34Game8ItemWeed4ItemFv

.fn ignoreAtari__Q34Game8ItemWeed4ItemFPQ24Game8Creature, global
/* 8020FA1C 0020C95C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020FA20 0020C960  7C 08 02 A6 */	mflr r0
/* 8020FA24 0020C964  7C 83 23 78 */	mr r3, r4
/* 8020FA28 0020C968  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020FA2C 0020C96C  81 84 00 00 */	lwz r12, 0(r4)
/* 8020FA30 0020C970  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020FA34 0020C974  7D 89 03 A6 */	mtctr r12
/* 8020FA38 0020C978  4E 80 04 21 */	bctrl 
/* 8020FA3C 0020C97C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8020FA40 0020C980  7C 00 00 34 */	cntlzw r0, r0
/* 8020FA44 0020C984  54 03 D9 7E */	srwi r3, r0, 5
/* 8020FA48 0020C988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020FA4C 0020C98C  7C 08 03 A6 */	mtlr r0
/* 8020FA50 0020C990  38 21 00 10 */	addi r1, r1, 0x10
/* 8020FA54 0020C994  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q34Game8ItemWeed4ItemFPQ24Game8Creature

.fn updateBoundSphere__Q34Game8ItemWeed4ItemFv, global
/* 8020FA58 0020C998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020FA5C 0020C99C  7C 08 02 A6 */	mflr r0
/* 8020FA60 0020C9A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020FA64 0020C9A4  80 83 01 14 */	lwz r4, 0x114(r3)
/* 8020FA68 0020C9A8  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 8020FA6C 0020C9AC  80 84 00 00 */	lwz r4, 0(r4)
/* 8020FA70 0020C9B0  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8020FA74 0020C9B4  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 8020FA78 0020C9B8  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 8020FA7C 0020C9BC  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 8020FA80 0020C9C0  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 8020FA84 0020C9C4  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 8020FA88 0020C9C8  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 8020FA8C 0020C9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FA90 0020C9D0  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 8020FA94 0020C9D4  7D 89 03 A6 */	mtctr r12
/* 8020FA98 0020C9D8  4E 80 04 21 */	bctrl 
/* 8020FA9C 0020C9DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020FAA0 0020C9E0  41 82 00 20 */	beq .L_8020FAC0
/* 8020FAA4 0020C9E4  3C 60 80 48 */	lis r3, lbl_80481FD8@ha
/* 8020FAA8 0020C9E8  3C A0 80 48 */	lis r5, lbl_80481FF4@ha
/* 8020FAAC 0020C9EC  38 63 1F D8 */	addi r3, r3, lbl_80481FD8@l
/* 8020FAB0 0020C9F0  38 80 00 E1 */	li r4, 0xe1
/* 8020FAB4 0020C9F4  38 A5 1F F4 */	addi r5, r5, lbl_80481FF4@l
/* 8020FAB8 0020C9F8  4C C6 31 82 */	crclr 6
/* 8020FABC 0020C9FC  4B E1 AB 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020FAC0:
/* 8020FAC0 0020CA00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020FAC4 0020CA04  7C 08 03 A6 */	mtlr r0
/* 8020FAC8 0020CA08  38 21 00 10 */	addi r1, r1, 0x10
/* 8020FACC 0020CA0C  4E 80 00 20 */	blr 
.endfn updateBoundSphere__Q34Game8ItemWeed4ItemFv

.fn interactFlockAttack__Q34Game8ItemWeed4ItemFRQ24Game19InteractFlockAttack, global
/* 8020FAD0 0020CA10  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8020FAD4 0020CA14  7C 08 02 A6 */	mflr r0
/* 8020FAD8 0020CA18  90 01 00 74 */	stw r0, 0x74(r1)
/* 8020FADC 0020CA1C  BF 61 00 5C */	stmw r27, 0x5c(r1)
/* 8020FAE0 0020CA20  7C 9D 23 78 */	mr r29, r4
/* 8020FAE4 0020CA24  7C 7C 1B 78 */	mr r28, r3
/* 8020FAE8 0020CA28  3B C0 00 00 */	li r30, 0
/* 8020FAEC 0020CA2C  83 64 00 08 */	lwz r27, 8(r4)
/* 8020FAF0 0020CA30  83 E3 01 E8 */	lwz r31, 0x1e8(r3)
/* 8020FAF4 0020CA34  2C 1B 00 00 */	cmpwi r27, 0
/* 8020FAF8 0020CA38  41 80 00 24 */	blt .L_8020FB1C
/* 8020FAFC 0020CA3C  7F E3 FB 78 */	mr r3, r31
/* 8020FB00 0020CA40  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020FB04 0020CA44  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020FB08 0020CA48  7D 89 03 A6 */	mtctr r12
/* 8020FB0C 0020CA4C  4E 80 04 21 */	bctrl 
/* 8020FB10 0020CA50  7C 1B 18 00 */	cmpw r27, r3
/* 8020FB14 0020CA54  40 80 00 08 */	bge .L_8020FB1C
/* 8020FB18 0020CA58  3B C0 00 01 */	li r30, 1
.L_8020FB1C:
/* 8020FB1C 0020CA5C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8020FB20 0020CA60  40 82 00 20 */	bne .L_8020FB40
/* 8020FB24 0020CA64  3C 60 80 48 */	lis r3, lbl_80482000@ha
/* 8020FB28 0020CA68  3C A0 80 48 */	lis r5, lbl_80481FE8@ha
/* 8020FB2C 0020CA6C  38 63 20 00 */	addi r3, r3, lbl_80482000@l
/* 8020FB30 0020CA70  38 80 00 AB */	li r4, 0xab
/* 8020FB34 0020CA74  38 A5 1F E8 */	addi r5, r5, lbl_80481FE8@l
/* 8020FB38 0020CA78  4C C6 31 82 */	crclr 6
/* 8020FB3C 0020CA7C  4B E1 AB 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020FB40:
/* 8020FB40 0020CA80  7F E3 FB 78 */	mr r3, r31
/* 8020FB44 0020CA84  7F 64 DB 78 */	mr r4, r27
/* 8020FB48 0020CA88  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020FB4C 0020CA8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020FB50 0020CA90  7D 89 03 A6 */	mtctr r12
/* 8020FB54 0020CA94  4E 80 04 21 */	bctrl 
/* 8020FB58 0020CA98  C0 23 00 04 */	lfs f1, 4(r3)
/* 8020FB5C 0020CA9C  C0 43 00 08 */	lfs f2, 8(r3)
/* 8020FB60 0020CAA0  C0 03 00 00 */	lfs f0, 0(r3)
/* 8020FB64 0020CAA4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8020FB68 0020CAA8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8020FB6C 0020CAAC  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8020FB70 0020CAB0  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 8020FB74 0020CAB4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8020FB78 0020CAB8  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8020FB7C 0020CABC  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8020FB80 0020CAC0  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8020FB84 0020CAC4  80 7C 01 E8 */	lwz r3, 0x1e8(r28)
/* 8020FB88 0020CAC8  80 9D 00 08 */	lwz r4, 8(r29)
/* 8020FB8C 0020CACC  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 8020FB90 0020CAD0  4B FF F1 81 */	bl attackFlock__Q24Game12BaseFlockMgrFif
/* 8020FB94 0020CAD4  7C 7F 1B 78 */	mr r31, r3
/* 8020FB98 0020CAD8  2C 1F 00 01 */	cmpwi r31, 1
/* 8020FB9C 0020CADC  40 82 01 D4 */	bne .L_8020FD70
/* 8020FBA0 0020CAE0  80 7D 00 04 */	lwz r3, 4(r29)
/* 8020FBA4 0020CAE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FBA8 0020CAE8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020FBAC 0020CAEC  7D 89 03 A6 */	mtctr r12
/* 8020FBB0 0020CAF0  4E 80 04 21 */	bctrl 
/* 8020FBB4 0020CAF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020FBB8 0020CAF8  41 82 00 18 */	beq .L_8020FBD0
/* 8020FBBC 0020CAFC  80 1C 01 EC */	lwz r0, 0x1ec(r28)
/* 8020FBC0 0020CB00  2C 00 00 00 */	cmpwi r0, 0
/* 8020FBC4 0020CB04  40 82 00 0C */	bne .L_8020FBD0
/* 8020FBC8 0020CB08  38 61 00 28 */	addi r3, r1, 0x28
/* 8020FBCC 0020CB0C  48 1A 80 8D */	bl "createSimpleStoneAttack__3efxFR10Vector3<f>"
.L_8020FBD0:
/* 8020FBD0 0020CB10  4B EB 99 D1 */	bl rand
/* 8020FBD4 0020CB14  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020FBD8 0020CB18  3C 00 43 30 */	lis r0, 0x4330
/* 8020FBDC 0020CB1C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8020FBE0 0020CB20  C8 62 BB A8 */	lfd f3, lbl_80519F08@sda21(r2)
/* 8020FBE4 0020CB24  90 01 00 38 */	stw r0, 0x38(r1)
/* 8020FBE8 0020CB28  C0 22 BB A0 */	lfs f1, lbl_80519F00@sda21(r2)
/* 8020FBEC 0020CB2C  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 8020FBF0 0020CB30  C0 02 BB C4 */	lfs f0, lbl_80519F24@sda21(r2)
/* 8020FBF4 0020CB34  EC 42 18 28 */	fsubs f2, f2, f3
/* 8020FBF8 0020CB38  EC 22 08 24 */	fdivs f1, f2, f1
/* 8020FBFC 0020CB3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8020FC00 0020CB40  40 81 01 70 */	ble .L_8020FD70
/* 8020FC04 0020CB44  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 8020FC08 0020CB48  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FC0C 0020CB4C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8020FC10 0020CB50  7D 89 03 A6 */	mtctr r12
/* 8020FC14 0020CB54  4E 80 04 21 */	bctrl 
/* 8020FC18 0020CB58  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020FC1C 0020CB5C  41 82 01 54 */	beq .L_8020FD70
/* 8020FC20 0020CB60  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 8020FC24 0020CB64  38 00 00 00 */	li r0, 0
/* 8020FC28 0020CB68  38 A4 A2 F4 */	addi r5, r4, __vt__Q24Game15CreatureInitArg@l
/* 8020FC2C 0020CB6C  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney7InitArg@ha
/* 8020FC30 0020CB70  90 A1 00 08 */	stw r5, 8(r1)
/* 8020FC34 0020CB74  38 A4 A2 E8 */	addi r5, r4, __vt__Q34Game9ItemHoney7InitArg@l
/* 8020FC38 0020CB78  38 81 00 08 */	addi r4, r1, 8
/* 8020FC3C 0020CB7C  90 A1 00 08 */	stw r5, 8(r1)
/* 8020FC40 0020CB80  98 01 00 0C */	stb r0, 0xc(r1)
/* 8020FC44 0020CB84  98 01 00 0D */	stb r0, 0xd(r1)
/* 8020FC48 0020CB88  4B F2 B3 81 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8020FC4C 0020CB8C  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8020FC50 0020CB90  C0 02 BB C8 */	lfs f0, lbl_80519F28@sda21(r2)
/* 8020FC54 0020CB94  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8020FC58 0020CB98  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8020FC5C 0020CB9C  EC 02 00 2A */	fadds f0, f2, f0
/* 8020FC60 0020CBA0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8020FC64 0020CBA4  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8020FC68 0020CBA8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8020FC6C 0020CBAC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8020FC70 0020CBB0  4B EB 99 31 */	bl rand
/* 8020FC74 0020CBB4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020FC78 0020CBB8  3C 00 43 30 */	lis r0, 0x4330
/* 8020FC7C 0020CBBC  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8020FC80 0020CBC0  C8 42 BB A8 */	lfd f2, lbl_80519F08@sda21(r2)
/* 8020FC84 0020CBC4  90 01 00 38 */	stw r0, 0x38(r1)
/* 8020FC88 0020CBC8  C0 62 BB A0 */	lfs f3, lbl_80519F00@sda21(r2)
/* 8020FC8C 0020CBCC  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8020FC90 0020CBD0  C0 22 BB D0 */	lfs f1, lbl_80519F30@sda21(r2)
/* 8020FC94 0020CBD4  EC 80 10 28 */	fsubs f4, f0, f2
/* 8020FC98 0020CBD8  C0 42 BB CC */	lfs f2, lbl_80519F2C@sda21(r2)
/* 8020FC9C 0020CBDC  C0 02 BB 98 */	lfs f0, lbl_80519EF8@sda21(r2)
/* 8020FCA0 0020CBE0  EC 64 18 24 */	fdivs f3, f4, f3
/* 8020FCA4 0020CBE4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8020FCA8 0020CBE8  EC A2 00 72 */	fmuls f5, f2, f1
/* 8020FCAC 0020CBEC  FC 20 28 90 */	fmr f1, f5
/* 8020FCB0 0020CBF0  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8020FCB4 0020CBF4  40 80 00 08 */	bge .L_8020FCBC
/* 8020FCB8 0020CBF8  FC 20 28 50 */	fneg f1, f5
.L_8020FCBC:
/* 8020FCBC 0020CBFC  C0 42 BB B8 */	lfs f2, lbl_80519F18@sda21(r2)
/* 8020FCC0 0020CC00  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8020FCC4 0020CC04  C0 02 BB 98 */	lfs f0, lbl_80519EF8@sda21(r2)
/* 8020FCC8 0020CC08  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8020FCCC 0020CC0C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8020FCD0 0020CC10  C0 62 BB D4 */	lfs f3, lbl_80519F34@sda21(r2)
/* 8020FCD4 0020CC14  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8020FCD8 0020CC18  FC 00 08 1E */	fctiwz f0, f1
/* 8020FCDC 0020CC1C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8020FCE0 0020CC20  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8020FCE4 0020CC24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020FCE8 0020CC28  7C 64 02 14 */	add r3, r4, r0
/* 8020FCEC 0020CC2C  C0 03 00 04 */	lfs f0, 4(r3)
/* 8020FCF0 0020CC30  EC 83 00 32 */	fmuls f4, f3, f0
/* 8020FCF4 0020CC34  40 80 00 28 */	bge .L_8020FD1C
/* 8020FCF8 0020CC38  C0 02 BB BC */	lfs f0, lbl_80519F1C@sda21(r2)
/* 8020FCFC 0020CC3C  EC 05 00 32 */	fmuls f0, f5, f0
/* 8020FD00 0020CC40  FC 00 00 1E */	fctiwz f0, f0
/* 8020FD04 0020CC44  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8020FD08 0020CC48  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8020FD0C 0020CC4C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020FD10 0020CC50  7C 04 04 2E */	lfsx f0, r4, r0
/* 8020FD14 0020CC54  FC 00 00 50 */	fneg f0, f0
/* 8020FD18 0020CC58  48 00 00 1C */	b .L_8020FD34
.L_8020FD1C:
/* 8020FD1C 0020CC5C  EC 05 00 B2 */	fmuls f0, f5, f2
/* 8020FD20 0020CC60  FC 00 00 1E */	fctiwz f0, f0
/* 8020FD24 0020CC64  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8020FD28 0020CC68  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8020FD2C 0020CC6C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020FD30 0020CC70  7C 04 04 2E */	lfsx f0, r4, r0
.L_8020FD34:
/* 8020FD34 0020CC74  EC 23 00 32 */	fmuls f1, f3, f0
/* 8020FD38 0020CC78  C0 02 BB D8 */	lfs f0, lbl_80519F38@sda21(r2)
/* 8020FD3C 0020CC7C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8020FD40 0020CC80  7F C3 F3 78 */	mr r3, r30
/* 8020FD44 0020CC84  38 81 00 1C */	addi r4, r1, 0x1c
/* 8020FD48 0020CC88  38 A0 00 00 */	li r5, 0
/* 8020FD4C 0020CC8C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8020FD50 0020CC90  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8020FD54 0020CC94  4B F2 B4 55 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8020FD58 0020CC98  7F C3 F3 78 */	mr r3, r30
/* 8020FD5C 0020CC9C  38 81 00 10 */	addi r4, r1, 0x10
/* 8020FD60 0020CCA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8020FD64 0020CCA4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8020FD68 0020CCA8  7D 89 03 A6 */	mtctr r12
/* 8020FD6C 0020CCAC  4E 80 04 21 */	bctrl 
.L_8020FD70:
/* 8020FD70 0020CCB0  7C 1F 00 D0 */	neg r0, r31
/* 8020FD74 0020CCB4  7C 00 FB 78 */	or r0, r0, r31
/* 8020FD78 0020CCB8  54 00 0F FE */	srwi r0, r0, 0x1f
/* 8020FD7C 0020CCBC  98 1D 00 10 */	stb r0, 0x10(r29)
/* 8020FD80 0020CCC0  80 7C 01 E8 */	lwz r3, 0x1e8(r28)
/* 8020FD84 0020CCC4  80 9D 00 08 */	lwz r4, 8(r29)
/* 8020FD88 0020CCC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FD8C 0020CCCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020FD90 0020CCD0  7D 89 03 A6 */	mtctr r12
/* 8020FD94 0020CCD4  4E 80 04 21 */	bctrl 
/* 8020FD98 0020CCD8  BB 61 00 5C */	lmw r27, 0x5c(r1)
/* 8020FD9C 0020CCDC  38 60 00 01 */	li r3, 1
/* 8020FDA0 0020CCE0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8020FDA4 0020CCE4  7C 08 03 A6 */	mtlr r0
/* 8020FDA8 0020CCE8  38 21 00 70 */	addi r1, r1, 0x70
/* 8020FDAC 0020CCEC  4E 80 00 20 */	blr 
.endfn interactFlockAttack__Q34Game8ItemWeed4ItemFRQ24Game19InteractFlockAttack

.fn "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 8020FDB0 0020CCF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020FDB4 0020CCF4  7C 08 02 A6 */	mflr r0
/* 8020FDB8 0020CCF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020FDBC 0020CCFC  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 8020FDC0 0020CD00  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8020FDC4 0020CD04  7D 89 03 A6 */	mtctr r12
/* 8020FDC8 0020CD08  4E 80 04 21 */	bctrl 
/* 8020FDCC 0020CD0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020FDD0 0020CD10  7C 08 03 A6 */	mtlr r0
/* 8020FDD4 0020CD14  38 21 00 10 */	addi r1, r1, 0x10
/* 8020FDD8 0020CD18  4E 80 00 20 */	blr 
.endfn "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "getAt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 8020FDDC 0020CD1C  1C 04 00 54 */	mulli r0, r4, 0x54
/* 8020FDE0 0020CD20  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8020FDE4 0020CD24  7C 63 02 14 */	add r3, r3, r0
/* 8020FDE8 0020CD28  4E 80 00 20 */	blr 
.endfn "getAt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"

.fn doAI__Q34Game8ItemWeed4ItemFv, global
/* 8020FDEC 0020CD2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020FDF0 0020CD30  7C 08 02 A6 */	mflr r0
/* 8020FDF4 0020CD34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020FDF8 0020CD38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020FDFC 0020CD3C  7C 7F 1B 78 */	mr r31, r3
/* 8020FE00 0020CD40  7F E4 FB 78 */	mr r4, r31
/* 8020FE04 0020CD44  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 8020FE08 0020CD48  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FE0C 0020CD4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020FE10 0020CD50  7D 89 03 A6 */	mtctr r12
/* 8020FE14 0020CD54  4E 80 04 21 */	bctrl 
/* 8020FE18 0020CD58  7F E3 FB 78 */	mr r3, r31
/* 8020FE1C 0020CD5C  4B FB C7 F1 */	bl updateCollTree__Q24Game8BaseItemFv
/* 8020FE20 0020CD60  80 7F 01 E8 */	lwz r3, 0x1e8(r31)
/* 8020FE24 0020CD64  4B FF EC B9 */	bl update__Q24Game12BaseFlockMgrFv
/* 8020FE28 0020CD68  80 7F 01 E8 */	lwz r3, 0x1e8(r31)
/* 8020FE2C 0020CD6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FE30 0020CD70  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8020FE34 0020CD74  7D 89 03 A6 */	mtctr r12
/* 8020FE38 0020CD78  4E 80 04 21 */	bctrl 
/* 8020FE3C 0020CD7C  2C 03 00 00 */	cmpwi r3, 0
/* 8020FE40 0020CD80  40 82 00 1C */	bne .L_8020FE5C
/* 8020FE44 0020CD84  7F E3 FB 78 */	mr r3, r31
/* 8020FE48 0020CD88  38 80 00 00 */	li r4, 0
/* 8020FE4C 0020CD8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020FE50 0020CD90  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8020FE54 0020CD94  7D 89 03 A6 */	mtctr r12
/* 8020FE58 0020CD98  4E 80 04 21 */	bctrl 
.L_8020FE5C:
/* 8020FE5C 0020CD9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020FE60 0020CDA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020FE64 0020CDA4  7C 08 03 A6 */	mtlr r0
/* 8020FE68 0020CDA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8020FE6C 0020CDAC  4E 80 00 20 */	blr 
.endfn doAI__Q34Game8ItemWeed4ItemFv

.fn "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 8020FE70 0020CDB0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8020FE74 0020CDB4  4E 80 00 20 */	blr 
.endfn "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn doSimpleDraw__Q34Game8ItemWeed4ItemFP8Viewport, global
/* 8020FE78 0020CDB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020FE7C 0020CDBC  7C 08 02 A6 */	mflr r0
/* 8020FE80 0020CDC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020FE84 0020CDC4  80 63 01 E8 */	lwz r3, 0x1e8(r3)
/* 8020FE88 0020CDC8  80 CD 95 60 */	lwz r6, mgr__Q24Game8ItemWeed@sda21(r13)
/* 8020FE8C 0020CDCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020FE90 0020CDD0  80 A6 00 1C */	lwz r5, 0x1c(r6)
/* 8020FE94 0020CDD4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8020FE98 0020CDD8  80 C6 00 18 */	lwz r6, 0x18(r6)
/* 8020FE9C 0020CDDC  7D 89 03 A6 */	mtctr r12
/* 8020FEA0 0020CDE0  4E 80 04 21 */	bctrl 
/* 8020FEA4 0020CDE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020FEA8 0020CDE8  7C 08 03 A6 */	mtlr r0
/* 8020FEAC 0020CDEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8020FEB0 0020CDF0  4E 80 00 20 */	blr 
.endfn doSimpleDraw__Q34Game8ItemWeed4ItemFP8Viewport

.fn __ct__Q34Game8ItemWeed3MgrFv, global
/* 8020FEB4 0020CDF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020FEB8 0020CDF8  7C 08 02 A6 */	mflr r0
/* 8020FEBC 0020CDFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020FEC0 0020CE00  7C 80 07 35 */	extsh. r0, r4
/* 8020FEC4 0020CE04  3C 80 80 48 */	lis r4, lbl_80481FC0@ha
/* 8020FEC8 0020CE08  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020FECC 0020CE0C  3B E4 1F C0 */	addi r31, r4, lbl_80481FC0@l
/* 8020FED0 0020CE10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020FED4 0020CE14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020FED8 0020CE18  93 81 00 10 */	stw r28, 0x10(r1)
/* 8020FEDC 0020CE1C  7C 7C 1B 78 */	mr r28, r3
/* 8020FEE0 0020CE20  41 82 00 0C */	beq .L_8020FEEC
/* 8020FEE4 0020CE24  38 1C 00 88 */	addi r0, r28, 0x88
/* 8020FEE8 0020CE28  90 1C 00 04 */	stw r0, 4(r28)
.L_8020FEEC:
/* 8020FEEC 0020CE2C  7F 83 E3 78 */	mr r3, r28
/* 8020FEF0 0020CE30  38 80 00 00 */	li r4, 0
/* 8020FEF4 0020CE34  4B FB D5 2D */	bl __ct__Q24Game12TNodeItemMgrFv
/* 8020FEF8 0020CE38  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed3Mgr@ha
/* 8020FEFC 0020CE3C  38 BF 00 4C */	addi r5, r31, 0x4c
/* 8020FF00 0020CE40  38 63 FB F8 */	addi r3, r3, __vt__Q34Game8ItemWeed3Mgr@l
/* 8020FF04 0020CE44  38 1F 00 58 */	addi r0, r31, 0x58
/* 8020FF08 0020CE48  90 7C 00 00 */	stw r3, 0(r28)
/* 8020FF0C 0020CE4C  38 C3 00 74 */	addi r6, r3, 0x74
/* 8020FF10 0020CE50  7F 83 E3 78 */	mr r3, r28
/* 8020FF14 0020CE54  38 80 00 04 */	li r4, 4
/* 8020FF18 0020CE58  90 DC 00 30 */	stw r6, 0x30(r28)
/* 8020FF1C 0020CE5C  90 BC 00 08 */	stw r5, 8(r28)
/* 8020FF20 0020CE60  90 1C 00 28 */	stw r0, 0x28(r28)
/* 8020FF24 0020CE64  4B FB CE A9 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 8020FF28 0020CE68  7F 83 E3 78 */	mr r3, r28
/* 8020FF2C 0020CE6C  38 82 BB DC */	addi r4, r2, lbl_80519F3C@sda21
/* 8020FF30 0020CE70  4B FB CF A5 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 8020FF34 0020CE74  7F 83 E3 78 */	mr r3, r28
/* 8020FF38 0020CE78  38 9F 00 70 */	addi r4, r31, 0x70
/* 8020FF3C 0020CE7C  38 A0 00 00 */	li r5, 0
/* 8020FF40 0020CE80  3C C0 00 02 */	lis r6, 2
/* 8020FF44 0020CE84  4B FB D0 0D */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 8020FF48 0020CE88  7F 83 E3 78 */	mr r3, r28
/* 8020FF4C 0020CE8C  38 9F 00 7C */	addi r4, r31, 0x7c
/* 8020FF50 0020CE90  38 A0 00 01 */	li r5, 1
/* 8020FF54 0020CE94  3C C0 00 02 */	lis r6, 2
/* 8020FF58 0020CE98  4B FB CF F9 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 8020FF5C 0020CE9C  7F 83 E3 78 */	mr r3, r28
/* 8020FF60 0020CEA0  38 9F 00 88 */	addi r4, r31, 0x88
/* 8020FF64 0020CEA4  38 A0 00 02 */	li r5, 2
/* 8020FF68 0020CEA8  3C C0 00 02 */	lis r6, 2
/* 8020FF6C 0020CEAC  4B FB CF E5 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 8020FF70 0020CEB0  7F 83 E3 78 */	mr r3, r28
/* 8020FF74 0020CEB4  38 9F 00 94 */	addi r4, r31, 0x94
/* 8020FF78 0020CEB8  38 A0 00 03 */	li r5, 3
/* 8020FF7C 0020CEBC  3C C0 00 02 */	lis r6, 2
/* 8020FF80 0020CEC0  4B FB CF D1 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 8020FF84 0020CEC4  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 8020FF88 0020CEC8  3B C0 00 00 */	li r30, 0
/* 8020FF8C 0020CECC  3B E3 88 6C */	addi r31, r3, j3dDefaultMtx@l
.L_8020FF90:
/* 8020FF90 0020CED0  7F 83 E3 78 */	mr r3, r28
/* 8020FF94 0020CED4  7F C4 F3 78 */	mr r4, r30
/* 8020FF98 0020CED8  4B FB D1 B9 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 8020FF9C 0020CEDC  3C 80 00 04 */	lis r4, 4
/* 8020FFA0 0020CEE0  7C 7D 1B 78 */	mr r29, r3
/* 8020FFA4 0020CEE4  4B E7 39 35 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 8020FFA8 0020CEE8  7F A3 EB 78 */	mr r3, r29
/* 8020FFAC 0020CEEC  7F E5 FB 78 */	mr r5, r31
/* 8020FFB0 0020CEF0  38 80 00 00 */	li r4, 0
/* 8020FFB4 0020CEF4  4B E7 3A FD */	bl simpleCalcMaterial__12J3DModelDataFUsPA4_f
/* 8020FFB8 0020CEF8  7F A3 EB 78 */	mr r3, r29
/* 8020FFBC 0020CEFC  4B E7 3A 75 */	bl makeSharedDL__12J3DModelDataFv
/* 8020FFC0 0020CF00  3B DE 00 01 */	addi r30, r30, 1
/* 8020FFC4 0020CF04  2C 1E 00 04 */	cmpwi r30, 4
/* 8020FFC8 0020CF08  41 80 FF C8 */	blt .L_8020FF90
/* 8020FFCC 0020CF0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020FFD0 0020CF10  7F 83 E3 78 */	mr r3, r28
/* 8020FFD4 0020CF14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020FFD8 0020CF18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020FFDC 0020CF1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020FFE0 0020CF20  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8020FFE4 0020CF24  7C 08 03 A6 */	mtlr r0
/* 8020FFE8 0020CF28  38 21 00 20 */	addi r1, r1, 0x20
/* 8020FFEC 0020CF2C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8ItemWeed3MgrFv

.fn doSimpleDraw__Q34Game8ItemWeed3MgrFP8Viewport, global
/* 8020FFF0 0020CF30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020FFF4 0020CF34  7C 08 02 A6 */	mflr r0
/* 8020FFF8 0020CF38  28 03 00 00 */	cmplwi r3, 0
/* 8020FFFC 0020CF3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80210000 0020CF40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80210004 0020CF44  7C 9F 23 78 */	mr r31, r4
/* 80210008 0020CF48  41 82 00 08 */	beq .L_80210010
/* 8021000C 0020CF4C  38 63 00 30 */	addi r3, r3, 0x30
.L_80210010:
/* 80210010 0020CF50  38 00 00 00 */	li r0, 0
/* 80210014 0020CF54  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80210018 0020CF58  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8021001C 0020CF5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210020 0020CF60  28 00 00 00 */	cmplwi r0, 0
/* 80210024 0020CF64  90 81 00 08 */	stw r4, 8(r1)
/* 80210028 0020CF68  90 01 00 0C */	stw r0, 0xc(r1)
/* 8021002C 0020CF6C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80210030 0020CF70  40 82 00 1C */	bne .L_8021004C
/* 80210034 0020CF74  81 83 00 00 */	lwz r12, 0(r3)
/* 80210038 0020CF78  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021003C 0020CF7C  7D 89 03 A6 */	mtctr r12
/* 80210040 0020CF80  4E 80 04 21 */	bctrl 
/* 80210044 0020CF84  90 61 00 0C */	stw r3, 0xc(r1)
/* 80210048 0020CF88  48 00 01 74 */	b .L_802101BC
.L_8021004C:
/* 8021004C 0020CF8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80210050 0020CF90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80210054 0020CF94  7D 89 03 A6 */	mtctr r12
/* 80210058 0020CF98  4E 80 04 21 */	bctrl 
/* 8021005C 0020CF9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80210060 0020CFA0  48 00 00 58 */	b .L_802100B8
.L_80210064:
/* 80210064 0020CFA4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80210068 0020CFA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021006C 0020CFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80210070 0020CFB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80210074 0020CFB4  7D 89 03 A6 */	mtctr r12
/* 80210078 0020CFB8  4E 80 04 21 */	bctrl 
/* 8021007C 0020CFBC  7C 64 1B 78 */	mr r4, r3
/* 80210080 0020CFC0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80210084 0020CFC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80210088 0020CFC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021008C 0020CFCC  7D 89 03 A6 */	mtctr r12
/* 80210090 0020CFD0  4E 80 04 21 */	bctrl 
/* 80210094 0020CFD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80210098 0020CFD8  40 82 01 24 */	bne .L_802101BC
/* 8021009C 0020CFDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802100A0 0020CFE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802100A4 0020CFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802100A8 0020CFE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802100AC 0020CFEC  7D 89 03 A6 */	mtctr r12
/* 802100B0 0020CFF0  4E 80 04 21 */	bctrl 
/* 802100B4 0020CFF4  90 61 00 0C */	stw r3, 0xc(r1)
.L_802100B8:
/* 802100B8 0020CFF8  81 81 00 08 */	lwz r12, 8(r1)
/* 802100BC 0020CFFC  38 61 00 08 */	addi r3, r1, 8
/* 802100C0 0020D000  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802100C4 0020D004  7D 89 03 A6 */	mtctr r12
/* 802100C8 0020D008  4E 80 04 21 */	bctrl 
/* 802100CC 0020D00C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802100D0 0020D010  41 82 FF 94 */	beq .L_80210064
/* 802100D4 0020D014  48 00 00 E8 */	b .L_802101BC
.L_802100D8:
/* 802100D8 0020D018  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802100DC 0020D01C  81 83 00 00 */	lwz r12, 0(r3)
/* 802100E0 0020D020  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802100E4 0020D024  7D 89 03 A6 */	mtctr r12
/* 802100E8 0020D028  4E 80 04 21 */	bctrl 
/* 802100EC 0020D02C  81 83 00 00 */	lwz r12, 0(r3)
/* 802100F0 0020D030  7F E4 FB 78 */	mr r4, r31
/* 802100F4 0020D034  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 802100F8 0020D038  7D 89 03 A6 */	mtctr r12
/* 802100FC 0020D03C  4E 80 04 21 */	bctrl 
/* 80210100 0020D040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210104 0020D044  28 00 00 00 */	cmplwi r0, 0
/* 80210108 0020D048  40 82 00 24 */	bne .L_8021012C
/* 8021010C 0020D04C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80210110 0020D050  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80210114 0020D054  81 83 00 00 */	lwz r12, 0(r3)
/* 80210118 0020D058  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021011C 0020D05C  7D 89 03 A6 */	mtctr r12
/* 80210120 0020D060  4E 80 04 21 */	bctrl 
/* 80210124 0020D064  90 61 00 0C */	stw r3, 0xc(r1)
/* 80210128 0020D068  48 00 00 94 */	b .L_802101BC
.L_8021012C:
/* 8021012C 0020D06C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80210130 0020D070  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80210134 0020D074  81 83 00 00 */	lwz r12, 0(r3)
/* 80210138 0020D078  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021013C 0020D07C  7D 89 03 A6 */	mtctr r12
/* 80210140 0020D080  4E 80 04 21 */	bctrl 
/* 80210144 0020D084  90 61 00 0C */	stw r3, 0xc(r1)
/* 80210148 0020D088  48 00 00 58 */	b .L_802101A0
.L_8021014C:
/* 8021014C 0020D08C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80210150 0020D090  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80210154 0020D094  81 83 00 00 */	lwz r12, 0(r3)
/* 80210158 0020D098  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021015C 0020D09C  7D 89 03 A6 */	mtctr r12
/* 80210160 0020D0A0  4E 80 04 21 */	bctrl 
/* 80210164 0020D0A4  7C 64 1B 78 */	mr r4, r3
/* 80210168 0020D0A8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8021016C 0020D0AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80210170 0020D0B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80210174 0020D0B4  7D 89 03 A6 */	mtctr r12
/* 80210178 0020D0B8  4E 80 04 21 */	bctrl 
/* 8021017C 0020D0BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80210180 0020D0C0  40 82 00 3C */	bne .L_802101BC
/* 80210184 0020D0C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80210188 0020D0C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021018C 0020D0CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80210190 0020D0D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80210194 0020D0D4  7D 89 03 A6 */	mtctr r12
/* 80210198 0020D0D8  4E 80 04 21 */	bctrl 
/* 8021019C 0020D0DC  90 61 00 0C */	stw r3, 0xc(r1)
.L_802101A0:
/* 802101A0 0020D0E0  81 81 00 08 */	lwz r12, 8(r1)
/* 802101A4 0020D0E4  38 61 00 08 */	addi r3, r1, 8
/* 802101A8 0020D0E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802101AC 0020D0EC  7D 89 03 A6 */	mtctr r12
/* 802101B0 0020D0F0  4E 80 04 21 */	bctrl 
/* 802101B4 0020D0F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802101B8 0020D0F8  41 82 FF 94 */	beq .L_8021014C
.L_802101BC:
/* 802101BC 0020D0FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802101C0 0020D100  81 83 00 00 */	lwz r12, 0(r3)
/* 802101C4 0020D104  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802101C8 0020D108  7D 89 03 A6 */	mtctr r12
/* 802101CC 0020D10C  4E 80 04 21 */	bctrl 
/* 802101D0 0020D110  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802101D4 0020D114  7C 04 18 40 */	cmplw r4, r3
/* 802101D8 0020D118  40 82 FF 00 */	bne .L_802100D8
/* 802101DC 0020D11C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802101E0 0020D120  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802101E4 0020D124  7C 08 03 A6 */	mtlr r0
/* 802101E8 0020D128  38 21 00 20 */	addi r1, r1, 0x20
/* 802101EC 0020D12C  4E 80 00 20 */	blr 
.endfn doSimpleDraw__Q34Game8ItemWeed3MgrFP8Viewport

.fn onLoadResources__Q34Game8ItemWeed3MgrFv, global
/* 802101F0 0020D130  4E 80 00 20 */	blr 
.endfn onLoadResources__Q34Game8ItemWeed3MgrFv

.fn getCaveName__Q34Game8ItemWeed3MgrFi, global
/* 802101F4 0020D134  38 62 BB E4 */	addi r3, r2, lbl_80519F44@sda21
/* 802101F8 0020D138  4E 80 00 20 */	blr 
.endfn getCaveName__Q34Game8ItemWeed3MgrFi

.fn getCaveID__Q34Game8ItemWeed3MgrFPc, global
/* 802101FC 0020D13C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210200 0020D140  7C 08 02 A6 */	mflr r0
/* 80210204 0020D144  38 62 BB E4 */	addi r3, r2, lbl_80519F44@sda21
/* 80210208 0020D148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021020C 0020D14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80210210 0020D150  7C 9F 23 78 */	mr r31, r4
/* 80210214 0020D154  4B EB A6 FD */	bl strlen
/* 80210218 0020D158  7C 65 1B 78 */	mr r5, r3
/* 8021021C 0020D15C  7F E4 FB 78 */	mr r4, r31
/* 80210220 0020D160  38 62 BB E4 */	addi r3, r2, lbl_80519F44@sda21
/* 80210224 0020D164  4B EB A4 5D */	bl strncmp
/* 80210228 0020D168  7C 03 00 D0 */	neg r0, r3
/* 8021022C 0020D16C  7C 00 1B 78 */	or r0, r0, r3
/* 80210230 0020D170  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 80210234 0020D174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80210238 0020D178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021023C 0020D17C  7C 08 03 A6 */	mtlr r0
/* 80210240 0020D180  38 21 00 10 */	addi r1, r1, 0x10
/* 80210244 0020D184  4E 80 00 20 */	blr 
.endfn getCaveID__Q34Game8ItemWeed3MgrFPc

.fn init__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4ItemPQ24Game8StateArg, global
/* 80210248 0020D188  4E 80 00 20 */	blr 
.endfn init__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4ItemPQ24Game8StateArg

.fn exec__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item, global
/* 8021024C 0020D18C  4E 80 00 20 */	blr 
.endfn exec__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item

.fn cleanup__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item, global
/* 80210250 0020D190  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item

.fn generatorNewItemParm__Q34Game8ItemWeed3MgrFv, global
/* 80210254 0020D194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210258 0020D198  7C 08 02 A6 */	mflr r0
/* 8021025C 0020D19C  38 60 00 0C */	li r3, 0xc
/* 80210260 0020D1A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210264 0020D1A4  4B E1 3C 41 */	bl __nw__FUl
/* 80210268 0020D1A8  28 03 00 00 */	cmplwi r3, 0
/* 8021026C 0020D1AC  41 82 00 2C */	beq .L_80210298
/* 80210270 0020D1B0  3C 80 80 4B */	lis r4, __vt__Q24Game11GenItemParm@ha
/* 80210274 0020D1B4  3C A0 80 4C */	lis r5, __vt__11GenWeedParm@ha
/* 80210278 0020D1B8  38 04 26 24 */	addi r0, r4, __vt__Q24Game11GenItemParm@l
/* 8021027C 0020D1BC  38 80 00 32 */	li r4, 0x32
/* 80210280 0020D1C0  90 03 00 00 */	stw r0, 0(r3)
/* 80210284 0020D1C4  38 A5 FB B8 */	addi r5, r5, __vt__11GenWeedParm@l
/* 80210288 0020D1C8  38 00 00 00 */	li r0, 0
/* 8021028C 0020D1CC  90 A3 00 00 */	stw r5, 0(r3)
/* 80210290 0020D1D0  90 83 00 08 */	stw r4, 8(r3)
/* 80210294 0020D1D4  B0 03 00 04 */	sth r0, 4(r3)
.L_80210298:
/* 80210298 0020D1D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021029C 0020D1DC  7C 08 03 A6 */	mtlr r0
/* 802102A0 0020D1E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802102A4 0020D1E4  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q34Game8ItemWeed3MgrFv

.fn generatorWrite__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParm, global
/* 802102A8 0020D1E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802102AC 0020D1EC  7C 08 02 A6 */	mflr r0
/* 802102B0 0020D1F0  3C 60 80 48 */	lis r3, lbl_80481FC0@ha
/* 802102B4 0020D1F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802102B8 0020D1F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802102BC 0020D1FC  3B E3 1F C0 */	addi r31, r3, lbl_80481FC0@l
/* 802102C0 0020D200  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802102C4 0020D204  7C BE 2B 79 */	or. r30, r5, r5
/* 802102C8 0020D208  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802102CC 0020D20C  7C 9D 23 78 */	mr r29, r4
/* 802102D0 0020D210  40 82 00 18 */	bne .L_802102E8
/* 802102D4 0020D214  38 7F 00 18 */	addi r3, r31, 0x18
/* 802102D8 0020D218  38 BF 00 28 */	addi r5, r31, 0x28
/* 802102DC 0020D21C  38 80 01 CC */	li r4, 0x1cc
/* 802102E0 0020D220  4C C6 31 82 */	crclr 6
/* 802102E4 0020D224  4B E1 A3 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802102E8:
/* 802102E8 0020D228  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 802102EC 0020D22C  7F A3 EB 78 */	mr r3, r29
/* 802102F0 0020D230  48 20 41 45 */	bl textWriteTab__6StreamFi
/* 802102F4 0020D234  80 1E 00 08 */	lwz r0, 8(r30)
/* 802102F8 0020D238  7F A3 EB 78 */	mr r3, r29
/* 802102FC 0020D23C  7C 04 07 34 */	extsh r4, r0
/* 80210300 0020D240  48 20 54 31 */	bl writeShort__6StreamFs
/* 80210304 0020D244  7F A3 EB 78 */	mr r3, r29
/* 80210308 0020D248  38 9F 00 A0 */	addi r4, r31, 0xa0
/* 8021030C 0020D24C  4C C6 31 82 */	crclr 6
/* 80210310 0020D250  48 20 3E CD */	bl textWriteText__6StreamFPce
/* 80210314 0020D254  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 80210318 0020D258  7F A3 EB 78 */	mr r3, r29
/* 8021031C 0020D25C  48 20 41 19 */	bl textWriteTab__6StreamFi
/* 80210320 0020D260  A8 9E 00 04 */	lha r4, 4(r30)
/* 80210324 0020D264  7F A3 EB 78 */	mr r3, r29
/* 80210328 0020D268  48 20 54 09 */	bl writeShort__6StreamFs
/* 8021032C 0020D26C  7F A3 EB 78 */	mr r3, r29
/* 80210330 0020D270  38 9F 00 B0 */	addi r4, r31, 0xb0
/* 80210334 0020D274  4C C6 31 82 */	crclr 6
/* 80210338 0020D278  48 20 3E A5 */	bl textWriteText__6StreamFPce
/* 8021033C 0020D27C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80210340 0020D280  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80210344 0020D284  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80210348 0020D288  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8021034C 0020D28C  7C 08 03 A6 */	mtlr r0
/* 80210350 0020D290  38 21 00 20 */	addi r1, r1, 0x20
/* 80210354 0020D294  4E 80 00 20 */	blr 
.endfn generatorWrite__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParmUl, global
/* 80210358 0020D298  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8021035C 0020D29C  7C 08 02 A6 */	mflr r0
/* 80210360 0020D2A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80210364 0020D2A4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80210368 0020D2A8  7C DF 33 78 */	mr r31, r6
/* 8021036C 0020D2AC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80210370 0020D2B0  7C BE 2B 79 */	or. r30, r5, r5
/* 80210374 0020D2B4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80210378 0020D2B8  7C 9D 23 78 */	mr r29, r4
/* 8021037C 0020D2BC  40 82 00 20 */	bne .L_8021039C
/* 80210380 0020D2C0  3C 60 80 48 */	lis r3, lbl_80481FD8@ha
/* 80210384 0020D2C4  3C A0 80 48 */	lis r5, lbl_80481FE8@ha
/* 80210388 0020D2C8  38 63 1F D8 */	addi r3, r3, lbl_80481FD8@l
/* 8021038C 0020D2CC  38 80 01 DA */	li r4, 0x1da
/* 80210390 0020D2D0  38 A5 1F E8 */	addi r5, r5, lbl_80481FE8@l
/* 80210394 0020D2D4  4C C6 31 82 */	crclr 6
/* 80210398 0020D2D8  4B E1 A2 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021039C:
/* 8021039C 0020D2DC  7F A3 EB 78 */	mr r3, r29
/* 802103A0 0020D2E0  48 20 43 C5 */	bl readShort__6StreamFv
/* 802103A4 0020D2E4  3C 80 30 30 */	lis r4, 0x30303031@ha
/* 802103A8 0020D2E8  7C 63 07 34 */	extsh r3, r3
/* 802103AC 0020D2EC  38 04 30 31 */	addi r0, r4, 0x30303031@l
/* 802103B0 0020D2F0  90 7E 00 08 */	stw r3, 8(r30)
/* 802103B4 0020D2F4  7C 1F 00 40 */	cmplw r31, r0
/* 802103B8 0020D2F8  41 80 00 10 */	blt .L_802103C8
/* 802103BC 0020D2FC  7F A3 EB 78 */	mr r3, r29
/* 802103C0 0020D300  48 20 43 A5 */	bl readShort__6StreamFv
/* 802103C4 0020D304  B0 7E 00 04 */	sth r3, 4(r30)
.L_802103C8:
/* 802103C8 0020D308  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802103CC 0020D30C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802103D0 0020D310  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802103D4 0020D314  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802103D8 0020D318  7C 08 03 A6 */	mtlr r0
/* 802103DC 0020D31C  38 21 00 20 */	addi r1, r1, 0x20
/* 802103E0 0020D320  4E 80 00 20 */	blr 
.endfn generatorRead__Q34Game8ItemWeed3MgrFR6StreamPQ24Game11GenItemParmUl

.fn "generatorBirth__Q34Game8ItemWeed3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 802103E4 0020D324  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802103E8 0020D328  7C 08 02 A6 */	mflr r0
/* 802103EC 0020D32C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802103F0 0020D330  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802103F4 0020D334  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802103F8 0020D338  7C DE 33 79 */	or. r30, r6, r6
/* 802103FC 0020D33C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80210400 0020D340  7C 9D 23 78 */	mr r29, r4
/* 80210404 0020D344  93 81 00 20 */	stw r28, 0x20(r1)
/* 80210408 0020D348  7C 7C 1B 78 */	mr r28, r3
/* 8021040C 0020D34C  40 82 00 20 */	bne .L_8021042C
/* 80210410 0020D350  3C 60 80 48 */	lis r3, lbl_80481FD8@ha
/* 80210414 0020D354  3C A0 80 48 */	lis r5, lbl_80481FE8@ha
/* 80210418 0020D358  38 63 1F D8 */	addi r3, r3, lbl_80481FD8@l
/* 8021041C 0020D35C  38 80 01 E4 */	li r4, 0x1e4
/* 80210420 0020D360  38 A5 1F E8 */	addi r5, r5, lbl_80481FE8@l
/* 80210424 0020D364  4C C6 31 82 */	crclr 6
/* 80210428 0020D368  4B E1 A2 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021042C:
/* 8021042C 0020D36C  38 60 01 F0 */	li r3, 0x1f0
/* 80210430 0020D370  4B E1 3A 75 */	bl __nw__FUl
/* 80210434 0020D374  7C 7F 1B 79 */	or. r31, r3, r3
/* 80210438 0020D378  41 82 01 14 */	beq .L_8021054C
/* 8021043C 0020D37C  38 80 04 12 */	li r4, 0x412
/* 80210440 0020D380  4B FB BB A9 */	bl __ct__Q24Game8BaseItemFi
/* 80210444 0020D384  3C 60 80 4C */	lis r3, "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@ha
/* 80210448 0020D388  38 00 00 00 */	li r0, 0
/* 8021044C 0020D38C  38 83 FF 24 */	addi r4, r3, "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@l
/* 80210450 0020D390  38 60 00 1C */	li r3, 0x1c
/* 80210454 0020D394  90 9F 00 00 */	stw r4, 0(r31)
/* 80210458 0020D398  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 8021045C 0020D39C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80210460 0020D3A0  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 80210464 0020D3A4  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 80210468 0020D3A8  4B E1 3A 3D */	bl __nw__FUl
/* 8021046C 0020D3AC  28 03 00 00 */	cmplwi r3, 0
/* 80210470 0020D3B0  41 82 00 30 */	beq .L_802104A0
/* 80210474 0020D3B4  3C 80 80 4C */	lis r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@ha
/* 80210478 0020D3B8  3C A0 80 4C */	lis r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@ha
/* 8021047C 0020D3BC  38 04 FF 0C */	addi r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@l
/* 80210480 0020D3C0  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemWeed3FSM@ha
/* 80210484 0020D3C4  90 03 00 00 */	stw r0, 0(r3)
/* 80210488 0020D3C8  38 C0 FF FF */	li r6, -1
/* 8021048C 0020D3CC  38 A5 FE F4 */	addi r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@l
/* 80210490 0020D3D0  38 04 01 D0 */	addi r0, r4, __vt__Q34Game8ItemWeed3FSM@l
/* 80210494 0020D3D4  90 C3 00 18 */	stw r6, 0x18(r3)
/* 80210498 0020D3D8  90 A3 00 00 */	stw r5, 0(r3)
/* 8021049C 0020D3DC  90 03 00 00 */	stw r0, 0(r3)
.L_802104A0:
/* 802104A0 0020D3E0  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 802104A4 0020D3E4  7F E4 FB 78 */	mr r4, r31
/* 802104A8 0020D3E8  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 802104AC 0020D3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802104B0 0020D3F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802104B4 0020D3F4  7D 89 03 A6 */	mtctr r12
/* 802104B8 0020D3F8  4E 80 04 21 */	bctrl 
/* 802104BC 0020D3FC  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed4Item@ha
/* 802104C0 0020D400  3C 80 80 4C */	lis r4, __vt__Q28SysShape9MtxObject@ha
/* 802104C4 0020D404  38 A3 FC BC */	addi r5, r3, __vt__Q34Game8ItemWeed4Item@l
/* 802104C8 0020D408  3C 60 80 4C */	lis r3, __vt__Q44Game8ItemWeed4Item10DummyShape@ha
/* 802104CC 0020D40C  90 BF 00 00 */	stw r5, 0(r31)
/* 802104D0 0020D410  38 A5 01 B0 */	addi r5, r5, 0x1b0
/* 802104D4 0020D414  38 84 BF 24 */	addi r4, r4, __vt__Q28SysShape9MtxObject@l
/* 802104D8 0020D418  38 03 FE E4 */	addi r0, r3, __vt__Q44Game8ItemWeed4Item10DummyShape@l
/* 802104DC 0020D41C  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802104E0 0020D420  38 60 00 08 */	li r3, 8
/* 802104E4 0020D424  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802104E8 0020D428  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802104EC 0020D42C  4B E1 39 B9 */	bl __nw__FUl
/* 802104F0 0020D430  7C 60 1B 79 */	or. r0, r3, r3
/* 802104F4 0020D434  41 82 00 0C */	beq .L_80210500
/* 802104F8 0020D438  4B F2 3B 65 */	bl __ct__8CollTreeFv
/* 802104FC 0020D43C  7C 60 1B 78 */	mr r0, r3
.L_80210500:
/* 80210500 0020D440  90 1F 01 14 */	stw r0, 0x114(r31)
/* 80210504 0020D444  38 1F 01 38 */	addi r0, r31, 0x138
/* 80210508 0020D448  C0 02 BB C0 */	lfs f0, lbl_80519F20@sda21(r2)
/* 8021050C 0020D44C  38 9F 01 E0 */	addi r4, r31, 0x1e0
/* 80210510 0020D450  38 DF 01 C4 */	addi r6, r31, 0x1c4
/* 80210514 0020D454  38 A0 00 00 */	li r5, 0
/* 80210518 0020D458  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8021051C 0020D45C  38 E0 00 00 */	li r7, 0
/* 80210520 0020D460  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80210524 0020D464  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80210528 0020D468  4B F2 3B 89 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 8021052C 0020D46C  7F E3 FB 78 */	mr r3, r31
/* 80210530 0020D470  38 80 00 00 */	li r4, 0
/* 80210534 0020D474  81 9F 00 00 */	lwz r12, 0(r31)
/* 80210538 0020D478  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8021053C 0020D47C  7D 89 03 A6 */	mtctr r12
/* 80210540 0020D480  4E 80 04 21 */	bctrl 
/* 80210544 0020D484  38 00 00 00 */	li r0, 0
/* 80210548 0020D488  90 1F 01 EC */	stw r0, 0x1ec(r31)
.L_8021054C:
/* 8021054C 0020D48C  7F 83 E3 78 */	mr r3, r28
/* 80210550 0020D490  7F E4 FB 78 */	mr r4, r31
/* 80210554 0020D494  4B FB D2 D5 */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 80210558 0020D498  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8021055C 0020D49C  A8 DE 00 04 */	lha r6, 4(r30)
/* 80210560 0020D4A0  80 BE 00 08 */	lwz r5, 8(r30)
/* 80210564 0020D4A4  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 80210568 0020D4A8  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemWeed7InitArg@ha
/* 8021056C 0020D4AC  7F E3 FB 78 */	mr r3, r31
/* 80210570 0020D4B0  90 01 00 08 */	stw r0, 8(r1)
/* 80210574 0020D4B4  38 04 FB AC */	addi r0, r4, __vt__Q34Game8ItemWeed7InitArg@l
/* 80210578 0020D4B8  38 81 00 08 */	addi r4, r1, 8
/* 8021057C 0020D4BC  90 01 00 08 */	stw r0, 8(r1)
/* 80210580 0020D4C0  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80210584 0020D4C4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80210588 0020D4C8  4B F2 AA 41 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8021058C 0020D4CC  7F E3 FB 78 */	mr r3, r31
/* 80210590 0020D4D0  7F A4 EB 78 */	mr r4, r29
/* 80210594 0020D4D4  38 A0 00 00 */	li r5, 0
/* 80210598 0020D4D8  4B F2 AC 11 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8021059C 0020D4DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802105A0 0020D4E0  7F E3 FB 78 */	mr r3, r31
/* 802105A4 0020D4E4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802105A8 0020D4E8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802105AC 0020D4EC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802105B0 0020D4F0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 802105B4 0020D4F4  7C 08 03 A6 */	mtlr r0
/* 802105B8 0020D4F8  38 21 00 30 */	addi r1, r1, 0x30
/* 802105BC 0020D4FC  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game8ItemWeed3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn getName__Q34Game8ItemWeed7InitArgFv, weak
/* 802105C0 0020D500  3C 60 80 48 */	lis r3, lbl_80482080@ha
/* 802105C4 0020D504  38 63 20 80 */	addi r3, r3, lbl_80482080@l
/* 802105C8 0020D508  4E 80 00 20 */	blr 
.endfn getName__Q34Game8ItemWeed7InitArgFv

.fn __dt__Q34Game8ItemWeed3MgrFv, weak
/* 802105CC 0020D50C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802105D0 0020D510  7C 08 02 A6 */	mflr r0
/* 802105D4 0020D514  90 01 00 14 */	stw r0, 0x14(r1)
/* 802105D8 0020D518  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802105DC 0020D51C  7C 9F 23 78 */	mr r31, r4
/* 802105E0 0020D520  93 C1 00 08 */	stw r30, 8(r1)
/* 802105E4 0020D524  7C 7E 1B 79 */	or. r30, r3, r3
/* 802105E8 0020D528  41 82 00 FC */	beq .L_802106E4
/* 802105EC 0020D52C  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed3Mgr@ha
/* 802105F0 0020D530  38 63 FB F8 */	addi r3, r3, __vt__Q34Game8ItemWeed3Mgr@l
/* 802105F4 0020D534  90 7E 00 00 */	stw r3, 0(r30)
/* 802105F8 0020D538  38 03 00 74 */	addi r0, r3, 0x74
/* 802105FC 0020D53C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80210600 0020D540  41 82 00 D4 */	beq .L_802106D4
/* 80210604 0020D544  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 80210608 0020D548  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 8021060C 0020D54C  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 80210610 0020D550  90 7E 00 00 */	stw r3, 0(r30)
/* 80210614 0020D554  38 03 00 74 */	addi r0, r3, 0x74
/* 80210618 0020D558  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8021061C 0020D55C  41 82 00 84 */	beq .L_802106A0
/* 80210620 0020D560  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 80210624 0020D564  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 80210628 0020D568  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 8021062C 0020D56C  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 80210630 0020D570  38 04 00 2C */	addi r0, r4, 0x2c
/* 80210634 0020D574  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80210638 0020D578  41 82 00 18 */	beq .L_80210650
/* 8021063C 0020D57C  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 80210640 0020D580  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 80210644 0020D584  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 80210648 0020D588  38 80 00 00 */	li r4, 0
/* 8021064C 0020D58C  48 20 0F 3D */	bl __dt__5CNodeFv
.L_80210650:
/* 80210650 0020D590  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 80210654 0020D594  41 82 00 4C */	beq .L_802106A0
/* 80210658 0020D598  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 8021065C 0020D59C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 80210660 0020D5A0  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 80210664 0020D5A4  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 80210668 0020D5A8  38 03 00 2C */	addi r0, r3, 0x2c
/* 8021066C 0020D5AC  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80210670 0020D5B0  41 82 00 30 */	beq .L_802106A0
/* 80210674 0020D5B4  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 80210678 0020D5B8  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 8021067C 0020D5BC  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 80210680 0020D5C0  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80210684 0020D5C4  41 82 00 1C */	beq .L_802106A0
/* 80210688 0020D5C8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8021068C 0020D5CC  38 7E 00 4C */	addi r3, r30, 0x4c
/* 80210690 0020D5D0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80210694 0020D5D4  38 80 00 00 */	li r4, 0
/* 80210698 0020D5D8  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8021069C 0020D5DC  48 20 0E ED */	bl __dt__5CNodeFv
.L_802106A0:
/* 802106A0 0020D5E0  34 1E 00 30 */	addic. r0, r30, 0x30
/* 802106A4 0020D5E4  41 82 00 30 */	beq .L_802106D4
/* 802106A8 0020D5E8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 802106AC 0020D5EC  34 1E 00 30 */	addic. r0, r30, 0x30
/* 802106B0 0020D5F0  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 802106B4 0020D5F4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 802106B8 0020D5F8  41 82 00 1C */	beq .L_802106D4
/* 802106BC 0020D5FC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802106C0 0020D600  38 7E 00 30 */	addi r3, r30, 0x30
/* 802106C4 0020D604  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802106C8 0020D608  38 80 00 00 */	li r4, 0
/* 802106CC 0020D60C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 802106D0 0020D610  48 20 0E B9 */	bl __dt__5CNodeFv
.L_802106D4:
/* 802106D4 0020D614  7F E0 07 35 */	extsh. r0, r31
/* 802106D8 0020D618  40 81 00 0C */	ble .L_802106E4
/* 802106DC 0020D61C  7F C3 F3 78 */	mr r3, r30
/* 802106E0 0020D620  4B E1 39 D5 */	bl __dl__FPv
.L_802106E4:
/* 802106E4 0020D624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802106E8 0020D628  7F C3 F3 78 */	mr r3, r30
/* 802106EC 0020D62C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802106F0 0020D630  83 C1 00 08 */	lwz r30, 8(r1)
/* 802106F4 0020D634  7C 08 03 A6 */	mtlr r0
/* 802106F8 0020D638  38 21 00 10 */	addi r1, r1, 0x10
/* 802106FC 0020D63C  4E 80 00 20 */	blr 
.endfn __dt__Q34Game8ItemWeed3MgrFv

.fn doNew__Q34Game8ItemWeed3MgrFv, weak
/* 80210700 0020D640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210704 0020D644  7C 08 02 A6 */	mflr r0
/* 80210708 0020D648  38 60 01 F0 */	li r3, 0x1f0
/* 8021070C 0020D64C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210710 0020D650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80210714 0020D654  4B E1 37 91 */	bl __nw__FUl
/* 80210718 0020D658  7C 7F 1B 79 */	or. r31, r3, r3
/* 8021071C 0020D65C  41 82 01 14 */	beq .L_80210830
/* 80210720 0020D660  38 80 04 12 */	li r4, 0x412
/* 80210724 0020D664  4B FB B8 C5 */	bl __ct__Q24Game8BaseItemFi
/* 80210728 0020D668  3C 60 80 4C */	lis r3, "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@ha
/* 8021072C 0020D66C  38 00 00 00 */	li r0, 0
/* 80210730 0020D670  38 83 FF 24 */	addi r4, r3, "__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@l
/* 80210734 0020D674  38 60 00 1C */	li r3, 0x1c
/* 80210738 0020D678  90 9F 00 00 */	stw r4, 0(r31)
/* 8021073C 0020D67C  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 80210740 0020D680  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80210744 0020D684  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 80210748 0020D688  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 8021074C 0020D68C  4B E1 37 59 */	bl __nw__FUl
/* 80210750 0020D690  28 03 00 00 */	cmplwi r3, 0
/* 80210754 0020D694  41 82 00 30 */	beq .L_80210784
/* 80210758 0020D698  3C 80 80 4C */	lis r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@ha
/* 8021075C 0020D69C  3C A0 80 4C */	lis r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@ha
/* 80210760 0020D6A0  38 04 FF 0C */	addi r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@l
/* 80210764 0020D6A4  3C 80 80 4C */	lis r4, __vt__Q34Game8ItemWeed3FSM@ha
/* 80210768 0020D6A8  90 03 00 00 */	stw r0, 0(r3)
/* 8021076C 0020D6AC  38 C0 FF FF */	li r6, -1
/* 80210770 0020D6B0  38 A5 FE F4 */	addi r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@l
/* 80210774 0020D6B4  38 04 01 D0 */	addi r0, r4, __vt__Q34Game8ItemWeed3FSM@l
/* 80210778 0020D6B8  90 C3 00 18 */	stw r6, 0x18(r3)
/* 8021077C 0020D6BC  90 A3 00 00 */	stw r5, 0(r3)
/* 80210780 0020D6C0  90 03 00 00 */	stw r0, 0(r3)
.L_80210784:
/* 80210784 0020D6C4  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 80210788 0020D6C8  7F E4 FB 78 */	mr r4, r31
/* 8021078C 0020D6CC  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 80210790 0020D6D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80210794 0020D6D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80210798 0020D6D8  7D 89 03 A6 */	mtctr r12
/* 8021079C 0020D6DC  4E 80 04 21 */	bctrl 
/* 802107A0 0020D6E0  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed4Item@ha
/* 802107A4 0020D6E4  3C 80 80 4C */	lis r4, __vt__Q28SysShape9MtxObject@ha
/* 802107A8 0020D6E8  38 A3 FC BC */	addi r5, r3, __vt__Q34Game8ItemWeed4Item@l
/* 802107AC 0020D6EC  3C 60 80 4C */	lis r3, __vt__Q44Game8ItemWeed4Item10DummyShape@ha
/* 802107B0 0020D6F0  90 BF 00 00 */	stw r5, 0(r31)
/* 802107B4 0020D6F4  38 A5 01 B0 */	addi r5, r5, 0x1b0
/* 802107B8 0020D6F8  38 84 BF 24 */	addi r4, r4, __vt__Q28SysShape9MtxObject@l
/* 802107BC 0020D6FC  38 03 FE E4 */	addi r0, r3, __vt__Q44Game8ItemWeed4Item10DummyShape@l
/* 802107C0 0020D700  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802107C4 0020D704  38 60 00 08 */	li r3, 8
/* 802107C8 0020D708  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802107CC 0020D70C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802107D0 0020D710  4B E1 36 D5 */	bl __nw__FUl
/* 802107D4 0020D714  7C 60 1B 79 */	or. r0, r3, r3
/* 802107D8 0020D718  41 82 00 0C */	beq .L_802107E4
/* 802107DC 0020D71C  4B F2 38 81 */	bl __ct__8CollTreeFv
/* 802107E0 0020D720  7C 60 1B 78 */	mr r0, r3
.L_802107E4:
/* 802107E4 0020D724  90 1F 01 14 */	stw r0, 0x114(r31)
/* 802107E8 0020D728  38 1F 01 38 */	addi r0, r31, 0x138
/* 802107EC 0020D72C  C0 02 BB C0 */	lfs f0, lbl_80519F20@sda21(r2)
/* 802107F0 0020D730  38 9F 01 E0 */	addi r4, r31, 0x1e0
/* 802107F4 0020D734  38 DF 01 C4 */	addi r6, r31, 0x1c4
/* 802107F8 0020D738  38 A0 00 00 */	li r5, 0
/* 802107FC 0020D73C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80210800 0020D740  38 E0 00 00 */	li r7, 0
/* 80210804 0020D744  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80210808 0020D748  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8021080C 0020D74C  4B F2 38 A5 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 80210810 0020D750  7F E3 FB 78 */	mr r3, r31
/* 80210814 0020D754  38 80 00 00 */	li r4, 0
/* 80210818 0020D758  81 9F 00 00 */	lwz r12, 0(r31)
/* 8021081C 0020D75C  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80210820 0020D760  7D 89 03 A6 */	mtctr r12
/* 80210824 0020D764  4E 80 04 21 */	bctrl 
/* 80210828 0020D768  38 00 00 00 */	li r0, 0
/* 8021082C 0020D76C  90 1F 01 EC */	stw r0, 0x1ec(r31)
.L_80210830:
/* 80210830 0020D770  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210834 0020D774  7F E3 FB 78 */	mr r3, r31
/* 80210838 0020D778  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021083C 0020D77C  7C 08 03 A6 */	mtlr r0
/* 80210840 0020D780  38 21 00 10 */	addi r1, r1, 0x10
/* 80210844 0020D784  4E 80 00 20 */	blr 
.endfn doNew__Q34Game8ItemWeed3MgrFv

.fn generatorGetID__Q34Game8ItemWeed3MgrFv, weak
/* 80210848 0020D788  3C 60 77 65 */	lis r3, 0x77656564@ha
/* 8021084C 0020D78C  38 63 65 64 */	addi r3, r3, 0x77656564@l
/* 80210850 0020D790  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game8ItemWeed3MgrFv

.fn generatorLocalVersion__Q34Game8ItemWeed3MgrFv, weak
/* 80210854 0020D794  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 80210858 0020D798  38 63 30 31 */	addi r3, r3, 0x30303031@l
/* 8021085C 0020D79C  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q34Game8ItemWeed3MgrFv

.fn getCreatureName__Q34Game8ItemWeed4ItemFv, weak
/* 80210860 0020D7A0  38 62 BB EC */	addi r3, r2, lbl_80519F4C@sda21
/* 80210864 0020D7A4  4E 80 00 20 */	blr 
.endfn getCreatureName__Q34Game8ItemWeed4ItemFv

.fn getFlockMgr__Q34Game8ItemWeed4ItemFv, weak
/* 80210868 0020D7A8  80 63 01 E8 */	lwz r3, 0x1e8(r3)
/* 8021086C 0020D7AC  4E 80 00 20 */	blr 
.endfn getFlockMgr__Q34Game8ItemWeed4ItemFv

.fn makeTrMatrix__Q34Game8ItemWeed4ItemFv, weak
/* 80210870 0020D7B0  4E 80 00 20 */	blr 
.endfn makeTrMatrix__Q34Game8ItemWeed4ItemFv

.fn getMatrix__Q44Game8ItemWeed4Item10DummyShapeFi, weak
/* 80210874 0020D7B4  80 63 00 04 */	lwz r3, 4(r3)
/* 80210878 0020D7B8  4E 80 00 20 */	blr 
.endfn getMatrix__Q44Game8ItemWeed4Item10DummyShapeFi

.fn "doAI__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>Fv", weak
/* 8021087C 0020D7BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210880 0020D7C0  7C 08 02 A6 */	mflr r0
/* 80210884 0020D7C4  7C 64 1B 78 */	mr r4, r3
/* 80210888 0020D7C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021088C 0020D7CC  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 80210890 0020D7D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80210894 0020D7D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80210898 0020D7D8  7D 89 03 A6 */	mtctr r12
/* 8021089C 0020D7DC  4E 80 04 21 */	bctrl 
/* 802108A0 0020D7E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802108A4 0020D7E4  7C 08 03 A6 */	mtlr r0
/* 802108A8 0020D7E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802108AC 0020D7EC  4E 80 00 20 */	blr 
.endfn "doAI__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>Fv"

.fn __dt__Q34Game8ItemWeed7WeedMgrFv, weak
/* 802108B0 0020D7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802108B4 0020D7F4  7C 08 02 A6 */	mflr r0
/* 802108B8 0020D7F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802108BC 0020D7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802108C0 0020D800  7C 9F 23 78 */	mr r31, r4
/* 802108C4 0020D804  93 C1 00 08 */	stw r30, 8(r1)
/* 802108C8 0020D808  7C 7E 1B 79 */	or. r30, r3, r3
/* 802108CC 0020D80C  41 82 00 E0 */	beq .L_802109AC
/* 802108D0 0020D810  3C 60 80 4C */	lis r3, __vt__Q34Game8ItemWeed7WeedMgr@ha
/* 802108D4 0020D814  38 63 01 E8 */	addi r3, r3, __vt__Q34Game8ItemWeed7WeedMgr@l
/* 802108D8 0020D818  90 7E 00 00 */	stw r3, 0(r30)
/* 802108DC 0020D81C  38 03 00 30 */	addi r0, r3, 0x30
/* 802108E0 0020D820  90 1E 00 20 */	stw r0, 0x20(r30)
/* 802108E4 0020D824  41 82 00 B8 */	beq .L_8021099C
/* 802108E8 0020D828  3C 60 80 4C */	lis r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
/* 802108EC 0020D82C  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 802108F0 0020D830  38 63 03 60 */	addi r3, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
/* 802108F4 0020D834  90 7E 00 00 */	stw r3, 0(r30)
/* 802108F8 0020D838  38 03 00 30 */	addi r0, r3, 0x30
/* 802108FC 0020D83C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80210900 0020D840  41 82 00 68 */	beq .L_80210968
/* 80210904 0020D844  3C 60 80 4C */	lis r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 80210908 0020D848  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8021090C 0020D84C  38 63 02 D4 */	addi r3, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 80210910 0020D850  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 80210914 0020D854  38 03 00 2C */	addi r0, r3, 0x2c
/* 80210918 0020D858  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8021091C 0020D85C  41 82 00 4C */	beq .L_80210968
/* 80210920 0020D860  3C 60 80 4C */	lis r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 80210924 0020D864  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 80210928 0020D868  38 63 02 58 */	addi r3, r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 8021092C 0020D86C  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 80210930 0020D870  38 03 00 2C */	addi r0, r3, 0x2c
/* 80210934 0020D874  90 1E 00 58 */	stw r0, 0x58(r30)
/* 80210938 0020D878  41 82 00 30 */	beq .L_80210968
/* 8021093C 0020D87C  3C 60 80 4C */	lis r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 80210940 0020D880  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 80210944 0020D884  38 03 03 D0 */	addi r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 80210948 0020D888  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8021094C 0020D88C  41 82 00 1C */	beq .L_80210968
/* 80210950 0020D890  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80210954 0020D894  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80210958 0020D898  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8021095C 0020D89C  38 80 00 00 */	li r4, 0
/* 80210960 0020D8A0  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80210964 0020D8A4  48 20 0C 25 */	bl __dt__5CNodeFv
.L_80210968:
/* 80210968 0020D8A8  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8021096C 0020D8AC  41 82 00 30 */	beq .L_8021099C
/* 80210970 0020D8B0  3C 60 80 4C */	lis r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 80210974 0020D8B4  34 1E 00 20 */	addic. r0, r30, 0x20
/* 80210978 0020D8B8  38 03 03 D0 */	addi r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 8021097C 0020D8BC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80210980 0020D8C0  41 82 00 1C */	beq .L_8021099C
/* 80210984 0020D8C4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80210988 0020D8C8  38 7E 00 20 */	addi r3, r30, 0x20
/* 8021098C 0020D8CC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80210990 0020D8D0  38 80 00 00 */	li r4, 0
/* 80210994 0020D8D4  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80210998 0020D8D8  48 20 0B F1 */	bl __dt__5CNodeFv
.L_8021099C:
/* 8021099C 0020D8DC  7F E0 07 35 */	extsh. r0, r31
/* 802109A0 0020D8E0  40 81 00 0C */	ble .L_802109AC
/* 802109A4 0020D8E4  7F C3 F3 78 */	mr r3, r30
/* 802109A8 0020D8E8  4B E1 37 0D */	bl __dl__FPv
.L_802109AC:
/* 802109AC 0020D8EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802109B0 0020D8F0  7F C3 F3 78 */	mr r3, r30
/* 802109B4 0020D8F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802109B8 0020D8F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802109BC 0020D8FC  7C 08 03 A6 */	mtlr r0
/* 802109C0 0020D900  38 21 00 10 */	addi r1, r1, 0x10
/* 802109C4 0020D904  4E 80 00 20 */	blr 
.endfn __dt__Q34Game8ItemWeed7WeedMgrFv

.fn "__dt__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 802109C8 0020D908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802109CC 0020D90C  7C 08 02 A6 */	mflr r0
/* 802109D0 0020D910  90 01 00 14 */	stw r0, 0x14(r1)
/* 802109D4 0020D914  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802109D8 0020D918  7C 9F 23 78 */	mr r31, r4
/* 802109DC 0020D91C  93 C1 00 08 */	stw r30, 8(r1)
/* 802109E0 0020D920  7C 7E 1B 79 */	or. r30, r3, r3
/* 802109E4 0020D924  41 82 00 50 */	beq .L_80210A34
/* 802109E8 0020D928  3C 80 80 4C */	lis r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 802109EC 0020D92C  38 84 02 58 */	addi r4, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 802109F0 0020D930  90 9E 00 00 */	stw r4, 0(r30)
/* 802109F4 0020D934  38 04 00 2C */	addi r0, r4, 0x2c
/* 802109F8 0020D938  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802109FC 0020D93C  41 82 00 28 */	beq .L_80210A24
/* 80210A00 0020D940  3C 80 80 4C */	lis r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 80210A04 0020D944  38 04 03 D0 */	addi r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 80210A08 0020D948  90 1E 00 00 */	stw r0, 0(r30)
/* 80210A0C 0020D94C  41 82 00 18 */	beq .L_80210A24
/* 80210A10 0020D950  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80210A14 0020D954  38 80 00 00 */	li r4, 0
/* 80210A18 0020D958  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80210A1C 0020D95C  90 1E 00 00 */	stw r0, 0(r30)
/* 80210A20 0020D960  48 20 0B 69 */	bl __dt__5CNodeFv
.L_80210A24:
/* 80210A24 0020D964  7F E0 07 35 */	extsh. r0, r31
/* 80210A28 0020D968  40 81 00 0C */	ble .L_80210A34
/* 80210A2C 0020D96C  7F C3 F3 78 */	mr r3, r30
/* 80210A30 0020D970  4B E1 36 85 */	bl __dl__FPv
.L_80210A34:
/* 80210A34 0020D974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210A38 0020D978  7F C3 F3 78 */	mr r3, r30
/* 80210A3C 0020D97C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80210A40 0020D980  83 C1 00 08 */	lwz r30, 8(r1)
/* 80210A44 0020D984  7C 08 03 A6 */	mtlr r0
/* 80210A48 0020D988  38 21 00 10 */	addi r1, r1, 0x10
/* 80210A4C 0020D98C  4E 80 00 20 */	blr 
.endfn "__dt__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn isWeed__Q34Game8ItemWeed4WeedFv, weak
/* 80210A50 0020D990  88 03 00 40 */	lbz r0, 0x40(r3)
/* 80210A54 0020D994  7C 00 00 34 */	cntlzw r0, r0
/* 80210A58 0020D998  54 03 D9 7E */	srwi r3, r0, 5
/* 80210A5C 0020D99C  4E 80 00 20 */	blr 
.endfn isWeed__Q34Game8ItemWeed4WeedFv

.fn "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv", weak
/* 80210A60 0020D9A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210A64 0020D9A4  7C 08 02 A6 */	mflr r0
/* 80210A68 0020D9A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210A6C 0020D9AC  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 80210A70 0020D9B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80210A74 0020D9B4  7D 89 03 A6 */	mtctr r12
/* 80210A78 0020D9B8  4E 80 04 21 */	bctrl 
/* 80210A7C 0020D9BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210A80 0020D9C0  7C 08 03 A6 */	mtlr r0
/* 80210A84 0020D9C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80210A88 0020D9C8  4E 80 00 20 */	blr 
.endfn "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"

.fn "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210A8C 0020D9CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210A90 0020D9D0  7C 08 02 A6 */	mflr r0
/* 80210A94 0020D9D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210A98 0020D9D8  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 80210A9C 0020D9DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80210AA0 0020D9E0  7D 89 03 A6 */	mtctr r12
/* 80210AA4 0020D9E4  4E 80 04 21 */	bctrl 
/* 80210AA8 0020D9E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210AAC 0020D9EC  7C 08 03 A6 */	mtlr r0
/* 80210AB0 0020D9F0  38 21 00 10 */	addi r1, r1, 0x10
/* 80210AB4 0020D9F4  4E 80 00 20 */	blr 
.endfn "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock", weak
/* 80210AB8 0020D9F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210ABC 0020D9FC  7C 08 02 A6 */	mflr r0
/* 80210AC0 0020DA00  38 63 00 3C */	addi r3, r3, 0x3c
/* 80210AC4 0020DA04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210AC8 0020DA08  48 00 01 35 */	bl "kill__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPQ34Game8ItemWeed4Weed"
/* 80210ACC 0020DA0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210AD0 0020DA10  7C 08 03 A6 */	mtlr r0
/* 80210AD4 0020DA14  38 21 00 10 */	addi r1, r1, 0x10
/* 80210AD8 0020DA18  4E 80 00 20 */	blr 
.endfn "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock"

.fn "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf", weak
/* 80210ADC 0020DA1C  4E 80 00 20 */	blr 
.endfn "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"

.fn "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent", weak
/* 80210AE0 0020DA20  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"

.fn "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle", weak
/* 80210AE4 0020DA24  4E 80 00 20 */	blr 
.endfn "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"

.fn "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent", weak
/* 80210AE8 0020DA28  4E 80 00 20 */	blr 
.endfn "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"

.fn "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent", weak
/* 80210AEC 0020DA2C  4E 80 00 20 */	blr 
.endfn "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"

.fn "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg", weak
/* 80210AF0 0020DA30  4E 80 00 20 */	blr 
.endfn "init__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ24Game8StateArg"

.fn "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item", weak
/* 80210AF4 0020DA34  4E 80 00 20 */	blr 
.endfn "exec__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"

.fn "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item", weak
/* 80210AF8 0020DA38  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"

.fn "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item", weak
/* 80210AFC 0020DA3C  4E 80 00 20 */	blr 
.endfn "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"

.fn "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item", weak
/* 80210B00 0020DA40  4E 80 00 20 */	blr 
.endfn "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"

.fn "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg", weak
/* 80210B04 0020DA44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210B08 0020DA48  7C 08 02 A6 */	mflr r0
/* 80210B0C 0020DA4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210B10 0020DA50  80 63 00 08 */	lwz r3, 8(r3)
/* 80210B14 0020DA54  81 83 00 00 */	lwz r12, 0(r3)
/* 80210B18 0020DA58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80210B1C 0020DA5C  7D 89 03 A6 */	mtctr r12
/* 80210B20 0020DA60  4E 80 04 21 */	bctrl 
/* 80210B24 0020DA64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210B28 0020DA68  7C 08 03 A6 */	mtlr r0
/* 80210B2C 0020DA6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80210B30 0020DA70  4E 80 00 20 */	blr 
.endfn "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"

.fn "init__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item", weak
/* 80210B34 0020DA74  4E 80 00 20 */	blr 
.endfn "init__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"

.fn "create__Q24Game35StateMachine<Q34Game8ItemWeed4Item>Fi", weak
/* 80210B38 0020DA78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210B3C 0020DA7C  7C 08 02 A6 */	mflr r0
/* 80210B40 0020DA80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210B44 0020DA84  38 00 00 00 */	li r0, 0
/* 80210B48 0020DA88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80210B4C 0020DA8C  7C 7F 1B 78 */	mr r31, r3
/* 80210B50 0020DA90  90 83 00 0C */	stw r4, 0xc(r3)
/* 80210B54 0020DA94  90 03 00 08 */	stw r0, 8(r3)
/* 80210B58 0020DA98  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80210B5C 0020DA9C  54 03 10 3A */	slwi r3, r0, 2
/* 80210B60 0020DAA0  4B E1 34 4D */	bl __nwa__FUl
/* 80210B64 0020DAA4  90 7F 00 04 */	stw r3, 4(r31)
/* 80210B68 0020DAA8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80210B6C 0020DAAC  54 03 10 3A */	slwi r3, r0, 2
/* 80210B70 0020DAB0  4B E1 34 3D */	bl __nwa__FUl
/* 80210B74 0020DAB4  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80210B78 0020DAB8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80210B7C 0020DABC  54 03 10 3A */	slwi r3, r0, 2
/* 80210B80 0020DAC0  4B E1 34 2D */	bl __nwa__FUl
/* 80210B84 0020DAC4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 80210B88 0020DAC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210B8C 0020DACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80210B90 0020DAD0  7C 08 03 A6 */	mtlr r0
/* 80210B94 0020DAD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80210B98 0020DAD8  4E 80 00 20 */	blr 
.endfn "create__Q24Game35StateMachine<Q34Game8ItemWeed4Item>Fi"

.fn "birth__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210B9C 0020DADC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210BA0 0020DAE0  7C 08 02 A6 */	mflr r0
/* 80210BA4 0020DAE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210BA8 0020DAE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80210BAC 0020DAEC  7C 7F 1B 78 */	mr r31, r3
/* 80210BB0 0020DAF0  48 00 03 4D */	bl "getEmptyIndex__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
/* 80210BB4 0020DAF4  2C 03 FF FF */	cmpwi r3, -1
/* 80210BB8 0020DAF8  41 82 00 2C */	beq .L_80210BE4
/* 80210BBC 0020DAFC  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 80210BC0 0020DB00  38 00 00 00 */	li r0, 0
/* 80210BC4 0020DB04  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 80210BC8 0020DB08  1C A3 00 54 */	mulli r5, r3, 0x54
/* 80210BCC 0020DB0C  7C 04 19 AE */	stbx r0, r4, r3
/* 80210BD0 0020DB10  7C 66 2A 14 */	add r3, r6, r5
/* 80210BD4 0020DB14  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 80210BD8 0020DB18  38 04 00 01 */	addi r0, r4, 1
/* 80210BDC 0020DB1C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80210BE0 0020DB20  48 00 00 08 */	b .L_80210BE8
.L_80210BE4:
/* 80210BE4 0020DB24  38 60 00 00 */	li r3, 0
.L_80210BE8:
/* 80210BE8 0020DB28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210BEC 0020DB2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80210BF0 0020DB30  7C 08 03 A6 */	mtlr r0
/* 80210BF4 0020DB34  38 21 00 10 */	addi r1, r1, 0x10
/* 80210BF8 0020DB38  4E 80 00 20 */	blr 
.endfn "birth__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "kill__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPQ34Game8ItemWeed4Weed", weak
/* 80210BFC 0020DB3C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80210C00 0020DB40  38 C0 00 00 */	li r6, 0
/* 80210C04 0020DB44  38 A0 00 00 */	li r5, 0
/* 80210C08 0020DB48  7C 09 03 A6 */	mtctr r0
/* 80210C0C 0020DB4C  2C 00 00 00 */	cmpwi r0, 0
/* 80210C10 0020DB50  4C 81 00 20 */	blelr 
.L_80210C14:
/* 80210C14 0020DB54  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80210C18 0020DB58  7C 00 2A 14 */	add r0, r0, r5
/* 80210C1C 0020DB5C  7C 00 20 40 */	cmplw r0, r4
/* 80210C20 0020DB60  40 82 00 20 */	bne .L_80210C40
/* 80210C24 0020DB64  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80210C28 0020DB68  38 00 00 01 */	li r0, 1
/* 80210C2C 0020DB6C  7C 04 31 AE */	stbx r0, r4, r6
/* 80210C30 0020DB70  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80210C34 0020DB74  38 04 FF FF */	addi r0, r4, -1
/* 80210C38 0020DB78  90 03 00 20 */	stw r0, 0x20(r3)
/* 80210C3C 0020DB7C  4E 80 00 20 */	blr 
.L_80210C40:
/* 80210C40 0020DB80  38 A5 00 54 */	addi r5, r5, 0x54
/* 80210C44 0020DB84  38 C6 00 01 */	addi r6, r6, 1
/* 80210C48 0020DB88  42 00 FF CC */	bdnz .L_80210C14
/* 80210C4C 0020DB8C  4E 80 00 20 */	blr 
.endfn "kill__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPQ34Game8ItemWeed4Weed"

.fn "getNext__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPv", weak
/* 80210C50 0020DB90  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80210C54 0020DB94  38 C4 00 01 */	addi r6, r4, 1
/* 80210C58 0020DB98  7C 06 28 50 */	subf r0, r6, r5
/* 80210C5C 0020DB9C  7C 09 03 A6 */	mtctr r0
/* 80210C60 0020DBA0  7C 06 28 00 */	cmpw r6, r5
/* 80210C64 0020DBA4  40 80 00 24 */	bge .L_80210C88
.L_80210C68:
/* 80210C68 0020DBA8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80210C6C 0020DBAC  7C 04 30 AE */	lbzx r0, r4, r6
/* 80210C70 0020DBB0  28 00 00 00 */	cmplwi r0, 0
/* 80210C74 0020DBB4  40 82 00 0C */	bne .L_80210C80
/* 80210C78 0020DBB8  7C C3 33 78 */	mr r3, r6
/* 80210C7C 0020DBBC  4E 80 00 20 */	blr 
.L_80210C80:
/* 80210C80 0020DBC0  38 C6 00 01 */	addi r6, r6, 1
/* 80210C84 0020DBC4  42 00 FF E4 */	bdnz .L_80210C68
.L_80210C88:
/* 80210C88 0020DBC8  7C A3 2B 78 */	mr r3, r5
/* 80210C8C 0020DBCC  4E 80 00 20 */	blr 
.endfn "getNext__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPv"

.fn "getStart__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210C90 0020DBD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210C94 0020DBD4  7C 08 02 A6 */	mflr r0
/* 80210C98 0020DBD8  38 80 FF FF */	li r4, -1
/* 80210C9C 0020DBDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210CA0 0020DBE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80210CA4 0020DBE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80210CA8 0020DBE8  7D 89 03 A6 */	mtctr r12
/* 80210CAC 0020DBEC  4E 80 04 21 */	bctrl 
/* 80210CB0 0020DBF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210CB4 0020DBF4  7C 08 03 A6 */	mtlr r0
/* 80210CB8 0020DBF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80210CBC 0020DBFC  4E 80 00 20 */	blr 
.endfn "getStart__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "getEnd__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210CC0 0020DC00  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80210CC4 0020DC04  4E 80 00 20 */	blr 
.endfn "getEnd__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "getTo__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210CC8 0020DC08  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80210CCC 0020DC0C  4E 80 00 20 */	blr 
.endfn "getTo__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210CD0 0020DC10  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80210CD4 0020DC14  38 A0 00 00 */	li r5, 0
/* 80210CD8 0020DC18  2C 04 00 00 */	cmpwi r4, 0
/* 80210CDC 0020DC1C  4C 81 00 20 */	blelr 
/* 80210CE0 0020DC20  2C 04 00 08 */	cmpwi r4, 8
/* 80210CE4 0020DC24  38 64 FF F8 */	addi r3, r4, -8
/* 80210CE8 0020DC28  40 81 00 20 */	ble .L_80210D08
/* 80210CEC 0020DC2C  38 03 00 07 */	addi r0, r3, 7
/* 80210CF0 0020DC30  54 00 E8 FE */	srwi r0, r0, 3
/* 80210CF4 0020DC34  7C 09 03 A6 */	mtctr r0
/* 80210CF8 0020DC38  2C 03 00 00 */	cmpwi r3, 0
/* 80210CFC 0020DC3C  40 81 00 0C */	ble .L_80210D08
.L_80210D00:
/* 80210D00 0020DC40  38 A5 00 08 */	addi r5, r5, 8
/* 80210D04 0020DC44  42 00 FF FC */	bdnz .L_80210D00
.L_80210D08:
/* 80210D08 0020DC48  7C 05 20 50 */	subf r0, r5, r4
/* 80210D0C 0020DC4C  7C 09 03 A6 */	mtctr r0
/* 80210D10 0020DC50  7C 05 20 00 */	cmpw r5, r4
/* 80210D14 0020DC54  4C 80 00 20 */	bgelr 
.L_80210D18:
/* 80210D18 0020DC58  42 00 00 00 */	bdnz .L_80210D18
/* 80210D1C 0020DC5C  4E 80 00 20 */	blr 
.endfn "doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210D20 0020DC60  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80210D24 0020DC64  38 A0 00 00 */	li r5, 0
/* 80210D28 0020DC68  2C 04 00 00 */	cmpwi r4, 0
/* 80210D2C 0020DC6C  4C 81 00 20 */	blelr 
/* 80210D30 0020DC70  2C 04 00 08 */	cmpwi r4, 8
/* 80210D34 0020DC74  38 64 FF F8 */	addi r3, r4, -8
/* 80210D38 0020DC78  40 81 00 20 */	ble .L_80210D58
/* 80210D3C 0020DC7C  38 03 00 07 */	addi r0, r3, 7
/* 80210D40 0020DC80  54 00 E8 FE */	srwi r0, r0, 3
/* 80210D44 0020DC84  7C 09 03 A6 */	mtctr r0
/* 80210D48 0020DC88  2C 03 00 00 */	cmpwi r3, 0
/* 80210D4C 0020DC8C  40 81 00 0C */	ble .L_80210D58
.L_80210D50:
/* 80210D50 0020DC90  38 A5 00 08 */	addi r5, r5, 8
/* 80210D54 0020DC94  42 00 FF FC */	bdnz .L_80210D50
.L_80210D58:
/* 80210D58 0020DC98  7C 05 20 50 */	subf r0, r5, r4
/* 80210D5C 0020DC9C  7C 09 03 A6 */	mtctr r0
/* 80210D60 0020DCA0  7C 05 20 00 */	cmpw r5, r4
/* 80210D64 0020DCA4  4C 80 00 20 */	bgelr 
.L_80210D68:
/* 80210D68 0020DCA8  42 00 00 00 */	bdnz .L_80210D68
/* 80210D6C 0020DCAC  4E 80 00 20 */	blr 
.endfn "doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 80210D70 0020DCB0  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80210D74 0020DCB4  38 A0 00 00 */	li r5, 0
/* 80210D78 0020DCB8  2C 04 00 00 */	cmpwi r4, 0
/* 80210D7C 0020DCBC  4C 81 00 20 */	blelr 
/* 80210D80 0020DCC0  2C 04 00 08 */	cmpwi r4, 8
/* 80210D84 0020DCC4  38 64 FF F8 */	addi r3, r4, -8
/* 80210D88 0020DCC8  40 81 00 20 */	ble .L_80210DA8
/* 80210D8C 0020DCCC  38 03 00 07 */	addi r0, r3, 7
/* 80210D90 0020DCD0  54 00 E8 FE */	srwi r0, r0, 3
/* 80210D94 0020DCD4  7C 09 03 A6 */	mtctr r0
/* 80210D98 0020DCD8  2C 03 00 00 */	cmpwi r3, 0
/* 80210D9C 0020DCDC  40 81 00 0C */	ble .L_80210DA8
.L_80210DA0:
/* 80210DA0 0020DCE0  38 A5 00 08 */	addi r5, r5, 8
/* 80210DA4 0020DCE4  42 00 FF FC */	bdnz .L_80210DA0
.L_80210DA8:
/* 80210DA8 0020DCE8  7C 05 20 50 */	subf r0, r5, r4
/* 80210DAC 0020DCEC  7C 09 03 A6 */	mtctr r0
/* 80210DB0 0020DCF0  7C 05 20 00 */	cmpw r5, r4
/* 80210DB4 0020DCF4  4C 80 00 20 */	bgelr 
.L_80210DB8:
/* 80210DB8 0020DCF8  42 00 00 00 */	bdnz .L_80210DB8
/* 80210DBC 0020DCFC  4E 80 00 20 */	blr 
.endfn "doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210DC0 0020DD00  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80210DC4 0020DD04  38 A0 00 00 */	li r5, 0
/* 80210DC8 0020DD08  2C 04 00 00 */	cmpwi r4, 0
/* 80210DCC 0020DD0C  4C 81 00 20 */	blelr 
/* 80210DD0 0020DD10  2C 04 00 08 */	cmpwi r4, 8
/* 80210DD4 0020DD14  38 64 FF F8 */	addi r3, r4, -8
/* 80210DD8 0020DD18  40 81 00 20 */	ble .L_80210DF8
/* 80210DDC 0020DD1C  38 03 00 07 */	addi r0, r3, 7
/* 80210DE0 0020DD20  54 00 E8 FE */	srwi r0, r0, 3
/* 80210DE4 0020DD24  7C 09 03 A6 */	mtctr r0
/* 80210DE8 0020DD28  2C 03 00 00 */	cmpwi r3, 0
/* 80210DEC 0020DD2C  40 81 00 0C */	ble .L_80210DF8
.L_80210DF0:
/* 80210DF0 0020DD30  38 A5 00 08 */	addi r5, r5, 8
/* 80210DF4 0020DD34  42 00 FF FC */	bdnz .L_80210DF0
.L_80210DF8:
/* 80210DF8 0020DD38  7C 05 20 50 */	subf r0, r5, r4
/* 80210DFC 0020DD3C  7C 09 03 A6 */	mtctr r0
/* 80210E00 0020DD40  7C 05 20 00 */	cmpw r5, r4
/* 80210E04 0020DD44  4C 80 00 20 */	bgelr 
.L_80210E08:
/* 80210E08 0020DD48  42 00 00 00 */	bdnz .L_80210E08
/* 80210E0C 0020DD4C  4E 80 00 20 */	blr 
.endfn "doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff", weak
/* 80210E10 0020DD50  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80210E14 0020DD54  38 A0 00 00 */	li r5, 0
/* 80210E18 0020DD58  2C 04 00 00 */	cmpwi r4, 0
/* 80210E1C 0020DD5C  4C 81 00 20 */	blelr 
/* 80210E20 0020DD60  2C 04 00 08 */	cmpwi r4, 8
/* 80210E24 0020DD64  38 64 FF F8 */	addi r3, r4, -8
/* 80210E28 0020DD68  40 81 00 20 */	ble .L_80210E48
/* 80210E2C 0020DD6C  38 03 00 07 */	addi r0, r3, 7
/* 80210E30 0020DD70  54 00 E8 FE */	srwi r0, r0, 3
/* 80210E34 0020DD74  7C 09 03 A6 */	mtctr r0
/* 80210E38 0020DD78  2C 03 00 00 */	cmpwi r3, 0
/* 80210E3C 0020DD7C  40 81 00 0C */	ble .L_80210E48
.L_80210E40:
/* 80210E40 0020DD80  38 A5 00 08 */	addi r5, r5, 8
/* 80210E44 0020DD84  42 00 FF FC */	bdnz .L_80210E40
.L_80210E48:
/* 80210E48 0020DD88  7C 05 20 50 */	subf r0, r5, r4
/* 80210E4C 0020DD8C  7C 09 03 A6 */	mtctr r0
/* 80210E50 0020DD90  7C 05 20 00 */	cmpw r5, r4
/* 80210E54 0020DD94  4C 80 00 20 */	bgelr 
.L_80210E58:
/* 80210E58 0020DD98  42 00 00 00 */	bdnz .L_80210E58
/* 80210E5C 0020DD9C  4E 80 00 20 */	blr 
.endfn "doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff"

.fn "doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics", weak
/* 80210E60 0020DDA0  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80210E64 0020DDA4  38 A0 00 00 */	li r5, 0
/* 80210E68 0020DDA8  2C 04 00 00 */	cmpwi r4, 0
/* 80210E6C 0020DDAC  4C 81 00 20 */	blelr 
/* 80210E70 0020DDB0  2C 04 00 08 */	cmpwi r4, 8
/* 80210E74 0020DDB4  38 64 FF F8 */	addi r3, r4, -8
/* 80210E78 0020DDB8  40 81 00 20 */	ble .L_80210E98
/* 80210E7C 0020DDBC  38 03 00 07 */	addi r0, r3, 7
/* 80210E80 0020DDC0  54 00 E8 FE */	srwi r0, r0, 3
/* 80210E84 0020DDC4  7C 09 03 A6 */	mtctr r0
/* 80210E88 0020DDC8  2C 03 00 00 */	cmpwi r3, 0
/* 80210E8C 0020DDCC  40 81 00 0C */	ble .L_80210E98
.L_80210E90:
/* 80210E90 0020DDD0  38 A5 00 08 */	addi r5, r5, 8
/* 80210E94 0020DDD4  42 00 FF FC */	bdnz .L_80210E90
.L_80210E98:
/* 80210E98 0020DDD8  7C 05 20 50 */	subf r0, r5, r4
/* 80210E9C 0020DDDC  7C 09 03 A6 */	mtctr r0
/* 80210EA0 0020DDE0  7C 05 20 00 */	cmpw r5, r4
/* 80210EA4 0020DDE4  4C 80 00 20 */	bgelr 
.L_80210EA8:
/* 80210EA8 0020DDE8  42 00 00 00 */	bdnz .L_80210EA8
/* 80210EAC 0020DDEC  4E 80 00 20 */	blr 
.endfn "doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"

.fn "resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210EB0 0020DDF0  38 00 00 00 */	li r0, 0
/* 80210EB4 0020DDF4  90 03 00 28 */	stw r0, 0x28(r3)
/* 80210EB8 0020DDF8  90 03 00 24 */	stw r0, 0x24(r3)
/* 80210EBC 0020DDFC  90 03 00 20 */	stw r0, 0x20(r3)
/* 80210EC0 0020DE00  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80210EC4 0020DE04  4E 80 00 20 */	blr 
.endfn "resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "clearMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210EC8 0020DE08  38 00 00 00 */	li r0, 0
/* 80210ECC 0020DE0C  38 C0 00 00 */	li r6, 0
/* 80210ED0 0020DE10  90 03 00 20 */	stw r0, 0x20(r3)
/* 80210ED4 0020DE14  38 A0 00 01 */	li r5, 1
/* 80210ED8 0020DE18  48 00 00 10 */	b .L_80210EE8
.L_80210EDC:
/* 80210EDC 0020DE1C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80210EE0 0020DE20  7C A4 31 AE */	stbx r5, r4, r6
/* 80210EE4 0020DE24  38 C6 00 01 */	addi r6, r6, 1
.L_80210EE8:
/* 80210EE8 0020DE28  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80210EEC 0020DE2C  7C 06 00 00 */	cmpw r6, r0
/* 80210EF0 0020DE30  41 80 FF EC */	blt .L_80210EDC
/* 80210EF4 0020DE34  4E 80 00 20 */	blr 
.endfn "clearMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "onAlloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210EF8 0020DE38  4E 80 00 20 */	blr 
.endfn "onAlloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "getEmptyIndex__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210EFC 0020DE3C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80210F00 0020DE40  38 A0 00 00 */	li r5, 0
/* 80210F04 0020DE44  7C 09 03 A6 */	mtctr r0
/* 80210F08 0020DE48  2C 00 00 00 */	cmpwi r0, 0
/* 80210F0C 0020DE4C  40 81 00 24 */	ble .L_80210F30
.L_80210F10:
/* 80210F10 0020DE50  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80210F14 0020DE54  7C 04 28 AE */	lbzx r0, r4, r5
/* 80210F18 0020DE58  28 00 00 01 */	cmplwi r0, 1
/* 80210F1C 0020DE5C  40 82 00 0C */	bne .L_80210F28
/* 80210F20 0020DE60  7C A3 2B 78 */	mr r3, r5
/* 80210F24 0020DE64  4E 80 00 20 */	blr 
.L_80210F28:
/* 80210F28 0020DE68  38 A5 00 01 */	addi r5, r5, 1
/* 80210F2C 0020DE6C  42 00 FF E4 */	bdnz .L_80210F10
.L_80210F30:
/* 80210F30 0020DE70  38 60 FF FF */	li r3, -1
/* 80210F34 0020DE74  4E 80 00 20 */	blr 
.endfn "getEmptyIndex__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "get__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPv", weak
/* 80210F38 0020DE78  1C 04 00 54 */	mulli r0, r4, 0x54
/* 80210F3C 0020DE7C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80210F40 0020DE80  7C 63 02 14 */	add r3, r3, r0
/* 80210F44 0020DE84  4E 80 00 20 */	blr 
.endfn "get__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPv"

.fn "getObject__32Container<Q34Game8ItemWeed4Weed>FPv", weak
/* 80210F48 0020DE88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80210F4C 0020DE8C  7C 08 02 A6 */	mflr r0
/* 80210F50 0020DE90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210F54 0020DE94  81 83 00 00 */	lwz r12, 0(r3)
/* 80210F58 0020DE98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80210F5C 0020DE9C  7D 89 03 A6 */	mtctr r12
/* 80210F60 0020DEA0  4E 80 04 21 */	bctrl 
/* 80210F64 0020DEA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80210F68 0020DEA8  7C 08 03 A6 */	mtlr r0
/* 80210F6C 0020DEAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80210F70 0020DEB0  4E 80 00 20 */	blr 
.endfn "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"

.fn "getAt__32Container<Q34Game8ItemWeed4Weed>Fi", weak
/* 80210F74 0020DEB4  38 60 00 00 */	li r3, 0
/* 80210F78 0020DEB8  4E 80 00 20 */	blr 
.endfn "getAt__32Container<Q34Game8ItemWeed4Weed>Fi"

.fn "getTo__32Container<Q34Game8ItemWeed4Weed>Fv", weak
/* 80210F7C 0020DEBC  38 60 00 00 */	li r3, 0
/* 80210F80 0020DEC0  4E 80 00 20 */	blr 
.endfn "getTo__32Container<Q34Game8ItemWeed4Weed>Fv"

.fn "doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics", weak
/* 80210F84 0020DEC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80210F88 0020DEC8  7C 08 02 A6 */	mflr r0
/* 80210F8C 0020DECC  3C 80 80 4C */	lis r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
/* 80210F90 0020DED0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80210F94 0020DED4  38 00 00 00 */	li r0, 0
/* 80210F98 0020DED8  38 84 04 20 */	addi r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
/* 80210F9C 0020DEDC  28 00 00 00 */	cmplwi r0, 0
/* 80210FA0 0020DEE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80210FA4 0020DEE4  90 81 00 08 */	stw r4, 8(r1)
/* 80210FA8 0020DEE8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80210FAC 0020DEEC  90 61 00 10 */	stw r3, 0x10(r1)
/* 80210FB0 0020DEF0  40 82 00 1C */	bne .L_80210FCC
/* 80210FB4 0020DEF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80210FB8 0020DEF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80210FBC 0020DEFC  7D 89 03 A6 */	mtctr r12
/* 80210FC0 0020DF00  4E 80 04 21 */	bctrl 
/* 80210FC4 0020DF04  90 61 00 0C */	stw r3, 0xc(r1)
/* 80210FC8 0020DF08  48 00 01 60 */	b .L_80211128
.L_80210FCC:
/* 80210FCC 0020DF0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80210FD0 0020DF10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80210FD4 0020DF14  7D 89 03 A6 */	mtctr r12
/* 80210FD8 0020DF18  4E 80 04 21 */	bctrl 
/* 80210FDC 0020DF1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80210FE0 0020DF20  48 00 00 58 */	b .L_80211038
.L_80210FE4:
/* 80210FE4 0020DF24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80210FE8 0020DF28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80210FEC 0020DF2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80210FF0 0020DF30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80210FF4 0020DF34  7D 89 03 A6 */	mtctr r12
/* 80210FF8 0020DF38  4E 80 04 21 */	bctrl 
/* 80210FFC 0020DF3C  7C 64 1B 78 */	mr r4, r3
/* 80211000 0020DF40  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80211004 0020DF44  81 83 00 00 */	lwz r12, 0(r3)
/* 80211008 0020DF48  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021100C 0020DF4C  7D 89 03 A6 */	mtctr r12
/* 80211010 0020DF50  4E 80 04 21 */	bctrl 
/* 80211014 0020DF54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211018 0020DF58  40 82 01 10 */	bne .L_80211128
/* 8021101C 0020DF5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211020 0020DF60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211024 0020DF64  81 83 00 00 */	lwz r12, 0(r3)
/* 80211028 0020DF68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021102C 0020DF6C  7D 89 03 A6 */	mtctr r12
/* 80211030 0020DF70  4E 80 04 21 */	bctrl 
/* 80211034 0020DF74  90 61 00 0C */	stw r3, 0xc(r1)
.L_80211038:
/* 80211038 0020DF78  81 81 00 08 */	lwz r12, 8(r1)
/* 8021103C 0020DF7C  38 61 00 08 */	addi r3, r1, 8
/* 80211040 0020DF80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211044 0020DF84  7D 89 03 A6 */	mtctr r12
/* 80211048 0020DF88  4E 80 04 21 */	bctrl 
/* 8021104C 0020DF8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211050 0020DF90  41 82 FF 94 */	beq .L_80210FE4
/* 80211054 0020DF94  48 00 00 D4 */	b .L_80211128
.L_80211058:
/* 80211058 0020DF98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021105C 0020DF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211060 0020DFA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211064 0020DFA4  7D 89 03 A6 */	mtctr r12
/* 80211068 0020DFA8  4E 80 04 21 */	bctrl 
/* 8021106C 0020DFAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211070 0020DFB0  28 00 00 00 */	cmplwi r0, 0
/* 80211074 0020DFB4  40 82 00 24 */	bne .L_80211098
/* 80211078 0020DFB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021107C 0020DFBC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211080 0020DFC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80211084 0020DFC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211088 0020DFC8  7D 89 03 A6 */	mtctr r12
/* 8021108C 0020DFCC  4E 80 04 21 */	bctrl 
/* 80211090 0020DFD0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211094 0020DFD4  48 00 00 94 */	b .L_80211128
.L_80211098:
/* 80211098 0020DFD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021109C 0020DFDC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802110A0 0020DFE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802110A4 0020DFE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802110A8 0020DFE8  7D 89 03 A6 */	mtctr r12
/* 802110AC 0020DFEC  4E 80 04 21 */	bctrl 
/* 802110B0 0020DFF0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802110B4 0020DFF4  48 00 00 58 */	b .L_8021110C
.L_802110B8:
/* 802110B8 0020DFF8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802110BC 0020DFFC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802110C0 0020E000  81 83 00 00 */	lwz r12, 0(r3)
/* 802110C4 0020E004  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802110C8 0020E008  7D 89 03 A6 */	mtctr r12
/* 802110CC 0020E00C  4E 80 04 21 */	bctrl 
/* 802110D0 0020E010  7C 64 1B 78 */	mr r4, r3
/* 802110D4 0020E014  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802110D8 0020E018  81 83 00 00 */	lwz r12, 0(r3)
/* 802110DC 0020E01C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802110E0 0020E020  7D 89 03 A6 */	mtctr r12
/* 802110E4 0020E024  4E 80 04 21 */	bctrl 
/* 802110E8 0020E028  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802110EC 0020E02C  40 82 00 3C */	bne .L_80211128
/* 802110F0 0020E030  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802110F4 0020E034  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802110F8 0020E038  81 83 00 00 */	lwz r12, 0(r3)
/* 802110FC 0020E03C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211100 0020E040  7D 89 03 A6 */	mtctr r12
/* 80211104 0020E044  4E 80 04 21 */	bctrl 
/* 80211108 0020E048  90 61 00 0C */	stw r3, 0xc(r1)
.L_8021110C:
/* 8021110C 0020E04C  81 81 00 08 */	lwz r12, 8(r1)
/* 80211110 0020E050  38 61 00 08 */	addi r3, r1, 8
/* 80211114 0020E054  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211118 0020E058  7D 89 03 A6 */	mtctr r12
/* 8021111C 0020E05C  4E 80 04 21 */	bctrl 
/* 80211120 0020E060  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211124 0020E064  41 82 FF 94 */	beq .L_802110B8
.L_80211128:
/* 80211128 0020E068  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021112C 0020E06C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211130 0020E070  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80211134 0020E074  7D 89 03 A6 */	mtctr r12
/* 80211138 0020E078  4E 80 04 21 */	bctrl 
/* 8021113C 0020E07C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211140 0020E080  7C 04 18 40 */	cmplw r4, r3
/* 80211144 0020E084  40 82 FF 14 */	bne .L_80211058
/* 80211148 0020E088  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8021114C 0020E08C  7C 08 03 A6 */	mtlr r0
/* 80211150 0020E090  38 21 00 20 */	addi r1, r1, 0x20
/* 80211154 0020E094  4E 80 00 20 */	blr 
.endfn "doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"

.fn "isDone__31Iterator<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211158 0020E098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021115C 0020E09C  7C 08 02 A6 */	mflr r0
/* 80211160 0020E0A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211164 0020E0A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80211168 0020E0A8  7C 7F 1B 78 */	mr r31, r3
/* 8021116C 0020E0AC  80 63 00 08 */	lwz r3, 8(r3)
/* 80211170 0020E0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80211174 0020E0B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80211178 0020E0B8  7D 89 03 A6 */	mtctr r12
/* 8021117C 0020E0BC  4E 80 04 21 */	bctrl 
/* 80211180 0020E0C0  80 1F 00 04 */	lwz r0, 4(r31)
/* 80211184 0020E0C4  7C 00 18 50 */	subf r0, r0, r3
/* 80211188 0020E0C8  7C 00 00 34 */	cntlzw r0, r0
/* 8021118C 0020E0CC  54 03 D9 7E */	srwi r3, r0, 5
/* 80211190 0020E0D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80211194 0020E0D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211198 0020E0D8  7C 08 03 A6 */	mtlr r0
/* 8021119C 0020E0DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802111A0 0020E0E0  4E 80 00 20 */	blr 
.endfn "isDone__31Iterator<Q34Game8ItemWeed4Weed>Fv"

.fn "doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff", weak
/* 802111A4 0020E0E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802111A8 0020E0E8  7C 08 02 A6 */	mflr r0
/* 802111AC 0020E0EC  3C 80 80 4C */	lis r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
/* 802111B0 0020E0F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802111B4 0020E0F4  38 00 00 00 */	li r0, 0
/* 802111B8 0020E0F8  38 84 04 20 */	addi r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
/* 802111BC 0020E0FC  28 00 00 00 */	cmplwi r0, 0
/* 802111C0 0020E100  90 01 00 14 */	stw r0, 0x14(r1)
/* 802111C4 0020E104  90 81 00 08 */	stw r4, 8(r1)
/* 802111C8 0020E108  90 01 00 0C */	stw r0, 0xc(r1)
/* 802111CC 0020E10C  90 61 00 10 */	stw r3, 0x10(r1)
/* 802111D0 0020E110  40 82 00 1C */	bne .L_802111EC
/* 802111D4 0020E114  81 83 00 00 */	lwz r12, 0(r3)
/* 802111D8 0020E118  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802111DC 0020E11C  7D 89 03 A6 */	mtctr r12
/* 802111E0 0020E120  4E 80 04 21 */	bctrl 
/* 802111E4 0020E124  90 61 00 0C */	stw r3, 0xc(r1)
/* 802111E8 0020E128  48 00 01 60 */	b .L_80211348
.L_802111EC:
/* 802111EC 0020E12C  81 83 00 00 */	lwz r12, 0(r3)
/* 802111F0 0020E130  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802111F4 0020E134  7D 89 03 A6 */	mtctr r12
/* 802111F8 0020E138  4E 80 04 21 */	bctrl 
/* 802111FC 0020E13C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211200 0020E140  48 00 00 58 */	b .L_80211258
.L_80211204:
/* 80211204 0020E144  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211208 0020E148  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021120C 0020E14C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211210 0020E150  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211214 0020E154  7D 89 03 A6 */	mtctr r12
/* 80211218 0020E158  4E 80 04 21 */	bctrl 
/* 8021121C 0020E15C  7C 64 1B 78 */	mr r4, r3
/* 80211220 0020E160  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80211224 0020E164  81 83 00 00 */	lwz r12, 0(r3)
/* 80211228 0020E168  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021122C 0020E16C  7D 89 03 A6 */	mtctr r12
/* 80211230 0020E170  4E 80 04 21 */	bctrl 
/* 80211234 0020E174  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211238 0020E178  40 82 01 10 */	bne .L_80211348
/* 8021123C 0020E17C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211240 0020E180  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211244 0020E184  81 83 00 00 */	lwz r12, 0(r3)
/* 80211248 0020E188  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021124C 0020E18C  7D 89 03 A6 */	mtctr r12
/* 80211250 0020E190  4E 80 04 21 */	bctrl 
/* 80211254 0020E194  90 61 00 0C */	stw r3, 0xc(r1)
.L_80211258:
/* 80211258 0020E198  81 81 00 08 */	lwz r12, 8(r1)
/* 8021125C 0020E19C  38 61 00 08 */	addi r3, r1, 8
/* 80211260 0020E1A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211264 0020E1A4  7D 89 03 A6 */	mtctr r12
/* 80211268 0020E1A8  4E 80 04 21 */	bctrl 
/* 8021126C 0020E1AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211270 0020E1B0  41 82 FF 94 */	beq .L_80211204
/* 80211274 0020E1B4  48 00 00 D4 */	b .L_80211348
.L_80211278:
/* 80211278 0020E1B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021127C 0020E1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80211280 0020E1C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211284 0020E1C4  7D 89 03 A6 */	mtctr r12
/* 80211288 0020E1C8  4E 80 04 21 */	bctrl 
/* 8021128C 0020E1CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211290 0020E1D0  28 00 00 00 */	cmplwi r0, 0
/* 80211294 0020E1D4  40 82 00 24 */	bne .L_802112B8
/* 80211298 0020E1D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021129C 0020E1DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802112A0 0020E1E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802112A4 0020E1E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802112A8 0020E1E8  7D 89 03 A6 */	mtctr r12
/* 802112AC 0020E1EC  4E 80 04 21 */	bctrl 
/* 802112B0 0020E1F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802112B4 0020E1F4  48 00 00 94 */	b .L_80211348
.L_802112B8:
/* 802112B8 0020E1F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802112BC 0020E1FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802112C0 0020E200  81 83 00 00 */	lwz r12, 0(r3)
/* 802112C4 0020E204  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802112C8 0020E208  7D 89 03 A6 */	mtctr r12
/* 802112CC 0020E20C  4E 80 04 21 */	bctrl 
/* 802112D0 0020E210  90 61 00 0C */	stw r3, 0xc(r1)
/* 802112D4 0020E214  48 00 00 58 */	b .L_8021132C
.L_802112D8:
/* 802112D8 0020E218  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802112DC 0020E21C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802112E0 0020E220  81 83 00 00 */	lwz r12, 0(r3)
/* 802112E4 0020E224  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802112E8 0020E228  7D 89 03 A6 */	mtctr r12
/* 802112EC 0020E22C  4E 80 04 21 */	bctrl 
/* 802112F0 0020E230  7C 64 1B 78 */	mr r4, r3
/* 802112F4 0020E234  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802112F8 0020E238  81 83 00 00 */	lwz r12, 0(r3)
/* 802112FC 0020E23C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80211300 0020E240  7D 89 03 A6 */	mtctr r12
/* 80211304 0020E244  4E 80 04 21 */	bctrl 
/* 80211308 0020E248  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021130C 0020E24C  40 82 00 3C */	bne .L_80211348
/* 80211310 0020E250  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211314 0020E254  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211318 0020E258  81 83 00 00 */	lwz r12, 0(r3)
/* 8021131C 0020E25C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211320 0020E260  7D 89 03 A6 */	mtctr r12
/* 80211324 0020E264  4E 80 04 21 */	bctrl 
/* 80211328 0020E268  90 61 00 0C */	stw r3, 0xc(r1)
.L_8021132C:
/* 8021132C 0020E26C  81 81 00 08 */	lwz r12, 8(r1)
/* 80211330 0020E270  38 61 00 08 */	addi r3, r1, 8
/* 80211334 0020E274  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211338 0020E278  7D 89 03 A6 */	mtctr r12
/* 8021133C 0020E27C  4E 80 04 21 */	bctrl 
/* 80211340 0020E280  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211344 0020E284  41 82 FF 94 */	beq .L_802112D8
.L_80211348:
/* 80211348 0020E288  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8021134C 0020E28C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211350 0020E290  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80211354 0020E294  7D 89 03 A6 */	mtctr r12
/* 80211358 0020E298  4E 80 04 21 */	bctrl 
/* 8021135C 0020E29C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211360 0020E2A0  7C 04 18 40 */	cmplw r4, r3
/* 80211364 0020E2A4  40 82 FF 14 */	bne .L_80211278
/* 80211368 0020E2A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8021136C 0020E2AC  7C 08 03 A6 */	mtlr r0
/* 80211370 0020E2B0  38 21 00 20 */	addi r1, r1, 0x20
/* 80211374 0020E2B4  4E 80 00 20 */	blr 
.endfn "doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff"

.fn "doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211378 0020E2B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8021137C 0020E2BC  7C 08 02 A6 */	mflr r0
/* 80211380 0020E2C0  3C 80 80 4C */	lis r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
/* 80211384 0020E2C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80211388 0020E2C8  38 00 00 00 */	li r0, 0
/* 8021138C 0020E2CC  38 84 04 20 */	addi r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
/* 80211390 0020E2D0  28 00 00 00 */	cmplwi r0, 0
/* 80211394 0020E2D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211398 0020E2D8  90 81 00 08 */	stw r4, 8(r1)
/* 8021139C 0020E2DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 802113A0 0020E2E0  90 61 00 10 */	stw r3, 0x10(r1)
/* 802113A4 0020E2E4  40 82 00 1C */	bne .L_802113C0
/* 802113A8 0020E2E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802113AC 0020E2EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802113B0 0020E2F0  7D 89 03 A6 */	mtctr r12
/* 802113B4 0020E2F4  4E 80 04 21 */	bctrl 
/* 802113B8 0020E2F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 802113BC 0020E2FC  48 00 01 60 */	b .L_8021151C
.L_802113C0:
/* 802113C0 0020E300  81 83 00 00 */	lwz r12, 0(r3)
/* 802113C4 0020E304  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802113C8 0020E308  7D 89 03 A6 */	mtctr r12
/* 802113CC 0020E30C  4E 80 04 21 */	bctrl 
/* 802113D0 0020E310  90 61 00 0C */	stw r3, 0xc(r1)
/* 802113D4 0020E314  48 00 00 58 */	b .L_8021142C
.L_802113D8:
/* 802113D8 0020E318  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802113DC 0020E31C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802113E0 0020E320  81 83 00 00 */	lwz r12, 0(r3)
/* 802113E4 0020E324  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802113E8 0020E328  7D 89 03 A6 */	mtctr r12
/* 802113EC 0020E32C  4E 80 04 21 */	bctrl 
/* 802113F0 0020E330  7C 64 1B 78 */	mr r4, r3
/* 802113F4 0020E334  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802113F8 0020E338  81 83 00 00 */	lwz r12, 0(r3)
/* 802113FC 0020E33C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80211400 0020E340  7D 89 03 A6 */	mtctr r12
/* 80211404 0020E344  4E 80 04 21 */	bctrl 
/* 80211408 0020E348  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021140C 0020E34C  40 82 01 10 */	bne .L_8021151C
/* 80211410 0020E350  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211414 0020E354  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211418 0020E358  81 83 00 00 */	lwz r12, 0(r3)
/* 8021141C 0020E35C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211420 0020E360  7D 89 03 A6 */	mtctr r12
/* 80211424 0020E364  4E 80 04 21 */	bctrl 
/* 80211428 0020E368  90 61 00 0C */	stw r3, 0xc(r1)
.L_8021142C:
/* 8021142C 0020E36C  81 81 00 08 */	lwz r12, 8(r1)
/* 80211430 0020E370  38 61 00 08 */	addi r3, r1, 8
/* 80211434 0020E374  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211438 0020E378  7D 89 03 A6 */	mtctr r12
/* 8021143C 0020E37C  4E 80 04 21 */	bctrl 
/* 80211440 0020E380  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211444 0020E384  41 82 FF 94 */	beq .L_802113D8
/* 80211448 0020E388  48 00 00 D4 */	b .L_8021151C
.L_8021144C:
/* 8021144C 0020E38C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211450 0020E390  81 83 00 00 */	lwz r12, 0(r3)
/* 80211454 0020E394  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211458 0020E398  7D 89 03 A6 */	mtctr r12
/* 8021145C 0020E39C  4E 80 04 21 */	bctrl 
/* 80211460 0020E3A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211464 0020E3A4  28 00 00 00 */	cmplwi r0, 0
/* 80211468 0020E3A8  40 82 00 24 */	bne .L_8021148C
/* 8021146C 0020E3AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211470 0020E3B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211474 0020E3B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211478 0020E3B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021147C 0020E3BC  7D 89 03 A6 */	mtctr r12
/* 80211480 0020E3C0  4E 80 04 21 */	bctrl 
/* 80211484 0020E3C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211488 0020E3C8  48 00 00 94 */	b .L_8021151C
.L_8021148C:
/* 8021148C 0020E3CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211490 0020E3D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211494 0020E3D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211498 0020E3D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021149C 0020E3DC  7D 89 03 A6 */	mtctr r12
/* 802114A0 0020E3E0  4E 80 04 21 */	bctrl 
/* 802114A4 0020E3E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802114A8 0020E3E8  48 00 00 58 */	b .L_80211500
.L_802114AC:
/* 802114AC 0020E3EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802114B0 0020E3F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802114B4 0020E3F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802114B8 0020E3F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802114BC 0020E3FC  7D 89 03 A6 */	mtctr r12
/* 802114C0 0020E400  4E 80 04 21 */	bctrl 
/* 802114C4 0020E404  7C 64 1B 78 */	mr r4, r3
/* 802114C8 0020E408  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802114CC 0020E40C  81 83 00 00 */	lwz r12, 0(r3)
/* 802114D0 0020E410  81 8C 00 08 */	lwz r12, 8(r12)
/* 802114D4 0020E414  7D 89 03 A6 */	mtctr r12
/* 802114D8 0020E418  4E 80 04 21 */	bctrl 
/* 802114DC 0020E41C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802114E0 0020E420  40 82 00 3C */	bne .L_8021151C
/* 802114E4 0020E424  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802114E8 0020E428  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802114EC 0020E42C  81 83 00 00 */	lwz r12, 0(r3)
/* 802114F0 0020E430  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802114F4 0020E434  7D 89 03 A6 */	mtctr r12
/* 802114F8 0020E438  4E 80 04 21 */	bctrl 
/* 802114FC 0020E43C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80211500:
/* 80211500 0020E440  81 81 00 08 */	lwz r12, 8(r1)
/* 80211504 0020E444  38 61 00 08 */	addi r3, r1, 8
/* 80211508 0020E448  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8021150C 0020E44C  7D 89 03 A6 */	mtctr r12
/* 80211510 0020E450  4E 80 04 21 */	bctrl 
/* 80211514 0020E454  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211518 0020E458  41 82 FF 94 */	beq .L_802114AC
.L_8021151C:
/* 8021151C 0020E45C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211520 0020E460  81 83 00 00 */	lwz r12, 0(r3)
/* 80211524 0020E464  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80211528 0020E468  7D 89 03 A6 */	mtctr r12
/* 8021152C 0020E46C  4E 80 04 21 */	bctrl 
/* 80211530 0020E470  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211534 0020E474  7C 04 18 40 */	cmplw r4, r3
/* 80211538 0020E478  40 82 FF 14 */	bne .L_8021144C
/* 8021153C 0020E47C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80211540 0020E480  7C 08 03 A6 */	mtlr r0
/* 80211544 0020E484  38 21 00 20 */	addi r1, r1, 0x20
/* 80211548 0020E488  4E 80 00 20 */	blr 
.endfn "doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 8021154C 0020E48C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80211550 0020E490  7C 08 02 A6 */	mflr r0
/* 80211554 0020E494  3C 80 80 4C */	lis r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
/* 80211558 0020E498  90 01 00 24 */	stw r0, 0x24(r1)
/* 8021155C 0020E49C  38 00 00 00 */	li r0, 0
/* 80211560 0020E4A0  38 84 04 20 */	addi r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
/* 80211564 0020E4A4  28 00 00 00 */	cmplwi r0, 0
/* 80211568 0020E4A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021156C 0020E4AC  90 81 00 08 */	stw r4, 8(r1)
/* 80211570 0020E4B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80211574 0020E4B4  90 61 00 10 */	stw r3, 0x10(r1)
/* 80211578 0020E4B8  40 82 00 1C */	bne .L_80211594
/* 8021157C 0020E4BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80211580 0020E4C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80211584 0020E4C4  7D 89 03 A6 */	mtctr r12
/* 80211588 0020E4C8  4E 80 04 21 */	bctrl 
/* 8021158C 0020E4CC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211590 0020E4D0  48 00 01 60 */	b .L_802116F0
.L_80211594:
/* 80211594 0020E4D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211598 0020E4D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021159C 0020E4DC  7D 89 03 A6 */	mtctr r12
/* 802115A0 0020E4E0  4E 80 04 21 */	bctrl 
/* 802115A4 0020E4E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802115A8 0020E4E8  48 00 00 58 */	b .L_80211600
.L_802115AC:
/* 802115AC 0020E4EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802115B0 0020E4F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802115B4 0020E4F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802115B8 0020E4F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802115BC 0020E4FC  7D 89 03 A6 */	mtctr r12
/* 802115C0 0020E500  4E 80 04 21 */	bctrl 
/* 802115C4 0020E504  7C 64 1B 78 */	mr r4, r3
/* 802115C8 0020E508  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802115CC 0020E50C  81 83 00 00 */	lwz r12, 0(r3)
/* 802115D0 0020E510  81 8C 00 08 */	lwz r12, 8(r12)
/* 802115D4 0020E514  7D 89 03 A6 */	mtctr r12
/* 802115D8 0020E518  4E 80 04 21 */	bctrl 
/* 802115DC 0020E51C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802115E0 0020E520  40 82 01 10 */	bne .L_802116F0
/* 802115E4 0020E524  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802115E8 0020E528  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802115EC 0020E52C  81 83 00 00 */	lwz r12, 0(r3)
/* 802115F0 0020E530  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802115F4 0020E534  7D 89 03 A6 */	mtctr r12
/* 802115F8 0020E538  4E 80 04 21 */	bctrl 
/* 802115FC 0020E53C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80211600:
/* 80211600 0020E540  81 81 00 08 */	lwz r12, 8(r1)
/* 80211604 0020E544  38 61 00 08 */	addi r3, r1, 8
/* 80211608 0020E548  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8021160C 0020E54C  7D 89 03 A6 */	mtctr r12
/* 80211610 0020E550  4E 80 04 21 */	bctrl 
/* 80211614 0020E554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211618 0020E558  41 82 FF 94 */	beq .L_802115AC
/* 8021161C 0020E55C  48 00 00 D4 */	b .L_802116F0
.L_80211620:
/* 80211620 0020E560  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211624 0020E564  81 83 00 00 */	lwz r12, 0(r3)
/* 80211628 0020E568  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021162C 0020E56C  7D 89 03 A6 */	mtctr r12
/* 80211630 0020E570  4E 80 04 21 */	bctrl 
/* 80211634 0020E574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211638 0020E578  28 00 00 00 */	cmplwi r0, 0
/* 8021163C 0020E57C  40 82 00 24 */	bne .L_80211660
/* 80211640 0020E580  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211644 0020E584  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211648 0020E588  81 83 00 00 */	lwz r12, 0(r3)
/* 8021164C 0020E58C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211650 0020E590  7D 89 03 A6 */	mtctr r12
/* 80211654 0020E594  4E 80 04 21 */	bctrl 
/* 80211658 0020E598  90 61 00 0C */	stw r3, 0xc(r1)
/* 8021165C 0020E59C  48 00 00 94 */	b .L_802116F0
.L_80211660:
/* 80211660 0020E5A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211664 0020E5A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211668 0020E5A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021166C 0020E5AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211670 0020E5B0  7D 89 03 A6 */	mtctr r12
/* 80211674 0020E5B4  4E 80 04 21 */	bctrl 
/* 80211678 0020E5B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8021167C 0020E5BC  48 00 00 58 */	b .L_802116D4
.L_80211680:
/* 80211680 0020E5C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211684 0020E5C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211688 0020E5C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021168C 0020E5CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211690 0020E5D0  7D 89 03 A6 */	mtctr r12
/* 80211694 0020E5D4  4E 80 04 21 */	bctrl 
/* 80211698 0020E5D8  7C 64 1B 78 */	mr r4, r3
/* 8021169C 0020E5DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802116A0 0020E5E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802116A4 0020E5E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802116A8 0020E5E8  7D 89 03 A6 */	mtctr r12
/* 802116AC 0020E5EC  4E 80 04 21 */	bctrl 
/* 802116B0 0020E5F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802116B4 0020E5F4  40 82 00 3C */	bne .L_802116F0
/* 802116B8 0020E5F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802116BC 0020E5FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802116C0 0020E600  81 83 00 00 */	lwz r12, 0(r3)
/* 802116C4 0020E604  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802116C8 0020E608  7D 89 03 A6 */	mtctr r12
/* 802116CC 0020E60C  4E 80 04 21 */	bctrl 
/* 802116D0 0020E610  90 61 00 0C */	stw r3, 0xc(r1)
.L_802116D4:
/* 802116D4 0020E614  81 81 00 08 */	lwz r12, 8(r1)
/* 802116D8 0020E618  38 61 00 08 */	addi r3, r1, 8
/* 802116DC 0020E61C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802116E0 0020E620  7D 89 03 A6 */	mtctr r12
/* 802116E4 0020E624  4E 80 04 21 */	bctrl 
/* 802116E8 0020E628  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802116EC 0020E62C  41 82 FF 94 */	beq .L_80211680
.L_802116F0:
/* 802116F0 0020E630  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802116F4 0020E634  81 83 00 00 */	lwz r12, 0(r3)
/* 802116F8 0020E638  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802116FC 0020E63C  7D 89 03 A6 */	mtctr r12
/* 80211700 0020E640  4E 80 04 21 */	bctrl 
/* 80211704 0020E644  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211708 0020E648  7C 04 18 40 */	cmplw r4, r3
/* 8021170C 0020E64C  40 82 FF 14 */	bne .L_80211620
/* 80211710 0020E650  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80211714 0020E654  7C 08 03 A6 */	mtlr r0
/* 80211718 0020E658  38 21 00 20 */	addi r1, r1, 0x20
/* 8021171C 0020E65C  4E 80 00 20 */	blr 
.endfn "doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211720 0020E660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80211724 0020E664  7C 08 02 A6 */	mflr r0
/* 80211728 0020E668  3C 80 80 4C */	lis r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
/* 8021172C 0020E66C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80211730 0020E670  38 00 00 00 */	li r0, 0
/* 80211734 0020E674  38 84 04 20 */	addi r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
/* 80211738 0020E678  28 00 00 00 */	cmplwi r0, 0
/* 8021173C 0020E67C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211740 0020E680  90 81 00 08 */	stw r4, 8(r1)
/* 80211744 0020E684  90 01 00 0C */	stw r0, 0xc(r1)
/* 80211748 0020E688  90 61 00 10 */	stw r3, 0x10(r1)
/* 8021174C 0020E68C  40 82 00 1C */	bne .L_80211768
/* 80211750 0020E690  81 83 00 00 */	lwz r12, 0(r3)
/* 80211754 0020E694  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80211758 0020E698  7D 89 03 A6 */	mtctr r12
/* 8021175C 0020E69C  4E 80 04 21 */	bctrl 
/* 80211760 0020E6A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211764 0020E6A4  48 00 01 60 */	b .L_802118C4
.L_80211768:
/* 80211768 0020E6A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021176C 0020E6AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80211770 0020E6B0  7D 89 03 A6 */	mtctr r12
/* 80211774 0020E6B4  4E 80 04 21 */	bctrl 
/* 80211778 0020E6B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8021177C 0020E6BC  48 00 00 58 */	b .L_802117D4
.L_80211780:
/* 80211780 0020E6C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211784 0020E6C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211788 0020E6C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021178C 0020E6CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211790 0020E6D0  7D 89 03 A6 */	mtctr r12
/* 80211794 0020E6D4  4E 80 04 21 */	bctrl 
/* 80211798 0020E6D8  7C 64 1B 78 */	mr r4, r3
/* 8021179C 0020E6DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802117A0 0020E6E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802117A4 0020E6E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802117A8 0020E6E8  7D 89 03 A6 */	mtctr r12
/* 802117AC 0020E6EC  4E 80 04 21 */	bctrl 
/* 802117B0 0020E6F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802117B4 0020E6F4  40 82 01 10 */	bne .L_802118C4
/* 802117B8 0020E6F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802117BC 0020E6FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802117C0 0020E700  81 83 00 00 */	lwz r12, 0(r3)
/* 802117C4 0020E704  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802117C8 0020E708  7D 89 03 A6 */	mtctr r12
/* 802117CC 0020E70C  4E 80 04 21 */	bctrl 
/* 802117D0 0020E710  90 61 00 0C */	stw r3, 0xc(r1)
.L_802117D4:
/* 802117D4 0020E714  81 81 00 08 */	lwz r12, 8(r1)
/* 802117D8 0020E718  38 61 00 08 */	addi r3, r1, 8
/* 802117DC 0020E71C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802117E0 0020E720  7D 89 03 A6 */	mtctr r12
/* 802117E4 0020E724  4E 80 04 21 */	bctrl 
/* 802117E8 0020E728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802117EC 0020E72C  41 82 FF 94 */	beq .L_80211780
/* 802117F0 0020E730  48 00 00 D4 */	b .L_802118C4
.L_802117F4:
/* 802117F4 0020E734  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802117F8 0020E738  81 83 00 00 */	lwz r12, 0(r3)
/* 802117FC 0020E73C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211800 0020E740  7D 89 03 A6 */	mtctr r12
/* 80211804 0020E744  4E 80 04 21 */	bctrl 
/* 80211808 0020E748  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021180C 0020E74C  28 00 00 00 */	cmplwi r0, 0
/* 80211810 0020E750  40 82 00 24 */	bne .L_80211834
/* 80211814 0020E754  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211818 0020E758  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021181C 0020E75C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211820 0020E760  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211824 0020E764  7D 89 03 A6 */	mtctr r12
/* 80211828 0020E768  4E 80 04 21 */	bctrl 
/* 8021182C 0020E76C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211830 0020E770  48 00 00 94 */	b .L_802118C4
.L_80211834:
/* 80211834 0020E774  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211838 0020E778  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021183C 0020E77C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211840 0020E780  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211844 0020E784  7D 89 03 A6 */	mtctr r12
/* 80211848 0020E788  4E 80 04 21 */	bctrl 
/* 8021184C 0020E78C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211850 0020E790  48 00 00 58 */	b .L_802118A8
.L_80211854:
/* 80211854 0020E794  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211858 0020E798  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021185C 0020E79C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211860 0020E7A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211864 0020E7A4  7D 89 03 A6 */	mtctr r12
/* 80211868 0020E7A8  4E 80 04 21 */	bctrl 
/* 8021186C 0020E7AC  7C 64 1B 78 */	mr r4, r3
/* 80211870 0020E7B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80211874 0020E7B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211878 0020E7B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021187C 0020E7BC  7D 89 03 A6 */	mtctr r12
/* 80211880 0020E7C0  4E 80 04 21 */	bctrl 
/* 80211884 0020E7C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211888 0020E7C8  40 82 00 3C */	bne .L_802118C4
/* 8021188C 0020E7CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211890 0020E7D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211894 0020E7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211898 0020E7D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021189C 0020E7DC  7D 89 03 A6 */	mtctr r12
/* 802118A0 0020E7E0  4E 80 04 21 */	bctrl 
/* 802118A4 0020E7E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_802118A8:
/* 802118A8 0020E7E8  81 81 00 08 */	lwz r12, 8(r1)
/* 802118AC 0020E7EC  38 61 00 08 */	addi r3, r1, 8
/* 802118B0 0020E7F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802118B4 0020E7F4  7D 89 03 A6 */	mtctr r12
/* 802118B8 0020E7F8  4E 80 04 21 */	bctrl 
/* 802118BC 0020E7FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802118C0 0020E800  41 82 FF 94 */	beq .L_80211854
.L_802118C4:
/* 802118C4 0020E804  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802118C8 0020E808  81 83 00 00 */	lwz r12, 0(r3)
/* 802118CC 0020E80C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802118D0 0020E810  7D 89 03 A6 */	mtctr r12
/* 802118D4 0020E814  4E 80 04 21 */	bctrl 
/* 802118D8 0020E818  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802118DC 0020E81C  7C 04 18 40 */	cmplw r4, r3
/* 802118E0 0020E820  40 82 FF 14 */	bne .L_802117F4
/* 802118E4 0020E824  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802118E8 0020E828  7C 08 03 A6 */	mtlr r0
/* 802118EC 0020E82C  38 21 00 20 */	addi r1, r1, 0x20
/* 802118F0 0020E830  4E 80 00 20 */	blr 
.endfn "doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 802118F4 0020E834  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802118F8 0020E838  7C 08 02 A6 */	mflr r0
/* 802118FC 0020E83C  3C 80 80 4C */	lis r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
/* 80211900 0020E840  90 01 00 24 */	stw r0, 0x24(r1)
/* 80211904 0020E844  38 00 00 00 */	li r0, 0
/* 80211908 0020E848  38 84 04 20 */	addi r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
/* 8021190C 0020E84C  28 00 00 00 */	cmplwi r0, 0
/* 80211910 0020E850  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211914 0020E854  90 81 00 08 */	stw r4, 8(r1)
/* 80211918 0020E858  90 01 00 0C */	stw r0, 0xc(r1)
/* 8021191C 0020E85C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80211920 0020E860  40 82 00 1C */	bne .L_8021193C
/* 80211924 0020E864  81 83 00 00 */	lwz r12, 0(r3)
/* 80211928 0020E868  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021192C 0020E86C  7D 89 03 A6 */	mtctr r12
/* 80211930 0020E870  4E 80 04 21 */	bctrl 
/* 80211934 0020E874  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211938 0020E878  48 00 01 60 */	b .L_80211A98
.L_8021193C:
/* 8021193C 0020E87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211940 0020E880  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80211944 0020E884  7D 89 03 A6 */	mtctr r12
/* 80211948 0020E888  4E 80 04 21 */	bctrl 
/* 8021194C 0020E88C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211950 0020E890  48 00 00 58 */	b .L_802119A8
.L_80211954:
/* 80211954 0020E894  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211958 0020E898  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8021195C 0020E89C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211960 0020E8A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211964 0020E8A4  7D 89 03 A6 */	mtctr r12
/* 80211968 0020E8A8  4E 80 04 21 */	bctrl 
/* 8021196C 0020E8AC  7C 64 1B 78 */	mr r4, r3
/* 80211970 0020E8B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80211974 0020E8B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211978 0020E8B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021197C 0020E8BC  7D 89 03 A6 */	mtctr r12
/* 80211980 0020E8C0  4E 80 04 21 */	bctrl 
/* 80211984 0020E8C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211988 0020E8C8  40 82 01 10 */	bne .L_80211A98
/* 8021198C 0020E8CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211990 0020E8D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211994 0020E8D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211998 0020E8D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021199C 0020E8DC  7D 89 03 A6 */	mtctr r12
/* 802119A0 0020E8E0  4E 80 04 21 */	bctrl 
/* 802119A4 0020E8E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_802119A8:
/* 802119A8 0020E8E8  81 81 00 08 */	lwz r12, 8(r1)
/* 802119AC 0020E8EC  38 61 00 08 */	addi r3, r1, 8
/* 802119B0 0020E8F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802119B4 0020E8F4  7D 89 03 A6 */	mtctr r12
/* 802119B8 0020E8F8  4E 80 04 21 */	bctrl 
/* 802119BC 0020E8FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802119C0 0020E900  41 82 FF 94 */	beq .L_80211954
/* 802119C4 0020E904  48 00 00 D4 */	b .L_80211A98
.L_802119C8:
/* 802119C8 0020E908  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802119CC 0020E90C  81 83 00 00 */	lwz r12, 0(r3)
/* 802119D0 0020E910  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802119D4 0020E914  7D 89 03 A6 */	mtctr r12
/* 802119D8 0020E918  4E 80 04 21 */	bctrl 
/* 802119DC 0020E91C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802119E0 0020E920  28 00 00 00 */	cmplwi r0, 0
/* 802119E4 0020E924  40 82 00 24 */	bne .L_80211A08
/* 802119E8 0020E928  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802119EC 0020E92C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802119F0 0020E930  81 83 00 00 */	lwz r12, 0(r3)
/* 802119F4 0020E934  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802119F8 0020E938  7D 89 03 A6 */	mtctr r12
/* 802119FC 0020E93C  4E 80 04 21 */	bctrl 
/* 80211A00 0020E940  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211A04 0020E944  48 00 00 94 */	b .L_80211A98
.L_80211A08:
/* 80211A08 0020E948  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211A0C 0020E94C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211A10 0020E950  81 83 00 00 */	lwz r12, 0(r3)
/* 80211A14 0020E954  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211A18 0020E958  7D 89 03 A6 */	mtctr r12
/* 80211A1C 0020E95C  4E 80 04 21 */	bctrl 
/* 80211A20 0020E960  90 61 00 0C */	stw r3, 0xc(r1)
/* 80211A24 0020E964  48 00 00 58 */	b .L_80211A7C
.L_80211A28:
/* 80211A28 0020E968  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211A2C 0020E96C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211A30 0020E970  81 83 00 00 */	lwz r12, 0(r3)
/* 80211A34 0020E974  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211A38 0020E978  7D 89 03 A6 */	mtctr r12
/* 80211A3C 0020E97C  4E 80 04 21 */	bctrl 
/* 80211A40 0020E980  7C 64 1B 78 */	mr r4, r3
/* 80211A44 0020E984  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80211A48 0020E988  81 83 00 00 */	lwz r12, 0(r3)
/* 80211A4C 0020E98C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80211A50 0020E990  7D 89 03 A6 */	mtctr r12
/* 80211A54 0020E994  4E 80 04 21 */	bctrl 
/* 80211A58 0020E998  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211A5C 0020E99C  40 82 00 3C */	bne .L_80211A98
/* 80211A60 0020E9A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211A64 0020E9A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211A68 0020E9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 80211A6C 0020E9AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80211A70 0020E9B0  7D 89 03 A6 */	mtctr r12
/* 80211A74 0020E9B4  4E 80 04 21 */	bctrl 
/* 80211A78 0020E9B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_80211A7C:
/* 80211A7C 0020E9BC  81 81 00 08 */	lwz r12, 8(r1)
/* 80211A80 0020E9C0  38 61 00 08 */	addi r3, r1, 8
/* 80211A84 0020E9C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211A88 0020E9C8  7D 89 03 A6 */	mtctr r12
/* 80211A8C 0020E9CC  4E 80 04 21 */	bctrl 
/* 80211A90 0020E9D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80211A94 0020E9D4  41 82 FF 94 */	beq .L_80211A28
.L_80211A98:
/* 80211A98 0020E9D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80211A9C 0020E9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80211AA0 0020E9E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80211AA4 0020E9E4  7D 89 03 A6 */	mtctr r12
/* 80211AA8 0020E9E8  4E 80 04 21 */	bctrl 
/* 80211AAC 0020E9EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80211AB0 0020E9F0  7C 04 18 40 */	cmplw r4, r3
/* 80211AB4 0020E9F4  40 82 FF 14 */	bne .L_802119C8
/* 80211AB8 0020E9F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80211ABC 0020E9FC  7C 08 03 A6 */	mtlr r0
/* 80211AC0 0020EA00  38 21 00 20 */	addi r1, r1, 0x20
/* 80211AC4 0020EA04  4E 80 00 20 */	blr 
.endfn "doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "alloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 80211AC8 0020EA08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80211ACC 0020EA0C  7C 08 02 A6 */	mflr r0
/* 80211AD0 0020EA10  90 01 00 24 */	stw r0, 0x24(r1)
/* 80211AD4 0020EA14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80211AD8 0020EA18  7C 9F 23 78 */	mr r31, r4
/* 80211ADC 0020EA1C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80211AE0 0020EA20  7C 7E 1B 78 */	mr r30, r3
/* 80211AE4 0020EA24  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80211AE8 0020EA28  7F FD FB 78 */	mr r29, r31
/* 80211AEC 0020EA2C  1C 7D 00 54 */	mulli r3, r29, 0x54
/* 80211AF0 0020EA30  93 81 00 10 */	stw r28, 0x10(r1)
/* 80211AF4 0020EA34  38 63 00 10 */	addi r3, r3, 0x10
/* 80211AF8 0020EA38  4B E1 24 B5 */	bl __nwa__FUl
/* 80211AFC 0020EA3C  3C 80 80 21 */	lis r4, __ct__Q34Game8ItemWeed4WeedFv@ha
/* 80211B00 0020EA40  7F A7 EB 78 */	mr r7, r29
/* 80211B04 0020EA44  38 84 F2 80 */	addi r4, r4, __ct__Q34Game8ItemWeed4WeedFv@l
/* 80211B08 0020EA48  38 A0 00 00 */	li r5, 0
/* 80211B0C 0020EA4C  38 C0 00 54 */	li r6, 0x54
/* 80211B10 0020EA50  4B EA FE E1 */	bl __construct_new_array
/* 80211B14 0020EA54  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80211B18 0020EA58  38 00 00 00 */	li r0, 0
/* 80211B1C 0020EA5C  7F A3 EB 78 */	mr r3, r29
/* 80211B20 0020EA60  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80211B24 0020EA64  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80211B28 0020EA68  4B E1 24 85 */	bl __nwa__FUl
/* 80211B2C 0020EA6C  2C 1F 00 00 */	cmpwi r31, 0
/* 80211B30 0020EA70  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80211B34 0020EA74  39 60 00 00 */	li r11, 0
/* 80211B38 0020EA78  40 81 00 B0 */	ble .L_80211BE8
/* 80211B3C 0020EA7C  2C 1F 00 08 */	cmpwi r31, 8
/* 80211B40 0020EA80  38 7F FF F8 */	addi r3, r31, -8
/* 80211B44 0020EA84  40 81 00 80 */	ble .L_80211BC4
/* 80211B48 0020EA88  38 03 00 07 */	addi r0, r3, 7
/* 80211B4C 0020EA8C  54 00 E8 FE */	srwi r0, r0, 3
/* 80211B50 0020EA90  7C 09 03 A6 */	mtctr r0
/* 80211B54 0020EA94  2C 03 00 00 */	cmpwi r3, 0
/* 80211B58 0020EA98  40 81 00 6C */	ble .L_80211BC4
.L_80211B5C:
/* 80211B5C 0020EA9C  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80211B60 0020EAA0  39 40 00 01 */	li r10, 1
/* 80211B64 0020EAA4  39 0B 00 01 */	addi r8, r11, 1
/* 80211B68 0020EAA8  38 EB 00 02 */	addi r7, r11, 2
/* 80211B6C 0020EAAC  7D 43 59 AE */	stbx r10, r3, r11
/* 80211B70 0020EAB0  38 CB 00 03 */	addi r6, r11, 3
/* 80211B74 0020EAB4  38 AB 00 04 */	addi r5, r11, 4
/* 80211B78 0020EAB8  38 8B 00 05 */	addi r4, r11, 5
/* 80211B7C 0020EABC  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 80211B80 0020EAC0  38 6B 00 06 */	addi r3, r11, 6
/* 80211B84 0020EAC4  38 0B 00 07 */	addi r0, r11, 7
/* 80211B88 0020EAC8  39 6B 00 08 */	addi r11, r11, 8
/* 80211B8C 0020EACC  7D 49 41 AE */	stbx r10, r9, r8
/* 80211B90 0020EAD0  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 80211B94 0020EAD4  7D 48 39 AE */	stbx r10, r8, r7
/* 80211B98 0020EAD8  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 80211B9C 0020EADC  7D 47 31 AE */	stbx r10, r7, r6
/* 80211BA0 0020EAE0  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 80211BA4 0020EAE4  7D 46 29 AE */	stbx r10, r6, r5
/* 80211BA8 0020EAE8  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 80211BAC 0020EAEC  7D 45 21 AE */	stbx r10, r5, r4
/* 80211BB0 0020EAF0  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80211BB4 0020EAF4  7D 44 19 AE */	stbx r10, r4, r3
/* 80211BB8 0020EAF8  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80211BBC 0020EAFC  7D 43 01 AE */	stbx r10, r3, r0
/* 80211BC0 0020EB00  42 00 FF 9C */	bdnz .L_80211B5C
.L_80211BC4:
/* 80211BC4 0020EB04  7C 0B F8 50 */	subf r0, r11, r31
/* 80211BC8 0020EB08  38 80 00 01 */	li r4, 1
/* 80211BCC 0020EB0C  7C 09 03 A6 */	mtctr r0
/* 80211BD0 0020EB10  7C 0B F8 00 */	cmpw r11, r31
/* 80211BD4 0020EB14  40 80 00 14 */	bge .L_80211BE8
.L_80211BD8:
/* 80211BD8 0020EB18  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80211BDC 0020EB1C  7C 83 59 AE */	stbx r4, r3, r11
/* 80211BE0 0020EB20  39 6B 00 01 */	addi r11, r11, 1
/* 80211BE4 0020EB24  42 00 FF F4 */	bdnz .L_80211BD8
.L_80211BE8:
/* 80211BE8 0020EB28  7F C3 F3 78 */	mr r3, r30
/* 80211BEC 0020EB2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80211BF0 0020EB30  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80211BF4 0020EB34  7D 89 03 A6 */	mtctr r12
/* 80211BF8 0020EB38  4E 80 04 21 */	bctrl 
/* 80211BFC 0020EB3C  3B 80 00 00 */	li r28, 0
/* 80211C00 0020EB40  3B A0 00 00 */	li r29, 0
/* 80211C04 0020EB44  48 00 00 24 */	b .L_80211C28
.L_80211C08:
/* 80211C08 0020EB48  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 80211C0C 0020EB4C  7C 60 EA 14 */	add r3, r0, r29
/* 80211C10 0020EB50  81 83 00 0C */	lwz r12, 0xc(r3)
/* 80211C14 0020EB54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211C18 0020EB58  7D 89 03 A6 */	mtctr r12
/* 80211C1C 0020EB5C  4E 80 04 21 */	bctrl 
/* 80211C20 0020EB60  3B BD 00 54 */	addi r29, r29, 0x54
/* 80211C24 0020EB64  3B 9C 00 01 */	addi r28, r28, 1
.L_80211C28:
/* 80211C28 0020EB68  7C 1C F8 00 */	cmpw r28, r31
/* 80211C2C 0020EB6C  41 80 FF DC */	blt .L_80211C08
/* 80211C30 0020EB70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80211C34 0020EB74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80211C38 0020EB78  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80211C3C 0020EB7C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80211C40 0020EB80  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80211C44 0020EB84  7C 08 03 A6 */	mtlr r0
/* 80211C48 0020EB88  38 21 00 20 */	addi r1, r1, 0x20
/* 80211C4C 0020EB8C  4E 80 00 20 */	blr 
.endfn "alloc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "__ct__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211C50 0020EB90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211C54 0020EB94  7C 08 02 A6 */	mflr r0
/* 80211C58 0020EB98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211C5C 0020EB9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80211C60 0020EBA0  7C 7F 1B 78 */	mr r31, r3
/* 80211C64 0020EBA4  48 1F F7 2D */	bl __ct__5CNodeFv
/* 80211C68 0020EBA8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80211C6C 0020EBAC  3C 60 80 4C */	lis r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
/* 80211C70 0020EBB0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80211C74 0020EBB4  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 80211C78 0020EBB8  90 1F 00 00 */	stw r0, 0(r31)
/* 80211C7C 0020EBBC  38 03 03 D0 */	addi r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
/* 80211C80 0020EBC0  3C 80 80 4C */	lis r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 80211C84 0020EBC4  3C 60 80 4C */	lis r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
/* 80211C88 0020EBC8  90 1F 00 00 */	stw r0, 0(r31)
/* 80211C8C 0020EBCC  39 00 00 00 */	li r8, 0
/* 80211C90 0020EBD0  38 E4 02 58 */	addi r7, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 80211C94 0020EBD4  38 A3 02 D4 */	addi r5, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
/* 80211C98 0020EBD8  99 1F 00 18 */	stb r8, 0x18(r31)
/* 80211C9C 0020EBDC  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 80211CA0 0020EBE0  38 C7 00 2C */	addi r6, r7, 0x2c
/* 80211CA4 0020EBE4  38 85 00 2C */	addi r4, r5, 0x2c
/* 80211CA8 0020EBE8  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80211CAC 0020EBEC  38 00 00 01 */	li r0, 1
/* 80211CB0 0020EBF0  7F E3 FB 78 */	mr r3, r31
/* 80211CB4 0020EBF4  90 FF 00 00 */	stw r7, 0(r31)
/* 80211CB8 0020EBF8  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 80211CBC 0020EBFC  90 BF 00 00 */	stw r5, 0(r31)
/* 80211CC0 0020EC00  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80211CC4 0020EC04  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80211CC8 0020EC08  91 1F 00 24 */	stw r8, 0x24(r31)
/* 80211CCC 0020EC0C  91 1F 00 20 */	stw r8, 0x20(r31)
/* 80211CD0 0020EC10  91 1F 00 28 */	stw r8, 0x28(r31)
/* 80211CD4 0020EC14  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 80211CD8 0020EC18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80211CDC 0020EC1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211CE0 0020EC20  7C 08 03 A6 */	mtlr r0
/* 80211CE4 0020EC24  38 21 00 10 */	addi r1, r1, 0x10
/* 80211CE8 0020EC28  4E 80 00 20 */	blr 
.endfn "__ct__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg", weak
/* 80211CEC 0020EC2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80211CF0 0020EC30  7C 08 02 A6 */	mflr r0
/* 80211CF4 0020EC34  90 01 00 24 */	stw r0, 0x24(r1)
/* 80211CF8 0020EC38  54 A0 10 3A */	slwi r0, r5, 2
/* 80211CFC 0020EC3C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80211D00 0020EC40  7C 7B 1B 78 */	mr r27, r3
/* 80211D04 0020EC44  7C 9C 23 78 */	mr r28, r4
/* 80211D08 0020EC48  7C DD 33 78 */	mr r29, r6
/* 80211D0C 0020EC4C  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 80211D10 0020EC50  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80211D14 0020EC54  28 1E 00 00 */	cmplwi r30, 0
/* 80211D18 0020EC58  7F E3 00 2E */	lwzx r31, r3, r0
/* 80211D1C 0020EC5C  41 82 00 20 */	beq .L_80211D3C
/* 80211D20 0020EC60  7F C3 F3 78 */	mr r3, r30
/* 80211D24 0020EC64  81 9E 00 00 */	lwz r12, 0(r30)
/* 80211D28 0020EC68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80211D2C 0020EC6C  7D 89 03 A6 */	mtctr r12
/* 80211D30 0020EC70  4E 80 04 21 */	bctrl 
/* 80211D34 0020EC74  80 1E 00 04 */	lwz r0, 4(r30)
/* 80211D38 0020EC78  90 1B 00 18 */	stw r0, 0x18(r27)
.L_80211D3C:
/* 80211D3C 0020EC7C  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 80211D40 0020EC80  7C 1F 00 00 */	cmpw r31, r0
/* 80211D44 0020EC84  41 80 00 08 */	blt .L_80211D4C
.L_80211D48:
/* 80211D48 0020EC88  48 00 00 00 */	b .L_80211D48
.L_80211D4C:
/* 80211D4C 0020EC8C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80211D50 0020EC90  57 E0 10 3A */	slwi r0, r31, 2
/* 80211D54 0020EC94  7F 84 E3 78 */	mr r4, r28
/* 80211D58 0020EC98  7F A5 EB 78 */	mr r5, r29
/* 80211D5C 0020EC9C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80211D60 0020ECA0  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 80211D64 0020ECA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211D68 0020ECA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80211D6C 0020ECAC  7D 89 03 A6 */	mtctr r12
/* 80211D70 0020ECB0  4E 80 04 21 */	bctrl 
/* 80211D74 0020ECB4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80211D78 0020ECB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80211D7C 0020ECBC  7C 08 03 A6 */	mtlr r0
/* 80211D80 0020ECC0  38 21 00 20 */	addi r1, r1, 0x20
/* 80211D84 0020ECC4  4E 80 00 20 */	blr 
.endfn "transit__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"

.fn "registerState__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ24Game31FSMState<Q34Game8ItemWeed4Item>", weak
/* 80211D88 0020ECC8  80 C3 00 08 */	lwz r6, 8(r3)
/* 80211D8C 0020ECCC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80211D90 0020ECD0  7C 06 00 00 */	cmpw r6, r0
/* 80211D94 0020ECD4  4C 80 00 20 */	bgelr 
/* 80211D98 0020ECD8  80 A3 00 04 */	lwz r5, 4(r3)
/* 80211D9C 0020ECDC  54 C0 10 3A */	slwi r0, r6, 2
/* 80211DA0 0020ECE0  7C 85 01 2E */	stwx r4, r5, r0
/* 80211DA4 0020ECE4  80 A4 00 04 */	lwz r5, 4(r4)
/* 80211DA8 0020ECE8  2C 05 00 00 */	cmpwi r5, 0
/* 80211DAC 0020ECEC  41 80 00 10 */	blt .L_80211DBC
/* 80211DB0 0020ECF0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80211DB4 0020ECF4  7C 05 00 00 */	cmpw r5, r0
/* 80211DB8 0020ECF8  41 80 00 0C */	blt .L_80211DC4
.L_80211DBC:
/* 80211DBC 0020ECFC  38 00 00 00 */	li r0, 0
/* 80211DC0 0020ED00  48 00 00 08 */	b .L_80211DC8
.L_80211DC4:
/* 80211DC4 0020ED04  38 00 00 01 */	li r0, 1
.L_80211DC8:
/* 80211DC8 0020ED08  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80211DCC 0020ED0C  4D 82 00 20 */	beqlr 
/* 80211DD0 0020ED10  90 64 00 08 */	stw r3, 8(r4)
/* 80211DD4 0020ED14  80 03 00 08 */	lwz r0, 8(r3)
/* 80211DD8 0020ED18  80 C4 00 04 */	lwz r6, 4(r4)
/* 80211DDC 0020ED1C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 80211DE0 0020ED20  54 00 10 3A */	slwi r0, r0, 2
/* 80211DE4 0020ED24  7C C5 01 2E */	stwx r6, r5, r0
/* 80211DE8 0020ED28  80 04 00 04 */	lwz r0, 4(r4)
/* 80211DEC 0020ED2C  80 A3 00 08 */	lwz r5, 8(r3)
/* 80211DF0 0020ED30  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80211DF4 0020ED34  54 00 10 3A */	slwi r0, r0, 2
/* 80211DF8 0020ED38  7C A4 01 2E */	stwx r5, r4, r0
/* 80211DFC 0020ED3C  80 83 00 08 */	lwz r4, 8(r3)
/* 80211E00 0020ED40  38 04 00 01 */	addi r0, r4, 1
/* 80211E04 0020ED44  90 03 00 08 */	stw r0, 8(r3)
/* 80211E08 0020ED48  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ24Game31FSMState<Q34Game8ItemWeed4Item>"

.fn "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item", weak
/* 80211E0C 0020ED4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211E10 0020ED50  7C 08 02 A6 */	mflr r0
/* 80211E14 0020ED54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211E18 0020ED58  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 80211E1C 0020ED5C  28 03 00 00 */	cmplwi r3, 0
/* 80211E20 0020ED60  41 82 00 14 */	beq .L_80211E34
/* 80211E24 0020ED64  81 83 00 00 */	lwz r12, 0(r3)
/* 80211E28 0020ED68  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80211E2C 0020ED6C  7D 89 03 A6 */	mtctr r12
/* 80211E30 0020ED70  4E 80 04 21 */	bctrl 
.L_80211E34:
/* 80211E34 0020ED74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211E38 0020ED78  7C 08 03 A6 */	mtlr r0
/* 80211E3C 0020ED7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80211E40 0020ED80  4E 80 00 20 */	blr 
.endfn "exec__Q24Game35StateMachine<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"

.fn "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent", weak
/* 80211E44 0020ED84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211E48 0020ED88  7C 08 02 A6 */	mflr r0
/* 80211E4C 0020ED8C  7C 66 1B 78 */	mr r6, r3
/* 80211E50 0020ED90  7C 85 23 78 */	mr r5, r4
/* 80211E54 0020ED94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211E58 0020ED98  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 80211E5C 0020ED9C  28 03 00 00 */	cmplwi r3, 0
/* 80211E60 0020EDA0  41 82 00 18 */	beq .L_80211E78
/* 80211E64 0020EDA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80211E68 0020EDA8  7C C4 33 78 */	mr r4, r6
/* 80211E6C 0020EDAC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80211E70 0020EDB0  7D 89 03 A6 */	mtctr r12
/* 80211E74 0020EDB4  4E 80 04 21 */	bctrl 
.L_80211E78:
/* 80211E78 0020EDB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211E7C 0020EDBC  7C 08 03 A6 */	mtlr r0
/* 80211E80 0020EDC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80211E84 0020EDC4  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"

.fn "platCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9PlatEvent", weak
/* 80211E88 0020EDC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211E8C 0020EDCC  7C 08 02 A6 */	mflr r0
/* 80211E90 0020EDD0  7C 66 1B 78 */	mr r6, r3
/* 80211E94 0020EDD4  7C 85 23 78 */	mr r5, r4
/* 80211E98 0020EDD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211E9C 0020EDDC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 80211EA0 0020EDE0  28 03 00 00 */	cmplwi r3, 0
/* 80211EA4 0020EDE4  41 82 00 18 */	beq .L_80211EBC
/* 80211EA8 0020EDE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80211EAC 0020EDEC  7C C4 33 78 */	mr r4, r6
/* 80211EB0 0020EDF0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80211EB4 0020EDF4  7D 89 03 A6 */	mtctr r12
/* 80211EB8 0020EDF8  4E 80 04 21 */	bctrl 
.L_80211EBC:
/* 80211EBC 0020EDFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211EC0 0020EE00  7C 08 03 A6 */	mtlr r0
/* 80211EC4 0020EE04  38 21 00 10 */	addi r1, r1, 0x10
/* 80211EC8 0020EE08  4E 80 00 20 */	blr 
.endfn "platCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9PlatEvent"

.fn "collisionCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9CollEvent", weak
/* 80211ECC 0020EE0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211ED0 0020EE10  7C 08 02 A6 */	mflr r0
/* 80211ED4 0020EE14  7C 66 1B 78 */	mr r6, r3
/* 80211ED8 0020EE18  7C 85 23 78 */	mr r5, r4
/* 80211EDC 0020EE1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211EE0 0020EE20  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 80211EE4 0020EE24  28 03 00 00 */	cmplwi r3, 0
/* 80211EE8 0020EE28  41 82 00 18 */	beq .L_80211F00
/* 80211EEC 0020EE2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80211EF0 0020EE30  7C C4 33 78 */	mr r4, r6
/* 80211EF4 0020EE34  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80211EF8 0020EE38  7D 89 03 A6 */	mtctr r12
/* 80211EFC 0020EE3C  4E 80 04 21 */	bctrl 
.L_80211F00:
/* 80211F00 0020EE40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211F04 0020EE44  7C 08 03 A6 */	mtlr r0
/* 80211F08 0020EE48  38 21 00 10 */	addi r1, r1, 0x10
/* 80211F0C 0020EE4C  4E 80 00 20 */	blr 
.endfn "collisionCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRQ24Game9CollEvent"

.fn "bounceCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FPQ23Sys8Triangle", weak
/* 80211F10 0020EE50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211F14 0020EE54  7C 08 02 A6 */	mflr r0
/* 80211F18 0020EE58  7C 66 1B 78 */	mr r6, r3
/* 80211F1C 0020EE5C  7C 85 23 78 */	mr r5, r4
/* 80211F20 0020EE60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211F24 0020EE64  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 80211F28 0020EE68  28 03 00 00 */	cmplwi r3, 0
/* 80211F2C 0020EE6C  41 82 00 18 */	beq .L_80211F44
/* 80211F30 0020EE70  81 83 00 00 */	lwz r12, 0(r3)
/* 80211F34 0020EE74  7C C4 33 78 */	mr r4, r6
/* 80211F38 0020EE78  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80211F3C 0020EE7C  7D 89 03 A6 */	mtctr r12
/* 80211F40 0020EE80  4E 80 04 21 */	bctrl 
.L_80211F44:
/* 80211F44 0020EE84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211F48 0020EE88  7C 08 03 A6 */	mtlr r0
/* 80211F4C 0020EE8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80211F50 0020EE90  4E 80 00 20 */	blr 
.endfn "bounceCallback__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FPQ23Sys8Triangle"

.fn "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 80211F54 0020EE94  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80211F58 0020EE98  7C 03 20 AE */	lbzx r0, r3, r4
/* 80211F5C 0020EE9C  7C 00 00 34 */	cntlzw r0, r0
/* 80211F60 0020EEA0  54 03 D9 7E */	srwi r3, r0, 5
/* 80211F64 0020EEA4  4E 80 00 20 */	blr 
.endfn "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211F68 0020EEA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211F6C 0020EEAC  7C 08 02 A6 */	mflr r0
/* 80211F70 0020EEB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211F74 0020EEB4  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 80211F78 0020EEB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80211F7C 0020EEBC  7D 89 03 A6 */	mtctr r12
/* 80211F80 0020EEC0  4E 80 04 21 */	bctrl 
/* 80211F84 0020EEC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211F88 0020EEC8  7C 08 03 A6 */	mtlr r0
/* 80211F8C 0020EECC  38 21 00 10 */	addi r1, r1, 0x10
/* 80211F90 0020EED0  4E 80 00 20 */	blr 
.endfn "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv", weak
/* 80211F94 0020EED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211F98 0020EED8  7C 08 02 A6 */	mflr r0
/* 80211F9C 0020EEDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211FA0 0020EEE0  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 80211FA4 0020EEE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211FA8 0020EEE8  7D 89 03 A6 */	mtctr r12
/* 80211FAC 0020EEEC  4E 80 04 21 */	bctrl 
/* 80211FB0 0020EEF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211FB4 0020EEF4  7C 08 03 A6 */	mtlr r0
/* 80211FB8 0020EEF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80211FBC 0020EEFC  4E 80 00 20 */	blr 
.endfn "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"

.fn "__ml__31Iterator<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211FC0 0020EF00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211FC4 0020EF04  7C 08 02 A6 */	mflr r0
/* 80211FC8 0020EF08  7C 64 1B 78 */	mr r4, r3
/* 80211FCC 0020EF0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80211FD0 0020EF10  80 63 00 08 */	lwz r3, 8(r3)
/* 80211FD4 0020EF14  80 84 00 04 */	lwz r4, 4(r4)
/* 80211FD8 0020EF18  81 83 00 00 */	lwz r12, 0(r3)
/* 80211FDC 0020EF1C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80211FE0 0020EF20  7D 89 03 A6 */	mtctr r12
/* 80211FE4 0020EF24  4E 80 04 21 */	bctrl 
/* 80211FE8 0020EF28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80211FEC 0020EF2C  7C 08 03 A6 */	mtlr r0
/* 80211FF0 0020EF30  38 21 00 10 */	addi r1, r1, 0x10
/* 80211FF4 0020EF34  4E 80 00 20 */	blr 
.endfn "__ml__31Iterator<Q34Game8ItemWeed4Weed>Fv"

.fn "next__31Iterator<Q34Game8ItemWeed4Weed>Fv", weak
/* 80211FF8 0020EF38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80211FFC 0020EF3C  7C 08 02 A6 */	mflr r0
/* 80212000 0020EF40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80212004 0020EF44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80212008 0020EF48  7C 7F 1B 78 */	mr r31, r3
/* 8021200C 0020EF4C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80212010 0020EF50  28 00 00 00 */	cmplwi r0, 0
/* 80212014 0020EF54  40 82 00 24 */	bne .L_80212038
/* 80212018 0020EF58  80 7F 00 08 */	lwz r3, 8(r31)
/* 8021201C 0020EF5C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80212020 0020EF60  81 83 00 00 */	lwz r12, 0(r3)
/* 80212024 0020EF64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80212028 0020EF68  7D 89 03 A6 */	mtctr r12
/* 8021202C 0020EF6C  4E 80 04 21 */	bctrl 
/* 80212030 0020EF70  90 7F 00 04 */	stw r3, 4(r31)
/* 80212034 0020EF74  48 00 00 94 */	b .L_802120C8
.L_80212038:
/* 80212038 0020EF78  80 7F 00 08 */	lwz r3, 8(r31)
/* 8021203C 0020EF7C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80212040 0020EF80  81 83 00 00 */	lwz r12, 0(r3)
/* 80212044 0020EF84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80212048 0020EF88  7D 89 03 A6 */	mtctr r12
/* 8021204C 0020EF8C  4E 80 04 21 */	bctrl 
/* 80212050 0020EF90  90 7F 00 04 */	stw r3, 4(r31)
/* 80212054 0020EF94  48 00 00 58 */	b .L_802120AC
.L_80212058:
/* 80212058 0020EF98  80 7F 00 08 */	lwz r3, 8(r31)
/* 8021205C 0020EF9C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80212060 0020EFA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80212064 0020EFA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80212068 0020EFA8  7D 89 03 A6 */	mtctr r12
/* 8021206C 0020EFAC  4E 80 04 21 */	bctrl 
/* 80212070 0020EFB0  7C 64 1B 78 */	mr r4, r3
/* 80212074 0020EFB4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80212078 0020EFB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021207C 0020EFBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80212080 0020EFC0  7D 89 03 A6 */	mtctr r12
/* 80212084 0020EFC4  4E 80 04 21 */	bctrl 
/* 80212088 0020EFC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021208C 0020EFCC  40 82 00 3C */	bne .L_802120C8
/* 80212090 0020EFD0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80212094 0020EFD4  80 9F 00 04 */	lwz r4, 4(r31)
/* 80212098 0020EFD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021209C 0020EFDC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802120A0 0020EFE0  7D 89 03 A6 */	mtctr r12
/* 802120A4 0020EFE4  4E 80 04 21 */	bctrl 
/* 802120A8 0020EFE8  90 7F 00 04 */	stw r3, 4(r31)
.L_802120AC:
/* 802120AC 0020EFEC  7F E3 FB 78 */	mr r3, r31
/* 802120B0 0020EFF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802120B4 0020EFF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802120B8 0020EFF8  7D 89 03 A6 */	mtctr r12
/* 802120BC 0020EFFC  4E 80 04 21 */	bctrl 
/* 802120C0 0020F000  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802120C4 0020F004  41 82 FF 94 */	beq .L_80212058
.L_802120C8:
/* 802120C8 0020F008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802120CC 0020F00C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802120D0 0020F010  7C 08 03 A6 */	mtlr r0
/* 802120D4 0020F014  38 21 00 10 */	addi r1, r1, 0x10
/* 802120D8 0020F018  4E 80 00 20 */	blr 
.endfn "next__31Iterator<Q34Game8ItemWeed4Weed>Fv"

.fn "first__31Iterator<Q34Game8ItemWeed4Weed>Fv", weak
/* 802120DC 0020F01C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802120E0 0020F020  7C 08 02 A6 */	mflr r0
/* 802120E4 0020F024  90 01 00 14 */	stw r0, 0x14(r1)
/* 802120E8 0020F028  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802120EC 0020F02C  7C 7F 1B 78 */	mr r31, r3
/* 802120F0 0020F030  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802120F4 0020F034  28 00 00 00 */	cmplwi r0, 0
/* 802120F8 0020F038  40 82 00 20 */	bne .L_80212118
/* 802120FC 0020F03C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80212100 0020F040  81 83 00 00 */	lwz r12, 0(r3)
/* 80212104 0020F044  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80212108 0020F048  7D 89 03 A6 */	mtctr r12
/* 8021210C 0020F04C  4E 80 04 21 */	bctrl 
/* 80212110 0020F050  90 7F 00 04 */	stw r3, 4(r31)
/* 80212114 0020F054  48 00 00 90 */	b .L_802121A4
.L_80212118:
/* 80212118 0020F058  80 7F 00 08 */	lwz r3, 8(r31)
/* 8021211C 0020F05C  81 83 00 00 */	lwz r12, 0(r3)
/* 80212120 0020F060  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80212124 0020F064  7D 89 03 A6 */	mtctr r12
/* 80212128 0020F068  4E 80 04 21 */	bctrl 
/* 8021212C 0020F06C  90 7F 00 04 */	stw r3, 4(r31)
/* 80212130 0020F070  48 00 00 58 */	b .L_80212188
.L_80212134:
/* 80212134 0020F074  80 7F 00 08 */	lwz r3, 8(r31)
/* 80212138 0020F078  80 9F 00 04 */	lwz r4, 4(r31)
/* 8021213C 0020F07C  81 83 00 00 */	lwz r12, 0(r3)
/* 80212140 0020F080  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80212144 0020F084  7D 89 03 A6 */	mtctr r12
/* 80212148 0020F088  4E 80 04 21 */	bctrl 
/* 8021214C 0020F08C  7C 64 1B 78 */	mr r4, r3
/* 80212150 0020F090  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80212154 0020F094  81 83 00 00 */	lwz r12, 0(r3)
/* 80212158 0020F098  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021215C 0020F09C  7D 89 03 A6 */	mtctr r12
/* 80212160 0020F0A0  4E 80 04 21 */	bctrl 
/* 80212164 0020F0A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80212168 0020F0A8  40 82 00 3C */	bne .L_802121A4
/* 8021216C 0020F0AC  80 7F 00 08 */	lwz r3, 8(r31)
/* 80212170 0020F0B0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80212174 0020F0B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80212178 0020F0B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021217C 0020F0BC  7D 89 03 A6 */	mtctr r12
/* 80212180 0020F0C0  4E 80 04 21 */	bctrl 
/* 80212184 0020F0C4  90 7F 00 04 */	stw r3, 4(r31)
.L_80212188:
/* 80212188 0020F0C8  7F E3 FB 78 */	mr r3, r31
/* 8021218C 0020F0CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80212190 0020F0D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80212194 0020F0D4  7D 89 03 A6 */	mtctr r12
/* 80212198 0020F0D8  4E 80 04 21 */	bctrl 
/* 8021219C 0020F0DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802121A0 0020F0E0  41 82 FF 94 */	beq .L_80212134
.L_802121A4:
/* 802121A4 0020F0E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802121A8 0020F0E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802121AC 0020F0EC  7C 08 03 A6 */	mtlr r0
/* 802121B0 0020F0F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802121B4 0020F0F4  4E 80 00 20 */	blr 
.endfn "first__31Iterator<Q34Game8ItemWeed4Weed>Fv"

.fn __sinit_itemWeed_cpp, local
/* 802121B8 0020F0F8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802121BC 0020F0FC  38 00 FF FF */	li r0, -1
/* 802121C0 0020F100  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802121C4 0020F104  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802121C8 0020F108  90 0D 95 58 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802121CC 0020F10C  D4 03 FB A0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802121D0 0020F110  D0 0D 95 5C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802121D4 0020F114  D0 03 00 04 */	stfs f0, 4(r3)
/* 802121D8 0020F118  D0 03 00 08 */	stfs f0, 8(r3)
/* 802121DC 0020F11C  4E 80 00 20 */	blr 
.endfn __sinit_itemWeed_cpp

.fn "@32@__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 802121E0 0020F120  38 63 FF E0 */	addi r3, r3, -32
/* 802121E4 0020F124  4B FF D1 88 */	b "__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@32@__dt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 802121E8 0020F128  38 63 FF E4 */	addi r3, r3, -28
/* 802121EC 0020F12C  4B FF EC C4 */	b "resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@resetMgr__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics", weak
/* 802121F0 0020F130  38 63 FF E4 */	addi r3, r3, -28
/* 802121F4 0020F134  4B FF EC 6C */	b "doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
.endfn "@28@doDirectDraw__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"

.fn "@28@doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff", weak
/* 802121F8 0020F138  38 63 FF E4 */	addi r3, r3, -28
/* 802121FC 0020F13C  4B FF EC 14 */	b "doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff"
.endfn "@28@doSimulation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Ff"

.fn "@28@doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212200 0020F140  38 63 FF E4 */	addi r3, r3, -28
/* 80212204 0020F144  4B FF EB BC */	b "doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@doViewCalc__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 80212208 0020F148  38 63 FF E4 */	addi r3, r3, -28
/* 8021220C 0020F14C  4B FF EB 64 */	b "doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"
.endfn "@28@doSetView__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "@28@doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212210 0020F150  38 63 FF E4 */	addi r3, r3, -28
/* 80212214 0020F154  4B FF EB 0C */	b "doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@doEntry__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212218 0020F158  38 63 FF E4 */	addi r3, r3, -28
/* 8021221C 0020F15C  4B FF EA B4 */	b "doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@doAnimation__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics", weak
/* 80212220 0020F160  38 63 FF E4 */	addi r3, r3, -28
/* 80212224 0020F164  4B FF ED 60 */	b "doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"
.endfn "@28@doDirectDraw__32ObjectMgr<Q34Game8ItemWeed4Weed>FR8Graphics"

.fn "@28@doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff", weak
/* 80212228 0020F168  38 63 FF E4 */	addi r3, r3, -28
/* 8021222C 0020F16C  4B FF EF 78 */	b "doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff"
.endfn "@28@doSimulation__32ObjectMgr<Q34Game8ItemWeed4Weed>Ff"

.fn "@28@doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212230 0020F170  38 63 FF E4 */	addi r3, r3, -28
/* 80212234 0020F174  4B FF F1 44 */	b "doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@doViewCalc__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi", weak
/* 80212238 0020F178  38 63 FF E4 */	addi r3, r3, -28
/* 8021223C 0020F17C  4B FF F3 10 */	b "doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi"
.endfn "@28@doSetView__32ObjectMgr<Q34Game8ItemWeed4Weed>Fi"

.fn "@28@doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212240 0020F180  38 63 FF E4 */	addi r3, r3, -28
/* 80212244 0020F184  4B FF F4 DC */	b "doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@doEntry__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@28@doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212248 0020F188  38 63 FF E4 */	addi r3, r3, -28
/* 8021224C 0020F18C  4B FF F6 A8 */	b "doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@28@doAnimation__32ObjectMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@32@getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212250 0020F190  38 63 FF E0 */	addi r3, r3, -32
/* 80212254 0020F194  4B FF FD 14 */	b "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@32@getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@32@getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv", weak
/* 80212258 0020F198  38 63 FF E0 */	addi r3, r3, -32
/* 8021225C 0020F19C  4B FF E8 30 */	b "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
.endfn "@32@getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"

.fn "@32@getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv", weak
/* 80212260 0020F1A0  38 63 FF E0 */	addi r3, r3, -32
/* 80212264 0020F1A4  4B FF E7 FC */	b "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
.endfn "@32@getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"

.fn "@32@get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv", weak
/* 80212268 0020F1A8  38 63 FF E0 */	addi r3, r3, -32
/* 8021226C 0020F1AC  4B FF FD 28 */	b "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
.endfn "@32@get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"

.fn "@32@__dt__Q34Game8ItemWeed7WeedMgrFv", weak
/* 80212270 0020F1B0  38 63 FF E0 */	addi r3, r3, -32
/* 80212274 0020F1B4  4B FF E6 3C */	b __dt__Q34Game8ItemWeed7WeedMgrFv
.endfn "@32@__dt__Q34Game8ItemWeed7WeedMgrFv"

.fn "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent", weak
/* 80212278 0020F1B8  38 63 FE 88 */	addi r3, r3, -376
/* 8021227C 0020F1BC  4B FF FB C8 */	b "onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"
.endfn "@376@onKeyEvent__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>FRCQ28SysShape8KeyEvent"

.fn "@48@__dt__Q34Game8ItemWeed3MgrFv", weak
/* 80212280 0020F1C0  38 63 FF D0 */	addi r3, r3, -48
/* 80212284 0020F1C4  4B FF E3 48 */	b __dt__Q34Game8ItemWeed3MgrFv
.endfn "@48@__dt__Q34Game8ItemWeed3MgrFv"
