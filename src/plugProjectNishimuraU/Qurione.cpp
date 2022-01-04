#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80485760
    lbl_80485760:
        .4byte 0x626F6479
        .4byte 0x5F6A6E74
        .4byte 0x32000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx8TQuriHit
    __vt__Q23efx8TQuriHit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx10TQuriDisap
    __vt__Q23efx10TQuriDisap:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TQuriDisapFv"
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
        .4byte __dt__Q23efx10TQuriDisapFv
    .global __vt__Q23efx8TQuriApp
    __vt__Q23efx8TQuriApp:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx8TQuriAppFv"
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
        .4byte __dt__Q23efx8TQuriAppFv
    .global __vt__Q23efx9TQuriGlow
    __vt__Q23efx9TQuriGlow:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9TQuriGlowFv"
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
        .4byte __dt__Q23efx9TQuriGlowFv
    .global __vt__Q34Game7Qurione3Obj
    __vt__Q34Game7Qurione3Obj:
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
        .4byte onInit__Q34Game7Qurione3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game7Qurione3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game7Qurione3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game7Qurione3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game7Qurione3ObjFv
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
        .4byte getShadowParam__Q34Game7Qurione3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game7Qurione3ObjFv
        .4byte "birth__Q34Game7Qurione3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game7Qurione3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game7Qurione3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game7Qurione3ObjFR8Graphics .4byte
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
        .4byte getEnemyTypeID__Q34Game7Qurione3ObjFv
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
   flyCollisionCallBack__Q34Game7Qurione3ObjFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
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
   doStartWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game7Qurione3ObjFv .4byte doEndMovie__Q34Game7Qurione3ObjFv
        .4byte setFSM__Q34Game7Qurione3ObjFPQ34Game7Qurione3FSM
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
    .global lbl_8051ACF0
    lbl_8051ACF0:
        .4byte 0x43480000
    .global lbl_8051ACF4
    lbl_8051ACF4:
        .4byte 0x41F00000
    .global lbl_8051ACF8
    lbl_8051ACF8:
        .4byte 0x00000000
    .global lbl_8051ACFC
    lbl_8051ACFC:
        .4byte 0x41C80000
    .global lbl_8051AD00
    lbl_8051AD00:
        .float 1.0
    .global lbl_8051AD04
    lbl_8051AD04:
        .4byte 0x40F00000
    .global lbl_8051AD08
    lbl_8051AD08:
        .4byte 0xC3A2F983
    .global lbl_8051AD0C
    lbl_8051AD0C:
        .4byte 0x43A2F983
    .global lbl_8051AD10
    lbl_8051AD10:
        .4byte 0x3FC90FDB
    .global lbl_8051AD14
    lbl_8051AD14:
        .4byte 0x40200000
    .global lbl_8051AD18
    lbl_8051AD18:
        .4byte 0x40C90FDB
    .global lbl_8051AD1C
    lbl_8051AD1C:
        .4byte 0x40000000
    .global lbl_8051AD20
    lbl_8051AD20:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051AD28
    lbl_8051AD28:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051AD30
    lbl_8051AD30:
        .4byte 0x77617465
        .4byte 0x72000000
    .global lbl_8051AD38
    lbl_8051AD38:
        .4byte 0x3FA99999
        .4byte 0x9999999A
*/

namespace Game {

/*
 * --INFO--
 * Address:	80260178
 * Size:	000154
 */
Qurione::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802601B8
	addi     r0, r31, 0x2fc
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2fc(r31)
	stw      r0, 0x300(r31)
	stw      r0, 0x304(r31)

lbl_802601B8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r4, __vt__Q34Game7Qurione3Obj@ha
	addi     r0, r31, 0x2fc
	addi     r6, r4, __vt__Q34Game7Qurione3Obj@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	stw      r6, 0(r31)
	addi     r5, r6, 0x1b0
	addi     r9, r6, 0x2fc
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	stw      r5, 0x178(r31)
	addi     r3, r31, 0x2d4
	li       r5, 0
	li       r6, 0xc
	lwz      r8, 0x17c(r31)
	li       r7, 2
	stw      r9, 0(r8)
	lwz      r8, 0x17c(r31)
	subf     r0, r8, r0
	stw      r0, 0xc(r8)
	bl       __construct_array
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80260260
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game7Qurione14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game7Qurione14ProperAnimator@l
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

lbl_80260260:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80260294
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game7Qurione3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game7Qurione3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_80260294:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game7Qurione3ObjFv
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
 * Address:	802602CC
 * Size:	00005C
 */
void Qurione::Obj::birth(Vector3f&, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	mr       r3, r31
	bl       attachItem__Q34Game7Qurione3ObjFv
	lfs      f1, lbl_8051ACF0@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051ACF4@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
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
 * Address:	80260328
 * Size:	00002C
 */
void Qurione::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x2c4(r3)
	lfs      f1, 4(r4)
	bl       setQurioneStartPos__Q34Game7Qurione3ObjFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260354
 * Size:	0000EC
 */
void Qurione::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r4, 0x1e0(r31)
	li       r0, 0
	lfs      f0, lbl_8051ACF8@sda21(r2)
	mr       r3, r31
	ori      r4, r4, 4
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	ori      r4, r4, 1
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x14, 0x12
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x1d, 0x1b
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x19, 0x17
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x18, 0x16
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x15, 0x13
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	oris     r4, r4, 0x40
	stw      r4, 0x1e0(r31)
	stb      r0, 0x2b0(r31)
	stfs     f0, 0x2c8(r31)
	stw      r0, 0x2d0(r31)
	bl       resetUtilityTimer__Q34Game7Qurione3ObjFv
	lfs      f0, lbl_8051ACF8@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2c0(r31)
	bl       setupEffect__Q34Game7Qurione3ObjFv
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
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260440
 * Size:	000044
 */
void Qurione::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishGlowEffect__Q34Game7Qurione3ObjFv
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
 * Address:	80260484
 * Size:	000034
 */
void Qurione::Obj::doUpdate()
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
 * Address:	802604B8
 * Size:	00004C
 */
void Qurione::Obj::setFSM(Game::Qurione::FSM*)
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
 * Address:	80260504
 * Size:	000004
 */
void Qurione::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80260508
 * Size:	000020
 */
void Qurione::Obj::doDebugDraw(Graphics&)
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
 * Address:	80260528
 * Size:	00005C
 */
void Qurione::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f1, lbl_8051ACFC@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f2, lbl_8051ACF8@sda21(r2)
	lfs      f3, 0x190(r3)
	lfs      f0, lbl_8051AD00@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f1, lbl_8051AD04@sda21(r2)
	stfs     f3, 4(r4)
	lfs      f3, 0x194(r3)
	stfs     f3, 8(r4)
	stfs     f2, 0xc(r4)
	stfs     f0, 0x10(r4)
	stfs     f2, 0x14(r4)
	lfs      f0, 0x2c0(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r4)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x81c(r3)
	lfs      f0, 0x86c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260584
 * Size:	000088
 */
void Qurione::Obj::flyCollisionCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802605F4
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802605F4
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_802605F4
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802605F8

lbl_802605F4:
	li       r3, 0

lbl_802605F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026060C
 * Size:	000034
 */
void Qurione::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game7Qurione3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260640
 * Size:	000034
 */
void Qurione::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game7Qurione3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260674
 * Size:	000020
 */
void Qurione::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game7Qurione3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260694
 * Size:	000020
 */
void Qurione::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game7Qurione3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802606B4
 * Size:	000188
 */
void Qurione::Obj::setQurioneStartPos(float)
{
	/*
	stwu     r1, -0x40(r1)
	lfs      f0, lbl_8051ACF8@sda21(r2)
	lfs      f2, 0x18c(r3)
	stfs     f2, 0x2d4(r3)
	lwz      r4, 0xc0(r3)
	lfs      f3, 0x190(r3)
	lfs      f2, 0x81c(r4)
	fadds    f2, f3, f2
	stfs     f2, 0x2d8(r3)
	lfs      f2, 0x194(r3)
	stfs     f2, 0x2dc(r3)
	lfs      f5, 0x1fc(r3)
	fcmpo    cr0, f5, f0
	bge      lbl_80260718
	lfs      f0, lbl_8051AD08@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8026073C

lbl_80260718:
	lfs      f0, lbl_8051AD0C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8026073C:
	lfs      f6, 0x2c4(r3)
	fmr      f4, f5
	lfs      f0, lbl_8051ACF8@sda21(r2)
	fmuls    f7, f6, f2
	fcmpo    cr0, f5, f0
	bge      lbl_80260758
	fneg     f4, f5

lbl_80260758:
	lfs      f3, lbl_8051AD0C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AD10@sda21(r2)
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	addi     r5, r4, 4
	fsubs    f5, f5, f0
	lfs      f0, lbl_8051ACF8@sda21(r2)
	fctiwz   f2, f2
	fcmpo    cr0, f5, f0
	stfd     f2, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fmuls    f4, f6, f0
	bge      lbl_802607BC
	lfs      f0, lbl_8051AD08@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_802607D4

lbl_802607BC:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_802607D4:
	lfs      f0, lbl_8051ACF8@sda21(r2)
	fmr      f3, f5
	fmuls    f6, f1, f2
	fcmpo    cr0, f5, f0
	bge      lbl_802607EC
	fneg     f3, f5

lbl_802607EC:
	lfs      f2, lbl_8051AD0C@sda21(r2)
	lfs      f0, 0x2d4(r3)
	fmuls    f2, f3, f2
	fadds    f0, f0, f7
	fctiwz   f2, f2
	fadds    f0, f6, f0
	stfd     f2, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r5, r0
	stfs     f0, 0x2e0(r3)
	fmuls    f1, f1, f2
	lfs      f0, 0x2d8(r3)
	stfs     f0, 0x2e4(r3)
	lfs      f0, 0x2dc(r3)
	fadds    f0, f0, f4
	fadds    f0, f1, f0
	stfs     f0, 0x2e8(r3)
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026083C
 * Size:	00016C
 */
void Qurione::Obj::moveFaceDir()
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
	stw      r31, 0x2c(r1)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 8(r1)
	stfs     f31, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	addi     r4, r31, 0x18c
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	mr       r3, r31
	bl       addPitchRatio__Q34Game7Qurione3ObjFv
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051ACF8@sda21(r2)
	lwz      r4, 0xc0(r31)
	fcmpo    cr0, f1, f0
	lfs      f4, lbl_8051AD14@sda21(r2)
	lfs      f3, 0x86c(r4)
	bge      lbl_8026093C
	lfs      f0, lbl_8051AD08@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80260960

lbl_8026093C:
	lfs      f0, lbl_8051AD0C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80260960:
	lfs      f1, 0x81c(r4)
	lfs      f0, 0x190(r31)
	fmadds   f1, f3, f2, f1
	fadds    f1, f31, f1
	fsubs    f0, f1, f0
	fmuls    f0, f4, f0
	stfs     f0, 0x1cc(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802609A8
 * Size:	000038
 */
void Qurione::Obj::addPitchRatio()
{
	/*
	lwz      r5, 0xc0(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f3, 0x844(r5)
	lfs      f2, 0x54(r4)
	lfs      f1, 0x2c8(r3)
	lfs      f0, lbl_8051AD18@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x2c8(r3)
	lfs      f1, 0x2c8(r3)
	fcmpo    cr0, f1, f0
	blelr
	fsubs    f0, f1, f0
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802609E0
 * Size:	000088
 */
void Qurione::Obj::resetUtilityTimer()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80260A4C
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_80260A4C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051AD28@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051AD1C@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051AD20@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051AD00@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f0, f0, f1
	stfs     f0, 0x2cc(r31)
	b        lbl_80260A54

lbl_80260A4C:
	lfs      f0, lbl_8051ACF8@sda21(r2)
	stfs     f0, 0x2cc(r31)

lbl_80260A54:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260A68
 * Size:	00006C
 */
void Qurione::Obj::isAppear()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80260A94
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_80260A94
	li       r3, 1
	b        lbl_80260AC4

lbl_80260A94:
	lwz      r7, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80260AC0
	li       r3, 1
	b        lbl_80260AC4

lbl_80260AC0:
	li       r3, 0

lbl_80260AC4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260AD4
 * Size:	000030
 */
void Qurione::Obj::isFlyKill()
{
	/*
	lbz      r0, 0xd8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80260AF4
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x8bc(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_80260AFC

lbl_80260AF4:
	li       r3, 1
	blr

lbl_80260AFC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260B04
 * Size:	0000A4
 */
void Qurione::Obj::attachItem()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	addi     r4, r2, lbl_8051AD30@sda21
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	addi     r3, r1, 8
	mr       r31, r0
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r30)
	addi     r5, r1, 8
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x25
	stfs     f0, 8(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x14(r1)
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	stw      r3, 0x2ec(r30)
	lwz      r3, 0x2ec(r30)
	cmplwi   r3, 0
	beq      lbl_80260B90
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x2ec(r30)
	mr       r4, r31
	bl       startCapture__Q24Game8CreatureFP7Matrixf

lbl_80260B90:
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
 * Address:	80260BA8
 * Size:	00004C
 */
void Qurione::Obj::dropItem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	cmplwi   r3, 0
	beq      lbl_80260BD4
	bl       endCapture__Q24Game8CreatureFv
	li       r0, 0
	stw      r0, 0x2ec(r31)

lbl_80260BD4:
	mr       r3, r31
	li       r4, 0
	bl       setZukanVisible__Q24Game9EnemyBaseFb
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260BF4
 * Size:	00002C
 */
void Qurione::Obj::addQurioneScale()
{
	/*
	lfs      f2, 0x2c0(r3)
	lfd      f1, lbl_8051AD38@sda21(r2)
	lfs      f0, lbl_8051AD00@sda21(r2)
	fadd     f1, f2, f1
	frsp     f1, f1
	stfs     f1, 0x2c0(r3)
	lfs      f1, 0x2c0(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260C20
 * Size:	00002C
 */
void Qurione::Obj::subQurioneScale()
{
	/*
	lfs      f2, 0x2c0(r3)
	lfd      f1, lbl_8051AD38@sda21(r2)
	lfs      f0, lbl_8051ACF8@sda21(r2)
	fsub     f1, f2, f1
	frsp     f1, f1
	stfs     f1, 0x2c0(r3)
	lfs      f1, 0x2c0(r3)
	fcmpo    cr0, f1, f0
	bgelr
	stfs     f0, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260C4C
 * Size:	0001C0
 */
void Qurione::Obj::createEffect()
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
	beq      lbl_80260CE4
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
	lis      r4, __vt__Q23efx9TQuriGlow@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TQuriGlow@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1a3
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

lbl_80260CE4:
	stw      r3, 0x2f0(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80260D6C
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
	lis      r4, __vt__Q23efx8TQuriApp@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx8TQuriApp@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1a1
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

lbl_80260D6C:
	stw      r3, 0x2f4(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80260DF4
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
	lis      r4, __vt__Q23efx10TQuriDisap@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TQuriDisap@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1a2
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

lbl_80260DF4:
	stw      r3, 0x2f8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260E0C
 * Size:	000054
 */
void Qurione::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_80485760@ha
	addi     r4, r3, lbl_80485760@l
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x2f0(r31)
	stw      r3, 0x10(r4)
	lwz      r4, 0x2f4(r31)
	stw      r3, 0x10(r4)
	lwz      r4, 0x2f8(r31)
	stw      r3, 0x10(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260E60
 * Size:	0000A0
 */
void Qurione::Obj::createHitEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80485760@ha
	stw      r0, 0x34(r1)
	addi     r4, r4, lbl_80485760@l
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f0, 0xc(r3)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	li       r5, 0
	stw      r4, 8(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx8TQuriHit@ha
	li       r7, 0x1a4
	addi     r8, r4, __vt__Q23efx3Arg@l
	li       r6, 0x1a5
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TQuriHit@l
	addi     r3, r1, 8
	addi     r4, r1, 0x18
	stw      r8, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x24(r1)
	sth      r7, 0xc(r1)
	sth      r6, 0xe(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260F00
 * Size:	00004C
 */
void Qurione::Obj::startGlowEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lfs      f1, lbl_8051ACF8@sda21(r2)
	bl       setGlobalScale__Q23efx9TQuriGlowFf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260F4C
 * Size:	00002C
 */
void Qurione::Obj::setGlowEffectScale()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	lfs      f1, 0x2c0(r4)
	bl       setGlobalScale__Q23efx9TQuriGlowFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80260F78
 * Size:	000030
 */
void Qurione::Obj::finishGlowEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
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
 * Address:	80260FA8
 * Size:	000034
 */
void Qurione::Obj::createAppearEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
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
 * Address:	80260FDC
 * Size:	000034
 */
void Qurione::Obj::createDisppearEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
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
 * Address:	80261010
 * Size:	000064
 */
void Qurione::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
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
 * Address:	80261074
 * Size:	000064
 */
void Qurione::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
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
 * Address:	802610D8
 * Size:	00009C
 */
TQuriDisap::~TQuriDisap()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80261158
	lis      r3, __vt__Q23efx10TQuriDisap@ha
	addi     r3, r3, __vt__Q23efx10TQuriDisap@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80261148
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80261148
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80261148:
	extsh.   r0, r31
	ble      lbl_80261158
	mr       r3, r30
	bl       __dl__FPv

lbl_80261158:
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
 * Address:	80261174
 * Size:	00009C
 */
TQuriApp::~TQuriApp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802611F4
	lis      r3, __vt__Q23efx8TQuriApp@ha
	addi     r3, r3, __vt__Q23efx8TQuriApp@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802611E4
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802611E4
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802611E4:
	extsh.   r0, r31
	ble      lbl_802611F4
	mr       r3, r30
	bl       __dl__FPv

lbl_802611F4:
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
 * Address:	80261210
 * Size:	00009C
 */
TQuriGlow::~TQuriGlow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80261290
	lis      r3, __vt__Q23efx9TQuriGlow@ha
	addi     r3, r3, __vt__Q23efx9TQuriGlow@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80261280
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_80261280
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80261280:
	extsh.   r0, r31
	ble      lbl_80261290
	mr       r3, r30
	bl       __dl__FPv

lbl_80261290:
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
 * Address:	802612AC
 * Size:	000004
 */
void Qurione::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802612B0
 * Size:	000004
 */
void Qurione::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802612B4
 * Size:	000008
 */
u32 Qurione::Obj::getEnemyTypeID() { return 0x10; }

/*
 * --INFO--
 * Address:	802612BC
 * Size:	000014
 */
void EnemyBase::@764 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -764
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802612D0
 * Size:	000014
 */
void EnemyBase::@764 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -764
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802612E4
 * Size:	000014
 */
void EnemyBase::@764 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -764
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802612F8
 * Size:	000014
 */
void EnemyBase::@764 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -764
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8026130C
 * Size:	000014
 */
void EnemyBase::@764 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -764
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80261320
 * Size:	000014
 */
void EnemyBase::@764 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -764
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80261334
 * Size:	000008
 */
TQuriGlow::@4 @~TQuriGlow()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx9TQuriGlowFv
	*/
}

/*
 * --INFO--
 * Address:	8026133C
 * Size:	000008
 */
TQuriApp::@4 @~TQuriApp()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx8TQuriAppFv
	*/
}

/*
 * --INFO--
 * Address:	80261344
 * Size:	000008
 */
TQuriDisap::@4 @~TQuriDisap()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx10TQuriDisapFv
	*/
}
} // namespace efx

} // namespace efx
