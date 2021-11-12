#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx13TKabutoAttack
    __vt__Q23efx13TKabutoAttack:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game6Kabuto3Obj
    __vt__Q34Game6Kabuto3Obj:
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
        .4byte onInit__Q34Game6Kabuto3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game6Kabuto3ObjFR8Graphics
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
        .4byte isUnderground__Q34Game6Kabuto3ObjFv
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
        .4byte getShadowParam__Q34Game6Kabuto3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game6Kabuto3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Kabuto3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Kabuto3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Kabuto3ObjFR8Graphics .4byte
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
        .4byte initWalkSmokeEffect__Q34Game6Kabuto3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game6Kabuto3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game6Kabuto3ObjFv
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
   doStartStoneState__Q34Game6Kabuto3ObjFv .4byte
   doFinishStoneState__Q34Game6Kabuto3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game6Kabuto3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game6Kabuto3ObjFv .4byte
   doStartMovie__Q34Game6Kabuto3ObjFv .4byte doEndMovie__Q34Game6Kabuto3ObjFv
        .4byte setFSM__Q34Game6Kabuto3ObjFPQ34Game6Kabuto3FSM
        .4byte createEffect__Q34Game6Kabuto3ObjFv
        .4byte setupEffect__Q34Game6Kabuto3ObjFv
        .4byte startRotateEffect__Q34Game6Kabuto3ObjFv
        .4byte finishRotateEffect__Q34Game6Kabuto3ObjFv
        .4byte startWaitEffect__Q34Game6Kabuto3ObjFv
        .4byte finishWaitEffect__Q34Game6Kabuto3ObjFv
        .4byte effectDrawOn__Q34Game6Kabuto3ObjFv
        .4byte effectDrawOff__Q34Game6Kabuto3ObjFv
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
    .global lbl_8051CDC8
    lbl_8051CDC8:
        .4byte 0x43000000
    .global lbl_8051CDCC
    lbl_8051CDCC:
        .4byte 0x00000000
    .global lbl_8051CDD0
    lbl_8051CDD0:
        .4byte 0x63656E74
        .4byte 0x65720000
    .global lbl_8051CDD8
    lbl_8051CDD8:
        .4byte 0x40A00000
    .global lbl_8051CDDC
    lbl_8051CDDC:
        .float 1.0
    .global lbl_8051CDE0
    lbl_8051CDE0:
        .4byte 0x42480000
    .global lbl_8051CDE4
    lbl_8051CDE4:
        .4byte 0x41200000
    .global lbl_8051CDE8
    lbl_8051CDE8:
        .4byte 0x41C80000
    .global lbl_8051CDEC
    lbl_8051CDEC:
        .4byte 0xC47A0000
    .global lbl_8051CDF0
    lbl_8051CDF0:
        .4byte 0x7268616E
        .4byte 0x64320000
    .global lbl_8051CDF8
    lbl_8051CDF8:
        .4byte 0x41300000
    .global lbl_8051CDFC
    lbl_8051CDFC:
        .4byte 0x726C6567
        .4byte 0x00000000
    .global lbl_8051CE04
    lbl_8051CE04:
        .4byte 0x41800000
    .global lbl_8051CE08
    lbl_8051CE08:
        .4byte 0x6C68616E
        .4byte 0x64320000
    .global lbl_8051CE10
    lbl_8051CE10:
        .4byte 0x6C6C6567
        .4byte 0x00000000
    .global lbl_8051CE18
    lbl_8051CE18:
        .4byte 0x47000000
    .global lbl_8051CE1C
    lbl_8051CE1C:
        .4byte 0x40490FDB
    .global lbl_8051CE20
    lbl_8051CE20:
        .4byte 0x3FC90FDB
    .global lbl_8051CE24
    lbl_8051CE24:
        .4byte 0x43A2F983
    .global lbl_8051CE28
    lbl_8051CE28:
        .4byte 0xC3A2F983
        .4byte 0x00000000
    .global lbl_8051CE30
    lbl_8051CE30:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051CE38
    lbl_8051CE38:
        .float 0.5
    .global lbl_8051CE3C
    lbl_8051CE3C:
        .4byte 0x3F400000
    .global lbl_8051CE40
    lbl_8051CE40:
        .4byte 0x41700000
    .global lbl_8051CE44
    lbl_8051CE44:
        .4byte 0x6D6F7574
        .4byte 0x68000000
    .global lbl_8051CE4C
    lbl_8051CE4C:
        .4byte 0x43340000
    .global lbl_8051CE50
    lbl_8051CE50:
        .4byte 0x68656164
        .4byte 0x00000000
    .global lbl_8051CE58
    lbl_8051CE58:
        .4byte 0x3F666666
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802E4178
 * Size:	00014C
 */
Kabuto::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802E41B8
	addi     r0, r31, 0x2e4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e4(r31)
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)

lbl_802E41B8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game6Kabuto3Obj@ha
	addi     r0, r31, 0x2e4
	addi     r5, r3, __vt__Q34Game6Kabuto3Obj@l
	addi     r3, r31, 0x2c0
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x31c
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802E424C
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game6Kabuto14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game6Kabuto14ProperAnimator@l
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

lbl_802E424C:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802E4280
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game6Kabuto3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game6Kabuto3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802E4280:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
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
 * Address:	802E42C4
 * Size:	000004
 */
void Kabuto::Obj::createEffect() { }

/*
 * --INFO--
 * Address:	802E42C8
 * Size:	000004
 */
void Kabuto::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802E42CC
 * Size:	000108
 */
void Kabuto::Obj::onInit(Game::CreatureInitArg*)
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
	beq      lbl_802E4308
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_802E4308
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)

lbl_802E4308:
	lfs      f1, lbl_8051CDC8@sda21(r2)
	li       r4, 0
	lfs      f0, lbl_8051CDCC@sda21(r2)
	li       r0, -1
	stfs     f1, 0x2dc(r31)
	mr       r3, r31
	stb      r4, 0x2e1(r31)
	stfs     f0, 0x2c8(r31)
	stfs     f0, 0x2dc(r31)
	stw      r0, 0x2cc(r31)
	stb      r4, 0x2e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x60
	bne      lbl_802E43A0
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 6
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
	b        lbl_802E43C0

lbl_802E43A0:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802E43C0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E43D4
 * Size:	000004
 */
void Kabuto::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	802E43D8
 * Size:	000044
 */
void Kabuto::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateCaution__Q34Game6Kabuto3ObjFv
	lwz      r3, 0x2bc(r31)
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
 * Address:	802E441C
 * Size:	000004
 */
void Kabuto::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802E4420
 * Size:	000020
 */
void Kabuto::Obj::doDebugDraw(Graphics&)
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
 * Address:	802E4440
 * Size:	00004C
 */
void Kabuto::Obj::setFSM(Game::Kabuto::FSM*)
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
 * Address:	802E448C
 * Size:	0000A8
 */
void Kabuto::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051CDD0@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051CDD8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051CDCC@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f0, lbl_8051CDDC@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802E450C
	lfs      f0, lbl_8051CDE0@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802E4514

lbl_802E450C:
	lfs      f0, lbl_8051CDE4@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802E4514:
	lfs      f0, lbl_8051CDE8@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	802E4534
 * Size:	000054
 */
void Kabuto::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x310(r12)
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
 * Address:	802E4588
 * Size:	0000B0
 */
void Kabuto::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051CDDC@sda21(r2)
	mr       r3, r30
	lfs      f2, lbl_8051CDE4@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051CDCC@sda21(r2)
	lfs      f4, lbl_8051CDEC@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x60
	bne      lbl_802E4620
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 9
	blt      lbl_802E4604
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30c(r12)
	mtctr    r12
	bctrl

lbl_802E4604:
	cmpwi    r31, 0xa
	bne      lbl_802E4620
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl

lbl_802E4620:
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
 * Address:	802E4638
 * Size:	000028
 */
void Kabuto::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xd
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
 * Address:	802E4660
 * Size:	00002C
 */
void Kabuto::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x318(r12)
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
 * Address:	802E468C
 * Size:	000004
 */
void Kabuto::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	802E4690
 * Size:	00002C
 */
void Kabuto::Obj::doEndMovie()
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
 * Address:	802E46BC
 * Size:	000004
 */
void Kabuto::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	802E46C0
 * Size:	000094
 */
void Kabuto::Obj::initWalkSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2c0
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CDF8@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051CDF0@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CE04@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051CDFC@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CDF8@sda21(r2)
	li       r4, 2
	addi     r6, r2, lbl_8051CE08@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CE04@sda21(r2)
	li       r4, 3
	addi     r6, r2, lbl_8051CE10@sda21
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
 * Address:	802E4754
 * Size:	000008
 */
void Kabuto::Obj::getWalkSmokeEffectMgr()
{
	/*
	addi     r3, r3, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E475C
 * Size:	000198
 */
void Kabuto::Obj::setRandTarget()
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
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lis      r3, atanTable___5JMath@ha
	lwz      r4, 0xc0(r31)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 8(r1)
	lfd      f1, lbl_8051CE30@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f5, lbl_8051CE18@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, 0x384(r4)
	fmuls    f6, f30, f0
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
	lfd      f2, lbl_8051CE30@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_8051CE1C@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051CE18@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051CE20@sda21(r2)
	lfs      f0, lbl_8051CDCC@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f5, f2, f1
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802E4840
	fneg     f1, f5

lbl_802E4840:
	lfs      f3, lbl_8051CE24@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CDCC@sda21(r2)
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
	bge      lbl_802E48A4
	lfs      f0, lbl_8051CE28@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802E48BC

lbl_802E48A4:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802E48BC:
	lfs      f0, 0x198(r31)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2d0(r31)
	stfs     f4, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)
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
 * Address:	802E48F4
 * Size:	000058
 */
void Kabuto::Obj::getSearchedTarget()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getViewAngle__Q34Game6Kabuto3ObjFv
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f2, 0x3d4(r6)
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802E4938
	lfs      f0, lbl_8051CDCC@sda21(r2)
	stfs     f0, 0x2dc(r31)

lbl_802E4938:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E494C
 * Size:	0002BC
 */
void Kabuto::Obj::isAttackableTarget()
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
	mr       r31, r3
	lfs      f0, lbl_8051CDCC@sda21(r2)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802E4998
	fneg     f1, f3

lbl_802E4998:
	lfs      f2, lbl_8051CE24@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CDCC@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802E49F0
	lfs      f0, lbl_8051CE28@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802E4A08

lbl_802E49F0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xa0(r1)
	lwz      r0, 0xa4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802E4A08:
	lwz      r4, 0xc0(r31)
	fneg     f31, f30
	lfs      f0, lbl_8051CE38@sda21(r2)
	addi     r3, r1, 0x24
	lfs      f2, 0x3d4(r4)
	addi     r4, r1, 0x14
	lfs      f1, lbl_8051CE3C@sda21(r2)
	fmuls    f5, f0, f2
	lfs      f3, 0x194(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f4, f1, f2
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051CDCC@sda21(r2)
	fmadds   f3, f30, f5, f3
	stfs     f4, 0x20(r1)
	fmadds   f1, f2, f5, f1
	fmadds   f0, f29, f5, f0
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stb      r0, 0x40(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802E4BC0

lbl_802E4A7C:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4BB8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	bne      lbl_802E4AFC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4AFC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4AFC
	li       r29, 1

lbl_802E4AFC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802E4BB8
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xc(r1)
	lfs      f0, 0x190(r31)
	lfs      f2, 8(r1)
	lfs      f1, 0x18c(r31)
	fsubs    f3, f3, f0
	lfs      f0, lbl_8051CDCC@sda21(r2)
	lfs      f4, 0x10(r1)
	fsubs    f2, f2, f1
	lfs      f1, 0x194(r31)
	fcmpo    cr0, f3, f0
	lwz      r3, 0xc0(r31)
	fsubs    f4, f4, f1
	ble      lbl_802E4B58
	fmr      f1, f3
	b        lbl_802E4B5C

lbl_802E4B58:
	fneg     f1, f3

lbl_802E4B5C:
	lfs      f0, 0x3fc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802E4BB8
	lfs      f1, lbl_8051CDCC@sda21(r2)
	fmuls    f3, f1, f3
	fmadds   f0, f31, f2, f3
	fmadds   f0, f29, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E4B84
	b        lbl_802E4B88

lbl_802E4B84:
	fneg     f0, f0

lbl_802E4B88:
	lfs      f1, lbl_8051CE40@sda21(r2)
	fcmpo    cr0, f0, f1
	bge      lbl_802E4BB8
	fmadds   f0, f29, f2, f3
	fmadds   f2, f30, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802E4BB8
	lfs      f0, 0x3d4(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_802E4BB8
	li       r3, 1
	b        lbl_802E4BD4

lbl_802E4BB8:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_802E4BC0:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4A7C
	li       r3, 0

lbl_802E4BD4:
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
 * Address:	802E4C08
 * Size:	0000E4
 */
void Kabuto::Obj::createStoneAttack()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	li       r4, 0x13
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_802E4CD4
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	li       r0, 0x4a
	addi     r4, r2, lbl_8051CE44@sda21
	stw      r0, 0x30(r1)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	cmplwi   r3, 0
	beq      lbl_802E4C7C
	lfs      f2, lbl_8051CDE8@sda21(r2)
	lfs      f1, 0x190(r30)
	lfs      f3, 0x2c(r3)
	lfs      f0, 0xc(r3)
	fadds    f1, f2, f1
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f3, 0x10(r1)

lbl_802E4C7C:
	lfs      f0, 0x1fc(r30)
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_802E4CD4
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	stw      r30, 0x2c0(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x5f
	bne      lbl_802E4CD4
	li       r0, 1
	stb      r0, 0x2c4(r31)

lbl_802E4CD4:
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
 * Address:	802E4CEC
 * Size:	000050
 */
void Kabuto::Obj::updateCaution()
{
	/*
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_802E4D0C
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_802E4D0C
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802E4D14

lbl_802E4D0C:
	lfs      f0, lbl_8051CDCC@sda21(r2)
	stfs     f0, 0x2dc(r3)

lbl_802E4D14:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2dc(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2dc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E4D3C
 * Size:	000024
 */
void Kabuto::Obj::getViewAngle()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2dc(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802E4D58
	lfs      f1, lbl_8051CE4C@sda21(r2)
	blr

lbl_802E4D58:
	lfs      f1, 0x424(r4)
	blr
	*/
}
} // namespace Game
