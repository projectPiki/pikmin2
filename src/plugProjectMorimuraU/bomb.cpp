#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx14TBombrockLight
    __vt__Q23efx14TBombrockLight:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14TBombrockLightFv"
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
        .4byte __dt__Q23efx14TBombrockLightFv
    .global __vt__Q34Game4Bomb3Obj
    __vt__Q34Game4Bomb3Obj:
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
        .4byte onInit__Q34Game4Bomb3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game4Bomb3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q34Game4Bomb3ObjFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game4Bomb3ObjFf
        .4byte doDirectDraw__Q34Game4Bomb3ObjFR8Graphics
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
        .4byte onStartCapture__Q34Game4Bomb3ObjFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q34Game4Bomb3ObjFv
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
        .4byte isUnderground__Q34Game4Bomb3ObjFv
        .4byte isLivingThing__Q34Game4Bomb3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q34Game4Bomb3ObjFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game4Bomb3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game4Bomb3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game4Bomb3ObjFv
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
        .4byte __dt__Q34Game4Bomb3ObjFv
        .4byte "birth__Q34Game4Bomb3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game4Bomb3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Bomb3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q34Game4Bomb3ObjFv .4byte
   doAnimationCullingOn__Q34Game4Bomb3ObjFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Bomb3ObjFR8Graphics .4byte
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
        .4byte setParameters__Q34Game4Bomb3ObjFv
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
        .4byte getEnemyTypeID__Q34Game4Bomb3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game4Bomb3ObjFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game4Bomb3ObjFv .4byte
   doFinishStoneState__Q34Game4Bomb3ObjFv .4byte
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
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game4Bomb3ObjFv .4byte doEndMovie__Q34Game4Bomb3ObjFv .4byte
   setFSM__Q34Game4Bomb3ObjFPQ34Game4Bomb3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@728@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@728@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E330
    lbl_8051E330:
        .4byte 0x00000000
    .global lbl_8051E334
    lbl_8051E334:
        .4byte 0x41A00000
    .global lbl_8051E338
    lbl_8051E338:
        .4byte 0x636F7265
        .4byte 0x31000000
    .global lbl_8051E340
    lbl_8051E340:
        .4byte 0x3F666666
    .global lbl_8051E344
    lbl_8051E344:
        .4byte 0x40800000
    .global lbl_8051E348
    lbl_8051E348:
        .4byte 0x43A2F983
    .global lbl_8051E34C
    lbl_8051E34C:
        .4byte 0xC3A2F983
    .global lbl_8051E350
    lbl_8051E350:
        .4byte 0x40000000
    .global lbl_8051E354
    lbl_8051E354:
        .float 1.0
    .global lbl_8051E358
    lbl_8051E358:
        .4byte 0x41F00000
    .global lbl_8051E35C
    lbl_8051E35C:
        .4byte 0x41200000
    .global lbl_8051E360
    lbl_8051E360:
        .4byte 0x43300000
    .global lbl_8051E364
    lbl_8051E364:
        .4byte 0x80000000
    .global lbl_8051E368
    lbl_8051E368:
        .float 0.5
    .global lbl_8051E36C
    lbl_8051E36C:
        .byte 0x3F
    .global lbl_8051E36D
    lbl_8051E36D:
        .byte 0xA6
        .2byte 0x6666
*/

namespace Game {

/*
 * --INFO--
 * Address:	8034A21C
 * Size:	000020
 */
void Bomb::Obj::setParameters(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034A23C
 * Size:	0000EC
 */
void Bomb::Obj::onStartCapture(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2d0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r31)
	cmplwi   r5, 0
	beq      lbl_8034A314
	lfs      f2, 0x2c(r5)
	mr       r3, r31
	lfs      f1, 0x1c(r5)
	addi     r4, r1, 8
	lfs      f0, 0xc(r5)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051E330@sda21(r2)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8034A2FC
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8034A2FC
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	b        lbl_8034A308

lbl_8034A2FC:
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)

lbl_8034A308:
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)

lbl_8034A314:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034A328
 * Size:	000048
 */
void Bomb::Obj::onEndCapture(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       constraintOff__Q24Game9EnemyBaseFv
	lwz      r4, 0x1e0(r31)
	li       r3, 1
	li       r0, 0
	rlwinm   r4, r4, 0, 0, 0x1e
	stw      r4, 0x1e0(r31)
	stb      r3, 0x2bc(r31)
	stw      r0, 0xb8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8034A370
 * Size:	000020
 */
void birth__Q34Game4Bomb3ObjFR10Vector3f f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8034A390
 * Size:	000168
 */
void Bomb::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r31)
	li       r0, 0
	mr       r4, r31
	li       r5, 0
	rlwinm   r3, r3, 0, 0x19, 0x17
	li       r6, 0
	stw      r3, 0x1e0(r31)
	lwz      r3, 0x1e0(r31)
	rlwinm   r3, r3, 0, 0x1d, 0x1b
	stw      r3, 0x1e0(r31)
	lwz      r3, 0x1e0(r31)
	rlwinm   r3, r3, 0, 0x18, 0x16
	stw      r3, 0x1e0(r31)
	stb      r0, 0x2bc(r31)
	stb      r0, 0x2bd(r31)
	stb      r0, 0x2c8(r31)
	stw      r0, 0x2c0(r31)
	stw      r0, 0x2c4(r31)
	stw      r0, 0x2cc(r31)
	lwz      r3, 0x2d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034A46C
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8034A46C
	lfs      f1, 0x18c(r31)
	addi     r4, r1, 8
	lfs      f0, lbl_8051E334@sda21(r2)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x190(r31)

lbl_8034A46C:
	lwz      r4, 0x188(r31)
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x24(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051E338@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x2d4(r31)
	stw      r3, 0x10(r4)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034A4F8
 * Size:	0001DC
 */
Bomb::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8034A538
	addi     r0, r31, 0x2d8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2d8(r31)
	stw      r0, 0x2dc(r31)
	stw      r0, 0x2e0(r31)

lbl_8034A538:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game4Bomb3Obj@ha
	addi     r4, r31, 0x2d8
	addi     r3, r3, __vt__Q34Game4Bomb3Obj@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r5, r3, 0x1b0
	addi     r6, r3, 0x2fc
	li       r3, 0x2c
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r4, r5, r4
	stw      r4, 0xc(r5)
	stb      r0, 0x2bc(r31)
	stb      r0, 0x2bd(r31)
	stw      r0, 0x2c0(r31)
	stw      r0, 0x2c4(r31)
	stb      r0, 0x2c8(r31)
	stb      r0, 0x2c9(r31)
	stw      r0, 0x2d0(r31)
	stw      r0, 0x2d4(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8034A5E8
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game4Bomb14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game4Bomb14ProperAnimator@l
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

lbl_8034A5E8:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8034A61C
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game4Bomb3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game4Bomb3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8034A61C:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8034A6B4
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
	lis      r4, __vt__Q23efx14TBombrockLight@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TBombrockLight@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x260
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

lbl_8034A6B4:
	stw      r3, 0x2d4(r31)
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
 * Address:	8034A6D4
 * Size:	00004C
 */
void Bomb::Obj::setFSM(Game::Bomb::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2d0(r3)
	mr       r4, r31
	lwz      r3, 0x2d0(r3)
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
 * Address:	8034A720
 * Size:	0000D4
 */
void Bomb::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lbz      r0, 0x2c9(r3)
	cmplwi   r0, 0
	beq      lbl_8034A798
	lfs      f1, 0x11c(r4)
	lfs      f2, lbl_8051E340@sda21(r2)
	lfs      f0, lbl_8051E330@sda21(r2)
	fmuls    f1, f1, f2
	stfs     f1, 0x11c(r4)
	lfs      f1, 0x120(r4)
	fmuls    f1, f1, f2
	stfs     f1, 0x120(r4)
	lfs      f1, 0x124(r4)
	fmuls    f1, f1, f2
	stfs     f1, 0x124(r4)
	lfs      f1, 0x1c8(r4)
	fmuls    f1, f1, f2
	stfs     f1, 0x1c8(r4)
	lfs      f1, 0x1cc(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_8034A788
	fmuls    f0, f1, f2
	stfs     f0, 0x1cc(r4)

lbl_8034A788:
	lfs      f1, 0x1d0(r4)
	lfs      f0, lbl_8051E340@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x1d0(r4)

lbl_8034A798:
	lwz      r0, 0xc8(r4)
	cmplwi   r0, 0
	beq      lbl_8034A7B8
	lfs      f0, lbl_8051E330@sda21(r2)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	b        lbl_8034A7D0

lbl_8034A7B8:
	lfs      f0, 0x1c8(r4)
	stfs     f0, 0x1d4(r4)
	lfs      f0, 0x1cc(r4)
	stfs     f0, 0x1d8(r4)
	lfs      f0, 0x1d0(r4)
	stfs     f0, 0x1dc(r4)

lbl_8034A7D0:
	lwz      r3, 0x2d0(r4)
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
 * Address:	8034A7F4
 * Size:	000004
 */
void Bomb::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034A7F8
 * Size:	000004
 */
void Bomb::Obj::doDebugDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034A7FC
 * Size:	00002C
 */
void Bomb::Obj::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x2bd(r3)
	cmplwi   r0, 0
	bne      lbl_8034A818
	bl       doEntry__Q24Game9EnemyBaseFv

lbl_8034A818:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034A828
 * Size:	0001F4
 */
void Bomb::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r31, r3
	li       r0, 0
	lwz      r4, 0x188(r3)
	stb      r0, 0x24(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb8(r31)
	li       r30, 1
	lfs      f29, 0x164(r31)
	cmplwi   r3, 0
	lfs      f30, 0x154(r31)
	lfs      f31, 0x144(r31)
	beq      lbl_8034A8C4
	lfs      f0, 0xc(r3)
	lfs      f1, 0x2c(r3)
	fcmpu    cr0, f31, f0
	lfs      f0, 0x1c(r3)
	bne      lbl_8034A8B4
	fcmpu    cr0, f30, f0
	bne      lbl_8034A8B4
	fcmpu    cr0, f29, f1
	beq      lbl_8034A920

lbl_8034A8B4:
	addi     r4, r31, 0x138
	li       r30, 1
	bl       PSMTXCopy
	b        lbl_8034A920

lbl_8034A8C4:
	mr       r3, r31
	li       r30, 0
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034A908
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8034A908
	lfs      f0, 0x18c(r31)
	fcmpu    cr0, f0, f31
	bne      lbl_8034A908
	lfs      f0, 0x190(r31)
	fcmpu    cr0, f0, f30
	bne      lbl_8034A908
	lfs      f0, 0x194(r31)
	fcmpu    cr0, f0, f29
	beq      lbl_8034A920

lbl_8034A908:
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	li       r30, 1
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_8034A920:
	clrlwi.  r0, r30, 0x18
	bne      lbl_8034A938
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034A96C

lbl_8034A938:
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv

lbl_8034A96C:
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034A9EC
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034A9EC
	lbz      r0, 0x2c8(r31)
	cmplwi   r0, 0
	bne      lbl_8034A9EC
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051E344@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8034A9EC
	li       r0, 1
	lis      r3, __vt__Q23efx3Arg@ha
	stb      r0, 0x2c8(r31)
	addi     r0, r3, __vt__Q23efx3Arg@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x2d4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8034A9EC:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034AA1C
 * Size:	00004C
 */
void Bomb::Obj::doAnimationCullingOn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       isAnimStart__Q34Game4Bomb3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034AA4C
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	b        lbl_8034AA54

lbl_8034AA4C:
	mr       r3, r31
	bl       doAnimationCullingOn__Q24Game9EnemyBaseFv

lbl_8034AA54:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034AA68
 * Size:	000134
 */
void Bomb::Obj::doSimulation(float)
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
	beq      lbl_8034AB44
	lfs      f4, 0x1fc(r31)
	lfs      f0, lbl_8051E330@sda21(r2)
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8034AAAC
	fneg     f1, f4

lbl_8034AAAC:
	lfs      f2, lbl_8051E348@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E330@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f3, 4(r3)
	bge      lbl_8034AB04
	lfs      f0, lbl_8051E34C@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8034AB1C

lbl_8034AB04:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8034AB1C:
	lfs      f0, lbl_8051E330@sda21(r2)
	mr       r3, r31
	stfs     f1, 8(r1)
	addi     r4, r1, 8
	stfs     f0, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "updateStick__Q24Game8CreatureFR10Vector3<f>"
	mr       r3, r31
	bl       updateCell__Q24Game8CreatureFv
	b        lbl_8034AB80

lbl_8034AB44:
	lwz      r4, 0xb8(r31)
	cmplwi   r4, 0
	beq      lbl_8034AB74
	lfs      f2, 0x2c(r4)
	mr       r3, r31
	lfs      f1, 0x1c(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x18c(r31)
	stfs     f1, 0x190(r31)
	stfs     f2, 0x194(r31)
	bl       updateSpheres__Q24Game9EnemyBaseFv
	b        lbl_8034AB80

lbl_8034AB74:
	fmr      f1, f31
	mr       r3, r31
	bl       doSimulation__Q24Game9EnemyBaseFf

lbl_8034AB80:
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
 * Address:	8034AB9C
 * Size:	000050
 */
void Bomb::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f5, lbl_8051E350@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f3, lbl_8051E330@sda21(r2)
	lfs      f0, 0x190(r3)
	lfs      f2, lbl_8051E354@sda21(r2)
	stfs     f0, 4(r4)
	lfs      f1, lbl_8051E358@sda21(r2)
	lfs      f4, 0x194(r3)
	lfs      f0, lbl_8051E35C@sda21(r2)
	stfs     f4, 8(r4)
	lfs      f4, 0x190(r3)
	fadds    f4, f5, f4
	stfs     f4, 4(r4)
	stfs     f3, 0xc(r4)
	stfs     f2, 0x10(r4)
	stfs     f3, 0x14(r4)
	stfs     f1, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034ABEC
 * Size:	000048
 */
void Bomb::Obj::needShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034AC14
	li       r3, 0
	b        lbl_8034AC20

lbl_8034AC14:
	lwz      r0, 0xb8(r31)
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_8034AC20:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034AC34
 * Size:	000080
 */
void Bomb::Obj::doFinishStoneState(void)
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
	cmpwi    r3, 0
	bne      lbl_8034AC84
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051E330@sda21(r2)
	fcmpu    cr0, f0, f1
	bne      lbl_8034AC84
	lbz      r0, 0x2bc(r31)
	cmplwi   r0, 0
	bne      lbl_8034AC84
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv

lbl_8034AC84:
	lwz      r0, 0x1e0(r31)
	lfs      f0, lbl_8051E330@sda21(r2)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034ACB4
 * Size:	000048
 */
void Bomb::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r3, 0x2d4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x2c8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034ACFC
 * Size:	000084
 */
void Bomb::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2cc(r3)
	cmplwi   r3, 0
	beq      lbl_8034AD48
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x5d
	bne      lbl_8034AD48
	lwz      r3, 0x2cc(r30)
	li       r0, 0
	stw      r0, 0x230(r3)

lbl_8034AD48:
	lwz      r3, 0x2d4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
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
 * Address:	8034AD80
 * Size:	000030
 */
void Bomb::Obj::doStartMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
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
 * Address:	8034ADB0
 * Size:	000030
 */
void Bomb::Obj::doEndMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
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
 * Address:	8034ADE0
 * Size:	000074
 */
void Bomb::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x2bc(r3)
	cmplwi   r0, 0
	beq      lbl_8034AE04
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_8034AE40

lbl_8034AE04:
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8034AE38
	lwz      r4, 0x2c4(r3)
	addi     r0, r4, 1
	stw      r0, 0x2c4(r3)
	lwz      r0, 0x2c4(r3)
	cmpwi    r0, 4
	ble      lbl_8034AE30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8034AE30:
	li       r3, 1
	b        lbl_8034AE44

lbl_8034AE38:
	lfs      f1, lbl_8051E330@sda21(r2)
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart

lbl_8034AE40:
	li       r3, 0

lbl_8034AE44:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8034AE54
 * Size:	000160
 */
void bombCallBack__Q34Game4Bomb3ObjFPQ24Game8CreatureR10Vector3f f(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	bne      lbl_8034AF98
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8034AF98
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034AF98
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x24
	bne      lbl_8034AF68
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034AF88
	lwz      r0, 0x2c0(r30)
	cmpwi    r0, 0
	bne      lbl_8034AF88
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	lis      r0, 0x4330
	lfs      f0, 0x194(r30)
	lwz      r3, 0xc0(r30)
	fsubs    f2, f1, f0
	lfs      f1, 8(r1)
	lfs      f0, 0x18c(r30)
	lfs      f4, 0x5b4(r3)
	fsubs    f1, f1, f0
	lwz      r3, 0x894(r3)
	fmuls    f0, f2, f2
	stw      r0, 0x18(r1)
	fmuls    f4, f4, f4
	xoris    r0, r3, 0x8000
	fmadds   f0, f1, f1, f0
	stw      r0, 0x1c(r1)
	lfs      f3, lbl_8051E354@sda21(r2)
	lfd      f1, lbl_8051E360@sda21(r2)
	fdivs    f2, f0, f4
	lfd      f0, 0x18(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r3, 0x24(r1)
	addi     r0, r3, 1
	stw      r0, 0x2c0(r30)
	b        lbl_8034AF88

lbl_8034AF68:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	lfs      f1, lbl_8051E330@sda21(r2)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl

lbl_8034AF88:
	lfs      f0, lbl_8051E330@sda21(r2)
	li       r3, 1
	stfs     f0, 0x20c(r30)
	b        lbl_8034AF9C

lbl_8034AF98:
	li       r3, 0

lbl_8034AF9C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8034AFB4
 * Size:	000008
 */
u32 Bomb::Obj::pressCallBack(Game::Creature*, float, CollPart*) { return 0x0; }

/*
 * --INFO--
 * Address:	8034AFBC
 * Size:	000078
 */
void Bomb::Obj::bounceCallback(Sys::Triangle*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2bc(r3)
	cmplwi   r0, 0
	beq      lbl_8034AFEC
	lfs      f1, lbl_8051E368@sda21(r2)
	addi     r4, r31, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	b        lbl_8034B020

lbl_8034AFEC:
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034B020
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034B020
	lfs      f1, lbl_8051E368@sda21(r2)
	mr       r3, r31
	addi     r4, r31, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	mr       r3, r31
	bl       forceBomb__Q34Game4Bomb3ObjFv

lbl_8034B020:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B034
 * Size:	00009C
 */
void Bomb::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
	mr       r3, r30
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034B0B8
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8034B0B8
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034B0B8
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034B0B8
	lfs      f1, lbl_8051E368@sda21(r2)
	mr       r3, r30
	addi     r4, r30, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	mr       r3, r30
	bl       forceBomb__Q34Game4Bomb3ObjFv
	li       r0, 1
	stb      r0, 0x2c9(r30)

lbl_8034B0B8:
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
 * Address:	8034B0D0
 * Size:	000060
 */
void Bomb::Obj::forceBomb(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034B11C
	lwz      r0, 0x1e0(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	lwz      r3, 0x2d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8034B11C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Bomb::Obj::isBombStart(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034B130
 * Size:	000028
 */
void Bomb::Obj::bombEffInWater(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051E36C@sda21(r2)
	addi     r4, r3, 0x18c
	stw      r0, 0x14(r1)
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B158
 * Size:	00005C
 */
void Bomb::Obj::canEat(void)
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
	beq      lbl_8034B19C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034B19C
	li       r3, 1
	b        lbl_8034B1A0

lbl_8034B19C:
	li       r3, 0

lbl_8034B1A0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B1B4
 * Size:	0000D8
 */
void Bomb::Obj::isAnimStart(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034B208
	lwz      r3, 0xc0(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lwz      r0, 0x86c(r3)
	lfd      f1, lbl_8051E360@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f2, 0x20c(r31)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	beq      lbl_8034B26C

lbl_8034B208:
	lbz      r0, 0x2bc(r31)
	cmplwi   r0, 0
	beq      lbl_8034B220
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8034B26C

lbl_8034B220:
	lwz      r3, 0x2c0(r31)
	cmpwi    r3, 0
	bne      lbl_8034B234
	li       r3, 0
	b        lbl_8034B264

lbl_8034B234:
	addi     r0, r3, 1
	stw      r0, 0x2c0(r31)
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2c0(r31)
	lwz      r0, 0x894(r3)
	cmpw     r4, r0
	ble      lbl_8034B260
	li       r0, 0
	li       r3, 1
	stw      r0, 0x2c0(r31)
	b        lbl_8034B264

lbl_8034B260:
	li       r3, 0

lbl_8034B264:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034B274

lbl_8034B26C:
	li       r3, 1
	b        lbl_8034B278

lbl_8034B274:
	li       r3, 0

lbl_8034B278:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace efx {

	/*
	 * --INFO--
	 * Address:	8034B28C
	 * Size:	00009C
	 */
	TBombrockLight::~TBombrockLight(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8034B30C
	lis      r3, __vt__Q23efx14TBombrockLight@ha
	addi     r3, r3, __vt__Q23efx14TBombrockLight@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8034B2FC
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8034B2FC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8034B2FC:
	extsh.   r0, r31
	ble      lbl_8034B30C
	mr       r3, r30
	bl       __dl__FPv

lbl_8034B30C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
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
 * Address:	8034B328
 * Size:	000004
 */
void Bomb::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8034B32C
 * Size:	000040
 */
void Bomb::Obj::isLivingThing(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	bne      lbl_8034B350
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034B358

lbl_8034B350:
	li       r3, 0
	b        lbl_8034B35C

lbl_8034B358:
	li       r3, 1

lbl_8034B35C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B36C
 * Size:	000048
 */
void Bomb::Obj::isUnderground(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8034B39C
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034B39C
	li       r31, 1

lbl_8034B39C:
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
 * Address:	8034B3B4
 * Size:	000008
 */
u32 Bomb::Obj::getEnemyTypeID(void) { return 0x24; }

/*
 * --INFO--
 * Address:	8034B3BC
 * Size:	000008
 */
@4 @efx::TBombrockLight::~TBombrockLight(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx14TBombrockLightFv
	*/
}
} // namespace Game
