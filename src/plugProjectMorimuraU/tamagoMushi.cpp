#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804924E8
    lbl_804924E8:
        .4byte 0x74616D61
        .4byte 0x676F4D75
        .4byte 0x73686900
    .global lbl_804924F4
    lbl_804924F4:
        .4byte 0x74616D61
        .4byte 0x676F4D75
        .4byte 0x7368692E
        .4byte 0x63707000
    .global lbl_80492504
    lbl_80492504:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x6B6F7368
        .4byte 0x696A6E74
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9TTamagoAp
    __vt__Q23efx9TTamagoAp:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q34Game11TamagoMushi3Obj
    __vt__Q34Game11TamagoMushi3Obj:
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
        .4byte onInit__Q34Game11TamagoMushi3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game11TamagoMushi3ObjFR8Graphics
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
        .4byte isLivingThing__Q34Game11TamagoMushi3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q34Game11TamagoMushi3ObjFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game11TamagoMushi3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game11TamagoMushi3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game11TamagoMushi3ObjFv
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
        .4byte __dt__Q34Game11TamagoMushi3ObjFv
        .4byte "birth__Q34Game11TamagoMushi3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game11TamagoMushi3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game11TamagoMushi3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game11TamagoMushi3ObjFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game11TamagoMushi3ObjFR8Graphics
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
        .4byte setParameters__Q34Game11TamagoMushi3ObjFv
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
        .4byte getEnemyTypeID__Q34Game11TamagoMushi3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreatureR10Vector3<f>f"
        .4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doStartStoneState__Q24Game9EnemyBaseFv
        .4byte doFinishStoneState__Q24Game9EnemyBaseFv
        .4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
        .4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte lifeRecover__Q24Game9EnemyBaseFv
        .4byte startCarcassMotion__Q34Game11TamagoMushi3ObjFv
        .4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
        .4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
        .4byte doBecomeCarcass__Q24Game9EnemyBaseFv
        .4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
        .4byte getDownSmokeScale__Q34Game11TamagoMushi3ObjFv
        .4byte doStartMovie__Q24Game9EnemyBaseFv
        .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game11TamagoMushi3ObjFPQ34Game11TamagoMushi3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@780@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@780@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@780@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051EAB0
    lbl_8051EAB0:
        .4byte 0x47000000
    .global lbl_8051EAB4
    lbl_8051EAB4:
        .4byte 0x3F4CCCCD
    .global lbl_8051EAB8
    lbl_8051EAB8:
        .4byte 0x3E4CCCCD
    .global lbl_8051EABC
    lbl_8051EABC:
        .float 0.7
    .global lbl_8051EAC0
    lbl_8051EAC0:
        .float 0.3
    .global lbl_8051EAC4
    lbl_8051EAC4:
        .4byte 0x00000000
    .global lbl_8051EAC8
    lbl_8051EAC8:
        .4byte 0x43A2F983
    .global lbl_8051EACC
    lbl_8051EACC:
        .4byte 0xC3A2F983
    .global lbl_8051EAD0
    lbl_8051EAD0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051EAD8
    lbl_8051EAD8:
        .4byte 0x41200000
    .global lbl_8051EADC
    lbl_8051EADC:
        .4byte 0x40000000
    .global lbl_8051EAE0
    lbl_8051EAE0:
        .float 1.0
    .global lbl_8051EAE4
    lbl_8051EAE4:
        .4byte 0x41700000
    .global lbl_8051EAE8
    lbl_8051EAE8:
        .4byte 0x41400000
    .global lbl_8051EAEC
    lbl_8051EAEC:
        .4byte 0x42480000
    .global lbl_8051EAF0
    lbl_8051EAF0:
        .4byte 0x43480000
    .global lbl_8051EAF4
    lbl_8051EAF4:
        .4byte 0x3F666666
    .global lbl_8051EAF8
    lbl_8051EAF8:
        .4byte 0x43B40000
    .global lbl_8051EAFC
    lbl_8051EAFC:
        .4byte 0x40490FDB
    .global lbl_8051EB00
    lbl_8051EB00:
        .4byte 0x3BB60B61
    .global lbl_8051EB04
    lbl_8051EB04:
        .float 0.1
    .global lbl_8051EB08
    lbl_8051EB08:
        .float 0.5
    .global lbl_8051EB0C
    lbl_8051EB0C:
        .4byte 0x40C90FDB
    .global lbl_8051EB10
    lbl_8051EB10:
        .4byte 0x43340000
    .global lbl_8051EB14
    lbl_8051EB14:
        .4byte 0x3F733333
    .global lbl_8051EB18
    lbl_8051EB18:
        .4byte 0x3EB33333
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8036EBA8
 * Size:	000020
 */
void TamagoMushi::Obj::setParameters(void)
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
 * Address:	8036EBC8
 * Size:	000020
 */
void birth__Q34Game11TamagoMushi3ObjFR10Vector3f f(void)
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
 * Address:	8036EBE8
 * Size:	0002D0
 */
void TamagoMushi::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_804924E8@ha
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	addi     r31, r5, lbl_804924E8@l
	stw      r30, 0x48(r1)
	mr       r30, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r30)
	li       r0, 0
	rlwinm   r3, r3, 0, 0x19, 0x17
	stw      r3, 0x1e0(r30)
	lwz      r3, 0x1e0(r30)
	rlwinm   r3, r3, 0, 0x1d, 0x1b
	stw      r3, 0x1e0(r30)
	lwz      r3, 0x1e0(r30)
	rlwinm   r3, r3, 0, 0x18, 0x16
	stw      r3, 0x1e0(r30)
	stw      r0, 0x2bc(r30)
	stb      r0, 0x2f0(r30)
	stw      r0, 0x2f4(r30)
	stw      r0, 0x304(r30)
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x2e0(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x2e4(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x2e8(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051EAD0@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f3, lbl_8051EAB0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_8051EAB8@sda21(r2)
	lfs      f0, lbl_8051EAB4@sda21(r2)
	lfs      f2, 0x81c(r3)
	fdivs    f3, f4, f3
	fmadds   f0, f1, f3, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	stw      r0, 0x2c0(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8036ECD0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_8036ECD0
	lwz      r0, 0x2c0(r30)
	mulli    r0, r0, 5
	stw      r0, 0x2c0(r30)

lbl_8036ECD0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051EAC0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EABC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x2c4(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f1, lbl_8051EAC0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EABC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x2c8(r30)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x2c(r1)
	li       r0, 0
	lfd      f1, lbl_8051EAD0@sda21(r2)
	stw      r3, 0x28(r1)
	lfs      f3, lbl_8051EAB0@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f2, lbl_8051EABC@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_8051EAC0@sda21(r2)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x2cc(r30)
	stfs     f0, 0x2fc(r30)
	stb      r0, 0x300(r30)
	lfs      f4, 0x1fc(r30)
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8036ED9C
	fneg     f1, f4

lbl_8036ED9C:
	lfs      f2, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051EAC4@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f3, 4(r3)
	bge      lbl_8036EDF4
	lfs      f0, lbl_8051EACC@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8036EE0C

lbl_8036EDF4:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8036EE0C:
	lfs      f0, lbl_8051EAC4@sda21(r2)
	mr       r3, r30
	stfs     f1, 8(r1)
	addi     r4, r1, 8
	stfs     f0, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "setGoalDirect__Q34Game11TamagoMushi3ObjFR10Vector3<f>"
	li       r0, 0
	stb      r0, 0x1f3(r30)
	lwz      r0, 0x174(r30)
	cmplwi   r0, 0
	bne      lbl_8036EE50
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x51
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036EE50:
	lwz      r3, 0x174(r30)
	addi     r4, r31, 0x28
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2f8(r30)
	lwz      r0, 0x2f8(r30)
	cmplwi   r0, 0
	bne      lbl_8036EE80
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x54
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036EE80:
	lwz      r3, 0x308(r30)
	mr       r4, r30
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	8036EEB8
 * Size:	00013C
 */
TamagoMushi::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8036EEF8
	addi     r0, r31, 0x30c
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x30c(r31)
	stw      r0, 0x310(r31)
	stw      r0, 0x314(r31)

lbl_8036EEF8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game11TamagoMushi3Obj@ha
	addi     r4, r31, 0x30c
	addi     r3, r3, __vt__Q34Game11TamagoMushi3Obj@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r5, r3, 0x1b0
	addi     r6, r3, 0x2fc
	li       r3, 0x2c
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r4, r5, r4
	stw      r4, 0xc(r5)
	stw      r0, 0x2f8(r31)
	stw      r0, 0x308(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8036EF90
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game11TamagoMushi14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game11TamagoMushi14ProperAnimator@l
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

lbl_8036EF90:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8036EFC4
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game11TamagoMushi3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game11TamagoMushi3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8036EFC4:
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
 * Address:	8036EFF4
 * Size:	00004C
 */
void TamagoMushi::Obj::setFSM(Game::TamagoMushi::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x308(r3)
	mr       r4, r31
	lwz      r3, 0x308(r3)
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
 * Address:	8036F040
 * Size:	0000A0
 */
void TamagoMushi::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8036F0CC
	lwz      r3, 0x308(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_8036F090
	cmpwi    r3, 1
	bne      lbl_8036F0CC

lbl_8036F090:
	lwz      r3, 0x2bc(r31)
	addi     r0, r3, 1
	stw      r0, 0x2bc(r31)
	lwz      r3, 0x2bc(r31)
	lwz      r0, 0x2c0(r31)
	cmpw     r3, r0
	ble      lbl_8036F0CC
	lwz      r3, 0x308(r31)
	mr       r4, r31
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8036F0CC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F0E0
 * Size:	000158
 */
void TamagoMushi::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	li       r0, 0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r4, 0x188(r3)
	stb      r0, 0x24(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x17c(r30)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8036F19C
	addi     r4, r30, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lfs      f1, 0x168(r30)
	addi     r3, r1, 0x14
	lfs      f2, 0x16c(r30)
	lfs      f3, 0x170(r30)
	bl       PSMTXScale
	addi     r3, r30, 0x138
	addi     r4, r1, 0x14
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, 0x144(r30)
	mr       r3, r30
	addi     r4, r1, 8
	stfs     f0, 8(r1)
	lfs      f0, 0x154(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x164(r30)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	b        lbl_8036F1AC

lbl_8036F19C:
	addi     r3, r30, 0x138
	addi     r4, r30, 0x18c
	addi     r5, r30, 0x1a4
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_8036F1AC:
	lwz      r4, 0x174(r30)
	addi     r3, r30, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x923(r3)
	cmplwi   r0, 0
	beq      lbl_8036F200
	mr       r3, r30
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_8036F200
	lwz      r4, 0x174(r30)
	mr       r3, r30
	lwz      r31, 8(r4)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lwz      r3, 0x180(r30)
	mr       r4, r31
	bl       fetch__Q34Game11TamagoMushi3MgrFP8J3DModelf
	b        lbl_8036F218

lbl_8036F200:
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8036F218:
	lwz      r3, 0x114(r30)
	bl       update__8CollTreeFv
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
 * Address:	8036F238
 * Size:	000004
 */
void TamagoMushi::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8036F23C
 * Size:	000020
 */
void TamagoMushi::Obj::doDebugDraw(Graphics&)
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
 * Address:	8036F25C
 * Size:	0000DC
 */
void TamagoMushi::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8036F320
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036F320
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8036F2D4
	lwz      r3, 0x24c(r31)
	lbz      r0, 0x50(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_8036F2CC
	mr       r3, r31
	bl       genItem__Q34Game11TamagoMushi3ObjFv
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r3, 1
	b        lbl_8036F324

lbl_8036F2CC:
	li       r3, 0
	b        lbl_8036F324

lbl_8036F2D4:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	beq      lbl_8036F320
	lwz      r3, 0x308(r31)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r31)
	li       r3, 1
	lfs      f0, lbl_8051EAC4@sda21(r2)
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x200(r31)
	b        lbl_8036F324

lbl_8036F320:
	li       r3, 0

lbl_8036F324:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F338
 * Size:	0000BC
 */
void bombCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreatureR10Vector3f f(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	beq      lbl_8036F3CC
	fmr      f1, f31
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036F3CC
	lwz      r3, 0x308(r29)
	mr       r4, r29
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r29)
	li       r3, 1
	lfs      f0, lbl_8051EAC4@sda21(r2)
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r29)
	stfs     f0, 0x200(r29)
	b        lbl_8036F3D0

lbl_8036F3CC:
	li       r3, 0

lbl_8036F3D0:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F3F4
 * Size:	000134
 */
void TamagoMushi::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	stw      r28, 0x20(r1)
	mr       r28, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r28)
	mr       r31, r3
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8036F464
	lwz      r3, 0x304(r28)
	addi     r0, r3, 1
	stw      r0, 0x304(r28)
	lwz      r0, 0x304(r28)
	cmpwi    r0, 4
	ble      lbl_8036F45C
	mr       r3, r28
	bl       genItem__Q34Game11TamagoMushi3ObjFv
	mr       r3, r28
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8036F45C:
	li       r3, 1
	b        lbl_8036F508

lbl_8036F464:
	lfs      f1, lbl_8051EAC4@sda21(r2)
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	cmpwi    r31, 2
	beq      lbl_8036F504
	cmpwi    r31, 4
	beq      lbl_8036F504
	cmplwi   r29, 0
	beq      lbl_8036F504
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036F504
	mr       r3, r29
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0x15
	beq      lbl_8036F504
	cmpwi    r3, 6
	beq      lbl_8036F504
	lwz      r6, 0xc0(r28)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game16InteractAstonish@ha
	mr       r3, r29
	lfs      f0, 0x944(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game16InteractAstonish@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r28, 0xc(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8036F504:
	li       r3, 0

lbl_8036F508:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F528
 * Size:	0000F8
 */
void TamagoMushi::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8036F604
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r4, r30
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lwz      r30, 0(r30)
	cmplwi   r30, 0
	beq      lbl_8036F604
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036F604
	cmpwi    r31, 2
	beq      lbl_8036F604
	mr       r3, r30
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0x15
	beq      lbl_8036F604
	mr       r3, r30
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 6
	beq      lbl_8036F604
	lwz      r6, 0xc0(r29)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game16InteractAstonish@ha
	mr       r3, r30
	lfs      f0, 0x944(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game16InteractAstonish@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r29, 0xc(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8036F604:
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
 * Address:	8036F620
 * Size:	000178
 */
void TamagoMushi::Obj::bounceCallback(Sys::Triangle*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lbz      r0, 0x300(r3)
	cmplwi   r0, 0
	beq      lbl_8036F77C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f5, 0x1fc(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051EAD0@sda21(r2)
	fmr      f4, f5
	lfd      f0, 0x18(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f0, lbl_8051EAC4@sda21(r2)
	lwz      r4, 0xc0(r31)
	lfs      f1, lbl_8051EAC0@sda21(r2)
	fcmpo    cr0, f5, f0
	fdivs    f2, f3, f2
	lfs      f0, lbl_8051EABC@sda21(r2)
	lfs      f7, 0x938(r4)
	fmadds   f6, f1, f2, f0
	bge      lbl_8036F694
	fneg     f4, f5

lbl_8036F694:
	lfs      f3, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f1, 0x934(r4)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmuls    f1, f1, f6
	fcmpo    cr0, f5, f0
	fctiwz   f0, f2
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f2, f7, f0
	bge      lbl_8036F6F8
	lfs      f0, lbl_8051EACC@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8036F710

lbl_8036F6F8:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8036F710:
	fmuls    f0, f7, f0
	stfs     f1, 0xc(r1)
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r0, 0
	lfs      f1, lbl_8051EAD8@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x1d8(r31)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x1dc(r31)
	lfs      f2, 0x190(r31)
	fadds    f1, f2, f1
	stfs     f1, 0x190(r31)
	stb      r0, 0x2f0(r31)
	stfs     f0, 0x1ac(r31)
	stfs     f0, 0x1a4(r31)
	bl       appearPanic__Q34Game11TamagoMushi3ObjFv

lbl_8036F77C:
	li       r0, 0
	stb      r0, 0x300(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F798
 * Size:	00002C
 */
void TamagoMushi::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
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
 * Address:	8036F7C4
 * Size:	000030
 */
void TamagoMushi::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
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
 * Address:	8036F7F4
 * Size:	0000A8
 */
void TamagoMushi::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2f8(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r3, 0x17c(r30)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8036F850
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_8036F860

lbl_8036F850:
	lfs      f1, lbl_8051EADC@sda21(r2)
	lfs      f0, 0x190(r30)
	fadds    f0, f1, f0
	stfs     f0, 4(r31)

lbl_8036F860:
	lfs      f2, lbl_8051EAC4@sda21(r2)
	lfs      f0, lbl_8051EAE0@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f1, lbl_8051EAE4@sda21(r2)
	stfs     f0, 0x10(r31)
	lfs      f0, lbl_8051EAE8@sda21(r2)
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
 * Address:	8036F89C
 * Size:	000030
 */
void TamagoMushi::Obj::needShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F8CC
 * Size:	000208
 */
void TamagoMushi::Obj::genItem(void)
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
	beq      lbl_8036F8FC
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	beq      lbl_8036FABC

lbl_8036F8FC:
	li       r0, 1
	stb      r0, 0x1f3(r31)
	lwz      r30, 0xc0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051EAB0@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, 0x86c(r30)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_8036FABC
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	lfs      f2, lbl_8051EAEC@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_8036F97C
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8036F9A0

lbl_8036F97C:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8036F9A0:
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmuls    f2, f2, f1
	lfs      f1, lbl_8051EAEC@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_8036F9E0
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8036FA04

lbl_8036F9E0:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8036FA04:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051EAF0@sda21(r2)
	lwz      r0, mgr__Q24Game9ItemHoney@sda21(r13)
	stfs     f0, 0x18(r1)
	lfs      f0, lbl_8051EADC@sda21(r2)
	cmplwi   r0, 0
	stfs     f1, 0x14(r1)
	stfs     f2, 0x1c(r1)
	lfs      f1, 0x18c(r31)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	bne      lbl_8036FA64
	lis      r3, lbl_804924F4@ha
	lis      r5, lbl_80492504@ha
	addi     r3, r3, lbl_804924F4@l
	li       r4, 0x1b5
	addi     r5, r5, lbl_80492504@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036FA64:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8036FABC
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 8
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8036FABC:
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
 * Address:	8036FAD4
 * Size:	000310
 */
void TamagoMushi::Obj::walkFunc(void)
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
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f2, lbl_8051EAF4@sda21(r2)
	lfs      f1, 0x1a4(r3)
	lfs      f0, lbl_8051EAF8@sda21(r2)
	fmuls    f1, f1, f2
	stfs     f1, 0x1a4(r3)
	lfs      f1, 0x1ac(r3)
	fmuls    f1, f1, f2
	stfs     f1, 0x1ac(r3)
	lwz      r3, 0xc0(r3)
	lfs      f2, 0x2fc(r31)
	lfs      f1, 0x928(r3)
	lfs      f3, 0x2c8(r31)
	fadds    f1, f2, f1
	lfs      f2, 0x2e4(r3)
	lfs      f5, 0x924(r3)
	lfs      f4, 0x2cc(r31)
	fmuls    f29, f3, f2
	lfs      f3, 0x2c4(r31)
	lfs      f2, 0x334(r3)
	fmuls    f27, f5, f4
	stfs     f1, 0x2fc(r31)
	fmuls    f28, f3, f2
	lfs      f1, 0x2fc(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8036FB7C
	fsubs    f0, f1, f0
	stfs     f0, 0x2fc(r31)

lbl_8036FB7C:
	lfs      f1, 0x2fc(r31)
	bl       sin
	lwz      r3, 0xc0(r31)
	frsp     f0, f1
	lbz      r0, 0x920(r3)
	fmuls    f2, f27, f0
	cmplwi   r0, 0
	beq      lbl_8036FBA0
	lfs      f2, lbl_8051EAC4@sda21(r2)

lbl_8036FBA0:
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051EB04@sda21(r2)
	fmuls    f2, f2, f1
	lfs      f3, lbl_8051EB00@sda21(r2)
	fadds    f1, f1, f0
	lfs      f4, lbl_8051EAFC@sda21(r2)
	lfs      f0, lbl_8051EAE0@sda21(r2)
	fmuls    f2, f3, f2
	stfs     f1, 0x2d0(r31)
	lfs      f1, 0x2d0(r31)
	fmuls    f30, f4, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8036FBD8
	stfs     f0, 0x2d0(r31)

lbl_8036FBD8:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x921(r3)
	cmplwi   r0, 0
	beq      lbl_8036FC90
	lfs      f1, 0x2d4(r31)
	lfs      f0, lbl_8051EAE0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2d4(r31)
	lfs      f1, 0x2d4(r31)
	lfs      f0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8036FC58
	lbz      r0, 0x2dc(r31)
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 0x2dc(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051EAD0@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, 0x92c(r3)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x2d8(r31)
	stfs     f0, 0x2d4(r31)

lbl_8036FC58:
	lbz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	beq      lbl_8036FC90
	lfs      f1, 0x2d4(r31)
	lfs      f0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8036FC90
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051EAE0@sda21(r2)
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x930(r3)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fmuls    f29, f29, f0

lbl_8036FC90:
	lfs      f1, 0x2ec(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	stfs     f1, 0x1fc(r31)
	lfs      f4, 0x1fc(r31)
	fadds    f3, f4, f30
	fcmpo    cr0, f3, f0
	bge      lbl_8036FCD8
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036FCFC

lbl_8036FCD8:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036FCFC:
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmuls    f31, f29, f2
	lfs      f1, 0x1d4(r31)
	lfs      f27, 0x1d8(r31)
	fcmpo    cr0, f3, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 8(r1)
	stfs     f27, 0xc(r1)
	stfs     f0, 0x10(r1)
	bge      lbl_8036FD28
	fneg     f3, f3

lbl_8036FD28:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fabs     f2, f30
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f0
	frsp     f0, f2
	fctiwz   f1, f1
	fcmpo    cr0, f0, f28
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f29, f29, f0
	stfs     f4, 0x2ec(r31)
	ble      lbl_8036FD80
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8036FD7C
	fmr      f30, f28
	b        lbl_8036FD80

lbl_8036FD7C:
	fneg     f30, f28

lbl_8036FD80:
	fmr      f1, f30
	bl       roundAng__Ff
	lfs      f0, 0x1fc(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	stfs     f31, 0x1d4(r31)
	stfs     f27, 0x1d8(r31)
	stfs     f29, 0x1dc(r31)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036FDE4
 * Size:	000168
 */
void TamagoMushi::Obj::setGoalRandom(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x35c(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, 0x198(r31)
	stw      r0, 8(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x2e0(r31)
	lfs      f1, lbl_8051EB08@sda21(r2)
	lfs      f0, 0x19c(r31)
	fdivs    f2, f3, f2
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2e8(r31)
	fmadds   f0, f1, f2, f1
	fmuls    f31, f31, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051EB0C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_8036FEBC
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036FEE0

lbl_8036FEBC:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036FEE0:
	lfs      f1, 0x2e0(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2e0(r31)
	bge      lbl_8036FEFC
	fneg     f3, f3

lbl_8036FEFC:
	lfs      f1, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2e8(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2e8(r31)
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8036FF4C
 * Size:	0000B8
 */
void setGoalDirect__Q34Game11TamagoMushi3ObjFR10Vector3f(void)
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
	mr       r31, r4
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x93c(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, 0x18c(r30)
	stw      r0, 8(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f1, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f2, f3
	stfs     f0, 0x2e0(r30)
	lfs      f2, lbl_8051EB08@sda21(r2)
	lfs      f0, 0x190(r30)
	fdivs    f3, f3, f1
	stfs     f0, 0x2e4(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x2e8(r30)
	lfs      f1, 0(r31)
	lfs      f0, 0x2e0(r30)
	fmadds   f2, f2, f3, f2
	fmuls    f31, f31, f2
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2e0(r30)
	lfs      f1, 8(r31)
	lfs      f0, 0x2e8(r30)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2e8(r30)
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

namespace Game {

/*
 * --INFO--
 * Address:	80370004
 * Size:	00015C
 */
void TamagoMushi::Obj::turnFunc(void)
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
	addi     r3, r1, 8
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	lfs      f2, 0x2c4(r31)
	lfs      f1, 0x334(r5)
	lfs      f0, 0x30c(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f2, f1
	fmuls    f30, f2, f0
	mtctr    r12
	bctrl
	lfs      f3, 0x2e0(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f2, 0x2e8(r31)
	lfs      f0, 0x10(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
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
	lfs      f0, lbl_8051EB00@sda21(r2)
	lfs      f1, lbl_8051EAFC@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803700EC
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_803700E8
	fmr      f29, f1
	b        lbl_803700EC

lbl_803700E8:
	fneg     f29, f1

lbl_803700EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051EB04@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80370130
	li       r3, 1
	b        lbl_80370134

lbl_80370130:
	li       r3, 0

lbl_80370134:
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
 * Address:	80370160
 * Size:	000034
 */
void TamagoMushi::Obj::isReachToGoal(float)
{
	/*
	fmuls    f0, f1, f1
	lfs      f2, 0x194(r3)
	lfs      f1, 0x2e8(r3)
	lfs      f3, 0x18c(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x2e0(r3)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370194
 * Size:	00002C
 */
void TamagoMushi::Obj::resetWalkParm(void)
{
	/*
	lfs      f0, lbl_8051EAC4@sda21(r2)
	li       r0, 0
	stfs     f0, 0x2d0(r3)
	stfs     f0, 0x2d4(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x92c(r4)
	stfs     f0, 0x2d8(r3)
	stb      r0, 0x2dc(r3)
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x2ec(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803701C0
 * Size:	000028
 */
void TamagoMushi::Obj::startCarcassMotion(void)
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
 * Address:	803701E8
 * Size:	000058
 */
void TamagoMushi::Obj::setLeader(Game::TamagoMushi::Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x2f4(r3)
	cmplw    r0, r4
	beq      lbl_8037022C
	stw      r4, 0x2f4(r31)
	lwz      r4, 0x2f4(r31)
	lbz      r0, 0x2f0(r4)
	cmplwi   r0, 0
	beq      lbl_80370220
	bl       setTypeBall__Q34Game11TamagoMushi3ObjFv

lbl_80370220:
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)

lbl_8037022C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370240
 * Size:	000054
 */
void TamagoMushi::Obj::setTypeBall(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 5
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x308(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x2f0(r31)
	stb      r0, 0x300(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370294
 * Size:	000344
 */
void TamagoMushi::Obj::appearPanic(void)
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
	stw      r29, 0x44(r1)
	mr       r31, r3
	lwz      r0, 0x2f4(r3)
	cmplwi   r0, 0
	beq      lbl_803702E4
	cmplw    r0, r31
	bne      lbl_8037059C

lbl_803702E4:
	lwz      r5, 0xc0(r31)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lfs      f0, 0x948(r5)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	fmuls    f28, f0, f0
	stw      r4, 0x2c(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_80370330
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8037057C

lbl_80370330:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8037039C

lbl_80370348:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8037057C
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_8037039C:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370348
	b        lbl_8037057C

lbl_803703BC:
	lwz      r3, 0x34(r1)
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
	beq      lbl_80370420
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370420
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80370420
	li       r30, 1

lbl_80370420:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803704C0
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f29, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lfs      f31, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f29
	lfs      f1, 0x14(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_803704C0
	lwz      r6, 0xc0(r31)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game16InteractAstonish@ha
	mr       r3, r29
	lfs      f0, 0x944(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game16InteractAstonish@l
	addi     r4, r1, 0x20
	stw      r5, 0x20(r1)
	stw      r31, 0x24(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803704C0:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_803704EC
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8037057C

lbl_803704EC:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80370560

lbl_8037050C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8037057C
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_80370560:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037050C

lbl_8037057C:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_803703BC

lbl_8037059C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803705D8
 * Size:	0003BC
 */
void TamagoMushi::Obj::isFound(void)
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
	lwz      r31, 0x2f4(r3)
	cmplwi   r31, 0
	beq      lbl_80370900
	cmplw    r31, r30
	beq      lbl_80370900
	lwz      r30, 0x2f4(r31)
	cmplwi   r30, 0
	beq      lbl_80370880
	cmplw    r30, r31
	beq      lbl_80370880
	lwz      r31, 0x2f4(r30)
	cmplwi   r31, 0
	beq      lbl_80370800
	cmplw    r31, r30
	beq      lbl_80370800
	lwz      r30, 0x2f4(r31)
	cmplwi   r30, 0
	beq      lbl_80370780
	cmplw    r30, r31
	beq      lbl_80370780
	lwz      r31, 0x2f4(r30)
	cmplwi   r31, 0
	beq      lbl_80370700
	cmplw    r31, r30
	beq      lbl_80370700
	lwz      r3, 0x2f4(r31)
	cmplwi   r3, 0
	beq      lbl_80370678
	cmplw    r3, r31
	beq      lbl_80370678
	bl       isFound__Q34Game11TamagoMushi3ObjFv
	b        lbl_80370974

lbl_80370678:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370698
	bl       isZukanMode__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370698
	li       r3, 1
	b        lbl_80370974

lbl_80370698:
	lwz      r3, 0xc0(r31)
	addi     r3, r3, 0x82c
	bl       "__cl__7Parm<f>Fv"
	lfs      f31, 0(r3)
	mr       r3, r31
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	fmr      f2, f31
	li       r5, 0
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_803706D0
	li       r3, 1
	b        lbl_80370974

lbl_803706D0:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803706F8
	li       r3, 1
	b        lbl_80370974

lbl_803706F8:
	li       r3, 0
	b        lbl_80370974

lbl_80370700:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370720
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80370720
	li       r3, 1
	b        lbl_80370974

lbl_80370720:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80370750
	li       r3, 1
	b        lbl_80370974

lbl_80370750:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_80370778
	li       r3, 1
	b        lbl_80370974

lbl_80370778:
	li       r3, 0
	b        lbl_80370974

lbl_80370780:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803707A0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803707A0
	li       r3, 1
	b        lbl_80370974

lbl_803707A0:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_803707D0
	li       r3, 1
	b        lbl_80370974

lbl_803707D0:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803707F8
	li       r3, 1
	b        lbl_80370974

lbl_803707F8:
	li       r3, 0
	b        lbl_80370974

lbl_80370800:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370820
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80370820
	li       r3, 1
	b        lbl_80370974

lbl_80370820:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80370850
	li       r3, 1
	b        lbl_80370974

lbl_80370850:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_80370878
	li       r3, 1
	b        lbl_80370974

lbl_80370878:
	li       r3, 0
	b        lbl_80370974

lbl_80370880:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803708A0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803708A0
	li       r3, 1
	b        lbl_80370974

lbl_803708A0:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_803708D0
	li       r3, 1
	b        lbl_80370974

lbl_803708D0:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803708F8
	li       r3, 1
	b        lbl_80370974

lbl_803708F8:
	li       r3, 0
	b        lbl_80370974

lbl_80370900:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370920
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80370920
	li       r3, 1
	b        lbl_80370974

lbl_80370920:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80370950
	li       r3, 1
	b        lbl_80370974

lbl_80370950:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_80370974:
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

} // namespace Game

/*
 * --INFO--
 * Address:	80370994
 * Size:	000008
 */
void Parm<float>::operator()()
{
	/*
	addi     r3, r3, 0x18
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8037099C
 * Size:	000014
 */
void GameSystem::isZukanMode(void)
{
	/*
	lwz      r0, 0x44(r3)
	subfic   r0, r0, 4
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	803709B0
 * Size:	000044
 */
void TamagoMushi::Obj::createFellow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0x2f4(r3)
	cmplwi   r0, 0
	beq      lbl_803709D4
	cmplw    r0, r4
	bne      lbl_803709E4

lbl_803709D4:
	lwz      r3, 0x180(r4)
	li       r5, 0xa
	li       r6, 0
	bl       createGroup__Q34Game11TamagoMushi3MgrFPQ34Game11TamagoMushi3Objib

lbl_803709E4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803709F4
 * Size:	00009C
 */
void TamagoMushi::Obj::ballMove(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051EADC@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, lbl_8051EAEC@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x1cc(r3)
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fmr      f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80370A34
	fmr      f4, f2

lbl_80370A34:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f3, lbl_8051EAB8@sda21(r2)
	addi     r4, r31, 0x2e0
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f0, 0x334(r5)
	fmuls    f1, f3, f1
	fmuls    f2, f2, f4
	fmuls    f3, f0, f4
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lfs
f0, 0x1a4(r31) lfs      f1, lbl_8051EB14@sda21(r2) fmuls    f0, f0, f1 stfs f0,
0x1a4(r31) lfs      f0, 0x1ac(r31) fmuls    f0, f0, f1 stfs     f0, 0x1ac(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370A90
 * Size:	0000A8
 */
void TamagoMushi::Obj::createHideEffect(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x34(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x174(r3)
	lwz      r3, 0x10(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx9TUjinkoHd@ha
	stw      r0, 0x18(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1d1
	li       r5, 0x1d2
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx9TUjinkoHd@l
	addi     r4, r1, 8
	stw      r3, 0x28(r1)
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	sth      r5, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370B38
 * Size:	0000A8
 */
void TamagoMushi::Obj::createAppearEffect(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x34(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x174(r3)
	lwz      r3, 0x10(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx9TTamagoAp@ha
	stw      r0, 0x18(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x23f
	li       r5, 0x240
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx9TTamagoAp@l
	addi     r4, r1, 8
	stw      r3, 0x28(r1)
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	sth      r5, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370BE0
 * Size:	000004
 */
void TamagoMushi::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80370BE4
 * Size:	000014
 */
void TamagoMushi::Obj::isLivingThing(void)
{
	/*
	lwz      r3, 0xc0(r3)
	lbz      r0, 0x922(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370BF8
 * Size:	000008
 */
void TamagoMushi::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051EB18@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370C00
 * Size:	000008
 */
u32 TamagoMushi::Obj::getEnemyTypeID(void) { return 0x44; }
} // namespace Game
