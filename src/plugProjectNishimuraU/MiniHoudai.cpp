#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx12TChibiDeadSe
    __vt__Q23efx12TChibiDeadSe:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx15TChibiDeadMouth
    __vt__Q23efx15TChibiDeadMouth:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx11TChibiShoot
    __vt__Q23efx11TChibiShoot:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q23efx12TChibiSmokeL
    __vt__Q23efx12TChibiSmokeL:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx12TChibiSmokeS
    __vt__Q23efx12TChibiSmokeS:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx15TChibiDeadLight
    __vt__Q23efx15TChibiDeadLight:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TChibiDeadLightFv"
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
        .4byte __dt__Q23efx15TChibiDeadLightFv
    .global __vt__Q23efx12TChibiCharge
    __vt__Q23efx12TChibiCharge:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx12TChibiChargeFv"
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
        .4byte __dt__Q23efx12TChibiChargeFv
    .global __vt__Q34Game10MiniHoudai3Obj
    __vt__Q34Game10MiniHoudai3Obj:
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
        .4byte onInit__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game10MiniHoudai3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game10MiniHoudai3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game10MiniHoudai3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10MiniHoudai3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10MiniHoudai3ObjFv
        .4byte doUpdateCommon__Q34Game10MiniHoudai3ObjFv
        .4byte doUpdateCarcass__Q34Game10MiniHoudai3ObjFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game10MiniHoudai3ObjFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10MiniHoudai3ObjFR8Graphics
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
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q34Game10MiniHoudai3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game10MiniHoudai3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game10MiniHoudai3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte
   doGetLifeGaugeParam__Q34Game10MiniHoudai3ObjFRQ24Game14LifeGaugeParam .4byte
   throwupItem__Q24Game9EnemyBaseFv .4byte
   "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   throwupItemInDeathProcedure__Q24Game9EnemyBaseFv .4byte
   setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere .4byte
   damageCallBack__Q34Game10MiniHoudai3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game10MiniHoudai3ObjFv .4byte
   doFinishStoneState__Q34Game10MiniHoudai3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q34Game10MiniHoudai3ObjFv .4byte
   doFinishEarthquakeFitState__Q34Game10MiniHoudai3ObjFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10MiniHoudai3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q34Game10MiniHoudai3ObjFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10MiniHoudai3ObjFv .4byte
   doStartMovie__Q34Game10MiniHoudai3ObjFv .4byte
   doEndMovie__Q34Game10MiniHoudai3ObjFv .4byte
   setFSM__Q34Game10MiniHoudai3ObjFPQ34Game10MiniHoudai3FSM .4byte 0 .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@776@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051CF88
    lbl_8051CF88:
        .4byte 0x43000000
    .global lbl_8051CF8C
    lbl_8051CF8C:
        .4byte 0x00000000
    .global lbl_8051CF90
    lbl_8051CF90:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051CF98
    lbl_8051CF98:
        .4byte 0x418C0000
    .global lbl_8051CF9C
    lbl_8051CF9C:
        .4byte 0x40A00000
    .global lbl_8051CFA0
    lbl_8051CFA0:
        .float 1.0
    .global lbl_8051CFA4
    lbl_8051CFA4:
        .4byte 0x42C80000
    .global lbl_8051CFA8
    lbl_8051CFA8:
        .4byte 0x42960000
    .global lbl_8051CFAC
    lbl_8051CFAC:
        .4byte 0x42480000
    .global lbl_8051CFB0
    lbl_8051CFB0:
        .4byte 0x41F00000
    .global lbl_8051CFB4
    lbl_8051CFB4:
        .float 0.25
    .global lbl_8051CFB8
    lbl_8051CFB8:
        .4byte 0x68616E64
        .4byte 0x4C000000
    .global lbl_8051CFC0
    lbl_8051CFC0:
        .4byte 0x68616E64
        .4byte 0x52000000
    .global lbl_8051CFC8
    lbl_8051CFC8:
        .4byte 0x41200000
    .global lbl_8051CFCC
    lbl_8051CFCC:
        .4byte 0x43340000
    .global lbl_8051CFD0
    lbl_8051CFD0:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051CFD8
    lbl_8051CFD8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051CFE0
    lbl_8051CFE0:
        .4byte 0x43A2F983
    .global lbl_8051CFE4
    lbl_8051CFE4:
        .4byte 0xC3A2F983
    .global lbl_8051CFE8
    lbl_8051CFE8:
        .float 0.5
    .global lbl_8051CFEC
    lbl_8051CFEC:
        .4byte 0x3F400000
    .global lbl_8051CFF0
    lbl_8051CFF0:
        .4byte 0x43480000
    .global lbl_8051CFF4
    lbl_8051CFF4:
        .4byte 0x41C80000
    .global lbl_8051CFF8
    lbl_8051CFF8:
        .4byte 0x6B757469
        .4byte 0x00000000
    .global lbl_8051D000
    lbl_8051D000:
        .4byte 0x68656164
        .4byte 0x00000000
    .global lbl_8051D008
    lbl_8051D008:
        .4byte 0x73656269
        .4byte 0x72653100
    .global lbl_8051D010
    lbl_8051D010:
        .4byte 0x73656269
        .4byte 0x72653200
    .global lbl_8051D018
    lbl_8051D018:
        .4byte 0x3F666666
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802EBFF8
 * Size:	000148
 */
MiniHoudai::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802EC038
	addi     r0, r31, 0x308
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x308(r31)
	stw      r0, 0x30c(r31)
	stw      r0, 0x310(r31)

lbl_802EC038:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game10MiniHoudai3Obj@ha
	addi     r0, r31, 0x308
	addi     r5, r3, __vt__Q34Game10MiniHoudai3Obj@l
	addi     r3, r31, 0x2c0
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802EC0CC
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game10MiniHoudai14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game10MiniHoudai14ProperAnimator@l
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

lbl_802EC0CC:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802EC100
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10MiniHoudai3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10MiniHoudai3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802EC100:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createShotGun__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       createEffect__Q34Game10MiniHoudai3ObjFv
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
 * Address:	802EC140
 * Size:	000004
 */
void MiniHoudai::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802EC144
 * Size:	0000C8
 */
void MiniHoudai::Obj::onInit(Game::CreatureInitArg*)
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
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x61
	bne      lbl_802EC19C
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)

lbl_802EC19C:
	lfs      f1, lbl_8051CF88@sda21(r2)
	li       r0, -1
	lfs      f0, lbl_8051CF8C@sda21(r2)
	mr       r3, r31
	stfs     f1, 0x2c8(r31)
	stfs     f0, 0x2cc(r31)
	stfs     f0, 0x2d0(r31)
	stw      r0, 0x2d4(r31)
	bl       resetWayPoint__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       setNearestWayPoint__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       setupShotGun__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game10MiniHoudai3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 7
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
 * Address:	802EC20C
 * Size:	00004C
 */
void MiniHoudai::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	mr       r3, r30
	bl       forceFinishShotGun__Q34Game10MiniHoudai3ObjFv
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
 * Address:	802EC258
 * Size:	000054
 */
void MiniHoudai::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateCaution__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       updateTargetDistance__Q34Game10MiniHoudai3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doUpdateShotGun__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC2AC
 * Size:	000034
 */
void MiniHoudai::Obj::doUpdateCommon(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       doUpdateCommonShotGun__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC2E0
 * Size:	00003C
 */
void MiniHoudai::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setShotGunCallBack__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       doAnimationCullingOff__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       resetShotGunCallBack__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC31C
 * Size:	000004
 */
void MiniHoudai::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802EC320
 * Size:	000020
 */
void MiniHoudai::Obj::doDebugDraw(Graphics&)
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
 * Address:	802EC340
 * Size:	00004C
 */
void MiniHoudai::Obj::setFSM(Game::MiniHoudai::FSM*)
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
 * Address:	802EC38C
 * Size:	0000E0
 */
void MiniHoudai::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051CF90@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_8051CF98@sda21(r2)
	stfs     f1, 0(r31)
	lfs      f2, lbl_8051CF9C@sda21(r2)
	stfs     f3, 4(r31)
	stfs     f4, 8(r31)
	lfs      f1, 4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 4(r31)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_802EC3FC
	stfs     f1, 4(r31)

lbl_802EC3FC:
	lfs      f1, lbl_8051CF8C@sda21(r2)
	mr       r3, r30
	lfs      f0, lbl_8051CFA0@sda21(r2)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	bgt      lbl_802EC42C
	lfs      f0, lbl_8051CFA4@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802EC44C

lbl_802EC42C:
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802EC444
	lfs      f0, lbl_8051CFA8@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802EC44C

lbl_802EC444:
	lfs      f0, lbl_8051CFAC@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802EC44C:
	lfs      f0, lbl_8051CFB0@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	802EC46C
 * Size:	000044
 */
void MiniHoudai::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_802EC48C
	lfs      f2, lbl_8051CFA0@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	b        lbl_802EC49C

lbl_802EC48C:
	lfs      f0, lbl_8051CFB4@sda21(r2)
	lfs      f2, lbl_8051CFA0@sda21(r2)
	fmuls    f1, f1, f0
	bl       addDamage__Q24Game9EnemyBaseFff

lbl_802EC49C:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC4B0
 * Size:	000034
 */
void MiniHoudai::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC4E4
 * Size:	000020
 */
void MiniHoudai::Obj::doFinishStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC504
 * Size:	000034
 */
void MiniHoudai::Obj::doStartEarthquakeFitState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC538
 * Size:	000020
 */
void MiniHoudai::Obj::doFinishEarthquakeFitState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC558
 * Size:	000034
 */
void MiniHoudai::Obj::doStartWaitingBirthTypeDrop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC58C
 * Size:	000034
 */
void MiniHoudai::Obj::doFinishWaitingBirthTypeDrop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC5C0
 * Size:	000028
 */
void MiniHoudai::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 6
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
 * Address:	802EC5E8
 * Size:	000020
 */
void MiniHoudai::Obj::doStartMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC608
 * Size:	000020
 */
void MiniHoudai::Obj::doEndMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC628
 * Size:	000064
 */
void MiniHoudai::Obj::initWalkSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2c0
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CF9C@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051CFB8@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CF9C@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051CFC0@sda21
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
 * Address:	802EC68C
 * Size:	000008
 */
void MiniHoudai::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	addi     r3, r3, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC694
 * Size:	000014
 */
void MiniHoudai::Obj::doBecomeCarcass(void)
{
	/*
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2c8(r3)
	stfs     f0, 0x200(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC6A8
 * Size:	0001FC
 */
void MiniHoudai::Obj::doUpdateCarcass(void)
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
	lwz      r3, 0x17c(r3)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EC844
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802EC744
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, lifeGaugeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802EC880
	lwz      r4, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EC880
	lfs      f1, lbl_8051CF8C@sda21(r2)
	mr       r4, r31
	bl       activeLifeGauge__12LifeGaugeMgrFPQ24Game8Creaturef
	b        lbl_802EC880

lbl_802EC744:
	lfs      f2, 0x200(r31)
	lfs      f1, 0x204(r31)
	fcmpo    cr0, f2, f1
	bge      lbl_802EC880
	lfs      f0, 0x844(r3)
	lwz      r3, sys@sda21(r13)
	fdivs    f1, f1, f0
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x200(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x204(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EC880
	lwz      r3, 0x17c(r31)
	li       r4, 0
	lwz      r3, 4(r3)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lfs      f31, 0x140(r31)
	addi     r3, r1, 8
	lfs      f30, 0x160(r31)
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r31)
	lis      r3, atanTable___5JMath@ha
	fmr      f1, f31
	addi     r3, r3, atanTable___5JMath@l
	stfs     f0, 8(r1)
	fmr      f2, f30
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x14(r1)
	mr       r3, r31
	lfs      f0, 0x2ac(r31)
	stfs     f0, 0x34(r1)
	lbz      r4, 0x1f3(r31)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	stb      r0, 0x38(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r5, r1, 8
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	cmplwi   r3, 0
	beq      lbl_802EC880
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_802EC880

lbl_802EC844:
	lwz      r0, lifeGaugeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_802EC880
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EC880
	lfs      f0, lbl_8051CF8C@sda21(r2)
	mr       r4, r31
	stfs     f0, 0x2c8(r31)
	stfs     f0, 0x200(r31)
	lwz      r3, lifeGaugeMgr@sda21(r13)
	bl       inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature

lbl_802EC880:
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
 * Address:	802EC8A4
 * Size:	000064
 */
void MiniHoudai::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	stfs     f0, 0(r4)
	lwz      r5, 0x17c(r3)
	lwz      r0, 4(r5)
	cmplwi   r0, 0
	beq      lbl_802EC8D0
	lfs      f1, lbl_8051CFAC@sda21(r2)
	lfs      f0, 0x190(r3)
	fadds    f0, f1, f0
	stfs     f0, 4(r4)
	b        lbl_802EC8E4

lbl_802EC8D0:
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x190(r3)
	lfs      f0, 0x12c(r5)
	fadds    f0, f1, f0
	stfs     f0, 4(r4)

lbl_802EC8E4:
	lfs      f1, 0x194(r3)
	lfs      f0, lbl_8051CFC8@sda21(r2)
	stfs     f1, 8(r4)
	lfs      f2, 0x200(r3)
	lfs      f1, 0x204(r3)
	fdivs    f1, f2, f1
	stfs     f1, 0xc(r4)
	stfs     f0, 0x10(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC908
 * Size:	000050
 */
void MiniHoudai::Obj::updateCaution(void)
{
	/*
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_802EC928
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_802EC928
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802EC930

lbl_802EC928:
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2c8(r3)

lbl_802EC930:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC958
 * Size:	000024
 */
void MiniHoudai::Obj::getViewAngle(void)
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802EC974
	lfs      f1, lbl_8051CFCC@sda21(r2)
	blr

lbl_802EC974:
	lfs      f1, 0x424(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC97C
 * Size:	000010
 */
void MiniHoudai::Obj::resetWayPoint(void)
{
	/*
	li       r0, 0
	stw      r0, 0x2f0(r3)
	stw      r0, 0x2f4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC98C
 * Size:	0000B0
 */
void MiniHoudai::Obj::setNearestWayPoint(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051CFC8@sda21(r2)
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r1, 8
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	stw      r3, 0x2f4(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	cmplwi   r3, 0
	beq      lbl_802ECA10
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECA28

lbl_802ECA10:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2ec(r31)

lbl_802ECA28:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECA3C
 * Size:	000260
 */
void MiniHoudai::Obj::setLinkWayPoint(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r4, 0x2f0(r3)
	cmplwi   r4, 0
	beq      lbl_802ECBF4
	lwz      r3, 0x2f4(r31)
	li       r29, 0
	li       r28, -1
	cmplwi   r3, 0
	beq      lbl_802ECA80
	lha      r28, 0x36(r3)

lbl_802ECA80:
	addi     r3, r1, 8
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	addi     r30, r1, 0x2c
	b        lbl_802ECAF4

lbl_802ECA9C:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	extsh    r0, r3
	cmpw     r0, r28
	beq      lbl_802ECAEC
	lwz      r5, mapMgr__4Game@sda21(r13)
	mr       r4, r3
	lwz      r3, 8(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802ECAEC
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_802ECAEC
	stw      r3, 0(r30)
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_802ECAEC:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_802ECAF4:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ECA9C
	cmpwi    r29, 0
	beq      lbl_802ECB90
	lwz      r0, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x54(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051CFD8@sda21(r2)
	addi     r3, r1, 0x2c
	stw      r4, 0x50(r1)
	lfs      f0, lbl_8051CFD0@sda21(r2)
	lfd      f1, 0x50(r1)
	stw      r0, 0x5c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x58(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECC7C

lbl_802ECB90:
	cmpwi    r28, 0
	blt      lbl_802ECBF4
	lwz      r3, mapMgr__4Game@sda21(r13)
	extsh    r4, r28
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802ECBF4
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_802ECBF4
	lwz      r0, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECC7C

lbl_802ECBF4:
	lwz      r3, 0x2f0(r31)
	li       r0, 0
	lfs      f0, lbl_8051CFC8@sda21(r2)
	addi     r4, r1, 0x14
	stw      r3, 0x2f4(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x1c(r1)
	stw      r0, 0x20(r1)
	stb      r0, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	cmplwi   r3, 0
	beq      lbl_802ECC64
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECC7C

lbl_802ECC64:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2ec(r31)

lbl_802ECC7C:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECC9C
 * Size:	00006C
 */
void MiniHoudai::Obj::getSearchedTarget(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802ECCCC
	lfs      f1, lbl_8051CFCC@sda21(r2)
	b        lbl_802ECCD0

lbl_802ECCCC:
	lfs      f1, 0x424(r4)

lbl_802ECCD0:
	lfs      f2, 0x3d4(r4)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802ECCF4
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2c8(r31)

lbl_802ECCF4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECD08
 * Size:	000128
 */
void MiniHoudai::Obj::updateTargetDistance(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	cmplwi   r3, 0
	beq      lbl_802ECD30
	lfs      f0, 0x58(r3)
	b        lbl_802ECD38

lbl_802ECD30:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)

lbl_802ECD38:
	lfs      f2, 0x194(r31)
	fmuls    f0, f0, f0
	lfs      f1, 0x2ec(r31)
	lfs      f3, 0x18c(r31)
	fsubs    f2, f2, f1
	lfs      f1, 0x2e4(r31)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802ECD74
	mr       r3, r31
	bl       setLinkWayPoint__Q34Game10MiniHoudai3ObjFv
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2d0(r31)

lbl_802ECD74:
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051CF9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802ECE1C
	lfs      f1, lbl_8051CF8C@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_8051CFC8@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 0x2d0(r31)
	lwz      r3, 0x2f0(r31)
	stw      r3, 0x2f4(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	cmplwi   r3, 0
	beq      lbl_802ECDFC
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECE14

lbl_802ECDFC:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2ec(r31)

lbl_802ECE14:
	mr       r3, r31
	bl       updateHomePosition__Q34Game10MiniHoudai3ObjFv

lbl_802ECE1C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECE30
 * Size:	0000BC
 */
void MiniHoudai::Obj::updateHomePosition(void)
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	lfs      f5, 0x1fc(r3)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802ECE4C
	fneg     f1, f5

lbl_802ECE4C:
	lfs      f3, lbl_8051CFE0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CF8C@sda21(r2)
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lwz      r4, 0xc0(r3)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x194(r3)
	lfs      f6, 0x384(r4)
	fctiwz   f0, f2
	lfs      f2, 0x190(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmadds   f4, f0, f6, f1
	bge      lbl_802ECEB8
	lfs      f0, lbl_8051CFE4@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_802ECED0

lbl_802ECEB8:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_802ECED0:
	lfs      f0, 0x18c(r3)
	fmadds   f0, f1, f6, f0
	stfs     f0, 0x198(r3)
	stfs     f2, 0x19c(r3)
	stfs     f4, 0x1a0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECEEC
 * Size:	00032C
 */
void MiniHoudai::Obj::isAttackableTarget(void)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	mr       r31, r3
	addi     r3, r1, 0x20
	lwz      r4, 0x2f8(r31)
	bl       getShotGunPosition__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x20(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x24(r1)
	lfs      f26, 0x28(r1)
	bge      lbl_802ECF68
	fneg     f1, f3

lbl_802ECF68:
	lfs      f2, lbl_8051CFE0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CF8C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802ECFC0
	lfs      f0, lbl_8051CFE4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802ECFD8

lbl_802ECFC0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802ECFD8:
	lwz      r4, 0xc0(r31)
	fneg     f31, f30
	lfs      f0, lbl_8051CFE8@sda21(r2)
	addi     r3, r1, 0x3c
	lfs      f2, 0x44c(r4)
	addi     r4, r1, 0x2c
	lfs      f1, lbl_8051CFEC@sda21(r2)
	fmuls    f5, f0, f2
	lfs      f3, 0x194(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f4, f1, f2
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051CF8C@sda21(r2)
	fmadds   f3, f30, f5, f3
	stfs     f4, 0x38(r1)
	fmadds   f1, f2, f5, f1
	fmadds   f0, f29, f5, f0
	stfs     f3, 0x34(r1)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x5c
	stb      r0, 0x58(r1)
	addi     r4, r1, 0x3c
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x5c
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802ED1B8

lbl_802ED04C:
	addi     r3, r1, 0x5c
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED1B0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	bne      lbl_802ED0CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED0CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED0CC
	li       r29, 1

lbl_802ED0CC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802ED1B0
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f3, 0x14(r1)
	fsubs    f2, f2, f27
	lfs      f4, 0x1c(r1)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	fsubs    f3, f3, f28
	fsubs    f4, f4, f26
	fcmpo    cr0, f2, f0
	ble      lbl_802ED118
	fmr      f1, f2
	b        lbl_802ED11C

lbl_802ED118:
	fneg     f1, f2

lbl_802ED11C:
	lfs      f0, lbl_8051CFF0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802ED1B0
	lfs      f1, lbl_8051CF8C@sda21(r2)
	fmuls    f5, f1, f2
	fmadds   f0, f31, f3, f5
	fmadds   f2, f29, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802ED144
	b        lbl_802ED148

lbl_802ED144:
	fneg     f2, f2

lbl_802ED148:
	lfs      f0, lbl_8051CFF4@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802ED1B0
	fmadds   f1, f29, f3, f5
	lfs      f0, lbl_8051CFA0@sda21(r2)
	fmadds   f1, f30, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802ED1B0
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x44c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802ED1B0
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r3, 1
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2e0(r31)
	b        lbl_802ED1CC

lbl_802ED1B0:
	addi     r3, r1, 0x5c
	bl       next__Q24Game12CellIteratorFv

lbl_802ED1B8:
	addi     r3, r1, 0x5c
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED04C
	li       r3, 0

lbl_802ED1CC:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED218
 * Size:	000048
 */
void MiniHoudai::Obj::createShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x34
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802ED248
	mr       r4, r31
	bl __ct__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFPQ34Game10MiniHoudai3Obj
	mr       r0, r3

lbl_802ED248:
	stw      r0, 0x2f8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED260
 * Size:	000024
 */
void MiniHoudai::Obj::setupShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       setupShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void setShotGunTarget__Q34Game10MiniHoudai3ObjFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	802ED284
 * Size:	000024
 */
void MiniHoudai::Obj::resetShotGunCallBack(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       resetCallBack__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2A8
 * Size:	000024
 */
void MiniHoudai::Obj::setShotGunCallBack(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       setCallBack__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2CC
 * Size:	000024
 */
void MiniHoudai::Obj::doUpdateShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       doUpdate__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2F0
 * Size:	000024
 */
void MiniHoudai::Obj::doUpdateCommonShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       doUpdateCommon__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED314
 * Size:	000024
 */
void MiniHoudai::Obj::startShotGunRotation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       startRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED338
 * Size:	000024
 */
void MiniHoudai::Obj::finishShotGunRotation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       finishRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED35C
 * Size:	000024
 */
void MiniHoudai::Obj::isShotGunRotation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       isShotGunRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED380
 * Size:	000024
 */
void MiniHoudai::Obj::isShotGunLockOn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       isShotGunLockOn__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3A4
 * Size:	000024
 */
void MiniHoudai::Obj::isFinishShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       isFinishShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3C8
 * Size:	000024
 */
void MiniHoudai::Obj::emitShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       emitShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3EC
 * Size:	00002C
 */
void MiniHoudai::Obj::setShotGunTargetPosition(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x2d8
	lwz      r3, 0x2f8(r3)
	bl
	"setShotGunTarget__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void MiniHoudai::Obj::shotGunDoDebugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802ED418
 * Size:	000024
 */
void MiniHoudai::Obj::forceFinishShotGun(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       forceFinishShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED43C
 * Size:	000138
 */
void MiniHoudai::Obj::createEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802ED4D4
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
	lis      r4, __vt__Q23efx12TChibiCharge@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx12TChibiCharge@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x230
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

lbl_802ED4D4:
	stw      r3, 0x300(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802ED55C
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
	lis      r4, __vt__Q23efx15TChibiDeadLight@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx15TChibiDeadLight@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x231
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

lbl_802ED55C:
	stw      r3, 0x304(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED574
 * Size:	000058
 */
void MiniHoudai::Obj::setupEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051CFF8@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x300(r31)
	addi     r4, r2, lbl_8051D000@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x304(r31)
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
 * Address:	802ED5CC
 * Size:	0000A0
 */
void MiniHoudai::Obj::createSmokeSmallEffect(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	beq      lbl_802ED5F8
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051D008@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r7, r3
	b        lbl_802ED60C

lbl_802ED5F8:
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051D010@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r7, r3

lbl_802ED60C:
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx12TChibiSmokeS@ha
	li       r6, 0x23e
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx11TSimpleMtx1@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx12TChibiSmokeS@l
	stw      r4, 8(r1)
	addi     r3, r1, 8
	li       r4, 0
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r7, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED66C
 * Size:	0000E8
 */
void MiniHoudai::Obj::createSmokeLargeEffect(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051D008@sda21
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TChibiSmokeL@ha
	li       r7, 0x23d
	stw      r0, 0x18(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx12TChibiSmokeL@l
	stw      r5, 0x18(r1)
	li       r4, 0
	stw      r3, 0x24(r1)
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051D010@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TChibiSmokeL@ha
	li       r7, 0x23d
	stw      r0, 8(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx12TChibiSmokeL@l
	stw      r5, 8(r1)
	li       r4, 0
	stw      r3, 0x14(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED754
 * Size:	000024
 */
void MiniHoudai::Obj::createDownEffect(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r3, 0x18c
	stw      r0, 0x14(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED778
 * Size:	000034
 */
void MiniHoudai::Obj::startChargeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802ED7AC
 * Size:	000030
 */
void MiniHoudai::Obj::finishChargeEffect(void)
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
 * Address:	802ED7DC
 * Size:	000034
 */
void MiniHoudai::Obj::createDeadLightEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x304(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802ED810
 * Size:	0001D4
 */
void MiniHoudai::Obj::createDeadBombEmitEffect(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	addi     r4, r2, lbl_8051CFF8@sda21
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r31, r3
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx11TSimpleMtx3@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx11TSimpleMtx3@l
	lis      r3, __vt__Q23efx11TChibiShoot@ha
	li       r4, 0x23a
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx11TChibiShoot@l
	li       r7, 0x23b
	li       r6, 0x23c
	sth      r4, 0x44(r1)
	addi     r3, r1, 0x40
	li       r4, 0
	sth      r7, 0x46(r1)
	sth      r6, 0x48(r1)
	stw      r5, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r31, 0x58(r1)
	stw      r0, 0x40(r1)
	bl       create__Q23efx11TSimpleMtx3FPQ23efx3Arg
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx15TChibiDeadMouth@ha
	li       r6, 0x232
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx11TSimpleMtx1@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx15TChibiDeadMouth@l
	stw      r4, 8(r1)
	addi     r3, r1, 8
	li       r4, 0
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r31, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_8051D008@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x2c(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx12TChibiDeadSe@ha
	stw      r0, 0x2c(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x233
	li       r5, 0x234
	stw      r0, 0x2c(r1)
	addi     r0, r4, __vt__Q23efx12TChibiDeadSe@l
	li       r4, 0
	stw      r3, 0x3c(r1)
	addi     r3, r1, 0x2c
	sth      r7, 0x30(r1)
	sth      r5, 0x32(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r0, 0x2c(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_8051D010@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx12TChibiDeadSe@ha
	stw      r0, 0x18(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x233
	li       r5, 0x234
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx12TChibiDeadSe@l
	li       r4, 0
	stw      r3, 0x28(r1)
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	sth      r5, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED9E4
 * Size:	000058
 */
void MiniHoudai::Obj::effectDrawOn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f8(r3)
	bl       effectDrawOn__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x304(r31)
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
 * Address:	802EDA3C
 * Size:	000058
 */
void MiniHoudai::Obj::effectDrawOff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f8(r3)
	bl       effectDrawOff__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x304(r31)
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

namespace efx {

/*
 * --INFO--
 * Address:	802EDA94
 * Size:	00009C
 */
TChibiDeadLight::~TChibiDeadLight(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802EDB14
lis      r3, __vt__Q23efx15TChibiDeadLight@ha
addi     r3, r3, __vt__Q23efx15TChibiDeadLight@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802EDB04
lis      r3, __vt__Q23efx9TChaseMtx@ha
addi     r3, r3, __vt__Q23efx9TChaseMtx@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802EDB04
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_802EDB04:
extsh.   r0, r31
ble      lbl_802EDB14
mr       r3, r30
bl       __dl__FPv

lbl_802EDB14:
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
 * Address:	802EDB30
 * Size:	00009C
 */
TChibiCharge::~TChibiCharge(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802EDBB0
lis      r3, __vt__Q23efx12TChibiCharge@ha
addi     r3, r3, __vt__Q23efx12TChibiCharge@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802EDBA0
lis      r3, __vt__Q23efx9TChaseMtx@ha
addi     r3, r3, __vt__Q23efx9TChaseMtx@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802EDBA0
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_802EDBA0:
extsh.   r0, r31
ble      lbl_802EDBB0
mr       r3, r30
bl       __dl__FPv

lbl_802EDBB0:
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
 * Address:	802EDBCC
 * Size:	0000BC
 */
MiniHoudai::Obj::~Obj(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
or.      r31, r3, r3
stw      r30, 8(r1)
mr       r30, r4
beq      lbl_802EDC6C
lis      r3, __vt__Q34Game10MiniHoudai3Obj@ha
addi     r0, r31, 0x308
addi     r4, r3, __vt__Q34Game10MiniHoudai3Obj@l
stw      r4, 0(r31)
addi     r3, r4, 0x1b0
addi     r4, r4, 0x2fc
stw      r3, 0x178(r31)
lwz      r3, 0x17c(r31)
stw      r4, 0(r3)
lwz      r3, 0x17c(r31)
subf     r0, r3, r0
stw      r0, 0xc(r3)
beq      lbl_802EDC5C
lis      r3, __vt__Q24Game9EnemyBase@ha
addi     r0, r31, 0x2bc
addi     r4, r3, __vt__Q24Game9EnemyBase@l
addi     r3, r31, 0x290
stw      r4, 0(r31)
addi     r5, r4, 0x1b0
addi     r6, r4, 0x2f8
li       r4, -1
stw      r5, 0x178(r31)
lwz      r5, 0x17c(r31)
stw      r6, 0(r5)
lwz      r5, 0x17c(r31)
subf     r0, r5, r0
stw      r0, 0xc(r5)
bl       __dt__5CNodeFv

lbl_802EDC5C:
extsh.   r0, r30
ble      lbl_802EDC6C
mr       r3, r31
bl       __dl__FPv

lbl_802EDC6C:
lwz      r0, 0x14(r1)
mr       r3, r31
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	802EDC88
 * Size:	000008
 */
void MiniHoudai::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051D018@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EDC90
 * Size:	000008
 */
@4 @efx::TChibiCharge::~TChibiCharge(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx12TChibiChargeFv
	*/
}

/*
 * --INFO--
 * Address:	802EDC98
 * Size:	000008
 */
@4 @efx::TChibiDeadLight::~TChibiDeadLight(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx15TChibiDeadLightFv
	*/
}
} // namespace Game
