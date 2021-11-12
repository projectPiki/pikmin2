#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048AC30
    lbl_8048AC30:
        .4byte 0x6B6F7368
        .4byte 0x69316A6E
        .4byte 0x74000000
    .global lbl_8048AC3C
    lbl_8048AC3C:
        .4byte 0x696D6F6D
        .4byte 0x75736869
        .4byte 0x00000000
    .global lbl_8048AC48
    lbl_8048AC48:
        .4byte 0x41726749
        .4byte 0x6D6F4561
        .4byte 0x74000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9ArgImoEat
    __vt__Q23efx9ArgImoEat:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx9ArgImoEatFv
    .global __vt__Q34Game8Imomushi3Obj
    __vt__Q34Game8Imomushi3Obj:
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
        .4byte onInit__Q34Game8Imomushi3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game8Imomushi3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game8Imomushi3ObjFR8Graphics
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
        .4byte isUnderground__Q34Game8Imomushi3ObjFv
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
        .4byte getShadowParam__Q34Game8Imomushi3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game8Imomushi3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game8Imomushi3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game8Imomushi3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q34Game8Imomushi3ObjFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game8Imomushi3ObjFR8Graphics
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
        .4byte getEnemyTypeID__Q34Game8Imomushi3ObjFv
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
   dropCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game8Imomushi3ObjFv .4byte
   doFinishStoneState__Q34Game8Imomushi3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q34Game8Imomushi3ObjFf .4byte
   doFinishEarthquakeState__Q34Game8Imomushi3ObjFv .4byte
   doStartEarthquakeFitState__Q34Game8Imomushi3ObjFv .4byte
   doFinishEarthquakeFitState__Q34Game8Imomushi3ObjFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game8Imomushi3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game8Imomushi3ObjFv .4byte
   doStartMovie__Q34Game8Imomushi3ObjFv .4byte
   doEndMovie__Q34Game8Imomushi3ObjFv .4byte
   setFSM__Q34Game8Imomushi3ObjFPQ34Game8Imomushi3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@784@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@784@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@784@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@784@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@784@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@784@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C3C0
    lbl_8051C3C0:
        .4byte 0x00000000
    .global lbl_8051C3C4
    lbl_8051C3C4:
        .float 1.0
    .global lbl_8051C3C8
    lbl_8051C3C8:
        .4byte 0x40A00000
    .global lbl_8051C3CC
    lbl_8051C3CC:
        .float 0.1
    .global lbl_8051C3D0
    lbl_8051C3D0:
        .4byte 0x42480000
    .global lbl_8051C3D4
    lbl_8051C3D4:
        .4byte 0x41700000
    .global lbl_8051C3D8
    lbl_8051C3D8:
        .4byte 0x40E00000
    .global lbl_8051C3DC
    lbl_8051C3DC:
        .float 0.5
    .global lbl_8051C3E0
    lbl_8051C3E0:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051C3E8
    lbl_8051C3E8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051C3F0
    lbl_8051C3F0:
        .4byte 0x43160000
    .global lbl_8051C3F4
    lbl_8051C3F4:
        .4byte 0x40490FDB
    .global lbl_8051C3F8
    lbl_8051C3F8:
        .4byte 0x3FC90FDB
    .global lbl_8051C3FC
    lbl_8051C3FC:
        .4byte 0x43A2F983
    .global lbl_8051C400
    lbl_8051C400:
        .4byte 0xC3A2F983
    .global lbl_8051C404
    lbl_8051C404:
        .4byte 0x43FA0000
    .global lbl_8051C408
    lbl_8051C408:
        .4byte 0x68656164
        .4byte 0x6A6E7400
    .global lbl_8051C410
    lbl_8051C410:
        .4byte 0x3ED70A3D
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802BC138
 * Size:	000138
 */
Imomushi::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802BC178
	addi     r0, r31, 0x310
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x310(r31)
	stw      r0, 0x314(r31)
	stw      r0, 0x318(r31)

lbl_802BC178:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game8Imomushi3Obj@ha
	addi     r0, r31, 0x310
	addi     r5, r3, __vt__Q34Game8Imomushi3Obj@l
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
	beq      lbl_802BC204
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game8Imomushi14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game8Imomushi14ProperAnimator@l
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

lbl_802BC204:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802BC238
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game8Imomushi3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game8Imomushi3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802BC238:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game8Imomushi3ObjFv
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
 * Address:	802BC270
 * Size:	000004
 */
void Imomushi::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802BC274
 * Size:	0000E8
 */
void Imomushi::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r31)
	li       r4, 0
	li       r0, -1
	lfs      f0, lbl_8051C3C0@sda21(r2)
	rlwinm   r5, r3, 0, 0x15, 0x13
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x1a, 0x18
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x18, 0x16
	stw      r5, 0x1e0(r31)
	stb      r4, 0x2c0(r31)
	stw      r0, 0x2c4(r31)
	stfs     f0, 0x2c8(r31)
	bl       resetStickDiff__Q34Game8Imomushi3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game8Imomushi3ObjFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802BC314
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_802BC314
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 0xb
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802BC348

lbl_802BC314:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 4
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

lbl_802BC348:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BC35C
 * Size:	000044
 */
void Imomushi::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
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
 * Address:	802BC3A0
 * Size:	000034
 */
void Imomushi::Obj::doUpdate()
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
 * Address:	802BC3D4
 * Size:	0004D0
 */
void Imomushi::Obj::doAnimationStick()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xf8(r3)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	bne      lbl_802BC4FC
	lfs      f1, 0x190(r31)
	lfs      f0, 0x50(r3)
	lfs      f2, 0x194(r31)
	fsubs    f3, f1, f0
	lfs      f0, 0x54(r3)
	lfs      f1, 0x18c(r31)
	fsubs    f4, f2, f0
	lfs      f0, 0x4c(r3)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802BC448
	ble      lbl_802BC44C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802BC44C

lbl_802BC448:
	fmr      f1, f0

lbl_802BC44C:
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802BC46C
	lfs      f0, lbl_8051C3C4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802BC46C:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x2e4(r31)
	lfs      f1, 0x8bc(r3)
	fmuls    f2, f2, f1
	fmuls    f3, f3, f1
	fmuls    f4, f4, f1
	fadds    f0, f0, f2
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x2ec(r31)
	fadds    f0, f0, f4
	stfs     f0, 0x2ec(r31)
	lfs      f7, 0x2e8(r31)
	lfs      f6, 0x2d8(r31)
	lfs      f5, 0x2ec(r31)
	lfs      f1, 0x2dc(r31)
	fmuls    f0, f7, f6
	lfs      f8, 0x2e4(r31)
	lfs      f4, 0x2e0(r31)
	fmuls    f3, f5, f1
	fmsubs   f2, f8, f1, f0
	fmuls    f1, f8, f4
	fmsubs   f0, f7, f4, f3
	fmuls    f3, f2, f7
	fmsubs   f1, f5, f6, f1
	fmuls    f4, f0, f5
	fmsubs   f5, f1, f5, f3
	fmuls    f3, f1, f8
	fmsubs   f4, f2, f8, f4
	stfs     f5, 0x2d8(r31)
	fmsubs   f3, f0, f7, f3
	stfs     f4, 0x2dc(r31)
	stfs     f3, 0x2e0(r31)
	b        lbl_802BC5AC

lbl_802BC4FC:
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x2d8(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f5, f1, f0
	lfs      f0, 0x2d8(r31)
	lfs      f4, 0x8bc(r3)
	lfs      f3, 0x2d0(r31)
	fmuls    f5, f5, f4
	lfs      f1, 0x2dc(r31)
	lfs      f2, 0x2d4(r31)
	fsubs    f3, f3, f1
	lfs      f1, 0x2e0(r31)
	fadds    f0, f0, f5
	fsubs    f1, f2, f1
	fmuls    f3, f3, f4
	stfs     f0, 0x2d8(r31)
	fmuls    f1, f1, f4
	lfs      f0, 0x2dc(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x2e0(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x2e0(r31)
	lfs      f6, 0x2e0(r31)
	lfs      f3, 0x2e4(r31)
	lfs      f5, 0x2e8(r31)
	lfs      f7, 0x2d8(r31)
	fmuls    f1, f3, f6
	lfs      f2, 0x2ec(r31)
	lfs      f8, 0x2dc(r31)
	fmuls    f0, f5, f7
	fmsubs   f1, f2, f7, f1
	fmuls    f4, f2, f8
	fmsubs   f2, f3, f8, f0
	fmuls    f3, f6, f1
	fmsubs   f0, f5, f6, f4
	fmuls    f4, f7, f2
	fmsubs   f5, f8, f2, f3
	fmuls    f3, f8, f0
	fmsubs   f4, f6, f0, f4
	stfs     f5, 0x2e4(r31)
	fmsubs   f3, f7, f1, f3
	stfs     f4, 0x2e8(r31)
	stfs     f3, 0x2ec(r31)

lbl_802BC5AC:
	lfs      f5, 0x2d8(r31)
	lfs      f4, 0x2dc(r31)
	fmuls    f3, f5, f5
	lfs      f6, 0x2e0(r31)
	fmuls    f7, f4, f4
	lfs      f4, lbl_8051C3C0@sda21(r2)
	fmuls    f6, f6, f6
	fadds    f3, f3, f7
	fadds    f3, f6, f3
	fcmpo    cr0, f3, f4
	ble      lbl_802BC5F4
	fmadds   f3, f5, f5, f7
	fadds    f5, f6, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802BC5F8
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802BC5F8

lbl_802BC5F4:
	fmr      f5, f4

lbl_802BC5F8:
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802BC630
	lfs      f4, lbl_8051C3C4@sda21(r2)
	lfs      f3, 0x2d8(r31)
	fdivs    f4, f4, f5
	fmuls    f3, f3, f4
	stfs     f3, 0x2d8(r31)
	lfs      f3, 0x2dc(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2dc(r31)
	lfs      f3, 0x2e0(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2e0(r31)

lbl_802BC630:
	fmuls    f4, f1, f1
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fmuls    f5, f2, f2
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_802BC65C
	ble      lbl_802BC660
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802BC660

lbl_802BC65C:
	fmr      f4, f3

lbl_802BC660:
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_802BC680
	lfs      f3, lbl_8051C3C4@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_802BC680:
	lfs      f5, 0x2e4(r31)
	lfs      f4, 0x2e8(r31)
	fmuls    f3, f5, f5
	lfs      f6, 0x2ec(r31)
	fmuls    f7, f4, f4
	lfs      f4, lbl_8051C3C0@sda21(r2)
	fmuls    f6, f6, f6
	fadds    f3, f3, f7
	fadds    f3, f6, f3
	fcmpo    cr0, f3, f4
	ble      lbl_802BC6C8
	fmadds   f3, f5, f5, f7
	fadds    f5, f6, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802BC6CC
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802BC6CC

lbl_802BC6C8:
	fmr      f5, f4

lbl_802BC6CC:
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802BC704
	lfs      f4, lbl_8051C3C4@sda21(r2)
	lfs      f3, 0x2e4(r31)
	fdivs    f4, f4, f5
	fmuls    f3, f3, f4
	stfs     f3, 0x2e4(r31)
	lfs      f3, 0x2e8(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2e8(r31)
	lfs      f3, 0x2ec(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2ec(r31)

lbl_802BC704:
	stfs     f0, 0x138(r31)
	stfs     f1, 0x148(r31)
	stfs     f2, 0x158(r31)
	lfs      f0, 0x2e4(r31)
	stfs     f0, 0x13c(r31)
	lfs      f0, 0x2e8(r31)
	stfs     f0, 0x14c(r31)
	lfs      f0, 0x2ec(r31)
	stfs     f0, 0x15c(r31)
	lfs      f0, 0x2d8(r31)
	stfs     f0, 0x140(r31)
	lfs      f0, 0x2dc(r31)
	stfs     f0, 0x150(r31)
	lfs      f0, 0x2e0(r31)
	stfs     f0, 0x160(r31)
	lbz      r0, 0x2c1(r31)
	cmplwi   r0, 0
	beq      lbl_802BC840
	lbz      r0, 0x2c2(r31)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x190(r31)
	cmplwi   r0, 0
	lfs      f2, 0x194(r31)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f2, 0x28(r1)
	beq      lbl_802BC804
	lfs      f4, 0x300(r31)
	li       r0, 0
	lfs      f5, 0x304(r31)
	fsubs    f6, f1, f4
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fsubs    f7, f2, f5
	fcmpo    cr0, f6, f0
	ble      lbl_802BC798
	fmr      f2, f6
	b        lbl_802BC79C

lbl_802BC798:
	fneg     f2, f6

lbl_802BC79C:
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f7, f0
	ble      lbl_802BC7B0
	fmr      f3, f7
	b        lbl_802BC7B4

lbl_802BC7B0:
	fneg     f3, f7

lbl_802BC7B4:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x894(r3)
	fcmpo    cr0, f2, f1
	ble      lbl_802BC7D4
	fdivs    f0, f6, f2
	li       r0, 1
	fmadds   f0, f0, f1, f4
	stfs     f0, 0x20(r1)

lbl_802BC7D4:
	lfs      f1, 0x894(r3)
	fcmpo    cr0, f3, f1
	ble      lbl_802BC7F0
	fdivs    f0, f7, f3
	li       r0, 1
	fmadds   f0, f0, f1, f5
	stfs     f0, 0x28(r1)

lbl_802BC7F0:
	stb      r0, 0x2c1(r31)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	stfs     f1, 0x300(r31)
	stfs     f0, 0x304(r31)

lbl_802BC804:
	lwz      r0, 0x20(r1)
	li       r4, 1
	lwz      r3, 0x24(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0x18(r1)
	lfs      f0, 0x14(r1)
	stb      r4, 0x2c2(r31)
	lfs      f1, 0x18(r1)
	stw      r0, 0x1c(r1)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x1c(r1)
	stfs     f1, 0x154(r31)
	stfs     f0, 0x164(r31)
	b        lbl_802BC870

lbl_802BC840:
	lwz      r0, 0x18c(r31)
	lwz      r3, 0x190(r31)
	stw      r0, 8(r1)
	lwz      r0, 0x194(r31)
	stw      r3, 0xc(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x154(r31)
	stfs     f0, 0x164(r31)

lbl_802BC870:
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x2d8(r31)
	lfs      f2, 0x2e0(r31)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BC8A4
 * Size:	000004
 */
void Imomushi::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802BC8A8
 * Size:	000020
 */
void Imomushi::Obj::doDebugDraw(Graphics&)
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
 * Address:	802BC8C8
 * Size:	00004C
 */
void Imomushi::Obj::setFSM(Game::Imomushi::FSM*)
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
 * Address:	802BC914
 * Size:	0000D0
 */
void Imomushi::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048AC30@ha
	addi     r0, r3, lbl_8048AC30@l
	lwz      r3, 0x174(r30)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f0, 0xc(r3)
	mr       r3, r30
	lfs      f2, lbl_8051C3C8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051C3C0@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f0, lbl_8051C3C4@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f3, 4(r31)
	fsubs    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BC9A4
	lfs      f0, lbl_8051C3CC@sda21(r2)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	b        lbl_802BC9CC

lbl_802BC9A4:
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802BC9BC
	lfs      f0, lbl_8051C3D0@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802BC9C4

lbl_802BC9BC:
	lfs      f0, lbl_8051C3D4@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802BC9C4:
	lfs      f0, lbl_8051C3D8@sda21(r2)
	stfs     f0, 0x1c(r31)

lbl_802BC9CC:
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
 * Address:	802BC9E4
 * Size:	000064
 */
void Imomushi::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r4
	stw      r30, 0x10(r1)
	mr       r30, r3
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCA1C
	li       r3, 0
	b        lbl_802BCA2C

lbl_802BCA1C:
	fmr      f1, f31
	mr       r3, r30
	mr       r4, r31
	bl       earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef

lbl_802BCA2C:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCA48
 * Size:	000080
 */
void Imomushi::Obj::dropCallBack(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xf4(r3)
	cmplwi   r0, 0
	beq      lbl_802BCAB0
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802BCAB0
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_802BCA88
	cmpwi    r3, 9
	bne      lbl_802BCAB0

lbl_802BCA88:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802BCAB4

lbl_802BCAB0:
	li       r3, 0

lbl_802BCAB4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCAC8
 * Size:	000034
 */
void Imomushi::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCAFC
 * Size:	00004C
 */
void Imomushi::Obj::doFinishStoneState()
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
	cmpwi    r3, 7
	beq      lbl_802BCB2C
	cmpwi    r3, 8
	bne      lbl_802BCB34

lbl_802BCB2C:
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv

lbl_802BCB34:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCB48
 * Size:	000034
 */
void Imomushi::Obj::doStartEarthquakeState(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeState__Q24Game9EnemyBaseFf
	mr       r3, r31
	bl       finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCB7C
 * Size:	00004C
 */
void Imomushi::Obj::doFinishEarthquakeState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_802BCBAC
	cmpwi    r3, 8
	bne      lbl_802BCBB4

lbl_802BCBAC:
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv

lbl_802BCBB4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCBC8
 * Size:	000034
 */
void Imomushi::Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCBFC
 * Size:	00004C
 */
void Imomushi::Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_802BCC2C
	cmpwi    r3, 8
	bne      lbl_802BCC34

lbl_802BCC2C:
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv

lbl_802BCC34:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCC48
 * Size:	000028
 */
void Imomushi::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 8
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
 * Address:	802BCC70
 * Size:	000020
 */
void Imomushi::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCC90
 * Size:	000020
 */
void Imomushi::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCCB0
 * Size:	000024
 */
void Imomushi::Obj::lifeIncrement()
{
	/*
	lfs      f0, lbl_8051C3C0@sda21(r2)
	stfs     f0, 0x208(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x1e0(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x104(r4)
	stfs     f0, 0x200(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCCD4
 * Size:	0000AC
 */
void Imomushi::Obj::resetZukanStateTimer()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051C3E8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051C3DC@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051C3E0@sda21(r2)
	lwz      r12, 0x1ac(r12)
	fmuls    f1, f1, f2
	fdivs    f31, f1, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051C3E8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051C3DC@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_8051C3C8@sda21(r2)
	fsubs    f2, f2, f3
	fmadds   f1, f1, f2, f31
	fsubs    f0, f0, f1
	stfs     f0, 0x2c8(r31)
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
 * Address:	802BCD80
 * Size:	000010
 */
void Imomushi::Obj::resetStickDiff()
{
	/*
	li       r0, 0
	stb      r0, 0x2c2(r3)
	stb      r0, 0x2c1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCD90
 * Size:	00001C
 */
void Imomushi::Obj::setStickDiff(float, float)
{
	/*
	li       r4, 1
	li       r0, 0
	stb      r4, 0x2c1(r3)
	stb      r0, 0x2c2(r3)
	stfs     f1, 0x300(r3)
	stfs     f2, 0x304(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCDAC
 * Size:	00031C
 */
void Imomushi::Obj::getRandFruitsPlant()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	stw      r28, 0xc0(r1)
	mr       r30, r3
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	lwz      r4, 0xc0(r30)
	li       r31, 0
	cmplwi   r3, 0
	lfs      f0, 0x35c(r4)
	fmuls    f31, f0, f0
	beq      lbl_802BCDF4
	addi     r3, r3, 0x30

lbl_802BCDF4:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x20(r1)
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_802BCE30
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BCEB8

lbl_802BCE30:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BCE9C

lbl_802BCE48:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BCEB8
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802BCE9C:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCE48

lbl_802BCEB8:
	addi     r29, r1, 0x24
	b        lbl_802BD018

lbl_802BCEC0:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r28, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCF5C
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCF5C
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x1a0(r30)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x198(r30)
	fsubs    f1, f1, f0
	lfs      f0, 8(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802BCF5C
	stw      r28, 0(r29)
	addi     r29, r29, 4
	addi     r31, r31, 1

lbl_802BCF5C:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_802BCF88
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BD018

lbl_802BCF88:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BCFFC

lbl_802BCFA8:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BD018
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802BCFFC:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCFA8

lbl_802BD018:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_802BCEC0
	cmpwi    r31, 0
	beq      lbl_802BD09C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xac(r1)
	xoris    r0, r31, 0x8000
	lfd      f2, lbl_8051C3E8@sda21(r2)
	addi     r3, r1, 0x24
	stw      r4, 0xa8(r1)
	lfs      f0, lbl_8051C3E0@sda21(r2)
	lfd      f1, 0xa8(r1)
	stw      r0, 0xb4(r1)
	fsubs    f1, f1, f2
	stw      r4, 0xb0(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0xb0(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	b        lbl_802BD0A0

lbl_802BD09C:
	li       r3, 0

lbl_802BD0A0:
	psq_l    f31, 216(r1), 0, qr0
	lwz      r0, 0xe4(r1)
	lfd      f31, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r29, 0xc4(r1)
	lwz      r28, 0xc0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD0C8
 * Size:	0000C8
 */
void Imomushi::Obj::startClimbPlant(CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	bl       endStick__Q24Game8CreatureFv
	cmplwi   r31, 0
	beq      lbl_802BD178
	lwz      r4, 0x230(r30)
	mr       r3, r30
	mr       r5, r31
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	mr       r3, r31
	addi     r4, r1, 8
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 8
	addi     r4, r30, 0x2cc
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0xc(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802BD168
	ble      lbl_802BD16C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802BD16C

lbl_802BD168:
	fmr      f1, f0

lbl_802BD16C:
	lfs      f0, lbl_8051C3C4@sda21(r2)
	fdivs    f0, f0, f1
	stfs     f0, 0x2fc(r30)

lbl_802BD178:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD190
 * Size:	000030
 */
void Imomushi::Obj::moveStickTube()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x81c(r4)
	lfs      f2, 0x2d0(r3)
	fmuls    f1, f1, f0
	lfs      f3, 0x2d4(r3)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	stfs     f1, 0x1d4(r3)
	stfs     f2, 0x1d8(r3)
	stfs     f3, 0x1dc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD1C0
 * Size:	0000CC
 */
void Imomushi::Obj::moveStickSphere()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0xf4(r3)
	lwz      r30, 0xf8(r3)
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 0xc0(r29)
	mr       r3, r29
	lfs      f1, 0x2d8(r29)
	lfs      f0, 0x844(r4)
	lfs      f2, 0x2dc(r29)
	fmuls    f1, f1, f0
	lfs      f3, 0x2e0(r29)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	stfs     f1, 0x1d4(r29)
	stfs     f2, 0x1d8(r29)
	stfs     f3, 0x1dc(r29)
	lwz      r12, 0(r29)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0x1fc(r12)
	lfs      f1, 0x54(r4)
	mtctr    r12
	bctrl
	lfs      f1, 0x18c(r29)
	mr       r3, r29
	lfs      f0, 0x1c8(r29)
	mr       r4, r31
	mr       r5, r30
	fadds    f0, f1, f0
	stfs     f0, 0x18c(r29)
	lfs      f1, 0x190(r29)
	lfs      f0, 0x1cc(r29)
	fadds    f0, f1, f0
	stfs     f0, 0x190(r29)
	lfs      f1, 0x194(r29)
	lfs      f0, 0x1d0(r29)
	fadds    f0, f1, f0
	stfs     f0, 0x194(r29)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
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
 * Address:	802BD28C
 * Size:	00019C
 */
void Imomushi::Obj::eatTsuyukusa()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0xf4(r3)
	cmplwi   r3, 0
	beq      lbl_802BD410
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BD410
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BD410
	mr       r3, r31
	addi     r4, r30, 0x18c
	lwz      r12, 0(r31)
	lwz      r12, 0x22c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802BD3B8
	lhz      r0, 0x43e(r3)
	cmplwi   r0, 0
	bne      lbl_802BD368
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9ArgImoEat@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r0, 0
	stw      r4, 0x28(r1)
	addi     r3, r3, __vt__Q23efx9ArgImoEat@l
	addi     r4, r1, 0x28
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x34(r1)
	stw      r3, 0x28(r1)
	stw      r0, 0x38(r1)
	lwz      r3, 0x308(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802BD3B8

lbl_802BD368:
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9ArgImoEat@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r3, r3, __vt__Q23efx9ArgImoEat@l
	addi     r4, r1, 0x14
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x20(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 0x308(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802BD3B8:
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x2c8(r30)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802BD410
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game11InteractEat@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 2
	stw      r4, 8(r1)
	addi     r5, r3, __vt__Q24Game11InteractEat@l
	mr       r3, r31
	addi     r4, r1, 8
	stw      r30, 0xc(r1)
	stw      r5, 8(r1)
	stw      r0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051C3C0@sda21(r2)
	stfs     f0, 0x2c8(r30)

lbl_802BD410:
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
 * Address:	802BD428
 * Size:	000074
 */
void Imomushi::Obj::isAttackable()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	beq      lbl_802BD484
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BD484
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BD484
	li       r3, 1
	b        lbl_802BD488

lbl_802BD484:
	li       r3, 0

lbl_802BD488:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD49C
 * Size:	00004C
 */
void Imomushi::Obj::isStickToFall()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xf4(r3)
	cmplwi   r3, 0
	beq      lbl_802BD4D4
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BD4D4
	li       r3, 1
	b        lbl_802BD4D8

lbl_802BD4D4:
	li       r3, 0

lbl_802BD4D8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD4E8
 * Size:	000188
 */
void Imomushi::Obj::setZukanTargetPosition()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_8051C3E8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 8(r1)
	lfs      f0, lbl_8051C3F0@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f5, lbl_8051C3E0@sda21(r2)
	fsubs    f2, f1, f2
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, lbl_8051C3D0@sda21(r2)
	fmuls    f6, f0, f2
	lfs      f2, 0x194(r31)
	fsubs    f1, f3, f1
	lfs      f0, 0x1a0(r31)
	fdivs    f3, f6, f5
	fadds    f31, f4, f3
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_8051C3E8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_8051C3F4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051C3E0@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C3F8@sda21(r2)
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f5, f2, f1
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802BD5BC
	fneg     f1, f5

lbl_802BD5BC:
	lfs      f3, lbl_8051C3FC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C3C0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 0x1a0(r31)
	fcmpo    cr0, f5, f0
	lfs      f4, 0x19c(r31)
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f31, f0, f1
	bge      lbl_802BD620
	lfs      f0, lbl_8051C400@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802BD638

lbl_802BD620:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802BD638:
	lfs      f0, 0x198(r31)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2f0(r31)
	stfs     f4, 0x2f4(r31)
	stfs     f2, 0x2f8(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD670
 * Size:	000034
 */
void Imomushi::Obj::isInZukanTargetArea()
{
	/*
	lfs      f1, 0x194(r3)
	lfs      f0, 0x2f8(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x2f0(r3)
	lfs      f0, lbl_8051C404@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD6A4
 * Size:	00013C
 */
void Imomushi::Obj::createEffect()
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
	beq      lbl_802BD73C
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
	lis      r4, __vt__Q23efx7TImoEat@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx7TImoEat@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xb6
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

lbl_802BD73C:
	stw      r3, 0x308(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802BD7C8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx9TImoSmoke@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TImoSmoke@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0xb8
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802BD7C8:
	stw      r3, 0x30c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD7E0
 * Size:	000040
 */
void Imomushi::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C408@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x308(r31)
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
 * Address:	802BD820
 * Size:	00008C
 */
void Imomushi::Obj::createAppearEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048AC3C@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_8048AC3C@l
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx13TUjinkoAp_Imo@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1ce
	li       r5, 0x1cf
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx13TUjinkoAp_Imo@l
	li       r4, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	sth      r5, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD8AC
 * Size:	00008C
 */
void Imomushi::Obj::createDisAppearEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048AC3C@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_8048AC3C@l
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx13TUjinkoHd_Imo@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1d1
	li       r5, 0x1d2
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx13TUjinkoHd_Imo@l
	li       r4, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	sth      r5, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD938
 * Size:	000084
 */
void Imomushi::Obj::startMoveTraceEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx8ArgScale@ha
	stw      r0, 0x34(r1)
	addi     r0, r4, __vt__Q23efx8ArgScale@l
	addi     r5, r5, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051C3C4@sda21(r2)
	lwz      r8, 0x18c(r3)
	addi     r4, r1, 0x14
	lwz      r7, 0x190(r3)
	lwz      r6, 0x194(r3)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f3, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f2, 0xc(r1)
	stw      r5, 0x14(r1)
	lfs      f1, 0x10(r1)
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x24(r1)
	lwz      r3, 0x30c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD9BC
 * Size:	000030
 */
void Imomushi::Obj::finishMoveTraceEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x30c(r3)
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
 * Address:	802BD9EC
 * Size:	000050
 */
void Imomushi::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x308(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30c(r31)
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
 * Address:	802BDA3C
 * Size:	000050
 */
void Imomushi::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x308(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30c(r31)
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
 * Address:	802BDA8C
 * Size:	00000C
 */
void ArgImoEat::getName()
{
	/*
	lis      r3, lbl_8048AC48@ha
	addi     r3, r3, lbl_8048AC48@l
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	802BDA98
 * Size:	000008
 */
void Imomushi::Obj::isUnderground()
{
	/*
	lbz      r3, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BDAA0
 * Size:	000008
 */
void Imomushi::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051C410@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BDAA8
 * Size:	000008
 */
u32 Imomushi::Obj::getEnemyTypeID() { return 0x41; }
} // namespace efx
