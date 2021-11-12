#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "__vt__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>"
    "__vt__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx10TChaseMtx4
    __vt__Q23efx10TChaseMtx4:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx14TTankWatYodare
    __vt__Q23efx14TTankWatYodare:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14TTankWatYodareFv"
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
        .4byte __dt__Q23efx14TTankWatYodareFv
    .global __vt__Q23efx11TTankWatHit
    __vt__Q23efx11TTankWatHit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
        .4byte forceKill__Q23efx17TOneEmitterSimpleFv
        .4byte fade__Q23efx17TOneEmitterSimpleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TTankWatHitFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
        .4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
        .4byte __dt__Q23efx11TTankWatHitFv
    .global __vt__Q34Game5Wtank3Obj
    __vt__Q34Game5Wtank3Obj:
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
        .4byte onInit__Q34Game4Tank3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game4Tank3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game4Tank3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game4Tank3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game5Wtank3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game4Tank3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Tank3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Tank3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q34Game5Wtank3ObjFv .4byte
   "getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game4Tank3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q34Game4Tank3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game4Tank3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game5Wtank3ObjFv
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
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game4Tank3ObjFv .4byte
   doFinishStoneState__Q34Game4Tank3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q34Game4Tank3ObjFv .4byte
   doFinishEarthquakeFitState__Q34Game4Tank3ObjFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game4Tank3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game4Tank3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game4Tank3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game4Tank3ObjFv .4byte doStartMovie__Q34Game4Tank3ObjFv
        .4byte doEndMovie__Q34Game4Tank3ObjFv
        .4byte setFSM__Q34Game4Tank3ObjFPQ34Game4Tank3FSM
        .4byte createEffect__Q34Game5Wtank3ObjFv
        .4byte setupEffect__Q34Game5Wtank3ObjFv
        .4byte startEffect__Q34Game5Wtank3ObjFv
        .4byte startYodare__Q34Game5Wtank3ObjFv
        .4byte finishEffect__Q34Game5Wtank3ObjFv
        .4byte effectDrawOn__Q34Game5Wtank3ObjFv
        .4byte effectDrawOff__Q34Game5Wtank3ObjFv
        .4byte interactCreature__Q34Game5Wtank3ObjFPQ24Game8Creature
        .4byte stopEffectRadius__Q34Game5Wtank3ObjFf
        .4byte createChargeSE__Q34Game5Wtank3ObjFv
        .4byte createDisChargeSE__Q34Game5Wtank3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@780@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@780@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B520
    lbl_8051B520:
        .4byte 0x447A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8027C80C
 * Size:	0000A4
 */
Wtank::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8027C848
	addi     r0, r31, 0x30c
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x30c(r31)
	stw      r0, 0x310(r31)
	stw      r0, 0x314(r31)

lbl_8027C848:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game4Tank3ObjFv
	lis      r3, __vt__Q34Game5Wtank3Obj@ha
	addi     r0, r31, 0x30c
	addi     r5, r3, __vt__Q34Game5Wtank3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x328
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
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
 * Address:	8027C8B0
 * Size:	0001A4
 */
void Wtank::Obj::changeMaterial()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r3, 0x180(r3)
	lwz      r4, 0x174(r27)
	lwz      r12, 0(r3)
	lwz      r29, 8(r4)
	lwz      r12, 0xe0(r12)
	lwz      r30, 4(r29)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x174(r27)
	lis      r3, j3dSys@ha
	lbz      r0, 0(r31)
	addi     r27, r3, j3dSys@l
	lwz      r3, 8(r4)
	li       r28, 0
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r31)
	stb      r0, 1(r3)
	lhz      r0, 2(r31)
	sth      r0, 2(r3)
	lhz      r0, 4(r31)
	sth      r0, 4(r3)
	lbz      r0, 6(r31)
	stb      r0, 6(r3)
	lbz      r0, 7(r31)
	stb      r0, 7(r3)
	lbz      r0, 8(r31)
	stb      r0, 8(r3)
	lbz      r0, 9(r31)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r31)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r31)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r31)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r31)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r31)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r31)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r31)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r31)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r31)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r31)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r31)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r31)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r31)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r31)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0x1c(r3)
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0xc(r3)
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	b        lbl_8027CA30

lbl_8027C9F8:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r27)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8027CA30:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_8027C9F8
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027CA54
 * Size:	00019C
 */
void Wtank::Obj::createEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 0x90
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8027CBCC
	li       r4, 0
	li       r5, 0x1b6
	li       r6, 0x1b7
	li       r7, 0x1b8
	li       r8, 0x1b9
	bl       __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs
	lis      r3, __vt__Q23efx8TTankWat@ha
	lis      r6, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx8TTankWat@l
	lis      r4, __vt__19JPAParticleCallBack@ha
	stw      r0, 0(r31)
	addi     r0, r4, __vt__19JPAParticleCallBack@l
	lis      r3, __vt__Q23efx26TParticleCallBack_TankFire@ha
	lfs      f0, lbl_8051B520@sda21(r2)
	stw      r0, 0x54(r31)
	addi     r0, r3, __vt__Q23efx26TParticleCallBack_TankFire@l
	lis      r3, __vt__Q23efx17TOneEmitterSimple@ha
	li       r8, 0
	stw      r0, 0x54(r31)
	addi     r5, r3, __vt__Q23efx17TOneEmitterSimple@l
	addi     r7, r6, __vt__Q23efx5TBase@l
	lis      r4, __vt__18JPAEmitterCallBack@ha
	stfs     f0, 0x58(r31)
	addi     r6, r4, __vt__18JPAEmitterCallBack@l
	addi     r4, r5, 0x14
	li       r3, 0x1ba
	stw      r8, 0x5c(r31)
	li       r0, 0xa
	addi     r29, r31, 0x60
	stw      r7, 0x60(r31)
	stw      r6, 0x64(r31)
	stw      r5, 0x60(r31)
	stw      r4, 0x64(r31)
	stw      r8, 0x68(r31)
	sth      r3, 0x6c(r31)
	stw      r8, 0x74(r31)
	stw      r0, 0x78(r31)
	lwz      r28, 0x78(r31)
	mulli    r3, r28, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r28
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	lis      r4, __vt__Q23efx11TTankWatHit@ha
	stw      r3, 0x10(r29)
	addi     r3, r4, __vt__Q23efx11TTankWatHit@l
	lis      r4, __vt__Q23efx5TBase@ha
	stw      r3, 0(r29)
	addi     r0, r3, 0x14
	lis      r5, __vt__18JPAEmitterCallBack@ha
	lis      r3, __vt__Q23efx5TSync@ha
	stw      r0, 4(r29)
	addi     r0, r4, __vt__Q23efx5TBase@l
	addi     r4, r3, __vt__Q23efx5TSync@l
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 0x7c(r31)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r6, r3, __vt__Q23efx9TChaseMtx@l
	lis      r3, __vt__Q23efx14TTankWatYodare@ha
	stw      r0, 0x80(r31)
	addi     r3, r3, __vt__Q23efx14TTankWatYodare@l
	addi     r0, r4, 0x14
	li       r8, 0
	stw      r4, 0x7c(r31)
	li       r7, 0x2b2
	addi     r5, r6, 0x14
	li       r4, 0x1bb
	stw      r0, 0x80(r31)
	addi     r0, r3, 0x14
	stw      r8, 0x84(r31)
	sth      r7, 0x88(r31)
	stb      r8, 0x8a(r31)
	stw      r6, 0x7c(r31)
	stw      r5, 0x80(r31)
	stw      r8, 0x8c(r31)
	sth      r4, 0x88(r31)
	stw      r3, 0x7c(r31)
	stw      r0, 0x80(r31)

lbl_8027CBCC:
	stw      r31, 0x308(r30)
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

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8027CBF0
 * Size:	00009C
 */
TTankWatYodare::~TTankWatYodare()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027CC70
	lis      r3, __vt__Q23efx14TTankWatYodare@ha
	addi     r3, r3, __vt__Q23efx14TTankWatYodare@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027CC60
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027CC60
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027CC60:
	extsh.   r0, r31
	ble      lbl_8027CC70
	mr       r3, r30
	bl       __dl__FPv

lbl_8027CC70:
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
 * Address:	8027CC8C
 * Size:	000084
 */
TTankWatHit::~TTankWatHit()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027CCF4
	lis      r3, __vt__Q23efx11TTankWatHit@ha
	addi     r3, r3, __vt__Q23efx11TTankWatHit@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027CCE4
	lis      r4, __vt__Q23efx17TOneEmitterSimple@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx17TOneEmitterSimple@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027CCE4:
	extsh.   r0, r31
	ble      lbl_8027CCF4
	mr       r3, r30
	bl       __dl__FPv

lbl_8027CCF4:
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
 * Address:	8027CD10
 * Size:	00006C
 */
TOneEmitterSimple::~TOneEmitterSimple()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027CD60
	lis      r4, __vt__Q23efx17TOneEmitterSimple@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx17TOneEmitterSimple@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv
	extsh.   r0, r31
	ble      lbl_8027CD60
	mr       r3, r30
	bl       __dl__FPv

lbl_8027CD60:
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
 * Address:	8027CD7C
 * Size:	000060
 */
TParticleCallBack_TankFire::~TParticleCallBack_TankFire()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027CDC0
	lis      r5, __vt__Q23efx26TParticleCallBack_TankFire@ha
	li       r4, 0
	addi     r0, r5, __vt__Q23efx26TParticleCallBack_TankFire@l
	stw      r0, 0(r30)
	bl       __dt__19JPAParticleCallBackFv
	extsh.   r0, r31
	ble      lbl_8027CDC0
	mr       r3, r30
	bl       __dl__FPv

lbl_8027CDC0:
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
 * Address:	8027CDDC
 * Size:	000050
 */
void Wtank::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2c0(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r31, 0x308(r30)
	mr       r30, r3
	mr       r4, r30
	mr       r3, r31
	bl       setMtxptr__Q23efx10TChaseMtx4FPA4_f
	stw      r30, 0x8c(r31)
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
 * Address:	8027CE2C
 * Size:	000034
 */
void Wtank::Obj::startEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x308(r3)
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
 * Address:	8027CE60
 * Size:	000054
 */
void Wtank::Obj::startYodare()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x7c
	li       r4, 0
	lwz      r12, 0x7c(r31)
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8027CEB4
 * Size:	000048
 */
void TTankWat::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	lwz      r3, 0x5c(r31)
	cmplwi   r3, 0
	beq      lbl_8027CEE8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8027CEE8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027CEFC
 * Size:	000044
 */
void TOneEmitterSimple::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_8027CF2C
	lwz      r3, particleMgr@sda21(r13)
	bl       fade__11ParticleMgrFP14JPABaseEmitter
	li       r0, 0
	stw      r0, 8(r31)

lbl_8027CF2C:
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
 * Address:	8027CF40
 * Size:	000050
 */
void Wtank::Obj::finishEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x7c
	lwz      r12, 0x7c(r31)
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
 * Address:	8027CF90
 * Size:	000050
 */
void Wtank::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x7c
	lwz      r12, 0x7c(r31)
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8027CFE0
 * Size:	000040
 */
void TTankWat::endDemoDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	addi     r3, r31, 0x60
	lwz      r12, 0x60(r31)
	lwz      r12, 0x38(r12)
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
 * Address:	8027D020
 * Size:	00001C
 */
void TOneEmitterSimple::endDemoDrawOn()
{
	/*
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beqlr
	lwz      r0, 0xf4(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xf4(r3)
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8027D03C
 * Size:	000050
 */
void Wtank::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x7c
	lwz      r12, 0x7c(r31)
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8027D08C
 * Size:	000040
 */
void TTankWat::startDemoDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	addi     r3, r31, 0x60
	lwz      r12, 0x60(r31)
	lwz      r12, 0x34(r12)
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
 * Address:	8027D0CC
 * Size:	00001C
 */
void TOneEmitterSimple::startDemoDrawOff()
{
	/*
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beqlr
	lwz      r0, 0xf4(r3)
	ori      r0, r0, 4
	stw      r0, 0xf4(r3)
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8027D0E8
 * Size:	000060
 */
void Wtank::Obj::interactCreature(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q24Game11Interaction@ha
	mr       r8, r4
	stw      r0, 0x24(r1)
	lis      r5, __vt__Q24Game14InteractBubble@ha
	addi     r6, r6, __vt__Q24Game11Interaction@l
	addi     r4, r1, 8
	lwz      r7, 0xc0(r3)
	addi     r0, r5, __vt__Q24Game14InteractBubble@l
	lfs      f0, 0x604(r7)
	stw      r6, 8(r1)
	stw      r3, 0xc(r1)
	mr       r3, r8
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r8)
	lwz      r12, 0x1a4(r12)
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
 * Address:	8027D148
 * Size:	00000C
 */
void Wtank::Obj::stopEffectRadius(float)
{
	/*
	lwz      r3, 0x308(r3)
	stfs     f1, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027D154
 * Size:	000044
 */
void Wtank::Obj::createChargeSE()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5963
	li       r5, 0
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
 * Address:	8027D198
 * Size:	000044
 */
void Wtank::Obj::createDisChargeSE()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50aa
	li       r5, 0
	lwz      r12, 0xc(r12)
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
 * Address:	8027D1DC
 * Size:	000044
 */
void TOneEmitterSimple::forceKill()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_8027D20C
	lwz      r3, particleMgr@sda21(r13)
	bl       forceKill__11ParticleMgrFP14JPABaseEmitter
	li       r0, 0
	stw      r0, 8(r31)

lbl_8027D20C:
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
 * Address:	8027D220
 * Size:	000008
 */
u32 Wtank::Obj::getEnemyTypeID() { return 0x19; }

/*
 * --INFO--
 * Address:	8027D228
 * Size:	000014
 */
void EnemyBase::@780 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -780
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8027D23C
 * Size:	000014
 */
void EnemyBase::@780 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -780
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8027D250
 * Size:	000014
 */
void EnemyBase::@780 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -780
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8027D264
 * Size:	000014
 */
void EnemyBase::@780 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -780
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8027D278
 * Size:	000014
 */
void EnemyBase::@780 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -780
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8027D28C
 * Size:	000014
 */
void EnemyBase::@780 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -780
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8027D2A0
 * Size:	000008
 */
void TOneEmitterSimple::@4 @executeAfter(JPABaseEmitter*)
{
	/*
	addi     r3, r3, -4
	b        executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
	*/
}

/*
 * --INFO--
 * Address:	8027D2A8
 * Size:	000008
 */
TTankWatHit::@4 @~TTankWatHit()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx11TTankWatHitFv
	*/
}

/*
 * --INFO--
 * Address:	8027D2B0
 * Size:	000008
 */
TTankWatYodare::@4 @~TTankWatYodare()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx14TTankWatYodareFv
	*/
}
} // namespace efx
