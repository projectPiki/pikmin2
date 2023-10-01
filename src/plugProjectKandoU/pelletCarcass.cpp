#include "Game/pelletMgr.h"
#include "Game/Entities/PelletCarcass.h"
#include "Iterator.h"

#define MAX_CARCASS_COUNT     64
#define MAX_CARCASS_COLLPARTS 128

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game13PelletCarcass3Mgr
    __vt__Q34Game13PelletCarcass3Mgr:
        .4byte 0
        .4byte 0
        .4byte
   "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte
   "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Ff"
        .4byte
   "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte
   "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte
   "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte setupResources__Q34Game13PelletCarcass3MgrFv
        .4byte
   "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game12PelletConfig"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ28SysShape5Model"
        .4byte getMgrName__Q34Game13PelletCarcass3MgrFv
        .4byte getMgrID__Q34Game13PelletCarcass3MgrFv
        .4byte
   "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte createShape__Q34Game13PelletCarcass3MgrFii
        .4byte
   "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
        .4byte
   generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm .4byte
   generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
        .4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
        .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
        .4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
        .4byte
   "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   0 .4byte 0 .4byte "@84@__dt__Q34Game13PelletCarcass3MgrFv" .4byte
   getChildCount__5CNodeFv .4byte
   "getObject__40Container<Q34Game13PelletCarcass6Object>FPv" .4byte
   "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte "getAt__40Container<Q34Game13PelletCarcass6Object>Fi"
        .4byte "getTo__40Container<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv" .4byte
   __dt__Q34Game13PelletCarcass3MgrFv .global
   "__vt__40ObjectMgr<Q34Game13PelletCarcass6Object>"
    "__vt__40ObjectMgr<Q34Game13PelletCarcass6Object>":
        .4byte 0
        .4byte 0
        .4byte "__dt__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__40Container<Q34Game13PelletCarcass6Object>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__40Container<Q34Game13PelletCarcass6Object>Fi"
        .4byte "getTo__40Container<Q34Game13PelletCarcass6Object>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "@28@doEntry__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "@28@doSetView__40ObjectMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte "@28@doViewCalc__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "@28@doSimulation__40ObjectMgr<Q34Game13PelletCarcass6Object>Ff"
        .4byte
   "@28@doDirectDraw__40ObjectMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "doEntry__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "doSetView__40ObjectMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte "doViewCalc__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "doSimulation__40ObjectMgr<Q34Game13PelletCarcass6Object>Ff"
        .4byte
   "doDirectDraw__40ObjectMgr<Q34Game13PelletCarcass6Object>FR8Graphics" .global
   "__vt__44MonoObjectMgr<Q34Game13PelletCarcass6Object>"
    "__vt__44MonoObjectMgr<Q34Game13PelletCarcass6Object>":
        .4byte 0
        .4byte 0
        .4byte "__dt__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__40Container<Q34Game13PelletCarcass6Object>FPv"
        .4byte "getNext__44MonoObjectMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte "getStart__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "getEnd__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "get__44MonoObjectMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte "getAt__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte "getTo__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte 0
        .4byte 0
        .4byte
   "@28@doAnimation__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   "@28@doEntry__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   "@28@doSetView__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fi" .4byte
   "@28@doViewCalc__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   "@28@doSimulation__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Ff" .4byte
   "@28@doDirectDraw__44MonoObjectMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "doEntry__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "doSetView__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte "doViewCalc__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "doSimulation__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Ff"
        .4byte
   "doDirectDraw__44MonoObjectMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
        .4byte "birth__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "resetMgr__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "clearMgr__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte "onAlloc__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
    .global "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>"
    "__vt__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>":
        .4byte 0
        .4byte 0
        .4byte
   "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte
   "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Ff"
        .4byte
   "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte
   "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte
   "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte 0
        .4byte
   "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game12PelletConfig"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ28SysShape5Model"
        .4byte 0
        .4byte 0
        .4byte
   "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
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
   "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   0 .4byte 0 .4byte
   "@84@__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__40Container<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte "getAt__40Container<Q34Game13PelletCarcass6Object>Fi"
        .4byte "getTo__40Container<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv" .4byte
   "__dt__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .global
   "__vt__40Container<Q34Game13PelletCarcass6Object>"
    "__vt__40Container<Q34Game13PelletCarcass6Object>":
        .4byte 0
        .4byte 0
        .4byte "__dt__40Container<Q34Game13PelletCarcass6Object>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__40Container<Q34Game13PelletCarcass6Object>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__40Container<Q34Game13PelletCarcass6Object>Fi"
        .4byte "getTo__40Container<Q34Game13PelletCarcass6Object>Fv"
    .global "__vt__39Iterator<Q34Game13PelletCarcass6Object>"
    "__vt__39Iterator<Q34Game13PelletCarcass6Object>":
        .4byte 0
        .4byte 0
        .4byte "first__39Iterator<Q34Game13PelletCarcass6Object>Fv"
        .4byte "next__39Iterator<Q34Game13PelletCarcass6Object>Fv"
        .4byte "isDone__39Iterator<Q34Game13PelletCarcass6Object>Fv"
        .4byte "__ml__39Iterator<Q34Game13PelletCarcass6Object>Fv"
    .global __vt__Q34Game13PelletCarcass6Object
    __vt__Q34Game13PelletCarcass6Object:
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
        .4byte do_onInit__Q24Game6PelletFPQ24Game15CreatureInitArg
        .4byte onCreateShape__Q24Game6PelletFv
        .4byte theEntry__Q24Game6PelletFv
        .4byte onBounce__Q24Game6PelletFv
        .4byte shadowOn__Q24Game6PelletFv
        .4byte shadowOff__Q24Game6PelletFv
        .4byte isPickable__Q24Game6PelletFv
        .4byte getBedamaColor__Q24Game6PelletFv
        .4byte do_update__Q24Game6PelletFv
        .4byte onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
        .4byte getKind__Q34Game13PelletCarcass6ObjectFv
        .4byte changeMaterial__Q24Game6PelletFv
        .4byte "createKiraEffect__Q24Game6PelletFR10Vector3<f>"
        .4byte getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
        .4byte isCarried__Q24Game6PelletFv
        .4byte isPicked__Q24Game6PelletFv
        .4byte sound_otakaraEventStart__Q24Game6PelletFv
        .4byte sound_otakaraEventRestart__Q24Game6PelletFv
        .4byte sound_otakaraEventStop__Q24Game6PelletFv
        .4byte sound_otakaraEventFinish__Q24Game6PelletFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global mgr__Q24Game13PelletCarcass
    mgr__Q24Game13PelletCarcass:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519CF8
    lbl_80519CF8:
        .4byte 0x43617263
        .4byte 0x61737300
    .global lbl_80519D00
    lbl_80519D00:
        .4byte 0x63617263
        .4byte 0x61737300
*/

namespace Game {

/*
 * --INFO--
 * Address:	801FB8CC
 * Size:	0000B0
 */
PelletCarcass::Mgr::Mgr()
    : FixedSizePelletMgr<Game::PelletCarcass::Object>(PelletList::CARCASS)
{
}

/*
 * --INFO--
 * Address:	801FB97C
 * Size:	00019C
 */
// FixedSizePelletMgr<Game::PelletCarcass::Object>::~FixedSizePelletMgr() { }

/*
 * --INFO--
 * Address:	801FBB18
 * Size:	0000A0
 */
// MonoObjectMgr<Game::PelletCarcass::Object>::~MonoObjectMgr()
//{
//}

/*
 * --INFO--
 * Address:	801FBBB8
 * Size:	000070
 */
// Container<Game::PelletCarcass::Object>::~Container()
//{
//}

/*
 * --INFO--
 * Address:	801FBC28
 * Size:	000064
 */
void PelletCarcass::Mgr::setupResources()
{
	sys->heapStatusStart("Carcass", nullptr);
	alloc(MAX_CARCASS_COUNT);
	load();
	mCollPartMgr.alloc(MAX_CARCASS_COLLPARTS);
	sys->heapStatusEnd("Carcass");
}

/*
 * --INFO--
 * Address:	801FBC8C
 * Size:	0001B4
 */
PelletCarcass::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	801FBE40
 * Size:	000008
 */
SysShape::Model* PelletCarcass::Mgr::createShape(int, int) { return nullptr; }

/*
 * --INFO--
 * Address:	801FBE48
 * Size:	000008
 */
char* PelletCarcass::Mgr::getMgrName() { return "carcass"; }

/*
 * --INFO--
 * Address:	801FBE50
 * Size:	000008
 */
u8 PelletCarcass::Mgr::getMgrID() { return 0x1; }

/*
 * --INFO--
 * Address:	801FBE58
 * Size:	000088
 */
// ObjectMgr<Game::PelletCarcass::Object>::~ObjectMgr()
//{
//}

/*
 * --INFO--
 * Address:	801FBEE0
 * Size:	00009C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::resetMgrAndResources()
// {
// 	resetMgr();
// 	for (int i = 0; i < mEntries; i++) {
// 		mModelData[i] = nullptr;
// 		mAnimMgr[i]   = nullptr;
// 		mCollParts[i] = nullptr;
// 		_4C[i]        = false;
// 	}

// 	if (mModelMgr) {
// 		mModelMgr = nullptr;
// 	}
// }

/*
 * --INFO--
 * Address:	801FBF7C
 * Size:	000004
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::onCreateModel(SysShape::Model*) { }

/*
 * --INFO--
 * Address:	801FBF80
 * Size:	00002C
 */
// Pellet* FixedSizePelletMgr<Game::PelletCarcass::Object>::birth() { return mMonoObjectMgr.birth(); }

/*
 * --INFO--
 * Address:	801FBFAC
 * Size:	00002C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::doAnimation() { mMonoObjectMgr.doAnimation(); }

/*
 * --INFO--
 * Address:	801FBFD8
 * Size:	00002C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::doEntry() { mMonoObjectMgr.doEntry(); }

/*
 * --INFO--
 * Address:	801FC004
 * Size:	00002C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::doSetView(int id) { mMonoObjectMgr.doSetView(id); }

/*
 * --INFO--
 * Address:	801FC030
 * Size:	00002C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::doViewCalc() { mMonoObjectMgr.doViewCalc(); }

/*
 * --INFO--
 * Address:	801FC05C
 * Size:	00002C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::doSimulation(f32 rate) { mMonoObjectMgr.doSimulation(rate); }

/*
 * --INFO--
 * Address:	801FC088
 * Size:	00002C
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::doDirectDraw(Graphics& gfx) { mMonoObjectMgr.doDirectDraw(gfx); }

/*
 * --INFO--
 * Address:	801FC0B4
 * Size:	000024
 */
// void FixedSizePelletMgr<Game::PelletCarcass::Object>::kill(Pellet* pelt) {
// mMonoObjectMgr.kill(static_cast<PelletCarcass::Object*>(pelt)); }

/*
 * --INFO--
 * Address:	801FC0D8
 * Size:	00002C
 */
// void* FixedSizePelletMgr<Game::PelletCarcass::Object>::getNext(void* data) { return mMonoObjectMgr.getNext(data); }

/*
 * --INFO--
 * Address:	801FC104
 * Size:	00002C
 */
// void* FixedSizePelletMgr<Game::PelletCarcass::Object>::getStart() { return mMonoObjectMgr.getStart(); }

/*
 * --INFO--
 * Address:	801FC130
 * Size:	000060
 */
// PelletCarcass::Object* MonoObjectMgr<Game::PelletCarcass::Object>::birth()
//{
//}

/*
 * --INFO--
 * Address:	801FC190
 * Size:	000054
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::kill(PelletCarcass::Object*)
//{
//}

/*
 * --INFO--
 * Address:	801FC1E4
 * Size:	000040
 */
// void* MonoObjectMgr<Game::PelletCarcass::Object>::getNext(void* id)
// {
// 	int ret = mMax;
// 	for (int i = (int)id + 1; i < ret; i++) {
// 		if (!mOpenIds[i]) {
// 			return (void*)i;
// 		}
// 	}
// 	return (void*)ret;
// 	// is the data type really void* ?
// }

/*
 * --INFO--
 * Address:	801FC224
 * Size:	000030
 */
void* MonoObjectMgr<Game::PelletCarcass::Object>::getStart() { return getNext((void*)-1); }

/*
 * --INFO--
 * Address:	801FC254
 * Size:	000008
 */
void* MonoObjectMgr<Game::PelletCarcass::Object>::getEnd() { return (void*)mMax; }

/*
 * --INFO--
 * Address:	801FC25C
 * Size:	000010
 */
PelletCarcass::Object* MonoObjectMgr<Game::PelletCarcass::Object>::getAt(int id) { return &mArray[id]; }

/*
 * --INFO--
 * Address:	801FC26C
 * Size:	000008
 */
int MonoObjectMgr<Game::PelletCarcass::Object>::getTo() { return mMax; }

/*
 * --INFO--
 * Address:	801FC274
 * Size:	000080
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::doAnimation()
//{
//}

/*
 * --INFO--
 * Address:	801FC2F4
 * Size:	000080
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::doEntry()
//{
//}

/*
 * --INFO--
 * Address:	801FC374
 * Size:	000090
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::doSetView(int)
//{
//}

/*
 * --INFO--
 * Address:	801FC404
 * Size:	000080
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::doViewCalc()
//{
//}

/*
 * --INFO--
 * Address:	801FC484
 * Size:	000090
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::doSimulation(float)
//{
//}

/*
 * --INFO--
 * Address:	801FC514
 * Size:	000090
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::doDirectDraw(Graphics&)
//{
//}

/*
 * --INFO--
 * Address:	801FC5A4
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::clearMgr()
{
	mActiveCount = 0;
	for (int i = 0; i < mMax; i++) {
		mOpenIds[i] = true;
	}
}

/*
 * --INFO--
 * Address:	801FC5D4
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::onAlloc() { }

/*
 * --INFO--
 * Address:	801FC5D8
 * Size:	00003C
 */
// int MonoObjectMgr<Game::PelletCarcass::Object>::getEmptyIndex()
//{
//}

/*
 * --INFO--
 * Address:	801FC614
 * Size:	000010
 */
PelletCarcass::Object* MonoObjectMgr<Game::PelletCarcass::Object>::get(void* id) { return &mArray[(int)id]; }

/*
 * --INFO--
 * Address:	801FC624
 * Size:	00002C
 */
void* Container<Game::PelletCarcass::Object>::getObject(void* data) { return get(data); }

/*
 * --INFO--
 * Address:	801FC650
 * Size:	000008
 */
PelletCarcass::Object* Container<Game::PelletCarcass::Object>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801FC658
 * Size:	000008
 */
int Container<Game::PelletCarcass::Object>::getTo() { return 0; }

/*
 * --INFO--
 * Address:	801FC660
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doDirectDraw(Graphics& gfx)
{
	Iterator<Game::PelletCarcass::Object> it(this);

	it.first();
	CI_LOOP(it)
	{
		Game::PelletCarcass::Object* obj = *it;
		obj->doDirectDraw(gfx);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801FC6B0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FC820

lbl_801FC6B0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FC71C

lbl_801FC6C8:
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
	bne      lbl_801FC820
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FC71C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FC6C8
	b        lbl_801FC820

lbl_801FC73C:
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
	bne      lbl_801FC790
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FC820

lbl_801FC790:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FC804

lbl_801FC7B0:
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
	bne      lbl_801FC820
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FC804:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FC7B0

lbl_801FC820:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801FC73C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FC854
 * Size:	00004C
 */
// bool ::Iterator<Game::PelletCarcass::Object>::isDone()
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 4(r31)
subf     r0, r0, r3
cntlzw   r0, r0
srwi     r3, r0, 5
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}

/*
 * --INFO--
 * Address:	801FC8A0
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doSimulation(f32 rate)
{
	Iterator<Game::PelletCarcass::Object> it(this);

	it.first();
	CI_LOOP(it)
	{
		Game::PelletCarcass::Object* obj = *it;
		obj->doSimulation(rate);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801FC8F0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCA60

lbl_801FC8F0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FC95C

lbl_801FC908:
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
	bne      lbl_801FCA60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FC95C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FC908
	b        lbl_801FCA60

lbl_801FC97C:
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
	bne      lbl_801FC9D0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCA60

lbl_801FC9D0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCA44

lbl_801FC9F0:
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
	bne      lbl_801FCA60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FCA44:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FC9F0

lbl_801FCA60:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801FC97C
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FCA94
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doViewCalc()
{
	Iterator<Game::PelletCarcass::Object> it(this);

	it.first();
	CI_LOOP(it)
	{
		Game::PelletCarcass::Object* obj = *it;
		obj->doViewCalc();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801FCADC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCC48

lbl_801FCADC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCB48

lbl_801FCAF4:
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
	bne      lbl_801FCC48
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FCB48:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FCAF4
	b        lbl_801FCC48

lbl_801FCB68:
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
	bne      lbl_801FCBB8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCC48

lbl_801FCBB8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCC2C

lbl_801FCBD8:
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
	bne      lbl_801FCC48
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FCC2C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FCBD8

lbl_801FCC48:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801FCB68
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FCC78
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doSetView(int id)
{
	Iterator<Game::PelletCarcass::Object> it(this);

	it.first();
	CI_LOOP(it)
	{
		Game::PelletCarcass::Object* obj = *it;
		obj->doSetView(id);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801FCCC8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCE38

lbl_801FCCC8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCD34

lbl_801FCCE0:
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
	bne      lbl_801FCE38
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FCD34:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FCCE0
	b        lbl_801FCE38

lbl_801FCD54:
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
	bne      lbl_801FCDA8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCE38

lbl_801FCDA8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCE1C

lbl_801FCDC8:
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
	bne      lbl_801FCE38
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FCE1C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FCDC8

lbl_801FCE38:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801FCD54
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FCE6C
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doEntry()
{
	Iterator<Game::PelletCarcass::Object> it(this);

	it.first();
	CI_LOOP(it)
	{
		Game::PelletCarcass::Object* obj = *it;
		obj->doEntry();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801FCEB4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD020

lbl_801FCEB4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FCF20

lbl_801FCECC:
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
	bne      lbl_801FD020
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FCF20:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FCECC
	b        lbl_801FD020

lbl_801FCF40:
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
	bne      lbl_801FCF90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD020

lbl_801FCF90:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD004

lbl_801FCFB0:
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
	bne      lbl_801FD020
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FD004:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FCFB0

lbl_801FD020:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801FCF40
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FD050
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doAnimation()
{
	Iterator<Game::PelletCarcass::Object> it(this);

	it.first();
	CI_LOOP(it)
	{
		Game::PelletCarcass::Object* obj = *it;
		obj->doAnimation();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__39Iterator<Q34Game13PelletCarcass6Object>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801FD098
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD204

lbl_801FD098:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD104

lbl_801FD0B0:
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
	bne      lbl_801FD204
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FD104:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FD0B0
	b        lbl_801FD204

lbl_801FD124:
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
	bne      lbl_801FD174
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD204

lbl_801FD174:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801FD1E8

lbl_801FD194:
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
	bne      lbl_801FD204
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801FD1E8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801FD194

lbl_801FD204:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801FD124
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FD234
 * Size:	00009C
 */
MonoObjectMgr<Game::PelletCarcass::Object>::MonoObjectMgr()
{
	_18          = true;
	mMax         = 0;
	mActiveCount = 0;
	mArray       = nullptr;
	mOpenIds     = nullptr;
}

/*
 * --INFO--
 * Address:	801FD2D0
 * Size:	000020
 */
u32 FixedSizePelletMgr<Game::PelletCarcass::Object>::getFlag(Pellet* pelt)
{
	if (pelt) {
		return mMonoObjectMgr.mOpenIds[pelt->mSlotIndex];
	}
	return -1;
}

/*
 * --INFO--
 * Address:	801FD2F0
 * Size:	00001C
 */
void FixedSizePelletMgr<Game::PelletCarcass::Object>::setFromTeki(Pellet* pelt)
{
	if (pelt) {
		mMonoObjectMgr.mOpenIds[pelt->mSlotIndex] = 101;
	}
}

/*
 * --INFO--
 * Address:	801FD30C
 * Size:	00001C
 */
void FixedSizePelletMgr<Game::PelletCarcass::Object>::setRevival(Pellet* pelt)
{
	if (pelt) {
		mMonoObjectMgr.mOpenIds[pelt->mSlotIndex] = 100;
	}
}

/*
 * --INFO--
 * Address:	801FD328
 * Size:	00001C
 */
void FixedSizePelletMgr<Game::PelletCarcass::Object>::setComeAlive(Pellet* pelt)
{
	if (pelt) {
		mMonoObjectMgr.mOpenIds[pelt->mSlotIndex] = 0;
	}
}

/*
 * --INFO--
 * Address:	801FD344
 * Size:	000010
 */
void FixedSizePelletMgr<Game::PelletCarcass::Object>::setComeAlive(int id) { mMonoObjectMgr.mOpenIds[id] = 0; }

/*
 * --INFO--
 * Address:	801FD354
 * Size:	00002C
 */
void* FixedSizePelletMgr<Game::PelletCarcass::Object>::getEnd() { return mMonoObjectMgr.getEnd(); }

/*
 * --INFO--
 * Address:	801FD380
 * Size:	00002C
 */
PelletCarcass::Object* FixedSizePelletMgr<Game::PelletCarcass::Object>::get(void* data) { return mMonoObjectMgr.get(data); }

/*
 * --INFO--
 * Address:	801FD3AC
 * Size:	00002C
 */
PelletCarcass::Object* FixedSizePelletMgr<Game::PelletCarcass::Object>::getObjectPtr(void* data)
{
	return get(data);
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
 * Address:	801FD3D8
 * Size:	000090
 */
Pellet* FixedSizePelletMgr<Game::PelletCarcass::Object>::birthFromTeki(PelletConfig* in)
{
	for (int i = 0; i < mMonoObjectMgr.mMax; i++) {
		if (mMonoObjectMgr.mOpenIds[i] == 101) {
			Pellet* pelt = mMonoObjectMgr.getAt(i);
			if (pelt->mConfig == in) {
				return pelt;
			}
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801FD468
 * Size:	000080
 */
void FixedSizePelletMgr<Game::PelletCarcass::Object>::alloc(int count)
{
	mMonoObjectMgr.alloc(count);
	onAlloc();
	for (int i = 0; i < mMonoObjectMgr.mMax; i++) {
		mMonoObjectMgr.getAt(i)->constructor();
	}
}

/*
 * --INFO--
 * Address:	801FD4E8
 * Size:	000038
 */
// PelletCarcass::Object* ::Iterator<Game::PelletCarcass::Object>::operator*()
//{
//}

/*
 * --INFO--
 * Address:	801FD520
 * Size:	0000E4
 */
// void ::Iterator<Game::PelletCarcass::Object>::next()
//{
//}

/*
 * --INFO--
 * Address:	801FD604
 * Size:	0000DC
 */
// void Iterator<Game::PelletCarcass::Object>::first()
//{
//}

/*
 * --INFO--
 * Address:	801FD6E0
 * Size:	000064
 */
void FixedSizePelletMgr<Game::PelletCarcass::Object>::onAlloc()
{
	for (int i = 0; i < mMonoObjectMgr.mMax; i++) {
		mMonoObjectMgr.getAt(i)->mSlotIndex = i;
	}
}

/*
 * --INFO--
 * Address:	801FD744
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::alloc(int count)
{
	mArray       = new Game::PelletCarcass::Object[count];
	mMax         = count;
	mActiveCount = 0;
	mOpenIds     = new u8[count];

	for (int i = 0; i < count; i++) {
		mOpenIds[i] = true;
	}

	onAlloc();

	for (int i = 0; i < count; i++) {
		mArray[i].constructor();
	}
}

/*
 * --INFO--
 * Address:	801FD8CC
 * Size:	00004C
 */
PelletCarcass::Object::Object() { }

/*
 * --INFO--
 * Address:	801FD918
 * Size:	000008
 */
u8 PelletCarcass::Object::getKind() { return PELTYPE_CARCASS; }

} // namespace Game

/*
 * --INFO--
 * Address:	801FD920
 * Size:	000008
 */

// void @84 @__dt__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv()
//{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x1FA8
*/
//}

//} // namespace Game

/*
 * --INFO--
 * Address:	801FD928
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @resetMgr()
//{
/*
addi     r3, r3, -28
b        "resetMgr__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD930
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doDirectDraw(Graphics&)
//{
/*
addi     r3, r3, -28
b "doDirectDraw__44MonoObjectMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
*/
//}

/*
 * --INFO--
 * Address:	801FD938
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doSimulation(float)
//{
/*
addi     r3, r3, -28
b        "doSimulation__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Ff"
*/
//}

/*
 * --INFO--
 * Address:	801FD940
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doViewCalc()
//{
/*
addi     r3, r3, -28
b        "doViewCalc__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD948
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doSetView(int)
//{
/*
addi     r3, r3, -28
b        "doSetView__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fi"
*/
//}

/*
 * --INFO--
 * Address:	801FD950
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doEntry()
//{
/*
addi     r3, r3, -28
b        "doEntry__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD958
 * Size:	000008
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doAnimation()
//{
/*
addi     r3, r3, -28
b        "doAnimation__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD960
 * Size:	000008
 */
// void ObjectMgr<Game::PelletCarcass::Object>::@28 @doDirectDraw(Graphics&)
//{
/*
addi     r3, r3, -28
b "doDirectDraw__40ObjectMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
*/
//}

/*
 * --INFO--
 * Address:	801FD968
 * Size:	000008
 */
// void ObjectMgr<Game::PelletCarcass::Object>::@28 @doSimulation(float)
//{
/*
addi     r3, r3, -28
b        "doSimulation__40ObjectMgr<Q34Game13PelletCarcass6Object>Ff"
*/
//}

/*
 * --INFO--
 * Address:	801FD970
 * Size:	000008
 */
// void ObjectMgr<Game::PelletCarcass::Object>::@28 @doViewCalc()
//{
/*
addi     r3, r3, -28
b        "doViewCalc__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD978
 * Size:	000008
 */
// void ObjectMgr<Game::PelletCarcass::Object>::@28 @doSetView(int)
//{
/*
addi     r3, r3, -28
b        "doSetView__40ObjectMgr<Q34Game13PelletCarcass6Object>Fi"
*/
//}

/*
 * --INFO--
 * Address:	801FD980
 * Size:	000008
 */
// void ObjectMgr<Game::PelletCarcass::Object>::@28 @doEntry()
//{
/*
addi     r3, r3, -28
b        "doEntry__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD988
 * Size:	000008
 */
// void ObjectMgr<Game::PelletCarcass::Object>::@28 @doAnimation()
//{
/*
addi     r3, r3, -28
b        "doAnimation__40ObjectMgr<Q34Game13PelletCarcass6Object>Fv"
*/
//}

/*
 * --INFO--
 * Address:	801FD990
 * Size:	000008
 */
// void @84 @getEnd__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv()
//{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x640
*/
//}

/*
 * --INFO--
 * Address:	801FD998
 * Size:	000008
 */
// void @84 @getStart__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv()
//{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x1898
*/
//}

/*
 * --INFO--
 * Address:	801FD9A0
 * Size:	000008
 */
// void @84 @getNext__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> FPv()
//{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x18CC
*/
//}

/*
 * --INFO--
 * Address:	801FD9A8
 * Size:	000008
 */
// void @84 @get__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> FPv()
//{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x62C
*/
//}

/*
 * --INFO--
 * Address:	801FD9B0
 * Size:	000008
 */
//@84 @Game::PelletCarcass::Mgr::~Mgr()
//{
/*
addi     r3, r3, -84
b        __dt__Q34Game13PelletCarcass3MgrFv
*/
//}
