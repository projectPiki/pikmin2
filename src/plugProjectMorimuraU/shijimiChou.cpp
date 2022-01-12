#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_shijimiChou_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80493F80
    lbl_80493F80:
        .4byte 0x7368696A
        .4byte 0x696D6943
        .4byte 0x686F7500
        .4byte 0x6D61745F
        .4byte 0x7368696A
        .4byte 0x696D695F
        .4byte 0x68616E65
        .4byte 0x5F760000
    .global lbl_80493FA0
    lbl_80493FA0:
        .4byte 0x7368696A
        .4byte 0x696D6943
        .4byte 0x686F752E
        .4byte 0x63707000
    .global lbl_80493FB0
    lbl_80493FB0:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx8TChouHit
    __vt__Q23efx8TChouHit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx7ArgChou
    __vt__Q23efx7ArgChou:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx7ArgChouFv
    .global __vt__Q34Game11ShijimiChou3Obj
    __vt__Q34Game11ShijimiChou3Obj:
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
        .4byte onInit__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q34Game11ShijimiChou3ObjFv
        .4byte doEntry__Q34Game11ShijimiChou3ObjFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game11ShijimiChou3ObjFf
        .4byte doDirectDraw__Q34Game11ShijimiChou3ObjFR8Graphics
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
        .4byte collisionCallback__Q34Game11ShijimiChou3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game11ShijimiChou3ObjFRQ24Game11ShadowParam
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
        .4byte ignoreAtari__Q34Game11ShijimiChou3ObjFPQ24Game8Creature
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
        .4byte __dt__Q34Game11ShijimiChou3ObjFv
        .4byte "birth__Q34Game11ShijimiChou3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game11ShijimiChou3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game11ShijimiChou3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game11ShijimiChou3ObjFv
        .4byte doAnimationCullingOn__Q34Game11ShijimiChou3ObjFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game11ShijimiChou3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game11ShijimiChou3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q34Game11ShijimiChou3ObjFv
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
        .4byte getEnemyTypeID__Q34Game11ShijimiChou3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game11ShijimiChou3ObjFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game11ShijimiChou3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q34Game11ShijimiChou3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game11ShijimiChou3ObjFv .4byte
   doEndMovie__Q34Game11ShijimiChou3ObjFv .4byte
   setFSM__Q34Game11ShijimiChou3ObjFPQ34Game11ShijimiChou3FSM .4byte 0 .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@828@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@828@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@828@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@828@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@828@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@828@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mMatColorY0__Q24Game11ShijimiChou
    mMatColorY0__Q24Game11ShijimiChou:
        .skip 0x8
    .global mMatColorR0__Q24Game11ShijimiChou
    mMatColorR0__Q24Game11ShijimiChou:
        .skip 0x8
    .global mMatColorB0__Q24Game11ShijimiChou
    mMatColorB0__Q24Game11ShijimiChou:
        .skip 0x8
    .global mMatKColorY__Q24Game11ShijimiChou
    mMatKColorY__Q24Game11ShijimiChou:
        .skip 0x4
    .global mMatKColorR__Q24Game11ShijimiChou
    mMatKColorR__Q24Game11ShijimiChou:
        .skip 0x4
    .global mMatKColorB__Q24Game11ShijimiChou
    mMatKColorB__Q24Game11ShijimiChou:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051EEF8
    lbl_8051EEF8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051EF00
    lbl_8051EF00:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051EF08
    lbl_8051EF08:
        .4byte 0x00000000
    .global lbl_8051EF0C
    lbl_8051EF0C:
        .4byte 0x40C90FDB
    .global lbl_8051EF10
    lbl_8051EF10:
        .4byte 0xC3A2F983
    .global lbl_8051EF14
    lbl_8051EF14:
        .4byte 0x43A2F983
    .global lbl_8051EF18
    lbl_8051EF18:
        .4byte 0x40400000
    .global lbl_8051EF1C
    lbl_8051EF1C:
        .float 0.1
    .global lbl_8051EF20
    lbl_8051EF20:
        .4byte 0x40000000
    .global lbl_8051EF24
    lbl_8051EF24:
        .4byte 0x42C80000
    .global lbl_8051EF28
    lbl_8051EF28:
        .float 1.0
    .global lbl_8051EF2C
    lbl_8051EF2C:
        .4byte 0x41A00000
    .global lbl_8051EF30
    lbl_8051EF30:
        .4byte 0x40E00000
    .global lbl_8051EF34
    lbl_8051EF34:
        .4byte 0x42480000
    .global lbl_8051EF38
    lbl_8051EF38:
        .4byte 0x43480000
    .global lbl_8051EF3C
    lbl_8051EF3C:
        .4byte 0x447A0000
    .global lbl_8051EF40
    lbl_8051EF40:
        .4byte 0x43B40000
    .global lbl_8051EF44
    lbl_8051EF44:
        .4byte 0x40490FDB
    .global lbl_8051EF48
    lbl_8051EF48:
        .4byte 0x3BB60B61
    .global lbl_8051EF4C
    lbl_8051EF4C:
        .4byte 0x3C23D70A
    .global lbl_8051EF50
    lbl_8051EF50:
        .4byte 0x3E4CCCCD
    .global lbl_8051EF54
    lbl_8051EF54:
        .float 0.05
    .global lbl_8051EF58
    lbl_8051EF58:
        .4byte 0x3F99999A
    .global lbl_8051EF5C
    lbl_8051EF5C:
        .float 0.3
    .global lbl_8051EF60
    lbl_8051EF60:
        .4byte 0x3CA3D70A
    .global lbl_8051EF64
    lbl_8051EF64:
        .4byte 0xBF800000
    .global lbl_8051EF68
    lbl_8051EF68:
        .4byte 0x43FA0000
    .global lbl_8051EF6C
    lbl_8051EF6C:
        .4byte 0x43340000
    .global lbl_8051EF70
    lbl_8051EF70:
        .float 0.5
    .global lbl_8051EF74
    lbl_8051EF74:
        .4byte 0x41200000
    .global lbl_8051EF78
    lbl_8051EF78:
        .4byte 0x3EB33333
    .global lbl_8051EF7C
    lbl_8051EF7C:
        .4byte 0x41726743
        .4byte 0x686F7500
*/

namespace Game {

/*
 * --INFO--
 * Address:	80389634
 * Size:	0000A4
 */
void ShijimiChou::Obj::setParameters(void)
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
	mr       r31, r3
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x960(r3)
	lfs      f30, 0x964(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	fsubs    f0, f31, f30
	lfd      f3, lbl_8051EF00@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051EEF8@sda21(r2)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f1, f0, f1, f30
	stfs     f1, 0x1f8(r31)
	stfs     f1, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f1, 0x170(r31)
	lwz      r3, 0x114(r31)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf
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

} // namespace Game

/*
 * --INFO--
 * Address:	803896D8
 * Size:	000020
 */
void birth__Q34Game11ShijimiChou3ObjFR10Vector3f f(void)
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

namespace Game {

/*
 * --INFO--
 * Address:	803896F8
 * Size:	00024C
 */
void ShijimiChou::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_80493F80@ha
	stw      r0, 0x44(r1)
	stmw     r21, 0x14(r1)
	mr       r30, r3
	addi     r31, r5, lbl_80493F80@l
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r30)
	addi     r3, r30, 0x2dc
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm   r0, r0, 0, 0x14, 0x12
	stw      r0, 0x1e0(r30)
	lwz      r4, 0x180(r30)
	lwz      r4, 0x44(r4)
	bl       init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0xc(r1)
	li       r0, 0
	lfd      f3, lbl_8051EF00@sda21(r2)
	stw      r3, 8(r1)
	lfs      f0, lbl_8051EEF8@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f1, lbl_8051EF08@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	stfs     f0, 0x2f0(r30)
	stfs     f1, 0x2f4(r30)
	stw      r0, 0x2c4(r30)
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x304(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x308(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x30c(r30)
	stfs     f1, 0x2f8(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x2fc(r30)
	stfs     f1, 0x300(r30)
	stb      r0, 0x320(r30)
	stfs     f1, 0x324(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x330(r30)
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x198(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x19c(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x1a0(r30)
	stw      r0, 0x2c8(r30)
	stw      r0, 0x2c0(r30)
	lwz      r3, 0x2e8(r30)
	cmplwi   r3, 0
	beq      lbl_80389808
	cmplw    r3, r30
	beq      lbl_80389808
	lwz      r0, 0x2c0(r3)
	stw      r0, 0x2c0(r30)

lbl_80389808:
	lwz      r3, 0x1e0(r30)
	li       r0, 0
	mr       r4, r30
	li       r5, 1
	rlwinm   r3, r3, 0, 0x1a, 0x18
	stw      r3, 0x1e0(r30)
	stb      r0, 0x1f3(r30)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
	li       r21, 0xff
	addi     r22, r13, mMatColorY0__Q24Game11ShijimiChou@sda21
	li       r23, 0xaf
	li       r27, 0x5a
	li       r11, 0x55
	li       r7, 0x50
	li       r5, 5
	addi     r6, r13, mMatKColorR__Q24Game11ShijimiChou@sda21
	li       r8, 0xa
	addi     r9, r13, mMatKColorY__Q24Game11ShijimiChou@sda21
	li       r10, 0x2d
	addi     r3, r13, mMatKColorB__Q24Game11ShijimiChou@sda21
	li       r0, 0x11
	li       r24, 0x78
	addi     r25, r13, mMatColorR0__Q24Game11ShijimiChou@sda21
	li       r26, 0xb4
	li       r28, 0x1e
	addi     r29, r13, mMatColorB0__Q24Game11ShijimiChou@sda21
	li       r12, 0xd2
	sth      r21, mMatColorY0__Q24Game11ShijimiChou@sda21(r13)
	addi     r4, r31, 0xc
	sth      r21, 2(r22)
	sth      r23, 4(r22)
	sth      r21, mMatColorR0__Q24Game11ShijimiChou@sda21(r13)
	sth      r24, 2(r25)
	sth      r26, 4(r25)
	sth      r27, mMatColorB0__Q24Game11ShijimiChou@sda21(r13)
	sth      r28, 2(r29)
	sth      r12, 4(r29)
	stb      r11, mMatKColorY__Q24Game11ShijimiChou@sda21(r13)
	stb      r10, 1(r9)
	stb      r8, 2(r9)
	stb      r7, mMatKColorR__Q24Game11ShijimiChou@sda21(r13)
	stb      r8, 1(r6)
	stb      r5, 2(r6)
	stb      r5, mMatKColorB__Q24Game11ShijimiChou@sda21(r13)
	stb      r0, 1(r3)
	stb      r5, 2(r3)
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r21, 4(r3)
	lwz      r3, 0x64(r21)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r21)
	rlwinm   r0, r3, 2, 0xe, 0x1d
	lwzx     r0, r4, r0
	stw      r0, 0x2ec(r30)
	lwz      r0, 0x2ec(r30)
	cmplwi   r0, 0
	bne      lbl_80389908
	addi     r3, r31, 0x20
	addi     r5, r31, 0x30
	li       r4, 0x6b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80389908:
	lwz      r3, 0x2d8(r30)
	mr       r4, r30
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x321(r30)
	lmw      r21, 0x14(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80389944
 * Size:	000250
 */
ShijimiChou::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80389984
	addi     r0, r31, 0x33c
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x33c(r31)
	stw      r0, 0x340(r31)
	stw      r0, 0x344(r31)

lbl_80389984:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game11ShijimiChou3Obj@ha
	addi     r4, r31, 0x33c
	addi     r3, r3, __vt__Q34Game11ShijimiChou3Obj@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r5, r3, 0x1b0
	addi     r6, r3, 0x2fc
	addi     r3, r31, 0x2dc
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r4, r5, r4
	stw      r4, 0xc(r5)
	stw      r0, 0x2bc(r31)
	stw      r0, 0x2c0(r31)
	stw      r0, 0x2c8(r31)
	stw      r0, 0x2d8(r31)
	bl       __ct__Q24Game13UpdateContextFv
	li       r0, 0
	li       r3, 0x2c
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)
	stb      r0, 0x320(r31)
	stw      r0, 0x328(r31)
	stw      r0, 0x32c(r31)
	stw      r0, 0x334(r31)
	stw      r0, 0x338(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80389A4C
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game11ShijimiChou14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game11ShijimiChou14ProperAnimator@l
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

lbl_80389A4C:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80389A80
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game11ShijimiChou3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game11ShijimiChou3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_80389A80:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80389B18
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
	lis      r4, __vt__Q23efx9TChouDown@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TChouDown@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	addi     r5, r31, 0x18c
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r5, 0x10(r3)
	sth      r8, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80389B18:
	stw      r3, 0x334(r31)
	lwz      r0, 0x334(r31)
	cmplwi   r0, 0
	bne      lbl_80389B44
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x8c
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80389B44:
	mr       r3, r31
	bl       newPSCluster_SijimiChou__FPQ24Game8Creature
	stw      r3, 0x338(r31)
	lwz      r0, 0x338(r31)
	cmplwi   r0, 0
	bne      lbl_80389B78
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x8f
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80389B78:
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
 * Address:	80389B94
 * Size:	00004C
 */
void ShijimiChou::Obj::setFSM(Game::ShijimiChou::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2d8(r3)
	mr       r4, r31
	lwz      r3, 0x2d8(r3)
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
 * Address:	80389BE0
 * Size:	0000AC
 */
void ShijimiChou::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051EF0C@sda21(r2)
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80389C50
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80389C74

lbl_80389C50:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80389C74:
	stfs     f0, 0x2f4(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80389C8C
 * Size:	000004
 */
void ShijimiChou::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80389C90
 * Size:	000020
 */
void ShijimiChou::Obj::doDebugDraw(Graphics&)
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
 * Address:	80389CB0
 * Size:	000020
 */
void ShijimiChou::Obj::doAnimation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doAnimation__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80389CD0
 * Size:	00004C
 */
void ShijimiChou::Obj::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x2e8(r3)
	cmplw    r0, r3
	bne      lbl_80389D08
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80389D0C
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_80389D0C
	bl       doEntry__Q24Game9EnemyBaseFv
	b        lbl_80389D0C

lbl_80389D08:
	bl       doEntry__Q24Game9EnemyBaseFv

lbl_80389D0C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80389D1C
 * Size:	0001A0
 */
void ShijimiChou::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	li       r0, 0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r4, 0x188(r3)
	stb      r0, 0x24(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x17c(r31)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80389DD8
	addi     r4, r31, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lfs      f1, 0x168(r31)
	addi     r3, r1, 0x14
	lfs      f2, 0x16c(r31)
	lfs      f3, 0x170(r31)
	bl       PSMTXScale
	addi     r3, r31, 0x138
	addi     r4, r1, 0x14
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, 0x144(r31)
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f0, 8(r1)
	lfs      f0, 0x154(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	b        lbl_80389DE8

lbl_80389DD8:
	addi     r3, r31, 0x138
	addi     r4, r31, 0x18c
	addi     r5, r31, 0x1a4
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_80389DE8:
	mr       r3, r31
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80389E78
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x949(r3)
	cmplwi   r0, 0
	beq      lbl_80389E5C
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_80389E5C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	beq      lbl_80389E5C
	lwz      r4, 0x174(r31)
	mr       r3, r31
	lwz      r30, 8(r4)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lwz      r3, 0x180(r31)
	mr       r4, r30
	bl       fetch__Q34Game11ShijimiChou3MgrFP8J3DModelf
	b        lbl_80389E94

lbl_80389E5C:
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80389E94

lbl_80389E78:
	lwz      r3, 0x174(r31)
	li       r0, 0
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r3, 0(r3)
	stw      r0, 0x54(r3)

lbl_80389E94:
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	mr       r3, r31
	bl       updateCluster__Q34Game11ShijimiChou3ObjFv
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
 * Address:	80389EBC
 * Size:	0000B8
 */
void ShijimiChou::Obj::doAnimationCullingOn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateCluster__Q34Game11ShijimiChou3ObjFv
	mr       r3, r31
	bl       doAnimationCullingOn__Q24Game9EnemyBaseFv
	lwz      r3, 0x2e8(r31)
	cmplwi   r3, 0
	beq      lbl_80389F60
	cmplw    r3, r31
	beq      lbl_80389F60
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80389F0C
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_80389F60

lbl_80389F0C:
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x198(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f2, f1, f0
	lfs      f1, lbl_8051EF18@sda21(r2)
	lfs      f0, 0x35c(r3)
	fabs     f3, f2
	fmuls    f2, f1, f0
	frsp     f0, f3
	fcmpo    cr0, f0, f2
	bgt      lbl_80389F54
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1a0(r31)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80389F60

lbl_80389F54:
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80389F60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80389F74
 * Size:	000084
 */
void ShijimiChou::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x2e8(r3)
	cmplwi   r4, 0
	beq      lbl_80389FB0
	cmplw    r4, r30
	beq      lbl_80389FB0
	lwz      r3, 0x328(r4)
	addi     r0, r3, -1
	stw      r0, 0x328(r4)

lbl_80389FB0:
	li       r0, 0
	stw      r0, 0x2c8(r30)
	lwz      r3, 0x334(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x2dc
	bl       exit__Q24Game13UpdateContextFv
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
 * Address:	80389FF8
 * Size:	000438
 */
void ShijimiChou::Obj::doSimulation(float)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	lfs      f0, lbl_8051EF08@sda21(r2)
	mr       r31, r3
	fmr      f31, f1
	stfs     f0, 0x11c(r3)
	stfs     f0, 0x120(r3)
	stfs     f0, 0x124(r3)
	lwz      r0, 0xf0(r3)
	cmplwi   r0, 0
	beq      lbl_8038A39C
	lbz      r0, 0x320(r31)
	cmplwi   r0, 0
	bne      lbl_8038A39C
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_8038A39C
	lwz      r0, 0x2e8(r31)
	cmplw    r0, r31
	bne      lbl_8038A078
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x176
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038A078:
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r4, r3, "zero__10Vector3<f>"@l
	lis      r3, __vt__Q23efx7ArgChou@ha
	addi     r5, r5, __vt__Q23efx3Arg@l
	lfs      f2, 0(r4)
	lfs      f1, 4(r4)
	li       r0, 0
	lfs      f0, 8(r4)
	addi     r3, r3, __vt__Q23efx7ArgChou@l
	stw      r5, 0x50(r1)
	stfs     f2, 0x54(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	stw      r3, 0x50(r1)
	stw      r0, 0x60(r1)
	lwz      r0, 0x2bc(r31)
	cmpwi    r0, 1
	bne      lbl_8038A0D0
	li       r0, 1
	stw      r0, 0x60(r1)
	b        lbl_8038A0E0

lbl_8038A0D0:
	cmpwi    r0, 2
	bne      lbl_8038A0E0
	li       r0, 2
	stw      r0, 0x60(r1)

lbl_8038A0E0:
	lwz      r3, 0x334(r31)
	addi     r4, r1, 0x50
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TChouHit@ha
	stw      r0, 0x28(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx3Arg@ha
	li       r7, 0x18
	stw      r0, 0x28(r1)
	addi     r5, r4, __vt__Q23efx8TChouHit@l
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r6, 0
	sth      r7, 0x2c(r1)
	addi     r3, r1, 0x28
	addi     r4, r1, 0x18
	stw      r6, 0x30(r1)
	stw      r5, 0x28(r1)
	stw      r0, 0x18(r1)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x24(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	li       r0, 1
	mr       r4, r31
	stb      r0, 0x320(r31)
	li       r5, 2
	li       r6, 0
	lwz      r3, 0x2d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x34
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x34
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8038A1D0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8038A370

lbl_8038A1D0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8038A23C

lbl_8038A1E8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8038A370
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8038A23C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038A1E8
	b        lbl_8038A370

lbl_8038A25C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038A2B4
	lfs      f1, 0x104(r30)
	lfs      f0, lbl_8051EF1C@sda21(r2)
	lfs      f2, 0x108(r30)
	lfs      f3, 0x10c(r30)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	stfs     f1, 0x104(r30)
	stfs     f2, 0x108(r30)
	stfs     f3, 0x10c(r30)

lbl_8038A2B4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8038A2E0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8038A370

lbl_8038A2E0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8038A354

lbl_8038A300:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8038A370
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8038A354:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038A300

lbl_8038A370:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8038A25C
	addi     r3, r1, 0x34
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_8038A39C:
	fmr      f1, f31
	mr       r3, r31
	bl       doSimulation__Q24Game9EnemyBaseFf
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8038A410
	lfs      f1, lbl_8051EF20@sda21(r2)
	lfs      f0, 0x300(r31)
	lfs      f2, 0x190(r31)
	fadds    f0, f1, f0
	fcmpo    cr0, f2, f0
	blt      lbl_8038A3D8
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_8038A410

lbl_8038A3D8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038A3FC
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_8038A3FC
	lfs      f0, 0x330(r31)
	stfs     f0, 0x308(r31)
	b        lbl_8038A410

lbl_8038A3FC:
	mr       r3, r31
	bl       genItem__Q34Game11ShijimiChou3ObjFv
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8038A410:
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038A430
 * Size:	00026C
 */
void ShijimiChou::Obj::changeMaterial(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	lwz      r0, 0x2bc(r3)
	cmpwi    r0, 0
	bne      lbl_8038A4E8
	addi     r7, r13, mMatColorY0__Q24Game11ShijimiChou@sda21
	lha      r8, mMatColorY0__Q24Game11ShijimiChou@sda21(r13)
	lha      r6, 2(r7)
	addi     r5, r1, 0x24
	lha      r3, 4(r7)
	li       r4, 0
	lha      r0, 6(r7)
	sth      r8, 0x24(r1)
	sth      r6, 0x26(r1)
	sth      r3, 0x28(r1)
	sth      r0, 0x2a(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r7, r13, mMatKColorY__Q24Game11ShijimiChou@sda21
	lbz      r8, mMatKColorY__Q24Game11ShijimiChou@sda21(r13)
	lbz      r6, 1(r7)
	addi     r5, r1, 0x10
	lbz      r3, 2(r7)
	li       r4, 0
	lbz      r0, 3(r7)
	stb      r8, 0x10(r1)
	stb      r6, 0x11(r1)
	stb      r3, 0x12(r1)
	stb      r0, 0x13(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	b        lbl_8038A604

lbl_8038A4E8:
	cmpwi    r0, 1
	bne      lbl_8038A57C
	addi     r7, r13, mMatColorR0__Q24Game11ShijimiChou@sda21
	lha      r8, mMatColorR0__Q24Game11ShijimiChou@sda21(r13)
	lha      r6, 2(r7)
	addi     r5, r1, 0x1c
	lha      r3, 4(r7)
	li       r4, 0
	lha      r0, 6(r7)
	sth      r8, 0x1c(r1)
	sth      r6, 0x1e(r1)
	sth      r3, 0x20(r1)
	sth      r0, 0x22(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r7, r13, mMatKColorR__Q24Game11ShijimiChou@sda21
	lbz      r8, mMatKColorR__Q24Game11ShijimiChou@sda21(r13)
	lbz      r6, 1(r7)
	addi     r5, r1, 0xc
	lbz      r3, 2(r7)
	li       r4, 0
	lbz      r0, 3(r7)
	stb      r8, 0xc(r1)
	stb      r6, 0xd(r1)
	stb      r3, 0xe(r1)
	stb      r0, 0xf(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	b        lbl_8038A604

lbl_8038A57C:
	addi     r7, r13, mMatColorB0__Q24Game11ShijimiChou@sda21
	lha      r8, mMatColorB0__Q24Game11ShijimiChou@sda21(r13)
	lha      r6, 2(r7)
	addi     r5, r1, 0x14
	lha      r3, 4(r7)
	li       r4, 0
	lha      r0, 6(r7)
	sth      r8, 0x14(r1)
	sth      r6, 0x16(r1)
	sth      r3, 0x18(r1)
	sth      r0, 0x1a(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r7, r13, mMatKColorB__Q24Game11ShijimiChou@sda21
	lbz      r8, mMatKColorB__Q24Game11ShijimiChou@sda21(r13)
	lbz      r6, 1(r7)
	addi     r5, r1, 8
	lbz      r3, 2(r7)
	li       r4, 0
	lbz      r0, 3(r7)
	stb      r8, 8(r1)
	stb      r6, 9(r1)
	stb      r3, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl

lbl_8038A604:
	lwz      r3, 0x174(r31)
	lwz      r29, 8(r3)
	mr       r3, r29
	lwz      r30, 4(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, j3dSys@ha
	li       r28, 0
	addi     r31, r3, j3dSys@l
	b        lbl_8038A66C

lbl_8038A634:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r31)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8038A66C:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_8038A634
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038A69C
 * Size:	000030
 */
void ShijimiChou::Obj::doStartMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x334(r3)
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

/*
 * --INFO--
 * Address:	8038A6CC
 * Size:	000030
 */
void ShijimiChou::Obj::doEndMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x334(r3)
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
 * Address:	8038A6FC
 * Size:	000034
 */
void ShijimiChou::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038A730
 * Size:	000008
 */
u32 ShijimiChou::Obj::damageCallBack(Game::Creature*, float, CollPart*) { return 0x0; }

/*
 * --INFO--
 * Address:	8038A738
 * Size:	000094
 */
void ShijimiChou::Obj::wallCallback(Game::MoveInfo const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, gameSystem__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8038A76C
	lwz      r0, 0x44(r5)
	cmpwi    r0, 4
	beq      lbl_8038A7B4

lbl_8038A76C:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_8038A788
	li       r0, 1
	stb      r0, 0x321(r30)
	b        lbl_8038A7B4

lbl_8038A788:
	lfs      f2, 0x18c(r30)
	lfs      f1, lbl_8051EF24@sda21(r2)
	lfs      f0, 0x5c(r31)
	lfs      f3, 0x190(r30)
	fmadds   f2, f1, f0, f2
	lfs      f4, 0x194(r30)
	lfs      f0, 0x64(r31)
	stfs     f2, 0x304(r30)
	fmadds   f4, f1, f0, f4
	stfs     f3, 0x308(r30)
	stfs     f4, 0x30c(r30)

lbl_8038A7B4:
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
 * Address:	8038A7CC
 * Size:	000064
 */
void ShijimiChou::Obj::collisionCallback(Game::CollEvent&)
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
	beq      lbl_8038A818
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038A818
	mr       r3, r30
	mr       r4, r31
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent

lbl_8038A818:
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
 * Address:	8038A830
 * Size:	000028
 */
void ShijimiChou::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
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
 * Address:	8038A858
 * Size:	000124
 */
void ShijimiChou::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f0, 0x18c(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x190(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x194(r3)
	stfs     f0, 8(r4)
	lwz      r3, 0xc0(r3)
	lbz      r0, 0x949(r3)
	cmplwi   r0, 0
	beq      lbl_8038A8B8
	addi     r3, r30, 0x2dc
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8038A8B8
	lwz      r0, 0x2e8(r30)
	cmplw    r0, r30
	bne      lbl_8038A8FC

lbl_8038A8B8:
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8038A8E0
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x259
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038A8E0:
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r4, r31
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x300(r30)

lbl_8038A8FC:
	lfs      f1, lbl_8051EF20@sda21(r2)
	lfs      f0, 0x300(r30)
	lfs      f3, lbl_8051EF08@sda21(r2)
	fadds    f1, f1, f0
	lfs      f2, lbl_8051EF28@sda21(r2)
	lfs      f0, lbl_8051EF2C@sda21(r2)
	stfs     f1, 4(r31)
	stfs     f3, 0xc(r31)
	stfs     f2, 0x10(r31)
	stfs     f3, 0x14(r31)
	stfs     f0, 0x18(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 0x19c(r30)
	fsubs    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_8038A948
	lfs      f0, lbl_8051EF24@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f2, f2, f0

lbl_8038A948:
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8038A958
	fmr      f2, f0

lbl_8038A958:
	lfs      f0, lbl_8051EF30@sda21(r2)
	fmuls    f0, f0, f2
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
 * Address:	8038A97C
 * Size:	00023C
 */
void ShijimiChou::Obj::genItem(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8038A9AC
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	beq      lbl_8038ABA0

lbl_8038A9AC:
	li       r0, 1
	stb      r0, 0x1f3(r31)
	lwz      r0, 0x2c0(r31)
	cmpwi    r0, 2
	beq      lbl_8038A9F8
	lwz      r30, 0xc0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051EF00@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051EEF8@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, 0x86c(r30)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_8038ABA0

lbl_8038A9F8:
	lwz      r0, 0x2bc(r31)
	cmpwi    r0, 1
	bne      lbl_8038AA24
	lwz      r3, playData__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038AA48
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8038AA48
	b        lbl_8038ABA0

lbl_8038AA24:
	cmpwi    r0, 2
	bne      lbl_8038AA48
	lwz      r3, playData__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038AA48
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038ABA0

lbl_8038AA48:
	lfs      f4, 0x1fc(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	lfs      f2, lbl_8051EF34@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_8038AA88
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8038AAAC

lbl_8038AA88:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8038AAAC:
	lfs      f0, lbl_8051EF08@sda21(r2)
	fmuls    f3, f2, f1
	lfs      f1, lbl_8051EF34@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_8038AAEC
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8038AB10

lbl_8038AAEC:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8038AB10:
	fmuls    f2, f1, f0
	lfs      f1, lbl_8051EF38@sda21(r2)
	stfs     f3, 0x1c(r1)
	lfs      f0, lbl_8051EF20@sda21(r2)
	stfs     f2, 0x14(r1)
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x18c(r31)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8038ABA0
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r0, 0x2bc(r31)
	mr       r3, r30
	addi     r4, r1, 8
	li       r5, 0
	stb      r0, 0x1e0(r30)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8038ABA0:
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
 * Address:	8038ABB8
 * Size:	000080
 */
void ShijimiChou::Obj::checkFlyStart(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8038ABF0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_8038ABF0
	lwz      r0, 0x2c0(r3)
	cmpwi    r0, 3
	beq      lbl_8038ABF0
	li       r3, 0
	b        lbl_8038AC28

lbl_8038ABF0:
	lwz      r0, 0x2e8(r3)
	cmplwi   r0, 0
	beq      lbl_8038AC24
	cmplw    r0, r3
	bne      lbl_8038AC0C
	li       r3, 1
	b        lbl_8038AC28

lbl_8038AC0C:
	mr       r3, r0
	bl       getStateID__Q24Game9EnemyBaseFv
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	b        lbl_8038AC28

lbl_8038AC24:
	li       r3, 1

lbl_8038AC28:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038AC38
 * Size:	0003BC
 */
void ShijimiChou::Obj::fly(void)
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
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x2e8(r3)
	cmplw    r0, r31
	beq      lbl_8038ACA4
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038AC98
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8038ACA4

lbl_8038AC98:
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r31)

lbl_8038ACA4:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2f0(r31)
	lfs      f1, 0x8bc(r3)
	lfs      f0, lbl_8051EF28@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2f0(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x2f4(r31)
	lfs      f2, 0x8e4(r3)
	lfs      f1, 0x190(r31)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f1, 0x2f0(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038ACE8
	fsubs    f0, f1, f0
	stfs     f0, 0x2f0(r31)

lbl_8038ACE8:
	lfs      f1, lbl_8051EF08@sda21(r2)
	lfs      f0, lbl_8051EF3C@sda21(r2)
	stfs     f1, 0x1cc(r31)
	lfs      f2, 0x194(r31)
	lfs      f1, 0x30c(r31)
	lfs      f3, 0x18c(r31)
	fsubs    f2, f2, f1
	lfs      f1, 0x304(r31)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038AD28
	mr       r3, r31
	bl       setNextGoal__Q34Game11ShijimiChou3ObjFv
	b        lbl_8038AFB8

lbl_8038AD28:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x94a(r3)
	lfs      f30, 0x2e4(r3)
	cmplwi   r0, 0
	bne      lbl_8038AD58
	fmr      f1, f30
	lfs      f2, 0x30c(r3)
	lfs      f3, 0x334(r3)
	mr       r3, r31
	addi     r4, r31, 0x304
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" b
lbl_8038AFA0

lbl_8038AD58:
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x95c(r3)
	lfs      f31, 0x30c(r3)
	fadds    f1, f1, f0
	lfs      f29, 0x334(r3)
	lfs      f0, lbl_8051EF40@sda21(r2)
	stfs     f1, 0x2f8(r31)
	lfs      f1, 0x2f8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038AD88
	fsubs    f0, f1, f0
	stfs     f0, 0x2f8(r31)

lbl_8038AD88:
	lfs      f1, 0x2f8(r31)
	bl       sin
	lwz      r3, 0xc0(r31)
	frsp     f3, f1
	lfs      f0, 0x2fc(r31)
	mr       r4, r31
	lfs      f1, 0x958(r3)
	addi     r3, r1, 0x14
	lfs      f2, lbl_8051EF48@sda21(r2)
	fmuls    f1, f1, f3
	stfs     f0, 0x1fc(r31)
	lfs      f3, lbl_8051EF44@sda21(r2)
	lwz      r12, 0(r31)
	fmuls    f0, f2, f1
	lwz      r12, 8(r12)
	fmuls    f28, f3, f0
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x304(r31)
	lfs      f0, 0x30c(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
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
	fmuls    f27, f1, f31
	lfs      f0, lbl_8051EF48@sda21(r2)
	lfs      f1, lbl_8051EF44@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f27
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8038AE68
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_8038AE64
	fmr      f27, f1
	b        lbl_8038AE68

lbl_8038AE64:
	fneg     f27, f1

lbl_8038AE68:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f27, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	lfs      f1, 0x1fc(r31)
	stfs     f1, 0x1a8(r31)
	lfs      f4, 0x1fc(r31)
	fadds    f3, f4, f28
	fcmpo    cr0, f3, f0
	bge      lbl_8038AED0
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8038AEF4

lbl_8038AED0:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8038AEF4:
	lfs      f0, lbl_8051EF08@sda21(r2)
	fmuls    f31, f30, f2
	lfs      f1, 0x1d4(r31)
	lfs      f27, 0x1d8(r31)
	fcmpo    cr0, f3, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 0x20(r1)
	stfs     f27, 0x24(r1)
	stfs     f0, 0x28(r1)
	bge      lbl_8038AF20
	fneg     f3, f3

lbl_8038AF20:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fabs     f2, f28
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f0
	frsp     f0, f2
	fctiwz   f1, f1
	fcmpo    cr0, f0, f29
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f30, f30, f0
	stfs     f4, 0x2fc(r31)
	ble      lbl_8038AF78
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8038AF74
	fmr      f28, f29
	b        lbl_8038AF78

lbl_8038AF74:
	fneg     f28, f29

lbl_8038AF78:
	fmr      f1, f28
	bl       roundAng__Ff
	lfs      f0, 0x1fc(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	stfs     f31, 0x1d4(r31)
	stfs     f27, 0x1d8(r31)
	stfs     f30, 0x1dc(r31)

lbl_8038AFA0:
	lfs      f0, 0x308(r31)
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051EF4C@sda21(r2)
	fsubs    f0, f0, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x190(r31)

lbl_8038AFB8:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038AFF4
 * Size:	000108
 */
void ShijimiChou::Obj::restFly(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051EF50@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, lbl_8051EF0C@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x1a4(r3)
	fmadds   f1, f2, f1, f1
	stfs     f1, 0x1a4(r3)
	lfs      f1, 0x1a4(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8038B030
	lfs      f0, lbl_8051EF08@sda21(r2)
	stfs     f0, 0x1a4(r31)

lbl_8038B030:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2f0(r31)
	lfs      f1, 0x8bc(r3)
	lfs      f0, lbl_8051EF28@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2f0(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x2f4(r31)
	lfs      f2, 0x8e4(r3)
	lfs      f1, 0x190(r31)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f1, 0x2f0(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038B074
	fsubs    f0, f1, f0
	stfs     f0, 0x2f0(r31)

lbl_8038B074:
	lfs      f1, lbl_8051EF08@sda21(r2)
	lfs      f0, lbl_8051EF3C@sda21(r2)
	stfs     f1, 0x1cc(r31)
	lfs      f2, 0x194(r31)
	lfs      f1, 0x30c(r31)
	lfs      f3, 0x18c(r31)
	fsubs    f2, f2, f1
	lfs      f1, 0x304(r31)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038B0B4
	mr       r3, r31
	bl       setNextGoal__Q34Game11ShijimiChou3ObjFv
	b        lbl_8038B0D0

lbl_8038B0B4:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r31, 0x304
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_8038B0D0:
	lfs      f0, 0x308(r31)
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051EF54@sda21(r2)
	fsubs    f0, f0, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x190(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038B0FC
 * Size:	0000B4
 */
void ShijimiChou::Obj::restCheck(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e8(r3)
	cmplwi   r3, 0
	beq      lbl_8038B19C
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_8038B19C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_8038B19C
	mr       r3, r31
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r3, 0x2d8(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051EF08@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1a4(r31)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038B19C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_8038B19C
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r31)

lbl_8038B19C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038B1B0
 * Size:	000370
 */
void ShijimiChou::Obj::checkRestOn(void)
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
	lwz      r0, 0x2c8(r3)
	cmplwi   r0, 0
	bne      lbl_8038B1FC
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x33b
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038B1FC:
	lwz      r3, 0x2c8(r31)
	addi     r4, r1, 0x20
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x10(r3)
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lfs      f1, 0x190(r31)
	lfs      f0, 0x24(r1)
	lfs      f30, 0x2c(r1)
	fsubs    f3, f1, f0
	lfs      f1, 0x18c(r31)
	lfs      f4, 0x20(r1)
	lfs      f2, 0x194(r31)
	lfs      f0, 0x28(r1)
	fsubs    f5, f1, f4
	fmuls    f1, f3, f3
	lfs      f3, lbl_8051EF58@sda21(r2)
	stfs     f4, 0x310(r31)
	fsubs    f4, f2, f0
	fmuls    f3, f3, f30
	lfs      f0, 0x24(r1)
	fmadds   f2, f5, f5, f1
	stfs     f0, 0x314(r31)
	fmuls    f0, f3, f3
	lfs      f1, 0x28(r1)
	fmadds   f31, f4, f4, f2
	stfs     f1, 0x318(r31)
	fcmpo    cr0, f31, f0
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x31c(r31)
	bge      lbl_8038B4F8
	lfs      f0, 0x1d4(r31)
	mr       r3, r31
	lfs      f1, lbl_8051EF08@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d4(r31)
	lfs      f0, 0x1d8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1dc(r31)
	lfs      f0, 0x1c8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1cc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1cc(r31)
	lfs      f0, 0x1d0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	fmuls    f0, f30, f30
	fcmpo    cr0, f31, f0
	ble      lbl_8038B3B0
	lfs      f2, 0x20(r1)
	lfs      f1, 0x18c(r31)
	lfs      f5, 0x24(r1)
	fsubs    f6, f2, f1
	lfs      f4, 0x28(r1)
	lfs      f2, lbl_8051EF08@sda21(r2)
	stfs     f6, 0x20(r1)
	fmuls    f1, f6, f6
	lfs      f3, 0x190(r31)
	fsubs    f3, f5, f3
	stfs     f3, 0x24(r1)
	fmuls    f5, f3, f3
	lfs      f3, 0x194(r31)
	fadds    f1, f1, f5
	fsubs    f3, f4, f3
	fmuls    f4, f3, f3
	stfs     f3, 0x28(r1)
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f2
	ble      lbl_8038B344
	fmadds   f1, f6, f6, f5
	fadds    f4, f4, f1
	fcmpo    cr0, f4, f2
	ble      lbl_8038B348
	frsqrte  f1, f4
	fmuls    f4, f1, f4
	b        lbl_8038B348

lbl_8038B344:
	fmr      f4, f2

lbl_8038B348:
	lfs      f1, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f4, f1
	ble      lbl_8038B380
	lfs      f1, lbl_8051EF28@sda21(r2)
	lfs      f3, 0x20(r1)
	fdivs    f4, f1, f4
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	fmuls    f3, f3, f4
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)

lbl_8038B380:
	lfs      f2, 0x18c(r31)
	lfs      f1, 0x20(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x18c(r31)
	lfs      f2, 0x190(r31)
	lfs      f1, 0x24(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f2, 0x194(r31)
	lfs      f1, 0x28(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x194(r31)

lbl_8038B3B0:
	lfs      f4, 0x2c(r1)
	lfs      f7, 0x24(r1)
	lfs      f6, 0x190(r31)
	fneg     f1, f4
	fadds    f5, f7, f4
	lfs      f2, lbl_8051EF20@sda21(r2)
	lfs      f3, lbl_8051EF44@sda21(r2)
	fmuls    f1, f2, f1
	fsubs    f2, f5, f6
	fcmpo    cr0, f5, f6
	fmuls    f2, f3, f2
	fdivs    f3, f2, f1
	bge      lbl_8038B3E8
	lfs      f3, lbl_8051EF08@sda21(r2)

lbl_8038B3E8:
	fsubs    f1, f7, f4
	fcmpo    cr0, f1, f6
	ble      lbl_8038B3F8
	lfs      f3, lbl_8051EF44@sda21(r2)

lbl_8038B3F8:
	lfs      f1, 0x1a4(r31)
	fcmpo    cr0, f31, f0
	lfs      f2, lbl_8051EF5C@sda21(r2)
	fsubs    f0, f3, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x1a4(r31)
	bge      lbl_8038B468
	lfs      f2, 0x1a4(r31)
	lfs      f0, lbl_8051EF4C@sda21(r2)
	fsubs    f1, f3, f2
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038B468
	lfs      f0, lbl_8051EF0C@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8038B444
	fsubs    f0, f2, f0
	stfs     f0, 0x1a4(r31)

lbl_8038B444:
	lfs      f1, 0x1a4(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038B460
	lfs      f0, lbl_8051EF0C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x1a4(r31)

lbl_8038B460:
	li       r3, 1
	b        lbl_8038B4FC

lbl_8038B468:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f30, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f30
	bl       angDist__Fff
	lfs      f2, lbl_8051EF5C@sda21(r2)
	lfs      f0, 0x1fc(r31)
	fmadds   f1, f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_8038B4F8:
	li       r3, 0

lbl_8038B4FC:
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
 * Address:	8038B520
 * Size:	0002AC
 */
void ShijimiChou::Obj::checkRestOff(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x2c8(r3)
	cmplwi   r0, 0
	bne      lbl_8038B55C
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x36b
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038B55C:
	lwz      r4, 0x2c8(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c8(r31)
	addi     r4, r1, 0x14
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x10(r3)
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lfs      f7, 0x190(r31)
	lfs      f3, 0x18(r1)
	lfs      f0, 0x20(r1)
	fsubs    f2, f7, f3
	lfs      f10, 0x18c(r31)
	lfs      f4, 0x14(r1)
	fmuls    f0, f0, f0
	lfs      f1, lbl_8051EF20@sda21(r2)
	fsubs    f9, f10, f4
	fmuls    f2, f2, f2
	lfs      f6, 0x194(r31)
	lfs      f5, 0x1c(r1)
	fmuls    f0, f1, f0
	fsubs    f8, f6, f5
	fmadds   f1, f9, f9, f2
	fmadds   f1, f8, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8038B6D0
	lfs      f8, lbl_8051EF08@sda21(r2)
	stfs     f8, 0x2f0(r31)
	lfs      f2, 0x18c(r31)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x190(r31)
	fsubs    f7, f1, f2
	lfs      f1, 0x194(r31)
	lfs      f6, 0x18(r1)
	lfs      f5, 0x1c(r1)
	stfs     f7, 0x14(r1)
	fmuls    f3, f7, f7
	lfs      f4, 0x190(r31)
	fsubs    f4, f6, f4
	stfs     f4, 0x18(r1)
	fmuls    f6, f4, f4
	lfs      f4, 0x194(r31)
	fadds    f3, f3, f6
	fsubs    f4, f5, f4
	fmuls    f5, f4, f4
	stfs     f4, 0x1c(r1)
	fadds    f3, f5, f3
	fcmpo    cr0, f3, f8
	ble      lbl_8038B64C
	fmadds   f3, f7, f7, f6
	fadds    f4, f5, f3
	fcmpo    cr0, f4, f8
	ble      lbl_8038B650
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8038B650

lbl_8038B64C:
	fmr      f4, f8

lbl_8038B650:
	lfs      f3, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8038B688
	lfs      f3, lbl_8051EF28@sda21(r2)
	lfs      f5, 0x14(r1)
	fdivs    f6, f3, f4
	lfs      f4, 0x18(r1)
	lfs      f3, 0x1c(r1)
	fmuls    f5, f5, f6
	fmuls    f4, f4, f6
	fmuls    f3, f3, f6
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)

lbl_8038B688:
	lfs      f3, 0x14(r1)
	li       r3, 1
	lfs      f6, lbl_8051EF24@sda21(r2)
	lfs      f4, 0x18(r1)
	fmuls    f5, f3, f6
	lfs      f3, 0x1c(r1)
	fmuls    f4, f4, f6
	fmuls    f3, f3, f6
	fsubs    f2, f2, f5
	stfs     f5, 0x14(r1)
	fsubs    f0, f0, f4
	stfs     f4, 0x18(r1)
	fsubs    f1, f1, f3
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x304(r31)
	stfs     f0, 0x308(r31)
	stfs     f1, 0x30c(r31)
	b        lbl_8038B7B8

lbl_8038B6D0:
	fsubs    f4, f4, f10
	lfs      f1, lbl_8051EF08@sda21(r2)
	fsubs    f3, f3, f7
	fsubs    f2, f5, f6
	fmuls    f0, f4, f4
	stfs     f4, 0x14(r1)
	fmuls    f5, f3, f3
	fmuls    f6, f2, f2
	stfs     f3, 0x18(r1)
	fadds    f0, f0, f5
	stfs     f2, 0x1c(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8038B724
	fmadds   f0, f4, f4, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8038B728
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8038B728

lbl_8038B724:
	fmr      f3, f1

lbl_8038B728:
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8038B760
	lfs      f0, lbl_8051EF28@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8038B760:
	lfs      f2, 0x14(r1)
	li       r3, 0
	lfs      f3, lbl_8051EF20@sda21(r2)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x18c(r31)
	fsubs    f0, f0, f2
	stfs     f0, 0x18c(r31)
	lfs      f1, 0x190(r31)
	lfs      f0, 0x18(r1)
	fsubs    f0, f1, f0
	stfs     f0, 0x190(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1c(r1)
	fsubs    f0, f1, f0
	stfs     f0, 0x194(r31)

lbl_8038B7B8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038B7CC
 * Size:	0000FC
 */
void ShijimiChou::Obj::resetRestPos(void)
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
	mr       r31, r3
	lwz      r0, 0x2c8(r3)
	cmplwi   r0, 0
	bne      lbl_8038B820
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x38e
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038B820:
	lwz      r3, 0x2c8(r31)
	addi     r4, r1, 8
	lfs      f31, 0x310(r31)
	lwz      r3, 0x114(r3)
	lfs      f30, 0x314(r31)
	lwz      r3, 0(r3)
	lfs      f29, 0x318(r31)
	lwz      r3, 0x10(r3)
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fsubs    f31, f31, f2
	fsubs    f30, f30, f1
	stfs     f2, 0x310(r31)
	fsubs    f29, f29, f0
	lfs      f0, 0xc(r1)
	stfs     f0, 0x314(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x318(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x31c(r31)
	lfs      f0, 0x18c(r31)
	fsubs    f0, f0, f31
	stfs     f0, 0x18c(r31)
	lfs      f0, 0x190(r31)
	fsubs    f0, f0, f30
	stfs     f0, 0x190(r31)
	lfs      f0, 0x194(r31)
	fsubs    f0, f0, f29
	stfs     f0, 0x194(r31)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038B8C8
 * Size:	000174
 */
void ShijimiChou::Obj::leave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e8(r3)
	cmplwi   r3, 0
	beq      lbl_8038B9B8
	cmplw    r3, r31
	beq      lbl_8038B9B8
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038B9B8
	lfs      f1, 0x194(r31)
	lfs      f0, 0x30c(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x304(r31)
	lfs      f0, lbl_8051EF3C@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038B93C
	mr       r3, r31
	bl       setTraceGoal__Q34Game11ShijimiChou3ObjFv

lbl_8038B93C:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r31, 0x304
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lfs
f0, 0x308(r31) lfs      f2, 0x190(r31) lfs      f3, lbl_8051EF60@sda21(r2) fsubs
f1, f0, f2 lfs      f0, lbl_8051EF28@sda21(r2) fmadds   f1, f3, f1, f2 stfs f1,
0x190(r31) lwz      r3, 0xc0(r31) lfs      f2, 0x2f0(r31) lfs      f1, 0x8bc(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x2f0(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x2f4(r31)
	lfs      f2, 0x8e4(r3)
	lfs      f1, 0x190(r31)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f1, 0x2f0(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038BA28
	fsubs    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	b        lbl_8038BA28

lbl_8038B9B8:
	mr       r3, r31
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038BA28
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF28@sda21(r2)
	lfs      f2, lbl_8051EF18@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8038B9E4
	lfs      f0, lbl_8051EF08@sda21(r2)
	stfs     f0, 0x2f0(r31)

lbl_8038B9E4:
	lfs      f3, 0x2f4(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_8038BA0C
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF54@sda21(r2)
	lfs      f2, lbl_8051EF64@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	b        lbl_8038BA1C

lbl_8038BA0C:
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF4C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2f0(r31)

lbl_8038BA1C:
	lfs      f0, 0x190(r31)
	fmadds   f0, f2, f3, f0
	stfs     f0, 0x190(r31)

lbl_8038BA28:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038BA3C
 * Size:	0001AC
 */
void ShijimiChou::Obj::leaveInit(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r0, 0x2e8(r3)
	cmplwi   r0, 0
	beq      lbl_8038BBC8
	cmplw    r0, r31
	bne      lbl_8038BBC8
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r30, r3, r3
	beq      lbl_8038BBD0
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r30
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051EF08@sda21(r2)
	lfs      f4, lbl_8051EF68@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038BAF8
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f3, f0
	b        lbl_8038BB1C

lbl_8038BAF8:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0

lbl_8038BB1C:
	lfs      f2, 0x20(r1)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fnmsubs  f2, f4, f3, f2
	fcmpo    cr0, f1, f0
	stfs     f2, 0x20(r1)
	bge      lbl_8038BB38
	fneg     f1, f1

lbl_8038BB38:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r5, r3, sincosTable___5JMath@l
	lfs      f4, lbl_8051EF68@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, 0x28(r1)
	lfs      f2, lbl_8051EF28@sda21(r2)
	mr       r3, r31
	lfs      f3, lbl_8051EF6C@sda21(r2)
	addi     r4, r1, 0x20
	fctiwz   f1, f1
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r5, r5, r0
	lfs      f1, 4(r5)
	fnmsubs  f0, f4, f1, f0
	stfs     f0, 0x28(r1)
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x954(r5)
	lfs      f0, 0x2e4(r5)
	fmuls    f1, f1, f0
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lfs
f1, 0x1d8(r31) mr       r3, r31 lfs      f2, 0x1dc(r31) addi     r4, r1, 0x14
	lfs      f0, 0x1d4(r31)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8038BBD0

lbl_8038BBC8:
	mr       r3, r31
	bl       setTraceGoal__Q34Game11ShijimiChou3ObjFv

lbl_8038BBD0:
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
 * Address:	8038BBE8
 * Size:	000210
 */
void ShijimiChou::Obj::setNextGoal(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r30, r3
	mr       r3, r31
	bl       getFlyType__Q34Game11ShijimiChou3ObjFv
	cmpwi    r3, 1
	bne      lbl_8038BC80
	cmpwi    r30, 1
	bne      lbl_8038BC80
	lwz      r0, 0x2e8(r31)
	cmplwi   r0, 0
	beq      lbl_8038BC80
	cmplw    r0, r31
	beq      lbl_8038BC80
	lwz      r4, 0x2c4(r31)
	lis      r0, 0x4330
	lwz      r3, 0xc0(r31)
	xoris    r4, r4, 0x8000
	stw      r0, 8(r1)
	lfd      f3, lbl_8051EF00@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f1, lbl_8051EF70@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, 0x81c(r3)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bge      lbl_8038BC80
	mr       r3, r31
	bl       setTraceGoal__Q34Game11ShijimiChou3ObjFv
	b        lbl_8038BDD8

lbl_8038BC80:
	lwz      r0, 0x2c0(r31)
	lwz      r3, 0xc0(r31)
	cmpwi    r0, 2
	lfs      f31, 0x35c(r3)
	beq      lbl_8038BC9C
	cmpwi    r0, 3
	bne      lbl_8038BCA0

lbl_8038BC9C:
	lfs      f31, lbl_8051EF24@sda21(r2)

lbl_8038BCA0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, 0x198(r31)
	stw      r0, 8(r1)
	lfd      f3, lbl_8051EF00@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f2, lbl_8051EEF8@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x304(r31)
	lfs      f1, lbl_8051EF70@sda21(r2)
	lfs      f0, 0x19c(r31)
	fdivs    f2, f3, f2
	stfs     f0, 0x308(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x30c(r31)
	fmadds   f0, f1, f2, f1
	fmuls    f31, f31, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EF00@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051EEF8@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051EF0C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EF08@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f4, f1, f2
	fcmpo    cr0, f4, f0
	bge      lbl_8038BD54
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f3, f0
	b        lbl_8038BD78

lbl_8038BD54:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0

lbl_8038BD78:
	lfs      f1, 0x304(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fmadds   f2, f31, f3, f1
	lfs      f1, lbl_8051EF34@sda21(r2)
	fcmpo    cr0, f4, f0
	stfs     f2, 0x304(r31)
	lfs      f0, 0x308(r31)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0x308(r31)
	bge      lbl_8038BDA4
	fneg     f4, f4

lbl_8038BDA4:
	lfs      f1, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x30c(r31)
	fmuls    f1, f4, f1
	fctiwz   f1, f1
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x30c(r31)

lbl_8038BDD8:
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
 * Address:	8038BDF8
 * Size:	000100
 */
void ShijimiChou::Obj::setTraceGoal(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r4, 0x2e8(r3)
	cmplwi   r4, 0
	beq      lbl_8038BEDC
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f2, 0xc(r1)
	lfs      f0, 0x190(r31)
	lfs      f3, 0x10(r1)
	lfs      f1, 0x950(r3)
	fsubs    f31, f0, f2
	lfs      f0, 8(r1)
	stfs     f0, 0x304(r31)
	fmuls    f31, f31, f1
	stfs     f2, 0x308(r31)
	stfs     f3, 0x30c(r31)
	lwz      r3, 0x2e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f0, lbl_8051EF08@sda21(r2)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051EF00@sda21(r2)
	fcmpo    cr0, f31, f0
	lfd      f1, 0x18(r1)
	lfs      f0, lbl_8051EEF8@sda21(r2)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fmr      f3, f0
	ble      lbl_8038BEB0
	fneg     f3, f0

lbl_8038BEB0:
	fmuls    f2, f3, f31
	lfs      f0, 0x304(r31)
	lfs      f1, lbl_8051EF74@sda21(r2)
	fadds    f0, f0, f2
	stfs     f0, 0x304(r31)
	lfs      f0, 0x308(r31)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0x308(r31)
	lfs      f0, 0x30c(r31)
	fadds    f0, f0, f2
	stfs     f0, 0x30c(r31)

lbl_8038BEDC:
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
 * Address:	8038BEF8
 * Size:	000060
 */
void ShijimiChou::Obj::isFallEnd(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051EF74@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, 0x300(r3)
	lfs      f2, 0x190(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f2, f0
	blt      lbl_8038BF28
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_8038BF44

lbl_8038BF28:
	lwz      r3, 0x334(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8038BF48

lbl_8038BF44:
	li       r3, 0

lbl_8038BF48:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038BF58
 * Size:	000028
 */
void ShijimiChou::Obj::deadEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051EF78@sda21(r2)
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
 * Address:	8038BF80
 * Size:	0001C4
 */
void ShijimiChou::Obj::fallBehavior(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lbz      r0, 0x321(r3)
	cmplwi   r0, 0
	bne      lbl_8038C0C4
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x324(r31)
	lfs      f1, 0x968(r3)
	lfs      f0, lbl_8051EF0C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x324(r31)
	lfs      f1, 0x324(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038BFCC
	fsubs    f0, f1, f0
	stfs     f0, 0x324(r31)

lbl_8038BFCC:
	lfs      f1, 0x324(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038C008
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f3, f0
	b        lbl_8038C02C

lbl_8038C008:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0

lbl_8038C02C:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lfs      f1, 0x2cc(r31)
	addi     r3, r1, 0x14
	lfs      f4, 0x970(r5)
	lfs      f0, lbl_8051EF70@sda21(r2)
	fmadds   f2, f4, f3, f1
	fmuls    f1, f0, f4
	stfs     f2, 0x18c(r31)
	lfs      f0, 0x2d4(r31)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0x194(r31)
	lfs      f0, 0x190(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x190(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x96c(r3)
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8038C0A8
	stfs     f0, 0x30(r1)

lbl_8038C0A8:
	mr       r3, r31
	addi     r4, r1, 0x2c
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8038C130

lbl_8038C0C4:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x96c(r3)
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8038C10C
	stfs     f0, 0x24(r1)

lbl_8038C10C:
	lfs      f0, lbl_8051EF08@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x20
	stfs     f0, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8038C130:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038C144
 * Size:	0000B0
 */
void ShijimiChou::Obj::updateCluster(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x2e8(r3)
	cmplw    r0, r30
	bne      lbl_8038C1DC
	lwz      r31, 0x328(r30)
	cmpwi    r31, 0x28
	ble      lbl_8038C178
	li       r31, 0x28

lbl_8038C178:
	cmpwi    r31, 1
	bgt      lbl_8038C1A8
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_8038C1A8
	mr       r3, r30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r0, 0
	stw      r0, 0x2e8(r30)
	b        lbl_8038C1DC

lbl_8038C1A8:
	lwz      r0, 0x338(r30)
	cmplwi   r0, 0
	bne      lbl_8038C1D0
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x492
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038C1D0:
	lwz      r3, 0x338(r30)
	clrlwi   r4, r31, 0x18
	bl       startClusterSound__Q23PSM7ClusterFUc

lbl_8038C1DC:
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
 * Address:	8038C1F4
 * Size:	000020
 */
void ShijimiChou::Obj::getFlyType(void)
{
	/*
	lwz      r4, 0xc0(r3)
	lbz      r0, 0x94d(r4)
	cmplwi   r0, 0
	beq      lbl_8038C20C
	lbz      r3, 0x948(r4)
	blr

lbl_8038C20C:
	lwz      r3, 0x32c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038C214
 * Size:	00006C
 */
void ShijimiChou::Obj::leaderInit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038C260
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8038C260
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)

lbl_8038C260:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038C280
 * Size:	0000A8
 */
void ShijimiChou::Obj::createAppearEffect(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x2e8(r3)
	cmplw    r0, r3
	beq      lbl_8038C318
	lis      r6, __vt__Q23efx3Arg@ha
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r5, r4, "zero__10Vector3<f>"@l
	lis      r4, __vt__Q23efx7ArgChou@ha
	addi     r6, r6, __vt__Q23efx3Arg@l
	lfs      f2, 0(r5)
	lfs      f1, 4(r5)
	li       r0, 0
	lfs      f0, 8(r5)
	addi     r4, r4, __vt__Q23efx7ArgChou@l
	stw      r6, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0x18(r1)
	lwz      r0, 0x2bc(r3)
	cmpwi    r0, 1
	bne      lbl_8038C2F0
	li       r0, 1
	stw      r0, 0x18(r1)
	b        lbl_8038C300

lbl_8038C2F0:
	cmpwi    r0, 2
	bne      lbl_8038C300
	li       r0, 2
	stw      r0, 0x18(r1)

lbl_8038C300:
	lwz      r3, 0x334(r3)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8038C318:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038C328
 * Size:	000030
 */
void ShijimiChou::Obj::fadeAppearEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x334(r3)
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

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8038C358
 * Size:	000008
 */
void ArgChou::getName(void)
{
	/*
	addi     r3, r2, lbl_8051EF7C@sda21
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8038C360
 * Size:	000004
 */
void ShijimiChou::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8038C364
 * Size:	000088
 */
void ShijimiChou::Obj::ignoreAtari(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	bne      lbl_8038C38C
	li       r3, 0
	b        lbl_8038C3D8

lbl_8038C38C:
	cmplwi   r31, 0
	beq      lbl_8038C3B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8038C3CC

lbl_8038C3B0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038C3D4

lbl_8038C3CC:
	li       r3, 1
	b        lbl_8038C3D8

lbl_8038C3D4:
	li       r3, 0

lbl_8038C3D8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038C3EC
 * Size:	000008
 */
u32 ShijimiChou::Obj::pressCallBack(Game::Creature*, float, CollPart*) { return 0x0; }

/*
 * --INFO--
 * Address:	8038C3F4
 * Size:	000008
 */
void ShijimiChou::Obj::hipdropCallBack(Game::Creature*, float, CollPart*) { return 0x0; }

/*
 * --INFO--
 * Address:	8038C3FC
 * Size:	000008
 */
u32 ShijimiChou::Obj::earthquakeCallBack(Game::Creature*, float) { return 0x0; }

/*
 * --INFO--
 * Address:	8038C404
 * Size:	000008
 */
u32 ShijimiChou::Obj::getEnemyTypeID(void) { return 0x4D; }

} // namespace efx

/*
 * --INFO--
 * Address:	8038C40C
 * Size:	000004
 */
void __sinit_shijimiChou_cpp(void) { }

/*
 * --INFO--
 * Address:	8038C410
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -828
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8038C424
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -828
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8038C438
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -828
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8038C44C
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -828
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8038C460
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -828
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8038C474
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -828
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}
