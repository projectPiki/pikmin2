#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_panModoki_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490EF8
    lbl_80490EF8:
        .4byte 0x70616E4D
        .4byte 0x6F646F6B
        .4byte 0x692E6370
        .4byte 0x70000000
    .global lbl_80490F08
    lbl_80490F08:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804DCAB8
    lbl_804DCAB8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game11OoPanModoki3Obj
    __vt__Q34Game11OoPanModoki3Obj:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game9EnemyBaseFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game9EnemyBaseFv
        .4byte onInit__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q34Game13PanModokiBase3ObjFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game13PanModokiBase3ObjFf
        .4byte doDirectDraw__Q34Game13PanModokiBase3ObjFR8Graphics
        .4byte getBodyRadius__Q24Game9EnemyBaseFv
        .4byte getCellRadius__Q24Game9EnemyBaseFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game9EnemyBaseFv
        .4byte "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getVelocity__Q24Game9EnemyBaseFv
        .4byte "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game9EnemyBaseFv
        .4byte isTeki__Q24Game9EnemyBaseFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q34Game13PanModokiBase3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game13PanModokiBase3ObjFv
        .4byte inWater__Q24Game9EnemyBaseFv
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
        .4byte isFlying__Q24Game9EnemyBaseFv
        .4byte isUnderground__Q34Game13PanModokiBase3ObjFv
        .4byte isLivingThing__Q34Game13PanModokiBase3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q34Game13PanModokiBase3ObjFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game13PanModokiBase3ObjFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game9EnemyBaseFv
        .4byte getPSCreature__Q24Game9EnemyBaseFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game9EnemyBaseFv
        .4byte sound_culling__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8CreatureFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q34Game13PanModokiBase3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game13PanModokiBase3ObjFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte
   "applyImpulse__Q34Game13PanModokiBase3ObjFR10Vector3<f>R10Vector3<f>" .4byte
   ignoreAtari__Q34Game13PanModokiBase3ObjFPQ24Game8Creature .4byte
   getSuckPos__Q24Game8CreatureFv .4byte getGoalPos__Q24Game8CreatureFv .4byte
   isSuckReady__Q24Game8CreatureFv .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game11OoPanModoki3ObjFv
        .4byte "birth__Q34Game13PanModokiBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game13PanModokiBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game13PanModokiBase3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q34Game13PanModokiBase3ObjFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game13PanModokiBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q24Game9EnemyBaseFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q34Game13PanModokiBase3ObjFv
        .4byte initMouthSlots__Q34Game13PanModokiBase3ObjFv
        .4byte initWalkSmokeEffect__Q34Game13PanModokiBase3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game13PanModokiBase3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game11OoPanModoki3ObjFv
        .4byte getMouthSlots__Q34Game13PanModokiBase3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   pressCallBack__Q34Game11OoPanModoki3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
        .4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
        .4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doStartStoneState__Q34Game13PanModokiBase3ObjFv
        .4byte doFinishStoneState__Q34Game13PanModokiBase3ObjFv
        .4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
        .4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte lifeRecover__Q24Game9EnemyBaseFv
        .4byte startCarcassMotion__Q34Game13PanModokiBase3ObjFv
        .4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
        .4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
        .4byte doBecomeCarcass__Q24Game9EnemyBaseFv
        .4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
        .4byte getDownSmokeScale__Q34Game11OoPanModoki3ObjFv
        .4byte doStartMovie__Q34Game13PanModokiBase3ObjFv
        .4byte doEndMovie__Q34Game13PanModokiBase3ObjFv
        .4byte appearRumble__Q34Game11OoPanModoki3ObjFv
        .4byte hideRumble__Q34Game11OoPanModoki3ObjFv
        .4byte damageRumble__Q34Game13PanModokiBase3ObjFv
        .4byte walkFunc__Q34Game13PanModokiBase3ObjFv
        .4byte canTarget__Q34Game11OoPanModoki3ObjFii
        .4byte setFSM__Q34Game13PanModokiBase3ObjFPQ34Game13PanModokiBase3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@968@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@968@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
    .global __vt__Q24Game13PelletKillArg
    __vt__Q24Game13PelletKillArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q24Game15CreatureKillArgFv
    .global __vt__Q34Game13PanModokiBase3Obj
    __vt__Q34Game13PanModokiBase3Obj:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game9EnemyBaseFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game9EnemyBaseFv
        .4byte onInit__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q34Game13PanModokiBase3ObjFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game13PanModokiBase3ObjFf
        .4byte doDirectDraw__Q34Game13PanModokiBase3ObjFR8Graphics
        .4byte getBodyRadius__Q24Game9EnemyBaseFv
        .4byte getCellRadius__Q24Game9EnemyBaseFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game9EnemyBaseFv
        .4byte "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getVelocity__Q24Game9EnemyBaseFv
        .4byte "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game9EnemyBaseFv
        .4byte isTeki__Q24Game9EnemyBaseFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q34Game13PanModokiBase3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game13PanModokiBase3ObjFv
        .4byte inWater__Q24Game9EnemyBaseFv
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
        .4byte isFlying__Q24Game9EnemyBaseFv
        .4byte isUnderground__Q34Game13PanModokiBase3ObjFv
        .4byte isLivingThing__Q34Game13PanModokiBase3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q34Game13PanModokiBase3ObjFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game13PanModokiBase3ObjFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game9EnemyBaseFv
        .4byte getPSCreature__Q24Game9EnemyBaseFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game9EnemyBaseFv
        .4byte sound_culling__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8CreatureFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q34Game13PanModokiBase3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game13PanModokiBase3ObjFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte
   "applyImpulse__Q34Game13PanModokiBase3ObjFR10Vector3<f>R10Vector3<f>" .4byte
   ignoreAtari__Q34Game13PanModokiBase3ObjFPQ24Game8Creature .4byte
   getSuckPos__Q24Game8CreatureFv .4byte getGoalPos__Q24Game8CreatureFv .4byte
   isSuckReady__Q24Game8CreatureFv .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game13PanModokiBase3ObjFv
        .4byte "birth__Q34Game13PanModokiBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game13PanModokiBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game13PanModokiBase3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q34Game13PanModokiBase3ObjFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game13PanModokiBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q24Game9EnemyBaseFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q34Game13PanModokiBase3ObjFv
        .4byte initMouthSlots__Q34Game13PanModokiBase3ObjFv
        .4byte initWalkSmokeEffect__Q34Game13PanModokiBase3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game13PanModokiBase3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte getMouthSlots__Q34Game13PanModokiBase3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   pressCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
        .4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
        .4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doStartStoneState__Q34Game13PanModokiBase3ObjFv
        .4byte doFinishStoneState__Q34Game13PanModokiBase3ObjFv
        .4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
        .4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte lifeRecover__Q24Game9EnemyBaseFv
        .4byte startCarcassMotion__Q34Game13PanModokiBase3ObjFv
        .4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
        .4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
        .4byte doBecomeCarcass__Q24Game9EnemyBaseFv
        .4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
        .4byte getDownSmokeScale__Q24Game9EnemyBaseFv
        .4byte doStartMovie__Q34Game13PanModokiBase3ObjFv
        .4byte doEndMovie__Q34Game13PanModokiBase3ObjFv
        .4byte appearRumble__Q34Game13PanModokiBase3ObjFv
        .4byte hideRumble__Q34Game13PanModokiBase3ObjFv
        .4byte damageRumble__Q34Game13PanModokiBase3ObjFv
        .4byte walkFunc__Q34Game13PanModokiBase3ObjFv
        .4byte 0
        .4byte setFSM__Q34Game13PanModokiBase3ObjFPQ34Game13PanModokiBase3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@968@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@968@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@968@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
    .global __vt__Q24Game18InteractSuckFinish
    __vt__Q24Game18InteractSuckFinish:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game18InteractSuckFinishFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515F30
    lbl_80515F30:
        .skip 0x4
    .global lbl_80515F34
    lbl_80515F34:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E490
    lbl_8051E490:
        .4byte 0x00000000
    .global lbl_8051E494
    lbl_8051E494:
        .4byte 0x626F6479
        .4byte 0x00000000
    .global lbl_8051E49C
    lbl_8051E49C:
        .4byte 0x6B616D75
        .4byte 0x00000000
    .global lbl_8051E4A4
    lbl_8051E4A4:
        .4byte 0x41A00000
    .global lbl_8051E4A8
    lbl_8051E4A8:
        .4byte 0x41700000
    .global lbl_8051E4AC
    lbl_8051E4AC:
        .4byte 0x40A00000
    .global lbl_8051E4B0
    lbl_8051E4B0:
        .4byte 0x3F19999A
    .global lbl_8051E4B4
    lbl_8051E4B4:
        .float 1.0
    .global lbl_8051E4B8
    lbl_8051E4B8:
        .float 0.1
    .global lbl_8051E4BC
    lbl_8051E4BC:
        .4byte 0x3E4CCCCD
    .global lbl_8051E4C0
    lbl_8051E4C0:
        .4byte 0x3FC90FDB
    .global lbl_8051E4C4
    lbl_8051E4C4:
        .4byte 0x40490FDB
    .global lbl_8051E4C8
    lbl_8051E4C8:
        .4byte 0x43A2F983
    .global lbl_8051E4CC
    lbl_8051E4CC:
        .4byte 0xC3A2F983
    .global lbl_8051E4D0
    lbl_8051E4D0:
        .float 0.5
    .global lbl_8051E4D4
    lbl_8051E4D4:
        .4byte 0x40000000
    .global lbl_8051E4D8
    lbl_8051E4D8:
        .4byte 0x42480000
    .global lbl_8051E4DC
    lbl_8051E4DC:
        .4byte 0x41F00000
    .global lbl_8051E4E0
    lbl_8051E4E0:
        .4byte 0xC47A0000
    .global lbl_8051E4E4
    lbl_8051E4E4:
        .4byte 0x6173694C
        .4byte 0x00000000
    .global lbl_8051E4EC
    lbl_8051E4EC:
        .4byte 0x61736952
        .4byte 0x00000000
    .global lbl_8051E4F4
    lbl_8051E4F4:
        .4byte 0x42C80000
    .global lbl_8051E4F8
    lbl_8051E4F8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051E500
    lbl_8051E500:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051E508
    lbl_8051E508:
        .4byte 0x42700000
    .global lbl_8051E50C
    lbl_8051E50C:
        .4byte 0x42960000
    .global lbl_8051E510
    lbl_8051E510:
        .4byte 0xBF800000
    .global lbl_8051E514
    lbl_8051E514:
        .4byte 0x43160000
    .global lbl_8051E518
    lbl_8051E518:
        .4byte 0x41200000
    .global lbl_8051E51C
    lbl_8051E51C:
        .4byte 0xBDCCCCCD
    .global lbl_8051E520
    lbl_8051E520:
        .4byte 0x3F666666
    .global lbl_8051E524
    lbl_8051E524:
        .4byte 0x3BB60B61
    .global lbl_8051E528
    lbl_8051E528:
        .4byte 0x6F72696D
        .4byte 0x61000000
    .global lbl_8051E530
    lbl_8051E530:
        .4byte 0x40C90FDB
    .global lbl_8051E534
    lbl_8051E534:
        .4byte 0x461C4000
    .global lbl_8051E538
    lbl_8051E538:
        .float 0.15
    .global lbl_8051E53C
    lbl_8051E53C:
        .4byte 0x3F7D70A4
    .global lbl_8051E540
    lbl_8051E540:
        .4byte 0x42200000
    .global lbl_8051E544
    lbl_8051E544:
        .4byte 0x41400000
    .global lbl_8051E548
    lbl_8051E548:
        .4byte 0x3FCCCCCD
    .global lbl_8051E54C
    lbl_8051E54C:
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8034F5E0
 * Size:	000070
 */
void InteractSuckFinish::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x27
	beq      lbl_8034F638
	bge      lbl_8034F620
	cmpwi    r3, 0x26
	bge      lbl_8034F628
	b        lbl_8034F638

lbl_8034F620:
	cmpwi    r3, 0x29
	bge      lbl_8034F638

lbl_8034F628:
	mr       r3, r31
	bl       suckFinish__Q34Game13PanModokiBase3ObjFv
	li       r3, 1
	b        lbl_8034F63C

lbl_8034F638:
	li       r3, 0

lbl_8034F63C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034F650
 * Size:	000068
 */
void PanModokiBase::Obj::setParameters(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r4, 0x378(r31)
	cmplwi   r4, 0
	beq      lbl_8034F6A4
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x81c(r3)
	stfs     f0, 0x1f8(r4)
	stfs     f0, 0x168(r4)
	stfs     f0, 0x16c(r4)
	stfs     f0, 0x170(r4)
	lwz      r4, 0x378(r31)
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x114(r4)
	lfs      f1, 0x81c(r3)
	lwz      r3, 0(r4)
	bl       setScale__8CollPartFf

lbl_8034F6A4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8034F6B8
 * Size:	000120
 */
void birth__Q34Game13PanModokiBase3ObjFR10Vector3f f(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x53
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_8034F7C0
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r30)
	mr       r3, r30
	stfs     f0, 8(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x14(r1)
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_8034F75C
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x59
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034F75C:
	cmplwi   r31, 0
	beq      lbl_8034F7C0
	mr       r3, r31
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	stw      r31, 0x378(r30)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x378(r30)
	bl       setHouseType__Q34Game4Nest3ObjFi
	lwz      r3, 0xc0(r30)
	lwz      r4, 0x378(r30)
	lfs      f1, 0x81c(r3)
	stfs     f1, 0x1f8(r4)
	stfs     f1, 0x168(r4)
	stfs     f1, 0x16c(r4)
	stfs     f1, 0x170(r4)
	lwz      r3, 0x378(r30)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_8034F7C0:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8034F7D8
 * Size:	0001DC
 */
void PanModokiBase::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x2c8(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	li       r3, 0
	li       r0, 1
	stw      r3, 0x304(r31)
	addi     r4, r2, lbl_8051E494@sda21
	lfs      f0, lbl_8051E490@sda21(r2)
	lfs      f1, 0x198(r31)
	stfs     f1, 0x308(r31)
	lfs      f1, 0x19c(r31)
	stfs     f1, 0x30c(r31)
	lfs      f1, 0x1a0(r31)
	stfs     f1, 0x310(r31)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x334(r31)
	stw      r3, 0x314(r31)
	stb      r0, 0x2e4(r31)
	stb      r3, 0x2f0(r31)
	stb      r3, 0x2f1(r31)
	stw      r3, 0x318(r31)
	sth      r3, 0x2e6(r31)
	sth      r3, 0x2ea(r31)
	sth      r3, 0x2e8(r31)
	stfs     f0, 0x320(r31)
	stfs     f0, 0x324(r31)
	stfs     f0, 0x328(r31)
	stb      r3, 0x31c(r31)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2d4(r31)
	lwz      r0, 0x2d4(r31)
	cmplwi   r0, 0
	bne      lbl_8034F8C8
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x89
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034F8C8:
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051E49C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	bne      lbl_8034F900
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x8c
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034F900:
	lfs      f0, 0x190(r31)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	stfs     f0, 0x334(r31)
	lwz      r3, 0x380(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x300(r31)
	cmplwi   r0, 0
	bne      lbl_8034F950
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x91
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034F950:
	lwz      r3, 0x300(r31)
	addi     r4, r31, 0x18c
	li       r0, 0
	stw      r4, 0x10(r3)
	stw      r0, 0x388(r31)
	stw      r0, 0x38c(r31)
	stw      r0, 0x390(r31)
	stw      r0, 0x394(r31)
	stw      r0, 0x398(r31)
	stw      r0, 0x39c(r31)
	stw      r0, 0x3a0(r31)
	stw      r0, 0x3a4(r31)
	stw      r0, 0x3a8(r31)
	stw      r0, 0x3ac(r31)
	stw      r0, 0x3b0(r31)
	stw      r0, 0x3b4(r31)
	stw      r0, 0x3b8(r31)
	stw      r0, 0x3bc(r31)
	stw      r0, 0x3c0(r31)
	stw      r0, 0x3c4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034F9B4
 * Size:	0002A0
 */
PanModokiBase::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8034F9F4
	addi     r0, r31, 0x3c8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x3c8(r31)
	stw      r0, 0x3cc(r31)
	stw      r0, 0x3d0(r31)

lbl_8034F9F4:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game13PanModokiBase3Obj@ha
	addi     r0, r31, 0x3c8
	addi     r3, r3, __vt__Q34Game13PanModokiBase3Obj@l
	lfs      f0, lbl_8051E490@sda21(r2)
	stw      r3, 0(r31)
	addi     r4, r3, 0x1b0
	addi     r5, r3, 0x310
	addi     r3, r31, 0x2cc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	stfs     f0, 0x2c8(r31)
	bl       __ct__10MouthSlotsFv
	li       r0, 0
	addi     r3, r31, 0x2f4
	stw      r0, 0x2d4(r31)
	stw      r0, 0x2d8(r31)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r0, 0
	lfs      f1, lbl_8051E4A4@sda21(r2)
	stw      r0, 0x2fc(r31)
	li       r3, 0x2c
	lfs      f0, lbl_8051E4A8@sda21(r2)
	stw      r0, 0x300(r31)
	lfs      f2, lbl_8051E4AC@sda21(r2)
	stfs     f1, 0x32c(r31)
	lfs      f1, lbl_8051E4B0@sda21(r2)
	stfs     f0, 0x330(r31)
	lfs      f0, lbl_8051E4B4@sda21(r2)
	stfs     f2, 0x338(r31)
	stfs     f1, 0x33c(r31)
	stfs     f0, 0x340(r31)
	stw      r0, 0x378(r31)
	stw      r0, 0x380(r31)
	stw      r0, 0x384(r31)
	stw      r0, 0x388(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8034FAE8
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game13PanModokiBase14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game13PanModokiBase14ProperAnimator@l
	lis      r3, __vt__Q28SysShape8Animator@ha
	stw      r0, 0(r30)
	addi     r4, r4, __vt__Q28SysShape12BaseAnimator@l
	addi     r3, r3, __vt__Q28SysShape8Animator@l
	li       r0, 0
	stw      r4, 0x10(r30)
	stw      r3, 0x10(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x20(r30)

lbl_8034FAE8:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8034FB1C
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game13PanModokiBase3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game13PanModokiBase3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8034FB1C:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x30c(r12)
	mtctr    r12
	bctrl
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8034FBA8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx8TForever@ha
	stw      r0, 4(r3)
	addi     r6, r4, __vt__Q23efx8TForever@l
	lis      r4, __vt__Q23efx8TPanHide@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx8TPanHide@l
	li       r8, 0
	li       r7, 0x26f
	stw      r0, 4(r3)
	addi     r5, r6, 0x14
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8034FBA8:
	stw      r3, 0x2fc(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8034FC34
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx9TPanSmoke@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TPanSmoke@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0x270
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8034FC34:
	stw      r3, 0x300(r31)
	mr       r3, r31
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
 * Address:	8034FC54
 * Size:	000034
 */
void PanModokiBase::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x380(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	8034FC88
 * Size:	0000B4
 */
void PanModokiBase::Obj::doAnimation(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	bl       doAnimation__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8034FD28
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	beq      lbl_8034FCC4
	cmpwi    r3, 0xa
	bne      lbl_8034FCD8

lbl_8034FCC4:
	lwz      r0, 0x230(r31)
	cmplwi   r0, 0
	beq      lbl_8034FCD8
	mr       r3, r31
	bl       updateCaptureMatrix__Q34Game13PanModokiBase3ObjFv

lbl_8034FCD8:
	lwz      r3, 0x38c(r31)
	cmplwi   r3, 0
	beq      lbl_8034FD28
	lwz      r4, 0x378(r31)
	cmplwi   r4, 0
	beq      lbl_8034FD28
	addi     r4, r4, 0x2bc
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lfs      f0, lbl_8051E4B8@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r5, r3, "zero__10Vector3<f>"@l
	addi     r4, r1, 8
	stfs     f0, 8(r1)
	addi     r3, r1, 0x14
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x38c(r31)
	addi     r4, r1, 0x14
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_8034FD28:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034FD3C
 * Size:	000318
 */
void PanModokiBase::Obj::doAnimationStick(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_80350024
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	bne      lbl_80350024
	addi     r4, r1, 0x20
	bl       "getYVector__Q24Game8CreatureFR10Vector3<f>"
	lfs      f2, 0x20(r1)
	lfs      f1, 0x24(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x28(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FDC0
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FDC4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FDC4

lbl_8034FDC0:
	fmr      f3, f1

lbl_8034FDC4:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FDFC
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_8034FDFC:
	lfs      f1, 0x1fc(r31)
	bl       cos
	frsp     f31, f1
	lfs      f1, 0x1fc(r31)
	bl       sin
	frsp     f2, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f4, f31, f31
	stfs     f31, 0x1c(r1)
	fmuls    f3, f1, f1
	fmuls    f0, f2, f2
	stfs     f2, 0x14(r1)
	fadds    f0, f0, f3
	stfs     f1, 0x18(r1)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FE5C
	fmadds   f0, f2, f2, f3
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FE60
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FE60

lbl_8034FE5C:
	fmr      f3, f1

lbl_8034FE60:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FE98
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8034FE98:
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSVECCrossProduct
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x10(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FEF0
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FEF4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FEF4

lbl_8034FEF0:
	fmr      f3, f1

lbl_8034FEF4:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FF2C
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 8(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8034FF2C:
	addi     r3, r1, 8
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	bl       PSVECCrossProduct
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x1c(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FF84
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FF88
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FF88

lbl_8034FF84:
	fmr      f3, f1

lbl_8034FF88:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FFC0
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8034FFC0:
	lfs      f0, 8(r1)
	stfs     f0, 0x138(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x148(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x158(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x13c(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x14c(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x15c(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x140(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x150(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x160(r31)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x164(r31)
	b        lbl_80350038

lbl_80350024:
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_80350038:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350054
 * Size:	00027C
 */
void PanModokiBase::Obj::updateCaptureMatrix(void)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r3
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_803500CC
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_803500CC
	cmplwi   r31, 0
	beq      lbl_803500CC
	mr       r3, r30
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803500CC
	mr       r3, r30
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv

lbl_803500CC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80350110
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80350110
	mr       r3, r30
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv

lbl_80350110:
	mr       r3, r30
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_80350298
	lwz      r3, 0x2d8(r30)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f31, 0(r3)
	addi     r4, r1, 0x44
	lfs      f30, 0x10(r3)
	lfs      f29, 0x20(r3)
	mr       r3, r30
	bl       "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f28, 0x28(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r1)
	lfs      f2, 0x2c(r1)
	fsubs    f1, f0, f28
	lfs      f0, 0x44(r1)
	lfs      f3, lbl_8051E490@sda21(r2)
	fsubs    f2, f0, f2
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f3
	ble      lbl_80350200
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f28, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r1)
	lfs      f3, 8(r1)
	fsubs    f2, f0, f28
	lfs      f1, 0x44(r1)
	lfs      f0, lbl_8051E490@sda21(r2)
	fsubs    f3, f1, f3
	fmuls    f1, f2, f2
	fmadds   f3, f3, f3, f1
	fcmpo    cr0, f3, f0
	ble      lbl_80350200
	frsqrte  f0, f3
	fmuls    f3, f0, f3

lbl_80350200:
	lfs      f1, lbl_8051E4BC@sda21(r2)
	lfs      f0, 0x32c(r30)
	lwz      r3, 0x2d8(r30)
	fmadds   f28, f1, f0, f3
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r30, 0x348
	bl       PSMTXCopy
	fmuls    f2, f31, f28
	lfs      f3, 0x354(r30)
	fmuls    f1, f30, f28
	mr       r3, r31
	fmuls    f0, f29, f28
	addi     r4, r30, 0x348
	fadds    f2, f3, f2
	stfs     f2, 0x354(r30)
	lfs      f2, 0x364(r30)
	fadds    f1, f2, f1
	stfs     f1, 0x364(r30)
	lfs      f1, 0x374(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x374(r30)
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lfs      f2, lbl_8051E4C0@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, 0x2e0(r30)
	addi     r4, r3, "zero__10Vector3<f>"@l
	lfs      f1, lbl_8051E490@sda21(r2)
	addi     r3, r1, 0x50
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051E4C4@sda21(r2)
	stfs     f1, 0x38(r1)
	addi     r5, r1, 0x38
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	addi     r4, r1, 0x50
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_80350298:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803502D0
 * Size:	000004
 */
void PanModokiBase::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803502D4
 * Size:	000020
 */
void PanModokiBase::Obj::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doDebugDraw__Q24Game9EnemyBaseFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803502F4
 * Size:	000030
 */
void PanModokiBase::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80350310
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart

lbl_80350310:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350324
 * Size:	0001BC
 */
void PanModokiBase::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051E490@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80350354
	li       r3, 0
	b        lbl_803504CC

lbl_80350354:
	cmplwi   r4, 0
	beq      lbl_803504C8
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803504C8
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803504C0
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x999(r3)
	cmplwi   r0, 0
	beq      lbl_803503AC
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803503AC
	li       r3, 0
	b        lbl_803504CC

lbl_803503AC:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bge      lbl_803503CC
	cmpwi    r3, 1
	beq      lbl_803503E0
	bge      lbl_80350450
	b        lbl_803504C0

lbl_803503CC:
	cmpwi    r3, 9
	bge      lbl_803504C0
	cmpwi    r3, 7
	bge      lbl_803503E0
	b        lbl_803504C0

lbl_803503E0:
	lfs      f0, lbl_8051E490@sda21(r2)
	li       r0, 0
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stb      r0, 0x2f1(r31)
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x999(r3)
	cmplwi   r0, 0
	beq      lbl_80350428
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 6
	stw      r0, 0x344(r31)
	b        lbl_80350448

lbl_80350428:
	lwz      r3, 0x380(r31)
	mr       r4, r31
	li       r5, 6
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80350448:
	li       r3, 1
	b        lbl_803504CC

lbl_80350450:
	lfs      f0, lbl_8051E490@sda21(r2)
	li       r0, 0
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stb      r0, 0x2f1(r31)
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x999(r3)
	cmplwi   r0, 0
	beq      lbl_80350498
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 6
	stw      r0, 0x344(r31)
	b        lbl_803504B8

lbl_80350498:
	lwz      r3, 0x380(r31)
	mr       r4, r31
	li       r5, 6
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803504B8:
	li       r3, 1
	b        lbl_803504CC

lbl_803504C0:
	li       r3, 0
	b        lbl_803504CC

lbl_803504C8:
	li       r3, 0

lbl_803504CC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803504E0
 * Size:	00002C
 */
void PanModokiBase::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x27c(r12)
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
 * Address:	8035050C
 * Size:	0000AC
 */
void PanModokiBase::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0(r4)
	cmplwi   r3, 0
	beq      lbl_80350578
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80350578
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x53
	bne      lbl_80350578
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f0, 0x11c(r30)
	stfs     f0, 0x120(r30)
	stfs     f0, 0x124(r30)

lbl_80350578:
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80350594
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f0, 0x11c(r30)
	stfs     f0, 0x120(r30)
	stfs     f0, 0x124(r30)

lbl_80350594:
	mr       r3, r30
	mr       r4, r31
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
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
 * Address:	803505B8
 * Size:	000044
 */
void PanModokiBase::Obj::outWaterCallback(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       outWaterCallback__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_803505E8
	mr       r3, r31
	bl       createPulledSmokeEffect__Q34Game13PanModokiBase3ObjFv

lbl_803505E8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803505FC
 * Size:	000034
 */
void PanModokiBase::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
	mr       r3, r31
	bl       fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350630
 * Size:	000054
 */
void PanModokiBase::Obj::bounceCallback(Sys::Triangle*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 9
	bne      lbl_80350670
	lwz      r3, 0x380(r31)
	mr       r4, r31
	li       r5, 6
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80350670:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350684
 * Size:	000050
 */
void PanModokiBase::Obj::damageRumble(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 3
	li       r6, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r5, r31, 0x18c
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803506D4
 * Size:	00021C
 */
void PanModokiBase::Obj::doSimulation(float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	fmr      f31, f1
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80350710
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_80350710:
	lwz      r3, 0x304(r31)
	addi     r0, r3, -1
	stw      r0, 0x304(r31)
	lwz      r0, 0x304(r31)
	cmpwi    r0, 0
	bge      lbl_80350730
	li       r0, 0
	stw      r0, 0x304(r31)

lbl_80350730:
	fmr      f1, f31
	mr       r3, r31
	bl       doSimulation__Q24Game9EnemyBaseFf
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803508D4
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803508D4
	lwz      r4, 0x1e0(r31)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8035077C
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_80350780

lbl_8035077C:
	li       r3, 1

lbl_80350780:
	clrlwi.  r0, r3, 0x18
	bne      lbl_803508D4
	mr       r3, r31
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_803508D4
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_803507BC
	fneg     f1, f3

lbl_803507BC:
	lfs      f2, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E490@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f4, 4(r3)
	bge      lbl_80350814
	lfs      f0, lbl_8051E4CC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f3, f0
	b        lbl_8035082C

lbl_80350814:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r4, r0

lbl_8035082C:
	lfs      f2, 0x32c(r31)
	addi     r4, r1, 8
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	fnmsubs  f3, f3, f2, f1
	lfs      f1, 0x18(r1)
	fnmsubs  f2, f4, f2, f0
	lfs      f0, lbl_8051E4A4@sda21(r2)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	stfs     f3, 0x14(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x1c(r1)
	stfs     f3, 8(r1)
	stfs     f2, 0x10(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x334(r31)
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x18(r1)
	lfs      f0, 0x99c(r3)
	fsubs    f0, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8035089C
	fmr      f1, f0

lbl_8035089C:
	lfs      f0, 0x334(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_803508B4
	fadds    f0, f2, f0
	lfs      f1, lbl_8051E4D0@sda21(r2)
	fmuls    f1, f1, f0

lbl_803508B4:
	stfs     f1, 0x18(r1)
	stfs     f1, 0x334(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x18c(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x190(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x194(r31)

lbl_803508D4:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803508F0
 * Size:	000088
 */
void PanModokiBase::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2d4(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0xc(r3)
	lfs      f4, lbl_8051E4D4@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f2, lbl_8051E490@sda21(r2)
	lfs      f0, 0x1c(r3)
	lfs      f1, lbl_8051E4B4@sda21(r2)
	stfs     f0, 4(r31)
	lfs      f0, lbl_8051E4D8@sda21(r2)
	lfs      f3, 0x2c(r3)
	stfs     f3, 8(r31)
	lfs      f3, 0x190(r30)
	fadds    f3, f4, f3
	stfs     f3, 4(r31)
	stfs     f2, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	lfs      f0, 0x330(r30)
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350978
 * Size:	000058
 */
void PanModokiBase::Obj::needShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803509A0
	li       r3, 0
	b        lbl_803509BC

lbl_803509A0:
	lwz      r4, 0x1e0(r31)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_803509BC
	rlwinm.  r0, r4, 0, 0xd, 0xd
	bne      lbl_803509BC
	li       r3, 1

lbl_803509BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803509D0
 * Size:	000028
 */
void PanModokiBase::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 7
	li       r5, 0
	stw      r0, 0x14(r1)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803509F8
 * Size:	00008C
 */
void PanModokiBase::Obj::initMouthSlots(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 1
	addi     r3, r30, 0x2cc
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2cc
	li       r4, 0
	addi     r6, r2, lbl_8051E49C@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051E4DC@sda21(r2)
	li       r31, 0
	b        lbl_80350A58

lbl_80350A44:
	mr       r4, r31
	addi     r3, r30, 0x2cc
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_80350A58:
	lwz      r0, 0x2cc(r30)
	cmpw     r31, r0
	blt      lbl_80350A44
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350A84
 * Size:	000044
 */
void PanModokiBase::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	mr       r3, r31
	bl       throwUpEatItem__Q34Game13PanModokiBase3ObjFv
	mr       r3, r31
	bl       releasePathFinder__Q34Game13PanModokiBase3ObjFv
	mr       r3, r31
	bl       killNest__Q34Game13PanModokiBase3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350AC8
 * Size:	000050
 */
void PanModokiBase::Obj::doStartMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2fc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
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
 * Address:	80350B18
 * Size:	000050
 */
void PanModokiBase::Obj::doEndMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2fc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
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
 * Address:	80350B68
 * Size:	000054
 */
void PanModokiBase::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lis      r4, 0x626F6479@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x626F6479@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	mr       r3, r31
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350BBC
 * Size:	0000AC
 */
void PanModokiBase::Obj::doFinishStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lis      r4, 0x626F6479@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x626F6479@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051E4E0@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051E490@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x20c(r31)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_80350C34
	cmpwi    r3, 2
	bne      lbl_80350C54

lbl_80350C34:
	lwz      r3, 0x380(r31)
	mr       r4, r31
	li       r5, 7
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80350C54:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350C68
 * Size:	000064
 */
void PanModokiBase::Obj::initWalkSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2f4
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2f4
	lfs      f1, lbl_8051E4D4@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051E4E4@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2f4
	lfs      f1, lbl_8051E4D4@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051E4EC@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350CCC
 * Size:	000008
 */
void PanModokiBase::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	addi     r3, r3, 0x2f4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350CD4
 * Size:	0004B4
 */
void PanModokiBase::Obj::findNextRoutePoint(bool)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	li       r0, 0
	stmw     r27, 0x6c(r1)
	mr       r28, r3
	lwz      r5, mapMgr__4Game@sda21(r13)
	lwz      r31, 8(r5)
	stb      r0, 0x31c(r3)
	lwz      r0, 0x304(r3)
	cmpwi    r0, 0
	ble      lbl_80350FC4
	clrlwi.  r0, r4, 0x18
	beq      lbl_80350FC4
	lha      r0, 0x2ea(r28)
	lha      r3, 0x2e8(r28)
	cmpw     r0, r3
	bne      lbl_80350D44
	lha      r0, 0x2e6(r28)
	cmpw     r3, r0
	bne      lbl_80350D44
	lfs      f0, 0x198(r28)
	stfs     f0, 0x2bc(r28)
	lfs      f0, 0x19c(r28)
	stfs     f0, 0x2c0(r28)
	lfs      f0, 0x1a0(r28)
	stfs     f0, 0x2c4(r28)
	b        lbl_80351174

lbl_80350D44:
	li       r5, 0
	li       r0, -1
	stw      r5, 0x40(r1)
	mr       r3, r31
	addi     r4, r1, 0x24
	stw      r5, 0x3c(r1)
	stb      r5, 0x30(r1)
	sth      r0, 0x38(r1)
	stw      r5, 0x34(r1)
	lfs      f0, 0x18c(r28)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x190(r28)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x194(r28)
	stfs     f0, 0x2c(r1)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80350FC4
	lwz      r4, 0x3c(r1)
	lha      r30, 0x2e8(r28)
	lbz      r0, 0x34(r4)
	lha      r29, 0x2ea(r28)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350E4C
	mr       r3, r31
	lha      r4, 0x36(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	bne      lbl_80350DF0
	lwz      r3, 0x40(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350DF0
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)
	lwz      r3, 0x40(r1)
	lha      r0, 0x36(r3)
	sth      r0, 0x2e8(r28)
	b        lbl_80350EA4

lbl_80350DF0:
	lwz      r4, 0x3c(r1)
	mr       r3, r31
	lha      r0, 0x36(r4)
	sth      r0, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r4, 0x40(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_80350E40
	lwz      r3, 0x40(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350E40
	lha      r0, 0x36(r3)
	sth      r0, 0x2ea(r28)
	b        lbl_80350EA4

lbl_80350E40:
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)
	b        lbl_80350EA4

lbl_80350E4C:
	lwz      r4, 0x40(r1)
	mr       r3, r31
	lha      r0, 0x36(r4)
	sth      r0, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_80350E9C
	lwz      r3, 0x3c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350E9C
	lha      r0, 0x36(r3)
	sth      r0, 0x2ea(r28)
	b        lbl_80350EA4

lbl_80350E9C:
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)

lbl_80350EA4:
	lha      r4, 0x2e8(r28)
	cmpw     r4, r30
	bne      lbl_80350F94
	lha      r0, 0x2ea(r28)
	cmpw     r0, r29
	bne      lbl_80350F94
	lfs      f1, 0x18c(r28)
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f1, 0x2bc(r28)
	lfs      f3, lbl_8051E4F4@sda21(r2)
	lfs      f1, 0x190(r28)
	stfs     f1, 0x2c0(r28)
	lfs      f1, 0x194(r28)
	stfs     f1, 0x2c4(r28)
	lfs      f1, 0x1fc(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_80350F14
	lfs      f0, lbl_8051E4CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80350F38

lbl_80350F14:
	lfs      f0, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80350F38:
	lfs      f1, 0x2bc(r28)
	lfs      f0, lbl_8051E490@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x2bc(r28)
	lfs      f1, 0x1fc(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_80350F58
	fneg     f1, f1

lbl_80350F58:
	lfs      f0, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051E4F4@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, 0x2c4(r28)
	fctiwz   f1, f1
	stfd     f1, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x2c4(r28)
	b        lbl_80351174

lbl_80350F94:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2bc(r28)
	stfs     f1, 0x2c0(r28)
	stfs     f2, 0x2c4(r28)
	b        lbl_80351174

lbl_80350FC4:
	mr       r3, r31
	lha      r4, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	bne      lbl_80351000
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x3e1
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80351000:
	mr       r4, r29
	addi     r3, r1, 8
	li       r30, 0
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	addi     r29, r1, 0x14
	b        lbl_80351088

lbl_80351024:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r27, r0
	mr       r4, r27
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80351080
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80351080
	lha      r4, 0x5c(r3)
	lha      r0, 0x38(r3)
	add      r0, r4, r0
	cmpwi    r0, 1
	ble      lbl_80351080
	sth      r27, 0(r29)
	addi     r29, r29, 2
	addi     r30, r30, 1

lbl_80351080:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_80351088:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351024
	cmpwi    r30, 0
	beq      lbl_8035113C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x5c(r1)
	xoris    r0, r30, 0x8000
	lfd      f2, lbl_8051E500@sda21(r2)
	stw      r4, 0x58(r1)
	lfs      f0, lbl_8051E4F8@sda21(r2)
	lfd      f1, 0x58(r1)
	stw      r0, 0x54(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x50(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	cmpw     r0, r30
	blt      lbl_803510F8
	addi     r0, r30, -1

lbl_803510F8:
	mr       r3, r31
	slwi     r0, r0, 1
	lwz      r12, 0(r31)
	addi     r4, r1, 0x14
	lhax     r27, r4, r0
	lwz      r12, 0x2c(r12)
	mr       r4, r27
	mtctr    r12
	bctrl
	cmpwi    r30, 1
	beq      lbl_80351130
	lha      r0, 0x2ea(r28)
	cmpw     r27, r0
	beq      lbl_8035113C

lbl_80351130:
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)
	sth      r27, 0x2e8(r28)

lbl_8035113C:
	mr       r3, r31
	lha      r4, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80351174
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2bc(r28)
	stfs     f1, 0x2c0(r28)
	stfs     f2, 0x2c4(r28)

lbl_80351174:
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351188
 * Size:	000274
 */
void PanModokiBase::Obj::isCarryToGoal(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stfd     f26, 0x30(r1)
	psq_st   f26, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lbz      r0, 0x2f0(r3)
	cmplwi   r0, 0
	bne      lbl_803511E4
	li       r3, 0
	b        lbl_803513B4

lbl_803511E4:
	lwz      r0, 0x318(r30)
	lwz      r3, 0xc0(r30)
	cmpwi    r0, 0x64
	lfs      f5, 0x384(r3)
	ble      lbl_803511FC
	lfs      f5, lbl_8051E508@sda21(r2)

lbl_803511FC:
	lfs      f4, 0x194(r30)
	fmuls    f5, f5, f5
	lfs      f0, 0x1a0(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f1, f4, f0
	lfs      f0, 0x198(r30)
	fsubs    f2, f3, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f5
	bge      lbl_80351238
	mr       r3, r30
	bl       releasePathFinder__Q34Game13PanModokiBase3ObjFv
	li       r3, 1
	b        lbl_803513B4

lbl_80351238:
	cmpwi    r0, 0x64
	lfs      f26, lbl_8051E4DC@sda21(r2)
	lfs      f31, lbl_8051E4D8@sda21(r2)
	ble      lbl_80351250
	lfs      f26, lbl_8051E508@sda21(r2)
	lfs      f31, lbl_8051E50C@sda21(r2)

lbl_80351250:
	lfs      f0, 0x2c4(r30)
	fmuls    f26, f26, f26
	lfs      f1, 0x2bc(r30)
	fmuls    f31, f31, f31
	fsubs    f0, f4, f0
	mr       r3, r30
	fsubs    f1, f3, f1
	fmuls    f0, f0, f0
	fmadds   f27, f1, f1, f0
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r31, r3, r3
	lfs      f1, lbl_8051E510@sda21(r2)
	beq      lbl_803512D4
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f28, 0x2c4(r30)
	lwz      r12, 8(r12)
	lfs      f29, 0x2bc(r30)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f30, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f30, f28
	lfs      f1, 0x14(r1)
	fsubs    f1, f1, f29
	fmuls    f0, f0, f0
	fmadds   f1, f1, f1, f0

lbl_803512D4:
	fcmpo    cr0, f27, f26
	blt      lbl_803512F0
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803513B0
	fcmpo    cr0, f1, f31
	bge      lbl_803513B0

lbl_803512F0:
	li       r0, 0
	stw      r0, 0x318(r30)
	lha      r3, 0x2e8(r30)
	lha      r0, 0x2e6(r30)
	cmpw     r3, r0
	bne      lbl_80351330
	lfs      f0, 0x198(r30)
	fcmpo    cr0, f1, f31
	stfs     f0, 0x2bc(r30)
	lfs      f0, 0x19c(r30)
	stfs     f0, 0x2c0(r30)
	lfs      f0, 0x1a0(r30)
	stfs     f0, 0x2c4(r30)
	bge      lbl_803513B0
	li       r3, 1
	b        lbl_803513B4

lbl_80351330:
	lwz      r4, 0x384(r30)
	b        lbl_803513A8

lbl_80351338:
	lha      r0, 0x20(r4)
	cmpw     r0, r3
	bne      lbl_803513A4
	sth      r3, 0x2ea(r30)
	lwz      r3, 0xc(r4)
	cmplwi   r3, 0
	beq      lbl_80351360
	lha      r0, 0x20(r3)
	sth      r0, 0x2e8(r30)
	b        lbl_80351368

lbl_80351360:
	lha      r0, 0x2e6(r30)
	sth      r0, 0x2e8(r30)

lbl_80351368:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x2e8(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	li       r3, 0
	stfs     f0, 0x2bc(r30)
	stfs     f1, 0x2c0(r30)
	stfs     f2, 0x2c4(r30)
	b        lbl_803513B4

lbl_803513A4:
	lwz      r4, 0xc(r4)

lbl_803513A8:
	cmplwi   r4, 0
	bne      lbl_80351338

lbl_803513B0:
	li       r3, 0

lbl_803513B4:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	psq_l    f26, 56(r1), 0, qr0
	lfd      f26, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803513FC
 * Size:	0002CC
 */
void PanModokiBase::Obj::walkFunc(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stfd     f28, 0x20(r1)
	psq_st   f28, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lwz      r12, 0x258(r12)
	lfs      f31, 0x2e4(r4)
	lfs      f30, 0x334(r4)
	lfs      f29, 0x30c(r4)
	lfs      f28, lbl_8051E4F4@sda21(r2)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x28
	bne      lbl_80351460
	lfs      f28, lbl_8051E514@sda21(r2)

lbl_80351460:
	lfs      f1, 0x2bc(r31)
	lfs      f0, 0x18c(r31)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	bge      lbl_803514CC
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x194(r31)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	bge      lbl_803514CC
	lwz      r3, 0x318(r31)
	addi     r0, r3, 1
	stw      r0, 0x318(r31)
	lwz      r0, 0x318(r31)
	cmpwi    r0, 0x64
	ble      lbl_803514B8
	lfs      f0, lbl_8051E4D0@sda21(r2)
	fmuls    f31, f31, f0

lbl_803514B8:
	cmpwi    r0, 0xc8
	ble      lbl_803514D4
	li       r0, 0
	stw      r0, 0x318(r31)
	b        lbl_803514D4

lbl_803514CC:
	li       r0, 0
	stw      r0, 0x318(r31)

lbl_803514D4:
	lwz      r0, 0x304(r31)
	cmpwi    r0, 0
	bne      lbl_80351528
	mr       r3, r31
	bl       findNearestPellet__Q34Game13PanModokiBase3ObjFv
	stw      r3, 0x230(r31)
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_80351534
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_80351534

lbl_80351528:
	lwz      r3, 0xc0(r31)
	lfs      f30, 0x894(r3)
	lfs      f29, 0x86c(r3)

lbl_80351534:
	fmr      f1, f31
	mr       r3, r31
	fmr      f2, f29
	addi     r4, r31, 0x2bc
	fmr      f3, f30
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lwz
r0, 0xc8(r31) cmplwi   r0, 0 beq      lbl_80351608 lfs      f1, 0xcc(r31) lfs
f0, lbl_8051E4B8@sda21(r2) fcmpo    cr0, f1, f0 ble      lbl_80351578 lfs f0,
lbl_8051E518@sda21(r2) fneg     f0, f0 stfs     f0, 0x320(r31) b lbl_803515A0

lbl_80351578:
	lfs      f0, lbl_8051E51C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80351590
	lfs      f0, lbl_8051E518@sda21(r2)
	stfs     f0, 0x320(r31)
	b        lbl_803515A0

lbl_80351590:
	lfs      f1, 0x320(r31)
	lfs      f0, lbl_8051E520@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x320(r31)

lbl_803515A0:
	lfs      f2, 0x1c8(r31)
	lfs      f1, 0x320(r31)
	lfs      f0, lbl_8051E4B8@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x1c8(r31)
	lfs      f1, 0xd4(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_803515D0
	lfs      f0, lbl_8051E518@sda21(r2)
	fneg     f0, f0
	stfs     f0, 0x328(r31)
	b        lbl_803515F8

lbl_803515D0:
	lfs      f0, lbl_8051E51C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803515E8
	lfs      f0, lbl_8051E518@sda21(r2)
	stfs     f0, 0x328(r31)
	b        lbl_803515F8

lbl_803515E8:
	lfs      f1, 0x328(r31)
	lfs      f0, lbl_8051E520@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x328(r31)

lbl_803515F8:
	lfs      f1, 0x1d0(r31)
	lfs      f0, 0x328(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x1d0(r31)

lbl_80351608:
	lwz      r0, 0x304(r31)
	cmpwi    r0, 0
	bne      lbl_80351694
	lwz      r3, 0x314(r31)
	addi     r0, r3, 1
	stw      r0, 0x314(r31)
	lwz      r0, 0x314(r31)
	cmpwi    r0, 0x3c
	ble      lbl_80351694
	lfs      f1, 0x194(r31)
	lfs      f0, 0x310(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x308(r31)
	lfs      f0, lbl_8051E4F4@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80351674
	li       r3, 0x78
	li       r0, 0
	stw      r3, 0x304(r31)
	mr       r3, r31
	li       r4, 1
	stw      r0, 0x230(r31)
	bl       findNextRoutePoint__Q34Game13PanModokiBase3ObjFb

lbl_80351674:
	lfs      f0, 0x18c(r31)
	li       r0, 0
	stfs     f0, 0x308(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x30c(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x310(r31)
	stw      r0, 0x314(r31)

lbl_80351694:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	psq_l    f28, 40(r1), 0, qr0
	lfd      f28, 0x20(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803516C8
 * Size:	000184
 */
void PanModokiBase::Obj::isReachToGoal(float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lfs      f0, lbl_8051E490@sda21(r2)
	lfs      f2, 0x200(r3)
	fmr      f30, f1
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80351710
	li       r3, 0
	b        lbl_80351824

lbl_80351710:
	lwz      r31, 0x230(r30)
	cmplwi   r31, 0
	beq      lbl_8035174C
	bne      lbl_8035173C
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x4b0
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8035173C:
	lwz      r3, 0x35c(r31)
	lfs      f0, 0xa0(r3)
	fadds    f30, f30, f0
	b        lbl_80351754

lbl_8035174C:
	lfs      f0, lbl_8051E4D4@sda21(r2)
	fmuls    f30, f30, f0

lbl_80351754:
	lfs      f1, 0x194(r30)
	fmuls    f30, f30, f30
	lfs      f0, 0x2c4(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x2bc(r30)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_80351820
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	bne      lbl_80351810
	lwz      r4, 0x230(r30)
	cmplwi   r4, 0
	beq      lbl_80351810
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x230(r30)
	addi     r3, r1, 0x14
	lfs      f31, 0x10(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x194(r30)
	lfs      f2, 0x14(r1)
	fsubs    f1, f0, f31
	lfs      f0, 0x18c(r30)
	fsubs    f2, f0, f2
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_80351810
	lwz      r3, 0x380(r30)
	mr       r4, r30
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80351810:
	li       r0, 0
	li       r3, 1
	stw      r0, 0x318(r30)
	b        lbl_80351824

lbl_80351820:
	li       r3, 0

lbl_80351824:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035184C
 * Size:	000074
 */
void PanModokiBase::Obj::canBack(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	bne      lbl_80351874
	li       r3, 0
	b        lbl_803518AC

lbl_80351874:
	mr       r3, r31
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	lwz      r3, 0x334(r3)
	li       r4, 2
	lfs      f1, 0x37c(r31)
	bl       pullable__Q24Game11PelletCarryFUsf
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r3, r31

lbl_803518AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803518C0
 * Size:	000344
 */
void PanModokiBase::Obj::findNearestPellet(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r30, r3
	lfs      f1, lbl_8051E524@sda21(r2)
	lwz      r3, 0xc0(r3)
	li       r31, 0
	lfs      f2, lbl_8051E4C4@sda21(r2)
	lfs      f0, 0x49c(r3)
	lfs      f3, 0x44c(r3)
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	fmuls    f30, f2, f1
	bge      lbl_80351930
	lis      r3, __float_max@ha
	lfs      f3, __float_max@l(r3)
	b        lbl_80351934

lbl_80351930:
	fmuls    f3, f3, f3

lbl_80351934:
	fmr      f31, f3
	addi     r3, r1, 0x50
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x50
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_80351BB8

lbl_8035194C:
	addi     r3, r1, 0x50
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80351BB0
	lwz      r0, 0xb8(r28)
	cmplwi   r0, 0
	bne      lbl_80351BB0
	mr       r3, r30
	mr       r4, r28
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r3, r30
	lwz      r4, 0x35c(r28)
	lwz      r12, 0(r30)
	lwz      r5, 0xc0(r30)
	lwz      r12, 0x308(r12)
	lwz      r4, 0x120(r4)
	lwz      r5, 0x984(r5)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r4, r28
	addi     r3, r1, 0x44
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x48(r1)
	mr       r3, r28
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f0, lbl_8051E4D0@sda21(r2)
	lfs      f2, 0x190(r30)
	fnmsubs  f1, f0, f1, f29
	lfs      f0, lbl_8051E518@sda21(r2)
	fsubs    f1, f1, f2
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_80351BB0
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f29, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f30
	cror     2, 0, 2
	bne      lbl_80351BB0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80351B68
	cmpwi    r29, 0
	beq      lbl_80351B40
	cmpwi    r29, 1
	bne      lbl_80351B68

lbl_80351B40:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_8051E528@sda21
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_80351BB0

lbl_80351B68:
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r30)
	lfs      f0, 0x40(r1)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x38(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80351BB0
	mr       r31, r28
	fmr      f31, f0

lbl_80351BB0:
	addi     r3, r1, 0x50
	bl       next__Q24Game14PelletIteratorFv

lbl_80351BB8:
	addi     r3, r1, 0x50
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035194C
	mr       r3, r31
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0xa4(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351C04
 * Size:	000068
 */
void PanModokiBase::Obj::getCarryTarget(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80351C2C
	li       r3, 0
	b        lbl_80351C58

lbl_80351C2C:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351C54
	lwz      r3, 0x230(r31)
	lwz      r3, 0x17c(r3)
	lwz      r3, 4(r3)
	b        lbl_80351C58

lbl_80351C54:
	lwz      r3, 0x230(r31)

lbl_80351C58:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351C6C
 * Size:	0001E4
 */
void PanModokiBase::Obj::releaseCarryTarget(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80351C98
	li       r31, 0
	b        lbl_80351CC4

lbl_80351C98:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351CC0
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_80351CC4

lbl_80351CC0:
	lwz      r31, 0x230(r30)

lbl_80351CC4:
	cmplwi   r31, 0
	beq      lbl_80351E30
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_80351D38
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	mr       r3, r31
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x20
	fneg     f1, f0
	stfs     f0, 0x20(r1)
	lfs      f3, 0xc(r1)
	fneg     f0, f2
	stfs     f2, 0x28(r1)
	stfs     f3, 0x24(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_80351E1C

lbl_80351D38:
	lwz      r0, 0xb8(r31)
	cmplwi   r0, 0
	beq      lbl_80351E1C
	mr       r3, r31
	bl       endCapture__Q24Game8CreatureFv
	lfs      f3, 0x1fc(r30)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80351D64
	fneg     f1, f3

lbl_80351D64:
	lfs      f2, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E490@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f5, 4(r3)
	bge      lbl_80351DBC
	lfs      f0, lbl_8051E4CC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f4, f0
	b        lbl_80351DD4

lbl_80351DBC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r4, r0

lbl_80351DD4:
	frsp     f2, f4
	lfs      f1, lbl_8051E4D8@sda21(r2)
	lfs      f3, lbl_8051E490@sda21(r2)
	mr       r3, r31
	fmuls    f0, f5, f1
	stfs     f5, 0x1c(r1)
	fmuls    f2, f2, f1
	stfs     f4, 0x14(r1)
	lfs      f1, lbl_8051E4F4@sda21(r2)
	addi     r4, r1, 0x14
	stfs     f3, 0x18(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80351E1C:
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 0x334(r31)
	li       r4, 2
	bl       giveup__Q24Game11PelletCarryFUs

lbl_80351E30:
	li       r0, 0
	stw      r0, 0x230(r30)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351E50
 * Size:	000284
 */
void PanModokiBase::Obj::checkNearHomeGraphIndex(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r30, r3
	lfs      f0, lbl_8051E518@sda21(r2)
	lfs      f1, 0x18c(r3)
	li       r0, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x40
	stfs     f1, 0x40(r1)
	lfs      f1, 0x190(r30)
	stfs     f1, 0x44(r1)
	lfs      f1, 0x194(r30)
	stfs     f1, 0x48(r1)
	stw      r0, 0x4c(r1)
	stb      r0, 0x50(r1)
	stfs     f0, 0x54(r1)
	lwz      r31, 8(r3)
	mr       r3, r31
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	or.      r29, r3, r3
	bne      lbl_80351ED8
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x559
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80351ED8:
	lha      r0, 0x36(r29)
	mr       r3, r31
	sth      r0, 0x2e6(r30)
	sth      r0, 0x2ea(r30)
	sth      r0, 0x2e8(r30)
	lwz      r12, 0(r31)
	lha      r4, 0x2e8(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	bne      lbl_80351F24
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x55e
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80351F24:
	lfs      f1, 0x50(r29)
	li       r5, 0
	lfs      f2, 0x54(r29)
	li       r0, -1
	lfs      f0, 0x4c(r29)
	mr       r3, r31
	addi     r4, r1, 0x20
	stfs     f0, 0x2bc(r30)
	stfs     f1, 0x2c0(r30)
	stfs     f2, 0x2c4(r30)
	stw      r5, 0x3c(r1)
	stw      r5, 0x38(r1)
	stb      r5, 0x2c(r1)
	sth      r0, 0x34(r1)
	stw      r5, 0x30(r1)
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x28(r1)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351FE0
	lwz      r3, 0x38(r1)
	lbz      r0, 0x34(r3)
	lha      r3, 0x36(r3)
	clrlwi.  r0, r0, 0x1f
	mr       r0, r3
	beq      lbl_80351FA4
	lwz      r3, 0x3c(r1)
	lha      r0, 0x36(r3)

lbl_80351FA4:
	sth      r0, 0x2e6(r30)
	mr       r3, r31
	sth      r0, 0x2ea(r30)
	sth      r0, 0x2e8(r30)
	lwz      r12, 0(r31)
	lha      r4, 0x2e8(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2bc(r30)
	stfs     f1, 0x2c0(r30)
	stfs     f2, 0x2c4(r30)

lbl_80351FE0:
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2bc(r30)
	lfs      f0, 0x2c4(r30)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f31, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, lbl_8051E530@sda21(r2)
	fmuls    f31, f1, f0
	fabs     f0, f31
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80352088
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80352084
	fmr      f31, f2
	b        lbl_80352088

lbl_80352084:
	fneg     f31, f2

lbl_80352088:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void PanModokiBase::Obj::clearCarryVelocity(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803520D4
 * Size:	000518
 */
void PanModokiBase::Obj::carryTarget(float)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r3
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x230(r3)
	lfs      f0, 0x8bc(r4)
	cmplwi   r3, 0
	lfs      f30, 0x30c(r4)
	fmuls    f29, f1, f0
	lfs      f31, 0x334(r4)
	bne      lbl_8035212C
	li       r31, 0
	b        lbl_80352158

lbl_8035212C:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80352154
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_80352158

lbl_80352154:
	lwz      r31, 0x230(r30)

lbl_80352158:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_80352210
	lfs      f0, lbl_8051E4D0@sda21(r2)
	cmplwi   r31, 0
	fmuls    f30, f30, f0
	beq      lbl_80352210
	mr       r3, r31
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 1
	beq      lbl_80352210
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x5c(r1)
	mr       r4, r31
	addi     r3, r1, 0x50
	stfs     f0, 0x2bc(r30)
	lfs      f0, 0x60(r1)
	stfs     f0, 0x2c0(r30)
	lfs      f0, 0x64(r1)
	stfs     f0, 0x2c4(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x50(r1)
	mr       r4, r31
	lfs      f1, lbl_8051E518@sda21(r2)
	addi     r3, r1, 0x44
	lfs      f0, 0x2bc(r30)
	fnmsubs  f0, f1, f2, f0
	stfs     f0, 0x2bc(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r1)
	lfs      f1, lbl_8051E518@sda21(r2)
	lfs      f0, 0x2c4(r30)
	fnmsubs  f0, f1, f2, f0
	stfs     f0, 0x2c4(r30)

lbl_80352210:
	lfs      f1, 0x2bc(r30)
	lfs      f0, lbl_8051E534@sda21(r2)
	stfs     f1, 0x74(r1)
	lfs      f1, 0x2c0(r30)
	stfs     f1, 0x78(r1)
	lfs      f1, 0x2c4(r30)
	stfs     f1, 0x7c(r1)
	lfs      f2, 0x194(r30)
	lfs      f1, 0x2c4(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f2, f2, f1
	lfs      f1, 0x2bc(r30)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80352260
	lwz      r3, 0xc0(r30)
	lfs      f30, 0x86c(r3)
	lfs      f31, 0x894(r3)

lbl_80352260:
	cmplwi   r31, 0
	beq      lbl_803525B8
	lfs      f0, 0x2c8(r30)
	fmr      f1, f29
	fmr      f2, f30
	mr       r3, r30
	fmr      f3, f31
	stfs     f0, 0x1fc(r30)
	addi     r4, r1, 0x74
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lfs
f0, 0x1fc(r30) stfs     f0, 0x2c8(r30) lwz      r3, 0x230(r30) lfs      f31,
0x1d4(r30) cmplwi   r3, 0 lfs      f30, 0x1dc(r30) bne      lbl_803522AC li r4,
0 b        lbl_803522D8

lbl_803522AC:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803522D4
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r4, 4(r3)
	b        lbl_803522D8

lbl_803522D4:
	lwz      r4, 0x230(r30)

lbl_803522D8:
	lwz      r12, 0(r4)
	addi     r3, r1, 0x38
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f6, 0x38(r1)
	lfs      f5, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fsubs    f3, f31, f6
	stfs     f6, 0x68(r1)
	fsubs    f8, f30, f5
	lwz      r3, sys@sda21(r13)
	stfs     f2, 0x6c(r1)
	lfs      f0, lbl_8051E538@sda21(r2)
	stfs     f5, 0x70(r1)
	lfs      f4, lbl_8051E490@sda21(r2)
	lfs      f1, 0x54(r3)
	fsubs    f7, f4, f2
	fdivs    f0, f1, f0
	fmuls    f1, f7, f0
	fmuls    f3, f3, f0
	fmuls    f0, f8, f0
	fadds    f2, f2, f1
	fadds    f3, f6, f3
	fadds    f1, f5, f0
	fadds    f0, f2, f4
	stfs     f2, 0x6c(r1)
	stfs     f3, 0x68(r1)
	stfs     f1, 0x70(r1)
	stfs     f0, 0x6c(r1)
	stfs     f31, 0x68(r1)
	stfs     f30, 0x70(r1)
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x99a(r3)
	cmplwi   r0, 0
	beq      lbl_803524C8
	cmplwi   r31, 0
	beq      lbl_803524C8
	lbz      r0, 0x31c(r30)
	cmplwi   r0, 0
	bne      lbl_803523EC
	lwz      r3, 0x314(r30)
	addi     r0, r3, 1
	stw      r0, 0x314(r30)
	lwz      r0, 0x314(r30)
	cmpwi    r0, 0x5a
	ble      lbl_803523EC
	lfs      f1, 0x194(r30)
	lfs      f0, 0x310(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f3, f1, f0
	lfs      f1, 0x308(r30)
	lfs      f0, lbl_8051E4F4@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803523CC
	li       r0, 1
	stb      r0, 0x31c(r30)
	b        lbl_803523D4

lbl_803523CC:
	li       r0, 0
	stw      r0, 0x314(r30)

lbl_803523D4:
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x308(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x30c(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x310(r30)

lbl_803523EC:
	lbz      r0, 0x31c(r30)
	cmplwi   r0, 0
	bne      lbl_8035248C
	lfs      f1, 0xcc(r30)
	lfs      f0, lbl_8051E4B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80352418
	lfs      f0, lbl_8051E518@sda21(r2)
	fneg     f0, f0
	stfs     f0, 0x320(r30)
	b        lbl_80352440

lbl_80352418:
	lfs      f0, lbl_8051E51C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80352430
	lfs      f0, lbl_8051E518@sda21(r2)
	stfs     f0, 0x320(r30)
	b        lbl_80352440

lbl_80352430:
	lfs      f1, 0x320(r30)
	lfs      f0, lbl_8051E53C@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x320(r30)

lbl_80352440:
	lfs      f1, 0xd4(r30)
	lfs      f0, lbl_8051E4B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80352460
	lfs      f0, lbl_8051E518@sda21(r2)
	fneg     f0, f0
	stfs     f0, 0x328(r30)
	b        lbl_803524A8

lbl_80352460:
	lfs      f0, lbl_8051E51C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80352478
	lfs      f0, lbl_8051E518@sda21(r2)
	stfs     f0, 0x328(r30)
	b        lbl_803524A8

lbl_80352478:
	lfs      f1, 0x328(r30)
	lfs      f0, lbl_8051E53C@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x328(r30)
	b        lbl_803524A8

lbl_8035248C:
	lfs      f0, 0x68(r1)
	lfs      f1, lbl_8051E4D0@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x320(r30)
	lfs      f0, 0x70(r1)
	fmuls    f0, f0, f1
	stfs     f0, 0x328(r30)

lbl_803524A8:
	lfs      f2, 0x68(r1)
	lfs      f0, 0x320(r30)
	lfs      f1, 0x70(r1)
	fadds    f0, f2, f0
	stfs     f0, 0x68(r1)
	lfs      f0, 0x328(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x70(r1)

lbl_803524C8:
	lwz      r3, 0x334(r31)
	addi     r5, r1, 0x68
	lfs      f1, 0x37c(r30)
	li       r4, 2
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f29, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	lfs      f0, 0x1fc(r30)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	lfs      f2, 0x2c8(r30)
	lfs      f1, 0x2dc(r30)
	lfs      f0, 0x2e0(r30)
	fadds    f1, f2, f1
	fsubs    f1, f1, f0
	bl       roundAng__Ff
	mr       r3, r31
	bl       setPanModokiRotation__Q24Game6PelletFf

lbl_803525B8:
	li       r3, 0
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803525EC
 * Size:	000050
 */
void PanModokiBase::Obj::changeCarryDir(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80352614
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x2c8(r31)
	b        lbl_80352628

lbl_80352614:
	lfs      f1, lbl_8051E4C4@sda21(r2)
	lfs      f0, 0x1fc(r31)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	stfs     f1, 0x2c8(r31)

lbl_80352628:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035263C
 * Size:	0001B4
 */
void PanModokiBase::Obj::setCarryDir(bool)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	clrlwi.  r0, r4, 0x18
	mr       r31, r4
	mr       r29, r3
	beq      lbl_80352678
	lfs      f0, 0x1fc(r29)
	stfs     f0, 0x2c8(r29)
	b        lbl_8035268C

lbl_80352678:
	lfs      f1, lbl_8051E4C4@sda21(r2)
	lfs      f0, 0x1fc(r29)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	stfs     f1, 0x2c8(r29)

lbl_8035268C:
	lwz      r3, 0x230(r29)
	cmplwi   r3, 0
	bne      lbl_803526A0
	li       r30, 0
	b        lbl_803526CC

lbl_803526A0:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803526C8
	lwz      r3, 0x230(r29)
	lwz      r3, 0x17c(r3)
	lwz      r30, 4(r3)
	b        lbl_803526CC

lbl_803526C8:
	lwz      r30, 0x230(r29)

lbl_803526CC:
	cmplwi   r30, 0
	beq      lbl_803527CC
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f1, 0x1c(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x20
	lfs      f0, 0x194(r29)
	lwz      r12, 8(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	lfs      f1, 0x18c(r29)
	addi     r3, r30, 0x138
	lfs      f2, 0x20(r1)
	addi     r4, r1, 0x38
	lfs      f0, lbl_8051E490@sda21(r2)
	fsubs    f1, f1, f2
	stfs     f31, 0x34(r1)
	stfs     f0, 0x30(r1)
	stfs     f1, 0x2c(r1)
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x34(r1)
	bl       PSMTXInverse
	addi     r3, r1, 0x38
	addi     r4, r1, 0x2c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 8(r1)
	lfs      f2, 0x10(r1)
	bl       atan2
	frsp     f1, f1
	lfs      f0, lbl_8051E490@sda21(r2)
	clrlwi.  r0, r31, 0x18
	stfs     f1, 0x2e0(r29)
	stfs     f0, 0x2dc(r29)
	beq      lbl_8035278C
	lfs      f0, lbl_8051E4C4@sda21(r2)
	stfs     f0, 0x2dc(r29)

lbl_8035278C:
	mr       r3, r30
	bl       getPelletConfigMax__Q24Game6PelletFv
	mr       r31, r3
	mr       r3, r30
	bl       getPelletConfigMin__Q24Game6PelletFv
	add      r3, r3, r31
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 0x68(r1)
	lfd      f2, lbl_8051E500@sda21(r2)
	stw      r3, 0x6c(r1)
	lfs      f0, lbl_8051E4D0@sda21(r2)
	lfd      f1, 0x68(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x37c(r29)

lbl_803527CC:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803527F0
 * Size:	000384
 */
void PanModokiBase::Obj::endCarry(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	stw      r29, 0x54(r1)
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80352820
	li       r31, 0
	b        lbl_8035284C

lbl_80352820:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80352848
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_8035284C

lbl_80352848:
	lwz      r31, 0x230(r30)

lbl_8035284C:
	mr       r3, r30
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	cmplwi   r31, 0
	beq      lbl_80352B58
	mr       r4, r31
	addi     r3, r1, 0x30
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x30
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_803528A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352A5C

lbl_803528A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352914

lbl_803528C0:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80352A5C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80352914:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803528C0
	b        lbl_80352A5C

lbl_80352934:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803529A0
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractKill@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 0
	stw      r4, 0x14(r1)
	addi     r5, r3, __vt__Q24Game12InteractKill@l
	mr       r3, r29
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803529A0:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_803529CC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352A5C

lbl_803529CC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352A40

lbl_803529EC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80352A5C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80352A40:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803529EC

lbl_80352A5C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80352934
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 0x334(r31)
	li       r4, 2
	bl       giveup__Q24Game11PelletCarryFUs
	mr       r3, r31
	li       r29, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_80352B08
	lwz      r0, 0x388(r30)
	slwi     r0, r0, 2
	add      r3, r30, r0
	stw      r31, 0x38c(r3)
	lwz      r0, 0x388(r30)
	cmpwi    r0, 0
	bne      lbl_80352AFC
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x378(r30)
	mr       r3, r31
	addi     r4, r4, 0x2bc
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	li       r29, 0

lbl_80352AFC:
	lwz      r3, 0x388(r30)
	addi     r0, r3, 1
	stw      r0, 0x388(r30)

lbl_80352B08:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80352B44
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	lis      r3, __vt__Q24Game13PelletKillArg@ha
	addi     r0, r4, __vt__Q24Game15CreatureKillArg@l
	li       r4, 0
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q24Game13PelletKillArg@l
	li       r0, 1
	mr       r3, r31
	stw      r4, 0xc(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stb      r0, 0x10(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80352B44:
	li       r0, 0
	addi     r3, r1, 0x30
	stw      r0, 0x230(r30)
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_80352B58:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80352B74
 * Size:	0000A0
 */
void PanModokiBase::Obj::checkSucked(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051E490@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_80352C00
	lwz      r3, 0x230(r31)
	cmplwi   r3, 0
	beq      lbl_80352C00
	bne      lbl_80352BB4
	li       r3, 0
	b        lbl_80352BE0

lbl_80352BB4:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80352BDC
	lwz      r3, 0x230(r31)
	lwz      r3, 0x17c(r3)
	lwz      r3, 4(r3)
	b        lbl_80352BE0

lbl_80352BDC:
	lwz      r3, 0x230(r31)

lbl_80352BE0:
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 1
	bne      lbl_80352C00
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	bl       fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv

lbl_80352C00:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80352C14
 * Size:	0000BC
 */
void PanModokiBase::Obj::suckFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80352C40
	li       r31, 0
	b        lbl_80352C6C

lbl_80352C40:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80352C68
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_80352C6C

lbl_80352C68:
	lwz      r31, 0x230(r30)

lbl_80352C6C:
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	cmplwi   r31, 0
	beq      lbl_80352C88
	lwz      r3, 0x334(r31)
	li       r4, 2
	bl       giveup__Q24Game11PelletCarryFUs

lbl_80352C88:
	lwz      r3, 0x380(r30)
	mr       r4, r30
	li       r5, 9
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x230(r30)
	bl       fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
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
 * Address:	80352CD0
 * Size:	000118
 */
void PanModokiBase::Obj::isEndPathFinder(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2f0(r3)
	cmplwi   r0, 0
	beq      lbl_80352CF8
	li       r3, 1
	b        lbl_80352DD4

lbl_80352CF8:
	lwz      r0, testPathfinder__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80352D20
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x6ac
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80352D20:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	lwz      r4, 0x2ec(r31)
	bl       check__Q24Game10PathfinderFUl
	cmpwi    r3, 2
	beq      lbl_80352D74
	bge      lbl_80352D48
	cmpwi    r3, 0
	beq      lbl_80352D54
	bge      lbl_80352D84
	b        lbl_80352DD0

lbl_80352D48:
	cmpwi    r3, 4
	bge      lbl_80352DD0
	b        lbl_80352DC0

lbl_80352D54:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	addi     r5, r31, 0x384
	lwz      r4, 0x2ec(r31)
	bl       makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
	li       r0, 1
	li       r3, 1
	stb      r0, 0x2f0(r31)
	b        lbl_80352DD4

lbl_80352D74:
	li       r0, 0
	li       r3, 0
	stb      r0, 0x2f0(r31)
	b        lbl_80352DD4

lbl_80352D84:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_80352DA4
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_80352DA4:
	mr       r3, r31
	li       r4, 1
	bl       setPathFinder__Q34Game13PanModokiBase3ObjFb
	li       r0, 0
	li       r3, 0
	stb      r0, 0x2f0(r31)
	b        lbl_80352DD4

lbl_80352DC0:
	li       r0, 0
	li       r3, 0
	stb      r0, 0x2f0(r31)
	b        lbl_80352DD4

lbl_80352DD0:
	li       r3, 0

lbl_80352DD4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80352DE8
 * Size:	0002BC
 */
void PanModokiBase::Obj::setPathFinder(bool)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r28, r3
	mr       r29, r4
	bl       releasePathFinder__Q34Game13PanModokiBase3ObjFv
	lfs      f0, lbl_8051E490@sda21(r2)
	li       r4, 0
	li       r0, -1
	stfs     f0, 0x320(r28)
	stfs     f0, 0x324(r28)
	stfs     f0, 0x328(r28)
	stw      r4, 0x2c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r4, 0x28(r1)
	stb      r4, 0x1c(r1)
	sth      r0, 0x24(r1)
	stw      r4, 0x20(r1)
	lfs      f0, 0x18c(r28)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x190(r28)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x194(r28)
	stfs     f0, 0x18(r1)
	lwz      r30, 8(r3)
	cmplwi   r30, 0
	bne      lbl_80352E84
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x6dc
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80352E84:
	mr       r3, r30
	addi     r4, r1, 0x10
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353064
	lwz      r3, 0x28(r1)
	lwz      r4, 0x2c(r1)
	lfs      f3, 0x1a0(r28)
	lfs      f1, 0x54(r4)
	lfs      f0, 0x54(r3)
	fsubs    f4, f1, f3
	lfs      f2, 0x4c(r4)
	fsubs    f3, f0, f3
	lfs      f6, 0x198(r28)
	lfs      f1, 0x4c(r3)
	fsubs    f5, f2, f6
	fmuls    f0, f4, f4
	lha      r0, 0x36(r3)
	fsubs    f2, f1, f6
	lha      r5, 0x36(r4)
	fmuls    f1, f3, f3
	fmadds   f0, f5, f5, f0
	lfs      f31, 0x50(r3)
	mr       r31, r0
	fmadds   f1, f2, f2, f1
	lfs      f30, 0x50(r4)
	mr       r27, r5
	fcmpo    cr0, f1, f0
	ble      lbl_80352F00
	mr       r27, r0
	mr       r31, r5

lbl_80352F00:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80352F28
	mr       r31, r27

lbl_80352F28:
	mr       r3, r30
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r30)
	lha      r4, 0x36(r4)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80352FD4
	mr       r3, r30
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r30)
	lha      r4, 0x36(r4)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80352FD4
	lwz      r3, 0x28(r1)
	extsh    r4, r31
	lha      r0, 0x36(r3)
	cmpw     r4, r0
	bne      lbl_80352FB4
	lfs      f1, 0x190(r28)
	lfs      f0, lbl_8051E4A8@sda21(r2)
	fsubs    f1, f31, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80352FD4
	lwz      r3, 0x2c(r1)
	lha      r31, 0x36(r3)
	b        lbl_80352FD4

lbl_80352FB4:
	lfs      f1, 0x190(r28)
	lfs      f0, lbl_8051E4A8@sda21(r2)
	fsubs    f1, f30, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80352FD4
	mr       r31, r0

lbl_80352FD4:
	lha      r4, 0x2e8(r28)
	clrlwi   r3, r29, 0x18
	neg      r0, r3
	sth      r4, 0x2ea(r28)
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	sth      r31, 0x2e8(r28)
	addi     r29, r3, 0xc3
	lwz      r4, 0x2ec(r28)
	cmplwi   r4, 0
	beq      lbl_80353008
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_80353008:
	lha      r5, 0x2e6(r28)
	addi     r4, r1, 8
	lha      r0, 0x2e8(r28)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r29, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x2ec(r28)
	mr       r3, r30
	lwz      r12, 0(r30)
	lha      r4, 0x2e8(r28)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	li       r3, 1
	stfs     f0, 0x2bc(r28)
	stfs     f1, 0x2c0(r28)
	stfs     f2, 0x2c4(r28)
	b        lbl_80353080

lbl_80353064:
	lis      r3, lbl_80490EF8@ha
	li       r4, 0x712
	addi     r3, r3, lbl_80490EF8@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80353080:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803530A4
 * Size:	000044
 */
void PanModokiBase::Obj::releasePathFinder(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stb      r0, 0x2f0(r3)
	lwz      r0, testPathfinder__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803530D8
	lwz      r4, 0x2ec(r3)
	cmplwi   r4, 0
	beq      lbl_803530D8
	mr       r3, r0
	bl       release__Q24Game10PathfinderFUl

lbl_803530D8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803530E8
 * Size:	000020
 */
void PanModokiBase::Obj::killNest(void)
{
	/*
	lwz      r4, 0x378(r3)
	cmplwi   r4, 0
	beq      lbl_803530FC
	li       r0, 1
	stw      r0, 0x2f0(r4)

lbl_803530FC:
	li       r0, 0
	stw      r0, 0x378(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353108
 * Size:	000324
 */
void PanModokiBase::Obj::isTargetable(Game::Pellet*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r5, gameSystem__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_80353150
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	bne      lbl_80353150
	lbz      r0, 0x32c(r31)
	cmplwi   r0, 3
	bne      lbl_80353150
	li       r3, 0
	b        lbl_80353414

lbl_80353150:
	cmplwi   r31, 0
	beq      lbl_80353410
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	blt      lbl_8035318C
	lwz      r0, 0x388(r30)
	cmpwi    r0, 0xf
	blt      lbl_8035318C
	li       r3, 0
	b        lbl_80353414

lbl_8035318C:
	mr       r3, r31
	bl       panmodokiCarryable__Q24Game6PelletFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803531A4
	li       r3, 0
	b        lbl_80353414

lbl_803531A4:
	mr       r4, r31
	addi     r3, r1, 0x18
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x18
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803531F0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80353378

lbl_803531F0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8035325C

lbl_80353208:
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
	bne      lbl_80353378
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8035325C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353208
	b        lbl_80353378

lbl_8035327C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803532BC
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	li       r3, 0
	b        lbl_80353414

lbl_803532BC:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803532E8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80353378

lbl_803532E8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8035335C

lbl_80353308:
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
	bne      lbl_80353378
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8035335C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353308

lbl_80353378:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8035327C
	mr       r3, r31
	bl       getPelletConfigMax__Q24Game6PelletFv
	mr       r30, r3
	mr       r3, r31
	bl       getPelletConfigMin__Q24Game6PelletFv
	add      r3, r3, r30
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 0x38(r1)
	lfd      f2, lbl_8051E500@sda21(r2)
	li       r4, 2
	stw      r3, 0x3c(r1)
	lfs      f0, lbl_8051E4D0@sda21(r2)
	lfd      f1, 0x38(r1)
	lwz      r3, 0x334(r31)
	fsubs    f1, f1, f2
	fmuls    f1, f0, f1
	bl       pullable__Q24Game11PelletCarryFUsf
	clrlwi.  r0, r3, 0x18
	bne      lbl_803533FC
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	li       r3, 0
	b        lbl_80353414

lbl_803533FC:
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	li       r3, 1
	b        lbl_80353414

lbl_80353410:
	li       r3, 0

lbl_80353414:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8035342C
 * Size:	00017C
 */
void calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3f(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r4
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r29, r3
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80353460
	li       r30, 0
	b        lbl_8035348C

lbl_80353460:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353488
	lwz      r3, 0x230(r29)
	lwz      r3, 0x17c(r3)
	lwz      r30, 4(r3)
	b        lbl_8035348C

lbl_80353488:
	lwz      r30, 0x230(r29)

lbl_8035348C:
	cmplwi   r30, 0
	bne      lbl_803534B0
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x76f
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803534B0:
	mr       r3, r30
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f4, 0x2e0(r29)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmr      f2, f4
	fcmpo    cr0, f4, f0
	bge      lbl_803534D0
	fneg     f2, f4

lbl_803534D0:
	lfs      f3, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E490@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f4, f0
	fctiwz   f0, f2
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f2, f1, f0
	bge      lbl_8035352C
	lfs      f0, lbl_8051E4CC@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80353544

lbl_8035352C:
	fmuls    f0, f4, f3
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80353544:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f2, 0x1c(r1)
	addi     r3, r30, 0x138
	addi     r4, r1, 0x20
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       PSMTXCopy
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	803535A8
 * Size:	000028
 */
void PanModokiBase::Obj::boundEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r3, 0x18c
	stw      r0, 0x14(r1)
	lfs      f1, 0x33c(r3)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803535D0
 * Size:	0000E8
 */
void PanModokiBase::Obj::createAppearEffect(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	bne      lbl_80353684
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx7TPanApp@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, __vt__Q23efx8TSimple1@l
	li       r0, 0x26e
	li       r7, 0
	stw      r4, 0x14(r1)
	addi     r6, r3, __vt__Q23efx7TPanApp@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx8ArgScale@ha
	sth      r0, 0x18(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	addi     r3, r1, 0x14
	stw      r7, 0x1c(r1)
	addi     r4, r1, 0x20
	stw      r6, 0x14(r1)
	lwz      r8, 0x18c(r31)
	lwz      r7, 0x190(r31)
	lwz      r6, 0x194(r31)
	lfs      f3, 0x340(r31)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x20(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x20(r1)
	stfs     f3, 0x30(r1)
	bl       create__Q23efx7TPanAppFPQ23efx3Arg
	b        lbl_803536A4

lbl_80353684:
	lwz      r12, 0(r3)
	lwz      r12, 0x250(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x33c(r31)
	mr       r3, r31
	addi     r4, r31, 0x18c
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_803536A4:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803536B8
 * Size:	0000E0
 */
void PanModokiBase::Obj::createHideEffect(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	bne      lbl_80353774
	lwz      r4, 0x378(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f1, 0x18(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lfs      f0, 0x1c(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	stfs     f2, 0x20(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lfs      f3, 0x340(r31)
	addi     r4, r1, 0x2c
	stfs     f1, 0x24(r1)
	lwz      r7, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r6, 0x24(r1)
	lwz      r3, 0x28(r1)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r3, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x2c(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x2c(r1)
	stfs     f3, 0x3c(r1)
	lwz      r3, 0x2fc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80353784

lbl_80353774:
	lwz      r12, 0(r3)
	lwz      r12, 0x254(r12)
	mtctr    r12
	bctrl

lbl_80353784:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353798
 * Size:	000030
 */
void PanModokiBase::Obj::fadeHideEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2fc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	803537C8
 * Size:	000084
 */
void PanModokiBase::Obj::createPulledSmokeEffect(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx8ArgScale@ha
	stw      r0, 0x34(r1)
	addi     r0, r4, __vt__Q23efx8ArgScale@l
	addi     r5, r5, __vt__Q23efx3Arg@l
	addi     r4, r1, 0x14
	lwz      r8, 0x18c(r3)
	lwz      r7, 0x190(r3)
	lwz      r6, 0x194(r3)
	lfs      f3, 0x340(r3)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x14(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x14(r1)
	stfs     f3, 0x24(r1)
	lwz      r3, 0x300(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035384C
 * Size:	000030
 */
void PanModokiBase::Obj::fadePulledSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	8035387C
 * Size:	0002CC
 */
void PanModokiBase::Obj::throwUpEatItem(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stmw     r26, 0x78(r1)
	mr       r26, r3
	lwz      r3, 0x38c(r3)
	cmplwi   r3, 0
	beq      lbl_803538CC
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	li       r6, 0
	addi     r0, r5, __vt__Q24Game15CreatureKillArg@l
	lis      r4, __vt__Q24Game13PelletKillArg@ha
	stw      r0, 0x20(r1)
	addi     r5, r4, __vt__Q24Game13PelletKillArg@l
	li       r0, 1
	addi     r4, r1, 0x20
	stw      r6, 0x24(r1)
	stw      r5, 0x20(r1)
	stb      r0, 0x28(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_803538CC:
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	mr       r29, r26
	li       r28, 0
	addi     r30, r4, __vt__Q24Game15CreatureInitArg@l
	addi     r31, r3, __vt__Q24Game13PelletInitArg@l
	b        lbl_80353B28

lbl_803538E8:
	stw      r30, 0x2c(r1)
	li       r5, 0
	li       r0, -1
	li       r4, 0xff
	li       r3, 1
	stw      r31, 0x2c(r1)
	stb      r5, 0x48(r1)
	sth      r5, 0x40(r1)
	stb      r4, 0x42(r1)
	stw      r5, 0x44(r1)
	stb      r5, 0x43(r1)
	stb      r3, 0x30(r1)
	stb      r5, 0x49(r1)
	stw      r0, 0x50(r1)
	stw      r0, 0x4c(r1)
	stb      r5, 0x4a(r1)
	stb      r5, 0x4b(r1)
	lwz      r3, 0x38c(r29)
	bl       getConfigName__Q24Game6PelletFv
	mr       r5, r3
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x2c
	bl       makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353B20
	lwz      r27, 0x38c(r29)
	cmplwi   r27, 0
	beq      lbl_80353B20
	lwz      r3, 0x454(r27)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 2
	li       r0, 1
	sth      r3, 0x40(r1)
	mr       r3, r27
	addi     r4, r1, 0x2c
	stb      r0, 0x48(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f1, 0x198(r26)
	mr       r3, r26
	lfs      f0, lbl_8051E518@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 0x14(r1)
	lfs      f1, 0x19c(r26)
	stfs     f1, 0x18(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x1a0(r26)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x26c(r12)
	mtctr    r12
	bctrl
	lis      r3, 0x4330
	xoris    r0, r28, 0x8000
	lwz      r4, 0x388(r26)
	stw      r0, 0x5c(r1)
	xoris    r0, r4, 0x8000
	lfd      f2, lbl_8051E500@sda21(r2)
	stw      r3, 0x58(r1)
	cmpwi    r4, 1
	lfs      f3, lbl_8051E530@sda21(r2)
	lfd      f0, 0x58(r1)
	stw      r0, 0x64(r1)
	fsubs    f1, f0, f2
	stw      r3, 0x60(r1)
	lfd      f0, 0x60(r1)
	fmuls    f1, f3, f1
	fsubs    f0, f0, f2
	fdivs    f4, f1, f0
	beq      lbl_80353AC4
	lfs      f0, lbl_8051E490@sda21(r2)
	lfs      f3, lbl_8051E4D8@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_80353A4C
	lfs      f0, lbl_8051E4CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80353A70

lbl_80353A4C:
	lfs      f0, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80353A70:
	lfs      f1, 8(r1)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmadds   f1, f3, f2, f1
	fcmpo    cr0, f4, f0
	stfs     f1, 8(r1)
	bge      lbl_80353A8C
	fneg     f4, f4

lbl_80353A8C:
	lfs      f0, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r0, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051E4D8@sda21(r2)
	fmuls    f1, f4, f0
	lfs      f0, 0x10(r1)
	fctiwz   f1, f1
	stfd     f1, 0x68(r1)
	lwz      r3, 0x6c(r1)
	rlwinm   r3, r3, 3, 0x12, 0x1c
	add      r3, r0, r3
	lfs      f1, 4(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x10(r1)

lbl_80353AC4:
	mr       r3, r27
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r27
	addi     r4, r1, 8
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	addi     r4, r1, 0x14
	lwz      r12, 0(r27)
	lwz      r12, 0x1fc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28c(r26)
	li       r4, 0x5810
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_80353B20:
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_80353B28:
	lwz      r0, 0x388(r26)
	cmpw     r28, r0
	blt      lbl_803538E8
	lmw      r26, 0x78(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353B48
 * Size:	0000B8
 */
OoPanModoki::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80353B84
	addi     r0, r31, 0x3c8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x3c8(r31)
	stw      r0, 0x3cc(r31)
	stw      r0, 0x3d0(r31)

lbl_80353B84:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game13PanModokiBase3ObjFv
	lis      r3, __vt__Q34Game11OoPanModoki3Obj@ha
	addi     r0, r31, 0x3c8
	addi     r4, r3, __vt__Q34Game11OoPanModoki3Obj@l
	lfs      f4, lbl_8051E540@sda21(r2)
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r5, r4, 0x310
	lfs      f3, lbl_8051E4DC@sda21(r2)
	stw      r3, 0x178(r31)
	mr       r3, r31
	lfs      f2, lbl_8051E544@sda21(r2)
	lwz      r4, 0x17c(r31)
	lfs      f1, lbl_8051E520@sda21(r2)
	stw      r5, 0(r4)
	lfs      f0, lbl_8051E548@sda21(r2)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	stfs     f4, 0x32c(r31)
	stfs     f3, 0x330(r31)
	stfs     f2, 0x338(r31)
	stfs     f1, 0x33c(r31)
	stfs     f0, 0x340(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353C00
 * Size:	000034
 */
void OoPanModoki::Obj::appearRumble(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	li       r6, 2
	stw      r0, 0x14(r1)
	addi     r5, r4, 0x18c
	li       r4, 0xb
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353C34
 * Size:	000034
 */
void OoPanModoki::Obj::hideRumble(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	li       r6, 2
	stw      r0, 0x14(r1)
	addi     r5, r4, 0x18c
	li       r4, 0xa
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353C68
 * Size:	000094
 */
void OoPanModoki::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r5
	stw      r30, 0x10(r1)
	or.      r30, r4, r4
	stw      r29, 0xc(r1)
	mr       r29, r3
	beq      lbl_80353CC8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353CC8
	lbz      r0, 0x2b8(r30)
	cmpwi    r0, 3
	beq      lbl_80353CC8
	li       r3, 0
	b        lbl_80353CDC

lbl_80353CC8:
	fmr      f1, f31
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl pressCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart

lbl_80353CDC:
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
 * Address:	80353CFC
 * Size:	000018
 */
void OoPanModoki::Obj::canTarget(int, int)
{
	/*
	srawi    r6, r4, 0x1f
	srwi     r3, r5, 0x1f
	subfc    r0, r5, r4
	adde     r0, r6, r3
	clrlwi   r3, r0, 0x18
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353D14
 * Size:	000008
 */
void OoPanModoki::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051E4B4@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353D1C
 * Size:	000008
 */
u32 OoPanModoki::Obj::getEnemyTypeID(void) { return 0x28; }

} // namespace Game

/*
 * --INFO--
 * Address:	80353D24
 * Size:	000028
 */
void __sinit_panModoki_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804DCAB8@ha
	stw      r0, lbl_80515F30@sda21(r13)
	stfsu    f0, lbl_804DCAB8@l(r3)
	stfs     f0, lbl_80515F34@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
