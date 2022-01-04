#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    lbl_80489DA8:
        .4byte 0x00000000
        .4byte 0x41F00000
        .4byte 0x42820000
        .4byte 0x42A00000
        .4byte 0x42BE0000
        .4byte 0x42D80000
        .4byte 0x42F00000
    lbl_80489DC4:
        .4byte 0x00000000
        .4byte 0xC1A00000
        .4byte 0x41700000
        .4byte 0xC1F00000
        .4byte 0x00000000
        .4byte 0xC1C80000
        .4byte 0x00000000
    lbl_80489DE0:
        .4byte 0x00000000
        .4byte 0x41200000
        .4byte 0x41700000
        .4byte 0x41A00000
        .4byte 0x41F00000
        .4byte 0x42200000
        .4byte 0x42700000
    lbl_80489DFC:
        .4byte 0x00000000
        .4byte 0xC2480000
        .4byte 0x42480000
        .4byte 0xC2480000
        .4byte 0x41A00000
        .4byte 0xC1A00000
        .4byte 0x00000000
    lbl_80489E18:
        .4byte 0x42000000
        .4byte 0x42200000
        .4byte 0x42500000
        .4byte 0x428C0000
        .4byte 0x42A00000
    lbl_80489E2C:
        .4byte 0x00000000
        .4byte 0xC2340000
        .4byte 0xC2700000
        .4byte 0xC1200000
        .4byte 0xC1200000
    lbl_80489E40:
        .4byte 0x40E00000
        .4byte 0x41880000
        .4byte 0x41D80000
        .4byte 0x42140000
        .4byte 0x423C0000
        .4byte 0x42640000
        .4byte 0x42860000
        .4byte 0x429A0000
    lbl_80489E60:
        .4byte 0xC1A00000
        .4byte 0xC1700000
        .4byte 0xC20C0000
        .4byte 0xC1C80000
        .4byte 0xC2200000
        .4byte 0xC20C0000
        .4byte 0xC2820000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx14TNewkurageBomb
    __vt__Q23efx14TNewkurageBomb:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx17TNewkurageDeadrun
    __vt__Q23efx17TNewkurageDeadrun:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx17TNewkurageDeadrunFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx17TNewkurageDeadrunFv
    .global __vt__Q23efx13TNewkurageSui
    __vt__Q23efx13TNewkurageSui:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
        .4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
        .4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
        .4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
    .global __vt__Q23efx14TNewkurageKira
    __vt__Q23efx14TNewkurageKira:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14TNewkurageKiraFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx14TNewkurageKiraFv
    .global __vt__Q23efx14TNewkurageHire
    __vt__Q23efx14TNewkurageHire:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx13TNewkurageEye
    __vt__Q23efx13TNewkurageEye:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TNewkurageEyeFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx13TNewkurageEyeFv
    .global __vt__Q34Game6Kurage3Obj
    __vt__Q34Game6Kurage3Obj:
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
        .4byte onInit__Q34Game6Kurage3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game6Kurage3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game6Kurage3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game6Kurage3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game6Kurage3ObjFv
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
        .4byte isUnderground__Q24Game8CreatureFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game6Kurage3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game9EnemyBaseFv
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
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game6Kurage3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Kurage3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Kurage3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Kurage3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q24Game9EnemyBaseFv .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
        .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game6Kurage3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game6Kurage3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game6Kurage3ObjFv .4byte
   doFinishStoneState__Q34Game6Kurage3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game6Kurage3ObjFv .4byte
   doStartMovie__Q34Game6Kurage3ObjFv .4byte doEndMovie__Q34Game6Kurage3ObjFv
        .4byte setFSM__Q34Game6Kurage3ObjFPQ34Game6Kurage3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@764@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C0C0
    lbl_8051C0C0:
        .4byte 0x00000000
    .global lbl_8051C0C4
    lbl_8051C0C4:
        .4byte 0x40600000
    .global lbl_8051C0C8
    lbl_8051C0C8:
        .4byte 0x6B6F7368
        .4byte 0x69310000
    .global lbl_8051C0D0
    lbl_8051C0D0:
        .4byte 0x41C80000
    .global lbl_8051C0D4
    lbl_8051C0D4:
        .4byte 0x40A00000
    .global lbl_8051C0D8
    lbl_8051C0D8:
        .float 1.0
    .global lbl_8051C0DC
    lbl_8051C0DC:
        .4byte 0x42480000
    .global lbl_8051C0E0
    lbl_8051C0E0:
        .4byte 0x41700000
    .global lbl_8051C0E4
    lbl_8051C0E4:
        .4byte 0x47000000
    .global lbl_8051C0E8
    lbl_8051C0E8:
        .4byte 0x40490FDB
    .global lbl_8051C0EC
    lbl_8051C0EC:
        .4byte 0x3FC90FDB
    .global lbl_8051C0F0
    lbl_8051C0F0:
        .4byte 0x43A2F983
    .global lbl_8051C0F4
    lbl_8051C0F4:
        .4byte 0xC3A2F983
    .global lbl_8051C0F8
    lbl_8051C0F8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051C100
    lbl_8051C100:
        .4byte 0x40C90FDB
    .global lbl_8051C104
    lbl_8051C104:
        .4byte 0x41F00000
    .global lbl_8051C108
    lbl_8051C108:
        .4byte 0x3BB60B61
    .global lbl_8051C10C
    lbl_8051C10C:
        .4byte 0x4C74756E
        .4byte 0x6F320000
    .global lbl_8051C114
    lbl_8051C114:
        .4byte 0x5274756E
        .4byte 0x6F320000
    .global lbl_8051C11C
    lbl_8051C11C:
        .4byte 0x6E796F72
        .4byte 0x6F000000
    .global lbl_8051C124
    lbl_8051C124:
        .4byte 0x63656E74
        .4byte 0x65720000
    .global lbl_8051C12C
    lbl_8051C12C:
        .4byte 0x3F266666
*/

namespace Game {

/*
 * --INFO--
 * Address:	802AD6F0
 * Size:	000138
 */
Kurage::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802AD730
	addi     r0, r31, 0x2fc
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2fc(r31)
	stw      r0, 0x300(r31)
	stw      r0, 0x304(r31)

lbl_802AD730:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game6Kurage3Obj@ha
	addi     r0, r31, 0x2fc
	addi     r5, r3, __vt__Q34Game6Kurage3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802AD7BC
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game6Kurage14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game6Kurage14ProperAnimator@l
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

lbl_802AD7BC:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AD7F0
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game6Kurage3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game6Kurage3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802AD7F0:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game6Kurage3ObjFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AD828
 * Size:	000004
 */
void Kurage::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802AD82C
 * Size:	0000A8
 */
void Kurage::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r31)
	li       r4, -1
	lfs      f1, lbl_8051C0C0@sda21(r2)
	li       r0, 0
	rlwinm   r3, r3, 0, 0x19, 0x17
	lfs      f0, lbl_8051C0C4@sda21(r2)
	stw      r3, 0x1e0(r31)
	mr       r3, r31
	lwz      r5, 0x1e0(r31)
	ori      r5, r5, 4
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x18, 0x16
	stw      r5, 0x1e0(r31)
	stw      r4, 0x2c0(r31)
	stfs     f1, 0x2c4(r31)
	stfs     f1, 0x2cc(r31)
	stfs     f0, 0x2c8(r31)
	stw      r0, 0x2e0(r31)
	stb      r0, 0x2dc(r31)
	bl       setupEffect__Q34Game6Kurage3ObjFv
	mr       r3, r31
	bl       startEyeHireBodyEffect__Q34Game6Kurage3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
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
 * Address:	802AD8D4
 * Size:	000054
 */
void Kurage::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishEyeBodyEffect__Q34Game6Kurage3ObjFv
	mr       r3, r30
	bl       finishHireEffect__Q34Game6Kurage3ObjFv
	mr       r3, r30
	bl       finishSuckEffect__Q34Game6Kurage3ObjFv
	mr       r3, r30
	mr       r4, r31
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
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
 * Address:	802AD928
 * Size:	000100
 */
void Kurage::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       updateFallTimer__Q34Game6Kurage3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ADA14
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_802ADA14
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AD9CC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50c7
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802AD9CC:
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_802ADA14
	lfs      f1, lbl_8051C0C0@sda21(r2)
	lfs      f0, 0x210(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_802ADA14
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58c8
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802ADA14:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADA28
 * Size:	000004
 */
void Kurage::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802ADA2C
 * Size:	000020
 */
void Kurage::Obj::doDebugDraw(Graphics&)
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
 * Address:	802ADA4C
 * Size:	00004C
 */
void Kurage::Obj::setFSM(Game::Kurage::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2bc(r3)
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2b4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADA98
 * Size:	000118
 */
void Kurage::Obj::getShadowParam(Game::ShadowParam&)
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
	mr       r31, r4
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051C0C8@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	mr       r4, r31
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	fmr      f31, f1
	lwz      r12, 0(r30)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ADB2C
	lfs      f0, lbl_8051C0D0@sda21(r2)
	fadds    f0, f0, f31
	stfs     f0, 4(r31)
	b        lbl_802ADB38

lbl_802ADB2C:
	lfs      f0, lbl_8051C0D4@sda21(r2)
	fadds    f0, f0, f31
	stfs     f0, 4(r31)

lbl_802ADB38:
	lfs      f1, lbl_8051C0C0@sda21(r2)
	mr       r3, r30
	lfs      f0, lbl_8051C0D8@sda21(r2)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ADB80
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051C0DC@sda21(r2)
	lfs      f0, 0x81c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)
	b        lbl_802ADB88

lbl_802ADB80:
	lfs      f0, lbl_8051C0DC@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802ADB88:
	lfs      f0, lbl_8051C0E0@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	802ADBB0
 * Size:	000038
 */
void Kurage::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_802ADBD4
	lfs      f2, lbl_8051C0D8@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802ADBD8

lbl_802ADBD4:
	li       r3, 0

lbl_802ADBD8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADBE8
 * Size:	000044
 */
void Kurage::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishEyeBodyEffect__Q34Game6Kurage3ObjFv
	mr       r3, r31
	bl       finishHireEffect__Q34Game6Kurage3ObjFv
	mr       r3, r31
	bl       finishSuckEffect__Q34Game6Kurage3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADC2C
 * Size:	00007C
 */
void Kurage::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       startEyeHireBodyEffect__Q34Game6Kurage3ObjFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	blt      lbl_802ADC64
	cmpwi    r3, 5
	ble      lbl_802ADC74

lbl_802ADC64:
	cmpwi    r3, 8
	blt      lbl_802ADC94
	cmpwi    r3, 9
	bgt      lbl_802ADC94

lbl_802ADC74:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802ADC94:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADCA8
 * Size:	000034
 */
void Kurage::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game6Kurage3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADCDC
 * Size:	000034
 */
void Kurage::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game6Kurage3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADD10
 * Size:	000020
 */
void Kurage::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game6Kurage3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADD30
 * Size:	000020
 */
void Kurage::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game6Kurage3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADD50
 * Size:	000098
 */
void Kurage::Obj::setHeightVelocity(float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmr      f30, f1
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	fmr      f31, f2
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x190(r31)
	lfs      f2, 0x81c(r3)
	lfs      f3, 0x844(r3)
	fadds    f2, f30, f2
	fadds    f3, f31, f3
	fadds    f2, f1, f2
	fsubs    f0, f2, f0
	fmuls    f0, f3, f0
	stfs     f0, 0x1cc(r31)
	lfs      f0, 0x190(r31)
	fsubs    f1, f0, f1
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r0, 0x34(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADDE8
 * Size:	0001D8
 */
void Kurage::Obj::setRandTarget()
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
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f27, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	addi     r3, r1, 8
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051C0F8@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0(r31)
	fsubs    f2, f0, f1
	lfs      f1, lbl_8051C0E4@sda21(r2)
	lfs      f0, 0x384(r5)
	lwz      r12, 8(r12)
	fmuls    f2, f27, f2
	fdivs    f1, f2, f1
	fadds    f28, f0, f1
	mtctr    r12
	bctrl
	lfs      f31, 0x198(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f29, 0x1a0(r31)
	lfs      f0, 0x10(r1)
	fsubs    f1, f1, f31
	lfs      f30, 0x19c(r31)
	fsubs    f2, f0, f29
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f27, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f2, lbl_8051C0F8@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f3, lbl_8051C0E8@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051C0E4@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C0EC@sda21(r2)
	lfs      f0, lbl_8051C0C0@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f27, f1
	fadds    f3, f2, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802ADF00
	fneg     f1, f3

lbl_802ADF00:
	lfs      f2, lbl_8051C0F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C0C0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f1, f28, f0, f29
	bge      lbl_802ADF5C
	lfs      f0, lbl_8051C0F4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802ADF74

lbl_802ADF5C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802ADF74:
	fmadds   f0, f28, f0, f31
	stfs     f0, 0x2d0(r31)
	stfs     f30, 0x2d4(r31)
	stfs     f1, 0x2d8(r31)
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ADFC0
 * Size:	0000A4
 */
void Kurage::Obj::getMovePitchOffset()
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f3, lbl_8051C0E8@sda21(r2)
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2c8(r3)
	lfs      f2, 0x54(r4)
	lfs      f0, lbl_8051C100@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x2c8(r3)
	lfs      f1, 0x2c8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802ADFF4
	fsubs    f0, f1, f0
	stfs     f0, 0x2c8(r3)

lbl_802ADFF4:
	lfs      f2, 0x2c8(r3)
	lfs      f0, lbl_8051C0C0@sda21(r2)
	lfs      f1, lbl_8051C0DC@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802AE034
	lfs      f0, lbl_8051C0F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802AE058

lbl_802AE034:
	lfs      f0, lbl_8051C0F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802AE058:
	fmuls    f1, f1, f0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE064
 * Size:	0001A8
 */
void Kurage::Obj::getAttackPitchOffset()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_80489DC4@ha
	lis      r5, lbl_80489DA8@ha
	stw      r0, 0x64(r1)
	addi     r10, r4, lbl_80489DC4@l
	stmw     r27, 0x4c(r1)
	lwzu     r27, lbl_80489DA8@l(r5)
	lwz      r9, 0(r10)
	lwz      r28, 4(r5)
	lwz      r29, 8(r5)
	lwz      r30, 0xc(r5)
	lwz      r31, 0x10(r5)
	lwz      r12, 0x14(r5)
	lwz      r11, 0x18(r5)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r5, 0x10(r10)
	lwz      r4, 0x14(r10)
	lwz      r0, 0x18(r10)
	stw      r27, 0x24(r1)
	stw      r28, 0x28(r1)
	stw      r29, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r31, 0x34(r1)
	stw      r12, 0x38(r1)
	stw      r11, 0x3c(r1)
	stw      r9, 8(r1)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	addi     r5, r1, 0x24
	addi     r6, r1, 8
	li       r0, 2
	lfs      f0, lbl_8051C0C0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C0D8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802AE118:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE15C
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE15C
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE15C:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE1A0
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE1A0
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE1A0:
	lfs      f2, 8(r5)
	addi     r0, r7, 3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE1E4
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE1E4
	fsubs    f5, f1, f2
	lfs      f0, 8(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE1E4:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 3
	bdnz     lbl_802AE118
	lmw      r27, 0x4c(r1)
	fmr      f1, f0
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE20C
 * Size:	0001A8
 */
void Kurage::Obj::getFlickPitchOffset()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_80489DFC@ha
	lis      r5, lbl_80489DE0@ha
	stw      r0, 0x64(r1)
	addi     r10, r4, lbl_80489DFC@l
	stmw     r27, 0x4c(r1)
	lwzu     r27, lbl_80489DE0@l(r5)
	lwz      r9, 0(r10)
	lwz      r28, 4(r5)
	lwz      r29, 8(r5)
	lwz      r30, 0xc(r5)
	lwz      r31, 0x10(r5)
	lwz      r12, 0x14(r5)
	lwz      r11, 0x18(r5)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r5, 0x10(r10)
	lwz      r4, 0x14(r10)
	lwz      r0, 0x18(r10)
	stw      r27, 0x24(r1)
	stw      r28, 0x28(r1)
	stw      r29, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r31, 0x34(r1)
	stw      r12, 0x38(r1)
	stw      r11, 0x3c(r1)
	stw      r9, 8(r1)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	addi     r5, r1, 0x24
	addi     r6, r1, 8
	li       r0, 2
	lfs      f0, lbl_8051C0C0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C0D8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802AE2C0:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE304
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE304
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE304:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE348
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE348
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE348:
	lfs      f2, 8(r5)
	addi     r0, r7, 3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE38C
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE38C
	fsubs    f5, f1, f2
	lfs      f0, 8(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE38C:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 3
	bdnz     lbl_802AE2C0
	lmw      r27, 0x4c(r1)
	fmr      f1, f0
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE3B4
 * Size:	000144
 */
void Kurage::Obj::getTakeOffPitchOffset()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_80489E2C@ha
	lis      r5, lbl_80489E18@ha
	stw      r0, 0x44(r1)
	addi     r8, r4, lbl_80489E2C@l
	stw      r31, 0x3c(r1)
	lwzu     r31, lbl_80489E18@l(r5)
	lwz      r7, 0(r8)
	lwz      r12, 4(r5)
	lwz      r11, 8(r5)
	lwz      r10, 0xc(r5)
	lwz      r9, 0x10(r5)
	lwz      r6, 4(r8)
	lwz      r5, 8(r8)
	lwz      r4, 0xc(r8)
	lwz      r0, 0x10(r8)
	stw      r31, 0x1c(r1)
	stw      r12, 0x20(r1)
	stw      r11, 0x24(r1)
	stw      r10, 0x28(r1)
	stw      r9, 0x2c(r1)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	addi     r5, r1, 0x1c
	addi     r6, r1, 8
	li       r0, 2
	lfs      f0, lbl_8051C0C0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C0D8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802AE448:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE48C
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE48C
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE48C:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE4D0
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE4D0
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE4D0:
	addi     r5, r5, 8
	addi     r6, r6, 8
	addi     r7, r7, 2
	bdnz     lbl_802AE448
	lwz      r0, 0x44(r1)
	fmr      f1, f0
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE4F8
 * Size:	000168
 */
void Kurage::Obj::getFallPitchOffset(float)
{
	/*
	stwu     r1, -0x80(r1)
	lis      r4, lbl_80489E40@ha
	lis      r3, lbl_80489E60@ha
	lfs      f0, lbl_8051C104@sda21(r2)
	stmw     r21, 0x54(r1)
	addi     r6, r4, lbl_80489E40@l
	addi     r5, r3, lbl_80489E60@l
	addi     r23, r1, 0x28
	addi     r22, r1, 8
	fmuls    f6, f0, f1
	li       r0, 2
	mr       r4, r23
	mr       r3, r22
	li       r21, 0
	lfs      f1, lbl_8051C0C0@sda21(r2)
	lfs      f2, lbl_8051C0D8@sda21(r2)
	lwz      r24, 0(r6)
	lwz      r25, 4(r6)
	lwz      r26, 8(r6)
	lwz      r27, 0xc(r6)
	lwz      r28, 0x10(r6)
	lwz      r29, 0x14(r6)
	lwz      r30, 0x18(r6)
	lwz      r31, 0x1c(r6)
	lwz      r12, 0(r5)
	lwz      r11, 4(r5)
	lwz      r10, 8(r5)
	lwz      r9, 0xc(r5)
	lwz      r8, 0x10(r5)
	lwz      r7, 0x14(r5)
	lwz      r6, 0x18(r5)
	lwz      r5, 0x1c(r5)
	stw      r24, 0x28(r1)
	stw      r25, 0x2c(r1)
	stw      r26, 0x30(r1)
	stw      r27, 0x34(r1)
	stw      r28, 0x38(r1)
	stw      r29, 0x3c(r1)
	stw      r30, 0x40(r1)
	stw      r31, 0x44(r1)
	stw      r12, 8(r1)
	stw      r11, 0xc(r1)
	stw      r10, 0x10(r1)
	stw      r9, 0x14(r1)
	stw      r8, 0x18(r1)
	stw      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	mtctr    r0

lbl_802AE5BC:
	lfs      f3, 0(r23)
	addi     r0, r21, 1
	fcmpo    cr0, f6, f3
	cror     2, 1, 2
	bne      lbl_802AE600
	slwi     r0, r0, 2
	lfsx     f5, r4, r0
	fcmpo    cr0, f6, f5
	bge      lbl_802AE600
	fsubs    f4, f6, f3
	lfs      f0, 0(r22)
	fsubs    f1, f5, f3
	lfsx     f3, r3, r0
	fdivs    f4, f4, f1
	fsubs    f1, f2, f4
	fmuls    f0, f1, f0
	fmadds   f1, f4, f3, f0

lbl_802AE600:
	lfs      f3, 4(r23)
	addi     r0, r21, 2
	fcmpo    cr0, f6, f3
	cror     2, 1, 2
	bne      lbl_802AE644
	slwi     r0, r0, 2
	lfsx     f5, r4, r0
	fcmpo    cr0, f6, f5
	bge      lbl_802AE644
	fsubs    f4, f6, f3
	lfs      f0, 4(r22)
	fsubs    f1, f5, f3
	lfsx     f3, r3, r0
	fdivs    f4, f4, f1
	fsubs    f1, f2, f4
	fmuls    f0, f1, f0
	fmadds   f1, f4, f3, f0

lbl_802AE644:
	addi     r23, r23, 8
	addi     r22, r22, 8
	addi     r21, r21, 2
	bdnz     lbl_802AE5BC
	lmw      r21, 0x54(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE660
 * Size:	000030
 */
void Kurage::Obj::updateFallTimer()
{
	/*
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802AE684
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2cc(r3)
	blr

lbl_802AE684:
	lfs      f0, lbl_8051C0C0@sda21(r2)
	stfs     f0, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE690
 * Size:	0000A4
 */
void Kurage::Obj::getFlyingNextState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C0C0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802AE6C0
	li       r3, 0
	b        lbl_802AE720

lbl_802AE6C0:
	li       r4, 3
	bl       getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
	cmpwi    r3, 0
	ble      lbl_802AE6D8
	li       r3, 5
	b        lbl_802AE720

lbl_802AE6D8:
	lwz      r4, 0xc0(r31)
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x8e4(r4)
	fcmpo    cr0, f1, f0
	bgt      lbl_802AE6FC
	lwz      r3, 0x1f4(r31)
	lwz      r0, 0x90c(r4)
	cmpw     r3, r0
	blt      lbl_802AE71C

lbl_802AE6FC:
	lwz      r3, 0x1f4(r31)
	lwz      r0, 0x90c(r4)
	cmpw     r3, r0
	bge      lbl_802AE714
	li       r3, 9
	b        lbl_802AE720

lbl_802AE714:
	li       r3, 5
	b        lbl_802AE720

lbl_802AE71C:
	li       r3, -1

lbl_802AE720:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE734
 * Size:	000448
 */
void Kurage::Obj::getSearchedTarget(float)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r30, r3
	li       r31, 0
	lfs      f2, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f4, f2, f0
	lfs      f3, 0x18c(r3)
	lfs      f2, 0x198(r3)
	lfs      f0, 0x35c(r4)
	fsubs    f3, f3, f2
	fmuls    f2, f4, f4
	fmuls    f0, f0, f0
	fmadds   f2, f3, f3, f2
	fcmpo    cr0, f2, f0
	bge      lbl_802AEB24
	lfs      f30, 0x190(r30)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f2, lbl_8051C108@sda21(r2)
	li       r0, 0
	lfs      f0, 0x424(r4)
	fsubs    f5, f30, f1
	lfs      f4, lbl_8051C0DC@sda21(r2)
	cmplwi   r0, 0
	lfs      f1, 0x3d4(r4)
	fmuls    f2, f2, f0
	lfs      f0, 0x564(r4)
	lfs      f3, lbl_8051C0E8@sda21(r2)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lwz      r3, pikiMgr__4Game@sda21(r13)
	fsubs    f29, f5, f4
	fmuls    f28, f3, f2
	stw      r4, 0x44(r1)
	fmuls    f27, f1, f1
	fmuls    f26, f0, f0
	stw      r0, 0x50(r1)
	stw      r0, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_802AE834
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802AEB04

lbl_802AE834:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802AE8A0

lbl_802AE84C:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802AEB04
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_802AE8A0:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AE84C
	b        lbl_802AEB04

lbl_802AE8C0:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEA48
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEA48
	lwz      r0, 0xf4(r29)
	cmplw    r0, r30
	beq      lbl_802AEA48
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r1)
	lfs      f2, 0x38(r1)
	fcmpo    cr0, f0, f29
	lfs      f3, 0x40(r1)
	ble      lbl_802AEA48
	fcmpo    cr0, f0, f30
	bge      lbl_802AEA48
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f31, f1, f1, f0
	fcmpo    cr0, f31, f26
	bge      lbl_802AE974
	mr       r3, r29
	b        lbl_802AEB28

lbl_802AE974:
	fcmpo    cr0, f31, f27
	bge      lbl_802AEA48
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
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
	fmr      f25, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	lfs      f0, lbl_8051C0C0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802AEA30
	b        lbl_802AEA34

lbl_802AEA30:
	fneg     f1, f1

lbl_802AEA34:
	fcmpo    cr0, f1, f28
	cror     2, 0, 2
	bne      lbl_802AEA48
	mr       r31, r29
	fmr      f27, f31

lbl_802AEA48:
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_802AEA74
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802AEB04

lbl_802AEA74:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802AEAE8

lbl_802AEA94:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802AEB04
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_802AEAE8:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEA94

lbl_802AEB04:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_802AE8C0

lbl_802AEB24:
	mr       r3, r31

lbl_802AEB28:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xe4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AEB7C
 * Size:	00033C
 */
void Kurage::Obj::isSuck(float, Game::Creature*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r3
	lfs      f2, lbl_8051C0DC@sda21(r2)
	lfs      f30, 0x190(r3)
	cmplwi   r4, 0
	lwz      r3, 0xc0(r3)
	fsubs    f1, f30, f1
	lfs      f0, 0x564(r3)
	fsubs    f29, f1, f2
	fmuls    f31, f0, f0
	beq      lbl_802AEC28
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	lfs      f2, 0x14(r1)
	fcmpo    cr0, f0, f29
	lfs      f3, 0x1c(r1)
	ble      lbl_802AEE84
	fcmpo    cr0, f0, f30
	bge      lbl_802AEE84
	lfs      f0, 0x194(r31)
	lfs      f1, 0x18c(r31)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802AEE84
	li       r3, 1
	b        lbl_802AEE88

lbl_802AEC28:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802AEC68
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802AEE64

lbl_802AEC68:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802AECD4

lbl_802AEC80:
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
	bne      lbl_802AEE64
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802AECD4:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEC80
	b        lbl_802AEE64

lbl_802AECF4:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEDA8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEDA8
	lwz      r0, 0xf4(r30)
	cmplw    r0, r31
	beq      lbl_802AEDA8
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f0, f29
	lfs      f3, 0x10(r1)
	ble      lbl_802AEDA8
	fcmpo    cr0, f0, f30
	bge      lbl_802AEDA8
	lfs      f0, 0x194(r31)
	lfs      f1, 0x18c(r31)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802AEDA8
	li       r3, 1
	b        lbl_802AEE88

lbl_802AEDA8:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_802AEDD4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802AEE64

lbl_802AEDD4:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802AEE48

lbl_802AEDF4:
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
	bne      lbl_802AEE64
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802AEE48:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEDF4

lbl_802AEE64:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802AECF4

lbl_802AEE84:
	li       r3, 0

lbl_802AEE88:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AEEB8
 * Size:	000434
 */
void Kurage::Obj::suckPikmin(float)
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
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	mr       r30, r3
	lis      r3, 0x7375636B@ha
	lfs      f28, 0x190(r30)
	addi     r4, r3, 0x7375636B@l
	lwz      r3, 0xc0(r30)
	fsubs    f2, f28, f1
	lfs      f1, lbl_8051C0DC@sda21(r2)
	lfs      f0, 0x5b4(r3)
	lwz      r3, 0x114(r30)
	fsubs    f27, f2, f1
	fmuls    f26, f0, f0
	bl       getCollPart__8CollTreeFUl
	mr       r31, r3
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lfs      f31, 0x4c(r31)
	lfs      f30, 0x50(r31)
	cmplwi   r0, 0
	lfs      f29, 0x54(r31)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stw      r4, 0x14(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_802AEF84
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802AF260

lbl_802AEF84:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802AEFF0

lbl_802AEF9C:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802AF260
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802AEFF0:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AEF9C
	b        lbl_802AF260

lbl_802AF010:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AF1A4
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AF1A4
	lwz      r0, 0xf4(r29)
	cmplw    r0, r30
	beq      lbl_802AF1A4
	lwz      r28, 0xc0(r30)
	lwz      r3, 0x2e0(r30)
	lwz      r0, 0x934(r28)
	cmpw     r3, r0
	bge      lbl_802AF1A4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_8051C0F8@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f2, lbl_8051C0D8@sda21(r2)
	lfd      f0, 0x40(r1)
	lfs      f1, lbl_8051C0E4@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x8bc(r28)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802AF1A4
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f3, f27
	lfs      f4, 0x10(r1)
	ble      lbl_802AF1A4
	fcmpo    cr0, f3, f28
	bge      lbl_802AF1A4
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f4
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_802AF1A4
	lis      r3, __vt__Q24Game11Interaction@ha
	fsubs    f2, f31, f2
	addi     r4, r3, __vt__Q24Game11Interaction@l
	fsubs    f1, f30, f3
	fsubs    f0, f29, f4
	lis      r3, __vt__Q24Game20InteractSuikomi_Test@ha
	li       r0, 0
	stw      r4, 0x24(r1)
	addi     r5, r3, __vt__Q24Game20InteractSuikomi_Test@l
	mr       r3, r29
	stw      r30, 0x28(r1)
	addi     r4, r1, 0x24
	stw      r5, 0x24(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	stw      r0, 0x38(r1)
	stw      r31, 0x3c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AF1A4
	lwz      r4, 0x2e0(r30)
	mr       r3, r30
	addi     r0, r4, 1
	stw      r0, 0x2e0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x282a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802AF1A4:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_802AF1D0
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802AF260

lbl_802AF1D0:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802AF244

lbl_802AF1F0:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802AF260
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802AF244:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AF1F0

lbl_802AF260:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_802AF010
	lwz      r3, 0xc0(r30)
	lwz      r5, 0x2e0(r30)
	lwz      r0, 0x934(r3)
	srawi    r4, r5, 0x1f
	srwi     r3, r0, 0x1f
	subfc    r0, r0, r5
	adde     r3, r4, r3
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0xc4(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF2EC
 * Size:	0002B4
 */
void Kurage::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	stw      r30, 8(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802AF388
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx13TNewkurageEye@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx13TNewkurageEye@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xe5
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802AF388:
	stw      r3, 0x2e4(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802AF410
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx13TNewkurageEye@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx13TNewkurageEye@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xe5
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802AF410:
	stw      r3, 0x2e8(r31)
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802AF444
	li       r4, 0
	li       r5, 0xe7
	li       r6, 0xe8
	li       r7, 0xe9
	bl       __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
	lis      r3, __vt__Q23efx14TNewkurageHire@ha
	addi     r0, r3, __vt__Q23efx14TNewkurageHire@l
	stw      r0, 0(r30)

lbl_802AF444:
	stw      r30, 0x2ec(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802AF4D0
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
	lis      r4, __vt__Q23efx14TNewkurageKira@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TNewkurageKira@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0xea
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

lbl_802AF4D0:
	stw      r3, 0x2f0(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802AF4FC
	li       r4, 0xeb
	li       r5, 0xec
	bl       __ct__Q23efx9TForever2FUsUs
	lis      r3, __vt__Q23efx13TNewkurageSui@ha
	addi     r0, r3, __vt__Q23efx13TNewkurageSui@l
	stw      r0, 0(r30)

lbl_802AF4FC:
	stw      r30, 0x2f4(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802AF584
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx10TChaseMtxT@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx10TChaseMtxT@l
	lis      r4, __vt__Q23efx17TNewkurageDeadrun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx17TNewkurageDeadrun@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xe4
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802AF584:
	stw      r3, 0x2f8(r31)
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
 * Address:	802AF5A0
 * Size:	00008C
 */
void Kurage::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C10C@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x2e4(r31)
	addi     r4, r2, lbl_8051C114@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x2e8(r31)
	addi     r4, r2, lbl_8051C11C@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x2ec(r31)
	bl       setMtxptr__Q23efx10TChaseMtx3FPA4_f
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051C124@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x2f8(r31)
	stw      r3, 0x10(r4)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF62C
 * Size:	000088
 */
void Kurage::Obj::startEyeHireBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e8(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2ec(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802AF6B4
 * Size:	00007C
 */
void Kurage::Obj::finishEyeBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802AF730
 * Size:	000024
 */
void Kurage::Obj::setHireEffectLife(short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2ec(r3)
	bl       setLifeTime__Q23efx14TNewkurageHireFs
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF754
 * Size:	000050
 */
void Kurage::Obj::finishHireEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	802AF7A4
 * Size:	000058
 */
void Kurage::Obj::startSuckEffect(Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r0, 0x24(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0xc(r1)
	lfs      f0, 4(r4)
	stfs     f0, 0x10(r1)
	lfs      f0, 8(r4)
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF7FC
 * Size:	000024
 */
void Kurage::Obj::updateSuckEffect(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
	bl       "setGlobalTranslation__Q23efx13TNewkurageSuiFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF820
 * Size:	000030
 */
void Kurage::Obj::finishSuckEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
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
 * Address:	802AF850
 * Size:	00009C
 */
void Kurage::Obj::createBodyBombEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C124@sda21
	stw      r0, 0x34(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f0, 0xc(r3)
	lfs      f1, 0x1c(r3)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 0x2c(r3)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	li       r6, 0
	stw      r0, 0x18(r1)
	lis      r4, __vt__Q23efx14TNewkurageBomb@ha
	lis      r3, __vt__Q23efx3Arg@ha
	li       r8, 0xe2
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0xe3
	stw      r5, 0x18(r1)
	addi     r5, r4, __vt__Q23efx14TNewkurageBomb@l
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	sth      r8, 0x1c(r1)
	sth      r7, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF8EC
 * Size:	000044
 */
void Kurage::Obj::createDownEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x2ec(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r31, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF930
 * Size:	000008
 */
void Kurage::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051C12C@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AF938
 * Size:	0000A0
 */
void Kurage::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
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
 * Address:	802AF9D8
 * Size:	0000A0
 */
void Kurage::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
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

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	802AFA78
 * Size:	00009C
 */
TNewkurageDeadrun::~TNewkurageDeadrun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802AFAF8
	lis      r3, __vt__Q23efx17TNewkurageDeadrun@ha
	addi     r3, r3, __vt__Q23efx17TNewkurageDeadrun@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802AFAE8
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802AFAE8
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802AFAE8:
	extsh.   r0, r31
	ble      lbl_802AFAF8
	mr       r3, r30
	bl       __dl__FPv

lbl_802AFAF8:
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
 * Address:	802AFB14
 * Size:	00009C
 */
TNewkurageKira::~TNewkurageKira()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802AFB94
	lis      r3, __vt__Q23efx14TNewkurageKira@ha
	addi     r3, r3, __vt__Q23efx14TNewkurageKira@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802AFB84
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802AFB84
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802AFB84:
	extsh.   r0, r31
	ble      lbl_802AFB94
	mr       r3, r30
	bl       __dl__FPv

lbl_802AFB94:
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
 * Address:	802AFBB0
 * Size:	00009C
 */
TNewkurageEye::~TNewkurageEye()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802AFC30
	lis      r3, __vt__Q23efx13TNewkurageEye@ha
	addi     r3, r3, __vt__Q23efx13TNewkurageEye@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802AFC20
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802AFC20
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802AFC20:
	extsh.   r0, r31
	ble      lbl_802AFC30
	mr       r3, r30
	bl       __dl__FPv

lbl_802AFC30:
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

} // namespace Game

/*
 * --INFO--
 * Address:	802AFC4C
 * Size:	000004
 */
void Kurage::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802AFC50
 * Size:	000004
 */
void Kurage::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802AFC54
 * Size:	000008
 */
u32 Kurage::Obj::getEnemyTypeID() { return 0x39; }

namespace efx {

/*
 * --INFO--
 * Address:	802AFC5C
 * Size:	000008
 */
TNewkurageEye::@4 @~TNewkurageEye()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13TNewkurageEyeFv
	*/
}

/*
 * --INFO--
 * Address:	802AFC64
 * Size:	000008
 */
TNewkurageKira::@4 @~TNewkurageKira()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx14TNewkurageKiraFv
	*/
}

/*
 * --INFO--
 * Address:	802AFC6C
 * Size:	000008
 */
TNewkurageDeadrun::@4 @~TNewkurageDeadrun()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx17TNewkurageDeadrunFv
	*/
}
} // namespace efx

} // namespace efx
