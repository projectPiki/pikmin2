.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048DC88
lbl_8048DC88:
	.4byte 0x8CC592E8
	.4byte 0x83608372
	.4byte 0x837A8345
	.4byte 0x835F8343
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game13FixMiniHoudai3Obj
__vt__Q34Game13FixMiniHoudai3Obj:
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
	.4byte onInit__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game10MiniHoudai3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game10MiniHoudai3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game13FixMiniHoudai3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10MiniHoudai3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10MiniHoudai3ObjFv
	.4byte doUpdateCommon__Q34Game10MiniHoudai3ObjFv
	.4byte doUpdateCarcass__Q34Game10MiniHoudai3ObjFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game10MiniHoudai3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10MiniHoudai3ObjFR8Graphics
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
	.4byte initWalkSmokeEffect__Q34Game10MiniHoudai3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10MiniHoudai3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game13FixMiniHoudai3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q34Game10MiniHoudai3ObjFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10MiniHoudai3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game10MiniHoudai3ObjFv
	.4byte doFinishStoneState__Q34Game10MiniHoudai3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game10MiniHoudai3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game10MiniHoudai3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10MiniHoudai3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q34Game10MiniHoudai3ObjFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10MiniHoudai3ObjFv
	.4byte doStartMovie__Q34Game10MiniHoudai3ObjFv
	.4byte doEndMovie__Q34Game10MiniHoudai3ObjFv
	.4byte setFSM__Q34Game10MiniHoudai3ObjFPQ34Game10MiniHoudai3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@776@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q34Game13FixMiniHoudai3Mgr
__vt__Q34Game13FixMiniHoudai3Mgr:
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game12EnemyMgrBaseFv
	.4byte doEntry__Q24Game12EnemyMgrBaseFv
	.4byte doSetView__Q24Game12EnemyMgrBaseFi
	.4byte doViewCalc__Q24Game12EnemyMgrBaseFv
	.4byte doSimulation__Q24Game12EnemyMgrBaseFf
	.4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q34Game13FixMiniHoudai3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game13FixMiniHoudai3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	.4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
	.4byte getGenerator__Q24Game12EnemyMgrBaseCFv
	.4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
	.4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
	.4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
	.4byte startMovie__Q24Game12EnemyMgrBaseFv
	.4byte endMovie__Q24Game12EnemyMgrBaseFv
	.4byte get__Q24Game12EnemyMgrBaseFPv
	.4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
	.4byte createObj__Q34Game13FixMiniHoudai3MgrFi
	.4byte getEnemy__Q34Game13FixMiniHoudai3MgrFi
	.4byte doAlloc__Q34Game13FixMiniHoudai3MgrFv
	.4byte getEnemyTypeID__Q34Game13FixMiniHoudai3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game10MiniHoudai3MgrFv
	.4byte loadAnimData__Q34Game10MiniHoudai3MgrFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game10MiniHoudai3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game13FixMiniHoudai3MgrFiUc
__ct__Q34Game13FixMiniHoudai3MgrFiUc:
/* 80301688 002FE5C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030168C 002FE5CC  7C 08 02 A6 */	mflr r0
/* 80301690 002FE5D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80301694 002FE5D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80301698 002FE5D8  7C 7F 1B 78 */	mr r31, r3
/* 8030169C 002FE5DC  4B FE A6 B9 */	bl __ct__Q34Game10MiniHoudai3MgrFiUc
/* 803016A0 002FE5E0  3C 60 80 4D */	lis r3, __vt__Q34Game13FixMiniHoudai3Mgr@ha
/* 803016A4 002FE5E4  3C 80 80 49 */	lis r4, lbl_8048DC88@ha
/* 803016A8 002FE5E8  38 A3 79 CC */	addi r5, r3, __vt__Q34Game13FixMiniHoudai3Mgr@l
/* 803016AC 002FE5EC  7F E3 FB 78 */	mr r3, r31
/* 803016B0 002FE5F0  90 BF 00 00 */	stw r5, 0(r31)
/* 803016B4 002FE5F4  38 A5 00 38 */	addi r5, r5, 0x38
/* 803016B8 002FE5F8  38 04 DC 88 */	addi r0, r4, lbl_8048DC88@l
/* 803016BC 002FE5FC  90 BF 00 04 */	stw r5, 4(r31)
/* 803016C0 002FE600  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803016C4 002FE604  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803016C8 002FE608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803016CC 002FE60C  7C 08 03 A6 */	mtlr r0
/* 803016D0 002FE610  38 21 00 10 */	addi r1, r1, 0x10
/* 803016D4 002FE614  4E 80 00 20 */	blr 

.global doAlloc__Q34Game13FixMiniHoudai3MgrFv
doAlloc__Q34Game13FixMiniHoudai3MgrFv:
/* 803016D8 002FE618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803016DC 002FE61C  7C 08 02 A6 */	mflr r0
/* 803016E0 002FE620  90 01 00 14 */	stw r0, 0x14(r1)
/* 803016E4 002FE624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803016E8 002FE628  7C 7F 1B 78 */	mr r31, r3
/* 803016EC 002FE62C  38 60 08 58 */	li r3, 0x858
/* 803016F0 002FE630  4B D2 27 B5 */	bl __nw__FUl
/* 803016F4 002FE634  7C 64 1B 79 */	or. r4, r3, r3
/* 803016F8 002FE638  41 82 00 0C */	beq lbl_80301704
/* 803016FC 002FE63C  4B FF FB 95 */	bl __ct__Q34Game10MiniHoudai5ParmsFv
/* 80301700 002FE640  7C 64 1B 78 */	mr r4, r3
lbl_80301704:
/* 80301704 002FE644  7F E3 FB 78 */	mr r3, r31
/* 80301708 002FE648  4B E2 E1 95 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8030170C 002FE64C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80301710 002FE650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80301714 002FE654  7C 08 03 A6 */	mtlr r0
/* 80301718 002FE658  38 21 00 10 */	addi r1, r1, 0x10
/* 8030171C 002FE65C  4E 80 00 20 */	blr 

.global createObj__Q34Game13FixMiniHoudai3MgrFi
createObj__Q34Game13FixMiniHoudai3MgrFi:
/* 80301720 002FE660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80301724 002FE664  7C 08 02 A6 */	mflr r0
/* 80301728 002FE668  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030172C 002FE66C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80301730 002FE670  7C 9F 23 78 */	mr r31, r4
/* 80301734 002FE674  93 C1 00 08 */	stw r30, 8(r1)
/* 80301738 002FE678  7C 7E 1B 78 */	mr r30, r3
/* 8030173C 002FE67C  1C 7F 03 18 */	mulli r3, r31, 0x318
/* 80301740 002FE680  38 63 00 10 */	addi r3, r3, 0x10
/* 80301744 002FE684  4B D2 28 69 */	bl __nwa__FUl
/* 80301748 002FE688  3C 80 80 30 */	lis r4, __ct__Q34Game13FixMiniHoudai3ObjFv@ha
/* 8030174C 002FE68C  3C A0 80 30 */	lis r5, __dt__Q34Game13FixMiniHoudai3ObjFv@ha
/* 80301750 002FE690  38 84 19 5C */	addi r4, r4, __ct__Q34Game13FixMiniHoudai3ObjFv@l
/* 80301754 002FE694  7F E7 FB 78 */	mr r7, r31
/* 80301758 002FE698  38 A5 17 80 */	addi r5, r5, __dt__Q34Game13FixMiniHoudai3ObjFv@l
/* 8030175C 002FE69C  38 C0 03 18 */	li r6, 0x318
/* 80301760 002FE6A0  4B DC 02 91 */	bl __construct_new_array
/* 80301764 002FE6A4  90 7E 00 44 */	stw r3, 0x44(r30)
/* 80301768 002FE6A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030176C 002FE6AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80301770 002FE6B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80301774 002FE6B4  7C 08 03 A6 */	mtlr r0
/* 80301778 002FE6B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8030177C 002FE6BC  4E 80 00 20 */	blr 

.global __dt__Q34Game13FixMiniHoudai3ObjFv
__dt__Q34Game13FixMiniHoudai3ObjFv:
/* 80301780 002FE6C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80301784 002FE6C4  7C 08 02 A6 */	mflr r0
/* 80301788 002FE6C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030178C 002FE6CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80301790 002FE6D0  7C 9F 23 78 */	mr r31, r4
/* 80301794 002FE6D4  93 C1 00 08 */	stw r30, 8(r1)
/* 80301798 002FE6D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8030179C 002FE6DC  41 82 00 B4 */	beq lbl_80301850
/* 803017A0 002FE6E0  3C 60 80 4D */	lis r3, __vt__Q34Game13FixMiniHoudai3Obj@ha
/* 803017A4 002FE6E4  38 BE 03 08 */	addi r5, r30, 0x308
/* 803017A8 002FE6E8  38 83 76 A0 */	addi r4, r3, __vt__Q34Game13FixMiniHoudai3Obj@l
/* 803017AC 002FE6EC  90 9E 00 00 */	stw r4, 0(r30)
/* 803017B0 002FE6F0  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 803017B4 002FE6F4  38 04 02 FC */	addi r0, r4, 0x2fc
/* 803017B8 002FE6F8  90 7E 01 78 */	stw r3, 0x178(r30)
/* 803017BC 002FE6FC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 803017C0 002FE700  90 03 00 00 */	stw r0, 0(r3)
/* 803017C4 002FE704  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 803017C8 002FE708  7C 03 28 50 */	subf r0, r3, r5
/* 803017CC 002FE70C  90 03 00 0C */	stw r0, 0xc(r3)
/* 803017D0 002FE710  41 82 00 70 */	beq lbl_80301840
/* 803017D4 002FE714  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3Obj@ha
/* 803017D8 002FE718  38 83 49 2C */	addi r4, r3, __vt__Q34Game10MiniHoudai3Obj@l
/* 803017DC 002FE71C  90 9E 00 00 */	stw r4, 0(r30)
/* 803017E0 002FE720  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 803017E4 002FE724  38 04 02 FC */	addi r0, r4, 0x2fc
/* 803017E8 002FE728  90 7E 01 78 */	stw r3, 0x178(r30)
/* 803017EC 002FE72C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 803017F0 002FE730  90 03 00 00 */	stw r0, 0(r3)
/* 803017F4 002FE734  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 803017F8 002FE738  7C 03 28 50 */	subf r0, r3, r5
/* 803017FC 002FE73C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80301800 002FE740  41 82 00 40 */	beq lbl_80301840
/* 80301804 002FE744  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80301808 002FE748  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8030180C 002FE74C  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80301810 002FE750  38 7E 02 90 */	addi r3, r30, 0x290
/* 80301814 002FE754  90 9E 00 00 */	stw r4, 0(r30)
/* 80301818 002FE758  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8030181C 002FE75C  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80301820 002FE760  38 80 FF FF */	li r4, -1
/* 80301824 002FE764  90 BE 01 78 */	stw r5, 0x178(r30)
/* 80301828 002FE768  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8030182C 002FE76C  90 C5 00 00 */	stw r6, 0(r5)
/* 80301830 002FE770  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 80301834 002FE774  7C 05 00 50 */	subf r0, r5, r0
/* 80301838 002FE778  90 05 00 0C */	stw r0, 0xc(r5)
/* 8030183C 002FE77C  48 10 FD 4D */	bl __dt__5CNodeFv
lbl_80301840:
/* 80301840 002FE780  7F E0 07 35 */	extsh. r0, r31
/* 80301844 002FE784  40 81 00 0C */	ble lbl_80301850
/* 80301848 002FE788  7F C3 F3 78 */	mr r3, r30
/* 8030184C 002FE78C  4B D2 28 69 */	bl __dl__FPv
lbl_80301850:
/* 80301850 002FE790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80301854 002FE794  7F C3 F3 78 */	mr r3, r30
/* 80301858 002FE798  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030185C 002FE79C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80301860 002FE7A0  7C 08 03 A6 */	mtlr r0
/* 80301864 002FE7A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80301868 002FE7A8  4E 80 00 20 */	blr 

.global getEnemy__Q34Game13FixMiniHoudai3MgrFi
getEnemy__Q34Game13FixMiniHoudai3MgrFi:
/* 8030186C 002FE7AC  1C 04 03 18 */	mulli r0, r4, 0x318
/* 80301870 002FE7B0  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80301874 002FE7B4  7C 63 02 14 */	add r3, r3, r0
/* 80301878 002FE7B8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game13FixMiniHoudai3ObjFv
getEnemyTypeID__Q34Game13FixMiniHoudai3ObjFv:
/* 8030187C 002FE7BC  38 60 00 61 */	li r3, 0x61
/* 80301880 002FE7C0  4E 80 00 20 */	blr 

.global __dt__Q34Game13FixMiniHoudai3MgrFv
__dt__Q34Game13FixMiniHoudai3MgrFv:
/* 80301884 002FE7C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80301888 002FE7C8  7C 08 02 A6 */	mflr r0
/* 8030188C 002FE7CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80301890 002FE7D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80301894 002FE7D4  7C 9F 23 78 */	mr r31, r4
/* 80301898 002FE7D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8030189C 002FE7DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803018A0 002FE7E0  41 82 00 90 */	beq lbl_80301930
/* 803018A4 002FE7E4  3C 60 80 4D */	lis r3, __vt__Q34Game13FixMiniHoudai3Mgr@ha
/* 803018A8 002FE7E8  38 63 79 CC */	addi r3, r3, __vt__Q34Game13FixMiniHoudai3Mgr@l
/* 803018AC 002FE7EC  90 7E 00 00 */	stw r3, 0(r30)
/* 803018B0 002FE7F0  38 03 00 38 */	addi r0, r3, 0x38
/* 803018B4 002FE7F4  90 1E 00 04 */	stw r0, 4(r30)
/* 803018B8 002FE7F8  41 82 00 68 */	beq lbl_80301920
/* 803018BC 002FE7FC  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3Mgr@ha
/* 803018C0 002FE800  38 63 47 50 */	addi r3, r3, __vt__Q34Game10MiniHoudai3Mgr@l
/* 803018C4 002FE804  90 7E 00 00 */	stw r3, 0(r30)
/* 803018C8 002FE808  38 03 00 38 */	addi r0, r3, 0x38
/* 803018CC 002FE80C  90 1E 00 04 */	stw r0, 4(r30)
/* 803018D0 002FE810  41 82 00 50 */	beq lbl_80301920
/* 803018D4 002FE814  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 803018D8 002FE818  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 803018DC 002FE81C  90 7E 00 00 */	stw r3, 0(r30)
/* 803018E0 002FE820  38 03 00 38 */	addi r0, r3, 0x38
/* 803018E4 002FE824  90 1E 00 04 */	stw r0, 4(r30)
/* 803018E8 002FE828  41 82 00 38 */	beq lbl_80301920
/* 803018EC 002FE82C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 803018F0 002FE830  34 1E 00 04 */	addic. r0, r30, 4
/* 803018F4 002FE834  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 803018F8 002FE838  90 7E 00 00 */	stw r3, 0(r30)
/* 803018FC 002FE83C  38 03 00 38 */	addi r0, r3, 0x38
/* 80301900 002FE840  90 1E 00 04 */	stw r0, 4(r30)
/* 80301904 002FE844  41 82 00 1C */	beq lbl_80301920
/* 80301908 002FE848  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8030190C 002FE84C  38 7E 00 04 */	addi r3, r30, 4
/* 80301910 002FE850  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80301914 002FE854  38 80 00 00 */	li r4, 0
/* 80301918 002FE858  90 1E 00 04 */	stw r0, 4(r30)
/* 8030191C 002FE85C  48 10 FC 6D */	bl __dt__5CNodeFv
lbl_80301920:
/* 80301920 002FE860  7F E0 07 35 */	extsh. r0, r31
/* 80301924 002FE864  40 81 00 0C */	ble lbl_80301930
/* 80301928 002FE868  7F C3 F3 78 */	mr r3, r30
/* 8030192C 002FE86C  4B D2 27 89 */	bl __dl__FPv
lbl_80301930:
/* 80301930 002FE870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80301934 002FE874  7F C3 F3 78 */	mr r3, r30
/* 80301938 002FE878  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030193C 002FE87C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80301940 002FE880  7C 08 03 A6 */	mtlr r0
/* 80301944 002FE884  38 21 00 10 */	addi r1, r1, 0x10
/* 80301948 002FE888  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game13FixMiniHoudai3MgrFv
getEnemyTypeID__Q34Game13FixMiniHoudai3MgrFv:
/* 8030194C 002FE88C  38 60 00 61 */	li r3, 0x61
/* 80301950 002FE890  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game13FixMiniHoudai3MgrFv"
"@4@__dt__Q34Game13FixMiniHoudai3MgrFv":
/* 80301954 002FE894  38 63 FF FC */	addi r3, r3, -4
/* 80301958 002FE898  4B FF FF 2C */	b __dt__Q34Game13FixMiniHoudai3MgrFv
