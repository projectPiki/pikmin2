.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemDownFloor_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80481800:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_8048180C:
	.asciz "itemDownFloor"
.balign 4
lbl_8048181C:
	.asciz "itemDownFloor.cpp"
.balign 4
lbl_80481830:
	.asciz "no shape !\n"
.balign 4
lbl_8048183C:
	.asciz "No Friend Found for seesaw: searching for same id (%s)\n"
.balign 4
lbl_80481874:
	.asciz "P2Assert"
.balign 4
lbl_80481880:
	.asciz "DownFloor"
.balign 4
lbl_8048188C:
	.asciz "ItemDownFloor"
.balign 4
lbl_8048189C:
	.asciz "user/Kando/objects/downfloor"
.balign 4
lbl_804818BC:
	.asciz "texts.szs"
.balign 4
lbl_804818C8:
	.asciz "down_floor_1.bmd"
.balign 4
lbl_804818DC:
	.asciz "down_floor_2.bmd"
.balign 4
lbl_804818F0:
	.asciz "down_floor_3.bmd"
.balign 4
lbl_80481904:
	.asciz "animmgr.txt"
.balign 4
lbl_80481910:
	.asciz "platform.bin"
.balign 4
lbl_80481920:
	.asciz "platform_2.bin"
.balign 4
lbl_80481930:
	.asciz "platform_3.bin"
.balign 4
lbl_80481940:
	.asciz "new Model"
.balign 4
lbl_8048194C:
	.asciz "Platform"
.balign 4
lbl_80481958:
	.asciz "Platform-Down"
.balign 4
lbl_80481968:
	.asciz "DownFloor2"
.balign 4
lbl_80481974:
	.asciz "DownFloor3"
.balign 4
lbl_80481980:
	.asciz "x06_join"
.balign 4
lbl_8048198C: # Shift-JIS
	.4byte 0x092392BE
	.4byte 0x82DD906C
	.4byte 0x90940D0A
	.byte 0
.balign 4
lbl_8048199C:
	.asciz "\t#type\r\n"
.balign 4
lbl_804819A8:
	.asciz "\t# 1:seesaw\r\n"
.balign 4
lbl_804819B8:
	.asciz "Downfloor"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__16GenDownFloorParm
__vt__16GenDownFloorParm:
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.global __vt__Q34Game13ItemDownFloor7UpState
__vt__Q34Game13ItemDownFloor7UpState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
	.4byte exec__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item
	.4byte cleanup__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte onKeyEvent__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
	.4byte onPlat__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item
.global __vt__Q34Game13ItemDownFloor9DownState
__vt__Q34Game13ItemDownFloor9DownState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
	.4byte exec__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
	.4byte cleanup__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte onKeyEvent__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
	.4byte onPlat__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
.global __vt__Q34Game13ItemDownFloor12DamagedState
__vt__Q34Game13ItemDownFloor12DamagedState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
	.4byte exec__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item
	.4byte cleanup__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte onKeyEvent__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
	.4byte onPlat__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item
.global __vt__Q34Game13ItemDownFloor9WaitState
__vt__Q34Game13ItemDownFloor9WaitState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
	.4byte exec__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item
	.4byte cleanup__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte onKeyEvent__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
	.4byte onPlat__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item
.global __vt__Q34Game13ItemDownFloor3Mgr
__vt__Q34Game13ItemDownFloor3Mgr:
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
	.4byte onLoadResources__Q34Game13ItemDownFloor3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game13ItemDownFloor3MgrFv
	.4byte "generatorBirth__Q34Game13ItemDownFloor3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game13ItemDownFloor3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game13ItemDownFloor3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game13ItemDownFloor3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game13ItemDownFloor3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game13ItemDownFloor3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game13ItemDownFloor3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game13ItemDownFloor3MgrFv
	.4byte getCaveName__Q34Game13ItemDownFloor3MgrFi
	.4byte getCaveID__Q34Game13ItemDownFloor3MgrFPc
.global __vt__Q23efx13TDownf3Updown
__vt__Q23efx13TDownf3Updown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx9TPbagDown
__vt__Q23efx9TPbagDown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.global __vt__Q23efx13TDownf2Updown
__vt__Q23efx13TDownf2Updown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx13TDownf1Updown
__vt__Q23efx13TDownf1Updown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx14TDownf3WUpdown
__vt__Q23efx14TDownf3WUpdown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx14TDownf2WUpdown
__vt__Q23efx14TDownf2WUpdown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx14TDownf1WUpdown
__vt__Q23efx14TDownf1WUpdown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx7TPbagOn
__vt__Q23efx7TPbagOn:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx9TDownf2On
__vt__Q23efx9TDownf2On:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx9TDownf1On
__vt__Q23efx9TDownf1On:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx10TDownf3WOn
__vt__Q23efx10TDownf3WOn:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx10TDownf2WOn
__vt__Q23efx10TDownf2WOn:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx10TDownf1WOn
__vt__Q23efx10TDownf1WOn:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game13ItemDownFloor4Item
__vt__Q34Game13ItemDownFloor4Item:
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
	.4byte constructor__Q34Game13ItemDownFloor4ItemFv
	.4byte onInit__Q34Game13ItemDownFloor4ItemFPQ24Game15CreatureInitArg
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
	.4byte getFaceDir__Q34Game13ItemDownFloor4ItemFv
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
	.4byte doSave__Q34Game13ItemDownFloor4ItemFR6Stream
	.4byte doLoad__Q34Game13ItemDownFloor4ItemFR6Stream
	.4byte "bounceCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9CollEvent"
	.4byte platCallback__Q34Game13ItemDownFloor4ItemFRQ24Game9PlatEvent
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
	.4byte getCreatureName__Q34Game13ItemDownFloor4ItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q34Game13ItemDownFloor4ItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q34Game13ItemDownFloor4ItemFv
	.4byte doAI__Q34Game13ItemDownFloor4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q34Game13ItemDownFloor4ItemFv
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
	.4byte updateBoundSphere__Q34Game13ItemDownFloor4ItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game13ItemDownFloor4ItemFv
	.4byte onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@480@getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam"
	.4byte getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam
.global "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"
"__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "start__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"
"__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "start__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
.global "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"
"__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>":
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
	.4byte "bounceCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>Fv"
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
	.4byte "onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent"
.global __vt__Q34Game13ItemDownFloor9DeadState
__vt__Q34Game13ItemDownFloor9DeadState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
	.4byte exec__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item
	.4byte cleanup__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte onKeyEvent__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
	.4byte onPlat__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item
.global __vt__Q34Game13ItemDownFloor5State
__vt__Q34Game13ItemDownFloor5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "cleanup__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte onKeyEvent__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
	.4byte onPlat__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4Item
.global "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"
"__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "cleanup__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
	.4byte "onKeyEvent__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
.global "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"
"__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "cleanup__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
.global __vt__Q34Game13ItemDownFloor3FSM
__vt__Q34Game13ItemDownFloor3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game13ItemDownFloor3FSMFPQ34Game13ItemDownFloor4Item
	.4byte "start__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
	.4byte "transit__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4
.global mgr__Q24Game13ItemDownFloor
mgr__Q24Game13ItemDownFloor:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80519C38:
	.float 170.0
lbl_80519C3C:
	.float 32768.0
lbl_80519C40: # tau
	.float 6.2831855
.balign 8
lbl_80519C48:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_80519C50:
	.float 0.0
lbl_80519C54:
	.float 10.0
lbl_80519C58:
	.float 30.0
lbl_80519C5C:
	.float 20.0
lbl_80519C60:
	.float 50.0
.balign 4
lbl_80519C64:
	.asciz "arc.szs"
.balign 4
lbl_80519C6C:
	.asciz "move"
.balign 4
lbl_80519C74:
	.asciz "\t# id\r\n"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game13ItemDownFloor3FSMFPQ34Game13ItemDownFloor4Item
init__Q34Game13ItemDownFloor3FSMFPQ34Game13ItemDownFloor4Item:
/* 801F4CDC 001F1C1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4CE0 001F1C20  7C 08 02 A6 */	mflr r0
/* 801F4CE4 001F1C24  38 80 00 05 */	li r4, 5
/* 801F4CE8 001F1C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4CEC 001F1C2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4CF0 001F1C30  7C 7F 1B 78 */	mr r31, r3
/* 801F4CF4 001F1C34  48 00 29 3D */	bl "create__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>Fi"
/* 801F4CF8 001F1C38  38 60 00 10 */	li r3, 0x10
/* 801F4CFC 001F1C3C  4B E2 F1 A9 */	bl __nw__FUl
/* 801F4D00 001F1C40  7C 64 1B 79 */	or. r4, r3, r3
/* 801F4D04 001F1C44  41 82 00 40 */	beq .L_801F4D44
/* 801F4D08 001F1C48  3C 60 80 4C */	lis r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4D0C 001F1C4C  3C C0 80 4C */	lis r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4D10 001F1C50  38 03 CC 6C */	addi r0, r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4D14 001F1C54  3C A0 80 4C */	lis r5, __vt__Q34Game13ItemDownFloor5State@ha
/* 801F4D18 001F1C58  90 04 00 00 */	stw r0, 0(r4)
/* 801F4D1C 001F1C5C  38 E0 00 00 */	li r7, 0
/* 801F4D20 001F1C60  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor9WaitState@ha
/* 801F4D24 001F1C64  38 C6 CC 38 */	addi r6, r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4D28 001F1C68  90 E4 00 04 */	stw r7, 4(r4)
/* 801F4D2C 001F1C6C  38 A5 CC 00 */	addi r5, r5, __vt__Q34Game13ItemDownFloor5State@l
/* 801F4D30 001F1C70  38 03 C5 40 */	addi r0, r3, __vt__Q34Game13ItemDownFloor9WaitState@l
/* 801F4D34 001F1C74  90 E4 00 08 */	stw r7, 8(r4)
/* 801F4D38 001F1C78  90 C4 00 00 */	stw r6, 0(r4)
/* 801F4D3C 001F1C7C  90 A4 00 00 */	stw r5, 0(r4)
/* 801F4D40 001F1C80  90 04 00 00 */	stw r0, 0(r4)
.L_801F4D44:
/* 801F4D44 001F1C84  7F E3 FB 78 */	mr r3, r31
/* 801F4D48 001F1C88  48 00 29 E9 */	bl "registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>"
/* 801F4D4C 001F1C8C  38 60 00 14 */	li r3, 0x14
/* 801F4D50 001F1C90  4B E2 F1 55 */	bl __nw__FUl
/* 801F4D54 001F1C94  7C 64 1B 79 */	or. r4, r3, r3
/* 801F4D58 001F1C98  41 82 00 44 */	beq .L_801F4D9C
/* 801F4D5C 001F1C9C  3C 60 80 4C */	lis r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4D60 001F1CA0  3C C0 80 4C */	lis r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4D64 001F1CA4  38 03 CC 6C */	addi r0, r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4D68 001F1CA8  3C A0 80 4C */	lis r5, __vt__Q34Game13ItemDownFloor5State@ha
/* 801F4D6C 001F1CAC  90 04 00 00 */	stw r0, 0(r4)
/* 801F4D70 001F1CB0  38 00 00 01 */	li r0, 1
/* 801F4D74 001F1CB4  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor12DamagedState@ha
/* 801F4D78 001F1CB8  38 E0 00 00 */	li r7, 0
/* 801F4D7C 001F1CBC  90 04 00 04 */	stw r0, 4(r4)
/* 801F4D80 001F1CC0  38 C6 CC 38 */	addi r6, r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4D84 001F1CC4  38 A5 CC 00 */	addi r5, r5, __vt__Q34Game13ItemDownFloor5State@l
/* 801F4D88 001F1CC8  38 03 C5 08 */	addi r0, r3, __vt__Q34Game13ItemDownFloor12DamagedState@l
/* 801F4D8C 001F1CCC  90 E4 00 08 */	stw r7, 8(r4)
/* 801F4D90 001F1CD0  90 C4 00 00 */	stw r6, 0(r4)
/* 801F4D94 001F1CD4  90 A4 00 00 */	stw r5, 0(r4)
/* 801F4D98 001F1CD8  90 04 00 00 */	stw r0, 0(r4)
.L_801F4D9C:
/* 801F4D9C 001F1CDC  7F E3 FB 78 */	mr r3, r31
/* 801F4DA0 001F1CE0  48 00 29 91 */	bl "registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>"
/* 801F4DA4 001F1CE4  38 60 00 10 */	li r3, 0x10
/* 801F4DA8 001F1CE8  4B E2 F0 FD */	bl __nw__FUl
/* 801F4DAC 001F1CEC  7C 64 1B 79 */	or. r4, r3, r3
/* 801F4DB0 001F1CF0  41 82 00 44 */	beq .L_801F4DF4
/* 801F4DB4 001F1CF4  3C 60 80 4C */	lis r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4DB8 001F1CF8  3C C0 80 4C */	lis r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4DBC 001F1CFC  38 03 CC 6C */	addi r0, r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4DC0 001F1D00  3C A0 80 4C */	lis r5, __vt__Q34Game13ItemDownFloor5State@ha
/* 801F4DC4 001F1D04  90 04 00 00 */	stw r0, 0(r4)
/* 801F4DC8 001F1D08  38 00 00 02 */	li r0, 2
/* 801F4DCC 001F1D0C  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor9DownState@ha
/* 801F4DD0 001F1D10  38 E0 00 00 */	li r7, 0
/* 801F4DD4 001F1D14  90 04 00 04 */	stw r0, 4(r4)
/* 801F4DD8 001F1D18  38 C6 CC 38 */	addi r6, r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4DDC 001F1D1C  38 A5 CC 00 */	addi r5, r5, __vt__Q34Game13ItemDownFloor5State@l
/* 801F4DE0 001F1D20  38 03 C4 D0 */	addi r0, r3, __vt__Q34Game13ItemDownFloor9DownState@l
/* 801F4DE4 001F1D24  90 E4 00 08 */	stw r7, 8(r4)
/* 801F4DE8 001F1D28  90 C4 00 00 */	stw r6, 0(r4)
/* 801F4DEC 001F1D2C  90 A4 00 00 */	stw r5, 0(r4)
/* 801F4DF0 001F1D30  90 04 00 00 */	stw r0, 0(r4)
.L_801F4DF4:
/* 801F4DF4 001F1D34  7F E3 FB 78 */	mr r3, r31
/* 801F4DF8 001F1D38  48 00 29 39 */	bl "registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>"
/* 801F4DFC 001F1D3C  38 60 00 10 */	li r3, 0x10
/* 801F4E00 001F1D40  4B E2 F0 A5 */	bl __nw__FUl
/* 801F4E04 001F1D44  7C 64 1B 79 */	or. r4, r3, r3
/* 801F4E08 001F1D48  41 82 00 44 */	beq .L_801F4E4C
/* 801F4E0C 001F1D4C  3C 60 80 4C */	lis r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4E10 001F1D50  3C C0 80 4C */	lis r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4E14 001F1D54  38 03 CC 6C */	addi r0, r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4E18 001F1D58  3C A0 80 4C */	lis r5, __vt__Q34Game13ItemDownFloor5State@ha
/* 801F4E1C 001F1D5C  90 04 00 00 */	stw r0, 0(r4)
/* 801F4E20 001F1D60  38 00 00 03 */	li r0, 3
/* 801F4E24 001F1D64  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor7UpState@ha
/* 801F4E28 001F1D68  38 E0 00 00 */	li r7, 0
/* 801F4E2C 001F1D6C  90 04 00 04 */	stw r0, 4(r4)
/* 801F4E30 001F1D70  38 C6 CC 38 */	addi r6, r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4E34 001F1D74  38 A5 CC 00 */	addi r5, r5, __vt__Q34Game13ItemDownFloor5State@l
/* 801F4E38 001F1D78  38 03 C4 98 */	addi r0, r3, __vt__Q34Game13ItemDownFloor7UpState@l
/* 801F4E3C 001F1D7C  90 E4 00 08 */	stw r7, 8(r4)
/* 801F4E40 001F1D80  90 C4 00 00 */	stw r6, 0(r4)
/* 801F4E44 001F1D84  90 A4 00 00 */	stw r5, 0(r4)
/* 801F4E48 001F1D88  90 04 00 00 */	stw r0, 0(r4)
.L_801F4E4C:
/* 801F4E4C 001F1D8C  7F E3 FB 78 */	mr r3, r31
/* 801F4E50 001F1D90  48 00 28 E1 */	bl "registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>"
/* 801F4E54 001F1D94  38 60 00 10 */	li r3, 0x10
/* 801F4E58 001F1D98  4B E2 F0 4D */	bl __nw__FUl
/* 801F4E5C 001F1D9C  7C 64 1B 79 */	or. r4, r3, r3
/* 801F4E60 001F1DA0  41 82 00 44 */	beq .L_801F4EA4
/* 801F4E64 001F1DA4  3C 60 80 4C */	lis r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4E68 001F1DA8  3C C0 80 4C */	lis r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@ha
/* 801F4E6C 001F1DAC  38 03 CC 6C */	addi r0, r3, "__vt__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4E70 001F1DB0  3C A0 80 4C */	lis r5, __vt__Q34Game13ItemDownFloor5State@ha
/* 801F4E74 001F1DB4  90 04 00 00 */	stw r0, 0(r4)
/* 801F4E78 001F1DB8  38 00 00 04 */	li r0, 4
/* 801F4E7C 001F1DBC  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor9DeadState@ha
/* 801F4E80 001F1DC0  38 E0 00 00 */	li r7, 0
/* 801F4E84 001F1DC4  90 04 00 04 */	stw r0, 4(r4)
/* 801F4E88 001F1DC8  38 C6 CC 38 */	addi r6, r6, "__vt__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>"@l
/* 801F4E8C 001F1DCC  38 A5 CC 00 */	addi r5, r5, __vt__Q34Game13ItemDownFloor5State@l
/* 801F4E90 001F1DD0  38 03 CB C8 */	addi r0, r3, __vt__Q34Game13ItemDownFloor9DeadState@l
/* 801F4E94 001F1DD4  90 E4 00 08 */	stw r7, 8(r4)
/* 801F4E98 001F1DD8  90 C4 00 00 */	stw r6, 0(r4)
/* 801F4E9C 001F1DDC  90 A4 00 00 */	stw r5, 0(r4)
/* 801F4EA0 001F1DE0  90 04 00 00 */	stw r0, 0(r4)
.L_801F4EA4:
/* 801F4EA4 001F1DE4  7F E3 FB 78 */	mr r3, r31
/* 801F4EA8 001F1DE8  48 00 28 89 */	bl "registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>"
/* 801F4EAC 001F1DEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4EB0 001F1DF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F4EB4 001F1DF4  7C 08 03 A6 */	mtlr r0
/* 801F4EB8 001F1DF8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4EBC 001F1DFC  4E 80 00 20 */	blr 

.global constructor__Q34Game13ItemDownFloor4ItemFv
constructor__Q34Game13ItemDownFloor4ItemFv:
/* 801F4EC0 001F1E00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F4EC4 001F1E04  7C 08 02 A6 */	mflr r0
/* 801F4EC8 001F1E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F4ECC 001F1E0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F4ED0 001F1E10  7C 7F 1B 78 */	mr r31, r3
/* 801F4ED4 001F1E14  38 60 00 84 */	li r3, 0x84
/* 801F4ED8 001F1E18  4B E2 EF CD */	bl __nw__FUl
/* 801F4EDC 001F1E1C  7C 60 1B 79 */	or. r0, r3, r3
/* 801F4EE0 001F1E20  41 82 00 10 */	beq .L_801F4EF0
/* 801F4EE4 001F1E24  7F E4 FB 78 */	mr r4, r31
/* 801F4EE8 001F1E28  48 26 C7 39 */	bl __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
/* 801F4EEC 001F1E2C  7C 60 1B 78 */	mr r0, r3
.L_801F4EF0:
/* 801F4EF0 001F1E30  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801F4EF4 001F1E34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F4EF8 001F1E38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F4EFC 001F1E3C  7C 08 03 A6 */	mtlr r0
/* 801F4F00 001F1E40  38 21 00 10 */	addi r1, r1, 0x10
/* 801F4F04 001F1E44  4E 80 00 20 */	blr 

.global onInit__Q34Game13ItemDownFloor4ItemFPQ24Game15CreatureInitArg
onInit__Q34Game13ItemDownFloor4ItemFPQ24Game15CreatureInitArg:
/* 801F4F08 001F1E48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F4F0C 001F1E4C  7C 08 02 A6 */	mflr r0
/* 801F4F10 001F1E50  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F4F14 001F1E54  38 00 00 00 */	li r0, 0
/* 801F4F18 001F1E58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F4F1C 001F1E5C  7C 9F 23 78 */	mr r31, r4
/* 801F4F20 001F1E60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F4F24 001F1E64  7C 7E 1B 78 */	mr r30, r3
/* 801F4F28 001F1E68  7F C4 F3 78 */	mr r4, r30
/* 801F4F2C 001F1E6C  90 03 01 F8 */	stw r0, 0x1f8(r3)
/* 801F4F30 001F1E70  80 6D 94 E0 */	lwz r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
/* 801F4F34 001F1E74  48 00 15 55 */	bl setupDownFloor__Q34Game13ItemDownFloor3MgrFPQ34Game13ItemDownFloor4Item
/* 801F4F38 001F1E78  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 801F4F3C 001F1E7C  28 00 00 00 */	cmplwi r0, 0
/* 801F4F40 001F1E80  40 82 00 20 */	bne .L_801F4F60
/* 801F4F44 001F1E84  3C 60 80 48 */	lis r3, lbl_8048181C@ha
/* 801F4F48 001F1E88  3C A0 80 48 */	lis r5, lbl_80481830@ha
/* 801F4F4C 001F1E8C  38 63 18 1C */	addi r3, r3, lbl_8048181C@l
/* 801F4F50 001F1E90  38 80 00 DB */	li r4, 0xdb
/* 801F4F54 001F1E94  38 A5 18 30 */	addi r5, r5, lbl_80481830@l
/* 801F4F58 001F1E98  4C C6 31 82 */	crclr 6
/* 801F4F5C 001F1E9C  4B E3 56 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F4F60:
/* 801F4F60 001F1EA0  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801F4F64 001F1EA4  7F C4 F3 78 */	mr r4, r30
/* 801F4F68 001F1EA8  38 A0 00 00 */	li r5, 0
/* 801F4F6C 001F1EAC  38 C0 00 00 */	li r6, 0
/* 801F4F70 001F1EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F4F74 001F1EB4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F4F78 001F1EB8  7D 89 03 A6 */	mtctr r12
/* 801F4F7C 001F1EBC  4E 80 04 21 */	bctrl 
/* 801F4F80 001F1EC0  7F C3 F3 78 */	mr r3, r30
/* 801F4F84 001F1EC4  38 80 00 01 */	li r4, 1
/* 801F4F88 001F1EC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F4F8C 001F1ECC  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F4F90 001F1ED0  7D 89 03 A6 */	mtctr r12
/* 801F4F94 001F1ED4  4E 80 04 21 */	bctrl 
/* 801F4F98 001F1ED8  28 1F 00 00 */	cmplwi r31, 0
/* 801F4F9C 001F1EDC  41 82 00 10 */	beq .L_801F4FAC
/* 801F4FA0 001F1EE0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 801F4FA4 001F1EE4  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 801F4FA8 001F1EE8  48 00 00 38 */	b .L_801F4FE0
.L_801F4FAC:
/* 801F4FAC 001F1EEC  4B ED 45 F5 */	bl rand
/* 801F4FB0 001F1EF0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801F4FB4 001F1EF4  3C 00 43 30 */	lis r0, 0x4330
/* 801F4FB8 001F1EF8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801F4FBC 001F1EFC  C8 62 B8 E8 */	lfd f3, lbl_80519C48@sda21(r2)
/* 801F4FC0 001F1F00  90 01 00 08 */	stw r0, 8(r1)
/* 801F4FC4 001F1F04  C0 22 B8 DC */	lfs f1, lbl_80519C3C@sda21(r2)
/* 801F4FC8 001F1F08  C8 41 00 08 */	lfd f2, 8(r1)
/* 801F4FCC 001F1F0C  C0 02 B8 E0 */	lfs f0, lbl_80519C40@sda21(r2)
/* 801F4FD0 001F1F10  EC 42 18 28 */	fsubs f2, f2, f3
/* 801F4FD4 001F1F14  EC 22 08 24 */	fdivs f1, f2, f1
/* 801F4FD8 001F1F18  EC 00 00 72 */	fmuls f0, f0, f1
/* 801F4FDC 001F1F1C  D0 1E 02 00 */	stfs f0, 0x200(r30)
.L_801F4FE0:
/* 801F4FE0 001F1F20  38 00 00 00 */	li r0, 0
/* 801F4FE4 001F1F24  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 801F4FE8 001F1F28  90 1E 01 F0 */	stw r0, 0x1f0(r30)
/* 801F4FEC 001F1F2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F4FF0 001F1F30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F4FF4 001F1F34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F4FF8 001F1F38  7C 08 03 A6 */	mtlr r0
/* 801F4FFC 001F1F3C  38 21 00 20 */	addi r1, r1, 0x20
/* 801F5000 001F1F40  4E 80 00 20 */	blr 

.global "start__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
"start__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg":
/* 801F5004 001F1F44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F5008 001F1F48  7C 08 02 A6 */	mflr r0
/* 801F500C 001F1F4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5010 001F1F50  38 00 00 00 */	li r0, 0
/* 801F5014 001F1F54  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801F5018 001F1F58  81 83 00 00 */	lwz r12, 0(r3)
/* 801F501C 001F1F5C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F5020 001F1F60  7D 89 03 A6 */	mtctr r12
/* 801F5024 001F1F64  4E 80 04 21 */	bctrl 
/* 801F5028 001F1F68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F502C 001F1F6C  7C 08 03 A6 */	mtlr r0
/* 801F5030 001F1F70  38 21 00 10 */	addi r1, r1, 0x10
/* 801F5034 001F1F74  4E 80 00 20 */	blr 

.global initDependency__Q34Game13ItemDownFloor4ItemFv
initDependency__Q34Game13ItemDownFloor4ItemFv:
/* 801F5038 001F1F78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F503C 001F1F7C  7C 08 02 A6 */	mflr r0
/* 801F5040 001F1F80  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F5044 001F1F84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F5048 001F1F88  7C 7F 1B 78 */	mr r31, r3
/* 801F504C 001F1F8C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F5050 001F1F90  88 03 02 28 */	lbz r0, 0x228(r3)
/* 801F5054 001F1F94  28 00 00 00 */	cmplwi r0, 0
/* 801F5058 001F1F98  41 82 02 7C */	beq .L_801F52D4
/* 801F505C 001F1F9C  38 00 00 00 */	li r0, 0
/* 801F5060 001F1FA0  90 1F 02 18 */	stw r0, 0x218(r31)
/* 801F5064 001F1FA4  80 6D 94 E0 */	lwz r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
/* 801F5068 001F1FA8  28 03 00 00 */	cmplwi r3, 0
/* 801F506C 001F1FAC  41 82 00 08 */	beq .L_801F5074
/* 801F5070 001F1FB0  38 63 00 30 */	addi r3, r3, 0x30
.L_801F5074:
/* 801F5074 001F1FB4  38 00 00 00 */	li r0, 0
/* 801F5078 001F1FB8  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801F507C 001F1FBC  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801F5080 001F1FC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5084 001F1FC4  28 00 00 00 */	cmplwi r0, 0
/* 801F5088 001F1FC8  90 81 00 08 */	stw r4, 8(r1)
/* 801F508C 001F1FCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801F5090 001F1FD0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801F5094 001F1FD4  40 82 00 1C */	bne .L_801F50B0
/* 801F5098 001F1FD8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F509C 001F1FDC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F50A0 001F1FE0  7D 89 03 A6 */	mtctr r12
/* 801F50A4 001F1FE4  4E 80 04 21 */	bctrl 
/* 801F50A8 001F1FE8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801F50AC 001F1FEC  48 00 01 8C */	b .L_801F5238
.L_801F50B0:
/* 801F50B0 001F1FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F50B4 001F1FF4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F50B8 001F1FF8  7D 89 03 A6 */	mtctr r12
/* 801F50BC 001F1FFC  4E 80 04 21 */	bctrl 
/* 801F50C0 001F2000  90 61 00 0C */	stw r3, 0xc(r1)
/* 801F50C4 001F2004  48 00 00 58 */	b .L_801F511C
.L_801F50C8:
/* 801F50C8 001F2008  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F50CC 001F200C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F50D0 001F2010  81 83 00 00 */	lwz r12, 0(r3)
/* 801F50D4 001F2014  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F50D8 001F2018  7D 89 03 A6 */	mtctr r12
/* 801F50DC 001F201C  4E 80 04 21 */	bctrl 
/* 801F50E0 001F2020  7C 64 1B 78 */	mr r4, r3
/* 801F50E4 001F2024  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801F50E8 001F2028  81 83 00 00 */	lwz r12, 0(r3)
/* 801F50EC 001F202C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F50F0 001F2030  7D 89 03 A6 */	mtctr r12
/* 801F50F4 001F2034  4E 80 04 21 */	bctrl 
/* 801F50F8 001F2038  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F50FC 001F203C  40 82 01 3C */	bne .L_801F5238
/* 801F5100 001F2040  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F5104 001F2044  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F5108 001F2048  81 83 00 00 */	lwz r12, 0(r3)
/* 801F510C 001F204C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F5110 001F2050  7D 89 03 A6 */	mtctr r12
/* 801F5114 001F2054  4E 80 04 21 */	bctrl 
/* 801F5118 001F2058  90 61 00 0C */	stw r3, 0xc(r1)
.L_801F511C:
/* 801F511C 001F205C  81 81 00 08 */	lwz r12, 8(r1)
/* 801F5120 001F2060  38 61 00 08 */	addi r3, r1, 8
/* 801F5124 001F2064  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F5128 001F2068  7D 89 03 A6 */	mtctr r12
/* 801F512C 001F206C  4E 80 04 21 */	bctrl 
/* 801F5130 001F2070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F5134 001F2074  41 82 FF 94 */	beq .L_801F50C8
/* 801F5138 001F2078  48 00 01 00 */	b .L_801F5238
.L_801F513C:
/* 801F513C 001F207C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F5140 001F2080  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5144 001F2084  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F5148 001F2088  7D 89 03 A6 */	mtctr r12
/* 801F514C 001F208C  4E 80 04 21 */	bctrl 
/* 801F5150 001F2090  7C 7E 1B 78 */	mr r30, r3
/* 801F5154 001F2094  7C 1E F8 40 */	cmplw r30, r31
/* 801F5158 001F2098  41 82 00 24 */	beq .L_801F517C
/* 801F515C 001F209C  80 9F 02 24 */	lwz r4, 0x224(r31)
/* 801F5160 001F20A0  38 7E 02 1C */	addi r3, r30, 0x21c
/* 801F5164 001F20A4  38 A0 00 2A */	li r5, 0x2a
/* 801F5168 001F20A8  48 21 E1 95 */	bl match__4ID32FUlc
/* 801F516C 001F20AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F5170 001F20B0  41 82 00 0C */	beq .L_801F517C
/* 801F5174 001F20B4  93 DF 02 18 */	stw r30, 0x218(r31)
/* 801F5178 001F20B8  48 00 00 E0 */	b .L_801F5258
.L_801F517C:
/* 801F517C 001F20BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5180 001F20C0  28 00 00 00 */	cmplwi r0, 0
/* 801F5184 001F20C4  40 82 00 24 */	bne .L_801F51A8
/* 801F5188 001F20C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F518C 001F20CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F5190 001F20D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5194 001F20D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F5198 001F20D8  7D 89 03 A6 */	mtctr r12
/* 801F519C 001F20DC  4E 80 04 21 */	bctrl 
/* 801F51A0 001F20E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801F51A4 001F20E4  48 00 00 94 */	b .L_801F5238
.L_801F51A8:
/* 801F51A8 001F20E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F51AC 001F20EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F51B0 001F20F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F51B4 001F20F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F51B8 001F20F8  7D 89 03 A6 */	mtctr r12
/* 801F51BC 001F20FC  4E 80 04 21 */	bctrl 
/* 801F51C0 001F2100  90 61 00 0C */	stw r3, 0xc(r1)
/* 801F51C4 001F2104  48 00 00 58 */	b .L_801F521C
.L_801F51C8:
/* 801F51C8 001F2108  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F51CC 001F210C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F51D0 001F2110  81 83 00 00 */	lwz r12, 0(r3)
/* 801F51D4 001F2114  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801F51D8 001F2118  7D 89 03 A6 */	mtctr r12
/* 801F51DC 001F211C  4E 80 04 21 */	bctrl 
/* 801F51E0 001F2120  7C 64 1B 78 */	mr r4, r3
/* 801F51E4 001F2124  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801F51E8 001F2128  81 83 00 00 */	lwz r12, 0(r3)
/* 801F51EC 001F212C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F51F0 001F2130  7D 89 03 A6 */	mtctr r12
/* 801F51F4 001F2134  4E 80 04 21 */	bctrl 
/* 801F51F8 001F2138  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F51FC 001F213C  40 82 00 3C */	bne .L_801F5238
/* 801F5200 001F2140  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F5204 001F2144  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F5208 001F2148  81 83 00 00 */	lwz r12, 0(r3)
/* 801F520C 001F214C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F5210 001F2150  7D 89 03 A6 */	mtctr r12
/* 801F5214 001F2154  4E 80 04 21 */	bctrl 
/* 801F5218 001F2158  90 61 00 0C */	stw r3, 0xc(r1)
.L_801F521C:
/* 801F521C 001F215C  81 81 00 08 */	lwz r12, 8(r1)
/* 801F5220 001F2160  38 61 00 08 */	addi r3, r1, 8
/* 801F5224 001F2164  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F5228 001F2168  7D 89 03 A6 */	mtctr r12
/* 801F522C 001F216C  4E 80 04 21 */	bctrl 
/* 801F5230 001F2170  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F5234 001F2174  41 82 FF 94 */	beq .L_801F51C8
.L_801F5238:
/* 801F5238 001F2178  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801F523C 001F217C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5240 001F2180  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F5244 001F2184  7D 89 03 A6 */	mtctr r12
/* 801F5248 001F2188  4E 80 04 21 */	bctrl 
/* 801F524C 001F218C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801F5250 001F2190  7C 04 18 40 */	cmplw r4, r3
/* 801F5254 001F2194  40 82 FE E8 */	bne .L_801F513C
.L_801F5258:
/* 801F5258 001F2198  80 7F 02 18 */	lwz r3, 0x218(r31)
/* 801F525C 001F219C  28 03 00 00 */	cmplwi r3, 0
/* 801F5260 001F21A0  41 82 00 54 */	beq .L_801F52B4
/* 801F5264 001F21A4  88 03 02 28 */	lbz r0, 0x228(r3)
/* 801F5268 001F21A8  28 00 00 02 */	cmplwi r0, 2
/* 801F526C 001F21AC  40 82 00 14 */	bne .L_801F5280
/* 801F5270 001F21B0  38 00 00 01 */	li r0, 1
/* 801F5274 001F21B4  98 1F 02 28 */	stb r0, 0x228(r31)
/* 801F5278 001F21B8  98 1F 01 FC */	stb r0, 0x1fc(r31)
/* 801F527C 001F21BC  48 00 00 14 */	b .L_801F5290
.L_801F5280:
/* 801F5280 001F21C0  38 60 00 00 */	li r3, 0
/* 801F5284 001F21C4  38 00 00 02 */	li r0, 2
/* 801F5288 001F21C8  98 7F 01 FC */	stb r3, 0x1fc(r31)
/* 801F528C 001F21CC  98 1F 02 28 */	stb r0, 0x228(r31)
.L_801F5290:
/* 801F5290 001F21D0  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F5294 001F21D4  7F E4 FB 78 */	mr r4, r31
/* 801F5298 001F21D8  38 A0 00 00 */	li r5, 0
/* 801F529C 001F21DC  38 C0 00 00 */	li r6, 0
/* 801F52A0 001F21E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F52A4 001F21E4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F52A8 001F21E8  7D 89 03 A6 */	mtctr r12
/* 801F52AC 001F21EC  4E 80 04 21 */	bctrl 
/* 801F52B0 001F21F0  48 00 00 24 */	b .L_801F52D4
.L_801F52B4:
/* 801F52B4 001F21F4  3C 60 80 48 */	lis r3, lbl_8048181C@ha
/* 801F52B8 001F21F8  3C 80 80 48 */	lis r4, lbl_8048183C@ha
/* 801F52BC 001F21FC  38 A4 18 3C */	addi r5, r4, lbl_8048183C@l
/* 801F52C0 001F2200  38 DF 02 1C */	addi r6, r31, 0x21c
/* 801F52C4 001F2204  38 63 18 1C */	addi r3, r3, lbl_8048181C@l
/* 801F52C8 001F2208  38 80 01 18 */	li r4, 0x118
/* 801F52CC 001F220C  4C C6 31 82 */	crclr 6
/* 801F52D0 001F2210  4B E3 53 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F52D4:
/* 801F52D4 001F2214  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F52D8 001F2218  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F52DC 001F221C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F52E0 001F2220  7C 08 03 A6 */	mtlr r0
/* 801F52E4 001F2224  38 21 00 20 */	addi r1, r1, 0x20
/* 801F52E8 001F2228  4E 80 00 20 */	blr 

.global onSetPosition__Q34Game13ItemDownFloor4ItemFv
onSetPosition__Q34Game13ItemDownFloor4ItemFv:
/* 801F52EC 001F222C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801F52F0 001F2230  7C 08 02 A6 */	mflr r0
/* 801F52F4 001F2234  C0 02 B8 F0 */	lfs f0, lbl_80519C50@sda21(r2)
/* 801F52F8 001F2238  90 01 00 44 */	stw r0, 0x44(r1)
/* 801F52FC 001F223C  38 A1 00 08 */	addi r5, r1, 8
/* 801F5300 001F2240  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801F5304 001F2244  7C 7F 1B 78 */	mr r31, r3
/* 801F5308 001F2248  38 9F 01 9C */	addi r4, r31, 0x19c
/* 801F530C 001F224C  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 801F5310 001F2250  38 7F 01 38 */	addi r3, r31, 0x138
/* 801F5314 001F2254  D0 01 00 08 */	stfs f0, 8(r1)
/* 801F5318 001F2258  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801F531C 001F225C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801F5320 001F2260  48 23 35 69 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801F5324 001F2264  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801F5328 001F2268  38 7F 01 38 */	addi r3, r31, 0x138
/* 801F532C 001F226C  80 84 00 08 */	lwz r4, 8(r4)
/* 801F5330 001F2270  38 84 00 24 */	addi r4, r4, 0x24
/* 801F5334 001F2274  4B EF 4F 99 */	bl PSMTXCopy
/* 801F5338 001F2278  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801F533C 001F227C  80 63 00 08 */	lwz r3, 8(r3)
/* 801F5340 001F2280  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5344 001F2284  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F5348 001F2288  7D 89 03 A6 */	mtctr r12
/* 801F534C 001F228C  4E 80 04 21 */	bctrl 
/* 801F5350 001F2290  80 6D 94 E0 */	lwz r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
/* 801F5354 001F2294  7F E4 FB 78 */	mr r4, r31
/* 801F5358 001F2298  48 00 12 21 */	bl setupPlatform__Q34Game13ItemDownFloor3MgrFPQ34Game13ItemDownFloor4Item
/* 801F535C 001F229C  88 1F 02 28 */	lbz r0, 0x228(r31)
/* 801F5360 001F22A0  28 00 00 00 */	cmplwi r0, 0
/* 801F5364 001F22A4  41 82 00 10 */	beq .L_801F5374
/* 801F5368 001F22A8  88 1F 02 29 */	lbz r0, 0x229(r31)
/* 801F536C 001F22AC  28 00 00 00 */	cmplwi r0, 0
/* 801F5370 001F22B0  41 82 00 A0 */	beq .L_801F5410
.L_801F5374:
/* 801F5374 001F22B4  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801F5378 001F22B8  38 00 00 00 */	li r0, 0
/* 801F537C 001F22BC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F5380 001F22C0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801F5384 001F22C4  C0 02 B8 F4 */	lfs f0, lbl_80519C54@sda21(r2)
/* 801F5388 001F22C8  28 03 00 00 */	cmplwi r3, 0
/* 801F538C 001F22CC  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 801F5390 001F22D0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801F5394 001F22D4  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801F5398 001F22D8  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801F539C 001F22DC  90 01 00 20 */	stw r0, 0x20(r1)
/* 801F53A0 001F22E0  98 01 00 24 */	stb r0, 0x24(r1)
/* 801F53A4 001F22E4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801F53A8 001F22E8  41 82 00 60 */	beq .L_801F5408
/* 801F53AC 001F22EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801F53B0 001F22F0  28 03 00 00 */	cmplwi r3, 0
/* 801F53B4 001F22F4  41 82 00 54 */	beq .L_801F5408
/* 801F53B8 001F22F8  38 81 00 14 */	addi r4, r1, 0x14
/* 801F53BC 001F22FC  4B F7 DC 09 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 801F53C0 001F2300  90 7F 02 14 */	stw r3, 0x214(r31)
/* 801F53C4 001F2304  38 80 00 00 */	li r4, 0
/* 801F53C8 001F2308  80 7F 02 14 */	lwz r3, 0x214(r31)
/* 801F53CC 001F230C  4B F7 D4 A9 */	bl setOpen__Q24Game8WayPointFb
/* 801F53D0 001F2310  80 7F 02 14 */	lwz r3, 0x214(r31)
/* 801F53D4 001F2314  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801F53D8 001F2318  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 801F53DC 001F231C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801F53E0 001F2320  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 801F53E4 001F2324  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801F53E8 001F2328  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 801F53EC 001F232C  88 1F 02 28 */	lbz r0, 0x228(r31)
/* 801F53F0 001F2330  28 00 00 00 */	cmplwi r0, 0
/* 801F53F4 001F2334  41 82 00 1C */	beq .L_801F5410
/* 801F53F8 001F2338  80 7F 02 14 */	lwz r3, 0x214(r31)
/* 801F53FC 001F233C  88 9F 01 FC */	lbz r4, 0x1fc(r31)
/* 801F5400 001F2340  4B F7 D4 75 */	bl setOpen__Q24Game8WayPointFb
/* 801F5404 001F2344  48 00 00 0C */	b .L_801F5410
.L_801F5408:
/* 801F5408 001F2348  38 00 00 00 */	li r0, 0
/* 801F540C 001F234C  90 1F 02 14 */	stw r0, 0x214(r31)
.L_801F5410:
/* 801F5410 001F2350  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801F5414 001F2354  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801F5418 001F2358  7C 08 03 A6 */	mtlr r0
/* 801F541C 001F235C  38 21 00 40 */	addi r1, r1, 0x40
/* 801F5420 001F2360  4E 80 00 20 */	blr 

.global updateBoundSphere__Q34Game13ItemDownFloor4ItemFv
updateBoundSphere__Q34Game13ItemDownFloor4ItemFv:
/* 801F5424 001F2364  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801F5428 001F2368  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 801F542C 001F236C  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 801F5430 001F2370  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 801F5434 001F2374  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 801F5438 001F2378  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 801F543C 001F237C  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent:
/* 801F5440 001F2380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F5444 001F2384  7C 08 02 A6 */	mflr r0
/* 801F5448 001F2388  7C 66 1B 78 */	mr r6, r3
/* 801F544C 001F238C  7C 85 23 78 */	mr r5, r4
/* 801F5450 001F2390  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5454 001F2394  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F5458 001F2398  28 03 00 00 */	cmplwi r3, 0
/* 801F545C 001F239C  41 82 00 18 */	beq .L_801F5474
/* 801F5460 001F23A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5464 001F23A4  7C C4 33 78 */	mr r4, r6
/* 801F5468 001F23A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801F546C 001F23AC  7D 89 03 A6 */	mtctr r12
/* 801F5470 001F23B0  4E 80 04 21 */	bctrl 
.L_801F5474:
/* 801F5474 001F23B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5478 001F23B8  7C 08 03 A6 */	mtlr r0
/* 801F547C 001F23BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F5480 001F23C0  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent:
/* 801F5484 001F23C4  4E 80 00 20 */	blr 

.global startDamageMotion__Q34Game13ItemDownFloor4ItemFv
startDamageMotion__Q34Game13ItemDownFloor4ItemFv:
/* 801F5488 001F23C8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801F548C 001F23CC  7C 08 02 A6 */	mflr r0
/* 801F5490 001F23D0  90 01 00 94 */	stw r0, 0x94(r1)
/* 801F5494 001F23D4  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 801F5498 001F23D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F549C 001F23DC  7F E5 FB 78 */	mr r5, r31
/* 801F54A0 001F23E0  41 82 00 08 */	beq .L_801F54A8
/* 801F54A4 001F23E4  38 A5 01 78 */	addi r5, r5, 0x178
.L_801F54A8:
/* 801F54A8 001F23E8  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F54AC 001F23EC  38 80 00 01 */	li r4, 1
/* 801F54B0 001F23F0  48 23 37 D9 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F54B4 001F23F4  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F54B8 001F23F8  28 00 00 02 */	cmplwi r0, 2
/* 801F54BC 001F23FC  40 82 00 24 */	bne .L_801F54E0
/* 801F54C0 001F2400  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F54C4 001F2404  38 80 38 59 */	li r4, 0x3859
/* 801F54C8 001F2408  38 A0 00 00 */	li r5, 0
/* 801F54CC 001F240C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F54D0 001F2410  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801F54D4 001F2414  7D 89 03 A6 */	mtctr r12
/* 801F54D8 001F2418  4E 80 04 21 */	bctrl 
/* 801F54DC 001F241C  48 00 00 20 */	b .L_801F54FC
.L_801F54E0:
/* 801F54E0 001F2420  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F54E4 001F2424  38 80 38 46 */	li r4, 0x3846
/* 801F54E8 001F2428  38 A0 00 00 */	li r5, 0
/* 801F54EC 001F242C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F54F0 001F2430  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801F54F4 001F2434  7D 89 03 A6 */	mtctr r12
/* 801F54F8 001F2438  4E 80 04 21 */	bctrl 
.L_801F54FC:
/* 801F54FC 001F243C  C0 22 B8 F8 */	lfs f1, lbl_80519C58@sda21(r2)
/* 801F5500 001F2440  38 81 00 58 */	addi r4, r1, 0x58
/* 801F5504 001F2444  C0 02 B8 FC */	lfs f0, lbl_80519C5C@sda21(r2)
/* 801F5508 001F2448  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 801F550C 001F244C  C0 3F 01 C4 */	lfs f1, 0x1c4(r31)
/* 801F5510 001F2450  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F5514 001F2454  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801F5518 001F2458  C0 3F 01 C8 */	lfs f1, 0x1c8(r31)
/* 801F551C 001F245C  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801F5520 001F2460  EC 01 00 28 */	fsubs f0, f1, f0
/* 801F5524 001F2464  C0 3F 01 CC */	lfs f1, 0x1cc(r31)
/* 801F5528 001F2468  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801F552C 001F246C  C0 3F 01 D0 */	lfs f1, 0x1d0(r31)
/* 801F5530 001F2470  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 801F5534 001F2474  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801F5538 001F2478  4B F6 E3 F1 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 801F553C 001F247C  28 03 00 00 */	cmplwi r3, 0
/* 801F5540 001F2480  41 82 01 34 */	beq .L_801F5674
/* 801F5544 001F2484  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F5548 001F2488  2C 00 00 01 */	cmpwi r0, 1
/* 801F554C 001F248C  41 82 00 78 */	beq .L_801F55C4
/* 801F5550 001F2490  40 80 00 10 */	bge .L_801F5560
/* 801F5554 001F2494  2C 00 00 00 */	cmpwi r0, 0
/* 801F5558 001F2498  40 80 00 14 */	bge .L_801F556C
/* 801F555C 001F249C  48 00 02 50 */	b .L_801F57AC
.L_801F5560:
/* 801F5560 001F24A0  2C 00 00 03 */	cmpwi r0, 3
/* 801F5564 001F24A4  40 80 02 48 */	bge .L_801F57AC
/* 801F5568 001F24A8  48 00 00 B4 */	b .L_801F561C
.L_801F556C:
/* 801F556C 001F24AC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5570 001F24B0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5574 001F24B4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5578 001F24B8  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F557C 001F24BC  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F5580 001F24C0  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5584 001F24C4  3C 60 80 4C */	lis r3, __vt__Q23efx10TDownf1WOn@ha
/* 801F5588 001F24C8  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F558C 001F24CC  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F5590 001F24D0  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5594 001F24D4  38 E0 00 39 */	li r7, 0x39
/* 801F5598 001F24D8  38 C0 00 00 */	li r6, 0
/* 801F559C 001F24DC  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F55A0 001F24E0  38 03 C7 2C */	addi r0, r3, __vt__Q23efx10TDownf1WOn@l
/* 801F55A4 001F24E4  38 61 00 48 */	addi r3, r1, 0x48
/* 801F55A8 001F24E8  38 80 00 00 */	li r4, 0
/* 801F55AC 001F24EC  B0 E1 00 4C */	sth r7, 0x4c(r1)
/* 801F55B0 001F24F0  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801F55B4 001F24F4  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801F55B8 001F24F8  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F55BC 001F24FC  48 1B 9C F9 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F55C0 001F2500  48 00 01 EC */	b .L_801F57AC
.L_801F55C4:
/* 801F55C4 001F2504  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F55C8 001F2508  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F55CC 001F250C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F55D0 001F2510  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F55D4 001F2514  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F55D8 001F2518  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F55DC 001F251C  3C 60 80 4C */	lis r3, __vt__Q23efx10TDownf2WOn@ha
/* 801F55E0 001F2520  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F55E4 001F2524  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F55E8 001F2528  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F55EC 001F252C  38 E0 00 3D */	li r7, 0x3d
/* 801F55F0 001F2530  38 C0 00 00 */	li r6, 0
/* 801F55F4 001F2534  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F55F8 001F2538  38 03 C7 18 */	addi r0, r3, __vt__Q23efx10TDownf2WOn@l
/* 801F55FC 001F253C  38 61 00 38 */	addi r3, r1, 0x38
/* 801F5600 001F2540  38 80 00 00 */	li r4, 0
/* 801F5604 001F2544  B0 E1 00 3C */	sth r7, 0x3c(r1)
/* 801F5608 001F2548  90 C1 00 40 */	stw r6, 0x40(r1)
/* 801F560C 001F254C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 801F5610 001F2550  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5614 001F2554  48 1B 9C A1 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5618 001F2558  48 00 01 94 */	b .L_801F57AC
.L_801F561C:
/* 801F561C 001F255C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5620 001F2560  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5624 001F2564  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5628 001F2568  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F562C 001F256C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5630 001F2570  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5634 001F2574  3C 60 80 4C */	lis r3, __vt__Q23efx10TDownf3WOn@ha
/* 801F5638 001F2578  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F563C 001F257C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5640 001F2580  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5644 001F2584  38 E0 00 41 */	li r7, 0x41
/* 801F5648 001F2588  38 C0 00 00 */	li r6, 0
/* 801F564C 001F258C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5650 001F2590  38 03 C7 04 */	addi r0, r3, __vt__Q23efx10TDownf3WOn@l
/* 801F5654 001F2594  38 61 00 28 */	addi r3, r1, 0x28
/* 801F5658 001F2598  38 80 00 00 */	li r4, 0
/* 801F565C 001F259C  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801F5660 001F25A0  90 C1 00 30 */	stw r6, 0x30(r1)
/* 801F5664 001F25A4  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801F5668 001F25A8  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F566C 001F25AC  48 1B 9C 49 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5670 001F25B0  48 00 01 3C */	b .L_801F57AC
.L_801F5674:
/* 801F5674 001F25B4  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F5678 001F25B8  2C 00 00 01 */	cmpwi r0, 1
/* 801F567C 001F25BC  41 82 00 78 */	beq .L_801F56F4
/* 801F5680 001F25C0  40 80 00 10 */	bge .L_801F5690
/* 801F5684 001F25C4  2C 00 00 00 */	cmpwi r0, 0
/* 801F5688 001F25C8  40 80 00 14 */	bge .L_801F569C
/* 801F568C 001F25CC  48 00 01 20 */	b .L_801F57AC
.L_801F5690:
/* 801F5690 001F25D0  2C 00 00 03 */	cmpwi r0, 3
/* 801F5694 001F25D4  40 80 01 18 */	bge .L_801F57AC
/* 801F5698 001F25D8  48 00 00 B4 */	b .L_801F574C
.L_801F569C:
/* 801F569C 001F25DC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F56A0 001F25E0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F56A4 001F25E4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F56A8 001F25E8  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F56AC 001F25EC  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F56B0 001F25F0  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F56B4 001F25F4  3C 60 80 4C */	lis r3, __vt__Q23efx9TDownf1On@ha
/* 801F56B8 001F25F8  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F56BC 001F25FC  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F56C0 001F2600  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F56C4 001F2604  38 E0 00 37 */	li r7, 0x37
/* 801F56C8 001F2608  38 C0 00 00 */	li r6, 0
/* 801F56CC 001F260C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F56D0 001F2610  38 03 C6 F0 */	addi r0, r3, __vt__Q23efx9TDownf1On@l
/* 801F56D4 001F2614  38 61 00 18 */	addi r3, r1, 0x18
/* 801F56D8 001F2618  38 80 00 00 */	li r4, 0
/* 801F56DC 001F261C  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 801F56E0 001F2620  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801F56E4 001F2624  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801F56E8 001F2628  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F56EC 001F262C  48 1B 9B C9 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F56F0 001F2630  48 00 00 BC */	b .L_801F57AC
.L_801F56F4:
/* 801F56F4 001F2634  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F56F8 001F2638  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F56FC 001F263C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5700 001F2640  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5704 001F2644  90 01 00 08 */	stw r0, 8(r1)
/* 801F5708 001F2648  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F570C 001F264C  3C 60 80 4C */	lis r3, __vt__Q23efx9TDownf2On@ha
/* 801F5710 001F2650  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5714 001F2654  90 01 00 08 */	stw r0, 8(r1)
/* 801F5718 001F2658  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F571C 001F265C  38 E0 00 3B */	li r7, 0x3b
/* 801F5720 001F2660  38 C0 00 00 */	li r6, 0
/* 801F5724 001F2664  90 01 00 08 */	stw r0, 8(r1)
/* 801F5728 001F2668  38 03 C6 DC */	addi r0, r3, __vt__Q23efx9TDownf2On@l
/* 801F572C 001F266C  38 61 00 08 */	addi r3, r1, 8
/* 801F5730 001F2670  38 80 00 00 */	li r4, 0
/* 801F5734 001F2674  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 801F5738 001F2678  90 C1 00 10 */	stw r6, 0x10(r1)
/* 801F573C 001F267C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801F5740 001F2680  90 01 00 08 */	stw r0, 8(r1)
/* 801F5744 001F2684  48 1B 9B 71 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5748 001F2688  48 00 00 64 */	b .L_801F57AC
.L_801F574C:
/* 801F574C 001F268C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801F5750 001F2690  38 C0 00 00 */	li r6, 0
/* 801F5754 001F2694  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801F5758 001F2698  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801F575C 001F269C  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5760 001F26A0  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801F5764 001F26A4  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx2@ha
/* 801F5768 001F26A8  3C 60 80 4C */	lis r3, __vt__Q23efx7TPbagOn@ha
/* 801F576C 001F26AC  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5770 001F26B0  38 04 6A 00 */	addi r0, r4, __vt__Q23efx11TSimpleMtx2@l
/* 801F5774 001F26B4  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5778 001F26B8  38 80 02 8C */	li r4, 0x28c
/* 801F577C 001F26BC  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5780 001F26C0  38 03 C6 C8 */	addi r0, r3, __vt__Q23efx7TPbagOn@l
/* 801F5784 001F26C4  38 E0 02 8D */	li r7, 0x28d
/* 801F5788 001F26C8  38 61 00 68 */	addi r3, r1, 0x68
/* 801F578C 001F26CC  B0 81 00 6C */	sth r4, 0x6c(r1)
/* 801F5790 001F26D0  38 80 00 00 */	li r4, 0
/* 801F5794 001F26D4  B0 E1 00 6E */	sth r7, 0x6e(r1)
/* 801F5798 001F26D8  90 C1 00 70 */	stw r6, 0x70(r1)
/* 801F579C 001F26DC  90 C1 00 74 */	stw r6, 0x74(r1)
/* 801F57A0 001F26E0  90 A1 00 78 */	stw r5, 0x78(r1)
/* 801F57A4 001F26E4  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F57A8 001F26E8  48 1B 9B F1 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
.L_801F57AC:
/* 801F57AC 001F26EC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801F57B0 001F26F0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801F57B4 001F26F4  7C 08 03 A6 */	mtlr r0
/* 801F57B8 001F26F8  38 21 00 90 */	addi r1, r1, 0x90
/* 801F57BC 001F26FC  4E 80 00 20 */	blr 

.global startDownMotion__Q34Game13ItemDownFloor4ItemFv
startDownMotion__Q34Game13ItemDownFloor4ItemFv:
/* 801F57C0 001F2700  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801F57C4 001F2704  7C 08 02 A6 */	mflr r0
/* 801F57C8 001F2708  90 01 00 94 */	stw r0, 0x94(r1)
/* 801F57CC 001F270C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 801F57D0 001F2710  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F57D4 001F2714  7F E5 FB 78 */	mr r5, r31
/* 801F57D8 001F2718  41 82 00 08 */	beq .L_801F57E0
/* 801F57DC 001F271C  38 A5 01 78 */	addi r5, r5, 0x178
.L_801F57E0:
/* 801F57E0 001F2720  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F57E4 001F2724  38 80 00 02 */	li r4, 2
/* 801F57E8 001F2728  48 23 34 A1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F57EC 001F272C  C0 02 B8 F8 */	lfs f0, lbl_80519C58@sda21(r2)
/* 801F57F0 001F2730  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801F57F4 001F2734  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F57F8 001F2738  28 00 00 02 */	cmplwi r0, 2
/* 801F57FC 001F273C  40 82 00 20 */	bne .L_801F581C
/* 801F5800 001F2740  7F E3 FB 78 */	mr r3, r31
/* 801F5804 001F2744  38 80 38 5A */	li r4, 0x385a
/* 801F5808 001F2748  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F580C 001F274C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801F5810 001F2750  7D 89 03 A6 */	mtctr r12
/* 801F5814 001F2754  4E 80 04 21 */	bctrl 
/* 801F5818 001F2758  48 00 00 1C */	b .L_801F5834
.L_801F581C:
/* 801F581C 001F275C  7F E3 FB 78 */	mr r3, r31
/* 801F5820 001F2760  38 80 38 03 */	li r4, 0x3803
/* 801F5824 001F2764  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F5828 001F2768  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801F582C 001F276C  7D 89 03 A6 */	mtctr r12
/* 801F5830 001F2770  4E 80 04 21 */	bctrl 
.L_801F5834:
/* 801F5834 001F2774  C0 3F 01 C4 */	lfs f1, 0x1c4(r31)
/* 801F5838 001F2778  38 81 00 58 */	addi r4, r1, 0x58
/* 801F583C 001F277C  C0 02 B8 FC */	lfs f0, lbl_80519C5C@sda21(r2)
/* 801F5840 001F2780  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801F5844 001F2784  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F5848 001F2788  C0 3F 01 C8 */	lfs f1, 0x1c8(r31)
/* 801F584C 001F278C  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801F5850 001F2790  EC 01 00 28 */	fsubs f0, f1, f0
/* 801F5854 001F2794  C0 3F 01 CC */	lfs f1, 0x1cc(r31)
/* 801F5858 001F2798  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801F585C 001F279C  C0 3F 01 D0 */	lfs f1, 0x1d0(r31)
/* 801F5860 001F27A0  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 801F5864 001F27A4  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801F5868 001F27A8  4B F6 E0 C1 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 801F586C 001F27AC  28 03 00 00 */	cmplwi r3, 0
/* 801F5870 001F27B0  41 82 01 34 */	beq .L_801F59A4
/* 801F5874 001F27B4  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F5878 001F27B8  2C 00 00 01 */	cmpwi r0, 1
/* 801F587C 001F27BC  41 82 00 78 */	beq .L_801F58F4
/* 801F5880 001F27C0  40 80 00 10 */	bge .L_801F5890
/* 801F5884 001F27C4  2C 00 00 00 */	cmpwi r0, 0
/* 801F5888 001F27C8  40 80 00 14 */	bge .L_801F589C
/* 801F588C 001F27CC  48 00 02 5C */	b .L_801F5AE8
.L_801F5890:
/* 801F5890 001F27D0  2C 00 00 03 */	cmpwi r0, 3
/* 801F5894 001F27D4  40 80 02 54 */	bge .L_801F5AE8
/* 801F5898 001F27D8  48 00 00 B4 */	b .L_801F594C
.L_801F589C:
/* 801F589C 001F27DC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F58A0 001F27E0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F58A4 001F27E4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F58A8 001F27E8  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F58AC 001F27EC  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F58B0 001F27F0  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F58B4 001F27F4  3C 60 80 4C */	lis r3, __vt__Q23efx14TDownf1WUpdown@ha
/* 801F58B8 001F27F8  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F58BC 001F27FC  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F58C0 001F2800  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F58C4 001F2804  38 E0 00 3A */	li r7, 0x3a
/* 801F58C8 001F2808  38 C0 00 00 */	li r6, 0
/* 801F58CC 001F280C  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F58D0 001F2810  38 03 C6 B4 */	addi r0, r3, __vt__Q23efx14TDownf1WUpdown@l
/* 801F58D4 001F2814  38 61 00 48 */	addi r3, r1, 0x48
/* 801F58D8 001F2818  38 80 00 00 */	li r4, 0
/* 801F58DC 001F281C  B0 E1 00 4C */	sth r7, 0x4c(r1)
/* 801F58E0 001F2820  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801F58E4 001F2824  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801F58E8 001F2828  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F58EC 001F282C  48 1B 99 C9 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F58F0 001F2830  48 00 01 F8 */	b .L_801F5AE8
.L_801F58F4:
/* 801F58F4 001F2834  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F58F8 001F2838  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F58FC 001F283C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5900 001F2840  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5904 001F2844  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5908 001F2848  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F590C 001F284C  3C 60 80 4C */	lis r3, __vt__Q23efx14TDownf2WUpdown@ha
/* 801F5910 001F2850  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5914 001F2854  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5918 001F2858  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F591C 001F285C  38 E0 00 3E */	li r7, 0x3e
/* 801F5920 001F2860  38 C0 00 00 */	li r6, 0
/* 801F5924 001F2864  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5928 001F2868  38 03 C6 A0 */	addi r0, r3, __vt__Q23efx14TDownf2WUpdown@l
/* 801F592C 001F286C  38 61 00 38 */	addi r3, r1, 0x38
/* 801F5930 001F2870  38 80 00 00 */	li r4, 0
/* 801F5934 001F2874  B0 E1 00 3C */	sth r7, 0x3c(r1)
/* 801F5938 001F2878  90 C1 00 40 */	stw r6, 0x40(r1)
/* 801F593C 001F287C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 801F5940 001F2880  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5944 001F2884  48 1B 99 71 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5948 001F2888  48 00 01 A0 */	b .L_801F5AE8
.L_801F594C:
/* 801F594C 001F288C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5950 001F2890  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5954 001F2894  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5958 001F2898  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F595C 001F289C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5960 001F28A0  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5964 001F28A4  3C 60 80 4C */	lis r3, __vt__Q23efx14TDownf3WUpdown@ha
/* 801F5968 001F28A8  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F596C 001F28AC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5970 001F28B0  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5974 001F28B4  38 E0 00 42 */	li r7, 0x42
/* 801F5978 001F28B8  38 C0 00 00 */	li r6, 0
/* 801F597C 001F28BC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5980 001F28C0  38 03 C6 8C */	addi r0, r3, __vt__Q23efx14TDownf3WUpdown@l
/* 801F5984 001F28C4  38 61 00 28 */	addi r3, r1, 0x28
/* 801F5988 001F28C8  38 80 00 00 */	li r4, 0
/* 801F598C 001F28CC  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801F5990 001F28D0  90 C1 00 30 */	stw r6, 0x30(r1)
/* 801F5994 001F28D4  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801F5998 001F28D8  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F599C 001F28DC  48 1B 99 19 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F59A0 001F28E0  48 00 01 48 */	b .L_801F5AE8
.L_801F59A4:
/* 801F59A4 001F28E4  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F59A8 001F28E8  2C 00 00 01 */	cmpwi r0, 1
/* 801F59AC 001F28EC  41 82 00 78 */	beq .L_801F5A24
/* 801F59B0 001F28F0  40 80 00 10 */	bge .L_801F59C0
/* 801F59B4 001F28F4  2C 00 00 00 */	cmpwi r0, 0
/* 801F59B8 001F28F8  40 80 00 14 */	bge .L_801F59CC
/* 801F59BC 001F28FC  48 00 01 2C */	b .L_801F5AE8
.L_801F59C0:
/* 801F59C0 001F2900  2C 00 00 03 */	cmpwi r0, 3
/* 801F59C4 001F2904  40 80 01 24 */	bge .L_801F5AE8
/* 801F59C8 001F2908  48 00 00 B4 */	b .L_801F5A7C
.L_801F59CC:
/* 801F59CC 001F290C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F59D0 001F2910  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F59D4 001F2914  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F59D8 001F2918  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F59DC 001F291C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F59E0 001F2920  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F59E4 001F2924  3C 60 80 4C */	lis r3, __vt__Q23efx13TDownf1Updown@ha
/* 801F59E8 001F2928  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F59EC 001F292C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F59F0 001F2930  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F59F4 001F2934  38 E0 00 38 */	li r7, 0x38
/* 801F59F8 001F2938  38 C0 00 00 */	li r6, 0
/* 801F59FC 001F293C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F5A00 001F2940  38 03 C6 78 */	addi r0, r3, __vt__Q23efx13TDownf1Updown@l
/* 801F5A04 001F2944  38 61 00 18 */	addi r3, r1, 0x18
/* 801F5A08 001F2948  38 80 00 00 */	li r4, 0
/* 801F5A0C 001F294C  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 801F5A10 001F2950  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801F5A14 001F2954  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801F5A18 001F2958  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F5A1C 001F295C  48 1B 98 99 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5A20 001F2960  48 00 00 C8 */	b .L_801F5AE8
.L_801F5A24:
/* 801F5A24 001F2964  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5A28 001F2968  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5A2C 001F296C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5A30 001F2970  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5A34 001F2974  90 01 00 08 */	stw r0, 8(r1)
/* 801F5A38 001F2978  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5A3C 001F297C  3C 60 80 4C */	lis r3, __vt__Q23efx13TDownf2Updown@ha
/* 801F5A40 001F2980  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5A44 001F2984  90 01 00 08 */	stw r0, 8(r1)
/* 801F5A48 001F2988  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5A4C 001F298C  38 E0 00 3C */	li r7, 0x3c
/* 801F5A50 001F2990  38 C0 00 00 */	li r6, 0
/* 801F5A54 001F2994  90 01 00 08 */	stw r0, 8(r1)
/* 801F5A58 001F2998  38 03 C6 64 */	addi r0, r3, __vt__Q23efx13TDownf2Updown@l
/* 801F5A5C 001F299C  38 61 00 08 */	addi r3, r1, 8
/* 801F5A60 001F29A0  38 80 00 00 */	li r4, 0
/* 801F5A64 001F29A4  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 801F5A68 001F29A8  90 C1 00 10 */	stw r6, 0x10(r1)
/* 801F5A6C 001F29AC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801F5A70 001F29B0  90 01 00 08 */	stw r0, 8(r1)
/* 801F5A74 001F29B4  48 1B 98 41 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5A78 001F29B8  48 00 00 70 */	b .L_801F5AE8
.L_801F5A7C:
/* 801F5A7C 001F29BC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801F5A80 001F29C0  38 C0 00 00 */	li r6, 0
/* 801F5A84 001F29C4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801F5A88 001F29C8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 801F5A8C 001F29CC  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5A90 001F29D0  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 801F5A94 001F29D4  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx3@ha
/* 801F5A98 001F29D8  3C 60 80 4C */	lis r3, __vt__Q23efx9TPbagDown@ha
/* 801F5A9C 001F29DC  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5AA0 001F29E0  38 04 69 EC */	addi r0, r4, __vt__Q23efx11TSimpleMtx3@l
/* 801F5AA4 001F29E4  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5AA8 001F29E8  38 80 02 89 */	li r4, 0x289
/* 801F5AAC 001F29EC  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5AB0 001F29F0  38 03 C6 50 */	addi r0, r3, __vt__Q23efx9TPbagDown@l
/* 801F5AB4 001F29F4  39 00 02 8A */	li r8, 0x28a
/* 801F5AB8 001F29F8  38 E0 02 8B */	li r7, 0x28b
/* 801F5ABC 001F29FC  B0 81 00 6C */	sth r4, 0x6c(r1)
/* 801F5AC0 001F2A00  38 61 00 68 */	addi r3, r1, 0x68
/* 801F5AC4 001F2A04  38 80 00 00 */	li r4, 0
/* 801F5AC8 001F2A08  B1 01 00 6E */	sth r8, 0x6e(r1)
/* 801F5ACC 001F2A0C  B0 E1 00 70 */	sth r7, 0x70(r1)
/* 801F5AD0 001F2A10  90 C1 00 74 */	stw r6, 0x74(r1)
/* 801F5AD4 001F2A14  90 C1 00 78 */	stw r6, 0x78(r1)
/* 801F5AD8 001F2A18  90 C1 00 7C */	stw r6, 0x7c(r1)
/* 801F5ADC 001F2A1C  90 A1 00 80 */	stw r5, 0x80(r1)
/* 801F5AE0 001F2A20  90 01 00 68 */	stw r0, 0x68(r1)
/* 801F5AE4 001F2A24  48 1B 99 D1 */	bl create__Q23efx11TSimpleMtx3FPQ23efx3Arg
.L_801F5AE8:
/* 801F5AE8 001F2A28  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801F5AEC 001F2A2C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801F5AF0 001F2A30  7C 08 03 A6 */	mtlr r0
/* 801F5AF4 001F2A34  38 21 00 90 */	addi r1, r1, 0x90
/* 801F5AF8 001F2A38  4E 80 00 20 */	blr 

.global startUpMotion__Q34Game13ItemDownFloor4ItemFv
startUpMotion__Q34Game13ItemDownFloor4ItemFv:
/* 801F5AFC 001F2A3C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801F5B00 001F2A40  7C 08 02 A6 */	mflr r0
/* 801F5B04 001F2A44  90 01 00 84 */	stw r0, 0x84(r1)
/* 801F5B08 001F2A48  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801F5B0C 001F2A4C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F5B10 001F2A50  7F E5 FB 78 */	mr r5, r31
/* 801F5B14 001F2A54  41 82 00 08 */	beq .L_801F5B1C
/* 801F5B18 001F2A58  38 A5 01 78 */	addi r5, r5, 0x178
.L_801F5B1C:
/* 801F5B1C 001F2A5C  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F5B20 001F2A60  38 80 00 03 */	li r4, 3
/* 801F5B24 001F2A64  48 23 31 65 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F5B28 001F2A68  C0 22 B8 F8 */	lfs f1, lbl_80519C58@sda21(r2)
/* 801F5B2C 001F2A6C  38 81 00 68 */	addi r4, r1, 0x68
/* 801F5B30 001F2A70  C0 02 B8 FC */	lfs f0, lbl_80519C5C@sda21(r2)
/* 801F5B34 001F2A74  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 801F5B38 001F2A78  C0 3F 01 C4 */	lfs f1, 0x1c4(r31)
/* 801F5B3C 001F2A7C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F5B40 001F2A80  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 801F5B44 001F2A84  C0 3F 01 C8 */	lfs f1, 0x1c8(r31)
/* 801F5B48 001F2A88  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 801F5B4C 001F2A8C  EC 01 00 28 */	fsubs f0, f1, f0
/* 801F5B50 001F2A90  C0 3F 01 CC */	lfs f1, 0x1cc(r31)
/* 801F5B54 001F2A94  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 801F5B58 001F2A98  C0 3F 01 D0 */	lfs f1, 0x1d0(r31)
/* 801F5B5C 001F2A9C  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 801F5B60 001F2AA0  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 801F5B64 001F2AA4  4B F6 DD C5 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 801F5B68 001F2AA8  28 03 00 00 */	cmplwi r3, 0
/* 801F5B6C 001F2AAC  41 82 01 34 */	beq .L_801F5CA0
/* 801F5B70 001F2AB0  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F5B74 001F2AB4  2C 00 00 01 */	cmpwi r0, 1
/* 801F5B78 001F2AB8  41 82 00 78 */	beq .L_801F5BF0
/* 801F5B7C 001F2ABC  40 80 00 10 */	bge .L_801F5B8C
/* 801F5B80 001F2AC0  2C 00 00 00 */	cmpwi r0, 0
/* 801F5B84 001F2AC4  40 80 00 14 */	bge .L_801F5B98
/* 801F5B88 001F2AC8  48 00 02 44 */	b .L_801F5DCC
.L_801F5B8C:
/* 801F5B8C 001F2ACC  2C 00 00 03 */	cmpwi r0, 3
/* 801F5B90 001F2AD0  40 80 02 3C */	bge .L_801F5DCC
/* 801F5B94 001F2AD4  48 00 00 B4 */	b .L_801F5C48
.L_801F5B98:
/* 801F5B98 001F2AD8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5B9C 001F2ADC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5BA0 001F2AE0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5BA4 001F2AE4  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5BA8 001F2AE8  90 01 00 58 */	stw r0, 0x58(r1)
/* 801F5BAC 001F2AEC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5BB0 001F2AF0  3C 60 80 4C */	lis r3, __vt__Q23efx14TDownf1WUpdown@ha
/* 801F5BB4 001F2AF4  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5BB8 001F2AF8  90 01 00 58 */	stw r0, 0x58(r1)
/* 801F5BBC 001F2AFC  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5BC0 001F2B00  38 E0 00 3A */	li r7, 0x3a
/* 801F5BC4 001F2B04  38 C0 00 00 */	li r6, 0
/* 801F5BC8 001F2B08  90 01 00 58 */	stw r0, 0x58(r1)
/* 801F5BCC 001F2B0C  38 03 C6 B4 */	addi r0, r3, __vt__Q23efx14TDownf1WUpdown@l
/* 801F5BD0 001F2B10  38 61 00 58 */	addi r3, r1, 0x58
/* 801F5BD4 001F2B14  38 80 00 00 */	li r4, 0
/* 801F5BD8 001F2B18  B0 E1 00 5C */	sth r7, 0x5c(r1)
/* 801F5BDC 001F2B1C  90 C1 00 60 */	stw r6, 0x60(r1)
/* 801F5BE0 001F2B20  90 A1 00 64 */	stw r5, 0x64(r1)
/* 801F5BE4 001F2B24  90 01 00 58 */	stw r0, 0x58(r1)
/* 801F5BE8 001F2B28  48 1B 96 CD */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5BEC 001F2B2C  48 00 01 E0 */	b .L_801F5DCC
.L_801F5BF0:
/* 801F5BF0 001F2B30  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5BF4 001F2B34  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5BF8 001F2B38  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5BFC 001F2B3C  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5C00 001F2B40  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F5C04 001F2B44  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5C08 001F2B48  3C 60 80 4C */	lis r3, __vt__Q23efx14TDownf2WUpdown@ha
/* 801F5C0C 001F2B4C  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5C10 001F2B50  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F5C14 001F2B54  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5C18 001F2B58  38 E0 00 3E */	li r7, 0x3e
/* 801F5C1C 001F2B5C  38 C0 00 00 */	li r6, 0
/* 801F5C20 001F2B60  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F5C24 001F2B64  38 03 C6 A0 */	addi r0, r3, __vt__Q23efx14TDownf2WUpdown@l
/* 801F5C28 001F2B68  38 61 00 48 */	addi r3, r1, 0x48
/* 801F5C2C 001F2B6C  38 80 00 00 */	li r4, 0
/* 801F5C30 001F2B70  B0 E1 00 4C */	sth r7, 0x4c(r1)
/* 801F5C34 001F2B74  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801F5C38 001F2B78  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801F5C3C 001F2B7C  90 01 00 48 */	stw r0, 0x48(r1)
/* 801F5C40 001F2B80  48 1B 96 75 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5C44 001F2B84  48 00 01 88 */	b .L_801F5DCC
.L_801F5C48:
/* 801F5C48 001F2B88  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5C4C 001F2B8C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5C50 001F2B90  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5C54 001F2B94  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5C58 001F2B98  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5C5C 001F2B9C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5C60 001F2BA0  3C 60 80 4C */	lis r3, __vt__Q23efx14TDownf3WUpdown@ha
/* 801F5C64 001F2BA4  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5C68 001F2BA8  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5C6C 001F2BAC  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5C70 001F2BB0  38 E0 00 42 */	li r7, 0x42
/* 801F5C74 001F2BB4  38 C0 00 00 */	li r6, 0
/* 801F5C78 001F2BB8  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5C7C 001F2BBC  38 03 C6 8C */	addi r0, r3, __vt__Q23efx14TDownf3WUpdown@l
/* 801F5C80 001F2BC0  38 61 00 38 */	addi r3, r1, 0x38
/* 801F5C84 001F2BC4  38 80 00 00 */	li r4, 0
/* 801F5C88 001F2BC8  B0 E1 00 3C */	sth r7, 0x3c(r1)
/* 801F5C8C 001F2BCC  90 C1 00 40 */	stw r6, 0x40(r1)
/* 801F5C90 001F2BD0  90 A1 00 44 */	stw r5, 0x44(r1)
/* 801F5C94 001F2BD4  90 01 00 38 */	stw r0, 0x38(r1)
/* 801F5C98 001F2BD8  48 1B 96 1D */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5C9C 001F2BDC  48 00 01 30 */	b .L_801F5DCC
.L_801F5CA0:
/* 801F5CA0 001F2BE0  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F5CA4 001F2BE4  2C 00 00 01 */	cmpwi r0, 1
/* 801F5CA8 001F2BE8  41 82 00 78 */	beq .L_801F5D20
/* 801F5CAC 001F2BEC  40 80 00 10 */	bge .L_801F5CBC
/* 801F5CB0 001F2BF0  2C 00 00 00 */	cmpwi r0, 0
/* 801F5CB4 001F2BF4  40 80 00 14 */	bge .L_801F5CC8
/* 801F5CB8 001F2BF8  48 00 01 14 */	b .L_801F5DCC
.L_801F5CBC:
/* 801F5CBC 001F2BFC  2C 00 00 03 */	cmpwi r0, 3
/* 801F5CC0 001F2C00  40 80 01 0C */	bge .L_801F5DCC
/* 801F5CC4 001F2C04  48 00 00 B4 */	b .L_801F5D78
.L_801F5CC8:
/* 801F5CC8 001F2C08  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5CCC 001F2C0C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5CD0 001F2C10  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5CD4 001F2C14  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5CD8 001F2C18  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5CDC 001F2C1C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5CE0 001F2C20  3C 60 80 4C */	lis r3, __vt__Q23efx13TDownf1Updown@ha
/* 801F5CE4 001F2C24  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5CE8 001F2C28  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5CEC 001F2C2C  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5CF0 001F2C30  38 E0 00 38 */	li r7, 0x38
/* 801F5CF4 001F2C34  38 C0 00 00 */	li r6, 0
/* 801F5CF8 001F2C38  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5CFC 001F2C3C  38 03 C6 78 */	addi r0, r3, __vt__Q23efx13TDownf1Updown@l
/* 801F5D00 001F2C40  38 61 00 28 */	addi r3, r1, 0x28
/* 801F5D04 001F2C44  38 80 00 00 */	li r4, 0
/* 801F5D08 001F2C48  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801F5D0C 001F2C4C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 801F5D10 001F2C50  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801F5D14 001F2C54  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F5D18 001F2C58  48 1B 95 9D */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5D1C 001F2C5C  48 00 00 B0 */	b .L_801F5DCC
.L_801F5D20:
/* 801F5D20 001F2C60  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5D24 001F2C64  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5D28 001F2C68  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5D2C 001F2C6C  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5D30 001F2C70  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F5D34 001F2C74  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5D38 001F2C78  3C 60 80 4C */	lis r3, __vt__Q23efx13TDownf2Updown@ha
/* 801F5D3C 001F2C7C  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5D40 001F2C80  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F5D44 001F2C84  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5D48 001F2C88  38 E0 00 3C */	li r7, 0x3c
/* 801F5D4C 001F2C8C  38 C0 00 00 */	li r6, 0
/* 801F5D50 001F2C90  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F5D54 001F2C94  38 03 C6 64 */	addi r0, r3, __vt__Q23efx13TDownf2Updown@l
/* 801F5D58 001F2C98  38 61 00 18 */	addi r3, r1, 0x18
/* 801F5D5C 001F2C9C  38 80 00 00 */	li r4, 0
/* 801F5D60 001F2CA0  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 801F5D64 001F2CA4  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801F5D68 001F2CA8  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801F5D6C 001F2CAC  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F5D70 001F2CB0  48 1B 95 45 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801F5D74 001F2CB4  48 00 00 58 */	b .L_801F5DCC
.L_801F5D78:
/* 801F5D78 001F2CB8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F5D7C 001F2CBC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801F5D80 001F2CC0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F5D84 001F2CC4  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801F5D88 001F2CC8  90 01 00 08 */	stw r0, 8(r1)
/* 801F5D8C 001F2CCC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801F5D90 001F2CD0  3C 60 80 4C */	lis r3, __vt__Q23efx13TDownf3Updown@ha
/* 801F5D94 001F2CD4  38 BF 01 38 */	addi r5, r31, 0x138
/* 801F5D98 001F2CD8  90 01 00 08 */	stw r0, 8(r1)
/* 801F5D9C 001F2CDC  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801F5DA0 001F2CE0  38 E0 00 40 */	li r7, 0x40
/* 801F5DA4 001F2CE4  38 C0 00 00 */	li r6, 0
/* 801F5DA8 001F2CE8  90 01 00 08 */	stw r0, 8(r1)
/* 801F5DAC 001F2CEC  38 03 C6 3C */	addi r0, r3, __vt__Q23efx13TDownf3Updown@l
/* 801F5DB0 001F2CF0  38 61 00 08 */	addi r3, r1, 8
/* 801F5DB4 001F2CF4  38 80 00 00 */	li r4, 0
/* 801F5DB8 001F2CF8  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 801F5DBC 001F2CFC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 801F5DC0 001F2D00  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801F5DC4 001F2D04  90 01 00 08 */	stw r0, 8(r1)
/* 801F5DC8 001F2D08  48 1B 94 ED */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
.L_801F5DCC:
/* 801F5DCC 001F2D0C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801F5DD0 001F2D10  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801F5DD4 001F2D14  7C 08 03 A6 */	mtlr r0
/* 801F5DD8 001F2D18  38 21 00 80 */	addi r1, r1, 0x80
/* 801F5DDC 001F2D1C  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game13ItemDownFloor4ItemFv
changeMaterial__Q34Game13ItemDownFloor4ItemFv:
/* 801F5DE0 001F2D20  4E 80 00 20 */	blr 

.global doSave__Q34Game13ItemDownFloor4ItemFR6Stream
doSave__Q34Game13ItemDownFloor4ItemFR6Stream:
/* 801F5DE4 001F2D24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F5DE8 001F2D28  7C 08 02 A6 */	mflr r0
/* 801F5DEC 001F2D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5DF0 001F2D30  88 03 02 28 */	lbz r0, 0x228(r3)
/* 801F5DF4 001F2D34  28 00 00 00 */	cmplwi r0, 0
/* 801F5DF8 001F2D38  40 82 00 14 */	bne .L_801F5E0C
/* 801F5DFC 001F2D3C  88 03 01 FC */	lbz r0, 0x1fc(r3)
/* 801F5E00 001F2D40  7C 83 23 78 */	mr r3, r4
/* 801F5E04 001F2D44  7C 04 03 78 */	mr r4, r0
/* 801F5E08 001F2D48  48 21 F8 69 */	bl writeByte__6StreamFUc
.L_801F5E0C:
/* 801F5E0C 001F2D4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5E10 001F2D50  7C 08 03 A6 */	mtlr r0
/* 801F5E14 001F2D54  38 21 00 10 */	addi r1, r1, 0x10
/* 801F5E18 001F2D58  4E 80 00 20 */	blr 

.global doLoad__Q34Game13ItemDownFloor4ItemFR6Stream
doLoad__Q34Game13ItemDownFloor4ItemFR6Stream:
/* 801F5E1C 001F2D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F5E20 001F2D60  7C 08 02 A6 */	mflr r0
/* 801F5E24 001F2D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5E28 001F2D68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F5E2C 001F2D6C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F5E30 001F2D70  7C 7E 1B 78 */	mr r30, r3
/* 801F5E34 001F2D74  88 03 02 28 */	lbz r0, 0x228(r3)
/* 801F5E38 001F2D78  28 00 00 00 */	cmplwi r0, 0
/* 801F5E3C 001F2D7C  40 82 00 C0 */	bne .L_801F5EFC
/* 801F5E40 001F2D80  7C 83 23 78 */	mr r3, r4
/* 801F5E44 001F2D84  48 21 E6 59 */	bl readByte__6StreamFv
/* 801F5E48 001F2D88  54 7F 06 3E */	clrlwi r31, r3, 0x18
/* 801F5E4C 001F2D8C  7F C3 F3 78 */	mr r3, r30
/* 801F5E50 001F2D90  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F5E54 001F2D94  38 80 00 01 */	li r4, 1
/* 801F5E58 001F2D98  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801F5E5C 001F2D9C  7D 89 03 A6 */	mtctr r12
/* 801F5E60 001F2DA0  4E 80 04 21 */	bctrl 
/* 801F5E64 001F2DA4  28 1F 00 00 */	cmplwi r31, 0
/* 801F5E68 001F2DA8  41 82 00 94 */	beq .L_801F5EFC
/* 801F5E6C 001F2DAC  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801F5E70 001F2DB0  38 80 00 02 */	li r4, 2
/* 801F5E74 001F2DB4  38 A0 00 00 */	li r5, 0
/* 801F5E78 001F2DB8  48 23 2E 11 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F5E7C 001F2DBC  C0 02 B8 F0 */	lfs f0, lbl_80519C50@sda21(r2)
/* 801F5E80 001F2DC0  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801F5E84 001F2DC4  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801F5E88 001F2DC8  48 23 30 79 */	bl setLastFrame__Q28SysShape8AnimatorFv
/* 801F5E8C 001F2DCC  80 7E 01 E4 */	lwz r3, 0x1e4(r30)
/* 801F5E90 001F2DD0  38 80 00 00 */	li r4, 0
/* 801F5E94 001F2DD4  4B FC ED 41 */	bl setCollision__Q24Game12PlatInstanceFb
/* 801F5E98 001F2DD8  38 00 00 01 */	li r0, 1
/* 801F5E9C 001F2DDC  7F C4 F3 78 */	mr r4, r30
/* 801F5EA0 001F2DE0  98 1E 01 FC */	stb r0, 0x1fc(r30)
/* 801F5EA4 001F2DE4  38 A0 00 04 */	li r5, 4
/* 801F5EA8 001F2DE8  38 C0 00 00 */	li r6, 0
/* 801F5EAC 001F2DEC  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801F5EB0 001F2DF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5EB4 001F2DF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F5EB8 001F2DF8  7D 89 03 A6 */	mtctr r12
/* 801F5EBC 001F2DFC  4E 80 04 21 */	bctrl 
/* 801F5EC0 001F2E00  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 801F5EC4 001F2E04  28 03 00 00 */	cmplwi r3, 0
/* 801F5EC8 001F2E08  41 82 00 14 */	beq .L_801F5EDC
/* 801F5ECC 001F2E0C  38 63 00 48 */	addi r3, r3, 0x48
/* 801F5ED0 001F2E10  4B F2 51 01 */	bl disappear__9CarryInfoFv
/* 801F5ED4 001F2E14  38 00 00 00 */	li r0, 0
/* 801F5ED8 001F2E18  90 1E 01 F8 */	stw r0, 0x1f8(r30)
.L_801F5EDC:
/* 801F5EDC 001F2E1C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801F5EE0 001F2E20  80 9E 01 E4 */	lwz r4, 0x1e4(r30)
/* 801F5EE4 001F2E24  4B FC FC B5 */	bl delInstance__Q24Game7PlatMgrFPQ24Game12PlatInstance
/* 801F5EE8 001F2E28  80 7E 02 14 */	lwz r3, 0x214(r30)
/* 801F5EEC 001F2E2C  28 03 00 00 */	cmplwi r3, 0
/* 801F5EF0 001F2E30  41 82 00 0C */	beq .L_801F5EFC
/* 801F5EF4 001F2E34  38 80 00 01 */	li r4, 1
/* 801F5EF8 001F2E38  4B F7 C9 7D */	bl setOpen__Q24Game8WayPointFb
.L_801F5EFC:
/* 801F5EFC 001F2E3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5F00 001F2E40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F5F04 001F2E44  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F5F08 001F2E48  7C 08 03 A6 */	mtlr r0
/* 801F5F0C 001F2E4C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F5F10 001F2E50  4E 80 00 20 */	blr 

.global doAI__Q34Game13ItemDownFloor4ItemFv
doAI__Q34Game13ItemDownFloor4ItemFv:
/* 801F5F14 001F2E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F5F18 001F2E58  7C 08 02 A6 */	mflr r0
/* 801F5F1C 001F2E5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5F20 001F2E60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F5F24 001F2E64  7C 7F 1B 78 */	mr r31, r3
/* 801F5F28 001F2E68  88 03 02 28 */	lbz r0, 0x228(r3)
/* 801F5F2C 001F2E6C  28 00 00 00 */	cmplwi r0, 0
/* 801F5F30 001F2E70  40 82 00 64 */	bne .L_801F5F94
/* 801F5F34 001F2E74  38 7F 02 08 */	addi r3, r31, 0x208
/* 801F5F38 001F2E78  48 03 8D 09 */	bl update__Q24Game11TSoundEventFv
/* 801F5F3C 001F2E7C  2C 03 00 02 */	cmpwi r3, 2
/* 801F5F40 001F2E80  41 82 00 08 */	beq .L_801F5F48
/* 801F5F44 001F2E84  48 00 00 50 */	b .L_801F5F94
.L_801F5F48:
/* 801F5F48 001F2E88  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F5F4C 001F2E8C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F5F50 001F2E90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F5F54 001F2E94  7D 89 03 A6 */	mtctr r12
/* 801F5F58 001F2E98  4E 80 04 21 */	bctrl 
/* 801F5F5C 001F2E9C  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F5F60 001F2EA0  41 82 00 20 */	beq .L_801F5F80
/* 801F5F64 001F2EA4  3C 60 80 48 */	lis r3, lbl_8048181C@ha
/* 801F5F68 001F2EA8  3C A0 80 48 */	lis r5, lbl_80481874@ha
/* 801F5F6C 001F2EAC  38 63 18 1C */	addi r3, r3, lbl_8048181C@l
/* 801F5F70 001F2EB0  38 80 02 5F */	li r4, 0x25f
/* 801F5F74 001F2EB4  38 A5 18 74 */	addi r5, r5, lbl_80481874@l
/* 801F5F78 001F2EB8  4C C6 31 82 */	crclr 6
/* 801F5F7C 001F2EBC  4B E3 46 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F5F80:
/* 801F5F80 001F2EC0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F5F84 001F2EC4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F5F88 001F2EC8  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 801F5F8C 001F2ECC  7D 89 03 A6 */	mtctr r12
/* 801F5F90 001F2ED0  4E 80 04 21 */	bctrl 
.L_801F5F94:
/* 801F5F94 001F2ED4  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 801F5F98 001F2ED8  28 03 00 00 */	cmplwi r3, 0
/* 801F5F9C 001F2EDC  41 82 00 20 */	beq .L_801F5FBC
/* 801F5FA0 001F2EE0  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801F5FA4 001F2EE4  2C 00 00 00 */	cmpwi r0, 0
/* 801F5FA8 001F2EE8  40 82 00 14 */	bne .L_801F5FBC
/* 801F5FAC 001F2EEC  38 63 00 48 */	addi r3, r3, 0x48
/* 801F5FB0 001F2EF0  4B F2 50 21 */	bl disappear__9CarryInfoFv
/* 801F5FB4 001F2EF4  38 00 00 00 */	li r0, 0
/* 801F5FB8 001F2EF8  90 1F 01 F8 */	stw r0, 0x1f8(r31)
.L_801F5FBC:
/* 801F5FBC 001F2EFC  80 7F 01 DC */	lwz r3, 0x1dc(r31)
/* 801F5FC0 001F2F00  80 03 00 04 */	lwz r0, 4(r3)
/* 801F5FC4 001F2F04  2C 00 00 00 */	cmpwi r0, 0
/* 801F5FC8 001F2F08  40 82 00 0C */	bne .L_801F5FD4
/* 801F5FCC 001F2F0C  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801F5FD0 001F2F10  90 1F 01 F0 */	stw r0, 0x1f0(r31)
.L_801F5FD4:
/* 801F5FD4 001F2F14  38 00 00 00 */	li r0, 0
/* 801F5FD8 001F2F18  7F E4 FB 78 */	mr r4, r31
/* 801F5FDC 001F2F1C  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801F5FE0 001F2F20  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 801F5FE4 001F2F24  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F5FE8 001F2F28  81 83 00 00 */	lwz r12, 0(r3)
/* 801F5FEC 001F2F2C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F5FF0 001F2F30  7D 89 03 A6 */	mtctr r12
/* 801F5FF4 001F2F34  4E 80 04 21 */	bctrl 
/* 801F5FF8 001F2F38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5FFC 001F2F3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F6000 001F2F40  7C 08 03 A6 */	mtlr r0
/* 801F6004 001F2F44  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6008 001F2F48  4E 80 00 20 */	blr 

.global platCallback__Q34Game13ItemDownFloor4ItemFRQ24Game9PlatEvent
platCallback__Q34Game13ItemDownFloor4ItemFRQ24Game9PlatEvent:
/* 801F600C 001F2F4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F6010 001F2F50  7C 08 02 A6 */	mflr r0
/* 801F6014 001F2F54  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F6018 001F2F58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F601C 001F2F5C  7C 7F 1B 78 */	mr r31, r3
/* 801F6020 001F2F60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F6024 001F2F64  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F6028 001F2F68  7C 9D 23 78 */	mr r29, r4
/* 801F602C 001F2F6C  88 03 02 28 */	lbz r0, 0x228(r3)
/* 801F6030 001F2F70  28 00 00 00 */	cmplwi r0, 0
/* 801F6034 001F2F74  40 82 00 10 */	bne .L_801F6044
/* 801F6038 001F2F78  88 1F 01 FC */	lbz r0, 0x1fc(r31)
/* 801F603C 001F2F7C  28 00 00 00 */	cmplwi r0, 0
/* 801F6040 001F2F80  40 82 01 EC */	bne .L_801F622C
.L_801F6044:
/* 801F6044 001F2F84  83 DD 00 10 */	lwz r30, 0x10(r29)
/* 801F6048 001F2F88  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 801F604C 001F2F8C  7C 1E 00 40 */	cmplw r30, r0
/* 801F6050 001F2F90  41 82 00 90 */	beq .L_801F60E0
/* 801F6054 001F2F94  7F C3 F3 78 */	mr r3, r30
/* 801F6058 001F2F98  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F605C 001F2F9C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F6060 001F2FA0  7D 89 03 A6 */	mtctr r12
/* 801F6064 001F2FA4  4E 80 04 21 */	bctrl 
/* 801F6068 001F2FA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F606C 001F2FAC  41 82 00 30 */	beq .L_801F609C
/* 801F6070 001F2FB0  7F C3 F3 78 */	mr r3, r30
/* 801F6074 001F2FB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F6078 001F2FB8  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 801F607C 001F2FBC  7D 89 03 A6 */	mtctr r12
/* 801F6080 001F2FC0  4E 80 04 21 */	bctrl 
/* 801F6084 001F2FC4  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801F6088 001F2FC8  7C 00 1A 14 */	add r0, r0, r3
/* 801F608C 001F2FCC  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801F6090 001F2FD0  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 801F6094 001F2FD4  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 801F6098 001F2FD8  48 00 00 48 */	b .L_801F60E0
.L_801F609C:
/* 801F609C 001F2FDC  7F C3 F3 78 */	mr r3, r30
/* 801F60A0 001F2FE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F60A4 001F2FE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F60A8 001F2FE8  7D 89 03 A6 */	mtctr r12
/* 801F60AC 001F2FEC  4E 80 04 21 */	bctrl 
/* 801F60B0 001F2FF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F60B4 001F2FF4  41 82 00 2C */	beq .L_801F60E0
/* 801F60B8 001F2FF8  7F C3 F3 78 */	mr r3, r30
/* 801F60BC 001F2FFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F60C0 001F3000  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 801F60C4 001F3004  7D 89 03 A6 */	mtctr r12
/* 801F60C8 001F3008  4E 80 04 21 */	bctrl 
/* 801F60CC 001F300C  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801F60D0 001F3010  7C 00 1A 14 */	add r0, r0, r3
/* 801F60D4 001F3014  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801F60D8 001F3018  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 801F60DC 001F301C  90 1F 01 F4 */	stw r0, 0x1f4(r31)
.L_801F60E0:
/* 801F60E0 001F3020  88 1F 02 28 */	lbz r0, 0x228(r31)
/* 801F60E4 001F3024  28 00 00 00 */	cmplwi r0, 0
/* 801F60E8 001F3028  40 82 00 D8 */	bne .L_801F61C0
/* 801F60EC 001F302C  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801F60F0 001F3030  2C 00 00 00 */	cmpwi r0, 0
/* 801F60F4 001F3034  40 81 00 CC */	ble .L_801F61C0
/* 801F60F8 001F3038  38 7F 02 08 */	addi r3, r31, 0x208
/* 801F60FC 001F303C  48 03 8A ED */	bl event__Q24Game11TSoundEventFv
/* 801F6100 001F3040  2C 03 00 02 */	cmpwi r3, 2
/* 801F6104 001F3044  41 82 00 BC */	beq .L_801F61C0
/* 801F6108 001F3048  40 80 00 10 */	bge .L_801F6118
/* 801F610C 001F304C  2C 03 00 01 */	cmpwi r3, 1
/* 801F6110 001F3050  40 80 00 14 */	bge .L_801F6124
/* 801F6114 001F3054  48 00 00 AC */	b .L_801F61C0
.L_801F6118:
/* 801F6118 001F3058  2C 03 00 04 */	cmpwi r3, 4
/* 801F611C 001F305C  40 80 00 A4 */	bge .L_801F61C0
/* 801F6120 001F3060  48 00 00 54 */	b .L_801F6174
.L_801F6124:
/* 801F6124 001F3064  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F6128 001F3068  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F612C 001F306C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6130 001F3070  7D 89 03 A6 */	mtctr r12
/* 801F6134 001F3074  4E 80 04 21 */	bctrl 
/* 801F6138 001F3078  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F613C 001F307C  41 82 00 20 */	beq .L_801F615C
/* 801F6140 001F3080  3C 60 80 48 */	lis r3, lbl_8048181C@ha
/* 801F6144 001F3084  3C A0 80 48 */	lis r5, lbl_80481874@ha
/* 801F6148 001F3088  38 63 18 1C */	addi r3, r3, lbl_8048181C@l
/* 801F614C 001F308C  38 80 02 DB */	li r4, 0x2db
/* 801F6150 001F3090  38 A5 18 74 */	addi r5, r5, lbl_80481874@l
/* 801F6154 001F3094  4C C6 31 82 */	crclr 6
/* 801F6158 001F3098  4B E3 44 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F615C:
/* 801F615C 001F309C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F6160 001F30A0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F6164 001F30A4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801F6168 001F30A8  7D 89 03 A6 */	mtctr r12
/* 801F616C 001F30AC  4E 80 04 21 */	bctrl 
/* 801F6170 001F30B0  48 00 00 50 */	b .L_801F61C0
.L_801F6174:
/* 801F6174 001F30B4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F6178 001F30B8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F617C 001F30BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6180 001F30C0  7D 89 03 A6 */	mtctr r12
/* 801F6184 001F30C4  4E 80 04 21 */	bctrl 
/* 801F6188 001F30C8  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F618C 001F30CC  41 82 00 20 */	beq .L_801F61AC
/* 801F6190 001F30D0  3C 60 80 48 */	lis r3, lbl_8048181C@ha
/* 801F6194 001F30D4  3C A0 80 48 */	lis r5, lbl_80481874@ha
/* 801F6198 001F30D8  38 63 18 1C */	addi r3, r3, lbl_8048181C@l
/* 801F619C 001F30DC  38 80 02 E2 */	li r4, 0x2e2
/* 801F61A0 001F30E0  38 A5 18 74 */	addi r5, r5, lbl_80481874@l
/* 801F61A4 001F30E4  4C C6 31 82 */	crclr 6
/* 801F61A8 001F30E8  4B E3 44 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F61AC:
/* 801F61AC 001F30EC  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801F61B0 001F30F0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F61B4 001F30F4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801F61B8 001F30F8  7D 89 03 A6 */	mtctr r12
/* 801F61BC 001F30FC  4E 80 04 21 */	bctrl 
.L_801F61C0:
/* 801F61C0 001F3100  80 1F 01 F8 */	lwz r0, 0x1f8(r31)
/* 801F61C4 001F3104  28 00 00 00 */	cmplwi r0, 0
/* 801F61C8 001F3108  40 82 00 20 */	bne .L_801F61E8
/* 801F61CC 001F310C  28 1F 00 00 */	cmplwi r31, 0
/* 801F61D0 001F3110  7F E4 FB 78 */	mr r4, r31
/* 801F61D4 001F3114  41 82 00 08 */	beq .L_801F61DC
/* 801F61D8 001F3118  38 9F 01 E0 */	addi r4, r31, 0x1e0
.L_801F61DC:
/* 801F61DC 001F311C  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 801F61E0 001F3120  4B F2 5F F9 */	bl appear__12CarryInfoMgrFP14CarryInfoOwner
/* 801F61E4 001F3124  90 7F 01 F8 */	stw r3, 0x1f8(r31)
.L_801F61E8:
/* 801F61E8 001F3128  80 7F 01 DC */	lwz r3, 0x1dc(r31)
/* 801F61EC 001F312C  28 03 00 00 */	cmplwi r3, 0
/* 801F61F0 001F3130  41 82 00 3C */	beq .L_801F622C
/* 801F61F4 001F3134  80 03 00 04 */	lwz r0, 4(r3)
/* 801F61F8 001F3138  2C 00 00 00 */	cmpwi r0, 0
/* 801F61FC 001F313C  40 82 00 30 */	bne .L_801F622C
/* 801F6200 001F3140  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 801F6204 001F3144  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 801F6208 001F3148  7C 03 00 00 */	cmpw r3, r0
/* 801F620C 001F314C  40 81 00 20 */	ble .L_801F622C
/* 801F6210 001F3150  90 7F 01 F0 */	stw r3, 0x1f0(r31)
/* 801F6214 001F3154  7F E4 FB 78 */	mr r4, r31
/* 801F6218 001F3158  80 7F 01 DC */	lwz r3, 0x1dc(r31)
/* 801F621C 001F315C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6220 001F3160  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801F6224 001F3164  7D 89 03 A6 */	mtctr r12
/* 801F6228 001F3168  4E 80 04 21 */	bctrl 
.L_801F622C:
/* 801F622C 001F316C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F6230 001F3170  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F6234 001F3174  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F6238 001F3178  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F623C 001F317C  7C 08 03 A6 */	mtlr r0
/* 801F6240 001F3180  38 21 00 20 */	addi r1, r1, 0x20
/* 801F6244 001F3184  4E 80 00 20 */	blr 

.global onPlat__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4Item
onPlat__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4Item:
/* 801F6248 001F3188  4E 80 00 20 */	blr 

.global getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam
getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam:
/* 801F624C 001F318C  38 C0 00 00 */	li r6, 0
/* 801F6250 001F3190  C0 22 B9 00 */	lfs f1, lbl_80519C60@sda21(r2)
/* 801F6254 001F3194  90 C4 00 00 */	stw r6, 0(r4)
/* 801F6258 001F3198  38 A0 00 01 */	li r5, 1
/* 801F625C 001F319C  38 00 00 06 */	li r0, 6
/* 801F6260 001F31A0  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801F6264 001F31A4  D0 04 00 04 */	stfs f0, 4(r4)
/* 801F6268 001F31A8  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 801F626C 001F31AC  D0 04 00 08 */	stfs f0, 8(r4)
/* 801F6270 001F31B0  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 801F6274 001F31B4  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801F6278 001F31B8  C0 04 00 08 */	lfs f0, 8(r4)
/* 801F627C 001F31BC  EC 00 08 2A */	fadds f0, f0, f1
/* 801F6280 001F31C0  D0 04 00 08 */	stfs f0, 8(r4)
/* 801F6284 001F31C4  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 801F6288 001F31C8  98 A4 00 14 */	stb r5, 0x14(r4)
/* 801F628C 001F31CC  80 A3 01 F0 */	lwz r5, 0x1f0(r3)
/* 801F6290 001F31D0  B0 A4 00 16 */	sth r5, 0x16(r4)
/* 801F6294 001F31D4  80 63 01 E8 */	lwz r3, 0x1e8(r3)
/* 801F6298 001F31D8  B0 64 00 18 */	sth r3, 0x18(r4)
/* 801F629C 001F31DC  98 04 00 15 */	stb r0, 0x15(r4)
/* 801F62A0 001F31E0  90 C4 00 1C */	stw r6, 0x1c(r4)
/* 801F62A4 001F31E4  4E 80 00 20 */	blr 

.global __ct__Q34Game13ItemDownFloor3MgrFv
__ct__Q34Game13ItemDownFloor3MgrFv:
/* 801F62A8 001F31E8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801F62AC 001F31EC  7C 08 02 A6 */	mflr r0
/* 801F62B0 001F31F0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801F62B4 001F31F4  7C 80 07 35 */	extsh. r0, r4
/* 801F62B8 001F31F8  3C 80 80 48 */	lis r4, lbl_80481800@ha
/* 801F62BC 001F31FC  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801F62C0 001F3200  7C 7F 1B 78 */	mr r31, r3
/* 801F62C4 001F3204  3B C4 18 00 */	addi r30, r4, lbl_80481800@l
/* 801F62C8 001F3208  41 82 00 0C */	beq .L_801F62D4
/* 801F62CC 001F320C  38 1F 00 8C */	addi r0, r31, 0x8c
/* 801F62D0 001F3210  90 1F 00 04 */	stw r0, 4(r31)
.L_801F62D4:
/* 801F62D4 001F3214  7F E3 FB 78 */	mr r3, r31
/* 801F62D8 001F3218  38 80 00 00 */	li r4, 0
/* 801F62DC 001F321C  4B FD 71 45 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801F62E0 001F3220  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor3Mgr@ha
/* 801F62E4 001F3224  38 1E 00 80 */	addi r0, r30, 0x80
/* 801F62E8 001F3228  38 63 C5 78 */	addi r3, r3, __vt__Q34Game13ItemDownFloor3Mgr@l
/* 801F62EC 001F322C  38 9E 00 8C */	addi r4, r30, 0x8c
/* 801F62F0 001F3230  90 7F 00 00 */	stw r3, 0(r31)
/* 801F62F4 001F3234  38 63 00 74 */	addi r3, r3, 0x74
/* 801F62F8 001F3238  38 A0 00 00 */	li r5, 0
/* 801F62FC 001F323C  90 7F 00 30 */	stw r3, 0x30(r31)
/* 801F6300 001F3240  90 1F 00 08 */	stw r0, 8(r31)
/* 801F6304 001F3244  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F6308 001F3248  48 22 D0 55 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F630C 001F324C  38 1E 00 9C */	addi r0, r30, 0x9c
/* 801F6310 001F3250  7F E3 FB 78 */	mr r3, r31
/* 801F6314 001F3254  90 1F 00 28 */	stw r0, 0x28(r31)
/* 801F6318 001F3258  38 80 00 03 */	li r4, 3
/* 801F631C 001F325C  4B FD 6A B1 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801F6320 001F3260  7F E3 FB 78 */	mr r3, r31
/* 801F6324 001F3264  38 9E 00 BC */	addi r4, r30, 0xbc
/* 801F6328 001F3268  4B FD 6E A5 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801F632C 001F326C  7C 60 1B 78 */	mr r0, r3
/* 801F6330 001F3270  7F E3 FB 78 */	mr r3, r31
/* 801F6334 001F3274  7C 1C 03 78 */	mr r28, r0
/* 801F6338 001F3278  38 82 B9 04 */	addi r4, r2, lbl_80519C64@sda21
/* 801F633C 001F327C  4B FD 6B 99 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801F6340 001F3280  7F E3 FB 78 */	mr r3, r31
/* 801F6344 001F3284  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 801F6348 001F3288  38 A0 00 00 */	li r5, 0
/* 801F634C 001F328C  3C C0 00 02 */	lis r6, 2
/* 801F6350 001F3290  4B FD 6C 01 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F6354 001F3294  7F E3 FB 78 */	mr r3, r31
/* 801F6358 001F3298  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F635C 001F329C  38 A0 00 01 */	li r5, 1
/* 801F6360 001F32A0  3C C0 00 02 */	lis r6, 2
/* 801F6364 001F32A4  4B FD 6B ED */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F6368 001F32A8  7F E3 FB 78 */	mr r3, r31
/* 801F636C 001F32AC  38 9E 00 F0 */	addi r4, r30, 0xf0
/* 801F6370 001F32B0  38 A0 00 02 */	li r5, 2
/* 801F6374 001F32B4  3C C0 20 02 */	lis r6, 0x2002
/* 801F6378 001F32B8  4B FD 6B D9 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F637C 001F32BC  7F E3 FB 78 */	mr r3, r31
/* 801F6380 001F32C0  7F 84 E3 78 */	mr r4, r28
/* 801F6384 001F32C4  38 BE 01 04 */	addi r5, r30, 0x104
/* 801F6388 001F32C8  4B FD 6C 75 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F638C 001F32CC  38 60 00 0C */	li r3, 0xc
/* 801F6390 001F32D0  4B E2 DC 1D */	bl __nwa__FUl
/* 801F6394 001F32D4  90 7F 00 88 */	stw r3, 0x88(r31)
/* 801F6398 001F32D8  7F E3 FB 78 */	mr r3, r31
/* 801F639C 001F32DC  7F 84 E3 78 */	mr r4, r28
/* 801F63A0 001F32E0  38 BE 01 10 */	addi r5, r30, 0x110
/* 801F63A4 001F32E4  4B FD 6E FD */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F63A8 001F32E8  80 DF 00 88 */	lwz r6, 0x88(r31)
/* 801F63AC 001F32EC  7F 84 E3 78 */	mr r4, r28
/* 801F63B0 001F32F0  38 BE 01 20 */	addi r5, r30, 0x120
/* 801F63B4 001F32F4  90 66 00 00 */	stw r3, 0(r6)
/* 801F63B8 001F32F8  7F E3 FB 78 */	mr r3, r31
/* 801F63BC 001F32FC  4B FD 6E E5 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F63C0 001F3300  80 DF 00 88 */	lwz r6, 0x88(r31)
/* 801F63C4 001F3304  7F 84 E3 78 */	mr r4, r28
/* 801F63C8 001F3308  38 BE 01 30 */	addi r5, r30, 0x130
/* 801F63CC 001F330C  90 66 00 04 */	stw r3, 4(r6)
/* 801F63D0 001F3310  7F E3 FB 78 */	mr r3, r31
/* 801F63D4 001F3314  4B FD 6E CD */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F63D8 001F3318  80 FF 00 88 */	lwz r7, 0x88(r31)
/* 801F63DC 001F331C  38 80 00 03 */	li r4, 3
/* 801F63E0 001F3320  38 A0 00 00 */	li r5, 0
/* 801F63E4 001F3324  38 C0 00 01 */	li r6, 1
/* 801F63E8 001F3328  90 67 00 08 */	stw r3, 8(r7)
/* 801F63EC 001F332C  38 61 00 08 */	addi r3, r1, 8
/* 801F63F0 001F3330  48 22 60 69 */	bl setCode__Q27MapCode4CodeFiib
/* 801F63F4 001F3334  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 801F63F8 001F3338  38 81 00 08 */	addi r4, r1, 8
/* 801F63FC 001F333C  80 63 00 00 */	lwz r3, 0(r3)
/* 801F6400 001F3340  4B F3 D2 F5 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801F6404 001F3344  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 801F6408 001F3348  38 81 00 08 */	addi r4, r1, 8
/* 801F640C 001F334C  80 63 00 04 */	lwz r3, 4(r3)
/* 801F6410 001F3350  4B F3 D2 E5 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801F6414 001F3354  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 801F6418 001F3358  38 81 00 08 */	addi r4, r1, 8
/* 801F641C 001F335C  80 63 00 08 */	lwz r3, 8(r3)
/* 801F6420 001F3360  4B F3 D2 D5 */	bl setMapCodeAll__8PlatformFRQ27MapCode4Code
/* 801F6424 001F3364  3B 60 00 00 */	li r27, 0
/* 801F6428 001F3368  3B A0 00 00 */	li r29, 0
.L_801F642C:
/* 801F642C 001F336C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801F6430 001F3370  3C 80 00 04 */	lis r4, 4
/* 801F6434 001F3374  7C 63 E8 2E */	lwzx r3, r3, r29
/* 801F6438 001F3378  4B E8 D4 A1 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F643C 001F337C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801F6440 001F3380  7C 63 E8 2E */	lwzx r3, r3, r29
/* 801F6444 001F3384  4B E8 D5 ED */	bl makeSharedDL__12J3DModelDataFv
/* 801F6448 001F3388  3B 7B 00 01 */	addi r27, r27, 1
/* 801F644C 001F338C  3B BD 00 04 */	addi r29, r29, 4
/* 801F6450 001F3390  2C 1B 00 03 */	cmpwi r27, 3
/* 801F6454 001F3394  41 80 FF D8 */	blt .L_801F642C
/* 801F6458 001F3398  7F E3 FB 78 */	mr r3, r31
/* 801F645C 001F339C  7F 84 E3 78 */	mr r4, r28
/* 801F6460 001F33A0  4B FD 6D F1 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801F6464 001F33A4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F6468 001F33A8  38 9E 00 8C */	addi r4, r30, 0x8c
/* 801F646C 001F33AC  48 22 CE F9 */	bl heapStatusEnd__6SystemFPc
/* 801F6470 001F33B0  7F E3 FB 78 */	mr r3, r31
/* 801F6474 001F33B4  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801F6478 001F33B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801F647C 001F33BC  7C 08 03 A6 */	mtlr r0
/* 801F6480 001F33C0  38 21 00 30 */	addi r1, r1, 0x30
/* 801F6484 001F33C4  4E 80 00 20 */	blr 

.global setupDownFloor__Q34Game13ItemDownFloor3MgrFPQ34Game13ItemDownFloor4Item
setupDownFloor__Q34Game13ItemDownFloor3MgrFPQ34Game13ItemDownFloor4Item:
/* 801F6488 001F33C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F648C 001F33CC  7C 08 02 A6 */	mflr r0
/* 801F6490 001F33D0  3C A0 80 48 */	lis r5, lbl_80481940@ha
/* 801F6494 001F33D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6498 001F33D8  38 05 19 40 */	addi r0, r5, lbl_80481940@l
/* 801F649C 001F33DC  38 A0 00 00 */	li r5, 0
/* 801F64A0 001F33E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F64A4 001F33E4  7C 9F 23 78 */	mr r31, r4
/* 801F64A8 001F33E8  7C 04 03 78 */	mr r4, r0
/* 801F64AC 001F33EC  93 C1 00 08 */	stw r30, 8(r1)
/* 801F64B0 001F33F0  7C 7E 1B 78 */	mr r30, r3
/* 801F64B4 001F33F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F64B8 001F33F8  48 22 CE A5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F64BC 001F33FC  38 60 00 14 */	li r3, 0x14
/* 801F64C0 001F3400  4B E2 D9 E5 */	bl __nw__FUl
/* 801F64C4 001F3404  7C 60 1B 79 */	or. r0, r3, r3
/* 801F64C8 001F3408  41 82 00 24 */	beq .L_801F64EC
/* 801F64CC 001F340C  A0 1F 02 04 */	lhz r0, 0x204(r31)
/* 801F64D0 001F3410  3C A0 00 02 */	lis r5, 2
/* 801F64D4 001F3414  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 801F64D8 001F3418  38 C0 00 02 */	li r6, 2
/* 801F64DC 001F341C  54 00 10 3A */	slwi r0, r0, 2
/* 801F64E0 001F3420  7C 84 00 2E */	lwzx r4, r4, r0
/* 801F64E4 001F3424  48 24 7C F5 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801F64E8 001F3428  7C 60 1B 78 */	mr r0, r3
.L_801F64EC:
/* 801F64EC 001F342C  90 1F 01 74 */	stw r0, 0x174(r31)
/* 801F64F0 001F3430  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801F64F4 001F3434  80 63 00 08 */	lwz r3, 8(r3)
/* 801F64F8 001F3438  81 83 00 00 */	lwz r12, 0(r3)
/* 801F64FC 001F343C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F6500 001F3440  7D 89 03 A6 */	mtctr r12
/* 801F6504 001F3444  4E 80 04 21 */	bctrl 
/* 801F6508 001F3448  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801F650C 001F344C  80 63 00 08 */	lwz r3, 8(r3)
/* 801F6510 001F3450  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6514 001F3454  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F6518 001F3458  7D 89 03 A6 */	mtctr r12
/* 801F651C 001F345C  4E 80 04 21 */	bctrl 
/* 801F6520 001F3460  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801F6524 001F3464  80 63 00 08 */	lwz r3, 8(r3)
/* 801F6528 001F3468  4B E7 03 FD */	bl makeDL__8J3DModelFv
/* 801F652C 001F346C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801F6530 001F3470  80 63 00 08 */	lwz r3, 8(r3)
/* 801F6534 001F3474  4B E7 02 C1 */	bl lock__8J3DModelFv
/* 801F6538 001F3478  3C 80 80 48 */	lis r4, lbl_80481940@ha
/* 801F653C 001F347C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F6540 001F3480  38 84 19 40 */	addi r4, r4, lbl_80481940@l
/* 801F6544 001F3484  48 22 CE 21 */	bl heapStatusEnd__6SystemFPc
/* 801F6548 001F3488  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 801F654C 001F348C  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F6550 001F3490  38 80 00 00 */	li r4, 0
/* 801F6554 001F3494  38 A0 00 00 */	li r5, 0
/* 801F6558 001F3498  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801F655C 001F349C  48 23 27 2D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F6560 001F34A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6564 001F34A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F6568 001F34A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F656C 001F34AC  7C 08 03 A6 */	mtlr r0
/* 801F6570 001F34B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6574 001F34B4  4E 80 00 20 */	blr 

.global setupPlatform__Q34Game13ItemDownFloor3MgrFPQ34Game13ItemDownFloor4Item
setupPlatform__Q34Game13ItemDownFloor3MgrFPQ34Game13ItemDownFloor4Item:
/* 801F6578 001F34B8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F657C 001F34BC  7C 08 02 A6 */	mflr r0
/* 801F6580 001F34C0  3C A0 80 48 */	lis r5, lbl_8048194C@ha
/* 801F6584 001F34C4  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F6588 001F34C8  38 05 19 4C */	addi r0, r5, lbl_8048194C@l
/* 801F658C 001F34CC  38 A0 00 00 */	li r5, 0
/* 801F6590 001F34D0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801F6594 001F34D4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801F6598 001F34D8  7C 9E 23 78 */	mr r30, r4
/* 801F659C 001F34DC  7C 04 03 78 */	mr r4, r0
/* 801F65A0 001F34E0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801F65A4 001F34E4  7C 7D 1B 78 */	mr r29, r3
/* 801F65A8 001F34E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F65AC 001F34EC  48 22 CD B1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F65B0 001F34F0  3C 80 80 48 */	lis r4, lbl_80481958@ha
/* 801F65B4 001F34F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F65B8 001F34F8  38 84 19 58 */	addi r4, r4, lbl_80481958@l
/* 801F65BC 001F34FC  38 A0 00 00 */	li r5, 0
/* 801F65C0 001F3500  48 22 CD 9D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F65C4 001F3504  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801F65C8 001F3508  38 82 B9 0C */	addi r4, r2, lbl_80519C6C@sda21
/* 801F65CC 001F350C  48 24 8A 19 */	bl getJoint__Q28SysShape5ModelFPc
/* 801F65D0 001F3510  48 23 32 D1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801F65D4 001F3514  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F65D8 001F3518  40 82 00 10 */	bne .L_801F65E8
/* 801F65DC 001F351C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801F65E0 001F3520  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801F65E4 001F3524  48 23 32 BD */	bl getWorldMatrix__Q28SysShape5JointFv
.L_801F65E8:
/* 801F65E8 001F3528  3C 80 64 6F */	lis r4, 0x646F776E@ha
/* 801F65EC 001F352C  38 61 00 08 */	addi r3, r1, 8
/* 801F65F0 001F3530  38 84 77 6E */	addi r4, r4, 0x646F776E@l
/* 801F65F4 001F3534  48 21 CC B5 */	bl __ct__4ID32FUl
/* 801F65F8 001F3538  38 61 00 14 */	addi r3, r1, 0x14
/* 801F65FC 001F353C  4B FC F2 C5 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801F6600 001F3540  93 C1 00 14 */	stw r30, 0x14(r1)
/* 801F6604 001F3544  38 61 00 18 */	addi r3, r1, 0x18
/* 801F6608 001F3548  38 81 00 08 */	addi r4, r1, 8
/* 801F660C 001F354C  38 A0 00 05 */	li r5, 5
/* 801F6610 001F3550  4B EC B1 09 */	bl __copy
/* 801F6614 001F3554  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801F6618 001F3558  38 81 00 14 */	addi r4, r1, 0x14
/* 801F661C 001F355C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801F6620 001F3560  90 01 00 20 */	stw r0, 0x20(r1)
/* 801F6624 001F3564  A0 1E 02 04 */	lhz r0, 0x204(r30)
/* 801F6628 001F3568  80 BD 00 88 */	lwz r5, 0x88(r29)
/* 801F662C 001F356C  54 00 10 3A */	slwi r0, r0, 2
/* 801F6630 001F3570  7C 05 00 2E */	lwzx r0, r5, r0
/* 801F6634 001F3574  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F6638 001F3578  93 E1 00 28 */	stw r31, 0x28(r1)
/* 801F663C 001F357C  4B FC F2 E9 */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801F6640 001F3580  90 7E 01 E4 */	stw r3, 0x1e4(r30)
/* 801F6644 001F3584  3C 60 80 48 */	lis r3, lbl_80481958@ha
/* 801F6648 001F3588  38 83 19 58 */	addi r4, r3, lbl_80481958@l
/* 801F664C 001F358C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F6650 001F3590  48 22 CD 15 */	bl heapStatusEnd__6SystemFPc
/* 801F6654 001F3594  3C 80 80 48 */	lis r4, lbl_8048194C@ha
/* 801F6658 001F3598  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F665C 001F359C  38 84 19 4C */	addi r4, r4, lbl_8048194C@l
/* 801F6660 001F35A0  48 22 CD 05 */	bl heapStatusEnd__6SystemFPc
/* 801F6664 001F35A4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F6668 001F35A8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801F666C 001F35AC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801F6670 001F35B0  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801F6674 001F35B4  7C 08 03 A6 */	mtlr r0
/* 801F6678 001F35B8  38 21 00 50 */	addi r1, r1, 0x50
/* 801F667C 001F35BC  4E 80 00 20 */	blr 

.global onLoadResources__Q34Game13ItemDownFloor3MgrFv
onLoadResources__Q34Game13ItemDownFloor3MgrFv:
/* 801F6680 001F35C0  4E 80 00 20 */	blr 

.global birth__Q34Game13ItemDownFloor3MgrFv
birth__Q34Game13ItemDownFloor3MgrFv:
/* 801F6684 001F35C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6688 001F35C8  7C 08 02 A6 */	mflr r0
/* 801F668C 001F35CC  3C 80 80 48 */	lis r4, lbl_8048188C@ha
/* 801F6690 001F35D0  38 A0 00 00 */	li r5, 0
/* 801F6694 001F35D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6698 001F35D8  38 84 18 8C */	addi r4, r4, lbl_8048188C@l
/* 801F669C 001F35DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F66A0 001F35E0  93 C1 00 08 */	stw r30, 8(r1)
/* 801F66A4 001F35E4  7C 7E 1B 78 */	mr r30, r3
/* 801F66A8 001F35E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F66AC 001F35EC  48 22 CC B1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F66B0 001F35F0  38 60 02 2C */	li r3, 0x22c
/* 801F66B4 001F35F4  4B E2 D7 F1 */	bl __nw__FUl
/* 801F66B8 001F35F8  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F66BC 001F35FC  41 82 01 0C */	beq .L_801F67C8
/* 801F66C0 001F3600  38 80 04 0F */	li r4, 0x40f
/* 801F66C4 001F3604  4B FD 59 25 */	bl __ct__Q24Game8BaseItemFi
/* 801F66C8 001F3608  3C 60 80 4C */	lis r3, "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"@ha
/* 801F66CC 001F360C  38 00 00 00 */	li r0, 0
/* 801F66D0 001F3610  38 83 C9 A4 */	addi r4, r3, "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"@l
/* 801F66D4 001F3614  38 60 00 1C */	li r3, 0x1c
/* 801F66D8 001F3618  90 9F 00 00 */	stw r4, 0(r31)
/* 801F66DC 001F361C  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F66E0 001F3620  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F66E4 001F3624  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F66E8 001F3628  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F66EC 001F362C  4B E2 D7 B9 */	bl __nw__FUl
/* 801F66F0 001F3630  28 03 00 00 */	cmplwi r3, 0
/* 801F66F4 001F3634  41 82 00 30 */	beq .L_801F6724
/* 801F66F8 001F3638  3C 80 80 4C */	lis r4, "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"@ha
/* 801F66FC 001F363C  3C A0 80 4C */	lis r5, "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"@ha
/* 801F6700 001F3640  38 04 C9 8C */	addi r0, r4, "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"@l
/* 801F6704 001F3644  3C 80 80 4C */	lis r4, __vt__Q34Game13ItemDownFloor3FSM@ha
/* 801F6708 001F3648  90 03 00 00 */	stw r0, 0(r3)
/* 801F670C 001F364C  38 C0 FF FF */	li r6, -1
/* 801F6710 001F3650  38 A5 C9 74 */	addi r5, r5, "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"@l
/* 801F6714 001F3654  38 04 CC 8C */	addi r0, r4, __vt__Q34Game13ItemDownFloor3FSM@l
/* 801F6718 001F3658  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F671C 001F365C  90 A3 00 00 */	stw r5, 0(r3)
/* 801F6720 001F3660  90 03 00 00 */	stw r0, 0(r3)
.L_801F6724:
/* 801F6724 001F3664  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F6728 001F3668  7F E4 FB 78 */	mr r4, r31
/* 801F672C 001F366C  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F6730 001F3670  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6734 001F3674  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F6738 001F3678  7D 89 03 A6 */	mtctr r12
/* 801F673C 001F367C  4E 80 04 21 */	bctrl 
/* 801F6740 001F3680  3C 60 80 4B */	lis r3, __vt__14CarryInfoOwner@ha
/* 801F6744 001F3684  3C 80 80 4C */	lis r4, __vt__Q34Game13ItemDownFloor4Item@ha
/* 801F6748 001F3688  38 03 C3 D8 */	addi r0, r3, __vt__14CarryInfoOwner@l
/* 801F674C 001F368C  38 7F 02 08 */	addi r3, r31, 0x208
/* 801F6750 001F3690  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801F6754 001F3694  38 A4 C7 40 */	addi r5, r4, __vt__Q34Game13ItemDownFloor4Item@l
/* 801F6758 001F3698  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 801F675C 001F369C  90 BF 00 00 */	stw r5, 0(r31)
/* 801F6760 001F36A0  38 05 02 24 */	addi r0, r5, 0x224
/* 801F6764 001F36A4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F6768 001F36A8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801F676C 001F36AC  48 03 84 61 */	bl __ct__Q24Game11TSoundEventFv
/* 801F6770 001F36B0  38 7F 02 1C */	addi r3, r31, 0x21c
/* 801F6774 001F36B4  48 21 CA FD */	bl __ct__4ID32Fv
/* 801F6778 001F36B8  38 60 00 08 */	li r3, 8
/* 801F677C 001F36BC  4B E2 D7 29 */	bl __nw__FUl
/* 801F6780 001F36C0  7C 60 1B 79 */	or. r0, r3, r3
/* 801F6784 001F36C4  41 82 00 0C */	beq .L_801F6790
/* 801F6788 001F36C8  4B F3 D8 D5 */	bl __ct__8CollTreeFv
/* 801F678C 001F36CC  7C 60 1B 78 */	mr r0, r3
.L_801F6790:
/* 801F6790 001F36D0  90 1F 01 14 */	stw r0, 0x114(r31)
/* 801F6794 001F36D4  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801F6798 001F36D8  C0 02 B8 D8 */	lfs f0, lbl_80519C38@sda21(r2)
/* 801F679C 001F36DC  38 00 00 00 */	li r0, 0
/* 801F67A0 001F36E0  38 7F 02 1C */	addi r3, r31, 0x21c
/* 801F67A4 001F36E4  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801F67A8 001F36E8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801F67AC 001F36EC  98 1F 01 FC */	stb r0, 0x1fc(r31)
/* 801F67B0 001F36F0  98 1F 02 28 */	stb r0, 0x228(r31)
/* 801F67B4 001F36F4  90 1F 02 18 */	stw r0, 0x218(r31)
/* 801F67B8 001F36F8  48 21 CB 21 */	bl setID__4ID32FUl
/* 801F67BC 001F36FC  38 00 00 00 */	li r0, 0
/* 801F67C0 001F3700  90 1F 02 14 */	stw r0, 0x214(r31)
/* 801F67C4 001F3704  98 1F 02 29 */	stb r0, 0x229(r31)
.L_801F67C8:
/* 801F67C8 001F3708  7F C3 F3 78 */	mr r3, r30
/* 801F67CC 001F370C  7F E4 FB 78 */	mr r4, r31
/* 801F67D0 001F3710  4B FD 70 59 */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801F67D4 001F3714  3C 80 80 48 */	lis r4, lbl_8048188C@ha
/* 801F67D8 001F3718  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F67DC 001F371C  38 84 18 8C */	addi r4, r4, lbl_8048188C@l
/* 801F67E0 001F3720  48 22 CB 85 */	bl heapStatusEnd__6SystemFPc
/* 801F67E4 001F3724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F67E8 001F3728  7F E3 FB 78 */	mr r3, r31
/* 801F67EC 001F372C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F67F0 001F3730  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F67F4 001F3734  7C 08 03 A6 */	mtlr r0
/* 801F67F8 001F3738  38 21 00 10 */	addi r1, r1, 0x10
/* 801F67FC 001F373C  4E 80 00 20 */	blr 

.global getCaveName__Q34Game13ItemDownFloor3MgrFi
getCaveName__Q34Game13ItemDownFloor3MgrFi:
/* 801F6800 001F3740  2C 04 00 00 */	cmpwi r4, 0
/* 801F6804 001F3744  3C 60 80 48 */	lis r3, lbl_80481800@ha
/* 801F6808 001F3748  38 A3 18 00 */	addi r5, r3, lbl_80481800@l
/* 801F680C 001F374C  40 82 00 0C */	bne .L_801F6818
/* 801F6810 001F3750  38 65 00 80 */	addi r3, r5, 0x80
/* 801F6814 001F3754  4E 80 00 20 */	blr 
.L_801F6818:
/* 801F6818 001F3758  2C 04 00 01 */	cmpwi r4, 1
/* 801F681C 001F375C  40 82 00 0C */	bne .L_801F6828
/* 801F6820 001F3760  38 65 01 68 */	addi r3, r5, 0x168
/* 801F6824 001F3764  4E 80 00 20 */	blr 
.L_801F6828:
/* 801F6828 001F3768  2C 04 00 02 */	cmpwi r4, 2
/* 801F682C 001F376C  38 60 00 00 */	li r3, 0
/* 801F6830 001F3770  4C 82 00 20 */	bnelr 
/* 801F6834 001F3774  38 65 01 74 */	addi r3, r5, 0x174
/* 801F6838 001F3778  4E 80 00 20 */	blr 

.global getCaveID__Q34Game13ItemDownFloor3MgrFPc
getCaveID__Q34Game13ItemDownFloor3MgrFPc:
/* 801F683C 001F377C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6840 001F3780  7C 08 02 A6 */	mflr r0
/* 801F6844 001F3784  3C 60 80 48 */	lis r3, lbl_80481800@ha
/* 801F6848 001F3788  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F684C 001F378C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F6850 001F3790  3B E3 18 00 */	addi r31, r3, lbl_80481800@l
/* 801F6854 001F3794  38 7F 00 80 */	addi r3, r31, 0x80
/* 801F6858 001F3798  93 C1 00 08 */	stw r30, 8(r1)
/* 801F685C 001F379C  7C 9E 23 78 */	mr r30, r4
/* 801F6860 001F37A0  4B ED 40 B1 */	bl strlen
/* 801F6864 001F37A4  7C 65 1B 78 */	mr r5, r3
/* 801F6868 001F37A8  7F C4 F3 78 */	mr r4, r30
/* 801F686C 001F37AC  38 7F 00 80 */	addi r3, r31, 0x80
/* 801F6870 001F37B0  4B ED 3E 11 */	bl strncmp
/* 801F6874 001F37B4  2C 03 00 00 */	cmpwi r3, 0
/* 801F6878 001F37B8  40 82 00 0C */	bne .L_801F6884
/* 801F687C 001F37BC  38 60 00 00 */	li r3, 0
/* 801F6880 001F37C0  48 00 00 54 */	b .L_801F68D4
.L_801F6884:
/* 801F6884 001F37C4  38 7F 01 68 */	addi r3, r31, 0x168
/* 801F6888 001F37C8  4B ED 40 89 */	bl strlen
/* 801F688C 001F37CC  7C 65 1B 78 */	mr r5, r3
/* 801F6890 001F37D0  7F C4 F3 78 */	mr r4, r30
/* 801F6894 001F37D4  38 7F 01 68 */	addi r3, r31, 0x168
/* 801F6898 001F37D8  4B ED 3D E9 */	bl strncmp
/* 801F689C 001F37DC  2C 03 00 00 */	cmpwi r3, 0
/* 801F68A0 001F37E0  40 82 00 0C */	bne .L_801F68AC
/* 801F68A4 001F37E4  38 60 00 01 */	li r3, 1
/* 801F68A8 001F37E8  48 00 00 2C */	b .L_801F68D4
.L_801F68AC:
/* 801F68AC 001F37EC  38 7F 01 74 */	addi r3, r31, 0x174
/* 801F68B0 001F37F0  4B ED 40 61 */	bl strlen
/* 801F68B4 001F37F4  7C 65 1B 78 */	mr r5, r3
/* 801F68B8 001F37F8  7F C4 F3 78 */	mr r4, r30
/* 801F68BC 001F37FC  38 7F 01 74 */	addi r3, r31, 0x174
/* 801F68C0 001F3800  4B ED 3D C1 */	bl strncmp
/* 801F68C4 001F3804  2C 03 00 00 */	cmpwi r3, 0
/* 801F68C8 001F3808  38 60 00 02 */	li r3, 2
/* 801F68CC 001F380C  41 82 00 08 */	beq .L_801F68D4
/* 801F68D0 001F3810  38 60 FF FF */	li r3, -1
.L_801F68D4:
/* 801F68D4 001F3814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F68D8 001F3818  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F68DC 001F381C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F68E0 001F3820  7C 08 03 A6 */	mtlr r0
/* 801F68E4 001F3824  38 21 00 10 */	addi r1, r1, 0x10
/* 801F68E8 001F3828  4E 80 00 20 */	blr 

.global init__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
init__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg:
/* 801F68EC 001F382C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F68F0 001F3830  7C 08 02 A6 */	mflr r0
/* 801F68F4 001F3834  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F68F8 001F3838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F68FC 001F383C  7C 9F 23 78 */	mr r31, r4
/* 801F6900 001F3840  88 04 01 FC */	lbz r0, 0x1fc(r4)
/* 801F6904 001F3844  28 00 00 00 */	cmplwi r0, 0
/* 801F6908 001F3848  40 82 00 18 */	bne .L_801F6920
/* 801F690C 001F384C  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F6910 001F3850  38 80 00 00 */	li r4, 0
/* 801F6914 001F3854  38 A0 00 00 */	li r5, 0
/* 801F6918 001F3858  48 23 23 71 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F691C 001F385C  48 00 00 1C */	b .L_801F6938
.L_801F6920:
/* 801F6920 001F3860  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F6924 001F3864  38 80 00 02 */	li r4, 2
/* 801F6928 001F3868  38 A0 00 00 */	li r5, 0
/* 801F692C 001F386C  48 23 23 5D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801F6930 001F3870  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801F6934 001F3874  48 23 25 CD */	bl setLastFrame__Q28SysShape8AnimatorFv
.L_801F6938:
/* 801F6938 001F3878  C0 02 B8 F0 */	lfs f0, lbl_80519C50@sda21(r2)
/* 801F693C 001F387C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801F6940 001F3880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6944 001F3884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F6948 001F3888  7C 08 03 A6 */	mtlr r0
/* 801F694C 001F388C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6950 001F3890  4E 80 00 20 */	blr 

.global exec__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item
exec__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item:
/* 801F6954 001F3894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6958 001F3898  7C 08 02 A6 */	mflr r0
/* 801F695C 001F389C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6960 001F38A0  88 04 02 28 */	lbz r0, 0x228(r4)
/* 801F6964 001F38A4  28 00 00 00 */	cmplwi r0, 0
/* 801F6968 001F38A8  41 82 00 3C */	beq .L_801F69A4
/* 801F696C 001F38AC  88 04 01 FC */	lbz r0, 0x1fc(r4)
/* 801F6970 001F38B0  28 00 00 00 */	cmplwi r0, 0
/* 801F6974 001F38B4  40 82 00 30 */	bne .L_801F69A4
/* 801F6978 001F38B8  80 A4 02 18 */	lwz r5, 0x218(r4)
/* 801F697C 001F38BC  80 C4 01 F0 */	lwz r6, 0x1f0(r4)
/* 801F6980 001F38C0  80 05 01 F0 */	lwz r0, 0x1f0(r5)
/* 801F6984 001F38C4  7C 06 00 00 */	cmpw r6, r0
/* 801F6988 001F38C8  40 81 00 1C */	ble .L_801F69A4
/* 801F698C 001F38CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6990 001F38D0  38 A0 00 02 */	li r5, 2
/* 801F6994 001F38D4  38 C0 00 00 */	li r6, 0
/* 801F6998 001F38D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F699C 001F38DC  7D 89 03 A6 */	mtctr r12
/* 801F69A0 001F38E0  4E 80 04 21 */	bctrl 
.L_801F69A4:
/* 801F69A4 001F38E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F69A8 001F38E8  7C 08 03 A6 */	mtlr r0
/* 801F69AC 001F38EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F69B0 001F38F0  4E 80 00 20 */	blr 

.global "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
"transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg":
/* 801F69B4 001F38F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F69B8 001F38F8  7C 08 02 A6 */	mflr r0
/* 801F69BC 001F38FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F69C0 001F3900  80 63 00 08 */	lwz r3, 8(r3)
/* 801F69C4 001F3904  81 83 00 00 */	lwz r12, 0(r3)
/* 801F69C8 001F3908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F69CC 001F390C  7D 89 03 A6 */	mtctr r12
/* 801F69D0 001F3910  4E 80 04 21 */	bctrl 
/* 801F69D4 001F3914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F69D8 001F3918  7C 08 03 A6 */	mtlr r0
/* 801F69DC 001F391C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F69E0 001F3920  4E 80 00 20 */	blr 

.global cleanup__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item
cleanup__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item:
/* 801F69E4 001F3924  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent:
/* 801F69E8 001F3928  4E 80 00 20 */	blr 

.global onPlat__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item
onPlat__Q34Game13ItemDownFloor9WaitStateFPQ34Game13ItemDownFloor4Item:
/* 801F69EC 001F392C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F69F0 001F3930  7C 08 02 A6 */	mflr r0
/* 801F69F4 001F3934  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F69F8 001F3938  88 04 01 FC */	lbz r0, 0x1fc(r4)
/* 801F69FC 001F393C  28 00 00 00 */	cmplwi r0, 0
/* 801F6A00 001F3940  40 82 00 1C */	bne .L_801F6A1C
/* 801F6A04 001F3944  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6A08 001F3948  38 A0 00 01 */	li r5, 1
/* 801F6A0C 001F394C  38 C0 00 00 */	li r6, 0
/* 801F6A10 001F3950  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6A14 001F3954  7D 89 03 A6 */	mtctr r12
/* 801F6A18 001F3958  4E 80 04 21 */	bctrl 
.L_801F6A1C:
/* 801F6A1C 001F395C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6A20 001F3960  7C 08 03 A6 */	mtlr r0
/* 801F6A24 001F3964  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6A28 001F3968  4E 80 00 20 */	blr 

.global init__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
init__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg:
/* 801F6A2C 001F396C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6A30 001F3970  7C 08 02 A6 */	mflr r0
/* 801F6A34 001F3974  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6A38 001F3978  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F6A3C 001F397C  7C 7F 1B 78 */	mr r31, r3
/* 801F6A40 001F3980  7C 83 23 78 */	mr r3, r4
/* 801F6A44 001F3984  4B FF EA 45 */	bl startDamageMotion__Q34Game13ItemDownFloor4ItemFv
/* 801F6A48 001F3988  38 00 00 00 */	li r0, 0
/* 801F6A4C 001F398C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801F6A50 001F3990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6A54 001F3994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F6A58 001F3998  7C 08 03 A6 */	mtlr r0
/* 801F6A5C 001F399C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6A60 001F39A0  4E 80 00 20 */	blr 

.global exec__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item
exec__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item:
/* 801F6A64 001F39A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6A68 001F39A8  7C 08 02 A6 */	mflr r0
/* 801F6A6C 001F39AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6A70 001F39B0  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801F6A74 001F39B4  28 00 00 00 */	cmplwi r0, 0
/* 801F6A78 001F39B8  41 82 00 A0 */	beq .L_801F6B18
/* 801F6A7C 001F39BC  88 04 02 28 */	lbz r0, 0x228(r4)
/* 801F6A80 001F39C0  28 00 00 00 */	cmplwi r0, 0
/* 801F6A84 001F39C4  41 82 00 50 */	beq .L_801F6AD4
/* 801F6A88 001F39C8  80 A4 02 18 */	lwz r5, 0x218(r4)
/* 801F6A8C 001F39CC  80 C4 01 F0 */	lwz r6, 0x1f0(r4)
/* 801F6A90 001F39D0  80 05 01 F0 */	lwz r0, 0x1f0(r5)
/* 801F6A94 001F39D4  7C 06 00 00 */	cmpw r6, r0
/* 801F6A98 001F39D8  40 81 00 20 */	ble .L_801F6AB8
/* 801F6A9C 001F39DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6AA0 001F39E0  38 A0 00 02 */	li r5, 2
/* 801F6AA4 001F39E4  38 C0 00 00 */	li r6, 0
/* 801F6AA8 001F39E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6AAC 001F39EC  7D 89 03 A6 */	mtctr r12
/* 801F6AB0 001F39F0  4E 80 04 21 */	bctrl 
/* 801F6AB4 001F39F4  48 00 00 64 */	b .L_801F6B18
.L_801F6AB8:
/* 801F6AB8 001F39F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6ABC 001F39FC  38 A0 00 00 */	li r5, 0
/* 801F6AC0 001F3A00  38 C0 00 00 */	li r6, 0
/* 801F6AC4 001F3A04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6AC8 001F3A08  7D 89 03 A6 */	mtctr r12
/* 801F6ACC 001F3A0C  4E 80 04 21 */	bctrl 
/* 801F6AD0 001F3A10  48 00 00 48 */	b .L_801F6B18
.L_801F6AD4:
/* 801F6AD4 001F3A14  80 A4 01 F0 */	lwz r5, 0x1f0(r4)
/* 801F6AD8 001F3A18  80 04 01 E8 */	lwz r0, 0x1e8(r4)
/* 801F6ADC 001F3A1C  7C 05 00 00 */	cmpw r5, r0
/* 801F6AE0 001F3A20  41 80 00 20 */	blt .L_801F6B00
/* 801F6AE4 001F3A24  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6AE8 001F3A28  38 A0 00 02 */	li r5, 2
/* 801F6AEC 001F3A2C  38 C0 00 00 */	li r6, 0
/* 801F6AF0 001F3A30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6AF4 001F3A34  7D 89 03 A6 */	mtctr r12
/* 801F6AF8 001F3A38  4E 80 04 21 */	bctrl 
/* 801F6AFC 001F3A3C  48 00 00 1C */	b .L_801F6B18
.L_801F6B00:
/* 801F6B00 001F3A40  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6B04 001F3A44  38 A0 00 00 */	li r5, 0
/* 801F6B08 001F3A48  38 C0 00 00 */	li r6, 0
/* 801F6B0C 001F3A4C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6B10 001F3A50  7D 89 03 A6 */	mtctr r12
/* 801F6B14 001F3A54  4E 80 04 21 */	bctrl 
.L_801F6B18:
/* 801F6B18 001F3A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6B1C 001F3A5C  7C 08 03 A6 */	mtlr r0
/* 801F6B20 001F3A60  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6B24 001F3A64  4E 80 00 20 */	blr 

.global cleanup__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item
cleanup__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item:
/* 801F6B28 001F3A68  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent:
/* 801F6B2C 001F3A6C  38 00 00 01 */	li r0, 1
/* 801F6B30 001F3A70  98 03 00 10 */	stb r0, 0x10(r3)
/* 801F6B34 001F3A74  4E 80 00 20 */	blr 

.global onPlat__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item
onPlat__Q34Game13ItemDownFloor12DamagedStateFPQ34Game13ItemDownFloor4Item:
/* 801F6B38 001F3A78  4E 80 00 20 */	blr 

.global init__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
init__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg:
/* 801F6B3C 001F3A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6B40 001F3A80  7C 08 02 A6 */	mflr r0
/* 801F6B44 001F3A84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6B48 001F3A88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F6B4C 001F3A8C  7C 9F 23 78 */	mr r31, r4
/* 801F6B50 001F3A90  7F E3 FB 78 */	mr r3, r31
/* 801F6B54 001F3A94  4B FF EC 6D */	bl startDownMotion__Q34Game13ItemDownFloor4ItemFv
/* 801F6B58 001F3A98  80 9F 02 18 */	lwz r4, 0x218(r31)
/* 801F6B5C 001F3A9C  28 04 00 00 */	cmplwi r4, 0
/* 801F6B60 001F3AA0  41 82 00 64 */	beq .L_801F6BC4
/* 801F6B64 001F3AA4  80 64 01 D8 */	lwz r3, 0x1d8(r4)
/* 801F6B68 001F3AA8  38 A0 00 03 */	li r5, 3
/* 801F6B6C 001F3AAC  38 C0 00 00 */	li r6, 0
/* 801F6B70 001F3AB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6B74 001F3AB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F6B78 001F3AB8  7D 89 03 A6 */	mtctr r12
/* 801F6B7C 001F3ABC  4E 80 04 21 */	bctrl 
/* 801F6B80 001F3AC0  88 1F 02 29 */	lbz r0, 0x229(r31)
/* 801F6B84 001F3AC4  28 00 00 00 */	cmplwi r0, 0
/* 801F6B88 001F3AC8  41 82 00 18 */	beq .L_801F6BA0
/* 801F6B8C 001F3ACC  80 7F 02 14 */	lwz r3, 0x214(r31)
/* 801F6B90 001F3AD0  28 03 00 00 */	cmplwi r3, 0
/* 801F6B94 001F3AD4  41 82 00 0C */	beq .L_801F6BA0
/* 801F6B98 001F3AD8  38 80 00 01 */	li r4, 1
/* 801F6B9C 001F3ADC  4B F7 BC D9 */	bl setOpen__Q24Game8WayPointFb
.L_801F6BA0:
/* 801F6BA0 001F3AE0  80 7F 02 18 */	lwz r3, 0x218(r31)
/* 801F6BA4 001F3AE4  88 03 02 29 */	lbz r0, 0x229(r3)
/* 801F6BA8 001F3AE8  28 00 00 00 */	cmplwi r0, 0
/* 801F6BAC 001F3AEC  41 82 00 18 */	beq .L_801F6BC4
/* 801F6BB0 001F3AF0  80 63 02 14 */	lwz r3, 0x214(r3)
/* 801F6BB4 001F3AF4  28 03 00 00 */	cmplwi r3, 0
/* 801F6BB8 001F3AF8  41 82 00 0C */	beq .L_801F6BC4
/* 801F6BBC 001F3AFC  38 80 00 00 */	li r4, 0
/* 801F6BC0 001F3B00  4B F7 BC B5 */	bl setOpen__Q24Game8WayPointFb
.L_801F6BC4:
/* 801F6BC4 001F3B04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6BC8 001F3B08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F6BCC 001F3B0C  7C 08 03 A6 */	mtlr r0
/* 801F6BD0 001F3B10  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6BD4 001F3B14  4E 80 00 20 */	blr 

.global exec__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
exec__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item:
/* 801F6BD8 001F3B18  4E 80 00 20 */	blr 

.global cleanup__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
cleanup__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item:
/* 801F6BDC 001F3B1C  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent:
/* 801F6BE0 001F3B20  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F6BE4 001F3B24  7C 08 02 A6 */	mflr r0
/* 801F6BE8 001F3B28  3C A0 80 48 */	lis r5, lbl_80481800@ha
/* 801F6BEC 001F3B2C  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F6BF0 001F3B30  38 00 00 01 */	li r0, 1
/* 801F6BF4 001F3B34  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801F6BF8 001F3B38  3B E5 18 00 */	addi r31, r5, lbl_80481800@l
/* 801F6BFC 001F3B3C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801F6C00 001F3B40  7C 9E 23 78 */	mr r30, r4
/* 801F6C04 001F3B44  98 04 01 FC */	stb r0, 0x1fc(r4)
/* 801F6C08 001F3B48  88 04 02 28 */	lbz r0, 0x228(r4)
/* 801F6C0C 001F3B4C  28 00 00 00 */	cmplwi r0, 0
/* 801F6C10 001F3B50  40 82 01 C0 */	bne .L_801F6DD0
/* 801F6C14 001F3B54  38 7E 02 08 */	addi r3, r30, 0x208
/* 801F6C18 001F3B58  48 03 80 19 */	bl finish__Q24Game11TSoundEventFv
/* 801F6C1C 001F3B5C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F6C20 001F3B60  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F6C24 001F3B64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6C28 001F3B68  7D 89 03 A6 */	mtctr r12
/* 801F6C2C 001F3B6C  4E 80 04 21 */	bctrl 
/* 801F6C30 001F3B70  2C 03 00 0A */	cmpwi r3, 0xa
/* 801F6C34 001F3B74  41 82 00 18 */	beq .L_801F6C4C
/* 801F6C38 001F3B78  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801F6C3C 001F3B7C  38 BF 00 74 */	addi r5, r31, 0x74
/* 801F6C40 001F3B80  38 80 04 4C */	li r4, 0x44c
/* 801F6C44 001F3B84  4C C6 31 82 */	crclr 6
/* 801F6C48 001F3B88  4B E3 39 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F6C4C:
/* 801F6C4C 001F3B8C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801F6C50 001F3B90  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801F6C54 001F3B94  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 801F6C58 001F3B98  7D 89 03 A6 */	mtctr r12
/* 801F6C5C 001F3B9C  4E 80 04 21 */	bctrl 
/* 801F6C60 001F3BA0  80 7E 01 E4 */	lwz r3, 0x1e4(r30)
/* 801F6C64 001F3BA4  38 80 00 00 */	li r4, 0
/* 801F6C68 001F3BA8  4B FC DF 6D */	bl setCollision__Q24Game12PlatInstanceFb
/* 801F6C6C 001F3BAC  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 801F6C70 001F3BB0  28 03 00 00 */	cmplwi r3, 0
/* 801F6C74 001F3BB4  41 82 00 14 */	beq .L_801F6C88
/* 801F6C78 001F3BB8  38 63 00 48 */	addi r3, r3, 0x48
/* 801F6C7C 001F3BBC  4B F2 43 55 */	bl disappear__9CarryInfoFv
/* 801F6C80 001F3BC0  38 00 00 00 */	li r0, 0
/* 801F6C84 001F3BC4  90 1E 01 F8 */	stw r0, 0x1f8(r30)
.L_801F6C88:
/* 801F6C88 001F3BC8  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801F6C8C 001F3BCC  80 9E 01 E4 */	lwz r4, 0x1e4(r30)
/* 801F6C90 001F3BD0  4B FC EF 09 */	bl delInstance__Q24Game7PlatMgrFPQ24Game12PlatInstance
/* 801F6C94 001F3BD4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 801F6C98 001F3BD8  38 80 18 1C */	li r4, 0x181c
/* 801F6C9C 001F3BDC  38 A0 00 00 */	li r5, 0
/* 801F6CA0 001F3BE0  48 14 19 91 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 801F6CA4 001F3BE4  80 7E 02 14 */	lwz r3, 0x214(r30)
/* 801F6CA8 001F3BE8  28 03 00 00 */	cmplwi r3, 0
/* 801F6CAC 001F3BEC  41 82 00 0C */	beq .L_801F6CB8
/* 801F6CB0 001F3BF0  38 80 00 01 */	li r4, 1
/* 801F6CB4 001F3BF4  4B F7 BB C1 */	bl setOpen__Q24Game8WayPointFb
.L_801F6CB8:
/* 801F6CB8 001F3BF8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801F6CBC 001F3BFC  38 80 00 30 */	li r4, 0x30
/* 801F6CC0 001F3C00  4B FF 07 21 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801F6CC4 001F3C04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F6CC8 001F3C08  40 82 00 10 */	bne .L_801F6CD8
/* 801F6CCC 001F3C0C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801F6CD0 001F3C10  38 80 00 30 */	li r4, 0x30
/* 801F6CD4 001F3C14  4B FF 06 D1 */	bl setDemoFlag__Q24Game8PlayDataFi
.L_801F6CD8:
/* 801F6CD8 001F3C18  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801F6CDC 001F3C1C  38 80 00 27 */	li r4, 0x27
/* 801F6CE0 001F3C20  4B FF 07 01 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801F6CE4 001F3C24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801F6CE8 001F3C28  40 82 01 00 */	bne .L_801F6DE8
/* 801F6CEC 001F3C2C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801F6CF0 001F3C30  38 80 00 01 */	li r4, 1
/* 801F6CF4 001F3C34  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6CF8 001F3C38  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801F6CFC 001F3C3C  7D 89 03 A6 */	mtctr r12
/* 801F6D00 001F3C40  4E 80 04 21 */	bctrl 
/* 801F6D04 001F3C44  C0 02 B8 F0 */	lfs f0, lbl_80519C50@sda21(r2)
/* 801F6D08 001F3C48  38 00 00 00 */	li r0, 0
/* 801F6D0C 001F3C4C  38 9F 01 80 */	addi r4, r31, 0x180
/* 801F6D10 001F3C50  7C 7F 1B 78 */	mr r31, r3
/* 801F6D14 001F3C54  90 81 00 14 */	stw r4, 0x14(r1)
/* 801F6D18 001F3C58  7F E4 FB 78 */	mr r4, r31
/* 801F6D1C 001F3C5C  38 61 00 08 */	addi r3, r1, 8
/* 801F6D20 001F3C60  90 01 00 18 */	stw r0, 0x18(r1)
/* 801F6D24 001F3C64  90 01 00 20 */	stw r0, 0x20(r1)
/* 801F6D28 001F3C68  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801F6D2C 001F3C6C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801F6D30 001F3C70  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801F6D34 001F3C74  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801F6D38 001F3C78  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801F6D3C 001F3C7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F6D40 001F3C80  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801F6D44 001F3C84  90 01 00 40 */	stw r0, 0x40(r1)
/* 801F6D48 001F3C88  90 01 00 28 */	stw r0, 0x28(r1)
/* 801F6D4C 001F3C8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801F6D50 001F3C90  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F6D54 001F3C94  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F6D58 001F3C98  7D 89 03 A6 */	mtctr r12
/* 801F6D5C 001F3C9C  4E 80 04 21 */	bctrl 
/* 801F6D60 001F3CA0  C0 41 00 08 */	lfs f2, 8(r1)
/* 801F6D64 001F3CA4  7F E3 FB 78 */	mr r3, r31
/* 801F6D68 001F3CA8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801F6D6C 001F3CAC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801F6D70 001F3CB0  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801F6D74 001F3CB4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801F6D78 001F3CB8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801F6D7C 001F3CBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801F6D80 001F3CC0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801F6D84 001F3CC4  7D 89 03 A6 */	mtctr r12
/* 801F6D88 001F3CC8  4E 80 04 21 */	bctrl 
/* 801F6D8C 001F3CCC  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801F6D90 001F3CD0  38 81 00 14 */	addi r4, r1, 0x14
/* 801F6D94 001F3CD4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801F6D98 001F3CD8  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801F6D9C 001F3CDC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801F6DA0 001F3CE0  48 23 5C 31 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801F6DA4 001F3CE4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801F6DA8 001F3CE8  38 80 00 27 */	li r4, 0x27
/* 801F6DAC 001F3CEC  4B FF 05 F9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801F6DB0 001F3CF0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801F6DB4 001F3CF4  38 80 00 07 */	li r4, 7
/* 801F6DB8 001F3CF8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801F6DBC 001F3CFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6DC0 001F3D00  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801F6DC4 001F3D04  7D 89 03 A6 */	mtctr r12
/* 801F6DC8 001F3D08  4E 80 04 21 */	bctrl 
/* 801F6DCC 001F3D0C  48 00 00 1C */	b .L_801F6DE8
.L_801F6DD0:
/* 801F6DD0 001F3D10  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6DD4 001F3D14  38 A0 00 00 */	li r5, 0
/* 801F6DD8 001F3D18  38 C0 00 00 */	li r6, 0
/* 801F6DDC 001F3D1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6DE0 001F3D20  7D 89 03 A6 */	mtctr r12
/* 801F6DE4 001F3D24  4E 80 04 21 */	bctrl 
.L_801F6DE8:
/* 801F6DE8 001F3D28  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F6DEC 001F3D2C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801F6DF0 001F3D30  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801F6DF4 001F3D34  7C 08 03 A6 */	mtlr r0
/* 801F6DF8 001F3D38  38 21 00 50 */	addi r1, r1, 0x50
/* 801F6DFC 001F3D3C  4E 80 00 20 */	blr 

.global onPlat__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
onPlat__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item:
/* 801F6E00 001F3D40  4E 80 00 20 */	blr 

.global init__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
init__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg:
/* 801F6E04 001F3D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6E08 001F3D48  7C 08 02 A6 */	mflr r0
/* 801F6E0C 001F3D4C  7C 83 23 78 */	mr r3, r4
/* 801F6E10 001F3D50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6E14 001F3D54  4B FF EC E9 */	bl startUpMotion__Q34Game13ItemDownFloor4ItemFv
/* 801F6E18 001F3D58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6E1C 001F3D5C  7C 08 03 A6 */	mtlr r0
/* 801F6E20 001F3D60  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6E24 001F3D64  4E 80 00 20 */	blr 

.global exec__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item
exec__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item:
/* 801F6E28 001F3D68  4E 80 00 20 */	blr 

.global cleanup__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item
cleanup__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item:
/* 801F6E2C 001F3D6C  4E 80 00 20 */	blr 

.global onKeyEvent__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
onKeyEvent__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent:
/* 801F6E30 001F3D70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6E34 001F3D74  7C 08 02 A6 */	mflr r0
/* 801F6E38 001F3D78  38 A0 00 00 */	li r5, 0
/* 801F6E3C 001F3D7C  38 C0 00 00 */	li r6, 0
/* 801F6E40 001F3D80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6E44 001F3D84  38 00 00 00 */	li r0, 0
/* 801F6E48 001F3D88  98 04 01 FC */	stb r0, 0x1fc(r4)
/* 801F6E4C 001F3D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F6E50 001F3D90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801F6E54 001F3D94  7D 89 03 A6 */	mtctr r12
/* 801F6E58 001F3D98  4E 80 04 21 */	bctrl 
/* 801F6E5C 001F3D9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6E60 001F3DA0  7C 08 03 A6 */	mtlr r0
/* 801F6E64 001F3DA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6E68 001F3DA8  4E 80 00 20 */	blr 

.global onPlat__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item
onPlat__Q34Game13ItemDownFloor7UpStateFPQ34Game13ItemDownFloor4Item:
/* 801F6E6C 001F3DAC  4E 80 00 20 */	blr 

.global generatorNewItemParm__Q34Game13ItemDownFloor3MgrFv
generatorNewItemParm__Q34Game13ItemDownFloor3MgrFv:
/* 801F6E70 001F3DB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F6E74 001F3DB4  7C 08 02 A6 */	mflr r0
/* 801F6E78 001F3DB8  38 60 00 18 */	li r3, 0x18
/* 801F6E7C 001F3DBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F6E80 001F3DC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F6E84 001F3DC4  4B E2 D0 21 */	bl __nw__FUl
/* 801F6E88 001F3DC8  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F6E8C 001F3DCC  41 82 00 48 */	beq .L_801F6ED4
/* 801F6E90 001F3DD0  3C 60 80 4B */	lis r3, __vt__Q24Game11GenItemParm@ha
/* 801F6E94 001F3DD4  3C 80 80 4C */	lis r4, __vt__16GenDownFloorParm@ha
/* 801F6E98 001F3DD8  38 03 26 24 */	addi r0, r3, __vt__Q24Game11GenItemParm@l
/* 801F6E9C 001F3DDC  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F6EA0 001F3DE0  90 1F 00 00 */	stw r0, 0(r31)
/* 801F6EA4 001F3DE4  38 04 C4 8C */	addi r0, r4, __vt__16GenDownFloorParm@l
/* 801F6EA8 001F3DE8  90 1F 00 00 */	stw r0, 0(r31)
/* 801F6EAC 001F3DEC  48 21 C3 C5 */	bl __ct__4ID32Fv
/* 801F6EB0 001F3DF0  38 00 00 0A */	li r0, 0xa
/* 801F6EB4 001F3DF4  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801F6EB8 001F3DF8  B0 1F 00 04 */	sth r0, 4(r31)
/* 801F6EBC 001F3DFC  38 00 00 00 */	li r0, 0
/* 801F6EC0 001F3E00  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F6EC4 001F3E04  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801F6EC8 001F3E08  B0 1F 00 06 */	sth r0, 6(r31)
/* 801F6ECC 001F3E0C  B0 1F 00 08 */	sth r0, 8(r31)
/* 801F6ED0 001F3E10  48 21 C4 09 */	bl setID__4ID32FUl
.L_801F6ED4:
/* 801F6ED4 001F3E14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F6ED8 001F3E18  7F E3 FB 78 */	mr r3, r31
/* 801F6EDC 001F3E1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F6EE0 001F3E20  7C 08 03 A6 */	mtlr r0
/* 801F6EE4 001F3E24  38 21 00 10 */	addi r1, r1, 0x10
/* 801F6EE8 001F3E28  4E 80 00 20 */	blr 

.global generatorWrite__Q34Game13ItemDownFloor3MgrFR6StreamPQ24Game11GenItemParm
generatorWrite__Q34Game13ItemDownFloor3MgrFR6StreamPQ24Game11GenItemParm:
/* 801F6EEC 001F3E2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F6EF0 001F3E30  7C 08 02 A6 */	mflr r0
/* 801F6EF4 001F3E34  3C 60 80 48 */	lis r3, lbl_80481800@ha
/* 801F6EF8 001F3E38  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F6EFC 001F3E3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F6F00 001F3E40  3B E3 18 00 */	addi r31, r3, lbl_80481800@l
/* 801F6F04 001F3E44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F6F08 001F3E48  7C BE 2B 79 */	or. r30, r5, r5
/* 801F6F0C 001F3E4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F6F10 001F3E50  7C 9D 23 78 */	mr r29, r4
/* 801F6F14 001F3E54  40 82 00 18 */	bne .L_801F6F2C
/* 801F6F18 001F3E58  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801F6F1C 001F3E5C  38 BF 00 74 */	addi r5, r31, 0x74
/* 801F6F20 001F3E60  38 80 04 DE */	li r4, 0x4de
/* 801F6F24 001F3E64  4C C6 31 82 */	crclr 6
/* 801F6F28 001F3E68  4B E3 37 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F6F2C:
/* 801F6F2C 001F3E6C  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801F6F30 001F3E70  7F A3 EB 78 */	mr r3, r29
/* 801F6F34 001F3E74  48 21 D5 01 */	bl textWriteTab__6StreamFi
/* 801F6F38 001F3E78  A8 9E 00 04 */	lha r4, 4(r30)
/* 801F6F3C 001F3E7C  7F A3 EB 78 */	mr r3, r29
/* 801F6F40 001F3E80  48 21 E7 F1 */	bl writeShort__6StreamFs
/* 801F6F44 001F3E84  7F A3 EB 78 */	mr r3, r29
/* 801F6F48 001F3E88  38 9F 01 8C */	addi r4, r31, 0x18c
/* 801F6F4C 001F3E8C  4C C6 31 82 */	crclr 6
/* 801F6F50 001F3E90  48 21 D2 8D */	bl textWriteText__6StreamFPce
/* 801F6F54 001F3E94  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801F6F58 001F3E98  7F A3 EB 78 */	mr r3, r29
/* 801F6F5C 001F3E9C  48 21 D4 D9 */	bl textWriteTab__6StreamFi
/* 801F6F60 001F3EA0  A0 1E 00 06 */	lhz r0, 6(r30)
/* 801F6F64 001F3EA4  7F A3 EB 78 */	mr r3, r29
/* 801F6F68 001F3EA8  7C 04 07 34 */	extsh r4, r0
/* 801F6F6C 001F3EAC  48 21 E7 C5 */	bl writeShort__6StreamFs
/* 801F6F70 001F3EB0  7F A3 EB 78 */	mr r3, r29
/* 801F6F74 001F3EB4  38 9F 01 9C */	addi r4, r31, 0x19c
/* 801F6F78 001F3EB8  4C C6 31 82 */	crclr 6
/* 801F6F7C 001F3EBC  48 21 D2 61 */	bl textWriteText__6StreamFPce
/* 801F6F80 001F3EC0  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801F6F84 001F3EC4  7F A3 EB 78 */	mr r3, r29
/* 801F6F88 001F3EC8  48 21 D4 AD */	bl textWriteTab__6StreamFi
/* 801F6F8C 001F3ECC  A8 1E 00 08 */	lha r0, 8(r30)
/* 801F6F90 001F3ED0  7F A3 EB 78 */	mr r3, r29
/* 801F6F94 001F3ED4  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 801F6F98 001F3ED8  48 21 E6 D9 */	bl writeByte__6StreamFUc
/* 801F6F9C 001F3EDC  7F A3 EB 78 */	mr r3, r29
/* 801F6FA0 001F3EE0  38 9F 01 A8 */	addi r4, r31, 0x1a8
/* 801F6FA4 001F3EE4  4C C6 31 82 */	crclr 6
/* 801F6FA8 001F3EE8  48 21 D2 35 */	bl textWriteText__6StreamFPce
/* 801F6FAC 001F3EEC  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801F6FB0 001F3EF0  7F A3 EB 78 */	mr r3, r29
/* 801F6FB4 001F3EF4  48 21 D4 81 */	bl textWriteTab__6StreamFi
/* 801F6FB8 001F3EF8  7F A4 EB 78 */	mr r4, r29
/* 801F6FBC 001F3EFC  38 7E 00 0C */	addi r3, r30, 0xc
/* 801F6FC0 001F3F00  48 21 C4 A1 */	bl write__4ID32FR6Stream
/* 801F6FC4 001F3F04  7F A3 EB 78 */	mr r3, r29
/* 801F6FC8 001F3F08  38 82 B9 14 */	addi r4, r2, lbl_80519C74@sda21
/* 801F6FCC 001F3F0C  4C C6 31 82 */	crclr 6
/* 801F6FD0 001F3F10  48 21 D2 0D */	bl textWriteText__6StreamFPce
/* 801F6FD4 001F3F14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F6FD8 001F3F18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F6FDC 001F3F1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F6FE0 001F3F20  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F6FE4 001F3F24  7C 08 03 A6 */	mtlr r0
/* 801F6FE8 001F3F28  38 21 00 20 */	addi r1, r1, 0x20
/* 801F6FEC 001F3F2C  4E 80 00 20 */	blr 

.global generatorRead__Q34Game13ItemDownFloor3MgrFR6StreamPQ24Game11GenItemParmUl
generatorRead__Q34Game13ItemDownFloor3MgrFR6StreamPQ24Game11GenItemParmUl:
/* 801F6FF0 001F3F30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F6FF4 001F3F34  7C 08 02 A6 */	mflr r0
/* 801F6FF8 001F3F38  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F6FFC 001F3F3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F7000 001F3F40  7C DF 33 78 */	mr r31, r6
/* 801F7004 001F3F44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F7008 001F3F48  7C BE 2B 79 */	or. r30, r5, r5
/* 801F700C 001F3F4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F7010 001F3F50  7C 9D 23 78 */	mr r29, r4
/* 801F7014 001F3F54  40 82 00 20 */	bne .L_801F7034
/* 801F7018 001F3F58  3C 60 80 48 */	lis r3, lbl_8048181C@ha
/* 801F701C 001F3F5C  3C A0 80 48 */	lis r5, lbl_80481874@ha
/* 801F7020 001F3F60  38 63 18 1C */	addi r3, r3, lbl_8048181C@l
/* 801F7024 001F3F64  38 80 04 F4 */	li r4, 0x4f4
/* 801F7028 001F3F68  38 A5 18 74 */	addi r5, r5, lbl_80481874@l
/* 801F702C 001F3F6C  4C C6 31 82 */	crclr 6
/* 801F7030 001F3F70  4B E3 36 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F7034:
/* 801F7034 001F3F74  7F A3 EB 78 */	mr r3, r29
/* 801F7038 001F3F78  48 21 D7 2D */	bl readShort__6StreamFv
/* 801F703C 001F3F7C  3C 80 30 30 */	lis r4, 0x30303031@ha
/* 801F7040 001F3F80  B0 7E 00 04 */	sth r3, 4(r30)
/* 801F7044 001F3F84  38 04 30 31 */	addi r0, r4, 0x30303031@l
/* 801F7048 001F3F88  7C 1F 00 40 */	cmplw r31, r0
/* 801F704C 001F3F8C  41 80 00 14 */	blt .L_801F7060
/* 801F7050 001F3F90  7F A3 EB 78 */	mr r3, r29
/* 801F7054 001F3F94  48 21 D7 11 */	bl readShort__6StreamFv
/* 801F7058 001F3F98  B0 7E 00 06 */	sth r3, 6(r30)
/* 801F705C 001F3F9C  48 00 00 0C */	b .L_801F7068
.L_801F7060:
/* 801F7060 001F3FA0  38 00 00 00 */	li r0, 0
/* 801F7064 001F3FA4  B0 1E 00 06 */	sth r0, 6(r30)
.L_801F7068:
/* 801F7068 001F3FA8  3C 60 30 30 */	lis r3, 0x30303032@ha
/* 801F706C 001F3FAC  38 03 30 32 */	addi r0, r3, 0x30303032@l
/* 801F7070 001F3FB0  7C 1F 00 40 */	cmplw r31, r0
/* 801F7074 001F3FB4  41 80 00 24 */	blt .L_801F7098
/* 801F7078 001F3FB8  7F A3 EB 78 */	mr r3, r29
/* 801F707C 001F3FBC  48 21 D4 21 */	bl readByte__6StreamFv
/* 801F7080 001F3FC0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801F7084 001F3FC4  7F A4 EB 78 */	mr r4, r29
/* 801F7088 001F3FC8  B0 1E 00 08 */	sth r0, 8(r30)
/* 801F708C 001F3FCC  38 7E 00 0C */	addi r3, r30, 0xc
/* 801F7090 001F3FD0  48 21 C4 61 */	bl read__4ID32FR6Stream
/* 801F7094 001F3FD4  48 00 00 0C */	b .L_801F70A0
.L_801F7098:
/* 801F7098 001F3FD8  38 00 00 00 */	li r0, 0
/* 801F709C 001F3FDC  B0 1E 00 08 */	sth r0, 8(r30)
.L_801F70A0:
/* 801F70A0 001F3FE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F70A4 001F3FE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F70A8 001F3FE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F70AC 001F3FEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F70B0 001F3FF0  7C 08 03 A6 */	mtlr r0
/* 801F70B4 001F3FF4  38 21 00 20 */	addi r1, r1, 0x20
/* 801F70B8 001F3FF8  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game13ItemDownFloor3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
"generatorBirth__Q34Game13ItemDownFloor3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm":
/* 801F70BC 001F3FFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F70C0 001F4000  7C 08 02 A6 */	mflr r0
/* 801F70C4 001F4004  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F70C8 001F4008  BF 41 00 08 */	stmw r26, 8(r1)
/* 801F70CC 001F400C  7C DD 33 79 */	or. r29, r6, r6
/* 801F70D0 001F4010  3C C0 80 48 */	lis r6, lbl_80481800@ha
/* 801F70D4 001F4014  7C 7A 1B 78 */	mr r26, r3
/* 801F70D8 001F4018  7C 9B 23 78 */	mr r27, r4
/* 801F70DC 001F401C  7C BC 2B 78 */	mr r28, r5
/* 801F70E0 001F4020  3B E6 18 00 */	addi r31, r6, lbl_80481800@l
/* 801F70E4 001F4024  40 82 00 18 */	bne .L_801F70FC
/* 801F70E8 001F4028  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801F70EC 001F402C  38 BF 00 74 */	addi r5, r31, 0x74
/* 801F70F0 001F4030  38 80 05 06 */	li r4, 0x506
/* 801F70F4 001F4034  4C C6 31 82 */	crclr 6
/* 801F70F8 001F4038  4B E3 35 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F70FC:
/* 801F70FC 001F403C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F7100 001F4040  38 9F 00 8C */	addi r4, r31, 0x8c
/* 801F7104 001F4044  38 A0 00 00 */	li r5, 0
/* 801F7108 001F4048  48 22 C2 55 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F710C 001F404C  38 60 02 2C */	li r3, 0x22c
/* 801F7110 001F4050  4B E2 CD 95 */	bl __nw__FUl
/* 801F7114 001F4054  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F7118 001F4058  41 82 01 0C */	beq .L_801F7224
/* 801F711C 001F405C  38 80 04 0F */	li r4, 0x40f
/* 801F7120 001F4060  4B FD 4E C9 */	bl __ct__Q24Game8BaseItemFi
/* 801F7124 001F4064  3C 60 80 4C */	lis r3, "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"@ha
/* 801F7128 001F4068  38 00 00 00 */	li r0, 0
/* 801F712C 001F406C  38 83 C9 A4 */	addi r4, r3, "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"@l
/* 801F7130 001F4070  38 60 00 1C */	li r3, 0x1c
/* 801F7134 001F4074  90 9E 00 00 */	stw r4, 0(r30)
/* 801F7138 001F4078  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F713C 001F407C  90 9E 01 78 */	stw r4, 0x178(r30)
/* 801F7140 001F4080  90 1E 01 D8 */	stw r0, 0x1d8(r30)
/* 801F7144 001F4084  90 1E 01 DC */	stw r0, 0x1dc(r30)
/* 801F7148 001F4088  4B E2 CD 5D */	bl __nw__FUl
/* 801F714C 001F408C  28 03 00 00 */	cmplwi r3, 0
/* 801F7150 001F4090  41 82 00 30 */	beq .L_801F7180
/* 801F7154 001F4094  3C 80 80 4C */	lis r4, "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"@ha
/* 801F7158 001F4098  3C A0 80 4C */	lis r5, "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"@ha
/* 801F715C 001F409C  38 04 C9 8C */	addi r0, r4, "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"@l
/* 801F7160 001F40A0  3C 80 80 4C */	lis r4, __vt__Q34Game13ItemDownFloor3FSM@ha
/* 801F7164 001F40A4  90 03 00 00 */	stw r0, 0(r3)
/* 801F7168 001F40A8  38 C0 FF FF */	li r6, -1
/* 801F716C 001F40AC  38 A5 C9 74 */	addi r5, r5, "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"@l
/* 801F7170 001F40B0  38 04 CC 8C */	addi r0, r4, __vt__Q34Game13ItemDownFloor3FSM@l
/* 801F7174 001F40B4  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F7178 001F40B8  90 A3 00 00 */	stw r5, 0(r3)
/* 801F717C 001F40BC  90 03 00 00 */	stw r0, 0(r3)
.L_801F7180:
/* 801F7180 001F40C0  90 7E 01 D8 */	stw r3, 0x1d8(r30)
/* 801F7184 001F40C4  7F C4 F3 78 */	mr r4, r30
/* 801F7188 001F40C8  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801F718C 001F40CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7190 001F40D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F7194 001F40D4  7D 89 03 A6 */	mtctr r12
/* 801F7198 001F40D8  4E 80 04 21 */	bctrl 
/* 801F719C 001F40DC  3C 60 80 4B */	lis r3, __vt__14CarryInfoOwner@ha
/* 801F71A0 001F40E0  3C 80 80 4C */	lis r4, __vt__Q34Game13ItemDownFloor4Item@ha
/* 801F71A4 001F40E4  38 03 C3 D8 */	addi r0, r3, __vt__14CarryInfoOwner@l
/* 801F71A8 001F40E8  38 7E 02 08 */	addi r3, r30, 0x208
/* 801F71AC 001F40EC  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 801F71B0 001F40F0  38 A4 C7 40 */	addi r5, r4, __vt__Q34Game13ItemDownFloor4Item@l
/* 801F71B4 001F40F4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 801F71B8 001F40F8  90 BE 00 00 */	stw r5, 0(r30)
/* 801F71BC 001F40FC  38 05 02 24 */	addi r0, r5, 0x224
/* 801F71C0 001F4100  90 9E 01 78 */	stw r4, 0x178(r30)
/* 801F71C4 001F4104  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 801F71C8 001F4108  48 03 7A 05 */	bl __ct__Q24Game11TSoundEventFv
/* 801F71CC 001F410C  38 7E 02 1C */	addi r3, r30, 0x21c
/* 801F71D0 001F4110  48 21 C0 A1 */	bl __ct__4ID32Fv
/* 801F71D4 001F4114  38 60 00 08 */	li r3, 8
/* 801F71D8 001F4118  4B E2 CC CD */	bl __nw__FUl
/* 801F71DC 001F411C  7C 60 1B 79 */	or. r0, r3, r3
/* 801F71E0 001F4120  41 82 00 0C */	beq .L_801F71EC
/* 801F71E4 001F4124  4B F3 CE 79 */	bl __ct__8CollTreeFv
/* 801F71E8 001F4128  7C 60 1B 78 */	mr r0, r3
.L_801F71EC:
/* 801F71EC 001F412C  90 1E 01 14 */	stw r0, 0x114(r30)
/* 801F71F0 001F4130  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801F71F4 001F4134  C0 02 B8 D8 */	lfs f0, lbl_80519C38@sda21(r2)
/* 801F71F8 001F4138  38 00 00 00 */	li r0, 0
/* 801F71FC 001F413C  38 7E 02 1C */	addi r3, r30, 0x21c
/* 801F7200 001F4140  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801F7204 001F4144  D0 1E 01 D0 */	stfs f0, 0x1d0(r30)
/* 801F7208 001F4148  98 1E 01 FC */	stb r0, 0x1fc(r30)
/* 801F720C 001F414C  98 1E 02 28 */	stb r0, 0x228(r30)
/* 801F7210 001F4150  90 1E 02 18 */	stw r0, 0x218(r30)
/* 801F7214 001F4154  48 21 C0 C5 */	bl setID__4ID32FUl
/* 801F7218 001F4158  38 00 00 00 */	li r0, 0
/* 801F721C 001F415C  90 1E 02 14 */	stw r0, 0x214(r30)
/* 801F7220 001F4160  98 1E 02 29 */	stb r0, 0x229(r30)
.L_801F7224:
/* 801F7224 001F4164  7F 43 D3 78 */	mr r3, r26
/* 801F7228 001F4168  7F C4 F3 78 */	mr r4, r30
/* 801F722C 001F416C  4B FD 65 FD */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801F7230 001F4170  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F7234 001F4174  38 9F 00 8C */	addi r4, r31, 0x8c
/* 801F7238 001F4178  48 22 C1 2D */	bl heapStatusEnd__6SystemFPc
/* 801F723C 001F417C  A8 1D 00 04 */	lha r0, 4(r29)
/* 801F7240 001F4180  38 7E 02 1C */	addi r3, r30, 0x21c
/* 801F7244 001F4184  90 1E 01 E8 */	stw r0, 0x1e8(r30)
/* 801F7248 001F4188  A0 1D 00 06 */	lhz r0, 6(r29)
/* 801F724C 001F418C  B0 1E 02 04 */	sth r0, 0x204(r30)
/* 801F7250 001F4190  A8 1D 00 08 */	lha r0, 8(r29)
/* 801F7254 001F4194  98 1E 02 28 */	stb r0, 0x228(r30)
/* 801F7258 001F4198  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 801F725C 001F419C  48 21 C0 7D */	bl setID__4ID32FUl
/* 801F7260 001F41A0  7F C3 F3 78 */	mr r3, r30
/* 801F7264 001F41A4  38 80 00 00 */	li r4, 0
/* 801F7268 001F41A8  4B F4 3D 61 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801F726C 001F41AC  C0 3C 00 04 */	lfs f1, 4(r28)
/* 801F7270 001F41B0  48 21 A9 61 */	bl roundAng__Ff
/* 801F7274 001F41B4  D0 3E 02 00 */	stfs f1, 0x200(r30)
/* 801F7278 001F41B8  7F C3 F3 78 */	mr r3, r30
/* 801F727C 001F41BC  7F 64 DB 78 */	mr r4, r27
/* 801F7280 001F41C0  38 A0 00 00 */	li r5, 0
/* 801F7284 001F41C4  4B F4 3F 25 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801F7288 001F41C8  7F C3 F3 78 */	mr r3, r30
/* 801F728C 001F41CC  BB 41 00 08 */	lmw r26, 8(r1)
/* 801F7290 001F41D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F7294 001F41D4  7C 08 03 A6 */	mtlr r0
/* 801F7298 001F41D8  38 21 00 20 */	addi r1, r1, 0x20
/* 801F729C 001F41DC  4E 80 00 20 */	blr 

.global __dt__Q34Game13ItemDownFloor3MgrFv
__dt__Q34Game13ItemDownFloor3MgrFv: # weak function
/* 801F72A0 001F41E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F72A4 001F41E4  7C 08 02 A6 */	mflr r0
/* 801F72A8 001F41E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F72AC 001F41EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F72B0 001F41F0  7C 9F 23 78 */	mr r31, r4
/* 801F72B4 001F41F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801F72B8 001F41F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F72BC 001F41FC  41 82 00 FC */	beq .L_801F73B8
/* 801F72C0 001F4200  3C 60 80 4C */	lis r3, __vt__Q34Game13ItemDownFloor3Mgr@ha
/* 801F72C4 001F4204  38 63 C5 78 */	addi r3, r3, __vt__Q34Game13ItemDownFloor3Mgr@l
/* 801F72C8 001F4208  90 7E 00 00 */	stw r3, 0(r30)
/* 801F72CC 001F420C  38 03 00 74 */	addi r0, r3, 0x74
/* 801F72D0 001F4210  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F72D4 001F4214  41 82 00 D4 */	beq .L_801F73A8
/* 801F72D8 001F4218  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801F72DC 001F421C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F72E0 001F4220  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801F72E4 001F4224  90 7E 00 00 */	stw r3, 0(r30)
/* 801F72E8 001F4228  38 03 00 74 */	addi r0, r3, 0x74
/* 801F72EC 001F422C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F72F0 001F4230  41 82 00 84 */	beq .L_801F7374
/* 801F72F4 001F4234  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801F72F8 001F4238  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801F72FC 001F423C  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801F7300 001F4240  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801F7304 001F4244  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F7308 001F4248  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F730C 001F424C  41 82 00 18 */	beq .L_801F7324
/* 801F7310 001F4250  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801F7314 001F4254  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801F7318 001F4258  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801F731C 001F425C  38 80 00 00 */	li r4, 0
/* 801F7320 001F4260  48 21 A2 69 */	bl __dt__5CNodeFv
.L_801F7324:
/* 801F7324 001F4264  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F7328 001F4268  41 82 00 4C */	beq .L_801F7374
/* 801F732C 001F426C  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801F7330 001F4270  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F7334 001F4274  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801F7338 001F4278  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801F733C 001F427C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F7340 001F4280  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F7344 001F4284  41 82 00 30 */	beq .L_801F7374
/* 801F7348 001F4288  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F734C 001F428C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F7350 001F4290  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F7354 001F4294  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F7358 001F4298  41 82 00 1C */	beq .L_801F7374
/* 801F735C 001F429C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F7360 001F42A0  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801F7364 001F42A4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F7368 001F42A8  38 80 00 00 */	li r4, 0
/* 801F736C 001F42AC  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F7370 001F42B0  48 21 A2 19 */	bl __dt__5CNodeFv
.L_801F7374:
/* 801F7374 001F42B4  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F7378 001F42B8  41 82 00 30 */	beq .L_801F73A8
/* 801F737C 001F42BC  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F7380 001F42C0  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F7384 001F42C4  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F7388 001F42C8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F738C 001F42CC  41 82 00 1C */	beq .L_801F73A8
/* 801F7390 001F42D0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F7394 001F42D4  38 7E 00 30 */	addi r3, r30, 0x30
/* 801F7398 001F42D8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F739C 001F42DC  38 80 00 00 */	li r4, 0
/* 801F73A0 001F42E0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F73A4 001F42E4  48 21 A1 E5 */	bl __dt__5CNodeFv
.L_801F73A8:
/* 801F73A8 001F42E8  7F E0 07 35 */	extsh. r0, r31
/* 801F73AC 001F42EC  40 81 00 0C */	ble .L_801F73B8
/* 801F73B0 001F42F0  7F C3 F3 78 */	mr r3, r30
/* 801F73B4 001F42F4  4B E2 CD 01 */	bl __dl__FPv
.L_801F73B8:
/* 801F73B8 001F42F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F73BC 001F42FC  7F C3 F3 78 */	mr r3, r30
/* 801F73C0 001F4300  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F73C4 001F4304  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F73C8 001F4308  7C 08 03 A6 */	mtlr r0
/* 801F73CC 001F430C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F73D0 001F4310  4E 80 00 20 */	blr 

.global doNew__Q34Game13ItemDownFloor3MgrFv
doNew__Q34Game13ItemDownFloor3MgrFv:
/* 801F73D4 001F4314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F73D8 001F4318  7C 08 02 A6 */	mflr r0
/* 801F73DC 001F431C  38 60 02 2C */	li r3, 0x22c
/* 801F73E0 001F4320  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F73E4 001F4324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F73E8 001F4328  4B E2 CA BD */	bl __nw__FUl
/* 801F73EC 001F432C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F73F0 001F4330  41 82 01 0C */	beq .L_801F74FC
/* 801F73F4 001F4334  38 80 04 0F */	li r4, 0x40f
/* 801F73F8 001F4338  4B FD 4B F1 */	bl __ct__Q24Game8BaseItemFi
/* 801F73FC 001F433C  3C 60 80 4C */	lis r3, "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"@ha
/* 801F7400 001F4340  38 00 00 00 */	li r0, 0
/* 801F7404 001F4344  38 83 C9 A4 */	addi r4, r3, "__vt__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>"@l
/* 801F7408 001F4348  38 60 00 1C */	li r3, 0x1c
/* 801F740C 001F434C  90 9F 00 00 */	stw r4, 0(r31)
/* 801F7410 001F4350  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F7414 001F4354  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F7418 001F4358  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F741C 001F435C  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F7420 001F4360  4B E2 CA 85 */	bl __nw__FUl
/* 801F7424 001F4364  28 03 00 00 */	cmplwi r3, 0
/* 801F7428 001F4368  41 82 00 30 */	beq .L_801F7458
/* 801F742C 001F436C  3C 80 80 4C */	lis r4, "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"@ha
/* 801F7430 001F4370  3C A0 80 4C */	lis r5, "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"@ha
/* 801F7434 001F4374  38 04 C9 8C */	addi r0, r4, "__vt__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>"@l
/* 801F7438 001F4378  3C 80 80 4C */	lis r4, __vt__Q34Game13ItemDownFloor3FSM@ha
/* 801F743C 001F437C  90 03 00 00 */	stw r0, 0(r3)
/* 801F7440 001F4380  38 C0 FF FF */	li r6, -1
/* 801F7444 001F4384  38 A5 C9 74 */	addi r5, r5, "__vt__Q24Game36ItemFSM<Q34Game13ItemDownFloor4Item>"@l
/* 801F7448 001F4388  38 04 CC 8C */	addi r0, r4, __vt__Q34Game13ItemDownFloor3FSM@l
/* 801F744C 001F438C  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F7450 001F4390  90 A3 00 00 */	stw r5, 0(r3)
/* 801F7454 001F4394  90 03 00 00 */	stw r0, 0(r3)
.L_801F7458:
/* 801F7458 001F4398  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F745C 001F439C  7F E4 FB 78 */	mr r4, r31
/* 801F7460 001F43A0  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F7464 001F43A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7468 001F43A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F746C 001F43AC  7D 89 03 A6 */	mtctr r12
/* 801F7470 001F43B0  4E 80 04 21 */	bctrl 
/* 801F7474 001F43B4  3C 60 80 4B */	lis r3, __vt__14CarryInfoOwner@ha
/* 801F7478 001F43B8  3C 80 80 4C */	lis r4, __vt__Q34Game13ItemDownFloor4Item@ha
/* 801F747C 001F43BC  38 03 C3 D8 */	addi r0, r3, __vt__14CarryInfoOwner@l
/* 801F7480 001F43C0  38 7F 02 08 */	addi r3, r31, 0x208
/* 801F7484 001F43C4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801F7488 001F43C8  38 A4 C7 40 */	addi r5, r4, __vt__Q34Game13ItemDownFloor4Item@l
/* 801F748C 001F43CC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 801F7490 001F43D0  90 BF 00 00 */	stw r5, 0(r31)
/* 801F7494 001F43D4  38 05 02 24 */	addi r0, r5, 0x224
/* 801F7498 001F43D8  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F749C 001F43DC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801F74A0 001F43E0  48 03 77 2D */	bl __ct__Q24Game11TSoundEventFv
/* 801F74A4 001F43E4  38 7F 02 1C */	addi r3, r31, 0x21c
/* 801F74A8 001F43E8  48 21 BD C9 */	bl __ct__4ID32Fv
/* 801F74AC 001F43EC  38 60 00 08 */	li r3, 8
/* 801F74B0 001F43F0  4B E2 C9 F5 */	bl __nw__FUl
/* 801F74B4 001F43F4  7C 60 1B 79 */	or. r0, r3, r3
/* 801F74B8 001F43F8  41 82 00 0C */	beq .L_801F74C4
/* 801F74BC 001F43FC  4B F3 CB A1 */	bl __ct__8CollTreeFv
/* 801F74C0 001F4400  7C 60 1B 78 */	mr r0, r3
.L_801F74C4:
/* 801F74C4 001F4404  90 1F 01 14 */	stw r0, 0x114(r31)
/* 801F74C8 001F4408  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801F74CC 001F440C  C0 02 B8 D8 */	lfs f0, lbl_80519C38@sda21(r2)
/* 801F74D0 001F4410  38 00 00 00 */	li r0, 0
/* 801F74D4 001F4414  38 7F 02 1C */	addi r3, r31, 0x21c
/* 801F74D8 001F4418  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801F74DC 001F441C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801F74E0 001F4420  98 1F 01 FC */	stb r0, 0x1fc(r31)
/* 801F74E4 001F4424  98 1F 02 28 */	stb r0, 0x228(r31)
/* 801F74E8 001F4428  90 1F 02 18 */	stw r0, 0x218(r31)
/* 801F74EC 001F442C  48 21 BD ED */	bl setID__4ID32FUl
/* 801F74F0 001F4430  38 00 00 00 */	li r0, 0
/* 801F74F4 001F4434  90 1F 02 14 */	stw r0, 0x214(r31)
/* 801F74F8 001F4438  98 1F 02 29 */	stb r0, 0x229(r31)
.L_801F74FC:
/* 801F74FC 001F443C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7500 001F4440  7F E3 FB 78 */	mr r3, r31
/* 801F7504 001F4444  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F7508 001F4448  7C 08 03 A6 */	mtlr r0
/* 801F750C 001F444C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7510 001F4450  4E 80 00 20 */	blr 

.global generatorGetID__Q34Game13ItemDownFloor3MgrFv
generatorGetID__Q34Game13ItemDownFloor3MgrFv: # weak function
/* 801F7514 001F4454  3C 60 64 77 */	lis r3, 0x6477666C@ha
/* 801F7518 001F4458  38 63 66 6C */	addi r3, r3, 0x6477666C@l
/* 801F751C 001F445C  4E 80 00 20 */	blr 

.global generatorLocalVersion__Q34Game13ItemDownFloor3MgrFv
generatorLocalVersion__Q34Game13ItemDownFloor3MgrFv: # weak function
/* 801F7520 001F4460  3C 60 30 30 */	lis r3, 0x30303032@ha
/* 801F7524 001F4464  38 63 30 32 */	addi r3, r3, 0x30303032@l
/* 801F7528 001F4468  4E 80 00 20 */	blr 

.global makeTrMatrix__Q34Game13ItemDownFloor4ItemFv
makeTrMatrix__Q34Game13ItemDownFloor4ItemFv:
/* 801F752C 001F446C  4E 80 00 20 */	blr 

.global getFaceDir__Q34Game13ItemDownFloor4ItemFv
getFaceDir__Q34Game13ItemDownFloor4ItemFv:
/* 801F7530 001F4470  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 801F7534 001F4474  4E 80 00 20 */	blr 

.global getCreatureName__Q34Game13ItemDownFloor4ItemFv
getCreatureName__Q34Game13ItemDownFloor4ItemFv:
/* 801F7538 001F4478  3C 60 80 48 */	lis r3, lbl_804819B8@ha
/* 801F753C 001F447C  38 63 19 B8 */	addi r3, r3, lbl_804819B8@l
/* 801F7540 001F4480  4E 80 00 20 */	blr 

.global "doAI__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>Fv"
"doAI__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>Fv":
/* 801F7544 001F4484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7548 001F4488  7C 08 02 A6 */	mflr r0
/* 801F754C 001F448C  7C 64 1B 78 */	mr r4, r3
/* 801F7550 001F4490  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7554 001F4494  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F7558 001F4498  81 83 00 00 */	lwz r12, 0(r3)
/* 801F755C 001F449C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F7560 001F44A0  7D 89 03 A6 */	mtctr r12
/* 801F7564 001F44A4  4E 80 04 21 */	bctrl 
/* 801F7568 001F44A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F756C 001F44AC  7C 08 03 A6 */	mtlr r0
/* 801F7570 001F44B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7574 001F44B4  4E 80 00 20 */	blr 

.global init__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
init__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg:
/* 801F7578 001F44B8  4E 80 00 20 */	blr 

.global exec__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item
exec__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item:
/* 801F757C 001F44BC  4E 80 00 20 */	blr 

.global cleanup__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item
cleanup__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item:
/* 801F7580 001F44C0  4E 80 00 20 */	blr 

.global onPlat__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item
onPlat__Q34Game13ItemDownFloor9DeadStateFPQ34Game13ItemDownFloor4Item:
/* 801F7584 001F44C4  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent":
/* 801F7588 001F44C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F758C 001F44CC  7C 08 02 A6 */	mflr r0
/* 801F7590 001F44D0  7C 66 1B 78 */	mr r6, r3
/* 801F7594 001F44D4  7C 85 23 78 */	mr r5, r4
/* 801F7598 001F44D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F759C 001F44DC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F75A0 001F44E0  28 03 00 00 */	cmplwi r3, 0
/* 801F75A4 001F44E4  41 82 00 18 */	beq .L_801F75BC
/* 801F75A8 001F44E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F75AC 001F44EC  7C C4 33 78 */	mr r4, r6
/* 801F75B0 001F44F0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801F75B4 001F44F4  7D 89 03 A6 */	mtctr r12
/* 801F75B8 001F44F8  4E 80 04 21 */	bctrl 
.L_801F75BC:
/* 801F75BC 001F44FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F75C0 001F4500  7C 08 03 A6 */	mtlr r0
/* 801F75C4 001F4504  38 21 00 10 */	addi r1, r1, 0x10
/* 801F75C8 001F4508  4E 80 00 20 */	blr 

.global "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
"onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf":
/* 801F75CC 001F450C  4E 80 00 20 */	blr 

.global "onKeyEvent__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent"
"onKeyEvent__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent":
/* 801F75D0 001F4510  4E 80 00 20 */	blr 

.global "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
"onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle":
/* 801F75D4 001F4514  4E 80 00 20 */	blr 

.global "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
"onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent":
/* 801F75D8 001F4518  4E 80 00 20 */	blr 

.global "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
"onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent":
/* 801F75DC 001F451C  4E 80 00 20 */	blr 

.global "init__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg"
"init__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg":
/* 801F75E0 001F4520  4E 80 00 20 */	blr 

.global "exec__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
"exec__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item":
/* 801F75E4 001F4524  4E 80 00 20 */	blr 

.global "cleanup__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
"cleanup__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item":
/* 801F75E8 001F4528  4E 80 00 20 */	blr 

.global "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
"resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item":
/* 801F75EC 001F452C  4E 80 00 20 */	blr 

.global "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
"restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item":
/* 801F75F0 001F4530  4E 80 00 20 */	blr 

.global "init__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
"init__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item":
/* 801F75F4 001F4534  4E 80 00 20 */	blr 

.global "exec__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
"exec__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item":
/* 801F75F8 001F4538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F75FC 001F453C  7C 08 02 A6 */	mflr r0
/* 801F7600 001F4540  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7604 001F4544  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801F7608 001F4548  28 03 00 00 */	cmplwi r3, 0
/* 801F760C 001F454C  41 82 00 14 */	beq .L_801F7620
/* 801F7610 001F4550  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7614 001F4554  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F7618 001F4558  7D 89 03 A6 */	mtctr r12
/* 801F761C 001F455C  4E 80 04 21 */	bctrl 
.L_801F7620:
/* 801F7620 001F4560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7624 001F4564  7C 08 03 A6 */	mtlr r0
/* 801F7628 001F4568  38 21 00 10 */	addi r1, r1, 0x10
/* 801F762C 001F456C  4E 80 00 20 */	blr 

.global "create__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>Fi"
"create__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>Fi":
/* 801F7630 001F4570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7634 001F4574  7C 08 02 A6 */	mflr r0
/* 801F7638 001F4578  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F763C 001F457C  38 00 00 00 */	li r0, 0
/* 801F7640 001F4580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F7644 001F4584  7C 7F 1B 78 */	mr r31, r3
/* 801F7648 001F4588  90 83 00 0C */	stw r4, 0xc(r3)
/* 801F764C 001F458C  90 03 00 08 */	stw r0, 8(r3)
/* 801F7650 001F4590  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F7654 001F4594  54 03 10 3A */	slwi r3, r0, 2
/* 801F7658 001F4598  4B E2 C9 55 */	bl __nwa__FUl
/* 801F765C 001F459C  90 7F 00 04 */	stw r3, 4(r31)
/* 801F7660 001F45A0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F7664 001F45A4  54 03 10 3A */	slwi r3, r0, 2
/* 801F7668 001F45A8  4B E2 C9 45 */	bl __nwa__FUl
/* 801F766C 001F45AC  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801F7670 001F45B0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F7674 001F45B4  54 03 10 3A */	slwi r3, r0, 2
/* 801F7678 001F45B8  4B E2 C9 35 */	bl __nwa__FUl
/* 801F767C 001F45BC  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801F7680 001F45C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7684 001F45C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F7688 001F45C8  7C 08 03 A6 */	mtlr r0
/* 801F768C 001F45CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7690 001F45D0  4E 80 00 20 */	blr 

.global "transit__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
"transit__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg":
/* 801F7694 001F45D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F7698 001F45D8  7C 08 02 A6 */	mflr r0
/* 801F769C 001F45DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F76A0 001F45E0  54 A0 10 3A */	slwi r0, r5, 2
/* 801F76A4 001F45E4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801F76A8 001F45E8  7C 7B 1B 78 */	mr r27, r3
/* 801F76AC 001F45EC  7C 9C 23 78 */	mr r28, r4
/* 801F76B0 001F45F0  7C DD 33 78 */	mr r29, r6
/* 801F76B4 001F45F4  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801F76B8 001F45F8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801F76BC 001F45FC  28 1E 00 00 */	cmplwi r30, 0
/* 801F76C0 001F4600  7F E3 00 2E */	lwzx r31, r3, r0
/* 801F76C4 001F4604  41 82 00 20 */	beq .L_801F76E4
/* 801F76C8 001F4608  7F C3 F3 78 */	mr r3, r30
/* 801F76CC 001F460C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F76D0 001F4610  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F76D4 001F4614  7D 89 03 A6 */	mtctr r12
/* 801F76D8 001F4618  4E 80 04 21 */	bctrl 
/* 801F76DC 001F461C  80 1E 00 04 */	lwz r0, 4(r30)
/* 801F76E0 001F4620  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801F76E4:
/* 801F76E4 001F4624  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801F76E8 001F4628  7C 1F 00 00 */	cmpw r31, r0
/* 801F76EC 001F462C  41 80 00 08 */	blt .L_801F76F4
.L_801F76F0:
/* 801F76F0 001F4630  48 00 00 00 */	b .L_801F76F0
.L_801F76F4:
/* 801F76F4 001F4634  80 7B 00 04 */	lwz r3, 4(r27)
/* 801F76F8 001F4638  57 E0 10 3A */	slwi r0, r31, 2
/* 801F76FC 001F463C  7F 84 E3 78 */	mr r4, r28
/* 801F7700 001F4640  7F A5 EB 78 */	mr r5, r29
/* 801F7704 001F4644  7C 63 00 2E */	lwzx r3, r3, r0
/* 801F7708 001F4648  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801F770C 001F464C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7710 001F4650  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F7714 001F4654  7D 89 03 A6 */	mtctr r12
/* 801F7718 001F4658  4E 80 04 21 */	bctrl 
/* 801F771C 001F465C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801F7720 001F4660  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F7724 001F4664  7C 08 03 A6 */	mtlr r0
/* 801F7728 001F4668  38 21 00 20 */	addi r1, r1, 0x20
/* 801F772C 001F466C  4E 80 00 20 */	blr 

.global "registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>"
"registerState__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ24Game37FSMState<Q34Game13ItemDownFloor4Item>":
/* 801F7730 001F4670  80 C3 00 08 */	lwz r6, 8(r3)
/* 801F7734 001F4674  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F7738 001F4678  7C 06 00 00 */	cmpw r6, r0
/* 801F773C 001F467C  4C 80 00 20 */	bgelr 
/* 801F7740 001F4680  80 A3 00 04 */	lwz r5, 4(r3)
/* 801F7744 001F4684  54 C0 10 3A */	slwi r0, r6, 2
/* 801F7748 001F4688  7C 85 01 2E */	stwx r4, r5, r0
/* 801F774C 001F468C  80 A4 00 04 */	lwz r5, 4(r4)
/* 801F7750 001F4690  2C 05 00 00 */	cmpwi r5, 0
/* 801F7754 001F4694  41 80 00 10 */	blt .L_801F7764
/* 801F7758 001F4698  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F775C 001F469C  7C 05 00 00 */	cmpw r5, r0
/* 801F7760 001F46A0  41 80 00 0C */	blt .L_801F776C
.L_801F7764:
/* 801F7764 001F46A4  38 00 00 00 */	li r0, 0
/* 801F7768 001F46A8  48 00 00 08 */	b .L_801F7770
.L_801F776C:
/* 801F776C 001F46AC  38 00 00 01 */	li r0, 1
.L_801F7770:
/* 801F7770 001F46B0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F7774 001F46B4  4D 82 00 20 */	beqlr 
/* 801F7778 001F46B8  90 64 00 08 */	stw r3, 8(r4)
/* 801F777C 001F46BC  80 03 00 08 */	lwz r0, 8(r3)
/* 801F7780 001F46C0  80 C4 00 04 */	lwz r6, 4(r4)
/* 801F7784 001F46C4  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801F7788 001F46C8  54 00 10 3A */	slwi r0, r0, 2
/* 801F778C 001F46CC  7C C5 01 2E */	stwx r6, r5, r0
/* 801F7790 001F46D0  80 04 00 04 */	lwz r0, 4(r4)
/* 801F7794 001F46D4  80 A3 00 08 */	lwz r5, 8(r3)
/* 801F7798 001F46D8  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801F779C 001F46DC  54 00 10 3A */	slwi r0, r0, 2
/* 801F77A0 001F46E0  7C A4 01 2E */	stwx r5, r4, r0
/* 801F77A4 001F46E4  80 83 00 08 */	lwz r4, 8(r3)
/* 801F77A8 001F46E8  38 04 00 01 */	addi r0, r4, 1
/* 801F77AC 001F46EC  90 03 00 08 */	stw r0, 8(r3)
/* 801F77B0 001F46F0  4E 80 00 20 */	blr 

.global "platCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9PlatEvent"
"platCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9PlatEvent":
/* 801F77B4 001F46F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F77B8 001F46F8  7C 08 02 A6 */	mflr r0
/* 801F77BC 001F46FC  7C 66 1B 78 */	mr r6, r3
/* 801F77C0 001F4700  7C 85 23 78 */	mr r5, r4
/* 801F77C4 001F4704  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F77C8 001F4708  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F77CC 001F470C  28 03 00 00 */	cmplwi r3, 0
/* 801F77D0 001F4710  41 82 00 18 */	beq .L_801F77E8
/* 801F77D4 001F4714  81 83 00 00 */	lwz r12, 0(r3)
/* 801F77D8 001F4718  7C C4 33 78 */	mr r4, r6
/* 801F77DC 001F471C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801F77E0 001F4720  7D 89 03 A6 */	mtctr r12
/* 801F77E4 001F4724  4E 80 04 21 */	bctrl 
.L_801F77E8:
/* 801F77E8 001F4728  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F77EC 001F472C  7C 08 03 A6 */	mtlr r0
/* 801F77F0 001F4730  38 21 00 10 */	addi r1, r1, 0x10
/* 801F77F4 001F4734  4E 80 00 20 */	blr 

.global "collisionCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9CollEvent"
"collisionCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRQ24Game9CollEvent":
/* 801F77F8 001F4738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F77FC 001F473C  7C 08 02 A6 */	mflr r0
/* 801F7800 001F4740  7C 66 1B 78 */	mr r6, r3
/* 801F7804 001F4744  7C 85 23 78 */	mr r5, r4
/* 801F7808 001F4748  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F780C 001F474C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F7810 001F4750  28 03 00 00 */	cmplwi r3, 0
/* 801F7814 001F4754  41 82 00 18 */	beq .L_801F782C
/* 801F7818 001F4758  81 83 00 00 */	lwz r12, 0(r3)
/* 801F781C 001F475C  7C C4 33 78 */	mr r4, r6
/* 801F7820 001F4760  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801F7824 001F4764  7D 89 03 A6 */	mtctr r12
/* 801F7828 001F4768  4E 80 04 21 */	bctrl 
.L_801F782C:
/* 801F782C 001F476C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7830 001F4770  7C 08 03 A6 */	mtlr r0
/* 801F7834 001F4774  38 21 00 10 */	addi r1, r1, 0x10
/* 801F7838 001F4778  4E 80 00 20 */	blr 

.global "bounceCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FPQ23Sys8Triangle"
"bounceCallback__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FPQ23Sys8Triangle":
/* 801F783C 001F477C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F7840 001F4780  7C 08 02 A6 */	mflr r0
/* 801F7844 001F4784  7C 66 1B 78 */	mr r6, r3
/* 801F7848 001F4788  7C 85 23 78 */	mr r5, r4
/* 801F784C 001F478C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F7850 001F4790  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F7854 001F4794  28 03 00 00 */	cmplwi r3, 0
/* 801F7858 001F4798  41 82 00 18 */	beq .L_801F7870
/* 801F785C 001F479C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F7860 001F47A0  7C C4 33 78 */	mr r4, r6
/* 801F7864 001F47A4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801F7868 001F47A8  7D 89 03 A6 */	mtctr r12
/* 801F786C 001F47AC  4E 80 04 21 */	bctrl 
.L_801F7870:
/* 801F7870 001F47B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F7874 001F47B4  7C 08 03 A6 */	mtlr r0
/* 801F7878 001F47B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F787C 001F47BC  4E 80 00 20 */	blr 

__sinit_itemDownFloor_cpp: # static initializer
/* 801F7880 001F47C0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801F7884 001F47C4  38 00 FF FF */	li r0, -1
/* 801F7888 001F47C8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801F788C 001F47CC  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 801F7890 001F47D0  90 0D 94 D8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801F7894 001F47D4  D4 03 C4 80 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801F7898 001F47D8  D0 0D 94 DC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801F789C 001F47DC  D0 03 00 04 */	stfs f0, 4(r3)
/* 801F78A0 001F47E0  D0 03 00 08 */	stfs f0, 8(r3)
/* 801F78A4 001F47E4  4E 80 00 20 */	blr 

.global "@376@onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent":
/* 801F78A8 001F47E8  38 63 FE 88 */	addi r3, r3, -376
/* 801F78AC 001F47EC  4B FF FC DC */	b "onKeyEvent__Q24Game92FSMItem<Q34Game13ItemDownFloor4Item,Q34Game13ItemDownFloor3FSM,Q34Game13ItemDownFloor5State>FRCQ28SysShape8KeyEvent"

.global "@376@onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent":
/* 801F78B0 001F47F0  38 63 FE 88 */	addi r3, r3, -376
/* 801F78B4 001F47F4  4B FF DB 8C */	b onKeyEvent__Q34Game13ItemDownFloor4ItemFRCQ28SysShape8KeyEvent

.global "@480@getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam"
"@480@getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam":
/* 801F78B8 001F47F8  38 63 FE 20 */	addi r3, r3, -480
/* 801F78BC 001F47FC  4B FF E9 90 */	b getCarryInfoParam__Q34Game13ItemDownFloor4ItemFR14CarryInfoParam

.global "@48@__dt__Q34Game13ItemDownFloor3MgrFv"
"@48@__dt__Q34Game13ItemDownFloor3MgrFv":
/* 801F78C0 001F4800  38 63 FF D0 */	addi r3, r3, -48
/* 801F78C4 001F4804  4B FF F9 DC */	b __dt__Q34Game13ItemDownFloor3MgrFv
