#include "types.h"
#include "Game/Entities/Tyre.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_tyre_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495820
    lbl_80495820:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x74797265
        .4byte 0x2E637070
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x74797265
        .4byte 0x66726F6E
        .4byte 0x74000000
        .4byte 0x74797265
        .4byte 0x6261636B
        .4byte 0x00000000
        .4byte 0x41726752
        .4byte 0x6F745953
        .4byte 0x63616C65
        .4byte 0x00000000
        .4byte 0x41726745
        .4byte 0x6E656D79
        .4byte 0x54797065
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E63C8
    lbl_804E63C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q23efx10TKageRecov
    __vt__Q23efx10TKageRecov:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx13TKageTyredead
    __vt__Q23efx13TKageTyredead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q23efx14TKageTyresmoke
    __vt__Q23efx14TKageTyresmoke:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14TKageTyresmokeFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx14TKageTyresmokeFv .global __vt__Q34Game4Tyre3Obj
    __vt__Q34Game4Tyre3Obj:
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
        .4byte onInit__Q34Game4Tyre3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game4Tyre3ObjFf
        .4byte doDirectDraw__Q34Game4Tyre3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game4Tyre3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game4Tyre3ObjFv
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
        .4byte isUnderground__Q34Game4Tyre3ObjFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game4Tyre3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game4Tyre3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game4Tyre3ObjFv
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
        .4byte __dt__Q34Game4Tyre3ObjFv
        .4byte "birth__Q34Game4Tyre3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game4Tyre3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Tyre3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q34Game4Tyre3ObjFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Tyre3ObjFR8Graphics .4byte
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
        .4byte setParameters__Q34Game4Tyre3ObjFv
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
        .4byte getEnemyTypeID__Q34Game4Tyre3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q34Game4Tyre3ObjFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game4Tyre3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game4Tyre3ObjFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game4Tyre3ObjFv .4byte
   doFinishStoneState__Q34Game4Tyre3ObjFv .4byte
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
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game4Tyre3ObjFPQ34Game4Tyre3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@836@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@836@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@836@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@836@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@836@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@836@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516068
    lbl_80516068:
        .skip 0x4
    .global lbl_8051606C
    lbl_8051606C:
        .skip 0x4
    .global curT__Q24Game4Tyre
    curT__Q24Game4Tyre:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F5B8
    lbl_8051F5B8:
        .4byte 0x00000000
    .global lbl_8051F5BC
    lbl_8051F5BC:
        .4byte 0x3C23D70A
    .global lbl_8051F5C0
    lbl_8051F5C0:
        .float 0.5
    .global lbl_8051F5C4
    lbl_8051F5C4:
        .float 1.0
    .global lbl_8051F5C8
    lbl_8051F5C8:
        .4byte 0xC47A0000
    .global lbl_8051F5CC
    lbl_8051F5CC:
        .4byte 0x461C4000
    .global lbl_8051F5D0
    lbl_8051F5D0:
        .4byte 0x44610000
        .4byte 0x00000000
    .global lbl_8051F5D8
    lbl_8051F5D8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051F5E0
    lbl_8051F5E0:
        .4byte 0x40000000
    .global lbl_8051F5E4
    lbl_8051F5E4:
        .4byte 0x41A00000
    .global lbl_8051F5E8
    lbl_8051F5E8:
        .4byte 0x41200000
    .global lbl_8051F5EC
    lbl_8051F5EC:
        .4byte 0x74797265
        .4byte 0x464C0000
    .global lbl_8051F5F4
    lbl_8051F5F4:
        .4byte 0x54797265
        .4byte 0x46520000
    .global lbl_8051F5FC
    lbl_8051F5FC:
        .4byte 0x42C80000
    .global lbl_8051F600
    lbl_8051F600:
        .4byte 0x40A00000
    .global lbl_8051F604
    lbl_8051F604:
        .4byte 0x42480000
    .global lbl_8051F608
    lbl_8051F608:
        .4byte 0x42A00000
    .global lbl_8051F60C
    lbl_8051F60C:
        .4byte 0x3F4CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	803AC2F0
 * Size:	000038
 */
void Tyre::frontTyreCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803AC314
	lwz      r3, curT__Q24Game4Tyre@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803AC314
	bl       frontRollMtxCalc__Q34Game4Tyre3ObjFv

lbl_803AC314:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC328
 * Size:	000038
 */
void Tyre::rearTyreCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803AC34C
	lwz      r3, curT__Q24Game4Tyre@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803AC34C
	bl       rearRollMtxCalc__Q34Game4Tyre3ObjFv

lbl_803AC34C:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC360
 * Size:	000020
 */
void Tyre::Obj::setParameters(void)
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
 * Address:	803AC380
 * Size:	000020
 */
// void birth__Q34Game4Tyre3ObjFR10Vector3f f(void)
Creature* Tyre::Obj::birth(Vector3f&, float) const
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

/*
 * --INFO--
 * Address:	803AC3A0
 * Size:	00018C
 */
void Tyre::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80495820@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r5, lbl_80495820@l
	stw      r29, 0x14(r1)
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	lwz      r3, 0x304(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, curT__Q24Game4Tyre@sda21(r13)
	lwz      r0, 0x174(r31)
	cmplwi   r0, 0
	bne      lbl_803AC450
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x60
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AC450:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x24
	lwz      r5, 8(r3)
	lwz      r29, 4(r5)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x310(r31)
	addi     r4, r30, 0x30
	lwz      r3, 0x174(r31)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x312(r31)
	lis      r4, frontTyreCallBack__Q24Game4TyreFP8J3DJointi@ha
	lis      r3, rearTyreCallBack__Q24Game4TyreFP8J3DJointi@ha
	lfs      f1, lbl_8051F5B8@sda21(r2)
	lhz      r0, 0x310(r31)
	addi     r5, r4, frontTyreCallBack__Q24Game4TyreFP8J3DJointi@l
	lwz      r4, 0x28(r29)
	addi     r6, r3, rearTyreCallBack__Q24Game4TyreFP8J3DJointi@l
	slwi     r3, r0, 2
	li       r0, 0
	lwzx     r3, r4, r3
	mr       r4, r31
	stw      r5, 4(r3)
	lhz      r3, 0x312(r31)
	lwz      r5, 0x28(r29)
	slwi     r3, r3, 2
	lwzx     r3, r5, r3
	stw      r6, 4(r3)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x314(r31)
	stfs     f1, 0x2cc(r31)
	stfs     f1, 0x2c0(r31)
	stfs     f1, 0x2c4(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2c8(r31)
	stw      r0, 0x318(r31)
	stfs     f1, 0x31c(r31)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, 0x338(r31)
	bl       init__Q34Game4Tyre13TyreShadowMgrFv
	li       r0, 0
	stb      r0, 0x321(r31)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x324(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x328(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x32c(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC52C
 * Size:	0003C0
 */
Tyre::Obj::Obj(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	stmw     r26, 8(r1)
	mr       r31, r3
	beq      lbl_803AC568
	addi     r0, r31, 0x344
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x344(r31)
	stw      r0, 0x348(r31)
	stw      r0, 0x34c(r31)

lbl_803AC568:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r4, __vt__Q34Game4Tyre3Obj@ha
	addi     r9, r31, 0x344
	addi     r5, r4, __vt__Q34Game4Tyre3Obj@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	stw      r5, 0(r31)
	addi     r0, r5, 0x1b0
	addi     r10, r5, 0x2fc
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	stw      r0, 0x178(r31)
	li       r8, 0
	li       r0, 1
	addi     r3, r31, 0x2ec
	lwz      r7, 0x17c(r31)
	li       r5, 0
	li       r6, 0xc
	stw      r10, 0(r7)
	li       r7, 2
	lwz      r10, 0x17c(r31)
	subf     r9, r10, r9
	stw      r9, 0xc(r10)
	stw      r8, 0x2bc(r31)
	stb      r8, 0x2d0(r31)
	stb      r0, 0x2d1(r31)
	stb      r8, 0x2d2(r31)
	bl       __construct_array
	li       r4, 0
	lfs      f1, lbl_8051F5BC@sda21(r2)
	stw      r4, 0x304(r31)
	li       r0, 1
	lfs      f0, lbl_8051F5B8@sda21(r2)
	li       r3, 0x2c
	stfs     f1, 0x308(r31)
	stfs     f0, 0x30c(r31)
	stb      r0, 0x320(r31)
	stb      r4, 0x321(r31)
	stb      r4, 0x322(r31)
	stw      r4, 0x330(r31)
	stw      r4, 0x334(r31)
	stw      r4, 0x338(r31)
	stw      r4, 0x33c(r31)
	stw      r4, 0x340(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803AC664
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game4Tyre14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game4Tyre14ProperAnimator@l
	lis      r3, __vt__Q28SysShape8Animator@ha
	stw      r0, 0(r28)
	addi     r4, r4, __vt__Q28SysShape12BaseAnimator@l
	addi     r3, r3, __vt__Q28SysShape8Animator@l
	li       r0, 0
	stw      r4, 0x10(r28)
	stw      r3, 0x10(r28)
	stb      r0, 0x28(r28)
	stw      r0, 0x1c(r28)
	stw      r0, 0x14(r28)
	stb      r0, 0x28(r28)
	stw      r0, 0x20(r28)

lbl_803AC664:
	stw      r28, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803AC698
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game4Tyre3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game4Tyre3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_803AC698:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803AC73C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx13TChasePosYRot@ha
	stw      r0, 4(r3)
	addi     r9, r4, __vt__Q23efx13TChasePosYRot@l
	lis      r4, __vt__Q23efx14TKageTyresmoke@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TKageTyresmoke@l
	li       r11, 0
	li       r10, 0x2b2
	stw      r0, 4(r3)
	addi     r8, r9, 0x14
	addi     r7, r31, 0x18c
	addi     r6, r31, 0x1fc
	stw      r11, 8(r3)
	li       r5, 0x2a0
	addi     r0, r4, 0x14
	sth      r10, 0xc(r3)
	stb      r11, 0xe(r3)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803AC73C:
	stw      r3, 0x330(r31)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803AC7D0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx13TChasePosYRot@ha
	stw      r0, 4(r3)
	addi     r9, r4, __vt__Q23efx13TChasePosYRot@l
	lis      r4, __vt__Q23efx14TKageTyresmoke@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TKageTyresmoke@l
	li       r11, 0
	li       r10, 0x2b2
	stw      r0, 4(r3)
	addi     r8, r9, 0x14
	addi     r7, r31, 0x18c
	addi     r6, r31, 0x1fc
	stw      r11, 8(r3)
	li       r5, 0x2a0
	addi     r0, r4, 0x14
	sth      r10, 0xc(r3)
	stb      r11, 0xe(r3)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803AC7D0:
	stw      r3, 0x334(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803AC8B0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx19TEnemyHamonChasePos@ha
	addi     r28, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__18JPAEmitterCallBack@ha
	stw      r28, 0(r3)
	addi     r0, r4, __vt__Q23efx19TEnemyHamonChasePos@l
	lis      r5, __vt__Q23efx5TSync@ha
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 0(r3)
	addi     r30, r5, __vt__Q23efx5TSync@l
	addi     r10, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx12TEnemyHamonM@ha
	stw      r28, 4(r3)
	addi     r29, r6, __vt__18JPAEmitterCallBack@l
	addi     r7, r4, __vt__Q23efx12TEnemyHamonM@l
	lis      r4, __vt__Q23efx15TEnemyHamonMInd@ha
	stw      r29, 8(r3)
	addi     r4, r4, __vt__Q23efx15TEnemyHamonMInd@l
	addi     r27, r30, 0x14
	li       r12, 0
	stw      r30, 4(r3)
	li       r11, 0x2b2
	addi     r26, r10, 0x14
	addi     r9, r31, 0x324
	stw      r27, 8(r3)
	li       r8, 0x57
	addi     r6, r7, 0x14
	li       r5, 0x58
	stw      r12, 0xc(r3)
	addi     r0, r4, 0x14
	sth      r11, 0x10(r3)
	stb      r12, 0x12(r3)
	stw      r10, 4(r3)
	stw      r26, 8(r3)
	stw      r9, 0x14(r3)
	sth      r8, 0x10(r3)
	stw      r7, 4(r3)
	stw      r6, 8(r3)
	stw      r28, 0x18(r3)
	stw      r29, 0x1c(r3)
	stw      r30, 0x18(r3)
	stw      r27, 0x1c(r3)
	stw      r12, 0x20(r3)
	sth      r11, 0x24(r3)
	stb      r12, 0x26(r3)
	stw      r10, 0x18(r3)
	stw      r26, 0x1c(r3)
	stw      r9, 0x28(r3)
	sth      r5, 0x24(r3)
	stw      r4, 0x18(r3)
	stw      r0, 0x1c(r3)

lbl_803AC8B0:
	stw      r3, 0x33c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803AC8D0
	mr       r4, r31
	bl       __ct__Q34Game4Tyre13TyreShadowMgrFPQ34Game4Tyre3Obj
	mr       r0, r3

lbl_803AC8D0:
	stw      r0, 0x338(r31)
	mr       r3, r31
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC8EC
 * Size:	00004C
 */
void Tyre::Obj::setFSM(Game::Tyre::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x304(r3)
	mr       r4, r31
	lwz      r3, 0x304(r3)
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
 * Address:	803AC938
 * Size:	00004C
 */
void Tyre::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	lwz      r3, 0x304(r31)
	mr       r4, r31
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
 * Address:	803AC984
 * Size:	0000B8
 */
void Tyre::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lbz      r0, 0x832(r3)
	cmplwi   r0, 0
	beq      lbl_803AC9AC
	stw      r31, curT__Q24Game4Tyre@sda21(r13)

lbl_803AC9AC:
	lwz      r0, 0x318(r31)
	cmpwi    r0, 0
	ble      lbl_803AC9E4
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AC9E4
	lfs      f1, 0x190(r31)
	lfs      f0, 0x31c(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x190(r31)
	lwz      r3, 0x318(r31)
	addi     r0, r3, -1
	stw      r0, 0x318(r31)
	b        lbl_803AC9F8

lbl_803AC9E4:
	lwz      r3, 0x1e0(r31)
	li       r0, 0
	rlwinm   r3, r3, 0, 0x1e, 0x1c
	stw      r3, 0x1e0(r31)
	stw      r0, 0x318(r31)

lbl_803AC9F8:
	mr       r3, r31
	bl       doAnimationCullingOff__Q24Game9EnemyBaseFv
	li       r0, 0
	stw      r0, curT__Q24Game4Tyre@sda21(r13)
	lbz      r0, 0x2d2(r31)
	cmplwi   r0, 0
	beq      lbl_803ACA28
	lfs      f0, 0x308(r31)
	lwz      r3, 0x338(r31)
	stfs     f0, 0(r3)
	lwz      r3, 0x338(r31)
	bl       update__Q34Game4Tyre13TyreShadowMgrFv

lbl_803ACA28:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ACA3C
 * Size:	000004
 */
void Tyre::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803ACA40
 * Size:	000020
 */
void Tyre::Obj::doDebugDraw(Graphics&)
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
 * Address:	803ACA60
 * Size:	000020
 */
void Tyre::Obj::doSimulation(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doSimulation__Q24Game9EnemyBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ACA80
 * Size:	000080
 */
void Tyre::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	lwz      r3, 0x174(r30)
	lhz      r0, 0x312(r30)
	lwz      r3, 8(r3)
	mulli    r0, r0, 0x30
	lfs      f1, 0(r31)
	lwz      r3, 0x84(r3)
	lfs      f2, lbl_8051F5C0@sda21(r2)
	lwz      r3, 0xc(r3)
	add      r3, r3, r0
	lfs      f0, 0xc(r3)
	fadds    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0(r31)
	lfs      f1, 8(r31)
	lfs      f0, 0x2c(r3)
	fadds    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 8(r31)
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
 * Address:	803ACB00
 * Size:	00012C
 */
void Tyre::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051F5B8@sda21(r2)
	lis      r3, 0x74797231@ha
	addi     r4, r3, 0x74797231@l
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x30c(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r31)
	lwz      r3, 0x114(r31)
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797232@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797232@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797233@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797233@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797234@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797234@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797235@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797235@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797236@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797236@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	mr       r3, r31
	bl       fadeSmokeEffect__Q34Game4Tyre3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ACC2C
 * Size:	000124
 */
void Tyre::Obj::doFinishStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lis      r4, 0x74797231@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797231@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797232@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797232@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797233@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797233@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797234@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797234@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797235@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797235@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797236@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797236@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051F5C4@sda21(r2)
	li       r4, 0
	lfs      f2, 0x4c4(r5)
	lfs      f3, lbl_8051F5B8@sda21(r2)
	lfs      f4, lbl_8051F5C8@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_803ACD3C
	mr       r3, r31
	bl       createSmokeEffect__Q34Game4Tyre3ObjFv

lbl_803ACD3C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ACD50
 * Size:	000538
 */
void Tyre::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r29, r4
	mr       r30, r3
	lwz      r3, 0(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACDAC
	lfs      f0, lbl_8051F5B8@sda21(r2)
	stfs     f0, 0x11c(r30)
	stfs     f0, 0x120(r30)
	stfs     f0, 0x124(r30)

lbl_803ACDAC:
	mr       r3, r30
	mr       r4, r29
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
	mr       r3, r30
	bl       isFreeze__Q34Game4Tyre3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AD25C
	lwz      r0, 0x1e0(r30)
	lwz      r31, 0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AD25C
	cmplwi   r31, 0
	beq      lbl_803AD25C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803ACE18
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACE80

lbl_803ACE18:
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_803ACE34
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACE80

lbl_803ACE34:
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r31
	stw      r4, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r30, 0x5c(r1)
	stw      r5, 0x58(r1)
	stfs     f0, 0x60(r1)
	stw      r0, 0x64(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_803AD25C

lbl_803ACE80:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACF20
	lwz      r3, 0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x63
	beq      lbl_803ACF20
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r5, __vt__Q24Game12InteractWind@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x84(r1)
	addi     r4, r3, "zero__10Vector3<f>"@l
	addi     r5, r5, __vt__Q24Game12InteractWind@l
	lfs      f3, lbl_8051F5CC@sda21(r2)
	lfs      f2, 0(r4)
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lfs      f1, 4(r4)
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	stw      r5, 0x84(r1)
	mr       r3, r31
	lfs      f0, 8(r4)
	addi     r4, r1, 0x84
	stw      r30, 0x88(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	stw      r0, 0x84(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803ACF20:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACF98
	lwz      r3, 0x1e0(r30)
	lis      r0, 0x4330
	stw      r0, 0xa0(r1)
	li       r0, 1
	ori      r3, r3, 4
	lfd      f1, lbl_8051F5D8@sda21(r2)
	stw      r3, 0x1e0(r30)
	lwz      r3, 0xc0(r30)
	lbz      r3, 0x833(r3)
	stw      r3, 0x318(r30)
	lwz      r3, 0x318(r30)
	lwz      r4, 0x35c(r31)
	xoris    r3, r3, 0x8000
	lwz      r5, 0xc0(r30)
	stw      r3, 0xa4(r1)
	lfs      f2, 0xc0(r4)
	lfd      f0, 0xa0(r1)
	lfs      f3, 0x848(r5)
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	fmuls    f0, f3, f0
	stfs     f0, 0x31c(r30)
	stb      r0, 0x322(r30)

lbl_803ACF98:
	mr       r4, r31
	addi     r3, r1, 0x68
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x68
	cmplwi   r0, 0
	stw      r4, 0x48(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x4c(r1)
	stw      r3, 0x50(r1)
	bne      lbl_803ACFE4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD230

lbl_803ACFE4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD050

lbl_803ACFFC:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AD230
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AD050:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACFFC
	b        lbl_803AD230

lbl_803AD070:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD174
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f30, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f31, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r1)
	lfs      f0, lbl_8051F5D0@sda21(r2)
	fsubs    f1, f1, f31
	fmuls    f1, f1, f1
	fmadds   f1, f30, f30, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803AD174
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r31
	stw      r4, 0x38(r1)
	addi     r4, r1, 0x38
	stw      r30, 0x3c(r1)
	stw      r5, 0x38(r1)
	stfs     f0, 0x40(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803AD174:
	lwz      r0, 0x54(r1)
	cmplwi   r0, 0
	bne      lbl_803AD1A0
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD230

lbl_803AD1A0:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD214

lbl_803AD1C0:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AD230
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AD214:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD1C0

lbl_803AD230:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r1)
	cmplw    r4, r3
	bne      lbl_803AD070
	addi     r3, r1, 0x68
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_803AD25C:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xe4(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD288
 * Size:	0000A0
 */
void Tyre::Obj::damageCallBack(Game::Creature*, float, CollPart*)
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
	mr       r30, r4
	stw      r29, 0xc(r1)
	mr       r29, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AD2CC
	bl       isFreeze__Q34Game4Tyre3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD304

lbl_803AD2CC:
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AD2E4
	lbz      r0, 0x321(r29)
	cmplwi   r0, 0
	bne      lbl_803AD2EC

lbl_803AD2E4:
	li       r3, 0
	b        lbl_803AD308

lbl_803AD2EC:
	fmr      f1, f31
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	b        lbl_803AD308

lbl_803AD304:
	li       r3, 0

lbl_803AD308:
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
 * Address:	803AD328
 * Size:	00003C
 */
void Tyre::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_803AD350
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_803AD350:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD364
 * Size:	000058
 */
void Tyre::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_803AD3A4
	lwz      r3, 0x304(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803AD3A4:
	lwz      r0, 0x14(r1)
	li       r3, 0
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD3BC
 * Size:	000034
 */
void Tyre::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
	mr       r3, r31
	bl       fadeSmokeEffect__Q34Game4Tyre3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD3F0
 * Size:	000044
 */
void Tyre::Obj::outWaterCallback(void)
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
	cmpwi    r3, 0
	bne      lbl_803AD420
	mr       r3, r31
	bl       createSmokeEffect__Q34Game4Tyre3ObjFv

lbl_803AD420:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD434
 * Size:	000050
 */
void Tyre::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f5, lbl_8051F5E0@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f3, lbl_8051F5B8@sda21(r2)
	lfs      f0, 0x190(r3)
	lfs      f2, lbl_8051F5C4@sda21(r2)
	stfs     f0, 4(r4)
	lfs      f1, lbl_8051F5E4@sda21(r2)
	lfs      f4, 0x194(r3)
	lfs      f0, lbl_8051F5E8@sda21(r2)
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
 * Address:	803AD484
 * Size:	00004C
 */
void Tyre::Obj::needShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD4AC
	li       r3, 1
	b        lbl_803AD4BC

lbl_803AD4AC:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	li       r3, 1

lbl_803AD4BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD4D0
 * Size:	000050
 */
void Tyre::Obj::isFreeze(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_803AD500
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_803AD508

lbl_803AD500:
	li       r3, 1
	b        lbl_803AD50C

lbl_803AD508:
	li       r3, 0

lbl_803AD50C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD520
 * Size:	000298
 */
void Tyre::Obj::frontRollMtxCalc(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r31, r3
	lhz      r0, 0x310(r3)
	lwz      r3, 0x174(r3)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, lbl_8051F5B8@sda21(r2)
	mr       r30, r3
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	lbz      r0, 0x2d0(r31)
	cmplwi   r0, 0
	beq      lbl_803AD5BC
	lwz      r0, 0x2d4(r31)
	lis      r4, mCurrentMtx__6J3DSys@ha
	lwz      r5, 0x2d8(r31)
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	stw      r0, 8(r1)
	lwz      r0, 0x2dc(r31)
	stw      r5, 0xc(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0xc(r30)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x1c(r30)
	stfs     f0, 0x2c(r30)
	bl       PSMTXCopy

lbl_803AD5BC:
	lwz      r3, 0xc0(r31)
	lfs      f0, lbl_8051F5B8@sda21(r2)
	lfs      f1, 0x834(r3)
	fcmpu    cr0, f0, f1
	beq      lbl_803AD5E0
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_803AD6D4

lbl_803AD5E0:
	lfs      f31, 0x844(r3)
	lfs      f30, 0x840(r3)
	lfs      f1, 0x1fc(r31)
	lfs      f2, 0x314(r31)
	bl       angDist__Fff
	fcmpo    cr0, f1, f30
	ble      lbl_803AD624
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x2cc(r31)
	lfs      f2, 0x838(r3)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f31
	ble      lbl_803AD6B0
	stfs     f31, 0x2cc(r31)
	b        lbl_803AD6B0

lbl_803AD624:
	fneg     f0, f30
	fcmpo    cr0, f1, f0
	bge      lbl_803AD65C
	lwz      r3, 0xc0(r31)
	fneg     f3, f31
	lfs      f0, 0x2cc(r31)
	lfs      f2, 0x838(r3)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f3
	bge      lbl_803AD6B0
	stfs     f3, 0x2cc(r31)
	b        lbl_803AD6B0

lbl_803AD65C:
	lfs      f2, 0x2cc(r31)
	lfs      f1, lbl_8051F5B8@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_803AD690
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x83c(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_803AD6B0
	stfs     f1, 0x2cc(r31)
	b        lbl_803AD6B0

lbl_803AD690:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x83c(r3)
	fadds    f0, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_803AD6B0
	stfs     f1, 0x2cc(r31)

lbl_803AD6B0:
	lfs      f1, 0x2cc(r31)
	addi     r3, r1, 0x2c
	lfs      f0, lbl_8051F5B8@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f1, 0x18(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_803AD6D4:
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051F5EC@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	addi     r4, r2, lbl_8051F5F4@sda21
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x2ec(r31)
	stfs     f1, 0x2f0(r31)
	stfs     f2, 0x2f4(r31)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	mr       r5, r30
	lfs      f1, 0x1c(r3)
	addi     r4, r1, 0x2c
	lfs      f0, 0xc(r3)
	mr       r3, r30
	stfs     f0, 0x2f8(r31)
	stfs     f1, 0x2fc(r31)
	stfs     f2, 0x300(r31)
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x2c
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f1, 0x2c0(r31)
	addi     r3, r1, 0x2c
	lfs      f0, lbl_8051F5B8@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f1, 0x14(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r30
	mr       r5, r30
	addi     r4, r1, 0x2c
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x2c
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD7B8
 * Size:	00038C
 */
void Tyre::Obj::rearRollMtxCalc(void)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	mr       r30, r3
	lhz      r0, 0x312(r3)
	lwz      r3, 0x174(r3)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r31, r3
	lfs      f0, lbl_8051F5FC@sda21(r2)
	lfs      f2, 0x1c(r31)
	addi     r4, r1, 0x58
	lfs      f3, 0x2c(r31)
	lfs      f1, 0xc(r31)
	fadds    f0, f2, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x58(r1)
	stfs     f3, 0x60(r1)
	stfs     f0, 0x5c(r1)
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
	beq      lbl_803AD880
	lfs      f1, lbl_8051F5E8@sda21(r2)
	lfs      f2, 0x2c8(r30)
	lfs      f0, 0x190(r30)
	fadds    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_803AD890
	lfs      f0, lbl_8051F5E0@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x2c8(r30)
	b        lbl_803AD890

lbl_803AD880:
	lfs      f1, 0x2c8(r30)
	lfs      f0, lbl_8051F600@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x2c8(r30)

lbl_803AD890:
	lfs      f30, lbl_8051F5E0@sda21(r2)
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_803AD8A8
	lfs      f30, lbl_8051F5B8@sda21(r2)

lbl_803AD8A8:
	fadds    f0, f31, f30
	lfs      f1, 0x2c8(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803ADA7C
	stfs     f31, 0x2c8(r30)
	lfs      f0, lbl_8051F604@sda21(r2)
	lfs      f3, 0x2c(r31)
	lfs      f2, 0x1c(r31)
	fadds    f0, f31, f0
	lfs      f1, 0xc(r31)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x4c(r1)
	stfs     f3, 0x54(r1)
	stfs     f31, 0x50(r1)
	lfs      f1, 0x190(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_803AD910
	lbz      r0, 0x320(r30)
	cmplwi   r0, 0
	beq      lbl_803AD910
	mr       r3, r30
	addi     r4, r1, 0x4c
	bl       "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
	li       r0, 0
	stb      r0, 0x320(r30)

lbl_803AD910:
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_803ADA7C
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x324(r30)
	lfs      f0, 0x50(r1)
	stfs     f0, 0x328(r30)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x32c(r30)
	lwz      r0, 0x340(r30)
	cmplwi   r0, 0
	bne      lbl_803ADA24
	lfs      f0, 0x324(r30)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x3c(r1)
	lfs      f0, lbl_8051F608@sda21(r2)
	cmplwi   r3, 0
	lfs      f1, 0x328(r30)
	stfs     f1, 0x40(r1)
	lfs      f1, 0x32c(r30)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	beq      lbl_803AD978
	addi     r4, r1, 0x3c
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	stw      r3, 0x340(r30)

lbl_803AD978:
	lwz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_803ADA7C
	mr       r3, r30
	lfs      f31, 0x1f8(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x324(r30)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r7, 0x328(r30)
	lis      r4, __vt__Q23efx12ArgEnemyType@ha
	lwz      r6, 0x32c(r30)
	addi     r5, r5, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx12ArgEnemyType@l
	addi     r4, r1, 0x64
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x64(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stw      r0, 0x64(r1)
	stw      r3, 0x74(r1)
	stfs     f31, 0x78(r1)
	lwz      r3, 0x33c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x340(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x328(r30)
	b        lbl_803ADA7C

lbl_803ADA24:
	lfs      f0, 0x324(r30)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x2c(r1)
	lfs      f0, lbl_8051F608@sda21(r2)
	cmplwi   r3, 0
	lfs      f1, 0x328(r30)
	stfs     f1, 0x30(r1)
	lfs      f1, 0x32c(r30)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	beq      lbl_803ADA5C
	addi     r4, r1, 0x2c
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	stw      r3, 0x340(r30)

lbl_803ADA5C:
	lwz      r0, 0x340(r30)
	cmplwi   r0, 0
	bne      lbl_803ADA7C
	lwz      r3, 0x33c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803ADA7C:
	lfs      f2, 0x2c8(r30)
	lfs      f1, 0x190(r30)
	lfs      f0, lbl_8051F604@sda21(r2)
	fsubs    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_803ADA98
	fmr      f2, f0

lbl_803ADA98:
	lfs      f0, lbl_8051F604@sda21(r2)
	fneg     f0, f0
	fcmpo    cr0, f2, f0
	bge      lbl_803ADAAC
	fmr      f2, f0

lbl_803ADAAC:
	lfs      f0, 0x1c(r31)
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r3, mCurrentMtx__6J3DSys@l
	fadds    f0, f0, f2
	mr       r3, r31
	stfs     f0, 0x1c(r31)
	bl       PSMTXCopy
	lfs      f1, lbl_8051F5B8@sda21(r2)
	addi     r3, r1, 0x7c
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f1, 0x28(r1)
	lfs      f0, 0x2c0(r30)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	mr       r5, r31
	addi     r4, r1, 0x7c
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x7c
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0xb8(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ADB44
 * Size:	000008
 */
u32 Tyre::Obj::getEnemyTypeID(void) { return 0x62; }

/*
 * --INFO--
 * Address:	803ADB4C
 * Size:	000088
 */
void Tyre::Obj::moveStart(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r0, 0x321(r3)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_803ADB84
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_803ADB8C

lbl_803ADB84:
	li       r0, 1
	b        lbl_803ADB90

lbl_803ADB8C:
	li       r0, 0

lbl_803ADB90:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803ADBB8
	lwz      r3, 0x304(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803ADBB8:
	mr       r3, r31
	bl       constraintOff__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ADBD4
 * Size:	0000E8
 */
void Tyre::Obj::collisionStOn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x74797231@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x74797231@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797232@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797232@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797233@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797233@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797234@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797234@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797235@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797235@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797236@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797236@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ADCBC
 * Size:	000108
 */
void Tyre::Obj::collisionStOff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x74797231@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x74797231@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797232@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797232@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797233@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797233@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797234@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797234@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797235@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797235@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x74797236@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74797236@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051F5C4@sda21(r2)
	li       r4, 0
	lfs      f2, 0x4c4(r5)
	lfs      f3, lbl_8051F5B8@sda21(r2)
	lfs      f4, lbl_8051F5C8@sda21(r2)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ADDC4
 * Size:	0005CC
 */
void Tyre::Obj::flick(void)
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
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r31, r3
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0xf
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0xd
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x74(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x68(r1)
	stw      r0, 0x6c(r1)
	stw      r3, 0x70(r1)
	bne      lbl_803ADE64
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803AE08C

lbl_803ADE64:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803ADED0

lbl_803ADE7C:
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE08C
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)

lbl_803ADED0:
	lwz      r12, 0x68(r1)
	addi     r3, r1, 0x68
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ADE7C
	b        lbl_803AE08C

lbl_803ADEF0:
	lwz      r3, 0x70(r1)
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
	beq      lbl_803ADFD0
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_803ADFD0
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f29, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x2c
	lwz      r12, 0(r30)
	lfs      f31, 0x28(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f31, f29
	lfs      f2, 0x2c(r1)
	lfs      f0, lbl_8051F5D0@sda21(r2)
	fsubs    f2, f2, f30
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803ADFD0
	lwz      r5, 0xc0(r31)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r30
	stw      r4, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r31, 0x5c(r1)
	stw      r5, 0x58(r1)
	stfs     f0, 0x60(r1)
	stw      r0, 0x64(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803ADFD0:
	lwz      r0, 0x74(r1)
	cmplwi   r0, 0
	bne      lbl_803ADFFC
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803AE08C

lbl_803ADFFC:
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803AE070

lbl_803AE01C:
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE08C
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)

lbl_803AE070:
	lwz      r12, 0x68(r1)
	addi     r3, r1, 0x68
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AE01C

lbl_803AE08C:
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x6c(r1)
	cmplw    r4, r3
	bne      lbl_803ADEF0
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x54(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x48(r1)
	stw      r0, 0x4c(r1)
	stw      r3, 0x50(r1)
	bne      lbl_803AE0EC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE174

lbl_803AE0EC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE158

lbl_803AE104:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE174
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AE158:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AE104

lbl_803AE174:
	lfs      f31, lbl_8051F5D0@sda21(r2)
	b        lbl_803AE2F0

lbl_803AE17C:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	mr       r4, r30
	lfs      f28, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lfs      f29, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f29, f28
	lfs      f1, 0x14(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_803AE234
	lwz      r5, 0xc0(r31)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r30
	stw      r4, 0x38(r1)
	addi     r4, r1, 0x38
	stw      r31, 0x3c(r1)
	stw      r5, 0x38(r1)
	stfs     f0, 0x40(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803AE234:
	lwz      r0, 0x54(r1)
	cmplwi   r0, 0
	bne      lbl_803AE260
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE2F0

lbl_803AE260:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE2D4

lbl_803AE280:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE2F0
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AE2D4:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AE280

lbl_803AE2F0:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r1)
	cmplw    r4, r3
	bne      lbl_803AE17C
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051F5C8@sda21(r2)
	li       r4, 0
	lfs      f29, 0x4c4(r5)
	lfs      f30, 0x4ec(r5)
	fmr      f2, f29
	lfs      f28, 0x53c(r5)
	fmr      f3, f30
	lfs      f1, 0x514(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f28
	lfs      f4, lbl_8051F5C8@sda21(r2)
	fmr      f2, f29
	mr       r3, r31
	fmr      f3, f30
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AE390
 * Size:	000100
 */
void Tyre::Obj::deadEffect(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lhz      r0, 0x312(r3)
	lwz      r3, 0x174(r3)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f0, 0xc(r3)
	lis      r3, __vt__Q23efx8TSimple3@ha
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	li       r5, 0
	stw      r4, 0x18(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx13TKageTyredead@ha
	li       r8, 0x29d
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r7, 0x29e
	li       r6, 0x29f
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q23efx13TKageTyredead@l
	addi     r3, r1, 0x18
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	sth      r8, 0x1c(r1)
	sth      r7, 0x1e(r1)
	sth      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	lhz      r0, 0x310(r31)
	lwz      r3, 0x174(r31)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	addi     r4, r1, 8
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	addi     r3, r1, 0x18
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	li       r0, 0
	stb      r0, 0x2d2(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AE490
 * Size:	000064
 */
void Tyre::Obj::createSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	bne      lbl_803AE4E0
	lwz      r3, 0x330(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x334(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803AE4E0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AE4F4
 * Size:	000050
 */
void Tyre::Obj::fadeSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x330(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x334(r31)
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

} // namespace Game

/*
 * --INFO--
 * Address:	803AE544
 * Size:	0001E8
 */
void landEffect__Q34Game4Tyre3ObjFR10Vector3f(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r4
	li       r4, 0x5976
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r29, r3
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x280(r29)
	li       r30, 0
	cmplwi   r0, 0
	beq      lbl_803AE594
	li       r30, 1

lbl_803AE594:
	cmplwi   r0, 0
	bne      lbl_803AE5E4
	lfs      f0, 0(r31)
	li       r0, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x28(r1)
	lfs      f0, lbl_8051F608@sda21(r2)
	cmplwi   r3, 0
	lfs      f1, 4(r31)
	stfs     f1, 0x2c(r1)
	lfs      f1, 8(r31)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	beq      lbl_803AE5D8
	addi     r4, r1, 0x28
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	mr       r0, r3

lbl_803AE5D8:
	cmplwi   r0, 0
	beq      lbl_803AE5E4
	li       r30, 1

lbl_803AE5E4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803AE6A0
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f2, 0x1fc(r29)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r0, 0x38(r1)
	lis      r4, __vt__Q23efx8TSimple5@ha
	lis      r6, __vt__Q23efx12ArgRotYScale@ha
	lis      r3, __vt__Q23efx9TKchApWat@ha
	lfs      f1, 0(r31)
	addi     r12, r5, __vt__Q23efx5TBase@l
	addi     r11, r4, __vt__Q23efx8TSimple5@l
	lfs      f0, lbl_8051F60C@sda21(r2)
	stfs     f1, 0x3c(r1)
	addi     r30, r6, __vt__Q23efx12ArgRotYScale@l
	addi     r0, r3, __vt__Q23efx9TKchApWat@l
	li       r10, 0x211
	lfs      f1, 4(r31)
	li       r9, 0x212
	li       r8, 0x213
	li       r7, 0x214
	stfs     f1, 0x40(r1)
	li       r6, 0x215
	li       r5, 0
	addi     r3, r1, 0x50
	lfs      f1, 8(r31)
	addi     r4, r1, 0x38
	stw      r12, 0x50(r1)
	stw      r11, 0x50(r1)
	stfs     f1, 0x44(r1)
	stw      r30, 0x38(r1)
	stfs     f2, 0x48(r1)
	stfs     f0, 0x4c(r1)
	sth      r10, 0x54(r1)
	sth      r9, 0x56(r1)
	sth      r8, 0x58(r1)
	sth      r7, 0x5a(r1)
	sth      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r5, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r5, 0x6c(r1)
	stw      r5, 0x70(r1)
	stw      r0, 0x50(r1)
	bl       create__Q23efx9TKchApWatFPQ23efx3Arg
	b        lbl_803AE710

lbl_803AE6A0:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx10TKageRecov@ha
	lis      r3, __vt__Q23efx3Arg@ha
	stw      r0, 0x18(r1)
	addi     r5, r4, __vt__Q23efx10TKageRecov@l
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r3, 0x29a
	li       r7, 0x29b
	sth      r3, 0x1c(r1)
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	sth      r7, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	lfs      f0, 0(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_803AE710:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	803AE72C
 * Size:	00002C
 */
void Tyre::Obj::scaleUpShadow(void)
{
	/*
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x308(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051F5C4@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x308(r3)
	lfs      f1, 0x308(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0x308(r3)
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803AE758
 * Size:	00009C
 */
TKageTyresmoke::~TKageTyresmoke(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803AE7D8
lis      r3, __vt__Q23efx14TKageTyresmoke@ha
addi     r3, r3, __vt__Q23efx14TKageTyresmoke@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_803AE7C8
lis      r3, __vt__Q23efx13TChasePosYRot@ha
addi     r3, r3, __vt__Q23efx13TChasePosYRot@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_803AE7C8
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_803AE7C8:
extsh.   r0, r31
ble      lbl_803AE7D8
mr       r3, r30
bl       __dl__FPv

lbl_803AE7D8:
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
 * Address:	803AE7F4
 * Size:	000004
 */
void Tyre::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	803AE7F8
 * Size:	000008
 */
void Tyre::Obj::isUnderground(void)
{
	/*
	lbz      r3, 0x2d1(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	803AE800
 * Size:	000008
 */
u32 bombCallBack__Q34Game4Tyre3ObjFPQ24Game8CreatureR10Vector3f f(void) { return 0x0; }

/*
 * --INFO--
 * Address:	803AE808
 * Size:	000028
 */
void __sinit_tyre_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E63C8@ha
	stw      r0, lbl_80516068@sda21(r13)
	stfsu    f0, lbl_804E63C8@l(r3)
	stfs     f0, lbl_8051606C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AE830
 * Size:	000014
 */
void @836 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -836
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	803AE844
 * Size:	000014
 */
void @836 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -836
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	803AE858
 * Size:	000014
 */
void @836 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -836
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	803AE86C
 * Size:	000014
 */
void @836 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -836
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	803AE880
 * Size:	000014
 */
void @836 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -836
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	803AE894
 * Size:	000014
 */
void @836 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -836
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	803AE8A8
 * Size:	000008
 */
@4 @efx::TKageTyresmoke::~TKageTyresmoke(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx14TKageTyresmokeFv
	*/
}
