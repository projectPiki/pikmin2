#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game6Chappy3Obj
    __vt__Q34Game6Chappy3Obj:
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
        .4byte onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game10ChappyBase3ObjFR8Graphics
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
        .4byte collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game10ChappyBase3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game6Chappy3ObjFv
        .4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10ChappyBase3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10ChappyBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game6Chappy3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game10ChappyBase3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game10ChappyBase3ObjFv
        .4byte initWalkSmokeEffect__Q34Game10ChappyBase3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game10ChappyBase3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game6Chappy3ObjFv
        .4byte getMouthSlots__Q34Game10ChappyBase3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game10ChappyBase3ObjFPQ24Game8CreaturefP8CollPart .4byte
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
   doStartStoneState__Q34Game10ChappyBase3ObjFv .4byte
   doFinishStoneState__Q34Game10ChappyBase3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10ChappyBase3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10ChappyBase3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
        .4byte isWakeup__Q34Game10ChappyBase3ObjFv
        .4byte setAnimationSpeed__Q34Game10ChappyBase3ObjFf
        .4byte flickAttackFail__Q34Game10ChappyBase3ObjFv
        .4byte flickStatePikmin__Q34Game10ChappyBase3ObjFv
        .4byte flickAttackBomb__Q34Game10ChappyBase3ObjFv
        .4byte eatAttackPikmin__Q34Game10ChappyBase3ObjFv
        .4byte resetUnderGround__Q34Game10ChappyBase3ObjFv
        .4byte setUnderGround__Q34Game10ChappyBase3ObjFv
        .4byte createEffect__Q34Game10ChappyBase3ObjFv
        .4byte setupEffect__Q34Game10ChappyBase3ObjFv
        .4byte startSleepEffect__Q34Game10ChappyBase3ObjFv
        .4byte finishSleepEffect__Q34Game10ChappyBase3ObjFv
        .4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
        .4byte createSmokeEffect__Q34Game10ChappyBase3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@740@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517A98
    lbl_80517A98:
        .4byte 0x3F666666
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80115F90
 * Size:	000144
 */
Chappy::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80115FD0
	addi     r0, r31, 0x2e4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e4(r31)
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)

lbl_80115FD0:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game10ChappyBase3ObjFv
	lis      r3, __vt__Q34Game6Chappy3Obj@ha
	addi     r0, r31, 0x2e4
	addi     r5, r3, __vt__Q34Game6Chappy3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x334
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8011605C
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game10ChappyBase14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game10ChappyBase14ProperAnimator@l
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

lbl_8011605C:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80116090
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10ChappyBase3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10ChappyBase3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_80116090:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x31c(r12)
	mtctr    r12
	bctrl
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
 * Address:	801160D4
 * Size:	00004C
 */
void ChappyBase::Obj::setFSM(Game::ChappyBase::FSM*)
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
 * Address:	80116120
 * Size:	0000BC
 */
ChappyBase::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801161C0
	lis      r3, __vt__Q34Game10ChappyBase3Obj@ha
	addi     r0, r31, 0x2e4
	addi     r4, r3, __vt__Q34Game10ChappyBase3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x334
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_801161B0
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

lbl_801161B0:
	extsh.   r0, r30
	ble      lbl_801161C0
	mr       r3, r31
	bl       __dl__FPv

lbl_801161C0:
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
 * Address:	801161DC
 * Size:	0002B0
 */
void Chappy::Obj::changeMaterial()
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
	lwz      r28, 8(r4)
	lwz      r12, 0xe0(r12)
	lwz      r29, 4(r28)
	mtctr    r12
	bctrl
	mr       r30, r3
	lwz      r3, 0x180(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0xe4(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lbz      r0, 0(r30)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r30)
	stb      r0, 1(r3)
	lhz      r0, 2(r30)
	sth      r0, 2(r3)
	lhz      r0, 4(r30)
	sth      r0, 4(r3)
	lbz      r0, 6(r30)
	stb      r0, 6(r3)
	lbz      r0, 7(r30)
	stb      r0, 7(r3)
	lbz      r0, 8(r30)
	stb      r0, 8(r3)
	lbz      r0, 9(r30)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r30)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r30)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r30)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r30)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r30)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r30)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r30)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r30)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r30)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r30)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r30)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r30)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r30)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r30)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0x1c(r3)
	add      r0, r30, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0xc(r3)
	add      r0, r30, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	lwz      r3, 0x174(r27)
	lbz      r0, 0(r31)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0x20(r3)
	lbz      r0, 1(r31)
	stb      r0, 0x21(r3)
	lhz      r0, 2(r31)
	sth      r0, 0x22(r3)
	lhz      r0, 4(r31)
	sth      r0, 0x24(r3)
	lbz      r0, 6(r31)
	stb      r0, 0x26(r3)
	lbz      r0, 7(r31)
	stb      r0, 0x27(r3)
	lbz      r0, 8(r31)
	stb      r0, 0x28(r3)
	lbz      r0, 9(r31)
	stb      r0, 0x29(r3)
	lhz      r0, 0xa(r31)
	sth      r0, 0x2a(r3)
	lwz      r0, 0xc(r31)
	stw      r0, 0x2c(r3)
	lbz      r0, 0x10(r31)
	stb      r0, 0x30(r3)
	lbz      r0, 0x11(r31)
	stb      r0, 0x31(r3)
	lbz      r0, 0x12(r31)
	stb      r0, 0x32(r3)
	lbz      r0, 0x13(r31)
	stb      r0, 0x33(r3)
	lbz      r0, 0x14(r31)
	stb      r0, 0x34(r3)
	lbz      r0, 0x15(r31)
	stb      r0, 0x35(r3)
	lbz      r0, 0x16(r31)
	stb      r0, 0x36(r3)
	lbz      r0, 0x17(r31)
	lis      r5, j3dSys@ha
	addi     r27, r5, j3dSys@l
	li       r30, 0
	stb      r0, 0x37(r3)
	lbz      r0, 0x18(r31)
	stb      r0, 0x38(r3)
	lbz      r0, 0x19(r31)
	stb      r0, 0x39(r3)
	lha      r0, 0x1a(r31)
	sth      r0, 0x3a(r3)
	lwz      r0, 0x1c(r31)
	stw      r0, 0x3c(r3)
	lwz      r5, 4(r4)
	lwz      r0, 0x3c(r5)
	addi     r3, r5, 0x20
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x3c(r5)
	lwz      r4, 4(r4)
	lwz      r0, 0x2c(r4)
	addi     r3, r4, 0x20
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x2c(r4)
	b        lbl_80116468

lbl_80116430:
	lwz      r4, 0xc0(r28)
	rlwinm   r3, r30, 6, 0xa, 0x19
	rlwinm   r0, r30, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r27)
	lwz      r3, 0x60(r29)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1

lbl_80116468:
	lhz      r0, 0x5c(r29)
	clrlwi   r3, r30, 0x10
	cmplw    r3, r0
	blt      lbl_80116430
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011648C
 * Size:	000008
 */
void Chappy::Mgr::getChangeTexture1()
{
	/*
	lwz      r3, 0x48(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80116494
 * Size:	000008
 */
void Chappy::Mgr::getChangeTexture0()
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011649C
 * Size:	0000EC
 */
Chappy::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8011656C
	lis      r3, __vt__Q34Game6Chappy3Obj@ha
	addi     r5, r30, 0x2e4
	addi     r4, r3, __vt__Q34Game6Chappy3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r0, r4, 0x334
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r0, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r5
	stw      r0, 0xc(r3)
	beq      lbl_8011655C
	lis      r3, __vt__Q34Game10ChappyBase3Obj@ha
	addi     r4, r3, __vt__Q34Game10ChappyBase3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r0, r4, 0x334
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r0, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r5
	stw      r0, 0xc(r3)
	beq      lbl_8011655C
	lis      r3, __vt__Q24Game9EnemyBase@ha
	addi     r0, r30, 0x2bc
	addi     r4, r3, __vt__Q24Game9EnemyBase@l
	addi     r3, r30, 0x290
	stw      r4, 0(r30)
	addi     r5, r4, 0x1b0
	addi     r6, r4, 0x2f8
	li       r4, -1
	stw      r5, 0x178(r30)
	lwz      r5, 0x17c(r30)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r30)
	subf     r0, r5, r0
	stw      r0, 0xc(r5)
	bl       __dt__5CNodeFv

lbl_8011655C:
	extsh.   r0, r31
	ble      lbl_8011656C
	mr       r3, r30
	bl       __dl__FPv

lbl_8011656C:
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
 * Address:	80116588
 * Size:	000008
 */
u32 Chappy::Obj::getEnemyTypeID() { return 0x2; }

/*
 * --INFO--
 * Address:	80116590
 * Size:	000008
 */
void ChappyBase::Obj::getMouthSlots()
{
	/*
	addi     r3, r3, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80116598
 * Size:	000020
 */
void ChappyBase::Obj::setAnimationSpeed(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801165B8
 * Size:	000004
 */
void ChappyBase::Obj::resetUnderGround() { }

/*
 * --INFO--
 * Address:	801165BC
 * Size:	000004
 */
void ChappyBase::Obj::setUnderGround() { }

/*
 * --INFO--
 * Address:	801165C0
 * Size:	000004
 */
void ChappyBase::Obj::createFlickEffect() { }

/*
 * --INFO--
 * Address:	801165C4
 * Size:	000004
 */
void ChappyBase::Obj::createSmokeEffect() { }

/*
 * --INFO--
 * Address:	801165C8
 * Size:	000008
 */
void ChappyBase::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_80517A98@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801165D0
 * Size:	000014
 */
void EnemyBase::@740 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -740
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	801165E4
 * Size:	000014
 */
void EnemyBase::@740 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -740
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	801165F8
 * Size:	000014
 */
void EnemyBase::@740 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -740
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8011660C
 * Size:	000014
 */
void EnemyBase::@740 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -740
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80116620
 * Size:	000014
 */
void EnemyBase::@740 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -740
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80116634
 * Size:	000014
 */
void EnemyBase::@740 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -740
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}
} // namespace Game
