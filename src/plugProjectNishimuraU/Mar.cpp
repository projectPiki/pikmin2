#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9TFusenSui
    __vt__Q23efx9TFusenSui:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9TFusenSuiFv"
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
        .4byte __dt__Q23efx9TFusenSuiFv
    .global __vt__Q23efx9TFusenAir
    __vt__Q23efx9TFusenAir:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx12TFusenAirhit
    __vt__Q23efx12TFusenAirhit:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
        .4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
        .4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
        .4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .global __vt__Q23efx10TFusenDead
    __vt__Q23efx10TFusenDead:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q34Game3Mar3Obj
    __vt__Q34Game3Mar3Obj:
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
        .4byte onInit__Q34Game3Mar3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game3Mar3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game3Mar3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game3Mar3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game3Mar3ObjFv
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
        .4byte getShadowParam__Q34Game3Mar3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game3Mar3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game3Mar3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game3Mar3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game3Mar3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q34Game3Mar3ObjFv .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game3Mar3ObjFv
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
        .4byte getEnemyTypeID__Q34Game3Mar3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q34Game3Mar3ObjFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q34Game3Mar3ObjFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q34Game3Mar3ObjFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
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
   doStartStoneState__Q34Game3Mar3ObjFv .4byte
   doFinishStoneState__Q34Game3Mar3ObjFv .4byte
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
   doStartWaitingBirthTypeDrop__Q34Game3Mar3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game3Mar3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game3Mar3ObjFv .4byte doStartMovie__Q34Game3Mar3ObjFv
        .4byte doEndMovie__Q34Game3Mar3ObjFv
        .4byte setFSM__Q34Game3Mar3ObjFPQ34Game3Mar3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@804@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@804@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@804@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@804@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@804@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@804@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B598
    lbl_8051B598:
        .4byte 0x00000000
    .global lbl_8051B59C
    lbl_8051B59C:
        .4byte 0x68616E61
        .4byte 0x33000000
    .global lbl_8051B5A4
    lbl_8051B5A4:
        .4byte 0x41F00000
    .global lbl_8051B5A8
    lbl_8051B5A8:
        .4byte 0x6D756E65
        .4byte 0x00000000
    .global lbl_8051B5B0
    lbl_8051B5B0:
        .float 1.0
    .global lbl_8051B5B4
    lbl_8051B5B4:
        .4byte 0x42C80000
    .global lbl_8051B5B8
    lbl_8051B5B8:
        .4byte 0x42480000
    .global lbl_8051B5BC
    lbl_8051B5BC:
        .4byte 0xC1200000
    .global lbl_8051B5C0
    lbl_8051B5C0:
        .4byte 0x43FA0000
    .global lbl_8051B5C4
    lbl_8051B5C4:
        .4byte 0x68656164
        .4byte 0x00000000
    .global lbl_8051B5CC
    lbl_8051B5CC:
        .4byte 0xC3A2F983
    .global lbl_8051B5D0
    lbl_8051B5D0:
        .4byte 0x43A2F983
    .global lbl_8051B5D4
    lbl_8051B5D4:
        .4byte 0x47000000
    .global lbl_8051B5D8
    lbl_8051B5D8:
        .4byte 0x40490FDB
    .global lbl_8051B5DC
    lbl_8051B5DC:
        .4byte 0x3FC90FDB
    .global lbl_8051B5E0
    lbl_8051B5E0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B5E8
    lbl_8051B5E8:
        .4byte 0x41200000
    .global lbl_8051B5EC
    lbl_8051B5EC:
        .4byte 0x42200000
    .global lbl_8051B5F0
    lbl_8051B5F0:
        .4byte 0x3FC00000
    .global lbl_8051B5F4
    lbl_8051B5F4:
        .4byte 0x40C90FDB
    .global lbl_8051B5F8
    lbl_8051B5F8:
        .4byte 0x3BB60B61
    .global lbl_8051B5FC
    lbl_8051B5FC:
        .4byte 0x43340000
    .global lbl_8051B600
    lbl_8051B600:
        .4byte 0x46480000
    .global lbl_8051B604
    lbl_8051B604:
        .4byte 0xBF59999A
    .global lbl_8051B608
    lbl_8051B608:
        .4byte 0x41C80000
    .global lbl_8051B60C
    lbl_8051B60C:
        .4byte 0x40400000
    .global lbl_8051B610
    lbl_8051B610:
        .4byte 0x41700000
    .global lbl_8051B614
    lbl_8051B614:
        .4byte 0x3F933333
*/

namespace Game {

/*
 * --INFO--
 * Address:	8027F50C
 * Size:	00015C
 */
Mar::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8027F54C
	addi     r0, r31, 0x324
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x324(r31)
	stw      r0, 0x328(r31)
	stw      r0, 0x32c(r31)

lbl_8027F54C:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game3Mar3Obj@ha
	addi     r0, r31, 0x324
	addi     r5, r3, __vt__Q34Game3Mar3Obj@l
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
	beq      lbl_8027F5D8
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game3Mar14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game3Mar14ProperAnimator@l
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

lbl_8027F5D8:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8027F60C
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game3Mar3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game3Mar3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8027F60C:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game3Mar3ObjFv
	li       r3, 0x28
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
	li       r5, 0
	addi     r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
	li       r6, 0xc
	li       r7, 2
	bl       __construct_new_array
	stw      r3, 0x320(r31)
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
 * Address:	8027F668
 * Size:	000004
 */
void Mar::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8027F66C
 * Size:	0000EC
 */
void Mar::Obj::onInit(Game::CreatureInitArg*)
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
	lfs      f0, lbl_8051B598@sda21(r2)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	bl       resetShadowOffset__Q34Game3Mar3ObjFv
	mr       r3, r31
	bl       resetShadowRadius__Q34Game3Mar3ObjFv
	lfs      f0, lbl_8051B598@sda21(r2)
	li       r0, 0
	addi     r4, r2, lbl_8051B59C@sda21
	stfs     f0, 0x30c(r31)
	stb      r0, 0x308(r31)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	stw      r3, 0x2dc(r31)
	mr       r3, r31
	bl       setupEffect__Q34Game3Mar3ObjFv
	lfs      f0, lbl_8051B598@sda21(r2)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	stfs     f0, 0x304(r31)
	lwz      r3, 0x2bc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x320(r31)
	lwz      r4, 0x180(r31)
	lwz      r12, 0(r3)
	lwz      r4, 0x44(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x320(r31)
	lwzu     r12, 0xc(r3)
	lwz      r4, 0x180(r31)
	lwz      r12, 8(r12)
	lwz      r4, 0x48(r4)
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
 * Address:	8027F758
 * Size:	000044
 */
void Mar::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishWindEffect__Q34Game3Mar3ObjFv
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
 * Address:	8027F79C
 * Size:	000050
 */
void Mar::Obj::doUpdate()
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
	bl       updateFallTimer__Q34Game3Mar3ObjFv
	mr       r3, r31
	bl       updateEmit__Q34Game3Mar3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F7EC
 * Size:	0000D4
 */
void Mar::Obj::changeMaterial()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x174(r3)
	lwz      r29, 8(r3)
	lwz      r12, 0(r29)
	mr       r3, r29
	lwz      r30, 4(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x320(r28)
	lfs      f1, lbl_8051B5A4@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x320(r28)
	lfs      f1, lbl_8051B5A4@sda21(r2)
	addi     r3, r3, 0xc
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lis      r3, j3dSys@ha
	li       r28, 0
	addi     r31, r3, j3dSys@l
	b        lbl_8027F890

lbl_8027F858:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r31)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8027F890:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_8027F858
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
 * Address:	8027F8C0
 * Size:	00004C
 */
void Mar::Obj::setFSM(Game::Mar::FSM*)
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
 * Address:	8027F90C
 * Size:	000004
 */
void Mar::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8027F910
 * Size:	000020
 */
void Mar::Obj::doDebugDraw(Graphics&)
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
 * Address:	8027F930
 * Size:	0000D0
 */
void Mar::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051B5A8@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f3, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	mr       r3, r30
	lfs      f1, lbl_8051B598@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, lbl_8051B5B0@sda21(r2)
	stfs     f2, 4(r31)
	stfs     f3, 8(r31)
	lfs      f3, 0x190(r30)
	lfs      f2, 0x2c8(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027F9C0
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	bne      lbl_8027F9D8

lbl_8027F9C0:
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051B5B4@sda21(r2)
	lfs      f0, 0x81c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)
	b        lbl_8027F9E0

lbl_8027F9D8:
	lfs      f0, lbl_8051B5B8@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_8027F9E0:
	lfs      f0, 0x2cc(r30)
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
 * Address:	8027FA00
 * Size:	00003C
 */
void Mar::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishWindEffect__Q34Game3Mar3ObjFv
	mr       r3, r31
	bl       setShadowOffsetMax__Q34Game3Mar3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FA3C
 * Size:	000074
 */
void Mar::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	blt      lbl_8027FA6C
	cmpwi    r3, 6
	ble      lbl_8027FA7C

lbl_8027FA6C:
	cmpwi    r3, 9
	blt      lbl_8027FA9C
	cmpwi    r3, 0xa
	bgt      lbl_8027FA9C

lbl_8027FA7C:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 9
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8027FA9C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FAB0
 * Size:	000034
 */
void Mar::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game3Mar3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FAE4
 * Size:	000034
 */
void Mar::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game3Mar3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FB18
 * Size:	000020
 */
void Mar::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game3Mar3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FB38
 * Size:	000020
 */
void Mar::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game3Mar3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FB58
 * Size:	000064
 */
void Mar::Obj::getOffsetForMapCollision()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r1, 8
	bl       getHeadJointPos__Q34Game3Mar3ObjFv
	lfs      f2, 8(r1)
	lfs      f0, 0x18c(r31)
	lfs      f3, 0x10(r1)
	lfs      f1, 0x194(r31)
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051B5BC@sda21(r2)
	fsubs    f3, f3, f1
	stfs     f2, 0(r30)
	stfs     f0, 4(r30)
	stfs     f3, 8(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FBBC
 * Size:	000050
 */
void Mar::Obj::getThrowupItemPosition(Vector3f*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8027FBDC
	bl       "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	b        lbl_8027FBFC

lbl_8027FBDC:
	lfs      f2, lbl_8051B5C0@sda21(r2)
	lfs      f1, 0x190(r3)
	lfs      f3, 0x194(r3)
	lfs      f0, 0x18c(r3)
	fadds    f1, f2, f1
	stfs     f0, 0(r4)
	stfs     f1, 4(r4)
	stfs     f3, 8(r4)

lbl_8027FBFC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FC0C
 * Size:	000040
 */
void Mar::Obj::getThrowupItemVelocity(Vector3f*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8027FC2C
	bl       "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	b        lbl_8027FC3C

lbl_8027FC2C:
	lfs      f0, lbl_8051B598@sda21(r2)
	stfs     f0, 8(r4)
	stfs     f0, 4(r4)
	stfs     f0, 0(r4)

lbl_8027FC3C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FC4C
 * Size:	000050
 */
void Mar::Obj::getHeadJointPos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r4)
	addi     r4, r2, lbl_8051B5C4@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FC9C
 * Size:	00011C
 */
void Mar::Obj::setHeightVelocity()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	fmr      f31, f1
	lfs      f1, 0x190(r31)
	lfs      f30, 0x81c(r3)
	lfs      f0, 0x934(r3)
	fsubs    f1, f1, f31
	fsubs    f0, f30, f0
	fcmpo    cr0, f1, f0
	ble      lbl_8027FD70
	mr       r3, r31
	bl       addPitchRatio__Q34Game3Mar3ObjFv
	lfs      f2, 0x30c(r31)
	lfs      f0, lbl_8051B598@sda21(r2)
	lwz      r3, 0xc0(r31)
	fcmpo    cr0, f2, f0
	lfs      f1, 0x934(r3)
	bge      lbl_8027FD48
	lfs      f0, lbl_8051B5CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8027FD6C

lbl_8027FD48:
	lfs      f0, lbl_8051B5D0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8027FD6C:
	fmadds   f30, f1, f0, f30

lbl_8027FD70:
	fadds    f1, f31, f30
	lfs      f0, 0x190(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x844(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1cc(r31)
	lfs      f0, 0x190(r31)
	fsubs    f1, f0, f31
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FDB8
 * Size:	0001D8
 */
void Mar::Obj::setRandTarget()
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
	lfd      f1, lbl_8051B5E0@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0(r31)
	fsubs    f2, f0, f1
	lfs      f1, lbl_8051B5D4@sda21(r2)
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
	lfd      f2, lbl_8051B5E0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f3, lbl_8051B5D8@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051B5D4@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051B5DC@sda21(r2)
	lfs      f0, lbl_8051B598@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f27, f1
	fadds    f3, f2, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8027FED0
	fneg     f1, f3

lbl_8027FED0:
	lfs      f2, lbl_8051B5D0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B598@sda21(r2)
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
	bge      lbl_8027FF2C
	lfs      f0, lbl_8051B5CC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8027FF44

lbl_8027FF2C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8027FF44:
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
 * Address:	8027FF90
 * Size:	00000C
 */
void Mar::Obj::resetShadowOffset()
{
	/*
	lfs      f0, lbl_8051B5BC@sda21(r2)
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FF9C
 * Size:	00000C
 */
void Mar::Obj::setShadowOffsetMax()
{
	/*
	lfs      f0, lbl_8051B5E8@sda21(r2)
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FFA8
 * Size:	000028
 */
void Mar::Obj::addShadowOffset()
{
	/*
	lfs      f2, 0x2c8(r3)
	lfs      f1, lbl_8051B5B0@sda21(r2)
	lfs      f0, lbl_8051B5E8@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2c8(r3)
	lfs      f1, 0x2c8(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FFD0
 * Size:	000028
 */
void Mar::Obj::subShadowOffset()
{
	/*
	lfs      f2, 0x2c8(r3)
	lfs      f1, lbl_8051B5B0@sda21(r2)
	lfs      f0, lbl_8051B5BC@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x2c8(r3)
	lfs      f1, 0x2c8(r3)
	fcmpo    cr0, f1, f0
	bgelr
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027FFF8
 * Size:	00000C
 */
void Mar::Obj::resetShadowRadius()
{
	/*
	lfs      f0, lbl_8051B5EC@sda21(r2)
	stfs     f0, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280004
 * Size:	000030
 */
void Mar::Obj::subShadowRadius()
{
	/*
	lfs      f2, 0x2cc(r3)
	lfs      f1, lbl_8051B5B0@sda21(r2)
	fcmpo    cr0, f2, f1
	blelr
	lfs      f0, lbl_8051B5F0@sda21(r2)
	fsubs    f0, f2, f0
	stfs     f0, 0x2cc(r3)
	lfs      f0, 0x2cc(r3)
	fcmpo    cr0, f0, f1
	bgelr
	stfs     f1, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280034
 * Size:	000030
 */
void Mar::Obj::updateFallTimer()
{
	/*
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_80280058
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r3)
	blr

lbl_80280058:
	lfs      f0, lbl_8051B598@sda21(r2)
	stfs     f0, 0x2c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280064
 * Size:	0000A4
 */
void Mar::Obj::getFlyingNextState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B598@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80280094
	li       r3, 0
	b        lbl_802800F4

lbl_80280094:
	li       r4, 3
	bl       getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
	cmpwi    r3, 0
	ble      lbl_802800AC
	li       r3, 6
	b        lbl_802800F4

lbl_802800AC:
	lwz      r4, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x8bc(r4)
	fcmpo    cr0, f1, f0
	bgt      lbl_802800D0
	lwz      r3, 0x1f4(r31)
	lwz      r0, 0x8e4(r4)
	cmpw     r3, r0
	blt      lbl_802800F0

lbl_802800D0:
	lwz      r3, 0x1f4(r31)
	lwz      r0, 0x8e4(r4)
	cmpw     r3, r0
	bge      lbl_802800E8
	li       r3, 0xa
	b        lbl_802800F4

lbl_802800E8:
	li       r3, 6
	b        lbl_802800F4

lbl_802800F0:
	li       r3, -1

lbl_802800F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280108
 * Size:	000038
 */
void Mar::Obj::addPitchRatio()
{
	/*
	lwz      r5, 0xc0(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f3, 0x90c(r5)
	lfs      f2, 0x54(r4)
	lfs      f1, 0x30c(r3)
	lfs      f0, lbl_8051B5F4@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x30c(r3)
	lfs      f1, 0x30c(r3)
	fcmpo    cr0, f1, f0
	blelr
	fsubs    f0, f1, f0
	stfs     f0, 0x30c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280140
 * Size:	0003AC
 */
void Mar::Obj::getSearchedPikmin()
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
	stw      r30, 0x58(r1)
	mr       r31, r3
	lfs      f31, lbl_8051B5D8@sda21(r2)
	lwz      r3, 0xc0(r3)
	lwz      r0, 0x1f4(r31)
	lfs      f0, 0x3d4(r3)
	cmpwi    r0, 0
	fmuls    f30, f0, f0
	bne      lbl_8028019C
	lfs      f1, lbl_8051B5F8@sda21(r2)
	lfs      f0, 0x424(r3)
	fmuls    f0, f1, f0
	fmuls    f31, f31, f0

lbl_8028019C:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x50(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x44(r1)
	stw      r0, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_802801DC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80280498

lbl_802801DC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80280248

lbl_802801F4:
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
	bne      lbl_80280498
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_80280248:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802801F4
	b        lbl_80280498

lbl_80280268:
	lwz      r3, 0x4c(r1)
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
	beq      lbl_802803DC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802803DC
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_802803DC
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802803DC
	lwz      r0, 0xf4(r30)
	cmplw    r0, r31
	beq      lbl_802803DC
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
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
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_802803DC
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	lfs      f0, 0x40(r1)
	lfs      f2, 0x18c(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x38(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_802803DC
	mr       r3, r30
	b        lbl_802804BC

lbl_802803DC:
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_80280408
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80280498

lbl_80280408:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_8028047C

lbl_80280428:
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
	bne      lbl_80280498
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_8028047C:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280428

lbl_80280498:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_80280268
	li       r3, 0

lbl_802804BC:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	802804EC
 * Size:	0002F0
 */
void Mar::Obj::isTargetLost()
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stfd     f25, 0x90(r1)
	psq_st   f25, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r3
	lwz      r31, 0x230(r3)
	cmplwi   r31, 0
	beq      lbl_80280788
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280788
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80280788
	lwz      r0, 0xf4(r31)
	cmplw    r0, r30
	beq      lbl_80280788
	lwz      r0, 0x1f4(r30)
	lwz      r5, 0xc0(r30)
	cmpwi    r0, 0
	lfs      f29, 0x424(r5)
	beq      lbl_80280598
	lfs      f29, lbl_8051B5FC@sda21(r2)

lbl_80280598:
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f30, 0x3d4(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x3ac(r5)
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
	mr       r4, r30
	fmr      f27, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lfs      f28, 0x44(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x38(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x5c
	fsubs    f25, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lfs      f28, 0x60(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x54(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x74
	fsubs    f26, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x68
	lwz      r12, 0(r31)
	lfs      f28, 0x7c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x70(r1)
	fmuls    f1, f31, f31
	fmuls    f2, f30, f30
	li       r3, 1
	fsubs    f0, f0, f28
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f25, f25, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8028074C
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_80280740
	fabs     f1, f26
	lfs      f0, lbl_8051B600@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80280740
	mr       r0, r3

lbl_80280740:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8028074C
	li       r4, 1

lbl_8028074C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8028078C
	lfs      f0, lbl_8051B5F8@sda21(r2)
	fabs     f2, f27
	lfs      f1, lbl_8051B5D8@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_8028078C
	li       r3, 0
	b        lbl_8028078C

lbl_80280788:
	li       r3, 1

lbl_8028078C:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	psq_l    f25, 152(r1), 0, qr0
	lfd      f25, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0x104(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	802807DC
 * Size:	00038C
 */
void Mar::Obj::isAttackable()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_8051B598@sda21(r2)
	lwz      r5, 0xc0(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_80280834
	fneg     f2, f2

lbl_80280834:
	lfs      f3, lbl_8051B5D0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B598@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f4, 0x564(r5)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f4, f0
	bge      lbl_80280894
	lfs      f0, lbl_8051B5CC@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802808AC

lbl_80280894:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802808AC:
	mr       r4, r31
	fmuls    f30, f4, f0
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc0(r31)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f2, 0x14(r1)
	li       r0, 0
	lfs      f0, 0x58c(r4)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lfs      f1, 0x1c(r1)
	cmplwi   r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	fadds    f30, f30, f2
	fadds    f31, f31, f1
	stw      r4, 0x20(r1)
	fmuls    f29, f0, f0
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80280924
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280B14

lbl_80280924:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280990

lbl_8028093C:
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
	bne      lbl_80280B14
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80280990:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028093C
	b        lbl_80280B14

lbl_802809B0:
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
	beq      lbl_80280A58
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280A58
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80280A58
	lwz      r0, 0xf4(r30)
	cmplw    r0, r31
	beq      lbl_80280A58
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f1, 8(r1)
	fsubs    f0, f0, f31
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80280A58
	mr       r3, r30
	b        lbl_80280B38

lbl_80280A58:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80280A84
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280B14

lbl_80280A84:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280AF8

lbl_80280AA4:
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
	bne      lbl_80280B14
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80280AF8:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280AA4

lbl_80280B14:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802809B0
	li       r3, 0

lbl_80280B38:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280B68
 * Size:	0001AC
 */
void Mar::Obj::updateEmit()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x2dc(r3)
	cmplwi   r3, 0
	beq      lbl_80280BA8
	lfs      f0, 0xc(r3)
	stfs     f0, 0x2e0(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x2e8(r31)

lbl_80280BA8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80280BCC
	fneg     f1, f1

lbl_80280BCC:
	lfs      f0, lbl_8051B5D0@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lwz      r12, 0(r31)
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	mr       r3, r31
	lwz      r12, 0x64(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r4, r0
	lfs      f31, 4(r4)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80280C40
	lfs      f0, lbl_8051B5CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80280C64

lbl_80280C40:
	lfs      f0, lbl_8051B5D0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80280C64:
	stfs     f0, 0x2ec(r31)
	lfs      f0, lbl_8051B604@sda21(r2)
	lfs      f1, lbl_8051B598@sda21(r2)
	stfs     f0, 0x2f0(r31)
	stfs     f31, 0x2f4(r31)
	lfs      f3, 0x2ec(r31)
	lfs      f2, 0x2f0(r31)
	lfs      f4, 0x2f4(r31)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80280CBC
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80280CC0
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80280CC0

lbl_80280CBC:
	fmr      f2, f1

lbl_80280CC0:
	lfs      f0, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80280CF8
	lfs      f1, lbl_8051B5B0@sda21(r2)
	lfs      f0, 0x2ec(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x2ec(r31)
	lfs      f0, 0x2f0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2f0(r31)
	lfs      f0, 0x2f4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2f4(r31)

lbl_80280CF8:
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
 * Address:	80280D14
 * Size:	0001E8
 */
void Mar::Obj::getAttackPosition()
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
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stfd     f23, 0x50(r1)
	psq_st   f23, 88(r1), 0, qr0
	stfd     f22, 0x40(r1)
	psq_st   f22, 72(r1), 0, qr0
	stfd     f21, 0x30(r1)
	psq_st   f21, 56(r1), 0, qr0
	stfd     f20, 0x20(r1)
	psq_st   f20, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	lwz      r5, 0xc0(r4)
	mr       r31, r3
	lfs      f0, lbl_8051B5B4@sda21(r2)
	lfs      f2, 0x5b4(r5)
	lfs      f1, lbl_8051B608@sda21(r2)
	fdivs    f3, f0, f2
	lfs      f27, 0x2ec(r4)
	lfs      f26, 0x2f0(r4)
	lfs      f25, 0x2f4(r4)
	lfs      f31, lbl_8051B5B0@sda21(r2)
	lfs      f30, 0x2e0(r4)
	fmuls    f27, f27, f2
	lfs      f29, 0x2e4(r4)
	fmuls    f26, f26, f2
	lfs      f28, 0x2e8(r4)
	fmuls    f25, f25, f2
	fadds    f27, f27, f30
	fadds    f26, f26, f29
	fadds    f25, f25, f28
	fdivs    f21, f1, f2
	fsubs    f4, f31, f3
	fmuls    f2, f27, f3
	fmuls    f1, f26, f3
	fmuls    f0, f25, f3
	fmr      f20, f3
	fmadds   f24, f30, f4, f2
	fmadds   f23, f29, f4, f1
	fmadds   f22, f28, f4, f0
	b        lbl_80280E68

lbl_80280DF8:
	fsubs    f3, f31, f20
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f2, f27, f20
	addi     r4, r1, 8
	fmuls    f1, f26, f20
	fmuls    f0, f25, f20
	fmadds   f2, f30, f3, f2
	fmadds   f1, f29, f3, f1
	fmadds   f0, f28, f3, f0
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80280E54
	stfs     f24, 0(r31)
	stfs     f23, 4(r31)
	stfs     f22, 8(r31)
	b        lbl_80280E88

lbl_80280E54:
	frsp     f23, f1
	stfs     f1, 0xc(r1)
	fadds    f20, f20, f21
	lfs      f24, 8(r1)
	lfs      f22, 0x10(r1)

lbl_80280E68:
	fcmpo    cr0, f20, f31
	blt      lbl_80280DF8
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)

lbl_80280E88:
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
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	psq_l    f23, 88(r1), 0, qr0
	lfd      f23, 0x50(r1)
	psq_l    f22, 72(r1), 0, qr0
	lfd      f22, 0x40(r1)
	psq_l    f21, 56(r1), 0, qr0
	lfd      f21, 0x30(r1)
	psq_l    f20, 40(r1), 0, qr0
	lfd      f20, 0x20(r1)
	lwz      r0, 0xe4(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80280EFC
 * Size:	0008F4
 */
void Mar::Obj::windTarget()
{
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stfd     f31, 0x180(r1)
	psq_st   f31, 392(r1), 0, qr0
	stfd     f30, 0x170(r1)
	psq_st   f30, 376(r1), 0, qr0
	stfd     f29, 0x160(r1)
	psq_st   f29, 360(r1), 0, qr0
	stfd     f28, 0x150(r1)
	psq_st   f28, 344(r1), 0, qr0
	stfd     f27, 0x140(r1)
	psq_st   f27, 328(r1), 0, qr0
	stfd     f26, 0x130(r1)
	psq_st   f26, 312(r1), 0, qr0
	stfd     f25, 0x120(r1)
	psq_st   f25, 296(r1), 0, qr0
	stfd     f24, 0x110(r1)
	psq_st   f24, 280(r1), 0, qr0
	stfd     f23, 0x100(r1)
	psq_st   f23, 264(r1), 0, qr0
	stfd     f22, 0xf0(r1)
	psq_st   f22, 248(r1), 0, qr0
	stfd     f21, 0xe0(r1)
	psq_st   f21, 232(r1), 0, qr0
	stfd     f20, 0xd0(r1)
	psq_st   f20, 216(r1), 0, qr0
	stfd     f19, 0xc0(r1)
	psq_st   f19, 200(r1), 0, qr0
	stfd     f18, 0xb0(r1)
	psq_st   f18, 184(r1), 0, qr0
	stfd     f17, 0xa0(r1)
	psq_st   f17, 168(r1), 0, qr0
	stfd     f16, 0x90(r1)
	psq_st   f16, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r31, r3
	lfs      f2, lbl_8051B5B0@sda21(r2)
	lfs      f3, 0x304(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_80280FC8
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051B60C@sda21(r2)
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x304(r31)
	lfs      f0, 0x304(r31)
	fcmpo    cr0, f0, f2
	ble      lbl_80280FC8
	stfs     f2, 0x304(r31)

lbl_80280FC8:
	lwz      r3, 0xc0(r31)
	lfs      f1, lbl_8051B5F8@sda21(r2)
	lfs      f0, 0x5dc(r3)
	lfs      f3, 0x304(r31)
	fmuls    f0, f1, f0
	lfs      f2, 0x5b4(r3)
	lfs      f1, lbl_8051B5D8@sda21(r2)
	fmuls    f19, f3, f2
	lfs      f16, 0x2e0(r31)
	fmuls    f1, f1, f0
	lfs      f17, 0x2e4(r31)
	lfs      f18, 0x2e8(r31)
	lfs      f29, 0x2ec(r31)
	lfs      f21, 0x2f0(r31)
	lfs      f28, 0x2f4(r31)
	bl       tan
	fneg     f27, f28
	lfs      f31, lbl_8051B598@sda21(r2)
	fmuls    f0, f29, f29
	fmr      f30, f29
	fmadds   f2, f27, f27, f31
	frsp     f20, f1
	fadds    f2, f0, f2
	fcmpo    cr0, f2, f31
	ble      lbl_8028103C
	ble      lbl_80281040
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_80281040

lbl_8028103C:
	fmr      f2, f31

lbl_80281040:
	lfs      f1, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80281060
	lfs      f1, lbl_8051B5B0@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f27, f27, f1
	fmuls    f31, f31, f1
	fmuls    f30, f30, f1

lbl_80281060:
	fmuls    f3, f27, f28
	lfs      f1, lbl_8051B598@sda21(r2)
	fmuls    f4, f30, f21
	fmuls    f2, f31, f29
	fmsubs   f25, f30, f29, f3
	fmsubs   f26, f31, f28, f4
	fmsubs   f24, f27, f21, f2
	fmuls    f2, f25, f25
	fmuls    f3, f24, f24
	fmadds   f2, f26, f26, f2
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_802810A4
	ble      lbl_802810A8
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_802810A8

lbl_802810A4:
	fmr      f2, f1

lbl_802810A8:
	lfs      f1, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_802810C8
	lfs      f1, lbl_8051B5B0@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f26, f26, f1
	fmuls    f25, f25, f1
	fmuls    f24, f24, f1

lbl_802810C8:
	lfs      f1, lbl_8051B598@sda21(r2)
	fmuls    f2, f28, f28
	fmr      f22, f29
	fadds    f0, f0, f1
	fmr      f23, f28
	fadds    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80281104
	fmadds   f0, f29, f29, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80281108
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80281108

lbl_80281104:
	fmr      f2, f1

lbl_80281108:
	lfs      f0, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80281124
	lfs      f0, lbl_8051B5B0@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f22, f22, f0
	fmuls    f23, f23, f0

lbl_80281124:
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x48(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	bne      lbl_80281164
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802813F4

lbl_80281164:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802811D0

lbl_8028117C:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802813F4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_802811D0:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028117C
	b        lbl_802813F4

lbl_802811F0:
	lwz      r3, 0x44(r1)
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
	beq      lbl_80281338
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, 0x20(r1)
	fsubs    f2, f1, f17
	lfs      f1, 0x28(r1)
	fsubs    f4, f0, f16
	fsubs    f0, f1, f18
	fmuls    f1, f21, f2
	fmadds   f1, f29, f4, f1
	fmadds   f5, f28, f0, f1
	fcmpo    cr0, f5, f19
	bge      lbl_80281338
	lfs      f6, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f5, f6
	ble      lbl_80281338
	fmuls    f3, f25, f2
	fmuls    f1, f31, f2
	fmuls    f2, f5, f20
	fmadds   f5, f26, f4, f3
	fmadds   f4, f27, f4, f1
	fmuls    f3, f2, f2
	fmadds   f1, f24, f0, f5
	fmadds   f0, f30, f0, f4
	fmuls    f4, f1, f1
	fmadds   f4, f0, f0, f4
	fcmpo    cr0, f4, f3
	bge      lbl_80281338
	fcmpo    cr0, f4, f6
	ble      lbl_802812BC
	ble      lbl_802812B8
	frsqrte  f3, f4
	fmuls    f6, f3, f4
	b        lbl_802812BC

lbl_802812B8:
	fmr      f6, f4

lbl_802812BC:
	fdivs    f7, f6, f2
	lfs      f2, lbl_8051B5B0@sda21(r2)
	lwz      r5, 0xc0(r31)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractWind@ha
	lfs      f5, lbl_8051B5E8@sda21(r2)
	fsubs    f4, f2, f7
	lfs      f6, 0x604(r5)
	fmuls    f3, f27, f0
	addi     r0, r4, __vt__Q24Game11Interaction@l
	fmuls    f0, f30, f0
	lfs      f2, lbl_8051B598@sda21(r2)
	fmadds   f4, f5, f4, f7
	stw      r0, 0x64(r1)
	fmadds   f3, f22, f1, f3
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	fmadds   f0, f23, f1, f0
	stw      r31, 0x68(r1)
	fmuls    f1, f4, f3
	stw      r0, 0x64(r1)
	fmuls    f0, f4, f0
	mr       r3, r30
	stfs     f6, 0x6c(r1)
	addi     r4, r1, 0x64
	stfs     f1, 0x70(r1)
	stfs     f2, 0x74(r1)
	stfs     f0, 0x78(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80281338:
	lwz      r0, 0x48(r1)
	cmplwi   r0, 0
	bne      lbl_80281364
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802813F4

lbl_80281364:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802813D8

lbl_80281384:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802813F4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_802813D8:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80281384

lbl_802813F4:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_802811F0
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x38(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_80281454
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80281714

lbl_80281454:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802814C0

lbl_8028146C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80281714
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802814C0:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028146C
	b        lbl_80281714

lbl_802814E0:
	lwz      r3, 0x34(r1)
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
	beq      lbl_80281658
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80281658
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, 0x14(r1)
	fsubs    f2, f1, f17
	lfs      f1, 0x1c(r1)
	fsubs    f3, f0, f16
	fsubs    f4, f1, f18
	fmuls    f0, f21, f2
	fmadds   f0, f29, f3, f0
	fmadds   f6, f28, f4, f0
	fcmpo    cr0, f6, f19
	bge      lbl_80281658
	lfs      f5, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_80281658
	fmuls    f1, f25, f2
	fmuls    f0, f31, f2
	fmuls    f2, f6, f20
	fmadds   f1, f26, f3, f1
	fmadds   f0, f27, f3, f0
	fmuls    f3, f2, f2
	fmadds   f1, f24, f4, f1
	fmadds   f0, f30, f4, f0
	fmuls    f4, f1, f1
	fmadds   f4, f0, f0, f4
	fcmpo    cr0, f4, f3
	bge      lbl_80281658
	fcmpo    cr0, f4, f5
	ble      lbl_802815C4
	ble      lbl_802815C8
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802815C8

lbl_802815C4:
	fmr      f4, f5

lbl_802815C8:
	fdivs    f9, f4, f2
	lfs      f2, lbl_8051B5B0@sda21(r2)
	lfs      f7, lbl_8051B5F0@sda21(r2)
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f4, lbl_8051B5B8@sda21(r2)
	lis      r3, __vt__Q24Game12InteractWind@ha
	fmuls    f6, f27, f0
	lfs      f8, lbl_8051B610@sda21(r2)
	fmuls    f3, f30, f0
	lwz      r5, 0xc0(r31)
	fsubs    f2, f2, f9
	lfs      f5, lbl_8051B5C0@sda21(r2)
	lfs      f0, 0x604(r5)
	fmuls    f7, f7, f9
	fmuls    f4, f4, f9
	addi     r0, r4, __vt__Q24Game11Interaction@l
	fmadds   f6, f22, f1, f6
	stw      r0, 0x4c(r1)
	fmadds   f7, f8, f2, f7
	fmadds   f1, f23, f1, f3
	fmadds   f2, f5, f2, f4
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	fmuls    f3, f7, f6
	stw      r31, 0x50(r1)
	fmuls    f1, f7, f1
	stw      r0, 0x4c(r1)
	mr       r3, r30
	addi     r4, r1, 0x4c
	stfs     f0, 0x54(r1)
	stfs     f3, 0x58(r1)
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80281658:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_80281684
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80281714

lbl_80281684:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802816F8

lbl_802816A4:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80281714
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802816F8:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802816A4

lbl_80281714:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_802814E0
	mr       r4, r31
	addi     r3, r1, 8
	bl       getAttackPosition__Q34Game3Mar3ObjFv
	lfs      f0, 8(r1)
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x300(r31)
	psq_l    f31, 392(r1), 0, qr0
	lfd      f31, 0x180(r1)
	psq_l    f30, 376(r1), 0, qr0
	lfd      f30, 0x170(r1)
	psq_l    f29, 360(r1), 0, qr0
	lfd      f29, 0x160(r1)
	psq_l    f28, 344(r1), 0, qr0
	lfd      f28, 0x150(r1)
	psq_l    f27, 328(r1), 0, qr0
	lfd      f27, 0x140(r1)
	psq_l    f26, 312(r1), 0, qr0
	lfd      f26, 0x130(r1)
	psq_l    f25, 296(r1), 0, qr0
	lfd      f25, 0x120(r1)
	psq_l    f24, 280(r1), 0, qr0
	lfd      f24, 0x110(r1)
	psq_l    f23, 264(r1), 0, qr0
	lfd      f23, 0x100(r1)
	psq_l    f22, 248(r1), 0, qr0
	lfd      f22, 0xf0(r1)
	psq_l    f21, 232(r1), 0, qr0
	lfd      f21, 0xe0(r1)
	psq_l    f20, 216(r1), 0, qr0
	lfd      f20, 0xd0(r1)
	psq_l    f19, 200(r1), 0, qr0
	lfd      f19, 0xc0(r1)
	psq_l    f18, 184(r1), 0, qr0
	lfd      f18, 0xb0(r1)
	psq_l    f17, 168(r1), 0, qr0
	lfd      f17, 0xa0(r1)
	psq_l    f16, 152(r1), 0, qr0
	lfd      f16, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0x194(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/*
 * --INFO--
 * Address:	802817F0
 * Size:	000150
 */
void Mar::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x2c
	stw      r30, 8(r1)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80281834
	li       r4, 0
	li       r5, 0x71
	li       r6, 0x72
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx10TFusenDead@ha
	addi     r0, r3, __vt__Q23efx10TFusenDead@l
	stw      r0, 0(r30)

lbl_80281834:
	stw      r30, 0x310(r31)
	li       r3, 0x34
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80281868
	addi     r4, r31, 0x2f8
	addi     r5, r31, 0x1fc
	li       r6, 0x6c
	li       r7, 0x6d
	bl       "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
	lis      r3, __vt__Q23efx12TFusenAirhit@ha
	addi     r0, r3, __vt__Q23efx12TFusenAirhit@l
	stw      r0, 0(r30)

lbl_80281868:
	stw      r30, 0x314(r31)
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8028189C
	li       r4, 0
	li       r5, 0x6e
	li       r6, 0x6f
	li       r7, 0x70
	bl       __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
	lis      r3, __vt__Q23efx9TFusenAir@ha
	addi     r0, r3, __vt__Q23efx9TFusenAir@l
	stw      r0, 0(r30)

lbl_8028189C:
	stw      r30, 0x318(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80281924
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
	lis      r4, __vt__Q23efx9TFusenSui@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TFusenSui@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x73
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

lbl_80281924:
	stw      r3, 0x31c(r31)
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
 * Address:	80281940
 * Size:	00004C
 */
void Mar::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x310(r3)
	lwz      r4, 0x2dc(r31)
	bl       setMtxptr__Q23efx10TChaseMtx2FPA4_f
	lwz      r3, 0x318(r31)
	lwz      r4, 0x2dc(r31)
	bl       setMtxptr__Q23efx10TChaseMtx3FPA4_f
	lwz      r0, 0x2dc(r31)
	lwz      r3, 0x31c(r31)
	stw      r0, 0x10(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028198C
 * Size:	00007C
 */
void Mar::Obj::startDeadEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x310(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x314(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x318(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x31c(r31)
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
 * Address:	80281A08
 * Size:	000034
 */
void Mar::Obj::createSuckEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x31c(r3)
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
 * Address:	80281A3C
 * Size:	000090
 */
void Mar::Obj::startWindEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	mr       r4, r31
	bl       getAttackPosition__Q34Game3Mar3ObjFv
	lfs      f0, 8(r1)
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x300(r31)
	lwz      r3, 0x31c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x318(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x314(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	80281ACC
 * Size:	000078
 */
void Mar::Obj::finishWindEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x310(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x314(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x318(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x31c(r31)
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
 * Address:	80281B44
 * Size:	000074
 */
void Mar::Obj::createDownEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x248(r3)
	lfs      f3, 0x190(r3)
	fadds    f4, f1, f0
	lfs      f2, 0x244(r3)
	lfs      f1, 0x18c(r3)
	lfs      f0, 0x240(r3)
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x10(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x2ec(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80281BB8
 * Size:	000008
 */
void Mar::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051B614@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80281BC0
 * Size:	000078
 */
void Mar::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x310(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x314(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x318(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x31c(r31)
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
 * Address:	80281C38
 * Size:	000078
 */
void Mar::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x310(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x314(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x318(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x31c(r31)
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
 * Address:	80281CB0
 * Size:	00009C
 */
TFusenSui::~TFusenSui()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80281D30
	lis      r3, __vt__Q23efx9TFusenSui@ha
	addi     r3, r3, __vt__Q23efx9TFusenSui@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80281D20
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80281D20
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80281D20:
	extsh.   r0, r31
	ble      lbl_80281D30
	mr       r3, r30
	bl       __dl__FPv

lbl_80281D30:
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
 * Address:	80281D4C
 * Size:	0000BC
 */
Mar::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_80281DEC
	lis      r3, __vt__Q34Game3Mar3Obj@ha
	addi     r0, r31, 0x324
	addi     r4, r3, __vt__Q34Game3Mar3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x2fc
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_80281DDC
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

lbl_80281DDC:
	extsh.   r0, r30
	ble      lbl_80281DEC
	mr       r3, r31
	bl       __dl__FPv

lbl_80281DEC:
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
 * Address:	80281E08
 * Size:	000004
 */
void Mar::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	80281E0C
 * Size:	000004
 */
void Mar::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	80281E10
 * Size:	000004
 */
void Mar::Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	80281E14
 * Size:	000008
 */
u32 Mar::Obj::getEnemyTypeID() { return 0x1D; }

/*
 * --INFO--
 * Address:	80281E1C
 * Size:	000014
 */
void EnemyBase::@804 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -804
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80281E30
 * Size:	000014
 */
void EnemyBase::@804 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -804
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80281E44
 * Size:	000014
 */
void EnemyBase::@804 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -804
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80281E58
 * Size:	000014
 */
void EnemyBase::@804 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -804
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80281E6C
 * Size:	000014
 */
void EnemyBase::@804 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -804
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80281E80
 * Size:	000014
 */
void EnemyBase::@804 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -804
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80281E94
 * Size:	000008
 */
TFusenSui::@4 @~TFusenSui()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx9TFusenSuiFv
	*/
}
} // namespace efx

} // namespace efx
