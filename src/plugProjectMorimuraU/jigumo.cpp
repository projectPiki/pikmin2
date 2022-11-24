#include "Vector3.h"
#include "types.h"
#include "Game/Entities/Jigumo.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80491D98
    lbl_80491D98:
        .4byte 0x6A696775
        .4byte 0x6D6F2E63
        .4byte 0x70700000
    .global lbl_80491DA4
    lbl_80491DA4:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x626F6479
        .4byte 0x5F6A6F69
        .4byte 0x6E743100
    .global lbl_80491DBC
    lbl_80491DBC:
        .4byte 0x6B616D75
        .4byte 0x5F6A6F69
        .4byte 0x6E743100
        .4byte 0x41726753
        .4byte 0x63616C65
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game6Jigumo3Obj
    __vt__Q34Game6Jigumo3Obj:
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
        .4byte onInit__Q34Game6Jigumo3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game6Jigumo3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game6Jigumo3ObjFR8Graphics
        .4byte getBodyRadius__Q34Game6Jigumo3ObjFv
        .4byte getCellRadius__Q34Game6Jigumo3ObjFv
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
        .4byte inWaterCallback__Q34Game6Jigumo3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game6Jigumo3ObjFv
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
        .4byte isLivingThing__Q34Game6Jigumo3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game6Jigumo3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game6Jigumo3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game6Jigumo3ObjFv
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
        .4byte getGoalPos__Q34Game6Jigumo3ObjFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game6Jigumo3ObjFv
        .4byte "birth__Q34Game6Jigumo3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Jigumo3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Jigumo3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q34Game6Jigumo3ObjFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Jigumo3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q34Game6Jigumo3ObjFf .4byte
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
        .4byte getOffsetForMapCollision__Q34Game6Jigumo3ObjFv
        .4byte setParameters__Q34Game6Jigumo3ObjFv
        .4byte initMouthSlots__Q34Game6Jigumo3ObjFv
        .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
        .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q34Game6Jigumo3ObjFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game6Jigumo3ObjFv
        .4byte getMouthSlots__Q34Game6Jigumo3ObjFv
        .4byte doGetLifeGaugeParam__Q34Game6Jigumo3ObjFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game6Jigumo3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game6Jigumo3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game6Jigumo3ObjFv .4byte
   doFinishStoneState__Q34Game6Jigumo3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game6Jigumo3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game6Jigumo3ObjFv .4byte
   doStartMovie__Q34Game6Jigumo3ObjFv .4byte doEndMovie__Q34Game6Jigumo3ObjFv
        .4byte setFSM__Q34Game6Jigumo3ObjFPQ34Game6Jigumo3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@908@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@908@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@908@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@908@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@908@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@908@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global curJ__Q24Game6Jigumo
    curJ__Q24Game6Jigumo:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E960
    lbl_8051E960:
        .4byte 0x47000000
    .global lbl_8051E964
    lbl_8051E964:
        .4byte 0x40A00000
    .global lbl_8051E968
    lbl_8051E968:
        .4byte 0x41C80000
        .4byte 0x00000000
    .global lbl_8051E970
    lbl_8051E970:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051E978
    lbl_8051E978:
        .4byte 0x00000000
    .global lbl_8051E97C
    lbl_8051E97C:
        .float 1.0
    .global lbl_8051E980
    lbl_8051E980:
        .4byte 0x41200000
    .global lbl_8051E984
    lbl_8051E984:
        .4byte 0x40000000
    .global lbl_8051E988
    lbl_8051E988:
        .4byte 0x42A00000
    .global lbl_8051E98C
    lbl_8051E98C:
        .4byte 0x41700000
    .global lbl_8051E990
    lbl_8051E990:
        .4byte 0x40200000
    .global lbl_8051E994
    lbl_8051E994:
        .4byte 0x40400000
    .global lbl_8051E998
    lbl_8051E998:
        .4byte 0x41F00000
    .global lbl_8051E99C
    lbl_8051E99C:
        .4byte 0x43B40000
    .global lbl_8051E9A0
    lbl_8051E9A0:
        .4byte 0x43340000
    .global lbl_8051E9A4
    lbl_8051E9A4:
        .4byte 0x40490FDB
    .global lbl_8051E9A8
    lbl_8051E9A8:
        .4byte 0x3BB60B61
    .global lbl_8051E9AC
    lbl_8051E9AC:
        .float 0.1
    .global lbl_8051E9B0
    lbl_8051E9B0:
        .4byte 0x3E4CCCCD
    .global lbl_8051E9B4
    lbl_8051E9B4:
        .4byte 0x3F4CCCCD
    .global lbl_8051E9B8
    lbl_8051E9B8:
        .4byte 0x43C80000
    .global lbl_8051E9BC
    lbl_8051E9BC:
        .4byte 0xBF800000
    .global lbl_8051E9C0
    lbl_8051E9C0:
        .4byte 0xC3A2F983
    .global lbl_8051E9C4
    lbl_8051E9C4:
        .4byte 0x43A2F983
    .global lbl_8051E9C8
    lbl_8051E9C8:
        .4byte 0xC0000000
    .global lbl_8051E9CC
    lbl_8051E9CC:
        .4byte 0x42C80000
    .global lbl_8051E9D0
    lbl_8051E9D0:
        .4byte 0x3F19999A
    .global lbl_8051E9D4
    lbl_8051E9D4:
        .4byte 0x3F733333
    .global lbl_8051E9D8
    lbl_8051E9D8:
        .4byte 0x3F8CCCCD
    .global lbl_8051E9DC
    lbl_8051E9DC:
        .4byte 0x3FD00000
    .global lbl_8051E9E0
    lbl_8051E9E0:
        .4byte 0x3F400000
    .global lbl_8051E9E4
    lbl_8051E9E4:
        .4byte 0x3C23D70A
    .global lbl_8051E9E8
    lbl_8051E9E8:
        .4byte 0x3F266666
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80368EA0
 * Size:	000038
 */
bool Jigumo::mouthScaleCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_80368EC4
	lwz      r3, curJ__Q24Game6Jigumo@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80368EC4
	bl       mouthScaleMtxCalc__Q34Game6Jigumo3ObjFv

lbl_80368EC4:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80368ED8
 * Size:	00016C
 */
void Jigumo::Obj::setParameters(void)
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
	mr       r30, r3
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r3, 0xc0(r30)
	lfs      f31, 0x86c(r3)
	lfs      f30, 0x894(r3)
	fsubs    f30, f30, f31
	bl       rand
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfs      f0, lbl_8051E964@sda21(r2)
	stw      r0, 8(r1)
	lfd      f3, lbl_8051E970@sda21(r2)
	fdivs    f30, f30, f0
	lfd      f2, 8(r1)
	lfs      f1, lbl_8051E960@sda21(r2)
	stw      r0, 0x18(r1)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f3
	fmadds   f31, f30, f0, f31
	stfs     f31, 0x1f8(r30)
	stfs     f31, 0x168(r30)
	stfs     f31, 0x16c(r30)
	stfs     f31, 0x170(r30)
	lwz      r3, 0x2e4(r30)
	cmplwi   r3, 0
	beq      lbl_80368FAC
	stfs     f31, 0x1f8(r3)
	fmr      f1, f31
	stfs     f31, 0x168(r3)
	stfs     f31, 0x16c(r3)
	stfs     f31, 0x170(r3)
	lwz      r3, 0x2e4(r30)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_80368FAC:
	lfs      f31, lbl_8051E968@sda21(r2)
	li       r31, 0
	b        lbl_80368FE8

lbl_80368FB8:
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x1f8(r30)
	lfs      f1, 0x928(r3)
	fmuls    f30, f1, f0
	fcmpo    cr0, f30, f31
	bge      lbl_80368FD4
	fmr      f30, f31

lbl_80368FD4:
	mr       r4, r31
	addi     r3, r30, 0x2d8
	bl       getSlot__10MouthSlotsFi
	stfs     f30, 0x1c(r3)
	addi     r31, r31, 1

lbl_80368FE8:
	lwz      r0, 0x2d8(r30)
	cmpw     r31, r0
	blt      lbl_80368FB8
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x1f8(r30)
	lfs      f0, 0x21c(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x27c(r30)
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x1f8(r30)
	lfs      f0, 0x1f4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x2f0(r30)
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
 * Address:	80369044
 * Size:	00017C
 */
// void birth__Q34Game6Jigumo3ObjFR10Vector3f f(void)
void Jigumo::Obj::birth(Vector3f&, f32)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x53
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_80369150
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r30)
	mr       r3, r30
	stfs     f0, 8(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x10(r1)
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
	or.      r31, r3, r3
	bne      lbl_803690F8
	lis      r3, lbl_80491D98@ha
	lis      r5, lbl_80491DA4@ha
	addi     r3, r3, lbl_80491D98@l
	li       r4, 0x56
	addi     r5, r5, lbl_80491DA4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803690F8:
	mr       r3, r31
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x2e4(r30)
	stw      r31, 0x2e4(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2e4(r30)
	bl       setHouseType__Q34Game4Nest3ObjFi
	lfs      f1, 0x1f8(r30)
	stfs     f1, 0x1f8(r31)
	stfs     f1, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f1, 0x170(r31)
	lwz      r3, 0x114(r31)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_80369150:
	lfs      f31, lbl_8051E968@sda21(r2)
	li       r31, 0
	b        lbl_8036918C

lbl_8036915C:
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x1f8(r30)
	lfs      f1, 0x928(r3)
	fmuls    f30, f1, f0
	fcmpo    cr0, f30, f31
	bge      lbl_80369178
	fmr      f30, f31

lbl_80369178:
	mr       r4, r31
	addi     r3, r30, 0x2d8
	bl       getSlot__10MouthSlotsFi
	stfs     f30, 0x1c(r3)
	addi     r31, r31, 1

lbl_8036918C:
	lwz      r0, 0x2d8(r30)
	cmpw     r31, r0
	blt      lbl_8036915C
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803691C0
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Jigumo::Obj::getEnemyTypeID(void) { return EnemyTypeID::EnemyID_Jigumo; }

/*
 * --INFO--
 * Address:	803691C8
 * Size:	00023C
 */
void Jigumo::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80491D98@ha
	li       r6, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r5, lbl_80491D98@l
	li       r5, 1
	stw      r29, 0x14(r1)
	mr       r29, r4
	mr       r4, r31
	lwz      r3, 0x388(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	mr       r4, r29
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x254(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x1fc(r31)
	li       r4, 0
	lfs      f2, lbl_8051E978@sda21(r2)
	li       r0, 1
	stfs     f0, 0x2ec(r31)
	addi     r3, r31, 0x310
	lfs      f1, lbl_8051E97C@sda21(r2)
	fmr      f3, f2
	stw      r4, 0x334(r31)
	fmr      f4, f2
	stfs     f2, 0x2f8(r31)
	stfs     f1, 0x2fc(r31)
	stfs     f2, 0x300(r31)
	lfs      f0, 0x2f8(r31)
	stfs     f0, 0x304(r31)
	lfs      f0, 0x2fc(r31)
	stfs     f0, 0x308(r31)
	lfs      f0, 0x300(r31)
	stfs     f0, 0x30c(r31)
	stfs     f2, 0x33c(r31)
	stfs     f2, 0x338(r31)
	stb      r0, 0x340(r31)
	bl       set__4QuatFffff
	lfs      f0, 0x310(r31)
	li       r0, 0
	lfs      f1, lbl_8051E978@sda21(r2)
	addi     r4, r30, 0x18
	stfs     f0, 0x320(r31)
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x314(r31)
	stfs     f2, 0x324(r31)
	lfs      f2, 0x318(r31)
	stfs     f2, 0x328(r31)
	lfs      f2, 0x31c(r31)
	stfs     f2, 0x32c(r31)
	stfs     f1, 0x330(r31)
	stfs     f1, 0x2bc(r31)
	stfs     f1, 0x2c0(r31)
	stfs     f1, 0x2c4(r31)
	stfs     f1, 0x344(r31)
	stb      r0, 0x2e9(r31)
	stb      r0, 0x384(r31)
	lfs      f1, 0x198(r31)
	stfs     f1, 0x350(r31)
	lfs      f1, 0x19c(r31)
	stfs     f1, 0x354(r31)
	lfs      f1, 0x1a0(r31)
	stfs     f1, 0x358(r31)
	stw      r0, 0x35c(r31)
	lfs      f1, 0x18c(r31)
	stfs     f1, 0x364(r31)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x368(r31)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x36c(r31)
	stfs     f0, 0x2f4(r31)
	stw      r0, 0x34c(r31)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2e0(r31)
	lwz      r0, 0x2e0(r31)
	cmplwi   r0, 0
	bne      lbl_80369340
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x97
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80369340:
	lwz      r3, 0x388(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x174(r31)
	cmplwi   r0, 0
	bne      lbl_80369380
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x9e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80369380:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x24
	lwz      r5, 8(r3)
	lwz      r29, 4(r5)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x360(r31)
	lhz      r0, 0x360(r31)
	cmplwi   r0, 0
	bne      lbl_803693B8
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0xa3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803693B8:
	lhz      r0, 0x360(r31)
	lis      r4, mouthScaleCallBack__Q24Game6JigumoFP8J3DJointi@ha
	lwz      r3, 0x28(r29)
	addi     r4, r4, mouthScaleCallBack__Q24Game6JigumoFP8J3DJointi@l
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r4, 4(r3)
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x1f8(r31)
	lfs      f0, 0x1f4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80369404
 * Size:	0003E4
 */
Jigumo::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80369444
	addi     r0, r31, 0x38c
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x38c(r31)
	stw      r0, 0x390(r31)
	stw      r0, 0x394(r31)

lbl_80369444:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game6Jigumo3Obj@ha
	addi     r0, r31, 0x38c
	addi     r5, r3, __vt__Q34Game6Jigumo3Obj@l
	addi     r3, r31, 0x2d8
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
	li       r0, 0
	addi     r3, r31, 0x310
	stw      r0, 0x2e4(r31)
	bl       __ct__4QuatFv
	addi     r3, r31, 0x320
	bl       __ct__4QuatFv
	li       r3, 1
	li       r0, 0
	stb      r3, 0x385(r31)
	li       r3, 0x2c
	stw      r0, 0x388(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80369500
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game6Jigumo14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game6Jigumo14ProperAnimator@l
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

lbl_80369500:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80369534
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game6Jigumo3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game6Jigumo3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_80369534:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80369574
	addi     r4, r31, 0x18c
	li       r5, 0xb9
	li       r6, 0xba
	bl       "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
	lis      r3, __vt__Q23efx10TJgmAttack@ha
	addi     r0, r3, __vt__Q23efx10TJgmAttack@l
	stw      r0, 0(r30)

lbl_80369574:
	stw      r30, 0x370(r31)
	lwz      r0, 0x370(r31)
	cmplwi   r0, 0
	bne      lbl_803695A0
	lis      r3, lbl_80491D98@ha
	lis      r5, lbl_80491DA4@ha
	addi     r3, r3, lbl_80491D98@l
	li       r4, 0xbc
	addi     r5, r5, lbl_80491DA4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803695A0:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803695D4
	addi     r4, r31, 0x364
	addi     r5, r31, 0x1fc
	li       r6, 0xbb
	li       r7, 0xbc
	li       r8, 0xbd
	bl       "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"
	lis      r3, __vt__Q23efx11TJgmAttackW@ha
	addi     r0, r3, __vt__Q23efx11TJgmAttackW@l
	stw      r0, 0(r30)

lbl_803695D4:
	stw      r30, 0x374(r31)
	lwz      r0, 0x374(r31)
	cmplwi   r0, 0
	bne      lbl_80369600
	lis      r3, lbl_80491D98@ha
	lis      r5, lbl_80491DA4@ha
	addi     r3, r3, lbl_80491D98@l
	li       r4, 0xbf
	addi     r5, r5, lbl_80491DA4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80369600:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80369688
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
	lis      r4, __vt__Q23efx8TJgmBack@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx8TJgmBack@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0xbe
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

lbl_80369688:
	stw      r3, 0x378(r31)
	lwz      r0, 0x378(r31)
	cmplwi   r0, 0
	bne      lbl_803696B4
	lis      r3, lbl_80491D98@ha
	lis      r5, lbl_80491DA4@ha
	addi     r3, r3, lbl_80491D98@l
	li       r4, 0xc2
	addi     r5, r5, lbl_80491DA4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803696B4:
	li       r3, 0x34
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803696E4
	addi     r4, r31, 0x364
	addi     r5, r31, 0x1fc
	li       r6, 0xbf
	li       r7, 0xc0
	bl       "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
	lis      r3, __vt__Q23efx9TJgmBackW@ha
	addi     r0, r3, __vt__Q23efx9TJgmBackW@l
	stw      r0, 0(r30)

lbl_803696E4:
	stw      r30, 0x37c(r31)
	lwz      r0, 0x37c(r31)
	cmplwi   r0, 0
	bne      lbl_80369710
	lis      r3, lbl_80491D98@ha
	lis      r5, lbl_80491DA4@ha
	addi     r3, r3, lbl_80491D98@l
	li       r4, 0xc5
	addi     r5, r5, lbl_80491DA4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80369710:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80369798
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
	addi     r6, r31, 0x364
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

lbl_80369798:
	stw      r3, 0x380(r31)
	lwz      r0, 0x378(r31)
	cmplwi   r0, 0
	bne      lbl_803697C4
	lis      r3, lbl_80491D98@ha
	lis      r5, lbl_80491DA4@ha
	addi     r3, r3, lbl_80491D98@l
	li       r4, 0xc8
	addi     r5, r5, lbl_80491DA4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803697C4:
	li       r0, 0
	mr       r3, r31
	stw      r0, curJ__Q24Game6Jigumo@sda21(r13)
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
 * Address:	803697E8
 * Size:	00004C
 */
void Jigumo::Obj::setFSM(Game::Jigumo::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x388(r3)
	mr       r4, r31
	lwz      r3, 0x388(r3)
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
 * Address:	80369834
 * Size:	000040
 */
void Jigumo::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80369864
	lwz      r3, 0x388(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80369864:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80369874
 * Size:	000004
 */
void Jigumo::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80369878
 * Size:	000020
 */
void Jigumo::Obj::doDebugDraw(Graphics&)
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
 * Address:	80369898
 * Size:	00014C
 */
void Jigumo::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r31, 0x2d8
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_803698C8
	stw      r31, curJ__Q24Game6Jigumo@sda21(r13)

lbl_803698C8:
	lwz      r4, 0x188(r31)
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x24(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x17c(r31)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80369960
	addi     r4, r31, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lfs      f0, 0x144(r31)
	mr       r3, r31
	addi     r4, r1, 0x18
	stfs     f0, 0x18(r1)
	lfs      f0, 0x154(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x18
	lwz      r12, 0(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	b        lbl_80369968

lbl_80369960:
	mr       r3, r31
	bl       calcBaseTrMatrix__Q34Game6Jigumo3ObjFv

lbl_80369968:
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r31)
	addi     r4, r1, 8
	lwz      r3, 0(r3)
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lfs      f2, 0x14(r1)
	lfs      f1, 0x1f8(r31)
	lfs      f0, 8(r1)
	fmuls    f1, f2, f1
	stfs     f1, 0x14(r1)
	stfs     f0, 0x220(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x224(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x228(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x22c(r31)
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	li       r0, 0
	stw      r0, curJ__Q24Game6Jigumo@sda21(r13)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803699E4
 * Size:	000028
 */
void Jigumo::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xe
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
 * Address:	80369A0C
 * Size:	0000BC
 */
void Jigumo::Obj::initMouthSlots(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 1
	addi     r3, r30, 0x2d8
	bl       alloc__10MouthSlotsFi
	lis      r3, lbl_80491DBC@ha
	lwz      r5, 0x174(r30)
	addi     r6, r3, lbl_80491DBC@l
	li       r4, 0
	addi     r3, r30, 0x2d8
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051E968@sda21(r2)
	li       r31, 0
	b        lbl_80369A94

lbl_80369A64:
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x1f8(r30)
	lfs      f1, 0x928(r3)
	fmuls    f30, f1, f0
	fcmpo    cr0, f30, f31
	bge      lbl_80369A80
	fmr      f30, f31

lbl_80369A80:
	mr       r4, r31
	addi     r3, r30, 0x2d8
	bl       getSlot__10MouthSlotsFi
	stfs     f30, 0x1c(r3)
	addi     r31, r31, 1

lbl_80369A94:
	lwz      r0, 0x2d8(r30)
	cmpw     r31, r0
	blt      lbl_80369A64
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x34(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80369AC8
 * Size:	00009C
 */
void Jigumo::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x190(r3)
	lfs      f0, 0x12c(r5)
	lfs      f3, 0x930(r5)
	fadds    f0, f1, f0
	lfs      f2, 0x1f8(r3)
	lfs      f4, 0x194(r3)
	lfs      f1, 0x18c(r3)
	fmadds   f2, f3, f2, f0
	lfs      f0, lbl_8051E980@sda21(r2)
	stfs     f1, 0(r4)
	stfs     f2, 4(r4)
	stfs     f4, 8(r4)
	lfs      f2, 0x200(r3)
	lfs      f1, 0x204(r3)
	fdivs    f1, f2, f1
	stfs     f1, 0xc(r4)
	stfs     f0, 0x10(r4)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_80369B48
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80369B48
	li       r31, 1

lbl_80369B48:
	stb      r31, 0x14(r30)
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
 * Address:	80369B64
 * Size:	000108
 */
bool Jigumo::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80369BA8
	lwz      r12, 0(r3)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl
	b        lbl_80369C50

lbl_80369BA8:
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_80369BCC
	mr       r3, r29
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	beq      lbl_80369BCC
	li       r3, 0
	b        lbl_80369C50

lbl_80369BCC:
	lwz      r3, 0xc0(r29)
	lbz      r0, 0x8fe(r3)
	cmplwi   r0, 0
	beq      lbl_80369C4C
	cmplwi   r31, 0
	beq      lbl_80369C4C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80369C4C
	mr       r3, r29
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_80369C4C
	lwz      r0, 0x1e0(r29)
	mr       r4, r29
	lfs      f0, lbl_8051E978@sda21(r2)
	li       r5, 3
	ori      r0, r0, 0x800
	li       r6, 0
	stw      r0, 0x1e0(r29)
	stfs     f0, 0x200(r29)
	lwz      r3, 0x388(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80369C50

lbl_80369C4C:
	li       r3, 0

lbl_80369C50:
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
 * Address:	80369C6C
 * Size:	0001B4
 */
bool Jigumo::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stfd     f25, 0x40(r1)
	psq_st   f25, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lwz      r0, 0x1e0(r3)
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	rlwinm.  r0, r0, 0, 0x16, 0x16
	mr       r31, r5
	beq      lbl_80369CE4
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	li       r3, 1
	b        lbl_80369DCC

lbl_80369CE4:
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_80369D00
	mr       r3, r29
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	bne      lbl_80369DC8

lbl_80369D00:
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r29)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	addi     r4, r1, 0x14
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lis      r3, 0x626F6479@ha
	lfs      f30, 0x14(r1)
	lfs      f29, 0x18(r1)
	addi     r4, r3, 0x626F6479@l
	lfs      f28, 0x1c(r1)
	lwz      r3, 0x114(r29)
	bl       getCollPart__8CollTreeFUl
	addi     r4, r1, 0x14
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lfs      f27, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f26, 0x18(r1)
	lfs      f25, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f3, 8(r1)
	fsubs    f0, f26, f1
	lfs      f5, 0x10(r1)
	fsubs    f1, f29, f1
	fsubs    f2, f27, f3
	fmuls    f0, f0, f0
	fsubs    f3, f30, f3
	fmuls    f1, f1, f1
	fsubs    f4, f25, f5
	fmadds   f0, f2, f2, f0
	fsubs    f2, f28, f5
	fmadds   f1, f3, f3, f1
	fmadds   f0, f4, f4, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80369DAC
	li       r3, 0
	b        lbl_80369DCC

lbl_80369DAC:
	fmr      f1, f31
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	li       r3, 1
	b        lbl_80369DCC

lbl_80369DC8:
	li       r3, 0

lbl_80369DCC:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	psq_l    f25, 72(r1), 0, qr0
	lfd      f25, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0xb4(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80369E20
 * Size:	0000D0
 */
void Jigumo::Obj::collisionCallback(Game::CollEvent&)
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
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80369E84
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x53
	bne      lbl_80369E84
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x11c(r30)
	stfs     f0, 0x120(r30)
	stfs     f0, 0x124(r30)

lbl_80369E84:
	mr       r3, r30
	mr       r4, r31
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80369ED8
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80369ED8
	mr       r3, r30
	lwz      r4, 0(r31)
	lwz      r12, 0(r30)
	li       r5, 0
	lfs      f1, lbl_8051E97C@sda21(r2)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl

lbl_80369ED8:
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
 * Address:	80369EF0
 * Size:	000120
 */
void Jigumo::Obj::outWaterCallback(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       outWaterCallback__Q24Game9EnemyBaseFv
	lwz      r7, 0x18c(r31)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r6, 0x190(r31)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r5, 0x194(r31)
	addi     r4, r4, __vt__Q23efx3Arg@l
	lfs      f3, 0x1f8(r31)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	stw      r7, 8(r1)
	mr       r3, r31
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r5, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r4, 0x14(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x14(r1)
	stfs     f3, 0x24(r1)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	beq      lbl_80369FE4
	bge      lbl_80369F78
	cmpwi    r3, 4
	beq      lbl_80369F84
	b        lbl_80369FFC

lbl_80369F78:
	cmpwi    r3, 8
	bge      lbl_80369FFC
	b        lbl_80369FB4

lbl_80369F84:
	lwz      r3, 0x370(r31)
	addi     r4, r1, 0x14
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x374(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80369FFC

lbl_80369FB4:
	lwz      r3, 0x378(r31)
	addi     r4, r1, 0x14
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x37c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80369FFC

lbl_80369FE4:
	lwz      r3, 0x380(r31)
	addi     r4, r1, 0x14
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80369FFC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A010
 * Size:	000150
 */
void Jigumo::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
	lwz      r7, 0x18c(r31)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r6, 0x190(r31)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r5, 0x194(r31)
	addi     r4, r4, __vt__Q23efx3Arg@l
	lfs      f3, 0x1f8(r31)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	stw      r7, 8(r1)
	mr       r3, r31
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r5, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r4, 0x14(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x14(r1)
	stfs     f3, 0x24(r1)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	beq      lbl_8036A138
	bge      lbl_8036A098
	cmpwi    r3, 4
	beq      lbl_8036A0A4
	b        lbl_8036A14C

lbl_8036A098:
	cmpwi    r3, 8
	bge      lbl_8036A14C
	b        lbl_8036A108

lbl_8036A0A4:
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x364(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x368(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x36c(r31)
	lwz      r3, 0x280(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	addi     r4, r1, 0x14
	stfs     f0, 0x368(r31)
	lwz      r3, 0x374(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x370(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8036A14C

lbl_8036A108:
	lwz      r3, 0x37c(r31)
	addi     r4, r1, 0x14
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x378(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8036A14C

lbl_8036A138:
	lwz      r3, 0x380(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8036A14C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A160
 * Size:	00007C
 */
bool Jigumo::Obj::earthquakeCallBack(Game::Creature*, float)
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
	lbz      r0, 0x385(r3)
	cmplwi   r0, 0
	beq      lbl_8036A1BC
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_8036A1BC
	lwz      r0, 0x334(r30)
	cmpwi    r0, 0
	bne      lbl_8036A1BC
	fmr      f1, f31
	mr       r3, r30
	mr       r4, r31
	bl       earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	b        lbl_8036A1C0

lbl_8036A1BC:
	li       r3, 0

lbl_8036A1C0:
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
 * Address:	8036A1DC
 * Size:	00009C
 */
void Jigumo::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2e0(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051E984@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, lbl_8051E988@sda21(r2)
	lfs      f2, 0x1c(r3)
	lfs      f1, lbl_8051E98C@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f2, 0x2c(r3)
	stfs     f2, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lfs      f2, 0x28(r3)
	stfs     f2, 0xc(r31)
	lfs      f2, 0x38(r3)
	stfs     f2, 0x10(r31)
	lfs      f2, 0x48(r3)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	lfs      f0, 0x1f8(r30)
	fmuls    f0, f1, f0
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
 * Address:	8036A278
 * Size:	00007C
 */
bool Jigumo::Obj::needShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8036A2A0
	li       r3, 0
	b        lbl_8036A2E0

lbl_8036A2A0:
	lwz      r4, 0x1e0(r31)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8036A2B8
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_8036A2BC

lbl_8036A2B8:
	li       r3, 1

lbl_8036A2BC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036A2DC
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	subfic   r0, r3, 2
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	b        lbl_8036A2E0

lbl_8036A2DC:
	li       r3, 1

lbl_8036A2E0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A2F4
 * Size:	000174
 */
void Jigumo::Obj::doSimulationGround(float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	fmr      f30, f1
	lwz      r0, 0x334(r3)
	cmpwi    r0, 0
	ble      lbl_8036A358
	lwz      r4, 0x1e4(r31)
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_8036A358
	clrlwi.  r0, r4, 0x1f
	bne      lbl_8036A358
	lwz      r12, 0(r3)
	lwz      r12, 0x1f8(r12)
	mtctr    r12
	bctrl
	b        lbl_8036A43C

lbl_8036A358:
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f5, 0x1cc(r31)
	lfs      f0, 0x9c(r4)
	lfs      f1, 0x1d4(r31)
	fsubs    f3, f5, f5
	fdivs    f4, f30, f0
	lfs      f7, 0x1c8(r31)
	lfs      f0, 0x1dc(r31)
	lfs      f6, 0x1d0(r31)
	lfs      f31, lbl_8051E97C@sda21(r2)
	fsubs    f2, f1, f7
	fsubs    f0, f0, f6
	fmuls    f1, f3, f4
	fmuls    f2, f2, f4
	fmuls    f0, f0, f4
	fadds    f1, f5, f1
	fadds    f2, f7, f2
	fadds    f0, f6, f0
	stfs     f2, 0x1c8(r31)
	stfs     f1, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	lwz      r4, 0xc0(r31)
	lfs      f29, 0x90c(r4)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_8036A3CC
	lfs      f29, lbl_8051E978@sda21(r2)
	lfs      f31, lbl_8051E990@sda21(r2)

lbl_8036A3CC:
	lfs      f1, lbl_8051E97C@sda21(r2)
	lfs      f0, 0x2fc(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8036A3FC
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x1c8(r31)
	fnmsubs  f0, f1, f29, f0
	stfs     f0, 0x1c8(r31)
	lfs      f1, 0x300(r31)
	lfs      f0, 0x1d0(r31)
	fnmsubs  f0, f1, f29, f0
	stfs     f0, 0x1d0(r31)

lbl_8036A3FC:
	lwz      r4, 0x1e4(r31)
	li       r3, 0
	clrlwi.  r0, r4, 0x1f
	bne      lbl_8036A414
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	beq      lbl_8036A418

lbl_8036A414:
	li       r3, 1

lbl_8036A418:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036A424
	lfs      f31, lbl_8051E994@sda21(r2)

lbl_8036A424:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f0, 0x1cc(r31)
	lfs      f1, 0x28(r3)
	fmuls    f1, f30, f1
	fnmsubs  f0, f31, f1, f0
	stfs     f0, 0x1cc(r31)

lbl_8036A43C:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A468
 * Size:	000034
 */
void Jigumo::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	mr       r3, r31
	bl       killNest__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A49C
 * Size:	000008
 */
bool Jigumo::Obj::isLivingThing(void) { return true; }

/*
 * --INFO--
 * Address:	8036A4A4
 * Size:	00008C
 */
void Jigumo::Obj::doStartMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x370(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x374(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x378(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x37c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x380(r31)
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

/*
 * --INFO--
 * Address:	8036A530
 * Size:	00008C
 */
void Jigumo::Obj::doEndMovie(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x370(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x374(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x378(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x37c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x380(r31)
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
 * Address:	8036A5BC
 * Size:	0000D8
 */
void Jigumo::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lis      r4, 0x626F6479@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x626F6479@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F745F5F@l
	bl       __as__4ID32FUl
	mr       r3, r31
	bl       effectStop__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	li       r4, 1
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmplwi   r3, 2
	ble      lbl_8036A670
	cmpwi    r3, 0xa
	bne      lbl_8036A680

lbl_8036A670:
	lfs      f1, lbl_8051E998@sda21(r2)
	lfs      f0, 0x1f8(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x2f0(r31)

lbl_8036A680:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A694
 * Size:	0000E8
 */
void Jigumo::Obj::doFinishStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lbz      r0, 0x384(r31)
	cmplwi   r0, 0
	bne      lbl_8036A6F8
	lis      r4, 0x626F6479@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x626F6479@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl

lbl_8036A6F8:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmplwi   r3, 2
	ble      lbl_8036A710
	cmpwi    r3, 0xa
	bne      lbl_8036A74C

lbl_8036A710:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	li       r4, 0
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_8036A74C:
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f1, 0x1f8(r31)
	lfs      f0, 0x1f4(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	bl       effectStart__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A77C
 * Size:	000034
 */
void Jigumo::Obj::getGoalDist(void)
{
	/*
	lfs      f1, 0x190(r3)
	lfs      f0, 0x2cc(r3)
	lfs      f3, 0x18c(r3)
	fsubs    f4, f1, f0
	lfs      f0, 0x2c8(r3)
	lfs      f2, 0x194(r3)
	fsubs    f3, f3, f0
	lfs      f1, 0x2d0(r3)
	fmuls    f0, f4, f4
	fsubs    f1, f2, f1
	fmadds   f0, f3, f3, f0
	fmadds   f1, f1, f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036A7B0
 * Size:	0007DC
 */
void Jigumo::Obj::walkFunc(void)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	lfs      f0, 0x18c(r3)
	stfs     f0, 0x364(r3)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x368(r3)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x36c(r3)
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_8036A82C
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x368(r30)

lbl_8036A82C:
	mr       r3, r30
	bl       getWalkSpeed__Q34Game6Jigumo3ObjFv
	lwz      r4, 0xc0(r30)
	fmr      f29, f1
	mr       r3, r30
	lfs      f30, 0x35c(r4)
	lfs      f31, 0x904(r4)
	lfs      f28, 0x30c(r4)
	lfs      f27, 0x334(r4)
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 7
	beq      lbl_8036A880
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x8fc(r3)
	cmplwi   r0, 0
	bne      lbl_8036AEC4
	cmpwi    r31, 6
	beq      lbl_8036A880
	cmpwi    r31, 5
	bne      lbl_8036AEC4

lbl_8036A880:
	lfs      f1, 0x2cc(r30)
	lfs      f0, 0x190(r30)
	lfs      f3, 0x2c8(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x18c(r30)
	lfs      f2, 0x2d0(r30)
	fsubs    f3, f3, f0
	lfs      f0, 0x194(r30)
	fmuls    f1, f1, f1
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051E978@sda21(r2)
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8036A8CC
	ble      lbl_8036A8D0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8036A8D0

lbl_8036A8CC:
	fmr      f1, f0

lbl_8036A8D0:
	lfs      f0, lbl_8051E978@sda21(r2)
	fmr      f4, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8036A8E4
	fmr      f4, f0

lbl_8036A8E4:
	lfs      f0, lbl_8051E97C@sda21(r2)
	lwz      r3, 0xc0(r30)
	fdivs    f0, f0, f30
	lfs      f3, lbl_8051E99C@sda21(r2)
	lfs      f1, 0x908(r3)
	lfs      f2, lbl_8051E9A0@sda21(r2)
	fmuls    f0, f3, f0
	fmuls    f0, f4, f0
	fmuls    f0, f1, f0
	fadds    f1, f2, f0
	bl       sin
	lwz      r3, 0xc0(r30)
	frsp     f0, f1
	lbz      r0, 0x8fb(r3)
	fmuls    f2, f31, f0
	cmplwi   r0, 0
	bne      lbl_8036A92C
	lfs      f2, lbl_8051E978@sda21(r2)

lbl_8036A92C:
	lfs      f1, 0x344(r30)
	lfs      f0, lbl_8051E9AC@sda21(r2)
	fmuls    f2, f2, f1
	lfs      f3, lbl_8051E9A8@sda21(r2)
	fadds    f1, f1, f0
	lfs      f4, lbl_8051E9A4@sda21(r2)
	lfs      f0, lbl_8051E97C@sda21(r2)
	fmuls    f2, f3, f2
	stfs     f1, 0x344(r30)
	lfs      f1, 0x344(r30)
	fmuls    f30, f4, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8036A964
	stfs     f0, 0x344(r30)

lbl_8036A964:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	bne      lbl_8036AAF0
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x8f9(r3)
	cmplwi   r0, 0
	beq      lbl_8036AA9C
	lfs      f1, 0x338(r30)
	lfs      f0, lbl_8051E97C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x338(r30)
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036AA64
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 1
	bne      lbl_8036AA64
	lfs      f1, 0x338(r30)
	lfs      f0, 0x33c(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8036AA64
	lbz      r0, 0x340(r30)
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 0x340(r30)
	lwz      r0, 0x334(r30)
	cmpwi    r0, 0
	ble      lbl_8036A9E4
	li       r0, 0
	stb      r0, 0x340(r30)

lbl_8036A9E4:
	lbz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_8036AA0C
	mr       r3, r30
	li       r4, 3
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r30
	bl       effectStop__Q34Game6Jigumo3ObjFv
	b        lbl_8036AA24

lbl_8036AA0C:
	mr       r3, r30
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r30
	bl       effectStart__Q34Game6Jigumo3ObjFv

lbl_8036AA24:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 0x38(r1)
	lfd      f1, lbl_8051E970@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f2, lbl_8051E960@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, 0x914(r3)
	lfs      f0, lbl_8051E978@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x33c(r30)
	stfs     f0, 0x338(r30)

lbl_8036AA64:
	lbz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_8036AA9C
	lfs      f1, 0x338(r30)
	lfs      f0, 0x33c(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8036AA9C
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051E97C@sda21(r2)
	lwz      r3, 0xc0(r30)
	lfs      f2, 0x918(r3)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fmuls    f29, f29, f0

lbl_8036AA9C:
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x8fa(r3)
	cmplwi   r0, 0
	beq      lbl_8036AAF0
	lwz      r3, 0x1f4(r30)
	lis      r0, 0x4330
	stw      r0, 0x38(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051E970@sda21(r2)
	stw      r0, 0x3c(r1)
	lfs      f3, lbl_8051E9B0@sda21(r2)
	lfd      f1, 0x38(r1)
	lfs      f0, lbl_8051E9B4@sda21(r2)
	fsubs    f1, f1, f2
	fmuls    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8036AAE4
	fmr      f1, f0

lbl_8036AAE4:
	lfs      f0, lbl_8051E97C@sda21(r2)
	fsubs    f0, f0, f1
	fmuls    f29, f29, f0

lbl_8036AAF0:
	lfs      f0, 0x2ec(r30)
	stfs     f0, 0x1fc(r30)
	lwz      r3, 0x35c(r30)
	addi     r0, r3, 1
	stw      r0, 0x35c(r30)
	lwz      r0, 0x35c(r30)
	cmpwi    r0, 0x3c
	ble      lbl_8036AC84
	lfs      f1, 0x190(r30)
	lfs      f0, 0x354(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x350(r30)
	lfs      f2, 0x194(r30)
	fsubs    f3, f3, f0
	lfs      f0, 0x358(r30)
	fmuls    f1, f1, f1
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051E9B8@sda21(r2)
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8036AC64
	lbz      r0, 0x2e8(r30)
	lfs      f4, lbl_8051E984@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_8036AB64
	lfs      f0, lbl_8051E9BC@sda21(r2)
	fmuls    f4, f4, f0

lbl_8036AB64:
	lfs      f1, 0x1fc(r30)
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8036ABA0
	lfs      f0, lbl_8051E9C0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036ABC4

lbl_8036ABA0:
	lfs      f0, lbl_8051E9C4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036ABC4:
	lfs      f1, 0x18c(r30)
	lfs      f0, lbl_8051E978@sda21(r2)
	fnmsubs  f1, f4, f2, f1
	stfs     f1, 0x18c(r30)
	lfs      f2, 0x1fc(r30)
	fcmpo    cr0, f2, f0
	bge      lbl_8036ABE4
	fneg     f2, f2

lbl_8036ABE4:
	lfs      f1, lbl_8051E9C4@sda21(r2)
	lis      r0, 0x4330
	lis      r3, sincosTable___5JMath@ha
	stw      r0, 0x50(r1)
	fmuls    f2, f2, f1
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x194(r30)
	lfd      f1, lbl_8051E970@sda21(r2)
	fctiwz   f3, f2
	lfs      f2, lbl_8051E978@sda21(r2)
	stfd     f3, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f3, 4(r3)
	fnmsubs  f0, f4, f3, f0
	stfs     f0, 0x194(r30)
	lwz      r0, 0x334(r30)
	xoris    r0, r0, 0x8000
	stw      r0, 0x54(r1)
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	beq      lbl_8036AC50
	lfs      f0, lbl_8051E984@sda21(r2)
	stfs     f0, 0x2f4(r30)
	b        lbl_8036AC64

lbl_8036AC50:
	lfs      f0, lbl_8051E97C@sda21(r2)
	stfs     f0, 0x2f4(r30)
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x910(r3)
	stw      r0, 0x334(r30)

lbl_8036AC64:
	lfs      f0, 0x18c(r30)
	li       r0, 0
	stfs     f0, 0x350(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x354(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x358(r30)
	stw      r0, 0x35c(r30)

lbl_8036AC84:
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2c8(r30)
	lfs      f0, 0x2d0(r30)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f31, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmuls    f28, f1, f28
	lfs      f0, lbl_8051E9A8@sda21(r2)
	lfs      f1, lbl_8051E9A4@sda21(r2)
	fmuls    f0, f0, f27
	fabs     f2, f28
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8036AD34
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8036AD30
	fmr      f28, f1
	b        lbl_8036AD34

lbl_8036AD30:
	fneg     f28, f1

lbl_8036AD34:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051E978@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f4, 0x1fc(r30)
	fadds    f3, f4, f30
	fcmpo    cr0, f3, f0
	bge      lbl_8036AD9C
	lfs      f0, lbl_8051E9C0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036ADC0

lbl_8036AD9C:
	lfs      f0, lbl_8051E9C4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036ADC0:
	lfs      f0, lbl_8051E978@sda21(r2)
	fmuls    f31, f29, f2
	lfs      f1, 0x1d4(r30)
	lfs      f28, 0x1d8(r30)
	fcmpo    cr0, f3, f0
	lfs      f0, 0x1dc(r30)
	stfs     f1, 0x2c(r1)
	stfs     f28, 0x30(r1)
	stfs     f0, 0x34(r1)
	bge      lbl_8036ADEC
	fneg     f3, f3

lbl_8036ADEC:
	lfs      f0, lbl_8051E9C4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fabs     f2, f30
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f0
	frsp     f0, f2
	fctiwz   f1, f1
	fcmpo    cr0, f0, f27
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f29, f29, f0
	stfs     f4, 0x2ec(r30)
	ble      lbl_8036AE44
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8036AE40
	fmr      f30, f27
	b        lbl_8036AE44

lbl_8036AE40:
	fneg     f30, f27

lbl_8036AE44:
	cmpwi    r31, 6
	lfs      f1, lbl_8051E97C@sda21(r2)
	beq      lbl_8036AE58
	cmpwi    r31, 5
	bne      lbl_8036AE5C

lbl_8036AE58:
	lfs      f1, lbl_8051E978@sda21(r2)

lbl_8036AE5C:
	lfs      f0, lbl_8051E9A4@sda21(r2)
	fmadds   f1, f0, f1, f30
	bl       roundAng__Ff
	lfs      f0, 0x1fc(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	stfs     f31, 0x1d4(r30)
	stfs     f28, 0x1d8(r30)
	stfs     f29, 0x1dc(r30)
	lbz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_8036AF4C
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f0, 0x918(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_8036AF4C
	stfs     f1, 0x1d4(r30)
	stfs     f1, 0x1d8(r30)
	stfs     f1, 0x1dc(r30)
	stfs     f1, 0x1c8(r30)
	stfs     f1, 0x1cc(r30)
	stfs     f1, 0x1d0(r30)
	b        lbl_8036AF4C

lbl_8036AEC4:
	cmpwi    r31, 4
	bne      lbl_8036AF34
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f28, f1
	lfs      f27, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f27, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f28
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f29, f1
	stfs     f27, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8036AF4C

lbl_8036AF34:
	fmr      f1, f29
	mr       r3, r30
	fmr      f2, f28
	addi     r4, r30, 0x2c8
	fmr      f3, f27
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_8036AF4C:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036AF8C
 * Size:	00019C
 */
Vector3f Jigumo::Obj::getOffsetForMapCollision(void)
{
	/*
	stwu     r1, -0x20(r1)
	li       r5, 0
	lwz      r6, 0x1e0(r4)
	rlwinm.  r0, r6, 0, 0x15, 0x15
	bne      lbl_8036AFA8
	rlwinm.  r0, r6, 0, 0xd, 0xd
	beq      lbl_8036AFAC

lbl_8036AFA8:
	li       r5, 1

lbl_8036AFAC:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8036AFC8
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	b        lbl_8036B120

lbl_8036AFC8:
	lbz      r0, 0x2e8(r4)
	cmplwi   r0, 0
	beq      lbl_8036B07C
	lfs      f5, 0x1fc(r4)
	lfs      f0, lbl_8051E978@sda21(r2)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8036AFEC
	fneg     f1, f5

lbl_8036AFEC:
	lfs      f2, lbl_8051E9C4@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E978@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051E9C8@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmuls    f4, f3, f0
	bge      lbl_8036B04C
	lfs      f0, lbl_8051E9C0@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_8036B064

lbl_8036B04C:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_8036B064:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f1, 0(r3)
	stfs     f0, 4(r3)
	stfs     f4, 8(r3)
	b        lbl_8036B120

lbl_8036B07C:
	lfs      f5, 0x1fc(r4)
	lfs      f0, lbl_8051E978@sda21(r2)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8036B094
	fneg     f1, f5

lbl_8036B094:
	lfs      f2, lbl_8051E9C4@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E978@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051E984@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmuls    f4, f3, f0
	bge      lbl_8036B0F4
	lfs      f0, lbl_8051E9C0@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_8036B10C

lbl_8036B0F4:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_8036B10C:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f1, 0(r3)
	stfs     f0, 4(r3)
	stfs     f4, 8(r3)

lbl_8036B120:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036B128
 * Size:	000820
 */
void Jigumo::Obj::calcBaseTrMatrix(void)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stw      r31, 0x10c(r1)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lbz      r0, 0x8f8(r4)
	cmplwi   r0, 0
	bne      lbl_8036B1D0
	lfs      f0, lbl_8051E97C@sda21(r2)
	addi     r3, r31, 0x138
	addi     r4, r1, 0x58
	addi     r5, r31, 0x1a4
	stfs     f0, 0x58(r1)
	addi     r6, r31, 0x18c
	stfs     f0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lfs      f0, 0x168(r31)
	lwz      r3, 8(r3)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x16c(r31)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x170(r31)
	stfs     f0, 0x20(r3)
	b        lbl_8036B90C

lbl_8036B1D0:
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	cmplwi   r5, 0
	lfs      f27, 0x1a4(r4)
	lfs      f31, 0x54(r3)
	beq      lbl_8036B230
	lbz      r0, 0x48(r5)
	cmplwi   r0, 0
	beq      lbl_8036B230
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051E9CC@sda21(r2)
	lfs      f2, 0x190(r31)
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8036B230
	li       r3, 0
	li       r0, 0x1e
	stw      r3, 0x334(r31)
	stw      r0, 0x34c(r31)

lbl_8036B230:
	lwz      r3, 0x34c(r31)
	cmpwi    r3, 0
	ble      lbl_8036B258
	addi     r0, r3, -1
	stw      r0, 0x34c(r31)
	lwz      r0, 0x34c(r31)
	cmpwi    r0, 0
	bge      lbl_8036B258
	li       r0, 0
	stw      r0, 0x34c(r31)

lbl_8036B258:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f30, 0x18c(r31)
	lwz      r12, 0x224(r12)
	lfs      f29, 0x190(r31)
	lfs      f28, 0x194(r31)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f3, lbl_8051E978@sda21(r2)
	stfs     f0, 0x240(r31)
	addi     r7, r1, 0x48
	lfs      f0, lbl_8051E9D0@sda21(r2)
	addi     r6, r31, 0x1c8
	lfs      f2, 0xc(r1)
	li       r5, 0
	li       r0, -1
	fmr      f1, f31
	stfs     f2, 0x244(r31)
	addi     r4, r1, 0x64
	lfs      f2, 0x10(r1)
	stfs     f2, 0x248(r31)
	lfs      f2, 0x244(r31)
	lfs      f5, 0x240(r31)
	fadds    f29, f29, f2
	lfs      f4, 0x248(r31)
	fadds    f30, f30, f5
	lfs      f2, 0x800(r3)
	fadds    f28, f28, f4
	stfs     f27, 0x54(r1)
	fadds    f29, f29, f27
	stfs     f30, 0x48(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f28, 0x50(r1)
	stfs     f29, 0x4c(r1)
	lwz      r8, 0xc0(r31)
	lfs      f4, 0x4c(r8)
	stw      r7, 0x64(r1)
	stw      r6, 0x68(r1)
	stfs     f4, 0x6c(r1)
	stfs     f3, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r5, 0xa8(r1)
	stb      r5, 0xd8(r1)
	stb      r5, 0x7d(r1)
	stb      r5, 0x7c(r1)
	stw      r5, 0xac(r1)
	stw      r5, 0x78(r1)
	stb      r5, 0xf4(r1)
	stw      r5, 0xf8(r1)
	stfs     f2, 0x90(r1)
	stfs     f0, 0x94(r1)
	stw      r0, 0xfc(r1)
	stw      r5, 0xb0(r1)
	stb      r5, 0x7e(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	beq      lbl_8036B510
	lwz      r0, 0x34c(r31)
	cmpwi    r0, 0
	bne      lbl_8036B510
	lwz      r0, 0x334(r31)
	cmpwi    r0, 0
	bgt      lbl_8036B384
	lwz      r0, 0xac(r1)
	cmplwi   r0, 0
	beq      lbl_8036B510

lbl_8036B384:
	lwz      r0, 0xac(r1)
	cmplwi   r0, 0
	beq      lbl_8036B3D8
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f2, 0xc0(r1)
	fcmpu    cr0, f1, f2
	bne      lbl_8036B3B8
	lfs      f0, 0xc4(r1)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B3B8
	lfs      f0, 0xc8(r1)
	fcmpu    cr0, f1, f0
	beq      lbl_8036B3D8

lbl_8036B3B8:
	stfs     f2, 0x304(r31)
	lfs      f0, 0xc4(r1)
	stfs     f0, 0x308(r31)
	lfs      f0, 0xc8(r1)
	stfs     f0, 0x30c(r31)
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x910(r3)
	stw      r0, 0x334(r31)

lbl_8036B3D8:
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x304(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B408
	lfs      f1, 0x2fc(r31)
	lfs      f0, 0x308(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B408
	lfs      f1, 0x300(r31)
	lfs      f0, 0x30c(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8036B410

lbl_8036B408:
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x330(r31)

lbl_8036B410:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x308(r31)
	lfs      f1, 0x900(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_8036B4AC
	stfs     f1, 0x308(r31)
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f3, 0x304(r31)
	lfs      f2, 0x308(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0x30c(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B470
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8036B474
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8036B474

lbl_8036B470:
	fmr      f2, f1

lbl_8036B474:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8036B4AC
	lfs      f1, lbl_8051E97C@sda21(r2)
	lfs      f0, 0x304(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x304(r31)
	lfs      f0, 0x308(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x308(r31)
	lfs      f0, 0x30c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x30c(r31)

lbl_8036B4AC:
	lfs      f0, 0x304(r31)
	li       r3, 0
	lfs      f3, lbl_8051E97C@sda21(r2)
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0x308(r31)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x30c(r31)
	stfs     f0, 0x300(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8036B4E0
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_8036B4E4

lbl_8036B4E0:
	li       r3, 1

lbl_8036B4E4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036B4F0
	lfs      f3, lbl_8051E978@sda21(r2)

lbl_8036B4F0:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2f4(r31)
	lfs      f1, 0x91c(r3)
	lfs      f0, 0x190(r31)
	fmuls    f1, f3, f1
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x190(r31)
	b        lbl_8036B5CC

lbl_8036B510:
	lwz      r0, 0xa8(r1)
	cmplwi   r0, 0
	beq      lbl_8036B534
	lfs      f0, 0xb4(r1)
	stfs     f0, 0x304(r31)
	lfs      f0, 0xb8(r1)
	stfs     f0, 0x308(r31)
	lfs      f0, 0xbc(r1)
	stfs     f0, 0x30c(r31)

lbl_8036B534:
	lwz      r4, 0x1e0(r31)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8036B54C
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_8036B550

lbl_8036B54C:
	li       r3, 1

lbl_8036B550:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036B56C
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f0, lbl_8051E97C@sda21(r2)
	stfs     f1, 0x304(r31)
	stfs     f0, 0x308(r31)
	stfs     f1, 0x30c(r31)

lbl_8036B56C:
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x304(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B59C
	lfs      f1, 0x2fc(r31)
	lfs      f0, 0x308(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B59C
	lfs      f1, 0x300(r31)
	lfs      f0, 0x30c(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8036B5A4

lbl_8036B59C:
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x330(r31)

lbl_8036B5A4:
	lfs      f1, 0x304(r31)
	lfs      f0, lbl_8051E9D4@sda21(r2)
	stfs     f1, 0x2f8(r31)
	lfs      f1, 0x308(r31)
	stfs     f1, 0x2fc(r31)
	lfs      f1, 0x30c(r31)
	stfs     f1, 0x300(r31)
	lfs      f1, 0x2f4(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x2f4(r31)

lbl_8036B5CC:
	lfs      f1, 0x2f4(r31)
	lfs      f0, lbl_8051E9D8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8036B5E4
	lfs      f0, lbl_8051E97C@sda21(r2)
	stfs     f0, 0x2f4(r31)

lbl_8036B5E4:
	lwz      r3, 0x334(r31)
	addi     r0, r3, -1
	stw      r0, 0x334(r31)
	lwz      r0, 0x334(r31)
	cmpwi    r0, 0
	bge      lbl_8036B604
	li       r0, 0
	stw      r0, 0x334(r31)

lbl_8036B604:
	lfs      f1, 0x1fc(r31)
	bl       cos
	frsp     f31, f1
	lfs      f1, 0x1fc(r31)
	bl       sin
	frsp     f2, f1
	lfs      f1, lbl_8051E978@sda21(r2)
	fmuls    f4, f31, f31
	stfs     f31, 0x44(r1)
	fmuls    f3, f1, f1
	fmuls    f0, f2, f2
	stfs     f2, 0x3c(r1)
	fadds    f0, f0, f3
	stfs     f1, 0x40(r1)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B664
	fmadds   f0, f2, f2, f3
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8036B668
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8036B668

lbl_8036B664:
	fmr      f3, f1

lbl_8036B668:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8036B6A0
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x3c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x40(r1)
	lfs      f0, 0x44(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)

lbl_8036B6A0:
	lfs      f0, 0x2f8(r31)
	addi     r3, r1, 0x30
	addi     r4, r1, 0x3c
	addi     r5, r1, 0x24
	stfs     f0, 0x30(r1)
	lfs      f0, 0x2fc(r31)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x300(r31)
	stfs     f0, 0x38(r1)
	bl       PSVECCrossProduct
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x2c(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E978@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B710
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8036B714
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8036B714

lbl_8036B710:
	fmr      f3, f1

lbl_8036B714:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8036B74C
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x24(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)

lbl_8036B74C:
	addi     r3, r1, 0x24
	addi     r4, r1, 0x30
	addi     r5, r1, 0x3c
	bl       PSVECCrossProduct
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x40(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x44(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E978@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B7A4
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8036B7A8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8036B7A8

lbl_8036B7A4:
	fmr      f3, f1

lbl_8036B7A8:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8036B7E0
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x3c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x40(r1)
	lfs      f0, 0x44(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)

lbl_8036B7E0:
	lfs      f0, 0x24(r1)
	addi     r3, r31, 0x320
	addi     r4, r31, 0x138
	stfs     f0, 0x138(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x148(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x158(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x13c(r31)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x14c(r31)
	lfs      f0, 0x38(r1)
	stfs     f0, 0x15c(r31)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x140(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x150(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x160(r31)
	bl       fromMatrixf__4QuatFR7Matrixf
	addi     r3, r1, 0x14
	addi     r4, r31, 0x310
	bl       __ct__4QuatFR4Quat
	lfs      f2, 0x330(r31)
	lfs      f1, lbl_8051E97C@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8036B884
	lfs      f0, lbl_8051E9AC@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x330(r31)
	lfs      f0, 0x330(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_8036B86C
	stfs     f1, 0x330(r31)

lbl_8036B86C:
	addi     r3, r31, 0x310
	lfs      f1, 0x330(r31)
	mr       r5, r3
	addi     r4, r31, 0x320
	bl       slerp__4QuatFR4QuatfR4Quat
	b        lbl_8036B8AC

lbl_8036B884:
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x330(r31)
	lfs      f0, 0x320(r31)
	stfs     f0, 0x310(r31)
	lfs      f0, 0x324(r31)
	stfs     f0, 0x314(r31)
	lfs      f0, 0x328(r31)
	stfs     f0, 0x318(r31)
	lfs      f0, 0x32c(r31)
	stfs     f0, 0x31c(r31)

lbl_8036B8AC:
	addi     r3, r31, 0x310
	bl       normalise__4QuatFv
	addi     r3, r31, 0x138
	addi     r4, r31, 0x310
	bl       makeQ__7MatrixfFR4Quat
	lfs      f0, 0x18c(r31)
	addi     r3, r31, 0x138
	stfs     f0, 0x144(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x164(r31)
	lwz      r4, 0x174(r31)
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lfs      f0, 0x168(r31)
	lwz      r3, 8(r3)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x16c(r31)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x170(r31)
	stfs     f0, 0x20(r3)

lbl_8036B90C:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	lwz      r0, 0x164(r1)
	lwz      r31, 0x10c(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
bool Jigumo::Obj::isUnitePos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036B948
 * Size:	000058
 */
void Jigumo::Obj::revisionAnimPos(float)
{
	/*
	lfs      f0, lbl_8051E97C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8036B970
	lfs      f0, 0x198(r3)
	stfs     f0, 0x18c(r3)
	lfs      f0, 0x19c(r3)
	stfs     f0, 0x190(r3)
	lfs      f0, 0x1a0(r3)
	stfs     f0, 0x194(r3)
	blr

lbl_8036B970:
	lfs      f2, 0x198(r3)
	lfs      f4, 0x2bc(r3)
	lfs      f3, 0x1a0(r3)
	fsubs    f2, f2, f4
	lfs      f0, 0x2c4(r3)
	fsubs    f3, f3, f0
	fmadds   f0, f2, f1, f4
	stfs     f0, 0x18c(r3)
	lfs      f0, 0x2c4(r3)
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x194(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036B9A0
 * Size:	000080
 */
void Jigumo::Obj::getWalkSpeed(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_8036BA04
	bge      lbl_8036B9D8
	cmpwi    r3, 7
	bge      lbl_8036B9E4
	cmpwi    r3, 5
	bge      lbl_8036B9F0
	b        lbl_8036BA04

lbl_8036B9D8:
	cmpwi    r3, 0xa
	bge      lbl_8036BA04
	b        lbl_8036B9FC

lbl_8036B9E4:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x81c(r3)
	b        lbl_8036BA0C

lbl_8036B9F0:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x844(r3)
	b        lbl_8036BA0C

lbl_8036B9FC:
	lfs      f1, lbl_8051E978@sda21(r2)
	b        lbl_8036BA0C

lbl_8036BA04:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2e4(r3)

lbl_8036BA0C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036BA20
 * Size:	000074
 */
void Jigumo::Obj::velocityControl(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getMotionFrameMax__Q24Game9EnemyBaseFv
	fmr      f31, f1
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	fdivs    f1, f1, f31
	lfs      f0, lbl_8051E9AC@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8036BA78
	lfs      f0, 0x1c8(r31)
	lfs      f1, lbl_8051E984@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1d0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r31)

lbl_8036BA78:
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
 * Address:	8036BA94
 * Size:	0000A8
 */
void Jigumo::Obj::getNearestPikiOrNavi(float, float)
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
	stw      r30, 0x18(r1)
	fmr      f31, f2
	mr       r30, r3
	fmr      f30, f1
	addi     r4, r1, 0xc
	li       r5, 0
	frsp     f0, f31
	stfs     f31, 0xc(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0xc(r1)
	stfs     f0, 8(r1)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	fmr      f1, f30
	mr       r31, r3
	fmr      f2, f31
	mr       r3, r30
	addi     r4, r1, 8
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	fcmpo    cr0, f1, f0
	bge      lbl_8036BB14
	mr       r3, r31

lbl_8036BB14:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036BB3C
 * Size:	0001C0
 */
void Jigumo::Obj::effectStart(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051E978@sda21(r2)
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x44(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	lis      r4, __vt__Q23efx8ArgScale@ha
	stw      r31, 0x3c(r1)
	addi     r0, r4, __vt__Q23efx8ArgScale@l
	stw      r30, 0x38(r1)
	mr       r30, r3
	lfs      f3, 0x1f8(r3)
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	lwz      r7, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r6, 0x18(r1)
	lwz      r4, 0x1c(r1)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r4, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x20(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x20(r1)
	stfs     f3, 0x30(r1)
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 4
	bne      lbl_8036BC48
	lwz      r0, 0x280(r30)
	cmplwi   r0, 0
	beq      lbl_8036BC28
	lwz      r3, 0x374(r30)
	cmplwi   r3, 0
	beq      lbl_8036BC48
	lwz      r12, 0(r3)
	addi     r4, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x364(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x368(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x36c(r30)
	lwz      r3, 0x280(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x368(r30)
	b        lbl_8036BC48

lbl_8036BC28:
	lwz      r3, 0x370(r30)
	cmplwi   r3, 0
	beq      lbl_8036BC48
	lwz      r12, 0(r3)
	addi     r4, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8036BC48:
	cmpwi    r31, 7
	bne      lbl_8036BCA8
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x344(r30)
	lwz      r0, 0x280(r30)
	cmplwi   r0, 0
	beq      lbl_8036BC88
	lwz      r3, 0x37c(r30)
	cmplwi   r3, 0
	beq      lbl_8036BCA8
	lwz      r12, 0(r3)
	addi     r4, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8036BCA8

lbl_8036BC88:
	lwz      r3, 0x378(r30)
	cmplwi   r3, 0
	beq      lbl_8036BCA8
	lwz      r12, 0(r3)
	addi     r4, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8036BCA8:
	cmpwi    r31, 6
	bne      lbl_8036BCE4
	lwz      r0, 0x280(r30)
	cmplwi   r0, 0
	bne      lbl_8036BCE4
	lfs      f1, lbl_8051E9DC@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f0, 0x1f8(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x30(r1)
	lwz      r3, 0x380(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8036BCE4:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036BCFC
 * Size:	00008C
 */
void Jigumo::Obj::effectStop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x374(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x370(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x37c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x378(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x380(r31)
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
 * Address:	........
 * Size:	0000A8
 */
void Jigumo::Obj::appearEffectStart(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Jigumo::Obj::appearEffectStop(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036BD88
 * Size:	000028
 */
void Jigumo::Obj::boundEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051E9E0@sda21(r2)
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
 * Address:	8036BDB0
 * Size:	000124
 */
void Jigumo::Obj::eatWaterEffect(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r31, 0x2d8
	bl       getSlot__10MouthSlotsFi
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	beq      lbl_8036BEC0
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r7, 0x159
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	li       r6, 0x15a
	lis      r3, __vt__Q23efx10TEnemyDive@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx10TEnemyDive@l
	sth      r7, 0x30(r1)
	addi     r3, r1, 0x14
	sth      r6, 0x32(r1)
	stw      r5, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x2c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x280(r31)
	lfs      f2, 0x14(r1)
	lwz      r12, 0(r3)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	lwz      r12, 0x14(r12)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r8, 0x20(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stfs     f0, 0x24(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	lfs      f3, 0x1f8(r31)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lwz      r7, 0x24(r1)
	addi     r3, r1, 0x2c
	lwz      r6, 0x28(r1)
	addi     r4, r1, 0x3c
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x3c(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	stw      r0, 0x3c(r1)
	stfs     f3, 0x4c(r1)
	bl       create__Q23efx10TEnemyDiveFPQ23efx3Arg

lbl_8036BEC0:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036BED4
 * Size:	000020
 */
void Jigumo::Obj::killNest(void)
{
	/*
	lwz      r4, 0x2e4(r3)
	cmplwi   r4, 0
	beq      lbl_8036BEE8
	li       r0, 1
	stw      r0, 0x2f0(r4)

lbl_8036BEE8:
	li       r0, 0
	stw      r0, 0x2e4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036BEF4
 * Size:	000194
 */
void Jigumo::Obj::mouthScaleMtxCalc(void)
{
	/*
	lwz      r4, 0x174(r3)
	lhz      r0, 0x360(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lfs      f3, lbl_8051E978@sda21(r2)
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	lfs      f1, 0x10(r4)
	lfs      f2, 0x20(r4)
	fmuls    f4, f1, f1
	lfs      f0, 0(r4)
	fmuls    f5, f2, f2
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8036BF48
	ble      lbl_8036BF4C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8036BF4C

lbl_8036BF48:
	fmr      f4, f3

lbl_8036BF4C:
	lfs      f3, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8036BF6C
	lfs      f3, lbl_8051E97C@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_8036BF6C:
	lfs      f3, 0x14(r4)
	lfs      f4, 0x24(r4)
	fmuls    f6, f3, f3
	lfs      f7, 4(r4)
	fmuls    f8, f4, f4
	lfs      f5, lbl_8051E978@sda21(r2)
	fmadds   f6, f7, f7, f6
	fadds    f6, f8, f6
	fcmpo    cr0, f6, f5
	ble      lbl_8036BFA4
	ble      lbl_8036BFA8
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_8036BFA8

lbl_8036BFA4:
	fmr      f6, f5

lbl_8036BFA8:
	lfs      f5, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8036BFC8
	lfs      f5, lbl_8051E97C@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f7, f7, f5
	fmuls    f3, f3, f5
	fmuls    f4, f4, f5

lbl_8036BFC8:
	lfs      f9, 0x18(r4)
	lfs      f10, 0x28(r4)
	fmuls    f6, f9, f9
	lfs      f8, 8(r4)
	fmuls    f11, f10, f10
	lfs      f5, lbl_8051E978@sda21(r2)
	fmadds   f6, f8, f8, f6
	fadds    f6, f11, f6
	fcmpo    cr0, f6, f5
	ble      lbl_8036C000
	ble      lbl_8036C004
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_8036C004

lbl_8036C000:
	fmr      f6, f5

lbl_8036C004:
	lfs      f5, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8036C024
	lfs      f5, lbl_8051E97C@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f8, f8, f5
	fmuls    f9, f9, f5
	fmuls    f10, f10, f5

lbl_8036C024:
	lbz      r0, 0x2e9(r3)
	lwz      r3, 0xc0(r3)
	cmplwi   r0, 0
	lfs      f11, 0x92c(r3)
	beq      lbl_8036C03C
	lfs      f11, lbl_8051E9E4@sda21(r2)

lbl_8036C03C:
	fmuls    f5, f0, f11
	fmuls    f1, f1, f11
	fmuls    f0, f2, f11
	stfs     f5, 0(r4)
	fmuls    f6, f7, f11
	fmuls    f5, f3, f11
	stfs     f1, 0x10(r4)
	fmuls    f3, f4, f11
	fmuls    f2, f8, f11
	stfs     f0, 0x20(r4)
	fmuls    f1, f9, f11
	fmuls    f0, f10, f11
	stfs     f6, 4(r4)
	stfs     f5, 0x14(r4)
	stfs     f3, 0x24(r4)
	stfs     f2, 8(r4)
	stfs     f1, 0x18(r4)
	stfs     f0, 0x28(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C088
 * Size:	000004
 */
void Jigumo::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8036C08C
 * Size:	000014
 */
f32 Jigumo::Obj::getCellRadius(void)
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x1f8(r3)
	lfs      f0, 0x1cc(r4)
	fmuls    f1, f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C0A0
 * Size:	000008
 */
f32 Jigumo::Obj::getBodyRadius(void)
{
	/*
	lfs      f1, 0x2f0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C0A8
 * Size:	000028
 */
bool Jigumo::Obj::eatWhitePikminCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x8bc(r5)
	bl       eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C0D0
 * Size:	000008
 */
f32 Jigumo::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051E9E8@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C0D8
 * Size:	000008
 */
MouthSlots* Jigumo::Obj::getMouthSlots(void)
{
	/*
	addi     r3, r3, 0x2d8
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C0E0
 * Size:	00003C
 */
void Jigumo::Obj::createEfxHamon(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8036C108
	mr       r3, r31
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_8036C108:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game
