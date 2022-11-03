.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80481AE0
lbl_80481AE0:
	.4byte 0x4E756D62
	.4byte 0x65725065
	.4byte 0x6C6C6574
	.4byte 0x00000000
.global lbl_80481AF0
lbl_80481AF0:
	.4byte 0x70656C6C
	.4byte 0x65745F74
	.4byte 0x65787473
	.4byte 0x2E737A73
	.4byte 0x00000000
.global lbl_80481B04
lbl_80481B04:
	.4byte 0x70656C6C
	.4byte 0x65744E75
	.4byte 0x6D626572
	.4byte 0x2E637070
	.4byte 0x00000000
.global lbl_80481B18
lbl_80481B18:
	.4byte 0x4E756D62
	.4byte 0x65725065
	.4byte 0x6C6C6574
	.4byte 0x2073697A
	.4byte 0x65202564
	.4byte 0x20657272
	.4byte 0x6F720A00
.global lbl_80481B34
lbl_80481B34:
	.4byte 0x41726750
	.4byte 0x656C5479
	.4byte 0x70650000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804BD570
lbl_804BD570:
	.4byte .L_801F99D0
	.4byte .L_801F99A0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99AC
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99B8
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99D0
	.4byte .L_801F99C4
.global __vt__Q34Game12PelletNumber3Mgr
__vt__Q34Game12PelletNumber3Mgr:
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doEntry__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSetView__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "doViewCalc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSimulation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Ff"
	.4byte "doDirectDraw__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "birth__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "kill__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte setupResources__Q34Game12PelletNumber3MgrFv
	.4byte "birthFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte onCreateModel__Q34Game12PelletNumber3MgrFPQ28SysShape5Model
	.4byte getMgrName__Q34Game12PelletNumber3MgrFv
	.4byte getMgrID__Q34Game12PelletNumber3MgrFv
	.4byte "setRevival__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q34Game12PelletNumber3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q34Game12PelletNumber3MgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q34Game12PelletNumber3MgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q34Game12PelletNumber3MgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q34Game12PelletNumber3MgrFv
	.4byte "getObjectPtr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q34Game12PelletNumber3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__39Container<Q34Game12PelletNumber6Object>FPv"
	.4byte "@84@getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "@84@getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@84@getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@84@get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getAt__39Container<Q34Game12PelletNumber6Object>Fi"
	.4byte "getTo__39Container<Q34Game12PelletNumber6Object>Fv"
	.4byte "get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte __dt__Q34Game12PelletNumber3MgrFv
.global "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"
"__vt__39ObjectMgr<Q34Game12PelletNumber6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__39Container<Q34Game12PelletNumber6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__39Container<Q34Game12PelletNumber6Object>Fi"
	.4byte "getTo__39Container<Q34Game12PelletNumber6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@28@doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@28@doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "@28@doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@28@doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff"
	.4byte "@28@doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff"
	.4byte "doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
.global "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"
"__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__39Container<Q34Game12PelletNumber6Object>FPv"
	.4byte "getNext__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getStart__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "getEnd__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "get__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getAt__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "getTo__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@28@doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@28@doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "@28@doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@28@doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff"
	.4byte "@28@doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff"
	.4byte "doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
	.4byte "birth__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "clearMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "onAlloc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
.global "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"
"__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>":
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doEntry__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSetView__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "doViewCalc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "doSimulation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Ff"
	.4byte "doDirectDraw__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "birth__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "kill__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte 0
	.4byte "birthFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
	.4byte "setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte "onCreateModel__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ28SysShape5Model"
	.4byte 0
	.4byte 0
	.4byte "setRevival__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
	.4byte "getObjectPtr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__39Container<Q34Game12PelletNumber6Object>FPv"
	.4byte "@84@getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "@84@getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@84@getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
	.4byte "@84@get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "getAt__39Container<Q34Game12PelletNumber6Object>Fi"
	.4byte "getTo__39Container<Q34Game12PelletNumber6Object>Fv"
	.4byte "get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
	.4byte "__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
.global "__vt__39Container<Q34Game12PelletNumber6Object>"
"__vt__39Container<Q34Game12PelletNumber6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__39Container<Q34Game12PelletNumber6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__39Container<Q34Game12PelletNumber6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__39Container<Q34Game12PelletNumber6Object>Fi"
	.4byte "getTo__39Container<Q34Game12PelletNumber6Object>Fv"
.global __vt__Q23efx10ArgPelType
__vt__Q23efx10ArgPelType:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx10ArgPelTypeFv
.global __vt__Q34Game12PelletNumber6Object
__vt__Q34Game12PelletNumber6Object:
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
	.4byte constructor__Q34Game12PelletNumber6ObjectFv
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
	.4byte do_onInit__Q34Game12PelletNumber6ObjectFPQ24Game15CreatureInitArg
	.4byte onCreateShape__Q24Game6PelletFv
	.4byte theEntry__Q24Game6PelletFv
	.4byte onBounce__Q24Game6PelletFv
	.4byte shadowOn__Q24Game6PelletFv
	.4byte shadowOff__Q24Game6PelletFv
	.4byte isPickable__Q24Game6PelletFv
	.4byte getBedamaColor__Q24Game6PelletFv
	.4byte do_update__Q24Game6PelletFv
	.4byte onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
	.4byte getKind__Q34Game12PelletNumber6ObjectFv
	.4byte changeMaterial__Q34Game12PelletNumber6ObjectFv
	.4byte "createKiraEffect__Q34Game12PelletNumber6ObjectFR10Vector3<f>"
	.4byte getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
	.4byte isCarried__Q24Game6PelletFv
	.4byte isPicked__Q24Game6PelletFv
	.4byte sound_otakaraEventStart__Q24Game6PelletFv
	.4byte sound_otakaraEventRestart__Q24Game6PelletFv
	.4byte sound_otakaraEventStop__Q24Game6PelletFv
	.4byte sound_otakaraEventFinish__Q24Game6PelletFv
.global "__vt__38Iterator<Q34Game12PelletNumber6Object>"
"__vt__38Iterator<Q34Game12PelletNumber6Object>":
	.4byte 0
	.4byte 0
	.4byte "first__38Iterator<Q34Game12PelletNumber6Object>Fv"
	.4byte "next__38Iterator<Q34Game12PelletNumber6Object>Fv"
	.4byte "isDone__38Iterator<Q34Game12PelletNumber6Object>Fv"
	.4byte "__ml__38Iterator<Q34Game12PelletNumber6Object>Fv"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global mgr__Q24Game12PelletNumber
mgr__Q24Game12PelletNumber:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519CE0
lbl_80519CE0:
	.4byte 0x6270656C
	.4byte 0x31000000
.global lbl_80519CE8
lbl_80519CE8:
	.float 0.5
.global lbl_80519CEC
lbl_80519CEC:
	.4byte 0x6E756D62
	.4byte 0x65720000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global do_onInit__Q34Game12PelletNumber6ObjectFPQ24Game15CreatureInitArg
do_onInit__Q34Game12PelletNumber6ObjectFPQ24Game15CreatureInitArg:
/* 801F90D4 001F6014  4E 80 00 20 */	blr 

.global constructor__Q34Game12PelletNumber6ObjectFv
constructor__Q34Game12PelletNumber6ObjectFv:
/* 801F90D8 001F6018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F90DC 001F601C  7C 08 02 A6 */	mflr r0
/* 801F90E0 001F6020  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F90E4 001F6024  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F90E8 001F6028  7C 7F 1B 78 */	mr r31, r3
/* 801F90EC 001F602C  4B F6 D7 45 */	bl constructor__Q24Game6PelletFv
/* 801F90F0 001F6030  38 60 00 14 */	li r3, 0x14
/* 801F90F4 001F6034  4B E2 AD B1 */	bl __nw__FUl
/* 801F90F8 001F6038  28 03 00 00 */	cmplwi r3, 0
/* 801F90FC 001F603C  41 82 00 78 */	beq .L_801F9174
/* 801F9100 001F6040  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801F9104 001F6044  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 801F9108 001F6048  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801F910C 001F604C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801F9110 001F6050  90 03 00 00 */	stw r0, 0(r3)
/* 801F9114 001F6054  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 801F9118 001F6058  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801F911C 001F605C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 801F9120 001F6060  90 03 00 04 */	stw r0, 4(r3)
/* 801F9124 001F6064  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 801F9128 001F6068  3C 80 80 4E */	lis r4, __vt__Q23efx14TPelkira_ver01@ha
/* 801F912C 001F606C  38 05 00 14 */	addi r0, r5, 0x14
/* 801F9130 001F6070  90 A3 00 00 */	stw r5, 0(r3)
/* 801F9134 001F6074  38 84 70 C0 */	addi r4, r4, __vt__Q23efx14TPelkira_ver01@l
/* 801F9138 001F6078  39 20 00 00 */	li r9, 0
/* 801F913C 001F607C  39 00 02 B2 */	li r8, 0x2b2
/* 801F9140 001F6080  90 03 00 04 */	stw r0, 4(r3)
/* 801F9144 001F6084  38 C7 00 14 */	addi r6, r7, 0x14
/* 801F9148 001F6088  38 BF 03 AC */	addi r5, r31, 0x3ac
/* 801F914C 001F608C  38 04 00 14 */	addi r0, r4, 0x14
/* 801F9150 001F6090  91 23 00 08 */	stw r9, 8(r3)
/* 801F9154 001F6094  B1 03 00 0C */	sth r8, 0xc(r3)
/* 801F9158 001F6098  99 23 00 0E */	stb r9, 0xe(r3)
/* 801F915C 001F609C  90 E3 00 00 */	stw r7, 0(r3)
/* 801F9160 001F60A0  90 C3 00 04 */	stw r6, 4(r3)
/* 801F9164 001F60A4  90 A3 00 10 */	stw r5, 0x10(r3)
/* 801F9168 001F60A8  B1 03 00 0C */	sth r8, 0xc(r3)
/* 801F916C 001F60AC  90 83 00 00 */	stw r4, 0(r3)
/* 801F9170 001F60B0  90 03 00 04 */	stw r0, 4(r3)
.L_801F9174:
/* 801F9174 001F60B4  90 7F 04 58 */	stw r3, 0x458(r31)
/* 801F9178 001F60B8  7F E4 FB 78 */	mr r4, r31
/* 801F917C 001F60BC  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801F9180 001F60C0  48 04 89 A1 */	bl createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 801F9184 001F60C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9188 001F60C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F918C 001F60CC  7C 08 03 A6 */	mtlr r0
/* 801F9190 001F60D0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9194 001F60D4  4E 80 00 20 */	blr 

.global "createKiraEffect__Q34Game12PelletNumber6ObjectFR10Vector3<f>"
"createKiraEffect__Q34Game12PelletNumber6ObjectFR10Vector3<f>":
/* 801F9198 001F60D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F919C 001F60DC  7C 08 02 A6 */	mflr r0
/* 801F91A0 001F60E0  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801F91A4 001F60E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F91A8 001F60E8  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 801F91AC 001F60EC  3C A0 80 4C */	lis r5, __vt__Q23efx10ArgPelType@ha
/* 801F91B0 001F60F0  A0 C3 04 3C */	lhz r6, 0x43c(r3)
/* 801F91B4 001F60F4  90 01 00 08 */	stw r0, 8(r1)
/* 801F91B8 001F60F8  38 05 D8 90 */	addi r0, r5, __vt__Q23efx10ArgPelType@l
/* 801F91BC 001F60FC  C0 04 00 00 */	lfs f0, 0(r4)
/* 801F91C0 001F6100  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801F91C4 001F6104  C0 04 00 04 */	lfs f0, 4(r4)
/* 801F91C8 001F6108  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801F91CC 001F610C  C0 04 00 08 */	lfs f0, 8(r4)
/* 801F91D0 001F6110  38 81 00 08 */	addi r4, r1, 8
/* 801F91D4 001F6114  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801F91D8 001F6118  90 01 00 08 */	stw r0, 8(r1)
/* 801F91DC 001F611C  90 C1 00 18 */	stw r6, 0x18(r1)
/* 801F91E0 001F6120  80 63 04 58 */	lwz r3, 0x458(r3)
/* 801F91E4 001F6124  81 83 00 00 */	lwz r12, 0(r3)
/* 801F91E8 001F6128  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F91EC 001F612C  7D 89 03 A6 */	mtctr r12
/* 801F91F0 001F6130  4E 80 04 21 */	bctrl 
/* 801F91F4 001F6134  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F91F8 001F6138  7C 08 03 A6 */	mtlr r0
/* 801F91FC 001F613C  38 21 00 20 */	addi r1, r1, 0x20
/* 801F9200 001F6140  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game12PelletNumber6ObjectFv
changeMaterial__Q34Game12PelletNumber6ObjectFv:
/* 801F9204 001F6144  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801F9208 001F6148  7C 08 02 A6 */	mflr r0
/* 801F920C 001F614C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801F9210 001F6150  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801F9214 001F6154  7C 7B 1B 78 */	mr r27, r3
/* 801F9218 001F6158  A0 03 04 3E */	lhz r0, 0x43e(r3)
/* 801F921C 001F615C  2C 00 00 01 */	cmpwi r0, 1
/* 801F9220 001F6160  41 82 00 20 */	beq .L_801F9240
/* 801F9224 001F6164  40 80 00 10 */	bge .L_801F9234
/* 801F9228 001F6168  2C 00 00 00 */	cmpwi r0, 0
/* 801F922C 001F616C  40 80 00 3C */	bge .L_801F9268
/* 801F9230 001F6170  48 00 00 48 */	b .L_801F9278
.L_801F9234:
/* 801F9234 001F6174  2C 00 00 03 */	cmpwi r0, 3
/* 801F9238 001F6178  40 80 00 40 */	bge .L_801F9278
/* 801F923C 001F617C  48 00 00 18 */	b .L_801F9254
.L_801F9240:
/* 801F9240 001F6180  3B E0 00 FB */	li r31, 0xfb
/* 801F9244 001F6184  3B C0 00 11 */	li r30, 0x11
/* 801F9248 001F6188  3B A0 00 00 */	li r29, 0
/* 801F924C 001F618C  3B 80 00 FF */	li r28, 0xff
/* 801F9250 001F6190  48 00 00 28 */	b .L_801F9278
.L_801F9254:
/* 801F9254 001F6194  3B E0 00 FF */	li r31, 0xff
/* 801F9258 001F6198  3B C0 00 DC */	li r30, 0xdc
/* 801F925C 001F619C  7F FC FB 78 */	mr r28, r31
/* 801F9260 001F61A0  3B A0 00 34 */	li r29, 0x34
/* 801F9264 001F61A4  48 00 00 14 */	b .L_801F9278
.L_801F9268:
/* 801F9268 001F61A8  3B A0 00 FF */	li r29, 0xff
/* 801F926C 001F61AC  3B E0 00 00 */	li r31, 0
/* 801F9270 001F61B0  7F BC EB 78 */	mr r28, r29
/* 801F9274 001F61B4  3B C0 00 33 */	li r30, 0x33
.L_801F9278:
/* 801F9278 001F61B8  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 801F927C 001F61BC  38 82 B9 80 */	addi r4, r2, lbl_80519CE0@sda21
/* 801F9280 001F61C0  80 63 00 08 */	lwz r3, 8(r3)
/* 801F9284 001F61C4  80 63 00 04 */	lwz r3, 4(r3)
/* 801F9288 001F61C8  80 63 00 64 */	lwz r3, 0x64(r3)
/* 801F928C 001F61CC  4B E3 5A F9 */	bl getIndex__10JUTNameTabCFPCc
/* 801F9290 001F61D0  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 801F9294 001F61D4  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 801F9298 001F61D8  38 A1 00 08 */	addi r5, r1, 8
/* 801F929C 001F61DC  80 64 00 08 */	lwz r3, 8(r4)
/* 801F92A0 001F61E0  38 80 00 00 */	li r4, 0
/* 801F92A4 001F61E4  80 63 00 04 */	lwz r3, 4(r3)
/* 801F92A8 001F61E8  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801F92AC 001F61EC  7C 63 00 2E */	lwzx r3, r3, r0
/* 801F92B0 001F61F0  B3 E1 00 08 */	sth r31, 8(r1)
/* 801F92B4 001F61F4  B3 C1 00 0A */	sth r30, 0xa(r1)
/* 801F92B8 001F61F8  B3 A1 00 0C */	sth r29, 0xc(r1)
/* 801F92BC 001F61FC  B3 81 00 0E */	sth r28, 0xe(r1)
/* 801F92C0 001F6200  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 801F92C4 001F6204  81 83 00 00 */	lwz r12, 0(r3)
/* 801F92C8 001F6208  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801F92CC 001F620C  7D 89 03 A6 */	mtctr r12
/* 801F92D0 001F6210  4E 80 04 21 */	bctrl 
/* 801F92D4 001F6214  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 801F92D8 001F6218  80 63 00 08 */	lwz r3, 8(r3)
/* 801F92DC 001F621C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F92E0 001F6220  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F92E4 001F6224  7D 89 03 A6 */	mtctr r12
/* 801F92E8 001F6228  4E 80 04 21 */	bctrl 
/* 801F92EC 001F622C  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 801F92F0 001F6230  80 63 00 08 */	lwz r3, 8(r3)
/* 801F92F4 001F6234  4B E6 D9 79 */	bl diff__8J3DModelFv
/* 801F92F8 001F6238  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801F92FC 001F623C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801F9300 001F6240  7C 08 03 A6 */	mtlr r0
/* 801F9304 001F6244  38 21 00 30 */	addi r1, r1, 0x30
/* 801F9308 001F6248  4E 80 00 20 */	blr 

.global __ct__Q34Game12PelletNumber3MgrFv
__ct__Q34Game12PelletNumber3MgrFv:
/* 801F930C 001F624C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9310 001F6250  7C 08 02 A6 */	mflr r0
/* 801F9314 001F6254  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9318 001F6258  7C 80 07 35 */	extsh. r0, r4
/* 801F931C 001F625C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9320 001F6260  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9324 001F6264  7C 7E 1B 78 */	mr r30, r3
/* 801F9328 001F6268  41 82 00 0C */	beq .L_801F9334
/* 801F932C 001F626C  38 1E 00 A0 */	addi r0, r30, 0xa0
/* 801F9330 001F6270  90 1E 00 04 */	stw r0, 4(r30)
.L_801F9334:
/* 801F9334 001F6274  7F C3 F3 78 */	mr r3, r30
/* 801F9338 001F6278  38 80 00 00 */	li r4, 0
/* 801F933C 001F627C  38 A0 00 00 */	li r5, 0
/* 801F9340 001F6280  4B F7 26 81 */	bl __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind
/* 801F9344 001F6284  3B FE 00 54 */	addi r31, r30, 0x54
/* 801F9348 001F6288  7F E3 FB 78 */	mr r3, r31
/* 801F934C 001F628C  48 21 80 45 */	bl __ct__5CNodeFv
/* 801F9350 001F6290  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 801F9354 001F6294  3C 80 80 4C */	lis r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F9358 001F6298  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 801F935C 001F629C  3C 60 80 4C */	lis r3, "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9360 001F62A0  90 1F 00 00 */	stw r0, 0(r31)
/* 801F9364 001F62A4  38 04 D8 64 */	addi r0, r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F9368 001F62A8  38 83 D7 98 */	addi r4, r3, "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"@l
/* 801F936C 001F62AC  38 A0 00 00 */	li r5, 0
/* 801F9370 001F62B0  90 1F 00 00 */	stw r0, 0(r31)
/* 801F9374 001F62B4  38 04 00 98 */	addi r0, r4, 0x98
/* 801F9378 001F62B8  38 7E 00 70 */	addi r3, r30, 0x70
/* 801F937C 001F62BC  98 BF 00 18 */	stb r5, 0x18(r31)
/* 801F9380 001F62C0  90 9E 00 00 */	stw r4, 0(r30)
/* 801F9384 001F62C4  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F9388 001F62C8  48 00 1D C9 */	bl "__ct__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
/* 801F938C 001F62CC  3C 80 80 4C */	lis r4, __vt__Q34Game12PelletNumber3Mgr@ha
/* 801F9390 001F62D0  7F C3 F3 78 */	mr r3, r30
/* 801F9394 001F62D4  38 84 D5 C4 */	addi r4, r4, __vt__Q34Game12PelletNumber3Mgr@l
/* 801F9398 001F62D8  90 9E 00 00 */	stw r4, 0(r30)
/* 801F939C 001F62DC  38 04 00 98 */	addi r0, r4, 0x98
/* 801F93A0 001F62E0  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F93A4 001F62E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F93A8 001F62E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F93AC 001F62EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F93B0 001F62F0  7C 08 03 A6 */	mtlr r0
/* 801F93B4 001F62F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F93B8 001F62F8  4E 80 00 20 */	blr 

.global "__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F93BC 001F62FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F93C0 001F6300  7C 08 02 A6 */	mflr r0
/* 801F93C4 001F6304  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F93C8 001F6308  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F93CC 001F630C  7C 9F 23 78 */	mr r31, r4
/* 801F93D0 001F6310  93 C1 00 08 */	stw r30, 8(r1)
/* 801F93D4 001F6314  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F93D8 001F6318  41 82 01 64 */	beq .L_801F953C
/* 801F93DC 001F631C  3C 60 80 4C */	lis r3, "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F93E0 001F6320  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F93E4 001F6324  38 63 D7 98 */	addi r3, r3, "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"@l
/* 801F93E8 001F6328  90 7E 00 00 */	stw r3, 0(r30)
/* 801F93EC 001F632C  38 03 00 98 */	addi r0, r3, 0x98
/* 801F93F0 001F6330  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F93F4 001F6334  41 82 00 68 */	beq .L_801F945C
/* 801F93F8 001F6338  3C 60 80 4C */	lis r3, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F93FC 001F633C  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F9400 001F6340  38 63 D7 0C */	addi r3, r3, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9404 001F6344  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801F9408 001F6348  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F940C 001F634C  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801F9410 001F6350  41 82 00 4C */	beq .L_801F945C
/* 801F9414 001F6354  3C 60 80 4C */	lis r3, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9418 001F6358  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F941C 001F635C  38 63 D6 90 */	addi r3, r3, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9420 001F6360  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801F9424 001F6364  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F9428 001F6368  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801F942C 001F636C  41 82 00 30 */	beq .L_801F945C
/* 801F9430 001F6370  3C 60 80 4C */	lis r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F9434 001F6374  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F9438 001F6378  38 03 D8 64 */	addi r0, r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F943C 001F637C  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801F9440 001F6380  41 82 00 1C */	beq .L_801F945C
/* 801F9444 001F6384  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F9448 001F6388  38 7E 00 70 */	addi r3, r30, 0x70
/* 801F944C 001F638C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F9450 001F6390  38 80 00 00 */	li r4, 0
/* 801F9454 001F6394  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801F9458 001F6398  48 21 81 31 */	bl __dt__5CNodeFv
.L_801F945C:
/* 801F945C 001F639C  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801F9460 001F63A0  41 82 00 30 */	beq .L_801F9490
/* 801F9464 001F63A4  3C 60 80 4C */	lis r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F9468 001F63A8  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801F946C 001F63AC  38 03 D8 64 */	addi r0, r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F9470 001F63B0  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F9474 001F63B4  41 82 00 1C */	beq .L_801F9490
/* 801F9478 001F63B8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F947C 001F63BC  38 7E 00 54 */	addi r3, r30, 0x54
/* 801F9480 001F63C0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F9484 001F63C4  38 80 00 00 */	li r4, 0
/* 801F9488 001F63C8  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F948C 001F63CC  48 21 80 FD */	bl __dt__5CNodeFv
.L_801F9490:
/* 801F9490 001F63D0  28 1E 00 00 */	cmplwi r30, 0
/* 801F9494 001F63D4  41 82 00 98 */	beq .L_801F952C
/* 801F9498 001F63D8  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 801F949C 001F63DC  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F94A0 001F63E0  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 801F94A4 001F63E4  90 1E 00 00 */	stw r0, 0(r30)
/* 801F94A8 001F63E8  41 82 00 84 */	beq .L_801F952C
/* 801F94AC 001F63EC  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 801F94B0 001F63F0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F94B4 001F63F4  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 801F94B8 001F63F8  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801F94BC 001F63FC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F94C0 001F6400  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F94C4 001F6404  41 82 00 68 */	beq .L_801F952C
/* 801F94C8 001F6408  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 801F94CC 001F640C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F94D0 001F6410  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 801F94D4 001F6414  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801F94D8 001F6418  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F94DC 001F641C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F94E0 001F6420  41 82 00 4C */	beq .L_801F952C
/* 801F94E4 001F6424  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 801F94E8 001F6428  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F94EC 001F642C  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 801F94F0 001F6430  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801F94F4 001F6434  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F94F8 001F6438  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F94FC 001F643C  41 82 00 30 */	beq .L_801F952C
/* 801F9500 001F6440  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 801F9504 001F6444  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F9508 001F6448  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 801F950C 001F644C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801F9510 001F6450  41 82 00 1C */	beq .L_801F952C
/* 801F9514 001F6454  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F9518 001F6458  38 7E 00 18 */	addi r3, r30, 0x18
/* 801F951C 001F645C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F9520 001F6460  38 80 00 00 */	li r4, 0
/* 801F9524 001F6464  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801F9528 001F6468  48 21 80 61 */	bl __dt__5CNodeFv
.L_801F952C:
/* 801F952C 001F646C  7F E0 07 35 */	extsh. r0, r31
/* 801F9530 001F6470  40 81 00 0C */	ble .L_801F953C
/* 801F9534 001F6474  7F C3 F3 78 */	mr r3, r30
/* 801F9538 001F6478  4B E2 AB 7D */	bl __dl__FPv
.L_801F953C:
/* 801F953C 001F647C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9540 001F6480  7F C3 F3 78 */	mr r3, r30
/* 801F9544 001F6484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9548 001F6488  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F954C 001F648C  7C 08 03 A6 */	mtlr r0
/* 801F9550 001F6490  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9554 001F6494  4E 80 00 20 */	blr 

.global "__dt__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"__dt__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9558 001F6498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F955C 001F649C  7C 08 02 A6 */	mflr r0
/* 801F9560 001F64A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9564 001F64A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9568 001F64A8  7C 9F 23 78 */	mr r31, r4
/* 801F956C 001F64AC  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9570 001F64B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F9574 001F64B4  41 82 00 68 */	beq .L_801F95DC
/* 801F9578 001F64B8  3C 80 80 4C */	lis r4, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F957C 001F64BC  38 84 D7 0C */	addi r4, r4, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9580 001F64C0  90 9E 00 00 */	stw r4, 0(r30)
/* 801F9584 001F64C4  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F9588 001F64C8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801F958C 001F64CC  41 82 00 40 */	beq .L_801F95CC
/* 801F9590 001F64D0  3C 80 80 4C */	lis r4, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9594 001F64D4  38 84 D6 90 */	addi r4, r4, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9598 001F64D8  90 9E 00 00 */	stw r4, 0(r30)
/* 801F959C 001F64DC  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F95A0 001F64E0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801F95A4 001F64E4  41 82 00 28 */	beq .L_801F95CC
/* 801F95A8 001F64E8  3C 80 80 4C */	lis r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F95AC 001F64EC  38 04 D8 64 */	addi r0, r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F95B0 001F64F0  90 1E 00 00 */	stw r0, 0(r30)
/* 801F95B4 001F64F4  41 82 00 18 */	beq .L_801F95CC
/* 801F95B8 001F64F8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801F95BC 001F64FC  38 80 00 00 */	li r4, 0
/* 801F95C0 001F6500  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801F95C4 001F6504  90 1E 00 00 */	stw r0, 0(r30)
/* 801F95C8 001F6508  48 21 7F C1 */	bl __dt__5CNodeFv
.L_801F95CC:
/* 801F95CC 001F650C  7F E0 07 35 */	extsh. r0, r31
/* 801F95D0 001F6510  40 81 00 0C */	ble .L_801F95DC
/* 801F95D4 001F6514  7F C3 F3 78 */	mr r3, r30
/* 801F95D8 001F6518  4B E2 AA DD */	bl __dl__FPv
.L_801F95DC:
/* 801F95DC 001F651C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F95E0 001F6520  7F C3 F3 78 */	mr r3, r30
/* 801F95E4 001F6524  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F95E8 001F6528  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F95EC 001F652C  7C 08 03 A6 */	mtlr r0
/* 801F95F0 001F6530  38 21 00 10 */	addi r1, r1, 0x10
/* 801F95F4 001F6534  4E 80 00 20 */	blr 

.global "__dt__39Container<Q34Game12PelletNumber6Object>Fv"
"__dt__39Container<Q34Game12PelletNumber6Object>Fv":
/* 801F95F8 001F6538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F95FC 001F653C  7C 08 02 A6 */	mflr r0
/* 801F9600 001F6540  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9604 001F6544  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9608 001F6548  7C 9F 23 78 */	mr r31, r4
/* 801F960C 001F654C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9610 001F6550  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F9614 001F6554  41 82 00 38 */	beq .L_801F964C
/* 801F9618 001F6558  3C 80 80 4C */	lis r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F961C 001F655C  38 04 D8 64 */	addi r0, r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F9620 001F6560  90 1E 00 00 */	stw r0, 0(r30)
/* 801F9624 001F6564  41 82 00 18 */	beq .L_801F963C
/* 801F9628 001F6568  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801F962C 001F656C  38 80 00 00 */	li r4, 0
/* 801F9630 001F6570  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801F9634 001F6574  90 1E 00 00 */	stw r0, 0(r30)
/* 801F9638 001F6578  48 21 7F 51 */	bl __dt__5CNodeFv
.L_801F963C:
/* 801F963C 001F657C  7F E0 07 35 */	extsh. r0, r31
/* 801F9640 001F6580  40 81 00 0C */	ble .L_801F964C
/* 801F9644 001F6584  7F C3 F3 78 */	mr r3, r30
/* 801F9648 001F6588  4B E2 AA 6D */	bl __dl__FPv
.L_801F964C:
/* 801F964C 001F658C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9650 001F6590  7F C3 F3 78 */	mr r3, r30
/* 801F9654 001F6594  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9658 001F6598  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F965C 001F659C  7C 08 03 A6 */	mtlr r0
/* 801F9660 001F65A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9664 001F65A4  4E 80 00 20 */	blr 

.global setupResources__Q34Game12PelletNumber3MgrFv
setupResources__Q34Game12PelletNumber3MgrFv:
/* 801F9668 001F65A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F966C 001F65AC  7C 08 02 A6 */	mflr r0
/* 801F9670 001F65B0  3C 80 80 48 */	lis r4, lbl_80481AE0@ha
/* 801F9674 001F65B4  38 A0 00 00 */	li r5, 0
/* 801F9678 001F65B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F967C 001F65BC  38 84 1A E0 */	addi r4, r4, lbl_80481AE0@l
/* 801F9680 001F65C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9684 001F65C4  7C 7F 1B 78 */	mr r31, r3
/* 801F9688 001F65C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F968C 001F65CC  48 22 9C D1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801F9690 001F65D0  7F E3 FB 78 */	mr r3, r31
/* 801F9694 001F65D4  38 80 00 30 */	li r4, 0x30
/* 801F9698 001F65D8  48 00 1C ED */	bl "alloc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
/* 801F969C 001F65DC  7F E3 FB 78 */	mr r3, r31
/* 801F96A0 001F65E0  38 80 00 00 */	li r4, 0
/* 801F96A4 001F65E4  4B F7 27 15 */	bl setUse__Q24Game13BasePelletMgrFi
/* 801F96A8 001F65E8  7F E3 FB 78 */	mr r3, r31
/* 801F96AC 001F65EC  38 80 00 01 */	li r4, 1
/* 801F96B0 001F65F0  4B F7 27 09 */	bl setUse__Q24Game13BasePelletMgrFi
/* 801F96B4 001F65F4  7F E3 FB 78 */	mr r3, r31
/* 801F96B8 001F65F8  38 80 00 02 */	li r4, 2
/* 801F96BC 001F65FC  4B F7 26 FD */	bl setUse__Q24Game13BasePelletMgrFi
/* 801F96C0 001F6600  7F E3 FB 78 */	mr r3, r31
/* 801F96C4 001F6604  38 80 00 03 */	li r4, 3
/* 801F96C8 001F6608  4B F7 26 F1 */	bl setUse__Q24Game13BasePelletMgrFi
/* 801F96CC 001F660C  3C 80 80 48 */	lis r4, lbl_80481AF0@ha
/* 801F96D0 001F6610  7F E3 FB 78 */	mr r3, r31
/* 801F96D4 001F6614  38 84 1A F0 */	addi r4, r4, lbl_80481AF0@l
/* 801F96D8 001F6618  4B F7 29 F5 */	bl load_texArc__Q24Game13BasePelletMgrFPc
/* 801F96DC 001F661C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801F96E0 001F6620  3C 80 00 04 */	lis r4, 4
/* 801F96E4 001F6624  80 63 00 00 */	lwz r3, 0(r3)
/* 801F96E8 001F6628  4B E8 A1 F1 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F96EC 001F662C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801F96F0 001F6630  3C 80 00 04 */	lis r4, 4
/* 801F96F4 001F6634  80 63 00 04 */	lwz r3, 4(r3)
/* 801F96F8 001F6638  4B E8 A1 E1 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F96FC 001F663C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801F9700 001F6640  3C 80 00 04 */	lis r4, 4
/* 801F9704 001F6644  80 63 00 08 */	lwz r3, 8(r3)
/* 801F9708 001F6648  4B E8 A1 D1 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F970C 001F664C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801F9710 001F6650  3C 80 00 04 */	lis r4, 4
/* 801F9714 001F6654  80 63 00 0C */	lwz r3, 0xc(r3)
/* 801F9718 001F6658  4B E8 A1 C1 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F971C 001F665C  7F E3 FB 78 */	mr r3, r31
/* 801F9720 001F6660  38 80 00 40 */	li r4, 0x40
/* 801F9724 001F6664  3C A0 00 08 */	lis r5, 8
/* 801F9728 001F6668  4B F7 2E C5 */	bl useModelMgr__Q24Game13BasePelletMgrFiUl
/* 801F972C 001F666C  38 7F 00 18 */	addi r3, r31, 0x18
/* 801F9730 001F6670  38 80 00 80 */	li r4, 0x80
/* 801F9734 001F6674  48 00 18 91 */	bl "alloc__24MonoObjectMgr<8CollPart>Fi"
/* 801F9738 001F6678  3C 80 80 48 */	lis r4, lbl_80481AE0@ha
/* 801F973C 001F667C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801F9740 001F6680  38 84 1A E0 */	addi r4, r4, lbl_80481AE0@l
/* 801F9744 001F6684  48 22 9C 21 */	bl heapStatusEnd__6SystemFPc
/* 801F9748 001F6688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F974C 001F668C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9750 001F6690  7C 08 03 A6 */	mtlr r0
/* 801F9754 001F6694  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9758 001F6698  4E 80 00 20 */	blr 

.global onCreateModel__Q34Game12PelletNumber3MgrFPQ28SysShape5Model
onCreateModel__Q34Game12PelletNumber3MgrFPQ28SysShape5Model:
/* 801F975C 001F669C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9760 001F66A0  7C 08 02 A6 */	mflr r0
/* 801F9764 001F66A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9768 001F66A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F976C 001F66AC  7C 9F 23 78 */	mr r31, r4
/* 801F9770 001F66B0  38 80 00 00 */	li r4, 0
/* 801F9774 001F66B4  80 7F 00 08 */	lwz r3, 8(r31)
/* 801F9778 001F66B8  4B E6 CF F1 */	bl newDifferedTexMtx__8J3DModelF14J3DTexDiffFlag
/* 801F977C 001F66BC  3C 80 01 00 */	lis r4, 0x01000200@ha
/* 801F9780 001F66C0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801F9784 001F66C4  38 84 02 00 */	addi r4, r4, 0x01000200@l
/* 801F9788 001F66C8  4B E6 CF 51 */	bl newDifferedDisplayList__8J3DModelFUl
/* 801F978C 001F66CC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801F9790 001F66D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F9794 001F66D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F9798 001F66D8  7D 89 03 A6 */	mtctr r12
/* 801F979C 001F66DC  4E 80 04 21 */	bctrl 
/* 801F97A0 001F66E0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801F97A4 001F66E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F97A8 001F66E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F97AC 001F66EC  7D 89 03 A6 */	mtctr r12
/* 801F97B0 001F66F0  4E 80 04 21 */	bctrl 
/* 801F97B4 001F66F4  80 7F 00 08 */	lwz r3, 8(r31)
/* 801F97B8 001F66F8  4B E6 D1 6D */	bl makeDL__8J3DModelFv
/* 801F97BC 001F66FC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801F97C0 001F6700  4B E6 D0 35 */	bl lock__8J3DModelFv
/* 801F97C4 001F6704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F97C8 001F6708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F97CC 001F670C  7C 08 03 A6 */	mtlr r0
/* 801F97D0 001F6710  38 21 00 10 */	addi r1, r1, 0x10
/* 801F97D4 001F6714  4E 80 00 20 */	blr 

.global generatorNewPelletParm__Q34Game12PelletNumber3MgrFv
generatorNewPelletParm__Q34Game12PelletNumber3MgrFv:
/* 801F97D8 001F6718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F97DC 001F671C  7C 08 02 A6 */	mflr r0
/* 801F97E0 001F6720  38 60 00 0C */	li r3, 0xc
/* 801F97E4 001F6724  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F97E8 001F6728  4B E2 A6 BD */	bl __nw__FUl
/* 801F97EC 001F672C  28 03 00 00 */	cmplwi r3, 0
/* 801F97F0 001F6730  41 82 00 14 */	beq .L_801F9804
/* 801F97F4 001F6734  38 80 00 00 */	li r4, 0
/* 801F97F8 001F6738  38 00 00 01 */	li r0, 1
/* 801F97FC 001F673C  90 83 00 04 */	stw r4, 4(r3)
/* 801F9800 001F6740  90 03 00 08 */	stw r0, 8(r3)
.L_801F9804:
/* 801F9804 001F6744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9808 001F6748  7C 08 03 A6 */	mtlr r0
/* 801F980C 001F674C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9810 001F6750  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game12PelletNumber3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
"generatorBirth__Q34Game12PelletNumber3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm":
/* 801F9814 001F6754  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801F9818 001F6758  7C 08 02 A6 */	mflr r0
/* 801F981C 001F675C  90 01 00 84 */	stw r0, 0x84(r1)
/* 801F9820 001F6760  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801F9824 001F6764  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801F9828 001F6768  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801F982C 001F676C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801F9830 001F6770  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801F9834 001F6774  7C 9D 23 78 */	mr r29, r4
/* 801F9838 001F6778  7C BE 2B 78 */	mr r30, r5
/* 801F983C 001F677C  80 86 00 08 */	lwz r4, 8(r6)
/* 801F9840 001F6780  38 61 00 38 */	addi r3, r1, 0x38
/* 801F9844 001F6784  80 A6 00 04 */	lwz r5, 4(r6)
/* 801F9848 001F6788  4B F6 D3 2D */	bl __ct__Q24Game19PelletNumberInitArgFii
/* 801F984C 001F678C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801F9850 001F6790  38 81 00 38 */	addi r4, r1, 0x38
/* 801F9854 001F6794  4B F7 3C 6D */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801F9858 001F6798  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F985C 001F679C  41 82 00 68 */	beq .L_801F98C4
/* 801F9860 001F67A0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801F9864 001F67A4  28 03 00 00 */	cmplwi r3, 0
/* 801F9868 001F67A8  41 82 00 30 */	beq .L_801F9898
/* 801F986C 001F67AC  81 83 00 04 */	lwz r12, 4(r3)
/* 801F9870 001F67B0  7F A4 EB 78 */	mr r4, r29
/* 801F9874 001F67B4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801F9878 001F67B8  7D 89 03 A6 */	mtctr r12
/* 801F987C 001F67BC  4E 80 04 21 */	bctrl 
/* 801F9880 001F67C0  FF E0 08 90 */	fmr f31, f1
/* 801F9884 001F67C4  7F E3 FB 78 */	mr r3, r31
/* 801F9888 001F67C8  4B F6 D1 4D */	bl getCylinderHeight__Q24Game6PelletFv
/* 801F988C 001F67CC  C0 02 B9 88 */	lfs f0, lbl_80519CE8@sda21(r2)
/* 801F9890 001F67D0  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 801F9894 001F67D4  D0 1D 00 04 */	stfs f0, 4(r29)
.L_801F9898:
/* 801F9898 001F67D8  7F E3 FB 78 */	mr r3, r31
/* 801F989C 001F67DC  7F A4 EB 78 */	mr r4, r29
/* 801F98A0 001F67E0  38 A0 00 00 */	li r5, 0
/* 801F98A4 001F67E4  4B F4 19 05 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801F98A8 001F67E8  7F A4 EB 78 */	mr r4, r29
/* 801F98AC 001F67EC  7F C5 F3 78 */	mr r5, r30
/* 801F98B0 001F67F0  38 61 00 08 */	addi r3, r1, 8
/* 801F98B4 001F67F4  48 22 EF D5 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801F98B8 001F67F8  7F E3 FB 78 */	mr r3, r31
/* 801F98BC 001F67FC  38 81 00 08 */	addi r4, r1, 8
/* 801F98C0 001F6800  4B F6 EC 0D */	bl setOrientation__Q24Game6PelletFR7Matrixf
.L_801F98C4:
/* 801F98C4 001F6804  7F E3 FB 78 */	mr r3, r31
/* 801F98C8 001F6808  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801F98CC 001F680C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801F98D0 001F6810  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801F98D4 001F6814  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801F98D8 001F6818  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801F98DC 001F681C  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 801F98E0 001F6820  7C 08 03 A6 */	mtlr r0
/* 801F98E4 001F6824  38 21 00 80 */	addi r1, r1, 0x80
/* 801F98E8 001F6828  4E 80 00 20 */	blr 

.global generatorWrite__Q34Game12PelletNumber3MgrFR6StreamPQ24Game13GenPelletParm
generatorWrite__Q34Game12PelletNumber3MgrFR6StreamPQ24Game13GenPelletParm:
/* 801F98EC 001F682C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F98F0 001F6830  7C 08 02 A6 */	mflr r0
/* 801F98F4 001F6834  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F98F8 001F6838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F98FC 001F683C  7C BF 2B 78 */	mr r31, r5
/* 801F9900 001F6840  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9904 001F6844  7C 9E 23 78 */	mr r30, r4
/* 801F9908 001F6848  7F C3 F3 78 */	mr r3, r30
/* 801F990C 001F684C  80 05 00 04 */	lwz r0, 4(r5)
/* 801F9910 001F6850  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 801F9914 001F6854  48 21 BD 5D */	bl writeByte__6StreamFUc
/* 801F9918 001F6858  80 1F 00 08 */	lwz r0, 8(r31)
/* 801F991C 001F685C  7F C3 F3 78 */	mr r3, r30
/* 801F9920 001F6860  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 801F9924 001F6864  48 21 BD 4D */	bl writeByte__6StreamFUc
/* 801F9928 001F6868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F992C 001F686C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9930 001F6870  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F9934 001F6874  7C 08 03 A6 */	mtlr r0
/* 801F9938 001F6878  38 21 00 10 */	addi r1, r1, 0x10
/* 801F993C 001F687C  4E 80 00 20 */	blr 

.global generatorRead__Q34Game12PelletNumber3MgrFR6StreamPQ24Game13GenPelletParmUl
generatorRead__Q34Game12PelletNumber3MgrFR6StreamPQ24Game13GenPelletParmUl:
/* 801F9940 001F6880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9944 001F6884  7C 08 02 A6 */	mflr r0
/* 801F9948 001F6888  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F994C 001F688C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9950 001F6890  7C BF 2B 78 */	mr r31, r5
/* 801F9954 001F6894  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9958 001F6898  7C 9E 23 78 */	mr r30, r4
/* 801F995C 001F689C  7F C3 F3 78 */	mr r3, r30
/* 801F9960 001F68A0  48 21 AB 3D */	bl readByte__6StreamFv
/* 801F9964 001F68A4  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801F9968 001F68A8  7F C3 F3 78 */	mr r3, r30
/* 801F996C 001F68AC  90 1F 00 04 */	stw r0, 4(r31)
/* 801F9970 001F68B0  48 21 AB 2D */	bl readByte__6StreamFv
/* 801F9974 001F68B4  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801F9978 001F68B8  90 1F 00 08 */	stw r0, 8(r31)
/* 801F997C 001F68BC  80 DF 00 08 */	lwz r6, 8(r31)
/* 801F9980 001F68C0  28 06 00 14 */	cmplwi r6, 0x14
/* 801F9984 001F68C4  41 81 00 4C */	bgt .L_801F99D0
/* 801F9988 001F68C8  3C 60 80 4C */	lis r3, lbl_804BD570@ha
/* 801F998C 001F68CC  54 C0 10 3A */	slwi r0, r6, 2
/* 801F9990 001F68D0  38 63 D5 70 */	addi r3, r3, lbl_804BD570@l
/* 801F9994 001F68D4  7C 03 00 2E */	lwzx r0, r3, r0
/* 801F9998 001F68D8  7C 09 03 A6 */	mtctr r0
/* 801F999C 001F68DC  4E 80 04 20 */	bctr 
.L_801F99A0:
/* 801F99A0 001F68E0  38 00 00 00 */	li r0, 0
/* 801F99A4 001F68E4  90 1F 00 00 */	stw r0, 0(r31)
/* 801F99A8 001F68E8  48 00 00 44 */	b .L_801F99EC
.L_801F99AC:
/* 801F99AC 001F68EC  38 00 00 01 */	li r0, 1
/* 801F99B0 001F68F0  90 1F 00 00 */	stw r0, 0(r31)
/* 801F99B4 001F68F4  48 00 00 38 */	b .L_801F99EC
.L_801F99B8:
/* 801F99B8 001F68F8  38 00 00 02 */	li r0, 2
/* 801F99BC 001F68FC  90 1F 00 00 */	stw r0, 0(r31)
/* 801F99C0 001F6900  48 00 00 2C */	b .L_801F99EC
.L_801F99C4:
/* 801F99C4 001F6904  38 00 00 03 */	li r0, 3
/* 801F99C8 001F6908  90 1F 00 00 */	stw r0, 0(r31)
/* 801F99CC 001F690C  48 00 00 20 */	b .L_801F99EC
.L_801F99D0:
/* 801F99D0 001F6910  3C 60 80 48 */	lis r3, lbl_80481B04@ha
/* 801F99D4 001F6914  3C 80 80 48 */	lis r4, lbl_80481B18@ha
/* 801F99D8 001F6918  38 A4 1B 18 */	addi r5, r4, lbl_80481B18@l
/* 801F99DC 001F691C  38 63 1B 04 */	addi r3, r3, lbl_80481B04@l
/* 801F99E0 001F6920  38 80 01 02 */	li r4, 0x102
/* 801F99E4 001F6924  4C C6 31 82 */	crclr 6
/* 801F99E8 001F6928  4B E3 0C 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F99EC:
/* 801F99EC 001F692C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F99F0 001F6930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F99F4 001F6934  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F99F8 001F6938  7C 08 03 A6 */	mtlr r0
/* 801F99FC 001F693C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9A00 001F6940  4E 80 00 20 */	blr 

.global __dt__Q34Game12PelletNumber3MgrFv
__dt__Q34Game12PelletNumber3MgrFv:
/* 801F9A04 001F6944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9A08 001F6948  7C 08 02 A6 */	mflr r0
/* 801F9A0C 001F694C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9A10 001F6950  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9A14 001F6954  7C 9F 23 78 */	mr r31, r4
/* 801F9A18 001F6958  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9A1C 001F695C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F9A20 001F6960  41 82 01 7C */	beq .L_801F9B9C
/* 801F9A24 001F6964  3C 60 80 4C */	lis r3, __vt__Q34Game12PelletNumber3Mgr@ha
/* 801F9A28 001F6968  38 63 D5 C4 */	addi r3, r3, __vt__Q34Game12PelletNumber3Mgr@l
/* 801F9A2C 001F696C  90 7E 00 00 */	stw r3, 0(r30)
/* 801F9A30 001F6970  38 03 00 98 */	addi r0, r3, 0x98
/* 801F9A34 001F6974  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F9A38 001F6978  41 82 01 54 */	beq .L_801F9B8C
/* 801F9A3C 001F697C  3C 60 80 4C */	lis r3, "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9A40 001F6980  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F9A44 001F6984  38 63 D7 98 */	addi r3, r3, "__vt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9A48 001F6988  90 7E 00 00 */	stw r3, 0(r30)
/* 801F9A4C 001F698C  38 03 00 98 */	addi r0, r3, 0x98
/* 801F9A50 001F6990  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F9A54 001F6994  41 82 00 68 */	beq .L_801F9ABC
/* 801F9A58 001F6998  3C 60 80 4C */	lis r3, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9A5C 001F699C  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F9A60 001F69A0  38 63 D7 0C */	addi r3, r3, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9A64 001F69A4  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801F9A68 001F69A8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F9A6C 001F69AC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801F9A70 001F69B0  41 82 00 4C */	beq .L_801F9ABC
/* 801F9A74 001F69B4  3C 60 80 4C */	lis r3, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9A78 001F69B8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F9A7C 001F69BC  38 63 D6 90 */	addi r3, r3, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9A80 001F69C0  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801F9A84 001F69C4  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F9A88 001F69C8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 801F9A8C 001F69CC  41 82 00 30 */	beq .L_801F9ABC
/* 801F9A90 001F69D0  3C 60 80 4C */	lis r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F9A94 001F69D4  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801F9A98 001F69D8  38 03 D8 64 */	addi r0, r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F9A9C 001F69DC  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801F9AA0 001F69E0  41 82 00 1C */	beq .L_801F9ABC
/* 801F9AA4 001F69E4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F9AA8 001F69E8  38 7E 00 70 */	addi r3, r30, 0x70
/* 801F9AAC 001F69EC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F9AB0 001F69F0  38 80 00 00 */	li r4, 0
/* 801F9AB4 001F69F4  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801F9AB8 001F69F8  48 21 7A D1 */	bl __dt__5CNodeFv
.L_801F9ABC:
/* 801F9ABC 001F69FC  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801F9AC0 001F6A00  41 82 00 30 */	beq .L_801F9AF0
/* 801F9AC4 001F6A04  3C 60 80 4C */	lis r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F9AC8 001F6A08  34 1E 00 54 */	addic. r0, r30, 0x54
/* 801F9ACC 001F6A0C  38 03 D8 64 */	addi r0, r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F9AD0 001F6A10  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F9AD4 001F6A14  41 82 00 1C */	beq .L_801F9AF0
/* 801F9AD8 001F6A18  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F9ADC 001F6A1C  38 7E 00 54 */	addi r3, r30, 0x54
/* 801F9AE0 001F6A20  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F9AE4 001F6A24  38 80 00 00 */	li r4, 0
/* 801F9AE8 001F6A28  90 1E 00 54 */	stw r0, 0x54(r30)
/* 801F9AEC 001F6A2C  48 21 7A 9D */	bl __dt__5CNodeFv
.L_801F9AF0:
/* 801F9AF0 001F6A30  28 1E 00 00 */	cmplwi r30, 0
/* 801F9AF4 001F6A34  41 82 00 98 */	beq .L_801F9B8C
/* 801F9AF8 001F6A38  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 801F9AFC 001F6A3C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F9B00 001F6A40  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 801F9B04 001F6A44  90 1E 00 00 */	stw r0, 0(r30)
/* 801F9B08 001F6A48  41 82 00 84 */	beq .L_801F9B8C
/* 801F9B0C 001F6A4C  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 801F9B10 001F6A50  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F9B14 001F6A54  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 801F9B18 001F6A58  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801F9B1C 001F6A5C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F9B20 001F6A60  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F9B24 001F6A64  41 82 00 68 */	beq .L_801F9B8C
/* 801F9B28 001F6A68  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 801F9B2C 001F6A6C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F9B30 001F6A70  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 801F9B34 001F6A74  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801F9B38 001F6A78  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F9B3C 001F6A7C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F9B40 001F6A80  41 82 00 4C */	beq .L_801F9B8C
/* 801F9B44 001F6A84  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 801F9B48 001F6A88  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F9B4C 001F6A8C  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 801F9B50 001F6A90  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801F9B54 001F6A94  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F9B58 001F6A98  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F9B5C 001F6A9C  41 82 00 30 */	beq .L_801F9B8C
/* 801F9B60 001F6AA0  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 801F9B64 001F6AA4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801F9B68 001F6AA8  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 801F9B6C 001F6AAC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801F9B70 001F6AB0  41 82 00 1C */	beq .L_801F9B8C
/* 801F9B74 001F6AB4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F9B78 001F6AB8  38 7E 00 18 */	addi r3, r30, 0x18
/* 801F9B7C 001F6ABC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F9B80 001F6AC0  38 80 00 00 */	li r4, 0
/* 801F9B84 001F6AC4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801F9B88 001F6AC8  48 21 7A 01 */	bl __dt__5CNodeFv
.L_801F9B8C:
/* 801F9B8C 001F6ACC  7F E0 07 35 */	extsh. r0, r31
/* 801F9B90 001F6AD0  40 81 00 0C */	ble .L_801F9B9C
/* 801F9B94 001F6AD4  7F C3 F3 78 */	mr r3, r30
/* 801F9B98 001F6AD8  4B E2 A5 1D */	bl __dl__FPv
.L_801F9B9C:
/* 801F9B9C 001F6ADC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9BA0 001F6AE0  7F C3 F3 78 */	mr r3, r30
/* 801F9BA4 001F6AE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9BA8 001F6AE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F9BAC 001F6AEC  7C 08 03 A6 */	mtlr r0
/* 801F9BB0 001F6AF0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9BB4 001F6AF4  4E 80 00 20 */	blr 

.global getMgrName__Q34Game12PelletNumber3MgrFv
getMgrName__Q34Game12PelletNumber3MgrFv:
/* 801F9BB8 001F6AF8  38 62 B9 8C */	addi r3, r2, lbl_80519CEC@sda21
/* 801F9BBC 001F6AFC  4E 80 00 20 */	blr 

.global getMgrID__Q34Game12PelletNumber3MgrFv
getMgrID__Q34Game12PelletNumber3MgrFv:
/* 801F9BC0 001F6B00  38 60 00 00 */	li r3, 0
/* 801F9BC4 001F6B04  4E 80 00 20 */	blr 

.global generatorLocalVersion__Q34Game12PelletNumber3MgrFv
generatorLocalVersion__Q34Game12PelletNumber3MgrFv:
/* 801F9BC8 001F6B08  3C 60 30 30 */	lis r3, 0x30303030@ha
/* 801F9BCC 001F6B0C  38 63 30 30 */	addi r3, r3, 0x30303030@l
/* 801F9BD0 001F6B10  4E 80 00 20 */	blr 

.global "__dt__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"__dt__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9BD4 001F6B14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9BD8 001F6B18  7C 08 02 A6 */	mflr r0
/* 801F9BDC 001F6B1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9BE0 001F6B20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9BE4 001F6B24  7C 9F 23 78 */	mr r31, r4
/* 801F9BE8 001F6B28  93 C1 00 08 */	stw r30, 8(r1)
/* 801F9BEC 001F6B2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F9BF0 001F6B30  41 82 00 50 */	beq .L_801F9C40
/* 801F9BF4 001F6B34  3C 80 80 4C */	lis r4, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801F9BF8 001F6B38  38 84 D6 90 */	addi r4, r4, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801F9BFC 001F6B3C  90 9E 00 00 */	stw r4, 0(r30)
/* 801F9C00 001F6B40  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F9C04 001F6B44  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801F9C08 001F6B48  41 82 00 28 */	beq .L_801F9C30
/* 801F9C0C 001F6B4C  3C 80 80 4C */	lis r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801F9C10 001F6B50  38 04 D8 64 */	addi r0, r4, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801F9C14 001F6B54  90 1E 00 00 */	stw r0, 0(r30)
/* 801F9C18 001F6B58  41 82 00 18 */	beq .L_801F9C30
/* 801F9C1C 001F6B5C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801F9C20 001F6B60  38 80 00 00 */	li r4, 0
/* 801F9C24 001F6B64  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801F9C28 001F6B68  90 1E 00 00 */	stw r0, 0(r30)
/* 801F9C2C 001F6B6C  48 21 79 5D */	bl __dt__5CNodeFv
.L_801F9C30:
/* 801F9C30 001F6B70  7F E0 07 35 */	extsh. r0, r31
/* 801F9C34 001F6B74  40 81 00 0C */	ble .L_801F9C40
/* 801F9C38 001F6B78  7F C3 F3 78 */	mr r3, r30
/* 801F9C3C 001F6B7C  4B E2 A4 79 */	bl __dl__FPv
.L_801F9C40:
/* 801F9C40 001F6B80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9C44 001F6B84  7F C3 F3 78 */	mr r3, r30
/* 801F9C48 001F6B88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9C4C 001F6B8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F9C50 001F6B90  7C 08 03 A6 */	mtlr r0
/* 801F9C54 001F6B94  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9C58 001F6B98  4E 80 00 20 */	blr 

.global getName__Q23efx10ArgPelTypeFv
getName__Q23efx10ArgPelTypeFv:
/* 801F9C5C 001F6B9C  3C 60 80 48 */	lis r3, lbl_80481B34@ha
/* 801F9C60 001F6BA0  38 63 1B 34 */	addi r3, r3, lbl_80481B34@l
/* 801F9C64 001F6BA4  4E 80 00 20 */	blr 

.global getKind__Q34Game12PelletNumber6ObjectFv
getKind__Q34Game12PelletNumber6ObjectFv:
/* 801F9C68 001F6BA8  38 60 00 00 */	li r3, 0
/* 801F9C6C 001F6BAC  4E 80 00 20 */	blr 

.global "resetMgrAndResources__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"resetMgrAndResources__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9C70 001F6BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9C74 001F6BB4  7C 08 02 A6 */	mflr r0
/* 801F9C78 001F6BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9C7C 001F6BBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9C80 001F6BC0  7C 7F 1B 78 */	mr r31, r3
/* 801F9C84 001F6BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F9C88 001F6BC8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801F9C8C 001F6BCC  7D 89 03 A6 */	mtctr r12
/* 801F9C90 001F6BD0  4E 80 04 21 */	bctrl 
/* 801F9C94 001F6BD4  39 00 00 00 */	li r8, 0
/* 801F9C98 001F6BD8  39 20 00 00 */	li r9, 0
/* 801F9C9C 001F6BDC  7D 07 43 78 */	mr r7, r8
/* 801F9CA0 001F6BE0  7D 06 43 78 */	mr r6, r8
/* 801F9CA4 001F6BE4  7D 05 43 78 */	mr r5, r8
/* 801F9CA8 001F6BE8  7D 04 43 78 */	mr r4, r8
/* 801F9CAC 001F6BEC  48 00 00 2C */	b .L_801F9CD8
.L_801F9CB0:
/* 801F9CB0 001F6BF0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801F9CB4 001F6BF4  7C E3 41 2E */	stwx r7, r3, r8
/* 801F9CB8 001F6BF8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801F9CBC 001F6BFC  7C C3 41 2E */	stwx r6, r3, r8
/* 801F9CC0 001F6C00  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 801F9CC4 001F6C04  7C A3 41 2E */	stwx r5, r3, r8
/* 801F9CC8 001F6C08  39 08 00 04 */	addi r8, r8, 4
/* 801F9CCC 001F6C0C  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 801F9CD0 001F6C10  7C 83 49 AE */	stbx r4, r3, r9
/* 801F9CD4 001F6C14  39 29 00 01 */	addi r9, r9, 1
.L_801F9CD8:
/* 801F9CD8 001F6C18  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801F9CDC 001F6C1C  7C 09 00 00 */	cmpw r9, r0
/* 801F9CE0 001F6C20  41 80 FF D0 */	blt .L_801F9CB0
/* 801F9CE4 001F6C24  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 801F9CE8 001F6C28  28 00 00 00 */	cmplwi r0, 0
/* 801F9CEC 001F6C2C  41 82 00 0C */	beq .L_801F9CF8
/* 801F9CF0 001F6C30  38 00 00 00 */	li r0, 0
/* 801F9CF4 001F6C34  90 1F 00 48 */	stw r0, 0x48(r31)
.L_801F9CF8:
/* 801F9CF8 001F6C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9CFC 001F6C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9D00 001F6C40  7C 08 03 A6 */	mtlr r0
/* 801F9D04 001F6C44  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9D08 001F6C48  4E 80 00 20 */	blr 

.global "onCreateModel__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ28SysShape5Model"
"onCreateModel__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ28SysShape5Model":
/* 801F9D0C 001F6C4C  4E 80 00 20 */	blr 

.global "birth__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"birth__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9D10 001F6C50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9D14 001F6C54  7C 08 02 A6 */	mflr r0
/* 801F9D18 001F6C58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9D1C 001F6C5C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9D20 001F6C60  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801F9D24 001F6C64  7D 89 03 A6 */	mtctr r12
/* 801F9D28 001F6C68  4E 80 04 21 */	bctrl 
/* 801F9D2C 001F6C6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9D30 001F6C70  7C 08 03 A6 */	mtlr r0
/* 801F9D34 001F6C74  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9D38 001F6C78  4E 80 00 20 */	blr 

.global "doAnimation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"doAnimation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9D3C 001F6C7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9D40 001F6C80  7C 08 02 A6 */	mflr r0
/* 801F9D44 001F6C84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9D48 001F6C88  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9D4C 001F6C8C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801F9D50 001F6C90  7D 89 03 A6 */	mtctr r12
/* 801F9D54 001F6C94  4E 80 04 21 */	bctrl 
/* 801F9D58 001F6C98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9D5C 001F6C9C  7C 08 03 A6 */	mtlr r0
/* 801F9D60 001F6CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9D64 001F6CA4  4E 80 00 20 */	blr 

.global "doEntry__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"doEntry__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9D68 001F6CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9D6C 001F6CAC  7C 08 02 A6 */	mflr r0
/* 801F9D70 001F6CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9D74 001F6CB4  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9D78 001F6CB8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801F9D7C 001F6CBC  7D 89 03 A6 */	mtctr r12
/* 801F9D80 001F6CC0  4E 80 04 21 */	bctrl 
/* 801F9D84 001F6CC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9D88 001F6CC8  7C 08 03 A6 */	mtlr r0
/* 801F9D8C 001F6CCC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9D90 001F6CD0  4E 80 00 20 */	blr 

.global "doSetView__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
"doSetView__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi":
/* 801F9D94 001F6CD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9D98 001F6CD8  7C 08 02 A6 */	mflr r0
/* 801F9D9C 001F6CDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9DA0 001F6CE0  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9DA4 001F6CE4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801F9DA8 001F6CE8  7D 89 03 A6 */	mtctr r12
/* 801F9DAC 001F6CEC  4E 80 04 21 */	bctrl 
/* 801F9DB0 001F6CF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9DB4 001F6CF4  7C 08 03 A6 */	mtlr r0
/* 801F9DB8 001F6CF8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9DBC 001F6CFC  4E 80 00 20 */	blr 

.global "doViewCalc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"doViewCalc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9DC0 001F6D00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9DC4 001F6D04  7C 08 02 A6 */	mflr r0
/* 801F9DC8 001F6D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9DCC 001F6D0C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9DD0 001F6D10  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801F9DD4 001F6D14  7D 89 03 A6 */	mtctr r12
/* 801F9DD8 001F6D18  4E 80 04 21 */	bctrl 
/* 801F9DDC 001F6D1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9DE0 001F6D20  7C 08 03 A6 */	mtlr r0
/* 801F9DE4 001F6D24  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9DE8 001F6D28  4E 80 00 20 */	blr 

.global "doSimulation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Ff"
"doSimulation__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Ff":
/* 801F9DEC 001F6D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9DF0 001F6D30  7C 08 02 A6 */	mflr r0
/* 801F9DF4 001F6D34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9DF8 001F6D38  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9DFC 001F6D3C  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801F9E00 001F6D40  7D 89 03 A6 */	mtctr r12
/* 801F9E04 001F6D44  4E 80 04 21 */	bctrl 
/* 801F9E08 001F6D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9E0C 001F6D4C  7C 08 03 A6 */	mtlr r0
/* 801F9E10 001F6D50  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9E14 001F6D54  4E 80 00 20 */	blr 

.global "doDirectDraw__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FR8Graphics"
"doDirectDraw__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FR8Graphics":
/* 801F9E18 001F6D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9E1C 001F6D5C  7C 08 02 A6 */	mflr r0
/* 801F9E20 001F6D60  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9E24 001F6D64  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9E28 001F6D68  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801F9E2C 001F6D6C  7D 89 03 A6 */	mtctr r12
/* 801F9E30 001F6D70  4E 80 04 21 */	bctrl 
/* 801F9E34 001F6D74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9E38 001F6D78  7C 08 03 A6 */	mtlr r0
/* 801F9E3C 001F6D7C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9E40 001F6D80  4E 80 00 20 */	blr 

.global "kill__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
"kill__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet":
/* 801F9E44 001F6D84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9E48 001F6D88  7C 08 02 A6 */	mflr r0
/* 801F9E4C 001F6D8C  38 63 00 70 */	addi r3, r3, 0x70
/* 801F9E50 001F6D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9E54 001F6D94  48 00 00 CD */	bl "kill__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPQ34Game12PelletNumber6Object"
/* 801F9E58 001F6D98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9E5C 001F6D9C  7C 08 03 A6 */	mtlr r0
/* 801F9E60 001F6DA0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9E64 001F6DA4  4E 80 00 20 */	blr 

.global "getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
"getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv":
/* 801F9E68 001F6DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9E6C 001F6DAC  7C 08 02 A6 */	mflr r0
/* 801F9E70 001F6DB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9E74 001F6DB4  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9E78 001F6DB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F9E7C 001F6DBC  7D 89 03 A6 */	mtctr r12
/* 801F9E80 001F6DC0  4E 80 04 21 */	bctrl 
/* 801F9E84 001F6DC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9E88 001F6DC8  7C 08 03 A6 */	mtlr r0
/* 801F9E8C 001F6DCC  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9E90 001F6DD0  4E 80 00 20 */	blr 

.global "getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9E94 001F6DD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9E98 001F6DD8  7C 08 02 A6 */	mflr r0
/* 801F9E9C 001F6DDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9EA0 001F6DE0  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801F9EA4 001F6DE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801F9EA8 001F6DE8  7D 89 03 A6 */	mtctr r12
/* 801F9EAC 001F6DEC  4E 80 04 21 */	bctrl 
/* 801F9EB0 001F6DF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9EB4 001F6DF4  7C 08 03 A6 */	mtlr r0
/* 801F9EB8 001F6DF8  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9EBC 001F6DFC  4E 80 00 20 */	blr 

.global "birth__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"birth__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9EC0 001F6E00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9EC4 001F6E04  7C 08 02 A6 */	mflr r0
/* 801F9EC8 001F6E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9ECC 001F6E0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F9ED0 001F6E10  7C 7F 1B 78 */	mr r31, r3
/* 801F9ED4 001F6E14  48 00 04 95 */	bl "getEmptyIndex__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
/* 801F9ED8 001F6E18  2C 03 FF FF */	cmpwi r3, -1
/* 801F9EDC 001F6E1C  41 82 00 2C */	beq .L_801F9F08
/* 801F9EE0 001F6E20  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 801F9EE4 001F6E24  38 00 00 00 */	li r0, 0
/* 801F9EE8 001F6E28  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801F9EEC 001F6E2C  1C A3 04 5C */	mulli r5, r3, 0x45c
/* 801F9EF0 001F6E30  7C 04 19 AE */	stbx r0, r4, r3
/* 801F9EF4 001F6E34  7C 66 2A 14 */	add r3, r6, r5
/* 801F9EF8 001F6E38  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 801F9EFC 001F6E3C  38 04 00 01 */	addi r0, r4, 1
/* 801F9F00 001F6E40  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801F9F04 001F6E44  48 00 00 08 */	b .L_801F9F0C
.L_801F9F08:
/* 801F9F08 001F6E48  38 60 00 00 */	li r3, 0
.L_801F9F0C:
/* 801F9F0C 001F6E4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9F10 001F6E50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F9F14 001F6E54  7C 08 03 A6 */	mtlr r0
/* 801F9F18 001F6E58  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9F1C 001F6E5C  4E 80 00 20 */	blr 

.global "kill__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPQ34Game12PelletNumber6Object"
"kill__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPQ34Game12PelletNumber6Object":
/* 801F9F20 001F6E60  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801F9F24 001F6E64  38 C0 00 00 */	li r6, 0
/* 801F9F28 001F6E68  38 A0 00 00 */	li r5, 0
/* 801F9F2C 001F6E6C  7C 09 03 A6 */	mtctr r0
/* 801F9F30 001F6E70  2C 00 00 00 */	cmpwi r0, 0
/* 801F9F34 001F6E74  4C 81 00 20 */	blelr 
.L_801F9F38:
/* 801F9F38 001F6E78  80 03 00 28 */	lwz r0, 0x28(r3)
/* 801F9F3C 001F6E7C  7C 00 2A 14 */	add r0, r0, r5
/* 801F9F40 001F6E80  7C 00 20 40 */	cmplw r0, r4
/* 801F9F44 001F6E84  40 82 00 20 */	bne .L_801F9F64
/* 801F9F48 001F6E88  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801F9F4C 001F6E8C  38 00 00 01 */	li r0, 1
/* 801F9F50 001F6E90  7C 04 31 AE */	stbx r0, r4, r6
/* 801F9F54 001F6E94  80 83 00 20 */	lwz r4, 0x20(r3)
/* 801F9F58 001F6E98  38 04 FF FF */	addi r0, r4, -1
/* 801F9F5C 001F6E9C  90 03 00 20 */	stw r0, 0x20(r3)
/* 801F9F60 001F6EA0  4E 80 00 20 */	blr 
.L_801F9F64:
/* 801F9F64 001F6EA4  38 A5 04 5C */	addi r5, r5, 0x45c
/* 801F9F68 001F6EA8  38 C6 00 01 */	addi r6, r6, 1
/* 801F9F6C 001F6EAC  42 00 FF CC */	bdnz .L_801F9F38
/* 801F9F70 001F6EB0  4E 80 00 20 */	blr 

.global "getNext__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPv"
"getNext__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPv":
/* 801F9F74 001F6EB4  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 801F9F78 001F6EB8  38 C4 00 01 */	addi r6, r4, 1
/* 801F9F7C 001F6EBC  7C 06 28 50 */	subf r0, r6, r5
/* 801F9F80 001F6EC0  7C 09 03 A6 */	mtctr r0
/* 801F9F84 001F6EC4  7C 06 28 00 */	cmpw r6, r5
/* 801F9F88 001F6EC8  40 80 00 24 */	bge .L_801F9FAC
.L_801F9F8C:
/* 801F9F8C 001F6ECC  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801F9F90 001F6ED0  7C 04 30 AE */	lbzx r0, r4, r6
/* 801F9F94 001F6ED4  28 00 00 00 */	cmplwi r0, 0
/* 801F9F98 001F6ED8  40 82 00 0C */	bne .L_801F9FA4
/* 801F9F9C 001F6EDC  7C C3 33 78 */	mr r3, r6
/* 801F9FA0 001F6EE0  4E 80 00 20 */	blr 
.L_801F9FA4:
/* 801F9FA4 001F6EE4  38 C6 00 01 */	addi r6, r6, 1
/* 801F9FA8 001F6EE8  42 00 FF E4 */	bdnz .L_801F9F8C
.L_801F9FAC:
/* 801F9FAC 001F6EEC  7C A3 2B 78 */	mr r3, r5
/* 801F9FB0 001F6EF0  4E 80 00 20 */	blr 

.global "getStart__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"getStart__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9FB4 001F6EF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F9FB8 001F6EF8  7C 08 02 A6 */	mflr r0
/* 801F9FBC 001F6EFC  38 80 FF FF */	li r4, -1
/* 801F9FC0 001F6F00  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F9FC4 001F6F04  81 83 00 00 */	lwz r12, 0(r3)
/* 801F9FC8 001F6F08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F9FCC 001F6F0C  7D 89 03 A6 */	mtctr r12
/* 801F9FD0 001F6F10  4E 80 04 21 */	bctrl 
/* 801F9FD4 001F6F14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F9FD8 001F6F18  7C 08 03 A6 */	mtlr r0
/* 801F9FDC 001F6F1C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F9FE0 001F6F20  4E 80 00 20 */	blr 

.global "getEnd__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"getEnd__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9FE4 001F6F24  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801F9FE8 001F6F28  4E 80 00 20 */	blr 

.global "getAt__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
"getAt__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi":
/* 801F9FEC 001F6F2C  1C 04 04 5C */	mulli r0, r4, 0x45c
/* 801F9FF0 001F6F30  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801F9FF4 001F6F34  7C 63 02 14 */	add r3, r3, r0
/* 801F9FF8 001F6F38  4E 80 00 20 */	blr 

.global "getTo__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"getTo__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801F9FFC 001F6F3C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801FA000 001F6F40  4E 80 00 20 */	blr 

.global "doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA004 001F6F44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA008 001F6F48  7C 08 02 A6 */	mflr r0
/* 801FA00C 001F6F4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA010 001F6F50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA014 001F6F54  3B E0 00 00 */	li r31, 0
/* 801FA018 001F6F58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FA01C 001F6F5C  3B C0 00 00 */	li r30, 0
/* 801FA020 001F6F60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FA024 001F6F64  7C 7D 1B 78 */	mr r29, r3
/* 801FA028 001F6F68  48 00 00 34 */	b .L_801FA05C
.L_801FA02C:
/* 801FA02C 001F6F6C  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FA030 001F6F70  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FA034 001F6F74  28 00 00 00 */	cmplwi r0, 0
/* 801FA038 001F6F78  40 82 00 1C */	bne .L_801FA054
/* 801FA03C 001F6F7C  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FA040 001F6F80  7C 60 FA 14 */	add r3, r0, r31
/* 801FA044 001F6F84  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA048 001F6F88  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801FA04C 001F6F8C  7D 89 03 A6 */	mtctr r12
/* 801FA050 001F6F90  4E 80 04 21 */	bctrl 
.L_801FA054:
/* 801FA054 001F6F94  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FA058 001F6F98  3B DE 00 01 */	addi r30, r30, 1
.L_801FA05C:
/* 801FA05C 001F6F9C  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FA060 001F6FA0  7C 1E 00 00 */	cmpw r30, r0
/* 801FA064 001F6FA4  41 80 FF C8 */	blt .L_801FA02C
/* 801FA068 001F6FA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA06C 001F6FAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA070 001F6FB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FA074 001F6FB4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FA078 001F6FB8  7C 08 03 A6 */	mtlr r0
/* 801FA07C 001F6FBC  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA080 001F6FC0  4E 80 00 20 */	blr 

.global "doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA084 001F6FC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA088 001F6FC8  7C 08 02 A6 */	mflr r0
/* 801FA08C 001F6FCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA090 001F6FD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA094 001F6FD4  3B E0 00 00 */	li r31, 0
/* 801FA098 001F6FD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FA09C 001F6FDC  3B C0 00 00 */	li r30, 0
/* 801FA0A0 001F6FE0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FA0A4 001F6FE4  7C 7D 1B 78 */	mr r29, r3
/* 801FA0A8 001F6FE8  48 00 00 34 */	b .L_801FA0DC
.L_801FA0AC:
/* 801FA0AC 001F6FEC  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FA0B0 001F6FF0  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FA0B4 001F6FF4  28 00 00 00 */	cmplwi r0, 0
/* 801FA0B8 001F6FF8  40 82 00 1C */	bne .L_801FA0D4
/* 801FA0BC 001F6FFC  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FA0C0 001F7000  7C 60 FA 14 */	add r3, r0, r31
/* 801FA0C4 001F7004  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA0C8 001F7008  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801FA0CC 001F700C  7D 89 03 A6 */	mtctr r12
/* 801FA0D0 001F7010  4E 80 04 21 */	bctrl 
.L_801FA0D4:
/* 801FA0D4 001F7014  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FA0D8 001F7018  3B DE 00 01 */	addi r30, r30, 1
.L_801FA0DC:
/* 801FA0DC 001F701C  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FA0E0 001F7020  7C 1E 00 00 */	cmpw r30, r0
/* 801FA0E4 001F7024  41 80 FF C8 */	blt .L_801FA0AC
/* 801FA0E8 001F7028  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA0EC 001F702C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA0F0 001F7030  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FA0F4 001F7034  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FA0F8 001F7038  7C 08 03 A6 */	mtlr r0
/* 801FA0FC 001F703C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA100 001F7040  4E 80 00 20 */	blr 

.global "doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
"doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FA104 001F7044  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA108 001F7048  7C 08 02 A6 */	mflr r0
/* 801FA10C 001F704C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA110 001F7050  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA114 001F7054  3B E0 00 00 */	li r31, 0
/* 801FA118 001F7058  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FA11C 001F705C  3B C0 00 00 */	li r30, 0
/* 801FA120 001F7060  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FA124 001F7064  7C 9D 23 78 */	mr r29, r4
/* 801FA128 001F7068  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FA12C 001F706C  7C 7C 1B 78 */	mr r28, r3
/* 801FA130 001F7070  48 00 00 38 */	b .L_801FA168
.L_801FA134:
/* 801FA134 001F7074  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801FA138 001F7078  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FA13C 001F707C  28 00 00 00 */	cmplwi r0, 0
/* 801FA140 001F7080  40 82 00 20 */	bne .L_801FA160
/* 801FA144 001F7084  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801FA148 001F7088  7F A4 EB 78 */	mr r4, r29
/* 801FA14C 001F708C  7C 60 FA 14 */	add r3, r0, r31
/* 801FA150 001F7090  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA154 001F7094  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801FA158 001F7098  7D 89 03 A6 */	mtctr r12
/* 801FA15C 001F709C  4E 80 04 21 */	bctrl 
.L_801FA160:
/* 801FA160 001F70A0  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FA164 001F70A4  3B DE 00 01 */	addi r30, r30, 1
.L_801FA168:
/* 801FA168 001F70A8  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801FA16C 001F70AC  7C 1E 00 00 */	cmpw r30, r0
/* 801FA170 001F70B0  41 80 FF C4 */	blt .L_801FA134
/* 801FA174 001F70B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA178 001F70B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA17C 001F70BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FA180 001F70C0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FA184 001F70C4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FA188 001F70C8  7C 08 03 A6 */	mtlr r0
/* 801FA18C 001F70CC  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA190 001F70D0  4E 80 00 20 */	blr 

.global "doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA194 001F70D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA198 001F70D8  7C 08 02 A6 */	mflr r0
/* 801FA19C 001F70DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA1A0 001F70E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA1A4 001F70E4  3B E0 00 00 */	li r31, 0
/* 801FA1A8 001F70E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FA1AC 001F70EC  3B C0 00 00 */	li r30, 0
/* 801FA1B0 001F70F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FA1B4 001F70F4  7C 7D 1B 78 */	mr r29, r3
/* 801FA1B8 001F70F8  48 00 00 34 */	b .L_801FA1EC
.L_801FA1BC:
/* 801FA1BC 001F70FC  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FA1C0 001F7100  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FA1C4 001F7104  28 00 00 00 */	cmplwi r0, 0
/* 801FA1C8 001F7108  40 82 00 1C */	bne .L_801FA1E4
/* 801FA1CC 001F710C  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FA1D0 001F7110  7C 60 FA 14 */	add r3, r0, r31
/* 801FA1D4 001F7114  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA1D8 001F7118  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801FA1DC 001F711C  7D 89 03 A6 */	mtctr r12
/* 801FA1E0 001F7120  4E 80 04 21 */	bctrl 
.L_801FA1E4:
/* 801FA1E4 001F7124  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FA1E8 001F7128  3B DE 00 01 */	addi r30, r30, 1
.L_801FA1EC:
/* 801FA1EC 001F712C  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FA1F0 001F7130  7C 1E 00 00 */	cmpw r30, r0
/* 801FA1F4 001F7134  41 80 FF C8 */	blt .L_801FA1BC
/* 801FA1F8 001F7138  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA1FC 001F713C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA200 001F7140  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FA204 001F7144  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FA208 001F7148  7C 08 03 A6 */	mtlr r0
/* 801FA20C 001F714C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA210 001F7150  4E 80 00 20 */	blr 

.global "doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff"
"doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff":
/* 801FA214 001F7154  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA218 001F7158  7C 08 02 A6 */	mflr r0
/* 801FA21C 001F715C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA220 001F7160  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801FA224 001F7164  FF E0 08 90 */	fmr f31, f1
/* 801FA228 001F7168  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801FA22C 001F716C  3B E0 00 00 */	li r31, 0
/* 801FA230 001F7170  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801FA234 001F7174  3B C0 00 00 */	li r30, 0
/* 801FA238 001F7178  93 A1 00 0C */	stw r29, 0xc(r1)
/* 801FA23C 001F717C  7C 7D 1B 78 */	mr r29, r3
/* 801FA240 001F7180  48 00 00 38 */	b .L_801FA278
.L_801FA244:
/* 801FA244 001F7184  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801FA248 001F7188  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FA24C 001F718C  28 00 00 00 */	cmplwi r0, 0
/* 801FA250 001F7190  40 82 00 20 */	bne .L_801FA270
/* 801FA254 001F7194  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801FA258 001F7198  FC 20 F8 90 */	fmr f1, f31
/* 801FA25C 001F719C  7C 60 FA 14 */	add r3, r0, r31
/* 801FA260 001F71A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA264 001F71A4  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801FA268 001F71A8  7D 89 03 A6 */	mtctr r12
/* 801FA26C 001F71AC  4E 80 04 21 */	bctrl 
.L_801FA270:
/* 801FA270 001F71B0  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FA274 001F71B4  3B DE 00 01 */	addi r30, r30, 1
.L_801FA278:
/* 801FA278 001F71B8  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801FA27C 001F71BC  7C 1E 00 00 */	cmpw r30, r0
/* 801FA280 001F71C0  41 80 FF C4 */	blt .L_801FA244
/* 801FA284 001F71C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA288 001F71C8  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801FA28C 001F71CC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801FA290 001F71D0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801FA294 001F71D4  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801FA298 001F71D8  7C 08 03 A6 */	mtlr r0
/* 801FA29C 001F71DC  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA2A0 001F71E0  4E 80 00 20 */	blr 

.global "doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
"doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics":
/* 801FA2A4 001F71E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA2A8 001F71E8  7C 08 02 A6 */	mflr r0
/* 801FA2AC 001F71EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA2B0 001F71F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA2B4 001F71F4  3B E0 00 00 */	li r31, 0
/* 801FA2B8 001F71F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FA2BC 001F71FC  3B C0 00 00 */	li r30, 0
/* 801FA2C0 001F7200  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FA2C4 001F7204  7C 9D 23 78 */	mr r29, r4
/* 801FA2C8 001F7208  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FA2CC 001F720C  7C 7C 1B 78 */	mr r28, r3
/* 801FA2D0 001F7210  48 00 00 38 */	b .L_801FA308
.L_801FA2D4:
/* 801FA2D4 001F7214  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801FA2D8 001F7218  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801FA2DC 001F721C  28 00 00 00 */	cmplwi r0, 0
/* 801FA2E0 001F7220  40 82 00 20 */	bne .L_801FA300
/* 801FA2E4 001F7224  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801FA2E8 001F7228  7F A4 EB 78 */	mr r4, r29
/* 801FA2EC 001F722C  7C 60 FA 14 */	add r3, r0, r31
/* 801FA2F0 001F7230  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA2F4 001F7234  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801FA2F8 001F7238  7D 89 03 A6 */	mtctr r12
/* 801FA2FC 001F723C  4E 80 04 21 */	bctrl 
.L_801FA300:
/* 801FA300 001F7240  3B FF 04 5C */	addi r31, r31, 0x45c
/* 801FA304 001F7244  3B DE 00 01 */	addi r30, r30, 1
.L_801FA308:
/* 801FA308 001F7248  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801FA30C 001F724C  7C 1E 00 00 */	cmpw r30, r0
/* 801FA310 001F7250  41 80 FF C4 */	blt .L_801FA2D4
/* 801FA314 001F7254  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA318 001F7258  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA31C 001F725C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FA320 001F7260  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FA324 001F7264  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FA328 001F7268  7C 08 03 A6 */	mtlr r0
/* 801FA32C 001F726C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA330 001F7270  4E 80 00 20 */	blr 

.global "clearMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"clearMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA334 001F7274  38 00 00 00 */	li r0, 0
/* 801FA338 001F7278  38 C0 00 00 */	li r6, 0
/* 801FA33C 001F727C  90 03 00 20 */	stw r0, 0x20(r3)
/* 801FA340 001F7280  38 A0 00 01 */	li r5, 1
/* 801FA344 001F7284  48 00 00 10 */	b .L_801FA354
.L_801FA348:
/* 801FA348 001F7288  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801FA34C 001F728C  7C A4 31 AE */	stbx r5, r4, r6
/* 801FA350 001F7290  38 C6 00 01 */	addi r6, r6, 1
.L_801FA354:
/* 801FA354 001F7294  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801FA358 001F7298  7C 06 00 00 */	cmpw r6, r0
/* 801FA35C 001F729C  41 80 FF EC */	blt .L_801FA348
/* 801FA360 001F72A0  4E 80 00 20 */	blr 

.global "onAlloc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"onAlloc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA364 001F72A4  4E 80 00 20 */	blr 

.global "getEmptyIndex__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"getEmptyIndex__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA368 001F72A8  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801FA36C 001F72AC  38 A0 00 00 */	li r5, 0
/* 801FA370 001F72B0  7C 09 03 A6 */	mtctr r0
/* 801FA374 001F72B4  2C 00 00 00 */	cmpwi r0, 0
/* 801FA378 001F72B8  40 81 00 24 */	ble .L_801FA39C
.L_801FA37C:
/* 801FA37C 001F72BC  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801FA380 001F72C0  7C 04 28 AE */	lbzx r0, r4, r5
/* 801FA384 001F72C4  28 00 00 01 */	cmplwi r0, 1
/* 801FA388 001F72C8  40 82 00 0C */	bne .L_801FA394
/* 801FA38C 001F72CC  7C A3 2B 78 */	mr r3, r5
/* 801FA390 001F72D0  4E 80 00 20 */	blr 
.L_801FA394:
/* 801FA394 001F72D4  38 A5 00 01 */	addi r5, r5, 1
/* 801FA398 001F72D8  42 00 FF E4 */	bdnz .L_801FA37C
.L_801FA39C:
/* 801FA39C 001F72DC  38 60 FF FF */	li r3, -1
/* 801FA3A0 001F72E0  4E 80 00 20 */	blr 

.global "get__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPv"
"get__43MonoObjectMgr<Q34Game12PelletNumber6Object>FPv":
/* 801FA3A4 001F72E4  1C 04 04 5C */	mulli r0, r4, 0x45c
/* 801FA3A8 001F72E8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801FA3AC 001F72EC  7C 63 02 14 */	add r3, r3, r0
/* 801FA3B0 001F72F0  4E 80 00 20 */	blr 

.global "getObject__39Container<Q34Game12PelletNumber6Object>FPv"
"getObject__39Container<Q34Game12PelletNumber6Object>FPv":
/* 801FA3B4 001F72F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FA3B8 001F72F8  7C 08 02 A6 */	mflr r0
/* 801FA3BC 001F72FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FA3C0 001F7300  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA3C4 001F7304  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA3C8 001F7308  7D 89 03 A6 */	mtctr r12
/* 801FA3CC 001F730C  4E 80 04 21 */	bctrl 
/* 801FA3D0 001F7310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FA3D4 001F7314  7C 08 03 A6 */	mtlr r0
/* 801FA3D8 001F7318  38 21 00 10 */	addi r1, r1, 0x10
/* 801FA3DC 001F731C  4E 80 00 20 */	blr 

.global "getAt__39Container<Q34Game12PelletNumber6Object>Fi"
"getAt__39Container<Q34Game12PelletNumber6Object>Fi":
/* 801FA3E0 001F7320  38 60 00 00 */	li r3, 0
/* 801FA3E4 001F7324  4E 80 00 20 */	blr 

.global "getTo__39Container<Q34Game12PelletNumber6Object>Fv"
"getTo__39Container<Q34Game12PelletNumber6Object>Fv":
/* 801FA3E8 001F7328  38 60 00 00 */	li r3, 0
/* 801FA3EC 001F732C  4E 80 00 20 */	blr 

.global "doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
"doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics":
/* 801FA3F0 001F7330  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA3F4 001F7334  7C 08 02 A6 */	mflr r0
/* 801FA3F8 001F7338  3C A0 80 4C */	lis r5, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@ha
/* 801FA3FC 001F733C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA400 001F7340  38 00 00 00 */	li r0, 0
/* 801FA404 001F7344  38 A5 DA B8 */	addi r5, r5, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@l
/* 801FA408 001F7348  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA40C 001F734C  28 00 00 00 */	cmplwi r0, 0
/* 801FA410 001F7350  7C 9F 23 78 */	mr r31, r4
/* 801FA414 001F7354  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FA418 001F7358  90 A1 00 08 */	stw r5, 8(r1)
/* 801FA41C 001F735C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FA420 001F7360  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FA424 001F7364  40 82 00 1C */	bne .L_801FA440
/* 801FA428 001F7368  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA42C 001F736C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FA430 001F7370  7D 89 03 A6 */	mtctr r12
/* 801FA434 001F7374  4E 80 04 21 */	bctrl 
/* 801FA438 001F7378  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA43C 001F737C  48 00 01 74 */	b .L_801FA5B0
.L_801FA440:
/* 801FA440 001F7380  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA444 001F7384  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FA448 001F7388  7D 89 03 A6 */	mtctr r12
/* 801FA44C 001F738C  4E 80 04 21 */	bctrl 
/* 801FA450 001F7390  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA454 001F7394  48 00 00 58 */	b .L_801FA4AC
.L_801FA458:
/* 801FA458 001F7398  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA45C 001F739C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA460 001F73A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA464 001F73A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA468 001F73A8  7D 89 03 A6 */	mtctr r12
/* 801FA46C 001F73AC  4E 80 04 21 */	bctrl 
/* 801FA470 001F73B0  7C 64 1B 78 */	mr r4, r3
/* 801FA474 001F73B4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FA478 001F73B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA47C 001F73BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FA480 001F73C0  7D 89 03 A6 */	mtctr r12
/* 801FA484 001F73C4  4E 80 04 21 */	bctrl 
/* 801FA488 001F73C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA48C 001F73CC  40 82 01 24 */	bne .L_801FA5B0
/* 801FA490 001F73D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA494 001F73D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA498 001F73D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA49C 001F73DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA4A0 001F73E0  7D 89 03 A6 */	mtctr r12
/* 801FA4A4 001F73E4  4E 80 04 21 */	bctrl 
/* 801FA4A8 001F73E8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FA4AC:
/* 801FA4AC 001F73EC  81 81 00 08 */	lwz r12, 8(r1)
/* 801FA4B0 001F73F0  38 61 00 08 */	addi r3, r1, 8
/* 801FA4B4 001F73F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FA4B8 001F73F8  7D 89 03 A6 */	mtctr r12
/* 801FA4BC 001F73FC  4E 80 04 21 */	bctrl 
/* 801FA4C0 001F7400  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA4C4 001F7404  41 82 FF 94 */	beq .L_801FA458
/* 801FA4C8 001F7408  48 00 00 E8 */	b .L_801FA5B0
.L_801FA4CC:
/* 801FA4CC 001F740C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA4D0 001F7410  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA4D4 001F7414  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA4D8 001F7418  7D 89 03 A6 */	mtctr r12
/* 801FA4DC 001F741C  4E 80 04 21 */	bctrl 
/* 801FA4E0 001F7420  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA4E4 001F7424  7F E4 FB 78 */	mr r4, r31
/* 801FA4E8 001F7428  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801FA4EC 001F742C  7D 89 03 A6 */	mtctr r12
/* 801FA4F0 001F7430  4E 80 04 21 */	bctrl 
/* 801FA4F4 001F7434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FA4F8 001F7438  28 00 00 00 */	cmplwi r0, 0
/* 801FA4FC 001F743C  40 82 00 24 */	bne .L_801FA520
/* 801FA500 001F7440  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA504 001F7444  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA508 001F7448  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA50C 001F744C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA510 001F7450  7D 89 03 A6 */	mtctr r12
/* 801FA514 001F7454  4E 80 04 21 */	bctrl 
/* 801FA518 001F7458  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA51C 001F745C  48 00 00 94 */	b .L_801FA5B0
.L_801FA520:
/* 801FA520 001F7460  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA524 001F7464  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA528 001F7468  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA52C 001F746C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA530 001F7470  7D 89 03 A6 */	mtctr r12
/* 801FA534 001F7474  4E 80 04 21 */	bctrl 
/* 801FA538 001F7478  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA53C 001F747C  48 00 00 58 */	b .L_801FA594
.L_801FA540:
/* 801FA540 001F7480  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA544 001F7484  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA548 001F7488  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA54C 001F748C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA550 001F7490  7D 89 03 A6 */	mtctr r12
/* 801FA554 001F7494  4E 80 04 21 */	bctrl 
/* 801FA558 001F7498  7C 64 1B 78 */	mr r4, r3
/* 801FA55C 001F749C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FA560 001F74A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA564 001F74A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FA568 001F74A8  7D 89 03 A6 */	mtctr r12
/* 801FA56C 001F74AC  4E 80 04 21 */	bctrl 
/* 801FA570 001F74B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA574 001F74B4  40 82 00 3C */	bne .L_801FA5B0
/* 801FA578 001F74B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA57C 001F74BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA580 001F74C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA584 001F74C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA588 001F74C8  7D 89 03 A6 */	mtctr r12
/* 801FA58C 001F74CC  4E 80 04 21 */	bctrl 
/* 801FA590 001F74D0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FA594:
/* 801FA594 001F74D4  81 81 00 08 */	lwz r12, 8(r1)
/* 801FA598 001F74D8  38 61 00 08 */	addi r3, r1, 8
/* 801FA59C 001F74DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FA5A0 001F74E0  7D 89 03 A6 */	mtctr r12
/* 801FA5A4 001F74E4  4E 80 04 21 */	bctrl 
/* 801FA5A8 001F74E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA5AC 001F74EC  41 82 FF 94 */	beq .L_801FA540
.L_801FA5B0:
/* 801FA5B0 001F74F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA5B4 001F74F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA5B8 001F74F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FA5BC 001F74FC  7D 89 03 A6 */	mtctr r12
/* 801FA5C0 001F7500  4E 80 04 21 */	bctrl 
/* 801FA5C4 001F7504  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA5C8 001F7508  7C 04 18 40 */	cmplw r4, r3
/* 801FA5CC 001F750C  40 82 FF 00 */	bne .L_801FA4CC
/* 801FA5D0 001F7510  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA5D4 001F7514  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA5D8 001F7518  7C 08 03 A6 */	mtlr r0
/* 801FA5DC 001F751C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA5E0 001F7520  4E 80 00 20 */	blr 

.global "isDone__38Iterator<Q34Game12PelletNumber6Object>Fv"
"isDone__38Iterator<Q34Game12PelletNumber6Object>Fv":
/* 801FA5E4 001F7524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FA5E8 001F7528  7C 08 02 A6 */	mflr r0
/* 801FA5EC 001F752C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FA5F0 001F7530  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FA5F4 001F7534  7C 7F 1B 78 */	mr r31, r3
/* 801FA5F8 001F7538  80 63 00 08 */	lwz r3, 8(r3)
/* 801FA5FC 001F753C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA600 001F7540  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FA604 001F7544  7D 89 03 A6 */	mtctr r12
/* 801FA608 001F7548  4E 80 04 21 */	bctrl 
/* 801FA60C 001F754C  80 1F 00 04 */	lwz r0, 4(r31)
/* 801FA610 001F7550  7C 00 18 50 */	subf r0, r0, r3
/* 801FA614 001F7554  7C 00 00 34 */	cntlzw r0, r0
/* 801FA618 001F7558  54 03 D9 7E */	srwi r3, r0, 5
/* 801FA61C 001F755C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FA620 001F7560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FA624 001F7564  7C 08 03 A6 */	mtlr r0
/* 801FA628 001F7568  38 21 00 10 */	addi r1, r1, 0x10
/* 801FA62C 001F756C  4E 80 00 20 */	blr 

.global "doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff"
"doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff":
/* 801FA630 001F7570  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA634 001F7574  7C 08 02 A6 */	mflr r0
/* 801FA638 001F7578  3C 80 80 4C */	lis r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@ha
/* 801FA63C 001F757C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA640 001F7580  38 00 00 00 */	li r0, 0
/* 801FA644 001F7584  38 84 DA B8 */	addi r4, r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@l
/* 801FA648 001F7588  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801FA64C 001F758C  FF E0 08 90 */	fmr f31, f1
/* 801FA650 001F7590  28 00 00 00 */	cmplwi r0, 0
/* 801FA654 001F7594  90 81 00 08 */	stw r4, 8(r1)
/* 801FA658 001F7598  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FA65C 001F759C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FA660 001F75A0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FA664 001F75A4  40 82 00 1C */	bne .L_801FA680
/* 801FA668 001F75A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA66C 001F75AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FA670 001F75B0  7D 89 03 A6 */	mtctr r12
/* 801FA674 001F75B4  4E 80 04 21 */	bctrl 
/* 801FA678 001F75B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA67C 001F75BC  48 00 01 74 */	b .L_801FA7F0
.L_801FA680:
/* 801FA680 001F75C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA684 001F75C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FA688 001F75C8  7D 89 03 A6 */	mtctr r12
/* 801FA68C 001F75CC  4E 80 04 21 */	bctrl 
/* 801FA690 001F75D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA694 001F75D4  48 00 00 58 */	b .L_801FA6EC
.L_801FA698:
/* 801FA698 001F75D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA69C 001F75DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA6A0 001F75E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA6A4 001F75E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA6A8 001F75E8  7D 89 03 A6 */	mtctr r12
/* 801FA6AC 001F75EC  4E 80 04 21 */	bctrl 
/* 801FA6B0 001F75F0  7C 64 1B 78 */	mr r4, r3
/* 801FA6B4 001F75F4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FA6B8 001F75F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA6BC 001F75FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FA6C0 001F7600  7D 89 03 A6 */	mtctr r12
/* 801FA6C4 001F7604  4E 80 04 21 */	bctrl 
/* 801FA6C8 001F7608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA6CC 001F760C  40 82 01 24 */	bne .L_801FA7F0
/* 801FA6D0 001F7610  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA6D4 001F7614  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA6D8 001F7618  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA6DC 001F761C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA6E0 001F7620  7D 89 03 A6 */	mtctr r12
/* 801FA6E4 001F7624  4E 80 04 21 */	bctrl 
/* 801FA6E8 001F7628  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FA6EC:
/* 801FA6EC 001F762C  81 81 00 08 */	lwz r12, 8(r1)
/* 801FA6F0 001F7630  38 61 00 08 */	addi r3, r1, 8
/* 801FA6F4 001F7634  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FA6F8 001F7638  7D 89 03 A6 */	mtctr r12
/* 801FA6FC 001F763C  4E 80 04 21 */	bctrl 
/* 801FA700 001F7640  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA704 001F7644  41 82 FF 94 */	beq .L_801FA698
/* 801FA708 001F7648  48 00 00 E8 */	b .L_801FA7F0
.L_801FA70C:
/* 801FA70C 001F764C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA710 001F7650  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA714 001F7654  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA718 001F7658  7D 89 03 A6 */	mtctr r12
/* 801FA71C 001F765C  4E 80 04 21 */	bctrl 
/* 801FA720 001F7660  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA724 001F7664  FC 20 F8 90 */	fmr f1, f31
/* 801FA728 001F7668  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801FA72C 001F766C  7D 89 03 A6 */	mtctr r12
/* 801FA730 001F7670  4E 80 04 21 */	bctrl 
/* 801FA734 001F7674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FA738 001F7678  28 00 00 00 */	cmplwi r0, 0
/* 801FA73C 001F767C  40 82 00 24 */	bne .L_801FA760
/* 801FA740 001F7680  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA744 001F7684  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA748 001F7688  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA74C 001F768C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA750 001F7690  7D 89 03 A6 */	mtctr r12
/* 801FA754 001F7694  4E 80 04 21 */	bctrl 
/* 801FA758 001F7698  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA75C 001F769C  48 00 00 94 */	b .L_801FA7F0
.L_801FA760:
/* 801FA760 001F76A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA764 001F76A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA768 001F76A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA76C 001F76AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA770 001F76B0  7D 89 03 A6 */	mtctr r12
/* 801FA774 001F76B4  4E 80 04 21 */	bctrl 
/* 801FA778 001F76B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA77C 001F76BC  48 00 00 58 */	b .L_801FA7D4
.L_801FA780:
/* 801FA780 001F76C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA784 001F76C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA788 001F76C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA78C 001F76CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA790 001F76D0  7D 89 03 A6 */	mtctr r12
/* 801FA794 001F76D4  4E 80 04 21 */	bctrl 
/* 801FA798 001F76D8  7C 64 1B 78 */	mr r4, r3
/* 801FA79C 001F76DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FA7A0 001F76E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA7A4 001F76E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FA7A8 001F76E8  7D 89 03 A6 */	mtctr r12
/* 801FA7AC 001F76EC  4E 80 04 21 */	bctrl 
/* 801FA7B0 001F76F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA7B4 001F76F4  40 82 00 3C */	bne .L_801FA7F0
/* 801FA7B8 001F76F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA7BC 001F76FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA7C0 001F7700  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA7C4 001F7704  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA7C8 001F7708  7D 89 03 A6 */	mtctr r12
/* 801FA7CC 001F770C  4E 80 04 21 */	bctrl 
/* 801FA7D0 001F7710  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FA7D4:
/* 801FA7D4 001F7714  81 81 00 08 */	lwz r12, 8(r1)
/* 801FA7D8 001F7718  38 61 00 08 */	addi r3, r1, 8
/* 801FA7DC 001F771C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FA7E0 001F7720  7D 89 03 A6 */	mtctr r12
/* 801FA7E4 001F7724  4E 80 04 21 */	bctrl 
/* 801FA7E8 001F7728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA7EC 001F772C  41 82 FF 94 */	beq .L_801FA780
.L_801FA7F0:
/* 801FA7F0 001F7730  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA7F4 001F7734  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA7F8 001F7738  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FA7FC 001F773C  7D 89 03 A6 */	mtctr r12
/* 801FA800 001F7740  4E 80 04 21 */	bctrl 
/* 801FA804 001F7744  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA808 001F7748  7C 04 18 40 */	cmplw r4, r3
/* 801FA80C 001F774C  40 82 FF 00 */	bne .L_801FA70C
/* 801FA810 001F7750  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA814 001F7754  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801FA818 001F7758  7C 08 03 A6 */	mtlr r0
/* 801FA81C 001F775C  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA820 001F7760  4E 80 00 20 */	blr 

.global "doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FA824 001F7764  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA828 001F7768  7C 08 02 A6 */	mflr r0
/* 801FA82C 001F776C  3C 80 80 4C */	lis r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@ha
/* 801FA830 001F7770  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA834 001F7774  38 00 00 00 */	li r0, 0
/* 801FA838 001F7778  38 84 DA B8 */	addi r4, r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@l
/* 801FA83C 001F777C  28 00 00 00 */	cmplwi r0, 0
/* 801FA840 001F7780  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FA844 001F7784  90 81 00 08 */	stw r4, 8(r1)
/* 801FA848 001F7788  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FA84C 001F778C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FA850 001F7790  40 82 00 1C */	bne .L_801FA86C
/* 801FA854 001F7794  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA858 001F7798  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FA85C 001F779C  7D 89 03 A6 */	mtctr r12
/* 801FA860 001F77A0  4E 80 04 21 */	bctrl 
/* 801FA864 001F77A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA868 001F77A8  48 00 01 70 */	b .L_801FA9D8
.L_801FA86C:
/* 801FA86C 001F77AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA870 001F77B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FA874 001F77B4  7D 89 03 A6 */	mtctr r12
/* 801FA878 001F77B8  4E 80 04 21 */	bctrl 
/* 801FA87C 001F77BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA880 001F77C0  48 00 00 58 */	b .L_801FA8D8
.L_801FA884:
/* 801FA884 001F77C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA888 001F77C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA88C 001F77CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA890 001F77D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA894 001F77D4  7D 89 03 A6 */	mtctr r12
/* 801FA898 001F77D8  4E 80 04 21 */	bctrl 
/* 801FA89C 001F77DC  7C 64 1B 78 */	mr r4, r3
/* 801FA8A0 001F77E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FA8A4 001F77E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA8A8 001F77E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FA8AC 001F77EC  7D 89 03 A6 */	mtctr r12
/* 801FA8B0 001F77F0  4E 80 04 21 */	bctrl 
/* 801FA8B4 001F77F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA8B8 001F77F8  40 82 01 20 */	bne .L_801FA9D8
/* 801FA8BC 001F77FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA8C0 001F7800  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA8C4 001F7804  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA8C8 001F7808  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA8CC 001F780C  7D 89 03 A6 */	mtctr r12
/* 801FA8D0 001F7810  4E 80 04 21 */	bctrl 
/* 801FA8D4 001F7814  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FA8D8:
/* 801FA8D8 001F7818  81 81 00 08 */	lwz r12, 8(r1)
/* 801FA8DC 001F781C  38 61 00 08 */	addi r3, r1, 8
/* 801FA8E0 001F7820  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FA8E4 001F7824  7D 89 03 A6 */	mtctr r12
/* 801FA8E8 001F7828  4E 80 04 21 */	bctrl 
/* 801FA8EC 001F782C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA8F0 001F7830  41 82 FF 94 */	beq .L_801FA884
/* 801FA8F4 001F7834  48 00 00 E4 */	b .L_801FA9D8
.L_801FA8F8:
/* 801FA8F8 001F7838  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA8FC 001F783C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA900 001F7840  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA904 001F7844  7D 89 03 A6 */	mtctr r12
/* 801FA908 001F7848  4E 80 04 21 */	bctrl 
/* 801FA90C 001F784C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA910 001F7850  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801FA914 001F7854  7D 89 03 A6 */	mtctr r12
/* 801FA918 001F7858  4E 80 04 21 */	bctrl 
/* 801FA91C 001F785C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FA920 001F7860  28 00 00 00 */	cmplwi r0, 0
/* 801FA924 001F7864  40 82 00 24 */	bne .L_801FA948
/* 801FA928 001F7868  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA92C 001F786C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA930 001F7870  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA934 001F7874  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA938 001F7878  7D 89 03 A6 */	mtctr r12
/* 801FA93C 001F787C  4E 80 04 21 */	bctrl 
/* 801FA940 001F7880  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA944 001F7884  48 00 00 94 */	b .L_801FA9D8
.L_801FA948:
/* 801FA948 001F7888  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA94C 001F788C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA950 001F7890  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA954 001F7894  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA958 001F7898  7D 89 03 A6 */	mtctr r12
/* 801FA95C 001F789C  4E 80 04 21 */	bctrl 
/* 801FA960 001F78A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FA964 001F78A4  48 00 00 58 */	b .L_801FA9BC
.L_801FA968:
/* 801FA968 001F78A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA96C 001F78AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA970 001F78B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA974 001F78B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FA978 001F78B8  7D 89 03 A6 */	mtctr r12
/* 801FA97C 001F78BC  4E 80 04 21 */	bctrl 
/* 801FA980 001F78C0  7C 64 1B 78 */	mr r4, r3
/* 801FA984 001F78C4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FA988 001F78C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA98C 001F78CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FA990 001F78D0  7D 89 03 A6 */	mtctr r12
/* 801FA994 001F78D4  4E 80 04 21 */	bctrl 
/* 801FA998 001F78D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA99C 001F78DC  40 82 00 3C */	bne .L_801FA9D8
/* 801FA9A0 001F78E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA9A4 001F78E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA9A8 001F78E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA9AC 001F78EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FA9B0 001F78F0  7D 89 03 A6 */	mtctr r12
/* 801FA9B4 001F78F4  4E 80 04 21 */	bctrl 
/* 801FA9B8 001F78F8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FA9BC:
/* 801FA9BC 001F78FC  81 81 00 08 */	lwz r12, 8(r1)
/* 801FA9C0 001F7900  38 61 00 08 */	addi r3, r1, 8
/* 801FA9C4 001F7904  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FA9C8 001F7908  7D 89 03 A6 */	mtctr r12
/* 801FA9CC 001F790C  4E 80 04 21 */	bctrl 
/* 801FA9D0 001F7910  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FA9D4 001F7914  41 82 FF 94 */	beq .L_801FA968
.L_801FA9D8:
/* 801FA9D8 001F7918  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FA9DC 001F791C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FA9E0 001F7920  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FA9E4 001F7924  7D 89 03 A6 */	mtctr r12
/* 801FA9E8 001F7928  4E 80 04 21 */	bctrl 
/* 801FA9EC 001F792C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FA9F0 001F7930  7C 04 18 40 */	cmplw r4, r3
/* 801FA9F4 001F7934  40 82 FF 04 */	bne .L_801FA8F8
/* 801FA9F8 001F7938  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA9FC 001F793C  7C 08 03 A6 */	mtlr r0
/* 801FAA00 001F7940  38 21 00 20 */	addi r1, r1, 0x20
/* 801FAA04 001F7944  4E 80 00 20 */	blr 

.global "doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi"
"doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FAA08 001F7948  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FAA0C 001F794C  7C 08 02 A6 */	mflr r0
/* 801FAA10 001F7950  3C A0 80 4C */	lis r5, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@ha
/* 801FAA14 001F7954  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FAA18 001F7958  38 00 00 00 */	li r0, 0
/* 801FAA1C 001F795C  38 A5 DA B8 */	addi r5, r5, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@l
/* 801FAA20 001F7960  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FAA24 001F7964  28 00 00 00 */	cmplwi r0, 0
/* 801FAA28 001F7968  7C 9F 23 78 */	mr r31, r4
/* 801FAA2C 001F796C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FAA30 001F7970  90 A1 00 08 */	stw r5, 8(r1)
/* 801FAA34 001F7974  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FAA38 001F7978  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FAA3C 001F797C  40 82 00 1C */	bne .L_801FAA58
/* 801FAA40 001F7980  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAA44 001F7984  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FAA48 001F7988  7D 89 03 A6 */	mtctr r12
/* 801FAA4C 001F798C  4E 80 04 21 */	bctrl 
/* 801FAA50 001F7990  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAA54 001F7994  48 00 01 74 */	b .L_801FABC8
.L_801FAA58:
/* 801FAA58 001F7998  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAA5C 001F799C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FAA60 001F79A0  7D 89 03 A6 */	mtctr r12
/* 801FAA64 001F79A4  4E 80 04 21 */	bctrl 
/* 801FAA68 001F79A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAA6C 001F79AC  48 00 00 58 */	b .L_801FAAC4
.L_801FAA70:
/* 801FAA70 001F79B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAA74 001F79B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAA78 001F79B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAA7C 001F79BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAA80 001F79C0  7D 89 03 A6 */	mtctr r12
/* 801FAA84 001F79C4  4E 80 04 21 */	bctrl 
/* 801FAA88 001F79C8  7C 64 1B 78 */	mr r4, r3
/* 801FAA8C 001F79CC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FAA90 001F79D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAA94 001F79D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FAA98 001F79D8  7D 89 03 A6 */	mtctr r12
/* 801FAA9C 001F79DC  4E 80 04 21 */	bctrl 
/* 801FAAA0 001F79E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAAA4 001F79E4  40 82 01 24 */	bne .L_801FABC8
/* 801FAAA8 001F79E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAAAC 001F79EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAAB0 001F79F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAAB4 001F79F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAAB8 001F79F8  7D 89 03 A6 */	mtctr r12
/* 801FAABC 001F79FC  4E 80 04 21 */	bctrl 
/* 801FAAC0 001F7A00  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FAAC4:
/* 801FAAC4 001F7A04  81 81 00 08 */	lwz r12, 8(r1)
/* 801FAAC8 001F7A08  38 61 00 08 */	addi r3, r1, 8
/* 801FAACC 001F7A0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FAAD0 001F7A10  7D 89 03 A6 */	mtctr r12
/* 801FAAD4 001F7A14  4E 80 04 21 */	bctrl 
/* 801FAAD8 001F7A18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAADC 001F7A1C  41 82 FF 94 */	beq .L_801FAA70
/* 801FAAE0 001F7A20  48 00 00 E8 */	b .L_801FABC8
.L_801FAAE4:
/* 801FAAE4 001F7A24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAAE8 001F7A28  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAAEC 001F7A2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAAF0 001F7A30  7D 89 03 A6 */	mtctr r12
/* 801FAAF4 001F7A34  4E 80 04 21 */	bctrl 
/* 801FAAF8 001F7A38  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAAFC 001F7A3C  7F E4 FB 78 */	mr r4, r31
/* 801FAB00 001F7A40  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801FAB04 001F7A44  7D 89 03 A6 */	mtctr r12
/* 801FAB08 001F7A48  4E 80 04 21 */	bctrl 
/* 801FAB0C 001F7A4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FAB10 001F7A50  28 00 00 00 */	cmplwi r0, 0
/* 801FAB14 001F7A54  40 82 00 24 */	bne .L_801FAB38
/* 801FAB18 001F7A58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAB1C 001F7A5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAB20 001F7A60  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAB24 001F7A64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAB28 001F7A68  7D 89 03 A6 */	mtctr r12
/* 801FAB2C 001F7A6C  4E 80 04 21 */	bctrl 
/* 801FAB30 001F7A70  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAB34 001F7A74  48 00 00 94 */	b .L_801FABC8
.L_801FAB38:
/* 801FAB38 001F7A78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAB3C 001F7A7C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAB40 001F7A80  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAB44 001F7A84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAB48 001F7A88  7D 89 03 A6 */	mtctr r12
/* 801FAB4C 001F7A8C  4E 80 04 21 */	bctrl 
/* 801FAB50 001F7A90  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAB54 001F7A94  48 00 00 58 */	b .L_801FABAC
.L_801FAB58:
/* 801FAB58 001F7A98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAB5C 001F7A9C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAB60 001F7AA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAB64 001F7AA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAB68 001F7AA8  7D 89 03 A6 */	mtctr r12
/* 801FAB6C 001F7AAC  4E 80 04 21 */	bctrl 
/* 801FAB70 001F7AB0  7C 64 1B 78 */	mr r4, r3
/* 801FAB74 001F7AB4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FAB78 001F7AB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAB7C 001F7ABC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FAB80 001F7AC0  7D 89 03 A6 */	mtctr r12
/* 801FAB84 001F7AC4  4E 80 04 21 */	bctrl 
/* 801FAB88 001F7AC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAB8C 001F7ACC  40 82 00 3C */	bne .L_801FABC8
/* 801FAB90 001F7AD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAB94 001F7AD4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAB98 001F7AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAB9C 001F7ADC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FABA0 001F7AE0  7D 89 03 A6 */	mtctr r12
/* 801FABA4 001F7AE4  4E 80 04 21 */	bctrl 
/* 801FABA8 001F7AE8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FABAC:
/* 801FABAC 001F7AEC  81 81 00 08 */	lwz r12, 8(r1)
/* 801FABB0 001F7AF0  38 61 00 08 */	addi r3, r1, 8
/* 801FABB4 001F7AF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FABB8 001F7AF8  7D 89 03 A6 */	mtctr r12
/* 801FABBC 001F7AFC  4E 80 04 21 */	bctrl 
/* 801FABC0 001F7B00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FABC4 001F7B04  41 82 FF 94 */	beq .L_801FAB58
.L_801FABC8:
/* 801FABC8 001F7B08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FABCC 001F7B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FABD0 001F7B10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FABD4 001F7B14  7D 89 03 A6 */	mtctr r12
/* 801FABD8 001F7B18  4E 80 04 21 */	bctrl 
/* 801FABDC 001F7B1C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FABE0 001F7B20  7C 04 18 40 */	cmplw r4, r3
/* 801FABE4 001F7B24  40 82 FF 00 */	bne .L_801FAAE4
/* 801FABE8 001F7B28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FABEC 001F7B2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FABF0 001F7B30  7C 08 03 A6 */	mtlr r0
/* 801FABF4 001F7B34  38 21 00 20 */	addi r1, r1, 0x20
/* 801FABF8 001F7B38  4E 80 00 20 */	blr 

.global "doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FABFC 001F7B3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FAC00 001F7B40  7C 08 02 A6 */	mflr r0
/* 801FAC04 001F7B44  3C 80 80 4C */	lis r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@ha
/* 801FAC08 001F7B48  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FAC0C 001F7B4C  38 00 00 00 */	li r0, 0
/* 801FAC10 001F7B50  38 84 DA B8 */	addi r4, r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@l
/* 801FAC14 001F7B54  28 00 00 00 */	cmplwi r0, 0
/* 801FAC18 001F7B58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FAC1C 001F7B5C  90 81 00 08 */	stw r4, 8(r1)
/* 801FAC20 001F7B60  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FAC24 001F7B64  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FAC28 001F7B68  40 82 00 1C */	bne .L_801FAC44
/* 801FAC2C 001F7B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAC30 001F7B70  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FAC34 001F7B74  7D 89 03 A6 */	mtctr r12
/* 801FAC38 001F7B78  4E 80 04 21 */	bctrl 
/* 801FAC3C 001F7B7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAC40 001F7B80  48 00 01 70 */	b .L_801FADB0
.L_801FAC44:
/* 801FAC44 001F7B84  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAC48 001F7B88  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FAC4C 001F7B8C  7D 89 03 A6 */	mtctr r12
/* 801FAC50 001F7B90  4E 80 04 21 */	bctrl 
/* 801FAC54 001F7B94  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAC58 001F7B98  48 00 00 58 */	b .L_801FACB0
.L_801FAC5C:
/* 801FAC5C 001F7B9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAC60 001F7BA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAC64 001F7BA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAC68 001F7BA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAC6C 001F7BAC  7D 89 03 A6 */	mtctr r12
/* 801FAC70 001F7BB0  4E 80 04 21 */	bctrl 
/* 801FAC74 001F7BB4  7C 64 1B 78 */	mr r4, r3
/* 801FAC78 001F7BB8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FAC7C 001F7BBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAC80 001F7BC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FAC84 001F7BC4  7D 89 03 A6 */	mtctr r12
/* 801FAC88 001F7BC8  4E 80 04 21 */	bctrl 
/* 801FAC8C 001F7BCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAC90 001F7BD0  40 82 01 20 */	bne .L_801FADB0
/* 801FAC94 001F7BD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAC98 001F7BD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAC9C 001F7BDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FACA0 001F7BE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FACA4 001F7BE4  7D 89 03 A6 */	mtctr r12
/* 801FACA8 001F7BE8  4E 80 04 21 */	bctrl 
/* 801FACAC 001F7BEC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FACB0:
/* 801FACB0 001F7BF0  81 81 00 08 */	lwz r12, 8(r1)
/* 801FACB4 001F7BF4  38 61 00 08 */	addi r3, r1, 8
/* 801FACB8 001F7BF8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FACBC 001F7BFC  7D 89 03 A6 */	mtctr r12
/* 801FACC0 001F7C00  4E 80 04 21 */	bctrl 
/* 801FACC4 001F7C04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FACC8 001F7C08  41 82 FF 94 */	beq .L_801FAC5C
/* 801FACCC 001F7C0C  48 00 00 E4 */	b .L_801FADB0
.L_801FACD0:
/* 801FACD0 001F7C10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FACD4 001F7C14  81 83 00 00 */	lwz r12, 0(r3)
/* 801FACD8 001F7C18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FACDC 001F7C1C  7D 89 03 A6 */	mtctr r12
/* 801FACE0 001F7C20  4E 80 04 21 */	bctrl 
/* 801FACE4 001F7C24  81 83 00 00 */	lwz r12, 0(r3)
/* 801FACE8 001F7C28  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801FACEC 001F7C2C  7D 89 03 A6 */	mtctr r12
/* 801FACF0 001F7C30  4E 80 04 21 */	bctrl 
/* 801FACF4 001F7C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FACF8 001F7C38  28 00 00 00 */	cmplwi r0, 0
/* 801FACFC 001F7C3C  40 82 00 24 */	bne .L_801FAD20
/* 801FAD00 001F7C40  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAD04 001F7C44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAD08 001F7C48  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAD0C 001F7C4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAD10 001F7C50  7D 89 03 A6 */	mtctr r12
/* 801FAD14 001F7C54  4E 80 04 21 */	bctrl 
/* 801FAD18 001F7C58  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAD1C 001F7C5C  48 00 00 94 */	b .L_801FADB0
.L_801FAD20:
/* 801FAD20 001F7C60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAD24 001F7C64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAD28 001F7C68  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAD2C 001F7C6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAD30 001F7C70  7D 89 03 A6 */	mtctr r12
/* 801FAD34 001F7C74  4E 80 04 21 */	bctrl 
/* 801FAD38 001F7C78  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAD3C 001F7C7C  48 00 00 58 */	b .L_801FAD94
.L_801FAD40:
/* 801FAD40 001F7C80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAD44 001F7C84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAD48 001F7C88  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAD4C 001F7C8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAD50 001F7C90  7D 89 03 A6 */	mtctr r12
/* 801FAD54 001F7C94  4E 80 04 21 */	bctrl 
/* 801FAD58 001F7C98  7C 64 1B 78 */	mr r4, r3
/* 801FAD5C 001F7C9C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FAD60 001F7CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAD64 001F7CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FAD68 001F7CA8  7D 89 03 A6 */	mtctr r12
/* 801FAD6C 001F7CAC  4E 80 04 21 */	bctrl 
/* 801FAD70 001F7CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAD74 001F7CB4  40 82 00 3C */	bne .L_801FADB0
/* 801FAD78 001F7CB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAD7C 001F7CBC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAD80 001F7CC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAD84 001F7CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAD88 001F7CC8  7D 89 03 A6 */	mtctr r12
/* 801FAD8C 001F7CCC  4E 80 04 21 */	bctrl 
/* 801FAD90 001F7CD0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FAD94:
/* 801FAD94 001F7CD4  81 81 00 08 */	lwz r12, 8(r1)
/* 801FAD98 001F7CD8  38 61 00 08 */	addi r3, r1, 8
/* 801FAD9C 001F7CDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FADA0 001F7CE0  7D 89 03 A6 */	mtctr r12
/* 801FADA4 001F7CE4  4E 80 04 21 */	bctrl 
/* 801FADA8 001F7CE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FADAC 001F7CEC  41 82 FF 94 */	beq .L_801FAD40
.L_801FADB0:
/* 801FADB0 001F7CF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FADB4 001F7CF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FADB8 001F7CF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FADBC 001F7CFC  7D 89 03 A6 */	mtctr r12
/* 801FADC0 001F7D00  4E 80 04 21 */	bctrl 
/* 801FADC4 001F7D04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FADC8 001F7D08  7C 04 18 40 */	cmplw r4, r3
/* 801FADCC 001F7D0C  40 82 FF 04 */	bne .L_801FACD0
/* 801FADD0 001F7D10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FADD4 001F7D14  7C 08 03 A6 */	mtlr r0
/* 801FADD8 001F7D18  38 21 00 20 */	addi r1, r1, 0x20
/* 801FADDC 001F7D1C  4E 80 00 20 */	blr 

.global "doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FADE0 001F7D20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FADE4 001F7D24  7C 08 02 A6 */	mflr r0
/* 801FADE8 001F7D28  3C 80 80 4C */	lis r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@ha
/* 801FADEC 001F7D2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FADF0 001F7D30  38 00 00 00 */	li r0, 0
/* 801FADF4 001F7D34  38 84 DA B8 */	addi r4, r4, "__vt__38Iterator<Q34Game12PelletNumber6Object>"@l
/* 801FADF8 001F7D38  28 00 00 00 */	cmplwi r0, 0
/* 801FADFC 001F7D3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FAE00 001F7D40  90 81 00 08 */	stw r4, 8(r1)
/* 801FAE04 001F7D44  90 01 00 0C */	stw r0, 0xc(r1)
/* 801FAE08 001F7D48  90 61 00 10 */	stw r3, 0x10(r1)
/* 801FAE0C 001F7D4C  40 82 00 1C */	bne .L_801FAE28
/* 801FAE10 001F7D50  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAE14 001F7D54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FAE18 001F7D58  7D 89 03 A6 */	mtctr r12
/* 801FAE1C 001F7D5C  4E 80 04 21 */	bctrl 
/* 801FAE20 001F7D60  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAE24 001F7D64  48 00 01 70 */	b .L_801FAF94
.L_801FAE28:
/* 801FAE28 001F7D68  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAE2C 001F7D6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FAE30 001F7D70  7D 89 03 A6 */	mtctr r12
/* 801FAE34 001F7D74  4E 80 04 21 */	bctrl 
/* 801FAE38 001F7D78  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAE3C 001F7D7C  48 00 00 58 */	b .L_801FAE94
.L_801FAE40:
/* 801FAE40 001F7D80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAE44 001F7D84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAE48 001F7D88  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAE4C 001F7D8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAE50 001F7D90  7D 89 03 A6 */	mtctr r12
/* 801FAE54 001F7D94  4E 80 04 21 */	bctrl 
/* 801FAE58 001F7D98  7C 64 1B 78 */	mr r4, r3
/* 801FAE5C 001F7D9C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FAE60 001F7DA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAE64 001F7DA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FAE68 001F7DA8  7D 89 03 A6 */	mtctr r12
/* 801FAE6C 001F7DAC  4E 80 04 21 */	bctrl 
/* 801FAE70 001F7DB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAE74 001F7DB4  40 82 01 20 */	bne .L_801FAF94
/* 801FAE78 001F7DB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAE7C 001F7DBC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAE80 001F7DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAE84 001F7DC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAE88 001F7DC8  7D 89 03 A6 */	mtctr r12
/* 801FAE8C 001F7DCC  4E 80 04 21 */	bctrl 
/* 801FAE90 001F7DD0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FAE94:
/* 801FAE94 001F7DD4  81 81 00 08 */	lwz r12, 8(r1)
/* 801FAE98 001F7DD8  38 61 00 08 */	addi r3, r1, 8
/* 801FAE9C 001F7DDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FAEA0 001F7DE0  7D 89 03 A6 */	mtctr r12
/* 801FAEA4 001F7DE4  4E 80 04 21 */	bctrl 
/* 801FAEA8 001F7DE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAEAC 001F7DEC  41 82 FF 94 */	beq .L_801FAE40
/* 801FAEB0 001F7DF0  48 00 00 E4 */	b .L_801FAF94
.L_801FAEB4:
/* 801FAEB4 001F7DF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAEB8 001F7DF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAEBC 001F7DFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAEC0 001F7E00  7D 89 03 A6 */	mtctr r12
/* 801FAEC4 001F7E04  4E 80 04 21 */	bctrl 
/* 801FAEC8 001F7E08  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAECC 001F7E0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801FAED0 001F7E10  7D 89 03 A6 */	mtctr r12
/* 801FAED4 001F7E14  4E 80 04 21 */	bctrl 
/* 801FAED8 001F7E18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FAEDC 001F7E1C  28 00 00 00 */	cmplwi r0, 0
/* 801FAEE0 001F7E20  40 82 00 24 */	bne .L_801FAF04
/* 801FAEE4 001F7E24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAEE8 001F7E28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAEEC 001F7E2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAEF0 001F7E30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAEF4 001F7E34  7D 89 03 A6 */	mtctr r12
/* 801FAEF8 001F7E38  4E 80 04 21 */	bctrl 
/* 801FAEFC 001F7E3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAF00 001F7E40  48 00 00 94 */	b .L_801FAF94
.L_801FAF04:
/* 801FAF04 001F7E44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAF08 001F7E48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAF0C 001F7E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAF10 001F7E50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAF14 001F7E54  7D 89 03 A6 */	mtctr r12
/* 801FAF18 001F7E58  4E 80 04 21 */	bctrl 
/* 801FAF1C 001F7E5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801FAF20 001F7E60  48 00 00 58 */	b .L_801FAF78
.L_801FAF24:
/* 801FAF24 001F7E64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAF28 001F7E68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAF2C 001F7E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAF30 001F7E70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FAF34 001F7E74  7D 89 03 A6 */	mtctr r12
/* 801FAF38 001F7E78  4E 80 04 21 */	bctrl 
/* 801FAF3C 001F7E7C  7C 64 1B 78 */	mr r4, r3
/* 801FAF40 001F7E80  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801FAF44 001F7E84  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAF48 001F7E88  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FAF4C 001F7E8C  7D 89 03 A6 */	mtctr r12
/* 801FAF50 001F7E90  4E 80 04 21 */	bctrl 
/* 801FAF54 001F7E94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAF58 001F7E98  40 82 00 3C */	bne .L_801FAF94
/* 801FAF5C 001F7E9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAF60 001F7EA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAF64 001F7EA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAF68 001F7EA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FAF6C 001F7EAC  7D 89 03 A6 */	mtctr r12
/* 801FAF70 001F7EB0  4E 80 04 21 */	bctrl 
/* 801FAF74 001F7EB4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801FAF78:
/* 801FAF78 001F7EB8  81 81 00 08 */	lwz r12, 8(r1)
/* 801FAF7C 001F7EBC  38 61 00 08 */	addi r3, r1, 8
/* 801FAF80 001F7EC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FAF84 001F7EC4  7D 89 03 A6 */	mtctr r12
/* 801FAF88 001F7EC8  4E 80 04 21 */	bctrl 
/* 801FAF8C 001F7ECC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FAF90 001F7ED0  41 82 FF 94 */	beq .L_801FAF24
.L_801FAF94:
/* 801FAF94 001F7ED4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAF98 001F7ED8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FAF9C 001F7EDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FAFA0 001F7EE0  7D 89 03 A6 */	mtctr r12
/* 801FAFA4 001F7EE4  4E 80 04 21 */	bctrl 
/* 801FAFA8 001F7EE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801FAFAC 001F7EEC  7C 04 18 40 */	cmplw r4, r3
/* 801FAFB0 001F7EF0  40 82 FF 04 */	bne .L_801FAEB4
/* 801FAFB4 001F7EF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FAFB8 001F7EF8  7C 08 03 A6 */	mtlr r0
/* 801FAFBC 001F7EFC  38 21 00 20 */	addi r1, r1, 0x20
/* 801FAFC0 001F7F00  4E 80 00 20 */	blr 

.global "alloc__24MonoObjectMgr<8CollPart>Fi"
"alloc__24MonoObjectMgr<8CollPart>Fi":
/* 801FAFC4 001F7F04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FAFC8 001F7F08  7C 08 02 A6 */	mflr r0
/* 801FAFCC 001F7F0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FAFD0 001F7F10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FAFD4 001F7F14  7C 9F 23 78 */	mr r31, r4
/* 801FAFD8 001F7F18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FAFDC 001F7F1C  7C 7E 1B 78 */	mr r30, r3
/* 801FAFE0 001F7F20  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FAFE4 001F7F24  7F FD FB 78 */	mr r29, r31
/* 801FAFE8 001F7F28  1C 7D 00 64 */	mulli r3, r29, 0x64
/* 801FAFEC 001F7F2C  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FAFF0 001F7F30  38 63 00 10 */	addi r3, r3, 0x10
/* 801FAFF4 001F7F34  4B E2 8F B9 */	bl __nwa__FUl
/* 801FAFF8 001F7F38  3C 80 80 13 */	lis r4, __ct__8CollPartFv@ha
/* 801FAFFC 001F7F3C  3C A0 80 14 */	lis r5, __dt__8CollPartFv@ha
/* 801FB000 001F7F40  38 84 6C D8 */	addi r4, r4, __ct__8CollPartFv@l
/* 801FB004 001F7F44  7F A7 EB 78 */	mr r7, r29
/* 801FB008 001F7F48  38 A5 84 68 */	addi r5, r5, __dt__8CollPartFv@l
/* 801FB00C 001F7F4C  38 C0 00 64 */	li r6, 0x64
/* 801FB010 001F7F50  4B EC 69 E1 */	bl __construct_new_array
/* 801FB014 001F7F54  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801FB018 001F7F58  38 00 00 00 */	li r0, 0
/* 801FB01C 001F7F5C  7F A3 EB 78 */	mr r3, r29
/* 801FB020 001F7F60  93 FE 00 24 */	stw r31, 0x24(r30)
/* 801FB024 001F7F64  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801FB028 001F7F68  4B E2 8F 85 */	bl __nwa__FUl
/* 801FB02C 001F7F6C  2C 1F 00 00 */	cmpwi r31, 0
/* 801FB030 001F7F70  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 801FB034 001F7F74  39 60 00 00 */	li r11, 0
/* 801FB038 001F7F78  40 81 00 B0 */	ble .L_801FB0E8
/* 801FB03C 001F7F7C  2C 1F 00 08 */	cmpwi r31, 8
/* 801FB040 001F7F80  38 7F FF F8 */	addi r3, r31, -8
/* 801FB044 001F7F84  40 81 00 80 */	ble .L_801FB0C4
/* 801FB048 001F7F88  38 03 00 07 */	addi r0, r3, 7
/* 801FB04C 001F7F8C  54 00 E8 FE */	srwi r0, r0, 3
/* 801FB050 001F7F90  7C 09 03 A6 */	mtctr r0
/* 801FB054 001F7F94  2C 03 00 00 */	cmpwi r3, 0
/* 801FB058 001F7F98  40 81 00 6C */	ble .L_801FB0C4
.L_801FB05C:
/* 801FB05C 001F7F9C  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FB060 001F7FA0  39 40 00 01 */	li r10, 1
/* 801FB064 001F7FA4  39 0B 00 01 */	addi r8, r11, 1
/* 801FB068 001F7FA8  38 EB 00 02 */	addi r7, r11, 2
/* 801FB06C 001F7FAC  7D 43 59 AE */	stbx r10, r3, r11
/* 801FB070 001F7FB0  38 CB 00 03 */	addi r6, r11, 3
/* 801FB074 001F7FB4  38 AB 00 04 */	addi r5, r11, 4
/* 801FB078 001F7FB8  38 8B 00 05 */	addi r4, r11, 5
/* 801FB07C 001F7FBC  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 801FB080 001F7FC0  38 6B 00 06 */	addi r3, r11, 6
/* 801FB084 001F7FC4  38 0B 00 07 */	addi r0, r11, 7
/* 801FB088 001F7FC8  39 6B 00 08 */	addi r11, r11, 8
/* 801FB08C 001F7FCC  7D 49 41 AE */	stbx r10, r9, r8
/* 801FB090 001F7FD0  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 801FB094 001F7FD4  7D 48 39 AE */	stbx r10, r8, r7
/* 801FB098 001F7FD8  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 801FB09C 001F7FDC  7D 47 31 AE */	stbx r10, r7, r6
/* 801FB0A0 001F7FE0  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 801FB0A4 001F7FE4  7D 46 29 AE */	stbx r10, r6, r5
/* 801FB0A8 001F7FE8  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 801FB0AC 001F7FEC  7D 45 21 AE */	stbx r10, r5, r4
/* 801FB0B0 001F7FF0  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 801FB0B4 001F7FF4  7D 44 19 AE */	stbx r10, r4, r3
/* 801FB0B8 001F7FF8  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FB0BC 001F7FFC  7D 43 01 AE */	stbx r10, r3, r0
/* 801FB0C0 001F8000  42 00 FF 9C */	bdnz .L_801FB05C
.L_801FB0C4:
/* 801FB0C4 001F8004  7C 0B F8 50 */	subf r0, r11, r31
/* 801FB0C8 001F8008  38 80 00 01 */	li r4, 1
/* 801FB0CC 001F800C  7C 09 03 A6 */	mtctr r0
/* 801FB0D0 001F8010  7C 0B F8 00 */	cmpw r11, r31
/* 801FB0D4 001F8014  40 80 00 14 */	bge .L_801FB0E8
.L_801FB0D8:
/* 801FB0D8 001F8018  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FB0DC 001F801C  7C 83 59 AE */	stbx r4, r3, r11
/* 801FB0E0 001F8020  39 6B 00 01 */	addi r11, r11, 1
/* 801FB0E4 001F8024  42 00 FF F4 */	bdnz .L_801FB0D8
.L_801FB0E8:
/* 801FB0E8 001F8028  7F C3 F3 78 */	mr r3, r30
/* 801FB0EC 001F802C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801FB0F0 001F8030  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801FB0F4 001F8034  7D 89 03 A6 */	mtctr r12
/* 801FB0F8 001F8038  4E 80 04 21 */	bctrl 
/* 801FB0FC 001F803C  3B 80 00 00 */	li r28, 0
/* 801FB100 001F8040  3B A0 00 00 */	li r29, 0
/* 801FB104 001F8044  48 00 00 24 */	b .L_801FB128
.L_801FB108:
/* 801FB108 001F8048  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 801FB10C 001F804C  7C 60 EA 14 */	add r3, r0, r29
/* 801FB110 001F8050  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB114 001F8054  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FB118 001F8058  7D 89 03 A6 */	mtctr r12
/* 801FB11C 001F805C  4E 80 04 21 */	bctrl 
/* 801FB120 001F8060  3B BD 00 64 */	addi r29, r29, 0x64
/* 801FB124 001F8064  3B 9C 00 01 */	addi r28, r28, 1
.L_801FB128:
/* 801FB128 001F8068  7C 1C F8 00 */	cmpw r28, r31
/* 801FB12C 001F806C  41 80 FF DC */	blt .L_801FB108
/* 801FB130 001F8070  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FB134 001F8074  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FB138 001F8078  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FB13C 001F807C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FB140 001F8080  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FB144 001F8084  7C 08 03 A6 */	mtlr r0
/* 801FB148 001F8088  38 21 00 20 */	addi r1, r1, 0x20
/* 801FB14C 001F808C  4E 80 00 20 */	blr 

.global "__ct__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"__ct__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB150 001F8090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB154 001F8094  7C 08 02 A6 */	mflr r0
/* 801FB158 001F8098  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB15C 001F809C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FB160 001F80A0  7C 7F 1B 78 */	mr r31, r3
/* 801FB164 001F80A4  48 21 62 2D */	bl __ct__5CNodeFv
/* 801FB168 001F80A8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801FB16C 001F80AC  3C 60 80 4C */	lis r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@ha
/* 801FB170 001F80B0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801FB174 001F80B4  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 801FB178 001F80B8  90 1F 00 00 */	stw r0, 0(r31)
/* 801FB17C 001F80BC  38 03 D8 64 */	addi r0, r3, "__vt__39Container<Q34Game12PelletNumber6Object>"@l
/* 801FB180 001F80C0  3C 80 80 4C */	lis r4, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801FB184 001F80C4  3C 60 80 4C */	lis r3, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@ha
/* 801FB188 001F80C8  90 1F 00 00 */	stw r0, 0(r31)
/* 801FB18C 001F80CC  39 00 00 00 */	li r8, 0
/* 801FB190 001F80D0  38 E4 D6 90 */	addi r7, r4, "__vt__39ObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801FB194 001F80D4  38 A3 D7 0C */	addi r5, r3, "__vt__43MonoObjectMgr<Q34Game12PelletNumber6Object>"@l
/* 801FB198 001F80D8  99 1F 00 18 */	stb r8, 0x18(r31)
/* 801FB19C 001F80DC  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 801FB1A0 001F80E0  38 C7 00 2C */	addi r6, r7, 0x2c
/* 801FB1A4 001F80E4  38 85 00 2C */	addi r4, r5, 0x2c
/* 801FB1A8 001F80E8  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801FB1AC 001F80EC  38 00 00 01 */	li r0, 1
/* 801FB1B0 001F80F0  7F E3 FB 78 */	mr r3, r31
/* 801FB1B4 001F80F4  90 FF 00 00 */	stw r7, 0(r31)
/* 801FB1B8 001F80F8  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 801FB1BC 001F80FC  90 BF 00 00 */	stw r5, 0(r31)
/* 801FB1C0 001F8100  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801FB1C4 001F8104  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801FB1C8 001F8108  91 1F 00 24 */	stw r8, 0x24(r31)
/* 801FB1CC 001F810C  91 1F 00 20 */	stw r8, 0x20(r31)
/* 801FB1D0 001F8110  91 1F 00 28 */	stw r8, 0x28(r31)
/* 801FB1D4 001F8114  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 801FB1D8 001F8118  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FB1DC 001F811C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB1E0 001F8120  7C 08 03 A6 */	mtlr r0
/* 801FB1E4 001F8124  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB1E8 001F8128  4E 80 00 20 */	blr 

.global "getFlag__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
"getFlag__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet":
/* 801FB1EC 001F812C  28 04 00 00 */	cmplwi r4, 0
/* 801FB1F0 001F8130  41 82 00 14 */	beq .L_801FB204
/* 801FB1F4 001F8134  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FB1F8 001F8138  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FB1FC 001F813C  7C 63 00 AE */	lbzx r3, r3, r0
/* 801FB200 001F8140  4E 80 00 20 */	blr 
.L_801FB204:
/* 801FB204 001F8144  38 60 FF FF */	li r3, -1
/* 801FB208 001F8148  4E 80 00 20 */	blr 

.global "setFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
"setFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet":
/* 801FB20C 001F814C  28 04 00 00 */	cmplwi r4, 0
/* 801FB210 001F8150  4D 82 00 20 */	beqlr 
/* 801FB214 001F8154  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FB218 001F8158  38 A0 00 65 */	li r5, 0x65
/* 801FB21C 001F815C  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FB220 001F8160  7C A3 01 AE */	stbx r5, r3, r0
/* 801FB224 001F8164  4E 80 00 20 */	blr 

.global "setRevival__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
"setRevival__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet":
/* 801FB228 001F8168  28 04 00 00 */	cmplwi r4, 0
/* 801FB22C 001F816C  4D 82 00 20 */	beqlr 
/* 801FB230 001F8170  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FB234 001F8174  38 A0 00 64 */	li r5, 0x64
/* 801FB238 001F8178  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FB23C 001F817C  7C A3 01 AE */	stbx r5, r3, r0
/* 801FB240 001F8180  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet"
"setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game6Pellet":
/* 801FB244 001F8184  28 04 00 00 */	cmplwi r4, 0
/* 801FB248 001F8188  4D 82 00 20 */	beqlr 
/* 801FB24C 001F818C  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FB250 001F8190  38 A0 00 00 */	li r5, 0
/* 801FB254 001F8194  80 04 04 40 */	lwz r0, 0x440(r4)
/* 801FB258 001F8198  7C A3 01 AE */	stbx r5, r3, r0
/* 801FB25C 001F819C  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
"setComeAlive__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FB260 001F81A0  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801FB264 001F81A4  38 00 00 00 */	li r0, 0
/* 801FB268 001F81A8  7C 03 21 AE */	stbx r0, r3, r4
/* 801FB26C 001F81AC  4E 80 00 20 */	blr 

.global "getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB270 001F81B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB274 001F81B4  7C 08 02 A6 */	mflr r0
/* 801FB278 001F81B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB27C 001F81BC  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FB280 001F81C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FB284 001F81C4  7D 89 03 A6 */	mtctr r12
/* 801FB288 001F81C8  4E 80 04 21 */	bctrl 
/* 801FB28C 001F81CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB290 001F81D0  7C 08 03 A6 */	mtlr r0
/* 801FB294 001F81D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB298 001F81D8  4E 80 00 20 */	blr 

.global "get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
"get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv":
/* 801FB29C 001F81DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB2A0 001F81E0  7C 08 02 A6 */	mflr r0
/* 801FB2A4 001F81E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB2A8 001F81E8  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 801FB2AC 001F81EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FB2B0 001F81F0  7D 89 03 A6 */	mtctr r12
/* 801FB2B4 001F81F4  4E 80 04 21 */	bctrl 
/* 801FB2B8 001F81F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB2BC 001F81FC  7C 08 03 A6 */	mtlr r0
/* 801FB2C0 001F8200  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB2C4 001F8204  4E 80 00 20 */	blr 

.global "getObjectPtr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
"getObjectPtr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv":
/* 801FB2C8 001F8208  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB2CC 001F820C  7C 08 02 A6 */	mflr r0
/* 801FB2D0 001F8210  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB2D4 001F8214  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB2D8 001F8218  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 801FB2DC 001F821C  7D 89 03 A6 */	mtctr r12
/* 801FB2E0 001F8220  4E 80 04 21 */	bctrl 
/* 801FB2E4 001F8224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB2E8 001F8228  7C 08 03 A6 */	mtlr r0
/* 801FB2EC 001F822C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB2F0 001F8230  4E 80 00 20 */	blr 

.global "birthFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game12PelletConfig"
"birthFromTeki__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPQ24Game12PelletConfig":
/* 801FB2F4 001F8234  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FB2F8 001F8238  7C 08 02 A6 */	mflr r0
/* 801FB2FC 001F823C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FB300 001F8240  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FB304 001F8244  3B E0 00 00 */	li r31, 0
/* 801FB308 001F8248  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FB30C 001F824C  7C 9E 23 78 */	mr r30, r4
/* 801FB310 001F8250  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FB314 001F8254  7C 7D 1B 78 */	mr r29, r3
/* 801FB318 001F8258  48 00 00 40 */	b .L_801FB358
.L_801FB31C:
/* 801FB31C 001F825C  80 7D 00 9C */	lwz r3, 0x9c(r29)
/* 801FB320 001F8260  7C 03 F8 AE */	lbzx r0, r3, r31
/* 801FB324 001F8264  28 00 00 65 */	cmplwi r0, 0x65
/* 801FB328 001F8268  40 82 00 2C */	bne .L_801FB354
/* 801FB32C 001F826C  38 7D 00 70 */	addi r3, r29, 0x70
/* 801FB330 001F8270  7F E4 FB 78 */	mr r4, r31
/* 801FB334 001F8274  81 9D 00 70 */	lwz r12, 0x70(r29)
/* 801FB338 001F8278  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801FB33C 001F827C  7D 89 03 A6 */	mtctr r12
/* 801FB340 001F8280  4E 80 04 21 */	bctrl 
/* 801FB344 001F8284  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 801FB348 001F8288  7C 00 F0 40 */	cmplw r0, r30
/* 801FB34C 001F828C  40 82 00 08 */	bne .L_801FB354
/* 801FB350 001F8290  48 00 00 18 */	b .L_801FB368
.L_801FB354:
/* 801FB354 001F8294  3B FF 00 01 */	addi r31, r31, 1
.L_801FB358:
/* 801FB358 001F8298  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 801FB35C 001F829C  7C 1F 00 00 */	cmpw r31, r0
/* 801FB360 001F82A0  41 80 FF BC */	blt .L_801FB31C
/* 801FB364 001F82A4  38 60 00 00 */	li r3, 0
.L_801FB368:
/* 801FB368 001F82A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FB36C 001F82AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FB370 001F82B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FB374 001F82B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FB378 001F82B8  7C 08 03 A6 */	mtlr r0
/* 801FB37C 001F82BC  38 21 00 20 */	addi r1, r1, 0x20
/* 801FB380 001F82C0  4E 80 00 20 */	blr 

.global "alloc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi"
"alloc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FB384 001F82C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB388 001F82C8  7C 08 02 A6 */	mflr r0
/* 801FB38C 001F82CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB390 001F82D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FB394 001F82D4  93 C1 00 08 */	stw r30, 8(r1)
/* 801FB398 001F82D8  7C 7E 1B 78 */	mr r30, r3
/* 801FB39C 001F82DC  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FB3A0 001F82E0  48 00 02 C1 */	bl "alloc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
/* 801FB3A4 001F82E4  7F C3 F3 78 */	mr r3, r30
/* 801FB3A8 001F82E8  48 00 02 55 */	bl "onAlloc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
/* 801FB3AC 001F82EC  3B E0 00 00 */	li r31, 0
/* 801FB3B0 001F82F0  48 00 00 30 */	b .L_801FB3E0
.L_801FB3B4:
/* 801FB3B4 001F82F4  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FB3B8 001F82F8  7F E4 FB 78 */	mr r4, r31
/* 801FB3BC 001F82FC  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 801FB3C0 001F8300  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801FB3C4 001F8304  7D 89 03 A6 */	mtctr r12
/* 801FB3C8 001F8308  4E 80 04 21 */	bctrl 
/* 801FB3CC 001F830C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB3D0 001F8310  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801FB3D4 001F8314  7D 89 03 A6 */	mtctr r12
/* 801FB3D8 001F8318  4E 80 04 21 */	bctrl 
/* 801FB3DC 001F831C  3B FF 00 01 */	addi r31, r31, 1
.L_801FB3E0:
/* 801FB3E0 001F8320  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 801FB3E4 001F8324  7C 1F 00 00 */	cmpw r31, r0
/* 801FB3E8 001F8328  41 80 FF CC */	blt .L_801FB3B4
/* 801FB3EC 001F832C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB3F0 001F8330  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FB3F4 001F8334  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FB3F8 001F8338  7C 08 03 A6 */	mtlr r0
/* 801FB3FC 001F833C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB400 001F8340  4E 80 00 20 */	blr 

.global "__ml__38Iterator<Q34Game12PelletNumber6Object>Fv"
"__ml__38Iterator<Q34Game12PelletNumber6Object>Fv":
/* 801FB404 001F8344  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB408 001F8348  7C 08 02 A6 */	mflr r0
/* 801FB40C 001F834C  7C 64 1B 78 */	mr r4, r3
/* 801FB410 001F8350  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB414 001F8354  80 63 00 08 */	lwz r3, 8(r3)
/* 801FB418 001F8358  80 84 00 04 */	lwz r4, 4(r4)
/* 801FB41C 001F835C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB420 001F8360  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FB424 001F8364  7D 89 03 A6 */	mtctr r12
/* 801FB428 001F8368  4E 80 04 21 */	bctrl 
/* 801FB42C 001F836C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB430 001F8370  7C 08 03 A6 */	mtlr r0
/* 801FB434 001F8374  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB438 001F8378  4E 80 00 20 */	blr 

.global "next__38Iterator<Q34Game12PelletNumber6Object>Fv"
"next__38Iterator<Q34Game12PelletNumber6Object>Fv":
/* 801FB43C 001F837C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB440 001F8380  7C 08 02 A6 */	mflr r0
/* 801FB444 001F8384  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB448 001F8388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FB44C 001F838C  7C 7F 1B 78 */	mr r31, r3
/* 801FB450 001F8390  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801FB454 001F8394  28 00 00 00 */	cmplwi r0, 0
/* 801FB458 001F8398  40 82 00 24 */	bne .L_801FB47C
/* 801FB45C 001F839C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB460 001F83A0  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FB464 001F83A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB468 001F83A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FB46C 001F83AC  7D 89 03 A6 */	mtctr r12
/* 801FB470 001F83B0  4E 80 04 21 */	bctrl 
/* 801FB474 001F83B4  90 7F 00 04 */	stw r3, 4(r31)
/* 801FB478 001F83B8  48 00 00 94 */	b .L_801FB50C
.L_801FB47C:
/* 801FB47C 001F83BC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB480 001F83C0  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FB484 001F83C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB488 001F83C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FB48C 001F83CC  7D 89 03 A6 */	mtctr r12
/* 801FB490 001F83D0  4E 80 04 21 */	bctrl 
/* 801FB494 001F83D4  90 7F 00 04 */	stw r3, 4(r31)
/* 801FB498 001F83D8  48 00 00 58 */	b .L_801FB4F0
.L_801FB49C:
/* 801FB49C 001F83DC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB4A0 001F83E0  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FB4A4 001F83E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB4A8 001F83E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FB4AC 001F83EC  7D 89 03 A6 */	mtctr r12
/* 801FB4B0 001F83F0  4E 80 04 21 */	bctrl 
/* 801FB4B4 001F83F4  7C 64 1B 78 */	mr r4, r3
/* 801FB4B8 001F83F8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801FB4BC 001F83FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB4C0 001F8400  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FB4C4 001F8404  7D 89 03 A6 */	mtctr r12
/* 801FB4C8 001F8408  4E 80 04 21 */	bctrl 
/* 801FB4CC 001F840C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FB4D0 001F8410  40 82 00 3C */	bne .L_801FB50C
/* 801FB4D4 001F8414  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB4D8 001F8418  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FB4DC 001F841C  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB4E0 001F8420  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FB4E4 001F8424  7D 89 03 A6 */	mtctr r12
/* 801FB4E8 001F8428  4E 80 04 21 */	bctrl 
/* 801FB4EC 001F842C  90 7F 00 04 */	stw r3, 4(r31)
.L_801FB4F0:
/* 801FB4F0 001F8430  7F E3 FB 78 */	mr r3, r31
/* 801FB4F4 001F8434  81 9F 00 00 */	lwz r12, 0(r31)
/* 801FB4F8 001F8438  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FB4FC 001F843C  7D 89 03 A6 */	mtctr r12
/* 801FB500 001F8440  4E 80 04 21 */	bctrl 
/* 801FB504 001F8444  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FB508 001F8448  41 82 FF 94 */	beq .L_801FB49C
.L_801FB50C:
/* 801FB50C 001F844C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB510 001F8450  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FB514 001F8454  7C 08 03 A6 */	mtlr r0
/* 801FB518 001F8458  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB51C 001F845C  4E 80 00 20 */	blr 

.global "first__38Iterator<Q34Game12PelletNumber6Object>Fv"
"first__38Iterator<Q34Game12PelletNumber6Object>Fv":
/* 801FB520 001F8460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB524 001F8464  7C 08 02 A6 */	mflr r0
/* 801FB528 001F8468  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB52C 001F846C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FB530 001F8470  7C 7F 1B 78 */	mr r31, r3
/* 801FB534 001F8474  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801FB538 001F8478  28 00 00 00 */	cmplwi r0, 0
/* 801FB53C 001F847C  40 82 00 20 */	bne .L_801FB55C
/* 801FB540 001F8480  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB544 001F8484  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB548 001F8488  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FB54C 001F848C  7D 89 03 A6 */	mtctr r12
/* 801FB550 001F8490  4E 80 04 21 */	bctrl 
/* 801FB554 001F8494  90 7F 00 04 */	stw r3, 4(r31)
/* 801FB558 001F8498  48 00 00 90 */	b .L_801FB5E8
.L_801FB55C:
/* 801FB55C 001F849C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB560 001F84A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB564 001F84A4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801FB568 001F84A8  7D 89 03 A6 */	mtctr r12
/* 801FB56C 001F84AC  4E 80 04 21 */	bctrl 
/* 801FB570 001F84B0  90 7F 00 04 */	stw r3, 4(r31)
/* 801FB574 001F84B4  48 00 00 58 */	b .L_801FB5CC
.L_801FB578:
/* 801FB578 001F84B8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB57C 001F84BC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FB580 001F84C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB584 001F84C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801FB588 001F84C8  7D 89 03 A6 */	mtctr r12
/* 801FB58C 001F84CC  4E 80 04 21 */	bctrl 
/* 801FB590 001F84D0  7C 64 1B 78 */	mr r4, r3
/* 801FB594 001F84D4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801FB598 001F84D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB59C 001F84DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801FB5A0 001F84E0  7D 89 03 A6 */	mtctr r12
/* 801FB5A4 001F84E4  4E 80 04 21 */	bctrl 
/* 801FB5A8 001F84E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FB5AC 001F84EC  40 82 00 3C */	bne .L_801FB5E8
/* 801FB5B0 001F84F0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801FB5B4 001F84F4  80 9F 00 04 */	lwz r4, 4(r31)
/* 801FB5B8 001F84F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB5BC 001F84FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801FB5C0 001F8500  7D 89 03 A6 */	mtctr r12
/* 801FB5C4 001F8504  4E 80 04 21 */	bctrl 
/* 801FB5C8 001F8508  90 7F 00 04 */	stw r3, 4(r31)
.L_801FB5CC:
/* 801FB5CC 001F850C  7F E3 FB 78 */	mr r3, r31
/* 801FB5D0 001F8510  81 9F 00 00 */	lwz r12, 0(r31)
/* 801FB5D4 001F8514  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801FB5D8 001F8518  7D 89 03 A6 */	mtctr r12
/* 801FB5DC 001F851C  4E 80 04 21 */	bctrl 
/* 801FB5E0 001F8520  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801FB5E4 001F8524  41 82 FF 94 */	beq .L_801FB578
.L_801FB5E8:
/* 801FB5E8 001F8528  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB5EC 001F852C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FB5F0 001F8530  7C 08 03 A6 */	mtlr r0
/* 801FB5F4 001F8534  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB5F8 001F8538  4E 80 00 20 */	blr 

.global "onAlloc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"onAlloc__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB5FC 001F853C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB600 001F8540  7C 08 02 A6 */	mflr r0
/* 801FB604 001F8544  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB608 001F8548  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FB60C 001F854C  3B E0 00 00 */	li r31, 0
/* 801FB610 001F8550  93 C1 00 08 */	stw r30, 8(r1)
/* 801FB614 001F8554  7C 7E 1B 78 */	mr r30, r3
/* 801FB618 001F8558  48 00 00 24 */	b .L_801FB63C
.L_801FB61C:
/* 801FB61C 001F855C  38 7E 00 70 */	addi r3, r30, 0x70
/* 801FB620 001F8560  7F E4 FB 78 */	mr r4, r31
/* 801FB624 001F8564  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 801FB628 001F8568  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801FB62C 001F856C  7D 89 03 A6 */	mtctr r12
/* 801FB630 001F8570  4E 80 04 21 */	bctrl 
/* 801FB634 001F8574  93 E3 04 40 */	stw r31, 0x440(r3)
/* 801FB638 001F8578  3B FF 00 01 */	addi r31, r31, 1
.L_801FB63C:
/* 801FB63C 001F857C  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 801FB640 001F8580  7C 1F 00 00 */	cmpw r31, r0
/* 801FB644 001F8584  41 80 FF D8 */	blt .L_801FB61C
/* 801FB648 001F8588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB64C 001F858C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FB650 001F8590  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FB654 001F8594  7C 08 03 A6 */	mtlr r0
/* 801FB658 001F8598  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB65C 001F859C  4E 80 00 20 */	blr 

.global "alloc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
"alloc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FB660 001F85A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FB664 001F85A4  7C 08 02 A6 */	mflr r0
/* 801FB668 001F85A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FB66C 001F85AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FB670 001F85B0  7C 9F 23 78 */	mr r31, r4
/* 801FB674 001F85B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FB678 001F85B8  7C 7E 1B 78 */	mr r30, r3
/* 801FB67C 001F85BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FB680 001F85C0  7F FD FB 78 */	mr r29, r31
/* 801FB684 001F85C4  1C 7D 04 5C */	mulli r3, r29, 0x45c
/* 801FB688 001F85C8  93 81 00 10 */	stw r28, 0x10(r1)
/* 801FB68C 001F85CC  38 63 00 10 */	addi r3, r3, 0x10
/* 801FB690 001F85D0  4B E2 89 1D */	bl __nwa__FUl
/* 801FB694 001F85D4  3C 80 80 20 */	lis r4, __ct__Q34Game12PelletNumber6ObjectFv@ha
/* 801FB698 001F85D8  7F A7 EB 78 */	mr r7, r29
/* 801FB69C 001F85DC  38 84 B7 E8 */	addi r4, r4, __ct__Q34Game12PelletNumber6ObjectFv@l
/* 801FB6A0 001F85E0  38 A0 00 00 */	li r5, 0
/* 801FB6A4 001F85E4  38 C0 04 5C */	li r6, 0x45c
/* 801FB6A8 001F85E8  4B EC 63 49 */	bl __construct_new_array
/* 801FB6AC 001F85EC  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801FB6B0 001F85F0  38 00 00 00 */	li r0, 0
/* 801FB6B4 001F85F4  7F A3 EB 78 */	mr r3, r29
/* 801FB6B8 001F85F8  93 FE 00 24 */	stw r31, 0x24(r30)
/* 801FB6BC 001F85FC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801FB6C0 001F8600  4B E2 88 ED */	bl __nwa__FUl
/* 801FB6C4 001F8604  2C 1F 00 00 */	cmpwi r31, 0
/* 801FB6C8 001F8608  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 801FB6CC 001F860C  39 60 00 00 */	li r11, 0
/* 801FB6D0 001F8610  40 81 00 B0 */	ble .L_801FB780
/* 801FB6D4 001F8614  2C 1F 00 08 */	cmpwi r31, 8
/* 801FB6D8 001F8618  38 7F FF F8 */	addi r3, r31, -8
/* 801FB6DC 001F861C  40 81 00 80 */	ble .L_801FB75C
/* 801FB6E0 001F8620  38 03 00 07 */	addi r0, r3, 7
/* 801FB6E4 001F8624  54 00 E8 FE */	srwi r0, r0, 3
/* 801FB6E8 001F8628  7C 09 03 A6 */	mtctr r0
/* 801FB6EC 001F862C  2C 03 00 00 */	cmpwi r3, 0
/* 801FB6F0 001F8630  40 81 00 6C */	ble .L_801FB75C
.L_801FB6F4:
/* 801FB6F4 001F8634  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FB6F8 001F8638  39 40 00 01 */	li r10, 1
/* 801FB6FC 001F863C  39 0B 00 01 */	addi r8, r11, 1
/* 801FB700 001F8640  38 EB 00 02 */	addi r7, r11, 2
/* 801FB704 001F8644  7D 43 59 AE */	stbx r10, r3, r11
/* 801FB708 001F8648  38 CB 00 03 */	addi r6, r11, 3
/* 801FB70C 001F864C  38 AB 00 04 */	addi r5, r11, 4
/* 801FB710 001F8650  38 8B 00 05 */	addi r4, r11, 5
/* 801FB714 001F8654  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 801FB718 001F8658  38 6B 00 06 */	addi r3, r11, 6
/* 801FB71C 001F865C  38 0B 00 07 */	addi r0, r11, 7
/* 801FB720 001F8660  39 6B 00 08 */	addi r11, r11, 8
/* 801FB724 001F8664  7D 49 41 AE */	stbx r10, r9, r8
/* 801FB728 001F8668  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 801FB72C 001F866C  7D 48 39 AE */	stbx r10, r8, r7
/* 801FB730 001F8670  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 801FB734 001F8674  7D 47 31 AE */	stbx r10, r7, r6
/* 801FB738 001F8678  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 801FB73C 001F867C  7D 46 29 AE */	stbx r10, r6, r5
/* 801FB740 001F8680  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 801FB744 001F8684  7D 45 21 AE */	stbx r10, r5, r4
/* 801FB748 001F8688  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 801FB74C 001F868C  7D 44 19 AE */	stbx r10, r4, r3
/* 801FB750 001F8690  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FB754 001F8694  7D 43 01 AE */	stbx r10, r3, r0
/* 801FB758 001F8698  42 00 FF 9C */	bdnz .L_801FB6F4
.L_801FB75C:
/* 801FB75C 001F869C  7C 0B F8 50 */	subf r0, r11, r31
/* 801FB760 001F86A0  38 80 00 01 */	li r4, 1
/* 801FB764 001F86A4  7C 09 03 A6 */	mtctr r0
/* 801FB768 001F86A8  7C 0B F8 00 */	cmpw r11, r31
/* 801FB76C 001F86AC  40 80 00 14 */	bge .L_801FB780
.L_801FB770:
/* 801FB770 001F86B0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801FB774 001F86B4  7C 83 59 AE */	stbx r4, r3, r11
/* 801FB778 001F86B8  39 6B 00 01 */	addi r11, r11, 1
/* 801FB77C 001F86BC  42 00 FF F4 */	bdnz .L_801FB770
.L_801FB780:
/* 801FB780 001F86C0  7F C3 F3 78 */	mr r3, r30
/* 801FB784 001F86C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801FB788 001F86C8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801FB78C 001F86CC  7D 89 03 A6 */	mtctr r12
/* 801FB790 001F86D0  4E 80 04 21 */	bctrl 
/* 801FB794 001F86D4  3B 80 00 00 */	li r28, 0
/* 801FB798 001F86D8  3B A0 00 00 */	li r29, 0
/* 801FB79C 001F86DC  48 00 00 24 */	b .L_801FB7C0
.L_801FB7A0:
/* 801FB7A0 001F86E0  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 801FB7A4 001F86E4  7C 60 EA 14 */	add r3, r0, r29
/* 801FB7A8 001F86E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801FB7AC 001F86EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801FB7B0 001F86F0  7D 89 03 A6 */	mtctr r12
/* 801FB7B4 001F86F4  4E 80 04 21 */	bctrl 
/* 801FB7B8 001F86F8  3B BD 04 5C */	addi r29, r29, 0x45c
/* 801FB7BC 001F86FC  3B 9C 00 01 */	addi r28, r28, 1
.L_801FB7C0:
/* 801FB7C0 001F8700  7C 1C F8 00 */	cmpw r28, r31
/* 801FB7C4 001F8704  41 80 FF DC */	blt .L_801FB7A0
/* 801FB7C8 001F8708  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FB7CC 001F870C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FB7D0 001F8710  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FB7D4 001F8714  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FB7D8 001F8718  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801FB7DC 001F871C  7C 08 03 A6 */	mtlr r0
/* 801FB7E0 001F8720  38 21 00 20 */	addi r1, r1, 0x20
/* 801FB7E4 001F8724  4E 80 00 20 */	blr 

.global __ct__Q34Game12PelletNumber6ObjectFv
__ct__Q34Game12PelletNumber6ObjectFv:
/* 801FB7E8 001F8728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FB7EC 001F872C  7C 08 02 A6 */	mflr r0
/* 801FB7F0 001F8730  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FB7F4 001F8734  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FB7F8 001F8738  7C 7F 1B 78 */	mr r31, r3
/* 801FB7FC 001F873C  4B F6 AE 85 */	bl __ct__Q24Game6PelletFv
/* 801FB800 001F8740  3C 80 80 4C */	lis r4, __vt__Q34Game12PelletNumber6Object@ha
/* 801FB804 001F8744  7F E3 FB 78 */	mr r3, r31
/* 801FB808 001F8748  38 A4 D8 9C */	addi r5, r4, __vt__Q34Game12PelletNumber6Object@l
/* 801FB80C 001F874C  90 BF 00 00 */	stw r5, 0(r31)
/* 801FB810 001F8750  38 85 01 B4 */	addi r4, r5, 0x1b4
/* 801FB814 001F8754  38 05 01 C0 */	addi r0, r5, 0x1c0
/* 801FB818 001F8758  90 9F 03 14 */	stw r4, 0x314(r31)
/* 801FB81C 001F875C  90 1F 03 18 */	stw r0, 0x318(r31)
/* 801FB820 001F8760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FB824 001F8764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FB828 001F8768  7C 08 03 A6 */	mtlr r0
/* 801FB82C 001F876C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FB830 001F8770  4E 80 00 20 */	blr 

.global "@84@__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"@84@__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB834 001F8774  38 63 FF AC */	addi r3, r3, -84
/* 801FB838 001F8778  4B FF DB 84 */	b "__dt__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB83C 001F877C  38 63 FF E4 */	addi r3, r3, -28
/* 801FB840 001F8780  4B F7 49 D8 */	b "resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
"@28@doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics":
/* 801FB844 001F8784  38 63 FF E4 */	addi r3, r3, -28
/* 801FB848 001F8788  4B FF EA 5C */	b "doDirectDraw__43MonoObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"

.global "@28@doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff"
"@28@doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff":
/* 801FB84C 001F878C  38 63 FF E4 */	addi r3, r3, -28
/* 801FB850 001F8790  4B FF E9 C4 */	b "doSimulation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Ff"

.global "@28@doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB854 001F8794  38 63 FF E4 */	addi r3, r3, -28
/* 801FB858 001F8798  4B FF E9 3C */	b "doViewCalc__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"
"@28@doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FB85C 001F879C  38 63 FF E4 */	addi r3, r3, -28
/* 801FB860 001F87A0  4B FF E8 A4 */	b "doSetView__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fi"

.global "@28@doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB864 001F87A4  38 63 FF E4 */	addi r3, r3, -28
/* 801FB868 001F87A8  4B FF E8 1C */	b "doEntry__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB86C 001F87AC  38 63 FF E4 */	addi r3, r3, -28
/* 801FB870 001F87B0  4B FF E7 94 */	b "doAnimation__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"
"@28@doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics":
/* 801FB874 001F87B4  38 63 FF E4 */	addi r3, r3, -28
/* 801FB878 001F87B8  4B FF EB 78 */	b "doDirectDraw__39ObjectMgr<Q34Game12PelletNumber6Object>FR8Graphics"

.global "@28@doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff"
"@28@doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff":
/* 801FB87C 001F87BC  38 63 FF E4 */	addi r3, r3, -28
/* 801FB880 001F87C0  4B FF ED B0 */	b "doSimulation__39ObjectMgr<Q34Game12PelletNumber6Object>Ff"

.global "@28@doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB884 001F87C4  38 63 FF E4 */	addi r3, r3, -28
/* 801FB888 001F87C8  4B FF EF 9C */	b "doViewCalc__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi"
"@28@doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi":
/* 801FB88C 001F87CC  38 63 FF E4 */	addi r3, r3, -28
/* 801FB890 001F87D0  4B FF F1 78 */	b "doSetView__39ObjectMgr<Q34Game12PelletNumber6Object>Fi"

.global "@28@doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB894 001F87D4  38 63 FF E4 */	addi r3, r3, -28
/* 801FB898 001F87D8  4B FF F3 64 */	b "doEntry__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@28@doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"
"@28@doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB89C 001F87DC  38 63 FF E4 */	addi r3, r3, -28
/* 801FB8A0 001F87E0  4B FF F5 40 */	b "doAnimation__39ObjectMgr<Q34Game12PelletNumber6Object>Fv"

.global "@84@getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"@84@getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB8A4 001F87E4  38 63 FF AC */	addi r3, r3, -84
/* 801FB8A8 001F87E8  4B FF F9 C8 */	b "getEnd__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"

.global "@84@getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"
"@84@getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv":
/* 801FB8AC 001F87EC  38 63 FF AC */	addi r3, r3, -84
/* 801FB8B0 001F87F0  4B FF E5 E4 */	b "getStart__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"

.global "@84@getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
"@84@getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv":
/* 801FB8B4 001F87F4  38 63 FF AC */	addi r3, r3, -84
/* 801FB8B8 001F87F8  4B FF E5 B0 */	b "getNext__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"

.global "@84@get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"
"@84@get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv":
/* 801FB8BC 001F87FC  38 63 FF AC */	addi r3, r3, -84
/* 801FB8C0 001F8800  4B FF F9 DC */	b "get__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>FPv"

.global "@84@__dt__Q34Game12PelletNumber3MgrFv"
"@84@__dt__Q34Game12PelletNumber3MgrFv":
/* 801FB8C4 001F8804  38 63 FF AC */	addi r3, r3, -84
/* 801FB8C8 001F8808  4B FF E1 3C */	b __dt__Q34Game12PelletNumber3MgrFv
