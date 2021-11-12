#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80491A18
    lbl_80491A18:
        .4byte 0x6A6E745F
        .4byte 0x6B6F7368
        .4byte 0x69000000
        .4byte 0x6D69756C
        .4byte 0x696E2E63
        .4byte 0x70700000
        .asciz "P2Assert"
        .skip 3
    .global lbl_80491A3C
    lbl_80491A3C:
        .4byte 0x6A6E745F
        .4byte 0x666F6F74
        .4byte 0x52000000
    .global lbl_80491A48
    lbl_80491A48:
        .4byte 0x6A6E745F
        .4byte 0x666F6F74
        .4byte 0x4C000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx10TMiuAttack
    __vt__Q23efx10TMiuAttack:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q34Game6Miulin3Obj
    __vt__Q34Game6Miulin3Obj:
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
        .4byte onInit__Q34Game6Miulin3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game6Miulin3ObjFf
        .4byte doDirectDraw__Q34Game6Miulin3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game6Miulin3ObjFRQ24Game11ShadowParam
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
        .4byte "applyImpulse__Q34Game6Miulin3ObjFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q34Game6Miulin3ObjFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game6Miulin3ObjFv
        .4byte "birth__Q34Game6Miulin3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Miulin3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Miulin3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Miulin3ObjFR8Graphics .4byte
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
        .4byte setParameters__Q34Game6Miulin3ObjFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q34Game6Miulin3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game6Miulin3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game6Miulin3ObjFv
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
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game6Miulin3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q34Game6Miulin3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game6Miulin3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game6Miulin3ObjFPQ34Game6Miulin3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@760@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@760@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E810
    lbl_8051E810:
        .4byte 0x42A00000
    .global lbl_8051E814
    lbl_8051E814:
        .4byte 0x40000000
    .global lbl_8051E818
    lbl_8051E818:
        .4byte 0x00000000
    .global lbl_8051E81C
    lbl_8051E81C:
        .float 1.0
    .global lbl_8051E820
    lbl_8051E820:
        .4byte 0x41A00000
    .global lbl_8051E824
    lbl_8051E824:
        .4byte 0x41C80000
    .global lbl_8051E828
    lbl_8051E828:
        .4byte 0x40A00000
    .global lbl_8051E82C
    lbl_8051E82C:
        .4byte 0x40490FDB
    .global lbl_8051E830
    lbl_8051E830:
        .4byte 0x3BB60B61
    .global lbl_8051E834
    lbl_8051E834:
        .4byte 0x41200000
    .global lbl_8051E838
    lbl_8051E838:
        .float 0.7
    .global lbl_8051E83C
    lbl_8051E83C:
        .4byte 0x43340000
    .global lbl_8051E840
    lbl_8051E840:
        .4byte 0x44610000
    .global lbl_8051E844
    lbl_8051E844:
        .4byte 0x47000000
    .global lbl_8051E848
    lbl_8051E848:
        .4byte 0xC3A2F983
    .global lbl_8051E84C
    lbl_8051E84C:
        .4byte 0x43A2F983
    .global lbl_8051E850
    lbl_8051E850:
        .4byte 0x40C90FDB
        .4byte 0x00000000
    .global lbl_8051E858
    lbl_8051E858:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051E860
    lbl_8051E860:
        .float 0.1
    .global lbl_8051E864
    lbl_8051E864:
        .4byte 0x3F666666
    .global lbl_8051E868
    lbl_8051E868:
        .4byte 0x3F4CCCCD
    .global lbl_8051E86C
    lbl_8051E86C:
        .4byte 0x3F59999A
*/

namespace Game {

/*
 * --INFO--
 * Address:	80364454
 * Size:	000020
 */
void Miulin::Obj::setParameters(void)
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

} // namespace Game

/*
 * --INFO--
 * Address:	80364474
 * Size:	0000B0
 */
void birth__Q34Game6Miulin3ObjFR10Vector3f f(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x4d
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_80364500
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f1, 0(r30)
	mr       r3, r31
	lfs      f0, lbl_8051E810@sda21(r2)
	mr       r5, r29
	stfs     f1, 8(r1)
	addi     r4, r1, 8
	li       r6, 5
	li       r7, 1
	lfs      f1, 4(r30)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 8(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	stfs     f31, 0x14(r1)
	bl
createGroupByEnemy__Q34Game11ShijimiChou3MgrFRQ24Game13EnemyBirthArgPQ24Game9EnemyBaseib

lbl_80364500:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80364524
 * Size:	0000B4
 */
void Miulin::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_80491A18@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r5, lbl_80491A18@l
	stw      r30, 8(r1)
	mr       r30, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x174(r30)
	addi     r4, r31, 0
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2cc(r30)
	lwz      r0, 0x2cc(r30)
	cmplwi   r0, 0
	bne      lbl_80364578
	addi     r3, r31, 0xc
	addi     r5, r31, 0x18
	li       r4, 0x4a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80364578:
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x2d0(r30)
	li       r5, 0
	li       r6, 0
	lfs      f0, 0x198(r30)
	stfs     f0, 0x2d4(r30)
	lfs      f0, 0x19c(r30)
	stfs     f0, 0x2d8(r30)
	lfs      f0, 0x1a0(r30)
	stfs     f0, 0x2dc(r30)
	stw      r0, 0x2e0(r30)
	stb      r0, 0x2e4(r30)
	lwz      r3, 0x2f4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	803645D8
 * Size:	000140
 */
Miulin::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80364618
	addi     r0, r31, 0x2f8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2f8(r31)
	stw      r0, 0x2fc(r31)
	stw      r0, 0x300(r31)

lbl_80364618:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game6Miulin3Obj@ha
	addi     r0, r31, 0x2f8
	addi     r5, r3, __vt__Q34Game6Miulin3Obj@l
	addi     r3, r31, 0x2ec
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r0, 0
	li       r3, 0x2c
	stw      r0, 0x2f4(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803646B4
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game6Miulin14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game6Miulin14ProperAnimator@l
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

lbl_803646B4:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803646E8
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game6Miulin3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game6Miulin3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_803646E8:
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
 * Address:	80364718
 * Size:	00004C
 */
void Miulin::Obj::setFSM(Game::Miulin::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2f4(r3)
	mr       r4, r31
	lwz      r3, 0x2f4(r3)
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
 * Address:	80364764
 * Size:	000080
 */
void Miulin::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2e8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2e8(r31)
	lwz      r3, 0x230(r31)
	cmplwi   r3, 0
	beq      lbl_803647D0
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803647D0
	li       r0, 0
	stw      r0, 0x230(r31)

lbl_803647D0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803647E4
 * Size:	000004
 */
void Miulin::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803647E8
 * Size:	000020
 */
void Miulin::Obj::doDebugDraw(Graphics&)
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
 * Address:	80364808
 * Size:	000088
 */
void Miulin::Obj::getShadowParam(Game::ShadowParam&)
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
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0xc(r3)
	lfs      f5, lbl_8051E814@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f3, lbl_8051E818@sda21(r2)
	lfs      f0, 0x1c(r3)
	lfs      f2, lbl_8051E81C@sda21(r2)
	stfs     f0, 4(r31)
	lfs      f1, lbl_8051E820@sda21(r2)
	lfs      f4, 0x2c(r3)
	lfs      f0, lbl_8051E824@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f4, 0x190(r30)
	fadds    f4, f5, f4
	stfs     f4, 4(r31)
	stfs     f3, 0xc(r31)
	stfs     f2, 0x10(r31)
	stfs     f3, 0x14(r31)
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
 * Address:	80364890
 * Size:	000040
 */
void Miulin::Obj::doSimulation(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x2d0(r3)
	addi     r0, r4, -1
	stw      r0, 0x2d0(r3)
	lwz      r0, 0x2d0(r3)
	cmpwi    r0, 0
	bge      lbl_803648BC
	li       r0, 0
	stw      r0, 0x2d0(r3)

lbl_803648BC:
	bl       doSimulation__Q24Game9EnemyBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803648D0
 * Size:	00002C
 */
void Miulin::Obj::wallCallback(Game::MoveInfo const&)
{
	/*
	li       r4, 0x78
	li       r0, 0
	stw      r4, 0x2d0(r3)
	stw      r0, 0x230(r3)
	lfs      f0, 0x198(r3)
	stfs     f0, 0x2bc(r3)
	lfs      f0, 0x19c(r3)
	stfs     f0, 0x2c0(r3)
	lfs      f0, 0x1a0(r3)
	stfs     f0, 0x2c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803648FC
 * Size:	000028
 */
void Miulin::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 6
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
 * Address:	80364924
 * Size:	00006C
 */
void Miulin::Obj::initWalkSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2ec
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lis      r3, lbl_80491A3C@ha
	lwz      r5, 0x174(r31)
	addi     r6, r3, lbl_80491A3C@l
	lfs      f1, lbl_8051E828@sda21(r2)
	addi     r3, r31, 0x2ec
	li       r4, 0
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lis      r3, lbl_80491A48@ha
	lwz      r5, 0x174(r31)
	addi     r6, r3, lbl_80491A48@l
	lfs      f1, lbl_8051E828@sda21(r2)
	addi     r3, r31, 0x2ec
	li       r4, 1
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
 * Address:	80364990
 * Size:	000008
 */
void Miulin::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	addi     r3, r3, 0x2ec
	blr
	*/
}

/*
 * --INFO--
 * Address:	80364998
 * Size:	000534
 */
void Miulin::Obj::isAttackStart(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stfd     f27, 0xd0(r1)
	psq_st   f27, 216(r1), 0, qr0
	stfd     f26, 0xc0(r1)
	psq_st   f26, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r3
	lfs      f1, lbl_8051E830@sda21(r2)
	lwz      r3, 0xc0(r3)
	lwz      r4, 0x230(r31)
	lfs      f0, 0x844(r3)
	lfs      f2, 0x5b4(r3)
	cmplwi   r4, 0
	fmuls    f0, f1, f0
	lfs      f3, 0x90c(r3)
	lfs      f1, lbl_8051E82C@sda21(r2)
	fmuls    f30, f2, f2
	fmuls    f29, f3, f3
	fmuls    f28, f1, f0
	beq      lbl_80364B3C
	lwz      r12, 0(r4)
	addi     r3, r1, 0x50
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	cror     2, 0, 2
	bne      lbl_80364B3C
	lwz      r4, 0x230(r31)
	addi     r3, r1, 0x80
	lfs      f26, 0x194(r31)
	lwz      r12, 0(r4)
	lfs      f27, 0x18c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x230(r31)
	addi     r3, r1, 0x8c
	lfs      f31, 0x88(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f31, f26
	lfs      f2, 0x8c(r1)
	fadds    f0, f29, f30
	fsubs    f2, f2, f27
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80364B3C
	fsubs    f0, f29, f30
	fcmpo    cr0, f1, f0
	ble      lbl_80364B3C
	li       r3, 1
	b        lbl_80364E80

lbl_80364B3C:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0xa4(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x98(r1)
	stw      r0, 0x9c(r1)
	stw      r3, 0xa0(r1)
	bne      lbl_80364B7C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364C04

lbl_80364B7C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364BE8

lbl_80364B94:
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80364C04
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)

lbl_80364BE8:
	lwz      r12, 0x98(r1)
	addi     r3, r1, 0x98
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364B94

lbl_80364C04:
	fadds    f31, f29, f30
	fsubs    f30, f29, f30
	b        lbl_80364E5C

lbl_80364C10:
	lwz      r3, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364C74
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364C74
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80364C74
	li       r30, 1

lbl_80364C74:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80364DA0
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	cror     2, 0, 2
	bne      lbl_80364DA0
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f29, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x74
	lwz      r12, 0(r29)
	lfs      f26, 0x70(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f26, f29
	lfs      f1, 0x74(r1)
	fsubs    f1, f1, f27
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80364DA0
	fcmpo    cr0, f0, f30
	ble      lbl_80364DA0
	stw      r29, 0x230(r31)
	li       r3, 1
	b        lbl_80364E80

lbl_80364DA0:
	lwz      r0, 0xa4(r1)
	cmplwi   r0, 0
	bne      lbl_80364DCC
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364E5C

lbl_80364DCC:
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364E40

lbl_80364DEC:
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80364E5C
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)

lbl_80364E40:
	lwz      r12, 0x98(r1)
	addi     r3, r1, 0x98
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364DEC

lbl_80364E5C:
	lwz      r3, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x9c(r1)
	cmplw    r4, r3
	bne      lbl_80364C10
	li       r3, 0

lbl_80364E80:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	psq_l    f27, 216(r1), 0, qr0
	lfd      f27, 0xd0(r1)
	psq_l    f26, 200(r1), 0, qr0
	lfd      f26, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x124(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80364ECC
 * Size:	0004A4
 */
void Miulin::Obj::isFindTarget(void)
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
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r31, r3
	lfs      f1, lbl_8051E830@sda21(r2)
	lwz      r4, 0xc0(r3)
	li       r0, 0
	lfs      f2, lbl_8051E82C@sda21(r2)
	lfs      f0, 0x49c(r4)
	fmuls    f0, f1, f0
	stw      r0, 0x230(r3)
	fmuls    f31, f2, f0
	bl       isNowCaution__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364F44
	lfs      f31, lbl_8051E82C@sda21(r2)
	b        lbl_80364F5C

lbl_80364F44:
	mr       r3, r31
	bl       isProhibitedSearch__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364F5C
	li       r3, 0
	b        lbl_8036532C

lbl_80364F5C:
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	lfs      f1, 0x44c(r6)
	fmuls    f0, f1, f1
	stfs     f1, 8(r1)
	stfs     f0, 8(r1)
	lwz      r6, 0xc0(r31)
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	stw      r3, 0x230(r31)
	li       r0, 0
	lfs      f30, lbl_8051E834@sda21(r2)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	lwz      r3, pikiMgr__4Game@sda21(r13)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	fmuls    f30, f30, f30
	stw      r4, 0x60(r1)
	stw      r0, 0x6c(r1)
	stw      r0, 0x64(r1)
	stw      r3, 0x68(r1)
	bne      lbl_80364FD8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_803652C0

lbl_80364FD8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_80365044

lbl_80364FF0:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803652C0
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_80365044:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364FF0
	b        lbl_803652C0

lbl_80365064:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803650C8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803650C8
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803650C8
	li       r30, 1

lbl_803650C8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80365204
	mr       r3, r29
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80365204
	mr       r4, r29
	addi     r3, r1, 0x24
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x30
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x30(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x38(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc(r1)
	lfs      f0, 0x14(r1)
	lfs      f4, 0x34(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f27, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_80365204
	mr       r4, r29
	addi     r3, r1, 0x48
	lwz      r12, 0(r29)
	lfs      f27, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x54
	lwz      r12, 0(r29)
	lfs      f29, 0x50(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f29, f27
	lfs      f2, 0x54(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f2, f28
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80365204
	fcmpo    cr0, f1, f30
	ble      lbl_80365204
	stw      r29, 0x230(r31)
	stfs     f1, 8(r1)

lbl_80365204:
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	bne      lbl_80365230
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_803652C0

lbl_80365230:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_803652A4

lbl_80365250:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803652C0
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_803652A4:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80365250

lbl_803652C0:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x64(r1)
	cmplw    r4, r3
	bne      lbl_80365064
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_80365328
	lwz      r12, 0(r4)
	addi     r3, r1, 0x3c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r1)
	li       r0, 0
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x2c4(r31)
	stb      r0, 0x2e4(r31)
	b        lbl_8036532C

lbl_80365328:
	li       r3, 0

lbl_8036532C:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0xd4(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365370
 * Size:	00003C
 */
void Miulin::Obj::isOutOfTerritory(void)
{
	/*
	lfs      f1, 0x1a0(r3)
	lfs      f0, 0x194(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f2, f1, f0
	lfs      f1, 0x198(r3)
	lfs      f0, 0x18c(r3)
	lfs      f4, 0x35c(r4)
	fsubs    f3, f1, f0
	fmuls    f1, f2, f2
	fmuls    f0, f4, f4
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	803653AC
 * Size:	000088
 */
void Miulin::Obj::isProhibitedSearch(void)
{
	/*
	lwz      r0, 0x2d0(r3)
	cmpwi    r0, 0
	ble      lbl_803653C0
	li       r3, 1
	blr

lbl_803653C0:
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	beq      lbl_8036542C
	lwz      r4, 0xc0(r3)
	lfs      f2, lbl_8051E838@sda21(r2)
	lfs      f3, 0x35c(r4)
	lfs      f1, 0x20c(r3)
	lfs      f0, lbl_8051E818@sda21(r2)
	fmuls    f3, f3, f2
	fcmpo    cr0, f1, f0
	ble      lbl_803653F8
	stfs     f0, 0x20c(r3)
	li       r3, 0
	blr

lbl_803653F8:
	lfs      f2, 0x1a0(r3)
	fmuls    f0, f3, f3
	lfs      f1, 0x194(r3)
	lfs      f3, 0x198(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x18c(r3)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8036542C
	li       r3, 1
	blr

lbl_8036542C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365434
 * Size:	0000AC
 */
void Miulin::Obj::isStartWalk(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051E818@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f1, 0x20c(r3)
	lwz      r3, 0xc0(r3)
	fcmpo    cr0, f1, f0
	lfs      f1, 0x424(r3)
	ble      lbl_80365468
	lfs      f1, lbl_8051E83C@sda21(r2)
	stfs     f0, 0x20c(r31)

lbl_80365468:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r6, 0
	lfs      f2, 0x44c(r5)
	li       r5, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	stw      r3, 0x230(r31)
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_803654C8
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_803654CC

lbl_803654C8:
	li       r3, 0

lbl_803654CC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803654E0
 * Size:	00002C
 */
void Miulin::Obj::setReturnState(void)
{
	/*
	li       r4, 0
	li       r0, 1
	stw      r4, 0x230(r3)
	stb      r0, 0x2e4(r3)
	lfs      f0, 0x198(r3)
	stfs     f0, 0x2bc(r3)
	lfs      f0, 0x19c(r3)
	stfs     f0, 0x2c0(r3)
	lfs      f0, 0x1a0(r3)
	stfs     f0, 0x2c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036550C
 * Size:	000270
 */
void Miulin::Obj::walkFunc(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f31, lbl_8051E81C@sda21(r2)
	lwz      r4, 0x230(r31)
	fmr      f30, f31
	cmplwi   r4, 0
	beq      lbl_80365634
	lwz      r12, 0(r4)
	addi     r3, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x2c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x38
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x38(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x40(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	lfs      f4, 0x3c(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	lwz      r4, 0xc0(r31)
	fabs     f3, f1
	lfs      f1, lbl_8051E830@sda21(r2)
	lfs      f0, 0x8e4(r4)
	lfs      f2, lbl_8051E82C@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	bge      lbl_80365634
	lfs      f31, 0x86c(r4)
	mr       r3, r31
	lfs      f30, 0x894(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	b        lbl_8036563C

lbl_80365634:
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv

lbl_8036563C:
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f29, f31, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f28, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 8(r1)
	stfs     f31, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f2, f29, f28
	lfs      f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	frsp     f3, f1
	mr       r3, r31
	fmuls    f1, f0, f30
	stfs     f2, 0x1d4(r31)
	fmuls    f0, f29, f3
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lwz      r3, 0x2e0(r31)
	addi     r0, r3, 1
	stw      r0, 0x2e0(r31)
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 0x78
	ble      lbl_80365748
	lfs      f1, 0x194(r31)
	lfs      f0, 0x2dc(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2d4(r31)
	lfs      f0, lbl_8051E840@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80365728
	li       r3, 0x78
	li       r0, 0
	stw      r3, 0x2d0(r31)
	stw      r0, 0x230(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)

lbl_80365728:
	lfs      f0, 0x18c(r31)
	li       r0, 0
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x2dc(r31)
	stw      r0, 0x2e0(r31)

lbl_80365748:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036577C
 * Size:	00017C
 */
void Miulin::Obj::turnFunc(float)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	fmr      f30, f1
	lwz      r4, 0x230(r3)
	lfs      f31, 0x2bc(r3)
	cmplwi   r4, 0
	lfs      f28, 0x2c4(r3)
	beq      lbl_803657E4
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x14(r1)
	lfs      f28, 0x1c(r1)

lbl_803657E4:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f1, 0x334(r5)
	lfs      f0, 0x30c(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f30, f1
	fmuls    f30, f30, f0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051E830@sda21(r2)
	lfs      f1, lbl_8051E82C@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80365894
	lfs      f0, lbl_8051E818@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80365890
	fmr      f29, f1
	b        lbl_80365894

lbl_80365890:
	fneg     f29, f1

lbl_80365894:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f1, f31
	lfs      f0, 0x1fc(r31)
	frsp     f1, f1
	stfs     f0, 0x1a8(r31)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803658F8
 * Size:	000050
 */
void Miulin::Obj::isReachToGoal(float)
{
	/*
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	beq      lbl_8036590C
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x384(r4)

lbl_8036590C:
	lfs      f2, 0x194(r3)
	fmuls    f0, f1, f1
	lfs      f1, 0x2c4(r3)
	lfs      f3, 0x18c(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x2bc(r3)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80365940
	li       r3, 1
	blr

lbl_80365940:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365948
 * Size:	00015C
 */
void Miulin::Obj::setNextGoal(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lbz      r0, 0x2e4(r3)
	cmplwi   r0, 0
	beq      lbl_8036598C
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	b        lbl_80365A88

lbl_8036598C:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x198(r31)
	lfs      f31, 0x35c(r3)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051E858@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051E844@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051E850@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051E818@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_80365A14
	lfs      f0, lbl_8051E848@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80365A38

lbl_80365A14:
	lfs      f0, lbl_8051E84C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80365A38:
	lfs      f1, 0x2bc(r31)
	lfs      f0, lbl_8051E818@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2bc(r31)
	bge      lbl_80365A54
	fneg     f3, f3

lbl_80365A54:
	lfs      f1, lbl_8051E84C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2c4(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_80365A88:
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
 * Address:	80365AA4
 * Size:	0002E0
 */
void Miulin::Obj::nextTargetTurnCheck(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r3
	bl       isFindTarget__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80365C0C
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	beq      lbl_80365B10
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	b        lbl_80365C0C

lbl_80365B10:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x198(r31)
	lfs      f31, 0x35c(r3)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051E858@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051E844@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051E850@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051E818@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_80365B98
	lfs      f0, lbl_8051E848@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80365BBC

lbl_80365B98:
	lfs      f0, lbl_8051E84C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80365BBC:
	lfs      f1, 0x2bc(r31)
	lfs      f0, lbl_8051E818@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2bc(r31)
	bge      lbl_80365BD8
	fneg     f3, f3

lbl_80365BD8:
	lfs      f1, lbl_8051E84C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2c4(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_80365C0C:
	lwz      r4, 0x230(r31)
	lwz      r30, 0xc0(r31)
	cmplwi   r4, 0
	lfs      f31, 0x2bc(r31)
	lfs      f28, 0x2c4(r31)
	beq      lbl_80365C40
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x14(r1)
	lfs      f28, 0x1c(r1)

lbl_80365C40:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f2, lbl_8051E860@sda21(r2)
	lfs      f1, 0x334(r5)
	lfs      f0, 0x30c(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f2, f1
	fmuls    f30, f2, f0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051E830@sda21(r2)
	lfs      f1, lbl_8051E82C@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80365CF4
	lfs      f0, lbl_8051E818@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80365CF0
	fmr      f29, f1
	b        lbl_80365CF4

lbl_80365CF0:
	fneg     f29, f1

lbl_80365CF4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f3, f31
	lfs      f1, lbl_8051E830@sda21(r2)
	lfs      f0, 0x1fc(r31)
	lfs      f2, lbl_8051E82C@sda21(r2)
	frsp     f3, f3
	stfs     f0, 0x1a8(r31)
	lfs      f0, 0x8bc(r30)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	bge      lbl_80365D48
	li       r3, 0
	b        lbl_80365D4C

lbl_80365D48:
	li       r3, 1

lbl_80365D4C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365D84
 * Size:	0000D0
 */
void Miulin::Obj::isNowCaution(void)
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
	lfs      f31, 0x3ac(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80365DC4
	li       r3, 1
	b        lbl_80365DE8

lbl_80365DC4:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80365DE4
	li       r3, 1
	b        lbl_80365DE8

lbl_80365DE4:
	li       r3, 0

lbl_80365DE8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80365E08
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x17c(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f

lbl_80365E08:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80365E20
	lfs      f0, lbl_8051E818@sda21(r2)
	li       r3, 1
	stfs     f0, 0x2e8(r31)
	b        lbl_80365E38

lbl_80365E20:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2e8(r31)
	lfs      f0, 0x62c(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f

lbl_80365E38:
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
 * Address:	80365E54
 * Size:	000028
 */
void Miulin::Obj::landEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051E864@sda21(r2)
	addi     r4, r3, 0x18c
	stw      r0, 0x14(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80365E7C
 * Size:	000144
 */
void attackEffect__Q34Game6Miulin3ObjFR10Vector3f(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f31, 0x18c(r30)
	addi     r0, r3, "zero__10Vector3<f>"@l
	lfs      f30, 0x190(r30)
	mr       r31, r4
	lfs      f29, 0x194(r30)
	mr       r4, r0
	lfs      f1, 0x1fc(r30)
	addi     r3, r1, 0x34
	lfs      f0, lbl_8051E818@sda21(r2)
	addi     r5, r1, 0x28
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x30(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r4, r31
	mr       r5, r31
	addi     r3, r1, 0x34
	bl       PSMTXMultVec
	lfs      f2, 0(r31)
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f1, 4(r31)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f0, 8(r31)
	lis      r3, __vt__Q23efx8TSimple2@ha
	fadds    f31, f31, f2
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	stw      r0, 0x18(r1)
	fadds    f30, f30, f1
	li       r6, 0
	fadds    f29, f29, f0
	lis      r4, __vt__Q23efx10TMiuAttack@ha
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r8, 0x1f7
	li       r7, 0x1f8
	stw      r5, 0x18(r1)
	addi     r5, r4, __vt__Q23efx10TMiuAttack@l
	addi     r3, r1, 0x18
	sth      r8, 0x1c(r1)
	addi     r4, r1, 8
	sth      r7, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	stfs     f31, 0xc(r1)
	stfs     f30, 0x10(r1)
	stfs     f29, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r0, 0x280(r30)
	cmplwi   r0, 0
	beq      lbl_80365F90
	lfs      f1, lbl_8051E868@sda21(r2)
	mr       r3, r30
	addi     r4, r30, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_80365F90:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80365FC0
 * Size:	000004
 */
void Miulin::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80365FC4
 * Size:	000004
 */
void applyImpulse__Q34Game6Miulin3ObjFR10Vector3f R10Vector3f(void) { }

namespace Game {

/*
 * --INFO--
 * Address:	80365FC8
 * Size:	000008
 */
u32 Miulin::Obj::getEnemyTypeID(void) { return 0x36; }

/*
 * --INFO--
 * Address:	80365FD0
 * Size:	000008
 */
void Miulin::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051E86C@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365FD8
 * Size:	00001C
 */
void Miulin::Obj::getGoalPos(void)
{
	/*
	lfs      f0, 0x2bc(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x2c0(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x2c4(r4)
	stfs     f0, 8(r3)
	blr
	*/
}
} // namespace Game
