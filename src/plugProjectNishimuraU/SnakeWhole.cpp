#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048BB38
    lbl_8048BB38:
        .4byte 0x3234362D
        .4byte 0x536E616B
        .4byte 0x6557686F
        .4byte 0x6C650000
    .global lbl_8048BB48
    lbl_8048BB48:
        .4byte 0x6B757469
        .4byte 0x6A6E7431
        .4byte 0x00000000
        .4byte 0x6B616D75
        .4byte 0x6A6E7431
        .4byte 0x00000000
        .4byte 0x6B616D75
        .4byte 0x6A6E7432
        .4byte 0x00000000
        .4byte 0x6B616D75
        .4byte 0x6A6E7433
        .4byte 0x00000000
    lbl_8048BB78:
        .4byte 0x42700000
        .4byte 0x43160000
        .4byte 0x435C0000
        .4byte 0x42F00000
        .4byte 0x42F00000
    .global lbl_8048BB8C
    lbl_8048BB8C:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x42A00000
        .4byte 0xC2A00000
        .4byte 0x42F00000
        .4byte 0x43340000
        .4byte 0x43820000
        .4byte 0x43200000
        .4byte 0x43200000
        .4byte 0x00000000
        .4byte 0x42F00000
        .4byte 0x43340000
        .4byte 0x42A00000
        .4byte 0x42A00000
        .4byte 0x41F00000
        .4byte 0x41F00000
        .4byte 0x41F00000
        .4byte 0x42DC0000
        .4byte 0xC2480000
        .4byte 0xC1F00000
        .4byte 0xC1F00000
        .4byte 0xC1F00000
        .4byte 0x42480000
        .4byte 0xC2DC0000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0x42F00000
        .4byte 0x43340000
        .4byte 0x43820000
        .4byte 0x43200000
        .4byte 0x43200000
        .4byte 0x00000000
        .4byte 0x42F00000
        .4byte 0x43340000
        .4byte 0x42A00000
        .4byte 0x42A00000
        .4byte 0x41F00000
        .4byte 0x41F00000
        .4byte 0x41F00000
        .4byte 0x42DC0000
        .4byte 0xC2480000
        .4byte 0xC1F00000
        .4byte 0xC1F00000
        .4byte 0xC1F00000
        .4byte 0x42480000
        .4byte 0xC2DC0000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0x42200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0xC2200000
        .4byte 0xC2200000
    .global lbl_8048BC90
    lbl_8048BC90:
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F4F
        .4byte 0x626A536F
        .4byte 0x756E642E
        .4byte 0x68000000
    .global lbl_8048BCA8
    lbl_8048BCA8:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8048BCB4
    lbl_8048BCB4:
        .asciz "foot_joint1"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx15TCphebiDeadHane
    __vt__Q23efx15TCphebiDeadHane:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx11TCphebiDead
    __vt__Q23efx11TCphebiDead:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .global __vt__Q34Game10SnakeWhole3Obj
    __vt__Q34Game10SnakeWhole3Obj:
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
        .4byte onInit__Q34Game10SnakeWhole3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game10SnakeWhole3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game10SnakeWhole3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game10SnakeWhole3ObjFv
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
        .4byte isUnderground__Q34Game10SnakeWhole3ObjFv
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
        .4byte getShadowParam__Q34Game10SnakeWhole3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game10SnakeWhole3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10SnakeWhole3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10SnakeWhole3ObjFv
        .4byte doUpdateCommon__Q34Game10SnakeWhole3ObjFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q34Game10SnakeWhole3ObjFv
        .4byte doAnimationCullingOff__Q34Game10SnakeWhole3ObjFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10SnakeWhole3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q24Game9EnemyBaseFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q34Game10SnakeWhole3ObjFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game10SnakeWhole3ObjFv
        .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
        .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q34Game10SnakeWhole3ObjFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game10SnakeWhole3ObjFv
        .4byte getMouthSlots__Q34Game10SnakeWhole3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q34Game10SnakeWhole3ObjFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q34Game10SnakeWhole3ObjFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game10SnakeWhole3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game10SnakeWhole3ObjFv .4byte
   doFinishStoneState__Q34Game10SnakeWhole3ObjFv .4byte
   getDamageCoeStoneState__Q34Game10SnakeWhole3ObjFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10SnakeWhole3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10SnakeWhole3ObjFv .4byte
   doStartMovie__Q34Game10SnakeWhole3ObjFv .4byte
   doEndMovie__Q34Game10SnakeWhole3ObjFv .4byte
   setFSM__Q34Game10SnakeWhole3ObjFPQ34Game10SnakeWhole3FSM .4byte 0 .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@816@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@816@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@816@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@816@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@816@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@816@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C868
    lbl_8051C868:
        .4byte 0x00000000
    .global lbl_8051C86C
    lbl_8051C86C:
        .4byte 0x40200000
    .global lbl_8051C870
    lbl_8051C870:
        .float 1.0
    .global lbl_8051C874
    lbl_8051C874:
        .4byte 0x42480000
    .global lbl_8051C878
    lbl_8051C878:
        .4byte 0x41A00000
    .global lbl_8051C87C
    lbl_8051C87C:
        .4byte 0x41B40000
    .global lbl_8051C880
    lbl_8051C880:
        .float 0.1
    .global lbl_8051C884
    lbl_8051C884:
        .4byte 0x41200000
    .global lbl_8051C888
    lbl_8051C888:
        .4byte 0xC47A0000
    .global lbl_8051C88C
    lbl_8051C88C:
        .4byte 0x41700000
    .global lbl_8051C890
    lbl_8051C890:
        .4byte 0x3FC90FDB
    .global lbl_8051C894
    lbl_8051C894:
        .4byte 0x41B00000
    .global lbl_8051C898
    lbl_8051C898:
        .4byte 0x3F060A92
    .global lbl_8051C89C
    lbl_8051C89C:
        .4byte 0x3F3BBBBC
    .global lbl_8051C8A0
    lbl_8051C8A0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051C8A8
    lbl_8051C8A8:
        .4byte 0x40C90FDB
    .global lbl_8051C8AC
    lbl_8051C8AC:
        .float 0.5
    .global lbl_8051C8B0
    lbl_8051C8B0:
        .4byte 0x47000000
    .global lbl_8051C8B4
    lbl_8051C8B4:
        .4byte 0x43A2F983
    .global lbl_8051C8B8
    lbl_8051C8B8:
        .4byte 0xC3A2F983
    .global lbl_8051C8BC
    lbl_8051C8BC:
        .4byte 0x42F00000
    .global lbl_8051C8C0
    lbl_8051C8C0:
        .4byte 0x40490FDB
    .global lbl_8051C8C4
    lbl_8051C8C4:
        .4byte 0x47FA0000
    .global lbl_8051C8C8
    lbl_8051C8C8:
        .4byte 0xC7FA0000
    .global lbl_8051C8CC
    lbl_8051C8CC:
        .4byte 0x43340000
    .global lbl_8051C8D0
    lbl_8051C8D0:
        .float 0.25
    .global lbl_8051C8D4
    lbl_8051C8D4:
        .4byte 0x3F666666
*/

namespace Game {

/*
 * --INFO--
 * Address:	802CE798
 * Size:	00016C
 */
SnakeWhole::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802CE7D8
	addi     r0, r31, 0x330
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x330(r31)
	stw      r0, 0x334(r31)
	stw      r0, 0x338(r31)

lbl_802CE7D8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game10SnakeWhole3Obj@ha
	addi     r0, r31, 0x330
	addi     r5, r3, __vt__Q34Game10SnakeWhole3Obj@l
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
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r3, r31, 0x2e8
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 5
	bl       __construct_array
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802CE888
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game10SnakeWhole14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game10SnakeWhole14ProperAnimator@l
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

lbl_802CE888:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802CE8BC
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10SnakeWhole3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10SnakeWhole3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802CE8BC:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createJointCallBack__Q34Game10SnakeWhole3ObjFv
	mr       r3, r31
	bl       createShadowSystem__Q34Game10SnakeWhole3ObjFv
	mr       r3, r31
	bl       createEffect__Q34Game10SnakeWhole3ObjFv
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
 * Address:	802CE904
 * Size:	000004
 */
void SnakeWhole::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802CE908
 * Size:	0000CC
 */
void SnakeWhole::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	li       r0, 1
	li       r4, 0
	stb      r0, 0x2c0(r31)
	li       r0, -1
	lfs      f0, lbl_8051C868@sda21(r2)
	mr       r3, r31
	stb      r4, 0x2c1(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2cc(r31)
	stw      r0, 0x2e4(r31)
	stfs     f0, 0x2c8(r31)
	bl       setupJointCallBack__Q34Game10SnakeWhole3ObjFv
	mr       r3, r31
	bl       setupCollision__Q34Game10SnakeWhole3ObjFv
	mr       r3, r31
	bl       setupShadowSystem__Q34Game10SnakeWhole3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game10SnakeWhole3ObjFv
	li       r3, 1
	li       r0, 0
	stb      r3, 0x2c2(r31)
	mr       r3, r31
	stb      r0, 0x2c3(r31)
	bl       resetBossAppearBGM__Q34Game10SnakeWhole3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
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
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CE9D4
 * Size:	000050
 */
void SnakeWhole::Obj::doUpdate()
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
	mr       r3, r31
	bl       updateConstraint__Q34Game10SnakeWhole3ObjFv
	addi     r3, r31, 0x2d0
	bl       update__10MouthSlotsFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEA24
 * Size:	000034
 */
void SnakeWhole::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       updateBossBGM__Q34Game10SnakeWhole3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEA58
 * Size:	000034
 */
void SnakeWhole::Obj::doAnimationUpdateAnimator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       doAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEA8C
 * Size:	00003C
 */
void SnakeWhole::Obj::doAnimationCullingOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doAnimationCullingOff__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       doAnimationShadowSystem__Q34Game10SnakeWhole3ObjFv
	mr       r3, r31
	bl       finishAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEAC8
 * Size:	000004
 */
void SnakeWhole::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802CEACC
 * Size:	000020
 */
void SnakeWhole::Obj::doDebugDraw(Graphics&)
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
 * Address:	802CEAEC
 * Size:	00004C
 */
void SnakeWhole::Obj::setFSM(Game::SnakeWhole::FSM*)
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
 * Address:	802CEB38
 * Size:	0000B0
 */
void SnakeWhole::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048BB48@ha
	addi     r0, r3, lbl_8048BB48@l
	lwz      r3, 0x174(r30)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051C86C@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051C868@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f0, lbl_8051C870@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802CEBC0
	lfs      f0, lbl_8051C874@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802CEBC8

lbl_802CEBC0:
	lfs      f0, lbl_8051C878@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802CEBC8:
	lfs      f0, lbl_8051C87C@sda21(r2)
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
 * Address:	802CEBE8
 * Size:	000098
 */
void SnakeWhole::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	cmplwi   r4, 0
	mr       r30, r3
	mr       r31, r5
	beq      lbl_802CEC5C
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CEC5C
	cmplwi   r31, 0
	bne      lbl_802CEC44
	lfs      f0, lbl_8051C880@sda21(r2)
	fmuls    f31, f31, f0

lbl_802CEC44:
	fmr      f1, f31
	lfs      f2, lbl_8051C870@sda21(r2)
	mr       r3, r30
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802CEC60

lbl_802CEC5C:
	li       r3, 0

lbl_802CEC60:
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

/*
 * --INFO--
 * Address:	802CEC80
 * Size:	000020
 */
void SnakeWhole::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CECA0
 * Size:	000048
 */
void SnakeWhole::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051C870@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051C884@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051C868@sda21(r2)
	lfs      f4, lbl_8051C888@sda21(r2)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CECE8
 * Size:	000028
 */
void SnakeWhole::Obj::startCarcassMotion()
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
 * Address:	802CED10
 * Size:	000020
 */
void SnakeWhole::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game10SnakeWhole3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CED30
 * Size:	000020
 */
void SnakeWhole::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game10SnakeWhole3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CED50
 * Size:	0000BC
 */
void SnakeWhole::Obj::initMouthSlots()
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
	lis      r3, lbl_8048BB38@ha
	addi     r31, r3, lbl_8048BB38@l
	li       r4, 3
	addi     r3, r30, 0x2d0
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d0
	addi     r6, r31, 0x1c
	li       r4, 0
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d0
	addi     r6, r31, 0x28
	li       r4, 1
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d0
	addi     r6, r31, 0x34
	li       r4, 2
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051C88C@sda21(r2)
	li       r31, 0
	b        lbl_802CEDE0

lbl_802CEDCC:
	mr       r4, r31
	addi     r3, r30, 0x2d0
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_802CEDE0:
	lwz      r0, 0x2d0(r30)
	cmpw     r31, r0
	blt      lbl_802CEDCC
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

/*
 * --INFO--
 * Address:	802CEE0C
 * Size:	000058
 */
void SnakeWhole::Obj::getThrowupItemPosition(Vector3f*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8048BB48@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_8048BB48@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEE64
 * Size:	00003C
 */
void SnakeWhole::Obj::isOutTerritory()
{
	/*
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x198(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	lfs      f0, 0x35c(r4)
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEEA0
 * Size:	00003C
 */
void SnakeWhole::Obj::isInHomeRange()
{
	/*
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x198(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	lfs      f0, 0x384(r4)
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CEEDC
 * Size:	0002AC
 */
void SnakeWhole::Obj::setJumpMove(Vector3f&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r31, r4
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
	lfs      f1, 0(r31)
	lfs      f0, 8(r31)
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
	lfs      f0, lbl_8051C868@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802CEF88
	fmr      f0, f1
	b        lbl_802CEF8C

lbl_802CEF88:
	fneg     f0, f1

lbl_802CEF8C:
	lfs      f4, lbl_8051C890@sda21(r2)
	fcmpo    cr0, f0, f4
	ble      lbl_802CEFF0
	lfs      f0, lbl_8051C868@sda21(r2)
	fcmpu    cr0, f0, f1
	bne      lbl_802CEFAC
	li       r0, 0
	b        lbl_802CEFC0

lbl_802CEFAC:
	fcmpo    cr0, f1, f0
	ble      lbl_802CEFBC
	li       r0, 1
	b        lbl_802CEFC0

lbl_802CEFBC:
	li       r0, -1

lbl_802CEFC0:
	xoris    r3, r0, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_8051C8A0@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f0, lbl_8051C894@sda21(r2)
	lfd      f2, 0x30(r1)
	fsubs    f2, f2, f3
	fmuls    f2, f4, f2
	fdivs    f0, f2, f0
	stfs     f0, 0x2c8(r30)
	b        lbl_802CEFFC

lbl_802CEFF0:
	lfs      f0, lbl_8051C894@sda21(r2)
	fdivs    f0, f1, f0
	stfs     f0, 0x2c8(r30)

lbl_802CEFFC:
	fabs     f1, f1
	lfs      f0, lbl_8051C898@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802CF130
	lfs      f2, 0(r31)
	lfs      f0, 0x18c(r30)
	lfs      f1, lbl_8051C868@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f3, 8(r31)
	lfs      f0, 0x194(r30)
	fmuls    f4, f1, f1
	fsubs    f3, f3, f0
	stfs     f2, 0x20(r1)
	fmuls    f0, f2, f2
	stfs     f1, 0x24(r1)
	fmuls    f5, f3, f3
	fadds    f0, f0, f4
	stfs     f3, 0x28(r1)
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802CF074
	fmadds   f0, f2, f2, f4
	fadds    f4, f5, f0
	fcmpo    cr0, f4, f1
	ble      lbl_802CF078
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_802CF078

lbl_802CF074:
	fmr      f4, f1

lbl_802CF078:
	lfs      f0, lbl_8051C868@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_802CF0B4
	lfs      f0, lbl_8051C870@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	b        lbl_802CF0B8

lbl_802CF0B4:
	fmr      f4, f0

lbl_802CF0B8:
	lwz      r3, 0xc0(r30)
	fmr      f1, f4
	lfs      f0, 0x2e4(r3)
	fcmpo    cr0, f4, f0
	ble      lbl_802CF0D0
	fmr      f1, f0

lbl_802CF0D0:
	lfs      f0, lbl_8051C89C@sda21(r2)
	mr       r3, r30
	lfs      f2, 0x20(r1)
	addi     r4, r1, 0x20
	fmuls    f3, f0, f1
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x20(r1)
	stfs     f0, 0x1d4(r30)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x1d8(r30)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x1dc(r30)
	b        lbl_802CF168

lbl_802CF130:
	lwz      r12, 0(r30)
	lis      r4, "zero__10Vector3<f>"@ha
	mr       r3, r30
	lwz      r12, 0x68(r12)
	addi     r4, r4, "zero__10Vector3<f>"@l
	mtctr    r12
	bctrl
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0x1d4(r30)
	lfs      f0, 4(r3)
	stfs     f0, 0x1d8(r30)
	lfs      f0, 8(r3)
	stfs     f0, 0x1dc(r30)

lbl_802CF168:
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
 * Address:	802CF188
 * Size:	000078
 */
void SnakeWhole::Obj::updateFace()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x2c8(r31)
	lfs      f0, lbl_8051C868@sda21(r2)
	fadds    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_802CF1CC
	lfs      f0, lbl_8051C8A8@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_802CF1E0

lbl_802CF1CC:
	lfs      f0, lbl_8051C8A8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802CF1E0
	fsubs    f1, f1, f0

lbl_802CF1E0:
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CF200
 * Size:	000080
 */
void SnakeWhole::Obj::updateConstraint()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	blt      lbl_802CF264
	lbz      r0, 0x2c1(r31)
	cmplwi   r0, 0
	bne      lbl_802CF264
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_802CF264
	lfs      f1, 0xd0(r31)
	lfs      f0, lbl_8051C8AC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802CF258
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	b        lbl_802CF26C

lbl_802CF258:
	mr       r3, r31
	bl       constraintOff__Q24Game9EnemyBaseFv
	b        lbl_802CF26C

lbl_802CF264:
	mr       r3, r31
	bl       constraintOff__Q24Game9EnemyBaseFv

lbl_802CF26C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CF280
 * Size:	000530
 */
void SnakeWhole::Obj::appearNearByTarget(Game::Creature*)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	lfd      f3, lbl_8051C8A0@sda21(r2)
	stw      r0, 0x78(r1)
	lfs      f2, lbl_8051C8A8@sda21(r2)
	lfd      f0, 0x78(r1)
	lfs      f1, lbl_8051C8B0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f3, f2, f1
	fmr      f28, f3
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802CF320
	fneg     f1, f3

lbl_802CF320:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r31, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	fneg     f5, f0
	bge      lbl_802CF37C
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802CF394

lbl_802CF37C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802CF394:
	fneg     f3, f0
	lfs      f2, lbl_8051C868@sda21(r2)
	lfs      f1, lbl_8051C8BC@sda21(r2)
	frsp     f0, f5
	stfs     f2, 0x18(r1)
	frsp     f4, f3
	fmuls    f2, f2, f1
	stfs     f3, 0x14(r1)
	fmuls    f3, f0, f1
	fmuls    f4, f4, f1
	stfs     f5, 0x1c(r1)
	fadds    f1, f2, f30
	stfs     f2, 0x18(r1)
	fadds    f0, f3, f29
	fadds    f2, f4, f31
	stfs     f4, 0x14(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lfs      f3, 0x1a0(r30)
	lfs      f4, 0x198(r30)
	fsubs    f1, f3, f0
	lwz      r3, 0xc0(r30)
	fsubs    f2, f4, f2
	lfs      f0, 0x35c(r3)
	fmuls    f1, f1, f1
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802CF540
	fsubs    f1, f31, f4
	lis      r3, atanTable___5JMath@ha
	fsubs    f2, f29, f3
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f28, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f1, lbl_8051C8A0@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f3, lbl_8051C8C0@sda21(r2)
	lfd      f0, 0x90(r1)
	lfs      f2, lbl_8051C8B0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_8051C890@sda21(r2)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f2, f3, f2
	fsubs    f1, f2, f1
	fadds    f28, f28, f1
	fmr      f1, f28
	fcmpo    cr0, f28, f0
	bge      lbl_802CF478
	fneg     f1, f28

lbl_802CF478:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f1, f1, f2
	fcmpo    cr0, f28, f0
	fctiwz   f0, f1
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	fneg     f5, f0
	bge      lbl_802CF4D0
	lfs      f0, lbl_8051C8B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802CF4F0

lbl_802CF4D0:
	fmuls    f0, f28, f2
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802CF4F0:
	fneg     f3, f0
	lfs      f2, lbl_8051C868@sda21(r2)
	lfs      f1, lbl_8051C8BC@sda21(r2)
	frsp     f0, f5
	stfs     f2, 0x18(r1)
	frsp     f4, f3
	fmuls    f2, f2, f1
	stfs     f3, 0x14(r1)
	fmuls    f3, f0, f1
	fmuls    f4, f4, f1
	stfs     f5, 0x1c(r1)
	fadds    f1, f2, f30
	stfs     f2, 0x18(r1)
	fadds    f0, f3, f29
	fadds    f2, f4, f31
	stfs     f4, 0x14(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_802CF540:
	li       r0, 1
	li       r5, 0
	lfs      f4, lbl_8051C868@sda21(r2)
	addi     r4, r1, 0x4c
	stb      r0, 0x58(r1)
	lfs      f6, lbl_8051C8C4@sda21(r2)
	lfs      f5, lbl_8051C8C8@sda21(r2)
	lfs      f3, lbl_8051C870@sda21(r2)
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stw      r5, 0x60(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f6, 0x64(r1)
	stfs     f5, 0x68(r1)
	stw      r5, 0x5c(r1)
	stfs     f4, 0x6c(r1)
	stfs     f3, 0x70(r1)
	stfs     f4, 0x74(r1)
	stb      r5, 0x59(r1)
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stb      r5, 0x58(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r1)
	cmplwi   r0, 0
	beq      lbl_802CF5C8
	lfs      f0, 0x64(r1)
	stfs     f0, 0x18(r1)
	b        lbl_802CF754

lbl_802CF5C8:
	lfs      f1, 0x198(r30)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1a0(r30)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f29, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f2, f1
	lfs      f0, lbl_8051C868@sda21(r2)
	fmr      f28, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802CF5FC
	fneg     f2, f2

lbl_802CF5FC:
	lfs      f3, lbl_8051C8B4@sda21(r2)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	fneg     f5, f0
	bge      lbl_802CF654
	lfs      f0, lbl_8051C8B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802CF674

lbl_802CF654:
	fmuls    f0, f1, f3
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802CF674:
	fneg     f4, f0
	lfs      f8, lbl_8051C868@sda21(r2)
	li       r5, 0
	lfs      f1, lbl_8051C8BC@sda21(r2)
	frsp     f0, f5
	li       r0, 1
	frsp     f3, f4
	stb      r0, 0x2c(r1)
	fmuls    f7, f8, f1
	lfs      f2, lbl_8051C8C4@sda21(r2)
	fmuls    f6, f0, f1
	stfs     f8, 0x18(r1)
	fmuls    f0, f3, f1
	stfs     f4, 0x14(r1)
	fadds    f4, f7, f30
	lfs      f1, lbl_8051C8C8@sda21(r2)
	stfs     f5, 0x1c(r1)
	fadds    f3, f6, f29
	fadds    f5, f0, f31
	stfs     f0, 0x14(r1)
	lfs      f0, lbl_8051C870@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f7, 0x18(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f6, 0x1c(r1)
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stw      r5, 0x34(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stw      r5, 0x30(r1)
	stfs     f8, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f8, 0x48(r1)
	stb      r5, 0x2d(r1)
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	stb      r5, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	beq      lbl_802CF73C
	lfs      f0, 0x38(r1)
	stfs     f0, 0x18(r1)
	b        lbl_802CF754

lbl_802CF73C:
	lfs      f0, 0x198(r30)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x19c(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x1a0(r30)
	stfs     f0, 0x1c(r1)

lbl_802CF754:
	mr       r3, r30
	addi     r4, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	stfs     f28, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CF7B0
 * Size:	00020C
 */
void SnakeWhole::Obj::setAttackPosition()
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
	stmw     r27, 0x4c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051C868@sda21(r2)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802CF7F4
	fneg     f1, f3

lbl_802CF7F4:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_802CF84C
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_802CF864

lbl_802CF84C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_802CF864:
	lis      r4, lbl_8048BB78@ha
	lwzu     r12, lbl_8048BB78@l(r4)
	lis      r3, lbl_8048BB8C@ha
	fneg     f29, f31
	addi     r7, r3, lbl_8048BB8C@l
	lwz      r11, 4(r4)
	lwz      r10, 8(r4)
	mr       r28, r31
	lwz      r9, 0xc(r4)
	lwz      r8, 0x10(r4)
	addi     r30, r1, 0x1c
	lwz      r6, 0(r7)
	addi     r29, r1, 8
	lwz      r5, 4(r7)
	li       r27, 0
	lwz      r4, 8(r7)
	lwz      r3, 0xc(r7)
	lwz      r0, 0x10(r7)
	stw      r12, 0x1c(r1)
	stw      r11, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r9, 0x28(r1)
	stw      r8, 0x2c(r1)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)

lbl_802CF8D4:
	lfs      f0, 0x18c(r31)
	addi     r4, r28, 0x2e8
	lfs      f1, 0(r30)
	stfs     f0, 0x2e8(r28)
	lfs      f2, 0(r29)
	fmuls    f3, f30, f1
	lfs      f0, 0x190(r31)
	fmuls    f5, f31, f1
	lfs      f4, lbl_8051C868@sda21(r2)
	fmuls    f6, f29, f2
	stfs     f0, 0x2ec(r28)
	fmr      f7, f4
	lfs      f0, 0x194(r31)
	fmuls    f4, f4, f1
	fmuls    f1, f30, f2
	stfs     f0, 0x2f0(r28)
	fmuls    f7, f7, f2
	lfs      f0, 0x2e8(r28)
	fadds    f0, f0, f3
	stfs     f0, 0x2e8(r28)
	lfs      f0, 0x2ec(r28)
	fadds    f0, f0, f4
	stfs     f0, 0x2ec(r28)
	lfs      f0, 0x2f0(r28)
	fadds    f0, f0, f5
	stfs     f0, 0x2f0(r28)
	lfs      f0, 0x2e8(r28)
	fadds    f0, f0, f6
	stfs     f0, 0x2e8(r28)
	lfs      f0, 0x2ec(r28)
	fadds    f0, f0, f7
	stfs     f0, 0x2ec(r28)
	lfs      f0, 0x2f0(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x2f0(r28)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 1
	stfs     f1, 0x2ec(r28)
	cmpwi    r27, 5
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r28, r28, 0xc
	blt      lbl_802CF8D4
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CF9BC
 * Size:	0005F4
 */
void SnakeWhole::Obj::getAttackPiki(int)
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
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stmw     r19, 0xcc(r1)
	cmpwi    r4, 5
	lis      r5, lbl_8048BB38@ha
	mr       r28, r3
	li       r30, 0
	addi     r31, r5, lbl_8048BB38@l
	li       r29, 5
	bge      lbl_802CFA20
	mr       r30, r4
	addi     r29, r4, 1

lbl_802CFA20:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1fc(r28)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x14(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x18(r1)
	lfs      f26, 0x1c(r1)
	bge      lbl_802CFA5C
	fneg     f1, f3

lbl_802CFA5C:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802CFAB4
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802CFACC

lbl_802CFAB4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802CFACC:
	lwz      r0, 0xb8(r31)
	fneg     f31, f30
	lwz      r11, 0xbc(r31)
	lwz      r10, 0xc0(r31)
	lwz      r9, 0xc4(r31)
	lwz      r8, 0xc8(r31)
	lwz      r7, 0xcc(r31)
	lwz      r6, 0xd0(r31)
	lwz      r5, 0xd4(r31)
	lwz      r4, 0xd8(r31)
	lwz      r3, 0xdc(r31)
	lfs      f1, 0x2ec(r28)
	lfs      f0, 0x2f8(r28)
	lfs      f2, 0x304(r28)
	fsubs    f8, f1, f27
	lfs      f1, 0x310(r28)
	fsubs    f6, f0, f27
	lfs      f0, 0x31c(r28)
	fsubs    f12, f2, f27
	stw      r0, 0x44(r1)
	lwz      r0, 0x68(r31)
	fsubs    f11, f1, f27
	stw      r11, 0x48(r1)
	fsubs    f10, f0, f27
	lfs      f0, 0x44(r1)
	stw      r10, 0x4c(r1)
	lfs      f1, 0x48(r1)
	fadds    f9, f0, f8
	stw      r9, 0x50(r1)
	lfs      f0, 0x4c(r1)
	fadds    f7, f1, f6
	stw      r8, 0x54(r1)
	lfs      f1, 0x50(r1)
	fadds    f5, f0, f12
	stw      r7, 0x30(r1)
	lfs      f0, 0x54(r1)
	fadds    f3, f1, f11
	stw      r6, 0x34(r1)
	lfs      f4, 0x30(r1)
	fadds    f1, f0, f10
	stw      r5, 0x38(r1)
	lfs      f2, 0x34(r1)
	fadds    f8, f4, f8
	stw      r4, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f6, f2, f6
	stw      r3, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fadds    f4, f0, f12
	lfs      f0, 0x40(r1)
	fadds    f2, f2, f11
	lwz      r19, 0x6c(r31)
	fadds    f0, f0, f10
	lwz      r20, 0x70(r31)
	lwz      r21, 0x74(r31)
	lwz      r22, 0x78(r31)
	lwz      r23, 0x7c(r31)
	lwz      r24, 0x80(r31)
	lwz      r25, 0x84(r31)
	lwz      r26, 0x88(r31)
	lwz      r27, 0x8c(r31)
	lwz      r12, 0x90(r31)
	lwz      r11, 0x94(r31)
	lwz      r10, 0x98(r31)
	lwz      r9, 0x9c(r31)
	lwz      r8, 0xa0(r31)
	lwz      r7, 0xa4(r31)
	lwz      r6, 0xa8(r31)
	lwz      r5, 0xac(r31)
	lwz      r4, 0xb0(r31)
	lwz      r3, 0xb4(r31)
	stw      r0, 0x94(r1)
	stw      r19, 0x98(r1)
	stw      r20, 0x9c(r1)
	stw      r21, 0xa0(r1)
	stw      r22, 0xa4(r1)
	stw      r23, 0x80(r1)
	stw      r24, 0x84(r1)
	stw      r25, 0x88(r1)
	stw      r26, 0x8c(r1)
	stw      r27, 0x90(r1)
	stw      r12, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r4, 0x64(r1)
	stw      r3, 0x68(r1)
	stfs     f9, 0x44(r1)
	stfs     f8, 0x30(r1)
	stfs     f7, 0x48(r1)
	stfs     f6, 0x34(r1)
	stfs     f5, 0x4c(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x40(r1)
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802CFCA0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFF48

lbl_802CFCA0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFD0C

lbl_802CFCB8:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CFF48
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802CFD0C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFCB8
	b        lbl_802CFF48

lbl_802CFD2C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r19, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFE8C
	mr       r3, r19
	lwz      r12, 0(r19)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFE8C
	mr       r3, r19
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CFE8C
	mr       r4, r19
	addi     r3, r1, 8
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	slwi     r9, r30, 2
	lfs      f1, 8(r1)
	addi     r3, r1, 0x94
	fsubs    f4, f0, f27
	lfs      f0, lbl_8051C868@sda21(r2)
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x58
	fsubs    f3, f1, f28
	addi     r7, r1, 0x44
	fmuls    f0, f0, f4
	addi     r8, r1, 0x30
	fsubs    f2, f2, f26
	subf     r0, r30, r29
	fmadds   f1, f29, f3, f0
	mr       r10, r30
	fmadds   f0, f31, f3, f0
	add      r3, r3, r9
	add      r4, r4, r9
	add      r5, r5, r9
	fmadds   f1, f30, f2, f1
	add      r6, r6, r9
	fmadds   f2, f29, f2, f0
	add      r7, r7, r9
	add      r8, r8, r9
	mtctr    r0
	cmpw     r30, r29
	bge      lbl_802CFE8C

lbl_802CFE18:
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802CFE6C
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802CFE6C
	lfs      f0, 0(r5)
	fcmpo    cr0, f2, f0
	bge      lbl_802CFE6C
	lfs      f0, 0(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_802CFE6C
	lfs      f0, 0(r7)
	fcmpo    cr0, f4, f0
	bge      lbl_802CFE6C
	lfs      f0, 0(r8)
	fcmpo    cr0, f4, f0
	ble      lbl_802CFE6C
	stw      r10, 0x2e4(r28)
	mr       r3, r19
	b        lbl_802CFF6C

lbl_802CFE6C:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	addi     r8, r8, 4
	addi     r10, r10, 1
	bdnz     lbl_802CFE18

lbl_802CFE8C:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_802CFEB8
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFF48

lbl_802CFEB8:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFF2C

lbl_802CFED8:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CFF48
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802CFF2C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFED8

lbl_802CFF48:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802CFD2C
	li       r3, 0

lbl_802CFF6C:
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
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	lmw      r19, 0xcc(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CFFB0
 * Size:	0005C8
 */
void SnakeWhole::Obj::getAttackNavi(int)
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
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stmw     r19, 0xcc(r1)
	cmpwi    r4, 5
	lis      r5, lbl_8048BB38@ha
	mr       r28, r3
	li       r30, 0
	addi     r31, r5, lbl_8048BB38@l
	li       r29, 5
	bge      lbl_802D0014
	mr       r30, r4
	addi     r29, r4, 1

lbl_802D0014:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1fc(r28)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x14(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x18(r1)
	lfs      f26, 0x1c(r1)
	bge      lbl_802D0050
	fneg     f1, f3

lbl_802D0050:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802D00A8
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802D00C0

lbl_802D00A8:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802D00C0:
	lwz      r0, 0x130(r31)
	fneg     f31, f30
	lwz      r11, 0x134(r31)
	lwz      r10, 0x138(r31)
	lwz      r9, 0x13c(r31)
	lwz      r8, 0x140(r31)
	lwz      r7, 0x144(r31)
	lwz      r6, 0x148(r31)
	lwz      r5, 0x14c(r31)
	lwz      r4, 0x150(r31)
	lwz      r3, 0x154(r31)
	lfs      f1, 0x2ec(r28)
	lfs      f0, 0x2f8(r28)
	lfs      f2, 0x304(r28)
	fsubs    f8, f1, f27
	lfs      f1, 0x310(r28)
	fsubs    f6, f0, f27
	lfs      f0, 0x31c(r28)
	fsubs    f12, f2, f27
	stw      r0, 0x44(r1)
	lwz      r0, 0xe0(r31)
	fsubs    f11, f1, f27
	stw      r11, 0x48(r1)
	fsubs    f10, f0, f27
	lfs      f0, 0x44(r1)
	stw      r10, 0x4c(r1)
	lfs      f1, 0x48(r1)
	fadds    f9, f0, f8
	stw      r9, 0x50(r1)
	lfs      f0, 0x4c(r1)
	fadds    f7, f1, f6
	stw      r8, 0x54(r1)
	lfs      f1, 0x50(r1)
	fadds    f5, f0, f12
	stw      r7, 0x30(r1)
	lfs      f0, 0x54(r1)
	fadds    f3, f1, f11
	stw      r6, 0x34(r1)
	lfs      f4, 0x30(r1)
	fadds    f1, f0, f10
	stw      r5, 0x38(r1)
	lfs      f2, 0x34(r1)
	fadds    f8, f4, f8
	stw      r4, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f6, f2, f6
	stw      r3, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fadds    f4, f0, f12
	lfs      f0, 0x40(r1)
	fadds    f2, f2, f11
	lwz      r19, 0xe4(r31)
	fadds    f0, f0, f10
	lwz      r20, 0xe8(r31)
	lwz      r21, 0xec(r31)
	lwz      r22, 0xf0(r31)
	lwz      r23, 0xf4(r31)
	lwz      r24, 0xf8(r31)
	lwz      r25, 0xfc(r31)
	lwz      r26, 0x100(r31)
	lwz      r27, 0x104(r31)
	lwz      r12, 0x108(r31)
	lwz      r11, 0x10c(r31)
	lwz      r10, 0x110(r31)
	lwz      r9, 0x114(r31)
	lwz      r8, 0x118(r31)
	lwz      r7, 0x11c(r31)
	lwz      r6, 0x120(r31)
	lwz      r5, 0x124(r31)
	lwz      r4, 0x128(r31)
	lwz      r3, 0x12c(r31)
	stw      r0, 0x94(r1)
	stw      r19, 0x98(r1)
	stw      r20, 0x9c(r1)
	stw      r21, 0xa0(r1)
	stw      r22, 0xa4(r1)
	stw      r23, 0x80(r1)
	stw      r24, 0x84(r1)
	stw      r25, 0x88(r1)
	stw      r26, 0x8c(r1)
	stw      r27, 0x90(r1)
	stw      r12, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r4, 0x64(r1)
	stw      r3, 0x68(r1)
	stfs     f9, 0x44(r1)
	stfs     f8, 0x30(r1)
	stfs     f7, 0x48(r1)
	stfs     f6, 0x34(r1)
	stfs     f5, 0x4c(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x40(r1)
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802D0294
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D0510

lbl_802D0294:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D0300

lbl_802D02AC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D0510
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802D0300:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D02AC
	b        lbl_802D0510

lbl_802D0320:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r19, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D0454
	mr       r4, r19
	addi     r3, r1, 8
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	slwi     r9, r30, 2
	lfs      f1, 8(r1)
	addi     r3, r1, 0x94
	fsubs    f4, f0, f27
	lfs      f0, lbl_8051C868@sda21(r2)
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x58
	fsubs    f3, f1, f28
	addi     r7, r1, 0x44
	fmuls    f0, f0, f4
	addi     r8, r1, 0x30
	fsubs    f2, f2, f26
	subf     r0, r30, r29
	fmadds   f1, f29, f3, f0
	mr       r10, r30
	fmadds   f0, f31, f3, f0
	add      r3, r3, r9
	add      r4, r4, r9
	add      r5, r5, r9
	fmadds   f1, f30, f2, f1
	add      r6, r6, r9
	fmadds   f2, f29, f2, f0
	add      r7, r7, r9
	add      r8, r8, r9
	mtctr    r0
	cmpw     r30, r29
	bge      lbl_802D0454

lbl_802D03E0:
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802D0434
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802D0434
	lfs      f0, 0(r5)
	fcmpo    cr0, f2, f0
	bge      lbl_802D0434
	lfs      f0, 0(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_802D0434
	lfs      f0, 0(r7)
	fcmpo    cr0, f4, f0
	bge      lbl_802D0434
	lfs      f0, 0(r8)
	fcmpo    cr0, f4, f0
	ble      lbl_802D0434
	stw      r10, 0x2e4(r28)
	mr       r3, r19
	b        lbl_802D0534

lbl_802D0434:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	addi     r8, r8, 4
	addi     r10, r10, 1
	bdnz     lbl_802D03E0

lbl_802D0454:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_802D0480
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D0510

lbl_802D0480:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D04F4

lbl_802D04A0:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D0510
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802D04F4:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D04A0

lbl_802D0510:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802D0320
	li       r3, 0

lbl_802D0534:
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
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	lmw      r19, 0xcc(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0578
 * Size:	000050
 */
void SnakeWhole::Obj::getSearchedTarget()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802D0598
	lfs      f1, lbl_8051C8CC@sda21(r2)
	b        lbl_802D05A0

lbl_802D0598:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x424(r4)

lbl_802D05A0:
	lwz      r7, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D05C8
 * Size:	000068
 */
void SnakeWhole::Obj::getSwallowSlot()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_802D0608

lbl_802D05E8:
	mr       r4, r31
	addi     r3, r30, 0x2d0
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	bne      lbl_802D0604
	b        lbl_802D0618

lbl_802D0604:
	addi     r31, r31, 1

lbl_802D0608:
	lwz      r0, 0x2d0(r30)
	cmpw     r31, r0
	blt      lbl_802D05E8
	li       r3, 0

lbl_802D0618:
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
 * Address:	802D0630
 * Size:	00006C
 */
void SnakeWhole::Obj::isSwallowPikmin()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_802D0674

lbl_802D0650:
	mr       r4, r31
	addi     r3, r30, 0x2d0
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_802D0670
	li       r3, 1
	b        lbl_802D0684

lbl_802D0670:
	addi     r31, r31, 1

lbl_802D0674:
	lwz      r0, 0x2d0(r30)
	cmpw     r31, r0
	blt      lbl_802D0650
	li       r3, 0

lbl_802D0684:
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
 * Address:	802D069C
 * Size:	00024C
 */
void SnakeWhole::Obj::getStickHeadPikmin()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x44(r1)
	addi     r3, r1, 0x18
	stw      r31, 0x3c(r1)
	li       r31, 0
	stw      r30, 0x38(r1)
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x18
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_802D0700
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802D08A0

lbl_802D0700:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802D076C

lbl_802D0718:
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
	bne      lbl_802D08A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802D076C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D0718
	b        lbl_802D08A0

lbl_802D078C:
	lwz      r3, 0x10(r1)
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
	beq      lbl_802D07E4
	lwz      r3, 0xf8(r30)
	cmplwi   r3, 0
	beq      lbl_802D07E4
	lis      r4, 0x68656164@ha
	addi     r3, r3, 0x30
	addi     r4, r4, 0x68656164@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D07E4
	addi     r31, r31, 1

lbl_802D07E4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_802D0810
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802D08A0

lbl_802D0810:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802D0884

lbl_802D0830:
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
	bne      lbl_802D08A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802D0884:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D0830

lbl_802D08A0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802D078C
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0x44(r1)
	mr       r3, r31
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D08E8
 * Size:	000048
 */
void SnakeWhole::Obj::createJointCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x30
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802D0918
	mr       r4, r31
	bl       __ct__Q24Game13SnakeJointMgrFPQ24Game9EnemyBase
	mr       r0, r3

lbl_802D0918:
	stw      r0, 0x324(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0930
 * Size:	000024
 */
void SnakeWhole::Obj::setupJointCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x324(r3)
	bl       setupCallBackJoint__Q24Game13SnakeJointMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0954
 * Size:	000024
 */
void SnakeWhole::Obj::doAnimationJointCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x324(r3)
	bl       doAnimation__Q24Game13SnakeJointMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0978
 * Size:	000024
 */
void SnakeWhole::Obj::finishAnimationJointCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x324(r3)
	bl       finishAnimation__Q24Game13SnakeJointMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D099C
 * Size:	0000B8
 */
void SnakeWhole::Obj::startJointCallBack()
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
	lwz      r0, 0x2e4(r3)
	lwz      r3, 0x184(r3)
	mulli    r0, r0, 0xc
	lfs      f0, 0x190(r30)
	lwz      r12, 0(r3)
	add      r4, r30, r0
	lwz      r12, 0x10(r12)
	lfs      f1, 0x2ec(r4)
	fsubs    f31, f1, f0
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r3)
	li       r4, 3
	bl       getAnimKeyByType__Q28SysShape8AnimInfoFUl
	mr       r31, r3
	mr       r3, r30
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lwz      r3, 0x18(r31)
	lis      r0, 0x4330
	fmr      f3, f1
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051C8A0@sda21(r2)
	stw      r0, 0xc(r1)
	fmr      f1, f31
	lfd      f0, 8(r1)
	lwz      r3, 0x324(r30)
	fsubs    f0, f0, f2
	fsubs    f2, f0, f3
	bl       startModify__Q24Game13SnakeJointMgrFff
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

/*
 * --INFO--
 * Address:	802D0A54
 * Size:	000088
 */
void SnakeWhole::Obj::returnJointCallBack()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x184(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r3)
	li       r4, 4
	bl       getAnimKeyByType__Q28SysShape8AnimInfoFUl
	mr       r31, r3
	mr       r3, r30
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lwz      r3, 0x18(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051C8A0@sda21(r2)
	stw      r0, 0xc(r1)
	lwz      r3, 0x324(r30)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fsubs    f1, f0, f1
	bl       returnModify__Q24Game13SnakeJointMgrFf
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
 * Address:	802D0ADC
 * Size:	000024
 */
void SnakeWhole::Obj::finishJointCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x324(r3)
	bl       finishModify__Q24Game13SnakeJointMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0B00
 * Size:	000038
 */
void SnakeWhole::Obj::setupCollision()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x626F6431@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x626F6431@l
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802D0B28
	bl       makeTubeTree__8CollPartFv

lbl_802D0B28:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0B38
 * Size:	000040
 */
void SnakeWhole::Obj::lifeIncrement()
{
	/*
	lfs      f1, lbl_8051C868@sda21(r2)
	lfs      f0, lbl_8051C884@sda21(r2)
	stfs     f1, 0x208(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x1e0(r3)
	lfs      f1, 0x200(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x200(r3)
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x200(r3)
	lfs      f0, 0x104(r4)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0x200(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0B78
 * Size:	000048
 */
void SnakeWhole::Obj::createShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x74
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802D0BA8
	mr       r4, r31
	bl __ct__Q34Game10SnakeWhole19SnakeWholeShadowMgrFPQ34Game10SnakeWhole3Obj
	mr       r0, r3

lbl_802D0BA8:
	stw      r0, 0x328(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0BC0
 * Size:	000024
 */
void SnakeWhole::Obj::setupShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x328(r3)
	bl       init__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0BE4
 * Size:	000024
 */
void SnakeWhole::Obj::doAnimationShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x328(r3)
	bl       update__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0C08
 * Size:	000024
 */
void SnakeWhole::Obj::startJointShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x328(r3)
	bl       startJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0C2C
 * Size:	000024
 */
void SnakeWhole::Obj::finishJointShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x328(r3)
	bl       finishJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0C50
 * Size:	000040
 */
void SnakeWhole::Obj::deleteJointShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       addNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D0C90
 * Size:	0000E0
 */
void SnakeWhole::Obj::startBossAttackBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2c2(r3)
	cmplwi   r0, 0
	beq      lbl_802D0CBC
	li       r0, 0
	stb      r0, 0x2c2(r3)
	b        lbl_802D0D58

lbl_802D0CBC:
	lwz      r30, 0x28c(r3)
	li       r31, 0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802D0D18
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802D0D18
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802D0D1C

lbl_802D0D18:
	li       r31, 1

lbl_802D0D1C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802D0D40
	lis      r3, lbl_8048BC90@ha
	lis      r5, lbl_8048BCA8@ha
	addi     r3, r3, lbl_8048BC90@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048BCA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802D0D40:
	mr       r3, r30
	li       r4, 3
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802D0D58:
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
 * Address:	802D0D70
 * Size:	0000C8
 */
void SnakeWhole::Obj::startBossFlickBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802D0DE0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802D0DE0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802D0DE4

lbl_802D0DE0:
	li       r31, 1

lbl_802D0DE4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802D0E08
	lis      r3, lbl_8048BC90@ha
	lis      r5, lbl_8048BCA8@ha
	addi     r3, r3, lbl_8048BC90@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048BCA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802D0E08:
	mr       r3, r30
	li       r4, 4
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
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
 * Address:	802D0E38
 * Size:	0000FC
 */
void SnakeWhole::Obj::updateBossBGM()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802D0EB0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802D0EB0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802D0EB4

lbl_802D0EB0:
	li       r31, 1

lbl_802D0EB4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802D0ED8
	lis      r3, lbl_8048BC90@ha
	lis      r5, lbl_8048BCA8@ha
	addi     r3, r3, lbl_8048BC90@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048BCA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802D0ED8:
	lwz      r0, 0x1f4(r29)
	cmpwi    r0, 0
	beq      lbl_802D0F00
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_802D0F18

lbl_802D0F00:
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_802D0F18:
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
 * Address:	802D0F34
 * Size:	0000D0
 */
void SnakeWhole::Obj::resetBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2c3(r3)
	cmplwi   r0, 0
	bne      lbl_802D0FEC
	li       r0, 1
	li       r31, 0
	stb      r0, 0x2c3(r3)
	lwz      r30, 0x28c(r3)
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802D0FB8
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802D0FB8
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802D0FBC

lbl_802D0FB8:
	li       r31, 1

lbl_802D0FBC:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802D0FE0
	lis      r3, lbl_8048BC90@ha
	lis      r5, lbl_8048BCA8@ha
	addi     r3, r3, lbl_8048BC90@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048BCA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802D0FE0:
	mr       r3, r30
	li       r4, 0
	bl       setAppearFlag__Q23PSM9EnemyBossFb

lbl_802D0FEC:
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
 * Address:	802D1004
 * Size:	0000CC
 */
void SnakeWhole::Obj::setBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2c3(r3)
	cmplwi   r0, 0
	beq      lbl_802D10B8
	li       r31, 0
	stb      r31, 0x2c3(r3)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802D1084
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802D1084
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802D1088

lbl_802D1084:
	li       r31, 1

lbl_802D1088:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802D10AC
	lis      r3, lbl_8048BC90@ha
	lis      r5, lbl_8048BCA8@ha
	addi     r3, r3, lbl_8048BC90@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048BCA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802D10AC:
	mr       r3, r30
	li       r4, 1
	bl       setAppearFlag__Q23PSM9EnemyBossFb

lbl_802D10B8:
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
 * Address:	802D10D0
 * Size:	000068
 */
void SnakeWhole::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x54
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802D111C
	li       r4, 0
	li       r5, 0x1f2
	li       r6, 0x1f3
	li       r7, 0x1f4
	li       r8, 0x1f5
	bl       __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs
	lis      r3, __vt__Q23efx11TCphebiDead@ha
	addi     r0, r3, __vt__Q23efx11TCphebiDead@l
	stw      r0, 0(r31)

lbl_802D111C:
	stw      r31, 0x32c(r30)
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
 * Address:	802D1138
 * Size:	000078
 */
void SnakeWhole::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048BCB4@ha
	addi     r4, r3, lbl_8048BCB4@l
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	lwz      r3, 0x32c(r31)
	mr       r4, r0
	bl       setMtxptr__Q23efx10TChaseMtx4FPA4_f
	lis      r4, lbl_8048BB48@ha
	lwz      r3, 0x174(r31)
	addi     r4, r4, lbl_8048BB48@l
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x2d8(r31)
	stfs     f1, 0x2dc(r31)
	stfs     f2, 0x2e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D11B0
 * Size:	0001D4
 */
void SnakeWhole::Obj::createAppearEffect(int)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	cmpwi    r4, 1
	stw      r0, 0x84(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	beq      lbl_802D1280
	bge      lbl_802D11F8
	cmpwi    r4, 0
	bge      lbl_802D1204
	b        lbl_802D1374

lbl_802D11F8:
	cmpwi    r4, 3
	bge      lbl_802D1374
	b        lbl_802D12FC

lbl_802D1204:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x58(r1)
	addi     r0, r3, __vt__Q23efx8TSimple4@l
	lis      r4, __vt__Q23efx14THebiAphd_base@ha
	lis      r3, __vt__Q23efx17THebiAphd_appear1@ha
	stw      r0, 0x58(r1)
	addi     r0, r4, __vt__Q23efx14THebiAphd_base@l
	li       r4, 0xa0
	li       r9, 0xa1
	stw      r0, 0x58(r1)
	addi     r0, r3, __vt__Q23efx17THebiAphd_appear1@l
	li       r8, 0xa2
	li       r7, 0xa3
	li       r5, 0x28
	sth      r4, 0x5c(r1)
	addi     r3, r1, 0x58
	addi     r4, r1, 8
	sth      r9, 0x5e(r1)
	sth      r8, 0x60(r1)
	sth      r7, 0x62(r1)
	stw      r6, 0x64(r1)
	stw      r6, 0x68(r1)
	stw      r6, 0x6c(r1)
	stw      r6, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r0, 0x58(r1)
	bl       create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	b        lbl_802D1374

lbl_802D1280:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x38(r1)
	addi     r0, r3, __vt__Q23efx8TSimple4@l
	lis      r4, __vt__Q23efx14THebiAphd_base@ha
	lis      r3, __vt__Q23efx23THebiAphd_appear2_first@ha
	stw      r0, 0x38(r1)
	addi     r0, r4, __vt__Q23efx14THebiAphd_base@l
	li       r4, 0xa0
	li       r9, 0xa1
	stw      r0, 0x38(r1)
	addi     r0, r3, __vt__Q23efx23THebiAphd_appear2_first@l
	li       r8, 0xa2
	li       r7, 0xa3
	li       r5, 0x41
	sth      r4, 0x3c(r1)
	addi     r3, r1, 0x38
	addi     r4, r1, 8
	sth      r9, 0x3e(r1)
	sth      r8, 0x40(r1)
	sth      r7, 0x42(r1)
	stw      r6, 0x44(r1)
	stw      r6, 0x48(r1)
	stw      r6, 0x4c(r1)
	stw      r6, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x38(r1)
	bl       create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	b        lbl_802D1374

lbl_802D12FC:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q23efx8TSimple4@l
	lis      r4, __vt__Q23efx14THebiAphd_base@ha
	lis      r3, __vt__Q23efx22THebiAphd_appear2_late@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx14THebiAphd_base@l
	li       r4, 0xa0
	li       r9, 0xa1
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q23efx22THebiAphd_appear2_late@l
	li       r8, 0xa2
	li       r7, 0xa3
	li       r5, 0x23
	sth      r4, 0x1c(r1)
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	sth      r9, 0x1e(r1)
	sth      r8, 0x20(r1)
	sth      r7, 0x22(r1)
	stw      r6, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x2c(r1)
	stw      r6, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx14THebiAphd_baseFPQ23efx3Arg

lbl_802D1374:
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1384
 * Size:	000034
 */
void SnakeWhole::Obj::createDeadStartEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x32c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	802D13B8
 * Size:	000094
 */
void SnakeWhole::Obj::createDeadFinishEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8048BB48@ha
	stw      r0, 0x34(r1)
	addi     r4, r4, lbl_8048BB48@l
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f0, 0xc(r3)
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r4, 8(r1)
	lis      r3, __vt__Q23efx15TCphebiDeadHane@ha
	addi     r4, r5, __vt__Q23efx3Arg@l
	li       r6, 0x1f6
	li       r5, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx15TCphebiDeadHane@l
	addi     r3, r1, 8
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
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
 * Address:	802D144C
 * Size:	00003C
 */
void SnakeWhole::Obj::createWalkSmokeEffect(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802D1470
	addi     r4, r3, 0x18c
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	b        lbl_802D1478

lbl_802D1470:
	addi     r4, r3, 0x18c
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_802D1478:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1488
 * Size:	000030
 */
void SnakeWhole::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x32c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
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
 * Address:	802D14B8
 * Size:	000030
 */
void SnakeWhole::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x32c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	802D14E8
 * Size:	000048
 */
void SnakeWhole::Obj::createEfxHamon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D151C
	mr       r3, r31
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_802D151C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1530
 * Size:	000008
 */
void SnakeWhole::Obj::isUnderground()
{
	/*
	lbz      r3, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1538
 * Size:	000058
 */
void SnakeWhole::Obj::getFitEffectPos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048BB48@ha
	addi     r4, r3, lbl_8048BB48@l
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	addi     r3, r31, 0x2d8
	stfs     f0, 0x2d8(r31)
	stfs     f1, 0x2dc(r31)
	stfs     f2, 0x2e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1590
 * Size:	000004
 */
void SnakeWhole::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802D1594
 * Size:	000004
 */
void SnakeWhole::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802D1598
 * Size:	000008
 */
void SnakeWhole::Obj::getDamageCoeStoneState()
{
	/*
	lfs      f1, lbl_8051C8D0@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D15A0
 * Size:	000008
 */
void SnakeWhole::Obj::getMouthSlots()
{
	/*
	addi     r3, r3, 0x2d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D15A8
 * Size:	000004
 */
void SnakeWhole::Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	802D15AC
 * Size:	000008
 */
void SnakeWhole::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051C8D4@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D15B4
 * Size:	000008
 */
u32 SnakeWhole::Obj::getEnemyTypeID() { return 0x46; }

/*
 * --INFO--
 * Address:	802D15BC
 * Size:	000014
 */
void EnemyBase::@816 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -816
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802D15D0
 * Size:	000014
 */
void EnemyBase::@816 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -816
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802D15E4
 * Size:	000014
 */
void EnemyBase::@816 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -816
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802D15F8
 * Size:	000014
 */
void EnemyBase::@816 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -816
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802D160C
 * Size:	000014
 */
void EnemyBase::@816 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -816
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802D1620
 * Size:	000014
 */
void EnemyBase::@816 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -816
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}
} // namespace Game
