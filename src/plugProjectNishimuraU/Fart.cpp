#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Fart3Obj
    __vt__Q34Game4Fart3Obj:
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
        .4byte __dt__Q34Game4Fart3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Kogane3ObjFv .4byte
   doUpdateCommon__Q34Game4Fart3ObjFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Fart3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q34Game4Fart3ObjFv .4byte
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
        .4byte getEnemyTypeID__Q34Game4Fart3ObjFv
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
        .4byte createItem__Q34Game4Fart3ObjFv
        .4byte resetFartTimer__Q34Game4Fart3ObjFv
        .4byte startBodyEffect__Q34Game4Fart3ObjFv
        .4byte finishBodyEffect__Q34Game4Fart3ObjFv
        .4byte createFartEffect__Q34Game4Fart3ObjFv
        .4byte effectDrawOn__Q34Game4Fart3ObjFv
        .4byte effectDrawOff__Q34Game4Fart3ObjFv
        .4byte createPressSENormal__Q34Game6Kogane3ObjFv
        .4byte createPressSESpecial__Q34Game4Fart3ObjFv
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
    .global lbl_8051B708
    lbl_8051B708:
        .4byte 0x6B617261
        .4byte 0x64610000
    .global lbl_8051B710
    lbl_8051B710:
        .4byte 0x40200000
    .global lbl_8051B714
    lbl_8051B714:
        .4byte 0x46480000
    .global lbl_8051B718
    lbl_8051B718:
        .4byte 0x00000000
    .global lbl_8051B71C
    lbl_8051B71C:
        .4byte 0x43A2F983
    .global lbl_8051B720
    lbl_8051B720:
        .4byte 0xC3A2F983
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80285448
 * Size:	000098
 */
Fart::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80285484
	addi     r0, r31, 0x2f0
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	stw      r0, 0x2f8(r31)

lbl_80285484:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game6Kogane3ObjFv
	lis      r3, __vt__Q34Game4Fart3Obj@ha
	addi     r0, r31, 0x2f0
	addi     r5, r3, __vt__Q34Game4Fart3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x320
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       createEffect__Q34Game4Fart3ObjFv
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
 * Address:	802854E0
 * Size:	000070
 */
void Fart::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       interactFartGasAttack__Q34Game4Fart3ObjFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	blt      lbl_8028553C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5162
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8028553C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80285550
 * Size:	0001F0
 */
void Fart::Obj::changeMaterial()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lwz      r3, 0x180(r3)
	lwz      r4, 0x174(r27)
	lwz      r12, 0(r3)
	lwz      r29, 8(r4)
	lwz      r12, 0xe0(r12)
	lwz      r30, 4(r29)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, 0x64(r30)
	addi     r4, r2, lbl_8051B708@sda21
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r5, 0x60(r30)
	rlwinm   r4, r3, 2, 0xe, 0x1d
	li       r3, 0xf
	li       r0, 0xff
	lwzx     r6, r5, r4
	addi     r5, r1, 8
	li       r4, 0
	stb      r3, 8(r1)
	stb      r3, 9(r1)
	stb      r3, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r3, 0x2c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x174(r27)
	lis      r3, j3dSys@ha
	lbz      r0, 0(r31)
	addi     r27, r3, j3dSys@l
	lwz      r3, 8(r4)
	li       r28, 0
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r31)
	stb      r0, 1(r3)
	lhz      r0, 2(r31)
	sth      r0, 2(r3)
	lhz      r0, 4(r31)
	sth      r0, 4(r3)
	lbz      r0, 6(r31)
	stb      r0, 6(r3)
	lbz      r0, 7(r31)
	stb      r0, 7(r3)
	lbz      r0, 8(r31)
	stb      r0, 8(r3)
	lbz      r0, 9(r31)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r31)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r31)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r31)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r31)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r31)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r31)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r31)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r31)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r31)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r31)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r31)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r31)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r31)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r31)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0x1c(r3)
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0xc(r3)
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	b        lbl_8028571C

lbl_802856E4:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r27)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8028571C:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_802856E4
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80285740
 * Size:	000020
 */
void Fart::Obj::doDebugDraw(Graphics&)
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
 * Address:	80285760
 * Size:	0001F4
 */
void Fart::Obj::interactFartGasAttack()
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
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r3
	lfs      f0, lbl_8051B710@sda21(r2)
	lfs      f1, 0x2dc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80285924
	lwz      r5, sys@sda21(r13)
	addi     r3, r1, 0x30
	addi     r4, r1, 0x20
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2dc(r30)
	lwz      r5, 0xc0(r30)
	lfs      f2, 0x2e4(r30)
	lfs      f1, 0x5b4(r5)
	lfs      f0, 0x2e0(r30)
	fadds    f31, f2, f1
	stfs     f0, 0x20(r1)
	fsubs    f30, f2, f1
	fmuls    f29, f1, f1
	lfs      f0, 0x2e4(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x2e8(r30)
	stfs     f0, 0x28(r1)
	stfs     f1, 0x2c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x50
	stb      r0, 0x4c(r1)
	addi     r4, r1, 0x30
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x50
	bl       first__Q24Game12CellIteratorFv
	b        lbl_80285908

lbl_80285810:
	addi     r3, r1, 0x50
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285900
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8028586C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285900

lbl_8028586C:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f0, f31
	lfs      f3, 0x10(r1)
	bge      lbl_80285900
	fcmpo    cr0, f0, f30
	ble      lbl_80285900
	lfs      f0, 0x2e8(r30)
	lfs      f1, 0x2e0(r30)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80285900
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game11InteractGas@ha
	mr       r3, r31
	lfs      f0, 0x604(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game11InteractGas@l
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80285900:
	addi     r3, r1, 0x50
	bl       next__Q24Game12CellIteratorFv

lbl_80285908:
	addi     r3, r1, 0x50
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285810
	addi     r4, r30, 0x2e0
	li       r3, 0x5164
	bl       PSStartSoundVec__FUlP3Vec

lbl_80285924:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80285954
 * Size:	000120
 */
void Fart::Obj::createItem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       createTreasureItem__Q34Game6Kogane3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80285A5C
	lwz      r0, 0x2c0(r30)
	li       r31, 1
	li       r4, 0
	li       r5, 0
	cmpwi    r0, 1
	beq      lbl_802859BC
	bge      lbl_802859A0
	cmpwi    r0, 0
	bge      lbl_802859AC
	b        lbl_80285A30

lbl_802859A0:
	cmpwi    r0, 3
	bge      lbl_80285A30
	b        lbl_802859F4

lbl_802859AC:
	li       r31, 0
	li       r4, 0
	li       r5, 3
	b        lbl_80285A30

lbl_802859BC:
	lwz      r3, playData__4Game@sda21(r13)
	li       r31, 0
	cmplwi   r3, 0
	beq      lbl_802859E8
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802859E8
	li       r4, 2
	li       r5, 1
	b        lbl_80285A30

lbl_802859E8:
	li       r4, 0
	li       r5, 3
	b        lbl_80285A30

lbl_802859F4:
	lwz      r3, playData__4Game@sda21(r13)
	li       r31, 0
	cmplwi   r3, 0
	beq      lbl_80285A20
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285A20
	li       r4, 2
	li       r5, 1
	b        lbl_80285A28

lbl_80285A20:
	li       r4, 0
	li       r5, 3

lbl_80285A28:
	lfs      f0, lbl_8051B714@sda21(r2)
	stfs     f0, 0x2c4(r30)

lbl_80285A30:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80285A44
	mr       r3, r30
	bl       createPellet__Q34Game6Kogane3ObjFii
	b        lbl_80285A50

lbl_80285A44:
	mr       r3, r30
	clrlwi   r4, r4, 0x18
	bl       createDoping__Q34Game6Kogane3ObjFUci

lbl_80285A50:
	lwz      r3, 0x2c0(r30)
	addi     r0, r3, 1
	stw      r0, 0x2c0(r30)

lbl_80285A5C:
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
 * Address:	80285A74
 * Size:	0000B8
 */
void Fart::Obj::createEffect()
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
	beq      lbl_80285B0C
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
	lis      r4, __vt__Q23efx14TBabaFly_ver01@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TBabaFly_ver01@l
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
	sth      r9, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80285B0C:
	stw      r3, 0x2ec(r31)
	lfs      f0, lbl_8051B710@sda21(r2)
	stfs     f0, 0x2dc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80285B2C
 * Size:	000024
 */
void Fart::Obj::resetFartTimer()
{
	/*
	lfs      f0, lbl_8051B710@sda21(r2)
	stfs     f0, 0x2dc(r3)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0x2e0(r3)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x2e4(r3)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x2e8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80285B50
 * Size:	0000A8
 */
void Fart::Obj::startBodyEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	addi     r4, r1, 0x14
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r8, 0xc0(r3)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r7, 0x18c(r31)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lwz      r6, 0x190(r31)
	lwz      r3, 0x194(r31)
	lfs      f3, 0x934(r8)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r3, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x14(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x14(r1)
	stfs     f3, 0x24(r1)
	lwz      r3, 0x2ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x300(r12)
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
 * Address:	80285BF8
 * Size:	000030
 */
void Fart::Obj::finishBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2ec(r3)
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
 * Address:	80285C28
 * Size:	000204
 */
void Fart::Obj::createFartEffect()
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
	stw      r31, 0x5c(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx7TBabaHe@ha
	li       r6, 1
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx7TBabaHe@l
	li       r4, 2
	mr       r31, r3
	sth      r6, 0x18(r1)
	sth      r4, 0x1a(r1)
	stw      r5, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lfs      f30, 0x18c(r3)
	lwz      r12, 0x64(r12)
	lfs      f31, 0x190(r3)
	lfs      f29, 0x194(r3)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx7ArgRotY@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	stfs     f30, 0x28(r1)
	addi     r0, r3, __vt__Q23efx7ArgRotY@l
	addi     r3, r1, 0x14
	stw      r4, 0x24(r1)
	addi     r4, r1, 0x24
	stfs     f31, 0x2c(r1)
	stfs     f29, 0x30(r1)
	stw      r0, 0x24(r1)
	stfs     f1, 0x34(r1)
	bl       create__Q23efx7TBabaHeFPQ23efx3Arg
	lfs      f2, lbl_8051B718@sda21(r2)
	stfs     f2, 0x2dc(r31)
	lwz      r3, 0xc0(r31)
	lfs      f4, 0x1fc(r31)
	lfs      f1, 0x934(r3)
	lfs      f0, 0x564(r3)
	fmr      f3, f4
	fcmpo    cr0, f4, f2
	fmuls    f29, f1, f0
	bge      lbl_80285D10
	fneg     f3, f4

lbl_80285D10:
	lfs      f2, lbl_8051B71C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B718@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f29, f0
	bge      lbl_80285D6C
	lfs      f0, lbl_8051B720@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_80285D84

lbl_80285D6C:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_80285D84:
	mr       r4, r31
	addi     r3, r1, 8
	bl       getBodyJointPos__Q34Game6Kogane3ObjFv
	lfs      f2, 8(r1)
	fmuls    f1, f29, f30
	lfs      f0, lbl_8051B718@sda21(r2)
	mr       r3, r31
	stfs     f2, 0x2e0(r31)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x2e4(r31)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x2e8(r31)
	lfs      f2, 0x2e0(r31)
	fsubs    f1, f2, f1
	stfs     f1, 0x2e0(r31)
	lfs      f1, 0x2e4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fsubs    f0, f0, f31
	stfs     f0, 0x2e8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5960
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80285E2C
 * Size:	000030
 */
void Fart::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2ec(r3)
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
 * Address:	80285E5C
 * Size:	000030
 */
void Fart::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2ec(r3)
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
 * Address:	80285E8C
 * Size:	000044
 */
void Fart::Obj::createPressSESpecial()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5961
	li       r5, 0
	lwz      r12, 0xc(r12)
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
 * Address:	80285ED0
 * Size:	000008
 */
u32 Fart::Obj::getEnemyTypeID() { return 0xB; }
} // namespace Game
