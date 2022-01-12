#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
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
    .global __vt__Q34Game10PelletItem3Mgr
    __vt__Q34Game10PelletItem3Mgr:
        .4byte 0
        .4byte 0
        .4byte
   "doAnimation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "doEntry__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "doSetView__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi" .4byte
   "doViewCalc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "doSimulation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Ff"
        .4byte
   "doDirectDraw__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte
   "resetMgr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   pausable__16GenericObjectMgrFv .4byte frozenable__16GenericObjectMgrFv .4byte
   getMatrixLoadType__16GenericObjectMgrFv .4byte
   "resetMgrAndResources__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "birth__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "kill__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte setupResources__Q34Game10PelletItem3MgrFv
        .4byte
   "birthFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game12PelletConfig"
        .4byte
   "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
        .4byte
   "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte
   "onCreateModel__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ28SysShape5Model"
        .4byte getMgrName__Q34Game10PelletItem3MgrFv
        .4byte getMgrID__Q34Game10PelletItem3MgrFv
        .4byte
   "setRevival__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte
   "setFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte
   "getFlag__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte createShape__Q24Game13BasePelletMgrFii
        .4byte
   "generatorBirth__Q34Game10PelletItem3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
        .4byte
   generatorWrite__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParm
        .4byte
   generatorRead__Q34Game10PelletItem3MgrFR6StreamPQ24Game13GenPelletParmUl
        .4byte generatorLocalVersion__Q34Game10PelletItem3MgrFv
        .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
        .4byte generatorNewPelletParm__Q34Game10PelletItem3MgrFv
        .4byte
   "getObjectPtr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
        .4byte
   "getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv" .4byte
   "getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte 0
        .4byte 0
        .4byte "@84@__dt__Q34Game10PelletItem3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__37Container<Q34Game10PelletItem6Object>FPv"
        .4byte
   "@84@getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
        .4byte
   "@84@getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "@84@getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "@84@get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv" .4byte
   "getAt__37Container<Q34Game10PelletItem6Object>Fi" .4byte
   "getTo__37Container<Q34Game10PelletItem6Object>Fv" .4byte
   "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv" .4byte
   __dt__Q34Game10PelletItem3MgrFv .global
   "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"
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
        .4byte
   "@28@doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
        .4byte "doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
        .4byte "doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"
        .4byte "doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
        .4byte "doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"
        .4byte
   "doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics" .global
   "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"
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
        .4byte
   "@28@doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
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
        .4byte
   "doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics" .4byte
   "birth__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "clearMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "onAlloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv" .global
   "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"
    "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>":
        .4byte 0
        .4byte 0
        .4byte
   "doAnimation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "doEntry__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "doSetView__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi" .4byte
   "doViewCalc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "doSimulation__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Ff"
        .4byte
   "doDirectDraw__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte
   "resetMgr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   pausable__16GenericObjectMgrFv .4byte frozenable__16GenericObjectMgrFv .4byte
   getMatrixLoadType__16GenericObjectMgrFv .4byte
   "resetMgrAndResources__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "birth__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "kill__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte 0
        .4byte
   "birthFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game12PelletConfig"
        .4byte
   "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
        .4byte
   "setComeAlive__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte
   "onCreateModel__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ28SysShape5Model"
        .4byte 0
        .4byte 0
        .4byte
   "setRevival__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte
   "setFromTeki__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte
   "getFlag__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPQ24Game6Pellet"
        .4byte createShape__Q24Game13BasePelletMgrFii
        .4byte
   "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
        .4byte
   generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm .4byte
   generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
        .4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
        .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
        .4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
        .4byte
   "getObjectPtr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
        .4byte
   "getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv" .4byte
   "getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte 0
        .4byte 0
        .4byte
   "@84@__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .4byte
   getChildCount__5CNodeFv .4byte
   "getObject__37Container<Q34Game10PelletItem6Object>FPv" .4byte
   "@84@getNext__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
        .4byte
   "@84@getStart__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "@84@getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
        .4byte
   "@84@get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv" .4byte
   "getAt__37Container<Q34Game10PelletItem6Object>Fi" .4byte
   "getTo__37Container<Q34Game10PelletItem6Object>Fv" .4byte
   "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv" .4byte
   "__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" .global
   "__vt__37Container<Q34Game10PelletItem6Object>"
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
        .4byte
   "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>" .4byte
   "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>" .4byte
   ignoreAtari__Q24Game8CreatureFPQ24Game8Creature .4byte
   getSuckPos__Q24Game8CreatureFv .4byte getGoalPos__Q24Game8CreatureFv .4byte
   isSuckReady__Q24Game8CreatureFv .4byte isSuckArriveWait__Q24Game8CreatureFv
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
    .global mgr__Q24Game10PelletItem
    mgr__Q24Game10PelletItem:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
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
*/

namespace Game {

/*
 * --INFO--
 * Address:	80202E14
 * Size:	000004
 */
void PelletItem::Object::do_onInit(Game::CreatureInitArg*) { }

/*
 * --INFO--
 * Address:	80202E18
 * Size:	00005C
 */
void PelletItem::Object::onBounce(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r2, lbl_80519D50@sda21
	lwz      r4, 0x35c(r31)
	lwz      r4, 0x40(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80202E60
	lwz      r3, 0x330(r31)
	li       r4, 0x3830
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80202E60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202E74
 * Size:	000054
 */
void PelletItem::Object::constructor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x90
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80202EA4
	mr       r4, r31
	bl       __ct__Q23PSM10PelletItemFPQ34Game10PelletItem6Object
	mr       r0, r3

lbl_80202EA4:
	stw      r0, 0x330(r31)
	mr       r4, r31
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202EC8
 * Size:	000074
 */
void PelletItem::Object::sound_otakaraEventStart(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x330(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xd
	beq      lbl_80202F14
	lis      r3, lbl_80481C50@ha
	lis      r5, lbl_80481C60@ha
	addi     r3, r3, lbl_80481C50@l
	li       r4, 0x66
	addi     r5, r5, lbl_80481C60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80202F14:
	lwz      r3, 0x330(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202F3C
 * Size:	000074
 */
void PelletItem::Object::sound_otakaraEventRestart(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x330(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xd
	beq      lbl_80202F88
	lis      r3, lbl_80481C50@ha
	lis      r5, lbl_80481C60@ha
	addi     r3, r3, lbl_80481C50@l
	li       r4, 0x6d
	addi     r5, r5, lbl_80481C60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80202F88:
	lwz      r3, 0x330(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202FB0
 * Size:	000074
 */
void PelletItem::Object::sound_otakaraEventStop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x330(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xd
	beq      lbl_80202FFC
	lis      r3, lbl_80481C50@ha
	lis      r5, lbl_80481C60@ha
	addi     r3, r3, lbl_80481C50@l
	li       r4, 0x74
	addi     r5, r5, lbl_80481C60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80202FFC:
	lwz      r3, 0x330(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203024
 * Size:	000074
 */
void PelletItem::Object::sound_otakaraEventFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x330(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xd
	beq      lbl_80203070
	lis      r3, lbl_80481C50@ha
	lis      r5, lbl_80481C60@ha
	addi     r3, r3, lbl_80481C50@l
	li       r4, 0x7b
	addi     r5, r5, lbl_80481C60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80203070:
	lwz      r3, 0x330(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203098
 * Size:	0000B0
 */
PelletItem::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_802030C0
	addi     r0, r30, 0xa0
	stw      r0, 4(r30)

lbl_802030C0:
	mr       r3, r30
	li       r4, 0
	li       r5, 4
	bl       __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind
	addi     r31, r30, 0x54
	mr       r3, r31
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addi     r0, r3, __vt__16GenericContainer@l
	lis      r3,
"__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@ha stw      r0,
0(r31) addi     r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l addi
r4, r3, "__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@l li r5,
0 stw      r0, 0(r31) addi     r0, r4, 0x98 addi     r3, r30, 0x70 stb      r5,
0x18(r31) stw      r4, 0(r30) stw      r0, 0x54(r30) bl
"__ct__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv" lis      r4,
__vt__Q34Game10PelletItem3Mgr@ha mr       r3, r30 addi     r4, r4,
__vt__Q34Game10PelletItem3Mgr@l stw      r4, 0(r30) addi     r0, r4, 0x98 stw
r0, 0x54(r30) lwz      r31, 0xc(r1) lwz      r30, 8(r1) lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80203148
 * Size:	00019C
 */
void __dt__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802032C8
	lis      r3,
"__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@ha addic.   r0,
r30, 0x70 addi     r3, r3,
"__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@l stw      r3,
0(r30) addi     r0, r3, 0x98 stw      r0, 0x54(r30) beq      lbl_802031E8 lis
r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha addic.   r0, r30,
0x70 addi     r3, r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l stw
r3, 0x70(r30) addi     r0, r3, 0x2c stw      r0, 0x8c(r30) beq      lbl_802031E8
	lis      r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
	addic.   r0, r30, 0x70
	addi     r3, r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
	stw      r3, 0x70(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x8c(r30)
	beq      lbl_802031E8
	lis      r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addic.   r0, r30, 0x70
	addi     r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0x70(r30)
	beq      lbl_802031E8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x70
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x70(r30)
	bl       __dt__5CNodeFv

lbl_802031E8:
	addic.   r0, r30, 0x54
	beq      lbl_8020321C
	lis      r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addic.   r0, r30, 0x54
	addi     r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0x54(r30)
	beq      lbl_8020321C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x54
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x54(r30)
	bl       __dt__5CNodeFv

lbl_8020321C:
	cmplwi   r30, 0
	beq      lbl_802032B8
	lis      r3, __vt__Q24Game13BasePelletMgr@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q24Game13BasePelletMgr@l
	stw      r0, 0(r30)
	beq      lbl_802032B8
	lis      r3, __vt__11CollPartMgr@ha
	addic.   r0, r30, 0x18
	addi     r3, r3, __vt__11CollPartMgr@l
	stw      r3, 0x18(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x34(r30)
	beq      lbl_802032B8
	lis      r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
	addic.   r0, r30, 0x18
	addi     r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
	stw      r3, 0x18(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x34(r30)
	beq      lbl_802032B8
	lis      r3, "__vt__20ObjectMgr<8CollPart>"@ha
	addic.   r0, r30, 0x18
	addi     r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
	stw      r3, 0x18(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x34(r30)
	beq      lbl_802032B8
	lis      r3, "__vt__20Container<8CollPart>"@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, "__vt__20Container<8CollPart>"@l
	stw      r0, 0x18(r30)
	beq      lbl_802032B8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_802032B8:
	extsh.   r0, r31
	ble      lbl_802032C8
	mr       r3, r30
	bl       __dl__FPv

lbl_802032C8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802032E4
 * Size:	0000A0
 */
void MonoObjectMgr<Game::PelletItem::Object>::~MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80203368
	lis      r4, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha
	addi     r4, r4, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80203358
	lis      r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
	addi     r4, r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80203358
	lis      r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addi     r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0(r30)
	beq      lbl_80203358
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80203358:
	extsh.   r0, r31
	ble      lbl_80203368
	mr       r3, r30
	bl       __dl__FPv

lbl_80203368:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203384
 * Size:	000070
 */
void Container<Game::PelletItem::Object>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802033D8
	lis      r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addi     r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0(r30)
	beq      lbl_802033C8
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802033C8:
	extsh.   r0, r31
	ble      lbl_802033D8
	mr       r3, r30
	bl       __dl__FPv

lbl_802033D8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802033F4
 * Size:	000074
 */
void PelletItem::Mgr::setupResources(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_80481C6C@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r4, r4, lbl_80481C6C@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	li       r4, 0xb
	bl       "alloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fi"
	lis      r4, lbl_80481C78@ha
	mr       r3, r31
	addi     r4, r4, lbl_80481C78@l
	bl       load_texArc__Q24Game13BasePelletMgrFPc
	addi     r3, r31, 0x18
	li       r4, 0x80
	bl       "alloc__24MonoObjectMgr<8CollPart>Fi"
	lis      r4, lbl_80481C6C@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_80481C6C@l
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203468
 * Size:	000024
 */
void PelletItem::Mgr::generatorNewPelletParm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 4
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020348C
 * Size:	000148
 */
void generatorBirth__Q34Game10PelletItem3MgrFR10Vector3f R10Vector3f PQ24Game13GenPelletParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r31, r6
	  mr        r29, r4
	  lwz       r3, -0x6AD8(r13)
	  mr        r30, r5
	  lwz       r4, 0x0(r6)
	  bl        -0x97738
	  lis       r4, 0x804B
	  li        r8, 0
	  subi      r0, r4, 0x5D0C
	  li        r5, -0x1
	  lis       r4, 0x804B
	  stw       r0, 0x38(r1)
	  subi      r0, r4, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r0, 0x38(r1)
	  li        r0, 0x4
	  addi      r4, r1, 0x38
	  stb       r8, 0x54(r1)
	  sth       r8, 0x4C(r1)
	  stb       r7, 0x4E(r1)
	  stw       r8, 0x50(r1)
	  stb       r8, 0x4F(r1)
	  stb       r6, 0x3C(r1)
	  stb       r8, 0x55(r1)
	  stw       r5, 0x5C(r1)
	  stw       r5, 0x58(r1)
	  stb       r8, 0x56(r1)
	  stb       r8, 0x57(r1)
	  lwz       r5, 0x40(r3)
	  lwz       r3, -0x6CE0(r13)
	  stw       r5, 0x40(r1)
	  stb       r0, 0x4E(r1)
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x48(r1)
	  stw       r8, 0x50(r1)
	  bl        -0x9607C
	  mr.       r31, r3
	  beq-      .loc_0x120
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lwz       r12, 0x4(r3)
	  mr        r4, r29
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  mr        r3, r31
	  bl        -0x9CB9C
	  lfs       f0, -0x460C(r2)
	  fmadds    f0, f0, f1, f31
	  stfs      f0, 0x4(r29)

	.loc_0xF4:
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xC83E4
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r1, 0x8
	  bl        0x2252EC
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x9B0DC

	.loc_0x120:
	  mr        r3, r31
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802035D4
 * Size:	000030
 */
void PelletItem::Mgr::generatorWrite(Stream&, Game::GenPelletParm*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r0, 0(r5)
	clrlwi   r0, r0, 0x10
	extsh    r4, r0
	bl       writeShort__6StreamFs
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203604
 * Size:	000038
 */
void PelletItem::Mgr::generatorRead(Stream&, Game::GenPelletParm*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  bl        0x211148
	  rlwinm    r0,r3,0,16,31
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020363C
 * Size:	0001B4
 */
PelletItem::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802037D4
	lis      r3, __vt__Q34Game10PelletItem3Mgr@ha
	addi     r3, r3, __vt__Q34Game10PelletItem3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x98
	stw      r0, 0x54(r30)
	beq      lbl_802037C4
	lis      r3,
"__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@ha addic.   r0,
r30, 0x70 addi     r3, r3,
"__vt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>"@l stw      r3,
0(r30) addi     r0, r3, 0x98 stw      r0, 0x54(r30) beq      lbl_802036F4 lis
r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha addic.   r0, r30,
0x70 addi     r3, r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l stw
r3, 0x70(r30) addi     r0, r3, 0x2c stw      r0, 0x8c(r30) beq      lbl_802036F4
	lis      r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
	addic.   r0, r30, 0x70
	addi     r3, r3, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
	stw      r3, 0x70(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x8c(r30)
	beq      lbl_802036F4
	lis      r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addic.   r0, r30, 0x70
	addi     r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0x70(r30)
	beq      lbl_802036F4
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x70
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x70(r30)
	bl       __dt__5CNodeFv

lbl_802036F4:
	addic.   r0, r30, 0x54
	beq      lbl_80203728
	lis      r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addic.   r0, r30, 0x54
	addi     r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0x54(r30)
	beq      lbl_80203728
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x54
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x54(r30)
	bl       __dt__5CNodeFv

lbl_80203728:
	cmplwi   r30, 0
	beq      lbl_802037C4
	lis      r3, __vt__Q24Game13BasePelletMgr@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q24Game13BasePelletMgr@l
	stw      r0, 0(r30)
	beq      lbl_802037C4
	lis      r3, __vt__11CollPartMgr@ha
	addic.   r0, r30, 0x18
	addi     r3, r3, __vt__11CollPartMgr@l
	stw      r3, 0x18(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x34(r30)
	beq      lbl_802037C4
	lis      r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
	addic.   r0, r30, 0x18
	addi     r3, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
	stw      r3, 0x18(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x34(r30)
	beq      lbl_802037C4
	lis      r3, "__vt__20ObjectMgr<8CollPart>"@ha
	addic.   r0, r30, 0x18
	addi     r3, r3, "__vt__20ObjectMgr<8CollPart>"@l
	stw      r3, 0x18(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x34(r30)
	beq      lbl_802037C4
	lis      r3, "__vt__20Container<8CollPart>"@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, "__vt__20Container<8CollPart>"@l
	stw      r0, 0x18(r30)
	beq      lbl_802037C4
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_802037C4:
	extsh.   r0, r31
	ble      lbl_802037D4
	mr       r3, r30
	bl       __dl__FPv

lbl_802037D4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802037F0
 * Size:	000008
 */
void PelletItem::Mgr::getMgrName(void)
{
	/*
	addi     r3, r2, lbl_80519D58@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	802037F8
 * Size:	000008
 */
u32 PelletItem::Mgr::getMgrID(void) { return 0x4; }

/*
 * --INFO--
 * Address:	80203800
 * Size:	00000C
 */
void PelletItem::Mgr::generatorLocalVersion(void)
{
	/*
	lis      r3, 0x30303030@ha
	addi     r3, r3, 0x30303030@l
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020380C
 * Size:	000088
 */
void ObjectMgr<Game::PelletItem::Object>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80203878
	lis      r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
	addi     r4, r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80203868
	lis      r4, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addi     r0, r4, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	stw      r0, 0(r30)
	beq      lbl_80203868
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80203868:
	extsh.   r0, r31
	ble      lbl_80203878
	mr       r3, r30
	bl       __dl__FPv

lbl_80203878:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80203894
 * Size:	000008
 */
u32 PelletItem::Object::getKind(void) { return 0x4; }

/*
 * --INFO--
 * Address:	8020389C
 * Size:	000004
 */
void onCreateModel__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ28SysShape5Model(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	802038A0
 * Size:	00002C
 */
void birth__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802038CC
 * Size:	00002C
 */
void doAnimation__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802038F8
 * Size:	00002C
 */
void doEntry__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203924
 * Size:	00002C
 */
void doSetView__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203950
 * Size:	00002C
 */
void doViewCalc__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020397C
 * Size:	00002C
 */
void doSimulation__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Ff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802039A8
 * Size:	00002C
 */
void doDirectDraw__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FR8Graphics(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802039D4
 * Size:	000024
 */
void kill__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  bl        0xCC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802039F8
 * Size:	00002C
 */
void getNext__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203A24
 * Size:	00002C
 */
void getStart__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203A50
 * Size:	000060
 */
void MonoObjectMgr<Game::PelletItem::Object>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	cmpwi    r3, -1
	beq      lbl_80203A98
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x458
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_80203A9C

lbl_80203A98:
	li       r3, 0

lbl_80203A9C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203AB0
 * Size:	000054
 */
void MonoObjectMgr<Game::PelletItem::Object>::kill(Game::PelletItem::Object*)
{
	/*
	lwz      r0, 0x24(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_80203AC8:
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	cmplw    r0, r4
	bne      lbl_80203AF4
	lwz      r4, 0x2c(r3)
	li       r0, 1
	stbx     r0, r4, r6
	lwz      r4, 0x20(r3)
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	blr

lbl_80203AF4:
	addi     r5, r5, 0x458
	addi     r6, r6, 1
	bdnz     lbl_80203AC8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203B04
 * Size:	000040
 */
void MonoObjectMgr<Game::PelletItem::Object>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_80203B3C

lbl_80203B1C:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_80203B34
	mr       r3, r6
	blr

lbl_80203B34:
	addi     r6, r6, 1
	bdnz     lbl_80203B1C

lbl_80203B3C:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203B44
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletItem::Object>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203B74
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203B7C
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletItem::Object>::getAt(int)
{
	/*
	mulli    r0, r4, 0x458
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203B8C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203B94
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletItem::Object>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80203BEC

lbl_80203BBC:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80203BE4
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80203BE4:
	addi     r31, r31, 0x458
	addi     r30, r30, 1

lbl_80203BEC:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80203BBC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203C14
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletItem::Object>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80203C6C

lbl_80203C3C:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80203C64
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_80203C64:
	addi     r31, r31, 0x458
	addi     r30, r30, 1

lbl_80203C6C:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80203C3C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203C94
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletItem::Object>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80203CF8

lbl_80203CC4:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80203CF0
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_80203CF0:
	addi     r31, r31, 0x458
	addi     r30, r30, 1

lbl_80203CF8:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_80203CC4
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203D24
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletItem::Object>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80203D7C

lbl_80203D4C:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80203D74
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_80203D74:
	addi     r31, r31, 0x458
	addi     r30, r30, 1

lbl_80203D7C:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80203D4C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203DA4
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletItem::Object>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_80203E08

lbl_80203DD4:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80203E00
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_80203E00:
	addi     r31, r31, 0x458
	addi     r30, r30, 1

lbl_80203E08:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80203DD4
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203E34
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletItem::Object>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80203E98

lbl_80203E64:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80203E90
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_80203E90:
	addi     r31, r31, 0x458
	addi     r30, r30, 1

lbl_80203E98:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_80203E64
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203EC4
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletItem::Object>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_80203EE4

lbl_80203ED8:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_80203EE4:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_80203ED8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203EF4
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletItem::Object>::onAlloc() { }

/*
 * --INFO--
 * Address:	80203EF8
 * Size:	00003C
 */
void MonoObjectMgr<Game::PelletItem::Object>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80203F2C

lbl_80203F0C:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_80203F24
	mr       r3, r5
	blr

lbl_80203F24:
	addi     r5, r5, 1
	bdnz     lbl_80203F0C

lbl_80203F2C:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203F34
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletItem::Object>::get(void*)
{
	/*
	mulli    r0, r4, 0x458
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203F44
 * Size:	00002C
 */
void Container<Game::PelletItem::Object>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80203F70
 * Size:	000008
 */
u32 Container<Game::PelletItem::Object>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80203F78
 * Size:	000008
 */
u32 Container<Game::PelletItem::Object>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80203F80
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletItem::Object>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80203FD0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204140

lbl_80203FD0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020403C

lbl_80203FE8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80204140
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020403C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80203FE8
	b        lbl_80204140

lbl_8020405C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_802040B0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204140

lbl_802040B0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204124

lbl_802040D0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80204140
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80204124:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802040D0

lbl_80204140:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020405C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204174
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletItem::Object>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_802041C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204334

lbl_802041C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204230

lbl_802041DC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80204334
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80204230:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802041DC
	b        lbl_80204334

lbl_80204250:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_802042A4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204334

lbl_802042A4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204318

lbl_802042C4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80204334
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80204318:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802042C4

lbl_80204334:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80204250
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204368
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletItem::Object>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_802043B0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020451C

lbl_802043B0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020441C

lbl_802043C8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020451C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020441C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802043C8
	b        lbl_8020451C

lbl_8020443C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020448C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020451C

lbl_8020448C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204500

lbl_802044AC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020451C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80204500:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802044AC

lbl_8020451C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020443C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020454C
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletItem::Object>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020459C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020470C

lbl_8020459C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204608

lbl_802045B4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020470C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80204608:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802045B4
	b        lbl_8020470C

lbl_80204628:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020467C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020470C

lbl_8020467C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802046F0

lbl_8020469C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020470C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802046F0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020469C

lbl_8020470C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80204628
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204740
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletItem::Object>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80204788
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802048F4

lbl_80204788:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802047F4

lbl_802047A0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802048F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802047F4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802047A0
	b        lbl_802048F4

lbl_80204814:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80204864
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802048F4

lbl_80204864:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802048D8

lbl_80204884:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802048F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802048D8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80204884

lbl_802048F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80204814
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204924
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletItem::Object>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020496C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204AD8

lbl_8020496C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802049D8

lbl_80204984:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80204AD8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802049D8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80204984
	b        lbl_80204AD8

lbl_802049F8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80204A48
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204AD8

lbl_80204A48:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80204ABC

lbl_80204A68:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80204AD8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80204ABC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80204A68

lbl_80204AD8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802049F8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204B08
 * Size:	00009C
 */
void MonoObjectMgr<Game::PelletItem::Object>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__37Container<Q34Game10PelletItem6Object>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__37Container<Q34Game10PelletItem6Object>"@l
	lis      r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@ha
	lis      r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__37ObjectMgr<Q34Game10PelletItem6Object>"@l
	addi     r5, r3, "__vt__41MonoObjectMgr<Q34Game10PelletItem6Object>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204BA4
 * Size:	000020
 */
void getFlag__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beq-      .loc_0x18
	  lwz       r3, 0x9C(r3)
	  lwz       r0, 0x440(r4)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x18:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204BC4
 * Size:	00001C
 */
void setFromTeki__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0x65
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204BE0
 * Size:	00001C
 */
void setRevival__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0x64
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204BFC
 * Size:	00001C
 */
void setComeAlive__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204C18
 * Size:	000010
 */
void setComeAlive__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fi(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x9C(r3)
	  li        r0, 0
	  stbx      r0, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204C28
 * Size:	00002C
 */
void getEnd__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204C54
 * Size:	00002C
 */
void get__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x70(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204C80
 * Size:	00002C
 */
void getObjectPtr__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204CAC
 * Size:	000090
 */
void birthFromTeki__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPQ24Game12PelletConfig(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x28:
	  lwz       r3, 0x9C(r29)
	  lbzx      r0, r3, r31
	  cmplwi    r0, 0x65
	  bne-      .loc_0x60
	  addi      r3, r29, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x35C(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x60
	  b         .loc_0x74

	.loc_0x60:
	  addi      r31, r31, 0x1

	.loc_0x64:
	  lwz       r0, 0x94(r29)
	  cmpw      r31, r0
	  blt+      .loc_0x28
	  li        r3, 0

	.loc_0x74:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80204D3C
 * Size:	000080
 */
void alloc__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x70
	bl       "alloc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
	mr       r3, r30
	bl "onAlloc__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv" li
r31, 0 b        lbl_80204D98

lbl_80204D6C:
	addi     r3, r30, 0x70
	mr       r4, r31
	lwz      r12, 0x70(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_80204D98:
	lwz      r0, 0x94(r30)
	cmpw     r31, r0
	blt      lbl_80204D6C
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204DBC
 * Size:	000064
 */
void onAlloc__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_80204DFC

lbl_80204DDC:
	addi     r3, r30, 0x70
	mr       r4, r31
	lwz      r12, 0x70(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x440(r3)
	addi     r31, r31, 1

lbl_80204DFC:
	lwz      r0, 0x94(r30)
	cmpw     r31, r0
	blt      lbl_80204DDC
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80204E20
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletItem::Object>::alloc(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r31
	mulli    r3, r29, 0x458
	stw      r28, 0x10(r1)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game10PelletItem6ObjectFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q34Game10PelletItem6ObjectFv@l
	li       r5, 0
	li       r6, 0x458
	bl       __construct_new_array
	stw      r3, 0x28(r30)
	li       r0, 0
	mr       r3, r29
	stw      r31, 0x24(r30)
	stw      r0, 0x20(r30)
	bl       __nwa__FUl
	cmpwi    r31, 0
	stw      r3, 0x2c(r30)
	li       r11, 0
	ble      lbl_80204F40
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_80204F1C
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80204F1C

lbl_80204EB4:
	lwz      r3, 0x2c(r30)
	li       r10, 1
	addi     r8, r11, 1
	addi     r7, r11, 2
	stbx     r10, r3, r11
	addi     r6, r11, 3
	addi     r5, r11, 4
	addi     r4, r11, 5
	lwz      r9, 0x2c(r30)
	addi     r3, r11, 6
	addi     r0, r11, 7
	addi     r11, r11, 8
	stbx     r10, r9, r8
	lwz      r8, 0x2c(r30)
	stbx     r10, r8, r7
	lwz      r7, 0x2c(r30)
	stbx     r10, r7, r6
	lwz      r6, 0x2c(r30)
	stbx     r10, r6, r5
	lwz      r5, 0x2c(r30)
	stbx     r10, r5, r4
	lwz      r4, 0x2c(r30)
	stbx     r10, r4, r3
	lwz      r3, 0x2c(r30)
	stbx     r10, r3, r0
	bdnz     lbl_80204EB4

lbl_80204F1C:
	subf     r0, r11, r31
	li       r4, 1
	mtctr    r0
	cmpw     r11, r31
	bge      lbl_80204F40

lbl_80204F30:
	lwz      r3, 0x2c(r30)
	stbx     r4, r3, r11
	addi     r11, r11, 1
	bdnz     lbl_80204F30

lbl_80204F40:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	li       r29, 0
	b        lbl_80204F80

lbl_80204F60:
	lwz      r0, 0x28(r30)
	add      r3, r0, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 0x458
	addi     r28, r28, 1

lbl_80204F80:
	cmpw     r28, r31
	blt      lbl_80204F60
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80204FA8
 * Size:	00004C
 */
PelletItem::Object::Object(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game6PelletFv
	lis      r4, __vt__Q34Game10PelletItem6Object@ha
	mr       r3, r31
	addi     r5, r4, __vt__Q34Game10PelletItem6Object@l
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b4
	addi     r0, r5, 0x1c0
	stw      r4, 0x314(r31)
	stw      r0, 0x318(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80204FF4
 * Size:	000008
 */
void @84 @__dt__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	addi     r3, r3, -84
	b        "__dt__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80204FFC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80205004
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b "doDirectDraw__41MonoObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8020500C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__41MonoObjectMgr<Q34Game10PelletItem6Object>Ff"
	*/
}

/*
 * --INFO--
 * Address:	80205014
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020501C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__41MonoObjectMgr<Q34Game10PelletItem6Object>Fi"
	*/
}

/*
 * --INFO--
 * Address:	80205024
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020502C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80205034
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__37ObjectMgr<Q34Game10PelletItem6Object>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8020503C
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__37ObjectMgr<Q34Game10PelletItem6Object>Ff"
	*/
}

/*
 * --INFO--
 * Address:	80205044
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020504C
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__37ObjectMgr<Q34Game10PelletItem6Object>Fi"
	*/
}

/*
 * --INFO--
 * Address:	80205054
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020505C
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__37ObjectMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80205064
 * Size:	000008
 */
void @84 @getEnd__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	addi     r3, r3, -84
	b        "getEnd__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020506C
 * Size:	000008
 */
void @84 @getStart__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x164C
	*/
}

/*
 * --INFO--
 * Address:	80205074
 * Size:	000008
 */
void @84 @getNext__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1680
	*/
}

/*
 * --INFO--
 * Address:	8020507C
 * Size:	000008
 */
void @84 @get__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
	/*
	addi     r3, r3, -84
	b        "get__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>FPv"
	*/
}

/*
 * --INFO--
 * Address:	80205084
 * Size:	000008
 */
@84 @Game::PelletItem::Mgr::~Mgr(void)
{
	/*
	addi     r3, r3, -84
	b        __dt__Q34Game10PelletItem3MgrFv
	*/
}
