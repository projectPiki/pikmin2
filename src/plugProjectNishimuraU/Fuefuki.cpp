#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80488FA8
    lbl_80488FA8:
        .asciz "ArgCursor"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9ArgCursor
    __vt__Q23efx9ArgCursor:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx9ArgCursorFv
    .global __vt__Q23efx11TFuebugOnpa
    __vt__Q23efx11TFuebugOnpa:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TFuebugOnpaFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx11TFuebugOnpaFv
    .global __vt__Q34Game7Fuefuki3Obj
    __vt__Q34Game7Fuefuki3Obj:
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
        .4byte onInit__Q34Game7Fuefuki3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game7Fuefuki3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game7Fuefuki3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game7Fuefuki3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game7Fuefuki3ObjFv
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
        .4byte getShadowParam__Q34Game7Fuefuki3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game9EnemyBaseFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q34Game7Fuefuki3ObjFv
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
        .4byte __dt__Q34Game7Fuefuki3ObjFv
        .4byte "birth__Q34Game7Fuefuki3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game7Fuefuki3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game7Fuefuki3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game7Fuefuki3ObjFR8Graphics .4byte
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
        .4byte getOffsetForMapCollision__Q34Game7Fuefuki3ObjFv
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
        .4byte createEfxHamon__Q34Game7Fuefuki3ObjFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game7Fuefuki3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game7Fuefuki3ObjFv .4byte
   doFinishStoneState__Q34Game7Fuefuki3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q34Game7Fuefuki3ObjFv .4byte
   doFinishEarthquakeFitState__Q34Game7Fuefuki3ObjFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game7Fuefuki3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game7Fuefuki3ObjFv .4byte doEndMovie__Q34Game7Fuefuki3ObjFv
        .4byte setFSM__Q34Game7Fuefuki3ObjFPQ34Game7Fuefuki3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@756@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
    .global __vt__Q24Game25InteractFuefukiTimerReset
    __vt__Q24Game25InteractFuefukiTimerReset:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game25InteractFuefukiTimerResetFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BC98
    lbl_8051BC98:
        .4byte 0x40A00000
    .global lbl_8051BC9C
    lbl_8051BC9C:
        .4byte 0x00000000
    .global lbl_8051BCA0
    lbl_8051BCA0:
        .float 1.0
    .global lbl_8051BCA4
    lbl_8051BCA4:
        .4byte 0x42960000
    .global lbl_8051BCA8
    lbl_8051BCA8:
        .4byte 0x42480000
    .global lbl_8051BCAC
    lbl_8051BCAC:
        .4byte 0x41700000
    .global lbl_8051BCB0
    lbl_8051BCB0:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051BCB8
    lbl_8051BCB8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051BCC0
    lbl_8051BCC0:
        .4byte 0x40C90FDB
    .global lbl_8051BCC4
    lbl_8051BCC4:
        .4byte 0x41C80000
    .global lbl_8051BCC8
    lbl_8051BCC8:
        .4byte 0x40490FDB
    .global lbl_8051BCCC
    lbl_8051BCCC:
        .4byte 0x3FC90FDB
    .global lbl_8051BCD0
    lbl_8051BCD0:
        .4byte 0x43A2F983
    .global lbl_8051BCD4
    lbl_8051BCD4:
        .4byte 0xC3A2F983
    .global lbl_8051BCD8
    lbl_8051BCD8:
        .4byte 0x441C4000
    .global lbl_8051BCDC
    lbl_8051BCDC:
        .4byte 0x40200000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8029C1C4
 * Size:	000058
 */
void InteractFuefukiTimerReset::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x29
	bne      lbl_8029C204
	lfs      f0, lbl_8051BC98@sda21(r2)
	li       r3, 1
	stfs     f0, 0x2d4(r31)
	b        lbl_8029C208

lbl_8029C204:
	li       r3, 0

lbl_8029C208:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C21C
 * Size:	000140
 */
Fuefuki::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8029C25C
	addi     r0, r31, 0x2f4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2f4(r31)
	stw      r0, 0x2f8(r31)
	stw      r0, 0x2fc(r31)

lbl_8029C25C:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game7Fuefuki3Obj@ha
	addi     r0, r31, 0x2f4
	addi     r5, r3, __vt__Q34Game7Fuefuki3Obj@l
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
	beq      lbl_8029C2E8
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game7Fuefuki14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game7Fuefuki14ProperAnimator@l
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

lbl_8029C2E8:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029C31C
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game7Fuefuki3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game7Fuefuki3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8029C31C:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createFootmarks__Q34Game7Fuefuki3ObjFv
	mr       r3, r31
	bl       createEffect__Q34Game7Fuefuki3ObjFv
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
 * Address:	8029C35C
 * Size:	000004
 */
void Fuefuki::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8029C360
 * Size:	000030
 */
void Fuefuki::Obj::birth(Vector3f&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8029C380
	bl       bornFuefuki__Q25Radar3MgrFv

lbl_8029C380:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C390
 * Size:	000088
 */
void Fuefuki::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2b0(r31)
	stb      r0, 0x2c0(r31)
	bl       resetAppearTimer__Q34Game7Fuefuki3ObjFv
	lfs      f0, lbl_8051BC9C@sda21(r2)
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x2c8(r31)
	bl       resetWhisleTimer__Q34Game7Fuefuki3ObjFb
	lfs      f0, lbl_8051BC9C@sda21(r2)
	li       r0, -1
	mr       r4, r31
	li       r5, 2
	stfs     f0, 0x2d4(r31)
	li       r6, 0
	stfs     f0, 0x2d0(r31)
	stw      r0, 0x2d8(r31)
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
 * Address:	8029C418
 * Size:	000054
 */
void Fuefuki::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishWhisleEffect__Q34Game7Fuefuki3ObjFv
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8029C448
	bl       dieFuefuki__Q25Radar3MgrFv

lbl_8029C448:
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
 * Address:	8029C46C
 * Size:	000078
 */
void Fuefuki::Obj::doUpdate()
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
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x2c4(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2c4(r31)
	lfs      f1, 0x2d4(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8029C4C8
	lfs      f0, lbl_8051BCA0@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x2d4(r31)

lbl_8029C4C8:
	mr       r3, r31
	bl       updateFootmarks__Q34Game7Fuefuki3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C4E4
 * Size:	000004
 */
void Fuefuki::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8029C4E8
 * Size:	000020
 */
void Fuefuki::Obj::doDebugDraw(Graphics&)
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
 * Address:	8029C508
 * Size:	00004C
 */
void Fuefuki::Obj::setFSM(Game::Fuefuki::FSM*)
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
 * Address:	8029C554
 * Size:	0000A4
 */
void Fuefuki::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f3, lbl_8051BC98@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051BC9C@sda21(r2)
	lfs      f2, 0x190(r30)
	lfs      f0, lbl_8051BCA0@sda21(r2)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	lfs      f2, 0x10(r1)
	stfs     f2, 8(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8029C5D0
	lfs      f0, lbl_8051BCA4@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_8029C5D8

lbl_8029C5D0:
	lfs      f0, lbl_8051BCA8@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_8029C5D8:
	lfs      f0, lbl_8051BCAC@sda21(r2)
	stfs     f0, 0x1c(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C5F8
 * Size:	000068
 */
void Fuefuki::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	mr       r4, r3
	stw      r0, 0x14(r1)
	beq      lbl_8029C64C
	lbz      r0, 0x2c0(r4)
	cmplwi   r0, 0
	beq      lbl_8029C64C
	lwz      r0, 0x1e0(r4)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8029C64C
	lwz      r3, 0x2bc(r4)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_8029C650

lbl_8029C64C:
	li       r3, 1

lbl_8029C650:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C660
 * Size:	000068
 */
void Fuefuki::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	mr       r4, r3
	stw      r0, 0x14(r1)
	beq      lbl_8029C6B4
	lbz      r0, 0x2c0(r4)
	cmplwi   r0, 0
	beq      lbl_8029C6B4
	lwz      r0, 0x1e0(r4)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8029C6B4
	lwz      r3, 0x2bc(r4)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_8029C6B8

lbl_8029C6B4:
	li       r3, 1

lbl_8029C6B8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C6C8
 * Size:	000044
 */
void Fuefuki::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029C6F8
	mr       r3, r31
	bl       finishWhisleEffect__Q34Game7Fuefuki3ObjFv

lbl_8029C6F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C70C
 * Size:	000044
 */
void Fuefuki::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029C73C
	mr       r3, r31
	bl       startWhisle__Q34Game7Fuefuki3ObjFv

lbl_8029C73C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C750
 * Size:	000044
 */
void Fuefuki::Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029C780
	mr       r3, r31
	bl       finishWhisleEffect__Q34Game7Fuefuki3ObjFv

lbl_8029C780:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C794
 * Size:	000044
 */
void Fuefuki::Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029C7C4
	mr       r3, r31
	bl       startWhisle__Q34Game7Fuefuki3ObjFv

lbl_8029C7C4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C7D8
 * Size:	000034
 */
void Fuefuki::Obj::doStartWaitingBirthTypeDrop()
{
	blr lis r4, 0x8051 li r0, -0x1 lfs f0, 0x48B0(r4)lis r3, 0x804C stw r0, -0x6948(r13)stfsu f0, 0x2450(r3)stfs f0, -0x6944(r13)stfs f0,
	    0x4(r3)stfs f0, 0x8(r3)blr * /
}

/*
 * --INFO--
 * Address:	8029C80C
 * Size:	000034
 */
void Fuefuki::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game7Fuefuki3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C840
 * Size:	000028
 */
void Fuefuki::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 9
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
 * Address:	8029C868
 * Size:	000020
 */
void Fuefuki::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game7Fuefuki3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C888
 * Size:	000020
 */
void Fuefuki::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game7Fuefuki3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C8A8
 * Size:	0000C0
 */
void Fuefuki::Obj::getOffsetForMapCollision()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_8029C8DC
	cmpwi    r3, 8
	bne      lbl_8029C934

lbl_8029C8DC:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fsubs    f2, f2, f1
	lfs      f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 8(r1)
	lfs      f0, 0x194(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r1)
	stfs     f2, 0(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r30)
	b        lbl_8029C950

lbl_8029C934:
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r30)
	lfs      f0, 4(r3)
	stfs     f0, 4(r30)
	lfs      f0, 8(r3)
	stfs     f0, 8(r30)

lbl_8029C950:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029C968
 * Size:	000078
 */
void Fuefuki::Obj::resetAppearTimer()
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
	lfs      f1, 0x81c(r3)
	lfs      f0, 0x844(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051BCB0@sda21(r2)
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
 * Address:	8029C9E0
 * Size:	00002C
 */
void Fuefuki::Obj::resetWhisleTimer(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_8029CA00
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x8bc(r4)
	lfs      f0, 0x894(r4)
	fsubs    f0, f1, f0
	stfs     f0, 0x2cc(r3)
	blr

lbl_8029CA00:
	lfs      f0, lbl_8051BC9C@sda21(r2)
	stfs     f0, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029CA0C
 * Size:	000078
 */
void Fuefuki::Obj::isWhisleTimeMax()
{
	/*
	lfs      f1, 0x2d4(r3)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029CA60
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_8029CA44
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x8bc(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_8029CA7C
	li       r3, 1
	blr

lbl_8029CA44:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x8e4(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_8029CA7C
	li       r3, 1
	blr

lbl_8029CA60:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x8bc(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_8029CA7C
	li       r3, 1
	blr

lbl_8029CA7C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029CA84
 * Size:	000038
 */
void Fuefuki::Obj::startWhisle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BC9C@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r3)
	stfs     f0, 0x2cc(r3)
	stfs     f0, 0x2d0(r3)
	bl       startWhisleEffect__Q34Game7Fuefuki3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029CABC
 * Size:	000324
 */
void Fuefuki::Obj::updateWhisle()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r4, sys@sda21(r13)
	mr       r31, r3
	lfs      f2, 0x2d0(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051BCA0@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2d0(r3)
	lfs      f1, 0x2d0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8029CB04
	stfs     f0, 0x2d0(r31)

lbl_8029CB04:
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x5b4(r4)
	fmuls    f31, f1, f0
	fmr      f1, f31
	bl       updateWhisleEffect__Q34Game7Fuefuki3ObjFf
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	fmuls    f31, f31, f31
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x1c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x20(r1)
	stw      r3, 0x24(r1)
	bne      lbl_8029CB64
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CD90

lbl_8029CB64:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CBD0

lbl_8029CB7C:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CD90
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_8029CBD0:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CB7C
	b        lbl_8029CD90

lbl_8029CBF0:
	lwz      r3, 0x24(r1)
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
	beq      lbl_8029CCD4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CCD4
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CCD4
	mr       r3, r30
	mr       r4, r31
	bl       isMyPikmin__Q24Game4PikiFPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CCD4
	mr       r4, r30
	addi     r3, r1, 0x10
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	lfs      f0, 0x18(r1)
	lfs      f2, 0x18c(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x10(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_8029CCD4
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game15InteractFueFuki@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	stw      r31, 0xc(r1)
	addi     r0, r3, __vt__Q24Game15InteractFueFuki@l
	mr       r3, r30
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8029CCD4:
	lwz      r0, 0x28(r1)
	cmplwi   r0, 0
	bne      lbl_8029CD00
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CD90

lbl_8029CD00:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CD74

lbl_8029CD20:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CD90
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_8029CD74:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CD20

lbl_8029CD90:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r1)
	cmplw    r4, r3
	bne      lbl_8029CBF0
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8029CDC0
	bl       fuefuki__Q25Radar3MgrFv

lbl_8029CDC0:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029CDE0
 * Size:	000038
 */
void Fuefuki::Obj::finishWhisle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BC9C@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r3)
	stfs     f0, 0x2cc(r3)
	stfs     f0, 0x2d0(r3)
	bl       finishWhisleEffect__Q34Game7Fuefuki3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029CE18
 * Size:	0002A0
 */
void Fuefuki::Obj::setTargetPosition(bool)
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
	stw      r30, 0x28(r1)
	clrlwi.  r0, r4, 0x18
	mr       r31, r4
	mr       r30, r3
	beq      lbl_8029CF20
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	cmplwi   r3, 0
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCC0@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051BCB0@sda21(r2)
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fmr      f30, f0
	beq      lbl_8029CED4
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8029CED4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051BCB8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051BCC4@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCB0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051BCA8@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f31, f0, f1
	b        lbl_8029CFC8

lbl_8029CED4:
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCB0@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x384(r3)
	fmuls    f2, f31, f2
	fdivs    f1, f2, f1
	fadds    f31, f0, f1
	b        lbl_8029CFC8

lbl_8029CF20:
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCB0@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x384(r3)
	fmuls    f2, f30, f2
	fdivs    f1, f2, f1
	fadds    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_8051BCB8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051BCC8@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f4, lbl_8051BCB0@sda21(r2)
	fsubs    f5, f1, f2
	lfs      f3, 0x18c(r30)
	lfs      f1, 0x198(r30)
	lfs      f2, 0x194(r30)
	fmuls    f5, f0, f5
	lfs      f0, 0x1a0(r30)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	fdivs    f30, f5, f4
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fadds    f0, f1, f30
	lfs      f1, lbl_8051BCCC@sda21(r2)
	fadds    f30, f1, f0

lbl_8029CFC8:
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fmr      f1, f30
	fcmpo    cr0, f30, f0
	bge      lbl_8029CFDC
	fneg     f1, f30

lbl_8029CFDC:
	lfs      f3, lbl_8051BCD0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BC9C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 0x1a0(r30)
	fcmpo    cr0, f30, f0
	lfs      f4, 0x19c(r30)
	fctiwz   f0, f2
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f31, f0, f1
	bge      lbl_8029D040
	lfs      f0, lbl_8051BCD4@sda21(r2)
	fmuls    f0, f30, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8029D058

lbl_8029D040:
	fmuls    f0, f30, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8029D058:
	lfs      f0, 0x198(r30)
	clrlwi.  r0, r31, 0x18
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2dc(r30)
	stfs     f4, 0x2e0(r30)
	stfs     f2, 0x2e4(r30)
	beq      lbl_8029D090
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r30, 0x2dc
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x2e0(r30)

lbl_8029D090:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D0B8
 * Size:	0001E0
 */
void Fuefuki::Obj::isJumpAway()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	mr       r29, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x2c4(r29)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8029D0F8
	li       r3, 1
	b        lbl_8029D274

lbl_8029D0F8:
	lfs      f1, 0x2d4(r29)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8029D270
	lfs      f1, 0x3ac(r3)
	addi     r3, r1, 0x24
	lfs      f0, 0x18c(r29)
	addi     r4, r1, 0x14
	fmuls    f31, f1, f1
	stfs     f0, 0x14(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stb      r0, 0x40(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8029D260

lbl_8029D158:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D258
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r30, r3
	bne      lbl_8029D1FC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D1FC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D1FC
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029D1FC
	mr       r3, r31
	mr       r4, r29
	bl       isMyPikmin__Q24Game4PikiFPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029D1FC
	li       r30, 1

lbl_8029D1FC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8029D258
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r29)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x18c(r29)
	fsubs    f1, f1, f0
	lfs      f0, 8(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_8029D258
	lwz      r4, 0xc0(r29)
	li       r3, 1
	lfs      f0, 0x81c(r4)
	stfs     f0, 0x2c4(r29)
	b        lbl_8029D274

lbl_8029D258:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_8029D260:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D158

lbl_8029D270:
	li       r3, 0

lbl_8029D274:
	psq_l    f31, 168(r1), 0, qr0
	lwz      r0, 0xb4(r1)
	lfd      f31, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D298
 * Size:	000048
 */
void Fuefuki::Obj::isArriveTarget()
{
	/*
	lwz      r0, 0x288(r3)
	cmplwi   r0, 0
	bne      lbl_8029D2D0
	lfs      f1, 0x194(r3)
	lfs      f0, 0x2e4(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x2dc(r3)
	lfs      f0, lbl_8051BCD8@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8029D2D8

lbl_8029D2D0:
	li       r3, 1
	blr

lbl_8029D2D8:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D2E0
 * Size:	000050
 */
void Fuefuki::Obj::createFootmarks()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8029D30C
	bl       __ct__Q24Game9FootmarksFv
	mr       r0, r3

lbl_8029D30C:
	stw      r0, 0x2e8(r31)
	li       r4, 0xa
	lwz      r3, 0x2e8(r31)
	bl       alloc__Q24Game9FootmarksFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D330
 * Size:	0000BC
 */
void Fuefuki::Obj::updateFootmarks()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfd      f2, lbl_8051BCB8@sda21(r2)
	stw      r0, 0x44(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_8051BC9C@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x2e8(r3)
	lwz      r4, 0x50(r4)
	lwz      r3, 0x10(r3)
	stw      r0, 0x28(r1)
	subf     r0, r4, r3
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	lfd      f1, 0x28(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8029D384
	b        lbl_8029D388

lbl_8029D384:
	fneg     f1, f1

lbl_8029D388:
	lfs      f0, lbl_8051BCDC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029D3D8
	addi     r3, r1, 0x14
	bl       __ct__Q24Game8FootmarkFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x2e8(r31)
	bl       add__Q24Game9FootmarksFRQ24Game8Footmark

lbl_8029D3D8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D3EC
 * Size:	00019C
 */
void Fuefuki::Obj::createEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 0x290
	stw      r29, 0x14(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8029D4D0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx7TCursor@ha
	addi     r5, r4, __vt__Q23efx5TBase@l
	addi     r29, r31, 0x14
	stw      r5, 0(r31)
	addi     r0, r3, __vt__Q23efx7TCursor@l
	lis      r3, __vt__Q23efx11TOneEmitter@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	stw      r0, 0(r31)
	addi     r6, r3, __vt__Q23efx11TOneEmitter@l
	addi     r3, r4, __vt__18JPAEmitterCallBack@l
	li       r4, 0
	stw      r5, 4(r31)
	addi     r5, r6, 0x14
	li       r0, 0x19
	stw      r3, 8(r31)
	mr       r3, r29
	stw      r6, 4(r31)
	stw      r5, 8(r31)
	stw      r4, 0xc(r31)
	sth      r0, 0x10(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23efx7Context@ha
	lis      r4, __ct__Q23efx7ContextFv@ha
	addi     r0, r3, __vt__Q23efx7Context@l
	li       r6, 0x24
	stw      r0, 0(r29)
	li       r0, 0
	lis      r3, __dt__Q23efx7ContextFv@ha
	addi     r4, r4, __ct__Q23efx7ContextFv@l
	stw      r0, 0x10(r29)
	addi     r5, r3, __dt__Q23efx7ContextFv@l
	addi     r3, r31, 0x3c
	li       r7, 0x10
	stw      r0, 0xc(r29)
	stw      r0, 8(r29)
	stw      r0, 4(r29)
	stw      r0, 0x24(r31)
	stw      r0, 0x20(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	bl       __construct_array
	mr       r3, r31
	li       r4, 0
	li       r5, 0x10
	bl       init__Q23efx7TCursorFll

lbl_8029D4D0:
	stw      r31, 0x2ec(r30)
	li       r4, 3
	li       r5, 0xa
	lwz      r3, 0x2ec(r30)
	bl       init__Q23efx7TCursorFll
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8029D568
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx11TFuebugOnpa@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TFuebugOnpa@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x6b
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

lbl_8029D568:
	stw      r3, 0x2f0(r30)
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
 * Address:	8029D588
 * Size:	00009C
 */
void Fuefuki::Obj::startWhisleEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx9ArgCursor@ha
	stw      r0, 0x34(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051BC9C@sda21(r2)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx9ArgCursor@l
	addi     r4, r1, 8
	lfs      f1, 0x18c(r3)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x10(r1)
	lfs      f1, 0x194(r3)
	stfs     f1, 0x14(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x18(r1)
	lwz      r3, 0x2ec(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	addi     r0, r31, 0x18c
	li       r4, 0
	stw      r0, 0x10(r3)
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D624
 * Size:	000078
 */
void Fuefuki::Obj::updateWhisleEffect(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx9ArgCursor@ha
	stw      r0, 0x34(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx9ArgCursor@l
	addi     r4, r1, 8
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	stw      r0, 8(r1)
	stfs     f1, 0x18(r1)
	lwz      r3, 0x2ec(r3)
	bl       update__Q23efx7TCursorFPQ23efx3Arg
	lwz      r4, 0xc0(r31)
	lwz      r3, 0x2ec(r31)
	lfs      f0, 0x5dc(r4)
	stfs     f0, 0x28c(r3)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D69C
 * Size:	000050
 */
void Fuefuki::Obj::finishWhisleEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
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

namespace efx {

/*
 * --INFO--
 * Address:	8029D6EC
 * Size:	00002C
 */
void TCursor::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 4(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8029D718
 * Size:	000078
 */
void Fuefuki::Obj::createDownEffect(float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lwz      r12, 0(r3)
	fmr      f31, f1
	mr       r31, r3
	addi     r4, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x190(r31)
	fmr      f1, f31
	lfs      f2, 0x14(r1)
	mr       r3, r31
	lfs      f0, 0x1c(r1)
	addi     r4, r1, 8
	stfs     f2, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
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
 * Address:	8029D790
 * Size:	000048
 */
void Fuefuki::Obj::createEfxHamon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029D7C4
	mr       r3, r31
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_8029D7C4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D7D8
 * Size:	000050
 */
void Fuefuki::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwzu     r12, 4(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8029D828
 * Size:	00001C
 */
void TOneEmitter::endDemoDrawOn()
{
	/*
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beqlr
	lwz      r0, 0xf4(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xf4(r3)
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8029D844
 * Size:	000050
 */
void Fuefuki::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwzu     r12, 4(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
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

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	8029D894
 * Size:	00001C
 */
void TOneEmitter::startDemoDrawOff()
{
	/*
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beqlr
	lwz      r0, 0xf4(r3)
	ori      r0, r0, 4
	stw      r0, 0xf4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D8B0
 * Size:	00000C
 */
void ArgCursor::getName()
{
	/*
	lis      r3, lbl_80488FA8@ha
	addi     r3, r3, lbl_80488FA8@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D8BC
 * Size:	00009C
 */
TFuebugOnpa::~TFuebugOnpa()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8029D93C
	lis      r3, __vt__Q23efx11TFuebugOnpa@ha
	addi     r3, r3, __vt__Q23efx11TFuebugOnpa@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029D92C
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8029D92C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8029D92C:
	extsh.   r0, r31
	ble      lbl_8029D93C
	mr       r3, r30
	bl       __dl__FPv

lbl_8029D93C:
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
 * Address:	8029D958
 * Size:	000004
 */
void Fuefuki::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8029D95C
 * Size:	000004
 */
void Fuefuki::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8029D960
 * Size:	000008
 */
u32 Fuefuki::Obj::getEnemyTypeID() { return 0x29; }

/*
 * --INFO--
 * Address:	8029D968
 * Size:	000008
 */
void Fuefuki::Obj::getFootmarks()
{
	/*
	lwz      r3, 0x2e8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D970
 * Size:	000014
 */
void EnemyBase::@756 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -756
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8029D984
 * Size:	000014
 */
void EnemyBase::@756 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -756
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8029D998
 * Size:	000014
 */
void EnemyBase::@756 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -756
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8029D9AC
 * Size:	000014
 */
void EnemyBase::@756 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -756
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8029D9C0
 * Size:	000014
 */
void EnemyBase::@756 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -756
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8029D9D4
 * Size:	000014
 */
void EnemyBase::@756 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -756
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	8029D9E8
 * Size:	000008
 */
TFuebugOnpa::@4 @~TFuebugOnpa()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx11TFuebugOnpaFv
	*/
}
} // namespace efx

} // namespace efx
