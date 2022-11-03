.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_pelletFruit_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80481B40
lbl_80481B40:
	.4byte 0x50656C6C
	.4byte 0x65744672
	.4byte 0x75697400
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804BDFD0
lbl_804BDFD0:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game11PelletFruit3Mgr
__vt__Q34Game11PelletFruit3Mgr:
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doEntry__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSetView__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "doViewCalc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSimulation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Ff"
	.4byte "doDirectDraw__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "birth__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "kill__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte setupResources__Q34Game11PelletFruit3MgrFv
	.4byte "birthFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte onCreateModel__Q34Game11PelletFruit3MgrFPQ28SysShape5Model
	.4byte getMgrName__Q34Game11PelletFruit3MgrFv
	.4byte getMgrID__Q34Game11PelletFruit3MgrFv
	.4byte "setRevival__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
	.4byte "getObjectPtr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q34Game11PelletFruit3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
	.4byte "@84@getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "@84@getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@84@getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@84@get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getAt__38Container<Q34Game11PelletFruit6Object>Fi"
	.4byte "getTo__38Container<Q34Game11PelletFruit6Object>Fv"
	.4byte "get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte __dt__Q34Game11PelletFruit3MgrFv
.global "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"
"__vt__38ObjectMgr<Q34Game11PelletFruit6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__38Container<Q34Game11PelletFruit6Object>Fi"
	.4byte "getTo__38Container<Q34Game11PelletFruit6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@28@doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@28@doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "@28@doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@28@doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff"
	.4byte "@28@doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff"
	.4byte "doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
.global "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"
"__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
	.4byte "getNext__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getStart__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "getEnd__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "get__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getAt__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "getTo__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@28@doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@28@doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "@28@doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@28@doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff"
	.4byte "@28@doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff"
	.4byte "doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
	.4byte "birth__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "clearMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "onAlloc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
.global "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"
"__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>":
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doEntry__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSetView__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "doViewCalc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "doSimulation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Ff"
	.4byte "doDirectDraw__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "birth__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "kill__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte 0
	.4byte "birthFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
	.4byte "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte "onCreateModel__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ28SysShape5Model"
	.4byte 0
	.4byte 0
	.4byte "setRevival__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
	.4byte "getObjectPtr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
	.4byte "@84@getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "@84@getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@84@getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
	.4byte "@84@get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "getAt__38Container<Q34Game11PelletFruit6Object>Fi"
	.4byte "getTo__38Container<Q34Game11PelletFruit6Object>Fv"
	.4byte "get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
	.4byte "__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
.global "__vt__38Container<Q34Game11PelletFruit6Object>"
"__vt__38Container<Q34Game11PelletFruit6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__38Container<Q34Game11PelletFruit6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__38Container<Q34Game11PelletFruit6Object>Fi"
	.4byte "getTo__38Container<Q34Game11PelletFruit6Object>Fv"
.global __vt__Q34Game11PelletFruit6Object
__vt__Q34Game11PelletFruit6Object:
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
	.4byte constructor__Q24Game6PelletFv
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
	.4byte do_onInit__Q34Game11PelletFruit6ObjectFPQ24Game15CreatureInitArg
	.4byte onCreateShape__Q24Game6PelletFv
	.4byte theEntry__Q24Game6PelletFv
	.4byte onBounce__Q24Game6PelletFv
	.4byte shadowOn__Q24Game6PelletFv
	.4byte shadowOff__Q24Game6PelletFv
	.4byte isPickable__Q24Game6PelletFv
	.4byte getBedamaColor__Q24Game6PelletFv
	.4byte do_update__Q34Game11PelletFruit6ObjectFv
	.4byte onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
	.4byte getKind__Q34Game11PelletFruit6ObjectFv
	.4byte changeMaterial__Q34Game11PelletFruit6ObjectFv
	.4byte "createKiraEffect__Q24Game6PelletFR10Vector3<f>"
	.4byte getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
	.4byte isCarried__Q24Game6PelletFv
	.4byte isPicked__Q24Game6PelletFv
	.4byte sound_otakaraEventStart__Q24Game6PelletFv
	.4byte sound_otakaraEventRestart__Q24Game6PelletFv
	.4byte sound_otakaraEventStop__Q24Game6PelletFv
	.4byte sound_otakaraEventFinish__Q24Game6PelletFv
.global "__vt__37Iterator<Q34Game11PelletFruit6Object>"
"__vt__37Iterator<Q34Game11PelletFruit6Object>":
	.4byte 0
	.4byte 0
	.4byte "first__37Iterator<Q34Game11PelletFruit6Object>Fv"
	.4byte "next__37Iterator<Q34Game11PelletFruit6Object>Fv"
	.4byte "isDone__37Iterator<Q34Game11PelletFruit6Object>Fv"
	.4byte "__ml__37Iterator<Q34Game11PelletFruit6Object>Fv"
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515B88
lbl_80515B88:
	.skip 0x4
.global lbl_80515B8C
lbl_80515B8C:
	.skip 0x4
.global mgr__Q24Game11PelletFruit
mgr__Q24Game11PelletFruit:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519D08
lbl_80519D08:
	.4byte 0x42C80000
.global lbl_80519D0C
lbl_80519D0C:
	.4byte 0x00000000
.global lbl_80519D10
lbl_80519D10:
	.4byte 0x66727569
	.4byte 0x74000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global do_onInit__Q34Game11PelletFruit6ObjectFPQ24Game15CreatureInitArg
do_onInit__Q34Game11PelletFruit6ObjectFPQ24Game15CreatureInitArg:
/* 801FD9B8 001FA8F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FD9BC 001FA8FC  7C 08 02 A6 */	mflr r0
/* 801FD9C0 001FA900  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FD9C4 001FA904  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FD9C8 001FA908  7C 7F 1B 78 */	mr r31, r3
/* 801FD9CC 001FA90C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801FD9D0 001FA910  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801FD9D4 001FA914  2C 00 00 00 */	cmpwi r0, 0
/* 801FD9D8 001FA918  40 82 00 34 */	bne .L_801FDA0C
/* 801FD9DC 001FA91C  80 64 00 58 */	lwz r3, 0x58(r4)
/* 801FD9E0 001FA920  81 83 00 00 */	lwz r12, 0(r3)
/* 801FD9E4 001FA924  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801FD9E8 001FA928  7D 89 03 A6 */	mtctr r12
/* 801FD9EC 001FA92C  4E 80 04 21 */	bctrl 
/* 801FD9F0 001FA930  28 03 00 00 */	cmplwi r3, 0
/* 801FD9F4 001FA934  41 82 00 18 */	beq .L_801FDA0C
/* 801FD9F8 001FA938  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801FD9FC 001FA93C  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 801FDA00 001FA940  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 801FDA04 001FA944  D0 1F 04 58 */	stfs f0, 0x458(r31)
/* 801FDA08 001FA948  48 00 00 0C */	b .L_801FDA14
.L_801FDA0C:
/* 801FDA0C 001FA94C  C0 02 B9 A8 */	lfs f0, lbl_80519D08@sda21(r2)
/* 801FDA10 001FA950  D0 1F 04 58 */	stfs f0, 0x458(r31)
.L_801FDA14:
/* 801FDA14 001FA954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FDA18 001FA958  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FDA1C 001FA95C  7C 08 03 A6 */	mtlr r0
/* 801FDA20 001FA960  38 21 00 10 */	addi r1, r1, 0x10
/* 801FDA24 001FA964  4E 80 00 20 */	blr 

.global do_update__Q34Game11PelletFruit6ObjectFv
do_update__Q34Game11PelletFruit6ObjectFv:
/* 801FDA28 001FA968  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801FDA2C 001FA96C  7C 08 02 A6 */	mflr r0
/* 801FDA30 001FA970  90 01 00 54 */	stw r0, 0x54(r1)
/* 801FDA34 001FA974  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801FDA38 001FA978  7C 7F 1B 78 */	mr r31, r3
/* 801FDA3C 001FA97C  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 801FDA40 001FA980  28 00 00 00 */	cmplwi r0, 0
/* 801FDA44 001FA984  40 82 01 50 */	bne .L_801FDB94
/* 801FDA48 001FA988  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 801FDA4C 001FA98C  28 00 00 00 */	cmplwi r0, 0
/* 801FDA50 001FA990  40 82 01 44 */	bne .L_801FDB94
/* 801FDA54 001FA994  4B F6 AD 49 */	bl getStateID__Q24Game6PelletFv
/* 801FDA58 001FA998  2C 03 00 01 */	cmpwi r3, 1
/* 801FDA5C 001FA99C  41 82 01 38 */	beq .L_801FDB94
/* 801FDA60 001FA9A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801FDA64 001FA9A4  C0 5F 04 58 */	lfs f2, 0x458(r31)
/* 801FDA68 001FA9A8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801FDA6C 001FA9AC  C0 02 B9 AC */	lfs f0, lbl_80519D0C@sda21(r2)
/* 801FDA70 001FA9B0  EC 22 08 28 */	fsubs f1, f2, f1
/* 801FDA74 001FA9B4  D0 3F 04 58 */	stfs f1, 0x458(r31)
/* 801FDA78 001FA9B8  C0 3F 04 58 */	lfs f1, 0x458(r31)
/* 801FDA7C 001FA9BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801FDA80 001FA9C0  4C 40 13 82 */	cror 2, 0, 2
/* 801FDA84 001FA9C4  40 82 01 10 */	bne .L_801FDB94
/* 801FDA88 001FA9C8  7F E4 FB 78 */	mr r4, r31
/* 801FDA8C 001FA9CC  38 61 00 08 */	addi r3, r1, 8
/* 801FDA90 001FA9D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801FDA94 001FA9D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FDA98 001FA9D8  7D 89 03 A6 */	mtctr r12
/* 801FDA9C 001FA9DC  4E 80 04 21 */	bctrl 
/* 801FDAA0 001FA9E0  C0 41 00 08 */	lfs f2, 8(r1)
/* 801FDAA4 001FA9E4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801FDAA8 001FA9E8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801FDAAC 001FA9EC  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801FDAB0 001FA9F0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801FDAB4 001FA9F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801FDAB8 001FA9F8  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801FDABC 001FA9FC  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801FDAC0 001FAA00  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801FDAC4 001FAA04  A0 1F 04 3E */	lhz r0, 0x43e(r31)
/* 801FDAC8 001FAA08  28 00 00 00 */	cmplwi r0, 0
/* 801FDACC 001FAA0C  40 82 00 54 */	bne .L_801FDB20
/* 801FDAD0 001FAA10  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801FDAD4 001FAA14  38 A0 00 00 */	li r5, 0
/* 801FDAD8 001FAA18  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801FDADC 001FAA1C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801FDAE0 001FAA20  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FDAE4 001FAA24  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801FDAE8 001FAA28  3C 60 80 4B */	lis r3, __vt__Q23efx12TFruitsDownR@ha
/* 801FDAEC 001FAA2C  38 80 00 65 */	li r4, 0x65
/* 801FDAF0 001FAA30  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FDAF4 001FAA34  38 03 22 88 */	addi r0, r3, __vt__Q23efx12TFruitsDownR@l
/* 801FDAF8 001FAA38  38 C0 00 66 */	li r6, 0x66
/* 801FDAFC 001FAA3C  38 61 00 24 */	addi r3, r1, 0x24
/* 801FDB00 001FAA40  B0 81 00 28 */	sth r4, 0x28(r1)
/* 801FDB04 001FAA44  38 81 00 34 */	addi r4, r1, 0x34
/* 801FDB08 001FAA48  B0 C1 00 2A */	sth r6, 0x2a(r1)
/* 801FDB0C 001FAA4C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801FDB10 001FAA50  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801FDB14 001FAA54  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FDB18 001FAA58  48 1B 14 FD */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 801FDB1C 001FAA5C  48 00 00 50 */	b .L_801FDB6C
.L_801FDB20:
/* 801FDB20 001FAA60  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801FDB24 001FAA64  38 A0 00 00 */	li r5, 0
/* 801FDB28 001FAA68  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801FDB2C 001FAA6C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801FDB30 001FAA70  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDB34 001FAA74  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801FDB38 001FAA78  3C 60 80 4B */	lis r3, __vt__Q23efx12TFruitsDownP@ha
/* 801FDB3C 001FAA7C  38 80 00 63 */	li r4, 0x63
/* 801FDB40 001FAA80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDB44 001FAA84  38 03 22 74 */	addi r0, r3, __vt__Q23efx12TFruitsDownP@l
/* 801FDB48 001FAA88  38 C0 00 64 */	li r6, 0x64
/* 801FDB4C 001FAA8C  38 61 00 14 */	addi r3, r1, 0x14
/* 801FDB50 001FAA90  B0 81 00 18 */	sth r4, 0x18(r1)
/* 801FDB54 001FAA94  38 81 00 34 */	addi r4, r1, 0x34
/* 801FDB58 001FAA98  B0 C1 00 1A */	sth r6, 0x1a(r1)
/* 801FDB5C 001FAA9C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 801FDB60 001FAAA0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801FDB64 001FAAA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDB68 001FAAA8  48 1B 14 AD */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_801FDB6C:
/* 801FDB6C 001FAAAC  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801FDB70 001FAAB0  38 80 38 42 */	li r4, 0x3842
/* 801FDB74 001FAAB4  38 A0 00 00 */	li r5, 0
/* 801FDB78 001FAAB8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801FDB7C 001FAABC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801FDB80 001FAAC0  7D 89 03 A6 */	mtctr r12
/* 801FDB84 001FAAC4  4E 80 04 21 */	bctrl 
/* 801FDB88 001FAAC8  7F E3 FB 78 */	mr r3, r31
/* 801FDB8C 001FAACC  38 80 00 00 */	li r4, 0
/* 801FDB90 001FAAD0  4B F3 D5 61 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_801FDB94:
/* 801FDB94 001FAAD4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801FDB98 001FAAD8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801FDB9C 001FAADC  7C 08 03 A6 */	mtlr r0
/* 801FDBA0 001FAAE0  38 21 00 50 */	addi r1, r1, 0x50
/* 801FDBA4 001FAAE4  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11PelletFruit6ObjectFv
changeMaterial__Q34Game11PelletFruit6ObjectFv:
/* 801FDBA8 001FAAE8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801FDBAC 001FAAEC  7C 08 02 A6 */	mflr r0
/* 801FDBB0 001FAAF0  39 00 00 00 */	li r8, 0
/* 801FDBB4 001FAAF4  38 A0 00 C0 */	li r5, 0xc0
/* 801FDBB8 001FAAF8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801FDBBC 001FAAFC  39 80 00 5C */	li r12, 0x5c
/* 801FDBC0 001FAB00  39 60 00 74 */	li r11, 0x74
/* 801FDBC4 001FAB04  39 40 00 96 */	li r10, 0x96
/* 801FDBC8 001FAB08  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 801FDBCC 001FAB0C  3B C0 00 FF */	li r30, 0xff
/* 801FDBD0 001FAB10  3B A0 00 44 */	li r29, 0x44
/* 801FDBD4 001FAB14  7C 7F 1B 78 */	mr r31, r3
/* 801FDBD8 001FAB18  39 20 00 6E */	li r9, 0x6e
/* 801FDBDC 001FAB1C  38 E0 00 14 */	li r7, 0x14
/* 801FDBE0 001FAB20  38 C0 00 28 */	li r6, 0x28
/* 801FDBE4 001FAB24  98 A1 00 10 */	stb r5, 0x10(r1)
/* 801FDBE8 001FAB28  3B 61 00 11 */	addi r27, r1, 0x11
/* 801FDBEC 001FAB2C  3B 41 00 12 */	addi r26, r1, 0x12
/* 801FDBF0 001FAB30  9B A1 00 11 */	stb r29, 0x11(r1)
/* 801FDBF4 001FAB34  3B 21 00 13 */	addi r25, r1, 0x13
/* 801FDBF8 001FAB38  38 A1 00 08 */	addi r5, r1, 8
/* 801FDBFC 001FAB3C  9B A1 00 12 */	stb r29, 0x12(r1)
/* 801FDC00 001FAB40  80 63 01 74 */	lwz r3, 0x174(r3)
/* 801FDC04 001FAB44  A0 1F 04 3E */	lhz r0, 0x43e(r31)
/* 801FDC08 001FAB48  80 63 00 08 */	lwz r3, 8(r3)
/* 801FDC0C 001FAB4C  9B C1 00 13 */	stb r30, 0x13(r1)
/* 801FDC10 001FAB50  54 00 10 3A */	slwi r0, r0, 2
/* 801FDC14 001FAB54  80 63 00 04 */	lwz r3, 4(r3)
/* 801FDC18 001FAB58  99 81 00 14 */	stb r12, 0x14(r1)
/* 801FDC1C 001FAB5C  80 83 00 60 */	lwz r4, 0x60(r3)
/* 801FDC20 001FAB60  38 61 00 10 */	addi r3, r1, 0x10
/* 801FDC24 001FAB64  9B A1 00 15 */	stb r29, 0x15(r1)
/* 801FDC28 001FAB68  83 84 00 00 */	lwz r28, 0(r4)
/* 801FDC2C 001FAB6C  38 80 00 00 */	li r4, 0
/* 801FDC30 001FAB70  99 61 00 16 */	stb r11, 0x16(r1)
/* 801FDC34 001FAB74  9B C1 00 17 */	stb r30, 0x17(r1)
/* 801FDC38 001FAB78  99 41 00 18 */	stb r10, 0x18(r1)
/* 801FDC3C 001FAB7C  99 21 00 19 */	stb r9, 0x19(r1)
/* 801FDC40 001FAB80  99 01 00 1A */	stb r8, 0x1a(r1)
/* 801FDC44 001FAB84  9B C1 00 1B */	stb r30, 0x1b(r1)
/* 801FDC48 001FAB88  98 E1 00 1C */	stb r7, 0x1c(r1)
/* 801FDC4C 001FAB8C  99 01 00 1D */	stb r8, 0x1d(r1)
/* 801FDC50 001FAB90  98 C1 00 1E */	stb r6, 0x1e(r1)
/* 801FDC54 001FAB94  9B C1 00 1F */	stb r30, 0x1f(r1)
/* 801FDC58 001FAB98  7C DB 00 AE */	lbzx r6, r27, r0
/* 801FDC5C 001FAB9C  7C FA 00 AE */	lbzx r7, r26, r0
/* 801FDC60 001FABA0  7D 19 00 AE */	lbzx r8, r25, r0
/* 801FDC64 001FABA4  7C 03 00 AE */	lbzx r0, r3, r0
/* 801FDC68 001FABA8  B0 C1 00 0A */	sth r6, 0xa(r1)
/* 801FDC6C 001FABAC  B0 01 00 08 */	sth r0, 8(r1)
/* 801FDC70 001FABB0  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 801FDC74 001FABB4  B1 01 00 0E */	sth r8, 0xe(r1)
/* 801FDC78 001FABB8  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801FDC7C 001FABBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FDC80 001FABC0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801FDC84 001FABC4  7D 89 03 A6 */	mtctr r12
/* 801FDC88 001FABC8  4E 80 04 21 */	bctrl 
/* 801FDC8C 001FABCC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801FDC90 001FABD0  80 63 00 08 */	lwz r3, 8(r3)
/* 801FDC94 001FABD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FDC98 001FABD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FDC9C 001FABDC  7D 89 03 A6 */	mtctr r12
/* 801FDCA0 001FABE0  4E 80 04 21 */	bctrl 
/* 801FDCA4 001FABE4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801FDCA8 001FABE8  80 63 00 08 */	lwz r3, 8(r3)
/* 801FDCAC 001FABEC  4B E6 8F C1 */	bl diff__8J3DModelFv
/* 801FDCB0 001FABF0  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 801FDCB4 001FABF4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801FDCB8 001FABF8  7C 08 03 A6 */	mtlr r0
/* 801FDCBC 001FABFC  38 21 00 40 */	addi r1, r1, 0x40
/* 801FDCC0 001FAC00  4E 80 00 20 */	blr 

.global __ct__Q34Game11PelletFruit3MgrFv
__ct__Q34Game11PelletFruit3MgrFv:
/* 801FDCC4 001FAC04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FDCC8 001FAC08  7C 08 02 A6 */	mflr r0
/* 801FDCCC 001FAC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDCD0 001FAC10  7C 80 07 35 */	extsh. r0, r4
/* 801FDCD4 001FAC14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FDCD8 001FAC18  93 C1 00 08 */	stw r30, 8(r1)
/* 801FDCDC 001FAC1C  7C 7E 1B 78 */	mr r30, r3
/* 801FDCE0 001FAC20  41 82 00 0C */	beq .L_801FDCEC
/* 801FDCE4 001FAC24  38 1E 00 A0 */	addi r0, r30, 0xa0
/* 801FDCE8 001FAC28  90 1E 00 04 */	stw r0, 4(r30)
.L_801FDCEC:
/* 801FDCEC 001FAC2C  7F C3 F3 78 */	mr r3, r30
/* 801FDCF0 001FAC30  38 80 00 00 */	li r4, 0
/* 801FDCF4 001FAC34  38 A0 00 02 */	li r5, 2
/* 801FDCF8 001FAC38  4B F6 DC C9 */	bl __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind
/* 801FDCFC 001FAC3C  3B FE 00 54 */	addi r31, r30, 0x54
/* 801FDD00 001FAC40  7F E3 FB 78 */	mr r3, r31
/* 801FDD04 001FAC44  48 21 36 8D */	bl __ct__5CNodeFv
/* 801FDD08 001FAC48  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 801FDD0C 001FAC4C  3C 80 80 4C */	lis r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FDD10 001FAC50  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 801FDD14 001FAC54  3C 60 80 4C */	lis r3, "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FDD18 001FAC58  90 1F 00 00 */	stw r0, 0(r31)
/* 801FDD1C 001FAC5C  38 04 E2 7C */	addi r0, r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FDD20 001FAC60  38 83 E1 B0 */	addi r4, r3, "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"@l
/* 801FDD24 001FAC64  38 A0 00 00 */	li r5, 0
/* 801FDD28 001FAC68  90 1F 00 00 */	stw r0, 0(r31)
/* 801FDD2C 001FAC6C  38 04 00 98 */	addi r0, r4, 0x98
/* 801FDD30 001FAC70  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FDD34 001FAC74  98 BF 00 18 */	stb r5, 0x18(r31)
/* 801FDD38 001FAC78  90 9E 00 00 */	stw r4, 0(r30)
/* 801FDD3C 001FAC7C  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FDD40 001FAC80  48 00 19 81 */	bl "__ct__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
/* 801FDD44 001FAC84  3C 80 80 4C */	lis r4, __vt__Q34Game11PelletFruit3Mgr@ha
/* 801FDD48 001FAC88  7F C3 F3 78 */	mr r3, r30
/* 801FDD4C 001FAC8C  38 84 DF DC */	addi r4, r4, __vt__Q34Game11PelletFruit3Mgr@l
/* 801FDD50 001FAC90  90 9E 00 00 */	stw r4, 0(r30)
/* 801FDD54 001FAC94  38 04 00 98 */	addi r0, r4, 0x98
/* 801FDD58 001FAC98  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FDD5C 001FAC9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FDD60 001FACA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FDD64 001FACA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FDD68 001FACA8  7C 08 03 A6 */	mtlr r0
/* 801FDD6C 001FACAC  38 21 00 10 */	addi r1, r1, 0x10
/* 801FDD70 001FACB0  4E 80 00 20 */	blr 

.global "__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FDD74 001FACB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FDD78 001FACB8  7C 08 02 A6 */	mflr r0
/* 801FDD7C 001FACBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDD80 001FACC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FDD84 001FACC4  7C 9F 23 78 */	mr r31, r4
/* 801FDD88 001FACC8  93 C1 00 08 */	stw r30, 8(r1)
/* 801FDD8C 001FACCC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801FDD90 001FACD0  41 82 01 64 */	beq .L_801FDEF4
/* 801FDD94 001FACD4  3C 60 80 4C */	lis r3, "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FDD98 001FACD8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FDD9C 001FACDC  38 63 E1 B0 */	addi r3, r3, "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"@l
/* 801FDDA0 001FACE0  90 7E 00 00 */	stw r3, 0(r30)
/* 801FDDA4 001FACE4  38 03 00 98 */	addi r0, r3, 0x98
/* 801FDDA8 001FACE8  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FDDAC 001FACEC  41 82 00 68 */	beq .L_801FDE14
/* 801FDDB0 001FACF0  3C 60 80 4C */	lis r3, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FDDB4 001FACF4  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FDDB8 001FACF8  38 63 E1 24 */	addi r3, r3, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FDDBC 001FACFC  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801FDDC0 001FAD00  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FDDC4 001FAD04  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801FDDC8 001FAD08  41 82 00 4C */	beq .L_801FDE14
/* 801FDDCC 001FAD0C  3C 60 80 4C */	lis r3, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FDDD0 001FAD10  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FDDD4 001FAD14  38 63 E0 A8 */	addi r3, r3, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FDDD8 001FAD18  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801FDDDC 001FAD1C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FDDE0 001FAD20  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801FDDE4 001FAD24  41 82 00 30 */	beq .L_801FDE14
/* 801FDDE8 001FAD28  3C 60 80 4C */	lis r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FDDEC 001FAD2C  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FDDF0 001FAD30  38 03 E2 7C */	addi r0, r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FDDF4 001FAD34  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801FDDF8 001FAD38  41 82 00 1C */	beq .L_801FDE14
/* 801FDDFC 001FAD3C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FDE00 001FAD40  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FDE04 001FAD44  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FDE08 001FAD48  38 80 00 00 */	li r4, 0
/* 801FDE0C 001FAD4C  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801FDE10 001FAD50  48 21 37 79 */	bl __dt__5CNodeFv
.L_801FDE14:
/* 801FDE14 001FAD54  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801FDE18 001FAD58  41 82 00 30 */	beq .L_801FDE48
/* 801FDE1C 001FAD5C  3C 60 80 4C */	lis r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FDE20 001FAD60  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801FDE24 001FAD64  38 03 E2 7C */	addi r0, r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FDE28 001FAD68  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FDE2C 001FAD6C  41 82 00 1C */	beq .L_801FDE48
/* 801FDE30 001FAD70  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FDE34 001FAD74  38 7E 00 54 */	addi r3, r30, 0x54
/* 801FDE38 001FAD78  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FDE3C 001FAD7C  38 80 00 00 */	li r4, 0
/* 801FDE40 001FAD80  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FDE44 001FAD84  48 21 37 45 */	bl __dt__5CNodeFv
.L_801FDE48:
/* 801FDE48 001FAD88  28 1E 00 00 */	cmplwi r30, 0
/* 801FDE4C 001FAD8C  41 82 00 98 */	beq .L_801FDEE4
/* 801FDE50 001FAD90  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 801FDE54 001FAD94  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FDE58 001FAD98  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 801FDE5C 001FAD9C  90 1E 00 00 */	stw r0, 0(r30)
/* 801FDE60 001FADA0  41 82 00 84 */	beq .L_801FDEE4
/* 801FDE64 001FADA4  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 801FDE68 001FADA8  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FDE6C 001FADAC  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 801FDE70 001FADB0  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801FDE74 001FADB4  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FDE78 001FADB8  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801FDE7C 001FADBC  41 82 00 68 */	beq .L_801FDEE4
/* 801FDE80 001FADC0  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 801FDE84 001FADC4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FDE88 001FADC8  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 801FDE8C 001FADCC  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801FDE90 001FADD0  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FDE94 001FADD4  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801FDE98 001FADD8  41 82 00 4C */	beq .L_801FDEE4
/* 801FDE9C 001FADDC  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 801FDEA0 001FADE0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FDEA4 001FADE4  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 801FDEA8 001FADE8  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801FDEAC 001FADEC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FDEB0 001FADF0  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801FDEB4 001FADF4  41 82 00 30 */	beq .L_801FDEE4
/* 801FDEB8 001FADF8  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 801FDEBC 001FADFC  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FDEC0 001FAE00  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 801FDEC4 001FAE04  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801FDEC8 001FAE08  41 82 00 1C */	beq .L_801FDEE4
/* 801FDECC 001FAE0C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FDED0 001FAE10  38 7E 00 18 */	addi r3, r30, 0x18
/* 801FDED4 001FAE14  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FDED8 001FAE18  38 80 00 00 */	li r4, 0
/* 801FDEDC 001FAE1C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801FDEE0 001FAE20  48 21 36 A9 */	bl __dt__5CNodeFv
.L_801FDEE4:
/* 801FDEE4 001FAE24  7F E0 07 35 */	extsh. r0, r31
/* 801FDEE8 001FAE28  40 81 00 0C */	ble .L_801FDEF4
/* 801FDEEC 001FAE2C  7F C3 F3 78 */	mr r3, r30
/* 801FDEF0 001FAE30  4B E2 61 C5 */	bl __dl__FPv
.L_801FDEF4:
/* 801FDEF4 001FAE34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FDEF8 001FAE38  7F C3 F3 78 */	mr r3, r30
/* 801FDEFC 001FAE3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FDF00 001FAE40  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FDF04 001FAE44  7C 08 03 A6 */	mtlr r0
/* 801FDF08 001FAE48  38 21 00 10 */	addi r1, r1, 0x10
/* 801FDF0C 001FAE4C  4E 80 00 20 */	blr 

.global "__dt__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"__dt__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FDF10 001FAE50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FDF14 001FAE54  7C 08 02 A6 */	mflr r0
/* 801FDF18 001FAE58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDF1C 001FAE5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FDF20 001FAE60  7C 9F 23 78 */	mr r31, r4
/* 801FDF24 001FAE64  93 C1 00 08 */	stw r30, 8(r1)
/* 801FDF28 001FAE68  7C 7E 1B 79 */	or. r30, r3, r3
/* 801FDF2C 001FAE6C  41 82 00 68 */	beq .L_801FDF94
/* 801FDF30 001FAE70  3C 80 80 4C */	lis r4, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FDF34 001FAE74  38 84 E1 24 */	addi r4, r4, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FDF38 001FAE78  90 9E 00 00 */	stw r4, 0(r30)
/* 801FDF3C 001FAE7C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801FDF40 001FAE80  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801FDF44 001FAE84  41 82 00 40 */	beq .L_801FDF84
/* 801FDF48 001FAE88  3C 80 80 4C */	lis r4, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FDF4C 001FAE8C  38 84 E0 A8 */	addi r4, r4, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FDF50 001FAE90  90 9E 00 00 */	stw r4, 0(r30)
/* 801FDF54 001FAE94  38 04 00 2C */	addi r0, r4, 0x2c
/* 801FDF58 001FAE98  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801FDF5C 001FAE9C  41 82 00 28 */	beq .L_801FDF84
/* 801FDF60 001FAEA0  3C 80 80 4C */	lis r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FDF64 001FAEA4  38 04 E2 7C */	addi r0, r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FDF68 001FAEA8  90 1E 00 00 */	stw r0, 0(r30)
/* 801FDF6C 001FAEAC  41 82 00 18 */	beq .L_801FDF84
/* 801FDF70 001FAEB0  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801FDF74 001FAEB4  38 80 00 00 */	li r4, 0
/* 801FDF78 001FAEB8  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801FDF7C 001FAEBC  90 1E 00 00 */	stw r0, 0(r30)
/* 801FDF80 001FAEC0  48 21 36 09 */	bl __dt__5CNodeFv
.L_801FDF84:
/* 801FDF84 001FAEC4  7F E0 07 35 */	extsh. r0, r31
/* 801FDF88 001FAEC8  40 81 00 0C */	ble .L_801FDF94
/* 801FDF8C 001FAECC  7F C3 F3 78 */	mr r3, r30
/* 801FDF90 001FAED0  4B E2 61 25 */	bl __dl__FPv
.L_801FDF94:
/* 801FDF94 001FAED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FDF98 001FAED8  7F C3 F3 78 */	mr r3, r30
/* 801FDF9C 001FAEDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FDFA0 001FAEE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FDFA4 001FAEE4  7C 08 03 A6 */	mtlr r0
/* 801FDFA8 001FAEE8  38 21 00 10 */	addi r1, r1, 0x10
/* 801FDFAC 001FAEEC  4E 80 00 20 */	blr 

.global "__dt__38Container<Q34Game11PelletFruit6Object>Fv"
"__dt__38Container<Q34Game11PelletFruit6Object>Fv":
/* 801FDFB0 001FAEF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FDFB4 001FAEF4  7C 08 02 A6 */	mflr r0
/* 801FDFB8 001FAEF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FDFBC 001FAEFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FDFC0 001FAF00  7C 9F 23 78 */	mr r31, r4
/* 801FDFC4 001FAF04  93 C1 00 08 */	stw r30, 8(r1)
/* 801FDFC8 001FAF08  7C 7E 1B 79 */	or. r30, r3, r3
/* 801FDFCC 001FAF0C  41 82 00 38 */	beq .L_801FE004
/* 801FDFD0 001FAF10  3C 80 80 4C */	lis r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FDFD4 001FAF14  38 04 E2 7C */	addi r0, r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FDFD8 001FAF18  90 1E 00 00 */	stw r0, 0(r30)
/* 801FDFDC 001FAF1C  41 82 00 18 */	beq .L_801FDFF4
/* 801FDFE0 001FAF20  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801FDFE4 001FAF24  38 80 00 00 */	li r4, 0
/* 801FDFE8 001FAF28  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801FDFEC 001FAF2C  90 1E 00 00 */	stw r0, 0(r30)
/* 801FDFF0 001FAF30  48 21 35 99 */	bl __dt__5CNodeFv
.L_801FDFF4:
/* 801FDFF4 001FAF34  7F E0 07 35 */	extsh. r0, r31
/* 801FDFF8 001FAF38  40 81 00 0C */	ble .L_801FE004
/* 801FDFFC 001FAF3C  7F C3 F3 78 */	mr r3, r30
/* 801FE000 001FAF40  4B E2 60 B5 */	bl __dl__FPv
.L_801FE004:
/* 801FE004 001FAF44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE008 001FAF48  7F C3 F3 78 */	mr r3, r30
/* 801FE00C 001FAF4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE010 001FAF50  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FE014 001FAF54  7C 08 03 A6 */	mtlr r0
/* 801FE018 001FAF58  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE01C 001FAF5C  4E 80 00 20 */	blr 

.global setupResources__Q34Game11PelletFruit3MgrFv
setupResources__Q34Game11PelletFruit3MgrFv:
/* 801FE020 001FAF60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE024 001FAF64  7C 08 02 A6 */	mflr r0
/* 801FE028 001FAF68  3C 80 80 48 */	lis r4, lbl_80481B40@ha
/* 801FE02C 001FAF6C  38 A0 00 00 */	li r5, 0
/* 801FE030 001FAF70  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE034 001FAF74  38 84 1B 40 */	addi r4, r4, lbl_80481B40@l
/* 801FE038 001FAF78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FE03C 001FAF7C  7C 7F 1B 78 */	mr r31, r3
/* 801FE040 001FAF80  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801FE044 001FAF84  48 22 53 19 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801FE048 001FAF88  7F E3 FB 78 */	mr r3, r31
/* 801FE04C 001FAF8C  38 80 00 40 */	li r4, 0x40
/* 801FE050 001FAF90  48 00 18 A5 */	bl "alloc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
/* 801FE054 001FAF94  7F E3 FB 78 */	mr r3, r31
/* 801FE058 001FAF98  4B F6 DD DD */	bl load__Q24Game13BasePelletMgrFv
/* 801FE05C 001FAF9C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801FE060 001FAFA0  3C 80 00 04 */	lis r4, 4
/* 801FE064 001FAFA4  80 63 00 00 */	lwz r3, 0(r3)
/* 801FE068 001FAFA8  4B E8 58 71 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801FE06C 001FAFAC  7F E3 FB 78 */	mr r3, r31
/* 801FE070 001FAFB0  38 80 00 40 */	li r4, 0x40
/* 801FE074 001FAFB4  3C A0 00 08 */	lis r5, 8
/* 801FE078 001FAFB8  4B F6 E5 75 */	bl useModelMgr__Q24Game13BasePelletMgrFiUl
/* 801FE07C 001FAFBC  38 7F 00 18 */	addi r3, r31, 0x18
/* 801FE080 001FAFC0  38 80 00 80 */	li r4, 0x80
/* 801FE084 001FAFC4  4B FF CF 41 */	bl "alloc__24MonoObjectMgr<8CollPart>Fi"
/* 801FE088 001FAFC8  3C 80 80 48 */	lis r4, lbl_80481B40@ha
/* 801FE08C 001FAFCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801FE090 001FAFD0  38 84 1B 40 */	addi r4, r4, lbl_80481B40@l
/* 801FE094 001FAFD4  48 22 52 D1 */	bl heapStatusEnd__6SystemFPc
/* 801FE098 001FAFD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE09C 001FAFDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE0A0 001FAFE0  7C 08 03 A6 */	mtlr r0
/* 801FE0A4 001FAFE4  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE0A8 001FAFE8  4E 80 00 20 */	blr 

.global onCreateModel__Q34Game11PelletFruit3MgrFPQ28SysShape5Model
onCreateModel__Q34Game11PelletFruit3MgrFPQ28SysShape5Model:
/* 801FE0AC 001FAFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE0B0 001FAFF0  7C 08 02 A6 */	mflr r0
/* 801FE0B4 001FAFF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE0B8 001FAFF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FE0BC 001FAFFC  7C 9F 23 78 */	mr r31, r4
/* 801FE0C0 001FB000  3C 80 01 00 */	lis r4, 0x100
/* 801FE0C4 001FB004  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FE0C8 001FB008  4B E6 86 11 */	bl newDifferedDisplayList__8J3DModelFUl
/* 801FE0CC 001FB00C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FE0D0 001FB010  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE0D4 001FB014  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FE0D8 001FB018  7D 89 03 A6 */	mtctr r12
/* 801FE0DC 001FB01C  4E 80 04 21 */	bctrl 
/* 801FE0E0 001FB020  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FE0E4 001FB024  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE0E8 001FB028  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FE0EC 001FB02C  7D 89 03 A6 */	mtctr r12
/* 801FE0F0 001FB030  4E 80 04 21 */	bctrl 
/* 801FE0F4 001FB034  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FE0F8 001FB038  4B E6 88 2D */	bl makeDL__8J3DModelFv
/* 801FE0FC 001FB03C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FE100 001FB040  4B E6 86 F5 */	bl lock__8J3DModelFv
/* 801FE104 001FB044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE108 001FB048  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE10C 001FB04C  7C 08 03 A6 */	mtlr r0
/* 801FE110 001FB050  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE114 001FB054  4E 80 00 20 */	blr 

.global __dt__Q34Game11PelletFruit3MgrFv
__dt__Q34Game11PelletFruit3MgrFv:
/* 801FE118 001FB058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE11C 001FB05C  7C 08 02 A6 */	mflr r0
/* 801FE120 001FB060  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE124 001FB064  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FE128 001FB068  7C 9F 23 78 */	mr r31, r4
/* 801FE12C 001FB06C  93 C1 00 08 */	stw r30, 8(r1)
/* 801FE130 001FB070  7C 7E 1B 79 */	or. r30, r3, r3
/* 801FE134 001FB074  41 82 01 7C */	beq .L_801FE2B0
/* 801FE138 001FB078  3C 60 80 4C */	lis r3, __vt__Q34Game11PelletFruit3Mgr@ha
/* 801FE13C 001FB07C  38 63 DF DC */	addi r3, r3, __vt__Q34Game11PelletFruit3Mgr@l
/* 801FE140 001FB080  90 7E 00 00 */	stw r3, 0(r30)
/* 801FE144 001FB084  38 03 00 98 */	addi r0, r3, 0x98
/* 801FE148 001FB088  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FE14C 001FB08C  41 82 01 54 */	beq .L_801FE2A0
/* 801FE150 001FB090  3C 60 80 4C */	lis r3, "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FE154 001FB094  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FE158 001FB098  38 63 E1 B0 */	addi r3, r3, "__vt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>"@l
/* 801FE15C 001FB09C  90 7E 00 00 */	stw r3, 0(r30)
/* 801FE160 001FB0A0  38 03 00 98 */	addi r0, r3, 0x98
/* 801FE164 001FB0A4  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FE168 001FB0A8  41 82 00 68 */	beq .L_801FE1D0
/* 801FE16C 001FB0AC  3C 60 80 4C */	lis r3, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FE170 001FB0B0  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FE174 001FB0B4  38 63 E1 24 */	addi r3, r3, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FE178 001FB0B8  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801FE17C 001FB0BC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FE180 001FB0C0  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801FE184 001FB0C4  41 82 00 4C */	beq .L_801FE1D0
/* 801FE188 001FB0C8  3C 60 80 4C */	lis r3, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FE18C 001FB0CC  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FE190 001FB0D0  38 63 E0 A8 */	addi r3, r3, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FE194 001FB0D4  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801FE198 001FB0D8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FE19C 001FB0DC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801FE1A0 001FB0E0  41 82 00 30 */	beq .L_801FE1D0
/* 801FE1A4 001FB0E4  3C 60 80 4C */	lis r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FE1A8 001FB0E8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801FE1AC 001FB0EC  38 03 E2 7C */	addi r0, r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FE1B0 001FB0F0  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801FE1B4 001FB0F4  41 82 00 1C */	beq .L_801FE1D0
/* 801FE1B8 001FB0F8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FE1BC 001FB0FC  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FE1C0 001FB100  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FE1C4 001FB104  38 80 00 00 */	li r4, 0
/* 801FE1C8 001FB108  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801FE1CC 001FB10C  48 21 33 BD */	bl __dt__5CNodeFv
.L_801FE1D0:
/* 801FE1D0 001FB110  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801FE1D4 001FB114  41 82 00 30 */	beq .L_801FE204
/* 801FE1D8 001FB118  3C 60 80 4C */	lis r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FE1DC 001FB11C  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801FE1E0 001FB120  38 03 E2 7C */	addi r0, r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FE1E4 001FB124  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FE1E8 001FB128  41 82 00 1C */	beq .L_801FE204
/* 801FE1EC 001FB12C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FE1F0 001FB130  38 7E 00 54 */	addi r3, r30, 0x54
/* 801FE1F4 001FB134  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FE1F8 001FB138  38 80 00 00 */	li r4, 0
/* 801FE1FC 001FB13C  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801FE200 001FB140  48 21 33 89 */	bl __dt__5CNodeFv
.L_801FE204:
/* 801FE204 001FB144  28 1E 00 00 */	cmplwi r30, 0
/* 801FE208 001FB148  41 82 00 98 */	beq .L_801FE2A0
/* 801FE20C 001FB14C  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 801FE210 001FB150  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FE214 001FB154  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 801FE218 001FB158  90 1E 00 00 */	stw r0, 0(r30)
/* 801FE21C 001FB15C  41 82 00 84 */	beq .L_801FE2A0
/* 801FE220 001FB160  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 801FE224 001FB164  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FE228 001FB168  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 801FE22C 001FB16C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801FE230 001FB170  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FE234 001FB174  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801FE238 001FB178  41 82 00 68 */	beq .L_801FE2A0
/* 801FE23C 001FB17C  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 801FE240 001FB180  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FE244 001FB184  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 801FE248 001FB188  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801FE24C 001FB18C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FE250 001FB190  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801FE254 001FB194  41 82 00 4C */	beq .L_801FE2A0
/* 801FE258 001FB198  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 801FE25C 001FB19C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FE260 001FB1A0  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 801FE264 001FB1A4  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801FE268 001FB1A8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801FE26C 001FB1AC  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801FE270 001FB1B0  41 82 00 30 */	beq .L_801FE2A0
/* 801FE274 001FB1B4  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 801FE278 001FB1B8  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801FE27C 001FB1BC  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 801FE280 001FB1C0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801FE284 001FB1C4  41 82 00 1C */	beq .L_801FE2A0
/* 801FE288 001FB1C8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FE28C 001FB1CC  38 7E 00 18 */	addi r3, r30, 0x18
/* 801FE290 001FB1D0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FE294 001FB1D4  38 80 00 00 */	li r4, 0
/* 801FE298 001FB1D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801FE29C 001FB1DC  48 21 32 ED */	bl __dt__5CNodeFv
.L_801FE2A0:
/* 801FE2A0 001FB1E0  7F E0 07 35 */	extsh. r0, r31
/* 801FE2A4 001FB1E4  40 81 00 0C */	ble .L_801FE2B0
/* 801FE2A8 001FB1E8  7F C3 F3 78 */	mr r3, r30
/* 801FE2AC 001FB1EC  4B E2 5E 09 */	bl __dl__FPv
.L_801FE2B0:
/* 801FE2B0 001FB1F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE2B4 001FB1F4  7F C3 F3 78 */	mr r3, r30
/* 801FE2B8 001FB1F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE2BC 001FB1FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FE2C0 001FB200  7C 08 03 A6 */	mtlr r0
/* 801FE2C4 001FB204  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE2C8 001FB208  4E 80 00 20 */	blr 

.global getMgrName__Q34Game11PelletFruit3MgrFv
getMgrName__Q34Game11PelletFruit3MgrFv:
/* 801FE2CC 001FB20C  38 62 B9 B0 */	addi r3, r2, lbl_80519D10@sda21
/* 801FE2D0 001FB210  4E 80 00 20 */	blr 

.global getMgrID__Q34Game11PelletFruit3MgrFv
getMgrID__Q34Game11PelletFruit3MgrFv:
/* 801FE2D4 001FB214  38 60 00 02 */	li r3, 2
/* 801FE2D8 001FB218  4E 80 00 20 */	blr 

.global "__dt__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"__dt__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE2DC 001FB21C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE2E0 001FB220  7C 08 02 A6 */	mflr r0
/* 801FE2E4 001FB224  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE2E8 001FB228  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FE2EC 001FB22C  7C 9F 23 78 */	mr r31, r4
/* 801FE2F0 001FB230  93 C1 00 08 */	stw r30, 8(r1)
/* 801FE2F4 001FB234  7C 7E 1B 79 */	or. r30, r3, r3
/* 801FE2F8 001FB238  41 82 00 50 */	beq .L_801FE348
/* 801FE2FC 001FB23C  3C 80 80 4C */	lis r4, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FE300 001FB240  38 84 E0 A8 */	addi r4, r4, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FE304 001FB244  90 9E 00 00 */	stw r4, 0(r30)
/* 801FE308 001FB248  38 04 00 2C */	addi r0, r4, 0x2c
/* 801FE30C 001FB24C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801FE310 001FB250  41 82 00 28 */	beq .L_801FE338
/* 801FE314 001FB254  3C 80 80 4C */	lis r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FE318 001FB258  38 04 E2 7C */	addi r0, r4, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FE31C 001FB25C  90 1E 00 00 */	stw r0, 0(r30)
/* 801FE320 001FB260  41 82 00 18 */	beq .L_801FE338
/* 801FE324 001FB264  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801FE328 001FB268  38 80 00 00 */	li r4, 0
/* 801FE32C 001FB26C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801FE330 001FB270  90 1E 00 00 */	stw r0, 0(r30)
/* 801FE334 001FB274  48 21 32 55 */	bl __dt__5CNodeFv
.L_801FE338:
/* 801FE338 001FB278  7F E0 07 35 */	extsh. r0, r31
/* 801FE33C 001FB27C  40 81 00 0C */	ble .L_801FE348
/* 801FE340 001FB280  7F C3 F3 78 */	mr r3, r30
/* 801FE344 001FB284  4B E2 5D 71 */	bl __dl__FPv
.L_801FE348:
/* 801FE348 001FB288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE34C 001FB28C  7F C3 F3 78 */	mr r3, r30
/* 801FE350 001FB290  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE354 001FB294  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FE358 001FB298  7C 08 03 A6 */	mtlr r0
/* 801FE35C 001FB29C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE360 001FB2A0  4E 80 00 20 */	blr 

.global getKind__Q34Game11PelletFruit6ObjectFv
getKind__Q34Game11PelletFruit6ObjectFv:
/* 801FE364 001FB2A4  38 60 00 02 */	li r3, 2
/* 801FE368 001FB2A8  4E 80 00 20 */	blr 

.global "resetMgrAndResources__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"resetMgrAndResources__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE36C 001FB2AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE370 001FB2B0  7C 08 02 A6 */	mflr r0
/* 801FE374 001FB2B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE378 001FB2B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FE37C 001FB2BC  7C 7F 1B 78 */	mr r31, r3
/* 801FE380 001FB2C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE384 001FB2C4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801FE388 001FB2C8  7D 89 03 A6 */	mtctr r12
/* 801FE38C 001FB2CC  4E 80 04 21 */	bctrl 
/* 801FE390 001FB2D0  39 00 00 00 */	li r8, 0
/* 801FE394 001FB2D4  39 20 00 00 */	li r9, 0
/* 801FE398 001FB2D8  7D 07 43 78 */	mr r7, r8
/* 801FE39C 001FB2DC  7D 06 43 78 */	mr r6, r8
/* 801FE3A0 001FB2E0  7D 05 43 78 */	mr r5, r8
/* 801FE3A4 001FB2E4  7D 04 43 78 */	mr r4, r8
/* 801FE3A8 001FB2E8  48 00 00 2C */	b .L_801FE3D4
.L_801FE3AC:
/* 801FE3AC 001FB2EC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801FE3B0 001FB2F0  7C E3 41 2E */	stwx r7, r3, r8
/* 801FE3B4 001FB2F4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801FE3B8 001FB2F8  7C C3 41 2E */	stwx r6, r3, r8
/* 801FE3BC 001FB2FC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 801FE3C0 001FB300  7C A3 41 2E */	stwx r5, r3, r8
/* 801FE3C4 001FB304  39 08 00 04 */	addi r8, r8, 4
/* 801FE3C8 001FB308  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 801FE3CC 001FB30C  7C 83 49 AE */	stbx r4, r3, r9
/* 801FE3D0 001FB310  39 29 00 01 */	addi r9, r9, 1
.L_801FE3D4:
/* 801FE3D4 001FB314  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801FE3D8 001FB318  7C 09 00 00 */	cmpw r9, r0
/* 801FE3DC 001FB31C  41 80 FF D0 */	blt .L_801FE3AC
/* 801FE3E0 001FB320  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 801FE3E4 001FB324  28 00 00 00 */	cmplwi r0, 0
/* 801FE3E8 001FB328  41 82 00 0C */	beq .L_801FE3F4
/* 801FE3EC 001FB32C  38 00 00 00 */	li r0, 0
/* 801FE3F0 001FB330  90 1F 00 48 */	stw r0, 0x48(r31)
.L_801FE3F4:
/* 801FE3F4 001FB334  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE3F8 001FB338  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE3FC 001FB33C  7C 08 03 A6 */	mtlr r0
/* 801FE400 001FB340  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE404 001FB344  4E 80 00 20 */	blr 

.global "onCreateModel__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ28SysShape5Model"
"onCreateModel__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ28SysShape5Model":
/* 801FE408 001FB348  4E 80 00 20 */	blr 

.global "birth__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"birth__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE40C 001FB34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE410 001FB350  7C 08 02 A6 */	mflr r0
/* 801FE414 001FB354  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE418 001FB358  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE41C 001FB35C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801FE420 001FB360  7D 89 03 A6 */	mtctr r12
/* 801FE424 001FB364  4E 80 04 21 */	bctrl 
/* 801FE428 001FB368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE42C 001FB36C  7C 08 03 A6 */	mtlr r0
/* 801FE430 001FB370  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE434 001FB374  4E 80 00 20 */	blr 

.global "doAnimation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"doAnimation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE438 001FB378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE43C 001FB37C  7C 08 02 A6 */	mflr r0
/* 801FE440 001FB380  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE444 001FB384  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE448 001FB388  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801FE44C 001FB38C  7D 89 03 A6 */	mtctr r12
/* 801FE450 001FB390  4E 80 04 21 */	bctrl 
/* 801FE454 001FB394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE458 001FB398  7C 08 03 A6 */	mtlr r0
/* 801FE45C 001FB39C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE460 001FB3A0  4E 80 00 20 */	blr 

.global "doEntry__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"doEntry__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE464 001FB3A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE468 001FB3A8  7C 08 02 A6 */	mflr r0
/* 801FE46C 001FB3AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE470 001FB3B0  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE474 001FB3B4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801FE478 001FB3B8  7D 89 03 A6 */	mtctr r12
/* 801FE47C 001FB3BC  4E 80 04 21 */	bctrl 
/* 801FE480 001FB3C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE484 001FB3C4  7C 08 03 A6 */	mtlr r0
/* 801FE488 001FB3C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE48C 001FB3CC  4E 80 00 20 */	blr 

.global "doSetView__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
"doSetView__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FE490 001FB3D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE494 001FB3D4  7C 08 02 A6 */	mflr r0
/* 801FE498 001FB3D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE49C 001FB3DC  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE4A0 001FB3E0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801FE4A4 001FB3E4  7D 89 03 A6 */	mtctr r12
/* 801FE4A8 001FB3E8  4E 80 04 21 */	bctrl 
/* 801FE4AC 001FB3EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE4B0 001FB3F0  7C 08 03 A6 */	mtlr r0
/* 801FE4B4 001FB3F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE4B8 001FB3F8  4E 80 00 20 */	blr 

.global "doViewCalc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"doViewCalc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE4BC 001FB3FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE4C0 001FB400  7C 08 02 A6 */	mflr r0
/* 801FE4C4 001FB404  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE4C8 001FB408  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE4CC 001FB40C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801FE4D0 001FB410  7D 89 03 A6 */	mtctr r12
/* 801FE4D4 001FB414  4E 80 04 21 */	bctrl 
/* 801FE4D8 001FB418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE4DC 001FB41C  7C 08 03 A6 */	mtlr r0
/* 801FE4E0 001FB420  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE4E4 001FB424  4E 80 00 20 */	blr 

.global "doSimulation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Ff"
"doSimulation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Ff":
/* 801FE4E8 001FB428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE4EC 001FB42C  7C 08 02 A6 */	mflr r0
/* 801FE4F0 001FB430  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE4F4 001FB434  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE4F8 001FB438  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801FE4FC 001FB43C  7D 89 03 A6 */	mtctr r12
/* 801FE500 001FB440  4E 80 04 21 */	bctrl 
/* 801FE504 001FB444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE508 001FB448  7C 08 03 A6 */	mtlr r0
/* 801FE50C 001FB44C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE510 001FB450  4E 80 00 20 */	blr 

.global "doDirectDraw__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FR8Graphics"
"doDirectDraw__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FR8Graphics":
/* 801FE514 001FB454  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE518 001FB458  7C 08 02 A6 */	mflr r0
/* 801FE51C 001FB45C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE520 001FB460  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE524 001FB464  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801FE528 001FB468  7D 89 03 A6 */	mtctr r12
/* 801FE52C 001FB46C  4E 80 04 21 */	bctrl 
/* 801FE530 001FB470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE534 001FB474  7C 08 03 A6 */	mtlr r0
/* 801FE538 001FB478  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE53C 001FB47C  4E 80 00 20 */	blr 

.global "kill__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
"kill__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet":
/* 801FE540 001FB480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE544 001FB484  7C 08 02 A6 */	mflr r0
/* 801FE548 001FB488  38 63 00 70 */	addi r3, r3, 0x70
/* 801FE54C 001FB48C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE550 001FB490  48 00 00 CD */	bl "kill__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPQ34Game11PelletFruit6Object"
/* 801FE554 001FB494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE558 001FB498  7C 08 03 A6 */	mtlr r0
/* 801FE55C 001FB49C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE560 001FB4A0  4E 80 00 20 */	blr 

.global "getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
"getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FE564 001FB4A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE568 001FB4A8  7C 08 02 A6 */	mflr r0
/* 801FE56C 001FB4AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE570 001FB4B0  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE574 001FB4B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FE578 001FB4B8  7D 89 03 A6 */	mtctr r12
/* 801FE57C 001FB4BC  4E 80 04 21 */	bctrl 
/* 801FE580 001FB4C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE584 001FB4C4  7C 08 03 A6 */	mtlr r0
/* 801FE588 001FB4C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE58C 001FB4CC  4E 80 00 20 */	blr 

.global "getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE590 001FB4D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE594 001FB4D4  7C 08 02 A6 */	mflr r0
/* 801FE598 001FB4D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE59C 001FB4DC  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FE5A0 001FB4E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FE5A4 001FB4E4  7D 89 03 A6 */	mtctr r12
/* 801FE5A8 001FB4E8  4E 80 04 21 */	bctrl 
/* 801FE5AC 001FB4EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE5B0 001FB4F0  7C 08 03 A6 */	mtlr r0
/* 801FE5B4 001FB4F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE5B8 001FB4F8  4E 80 00 20 */	blr 

.global "birth__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"birth__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE5BC 001FB4FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE5C0 001FB500  7C 08 02 A6 */	mflr r0
/* 801FE5C4 001FB504  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE5C8 001FB508  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FE5CC 001FB50C  7C 7F 1B 78 */	mr r31, r3
/* 801FE5D0 001FB510  48 00 04 95 */	bl "getEmptyIndex__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
/* 801FE5D4 001FB514  2C 03 FF FF */	cmpwi r3, -1
/* 801FE5D8 001FB518  41 82 00 2C */	beq .L_801FE604
/* 801FE5DC 001FB51C  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 801FE5E0 001FB520  38 00 00 00 */	li r0, 0
/* 801FE5E4 001FB524  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801FE5E8 001FB528  1C A3 04 5C */	mulli r5, r3, 0x45c
/* 801FE5EC 001FB52C  7C 04 19 AE */	stbx r0, r4, r3
/* 801FE5F0 001FB530  7C 66 2A 14 */	add r3, r6, r5
/* 801FE5F4 001FB534  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 801FE5F8 001FB538  38 04 00 01 */	addi r0, r4, 1
/* 801FE5FC 001FB53C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801FE600 001FB540  48 00 00 08 */	b .L_801FE608
.L_801FE604:
/* 801FE604 001FB544  38 60 00 00 */	li r3, 0
.L_801FE608:
/* 801FE608 001FB548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE60C 001FB54C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FE610 001FB550  7C 08 03 A6 */	mtlr r0
/* 801FE614 001FB554  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE618 001FB558  4E 80 00 20 */	blr 

.global "kill__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPQ34Game11PelletFruit6Object"
"kill__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPQ34Game11PelletFruit6Object":
/* 801FE61C 001FB55C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801FE620 001FB560  38 C0 00 00 */	li r6, 0
/* 801FE624 001FB564  38 A0 00 00 */	li r5, 0
/* 801FE628 001FB568  7C 09 03 A6 */	mtctr r0
/* 801FE62C 001FB56C  2C 00 00 00 */	cmpwi r0, 0
/* 801FE630 001FB570  4C 81 00 20 */	blelr 
.L_801FE634:
/* 801FE634 001FB574  80 03 00 28 */	lwz r0, 0x28(r3)
/* 801FE638 001FB578  7C 00 2A 14 */	add r0, r0, r5
/* 801FE63C 001FB57C  7C 00 20 40 */	cmplw r0, r4
/* 801FE640 001FB580  40 82 00 20 */	bne .L_801FE660
/* 801FE644 001FB584  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801FE648 001FB588  38 00 00 01 */	li r0, 1
/* 801FE64C 001FB58C  7C 04 31 AE */	stbx r0, r4, r6
/* 801FE650 001FB590  80 83 00 20 */	lwz r4, 0x20(r3)
/* 801FE654 001FB594  38 04 FF FF */	addi r0, r4, -1
/* 801FE658 001FB598  90 03 00 20 */	stw r0, 0x20(r3)
/* 801FE65C 001FB59C  4E 80 00 20 */	blr 
.L_801FE660:
/* 801FE660 001FB5A0  38 A5 04 5C */	addi r5, r5, 0x45c
/* 801FE664 001FB5A4  38 C6 00 01 */	addi r6, r6, 1
/* 801FE668 001FB5A8  42 00 FF CC */	bdnz .L_801FE634
/* 801FE66C 001FB5AC  4E 80 00 20 */	blr 

.global "getNext__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPv"
"getNext__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FE670 001FB5B0  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 801FE674 001FB5B4  38 C4 00 01 */	addi r6, r4, 1
/* 801FE678 001FB5B8  7C 06 28 50 */	subf r0, r6, r5
/* 801FE67C 001FB5BC  7C 09 03 A6 */	mtctr r0
/* 801FE680 001FB5C0  7C 06 28 00 */	cmpw r6, r5
/* 801FE684 001FB5C4  40 80 00 24 */	bge .L_801FE6A8
.L_801FE688:
/* 801FE688 001FB5C8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801FE68C 001FB5CC  7C 04 30 AE */	lbzx r0, r4, r6
/* 801FE690 001FB5D0  28 00 00 00 */	cmplwi r0, 0
/* 801FE694 001FB5D4  40 82 00 0C */	bne .L_801FE6A0
/* 801FE698 001FB5D8  7C C3 33 78 */	mr r3, r6
/* 801FE69C 001FB5DC  4E 80 00 20 */	blr 
.L_801FE6A0:
/* 801FE6A0 001FB5E0  38 C6 00 01 */	addi r6, r6, 1
/* 801FE6A4 001FB5E4  42 00 FF E4 */	bdnz .L_801FE688
.L_801FE6A8:
/* 801FE6A8 001FB5E8  7C A3 2B 78 */	mr r3, r5
/* 801FE6AC 001FB5EC  4E 80 00 20 */	blr 

.global "getStart__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"getStart__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE6B0 001FB5F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FE6B4 001FB5F4  7C 08 02 A6 */	mflr r0
/* 801FE6B8 001FB5F8  38 80 FF FF */	li r4, -1
/* 801FE6BC 001FB5FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FE6C0 001FB600  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE6C4 001FB604  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FE6C8 001FB608  7D 89 03 A6 */	mtctr r12
/* 801FE6CC 001FB60C  4E 80 04 21 */	bctrl 
/* 801FE6D0 001FB610  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FE6D4 001FB614  7C 08 03 A6 */	mtlr r0
/* 801FE6D8 001FB618  38 21 00 10 */	addi r1, r1, 0x10
/* 801FE6DC 001FB61C  4E 80 00 20 */	blr 

.global "getEnd__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"getEnd__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE6E0 001FB620  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801FE6E4 001FB624  4E 80 00 20 */	blr 

.global "getAt__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
"getAt__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FE6E8 001FB628  1C 04 04 5C */	mulli r0, r4, 0x45c
/* 801FE6EC 001FB62C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801FE6F0 001FB630  7C 63 02 14 */	add r3, r3, r0
/* 801FE6F4 001FB634  4E 80 00 20 */	blr 

.global "getTo__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"getTo__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE6F8 001FB638  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801FE6FC 001FB63C  4E 80 00 20 */	blr 

.global "doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE700 001FB640  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FE704 001FB644  7C 08 02 A6 */	mflr r0
/* 801FE708 001FB648  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FE70C 001FB64C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FE710 001FB650  3B E0 00 00 */	li r31, 0
/* 801FE714 001FB654  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FE718 001FB658  3B C0 00 00 */	li r30, 0
/* 801FE71C 001FB65C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FE720 001FB660  7C 7D 1B 78 */	mr r29, r3
/* 801FE724 001FB664  48 00 00 34 */	b .L_801FE758
.L_801FE728:
/* 801FE728 001FB668  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FE72C 001FB66C  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FE730 001FB670  28 00 00 00 */	cmplwi r0, 0
/* 801FE734 001FB674  40 82 00 1C */	bne .L_801FE750
/* 801FE738 001FB678  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FE73C 001FB67C  7C 60 FA 14 */	add r3, r0, r31
/* 801FE740 001FB680  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE744 001FB684  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801FE748 001FB688  7D 89 03 A6 */	mtctr r12
/* 801FE74C 001FB68C  4E 80 04 21 */	bctrl 
.L_801FE750:
/* 801FE750 001FB690  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FE754 001FB694  3B DE 00 01 */	addi r30, r30, 1
.L_801FE758:
/* 801FE758 001FB698  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FE75C 001FB69C  7C 1E 00 00 */	cmpw r30, r0
/* 801FE760 001FB6A0  41 80 FF C8 */	blt .L_801FE728
/* 801FE764 001FB6A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FE768 001FB6A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FE76C 001FB6AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FE770 001FB6B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FE774 001FB6B4  7C 08 03 A6 */	mtlr r0
/* 801FE778 001FB6B8  38 21 00 20 */	addi r1, r1, 0x20
/* 801FE77C 001FB6BC  4E 80 00 20 */	blr 

.global "doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE780 001FB6C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FE784 001FB6C4  7C 08 02 A6 */	mflr r0
/* 801FE788 001FB6C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FE78C 001FB6CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FE790 001FB6D0  3B E0 00 00 */	li r31, 0
/* 801FE794 001FB6D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FE798 001FB6D8  3B C0 00 00 */	li r30, 0
/* 801FE79C 001FB6DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FE7A0 001FB6E0  7C 7D 1B 78 */	mr r29, r3
/* 801FE7A4 001FB6E4  48 00 00 34 */	b .L_801FE7D8
.L_801FE7A8:
/* 801FE7A8 001FB6E8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FE7AC 001FB6EC  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FE7B0 001FB6F0  28 00 00 00 */	cmplwi r0, 0
/* 801FE7B4 001FB6F4  40 82 00 1C */	bne .L_801FE7D0
/* 801FE7B8 001FB6F8  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FE7BC 001FB6FC  7C 60 FA 14 */	add r3, r0, r31
/* 801FE7C0 001FB700  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE7C4 001FB704  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801FE7C8 001FB708  7D 89 03 A6 */	mtctr r12
/* 801FE7CC 001FB70C  4E 80 04 21 */	bctrl 
.L_801FE7D0:
/* 801FE7D0 001FB710  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FE7D4 001FB714  3B DE 00 01 */	addi r30, r30, 1
.L_801FE7D8:
/* 801FE7D8 001FB718  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FE7DC 001FB71C  7C 1E 00 00 */	cmpw r30, r0
/* 801FE7E0 001FB720  41 80 FF C8 */	blt .L_801FE7A8
/* 801FE7E4 001FB724  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FE7E8 001FB728  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FE7EC 001FB72C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FE7F0 001FB730  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FE7F4 001FB734  7C 08 03 A6 */	mtlr r0
/* 801FE7F8 001FB738  38 21 00 20 */	addi r1, r1, 0x20
/* 801FE7FC 001FB73C  4E 80 00 20 */	blr 

.global "doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
"doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FE800 001FB740  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FE804 001FB744  7C 08 02 A6 */	mflr r0
/* 801FE808 001FB748  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FE80C 001FB74C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FE810 001FB750  3B E0 00 00 */	li r31, 0
/* 801FE814 001FB754  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FE818 001FB758  3B C0 00 00 */	li r30, 0
/* 801FE81C 001FB75C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FE820 001FB760  7C 9D 23 78 */	mr r29, r4
/* 801FE824 001FB764  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FE828 001FB768  7C 7C 1B 78 */	mr r28, r3
/* 801FE82C 001FB76C  48 00 00 38 */	b .L_801FE864
.L_801FE830:
/* 801FE830 001FB770  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801FE834 001FB774  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FE838 001FB778  28 00 00 00 */	cmplwi r0, 0
/* 801FE83C 001FB77C  40 82 00 20 */	bne .L_801FE85C
/* 801FE840 001FB780  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801FE844 001FB784  7F A4 EB 78 */	mr r4, r29
/* 801FE848 001FB788  7C 60 FA 14 */	add r3, r0, r31
/* 801FE84C 001FB78C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE850 001FB790  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801FE854 001FB794  7D 89 03 A6 */	mtctr r12
/* 801FE858 001FB798  4E 80 04 21 */	bctrl 
.L_801FE85C:
/* 801FE85C 001FB79C  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FE860 001FB7A0  3B DE 00 01 */	addi r30, r30, 1
.L_801FE864:
/* 801FE864 001FB7A4  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801FE868 001FB7A8  7C 1E 00 00 */	cmpw r30, r0
/* 801FE86C 001FB7AC  41 80 FF C4 */	blt .L_801FE830
/* 801FE870 001FB7B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FE874 001FB7B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FE878 001FB7B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FE87C 001FB7BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FE880 001FB7C0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FE884 001FB7C4  7C 08 03 A6 */	mtlr r0
/* 801FE888 001FB7C8  38 21 00 20 */	addi r1, r1, 0x20
/* 801FE88C 001FB7CC  4E 80 00 20 */	blr 

.global "doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FE890 001FB7D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FE894 001FB7D4  7C 08 02 A6 */	mflr r0
/* 801FE898 001FB7D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FE89C 001FB7DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FE8A0 001FB7E0  3B E0 00 00 */	li r31, 0
/* 801FE8A4 001FB7E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FE8A8 001FB7E8  3B C0 00 00 */	li r30, 0
/* 801FE8AC 001FB7EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FE8B0 001FB7F0  7C 7D 1B 78 */	mr r29, r3
/* 801FE8B4 001FB7F4  48 00 00 34 */	b .L_801FE8E8
.L_801FE8B8:
/* 801FE8B8 001FB7F8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FE8BC 001FB7FC  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FE8C0 001FB800  28 00 00 00 */	cmplwi r0, 0
/* 801FE8C4 001FB804  40 82 00 1C */	bne .L_801FE8E0
/* 801FE8C8 001FB808  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FE8CC 001FB80C  7C 60 FA 14 */	add r3, r0, r31
/* 801FE8D0 001FB810  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE8D4 001FB814  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801FE8D8 001FB818  7D 89 03 A6 */	mtctr r12
/* 801FE8DC 001FB81C  4E 80 04 21 */	bctrl 
.L_801FE8E0:
/* 801FE8E0 001FB820  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FE8E4 001FB824  3B DE 00 01 */	addi r30, r30, 1
.L_801FE8E8:
/* 801FE8E8 001FB828  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FE8EC 001FB82C  7C 1E 00 00 */	cmpw r30, r0
/* 801FE8F0 001FB830  41 80 FF C8 */	blt .L_801FE8B8
/* 801FE8F4 001FB834  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FE8F8 001FB838  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FE8FC 001FB83C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FE900 001FB840  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FE904 001FB844  7C 08 03 A6 */	mtlr r0
/* 801FE908 001FB848  38 21 00 20 */	addi r1, r1, 0x20
/* 801FE90C 001FB84C  4E 80 00 20 */	blr 

.global "doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff"
"doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff":
/* 801FE910 001FB850  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FE914 001FB854  7C 08 02 A6 */	mflr r0
/* 801FE918 001FB858  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FE91C 001FB85C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801FE920 001FB860  FF E0 08 90 */	fmr f31, f1
/* 801FE924 001FB864  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801FE928 001FB868  3B E0 00 00 */	li r31, 0
/* 801FE92C 001FB86C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801FE930 001FB870  3B C0 00 00 */	li r30, 0
/* 801FE934 001FB874  93 A1 00 0C */	stw r29, 0xc(r1)
/* 801FE938 001FB878  7C 7D 1B 78 */	mr r29, r3
/* 801FE93C 001FB87C  48 00 00 38 */	b .L_801FE974
.L_801FE940:
/* 801FE940 001FB880  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FE944 001FB884  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FE948 001FB888  28 00 00 00 */	cmplwi r0, 0
/* 801FE94C 001FB88C  40 82 00 20 */	bne .L_801FE96C
/* 801FE950 001FB890  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FE954 001FB894  FC 20 F8 90 */	fmr f1, f31
/* 801FE958 001FB898  7C 60 FA 14 */	add r3, r0, r31
/* 801FE95C 001FB89C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE960 001FB8A0  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801FE964 001FB8A4  7D 89 03 A6 */	mtctr r12
/* 801FE968 001FB8A8  4E 80 04 21 */	bctrl 
.L_801FE96C:
/* 801FE96C 001FB8AC  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FE970 001FB8B0  3B DE 00 01 */	addi r30, r30, 1
.L_801FE974:
/* 801FE974 001FB8B4  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FE978 001FB8B8  7C 1E 00 00 */	cmpw r30, r0
/* 801FE97C 001FB8BC  41 80 FF C4 */	blt .L_801FE940
/* 801FE980 001FB8C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FE984 001FB8C4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801FE988 001FB8C8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801FE98C 001FB8CC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801FE990 001FB8D0  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801FE994 001FB8D4  7C 08 03 A6 */	mtlr r0
/* 801FE998 001FB8D8  38 21 00 20 */	addi r1, r1, 0x20
/* 801FE99C 001FB8DC  4E 80 00 20 */	blr 

.global "doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
"doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics":
/* 801FE9A0 001FB8E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FE9A4 001FB8E4  7C 08 02 A6 */	mflr r0
/* 801FE9A8 001FB8E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FE9AC 001FB8EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FE9B0 001FB8F0  3B E0 00 00 */	li r31, 0
/* 801FE9B4 001FB8F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FE9B8 001FB8F8  3B C0 00 00 */	li r30, 0
/* 801FE9BC 001FB8FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FE9C0 001FB900  7C 9D 23 78 */	mr r29, r4
/* 801FE9C4 001FB904  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FE9C8 001FB908  7C 7C 1B 78 */	mr r28, r3
/* 801FE9CC 001FB90C  48 00 00 38 */	b .L_801FEA04
.L_801FE9D0:
/* 801FE9D0 001FB910  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801FE9D4 001FB914  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FE9D8 001FB918  28 00 00 00 */	cmplwi r0, 0
/* 801FE9DC 001FB91C  40 82 00 20 */	bne .L_801FE9FC
/* 801FE9E0 001FB920  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801FE9E4 001FB924  7F A4 EB 78 */	mr r4, r29
/* 801FE9E8 001FB928  7C 60 FA 14 */	add r3, r0, r31
/* 801FE9EC 001FB92C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FE9F0 001FB930  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801FE9F4 001FB934  7D 89 03 A6 */	mtctr r12
/* 801FE9F8 001FB938  4E 80 04 21 */	bctrl 
.L_801FE9FC:
/* 801FE9FC 001FB93C  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FEA00 001FB940  3B DE 00 01 */	addi r30, r30, 1
.L_801FEA04:
/* 801FEA04 001FB944  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801FEA08 001FB948  7C 1E 00 00 */	cmpw r30, r0
/* 801FEA0C 001FB94C  41 80 FF C4 */	blt .L_801FE9D0
/* 801FEA10 001FB950  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FEA14 001FB954  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FEA18 001FB958  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FEA1C 001FB95C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FEA20 001FB960  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FEA24 001FB964  7C 08 03 A6 */	mtlr r0
/* 801FEA28 001FB968  38 21 00 20 */	addi r1, r1, 0x20
/* 801FEA2C 001FB96C  4E 80 00 20 */	blr 

.global "clearMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"clearMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FEA30 001FB970  38 00 00 00 */	li r0, 0
/* 801FEA34 001FB974  38 C0 00 00 */	li r6, 0
/* 801FEA38 001FB978  90 03 00 20 */	stw r0, 0x20(r3)
/* 801FEA3C 001FB97C  38 A0 00 01 */	li r5, 1
/* 801FEA40 001FB980  48 00 00 10 */	b .L_801FEA50
.L_801FEA44:
/* 801FEA44 001FB984  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801FEA48 001FB988  7C A4 31 AE */	stbx r5, r4, r6
/* 801FEA4C 001FB98C  38 C6 00 01 */	addi r6, r6, 1
.L_801FEA50:
/* 801FEA50 001FB990  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801FEA54 001FB994  7C 06 00 00 */	cmpw r6, r0
/* 801FEA58 001FB998  41 80 FF EC */	blt .L_801FEA44
/* 801FEA5C 001FB99C  4E 80 00 20 */	blr 

.global "onAlloc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"onAlloc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FEA60 001FB9A0  4E 80 00 20 */	blr 

.global "getEmptyIndex__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"getEmptyIndex__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FEA64 001FB9A4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801FEA68 001FB9A8  38 A0 00 00 */	li r5, 0
/* 801FEA6C 001FB9AC  7C 09 03 A6 */	mtctr r0
/* 801FEA70 001FB9B0  2C 00 00 00 */	cmpwi r0, 0
/* 801FEA74 001FB9B4  40 81 00 24 */	ble .L_801FEA98
.L_801FEA78:
/* 801FEA78 001FB9B8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801FEA7C 001FB9BC  7C 04 28 AE */	lbzx r0, r4, r5
/* 801FEA80 001FB9C0  28 00 00 01 */	cmplwi r0, 1
/* 801FEA84 001FB9C4  40 82 00 0C */	bne .L_801FEA90
/* 801FEA88 001FB9C8  7C A3 2B 78 */	mr r3, r5
/* 801FEA8C 001FB9CC  4E 80 00 20 */	blr 
.L_801FEA90:
/* 801FEA90 001FB9D0  38 A5 00 01 */	addi r5, r5, 1
/* 801FEA94 001FB9D4  42 00 FF E4 */	bdnz .L_801FEA78
.L_801FEA98:
/* 801FEA98 001FB9D8  38 60 FF FF */	li r3, -1
/* 801FEA9C 001FB9DC  4E 80 00 20 */	blr 

.global "get__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPv"
"get__42MonoObjectMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FEAA0 001FB9E0  1C 04 04 5C */	mulli r0, r4, 0x45c
/* 801FEAA4 001FB9E4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801FEAA8 001FB9E8  7C 63 02 14 */	add r3, r3, r0
/* 801FEAAC 001FB9EC  4E 80 00 20 */	blr 

.global "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
"getObject__38Container<Q34Game11PelletFruit6Object>FPv":
/* 801FEAB0 001FB9F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FEAB4 001FB9F4  7C 08 02 A6 */	mflr r0
/* 801FEAB8 001FB9F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FEABC 001FB9FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEAC0 001FBA00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEAC4 001FBA04  7D 89 03 A6 */	mtctr r12
/* 801FEAC8 001FBA08  4E 80 04 21 */	bctrl 
/* 801FEACC 001FBA0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FEAD0 001FBA10  7C 08 03 A6 */	mtlr r0
/* 801FEAD4 001FBA14  38 21 00 10 */	addi r1, r1, 0x10
/* 801FEAD8 001FBA18  4E 80 00 20 */	blr 

.global "getAt__38Container<Q34Game11PelletFruit6Object>Fi"
"getAt__38Container<Q34Game11PelletFruit6Object>Fi":
/* 801FEADC 001FBA1C  38 60 00 00 */	li r3, 0
/* 801FEAE0 001FBA20  4E 80 00 20 */	blr 

.global "getTo__38Container<Q34Game11PelletFruit6Object>Fv"
"getTo__38Container<Q34Game11PelletFruit6Object>Fv":
/* 801FEAE4 001FBA24  38 60 00 00 */	li r3, 0
/* 801FEAE8 001FBA28  4E 80 00 20 */	blr 

.global "doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
"doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics":
/* 801FEAEC 001FBA2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FEAF0 001FBA30  7C 08 02 A6 */	mflr r0
/* 801FEAF4 001FBA34  3C A0 80 4C */	lis r5, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@ha
/* 801FEAF8 001FBA38  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FEAFC 001FBA3C  38 00 00 00 */	li r0, 0
/* 801FEB00 001FBA40  38 A5 E4 C4 */	addi r5, r5, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@l
/* 801FEB04 001FBA44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FEB08 001FBA48  28 00 00 00 */	cmplwi r0, 0
/* 801FEB0C 001FBA4C  7C 9F 23 78 */	mr r31, r4
/* 801FEB10 001FBA50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FEB14 001FBA54  90 A1 00 08 */	stw r5, 8(r1)
/* 801FEB18 001FBA58  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FEB1C 001FBA5C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FEB20 001FBA60  40 82 00 1C */	bne .L_801FEB3C
/* 801FEB24 001FBA64  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEB28 001FBA68  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FEB2C 001FBA6C  7D 89 03 A6 */	mtctr r12
/* 801FEB30 001FBA70  4E 80 04 21 */	bctrl 
/* 801FEB34 001FBA74  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEB38 001FBA78  48 00 01 74 */	b .L_801FECAC
.L_801FEB3C:
/* 801FEB3C 001FBA7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEB40 001FBA80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FEB44 001FBA84  7D 89 03 A6 */	mtctr r12
/* 801FEB48 001FBA88  4E 80 04 21 */	bctrl 
/* 801FEB4C 001FBA8C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEB50 001FBA90  48 00 00 58 */	b .L_801FEBA8
.L_801FEB54:
/* 801FEB54 001FBA94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEB58 001FBA98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEB5C 001FBA9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEB60 001FBAA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEB64 001FBAA4  7D 89 03 A6 */	mtctr r12
/* 801FEB68 001FBAA8  4E 80 04 21 */	bctrl 
/* 801FEB6C 001FBAAC  7C 64 1B 78 */	mr r4, r3
/* 801FEB70 001FBAB0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FEB74 001FBAB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEB78 001FBAB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FEB7C 001FBABC  7D 89 03 A6 */	mtctr r12
/* 801FEB80 001FBAC0  4E 80 04 21 */	bctrl 
/* 801FEB84 001FBAC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEB88 001FBAC8  40 82 01 24 */	bne .L_801FECAC
/* 801FEB8C 001FBACC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEB90 001FBAD0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEB94 001FBAD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEB98 001FBAD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEB9C 001FBADC  7D 89 03 A6 */	mtctr r12
/* 801FEBA0 001FBAE0  4E 80 04 21 */	bctrl 
/* 801FEBA4 001FBAE4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FEBA8:
/* 801FEBA8 001FBAE8  81 81 00 08 */	lwz r12, 8(r1)
/* 801FEBAC 001FBAEC  38 61 00 08 */	addi r3, r1, 8
/* 801FEBB0 001FBAF0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FEBB4 001FBAF4  7D 89 03 A6 */	mtctr r12
/* 801FEBB8 001FBAF8  4E 80 04 21 */	bctrl 
/* 801FEBBC 001FBAFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEBC0 001FBB00  41 82 FF 94 */	beq .L_801FEB54
/* 801FEBC4 001FBB04  48 00 00 E8 */	b .L_801FECAC
.L_801FEBC8:
/* 801FEBC8 001FBB08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEBCC 001FBB0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEBD0 001FBB10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEBD4 001FBB14  7D 89 03 A6 */	mtctr r12
/* 801FEBD8 001FBB18  4E 80 04 21 */	bctrl 
/* 801FEBDC 001FBB1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEBE0 001FBB20  7F E4 FB 78 */	mr r4, r31
/* 801FEBE4 001FBB24  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801FEBE8 001FBB28  7D 89 03 A6 */	mtctr r12
/* 801FEBEC 001FBB2C  4E 80 04 21 */	bctrl 
/* 801FEBF0 001FBB30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FEBF4 001FBB34  28 00 00 00 */	cmplwi r0, 0
/* 801FEBF8 001FBB38  40 82 00 24 */	bne .L_801FEC1C
/* 801FEBFC 001FBB3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEC00 001FBB40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEC04 001FBB44  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEC08 001FBB48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEC0C 001FBB4C  7D 89 03 A6 */	mtctr r12
/* 801FEC10 001FBB50  4E 80 04 21 */	bctrl 
/* 801FEC14 001FBB54  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEC18 001FBB58  48 00 00 94 */	b .L_801FECAC
.L_801FEC1C:
/* 801FEC1C 001FBB5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEC20 001FBB60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEC24 001FBB64  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEC28 001FBB68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEC2C 001FBB6C  7D 89 03 A6 */	mtctr r12
/* 801FEC30 001FBB70  4E 80 04 21 */	bctrl 
/* 801FEC34 001FBB74  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEC38 001FBB78  48 00 00 58 */	b .L_801FEC90
.L_801FEC3C:
/* 801FEC3C 001FBB7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEC40 001FBB80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEC44 001FBB84  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEC48 001FBB88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEC4C 001FBB8C  7D 89 03 A6 */	mtctr r12
/* 801FEC50 001FBB90  4E 80 04 21 */	bctrl 
/* 801FEC54 001FBB94  7C 64 1B 78 */	mr r4, r3
/* 801FEC58 001FBB98  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FEC5C 001FBB9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEC60 001FBBA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FEC64 001FBBA4  7D 89 03 A6 */	mtctr r12
/* 801FEC68 001FBBA8  4E 80 04 21 */	bctrl 
/* 801FEC6C 001FBBAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEC70 001FBBB0  40 82 00 3C */	bne .L_801FECAC
/* 801FEC74 001FBBB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEC78 001FBBB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEC7C 001FBBBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEC80 001FBBC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEC84 001FBBC4  7D 89 03 A6 */	mtctr r12
/* 801FEC88 001FBBC8  4E 80 04 21 */	bctrl 
/* 801FEC8C 001FBBCC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FEC90:
/* 801FEC90 001FBBD0  81 81 00 08 */	lwz r12, 8(r1)
/* 801FEC94 001FBBD4  38 61 00 08 */	addi r3, r1, 8
/* 801FEC98 001FBBD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FEC9C 001FBBDC  7D 89 03 A6 */	mtctr r12
/* 801FECA0 001FBBE0  4E 80 04 21 */	bctrl 
/* 801FECA4 001FBBE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FECA8 001FBBE8  41 82 FF 94 */	beq .L_801FEC3C
.L_801FECAC:
/* 801FECAC 001FBBEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FECB0 001FBBF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FECB4 001FBBF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FECB8 001FBBF8  7D 89 03 A6 */	mtctr r12
/* 801FECBC 001FBBFC  4E 80 04 21 */	bctrl 
/* 801FECC0 001FBC00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FECC4 001FBC04  7C 04 18 40 */	cmplw r4, r3
/* 801FECC8 001FBC08  40 82 FF 00 */	bne .L_801FEBC8
/* 801FECCC 001FBC0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FECD0 001FBC10  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FECD4 001FBC14  7C 08 03 A6 */	mtlr r0
/* 801FECD8 001FBC18  38 21 00 20 */	addi r1, r1, 0x20
/* 801FECDC 001FBC1C  4E 80 00 20 */	blr 

.global "isDone__37Iterator<Q34Game11PelletFruit6Object>Fv"
"isDone__37Iterator<Q34Game11PelletFruit6Object>Fv":
/* 801FECE0 001FBC20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FECE4 001FBC24  7C 08 02 A6 */	mflr r0
/* 801FECE8 001FBC28  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FECEC 001FBC2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FECF0 001FBC30  7C 7F 1B 78 */	mr r31, r3
/* 801FECF4 001FBC34  80 63 00 08 */	lwz r3, 8(r3)
/* 801FECF8 001FBC38  81 83 00 00 */	lwz r12, 0(r3)
/* 801FECFC 001FBC3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FED00 001FBC40  7D 89 03 A6 */	mtctr r12
/* 801FED04 001FBC44  4E 80 04 21 */	bctrl 
/* 801FED08 001FBC48  80 1F 00 04 */	lwz r0, 4(r31)
/* 801FED0C 001FBC4C  7C 00 18 50 */	subf r0, r0, r3
/* 801FED10 001FBC50  7C 00 00 34 */	cntlzw r0, r0
/* 801FED14 001FBC54  54 03 D9 7E */	srwi r3, r0, 5
/* 801FED18 001FBC58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FED1C 001FBC5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FED20 001FBC60  7C 08 03 A6 */	mtlr r0
/* 801FED24 001FBC64  38 21 00 10 */	addi r1, r1, 0x10
/* 801FED28 001FBC68  4E 80 00 20 */	blr 

.global "doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff"
"doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff":
/* 801FED2C 001FBC6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FED30 001FBC70  7C 08 02 A6 */	mflr r0
/* 801FED34 001FBC74  3C 80 80 4C */	lis r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@ha
/* 801FED38 001FBC78  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FED3C 001FBC7C  38 00 00 00 */	li r0, 0
/* 801FED40 001FBC80  38 84 E4 C4 */	addi r4, r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@l
/* 801FED44 001FBC84  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801FED48 001FBC88  FF E0 08 90 */	fmr f31, f1
/* 801FED4C 001FBC8C  28 00 00 00 */	cmplwi r0, 0
/* 801FED50 001FBC90  90 81 00 08 */	stw r4, 8(r1)
/* 801FED54 001FBC94  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FED58 001FBC98  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FED5C 001FBC9C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FED60 001FBCA0  40 82 00 1C */	bne .L_801FED7C
/* 801FED64 001FBCA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FED68 001FBCA8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FED6C 001FBCAC  7D 89 03 A6 */	mtctr r12
/* 801FED70 001FBCB0  4E 80 04 21 */	bctrl 
/* 801FED74 001FBCB4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FED78 001FBCB8  48 00 01 74 */	b .L_801FEEEC
.L_801FED7C:
/* 801FED7C 001FBCBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FED80 001FBCC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FED84 001FBCC4  7D 89 03 A6 */	mtctr r12
/* 801FED88 001FBCC8  4E 80 04 21 */	bctrl 
/* 801FED8C 001FBCCC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FED90 001FBCD0  48 00 00 58 */	b .L_801FEDE8
.L_801FED94:
/* 801FED94 001FBCD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FED98 001FBCD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FED9C 001FBCDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEDA0 001FBCE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEDA4 001FBCE4  7D 89 03 A6 */	mtctr r12
/* 801FEDA8 001FBCE8  4E 80 04 21 */	bctrl 
/* 801FEDAC 001FBCEC  7C 64 1B 78 */	mr r4, r3
/* 801FEDB0 001FBCF0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FEDB4 001FBCF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEDB8 001FBCF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FEDBC 001FBCFC  7D 89 03 A6 */	mtctr r12
/* 801FEDC0 001FBD00  4E 80 04 21 */	bctrl 
/* 801FEDC4 001FBD04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEDC8 001FBD08  40 82 01 24 */	bne .L_801FEEEC
/* 801FEDCC 001FBD0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEDD0 001FBD10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEDD4 001FBD14  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEDD8 001FBD18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEDDC 001FBD1C  7D 89 03 A6 */	mtctr r12
/* 801FEDE0 001FBD20  4E 80 04 21 */	bctrl 
/* 801FEDE4 001FBD24  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FEDE8:
/* 801FEDE8 001FBD28  81 81 00 08 */	lwz r12, 8(r1)
/* 801FEDEC 001FBD2C  38 61 00 08 */	addi r3, r1, 8
/* 801FEDF0 001FBD30  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FEDF4 001FBD34  7D 89 03 A6 */	mtctr r12
/* 801FEDF8 001FBD38  4E 80 04 21 */	bctrl 
/* 801FEDFC 001FBD3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEE00 001FBD40  41 82 FF 94 */	beq .L_801FED94
/* 801FEE04 001FBD44  48 00 00 E8 */	b .L_801FEEEC
.L_801FEE08:
/* 801FEE08 001FBD48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEE0C 001FBD4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEE10 001FBD50  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEE14 001FBD54  7D 89 03 A6 */	mtctr r12
/* 801FEE18 001FBD58  4E 80 04 21 */	bctrl 
/* 801FEE1C 001FBD5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEE20 001FBD60  FC 20 F8 90 */	fmr f1, f31
/* 801FEE24 001FBD64  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801FEE28 001FBD68  7D 89 03 A6 */	mtctr r12
/* 801FEE2C 001FBD6C  4E 80 04 21 */	bctrl 
/* 801FEE30 001FBD70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FEE34 001FBD74  28 00 00 00 */	cmplwi r0, 0
/* 801FEE38 001FBD78  40 82 00 24 */	bne .L_801FEE5C
/* 801FEE3C 001FBD7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEE40 001FBD80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEE44 001FBD84  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEE48 001FBD88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEE4C 001FBD8C  7D 89 03 A6 */	mtctr r12
/* 801FEE50 001FBD90  4E 80 04 21 */	bctrl 
/* 801FEE54 001FBD94  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEE58 001FBD98  48 00 00 94 */	b .L_801FEEEC
.L_801FEE5C:
/* 801FEE5C 001FBD9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEE60 001FBDA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEE64 001FBDA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEE68 001FBDA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEE6C 001FBDAC  7D 89 03 A6 */	mtctr r12
/* 801FEE70 001FBDB0  4E 80 04 21 */	bctrl 
/* 801FEE74 001FBDB4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEE78 001FBDB8  48 00 00 58 */	b .L_801FEED0
.L_801FEE7C:
/* 801FEE7C 001FBDBC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEE80 001FBDC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEE84 001FBDC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEE88 001FBDC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEE8C 001FBDCC  7D 89 03 A6 */	mtctr r12
/* 801FEE90 001FBDD0  4E 80 04 21 */	bctrl 
/* 801FEE94 001FBDD4  7C 64 1B 78 */	mr r4, r3
/* 801FEE98 001FBDD8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FEE9C 001FBDDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEEA0 001FBDE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FEEA4 001FBDE4  7D 89 03 A6 */	mtctr r12
/* 801FEEA8 001FBDE8  4E 80 04 21 */	bctrl 
/* 801FEEAC 001FBDEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEEB0 001FBDF0  40 82 00 3C */	bne .L_801FEEEC
/* 801FEEB4 001FBDF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEEB8 001FBDF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEEBC 001FBDFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEEC0 001FBE00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEEC4 001FBE04  7D 89 03 A6 */	mtctr r12
/* 801FEEC8 001FBE08  4E 80 04 21 */	bctrl 
/* 801FEECC 001FBE0C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FEED0:
/* 801FEED0 001FBE10  81 81 00 08 */	lwz r12, 8(r1)
/* 801FEED4 001FBE14  38 61 00 08 */	addi r3, r1, 8
/* 801FEED8 001FBE18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FEEDC 001FBE1C  7D 89 03 A6 */	mtctr r12
/* 801FEEE0 001FBE20  4E 80 04 21 */	bctrl 
/* 801FEEE4 001FBE24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEEE8 001FBE28  41 82 FF 94 */	beq .L_801FEE7C
.L_801FEEEC:
/* 801FEEEC 001FBE2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEEF0 001FBE30  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEEF4 001FBE34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FEEF8 001FBE38  7D 89 03 A6 */	mtctr r12
/* 801FEEFC 001FBE3C  4E 80 04 21 */	bctrl 
/* 801FEF00 001FBE40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEF04 001FBE44  7C 04 18 40 */	cmplw r4, r3
/* 801FEF08 001FBE48  40 82 FF 00 */	bne .L_801FEE08
/* 801FEF0C 001FBE4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FEF10 001FBE50  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801FEF14 001FBE54  7C 08 03 A6 */	mtlr r0
/* 801FEF18 001FBE58  38 21 00 20 */	addi r1, r1, 0x20
/* 801FEF1C 001FBE5C  4E 80 00 20 */	blr 

.global "doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FEF20 001FBE60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FEF24 001FBE64  7C 08 02 A6 */	mflr r0
/* 801FEF28 001FBE68  3C 80 80 4C */	lis r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@ha
/* 801FEF2C 001FBE6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FEF30 001FBE70  38 00 00 00 */	li r0, 0
/* 801FEF34 001FBE74  38 84 E4 C4 */	addi r4, r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@l
/* 801FEF38 001FBE78  28 00 00 00 */	cmplwi r0, 0
/* 801FEF3C 001FBE7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FEF40 001FBE80  90 81 00 08 */	stw r4, 8(r1)
/* 801FEF44 001FBE84  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FEF48 001FBE88  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FEF4C 001FBE8C  40 82 00 1C */	bne .L_801FEF68
/* 801FEF50 001FBE90  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEF54 001FBE94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FEF58 001FBE98  7D 89 03 A6 */	mtctr r12
/* 801FEF5C 001FBE9C  4E 80 04 21 */	bctrl 
/* 801FEF60 001FBEA0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEF64 001FBEA4  48 00 01 70 */	b .L_801FF0D4
.L_801FEF68:
/* 801FEF68 001FBEA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEF6C 001FBEAC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FEF70 001FBEB0  7D 89 03 A6 */	mtctr r12
/* 801FEF74 001FBEB4  4E 80 04 21 */	bctrl 
/* 801FEF78 001FBEB8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FEF7C 001FBEBC  48 00 00 58 */	b .L_801FEFD4
.L_801FEF80:
/* 801FEF80 001FBEC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEF84 001FBEC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEF88 001FBEC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEF8C 001FBECC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FEF90 001FBED0  7D 89 03 A6 */	mtctr r12
/* 801FEF94 001FBED4  4E 80 04 21 */	bctrl 
/* 801FEF98 001FBED8  7C 64 1B 78 */	mr r4, r3
/* 801FEF9C 001FBEDC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FEFA0 001FBEE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEFA4 001FBEE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FEFA8 001FBEE8  7D 89 03 A6 */	mtctr r12
/* 801FEFAC 001FBEEC  4E 80 04 21 */	bctrl 
/* 801FEFB0 001FBEF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEFB4 001FBEF4  40 82 01 20 */	bne .L_801FF0D4
/* 801FEFB8 001FBEF8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEFBC 001FBEFC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FEFC0 001FBF00  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEFC4 001FBF04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FEFC8 001FBF08  7D 89 03 A6 */	mtctr r12
/* 801FEFCC 001FBF0C  4E 80 04 21 */	bctrl 
/* 801FEFD0 001FBF10  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FEFD4:
/* 801FEFD4 001FBF14  81 81 00 08 */	lwz r12, 8(r1)
/* 801FEFD8 001FBF18  38 61 00 08 */	addi r3, r1, 8
/* 801FEFDC 001FBF1C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FEFE0 001FBF20  7D 89 03 A6 */	mtctr r12
/* 801FEFE4 001FBF24  4E 80 04 21 */	bctrl 
/* 801FEFE8 001FBF28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FEFEC 001FBF2C  41 82 FF 94 */	beq .L_801FEF80
/* 801FEFF0 001FBF30  48 00 00 E4 */	b .L_801FF0D4
.L_801FEFF4:
/* 801FEFF4 001FBF34  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FEFF8 001FBF38  81 83 00 00 */	lwz r12, 0(r3)
/* 801FEFFC 001FBF3C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF000 001FBF40  7D 89 03 A6 */	mtctr r12
/* 801FF004 001FBF44  4E 80 04 21 */	bctrl 
/* 801FF008 001FBF48  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF00C 001FBF4C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801FF010 001FBF50  7D 89 03 A6 */	mtctr r12
/* 801FF014 001FBF54  4E 80 04 21 */	bctrl 
/* 801FF018 001FBF58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF01C 001FBF5C  28 00 00 00 */	cmplwi r0, 0
/* 801FF020 001FBF60  40 82 00 24 */	bne .L_801FF044
/* 801FF024 001FBF64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF028 001FBF68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF02C 001FBF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF030 001FBF70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF034 001FBF74  7D 89 03 A6 */	mtctr r12
/* 801FF038 001FBF78  4E 80 04 21 */	bctrl 
/* 801FF03C 001FBF7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF040 001FBF80  48 00 00 94 */	b .L_801FF0D4
.L_801FF044:
/* 801FF044 001FBF84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF048 001FBF88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF04C 001FBF8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF050 001FBF90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF054 001FBF94  7D 89 03 A6 */	mtctr r12
/* 801FF058 001FBF98  4E 80 04 21 */	bctrl 
/* 801FF05C 001FBF9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF060 001FBFA0  48 00 00 58 */	b .L_801FF0B8
.L_801FF064:
/* 801FF064 001FBFA4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF068 001FBFA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF06C 001FBFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF070 001FBFB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF074 001FBFB4  7D 89 03 A6 */	mtctr r12
/* 801FF078 001FBFB8  4E 80 04 21 */	bctrl 
/* 801FF07C 001FBFBC  7C 64 1B 78 */	mr r4, r3
/* 801FF080 001FBFC0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF084 001FBFC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF088 001FBFC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF08C 001FBFCC  7D 89 03 A6 */	mtctr r12
/* 801FF090 001FBFD0  4E 80 04 21 */	bctrl 
/* 801FF094 001FBFD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF098 001FBFD8  40 82 00 3C */	bne .L_801FF0D4
/* 801FF09C 001FBFDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF0A0 001FBFE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF0A4 001FBFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF0A8 001FBFE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF0AC 001FBFEC  7D 89 03 A6 */	mtctr r12
/* 801FF0B0 001FBFF0  4E 80 04 21 */	bctrl 
/* 801FF0B4 001FBFF4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF0B8:
/* 801FF0B8 001FBFF8  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF0BC 001FBFFC  38 61 00 08 */	addi r3, r1, 8
/* 801FF0C0 001FC000  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF0C4 001FC004  7D 89 03 A6 */	mtctr r12
/* 801FF0C8 001FC008  4E 80 04 21 */	bctrl 
/* 801FF0CC 001FC00C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF0D0 001FC010  41 82 FF 94 */	beq .L_801FF064
.L_801FF0D4:
/* 801FF0D4 001FC014  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF0D8 001FC018  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF0DC 001FC01C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FF0E0 001FC020  7D 89 03 A6 */	mtctr r12
/* 801FF0E4 001FC024  4E 80 04 21 */	bctrl 
/* 801FF0E8 001FC028  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF0EC 001FC02C  7C 04 18 40 */	cmplw r4, r3
/* 801FF0F0 001FC030  40 82 FF 04 */	bne .L_801FEFF4
/* 801FF0F4 001FC034  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FF0F8 001FC038  7C 08 03 A6 */	mtlr r0
/* 801FF0FC 001FC03C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FF100 001FC040  4E 80 00 20 */	blr 

.global "doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi"
"doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FF104 001FC044  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FF108 001FC048  7C 08 02 A6 */	mflr r0
/* 801FF10C 001FC04C  3C A0 80 4C */	lis r5, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@ha
/* 801FF110 001FC050  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FF114 001FC054  38 00 00 00 */	li r0, 0
/* 801FF118 001FC058  38 A5 E4 C4 */	addi r5, r5, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@l
/* 801FF11C 001FC05C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FF120 001FC060  28 00 00 00 */	cmplwi r0, 0
/* 801FF124 001FC064  7C 9F 23 78 */	mr r31, r4
/* 801FF128 001FC068  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF12C 001FC06C  90 A1 00 08 */	stw r5, 8(r1)
/* 801FF130 001FC070  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FF134 001FC074  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FF138 001FC078  40 82 00 1C */	bne .L_801FF154
/* 801FF13C 001FC07C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF140 001FC080  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FF144 001FC084  7D 89 03 A6 */	mtctr r12
/* 801FF148 001FC088  4E 80 04 21 */	bctrl 
/* 801FF14C 001FC08C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF150 001FC090  48 00 01 74 */	b .L_801FF2C4
.L_801FF154:
/* 801FF154 001FC094  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF158 001FC098  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FF15C 001FC09C  7D 89 03 A6 */	mtctr r12
/* 801FF160 001FC0A0  4E 80 04 21 */	bctrl 
/* 801FF164 001FC0A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF168 001FC0A8  48 00 00 58 */	b .L_801FF1C0
.L_801FF16C:
/* 801FF16C 001FC0AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF170 001FC0B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF174 001FC0B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF178 001FC0B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF17C 001FC0BC  7D 89 03 A6 */	mtctr r12
/* 801FF180 001FC0C0  4E 80 04 21 */	bctrl 
/* 801FF184 001FC0C4  7C 64 1B 78 */	mr r4, r3
/* 801FF188 001FC0C8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF18C 001FC0CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF190 001FC0D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF194 001FC0D4  7D 89 03 A6 */	mtctr r12
/* 801FF198 001FC0D8  4E 80 04 21 */	bctrl 
/* 801FF19C 001FC0DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF1A0 001FC0E0  40 82 01 24 */	bne .L_801FF2C4
/* 801FF1A4 001FC0E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF1A8 001FC0E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF1AC 001FC0EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF1B0 001FC0F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF1B4 001FC0F4  7D 89 03 A6 */	mtctr r12
/* 801FF1B8 001FC0F8  4E 80 04 21 */	bctrl 
/* 801FF1BC 001FC0FC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF1C0:
/* 801FF1C0 001FC100  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF1C4 001FC104  38 61 00 08 */	addi r3, r1, 8
/* 801FF1C8 001FC108  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF1CC 001FC10C  7D 89 03 A6 */	mtctr r12
/* 801FF1D0 001FC110  4E 80 04 21 */	bctrl 
/* 801FF1D4 001FC114  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF1D8 001FC118  41 82 FF 94 */	beq .L_801FF16C
/* 801FF1DC 001FC11C  48 00 00 E8 */	b .L_801FF2C4
.L_801FF1E0:
/* 801FF1E0 001FC120  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF1E4 001FC124  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF1E8 001FC128  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF1EC 001FC12C  7D 89 03 A6 */	mtctr r12
/* 801FF1F0 001FC130  4E 80 04 21 */	bctrl 
/* 801FF1F4 001FC134  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF1F8 001FC138  7F E4 FB 78 */	mr r4, r31
/* 801FF1FC 001FC13C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801FF200 001FC140  7D 89 03 A6 */	mtctr r12
/* 801FF204 001FC144  4E 80 04 21 */	bctrl 
/* 801FF208 001FC148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF20C 001FC14C  28 00 00 00 */	cmplwi r0, 0
/* 801FF210 001FC150  40 82 00 24 */	bne .L_801FF234
/* 801FF214 001FC154  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF218 001FC158  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF21C 001FC15C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF220 001FC160  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF224 001FC164  7D 89 03 A6 */	mtctr r12
/* 801FF228 001FC168  4E 80 04 21 */	bctrl 
/* 801FF22C 001FC16C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF230 001FC170  48 00 00 94 */	b .L_801FF2C4
.L_801FF234:
/* 801FF234 001FC174  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF238 001FC178  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF23C 001FC17C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF240 001FC180  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF244 001FC184  7D 89 03 A6 */	mtctr r12
/* 801FF248 001FC188  4E 80 04 21 */	bctrl 
/* 801FF24C 001FC18C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF250 001FC190  48 00 00 58 */	b .L_801FF2A8
.L_801FF254:
/* 801FF254 001FC194  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF258 001FC198  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF25C 001FC19C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF260 001FC1A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF264 001FC1A4  7D 89 03 A6 */	mtctr r12
/* 801FF268 001FC1A8  4E 80 04 21 */	bctrl 
/* 801FF26C 001FC1AC  7C 64 1B 78 */	mr r4, r3
/* 801FF270 001FC1B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF274 001FC1B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF278 001FC1B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF27C 001FC1BC  7D 89 03 A6 */	mtctr r12
/* 801FF280 001FC1C0  4E 80 04 21 */	bctrl 
/* 801FF284 001FC1C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF288 001FC1C8  40 82 00 3C */	bne .L_801FF2C4
/* 801FF28C 001FC1CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF290 001FC1D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF294 001FC1D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF298 001FC1D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF29C 001FC1DC  7D 89 03 A6 */	mtctr r12
/* 801FF2A0 001FC1E0  4E 80 04 21 */	bctrl 
/* 801FF2A4 001FC1E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF2A8:
/* 801FF2A8 001FC1E8  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF2AC 001FC1EC  38 61 00 08 */	addi r3, r1, 8
/* 801FF2B0 001FC1F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF2B4 001FC1F4  7D 89 03 A6 */	mtctr r12
/* 801FF2B8 001FC1F8  4E 80 04 21 */	bctrl 
/* 801FF2BC 001FC1FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF2C0 001FC200  41 82 FF 94 */	beq .L_801FF254
.L_801FF2C4:
/* 801FF2C4 001FC204  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF2C8 001FC208  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF2CC 001FC20C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FF2D0 001FC210  7D 89 03 A6 */	mtctr r12
/* 801FF2D4 001FC214  4E 80 04 21 */	bctrl 
/* 801FF2D8 001FC218  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF2DC 001FC21C  7C 04 18 40 */	cmplw r4, r3
/* 801FF2E0 001FC220  40 82 FF 00 */	bne .L_801FF1E0
/* 801FF2E4 001FC224  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FF2E8 001FC228  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FF2EC 001FC22C  7C 08 03 A6 */	mtlr r0
/* 801FF2F0 001FC230  38 21 00 20 */	addi r1, r1, 0x20
/* 801FF2F4 001FC234  4E 80 00 20 */	blr 

.global "doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FF2F8 001FC238  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FF2FC 001FC23C  7C 08 02 A6 */	mflr r0
/* 801FF300 001FC240  3C 80 80 4C */	lis r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@ha
/* 801FF304 001FC244  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FF308 001FC248  38 00 00 00 */	li r0, 0
/* 801FF30C 001FC24C  38 84 E4 C4 */	addi r4, r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@l
/* 801FF310 001FC250  28 00 00 00 */	cmplwi r0, 0
/* 801FF314 001FC254  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF318 001FC258  90 81 00 08 */	stw r4, 8(r1)
/* 801FF31C 001FC25C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FF320 001FC260  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FF324 001FC264  40 82 00 1C */	bne .L_801FF340
/* 801FF328 001FC268  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF32C 001FC26C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FF330 001FC270  7D 89 03 A6 */	mtctr r12
/* 801FF334 001FC274  4E 80 04 21 */	bctrl 
/* 801FF338 001FC278  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF33C 001FC27C  48 00 01 70 */	b .L_801FF4AC
.L_801FF340:
/* 801FF340 001FC280  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF344 001FC284  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FF348 001FC288  7D 89 03 A6 */	mtctr r12
/* 801FF34C 001FC28C  4E 80 04 21 */	bctrl 
/* 801FF350 001FC290  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF354 001FC294  48 00 00 58 */	b .L_801FF3AC
.L_801FF358:
/* 801FF358 001FC298  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF35C 001FC29C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF360 001FC2A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF364 001FC2A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF368 001FC2A8  7D 89 03 A6 */	mtctr r12
/* 801FF36C 001FC2AC  4E 80 04 21 */	bctrl 
/* 801FF370 001FC2B0  7C 64 1B 78 */	mr r4, r3
/* 801FF374 001FC2B4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF378 001FC2B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF37C 001FC2BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF380 001FC2C0  7D 89 03 A6 */	mtctr r12
/* 801FF384 001FC2C4  4E 80 04 21 */	bctrl 
/* 801FF388 001FC2C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF38C 001FC2CC  40 82 01 20 */	bne .L_801FF4AC
/* 801FF390 001FC2D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF394 001FC2D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF398 001FC2D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF39C 001FC2DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF3A0 001FC2E0  7D 89 03 A6 */	mtctr r12
/* 801FF3A4 001FC2E4  4E 80 04 21 */	bctrl 
/* 801FF3A8 001FC2E8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF3AC:
/* 801FF3AC 001FC2EC  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF3B0 001FC2F0  38 61 00 08 */	addi r3, r1, 8
/* 801FF3B4 001FC2F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF3B8 001FC2F8  7D 89 03 A6 */	mtctr r12
/* 801FF3BC 001FC2FC  4E 80 04 21 */	bctrl 
/* 801FF3C0 001FC300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF3C4 001FC304  41 82 FF 94 */	beq .L_801FF358
/* 801FF3C8 001FC308  48 00 00 E4 */	b .L_801FF4AC
.L_801FF3CC:
/* 801FF3CC 001FC30C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF3D0 001FC310  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF3D4 001FC314  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF3D8 001FC318  7D 89 03 A6 */	mtctr r12
/* 801FF3DC 001FC31C  4E 80 04 21 */	bctrl 
/* 801FF3E0 001FC320  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF3E4 001FC324  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801FF3E8 001FC328  7D 89 03 A6 */	mtctr r12
/* 801FF3EC 001FC32C  4E 80 04 21 */	bctrl 
/* 801FF3F0 001FC330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF3F4 001FC334  28 00 00 00 */	cmplwi r0, 0
/* 801FF3F8 001FC338  40 82 00 24 */	bne .L_801FF41C
/* 801FF3FC 001FC33C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF400 001FC340  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF404 001FC344  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF408 001FC348  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF40C 001FC34C  7D 89 03 A6 */	mtctr r12
/* 801FF410 001FC350  4E 80 04 21 */	bctrl 
/* 801FF414 001FC354  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF418 001FC358  48 00 00 94 */	b .L_801FF4AC
.L_801FF41C:
/* 801FF41C 001FC35C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF420 001FC360  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF424 001FC364  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF428 001FC368  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF42C 001FC36C  7D 89 03 A6 */	mtctr r12
/* 801FF430 001FC370  4E 80 04 21 */	bctrl 
/* 801FF434 001FC374  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF438 001FC378  48 00 00 58 */	b .L_801FF490
.L_801FF43C:
/* 801FF43C 001FC37C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF440 001FC380  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF444 001FC384  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF448 001FC388  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF44C 001FC38C  7D 89 03 A6 */	mtctr r12
/* 801FF450 001FC390  4E 80 04 21 */	bctrl 
/* 801FF454 001FC394  7C 64 1B 78 */	mr r4, r3
/* 801FF458 001FC398  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF45C 001FC39C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF460 001FC3A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF464 001FC3A4  7D 89 03 A6 */	mtctr r12
/* 801FF468 001FC3A8  4E 80 04 21 */	bctrl 
/* 801FF46C 001FC3AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF470 001FC3B0  40 82 00 3C */	bne .L_801FF4AC
/* 801FF474 001FC3B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF478 001FC3B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF47C 001FC3BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF480 001FC3C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF484 001FC3C4  7D 89 03 A6 */	mtctr r12
/* 801FF488 001FC3C8  4E 80 04 21 */	bctrl 
/* 801FF48C 001FC3CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF490:
/* 801FF490 001FC3D0  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF494 001FC3D4  38 61 00 08 */	addi r3, r1, 8
/* 801FF498 001FC3D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF49C 001FC3DC  7D 89 03 A6 */	mtctr r12
/* 801FF4A0 001FC3E0  4E 80 04 21 */	bctrl 
/* 801FF4A4 001FC3E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF4A8 001FC3E8  41 82 FF 94 */	beq .L_801FF43C
.L_801FF4AC:
/* 801FF4AC 001FC3EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF4B0 001FC3F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF4B4 001FC3F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FF4B8 001FC3F8  7D 89 03 A6 */	mtctr r12
/* 801FF4BC 001FC3FC  4E 80 04 21 */	bctrl 
/* 801FF4C0 001FC400  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF4C4 001FC404  7C 04 18 40 */	cmplw r4, r3
/* 801FF4C8 001FC408  40 82 FF 04 */	bne .L_801FF3CC
/* 801FF4CC 001FC40C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FF4D0 001FC410  7C 08 03 A6 */	mtlr r0
/* 801FF4D4 001FC414  38 21 00 20 */	addi r1, r1, 0x20
/* 801FF4D8 001FC418  4E 80 00 20 */	blr 

.global "doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FF4DC 001FC41C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FF4E0 001FC420  7C 08 02 A6 */	mflr r0
/* 801FF4E4 001FC424  3C 80 80 4C */	lis r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@ha
/* 801FF4E8 001FC428  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FF4EC 001FC42C  38 00 00 00 */	li r0, 0
/* 801FF4F0 001FC430  38 84 E4 C4 */	addi r4, r4, "__vt__37Iterator<Q34Game11PelletFruit6Object>"@l
/* 801FF4F4 001FC434  28 00 00 00 */	cmplwi r0, 0
/* 801FF4F8 001FC438  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF4FC 001FC43C  90 81 00 08 */	stw r4, 8(r1)
/* 801FF500 001FC440  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FF504 001FC444  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FF508 001FC448  40 82 00 1C */	bne .L_801FF524
/* 801FF50C 001FC44C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF510 001FC450  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FF514 001FC454  7D 89 03 A6 */	mtctr r12
/* 801FF518 001FC458  4E 80 04 21 */	bctrl 
/* 801FF51C 001FC45C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF520 001FC460  48 00 01 70 */	b .L_801FF690
.L_801FF524:
/* 801FF524 001FC464  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF528 001FC468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FF52C 001FC46C  7D 89 03 A6 */	mtctr r12
/* 801FF530 001FC470  4E 80 04 21 */	bctrl 
/* 801FF534 001FC474  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF538 001FC478  48 00 00 58 */	b .L_801FF590
.L_801FF53C:
/* 801FF53C 001FC47C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF540 001FC480  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF544 001FC484  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF548 001FC488  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF54C 001FC48C  7D 89 03 A6 */	mtctr r12
/* 801FF550 001FC490  4E 80 04 21 */	bctrl 
/* 801FF554 001FC494  7C 64 1B 78 */	mr r4, r3
/* 801FF558 001FC498  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF55C 001FC49C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF560 001FC4A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF564 001FC4A4  7D 89 03 A6 */	mtctr r12
/* 801FF568 001FC4A8  4E 80 04 21 */	bctrl 
/* 801FF56C 001FC4AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF570 001FC4B0  40 82 01 20 */	bne .L_801FF690
/* 801FF574 001FC4B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF578 001FC4B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF57C 001FC4BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF580 001FC4C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF584 001FC4C4  7D 89 03 A6 */	mtctr r12
/* 801FF588 001FC4C8  4E 80 04 21 */	bctrl 
/* 801FF58C 001FC4CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF590:
/* 801FF590 001FC4D0  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF594 001FC4D4  38 61 00 08 */	addi r3, r1, 8
/* 801FF598 001FC4D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF59C 001FC4DC  7D 89 03 A6 */	mtctr r12
/* 801FF5A0 001FC4E0  4E 80 04 21 */	bctrl 
/* 801FF5A4 001FC4E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF5A8 001FC4E8  41 82 FF 94 */	beq .L_801FF53C
/* 801FF5AC 001FC4EC  48 00 00 E4 */	b .L_801FF690
.L_801FF5B0:
/* 801FF5B0 001FC4F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF5B4 001FC4F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF5B8 001FC4F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF5BC 001FC4FC  7D 89 03 A6 */	mtctr r12
/* 801FF5C0 001FC500  4E 80 04 21 */	bctrl 
/* 801FF5C4 001FC504  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF5C8 001FC508  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801FF5CC 001FC50C  7D 89 03 A6 */	mtctr r12
/* 801FF5D0 001FC510  4E 80 04 21 */	bctrl 
/* 801FF5D4 001FC514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF5D8 001FC518  28 00 00 00 */	cmplwi r0, 0
/* 801FF5DC 001FC51C  40 82 00 24 */	bne .L_801FF600
/* 801FF5E0 001FC520  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF5E4 001FC524  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF5E8 001FC528  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF5EC 001FC52C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF5F0 001FC530  7D 89 03 A6 */	mtctr r12
/* 801FF5F4 001FC534  4E 80 04 21 */	bctrl 
/* 801FF5F8 001FC538  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF5FC 001FC53C  48 00 00 94 */	b .L_801FF690
.L_801FF600:
/* 801FF600 001FC540  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF604 001FC544  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF608 001FC548  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF60C 001FC54C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF610 001FC550  7D 89 03 A6 */	mtctr r12
/* 801FF614 001FC554  4E 80 04 21 */	bctrl 
/* 801FF618 001FC558  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FF61C 001FC55C  48 00 00 58 */	b .L_801FF674
.L_801FF620:
/* 801FF620 001FC560  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF624 001FC564  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF628 001FC568  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF62C 001FC56C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF630 001FC570  7D 89 03 A6 */	mtctr r12
/* 801FF634 001FC574  4E 80 04 21 */	bctrl 
/* 801FF638 001FC578  7C 64 1B 78 */	mr r4, r3
/* 801FF63C 001FC57C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FF640 001FC580  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF644 001FC584  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FF648 001FC588  7D 89 03 A6 */	mtctr r12
/* 801FF64C 001FC58C  4E 80 04 21 */	bctrl 
/* 801FF650 001FC590  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF654 001FC594  40 82 00 3C */	bne .L_801FF690
/* 801FF658 001FC598  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF65C 001FC59C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF660 001FC5A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF664 001FC5A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF668 001FC5A8  7D 89 03 A6 */	mtctr r12
/* 801FF66C 001FC5AC  4E 80 04 21 */	bctrl 
/* 801FF670 001FC5B0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FF674:
/* 801FF674 001FC5B4  81 81 00 08 */	lwz r12, 8(r1)
/* 801FF678 001FC5B8  38 61 00 08 */	addi r3, r1, 8
/* 801FF67C 001FC5BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FF680 001FC5C0  7D 89 03 A6 */	mtctr r12
/* 801FF684 001FC5C4  4E 80 04 21 */	bctrl 
/* 801FF688 001FC5C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FF68C 001FC5CC  41 82 FF 94 */	beq .L_801FF620
.L_801FF690:
/* 801FF690 001FC5D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FF694 001FC5D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF698 001FC5D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FF69C 001FC5DC  7D 89 03 A6 */	mtctr r12
/* 801FF6A0 001FC5E0  4E 80 04 21 */	bctrl 
/* 801FF6A4 001FC5E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FF6A8 001FC5E8  7C 04 18 40 */	cmplw r4, r3
/* 801FF6AC 001FC5EC  40 82 FF 04 */	bne .L_801FF5B0
/* 801FF6B0 001FC5F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FF6B4 001FC5F4  7C 08 03 A6 */	mtlr r0
/* 801FF6B8 001FC5F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801FF6BC 001FC5FC  4E 80 00 20 */	blr 

.global "__ct__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"__ct__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FF6C0 001FC600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF6C4 001FC604  7C 08 02 A6 */	mflr r0
/* 801FF6C8 001FC608  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF6CC 001FC60C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FF6D0 001FC610  7C 7F 1B 78 */	mr r31, r3
/* 801FF6D4 001FC614  48 21 1C BD */	bl __ct__5CNodeFv
/* 801FF6D8 001FC618  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FF6DC 001FC61C  3C 60 80 4C */	lis r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@ha
/* 801FF6E0 001FC620  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FF6E4 001FC624  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 801FF6E8 001FC628  90 1F 00 00 */	stw r0, 0(r31)
/* 801FF6EC 001FC62C  38 03 E2 7C */	addi r0, r3, "__vt__38Container<Q34Game11PelletFruit6Object>"@l
/* 801FF6F0 001FC630  3C 80 80 4C */	lis r4, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FF6F4 001FC634  3C 60 80 4C */	lis r3, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@ha
/* 801FF6F8 001FC638  90 1F 00 00 */	stw r0, 0(r31)
/* 801FF6FC 001FC63C  39 00 00 00 */	li r8, 0
/* 801FF700 001FC640  38 E4 E0 A8 */	addi r7, r4, "__vt__38ObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FF704 001FC644  38 A3 E1 24 */	addi r5, r3, "__vt__42MonoObjectMgr<Q34Game11PelletFruit6Object>"@l
/* 801FF708 001FC648  99 1F 00 18 */	stb r8, 0x18(r31)
/* 801FF70C 001FC64C  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 801FF710 001FC650  38 C7 00 2C */	addi r6, r7, 0x2c
/* 801FF714 001FC654  38 85 00 2C */	addi r4, r5, 0x2c
/* 801FF718 001FC658  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801FF71C 001FC65C  38 00 00 01 */	li r0, 1
/* 801FF720 001FC660  7F E3 FB 78 */	mr r3, r31
/* 801FF724 001FC664  90 FF 00 00 */	stw r7, 0(r31)
/* 801FF728 001FC668  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 801FF72C 001FC66C  90 BF 00 00 */	stw r5, 0(r31)
/* 801FF730 001FC670  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801FF734 001FC674  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801FF738 001FC678  91 1F 00 24 */	stw r8, 0x24(r31)
/* 801FF73C 001FC67C  91 1F 00 20 */	stw r8, 0x20(r31)
/* 801FF740 001FC680  91 1F 00 28 */	stw r8, 0x28(r31)
/* 801FF744 001FC684  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 801FF748 001FC688  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FF74C 001FC68C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF750 001FC690  7C 08 03 A6 */	mtlr r0
/* 801FF754 001FC694  38 21 00 10 */	addi r1, r1, 0x10
/* 801FF758 001FC698  4E 80 00 20 */	blr 

.global "getFlag__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
"getFlag__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet":
/* 801FF75C 001FC69C  28 04 00 00 */	cmplwi r4, 0
/* 801FF760 001FC6A0  41 82 00 14 */	beq .L_801FF774
/* 801FF764 001FC6A4  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FF768 001FC6A8  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FF76C 001FC6AC  7C 63 00 AE */	lbzx r3, r3, r0
/* 801FF770 001FC6B0  4E 80 00 20 */	blr 
.L_801FF774:
/* 801FF774 001FC6B4  38 60 FF FF */	li r3, -1
/* 801FF778 001FC6B8  4E 80 00 20 */	blr 

.global "setFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
"setFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet":
/* 801FF77C 001FC6BC  28 04 00 00 */	cmplwi r4, 0
/* 801FF780 001FC6C0  4D 82 00 20 */	beqlr 
/* 801FF784 001FC6C4  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FF788 001FC6C8  38 A0 00 65 */	li r5, 0x65
/* 801FF78C 001FC6CC  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FF790 001FC6D0  7C A3 01 AE */	stbx r5, r3, r0
/* 801FF794 001FC6D4  4E 80 00 20 */	blr 

.global "setRevival__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
"setRevival__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet":
/* 801FF798 001FC6D8  28 04 00 00 */	cmplwi r4, 0
/* 801FF79C 001FC6DC  4D 82 00 20 */	beqlr 
/* 801FF7A0 001FC6E0  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FF7A4 001FC6E4  38 A0 00 64 */	li r5, 0x64
/* 801FF7A8 001FC6E8  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FF7AC 001FC6EC  7C A3 01 AE */	stbx r5, r3, r0
/* 801FF7B0 001FC6F0  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
"setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet":
/* 801FF7B4 001FC6F4  28 04 00 00 */	cmplwi r4, 0
/* 801FF7B8 001FC6F8  4D 82 00 20 */	beqlr 
/* 801FF7BC 001FC6FC  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FF7C0 001FC700  38 A0 00 00 */	li r5, 0
/* 801FF7C4 001FC704  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FF7C8 001FC708  7C A3 01 AE */	stbx r5, r3, r0
/* 801FF7CC 001FC70C  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
"setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FF7D0 001FC710  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FF7D4 001FC714  38 00 00 00 */	li r0, 0
/* 801FF7D8 001FC718  7C 03 21 AE */	stbx r0, r3, r4
/* 801FF7DC 001FC71C  4E 80 00 20 */	blr 

.global "getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FF7E0 001FC720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF7E4 001FC724  7C 08 02 A6 */	mflr r0
/* 801FF7E8 001FC728  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF7EC 001FC72C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FF7F0 001FC730  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FF7F4 001FC734  7D 89 03 A6 */	mtctr r12
/* 801FF7F8 001FC738  4E 80 04 21 */	bctrl 
/* 801FF7FC 001FC73C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF800 001FC740  7C 08 03 A6 */	mtlr r0
/* 801FF804 001FC744  38 21 00 10 */	addi r1, r1, 0x10
/* 801FF808 001FC748  4E 80 00 20 */	blr 

.global "get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
"get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FF80C 001FC74C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF810 001FC750  7C 08 02 A6 */	mflr r0
/* 801FF814 001FC754  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF818 001FC758  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FF81C 001FC75C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF820 001FC760  7D 89 03 A6 */	mtctr r12
/* 801FF824 001FC764  4E 80 04 21 */	bctrl 
/* 801FF828 001FC768  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF82C 001FC76C  7C 08 03 A6 */	mtlr r0
/* 801FF830 001FC770  38 21 00 10 */	addi r1, r1, 0x10
/* 801FF834 001FC774  4E 80 00 20 */	blr 

.global "getObjectPtr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
"getObjectPtr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FF838 001FC778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF83C 001FC77C  7C 08 02 A6 */	mflr r0
/* 801FF840 001FC780  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF844 001FC784  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF848 001FC788  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 801FF84C 001FC78C  7D 89 03 A6 */	mtctr r12
/* 801FF850 001FC790  4E 80 04 21 */	bctrl 
/* 801FF854 001FC794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF858 001FC798  7C 08 03 A6 */	mtlr r0
/* 801FF85C 001FC79C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FF860 001FC7A0  4E 80 00 20 */	blr 

.global "birthFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game12PelletConfig"
"birthFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game12PelletConfig":
/* 801FF864 001FC7A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FF868 001FC7A8  7C 08 02 A6 */	mflr r0
/* 801FF86C 001FC7AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FF870 001FC7B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FF874 001FC7B4  3B E0 00 00 */	li r31, 0
/* 801FF878 001FC7B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FF87C 001FC7BC  7C 9E 23 78 */	mr r30, r4
/* 801FF880 001FC7C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FF884 001FC7C4  7C 7D 1B 78 */	mr r29, r3
/* 801FF888 001FC7C8  48 00 00 40 */	b .L_801FF8C8
.L_801FF88C:
/* 801FF88C 001FC7CC  80 7D 00 9C */	lwz r3, 0x9c(r29)
/* 801FF890 001FC7D0  7C 03 F8 AE */	lbzx r0, r3, r31
/* 801FF894 001FC7D4  28 00 00 65 */	cmplwi r0, 0x65
/* 801FF898 001FC7D8  40 82 00 2C */	bne .L_801FF8C4
/* 801FF89C 001FC7DC  38 7D 00 70 */	addi r3, r29, 0x70
/* 801FF8A0 001FC7E0  7F E4 FB 78 */	mr r4, r31
/* 801FF8A4 001FC7E4  81 9D 00 70 */	lwz r12, 0x70(r29)
/* 801FF8A8 001FC7E8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801FF8AC 001FC7EC  7D 89 03 A6 */	mtctr r12
/* 801FF8B0 001FC7F0  4E 80 04 21 */	bctrl 
/* 801FF8B4 001FC7F4  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 801FF8B8 001FC7F8  7C 00 F0 40 */	cmplw r0, r30
/* 801FF8BC 001FC7FC  40 82 00 08 */	bne .L_801FF8C4
/* 801FF8C0 001FC800  48 00 00 18 */	b .L_801FF8D8
.L_801FF8C4:
/* 801FF8C4 001FC804  3B FF 00 01 */	addi r31, r31, 1
.L_801FF8C8:
/* 801FF8C8 001FC808  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 801FF8CC 001FC80C  7C 1F 00 00 */	cmpw r31, r0
/* 801FF8D0 001FC810  41 80 FF BC */	blt .L_801FF88C
/* 801FF8D4 001FC814  38 60 00 00 */	li r3, 0
.L_801FF8D8:
/* 801FF8D8 001FC818  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FF8DC 001FC81C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FF8E0 001FC820  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FF8E4 001FC824  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FF8E8 001FC828  7C 08 03 A6 */	mtlr r0
/* 801FF8EC 001FC82C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FF8F0 001FC830  4E 80 00 20 */	blr 

.global "alloc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
"alloc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FF8F4 001FC834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF8F8 001FC838  7C 08 02 A6 */	mflr r0
/* 801FF8FC 001FC83C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF900 001FC840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FF904 001FC844  93 C1 00 08 */	stw r30, 8(r1)
/* 801FF908 001FC848  7C 7E 1B 78 */	mr r30, r3
/* 801FF90C 001FC84C  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FF910 001FC850  48 00 02 C1 */	bl "alloc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
/* 801FF914 001FC854  7F C3 F3 78 */	mr r3, r30
/* 801FF918 001FC858  48 00 02 55 */	bl "onAlloc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
/* 801FF91C 001FC85C  3B E0 00 00 */	li r31, 0
/* 801FF920 001FC860  48 00 00 30 */	b .L_801FF950
.L_801FF924:
/* 801FF924 001FC864  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FF928 001FC868  7F E4 FB 78 */	mr r4, r31
/* 801FF92C 001FC86C  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 801FF930 001FC870  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801FF934 001FC874  7D 89 03 A6 */	mtctr r12
/* 801FF938 001FC878  4E 80 04 21 */	bctrl 
/* 801FF93C 001FC87C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF940 001FC880  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801FF944 001FC884  7D 89 03 A6 */	mtctr r12
/* 801FF948 001FC888  4E 80 04 21 */	bctrl 
/* 801FF94C 001FC88C  3B FF 00 01 */	addi r31, r31, 1
.L_801FF950:
/* 801FF950 001FC890  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 801FF954 001FC894  7C 1F 00 00 */	cmpw r31, r0
/* 801FF958 001FC898  41 80 FF CC */	blt .L_801FF924
/* 801FF95C 001FC89C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF960 001FC8A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FF964 001FC8A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FF968 001FC8A8  7C 08 03 A6 */	mtlr r0
/* 801FF96C 001FC8AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801FF970 001FC8B0  4E 80 00 20 */	blr 

.global "__ml__37Iterator<Q34Game11PelletFruit6Object>Fv"
"__ml__37Iterator<Q34Game11PelletFruit6Object>Fv":
/* 801FF974 001FC8B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF978 001FC8B8  7C 08 02 A6 */	mflr r0
/* 801FF97C 001FC8BC  7C 64 1B 78 */	mr r4, r3
/* 801FF980 001FC8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF984 001FC8C4  80 63 00 08 */	lwz r3, 8(r3)
/* 801FF988 001FC8C8  80 84 00 04 */	lwz r4, 4(r4)
/* 801FF98C 001FC8CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF990 001FC8D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FF994 001FC8D4  7D 89 03 A6 */	mtctr r12
/* 801FF998 001FC8D8  4E 80 04 21 */	bctrl 
/* 801FF99C 001FC8DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FF9A0 001FC8E0  7C 08 03 A6 */	mtlr r0
/* 801FF9A4 001FC8E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801FF9A8 001FC8E8  4E 80 00 20 */	blr 

.global "next__37Iterator<Q34Game11PelletFruit6Object>Fv"
"next__37Iterator<Q34Game11PelletFruit6Object>Fv":
/* 801FF9AC 001FC8EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FF9B0 001FC8F0  7C 08 02 A6 */	mflr r0
/* 801FF9B4 001FC8F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FF9B8 001FC8F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FF9BC 001FC8FC  7C 7F 1B 78 */	mr r31, r3
/* 801FF9C0 001FC900  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801FF9C4 001FC904  28 00 00 00 */	cmplwi r0, 0
/* 801FF9C8 001FC908  40 82 00 24 */	bne .L_801FF9EC
/* 801FF9CC 001FC90C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FF9D0 001FC910  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FF9D4 001FC914  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF9D8 001FC918  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF9DC 001FC91C  7D 89 03 A6 */	mtctr r12
/* 801FF9E0 001FC920  4E 80 04 21 */	bctrl 
/* 801FF9E4 001FC924  90 7F 00 04 */	stw r3, 4(r31)
/* 801FF9E8 001FC928  48 00 00 94 */	b .L_801FFA7C
.L_801FF9EC:
/* 801FF9EC 001FC92C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FF9F0 001FC930  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FF9F4 001FC934  81 83 00 00 */	lwz r12, 0(r3)
/* 801FF9F8 001FC938  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FF9FC 001FC93C  7D 89 03 A6 */	mtctr r12
/* 801FFA00 001FC940  4E 80 04 21 */	bctrl 
/* 801FFA04 001FC944  90 7F 00 04 */	stw r3, 4(r31)
/* 801FFA08 001FC948  48 00 00 58 */	b .L_801FFA60
.L_801FFA0C:
/* 801FFA0C 001FC94C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FFA10 001FC950  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FFA14 001FC954  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFA18 001FC958  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FFA1C 001FC95C  7D 89 03 A6 */	mtctr r12
/* 801FFA20 001FC960  4E 80 04 21 */	bctrl 
/* 801FFA24 001FC964  7C 64 1B 78 */	mr r4, r3
/* 801FFA28 001FC968  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801FFA2C 001FC96C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFA30 001FC970  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FFA34 001FC974  7D 89 03 A6 */	mtctr r12
/* 801FFA38 001FC978  4E 80 04 21 */	bctrl 
/* 801FFA3C 001FC97C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FFA40 001FC980  40 82 00 3C */	bne .L_801FFA7C
/* 801FFA44 001FC984  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FFA48 001FC988  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FFA4C 001FC98C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFA50 001FC990  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FFA54 001FC994  7D 89 03 A6 */	mtctr r12
/* 801FFA58 001FC998  4E 80 04 21 */	bctrl 
/* 801FFA5C 001FC99C  90 7F 00 04 */	stw r3, 4(r31)
.L_801FFA60:
/* 801FFA60 001FC9A0  7F E3 FB 78 */	mr r3, r31
/* 801FFA64 001FC9A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801FFA68 001FC9A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FFA6C 001FC9AC  7D 89 03 A6 */	mtctr r12
/* 801FFA70 001FC9B0  4E 80 04 21 */	bctrl 
/* 801FFA74 001FC9B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FFA78 001FC9B8  41 82 FF 94 */	beq .L_801FFA0C
.L_801FFA7C:
/* 801FFA7C 001FC9BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FFA80 001FC9C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FFA84 001FC9C4  7C 08 03 A6 */	mtlr r0
/* 801FFA88 001FC9C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801FFA8C 001FC9CC  4E 80 00 20 */	blr 

.global "first__37Iterator<Q34Game11PelletFruit6Object>Fv"
"first__37Iterator<Q34Game11PelletFruit6Object>Fv":
/* 801FFA90 001FC9D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FFA94 001FC9D4  7C 08 02 A6 */	mflr r0
/* 801FFA98 001FC9D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FFA9C 001FC9DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FFAA0 001FC9E0  7C 7F 1B 78 */	mr r31, r3
/* 801FFAA4 001FC9E4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801FFAA8 001FC9E8  28 00 00 00 */	cmplwi r0, 0
/* 801FFAAC 001FC9EC  40 82 00 20 */	bne .L_801FFACC
/* 801FFAB0 001FC9F0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FFAB4 001FC9F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFAB8 001FC9F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FFABC 001FC9FC  7D 89 03 A6 */	mtctr r12
/* 801FFAC0 001FCA00  4E 80 04 21 */	bctrl 
/* 801FFAC4 001FCA04  90 7F 00 04 */	stw r3, 4(r31)
/* 801FFAC8 001FCA08  48 00 00 90 */	b .L_801FFB58
.L_801FFACC:
/* 801FFACC 001FCA0C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FFAD0 001FCA10  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFAD4 001FCA14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FFAD8 001FCA18  7D 89 03 A6 */	mtctr r12
/* 801FFADC 001FCA1C  4E 80 04 21 */	bctrl 
/* 801FFAE0 001FCA20  90 7F 00 04 */	stw r3, 4(r31)
/* 801FFAE4 001FCA24  48 00 00 58 */	b .L_801FFB3C
.L_801FFAE8:
/* 801FFAE8 001FCA28  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FFAEC 001FCA2C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FFAF0 001FCA30  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFAF4 001FCA34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FFAF8 001FCA38  7D 89 03 A6 */	mtctr r12
/* 801FFAFC 001FCA3C  4E 80 04 21 */	bctrl 
/* 801FFB00 001FCA40  7C 64 1B 78 */	mr r4, r3
/* 801FFB04 001FCA44  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801FFB08 001FCA48  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFB0C 001FCA4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FFB10 001FCA50  7D 89 03 A6 */	mtctr r12
/* 801FFB14 001FCA54  4E 80 04 21 */	bctrl 
/* 801FFB18 001FCA58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FFB1C 001FCA5C  40 82 00 3C */	bne .L_801FFB58
/* 801FFB20 001FCA60  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FFB24 001FCA64  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FFB28 001FCA68  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFB2C 001FCA6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FFB30 001FCA70  7D 89 03 A6 */	mtctr r12
/* 801FFB34 001FCA74  4E 80 04 21 */	bctrl 
/* 801FFB38 001FCA78  90 7F 00 04 */	stw r3, 4(r31)
.L_801FFB3C:
/* 801FFB3C 001FCA7C  7F E3 FB 78 */	mr r3, r31
/* 801FFB40 001FCA80  81 9F 00 00 */	lwz r12, 0(r31)
/* 801FFB44 001FCA84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FFB48 001FCA88  7D 89 03 A6 */	mtctr r12
/* 801FFB4C 001FCA8C  4E 80 04 21 */	bctrl 
/* 801FFB50 001FCA90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FFB54 001FCA94  41 82 FF 94 */	beq .L_801FFAE8
.L_801FFB58:
/* 801FFB58 001FCA98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FFB5C 001FCA9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FFB60 001FCAA0  7C 08 03 A6 */	mtlr r0
/* 801FFB64 001FCAA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801FFB68 001FCAA8  4E 80 00 20 */	blr 

.global "onAlloc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"onAlloc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFB6C 001FCAAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FFB70 001FCAB0  7C 08 02 A6 */	mflr r0
/* 801FFB74 001FCAB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FFB78 001FCAB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FFB7C 001FCABC  3B E0 00 00 */	li r31, 0
/* 801FFB80 001FCAC0  93 C1 00 08 */	stw r30, 8(r1)
/* 801FFB84 001FCAC4  7C 7E 1B 78 */	mr r30, r3
/* 801FFB88 001FCAC8  48 00 00 24 */	b .L_801FFBAC
.L_801FFB8C:
/* 801FFB8C 001FCACC  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FFB90 001FCAD0  7F E4 FB 78 */	mr r4, r31
/* 801FFB94 001FCAD4  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 801FFB98 001FCAD8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801FFB9C 001FCADC  7D 89 03 A6 */	mtctr r12
/* 801FFBA0 001FCAE0  4E 80 04 21 */	bctrl 
/* 801FFBA4 001FCAE4  93 E3 04 40 */	stw r31, 0x440(r3)
/* 801FFBA8 001FCAE8  3B FF 00 01 */	addi r31, r31, 1
.L_801FFBAC:
/* 801FFBAC 001FCAEC  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 801FFBB0 001FCAF0  7C 1F 00 00 */	cmpw r31, r0
/* 801FFBB4 001FCAF4  41 80 FF D8 */	blt .L_801FFB8C
/* 801FFBB8 001FCAF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FFBBC 001FCAFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FFBC0 001FCB00  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FFBC4 001FCB04  7C 08 03 A6 */	mtlr r0
/* 801FFBC8 001FCB08  38 21 00 10 */	addi r1, r1, 0x10
/* 801FFBCC 001FCB0C  4E 80 00 20 */	blr 

.global "alloc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
"alloc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FFBD0 001FCB10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FFBD4 001FCB14  7C 08 02 A6 */	mflr r0
/* 801FFBD8 001FCB18  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FFBDC 001FCB1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FFBE0 001FCB20  7C 9F 23 78 */	mr r31, r4
/* 801FFBE4 001FCB24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FFBE8 001FCB28  7C 7E 1B 78 */	mr r30, r3
/* 801FFBEC 001FCB2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FFBF0 001FCB30  7F FD FB 78 */	mr r29, r31
/* 801FFBF4 001FCB34  1C 7D 04 5C */	mulli r3, r29, 0x45c
/* 801FFBF8 001FCB38  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FFBFC 001FCB3C  38 63 00 10 */	addi r3, r3, 0x10
/* 801FFC00 001FCB40  4B E2 43 AD */	bl __nwa__FUl
/* 801FFC04 001FCB44  3C 80 80 20 */	lis r4, __ct__Q34Game11PelletFruit6ObjectFv@ha
/* 801FFC08 001FCB48  7F A7 EB 78 */	mr r7, r29
/* 801FFC0C 001FCB4C  38 84 FD 58 */	addi r4, r4, __ct__Q34Game11PelletFruit6ObjectFv@l
/* 801FFC10 001FCB50  38 A0 00 00 */	li r5, 0
/* 801FFC14 001FCB54  38 C0 04 5C */	li r6, 0x45c
/* 801FFC18 001FCB58  4B EC 1D D9 */	bl __construct_new_array
/* 801FFC1C 001FCB5C  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801FFC20 001FCB60  38 00 00 00 */	li r0, 0
/* 801FFC24 001FCB64  7F A3 EB 78 */	mr r3, r29
/* 801FFC28 001FCB68  93 FE 00 24 */	stw r31, 0x24(r30)
/* 801FFC2C 001FCB6C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801FFC30 001FCB70  4B E2 43 7D */	bl __nwa__FUl
/* 801FFC34 001FCB74  2C 1F 00 00 */	cmpwi r31, 0
/* 801FFC38 001FCB78  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 801FFC3C 001FCB7C  39 60 00 00 */	li r11, 0
/* 801FFC40 001FCB80  40 81 00 B0 */	ble .L_801FFCF0
/* 801FFC44 001FCB84  2C 1F 00 08 */	cmpwi r31, 8
/* 801FFC48 001FCB88  38 7F FF F8 */	addi r3, r31, -8
/* 801FFC4C 001FCB8C  40 81 00 80 */	ble .L_801FFCCC
/* 801FFC50 001FCB90  38 03 00 07 */	addi r0, r3, 7
/* 801FFC54 001FCB94  54 00 E8 FE */	srwi r0, r0, 3
/* 801FFC58 001FCB98  7C 09 03 A6 */	mtctr r0
/* 801FFC5C 001FCB9C  2C 03 00 00 */	cmpwi r3, 0
/* 801FFC60 001FCBA0  40 81 00 6C */	ble .L_801FFCCC
.L_801FFC64:
/* 801FFC64 001FCBA4  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FFC68 001FCBA8  39 40 00 01 */	li r10, 1
/* 801FFC6C 001FCBAC  39 0B 00 01 */	addi r8, r11, 1
/* 801FFC70 001FCBB0  38 EB 00 02 */	addi r7, r11, 2
/* 801FFC74 001FCBB4  7D 43 59 AE */	stbx r10, r3, r11
/* 801FFC78 001FCBB8  38 CB 00 03 */	addi r6, r11, 3
/* 801FFC7C 001FCBBC  38 AB 00 04 */	addi r5, r11, 4
/* 801FFC80 001FCBC0  38 8B 00 05 */	addi r4, r11, 5
/* 801FFC84 001FCBC4  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 801FFC88 001FCBC8  38 6B 00 06 */	addi r3, r11, 6
/* 801FFC8C 001FCBCC  38 0B 00 07 */	addi r0, r11, 7
/* 801FFC90 001FCBD0  39 6B 00 08 */	addi r11, r11, 8
/* 801FFC94 001FCBD4  7D 49 41 AE */	stbx r10, r9, r8
/* 801FFC98 001FCBD8  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 801FFC9C 001FCBDC  7D 48 39 AE */	stbx r10, r8, r7
/* 801FFCA0 001FCBE0  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 801FFCA4 001FCBE4  7D 47 31 AE */	stbx r10, r7, r6
/* 801FFCA8 001FCBE8  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 801FFCAC 001FCBEC  7D 46 29 AE */	stbx r10, r6, r5
/* 801FFCB0 001FCBF0  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 801FFCB4 001FCBF4  7D 45 21 AE */	stbx r10, r5, r4
/* 801FFCB8 001FCBF8  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 801FFCBC 001FCBFC  7D 44 19 AE */	stbx r10, r4, r3
/* 801FFCC0 001FCC00  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FFCC4 001FCC04  7D 43 01 AE */	stbx r10, r3, r0
/* 801FFCC8 001FCC08  42 00 FF 9C */	bdnz .L_801FFC64
.L_801FFCCC:
/* 801FFCCC 001FCC0C  7C 0B F8 50 */	subf r0, r11, r31
/* 801FFCD0 001FCC10  38 80 00 01 */	li r4, 1
/* 801FFCD4 001FCC14  7C 09 03 A6 */	mtctr r0
/* 801FFCD8 001FCC18  7C 0B F8 00 */	cmpw r11, r31
/* 801FFCDC 001FCC1C  40 80 00 14 */	bge .L_801FFCF0
.L_801FFCE0:
/* 801FFCE0 001FCC20  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FFCE4 001FCC24  7C 83 59 AE */	stbx r4, r3, r11
/* 801FFCE8 001FCC28  39 6B 00 01 */	addi r11, r11, 1
/* 801FFCEC 001FCC2C  42 00 FF F4 */	bdnz .L_801FFCE0
.L_801FFCF0:
/* 801FFCF0 001FCC30  7F C3 F3 78 */	mr r3, r30
/* 801FFCF4 001FCC34  81 9E 00 00 */	lwz r12, 0(r30)
/* 801FFCF8 001FCC38  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801FFCFC 001FCC3C  7D 89 03 A6 */	mtctr r12
/* 801FFD00 001FCC40  4E 80 04 21 */	bctrl 
/* 801FFD04 001FCC44  3B 80 00 00 */	li r28, 0
/* 801FFD08 001FCC48  3B A0 00 00 */	li r29, 0
/* 801FFD0C 001FCC4C  48 00 00 24 */	b .L_801FFD30
.L_801FFD10:
/* 801FFD10 001FCC50  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 801FFD14 001FCC54  7C 60 EA 14 */	add r3, r0, r29
/* 801FFD18 001FCC58  81 83 00 00 */	lwz r12, 0(r3)
/* 801FFD1C 001FCC5C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801FFD20 001FCC60  7D 89 03 A6 */	mtctr r12
/* 801FFD24 001FCC64  4E 80 04 21 */	bctrl 
/* 801FFD28 001FCC68  3B BD 04 5C */	addi r29, r29, 0x45c
/* 801FFD2C 001FCC6C  3B 9C 00 01 */	addi r28, r28, 1
.L_801FFD30:
/* 801FFD30 001FCC70  7C 1C F8 00 */	cmpw r28, r31
/* 801FFD34 001FCC74  41 80 FF DC */	blt .L_801FFD10
/* 801FFD38 001FCC78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FFD3C 001FCC7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FFD40 001FCC80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FFD44 001FCC84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FFD48 001FCC88  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FFD4C 001FCC8C  7C 08 03 A6 */	mtlr r0
/* 801FFD50 001FCC90  38 21 00 20 */	addi r1, r1, 0x20
/* 801FFD54 001FCC94  4E 80 00 20 */	blr 

.global __ct__Q34Game11PelletFruit6ObjectFv
__ct__Q34Game11PelletFruit6ObjectFv:
/* 801FFD58 001FCC98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FFD5C 001FCC9C  7C 08 02 A6 */	mflr r0
/* 801FFD60 001FCCA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FFD64 001FCCA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FFD68 001FCCA8  7C 7F 1B 78 */	mr r31, r3
/* 801FFD6C 001FCCAC  4B F6 69 15 */	bl __ct__Q24Game6PelletFv
/* 801FFD70 001FCCB0  3C 80 80 4C */	lis r4, __vt__Q34Game11PelletFruit6Object@ha
/* 801FFD74 001FCCB4  7F E3 FB 78 */	mr r3, r31
/* 801FFD78 001FCCB8  38 A4 E2 A8 */	addi r5, r4, __vt__Q34Game11PelletFruit6Object@l
/* 801FFD7C 001FCCBC  90 BF 00 00 */	stw r5, 0(r31)
/* 801FFD80 001FCCC0  38 85 01 B4 */	addi r4, r5, 0x1b4
/* 801FFD84 001FCCC4  38 05 01 C0 */	addi r0, r5, 0x1c0
/* 801FFD88 001FCCC8  90 9F 03 14 */	stw r4, 0x314(r31)
/* 801FFD8C 001FCCCC  90 1F 03 18 */	stw r0, 0x318(r31)
/* 801FFD90 001FCCD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FFD94 001FCCD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FFD98 001FCCD8  7C 08 03 A6 */	mtlr r0
/* 801FFD9C 001FCCDC  38 21 00 10 */	addi r1, r1, 0x10
/* 801FFDA0 001FCCE0  4E 80 00 20 */	blr 

.global __sinit_pelletFruit_cpp
__sinit_pelletFruit_cpp:
/* 801FFDA4 001FCCE4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801FFDA8 001FCCE8  38 00 FF FF */	li r0, -1
/* 801FFDAC 001FCCEC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801FFDB0 001FCCF0  3C 60 80 4C */	lis r3, lbl_804BDFD0@ha
/* 801FFDB4 001FCCF4  90 0D 95 08 */	stw r0, lbl_80515B88@sda21(r13)
/* 801FFDB8 001FCCF8  D4 03 DF D0 */	stfsu f0, lbl_804BDFD0@l(r3)
/* 801FFDBC 001FCCFC  D0 0D 95 0C */	stfs f0, lbl_80515B8C@sda21(r13)
/* 801FFDC0 001FCD00  D0 03 00 04 */	stfs f0, 4(r3)
/* 801FFDC4 001FCD04  D0 03 00 08 */	stfs f0, 8(r3)
/* 801FFDC8 001FCD08  4E 80 00 20 */	blr 

.global "@84@__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"@84@__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFDCC 001FCD0C  38 63 FF AC */	addi r3, r3, -84
/* 801FFDD0 001FCD10  4B FF DF A4 */	b "__dt__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFDD4 001FCD14  38 63 FF E4 */	addi r3, r3, -28
/* 801FFDD8 001FCD18  4B F7 04 10 */	b "resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
"@28@doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics":
/* 801FFDDC 001FCD1C  38 63 FF E4 */	addi r3, r3, -28
/* 801FFDE0 001FCD20  4B FF EB C0 */	b "doDirectDraw__42MonoObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"

.global "@28@doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff"
"@28@doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff":
/* 801FFDE4 001FCD24  38 63 FF E4 */	addi r3, r3, -28
/* 801FFDE8 001FCD28  4B FF EB 28 */	b "doSimulation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Ff"

.global "@28@doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFDEC 001FCD2C  38 63 FF E4 */	addi r3, r3, -28
/* 801FFDF0 001FCD30  4B FF EA A0 */	b "doViewCalc__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"
"@28@doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FFDF4 001FCD34  38 63 FF E4 */	addi r3, r3, -28
/* 801FFDF8 001FCD38  4B FF EA 08 */	b "doSetView__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fi"

.global "@28@doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFDFC 001FCD3C  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE00 001FCD40  4B FF E9 80 */	b "doEntry__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFE04 001FCD44  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE08 001FCD48  4B FF E8 F8 */	b "doAnimation__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"
"@28@doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics":
/* 801FFE0C 001FCD4C  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE10 001FCD50  4B FF EC DC */	b "doDirectDraw__38ObjectMgr<Q34Game11PelletFruit6Object>FR8Graphics"

.global "@28@doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff"
"@28@doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff":
/* 801FFE14 001FCD54  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE18 001FCD58  4B FF EF 14 */	b "doSimulation__38ObjectMgr<Q34Game11PelletFruit6Object>Ff"

.global "@28@doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFE1C 001FCD5C  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE20 001FCD60  4B FF F1 00 */	b "doViewCalc__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi"
"@28@doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi":
/* 801FFE24 001FCD64  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE28 001FCD68  4B FF F2 DC */	b "doSetView__38ObjectMgr<Q34Game11PelletFruit6Object>Fi"

.global "@28@doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFE2C 001FCD6C  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE30 001FCD70  4B FF F4 C8 */	b "doEntry__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@28@doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"
"@28@doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFE34 001FCD74  38 63 FF E4 */	addi r3, r3, -28
/* 801FFE38 001FCD78  4B FF F6 A4 */	b "doAnimation__38ObjectMgr<Q34Game11PelletFruit6Object>Fv"

.global "@84@getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"@84@getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFE3C 001FCD7C  38 63 FF AC */	addi r3, r3, -84
/* 801FFE40 001FCD80  4B FF F9 A0 */	b "getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"

.global "@84@getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
"@84@getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv":
/* 801FFE44 001FCD84  38 63 FF AC */	addi r3, r3, -84
/* 801FFE48 001FCD88  4B FF E7 48 */	b "getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"

.global "@84@getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
"@84@getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FFE4C 001FCD8C  38 63 FF AC */	addi r3, r3, -84
/* 801FFE50 001FCD90  4B FF E7 14 */	b "getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"

.global "@84@get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
"@84@get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv":
/* 801FFE54 001FCD94  38 63 FF AC */	addi r3, r3, -84
/* 801FFE58 001FCD98  4B FF F9 B4 */	b "get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"

.global "@84@__dt__Q34Game11PelletFruit3MgrFv"
"@84@__dt__Q34Game11PelletFruit3MgrFv":
/* 801FFE5C 001FCD9C  38 63 FF AC */	addi r3, r3, -84
/* 801FFE60 001FCDA0  4B FF E2 B8 */	b __dt__Q34Game11PelletFruit3MgrFv
