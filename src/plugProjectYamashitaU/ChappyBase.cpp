#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9THanachoN
    __vt__Q23efx9THanachoN:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9THanachoNFv"
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
        .4byte __dt__Q23efx9THanachoNFv
    .global __vt__Q34Game10ChappyBase3Obj
    __vt__Q34Game10ChappyBase3Obj:
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
        .4byte __dt__Q34Game10ChappyBase3ObjFv
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
        .4byte 0
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
        .4byte 0
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

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518058
    lbl_80518058:
        .4byte 0x61676F00
    .global lbl_8051805C
    lbl_8051805C:
        .4byte 0x00000000
    .global lbl_80518060
    lbl_80518060:
        .4byte 0x3E4CCCCD
    .global lbl_80518064
    lbl_80518064:
        .4byte 0x3D99999A
    .global lbl_80518068
    lbl_80518068:
        .4byte 0x418C0000
    .global lbl_8051806C
    lbl_8051806C:
        .4byte 0x40A00000
    .global lbl_80518070
    lbl_80518070:
        .float 1.0
    .global lbl_80518074
    lbl_80518074:
        .4byte 0x42C80000
    .global lbl_80518078
    lbl_80518078:
        .4byte 0x42000000
    .global lbl_8051807C
    lbl_8051807C:
        .float 0.25
    .global lbl_80518080
    lbl_80518080:
        .4byte 0x6B616D75
        .4byte 0x31000000
    .global lbl_80518088
    lbl_80518088:
        .4byte 0x6B616D75
        .4byte 0x32000000
    .global lbl_80518090
    lbl_80518090:
        .4byte 0x6B616D75
        .4byte 0x33000000
    .global lbl_80518098
    lbl_80518098:
        .4byte 0x6B616D75
        .4byte 0x34000000
    .global lbl_805180A0
    lbl_805180A0:
        .4byte 0x6B616D75
        .4byte 0x35000000
    .global lbl_805180A8
    lbl_805180A8:
        .4byte 0x420C0000
    .global lbl_805180AC
    lbl_805180AC:
        .4byte 0x6173694C
        .4byte 0x00000000
    .global lbl_805180B4
    lbl_805180B4:
        .4byte 0x41200000
    .global lbl_805180B8
    lbl_805180B8:
        .4byte 0x61736952
        .4byte 0x00000000
    .global lbl_805180C0
    lbl_805180C0:
        .4byte 0x3F400000
    .global lbl_805180C4
    lbl_805180C4:
        .4byte 0x68656164
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012A950
 * Size:	00015C
 */
ChappyBase::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8012A990
	addi     r0, r31, 0x2e4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e4(r31)
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)

lbl_8012A990:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game10ChappyBase3Obj@ha
	addi     r4, r31, 0x2e4
	addi     r3, r3, __vt__Q34Game10ChappyBase3Obj@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r5, r3, 0x1b0
	addi     r6, r3, 0x334
	addi     r3, r31, 0x2c0
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r4, r5, r4
	stw      r4, 0xc(r5)
	stw      r0, 0x2bc(r31)
	bl       __ct__10MouthSlotsFv
	addi     r3, r31, 0x2d0
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8012AA34
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

lbl_8012AA34:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8012AA68
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10ChappyBase3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10ChappyBase3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8012AA68:
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
 * Address:	8012AAAC
 * Size:	000044
 */
void ChappyBase::Obj::birth(Vector3f&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_80518058@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2c8(r31)
	lfs      f0, lbl_8051805C@sda21(r2)
	stfs     f0, 0x2cc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012AAF0
 * Size:	000004
 */
void ChappyBase::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8012AAF4
 * Size:	000080
 */
void ChappyBase::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lfs      f1, lbl_80518060@sda21(r2)
	li       r4, 0
	lfs      f0, lbl_80518064@sda21(r2)
	li       r0, 1
	stfs     f1, 0x264(r31)
	mr       r3, r31
	stfs     f0, 0x268(r31)
	stb      r4, 0x26c(r31)
	stb      r0, 8(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x320(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 7
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
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
 * Address:	8012AB74
 * Size:	000034
 */
void ChappyBase::Obj::doUpdate()
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
 * Address:	8012ABA8
 * Size:	000004
 */
void ChappyBase::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8012ABAC
 * Size:	000020
 */
void ChappyBase::Obj::doDebugDraw(Graphics&)
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
 * Address:	8012ABCC
 * Size:	0000C8
 */
void ChappyBase::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2c8(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	cmplwi   r3, 0
	beq      lbl_8012AC40
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_80518068@sda21(r2)
	stfs     f1, 0(r31)
	lfs      f2, lbl_8051806C@sda21(r2)
	stfs     f3, 4(r31)
	stfs     f4, 8(r31)
	lfs      f1, 4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 4(r31)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_8012AC58
	stfs     f1, 4(r31)
	b        lbl_8012AC58

lbl_8012AC40:
	lfs      f0, 0x18c(r30)
	stfs     f0, 0(r31)
	lfs      f0, 0x190(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0x194(r30)
	stfs     f0, 8(r31)

lbl_8012AC58:
	lfs      f2, lbl_8051805C@sda21(r2)
	lfs      f0, lbl_80518070@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f1, lbl_80518074@sda21(r2)
	stfs     f0, 0x10(r31)
	lfs      f0, lbl_80518078@sda21(r2)
	stfs     f2, 0x14(r31)
	stfs     f1, 0x18(r31)
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
 * Address:	8012AC94
 * Size:	000040
 */
void ChappyBase::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_8012ACB0
	lfs      f2, lbl_80518070@sda21(r2)
	b        lbl_8012ACBC

lbl_8012ACB0:
	lfs      f0, lbl_8051807C@sda21(r2)
	lfs      f2, lbl_80518060@sda21(r2)
	fmuls    f1, f1, f0

lbl_8012ACBC:
	bl       addDamage__Q24Game9EnemyBaseFff
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012ACD4
 * Size:	000150
 */
void ChappyBase::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	li       r30, 0
	lwz      r29, 0(r4)
	cmplwi   r29, 0
	beq      lbl_8012ADFC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012ADB8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x1f0(r29)
	mr       r31, r3
	cmplwi   r0, 2
	beq      lbl_8012ADB0
	cmpwi    r31, 0x26
	beq      lbl_8012ADB0
	cmpwi    r31, 0x28
	beq      lbl_8012ADB0
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012ADFC
	cmpwi    r31, 1
	beq      lbl_8012ADFC
	cmpwi    r31, 2
	beq      lbl_8012ADFC
	cmpwi    r31, 0x2d
	beq      lbl_8012ADFC
	cmpwi    r31, 0x2b
	beq      lbl_8012ADFC
	cmpwi    r31, 0x2c
	beq      lbl_8012ADFC
	cmpwi    r31, 0x2a
	beq      lbl_8012ADFC
	cmpwi    r31, 0
	beq      lbl_8012ADFC
	cmpwi    r31, 0x25
	beq      lbl_8012ADFC
	cmpwi    r31, 0x4d
	beq      lbl_8012ADFC

lbl_8012ADB0:
	li       r30, 1
	b        lbl_8012ADFC

lbl_8012ADB8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012ADF8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012ADFC
	li       r30, 1
	b        lbl_8012ADFC

lbl_8012ADF8:
	li       r30, 1

lbl_8012ADFC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8012AE10
	mr       r3, r27
	mr       r4, r28
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent

lbl_8012AE10:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012AE24
 * Size:	000050
 */
void ChappyBase::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	bne      lbl_8012AE60
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x328(r12)
	mtctr    r12
	bctrl

lbl_8012AE60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012AE74
 * Size:	000004
 */
void ChappyBase::Obj::doFinishStoneState() { }

/*
 * --INFO--
 * Address:	8012AE78
 * Size:	000064
 */
void ChappyBase::Obj::getOffsetForMapCollision()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2c8(r4)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0xc(r3)
	lfs      f0, 0x18c(r31)
	lfs      f3, 0x2c(r3)
	lfs      f1, 0x194(r31)
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051805C@sda21(r2)
	fsubs    f3, f3, f1
	stfs     f2, 0(r30)
	stfs     f0, 4(r30)
	stfs     f3, 8(r30)
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
 * Address:	8012AEDC
 * Size:	000028
 */
void ChappyBase::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 5
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
 * Address:	8012AF04
 * Size:	0000DC
 */
void ChappyBase::Obj::initMouthSlots()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 5
	addi     r3, r30, 0x2c0
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 0
	addi     r6, r2, lbl_80518080@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 1
	addi     r6, r2, lbl_80518088@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 2
	addi     r6, r2, lbl_80518090@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 3
	addi     r6, r2, lbl_80518098@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 4
	addi     r6, r2, lbl_805180A0@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_805180A8@sda21(r2)
	li       r31, 0
	b        lbl_8012AFB4

lbl_8012AFA0:
	mr       r4, r31
	addi     r3, r30, 0x2c0
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_8012AFB4:
	lwz      r0, 0x2c0(r30)
	cmpw     r31, r0
	blt      lbl_8012AFA0
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012AFE0
 * Size:	000064
 */
void ChappyBase::Obj::initWalkSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2d0
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2d0
	lfs      f1, lbl_805180B4@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_805180AC@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2d0
	lfs      f1, lbl_805180B4@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_805180B8@sda21
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
 * Address:	8012B044
 * Size:	000008
 */
void ChappyBase::Obj::getWalkSmokeEffectMgr()
{
	/*
	addi     r3, r3, 0x2d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B04C
 * Size:	000200
 */
void ChappyBase::Obj::isWakeup()
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r31, 0
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x2a
	beq      lbl_8012B0A0
	b        lbl_8012B1FC

lbl_8012B0A0:
	lwz      r5, 0xc0(r29)
	addi     r3, r1, 0x48
	lfs      f0, 0x18c(r29)
	addi     r4, r1, 0x38
	lfs      f1, 0x870(r5)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x3c(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x40(r1)
	stfs     f1, 0x44(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	addi     r3, r1, 0x68
	addi     r4, r1, 0x48
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x68
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8012B1E8

lbl_8012B0E8:
	addi     r3, r1, 0x68
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012B1E0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8012B144
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012B1E0

lbl_8012B144:
	mr       r4, r30
	lwz      r5, 0xc0(r29)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14
	lfs      f29, 0x870(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
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
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f31, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r1)
	fmuls    f0, f29, f29
	fsubs    f1, f1, f31
	fmuls    f1, f1, f1
	fmadds   f1, f30, f30, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8012B1E0
	li       r31, 1
	b        lbl_8012B214

lbl_8012B1E0:
	addi     r3, r1, 0x68
	bl       next__Q24Game12CellIteratorFv

lbl_8012B1E8:
	addi     r3, r1, 0x68
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012B0E8
	b        lbl_8012B214

lbl_8012B1FC:
	lwz      r3, 0x1e0(r29)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	bne      lbl_8012B210
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8012B214

lbl_8012B210:
	li       r31, 1

lbl_8012B214:
	mr       r3, r31
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B24C
 * Size:	0000B0
 */
void ChappyBase::Obj::setCollEvent(Game::CollEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012B290
	lwz      r31, 0(r30)

lbl_8012B290:
	cmplwi   r31, 0
	beq      lbl_8012B2D4
	beq      lbl_8012B2E0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012B2E0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012B2E0

lbl_8012B2D4:
	mr       r3, r29
	mr       r4, r30
	bl       setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent

lbl_8012B2E0:
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
 * Address:	8012B2FC
 * Size:	0000C8
 */
void ChappyBase::Obj::flickStatePikmin()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r31, 0xc0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x53c(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
	"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
	"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
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
 * Address:	8012B3C4
 * Size:	0001A4
 */
void ChappyBase::Obj::flickAttackBomb()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	lfs      f3, 0x18c(r3)
	stfs     f3, 0x34(r1)
	lfs      f2, 0x190(r3)
	stfs     f2, 0x38(r1)
	lfs      f1, 0x194(r3)
	stfs     f1, 0x3c(r1)
	lfs      f0, 0x240(r3)
	fadds    f3, f3, f0
	stfs     f3, 0x34(r1)
	lfs      f0, 0x244(r3)
	fadds    f2, f2, f0
	stfs     f2, 0x38(r1)
	lfs      f0, 0x248(r3)
	fadds    f1, f1, f0
	stfs     f1, 0x3c(r1)
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_8012B4DC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	li       r5, 0
	lwz      r8, 0x34(r1)
	lis      r3, __vt__Q23efx5TBase@ha
	stfs     f0, 0x38(r1)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lwz      r6, 0x3c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r7, 0x38(r1)
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r8, 8(r1)
	addi     r11, r4, __vt__Q23efx3Arg@l
	lfs      f0, lbl_80518070@sda21(r2)
	lis      r4, __vt__Q23efx8ArgScale@ha
	stw      r7, 0xc(r1)
	addi     r9, r3, __vt__Q23efx8TSimple3@l
	lfs      f3, 8(r1)
	lis      r3, __vt__Q23efx13TEnemyDownWat@ha
	stw      r6, 0x10(r1)
	li       r8, 0x54
	lfs      f2, 0xc(r1)
	li       r7, 0x55
	stw      r0, 0x40(r1)
	li       r6, 0x56
	lfs      f1, 0x10(r1)
	addi     r10, r4, __vt__Q23efx8ArgScale@l
	stw      r11, 0x58(r1)
	addi     r0, r3, __vt__Q23efx13TEnemyDownWat@l
	addi     r3, r1, 0x40
	addi     r4, r1, 0x58
	stw      r9, 0x40(r1)
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f1, 0x64(r1)
	stw      r10, 0x58(r1)
	stfs     f0, 0x68(r1)
	sth      r8, 0x44(r1)
	sth      r7, 0x46(r1)
	sth      r6, 0x48(r1)
	stw      r5, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x40(r1)
	bl       create__Q23efx13TEnemyDownWatFPQ23efx3Arg
	b        lbl_8012B544

lbl_8012B4DC:
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f0, lbl_80518070@sda21(r2)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	li       r6, 0x53
	li       r5, 0
	stfs     f0, 0x20(r1)
	lfs      f0, lbl_805180C0@sda21(r2)
	addi     r3, r1, 0x14
	stw      r4, 0x24(r1)
	addi     r4, r1, 0x24
	stfs     f3, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x20(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_8012B544:
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x34
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B568
 * Size:	000060
 */
void ChappyBase::Obj::flickAttackFail()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r31, 0xc0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x53c(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
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
 * Address:	8012B5C8
 * Size:	000024
 */
void ChappyBase::Obj::eatAttackPikmin()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	bl
	"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B5EC
 * Size:	0000B0
 */
void ChappyBase::Obj::createEffect()
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
	beq      lbl_8012B684
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
	lis      r4, __vt__Q23efx9THanachoN@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9THanachoN@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x8b
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

lbl_8012B684:
	stw      r3, 0x2d8(r31)
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
 * Address:	8012B69C
 * Size:	000084
 */
TChaseMtx::~TChaseMtx()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012B704
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012B6F4
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8012B6F4:
	extsh.   r0, r31
	ble      lbl_8012B704
	mr       r3, r30
	bl       __dl__FPv

lbl_8012B704:
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
 * Address:	8012B720
 * Size:	000050
 */
void ChappyBase::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_805180C4@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_8012B75C
	bl       getWorldMatrix__Q28SysShape5JointFv
	cmplwi   r3, 0
	beq      lbl_8012B75C
	lwz      r4, 0x2d8(r31)
	stw      r3, 0x10(r4)

lbl_8012B75C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B770
 * Size:	000034
 */
void ChappyBase::Obj::startSleepEffect()
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
 * Address:	8012B7A4
 * Size:	000030
 */
void ChappyBase::Obj::finishSleepEffect()
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8012B7D4
 * Size:	00009C
 */
THanachoN::~THanachoN()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012B854
	lis      r3, __vt__Q23efx9THanachoN@ha
	addi     r3, r3, __vt__Q23efx9THanachoN@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012B844
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8012B844
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8012B844:
	extsh.   r0, r31
	ble      lbl_8012B854
	mr       r3, r30
	bl       __dl__FPv

lbl_8012B854:
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
 * Address:	8012B870
 * Size:	000004
 */
void TSync::doExecuteAfter(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	8012B874
 * Size:	000010
 */
void TSync::startDemoDrawOff()
{
	/*
	lbz      r0, 0xe(r3)
	ori      r0, r0, 1
	stb      r0, 0xe(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B884
 * Size:	000010
 */
void TSync::endDemoDrawOn()
{
	/*
	lbz      r0, 0xe(r3)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0xe(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B894
 * Size:	000008
 */
void TSync::@4 @executeAfter(JPABaseEmitter*)
{
	/*
	addi     r3, r3, -4
	b        executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	*/
}

/*
 * --INFO--
 * Address:	8012B89C
 * Size:	000008
 */
void TSync::@4 @execute(JPABaseEmitter*)
{
	/*
	addi     r3, r3, -4
	b        execute__Q23efx5TSyncFP14JPABaseEmitter
	*/
}

/*
 * --INFO--
 * Address:	8012B8A4
 * Size:	000008
 */
THanachoN::@4 @~THanachoN()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx9THanachoNFv
	*/
}
} // namespace efx
