#include "types.h"
#include "Game/Entities/UmiMushi.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Game/Navi.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "Game/EnemyFunc.h"
#include "JSystem/JMath.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80493AE8
    lbl_80493AE8:
        .4byte 0x756D694D
        .4byte 0x75736869
        .4byte 0x00000000
        .4byte 0x68656164
        .4byte 0x5F6A6F69
        .4byte 0x6E743100
    .global lbl_80493B00
    lbl_80493B00:
        .4byte 0x756D694D
        .4byte 0x75736869
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80493B10
    lbl_80493B10:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x63635F6D
        .4byte 0x6174315F
        .4byte 0x76000000
    .global lbl_80493B28
    lbl_80493B28:
        .asciz "PSMainSide_ObjSound.h"
        .skip 2
        .asciz "eyes_joint1"
        .asciz "weak_joint2"
        .asciz "ef_eye_r"
        .skip 3
        .asciz "ef_eye_l"
        .skip 3
    .global lbl_80493B70
    lbl_80493B70:
        .asciz "bero_joint1"
    .global lbl_80493B7C
    lbl_80493B7C:
        .asciz "kamu_joint1"
    .global lbl_80493B88
    lbl_80493B88:
        .asciz "kamu_joint2"
    .global lbl_80493B94
    lbl_80493B94:
        .asciz "kamu_joint3"
    .global lbl_80493BA0
    lbl_80493BA0:
        .asciz "kamu_joint4"
    .global lbl_80493BAC
    lbl_80493BAC:
        .asciz "kamu_joint5"
    .global lbl_80493BB8
    lbl_80493BB8:
        .asciz "kamu_joint6"
    .global lbl_80493BC4
    lbl_80493BC4:
        .asciz "kamu_joint7"
    .global lbl_80493BD0
    lbl_80493BD0:
        .4byte lbl_80493B7C
        .4byte lbl_80493B88
        .4byte lbl_80493B94
        .4byte lbl_80493BA0
        .4byte lbl_80493BAC
        .4byte lbl_80493BB8
        .4byte lbl_80493BC4
    .global lbl_80493BEC
    lbl_80493BEC:
        .asciz "kuti_joint1"
        .asciz "ArgScale"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx11TUmiDeadawa
    __vt__Q23efx11TUmiDeadawa:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TUmiDeadawaFv"
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
        .4byte __dt__Q23efx11TUmiDeadawaFv
    .global __vt__Q23efx7TUmiEat
    __vt__Q23efx7TUmiEat:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx7TUmiEatFv"
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
        .4byte __dt__Q23efx7TUmiEatFv
    .global __vt__Q23efx11TUmiEyeBlue
    __vt__Q23efx11TUmiEyeBlue:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx10TUmiEyeRed
    __vt__Q23efx10TUmiEyeRed:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx12TUmiWeakBlue
    __vt__Q23efx12TUmiWeakBlue:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx11TUmiWeakRed
    __vt__Q23efx11TUmiWeakRed:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx9TUmiHamon
    __vt__Q23efx9TUmiHamon:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q34Game8UmiMushi3Obj
    __vt__Q34Game8UmiMushi3Obj:
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
        .4byte onInit__Q34Game8UmiMushi3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game8UmiMushi3ObjFf
        .4byte doDirectDraw__Q34Game8UmiMushi3ObjFR8Graphics
        .4byte getBodyRadius__Q34Game8UmiMushi3ObjFv
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
        .4byte inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game9EnemyBaseFv
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
        .4byte collisionCallback__Q34Game8UmiMushi3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game8UmiMushi3ObjFRQ24Game11ShadowParam
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
        .4byte "applyImpulse__Q34Game8UmiMushi3ObjFR10Vector3<f>R10Vector3<f>"
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
        .4byte __dt__Q34Game8UmiMushi3ObjFv
        .4byte "birth__Q34Game8UmiMushi3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game8UmiMushi3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game8UmiMushi3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game8UmiMushi3ObjFv
        .4byte doAnimationCullingOn__Q34Game8UmiMushi3ObjFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game8UmiMushi3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game8UmiMushi3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q34Game8UmiMushi3ObjFv
        .4byte initMouthSlots__Q34Game8UmiMushi3ObjFv
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
        .4byte getEnemyTypeID__Q34Game8UmiMushi3ObjFv
        .4byte getMouthSlots__Q34Game8UmiMushi3ObjFv
        .4byte
   doGetLifeGaugeParam__Q34Game8UmiMushi3ObjFRQ24Game14LifeGaugeParam .4byte
   throwupItem__Q24Game9EnemyBaseFv .4byte
   "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   throwupItemInDeathProcedure__Q24Game9EnemyBaseFv .4byte
   setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere .4byte
   damageCallBack__Q34Game8UmiMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q34Game8UmiMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game8UmiMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game8UmiMushi3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q34Game8UmiMushi3ObjFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game8UmiMushi3ObjFv .4byte
   doFinishStoneState__Q34Game8UmiMushi3ObjFv .4byte
   getDamageCoeStoneState__Q34Game8UmiMushi3ObjFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game8UmiMushi3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game8UmiMushi3ObjFv .4byte
   doEndMovie__Q34Game8UmiMushi3ObjFv .4byte
   setFSM__Q34Game8UmiMushi3ObjFPQ34Game8UmiMushi3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@932@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@932@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@932@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@932@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@932@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@932@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sbss # 0x80514D80 - 0x80516360
    .global curU__Q24Game8UmiMushi
    curU__Q24Game8UmiMushi:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051ED90
    lbl_8051ED90:
        .float 1.0
    .global lbl_8051ED94
    lbl_8051ED94:
        .float 0.5
    .global lbl_8051ED98
    lbl_8051ED98:
        .4byte 0x42480000
    .global lbl_8051ED9C
    lbl_8051ED9C:
        .4byte 0x42C80000
    .global lbl_8051EDA0
    lbl_8051EDA0:
        .4byte 0x00000000
    .global lbl_8051EDA4
    lbl_8051EDA4:
        .4byte 0x3EE66666
    .global lbl_8051EDA8
    lbl_8051EDA8:
        .4byte 0x40000000
    .global lbl_8051EDAC
    lbl_8051EDAC:
        .4byte 0x41F00000
    .global lbl_8051EDB0
    lbl_8051EDB0:
        .4byte 0x40A00000
    .global lbl_8051EDB4
    lbl_8051EDB4:
        .4byte 0x41200000
    .global lbl_8051EDB8
    lbl_8051EDB8:
        .4byte 0x42A00000
    .global lbl_8051EDBC
    lbl_8051EDBC:
        .4byte 0x41C80000
    .global lbl_8051EDC0
    lbl_8051EDC0:
        .4byte 0xC47A0000
    .global lbl_8051EDC4
    lbl_8051EDC4:
        .4byte 0x42700000
    .global lbl_8051EDC8
    lbl_8051EDC8:
        .4byte 0x43B40000
    .global lbl_8051EDCC
    lbl_8051EDCC:
        .4byte 0x40490FDB
    .global lbl_8051EDD0
    lbl_8051EDD0:
        .4byte 0x3BB60B61
    .global lbl_8051EDD4
    lbl_8051EDD4:
        .4byte 0xC3A2F983
    .global lbl_8051EDD8
    lbl_8051EDD8:
        .4byte 0x43A2F983
    .global lbl_8051EDDC
    lbl_8051EDDC:
        .4byte 0x44610000
    .global lbl_8051EDE0
    lbl_8051EDE0:
        .4byte 0x47000000
    .global lbl_8051EDE4
    lbl_8051EDE4:
        .4byte 0x40C90FDB
    .global lbl_8051EDE8
    lbl_8051EDE8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051EDF0
    lbl_8051EDF0:
        .4byte 0x4096CBE4
    .global lbl_8051EDF4
    lbl_8051EDF4:
        .4byte 0x42400000
    .global lbl_8051EDF8
    lbl_8051EDF8:
        .4byte 0x3C23D70A
    .global lbl_8051EDFC
    lbl_8051EDFC:
        .4byte 0x3FC90FDB
    .global lbl_8051EE00
    lbl_8051EE00:
        .4byte 0x3F99999A
    .global lbl_8051EE04
    lbl_8051EE04:
        .4byte 0x3FC00000
    .global lbl_8051EE08
    lbl_8051EE08:
        .4byte 0x3F4CCCCD
        .4byte 0x00000000
*/

namespace Game {
namespace UmiMushi {

static const char unusedString[] = "umiMushi";
Obj* curU;

/*
 * --INFO--
 * Address:	80383100
 * Size:	000038
 */

static bool eyeScaleCallBack(J3DJoint* joint, int t)
{
	if (t == 0 && curU) {
		curU->eyeScaleMtxCalc();
	}
	return true;
};

/*
 * --INFO--
 * Address:	80383138
 * Size:	000038
 */
static bool weakScaleCallBack(J3DJoint* joint, int t)
{
	if (t == 0 && curU) {
		curU->weakScaleMtxCalc();
	}
	return true;
};

/*
 * --INFO--
 * Address:	80383170
 * Size:	0000B4
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	float scale = 1.0f;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		scale = 0.5f;
	}
	mScaleModifier = scale;
	mScale         = Vector3f(scale);
	mCollTree->mPart->setScale(scale);
	mCurLodSphere.mRadius = scale * C_PARMS->mGeneral.mOffCameraRadius.mValue;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		C_PARMS->mGeneral.mHeightOffsetFromFloor.mValue = 50.0f;
	}
	mCollTree->getCollPart('weak')->setScale(C_PARMS->_A34); // scale of weak point (tail bulb)
}

/*
 * --INFO--
 * Address:	80383224
 * Size:	000030
 */
f32 Obj::getBodyRadius()
{
	if (isEvent(0, EB_IsBittered)) {
		if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
			return 50.0f;
		}
		return 100.0f;
	}
	return 0.0f;
}

/*
 * --INFO--
 * Address:	80383254
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 faceDirection) { EnemyBase::birth(position, faceDirection); }

/*
 * --INFO--
 * Address:	80383274
 * Size:	0005A8
 */

void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_IsDeathEffectEnabled);
	mHeadJoint = mModel->getJoint("head_joint1");
	P2ASSERTLINE(124, mHeadJoint);
	mTargetNavi = nullptr;
	_2BC        = mHomePosition;
	_2E0        = 0;
	_2E4        = mHomePosition;
	_2F0        = 0;
	_2F4        = 0;
	_2FC        = 0.0f;
	mTargetNavi = nullptr; // second null initialization of targetNavi
	_2DC        = 0;
	_300        = 0;
	mNextState  = UMIMUSHI_NULL;

	mNormalColor2.r = -25;
	mNormalColor2.g = -100;
	mNormalColor2.b = -30;

	mOlimarColor1.r = 60;
	mOlimarColor1.g = -115;
	mOlimarColor1.b = -115;

	mOlimarColor2.r = 0;
	mOlimarColor2.g = -180;
	mOlimarColor2.b = -180;

	mLouieColor1.r = -30;
	mLouieColor1.g = -30;
	mLouieColor1.b = 50;

	mLouieColor2.r = -80;
	mLouieColor2.g = -80;
	mLouieColor2.b = 0;

	mNormalColor1.r = 0;
	mNormalColor1.g = -25;
	mNormalColor1.b = -75;

	_31C = mNormalColor1;
	_314 = mNormalColor1;

	curU = nullptr;

	mFsm->start(this, UMIMUSHI_Walk, nullptr);

	P2ASSERTLINE(157, _354);
	_354->start(C_MGR->mTexAnimation);

	P2ASSERTLINE(160, mShadowMgr);
	mShadowMgr->init();

	J3DModelData* modelData = mModel->mJ3dModel->mModelData;
	P2ASSERTLINE(166, modelData);

	u16 matIdx = modelData->mMaterialTable.mMaterialNames->getIndex("cc_mat1_v");
	_310       = modelData->mMaterialTable.mMaterials[matIdx];

	P2ASSERTLINE(171, _310);

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushi) {
		PSM::EnemyMidBoss* bossSoundObj = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		checkMidBoss(bossSoundObj);
		bossSoundObj->setAppearFlag(false);
		bossSoundObj->_118 = true;
	} else {
		setParameters();
		float health = C_PROPERPARMS.mBlindHealth.mValue;
		mHealth      = health;
		mMaxHealth   = health;
		_35C         = 0.45f;
		P2ASSERTLINE(189, mModel);
		J3DModelData* modelData                                 = mModel->mJ3dModel->mModelData;
		mEyeJointIdx                                            = mModel->getJointIndex("eyes_joint1");
		mWeakJointIdx                                           = mModel->getJointIndex("weak_joint2");
		modelData->mJointTree.mJoints[mEyeJointIdx]->mFunction  = UmiMushi::eyeScaleCallBack;
		modelData->mJointTree.mJoints[mWeakJointIdx]->mFunction = UmiMushi::weakScaleCallBack;
	}
	mDropGroup     = EDG_None;
	mHamonPosition = mPosition;
	P2ASSERTLINE(212, mEfxHamon);
	efx::Arg efxArg(mHamonPosition);
	mEfxHamon->create(&efxArg);
	mEfxHamon->setGlobalScale(mScaleModifier);

	P2ASSERTLINE(218, mEfxWeakRed);
	P2ASSERTLINE(219, mEfxWeakBlue);
	Matrixf* modelMtx = mModel->getJoint("weak_joint2")->getWorldMatrix();
	mEfxWeakRed->setMtxptr(modelMtx->mMatrix.mtxView);
	mEfxWeakBlue->setMtxptr(modelMtx->mMatrix.mtxView);

	P2ASSERTLINE(225, mEfxEyeRed[0]);
	P2ASSERTLINE(226, mEfxEyeRed[1]);

	P2ASSERTLINE(228, mEfxEyeBlue[0]);
	P2ASSERTLINE(229, mEfxEyeBlue[1]);

	modelMtx = mModel->getJoint("ef_eye_r")->getWorldMatrix();
	mEfxEyeRed[0]->setMtxptr(modelMtx->mMatrix.mtxView);
	mEfxEyeBlue[0]->setMtxptr(modelMtx->mMatrix.mtxView);

	modelMtx = mModel->getJoint("ef_eye_l")->getWorldMatrix();
	mEfxEyeRed[1]->setMtxptr(modelMtx->mMatrix.mtxView);
	mEfxEyeBlue[1]->setMtxptr(modelMtx->mMatrix.mtxView);

	P2ASSERTLINE(239, mEfxEat);
	P2ASSERTLINE(240, mEfxBubble);

	_388 = mModel->getJoint("bero_joint1")->getWorldMatrix();

	mEfxEat->mMtx    = _388;
	mEfxBubble->mMtx = _388;
}

/*
 * --INFO--
 * Address:	8038381C
 * Size:	000428
 */
Obj::Obj()
    : mHeadJoint(nullptr)
    , mTargetNavi(nullptr)
    , _2DD(0)
    , _310(nullptr)
    , _354(nullptr)
    , mShadowMgr(nullptr)
{
	mEfxHamon      = nullptr;
	mEfxWeakRed    = nullptr;
	mEfxWeakBlue   = nullptr;
	mEfxEyeRed[0]  = nullptr;
	mEfxEyeRed[1]  = nullptr;
	mEfxEyeBlue[0] = nullptr;
	mEfxEyeBlue[1] = nullptr;
	mEfxEat        = nullptr;
	mEfxBubble     = nullptr;
	_388           = nullptr;
	mFsm           = nullptr;
	mJointIndices  = nullptr;

	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	_354       = new Sys::MatLoopAnimator;
	mShadowMgr = new UmimushiShadowMgr(this);

	mEfxHamon = new efx::TUmiHamon(&mHamonPosition);

	mEfxWeakRed  = new efx::TUmiWeakRed;
	mEfxWeakBlue = new efx::TUmiWeakBlue;

	mEfxEyeRed[0]  = new efx::TUmiEyeRed;
	mEfxEyeBlue[0] = new efx::TUmiEyeBlue;
	mEfxEyeRed[1]  = new efx::TUmiEyeRed;
	mEfxEyeBlue[1] = new efx::TUmiEyeBlue;

	mEfxEat    = new efx::TUmiEat;
	mEfxBubble = new efx::TUmiDeadawa;
}

/*
 * --INFO--
 * Address:	80383C44
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80383C90
 * Size:	000090
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mHamonPosition  = mPosition; // blobing pos??
	WaterBox* water = mWaterBox;
	if (water) {
		mHamonPosition.y = *water->getSeaHeightPtr();
	} else {
		mHamonPosition.y -= 50.0f;
	}
}

/*
 * --INFO--
 * Address:	80383D20
 * Size:	0004B0
 */
void Obj::doAnimationCullingOff()
{

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		curU = this;
	}
	EnemyBase::doAnimationCullingOff();
	mShadowMgr->update();
	if (mTargetNavi && _2DC) {
		if (_300 == 0) {
			if (mTargetNavi->mNaviIndex == 0) {
				mSoundObj->startSound(PSSE_EN_UMI_SEARCH_ORIMER, 0);
			} else {
				mSoundObj->startSound(PSSE_EN_UMI_SEARCH_LUGIE, 0);
			}
		}
		_300++;
		if (_300 >= 30) {
			_300 = 0;
		}
	}
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushi) {
		PSM::EnemyBoss* bossSound = static_cast<PSM::EnemyBoss*>(mSoundObj);
		checkBoss(bossSound);
		if (bossSound) {
			if (mSticked) {
				bossSound->postPikiAttack(true);
			} else {
				bossSound->postPikiAttack(true);
			}
		}
	}
	Mtx* worldMtxPtr;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {

		for (int slot = 0; slot < mMouthSlots.getMax(); slot++) {
			if (!mMouthSlots.getStuckCreature(slot))
				continue;

			Mtx* mtxs = mModel->mJ3dModel->mMtxBuffer->mWorldMatrices;
			int idx   = mJointIndices[slot];

			worldMtxPtr   = &mtxs[idx];
			Mtx& worldMtx = *worldMtxPtr;

			Vector3f vec0(worldMtx[0][0], worldMtx[1][0], worldMtx[2][0]);
			Vector3f vec1(worldMtx[0][1], worldMtx[1][1], worldMtx[2][1]);
			Vector3f vec2(worldMtx[0][2], worldMtx[1][2], worldMtx[2][2]);
			// Vector3f vec3 (worldMtx[0][3], worldMtx[1][3], worldMtx[2][3]);

			float mtxFactor = vec1.normalise();
			mtxFactor *= 2.0f;
			if (mtxFactor > 2.0f) {
				mtxFactor = 2.0f;
			}
			PSVECCrossProduct((Vec*)&vec1, (Vec*)&vec2, (Vec*)&vec0);
			vec0.normalise();
			PSVECCrossProduct((Vec*)&vec0, (Vec*)&vec1, (Vec*)&vec2);
			vec2.normalise();

			worldMtx[0][0] = vec0.x * mtxFactor;
			worldMtx[1][0] = vec0.y * mtxFactor;
			worldMtx[2][0] = vec0.z * mtxFactor;

			worldMtx[0][1] = vec1.x * mtxFactor;
			worldMtx[1][1] = vec1.y * mtxFactor;
			worldMtx[2][1] = vec1.z * mtxFactor;

			worldMtx[0][2] = vec2.x * mtxFactor;
			worldMtx[1][2] = vec2.y * mtxFactor;
			worldMtx[2][2] = vec2.z * mtxFactor;
		}
	}
	curU = nullptr;
}

/*
 * --INFO--
 * Address:	803841D0
 * Size:	000034
 */
void Obj::doAnimationCullingOn()
{
	EnemyBase::doAnimationCullingOn();
	createColorEffect();
}

/*
 * --INFO--
 * Address:	80384204
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	80384208
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80384228
 * Size:	000098
 */
void Obj::changeMaterial()
{
	J3DModel* model = mModel->mJ3dModel;
	_310->mTevBlock->setTevColor(0, _314);
	model->calcMaterial();
	_354->animate(30.0f);
}

/*
 * --INFO--
 * Address:	803842C0
 * Size:	0000DC
 */
void Obj::doStartMovie()
{
	mEfxHamon->startDemoDrawOff();
	mEfxWeakRed->startDemoDrawOff();
	mEfxWeakBlue->startDemoDrawOff();
	mEfxEyeRed[0]->startDemoDrawOff();
	mEfxEyeRed[1]->startDemoDrawOff();
	mEfxEyeBlue[0]->startDemoDrawOff();
	mEfxEyeBlue[1]->startDemoDrawOff();
	mEfxEat->startDemoDrawOff();
	mEfxBubble->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8038439C
 * Size:	0000DC
 */
void Obj::doEndMovie()
{
	mEfxHamon->endDemoDrawOn();
	mEfxWeakRed->endDemoDrawOn();
	mEfxWeakBlue->endDemoDrawOn();
	mEfxEyeRed[0]->endDemoDrawOn();
	mEfxEyeRed[1]->endDemoDrawOn();
	mEfxEyeBlue[0]->endDemoDrawOn();
	mEfxEyeBlue[1]->endDemoDrawOn();
	mEfxEat->endDemoDrawOn();
	mEfxBubble->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80384478
 * Size:	000090
 */
void Obj::getShadowParam(ShadowParam& parms)
{
	mHeadJoint->getWorldMatrix()->getTranslation(parms.mPosition);
	parms.mPosition.y                 = mPosition.y + 5.0f;
	parms.mBoundingSphere.mPosition.x = 0.0f;
	parms.mBoundingSphere.mPosition.y = 1.0f;
	parms.mBoundingSphere.mPosition.z = 0.0f;
	parms.mBoundingSphere.mRadius     = 10.0f;
	parms.mSize                       = mScaleModifier * 80.0f;
}

/*
 * --INFO--
 * Address:	80384508
 * Size:	000040
 */
void Obj::doSimulation(f32 speed)
{
	--_2E0;
	if (_2E0 < 0) {
		_2E0 = 0;
	}
	EnemyBase::doSimulation(speed);
}

/*
 * --INFO--
 * Address:	80384548
 * Size:	000164
 */
bool Obj::damageCallBack(Creature* creature, f32 strength, CollPart* part)
{
	if (isEvent(0, EB_IsBittered)) {
		addDamage(strength, 1.0f);
		return true;
	}
	P2ASSERTLINE(678, creature);
	creature->isPiki();
	Piki* piki = static_cast<Piki*>(creature);
	if (part) {
		if (piki->isAlive() && piki->isStickTo()) {
			addDamage(strength, 1.0f);
			return true;
		}
	} else {
		if (piki->isAlive() && piki->getPosition().y < mPosition.y + 50.0f) {
			addDamage(strength * C_PROPERPARMS.mDamageRate.mValue, 1.0f);
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803846AC
 * Size:	0000BC
 */
bool Obj::pressCallBack(Creature* creature, f32 strength, CollPart* part)
{

	P2ASSERTLINE(714, creature);
	if (creature->isPiki()) {
		Piki* piki = static_cast<Piki*>(creature);

		if ((int)piki->mPikiKind == Purple) {
			strength *= C_PROPERPARMS.mPurpleDamageRate.mValue;
		}
	}
	return EnemyBase::pressCallBack(creature, strength, part);
}

/*
 * --INFO--
 * Address:	80384768
 * Size:	0000BC
 */
bool Obj::hipdropCallBack(Creature* creature, f32 strength, CollPart* part)
{
	P2ASSERTLINE(733, creature);
	if (creature->isPiki()) {
		Piki* piki = static_cast<Piki*>(creature);

		if ((int)piki->mPikiKind == Purple) {
			strength *= C_PROPERPARMS.mPurpleDamageRate.mValue;
		}
	}
	return EnemyBase::hipdropCallBack(creature, strength, part);
}

/*
 * --INFO--
 * Address:	80384824
 * Size:	0000AC
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	P2ASSERTLINE(752, creature);
	if (creature->isPiki() && (int)static_cast<Piki*>(creature)->mPikiKind == Purple) {
		damage *= C_PROPERPARMS.mPurpleDamageRate.mValue;
	}

	return EnemyBase::earthquakeCallBack(creature, damage);
}

/*
 * --INFO--
 * Address:	803848D0
 * Size:	000020
 */
void Obj::collisionCallback(CollEvent& event) { EnemyBase::collisionCallback(event); }

/*
 * --INFO--
 * Address:	803848F0
 * Size:	000130
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(7);
	char* mouthSlotNames[7] = { "kamu_joint1", "kamu_joint2", "kamu_joint3", "kamu_joint4", "kamu_joint5", "kamu_joint6", "kamu_joint7" };
	mJointIndices           = new u16[7];

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		mMouthSlots.setup(i, mModel, mouthSlotNames[i]);
		u32 jointIdx     = mModel->getJointIndex(mouthSlotNames[i]);
		mJointIndices[i] = jointIdx;
		if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
			mMouthSlots.getSlot(i)->mRadius = 25.0f;
		} else {
			mMouthSlots.getSlot(i)->mRadius = 30.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	80384A20
 * Size:	000094
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mCollTree->getCollPart('head')->mSpecialID = 'st__';
	mCollTree->getCollPart('kuti')->mSpecialID = 'st__';
	mCollTree->getCollPart('ketu')->mSpecialID = 'st__';
	fadeAllEffect();
}

/*
 * --INFO--
 * Address:	80384AB4
 * Size:	0000BC
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mCollTree->getCollPart('head')->mSpecialID = '____';
	mCollTree->getCollPart('kuti')->mSpecialID = '____';
	mCollTree->getCollPart('ketu')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, C_PARMS->mGeneral.mShakeRateMaybe.mValue, C_PARMS->mGeneral.mShakeKnockback.mValue,
	                            C_PARMS->mGeneral.mShakeDamage.mValue, -1000.0f, nullptr);
	mToFlick = 0.0f;
	createColorEffect();
}

/*
 * --INFO--
 * Address:	80384B70
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(8, nullptr); }

/*
 * --INFO--
 * Address:	80384B98
 * Size:	00004C
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& settings)
{
	EnemyBase::doGetLifeGaugeParam(settings);
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		settings.mPosition.y = 60.0f;
	}
}

/*
 * --INFO--
 * Address:	80384BE4
 * Size:	00005C
 */
bool Obj::isReachToGoal(f32 radius)
{
	_2F4++;
	if (_2F4 > 800) {
		_2F4 = 0;
		return true;
	}
	return sqrDistanceXZ(mPosition, _2BC) < SQUARE(radius); // how is this not matching >:O
}

/*
 * --INFO--
 * Address:	80384C40
 * Size:	000358
 */
void Obj::walkFunc()
{
	f32 speed         = C_PARMS->mGeneral.mMoveSpeed.mValue;
	f32 inA1C         = C_PARMS->_A1C;
	f32 rotationAccel = C_PARMS->mGeneral.mRotationalAccel.mValue;
	f32 rotationSpeed = C_PARMS->mGeneral.mRotationalSpeed.mValue;

	_2FC += C_PARMS->_A20;
	if (_2FC > 360.0f) {
		_2FC -= 360.0f;
	}

	f32 somethingRotation = sin(_2FC);
	f32 idk               = inA1C * somethingRotation;
	if (!C_PARMS->_A10) {
		idk = 0.0f;
	}
	mFaceDir            = _2F8;
	f32 faceDirRads     = idk * PI * DEG2RAD;
	Vector3f position   = getPosition();
	Vector2f stupidVec2 = Vector2f(position.x - _2BC.x, position.z - _2BC.z);
	f32 tailAngMaybe    = JMath::atanTable_.atan2_(stupidVec2.x, stupidVec2.y);
	tailAngMaybe        = roundAng(tailAngMaybe);
	f32 faceDir         = getFaceDir();
	angDist(tailAngMaybe, faceDir);

	f32 totalRotation        = tailAngMaybe * rotationAccel;
	f32 rotationSpeedRadians = rotationSpeed * PI * DEG2RAD;
	f32 rotationAmount       = totalRotation;
	if (rotationSpeedRadians < FABS(totalRotation)) {
		rotationAmount = rotationSpeedRadians;
		if (totalRotation <= 0.0f) {
			totalRotation = -totalRotation;
		}
	}

	faceDir  = getFaceDir();
	mFaceDir = roundAng(faceDir + totalRotation);

	mRotation.y = mFaceDir;

	f32 deltaFaceDir = faceDirRads + mFaceDir;

	f32 sinSmth = pikmin2_sinf(deltaFaceDir) * speed;
	f32 cosSmth = pikmin2_cosf(deltaFaceDir) * speed;

	_2F8 = mFaceDir;

	mFaceDir += faceDirRads;
	mRotation.y = mFaceDir;

	mTargetVelocity = Vector3f(sinSmth, mTargetVelocity.y, cosSmth);

	_2F0++;

	if (_2F0 > 120) {
		if (sqrDistanceXZ(mPosition, _2E4) < SQUARE(30.0f)) {
			_2E0            = 120;
			mTargetCreature = nullptr;
			_2BC            = mHomePosition;
		}
		_2E4 = mPosition;
		_2F0 = 0;
	}
	mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);
}

/*
 * --INFO--
 * Address:	80384F98
 * Size:	000150
 */
void Obj::setNextGoal()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f31, 0x35c(r4)
	beq      lbl_80384FD8
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80384FD8
	lfs      f31, 0x934(r4)

lbl_80384FD8:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051EDE8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051EDE0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051EDE4@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_80385058
	lfs      f0, lbl_8051EDD4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8038507C

lbl_80385058:
	lfs      f0, lbl_8051EDD8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8038507C:
	lfs      f1, 0x2bc(r31)
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2bc(r31)
	bge      lbl_80385098
	fneg     f3, f3

lbl_80385098:
	lfs      f1, lbl_8051EDD8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2c4(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2c4(r31)
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803850E8
 * Size:	000810
 */
void Obj::changeColor()
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
	stw      r31, 0x5c(r1)
	mr       r31, r3
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051ED90@sda21(r2)
	mr       r3, r31
	fsubs    f31, f1, f0
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_80385580
	lfs      f30, lbl_8051EDA0@sda21(r2)
	mr       r3, r31
	lfs      f29, lbl_8051ED90@sda21(r2)
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xa
	bne      lbl_803851EC
	mr       r3, r31
	bl       getMotionFrameMax__Q24Game9EnemyBaseFv
	lfs      f2, lbl_8051ED90@sda21(r2)
	lwz      r3, 0x188(r31)
	fsubs    f0, f1, f2
	lwz      r0, 0x1c(r3)
	fdivs    f31, f31, f0
	cmplwi   r0, 0x3e8
	bne      lbl_80385170
	fmr      f31, f2

lbl_80385170:
	lfs      f1, lbl_8051EDF0@sda21(r2)
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fmuls    f1, f1, f31
	fcmpo    cr0, f1, f0
	bge      lbl_803851B0
	lfs      f0, lbl_8051EDD4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803851D4

lbl_803851B0:
	lfs      f0, lbl_8051EDD8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803851D4:
	fabs     f1, f0
	lfs      f0, lbl_8051ED90@sda21(r2)
	frsp     f1, f1
	fmr      f30, f1
	fsubs    f29, f0, f1
	b        lbl_803853A8

lbl_803851EC:
	lwz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	beq      lbl_803853A8
	lfs      f0, lbl_8051EDB4@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_803852F0
	fdivs    f31, f31, f0
	lis      r3, 0x4330
	lha      r0, 0x31c(r31)
	lha      r4, 0x344(r31)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_8051ED90@sda21(r2)
	xoris    r4, r4, 0x8000
	stw      r0, 0xc(r1)
	lfd      f2, lbl_8051EDE8@sda21(r2)
	fsubs    f3, f0, f31
	stw      r3, 8(r1)
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f0, f0, f2
	stw      r3, 0x10(r1)
	lfd      f1, 0x10(r1)
	fmuls    f0, f0, f3
	stw      r3, 0x28(r1)
	fsubs    f1, f1, f2
	stw      r3, 0x20(r1)
	fmadds   f0, f1, f31, f0
	stw      r3, 0x40(r1)
	stw      r3, 0x38(r1)
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x31e(r31)
	lha      r3, 0x346(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x28(r1)
	stw      r0, 0x24(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x20(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f0, f3
	fmadds   f0, f1, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x320(r31)
	lha      r3, 0x348(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x44(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x40(r1)
	stw      r0, 0x3c(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x38(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f0, f3
	fmadds   f0, f1, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	sth      r0, 0x318(r31)

lbl_803852F0:
	lfs      f0, lbl_8051EDF4@sda21(r2)
	fcmpo    cr0, f31, f0
	blt      lbl_803858CC
	fsubs    f31, f31, f0
	mr       r3, r31
	bl       getMotionFrameMax__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051EDF4@sda21(r2)
	lwz      r3, 0x188(r31)
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051ED90@sda21(r2)
	lwz      r0, 0x1c(r3)
	fsubs    f0, f0, f1
	cmplwi   r0, 0x3e8
	fdivs    f31, f31, f0
	bne      lbl_80385330
	fmr      f31, f1

lbl_80385330:
	lfs      f1, lbl_8051EDF0@sda21(r2)
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fmuls    f1, f1, f31
	fcmpo    cr0, f1, f0
	bge      lbl_80385370
	lfs      f0, lbl_8051EDD4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80385394

lbl_80385370:
	lfs      f0, lbl_8051EDD8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80385394:
	fabs     f1, f0
	lfs      f0, lbl_8051ED90@sda21(r2)
	frsp     f1, f1
	fmr      f30, f1
	fsubs    f29, f0, f1

lbl_803853A8:
	lwz      r3, 0x2d8(r31)
	lhz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	bne      lbl_8038549C
	lha      r0, 0x324(r31)
	lis      r3, 0x4330
	lha      r4, 0x32c(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x40(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_8051EDE8@sda21(r2)
	stw      r0, 0x44(r1)
	lfd      f0, 0x40(r1)
	stw      r4, 0x4c(r1)
	fsubs    f0, f0, f2
	stw      r3, 0x48(r1)
	lfd      f1, 0x48(r1)
	fmuls    f0, f29, f0
	stw      r3, 0x28(r1)
	fsubs    f1, f1, f2
	stw      r3, 0x30(r1)
	fmadds   f0, f30, f1, f0
	stw      r3, 0x10(r1)
	stw      r3, 0x18(r1)
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x326(r31)
	lha      r3, 0x32e(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x30(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f29, f0
	fmadds   f0, f30, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x328(r31)
	lha      r3, 0x330(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f29, f0
	fmadds   f0, f30, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x318(r31)
	b        lbl_803858CC

lbl_8038549C:
	lha      r0, 0x334(r31)
	lis      r3, 0x4330
	lha      r4, 0x33c(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x40(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_8051EDE8@sda21(r2)
	stw      r0, 0x44(r1)
	lfd      f0, 0x40(r1)
	stw      r4, 0x4c(r1)
	fsubs    f0, f0, f2
	stw      r3, 0x48(r1)
	lfd      f1, 0x48(r1)
	fmuls    f0, f29, f0
	stw      r3, 0x28(r1)
	fsubs    f1, f1, f2
	stw      r3, 0x30(r1)
	fmadds   f0, f30, f1, f0
	stw      r3, 0x10(r1)
	stw      r3, 0x18(r1)
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x336(r31)
	lha      r3, 0x33e(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x30(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f29, f0
	fmadds   f0, f30, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x338(r31)
	lha      r3, 0x340(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f29, f0
	fmadds   f0, f30, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x318(r31)
	b        lbl_803858CC

lbl_80385580:
	lfs      f0, lbl_8051ED9C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8038559C
	lfs      f0, lbl_8051EDF8@sda21(r2)
	fmuls    f31, f31, f0
	b        lbl_803855A0

lbl_8038559C:
	lfs      f31, lbl_8051ED90@sda21(r2)

lbl_803855A0:
	lfs      f1, lbl_8051EDFC@sda21(r2)
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fmuls    f1, f1, f31
	fcmpo    cr0, f1, f0
	bge      lbl_803855E0
	lfs      f0, lbl_8051EDD4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80385604

lbl_803855E0:
	lfs      f0, lbl_8051EDD8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80385604:
	lfs      f1, lbl_8051ED90@sda21(r2)
	lwz      r3, 0x2d8(r31)
	fsubs    f1, f1, f0
	cmplwi   r3, 0
	beq      lbl_803857EC
	lhz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	bne      lbl_80385708
	lha      r0, 0x32c(r31)
	lis      r3, 0x4330
	lha      r4, 0x34c(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x40(r1)
	xoris    r4, r4, 0x8000
	lfd      f4, lbl_8051EDE8@sda21(r2)
	stw      r0, 0x44(r1)
	lfd      f2, 0x40(r1)
	stw      r4, 0x4c(r1)
	fsubs    f2, f2, f4
	stw      r3, 0x48(r1)
	lfd      f3, 0x48(r1)
	fmuls    f2, f1, f2
	stw      r3, 0x28(r1)
	fsubs    f3, f3, f4
	stw      r3, 0x30(r1)
	fmadds   f2, f0, f3, f2
	stw      r3, 0x10(r1)
	stw      r3, 0x18(r1)
	fctiwz   f2, f2
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x32e(r31)
	lha      r3, 0x34e(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f2, f2, f4
	lfd      f3, 0x30(r1)
	fsubs    f3, f3, f4
	fmuls    f2, f1, f2
	fmadds   f2, f0, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x330(r31)
	lha      r3, 0x350(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f2, f2, f4
	lfd      f3, 0x18(r1)
	fsubs    f3, f3, f4
	fmuls    f1, f1, f2
	fmadds   f0, f0, f3, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x318(r31)
	b        lbl_803858CC

lbl_80385708:
	lha      r0, 0x33c(r31)
	lis      r3, 0x4330
	lha      r4, 0x34c(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x40(r1)
	xoris    r4, r4, 0x8000
	lfd      f4, lbl_8051EDE8@sda21(r2)
	stw      r0, 0x44(r1)
	lfd      f2, 0x40(r1)
	stw      r4, 0x4c(r1)
	fsubs    f2, f2, f4
	stw      r3, 0x48(r1)
	lfd      f3, 0x48(r1)
	fmuls    f2, f1, f2
	stw      r3, 0x28(r1)
	fsubs    f3, f3, f4
	stw      r3, 0x30(r1)
	fmadds   f2, f0, f3, f2
	stw      r3, 0x10(r1)
	stw      r3, 0x18(r1)
	fctiwz   f2, f2
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x33e(r31)
	lha      r3, 0x34e(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f2, f2, f4
	lfd      f3, 0x30(r1)
	fsubs    f3, f3, f4
	fmuls    f2, f1, f2
	fmadds   f2, f0, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x340(r31)
	lha      r3, 0x350(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f2, f2, f4
	lfd      f3, 0x18(r1)
	fsubs    f3, f3, f4
	fmuls    f1, f1, f2
	fmadds   f0, f0, f3, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x318(r31)
	b        lbl_803858CC

lbl_803857EC:
	lha      r0, 0x344(r31)
	lis      r3, 0x4330
	lha      r4, 0x34c(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x40(r1)
	xoris    r4, r4, 0x8000
	lfd      f4, lbl_8051EDE8@sda21(r2)
	stw      r0, 0x44(r1)
	lfd      f2, 0x40(r1)
	stw      r4, 0x4c(r1)
	fsubs    f2, f2, f4
	stw      r3, 0x48(r1)
	lfd      f3, 0x48(r1)
	fmuls    f2, f1, f2
	stw      r3, 0x28(r1)
	fsubs    f3, f3, f4
	stw      r3, 0x30(r1)
	fmadds   f2, f0, f3, f2
	stw      r3, 0x10(r1)
	stw      r3, 0x18(r1)
	fctiwz   f2, f2
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x346(r31)
	lha      r3, 0x34e(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f2, f2, f4
	lfd      f3, 0x30(r1)
	fsubs    f3, f3, f4
	fmuls    f2, f1, f2
	fmadds   f2, f0, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x348(r31)
	lha      r3, 0x350(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f2, f2, f4
	lfd      f3, 0x18(r1)
	fsubs    f3, f3, f4
	fmuls    f1, f1, f2
	fmadds   f0, f0, f3, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x318(r31)

lbl_803858CC:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803858F8
 * Size:	0001C0
 */
void Obj::resetColor()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	mr       r31, r3
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051ED90@sda21(r2)
	mr       r3, r31
	fsubs    f31, f1, f0
	bl       getMotionFrameMax__Q24Game9EnemyBaseFv
	lfs      f2, lbl_8051ED90@sda21(r2)
	lwz      r3, 0x188(r31)
	fsubs    f0, f1, f2
	lwz      r0, 0x1c(r3)
	fdivs    f31, f31, f0
	cmplwi   r0, 0x3e8
	bne      lbl_80385948
	fmr      f31, f2

lbl_80385948:
	lfs      f1, lbl_8051EDF0@sda21(r2)
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fmuls    f1, f1, f31
	fcmpo    cr0, f1, f0
	bge      lbl_80385988
	lfs      f0, lbl_8051EDD4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803859AC

lbl_80385988:
	lfs      f0, lbl_8051EDD8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803859AC:
	lha      r0, 0x31c(r31)
	lis      r3, 0x4330
	fabs     f0, f0
	lha      r4, 0x344(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x20(r1)
	xoris    r4, r4, 0x8000
	lfs      f1, lbl_8051ED90@sda21(r2)
	stw      r0, 0x24(r1)
	frsp     f3, f0
	lfd      f2, lbl_8051EDE8@sda21(r2)
	lfd      f0, 0x20(r1)
	stw      r4, 0x1c(r1)
	fsubs    f4, f1, f3
	fsubs    f0, f0, f2
	stw      r3, 0x18(r1)
	lfd      f1, 0x18(r1)
	fmuls    f0, f4, f0
	stw      r3, 0x38(r1)
	fsubs    f1, f1, f2
	stw      r3, 0x30(r1)
	fmadds   f0, f3, f1, f0
	stw      r3, 0x50(r1)
	stw      r3, 0x48(r1)
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	sth      r0, 0x314(r31)
	lha      r0, 0x31e(r31)
	lha      r3, 0x346(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x3c(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x38(r1)
	stw      r0, 0x34(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x30(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f4, f0
	fmadds   f0, f3, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	sth      r0, 0x316(r31)
	lha      r0, 0x320(r31)
	lha      r3, 0x348(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x54(r1)
	xoris    r0, r3, 0x8000
	lfd      f0, 0x50(r1)
	stw      r0, 0x4c(r1)
	fsubs    f0, f0, f2
	lfd      f1, 0x48(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f4, f0
	fmadds   f0, f3, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	sth      r0, 0x318(r31)
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80385AB8
 * Size:	0001BC
 */
f32 Obj::turnFunc()
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
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_80385B24
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c4(r31)

lbl_80385B24:
	lwz      r3, 0x28c(r31)
	li       r4, 0x513c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x39c(r31)
	lfs      f31, 0x2bc(r31)
	cmpwi    r0, 0x65
	lfs      f28, 0x2c4(r31)
	lfs      f2, lbl_8051ED90@sda21(r2)
	bne      lbl_80385B60
	lwz      r3, 0xc0(r31)
	lfs      f2, 0xa2c(r3)

lbl_80385B60:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f1, 0x8e4(r5)
	lfs      f0, 0x8bc(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f2, f1
	fmuls    f30, f2, f0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051EDD0@sda21(r2)
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80385C10
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80385C0C
	fmr      f29, f1
	b        lbl_80385C10

lbl_80385C0C:
	fneg     f29, f1

lbl_80385C10:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f1, f31
	lfs      f0, 0x1fc(r31)
	frsp     f1, f1
	stfs     f0, 0x1a8(r31)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80385C74
 * Size:	000014
 */
void Obj::resetWalkParm()
{
	_2F8 = mFaceDir;
	_2FC = 0.0f;
}

/*
 * --INFO--
 * Address:	80385C88
 * Size:	000248
 */
bool Obj::isChangeNavi()
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
	lwz      r0, 0x39c(r3)
	cmpwi    r0, 0x65
	bne      lbl_80385CCC
	li       r3, 0
	b        lbl_80385EA0

lbl_80385CCC:
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80385D04
	lwz      r0, 0x44(r4)
	cmpwi    r0, 3
	bne      lbl_80385D04
	lwz      r6, 0xc0(r31)
	li       r4, 0
	lfs      f1, lbl_8051EDC8@sda21(r2)
	li       r5, 0
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	mr       r30, r3
	b        lbl_80385D10

lbl_80385D04:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	mr       r30, r3

lbl_80385D10:
	cmplwi   r30, 0
	beq      lbl_80385E9C
	lwz      r0, 0x2d8(r31)
	lwz      r3, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f29, 0x44c(r3)
	beq      lbl_80385D34
	lfs      f0, lbl_8051EE00@sda21(r2)
	fmuls    f29, f29, f0

lbl_80385D34:
	mr       r3, r30
	fmuls    f29, f29, f29
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80385E54
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f30, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x2c
	lwz      r12, 0(r30)
	lfs      f31, 0x24(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x190(r31)
	lfs      f0, 0x194(r31)
	fsubs    f3, f1, f31
	lfs      f4, 0x2c(r1)
	lfs      f1, 0x18c(r31)
	fsubs    f2, f0, f30
	fsubs    f1, f1, f4
	fmuls    f0, f3, f3
	fmadds   f0, f1, f1, f0
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80385E54
	lwz      r0, 0x2d8(r31)
	cmplw    r0, r30
	beq      lbl_80385E4C
	lha      r0, 0x314(r31)
	addi     r3, r1, 8
	sth      r0, 0x31c(r31)
	lha      r0, 0x316(r31)
	sth      r0, 0x31e(r31)
	lha      r0, 0x318(r31)
	sth      r0, 0x320(r31)
	lha      r0, 0x31a(r31)
	sth      r0, 0x322(r31)
	stw      r30, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	stw      r0, 0x230(r31)
	lwz      r4, 0x2d8(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r0, 0
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c4(r31)
	stb      r0, 0x2dc(r31)
	b        lbl_80385EA0

lbl_80385E4C:
	li       r3, 0
	b        lbl_80385EA0

lbl_80385E54:
	lwz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	bne      lbl_80385E68
	cmplw    r0, r30
	bne      lbl_80385E9C

lbl_80385E68:
	li       r4, 0
	li       r3, 1
	stw      r4, 0x2d8(r31)
	lha      r0, 0x314(r31)
	sth      r0, 0x31c(r31)
	lha      r0, 0x316(r31)
	sth      r0, 0x31e(r31)
	lha      r0, 0x318(r31)
	sth      r0, 0x320(r31)
	lha      r0, 0x31a(r31)
	sth      r0, 0x322(r31)
	stb      r4, 0x2dc(r31)
	b        lbl_80385EA0

lbl_80385E9C:
	li       r3, 0

lbl_80385EA0:
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
 * Address:	80385ED0
 * Size:	0001D8
 */
bool Obj::isFindTarget()
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
	stw      r31, 0x4c(r1)
	mr       r31, r3
	li       r0, 0
	stw      r0, 0x230(r3)
	lwz      r0, 0x2e0(r3)
	cmpwi    r0, 0
	ble      lbl_80385F20
	li       r3, 0
	b        lbl_80386074

lbl_80385F20:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x44c(r3)
	fmuls    f0, f1, f1
	stfs     f1, 8(r1)
	stfs     f0, 8(r1)
	lwz      r4, 0x2d8(r31)
	cmplwi   r4, 0
	beq      lbl_80385FE0
	lwz      r5, 0xc0(r31)
	addi     r3, r1, 0x24
	lwz      r12, 0(r4)
	lfs      f28, 0x44c(r5)
	lwz      r12, 8(r12)
	fmuls    f28, f28, f28
	lfs      f29, 0x194(r31)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x30
	lfs      f31, 0x2c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f29
	lfs      f1, 0x30(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_80385FE0
	lwz      r0, 0x2d8(r31)
	addi     r3, r1, 0x18
	stw      r0, 0x230(r31)
	lwz      r4, 0x230(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_80386074

lbl_80385FE0:
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	stw      r3, 0x230(r31)
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	lwz      r6, 0xc0(r31)
	lfs      f28, 8(r1)
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	lfs      f0, 8(r1)
	fcmpo    cr0, f0, f28
	bge      lbl_80386030
	stw      r3, 0x230(r31)

lbl_80386030:
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_80386070
	lwz      r12, 0(r4)
	addi     r3, r1, 0xc
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_80386074

lbl_80386070:
	li       r3, 0

lbl_80386074:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803860A8
 * Size:	000240
 */
bool Obj::isAttackStart()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lfs      f1, lbl_8051EDD0@sda21(r2)
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x2d8(r3)
	lfs      f0, 0x5dc(r4)
	lfs      f2, 0x5b4(r4)
	cmplwi   r3, 0
	fmuls    f0, f1, f0
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f31, f2, f2
	fmuls    f30, f1, f0
	beq      lbl_80386240
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80386240
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
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
	lwz      r12, 0(r31)
	fmr      f27, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f30
	cror     2, 0, 2
	bne      lbl_80386240
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x38
	lfs      f27, 0x194(r31)
	lwz      r12, 0(r4)
	lfs      f28, 0x18c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x44
	lfs      f29, 0x40(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f29, f27
	lfs      f1, 0x44(r1)
	fsubs    f1, f1, f28
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80386240
	li       r3, 1
	b        lbl_803862AC

lbl_80386240:
	lwz      r5, 0xc0(r31)
	fmr      f1, f30
	mr       r3, r31
	li       r4, 0
	lfs      f2, 0x5b4(r5)
	li       r5, 0
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80386270
	stw      r3, 0x230(r31)
	li       r3, 1
	b        lbl_803862AC

lbl_80386270:
	lwz      r0, 0x39c(r31)
	cmpwi    r0, 0x65
	bne      lbl_803862A8
	lwz      r5, 0xc0(r31)
	fmr      f1, f30
	mr       r3, r31
	li       r4, 0
	lfs      f2, 0x5b4(r5)
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803862A8
	li       r3, 1
	b        lbl_803862AC

lbl_803862A8:
	li       r3, 0

lbl_803862AC:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r0, 0xb4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803862E8
 * Size:	0001B4
 */
bool Obj::isNeedTurn()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 0x2c
	mr       r4, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2bc(r31)
	lfs      f0, 0x2c4(r31)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lwz      r3, 0xc0(r31)
	fabs     f3, f1
	lfs      f1, lbl_8051EDD0@sda21(r2)
	lfs      f0, 0x844(r3)
	lfs      f2, lbl_8051EDCC@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	ble      lbl_803863B0
	li       r3, 1
	b        lbl_80386478

lbl_803863B0:
	lwz      r4, 0x2d8(r31)
	cmplwi   r4, 0
	beq      lbl_80386474
	lwz      r12, 0(r4)
	addi     r3, r1, 0x38
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f31, 0x38(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f30, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lwz      r3, 0xc0(r31)
	fabs     f3, f1
	lfs      f1, lbl_8051EDD0@sda21(r2)
	lfs      f0, 0x844(r3)
	lfs      f2, lbl_8051EDCC@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	ble      lbl_80386474
	li       r3, 1
	b        lbl_80386478

lbl_80386474:
	li       r3, 0

lbl_80386478:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038649C
 * Size:	00005C
 */
bool Obj::isOutOfTerritory(f32)
{
	/*
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r5, 0xc0(r3)
	cmplwi   r4, 0
	lfs      f0, 0x35c(r5)
	beq      lbl_803864C0
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_803864C0
	lfs      f0, 0x934(r5)

lbl_803864C0:
	fmuls    f4, f0, f1
	lfs      f2, 0x1a0(r3)
	lfs      f0, 0x194(r3)
	lfs      f3, 0x198(r3)
	fsubs    f2, f2, f0
	lfs      f1, 0x18c(r3)
	fmuls    f0, f4, f4
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void Obj::returnHome()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803864F8
 * Size:	00012C
 */
bool Obj::canMove()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r5, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f3, 0x35c(r5)
	beq      lbl_80386538
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80386538
	lfs      f3, 0x934(r5)

lbl_80386538:
	lfs      f1, 0x1a0(r31)
	lfs      f0, 0x194(r31)
	lfs      f2, lbl_8051ED90@sda21(r2)
	fsubs    f4, f1, f0
	lfs      f1, 0x198(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f2, f3, f2
	fsubs    f3, f1, f0
	fmuls    f1, f4, f4
	fmuls    f0, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80386604
	lwz      r4, 0x2d8(r31)
	cmplwi   r4, 0
	beq      lbl_80386604
	cmplwi   r3, 0
	lfs      f31, 0x35c(r5)
	beq      lbl_80386594
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80386594
	lfs      f31, 0x934(r5)

lbl_80386594:
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x10(r1)
	fmuls    f0, f31, f31
	lfs      f1, 0x1a0(r31)
	lfs      f4, 0xc(r1)
	fsubs    f2, f1, f5
	lfs      f1, 0x198(r31)
	lfs      f3, 8(r1)
	stfs     f3, 0x2bc(r31)
	fsubs    f3, f1, f3
	fmuls    f1, f2, f2
	stfs     f4, 0x2c0(r31)
	stfs     f5, 0x2c4(r31)
	fmadds   f1, f3, f3, f1
	lwz      r0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	stw      r0, 0x230(r31)
	ble      lbl_80386604
	lfs      f0, lbl_8051EDA0@sda21(r2)
	li       r3, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80386608

lbl_80386604:
	li       r3, 1

lbl_80386608:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386624
 * Size:	000490
 */
bool Obj::outMove()
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
	mr       r31, r3
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_80386A50
	lwz      r12, 0(r4)
	addi     r3, r1, 0x44
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x44(r1)
	lfs      f8, 0x198(r31)
	lfs      f31, 0x4c(r1)
	lfs      f6, 0x1a0(r31)
	fsubs    f2, f29, f8
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fsubs    f4, f31, f6
	lfs      f7, 0x19c(r31)
	fmadds   f0, f2, f2, f3
	fmuls    f1, f4, f4
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_803866CC
	ble      lbl_803866D0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803866D0

lbl_803866CC:
	fmr      f1, f3

lbl_803866D0:
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803866F0
	lfs      f0, lbl_8051ED90@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_803866F0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f5, 0x35c(r4)
	beq      lbl_80386714
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80386714
	lfs      f5, 0x934(r4)

lbl_80386714:
	lfs      f0, lbl_8051EE04@sda21(r2)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x894(r4)
	addi     r3, r3, atanTable___5JMath@l
	fmuls    f5, f0, f5
	lfs      f0, lbl_8051ED94@sda21(r2)
	fmuls    f28, f0, f1
	fmuls    f1, f2, f5
	fmuls    f0, f3, f5
	fmuls    f3, f4, f5
	fadds    f2, f8, f1
	fadds    f1, f7, f0
	fadds    f0, f6, f3
	stfs     f2, 0x304(r31)
	stfs     f1, 0x308(r31)
	stfs     f0, 0x30c(r31)
	lfs      f3, 0x304(r31)
	lfs      f1, 0x18c(r31)
	lfs      f2, 0x30c(r31)
	lfs      f0, 0x194(r31)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	fmr      f27, f1
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x194(r31)
	lis      r3, atanTable___5JMath@ha
	fsubs    f1, f29, f1
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f2, f31, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	fmr      f2, f27
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051ED90@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80386968
	lfs      f3, 0x194(r31)
	lfs      f4, 0x30c(r31)
	lfs      f5, 0x18c(r31)
	fsubs    f1, f3, f4
	lfs      f6, 0x304(r31)
	lfs      f0, lbl_8051ED9C@sda21(r2)
	fsubs    f2, f5, f6
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803867F8
	lfs      f0, lbl_8051EDA0@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80386A70

lbl_803867F8:
	fsubs    f4, f4, f3
	lfs      f1, lbl_8051EDA0@sda21(r2)
	fsubs    f3, f6, f5
	fmuls    f2, f4, f4
	fmadds   f0, f3, f3, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80386828
	ble      lbl_8038682C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8038682C

lbl_80386828:
	fmr      f2, f1

lbl_8038682C:
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80386848
	lfs      f0, lbl_8051ED90@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_80386848:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	fmuls    f30, f3, f28
	lfs      f2, lbl_8051ED94@sda21(r2)
	fmuls    f29, f4, f28
	lfs      f1, 0x8e4(r5)
	addi     r3, r1, 0x2c
	lfs      f0, 0x8bc(r5)
	lfs      f3, 0x1d4(r31)
	fmuls    f27, f2, f1
	lfs      f31, 0x1d8(r31)
	fmuls    f28, f2, f0
	lfs      f0, 0x1dc(r31)
	lwz      r12, 8(r12)
	stfs     f3, 0x38(r1)
	stfs     f31, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x304(r31)
	lfs      f0, 0x30c(r31)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f28, f1, f28
	lfs      f0, lbl_8051EDD0@sda21(r2)
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f0, f0, f27
	fabs     f2, f28
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80386930
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8038692C
	fmr      f28, f1
	b        lbl_80386930

lbl_8038692C:
	fneg     f28, f1

lbl_80386930:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	stfs     f30, 0x1d4(r31)
	stfs     f31, 0x1d8(r31)
	stfs     f29, 0x1dc(r31)
	b        lbl_80386A50

lbl_80386968:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f2, lbl_8051ED94@sda21(r2)
	lfs      f1, 0x8e4(r5)
	lfs      f0, 0x8bc(r5)
	lwz      r12, 8(r12)
	fmuls    f28, f2, f1
	fmuls    f27, f2, f0
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f31, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f27, f1, f27
	lfs      f0, lbl_8051EDD0@sda21(r2)
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f27
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80386A28
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_80386A24
	fmr      f27, f1
	b        lbl_80386A28

lbl_80386A24:
	fneg     f27, f1

lbl_80386A28:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f27, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_80386A50:
	lwz      r3, 0x28c(r31)
	li       r4, 0x513c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80386A70:
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
	lwz      r0, 0xc4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386AB4
 * Size:	000080
 */
void Obj::setFindAnim()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lha      r4, 0x314(r3)
	lha      r0, 0x344(r3)
	cmpw     r4, r0
	bne      lbl_80386B08
	lha      r4, 0x316(r31)
	lha      r0, 0x346(r31)
	cmpw     r4, r0
	bne      lbl_80386B08
	lha      r4, 0x318(r31)
	lha      r0, 0x348(r31)
	cmpw     r4, r0
	bne      lbl_80386B08
	li       r4, 0xa
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_80386B20

lbl_80386B08:
	mr       r3, r31
	bl       fadeColorEffect__Q34Game8UmiMushi3ObjFv
	mr       r3, r31
	li       r4, 5
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_80386B20:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386B34
 * Size:	000044
 */
void Obj::fadeAllEffect()
{
	mEfxHamon->fade();
	fadeColorEffect();
}

/*
 * --INFO--
 * Address:	80386B78
 * Size:	0000A8
 */
void Obj::fadeColorEffect()
{
	mEfxWeakRed->fade();
	mEfxWeakBlue->fade();
	mEfxEyeRed[0]->fade();
	mEfxEyeRed[1]->fade();
	mEfxEyeBlue[0]->fade();
	mEfxEyeBlue[1]->fade();
	_2DC = false;
}

/*
 * --INFO--
 * Address:	80386C20
 * Size:	00010C
 */
void Obj::createColorEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x2d8(r3)
	cmplwi   r0, 0
	beq      lbl_80386D18
	lis      r4, __vt__Q23efx3Arg@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r0, 1
	stw      r4, 8(r1)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x14(r1)
	stw      r3, 0x300(r31)
	stb      r0, 0x2dc(r31)
	lwz      r3, 0x2d8(r31)
	lhz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	bne      lbl_80386CD0
	lwz      r3, 0x368(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x370(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x374(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80386D18

lbl_80386CD0:
	lwz      r3, 0x36c(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x378(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x37c(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80386D18:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386D2C
 * Size:	0000C0
 */
void Obj::attackEffect()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 0x44(r1)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple1@ha
	li       r8, 0x1d3
	lwz      r9, 0x388(r3)
	li       r7, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx10TUmiAttack@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx1@l
	addi     r6, r4, __vt__Q23efx10TUmiAttack@l
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r0, 0x14(r1)
	lis      r4, __vt__Q23efx8ArgScale@ha
	addi     r0, r4, __vt__Q23efx8ArgScale@l
	addi     r5, r5, __vt__Q23efx3Arg@l
	sth      r8, 0x18(r1)
	addi     r4, r1, 0x24
	stw      r7, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r6, 0x14(r1)
	lwz      r8, 0x18c(r3)
	lwz      r7, 0x190(r3)
	lwz      r6, 0x194(r3)
	lfs      f3, 0x1f8(r3)
	addi     r3, r1, 0x14
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x24(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stw      r0, 0x24(r1)
	stfs     f3, 0x34(r1)
	bl       create__Q23efx10TUmiAttackFPQ23efx3Arg
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386DEC
 * Size:	0000C0
 */
void Obj::meltEffect()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, __vt__Q23efx8TSimple1@ha
	lis      r4, __vt__Q23efx5TBase@ha
	stw      r0, 0x44(r1)
	addi     r0, r4, __vt__Q23efx5TBase@l
	addi     r6, r5, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TUmiDeadmelt@ha
	stw      r31, 0x3c(r1)
	li       r5, 0x1d5
	mr       r31, r3
	lis      r3, __vt__Q23efx3Arg@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r6, 0x14(r1)
	addi     r6, r4, __vt__Q23efx12TUmiDeadmelt@l
	lis      r4, __vt__Q23efx8ArgScale@ha
	sth      r5, 0x18(r1)
	addi     r5, r3, __vt__Q23efx3Arg@l
	addi     r3, r1, 0x14
	stw      r0, 0x1c(r1)
	addi     r0, r4, __vt__Q23efx8ArgScale@l
	addi     r4, r1, 0x20
	stw      r6, 0x14(r1)
	lwz      r8, 0x38c(r31)
	lwz      r7, 0x390(r31)
	lwz      r6, 0x394(r31)
	lfs      f3, 0x1f8(r31)
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
	bl       create__Q23efx12TUmiDeadmeltFPQ23efx3Arg
	li       r0, 1
	stb      r0, 0x2dd(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386EAC
 * Size:	00010C
 */
void Obj::flickEffect()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_80386FA4
	lis      r3, __vt__Q23efx5TBase@ha
	li       r7, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x28(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx9TUmiFlick@ha
	li       r4, 0x1db
	stw      r0, 0x28(r1)
	addi     r6, r3, __vt__Q23efx9TUmiFlick@l
	li       r0, 0x1dc
	li       r8, 0x1dd
	sth      r4, 0x2c(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx8ArgScale@ha
	addi     r3, r1, 0x28
	sth      r0, 0x2e(r1)
	addi     r5, r5, __vt__Q23efx3Arg@l
	addi     r0, r4, __vt__Q23efx8ArgScale@l
	addi     r4, r1, 0x14
	sth      r8, 0x30(r1)
	stw      r7, 0x34(r1)
	stw      r7, 0x38(r1)
	stw      r7, 0x3c(r1)
	stw      r6, 0x28(r1)
	lwz      r8, 0x38c(r31)
	lwz      r7, 0x390(r31)
	lwz      r6, 0x394(r31)
	lfs      f3, 0x1f8(r31)
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
	bl       create__Q23efx9TUmiFlickFPQ23efx3Arg
	addi     r4, r31, 0x38c
	li       r3, 0x3849
	bl       PSStartSoundVec__FUlP3Vec
	cmplwi   r3, 0
	beq      lbl_80386FA4
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051EE08@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80386FA4:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386FB8
 * Size:	000070
 */
void Obj::eatEffect()
{
	efx::Arg arg(mPosition);
	mEfxEat->create(&arg);
	mEfxEat->setGlobalScale(mScaleModifier);
}

/*
 * --INFO--
 * Address:	80387028
 * Size:	000070
 */
void Obj::bubbleEffect()
{
	efx::Arg arg(mPosition);
	mEfxBubble->create(&arg);
	mEfxBubble->setGlobalScale(mScaleModifier);
}

/*
 * --INFO--
 * Address:	80387098
 * Size:	000028
 */
void Obj::delShadow() { shadowMgr->delNormalShadow(this); }

/*
 * --INFO--
 * Address:	803870C0
 * Size:	0002C8
 */
void Obj::eyeScaleMtxCalc()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x2dd(r3)
	cmplwi   r0, 0
	bne      lbl_80387358
	lwz      r3, 0x174(r30)
	lwz      r5, 0xc0(r30)
	lwz      r4, 8(r3)
	lhz      r3, 0x360(r30)
	lwz      r4, 0x84(r4)
	lbz      r0, 0xa15(r5)
	mulli    r3, r3, 0x30
	lwz      r4, 0xc(r4)
	cmplwi   r0, 0
	add      r31, r4, r3
	beq      lbl_80387134
	lfs      f0, 0xa30(r5)
	stfs     f0, 0x35c(r30)
	b        lbl_8038713C

lbl_80387134:
	lfs      f0, lbl_8051EDA4@sda21(r2)
	stfs     f0, 0x35c(r30)

lbl_8038713C:
	lfs      f1, 0x10(r31)
	lfs      f2, 0x20(r31)
	fmuls    f4, f1, f1
	lfs      f0, 0(r31)
	fmuls    f5, f2, f2
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_80387174
	ble      lbl_80387178
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_80387178

lbl_80387174:
	fmr      f4, f3

lbl_80387178:
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80387198
	lfs      f3, lbl_8051ED90@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_80387198:
	lfs      f4, 0x14(r31)
	lfs      f5, 0x24(r31)
	fmuls    f7, f4, f4
	lfs      f3, 4(r31)
	fmuls    f8, f5, f5
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fmadds   f7, f3, f3, f7
	fadds    f7, f8, f7
	fcmpo    cr0, f7, f6
	ble      lbl_803871D0
	ble      lbl_803871D4
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_803871D4

lbl_803871D0:
	fmr      f7, f6

lbl_803871D4:
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_803871F4
	lfs      f6, lbl_8051ED90@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f3, f3, f6
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6

lbl_803871F4:
	lfs      f9, 0x18(r31)
	lfs      f10, 0x28(r31)
	fmuls    f7, f9, f9
	lfs      f8, 8(r31)
	fmuls    f11, f10, f10
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fmadds   f7, f8, f8, f7
	fadds    f7, f11, f7
	fcmpo    cr0, f7, f6
	ble      lbl_8038722C
	ble      lbl_80387230
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_80387230

lbl_8038722C:
	fmr      f7, f6

lbl_80387230:
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_80387250
	lfs      f6, lbl_8051ED90@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f8, f8, f6
	fmuls    f9, f9, f6
	fmuls    f10, f10, f6

lbl_80387250:
	lfs      f31, 0x35c(r30)
	lis      r3, lbl_80493BEC@ha
	addi     r4, r3, lbl_80493BEC@l
	fmuls    f6, f0, f31
	fmuls    f0, f2, f31
	fmuls    f1, f1, f31
	stfs     f6, 0(r31)
	fmuls    f6, f3, f31
	fmuls    f4, f4, f31
	stfs     f1, 0x10(r31)
	fmuls    f3, f5, f31
	fmuls    f2, f8, f31
	stfs     f0, 0x20(r31)
	fmuls    f1, f9, f31
	fmuls    f0, f10, f31
	stfs     f6, 4(r31)
	stfs     f4, 0x14(r31)
	stfs     f3, 0x24(r31)
	stfs     f2, 8(r31)
	stfs     f1, 0x18(r31)
	stfs     f0, 0x28(r31)
	lfs      f30, 0x1c(r31)
	lwz      r3, 0x174(r30)
	bl       getJointIndex__Q28SysShape5ModelFPc
	lwz      r7, 0x174(r30)
	clrlwi   r0, r3, 0x10
	mulli    r5, r0, 0x30
	lis      r4, lbl_80493BEC@ha
	lwz      r6, 8(r7)
	mr       r3, r7
	addi     r4, r4, lbl_80493BEC@l
	lwz      r6, 0x84(r6)
	addi     r0, r5, 0x1c
	lwz      r5, 0xc(r6)
	lfsx     f29, r5, r0
	bl       getJointIndex__Q28SysShape5ModelFPc
	lfs      f0, lbl_8051ED90@sda21(r2)
	clrlwi   r0, r3, 0x10
	lwz      r4, 0x174(r30)
	mulli    r0, r0, 0x30
	fsubs    f4, f0, f31
	lwz      r3, 0xc0(r30)
	lwz      r4, 8(r4)
	lfs      f2, 0xa28(r3)
	fmuls    f1, f29, f4
	lwz      r3, 0x84(r4)
	lfs      f0, lbl_8051EDB0@sda21(r2)
	lwz      r3, 0xc(r3)
	fmadds   f3, f30, f31, f1
	add      r4, r3, r0
	fmadds   f1, f2, f4, f3
	fnmsubs  f0, f0, f4, f3
	stfs     f1, 0x1c(r31)
	stfs     f0, 0x1c(r31)
	lwz      r3, 0xc0(r30)
	lbz      r0, 0xa15(r3)
	cmplwi   r0, 0
	beq      lbl_80387358
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r31)
	lwz      r3, 0xc0(r30)
	lfs      f0, 0xa28(r3)
	fadds    f0, f29, f0
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x2c(r4)
	stfs     f0, 0x2c(r31)

lbl_80387358:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80387388
 * Size:	000184
 */
void Obj::weakScaleMtxCalc()
{
	/*
	lwz      r4, 0x174(r3)
	lhz      r0, 0x362(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lfs      f3, lbl_8051EDA0@sda21(r2)
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	lfs      f1, 0x10(r4)
	lfs      f2, 0x20(r4)
	fmuls    f4, f1, f1
	lfs      f0, 0(r4)
	fmuls    f5, f2, f2
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_803873DC
	ble      lbl_803873E0
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_803873E0

lbl_803873DC:
	fmr      f4, f3

lbl_803873E0:
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80387400
	lfs      f3, lbl_8051ED90@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_80387400:
	lfs      f3, 0x14(r4)
	lfs      f4, 0x24(r4)
	fmuls    f6, f3, f3
	lfs      f7, 4(r4)
	fmuls    f8, f4, f4
	lfs      f5, lbl_8051EDA0@sda21(r2)
	fmadds   f6, f7, f7, f6
	fadds    f6, f8, f6
	fcmpo    cr0, f6, f5
	ble      lbl_80387438
	ble      lbl_8038743C
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_8038743C

lbl_80387438:
	fmr      f6, f5

lbl_8038743C:
	lfs      f5, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8038745C
	lfs      f5, lbl_8051ED90@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f7, f7, f5
	fmuls    f3, f3, f5
	fmuls    f4, f4, f5

lbl_8038745C:
	lfs      f9, 0x18(r4)
	lfs      f10, 0x28(r4)
	fmuls    f6, f9, f9
	lfs      f8, 8(r4)
	fmuls    f11, f10, f10
	lfs      f5, lbl_8051EDA0@sda21(r2)
	fmadds   f6, f8, f8, f6
	fadds    f6, f11, f6
	fcmpo    cr0, f6, f5
	ble      lbl_80387494
	ble      lbl_80387498
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_80387498

lbl_80387494:
	fmr      f6, f5

lbl_80387498:
	lfs      f5, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_803874B8
	lfs      f5, lbl_8051ED90@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f8, f8, f5
	fmuls    f9, f9, f5
	fmuls    f10, f10, f5

lbl_803874B8:
	lwz      r3, 0xc0(r3)
	lfs      f11, 0xa34(r3)
	fmuls    f5, f0, f11
	fmuls    f1, f1, f11
	fmuls    f0, f2, f11
	stfs     f5, 0(r4)
	fmuls    f6, f7, f11
	fmuls    f5, f3, f11
	stfs     f1, 0x10(r4)
	fmuls    f3, f4, f11
	fmuls    f2, f8, f11
	stfs     f0, 0x20(r4)
	fmuls    f1, f9, f11
	fmuls    f0, f10, f11
	stfs     f6, 4(r4)
	stfs     f5, 0x14(r4)
	stfs     f3, 0x24(r4)
	stfs     f2, 8(r4)
	stfs     f1, 0x18(r4)
	stfs     f0, 0x28(r4)
	blr
	*/
}

} // namespace UmiMushi
} // namespace Game
