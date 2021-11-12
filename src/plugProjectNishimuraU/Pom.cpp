#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484CD8
    lbl_80484CD8:
        .4byte 0x68616E61
        .4byte 0x62697261
        .4byte 0x315F7600
    .global lbl_80484CE4
    lbl_80484CE4:
        .4byte 0x6A6E745F
        .4byte 0x63656E74
        .4byte 0x65720000
    .global lbl_80484CF0
    lbl_80484CF0:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx8TPonDead
    __vt__Q23efx8TPonDead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game3Pom3Obj
    __vt__Q34Game3Pom3Obj:
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
        .4byte onInit__Q34Game3Pom3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game3Pom3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game3Pom3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game3Pom3ObjFv
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
        .4byte isLivingThing__Q34Game3Pom3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game3Pom3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game3Pom3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game3Pom3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game3Pom3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game3Pom3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game3Pom3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q34Game3Pom3ObjFv .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game3Pom3ObjFv
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
        .4byte getEnemyTypeID__Q34Game3Pom3ObjFv
        .4byte getMouthSlots__Q34Game3Pom3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart .4byte
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
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game3Pom3ObjFv .4byte doStartMovie__Q24Game9EnemyBaseFv
        .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game3Pom3ObjFPQ34Game3Pom3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@752@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@752@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@752@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@752@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@752@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@752@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A9A8
    lbl_8051A9A8:
        .4byte 0x00000000
    .global lbl_8051A9AC
    lbl_8051A9AC:
        .4byte 0x40000000
    .global lbl_8051A9B0
    lbl_8051A9B0:
        .float 1.0
    .global lbl_8051A9B4
    lbl_8051A9B4:
        .float 0.1
    .global lbl_8051A9B8
    lbl_8051A9B8:
        .4byte 0x42480000
    .global lbl_8051A9BC
    lbl_8051A9BC:
        .4byte 0x40C90FDB
    .global lbl_8051A9C0
    lbl_8051A9C0:
        .4byte 0x47000000
    .global lbl_8051A9C4
    lbl_8051A9C4:
        .4byte 0x42DC0000
    .global lbl_8051A9C8
    lbl_8051A9C8:
        .4byte 0xC3A2F983
    .global lbl_8051A9CC
    lbl_8051A9CC:
        .4byte 0x43A2F983
    .global lbl_8051A9D0
    lbl_8051A9D0:
        .4byte 0x443B8000
    .global lbl_8051A9D4
    lbl_8051A9D4:
        .4byte 0xBF800000
    .global lbl_8051A9D8
    lbl_8051A9D8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A9E0
    lbl_8051A9E0:
        .float 0.7
    .global lbl_8051A9E4
    lbl_8051A9E4:
        .4byte 0x40A00000
    .global lbl_8051A9E8
    lbl_8051A9E8:
        .4byte 0x42700000
    .global lbl_8051A9EC
    lbl_8051A9EC:
        .4byte 0x3F4CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	802547A4
 * Size:	000138
 */
Pom::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802547E4
	addi     r0, r31, 0x2f0
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	stw      r0, 0x2f8(r31)

lbl_802547E4:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game3Pom3Obj@ha
	addi     r0, r31, 0x2f0
	addi     r5, r3, __vt__Q34Game3Pom3Obj@l
	addi     r3, r31, 0x2d0
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__10MouthSlotsFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80254878
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game3Pom14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game3Pom14ProperAnimator@l
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

lbl_80254878:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802548AC
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game3Pom3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game3Pom3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802548AC:
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
 * Address:	802548DC
 * Size:	000004
 */
void Pom::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802548E0
 * Size:	000114
 */
void Pom::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	mr       r3, r31
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025492C
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 8
	stw      r0, 0x1e0(r31)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	b        lbl_8025494C

lbl_8025492C:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv

lbl_8025494C:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x14, 0x12
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r31
	bl       setPomParms__Q34Game3Pom3ObjFv
	li       r0, 0
	lfs      f0, lbl_8051A9A8@sda21(r2)
	stb      r0, 0x2c0(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	stb      r0, 0x2c1(r31)
	stw      r0, 0x2c4(r31)
	stfs     f0, 0x2e4(r31)
	stfs     f0, 0x2e8(r31)
	lwz      r3, 0x2bc(r31)
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
 * Address:	802549F4
 * Size:	000088
 */
void Pom::Obj::doUpdate()
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
	addi     r3, r31, 0x2d0
	bl       update__10MouthSlotsFv
	lwz      r3, 0x1e0(r31)
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_80254A68
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_80254A68
	rlwinm.  r0, r3, 0, 0xd, 0xd
	beq      lbl_80254A60
	ori      r0, r3, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	b        lbl_80254A68

lbl_80254A60:
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv

lbl_80254A68:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80254A7C
 * Size:	000110
 */
void Pom::Obj::changeMaterial()
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
	lis      r3, lbl_80484CD8@ha
	lwz      r5, 0x174(r28)
	addi     r4, r3, lbl_80484CD8@l
	lwz      r31, 8(r5)
	lwz      r29, 4(r31)
	lwz      r3, 0x64(r29)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r29)
	rlwinm   r3, r3, 2, 0xe, 0x1d
	lha      r0, 0x2dc(r28)
	addi     r5, r1, 8
	lwzx     r3, r4, r3
	li       r4, 0
	sth      r0, 8(r1)
	lha      r0, 0x2de(r28)
	sth      r0, 0xa(r1)
	lha      r0, 0x2e0(r28)
	sth      r0, 0xc(r1)
	lha      r0, 0x2e2(r28)
	sth      r0, 0xe(r1)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, j3dSys@ha
	li       r28, 0
	addi     r30, r3, j3dSys@l
	b        lbl_80254B5C

lbl_80254B24:
	lwz      r4, 0xc0(r31)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r30)
	lwz      r3, 0x60(r29)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_80254B5C:
	lhz      r0, 0x5c(r29)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_80254B24
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
 * Address:	80254B8C
 * Size:	000004
 */
void Pom::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80254B90
 * Size:	000020
 */
void Pom::Obj::doDebugDraw(Graphics&)
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
 * Address:	80254BB0
 * Size:	00004C
 */
void Pom::Obj::setFSM(Game::Pom::FSM*)
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
 * Address:	80254BFC
 * Size:	000044
 */
void Pom::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f3, lbl_8051A9AC@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f2, lbl_8051A9A8@sda21(r2)
	lfs      f0, 0x190(r3)
	lfs      f1, lbl_8051A9B0@sda21(r2)
	fadds    f3, f3, f0
	lfs      f0, lbl_8051A9B4@sda21(r2)
	stfs     f3, 4(r4)
	lfs      f3, 0x194(r3)
	stfs     f3, 8(r4)
	stfs     f2, 0xc(r4)
	stfs     f1, 0x10(r4)
	stfs     f2, 0x14(r4)
	stfs     f0, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80254C40
 * Size:	00012C
 */
void Pom::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	or.      r29, r4, r4
	beq      lbl_80254D4C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254D4C
	cmplwi   r30, 0
	beq      lbl_80254D4C
	lis      r4, 0x736C6F74@ha
	addi     r3, r30, 0x30
	addi     r4, r4, 0x736C6F74@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254D4C
	lbz      r0, 0x2c1(r31)
	cmplwi   r0, 0
	beq      lbl_80254D4C
	lwz      r3, 0x2c4(r31)
	lwz      r0, 0x2c8(r31)
	cmpw     r3, r0
	bge      lbl_80254D4C
	addi     r3, r31, 0x2d0
	li       r4, 0
	bl       getSlot__10MouthSlotsFi
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game14InteractAttack@ha
	addi     r0, r5, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051A9B0@sda21(r2)
	stw      r0, 8(r1)
	addi     r5, r4, __vt__Q24Game14InteractAttack@l
	lis      r4, __vt__Q24Game15InteractSwallow@ha
	li       r0, 0
	stw      r5, 8(r1)
	addi     r5, r4, __vt__Q24Game15InteractSwallow@l
	addi     r4, r1, 8
	stw      r3, 0x14(r1)
	mr       r3, r29
	stw      r31, 0xc(r1)
	stfs     f0, 0x10(r1)
	stw      r5, 8(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254D34
	lwz      r3, 0x2c4(r31)
	addi     r0, r3, 1
	stw      r0, 0x2c4(r31)

lbl_80254D34:
	lfs      f0, lbl_8051A9A8@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2e4(r31)
	bl       createSwingSmokeEffect__Q34Game3Pom3ObjFv
	li       r3, 1
	b        lbl_80254D50

lbl_80254D4C:
	li       r3, 0

lbl_80254D50:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80254D6C
 * Size:	00002C
 */
void Pom::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x27c(r12)
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
 * Address:	80254D98
 * Size:	0000A8
 */
void Pom::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0(r4)
	cmplwi   r3, 0
	beq      lbl_80254E28
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80254E10
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80254E10
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254E28

lbl_80254E10:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl

lbl_80254E28:
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
 * Address:	80254E40
 * Size:	00004C
 */
void Pom::Obj::initMouthSlots()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2d0
	bl       alloc__10MouthSlotsFi
	lis      r3, lbl_80484CE4@ha
	lwz      r5, 0x174(r31)
	addi     r6, r3, lbl_80484CE4@l
	li       r4, 0
	addi     r3, r31, 0x2d0
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80254E8C
 * Size:	000510
 */
void Pom::Obj::setPomParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_80255108
	bge      lbl_80254ED4
	cmpwi    r3, 4
	beq      lbl_80254F98
	bge      lbl_80255050
	cmpwi    r3, 3
	bge      lbl_80254EE4
	b        lbl_8025532C

lbl_80254ED4:
	cmpwi    r3, 8
	beq      lbl_80255278
	bge      lbl_8025532C
	b        lbl_802551C0

lbl_80254EE4:
	li       r4, 0
	stw      r4, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80254F4C
	bge      lbl_80254F0C
	cmpwi    r0, 0
	beq      lbl_80254F1C
	bge      lbl_80254F34
	b        lbl_8025532C

lbl_80254F0C:
	cmpwi    r0, 4
	beq      lbl_80254F7C
	bge      lbl_8025532C
	b        lbl_80254F64

lbl_80254F1C:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F34:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80254F4C:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F64:
	li       r3, 0x1c
	li       r0, 0x34
	sth      r3, 0x2dc(r31)
	sth      r4, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F7C:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F98:
	li       r0, 1
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255000
	bge      lbl_80254FC0
	cmpwi    r0, 0
	beq      lbl_80254FD0
	bge      lbl_80254FE8
	b        lbl_8025532C

lbl_80254FC0:
	cmpwi    r0, 4
	beq      lbl_80255034
	bge      lbl_8025532C
	b        lbl_80255018

lbl_80254FD0:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254FE8:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80255000:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255018:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255034:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255050:
	li       r0, 2
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_802550B8
	bge      lbl_80255078
	cmpwi    r0, 0
	beq      lbl_80255088
	bge      lbl_802550A0
	b        lbl_8025532C

lbl_80255078:
	cmpwi    r0, 4
	beq      lbl_802550EC
	bge      lbl_8025532C
	b        lbl_802550D0

lbl_80255088:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802550A0:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_802550B8:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802550D0:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802550EC:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255108:
	li       r0, 3
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255170
	bge      lbl_80255130
	cmpwi    r0, 0
	beq      lbl_80255140
	bge      lbl_80255158
	b        lbl_8025532C

lbl_80255130:
	cmpwi    r0, 4
	beq      lbl_802551A4
	bge      lbl_8025532C
	b        lbl_80255188

lbl_80255140:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255158:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80255170:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255188:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802551A4:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802551C0:
	li       r0, 4
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255228
	bge      lbl_802551E8
	cmpwi    r0, 0
	beq      lbl_802551F8
	bge      lbl_80255210
	b        lbl_8025532C

lbl_802551E8:
	cmpwi    r0, 4
	beq      lbl_8025525C
	bge      lbl_8025532C
	b        lbl_80255240

lbl_802551F8:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255210:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80255228:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255240:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_8025525C:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255278:
	li       r0, 1
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_802552E0
	bge      lbl_802552A0
	cmpwi    r0, 0
	beq      lbl_802552B0
	bge      lbl_802552C8
	b        lbl_8025532C

lbl_802552A0:
	cmpwi    r0, 4
	beq      lbl_80255314
	bge      lbl_8025532C
	b        lbl_802552F8

lbl_802552B0:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802552C8:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_802552E0:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802552F8:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255314:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)

lbl_8025532C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 8
	beq      lbl_80255368
	lwz      r4, 0xc0(r31)
	li       r3, 1
	li       r0, 0
	lwz      r4, 0x81c(r4)
	stw      r4, 0x2c8(r31)
	stw      r3, 0x2cc(r31)
	sth      r0, 0x2e2(r31)
	b        lbl_80255388

lbl_80255368:
	lwz      r3, 0xc0(r31)
	li       r0, 0xff
	lwz      r3, 0x844(r3)
	stw      r3, 0x2c8(r31)
	lwz      r3, 0xc0(r31)
	lwz      r3, 0x86c(r3)
	stw      r3, 0x2cc(r31)
	sth      r0, 0x2e2(r31)

lbl_80255388:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025539C
 * Size:	000008
 */
void Pom::Obj::getEnemyTypeID()
{
	/*
	lwz      r3, 0x2ec(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802553A4
 * Size:	0004AC
 */
void Pom::Obj::shotPikmin()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r28, r3
	addi     r3, r1, 0x10
	lwz      r12, 0(r28)
	mr       r4, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r28
	lfs      f0, lbl_8051A9B8@sda21(r2)
	addi     r3, r1, 0x64
	lfs      f3, 0x10(r1)
	lfs      f1, 0x18(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x3c(r1)
	stfs     f3, 0x38(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x3c(r1)
	lwz      r5, 0x1f4(r28)
	lwz      r0, 0x2cc(r28)
	mullw    r30, r5, r0
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x64
	cmplwi   r0, 0
	stw      r4, 0x28(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_80255458
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80255678

lbl_80255458:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_802554C4

lbl_80255470:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80255678
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_802554C4:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80255470
	b        lbl_80255678

lbl_802554E4:
	lwz      r3, 0x30(r1)
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
	beq      lbl_802555BC
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802555BC
	lbz      r3, 0x2b8(r31)
	cmpwi    r3, 5
	bge      lbl_8025556C
	bl       dec__Q24Game8BirthMgrFi
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 8
	beq      lbl_8025556C
	lbz      r3, 0x2b8(r31)
	lwz      r0, 0x2d8(r28)
	cmpw     r3, r0
	bne      lbl_8025556C
	lwz      r3, 0x2c4(r28)
	addi     r0, r3, -1
	stw      r0, 0x2c4(r28)

lbl_8025556C:
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractKill@ha
	stw      r0, 0x1c(r1)
	addi     r4, r4, __vt__Q24Game15CreatureKillArg@l
	addi     r5, r3, __vt__Q24Game12InteractKill@l
	addi     r0, r1, 8
	li       r6, 1
	stw      r4, 8(r1)
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r6, 0xc(r1)
	stw      r28, 0x20(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802555BC:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_802555E8
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80255678

lbl_802555E8:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_8025565C

lbl_80255608:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80255678
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_8025565C:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80255608

lbl_80255678:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_802554E4
	li       r31, 0
	b        lbl_80255808

lbl_802556A0:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80255804
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x84(r1)
	lfd      f2, lbl_8051A9D8@sda21(r2)
	stw      r0, 0x80(r1)
	lfs      f3, lbl_8051A9BC@sda21(r2)
	lfd      f0, 0x80(r1)
	lfs      f1, lbl_8051A9C0@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f0, lbl_8051A9A8@sda21(r2)
	lfs      f2, lbl_8051A9C4@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f3, f3, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80255728
	lfs      f0, lbl_8051A9C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8025574C

lbl_80255728:
	lfs      f0, lbl_8051A9CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8025574C:
	lfs      f0, lbl_8051A9A8@sda21(r2)
	fmuls    f4, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80255760
	fneg     f3, f3

lbl_80255760:
	lfs      f0, lbl_8051A9CC@sda21(r2)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	lwz      r9, 0x2d8(r28)
	addi     r5, r3, __vt__Q24Game15CreatureInitArg@l
	fmuls    f0, f3, f0
	li       r0, 0
	lis      r6, sincosTable___5JMath@ha
	lfs      f1, lbl_8051A9D0@sda21(r2)
	lis      r4, __vt__Q24Game11ItemInitArg@ha
	stw      r5, 0x44(r1)
	fctiwz   f2, f0
	addi     r7, r6, sincosTable___5JMath@l
	addi     r6, r4, __vt__Q24Game11ItemInitArg@l
	lis      r3, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f0, lbl_8051A9D4@sda21(r2)
	addi     r5, r3, __vt__Q34Game12ItemPikihead7InitArg@l
	stfd     f2, 0x98(r1)
	mr       r3, r29
	lfs      f3, lbl_8051A9C4@sda21(r2)
	addi     r4, r1, 0x44
	stw      r6, 0x44(r1)
	lwz      r8, 0x9c(r1)
	stw      r5, 0x44(r1)
	rlwinm   r6, r8, 3, 0x12, 0x1c
	add      r6, r7, r6
	stw      r9, 0x48(r1)
	lfs      f2, 4(r6)
	stfs     f1, 0x50(r1)
	fmuls    f2, f3, f2
	stfs     f4, 0x54(r1)
	stfs     f2, 0x4c(r1)
	stb      r0, 0x58(r1)
	stw      r0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r29
	addi     r4, r1, 0x38
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x2d8(r28)
	bl       inc__Q24Game8BirthMgrFi

lbl_80255804:
	addi     r31, r31, 1

lbl_80255808:
	cmpw     r31, r30
	blt      lbl_802556A0
	mr       r3, r28
	bl       createShotEffect__Q34Game3Pom3ObjFv
	mr       r3, r28
	li       r4, 0
	bl       setZukanVisible__Q24Game9EnemyBaseFb
	addi     r3, r1, 0x64
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255850
 * Size:	00019C
 */
void Pom::Obj::changePomColor()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 8
	bne      lbl_802559D8
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2e8(r31)
	lfs      f0, 0x8bc(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802559C8
	lis      r3, lbl_80484CF0@ha
	lwz      r4, 0x2d8(r31)
	addi     r7, r3, lbl_80484CF0@l
	addi     r30, r1, 8
	lwz      r6, 0(r7)
	addi     r29, r4, 3
	lwz      r5, 4(r7)
	addi     r28, r4, 1
	lwz      r4, 8(r7)
	lwz      r3, 0xc(r7)
	lwz      r0, 0x10(r7)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)
	b        lbl_802559BC

lbl_802558D4:
	cmpwi    r28, 2
	mr       r27, r28
	ble      lbl_802558E4
	addi     r27, r28, -3

lbl_802558E4:
	slwi     r0, r27, 2
	lwz      r3, playData__4Game@sda21(r13)
	lwzx     r4, r30, r0
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802559B8
	stw      r27, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255960
	bge      lbl_80255920
	cmpwi    r0, 0
	beq      lbl_80255930
	bge      lbl_80255948
	b        lbl_802559AC

lbl_80255920:
	cmpwi    r0, 4
	beq      lbl_80255994
	bge      lbl_802559AC
	b        lbl_80255978

lbl_80255930:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_802559AC

lbl_80255948:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_802559AC

lbl_80255960:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_802559AC

lbl_80255978:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_802559AC

lbl_80255994:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)

lbl_802559AC:
	lfs      f0, lbl_8051A9A8@sda21(r2)
	stfs     f0, 0x2e8(r31)
	b        lbl_802559D8

lbl_802559B8:
	addi     r28, r28, 1

lbl_802559BC:
	cmpw     r28, r29
	blt      lbl_802558D4
	b        lbl_802559D8

lbl_802559C8:
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2e8(r31)

lbl_802559D8:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802559EC
 * Size:	000184
 */
void Pom::Obj::createSwingSmokeEffect()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_80255AE4
	lfs      f2, 0x18c(r3)
	lfs      f1, 0x190(r3)
	lfs      f0, 0x194(r3)
	mr       r3, r0
	lwz      r12, 0(r3)
	stfs     f2, 0x34(r1)
	lwz      r12, 0x14(r12)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
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
	lfs      f0, lbl_8051A9E0@sda21(r2)
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
	b        lbl_80255B60

lbl_80255AE4:
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f4, 0x194(r3)
	lfs      f2, 0x190(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f3, 0x18c(r3)
	lis      r3, __vt__Q23efx8TSimple1@ha
	lfs      f0, lbl_8051A9E4@sda21(r2)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	stw      r4, 0x14(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f1, lbl_8051A9B0@sda21(r2)
	fsubs    f2, f2, f0
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	addi     r7, r4, __vt__Q23efx3Arg@l
	li       r6, 0x53
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	lfs      f0, lbl_8051A9E0@sda21(r2)
	stfs     f1, 0x20(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x24
	stw      r7, 0x24(r1)
	stfs     f3, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stfs     f4, 0x30(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x20(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_80255B60:
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255B70
 * Size:	000094
 */
void Pom::Obj::createShotEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f0, lbl_8051A9E8@sda21(r2)
	stw      r0, 0x34(r1)
	addi     r4, r4, __vt__Q23efx5TBase@l
	li       r5, 0
	li       r7, 0x101
	lfs      f2, 0x190(r3)
	li       r6, 0x102
	lfs      f1, 0x18c(r3)
	lfs      f3, 0x194(r3)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	fsubs    f2, f2, f0
	stw      r4, 8(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	lis      r3, __vt__Q23efx9TOnyonLay@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx9TOnyonLay@l
	addi     r3, r1, 8
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x24(r1)
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
 * Address:	80255C04
 * Size:	000080
 */
void Pom::Obj::createPomDeadEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x34(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r8, r6, __vt__Q23efx5TBase@l
	stw      r0, 0x14(r1)
	addi     r7, r5, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx8TPonDead@ha
	li       r6, 0x271
	lfs      f0, 0x18c(r3)
	addi     r0, r4, __vt__Q23efx8TPonDead@l
	li       r5, 0
	addi     r4, r1, 0x14
	stfs     f0, 0x18(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r3)
	addi     r3, r1, 8
	stw      r8, 8(r1)
	stw      r7, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255C84
 * Size:	000004
 */
void Pom::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	80255C88
 * Size:	000004
 */
void Pom::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	80255C8C
 * Size:	000008
 */
u32 Pom::Obj::isLivingThing() { return 0x0; }

/*
 * --INFO--
 * Address:	80255C94
 * Size:	000008
 */
void Pom::Obj::getMouthSlots()
{
	/*
	addi     r3, r3, 0x2d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255C9C
 * Size:	000008
 */
void Pom::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051A9EC@sda21(r2)
	blr
	*/
}
} // namespace Game
