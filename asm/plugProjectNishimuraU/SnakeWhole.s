.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048BB38, local
	.asciz "246-SnakeWhole"
.endobj lbl_8048BB38
.balign 4
.obj lbl_8048BB48, local
	.asciz "kutijnt1"
.endobj lbl_8048BB48
.balign 4
.obj lbl_8048BB54, local
	.asciz "kamujnt1"
.endobj lbl_8048BB54
.balign 4
.obj lbl_8048BB60, local
	.asciz "kamujnt2"
.endobj lbl_8048BB60
.balign 4
.obj lbl_8048BB6C, local
	.asciz "kamujnt3"
.endobj lbl_8048BB6C
.balign 4
.obj lbl_8048BB78, local
	.float 60.0
	.float 150.0
	.float 220.0
	.float 120.0
	.float 120.0
.endobj lbl_8048BB78
.obj lbl_8048BB8C, local
	.float 0.0
	.float 0.0
	.float 0.0
	.float 80.0
	.float -80.0
.endobj lbl_8048BB8C
.obj lbl_8048BBA0, local
	.float 120.0
	.float 180.0
	.float 260.0
	.float 160.0
	.float 160.0
.endobj lbl_8048BBA0
.obj lbl_8048BBB4, local
	.float 0.0
	.float 120.0
	.float 180.0
	.float 80.0
	.float 80.0
.endobj lbl_8048BBB4
.obj lbl_8048BBC8, local
	.float 30.0
	.float 30.0
	.float 30.0
	.float 110.0
	.float -50.0
.endobj lbl_8048BBC8
.obj lbl_8048BBDC, local
	.float -30.0
	.float -30.0
	.float -30.0
	.float 50.0
	.float -110.0
.endobj lbl_8048BBDC
.obj lbl_8048BBF0, local
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
.endobj lbl_8048BBF0
.obj lbl_8048BC04, local
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
.endobj lbl_8048BC04
.obj lbl_8048BC18, local
	.float 120.0
	.float 180.0
	.float 260.0
	.float 160.0
	.float 160.0
.endobj lbl_8048BC18
.obj lbl_8048BC2C, local
	.float 0.0
	.float 120.0
	.float 180.0
	.float 80.0
	.float 80.0
.endobj lbl_8048BC2C
.obj lbl_8048BC40, local
	.float 30.0
	.float 30.0
	.float 30.0
	.float 110.0
	.float -50.0
.endobj lbl_8048BC40
.obj lbl_8048BC54, local
	.float -30.0
	.float -30.0
	.float -30.0
	.float 50.0
	.float -110.0
.endobj lbl_8048BC54
.obj lbl_8048BC68, local
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
.endobj lbl_8048BC68
.obj lbl_8048BC7C, local
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
.endobj lbl_8048BC7C
.balign 4
.obj lbl_8048BC90, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_8048BC90
.balign 4
.obj lbl_8048BCA8, local
	.asciz "P2Assert"
.endobj lbl_8048BCA8
.balign 4
.obj lbl_8048BCB4, local
	.asciz "foot_joint1"
.endobj lbl_8048BCB4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx15TCphebiDeadHane, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx15TCphebiDeadHane
.obj __vt__Q23efx11TCphebiDead, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx11TCphebiDead
.obj __vt__Q34Game10SnakeWhole3Obj, global
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
	.4byte setInitialSetting__Q34Game10SnakeWhole3ObjFPQ24Game21EnemyInitialParamBase
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
	.4byte damageCallBack__Q34Game10SnakeWhole3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game10SnakeWhole3ObjFv
	.4byte doFinishStoneState__Q34Game10SnakeWhole3ObjFv
	.4byte getDamageCoeStoneState__Q34Game10SnakeWhole3ObjFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10SnakeWhole3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10SnakeWhole3ObjFv
	.4byte doStartMovie__Q34Game10SnakeWhole3ObjFv
	.4byte doEndMovie__Q34Game10SnakeWhole3ObjFv
	.4byte setFSM__Q34Game10SnakeWhole3ObjFPQ34Game10SnakeWhole3FSM
	.4byte 0
	.4byte 0
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
.endobj __vt__Q34Game10SnakeWhole3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051C868, local
	.float 0.0
.endobj lbl_8051C868
.obj lbl_8051C86C, local
	.float 2.5
.endobj lbl_8051C86C
.obj lbl_8051C870, local
	.float 1.0
.endobj lbl_8051C870
.obj lbl_8051C874, local
	.float 50.0
.endobj lbl_8051C874
.obj lbl_8051C878, local
	.float 20.0
.endobj lbl_8051C878
.obj lbl_8051C87C, local
	.float 22.5
.endobj lbl_8051C87C
.obj lbl_8051C880, local
	.float 0.1
.endobj lbl_8051C880
.obj lbl_8051C884, local
	.float 10.0
.endobj lbl_8051C884
.obj lbl_8051C888, local
	.float -1000.0
.endobj lbl_8051C888
.obj lbl_8051C88C, local
	.float 15.0
.endobj lbl_8051C88C
.obj lbl_8051C890, local # pi/2
	.float 1.5707964
.endobj lbl_8051C890
.obj lbl_8051C894, local
	.float 22.0
.endobj lbl_8051C894
.obj lbl_8051C898, local
	.float 0.5235988
.endobj lbl_8051C898
.obj lbl_8051C89C, local
	.float 0.73333335
.endobj lbl_8051C89C
.balign 8
.obj lbl_8051C8A0, local
	.8byte 0x4330000080000000
.endobj lbl_8051C8A0
.obj lbl_8051C8A8, local # tau
	.float 6.2831855
.endobj lbl_8051C8A8
.obj lbl_8051C8AC, local
	.float 0.5
.endobj lbl_8051C8AC
.obj lbl_8051C8B0, local
	.float 32768.0
.endobj lbl_8051C8B0
.obj lbl_8051C8B4, local
	.float 325.9493
.endobj lbl_8051C8B4
.obj lbl_8051C8B8, local
	.float -325.9493
.endobj lbl_8051C8B8
.obj lbl_8051C8BC, local
	.float 120.0
.endobj lbl_8051C8BC
.obj lbl_8051C8C0, local # pi
	.float 3.1415927
.endobj lbl_8051C8C0
.obj lbl_8051C8C4, local
	.float 128000.0
.endobj lbl_8051C8C4
.obj lbl_8051C8C8, local
	.float -128000.0
.endobj lbl_8051C8C8
.obj lbl_8051C8CC, local
	.float 180.0
.endobj lbl_8051C8CC
.obj lbl_8051C8D0, local
	.float 0.25
.endobj lbl_8051C8D0
.obj lbl_8051C8D4, local
	.float 0.9
.endobj lbl_8051C8D4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game10SnakeWhole3ObjFv, global
/* 802CE798 002CB6D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE79C 002CB6DC  7C 08 02 A6 */	mflr r0
/* 802CE7A0 002CB6E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE7A4 002CB6E4  7C 80 07 35 */	extsh. r0, r4
/* 802CE7A8 002CB6E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CE7AC 002CB6EC  7C 7F 1B 78 */	mr r31, r3
/* 802CE7B0 002CB6F0  93 C1 00 08 */	stw r30, 8(r1)
/* 802CE7B4 002CB6F4  41 82 00 24 */	beq .L_802CE7D8
/* 802CE7B8 002CB6F8  38 1F 03 30 */	addi r0, r31, 0x330
/* 802CE7BC 002CB6FC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802CE7C0 002CB700  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802CE7C4 002CB704  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802CE7C8 002CB708  38 00 00 00 */	li r0, 0
/* 802CE7CC 002CB70C  90 7F 03 30 */	stw r3, 0x330(r31)
/* 802CE7D0 002CB710  90 1F 03 34 */	stw r0, 0x334(r31)
/* 802CE7D4 002CB714  90 1F 03 38 */	stw r0, 0x338(r31)
.L_802CE7D8:
/* 802CE7D8 002CB718  7F E3 FB 78 */	mr r3, r31
/* 802CE7DC 002CB71C  38 80 00 00 */	li r4, 0
/* 802CE7E0 002CB720  4B E3 2B C1 */	bl __ct__Q24Game9EnemyBaseFv
/* 802CE7E4 002CB724  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole3Obj@ha
/* 802CE7E8 002CB728  38 1F 03 30 */	addi r0, r31, 0x330
/* 802CE7EC 002CB72C  38 A3 24 78 */	addi r5, r3, __vt__Q34Game10SnakeWhole3Obj@l
/* 802CE7F0 002CB730  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 802CE7F4 002CB734  90 BF 00 00 */	stw r5, 0(r31)
/* 802CE7F8 002CB738  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802CE7FC 002CB73C  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802CE800 002CB740  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802CE804 002CB744  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802CE808 002CB748  90 A4 00 00 */	stw r5, 0(r4)
/* 802CE80C 002CB74C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802CE810 002CB750  7C 04 00 50 */	subf r0, r4, r0
/* 802CE814 002CB754  90 04 00 0C */	stw r0, 0xc(r4)
/* 802CE818 002CB758  4B E6 9D 31 */	bl __ct__10MouthSlotsFv
/* 802CE81C 002CB75C  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 802CE820 002CB760  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 802CE824 002CB764  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 802CE828 002CB768  38 A0 00 00 */	li r5, 0
/* 802CE82C 002CB76C  38 C0 00 0C */	li r6, 0xc
/* 802CE830 002CB770  38 E0 00 05 */	li r7, 5
/* 802CE834 002CB774  4B DF 30 09 */	bl __construct_array
/* 802CE838 002CB778  38 60 00 2C */	li r3, 0x2c
/* 802CE83C 002CB77C  4B D5 56 69 */	bl __nw__FUl
/* 802CE840 002CB780  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CE844 002CB784  41 82 00 44 */	beq .L_802CE888
/* 802CE848 002CB788  4B E5 91 2D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802CE84C 002CB78C  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole14ProperAnimator@ha
/* 802CE850 002CB790  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802CE854 002CB794  38 03 23 30 */	addi r0, r3, __vt__Q34Game10SnakeWhole14ProperAnimator@l
/* 802CE858 002CB798  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802CE85C 002CB79C  90 1E 00 00 */	stw r0, 0(r30)
/* 802CE860 002CB7A0  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802CE864 002CB7A4  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802CE868 002CB7A8  38 00 00 00 */	li r0, 0
/* 802CE86C 002CB7AC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802CE870 002CB7B0  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802CE874 002CB7B4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802CE878 002CB7B8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802CE87C 002CB7BC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802CE880 002CB7C0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802CE884 002CB7C4  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802CE888:
/* 802CE888 002CB7C8  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802CE88C 002CB7CC  38 60 00 1C */	li r3, 0x1c
/* 802CE890 002CB7D0  4B D5 56 15 */	bl __nw__FUl
/* 802CE894 002CB7D4  7C 64 1B 79 */	or. r4, r3, r3
/* 802CE898 002CB7D8  41 82 00 24 */	beq .L_802CE8BC
/* 802CE89C 002CB7DC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802CE8A0 002CB7E0  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole3FSM@ha
/* 802CE8A4 002CB7E4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802CE8A8 002CB7E8  38 A0 FF FF */	li r5, -1
/* 802CE8AC 002CB7EC  90 04 00 00 */	stw r0, 0(r4)
/* 802CE8B0 002CB7F0  38 03 23 0C */	addi r0, r3, __vt__Q34Game10SnakeWhole3FSM@l
/* 802CE8B4 002CB7F4  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802CE8B8 002CB7F8  90 04 00 00 */	stw r0, 0(r4)
.L_802CE8BC:
/* 802CE8BC 002CB7FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CE8C0 002CB800  7F E3 FB 78 */	mr r3, r31
/* 802CE8C4 002CB804  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802CE8C8 002CB808  7D 89 03 A6 */	mtctr r12
/* 802CE8CC 002CB80C  4E 80 04 21 */	bctrl 
/* 802CE8D0 002CB810  7F E3 FB 78 */	mr r3, r31
/* 802CE8D4 002CB814  48 00 20 15 */	bl createJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CE8D8 002CB818  7F E3 FB 78 */	mr r3, r31
/* 802CE8DC 002CB81C  48 00 22 9D */	bl createShadowSystem__Q34Game10SnakeWhole3ObjFv
/* 802CE8E0 002CB820  7F E3 FB 78 */	mr r3, r31
/* 802CE8E4 002CB824  48 00 27 ED */	bl createEffect__Q34Game10SnakeWhole3ObjFv
/* 802CE8E8 002CB828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE8EC 002CB82C  7F E3 FB 78 */	mr r3, r31
/* 802CE8F0 002CB830  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CE8F4 002CB834  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CE8F8 002CB838  7C 08 03 A6 */	mtlr r0
/* 802CE8FC 002CB83C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE900 002CB840  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10SnakeWhole3ObjFv

.fn setInitialSetting__Q34Game10SnakeWhole3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802CE904 002CB844  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game10SnakeWhole3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game10SnakeWhole3ObjFPQ24Game15CreatureInitArg, global
/* 802CE908 002CB848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE90C 002CB84C  7C 08 02 A6 */	mflr r0
/* 802CE910 002CB850  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE914 002CB854  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CE918 002CB858  7C 7F 1B 78 */	mr r31, r3
/* 802CE91C 002CB85C  4B E3 31 3D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802CE920 002CB860  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802CE924 002CB864  7F E4 FB 78 */	mr r4, r31
/* 802CE928 002CB868  4B F7 35 71 */	bl delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802CE92C 002CB86C  38 00 00 01 */	li r0, 1
/* 802CE930 002CB870  38 80 00 00 */	li r4, 0
/* 802CE934 002CB874  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802CE938 002CB878  38 00 FF FF */	li r0, -1
/* 802CE93C 002CB87C  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CE940 002CB880  7F E3 FB 78 */	mr r3, r31
/* 802CE944 002CB884  98 9F 02 C1 */	stb r4, 0x2c1(r31)
/* 802CE948 002CB888  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802CE94C 002CB88C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CE950 002CB890  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 802CE954 002CB894  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802CE958 002CB898  48 00 1F D9 */	bl setupJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CE95C 002CB89C  7F E3 FB 78 */	mr r3, r31
/* 802CE960 002CB8A0  48 00 21 A1 */	bl setupCollision__Q34Game10SnakeWhole3ObjFv
/* 802CE964 002CB8A4  7F E3 FB 78 */	mr r3, r31
/* 802CE968 002CB8A8  48 00 22 59 */	bl setupShadowSystem__Q34Game10SnakeWhole3ObjFv
/* 802CE96C 002CB8AC  7F E3 FB 78 */	mr r3, r31
/* 802CE970 002CB8B0  48 00 27 C9 */	bl setupEffect__Q34Game10SnakeWhole3ObjFv
/* 802CE974 002CB8B4  38 60 00 01 */	li r3, 1
/* 802CE978 002CB8B8  38 00 00 00 */	li r0, 0
/* 802CE97C 002CB8BC  98 7F 02 C2 */	stb r3, 0x2c2(r31)
/* 802CE980 002CB8C0  7F E3 FB 78 */	mr r3, r31
/* 802CE984 002CB8C4  98 1F 02 C3 */	stb r0, 0x2c3(r31)
/* 802CE988 002CB8C8  48 00 25 AD */	bl resetBossAppearBGM__Q34Game10SnakeWhole3ObjFv
/* 802CE98C 002CB8CC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802CE990 002CB8D0  7F E4 FB 78 */	mr r4, r31
/* 802CE994 002CB8D4  38 A0 00 01 */	li r5, 1
/* 802CE998 002CB8D8  38 C0 00 00 */	li r6, 0
/* 802CE99C 002CB8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CE9A0 002CB8E0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802CE9A4 002CB8E4  7D 89 03 A6 */	mtctr r12
/* 802CE9A8 002CB8E8  4E 80 04 21 */	bctrl 
/* 802CE9AC 002CB8EC  7F E3 FB 78 */	mr r3, r31
/* 802CE9B0 002CB8F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CE9B4 002CB8F4  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802CE9B8 002CB8F8  7D 89 03 A6 */	mtctr r12
/* 802CE9BC 002CB8FC  4E 80 04 21 */	bctrl 
/* 802CE9C0 002CB900  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE9C4 002CB904  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CE9C8 002CB908  7C 08 03 A6 */	mtlr r0
/* 802CE9CC 002CB90C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE9D0 002CB910  4E 80 00 20 */	blr 
.endfn onInit__Q34Game10SnakeWhole3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game10SnakeWhole3ObjFv, global
/* 802CE9D4 002CB914  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE9D8 002CB918  7C 08 02 A6 */	mflr r0
/* 802CE9DC 002CB91C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE9E0 002CB920  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CE9E4 002CB924  7C 7F 1B 78 */	mr r31, r3
/* 802CE9E8 002CB928  7F E4 FB 78 */	mr r4, r31
/* 802CE9EC 002CB92C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802CE9F0 002CB930  81 83 00 00 */	lwz r12, 0(r3)
/* 802CE9F4 002CB934  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CE9F8 002CB938  7D 89 03 A6 */	mtctr r12
/* 802CE9FC 002CB93C  4E 80 04 21 */	bctrl 
/* 802CEA00 002CB940  7F E3 FB 78 */	mr r3, r31
/* 802CEA04 002CB944  48 00 07 FD */	bl updateConstraint__Q34Game10SnakeWhole3ObjFv
/* 802CEA08 002CB948  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 802CEA0C 002CB94C  4B E6 9C 21 */	bl update__10MouthSlotsFv
/* 802CEA10 002CB950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEA14 002CB954  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEA18 002CB958  7C 08 03 A6 */	mtlr r0
/* 802CEA1C 002CB95C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEA20 002CB960  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game10SnakeWhole3ObjFv

.fn doUpdateCommon__Q34Game10SnakeWhole3ObjFv, global
/* 802CEA24 002CB964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEA28 002CB968  7C 08 02 A6 */	mflr r0
/* 802CEA2C 002CB96C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEA30 002CB970  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEA34 002CB974  7C 7F 1B 78 */	mr r31, r3
/* 802CEA38 002CB978  4B E3 44 DD */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802CEA3C 002CB97C  7F E3 FB 78 */	mr r3, r31
/* 802CEA40 002CB980  48 00 23 F9 */	bl updateBossBGM__Q34Game10SnakeWhole3ObjFv
/* 802CEA44 002CB984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEA48 002CB988  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEA4C 002CB98C  7C 08 03 A6 */	mtlr r0
/* 802CEA50 002CB990  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEA54 002CB994  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game10SnakeWhole3ObjFv

.fn doAnimationUpdateAnimator__Q34Game10SnakeWhole3ObjFv, global
/* 802CEA58 002CB998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEA5C 002CB99C  7C 08 02 A6 */	mflr r0
/* 802CEA60 002CB9A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEA64 002CB9A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEA68 002CB9A8  7C 7F 1B 78 */	mr r31, r3
/* 802CEA6C 002CB9AC  4B E3 45 8D */	bl doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
/* 802CEA70 002CB9B0  7F E3 FB 78 */	mr r3, r31
/* 802CEA74 002CB9B4  48 00 1E E1 */	bl doAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CEA78 002CB9B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEA7C 002CB9BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEA80 002CB9C0  7C 08 03 A6 */	mtlr r0
/* 802CEA84 002CB9C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEA88 002CB9C8  4E 80 00 20 */	blr 
.endfn doAnimationUpdateAnimator__Q34Game10SnakeWhole3ObjFv

.fn doAnimationCullingOff__Q34Game10SnakeWhole3ObjFv, global
/* 802CEA8C 002CB9CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEA90 002CB9D0  7C 08 02 A6 */	mflr r0
/* 802CEA94 002CB9D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEA98 002CB9D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEA9C 002CB9DC  7C 7F 1B 78 */	mr r31, r3
/* 802CEAA0 002CB9E0  4B E3 45 E1 */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 802CEAA4 002CB9E4  7F E3 FB 78 */	mr r3, r31
/* 802CEAA8 002CB9E8  48 00 21 3D */	bl doAnimationShadowSystem__Q34Game10SnakeWhole3ObjFv
/* 802CEAAC 002CB9EC  7F E3 FB 78 */	mr r3, r31
/* 802CEAB0 002CB9F0  48 00 1E C9 */	bl finishAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CEAB4 002CB9F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEAB8 002CB9F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEABC 002CB9FC  7C 08 03 A6 */	mtlr r0
/* 802CEAC0 002CBA00  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEAC4 002CBA04  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game10SnakeWhole3ObjFv

.fn doDirectDraw__Q34Game10SnakeWhole3ObjFR8Graphics, global
/* 802CEAC8 002CBA08  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10SnakeWhole3ObjFR8Graphics

.fn doDebugDraw__Q34Game10SnakeWhole3ObjFR8Graphics, global
/* 802CEACC 002CBA0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEAD0 002CBA10  7C 08 02 A6 */	mflr r0
/* 802CEAD4 002CBA14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEAD8 002CBA18  4B E3 73 95 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802CEADC 002CBA1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEAE0 002CBA20  7C 08 03 A6 */	mtlr r0
/* 802CEAE4 002CBA24  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEAE8 002CBA28  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game10SnakeWhole3ObjFR8Graphics

.fn setFSM__Q34Game10SnakeWhole3ObjFPQ34Game10SnakeWhole3FSM, global
/* 802CEAEC 002CBA2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEAF0 002CBA30  7C 08 02 A6 */	mflr r0
/* 802CEAF4 002CBA34  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEAF8 002CBA38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEAFC 002CBA3C  7C 7F 1B 78 */	mr r31, r3
/* 802CEB00 002CBA40  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802CEB04 002CBA44  7F E4 FB 78 */	mr r4, r31
/* 802CEB08 002CBA48  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802CEB0C 002CBA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CEB10 002CBA50  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CEB14 002CBA54  7D 89 03 A6 */	mtctr r12
/* 802CEB18 002CBA58  4E 80 04 21 */	bctrl 
/* 802CEB1C 002CBA5C  38 00 00 00 */	li r0, 0
/* 802CEB20 002CBA60  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802CEB24 002CBA64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEB28 002CBA68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEB2C 002CBA6C  7C 08 03 A6 */	mtlr r0
/* 802CEB30 002CBA70  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEB34 002CBA74  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game10SnakeWhole3ObjFPQ34Game10SnakeWhole3FSM

.fn getShadowParam__Q34Game10SnakeWhole3ObjFRQ24Game11ShadowParam, global
/* 802CEB38 002CBA78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEB3C 002CBA7C  7C 08 02 A6 */	mflr r0
/* 802CEB40 002CBA80  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEB44 002CBA84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEB48 002CBA88  7C 9F 23 78 */	mr r31, r4
/* 802CEB4C 002CBA8C  93 C1 00 08 */	stw r30, 8(r1)
/* 802CEB50 002CBA90  7C 7E 1B 78 */	mr r30, r3
/* 802CEB54 002CBA94  3C 60 80 49 */	lis r3, lbl_8048BB48@ha
/* 802CEB58 002CBA98  38 03 BB 48 */	addi r0, r3, lbl_8048BB48@l
/* 802CEB5C 002CBA9C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802CEB60 002CBAA0  7C 04 03 78 */	mr r4, r0
/* 802CEB64 002CBAA4  48 17 04 81 */	bl getJoint__Q28SysShape5ModelFPc
/* 802CEB68 002CBAA8  48 15 AD 39 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802CEB6C 002CBAAC  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802CEB70 002CBAB0  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802CEB74 002CBAB4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802CEB78 002CBAB8  C0 62 E5 0C */	lfs f3, lbl_8051C86C@sda21(r2)
/* 802CEB7C 002CBABC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802CEB80 002CBAC0  C0 22 E5 08 */	lfs f1, lbl_8051C868@sda21(r2)
/* 802CEB84 002CBAC4  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802CEB88 002CBAC8  C0 02 E5 10 */	lfs f0, lbl_8051C870@sda21(r2)
/* 802CEB8C 002CBACC  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802CEB90 002CBAD0  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 802CEB94 002CBAD4  EC 43 10 2A */	fadds f2, f3, f2
/* 802CEB98 002CBAD8  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802CEB9C 002CBADC  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802CEBA0 002CBAE0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802CEBA4 002CBAE4  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802CEBA8 002CBAE8  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802CEBAC 002CBAEC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802CEBB0 002CBAF0  41 82 00 10 */	beq .L_802CEBC0
/* 802CEBB4 002CBAF4  C0 02 E5 14 */	lfs f0, lbl_8051C874@sda21(r2)
/* 802CEBB8 002CBAF8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802CEBBC 002CBAFC  48 00 00 0C */	b .L_802CEBC8
.L_802CEBC0:
/* 802CEBC0 002CBB00  C0 02 E5 18 */	lfs f0, lbl_8051C878@sda21(r2)
/* 802CEBC4 002CBB04  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802CEBC8:
/* 802CEBC8 002CBB08  C0 02 E5 1C */	lfs f0, lbl_8051C87C@sda21(r2)
/* 802CEBCC 002CBB0C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802CEBD0 002CBB10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEBD4 002CBB14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEBD8 002CBB18  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CEBDC 002CBB1C  7C 08 03 A6 */	mtlr r0
/* 802CEBE0 002CBB20  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEBE4 002CBB24  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game10SnakeWhole3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game10SnakeWhole3ObjFPQ24Game8CreaturefP8CollPart, global
/* 802CEBE8 002CBB28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CEBEC 002CBB2C  7C 08 02 A6 */	mflr r0
/* 802CEBF0 002CBB30  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CEBF4 002CBB34  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802CEBF8 002CBB38  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802CEBFC 002CBB3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEC00 002CBB40  93 C1 00 08 */	stw r30, 8(r1)
/* 802CEC04 002CBB44  FF E0 08 90 */	fmr f31, f1
/* 802CEC08 002CBB48  28 04 00 00 */	cmplwi r4, 0
/* 802CEC0C 002CBB4C  7C 7E 1B 78 */	mr r30, r3
/* 802CEC10 002CBB50  7C BF 2B 78 */	mr r31, r5
/* 802CEC14 002CBB54  41 82 00 48 */	beq .L_802CEC5C
/* 802CEC18 002CBB58  7C 83 23 78 */	mr r3, r4
/* 802CEC1C 002CBB5C  81 84 00 00 */	lwz r12, 0(r4)
/* 802CEC20 002CBB60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CEC24 002CBB64  7D 89 03 A6 */	mtctr r12
/* 802CEC28 002CBB68  4E 80 04 21 */	bctrl 
/* 802CEC2C 002CBB6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CEC30 002CBB70  41 82 00 2C */	beq .L_802CEC5C
/* 802CEC34 002CBB74  28 1F 00 00 */	cmplwi r31, 0
/* 802CEC38 002CBB78  40 82 00 0C */	bne .L_802CEC44
/* 802CEC3C 002CBB7C  C0 02 E5 20 */	lfs f0, lbl_8051C880@sda21(r2)
/* 802CEC40 002CBB80  EF FF 00 32 */	fmuls f31, f31, f0
.L_802CEC44:
/* 802CEC44 002CBB84  FC 20 F8 90 */	fmr f1, f31
/* 802CEC48 002CBB88  C0 42 E5 10 */	lfs f2, lbl_8051C870@sda21(r2)
/* 802CEC4C 002CBB8C  7F C3 F3 78 */	mr r3, r30
/* 802CEC50 002CBB90  4B E3 73 DD */	bl addDamage__Q24Game9EnemyBaseFff
/* 802CEC54 002CBB94  38 60 00 01 */	li r3, 1
/* 802CEC58 002CBB98  48 00 00 08 */	b .L_802CEC60
.L_802CEC5C:
/* 802CEC5C 002CBB9C  38 60 00 00 */	li r3, 0
.L_802CEC60:
/* 802CEC60 002CBBA0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802CEC64 002CBBA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CEC68 002CBBA8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802CEC6C 002CBBAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEC70 002CBBB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CEC74 002CBBB4  7C 08 03 A6 */	mtlr r0
/* 802CEC78 002CBBB8  38 21 00 20 */	addi r1, r1, 0x20
/* 802CEC7C 002CBBBC  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game10SnakeWhole3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game10SnakeWhole3ObjFv, global
/* 802CEC80 002CBBC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEC84 002CBBC4  7C 08 02 A6 */	mflr r0
/* 802CEC88 002CBBC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEC8C 002CBBCC  4B E3 42 69 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802CEC90 002CBBD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEC94 002CBBD4  7C 08 03 A6 */	mtlr r0
/* 802CEC98 002CBBD8  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEC9C 002CBBDC  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game10SnakeWhole3ObjFv

.fn doFinishStoneState__Q34Game10SnakeWhole3ObjFv, global
/* 802CECA0 002CBBE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CECA4 002CBBE4  7C 08 02 A6 */	mflr r0
/* 802CECA8 002CBBE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CECAC 002CBBEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CECB0 002CBBF0  7C 7F 1B 78 */	mr r31, r3
/* 802CECB4 002CBBF4  4B E3 42 55 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802CECB8 002CBBF8  C0 22 E5 10 */	lfs f1, lbl_8051C870@sda21(r2)
/* 802CECBC 002CBBFC  7F E3 FB 78 */	mr r3, r31
/* 802CECC0 002CBC00  C0 42 E5 24 */	lfs f2, lbl_8051C884@sda21(r2)
/* 802CECC4 002CBC04  38 80 00 00 */	li r4, 0
/* 802CECC8 002CBC08  C0 62 E5 08 */	lfs f3, lbl_8051C868@sda21(r2)
/* 802CECCC 002CBC0C  C0 82 E5 28 */	lfs f4, lbl_8051C888@sda21(r2)
/* 802CECD0 002CBC10  4B E4 44 4D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802CECD4 002CBC14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CECD8 002CBC18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CECDC 002CBC1C  7C 08 03 A6 */	mtlr r0
/* 802CECE0 002CBC20  38 21 00 10 */	addi r1, r1, 0x10
/* 802CECE4 002CBC24  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game10SnakeWhole3ObjFv

.fn startCarcassMotion__Q34Game10SnakeWhole3ObjFv, global
/* 802CECE8 002CBC28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CECEC 002CBC2C  7C 08 02 A6 */	mflr r0
/* 802CECF0 002CBC30  38 80 00 0D */	li r4, 0xd
/* 802CECF4 002CBC34  38 A0 00 00 */	li r5, 0
/* 802CECF8 002CBC38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CECFC 002CBC3C  4B E3 63 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CED00 002CBC40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CED04 002CBC44  7C 08 03 A6 */	mtlr r0
/* 802CED08 002CBC48  38 21 00 10 */	addi r1, r1, 0x10
/* 802CED0C 002CBC4C  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game10SnakeWhole3ObjFv

.fn doStartMovie__Q34Game10SnakeWhole3ObjFv, global
/* 802CED10 002CBC50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CED14 002CBC54  7C 08 02 A6 */	mflr r0
/* 802CED18 002CBC58  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CED1C 002CBC5C  48 00 27 9D */	bl effectDrawOff__Q34Game10SnakeWhole3ObjFv
/* 802CED20 002CBC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CED24 002CBC64  7C 08 03 A6 */	mtlr r0
/* 802CED28 002CBC68  38 21 00 10 */	addi r1, r1, 0x10
/* 802CED2C 002CBC6C  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game10SnakeWhole3ObjFv

.fn doEndMovie__Q34Game10SnakeWhole3ObjFv, global
/* 802CED30 002CBC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CED34 002CBC74  7C 08 02 A6 */	mflr r0
/* 802CED38 002CBC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CED3C 002CBC7C  48 00 27 4D */	bl effectDrawOn__Q34Game10SnakeWhole3ObjFv
/* 802CED40 002CBC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CED44 002CBC84  7C 08 03 A6 */	mtlr r0
/* 802CED48 002CBC88  38 21 00 10 */	addi r1, r1, 0x10
/* 802CED4C 002CBC8C  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game10SnakeWhole3ObjFv

.fn initMouthSlots__Q34Game10SnakeWhole3ObjFv, global
/* 802CED50 002CBC90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CED54 002CBC94  7C 08 02 A6 */	mflr r0
/* 802CED58 002CBC98  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CED5C 002CBC9C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802CED60 002CBCA0  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802CED64 002CBCA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CED68 002CBCA8  93 C1 00 08 */	stw r30, 8(r1)
/* 802CED6C 002CBCAC  7C 7E 1B 78 */	mr r30, r3
/* 802CED70 002CBCB0  3C 60 80 49 */	lis r3, lbl_8048BB38@ha
/* 802CED74 002CBCB4  3B E3 BB 38 */	addi r31, r3, lbl_8048BB38@l
/* 802CED78 002CBCB8  38 80 00 03 */	li r4, 3
/* 802CED7C 002CBCBC  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802CED80 002CBCC0  4B E6 97 D9 */	bl alloc__10MouthSlotsFi
/* 802CED84 002CBCC4  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802CED88 002CBCC8  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802CED8C 002CBCCC  38 DF 00 1C */	addi r6, r31, 0x1c
/* 802CED90 002CBCD0  38 80 00 00 */	li r4, 0
/* 802CED94 002CBCD4  4B E6 98 FD */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802CED98 002CBCD8  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802CED9C 002CBCDC  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802CEDA0 002CBCE0  38 DF 00 28 */	addi r6, r31, 0x28
/* 802CEDA4 002CBCE4  38 80 00 01 */	li r4, 1
/* 802CEDA8 002CBCE8  4B E6 98 E9 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802CEDAC 002CBCEC  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802CEDB0 002CBCF0  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802CEDB4 002CBCF4  38 DF 00 34 */	addi r6, r31, 0x34
/* 802CEDB8 002CBCF8  38 80 00 02 */	li r4, 2
/* 802CEDBC 002CBCFC  4B E6 98 D5 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802CEDC0 002CBD00  C3 E2 E5 2C */	lfs f31, lbl_8051C88C@sda21(r2)
/* 802CEDC4 002CBD04  3B E0 00 00 */	li r31, 0
/* 802CEDC8 002CBD08  48 00 00 18 */	b .L_802CEDE0
.L_802CEDCC:
/* 802CEDCC 002CBD0C  7F E4 FB 78 */	mr r4, r31
/* 802CEDD0 002CBD10  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802CEDD4 002CBD14  4B E6 99 A5 */	bl getSlot__10MouthSlotsFi
/* 802CEDD8 002CBD18  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 802CEDDC 002CBD1C  3B FF 00 01 */	addi r31, r31, 1
.L_802CEDE0:
/* 802CEDE0 002CBD20  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 802CEDE4 002CBD24  7C 1F 00 00 */	cmpw r31, r0
/* 802CEDE8 002CBD28  41 80 FF E4 */	blt .L_802CEDCC
/* 802CEDEC 002CBD2C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802CEDF0 002CBD30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CEDF4 002CBD34  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802CEDF8 002CBD38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEDFC 002CBD3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CEE00 002CBD40  7C 08 03 A6 */	mtlr r0
/* 802CEE04 002CBD44  38 21 00 20 */	addi r1, r1, 0x20
/* 802CEE08 002CBD48  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game10SnakeWhole3ObjFv

.fn "getThrowupItemPosition__Q34Game10SnakeWhole3ObjFP10Vector3<f>", global
/* 802CEE0C 002CBD4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEE10 002CBD50  7C 08 02 A6 */	mflr r0
/* 802CEE14 002CBD54  3C A0 80 49 */	lis r5, lbl_8048BB48@ha
/* 802CEE18 002CBD58  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEE1C 002CBD5C  38 05 BB 48 */	addi r0, r5, lbl_8048BB48@l
/* 802CEE20 002CBD60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEE24 002CBD64  7C 9F 23 78 */	mr r31, r4
/* 802CEE28 002CBD68  7C 04 03 78 */	mr r4, r0
/* 802CEE2C 002CBD6C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802CEE30 002CBD70  48 17 01 B5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802CEE34 002CBD74  48 15 AA 6D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802CEE38 002CBD78  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802CEE3C 002CBD7C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802CEE40 002CBD80  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802CEE44 002CBD84  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802CEE48 002CBD88  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802CEE4C 002CBD8C  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802CEE50 002CBD90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CEE54 002CBD94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CEE58 002CBD98  7C 08 03 A6 */	mtlr r0
/* 802CEE5C 002CBD9C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CEE60 002CBDA0  4E 80 00 20 */	blr 
.endfn "getThrowupItemPosition__Q34Game10SnakeWhole3ObjFP10Vector3<f>"

.fn isOutTerritory__Q34Game10SnakeWhole3ObjFv, global
/* 802CEE64 002CBDA4  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802CEE68 002CBDA8  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802CEE6C 002CBDAC  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802CEE70 002CBDB0  EC 61 00 28 */	fsubs f3, f1, f0
/* 802CEE74 002CBDB4  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 802CEE78 002CBDB8  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802CEE7C 002CBDBC  EC 42 08 28 */	fsubs f2, f2, f1
/* 802CEE80 002CBDC0  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802CEE84 002CBDC4  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 802CEE88 002CBDC8  EC 00 00 32 */	fmuls f0, f0, f0
/* 802CEE8C 002CBDCC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802CEE90 002CBDD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CEE94 002CBDD4  7C 00 00 26 */	mfcr r0
/* 802CEE98 002CBDD8  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 802CEE9C 002CBDDC  4E 80 00 20 */	blr 
.endfn isOutTerritory__Q34Game10SnakeWhole3ObjFv

.fn isInHomeRange__Q34Game10SnakeWhole3ObjFv, global
/* 802CEEA0 002CBDE0  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802CEEA4 002CBDE4  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802CEEA8 002CBDE8  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802CEEAC 002CBDEC  EC 61 00 28 */	fsubs f3, f1, f0
/* 802CEEB0 002CBDF0  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 802CEEB4 002CBDF4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802CEEB8 002CBDF8  EC 42 08 28 */	fsubs f2, f2, f1
/* 802CEEBC 002CBDFC  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802CEEC0 002CBE00  C0 04 03 84 */	lfs f0, 0x384(r4)
/* 802CEEC4 002CBE04  EC 00 00 32 */	fmuls f0, f0, f0
/* 802CEEC8 002CBE08  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802CEECC 002CBE0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CEED0 002CBE10  7C 00 00 26 */	mfcr r0
/* 802CEED4 002CBE14  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802CEED8 002CBE18  4E 80 00 20 */	blr 
.endfn isInHomeRange__Q34Game10SnakeWhole3ObjFv

.fn "setJumpMove__Q34Game10SnakeWhole3ObjFR10Vector3<f>", global
/* 802CEEDC 002CBE1C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802CEEE0 002CBE20  7C 08 02 A6 */	mflr r0
/* 802CEEE4 002CBE24  90 01 00 54 */	stw r0, 0x54(r1)
/* 802CEEE8 002CBE28  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802CEEEC 002CBE2C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802CEEF0 002CBE30  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802CEEF4 002CBE34  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802CEEF8 002CBE38  7C 7E 1B 78 */	mr r30, r3
/* 802CEEFC 002CBE3C  7C 9F 23 78 */	mr r31, r4
/* 802CEF00 002CBE40  7F C4 F3 78 */	mr r4, r30
/* 802CEF04 002CBE44  38 61 00 14 */	addi r3, r1, 0x14
/* 802CEF08 002CBE48  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CEF0C 002CBE4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CEF10 002CBE50  7D 89 03 A6 */	mtctr r12
/* 802CEF14 002CBE54  4E 80 04 21 */	bctrl 
/* 802CEF18 002CBE58  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 802CEF1C 002CBE5C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802CEF20 002CBE60  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 802CEF24 002CBE64  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802CEF28 002CBE68  C0 3F 00 00 */	lfs f1, 0(r31)
/* 802CEF2C 002CBE6C  C0 1F 00 08 */	lfs f0, 8(r31)
/* 802CEF30 002CBE70  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 802CEF34 002CBE74  EC 21 28 28 */	fsubs f1, f1, f5
/* 802CEF38 002CBE78  EC 40 18 28 */	fsubs f2, f0, f3
/* 802CEF3C 002CBE7C  D0 A1 00 08 */	stfs f5, 8(r1)
/* 802CEF40 002CBE80  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 802CEF44 002CBE84  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 802CEF48 002CBE88  4B D6 61 C1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802CEF4C 002CBE8C  48 14 2C 85 */	bl roundAng__Ff
/* 802CEF50 002CBE90  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CEF54 002CBE94  FF E0 08 90 */	fmr f31, f1
/* 802CEF58 002CBE98  7F C3 F3 78 */	mr r3, r30
/* 802CEF5C 002CBE9C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802CEF60 002CBEA0  7D 89 03 A6 */	mtctr r12
/* 802CEF64 002CBEA4  4E 80 04 21 */	bctrl 
/* 802CEF68 002CBEA8  FC 40 08 90 */	fmr f2, f1
/* 802CEF6C 002CBEAC  FC 20 F8 90 */	fmr f1, f31
/* 802CEF70 002CBEB0  48 14 2C 8D */	bl angDist__Fff
/* 802CEF74 002CBEB4  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CEF78 002CBEB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CEF7C 002CBEBC  40 81 00 0C */	ble .L_802CEF88
/* 802CEF80 002CBEC0  FC 00 08 90 */	fmr f0, f1
/* 802CEF84 002CBEC4  48 00 00 08 */	b .L_802CEF8C
.L_802CEF88:
/* 802CEF88 002CBEC8  FC 00 08 50 */	fneg f0, f1
.L_802CEF8C:
/* 802CEF8C 002CBECC  C0 82 E5 30 */	lfs f4, lbl_8051C890@sda21(r2)
/* 802CEF90 002CBED0  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 802CEF94 002CBED4  40 81 00 5C */	ble .L_802CEFF0
/* 802CEF98 002CBED8  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CEF9C 002CBEDC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 802CEFA0 002CBEE0  40 82 00 0C */	bne .L_802CEFAC
/* 802CEFA4 002CBEE4  38 00 00 00 */	li r0, 0
/* 802CEFA8 002CBEE8  48 00 00 18 */	b .L_802CEFC0
.L_802CEFAC:
/* 802CEFAC 002CBEEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CEFB0 002CBEF0  40 81 00 0C */	ble .L_802CEFBC
/* 802CEFB4 002CBEF4  38 00 00 01 */	li r0, 1
/* 802CEFB8 002CBEF8  48 00 00 08 */	b .L_802CEFC0
.L_802CEFBC:
/* 802CEFBC 002CBEFC  38 00 FF FF */	li r0, -1
.L_802CEFC0:
/* 802CEFC0 002CBF00  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 802CEFC4 002CBF04  3C 00 43 30 */	lis r0, 0x4330
/* 802CEFC8 002CBF08  90 61 00 34 */	stw r3, 0x34(r1)
/* 802CEFCC 002CBF0C  C8 62 E5 40 */	lfd f3, lbl_8051C8A0@sda21(r2)
/* 802CEFD0 002CBF10  90 01 00 30 */	stw r0, 0x30(r1)
/* 802CEFD4 002CBF14  C0 02 E5 34 */	lfs f0, lbl_8051C894@sda21(r2)
/* 802CEFD8 002CBF18  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 802CEFDC 002CBF1C  EC 42 18 28 */	fsubs f2, f2, f3
/* 802CEFE0 002CBF20  EC 44 00 B2 */	fmuls f2, f4, f2
/* 802CEFE4 002CBF24  EC 02 00 24 */	fdivs f0, f2, f0
/* 802CEFE8 002CBF28  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 802CEFEC 002CBF2C  48 00 00 10 */	b .L_802CEFFC
.L_802CEFF0:
/* 802CEFF0 002CBF30  C0 02 E5 34 */	lfs f0, lbl_8051C894@sda21(r2)
/* 802CEFF4 002CBF34  EC 01 00 24 */	fdivs f0, f1, f0
/* 802CEFF8 002CBF38  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
.L_802CEFFC:
/* 802CEFFC 002CBF3C  FC 20 0A 10 */	fabs f1, f1
/* 802CF000 002CBF40  C0 02 E5 38 */	lfs f0, lbl_8051C898@sda21(r2)
/* 802CF004 002CBF44  FC 20 08 18 */	frsp f1, f1
/* 802CF008 002CBF48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CF00C 002CBF4C  4C 40 13 82 */	cror 2, 0, 2
/* 802CF010 002CBF50  40 82 01 20 */	bne .L_802CF130
/* 802CF014 002CBF54  C0 5F 00 00 */	lfs f2, 0(r31)
/* 802CF018 002CBF58  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802CF01C 002CBF5C  C0 22 E5 08 */	lfs f1, lbl_8051C868@sda21(r2)
/* 802CF020 002CBF60  EC 42 00 28 */	fsubs f2, f2, f0
/* 802CF024 002CBF64  C0 7F 00 08 */	lfs f3, 8(r31)
/* 802CF028 002CBF68  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802CF02C 002CBF6C  EC 81 00 72 */	fmuls f4, f1, f1
/* 802CF030 002CBF70  EC 63 00 28 */	fsubs f3, f3, f0
/* 802CF034 002CBF74  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802CF038 002CBF78  EC 02 00 B2 */	fmuls f0, f2, f2
/* 802CF03C 002CBF7C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802CF040 002CBF80  EC A3 00 F2 */	fmuls f5, f3, f3
/* 802CF044 002CBF84  EC 00 20 2A */	fadds f0, f0, f4
/* 802CF048 002CBF88  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 802CF04C 002CBF8C  EC 05 00 2A */	fadds f0, f5, f0
/* 802CF050 002CBF90  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802CF054 002CBF94  40 81 00 20 */	ble .L_802CF074
/* 802CF058 002CBF98  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 802CF05C 002CBF9C  EC 85 00 2A */	fadds f4, f5, f0
/* 802CF060 002CBFA0  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 802CF064 002CBFA4  40 81 00 14 */	ble .L_802CF078
/* 802CF068 002CBFA8  FC 00 20 34 */	frsqrte f0, f4
/* 802CF06C 002CBFAC  EC 80 01 32 */	fmuls f4, f0, f4
/* 802CF070 002CBFB0  48 00 00 08 */	b .L_802CF078
.L_802CF074:
/* 802CF074 002CBFB4  FC 80 08 90 */	fmr f4, f1
.L_802CF078:
/* 802CF078 002CBFB8  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF07C 002CBFBC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802CF080 002CBFC0  40 81 00 34 */	ble .L_802CF0B4
/* 802CF084 002CBFC4  C0 02 E5 10 */	lfs f0, lbl_8051C870@sda21(r2)
/* 802CF088 002CBFC8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802CF08C 002CBFCC  EC 60 20 24 */	fdivs f3, f0, f4
/* 802CF090 002CBFD0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802CF094 002CBFD4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802CF098 002CBFD8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802CF09C 002CBFDC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 802CF0A0 002CBFE0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802CF0A4 002CBFE4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802CF0A8 002CBFE8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802CF0AC 002CBFEC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802CF0B0 002CBFF0  48 00 00 08 */	b .L_802CF0B8
.L_802CF0B4:
/* 802CF0B4 002CBFF4  FC 80 00 90 */	fmr f4, f0
.L_802CF0B8:
/* 802CF0B8 002CBFF8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802CF0BC 002CBFFC  FC 20 20 90 */	fmr f1, f4
/* 802CF0C0 002CC000  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 802CF0C4 002CC004  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802CF0C8 002CC008  40 81 00 08 */	ble .L_802CF0D0
/* 802CF0CC 002CC00C  FC 20 00 90 */	fmr f1, f0
.L_802CF0D0:
/* 802CF0D0 002CC010  C0 02 E5 3C */	lfs f0, lbl_8051C89C@sda21(r2)
/* 802CF0D4 002CC014  7F C3 F3 78 */	mr r3, r30
/* 802CF0D8 002CC018  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802CF0DC 002CC01C  38 81 00 20 */	addi r4, r1, 0x20
/* 802CF0E0 002CC020  EC 60 00 72 */	fmuls f3, f0, f1
/* 802CF0E4 002CC024  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802CF0E8 002CC028  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802CF0EC 002CC02C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802CF0F0 002CC030  EC 21 00 F2 */	fmuls f1, f1, f3
/* 802CF0F4 002CC034  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802CF0F8 002CC038  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802CF0FC 002CC03C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802CF100 002CC040  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802CF104 002CC044  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CF108 002CC048  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802CF10C 002CC04C  7D 89 03 A6 */	mtctr r12
/* 802CF110 002CC050  4E 80 04 21 */	bctrl 
/* 802CF114 002CC054  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 802CF118 002CC058  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802CF11C 002CC05C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802CF120 002CC060  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 802CF124 002CC064  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802CF128 002CC068  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 802CF12C 002CC06C  48 00 00 3C */	b .L_802CF168
.L_802CF130:
/* 802CF130 002CC070  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CF134 002CC074  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 802CF138 002CC078  7F C3 F3 78 */	mr r3, r30
/* 802CF13C 002CC07C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802CF140 002CC080  38 84 41 E4 */	addi r4, r4, "zero__10Vector3<f>"@l
/* 802CF144 002CC084  7D 89 03 A6 */	mtctr r12
/* 802CF148 002CC088  4E 80 04 21 */	bctrl 
/* 802CF14C 002CC08C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 802CF150 002CC090  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 802CF154 002CC094  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802CF158 002CC098  C0 03 00 04 */	lfs f0, 4(r3)
/* 802CF15C 002CC09C  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 802CF160 002CC0A0  C0 03 00 08 */	lfs f0, 8(r3)
/* 802CF164 002CC0A4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_802CF168:
/* 802CF168 002CC0A8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802CF16C 002CC0AC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802CF170 002CC0B0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802CF174 002CC0B4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802CF178 002CC0B8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802CF17C 002CC0BC  7C 08 03 A6 */	mtlr r0
/* 802CF180 002CC0C0  38 21 00 50 */	addi r1, r1, 0x50
/* 802CF184 002CC0C4  4E 80 00 20 */	blr 
.endfn "setJumpMove__Q34Game10SnakeWhole3ObjFR10Vector3<f>"

.fn updateFace__Q34Game10SnakeWhole3ObjFv, global
/* 802CF188 002CC0C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CF18C 002CC0CC  7C 08 02 A6 */	mflr r0
/* 802CF190 002CC0D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CF194 002CC0D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CF198 002CC0D8  7C 7F 1B 78 */	mr r31, r3
/* 802CF19C 002CC0DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CF1A0 002CC0E0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802CF1A4 002CC0E4  7D 89 03 A6 */	mtctr r12
/* 802CF1A8 002CC0E8  4E 80 04 21 */	bctrl 
/* 802CF1AC 002CC0EC  C0 5F 02 C8 */	lfs f2, 0x2c8(r31)
/* 802CF1B0 002CC0F0  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF1B4 002CC0F4  EC 21 10 2A */	fadds f1, f1, f2
/* 802CF1B8 002CC0F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CF1BC 002CC0FC  40 80 00 10 */	bge .L_802CF1CC
/* 802CF1C0 002CC100  C0 02 E5 48 */	lfs f0, lbl_8051C8A8@sda21(r2)
/* 802CF1C4 002CC104  EC 20 08 2A */	fadds f1, f0, f1
/* 802CF1C8 002CC108  48 00 00 18 */	b .L_802CF1E0
.L_802CF1CC:
/* 802CF1CC 002CC10C  C0 02 E5 48 */	lfs f0, lbl_8051C8A8@sda21(r2)
/* 802CF1D0 002CC110  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CF1D4 002CC114  4C 41 13 82 */	cror 2, 1, 2
/* 802CF1D8 002CC118  40 82 00 08 */	bne .L_802CF1E0
/* 802CF1DC 002CC11C  EC 21 00 28 */	fsubs f1, f1, f0
.L_802CF1E0:
/* 802CF1E0 002CC120  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802CF1E4 002CC124  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802CF1E8 002CC128  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802CF1EC 002CC12C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CF1F0 002CC130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CF1F4 002CC134  7C 08 03 A6 */	mtlr r0
/* 802CF1F8 002CC138  38 21 00 10 */	addi r1, r1, 0x10
/* 802CF1FC 002CC13C  4E 80 00 20 */	blr 
.endfn updateFace__Q34Game10SnakeWhole3ObjFv

.fn updateConstraint__Q34Game10SnakeWhole3ObjFv, global
/* 802CF200 002CC140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CF204 002CC144  7C 08 02 A6 */	mflr r0
/* 802CF208 002CC148  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CF20C 002CC14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CF210 002CC150  7C 7F 1B 78 */	mr r31, r3
/* 802CF214 002CC154  4B E3 81 E1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802CF218 002CC158  2C 03 00 05 */	cmpwi r3, 5
/* 802CF21C 002CC15C  41 80 00 48 */	blt .L_802CF264
/* 802CF220 002CC160  88 1F 02 C1 */	lbz r0, 0x2c1(r31)
/* 802CF224 002CC164  28 00 00 00 */	cmplwi r0, 0
/* 802CF228 002CC168  40 82 00 3C */	bne .L_802CF264
/* 802CF22C 002CC16C  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 802CF230 002CC170  28 00 00 00 */	cmplwi r0, 0
/* 802CF234 002CC174  41 82 00 30 */	beq .L_802CF264
/* 802CF238 002CC178  C0 3F 00 D0 */	lfs f1, 0xd0(r31)
/* 802CF23C 002CC17C  C0 02 E5 4C */	lfs f0, lbl_8051C8AC@sda21(r2)
/* 802CF240 002CC180  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CF244 002CC184  40 81 00 14 */	ble .L_802CF258
/* 802CF248 002CC188  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CF24C 002CC18C  60 00 04 00 */	ori r0, r0, 0x400
/* 802CF250 002CC190  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CF254 002CC194  48 00 00 18 */	b .L_802CF26C
.L_802CF258:
/* 802CF258 002CC198  7F E3 FB 78 */	mr r3, r31
/* 802CF25C 002CC19C  4B E3 85 11 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 802CF260 002CC1A0  48 00 00 0C */	b .L_802CF26C
.L_802CF264:
/* 802CF264 002CC1A4  7F E3 FB 78 */	mr r3, r31
/* 802CF268 002CC1A8  4B E3 85 05 */	bl constraintOff__Q24Game9EnemyBaseFv
.L_802CF26C:
/* 802CF26C 002CC1AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CF270 002CC1B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CF274 002CC1B4  7C 08 03 A6 */	mtlr r0
/* 802CF278 002CC1B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802CF27C 002CC1BC  4E 80 00 20 */	blr 
.endfn updateConstraint__Q34Game10SnakeWhole3ObjFv

.fn appearNearByTarget__Q34Game10SnakeWhole3ObjFPQ24Game8Creature, global
/* 802CF280 002CC1C0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802CF284 002CC1C4  7C 08 02 A6 */	mflr r0
/* 802CF288 002CC1C8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802CF28C 002CC1CC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802CF290 002CC1D0  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802CF294 002CC1D4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802CF298 002CC1D8  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802CF29C 002CC1DC  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802CF2A0 002CC1E0  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802CF2A4 002CC1E4  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802CF2A8 002CC1E8  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802CF2AC 002CC1EC  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 802CF2B0 002CC1F0  93 C1 00 98 */	stw r30, 0x98(r1)
/* 802CF2B4 002CC1F4  81 84 00 00 */	lwz r12, 0(r4)
/* 802CF2B8 002CC1F8  7C 7E 1B 78 */	mr r30, r3
/* 802CF2BC 002CC1FC  38 61 00 08 */	addi r3, r1, 8
/* 802CF2C0 002CC200  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CF2C4 002CC204  7D 89 03 A6 */	mtctr r12
/* 802CF2C8 002CC208  4E 80 04 21 */	bctrl 
/* 802CF2CC 002CC20C  C3 E1 00 08 */	lfs f31, 8(r1)
/* 802CF2D0 002CC210  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 802CF2D4 002CC214  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 802CF2D8 002CC218  4B DF A2 C9 */	bl rand
/* 802CF2DC 002CC21C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802CF2E0 002CC220  3C 00 43 30 */	lis r0, 0x4330
/* 802CF2E4 002CC224  90 61 00 7C */	stw r3, 0x7c(r1)
/* 802CF2E8 002CC228  C8 62 E5 40 */	lfd f3, lbl_8051C8A0@sda21(r2)
/* 802CF2EC 002CC22C  90 01 00 78 */	stw r0, 0x78(r1)
/* 802CF2F0 002CC230  C0 42 E5 48 */	lfs f2, lbl_8051C8A8@sda21(r2)
/* 802CF2F4 002CC234  C8 01 00 78 */	lfd f0, 0x78(r1)
/* 802CF2F8 002CC238  C0 22 E5 50 */	lfs f1, lbl_8051C8B0@sda21(r2)
/* 802CF2FC 002CC23C  EC 60 18 28 */	fsubs f3, f0, f3
/* 802CF300 002CC240  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF304 002CC244  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802CF308 002CC248  EC 62 08 24 */	fdivs f3, f2, f1
/* 802CF30C 002CC24C  FF 80 18 90 */	fmr f28, f3
/* 802CF310 002CC250  FC 20 18 90 */	fmr f1, f3
/* 802CF314 002CC254  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802CF318 002CC258  40 80 00 08 */	bge .L_802CF320
/* 802CF31C 002CC25C  FC 20 18 50 */	fneg f1, f3
.L_802CF320:
/* 802CF320 002CC260  C0 42 E5 54 */	lfs f2, lbl_8051C8B4@sda21(r2)
/* 802CF324 002CC264  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CF328 002CC268  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF32C 002CC26C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802CF330 002CC270  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802CF334 002CC274  3B E3 00 04 */	addi r31, r3, 4
/* 802CF338 002CC278  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802CF33C 002CC27C  FC 00 08 1E */	fctiwz f0, f1
/* 802CF340 002CC280  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 802CF344 002CC284  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802CF348 002CC288  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF34C 002CC28C  7C 1F 04 2E */	lfsx f0, r31, r0
/* 802CF350 002CC290  FC A0 00 50 */	fneg f5, f0
/* 802CF354 002CC294  40 80 00 28 */	bge .L_802CF37C
/* 802CF358 002CC298  C0 02 E5 58 */	lfs f0, lbl_8051C8B8@sda21(r2)
/* 802CF35C 002CC29C  EC 03 00 32 */	fmuls f0, f3, f0
/* 802CF360 002CC2A0  FC 00 00 1E */	fctiwz f0, f0
/* 802CF364 002CC2A4  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 802CF368 002CC2A8  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 802CF36C 002CC2AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF370 002CC2B0  7C 03 04 2E */	lfsx f0, r3, r0
/* 802CF374 002CC2B4  FC 00 00 50 */	fneg f0, f0
/* 802CF378 002CC2B8  48 00 00 1C */	b .L_802CF394
.L_802CF37C:
/* 802CF37C 002CC2BC  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802CF380 002CC2C0  FC 00 00 1E */	fctiwz f0, f0
/* 802CF384 002CC2C4  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 802CF388 002CC2C8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802CF38C 002CC2CC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF390 002CC2D0  7C 03 04 2E */	lfsx f0, r3, r0
.L_802CF394:
/* 802CF394 002CC2D4  FC 60 00 50 */	fneg f3, f0
/* 802CF398 002CC2D8  C0 42 E5 08 */	lfs f2, lbl_8051C868@sda21(r2)
/* 802CF39C 002CC2DC  C0 22 E5 5C */	lfs f1, lbl_8051C8BC@sda21(r2)
/* 802CF3A0 002CC2E0  FC 00 28 18 */	frsp f0, f5
/* 802CF3A4 002CC2E4  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802CF3A8 002CC2E8  FC 80 18 18 */	frsp f4, f3
/* 802CF3AC 002CC2EC  EC 42 00 72 */	fmuls f2, f2, f1
/* 802CF3B0 002CC2F0  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 802CF3B4 002CC2F4  EC 60 00 72 */	fmuls f3, f0, f1
/* 802CF3B8 002CC2F8  EC 84 00 72 */	fmuls f4, f4, f1
/* 802CF3BC 002CC2FC  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 802CF3C0 002CC300  EC 22 F0 2A */	fadds f1, f2, f30
/* 802CF3C4 002CC304  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802CF3C8 002CC308  EC 03 E8 2A */	fadds f0, f3, f29
/* 802CF3CC 002CC30C  EC 44 F8 2A */	fadds f2, f4, f31
/* 802CF3D0 002CC310  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 802CF3D4 002CC314  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802CF3D8 002CC318  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802CF3DC 002CC31C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802CF3E0 002CC320  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802CF3E4 002CC324  C0 7E 01 A0 */	lfs f3, 0x1a0(r30)
/* 802CF3E8 002CC328  C0 9E 01 98 */	lfs f4, 0x198(r30)
/* 802CF3EC 002CC32C  EC 23 00 28 */	fsubs f1, f3, f0
/* 802CF3F0 002CC330  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802CF3F4 002CC334  EC 44 10 28 */	fsubs f2, f4, f2
/* 802CF3F8 002CC338  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802CF3FC 002CC33C  EC 21 00 72 */	fmuls f1, f1, f1
/* 802CF400 002CC340  EC 00 00 32 */	fmuls f0, f0, f0
/* 802CF404 002CC344  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802CF408 002CC348  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CF40C 002CC34C  40 81 01 34 */	ble .L_802CF540
/* 802CF410 002CC350  EC 3F 20 28 */	fsubs f1, f31, f4
/* 802CF414 002CC354  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802CF418 002CC358  EC 5D 18 28 */	fsubs f2, f29, f3
/* 802CF41C 002CC35C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802CF420 002CC360  4B D6 5C E9 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802CF424 002CC364  FF 80 08 90 */	fmr f28, f1
/* 802CF428 002CC368  4B DF A1 79 */	bl rand
/* 802CF42C 002CC36C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802CF430 002CC370  3C 00 43 30 */	lis r0, 0x4330
/* 802CF434 002CC374  90 61 00 94 */	stw r3, 0x94(r1)
/* 802CF438 002CC378  C8 22 E5 40 */	lfd f1, lbl_8051C8A0@sda21(r2)
/* 802CF43C 002CC37C  90 01 00 90 */	stw r0, 0x90(r1)
/* 802CF440 002CC380  C0 62 E5 60 */	lfs f3, lbl_8051C8C0@sda21(r2)
/* 802CF444 002CC384  C8 01 00 90 */	lfd f0, 0x90(r1)
/* 802CF448 002CC388  C0 42 E5 50 */	lfs f2, lbl_8051C8B0@sda21(r2)
/* 802CF44C 002CC38C  EC 80 08 28 */	fsubs f4, f0, f1
/* 802CF450 002CC390  C0 22 E5 30 */	lfs f1, lbl_8051C890@sda21(r2)
/* 802CF454 002CC394  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF458 002CC398  EC 63 01 32 */	fmuls f3, f3, f4
/* 802CF45C 002CC39C  EC 43 10 24 */	fdivs f2, f3, f2
/* 802CF460 002CC3A0  EC 22 08 28 */	fsubs f1, f2, f1
/* 802CF464 002CC3A4  EF 9C 08 2A */	fadds f28, f28, f1
/* 802CF468 002CC3A8  FC 20 E0 90 */	fmr f1, f28
/* 802CF46C 002CC3AC  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 802CF470 002CC3B0  40 80 00 08 */	bge .L_802CF478
/* 802CF474 002CC3B4  FC 20 E0 50 */	fneg f1, f28
.L_802CF478:
/* 802CF478 002CC3B8  C0 42 E5 54 */	lfs f2, lbl_8051C8B4@sda21(r2)
/* 802CF47C 002CC3BC  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF480 002CC3C0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802CF484 002CC3C4  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 802CF488 002CC3C8  FC 00 08 1E */	fctiwz f0, f1
/* 802CF48C 002CC3CC  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 802CF490 002CC3D0  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 802CF494 002CC3D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF498 002CC3D8  7C 1F 04 2E */	lfsx f0, r31, r0
/* 802CF49C 002CC3DC  FC A0 00 50 */	fneg f5, f0
/* 802CF4A0 002CC3E0  40 80 00 30 */	bge .L_802CF4D0
/* 802CF4A4 002CC3E4  C0 02 E5 58 */	lfs f0, lbl_8051C8B8@sda21(r2)
/* 802CF4A8 002CC3E8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CF4AC 002CC3EC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802CF4B0 002CC3F0  EC 1C 00 32 */	fmuls f0, f28, f0
/* 802CF4B4 002CC3F4  FC 00 00 1E */	fctiwz f0, f0
/* 802CF4B8 002CC3F8  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 802CF4BC 002CC3FC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802CF4C0 002CC400  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF4C4 002CC404  7C 03 04 2E */	lfsx f0, r3, r0
/* 802CF4C8 002CC408  FC 00 00 50 */	fneg f0, f0
/* 802CF4CC 002CC40C  48 00 00 24 */	b .L_802CF4F0
.L_802CF4D0:
/* 802CF4D0 002CC410  EC 1C 00 B2 */	fmuls f0, f28, f2
/* 802CF4D4 002CC414  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CF4D8 002CC418  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802CF4DC 002CC41C  FC 00 00 1E */	fctiwz f0, f0
/* 802CF4E0 002CC420  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 802CF4E4 002CC424  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 802CF4E8 002CC428  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF4EC 002CC42C  7C 03 04 2E */	lfsx f0, r3, r0
.L_802CF4F0:
/* 802CF4F0 002CC430  FC 60 00 50 */	fneg f3, f0
/* 802CF4F4 002CC434  C0 42 E5 08 */	lfs f2, lbl_8051C868@sda21(r2)
/* 802CF4F8 002CC438  C0 22 E5 5C */	lfs f1, lbl_8051C8BC@sda21(r2)
/* 802CF4FC 002CC43C  FC 00 28 18 */	frsp f0, f5
/* 802CF500 002CC440  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802CF504 002CC444  FC 80 18 18 */	frsp f4, f3
/* 802CF508 002CC448  EC 42 00 72 */	fmuls f2, f2, f1
/* 802CF50C 002CC44C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 802CF510 002CC450  EC 60 00 72 */	fmuls f3, f0, f1
/* 802CF514 002CC454  EC 84 00 72 */	fmuls f4, f4, f1
/* 802CF518 002CC458  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 802CF51C 002CC45C  EC 22 F0 2A */	fadds f1, f2, f30
/* 802CF520 002CC460  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802CF524 002CC464  EC 03 E8 2A */	fadds f0, f3, f29
/* 802CF528 002CC468  EC 44 F8 2A */	fadds f2, f4, f31
/* 802CF52C 002CC46C  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 802CF530 002CC470  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802CF534 002CC474  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802CF538 002CC478  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802CF53C 002CC47C  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_802CF540:
/* 802CF540 002CC480  38 00 00 01 */	li r0, 1
/* 802CF544 002CC484  38 A0 00 00 */	li r5, 0
/* 802CF548 002CC488  C0 82 E5 08 */	lfs f4, lbl_8051C868@sda21(r2)
/* 802CF54C 002CC48C  38 81 00 4C */	addi r4, r1, 0x4c
/* 802CF550 002CC490  98 01 00 58 */	stb r0, 0x58(r1)
/* 802CF554 002CC494  C0 C2 E5 64 */	lfs f6, lbl_8051C8C4@sda21(r2)
/* 802CF558 002CC498  C0 A2 E5 68 */	lfs f5, lbl_8051C8C8@sda21(r2)
/* 802CF55C 002CC49C  C0 62 E5 10 */	lfs f3, lbl_8051C870@sda21(r2)
/* 802CF560 002CC4A0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802CF564 002CC4A4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802CF568 002CC4A8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802CF56C 002CC4AC  90 A1 00 60 */	stw r5, 0x60(r1)
/* 802CF570 002CC4B0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802CF574 002CC4B4  D0 C1 00 64 */	stfs f6, 0x64(r1)
/* 802CF578 002CC4B8  D0 A1 00 68 */	stfs f5, 0x68(r1)
/* 802CF57C 002CC4BC  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 802CF580 002CC4C0  D0 81 00 6C */	stfs f4, 0x6c(r1)
/* 802CF584 002CC4C4  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 802CF588 002CC4C8  D0 81 00 74 */	stfs f4, 0x74(r1)
/* 802CF58C 002CC4CC  98 A1 00 59 */	stb r5, 0x59(r1)
/* 802CF590 002CC4D0  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 802CF594 002CC4D4  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 802CF598 002CC4D8  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 802CF59C 002CC4DC  98 A1 00 58 */	stb r5, 0x58(r1)
/* 802CF5A0 002CC4E0  81 83 00 04 */	lwz r12, 4(r3)
/* 802CF5A4 002CC4E4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802CF5A8 002CC4E8  7D 89 03 A6 */	mtctr r12
/* 802CF5AC 002CC4EC  4E 80 04 21 */	bctrl 
/* 802CF5B0 002CC4F0  80 01 00 60 */	lwz r0, 0x60(r1)
/* 802CF5B4 002CC4F4  28 00 00 00 */	cmplwi r0, 0
/* 802CF5B8 002CC4F8  41 82 00 10 */	beq .L_802CF5C8
/* 802CF5BC 002CC4FC  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 802CF5C0 002CC500  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802CF5C4 002CC504  48 00 01 90 */	b .L_802CF754
.L_802CF5C8:
/* 802CF5C8 002CC508  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 802CF5CC 002CC50C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802CF5D0 002CC510  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 802CF5D4 002CC514  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802CF5D8 002CC518  EC 3F 08 28 */	fsubs f1, f31, f1
/* 802CF5DC 002CC51C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802CF5E0 002CC520  4B D6 5B 29 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802CF5E4 002CC524  FC 40 08 90 */	fmr f2, f1
/* 802CF5E8 002CC528  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF5EC 002CC52C  FF 80 08 90 */	fmr f28, f1
/* 802CF5F0 002CC530  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802CF5F4 002CC534  40 80 00 08 */	bge .L_802CF5FC
/* 802CF5F8 002CC538  FC 40 10 50 */	fneg f2, f2
.L_802CF5FC:
/* 802CF5FC 002CC53C  C0 62 E5 54 */	lfs f3, lbl_8051C8B4@sda21(r2)
/* 802CF600 002CC540  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF604 002CC544  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802CF608 002CC548  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CF60C 002CC54C  FC 00 10 1E */	fctiwz f0, f2
/* 802CF610 002CC550  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 802CF614 002CC554  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802CF618 002CC558  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF61C 002CC55C  7C 1F 04 2E */	lfsx f0, r31, r0
/* 802CF620 002CC560  FC A0 00 50 */	fneg f5, f0
/* 802CF624 002CC564  40 80 00 30 */	bge .L_802CF654
/* 802CF628 002CC568  C0 02 E5 58 */	lfs f0, lbl_8051C8B8@sda21(r2)
/* 802CF62C 002CC56C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CF630 002CC570  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802CF634 002CC574  EC 01 00 32 */	fmuls f0, f1, f0
/* 802CF638 002CC578  FC 00 00 1E */	fctiwz f0, f0
/* 802CF63C 002CC57C  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 802CF640 002CC580  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 802CF644 002CC584  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF648 002CC588  7C 03 04 2E */	lfsx f0, r3, r0
/* 802CF64C 002CC58C  FC 00 00 50 */	fneg f0, f0
/* 802CF650 002CC590  48 00 00 24 */	b .L_802CF674
.L_802CF654:
/* 802CF654 002CC594  EC 01 00 F2 */	fmuls f0, f1, f3
/* 802CF658 002CC598  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CF65C 002CC59C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802CF660 002CC5A0  FC 00 00 1E */	fctiwz f0, f0
/* 802CF664 002CC5A4  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 802CF668 002CC5A8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802CF66C 002CC5AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF670 002CC5B0  7C 03 04 2E */	lfsx f0, r3, r0
.L_802CF674:
/* 802CF674 002CC5B4  FC 80 00 50 */	fneg f4, f0
/* 802CF678 002CC5B8  C1 02 E5 08 */	lfs f8, lbl_8051C868@sda21(r2)
/* 802CF67C 002CC5BC  38 A0 00 00 */	li r5, 0
/* 802CF680 002CC5C0  C0 22 E5 5C */	lfs f1, lbl_8051C8BC@sda21(r2)
/* 802CF684 002CC5C4  FC 00 28 18 */	frsp f0, f5
/* 802CF688 002CC5C8  38 00 00 01 */	li r0, 1
/* 802CF68C 002CC5CC  FC 60 20 18 */	frsp f3, f4
/* 802CF690 002CC5D0  98 01 00 2C */	stb r0, 0x2c(r1)
/* 802CF694 002CC5D4  EC E8 00 72 */	fmuls f7, f8, f1
/* 802CF698 002CC5D8  C0 42 E5 64 */	lfs f2, lbl_8051C8C4@sda21(r2)
/* 802CF69C 002CC5DC  EC C0 00 72 */	fmuls f6, f0, f1
/* 802CF6A0 002CC5E0  D1 01 00 18 */	stfs f8, 0x18(r1)
/* 802CF6A4 002CC5E4  EC 03 00 72 */	fmuls f0, f3, f1
/* 802CF6A8 002CC5E8  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 802CF6AC 002CC5EC  EC 87 F0 2A */	fadds f4, f7, f30
/* 802CF6B0 002CC5F0  C0 22 E5 68 */	lfs f1, lbl_8051C8C8@sda21(r2)
/* 802CF6B4 002CC5F4  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 802CF6B8 002CC5F8  EC 66 E8 2A */	fadds f3, f6, f29
/* 802CF6BC 002CC5FC  EC A0 F8 2A */	fadds f5, f0, f31
/* 802CF6C0 002CC600  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802CF6C4 002CC604  C0 02 E5 10 */	lfs f0, lbl_8051C870@sda21(r2)
/* 802CF6C8 002CC608  38 81 00 20 */	addi r4, r1, 0x20
/* 802CF6CC 002CC60C  D0 E1 00 18 */	stfs f7, 0x18(r1)
/* 802CF6D0 002CC610  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802CF6D4 002CC614  D0 C1 00 1C */	stfs f6, 0x1c(r1)
/* 802CF6D8 002CC618  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802CF6DC 002CC61C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802CF6E0 002CC620  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802CF6E4 002CC624  90 A1 00 34 */	stw r5, 0x34(r1)
/* 802CF6E8 002CC628  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802CF6EC 002CC62C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802CF6F0 002CC630  90 A1 00 30 */	stw r5, 0x30(r1)
/* 802CF6F4 002CC634  D1 01 00 40 */	stfs f8, 0x40(r1)
/* 802CF6F8 002CC638  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 802CF6FC 002CC63C  D1 01 00 48 */	stfs f8, 0x48(r1)
/* 802CF700 002CC640  98 A1 00 2D */	stb r5, 0x2d(r1)
/* 802CF704 002CC644  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 802CF708 002CC648  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 802CF70C 002CC64C  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 802CF710 002CC650  98 A1 00 2C */	stb r5, 0x2c(r1)
/* 802CF714 002CC654  81 83 00 04 */	lwz r12, 4(r3)
/* 802CF718 002CC658  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802CF71C 002CC65C  7D 89 03 A6 */	mtctr r12
/* 802CF720 002CC660  4E 80 04 21 */	bctrl 
/* 802CF724 002CC664  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802CF728 002CC668  28 00 00 00 */	cmplwi r0, 0
/* 802CF72C 002CC66C  41 82 00 10 */	beq .L_802CF73C
/* 802CF730 002CC670  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802CF734 002CC674  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802CF738 002CC678  48 00 00 1C */	b .L_802CF754
.L_802CF73C:
/* 802CF73C 002CC67C  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 802CF740 002CC680  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802CF744 002CC684  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 802CF748 002CC688  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802CF74C 002CC68C  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 802CF750 002CC690  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_802CF754:
/* 802CF754 002CC694  7F C3 F3 78 */	mr r3, r30
/* 802CF758 002CC698  38 81 00 14 */	addi r4, r1, 0x14
/* 802CF75C 002CC69C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CF760 002CC6A0  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802CF764 002CC6A4  7D 89 03 A6 */	mtctr r12
/* 802CF768 002CC6A8  4E 80 04 21 */	bctrl 
/* 802CF76C 002CC6AC  D3 9E 01 FC */	stfs f28, 0x1fc(r30)
/* 802CF770 002CC6B0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 802CF774 002CC6B4  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 802CF778 002CC6B8  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802CF77C 002CC6BC  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802CF780 002CC6C0  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802CF784 002CC6C4  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802CF788 002CC6C8  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802CF78C 002CC6CC  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802CF790 002CC6D0  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802CF794 002CC6D4  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802CF798 002CC6D8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802CF79C 002CC6DC  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802CF7A0 002CC6E0  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802CF7A4 002CC6E4  7C 08 03 A6 */	mtlr r0
/* 802CF7A8 002CC6E8  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802CF7AC 002CC6EC  4E 80 00 20 */	blr 
.endfn appearNearByTarget__Q34Game10SnakeWhole3ObjFPQ24Game8Creature

.fn setAttackPosition__Q34Game10SnakeWhole3ObjFv, global
/* 802CF7B0 002CC6F0  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802CF7B4 002CC6F4  7C 08 02 A6 */	mflr r0
/* 802CF7B8 002CC6F8  90 01 00 94 */	stw r0, 0x94(r1)
/* 802CF7BC 002CC6FC  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 802CF7C0 002CC700  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 802CF7C4 002CC704  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 802CF7C8 002CC708  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 802CF7CC 002CC70C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 802CF7D0 002CC710  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 802CF7D4 002CC714  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 802CF7D8 002CC718  7C 7F 1B 78 */	mr r31, r3
/* 802CF7DC 002CC71C  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF7E0 002CC720  C0 63 01 FC */	lfs f3, 0x1fc(r3)
/* 802CF7E4 002CC724  FC 20 18 90 */	fmr f1, f3
/* 802CF7E8 002CC728  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802CF7EC 002CC72C  40 80 00 08 */	bge .L_802CF7F4
/* 802CF7F0 002CC730  FC 20 18 50 */	fneg f1, f3
.L_802CF7F4:
/* 802CF7F4 002CC734  C0 42 E5 54 */	lfs f2, lbl_8051C8B4@sda21(r2)
/* 802CF7F8 002CC738  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CF7FC 002CC73C  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CF800 002CC740  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802CF804 002CC744  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802CF808 002CC748  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802CF80C 002CC74C  FC 00 08 1E */	fctiwz f0, f1
/* 802CF810 002CC750  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802CF814 002CC754  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802CF818 002CC758  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF81C 002CC75C  7C 64 02 14 */	add r3, r4, r0
/* 802CF820 002CC760  C3 E3 00 04 */	lfs f31, 4(r3)
/* 802CF824 002CC764  40 80 00 28 */	bge .L_802CF84C
/* 802CF828 002CC768  C0 02 E5 58 */	lfs f0, lbl_8051C8B8@sda21(r2)
/* 802CF82C 002CC76C  EC 03 00 32 */	fmuls f0, f3, f0
/* 802CF830 002CC770  FC 00 00 1E */	fctiwz f0, f0
/* 802CF834 002CC774  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802CF838 002CC778  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802CF83C 002CC77C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF840 002CC780  7C 04 04 2E */	lfsx f0, r4, r0
/* 802CF844 002CC784  FF C0 00 50 */	fneg f30, f0
/* 802CF848 002CC788  48 00 00 1C */	b .L_802CF864
.L_802CF84C:
/* 802CF84C 002CC78C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802CF850 002CC790  FC 00 00 1E */	fctiwz f0, f0
/* 802CF854 002CC794  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 802CF858 002CC798  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802CF85C 002CC79C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CF860 002CC7A0  7F C4 04 2E */	lfsx f30, r4, r0
.L_802CF864:
/* 802CF864 002CC7A4  3C 80 80 49 */	lis r4, lbl_8048BB78@ha
/* 802CF868 002CC7A8  85 84 BB 78 */	lwzu r12, lbl_8048BB78@l(r4)
/* 802CF86C 002CC7AC  3C 60 80 49 */	lis r3, lbl_8048BB8C@ha
/* 802CF870 002CC7B0  FF A0 F8 50 */	fneg f29, f31
/* 802CF874 002CC7B4  38 E3 BB 8C */	addi r7, r3, lbl_8048BB8C@l
/* 802CF878 002CC7B8  81 64 00 04 */	lwz r11, 4(r4)
/* 802CF87C 002CC7BC  81 44 00 08 */	lwz r10, 8(r4)
/* 802CF880 002CC7C0  7F FC FB 78 */	mr r28, r31
/* 802CF884 002CC7C4  81 24 00 0C */	lwz r9, 0xc(r4)
/* 802CF888 002CC7C8  81 04 00 10 */	lwz r8, 0x10(r4)
/* 802CF88C 002CC7CC  3B C1 00 1C */	addi r30, r1, 0x1c
/* 802CF890 002CC7D0  80 C7 00 00 */	lwz r6, 0(r7)
/* 802CF894 002CC7D4  3B A1 00 08 */	addi r29, r1, 8
/* 802CF898 002CC7D8  80 A7 00 04 */	lwz r5, 4(r7)
/* 802CF89C 002CC7DC  3B 60 00 00 */	li r27, 0
/* 802CF8A0 002CC7E0  80 87 00 08 */	lwz r4, 8(r7)
/* 802CF8A4 002CC7E4  80 67 00 0C */	lwz r3, 0xc(r7)
/* 802CF8A8 002CC7E8  80 07 00 10 */	lwz r0, 0x10(r7)
/* 802CF8AC 002CC7EC  91 81 00 1C */	stw r12, 0x1c(r1)
/* 802CF8B0 002CC7F0  91 61 00 20 */	stw r11, 0x20(r1)
/* 802CF8B4 002CC7F4  91 41 00 24 */	stw r10, 0x24(r1)
/* 802CF8B8 002CC7F8  91 21 00 28 */	stw r9, 0x28(r1)
/* 802CF8BC 002CC7FC  91 01 00 2C */	stw r8, 0x2c(r1)
/* 802CF8C0 002CC800  90 C1 00 08 */	stw r6, 8(r1)
/* 802CF8C4 002CC804  90 A1 00 0C */	stw r5, 0xc(r1)
/* 802CF8C8 002CC808  90 81 00 10 */	stw r4, 0x10(r1)
/* 802CF8CC 002CC80C  90 61 00 14 */	stw r3, 0x14(r1)
/* 802CF8D0 002CC810  90 01 00 18 */	stw r0, 0x18(r1)
.L_802CF8D4:
/* 802CF8D4 002CC814  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802CF8D8 002CC818  38 9C 02 E8 */	addi r4, r28, 0x2e8
/* 802CF8DC 002CC81C  C0 3E 00 00 */	lfs f1, 0(r30)
/* 802CF8E0 002CC820  D0 1C 02 E8 */	stfs f0, 0x2e8(r28)
/* 802CF8E4 002CC824  C0 5D 00 00 */	lfs f2, 0(r29)
/* 802CF8E8 002CC828  EC 7E 00 72 */	fmuls f3, f30, f1
/* 802CF8EC 002CC82C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802CF8F0 002CC830  EC BF 00 72 */	fmuls f5, f31, f1
/* 802CF8F4 002CC834  C0 82 E5 08 */	lfs f4, lbl_8051C868@sda21(r2)
/* 802CF8F8 002CC838  EC DD 00 B2 */	fmuls f6, f29, f2
/* 802CF8FC 002CC83C  D0 1C 02 EC */	stfs f0, 0x2ec(r28)
/* 802CF900 002CC840  FC E0 20 90 */	fmr f7, f4
/* 802CF904 002CC844  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802CF908 002CC848  EC 84 00 72 */	fmuls f4, f4, f1
/* 802CF90C 002CC84C  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 802CF910 002CC850  D0 1C 02 F0 */	stfs f0, 0x2f0(r28)
/* 802CF914 002CC854  EC E7 00 B2 */	fmuls f7, f7, f2
/* 802CF918 002CC858  C0 1C 02 E8 */	lfs f0, 0x2e8(r28)
/* 802CF91C 002CC85C  EC 00 18 2A */	fadds f0, f0, f3
/* 802CF920 002CC860  D0 1C 02 E8 */	stfs f0, 0x2e8(r28)
/* 802CF924 002CC864  C0 1C 02 EC */	lfs f0, 0x2ec(r28)
/* 802CF928 002CC868  EC 00 20 2A */	fadds f0, f0, f4
/* 802CF92C 002CC86C  D0 1C 02 EC */	stfs f0, 0x2ec(r28)
/* 802CF930 002CC870  C0 1C 02 F0 */	lfs f0, 0x2f0(r28)
/* 802CF934 002CC874  EC 00 28 2A */	fadds f0, f0, f5
/* 802CF938 002CC878  D0 1C 02 F0 */	stfs f0, 0x2f0(r28)
/* 802CF93C 002CC87C  C0 1C 02 E8 */	lfs f0, 0x2e8(r28)
/* 802CF940 002CC880  EC 00 30 2A */	fadds f0, f0, f6
/* 802CF944 002CC884  D0 1C 02 E8 */	stfs f0, 0x2e8(r28)
/* 802CF948 002CC888  C0 1C 02 EC */	lfs f0, 0x2ec(r28)
/* 802CF94C 002CC88C  EC 00 38 2A */	fadds f0, f0, f7
/* 802CF950 002CC890  D0 1C 02 EC */	stfs f0, 0x2ec(r28)
/* 802CF954 002CC894  C0 1C 02 F0 */	lfs f0, 0x2f0(r28)
/* 802CF958 002CC898  EC 00 08 2A */	fadds f0, f0, f1
/* 802CF95C 002CC89C  D0 1C 02 F0 */	stfs f0, 0x2f0(r28)
/* 802CF960 002CC8A0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802CF964 002CC8A4  81 83 00 04 */	lwz r12, 4(r3)
/* 802CF968 002CC8A8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802CF96C 002CC8AC  7D 89 03 A6 */	mtctr r12
/* 802CF970 002CC8B0  4E 80 04 21 */	bctrl 
/* 802CF974 002CC8B4  3B 7B 00 01 */	addi r27, r27, 1
/* 802CF978 002CC8B8  D0 3C 02 EC */	stfs f1, 0x2ec(r28)
/* 802CF97C 002CC8BC  2C 1B 00 05 */	cmpwi r27, 5
/* 802CF980 002CC8C0  3B DE 00 04 */	addi r30, r30, 4
/* 802CF984 002CC8C4  3B BD 00 04 */	addi r29, r29, 4
/* 802CF988 002CC8C8  3B 9C 00 0C */	addi r28, r28, 0xc
/* 802CF98C 002CC8CC  41 80 FF 48 */	blt .L_802CF8D4
/* 802CF990 002CC8D0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 802CF994 002CC8D4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 802CF998 002CC8D8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 802CF99C 002CC8DC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 802CF9A0 002CC8E0  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 802CF9A4 002CC8E4  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 802CF9A8 002CC8E8  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802CF9AC 002CC8EC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802CF9B0 002CC8F0  7C 08 03 A6 */	mtlr r0
/* 802CF9B4 002CC8F4  38 21 00 90 */	addi r1, r1, 0x90
/* 802CF9B8 002CC8F8  4E 80 00 20 */	blr 
.endfn setAttackPosition__Q34Game10SnakeWhole3ObjFv

.fn getAttackPiki__Q34Game10SnakeWhole3ObjFi, global
/* 802CF9BC 002CC8FC  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 802CF9C0 002CC900  7C 08 02 A6 */	mflr r0
/* 802CF9C4 002CC904  90 01 01 64 */	stw r0, 0x164(r1)
/* 802CF9C8 002CC908  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 802CF9CC 002CC90C  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 802CF9D0 002CC910  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 802CF9D4 002CC914  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 802CF9D8 002CC918  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 802CF9DC 002CC91C  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 802CF9E0 002CC920  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 802CF9E4 002CC924  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 802CF9E8 002CC928  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 802CF9EC 002CC92C  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 802CF9F0 002CC930  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 802CF9F4 002CC934  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 802CF9F8 002CC938  BE 61 00 CC */	stmw r19, 0xcc(r1)
/* 802CF9FC 002CC93C  2C 04 00 05 */	cmpwi r4, 5
/* 802CFA00 002CC940  3C A0 80 49 */	lis r5, lbl_8048BB38@ha
/* 802CFA04 002CC944  7C 7C 1B 78 */	mr r28, r3
/* 802CFA08 002CC948  3B C0 00 00 */	li r30, 0
/* 802CFA0C 002CC94C  3B E5 BB 38 */	addi r31, r5, lbl_8048BB38@l
/* 802CFA10 002CC950  3B A0 00 05 */	li r29, 5
/* 802CFA14 002CC954  40 80 00 0C */	bge .L_802CFA20
/* 802CFA18 002CC958  7C 9E 23 78 */	mr r30, r4
/* 802CFA1C 002CC95C  3B A4 00 01 */	addi r29, r4, 1
.L_802CFA20:
/* 802CFA20 002CC960  7F 84 E3 78 */	mr r4, r28
/* 802CFA24 002CC964  38 61 00 14 */	addi r3, r1, 0x14
/* 802CFA28 002CC968  81 9C 00 00 */	lwz r12, 0(r28)
/* 802CFA2C 002CC96C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CFA30 002CC970  7D 89 03 A6 */	mtctr r12
/* 802CFA34 002CC974  4E 80 04 21 */	bctrl 
/* 802CFA38 002CC978  C0 7C 01 FC */	lfs f3, 0x1fc(r28)
/* 802CFA3C 002CC97C  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CFA40 002CC980  FC 20 18 90 */	fmr f1, f3
/* 802CFA44 002CC984  C3 81 00 14 */	lfs f28, 0x14(r1)
/* 802CFA48 002CC988  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802CFA4C 002CC98C  C3 61 00 18 */	lfs f27, 0x18(r1)
/* 802CFA50 002CC990  C3 41 00 1C */	lfs f26, 0x1c(r1)
/* 802CFA54 002CC994  40 80 00 08 */	bge .L_802CFA5C
/* 802CFA58 002CC998  FC 20 18 50 */	fneg f1, f3
.L_802CFA5C:
/* 802CFA5C 002CC99C  C0 42 E5 54 */	lfs f2, lbl_8051C8B4@sda21(r2)
/* 802CFA60 002CC9A0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802CFA64 002CC9A4  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CFA68 002CC9A8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802CFA6C 002CC9AC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802CFA70 002CC9B0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802CFA74 002CC9B4  FC 00 08 1E */	fctiwz f0, f1
/* 802CFA78 002CC9B8  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 802CFA7C 002CC9BC  80 01 00 AC */	lwz r0, 0xac(r1)
/* 802CFA80 002CC9C0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CFA84 002CC9C4  7C 64 02 14 */	add r3, r4, r0
/* 802CFA88 002CC9C8  C3 C3 00 04 */	lfs f30, 4(r3)
/* 802CFA8C 002CC9CC  40 80 00 28 */	bge .L_802CFAB4
/* 802CFA90 002CC9D0  C0 02 E5 58 */	lfs f0, lbl_8051C8B8@sda21(r2)
/* 802CFA94 002CC9D4  EC 03 00 32 */	fmuls f0, f3, f0
/* 802CFA98 002CC9D8  FC 00 00 1E */	fctiwz f0, f0
/* 802CFA9C 002CC9DC  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 802CFAA0 002CC9E0  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802CFAA4 002CC9E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CFAA8 002CC9E8  7C 04 04 2E */	lfsx f0, r4, r0
/* 802CFAAC 002CC9EC  FF A0 00 50 */	fneg f29, f0
/* 802CFAB0 002CC9F0  48 00 00 1C */	b .L_802CFACC
.L_802CFAB4:
/* 802CFAB4 002CC9F4  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802CFAB8 002CC9F8  FC 00 00 1E */	fctiwz f0, f0
/* 802CFABC 002CC9FC  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 802CFAC0 002CCA00  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 802CFAC4 002CCA04  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802CFAC8 002CCA08  7F A4 04 2E */	lfsx f29, r4, r0
.L_802CFACC:
/* 802CFACC 002CCA0C  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 802CFAD0 002CCA10  FF E0 F0 50 */	fneg f31, f30
/* 802CFAD4 002CCA14  81 7F 00 BC */	lwz r11, 0xbc(r31)
/* 802CFAD8 002CCA18  81 5F 00 C0 */	lwz r10, 0xc0(r31)
/* 802CFADC 002CCA1C  81 3F 00 C4 */	lwz r9, 0xc4(r31)
/* 802CFAE0 002CCA20  81 1F 00 C8 */	lwz r8, 0xc8(r31)
/* 802CFAE4 002CCA24  80 FF 00 CC */	lwz r7, 0xcc(r31)
/* 802CFAE8 002CCA28  80 DF 00 D0 */	lwz r6, 0xd0(r31)
/* 802CFAEC 002CCA2C  80 BF 00 D4 */	lwz r5, 0xd4(r31)
/* 802CFAF0 002CCA30  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 802CFAF4 002CCA34  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 802CFAF8 002CCA38  C0 3C 02 EC */	lfs f1, 0x2ec(r28)
/* 802CFAFC 002CCA3C  C0 1C 02 F8 */	lfs f0, 0x2f8(r28)
/* 802CFB00 002CCA40  C0 5C 03 04 */	lfs f2, 0x304(r28)
/* 802CFB04 002CCA44  ED 01 D8 28 */	fsubs f8, f1, f27
/* 802CFB08 002CCA48  C0 3C 03 10 */	lfs f1, 0x310(r28)
/* 802CFB0C 002CCA4C  EC C0 D8 28 */	fsubs f6, f0, f27
/* 802CFB10 002CCA50  C0 1C 03 1C */	lfs f0, 0x31c(r28)
/* 802CFB14 002CCA54  ED 82 D8 28 */	fsubs f12, f2, f27
/* 802CFB18 002CCA58  90 01 00 44 */	stw r0, 0x44(r1)
/* 802CFB1C 002CCA5C  80 1F 00 68 */	lwz r0, 0x68(r31)
/* 802CFB20 002CCA60  ED 61 D8 28 */	fsubs f11, f1, f27
/* 802CFB24 002CCA64  91 61 00 48 */	stw r11, 0x48(r1)
/* 802CFB28 002CCA68  ED 40 D8 28 */	fsubs f10, f0, f27
/* 802CFB2C 002CCA6C  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 802CFB30 002CCA70  91 41 00 4C */	stw r10, 0x4c(r1)
/* 802CFB34 002CCA74  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 802CFB38 002CCA78  ED 20 40 2A */	fadds f9, f0, f8
/* 802CFB3C 002CCA7C  91 21 00 50 */	stw r9, 0x50(r1)
/* 802CFB40 002CCA80  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802CFB44 002CCA84  EC E1 30 2A */	fadds f7, f1, f6
/* 802CFB48 002CCA88  91 01 00 54 */	stw r8, 0x54(r1)
/* 802CFB4C 002CCA8C  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802CFB50 002CCA90  EC A0 60 2A */	fadds f5, f0, f12
/* 802CFB54 002CCA94  90 E1 00 30 */	stw r7, 0x30(r1)
/* 802CFB58 002CCA98  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 802CFB5C 002CCA9C  EC 61 58 2A */	fadds f3, f1, f11
/* 802CFB60 002CCAA0  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802CFB64 002CCAA4  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802CFB68 002CCAA8  EC 20 50 2A */	fadds f1, f0, f10
/* 802CFB6C 002CCAAC  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802CFB70 002CCAB0  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 802CFB74 002CCAB4  ED 04 40 2A */	fadds f8, f4, f8
/* 802CFB78 002CCAB8  90 81 00 3C */	stw r4, 0x3c(r1)
/* 802CFB7C 002CCABC  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802CFB80 002CCAC0  EC C2 30 2A */	fadds f6, f2, f6
/* 802CFB84 002CCAC4  90 61 00 40 */	stw r3, 0x40(r1)
/* 802CFB88 002CCAC8  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 802CFB8C 002CCACC  EC 80 60 2A */	fadds f4, f0, f12
/* 802CFB90 002CCAD0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802CFB94 002CCAD4  EC 42 58 2A */	fadds f2, f2, f11
/* 802CFB98 002CCAD8  82 7F 00 6C */	lwz r19, 0x6c(r31)
/* 802CFB9C 002CCADC  EC 00 50 2A */	fadds f0, f0, f10
/* 802CFBA0 002CCAE0  82 9F 00 70 */	lwz r20, 0x70(r31)
/* 802CFBA4 002CCAE4  82 BF 00 74 */	lwz r21, 0x74(r31)
/* 802CFBA8 002CCAE8  82 DF 00 78 */	lwz r22, 0x78(r31)
/* 802CFBAC 002CCAEC  82 FF 00 7C */	lwz r23, 0x7c(r31)
/* 802CFBB0 002CCAF0  83 1F 00 80 */	lwz r24, 0x80(r31)
/* 802CFBB4 002CCAF4  83 3F 00 84 */	lwz r25, 0x84(r31)
/* 802CFBB8 002CCAF8  83 5F 00 88 */	lwz r26, 0x88(r31)
/* 802CFBBC 002CCAFC  83 7F 00 8C */	lwz r27, 0x8c(r31)
/* 802CFBC0 002CCB00  81 9F 00 90 */	lwz r12, 0x90(r31)
/* 802CFBC4 002CCB04  81 7F 00 94 */	lwz r11, 0x94(r31)
/* 802CFBC8 002CCB08  81 5F 00 98 */	lwz r10, 0x98(r31)
/* 802CFBCC 002CCB0C  81 3F 00 9C */	lwz r9, 0x9c(r31)
/* 802CFBD0 002CCB10  81 1F 00 A0 */	lwz r8, 0xa0(r31)
/* 802CFBD4 002CCB14  80 FF 00 A4 */	lwz r7, 0xa4(r31)
/* 802CFBD8 002CCB18  80 DF 00 A8 */	lwz r6, 0xa8(r31)
/* 802CFBDC 002CCB1C  80 BF 00 AC */	lwz r5, 0xac(r31)
/* 802CFBE0 002CCB20  80 9F 00 B0 */	lwz r4, 0xb0(r31)
/* 802CFBE4 002CCB24  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 802CFBE8 002CCB28  90 01 00 94 */	stw r0, 0x94(r1)
/* 802CFBEC 002CCB2C  92 61 00 98 */	stw r19, 0x98(r1)
/* 802CFBF0 002CCB30  92 81 00 9C */	stw r20, 0x9c(r1)
/* 802CFBF4 002CCB34  92 A1 00 A0 */	stw r21, 0xa0(r1)
/* 802CFBF8 002CCB38  92 C1 00 A4 */	stw r22, 0xa4(r1)
/* 802CFBFC 002CCB3C  92 E1 00 80 */	stw r23, 0x80(r1)
/* 802CFC00 002CCB40  93 01 00 84 */	stw r24, 0x84(r1)
/* 802CFC04 002CCB44  93 21 00 88 */	stw r25, 0x88(r1)
/* 802CFC08 002CCB48  93 41 00 8C */	stw r26, 0x8c(r1)
/* 802CFC0C 002CCB4C  93 61 00 90 */	stw r27, 0x90(r1)
/* 802CFC10 002CCB50  91 81 00 6C */	stw r12, 0x6c(r1)
/* 802CFC14 002CCB54  91 61 00 70 */	stw r11, 0x70(r1)
/* 802CFC18 002CCB58  91 41 00 74 */	stw r10, 0x74(r1)
/* 802CFC1C 002CCB5C  91 21 00 78 */	stw r9, 0x78(r1)
/* 802CFC20 002CCB60  91 01 00 7C */	stw r8, 0x7c(r1)
/* 802CFC24 002CCB64  90 E1 00 58 */	stw r7, 0x58(r1)
/* 802CFC28 002CCB68  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 802CFC2C 002CCB6C  90 A1 00 60 */	stw r5, 0x60(r1)
/* 802CFC30 002CCB70  90 81 00 64 */	stw r4, 0x64(r1)
/* 802CFC34 002CCB74  90 61 00 68 */	stw r3, 0x68(r1)
/* 802CFC38 002CCB78  D1 21 00 44 */	stfs f9, 0x44(r1)
/* 802CFC3C 002CCB7C  D1 01 00 30 */	stfs f8, 0x30(r1)
/* 802CFC40 002CCB80  D0 E1 00 48 */	stfs f7, 0x48(r1)
/* 802CFC44 002CCB84  D0 C1 00 34 */	stfs f6, 0x34(r1)
/* 802CFC48 002CCB88  D0 A1 00 4C */	stfs f5, 0x4c(r1)
/* 802CFC4C 002CCB8C  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802CFC50 002CCB90  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 802CFC54 002CCB94  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802CFC58 002CCB98  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802CFC5C 002CCB9C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802CFC60 002CCBA0  38 00 00 00 */	li r0, 0
/* 802CFC64 002CCBA4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802CFC68 002CCBA8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802CFC6C 002CCBAC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802CFC70 002CCBB0  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802CFC74 002CCBB4  28 00 00 00 */	cmplwi r0, 0
/* 802CFC78 002CCBB8  90 81 00 20 */	stw r4, 0x20(r1)
/* 802CFC7C 002CCBBC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CFC80 002CCBC0  90 61 00 28 */	stw r3, 0x28(r1)
/* 802CFC84 002CCBC4  40 82 00 1C */	bne .L_802CFCA0
/* 802CFC88 002CCBC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFC8C 002CCBCC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CFC90 002CCBD0  7D 89 03 A6 */	mtctr r12
/* 802CFC94 002CCBD4  4E 80 04 21 */	bctrl 
/* 802CFC98 002CCBD8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CFC9C 002CCBDC  48 00 02 AC */	b .L_802CFF48
.L_802CFCA0:
/* 802CFCA0 002CCBE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFCA4 002CCBE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CFCA8 002CCBE8  7D 89 03 A6 */	mtctr r12
/* 802CFCAC 002CCBEC  4E 80 04 21 */	bctrl 
/* 802CFCB0 002CCBF0  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CFCB4 002CCBF4  48 00 00 58 */	b .L_802CFD0C
.L_802CFCB8:
/* 802CFCB8 002CCBF8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFCBC 002CCBFC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFCC0 002CCC00  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFCC4 002CCC04  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CFCC8 002CCC08  7D 89 03 A6 */	mtctr r12
/* 802CFCCC 002CCC0C  4E 80 04 21 */	bctrl 
/* 802CFCD0 002CCC10  7C 64 1B 78 */	mr r4, r3
/* 802CFCD4 002CCC14  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802CFCD8 002CCC18  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFCDC 002CCC1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CFCE0 002CCC20  7D 89 03 A6 */	mtctr r12
/* 802CFCE4 002CCC24  4E 80 04 21 */	bctrl 
/* 802CFCE8 002CCC28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFCEC 002CCC2C  40 82 02 5C */	bne .L_802CFF48
/* 802CFCF0 002CCC30  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFCF4 002CCC34  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFCF8 002CCC38  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFCFC 002CCC3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CFD00 002CCC40  7D 89 03 A6 */	mtctr r12
/* 802CFD04 002CCC44  4E 80 04 21 */	bctrl 
/* 802CFD08 002CCC48  90 61 00 24 */	stw r3, 0x24(r1)
.L_802CFD0C:
/* 802CFD0C 002CCC4C  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802CFD10 002CCC50  38 61 00 20 */	addi r3, r1, 0x20
/* 802CFD14 002CCC54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CFD18 002CCC58  7D 89 03 A6 */	mtctr r12
/* 802CFD1C 002CCC5C  4E 80 04 21 */	bctrl 
/* 802CFD20 002CCC60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFD24 002CCC64  41 82 FF 94 */	beq .L_802CFCB8
/* 802CFD28 002CCC68  48 00 02 20 */	b .L_802CFF48
.L_802CFD2C:
/* 802CFD2C 002CCC6C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFD30 002CCC70  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFD34 002CCC74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CFD38 002CCC78  7D 89 03 A6 */	mtctr r12
/* 802CFD3C 002CCC7C  4E 80 04 21 */	bctrl 
/* 802CFD40 002CCC80  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFD44 002CCC84  7C 73 1B 78 */	mr r19, r3
/* 802CFD48 002CCC88  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802CFD4C 002CCC8C  7D 89 03 A6 */	mtctr r12
/* 802CFD50 002CCC90  4E 80 04 21 */	bctrl 
/* 802CFD54 002CCC94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFD58 002CCC98  41 82 01 34 */	beq .L_802CFE8C
/* 802CFD5C 002CCC9C  7E 63 9B 78 */	mr r3, r19
/* 802CFD60 002CCCA0  81 93 00 00 */	lwz r12, 0(r19)
/* 802CFD64 002CCCA4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802CFD68 002CCCA8  7D 89 03 A6 */	mtctr r12
/* 802CFD6C 002CCCAC  4E 80 04 21 */	bctrl 
/* 802CFD70 002CCCB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFD74 002CCCB4  41 82 01 18 */	beq .L_802CFE8C
/* 802CFD78 002CCCB8  7E 63 9B 78 */	mr r3, r19
/* 802CFD7C 002CCCBC  4B EC F8 0D */	bl isStickToMouth__Q24Game8CreatureFv
/* 802CFD80 002CCCC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFD84 002CCCC4  40 82 01 08 */	bne .L_802CFE8C
/* 802CFD88 002CCCC8  7E 64 9B 78 */	mr r4, r19
/* 802CFD8C 002CCCCC  38 61 00 08 */	addi r3, r1, 8
/* 802CFD90 002CCCD0  81 93 00 00 */	lwz r12, 0(r19)
/* 802CFD94 002CCCD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CFD98 002CCCD8  7D 89 03 A6 */	mtctr r12
/* 802CFD9C 002CCCDC  4E 80 04 21 */	bctrl 
/* 802CFDA0 002CCCE0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802CFDA4 002CCCE4  57 C9 10 3A */	slwi r9, r30, 2
/* 802CFDA8 002CCCE8  C0 21 00 08 */	lfs f1, 8(r1)
/* 802CFDAC 002CCCEC  38 61 00 94 */	addi r3, r1, 0x94
/* 802CFDB0 002CCCF0  EC 80 D8 28 */	fsubs f4, f0, f27
/* 802CFDB4 002CCCF4  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802CFDB8 002CCCF8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802CFDBC 002CCCFC  38 81 00 80 */	addi r4, r1, 0x80
/* 802CFDC0 002CCD00  38 A1 00 6C */	addi r5, r1, 0x6c
/* 802CFDC4 002CCD04  38 C1 00 58 */	addi r6, r1, 0x58
/* 802CFDC8 002CCD08  EC 61 E0 28 */	fsubs f3, f1, f28
/* 802CFDCC 002CCD0C  38 E1 00 44 */	addi r7, r1, 0x44
/* 802CFDD0 002CCD10  EC 00 01 32 */	fmuls f0, f0, f4
/* 802CFDD4 002CCD14  39 01 00 30 */	addi r8, r1, 0x30
/* 802CFDD8 002CCD18  EC 42 D0 28 */	fsubs f2, f2, f26
/* 802CFDDC 002CCD1C  7C 1E E8 50 */	subf r0, r30, r29
/* 802CFDE0 002CCD20  EC 3D 00 FA */	fmadds f1, f29, f3, f0
/* 802CFDE4 002CCD24  7F CA F3 78 */	mr r10, r30
/* 802CFDE8 002CCD28  EC 1F 00 FA */	fmadds f0, f31, f3, f0
/* 802CFDEC 002CCD2C  7C 63 4A 14 */	add r3, r3, r9
/* 802CFDF0 002CCD30  7C 84 4A 14 */	add r4, r4, r9
/* 802CFDF4 002CCD34  7C A5 4A 14 */	add r5, r5, r9
/* 802CFDF8 002CCD38  EC 3E 08 BA */	fmadds f1, f30, f2, f1
/* 802CFDFC 002CCD3C  7C C6 4A 14 */	add r6, r6, r9
/* 802CFE00 002CCD40  EC 5D 00 BA */	fmadds f2, f29, f2, f0
/* 802CFE04 002CCD44  7C E7 4A 14 */	add r7, r7, r9
/* 802CFE08 002CCD48  7D 08 4A 14 */	add r8, r8, r9
/* 802CFE0C 002CCD4C  7C 09 03 A6 */	mtctr r0
/* 802CFE10 002CCD50  7C 1E E8 00 */	cmpw r30, r29
/* 802CFE14 002CCD54  40 80 00 78 */	bge .L_802CFE8C
.L_802CFE18:
/* 802CFE18 002CCD58  C0 03 00 00 */	lfs f0, 0(r3)
/* 802CFE1C 002CCD5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CFE20 002CCD60  40 80 00 4C */	bge .L_802CFE6C
/* 802CFE24 002CCD64  C0 04 00 00 */	lfs f0, 0(r4)
/* 802CFE28 002CCD68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CFE2C 002CCD6C  40 81 00 40 */	ble .L_802CFE6C
/* 802CFE30 002CCD70  C0 05 00 00 */	lfs f0, 0(r5)
/* 802CFE34 002CCD74  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802CFE38 002CCD78  40 80 00 34 */	bge .L_802CFE6C
/* 802CFE3C 002CCD7C  C0 06 00 00 */	lfs f0, 0(r6)
/* 802CFE40 002CCD80  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802CFE44 002CCD84  40 81 00 28 */	ble .L_802CFE6C
/* 802CFE48 002CCD88  C0 07 00 00 */	lfs f0, 0(r7)
/* 802CFE4C 002CCD8C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802CFE50 002CCD90  40 80 00 1C */	bge .L_802CFE6C
/* 802CFE54 002CCD94  C0 08 00 00 */	lfs f0, 0(r8)
/* 802CFE58 002CCD98  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802CFE5C 002CCD9C  40 81 00 10 */	ble .L_802CFE6C
/* 802CFE60 002CCDA0  91 5C 02 E4 */	stw r10, 0x2e4(r28)
/* 802CFE64 002CCDA4  7E 63 9B 78 */	mr r3, r19
/* 802CFE68 002CCDA8  48 00 01 04 */	b .L_802CFF6C
.L_802CFE6C:
/* 802CFE6C 002CCDAC  38 63 00 04 */	addi r3, r3, 4
/* 802CFE70 002CCDB0  38 84 00 04 */	addi r4, r4, 4
/* 802CFE74 002CCDB4  38 A5 00 04 */	addi r5, r5, 4
/* 802CFE78 002CCDB8  38 C6 00 04 */	addi r6, r6, 4
/* 802CFE7C 002CCDBC  38 E7 00 04 */	addi r7, r7, 4
/* 802CFE80 002CCDC0  39 08 00 04 */	addi r8, r8, 4
/* 802CFE84 002CCDC4  39 4A 00 01 */	addi r10, r10, 1
/* 802CFE88 002CCDC8  42 00 FF 90 */	bdnz .L_802CFE18
.L_802CFE8C:
/* 802CFE8C 002CCDCC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802CFE90 002CCDD0  28 00 00 00 */	cmplwi r0, 0
/* 802CFE94 002CCDD4  40 82 00 24 */	bne .L_802CFEB8
/* 802CFE98 002CCDD8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFE9C 002CCDDC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFEA0 002CCDE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFEA4 002CCDE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CFEA8 002CCDE8  7D 89 03 A6 */	mtctr r12
/* 802CFEAC 002CCDEC  4E 80 04 21 */	bctrl 
/* 802CFEB0 002CCDF0  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CFEB4 002CCDF4  48 00 00 94 */	b .L_802CFF48
.L_802CFEB8:
/* 802CFEB8 002CCDF8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFEBC 002CCDFC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFEC0 002CCE00  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFEC4 002CCE04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CFEC8 002CCE08  7D 89 03 A6 */	mtctr r12
/* 802CFECC 002CCE0C  4E 80 04 21 */	bctrl 
/* 802CFED0 002CCE10  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CFED4 002CCE14  48 00 00 58 */	b .L_802CFF2C
.L_802CFED8:
/* 802CFED8 002CCE18  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFEDC 002CCE1C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFEE0 002CCE20  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFEE4 002CCE24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CFEE8 002CCE28  7D 89 03 A6 */	mtctr r12
/* 802CFEEC 002CCE2C  4E 80 04 21 */	bctrl 
/* 802CFEF0 002CCE30  7C 64 1B 78 */	mr r4, r3
/* 802CFEF4 002CCE34  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802CFEF8 002CCE38  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFEFC 002CCE3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CFF00 002CCE40  7D 89 03 A6 */	mtctr r12
/* 802CFF04 002CCE44  4E 80 04 21 */	bctrl 
/* 802CFF08 002CCE48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFF0C 002CCE4C  40 82 00 3C */	bne .L_802CFF48
/* 802CFF10 002CCE50  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFF14 002CCE54  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFF18 002CCE58  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFF1C 002CCE5C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CFF20 002CCE60  7D 89 03 A6 */	mtctr r12
/* 802CFF24 002CCE64  4E 80 04 21 */	bctrl 
/* 802CFF28 002CCE68  90 61 00 24 */	stw r3, 0x24(r1)
.L_802CFF2C:
/* 802CFF2C 002CCE6C  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802CFF30 002CCE70  38 61 00 20 */	addi r3, r1, 0x20
/* 802CFF34 002CCE74  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CFF38 002CCE78  7D 89 03 A6 */	mtctr r12
/* 802CFF3C 002CCE7C  4E 80 04 21 */	bctrl 
/* 802CFF40 002CCE80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CFF44 002CCE84  41 82 FF 94 */	beq .L_802CFED8
.L_802CFF48:
/* 802CFF48 002CCE88  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CFF4C 002CCE8C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CFF50 002CCE90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CFF54 002CCE94  7D 89 03 A6 */	mtctr r12
/* 802CFF58 002CCE98  4E 80 04 21 */	bctrl 
/* 802CFF5C 002CCE9C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CFF60 002CCEA0  7C 04 18 40 */	cmplw r4, r3
/* 802CFF64 002CCEA4  40 82 FD C8 */	bne .L_802CFD2C
/* 802CFF68 002CCEA8  38 60 00 00 */	li r3, 0
.L_802CFF6C:
/* 802CFF6C 002CCEAC  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 802CFF70 002CCEB0  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 802CFF74 002CCEB4  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 802CFF78 002CCEB8  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 802CFF7C 002CCEBC  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 802CFF80 002CCEC0  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 802CFF84 002CCEC4  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 802CFF88 002CCEC8  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 802CFF8C 002CCECC  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 802CFF90 002CCED0  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 802CFF94 002CCED4  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 802CFF98 002CCED8  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 802CFF9C 002CCEDC  BA 61 00 CC */	lmw r19, 0xcc(r1)
/* 802CFFA0 002CCEE0  80 01 01 64 */	lwz r0, 0x164(r1)
/* 802CFFA4 002CCEE4  7C 08 03 A6 */	mtlr r0
/* 802CFFA8 002CCEE8  38 21 01 60 */	addi r1, r1, 0x160
/* 802CFFAC 002CCEEC  4E 80 00 20 */	blr 
.endfn getAttackPiki__Q34Game10SnakeWhole3ObjFi

.fn getAttackNavi__Q34Game10SnakeWhole3ObjFi, global
/* 802CFFB0 002CCEF0  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 802CFFB4 002CCEF4  7C 08 02 A6 */	mflr r0
/* 802CFFB8 002CCEF8  90 01 01 64 */	stw r0, 0x164(r1)
/* 802CFFBC 002CCEFC  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 802CFFC0 002CCF00  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 802CFFC4 002CCF04  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 802CFFC8 002CCF08  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 802CFFCC 002CCF0C  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 802CFFD0 002CCF10  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 802CFFD4 002CCF14  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 802CFFD8 002CCF18  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 802CFFDC 002CCF1C  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 802CFFE0 002CCF20  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 802CFFE4 002CCF24  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 802CFFE8 002CCF28  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 802CFFEC 002CCF2C  BE 61 00 CC */	stmw r19, 0xcc(r1)
/* 802CFFF0 002CCF30  2C 04 00 05 */	cmpwi r4, 5
/* 802CFFF4 002CCF34  3C A0 80 49 */	lis r5, lbl_8048BB38@ha
/* 802CFFF8 002CCF38  7C 7C 1B 78 */	mr r28, r3
/* 802CFFFC 002CCF3C  3B C0 00 00 */	li r30, 0
/* 802D0000 002CCF40  3B E5 BB 38 */	addi r31, r5, lbl_8048BB38@l
/* 802D0004 002CCF44  3B A0 00 05 */	li r29, 5
/* 802D0008 002CCF48  40 80 00 0C */	bge .L_802D0014
/* 802D000C 002CCF4C  7C 9E 23 78 */	mr r30, r4
/* 802D0010 002CCF50  3B A4 00 01 */	addi r29, r4, 1
.L_802D0014:
/* 802D0014 002CCF54  7F 84 E3 78 */	mr r4, r28
/* 802D0018 002CCF58  38 61 00 14 */	addi r3, r1, 0x14
/* 802D001C 002CCF5C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802D0020 002CCF60  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D0024 002CCF64  7D 89 03 A6 */	mtctr r12
/* 802D0028 002CCF68  4E 80 04 21 */	bctrl 
/* 802D002C 002CCF6C  C0 7C 01 FC */	lfs f3, 0x1fc(r28)
/* 802D0030 002CCF70  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802D0034 002CCF74  FC 20 18 90 */	fmr f1, f3
/* 802D0038 002CCF78  C3 81 00 14 */	lfs f28, 0x14(r1)
/* 802D003C 002CCF7C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802D0040 002CCF80  C3 61 00 18 */	lfs f27, 0x18(r1)
/* 802D0044 002CCF84  C3 41 00 1C */	lfs f26, 0x1c(r1)
/* 802D0048 002CCF88  40 80 00 08 */	bge .L_802D0050
/* 802D004C 002CCF8C  FC 20 18 50 */	fneg f1, f3
.L_802D0050:
/* 802D0050 002CCF90  C0 42 E5 54 */	lfs f2, lbl_8051C8B4@sda21(r2)
/* 802D0054 002CCF94  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802D0058 002CCF98  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802D005C 002CCF9C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802D0060 002CCFA0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802D0064 002CCFA4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802D0068 002CCFA8  FC 00 08 1E */	fctiwz f0, f1
/* 802D006C 002CCFAC  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 802D0070 002CCFB0  80 01 00 AC */	lwz r0, 0xac(r1)
/* 802D0074 002CCFB4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D0078 002CCFB8  7C 64 02 14 */	add r3, r4, r0
/* 802D007C 002CCFBC  C3 C3 00 04 */	lfs f30, 4(r3)
/* 802D0080 002CCFC0  40 80 00 28 */	bge .L_802D00A8
/* 802D0084 002CCFC4  C0 02 E5 58 */	lfs f0, lbl_8051C8B8@sda21(r2)
/* 802D0088 002CCFC8  EC 03 00 32 */	fmuls f0, f3, f0
/* 802D008C 002CCFCC  FC 00 00 1E */	fctiwz f0, f0
/* 802D0090 002CCFD0  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 802D0094 002CCFD4  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802D0098 002CCFD8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D009C 002CCFDC  7C 04 04 2E */	lfsx f0, r4, r0
/* 802D00A0 002CCFE0  FF A0 00 50 */	fneg f29, f0
/* 802D00A4 002CCFE4  48 00 00 1C */	b .L_802D00C0
.L_802D00A8:
/* 802D00A8 002CCFE8  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802D00AC 002CCFEC  FC 00 00 1E */	fctiwz f0, f0
/* 802D00B0 002CCFF0  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 802D00B4 002CCFF4  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 802D00B8 002CCFF8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D00BC 002CCFFC  7F A4 04 2E */	lfsx f29, r4, r0
.L_802D00C0:
/* 802D00C0 002CD000  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 802D00C4 002CD004  FF E0 F0 50 */	fneg f31, f30
/* 802D00C8 002CD008  81 7F 01 34 */	lwz r11, 0x134(r31)
/* 802D00CC 002CD00C  81 5F 01 38 */	lwz r10, 0x138(r31)
/* 802D00D0 002CD010  81 3F 01 3C */	lwz r9, 0x13c(r31)
/* 802D00D4 002CD014  81 1F 01 40 */	lwz r8, 0x140(r31)
/* 802D00D8 002CD018  80 FF 01 44 */	lwz r7, 0x144(r31)
/* 802D00DC 002CD01C  80 DF 01 48 */	lwz r6, 0x148(r31)
/* 802D00E0 002CD020  80 BF 01 4C */	lwz r5, 0x14c(r31)
/* 802D00E4 002CD024  80 9F 01 50 */	lwz r4, 0x150(r31)
/* 802D00E8 002CD028  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 802D00EC 002CD02C  C0 3C 02 EC */	lfs f1, 0x2ec(r28)
/* 802D00F0 002CD030  C0 1C 02 F8 */	lfs f0, 0x2f8(r28)
/* 802D00F4 002CD034  C0 5C 03 04 */	lfs f2, 0x304(r28)
/* 802D00F8 002CD038  ED 01 D8 28 */	fsubs f8, f1, f27
/* 802D00FC 002CD03C  C0 3C 03 10 */	lfs f1, 0x310(r28)
/* 802D0100 002CD040  EC C0 D8 28 */	fsubs f6, f0, f27
/* 802D0104 002CD044  C0 1C 03 1C */	lfs f0, 0x31c(r28)
/* 802D0108 002CD048  ED 82 D8 28 */	fsubs f12, f2, f27
/* 802D010C 002CD04C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D0110 002CD050  80 1F 00 E0 */	lwz r0, 0xe0(r31)
/* 802D0114 002CD054  ED 61 D8 28 */	fsubs f11, f1, f27
/* 802D0118 002CD058  91 61 00 48 */	stw r11, 0x48(r1)
/* 802D011C 002CD05C  ED 40 D8 28 */	fsubs f10, f0, f27
/* 802D0120 002CD060  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 802D0124 002CD064  91 41 00 4C */	stw r10, 0x4c(r1)
/* 802D0128 002CD068  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 802D012C 002CD06C  ED 20 40 2A */	fadds f9, f0, f8
/* 802D0130 002CD070  91 21 00 50 */	stw r9, 0x50(r1)
/* 802D0134 002CD074  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802D0138 002CD078  EC E1 30 2A */	fadds f7, f1, f6
/* 802D013C 002CD07C  91 01 00 54 */	stw r8, 0x54(r1)
/* 802D0140 002CD080  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802D0144 002CD084  EC A0 60 2A */	fadds f5, f0, f12
/* 802D0148 002CD088  90 E1 00 30 */	stw r7, 0x30(r1)
/* 802D014C 002CD08C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 802D0150 002CD090  EC 61 58 2A */	fadds f3, f1, f11
/* 802D0154 002CD094  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802D0158 002CD098  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802D015C 002CD09C  EC 20 50 2A */	fadds f1, f0, f10
/* 802D0160 002CD0A0  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802D0164 002CD0A4  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 802D0168 002CD0A8  ED 04 40 2A */	fadds f8, f4, f8
/* 802D016C 002CD0AC  90 81 00 3C */	stw r4, 0x3c(r1)
/* 802D0170 002CD0B0  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802D0174 002CD0B4  EC C2 30 2A */	fadds f6, f2, f6
/* 802D0178 002CD0B8  90 61 00 40 */	stw r3, 0x40(r1)
/* 802D017C 002CD0BC  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 802D0180 002CD0C0  EC 80 60 2A */	fadds f4, f0, f12
/* 802D0184 002CD0C4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802D0188 002CD0C8  EC 42 58 2A */	fadds f2, f2, f11
/* 802D018C 002CD0CC  82 7F 00 E4 */	lwz r19, 0xe4(r31)
/* 802D0190 002CD0D0  EC 00 50 2A */	fadds f0, f0, f10
/* 802D0194 002CD0D4  82 9F 00 E8 */	lwz r20, 0xe8(r31)
/* 802D0198 002CD0D8  82 BF 00 EC */	lwz r21, 0xec(r31)
/* 802D019C 002CD0DC  82 DF 00 F0 */	lwz r22, 0xf0(r31)
/* 802D01A0 002CD0E0  82 FF 00 F4 */	lwz r23, 0xf4(r31)
/* 802D01A4 002CD0E4  83 1F 00 F8 */	lwz r24, 0xf8(r31)
/* 802D01A8 002CD0E8  83 3F 00 FC */	lwz r25, 0xfc(r31)
/* 802D01AC 002CD0EC  83 5F 01 00 */	lwz r26, 0x100(r31)
/* 802D01B0 002CD0F0  83 7F 01 04 */	lwz r27, 0x104(r31)
/* 802D01B4 002CD0F4  81 9F 01 08 */	lwz r12, 0x108(r31)
/* 802D01B8 002CD0F8  81 7F 01 0C */	lwz r11, 0x10c(r31)
/* 802D01BC 002CD0FC  81 5F 01 10 */	lwz r10, 0x110(r31)
/* 802D01C0 002CD100  81 3F 01 14 */	lwz r9, 0x114(r31)
/* 802D01C4 002CD104  81 1F 01 18 */	lwz r8, 0x118(r31)
/* 802D01C8 002CD108  80 FF 01 1C */	lwz r7, 0x11c(r31)
/* 802D01CC 002CD10C  80 DF 01 20 */	lwz r6, 0x120(r31)
/* 802D01D0 002CD110  80 BF 01 24 */	lwz r5, 0x124(r31)
/* 802D01D4 002CD114  80 9F 01 28 */	lwz r4, 0x128(r31)
/* 802D01D8 002CD118  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 802D01DC 002CD11C  90 01 00 94 */	stw r0, 0x94(r1)
/* 802D01E0 002CD120  92 61 00 98 */	stw r19, 0x98(r1)
/* 802D01E4 002CD124  92 81 00 9C */	stw r20, 0x9c(r1)
/* 802D01E8 002CD128  92 A1 00 A0 */	stw r21, 0xa0(r1)
/* 802D01EC 002CD12C  92 C1 00 A4 */	stw r22, 0xa4(r1)
/* 802D01F0 002CD130  92 E1 00 80 */	stw r23, 0x80(r1)
/* 802D01F4 002CD134  93 01 00 84 */	stw r24, 0x84(r1)
/* 802D01F8 002CD138  93 21 00 88 */	stw r25, 0x88(r1)
/* 802D01FC 002CD13C  93 41 00 8C */	stw r26, 0x8c(r1)
/* 802D0200 002CD140  93 61 00 90 */	stw r27, 0x90(r1)
/* 802D0204 002CD144  91 81 00 6C */	stw r12, 0x6c(r1)
/* 802D0208 002CD148  91 61 00 70 */	stw r11, 0x70(r1)
/* 802D020C 002CD14C  91 41 00 74 */	stw r10, 0x74(r1)
/* 802D0210 002CD150  91 21 00 78 */	stw r9, 0x78(r1)
/* 802D0214 002CD154  91 01 00 7C */	stw r8, 0x7c(r1)
/* 802D0218 002CD158  90 E1 00 58 */	stw r7, 0x58(r1)
/* 802D021C 002CD15C  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 802D0220 002CD160  90 A1 00 60 */	stw r5, 0x60(r1)
/* 802D0224 002CD164  90 81 00 64 */	stw r4, 0x64(r1)
/* 802D0228 002CD168  90 61 00 68 */	stw r3, 0x68(r1)
/* 802D022C 002CD16C  D1 21 00 44 */	stfs f9, 0x44(r1)
/* 802D0230 002CD170  D1 01 00 30 */	stfs f8, 0x30(r1)
/* 802D0234 002CD174  D0 E1 00 48 */	stfs f7, 0x48(r1)
/* 802D0238 002CD178  D0 C1 00 34 */	stfs f6, 0x34(r1)
/* 802D023C 002CD17C  D0 A1 00 4C */	stfs f5, 0x4c(r1)
/* 802D0240 002CD180  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802D0244 002CD184  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 802D0248 002CD188  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802D024C 002CD18C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802D0250 002CD190  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802D0254 002CD194  38 00 00 00 */	li r0, 0
/* 802D0258 002CD198  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802D025C 002CD19C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 802D0260 002CD1A0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802D0264 002CD1A4  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 802D0268 002CD1A8  28 00 00 00 */	cmplwi r0, 0
/* 802D026C 002CD1AC  90 81 00 20 */	stw r4, 0x20(r1)
/* 802D0270 002CD1B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0274 002CD1B4  90 61 00 28 */	stw r3, 0x28(r1)
/* 802D0278 002CD1B8  40 82 00 1C */	bne .L_802D0294
/* 802D027C 002CD1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0280 002CD1C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D0284 002CD1C4  7D 89 03 A6 */	mtctr r12
/* 802D0288 002CD1C8  4E 80 04 21 */	bctrl 
/* 802D028C 002CD1CC  90 61 00 24 */	stw r3, 0x24(r1)
/* 802D0290 002CD1D0  48 00 02 80 */	b .L_802D0510
.L_802D0294:
/* 802D0294 002CD1D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0298 002CD1D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D029C 002CD1DC  7D 89 03 A6 */	mtctr r12
/* 802D02A0 002CD1E0  4E 80 04 21 */	bctrl 
/* 802D02A4 002CD1E4  90 61 00 24 */	stw r3, 0x24(r1)
/* 802D02A8 002CD1E8  48 00 00 58 */	b .L_802D0300
.L_802D02AC:
/* 802D02AC 002CD1EC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D02B0 002CD1F0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D02B4 002CD1F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D02B8 002CD1F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D02BC 002CD1FC  7D 89 03 A6 */	mtctr r12
/* 802D02C0 002CD200  4E 80 04 21 */	bctrl 
/* 802D02C4 002CD204  7C 64 1B 78 */	mr r4, r3
/* 802D02C8 002CD208  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802D02CC 002CD20C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D02D0 002CD210  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D02D4 002CD214  7D 89 03 A6 */	mtctr r12
/* 802D02D8 002CD218  4E 80 04 21 */	bctrl 
/* 802D02DC 002CD21C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D02E0 002CD220  40 82 02 30 */	bne .L_802D0510
/* 802D02E4 002CD224  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D02E8 002CD228  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D02EC 002CD22C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D02F0 002CD230  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D02F4 002CD234  7D 89 03 A6 */	mtctr r12
/* 802D02F8 002CD238  4E 80 04 21 */	bctrl 
/* 802D02FC 002CD23C  90 61 00 24 */	stw r3, 0x24(r1)
.L_802D0300:
/* 802D0300 002CD240  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802D0304 002CD244  38 61 00 20 */	addi r3, r1, 0x20
/* 802D0308 002CD248  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D030C 002CD24C  7D 89 03 A6 */	mtctr r12
/* 802D0310 002CD250  4E 80 04 21 */	bctrl 
/* 802D0314 002CD254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D0318 002CD258  41 82 FF 94 */	beq .L_802D02AC
/* 802D031C 002CD25C  48 00 01 F4 */	b .L_802D0510
.L_802D0320:
/* 802D0320 002CD260  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D0324 002CD264  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0328 002CD268  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D032C 002CD26C  7D 89 03 A6 */	mtctr r12
/* 802D0330 002CD270  4E 80 04 21 */	bctrl 
/* 802D0334 002CD274  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0338 002CD278  7C 73 1B 78 */	mr r19, r3
/* 802D033C 002CD27C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D0340 002CD280  7D 89 03 A6 */	mtctr r12
/* 802D0344 002CD284  4E 80 04 21 */	bctrl 
/* 802D0348 002CD288  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D034C 002CD28C  41 82 01 08 */	beq .L_802D0454
/* 802D0350 002CD290  7E 64 9B 78 */	mr r4, r19
/* 802D0354 002CD294  38 61 00 08 */	addi r3, r1, 8
/* 802D0358 002CD298  81 93 00 00 */	lwz r12, 0(r19)
/* 802D035C 002CD29C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D0360 002CD2A0  7D 89 03 A6 */	mtctr r12
/* 802D0364 002CD2A4  4E 80 04 21 */	bctrl 
/* 802D0368 002CD2A8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802D036C 002CD2AC  57 C9 10 3A */	slwi r9, r30, 2
/* 802D0370 002CD2B0  C0 21 00 08 */	lfs f1, 8(r1)
/* 802D0374 002CD2B4  38 61 00 94 */	addi r3, r1, 0x94
/* 802D0378 002CD2B8  EC 80 D8 28 */	fsubs f4, f0, f27
/* 802D037C 002CD2BC  C0 02 E5 08 */	lfs f0, lbl_8051C868@sda21(r2)
/* 802D0380 002CD2C0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802D0384 002CD2C4  38 81 00 80 */	addi r4, r1, 0x80
/* 802D0388 002CD2C8  38 A1 00 6C */	addi r5, r1, 0x6c
/* 802D038C 002CD2CC  38 C1 00 58 */	addi r6, r1, 0x58
/* 802D0390 002CD2D0  EC 61 E0 28 */	fsubs f3, f1, f28
/* 802D0394 002CD2D4  38 E1 00 44 */	addi r7, r1, 0x44
/* 802D0398 002CD2D8  EC 00 01 32 */	fmuls f0, f0, f4
/* 802D039C 002CD2DC  39 01 00 30 */	addi r8, r1, 0x30
/* 802D03A0 002CD2E0  EC 42 D0 28 */	fsubs f2, f2, f26
/* 802D03A4 002CD2E4  7C 1E E8 50 */	subf r0, r30, r29
/* 802D03A8 002CD2E8  EC 3D 00 FA */	fmadds f1, f29, f3, f0
/* 802D03AC 002CD2EC  7F CA F3 78 */	mr r10, r30
/* 802D03B0 002CD2F0  EC 1F 00 FA */	fmadds f0, f31, f3, f0
/* 802D03B4 002CD2F4  7C 63 4A 14 */	add r3, r3, r9
/* 802D03B8 002CD2F8  7C 84 4A 14 */	add r4, r4, r9
/* 802D03BC 002CD2FC  7C A5 4A 14 */	add r5, r5, r9
/* 802D03C0 002CD300  EC 3E 08 BA */	fmadds f1, f30, f2, f1
/* 802D03C4 002CD304  7C C6 4A 14 */	add r6, r6, r9
/* 802D03C8 002CD308  EC 5D 00 BA */	fmadds f2, f29, f2, f0
/* 802D03CC 002CD30C  7C E7 4A 14 */	add r7, r7, r9
/* 802D03D0 002CD310  7D 08 4A 14 */	add r8, r8, r9
/* 802D03D4 002CD314  7C 09 03 A6 */	mtctr r0
/* 802D03D8 002CD318  7C 1E E8 00 */	cmpw r30, r29
/* 802D03DC 002CD31C  40 80 00 78 */	bge .L_802D0454
.L_802D03E0:
/* 802D03E0 002CD320  C0 03 00 00 */	lfs f0, 0(r3)
/* 802D03E4 002CD324  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D03E8 002CD328  40 80 00 4C */	bge .L_802D0434
/* 802D03EC 002CD32C  C0 04 00 00 */	lfs f0, 0(r4)
/* 802D03F0 002CD330  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D03F4 002CD334  40 81 00 40 */	ble .L_802D0434
/* 802D03F8 002CD338  C0 05 00 00 */	lfs f0, 0(r5)
/* 802D03FC 002CD33C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D0400 002CD340  40 80 00 34 */	bge .L_802D0434
/* 802D0404 002CD344  C0 06 00 00 */	lfs f0, 0(r6)
/* 802D0408 002CD348  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D040C 002CD34C  40 81 00 28 */	ble .L_802D0434
/* 802D0410 002CD350  C0 07 00 00 */	lfs f0, 0(r7)
/* 802D0414 002CD354  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802D0418 002CD358  40 80 00 1C */	bge .L_802D0434
/* 802D041C 002CD35C  C0 08 00 00 */	lfs f0, 0(r8)
/* 802D0420 002CD360  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802D0424 002CD364  40 81 00 10 */	ble .L_802D0434
/* 802D0428 002CD368  91 5C 02 E4 */	stw r10, 0x2e4(r28)
/* 802D042C 002CD36C  7E 63 9B 78 */	mr r3, r19
/* 802D0430 002CD370  48 00 01 04 */	b .L_802D0534
.L_802D0434:
/* 802D0434 002CD374  38 63 00 04 */	addi r3, r3, 4
/* 802D0438 002CD378  38 84 00 04 */	addi r4, r4, 4
/* 802D043C 002CD37C  38 A5 00 04 */	addi r5, r5, 4
/* 802D0440 002CD380  38 C6 00 04 */	addi r6, r6, 4
/* 802D0444 002CD384  38 E7 00 04 */	addi r7, r7, 4
/* 802D0448 002CD388  39 08 00 04 */	addi r8, r8, 4
/* 802D044C 002CD38C  39 4A 00 01 */	addi r10, r10, 1
/* 802D0450 002CD390  42 00 FF 90 */	bdnz .L_802D03E0
.L_802D0454:
/* 802D0454 002CD394  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802D0458 002CD398  28 00 00 00 */	cmplwi r0, 0
/* 802D045C 002CD39C  40 82 00 24 */	bne .L_802D0480
/* 802D0460 002CD3A0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D0464 002CD3A4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D0468 002CD3A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D046C 002CD3AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D0470 002CD3B0  7D 89 03 A6 */	mtctr r12
/* 802D0474 002CD3B4  4E 80 04 21 */	bctrl 
/* 802D0478 002CD3B8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802D047C 002CD3BC  48 00 00 94 */	b .L_802D0510
.L_802D0480:
/* 802D0480 002CD3C0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D0484 002CD3C4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D0488 002CD3C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D048C 002CD3CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D0490 002CD3D0  7D 89 03 A6 */	mtctr r12
/* 802D0494 002CD3D4  4E 80 04 21 */	bctrl 
/* 802D0498 002CD3D8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802D049C 002CD3DC  48 00 00 58 */	b .L_802D04F4
.L_802D04A0:
/* 802D04A0 002CD3E0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D04A4 002CD3E4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D04A8 002CD3E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D04AC 002CD3EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D04B0 002CD3F0  7D 89 03 A6 */	mtctr r12
/* 802D04B4 002CD3F4  4E 80 04 21 */	bctrl 
/* 802D04B8 002CD3F8  7C 64 1B 78 */	mr r4, r3
/* 802D04BC 002CD3FC  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802D04C0 002CD400  81 83 00 00 */	lwz r12, 0(r3)
/* 802D04C4 002CD404  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D04C8 002CD408  7D 89 03 A6 */	mtctr r12
/* 802D04CC 002CD40C  4E 80 04 21 */	bctrl 
/* 802D04D0 002CD410  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D04D4 002CD414  40 82 00 3C */	bne .L_802D0510
/* 802D04D8 002CD418  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D04DC 002CD41C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D04E0 002CD420  81 83 00 00 */	lwz r12, 0(r3)
/* 802D04E4 002CD424  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D04E8 002CD428  7D 89 03 A6 */	mtctr r12
/* 802D04EC 002CD42C  4E 80 04 21 */	bctrl 
/* 802D04F0 002CD430  90 61 00 24 */	stw r3, 0x24(r1)
.L_802D04F4:
/* 802D04F4 002CD434  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802D04F8 002CD438  38 61 00 20 */	addi r3, r1, 0x20
/* 802D04FC 002CD43C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D0500 002CD440  7D 89 03 A6 */	mtctr r12
/* 802D0504 002CD444  4E 80 04 21 */	bctrl 
/* 802D0508 002CD448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D050C 002CD44C  41 82 FF 94 */	beq .L_802D04A0
.L_802D0510:
/* 802D0510 002CD450  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802D0514 002CD454  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0518 002CD458  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D051C 002CD45C  7D 89 03 A6 */	mtctr r12
/* 802D0520 002CD460  4E 80 04 21 */	bctrl 
/* 802D0524 002CD464  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D0528 002CD468  7C 04 18 40 */	cmplw r4, r3
/* 802D052C 002CD46C  40 82 FD F4 */	bne .L_802D0320
/* 802D0530 002CD470  38 60 00 00 */	li r3, 0
.L_802D0534:
/* 802D0534 002CD474  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 802D0538 002CD478  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 802D053C 002CD47C  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 802D0540 002CD480  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 802D0544 002CD484  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 802D0548 002CD488  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 802D054C 002CD48C  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 802D0550 002CD490  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 802D0554 002CD494  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 802D0558 002CD498  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 802D055C 002CD49C  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 802D0560 002CD4A0  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 802D0564 002CD4A4  BA 61 00 CC */	lmw r19, 0xcc(r1)
/* 802D0568 002CD4A8  80 01 01 64 */	lwz r0, 0x164(r1)
/* 802D056C 002CD4AC  7C 08 03 A6 */	mtlr r0
/* 802D0570 002CD4B0  38 21 01 60 */	addi r1, r1, 0x160
/* 802D0574 002CD4B4  4E 80 00 20 */	blr 
.endfn getAttackNavi__Q34Game10SnakeWhole3ObjFi

.fn getSearchedTarget__Q34Game10SnakeWhole3ObjFv, global
/* 802D0578 002CD4B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D057C 002CD4BC  7C 08 02 A6 */	mflr r0
/* 802D0580 002CD4C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0584 002CD4C4  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802D0588 002CD4C8  2C 00 00 00 */	cmpwi r0, 0
/* 802D058C 002CD4CC  41 82 00 0C */	beq .L_802D0598
/* 802D0590 002CD4D0  C0 22 E5 6C */	lfs f1, lbl_8051C8CC@sda21(r2)
/* 802D0594 002CD4D4  48 00 00 0C */	b .L_802D05A0
.L_802D0598:
/* 802D0598 002CD4D8  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802D059C 002CD4DC  C0 24 04 24 */	lfs f1, 0x424(r4)
.L_802D05A0:
/* 802D05A0 002CD4E0  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802D05A4 002CD4E4  38 80 00 00 */	li r4, 0
/* 802D05A8 002CD4E8  38 A0 00 00 */	li r5, 0
/* 802D05AC 002CD4EC  38 C0 00 00 */	li r6, 0
/* 802D05B0 002CD4F0  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802D05B4 002CD4F4  4B E4 2A 9D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802D05B8 002CD4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D05BC 002CD4FC  7C 08 03 A6 */	mtlr r0
/* 802D05C0 002CD500  38 21 00 10 */	addi r1, r1, 0x10
/* 802D05C4 002CD504  4E 80 00 20 */	blr 
.endfn getSearchedTarget__Q34Game10SnakeWhole3ObjFv

.fn getSwallowSlot__Q34Game10SnakeWhole3ObjFv, global
/* 802D05C8 002CD508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D05CC 002CD50C  7C 08 02 A6 */	mflr r0
/* 802D05D0 002CD510  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D05D4 002CD514  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D05D8 002CD518  3B E0 00 00 */	li r31, 0
/* 802D05DC 002CD51C  93 C1 00 08 */	stw r30, 8(r1)
/* 802D05E0 002CD520  7C 7E 1B 78 */	mr r30, r3
/* 802D05E4 002CD524  48 00 00 24 */	b .L_802D0608
.L_802D05E8:
/* 802D05E8 002CD528  7F E4 FB 78 */	mr r4, r31
/* 802D05EC 002CD52C  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802D05F0 002CD530  4B E6 81 89 */	bl getSlot__10MouthSlotsFi
/* 802D05F4 002CD534  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802D05F8 002CD538  28 00 00 00 */	cmplwi r0, 0
/* 802D05FC 002CD53C  40 82 00 08 */	bne .L_802D0604
/* 802D0600 002CD540  48 00 00 18 */	b .L_802D0618
.L_802D0604:
/* 802D0604 002CD544  3B FF 00 01 */	addi r31, r31, 1
.L_802D0608:
/* 802D0608 002CD548  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 802D060C 002CD54C  7C 1F 00 00 */	cmpw r31, r0
/* 802D0610 002CD550  41 80 FF D8 */	blt .L_802D05E8
/* 802D0614 002CD554  38 60 00 00 */	li r3, 0
.L_802D0618:
/* 802D0618 002CD558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D061C 002CD55C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0620 002CD560  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0624 002CD564  7C 08 03 A6 */	mtlr r0
/* 802D0628 002CD568  38 21 00 10 */	addi r1, r1, 0x10
/* 802D062C 002CD56C  4E 80 00 20 */	blr 
.endfn getSwallowSlot__Q34Game10SnakeWhole3ObjFv

.fn isSwallowPikmin__Q34Game10SnakeWhole3ObjFv, global
/* 802D0630 002CD570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0634 002CD574  7C 08 02 A6 */	mflr r0
/* 802D0638 002CD578  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D063C 002CD57C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0640 002CD580  3B E0 00 00 */	li r31, 0
/* 802D0644 002CD584  93 C1 00 08 */	stw r30, 8(r1)
/* 802D0648 002CD588  7C 7E 1B 78 */	mr r30, r3
/* 802D064C 002CD58C  48 00 00 28 */	b .L_802D0674
.L_802D0650:
/* 802D0650 002CD590  7F E4 FB 78 */	mr r4, r31
/* 802D0654 002CD594  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802D0658 002CD598  4B E6 81 21 */	bl getSlot__10MouthSlotsFi
/* 802D065C 002CD59C  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802D0660 002CD5A0  28 00 00 00 */	cmplwi r0, 0
/* 802D0664 002CD5A4  41 82 00 0C */	beq .L_802D0670
/* 802D0668 002CD5A8  38 60 00 01 */	li r3, 1
/* 802D066C 002CD5AC  48 00 00 18 */	b .L_802D0684
.L_802D0670:
/* 802D0670 002CD5B0  3B FF 00 01 */	addi r31, r31, 1
.L_802D0674:
/* 802D0674 002CD5B4  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 802D0678 002CD5B8  7C 1F 00 00 */	cmpw r31, r0
/* 802D067C 002CD5BC  41 80 FF D4 */	blt .L_802D0650
/* 802D0680 002CD5C0  38 60 00 00 */	li r3, 0
.L_802D0684:
/* 802D0684 002CD5C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0688 002CD5C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D068C 002CD5CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0690 002CD5D0  7C 08 03 A6 */	mtlr r0
/* 802D0694 002CD5D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0698 002CD5D8  4E 80 00 20 */	blr 
.endfn isSwallowPikmin__Q34Game10SnakeWhole3ObjFv

.fn getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv, global
/* 802D069C 002CD5DC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D06A0 002CD5E0  7C 08 02 A6 */	mflr r0
/* 802D06A4 002CD5E4  7C 64 1B 78 */	mr r4, r3
/* 802D06A8 002CD5E8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D06AC 002CD5EC  38 61 00 18 */	addi r3, r1, 0x18
/* 802D06B0 002CD5F0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D06B4 002CD5F4  3B E0 00 00 */	li r31, 0
/* 802D06B8 002CD5F8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802D06BC 002CD5FC  4B EC F5 A1 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 802D06C0 002CD600  38 00 00 00 */	li r0, 0
/* 802D06C4 002CD604  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 802D06C8 002CD608  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 802D06CC 002CD60C  38 61 00 18 */	addi r3, r1, 0x18
/* 802D06D0 002CD610  28 00 00 00 */	cmplwi r0, 0
/* 802D06D4 002CD614  90 81 00 08 */	stw r4, 8(r1)
/* 802D06D8 002CD618  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D06DC 002CD61C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802D06E0 002CD620  90 61 00 10 */	stw r3, 0x10(r1)
/* 802D06E4 002CD624  40 82 00 1C */	bne .L_802D0700
/* 802D06E8 002CD628  81 83 00 00 */	lwz r12, 0(r3)
/* 802D06EC 002CD62C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D06F0 002CD630  7D 89 03 A6 */	mtctr r12
/* 802D06F4 002CD634  4E 80 04 21 */	bctrl 
/* 802D06F8 002CD638  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D06FC 002CD63C  48 00 01 A4 */	b .L_802D08A0
.L_802D0700:
/* 802D0700 002CD640  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0704 002CD644  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D0708 002CD648  7D 89 03 A6 */	mtctr r12
/* 802D070C 002CD64C  4E 80 04 21 */	bctrl 
/* 802D0710 002CD650  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D0714 002CD654  48 00 00 58 */	b .L_802D076C
.L_802D0718:
/* 802D0718 002CD658  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D071C 002CD65C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D0720 002CD660  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0724 002CD664  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D0728 002CD668  7D 89 03 A6 */	mtctr r12
/* 802D072C 002CD66C  4E 80 04 21 */	bctrl 
/* 802D0730 002CD670  7C 64 1B 78 */	mr r4, r3
/* 802D0734 002CD674  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802D0738 002CD678  81 83 00 00 */	lwz r12, 0(r3)
/* 802D073C 002CD67C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D0740 002CD680  7D 89 03 A6 */	mtctr r12
/* 802D0744 002CD684  4E 80 04 21 */	bctrl 
/* 802D0748 002CD688  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D074C 002CD68C  40 82 01 54 */	bne .L_802D08A0
/* 802D0750 002CD690  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D0754 002CD694  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D0758 002CD698  81 83 00 00 */	lwz r12, 0(r3)
/* 802D075C 002CD69C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D0760 002CD6A0  7D 89 03 A6 */	mtctr r12
/* 802D0764 002CD6A4  4E 80 04 21 */	bctrl 
/* 802D0768 002CD6A8  90 61 00 0C */	stw r3, 0xc(r1)
.L_802D076C:
/* 802D076C 002CD6AC  81 81 00 08 */	lwz r12, 8(r1)
/* 802D0770 002CD6B0  38 61 00 08 */	addi r3, r1, 8
/* 802D0774 002CD6B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D0778 002CD6B8  7D 89 03 A6 */	mtctr r12
/* 802D077C 002CD6BC  4E 80 04 21 */	bctrl 
/* 802D0780 002CD6C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D0784 002CD6C4  41 82 FF 94 */	beq .L_802D0718
/* 802D0788 002CD6C8  48 00 01 18 */	b .L_802D08A0
.L_802D078C:
/* 802D078C 002CD6CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D0790 002CD6D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0794 002CD6D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D0798 002CD6D8  7D 89 03 A6 */	mtctr r12
/* 802D079C 002CD6DC  4E 80 04 21 */	bctrl 
/* 802D07A0 002CD6E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D07A4 002CD6E4  7C 7E 1B 78 */	mr r30, r3
/* 802D07A8 002CD6E8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D07AC 002CD6EC  7D 89 03 A6 */	mtctr r12
/* 802D07B0 002CD6F0  4E 80 04 21 */	bctrl 
/* 802D07B4 002CD6F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D07B8 002CD6F8  41 82 00 2C */	beq .L_802D07E4
/* 802D07BC 002CD6FC  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 802D07C0 002CD700  28 03 00 00 */	cmplwi r3, 0
/* 802D07C4 002CD704  41 82 00 20 */	beq .L_802D07E4
/* 802D07C8 002CD708  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 802D07CC 002CD70C  38 63 00 30 */	addi r3, r3, 0x30
/* 802D07D0 002CD710  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 802D07D4 002CD714  48 14 2C 61 */	bl __eq__4ID32FUl
/* 802D07D8 002CD718  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D07DC 002CD71C  41 82 00 08 */	beq .L_802D07E4
/* 802D07E0 002CD720  3B FF 00 01 */	addi r31, r31, 1
.L_802D07E4:
/* 802D07E4 002CD724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D07E8 002CD728  28 00 00 00 */	cmplwi r0, 0
/* 802D07EC 002CD72C  40 82 00 24 */	bne .L_802D0810
/* 802D07F0 002CD730  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D07F4 002CD734  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D07F8 002CD738  81 83 00 00 */	lwz r12, 0(r3)
/* 802D07FC 002CD73C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D0800 002CD740  7D 89 03 A6 */	mtctr r12
/* 802D0804 002CD744  4E 80 04 21 */	bctrl 
/* 802D0808 002CD748  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D080C 002CD74C  48 00 00 94 */	b .L_802D08A0
.L_802D0810:
/* 802D0810 002CD750  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D0814 002CD754  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D0818 002CD758  81 83 00 00 */	lwz r12, 0(r3)
/* 802D081C 002CD75C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D0820 002CD760  7D 89 03 A6 */	mtctr r12
/* 802D0824 002CD764  4E 80 04 21 */	bctrl 
/* 802D0828 002CD768  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D082C 002CD76C  48 00 00 58 */	b .L_802D0884
.L_802D0830:
/* 802D0830 002CD770  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D0834 002CD774  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D0838 002CD778  81 83 00 00 */	lwz r12, 0(r3)
/* 802D083C 002CD77C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D0840 002CD780  7D 89 03 A6 */	mtctr r12
/* 802D0844 002CD784  4E 80 04 21 */	bctrl 
/* 802D0848 002CD788  7C 64 1B 78 */	mr r4, r3
/* 802D084C 002CD78C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802D0850 002CD790  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0854 002CD794  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D0858 002CD798  7D 89 03 A6 */	mtctr r12
/* 802D085C 002CD79C  4E 80 04 21 */	bctrl 
/* 802D0860 002CD7A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D0864 002CD7A4  40 82 00 3C */	bne .L_802D08A0
/* 802D0868 002CD7A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D086C 002CD7AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D0870 002CD7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0874 002CD7B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D0878 002CD7B8  7D 89 03 A6 */	mtctr r12
/* 802D087C 002CD7BC  4E 80 04 21 */	bctrl 
/* 802D0880 002CD7C0  90 61 00 0C */	stw r3, 0xc(r1)
.L_802D0884:
/* 802D0884 002CD7C4  81 81 00 08 */	lwz r12, 8(r1)
/* 802D0888 002CD7C8  38 61 00 08 */	addi r3, r1, 8
/* 802D088C 002CD7CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D0890 002CD7D0  7D 89 03 A6 */	mtctr r12
/* 802D0894 002CD7D4  4E 80 04 21 */	bctrl 
/* 802D0898 002CD7D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D089C 002CD7DC  41 82 FF 94 */	beq .L_802D0830
.L_802D08A0:
/* 802D08A0 002CD7E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802D08A4 002CD7E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D08A8 002CD7E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D08AC 002CD7EC  7D 89 03 A6 */	mtctr r12
/* 802D08B0 002CD7F0  4E 80 04 21 */	bctrl 
/* 802D08B4 002CD7F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802D08B8 002CD7F8  7C 04 18 40 */	cmplw r4, r3
/* 802D08BC 002CD7FC  40 82 FE D0 */	bne .L_802D078C
/* 802D08C0 002CD800  38 61 00 18 */	addi r3, r1, 0x18
/* 802D08C4 002CD804  38 80 FF FF */	li r4, -1
/* 802D08C8 002CD808  4B EC F4 9D */	bl __dt__Q24Game8StickersFv
/* 802D08CC 002CD80C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D08D0 002CD810  7F E3 FB 78 */	mr r3, r31
/* 802D08D4 002CD814  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802D08D8 002CD818  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802D08DC 002CD81C  7C 08 03 A6 */	mtlr r0
/* 802D08E0 002CD820  38 21 00 40 */	addi r1, r1, 0x40
/* 802D08E4 002CD824  4E 80 00 20 */	blr 
.endfn getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv

.fn createJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D08E8 002CD828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D08EC 002CD82C  7C 08 02 A6 */	mflr r0
/* 802D08F0 002CD830  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D08F4 002CD834  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D08F8 002CD838  7C 7F 1B 78 */	mr r31, r3
/* 802D08FC 002CD83C  38 60 00 30 */	li r3, 0x30
/* 802D0900 002CD840  4B D5 35 A5 */	bl __nw__FUl
/* 802D0904 002CD844  7C 60 1B 79 */	or. r0, r3, r3
/* 802D0908 002CD848  41 82 00 10 */	beq .L_802D0918
/* 802D090C 002CD84C  7F E4 FB 78 */	mr r4, r31
/* 802D0910 002CD850  48 00 0D 5D */	bl __ct__Q24Game13SnakeJointMgrFPQ24Game9EnemyBase
/* 802D0914 002CD854  7C 60 1B 78 */	mr r0, r3
.L_802D0918:
/* 802D0918 002CD858  90 1F 03 24 */	stw r0, 0x324(r31)
/* 802D091C 002CD85C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0920 002CD860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0924 002CD864  7C 08 03 A6 */	mtlr r0
/* 802D0928 002CD868  38 21 00 10 */	addi r1, r1, 0x10
/* 802D092C 002CD86C  4E 80 00 20 */	blr 
.endfn createJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn setupJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D0930 002CD870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0934 002CD874  7C 08 02 A6 */	mflr r0
/* 802D0938 002CD878  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D093C 002CD87C  80 63 03 24 */	lwz r3, 0x324(r3)
/* 802D0940 002CD880  48 00 0D 69 */	bl setupCallBackJoint__Q24Game13SnakeJointMgrFv
/* 802D0944 002CD884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0948 002CD888  7C 08 03 A6 */	mtlr r0
/* 802D094C 002CD88C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0950 002CD890  4E 80 00 20 */	blr 
.endfn setupJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn doAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D0954 002CD894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0958 002CD898  7C 08 02 A6 */	mflr r0
/* 802D095C 002CD89C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0960 002CD8A0  80 63 03 24 */	lwz r3, 0x324(r3)
/* 802D0964 002CD8A4  48 00 0E 45 */	bl doAnimation__Q24Game13SnakeJointMgrFv
/* 802D0968 002CD8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D096C 002CD8AC  7C 08 03 A6 */	mtlr r0
/* 802D0970 002CD8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0974 002CD8B4  4E 80 00 20 */	blr 
.endfn doAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn finishAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D0978 002CD8B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D097C 002CD8BC  7C 08 02 A6 */	mflr r0
/* 802D0980 002CD8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0984 002CD8C4  80 63 03 24 */	lwz r3, 0x324(r3)
/* 802D0988 002CD8C8  48 00 0E A1 */	bl finishAnimation__Q24Game13SnakeJointMgrFv
/* 802D098C 002CD8CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0990 002CD8D0  7C 08 03 A6 */	mtlr r0
/* 802D0994 002CD8D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0998 002CD8D8  4E 80 00 20 */	blr 
.endfn finishAnimationJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn startJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D099C 002CD8DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D09A0 002CD8E0  7C 08 02 A6 */	mflr r0
/* 802D09A4 002CD8E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D09A8 002CD8E8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802D09AC 002CD8EC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802D09B0 002CD8F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D09B4 002CD8F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D09B8 002CD8F8  7C 7E 1B 78 */	mr r30, r3
/* 802D09BC 002CD8FC  80 03 02 E4 */	lwz r0, 0x2e4(r3)
/* 802D09C0 002CD900  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802D09C4 002CD904  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802D09C8 002CD908  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802D09CC 002CD90C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D09D0 002CD910  7C 9E 02 14 */	add r4, r30, r0
/* 802D09D4 002CD914  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D09D8 002CD918  C0 24 02 EC */	lfs f1, 0x2ec(r4)
/* 802D09DC 002CD91C  EF E1 00 28 */	fsubs f31, f1, f0
/* 802D09E0 002CD920  7D 89 03 A6 */	mtctr r12
/* 802D09E4 002CD924  4E 80 04 21 */	bctrl 
/* 802D09E8 002CD928  80 63 00 0C */	lwz r3, 0xc(r3)
/* 802D09EC 002CD92C  38 80 00 03 */	li r4, 3
/* 802D09F0 002CD930  48 15 8F 65 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 802D09F4 002CD934  7C 7F 1B 78 */	mr r31, r3
/* 802D09F8 002CD938  7F C3 F3 78 */	mr r3, r30
/* 802D09FC 002CD93C  4B E3 48 71 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D0A00 002CD940  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 802D0A04 002CD944  3C 00 43 30 */	lis r0, 0x4330
/* 802D0A08 002CD948  FC 60 08 90 */	fmr f3, f1
/* 802D0A0C 002CD94C  90 01 00 08 */	stw r0, 8(r1)
/* 802D0A10 002CD950  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802D0A14 002CD954  C8 42 E5 40 */	lfd f2, lbl_8051C8A0@sda21(r2)
/* 802D0A18 002CD958  90 01 00 0C */	stw r0, 0xc(r1)
/* 802D0A1C 002CD95C  FC 20 F8 90 */	fmr f1, f31
/* 802D0A20 002CD960  C8 01 00 08 */	lfd f0, 8(r1)
/* 802D0A24 002CD964  80 7E 03 24 */	lwz r3, 0x324(r30)
/* 802D0A28 002CD968  EC 00 10 28 */	fsubs f0, f0, f2
/* 802D0A2C 002CD96C  EC 40 18 28 */	fsubs f2, f0, f3
/* 802D0A30 002CD970  48 00 0D 31 */	bl startModify__Q24Game13SnakeJointMgrFff
/* 802D0A34 002CD974  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802D0A38 002CD978  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D0A3C 002CD97C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802D0A40 002CD980  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D0A44 002CD984  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D0A48 002CD988  7C 08 03 A6 */	mtlr r0
/* 802D0A4C 002CD98C  38 21 00 30 */	addi r1, r1, 0x30
/* 802D0A50 002CD990  4E 80 00 20 */	blr 
.endfn startJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn returnJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D0A54 002CD994  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0A58 002CD998  7C 08 02 A6 */	mflr r0
/* 802D0A5C 002CD99C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0A60 002CD9A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D0A64 002CD9A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D0A68 002CD9A8  7C 7E 1B 78 */	mr r30, r3
/* 802D0A6C 002CD9AC  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802D0A70 002CD9B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0A74 002CD9B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D0A78 002CD9B8  7D 89 03 A6 */	mtctr r12
/* 802D0A7C 002CD9BC  4E 80 04 21 */	bctrl 
/* 802D0A80 002CD9C0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 802D0A84 002CD9C4  38 80 00 04 */	li r4, 4
/* 802D0A88 002CD9C8  48 15 8E CD */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 802D0A8C 002CD9CC  7C 7F 1B 78 */	mr r31, r3
/* 802D0A90 002CD9D0  7F C3 F3 78 */	mr r3, r30
/* 802D0A94 002CD9D4  4B E3 47 D9 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D0A98 002CD9D8  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 802D0A9C 002CD9DC  3C 00 43 30 */	lis r0, 0x4330
/* 802D0AA0 002CD9E0  90 01 00 08 */	stw r0, 8(r1)
/* 802D0AA4 002CD9E4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802D0AA8 002CD9E8  C8 42 E5 40 */	lfd f2, lbl_8051C8A0@sda21(r2)
/* 802D0AAC 002CD9EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 802D0AB0 002CD9F0  80 7E 03 24 */	lwz r3, 0x324(r30)
/* 802D0AB4 002CD9F4  C8 01 00 08 */	lfd f0, 8(r1)
/* 802D0AB8 002CD9F8  EC 00 10 28 */	fsubs f0, f0, f2
/* 802D0ABC 002CD9FC  EC 20 08 28 */	fsubs f1, f0, f1
/* 802D0AC0 002CDA00  48 00 0C C1 */	bl returnModify__Q24Game13SnakeJointMgrFf
/* 802D0AC4 002CDA04  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0AC8 002CDA08  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D0ACC 002CDA0C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D0AD0 002CDA10  7C 08 03 A6 */	mtlr r0
/* 802D0AD4 002CDA14  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0AD8 002CDA18  4E 80 00 20 */	blr 
.endfn returnJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn finishJointCallBack__Q34Game10SnakeWhole3ObjFv, global
/* 802D0ADC 002CDA1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0AE0 002CDA20  7C 08 02 A6 */	mflr r0
/* 802D0AE4 002CDA24  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0AE8 002CDA28  80 63 03 24 */	lwz r3, 0x324(r3)
/* 802D0AEC 002CDA2C  48 00 0C B1 */	bl finishModify__Q24Game13SnakeJointMgrFv
/* 802D0AF0 002CDA30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0AF4 002CDA34  7C 08 03 A6 */	mtlr r0
/* 802D0AF8 002CDA38  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0AFC 002CDA3C  4E 80 00 20 */	blr 
.endfn finishJointCallBack__Q34Game10SnakeWhole3ObjFv

.fn setupCollision__Q34Game10SnakeWhole3ObjFv, global
/* 802D0B00 002CDA40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0B04 002CDA44  7C 08 02 A6 */	mflr r0
/* 802D0B08 002CDA48  3C 80 62 6F */	lis r4, 0x626F6431@ha
/* 802D0B0C 002CDA4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0B10 002CDA50  38 84 64 31 */	addi r4, r4, 0x626F6431@l
/* 802D0B14 002CDA54  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802D0B18 002CDA58  4B E6 53 2D */	bl getCollPart__8CollTreeFUl
/* 802D0B1C 002CDA5C  28 03 00 00 */	cmplwi r3, 0
/* 802D0B20 002CDA60  41 82 00 08 */	beq .L_802D0B28
/* 802D0B24 002CDA64  4B E6 68 79 */	bl makeTubeTree__8CollPartFv
.L_802D0B28:
/* 802D0B28 002CDA68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0B2C 002CDA6C  7C 08 03 A6 */	mtlr r0
/* 802D0B30 002CDA70  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0B34 002CDA74  4E 80 00 20 */	blr 
.endfn setupCollision__Q34Game10SnakeWhole3ObjFv

.fn lifeIncrement__Q34Game10SnakeWhole3ObjFv, global
/* 802D0B38 002CDA78  C0 22 E5 08 */	lfs f1, lbl_8051C868@sda21(r2)
/* 802D0B3C 002CDA7C  C0 02 E5 24 */	lfs f0, lbl_8051C884@sda21(r2)
/* 802D0B40 002CDA80  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 802D0B44 002CDA84  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802D0B48 002CDA88  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 802D0B4C 002CDA8C  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802D0B50 002CDA90  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802D0B54 002CDA94  EC 01 00 2A */	fadds f0, f1, f0
/* 802D0B58 002CDA98  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802D0B5C 002CDA9C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802D0B60 002CDAA0  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802D0B64 002CDAA4  C0 04 01 04 */	lfs f0, 0x104(r4)
/* 802D0B68 002CDAA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D0B6C 002CDAAC  4C 81 00 20 */	blelr 
/* 802D0B70 002CDAB0  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802D0B74 002CDAB4  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game10SnakeWhole3ObjFv

.fn createShadowSystem__Q34Game10SnakeWhole3ObjFv, global
/* 802D0B78 002CDAB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0B7C 002CDABC  7C 08 02 A6 */	mflr r0
/* 802D0B80 002CDAC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0B84 002CDAC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0B88 002CDAC8  7C 7F 1B 78 */	mr r31, r3
/* 802D0B8C 002CDACC  38 60 00 74 */	li r3, 0x74
/* 802D0B90 002CDAD0  4B D5 33 15 */	bl __nw__FUl
/* 802D0B94 002CDAD4  7C 60 1B 79 */	or. r0, r3, r3
/* 802D0B98 002CDAD8  41 82 00 10 */	beq .L_802D0BA8
/* 802D0B9C 002CDADC  7F E4 FB 78 */	mr r4, r31
/* 802D0BA0 002CDAE0  48 02 81 65 */	bl __ct__Q34Game10SnakeWhole19SnakeWholeShadowMgrFPQ34Game10SnakeWhole3Obj
/* 802D0BA4 002CDAE4  7C 60 1B 78 */	mr r0, r3
.L_802D0BA8:
/* 802D0BA8 002CDAE8  90 1F 03 28 */	stw r0, 0x328(r31)
/* 802D0BAC 002CDAEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0BB0 002CDAF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0BB4 002CDAF4  7C 08 03 A6 */	mtlr r0
/* 802D0BB8 002CDAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0BBC 002CDAFC  4E 80 00 20 */	blr 
.endfn createShadowSystem__Q34Game10SnakeWhole3ObjFv

.fn setupShadowSystem__Q34Game10SnakeWhole3ObjFv, global
/* 802D0BC0 002CDB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0BC4 002CDB04  7C 08 02 A6 */	mflr r0
/* 802D0BC8 002CDB08  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0BCC 002CDB0C  80 63 03 28 */	lwz r3, 0x328(r3)
/* 802D0BD0 002CDB10  48 02 82 21 */	bl init__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
/* 802D0BD4 002CDB14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0BD8 002CDB18  7C 08 03 A6 */	mtlr r0
/* 802D0BDC 002CDB1C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0BE0 002CDB20  4E 80 00 20 */	blr 
.endfn setupShadowSystem__Q34Game10SnakeWhole3ObjFv

.fn doAnimationShadowSystem__Q34Game10SnakeWhole3ObjFv, global
/* 802D0BE4 002CDB24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0BE8 002CDB28  7C 08 02 A6 */	mflr r0
/* 802D0BEC 002CDB2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0BF0 002CDB30  80 63 03 28 */	lwz r3, 0x328(r3)
/* 802D0BF4 002CDB34  48 02 83 A1 */	bl update__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
/* 802D0BF8 002CDB38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0BFC 002CDB3C  7C 08 03 A6 */	mtlr r0
/* 802D0C00 002CDB40  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0C04 002CDB44  4E 80 00 20 */	blr 
.endfn doAnimationShadowSystem__Q34Game10SnakeWhole3ObjFv

.fn startJointShadow__Q34Game10SnakeWhole3ObjFv, global
/* 802D0C08 002CDB48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0C0C 002CDB4C  7C 08 02 A6 */	mflr r0
/* 802D0C10 002CDB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0C14 002CDB54  80 63 03 28 */	lwz r3, 0x328(r3)
/* 802D0C18 002CDB58  48 02 82 A1 */	bl startJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
/* 802D0C1C 002CDB5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0C20 002CDB60  7C 08 03 A6 */	mtlr r0
/* 802D0C24 002CDB64  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0C28 002CDB68  4E 80 00 20 */	blr 
.endfn startJointShadow__Q34Game10SnakeWhole3ObjFv

.fn finishJointShadow__Q34Game10SnakeWhole3ObjFv, global
/* 802D0C2C 002CDB6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0C30 002CDB70  7C 08 02 A6 */	mflr r0
/* 802D0C34 002CDB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0C38 002CDB78  80 63 03 28 */	lwz r3, 0x328(r3)
/* 802D0C3C 002CDB7C  48 02 82 F5 */	bl finishJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv
/* 802D0C40 002CDB80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0C44 002CDB84  7C 08 03 A6 */	mtlr r0
/* 802D0C48 002CDB88  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0C4C 002CDB8C  4E 80 00 20 */	blr 
.endfn finishJointShadow__Q34Game10SnakeWhole3ObjFv

.fn deleteJointShadow__Q34Game10SnakeWhole3ObjFv, global
/* 802D0C50 002CDB90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0C54 002CDB94  7C 08 02 A6 */	mflr r0
/* 802D0C58 002CDB98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0C5C 002CDB9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0C60 002CDBA0  7C 7F 1B 78 */	mr r31, r3
/* 802D0C64 002CDBA4  7F E4 FB 78 */	mr r4, r31
/* 802D0C68 002CDBA8  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802D0C6C 002CDBAC  4B F7 10 C9 */	bl addNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802D0C70 002CDBB0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802D0C74 002CDBB4  7F E4 FB 78 */	mr r4, r31
/* 802D0C78 002CDBB8  4B F7 12 8D */	bl delJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802D0C7C 002CDBBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0C80 002CDBC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0C84 002CDBC4  7C 08 03 A6 */	mtlr r0
/* 802D0C88 002CDBC8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0C8C 002CDBCC  4E 80 00 20 */	blr 
.endfn deleteJointShadow__Q34Game10SnakeWhole3ObjFv

.fn startBossAttackBGM__Q34Game10SnakeWhole3ObjFv, global
/* 802D0C90 002CDBD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0C94 002CDBD4  7C 08 02 A6 */	mflr r0
/* 802D0C98 002CDBD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0C9C 002CDBDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0CA0 002CDBE0  93 C1 00 08 */	stw r30, 8(r1)
/* 802D0CA4 002CDBE4  88 03 02 C2 */	lbz r0, 0x2c2(r3)
/* 802D0CA8 002CDBE8  28 00 00 00 */	cmplwi r0, 0
/* 802D0CAC 002CDBEC  41 82 00 10 */	beq .L_802D0CBC
/* 802D0CB0 002CDBF0  38 00 00 00 */	li r0, 0
/* 802D0CB4 002CDBF4  98 03 02 C2 */	stb r0, 0x2c2(r3)
/* 802D0CB8 002CDBF8  48 00 00 A0 */	b .L_802D0D58
.L_802D0CBC:
/* 802D0CBC 002CDBFC  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802D0CC0 002CDC00  3B E0 00 00 */	li r31, 0
/* 802D0CC4 002CDC04  7F C3 F3 78 */	mr r3, r30
/* 802D0CC8 002CDC08  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0CCC 002CDC0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0CD0 002CDC10  7D 89 03 A6 */	mtctr r12
/* 802D0CD4 002CDC14  4E 80 04 21 */	bctrl 
/* 802D0CD8 002CDC18  2C 03 00 05 */	cmpwi r3, 5
/* 802D0CDC 002CDC1C  41 82 00 3C */	beq .L_802D0D18
/* 802D0CE0 002CDC20  7F C3 F3 78 */	mr r3, r30
/* 802D0CE4 002CDC24  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0CE8 002CDC28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0CEC 002CDC2C  7D 89 03 A6 */	mtctr r12
/* 802D0CF0 002CDC30  4E 80 04 21 */	bctrl 
/* 802D0CF4 002CDC34  2C 03 00 06 */	cmpwi r3, 6
/* 802D0CF8 002CDC38  41 82 00 20 */	beq .L_802D0D18
/* 802D0CFC 002CDC3C  7F C3 F3 78 */	mr r3, r30
/* 802D0D00 002CDC40  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0D04 002CDC44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0D08 002CDC48  7D 89 03 A6 */	mtctr r12
/* 802D0D0C 002CDC4C  4E 80 04 21 */	bctrl 
/* 802D0D10 002CDC50  2C 03 00 07 */	cmpwi r3, 7
/* 802D0D14 002CDC54  40 82 00 08 */	bne .L_802D0D1C
.L_802D0D18:
/* 802D0D18 002CDC58  3B E0 00 01 */	li r31, 1
.L_802D0D1C:
/* 802D0D1C 002CDC5C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802D0D20 002CDC60  40 82 00 20 */	bne .L_802D0D40
/* 802D0D24 002CDC64  3C 60 80 49 */	lis r3, lbl_8048BC90@ha
/* 802D0D28 002CDC68  3C A0 80 49 */	lis r5, lbl_8048BCA8@ha
/* 802D0D2C 002CDC6C  38 63 BC 90 */	addi r3, r3, lbl_8048BC90@l
/* 802D0D30 002CDC70  38 80 04 54 */	li r4, 0x454
/* 802D0D34 002CDC74  38 A5 BC A8 */	addi r5, r5, lbl_8048BCA8@l
/* 802D0D38 002CDC78  4C C6 31 82 */	crclr 6
/* 802D0D3C 002CDC7C  4B D5 99 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802D0D40:
/* 802D0D40 002CDC80  7F C3 F3 78 */	mr r3, r30
/* 802D0D44 002CDC84  38 80 00 03 */	li r4, 3
/* 802D0D48 002CDC88  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0D4C 002CDC8C  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802D0D50 002CDC90  7D 89 03 A6 */	mtctr r12
/* 802D0D54 002CDC94  4E 80 04 21 */	bctrl 
.L_802D0D58:
/* 802D0D58 002CDC98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0D5C 002CDC9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0D60 002CDCA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0D64 002CDCA4  7C 08 03 A6 */	mtlr r0
/* 802D0D68 002CDCA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0D6C 002CDCAC  4E 80 00 20 */	blr 
.endfn startBossAttackBGM__Q34Game10SnakeWhole3ObjFv

.fn startBossFlickBGM__Q34Game10SnakeWhole3ObjFv, global
/* 802D0D70 002CDCB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0D74 002CDCB4  7C 08 02 A6 */	mflr r0
/* 802D0D78 002CDCB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0D7C 002CDCBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0D80 002CDCC0  3B E0 00 00 */	li r31, 0
/* 802D0D84 002CDCC4  93 C1 00 08 */	stw r30, 8(r1)
/* 802D0D88 002CDCC8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802D0D8C 002CDCCC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0D90 002CDCD0  7F C3 F3 78 */	mr r3, r30
/* 802D0D94 002CDCD4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0D98 002CDCD8  7D 89 03 A6 */	mtctr r12
/* 802D0D9C 002CDCDC  4E 80 04 21 */	bctrl 
/* 802D0DA0 002CDCE0  2C 03 00 05 */	cmpwi r3, 5
/* 802D0DA4 002CDCE4  41 82 00 3C */	beq .L_802D0DE0
/* 802D0DA8 002CDCE8  7F C3 F3 78 */	mr r3, r30
/* 802D0DAC 002CDCEC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0DB0 002CDCF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0DB4 002CDCF4  7D 89 03 A6 */	mtctr r12
/* 802D0DB8 002CDCF8  4E 80 04 21 */	bctrl 
/* 802D0DBC 002CDCFC  2C 03 00 06 */	cmpwi r3, 6
/* 802D0DC0 002CDD00  41 82 00 20 */	beq .L_802D0DE0
/* 802D0DC4 002CDD04  7F C3 F3 78 */	mr r3, r30
/* 802D0DC8 002CDD08  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0DCC 002CDD0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0DD0 002CDD10  7D 89 03 A6 */	mtctr r12
/* 802D0DD4 002CDD14  4E 80 04 21 */	bctrl 
/* 802D0DD8 002CDD18  2C 03 00 07 */	cmpwi r3, 7
/* 802D0DDC 002CDD1C  40 82 00 08 */	bne .L_802D0DE4
.L_802D0DE0:
/* 802D0DE0 002CDD20  3B E0 00 01 */	li r31, 1
.L_802D0DE4:
/* 802D0DE4 002CDD24  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802D0DE8 002CDD28  40 82 00 20 */	bne .L_802D0E08
/* 802D0DEC 002CDD2C  3C 60 80 49 */	lis r3, lbl_8048BC90@ha
/* 802D0DF0 002CDD30  3C A0 80 49 */	lis r5, lbl_8048BCA8@ha
/* 802D0DF4 002CDD34  38 63 BC 90 */	addi r3, r3, lbl_8048BC90@l
/* 802D0DF8 002CDD38  38 80 04 54 */	li r4, 0x454
/* 802D0DFC 002CDD3C  38 A5 BC A8 */	addi r5, r5, lbl_8048BCA8@l
/* 802D0E00 002CDD40  4C C6 31 82 */	crclr 6
/* 802D0E04 002CDD44  4B D5 98 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802D0E08:
/* 802D0E08 002CDD48  7F C3 F3 78 */	mr r3, r30
/* 802D0E0C 002CDD4C  38 80 00 04 */	li r4, 4
/* 802D0E10 002CDD50  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0E14 002CDD54  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802D0E18 002CDD58  7D 89 03 A6 */	mtctr r12
/* 802D0E1C 002CDD5C  4E 80 04 21 */	bctrl 
/* 802D0E20 002CDD60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0E24 002CDD64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0E28 002CDD68  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0E2C 002CDD6C  7C 08 03 A6 */	mtlr r0
/* 802D0E30 002CDD70  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0E34 002CDD74  4E 80 00 20 */	blr 
.endfn startBossFlickBGM__Q34Game10SnakeWhole3ObjFv

.fn updateBossBGM__Q34Game10SnakeWhole3ObjFv, global
/* 802D0E38 002CDD78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0E3C 002CDD7C  7C 08 02 A6 */	mflr r0
/* 802D0E40 002CDD80  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0E44 002CDD84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D0E48 002CDD88  3B E0 00 00 */	li r31, 0
/* 802D0E4C 002CDD8C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D0E50 002CDD90  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802D0E54 002CDD94  7C 7D 1B 78 */	mr r29, r3
/* 802D0E58 002CDD98  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802D0E5C 002CDD9C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0E60 002CDDA0  7F C3 F3 78 */	mr r3, r30
/* 802D0E64 002CDDA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0E68 002CDDA8  7D 89 03 A6 */	mtctr r12
/* 802D0E6C 002CDDAC  4E 80 04 21 */	bctrl 
/* 802D0E70 002CDDB0  2C 03 00 05 */	cmpwi r3, 5
/* 802D0E74 002CDDB4  41 82 00 3C */	beq .L_802D0EB0
/* 802D0E78 002CDDB8  7F C3 F3 78 */	mr r3, r30
/* 802D0E7C 002CDDBC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0E80 002CDDC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0E84 002CDDC4  7D 89 03 A6 */	mtctr r12
/* 802D0E88 002CDDC8  4E 80 04 21 */	bctrl 
/* 802D0E8C 002CDDCC  2C 03 00 06 */	cmpwi r3, 6
/* 802D0E90 002CDDD0  41 82 00 20 */	beq .L_802D0EB0
/* 802D0E94 002CDDD4  7F C3 F3 78 */	mr r3, r30
/* 802D0E98 002CDDD8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0E9C 002CDDDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0EA0 002CDDE0  7D 89 03 A6 */	mtctr r12
/* 802D0EA4 002CDDE4  4E 80 04 21 */	bctrl 
/* 802D0EA8 002CDDE8  2C 03 00 07 */	cmpwi r3, 7
/* 802D0EAC 002CDDEC  40 82 00 08 */	bne .L_802D0EB4
.L_802D0EB0:
/* 802D0EB0 002CDDF0  3B E0 00 01 */	li r31, 1
.L_802D0EB4:
/* 802D0EB4 002CDDF4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802D0EB8 002CDDF8  40 82 00 20 */	bne .L_802D0ED8
/* 802D0EBC 002CDDFC  3C 60 80 49 */	lis r3, lbl_8048BC90@ha
/* 802D0EC0 002CDE00  3C A0 80 49 */	lis r5, lbl_8048BCA8@ha
/* 802D0EC4 002CDE04  38 63 BC 90 */	addi r3, r3, lbl_8048BC90@l
/* 802D0EC8 002CDE08  38 80 04 54 */	li r4, 0x454
/* 802D0ECC 002CDE0C  38 A5 BC A8 */	addi r5, r5, lbl_8048BCA8@l
/* 802D0ED0 002CDE10  4C C6 31 82 */	crclr 6
/* 802D0ED4 002CDE14  4B D5 97 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802D0ED8:
/* 802D0ED8 002CDE18  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 802D0EDC 002CDE1C  2C 00 00 00 */	cmpwi r0, 0
/* 802D0EE0 002CDE20  41 82 00 20 */	beq .L_802D0F00
/* 802D0EE4 002CDE24  7F C3 F3 78 */	mr r3, r30
/* 802D0EE8 002CDE28  38 80 00 01 */	li r4, 1
/* 802D0EEC 002CDE2C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0EF0 002CDE30  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802D0EF4 002CDE34  7D 89 03 A6 */	mtctr r12
/* 802D0EF8 002CDE38  4E 80 04 21 */	bctrl 
/* 802D0EFC 002CDE3C  48 00 00 1C */	b .L_802D0F18
.L_802D0F00:
/* 802D0F00 002CDE40  7F C3 F3 78 */	mr r3, r30
/* 802D0F04 002CDE44  38 80 00 00 */	li r4, 0
/* 802D0F08 002CDE48  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0F0C 002CDE4C  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802D0F10 002CDE50  7D 89 03 A6 */	mtctr r12
/* 802D0F14 002CDE54  4E 80 04 21 */	bctrl 
.L_802D0F18:
/* 802D0F18 002CDE58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0F1C 002CDE5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D0F20 002CDE60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D0F24 002CDE64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802D0F28 002CDE68  7C 08 03 A6 */	mtlr r0
/* 802D0F2C 002CDE6C  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0F30 002CDE70  4E 80 00 20 */	blr 
.endfn updateBossBGM__Q34Game10SnakeWhole3ObjFv

.fn resetBossAppearBGM__Q34Game10SnakeWhole3ObjFv, global
/* 802D0F34 002CDE74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0F38 002CDE78  7C 08 02 A6 */	mflr r0
/* 802D0F3C 002CDE7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0F40 002CDE80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0F44 002CDE84  93 C1 00 08 */	stw r30, 8(r1)
/* 802D0F48 002CDE88  88 03 02 C3 */	lbz r0, 0x2c3(r3)
/* 802D0F4C 002CDE8C  28 00 00 00 */	cmplwi r0, 0
/* 802D0F50 002CDE90  40 82 00 9C */	bne .L_802D0FEC
/* 802D0F54 002CDE94  38 00 00 01 */	li r0, 1
/* 802D0F58 002CDE98  3B E0 00 00 */	li r31, 0
/* 802D0F5C 002CDE9C  98 03 02 C3 */	stb r0, 0x2c3(r3)
/* 802D0F60 002CDEA0  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802D0F64 002CDEA4  7F C3 F3 78 */	mr r3, r30
/* 802D0F68 002CDEA8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0F6C 002CDEAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0F70 002CDEB0  7D 89 03 A6 */	mtctr r12
/* 802D0F74 002CDEB4  4E 80 04 21 */	bctrl 
/* 802D0F78 002CDEB8  2C 03 00 05 */	cmpwi r3, 5
/* 802D0F7C 002CDEBC  41 82 00 3C */	beq .L_802D0FB8
/* 802D0F80 002CDEC0  7F C3 F3 78 */	mr r3, r30
/* 802D0F84 002CDEC4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0F88 002CDEC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0F8C 002CDECC  7D 89 03 A6 */	mtctr r12
/* 802D0F90 002CDED0  4E 80 04 21 */	bctrl 
/* 802D0F94 002CDED4  2C 03 00 06 */	cmpwi r3, 6
/* 802D0F98 002CDED8  41 82 00 20 */	beq .L_802D0FB8
/* 802D0F9C 002CDEDC  7F C3 F3 78 */	mr r3, r30
/* 802D0FA0 002CDEE0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D0FA4 002CDEE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D0FA8 002CDEE8  7D 89 03 A6 */	mtctr r12
/* 802D0FAC 002CDEEC  4E 80 04 21 */	bctrl 
/* 802D0FB0 002CDEF0  2C 03 00 07 */	cmpwi r3, 7
/* 802D0FB4 002CDEF4  40 82 00 08 */	bne .L_802D0FBC
.L_802D0FB8:
/* 802D0FB8 002CDEF8  3B E0 00 01 */	li r31, 1
.L_802D0FBC:
/* 802D0FBC 002CDEFC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802D0FC0 002CDF00  40 82 00 20 */	bne .L_802D0FE0
/* 802D0FC4 002CDF04  3C 60 80 49 */	lis r3, lbl_8048BC90@ha
/* 802D0FC8 002CDF08  3C A0 80 49 */	lis r5, lbl_8048BCA8@ha
/* 802D0FCC 002CDF0C  38 63 BC 90 */	addi r3, r3, lbl_8048BC90@l
/* 802D0FD0 002CDF10  38 80 04 54 */	li r4, 0x454
/* 802D0FD4 002CDF14  38 A5 BC A8 */	addi r5, r5, lbl_8048BCA8@l
/* 802D0FD8 002CDF18  4C C6 31 82 */	crclr 6
/* 802D0FDC 002CDF1C  4B D5 96 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802D0FE0:
/* 802D0FE0 002CDF20  7F C3 F3 78 */	mr r3, r30
/* 802D0FE4 002CDF24  38 80 00 00 */	li r4, 0
/* 802D0FE8 002CDF28  48 18 EA 09 */	bl setAppearFlag__Q23PSM9EnemyBossFb
.L_802D0FEC:
/* 802D0FEC 002CDF2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0FF0 002CDF30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0FF4 002CDF34  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0FF8 002CDF38  7C 08 03 A6 */	mtlr r0
/* 802D0FFC 002CDF3C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1000 002CDF40  4E 80 00 20 */	blr 
.endfn resetBossAppearBGM__Q34Game10SnakeWhole3ObjFv

.fn setBossAppearBGM__Q34Game10SnakeWhole3ObjFv, global
/* 802D1004 002CDF44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1008 002CDF48  7C 08 02 A6 */	mflr r0
/* 802D100C 002CDF4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1010 002CDF50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D1014 002CDF54  93 C1 00 08 */	stw r30, 8(r1)
/* 802D1018 002CDF58  88 03 02 C3 */	lbz r0, 0x2c3(r3)
/* 802D101C 002CDF5C  28 00 00 00 */	cmplwi r0, 0
/* 802D1020 002CDF60  41 82 00 98 */	beq .L_802D10B8
/* 802D1024 002CDF64  3B E0 00 00 */	li r31, 0
/* 802D1028 002CDF68  9B E3 02 C3 */	stb r31, 0x2c3(r3)
/* 802D102C 002CDF6C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802D1030 002CDF70  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D1034 002CDF74  7F C3 F3 78 */	mr r3, r30
/* 802D1038 002CDF78  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D103C 002CDF7C  7D 89 03 A6 */	mtctr r12
/* 802D1040 002CDF80  4E 80 04 21 */	bctrl 
/* 802D1044 002CDF84  2C 03 00 05 */	cmpwi r3, 5
/* 802D1048 002CDF88  41 82 00 3C */	beq .L_802D1084
/* 802D104C 002CDF8C  7F C3 F3 78 */	mr r3, r30
/* 802D1050 002CDF90  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D1054 002CDF94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D1058 002CDF98  7D 89 03 A6 */	mtctr r12
/* 802D105C 002CDF9C  4E 80 04 21 */	bctrl 
/* 802D1060 002CDFA0  2C 03 00 06 */	cmpwi r3, 6
/* 802D1064 002CDFA4  41 82 00 20 */	beq .L_802D1084
/* 802D1068 002CDFA8  7F C3 F3 78 */	mr r3, r30
/* 802D106C 002CDFAC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802D1070 002CDFB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D1074 002CDFB4  7D 89 03 A6 */	mtctr r12
/* 802D1078 002CDFB8  4E 80 04 21 */	bctrl 
/* 802D107C 002CDFBC  2C 03 00 07 */	cmpwi r3, 7
/* 802D1080 002CDFC0  40 82 00 08 */	bne .L_802D1088
.L_802D1084:
/* 802D1084 002CDFC4  3B E0 00 01 */	li r31, 1
.L_802D1088:
/* 802D1088 002CDFC8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802D108C 002CDFCC  40 82 00 20 */	bne .L_802D10AC
/* 802D1090 002CDFD0  3C 60 80 49 */	lis r3, lbl_8048BC90@ha
/* 802D1094 002CDFD4  3C A0 80 49 */	lis r5, lbl_8048BCA8@ha
/* 802D1098 002CDFD8  38 63 BC 90 */	addi r3, r3, lbl_8048BC90@l
/* 802D109C 002CDFDC  38 80 04 54 */	li r4, 0x454
/* 802D10A0 002CDFE0  38 A5 BC A8 */	addi r5, r5, lbl_8048BCA8@l
/* 802D10A4 002CDFE4  4C C6 31 82 */	crclr 6
/* 802D10A8 002CDFE8  4B D5 95 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802D10AC:
/* 802D10AC 002CDFEC  7F C3 F3 78 */	mr r3, r30
/* 802D10B0 002CDFF0  38 80 00 01 */	li r4, 1
/* 802D10B4 002CDFF4  48 18 E9 3D */	bl setAppearFlag__Q23PSM9EnemyBossFb
.L_802D10B8:
/* 802D10B8 002CDFF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D10BC 002CDFFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D10C0 002CE000  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D10C4 002CE004  7C 08 03 A6 */	mtlr r0
/* 802D10C8 002CE008  38 21 00 10 */	addi r1, r1, 0x10
/* 802D10CC 002CE00C  4E 80 00 20 */	blr 
.endfn setBossAppearBGM__Q34Game10SnakeWhole3ObjFv

.fn createEffect__Q34Game10SnakeWhole3ObjFv, global
/* 802D10D0 002CE010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D10D4 002CE014  7C 08 02 A6 */	mflr r0
/* 802D10D8 002CE018  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D10DC 002CE01C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D10E0 002CE020  93 C1 00 08 */	stw r30, 8(r1)
/* 802D10E4 002CE024  7C 7E 1B 78 */	mr r30, r3
/* 802D10E8 002CE028  38 60 00 54 */	li r3, 0x54
/* 802D10EC 002CE02C  4B D5 2D B9 */	bl __nw__FUl
/* 802D10F0 002CE030  7C 7F 1B 79 */	or. r31, r3, r3
/* 802D10F4 002CE034  41 82 00 28 */	beq .L_802D111C
/* 802D10F8 002CE038  38 80 00 00 */	li r4, 0
/* 802D10FC 002CE03C  38 A0 01 F2 */	li r5, 0x1f2
/* 802D1100 002CE040  38 C0 01 F3 */	li r6, 0x1f3
/* 802D1104 002CE044  38 E0 01 F4 */	li r7, 0x1f4
/* 802D1108 002CE048  39 00 01 F5 */	li r8, 0x1f5
/* 802D110C 002CE04C  48 0D F5 51 */	bl __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs
/* 802D1110 002CE050  3C 60 80 4D */	lis r3, __vt__Q23efx11TCphebiDead@ha
/* 802D1114 002CE054  38 03 24 5C */	addi r0, r3, __vt__Q23efx11TCphebiDead@l
/* 802D1118 002CE058  90 1F 00 00 */	stw r0, 0(r31)
.L_802D111C:
/* 802D111C 002CE05C  93 FE 03 2C */	stw r31, 0x32c(r30)
/* 802D1120 002CE060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D1124 002CE064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1128 002CE068  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D112C 002CE06C  7C 08 03 A6 */	mtlr r0
/* 802D1130 002CE070  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1134 002CE074  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game10SnakeWhole3ObjFv

.fn setupEffect__Q34Game10SnakeWhole3ObjFv, global
/* 802D1138 002CE078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D113C 002CE07C  7C 08 02 A6 */	mflr r0
/* 802D1140 002CE080  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1144 002CE084  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D1148 002CE088  7C 7F 1B 78 */	mr r31, r3
/* 802D114C 002CE08C  3C 60 80 49 */	lis r3, lbl_8048BCB4@ha
/* 802D1150 002CE090  38 83 BC B4 */	addi r4, r3, lbl_8048BCB4@l
/* 802D1154 002CE094  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802D1158 002CE098  48 16 DE 8D */	bl getJoint__Q28SysShape5ModelFPc
/* 802D115C 002CE09C  48 15 87 45 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D1160 002CE0A0  7C 60 1B 78 */	mr r0, r3
/* 802D1164 002CE0A4  80 7F 03 2C */	lwz r3, 0x32c(r31)
/* 802D1168 002CE0A8  7C 04 03 78 */	mr r4, r0
/* 802D116C 002CE0AC  48 0D F5 9D */	bl setMtxptr__Q23efx10TChaseMtx4FPA4_f
/* 802D1170 002CE0B0  3C 80 80 49 */	lis r4, lbl_8048BB48@ha
/* 802D1174 002CE0B4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802D1178 002CE0B8  38 84 BB 48 */	addi r4, r4, lbl_8048BB48@l
/* 802D117C 002CE0BC  48 16 DE 69 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D1180 002CE0C0  48 15 87 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D1184 002CE0C4  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802D1188 002CE0C8  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802D118C 002CE0CC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802D1190 002CE0D0  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802D1194 002CE0D4  D0 3F 02 DC */	stfs f1, 0x2dc(r31)
/* 802D1198 002CE0D8  D0 5F 02 E0 */	stfs f2, 0x2e0(r31)
/* 802D119C 002CE0DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D11A0 002CE0E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D11A4 002CE0E4  7C 08 03 A6 */	mtlr r0
/* 802D11A8 002CE0E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D11AC 002CE0EC  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game10SnakeWhole3ObjFv

.fn createAppearEffect__Q34Game10SnakeWhole3ObjFi, global
/* 802D11B0 002CE0F0  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802D11B4 002CE0F4  7C 08 02 A6 */	mflr r0
/* 802D11B8 002CE0F8  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802D11BC 002CE0FC  2C 04 00 01 */	cmpwi r4, 1
/* 802D11C0 002CE100  90 01 00 84 */	stw r0, 0x84(r1)
/* 802D11C4 002CE104  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 802D11C8 002CE108  90 01 00 08 */	stw r0, 8(r1)
/* 802D11CC 002CE10C  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802D11D0 002CE110  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802D11D4 002CE114  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802D11D8 002CE118  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802D11DC 002CE11C  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802D11E0 002CE120  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802D11E4 002CE124  41 82 00 9C */	beq .L_802D1280
/* 802D11E8 002CE128  40 80 00 10 */	bge .L_802D11F8
/* 802D11EC 002CE12C  2C 04 00 00 */	cmpwi r4, 0
/* 802D11F0 002CE130  40 80 00 14 */	bge .L_802D1204
/* 802D11F4 002CE134  48 00 01 80 */	b .L_802D1374
.L_802D11F8:
/* 802D11F8 002CE138  2C 04 00 03 */	cmpwi r4, 3
/* 802D11FC 002CE13C  40 80 01 78 */	bge .L_802D1374
/* 802D1200 002CE140  48 00 00 FC */	b .L_802D12FC
.L_802D1204:
/* 802D1204 002CE144  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802D1208 002CE148  38 C0 00 00 */	li r6, 0
/* 802D120C 002CE14C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802D1210 002CE150  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 802D1214 002CE154  90 01 00 58 */	stw r0, 0x58(r1)
/* 802D1218 002CE158  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 802D121C 002CE15C  3C 80 80 4E */	lis r4, __vt__Q23efx14THebiAphd_base@ha
/* 802D1220 002CE160  3C 60 80 4D */	lis r3, __vt__Q23efx17THebiAphd_appear1@ha
/* 802D1224 002CE164  90 01 00 58 */	stw r0, 0x58(r1)
/* 802D1228 002CE168  38 04 6E 30 */	addi r0, r4, __vt__Q23efx14THebiAphd_base@l
/* 802D122C 002CE16C  38 80 00 A0 */	li r4, 0xa0
/* 802D1230 002CE170  39 20 00 A1 */	li r9, 0xa1
/* 802D1234 002CE174  90 01 00 58 */	stw r0, 0x58(r1)
/* 802D1238 002CE178  38 03 B5 B8 */	addi r0, r3, __vt__Q23efx17THebiAphd_appear1@l
/* 802D123C 002CE17C  39 00 00 A2 */	li r8, 0xa2
/* 802D1240 002CE180  38 E0 00 A3 */	li r7, 0xa3
/* 802D1244 002CE184  38 A0 00 28 */	li r5, 0x28
/* 802D1248 002CE188  B0 81 00 5C */	sth r4, 0x5c(r1)
/* 802D124C 002CE18C  38 61 00 58 */	addi r3, r1, 0x58
/* 802D1250 002CE190  38 81 00 08 */	addi r4, r1, 8
/* 802D1254 002CE194  B1 21 00 5E */	sth r9, 0x5e(r1)
/* 802D1258 002CE198  B1 01 00 60 */	sth r8, 0x60(r1)
/* 802D125C 002CE19C  B0 E1 00 62 */	sth r7, 0x62(r1)
/* 802D1260 002CE1A0  90 C1 00 64 */	stw r6, 0x64(r1)
/* 802D1264 002CE1A4  90 C1 00 68 */	stw r6, 0x68(r1)
/* 802D1268 002CE1A8  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 802D126C 002CE1AC  90 C1 00 70 */	stw r6, 0x70(r1)
/* 802D1270 002CE1B0  90 A1 00 74 */	stw r5, 0x74(r1)
/* 802D1274 002CE1B4  90 01 00 58 */	stw r0, 0x58(r1)
/* 802D1278 002CE1B8  48 0E 28 31 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 802D127C 002CE1BC  48 00 00 F8 */	b .L_802D1374
.L_802D1280:
/* 802D1280 002CE1C0  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802D1284 002CE1C4  38 C0 00 00 */	li r6, 0
/* 802D1288 002CE1C8  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802D128C 002CE1CC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 802D1290 002CE1D0  90 01 00 38 */	stw r0, 0x38(r1)
/* 802D1294 002CE1D4  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 802D1298 002CE1D8  3C 80 80 4E */	lis r4, __vt__Q23efx14THebiAphd_base@ha
/* 802D129C 002CE1DC  3C 60 80 4D */	lis r3, __vt__Q23efx23THebiAphd_appear2_first@ha
/* 802D12A0 002CE1E0  90 01 00 38 */	stw r0, 0x38(r1)
/* 802D12A4 002CE1E4  38 04 6E 30 */	addi r0, r4, __vt__Q23efx14THebiAphd_base@l
/* 802D12A8 002CE1E8  38 80 00 A0 */	li r4, 0xa0
/* 802D12AC 002CE1EC  39 20 00 A1 */	li r9, 0xa1
/* 802D12B0 002CE1F0  90 01 00 38 */	stw r0, 0x38(r1)
/* 802D12B4 002CE1F4  38 03 B5 A4 */	addi r0, r3, __vt__Q23efx23THebiAphd_appear2_first@l
/* 802D12B8 002CE1F8  39 00 00 A2 */	li r8, 0xa2
/* 802D12BC 002CE1FC  38 E0 00 A3 */	li r7, 0xa3
/* 802D12C0 002CE200  38 A0 00 41 */	li r5, 0x41
/* 802D12C4 002CE204  B0 81 00 3C */	sth r4, 0x3c(r1)
/* 802D12C8 002CE208  38 61 00 38 */	addi r3, r1, 0x38
/* 802D12CC 002CE20C  38 81 00 08 */	addi r4, r1, 8
/* 802D12D0 002CE210  B1 21 00 3E */	sth r9, 0x3e(r1)
/* 802D12D4 002CE214  B1 01 00 40 */	sth r8, 0x40(r1)
/* 802D12D8 002CE218  B0 E1 00 42 */	sth r7, 0x42(r1)
/* 802D12DC 002CE21C  90 C1 00 44 */	stw r6, 0x44(r1)
/* 802D12E0 002CE220  90 C1 00 48 */	stw r6, 0x48(r1)
/* 802D12E4 002CE224  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 802D12E8 002CE228  90 C1 00 50 */	stw r6, 0x50(r1)
/* 802D12EC 002CE22C  90 A1 00 54 */	stw r5, 0x54(r1)
/* 802D12F0 002CE230  90 01 00 38 */	stw r0, 0x38(r1)
/* 802D12F4 002CE234  48 0E 27 B5 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 802D12F8 002CE238  48 00 00 7C */	b .L_802D1374
.L_802D12FC:
/* 802D12FC 002CE23C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802D1300 002CE240  38 C0 00 00 */	li r6, 0
/* 802D1304 002CE244  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802D1308 002CE248  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 802D130C 002CE24C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D1310 002CE250  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 802D1314 002CE254  3C 80 80 4E */	lis r4, __vt__Q23efx14THebiAphd_base@ha
/* 802D1318 002CE258  3C 60 80 4D */	lis r3, __vt__Q23efx22THebiAphd_appear2_late@ha
/* 802D131C 002CE25C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D1320 002CE260  38 04 6E 30 */	addi r0, r4, __vt__Q23efx14THebiAphd_base@l
/* 802D1324 002CE264  38 80 00 A0 */	li r4, 0xa0
/* 802D1328 002CE268  39 20 00 A1 */	li r9, 0xa1
/* 802D132C 002CE26C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D1330 002CE270  38 03 B5 90 */	addi r0, r3, __vt__Q23efx22THebiAphd_appear2_late@l
/* 802D1334 002CE274  39 00 00 A2 */	li r8, 0xa2
/* 802D1338 002CE278  38 E0 00 A3 */	li r7, 0xa3
/* 802D133C 002CE27C  38 A0 00 23 */	li r5, 0x23
/* 802D1340 002CE280  B0 81 00 1C */	sth r4, 0x1c(r1)
/* 802D1344 002CE284  38 61 00 18 */	addi r3, r1, 0x18
/* 802D1348 002CE288  38 81 00 08 */	addi r4, r1, 8
/* 802D134C 002CE28C  B1 21 00 1E */	sth r9, 0x1e(r1)
/* 802D1350 002CE290  B1 01 00 20 */	sth r8, 0x20(r1)
/* 802D1354 002CE294  B0 E1 00 22 */	sth r7, 0x22(r1)
/* 802D1358 002CE298  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802D135C 002CE29C  90 C1 00 28 */	stw r6, 0x28(r1)
/* 802D1360 002CE2A0  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 802D1364 002CE2A4  90 C1 00 30 */	stw r6, 0x30(r1)
/* 802D1368 002CE2A8  90 A1 00 34 */	stw r5, 0x34(r1)
/* 802D136C 002CE2AC  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D1370 002CE2B0  48 0E 27 39 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
.L_802D1374:
/* 802D1374 002CE2B4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802D1378 002CE2B8  7C 08 03 A6 */	mtlr r0
/* 802D137C 002CE2BC  38 21 00 80 */	addi r1, r1, 0x80
/* 802D1380 002CE2C0  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game10SnakeWhole3ObjFi

.fn createDeadStartEffect__Q34Game10SnakeWhole3ObjFv, global
/* 802D1384 002CE2C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1388 002CE2C8  7C 08 02 A6 */	mflr r0
/* 802D138C 002CE2CC  38 80 00 00 */	li r4, 0
/* 802D1390 002CE2D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1394 002CE2D4  80 63 03 2C */	lwz r3, 0x32c(r3)
/* 802D1398 002CE2D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D139C 002CE2DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D13A0 002CE2E0  7D 89 03 A6 */	mtctr r12
/* 802D13A4 002CE2E4  4E 80 04 21 */	bctrl 
/* 802D13A8 002CE2E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D13AC 002CE2EC  7C 08 03 A6 */	mtlr r0
/* 802D13B0 002CE2F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D13B4 002CE2F4  4E 80 00 20 */	blr 
.endfn createDeadStartEffect__Q34Game10SnakeWhole3ObjFv

.fn createDeadFinishEffect__Q34Game10SnakeWhole3ObjFv, global
/* 802D13B8 002CE2F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D13BC 002CE2FC  7C 08 02 A6 */	mflr r0
/* 802D13C0 002CE300  3C 80 80 49 */	lis r4, lbl_8048BB48@ha
/* 802D13C4 002CE304  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D13C8 002CE308  38 84 BB 48 */	addi r4, r4, lbl_8048BB48@l
/* 802D13CC 002CE30C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802D13D0 002CE310  48 16 DC 15 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D13D4 002CE314  48 15 84 CD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D13D8 002CE318  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D13DC 002CE31C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802D13E0 002CE320  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802D13E4 002CE324  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 802D13E8 002CE328  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802D13EC 002CE32C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802D13F0 002CE330  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802D13F4 002CE334  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802D13F8 002CE338  90 81 00 08 */	stw r4, 8(r1)
/* 802D13FC 002CE33C  3C 60 80 4D */	lis r3, __vt__Q23efx15TCphebiDeadHane@ha
/* 802D1400 002CE340  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 802D1404 002CE344  38 C0 01 F6 */	li r6, 0x1f6
/* 802D1408 002CE348  38 A0 00 00 */	li r5, 0
/* 802D140C 002CE34C  90 01 00 08 */	stw r0, 8(r1)
/* 802D1410 002CE350  38 03 24 48 */	addi r0, r3, __vt__Q23efx15TCphebiDeadHane@l
/* 802D1414 002CE354  38 61 00 08 */	addi r3, r1, 8
/* 802D1418 002CE358  90 81 00 14 */	stw r4, 0x14(r1)
/* 802D141C 002CE35C  38 81 00 14 */	addi r4, r1, 0x14
/* 802D1420 002CE360  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802D1424 002CE364  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802D1428 002CE368  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802D142C 002CE36C  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802D1430 002CE370  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802D1434 002CE374  90 01 00 08 */	stw r0, 8(r1)
/* 802D1438 002CE378  48 0D DB 4D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802D143C 002CE37C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D1440 002CE380  7C 08 03 A6 */	mtlr r0
/* 802D1444 002CE384  38 21 00 30 */	addi r1, r1, 0x30
/* 802D1448 002CE388  4E 80 00 20 */	blr 
.endfn createDeadFinishEffect__Q34Game10SnakeWhole3ObjFv

.fn createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf, global
/* 802D144C 002CE38C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1450 002CE390  7C 08 02 A6 */	mflr r0
/* 802D1454 002CE394  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1458 002CE398  80 03 02 80 */	lwz r0, 0x280(r3)
/* 802D145C 002CE39C  28 00 00 00 */	cmplwi r0, 0
/* 802D1460 002CE3A0  41 82 00 10 */	beq .L_802D1470
/* 802D1464 002CE3A4  38 83 01 8C */	addi r4, r3, 0x18c
/* 802D1468 002CE3A8  4B E3 25 91 */	bl "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802D146C 002CE3AC  48 00 00 0C */	b .L_802D1478
.L_802D1470:
/* 802D1470 002CE3B0  38 83 01 8C */	addi r4, r3, 0x18c
/* 802D1474 002CE3B4  4B E3 24 CD */	bl "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_802D1478:
/* 802D1478 002CE3B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D147C 002CE3BC  7C 08 03 A6 */	mtlr r0
/* 802D1480 002CE3C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1484 002CE3C4  4E 80 00 20 */	blr 
.endfn createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf

.fn effectDrawOn__Q34Game10SnakeWhole3ObjFv, global
/* 802D1488 002CE3C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D148C 002CE3CC  7C 08 02 A6 */	mflr r0
/* 802D1490 002CE3D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1494 002CE3D4  80 63 03 2C */	lwz r3, 0x32c(r3)
/* 802D1498 002CE3D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D149C 002CE3DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D14A0 002CE3E0  7D 89 03 A6 */	mtctr r12
/* 802D14A4 002CE3E4  4E 80 04 21 */	bctrl 
/* 802D14A8 002CE3E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D14AC 002CE3EC  7C 08 03 A6 */	mtlr r0
/* 802D14B0 002CE3F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D14B4 002CE3F4  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game10SnakeWhole3ObjFv

.fn effectDrawOff__Q34Game10SnakeWhole3ObjFv, global
/* 802D14B8 002CE3F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D14BC 002CE3FC  7C 08 02 A6 */	mflr r0
/* 802D14C0 002CE400  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D14C4 002CE404  80 63 03 2C */	lwz r3, 0x32c(r3)
/* 802D14C8 002CE408  81 83 00 00 */	lwz r12, 0(r3)
/* 802D14CC 002CE40C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D14D0 002CE410  7D 89 03 A6 */	mtctr r12
/* 802D14D4 002CE414  4E 80 04 21 */	bctrl 
/* 802D14D8 002CE418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D14DC 002CE41C  7C 08 03 A6 */	mtlr r0
/* 802D14E0 002CE420  38 21 00 10 */	addi r1, r1, 0x10
/* 802D14E4 002CE424  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game10SnakeWhole3ObjFv

.fn createEfxHamon__Q34Game10SnakeWhole3ObjFv, global
/* 802D14E8 002CE428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D14EC 002CE42C  7C 08 02 A6 */	mflr r0
/* 802D14F0 002CE430  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D14F4 002CE434  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D14F8 002CE438  7C 7F 1B 78 */	mr r31, r3
/* 802D14FC 002CE43C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D1500 002CE440  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 802D1504 002CE444  7D 89 03 A6 */	mtctr r12
/* 802D1508 002CE448  4E 80 04 21 */	bctrl 
/* 802D150C 002CE44C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D1510 002CE450  40 82 00 0C */	bne .L_802D151C
/* 802D1514 002CE454  7F E3 FB 78 */	mr r3, r31
/* 802D1518 002CE458  4B E3 03 ED */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_802D151C:
/* 802D151C 002CE45C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D1520 002CE460  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1524 002CE464  7C 08 03 A6 */	mtlr r0
/* 802D1528 002CE468  38 21 00 10 */	addi r1, r1, 0x10
/* 802D152C 002CE46C  4E 80 00 20 */	blr 
.endfn createEfxHamon__Q34Game10SnakeWhole3ObjFv

.fn isUnderground__Q34Game10SnakeWhole3ObjFv, weak
/* 802D1530 002CE470  88 63 02 C0 */	lbz r3, 0x2c0(r3)
/* 802D1534 002CE474  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game10SnakeWhole3ObjFv

.fn getFitEffectPos__Q34Game10SnakeWhole3ObjFv, global
/* 802D1538 002CE478  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D153C 002CE47C  7C 08 02 A6 */	mflr r0
/* 802D1540 002CE480  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1544 002CE484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D1548 002CE488  7C 7F 1B 78 */	mr r31, r3
/* 802D154C 002CE48C  3C 60 80 49 */	lis r3, lbl_8048BB48@ha
/* 802D1550 002CE490  38 83 BB 48 */	addi r4, r3, lbl_8048BB48@l
/* 802D1554 002CE494  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802D1558 002CE498  48 16 DA 8D */	bl getJoint__Q28SysShape5ModelFPc
/* 802D155C 002CE49C  48 15 83 45 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D1560 002CE4A0  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802D1564 002CE4A4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802D1568 002CE4A8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802D156C 002CE4AC  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 802D1570 002CE4B0  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802D1574 002CE4B4  D0 3F 02 DC */	stfs f1, 0x2dc(r31)
/* 802D1578 002CE4B8  D0 5F 02 E0 */	stfs f2, 0x2e0(r31)
/* 802D157C 002CE4BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1580 002CE4C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D1584 002CE4C4  7C 08 03 A6 */	mtlr r0
/* 802D1588 002CE4C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D158C 002CE4CC  4E 80 00 20 */	blr 
.endfn getFitEffectPos__Q34Game10SnakeWhole3ObjFv

.fn inWaterCallback__Q34Game10SnakeWhole3ObjFPQ24Game8WaterBox, weak
/* 802D1590 002CE4D0  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game10SnakeWhole3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game10SnakeWhole3ObjFv, weak
/* 802D1594 002CE4D4  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game10SnakeWhole3ObjFv

.fn getDamageCoeStoneState__Q34Game10SnakeWhole3ObjFv, weak
/* 802D1598 002CE4D8  C0 22 E5 70 */	lfs f1, lbl_8051C8D0@sda21(r2)
/* 802D159C 002CE4DC  4E 80 00 20 */	blr 
.endfn getDamageCoeStoneState__Q34Game10SnakeWhole3ObjFv

.fn getMouthSlots__Q34Game10SnakeWhole3ObjFv, weak
/* 802D15A0 002CE4E0  38 63 02 D0 */	addi r3, r3, 0x2d0
/* 802D15A4 002CE4E4  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game10SnakeWhole3ObjFv

.fn throwupItemInDeathProcedure__Q34Game10SnakeWhole3ObjFv, weak
/* 802D15A8 002CE4E8  4E 80 00 20 */	blr 
.endfn throwupItemInDeathProcedure__Q34Game10SnakeWhole3ObjFv

.fn getDownSmokeScale__Q34Game10SnakeWhole3ObjFv, weak
/* 802D15AC 002CE4EC  C0 22 E5 74 */	lfs f1, lbl_8051C8D4@sda21(r2)
/* 802D15B0 002CE4F0  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game10SnakeWhole3ObjFv

.fn getEnemyTypeID__Q34Game10SnakeWhole3ObjFv, weak
/* 802D15B4 002CE4F4  38 60 00 46 */	li r3, 0x46
/* 802D15B8 002CE4F8  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game10SnakeWhole3ObjFv

.fn "@816@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 802D15BC 002CE4FC  39 60 00 0C */	li r11, 0xc
/* 802D15C0 002CE500  7D 63 58 2E */	lwzx r11, r3, r11
/* 802D15C4 002CE504  7C 63 5A 14 */	add r3, r3, r11
/* 802D15C8 002CE508  38 63 FC D0 */	addi r3, r3, -816
/* 802D15CC 002CE50C  4B E3 53 50 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@816@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@816@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 802D15D0 002CE510  39 60 00 0C */	li r11, 0xc
/* 802D15D4 002CE514  7D 63 58 2E */	lwzx r11, r3, r11
/* 802D15D8 002CE518  7C 63 5A 14 */	add r3, r3, r11
/* 802D15DC 002CE51C  38 63 FC D0 */	addi r3, r3, -816
/* 802D15E0 002CE520  4B E3 50 C8 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@816@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@816@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 802D15E4 002CE524  39 60 00 0C */	li r11, 0xc
/* 802D15E8 002CE528  7D 63 58 2E */	lwzx r11, r3, r11
/* 802D15EC 002CE52C  7C 63 5A 14 */	add r3, r3, r11
/* 802D15F0 002CE530  38 63 FC D0 */	addi r3, r3, -816
/* 802D15F4 002CE534  4B E3 50 D4 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@816@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@816@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 802D15F8 002CE538  39 60 00 0C */	li r11, 0xc
/* 802D15FC 002CE53C  7D 63 58 2E */	lwzx r11, r3, r11
/* 802D1600 002CE540  7C 63 5A 14 */	add r3, r3, r11
/* 802D1604 002CE544  38 63 FC D0 */	addi r3, r3, -816
/* 802D1608 002CE548  4B E3 54 70 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@816@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@816@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 802D160C 002CE54C  39 60 00 0C */	li r11, 0xc
/* 802D1610 002CE550  7D 63 58 2E */	lwzx r11, r3, r11
/* 802D1614 002CE554  7C 63 5A 14 */	add r3, r3, r11
/* 802D1618 002CE558  38 63 FC D0 */	addi r3, r3, -816
/* 802D161C 002CE55C  4B E3 54 30 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@816@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@816@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 802D1620 002CE560  39 60 00 0C */	li r11, 0xc
/* 802D1624 002CE564  7D 63 58 2E */	lwzx r11, r3, r11
/* 802D1628 002CE568  7C 63 5A 14 */	add r3, r3, r11
/* 802D162C 002CE56C  38 63 FC D0 */	addi r3, r3, -816
/* 802D1630 002CE570  4B E3 50 70 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@816@12@viewGetShape__Q24Game9EnemyBaseFv"
