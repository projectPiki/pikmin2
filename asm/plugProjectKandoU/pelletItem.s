.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80481C50
lbl_80481C50:
	.asciz "pelletItem.cpp"
	.skip 1
.global lbl_80481C60
lbl_80481C60:
	.asciz "P2Assert"
	.skip 3
.global lbl_80481C6C
lbl_80481C6C:
	.asciz "Equipment"
	.skip 2
.global lbl_80481C78
lbl_80481C78:
	.asciz "item_texts.szs"
	.skip 1

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game10PelletItem3Mgr
__vt__Q34Game10PelletItem3Mgr:
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doEntry__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSetView__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "doViewCalc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSimulation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Ff"
	.4byte "doDirectDraw__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "birth__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "kill__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte setupResources__Q34Game10PelletItem3MgrFv
	.4byte "birthFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte "onCreateModel__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ28SysShape5Model"
	.4byte getMgrName__Q34Game10PelletItem3MgrFv
	.4byte getMgrID__Q34Game10PelletItem3MgrFv
	.4byte "setRevival__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q34Game10PelletItem3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q34Game10PelletItem3MgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q34Game10PelletItem3MgrFv
	.4byte "getObjectPtr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q34Game10PelletItem3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game10PelletItem6Object>FPv"
	.4byte "@84@getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "@84@getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@84@getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@84@get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getAt__37Container<Q34Game10PelletItem6Object>Fi"
	.4byte "getTo__37Container<Q34Game10PelletItem6Object>Fv"
	.4byte "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte __dt__Q34Game10PelletItem3MgrFv
.global "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"
"__vt__37ObjectMgr<Q34Game10PelletItem6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game10PelletItem6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__37Container<Q34Game10PelletItem6Object>Fi"
	.4byte "getTo__37Container<Q34Game10PelletItem6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@28@doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@28@doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "@28@doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@28@doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"
	.4byte "@28@doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"
	.4byte "doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
.global "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"
"__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game10PelletItem6Object>FPv"
	.4byte "getNext__41MonoObjectMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getStart__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "getEnd__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "get__41MonoObjectMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getAt__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "getTo__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@28@doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@28@doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "@28@doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@28@doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff"
	.4byte "@28@doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff"
	.4byte "doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
	.4byte "birth__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "clearMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "onAlloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
.global "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"
"__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>":
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doEntry__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSetView__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "doViewCalc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "doSimulation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Ff"
	.4byte "doDirectDraw__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "birth__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "kill__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte 0
	.4byte "birthFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
	.4byte "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte "onCreateModel__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ28SysShape5Model"
	.4byte 0
	.4byte 0
	.4byte "setRevival__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
	.4byte "getObjectPtr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game10PelletItem6Object>FPv"
	.4byte "@84@getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "@84@getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@84@getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	.4byte "@84@get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "getAt__37Container<Q34Game10PelletItem6Object>Fi"
	.4byte "getTo__37Container<Q34Game10PelletItem6Object>Fv"
	.4byte "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	.4byte "__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
.global "__vt__37Container<Q34Game10PelletItem6Object>"
"__vt__37Container<Q34Game10PelletItem6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__37Container<Q34Game10PelletItem6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game10PelletItem6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__37Container<Q34Game10PelletItem6Object>Fi"
	.4byte "getTo__37Container<Q34Game10PelletItem6Object>Fv"
.global __vt__Q34Game10PelletItem6Object
__vt__Q34Game10PelletItem6Object:
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game6PelletFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game6PelletFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game6PelletFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q34Game10PelletItem6ObjectFv
	.4byte onInit__Q24Game6PelletFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game6PelletFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game6PelletFv
	.4byte doEntry__Q24Game6PelletFv
	.4byte doSetView__Q24Game6PelletFi
	.4byte doViewCalc__Q24Game6PelletFv
	.4byte doSimulation__Q24Game6PelletFf
	.4byte doDirectDraw__Q24Game6PelletFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game6PelletFv
	.4byte "setVelocity__Q24Game6PelletFR10Vector3<f>"
	.4byte getVelocity__Q24Game6PelletFv
	.4byte "onSetPosition__Q24Game6PelletFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game6PelletFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game6PelletFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game6PelletFv
	.4byte onUpdateCapture__Q24Game6PelletFR7Matrixf
	.4byte onEndCapture__Q24Game6PelletFv
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
	.4byte doSave__Q24Game6PelletFR6Stream
	.4byte doLoad__Q24Game6PelletFR6Stream
	.4byte bounceCallback__Q24Game6PelletFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
	.4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
	.4byte getJAIObject__Q24Game6PelletFv
	.4byte getPSCreature__Q24Game6PelletFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game6PelletFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8CreatureFUl
	.4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
	.4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game6PelletFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game6PelletFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game6PelletFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game6PelletFv
	.4byte endPick__Q24Game6PelletFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game6PelletFs
	.4byte getFreeStickSlot__Q24Game6PelletFv
	.4byte "getNearFreeStickSlot__Q24Game6PelletFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game6PelletFv
	.4byte onSlotStickStart__Q24Game6PelletFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game6PelletFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game6PelletFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game6PelletFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game6PelletFv
	.4byte getCreatureID__Q24Game6PelletFv
	.4byte onSetPosition__Q24Game6PelletFv
	.4byte 0
	.4byte 0
	.4byte "@788@onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent"
	.4byte 0
	.4byte 0
	.4byte "@792@getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam"
	.4byte do_onInit__Q34Game10PelletItem6ObjectFPQ24Game15CreatureInitArg
	.4byte onCreateShape__Q24Game6PelletFv
	.4byte theEntry__Q24Game6PelletFv
	.4byte onBounce__Q34Game10PelletItem6ObjectFv
	.4byte shadowOn__Q24Game6PelletFv
	.4byte shadowOff__Q24Game6PelletFv
	.4byte isPickable__Q24Game6PelletFv
	.4byte getBedamaColor__Q24Game6PelletFv
	.4byte do_update__Q24Game6PelletFv
	.4byte onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
	.4byte getKind__Q34Game10PelletItem6ObjectFv
	.4byte changeMaterial__Q24Game6PelletFv
	.4byte "createKiraEffect__Q24Game6PelletFR10Vector3<f>"
	.4byte getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
	.4byte isCarried__Q24Game6PelletFv
	.4byte isPicked__Q24Game6PelletFv
	.4byte sound_otakaraEventStart__Q34Game10PelletItem6ObjectFv
	.4byte sound_otakaraEventRestart__Q34Game10PelletItem6ObjectFv
	.4byte sound_otakaraEventStop__Q34Game10PelletItem6ObjectFv
	.4byte sound_otakaraEventFinish__Q34Game10PelletItem6ObjectFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global mgr__Q24Game10PelletItem
mgr__Q24Game10PelletItem:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519D50
lbl_80519D50:
	.4byte 0x6B657900
.global lbl_80519D54
lbl_80519D54:
	.float 0.5
.global lbl_80519D58
lbl_80519D58:
	.4byte 0x6974656D
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global do_onInit__Q34Game10PelletItem6ObjectFPQ24Game15CreatureInitArg
do_onInit__Q34Game10PelletItem6ObjectFPQ24Game15CreatureInitArg:
/* 80202E14 001FFD54  4E 80 00 20 */	blr 

.global onBounce__Q34Game10PelletItem6ObjectFv
onBounce__Q34Game10PelletItem6ObjectFv:
/* 80202E18 001FFD58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202E1C 001FFD5C  7C 08 02 A6 */	mflr r0
/* 80202E20 001FFD60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202E24 001FFD64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202E28 001FFD68  7C 7F 1B 78 */	mr r31, r3
/* 80202E2C 001FFD6C  38 62 B9 F0 */	addi r3, r2, lbl_80519D50@sda21
/* 80202E30 001FFD70  80 9F 03 5C */	lwz r4, 0x35c(r31)
/* 80202E34 001FFD74  80 84 00 40 */	lwz r4, 0x40(r4)
/* 80202E38 001FFD78  4B EC 78 89 */	bl strcmp
/* 80202E3C 001FFD7C  2C 03 00 00 */	cmpwi r3, 0
/* 80202E40 001FFD80  40 82 00 20 */	bne .L_80202E60
/* 80202E44 001FFD84  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 80202E48 001FFD88  38 80 38 30 */	li r4, 0x3830
/* 80202E4C 001FFD8C  38 A0 00 00 */	li r5, 0
/* 80202E50 001FFD90  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80202E54 001FFD94  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80202E58 001FFD98  7D 89 03 A6 */	mtctr r12
/* 80202E5C 001FFD9C  4E 80 04 21 */	bctrl 
.L_80202E60:
/* 80202E60 001FFDA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202E64 001FFDA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80202E68 001FFDA8  7C 08 03 A6 */	mtlr r0
/* 80202E6C 001FFDAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80202E70 001FFDB0  4E 80 00 20 */	blr 

.global constructor__Q34Game10PelletItem6ObjectFv
constructor__Q34Game10PelletItem6ObjectFv:
/* 80202E74 001FFDB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202E78 001FFDB8  7C 08 02 A6 */	mflr r0
/* 80202E7C 001FFDBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202E80 001FFDC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202E84 001FFDC4  7C 7F 1B 78 */	mr r31, r3
/* 80202E88 001FFDC8  38 60 00 90 */	li r3, 0x90
/* 80202E8C 001FFDCC  4B E2 10 19 */	bl __nw__FUl
/* 80202E90 001FFDD0  7C 60 1B 79 */	or. r0, r3, r3
/* 80202E94 001FFDD4  41 82 00 10 */	beq .L_80202EA4
/* 80202E98 001FFDD8  7F E4 FB 78 */	mr r4, r31
/* 80202E9C 001FFDDC  48 25 F2 31 */	bl __ct__Q23PSM10PelletItemFPQ34Game10PelletItem6Object
/* 80202EA0 001FFDE0  7C 60 1B 78 */	mr r0, r3
.L_80202EA4:
/* 80202EA4 001FFDE4  90 1F 03 30 */	stw r0, 0x330(r31)
/* 80202EA8 001FFDE8  7F E4 FB 78 */	mr r4, r31
/* 80202EAC 001FFDEC  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80202EB0 001FFDF0  48 03 EC 71 */	bl createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 80202EB4 001FFDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202EB8 001FFDF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80202EBC 001FFDFC  7C 08 03 A6 */	mtlr r0
/* 80202EC0 001FFE00  38 21 00 10 */	addi r1, r1, 0x10
/* 80202EC4 001FFE04  4E 80 00 20 */	blr 

.global sound_otakaraEventStart__Q34Game10PelletItem6ObjectFv
sound_otakaraEventStart__Q34Game10PelletItem6ObjectFv:
/* 80202EC8 001FFE08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202ECC 001FFE0C  7C 08 02 A6 */	mflr r0
/* 80202ED0 001FFE10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202ED4 001FFE14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202ED8 001FFE18  7C 7F 1B 78 */	mr r31, r3
/* 80202EDC 001FFE1C  80 63 03 30 */	lwz r3, 0x330(r3)
/* 80202EE0 001FFE20  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80202EE4 001FFE24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80202EE8 001FFE28  7D 89 03 A6 */	mtctr r12
/* 80202EEC 001FFE2C  4E 80 04 21 */	bctrl 
/* 80202EF0 001FFE30  2C 03 00 0D */	cmpwi r3, 0xd
/* 80202EF4 001FFE34  41 82 00 20 */	beq .L_80202F14
/* 80202EF8 001FFE38  3C 60 80 48 */	lis r3, lbl_80481C50@ha
/* 80202EFC 001FFE3C  3C A0 80 48 */	lis r5, lbl_80481C60@ha
/* 80202F00 001FFE40  38 63 1C 50 */	addi r3, r3, lbl_80481C50@l
/* 80202F04 001FFE44  38 80 00 66 */	li r4, 0x66
/* 80202F08 001FFE48  38 A5 1C 60 */	addi r5, r5, lbl_80481C60@l
/* 80202F0C 001FFE4C  4C C6 31 82 */	crclr 6
/* 80202F10 001FFE50  4B E2 77 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80202F14:
/* 80202F14 001FFE54  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 80202F18 001FFE58  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80202F1C 001FFE5C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80202F20 001FFE60  7D 89 03 A6 */	mtctr r12
/* 80202F24 001FFE64  4E 80 04 21 */	bctrl 
/* 80202F28 001FFE68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202F2C 001FFE6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80202F30 001FFE70  7C 08 03 A6 */	mtlr r0
/* 80202F34 001FFE74  38 21 00 10 */	addi r1, r1, 0x10
/* 80202F38 001FFE78  4E 80 00 20 */	blr 

.global sound_otakaraEventRestart__Q34Game10PelletItem6ObjectFv
sound_otakaraEventRestart__Q34Game10PelletItem6ObjectFv:
/* 80202F3C 001FFE7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202F40 001FFE80  7C 08 02 A6 */	mflr r0
/* 80202F44 001FFE84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202F48 001FFE88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202F4C 001FFE8C  7C 7F 1B 78 */	mr r31, r3
/* 80202F50 001FFE90  80 63 03 30 */	lwz r3, 0x330(r3)
/* 80202F54 001FFE94  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80202F58 001FFE98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80202F5C 001FFE9C  7D 89 03 A6 */	mtctr r12
/* 80202F60 001FFEA0  4E 80 04 21 */	bctrl 
/* 80202F64 001FFEA4  2C 03 00 0D */	cmpwi r3, 0xd
/* 80202F68 001FFEA8  41 82 00 20 */	beq .L_80202F88
/* 80202F6C 001FFEAC  3C 60 80 48 */	lis r3, lbl_80481C50@ha
/* 80202F70 001FFEB0  3C A0 80 48 */	lis r5, lbl_80481C60@ha
/* 80202F74 001FFEB4  38 63 1C 50 */	addi r3, r3, lbl_80481C50@l
/* 80202F78 001FFEB8  38 80 00 6D */	li r4, 0x6d
/* 80202F7C 001FFEBC  38 A5 1C 60 */	addi r5, r5, lbl_80481C60@l
/* 80202F80 001FFEC0  4C C6 31 82 */	crclr 6
/* 80202F84 001FFEC4  4B E2 76 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80202F88:
/* 80202F88 001FFEC8  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 80202F8C 001FFECC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80202F90 001FFED0  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80202F94 001FFED4  7D 89 03 A6 */	mtctr r12
/* 80202F98 001FFED8  4E 80 04 21 */	bctrl 
/* 80202F9C 001FFEDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202FA0 001FFEE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80202FA4 001FFEE4  7C 08 03 A6 */	mtlr r0
/* 80202FA8 001FFEE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80202FAC 001FFEEC  4E 80 00 20 */	blr 

.global sound_otakaraEventStop__Q34Game10PelletItem6ObjectFv
sound_otakaraEventStop__Q34Game10PelletItem6ObjectFv:
/* 80202FB0 001FFEF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202FB4 001FFEF4  7C 08 02 A6 */	mflr r0
/* 80202FB8 001FFEF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202FBC 001FFEFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202FC0 001FFF00  7C 7F 1B 78 */	mr r31, r3
/* 80202FC4 001FFF04  80 63 03 30 */	lwz r3, 0x330(r3)
/* 80202FC8 001FFF08  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80202FCC 001FFF0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80202FD0 001FFF10  7D 89 03 A6 */	mtctr r12
/* 80202FD4 001FFF14  4E 80 04 21 */	bctrl 
/* 80202FD8 001FFF18  2C 03 00 0D */	cmpwi r3, 0xd
/* 80202FDC 001FFF1C  41 82 00 20 */	beq .L_80202FFC
/* 80202FE0 001FFF20  3C 60 80 48 */	lis r3, lbl_80481C50@ha
/* 80202FE4 001FFF24  3C A0 80 48 */	lis r5, lbl_80481C60@ha
/* 80202FE8 001FFF28  38 63 1C 50 */	addi r3, r3, lbl_80481C50@l
/* 80202FEC 001FFF2C  38 80 00 74 */	li r4, 0x74
/* 80202FF0 001FFF30  38 A5 1C 60 */	addi r5, r5, lbl_80481C60@l
/* 80202FF4 001FFF34  4C C6 31 82 */	crclr 6
/* 80202FF8 001FFF38  4B E2 76 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80202FFC:
/* 80202FFC 001FFF3C  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 80203000 001FFF40  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80203004 001FFF44  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 80203008 001FFF48  7D 89 03 A6 */	mtctr r12
/* 8020300C 001FFF4C  4E 80 04 21 */	bctrl 
/* 80203010 001FFF50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203014 001FFF54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80203018 001FFF58  7C 08 03 A6 */	mtlr r0
/* 8020301C 001FFF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80203020 001FFF60  4E 80 00 20 */	blr 

.global sound_otakaraEventFinish__Q34Game10PelletItem6ObjectFv
sound_otakaraEventFinish__Q34Game10PelletItem6ObjectFv:
/* 80203024 001FFF64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203028 001FFF68  7C 08 02 A6 */	mflr r0
/* 8020302C 001FFF6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203030 001FFF70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80203034 001FFF74  7C 7F 1B 78 */	mr r31, r3
/* 80203038 001FFF78  80 63 03 30 */	lwz r3, 0x330(r3)
/* 8020303C 001FFF7C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80203040 001FFF80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80203044 001FFF84  7D 89 03 A6 */	mtctr r12
/* 80203048 001FFF88  4E 80 04 21 */	bctrl 
/* 8020304C 001FFF8C  2C 03 00 0D */	cmpwi r3, 0xd
/* 80203050 001FFF90  41 82 00 20 */	beq .L_80203070
/* 80203054 001FFF94  3C 60 80 48 */	lis r3, lbl_80481C50@ha
/* 80203058 001FFF98  3C A0 80 48 */	lis r5, lbl_80481C60@ha
/* 8020305C 001FFF9C  38 63 1C 50 */	addi r3, r3, lbl_80481C50@l
/* 80203060 001FFFA0  38 80 00 7B */	li r4, 0x7b
/* 80203064 001FFFA4  38 A5 1C 60 */	addi r5, r5, lbl_80481C60@l
/* 80203068 001FFFA8  4C C6 31 82 */	crclr 6
/* 8020306C 001FFFAC  4B E2 75 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80203070:
/* 80203070 001FFFB0  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 80203074 001FFFB4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80203078 001FFFB8  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8020307C 001FFFBC  7D 89 03 A6 */	mtctr r12
/* 80203080 001FFFC0  4E 80 04 21 */	bctrl 
/* 80203084 001FFFC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203088 001FFFC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020308C 001FFFCC  7C 08 03 A6 */	mtlr r0
/* 80203090 001FFFD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80203094 001FFFD4  4E 80 00 20 */	blr 

.global __ct__Q34Game10PelletItem3MgrFv
__ct__Q34Game10PelletItem3MgrFv:
/* 80203098 001FFFD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020309C 001FFFDC  7C 08 02 A6 */	mflr r0
/* 802030A0 001FFFE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802030A4 001FFFE4  7C 80 07 35 */	extsh. r0, r4
/* 802030A8 001FFFE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802030AC 001FFFEC  93 C1 00 08 */	stw r30, 8(r1)
/* 802030B0 001FFFF0  7C 7E 1B 78 */	mr r30, r3
/* 802030B4 001FFFF4  41 82 00 0C */	beq .L_802030C0
/* 802030B8 001FFFF8  38 1E 00 A0 */	addi r0, r30, 0xa0
/* 802030BC 001FFFFC  90 1E 00 04 */	stw r0, 4(r30)
.L_802030C0:
/* 802030C0 00200000  7F C3 F3 78 */	mr r3, r30
/* 802030C4 00200004  38 80 00 00 */	li r4, 0
/* 802030C8 00200008  38 A0 00 04 */	li r5, 4
/* 802030CC 0020000C  4B F6 88 F5 */	bl __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind
/* 802030D0 00200010  3B FE 00 54 */	addi r31, r30, 0x54
/* 802030D4 00200014  7F E3 FB 78 */	mr r3, r31
/* 802030D8 00200018  48 20 E2 B9 */	bl __ct__5CNodeFv
/* 802030DC 0020001C  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 802030E0 00200020  3C 80 80 4C */	lis r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 802030E4 00200024  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 802030E8 00200028  3C 60 80 4C */	lis r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@ha
/* 802030EC 0020002C  90 1F 00 00 */	stw r0, 0(r31)
/* 802030F0 00200030  38 04 EC B8 */	addi r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 802030F4 00200034  38 83 EB EC */	addi r4, r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@l
/* 802030F8 00200038  38 A0 00 00 */	li r5, 0
/* 802030FC 0020003C  90 1F 00 00 */	stw r0, 0(r31)
/* 80203100 00200040  38 04 00 98 */	addi r0, r4, 0x98
/* 80203104 00200044  38 7E 00 70 */	addi r3, r30, 0x70
/* 80203108 00200048  98 BF 00 18 */	stb r5, 0x18(r31)
/* 8020310C 0020004C  90 9E 00 00 */	stw r4, 0(r30)
/* 80203110 00200050  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203114 00200054  48 00 19 F5 */	bl "__ct__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
/* 80203118 00200058  3C 80 80 4C */	lis r4, __vt__Q34Game10PelletItem3Mgr@ha
/* 8020311C 0020005C  7F C3 F3 78 */	mr r3, r30
/* 80203120 00200060  38 84 EA 18 */	addi r4, r4, __vt__Q34Game10PelletItem3Mgr@l
/* 80203124 00200064  90 9E 00 00 */	stw r4, 0(r30)
/* 80203128 00200068  38 04 00 98 */	addi r0, r4, 0x98
/* 8020312C 0020006C  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203130 00200070  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80203134 00200074  83 C1 00 08 */	lwz r30, 8(r1)
/* 80203138 00200078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020313C 0020007C  7C 08 03 A6 */	mtlr r0
/* 80203140 00200080  38 21 00 10 */	addi r1, r1, 0x10
/* 80203144 00200084  4E 80 00 20 */	blr 

.global "__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80203148 00200088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020314C 0020008C  7C 08 02 A6 */	mflr r0
/* 80203150 00200090  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203154 00200094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80203158 00200098  7C 9F 23 78 */	mr r31, r4
/* 8020315C 0020009C  93 C1 00 08 */	stw r30, 8(r1)
/* 80203160 002000A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80203164 002000A4  41 82 01 64 */	beq .L_802032C8
/* 80203168 002000A8  3C 60 80 4C */	lis r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@ha
/* 8020316C 002000AC  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80203170 002000B0  38 63 EB EC */	addi r3, r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@l
/* 80203174 002000B4  90 7E 00 00 */	stw r3, 0(r30)
/* 80203178 002000B8  38 03 00 98 */	addi r0, r3, 0x98
/* 8020317C 002000BC  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203180 002000C0  41 82 00 68 */	beq .L_802031E8
/* 80203184 002000C4  3C 60 80 4C */	lis r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80203188 002000C8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 8020318C 002000CC  38 63 EB 60 */	addi r3, r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l
/* 80203190 002000D0  90 7E 00 70 */	stw r3, 0x70(r30)
/* 80203194 002000D4  38 03 00 2C */	addi r0, r3, 0x2c
/* 80203198 002000D8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8020319C 002000DC  41 82 00 4C */	beq .L_802031E8
/* 802031A0 002000E0  3C 60 80 4C */	lis r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 802031A4 002000E4  34 1E 00 70 */	addic. r0, r30, 0x70
/* 802031A8 002000E8  38 63 EA E4 */	addi r3, r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
/* 802031AC 002000EC  90 7E 00 70 */	stw r3, 0x70(r30)
/* 802031B0 002000F0  38 03 00 2C */	addi r0, r3, 0x2c
/* 802031B4 002000F4  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 802031B8 002000F8  41 82 00 30 */	beq .L_802031E8
/* 802031BC 002000FC  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 802031C0 00200100  34 1E 00 70 */	addic. r0, r30, 0x70
/* 802031C4 00200104  38 03 EC B8 */	addi r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 802031C8 00200108  90 1E 00 70 */	stw r0, 0x70(r30)
/* 802031CC 0020010C  41 82 00 1C */	beq .L_802031E8
/* 802031D0 00200110  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802031D4 00200114  38 7E 00 70 */	addi r3, r30, 0x70
/* 802031D8 00200118  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802031DC 0020011C  38 80 00 00 */	li r4, 0
/* 802031E0 00200120  90 1E 00 70 */	stw r0, 0x70(r30)
/* 802031E4 00200124  48 20 E3 A5 */	bl __dt__5CNodeFv
.L_802031E8:
/* 802031E8 00200128  34 1E 00 54 */	addic. r0, r30, 0x54
/* 802031EC 0020012C  41 82 00 30 */	beq .L_8020321C
/* 802031F0 00200130  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 802031F4 00200134  34 1E 00 54 */	addic. r0, r30, 0x54
/* 802031F8 00200138  38 03 EC B8 */	addi r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 802031FC 0020013C  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203200 00200140  41 82 00 1C */	beq .L_8020321C
/* 80203204 00200144  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80203208 00200148  38 7E 00 54 */	addi r3, r30, 0x54
/* 8020320C 0020014C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80203210 00200150  38 80 00 00 */	li r4, 0
/* 80203214 00200154  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203218 00200158  48 20 E3 71 */	bl __dt__5CNodeFv
.L_8020321C:
/* 8020321C 0020015C  28 1E 00 00 */	cmplwi r30, 0
/* 80203220 00200160  41 82 00 98 */	beq .L_802032B8
/* 80203224 00200164  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 80203228 00200168  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8020322C 0020016C  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 80203230 00200170  90 1E 00 00 */	stw r0, 0(r30)
/* 80203234 00200174  41 82 00 84 */	beq .L_802032B8
/* 80203238 00200178  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 8020323C 0020017C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80203240 00200180  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 80203244 00200184  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80203248 00200188  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020324C 0020018C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80203250 00200190  41 82 00 68 */	beq .L_802032B8
/* 80203254 00200194  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 80203258 00200198  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8020325C 0020019C  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 80203260 002001A0  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80203264 002001A4  38 03 00 2C */	addi r0, r3, 0x2c
/* 80203268 002001A8  90 1E 00 34 */	stw r0, 0x34(r30)
/* 8020326C 002001AC  41 82 00 4C */	beq .L_802032B8
/* 80203270 002001B0  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 80203274 002001B4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80203278 002001B8  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 8020327C 002001BC  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80203280 002001C0  38 03 00 2C */	addi r0, r3, 0x2c
/* 80203284 002001C4  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80203288 002001C8  41 82 00 30 */	beq .L_802032B8
/* 8020328C 002001CC  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 80203290 002001D0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80203294 002001D4  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 80203298 002001D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8020329C 002001DC  41 82 00 1C */	beq .L_802032B8
/* 802032A0 002001E0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802032A4 002001E4  38 7E 00 18 */	addi r3, r30, 0x18
/* 802032A8 002001E8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802032AC 002001EC  38 80 00 00 */	li r4, 0
/* 802032B0 002001F0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 802032B4 002001F4  48 20 E2 D5 */	bl __dt__5CNodeFv
.L_802032B8:
/* 802032B8 002001F8  7F E0 07 35 */	extsh. r0, r31
/* 802032BC 002001FC  40 81 00 0C */	ble .L_802032C8
/* 802032C0 00200200  7F C3 F3 78 */	mr r3, r30
/* 802032C4 00200204  4B E2 0D F1 */	bl __dl__FPv
.L_802032C8:
/* 802032C8 00200208  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802032CC 0020020C  7F C3 F3 78 */	mr r3, r30
/* 802032D0 00200210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802032D4 00200214  83 C1 00 08 */	lwz r30, 8(r1)
/* 802032D8 00200218  7C 08 03 A6 */	mtlr r0
/* 802032DC 0020021C  38 21 00 10 */	addi r1, r1, 0x10
/* 802032E0 00200220  4E 80 00 20 */	blr 

.global "__dt__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"__dt__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 802032E4 00200224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802032E8 00200228  7C 08 02 A6 */	mflr r0
/* 802032EC 0020022C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802032F0 00200230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802032F4 00200234  7C 9F 23 78 */	mr r31, r4
/* 802032F8 00200238  93 C1 00 08 */	stw r30, 8(r1)
/* 802032FC 0020023C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80203300 00200240  41 82 00 68 */	beq .L_80203368
/* 80203304 00200244  3C 80 80 4C */	lis r4, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80203308 00200248  38 84 EB 60 */	addi r4, r4, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l
/* 8020330C 0020024C  90 9E 00 00 */	stw r4, 0(r30)
/* 80203310 00200250  38 04 00 2C */	addi r0, r4, 0x2c
/* 80203314 00200254  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80203318 00200258  41 82 00 40 */	beq .L_80203358
/* 8020331C 0020025C  3C 80 80 4C */	lis r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80203320 00200260  38 84 EA E4 */	addi r4, r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
/* 80203324 00200264  90 9E 00 00 */	stw r4, 0(r30)
/* 80203328 00200268  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020332C 0020026C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80203330 00200270  41 82 00 28 */	beq .L_80203358
/* 80203334 00200274  3C 80 80 4C */	lis r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 80203338 00200278  38 04 EC B8 */	addi r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 8020333C 0020027C  90 1E 00 00 */	stw r0, 0(r30)
/* 80203340 00200280  41 82 00 18 */	beq .L_80203358
/* 80203344 00200284  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80203348 00200288  38 80 00 00 */	li r4, 0
/* 8020334C 0020028C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80203350 00200290  90 1E 00 00 */	stw r0, 0(r30)
/* 80203354 00200294  48 20 E2 35 */	bl __dt__5CNodeFv
.L_80203358:
/* 80203358 00200298  7F E0 07 35 */	extsh. r0, r31
/* 8020335C 0020029C  40 81 00 0C */	ble .L_80203368
/* 80203360 002002A0  7F C3 F3 78 */	mr r3, r30
/* 80203364 002002A4  4B E2 0D 51 */	bl __dl__FPv
.L_80203368:
/* 80203368 002002A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020336C 002002AC  7F C3 F3 78 */	mr r3, r30
/* 80203370 002002B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80203374 002002B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80203378 002002B8  7C 08 03 A6 */	mtlr r0
/* 8020337C 002002BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80203380 002002C0  4E 80 00 20 */	blr 

.global "__dt__37Container<Q34Game10PelletItem6Object>Fv"
"__dt__37Container<Q34Game10PelletItem6Object>Fv":
/* 80203384 002002C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203388 002002C8  7C 08 02 A6 */	mflr r0
/* 8020338C 002002CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203390 002002D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80203394 002002D4  7C 9F 23 78 */	mr r31, r4
/* 80203398 002002D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8020339C 002002DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802033A0 002002E0  41 82 00 38 */	beq .L_802033D8
/* 802033A4 002002E4  3C 80 80 4C */	lis r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 802033A8 002002E8  38 04 EC B8 */	addi r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 802033AC 002002EC  90 1E 00 00 */	stw r0, 0(r30)
/* 802033B0 002002F0  41 82 00 18 */	beq .L_802033C8
/* 802033B4 002002F4  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 802033B8 002002F8  38 80 00 00 */	li r4, 0
/* 802033BC 002002FC  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 802033C0 00200300  90 1E 00 00 */	stw r0, 0(r30)
/* 802033C4 00200304  48 20 E1 C5 */	bl __dt__5CNodeFv
.L_802033C8:
/* 802033C8 00200308  7F E0 07 35 */	extsh. r0, r31
/* 802033CC 0020030C  40 81 00 0C */	ble .L_802033D8
/* 802033D0 00200310  7F C3 F3 78 */	mr r3, r30
/* 802033D4 00200314  4B E2 0C E1 */	bl __dl__FPv
.L_802033D8:
/* 802033D8 00200318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802033DC 0020031C  7F C3 F3 78 */	mr r3, r30
/* 802033E0 00200320  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802033E4 00200324  83 C1 00 08 */	lwz r30, 8(r1)
/* 802033E8 00200328  7C 08 03 A6 */	mtlr r0
/* 802033EC 0020032C  38 21 00 10 */	addi r1, r1, 0x10
/* 802033F0 00200330  4E 80 00 20 */	blr 

.global setupResources__Q34Game10PelletItem3MgrFv
setupResources__Q34Game10PelletItem3MgrFv:
/* 802033F4 00200334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802033F8 00200338  7C 08 02 A6 */	mflr r0
/* 802033FC 0020033C  3C 80 80 48 */	lis r4, lbl_80481C6C@ha
/* 80203400 00200340  38 A0 00 00 */	li r5, 0
/* 80203404 00200344  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203408 00200348  38 84 1C 6C */	addi r4, r4, lbl_80481C6C@l
/* 8020340C 0020034C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80203410 00200350  7C 7F 1B 78 */	mr r31, r3
/* 80203414 00200354  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80203418 00200358  48 21 FF 45 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8020341C 0020035C  7F E3 FB 78 */	mr r3, r31
/* 80203420 00200360  38 80 00 0B */	li r4, 0xb
/* 80203424 00200364  48 00 19 19 */	bl "alloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
/* 80203428 00200368  3C 80 80 48 */	lis r4, lbl_80481C78@ha
/* 8020342C 0020036C  7F E3 FB 78 */	mr r3, r31
/* 80203430 00200370  38 84 1C 78 */	addi r4, r4, lbl_80481C78@l
/* 80203434 00200374  4B F6 8C 99 */	bl load_texArc__Q24Game13BasePelletMgrFPc
/* 80203438 00200378  38 7F 00 18 */	addi r3, r31, 0x18
/* 8020343C 0020037C  38 80 00 80 */	li r4, 0x80
/* 80203440 00200380  4B FF 7B 85 */	bl "alloc__24MonoObjectMgr<8CollPart>Fi"
/* 80203444 00200384  3C 80 80 48 */	lis r4, lbl_80481C6C@ha
/* 80203448 00200388  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8020344C 0020038C  38 84 1C 6C */	addi r4, r4, lbl_80481C6C@l
/* 80203450 00200390  48 21 FF 15 */	bl heapStatusEnd__6SystemFPc
/* 80203454 00200394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203458 00200398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020345C 0020039C  7C 08 03 A6 */	mtlr r0
/* 80203460 002003A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80203464 002003A4  4E 80 00 20 */	blr 

.global generatorNewPelletParm__Q34Game10PelletItem3MgrFv
generatorNewPelletParm__Q34Game10PelletItem3MgrFv:
/* 80203468 002003A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020346C 002003AC  7C 08 02 A6 */	mflr r0
/* 80203470 002003B0  38 60 00 04 */	li r3, 4
/* 80203474 002003B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203478 002003B8  4B E2 0A 2D */	bl __nw__FUl
/* 8020347C 002003BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203480 002003C0  7C 08 03 A6 */	mtlr r0
/* 80203484 002003C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80203488 002003C8  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game10PelletItem3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
"generatorBirth__Q34Game10PelletItem3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm":
/* 8020348C 002003CC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80203490 002003D0  7C 08 02 A6 */	mflr r0
/* 80203494 002003D4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80203498 002003D8  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8020349C 002003DC  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802034A0 002003E0  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802034A4 002003E4  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802034A8 002003E8  93 A1 00 64 */	stw r29, 0x64(r1)
/* 802034AC 002003EC  7C DF 33 78 */	mr r31, r6
/* 802034B0 002003F0  7C 9D 23 78 */	mr r29, r4
/* 802034B4 002003F4  80 6D 95 28 */	lwz r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 802034B8 002003F8  7C BE 2B 78 */	mr r30, r5
/* 802034BC 002003FC  80 86 00 00 */	lwz r4, 0(r6)
/* 802034C0 00200400  4B F6 88 C9 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 802034C4 00200404  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 802034C8 00200408  39 00 00 00 */	li r8, 0
/* 802034CC 0020040C  38 04 A2 F4 */	addi r0, r4, __vt__Q24Game15CreatureInitArg@l
/* 802034D0 00200410  38 A0 FF FF */	li r5, -1
/* 802034D4 00200414  3C 80 80 4B */	lis r4, __vt__Q24Game13PelletInitArg@ha
/* 802034D8 00200418  90 01 00 38 */	stw r0, 0x38(r1)
/* 802034DC 0020041C  38 04 A2 B8 */	addi r0, r4, __vt__Q24Game13PelletInitArg@l
/* 802034E0 00200420  38 E0 00 FF */	li r7, 0xff
/* 802034E4 00200424  38 C0 00 01 */	li r6, 1
/* 802034E8 00200428  90 01 00 38 */	stw r0, 0x38(r1)
/* 802034EC 0020042C  38 00 00 04 */	li r0, 4
/* 802034F0 00200430  38 81 00 38 */	addi r4, r1, 0x38
/* 802034F4 00200434  99 01 00 54 */	stb r8, 0x54(r1)
/* 802034F8 00200438  B1 01 00 4C */	sth r8, 0x4c(r1)
/* 802034FC 0020043C  98 E1 00 4E */	stb r7, 0x4e(r1)
/* 80203500 00200440  91 01 00 50 */	stw r8, 0x50(r1)
/* 80203504 00200444  99 01 00 4F */	stb r8, 0x4f(r1)
/* 80203508 00200448  98 C1 00 3C */	stb r6, 0x3c(r1)
/* 8020350C 0020044C  99 01 00 55 */	stb r8, 0x55(r1)
/* 80203510 00200450  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80203514 00200454  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80203518 00200458  99 01 00 56 */	stb r8, 0x56(r1)
/* 8020351C 0020045C  99 01 00 57 */	stb r8, 0x57(r1)
/* 80203520 00200460  80 A3 00 40 */	lwz r5, 0x40(r3)
/* 80203524 00200464  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80203528 00200468  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8020352C 0020046C  98 01 00 4E */	stb r0, 0x4e(r1)
/* 80203530 00200470  80 1F 00 00 */	lwz r0, 0(r31)
/* 80203534 00200474  90 01 00 48 */	stw r0, 0x48(r1)
/* 80203538 00200478  91 01 00 50 */	stw r8, 0x50(r1)
/* 8020353C 0020047C  4B F6 9F 85 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 80203540 00200480  7C 7F 1B 79 */	or. r31, r3, r3
/* 80203544 00200484  41 82 00 68 */	beq .L_802035AC
/* 80203548 00200488  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8020354C 0020048C  28 03 00 00 */	cmplwi r3, 0
/* 80203550 00200490  41 82 00 30 */	beq .L_80203580
/* 80203554 00200494  81 83 00 04 */	lwz r12, 4(r3)
/* 80203558 00200498  7F A4 EB 78 */	mr r4, r29
/* 8020355C 0020049C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80203560 002004A0  7D 89 03 A6 */	mtctr r12
/* 80203564 002004A4  4E 80 04 21 */	bctrl 
/* 80203568 002004A8  FF E0 08 90 */	fmr f31, f1
/* 8020356C 002004AC  7F E3 FB 78 */	mr r3, r31
/* 80203570 002004B0  4B F6 34 65 */	bl getCylinderHeight__Q24Game6PelletFv
/* 80203574 002004B4  C0 02 B9 F4 */	lfs f0, lbl_80519D54@sda21(r2)
/* 80203578 002004B8  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8020357C 002004BC  D0 1D 00 04 */	stfs f0, 4(r29)
.L_80203580:
/* 80203580 002004C0  7F E3 FB 78 */	mr r3, r31
/* 80203584 002004C4  7F A4 EB 78 */	mr r4, r29
/* 80203588 002004C8  38 A0 00 00 */	li r5, 0
/* 8020358C 002004CC  4B F3 7C 1D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80203590 002004D0  7F A4 EB 78 */	mr r4, r29
/* 80203594 002004D4  7F C5 F3 78 */	mr r5, r30
/* 80203598 002004D8  38 61 00 08 */	addi r3, r1, 8
/* 8020359C 002004DC  48 22 52 ED */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 802035A0 002004E0  7F E3 FB 78 */	mr r3, r31
/* 802035A4 002004E4  38 81 00 08 */	addi r4, r1, 8
/* 802035A8 002004E8  4B F6 4F 25 */	bl setOrientation__Q24Game6PelletFR7Matrixf
.L_802035AC:
/* 802035AC 002004EC  7F E3 FB 78 */	mr r3, r31
/* 802035B0 002004F0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802035B4 002004F4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802035B8 002004F8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802035BC 002004FC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802035C0 00200500  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802035C4 00200504  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 802035C8 00200508  7C 08 03 A6 */	mtlr r0
/* 802035CC 0020050C  38 21 00 80 */	addi r1, r1, 0x80
/* 802035D0 00200510  4E 80 00 20 */	blr 

.global generatorWrite__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParm
generatorWrite__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParm:
/* 802035D4 00200514  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802035D8 00200518  7C 08 02 A6 */	mflr r0
/* 802035DC 0020051C  7C 83 23 78 */	mr r3, r4
/* 802035E0 00200520  90 01 00 14 */	stw r0, 0x14(r1)
/* 802035E4 00200524  80 05 00 00 */	lwz r0, 0(r5)
/* 802035E8 00200528  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 802035EC 0020052C  7C 04 07 34 */	extsh r4, r0
/* 802035F0 00200530  48 21 21 41 */	bl writeShort__6StreamFs
/* 802035F4 00200534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802035F8 00200538  7C 08 03 A6 */	mtlr r0
/* 802035FC 0020053C  38 21 00 10 */	addi r1, r1, 0x10
/* 80203600 00200540  4E 80 00 20 */	blr 

.global generatorRead__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParmUl
generatorRead__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParmUl:
/* 80203604 00200544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203608 00200548  7C 08 02 A6 */	mflr r0
/* 8020360C 0020054C  7C 83 23 78 */	mr r3, r4
/* 80203610 00200550  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203614 00200554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80203618 00200558  7C BF 2B 78 */	mr r31, r5
/* 8020361C 0020055C  48 21 11 49 */	bl readShort__6StreamFv
/* 80203620 00200560  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80203624 00200564  90 1F 00 00 */	stw r0, 0(r31)
/* 80203628 00200568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020362C 0020056C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80203630 00200570  7C 08 03 A6 */	mtlr r0
/* 80203634 00200574  38 21 00 10 */	addi r1, r1, 0x10
/* 80203638 00200578  4E 80 00 20 */	blr 

.global __dt__Q34Game10PelletItem3MgrFv
__dt__Q34Game10PelletItem3MgrFv:
/* 8020363C 0020057C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203640 00200580  7C 08 02 A6 */	mflr r0
/* 80203644 00200584  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203648 00200588  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020364C 0020058C  7C 9F 23 78 */	mr r31, r4
/* 80203650 00200590  93 C1 00 08 */	stw r30, 8(r1)
/* 80203654 00200594  7C 7E 1B 79 */	or. r30, r3, r3
/* 80203658 00200598  41 82 01 7C */	beq .L_802037D4
/* 8020365C 0020059C  3C 60 80 4C */	lis r3, __vt__Q34Game10PelletItem3Mgr@ha
/* 80203660 002005A0  38 63 EA 18 */	addi r3, r3, __vt__Q34Game10PelletItem3Mgr@l
/* 80203664 002005A4  90 7E 00 00 */	stw r3, 0(r30)
/* 80203668 002005A8  38 03 00 98 */	addi r0, r3, 0x98
/* 8020366C 002005AC  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203670 002005B0  41 82 01 54 */	beq .L_802037C4
/* 80203674 002005B4  3C 60 80 4C */	lis r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@ha
/* 80203678 002005B8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 8020367C 002005BC  38 63 EB EC */	addi r3, r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@l
/* 80203680 002005C0  90 7E 00 00 */	stw r3, 0(r30)
/* 80203684 002005C4  38 03 00 98 */	addi r0, r3, 0x98
/* 80203688 002005C8  90 1E 00 54 */	stw r0, 0x54(r30)
/* 8020368C 002005CC  41 82 00 68 */	beq .L_802036F4
/* 80203690 002005D0  3C 60 80 4C */	lis r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80203694 002005D4  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80203698 002005D8  38 63 EB 60 */	addi r3, r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l
/* 8020369C 002005DC  90 7E 00 70 */	stw r3, 0x70(r30)
/* 802036A0 002005E0  38 03 00 2C */	addi r0, r3, 0x2c
/* 802036A4 002005E4  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 802036A8 002005E8  41 82 00 4C */	beq .L_802036F4
/* 802036AC 002005EC  3C 60 80 4C */	lis r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 802036B0 002005F0  34 1E 00 70 */	addic. r0, r30, 0x70
/* 802036B4 002005F4  38 63 EA E4 */	addi r3, r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
/* 802036B8 002005F8  90 7E 00 70 */	stw r3, 0x70(r30)
/* 802036BC 002005FC  38 03 00 2C */	addi r0, r3, 0x2c
/* 802036C0 00200600  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 802036C4 00200604  41 82 00 30 */	beq .L_802036F4
/* 802036C8 00200608  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 802036CC 0020060C  34 1E 00 70 */	addic. r0, r30, 0x70
/* 802036D0 00200610  38 03 EC B8 */	addi r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 802036D4 00200614  90 1E 00 70 */	stw r0, 0x70(r30)
/* 802036D8 00200618  41 82 00 1C */	beq .L_802036F4
/* 802036DC 0020061C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802036E0 00200620  38 7E 00 70 */	addi r3, r30, 0x70
/* 802036E4 00200624  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802036E8 00200628  38 80 00 00 */	li r4, 0
/* 802036EC 0020062C  90 1E 00 70 */	stw r0, 0x70(r30)
/* 802036F0 00200630  48 20 DE 99 */	bl __dt__5CNodeFv
.L_802036F4:
/* 802036F4 00200634  34 1E 00 54 */	addic. r0, r30, 0x54
/* 802036F8 00200638  41 82 00 30 */	beq .L_80203728
/* 802036FC 0020063C  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 80203700 00200640  34 1E 00 54 */	addic. r0, r30, 0x54
/* 80203704 00200644  38 03 EC B8 */	addi r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 80203708 00200648  90 1E 00 54 */	stw r0, 0x54(r30)
/* 8020370C 0020064C  41 82 00 1C */	beq .L_80203728
/* 80203710 00200650  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80203714 00200654  38 7E 00 54 */	addi r3, r30, 0x54
/* 80203718 00200658  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020371C 0020065C  38 80 00 00 */	li r4, 0
/* 80203720 00200660  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80203724 00200664  48 20 DE 65 */	bl __dt__5CNodeFv
.L_80203728:
/* 80203728 00200668  28 1E 00 00 */	cmplwi r30, 0
/* 8020372C 0020066C  41 82 00 98 */	beq .L_802037C4
/* 80203730 00200670  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 80203734 00200674  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80203738 00200678  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 8020373C 0020067C  90 1E 00 00 */	stw r0, 0(r30)
/* 80203740 00200680  41 82 00 84 */	beq .L_802037C4
/* 80203744 00200684  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 80203748 00200688  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8020374C 0020068C  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 80203750 00200690  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80203754 00200694  38 03 00 2C */	addi r0, r3, 0x2c
/* 80203758 00200698  90 1E 00 34 */	stw r0, 0x34(r30)
/* 8020375C 0020069C  41 82 00 68 */	beq .L_802037C4
/* 80203760 002006A0  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 80203764 002006A4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80203768 002006A8  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 8020376C 002006AC  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80203770 002006B0  38 03 00 2C */	addi r0, r3, 0x2c
/* 80203774 002006B4  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80203778 002006B8  41 82 00 4C */	beq .L_802037C4
/* 8020377C 002006BC  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 80203780 002006C0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80203784 002006C4  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 80203788 002006C8  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8020378C 002006CC  38 03 00 2C */	addi r0, r3, 0x2c
/* 80203790 002006D0  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80203794 002006D4  41 82 00 30 */	beq .L_802037C4
/* 80203798 002006D8  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 8020379C 002006DC  34 1E 00 18 */	addic. r0, r30, 0x18
/* 802037A0 002006E0  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 802037A4 002006E4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 802037A8 002006E8  41 82 00 1C */	beq .L_802037C4
/* 802037AC 002006EC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802037B0 002006F0  38 7E 00 18 */	addi r3, r30, 0x18
/* 802037B4 002006F4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802037B8 002006F8  38 80 00 00 */	li r4, 0
/* 802037BC 002006FC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 802037C0 00200700  48 20 DD C9 */	bl __dt__5CNodeFv
.L_802037C4:
/* 802037C4 00200704  7F E0 07 35 */	extsh. r0, r31
/* 802037C8 00200708  40 81 00 0C */	ble .L_802037D4
/* 802037CC 0020070C  7F C3 F3 78 */	mr r3, r30
/* 802037D0 00200710  4B E2 08 E5 */	bl __dl__FPv
.L_802037D4:
/* 802037D4 00200714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802037D8 00200718  7F C3 F3 78 */	mr r3, r30
/* 802037DC 0020071C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802037E0 00200720  83 C1 00 08 */	lwz r30, 8(r1)
/* 802037E4 00200724  7C 08 03 A6 */	mtlr r0
/* 802037E8 00200728  38 21 00 10 */	addi r1, r1, 0x10
/* 802037EC 0020072C  4E 80 00 20 */	blr 

.global getMgrName__Q34Game10PelletItem3MgrFv
getMgrName__Q34Game10PelletItem3MgrFv:
/* 802037F0 00200730  38 62 B9 F8 */	addi r3, r2, lbl_80519D58@sda21
/* 802037F4 00200734  4E 80 00 20 */	blr 

.global getMgrID__Q34Game10PelletItem3MgrFv
getMgrID__Q34Game10PelletItem3MgrFv:
/* 802037F8 00200738  38 60 00 04 */	li r3, 4
/* 802037FC 0020073C  4E 80 00 20 */	blr 

.global generatorLocalVersion__Q34Game10PelletItem3MgrFv
generatorLocalVersion__Q34Game10PelletItem3MgrFv:
/* 80203800 00200740  3C 60 30 30 */	lis r3, 0x30303030@ha
/* 80203804 00200744  38 63 30 30 */	addi r3, r3, 0x30303030@l
/* 80203808 00200748  4E 80 00 20 */	blr 

.global "__dt__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"__dt__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 8020380C 0020074C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203810 00200750  7C 08 02 A6 */	mflr r0
/* 80203814 00200754  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203818 00200758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020381C 0020075C  7C 9F 23 78 */	mr r31, r4
/* 80203820 00200760  93 C1 00 08 */	stw r30, 8(r1)
/* 80203824 00200764  7C 7E 1B 79 */	or. r30, r3, r3
/* 80203828 00200768  41 82 00 50 */	beq .L_80203878
/* 8020382C 0020076C  3C 80 80 4C */	lis r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80203830 00200770  38 84 EA E4 */	addi r4, r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
/* 80203834 00200774  90 9E 00 00 */	stw r4, 0(r30)
/* 80203838 00200778  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020383C 0020077C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80203840 00200780  41 82 00 28 */	beq .L_80203868
/* 80203844 00200784  3C 80 80 4C */	lis r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 80203848 00200788  38 04 EC B8 */	addi r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 8020384C 0020078C  90 1E 00 00 */	stw r0, 0(r30)
/* 80203850 00200790  41 82 00 18 */	beq .L_80203868
/* 80203854 00200794  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80203858 00200798  38 80 00 00 */	li r4, 0
/* 8020385C 0020079C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80203860 002007A0  90 1E 00 00 */	stw r0, 0(r30)
/* 80203864 002007A4  48 20 DD 25 */	bl __dt__5CNodeFv
.L_80203868:
/* 80203868 002007A8  7F E0 07 35 */	extsh. r0, r31
/* 8020386C 002007AC  40 81 00 0C */	ble .L_80203878
/* 80203870 002007B0  7F C3 F3 78 */	mr r3, r30
/* 80203874 002007B4  4B E2 08 41 */	bl __dl__FPv
.L_80203878:
/* 80203878 002007B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020387C 002007BC  7F C3 F3 78 */	mr r3, r30
/* 80203880 002007C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80203884 002007C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80203888 002007C8  7C 08 03 A6 */	mtlr r0
/* 8020388C 002007CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80203890 002007D0  4E 80 00 20 */	blr 

.global getKind__Q34Game10PelletItem6ObjectFv
getKind__Q34Game10PelletItem6ObjectFv:
/* 80203894 002007D4  38 60 00 04 */	li r3, 4
/* 80203898 002007D8  4E 80 00 20 */	blr 

.global "onCreateModel__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ28SysShape5Model"
"onCreateModel__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ28SysShape5Model":
/* 8020389C 002007DC  4E 80 00 20 */	blr 

.global "birth__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"birth__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 802038A0 002007E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802038A4 002007E4  7C 08 02 A6 */	mflr r0
/* 802038A8 002007E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802038AC 002007EC  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 802038B0 002007F0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802038B4 002007F4  7D 89 03 A6 */	mtctr r12
/* 802038B8 002007F8  4E 80 04 21 */	bctrl 
/* 802038BC 002007FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802038C0 00200800  7C 08 03 A6 */	mtlr r0
/* 802038C4 00200804  38 21 00 10 */	addi r1, r1, 0x10
/* 802038C8 00200808  4E 80 00 20 */	blr 

.global "doAnimation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"doAnimation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 802038CC 0020080C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802038D0 00200810  7C 08 02 A6 */	mflr r0
/* 802038D4 00200814  90 01 00 14 */	stw r0, 0x14(r1)
/* 802038D8 00200818  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 802038DC 0020081C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802038E0 00200820  7D 89 03 A6 */	mtctr r12
/* 802038E4 00200824  4E 80 04 21 */	bctrl 
/* 802038E8 00200828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802038EC 0020082C  7C 08 03 A6 */	mtlr r0
/* 802038F0 00200830  38 21 00 10 */	addi r1, r1, 0x10
/* 802038F4 00200834  4E 80 00 20 */	blr 

.global "doEntry__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"doEntry__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 802038F8 00200838  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802038FC 0020083C  7C 08 02 A6 */	mflr r0
/* 80203900 00200840  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203904 00200844  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80203908 00200848  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8020390C 0020084C  7D 89 03 A6 */	mtctr r12
/* 80203910 00200850  4E 80 04 21 */	bctrl 
/* 80203914 00200854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203918 00200858  7C 08 03 A6 */	mtlr r0
/* 8020391C 0020085C  38 21 00 10 */	addi r1, r1, 0x10
/* 80203920 00200860  4E 80 00 20 */	blr 

.global "doSetView__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
"doSetView__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi":
/* 80203924 00200864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203928 00200868  7C 08 02 A6 */	mflr r0
/* 8020392C 0020086C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203930 00200870  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80203934 00200874  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80203938 00200878  7D 89 03 A6 */	mtctr r12
/* 8020393C 0020087C  4E 80 04 21 */	bctrl 
/* 80203940 00200880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203944 00200884  7C 08 03 A6 */	mtlr r0
/* 80203948 00200888  38 21 00 10 */	addi r1, r1, 0x10
/* 8020394C 0020088C  4E 80 00 20 */	blr 

.global "doViewCalc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"doViewCalc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80203950 00200890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203954 00200894  7C 08 02 A6 */	mflr r0
/* 80203958 00200898  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020395C 0020089C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80203960 002008A0  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80203964 002008A4  7D 89 03 A6 */	mtctr r12
/* 80203968 002008A8  4E 80 04 21 */	bctrl 
/* 8020396C 002008AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203970 002008B0  7C 08 03 A6 */	mtlr r0
/* 80203974 002008B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80203978 002008B8  4E 80 00 20 */	blr 

.global "doSimulation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Ff"
"doSimulation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Ff":
/* 8020397C 002008BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203980 002008C0  7C 08 02 A6 */	mflr r0
/* 80203984 002008C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203988 002008C8  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 8020398C 002008CC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80203990 002008D0  7D 89 03 A6 */	mtctr r12
/* 80203994 002008D4  4E 80 04 21 */	bctrl 
/* 80203998 002008D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020399C 002008DC  7C 08 03 A6 */	mtlr r0
/* 802039A0 002008E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802039A4 002008E4  4E 80 00 20 */	blr 

.global "doDirectDraw__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FR8Graphics"
"doDirectDraw__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FR8Graphics":
/* 802039A8 002008E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802039AC 002008EC  7C 08 02 A6 */	mflr r0
/* 802039B0 002008F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802039B4 002008F4  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 802039B8 002008F8  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 802039BC 002008FC  7D 89 03 A6 */	mtctr r12
/* 802039C0 00200900  4E 80 04 21 */	bctrl 
/* 802039C4 00200904  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802039C8 00200908  7C 08 03 A6 */	mtlr r0
/* 802039CC 0020090C  38 21 00 10 */	addi r1, r1, 0x10
/* 802039D0 00200910  4E 80 00 20 */	blr 

.global "kill__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
"kill__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet":
/* 802039D4 00200914  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802039D8 00200918  7C 08 02 A6 */	mflr r0
/* 802039DC 0020091C  38 63 00 70 */	addi r3, r3, 0x70
/* 802039E0 00200920  90 01 00 14 */	stw r0, 0x14(r1)
/* 802039E4 00200924  48 00 00 CD */	bl "kill__41MonoObjectMgr<Q34Game10PelletItem6Object>FPQ34Game10PelletItem6Object"
/* 802039E8 00200928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802039EC 0020092C  7C 08 03 A6 */	mtlr r0
/* 802039F0 00200930  38 21 00 10 */	addi r1, r1, 0x10
/* 802039F4 00200934  4E 80 00 20 */	blr 

.global "getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
"getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv":
/* 802039F8 00200938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802039FC 0020093C  7C 08 02 A6 */	mflr r0
/* 80203A00 00200940  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203A04 00200944  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80203A08 00200948  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80203A0C 0020094C  7D 89 03 A6 */	mtctr r12
/* 80203A10 00200950  4E 80 04 21 */	bctrl 
/* 80203A14 00200954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203A18 00200958  7C 08 03 A6 */	mtlr r0
/* 80203A1C 0020095C  38 21 00 10 */	addi r1, r1, 0x10
/* 80203A20 00200960  4E 80 00 20 */	blr 

.global "getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80203A24 00200964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203A28 00200968  7C 08 02 A6 */	mflr r0
/* 80203A2C 0020096C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203A30 00200970  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80203A34 00200974  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80203A38 00200978  7D 89 03 A6 */	mtctr r12
/* 80203A3C 0020097C  4E 80 04 21 */	bctrl 
/* 80203A40 00200980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203A44 00200984  7C 08 03 A6 */	mtlr r0
/* 80203A48 00200988  38 21 00 10 */	addi r1, r1, 0x10
/* 80203A4C 0020098C  4E 80 00 20 */	blr 

.global "birth__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"birth__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203A50 00200990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203A54 00200994  7C 08 02 A6 */	mflr r0
/* 80203A58 00200998  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203A5C 0020099C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80203A60 002009A0  7C 7F 1B 78 */	mr r31, r3
/* 80203A64 002009A4  48 00 04 95 */	bl "getEmptyIndex__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
/* 80203A68 002009A8  2C 03 FF FF */	cmpwi r3, -1
/* 80203A6C 002009AC  41 82 00 2C */	beq .L_80203A98
/* 80203A70 002009B0  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 80203A74 002009B4  38 00 00 00 */	li r0, 0
/* 80203A78 002009B8  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 80203A7C 002009BC  1C A3 04 58 */	mulli r5, r3, 0x458
/* 80203A80 002009C0  7C 04 19 AE */	stbx r0, r4, r3
/* 80203A84 002009C4  7C 66 2A 14 */	add r3, r6, r5
/* 80203A88 002009C8  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 80203A8C 002009CC  38 04 00 01 */	addi r0, r4, 1
/* 80203A90 002009D0  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80203A94 002009D4  48 00 00 08 */	b .L_80203A9C
.L_80203A98:
/* 80203A98 002009D8  38 60 00 00 */	li r3, 0
.L_80203A9C:
/* 80203A9C 002009DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203AA0 002009E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80203AA4 002009E4  7C 08 03 A6 */	mtlr r0
/* 80203AA8 002009E8  38 21 00 10 */	addi r1, r1, 0x10
/* 80203AAC 002009EC  4E 80 00 20 */	blr 

.global "kill__41MonoObjectMgr<Q34Game10PelletItem6Object>FPQ34Game10PelletItem6Object"
"kill__41MonoObjectMgr<Q34Game10PelletItem6Object>FPQ34Game10PelletItem6Object":
/* 80203AB0 002009F0  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80203AB4 002009F4  38 C0 00 00 */	li r6, 0
/* 80203AB8 002009F8  38 A0 00 00 */	li r5, 0
/* 80203ABC 002009FC  7C 09 03 A6 */	mtctr r0
/* 80203AC0 00200A00  2C 00 00 00 */	cmpwi r0, 0
/* 80203AC4 00200A04  4C 81 00 20 */	blelr 
.L_80203AC8:
/* 80203AC8 00200A08  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80203ACC 00200A0C  7C 00 2A 14 */	add r0, r0, r5
/* 80203AD0 00200A10  7C 00 20 40 */	cmplw r0, r4
/* 80203AD4 00200A14  40 82 00 20 */	bne .L_80203AF4
/* 80203AD8 00200A18  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80203ADC 00200A1C  38 00 00 01 */	li r0, 1
/* 80203AE0 00200A20  7C 04 31 AE */	stbx r0, r4, r6
/* 80203AE4 00200A24  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80203AE8 00200A28  38 04 FF FF */	addi r0, r4, -1
/* 80203AEC 00200A2C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80203AF0 00200A30  4E 80 00 20 */	blr 
.L_80203AF4:
/* 80203AF4 00200A34  38 A5 04 58 */	addi r5, r5, 0x458
/* 80203AF8 00200A38  38 C6 00 01 */	addi r6, r6, 1
/* 80203AFC 00200A3C  42 00 FF CC */	bdnz .L_80203AC8
/* 80203B00 00200A40  4E 80 00 20 */	blr 

.global "getNext__41MonoObjectMgr<Q34Game10PelletItem6Object>FPv"
"getNext__41MonoObjectMgr<Q34Game10PelletItem6Object>FPv":
/* 80203B04 00200A44  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80203B08 00200A48  38 C4 00 01 */	addi r6, r4, 1
/* 80203B0C 00200A4C  7C 06 28 50 */	subf r0, r6, r5
/* 80203B10 00200A50  7C 09 03 A6 */	mtctr r0
/* 80203B14 00200A54  7C 06 28 00 */	cmpw r6, r5
/* 80203B18 00200A58  40 80 00 24 */	bge .L_80203B3C
.L_80203B1C:
/* 80203B1C 00200A5C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80203B20 00200A60  7C 04 30 AE */	lbzx r0, r4, r6
/* 80203B24 00200A64  28 00 00 00 */	cmplwi r0, 0
/* 80203B28 00200A68  40 82 00 0C */	bne .L_80203B34
/* 80203B2C 00200A6C  7C C3 33 78 */	mr r3, r6
/* 80203B30 00200A70  4E 80 00 20 */	blr 
.L_80203B34:
/* 80203B34 00200A74  38 C6 00 01 */	addi r6, r6, 1
/* 80203B38 00200A78  42 00 FF E4 */	bdnz .L_80203B1C
.L_80203B3C:
/* 80203B3C 00200A7C  7C A3 2B 78 */	mr r3, r5
/* 80203B40 00200A80  4E 80 00 20 */	blr 

.global "getStart__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"getStart__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203B44 00200A84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203B48 00200A88  7C 08 02 A6 */	mflr r0
/* 80203B4C 00200A8C  38 80 FF FF */	li r4, -1
/* 80203B50 00200A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203B54 00200A94  81 83 00 00 */	lwz r12, 0(r3)
/* 80203B58 00200A98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80203B5C 00200A9C  7D 89 03 A6 */	mtctr r12
/* 80203B60 00200AA0  4E 80 04 21 */	bctrl 
/* 80203B64 00200AA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203B68 00200AA8  7C 08 03 A6 */	mtlr r0
/* 80203B6C 00200AAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80203B70 00200AB0  4E 80 00 20 */	blr 

.global "getEnd__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"getEnd__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203B74 00200AB4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80203B78 00200AB8  4E 80 00 20 */	blr 

.global "getAt__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
"getAt__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi":
/* 80203B7C 00200ABC  1C 04 04 58 */	mulli r0, r4, 0x458
/* 80203B80 00200AC0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80203B84 00200AC4  7C 63 02 14 */	add r3, r3, r0
/* 80203B88 00200AC8  4E 80 00 20 */	blr 

.global "getTo__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"getTo__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203B8C 00200ACC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80203B90 00200AD0  4E 80 00 20 */	blr 

.global "doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203B94 00200AD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203B98 00200AD8  7C 08 02 A6 */	mflr r0
/* 80203B9C 00200ADC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203BA0 00200AE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80203BA4 00200AE4  3B E0 00 00 */	li r31, 0
/* 80203BA8 00200AE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80203BAC 00200AEC  3B C0 00 00 */	li r30, 0
/* 80203BB0 00200AF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80203BB4 00200AF4  7C 7D 1B 78 */	mr r29, r3
/* 80203BB8 00200AF8  48 00 00 34 */	b .L_80203BEC
.L_80203BBC:
/* 80203BBC 00200AFC  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80203BC0 00200B00  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80203BC4 00200B04  28 00 00 00 */	cmplwi r0, 0
/* 80203BC8 00200B08  40 82 00 1C */	bne .L_80203BE4
/* 80203BCC 00200B0C  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80203BD0 00200B10  7C 60 FA 14 */	add r3, r0, r31
/* 80203BD4 00200B14  81 83 00 00 */	lwz r12, 0(r3)
/* 80203BD8 00200B18  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80203BDC 00200B1C  7D 89 03 A6 */	mtctr r12
/* 80203BE0 00200B20  4E 80 04 21 */	bctrl 
.L_80203BE4:
/* 80203BE4 00200B24  3B FF 04 58 */	addi r31, r31, 0x458
/* 80203BE8 00200B28  3B DE 00 01 */	addi r30, r30, 1
.L_80203BEC:
/* 80203BEC 00200B2C  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80203BF0 00200B30  7C 1E 00 00 */	cmpw r30, r0
/* 80203BF4 00200B34  41 80 FF C8 */	blt .L_80203BBC
/* 80203BF8 00200B38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80203BFC 00200B3C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80203C00 00200B40  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80203C04 00200B44  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80203C08 00200B48  7C 08 03 A6 */	mtlr r0
/* 80203C0C 00200B4C  38 21 00 20 */	addi r1, r1, 0x20
/* 80203C10 00200B50  4E 80 00 20 */	blr 

.global "doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203C14 00200B54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203C18 00200B58  7C 08 02 A6 */	mflr r0
/* 80203C1C 00200B5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203C20 00200B60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80203C24 00200B64  3B E0 00 00 */	li r31, 0
/* 80203C28 00200B68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80203C2C 00200B6C  3B C0 00 00 */	li r30, 0
/* 80203C30 00200B70  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80203C34 00200B74  7C 7D 1B 78 */	mr r29, r3
/* 80203C38 00200B78  48 00 00 34 */	b .L_80203C6C
.L_80203C3C:
/* 80203C3C 00200B7C  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80203C40 00200B80  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80203C44 00200B84  28 00 00 00 */	cmplwi r0, 0
/* 80203C48 00200B88  40 82 00 1C */	bne .L_80203C64
/* 80203C4C 00200B8C  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80203C50 00200B90  7C 60 FA 14 */	add r3, r0, r31
/* 80203C54 00200B94  81 83 00 00 */	lwz r12, 0(r3)
/* 80203C58 00200B98  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80203C5C 00200B9C  7D 89 03 A6 */	mtctr r12
/* 80203C60 00200BA0  4E 80 04 21 */	bctrl 
.L_80203C64:
/* 80203C64 00200BA4  3B FF 04 58 */	addi r31, r31, 0x458
/* 80203C68 00200BA8  3B DE 00 01 */	addi r30, r30, 1
.L_80203C6C:
/* 80203C6C 00200BAC  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80203C70 00200BB0  7C 1E 00 00 */	cmpw r30, r0
/* 80203C74 00200BB4  41 80 FF C8 */	blt .L_80203C3C
/* 80203C78 00200BB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80203C7C 00200BBC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80203C80 00200BC0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80203C84 00200BC4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80203C88 00200BC8  7C 08 03 A6 */	mtlr r0
/* 80203C8C 00200BCC  38 21 00 20 */	addi r1, r1, 0x20
/* 80203C90 00200BD0  4E 80 00 20 */	blr 

.global "doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
"doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi":
/* 80203C94 00200BD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203C98 00200BD8  7C 08 02 A6 */	mflr r0
/* 80203C9C 00200BDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203CA0 00200BE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80203CA4 00200BE4  3B E0 00 00 */	li r31, 0
/* 80203CA8 00200BE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80203CAC 00200BEC  3B C0 00 00 */	li r30, 0
/* 80203CB0 00200BF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80203CB4 00200BF4  7C 9D 23 78 */	mr r29, r4
/* 80203CB8 00200BF8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80203CBC 00200BFC  7C 7C 1B 78 */	mr r28, r3
/* 80203CC0 00200C00  48 00 00 38 */	b .L_80203CF8
.L_80203CC4:
/* 80203CC4 00200C04  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80203CC8 00200C08  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80203CCC 00200C0C  28 00 00 00 */	cmplwi r0, 0
/* 80203CD0 00200C10  40 82 00 20 */	bne .L_80203CF0
/* 80203CD4 00200C14  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 80203CD8 00200C18  7F A4 EB 78 */	mr r4, r29
/* 80203CDC 00200C1C  7C 60 FA 14 */	add r3, r0, r31
/* 80203CE0 00200C20  81 83 00 00 */	lwz r12, 0(r3)
/* 80203CE4 00200C24  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80203CE8 00200C28  7D 89 03 A6 */	mtctr r12
/* 80203CEC 00200C2C  4E 80 04 21 */	bctrl 
.L_80203CF0:
/* 80203CF0 00200C30  3B FF 04 58 */	addi r31, r31, 0x458
/* 80203CF4 00200C34  3B DE 00 01 */	addi r30, r30, 1
.L_80203CF8:
/* 80203CF8 00200C38  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80203CFC 00200C3C  7C 1E 00 00 */	cmpw r30, r0
/* 80203D00 00200C40  41 80 FF C4 */	blt .L_80203CC4
/* 80203D04 00200C44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80203D08 00200C48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80203D0C 00200C4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80203D10 00200C50  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80203D14 00200C54  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80203D18 00200C58  7C 08 03 A6 */	mtlr r0
/* 80203D1C 00200C5C  38 21 00 20 */	addi r1, r1, 0x20
/* 80203D20 00200C60  4E 80 00 20 */	blr 

.global "doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203D24 00200C64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203D28 00200C68  7C 08 02 A6 */	mflr r0
/* 80203D2C 00200C6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203D30 00200C70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80203D34 00200C74  3B E0 00 00 */	li r31, 0
/* 80203D38 00200C78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80203D3C 00200C7C  3B C0 00 00 */	li r30, 0
/* 80203D40 00200C80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80203D44 00200C84  7C 7D 1B 78 */	mr r29, r3
/* 80203D48 00200C88  48 00 00 34 */	b .L_80203D7C
.L_80203D4C:
/* 80203D4C 00200C8C  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80203D50 00200C90  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80203D54 00200C94  28 00 00 00 */	cmplwi r0, 0
/* 80203D58 00200C98  40 82 00 1C */	bne .L_80203D74
/* 80203D5C 00200C9C  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80203D60 00200CA0  7C 60 FA 14 */	add r3, r0, r31
/* 80203D64 00200CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80203D68 00200CA8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80203D6C 00200CAC  7D 89 03 A6 */	mtctr r12
/* 80203D70 00200CB0  4E 80 04 21 */	bctrl 
.L_80203D74:
/* 80203D74 00200CB4  3B FF 04 58 */	addi r31, r31, 0x458
/* 80203D78 00200CB8  3B DE 00 01 */	addi r30, r30, 1
.L_80203D7C:
/* 80203D7C 00200CBC  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80203D80 00200CC0  7C 1E 00 00 */	cmpw r30, r0
/* 80203D84 00200CC4  41 80 FF C8 */	blt .L_80203D4C
/* 80203D88 00200CC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80203D8C 00200CCC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80203D90 00200CD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80203D94 00200CD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80203D98 00200CD8  7C 08 03 A6 */	mtlr r0
/* 80203D9C 00200CDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80203DA0 00200CE0  4E 80 00 20 */	blr 

.global "doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff"
"doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff":
/* 80203DA4 00200CE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203DA8 00200CE8  7C 08 02 A6 */	mflr r0
/* 80203DAC 00200CEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203DB0 00200CF0  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80203DB4 00200CF4  FF E0 08 90 */	fmr f31, f1
/* 80203DB8 00200CF8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80203DBC 00200CFC  3B E0 00 00 */	li r31, 0
/* 80203DC0 00200D00  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80203DC4 00200D04  3B C0 00 00 */	li r30, 0
/* 80203DC8 00200D08  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80203DCC 00200D0C  7C 7D 1B 78 */	mr r29, r3
/* 80203DD0 00200D10  48 00 00 38 */	b .L_80203E08
.L_80203DD4:
/* 80203DD4 00200D14  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80203DD8 00200D18  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80203DDC 00200D1C  28 00 00 00 */	cmplwi r0, 0
/* 80203DE0 00200D20  40 82 00 20 */	bne .L_80203E00
/* 80203DE4 00200D24  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80203DE8 00200D28  FC 20 F8 90 */	fmr f1, f31
/* 80203DEC 00200D2C  7C 60 FA 14 */	add r3, r0, r31
/* 80203DF0 00200D30  81 83 00 00 */	lwz r12, 0(r3)
/* 80203DF4 00200D34  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80203DF8 00200D38  7D 89 03 A6 */	mtctr r12
/* 80203DFC 00200D3C  4E 80 04 21 */	bctrl 
.L_80203E00:
/* 80203E00 00200D40  3B FF 04 58 */	addi r31, r31, 0x458
/* 80203E04 00200D44  3B DE 00 01 */	addi r30, r30, 1
.L_80203E08:
/* 80203E08 00200D48  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80203E0C 00200D4C  7C 1E 00 00 */	cmpw r30, r0
/* 80203E10 00200D50  41 80 FF C4 */	blt .L_80203DD4
/* 80203E14 00200D54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80203E18 00200D58  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80203E1C 00200D5C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80203E20 00200D60  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80203E24 00200D64  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80203E28 00200D68  7C 08 03 A6 */	mtlr r0
/* 80203E2C 00200D6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80203E30 00200D70  4E 80 00 20 */	blr 

.global "doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
"doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics":
/* 80203E34 00200D74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203E38 00200D78  7C 08 02 A6 */	mflr r0
/* 80203E3C 00200D7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203E40 00200D80  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80203E44 00200D84  3B E0 00 00 */	li r31, 0
/* 80203E48 00200D88  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80203E4C 00200D8C  3B C0 00 00 */	li r30, 0
/* 80203E50 00200D90  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80203E54 00200D94  7C 9D 23 78 */	mr r29, r4
/* 80203E58 00200D98  93 81 00 10 */	stw r28, 0x10(r1)
/* 80203E5C 00200D9C  7C 7C 1B 78 */	mr r28, r3
/* 80203E60 00200DA0  48 00 00 38 */	b .L_80203E98
.L_80203E64:
/* 80203E64 00200DA4  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80203E68 00200DA8  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80203E6C 00200DAC  28 00 00 00 */	cmplwi r0, 0
/* 80203E70 00200DB0  40 82 00 20 */	bne .L_80203E90
/* 80203E74 00200DB4  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 80203E78 00200DB8  7F A4 EB 78 */	mr r4, r29
/* 80203E7C 00200DBC  7C 60 FA 14 */	add r3, r0, r31
/* 80203E80 00200DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80203E84 00200DC4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80203E88 00200DC8  7D 89 03 A6 */	mtctr r12
/* 80203E8C 00200DCC  4E 80 04 21 */	bctrl 
.L_80203E90:
/* 80203E90 00200DD0  3B FF 04 58 */	addi r31, r31, 0x458
/* 80203E94 00200DD4  3B DE 00 01 */	addi r30, r30, 1
.L_80203E98:
/* 80203E98 00200DD8  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80203E9C 00200DDC  7C 1E 00 00 */	cmpw r30, r0
/* 80203EA0 00200DE0  41 80 FF C4 */	blt .L_80203E64
/* 80203EA4 00200DE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80203EA8 00200DE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80203EAC 00200DEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80203EB0 00200DF0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80203EB4 00200DF4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80203EB8 00200DF8  7C 08 03 A6 */	mtlr r0
/* 80203EBC 00200DFC  38 21 00 20 */	addi r1, r1, 0x20
/* 80203EC0 00200E00  4E 80 00 20 */	blr 

.global "clearMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"clearMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203EC4 00200E04  38 00 00 00 */	li r0, 0
/* 80203EC8 00200E08  38 C0 00 00 */	li r6, 0
/* 80203ECC 00200E0C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80203ED0 00200E10  38 A0 00 01 */	li r5, 1
/* 80203ED4 00200E14  48 00 00 10 */	b .L_80203EE4
.L_80203ED8:
/* 80203ED8 00200E18  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80203EDC 00200E1C  7C A4 31 AE */	stbx r5, r4, r6
/* 80203EE0 00200E20  38 C6 00 01 */	addi r6, r6, 1
.L_80203EE4:
/* 80203EE4 00200E24  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80203EE8 00200E28  7C 06 00 00 */	cmpw r6, r0
/* 80203EEC 00200E2C  41 80 FF EC */	blt .L_80203ED8
/* 80203EF0 00200E30  4E 80 00 20 */	blr 

.global "onAlloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"onAlloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203EF4 00200E34  4E 80 00 20 */	blr 

.global "getEmptyIndex__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"getEmptyIndex__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80203EF8 00200E38  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80203EFC 00200E3C  38 A0 00 00 */	li r5, 0
/* 80203F00 00200E40  7C 09 03 A6 */	mtctr r0
/* 80203F04 00200E44  2C 00 00 00 */	cmpwi r0, 0
/* 80203F08 00200E48  40 81 00 24 */	ble .L_80203F2C
.L_80203F0C:
/* 80203F0C 00200E4C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80203F10 00200E50  7C 04 28 AE */	lbzx r0, r4, r5
/* 80203F14 00200E54  28 00 00 01 */	cmplwi r0, 1
/* 80203F18 00200E58  40 82 00 0C */	bne .L_80203F24
/* 80203F1C 00200E5C  7C A3 2B 78 */	mr r3, r5
/* 80203F20 00200E60  4E 80 00 20 */	blr 
.L_80203F24:
/* 80203F24 00200E64  38 A5 00 01 */	addi r5, r5, 1
/* 80203F28 00200E68  42 00 FF E4 */	bdnz .L_80203F0C
.L_80203F2C:
/* 80203F2C 00200E6C  38 60 FF FF */	li r3, -1
/* 80203F30 00200E70  4E 80 00 20 */	blr 

.global "get__41MonoObjectMgr<Q34Game10PelletItem6Object>FPv"
"get__41MonoObjectMgr<Q34Game10PelletItem6Object>FPv":
/* 80203F34 00200E74  1C 04 04 58 */	mulli r0, r4, 0x458
/* 80203F38 00200E78  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80203F3C 00200E7C  7C 63 02 14 */	add r3, r3, r0
/* 80203F40 00200E80  4E 80 00 20 */	blr 

.global "getObject__37Container<Q34Game10PelletItem6Object>FPv"
"getObject__37Container<Q34Game10PelletItem6Object>FPv":
/* 80203F44 00200E84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80203F48 00200E88  7C 08 02 A6 */	mflr r0
/* 80203F4C 00200E8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203F50 00200E90  81 83 00 00 */	lwz r12, 0(r3)
/* 80203F54 00200E94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80203F58 00200E98  7D 89 03 A6 */	mtctr r12
/* 80203F5C 00200E9C  4E 80 04 21 */	bctrl 
/* 80203F60 00200EA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80203F64 00200EA4  7C 08 03 A6 */	mtlr r0
/* 80203F68 00200EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80203F6C 00200EAC  4E 80 00 20 */	blr 

.global "getAt__37Container<Q34Game10PelletItem6Object>Fi"
"getAt__37Container<Q34Game10PelletItem6Object>Fi":
/* 80203F70 00200EB0  38 60 00 00 */	li r3, 0
/* 80203F74 00200EB4  4E 80 00 20 */	blr 

.global "getTo__37Container<Q34Game10PelletItem6Object>Fv"
"getTo__37Container<Q34Game10PelletItem6Object>Fv":
/* 80203F78 00200EB8  38 60 00 00 */	li r3, 0
/* 80203F7C 00200EBC  4E 80 00 20 */	blr 

.global "doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
"doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics":
/* 80203F80 00200EC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80203F84 00200EC4  7C 08 02 A6 */	mflr r0
/* 80203F88 00200EC8  3C A0 80 4B */	lis r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 80203F8C 00200ECC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80203F90 00200ED0  38 00 00 00 */	li r0, 0
/* 80203F94 00200ED4  38 A5 1B 74 */	addi r5, r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 80203F98 00200ED8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80203F9C 00200EDC  28 00 00 00 */	cmplwi r0, 0
/* 80203FA0 00200EE0  7C 9F 23 78 */	mr r31, r4
/* 80203FA4 00200EE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80203FA8 00200EE8  90 A1 00 08 */	stw r5, 8(r1)
/* 80203FAC 00200EEC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80203FB0 00200EF0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80203FB4 00200EF4  40 82 00 1C */	bne .L_80203FD0
/* 80203FB8 00200EF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80203FBC 00200EFC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80203FC0 00200F00  7D 89 03 A6 */	mtctr r12
/* 80203FC4 00200F04  4E 80 04 21 */	bctrl 
/* 80203FC8 00200F08  90 61 00 0C */	stw r3, 0xc(r1)
/* 80203FCC 00200F0C  48 00 01 74 */	b .L_80204140
.L_80203FD0:
/* 80203FD0 00200F10  81 83 00 00 */	lwz r12, 0(r3)
/* 80203FD4 00200F14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80203FD8 00200F18  7D 89 03 A6 */	mtctr r12
/* 80203FDC 00200F1C  4E 80 04 21 */	bctrl 
/* 80203FE0 00200F20  90 61 00 0C */	stw r3, 0xc(r1)
/* 80203FE4 00200F24  48 00 00 58 */	b .L_8020403C
.L_80203FE8:
/* 80203FE8 00200F28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80203FEC 00200F2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80203FF0 00200F30  81 83 00 00 */	lwz r12, 0(r3)
/* 80203FF4 00200F34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80203FF8 00200F38  7D 89 03 A6 */	mtctr r12
/* 80203FFC 00200F3C  4E 80 04 21 */	bctrl 
/* 80204000 00200F40  7C 64 1B 78 */	mr r4, r3
/* 80204004 00200F44  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80204008 00200F48  81 83 00 00 */	lwz r12, 0(r3)
/* 8020400C 00200F4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80204010 00200F50  7D 89 03 A6 */	mtctr r12
/* 80204014 00200F54  4E 80 04 21 */	bctrl 
/* 80204018 00200F58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020401C 00200F5C  40 82 01 24 */	bne .L_80204140
/* 80204020 00200F60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204024 00200F64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204028 00200F68  81 83 00 00 */	lwz r12, 0(r3)
/* 8020402C 00200F6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204030 00200F70  7D 89 03 A6 */	mtctr r12
/* 80204034 00200F74  4E 80 04 21 */	bctrl 
/* 80204038 00200F78  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020403C:
/* 8020403C 00200F7C  81 81 00 08 */	lwz r12, 8(r1)
/* 80204040 00200F80  38 61 00 08 */	addi r3, r1, 8
/* 80204044 00200F84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204048 00200F88  7D 89 03 A6 */	mtctr r12
/* 8020404C 00200F8C  4E 80 04 21 */	bctrl 
/* 80204050 00200F90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204054 00200F94  41 82 FF 94 */	beq .L_80203FE8
/* 80204058 00200F98  48 00 00 E8 */	b .L_80204140
.L_8020405C:
/* 8020405C 00200F9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204060 00200FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80204064 00200FA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204068 00200FA8  7D 89 03 A6 */	mtctr r12
/* 8020406C 00200FAC  4E 80 04 21 */	bctrl 
/* 80204070 00200FB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80204074 00200FB4  7F E4 FB 78 */	mr r4, r31
/* 80204078 00200FB8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8020407C 00200FBC  7D 89 03 A6 */	mtctr r12
/* 80204080 00200FC0  4E 80 04 21 */	bctrl 
/* 80204084 00200FC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204088 00200FC8  28 00 00 00 */	cmplwi r0, 0
/* 8020408C 00200FCC  40 82 00 24 */	bne .L_802040B0
/* 80204090 00200FD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204094 00200FD4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204098 00200FD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020409C 00200FDC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802040A0 00200FE0  7D 89 03 A6 */	mtctr r12
/* 802040A4 00200FE4  4E 80 04 21 */	bctrl 
/* 802040A8 00200FE8  90 61 00 0C */	stw r3, 0xc(r1)
/* 802040AC 00200FEC  48 00 00 94 */	b .L_80204140
.L_802040B0:
/* 802040B0 00200FF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802040B4 00200FF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802040B8 00200FF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802040BC 00200FFC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802040C0 00201000  7D 89 03 A6 */	mtctr r12
/* 802040C4 00201004  4E 80 04 21 */	bctrl 
/* 802040C8 00201008  90 61 00 0C */	stw r3, 0xc(r1)
/* 802040CC 0020100C  48 00 00 58 */	b .L_80204124
.L_802040D0:
/* 802040D0 00201010  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802040D4 00201014  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802040D8 00201018  81 83 00 00 */	lwz r12, 0(r3)
/* 802040DC 0020101C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802040E0 00201020  7D 89 03 A6 */	mtctr r12
/* 802040E4 00201024  4E 80 04 21 */	bctrl 
/* 802040E8 00201028  7C 64 1B 78 */	mr r4, r3
/* 802040EC 0020102C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802040F0 00201030  81 83 00 00 */	lwz r12, 0(r3)
/* 802040F4 00201034  81 8C 00 08 */	lwz r12, 8(r12)
/* 802040F8 00201038  7D 89 03 A6 */	mtctr r12
/* 802040FC 0020103C  4E 80 04 21 */	bctrl 
/* 80204100 00201040  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204104 00201044  40 82 00 3C */	bne .L_80204140
/* 80204108 00201048  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020410C 0020104C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204110 00201050  81 83 00 00 */	lwz r12, 0(r3)
/* 80204114 00201054  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204118 00201058  7D 89 03 A6 */	mtctr r12
/* 8020411C 0020105C  4E 80 04 21 */	bctrl 
/* 80204120 00201060  90 61 00 0C */	stw r3, 0xc(r1)
.L_80204124:
/* 80204124 00201064  81 81 00 08 */	lwz r12, 8(r1)
/* 80204128 00201068  38 61 00 08 */	addi r3, r1, 8
/* 8020412C 0020106C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204130 00201070  7D 89 03 A6 */	mtctr r12
/* 80204134 00201074  4E 80 04 21 */	bctrl 
/* 80204138 00201078  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020413C 0020107C  41 82 FF 94 */	beq .L_802040D0
.L_80204140:
/* 80204140 00201080  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204144 00201084  81 83 00 00 */	lwz r12, 0(r3)
/* 80204148 00201088  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020414C 0020108C  7D 89 03 A6 */	mtctr r12
/* 80204150 00201090  4E 80 04 21 */	bctrl 
/* 80204154 00201094  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204158 00201098  7C 04 18 40 */	cmplw r4, r3
/* 8020415C 0020109C  40 82 FF 00 */	bne .L_8020405C
/* 80204160 002010A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204164 002010A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80204168 002010A8  7C 08 03 A6 */	mtlr r0
/* 8020416C 002010AC  38 21 00 20 */	addi r1, r1, 0x20
/* 80204170 002010B0  4E 80 00 20 */	blr 

.global "doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"
"doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff":
/* 80204174 002010B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80204178 002010B8  7C 08 02 A6 */	mflr r0
/* 8020417C 002010BC  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 80204180 002010C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204184 002010C4  38 00 00 00 */	li r0, 0
/* 80204188 002010C8  38 84 1B 74 */	addi r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 8020418C 002010CC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80204190 002010D0  FF E0 08 90 */	fmr f31, f1
/* 80204194 002010D4  28 00 00 00 */	cmplwi r0, 0
/* 80204198 002010D8  90 81 00 08 */	stw r4, 8(r1)
/* 8020419C 002010DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802041A0 002010E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 802041A4 002010E4  90 61 00 10 */	stw r3, 0x10(r1)
/* 802041A8 002010E8  40 82 00 1C */	bne .L_802041C4
/* 802041AC 002010EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802041B0 002010F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802041B4 002010F4  7D 89 03 A6 */	mtctr r12
/* 802041B8 002010F8  4E 80 04 21 */	bctrl 
/* 802041BC 002010FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802041C0 00201100  48 00 01 74 */	b .L_80204334
.L_802041C4:
/* 802041C4 00201104  81 83 00 00 */	lwz r12, 0(r3)
/* 802041C8 00201108  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802041CC 0020110C  7D 89 03 A6 */	mtctr r12
/* 802041D0 00201110  4E 80 04 21 */	bctrl 
/* 802041D4 00201114  90 61 00 0C */	stw r3, 0xc(r1)
/* 802041D8 00201118  48 00 00 58 */	b .L_80204230
.L_802041DC:
/* 802041DC 0020111C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802041E0 00201120  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802041E4 00201124  81 83 00 00 */	lwz r12, 0(r3)
/* 802041E8 00201128  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802041EC 0020112C  7D 89 03 A6 */	mtctr r12
/* 802041F0 00201130  4E 80 04 21 */	bctrl 
/* 802041F4 00201134  7C 64 1B 78 */	mr r4, r3
/* 802041F8 00201138  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802041FC 0020113C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204200 00201140  81 8C 00 08 */	lwz r12, 8(r12)
/* 80204204 00201144  7D 89 03 A6 */	mtctr r12
/* 80204208 00201148  4E 80 04 21 */	bctrl 
/* 8020420C 0020114C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204210 00201150  40 82 01 24 */	bne .L_80204334
/* 80204214 00201154  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204218 00201158  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020421C 0020115C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204220 00201160  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204224 00201164  7D 89 03 A6 */	mtctr r12
/* 80204228 00201168  4E 80 04 21 */	bctrl 
/* 8020422C 0020116C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80204230:
/* 80204230 00201170  81 81 00 08 */	lwz r12, 8(r1)
/* 80204234 00201174  38 61 00 08 */	addi r3, r1, 8
/* 80204238 00201178  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020423C 0020117C  7D 89 03 A6 */	mtctr r12
/* 80204240 00201180  4E 80 04 21 */	bctrl 
/* 80204244 00201184  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204248 00201188  41 82 FF 94 */	beq .L_802041DC
/* 8020424C 0020118C  48 00 00 E8 */	b .L_80204334
.L_80204250:
/* 80204250 00201190  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204254 00201194  81 83 00 00 */	lwz r12, 0(r3)
/* 80204258 00201198  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020425C 0020119C  7D 89 03 A6 */	mtctr r12
/* 80204260 002011A0  4E 80 04 21 */	bctrl 
/* 80204264 002011A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204268 002011A8  FC 20 F8 90 */	fmr f1, f31
/* 8020426C 002011AC  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80204270 002011B0  7D 89 03 A6 */	mtctr r12
/* 80204274 002011B4  4E 80 04 21 */	bctrl 
/* 80204278 002011B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020427C 002011BC  28 00 00 00 */	cmplwi r0, 0
/* 80204280 002011C0  40 82 00 24 */	bne .L_802042A4
/* 80204284 002011C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204288 002011C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020428C 002011CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80204290 002011D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204294 002011D4  7D 89 03 A6 */	mtctr r12
/* 80204298 002011D8  4E 80 04 21 */	bctrl 
/* 8020429C 002011DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802042A0 002011E0  48 00 00 94 */	b .L_80204334
.L_802042A4:
/* 802042A4 002011E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802042A8 002011E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802042AC 002011EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802042B0 002011F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802042B4 002011F4  7D 89 03 A6 */	mtctr r12
/* 802042B8 002011F8  4E 80 04 21 */	bctrl 
/* 802042BC 002011FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802042C0 00201200  48 00 00 58 */	b .L_80204318
.L_802042C4:
/* 802042C4 00201204  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802042C8 00201208  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802042CC 0020120C  81 83 00 00 */	lwz r12, 0(r3)
/* 802042D0 00201210  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802042D4 00201214  7D 89 03 A6 */	mtctr r12
/* 802042D8 00201218  4E 80 04 21 */	bctrl 
/* 802042DC 0020121C  7C 64 1B 78 */	mr r4, r3
/* 802042E0 00201220  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802042E4 00201224  81 83 00 00 */	lwz r12, 0(r3)
/* 802042E8 00201228  81 8C 00 08 */	lwz r12, 8(r12)
/* 802042EC 0020122C  7D 89 03 A6 */	mtctr r12
/* 802042F0 00201230  4E 80 04 21 */	bctrl 
/* 802042F4 00201234  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802042F8 00201238  40 82 00 3C */	bne .L_80204334
/* 802042FC 0020123C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204300 00201240  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204304 00201244  81 83 00 00 */	lwz r12, 0(r3)
/* 80204308 00201248  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020430C 0020124C  7D 89 03 A6 */	mtctr r12
/* 80204310 00201250  4E 80 04 21 */	bctrl 
/* 80204314 00201254  90 61 00 0C */	stw r3, 0xc(r1)
.L_80204318:
/* 80204318 00201258  81 81 00 08 */	lwz r12, 8(r1)
/* 8020431C 0020125C  38 61 00 08 */	addi r3, r1, 8
/* 80204320 00201260  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204324 00201264  7D 89 03 A6 */	mtctr r12
/* 80204328 00201268  4E 80 04 21 */	bctrl 
/* 8020432C 0020126C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204330 00201270  41 82 FF 94 */	beq .L_802042C4
.L_80204334:
/* 80204334 00201274  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204338 00201278  81 83 00 00 */	lwz r12, 0(r3)
/* 8020433C 0020127C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80204340 00201280  7D 89 03 A6 */	mtctr r12
/* 80204344 00201284  4E 80 04 21 */	bctrl 
/* 80204348 00201288  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020434C 0020128C  7C 04 18 40 */	cmplw r4, r3
/* 80204350 00201290  40 82 FF 00 */	bne .L_80204250
/* 80204354 00201294  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204358 00201298  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8020435C 0020129C  7C 08 03 A6 */	mtlr r0
/* 80204360 002012A0  38 21 00 20 */	addi r1, r1, 0x20
/* 80204364 002012A4  4E 80 00 20 */	blr 

.global "doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80204368 002012A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020436C 002012AC  7C 08 02 A6 */	mflr r0
/* 80204370 002012B0  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 80204374 002012B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204378 002012B8  38 00 00 00 */	li r0, 0
/* 8020437C 002012BC  38 84 1B 74 */	addi r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 80204380 002012C0  28 00 00 00 */	cmplwi r0, 0
/* 80204384 002012C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204388 002012C8  90 81 00 08 */	stw r4, 8(r1)
/* 8020438C 002012CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80204390 002012D0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80204394 002012D4  40 82 00 1C */	bne .L_802043B0
/* 80204398 002012D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020439C 002012DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802043A0 002012E0  7D 89 03 A6 */	mtctr r12
/* 802043A4 002012E4  4E 80 04 21 */	bctrl 
/* 802043A8 002012E8  90 61 00 0C */	stw r3, 0xc(r1)
/* 802043AC 002012EC  48 00 01 70 */	b .L_8020451C
.L_802043B0:
/* 802043B0 002012F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802043B4 002012F4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802043B8 002012F8  7D 89 03 A6 */	mtctr r12
/* 802043BC 002012FC  4E 80 04 21 */	bctrl 
/* 802043C0 00201300  90 61 00 0C */	stw r3, 0xc(r1)
/* 802043C4 00201304  48 00 00 58 */	b .L_8020441C
.L_802043C8:
/* 802043C8 00201308  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802043CC 0020130C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802043D0 00201310  81 83 00 00 */	lwz r12, 0(r3)
/* 802043D4 00201314  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802043D8 00201318  7D 89 03 A6 */	mtctr r12
/* 802043DC 0020131C  4E 80 04 21 */	bctrl 
/* 802043E0 00201320  7C 64 1B 78 */	mr r4, r3
/* 802043E4 00201324  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802043E8 00201328  81 83 00 00 */	lwz r12, 0(r3)
/* 802043EC 0020132C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802043F0 00201330  7D 89 03 A6 */	mtctr r12
/* 802043F4 00201334  4E 80 04 21 */	bctrl 
/* 802043F8 00201338  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802043FC 0020133C  40 82 01 20 */	bne .L_8020451C
/* 80204400 00201340  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204404 00201344  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204408 00201348  81 83 00 00 */	lwz r12, 0(r3)
/* 8020440C 0020134C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204410 00201350  7D 89 03 A6 */	mtctr r12
/* 80204414 00201354  4E 80 04 21 */	bctrl 
/* 80204418 00201358  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020441C:
/* 8020441C 0020135C  81 81 00 08 */	lwz r12, 8(r1)
/* 80204420 00201360  38 61 00 08 */	addi r3, r1, 8
/* 80204424 00201364  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204428 00201368  7D 89 03 A6 */	mtctr r12
/* 8020442C 0020136C  4E 80 04 21 */	bctrl 
/* 80204430 00201370  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204434 00201374  41 82 FF 94 */	beq .L_802043C8
/* 80204438 00201378  48 00 00 E4 */	b .L_8020451C
.L_8020443C:
/* 8020443C 0020137C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204440 00201380  81 83 00 00 */	lwz r12, 0(r3)
/* 80204444 00201384  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204448 00201388  7D 89 03 A6 */	mtctr r12
/* 8020444C 0020138C  4E 80 04 21 */	bctrl 
/* 80204450 00201390  81 83 00 00 */	lwz r12, 0(r3)
/* 80204454 00201394  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80204458 00201398  7D 89 03 A6 */	mtctr r12
/* 8020445C 0020139C  4E 80 04 21 */	bctrl 
/* 80204460 002013A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204464 002013A4  28 00 00 00 */	cmplwi r0, 0
/* 80204468 002013A8  40 82 00 24 */	bne .L_8020448C
/* 8020446C 002013AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204470 002013B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204474 002013B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204478 002013B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020447C 002013BC  7D 89 03 A6 */	mtctr r12
/* 80204480 002013C0  4E 80 04 21 */	bctrl 
/* 80204484 002013C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204488 002013C8  48 00 00 94 */	b .L_8020451C
.L_8020448C:
/* 8020448C 002013CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204490 002013D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204494 002013D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204498 002013D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020449C 002013DC  7D 89 03 A6 */	mtctr r12
/* 802044A0 002013E0  4E 80 04 21 */	bctrl 
/* 802044A4 002013E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802044A8 002013E8  48 00 00 58 */	b .L_80204500
.L_802044AC:
/* 802044AC 002013EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802044B0 002013F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802044B4 002013F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802044B8 002013F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802044BC 002013FC  7D 89 03 A6 */	mtctr r12
/* 802044C0 00201400  4E 80 04 21 */	bctrl 
/* 802044C4 00201404  7C 64 1B 78 */	mr r4, r3
/* 802044C8 00201408  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802044CC 0020140C  81 83 00 00 */	lwz r12, 0(r3)
/* 802044D0 00201410  81 8C 00 08 */	lwz r12, 8(r12)
/* 802044D4 00201414  7D 89 03 A6 */	mtctr r12
/* 802044D8 00201418  4E 80 04 21 */	bctrl 
/* 802044DC 0020141C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802044E0 00201420  40 82 00 3C */	bne .L_8020451C
/* 802044E4 00201424  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802044E8 00201428  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802044EC 0020142C  81 83 00 00 */	lwz r12, 0(r3)
/* 802044F0 00201430  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802044F4 00201434  7D 89 03 A6 */	mtctr r12
/* 802044F8 00201438  4E 80 04 21 */	bctrl 
/* 802044FC 0020143C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80204500:
/* 80204500 00201440  81 81 00 08 */	lwz r12, 8(r1)
/* 80204504 00201444  38 61 00 08 */	addi r3, r1, 8
/* 80204508 00201448  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020450C 0020144C  7D 89 03 A6 */	mtctr r12
/* 80204510 00201450  4E 80 04 21 */	bctrl 
/* 80204514 00201454  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204518 00201458  41 82 FF 94 */	beq .L_802044AC
.L_8020451C:
/* 8020451C 0020145C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204520 00201460  81 83 00 00 */	lwz r12, 0(r3)
/* 80204524 00201464  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80204528 00201468  7D 89 03 A6 */	mtctr r12
/* 8020452C 0020146C  4E 80 04 21 */	bctrl 
/* 80204530 00201470  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204534 00201474  7C 04 18 40 */	cmplw r4, r3
/* 80204538 00201478  40 82 FF 04 */	bne .L_8020443C
/* 8020453C 0020147C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204540 00201480  7C 08 03 A6 */	mtlr r0
/* 80204544 00201484  38 21 00 20 */	addi r1, r1, 0x20
/* 80204548 00201488  4E 80 00 20 */	blr 

.global "doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"
"doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi":
/* 8020454C 0020148C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80204550 00201490  7C 08 02 A6 */	mflr r0
/* 80204554 00201494  3C A0 80 4B */	lis r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 80204558 00201498  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020455C 0020149C  38 00 00 00 */	li r0, 0
/* 80204560 002014A0  38 A5 1B 74 */	addi r5, r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 80204564 002014A4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80204568 002014A8  28 00 00 00 */	cmplwi r0, 0
/* 8020456C 002014AC  7C 9F 23 78 */	mr r31, r4
/* 80204570 002014B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204574 002014B4  90 A1 00 08 */	stw r5, 8(r1)
/* 80204578 002014B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020457C 002014BC  90 61 00 10 */	stw r3, 0x10(r1)
/* 80204580 002014C0  40 82 00 1C */	bne .L_8020459C
/* 80204584 002014C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204588 002014C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020458C 002014CC  7D 89 03 A6 */	mtctr r12
/* 80204590 002014D0  4E 80 04 21 */	bctrl 
/* 80204594 002014D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204598 002014D8  48 00 01 74 */	b .L_8020470C
.L_8020459C:
/* 8020459C 002014DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802045A0 002014E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802045A4 002014E4  7D 89 03 A6 */	mtctr r12
/* 802045A8 002014E8  4E 80 04 21 */	bctrl 
/* 802045AC 002014EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802045B0 002014F0  48 00 00 58 */	b .L_80204608
.L_802045B4:
/* 802045B4 002014F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802045B8 002014F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802045BC 002014FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802045C0 00201500  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802045C4 00201504  7D 89 03 A6 */	mtctr r12
/* 802045C8 00201508  4E 80 04 21 */	bctrl 
/* 802045CC 0020150C  7C 64 1B 78 */	mr r4, r3
/* 802045D0 00201510  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802045D4 00201514  81 83 00 00 */	lwz r12, 0(r3)
/* 802045D8 00201518  81 8C 00 08 */	lwz r12, 8(r12)
/* 802045DC 0020151C  7D 89 03 A6 */	mtctr r12
/* 802045E0 00201520  4E 80 04 21 */	bctrl 
/* 802045E4 00201524  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802045E8 00201528  40 82 01 24 */	bne .L_8020470C
/* 802045EC 0020152C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802045F0 00201530  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802045F4 00201534  81 83 00 00 */	lwz r12, 0(r3)
/* 802045F8 00201538  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802045FC 0020153C  7D 89 03 A6 */	mtctr r12
/* 80204600 00201540  4E 80 04 21 */	bctrl 
/* 80204604 00201544  90 61 00 0C */	stw r3, 0xc(r1)
.L_80204608:
/* 80204608 00201548  81 81 00 08 */	lwz r12, 8(r1)
/* 8020460C 0020154C  38 61 00 08 */	addi r3, r1, 8
/* 80204610 00201550  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204614 00201554  7D 89 03 A6 */	mtctr r12
/* 80204618 00201558  4E 80 04 21 */	bctrl 
/* 8020461C 0020155C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204620 00201560  41 82 FF 94 */	beq .L_802045B4
/* 80204624 00201564  48 00 00 E8 */	b .L_8020470C
.L_80204628:
/* 80204628 00201568  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020462C 0020156C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204630 00201570  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204634 00201574  7D 89 03 A6 */	mtctr r12
/* 80204638 00201578  4E 80 04 21 */	bctrl 
/* 8020463C 0020157C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204640 00201580  7F E4 FB 78 */	mr r4, r31
/* 80204644 00201584  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80204648 00201588  7D 89 03 A6 */	mtctr r12
/* 8020464C 0020158C  4E 80 04 21 */	bctrl 
/* 80204650 00201590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204654 00201594  28 00 00 00 */	cmplwi r0, 0
/* 80204658 00201598  40 82 00 24 */	bne .L_8020467C
/* 8020465C 0020159C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204660 002015A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204664 002015A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204668 002015A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020466C 002015AC  7D 89 03 A6 */	mtctr r12
/* 80204670 002015B0  4E 80 04 21 */	bctrl 
/* 80204674 002015B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204678 002015B8  48 00 00 94 */	b .L_8020470C
.L_8020467C:
/* 8020467C 002015BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204680 002015C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204684 002015C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204688 002015C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020468C 002015CC  7D 89 03 A6 */	mtctr r12
/* 80204690 002015D0  4E 80 04 21 */	bctrl 
/* 80204694 002015D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204698 002015D8  48 00 00 58 */	b .L_802046F0
.L_8020469C:
/* 8020469C 002015DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802046A0 002015E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802046A4 002015E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802046A8 002015E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802046AC 002015EC  7D 89 03 A6 */	mtctr r12
/* 802046B0 002015F0  4E 80 04 21 */	bctrl 
/* 802046B4 002015F4  7C 64 1B 78 */	mr r4, r3
/* 802046B8 002015F8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802046BC 002015FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802046C0 00201600  81 8C 00 08 */	lwz r12, 8(r12)
/* 802046C4 00201604  7D 89 03 A6 */	mtctr r12
/* 802046C8 00201608  4E 80 04 21 */	bctrl 
/* 802046CC 0020160C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802046D0 00201610  40 82 00 3C */	bne .L_8020470C
/* 802046D4 00201614  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802046D8 00201618  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802046DC 0020161C  81 83 00 00 */	lwz r12, 0(r3)
/* 802046E0 00201620  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802046E4 00201624  7D 89 03 A6 */	mtctr r12
/* 802046E8 00201628  4E 80 04 21 */	bctrl 
/* 802046EC 0020162C  90 61 00 0C */	stw r3, 0xc(r1)
.L_802046F0:
/* 802046F0 00201630  81 81 00 08 */	lwz r12, 8(r1)
/* 802046F4 00201634  38 61 00 08 */	addi r3, r1, 8
/* 802046F8 00201638  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802046FC 0020163C  7D 89 03 A6 */	mtctr r12
/* 80204700 00201640  4E 80 04 21 */	bctrl 
/* 80204704 00201644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204708 00201648  41 82 FF 94 */	beq .L_8020469C
.L_8020470C:
/* 8020470C 0020164C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204710 00201650  81 83 00 00 */	lwz r12, 0(r3)
/* 80204714 00201654  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80204718 00201658  7D 89 03 A6 */	mtctr r12
/* 8020471C 0020165C  4E 80 04 21 */	bctrl 
/* 80204720 00201660  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204724 00201664  7C 04 18 40 */	cmplw r4, r3
/* 80204728 00201668  40 82 FF 00 */	bne .L_80204628
/* 8020472C 0020166C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204730 00201670  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80204734 00201674  7C 08 03 A6 */	mtlr r0
/* 80204738 00201678  38 21 00 20 */	addi r1, r1, 0x20
/* 8020473C 0020167C  4E 80 00 20 */	blr 

.global "doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80204740 00201680  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80204744 00201684  7C 08 02 A6 */	mflr r0
/* 80204748 00201688  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 8020474C 0020168C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204750 00201690  38 00 00 00 */	li r0, 0
/* 80204754 00201694  38 84 1B 74 */	addi r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 80204758 00201698  28 00 00 00 */	cmplwi r0, 0
/* 8020475C 0020169C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204760 002016A0  90 81 00 08 */	stw r4, 8(r1)
/* 80204764 002016A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80204768 002016A8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020476C 002016AC  40 82 00 1C */	bne .L_80204788
/* 80204770 002016B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80204774 002016B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80204778 002016B8  7D 89 03 A6 */	mtctr r12
/* 8020477C 002016BC  4E 80 04 21 */	bctrl 
/* 80204780 002016C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204784 002016C4  48 00 01 70 */	b .L_802048F4
.L_80204788:
/* 80204788 002016C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020478C 002016CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80204790 002016D0  7D 89 03 A6 */	mtctr r12
/* 80204794 002016D4  4E 80 04 21 */	bctrl 
/* 80204798 002016D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020479C 002016DC  48 00 00 58 */	b .L_802047F4
.L_802047A0:
/* 802047A0 002016E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802047A4 002016E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802047A8 002016E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802047AC 002016EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802047B0 002016F0  7D 89 03 A6 */	mtctr r12
/* 802047B4 002016F4  4E 80 04 21 */	bctrl 
/* 802047B8 002016F8  7C 64 1B 78 */	mr r4, r3
/* 802047BC 002016FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802047C0 00201700  81 83 00 00 */	lwz r12, 0(r3)
/* 802047C4 00201704  81 8C 00 08 */	lwz r12, 8(r12)
/* 802047C8 00201708  7D 89 03 A6 */	mtctr r12
/* 802047CC 0020170C  4E 80 04 21 */	bctrl 
/* 802047D0 00201710  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802047D4 00201714  40 82 01 20 */	bne .L_802048F4
/* 802047D8 00201718  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802047DC 0020171C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802047E0 00201720  81 83 00 00 */	lwz r12, 0(r3)
/* 802047E4 00201724  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802047E8 00201728  7D 89 03 A6 */	mtctr r12
/* 802047EC 0020172C  4E 80 04 21 */	bctrl 
/* 802047F0 00201730  90 61 00 0C */	stw r3, 0xc(r1)
.L_802047F4:
/* 802047F4 00201734  81 81 00 08 */	lwz r12, 8(r1)
/* 802047F8 00201738  38 61 00 08 */	addi r3, r1, 8
/* 802047FC 0020173C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204800 00201740  7D 89 03 A6 */	mtctr r12
/* 80204804 00201744  4E 80 04 21 */	bctrl 
/* 80204808 00201748  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020480C 0020174C  41 82 FF 94 */	beq .L_802047A0
/* 80204810 00201750  48 00 00 E4 */	b .L_802048F4
.L_80204814:
/* 80204814 00201754  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204818 00201758  81 83 00 00 */	lwz r12, 0(r3)
/* 8020481C 0020175C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204820 00201760  7D 89 03 A6 */	mtctr r12
/* 80204824 00201764  4E 80 04 21 */	bctrl 
/* 80204828 00201768  81 83 00 00 */	lwz r12, 0(r3)
/* 8020482C 0020176C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80204830 00201770  7D 89 03 A6 */	mtctr r12
/* 80204834 00201774  4E 80 04 21 */	bctrl 
/* 80204838 00201778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020483C 0020177C  28 00 00 00 */	cmplwi r0, 0
/* 80204840 00201780  40 82 00 24 */	bne .L_80204864
/* 80204844 00201784  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204848 00201788  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020484C 0020178C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204850 00201790  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204854 00201794  7D 89 03 A6 */	mtctr r12
/* 80204858 00201798  4E 80 04 21 */	bctrl 
/* 8020485C 0020179C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204860 002017A0  48 00 00 94 */	b .L_802048F4
.L_80204864:
/* 80204864 002017A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204868 002017A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020486C 002017AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80204870 002017B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204874 002017B4  7D 89 03 A6 */	mtctr r12
/* 80204878 002017B8  4E 80 04 21 */	bctrl 
/* 8020487C 002017BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204880 002017C0  48 00 00 58 */	b .L_802048D8
.L_80204884:
/* 80204884 002017C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204888 002017C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020488C 002017CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80204890 002017D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204894 002017D4  7D 89 03 A6 */	mtctr r12
/* 80204898 002017D8  4E 80 04 21 */	bctrl 
/* 8020489C 002017DC  7C 64 1B 78 */	mr r4, r3
/* 802048A0 002017E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802048A4 002017E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802048A8 002017E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802048AC 002017EC  7D 89 03 A6 */	mtctr r12
/* 802048B0 002017F0  4E 80 04 21 */	bctrl 
/* 802048B4 002017F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802048B8 002017F8  40 82 00 3C */	bne .L_802048F4
/* 802048BC 002017FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802048C0 00201800  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802048C4 00201804  81 83 00 00 */	lwz r12, 0(r3)
/* 802048C8 00201808  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802048CC 0020180C  7D 89 03 A6 */	mtctr r12
/* 802048D0 00201810  4E 80 04 21 */	bctrl 
/* 802048D4 00201814  90 61 00 0C */	stw r3, 0xc(r1)
.L_802048D8:
/* 802048D8 00201818  81 81 00 08 */	lwz r12, 8(r1)
/* 802048DC 0020181C  38 61 00 08 */	addi r3, r1, 8
/* 802048E0 00201820  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802048E4 00201824  7D 89 03 A6 */	mtctr r12
/* 802048E8 00201828  4E 80 04 21 */	bctrl 
/* 802048EC 0020182C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802048F0 00201830  41 82 FF 94 */	beq .L_80204884
.L_802048F4:
/* 802048F4 00201834  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802048F8 00201838  81 83 00 00 */	lwz r12, 0(r3)
/* 802048FC 0020183C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80204900 00201840  7D 89 03 A6 */	mtctr r12
/* 80204904 00201844  4E 80 04 21 */	bctrl 
/* 80204908 00201848  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020490C 0020184C  7C 04 18 40 */	cmplw r4, r3
/* 80204910 00201850  40 82 FF 04 */	bne .L_80204814
/* 80204914 00201854  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204918 00201858  7C 08 03 A6 */	mtlr r0
/* 8020491C 0020185C  38 21 00 20 */	addi r1, r1, 0x20
/* 80204920 00201860  4E 80 00 20 */	blr 

.global "doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80204924 00201864  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80204928 00201868  7C 08 02 A6 */	mflr r0
/* 8020492C 0020186C  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 80204930 00201870  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204934 00201874  38 00 00 00 */	li r0, 0
/* 80204938 00201878  38 84 1B 74 */	addi r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 8020493C 0020187C  28 00 00 00 */	cmplwi r0, 0
/* 80204940 00201880  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204944 00201884  90 81 00 08 */	stw r4, 8(r1)
/* 80204948 00201888  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020494C 0020188C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80204950 00201890  40 82 00 1C */	bne .L_8020496C
/* 80204954 00201894  81 83 00 00 */	lwz r12, 0(r3)
/* 80204958 00201898  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020495C 0020189C  7D 89 03 A6 */	mtctr r12
/* 80204960 002018A0  4E 80 04 21 */	bctrl 
/* 80204964 002018A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204968 002018A8  48 00 01 70 */	b .L_80204AD8
.L_8020496C:
/* 8020496C 002018AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80204970 002018B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80204974 002018B4  7D 89 03 A6 */	mtctr r12
/* 80204978 002018B8  4E 80 04 21 */	bctrl 
/* 8020497C 002018BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204980 002018C0  48 00 00 58 */	b .L_802049D8
.L_80204984:
/* 80204984 002018C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204988 002018C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020498C 002018CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80204990 002018D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204994 002018D4  7D 89 03 A6 */	mtctr r12
/* 80204998 002018D8  4E 80 04 21 */	bctrl 
/* 8020499C 002018DC  7C 64 1B 78 */	mr r4, r3
/* 802049A0 002018E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802049A4 002018E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802049A8 002018E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802049AC 002018EC  7D 89 03 A6 */	mtctr r12
/* 802049B0 002018F0  4E 80 04 21 */	bctrl 
/* 802049B4 002018F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802049B8 002018F8  40 82 01 20 */	bne .L_80204AD8
/* 802049BC 002018FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802049C0 00201900  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802049C4 00201904  81 83 00 00 */	lwz r12, 0(r3)
/* 802049C8 00201908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802049CC 0020190C  7D 89 03 A6 */	mtctr r12
/* 802049D0 00201910  4E 80 04 21 */	bctrl 
/* 802049D4 00201914  90 61 00 0C */	stw r3, 0xc(r1)
.L_802049D8:
/* 802049D8 00201918  81 81 00 08 */	lwz r12, 8(r1)
/* 802049DC 0020191C  38 61 00 08 */	addi r3, r1, 8
/* 802049E0 00201920  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802049E4 00201924  7D 89 03 A6 */	mtctr r12
/* 802049E8 00201928  4E 80 04 21 */	bctrl 
/* 802049EC 0020192C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802049F0 00201930  41 82 FF 94 */	beq .L_80204984
/* 802049F4 00201934  48 00 00 E4 */	b .L_80204AD8
.L_802049F8:
/* 802049F8 00201938  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802049FC 0020193C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204A00 00201940  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204A04 00201944  7D 89 03 A6 */	mtctr r12
/* 80204A08 00201948  4E 80 04 21 */	bctrl 
/* 80204A0C 0020194C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204A10 00201950  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80204A14 00201954  7D 89 03 A6 */	mtctr r12
/* 80204A18 00201958  4E 80 04 21 */	bctrl 
/* 80204A1C 0020195C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204A20 00201960  28 00 00 00 */	cmplwi r0, 0
/* 80204A24 00201964  40 82 00 24 */	bne .L_80204A48
/* 80204A28 00201968  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204A2C 0020196C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204A30 00201970  81 83 00 00 */	lwz r12, 0(r3)
/* 80204A34 00201974  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204A38 00201978  7D 89 03 A6 */	mtctr r12
/* 80204A3C 0020197C  4E 80 04 21 */	bctrl 
/* 80204A40 00201980  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204A44 00201984  48 00 00 94 */	b .L_80204AD8
.L_80204A48:
/* 80204A48 00201988  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204A4C 0020198C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204A50 00201990  81 83 00 00 */	lwz r12, 0(r3)
/* 80204A54 00201994  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204A58 00201998  7D 89 03 A6 */	mtctr r12
/* 80204A5C 0020199C  4E 80 04 21 */	bctrl 
/* 80204A60 002019A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80204A64 002019A4  48 00 00 58 */	b .L_80204ABC
.L_80204A68:
/* 80204A68 002019A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204A6C 002019AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204A70 002019B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80204A74 002019B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204A78 002019B8  7D 89 03 A6 */	mtctr r12
/* 80204A7C 002019BC  4E 80 04 21 */	bctrl 
/* 80204A80 002019C0  7C 64 1B 78 */	mr r4, r3
/* 80204A84 002019C4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80204A88 002019C8  81 83 00 00 */	lwz r12, 0(r3)
/* 80204A8C 002019CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80204A90 002019D0  7D 89 03 A6 */	mtctr r12
/* 80204A94 002019D4  4E 80 04 21 */	bctrl 
/* 80204A98 002019D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204A9C 002019DC  40 82 00 3C */	bne .L_80204AD8
/* 80204AA0 002019E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204AA4 002019E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204AA8 002019E8  81 83 00 00 */	lwz r12, 0(r3)
/* 80204AAC 002019EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80204AB0 002019F0  7D 89 03 A6 */	mtctr r12
/* 80204AB4 002019F4  4E 80 04 21 */	bctrl 
/* 80204AB8 002019F8  90 61 00 0C */	stw r3, 0xc(r1)
.L_80204ABC:
/* 80204ABC 002019FC  81 81 00 08 */	lwz r12, 8(r1)
/* 80204AC0 00201A00  38 61 00 08 */	addi r3, r1, 8
/* 80204AC4 00201A04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80204AC8 00201A08  7D 89 03 A6 */	mtctr r12
/* 80204ACC 00201A0C  4E 80 04 21 */	bctrl 
/* 80204AD0 00201A10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80204AD4 00201A14  41 82 FF 94 */	beq .L_80204A68
.L_80204AD8:
/* 80204AD8 00201A18  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80204ADC 00201A1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80204AE0 00201A20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80204AE4 00201A24  7D 89 03 A6 */	mtctr r12
/* 80204AE8 00201A28  4E 80 04 21 */	bctrl 
/* 80204AEC 00201A2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80204AF0 00201A30  7C 04 18 40 */	cmplw r4, r3
/* 80204AF4 00201A34  40 82 FF 04 */	bne .L_802049F8
/* 80204AF8 00201A38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204AFC 00201A3C  7C 08 03 A6 */	mtlr r0
/* 80204B00 00201A40  38 21 00 20 */	addi r1, r1, 0x20
/* 80204B04 00201A44  4E 80 00 20 */	blr 

.global "__ct__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"__ct__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80204B08 00201A48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204B0C 00201A4C  7C 08 02 A6 */	mflr r0
/* 80204B10 00201A50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204B14 00201A54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80204B18 00201A58  7C 7F 1B 78 */	mr r31, r3
/* 80204B1C 00201A5C  48 20 C8 75 */	bl __ct__5CNodeFv
/* 80204B20 00201A60  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80204B24 00201A64  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
/* 80204B28 00201A68  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80204B2C 00201A6C  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 80204B30 00201A70  90 1F 00 00 */	stw r0, 0(r31)
/* 80204B34 00201A74  38 03 EC B8 */	addi r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
/* 80204B38 00201A78  3C 80 80 4C */	lis r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80204B3C 00201A7C  3C 60 80 4C */	lis r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha
/* 80204B40 00201A80  90 1F 00 00 */	stw r0, 0(r31)
/* 80204B44 00201A84  39 00 00 00 */	li r8, 0
/* 80204B48 00201A88  38 E4 EA E4 */	addi r7, r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
/* 80204B4C 00201A8C  38 A3 EB 60 */	addi r5, r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l
/* 80204B50 00201A90  99 1F 00 18 */	stb r8, 0x18(r31)
/* 80204B54 00201A94  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 80204B58 00201A98  38 C7 00 2C */	addi r6, r7, 0x2c
/* 80204B5C 00201A9C  38 85 00 2C */	addi r4, r5, 0x2c
/* 80204B60 00201AA0  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80204B64 00201AA4  38 00 00 01 */	li r0, 1
/* 80204B68 00201AA8  7F E3 FB 78 */	mr r3, r31
/* 80204B6C 00201AAC  90 FF 00 00 */	stw r7, 0(r31)
/* 80204B70 00201AB0  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 80204B74 00201AB4  90 BF 00 00 */	stw r5, 0(r31)
/* 80204B78 00201AB8  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80204B7C 00201ABC  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80204B80 00201AC0  91 1F 00 24 */	stw r8, 0x24(r31)
/* 80204B84 00201AC4  91 1F 00 20 */	stw r8, 0x20(r31)
/* 80204B88 00201AC8  91 1F 00 28 */	stw r8, 0x28(r31)
/* 80204B8C 00201ACC  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 80204B90 00201AD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80204B94 00201AD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204B98 00201AD8  7C 08 03 A6 */	mtlr r0
/* 80204B9C 00201ADC  38 21 00 10 */	addi r1, r1, 0x10
/* 80204BA0 00201AE0  4E 80 00 20 */	blr 

.global "getFlag__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
"getFlag__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet":
/* 80204BA4 00201AE4  28 04 00 00 */	cmplwi r4, 0
/* 80204BA8 00201AE8  41 82 00 14 */	beq .L_80204BBC
/* 80204BAC 00201AEC  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 80204BB0 00201AF0  80 04 04 40 */	lwz r0, 0x440(r4)
/* 80204BB4 00201AF4  7C 63 00 AE */	lbzx r3, r3, r0
/* 80204BB8 00201AF8  4E 80 00 20 */	blr 
.L_80204BBC:
/* 80204BBC 00201AFC  38 60 FF FF */	li r3, -1
/* 80204BC0 00201B00  4E 80 00 20 */	blr 

.global "setFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
"setFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet":
/* 80204BC4 00201B04  28 04 00 00 */	cmplwi r4, 0
/* 80204BC8 00201B08  4D 82 00 20 */	beqlr 
/* 80204BCC 00201B0C  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 80204BD0 00201B10  38 A0 00 65 */	li r5, 0x65
/* 80204BD4 00201B14  80 04 04 40 */	lwz r0, 0x440(r4)
/* 80204BD8 00201B18  7C A3 01 AE */	stbx r5, r3, r0
/* 80204BDC 00201B1C  4E 80 00 20 */	blr 

.global "setRevival__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
"setRevival__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet":
/* 80204BE0 00201B20  28 04 00 00 */	cmplwi r4, 0
/* 80204BE4 00201B24  4D 82 00 20 */	beqlr 
/* 80204BE8 00201B28  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 80204BEC 00201B2C  38 A0 00 64 */	li r5, 0x64
/* 80204BF0 00201B30  80 04 04 40 */	lwz r0, 0x440(r4)
/* 80204BF4 00201B34  7C A3 01 AE */	stbx r5, r3, r0
/* 80204BF8 00201B38  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
"setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet":
/* 80204BFC 00201B3C  28 04 00 00 */	cmplwi r4, 0
/* 80204C00 00201B40  4D 82 00 20 */	beqlr 
/* 80204C04 00201B44  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 80204C08 00201B48  38 A0 00 00 */	li r5, 0
/* 80204C0C 00201B4C  80 04 04 40 */	lwz r0, 0x440(r4)
/* 80204C10 00201B50  7C A3 01 AE */	stbx r5, r3, r0
/* 80204C14 00201B54  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
"setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi":
/* 80204C18 00201B58  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 80204C1C 00201B5C  38 00 00 00 */	li r0, 0
/* 80204C20 00201B60  7C 03 21 AE */	stbx r0, r3, r4
/* 80204C24 00201B64  4E 80 00 20 */	blr 

.global "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80204C28 00201B68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204C2C 00201B6C  7C 08 02 A6 */	mflr r0
/* 80204C30 00201B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204C34 00201B74  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80204C38 00201B78  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80204C3C 00201B7C  7D 89 03 A6 */	mtctr r12
/* 80204C40 00201B80  4E 80 04 21 */	bctrl 
/* 80204C44 00201B84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204C48 00201B88  7C 08 03 A6 */	mtlr r0
/* 80204C4C 00201B8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80204C50 00201B90  4E 80 00 20 */	blr 

.global "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
"get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv":
/* 80204C54 00201B94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204C58 00201B98  7C 08 02 A6 */	mflr r0
/* 80204C5C 00201B9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204C60 00201BA0  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80204C64 00201BA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80204C68 00201BA8  7D 89 03 A6 */	mtctr r12
/* 80204C6C 00201BAC  4E 80 04 21 */	bctrl 
/* 80204C70 00201BB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204C74 00201BB4  7C 08 03 A6 */	mtlr r0
/* 80204C78 00201BB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80204C7C 00201BBC  4E 80 00 20 */	blr 

.global "getObjectPtr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
"getObjectPtr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv":
/* 80204C80 00201BC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204C84 00201BC4  7C 08 02 A6 */	mflr r0
/* 80204C88 00201BC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204C8C 00201BCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80204C90 00201BD0  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80204C94 00201BD4  7D 89 03 A6 */	mtctr r12
/* 80204C98 00201BD8  4E 80 04 21 */	bctrl 
/* 80204C9C 00201BDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204CA0 00201BE0  7C 08 03 A6 */	mtlr r0
/* 80204CA4 00201BE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80204CA8 00201BE8  4E 80 00 20 */	blr 

.global "birthFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game12PelletConfig"
"birthFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game12PelletConfig":
/* 80204CAC 00201BEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80204CB0 00201BF0  7C 08 02 A6 */	mflr r0
/* 80204CB4 00201BF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204CB8 00201BF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80204CBC 00201BFC  3B E0 00 00 */	li r31, 0
/* 80204CC0 00201C00  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80204CC4 00201C04  7C 9E 23 78 */	mr r30, r4
/* 80204CC8 00201C08  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80204CCC 00201C0C  7C 7D 1B 78 */	mr r29, r3
/* 80204CD0 00201C10  48 00 00 40 */	b .L_80204D10
.L_80204CD4:
/* 80204CD4 00201C14  80 7D 00 9C */	lwz r3, 0x9c(r29)
/* 80204CD8 00201C18  7C 03 F8 AE */	lbzx r0, r3, r31
/* 80204CDC 00201C1C  28 00 00 65 */	cmplwi r0, 0x65
/* 80204CE0 00201C20  40 82 00 2C */	bne .L_80204D0C
/* 80204CE4 00201C24  38 7D 00 70 */	addi r3, r29, 0x70
/* 80204CE8 00201C28  7F E4 FB 78 */	mr r4, r31
/* 80204CEC 00201C2C  81 9D 00 70 */	lwz r12, 0x70(r29)
/* 80204CF0 00201C30  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80204CF4 00201C34  7D 89 03 A6 */	mtctr r12
/* 80204CF8 00201C38  4E 80 04 21 */	bctrl 
/* 80204CFC 00201C3C  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 80204D00 00201C40  7C 00 F0 40 */	cmplw r0, r30
/* 80204D04 00201C44  40 82 00 08 */	bne .L_80204D0C
/* 80204D08 00201C48  48 00 00 18 */	b .L_80204D20
.L_80204D0C:
/* 80204D0C 00201C4C  3B FF 00 01 */	addi r31, r31, 1
.L_80204D10:
/* 80204D10 00201C50  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 80204D14 00201C54  7C 1F 00 00 */	cmpw r31, r0
/* 80204D18 00201C58  41 80 FF BC */	blt .L_80204CD4
/* 80204D1C 00201C5C  38 60 00 00 */	li r3, 0
.L_80204D20:
/* 80204D20 00201C60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204D24 00201C64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80204D28 00201C68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80204D2C 00201C6C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80204D30 00201C70  7C 08 03 A6 */	mtlr r0
/* 80204D34 00201C74  38 21 00 20 */	addi r1, r1, 0x20
/* 80204D38 00201C78  4E 80 00 20 */	blr 

.global "alloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
"alloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi":
/* 80204D3C 00201C7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204D40 00201C80  7C 08 02 A6 */	mflr r0
/* 80204D44 00201C84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204D48 00201C88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80204D4C 00201C8C  93 C1 00 08 */	stw r30, 8(r1)
/* 80204D50 00201C90  7C 7E 1B 78 */	mr r30, r3
/* 80204D54 00201C94  38 7E 00 70 */	addi r3, r30, 0x70
/* 80204D58 00201C98  48 00 00 C9 */	bl "alloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
/* 80204D5C 00201C9C  7F C3 F3 78 */	mr r3, r30
/* 80204D60 00201CA0  48 00 00 5D */	bl "onAlloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
/* 80204D64 00201CA4  3B E0 00 00 */	li r31, 0
/* 80204D68 00201CA8  48 00 00 30 */	b .L_80204D98
.L_80204D6C:
/* 80204D6C 00201CAC  38 7E 00 70 */	addi r3, r30, 0x70
/* 80204D70 00201CB0  7F E4 FB 78 */	mr r4, r31
/* 80204D74 00201CB4  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 80204D78 00201CB8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80204D7C 00201CBC  7D 89 03 A6 */	mtctr r12
/* 80204D80 00201CC0  4E 80 04 21 */	bctrl 
/* 80204D84 00201CC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80204D88 00201CC8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80204D8C 00201CCC  7D 89 03 A6 */	mtctr r12
/* 80204D90 00201CD0  4E 80 04 21 */	bctrl 
/* 80204D94 00201CD4  3B FF 00 01 */	addi r31, r31, 1
.L_80204D98:
/* 80204D98 00201CD8  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80204D9C 00201CDC  7C 1F 00 00 */	cmpw r31, r0
/* 80204DA0 00201CE0  41 80 FF CC */	blt .L_80204D6C
/* 80204DA4 00201CE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204DA8 00201CE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80204DAC 00201CEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80204DB0 00201CF0  7C 08 03 A6 */	mtlr r0
/* 80204DB4 00201CF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80204DB8 00201CF8  4E 80 00 20 */	blr 

.global "onAlloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"onAlloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80204DBC 00201CFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204DC0 00201D00  7C 08 02 A6 */	mflr r0
/* 80204DC4 00201D04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204DC8 00201D08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80204DCC 00201D0C  3B E0 00 00 */	li r31, 0
/* 80204DD0 00201D10  93 C1 00 08 */	stw r30, 8(r1)
/* 80204DD4 00201D14  7C 7E 1B 78 */	mr r30, r3
/* 80204DD8 00201D18  48 00 00 24 */	b .L_80204DFC
.L_80204DDC:
/* 80204DDC 00201D1C  38 7E 00 70 */	addi r3, r30, 0x70
/* 80204DE0 00201D20  7F E4 FB 78 */	mr r4, r31
/* 80204DE4 00201D24  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 80204DE8 00201D28  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80204DEC 00201D2C  7D 89 03 A6 */	mtctr r12
/* 80204DF0 00201D30  4E 80 04 21 */	bctrl 
/* 80204DF4 00201D34  93 E3 04 40 */	stw r31, 0x440(r3)
/* 80204DF8 00201D38  3B FF 00 01 */	addi r31, r31, 1
.L_80204DFC:
/* 80204DFC 00201D3C  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80204E00 00201D40  7C 1F 00 00 */	cmpw r31, r0
/* 80204E04 00201D44  41 80 FF D8 */	blt .L_80204DDC
/* 80204E08 00201D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204E0C 00201D4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80204E10 00201D50  83 C1 00 08 */	lwz r30, 8(r1)
/* 80204E14 00201D54  7C 08 03 A6 */	mtlr r0
/* 80204E18 00201D58  38 21 00 10 */	addi r1, r1, 0x10
/* 80204E1C 00201D5C  4E 80 00 20 */	blr 

.global "alloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
"alloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi":
/* 80204E20 00201D60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80204E24 00201D64  7C 08 02 A6 */	mflr r0
/* 80204E28 00201D68  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204E2C 00201D6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80204E30 00201D70  7C 9F 23 78 */	mr r31, r4
/* 80204E34 00201D74  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80204E38 00201D78  7C 7E 1B 78 */	mr r30, r3
/* 80204E3C 00201D7C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80204E40 00201D80  7F FD FB 78 */	mr r29, r31
/* 80204E44 00201D84  1C 7D 04 58 */	mulli r3, r29, 0x458
/* 80204E48 00201D88  93 81 00 10 */	stw r28, 0x10(r1)
/* 80204E4C 00201D8C  38 63 00 10 */	addi r3, r3, 0x10
/* 80204E50 00201D90  4B E1 F1 5D */	bl __nwa__FUl
/* 80204E54 00201D94  3C 80 80 20 */	lis r4, __ct__Q34Game10PelletItem6ObjectFv@ha
/* 80204E58 00201D98  7F A7 EB 78 */	mr r7, r29
/* 80204E5C 00201D9C  38 84 4F A8 */	addi r4, r4, __ct__Q34Game10PelletItem6ObjectFv@l
/* 80204E60 00201DA0  38 A0 00 00 */	li r5, 0
/* 80204E64 00201DA4  38 C0 04 58 */	li r6, 0x458
/* 80204E68 00201DA8  4B EB CB 89 */	bl __construct_new_array
/* 80204E6C 00201DAC  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80204E70 00201DB0  38 00 00 00 */	li r0, 0
/* 80204E74 00201DB4  7F A3 EB 78 */	mr r3, r29
/* 80204E78 00201DB8  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80204E7C 00201DBC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80204E80 00201DC0  4B E1 F1 2D */	bl __nwa__FUl
/* 80204E84 00201DC4  2C 1F 00 00 */	cmpwi r31, 0
/* 80204E88 00201DC8  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80204E8C 00201DCC  39 60 00 00 */	li r11, 0
/* 80204E90 00201DD0  40 81 00 B0 */	ble .L_80204F40
/* 80204E94 00201DD4  2C 1F 00 08 */	cmpwi r31, 8
/* 80204E98 00201DD8  38 7F FF F8 */	addi r3, r31, -8
/* 80204E9C 00201DDC  40 81 00 80 */	ble .L_80204F1C
/* 80204EA0 00201DE0  38 03 00 07 */	addi r0, r3, 7
/* 80204EA4 00201DE4  54 00 E8 FE */	srwi r0, r0, 3
/* 80204EA8 00201DE8  7C 09 03 A6 */	mtctr r0
/* 80204EAC 00201DEC  2C 03 00 00 */	cmpwi r3, 0
/* 80204EB0 00201DF0  40 81 00 6C */	ble .L_80204F1C
.L_80204EB4:
/* 80204EB4 00201DF4  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80204EB8 00201DF8  39 40 00 01 */	li r10, 1
/* 80204EBC 00201DFC  39 0B 00 01 */	addi r8, r11, 1
/* 80204EC0 00201E00  38 EB 00 02 */	addi r7, r11, 2
/* 80204EC4 00201E04  7D 43 59 AE */	stbx r10, r3, r11
/* 80204EC8 00201E08  38 CB 00 03 */	addi r6, r11, 3
/* 80204ECC 00201E0C  38 AB 00 04 */	addi r5, r11, 4
/* 80204ED0 00201E10  38 8B 00 05 */	addi r4, r11, 5
/* 80204ED4 00201E14  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 80204ED8 00201E18  38 6B 00 06 */	addi r3, r11, 6
/* 80204EDC 00201E1C  38 0B 00 07 */	addi r0, r11, 7
/* 80204EE0 00201E20  39 6B 00 08 */	addi r11, r11, 8
/* 80204EE4 00201E24  7D 49 41 AE */	stbx r10, r9, r8
/* 80204EE8 00201E28  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 80204EEC 00201E2C  7D 48 39 AE */	stbx r10, r8, r7
/* 80204EF0 00201E30  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 80204EF4 00201E34  7D 47 31 AE */	stbx r10, r7, r6
/* 80204EF8 00201E38  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 80204EFC 00201E3C  7D 46 29 AE */	stbx r10, r6, r5
/* 80204F00 00201E40  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 80204F04 00201E44  7D 45 21 AE */	stbx r10, r5, r4
/* 80204F08 00201E48  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80204F0C 00201E4C  7D 44 19 AE */	stbx r10, r4, r3
/* 80204F10 00201E50  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80204F14 00201E54  7D 43 01 AE */	stbx r10, r3, r0
/* 80204F18 00201E58  42 00 FF 9C */	bdnz .L_80204EB4
.L_80204F1C:
/* 80204F1C 00201E5C  7C 0B F8 50 */	subf r0, r11, r31
/* 80204F20 00201E60  38 80 00 01 */	li r4, 1
/* 80204F24 00201E64  7C 09 03 A6 */	mtctr r0
/* 80204F28 00201E68  7C 0B F8 00 */	cmpw r11, r31
/* 80204F2C 00201E6C  40 80 00 14 */	bge .L_80204F40
.L_80204F30:
/* 80204F30 00201E70  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80204F34 00201E74  7C 83 59 AE */	stbx r4, r3, r11
/* 80204F38 00201E78  39 6B 00 01 */	addi r11, r11, 1
/* 80204F3C 00201E7C  42 00 FF F4 */	bdnz .L_80204F30
.L_80204F40:
/* 80204F40 00201E80  7F C3 F3 78 */	mr r3, r30
/* 80204F44 00201E84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80204F48 00201E88  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80204F4C 00201E8C  7D 89 03 A6 */	mtctr r12
/* 80204F50 00201E90  4E 80 04 21 */	bctrl 
/* 80204F54 00201E94  3B 80 00 00 */	li r28, 0
/* 80204F58 00201E98  3B A0 00 00 */	li r29, 0
/* 80204F5C 00201E9C  48 00 00 24 */	b .L_80204F80
.L_80204F60:
/* 80204F60 00201EA0  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 80204F64 00201EA4  7C 60 EA 14 */	add r3, r0, r29
/* 80204F68 00201EA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80204F6C 00201EAC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80204F70 00201EB0  7D 89 03 A6 */	mtctr r12
/* 80204F74 00201EB4  4E 80 04 21 */	bctrl 
/* 80204F78 00201EB8  3B BD 04 58 */	addi r29, r29, 0x458
/* 80204F7C 00201EBC  3B 9C 00 01 */	addi r28, r28, 1
.L_80204F80:
/* 80204F80 00201EC0  7C 1C F8 00 */	cmpw r28, r31
/* 80204F84 00201EC4  41 80 FF DC */	blt .L_80204F60
/* 80204F88 00201EC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204F8C 00201ECC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80204F90 00201ED0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80204F94 00201ED4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80204F98 00201ED8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80204F9C 00201EDC  7C 08 03 A6 */	mtlr r0
/* 80204FA0 00201EE0  38 21 00 20 */	addi r1, r1, 0x20
/* 80204FA4 00201EE4  4E 80 00 20 */	blr 

.global __ct__Q34Game10PelletItem6ObjectFv
__ct__Q34Game10PelletItem6ObjectFv:
/* 80204FA8 00201EE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80204FAC 00201EEC  7C 08 02 A6 */	mflr r0
/* 80204FB0 00201EF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80204FB4 00201EF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80204FB8 00201EF8  7C 7F 1B 78 */	mr r31, r3
/* 80204FBC 00201EFC  4B F6 16 C5 */	bl __ct__Q24Game6PelletFv
/* 80204FC0 00201F00  3C 80 80 4C */	lis r4, __vt__Q34Game10PelletItem6Object@ha
/* 80204FC4 00201F04  7F E3 FB 78 */	mr r3, r31
/* 80204FC8 00201F08  38 A4 EC E4 */	addi r5, r4, __vt__Q34Game10PelletItem6Object@l
/* 80204FCC 00201F0C  90 BF 00 00 */	stw r5, 0(r31)
/* 80204FD0 00201F10  38 85 01 B4 */	addi r4, r5, 0x1b4
/* 80204FD4 00201F14  38 05 01 C0 */	addi r0, r5, 0x1c0
/* 80204FD8 00201F18  90 9F 03 14 */	stw r4, 0x314(r31)
/* 80204FDC 00201F1C  90 1F 03 18 */	stw r0, 0x318(r31)
/* 80204FE0 00201F20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80204FE4 00201F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80204FE8 00201F28  7C 08 03 A6 */	mtlr r0
/* 80204FEC 00201F2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80204FF0 00201F30  4E 80 00 20 */	blr 

.global "@84@__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"@84@__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80204FF4 00201F34  38 63 FF AC */	addi r3, r3, -84
/* 80204FF8 00201F38  4B FF E1 50 */	b "__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80204FFC 00201F3C  38 63 FF E4 */	addi r3, r3, -28
/* 80205000 00201F40  4B F6 D3 B8 */	b "resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
"@28@doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics":
/* 80205004 00201F44  38 63 FF E4 */	addi r3, r3, -28
/* 80205008 00201F48  4B FF EE 2C */	b "doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"

.global "@28@doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff"
"@28@doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff":
/* 8020500C 00201F4C  38 63 FF E4 */	addi r3, r3, -28
/* 80205010 00201F50  4B FF ED 94 */	b "doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff"

.global "@28@doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80205014 00201F54  38 63 FF E4 */	addi r3, r3, -28
/* 80205018 00201F58  4B FF ED 0C */	b "doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
"@28@doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi":
/* 8020501C 00201F5C  38 63 FF E4 */	addi r3, r3, -28
/* 80205020 00201F60  4B FF EC 74 */	b "doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"

.global "@28@doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80205024 00201F64  38 63 FF E4 */	addi r3, r3, -28
/* 80205028 00201F68  4B FF EB EC */	b "doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 8020502C 00201F6C  38 63 FF E4 */	addi r3, r3, -28
/* 80205030 00201F70  4B FF EB 64 */	b "doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
"@28@doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics":
/* 80205034 00201F74  38 63 FF E4 */	addi r3, r3, -28
/* 80205038 00201F78  4B FF EF 48 */	b "doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"

.global "@28@doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"
"@28@doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff":
/* 8020503C 00201F7C  38 63 FF E4 */	addi r3, r3, -28
/* 80205040 00201F80  4B FF F1 34 */	b "doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"

.global "@28@doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80205044 00201F84  38 63 FF E4 */	addi r3, r3, -28
/* 80205048 00201F88  4B FF F3 20 */	b "doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"
"@28@doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi":
/* 8020504C 00201F8C  38 63 FF E4 */	addi r3, r3, -28
/* 80205050 00201F90  4B FF F4 FC */	b "doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"

.global "@28@doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 80205054 00201F94  38 63 FF E4 */	addi r3, r3, -28
/* 80205058 00201F98  4B FF F6 E8 */	b "doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@28@doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
"@28@doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv":
/* 8020505C 00201F9C  38 63 FF E4 */	addi r3, r3, -28
/* 80205060 00201FA0  4B FF F8 C4 */	b "doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"

.global "@84@getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"@84@getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 80205064 00201FA4  38 63 FF AC */	addi r3, r3, -84
/* 80205068 00201FA8  4B FF FB C0 */	b "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"

.global "@84@getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
"@84@getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv":
/* 8020506C 00201FAC  38 63 FF AC */	addi r3, r3, -84
/* 80205070 00201FB0  4B FF E9 B4 */	b "getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"

.global "@84@getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
"@84@getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv":
/* 80205074 00201FB4  38 63 FF AC */	addi r3, r3, -84
/* 80205078 00201FB8  4B FF E9 80 */	b "getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"

.global "@84@get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
"@84@get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv":
/* 8020507C 00201FBC  38 63 FF AC */	addi r3, r3, -84
/* 80205080 00201FC0  4B FF FB D4 */	b "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"

.global "@84@__dt__Q34Game10PelletItem3MgrFv"
"@84@__dt__Q34Game10PelletItem3MgrFv":
/* 80205084 00201FC4  38 63 FF AC */	addi r3, r3, -84
/* 80205088 00201FC8  4B FF E5 B4 */	b __dt__Q34Game10PelletItem3MgrFv
