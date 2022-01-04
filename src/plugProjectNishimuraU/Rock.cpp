#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9TRockDead
    __vt__Q23efx9TRockDead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global "__vt__Q23efx29TSyncGroup3<Q23efx9TChasePos>"
    "__vt__Q23efx29TSyncGroup3<Q23efx9TChasePos>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx10TChasePos3
    __vt__Q23efx10TChasePos3:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx17TRockWRunChasePos
    __vt__Q23efx17TRockWRunChasePos:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx9TRockWRun
    __vt__Q23efx9TRockWRun:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx9TRockWRunFPQ23efx3Arg
        .4byte forceKill__Q23efx9TRockWRunFv
        .4byte fade__Q23efx9TRockWRunFv
    .global __vt__Q23efx10TRockGrRun
    __vt__Q23efx10TRockGrRun:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TRockGrRunFv"
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
        .4byte __dt__Q23efx10TRockGrRunFv
    .global __vt__Q23efx8TRockRun
    __vt__Q23efx8TRockRun:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx8TRockRunFv"
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
        .4byte __dt__Q23efx8TRockRunFv
    .global __vt__Q34Game4Rock3Obj
    __vt__Q34Game4Rock3Obj:
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
        .4byte onInit__Q34Game4Rock3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game4Rock3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game4Rock3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game4Rock3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game4Rock3ObjFv
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
        .4byte isLivingThing__Q34Game4Rock3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game4Rock3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game4Rock3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game4Rock3ObjFv
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
        .4byte ignoreAtari__Q34Game4Rock3ObjFPQ24Game8Creature
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
        .4byte __dt__Q34Game4Rock3ObjFv
        .4byte "birth__Q34Game4Rock3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game4Rock3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Rock3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Rock3ObjFR8Graphics .4byte
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
        .4byte getEnemyTypeID__Q34Game4Rock3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game4Rock3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
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
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q34Game4Rock3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game4Rock3ObjFv .4byte doEndMovie__Q34Game4Rock3ObjFv .4byte
   setFSM__Q34Game4Rock3ObjFPQ34Game4Rock3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@744@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051ADA0
    lbl_8051ADA0:
        .4byte 0x42C80000
    .global lbl_8051ADA4
    lbl_8051ADA4:
        .4byte 0x43FA0000
    .global lbl_8051ADA8
    lbl_8051ADA8:
        .4byte 0x3ECCCCCD
    .global lbl_8051ADAC
    lbl_8051ADAC:
        .4byte 0x38D1B717
    .global lbl_8051ADB0
    lbl_8051ADB0:
        .4byte 0x00000000
    .global lbl_8051ADB4
    lbl_8051ADB4:
        .4byte 0x3FC00000
    .global lbl_8051ADB8
    lbl_8051ADB8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051ADC0
    lbl_8051ADC0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051ADC8
    lbl_8051ADC8:
        .4byte 0x42480000
    .global lbl_8051ADCC
    lbl_8051ADCC:
        .4byte 0x40A00000
    .global lbl_8051ADD0
    lbl_8051ADD0:
        .4byte 0x41A00000
    .global lbl_8051ADD4
    lbl_8051ADD4:
        .float 1.0
    .global lbl_8051ADD8
    lbl_8051ADD8:
        .4byte 0x41C80000
    .global lbl_8051ADDC
    lbl_8051ADDC:
        .4byte 0x437A0000
    .global lbl_8051ADE0
    lbl_8051ADE0:
        .4byte 0x43A2F983
    .global lbl_8051ADE4
    lbl_8051ADE4:
        .4byte 0xC3A2F983
    .global lbl_8051ADE8
    lbl_8051ADE8:
        .4byte 0x43340000
    .global lbl_8051ADEC
    lbl_8051ADEC:
        .4byte 0x40490FDB
    .global lbl_8051ADF0
    lbl_8051ADF0:
        .4byte 0x3BB60B61
    .global lbl_8051ADF4
    lbl_8051ADF4:
        .4byte 0x3C23D70A
    .global lbl_8051ADF8
    lbl_8051ADF8:
        .4byte 0x3F7D70A4
    .global lbl_8051ADFC
    lbl_8051ADFC:
        .4byte 0x41000000
    .global lbl_8051AE00
    lbl_8051AE00:
        .4byte 0x42340000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80262FF0
 * Size:	000138
 */
Rock::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80263030
	addi     r0, r31, 0x2e8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e8(r31)
	stw      r0, 0x2ec(r31)
	stw      r0, 0x2f0(r31)

lbl_80263030:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game4Rock3Obj@ha
	addi     r0, r31, 0x2e8
	addi     r5, r3, __vt__Q34Game4Rock3Obj@l
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
	beq      lbl_802630BC
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game4Rock14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game4Rock14ProperAnimator@l
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

lbl_802630BC:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802630F0
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game4Rock3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game4Rock3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802630F0:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game4Rock3ObjFv
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
 * Address:	80263128
 * Size:	00005C
 */
void Rock::Obj::birth(Vector3f&, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lfs      f2, lbl_8051ADA0@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_8051ADA4@sda21(r2)
	addi     r4, r1, 8
	lfs      f0, lbl_8051ADA8@sda21(r2)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263184
 * Size:	000028
 */
void Rock::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x44c(r4)
	stfs     f0, 0x2cc(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x474(r4)
	stfs     f0, 0x2d0(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x49c(r4)
	stfs     f0, 0x2d4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802631AC
 * Size:	0001E0
 */
void Rock::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lbz      r0, 0x2b0(r31)
	extsb.   r0, r0
	bne      lbl_802631F0
	lfs      f1, lbl_8051ADAC@sda21(r2)
	stfs     f1, 0x1f8(r31)
	stfs     f1, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f1, 0x170(r31)
	lwz      r3, 0x114(r31)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_802631F0:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       setupEffect__Q34Game4Rock3ObjFv
	lfs      f0, lbl_8051ADB0@sda21(r2)
	li       r0, 0
	mr       r3, r31
	stfs     f0, 0x2c8(r31)
	stb      r0, 0x2c4(r31)
	stw      r0, 0x2c0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x13
	bne      lbl_8026333C
	lfs      f1, lbl_8051ADB0@sda21(r2)
	lfs      f0, 0x2ac(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_802632C8
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051ADC0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051ADB4@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051ADB8@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x2c8(r31)

lbl_802632C8:
	lbz      r0, 0x2b0(r31)
	extsb.   r0, r0
	bne      lbl_8026330C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	b        lbl_8026332C

lbl_8026330C:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8026332C:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	b        lbl_80263378

lbl_8026333C:
	mr       r3, r31
	bl       initMoveVelocity__Q34Game4Rock3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl

lbl_80263378:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026338C
 * Size:	000008
 */
void Rock::Obj::getEnemyTypeID()
{
	/*
	lwz      r3, 0x2e4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263394
 * Size:	000054
 */
void Rock::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishFallEffect__Q34Game4Rock3ObjFv
	mr       r3, r30
	bl       finishRollingGroundEffect__Q34Game4Rock3ObjFv
	mr       r3, r30
	bl       finishRollingWaterEffect__Q34Game4Rock3ObjFv
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
 * Address:	802633E8
 * Size:	000034
 */
void Rock::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x2bc(r3)
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
 * Address:	8026341C
 * Size:	00004C
 */
void Rock::Obj::setFSM(Game::Rock::FSM*)
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
 * Address:	80263468
 * Size:	000004
 */
void Rock::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026346C
 * Size:	000020
 */
void Rock::Obj::doDebugDraw(Graphics&)
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
 * Address:	8026348C
 * Size:	0000E4
 */
void Rock::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x13
	bne      lbl_802634F4
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051ADC8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, 0x190(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0x194(r30)
	stfs     f0, 8(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 0x19c(r30)
	fsubs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x18(r31)
	b        lbl_80263534

lbl_802634F4:
	lfs      f2, lbl_8051ADCC@sda21(r2)
	lfs      f1, 0x190(r30)
	lfs      f3, 0x194(r30)
	lfs      f0, 0x18c(r30)
	fadds    f1, f2, f1
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f3, 8(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8026352C
	lfs      f0, lbl_8051ADC8@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_80263534

lbl_8026352C:
	lfs      f0, lbl_8051ADD0@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_80263534:
	lfs      f2, lbl_8051ADB0@sda21(r2)
	lfs      f0, lbl_8051ADD4@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f1, lbl_8051ADD8@sda21(r2)
	stfs     f0, 0x10(r31)
	stfs     f2, 0x14(r31)
	lfs      f0, 0x1f8(r30)
	fmuls    f0, f1, f0
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
 * Address:	80263570
 * Size:	000060
 */
void Rock::Obj::needShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80263598
	li       r3, 1
	b        lbl_802635BC

lbl_80263598:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_802635B0
	cmpwi    r3, 3
	bne      lbl_802635B8

lbl_802635B0:
	li       r3, 1
	b        lbl_802635BC

lbl_802635B8:
	li       r3, 0

lbl_802635BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802635D0
 * Size:	000088
 */
void Rock::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80263640
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80263640
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80263640
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80263644

lbl_80263640:
	li       r3, 0

lbl_80263644:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263658
 * Size:	0001A4
 */
void Rock::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r29, r4
	mr       r28, r3
	lwz      r27, 0(r4)
	cmplwi   r27, 0
	beq      lbl_802637E8
	mr       r3, r27
	li       r31, 1
	lwz      r12, 0(r27)
	li       r30, 1
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802636BC
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026372C

lbl_802636BC:
	lwz      r0, 0xc8(r27)
	li       r31, 0
	cmplwi   r0, 0
	beq      lbl_802637B8
	lwz      r0, 0x2c0(r28)
	mr       r6, r28
	cmplwi   r0, 0
	beq      lbl_802636E0
	mr       r6, r0

lbl_802636E0:
	lwz      r5, 0xc0(r28)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r5, r4, __vt__Q24Game11Interaction@l
	addi     r3, r3, __vt__Q24Game13InteractPress@l
	addi     r4, r1, 0x18
	stw      r5, 0x18(r1)
	stw      r6, 0x1c(r1)
	stw      r3, 0x18(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802637B8

lbl_8026372C:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802637B8
	lwz      r5, 4(r29)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051ADDC@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game14InteractAttack@l
	mr       r3, r27
	stw      r28, 0xc(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r5, 0x14(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x2e4(r28)
	cmpwi    r0, 0x13
	bne      lbl_802637B8
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x13
	bne      lbl_802637B8
	li       r30, 0

lbl_802637B8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802637C8
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stfs     f0, 0x200(r28)

lbl_802637C8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802637E8
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl

lbl_802637E8:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802637FC
 * Size:	000054
 */
void Rock::Obj::wallCallback(const Game::MoveInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_8026383C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8026383C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263850
 * Size:	00006C
 */
void Rock::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4a
	bne      lbl_802638A8
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_802638A8
	mr       r3, r31
	bl       finishRollingGroundEffect__Q34Game4Rock3ObjFv
	mr       r3, r31
	bl       startRollingWaterEffect__Q34Game4Rock3ObjFv
	lfs      f1, 0x1f8(r31)
	mr       r3, r31
	bl       PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef

lbl_802638A8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802638BC
 * Size:	000060
 */
void Rock::Obj::outWaterCallback()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4a
	bne      lbl_80263908
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80263908
	mr       r3, r31
	bl       finishRollingWaterEffect__Q34Game4Rock3ObjFv
	mr       r3, r31
	bl       startRollingGroundEffect__Q34Game4Rock3ObjFv

lbl_80263908:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026391C
 * Size:	000020
 */
void Rock::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game4Rock3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026393C
 * Size:	000020
 */
void Rock::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game4Rock3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026395C
 * Size:	00002C
 */
void Rock::Obj::ignoreAtari(Game::Creature*)
{
	/*
	lwz      r0, 0x2c0(r3)
	cmplw    r4, r0
	bne      lbl_80263980
	lfs      f1, 0x2c8(r3)
	lfs      f0, lbl_8051ADD4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80263980
	li       r3, 1
	blr

lbl_80263980:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263988
 * Size:	00007C
 */
void Rock::Obj::fallRockScaleUp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051ADD4@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f3, 0x1f8(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_802639EC
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2d4(r3)
	lfs      f0, 0x54(r4)
	fmadds   f1, f1, f0, f3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802639D0
	li       r31, 1
	fmr      f1, f2

lbl_802639D0:
	stfs     f1, 0x1f8(r3)
	stfs     f1, 0x168(r3)
	stfs     f1, 0x16c(r3)
	stfs     f1, 0x170(r3)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_802639EC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263A04
 * Size:	00007C
 */
void Rock::Obj::moveRockScaleUp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051ADD4@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f3, 0x1f8(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_80263A68
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051ADCC@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f1, f1, f0, f3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_80263A4C
	li       r31, 1
	fmr      f1, f2

lbl_80263A4C:
	stfs     f1, 0x1f8(r3)
	stfs     f1, 0x168(r3)
	stfs     f1, 0x16c(r3)
	stfs     f1, 0x170(r3)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_80263A68:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263A80
 * Size:	000100
 */
void Rock::Obj::initMoveVelocity()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80263AA4
	fneg     f1, f3

lbl_80263AA4:
	lfs      f2, lbl_8051ADE0@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051ADB0@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f4, 4(r4)
	bge      lbl_80263AFC
	lfs      f0, lbl_8051ADE4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f2, f0
	b        lbl_80263B14

lbl_80263AFC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r5, r0

lbl_80263B14:
	lfs      f1, lbl_8051ADB0@sda21(r2)
	frsp     f0, f2
	stfs     f2, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stfs     f4, 0x10(r1)
	lwz      r5, 0xc0(r3)
	lfs      f3, 0x2e4(r5)
	fmuls    f2, f0, f3
	fmuls    f1, f1, f3
	fmuls    f0, f4, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f2, 0x1d4(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1d8(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1dc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
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
 * Address:	80263B80
 * Size:	0003A0
 */
void Rock::Obj::updateMoveVelocity()
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
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lbz      r0, 0x2c4(r3)
	cmplwi   r0, 0
	beq      lbl_80263DB4
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_80263BFC
	lwz      r4, 0x44(r4)
	li       r0, 0
	cmpwi    r4, 1
	beq      lbl_80263BE8
	cmpwi    r4, 3
	bne      lbl_80263BEC

lbl_80263BE8:
	li       r0, 1

lbl_80263BEC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80263BFC
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv

lbl_80263BFC:
	cmplwi   r3, 0
	bne      lbl_80263C24
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051ADE8@sda21(r2)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"

lbl_80263C24:
	cmplwi   r3, 0
	beq      lbl_80263C50
	mr       r4, r3
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f28, 0x44(r1)
	lfs      f29, 0x4c(r1)
	b        lbl_80263C68

lbl_80263C50:
	lfs      f3, 0x18c(r31)
	lfs      f2, 0x1d4(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1dc(r31)
	fadds    f28, f3, f2
	fadds    f29, f1, f0

lbl_80263C68:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f28, f4
	fsubs    f2, f29, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051ADF0@sda21(r2)
	lfs      f1, lbl_8051ADEC@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80263D1C
	lfs      f0, lbl_8051ADB0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80263D18
	fmr      f31, f1
	b        lbl_80263D1C

lbl_80263D18:
	fneg     f31, f1

lbl_80263D1C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x81c(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f28, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x38(r1)
	stfs     f31, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f28
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80263EEC

lbl_80263DB4:
	lfs      f2, lbl_8051ADF8@sda21(r2)
	mr       r4, r31
	lfs      f0, 0x1d4(r31)
	addi     r3, r1, 0x14
	lfs      f3, lbl_8051ADF4@sda21(r2)
	fmuls    f0, f2, f0
	lfs      f1, 0x1c8(r31)
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1d4(r31)
	lfs      f0, 0x1d8(r31)
	lfs      f1, 0x1cc(r31)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lfs      f1, 0x1d0(r31)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lfs      f3, 0x194(r31)
	lfs      f2, 0x1dc(r31)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x1d4(r31)
	fadds    f28, f3, f2
	lwz      r12, 8(r12)
	fadds    f29, f1, f0
	lfs      f31, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051ADF0@sda21(r2)
	lfs      f1, lbl_8051ADEC@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80263EC4
	lfs      f0, lbl_8051ADB0@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80263EC0
	fmr      f30, f1
	b        lbl_80263EC4

lbl_80263EC0:
	fneg     f30, f1

lbl_80263EC4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_80263EEC:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263F20
 * Size:	0001A4
 */
void Rock::Obj::createEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0x14
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80263FC0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx8TRockRun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx8TRockRun@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1aa
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

lbl_80263FC0:
	stw      r3, 0x2d8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80264048
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx10TRockGrRun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TRockGrRun@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1a9
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

lbl_80264048:
	stw      r3, 0x2dc(r31)
	li       r3, 0x58
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802640A4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx9TRockWRun@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	addi     r29, r30, 4
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q23efx9TRockWRun@l
	mr       r3, r29
	addi     r4, r30, 0x48
	stw      r0, 0(r30)
	li       r5, 0x28e
	li       r6, 0x28f
	li       r7, 0x290
	bl       "__ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs"
	lis      r3, __vt__Q23efx17TRockWRunChasePos@ha
	li       r0, 0
	addi     r3, r3, __vt__Q23efx17TRockWRunChasePos@l
	stw      r3, 0(r29)
	stb      r0, 0x54(r30)

lbl_802640A4:
	stw      r30, 0x2e0(r31)
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
 * Address:	802640C4
 * Size:	000018
 */
void Rock::Obj::setupEffect()
{
	/*
	lwz      r4, 0x2d8(r3)
	addi     r0, r3, 0x18c
	stw      r0, 0x10(r4)
	lwz      r3, 0x2dc(r3)
	stw      r0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802640DC
 * Size:	000034
 */
void Rock::Obj::startFallEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d8(r3)
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
 * Address:	80264110
 * Size:	000030
 */
void Rock::Obj::finishFallEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d8(r3)
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
 * Address:	80264140
 * Size:	000034
 */
void Rock::Obj::startRollingGroundEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2dc(r3)
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
 * Address:	80264174
 * Size:	000030
 */
void Rock::Obj::finishRollingGroundEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2dc(r3)
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
 * Address:	802641A4
 * Size:	0000E8
 */
void Rock::Obj::startRollingWaterEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_802641DC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)

lbl_802641DC:
	lwz      r3, 0x2e0(r31)
	li       r4, 0
	stfs     f0, 0x44(r3)
	lwz      r3, 0x2e0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x2e0(r31)
	lbz      r0, 0x54(r5)
	cmplwi   r0, 0
	beq      lbl_80264278
	lfs      f2, 0x44(r5)
	lfs      f1, 0x190(r31)
	lfs      f0, lbl_8051ADFC@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80264264
	lfs      f0, lbl_8051AE00@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80264264
	lfs      f1, 0x194(r31)
	addi     r3, r5, 4
	lfs      f0, 0x18c(r31)
	li       r4, 0
	stfs     f0, 0x48(r5)
	stfs     f2, 0x4c(r5)
	stfs     f1, 0x50(r5)
	lwz      r12, 4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80264278

lbl_80264264:
	addi     r3, r5, 4
	lwz      r12, 4(r5)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80264278:
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
 * Address:	8026428C
 * Size:	000010
 */
void TRockWRun::create(efx::Arg*)
{
	/*
	li       r0, 1
	stb      r0, 0x54(r3)
	li       r3, 1
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8026429C
 * Size:	000030
 */
void Rock::Obj::finishRollingWaterEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	802642CC
 * Size:	000044
 */
void TRockWRun::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	lwz      r12, 4(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x54(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	80264310
 * Size:	0000A4
 */
void Rock::Obj::updateWaterEffectPosition()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802643A4
	lwz      r5, 0x2e0(r3)
	lbz      r0, 0x54(r5)
	cmplwi   r0, 0
	beq      lbl_802643A4
	lfs      f2, 0x44(r5)
	lfs      f1, 0x190(r3)
	lfs      f0, lbl_8051ADFC@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80264390
	lfs      f0, lbl_8051AE00@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80264390
	lfs      f1, 0x194(r3)
	li       r4, 0
	lfs      f0, 0x18c(r3)
	addi     r3, r5, 4
	stfs     f0, 0x48(r5)
	stfs     f2, 0x4c(r5)
	stfs     f1, 0x50(r5)
	lwz      r12, 4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802643A4

lbl_80264390:
	addi     r3, r5, 4
	lwz      r12, 4(r5)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_802643A4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802643B4
 * Size:	000098
 */
void Rock::Obj::createRockDeadEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x34(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r10, r6, __vt__Q23efx5TBase@l
	stw      r0, 8(r1)
	addi     r9, r5, __vt__Q23efx8TSimple3@l
	lis      r4, __vt__Q23efx9TRockDead@ha
	li       r8, 0x1a6
	lfs      f0, 0x18c(r3)
	addi     r0, r4, __vt__Q23efx9TRockDead@l
	li       r7, 0x1a7
	li       r6, 0x1a8
	stfs     f0, 0xc(r1)
	li       r5, 0
	addi     r4, r1, 8
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	addi     r3, r1, 0x18
	stw      r10, 0x18(r1)
	stw      r9, 0x18(r1)
	stfs     f0, 0x14(r1)
	sth      r8, 0x1c(r1)
	sth      r7, 0x1e(r1)
	sth      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026444C
 * Size:	000064
 */
void Rock::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e0(r31)
	lwzu     r12, 4(r3)
	lwz      r12, 0x18(r12)
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
 * Address:	802644B0
 * Size:	000064
 */
void Rock::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e0(r31)
	lwzu     r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	80264514
 * Size:	000044
 */
void TRockWRun::forceKill()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	lwz      r12, 4(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x54(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80264558
 * Size:	00009C
 */
TRockGrRun::~TRockGrRun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802645D8
	lis      r3, __vt__Q23efx10TRockGrRun@ha
	addi     r3, r3, __vt__Q23efx10TRockGrRun@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802645C8
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802645C8
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802645C8:
	extsh.   r0, r31
	ble      lbl_802645D8
	mr       r3, r30
	bl       __dl__FPv

lbl_802645D8:
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
 * Address:	802645F4
 * Size:	00009C
 */
TRockRun::~TRockRun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80264674
	lis      r3, __vt__Q23efx8TRockRun@ha
	addi     r3, r3, __vt__Q23efx8TRockRun@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80264664
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80264664
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80264664:
	extsh.   r0, r31
	ble      lbl_80264674
	mr       r3, r30
	bl       __dl__FPv

lbl_80264674:
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
 * Address:	80264690
 * Size:	000008
 */
u32 Rock::Obj::isLivingThing() { return 0x0; }

/*
 * --INFO--
 * Address:	80264698
 * Size:	000014
 */
void EnemyBase::@744 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -744
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802646AC
 * Size:	000014
 */
void EnemyBase::@744 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -744
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802646C0
 * Size:	000014
 */
void EnemyBase::@744 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -744
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802646D4
 * Size:	000014
 */
void EnemyBase::@744 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -744
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802646E8
 * Size:	000014
 */
void EnemyBase::@744 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -744
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802646FC
 * Size:	000014
 */
void EnemyBase::@744 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -744
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80264710
 * Size:	000008
 */
TRockRun::@4 @~TRockRun()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx8TRockRunFv
	*/
}

/*
 * --INFO--
 * Address:	80264718
 * Size:	000008
 */
TRockGrRun::@4 @~TRockGrRun()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx10TRockGrRunFv
	*/
}
} // namespace efx

} // namespace efx
