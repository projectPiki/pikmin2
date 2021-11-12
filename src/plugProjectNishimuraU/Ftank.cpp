#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx15TTankFireYodare
    __vt__Q23efx15TTankFireYodare:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TTankFireYodareFv"
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
        .4byte __dt__Q23efx15TTankFireYodareFv
    .global __vt__Q23efx12TTankFireHit
    __vt__Q23efx12TTankFireHit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
        .4byte forceKill__Q23efx17TOneEmitterSimpleFv
        .4byte fade__Q23efx17TOneEmitterSimpleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx12TTankFireHitFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
        .4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
        .4byte __dt__Q23efx12TTankFireHitFv
    .global __vt__Q34Game5Ftank3Obj
    __vt__Q34Game5Ftank3Obj:
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
        .4byte __dt__Q34Game5Ftank3ObjFv
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
   changeMaterial__Q34Game5Ftank3ObjFv .4byte
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
        .4byte getEnemyTypeID__Q34Game5Ftank3ObjFv
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
        .4byte createEffect__Q34Game5Ftank3ObjFv
        .4byte setupEffect__Q34Game5Ftank3ObjFv
        .4byte startEffect__Q34Game5Ftank3ObjFv
        .4byte startYodare__Q34Game5Ftank3ObjFv
        .4byte finishEffect__Q34Game5Ftank3ObjFv
        .4byte effectDrawOn__Q34Game5Ftank3ObjFv
        .4byte effectDrawOff__Q34Game5Ftank3ObjFv
        .4byte interactCreature__Q34Game5Ftank3ObjFPQ24Game8Creature
        .4byte stopEffectRadius__Q34Game5Ftank3ObjFf
        .4byte createChargeSE__Q34Game5Ftank3ObjFv
        .4byte createDisChargeSE__Q34Game5Ftank3ObjFv
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
    .global lbl_8051BCF0
    lbl_8051BCF0:
        .4byte 0x447A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8029E484
 * Size:	0000A4
 */
Ftank::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8029E4C0
	addi     r0, r31, 0x30c
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x30c(r31)
	stw      r0, 0x310(r31)
	stw      r0, 0x314(r31)

lbl_8029E4C0:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game4Tank3ObjFv
	lis      r3, __vt__Q34Game5Ftank3Obj@ha
	addi     r0, r31, 0x30c
	addi     r5, r3, __vt__Q34Game5Ftank3Obj@l
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
 * Address:	8029E528
 * Size:	0001A4
 */
void Ftank::Obj::changeMaterial()
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
	b        lbl_8029E6A8

lbl_8029E670:
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

lbl_8029E6A8:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_8029E670
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029E6CC
 * Size:	000048
 */
void Ftank::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0xa0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8029E6FC
	li       r4, 0
	bl       __ct__Q23efx11TTankEffectFPA4_f
	mr       r0, r3

lbl_8029E6FC:
	stw      r0, 0x308(r31)
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
 * Address:	8029E714
 * Size:	0001FC
 */
TTankEffect::TTankEffect(float (*)[4])
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx5TBase@ha
	li       r6, 0x1b1
	stw      r0, 0x34(r1)
	addi     r0, r5, __vt__Q23efx5TBase@l
	li       r5, 0x1b0
	li       r7, 0x1b2
	stmw     r24, 0x10(r1)
	mr       r28, r3
	lis      r3, __vt__Q23efx9TTankFire@ha
	mr       r31, r4
	addi     r30, r28, 4
	stw      r0, 0(r28)
	addi     r0, r3, __vt__Q23efx9TTankFire@l
	mr       r3, r30
	stw      r0, 0(r28)
	bl       __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
	lis      r3, __vt__Q23efx12TTankFireABC@ha
	lis      r4, __vt__19JPAParticleCallBack@ha
	addi     r0, r3, __vt__Q23efx12TTankFireABC@l
	lis      r3, __vt__Q23efx26TParticleCallBack_TankFire@ha
	stw      r0, 0(r30)
	addi     r0, r4, __vt__19JPAParticleCallBack@l
	lis      r6, __vt__Q23efx5TBase@ha
	addi     r29, r30, 0x4c
	stw      r0, 0x40(r30)
	addi     r0, r3, __vt__Q23efx26TParticleCallBack_TankFire@l
	lis      r4, __vt__18JPAEmitterCallBack@ha
	lis      r3, __vt__Q23efx17TOneEmitterSimple@ha
	stw      r0, 0x40(r30)
	addi     r5, r3, __vt__Q23efx17TOneEmitterSimple@l
	lfs      f0, lbl_8051BCF0@sda21(r2)
	li       r8, 0
	addi     r7, r6, __vt__Q23efx5TBase@l
	addi     r6, r4, __vt__18JPAEmitterCallBack@l
	stfs     f0, 0x44(r30)
	addi     r4, r5, 0x14
	li       r3, 0x1b3
	li       r0, 0xa
	stw      r8, 0x48(r30)
	mr       r24, r29
	stw      r7, 0x4c(r30)
	stw      r6, 0x50(r30)
	stw      r5, 0x4c(r30)
	stw      r4, 0x50(r30)
	stw      r8, 0x54(r30)
	sth      r3, 0x58(r30)
	stw      r8, 0x60(r30)
	stw      r0, 0x64(r30)
	lwz      r26, 0x64(r30)
	mulli    r3, r26, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r26
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 0x10(r24)
	lis      r3, __vt__Q23efx12TTankFireHit@ha
	addi     r3, r3, __vt__Q23efx12TTankFireHit@l
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r3, 0(r29)
	addi     r0, r3, 0x14
	lis      r4, __vt__18JPAEmitterCallBack@ha
	lis      r3, __vt__Q23efx5TSync@ha
	stw      r0, 4(r29)
	addi     r26, r5, __vt__Q23efx5TBase@l
	addi     r30, r3, __vt__Q23efx5TSync@l
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	stw      r26, 0x6c(r28)
	addi     r27, r4, __vt__18JPAEmitterCallBack@l
	addi     r11, r3, __vt__Q23efx9TChaseMtx@l
	lis      r3, __vt__Q23efx12TTankFireIND@ha
	stw      r27, 0x70(r28)
	addi     r9, r3, __vt__Q23efx12TTankFireIND@l
	lis      r6, __vt__19JPAParticleCallBack@ha
	lis      r5, __vt__Q23efx26TParticleCallBack_TankFire@ha
	stw      r30, 0x6c(r28)
	addi     r25, r30, 0x14
	lis      r3, __vt__Q23efx15TTankFireYodare@ha
	li       r29, 0
	stw      r25, 0x70(r28)
	addi     r4, r3, __vt__Q23efx15TTankFireYodare@l
	li       r12, 0x2b2
	addi     r24, r11, 0x14
	stw      r29, 0x74(r28)
	li       r10, 0x1b4
	addi     r8, r9, 0x14
	addi     r7, r6, __vt__19JPAParticleCallBack@l
	sth      r12, 0x78(r28)
	addi     r6, r5, __vt__Q23efx26TParticleCallBack_TankFire@l
	lfs      f0, lbl_8051BCF0@sda21(r2)
	li       r5, 0x1b5
	stb      r29, 0x7a(r28)
	addi     r0, r4, 0x14
	mr       r3, r28
	stw      r11, 0x6c(r28)
	stw      r24, 0x70(r28)
	stw      r31, 0x7c(r28)
	sth      r10, 0x78(r28)
	stw      r9, 0x6c(r28)
	stw      r8, 0x70(r28)
	stw      r7, 0x80(r28)
	stw      r6, 0x80(r28)
	stfs     f0, 0x84(r28)
	stw      r29, 0x88(r28)
	stw      r26, 0x8c(r28)
	stw      r27, 0x90(r28)
	stw      r30, 0x8c(r28)
	stw      r25, 0x90(r28)
	stw      r29, 0x94(r28)
	sth      r12, 0x98(r28)
	stb      r29, 0x9a(r28)
	stw      r11, 0x8c(r28)
	stw      r24, 0x90(r28)
	stw      r31, 0x9c(r28)
	sth      r5, 0x98(r28)
	stw      r4, 0x8c(r28)
	stw      r0, 0x90(r28)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029E910
 * Size:	00009C
 */
TTankFireYodare::~TTankFireYodare()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8029E990
	lis      r3, __vt__Q23efx15TTankFireYodare@ha
	addi     r3, r3, __vt__Q23efx15TTankFireYodare@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029E980
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029E980
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8029E980:
	extsh.   r0, r31
	ble      lbl_8029E990
	mr       r3, r30
	bl       __dl__FPv

lbl_8029E990:
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
 * Address:	8029E9AC
 * Size:	0000C0
 */
TTankFireIND::~TTankFireIND()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8029EA50
	lis      r3, __vt__Q23efx12TTankFireIND@ha
	addic.   r0, r30, 0x14
	addi     r3, r3, __vt__Q23efx12TTankFireIND@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029EA00
	lis      r4, __vt__Q23efx26TParticleCallBack_TankFire@ha
	addi     r3, r30, 0x14
	addi     r0, r4, __vt__Q23efx26TParticleCallBack_TankFire@l
	li       r4, 0
	stw      r0, 0x14(r30)
	bl       __dt__19JPAParticleCallBackFv

lbl_8029EA00:
	cmplwi   r30, 0
	beq      lbl_8029EA40
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029EA40
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8029EA40:
	extsh.   r0, r31
	ble      lbl_8029EA50
	mr       r3, r30
	bl       __dl__FPv

lbl_8029EA50:
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
 * Address:	8029EA6C
 * Size:	000084
 */
TTankFireHit::~TTankFireHit()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8029EAD4
	lis      r3, __vt__Q23efx12TTankFireHit@ha
	addi     r3, r3, __vt__Q23efx12TTankFireHit@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029EAC4
	lis      r4, __vt__Q23efx17TOneEmitterSimple@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx17TOneEmitterSimple@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8029EAC4:
	extsh.   r0, r31
	ble      lbl_8029EAD4
	mr       r3, r30
	bl       __dl__FPv

lbl_8029EAD4:
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
 * Address:	8029EAF0
 * Size:	000054
 */
void Ftank::Obj::setupEffect()
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
	addi     r3, r31, 4
	bl       setMtxptr__Q23efx10TChaseMtx3FPA4_f
	stw      r30, 0x7c(r31)
	stw      r30, 0x9c(r31)
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
 * Address:	8029EB44
 * Size:	000034
 */
void Ftank::Obj::startEffect()
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
 * Address:	8029EB78
 * Size:	000054
 */
void Ftank::Obj::startYodare()
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
	addi     r3, r31, 0x8c
	li       r4, 0
	lwz      r12, 0x8c(r31)
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
 * Address:	8029EBCC
 * Size:	000050
 */
void TTankFire::fade()
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
	addi     r3, r31, 0x6c
	lwz      r12, 0x6c(r31)
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
 * Address:	8029EC1C
 * Size:	000048
 */
void TTankFireABC::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_8029EC50
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8029EC50:
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
 * Address:	8029EC64
 * Size:	000050
 */
void Ftank::Obj::finishEffect()
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
	addi     r3, r31, 0x8c
	lwz      r12, 0x8c(r31)
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
 * Address:	8029ECB4
 * Size:	000064
 */
void Ftank::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 4(r31)
	addi     r3, r31, 4
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x6c
	lwz      r12, 0x6c(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x8c
	lwz      r12, 0x8c(r31)
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
 * Address:	8029ED18
 * Size:	000040
 */
void TTankFireABC::endDemoDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	addi     r3, r31, 0x4c
	lwz      r12, 0x4c(r31)
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

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8029ED58
 * Size:	000064
 */
void Ftank::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 4(r31)
	addi     r3, r31, 4
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x6c
	lwz      r12, 0x6c(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x8c
	lwz      r12, 0x8c(r31)
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
 * Address:	8029EDBC
 * Size:	000040
 */
void TTankFireABC::startDemoDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	addi     r3, r31, 0x4c
	lwz      r12, 0x4c(r31)
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

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8029EDFC
 * Size:	000060
 */
void Ftank::Obj::interactCreature(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q24Game11Interaction@ha
	mr       r8, r4
	stw      r0, 0x24(r1)
	lis      r5, __vt__Q24Game12InteractFire@ha
	addi     r6, r6, __vt__Q24Game11Interaction@l
	addi     r4, r1, 8
	lwz      r7, 0xc0(r3)
	addi     r0, r5, __vt__Q24Game12InteractFire@l
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
 * Address:	8029EE5C
 * Size:	000010
 */
void Ftank::Obj::stopEffectRadius(float)
{
	/*
	lwz      r3, 0x308(r3)
	stfs     f1, 0x48(r3)
	stfs     f1, 0x84(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029EE6C
 * Size:	000044
 */
void Ftank::Obj::createChargeSE()
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
	li       r4, 0x583d
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
 * Address:	8029EEB0
 * Size:	000044
 */
void Ftank::Obj::createDisChargeSE()
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
	li       r4, 0x503c
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
 * Address:	8029EEF4
 * Size:	000008
 */
u32 Ftank::Obj::getEnemyTypeID() { return 0x18; }

namespace efx {

	/*
	 * --INFO--
	 * Address:	8029EEFC
	 * Size:	000008
	 */
	TTankFireHit::@4 @~TTankFireHit()
	{
		/*
	addi     r3, r3, -4
	b        __dt__Q23efx12TTankFireHitFv
		*/
	}

	/*
	 * --INFO--
	 * Address:	8029EF04
	 * Size:	000008
	 */
	TTankFireYodare::@4 @~TTankFireYodare()
	{
		/*
	addi     r3, r3, -4
	b        __dt__Q23efx15TTankFireYodareFv
		*/
	}
} // namespace efx

} // namespace efx
