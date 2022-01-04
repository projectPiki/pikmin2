#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048A250
    lbl_8048A250:
        .4byte 0x3234362D
        .4byte 0x426F6D62
        .4byte 0x53617261
        .4byte 0x69000000
    .global lbl_8048A260
    lbl_8048A260:
        .4byte 0x626F6479
        .4byte 0x5F6A6F69
        .4byte 0x6E743100
    .global lbl_8048A26C
    lbl_8048A26C:
        .4byte 0x6B616D75
        .4byte 0x5F6A6E74
        .4byte 0x31000000
    .global lbl_8048A278
    lbl_8048A278:
        .4byte 0x6B757469
        .4byte 0x5F6A6F69
        .4byte 0x6E743100
        .4byte 0x62616C6C
        .4byte 0x6F6F6E31
        .4byte 0x00000000
        .4byte 0x62616C6C
        .4byte 0x6F6F6E32
        .4byte 0x00000000
        .4byte 0x62616C6C
        .4byte 0x6F6F6E33
        .4byte 0x00000000
        .4byte 0x62616C6C
        .4byte 0x6F6F6E34
        .4byte 0x00000000
        .4byte 0x62616C6C
        .4byte 0x6F6F6E35
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx11TBsaraiDead
    __vt__Q23efx11TBsaraiDead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx12TBsaraiSupli
    __vt__Q23efx12TBsaraiSupli:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx12TBsaraiSupliFv"
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
        .4byte __dt__Q23efx12TBsaraiSupliFv
    .global __vt__Q34Game9BombSarai3Obj
    __vt__Q34Game9BombSarai3Obj:
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
        .4byte onInit__Q34Game9BombSarai3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game9BombSarai3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game9BombSarai3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game9BombSarai3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game9BombSarai3ObjFv
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
        .4byte getShadowParam__Q34Game9BombSarai3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game9BombSarai3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game9BombSarai3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game9BombSarai3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game9BombSarai3ObjFR8Graphics
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
        .4byte getEnemyTypeID__Q34Game9BombSarai3ObjFv
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
   "bombCallBack__Q34Game9BombSarai3ObjFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q34Game9BombSarai3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game9BombSarai3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game9BombSarai3ObjFv .4byte
   doStartMovie__Q34Game9BombSarai3ObjFv .4byte
   doEndMovie__Q34Game9BombSarai3ObjFv .4byte
   setFSM__Q34Game9BombSarai3ObjFPQ34Game9BombSarai3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@740@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>" .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C1F8
    lbl_8051C1F8:
        .4byte 0x00000000
    .global lbl_8051C1FC
    lbl_8051C1FC:
        .4byte 0x41700000
    .global lbl_8051C200
    lbl_8051C200:
        .4byte 0x40A00000
    .global lbl_8051C204
    lbl_8051C204:
        .float 1.0
    .global lbl_8051C208
    lbl_8051C208:
        .4byte 0x42480000
    .global lbl_8051C20C
    lbl_8051C20C:
        .4byte 0x418C0000
    .global lbl_8051C210
    lbl_8051C210:
        .float 0.5
    .global lbl_8051C214
    lbl_8051C214:
        .4byte 0x40C00000
    .global lbl_8051C218
    lbl_8051C218:
        .4byte 0xC3A2F983
    .global lbl_8051C21C
    lbl_8051C21C:
        .4byte 0x43A2F983
    .global lbl_8051C220
    lbl_8051C220:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051C228
    lbl_8051C228:
        .4byte 0x47000000
    .global lbl_8051C22C
    lbl_8051C22C:
        .4byte 0x40490FDB
    .global lbl_8051C230
    lbl_8051C230:
        .4byte 0x3FC90FDB
    .global lbl_8051C234
    lbl_8051C234:
        .4byte 0x40C90FDB
    .global lbl_8051C238
    lbl_8051C238:
        .4byte 0x40800000
    .global lbl_8051C23C
    lbl_8051C23C:
        .float 0.25
    .global lbl_8051C240
    lbl_8051C240:
        .4byte 0x3F666666
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802B27CC
 * Size:	000138
 */
BombSarai::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802B280C
	addi     r0, r31, 0x2e4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e4(r31)
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)

lbl_802B280C:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game9BombSarai3Obj@ha
	addi     r0, r31, 0x2e4
	addi     r5, r3, __vt__Q34Game9BombSarai3Obj@l
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
	beq      lbl_802B2898
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game9BombSarai14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game9BombSarai14ProperAnimator@l
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

lbl_802B2898:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802B28CC
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game9BombSarai3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game9BombSarai3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802B28CC:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game9BombSarai3ObjFv
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
 * Address:	802B2904
 * Size:	000004
 */
void BombSarai::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802B2908
 * Size:	000098
 */
void BombSarai::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802B2944
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_802B2944
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)

lbl_802B2944:
	li       r0, -1
	lfs      f0, lbl_8051C1F8@sda21(r2)
	stw      r0, 0x2dc(r31)
	li       r0, 0
	mr       r3, r31
	stfs     f0, 0x2c4(r31)
	stfs     f0, 0x2c8(r31)
	stfs     f0, 0x2c0(r31)
	stw      r0, 0x2d8(r31)
	bl       setupEffect__Q34Game9BombSarai3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
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
 * Address:	802B29A0
 * Size:	000050
 */
void BombSarai::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, "zero__10Vector3<f>"@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, "zero__10Vector3<f>"@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	bl       "throwBomb__Q34Game9BombSarai3ObjFR10Vector3<f>"
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
 * Address:	802B29F0
 * Size:	0000A4
 */
void BombSarai::Obj::doUpdate()
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
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B2A80
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B2A80
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50e5
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802B2A80:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2A94
 * Size:	000004
 */
void BombSarai::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802B2A98
 * Size:	000020
 */
void BombSarai::Obj::doDebugDraw(Graphics&)
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
 * Address:	802B2AB8
 * Size:	00004C
 */
void BombSarai::Obj::setFSM(Game::BombSarai::FSM*)
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
 * Address:	802B2B04
 * Size:	0000D4
 */
void BombSarai::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048A260@ha
	addi     r0, r3, lbl_8048A260@l
	lwz      r3, 0x174(r30)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	mr       r3, r30
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B2B80
	lfs      f1, 4(r31)
	lfs      f0, lbl_8051C1FC@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)
	b        lbl_802B2B90

lbl_802B2B80:
	lfs      f1, lbl_8051C200@sda21(r2)
	lfs      f0, 0x190(r30)
	fadds    f0, f1, f0
	stfs     f0, 4(r31)

lbl_802B2B90:
	lfs      f1, lbl_8051C1F8@sda21(r2)
	lfs      f0, lbl_8051C204@sda21(r2)
	stfs     f1, 0xc(r31)
	lfs      f2, lbl_8051C208@sda21(r2)
	stfs     f0, 0x10(r31)
	lfs      f0, lbl_8051C20C@sda21(r2)
	stfs     f1, 0x14(r31)
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x81c(r3)
	fadds    f1, f2, f1
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
 * Address:	802B2BD8
 * Size:	00003C
 */
void BombSarai::Obj::bombCallBack(Game::Creature*, Vector3f&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_802B2C00
	lfs      f2, lbl_8051C204@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802B2C04

lbl_802B2C00:
	li       r3, 0

lbl_802B2C04:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2C14
 * Size:	00008C
 */
void BombSarai::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lwz      r3, 0xc0(r31)
	lfs      f1, lbl_8051C210@sda21(r2)
	lfs      f0, 0x104(r3)
	lfs      f2, 0x200(r31)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_802B2C6C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 9
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_802B2C8C

lbl_802B2C6C:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802B2C8C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2CA0
 * Size:	000034
 */
void BombSarai::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game9BombSarai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2CD4
 * Size:	000034
 */
void BombSarai::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game9BombSarai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D08
 * Size:	000028
 */
void BombSarai::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xb
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
 * Address:	802B2D30
 * Size:	000020
 */
void BombSarai::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game9BombSarai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D50
 * Size:	000020
 */
void BombSarai::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game9BombSarai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D70
 * Size:	0001A0
 */
void BombSarai::Obj::setHeightVelocity(bool)
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
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r30, r4
	lwz      r12, 4(r3)
	addi     r4, r31, 0x18c
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r30, 0x18
	fmr      f31, f1
	lfs      f30, lbl_8051C214@sda21(r2)
	bne      lbl_802B2E30
	lwz      r3, 0x1f4(r31)
	cmpwi    r3, 0
	bge      lbl_802B2DE0
	li       r0, 0
	b        lbl_802B2DF0

lbl_802B2DE0:
	cmpwi    r3, 5
	li       r0, 5
	bgt      lbl_802B2DF0
	mr       r0, r3

lbl_802B2DF0:
	xoris    r3, r0, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 8(r1)
	lfd      f1, lbl_8051C220@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f4, lbl_8051C200@sda21(r2)
	fsubs    f1, f0, f1
	lfs      f0, 0x8e4(r3)
	lfs      f2, 0x8bc(r3)
	fsubs    f3, f4, f1
	fdivs    f1, f1, f4
	fdivs    f3, f3, f4
	fmuls    f0, f1, f0
	fmadds   f30, f3, f2, f0

lbl_802B2E30:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x190(r31)
	lfs      f29, 0x81c(r3)
	lfs      f0, 0x894(r3)
	fsubs    f1, f1, f31
	fsubs    f0, f29, f0
	fcmpo    cr0, f1, f0
	ble      lbl_802B2EC4
	mr       r3, r31
	bl       addPitchRatio__Q34Game9BombSarai3ObjFv
	lfs      f2, 0x2c0(r31)
	lfs      f0, lbl_8051C1F8@sda21(r2)
	lwz      r3, 0xc0(r31)
	fcmpo    cr0, f2, f0
	lfs      f1, 0x894(r3)
	bge      lbl_802B2E9C
	lfs      f0, lbl_8051C218@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802B2EC0

lbl_802B2E9C:
	lfs      f0, lbl_8051C21C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802B2EC0:
	fmadds   f29, f1, f0, f29

lbl_802B2EC4:
	fadds    f1, f31, f29
	lfs      f0, 0x190(r31)
	fsubs    f0, f1, f0
	fmuls    f0, f30, f0
	stfs     f0, 0x1cc(r31)
	lfs      f0, 0x190(r31)
	fsubs    f1, f0, f31
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
 * Address:	802B2F10
 * Size:	0001E8
 */
void BombSarai::Obj::setRandTarget()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_802B2F84
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_802B2F84
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051C220@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051C208@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_8051C228@sda21(r2)
	fsubs    f1, f1, f3
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fadds    f31, f2, f0
	b        lbl_802B2FCC

lbl_802B2F84:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051C220@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051C228@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x384(r3)
	fmuls    f2, f30, f2
	fdivs    f1, f2, f1
	fadds    f31, f0, f1

lbl_802B2FCC:
	lfs      f3, 0x18c(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x198(r31)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f2, 0x194(r31)
	lfs      f0, 0x1a0(r31)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051C220@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_8051C22C@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051C228@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C230@sda21(r2)
	lfs      f0, lbl_8051C1F8@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f5, f2, f1
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802B3044
	fneg     f1, f5

lbl_802B3044:
	lfs      f3, lbl_8051C21C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C1F8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 0x1a0(r31)
	fcmpo    cr0, f5, f0
	lfs      f4, 0x19c(r31)
	fctiwz   f0, f2
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f31, f0, f1
	bge      lbl_802B30A8
	lfs      f0, lbl_8051C218@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802B30C0

lbl_802B30A8:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802B30C0:
	lfs      f0, 0x198(r31)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2cc(r31)
	stfs     f4, 0x2d0(r31)
	stfs     f2, 0x2d4(r31)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B30F8
 * Size:	000038
 */
void BombSarai::Obj::addPitchRatio()
{
	/*
	lwz      r5, 0xc0(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f3, 0x86c(r5)
	lfs      f2, 0x54(r4)
	lfs      f1, 0x2c0(r3)
	lfs      f0, lbl_8051C234@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x2c0(r3)
	lfs      f1, 0x2c0(r3)
	fcmpo    cr0, f1, f0
	blelr
	fsubs    f0, f1, f0
	stfs     f0, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B3130
 * Size:	0000C8
 */
void BombSarai::Obj::supplyBomb()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x2d8(r3)
	cmplwi   r0, 0
	bne      lbl_802B31E0
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x24
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_802B31E0
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x14(r1)
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802B31E0
	stw      r3, 0x2d8(r30)
	li       r4, 0
	lwz      r3, 0x2d8(r30)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r4, lbl_8048A26C@ha
	lwz      r3, 0x174(r30)
	addi     r4, r4, lbl_8048A26C@l
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x2d8(r30)
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lwz      r3, 0x2d8(r30)
	stw      r30, 0x2cc(r3)

lbl_802B31E0:
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
 * Address:	802B31F8
 * Size:	000078
 */
void BombSarai::Obj::throwBomb(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2d8(r3)
	cmplwi   r3, 0
	beq      lbl_802B3250
	bl       endCapture__Q24Game8CreatureFv
	lwz      r3, 0x2d8(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2d8(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1fc(r3)
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x1a8(r3)

lbl_802B3250:
	li       r0, 0
	stw      r0, 0x2d8(r30)
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
 * Address:	802B3270
 * Size:	000070
 */
void BombSarai::Obj::getAttackablePikmin()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x198(r3)
	lwz      r5, 0xc0(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	lfs      f0, 0x35c(r5)
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B32CC
	lfs      f1, 0x424(r5)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	b        lbl_802B32D0

lbl_802B32CC:
	li       r3, 0

lbl_802B32D0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B32E0
 * Size:	000144
 */
void BombSarai::Obj::getNextStateOnHeight()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lfs      f0, lbl_8051C1F8@sda21(r2)
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802B331C
	li       r3, 8
	b        lbl_802B3404

lbl_802B331C:
	lwz      r31, 0x1f4(r30)
	cmpwi    r31, 0
	beq      lbl_802B3400
	li       r4, 3
	bl       getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
	cmpwi    r3, 0
	ble      lbl_802B3340
	li       r3, 8
	b        lbl_802B3404

lbl_802B3340:
	addic.   r0, r31, -1
	bge      lbl_802B3350
	li       r3, 0
	b        lbl_802B3364

lbl_802B3350:
	addi     r0, r31, -1
	li       r3, 4
	cmpwi    r0, 4
	bgt      lbl_802B3364
	mr       r3, r0

lbl_802B3364:
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051C220@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051C238@sda21(r2)
	fsubs    f5, f0, f2
	lfs      f3, lbl_8051C23C@sda21(r2)
	lfs      f0, 0x934(r3)
	lfs      f2, 0x90c(r3)
	fsubs    f4, f1, f5
	fmuls    f1, f5, f3
	fmuls    f3, f4, f3
	fmuls    f0, f1, f0
	fmadds   f31, f3, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051C220@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051C204@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_8051C228@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802B33F8
	lwz      r3, 0x2d8(r30)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r3, r3, 0xb
	b        lbl_802B3404

lbl_802B33F8:
	li       r3, 8
	b        lbl_802B3404

lbl_802B3400:
	li       r3, -1

lbl_802B3404:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B3424
 * Size:	0000B0
 */
void BombSarai::Obj::createEffect()
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
	beq      lbl_802B34BC
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
	lis      r4, __vt__Q23efx12TBsaraiSupli@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx12TBsaraiSupli@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x14
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

lbl_802B34BC:
	stw      r3, 0x2e0(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B34D4
 * Size:	000044
 */
void BombSarai::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048A278@ha
	addi     r4, r3, lbl_8048A278@l
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x2e0(r31)
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
 * Address:	802B3518
 * Size:	000034
 */
void BombSarai::Obj::createSupliEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
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
 * Address:	802B354C
 * Size:	00011C
 */
void BombSarai::Obj::createBalloonEffect(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	cmpwi    r4, 0
	lis      r5, lbl_8048A250@ha
	stw      r0, 0x34(r1)
	addi     r5, r5, lbl_8048A250@l
	bne      lbl_802B357C
	lwz      r3, 0x174(r3)
	addi     r4, r5, 0x34
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	b        lbl_802B35E0

lbl_802B357C:
	cmpwi    r4, 1
	bne      lbl_802B3598
	lwz      r3, 0x174(r3)
	addi     r4, r5, 0x40
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	b        lbl_802B35E0

lbl_802B3598:
	cmpwi    r4, 2
	bne      lbl_802B35B4
	lwz      r3, 0x174(r3)
	addi     r4, r5, 0x4c
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	b        lbl_802B35E0

lbl_802B35B4:
	cmpwi    r4, 3
	bne      lbl_802B35D0
	lwz      r3, 0x174(r3)
	addi     r4, r5, 0x58
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	b        lbl_802B35E0

lbl_802B35D0:
	lwz      r3, 0x174(r3)
	addi     r4, r5, 0x64
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv

lbl_802B35E0:
	cmplwi   r3, 0
	beq      lbl_802B3658
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f0, 0xc(r3)
	lfs      f1, 0x1c(r3)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 0x2c(r3)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	li       r6, 0
	stw      r0, 0x18(r1)
	lis      r4, __vt__Q23efx11TBsaraiDead@ha
	lis      r3, __vt__Q23efx3Arg@ha
	li       r8, 0x12
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0x13
	stw      r5, 0x18(r1)
	addi     r5, r4, __vt__Q23efx11TBsaraiDead@l
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	sth      r8, 0x1c(r1)
	sth      r7, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_802B3658:
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B3668
 * Size:	000024
 */
void BombSarai::Obj::createDownEffect(float)
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
 * Address:	802B368C
 * Size:	000030
 */
void BombSarai::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
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
 * Address:	802B36BC
 * Size:	000030
 */
void BombSarai::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
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

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	802B36EC
 * Size:	00009C
 */
TBsaraiSupli::~TBsaraiSupli()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802B376C
	lis      r3, __vt__Q23efx12TBsaraiSupli@ha
	addi     r3, r3, __vt__Q23efx12TBsaraiSupli@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802B375C
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802B375C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802B375C:
	extsh.   r0, r31
	ble      lbl_802B376C
	mr       r3, r30
	bl       __dl__FPv

lbl_802B376C:
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
 * Address:	802B3788
 * Size:	000004
 */
void BombSarai::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802B378C
 * Size:	000004
 */
void BombSarai::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802B3790
 * Size:	000008
 */
void BombSarai::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051C240@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B3798
 * Size:	000008
 */
u32 BombSarai::Obj::getEnemyTypeID() { return 0x3A; }

namespace efx {

/*
 * --INFO--
 * Address:	802B37A0
 * Size:	000008
 */
TBsaraiSupli::@4 @~TBsaraiSupli()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx12TBsaraiSupliFv
	*/
}
} // namespace efx

} // namespace efx
