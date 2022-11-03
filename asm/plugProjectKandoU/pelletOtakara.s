.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_pelletOtakara_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80481B50
lbl_80481B50:
	.4byte 0x70656C6C
	.4byte 0x65744F74
	.4byte 0x616B6172
	.4byte 0x612E6370
	.4byte 0x70000000
.global lbl_80481B64
lbl_80481B64:
	.asciz "P2Assert"
	.skip 3
.global lbl_80481B70
lbl_80481B70:
	.4byte 0x696E6469
	.4byte 0x72656374
	.4byte 0x5F746578
	.4byte 0x00000000
.global lbl_80481B80
lbl_80481B80:
	.4byte 0x6F74616B
	.4byte 0x6172615F
	.4byte 0x74657874
	.4byte 0x732E737A
	.4byte 0x73000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804BE4E0
lbl_804BE4E0:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game13PelletOtakara3Mgr
__vt__Q34Game13PelletOtakara3Mgr:
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Ff"
	.4byte "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte setupResources__Q34Game13PelletOtakara3MgrFv
	.4byte "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ28SysShape5Model"
	.4byte getMgrName__Q34Game13PelletOtakara3MgrFv
	.4byte getMgrID__Q34Game13PelletOtakara3MgrFv
	.4byte "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q34Game13PelletOtakara3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q34Game13PelletOtakara3MgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q34Game13PelletOtakara3MgrFv
	.4byte "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q34Game13PelletOtakara3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__40Container<Q34Game13PelletOtakara6Object>FPv"
	.4byte "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getAt__40Container<Q34Game13PelletOtakara6Object>Fi"
	.4byte "getTo__40Container<Q34Game13PelletOtakara6Object>Fv"
	.4byte "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte __dt__Q34Game13PelletOtakara3MgrFv
.global "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"
"__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__40Container<Q34Game13PelletOtakara6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__40Container<Q34Game13PelletOtakara6Object>Fi"
	.4byte "getTo__40Container<Q34Game13PelletOtakara6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@28@doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@28@doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "@28@doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@28@doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff"
	.4byte "@28@doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff"
	.4byte "doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
.global "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"
"__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__40Container<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getNext__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getStart__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "getEnd__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "get__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getAt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "getTo__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@28@doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@28@doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "@28@doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@28@doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff"
	.4byte "@28@doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff"
	.4byte "doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
	.4byte "birth__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "clearMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "onAlloc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
.global "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"
"__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>":
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Ff"
	.4byte "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte 0
	.4byte "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game12PelletConfig"
	.4byte "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
	.4byte "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ28SysShape5Model"
	.4byte 0
	.4byte 0
	.4byte "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
	.4byte "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte 0
	.4byte 0
	.4byte "@84@__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__40Container<Q34Game13PelletOtakara6Object>FPv"
	.4byte "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
	.4byte "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "getAt__40Container<Q34Game13PelletOtakara6Object>Fi"
	.4byte "getTo__40Container<Q34Game13PelletOtakara6Object>Fv"
	.4byte "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
	.4byte "__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
.global "__vt__40Container<Q34Game13PelletOtakara6Object>"
"__vt__40Container<Q34Game13PelletOtakara6Object>":
	.4byte 0
	.4byte 0
	.4byte "__dt__40Container<Q34Game13PelletOtakara6Object>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__40Container<Q34Game13PelletOtakara6Object>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__40Container<Q34Game13PelletOtakara6Object>Fi"
	.4byte "getTo__40Container<Q34Game13PelletOtakara6Object>Fv"
.global __vt__Q34Game13PelletOtakara6Object
__vt__Q34Game13PelletOtakara6Object:
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
	.4byte constructor__Q34Game13PelletOtakara6ObjectFv
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
	.4byte getShadowParam__Q34Game13PelletOtakara6ObjectFRQ24Game11ShadowParam
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
	.4byte do_onInit__Q34Game13PelletOtakara6ObjectFPQ24Game15CreatureInitArg
	.4byte onCreateShape__Q34Game13PelletOtakara6ObjectFv
	.4byte theEntry__Q34Game13PelletOtakara6ObjectFv
	.4byte onBounce__Q24Game6PelletFv
	.4byte shadowOn__Q24Game6PelletFv
	.4byte shadowOff__Q24Game6PelletFv
	.4byte isPickable__Q24Game6PelletFv
	.4byte getBedamaColor__Q34Game13PelletOtakara6ObjectFv
	.4byte do_update__Q24Game6PelletFv
	.4byte onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
	.4byte getKind__Q34Game13PelletOtakara6ObjectFv
	.4byte changeMaterial__Q34Game13PelletOtakara6ObjectFv
	.4byte "createKiraEffect__Q24Game6PelletFR10Vector3<f>"
	.4byte getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
	.4byte isCarried__Q24Game6PelletFv
	.4byte isPicked__Q24Game6PelletFv
	.4byte sound_otakaraEventStart__Q34Game13PelletOtakara6ObjectFv
	.4byte sound_otakaraEventRestart__Q34Game13PelletOtakara6ObjectFv
	.4byte sound_otakaraEventStop__Q34Game13PelletOtakara6ObjectFv
	.4byte sound_otakaraEventFinish__Q34Game13PelletOtakara6ObjectFv
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515B98
lbl_80515B98:
	.skip 0x4
.global lbl_80515B9C
lbl_80515B9C:
	.skip 0x4
.global mgr__Q24Game13PelletOtakara
mgr__Q24Game13PelletOtakara:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519D18
lbl_80519D18:
	.4byte 0x66627465
	.4byte 0x78000000
.global lbl_80519D20
lbl_80519D20:
	.4byte 0x00000000
.global lbl_80519D24
lbl_80519D24:
	.float 1.0
.global lbl_80519D28
lbl_80519D28:
	.4byte 0x4F74616B
	.4byte 0x61726100
.global lbl_80519D30
lbl_80519D30:
	.float 0.5
.global lbl_80519D34
lbl_80519D34:
	.4byte 0x6F74616B
	.4byte 0x61726100
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global constructor__Q34Game13PelletOtakara6ObjectFv
constructor__Q34Game13PelletOtakara6ObjectFv:
/* 801FFE64 001FCDA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FFE68 001FCDA8  7C 08 02 A6 */	mflr r0
/* 801FFE6C 001FCDAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FFE70 001FCDB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FFE74 001FCDB4  3B E0 00 00 */	li r31, 0
/* 801FFE78 001FCDB8  93 C1 00 08 */	stw r30, 8(r1)
/* 801FFE7C 001FCDBC  7C 7E 1B 78 */	mr r30, r3
/* 801FFE80 001FCDC0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801FFE84 001FCDC4  28 04 00 00 */	cmplwi r4, 0
/* 801FFE88 001FCDC8  41 82 00 14 */	beq .L_801FFE9C
/* 801FFE8C 001FCDCC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801FFE90 001FCDD0  2C 00 00 01 */	cmpwi r0, 1
/* 801FFE94 001FCDD4  40 82 00 08 */	bne .L_801FFE9C
/* 801FFE98 001FCDD8  3B E0 00 01 */	li r31, 1
.L_801FFE9C:
/* 801FFE9C 001FCDDC  38 60 00 90 */	li r3, 0x90
/* 801FFEA0 001FCDE0  4B E2 40 05 */	bl __nw__FUl
/* 801FFEA4 001FCDE4  7C 60 1B 79 */	or. r0, r3, r3
/* 801FFEA8 001FCDE8  41 82 00 14 */	beq .L_801FFEBC
/* 801FFEAC 001FCDEC  7F C4 F3 78 */	mr r4, r30
/* 801FFEB0 001FCDF0  7F E5 FB 78 */	mr r5, r31
/* 801FFEB4 001FCDF4  48 26 1E AD */	bl __ct__Q23PSM13PelletOtakaraFPQ34Game13PelletOtakara6Objectb
/* 801FFEB8 001FCDF8  7C 60 1B 78 */	mr r0, r3
.L_801FFEBC:
/* 801FFEBC 001FCDFC  90 1E 03 30 */	stw r0, 0x330(r30)
/* 801FFEC0 001FCE00  7F C4 F3 78 */	mr r4, r30
/* 801FFEC4 001FCE04  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801FFEC8 001FCE08  48 04 1C 59 */	bl createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 801FFECC 001FCE0C  38 60 00 00 */	li r3, 0
/* 801FFED0 001FCE10  38 00 FF FF */	li r0, -1
/* 801FFED4 001FCE14  90 7E 04 58 */	stw r3, 0x458(r30)
/* 801FFED8 001FCE18  B0 1E 04 5C */	sth r0, 0x45c(r30)
/* 801FFEDC 001FCE1C  98 1E 04 5E */	stb r0, 0x45e(r30)
/* 801FFEE0 001FCE20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FFEE4 001FCE24  83 C1 00 08 */	lwz r30, 8(r1)
/* 801FFEE8 001FCE28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FFEEC 001FCE2C  7C 08 03 A6 */	mtlr r0
/* 801FFEF0 001FCE30  38 21 00 10 */	addi r1, r1, 0x10
/* 801FFEF4 001FCE34  4E 80 00 20 */	blr 

.global do_onInit__Q34Game13PelletOtakara6ObjectFPQ24Game15CreatureInitArg
do_onInit__Q34Game13PelletOtakara6ObjectFPQ24Game15CreatureInitArg:
/* 801FFEF8 001FCE38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FFEFC 001FCE3C  7C 08 02 A6 */	mflr r0
/* 801FFF00 001FCE40  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FFF04 001FCE44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FFF08 001FCE48  7C 7F 1B 78 */	mr r31, r3
/* 801FFF0C 001FCE4C  80 63 03 30 */	lwz r3, 0x330(r3)
/* 801FFF10 001FCE50  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801FFF14 001FCE54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801FFF18 001FCE58  7D 89 03 A6 */	mtctr r12
/* 801FFF1C 001FCE5C  4E 80 04 21 */	bctrl 
/* 801FFF20 001FCE60  2C 03 00 0C */	cmpwi r3, 0xc
/* 801FFF24 001FCE64  41 82 00 20 */	beq .L_801FFF44
/* 801FFF28 001FCE68  3C 60 80 48 */	lis r3, lbl_80481B50@ha
/* 801FFF2C 001FCE6C  3C A0 80 48 */	lis r5, lbl_80481B64@ha
/* 801FFF30 001FCE70  38 63 1B 50 */	addi r3, r3, lbl_80481B50@l
/* 801FFF34 001FCE74  38 80 00 AB */	li r4, 0xab
/* 801FFF38 001FCE78  38 A5 1B 64 */	addi r5, r5, lbl_80481B64@l
/* 801FFF3C 001FCE7C  4C C6 31 82 */	crclr 6
/* 801FFF40 001FCE80  4B E2 A7 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801FFF44:
/* 801FFF44 001FCE84  80 BF 03 30 */	lwz r5, 0x330(r31)
/* 801FFF48 001FCE88  38 80 00 00 */	li r4, 0
/* 801FFF4C 001FCE8C  90 85 00 70 */	stw r4, 0x70(r5)
/* 801FFF50 001FCE90  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801FFF54 001FCE94  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801FFF58 001FCE98  2C 00 00 01 */	cmpwi r0, 1
/* 801FFF5C 001FCE9C  40 82 00 7C */	bne .L_801FFFD8
/* 801FFF60 001FCEA0  88 1F 03 2C */	lbz r0, 0x32c(r31)
/* 801FFF64 001FCEA4  28 00 00 04 */	cmplwi r0, 4
/* 801FFF68 001FCEA8  40 82 00 18 */	bne .L_801FFF80
/* 801FFF6C 001FCEAC  38 60 00 02 */	li r3, 2
/* 801FFF70 001FCEB0  38 00 00 01 */	li r0, 1
/* 801FFF74 001FCEB4  90 65 00 70 */	stw r3, 0x70(r5)
/* 801FFF78 001FCEB8  98 1F 04 5E */	stb r0, 0x45e(r31)
/* 801FFF7C 001FCEBC  48 00 00 5C */	b .L_801FFFD8
.L_801FFF80:
/* 801FFF80 001FCEC0  28 00 00 05 */	cmplwi r0, 5
/* 801FFF84 001FCEC4  40 82 00 14 */	bne .L_801FFF98
/* 801FFF88 001FCEC8  38 00 00 03 */	li r0, 3
/* 801FFF8C 001FCECC  90 05 00 70 */	stw r0, 0x70(r5)
/* 801FFF90 001FCED0  98 9F 04 5E */	stb r4, 0x45e(r31)
/* 801FFF94 001FCED4  48 00 00 44 */	b .L_801FFFD8
.L_801FFF98:
/* 801FFF98 001FCED8  28 00 00 06 */	cmplwi r0, 6
/* 801FFF9C 001FCEDC  40 82 00 18 */	bne .L_801FFFB4
/* 801FFFA0 001FCEE0  38 60 00 04 */	li r3, 4
/* 801FFFA4 001FCEE4  38 00 00 02 */	li r0, 2
/* 801FFFA8 001FCEE8  90 65 00 70 */	stw r3, 0x70(r5)
/* 801FFFAC 001FCEEC  98 1F 04 5E */	stb r0, 0x45e(r31)
/* 801FFFB0 001FCEF0  48 00 00 28 */	b .L_801FFFD8
.L_801FFFB4:
/* 801FFFB4 001FCEF4  28 00 00 03 */	cmplwi r0, 3
/* 801FFFB8 001FCEF8  40 82 00 18 */	bne .L_801FFFD0
/* 801FFFBC 001FCEFC  38 60 00 01 */	li r3, 1
/* 801FFFC0 001FCF00  38 00 00 02 */	li r0, 2
/* 801FFFC4 001FCF04  90 65 00 70 */	stw r3, 0x70(r5)
/* 801FFFC8 001FCF08  98 1F 04 5E */	stb r0, 0x45e(r31)
/* 801FFFCC 001FCF0C  48 00 00 0C */	b .L_801FFFD8
.L_801FFFD0:
/* 801FFFD0 001FCF10  38 00 FF FF */	li r0, -1
/* 801FFFD4 001FCF14  98 1F 04 5E */	stb r0, 0x45e(r31)
.L_801FFFD8:
/* 801FFFD8 001FCF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FFFDC 001FCF1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FFFE0 001FCF20  7C 08 03 A6 */	mtlr r0
/* 801FFFE4 001FCF24  38 21 00 10 */	addi r1, r1, 0x10
/* 801FFFE8 001FCF28  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game13PelletOtakara6ObjectFRQ24Game11ShadowParam
getShadowParam__Q34Game13PelletOtakara6ObjectFRQ24Game11ShadowParam:
/* 801FFFEC 001FCF2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FFFF0 001FCF30  7C 08 02 A6 */	mflr r0
/* 801FFFF4 001FCF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FFFF8 001FCF38  4B F6 59 49 */	bl getShadowParam__Q24Game6PelletFRQ24Game11ShadowParam
/* 801FFFFC 001FCF3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200000 001FCF40  7C 08 03 A6 */	mtlr r0
/* 80200004 001FCF44  38 21 00 10 */	addi r1, r1, 0x10
/* 80200008 001FCF48  4E 80 00 20 */	blr 

.global sound_otakaraEventStart__Q34Game13PelletOtakara6ObjectFv
sound_otakaraEventStart__Q34Game13PelletOtakara6ObjectFv:
/* 8020000C 001FCF4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80200010 001FCF50  7C 08 02 A6 */	mflr r0
/* 80200014 001FCF54  90 01 00 24 */	stw r0, 0x24(r1)
/* 80200018 001FCF58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020001C 001FCF5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80200020 001FCF60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80200024 001FCF64  7C 7D 1B 78 */	mr r29, r3
/* 80200028 001FCF68  80 63 03 30 */	lwz r3, 0x330(r3)
/* 8020002C 001FCF6C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80200030 001FCF70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80200034 001FCF74  7D 89 03 A6 */	mtctr r12
/* 80200038 001FCF78  4E 80 04 21 */	bctrl 
/* 8020003C 001FCF7C  2C 03 00 0C */	cmpwi r3, 0xc
/* 80200040 001FCF80  41 82 00 20 */	beq .L_80200060
/* 80200044 001FCF84  3C 60 80 48 */	lis r3, lbl_80481B50@ha
/* 80200048 001FCF88  3C A0 80 48 */	lis r5, lbl_80481B64@ha
/* 8020004C 001FCF8C  38 63 1B 50 */	addi r3, r3, lbl_80481B50@l
/* 80200050 001FCF90  38 80 00 FD */	li r4, 0xfd
/* 80200054 001FCF94  38 A5 1B 64 */	addi r5, r5, lbl_80481B64@l
/* 80200058 001FCF98  4C C6 31 82 */	crclr 6
/* 8020005C 001FCF9C  4B E2 A5 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80200060:
/* 80200060 001FCFA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80200064 001FCFA4  83 FD 03 30 */	lwz r31, 0x330(r29)
/* 80200068 001FCFA8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8020006C 001FCFAC  2C 00 00 01 */	cmpwi r0, 1
/* 80200070 001FCFB0  40 82 00 B4 */	bne .L_80200124
/* 80200074 001FCFB4  80 1D 03 D4 */	lwz r0, 0x3d4(r29)
/* 80200078 001FCFB8  3B C0 FF FF */	li r30, -1
/* 8020007C 001FCFBC  2C 00 00 00 */	cmpwi r0, 0
/* 80200080 001FCFC0  40 82 00 0C */	bne .L_8020008C
/* 80200084 001FCFC4  3B C0 00 00 */	li r30, 0
/* 80200088 001FCFC8  48 00 00 10 */	b .L_80200098
.L_8020008C:
/* 8020008C 001FCFCC  2C 00 00 01 */	cmpwi r0, 1
/* 80200090 001FCFD0  40 82 00 08 */	bne .L_80200098
/* 80200094 001FCFD4  3B C0 00 01 */	li r30, 1
.L_80200098:
/* 80200098 001FCFD8  2C 1E FF FF */	cmpwi r30, -1
/* 8020009C 001FCFDC  41 82 00 9C */	beq .L_80200138
/* 802000A0 001FCFE0  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 802000A4 001FCFE4  7F C4 F3 78 */	mr r4, r30
/* 802000A8 001FCFE8  4B F7 B9 F5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 802000AC 001FCFEC  88 1D 03 2C */	lbz r0, 0x32c(r29)
/* 802000B0 001FCFF0  7C 7D 1B 78 */	mr r29, r3
/* 802000B4 001FCFF4  28 00 00 04 */	cmplwi r0, 4
/* 802000B8 001FCFF8  40 82 00 14 */	bne .L_802000CC
/* 802000BC 001FCFFC  2C 1E 00 00 */	cmpwi r30, 0
/* 802000C0 001FD000  41 82 00 38 */	beq .L_802000F8
/* 802000C4 001FD004  3B A0 00 00 */	li r29, 0
/* 802000C8 001FD008  48 00 00 30 */	b .L_802000F8
.L_802000CC:
/* 802000CC 001FD00C  28 00 00 05 */	cmplwi r0, 5
/* 802000D0 001FD010  40 82 00 14 */	bne .L_802000E4
/* 802000D4 001FD014  2C 1E 00 01 */	cmpwi r30, 1
/* 802000D8 001FD018  41 82 00 20 */	beq .L_802000F8
/* 802000DC 001FD01C  3B A0 00 00 */	li r29, 0
/* 802000E0 001FD020  48 00 00 18 */	b .L_802000F8
.L_802000E4:
/* 802000E4 001FD024  28 00 00 03 */	cmplwi r0, 3
/* 802000E8 001FD028  41 82 00 10 */	beq .L_802000F8
/* 802000EC 001FD02C  28 00 00 06 */	cmplwi r0, 6
/* 802000F0 001FD030  41 82 00 08 */	beq .L_802000F8
/* 802000F4 001FD034  3B A0 00 00 */	li r29, 0
.L_802000F8:
/* 802000F8 001FD038  7F E3 FB 78 */	mr r3, r31
/* 802000FC 001FD03C  7F A4 EB 78 */	mr r4, r29
/* 80200100 001FD040  48 26 17 51 */	bl setGoalOnyon__Q23PSM7OtakaraFPQ24Game8Creature
/* 80200104 001FD044  28 1D 00 00 */	cmplwi r29, 0
/* 80200108 001FD048  41 82 00 30 */	beq .L_80200138
/* 8020010C 001FD04C  7F E3 FB 78 */	mr r3, r31
/* 80200110 001FD050  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 80200114 001FD054  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80200118 001FD058  7D 89 03 A6 */	mtctr r12
/* 8020011C 001FD05C  4E 80 04 21 */	bctrl 
/* 80200120 001FD060  48 00 00 18 */	b .L_80200138
.L_80200124:
/* 80200124 001FD064  7F E3 FB 78 */	mr r3, r31
/* 80200128 001FD068  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 8020012C 001FD06C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80200130 001FD070  7D 89 03 A6 */	mtctr r12
/* 80200134 001FD074  4E 80 04 21 */	bctrl 
.L_80200138:
/* 80200138 001FD078  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020013C 001FD07C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80200140 001FD080  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80200144 001FD084  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80200148 001FD088  7C 08 03 A6 */	mtlr r0
/* 8020014C 001FD08C  38 21 00 20 */	addi r1, r1, 0x20
/* 80200150 001FD090  4E 80 00 20 */	blr 

.global sound_otakaraEventRestart__Q34Game13PelletOtakara6ObjectFv
sound_otakaraEventRestart__Q34Game13PelletOtakara6ObjectFv:
/* 80200154 001FD094  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80200158 001FD098  7C 08 02 A6 */	mflr r0
/* 8020015C 001FD09C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80200160 001FD0A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80200164 001FD0A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80200168 001FD0A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020016C 001FD0AC  7C 7D 1B 78 */	mr r29, r3
/* 80200170 001FD0B0  80 63 03 30 */	lwz r3, 0x330(r3)
/* 80200174 001FD0B4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80200178 001FD0B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020017C 001FD0BC  7D 89 03 A6 */	mtctr r12
/* 80200180 001FD0C0  4E 80 04 21 */	bctrl 
/* 80200184 001FD0C4  2C 03 00 0C */	cmpwi r3, 0xc
/* 80200188 001FD0C8  41 82 00 20 */	beq .L_802001A8
/* 8020018C 001FD0CC  3C 60 80 48 */	lis r3, lbl_80481B50@ha
/* 80200190 001FD0D0  3C A0 80 48 */	lis r5, lbl_80481B64@ha
/* 80200194 001FD0D4  38 63 1B 50 */	addi r3, r3, lbl_80481B50@l
/* 80200198 001FD0D8  38 80 01 35 */	li r4, 0x135
/* 8020019C 001FD0DC  38 A5 1B 64 */	addi r5, r5, lbl_80481B64@l
/* 802001A0 001FD0E0  4C C6 31 82 */	crclr 6
/* 802001A4 001FD0E4  4B E2 A4 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802001A8:
/* 802001A8 001FD0E8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802001AC 001FD0EC  83 FD 03 30 */	lwz r31, 0x330(r29)
/* 802001B0 001FD0F0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802001B4 001FD0F4  2C 00 00 01 */	cmpwi r0, 1
/* 802001B8 001FD0F8  40 82 00 B4 */	bne .L_8020026C
/* 802001BC 001FD0FC  80 1D 03 D4 */	lwz r0, 0x3d4(r29)
/* 802001C0 001FD100  3B C0 FF FF */	li r30, -1
/* 802001C4 001FD104  2C 00 00 00 */	cmpwi r0, 0
/* 802001C8 001FD108  40 82 00 0C */	bne .L_802001D4
/* 802001CC 001FD10C  3B C0 00 00 */	li r30, 0
/* 802001D0 001FD110  48 00 00 10 */	b .L_802001E0
.L_802001D4:
/* 802001D4 001FD114  2C 00 00 01 */	cmpwi r0, 1
/* 802001D8 001FD118  40 82 00 08 */	bne .L_802001E0
/* 802001DC 001FD11C  3B C0 00 01 */	li r30, 1
.L_802001E0:
/* 802001E0 001FD120  2C 1E FF FF */	cmpwi r30, -1
/* 802001E4 001FD124  41 82 00 9C */	beq .L_80200280
/* 802001E8 001FD128  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 802001EC 001FD12C  7F C4 F3 78 */	mr r4, r30
/* 802001F0 001FD130  4B F7 B8 AD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 802001F4 001FD134  88 1D 03 2C */	lbz r0, 0x32c(r29)
/* 802001F8 001FD138  7C 7D 1B 78 */	mr r29, r3
/* 802001FC 001FD13C  28 00 00 04 */	cmplwi r0, 4
/* 80200200 001FD140  40 82 00 14 */	bne .L_80200214
/* 80200204 001FD144  2C 1E 00 00 */	cmpwi r30, 0
/* 80200208 001FD148  41 82 00 38 */	beq .L_80200240
/* 8020020C 001FD14C  3B A0 00 00 */	li r29, 0
/* 80200210 001FD150  48 00 00 30 */	b .L_80200240
.L_80200214:
/* 80200214 001FD154  28 00 00 05 */	cmplwi r0, 5
/* 80200218 001FD158  40 82 00 14 */	bne .L_8020022C
/* 8020021C 001FD15C  2C 1E 00 01 */	cmpwi r30, 1
/* 80200220 001FD160  41 82 00 20 */	beq .L_80200240
/* 80200224 001FD164  3B A0 00 00 */	li r29, 0
/* 80200228 001FD168  48 00 00 18 */	b .L_80200240
.L_8020022C:
/* 8020022C 001FD16C  28 00 00 03 */	cmplwi r0, 3
/* 80200230 001FD170  41 82 00 10 */	beq .L_80200240
/* 80200234 001FD174  28 00 00 06 */	cmplwi r0, 6
/* 80200238 001FD178  41 82 00 08 */	beq .L_80200240
/* 8020023C 001FD17C  3B A0 00 00 */	li r29, 0
.L_80200240:
/* 80200240 001FD180  7F E3 FB 78 */	mr r3, r31
/* 80200244 001FD184  7F A4 EB 78 */	mr r4, r29
/* 80200248 001FD188  48 26 16 09 */	bl setGoalOnyon__Q23PSM7OtakaraFPQ24Game8Creature
/* 8020024C 001FD18C  28 1D 00 00 */	cmplwi r29, 0
/* 80200250 001FD190  41 82 00 30 */	beq .L_80200280
/* 80200254 001FD194  7F E3 FB 78 */	mr r3, r31
/* 80200258 001FD198  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 8020025C 001FD19C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80200260 001FD1A0  7D 89 03 A6 */	mtctr r12
/* 80200264 001FD1A4  4E 80 04 21 */	bctrl 
/* 80200268 001FD1A8  48 00 00 18 */	b .L_80200280
.L_8020026C:
/* 8020026C 001FD1AC  7F E3 FB 78 */	mr r3, r31
/* 80200270 001FD1B0  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 80200274 001FD1B4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80200278 001FD1B8  7D 89 03 A6 */	mtctr r12
/* 8020027C 001FD1BC  4E 80 04 21 */	bctrl 
.L_80200280:
/* 80200280 001FD1C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80200284 001FD1C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80200288 001FD1C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020028C 001FD1CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80200290 001FD1D0  7C 08 03 A6 */	mtlr r0
/* 80200294 001FD1D4  38 21 00 20 */	addi r1, r1, 0x20
/* 80200298 001FD1D8  4E 80 00 20 */	blr 

.global sound_otakaraEventStop__Q34Game13PelletOtakara6ObjectFv
sound_otakaraEventStop__Q34Game13PelletOtakara6ObjectFv:
/* 8020029C 001FD1DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802002A0 001FD1E0  7C 08 02 A6 */	mflr r0
/* 802002A4 001FD1E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802002A8 001FD1E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802002AC 001FD1EC  7C 7F 1B 78 */	mr r31, r3
/* 802002B0 001FD1F0  80 63 03 30 */	lwz r3, 0x330(r3)
/* 802002B4 001FD1F4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 802002B8 001FD1F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802002BC 001FD1FC  7D 89 03 A6 */	mtctr r12
/* 802002C0 001FD200  4E 80 04 21 */	bctrl 
/* 802002C4 001FD204  2C 03 00 0C */	cmpwi r3, 0xc
/* 802002C8 001FD208  41 82 00 20 */	beq .L_802002E8
/* 802002CC 001FD20C  3C 60 80 48 */	lis r3, lbl_80481B50@ha
/* 802002D0 001FD210  3C A0 80 48 */	lis r5, lbl_80481B64@ha
/* 802002D4 001FD214  38 63 1B 50 */	addi r3, r3, lbl_80481B50@l
/* 802002D8 001FD218  38 80 01 68 */	li r4, 0x168
/* 802002DC 001FD21C  38 A5 1B 64 */	addi r5, r5, lbl_80481B64@l
/* 802002E0 001FD220  4C C6 31 82 */	crclr 6
/* 802002E4 001FD224  4B E2 A3 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802002E8:
/* 802002E8 001FD228  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 802002EC 001FD22C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 802002F0 001FD230  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 802002F4 001FD234  7D 89 03 A6 */	mtctr r12
/* 802002F8 001FD238  4E 80 04 21 */	bctrl 
/* 802002FC 001FD23C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200300 001FD240  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200304 001FD244  7C 08 03 A6 */	mtlr r0
/* 80200308 001FD248  38 21 00 10 */	addi r1, r1, 0x10
/* 8020030C 001FD24C  4E 80 00 20 */	blr 

.global sound_otakaraEventFinish__Q34Game13PelletOtakara6ObjectFv
sound_otakaraEventFinish__Q34Game13PelletOtakara6ObjectFv:
/* 80200310 001FD250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200314 001FD254  7C 08 02 A6 */	mflr r0
/* 80200318 001FD258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020031C 001FD25C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200320 001FD260  7C 7F 1B 78 */	mr r31, r3
/* 80200324 001FD264  80 63 03 30 */	lwz r3, 0x330(r3)
/* 80200328 001FD268  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8020032C 001FD26C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80200330 001FD270  7D 89 03 A6 */	mtctr r12
/* 80200334 001FD274  4E 80 04 21 */	bctrl 
/* 80200338 001FD278  2C 03 00 0C */	cmpwi r3, 0xc
/* 8020033C 001FD27C  41 82 00 20 */	beq .L_8020035C
/* 80200340 001FD280  3C 60 80 48 */	lis r3, lbl_80481B50@ha
/* 80200344 001FD284  3C A0 80 48 */	lis r5, lbl_80481B64@ha
/* 80200348 001FD288  38 63 1B 50 */	addi r3, r3, lbl_80481B50@l
/* 8020034C 001FD28C  38 80 01 75 */	li r4, 0x175
/* 80200350 001FD290  38 A5 1B 64 */	addi r5, r5, lbl_80481B64@l
/* 80200354 001FD294  4C C6 31 82 */	crclr 6
/* 80200358 001FD298  4B E2 A2 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020035C:
/* 8020035C 001FD29C  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 80200360 001FD2A0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80200364 001FD2A4  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80200368 001FD2A8  7D 89 03 A6 */	mtctr r12
/* 8020036C 001FD2AC  4E 80 04 21 */	bctrl 
/* 80200370 001FD2B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200374 001FD2B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200378 001FD2B8  7C 08 03 A6 */	mtlr r0
/* 8020037C 001FD2BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80200380 001FD2C0  4E 80 00 20 */	blr 

.global onCreateShape__Q34Game13PelletOtakara6ObjectFv
onCreateShape__Q34Game13PelletOtakara6ObjectFv:
/* 80200384 001FD2C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200388 001FD2C8  7C 08 02 A6 */	mflr r0
/* 8020038C 001FD2CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200390 001FD2D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200394 001FD2D4  7C 7F 1B 78 */	mr r31, r3
/* 80200398 001FD2D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8020039C 001FD2DC  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 802003A0 001FD2E0  88 03 02 5A */	lbz r0, 0x25a(r3)
/* 802003A4 001FD2E4  28 00 00 02 */	cmplwi r0, 2
/* 802003A8 001FD2E8  40 82 00 8C */	bne .L_80200434
/* 802003AC 001FD2EC  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802003B0 001FD2F0  3C 60 80 48 */	lis r3, lbl_80481B70@ha
/* 802003B4 001FD2F4  38 83 1B 70 */	addi r4, r3, lbl_80481B70@l
/* 802003B8 001FD2F8  80 65 00 08 */	lwz r3, 8(r5)
/* 802003BC 001FD2FC  80 63 00 04 */	lwz r3, 4(r3)
/* 802003C0 001FD300  80 63 00 64 */	lwz r3, 0x64(r3)
/* 802003C4 001FD304  4B E2 E9 C1 */	bl getIndex__10JUTNameTabCFPCc
/* 802003C8 001FD308  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802003CC 001FD30C  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 802003D0 001FD310  3B C0 00 00 */	li r30, 0
/* 802003D4 001FD314  80 64 00 08 */	lwz r3, 8(r4)
/* 802003D8 001FD318  80 63 00 04 */	lwz r3, 4(r3)
/* 802003DC 001FD31C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 802003E0 001FD320  7C 03 00 2E */	lwzx r0, r3, r0
/* 802003E4 001FD324  90 1F 04 58 */	stw r0, 0x458(r31)
/* 802003E8 001FD328  48 00 00 28 */	b .L_80200410
.L_802003EC:
/* 802003EC 001FD32C  80 65 00 70 */	lwz r3, 0x70(r5)
/* 802003F0 001FD330  7F C4 F3 78 */	mr r4, r30
/* 802003F4 001FD334  4B E2 EA 29 */	bl getName__10JUTNameTabCFUs
/* 802003F8 001FD338  38 82 B9 B8 */	addi r4, r2, lbl_80519D18@sda21
/* 802003FC 001FD33C  4B EC A2 C5 */	bl strcmp
/* 80200400 001FD340  2C 03 00 00 */	cmpwi r3, 0
/* 80200404 001FD344  40 82 00 08 */	bne .L_8020040C
/* 80200408 001FD348  B3 DF 04 5C */	sth r30, 0x45c(r31)
.L_8020040C:
/* 8020040C 001FD34C  3B DE 00 01 */	addi r30, r30, 1
.L_80200410:
/* 80200410 001FD350  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80200414 001FD354  57 C4 04 3E */	clrlwi r4, r30, 0x10
/* 80200418 001FD358  80 63 00 08 */	lwz r3, 8(r3)
/* 8020041C 001FD35C  80 A3 00 04 */	lwz r5, 4(r3)
/* 80200420 001FD360  80 65 00 6C */	lwz r3, 0x6c(r5)
/* 80200424 001FD364  A0 03 00 00 */	lhz r0, 0(r3)
/* 80200428 001FD368  7C 04 00 40 */	cmplw r4, r0
/* 8020042C 001FD36C  41 80 FF C0 */	blt .L_802003EC
/* 80200430 001FD370  48 00 00 14 */	b .L_80200444
.L_80200434:
/* 80200434 001FD374  38 60 00 00 */	li r3, 0
/* 80200438 001FD378  38 00 FF FF */	li r0, -1
/* 8020043C 001FD37C  90 7F 04 58 */	stw r3, 0x458(r31)
/* 80200440 001FD380  B0 1F 04 5C */	sth r0, 0x45c(r31)
.L_80200444:
/* 80200444 001FD384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200448 001FD388  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020044C 001FD38C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200450 001FD390  7C 08 03 A6 */	mtlr r0
/* 80200454 001FD394  38 21 00 10 */	addi r1, r1, 0x10
/* 80200458 001FD398  4E 80 00 20 */	blr 

.if version == 1
.global theEntry__Q34Game13PelletOtakara6ObjectFv
theEntry__Q34Game13PelletOtakara6ObjectFv:
/* 8020045C 001FD39C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200460 001FD3A0  7C 08 02 A6 */	mflr r0
/* 80200464 001FD3A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200468 001FD3A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020046C 001FD3AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80200470 001FD3B0  7C 7E 1B 78 */	mr r30, r3
/* 80200474 001FD3B4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80200478 001FD3B8  83 E4 00 58 */	lwz r31, 0x58(r4)
/* 8020047C 001FD3BC  80 1F 01 3C */	lwz r0, 0x15c(r31)
/* 80200480 001FD3C0  7C 00 F0 40 */	cmplw r0, r30
/* 80200484 001FD3C4  41 82 00 48 */	beq .L_802004CC
/* 80200488 001FD3C8  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8020048C 001FD3CC  88 03 02 5A */	lbz r0, 0x25a(r3)
/* 80200490 001FD3D0  28 00 00 02 */	cmplwi r0, 2
/* 80200494 001FD3D4  40 82 00 38 */	bne .L_802004CC
/* 80200498 001FD3D8  7F E3 FB 78 */	mr r3, r31
/* 8020049C 001FD3DC  38 80 00 08 */	li r4, 8
/* 802004A0 001FD3E0  4B F5 0F BD */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 802004A4 001FD3E4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802004A8 001FD3E8  80 63 00 08 */	lwz r3, 8(r3)
/* 802004AC 001FD3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802004B0 001FD3F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802004B4 001FD3F4  7D 89 03 A6 */	mtctr r12
/* 802004B8 001FD3F8  4E 80 04 21 */	bctrl 
/* 802004BC 001FD3FC  7F E3 FB 78 */	mr r3, r31
/* 802004C0 001FD400  38 80 00 00 */	li r4, 0
/* 802004C4 001FD404  4B F5 0F 99 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 802004C8 001FD408  48 00 00 1C */	b .L_802004E4
.L_802004CC:
/* 802004CC 001FD40C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802004D0 001FD410  80 63 00 08 */	lwz r3, 8(r3)
/* 802004D4 001FD414  81 83 00 00 */	lwz r12, 0(r3)
/* 802004D8 001FD418  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802004DC 001FD41C  7D 89 03 A6 */	mtctr r12
/* 802004E0 001FD420  4E 80 04 21 */	bctrl 
.L_802004E4:
/* 802004E4 001FD424  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802004E8 001FD428  80 63 00 08 */	lwz r3, 8(r3)
/* 802004EC 001FD42C  81 83 00 00 */	lwz r12, 0(r3)
/* 802004F0 001FD430  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802004F4 001FD434  7D 89 03 A6 */	mtctr r12
/* 802004F8 001FD438  4E 80 04 21 */	bctrl 
/* 802004FC 001FD43C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200500 001FD440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200504 001FD444  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200508 001FD448  7C 08 03 A6 */	mtlr r0
/* 8020050C 001FD44C  38 21 00 10 */	addi r1, r1, 0x10
/* 80200510 001FD450  4E 80 00 20 */	blr 
.else
.global theEntry__Q34Game13PelletOtakara6ObjectFv
theEntry__Q34Game13PelletOtakara6ObjectFv:
/* 8020045C 001FD39C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200460 001FD3A0  7C 08 02 A6 */	mflr r0
/* 80200464 001FD3A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200468 001FD3A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020046C 001FD3AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80200470 001FD3B0  7C 7E 1B 78 */	mr r30, r3
/* 80200474 001FD3B4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80200478 001FD3B8  83 E4 00 58 */	lwz r31, 0x58(r4)
/* 8020047C 001FD3BC  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 80200480 001FD3C0  7C 00 F0 40 */	cmplw r0, r30
/* 80200484 001FD3C4  41 82 00 48 */	beq .L_802004CC
/* 80200488 001FD3C8  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8020048C 001FD3CC  88 03 02 5A */	lbz r0, 0x25a(r3)
/* 80200490 001FD3D0  28 00 00 02 */	cmplwi r0, 2
/* 80200494 001FD3D4  40 82 00 38 */	bne .L_802004CC
/* 80200498 001FD3D8  7F E3 FB 78 */	mr r3, r31
/* 8020049C 001FD3DC  38 80 00 08 */	li r4, 8
/* 802004A0 001FD3E0  4B F5 0F BD */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 802004A4 001FD3E4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802004A8 001FD3E8  80 63 00 08 */	lwz r3, 8(r3)
/* 802004AC 001FD3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802004B0 001FD3F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802004B4 001FD3F4  7D 89 03 A6 */	mtctr r12
/* 802004B8 001FD3F8  4E 80 04 21 */	bctrl 
/* 802004BC 001FD3FC  7F E3 FB 78 */	mr r3, r31
/* 802004C0 001FD400  38 80 00 00 */	li r4, 0
/* 802004C4 001FD404  4B F5 0F 99 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 802004C8 001FD408  48 00 00 1C */	b .L_802004E4
.L_802004CC:
/* 802004CC 001FD40C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802004D0 001FD410  80 63 00 08 */	lwz r3, 8(r3)
/* 802004D4 001FD414  81 83 00 00 */	lwz r12, 0(r3)
/* 802004D8 001FD418  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802004DC 001FD41C  7D 89 03 A6 */	mtctr r12
/* 802004E0 001FD420  4E 80 04 21 */	bctrl 
.L_802004E4:
/* 802004E4 001FD424  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802004E8 001FD428  80 63 00 08 */	lwz r3, 8(r3)
/* 802004EC 001FD42C  81 83 00 00 */	lwz r12, 0(r3)
/* 802004F0 001FD430  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802004F4 001FD434  7D 89 03 A6 */	mtctr r12
/* 802004F8 001FD438  4E 80 04 21 */	bctrl 
/* 802004FC 001FD43C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200500 001FD440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200504 001FD444  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200508 001FD448  7C 08 03 A6 */	mtlr r0
/* 8020050C 001FD44C  38 21 00 10 */	addi r1, r1, 0x10
/* 80200510 001FD450  4E 80 00 20 */	blr 
.endif

.global changeMaterial__Q34Game13PelletOtakara6ObjectFv
changeMaterial__Q34Game13PelletOtakara6ObjectFv:
/* 80200514 001FD454  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80200518 001FD458  7C 08 02 A6 */	mflr r0
/* 8020051C 001FD45C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80200520 001FD460  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80200524 001FD464  7C 7F 1B 78 */	mr r31, r3
/* 80200528 001FD468  80 03 04 58 */	lwz r0, 0x458(r3)
/* 8020052C 001FD46C  28 00 00 00 */	cmplwi r0, 0
/* 80200530 001FD470  41 82 02 38 */	beq .L_80200768
/* 80200534 001FD474  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80200538 001FD478  38 60 00 00 */	li r3, 0
/* 8020053C 001FD47C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80200540 001FD480  2C 00 00 01 */	cmpwi r0, 1
/* 80200544 001FD484  41 82 00 0C */	beq .L_80200550
/* 80200548 001FD488  2C 00 00 03 */	cmpwi r0, 3
/* 8020054C 001FD48C  40 82 00 08 */	bne .L_80200554
.L_80200550:
/* 80200550 001FD490  38 60 00 01 */	li r3, 1
.L_80200554:
/* 80200554 001FD494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80200558 001FD498  40 82 02 10 */	bne .L_80200768
/* 8020055C 001FD49C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80200560 001FD4A0  38 81 00 08 */	addi r4, r1, 8
/* 80200564 001FD4A4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80200568 001FD4A8  80 63 02 5C */	lwz r3, 0x25c(r3)
/* 8020056C 001FD4AC  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80200570 001FD4B0  38 63 00 B4 */	addi r3, r3, 0xb4
/* 80200574 001FD4B4  4B EE A8 FD */	bl PSMTX44Copy
/* 80200578 001FD4B8  C0 A1 00 38 */	lfs f5, 0x38(r1)
/* 8020057C 001FD4BC  C0 81 00 3C */	lfs f4, 0x3c(r1)
/* 80200580 001FD4C0  C0 22 B9 C0 */	lfs f1, lbl_80519D20@sda21(r2)
/* 80200584 001FD4C4  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 80200588 001FD4C8  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 8020058C 001FD4CC  C0 02 B9 C4 */	lfs f0, lbl_80519D24@sda21(r2)
/* 80200590 001FD4D0  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 80200594 001FD4D4  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 80200598 001FD4D8  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8020059C 001FD4DC  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 802005A0 001FD4E0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802005A4 001FD4E4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802005A8 001FD4E8  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 802005AC 001FD4EC  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 802005B0 001FD4F0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802005B4 001FD4F4  80 63 00 08 */	lwz r3, 8(r3)
/* 802005B8 001FD4F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802005BC 001FD4FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802005C0 001FD500  7D 89 03 A6 */	mtctr r12
/* 802005C4 001FD504  4E 80 04 21 */	bctrl 
/* 802005C8 001FD508  80 7F 04 58 */	lwz r3, 0x458(r31)
/* 802005CC 001FD50C  38 80 00 01 */	li r4, 1
/* 802005D0 001FD510  80 63 00 28 */	lwz r3, 0x28(r3)
/* 802005D4 001FD514  81 83 00 00 */	lwz r12, 0(r3)
/* 802005D8 001FD518  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 802005DC 001FD51C  7D 89 03 A6 */	mtctr r12
/* 802005E0 001FD520  4E 80 04 21 */	bctrl 
/* 802005E4 001FD524  C0 01 00 08 */	lfs f0, 8(r1)
/* 802005E8 001FD528  C0 22 B9 C0 */	lfs f1, lbl_80519D20@sda21(r2)
/* 802005EC 001FD52C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802005F0 001FD530  C0 02 B9 C4 */	lfs f0, lbl_80519D24@sda21(r2)
/* 802005F4 001FD534  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802005F8 001FD538  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 802005FC 001FD53C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80200600 001FD540  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 80200604 001FD544  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80200608 001FD548  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 8020060C 001FD54C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80200610 001FD550  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 80200614 001FD554  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80200618 001FD558  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 8020061C 001FD55C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80200620 001FD560  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 80200624 001FD564  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80200628 001FD568  D0 43 00 40 */	stfs f2, 0x40(r3)
/* 8020062C 001FD56C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80200630 001FD570  D0 43 00 44 */	stfs f2, 0x44(r3)
/* 80200634 001FD574  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80200638 001FD578  D0 43 00 48 */	stfs f2, 0x48(r3)
/* 8020063C 001FD57C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80200640 001FD580  D0 43 00 4C */	stfs f2, 0x4c(r3)
/* 80200644 001FD584  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80200648 001FD588  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 8020064C 001FD58C  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 80200650 001FD590  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 80200654 001FD594  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 80200658 001FD598  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8020065C 001FD59C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80200660 001FD5A0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80200664 001FD5A4  80 63 00 08 */	lwz r3, 8(r3)
/* 80200668 001FD5A8  A8 1F 04 5C */	lha r0, 0x45c(r31)
/* 8020066C 001FD5AC  80 63 00 04 */	lwz r3, 4(r3)
/* 80200670 001FD5B0  80 A4 00 54 */	lwz r5, 0x54(r4)
/* 80200674 001FD5B4  54 00 2A F4 */	rlwinm r0, r0, 5, 0xb, 0x1a
/* 80200678 001FD5B8  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8020067C 001FD5BC  80 65 00 20 */	lwz r3, 0x20(r5)
/* 80200680 001FD5C0  80 C4 00 04 */	lwz r6, 4(r4)
/* 80200684 001FD5C4  88 A3 00 00 */	lbz r5, 0(r3)
/* 80200688 001FD5C8  7C C6 02 14 */	add r6, r6, r0
/* 8020068C 001FD5CC  98 A6 00 00 */	stb r5, 0(r6)
/* 80200690 001FD5D0  88 A3 00 01 */	lbz r5, 1(r3)
/* 80200694 001FD5D4  98 A6 00 01 */	stb r5, 1(r6)
/* 80200698 001FD5D8  A0 A3 00 02 */	lhz r5, 2(r3)
/* 8020069C 001FD5DC  B0 A6 00 02 */	sth r5, 2(r6)
/* 802006A0 001FD5E0  A0 A3 00 04 */	lhz r5, 4(r3)
/* 802006A4 001FD5E4  B0 A6 00 04 */	sth r5, 4(r6)
/* 802006A8 001FD5E8  88 A3 00 06 */	lbz r5, 6(r3)
/* 802006AC 001FD5EC  98 A6 00 06 */	stb r5, 6(r6)
/* 802006B0 001FD5F0  88 A3 00 07 */	lbz r5, 7(r3)
/* 802006B4 001FD5F4  98 A6 00 07 */	stb r5, 7(r6)
/* 802006B8 001FD5F8  88 A3 00 08 */	lbz r5, 8(r3)
/* 802006BC 001FD5FC  98 A6 00 08 */	stb r5, 8(r6)
/* 802006C0 001FD600  88 A3 00 09 */	lbz r5, 9(r3)
/* 802006C4 001FD604  98 A6 00 09 */	stb r5, 9(r6)
/* 802006C8 001FD608  A0 A3 00 0A */	lhz r5, 0xa(r3)
/* 802006CC 001FD60C  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 802006D0 001FD610  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 802006D4 001FD614  90 A6 00 0C */	stw r5, 0xc(r6)
/* 802006D8 001FD618  88 A3 00 10 */	lbz r5, 0x10(r3)
/* 802006DC 001FD61C  98 A6 00 10 */	stb r5, 0x10(r6)
/* 802006E0 001FD620  88 A3 00 11 */	lbz r5, 0x11(r3)
/* 802006E4 001FD624  98 A6 00 11 */	stb r5, 0x11(r6)
/* 802006E8 001FD628  88 A3 00 12 */	lbz r5, 0x12(r3)
/* 802006EC 001FD62C  98 A6 00 12 */	stb r5, 0x12(r6)
/* 802006F0 001FD630  88 A3 00 13 */	lbz r5, 0x13(r3)
/* 802006F4 001FD634  98 A6 00 13 */	stb r5, 0x13(r6)
/* 802006F8 001FD638  88 A3 00 14 */	lbz r5, 0x14(r3)
/* 802006FC 001FD63C  98 A6 00 14 */	stb r5, 0x14(r6)
/* 80200700 001FD640  88 A3 00 15 */	lbz r5, 0x15(r3)
/* 80200704 001FD644  98 A6 00 15 */	stb r5, 0x15(r6)
/* 80200708 001FD648  88 A3 00 16 */	lbz r5, 0x16(r3)
/* 8020070C 001FD64C  98 A6 00 16 */	stb r5, 0x16(r6)
/* 80200710 001FD650  88 A3 00 17 */	lbz r5, 0x17(r3)
/* 80200714 001FD654  98 A6 00 17 */	stb r5, 0x17(r6)
/* 80200718 001FD658  88 A3 00 18 */	lbz r5, 0x18(r3)
/* 8020071C 001FD65C  98 A6 00 18 */	stb r5, 0x18(r6)
/* 80200720 001FD660  88 A3 00 19 */	lbz r5, 0x19(r3)
/* 80200724 001FD664  98 A6 00 19 */	stb r5, 0x19(r6)
/* 80200728 001FD668  A8 A3 00 1A */	lha r5, 0x1a(r3)
/* 8020072C 001FD66C  B0 A6 00 1A */	sth r5, 0x1a(r6)
/* 80200730 001FD670  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 80200734 001FD674  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 80200738 001FD678  80 A4 00 04 */	lwz r5, 4(r4)
/* 8020073C 001FD67C  7C C5 02 14 */	add r6, r5, r0
/* 80200740 001FD680  80 A6 00 1C */	lwz r5, 0x1c(r6)
/* 80200744 001FD684  7C A3 2A 14 */	add r5, r3, r5
/* 80200748 001FD688  7C A6 28 50 */	subf r5, r6, r5
/* 8020074C 001FD68C  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 80200750 001FD690  80 84 00 04 */	lwz r4, 4(r4)
/* 80200754 001FD694  7C 84 02 14 */	add r4, r4, r0
/* 80200758 001FD698  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8020075C 001FD69C  7C 03 02 14 */	add r0, r3, r0
/* 80200760 001FD6A0  7C 04 00 50 */	subf r0, r4, r0
/* 80200764 001FD6A4  90 04 00 0C */	stw r0, 0xc(r4)
.L_80200768:
/* 80200768 001FD6A8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8020076C 001FD6AC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80200770 001FD6B0  7C 08 03 A6 */	mtlr r0
/* 80200774 001FD6B4  38 21 00 50 */	addi r1, r1, 0x50
/* 80200778 001FD6B8  4E 80 00 20 */	blr 

.global __ct__Q34Game13PelletOtakara3MgrFv
__ct__Q34Game13PelletOtakara3MgrFv:
/* 8020077C 001FD6BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200780 001FD6C0  7C 08 02 A6 */	mflr r0
/* 80200784 001FD6C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200788 001FD6C8  7C 80 07 35 */	extsh. r0, r4
/* 8020078C 001FD6CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200790 001FD6D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80200794 001FD6D4  7C 7E 1B 78 */	mr r30, r3
/* 80200798 001FD6D8  41 82 00 0C */	beq .L_802007A4
/* 8020079C 001FD6DC  38 1E 00 A0 */	addi r0, r30, 0xa0
/* 802007A0 001FD6E0  90 1E 00 04 */	stw r0, 4(r30)
.L_802007A4:
/* 802007A4 001FD6E4  7F C3 F3 78 */	mr r3, r30
/* 802007A8 001FD6E8  38 80 00 00 */	li r4, 0
/* 802007AC 001FD6EC  38 A0 00 03 */	li r5, 3
/* 802007B0 001FD6F0  4B F6 B2 11 */	bl __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind
/* 802007B4 001FD6F4  3B FE 00 54 */	addi r31, r30, 0x54
/* 802007B8 001FD6F8  7F E3 FB 78 */	mr r3, r31
/* 802007BC 001FD6FC  48 21 0B D5 */	bl __ct__5CNodeFv
/* 802007C0 001FD700  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 802007C4 001FD704  3C 80 80 4C */	lis r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 802007C8 001FD708  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 802007CC 001FD70C  3C 60 80 4C */	lis r3, "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"@ha
/* 802007D0 001FD710  90 1F 00 00 */	stw r0, 0(r31)
/* 802007D4 001FD714  38 04 E7 8C */	addi r0, r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 802007D8 001FD718  38 83 E6 C0 */	addi r4, r3, "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"@l
/* 802007DC 001FD71C  38 A0 00 00 */	li r5, 0
/* 802007E0 001FD720  90 1F 00 00 */	stw r0, 0(r31)
/* 802007E4 001FD724  38 04 00 98 */	addi r0, r4, 0x98
/* 802007E8 001FD728  38 7E 00 70 */	addi r3, r30, 0x70
/* 802007EC 001FD72C  98 BF 00 18 */	stb r5, 0x18(r31)
/* 802007F0 001FD730  90 9E 00 00 */	stw r4, 0(r30)
/* 802007F4 001FD734  90 1E 00 54 */	stw r0, 0x54(r30)
/* 802007F8 001FD738  48 00 19 F9 */	bl "__ct__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
/* 802007FC 001FD73C  3C 80 80 4C */	lis r4, __vt__Q34Game13PelletOtakara3Mgr@ha
/* 80200800 001FD740  7F C3 F3 78 */	mr r3, r30
/* 80200804 001FD744  38 84 E4 EC */	addi r4, r4, __vt__Q34Game13PelletOtakara3Mgr@l
/* 80200808 001FD748  90 9E 00 00 */	stw r4, 0(r30)
/* 8020080C 001FD74C  38 04 00 98 */	addi r0, r4, 0x98
/* 80200810 001FD750  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80200814 001FD754  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200818 001FD758  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020081C 001FD75C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200820 001FD760  7C 08 03 A6 */	mtlr r0
/* 80200824 001FD764  38 21 00 10 */	addi r1, r1, 0x10
/* 80200828 001FD768  4E 80 00 20 */	blr 

.global "__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020082C 001FD76C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200830 001FD770  7C 08 02 A6 */	mflr r0
/* 80200834 001FD774  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200838 001FD778  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020083C 001FD77C  7C 9F 23 78 */	mr r31, r4
/* 80200840 001FD780  93 C1 00 08 */	stw r30, 8(r1)
/* 80200844 001FD784  7C 7E 1B 79 */	or. r30, r3, r3
/* 80200848 001FD788  41 82 01 64 */	beq .L_802009AC
/* 8020084C 001FD78C  3C 60 80 4C */	lis r3, "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200850 001FD790  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80200854 001FD794  38 63 E6 C0 */	addi r3, r3, "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200858 001FD798  90 7E 00 00 */	stw r3, 0(r30)
/* 8020085C 001FD79C  38 03 00 98 */	addi r0, r3, 0x98
/* 80200860 001FD7A0  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80200864 001FD7A4  41 82 00 68 */	beq .L_802008CC
/* 80200868 001FD7A8  3C 60 80 4C */	lis r3, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 8020086C 001FD7AC  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80200870 001FD7B0  38 63 E6 34 */	addi r3, r3, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200874 001FD7B4  90 7E 00 70 */	stw r3, 0x70(r30)
/* 80200878 001FD7B8  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020087C 001FD7BC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 80200880 001FD7C0  41 82 00 4C */	beq .L_802008CC
/* 80200884 001FD7C4  3C 60 80 4C */	lis r3, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200888 001FD7C8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 8020088C 001FD7CC  38 63 E5 B8 */	addi r3, r3, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200890 001FD7D0  90 7E 00 70 */	stw r3, 0x70(r30)
/* 80200894 001FD7D4  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200898 001FD7D8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8020089C 001FD7DC  41 82 00 30 */	beq .L_802008CC
/* 802008A0 001FD7E0  3C 60 80 4C */	lis r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 802008A4 001FD7E4  34 1E 00 70 */	addic. r0, r30, 0x70
/* 802008A8 001FD7E8  38 03 E7 8C */	addi r0, r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 802008AC 001FD7EC  90 1E 00 70 */	stw r0, 0x70(r30)
/* 802008B0 001FD7F0  41 82 00 1C */	beq .L_802008CC
/* 802008B4 001FD7F4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802008B8 001FD7F8  38 7E 00 70 */	addi r3, r30, 0x70
/* 802008BC 001FD7FC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802008C0 001FD800  38 80 00 00 */	li r4, 0
/* 802008C4 001FD804  90 1E 00 70 */	stw r0, 0x70(r30)
/* 802008C8 001FD808  48 21 0C C1 */	bl __dt__5CNodeFv
.L_802008CC:
/* 802008CC 001FD80C  34 1E 00 54 */	addic. r0, r30, 0x54
/* 802008D0 001FD810  41 82 00 30 */	beq .L_80200900
/* 802008D4 001FD814  3C 60 80 4C */	lis r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 802008D8 001FD818  34 1E 00 54 */	addic. r0, r30, 0x54
/* 802008DC 001FD81C  38 03 E7 8C */	addi r0, r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 802008E0 001FD820  90 1E 00 54 */	stw r0, 0x54(r30)
/* 802008E4 001FD824  41 82 00 1C */	beq .L_80200900
/* 802008E8 001FD828  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802008EC 001FD82C  38 7E 00 54 */	addi r3, r30, 0x54
/* 802008F0 001FD830  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802008F4 001FD834  38 80 00 00 */	li r4, 0
/* 802008F8 001FD838  90 1E 00 54 */	stw r0, 0x54(r30)
/* 802008FC 001FD83C  48 21 0C 8D */	bl __dt__5CNodeFv
.L_80200900:
/* 80200900 001FD840  28 1E 00 00 */	cmplwi r30, 0
/* 80200904 001FD844  41 82 00 98 */	beq .L_8020099C
/* 80200908 001FD848  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 8020090C 001FD84C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200910 001FD850  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 80200914 001FD854  90 1E 00 00 */	stw r0, 0(r30)
/* 80200918 001FD858  41 82 00 84 */	beq .L_8020099C
/* 8020091C 001FD85C  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 80200920 001FD860  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200924 001FD864  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 80200928 001FD868  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8020092C 001FD86C  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200930 001FD870  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80200934 001FD874  41 82 00 68 */	beq .L_8020099C
/* 80200938 001FD878  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 8020093C 001FD87C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200940 001FD880  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 80200944 001FD884  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80200948 001FD888  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020094C 001FD88C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80200950 001FD890  41 82 00 4C */	beq .L_8020099C
/* 80200954 001FD894  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 80200958 001FD898  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8020095C 001FD89C  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 80200960 001FD8A0  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80200964 001FD8A4  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200968 001FD8A8  90 1E 00 34 */	stw r0, 0x34(r30)
/* 8020096C 001FD8AC  41 82 00 30 */	beq .L_8020099C
/* 80200970 001FD8B0  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 80200974 001FD8B4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200978 001FD8B8  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 8020097C 001FD8BC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80200980 001FD8C0  41 82 00 1C */	beq .L_8020099C
/* 80200984 001FD8C4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80200988 001FD8C8  38 7E 00 18 */	addi r3, r30, 0x18
/* 8020098C 001FD8CC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80200990 001FD8D0  38 80 00 00 */	li r4, 0
/* 80200994 001FD8D4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80200998 001FD8D8  48 21 0B F1 */	bl __dt__5CNodeFv
.L_8020099C:
/* 8020099C 001FD8DC  7F E0 07 35 */	extsh. r0, r31
/* 802009A0 001FD8E0  40 81 00 0C */	ble .L_802009AC
/* 802009A4 001FD8E4  7F C3 F3 78 */	mr r3, r30
/* 802009A8 001FD8E8  4B E2 37 0D */	bl __dl__FPv
.L_802009AC:
/* 802009AC 001FD8EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802009B0 001FD8F0  7F C3 F3 78 */	mr r3, r30
/* 802009B4 001FD8F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802009B8 001FD8F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802009BC 001FD8FC  7C 08 03 A6 */	mtlr r0
/* 802009C0 001FD900  38 21 00 10 */	addi r1, r1, 0x10
/* 802009C4 001FD904  4E 80 00 20 */	blr 

.global "__dt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"__dt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802009C8 001FD908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802009CC 001FD90C  7C 08 02 A6 */	mflr r0
/* 802009D0 001FD910  90 01 00 14 */	stw r0, 0x14(r1)
/* 802009D4 001FD914  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802009D8 001FD918  7C 9F 23 78 */	mr r31, r4
/* 802009DC 001FD91C  93 C1 00 08 */	stw r30, 8(r1)
/* 802009E0 001FD920  7C 7E 1B 79 */	or. r30, r3, r3
/* 802009E4 001FD924  41 82 00 68 */	beq .L_80200A4C
/* 802009E8 001FD928  3C 80 80 4C */	lis r4, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 802009EC 001FD92C  38 84 E6 34 */	addi r4, r4, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 802009F0 001FD930  90 9E 00 00 */	stw r4, 0(r30)
/* 802009F4 001FD934  38 04 00 2C */	addi r0, r4, 0x2c
/* 802009F8 001FD938  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802009FC 001FD93C  41 82 00 40 */	beq .L_80200A3C
/* 80200A00 001FD940  3C 80 80 4C */	lis r4, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200A04 001FD944  38 84 E5 B8 */	addi r4, r4, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200A08 001FD948  90 9E 00 00 */	stw r4, 0(r30)
/* 80200A0C 001FD94C  38 04 00 2C */	addi r0, r4, 0x2c
/* 80200A10 001FD950  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80200A14 001FD954  41 82 00 28 */	beq .L_80200A3C
/* 80200A18 001FD958  3C 80 80 4C */	lis r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 80200A1C 001FD95C  38 04 E7 8C */	addi r0, r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 80200A20 001FD960  90 1E 00 00 */	stw r0, 0(r30)
/* 80200A24 001FD964  41 82 00 18 */	beq .L_80200A3C
/* 80200A28 001FD968  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80200A2C 001FD96C  38 80 00 00 */	li r4, 0
/* 80200A30 001FD970  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80200A34 001FD974  90 1E 00 00 */	stw r0, 0(r30)
/* 80200A38 001FD978  48 21 0B 51 */	bl __dt__5CNodeFv
.L_80200A3C:
/* 80200A3C 001FD97C  7F E0 07 35 */	extsh. r0, r31
/* 80200A40 001FD980  40 81 00 0C */	ble .L_80200A4C
/* 80200A44 001FD984  7F C3 F3 78 */	mr r3, r30
/* 80200A48 001FD988  4B E2 36 6D */	bl __dl__FPv
.L_80200A4C:
/* 80200A4C 001FD98C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200A50 001FD990  7F C3 F3 78 */	mr r3, r30
/* 80200A54 001FD994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200A58 001FD998  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200A5C 001FD99C  7C 08 03 A6 */	mtlr r0
/* 80200A60 001FD9A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80200A64 001FD9A4  4E 80 00 20 */	blr 

.global "__dt__40Container<Q34Game13PelletOtakara6Object>Fv"
"__dt__40Container<Q34Game13PelletOtakara6Object>Fv":
/* 80200A68 001FD9A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200A6C 001FD9AC  7C 08 02 A6 */	mflr r0
/* 80200A70 001FD9B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200A74 001FD9B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200A78 001FD9B8  7C 9F 23 78 */	mr r31, r4
/* 80200A7C 001FD9BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80200A80 001FD9C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80200A84 001FD9C4  41 82 00 38 */	beq .L_80200ABC
/* 80200A88 001FD9C8  3C 80 80 4C */	lis r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 80200A8C 001FD9CC  38 04 E7 8C */	addi r0, r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 80200A90 001FD9D0  90 1E 00 00 */	stw r0, 0(r30)
/* 80200A94 001FD9D4  41 82 00 18 */	beq .L_80200AAC
/* 80200A98 001FD9D8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80200A9C 001FD9DC  38 80 00 00 */	li r4, 0
/* 80200AA0 001FD9E0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80200AA4 001FD9E4  90 1E 00 00 */	stw r0, 0(r30)
/* 80200AA8 001FD9E8  48 21 0A E1 */	bl __dt__5CNodeFv
.L_80200AAC:
/* 80200AAC 001FD9EC  7F E0 07 35 */	extsh. r0, r31
/* 80200AB0 001FD9F0  40 81 00 0C */	ble .L_80200ABC
/* 80200AB4 001FD9F4  7F C3 F3 78 */	mr r3, r30
/* 80200AB8 001FD9F8  4B E2 35 FD */	bl __dl__FPv
.L_80200ABC:
/* 80200ABC 001FD9FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200AC0 001FDA00  7F C3 F3 78 */	mr r3, r30
/* 80200AC4 001FDA04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200AC8 001FDA08  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200ACC 001FDA0C  7C 08 03 A6 */	mtlr r0
/* 80200AD0 001FDA10  38 21 00 10 */	addi r1, r1, 0x10
/* 80200AD4 001FDA14  4E 80 00 20 */	blr 

.global setupResources__Q34Game13PelletOtakara3MgrFv
setupResources__Q34Game13PelletOtakara3MgrFv:
/* 80200AD8 001FDA18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200ADC 001FDA1C  7C 08 02 A6 */	mflr r0
/* 80200AE0 001FDA20  38 82 B9 C8 */	addi r4, r2, lbl_80519D28@sda21
/* 80200AE4 001FDA24  38 A0 00 00 */	li r5, 0
/* 80200AE8 001FDA28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200AEC 001FDA2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200AF0 001FDA30  7C 7F 1B 78 */	mr r31, r3
/* 80200AF4 001FDA34  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80200AF8 001FDA38  48 22 28 65 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80200AFC 001FDA3C  7F E3 FB 78 */	mr r3, r31
/* 80200B00 001FDA40  38 80 00 20 */	li r4, 0x20
/* 80200B04 001FDA44  48 00 19 11 */	bl "alloc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
/* 80200B08 001FDA48  3C 80 80 48 */	lis r4, lbl_80481B80@ha
/* 80200B0C 001FDA4C  7F E3 FB 78 */	mr r3, r31
/* 80200B10 001FDA50  38 84 1B 80 */	addi r4, r4, lbl_80481B80@l
/* 80200B14 001FDA54  4B F6 B5 B9 */	bl load_texArc__Q24Game13BasePelletMgrFPc
/* 80200B18 001FDA58  38 7F 00 18 */	addi r3, r31, 0x18
/* 80200B1C 001FDA5C  38 80 01 00 */	li r4, 0x100
/* 80200B20 001FDA60  4B FF A4 A5 */	bl "alloc__24MonoObjectMgr<8CollPart>Fi"
/* 80200B24 001FDA64  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80200B28 001FDA68  38 82 B9 C8 */	addi r4, r2, lbl_80519D28@sda21
/* 80200B2C 001FDA6C  48 22 28 39 */	bl heapStatusEnd__6SystemFPc
/* 80200B30 001FDA70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200B34 001FDA74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200B38 001FDA78  7C 08 03 A6 */	mtlr r0
/* 80200B3C 001FDA7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80200B40 001FDA80  4E 80 00 20 */	blr 

.global generatorNewPelletParm__Q34Game13PelletOtakara3MgrFv
generatorNewPelletParm__Q34Game13PelletOtakara3MgrFv:
/* 80200B44 001FDA84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200B48 001FDA88  7C 08 02 A6 */	mflr r0
/* 80200B4C 001FDA8C  38 60 00 04 */	li r3, 4
/* 80200B50 001FDA90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200B54 001FDA94  4B E2 33 51 */	bl __nw__FUl
/* 80200B58 001FDA98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200B5C 001FDA9C  7C 08 03 A6 */	mtlr r0
/* 80200B60 001FDAA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80200B64 001FDAA4  4E 80 00 20 */	blr 

.global "generatorBirth__Q34Game13PelletOtakara3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
"generatorBirth__Q34Game13PelletOtakara3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm":
/* 80200B68 001FDAA8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80200B6C 001FDAAC  7C 08 02 A6 */	mflr r0
/* 80200B70 001FDAB0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80200B74 001FDAB4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80200B78 001FDAB8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80200B7C 001FDABC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80200B80 001FDAC0  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80200B84 001FDAC4  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80200B88 001FDAC8  7C DF 33 78 */	mr r31, r6
/* 80200B8C 001FDACC  7C 9D 23 78 */	mr r29, r4
/* 80200B90 001FDAD0  80 6D 95 20 */	lwz r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 80200B94 001FDAD4  7C BE 2B 78 */	mr r30, r5
/* 80200B98 001FDAD8  80 86 00 00 */	lwz r4, 0(r6)
/* 80200B9C 001FDADC  4B F6 B1 ED */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80200BA0 001FDAE0  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 80200BA4 001FDAE4  39 00 00 00 */	li r8, 0
/* 80200BA8 001FDAE8  38 04 A2 F4 */	addi r0, r4, __vt__Q24Game15CreatureInitArg@l
/* 80200BAC 001FDAEC  38 A0 FF FF */	li r5, -1
/* 80200BB0 001FDAF0  3C 80 80 4B */	lis r4, __vt__Q24Game13PelletInitArg@ha
/* 80200BB4 001FDAF4  90 01 00 38 */	stw r0, 0x38(r1)
/* 80200BB8 001FDAF8  38 04 A2 B8 */	addi r0, r4, __vt__Q24Game13PelletInitArg@l
/* 80200BBC 001FDAFC  38 E0 00 FF */	li r7, 0xff
/* 80200BC0 001FDB00  38 C0 00 01 */	li r6, 1
/* 80200BC4 001FDB04  90 01 00 38 */	stw r0, 0x38(r1)
/* 80200BC8 001FDB08  38 00 00 03 */	li r0, 3
/* 80200BCC 001FDB0C  38 81 00 38 */	addi r4, r1, 0x38
/* 80200BD0 001FDB10  99 01 00 54 */	stb r8, 0x54(r1)
/* 80200BD4 001FDB14  B1 01 00 4C */	sth r8, 0x4c(r1)
/* 80200BD8 001FDB18  98 E1 00 4E */	stb r7, 0x4e(r1)
/* 80200BDC 001FDB1C  91 01 00 50 */	stw r8, 0x50(r1)
/* 80200BE0 001FDB20  99 01 00 4F */	stb r8, 0x4f(r1)
/* 80200BE4 001FDB24  98 C1 00 3C */	stb r6, 0x3c(r1)
/* 80200BE8 001FDB28  99 01 00 55 */	stb r8, 0x55(r1)
/* 80200BEC 001FDB2C  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80200BF0 001FDB30  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80200BF4 001FDB34  99 01 00 56 */	stb r8, 0x56(r1)
/* 80200BF8 001FDB38  99 01 00 57 */	stb r8, 0x57(r1)
/* 80200BFC 001FDB3C  80 A3 00 40 */	lwz r5, 0x40(r3)
/* 80200C00 001FDB40  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80200C04 001FDB44  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80200C08 001FDB48  98 01 00 4E */	stb r0, 0x4e(r1)
/* 80200C0C 001FDB4C  80 1F 00 00 */	lwz r0, 0(r31)
/* 80200C10 001FDB50  90 01 00 48 */	stw r0, 0x48(r1)
/* 80200C14 001FDB54  91 01 00 50 */	stw r8, 0x50(r1)
/* 80200C18 001FDB58  4B F6 C8 A9 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 80200C1C 001FDB5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80200C20 001FDB60  41 82 00 68 */	beq .L_80200C88
/* 80200C24 001FDB64  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80200C28 001FDB68  28 03 00 00 */	cmplwi r3, 0
/* 80200C2C 001FDB6C  41 82 00 30 */	beq .L_80200C5C
/* 80200C30 001FDB70  81 83 00 04 */	lwz r12, 4(r3)
/* 80200C34 001FDB74  7F A4 EB 78 */	mr r4, r29
/* 80200C38 001FDB78  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80200C3C 001FDB7C  7D 89 03 A6 */	mtctr r12
/* 80200C40 001FDB80  4E 80 04 21 */	bctrl 
/* 80200C44 001FDB84  FF E0 08 90 */	fmr f31, f1
/* 80200C48 001FDB88  7F E3 FB 78 */	mr r3, r31
/* 80200C4C 001FDB8C  4B F6 5D 89 */	bl getCylinderHeight__Q24Game6PelletFv
/* 80200C50 001FDB90  C0 02 B9 D0 */	lfs f0, lbl_80519D30@sda21(r2)
/* 80200C54 001FDB94  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 80200C58 001FDB98  D0 1D 00 04 */	stfs f0, 4(r29)
.L_80200C5C:
/* 80200C5C 001FDB9C  7F E3 FB 78 */	mr r3, r31
/* 80200C60 001FDBA0  7F A4 EB 78 */	mr r4, r29
/* 80200C64 001FDBA4  38 A0 00 00 */	li r5, 0
/* 80200C68 001FDBA8  4B F3 A5 41 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80200C6C 001FDBAC  7F A4 EB 78 */	mr r4, r29
/* 80200C70 001FDBB0  7F C5 F3 78 */	mr r5, r30
/* 80200C74 001FDBB4  38 61 00 08 */	addi r3, r1, 8
/* 80200C78 001FDBB8  48 22 7C 11 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 80200C7C 001FDBBC  7F E3 FB 78 */	mr r3, r31
/* 80200C80 001FDBC0  38 81 00 08 */	addi r4, r1, 8
/* 80200C84 001FDBC4  4B F6 78 49 */	bl setOrientation__Q24Game6PelletFR7Matrixf
.L_80200C88:
/* 80200C88 001FDBC8  7F E3 FB 78 */	mr r3, r31
/* 80200C8C 001FDBCC  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80200C90 001FDBD0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80200C94 001FDBD4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80200C98 001FDBD8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80200C9C 001FDBDC  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80200CA0 001FDBE0  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 80200CA4 001FDBE4  7C 08 03 A6 */	mtlr r0
/* 80200CA8 001FDBE8  38 21 00 80 */	addi r1, r1, 0x80
/* 80200CAC 001FDBEC  4E 80 00 20 */	blr 

.global generatorWrite__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParm
generatorWrite__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParm:
/* 80200CB0 001FDBF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200CB4 001FDBF4  7C 08 02 A6 */	mflr r0
/* 80200CB8 001FDBF8  7C 83 23 78 */	mr r3, r4
/* 80200CBC 001FDBFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200CC0 001FDC00  80 05 00 00 */	lwz r0, 0(r5)
/* 80200CC4 001FDC04  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80200CC8 001FDC08  7C 04 07 34 */	extsh r4, r0
/* 80200CCC 001FDC0C  48 21 4A 65 */	bl writeShort__6StreamFs
/* 80200CD0 001FDC10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200CD4 001FDC14  7C 08 03 A6 */	mtlr r0
/* 80200CD8 001FDC18  38 21 00 10 */	addi r1, r1, 0x10
/* 80200CDC 001FDC1C  4E 80 00 20 */	blr 

.global generatorRead__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParmUl
generatorRead__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParmUl:
/* 80200CE0 001FDC20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200CE4 001FDC24  7C 08 02 A6 */	mflr r0
/* 80200CE8 001FDC28  7C 83 23 78 */	mr r3, r4
/* 80200CEC 001FDC2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200CF0 001FDC30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200CF4 001FDC34  7C BF 2B 78 */	mr r31, r5
/* 80200CF8 001FDC38  48 21 3A 6D */	bl readShort__6StreamFv
/* 80200CFC 001FDC3C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80200D00 001FDC40  90 1F 00 00 */	stw r0, 0(r31)
/* 80200D04 001FDC44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200D08 001FDC48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200D0C 001FDC4C  7C 08 03 A6 */	mtlr r0
/* 80200D10 001FDC50  38 21 00 10 */	addi r1, r1, 0x10
/* 80200D14 001FDC54  4E 80 00 20 */	blr 

.global __dt__Q34Game13PelletOtakara3MgrFv
__dt__Q34Game13PelletOtakara3MgrFv:
/* 80200D18 001FDC58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200D1C 001FDC5C  7C 08 02 A6 */	mflr r0
/* 80200D20 001FDC60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200D24 001FDC64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200D28 001FDC68  7C 9F 23 78 */	mr r31, r4
/* 80200D2C 001FDC6C  93 C1 00 08 */	stw r30, 8(r1)
/* 80200D30 001FDC70  7C 7E 1B 79 */	or. r30, r3, r3
/* 80200D34 001FDC74  41 82 01 7C */	beq .L_80200EB0
/* 80200D38 001FDC78  3C 60 80 4C */	lis r3, __vt__Q34Game13PelletOtakara3Mgr@ha
/* 80200D3C 001FDC7C  38 63 E4 EC */	addi r3, r3, __vt__Q34Game13PelletOtakara3Mgr@l
/* 80200D40 001FDC80  90 7E 00 00 */	stw r3, 0(r30)
/* 80200D44 001FDC84  38 03 00 98 */	addi r0, r3, 0x98
/* 80200D48 001FDC88  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80200D4C 001FDC8C  41 82 01 54 */	beq .L_80200EA0
/* 80200D50 001FDC90  3C 60 80 4C */	lis r3, "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200D54 001FDC94  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80200D58 001FDC98  38 63 E6 C0 */	addi r3, r3, "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200D5C 001FDC9C  90 7E 00 00 */	stw r3, 0(r30)
/* 80200D60 001FDCA0  38 03 00 98 */	addi r0, r3, 0x98
/* 80200D64 001FDCA4  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80200D68 001FDCA8  41 82 00 68 */	beq .L_80200DD0
/* 80200D6C 001FDCAC  3C 60 80 4C */	lis r3, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200D70 001FDCB0  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80200D74 001FDCB4  38 63 E6 34 */	addi r3, r3, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200D78 001FDCB8  90 7E 00 70 */	stw r3, 0x70(r30)
/* 80200D7C 001FDCBC  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200D80 001FDCC0  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 80200D84 001FDCC4  41 82 00 4C */	beq .L_80200DD0
/* 80200D88 001FDCC8  3C 60 80 4C */	lis r3, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200D8C 001FDCCC  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80200D90 001FDCD0  38 63 E5 B8 */	addi r3, r3, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200D94 001FDCD4  90 7E 00 70 */	stw r3, 0x70(r30)
/* 80200D98 001FDCD8  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200D9C 001FDCDC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 80200DA0 001FDCE0  41 82 00 30 */	beq .L_80200DD0
/* 80200DA4 001FDCE4  3C 60 80 4C */	lis r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 80200DA8 001FDCE8  34 1E 00 70 */	addic. r0, r30, 0x70
/* 80200DAC 001FDCEC  38 03 E7 8C */	addi r0, r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 80200DB0 001FDCF0  90 1E 00 70 */	stw r0, 0x70(r30)
/* 80200DB4 001FDCF4  41 82 00 1C */	beq .L_80200DD0
/* 80200DB8 001FDCF8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80200DBC 001FDCFC  38 7E 00 70 */	addi r3, r30, 0x70
/* 80200DC0 001FDD00  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80200DC4 001FDD04  38 80 00 00 */	li r4, 0
/* 80200DC8 001FDD08  90 1E 00 70 */	stw r0, 0x70(r30)
/* 80200DCC 001FDD0C  48 21 07 BD */	bl __dt__5CNodeFv
.L_80200DD0:
/* 80200DD0 001FDD10  34 1E 00 54 */	addic. r0, r30, 0x54
/* 80200DD4 001FDD14  41 82 00 30 */	beq .L_80200E04
/* 80200DD8 001FDD18  3C 60 80 4C */	lis r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 80200DDC 001FDD1C  34 1E 00 54 */	addic. r0, r30, 0x54
/* 80200DE0 001FDD20  38 03 E7 8C */	addi r0, r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 80200DE4 001FDD24  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80200DE8 001FDD28  41 82 00 1C */	beq .L_80200E04
/* 80200DEC 001FDD2C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80200DF0 001FDD30  38 7E 00 54 */	addi r3, r30, 0x54
/* 80200DF4 001FDD34  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80200DF8 001FDD38  38 80 00 00 */	li r4, 0
/* 80200DFC 001FDD3C  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80200E00 001FDD40  48 21 07 89 */	bl __dt__5CNodeFv
.L_80200E04:
/* 80200E04 001FDD44  28 1E 00 00 */	cmplwi r30, 0
/* 80200E08 001FDD48  41 82 00 98 */	beq .L_80200EA0
/* 80200E0C 001FDD4C  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 80200E10 001FDD50  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200E14 001FDD54  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 80200E18 001FDD58  90 1E 00 00 */	stw r0, 0(r30)
/* 80200E1C 001FDD5C  41 82 00 84 */	beq .L_80200EA0
/* 80200E20 001FDD60  3C 60 80 4B */	lis r3, __vt__11CollPartMgr@ha
/* 80200E24 001FDD64  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200E28 001FDD68  38 63 1E B4 */	addi r3, r3, __vt__11CollPartMgr@l
/* 80200E2C 001FDD6C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80200E30 001FDD70  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200E34 001FDD74  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80200E38 001FDD78  41 82 00 68 */	beq .L_80200EA0
/* 80200E3C 001FDD7C  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 80200E40 001FDD80  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200E44 001FDD84  38 63 1E 28 */	addi r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 80200E48 001FDD88  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80200E4C 001FDD8C  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200E50 001FDD90  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80200E54 001FDD94  41 82 00 4C */	beq .L_80200EA0
/* 80200E58 001FDD98  3C 60 80 4B */	lis r3, "__vt__20ObjectMgr<8CollPart>"@ha
/* 80200E5C 001FDD9C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200E60 001FDDA0  38 63 1D AC */	addi r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
/* 80200E64 001FDDA4  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80200E68 001FDDA8  38 03 00 2C */	addi r0, r3, 0x2c
/* 80200E6C 001FDDAC  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80200E70 001FDDB0  41 82 00 30 */	beq .L_80200EA0
/* 80200E74 001FDDB4  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 80200E78 001FDDB8  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80200E7C 001FDDBC  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 80200E80 001FDDC0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80200E84 001FDDC4  41 82 00 1C */	beq .L_80200EA0
/* 80200E88 001FDDC8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80200E8C 001FDDCC  38 7E 00 18 */	addi r3, r30, 0x18
/* 80200E90 001FDDD0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80200E94 001FDDD4  38 80 00 00 */	li r4, 0
/* 80200E98 001FDDD8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80200E9C 001FDDDC  48 21 06 ED */	bl __dt__5CNodeFv
.L_80200EA0:
/* 80200EA0 001FDDE0  7F E0 07 35 */	extsh. r0, r31
/* 80200EA4 001FDDE4  40 81 00 0C */	ble .L_80200EB0
/* 80200EA8 001FDDE8  7F C3 F3 78 */	mr r3, r30
/* 80200EAC 001FDDEC  4B E2 32 09 */	bl __dl__FPv
.L_80200EB0:
/* 80200EB0 001FDDF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200EB4 001FDDF4  7F C3 F3 78 */	mr r3, r30
/* 80200EB8 001FDDF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200EBC 001FDDFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200EC0 001FDE00  7C 08 03 A6 */	mtlr r0
/* 80200EC4 001FDE04  38 21 00 10 */	addi r1, r1, 0x10
/* 80200EC8 001FDE08  4E 80 00 20 */	blr 

.global getMgrName__Q34Game13PelletOtakara3MgrFv
getMgrName__Q34Game13PelletOtakara3MgrFv:
/* 80200ECC 001FDE0C  38 62 B9 D4 */	addi r3, r2, lbl_80519D34@sda21
/* 80200ED0 001FDE10  4E 80 00 20 */	blr 

.global getMgrID__Q34Game13PelletOtakara3MgrFv
getMgrID__Q34Game13PelletOtakara3MgrFv:
/* 80200ED4 001FDE14  38 60 00 03 */	li r3, 3
/* 80200ED8 001FDE18  4E 80 00 20 */	blr 

.global generatorLocalVersion__Q34Game13PelletOtakara3MgrFv
generatorLocalVersion__Q34Game13PelletOtakara3MgrFv:
/* 80200EDC 001FDE1C  3C 60 30 30 */	lis r3, 0x30303030@ha
/* 80200EE0 001FDE20  38 63 30 30 */	addi r3, r3, 0x30303030@l
/* 80200EE4 001FDE24  4E 80 00 20 */	blr 

.global "__dt__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"__dt__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80200EE8 001FDE28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200EEC 001FDE2C  7C 08 02 A6 */	mflr r0
/* 80200EF0 001FDE30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200EF4 001FDE34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80200EF8 001FDE38  7C 9F 23 78 */	mr r31, r4
/* 80200EFC 001FDE3C  93 C1 00 08 */	stw r30, 8(r1)
/* 80200F00 001FDE40  7C 7E 1B 79 */	or. r30, r3, r3
/* 80200F04 001FDE44  41 82 00 50 */	beq .L_80200F54
/* 80200F08 001FDE48  3C 80 80 4C */	lis r4, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80200F0C 001FDE4C  38 84 E5 B8 */	addi r4, r4, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80200F10 001FDE50  90 9E 00 00 */	stw r4, 0(r30)
/* 80200F14 001FDE54  38 04 00 2C */	addi r0, r4, 0x2c
/* 80200F18 001FDE58  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80200F1C 001FDE5C  41 82 00 28 */	beq .L_80200F44
/* 80200F20 001FDE60  3C 80 80 4C */	lis r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 80200F24 001FDE64  38 04 E7 8C */	addi r0, r4, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 80200F28 001FDE68  90 1E 00 00 */	stw r0, 0(r30)
/* 80200F2C 001FDE6C  41 82 00 18 */	beq .L_80200F44
/* 80200F30 001FDE70  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80200F34 001FDE74  38 80 00 00 */	li r4, 0
/* 80200F38 001FDE78  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80200F3C 001FDE7C  90 1E 00 00 */	stw r0, 0(r30)
/* 80200F40 001FDE80  48 21 06 49 */	bl __dt__5CNodeFv
.L_80200F44:
/* 80200F44 001FDE84  7F E0 07 35 */	extsh. r0, r31
/* 80200F48 001FDE88  40 81 00 0C */	ble .L_80200F54
/* 80200F4C 001FDE8C  7F C3 F3 78 */	mr r3, r30
/* 80200F50 001FDE90  4B E2 31 65 */	bl __dl__FPv
.L_80200F54:
/* 80200F54 001FDE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200F58 001FDE98  7F C3 F3 78 */	mr r3, r30
/* 80200F5C 001FDE9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80200F60 001FDEA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80200F64 001FDEA4  7C 08 03 A6 */	mtlr r0
/* 80200F68 001FDEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80200F6C 001FDEAC  4E 80 00 20 */	blr 

.global getKind__Q34Game13PelletOtakara6ObjectFv
getKind__Q34Game13PelletOtakara6ObjectFv:
/* 80200F70 001FDEB0  38 60 00 03 */	li r3, 3
/* 80200F74 001FDEB4  4E 80 00 20 */	blr 

.global getBedamaColor__Q34Game13PelletOtakara6ObjectFv
getBedamaColor__Q34Game13PelletOtakara6ObjectFv:
/* 80200F78 001FDEB8  88 63 04 5E */	lbz r3, 0x45e(r3)
/* 80200F7C 001FDEBC  7C 63 07 74 */	extsb r3, r3
/* 80200F80 001FDEC0  4E 80 00 20 */	blr 

.global "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ28SysShape5Model"
"onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ28SysShape5Model":
/* 80200F84 001FDEC4  4E 80 00 20 */	blr 

.global "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80200F88 001FDEC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200F8C 001FDECC  7C 08 02 A6 */	mflr r0
/* 80200F90 001FDED0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200F94 001FDED4  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80200F98 001FDED8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80200F9C 001FDEDC  7D 89 03 A6 */	mtctr r12
/* 80200FA0 001FDEE0  4E 80 04 21 */	bctrl 
/* 80200FA4 001FDEE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200FA8 001FDEE8  7C 08 03 A6 */	mtlr r0
/* 80200FAC 001FDEEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80200FB0 001FDEF0  4E 80 00 20 */	blr 

.global "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80200FB4 001FDEF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200FB8 001FDEF8  7C 08 02 A6 */	mflr r0
/* 80200FBC 001FDEFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200FC0 001FDF00  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80200FC4 001FDF04  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80200FC8 001FDF08  7D 89 03 A6 */	mtctr r12
/* 80200FCC 001FDF0C  4E 80 04 21 */	bctrl 
/* 80200FD0 001FDF10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80200FD4 001FDF14  7C 08 03 A6 */	mtlr r0
/* 80200FD8 001FDF18  38 21 00 10 */	addi r1, r1, 0x10
/* 80200FDC 001FDF1C  4E 80 00 20 */	blr 

.global "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80200FE0 001FDF20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80200FE4 001FDF24  7C 08 02 A6 */	mflr r0
/* 80200FE8 001FDF28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80200FEC 001FDF2C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80200FF0 001FDF30  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80200FF4 001FDF34  7D 89 03 A6 */	mtctr r12
/* 80200FF8 001FDF38  4E 80 04 21 */	bctrl 
/* 80200FFC 001FDF3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201000 001FDF40  7C 08 03 A6 */	mtlr r0
/* 80201004 001FDF44  38 21 00 10 */	addi r1, r1, 0x10
/* 80201008 001FDF48  4E 80 00 20 */	blr 

.global "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
"doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi":
/* 8020100C 001FDF4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201010 001FDF50  7C 08 02 A6 */	mflr r0
/* 80201014 001FDF54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201018 001FDF58  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 8020101C 001FDF5C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80201020 001FDF60  7D 89 03 A6 */	mtctr r12
/* 80201024 001FDF64  4E 80 04 21 */	bctrl 
/* 80201028 001FDF68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020102C 001FDF6C  7C 08 03 A6 */	mtlr r0
/* 80201030 001FDF70  38 21 00 10 */	addi r1, r1, 0x10
/* 80201034 001FDF74  4E 80 00 20 */	blr 

.global "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80201038 001FDF78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020103C 001FDF7C  7C 08 02 A6 */	mflr r0
/* 80201040 001FDF80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201044 001FDF84  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80201048 001FDF88  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8020104C 001FDF8C  7D 89 03 A6 */	mtctr r12
/* 80201050 001FDF90  4E 80 04 21 */	bctrl 
/* 80201054 001FDF94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201058 001FDF98  7C 08 03 A6 */	mtlr r0
/* 8020105C 001FDF9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80201060 001FDFA0  4E 80 00 20 */	blr 

.global "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Ff"
"doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Ff":
/* 80201064 001FDFA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201068 001FDFA8  7C 08 02 A6 */	mflr r0
/* 8020106C 001FDFAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201070 001FDFB0  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80201074 001FDFB4  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80201078 001FDFB8  7D 89 03 A6 */	mtctr r12
/* 8020107C 001FDFBC  4E 80 04 21 */	bctrl 
/* 80201080 001FDFC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201084 001FDFC4  7C 08 03 A6 */	mtlr r0
/* 80201088 001FDFC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8020108C 001FDFCC  4E 80 00 20 */	blr 

.global "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
"doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FR8Graphics":
/* 80201090 001FDFD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201094 001FDFD4  7C 08 02 A6 */	mflr r0
/* 80201098 001FDFD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020109C 001FDFDC  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 802010A0 001FDFE0  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 802010A4 001FDFE4  7D 89 03 A6 */	mtctr r12
/* 802010A8 001FDFE8  4E 80 04 21 */	bctrl 
/* 802010AC 001FDFEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802010B0 001FDFF0  7C 08 03 A6 */	mtlr r0
/* 802010B4 001FDFF4  38 21 00 10 */	addi r1, r1, 0x10
/* 802010B8 001FDFF8  4E 80 00 20 */	blr 

.global "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
"kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet":
/* 802010BC 001FDFFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802010C0 001FE000  7C 08 02 A6 */	mflr r0
/* 802010C4 001FE004  38 63 00 70 */	addi r3, r3, 0x70
/* 802010C8 001FE008  90 01 00 14 */	stw r0, 0x14(r1)
/* 802010CC 001FE00C  48 00 00 CD */	bl "kill__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPQ34Game13PelletOtakara6Object"
/* 802010D0 001FE010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802010D4 001FE014  7C 08 03 A6 */	mtlr r0
/* 802010D8 001FE018  38 21 00 10 */	addi r1, r1, 0x10
/* 802010DC 001FE01C  4E 80 00 20 */	blr 

.global "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
"getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv":
/* 802010E0 001FE020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802010E4 001FE024  7C 08 02 A6 */	mflr r0
/* 802010E8 001FE028  90 01 00 14 */	stw r0, 0x14(r1)
/* 802010EC 001FE02C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 802010F0 001FE030  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802010F4 001FE034  7D 89 03 A6 */	mtctr r12
/* 802010F8 001FE038  4E 80 04 21 */	bctrl 
/* 802010FC 001FE03C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201100 001FE040  7C 08 03 A6 */	mtlr r0
/* 80201104 001FE044  38 21 00 10 */	addi r1, r1, 0x10
/* 80201108 001FE048  4E 80 00 20 */	blr 

.global "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020110C 001FE04C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201110 001FE050  7C 08 02 A6 */	mflr r0
/* 80201114 001FE054  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201118 001FE058  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 8020111C 001FE05C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201120 001FE060  7D 89 03 A6 */	mtctr r12
/* 80201124 001FE064  4E 80 04 21 */	bctrl 
/* 80201128 001FE068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020112C 001FE06C  7C 08 03 A6 */	mtlr r0
/* 80201130 001FE070  38 21 00 10 */	addi r1, r1, 0x10
/* 80201134 001FE074  4E 80 00 20 */	blr 

.global "birth__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"birth__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80201138 001FE078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020113C 001FE07C  7C 08 02 A6 */	mflr r0
/* 80201140 001FE080  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201144 001FE084  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80201148 001FE088  7C 7F 1B 78 */	mr r31, r3
/* 8020114C 001FE08C  48 00 04 95 */	bl "getEmptyIndex__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
/* 80201150 001FE090  2C 03 FF FF */	cmpwi r3, -1
/* 80201154 001FE094  41 82 00 2C */	beq .L_80201180
/* 80201158 001FE098  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 8020115C 001FE09C  38 00 00 00 */	li r0, 0
/* 80201160 001FE0A0  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 80201164 001FE0A4  1C A3 04 60 */	mulli r5, r3, 0x460
/* 80201168 001FE0A8  7C 04 19 AE */	stbx r0, r4, r3
/* 8020116C 001FE0AC  7C 66 2A 14 */	add r3, r6, r5
/* 80201170 001FE0B0  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 80201174 001FE0B4  38 04 00 01 */	addi r0, r4, 1
/* 80201178 001FE0B8  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8020117C 001FE0BC  48 00 00 08 */	b .L_80201184
.L_80201180:
/* 80201180 001FE0C0  38 60 00 00 */	li r3, 0
.L_80201184:
/* 80201184 001FE0C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201188 001FE0C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020118C 001FE0CC  7C 08 03 A6 */	mtlr r0
/* 80201190 001FE0D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80201194 001FE0D4  4E 80 00 20 */	blr 

.global "kill__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPQ34Game13PelletOtakara6Object"
"kill__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPQ34Game13PelletOtakara6Object":
/* 80201198 001FE0D8  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8020119C 001FE0DC  38 C0 00 00 */	li r6, 0
/* 802011A0 001FE0E0  38 A0 00 00 */	li r5, 0
/* 802011A4 001FE0E4  7C 09 03 A6 */	mtctr r0
/* 802011A8 001FE0E8  2C 00 00 00 */	cmpwi r0, 0
/* 802011AC 001FE0EC  4C 81 00 20 */	blelr 
.L_802011B0:
/* 802011B0 001FE0F0  80 03 00 28 */	lwz r0, 0x28(r3)
/* 802011B4 001FE0F4  7C 00 2A 14 */	add r0, r0, r5
/* 802011B8 001FE0F8  7C 00 20 40 */	cmplw r0, r4
/* 802011BC 001FE0FC  40 82 00 20 */	bne .L_802011DC
/* 802011C0 001FE100  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802011C4 001FE104  38 00 00 01 */	li r0, 1
/* 802011C8 001FE108  7C 04 31 AE */	stbx r0, r4, r6
/* 802011CC 001FE10C  80 83 00 20 */	lwz r4, 0x20(r3)
/* 802011D0 001FE110  38 04 FF FF */	addi r0, r4, -1
/* 802011D4 001FE114  90 03 00 20 */	stw r0, 0x20(r3)
/* 802011D8 001FE118  4E 80 00 20 */	blr 
.L_802011DC:
/* 802011DC 001FE11C  38 A5 04 60 */	addi r5, r5, 0x460
/* 802011E0 001FE120  38 C6 00 01 */	addi r6, r6, 1
/* 802011E4 001FE124  42 00 FF CC */	bdnz .L_802011B0
/* 802011E8 001FE128  4E 80 00 20 */	blr 

.global "getNext__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPv"
"getNext__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPv":
/* 802011EC 001FE12C  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 802011F0 001FE130  38 C4 00 01 */	addi r6, r4, 1
/* 802011F4 001FE134  7C 06 28 50 */	subf r0, r6, r5
/* 802011F8 001FE138  7C 09 03 A6 */	mtctr r0
/* 802011FC 001FE13C  7C 06 28 00 */	cmpw r6, r5
/* 80201200 001FE140  40 80 00 24 */	bge .L_80201224
.L_80201204:
/* 80201204 001FE144  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80201208 001FE148  7C 04 30 AE */	lbzx r0, r4, r6
/* 8020120C 001FE14C  28 00 00 00 */	cmplwi r0, 0
/* 80201210 001FE150  40 82 00 0C */	bne .L_8020121C
/* 80201214 001FE154  7C C3 33 78 */	mr r3, r6
/* 80201218 001FE158  4E 80 00 20 */	blr 
.L_8020121C:
/* 8020121C 001FE15C  38 C6 00 01 */	addi r6, r6, 1
/* 80201220 001FE160  42 00 FF E4 */	bdnz .L_80201204
.L_80201224:
/* 80201224 001FE164  7C A3 2B 78 */	mr r3, r5
/* 80201228 001FE168  4E 80 00 20 */	blr 

.global "getStart__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"getStart__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020122C 001FE16C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201230 001FE170  7C 08 02 A6 */	mflr r0
/* 80201234 001FE174  38 80 FF FF */	li r4, -1
/* 80201238 001FE178  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020123C 001FE17C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201240 001FE180  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201244 001FE184  7D 89 03 A6 */	mtctr r12
/* 80201248 001FE188  4E 80 04 21 */	bctrl 
/* 8020124C 001FE18C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201250 001FE190  7C 08 03 A6 */	mtlr r0
/* 80201254 001FE194  38 21 00 10 */	addi r1, r1, 0x10
/* 80201258 001FE198  4E 80 00 20 */	blr 

.global "getEnd__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"getEnd__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020125C 001FE19C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80201260 001FE1A0  4E 80 00 20 */	blr 

.global "getAt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
"getAt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi":
/* 80201264 001FE1A4  1C 04 04 60 */	mulli r0, r4, 0x460
/* 80201268 001FE1A8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8020126C 001FE1AC  7C 63 02 14 */	add r3, r3, r0
/* 80201270 001FE1B0  4E 80 00 20 */	blr 

.global "getTo__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"getTo__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80201274 001FE1B4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80201278 001FE1B8  4E 80 00 20 */	blr 

.global "doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020127C 001FE1BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201280 001FE1C0  7C 08 02 A6 */	mflr r0
/* 80201284 001FE1C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201288 001FE1C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020128C 001FE1CC  3B E0 00 00 */	li r31, 0
/* 80201290 001FE1D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80201294 001FE1D4  3B C0 00 00 */	li r30, 0
/* 80201298 001FE1D8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020129C 001FE1DC  7C 7D 1B 78 */	mr r29, r3
/* 802012A0 001FE1E0  48 00 00 34 */	b .L_802012D4
.L_802012A4:
/* 802012A4 001FE1E4  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 802012A8 001FE1E8  7C 03 F0 AE */	lbzx r0, r3, r30
/* 802012AC 001FE1EC  28 00 00 00 */	cmplwi r0, 0
/* 802012B0 001FE1F0  40 82 00 1C */	bne .L_802012CC
/* 802012B4 001FE1F4  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 802012B8 001FE1F8  7C 60 FA 14 */	add r3, r0, r31
/* 802012BC 001FE1FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802012C0 001FE200  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802012C4 001FE204  7D 89 03 A6 */	mtctr r12
/* 802012C8 001FE208  4E 80 04 21 */	bctrl 
.L_802012CC:
/* 802012CC 001FE20C  3B FF 04 60 */	addi r31, r31, 0x460
/* 802012D0 001FE210  3B DE 00 01 */	addi r30, r30, 1
.L_802012D4:
/* 802012D4 001FE214  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 802012D8 001FE218  7C 1E 00 00 */	cmpw r30, r0
/* 802012DC 001FE21C  41 80 FF C8 */	blt .L_802012A4
/* 802012E0 001FE220  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802012E4 001FE224  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802012E8 001FE228  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802012EC 001FE22C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802012F0 001FE230  7C 08 03 A6 */	mtlr r0
/* 802012F4 001FE234  38 21 00 20 */	addi r1, r1, 0x20
/* 802012F8 001FE238  4E 80 00 20 */	blr 

.global "doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802012FC 001FE23C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201300 001FE240  7C 08 02 A6 */	mflr r0
/* 80201304 001FE244  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201308 001FE248  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020130C 001FE24C  3B E0 00 00 */	li r31, 0
/* 80201310 001FE250  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80201314 001FE254  3B C0 00 00 */	li r30, 0
/* 80201318 001FE258  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020131C 001FE25C  7C 7D 1B 78 */	mr r29, r3
/* 80201320 001FE260  48 00 00 34 */	b .L_80201354
.L_80201324:
/* 80201324 001FE264  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80201328 001FE268  7C 03 F0 AE */	lbzx r0, r3, r30
/* 8020132C 001FE26C  28 00 00 00 */	cmplwi r0, 0
/* 80201330 001FE270  40 82 00 1C */	bne .L_8020134C
/* 80201334 001FE274  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80201338 001FE278  7C 60 FA 14 */	add r3, r0, r31
/* 8020133C 001FE27C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201340 001FE280  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80201344 001FE284  7D 89 03 A6 */	mtctr r12
/* 80201348 001FE288  4E 80 04 21 */	bctrl 
.L_8020134C:
/* 8020134C 001FE28C  3B FF 04 60 */	addi r31, r31, 0x460
/* 80201350 001FE290  3B DE 00 01 */	addi r30, r30, 1
.L_80201354:
/* 80201354 001FE294  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80201358 001FE298  7C 1E 00 00 */	cmpw r30, r0
/* 8020135C 001FE29C  41 80 FF C8 */	blt .L_80201324
/* 80201360 001FE2A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201364 001FE2A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80201368 001FE2A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020136C 001FE2AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80201370 001FE2B0  7C 08 03 A6 */	mtlr r0
/* 80201374 001FE2B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80201378 001FE2B8  4E 80 00 20 */	blr 

.global "doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
"doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi":
/* 8020137C 001FE2BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201380 001FE2C0  7C 08 02 A6 */	mflr r0
/* 80201384 001FE2C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201388 001FE2C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020138C 001FE2CC  3B E0 00 00 */	li r31, 0
/* 80201390 001FE2D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80201394 001FE2D4  3B C0 00 00 */	li r30, 0
/* 80201398 001FE2D8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020139C 001FE2DC  7C 9D 23 78 */	mr r29, r4
/* 802013A0 001FE2E0  93 81 00 10 */	stw r28, 0x10(r1)
/* 802013A4 001FE2E4  7C 7C 1B 78 */	mr r28, r3
/* 802013A8 001FE2E8  48 00 00 38 */	b .L_802013E0
.L_802013AC:
/* 802013AC 001FE2EC  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 802013B0 001FE2F0  7C 03 F0 AE */	lbzx r0, r3, r30
/* 802013B4 001FE2F4  28 00 00 00 */	cmplwi r0, 0
/* 802013B8 001FE2F8  40 82 00 20 */	bne .L_802013D8
/* 802013BC 001FE2FC  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 802013C0 001FE300  7F A4 EB 78 */	mr r4, r29
/* 802013C4 001FE304  7C 60 FA 14 */	add r3, r0, r31
/* 802013C8 001FE308  81 83 00 00 */	lwz r12, 0(r3)
/* 802013CC 001FE30C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802013D0 001FE310  7D 89 03 A6 */	mtctr r12
/* 802013D4 001FE314  4E 80 04 21 */	bctrl 
.L_802013D8:
/* 802013D8 001FE318  3B FF 04 60 */	addi r31, r31, 0x460
/* 802013DC 001FE31C  3B DE 00 01 */	addi r30, r30, 1
.L_802013E0:
/* 802013E0 001FE320  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 802013E4 001FE324  7C 1E 00 00 */	cmpw r30, r0
/* 802013E8 001FE328  41 80 FF C4 */	blt .L_802013AC
/* 802013EC 001FE32C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802013F0 001FE330  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802013F4 001FE334  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802013F8 001FE338  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802013FC 001FE33C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80201400 001FE340  7C 08 03 A6 */	mtlr r0
/* 80201404 001FE344  38 21 00 20 */	addi r1, r1, 0x20
/* 80201408 001FE348  4E 80 00 20 */	blr 

.global "doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020140C 001FE34C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201410 001FE350  7C 08 02 A6 */	mflr r0
/* 80201414 001FE354  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201418 001FE358  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020141C 001FE35C  3B E0 00 00 */	li r31, 0
/* 80201420 001FE360  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80201424 001FE364  3B C0 00 00 */	li r30, 0
/* 80201428 001FE368  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020142C 001FE36C  7C 7D 1B 78 */	mr r29, r3
/* 80201430 001FE370  48 00 00 34 */	b .L_80201464
.L_80201434:
/* 80201434 001FE374  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80201438 001FE378  7C 03 F0 AE */	lbzx r0, r3, r30
/* 8020143C 001FE37C  28 00 00 00 */	cmplwi r0, 0
/* 80201440 001FE380  40 82 00 1C */	bne .L_8020145C
/* 80201444 001FE384  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80201448 001FE388  7C 60 FA 14 */	add r3, r0, r31
/* 8020144C 001FE38C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201450 001FE390  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80201454 001FE394  7D 89 03 A6 */	mtctr r12
/* 80201458 001FE398  4E 80 04 21 */	bctrl 
.L_8020145C:
/* 8020145C 001FE39C  3B FF 04 60 */	addi r31, r31, 0x460
/* 80201460 001FE3A0  3B DE 00 01 */	addi r30, r30, 1
.L_80201464:
/* 80201464 001FE3A4  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80201468 001FE3A8  7C 1E 00 00 */	cmpw r30, r0
/* 8020146C 001FE3AC  41 80 FF C8 */	blt .L_80201434
/* 80201470 001FE3B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201474 001FE3B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80201478 001FE3B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020147C 001FE3BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80201480 001FE3C0  7C 08 03 A6 */	mtlr r0
/* 80201484 001FE3C4  38 21 00 20 */	addi r1, r1, 0x20
/* 80201488 001FE3C8  4E 80 00 20 */	blr 

.global "doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff"
"doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff":
/* 8020148C 001FE3CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201490 001FE3D0  7C 08 02 A6 */	mflr r0
/* 80201494 001FE3D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201498 001FE3D8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8020149C 001FE3DC  FF E0 08 90 */	fmr f31, f1
/* 802014A0 001FE3E0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802014A4 001FE3E4  3B E0 00 00 */	li r31, 0
/* 802014A8 001FE3E8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802014AC 001FE3EC  3B C0 00 00 */	li r30, 0
/* 802014B0 001FE3F0  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802014B4 001FE3F4  7C 7D 1B 78 */	mr r29, r3
/* 802014B8 001FE3F8  48 00 00 38 */	b .L_802014F0
.L_802014BC:
/* 802014BC 001FE3FC  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 802014C0 001FE400  7C 03 F0 AE */	lbzx r0, r3, r30
/* 802014C4 001FE404  28 00 00 00 */	cmplwi r0, 0
/* 802014C8 001FE408  40 82 00 20 */	bne .L_802014E8
/* 802014CC 001FE40C  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 802014D0 001FE410  FC 20 F8 90 */	fmr f1, f31
/* 802014D4 001FE414  7C 60 FA 14 */	add r3, r0, r31
/* 802014D8 001FE418  81 83 00 00 */	lwz r12, 0(r3)
/* 802014DC 001FE41C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 802014E0 001FE420  7D 89 03 A6 */	mtctr r12
/* 802014E4 001FE424  4E 80 04 21 */	bctrl 
.L_802014E8:
/* 802014E8 001FE428  3B FF 04 60 */	addi r31, r31, 0x460
/* 802014EC 001FE42C  3B DE 00 01 */	addi r30, r30, 1
.L_802014F0:
/* 802014F0 001FE430  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 802014F4 001FE434  7C 1E 00 00 */	cmpw r30, r0
/* 802014F8 001FE438  41 80 FF C4 */	blt .L_802014BC
/* 802014FC 001FE43C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201500 001FE440  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80201504 001FE444  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80201508 001FE448  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8020150C 001FE44C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80201510 001FE450  7C 08 03 A6 */	mtlr r0
/* 80201514 001FE454  38 21 00 20 */	addi r1, r1, 0x20
/* 80201518 001FE458  4E 80 00 20 */	blr 

.global "doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
"doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics":
/* 8020151C 001FE45C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201520 001FE460  7C 08 02 A6 */	mflr r0
/* 80201524 001FE464  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201528 001FE468  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020152C 001FE46C  3B E0 00 00 */	li r31, 0
/* 80201530 001FE470  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80201534 001FE474  3B C0 00 00 */	li r30, 0
/* 80201538 001FE478  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020153C 001FE47C  7C 9D 23 78 */	mr r29, r4
/* 80201540 001FE480  93 81 00 10 */	stw r28, 0x10(r1)
/* 80201544 001FE484  7C 7C 1B 78 */	mr r28, r3
/* 80201548 001FE488  48 00 00 38 */	b .L_80201580
.L_8020154C:
/* 8020154C 001FE48C  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80201550 001FE490  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80201554 001FE494  28 00 00 00 */	cmplwi r0, 0
/* 80201558 001FE498  40 82 00 20 */	bne .L_80201578
/* 8020155C 001FE49C  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 80201560 001FE4A0  7F A4 EB 78 */	mr r4, r29
/* 80201564 001FE4A4  7C 60 FA 14 */	add r3, r0, r31
/* 80201568 001FE4A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020156C 001FE4AC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80201570 001FE4B0  7D 89 03 A6 */	mtctr r12
/* 80201574 001FE4B4  4E 80 04 21 */	bctrl 
.L_80201578:
/* 80201578 001FE4B8  3B FF 04 60 */	addi r31, r31, 0x460
/* 8020157C 001FE4BC  3B DE 00 01 */	addi r30, r30, 1
.L_80201580:
/* 80201580 001FE4C0  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80201584 001FE4C4  7C 1E 00 00 */	cmpw r30, r0
/* 80201588 001FE4C8  41 80 FF C4 */	blt .L_8020154C
/* 8020158C 001FE4CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201590 001FE4D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80201594 001FE4D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80201598 001FE4D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020159C 001FE4DC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802015A0 001FE4E0  7C 08 03 A6 */	mtlr r0
/* 802015A4 001FE4E4  38 21 00 20 */	addi r1, r1, 0x20
/* 802015A8 001FE4E8  4E 80 00 20 */	blr 

.global "clearMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"clearMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802015AC 001FE4EC  38 00 00 00 */	li r0, 0
/* 802015B0 001FE4F0  38 C0 00 00 */	li r6, 0
/* 802015B4 001FE4F4  90 03 00 20 */	stw r0, 0x20(r3)
/* 802015B8 001FE4F8  38 A0 00 01 */	li r5, 1
/* 802015BC 001FE4FC  48 00 00 10 */	b .L_802015CC
.L_802015C0:
/* 802015C0 001FE500  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802015C4 001FE504  7C A4 31 AE */	stbx r5, r4, r6
/* 802015C8 001FE508  38 C6 00 01 */	addi r6, r6, 1
.L_802015CC:
/* 802015CC 001FE50C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 802015D0 001FE510  7C 06 00 00 */	cmpw r6, r0
/* 802015D4 001FE514  41 80 FF EC */	blt .L_802015C0
/* 802015D8 001FE518  4E 80 00 20 */	blr 

.global "onAlloc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"onAlloc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802015DC 001FE51C  4E 80 00 20 */	blr 

.global "getEmptyIndex__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"getEmptyIndex__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802015E0 001FE520  80 03 00 24 */	lwz r0, 0x24(r3)
/* 802015E4 001FE524  38 A0 00 00 */	li r5, 0
/* 802015E8 001FE528  7C 09 03 A6 */	mtctr r0
/* 802015EC 001FE52C  2C 00 00 00 */	cmpwi r0, 0
/* 802015F0 001FE530  40 81 00 24 */	ble .L_80201614
.L_802015F4:
/* 802015F4 001FE534  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802015F8 001FE538  7C 04 28 AE */	lbzx r0, r4, r5
/* 802015FC 001FE53C  28 00 00 01 */	cmplwi r0, 1
/* 80201600 001FE540  40 82 00 0C */	bne .L_8020160C
/* 80201604 001FE544  7C A3 2B 78 */	mr r3, r5
/* 80201608 001FE548  4E 80 00 20 */	blr 
.L_8020160C:
/* 8020160C 001FE54C  38 A5 00 01 */	addi r5, r5, 1
/* 80201610 001FE550  42 00 FF E4 */	bdnz .L_802015F4
.L_80201614:
/* 80201614 001FE554  38 60 FF FF */	li r3, -1
/* 80201618 001FE558  4E 80 00 20 */	blr 

.global "get__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPv"
"get__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FPv":
/* 8020161C 001FE55C  1C 04 04 60 */	mulli r0, r4, 0x460
/* 80201620 001FE560  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80201624 001FE564  7C 63 02 14 */	add r3, r3, r0
/* 80201628 001FE568  4E 80 00 20 */	blr 

.global "getObject__40Container<Q34Game13PelletOtakara6Object>FPv"
"getObject__40Container<Q34Game13PelletOtakara6Object>FPv":
/* 8020162C 001FE56C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201630 001FE570  7C 08 02 A6 */	mflr r0
/* 80201634 001FE574  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201638 001FE578  81 83 00 00 */	lwz r12, 0(r3)
/* 8020163C 001FE57C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201640 001FE580  7D 89 03 A6 */	mtctr r12
/* 80201644 001FE584  4E 80 04 21 */	bctrl 
/* 80201648 001FE588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020164C 001FE58C  7C 08 03 A6 */	mtlr r0
/* 80201650 001FE590  38 21 00 10 */	addi r1, r1, 0x10
/* 80201654 001FE594  4E 80 00 20 */	blr 

.global "getAt__40Container<Q34Game13PelletOtakara6Object>Fi"
"getAt__40Container<Q34Game13PelletOtakara6Object>Fi":
/* 80201658 001FE598  38 60 00 00 */	li r3, 0
/* 8020165C 001FE59C  4E 80 00 20 */	blr 

.global "getTo__40Container<Q34Game13PelletOtakara6Object>Fv"
"getTo__40Container<Q34Game13PelletOtakara6Object>Fv":
/* 80201660 001FE5A0  38 60 00 00 */	li r3, 0
/* 80201664 001FE5A4  4E 80 00 20 */	blr 

.global "doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
"doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics":
/* 80201668 001FE5A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020166C 001FE5AC  7C 08 02 A6 */	mflr r0
/* 80201670 001FE5B0  3C A0 80 4B */	lis r5, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
/* 80201674 001FE5B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201678 001FE5B8  38 00 00 00 */	li r0, 0
/* 8020167C 001FE5BC  38 A5 1B 8C */	addi r5, r5, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
/* 80201680 001FE5C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80201684 001FE5C4  28 00 00 00 */	cmplwi r0, 0
/* 80201688 001FE5C8  7C 9F 23 78 */	mr r31, r4
/* 8020168C 001FE5CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201690 001FE5D0  90 A1 00 08 */	stw r5, 8(r1)
/* 80201694 001FE5D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80201698 001FE5D8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020169C 001FE5DC  40 82 00 1C */	bne .L_802016B8
/* 802016A0 001FE5E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802016A4 001FE5E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802016A8 001FE5E8  7D 89 03 A6 */	mtctr r12
/* 802016AC 001FE5EC  4E 80 04 21 */	bctrl 
/* 802016B0 001FE5F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802016B4 001FE5F4  48 00 01 74 */	b .L_80201828
.L_802016B8:
/* 802016B8 001FE5F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802016BC 001FE5FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802016C0 001FE600  7D 89 03 A6 */	mtctr r12
/* 802016C4 001FE604  4E 80 04 21 */	bctrl 
/* 802016C8 001FE608  90 61 00 0C */	stw r3, 0xc(r1)
/* 802016CC 001FE60C  48 00 00 58 */	b .L_80201724
.L_802016D0:
/* 802016D0 001FE610  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802016D4 001FE614  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802016D8 001FE618  81 83 00 00 */	lwz r12, 0(r3)
/* 802016DC 001FE61C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802016E0 001FE620  7D 89 03 A6 */	mtctr r12
/* 802016E4 001FE624  4E 80 04 21 */	bctrl 
/* 802016E8 001FE628  7C 64 1B 78 */	mr r4, r3
/* 802016EC 001FE62C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802016F0 001FE630  81 83 00 00 */	lwz r12, 0(r3)
/* 802016F4 001FE634  81 8C 00 08 */	lwz r12, 8(r12)
/* 802016F8 001FE638  7D 89 03 A6 */	mtctr r12
/* 802016FC 001FE63C  4E 80 04 21 */	bctrl 
/* 80201700 001FE640  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201704 001FE644  40 82 01 24 */	bne .L_80201828
/* 80201708 001FE648  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020170C 001FE64C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201710 001FE650  81 83 00 00 */	lwz r12, 0(r3)
/* 80201714 001FE654  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201718 001FE658  7D 89 03 A6 */	mtctr r12
/* 8020171C 001FE65C  4E 80 04 21 */	bctrl 
/* 80201720 001FE660  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201724:
/* 80201724 001FE664  81 81 00 08 */	lwz r12, 8(r1)
/* 80201728 001FE668  38 61 00 08 */	addi r3, r1, 8
/* 8020172C 001FE66C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201730 001FE670  7D 89 03 A6 */	mtctr r12
/* 80201734 001FE674  4E 80 04 21 */	bctrl 
/* 80201738 001FE678  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020173C 001FE67C  41 82 FF 94 */	beq .L_802016D0
/* 80201740 001FE680  48 00 00 E8 */	b .L_80201828
.L_80201744:
/* 80201744 001FE684  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201748 001FE688  81 83 00 00 */	lwz r12, 0(r3)
/* 8020174C 001FE68C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201750 001FE690  7D 89 03 A6 */	mtctr r12
/* 80201754 001FE694  4E 80 04 21 */	bctrl 
/* 80201758 001FE698  81 83 00 00 */	lwz r12, 0(r3)
/* 8020175C 001FE69C  7F E4 FB 78 */	mr r4, r31
/* 80201760 001FE6A0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80201764 001FE6A4  7D 89 03 A6 */	mtctr r12
/* 80201768 001FE6A8  4E 80 04 21 */	bctrl 
/* 8020176C 001FE6AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201770 001FE6B0  28 00 00 00 */	cmplwi r0, 0
/* 80201774 001FE6B4  40 82 00 24 */	bne .L_80201798
/* 80201778 001FE6B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020177C 001FE6BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201780 001FE6C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80201784 001FE6C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201788 001FE6C8  7D 89 03 A6 */	mtctr r12
/* 8020178C 001FE6CC  4E 80 04 21 */	bctrl 
/* 80201790 001FE6D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201794 001FE6D4  48 00 00 94 */	b .L_80201828
.L_80201798:
/* 80201798 001FE6D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020179C 001FE6DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802017A0 001FE6E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802017A4 001FE6E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802017A8 001FE6E8  7D 89 03 A6 */	mtctr r12
/* 802017AC 001FE6EC  4E 80 04 21 */	bctrl 
/* 802017B0 001FE6F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802017B4 001FE6F4  48 00 00 58 */	b .L_8020180C
.L_802017B8:
/* 802017B8 001FE6F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802017BC 001FE6FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802017C0 001FE700  81 83 00 00 */	lwz r12, 0(r3)
/* 802017C4 001FE704  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802017C8 001FE708  7D 89 03 A6 */	mtctr r12
/* 802017CC 001FE70C  4E 80 04 21 */	bctrl 
/* 802017D0 001FE710  7C 64 1B 78 */	mr r4, r3
/* 802017D4 001FE714  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802017D8 001FE718  81 83 00 00 */	lwz r12, 0(r3)
/* 802017DC 001FE71C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802017E0 001FE720  7D 89 03 A6 */	mtctr r12
/* 802017E4 001FE724  4E 80 04 21 */	bctrl 
/* 802017E8 001FE728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802017EC 001FE72C  40 82 00 3C */	bne .L_80201828
/* 802017F0 001FE730  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802017F4 001FE734  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802017F8 001FE738  81 83 00 00 */	lwz r12, 0(r3)
/* 802017FC 001FE73C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201800 001FE740  7D 89 03 A6 */	mtctr r12
/* 80201804 001FE744  4E 80 04 21 */	bctrl 
/* 80201808 001FE748  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020180C:
/* 8020180C 001FE74C  81 81 00 08 */	lwz r12, 8(r1)
/* 80201810 001FE750  38 61 00 08 */	addi r3, r1, 8
/* 80201814 001FE754  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201818 001FE758  7D 89 03 A6 */	mtctr r12
/* 8020181C 001FE75C  4E 80 04 21 */	bctrl 
/* 80201820 001FE760  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201824 001FE764  41 82 FF 94 */	beq .L_802017B8
.L_80201828:
/* 80201828 001FE768  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020182C 001FE76C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201830 001FE770  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80201834 001FE774  7D 89 03 A6 */	mtctr r12
/* 80201838 001FE778  4E 80 04 21 */	bctrl 
/* 8020183C 001FE77C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201840 001FE780  7C 04 18 40 */	cmplw r4, r3
/* 80201844 001FE784  40 82 FF 00 */	bne .L_80201744
/* 80201848 001FE788  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020184C 001FE78C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80201850 001FE790  7C 08 03 A6 */	mtlr r0
/* 80201854 001FE794  38 21 00 20 */	addi r1, r1, 0x20
/* 80201858 001FE798  4E 80 00 20 */	blr 

.global "doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff"
"doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff":
/* 8020185C 001FE79C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201860 001FE7A0  7C 08 02 A6 */	mflr r0
/* 80201864 001FE7A4  3C 80 80 4B */	lis r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
/* 80201868 001FE7A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020186C 001FE7AC  38 00 00 00 */	li r0, 0
/* 80201870 001FE7B0  38 84 1B 8C */	addi r4, r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
/* 80201874 001FE7B4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80201878 001FE7B8  FF E0 08 90 */	fmr f31, f1
/* 8020187C 001FE7BC  28 00 00 00 */	cmplwi r0, 0
/* 80201880 001FE7C0  90 81 00 08 */	stw r4, 8(r1)
/* 80201884 001FE7C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201888 001FE7C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020188C 001FE7CC  90 61 00 10 */	stw r3, 0x10(r1)
/* 80201890 001FE7D0  40 82 00 1C */	bne .L_802018AC
/* 80201894 001FE7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201898 001FE7D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020189C 001FE7DC  7D 89 03 A6 */	mtctr r12
/* 802018A0 001FE7E0  4E 80 04 21 */	bctrl 
/* 802018A4 001FE7E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802018A8 001FE7E8  48 00 01 74 */	b .L_80201A1C
.L_802018AC:
/* 802018AC 001FE7EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802018B0 001FE7F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802018B4 001FE7F4  7D 89 03 A6 */	mtctr r12
/* 802018B8 001FE7F8  4E 80 04 21 */	bctrl 
/* 802018BC 001FE7FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802018C0 001FE800  48 00 00 58 */	b .L_80201918
.L_802018C4:
/* 802018C4 001FE804  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802018C8 001FE808  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802018CC 001FE80C  81 83 00 00 */	lwz r12, 0(r3)
/* 802018D0 001FE810  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802018D4 001FE814  7D 89 03 A6 */	mtctr r12
/* 802018D8 001FE818  4E 80 04 21 */	bctrl 
/* 802018DC 001FE81C  7C 64 1B 78 */	mr r4, r3
/* 802018E0 001FE820  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802018E4 001FE824  81 83 00 00 */	lwz r12, 0(r3)
/* 802018E8 001FE828  81 8C 00 08 */	lwz r12, 8(r12)
/* 802018EC 001FE82C  7D 89 03 A6 */	mtctr r12
/* 802018F0 001FE830  4E 80 04 21 */	bctrl 
/* 802018F4 001FE834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802018F8 001FE838  40 82 01 24 */	bne .L_80201A1C
/* 802018FC 001FE83C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201900 001FE840  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201904 001FE844  81 83 00 00 */	lwz r12, 0(r3)
/* 80201908 001FE848  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020190C 001FE84C  7D 89 03 A6 */	mtctr r12
/* 80201910 001FE850  4E 80 04 21 */	bctrl 
/* 80201914 001FE854  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201918:
/* 80201918 001FE858  81 81 00 08 */	lwz r12, 8(r1)
/* 8020191C 001FE85C  38 61 00 08 */	addi r3, r1, 8
/* 80201920 001FE860  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201924 001FE864  7D 89 03 A6 */	mtctr r12
/* 80201928 001FE868  4E 80 04 21 */	bctrl 
/* 8020192C 001FE86C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201930 001FE870  41 82 FF 94 */	beq .L_802018C4
/* 80201934 001FE874  48 00 00 E8 */	b .L_80201A1C
.L_80201938:
/* 80201938 001FE878  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020193C 001FE87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201940 001FE880  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201944 001FE884  7D 89 03 A6 */	mtctr r12
/* 80201948 001FE888  4E 80 04 21 */	bctrl 
/* 8020194C 001FE88C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201950 001FE890  FC 20 F8 90 */	fmr f1, f31
/* 80201954 001FE894  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80201958 001FE898  7D 89 03 A6 */	mtctr r12
/* 8020195C 001FE89C  4E 80 04 21 */	bctrl 
/* 80201960 001FE8A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201964 001FE8A4  28 00 00 00 */	cmplwi r0, 0
/* 80201968 001FE8A8  40 82 00 24 */	bne .L_8020198C
/* 8020196C 001FE8AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201970 001FE8B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201974 001FE8B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201978 001FE8B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020197C 001FE8BC  7D 89 03 A6 */	mtctr r12
/* 80201980 001FE8C0  4E 80 04 21 */	bctrl 
/* 80201984 001FE8C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201988 001FE8C8  48 00 00 94 */	b .L_80201A1C
.L_8020198C:
/* 8020198C 001FE8CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201990 001FE8D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201994 001FE8D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201998 001FE8D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020199C 001FE8DC  7D 89 03 A6 */	mtctr r12
/* 802019A0 001FE8E0  4E 80 04 21 */	bctrl 
/* 802019A4 001FE8E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802019A8 001FE8E8  48 00 00 58 */	b .L_80201A00
.L_802019AC:
/* 802019AC 001FE8EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802019B0 001FE8F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802019B4 001FE8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802019B8 001FE8F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802019BC 001FE8FC  7D 89 03 A6 */	mtctr r12
/* 802019C0 001FE900  4E 80 04 21 */	bctrl 
/* 802019C4 001FE904  7C 64 1B 78 */	mr r4, r3
/* 802019C8 001FE908  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802019CC 001FE90C  81 83 00 00 */	lwz r12, 0(r3)
/* 802019D0 001FE910  81 8C 00 08 */	lwz r12, 8(r12)
/* 802019D4 001FE914  7D 89 03 A6 */	mtctr r12
/* 802019D8 001FE918  4E 80 04 21 */	bctrl 
/* 802019DC 001FE91C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802019E0 001FE920  40 82 00 3C */	bne .L_80201A1C
/* 802019E4 001FE924  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802019E8 001FE928  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802019EC 001FE92C  81 83 00 00 */	lwz r12, 0(r3)
/* 802019F0 001FE930  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802019F4 001FE934  7D 89 03 A6 */	mtctr r12
/* 802019F8 001FE938  4E 80 04 21 */	bctrl 
/* 802019FC 001FE93C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201A00:
/* 80201A00 001FE940  81 81 00 08 */	lwz r12, 8(r1)
/* 80201A04 001FE944  38 61 00 08 */	addi r3, r1, 8
/* 80201A08 001FE948  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201A0C 001FE94C  7D 89 03 A6 */	mtctr r12
/* 80201A10 001FE950  4E 80 04 21 */	bctrl 
/* 80201A14 001FE954  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201A18 001FE958  41 82 FF 94 */	beq .L_802019AC
.L_80201A1C:
/* 80201A1C 001FE95C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201A20 001FE960  81 83 00 00 */	lwz r12, 0(r3)
/* 80201A24 001FE964  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80201A28 001FE968  7D 89 03 A6 */	mtctr r12
/* 80201A2C 001FE96C  4E 80 04 21 */	bctrl 
/* 80201A30 001FE970  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201A34 001FE974  7C 04 18 40 */	cmplw r4, r3
/* 80201A38 001FE978  40 82 FF 00 */	bne .L_80201938
/* 80201A3C 001FE97C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201A40 001FE980  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80201A44 001FE984  7C 08 03 A6 */	mtlr r0
/* 80201A48 001FE988  38 21 00 20 */	addi r1, r1, 0x20
/* 80201A4C 001FE98C  4E 80 00 20 */	blr 

.global "doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80201A50 001FE990  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201A54 001FE994  7C 08 02 A6 */	mflr r0
/* 80201A58 001FE998  3C 80 80 4B */	lis r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
/* 80201A5C 001FE99C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201A60 001FE9A0  38 00 00 00 */	li r0, 0
/* 80201A64 001FE9A4  38 84 1B 8C */	addi r4, r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
/* 80201A68 001FE9A8  28 00 00 00 */	cmplwi r0, 0
/* 80201A6C 001FE9AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201A70 001FE9B0  90 81 00 08 */	stw r4, 8(r1)
/* 80201A74 001FE9B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80201A78 001FE9B8  90 61 00 10 */	stw r3, 0x10(r1)
/* 80201A7C 001FE9BC  40 82 00 1C */	bne .L_80201A98
/* 80201A80 001FE9C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80201A84 001FE9C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201A88 001FE9C8  7D 89 03 A6 */	mtctr r12
/* 80201A8C 001FE9CC  4E 80 04 21 */	bctrl 
/* 80201A90 001FE9D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201A94 001FE9D4  48 00 01 70 */	b .L_80201C04
.L_80201A98:
/* 80201A98 001FE9D8  81 83 00 00 */	lwz r12, 0(r3)
/* 80201A9C 001FE9DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201AA0 001FE9E0  7D 89 03 A6 */	mtctr r12
/* 80201AA4 001FE9E4  4E 80 04 21 */	bctrl 
/* 80201AA8 001FE9E8  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201AAC 001FE9EC  48 00 00 58 */	b .L_80201B04
.L_80201AB0:
/* 80201AB0 001FE9F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201AB4 001FE9F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201AB8 001FE9F8  81 83 00 00 */	lwz r12, 0(r3)
/* 80201ABC 001FE9FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201AC0 001FEA00  7D 89 03 A6 */	mtctr r12
/* 80201AC4 001FEA04  4E 80 04 21 */	bctrl 
/* 80201AC8 001FEA08  7C 64 1B 78 */	mr r4, r3
/* 80201ACC 001FEA0C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80201AD0 001FEA10  81 83 00 00 */	lwz r12, 0(r3)
/* 80201AD4 001FEA14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80201AD8 001FEA18  7D 89 03 A6 */	mtctr r12
/* 80201ADC 001FEA1C  4E 80 04 21 */	bctrl 
/* 80201AE0 001FEA20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201AE4 001FEA24  40 82 01 20 */	bne .L_80201C04
/* 80201AE8 001FEA28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201AEC 001FEA2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201AF0 001FEA30  81 83 00 00 */	lwz r12, 0(r3)
/* 80201AF4 001FEA34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201AF8 001FEA38  7D 89 03 A6 */	mtctr r12
/* 80201AFC 001FEA3C  4E 80 04 21 */	bctrl 
/* 80201B00 001FEA40  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201B04:
/* 80201B04 001FEA44  81 81 00 08 */	lwz r12, 8(r1)
/* 80201B08 001FEA48  38 61 00 08 */	addi r3, r1, 8
/* 80201B0C 001FEA4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201B10 001FEA50  7D 89 03 A6 */	mtctr r12
/* 80201B14 001FEA54  4E 80 04 21 */	bctrl 
/* 80201B18 001FEA58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201B1C 001FEA5C  41 82 FF 94 */	beq .L_80201AB0
/* 80201B20 001FEA60  48 00 00 E4 */	b .L_80201C04
.L_80201B24:
/* 80201B24 001FEA64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201B28 001FEA68  81 83 00 00 */	lwz r12, 0(r3)
/* 80201B2C 001FEA6C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201B30 001FEA70  7D 89 03 A6 */	mtctr r12
/* 80201B34 001FEA74  4E 80 04 21 */	bctrl 
/* 80201B38 001FEA78  81 83 00 00 */	lwz r12, 0(r3)
/* 80201B3C 001FEA7C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80201B40 001FEA80  7D 89 03 A6 */	mtctr r12
/* 80201B44 001FEA84  4E 80 04 21 */	bctrl 
/* 80201B48 001FEA88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201B4C 001FEA8C  28 00 00 00 */	cmplwi r0, 0
/* 80201B50 001FEA90  40 82 00 24 */	bne .L_80201B74
/* 80201B54 001FEA94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201B58 001FEA98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201B5C 001FEA9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201B60 001FEAA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201B64 001FEAA4  7D 89 03 A6 */	mtctr r12
/* 80201B68 001FEAA8  4E 80 04 21 */	bctrl 
/* 80201B6C 001FEAAC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201B70 001FEAB0  48 00 00 94 */	b .L_80201C04
.L_80201B74:
/* 80201B74 001FEAB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201B78 001FEAB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201B7C 001FEABC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201B80 001FEAC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201B84 001FEAC4  7D 89 03 A6 */	mtctr r12
/* 80201B88 001FEAC8  4E 80 04 21 */	bctrl 
/* 80201B8C 001FEACC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201B90 001FEAD0  48 00 00 58 */	b .L_80201BE8
.L_80201B94:
/* 80201B94 001FEAD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201B98 001FEAD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201B9C 001FEADC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201BA0 001FEAE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201BA4 001FEAE4  7D 89 03 A6 */	mtctr r12
/* 80201BA8 001FEAE8  4E 80 04 21 */	bctrl 
/* 80201BAC 001FEAEC  7C 64 1B 78 */	mr r4, r3
/* 80201BB0 001FEAF0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80201BB4 001FEAF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201BB8 001FEAF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80201BBC 001FEAFC  7D 89 03 A6 */	mtctr r12
/* 80201BC0 001FEB00  4E 80 04 21 */	bctrl 
/* 80201BC4 001FEB04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201BC8 001FEB08  40 82 00 3C */	bne .L_80201C04
/* 80201BCC 001FEB0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201BD0 001FEB10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201BD4 001FEB14  81 83 00 00 */	lwz r12, 0(r3)
/* 80201BD8 001FEB18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201BDC 001FEB1C  7D 89 03 A6 */	mtctr r12
/* 80201BE0 001FEB20  4E 80 04 21 */	bctrl 
/* 80201BE4 001FEB24  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201BE8:
/* 80201BE8 001FEB28  81 81 00 08 */	lwz r12, 8(r1)
/* 80201BEC 001FEB2C  38 61 00 08 */	addi r3, r1, 8
/* 80201BF0 001FEB30  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201BF4 001FEB34  7D 89 03 A6 */	mtctr r12
/* 80201BF8 001FEB38  4E 80 04 21 */	bctrl 
/* 80201BFC 001FEB3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201C00 001FEB40  41 82 FF 94 */	beq .L_80201B94
.L_80201C04:
/* 80201C04 001FEB44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201C08 001FEB48  81 83 00 00 */	lwz r12, 0(r3)
/* 80201C0C 001FEB4C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80201C10 001FEB50  7D 89 03 A6 */	mtctr r12
/* 80201C14 001FEB54  4E 80 04 21 */	bctrl 
/* 80201C18 001FEB58  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201C1C 001FEB5C  7C 04 18 40 */	cmplw r4, r3
/* 80201C20 001FEB60  40 82 FF 04 */	bne .L_80201B24
/* 80201C24 001FEB64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201C28 001FEB68  7C 08 03 A6 */	mtlr r0
/* 80201C2C 001FEB6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80201C30 001FEB70  4E 80 00 20 */	blr 

.global "doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi"
"doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi":
/* 80201C34 001FEB74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201C38 001FEB78  7C 08 02 A6 */	mflr r0
/* 80201C3C 001FEB7C  3C A0 80 4B */	lis r5, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
/* 80201C40 001FEB80  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201C44 001FEB84  38 00 00 00 */	li r0, 0
/* 80201C48 001FEB88  38 A5 1B 8C */	addi r5, r5, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
/* 80201C4C 001FEB8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80201C50 001FEB90  28 00 00 00 */	cmplwi r0, 0
/* 80201C54 001FEB94  7C 9F 23 78 */	mr r31, r4
/* 80201C58 001FEB98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201C5C 001FEB9C  90 A1 00 08 */	stw r5, 8(r1)
/* 80201C60 001FEBA0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80201C64 001FEBA4  90 61 00 10 */	stw r3, 0x10(r1)
/* 80201C68 001FEBA8  40 82 00 1C */	bne .L_80201C84
/* 80201C6C 001FEBAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201C70 001FEBB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201C74 001FEBB4  7D 89 03 A6 */	mtctr r12
/* 80201C78 001FEBB8  4E 80 04 21 */	bctrl 
/* 80201C7C 001FEBBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201C80 001FEBC0  48 00 01 74 */	b .L_80201DF4
.L_80201C84:
/* 80201C84 001FEBC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201C88 001FEBC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201C8C 001FEBCC  7D 89 03 A6 */	mtctr r12
/* 80201C90 001FEBD0  4E 80 04 21 */	bctrl 
/* 80201C94 001FEBD4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201C98 001FEBD8  48 00 00 58 */	b .L_80201CF0
.L_80201C9C:
/* 80201C9C 001FEBDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201CA0 001FEBE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201CA4 001FEBE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201CA8 001FEBE8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201CAC 001FEBEC  7D 89 03 A6 */	mtctr r12
/* 80201CB0 001FEBF0  4E 80 04 21 */	bctrl 
/* 80201CB4 001FEBF4  7C 64 1B 78 */	mr r4, r3
/* 80201CB8 001FEBF8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80201CBC 001FEBFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201CC0 001FEC00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80201CC4 001FEC04  7D 89 03 A6 */	mtctr r12
/* 80201CC8 001FEC08  4E 80 04 21 */	bctrl 
/* 80201CCC 001FEC0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201CD0 001FEC10  40 82 01 24 */	bne .L_80201DF4
/* 80201CD4 001FEC14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201CD8 001FEC18  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201CDC 001FEC1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201CE0 001FEC20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201CE4 001FEC24  7D 89 03 A6 */	mtctr r12
/* 80201CE8 001FEC28  4E 80 04 21 */	bctrl 
/* 80201CEC 001FEC2C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201CF0:
/* 80201CF0 001FEC30  81 81 00 08 */	lwz r12, 8(r1)
/* 80201CF4 001FEC34  38 61 00 08 */	addi r3, r1, 8
/* 80201CF8 001FEC38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201CFC 001FEC3C  7D 89 03 A6 */	mtctr r12
/* 80201D00 001FEC40  4E 80 04 21 */	bctrl 
/* 80201D04 001FEC44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201D08 001FEC48  41 82 FF 94 */	beq .L_80201C9C
/* 80201D0C 001FEC4C  48 00 00 E8 */	b .L_80201DF4
.L_80201D10:
/* 80201D10 001FEC50  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201D14 001FEC54  81 83 00 00 */	lwz r12, 0(r3)
/* 80201D18 001FEC58  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201D1C 001FEC5C  7D 89 03 A6 */	mtctr r12
/* 80201D20 001FEC60  4E 80 04 21 */	bctrl 
/* 80201D24 001FEC64  81 83 00 00 */	lwz r12, 0(r3)
/* 80201D28 001FEC68  7F E4 FB 78 */	mr r4, r31
/* 80201D2C 001FEC6C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80201D30 001FEC70  7D 89 03 A6 */	mtctr r12
/* 80201D34 001FEC74  4E 80 04 21 */	bctrl 
/* 80201D38 001FEC78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201D3C 001FEC7C  28 00 00 00 */	cmplwi r0, 0
/* 80201D40 001FEC80  40 82 00 24 */	bne .L_80201D64
/* 80201D44 001FEC84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201D48 001FEC88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201D4C 001FEC8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80201D50 001FEC90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201D54 001FEC94  7D 89 03 A6 */	mtctr r12
/* 80201D58 001FEC98  4E 80 04 21 */	bctrl 
/* 80201D5C 001FEC9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201D60 001FECA0  48 00 00 94 */	b .L_80201DF4
.L_80201D64:
/* 80201D64 001FECA4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201D68 001FECA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201D6C 001FECAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201D70 001FECB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201D74 001FECB4  7D 89 03 A6 */	mtctr r12
/* 80201D78 001FECB8  4E 80 04 21 */	bctrl 
/* 80201D7C 001FECBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201D80 001FECC0  48 00 00 58 */	b .L_80201DD8
.L_80201D84:
/* 80201D84 001FECC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201D88 001FECC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201D8C 001FECCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201D90 001FECD0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201D94 001FECD4  7D 89 03 A6 */	mtctr r12
/* 80201D98 001FECD8  4E 80 04 21 */	bctrl 
/* 80201D9C 001FECDC  7C 64 1B 78 */	mr r4, r3
/* 80201DA0 001FECE0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80201DA4 001FECE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201DA8 001FECE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80201DAC 001FECEC  7D 89 03 A6 */	mtctr r12
/* 80201DB0 001FECF0  4E 80 04 21 */	bctrl 
/* 80201DB4 001FECF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201DB8 001FECF8  40 82 00 3C */	bne .L_80201DF4
/* 80201DBC 001FECFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201DC0 001FED00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201DC4 001FED04  81 83 00 00 */	lwz r12, 0(r3)
/* 80201DC8 001FED08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201DCC 001FED0C  7D 89 03 A6 */	mtctr r12
/* 80201DD0 001FED10  4E 80 04 21 */	bctrl 
/* 80201DD4 001FED14  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201DD8:
/* 80201DD8 001FED18  81 81 00 08 */	lwz r12, 8(r1)
/* 80201DDC 001FED1C  38 61 00 08 */	addi r3, r1, 8
/* 80201DE0 001FED20  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201DE4 001FED24  7D 89 03 A6 */	mtctr r12
/* 80201DE8 001FED28  4E 80 04 21 */	bctrl 
/* 80201DEC 001FED2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201DF0 001FED30  41 82 FF 94 */	beq .L_80201D84
.L_80201DF4:
/* 80201DF4 001FED34  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201DF8 001FED38  81 83 00 00 */	lwz r12, 0(r3)
/* 80201DFC 001FED3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80201E00 001FED40  7D 89 03 A6 */	mtctr r12
/* 80201E04 001FED44  4E 80 04 21 */	bctrl 
/* 80201E08 001FED48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201E0C 001FED4C  7C 04 18 40 */	cmplw r4, r3
/* 80201E10 001FED50  40 82 FF 00 */	bne .L_80201D10
/* 80201E14 001FED54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80201E18 001FED58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80201E1C 001FED5C  7C 08 03 A6 */	mtlr r0
/* 80201E20 001FED60  38 21 00 20 */	addi r1, r1, 0x20
/* 80201E24 001FED64  4E 80 00 20 */	blr 

.global "doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80201E28 001FED68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80201E2C 001FED6C  7C 08 02 A6 */	mflr r0
/* 80201E30 001FED70  3C 80 80 4B */	lis r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
/* 80201E34 001FED74  90 01 00 24 */	stw r0, 0x24(r1)
/* 80201E38 001FED78  38 00 00 00 */	li r0, 0
/* 80201E3C 001FED7C  38 84 1B 8C */	addi r4, r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
/* 80201E40 001FED80  28 00 00 00 */	cmplwi r0, 0
/* 80201E44 001FED84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201E48 001FED88  90 81 00 08 */	stw r4, 8(r1)
/* 80201E4C 001FED8C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80201E50 001FED90  90 61 00 10 */	stw r3, 0x10(r1)
/* 80201E54 001FED94  40 82 00 1C */	bne .L_80201E70
/* 80201E58 001FED98  81 83 00 00 */	lwz r12, 0(r3)
/* 80201E5C 001FED9C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201E60 001FEDA0  7D 89 03 A6 */	mtctr r12
/* 80201E64 001FEDA4  4E 80 04 21 */	bctrl 
/* 80201E68 001FEDA8  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201E6C 001FEDAC  48 00 01 70 */	b .L_80201FDC
.L_80201E70:
/* 80201E70 001FEDB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80201E74 001FEDB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80201E78 001FEDB8  7D 89 03 A6 */	mtctr r12
/* 80201E7C 001FEDBC  4E 80 04 21 */	bctrl 
/* 80201E80 001FEDC0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201E84 001FEDC4  48 00 00 58 */	b .L_80201EDC
.L_80201E88:
/* 80201E88 001FEDC8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201E8C 001FEDCC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201E90 001FEDD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80201E94 001FEDD4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201E98 001FEDD8  7D 89 03 A6 */	mtctr r12
/* 80201E9C 001FEDDC  4E 80 04 21 */	bctrl 
/* 80201EA0 001FEDE0  7C 64 1B 78 */	mr r4, r3
/* 80201EA4 001FEDE4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80201EA8 001FEDE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80201EAC 001FEDEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80201EB0 001FEDF0  7D 89 03 A6 */	mtctr r12
/* 80201EB4 001FEDF4  4E 80 04 21 */	bctrl 
/* 80201EB8 001FEDF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201EBC 001FEDFC  40 82 01 20 */	bne .L_80201FDC
/* 80201EC0 001FEE00  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201EC4 001FEE04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201EC8 001FEE08  81 83 00 00 */	lwz r12, 0(r3)
/* 80201ECC 001FEE0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201ED0 001FEE10  7D 89 03 A6 */	mtctr r12
/* 80201ED4 001FEE14  4E 80 04 21 */	bctrl 
/* 80201ED8 001FEE18  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201EDC:
/* 80201EDC 001FEE1C  81 81 00 08 */	lwz r12, 8(r1)
/* 80201EE0 001FEE20  38 61 00 08 */	addi r3, r1, 8
/* 80201EE4 001FEE24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201EE8 001FEE28  7D 89 03 A6 */	mtctr r12
/* 80201EEC 001FEE2C  4E 80 04 21 */	bctrl 
/* 80201EF0 001FEE30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201EF4 001FEE34  41 82 FF 94 */	beq .L_80201E88
/* 80201EF8 001FEE38  48 00 00 E4 */	b .L_80201FDC
.L_80201EFC:
/* 80201EFC 001FEE3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201F00 001FEE40  81 83 00 00 */	lwz r12, 0(r3)
/* 80201F04 001FEE44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201F08 001FEE48  7D 89 03 A6 */	mtctr r12
/* 80201F0C 001FEE4C  4E 80 04 21 */	bctrl 
/* 80201F10 001FEE50  81 83 00 00 */	lwz r12, 0(r3)
/* 80201F14 001FEE54  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80201F18 001FEE58  7D 89 03 A6 */	mtctr r12
/* 80201F1C 001FEE5C  4E 80 04 21 */	bctrl 
/* 80201F20 001FEE60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201F24 001FEE64  28 00 00 00 */	cmplwi r0, 0
/* 80201F28 001FEE68  40 82 00 24 */	bne .L_80201F4C
/* 80201F2C 001FEE6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201F30 001FEE70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201F34 001FEE74  81 83 00 00 */	lwz r12, 0(r3)
/* 80201F38 001FEE78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201F3C 001FEE7C  7D 89 03 A6 */	mtctr r12
/* 80201F40 001FEE80  4E 80 04 21 */	bctrl 
/* 80201F44 001FEE84  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201F48 001FEE88  48 00 00 94 */	b .L_80201FDC
.L_80201F4C:
/* 80201F4C 001FEE8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201F50 001FEE90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201F54 001FEE94  81 83 00 00 */	lwz r12, 0(r3)
/* 80201F58 001FEE98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201F5C 001FEE9C  7D 89 03 A6 */	mtctr r12
/* 80201F60 001FEEA0  4E 80 04 21 */	bctrl 
/* 80201F64 001FEEA4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80201F68 001FEEA8  48 00 00 58 */	b .L_80201FC0
.L_80201F6C:
/* 80201F6C 001FEEAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201F70 001FEEB0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201F74 001FEEB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80201F78 001FEEB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80201F7C 001FEEBC  7D 89 03 A6 */	mtctr r12
/* 80201F80 001FEEC0  4E 80 04 21 */	bctrl 
/* 80201F84 001FEEC4  7C 64 1B 78 */	mr r4, r3
/* 80201F88 001FEEC8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80201F8C 001FEECC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201F90 001FEED0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80201F94 001FEED4  7D 89 03 A6 */	mtctr r12
/* 80201F98 001FEED8  4E 80 04 21 */	bctrl 
/* 80201F9C 001FEEDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201FA0 001FEEE0  40 82 00 3C */	bne .L_80201FDC
/* 80201FA4 001FEEE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201FA8 001FEEE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201FAC 001FEEEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80201FB0 001FEEF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80201FB4 001FEEF4  7D 89 03 A6 */	mtctr r12
/* 80201FB8 001FEEF8  4E 80 04 21 */	bctrl 
/* 80201FBC 001FEEFC  90 61 00 0C */	stw r3, 0xc(r1)
.L_80201FC0:
/* 80201FC0 001FEF00  81 81 00 08 */	lwz r12, 8(r1)
/* 80201FC4 001FEF04  38 61 00 08 */	addi r3, r1, 8
/* 80201FC8 001FEF08  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80201FCC 001FEF0C  7D 89 03 A6 */	mtctr r12
/* 80201FD0 001FEF10  4E 80 04 21 */	bctrl 
/* 80201FD4 001FEF14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80201FD8 001FEF18  41 82 FF 94 */	beq .L_80201F6C
.L_80201FDC:
/* 80201FDC 001FEF1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80201FE0 001FEF20  81 83 00 00 */	lwz r12, 0(r3)
/* 80201FE4 001FEF24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80201FE8 001FEF28  7D 89 03 A6 */	mtctr r12
/* 80201FEC 001FEF2C  4E 80 04 21 */	bctrl 
/* 80201FF0 001FEF30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80201FF4 001FEF34  7C 04 18 40 */	cmplw r4, r3
/* 80201FF8 001FEF38  40 82 FF 04 */	bne .L_80201EFC
/* 80201FFC 001FEF3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80202000 001FEF40  7C 08 03 A6 */	mtlr r0
/* 80202004 001FEF44  38 21 00 20 */	addi r1, r1, 0x20
/* 80202008 001FEF48  4E 80 00 20 */	blr 

.global "doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020200C 001FEF4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80202010 001FEF50  7C 08 02 A6 */	mflr r0
/* 80202014 001FEF54  3C 80 80 4B */	lis r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@ha
/* 80202018 001FEF58  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020201C 001FEF5C  38 00 00 00 */	li r0, 0
/* 80202020 001FEF60  38 84 1B 8C */	addi r4, r4, "__vt__39Iterator<Q34Game13PelletOtakara6Object>"@l
/* 80202024 001FEF64  28 00 00 00 */	cmplwi r0, 0
/* 80202028 001FEF68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020202C 001FEF6C  90 81 00 08 */	stw r4, 8(r1)
/* 80202030 001FEF70  90 01 00 0C */	stw r0, 0xc(r1)
/* 80202034 001FEF74  90 61 00 10 */	stw r3, 0x10(r1)
/* 80202038 001FEF78  40 82 00 1C */	bne .L_80202054
/* 8020203C 001FEF7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80202040 001FEF80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80202044 001FEF84  7D 89 03 A6 */	mtctr r12
/* 80202048 001FEF88  4E 80 04 21 */	bctrl 
/* 8020204C 001FEF8C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80202050 001FEF90  48 00 01 70 */	b .L_802021C0
.L_80202054:
/* 80202054 001FEF94  81 83 00 00 */	lwz r12, 0(r3)
/* 80202058 001FEF98  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020205C 001FEF9C  7D 89 03 A6 */	mtctr r12
/* 80202060 001FEFA0  4E 80 04 21 */	bctrl 
/* 80202064 001FEFA4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80202068 001FEFA8  48 00 00 58 */	b .L_802020C0
.L_8020206C:
/* 8020206C 001FEFAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80202070 001FEFB0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80202074 001FEFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80202078 001FEFB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020207C 001FEFBC  7D 89 03 A6 */	mtctr r12
/* 80202080 001FEFC0  4E 80 04 21 */	bctrl 
/* 80202084 001FEFC4  7C 64 1B 78 */	mr r4, r3
/* 80202088 001FEFC8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020208C 001FEFCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80202090 001FEFD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80202094 001FEFD4  7D 89 03 A6 */	mtctr r12
/* 80202098 001FEFD8  4E 80 04 21 */	bctrl 
/* 8020209C 001FEFDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802020A0 001FEFE0  40 82 01 20 */	bne .L_802021C0
/* 802020A4 001FEFE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802020A8 001FEFE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802020AC 001FEFEC  81 83 00 00 */	lwz r12, 0(r3)
/* 802020B0 001FEFF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802020B4 001FEFF4  7D 89 03 A6 */	mtctr r12
/* 802020B8 001FEFF8  4E 80 04 21 */	bctrl 
/* 802020BC 001FEFFC  90 61 00 0C */	stw r3, 0xc(r1)
.L_802020C0:
/* 802020C0 001FF000  81 81 00 08 */	lwz r12, 8(r1)
/* 802020C4 001FF004  38 61 00 08 */	addi r3, r1, 8
/* 802020C8 001FF008  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802020CC 001FF00C  7D 89 03 A6 */	mtctr r12
/* 802020D0 001FF010  4E 80 04 21 */	bctrl 
/* 802020D4 001FF014  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802020D8 001FF018  41 82 FF 94 */	beq .L_8020206C
/* 802020DC 001FF01C  48 00 00 E4 */	b .L_802021C0
.L_802020E0:
/* 802020E0 001FF020  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802020E4 001FF024  81 83 00 00 */	lwz r12, 0(r3)
/* 802020E8 001FF028  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802020EC 001FF02C  7D 89 03 A6 */	mtctr r12
/* 802020F0 001FF030  4E 80 04 21 */	bctrl 
/* 802020F4 001FF034  81 83 00 00 */	lwz r12, 0(r3)
/* 802020F8 001FF038  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802020FC 001FF03C  7D 89 03 A6 */	mtctr r12
/* 80202100 001FF040  4E 80 04 21 */	bctrl 
/* 80202104 001FF044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202108 001FF048  28 00 00 00 */	cmplwi r0, 0
/* 8020210C 001FF04C  40 82 00 24 */	bne .L_80202130
/* 80202110 001FF050  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80202114 001FF054  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80202118 001FF058  81 83 00 00 */	lwz r12, 0(r3)
/* 8020211C 001FF05C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80202120 001FF060  7D 89 03 A6 */	mtctr r12
/* 80202124 001FF064  4E 80 04 21 */	bctrl 
/* 80202128 001FF068  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020212C 001FF06C  48 00 00 94 */	b .L_802021C0
.L_80202130:
/* 80202130 001FF070  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80202134 001FF074  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80202138 001FF078  81 83 00 00 */	lwz r12, 0(r3)
/* 8020213C 001FF07C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80202140 001FF080  7D 89 03 A6 */	mtctr r12
/* 80202144 001FF084  4E 80 04 21 */	bctrl 
/* 80202148 001FF088  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020214C 001FF08C  48 00 00 58 */	b .L_802021A4
.L_80202150:
/* 80202150 001FF090  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80202154 001FF094  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80202158 001FF098  81 83 00 00 */	lwz r12, 0(r3)
/* 8020215C 001FF09C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80202160 001FF0A0  7D 89 03 A6 */	mtctr r12
/* 80202164 001FF0A4  4E 80 04 21 */	bctrl 
/* 80202168 001FF0A8  7C 64 1B 78 */	mr r4, r3
/* 8020216C 001FF0AC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80202170 001FF0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80202174 001FF0B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80202178 001FF0B8  7D 89 03 A6 */	mtctr r12
/* 8020217C 001FF0BC  4E 80 04 21 */	bctrl 
/* 80202180 001FF0C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80202184 001FF0C4  40 82 00 3C */	bne .L_802021C0
/* 80202188 001FF0C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020218C 001FF0CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80202190 001FF0D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80202194 001FF0D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80202198 001FF0D8  7D 89 03 A6 */	mtctr r12
/* 8020219C 001FF0DC  4E 80 04 21 */	bctrl 
/* 802021A0 001FF0E0  90 61 00 0C */	stw r3, 0xc(r1)
.L_802021A4:
/* 802021A4 001FF0E4  81 81 00 08 */	lwz r12, 8(r1)
/* 802021A8 001FF0E8  38 61 00 08 */	addi r3, r1, 8
/* 802021AC 001FF0EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802021B0 001FF0F0  7D 89 03 A6 */	mtctr r12
/* 802021B4 001FF0F4  4E 80 04 21 */	bctrl 
/* 802021B8 001FF0F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802021BC 001FF0FC  41 82 FF 94 */	beq .L_80202150
.L_802021C0:
/* 802021C0 001FF100  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802021C4 001FF104  81 83 00 00 */	lwz r12, 0(r3)
/* 802021C8 001FF108  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802021CC 001FF10C  7D 89 03 A6 */	mtctr r12
/* 802021D0 001FF110  4E 80 04 21 */	bctrl 
/* 802021D4 001FF114  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802021D8 001FF118  7C 04 18 40 */	cmplw r4, r3
/* 802021DC 001FF11C  40 82 FF 04 */	bne .L_802020E0
/* 802021E0 001FF120  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802021E4 001FF124  7C 08 03 A6 */	mtlr r0
/* 802021E8 001FF128  38 21 00 20 */	addi r1, r1, 0x20
/* 802021EC 001FF12C  4E 80 00 20 */	blr 

.global "__ct__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"__ct__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802021F0 001FF130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802021F4 001FF134  7C 08 02 A6 */	mflr r0
/* 802021F8 001FF138  90 01 00 14 */	stw r0, 0x14(r1)
/* 802021FC 001FF13C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202200 001FF140  7C 7F 1B 78 */	mr r31, r3
/* 80202204 001FF144  48 20 F1 8D */	bl __ct__5CNodeFv
/* 80202208 001FF148  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020220C 001FF14C  3C 60 80 4C */	lis r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@ha
/* 80202210 001FF150  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80202214 001FF154  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 80202218 001FF158  90 1F 00 00 */	stw r0, 0(r31)
/* 8020221C 001FF15C  38 03 E7 8C */	addi r0, r3, "__vt__40Container<Q34Game13PelletOtakara6Object>"@l
/* 80202220 001FF160  3C 80 80 4C */	lis r4, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80202224 001FF164  3C 60 80 4C */	lis r3, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@ha
/* 80202228 001FF168  90 1F 00 00 */	stw r0, 0(r31)
/* 8020222C 001FF16C  39 00 00 00 */	li r8, 0
/* 80202230 001FF170  38 E4 E5 B8 */	addi r7, r4, "__vt__40ObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80202234 001FF174  38 A3 E6 34 */	addi r5, r3, "__vt__44MonoObjectMgr<Q34Game13PelletOtakara6Object>"@l
/* 80202238 001FF178  99 1F 00 18 */	stb r8, 0x18(r31)
/* 8020223C 001FF17C  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 80202240 001FF180  38 C7 00 2C */	addi r6, r7, 0x2c
/* 80202244 001FF184  38 85 00 2C */	addi r4, r5, 0x2c
/* 80202248 001FF188  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8020224C 001FF18C  38 00 00 01 */	li r0, 1
/* 80202250 001FF190  7F E3 FB 78 */	mr r3, r31
/* 80202254 001FF194  90 FF 00 00 */	stw r7, 0(r31)
/* 80202258 001FF198  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 8020225C 001FF19C  90 BF 00 00 */	stw r5, 0(r31)
/* 80202260 001FF1A0  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80202264 001FF1A4  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80202268 001FF1A8  91 1F 00 24 */	stw r8, 0x24(r31)
/* 8020226C 001FF1AC  91 1F 00 20 */	stw r8, 0x20(r31)
/* 80202270 001FF1B0  91 1F 00 28 */	stw r8, 0x28(r31)
/* 80202274 001FF1B4  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 80202278 001FF1B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020227C 001FF1BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202280 001FF1C0  7C 08 03 A6 */	mtlr r0
/* 80202284 001FF1C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80202288 001FF1C8  4E 80 00 20 */	blr 

.global "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
"getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet":
/* 8020228C 001FF1CC  28 04 00 00 */	cmplwi r4, 0
/* 80202290 001FF1D0  41 82 00 14 */	beq .L_802022A4
/* 80202294 001FF1D4  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 80202298 001FF1D8  80 04 04 40 */	lwz r0, 0x440(r4)
/* 8020229C 001FF1DC  7C 63 00 AE */	lbzx r3, r3, r0
/* 802022A0 001FF1E0  4E 80 00 20 */	blr 
.L_802022A4:
/* 802022A4 001FF1E4  38 60 FF FF */	li r3, -1
/* 802022A8 001FF1E8  4E 80 00 20 */	blr 

.global "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
"setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet":
/* 802022AC 001FF1EC  28 04 00 00 */	cmplwi r4, 0
/* 802022B0 001FF1F0  4D 82 00 20 */	beqlr 
/* 802022B4 001FF1F4  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 802022B8 001FF1F8  38 A0 00 65 */	li r5, 0x65
/* 802022BC 001FF1FC  80 04 04 40 */	lwz r0, 0x440(r4)
/* 802022C0 001FF200  7C A3 01 AE */	stbx r5, r3, r0
/* 802022C4 001FF204  4E 80 00 20 */	blr 

.global "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
"setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet":
/* 802022C8 001FF208  28 04 00 00 */	cmplwi r4, 0
/* 802022CC 001FF20C  4D 82 00 20 */	beqlr 
/* 802022D0 001FF210  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 802022D4 001FF214  38 A0 00 64 */	li r5, 0x64
/* 802022D8 001FF218  80 04 04 40 */	lwz r0, 0x440(r4)
/* 802022DC 001FF21C  7C A3 01 AE */	stbx r5, r3, r0
/* 802022E0 001FF220  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
"setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet":
/* 802022E4 001FF224  28 04 00 00 */	cmplwi r4, 0
/* 802022E8 001FF228  4D 82 00 20 */	beqlr 
/* 802022EC 001FF22C  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 802022F0 001FF230  38 A0 00 00 */	li r5, 0
/* 802022F4 001FF234  80 04 04 40 */	lwz r0, 0x440(r4)
/* 802022F8 001FF238  7C A3 01 AE */	stbx r5, r3, r0
/* 802022FC 001FF23C  4E 80 00 20 */	blr 

.global "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202300 001FF240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202304 001FF244  7C 08 02 A6 */	mflr r0
/* 80202308 001FF248  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020230C 001FF24C  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 80202310 001FF250  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80202314 001FF254  7D 89 03 A6 */	mtctr r12
/* 80202318 001FF258  4E 80 04 21 */	bctrl 
/* 8020231C 001FF25C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202320 001FF260  7C 08 03 A6 */	mtlr r0
/* 80202324 001FF264  38 21 00 10 */	addi r1, r1, 0x10
/* 80202328 001FF268  4E 80 00 20 */	blr 

.global "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
"get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv":
/* 8020232C 001FF26C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202330 001FF270  7C 08 02 A6 */	mflr r0
/* 80202334 001FF274  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202338 001FF278  85 83 00 70 */	lwzu r12, 0x70(r3)
/* 8020233C 001FF27C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80202340 001FF280  7D 89 03 A6 */	mtctr r12
/* 80202344 001FF284  4E 80 04 21 */	bctrl 
/* 80202348 001FF288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020234C 001FF28C  7C 08 03 A6 */	mtlr r0
/* 80202350 001FF290  38 21 00 10 */	addi r1, r1, 0x10
/* 80202354 001FF294  4E 80 00 20 */	blr 

.global "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
"getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv":
/* 80202358 001FF298  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020235C 001FF29C  7C 08 02 A6 */	mflr r0
/* 80202360 001FF2A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202364 001FF2A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80202368 001FF2A8  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8020236C 001FF2AC  7D 89 03 A6 */	mtctr r12
/* 80202370 001FF2B0  4E 80 04 21 */	bctrl 
/* 80202374 001FF2B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202378 001FF2B8  7C 08 03 A6 */	mtlr r0
/* 8020237C 001FF2BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80202380 001FF2C0  4E 80 00 20 */	blr 

.global "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game12PelletConfig"
"birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game12PelletConfig":
/* 80202384 001FF2C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80202388 001FF2C8  7C 08 02 A6 */	mflr r0
/* 8020238C 001FF2CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80202390 001FF2D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80202394 001FF2D4  3B E0 00 00 */	li r31, 0
/* 80202398 001FF2D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020239C 001FF2DC  7C 9E 23 78 */	mr r30, r4
/* 802023A0 001FF2E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802023A4 001FF2E4  7C 7D 1B 78 */	mr r29, r3
/* 802023A8 001FF2E8  48 00 00 40 */	b .L_802023E8
.L_802023AC:
/* 802023AC 001FF2EC  80 7D 00 9C */	lwz r3, 0x9c(r29)
/* 802023B0 001FF2F0  7C 03 F8 AE */	lbzx r0, r3, r31
/* 802023B4 001FF2F4  28 00 00 65 */	cmplwi r0, 0x65
/* 802023B8 001FF2F8  40 82 00 2C */	bne .L_802023E4
/* 802023BC 001FF2FC  38 7D 00 70 */	addi r3, r29, 0x70
/* 802023C0 001FF300  7F E4 FB 78 */	mr r4, r31
/* 802023C4 001FF304  81 9D 00 70 */	lwz r12, 0x70(r29)
/* 802023C8 001FF308  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802023CC 001FF30C  7D 89 03 A6 */	mtctr r12
/* 802023D0 001FF310  4E 80 04 21 */	bctrl 
/* 802023D4 001FF314  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 802023D8 001FF318  7C 00 F0 40 */	cmplw r0, r30
/* 802023DC 001FF31C  40 82 00 08 */	bne .L_802023E4
/* 802023E0 001FF320  48 00 00 18 */	b .L_802023F8
.L_802023E4:
/* 802023E4 001FF324  3B FF 00 01 */	addi r31, r31, 1
.L_802023E8:
/* 802023E8 001FF328  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 802023EC 001FF32C  7C 1F 00 00 */	cmpw r31, r0
/* 802023F0 001FF330  41 80 FF BC */	blt .L_802023AC
/* 802023F4 001FF334  38 60 00 00 */	li r3, 0
.L_802023F8:
/* 802023F8 001FF338  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802023FC 001FF33C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80202400 001FF340  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80202404 001FF344  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80202408 001FF348  7C 08 03 A6 */	mtlr r0
/* 8020240C 001FF34C  38 21 00 20 */	addi r1, r1, 0x20
/* 80202410 001FF350  4E 80 00 20 */	blr 

.global "alloc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
"alloc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi":
/* 80202414 001FF354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202418 001FF358  7C 08 02 A6 */	mflr r0
/* 8020241C 001FF35C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80202420 001FF360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202424 001FF364  93 C1 00 08 */	stw r30, 8(r1)
/* 80202428 001FF368  7C 7E 1B 78 */	mr r30, r3
/* 8020242C 001FF36C  38 7E 00 70 */	addi r3, r30, 0x70
/* 80202430 001FF370  48 00 00 C9 */	bl "alloc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
/* 80202434 001FF374  7F C3 F3 78 */	mr r3, r30
/* 80202438 001FF378  48 00 00 5D */	bl "onAlloc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
/* 8020243C 001FF37C  3B E0 00 00 */	li r31, 0
/* 80202440 001FF380  48 00 00 30 */	b .L_80202470
.L_80202444:
/* 80202444 001FF384  38 7E 00 70 */	addi r3, r30, 0x70
/* 80202448 001FF388  7F E4 FB 78 */	mr r4, r31
/* 8020244C 001FF38C  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 80202450 001FF390  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80202454 001FF394  7D 89 03 A6 */	mtctr r12
/* 80202458 001FF398  4E 80 04 21 */	bctrl 
/* 8020245C 001FF39C  81 83 00 00 */	lwz r12, 0(r3)
/* 80202460 001FF3A0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80202464 001FF3A4  7D 89 03 A6 */	mtctr r12
/* 80202468 001FF3A8  4E 80 04 21 */	bctrl 
/* 8020246C 001FF3AC  3B FF 00 01 */	addi r31, r31, 1
.L_80202470:
/* 80202470 001FF3B0  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80202474 001FF3B4  7C 1F 00 00 */	cmpw r31, r0
/* 80202478 001FF3B8  41 80 FF CC */	blt .L_80202444
/* 8020247C 001FF3BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80202480 001FF3C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80202484 001FF3C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80202488 001FF3C8  7C 08 03 A6 */	mtlr r0
/* 8020248C 001FF3CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80202490 001FF3D0  4E 80 00 20 */	blr 

.global "onAlloc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"onAlloc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202494 001FF3D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202498 001FF3D8  7C 08 02 A6 */	mflr r0
/* 8020249C 001FF3DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802024A0 001FF3E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802024A4 001FF3E4  3B E0 00 00 */	li r31, 0
/* 802024A8 001FF3E8  93 C1 00 08 */	stw r30, 8(r1)
/* 802024AC 001FF3EC  7C 7E 1B 78 */	mr r30, r3
/* 802024B0 001FF3F0  48 00 00 24 */	b .L_802024D4
.L_802024B4:
/* 802024B4 001FF3F4  38 7E 00 70 */	addi r3, r30, 0x70
/* 802024B8 001FF3F8  7F E4 FB 78 */	mr r4, r31
/* 802024BC 001FF3FC  81 9E 00 70 */	lwz r12, 0x70(r30)
/* 802024C0 001FF400  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802024C4 001FF404  7D 89 03 A6 */	mtctr r12
/* 802024C8 001FF408  4E 80 04 21 */	bctrl 
/* 802024CC 001FF40C  93 E3 04 40 */	stw r31, 0x440(r3)
/* 802024D0 001FF410  3B FF 00 01 */	addi r31, r31, 1
.L_802024D4:
/* 802024D4 001FF414  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 802024D8 001FF418  7C 1F 00 00 */	cmpw r31, r0
/* 802024DC 001FF41C  41 80 FF D8 */	blt .L_802024B4
/* 802024E0 001FF420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802024E4 001FF424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802024E8 001FF428  83 C1 00 08 */	lwz r30, 8(r1)
/* 802024EC 001FF42C  7C 08 03 A6 */	mtlr r0
/* 802024F0 001FF430  38 21 00 10 */	addi r1, r1, 0x10
/* 802024F4 001FF434  4E 80 00 20 */	blr 

.global "alloc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
"alloc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi":
/* 802024F8 001FF438  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802024FC 001FF43C  7C 08 02 A6 */	mflr r0
/* 80202500 001FF440  90 01 00 24 */	stw r0, 0x24(r1)
/* 80202504 001FF444  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80202508 001FF448  7C 9F 23 78 */	mr r31, r4
/* 8020250C 001FF44C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80202510 001FF450  7C 7E 1B 78 */	mr r30, r3
/* 80202514 001FF454  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80202518 001FF458  7F FD FB 78 */	mr r29, r31
/* 8020251C 001FF45C  1C 7D 04 60 */	mulli r3, r29, 0x460
/* 80202520 001FF460  93 81 00 10 */	stw r28, 0x10(r1)
/* 80202524 001FF464  38 63 00 10 */	addi r3, r3, 0x10
/* 80202528 001FF468  4B E2 1A 85 */	bl __nwa__FUl
/* 8020252C 001FF46C  3C 80 80 20 */	lis r4, __ct__Q34Game13PelletOtakara6ObjectFv@ha
/* 80202530 001FF470  7F A7 EB 78 */	mr r7, r29
/* 80202534 001FF474  38 84 26 80 */	addi r4, r4, __ct__Q34Game13PelletOtakara6ObjectFv@l
/* 80202538 001FF478  38 A0 00 00 */	li r5, 0
/* 8020253C 001FF47C  38 C0 04 60 */	li r6, 0x460
/* 80202540 001FF480  4B EB F4 B1 */	bl __construct_new_array
/* 80202544 001FF484  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80202548 001FF488  38 00 00 00 */	li r0, 0
/* 8020254C 001FF48C  7F A3 EB 78 */	mr r3, r29
/* 80202550 001FF490  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80202554 001FF494  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80202558 001FF498  4B E2 1A 55 */	bl __nwa__FUl
/* 8020255C 001FF49C  2C 1F 00 00 */	cmpwi r31, 0
/* 80202560 001FF4A0  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80202564 001FF4A4  39 60 00 00 */	li r11, 0
/* 80202568 001FF4A8  40 81 00 B0 */	ble .L_80202618
/* 8020256C 001FF4AC  2C 1F 00 08 */	cmpwi r31, 8
/* 80202570 001FF4B0  38 7F FF F8 */	addi r3, r31, -8
/* 80202574 001FF4B4  40 81 00 80 */	ble .L_802025F4
/* 80202578 001FF4B8  38 03 00 07 */	addi r0, r3, 7
/* 8020257C 001FF4BC  54 00 E8 FE */	srwi r0, r0, 3
/* 80202580 001FF4C0  7C 09 03 A6 */	mtctr r0
/* 80202584 001FF4C4  2C 03 00 00 */	cmpwi r3, 0
/* 80202588 001FF4C8  40 81 00 6C */	ble .L_802025F4
.L_8020258C:
/* 8020258C 001FF4CC  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80202590 001FF4D0  39 40 00 01 */	li r10, 1
/* 80202594 001FF4D4  39 0B 00 01 */	addi r8, r11, 1
/* 80202598 001FF4D8  38 EB 00 02 */	addi r7, r11, 2
/* 8020259C 001FF4DC  7D 43 59 AE */	stbx r10, r3, r11
/* 802025A0 001FF4E0  38 CB 00 03 */	addi r6, r11, 3
/* 802025A4 001FF4E4  38 AB 00 04 */	addi r5, r11, 4
/* 802025A8 001FF4E8  38 8B 00 05 */	addi r4, r11, 5
/* 802025AC 001FF4EC  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 802025B0 001FF4F0  38 6B 00 06 */	addi r3, r11, 6
/* 802025B4 001FF4F4  38 0B 00 07 */	addi r0, r11, 7
/* 802025B8 001FF4F8  39 6B 00 08 */	addi r11, r11, 8
/* 802025BC 001FF4FC  7D 49 41 AE */	stbx r10, r9, r8
/* 802025C0 001FF500  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 802025C4 001FF504  7D 48 39 AE */	stbx r10, r8, r7
/* 802025C8 001FF508  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 802025CC 001FF50C  7D 47 31 AE */	stbx r10, r7, r6
/* 802025D0 001FF510  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 802025D4 001FF514  7D 46 29 AE */	stbx r10, r6, r5
/* 802025D8 001FF518  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 802025DC 001FF51C  7D 45 21 AE */	stbx r10, r5, r4
/* 802025E0 001FF520  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 802025E4 001FF524  7D 44 19 AE */	stbx r10, r4, r3
/* 802025E8 001FF528  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 802025EC 001FF52C  7D 43 01 AE */	stbx r10, r3, r0
/* 802025F0 001FF530  42 00 FF 9C */	bdnz .L_8020258C
.L_802025F4:
/* 802025F4 001FF534  7C 0B F8 50 */	subf r0, r11, r31
/* 802025F8 001FF538  38 80 00 01 */	li r4, 1
/* 802025FC 001FF53C  7C 09 03 A6 */	mtctr r0
/* 80202600 001FF540  7C 0B F8 00 */	cmpw r11, r31
/* 80202604 001FF544  40 80 00 14 */	bge .L_80202618
.L_80202608:
/* 80202608 001FF548  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8020260C 001FF54C  7C 83 59 AE */	stbx r4, r3, r11
/* 80202610 001FF550  39 6B 00 01 */	addi r11, r11, 1
/* 80202614 001FF554  42 00 FF F4 */	bdnz .L_80202608
.L_80202618:
/* 80202618 001FF558  7F C3 F3 78 */	mr r3, r30
/* 8020261C 001FF55C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80202620 001FF560  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80202624 001FF564  7D 89 03 A6 */	mtctr r12
/* 80202628 001FF568  4E 80 04 21 */	bctrl 
/* 8020262C 001FF56C  3B 80 00 00 */	li r28, 0
/* 80202630 001FF570  3B A0 00 00 */	li r29, 0
/* 80202634 001FF574  48 00 00 24 */	b .L_80202658
.L_80202638:
/* 80202638 001FF578  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 8020263C 001FF57C  7C 60 EA 14 */	add r3, r0, r29
/* 80202640 001FF580  81 83 00 00 */	lwz r12, 0(r3)
/* 80202644 001FF584  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80202648 001FF588  7D 89 03 A6 */	mtctr r12
/* 8020264C 001FF58C  4E 80 04 21 */	bctrl 
/* 80202650 001FF590  3B BD 04 60 */	addi r29, r29, 0x460
/* 80202654 001FF594  3B 9C 00 01 */	addi r28, r28, 1
.L_80202658:
/* 80202658 001FF598  7C 1C F8 00 */	cmpw r28, r31
/* 8020265C 001FF59C  41 80 FF DC */	blt .L_80202638
/* 80202660 001FF5A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80202664 001FF5A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80202668 001FF5A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020266C 001FF5AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80202670 001FF5B0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80202674 001FF5B4  7C 08 03 A6 */	mtlr r0
/* 80202678 001FF5B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8020267C 001FF5BC  4E 80 00 20 */	blr 

.global __ct__Q34Game13PelletOtakara6ObjectFv
__ct__Q34Game13PelletOtakara6ObjectFv:
/* 80202680 001FF5C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80202684 001FF5C4  7C 08 02 A6 */	mflr r0
/* 80202688 001FF5C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020268C 001FF5CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80202690 001FF5D0  7C 7F 1B 78 */	mr r31, r3
/* 80202694 001FF5D4  4B F6 3F ED */	bl __ct__Q24Game6PelletFv
/* 80202698 001FF5D8  3C 80 80 4C */	lis r4, __vt__Q34Game13PelletOtakara6Object@ha
/* 8020269C 001FF5DC  7F E3 FB 78 */	mr r3, r31
/* 802026A0 001FF5E0  38 A4 E7 B8 */	addi r5, r4, __vt__Q34Game13PelletOtakara6Object@l
/* 802026A4 001FF5E4  90 BF 00 00 */	stw r5, 0(r31)
/* 802026A8 001FF5E8  38 85 01 B4 */	addi r4, r5, 0x1b4
/* 802026AC 001FF5EC  38 05 01 C0 */	addi r0, r5, 0x1c0
/* 802026B0 001FF5F0  90 9F 03 14 */	stw r4, 0x314(r31)
/* 802026B4 001FF5F4  90 1F 03 18 */	stw r0, 0x318(r31)
/* 802026B8 001FF5F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802026BC 001FF5FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802026C0 001FF600  7C 08 03 A6 */	mtlr r0
/* 802026C4 001FF604  38 21 00 10 */	addi r1, r1, 0x10
/* 802026C8 001FF608  4E 80 00 20 */	blr 

.global __sinit_pelletOtakara_cpp
__sinit_pelletOtakara_cpp:
/* 802026CC 001FF60C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802026D0 001FF610  38 00 FF FF */	li r0, -1
/* 802026D4 001FF614  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802026D8 001FF618  3C 60 80 4C */	lis r3, lbl_804BE4E0@ha
/* 802026DC 001FF61C  90 0D 95 18 */	stw r0, lbl_80515B98@sda21(r13)
/* 802026E0 001FF620  D4 03 E4 E0 */	stfsu f0, lbl_804BE4E0@l(r3)
/* 802026E4 001FF624  D0 0D 95 1C */	stfs f0, lbl_80515B9C@sda21(r13)
/* 802026E8 001FF628  D0 03 00 04 */	stfs f0, 4(r3)
/* 802026EC 001FF62C  D0 03 00 08 */	stfs f0, 8(r3)
/* 802026F0 001FF630  4E 80 00 20 */	blr 

.global "@84@__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"@84@__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802026F4 001FF634  38 63 FF AC */	addi r3, r3, -84
/* 802026F8 001FF638  4B FF E1 34 */	b "__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 802026FC 001FF63C  38 63 FF E4 */	addi r3, r3, -28
/* 80202700 001FF640  4B F6 FC D0 */	b "resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
"@28@doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics":
/* 80202704 001FF644  38 63 FF E4 */	addi r3, r3, -28
/* 80202708 001FF648  4B FF EE 14 */	b "doDirectDraw__44MonoObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"

.global "@28@doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff"
"@28@doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff":
/* 8020270C 001FF64C  38 63 FF E4 */	addi r3, r3, -28
/* 80202710 001FF650  4B FF ED 7C */	b "doSimulation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Ff"

.global "@28@doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202714 001FF654  38 63 FF E4 */	addi r3, r3, -28
/* 80202718 001FF658  4B FF EC F4 */	b "doViewCalc__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"
"@28@doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi":
/* 8020271C 001FF65C  38 63 FF E4 */	addi r3, r3, -28
/* 80202720 001FF660  4B FF EC 5C */	b "doSetView__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fi"

.global "@28@doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202724 001FF664  38 63 FF E4 */	addi r3, r3, -28
/* 80202728 001FF668  4B FF EB D4 */	b "doEntry__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020272C 001FF66C  38 63 FF E4 */	addi r3, r3, -28
/* 80202730 001FF670  4B FF EB 4C */	b "doAnimation__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
"@28@doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics":
/* 80202734 001FF674  38 63 FF E4 */	addi r3, r3, -28
/* 80202738 001FF678  4B FF EF 30 */	b "doDirectDraw__40ObjectMgr<Q34Game13PelletOtakara6Object>FR8Graphics"

.global "@28@doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff"
"@28@doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff":
/* 8020273C 001FF67C  38 63 FF E4 */	addi r3, r3, -28
/* 80202740 001FF680  4B FF F1 1C */	b "doSimulation__40ObjectMgr<Q34Game13PelletOtakara6Object>Ff"

.global "@28@doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202744 001FF684  38 63 FF E4 */	addi r3, r3, -28
/* 80202748 001FF688  4B FF F3 08 */	b "doViewCalc__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi"
"@28@doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi":
/* 8020274C 001FF68C  38 63 FF E4 */	addi r3, r3, -28
/* 80202750 001FF690  4B FF F4 E4 */	b "doSetView__40ObjectMgr<Q34Game13PelletOtakara6Object>Fi"

.global "@28@doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202754 001FF694  38 63 FF E4 */	addi r3, r3, -28
/* 80202758 001FF698  4B FF F6 D0 */	b "doEntry__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@28@doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"
"@28@doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020275C 001FF69C  38 63 FF E4 */	addi r3, r3, -28
/* 80202760 001FF6A0  4B FF F8 AC */	b "doAnimation__40ObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 80202764 001FF6A4  38 63 FF AC */	addi r3, r3, -84
/* 80202768 001FF6A8  4B FF FB 98 */	b "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
"@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv":
/* 8020276C 001FF6AC  38 63 FF AC */	addi r3, r3, -84
/* 80202770 001FF6B0  4B FF E9 9C */	b "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"

.global "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
"@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv":
/* 80202774 001FF6B4  38 63 FF AC */	addi r3, r3, -84
/* 80202778 001FF6B8  4B FF E9 68 */	b "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"

.global "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
"@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv":
/* 8020277C 001FF6BC  38 63 FF AC */	addi r3, r3, -84
/* 80202780 001FF6C0  4B FF FB AC */	b "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"

.global "@84@__dt__Q34Game13PelletOtakara3MgrFv"
"@84@__dt__Q34Game13PelletOtakara3MgrFv":
/* 80202784 001FF6C4  38 63 FF AC */	addi r3, r3, -84
/* 80202788 001FF6C8  4B FF E5 90 */	b __dt__Q34Game13PelletOtakara3MgrFv
