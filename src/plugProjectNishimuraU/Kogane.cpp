#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804853D8
    lbl_804853D8:
        .4byte 0x00000001
        .4byte 0x00000001
        .4byte 0x00000001
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game6Kogane3Obj
    __vt__Q34Game6Kogane3Obj:
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
        .4byte onInit__Q34Game6Kogane3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game6Kogane3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game6Kogane3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game6Kogane3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game6Kogane3ObjFv
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
        .4byte getShadowParam__Q34Game6Kogane3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game6Kogane3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Kogane3ObjFv .4byte
   doUpdateCommon__Q34Game6Kogane3ObjFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Kogane3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte 0 .4byte
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
        .4byte getEnemyTypeID__Q34Game6Kogane3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game6Kogane3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game6Kogane3ObjFv .4byte
   doFinishStoneState__Q34Game6Kogane3ObjFv .4byte
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
   wallCallback__Q34Game6Kogane3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game6Kogane3ObjFv .4byte doEndMovie__Q34Game6Kogane3ObjFv
        .4byte setFSM__Q34Game6Kogane3ObjFPQ34Game6Kogane3FSM
        .4byte createItem__Q34Game6Kogane3ObjFv
        .4byte resetFartTimer__Q34Game6Kogane3ObjFv
        .4byte startBodyEffect__Q34Game6Kogane3ObjFv
        .4byte finishBodyEffect__Q34Game6Kogane3ObjFv
        .4byte createFartEffect__Q34Game6Kogane3ObjFv
        .4byte effectDrawOn__Q34Game6Kogane3ObjFv
        .4byte effectDrawOff__Q34Game6Kogane3ObjFv
        .4byte createPressSENormal__Q34Game6Kogane3ObjFv
        .4byte createPressSESpecial__Q34Game6Kogane3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@732@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@732@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051AC28
    lbl_8051AC28:
        .4byte 0x38D1B717
    .global lbl_8051AC2C
    lbl_8051AC2C:
        .4byte 0x00000000
    .global lbl_8051AC30
    lbl_8051AC30:
        .4byte 0xC6480000
    .global lbl_8051AC34
    lbl_8051AC34:
        .4byte 0x40A00000
    .global lbl_8051AC38
    lbl_8051AC38:
        .float 1.0
    .global lbl_8051AC3C
    lbl_8051AC3C:
        .4byte 0x41700000
    .global lbl_8051AC40
    lbl_8051AC40:
        .4byte 0x626F6479
        .4byte 0x00000000
    .global lbl_8051AC48
    lbl_8051AC48:
        .4byte 0x41200000
    .global lbl_8051AC4C
    lbl_8051AC4C:
        .4byte 0x447A0000
    .global lbl_8051AC50
    lbl_8051AC50:
        .float 0.1
    .global lbl_8051AC54
    lbl_8051AC54:
        .4byte 0x40000000
    .global lbl_8051AC58
    lbl_8051AC58:
        .4byte 0x47000000
    .global lbl_8051AC5C
    lbl_8051AC5C:
        .4byte 0x40490FDB
    .global lbl_8051AC60
    lbl_8051AC60:
        .4byte 0x3BB60B61
    .global lbl_8051AC64
    lbl_8051AC64:
        .4byte 0xC3A2F983
    .global lbl_8051AC68
    lbl_8051AC68:
        .4byte 0x43A2F983
        .4byte 0x00000000
    .global lbl_8051AC70
    lbl_8051AC70:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051AC78
    lbl_8051AC78:
        .4byte 0x437A0000
    .global lbl_8051AC7C
    lbl_8051AC7C:
        .4byte 0x46480000
    .global lbl_8051AC80
    lbl_8051AC80:
        .4byte 0x40060A92
    .global lbl_8051AC84
    lbl_8051AC84:
        .4byte 0x42480000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8025DC8C
 * Size:	000130
 */
Kogane::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8025DCCC
	addi     r0, r31, 0x2dc
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2dc(r31)
	stw      r0, 0x2e0(r31)
	stw      r0, 0x2e4(r31)

lbl_8025DCCC:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game6Kogane3Obj@ha
	addi     r0, r31, 0x2dc
	addi     r5, r3, __vt__Q34Game6Kogane3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x320
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8025DD58
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game6Kogane14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game6Kogane14ProperAnimator@l
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

lbl_8025DD58:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8025DD8C
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game6Kogane3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game6Kogane3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8025DD8C:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
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
 * Address:	8025DDBC
 * Size:	000004
 */
void Kogane::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8025DDC0
 * Size:	000130
 */
void Kogane::Obj::onInit(Game::CreatureInitArg*)
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
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051AC28@sda21(r2)
	stfs     f0, 0x1f8(r31)
	stfs     f0, 0x168(r31)
	stfs     f0, 0x16c(r31)
	stfs     f0, 0x170(r31)
	lwz      r3, 0x114(r31)
	lfs      f1, 0x1f8(r31)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       resetAppearTimer__Q34Game6Kogane3ObjFv
	lfs      f1, lbl_8051AC2C@sda21(r2)
	mr       r3, r31
	fmr      f2, f1
	bl       resetMoveTimer__Q34Game6Kogane3ObjFff
	lfs      f0, lbl_8051AC28@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2cc(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8025DEC8
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_8025DEC8
	lfs      f0, lbl_8051AC30@sda21(r2)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x2bc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_8025DEDC

lbl_8025DEC8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl

lbl_8025DEDC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025DEF0
 * Size:	000004
 */
void Kogane::Obj::resetFartTimer() { }

/*
 * --INFO--
 * Address:	8025DEF4
 * Size:	000050
 */
void Kogane::Obj::onKill(Game::CreatureKillArg*)
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
	lwz      r12, 0x308(r12)
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
 * Address:	8025DF44
 * Size:	000034
 */
void Kogane::Obj::doUpdate()
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
 * Address:	8025DF78
 * Size:	000020
 */
void Kogane::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025DF98
 * Size:	000004
 */
void Kogane::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8025DF9C
 * Size:	000020
 */
void Kogane::Obj::doDebugDraw(Graphics&)
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
 * Address:	8025DFBC
 * Size:	00004C
 */
void Kogane::Obj::setFSM(Game::Kogane::FSM*)
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
 * Address:	8025E008
 * Size:	0000A0
 */
void Kogane::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r4, r30
	addi     r3, r1, 8
	bl       getBodyJointPos__Q34Game6Kogane3ObjFv
	lfs      f0, 8(r1)
	lfs      f3, lbl_8051AC34@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051AC2C@sda21(r2)
	lfs      f2, 0xc(r1)
	lfs      f0, lbl_8051AC38@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f2, lbl_8051AC3C@sda21(r2)
	lfs      f4, 0x10(r1)
	stfs     f4, 8(r31)
	lfs      f4, 4(r31)
	fsubs    f3, f4, f3
	stfs     f3, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lfs      f1, 4(r31)
	lfs      f0, 0x190(r30)
	fsubs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x18(r31)
	lfs      f0, 0x2cc(r30)
	fmuls    f0, f2, f0
	stfs     f0, 0x1c(r31)
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
 * Address:	8025E0A8
 * Size:	00006C
 */
void Kogane::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r3
	beq      lbl_8025E0F8
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E0F8
	fmr      f1, f31
	mr       r3, r31
	bl       transitDamageState__Q34Game6Kogane3ObjFf
	b        lbl_8025E0FC

lbl_8025E0F8:
	li       r3, 0

lbl_8025E0FC:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E114
 * Size:	00003C
 */
void Kogane::Obj::wallCallback(const Game::MoveInfo&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, 0x5c(r4)
	stw      r0, 0x24(r1)
	lfs      f1, 0x60(r4)
	lfs      f0, 0x64(r4)
	addi     r4, r1, 8
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "setTargetPosition__Q34Game6Kogane3ObjFP10Vector3<f>"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E150
 * Size:	000060
 */
void Kogane::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8025E198
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E198
	lfs      f1, lbl_8051AC2C@sda21(r2)
	mr       r3, r31
	bl       transitDamageState__Q34Game6Kogane3ObjFf
	b        lbl_8025E19C

lbl_8025E198:
	li       r3, 0

lbl_8025E19C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E1B0
 * Size:	00006C
 */
void Kogane::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r3
	beq      lbl_8025E200
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E200
	fmr      f1, f31
	mr       r3, r31
	bl       transitDamageState__Q34Game6Kogane3ObjFf
	b        lbl_8025E204

lbl_8025E200:
	li       r3, 0

lbl_8025E204:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E21C
 * Size:	000050
 */
void Kogane::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x100
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E26C
 * Size:	000050
 */
void Kogane::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E2BC
 * Size:	00002C
 */
void Kogane::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x314(r12)
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
 * Address:	8025E2E8
 * Size:	000004
 */
void Kogane::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	8025E2EC
 * Size:	00002C
 */
void Kogane::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x310(r12)
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
 * Address:	8025E318
 * Size:	000004
 */
void Kogane::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	8025E31C
 * Size:	000084
 */
void Kogane::Obj::transitDamageState(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8025E34C
	lfs      f2, lbl_8051AC38@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_8025E38C

lbl_8025E34C:
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_8025E360
	cmpwi    r3, 3
	bne      lbl_8025E388

lbl_8025E360:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8025E38C

lbl_8025E388:
	li       r3, 0

lbl_8025E38C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E3A0
 * Size:	000108
 */
void Kogane::Obj::transitDisappear()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x2c0(r31)
	cmpwi    r0, 0
	bne      lbl_8025E490
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8025E490
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8025E490
	lwz      r0, randMapMgr__Q24Game4Cave@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8025E490
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	li       r8, 0
	addi     r4, r3, __vt__Q24Game15CreatureInitArg@l
	li       r0, -1
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	stw      r4, 8(r1)
	addi     r3, r3, __vt__Q24Game13PelletInitArg@l
	li       r7, 0xff
	li       r6, 1
	stw      r3, 8(r1)
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	stb      r8, 0x24(r1)
	addi     r5, r31, 0x250
	sth      r8, 0x1c(r1)
	stb      r7, 0x1e(r1)
	stw      r8, 0x20(r1)
	stb      r8, 0x1f(r1)
	stb      r6, 0xc(r1)
	stb      r8, 0x25(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stb      r8, 0x26(r1)
	stb      r8, 0x27(r1)
	bl
makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E490
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	addi     r4, r31, 0x18c
	addi     r5, r31, 0x1fc
	bl       "getBaseGenData__Q34Game4Cave10RandMapMgrFP10Vector3<f>Pf"
	lfs      f0, 0x18c(r31)
	li       r3, 0
	stfs     f0, 0x198(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x19c(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x1a0(r31)
	b        lbl_8025E494

lbl_8025E490:
	li       r3, 1

lbl_8025E494:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E4A8
 * Size:	000050
 */
void Kogane::Obj::getBodyJointPos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r4)
	addi     r4, r2, lbl_8051AC40@sda21
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
 * Address:	8025E4F8
 * Size:	0000A4
 */
void Kogane::Obj::koganeScaleUp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r4, 0xc0(r3)
	lfs      f2, 0x2cc(r3)
	lfs      f0, 0x934(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8025E584
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051AC48@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x2cc(r3)
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x934(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8025E560
	stfs     f0, 0x2cc(r3)
	li       r31, 1
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r3)

lbl_8025E560:
	lfs      f0, 0x2cc(r3)
	stfs     f0, 0x1f8(r3)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)
	lwz      r4, 0x114(r3)
	lfs      f1, 0x2cc(r3)
	lwz      r3, 0(r4)
	bl       setScale__8CollPartFf

lbl_8025E584:
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
 * Address:	8025E59C
 * Size:	00008C
 */
void Kogane::Obj::koganeScaleDown()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051AC28@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f3, 0x2cc(r3)
	fcmpo    cr0, f3, f2
	ble      lbl_8025E610
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051AC48@sda21(r2)
	lfs      f0, 0x54(r4)
	fnmsubs  f0, f1, f0, f3
	stfs     f0, 0x2cc(r3)
	lfs      f0, 0x2cc(r3)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8025E5EC
	stfs     f2, 0x2cc(r3)
	li       r31, 1

lbl_8025E5EC:
	lfs      f0, 0x2cc(r3)
	stfs     f0, 0x1f8(r3)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)
	lwz      r4, 0x114(r3)
	lfs      f1, 0x2cc(r3)
	lwz      r3, 0(r4)
	bl       setScale__8CollPartFf

lbl_8025E610:
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
 * Address:	8025E628
 * Size:	0001AC
 */
void Kogane::Obj::setTargetPosition(Vector3f*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	cmplwi   r4, 0
	mr       r31, r3
	beq      lbl_8025E67C
	lfs      f2, lbl_8051AC4C@sda21(r2)
	lfs      f1, 0(r4)
	lfs      f0, 0x18c(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f1, 8(r4)
	lfs      f0, 0x194(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)
	b        lbl_8025E7B8

lbl_8025E67C:
	lfs      f1, 0x2cc(r31)
	lfs      f0, lbl_8051AC50@sda21(r2)
	lfs      f31, lbl_8051AC2C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8025E6D8
	lwz      r3, 0xc0(r31)
	lfs      f1, lbl_8051AC54@sda21(r2)
	lfs      f0, 0x90c(r3)
	fmuls    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051AC70@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051AC58@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x90c(r3)
	fmuls    f2, f31, f2
	fdivs    f1, f2, f1
	fsubs    f31, f1, f0

lbl_8025E6D8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051AC60@sda21(r2)
	lfs      f4, lbl_8051AC5C@sda21(r2)
	fmuls    f2, f0, f31
	lfs      f0, lbl_8051AC2C@sda21(r2)
	lfs      f3, lbl_8051AC4C@sda21(r2)
	fmadds   f4, f4, f2, f1
	fcmpo    cr0, f4, f0
	bge      lbl_8025E738
	lfs      f0, lbl_8051AC64@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8025E75C

lbl_8025E738:
	lfs      f0, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8025E75C:
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmadds   f1, f3, f2, f1
	fcmpo    cr0, f4, f0
	stfs     f1, 0x2d0(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d4(r31)
	bge      lbl_8025E780
	fneg     f4, f4

lbl_8025E780:
	lfs      f0, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051AC4C@sda21(r2)
	fmuls    f1, f4, f0
	lfs      f0, 0x194(r31)
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)

lbl_8025E7B8:
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
 * Address:	8025E7D4
 * Size:	000078
 */
void Kogane::Obj::resetAppearTimer()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x844(r3)
	lfs      f0, 0x81c(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051AC70@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051AC58@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E84C
 * Size:	000080
 */
void Kogane::Obj::isAppear()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r4, 0
	lwz      r5, 0xc0(r3)
	lfs      f31, 0x3d4(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E88C
	li       r3, 1
	b        lbl_8025E8B0

lbl_8025E88C:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E8AC
	li       r3, 1
	b        lbl_8025E8B0

lbl_8025E8AC:
	li       r3, 0

lbl_8025E8B0:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025E8CC
 * Size:	000084
 */
void Kogane::Obj::resetMoveTimer(float, float)
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
	fmr      f30, f1
	mr       r31, r3
	fmr      f31, f2
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	fsubs    f1, f31, f30
	lfd      f3, lbl_8051AC70@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051AC58@sda21(r2)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x2c8(r31)
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
 * Address:	8025E950
 * Size:	000194
 */
void Kogane::Obj::createTreasureItem()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x2c0(r3)
	cmpwi    r0, 0
	bne      lbl_8025EACC
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	li       r8, 0
	addi     r4, r3, __vt__Q24Game15CreatureInitArg@l
	li       r0, -1
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	stw      r4, 0x20(r1)
	addi     r3, r3, __vt__Q24Game13PelletInitArg@l
	li       r7, 0xff
	li       r6, 1
	stw      r3, 0x20(r1)
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x20
	stb      r8, 0x3c(r1)
	addi     r5, r31, 0x250
	sth      r8, 0x34(r1)
	stb      r7, 0x36(r1)
	stw      r8, 0x38(r1)
	stb      r8, 0x37(r1)
	stb      r6, 0x24(r1)
	stb      r8, 0x3d(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x40(r1)
	stb      r8, 0x3e(r1)
	stb      r8, 0x3f(r1)
	bl
makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025EACC
	lbz      r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
	li       r3, 2
	sth      r3, 0x34(r1)
	cmplwi   r0, 0
	beq      lbl_8025E9F8
	li       r0, 1
	stb      r0, 0x3f(r1)

lbl_8025E9F8:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x20
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	stw      r3, 0x254(r31)
	lwz      r0, 0x254(r31)
	cmplwi   r0, 0
	beq      lbl_8025EACC
	lfs      f1, lbl_8051AC2C@sda21(r2)
	addi     r4, r2, lbl_8051AC40@sda21
	lfs      f0, lbl_8051AC78@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	addi     r4, r1, 8
	lfs      f1, 0x1c(r3)
	li       r5, 0
	lfs      f0, 0xc(r3)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r3, 0x254(r31)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x254(r31)
	addi     r4, r1, 0x14
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x254(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x1fc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       exit__Q25Radar3MgrFPQ24Game15TPositionObject
	lwz      r3, 0x28c(r31)
	li       r4, 0x5810
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051AC7C@sda21(r2)
	li       r0, 0x3200
	li       r3, 1
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2c0(r31)
	b        lbl_8025EAD0

lbl_8025EACC:
	li       r3, 0

lbl_8025EAD0:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025EAE4
 * Size:	000294
 */
void Kogane::Obj::createPellet(int, int)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	lis      r6, lbl_804853D8@ha
	mr       r29, r4
	lwzu     r4, lbl_804853D8@l(r6)
	mr       r25, r3
	mr       r30, r5
	addi     r26, r1, 0x20
	lwz      r3, 4(r6)
	li       r27, 0
	lwz      r0, 8(r6)
	li       r28, 0
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x28(r1)

lbl_8025EB48:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r28
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025EB68
	stw      r28, 0(r26)
	addi     r26, r26, 4
	addi     r27, r27, 1

lbl_8025EB68:
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_8025EB48
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f3, lbl_8051AC80@sda21(r2)
	stw      r3, 0x5c(r1)
	addi     r4, r2, lbl_8051AC40@sda21
	lfd      f2, lbl_8051AC70@sda21(r2)
	fadds    f29, f3, f1
	stw      r0, 0x58(r1)
	lwz      r3, 0x174(r25)
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fdivs    f28, f3, f0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	xoris    r27, r27, 0x8000
	lfs      f1, 0x1c(r3)
	addi     r28, r1, 0x20
	lfs      f0, 0xc(r3)
	li       r31, 0
	lfd      f30, lbl_8051AC70@sda21(r2)
	lis      r26, 0x4330
	stfs     f0, 0x14(r1)
	lfs      f31, lbl_8051AC58@sda21(r2)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	b        lbl_8025ED3C

lbl_8025EBF8:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r26, 0x58(r1)
	mr       r4, r29
	addi     r3, r1, 0x2c
	stw      r0, 0x5c(r1)
	lfd      f0, 0x58(r1)
	stw      r27, 0x64(r1)
	fsubs    f0, f0, f30
	stw      r26, 0x60(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x60(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	slwi     r0, r0, 2
	lwzx     r5, r28, r0
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x2c
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r25, r3, r3
	beq      lbl_8025ED38
	addi     r4, r1, 0x2c
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r25
	addi     r4, r1, 0x14
	lwz      r12, 0(r25)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	fadds    f29, f29, f28
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmr      f1, f29
	fcmpo    cr0, f29, f0
	bge      lbl_8025EC94
	fneg     f1, f29

lbl_8025EC94:
	lfs      f2, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AC2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051AC84@sda21(r2)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f1
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_8025ECF4
	lfs      f0, lbl_8051AC64@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8025ED0C

lbl_8025ECF4:
	fmuls    f0, f29, f2
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8025ED0C:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051AC78@sda21(r2)
	stfs     f4, 0x10(r1)
	mr       r3, r25
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0(r25)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8025ED38:
	addi     r31, r31, 1

lbl_8025ED3C:
	cmpw     r31, r30
	blt      lbl_8025EBF8
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025ED78
 * Size:	0001DC
 */
void Kogane::Obj::createDoping(unsigned char, int)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stmw     r26, 0x48(r1)
	lwz      r12, 0(r3)
	mr       r26, r3
	mr       r30, r4
	mr       r31, r5
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f3, lbl_8051AC80@sda21(r2)
	stw      r3, 0x2c(r1)
	addi     r4, r2, lbl_8051AC40@sda21
	lfd      f2, lbl_8051AC70@sda21(r2)
	fadds    f31, f3, f1
	stw      r0, 0x28(r1)
	lwz      r3, 0x174(r26)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f2
	fdivs    f30, f3, f0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lfs      f1, 0x1c(r3)
	lis      r4, __vt__Q34Game9ItemHoney7InitArg@ha
	lfs      f0, 0xc(r3)
	addi     r28, r5, __vt__Q24Game15CreatureInitArg@l
	addi     r29, r4, __vt__Q34Game9ItemHoney7InitArg@l
	li       r27, 0
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x24(r1)
	b        lbl_8025EF28

lbl_8025EE20:
	stw      r28, 8(r1)
	li       r0, 0
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	stw      r29, 8(r1)
	stb      r30, 0xc(r1)
	stb      r0, 0xd(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r26, r3, r3
	beq      lbl_8025EF24
	addi     r4, r1, 8
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r26
	addi     r4, r1, 0x1c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	fadds    f31, f31, f30
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmr      f1, f31
	fcmpo    cr0, f31, f0
	bge      lbl_8025EE80
	fneg     f1, f31

lbl_8025EE80:
	lfs      f2, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AC2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051AC84@sda21(r2)
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_8025EEE0
	lfs      f0, lbl_8051AC64@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8025EEF8

lbl_8025EEE0:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8025EEF8:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051AC78@sda21(r2)
	stfs     f4, 0x18(r1)
	mr       r3, r26
	addi     r4, r1, 0x10
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8025EF24:
	addi     r27, r27, 1

lbl_8025EF28:
	cmpw     r27, r31
	blt      lbl_8025EE20
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lmw      r26, 0x48(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025EF54
 * Size:	0000BC
 */
Kogane::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_8025EFF4
	lis      r3, __vt__Q34Game6Kogane3Obj@ha
	addi     r0, r31, 0x2dc
	addi     r4, r3, __vt__Q34Game6Kogane3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x320
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8025EFE4
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

lbl_8025EFE4:
	extsh.   r0, r30
	ble      lbl_8025EFF4
	mr       r3, r31
	bl       __dl__FPv

lbl_8025EFF4:
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
 * Address:	8025F010
 * Size:	000004
 */
void Kogane::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8025F014
 * Size:	000004
 */
void Kogane::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8025F018
 * Size:	000008
 */
u32 Kogane::Obj::getEnemyTypeID() { return 0x9; }
} // namespace Game
