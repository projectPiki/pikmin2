.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80485E80, local
	.asciz "tobinnko"
.endobj lbl_80485E80

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Tobi3Obj, global
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
	.4byte onInit__Q34Game4Tobi3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Tobi3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game4Tobi3ObjFv
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
	.4byte getShadowParam__Q34Game4Tobi3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Tobi3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Tobi3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Tobi3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Tobi3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game4Tobi3ObjFv
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
	.4byte getEnemyTypeID__Q34Game4Tobi3ObjFv
	.4byte getMouthSlots__Q34Game4Tobi3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game4Tobi3ObjFv
	.4byte doFinishStoneState__Q34Game4Tobi3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game4Tobi3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game4Tobi3ObjFv
	.4byte lifeRecover__Q34Game4Tobi3ObjFv
	.4byte startCarcassMotion__Q34Game4Tobi3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Tobi3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game4Tobi3ObjFPQ34Game4Tobi3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@744@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game4Tobi3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AF68, local
	.asciz "kosijnt"
.endobj lbl_8051AF68
.balign 4
.obj lbl_8051AF70, local
	.float 0.0
.endobj lbl_8051AF70
.obj lbl_8051AF74, local
	.float 1.0
.endobj lbl_8051AF74
.obj lbl_8051AF78, local
	.float 9.0
.endobj lbl_8051AF78
.obj lbl_8051AF7C, local
	.float 50.0
.endobj lbl_8051AF7C
.obj lbl_8051AF80, local
	.float 2.5
.endobj lbl_8051AF80
.obj lbl_8051AF84, local
	.float 30.0
.endobj lbl_8051AF84
.balign 4
.obj lbl_8051AF88, local
	.asciz "kamujnt"
.endobj lbl_8051AF88
.balign 4
.obj lbl_8051AF90, local
	.float 15.0
.endobj lbl_8051AF90
.obj lbl_8051AF94, local
	.float 0.001
.endobj lbl_8051AF94
.obj lbl_8051AF98, local
	.float 0.5
.endobj lbl_8051AF98
.obj lbl_8051AF9C, local # tau
	.float 6.2831855
.endobj lbl_8051AF9C
.obj lbl_8051AFA0, local
	.float 32768.0
.endobj lbl_8051AFA0
.obj lbl_8051AFA4, local
	.float 325.9493
.endobj lbl_8051AFA4
.obj lbl_8051AFA8, local
	.float -325.9493
.endobj lbl_8051AFA8
.obj lbl_8051AFAC, local
	.float 2.0
.endobj lbl_8051AFAC
.balign 8
.obj lbl_8051AFB0, local
	.8byte 0x4330000080000000
.endobj lbl_8051AFB0
.obj lbl_8051AFB8, local
	.float 20.0
.endobj lbl_8051AFB8
.obj lbl_8051AFBC, local
	.float 5.0
.endobj lbl_8051AFBC
.obj lbl_8051AFC0, local
	.float -20.0
.endobj lbl_8051AFC0
.obj lbl_8051AFC4, local
	.float 250.0
.endobj lbl_8051AFC4
.obj lbl_8051AFC8, local
	.float 0.75
.endobj lbl_8051AFC8
.obj lbl_8051AFCC, local # pi
	.float 3.1415927
.endobj lbl_8051AFCC
.obj lbl_8051AFD0, local
	.float 0.0055555557
.endobj lbl_8051AFD0
.obj lbl_8051AFD4, local
	.float 0.7
.endobj lbl_8051AFD4
.obj lbl_8051AFD8, local
	.float 0.35
.endobj lbl_8051AFD8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game4Tobi3ObjFv, global
/* 802698AC 002667EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802698B0 002667F0  7C 08 02 A6 */	mflr r0
/* 802698B4 002667F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802698B8 002667F8  7C 80 07 35 */	extsh. r0, r4
/* 802698BC 002667FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802698C0 00266800  7C 7F 1B 78 */	mr r31, r3
/* 802698C4 00266804  93 C1 00 08 */	stw r30, 8(r1)
/* 802698C8 00266808  41 82 00 24 */	beq .L_802698EC
/* 802698CC 0026680C  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 802698D0 00266810  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802698D4 00266814  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802698D8 00266818  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802698DC 0026681C  38 00 00 00 */	li r0, 0
/* 802698E0 00266820  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802698E4 00266824  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 802698E8 00266828  90 1F 02 F0 */	stw r0, 0x2f0(r31)
.L_802698EC:
/* 802698EC 0026682C  7F E3 FB 78 */	mr r3, r31
/* 802698F0 00266830  38 80 00 00 */	li r4, 0
/* 802698F4 00266834  4B E9 7A AD */	bl __ct__Q24Game9EnemyBaseFv
/* 802698F8 00266838  3C 60 80 4C */	lis r3, __vt__Q34Game4Tobi3Obj@ha
/* 802698FC 0026683C  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 80269900 00266840  38 A3 4E D8 */	addi r5, r3, __vt__Q34Game4Tobi3Obj@l
/* 80269904 00266844  38 7F 02 C8 */	addi r3, r31, 0x2c8
/* 80269908 00266848  90 BF 00 00 */	stw r5, 0(r31)
/* 8026990C 0026684C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80269910 00266850  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 80269914 00266854  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80269918 00266858  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026991C 0026685C  90 A4 00 00 */	stw r5, 0(r4)
/* 80269920 00266860  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80269924 00266864  7C 04 00 50 */	subf r0, r4, r0
/* 80269928 00266868  90 04 00 0C */	stw r0, 0xc(r4)
/* 8026992C 0026686C  4B EC EC 1D */	bl __ct__10MouthSlotsFv
/* 80269930 00266870  38 60 00 2C */	li r3, 0x2c
/* 80269934 00266874  4B DB A5 71 */	bl __nw__FUl
/* 80269938 00266878  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026993C 0026687C  41 82 00 44 */	beq .L_80269980
/* 80269940 00266880  4B EB E0 35 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80269944 00266884  3C 60 80 4C */	lis r3, __vt__Q34Game4Tobi14ProperAnimator@ha
/* 80269948 00266888  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8026994C 0026688C  38 03 4D C0 */	addi r0, r3, __vt__Q34Game4Tobi14ProperAnimator@l
/* 80269950 00266890  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80269954 00266894  90 1E 00 00 */	stw r0, 0(r30)
/* 80269958 00266898  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8026995C 0026689C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80269960 002668A0  38 00 00 00 */	li r0, 0
/* 80269964 002668A4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80269968 002668A8  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8026996C 002668AC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80269970 002668B0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80269974 002668B4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80269978 002668B8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026997C 002668BC  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80269980:
/* 80269980 002668C0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80269984 002668C4  38 60 00 1C */	li r3, 0x1c
/* 80269988 002668C8  4B DB A5 1D */	bl __nw__FUl
/* 8026998C 002668CC  7C 64 1B 79 */	or. r4, r3, r3
/* 80269990 002668D0  41 82 00 24 */	beq .L_802699B4
/* 80269994 002668D4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80269998 002668D8  3C 60 80 4C */	lis r3, __vt__Q34Game4Tobi3FSM@ha
/* 8026999C 002668DC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802699A0 002668E0  38 A0 FF FF */	li r5, -1
/* 802699A4 002668E4  90 04 00 00 */	stw r0, 0(r4)
/* 802699A8 002668E8  38 03 4D 9C */	addi r0, r3, __vt__Q34Game4Tobi3FSM@l
/* 802699AC 002668EC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802699B0 002668F0  90 04 00 00 */	stw r0, 0(r4)
.L_802699B4:
/* 802699B4 002668F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802699B8 002668F8  7F E3 FB 78 */	mr r3, r31
/* 802699BC 002668FC  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802699C0 00266900  7D 89 03 A6 */	mtctr r12
/* 802699C4 00266904  4E 80 04 21 */	bctrl 
/* 802699C8 00266908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802699CC 0026690C  7F E3 FB 78 */	mr r3, r31
/* 802699D0 00266910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802699D4 00266914  83 C1 00 08 */	lwz r30, 8(r1)
/* 802699D8 00266918  7C 08 03 A6 */	mtlr r0
/* 802699DC 0026691C  38 21 00 10 */	addi r1, r1, 0x10
/* 802699E0 00266920  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Tobi3ObjFv

.fn setInitialSetting__Q34Game4Tobi3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802699E4 00266924  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game4Tobi3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game4Tobi3ObjFPQ24Game15CreatureInitArg, global
/* 802699E8 00266928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802699EC 0026692C  7C 08 02 A6 */	mflr r0
/* 802699F0 00266930  90 01 00 14 */	stw r0, 0x14(r1)
/* 802699F4 00266934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802699F8 00266938  7C 7F 1B 78 */	mr r31, r3
/* 802699FC 0026693C  4B E9 80 5D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80269A00 00266940  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80269A04 00266944  7F E3 FB 78 */	mr r3, r31
/* 80269A08 00266948  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80269A0C 0026694C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80269A10 00266950  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80269A14 00266954  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80269A18 00266958  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80269A1C 0026695C  48 00 08 61 */	bl resetAppearCheck__Q34Game4Tobi3ObjFv
/* 80269A20 00266960  38 60 00 00 */	li r3, 0
/* 80269A24 00266964  38 00 FF FF */	li r0, -1
/* 80269A28 00266968  98 7F 02 C1 */	stb r3, 0x2c1(r31)
/* 80269A2C 0026696C  7F E3 FB 78 */	mr r3, r31
/* 80269A30 00266970  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80269A34 00266974  48 00 09 45 */	bl resetBridgeSearch__Q34Game4Tobi3ObjFv
/* 80269A38 00266978  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80269A3C 0026697C  7F E4 FB 78 */	mr r4, r31
/* 80269A40 00266980  38 A0 00 02 */	li r5, 2
/* 80269A44 00266984  38 C0 00 00 */	li r6, 0
/* 80269A48 00266988  81 83 00 00 */	lwz r12, 0(r3)
/* 80269A4C 0026698C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80269A50 00266990  7D 89 03 A6 */	mtctr r12
/* 80269A54 00266994  4E 80 04 21 */	bctrl 
/* 80269A58 00266998  7F E3 FB 78 */	mr r3, r31
/* 80269A5C 0026699C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80269A60 002669A0  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80269A64 002669A4  7D 89 03 A6 */	mtctr r12
/* 80269A68 002669A8  4E 80 04 21 */	bctrl 
/* 80269A6C 002669AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269A70 002669B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269A74 002669B4  7C 08 03 A6 */	mtlr r0
/* 80269A78 002669B8  38 21 00 10 */	addi r1, r1, 0x10
/* 80269A7C 002669BC  4E 80 00 20 */	blr 
.endfn onInit__Q34Game4Tobi3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game4Tobi3ObjFv, global
/* 80269A80 002669C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269A84 002669C4  7C 08 02 A6 */	mflr r0
/* 80269A88 002669C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269A8C 002669CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269A90 002669D0  7C 7F 1B 78 */	mr r31, r3
/* 80269A94 002669D4  7F E4 FB 78 */	mr r4, r31
/* 80269A98 002669D8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80269A9C 002669DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80269AA0 002669E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80269AA4 002669E4  7D 89 03 A6 */	mtctr r12
/* 80269AA8 002669E8  4E 80 04 21 */	bctrl 
/* 80269AAC 002669EC  38 7F 02 C8 */	addi r3, r31, 0x2c8
/* 80269AB0 002669F0  4B EC EB 7D */	bl update__10MouthSlotsFv
/* 80269AB4 002669F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269AB8 002669F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269ABC 002669FC  7C 08 03 A6 */	mtlr r0
/* 80269AC0 00266A00  38 21 00 10 */	addi r1, r1, 0x10
/* 80269AC4 00266A04  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game4Tobi3ObjFv

.fn doDirectDraw__Q34Game4Tobi3ObjFR8Graphics, global
/* 80269AC8 00266A08  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game4Tobi3ObjFR8Graphics

.fn doDebugDraw__Q34Game4Tobi3ObjFR8Graphics, global
/* 80269ACC 00266A0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269AD0 00266A10  7C 08 02 A6 */	mflr r0
/* 80269AD4 00266A14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269AD8 00266A18  4B E9 C3 95 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80269ADC 00266A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269AE0 00266A20  7C 08 03 A6 */	mtlr r0
/* 80269AE4 00266A24  38 21 00 10 */	addi r1, r1, 0x10
/* 80269AE8 00266A28  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game4Tobi3ObjFR8Graphics

.fn setFSM__Q34Game4Tobi3ObjFPQ34Game4Tobi3FSM, global
/* 80269AEC 00266A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269AF0 00266A30  7C 08 02 A6 */	mflr r0
/* 80269AF4 00266A34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269AF8 00266A38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269AFC 00266A3C  7C 7F 1B 78 */	mr r31, r3
/* 80269B00 00266A40  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80269B04 00266A44  7F E4 FB 78 */	mr r4, r31
/* 80269B08 00266A48  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80269B0C 00266A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80269B10 00266A50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80269B14 00266A54  7D 89 03 A6 */	mtctr r12
/* 80269B18 00266A58  4E 80 04 21 */	bctrl 
/* 80269B1C 00266A5C  38 00 00 00 */	li r0, 0
/* 80269B20 00266A60  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80269B24 00266A64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269B28 00266A68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269B2C 00266A6C  7C 08 03 A6 */	mtlr r0
/* 80269B30 00266A70  38 21 00 10 */	addi r1, r1, 0x10
/* 80269B34 00266A74  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game4Tobi3ObjFPQ34Game4Tobi3FSM

.fn getShadowParam__Q34Game4Tobi3ObjFRQ24Game11ShadowParam, global
/* 80269B38 00266A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269B3C 00266A7C  7C 08 02 A6 */	mflr r0
/* 80269B40 00266A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269B44 00266A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269B48 00266A88  7C 9F 23 78 */	mr r31, r4
/* 80269B4C 00266A8C  38 82 CC 08 */	addi r4, r2, lbl_8051AF68@sda21
/* 80269B50 00266A90  93 C1 00 08 */	stw r30, 8(r1)
/* 80269B54 00266A94  7C 7E 1B 78 */	mr r30, r3
/* 80269B58 00266A98  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80269B5C 00266A9C  48 1D 54 89 */	bl getJoint__Q28SysShape5ModelFPc
/* 80269B60 00266AA0  48 1B FD 41 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80269B64 00266AA4  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80269B68 00266AA8  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 80269B6C 00266AAC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80269B70 00266AB0  7F C3 F3 78 */	mr r3, r30
/* 80269B74 00266AB4  C0 22 CC 10 */	lfs f1, lbl_8051AF70@sda21(r2)
/* 80269B78 00266AB8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80269B7C 00266ABC  C0 02 CC 14 */	lfs f0, lbl_8051AF74@sda21(r2)
/* 80269B80 00266AC0  D0 5F 00 04 */	stfs f2, 4(r31)
/* 80269B84 00266AC4  D0 7F 00 08 */	stfs f3, 8(r31)
/* 80269B88 00266AC8  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80269B8C 00266ACC  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80269B90 00266AD0  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80269B94 00266AD4  4B E9 D8 61 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80269B98 00266AD8  2C 03 00 0A */	cmpwi r3, 0xa
/* 80269B9C 00266ADC  40 82 00 2C */	bne .L_80269BC8
/* 80269BA0 00266AE0  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80269BA4 00266AE4  C0 02 CC 18 */	lfs f0, lbl_8051AF78@sda21(r2)
/* 80269BA8 00266AE8  C0 22 CC 1C */	lfs f1, lbl_8051AF7C@sda21(r2)
/* 80269BAC 00266AEC  EC 02 00 28 */	fsubs f0, f2, f0
/* 80269BB0 00266AF0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80269BB4 00266AF4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80269BB8 00266AF8  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80269BBC 00266AFC  EC 01 00 2A */	fadds f0, f1, f0
/* 80269BC0 00266B00  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80269BC4 00266B04  48 00 00 34 */	b .L_80269BF8
.L_80269BC8:
/* 80269BC8 00266B08  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80269BCC 00266B0C  C0 02 CC 20 */	lfs f0, lbl_8051AF80@sda21(r2)
/* 80269BD0 00266B10  EC 01 00 28 */	fsubs f0, f1, f0
/* 80269BD4 00266B14  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80269BD8 00266B18  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80269BDC 00266B1C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80269BE0 00266B20  41 82 00 10 */	beq .L_80269BF0
/* 80269BE4 00266B24  C0 02 CC 1C */	lfs f0, lbl_8051AF7C@sda21(r2)
/* 80269BE8 00266B28  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80269BEC 00266B2C  48 00 00 0C */	b .L_80269BF8
.L_80269BF0:
/* 80269BF0 00266B30  C0 02 CC 24 */	lfs f0, lbl_8051AF84@sda21(r2)
/* 80269BF4 00266B34  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80269BF8:
/* 80269BF8 00266B38  C0 02 CC 18 */	lfs f0, lbl_8051AF78@sda21(r2)
/* 80269BFC 00266B3C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80269C00 00266B40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269C04 00266B44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269C08 00266B48  83 C1 00 08 */	lwz r30, 8(r1)
/* 80269C0C 00266B4C  7C 08 03 A6 */	mtlr r0
/* 80269C10 00266B50  38 21 00 10 */	addi r1, r1, 0x10
/* 80269C14 00266B54  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game4Tobi3ObjFRQ24Game11ShadowParam

.fn pressCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80269C18 00266B58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269C1C 00266B5C  7C 08 02 A6 */	mflr r0
/* 80269C20 00266B60  28 04 00 00 */	cmplwi r4, 0
/* 80269C24 00266B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269C28 00266B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269C2C 00266B6C  7C 7F 1B 78 */	mr r31, r3
/* 80269C30 00266B70  41 82 00 74 */	beq .L_80269CA4
/* 80269C34 00266B74  7C 83 23 78 */	mr r3, r4
/* 80269C38 00266B78  81 84 00 00 */	lwz r12, 0(r4)
/* 80269C3C 00266B7C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80269C40 00266B80  7D 89 03 A6 */	mtctr r12
/* 80269C44 00266B84  4E 80 04 21 */	bctrl 
/* 80269C48 00266B88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80269C4C 00266B8C  41 82 00 58 */	beq .L_80269CA4
/* 80269C50 00266B90  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80269C54 00266B94  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80269C58 00266B98  40 82 00 4C */	bne .L_80269CA4
/* 80269C5C 00266B9C  7F E3 FB 78 */	mr r3, r31
/* 80269C60 00266BA0  4B E9 D7 95 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80269C64 00266BA4  2C 03 00 04 */	cmpwi r3, 4
/* 80269C68 00266BA8  40 81 00 0C */	ble .L_80269C74
/* 80269C6C 00266BAC  2C 03 00 0A */	cmpwi r3, 0xa
/* 80269C70 00266BB0  41 80 00 0C */	blt .L_80269C7C
.L_80269C74:
/* 80269C74 00266BB4  2C 03 00 0A */	cmpwi r3, 0xa
/* 80269C78 00266BB8  40 81 00 2C */	ble .L_80269CA4
.L_80269C7C:
/* 80269C7C 00266BBC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80269C80 00266BC0  7F E4 FB 78 */	mr r4, r31
/* 80269C84 00266BC4  38 A0 00 01 */	li r5, 1
/* 80269C88 00266BC8  38 C0 00 00 */	li r6, 0
/* 80269C8C 00266BCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80269C90 00266BD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80269C94 00266BD4  7D 89 03 A6 */	mtctr r12
/* 80269C98 00266BD8  4E 80 04 21 */	bctrl 
/* 80269C9C 00266BDC  38 60 00 01 */	li r3, 1
/* 80269CA0 00266BE0  48 00 00 08 */	b .L_80269CA8
.L_80269CA4:
/* 80269CA4 00266BE4  38 60 00 00 */	li r3, 0
.L_80269CA8:
/* 80269CA8 00266BE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269CAC 00266BEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269CB0 00266BF0  7C 08 03 A6 */	mtlr r0
/* 80269CB4 00266BF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80269CB8 00266BF8  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80269CBC 00266BFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269CC0 00266C00  7C 08 02 A6 */	mflr r0
/* 80269CC4 00266C04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269CC8 00266C08  81 83 00 00 */	lwz r12, 0(r3)
/* 80269CCC 00266C0C  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 80269CD0 00266C10  7D 89 03 A6 */	mtctr r12
/* 80269CD4 00266C14  4E 80 04 21 */	bctrl 
/* 80269CD8 00266C18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269CDC 00266C1C  7C 08 03 A6 */	mtlr r0
/* 80269CE0 00266C20  38 21 00 10 */	addi r1, r1, 0x10
/* 80269CE4 00266C24  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart

.fn flyCollisionCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80269CE8 00266C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269CEC 00266C2C  7C 08 02 A6 */	mflr r0
/* 80269CF0 00266C30  28 04 00 00 */	cmplwi r4, 0
/* 80269CF4 00266C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269CF8 00266C38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269CFC 00266C3C  7C 7F 1B 78 */	mr r31, r3
/* 80269D00 00266C40  41 82 00 64 */	beq .L_80269D64
/* 80269D04 00266C44  7C 83 23 78 */	mr r3, r4
/* 80269D08 00266C48  81 84 00 00 */	lwz r12, 0(r4)
/* 80269D0C 00266C4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80269D10 00266C50  7D 89 03 A6 */	mtctr r12
/* 80269D14 00266C54  4E 80 04 21 */	bctrl 
/* 80269D18 00266C58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80269D1C 00266C5C  41 82 00 48 */	beq .L_80269D64
/* 80269D20 00266C60  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80269D24 00266C64  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80269D28 00266C68  40 82 00 3C */	bne .L_80269D64
/* 80269D2C 00266C6C  7F E3 FB 78 */	mr r3, r31
/* 80269D30 00266C70  4B E9 D6 C5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80269D34 00266C74  2C 03 00 0A */	cmpwi r3, 0xa
/* 80269D38 00266C78  40 82 00 2C */	bne .L_80269D64
/* 80269D3C 00266C7C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80269D40 00266C80  7F E4 FB 78 */	mr r4, r31
/* 80269D44 00266C84  38 A0 00 00 */	li r5, 0
/* 80269D48 00266C88  38 C0 00 00 */	li r6, 0
/* 80269D4C 00266C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80269D50 00266C90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80269D54 00266C94  7D 89 03 A6 */	mtctr r12
/* 80269D58 00266C98  4E 80 04 21 */	bctrl 
/* 80269D5C 00266C9C  38 60 00 01 */	li r3, 1
/* 80269D60 00266CA0  48 00 00 08 */	b .L_80269D68
.L_80269D64:
/* 80269D64 00266CA4  38 60 00 00 */	li r3, 0
.L_80269D68:
/* 80269D68 00266CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269D6C 00266CAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269D70 00266CB0  7C 08 03 A6 */	mtlr r0
/* 80269D74 00266CB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80269D78 00266CB8  4E 80 00 20 */	blr 
.endfn flyCollisionCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game4Tobi3ObjFv, global
/* 80269D7C 00266CBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269D80 00266CC0  7C 08 02 A6 */	mflr r0
/* 80269D84 00266CC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269D88 00266CC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269D8C 00266CCC  7C 7F 1B 78 */	mr r31, r3
/* 80269D90 00266CD0  4B E9 91 65 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 80269D94 00266CD4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80269D98 00266CD8  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80269D9C 00266CDC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80269DA0 00266CE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269DA4 00266CE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269DA8 00266CE8  7C 08 03 A6 */	mtlr r0
/* 80269DAC 00266CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80269DB0 00266CF0  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game4Tobi3ObjFv

.fn doFinishStoneState__Q34Game4Tobi3ObjFv, global
/* 80269DB4 00266CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269DB8 00266CF8  7C 08 02 A6 */	mflr r0
/* 80269DBC 00266CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269DC0 00266D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269DC4 00266D04  7C 7F 1B 78 */	mr r31, r3
/* 80269DC8 00266D08  4B E9 91 41 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 80269DCC 00266D0C  7F E3 FB 78 */	mr r3, r31
/* 80269DD0 00266D10  4B E9 D6 25 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80269DD4 00266D14  2C 03 00 0A */	cmpwi r3, 0xa
/* 80269DD8 00266D18  40 82 00 24 */	bne .L_80269DFC
/* 80269DDC 00266D1C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80269DE0 00266D20  7F E4 FB 78 */	mr r4, r31
/* 80269DE4 00266D24  38 A0 00 05 */	li r5, 5
/* 80269DE8 00266D28  38 C0 00 00 */	li r6, 0
/* 80269DEC 00266D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80269DF0 00266D30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80269DF4 00266D34  7D 89 03 A6 */	mtctr r12
/* 80269DF8 00266D38  4E 80 04 21 */	bctrl 
.L_80269DFC:
/* 80269DFC 00266D3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269E00 00266D40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269E04 00266D44  7C 08 03 A6 */	mtlr r0
/* 80269E08 00266D48  38 21 00 10 */	addi r1, r1, 0x10
/* 80269E0C 00266D4C  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game4Tobi3ObjFv

.fn doStartEarthquakeFitState__Q34Game4Tobi3ObjFv, global
/* 80269E10 00266D50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269E14 00266D54  7C 08 02 A6 */	mflr r0
/* 80269E18 00266D58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269E1C 00266D5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269E20 00266D60  7C 7F 1B 78 */	mr r31, r3
/* 80269E24 00266D64  4B E9 DB 41 */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 80269E28 00266D68  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80269E2C 00266D6C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80269E30 00266D70  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80269E34 00266D74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269E38 00266D78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269E3C 00266D7C  7C 08 03 A6 */	mtlr r0
/* 80269E40 00266D80  38 21 00 10 */	addi r1, r1, 0x10
/* 80269E44 00266D84  4E 80 00 20 */	blr 
.endfn doStartEarthquakeFitState__Q34Game4Tobi3ObjFv

.fn doFinishEarthquakeFitState__Q34Game4Tobi3ObjFv, global
/* 80269E48 00266D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269E4C 00266D8C  7C 08 02 A6 */	mflr r0
/* 80269E50 00266D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269E54 00266D94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269E58 00266D98  7C 7F 1B 78 */	mr r31, r3
/* 80269E5C 00266D9C  4B E9 DB 0D */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 80269E60 00266DA0  7F E3 FB 78 */	mr r3, r31
/* 80269E64 00266DA4  4B E9 D5 91 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80269E68 00266DA8  2C 03 00 0A */	cmpwi r3, 0xa
/* 80269E6C 00266DAC  40 82 00 24 */	bne .L_80269E90
/* 80269E70 00266DB0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80269E74 00266DB4  7F E4 FB 78 */	mr r4, r31
/* 80269E78 00266DB8  38 A0 00 05 */	li r5, 5
/* 80269E7C 00266DBC  38 C0 00 00 */	li r6, 0
/* 80269E80 00266DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80269E84 00266DC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80269E88 00266DC8  7D 89 03 A6 */	mtctr r12
/* 80269E8C 00266DCC  4E 80 04 21 */	bctrl 
.L_80269E90:
/* 80269E90 00266DD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269E94 00266DD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269E98 00266DD8  7C 08 03 A6 */	mtlr r0
/* 80269E9C 00266DDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80269EA0 00266DE0  4E 80 00 20 */	blr 
.endfn doFinishEarthquakeFitState__Q34Game4Tobi3ObjFv

.fn startCarcassMotion__Q34Game4Tobi3ObjFv, global
/* 80269EA4 00266DE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269EA8 00266DE8  7C 08 02 A6 */	mflr r0
/* 80269EAC 00266DEC  38 80 00 09 */	li r4, 9
/* 80269EB0 00266DF0  38 A0 00 00 */	li r5, 0
/* 80269EB4 00266DF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269EB8 00266DF8  4B E9 B1 4D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80269EBC 00266DFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269EC0 00266E00  7C 08 03 A6 */	mtlr r0
/* 80269EC4 00266E04  38 21 00 10 */	addi r1, r1, 0x10
/* 80269EC8 00266E08  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game4Tobi3ObjFv

.fn initMouthSlots__Q34Game4Tobi3ObjFv, global
/* 80269ECC 00266E0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80269ED0 00266E10  7C 08 02 A6 */	mflr r0
/* 80269ED4 00266E14  90 01 00 24 */	stw r0, 0x24(r1)
/* 80269ED8 00266E18  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80269EDC 00266E1C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80269EE0 00266E20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269EE4 00266E24  93 C1 00 08 */	stw r30, 8(r1)
/* 80269EE8 00266E28  7C 7E 1B 78 */	mr r30, r3
/* 80269EEC 00266E2C  38 80 00 01 */	li r4, 1
/* 80269EF0 00266E30  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 80269EF4 00266E34  4B EC E6 65 */	bl alloc__10MouthSlotsFi
/* 80269EF8 00266E38  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80269EFC 00266E3C  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 80269F00 00266E40  38 80 00 00 */	li r4, 0
/* 80269F04 00266E44  38 C2 CC 28 */	addi r6, r2, lbl_8051AF88@sda21
/* 80269F08 00266E48  4B EC E7 89 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80269F0C 00266E4C  C3 E2 CC 30 */	lfs f31, lbl_8051AF90@sda21(r2)
/* 80269F10 00266E50  3B E0 00 00 */	li r31, 0
/* 80269F14 00266E54  48 00 00 18 */	b .L_80269F2C
.L_80269F18:
/* 80269F18 00266E58  7F E4 FB 78 */	mr r4, r31
/* 80269F1C 00266E5C  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 80269F20 00266E60  4B EC E8 59 */	bl getSlot__10MouthSlotsFi
/* 80269F24 00266E64  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 80269F28 00266E68  3B FF 00 01 */	addi r31, r31, 1
.L_80269F2C:
/* 80269F2C 00266E6C  80 1E 02 C8 */	lwz r0, 0x2c8(r30)
/* 80269F30 00266E70  7C 1F 00 00 */	cmpw r31, r0
/* 80269F34 00266E74  41 80 FF E4 */	blt .L_80269F18
/* 80269F38 00266E78  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80269F3C 00266E7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80269F40 00266E80  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80269F44 00266E84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269F48 00266E88  83 C1 00 08 */	lwz r30, 8(r1)
/* 80269F4C 00266E8C  7C 08 03 A6 */	mtlr r0
/* 80269F50 00266E90  38 21 00 20 */	addi r1, r1, 0x20
/* 80269F54 00266E94  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game4Tobi3ObjFv

.fn lifeRecover__Q34Game4Tobi3ObjFv, global
/* 80269F58 00266E98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80269F5C 00266E9C  7C 08 02 A6 */	mflr r0
/* 80269F60 00266EA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80269F64 00266EA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80269F68 00266EA8  7C 7F 1B 78 */	mr r31, r3
/* 80269F6C 00266EAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80269F70 00266EB0  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80269F74 00266EB4  7D 89 03 A6 */	mtctr r12
/* 80269F78 00266EB8  4E 80 04 21 */	bctrl 
/* 80269F7C 00266EBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80269F80 00266EC0  41 82 00 38 */	beq .L_80269FB8
/* 80269F84 00266EC4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80269F88 00266EC8  C0 42 CC 34 */	lfs f2, lbl_8051AF94@sda21(r2)
/* 80269F8C 00266ECC  C0 23 01 04 */	lfs f1, 0x104(r3)
/* 80269F90 00266ED0  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80269F94 00266ED4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80269F98 00266ED8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80269F9C 00266EDC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80269FA0 00266EE0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80269FA4 00266EE4  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 80269FA8 00266EE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80269FAC 00266EEC  40 81 00 14 */	ble .L_80269FC0
/* 80269FB0 00266EF0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80269FB4 00266EF4  48 00 00 0C */	b .L_80269FC0
.L_80269FB8:
/* 80269FB8 00266EF8  7F E3 FB 78 */	mr r3, r31
/* 80269FBC 00266EFC  4B E9 B3 D5 */	bl lifeRecover__Q24Game9EnemyBaseFv
.L_80269FC0:
/* 80269FC0 00266F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80269FC4 00266F04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269FC8 00266F08  7C 08 03 A6 */	mtlr r0
/* 80269FCC 00266F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80269FD0 00266F10  4E 80 00 20 */	blr 
.endfn lifeRecover__Q34Game4Tobi3ObjFv

.fn lifeIncrement__Q34Game4Tobi3ObjFv, global
/* 80269FD4 00266F14  C0 22 CC 10 */	lfs f1, lbl_8051AF70@sda21(r2)
/* 80269FD8 00266F18  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 80269FDC 00266F1C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80269FE0 00266F20  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80269FE4 00266F24  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80269FE8 00266F28  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 80269FEC 00266F2C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80269FF0 00266F30  4C 40 13 82 */	cror 2, 0, 2
/* 80269FF4 00266F34  4C 82 00 20 */	bnelr 
/* 80269FF8 00266F38  C0 02 CC 14 */	lfs f0, lbl_8051AF74@sda21(r2)
/* 80269FFC 00266F3C  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8026A000 00266F40  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game4Tobi3ObjFv

.fn randomFlyingTarget__Q34Game4Tobi3ObjFv, global
/* 8026A004 00266F44  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8026A008 00266F48  7C 08 02 A6 */	mflr r0
/* 8026A00C 00266F4C  90 01 00 84 */	stw r0, 0x84(r1)
/* 8026A010 00266F50  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8026A014 00266F54  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8026A018 00266F58  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8026A01C 00266F5C  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8026A020 00266F60  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8026A024 00266F64  7C 7F 1B 78 */	mr r31, r3
/* 8026A028 00266F68  38 61 00 14 */	addi r3, r1, 0x14
/* 8026A02C 00266F6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026A030 00266F70  7F E4 FB 78 */	mr r4, r31
/* 8026A034 00266F74  C3 FF 02 D0 */	lfs f31, 0x2d0(r31)
/* 8026A038 00266F78  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026A03C 00266F7C  C3 DF 02 D8 */	lfs f30, 0x2d8(r31)
/* 8026A040 00266F80  7D 89 03 A6 */	mtctr r12
/* 8026A044 00266F84  4E 80 04 21 */	bctrl 
/* 8026A048 00266F88  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8026A04C 00266F8C  7F E4 FB 78 */	mr r4, r31
/* 8026A050 00266F90  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8026A054 00266F94  38 61 00 08 */	addi r3, r1, 8
/* 8026A058 00266F98  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8026A05C 00266F9C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8026A060 00266FA0  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8026A064 00266FA4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026A068 00266FA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026A06C 00266FAC  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8026A070 00266FB0  7D 89 03 A6 */	mtctr r12
/* 8026A074 00266FB4  4E 80 04 21 */	bctrl 
/* 8026A078 00266FB8  C0 62 CC 10 */	lfs f3, lbl_8051AF70@sda21(r2)
/* 8026A07C 00266FBC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8026A080 00266FC0  C0 21 00 08 */	lfs f1, 8(r1)
/* 8026A084 00266FC4  EC 83 00 28 */	fsubs f4, f3, f0
/* 8026A088 00266FC8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8026A08C 00266FCC  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8026A090 00266FD0  EC A3 08 28 */	fsubs f5, f3, f1
/* 8026A094 00266FD4  EC 7E 00 28 */	fsubs f3, f30, f0
/* 8026A098 00266FD8  C0 02 CC 38 */	lfs f0, lbl_8051AF98@sda21(r2)
/* 8026A09C 00266FDC  EC 24 01 32 */	fmuls f1, f4, f4
/* 8026A0A0 00266FE0  EC 9F 10 28 */	fsubs f4, f31, f2
/* 8026A0A4 00266FE4  EC 43 00 F2 */	fmuls f2, f3, f3
/* 8026A0A8 00266FE8  EC 25 09 7A */	fmadds f1, f5, f5, f1
/* 8026A0AC 00266FEC  EC 44 11 3A */	fmadds f2, f4, f4, f2
/* 8026A0B0 00266FF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8026A0B4 00266FF4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8026A0B8 00266FF8  40 80 01 04 */	bge .L_8026A1BC
/* 8026A0BC 00266FFC  4B E5 F4 E5 */	bl rand
/* 8026A0C0 00267000  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026A0C4 00267004  3C 00 43 30 */	lis r0, 0x4330
/* 8026A0C8 00267008  90 61 00 34 */	stw r3, 0x34(r1)
/* 8026A0CC 0026700C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026A0D0 00267010  90 01 00 30 */	stw r0, 0x30(r1)
/* 8026A0D4 00267014  C8 42 CC 50 */	lfd f2, lbl_8051AFB0@sda21(r2)
/* 8026A0D8 00267018  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8026A0DC 0026701C  C0 22 CC 3C */	lfs f1, lbl_8051AF9C@sda21(r2)
/* 8026A0E0 00267020  EC 40 10 28 */	fsubs f2, f0, f2
/* 8026A0E4 00267024  C0 02 CC 40 */	lfs f0, lbl_8051AFA0@sda21(r2)
/* 8026A0E8 00267028  C3 C3 03 5C */	lfs f30, 0x35c(r3)
/* 8026A0EC 0026702C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8026A0F0 00267030  EF E1 00 24 */	fdivs f31, f1, f0
/* 8026A0F4 00267034  4B E5 F4 AD */	bl rand
/* 8026A0F8 00267038  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026A0FC 0026703C  3C 00 43 30 */	lis r0, 0x4330
/* 8026A100 00267040  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8026A104 00267044  FC 60 F8 90 */	fmr f3, f31
/* 8026A108 00267048  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A10C 0026704C  90 01 00 38 */	stw r0, 0x38(r1)
/* 8026A110 00267050  C8 42 CC 50 */	lfd f2, lbl_8051AFB0@sda21(r2)
/* 8026A114 00267054  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8026A118 00267058  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 8026A11C 0026705C  C0 02 CC 40 */	lfs f0, lbl_8051AFA0@sda21(r2)
/* 8026A120 00267060  EC 21 10 28 */	fsubs f1, f1, f2
/* 8026A124 00267064  EC 3E 00 72 */	fmuls f1, f30, f1
/* 8026A128 00267068  EC 81 00 24 */	fdivs f4, f1, f0
/* 8026A12C 0026706C  40 80 00 08 */	bge .L_8026A134
/* 8026A130 00267070  FC 60 F8 50 */	fneg f3, f31
.L_8026A134:
/* 8026A134 00267074  C0 42 CC 44 */	lfs f2, lbl_8051AFA4@sda21(r2)
/* 8026A138 00267078  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8026A13C 0026707C  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A140 00267080  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8026A144 00267084  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8026A148 00267088  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8026A14C 0026708C  FC 00 08 1E */	fctiwz f0, f1
/* 8026A150 00267090  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8026A154 00267094  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8026A158 00267098  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026A15C 0026709C  7C 64 02 14 */	add r3, r4, r0
/* 8026A160 002670A0  C0 03 00 04 */	lfs f0, 4(r3)
/* 8026A164 002670A4  EC 64 00 32 */	fmuls f3, f4, f0
/* 8026A168 002670A8  40 80 00 28 */	bge .L_8026A190
/* 8026A16C 002670AC  C0 02 CC 48 */	lfs f0, lbl_8051AFA8@sda21(r2)
/* 8026A170 002670B0  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8026A174 002670B4  FC 00 00 1E */	fctiwz f0, f0
/* 8026A178 002670B8  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8026A17C 002670BC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8026A180 002670C0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026A184 002670C4  7C 04 04 2E */	lfsx f0, r4, r0
/* 8026A188 002670C8  FC 00 00 50 */	fneg f0, f0
/* 8026A18C 002670CC  48 00 00 1C */	b .L_8026A1A8
.L_8026A190:
/* 8026A190 002670D0  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 8026A194 002670D4  FC 00 00 1E */	fctiwz f0, f0
/* 8026A198 002670D8  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8026A19C 002670DC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8026A1A0 002670E0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026A1A4 002670E4  7C 04 04 2E */	lfsx f0, r4, r0
.L_8026A1A8:
/* 8026A1A8 002670E8  EF E4 00 32 */	fmuls f31, f4, f0
/* 8026A1AC 002670EC  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8026A1B0 002670F0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8026A1B4 002670F4  EF FF 08 2A */	fadds f31, f31, f1
/* 8026A1B8 002670F8  EF C3 00 2A */	fadds f30, f3, f0
.L_8026A1BC:
/* 8026A1BC 002670FC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8026A1C0 00267100  38 81 00 20 */	addi r4, r1, 0x20
/* 8026A1C4 00267104  81 83 00 04 */	lwz r12, 4(r3)
/* 8026A1C8 00267108  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8026A1CC 0026710C  7D 89 03 A6 */	mtctr r12
/* 8026A1D0 00267110  4E 80 04 21 */	bctrl 
/* 8026A1D4 00267114  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026A1D8 00267118  C0 42 CC 4C */	lfs f2, lbl_8051AFAC@sda21(r2)
/* 8026A1DC 0026711C  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 8026A1E0 00267120  EC 21 00 2A */	fadds f1, f1, f0
/* 8026A1E4 00267124  D3 FF 02 D0 */	stfs f31, 0x2d0(r31)
/* 8026A1E8 00267128  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 8026A1EC 0026712C  D3 DF 02 D8 */	stfs f30, 0x2d8(r31)
/* 8026A1F0 00267130  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8026A1F4 00267134  EC 21 00 28 */	fsubs f1, f1, f0
/* 8026A1F8 00267138  EC 02 00 72 */	fmuls f0, f2, f1
/* 8026A1FC 0026713C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8026A200 00267140  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8026A204 00267144  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8026A208 00267148  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8026A20C 0026714C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8026A210 00267150  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8026A214 00267154  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8026A218 00267158  7C 08 03 A6 */	mtlr r0
/* 8026A21C 0026715C  38 21 00 80 */	addi r1, r1, 0x80
/* 8026A220 00267160  4E 80 00 20 */	blr 
.endfn randomFlyingTarget__Q34Game4Tobi3ObjFv

.fn isFlyingLife__Q34Game4Tobi3ObjFv, global
/* 8026A224 00267164  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8026A228 00267168  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 8026A22C 0026716C  C0 24 01 04 */	lfs f1, 0x104(r4)
/* 8026A230 00267170  C0 04 08 1C */	lfs f0, 0x81c(r4)
/* 8026A234 00267174  EC 22 08 24 */	fdivs f1, f2, f1
/* 8026A238 00267178  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026A23C 0026717C  7C 00 00 26 */	mfcr r0
/* 8026A240 00267180  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8026A244 00267184  4E 80 00 20 */	blr 
.endfn isFlyingLife__Q34Game4Tobi3ObjFv

.fn setInWaterDamage__Q34Game4Tobi3ObjFv, global
/* 8026A248 00267188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026A24C 0026718C  7C 08 02 A6 */	mflr r0
/* 8026A250 00267190  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026A254 00267194  80 03 02 80 */	lwz r0, 0x280(r3)
/* 8026A258 00267198  28 00 00 00 */	cmplwi r0, 0
/* 8026A25C 0026719C  41 82 00 10 */	beq .L_8026A26C
/* 8026A260 002671A0  C0 22 CC 20 */	lfs f1, lbl_8051AF80@sda21(r2)
/* 8026A264 002671A4  C0 42 CC 14 */	lfs f2, lbl_8051AF74@sda21(r2)
/* 8026A268 002671A8  4B E9 BD C5 */	bl addDamage__Q24Game9EnemyBaseFff
.L_8026A26C:
/* 8026A26C 002671AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026A270 002671B0  7C 08 03 A6 */	mtlr r0
/* 8026A274 002671B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8026A278 002671B8  4E 80 00 20 */	blr 
.endfn setInWaterDamage__Q34Game4Tobi3ObjFv

.fn resetAppearCheck__Q34Game4Tobi3ObjFv, global
/* 8026A27C 002671BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026A280 002671C0  7C 08 02 A6 */	mflr r0
/* 8026A284 002671C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026A288 002671C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026A28C 002671CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026A290 002671D0  7C 7E 1B 78 */	mr r30, r3
/* 8026A294 002671D4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8026A298 002671D8  28 04 00 00 */	cmplwi r4, 0
/* 8026A29C 002671DC  41 82 00 74 */	beq .L_8026A310
/* 8026A2A0 002671E0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8026A2A4 002671E4  2C 00 00 04 */	cmpwi r0, 4
/* 8026A2A8 002671E8  40 82 00 68 */	bne .L_8026A310
/* 8026A2AC 002671EC  4B E5 F2 F5 */	bl rand
/* 8026A2B0 002671F0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026A2B4 002671F4  3C 00 43 30 */	lis r0, 0x4330
/* 8026A2B8 002671F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8026A2BC 002671FC  7F C3 F3 78 */	mr r3, r30
/* 8026A2C0 00267200  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026A2C4 00267204  90 01 00 08 */	stw r0, 8(r1)
/* 8026A2C8 00267208  C8 42 CC 50 */	lfd f2, lbl_8051AFB0@sda21(r2)
/* 8026A2CC 0026720C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8026A2D0 00267210  C0 22 CC 40 */	lfs f1, lbl_8051AFA0@sda21(r2)
/* 8026A2D4 00267214  EC 40 10 28 */	fsubs f2, f0, f2
/* 8026A2D8 00267218  C0 02 CC 24 */	lfs f0, lbl_8051AF84@sda21(r2)
/* 8026A2DC 0026721C  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8026A2E0 00267220  EC 22 08 24 */	fdivs f1, f2, f1
/* 8026A2E4 00267224  EC 00 00 72 */	fmuls f0, f0, f1
/* 8026A2E8 00267228  FC 00 00 1E */	fctiwz f0, f0
/* 8026A2EC 0026722C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8026A2F0 00267230  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8026A2F4 00267234  7D 89 03 A6 */	mtctr r12
/* 8026A2F8 00267238  4E 80 04 21 */	bctrl 
/* 8026A2FC 0026723C  1C 03 00 05 */	mulli r0, r3, 5
/* 8026A300 00267240  7C 1F 02 14 */	add r0, r31, r0
/* 8026A304 00267244  54 00 44 2E */	rlwinm r0, r0, 8, 0x10, 0x17
/* 8026A308 00267248  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
/* 8026A30C 0026724C  48 00 00 0C */	b .L_8026A318
.L_8026A310:
/* 8026A310 00267250  38 00 00 00 */	li r0, 0
/* 8026A314 00267254  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
.L_8026A318:
/* 8026A318 00267258  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026A31C 0026725C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026A320 00267260  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8026A324 00267264  7C 08 03 A6 */	mtlr r0
/* 8026A328 00267268  38 21 00 20 */	addi r1, r1, 0x20
/* 8026A32C 0026726C  4E 80 00 20 */	blr 
.endfn resetAppearCheck__Q34Game4Tobi3ObjFv

.fn isAppearCheck__Q34Game4Tobi3ObjFv, global
/* 8026A330 00267270  A0 83 02 C2 */	lhz r4, 0x2c2(r3)
/* 8026A334 00267274  28 04 00 00 */	cmplwi r4, 0
/* 8026A338 00267278  41 82 00 38 */	beq .L_8026A370
/* 8026A33C 0026727C  38 04 00 01 */	addi r0, r4, 1
/* 8026A340 00267280  B0 03 02 C2 */	sth r0, 0x2c2(r3)
/* 8026A344 00267284  A0 03 02 C2 */	lhz r0, 0x2c2(r3)
/* 8026A348 00267288  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8026A34C 0026728C  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8026A350 00267290  7C 04 00 00 */	cmpw r4, r0
/* 8026A354 00267294  40 81 00 14 */	ble .L_8026A368
/* 8026A358 00267298  38 00 00 00 */	li r0, 0
/* 8026A35C 0026729C  B0 03 02 C2 */	sth r0, 0x2c2(r3)
/* 8026A360 002672A0  38 60 00 01 */	li r3, 1
/* 8026A364 002672A4  4E 80 00 20 */	blr 
.L_8026A368:
/* 8026A368 002672A8  38 60 00 00 */	li r3, 0
/* 8026A36C 002672AC  4E 80 00 20 */	blr 
.L_8026A370:
/* 8026A370 002672B0  38 60 00 01 */	li r3, 1
/* 8026A374 002672B4  4E 80 00 20 */	blr 
.endfn isAppearCheck__Q34Game4Tobi3ObjFv

.fn resetBridgeSearch__Q34Game4Tobi3ObjFv, global
/* 8026A378 002672B8  38 80 00 01 */	li r4, 1
/* 8026A37C 002672BC  38 00 00 00 */	li r0, 0
/* 8026A380 002672C0  98 83 02 C0 */	stb r4, 0x2c0(r3)
/* 8026A384 002672C4  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A388 002672C8  90 03 02 DC */	stw r0, 0x2dc(r3)
/* 8026A38C 002672CC  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 8026A390 002672D0  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 8026A394 002672D4  4E 80 00 20 */	blr 
.endfn resetBridgeSearch__Q34Game4Tobi3ObjFv

.fn setBridgeSearch__Q34Game4Tobi3ObjFv, global
/* 8026A398 002672D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026A39C 002672DC  7C 08 02 A6 */	mflr r0
/* 8026A3A0 002672E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026A3A4 002672E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026A3A8 002672E8  7C 7F 1B 78 */	mr r31, r3
/* 8026A3AC 002672EC  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 8026A3B0 002672F0  28 00 00 00 */	cmplwi r0, 0
/* 8026A3B4 002672F4  41 82 00 18 */	beq .L_8026A3CC
/* 8026A3B8 002672F8  38 00 00 00 */	li r0, 0
/* 8026A3BC 002672FC  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8026A3C0 00267300  48 00 00 21 */	bl setNearestBridge__Q34Game4Tobi3ObjFv
/* 8026A3C4 00267304  7F E3 FB 78 */	mr r3, r31
/* 8026A3C8 00267308  48 00 02 D9 */	bl setCullingCheck__Q34Game4Tobi3ObjFv
.L_8026A3CC:
/* 8026A3CC 0026730C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026A3D0 00267310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026A3D4 00267314  7C 08 03 A6 */	mtlr r0
/* 8026A3D8 00267318  38 21 00 10 */	addi r1, r1, 0x10
/* 8026A3DC 0026731C  4E 80 00 20 */	blr 
.endfn setBridgeSearch__Q34Game4Tobi3ObjFv

.fn setNearestBridge__Q34Game4Tobi3ObjFv, global
/* 8026A3E0 00267320  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8026A3E4 00267324  7C 08 02 A6 */	mflr r0
/* 8026A3E8 00267328  90 01 00 54 */	stw r0, 0x54(r1)
/* 8026A3EC 0026732C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8026A3F0 00267330  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8026A3F4 00267334  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8026A3F8 00267338  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8026A3FC 0026733C  7C 7F 1B 78 */	mr r31, r3
/* 8026A400 00267340  38 00 00 00 */	li r0, 0
/* 8026A404 00267344  90 03 02 DC */	stw r0, 0x2dc(r3)
/* 8026A408 00267348  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A40C 0026734C  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 8026A410 00267350  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 8026A414 00267354  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 8026A418 00267358  28 03 00 00 */	cmplwi r3, 0
/* 8026A41C 0026735C  41 82 02 14 */	beq .L_8026A630
/* 8026A420 00267360  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8026A424 00267364  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 8026A428 00267368  EF E0 00 32 */	fmuls f31, f0, f0
/* 8026A42C 0026736C  41 82 00 08 */	beq .L_8026A434
/* 8026A430 00267370  38 63 00 30 */	addi r3, r3, 0x30
.L_8026A434:
/* 8026A434 00267374  38 00 00 00 */	li r0, 0
/* 8026A438 00267378  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8026A43C 0026737C  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8026A440 00267380  90 01 00 20 */	stw r0, 0x20(r1)
/* 8026A444 00267384  28 00 00 00 */	cmplwi r0, 0
/* 8026A448 00267388  90 81 00 14 */	stw r4, 0x14(r1)
/* 8026A44C 0026738C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8026A450 00267390  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8026A454 00267394  40 82 00 1C */	bne .L_8026A470
/* 8026A458 00267398  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A45C 0026739C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026A460 002673A0  7D 89 03 A6 */	mtctr r12
/* 8026A464 002673A4  4E 80 04 21 */	bctrl 
/* 8026A468 002673A8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026A46C 002673AC  48 00 01 A4 */	b .L_8026A610
.L_8026A470:
/* 8026A470 002673B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A474 002673B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026A478 002673B8  7D 89 03 A6 */	mtctr r12
/* 8026A47C 002673BC  4E 80 04 21 */	bctrl 
/* 8026A480 002673C0  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026A484 002673C4  48 00 00 58 */	b .L_8026A4DC
.L_8026A488:
/* 8026A488 002673C8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A48C 002673CC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A490 002673D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A494 002673D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026A498 002673D8  7D 89 03 A6 */	mtctr r12
/* 8026A49C 002673DC  4E 80 04 21 */	bctrl 
/* 8026A4A0 002673E0  7C 64 1B 78 */	mr r4, r3
/* 8026A4A4 002673E4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8026A4A8 002673E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A4AC 002673EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026A4B0 002673F0  7D 89 03 A6 */	mtctr r12
/* 8026A4B4 002673F4  4E 80 04 21 */	bctrl 
/* 8026A4B8 002673F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026A4BC 002673FC  40 82 01 54 */	bne .L_8026A610
/* 8026A4C0 00267400  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A4C4 00267404  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A4C8 00267408  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A4CC 0026740C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026A4D0 00267410  7D 89 03 A6 */	mtctr r12
/* 8026A4D4 00267414  4E 80 04 21 */	bctrl 
/* 8026A4D8 00267418  90 61 00 18 */	stw r3, 0x18(r1)
.L_8026A4DC:
/* 8026A4DC 0026741C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8026A4E0 00267420  38 61 00 14 */	addi r3, r1, 0x14
/* 8026A4E4 00267424  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026A4E8 00267428  7D 89 03 A6 */	mtctr r12
/* 8026A4EC 0026742C  4E 80 04 21 */	bctrl 
/* 8026A4F0 00267430  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026A4F4 00267434  41 82 FF 94 */	beq .L_8026A488
/* 8026A4F8 00267438  48 00 01 18 */	b .L_8026A610
.L_8026A4FC:
/* 8026A4FC 0026743C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A500 00267440  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A504 00267444  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026A508 00267448  7D 89 03 A6 */	mtctr r12
/* 8026A50C 0026744C  4E 80 04 21 */	bctrl 
/* 8026A510 00267450  7C 60 1B 78 */	mr r0, r3
/* 8026A514 00267454  38 61 00 08 */	addi r3, r1, 8
/* 8026A518 00267458  7C 1E 03 78 */	mr r30, r0
/* 8026A51C 0026745C  7F C4 F3 78 */	mr r4, r30
/* 8026A520 00267460  4B F8 4A 15 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8026A524 00267464  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8026A528 00267468  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8026A52C 0026746C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8026A530 00267470  EC 21 00 28 */	fsubs f1, f1, f0
/* 8026A534 00267474  C0 01 00 08 */	lfs f0, 8(r1)
/* 8026A538 00267478  EC 42 00 28 */	fsubs f2, f2, f0
/* 8026A53C 0026747C  EC 01 00 72 */	fmuls f0, f1, f1
/* 8026A540 00267480  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 8026A544 00267484  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8026A548 00267488  40 80 00 0C */	bge .L_8026A554
/* 8026A54C 0026748C  93 DF 02 DC */	stw r30, 0x2dc(r31)
/* 8026A550 00267490  FF E0 00 90 */	fmr f31, f0
.L_8026A554:
/* 8026A554 00267494  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8026A558 00267498  28 00 00 00 */	cmplwi r0, 0
/* 8026A55C 0026749C  40 82 00 24 */	bne .L_8026A580
/* 8026A560 002674A0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A564 002674A4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A568 002674A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A56C 002674AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026A570 002674B0  7D 89 03 A6 */	mtctr r12
/* 8026A574 002674B4  4E 80 04 21 */	bctrl 
/* 8026A578 002674B8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026A57C 002674BC  48 00 00 94 */	b .L_8026A610
.L_8026A580:
/* 8026A580 002674C0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A584 002674C4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A588 002674C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A58C 002674CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026A590 002674D0  7D 89 03 A6 */	mtctr r12
/* 8026A594 002674D4  4E 80 04 21 */	bctrl 
/* 8026A598 002674D8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026A59C 002674DC  48 00 00 58 */	b .L_8026A5F4
.L_8026A5A0:
/* 8026A5A0 002674E0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A5A4 002674E4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A5A8 002674E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A5AC 002674EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026A5B0 002674F0  7D 89 03 A6 */	mtctr r12
/* 8026A5B4 002674F4  4E 80 04 21 */	bctrl 
/* 8026A5B8 002674F8  7C 64 1B 78 */	mr r4, r3
/* 8026A5BC 002674FC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8026A5C0 00267500  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A5C4 00267504  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026A5C8 00267508  7D 89 03 A6 */	mtctr r12
/* 8026A5CC 0026750C  4E 80 04 21 */	bctrl 
/* 8026A5D0 00267510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026A5D4 00267514  40 82 00 3C */	bne .L_8026A610
/* 8026A5D8 00267518  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A5DC 0026751C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A5E0 00267520  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A5E4 00267524  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026A5E8 00267528  7D 89 03 A6 */	mtctr r12
/* 8026A5EC 0026752C  4E 80 04 21 */	bctrl 
/* 8026A5F0 00267530  90 61 00 18 */	stw r3, 0x18(r1)
.L_8026A5F4:
/* 8026A5F4 00267534  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8026A5F8 00267538  38 61 00 14 */	addi r3, r1, 0x14
/* 8026A5FC 0026753C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026A600 00267540  7D 89 03 A6 */	mtctr r12
/* 8026A604 00267544  4E 80 04 21 */	bctrl 
/* 8026A608 00267548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026A60C 0026754C  41 82 FF 94 */	beq .L_8026A5A0
.L_8026A610:
/* 8026A610 00267550  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026A614 00267554  81 83 00 00 */	lwz r12, 0(r3)
/* 8026A618 00267558  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026A61C 0026755C  7D 89 03 A6 */	mtctr r12
/* 8026A620 00267560  4E 80 04 21 */	bctrl 
/* 8026A624 00267564  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8026A628 00267568  7C 04 18 40 */	cmplw r4, r3
/* 8026A62C 0026756C  40 82 FE D0 */	bne .L_8026A4FC
.L_8026A630:
/* 8026A630 00267570  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 8026A634 00267574  28 03 00 00 */	cmplwi r3, 0
/* 8026A638 00267578  41 82 00 48 */	beq .L_8026A680
/* 8026A63C 0026757C  4B F8 49 F5 */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 8026A640 00267580  C0 02 CC 58 */	lfs f0, lbl_8051AFB8@sda21(r2)
/* 8026A644 00267584  EF E1 00 28 */	fsubs f31, f1, f0
/* 8026A648 00267588  4B E5 EF 59 */	bl rand
/* 8026A64C 0026758C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026A650 00267590  3C 00 43 30 */	lis r0, 0x4330
/* 8026A654 00267594  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8026A658 00267598  C8 62 CC 50 */	lfd f3, lbl_8051AFB0@sda21(r2)
/* 8026A65C 0026759C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8026A660 002675A0  C0 22 CC 40 */	lfs f1, lbl_8051AFA0@sda21(r2)
/* 8026A664 002675A4  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8026A668 002675A8  C0 02 CC 38 */	lfs f0, lbl_8051AF98@sda21(r2)
/* 8026A66C 002675AC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8026A670 002675B0  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 8026A674 002675B4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8026A678 002675B8  EC 00 0F FC */	fnmsubs f0, f0, f31, f1
/* 8026A67C 002675BC  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_8026A680:
/* 8026A680 002675C0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8026A684 002675C4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8026A688 002675C8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8026A68C 002675CC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8026A690 002675D0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8026A694 002675D4  7C 08 03 A6 */	mtlr r0
/* 8026A698 002675D8  38 21 00 50 */	addi r1, r1, 0x50
/* 8026A69C 002675DC  4E 80 00 20 */	blr 
.endfn setNearestBridge__Q34Game4Tobi3ObjFv

.fn setCullingCheck__Q34Game4Tobi3ObjFv, global
/* 8026A6A0 002675E0  4E 80 00 20 */	blr 
.endfn setCullingCheck__Q34Game4Tobi3ObjFv

.fn checkBreakOrMove__Q34Game4Tobi3ObjFv, global
/* 8026A6A4 002675E4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8026A6A8 002675E8  7C 08 02 A6 */	mflr r0
/* 8026A6AC 002675EC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8026A6B0 002675F0  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8026A6B4 002675F4  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8026A6B8 002675F8  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8026A6BC 002675FC  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8026A6C0 00267600  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8026A6C4 00267604  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8026A6C8 00267608  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8026A6CC 0026760C  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8026A6D0 00267610  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8026A6D4 00267614  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8026A6D8 00267618  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 8026A6DC 0026761C  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 8026A6E0 00267620  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8026A6E4 00267624  7C 7F 1B 78 */	mr r31, r3
/* 8026A6E8 00267628  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8026A6EC 0026762C  28 04 00 00 */	cmplwi r4, 0
/* 8026A6F0 00267630  41 82 01 20 */	beq .L_8026A810
/* 8026A6F4 00267634  38 61 00 20 */	addi r3, r1, 0x20
/* 8026A6F8 00267638  4B F8 49 41 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8026A6FC 0026763C  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 8026A700 00267640  38 61 00 14 */	addi r3, r1, 0x14
/* 8026A704 00267644  C3 A1 00 24 */	lfs f29, 0x24(r1)
/* 8026A708 00267648  C3 61 00 28 */	lfs f27, 0x28(r1)
/* 8026A70C 0026764C  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026A710 00267650  4B F8 48 25 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8026A714 00267654  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8026A718 00267658  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8026A71C 0026765C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8026A720 00267660  EF C2 00 28 */	fsubs f30, f2, f0
/* 8026A724 00267664  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8026A728 00267668  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8026A72C 0026766C  EF E1 00 28 */	fsubs f31, f1, f0
/* 8026A730 00267670  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8026A734 00267674  EC 3D 07 B2 */	fmuls f1, f29, f30
/* 8026A738 00267678  EF A2 00 28 */	fsubs f29, f2, f0
/* 8026A73C 0026767C  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A740 00267680  EC 3C 0F FA */	fmadds f1, f28, f31, f1
/* 8026A744 00267684  EC 3B 0F 7A */	fmadds f1, f27, f29, f1
/* 8026A748 00267688  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026A74C 0026768C  40 81 00 0C */	ble .L_8026A758
/* 8026A750 00267690  38 60 00 07 */	li r3, 7
/* 8026A754 00267694  48 00 00 C0 */	b .L_8026A814
.L_8026A758:
/* 8026A758 00267698  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026A75C 0026769C  38 61 00 08 */	addi r3, r1, 8
/* 8026A760 002676A0  4B F8 49 7D */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8026A764 002676A4  C3 61 00 08 */	lfs f27, 8(r1)
/* 8026A768 002676A8  C3 81 00 0C */	lfs f28, 0xc(r1)
/* 8026A76C 002676AC  C3 41 00 10 */	lfs f26, 0x10(r1)
/* 8026A770 002676B0  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 8026A774 002676B4  4B F8 48 BD */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 8026A778 002676B8  EC 7C 07 B2 */	fmuls f3, f28, f30
/* 8026A77C 002676BC  C0 02 CC 38 */	lfs f0, lbl_8051AF98@sda21(r2)
/* 8026A780 002676C0  C0 42 CC 58 */	lfs f2, lbl_8051AFB8@sda21(r2)
/* 8026A784 002676C4  EC 80 00 72 */	fmuls f4, f0, f1
/* 8026A788 002676C8  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A78C 002676CC  EC 3B 1F FA */	fmadds f1, f27, f31, f3
/* 8026A790 002676D0  EC 42 20 2A */	fadds f2, f2, f4
/* 8026A794 002676D4  EC 3A 0F 7A */	fmadds f1, f26, f29, f1
/* 8026A798 002676D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026A79C 002676DC  40 80 00 0C */	bge .L_8026A7A8
/* 8026A7A0 002676E0  D0 5F 02 E4 */	stfs f2, 0x2e4(r31)
/* 8026A7A4 002676E4  48 00 00 0C */	b .L_8026A7B0
.L_8026A7A8:
/* 8026A7A8 002676E8  FC 00 10 50 */	fneg f0, f2
/* 8026A7AC 002676EC  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
.L_8026A7B0:
/* 8026A7B0 002676F0  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026A7B4 002676F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026A7B8 002676F8  40 81 00 08 */	ble .L_8026A7C0
/* 8026A7BC 002676FC  48 00 00 08 */	b .L_8026A7C4
.L_8026A7C0:
/* 8026A7C0 00267700  FC 20 08 50 */	fneg f1, f1
.L_8026A7C4:
/* 8026A7C4 00267704  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 8026A7C8 00267708  40 81 00 0C */	ble .L_8026A7D4
/* 8026A7CC 0026770C  38 60 00 06 */	li r3, 6
/* 8026A7D0 00267710  48 00 00 44 */	b .L_8026A814
.L_8026A7D4:
/* 8026A7D4 00267714  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8026A7D8 00267718  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8026A7DC 0026771C  81 83 00 04 */	lwz r12, 4(r3)
/* 8026A7E0 00267720  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8026A7E4 00267724  7D 89 03 A6 */	mtctr r12
/* 8026A7E8 00267728  4E 80 04 21 */	bctrl 
/* 8026A7EC 0026772C  C0 02 CC 5C */	lfs f0, lbl_8051AFBC@sda21(r2)
/* 8026A7F0 00267730  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8026A7F4 00267734  EC 00 08 2A */	fadds f0, f0, f1
/* 8026A7F8 00267738  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8026A7FC 0026773C  40 81 00 0C */	ble .L_8026A808
/* 8026A800 00267740  38 60 00 08 */	li r3, 8
/* 8026A804 00267744  48 00 00 10 */	b .L_8026A814
.L_8026A808:
/* 8026A808 00267748  38 60 00 06 */	li r3, 6
/* 8026A80C 0026774C  48 00 00 08 */	b .L_8026A814
.L_8026A810:
/* 8026A810 00267750  38 60 00 07 */	li r3, 7
.L_8026A814:
/* 8026A814 00267754  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8026A818 00267758  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8026A81C 0026775C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8026A820 00267760  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8026A824 00267764  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8026A828 00267768  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8026A82C 0026776C  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8026A830 00267770  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8026A834 00267774  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 8026A838 00267778  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8026A83C 0026777C  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 8026A840 00267780  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 8026A844 00267784  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8026A848 00267788  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8026A84C 0026778C  7C 08 03 A6 */	mtlr r0
/* 8026A850 00267790  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8026A854 00267794  4E 80 00 20 */	blr 
.endfn checkBreakOrMove__Q34Game4Tobi3ObjFv

.fn isBreakBridge__Q34Game4Tobi3ObjFv, global
/* 8026A858 00267798  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 8026A85C 0026779C  28 03 00 00 */	cmplwi r3, 0
/* 8026A860 002677A0  41 82 00 18 */	beq .L_8026A878
/* 8026A864 002677A4  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8026A868 002677A8  2C 00 00 00 */	cmpwi r0, 0
/* 8026A86C 002677AC  41 82 00 0C */	beq .L_8026A878
/* 8026A870 002677B0  38 60 00 01 */	li r3, 1
/* 8026A874 002677B4  4E 80 00 20 */	blr 
.L_8026A878:
/* 8026A878 002677B8  38 60 00 00 */	li r3, 0
/* 8026A87C 002677BC  4E 80 00 20 */	blr 
.endfn isBreakBridge__Q34Game4Tobi3ObjFv

.fn moveBridgeSide__Q34Game4Tobi3ObjFv, global
/* 8026A880 002677C0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8026A884 002677C4  7C 08 02 A6 */	mflr r0
/* 8026A888 002677C8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8026A88C 002677CC  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8026A890 002677D0  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8026A894 002677D4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8026A898 002677D8  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8026A89C 002677DC  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8026A8A0 002677E0  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8026A8A4 002677E4  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8026A8A8 002677E8  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8026A8AC 002677EC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8026A8B0 002677F0  7C 7F 1B 78 */	mr r31, r3
/* 8026A8B4 002677F4  38 61 00 44 */	addi r3, r1, 0x44
/* 8026A8B8 002677F8  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026A8BC 002677FC  4B F8 46 79 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8026A8C0 00267800  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 8026A8C4 00267804  38 61 00 38 */	addi r3, r1, 0x38
/* 8026A8C8 00267808  C3 81 00 4C */	lfs f28, 0x4c(r1)
/* 8026A8CC 0026780C  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026A8D0 00267810  4B F8 48 0D */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8026A8D4 00267814  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 8026A8D8 00267818  38 61 00 2C */	addi r3, r1, 0x2c
/* 8026A8DC 0026781C  C3 E1 00 40 */	lfs f31, 0x40(r1)
/* 8026A8E0 00267820  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026A8E4 00267824  4B F8 47 55 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8026A8E8 00267828  C0 3F 02 E4 */	lfs f1, 0x2e4(r31)
/* 8026A8EC 0026782C  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8026A8F0 00267830  EF FF 00 72 */	fmuls f31, f31, f1
/* 8026A8F4 00267834  C0 02 CC 60 */	lfs f0, lbl_8051AFC0@sda21(r2)
/* 8026A8F8 00267838  EF DE 00 72 */	fmuls f30, f30, f1
/* 8026A8FC 0026783C  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8026A900 00267840  EC 84 00 32 */	fmuls f4, f4, f0
/* 8026A904 00267844  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8026A908 00267848  EF 9C F8 2A */	fadds f28, f28, f31
/* 8026A90C 0026784C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8026A910 00267850  EC 63 00 32 */	fmuls f3, f3, f0
/* 8026A914 00267854  C0 02 CC 64 */	lfs f0, lbl_8051AFC4@sda21(r2)
/* 8026A918 00267858  EF BD F0 2A */	fadds f29, f29, f30
/* 8026A91C 0026785C  EF 9C 20 2A */	fadds f28, f28, f4
/* 8026A920 00267860  EF BD 18 2A */	fadds f29, f29, f3
/* 8026A924 00267864  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8026A928 00267868  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8026A92C 0026786C  EC 21 00 72 */	fmuls f1, f1, f1
/* 8026A930 00267870  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8026A934 00267874  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026A938 00267878  40 80 00 80 */	bge .L_8026A9B8
/* 8026A93C 0026787C  7F E3 FB 78 */	mr r3, r31
/* 8026A940 00267880  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8026A944 00267884  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026A948 00267888  C0 22 CC 68 */	lfs f1, lbl_8051AFC8@sda21(r2)
/* 8026A94C 0026788C  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8026A950 00267890  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026A954 00267894  EF C1 00 32 */	fmuls f30, f1, f0
/* 8026A958 00267898  7D 89 03 A6 */	mtctr r12
/* 8026A95C 0026789C  4E 80 04 21 */	bctrl 
/* 8026A960 002678A0  4B E6 4E BD */	bl sin
/* 8026A964 002678A4  7F E3 FB 78 */	mr r3, r31
/* 8026A968 002678A8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8026A96C 002678AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026A970 002678B0  FF A0 08 18 */	frsp f29, f1
/* 8026A974 002678B4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8026A978 002678B8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8026A97C 002678BC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026A980 002678C0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8026A984 002678C4  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8026A988 002678C8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026A98C 002678CC  7D 89 03 A6 */	mtctr r12
/* 8026A990 002678D0  4E 80 04 21 */	bctrl 
/* 8026A994 002678D4  4B E6 49 21 */	bl cos
/* 8026A998 002678D8  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8026A99C 002678DC  38 60 00 01 */	li r3, 1
/* 8026A9A0 002678E0  FC 20 08 18 */	frsp f1, f1
/* 8026A9A4 002678E4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8026A9A8 002678E8  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8026A9AC 002678EC  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8026A9B0 002678F0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8026A9B4 002678F4  48 00 01 40 */	b .L_8026AAF4
.L_8026A9B8:
/* 8026A9B8 002678F8  7F E4 FB 78 */	mr r4, r31
/* 8026A9BC 002678FC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8026A9C0 00267900  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026A9C4 00267904  38 61 00 08 */	addi r3, r1, 8
/* 8026A9C8 00267908  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 8026A9CC 0026790C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026A9D0 00267910  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8026A9D4 00267914  7D 89 03 A6 */	mtctr r12
/* 8026A9D8 00267918  4E 80 04 21 */	bctrl 
/* 8026A9DC 0026791C  C0 21 00 08 */	lfs f1, 8(r1)
/* 8026A9E0 00267920  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8026A9E4 00267924  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8026A9E8 00267928  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8026A9EC 0026792C  EC 3D 08 28 */	fsubs f1, f29, f1
/* 8026A9F0 00267930  EC 5C 00 28 */	fsubs f2, f28, f0
/* 8026A9F4 00267934  4B DC A7 15 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8026A9F8 00267938  48 1A 71 D9 */	bl roundAng__Ff
/* 8026A9FC 0026793C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AA00 00267940  FF A0 08 90 */	fmr f29, f1
/* 8026AA04 00267944  7F E3 FB 78 */	mr r3, r31
/* 8026AA08 00267948  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AA0C 0026794C  7D 89 03 A6 */	mtctr r12
/* 8026AA10 00267950  4E 80 04 21 */	bctrl 
/* 8026AA14 00267954  FC 40 08 90 */	fmr f2, f1
/* 8026AA18 00267958  FC 20 E8 90 */	fmr f1, f29
/* 8026AA1C 0026795C  48 1A 71 E1 */	bl angDist__Fff
/* 8026AA20 00267960  EF C1 07 B2 */	fmuls f30, f1, f30
/* 8026AA24 00267964  C0 02 CC 70 */	lfs f0, lbl_8051AFD0@sda21(r2)
/* 8026AA28 00267968  C0 22 CC 6C */	lfs f1, lbl_8051AFCC@sda21(r2)
/* 8026AA2C 0026796C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8026AA30 00267970  FC 40 F2 10 */	fabs f2, f30
/* 8026AA34 00267974  EC 21 00 32 */	fmuls f1, f1, f0
/* 8026AA38 00267978  FC 00 10 18 */	frsp f0, f2
/* 8026AA3C 0026797C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026AA40 00267980  40 81 00 1C */	ble .L_8026AA5C
/* 8026AA44 00267984  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026AA48 00267988  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8026AA4C 0026798C  40 81 00 0C */	ble .L_8026AA58
/* 8026AA50 00267990  FF C0 08 90 */	fmr f30, f1
/* 8026AA54 00267994  48 00 00 08 */	b .L_8026AA5C
.L_8026AA58:
/* 8026AA58 00267998  FF C0 08 50 */	fneg f30, f1
.L_8026AA5C:
/* 8026AA5C 0026799C  7F E3 FB 78 */	mr r3, r31
/* 8026AA60 002679A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AA64 002679A4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AA68 002679A8  7D 89 03 A6 */	mtctr r12
/* 8026AA6C 002679AC  4E 80 04 21 */	bctrl 
/* 8026AA70 002679B0  EC 3E 08 2A */	fadds f1, f30, f1
/* 8026AA74 002679B4  48 1A 71 5D */	bl roundAng__Ff
/* 8026AA78 002679B8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8026AA7C 002679BC  7F E3 FB 78 */	mr r3, r31
/* 8026AA80 002679C0  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8026AA84 002679C4  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8026AA88 002679C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AA8C 002679CC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8026AA90 002679D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AA94 002679D4  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 8026AA98 002679D8  7D 89 03 A6 */	mtctr r12
/* 8026AA9C 002679DC  4E 80 04 21 */	bctrl 
/* 8026AAA0 002679E0  4B E6 4D 7D */	bl sin
/* 8026AAA4 002679E4  7F E3 FB 78 */	mr r3, r31
/* 8026AAA8 002679E8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8026AAAC 002679EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AAB0 002679F0  FF A0 08 18 */	frsp f29, f1
/* 8026AAB4 002679F4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8026AAB8 002679F8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8026AABC 002679FC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AAC0 00267A00  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8026AAC4 00267A04  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8026AAC8 00267A08  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8026AACC 00267A0C  7D 89 03 A6 */	mtctr r12
/* 8026AAD0 00267A10  4E 80 04 21 */	bctrl 
/* 8026AAD4 00267A14  4B E6 47 E1 */	bl cos
/* 8026AAD8 00267A18  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8026AADC 00267A1C  38 60 00 00 */	li r3, 0
/* 8026AAE0 00267A20  FC 20 08 18 */	frsp f1, f1
/* 8026AAE4 00267A24  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8026AAE8 00267A28  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8026AAEC 00267A2C  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8026AAF0 00267A30  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8026AAF4:
/* 8026AAF4 00267A34  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8026AAF8 00267A38  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8026AAFC 00267A3C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8026AB00 00267A40  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8026AB04 00267A44  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8026AB08 00267A48  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8026AB0C 00267A4C  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8026AB10 00267A50  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8026AB14 00267A54  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8026AB18 00267A58  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8026AB1C 00267A5C  7C 08 03 A6 */	mtlr r0
/* 8026AB20 00267A60  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8026AB24 00267A64  4E 80 00 20 */	blr 
.endfn moveBridgeSide__Q34Game4Tobi3ObjFv

.fn moveBridgeCentre__Q34Game4Tobi3ObjFv, global
/* 8026AB28 00267A68  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8026AB2C 00267A6C  7C 08 02 A6 */	mflr r0
/* 8026AB30 00267A70  90 01 00 94 */	stw r0, 0x94(r1)
/* 8026AB34 00267A74  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8026AB38 00267A78  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8026AB3C 00267A7C  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8026AB40 00267A80  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8026AB44 00267A84  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8026AB48 00267A88  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8026AB4C 00267A8C  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8026AB50 00267A90  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8026AB54 00267A94  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8026AB58 00267A98  7C 7F 1B 78 */	mr r31, r3
/* 8026AB5C 00267A9C  38 61 00 38 */	addi r3, r1, 0x38
/* 8026AB60 00267AA0  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026AB64 00267AA4  4B F8 43 D1 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8026AB68 00267AA8  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 8026AB6C 00267AAC  38 61 00 2C */	addi r3, r1, 0x2c
/* 8026AB70 00267AB0  C3 81 00 40 */	lfs f28, 0x40(r1)
/* 8026AB74 00267AB4  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8026AB78 00267AB8  4B F8 45 65 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8026AB7C 00267ABC  C0 22 CC 74 */	lfs f1, lbl_8051AFD4@sda21(r2)
/* 8026AB80 00267AC0  C0 1F 02 E0 */	lfs f0, 0x2e0(r31)
/* 8026AB84 00267AC4  C0 A1 00 34 */	lfs f5, 0x34(r1)
/* 8026AB88 00267AC8  EC 61 00 32 */	fmuls f3, f1, f0
/* 8026AB8C 00267ACC  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 8026AB90 00267AD0  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8026AB94 00267AD4  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8026AB98 00267AD8  EC A5 00 F2 */	fmuls f5, f5, f3
/* 8026AB9C 00267ADC  C0 02 CC 64 */	lfs f0, lbl_8051AFC4@sda21(r2)
/* 8026ABA0 00267AE0  EC 84 00 F2 */	fmuls f4, f4, f3
/* 8026ABA4 00267AE4  EF 9C 28 2A */	fadds f28, f28, f5
/* 8026ABA8 00267AE8  EF BD 20 2A */	fadds f29, f29, f4
/* 8026ABAC 00267AEC  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8026ABB0 00267AF0  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8026ABB4 00267AF4  EC 21 00 72 */	fmuls f1, f1, f1
/* 8026ABB8 00267AF8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8026ABBC 00267AFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026ABC0 00267B00  40 80 00 80 */	bge .L_8026AC40
/* 8026ABC4 00267B04  7F E3 FB 78 */	mr r3, r31
/* 8026ABC8 00267B08  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8026ABCC 00267B0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026ABD0 00267B10  C0 22 CC 68 */	lfs f1, lbl_8051AFC8@sda21(r2)
/* 8026ABD4 00267B14  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8026ABD8 00267B18  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026ABDC 00267B1C  EF C1 00 32 */	fmuls f30, f1, f0
/* 8026ABE0 00267B20  7D 89 03 A6 */	mtctr r12
/* 8026ABE4 00267B24  4E 80 04 21 */	bctrl 
/* 8026ABE8 00267B28  4B E6 4C 35 */	bl sin
/* 8026ABEC 00267B2C  7F E3 FB 78 */	mr r3, r31
/* 8026ABF0 00267B30  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8026ABF4 00267B34  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026ABF8 00267B38  FF A0 08 18 */	frsp f29, f1
/* 8026ABFC 00267B3C  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8026AC00 00267B40  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8026AC04 00267B44  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AC08 00267B48  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8026AC0C 00267B4C  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8026AC10 00267B50  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026AC14 00267B54  7D 89 03 A6 */	mtctr r12
/* 8026AC18 00267B58  4E 80 04 21 */	bctrl 
/* 8026AC1C 00267B5C  4B E6 46 99 */	bl cos
/* 8026AC20 00267B60  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8026AC24 00267B64  38 60 00 01 */	li r3, 1
/* 8026AC28 00267B68  FC 20 08 18 */	frsp f1, f1
/* 8026AC2C 00267B6C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8026AC30 00267B70  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8026AC34 00267B74  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8026AC38 00267B78  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8026AC3C 00267B7C  48 00 01 40 */	b .L_8026AD7C
.L_8026AC40:
/* 8026AC40 00267B80  7F E4 FB 78 */	mr r4, r31
/* 8026AC44 00267B84  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8026AC48 00267B88  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AC4C 00267B8C  38 61 00 08 */	addi r3, r1, 8
/* 8026AC50 00267B90  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 8026AC54 00267B94  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026AC58 00267B98  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8026AC5C 00267B9C  7D 89 03 A6 */	mtctr r12
/* 8026AC60 00267BA0  4E 80 04 21 */	bctrl 
/* 8026AC64 00267BA4  C0 21 00 08 */	lfs f1, 8(r1)
/* 8026AC68 00267BA8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8026AC6C 00267BAC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8026AC70 00267BB0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8026AC74 00267BB4  EC 3D 08 28 */	fsubs f1, f29, f1
/* 8026AC78 00267BB8  EC 5C 00 28 */	fsubs f2, f28, f0
/* 8026AC7C 00267BBC  4B DC A4 8D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8026AC80 00267BC0  48 1A 6F 51 */	bl roundAng__Ff
/* 8026AC84 00267BC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AC88 00267BC8  FF A0 08 90 */	fmr f29, f1
/* 8026AC8C 00267BCC  7F E3 FB 78 */	mr r3, r31
/* 8026AC90 00267BD0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AC94 00267BD4  7D 89 03 A6 */	mtctr r12
/* 8026AC98 00267BD8  4E 80 04 21 */	bctrl 
/* 8026AC9C 00267BDC  FC 40 08 90 */	fmr f2, f1
/* 8026ACA0 00267BE0  FC 20 E8 90 */	fmr f1, f29
/* 8026ACA4 00267BE4  48 1A 6F 59 */	bl angDist__Fff
/* 8026ACA8 00267BE8  EF C1 07 B2 */	fmuls f30, f1, f30
/* 8026ACAC 00267BEC  C0 02 CC 70 */	lfs f0, lbl_8051AFD0@sda21(r2)
/* 8026ACB0 00267BF0  C0 22 CC 6C */	lfs f1, lbl_8051AFCC@sda21(r2)
/* 8026ACB4 00267BF4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8026ACB8 00267BF8  FC 40 F2 10 */	fabs f2, f30
/* 8026ACBC 00267BFC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8026ACC0 00267C00  FC 00 10 18 */	frsp f0, f2
/* 8026ACC4 00267C04  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026ACC8 00267C08  40 81 00 1C */	ble .L_8026ACE4
/* 8026ACCC 00267C0C  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026ACD0 00267C10  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8026ACD4 00267C14  40 81 00 0C */	ble .L_8026ACE0
/* 8026ACD8 00267C18  FF C0 08 90 */	fmr f30, f1
/* 8026ACDC 00267C1C  48 00 00 08 */	b .L_8026ACE4
.L_8026ACE0:
/* 8026ACE0 00267C20  FF C0 08 50 */	fneg f30, f1
.L_8026ACE4:
/* 8026ACE4 00267C24  7F E3 FB 78 */	mr r3, r31
/* 8026ACE8 00267C28  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026ACEC 00267C2C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026ACF0 00267C30  7D 89 03 A6 */	mtctr r12
/* 8026ACF4 00267C34  4E 80 04 21 */	bctrl 
/* 8026ACF8 00267C38  EC 3E 08 2A */	fadds f1, f30, f1
/* 8026ACFC 00267C3C  48 1A 6E D5 */	bl roundAng__Ff
/* 8026AD00 00267C40  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8026AD04 00267C44  7F E3 FB 78 */	mr r3, r31
/* 8026AD08 00267C48  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8026AD0C 00267C4C  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8026AD10 00267C50  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AD14 00267C54  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8026AD18 00267C58  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AD1C 00267C5C  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 8026AD20 00267C60  7D 89 03 A6 */	mtctr r12
/* 8026AD24 00267C64  4E 80 04 21 */	bctrl 
/* 8026AD28 00267C68  4B E6 4A F5 */	bl sin
/* 8026AD2C 00267C6C  7F E3 FB 78 */	mr r3, r31
/* 8026AD30 00267C70  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8026AD34 00267C74  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026AD38 00267C78  FF A0 08 18 */	frsp f29, f1
/* 8026AD3C 00267C7C  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8026AD40 00267C80  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8026AD44 00267C84  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AD48 00267C88  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8026AD4C 00267C8C  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8026AD50 00267C90  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8026AD54 00267C94  7D 89 03 A6 */	mtctr r12
/* 8026AD58 00267C98  4E 80 04 21 */	bctrl 
/* 8026AD5C 00267C9C  4B E6 45 59 */	bl cos
/* 8026AD60 00267CA0  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8026AD64 00267CA4  38 60 00 00 */	li r3, 0
/* 8026AD68 00267CA8  FC 20 08 18 */	frsp f1, f1
/* 8026AD6C 00267CAC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8026AD70 00267CB0  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8026AD74 00267CB4  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8026AD78 00267CB8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8026AD7C:
/* 8026AD7C 00267CBC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8026AD80 00267CC0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8026AD84 00267CC4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8026AD88 00267CC8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8026AD8C 00267CCC  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8026AD90 00267CD0  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8026AD94 00267CD4  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8026AD98 00267CD8  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8026AD9C 00267CDC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8026ADA0 00267CE0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8026ADA4 00267CE4  7C 08 03 A6 */	mtlr r0
/* 8026ADA8 00267CE8  38 21 00 90 */	addi r1, r1, 0x90
/* 8026ADAC 00267CEC  4E 80 00 20 */	blr 
.endfn moveBridgeCentre__Q34Game4Tobi3ObjFv

.fn moveBridgeTop__Q34Game4Tobi3ObjFv, global
/* 8026ADB0 00267CF0  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8026ADB4 00267CF4  7C 08 02 A6 */	mflr r0
/* 8026ADB8 00267CF8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8026ADBC 00267CFC  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8026ADC0 00267D00  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8026ADC4 00267D04  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8026ADC8 00267D08  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8026ADCC 00267D0C  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8026ADD0 00267D10  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8026ADD4 00267D14  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8026ADD8 00267D18  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 8026ADDC 00267D1C  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 8026ADE0 00267D20  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 8026ADE4 00267D24  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8026ADE8 00267D28  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8026ADEC 00267D2C  7C 7E 1B 78 */	mr r30, r3
/* 8026ADF0 00267D30  38 61 00 44 */	addi r3, r1, 0x44
/* 8026ADF4 00267D34  80 9E 02 DC */	lwz r4, 0x2dc(r30)
/* 8026ADF8 00267D38  80 A4 02 18 */	lwz r5, 0x218(r4)
/* 8026ADFC 00267D3C  3B E5 FF FF */	addi r31, r5, -1
/* 8026AE00 00267D40  7F E5 FB 78 */	mr r5, r31
/* 8026AE04 00267D44  4B F8 40 49 */	bl getStagePos__Q34Game10ItemBridge4ItemFi
/* 8026AE08 00267D48  C3 E1 00 44 */	lfs f31, 0x44(r1)
/* 8026AE0C 00267D4C  38 61 00 38 */	addi r3, r1, 0x38
/* 8026AE10 00267D50  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 8026AE14 00267D54  80 9E 02 DC */	lwz r4, 0x2dc(r30)
/* 8026AE18 00267D58  4B F8 42 C5 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8026AE1C 00267D5C  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8026AE20 00267D60  2C 1F 00 00 */	cmpwi r31, 0
/* 8026AE24 00267D64  C0 1E 02 E0 */	lfs f0, 0x2e0(r30)
/* 8026AE28 00267D68  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8026AE2C 00267D6C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8026AE30 00267D70  EC 42 00 32 */	fmuls f2, f2, f0
/* 8026AE34 00267D74  EF FF 08 2A */	fadds f31, f31, f1
/* 8026AE38 00267D78  EF DE 10 2A */	fadds f30, f30, f2
/* 8026AE3C 00267D7C  40 81 00 2C */	ble .L_8026AE68
/* 8026AE40 00267D80  80 9E 02 DC */	lwz r4, 0x2dc(r30)
/* 8026AE44 00267D84  38 61 00 2C */	addi r3, r1, 0x2c
/* 8026AE48 00267D88  4B F8 41 F1 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8026AE4C 00267D8C  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8026AE50 00267D90  C0 02 CC 60 */	lfs f0, lbl_8051AFC0@sda21(r2)
/* 8026AE54 00267D94  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8026AE58 00267D98  EC 21 00 32 */	fmuls f1, f1, f0
/* 8026AE5C 00267D9C  EC 42 00 32 */	fmuls f2, f2, f0
/* 8026AE60 00267DA0  EF FF 08 2A */	fadds f31, f31, f1
/* 8026AE64 00267DA4  EF DE 10 2A */	fadds f30, f30, f2
.L_8026AE68:
/* 8026AE68 00267DA8  7F C4 F3 78 */	mr r4, r30
/* 8026AE6C 00267DAC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8026AE70 00267DB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026AE74 00267DB4  38 61 00 08 */	addi r3, r1, 8
/* 8026AE78 00267DB8  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 8026AE7C 00267DBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026AE80 00267DC0  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 8026AE84 00267DC4  7D 89 03 A6 */	mtctr r12
/* 8026AE88 00267DC8  4E 80 04 21 */	bctrl 
/* 8026AE8C 00267DCC  C0 21 00 08 */	lfs f1, 8(r1)
/* 8026AE90 00267DD0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8026AE94 00267DD4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8026AE98 00267DD8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8026AE9C 00267DDC  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8026AEA0 00267DE0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 8026AEA4 00267DE4  4B DC A2 65 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8026AEA8 00267DE8  48 1A 6D 29 */	bl roundAng__Ff
/* 8026AEAC 00267DEC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026AEB0 00267DF0  FF 60 08 90 */	fmr f27, f1
/* 8026AEB4 00267DF4  7F C3 F3 78 */	mr r3, r30
/* 8026AEB8 00267DF8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AEBC 00267DFC  7D 89 03 A6 */	mtctr r12
/* 8026AEC0 00267E00  4E 80 04 21 */	bctrl 
/* 8026AEC4 00267E04  FC 40 08 90 */	fmr f2, f1
/* 8026AEC8 00267E08  FC 20 D8 90 */	fmr f1, f27
/* 8026AECC 00267E0C  48 1A 6D 31 */	bl angDist__Fff
/* 8026AED0 00267E10  EF A1 07 72 */	fmuls f29, f1, f29
/* 8026AED4 00267E14  C0 02 CC 70 */	lfs f0, lbl_8051AFD0@sda21(r2)
/* 8026AED8 00267E18  C0 22 CC 6C */	lfs f1, lbl_8051AFCC@sda21(r2)
/* 8026AEDC 00267E1C  EC 00 07 32 */	fmuls f0, f0, f28
/* 8026AEE0 00267E20  FC 40 EA 10 */	fabs f2, f29
/* 8026AEE4 00267E24  EC 21 00 32 */	fmuls f1, f1, f0
/* 8026AEE8 00267E28  FC 00 10 18 */	frsp f0, f2
/* 8026AEEC 00267E2C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026AEF0 00267E30  40 81 00 1C */	ble .L_8026AF0C
/* 8026AEF4 00267E34  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026AEF8 00267E38  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8026AEFC 00267E3C  40 81 00 0C */	ble .L_8026AF08
/* 8026AF00 00267E40  FF A0 08 90 */	fmr f29, f1
/* 8026AF04 00267E44  48 00 00 08 */	b .L_8026AF0C
.L_8026AF08:
/* 8026AF08 00267E48  FF A0 08 50 */	fneg f29, f1
.L_8026AF0C:
/* 8026AF0C 00267E4C  7F C3 F3 78 */	mr r3, r30
/* 8026AF10 00267E50  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026AF14 00267E54  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AF18 00267E58  7D 89 03 A6 */	mtctr r12
/* 8026AF1C 00267E5C  4E 80 04 21 */	bctrl 
/* 8026AF20 00267E60  EC 3D 08 2A */	fadds f1, f29, f1
/* 8026AF24 00267E64  48 1A 6C AD */	bl roundAng__Ff
/* 8026AF28 00267E68  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8026AF2C 00267E6C  C0 02 CC 1C */	lfs f0, lbl_8051AF7C@sda21(r2)
/* 8026AF30 00267E70  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8026AF34 00267E74  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 8026AF38 00267E78  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 8026AF3C 00267E7C  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 8026AF40 00267E80  EC 21 F0 28 */	fsubs f1, f1, f30
/* 8026AF44 00267E84  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8026AF48 00267E88  EC 21 00 72 */	fmuls f1, f1, f1
/* 8026AF4C 00267E8C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8026AF50 00267E90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026AF54 00267E94  40 80 00 1C */	bge .L_8026AF70
/* 8026AF58 00267E98  C0 02 CC 10 */	lfs f0, lbl_8051AF70@sda21(r2)
/* 8026AF5C 00267E9C  38 60 00 01 */	li r3, 1
/* 8026AF60 00267EA0  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8026AF64 00267EA4  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 8026AF68 00267EA8  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8026AF6C 00267EAC  48 00 00 F4 */	b .L_8026B060
.L_8026AF70:
/* 8026AF70 00267EB0  C0 02 CC 64 */	lfs f0, lbl_8051AFC4@sda21(r2)
/* 8026AF74 00267EB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026AF78 00267EB8  40 80 00 78 */	bge .L_8026AFF0
/* 8026AF7C 00267EBC  7F C3 F3 78 */	mr r3, r30
/* 8026AF80 00267EC0  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8026AF84 00267EC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026AF88 00267EC8  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 8026AF8C 00267ECC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AF90 00267ED0  7D 89 03 A6 */	mtctr r12
/* 8026AF94 00267ED4  4E 80 04 21 */	bctrl 
/* 8026AF98 00267ED8  4B E6 48 85 */	bl sin
/* 8026AF9C 00267EDC  7F C3 F3 78 */	mr r3, r30
/* 8026AFA0 00267EE0  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8026AFA4 00267EE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026AFA8 00267EE8  FF 60 08 18 */	frsp f27, f1
/* 8026AFAC 00267EEC  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8026AFB0 00267EF0  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8026AFB4 00267EF4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026AFB8 00267EF8  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8026AFBC 00267EFC  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8026AFC0 00267F00  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026AFC4 00267F04  7D 89 03 A6 */	mtctr r12
/* 8026AFC8 00267F08  4E 80 04 21 */	bctrl 
/* 8026AFCC 00267F0C  4B E6 42 E9 */	bl cos
/* 8026AFD0 00267F10  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8026AFD4 00267F14  38 60 00 01 */	li r3, 1
/* 8026AFD8 00267F18  FC 20 08 18 */	frsp f1, f1
/* 8026AFDC 00267F1C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8026AFE0 00267F20  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8026AFE4 00267F24  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8026AFE8 00267F28  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8026AFEC 00267F2C  48 00 00 74 */	b .L_8026B060
.L_8026AFF0:
/* 8026AFF0 00267F30  7F C3 F3 78 */	mr r3, r30
/* 8026AFF4 00267F34  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8026AFF8 00267F38  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026AFFC 00267F3C  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 8026B000 00267F40  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026B004 00267F44  7D 89 03 A6 */	mtctr r12
/* 8026B008 00267F48  4E 80 04 21 */	bctrl 
/* 8026B00C 00267F4C  4B E6 48 11 */	bl sin
/* 8026B010 00267F50  7F C3 F3 78 */	mr r3, r30
/* 8026B014 00267F54  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8026B018 00267F58  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026B01C 00267F5C  FF 60 08 18 */	frsp f27, f1
/* 8026B020 00267F60  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8026B024 00267F64  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8026B028 00267F68  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026B02C 00267F6C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8026B030 00267F70  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8026B034 00267F74  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8026B038 00267F78  7D 89 03 A6 */	mtctr r12
/* 8026B03C 00267F7C  4E 80 04 21 */	bctrl 
/* 8026B040 00267F80  4B E6 42 75 */	bl cos
/* 8026B044 00267F84  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8026B048 00267F88  38 60 00 00 */	li r3, 0
/* 8026B04C 00267F8C  FC 20 08 18 */	frsp f1, f1
/* 8026B050 00267F90  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8026B054 00267F94  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8026B058 00267F98  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8026B05C 00267F9C  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_8026B060:
/* 8026B060 00267FA0  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8026B064 00267FA4  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8026B068 00267FA8  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8026B06C 00267FAC  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8026B070 00267FB0  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 8026B074 00267FB4  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8026B078 00267FB8  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 8026B07C 00267FBC  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 8026B080 00267FC0  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 8026B084 00267FC4  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 8026B088 00267FC8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8026B08C 00267FCC  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8026B090 00267FD0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8026B094 00267FD4  7C 08 03 A6 */	mtlr r0
/* 8026B098 00267FD8  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8026B09C 00267FDC  4E 80 00 20 */	blr 
.endfn moveBridgeTop__Q34Game4Tobi3ObjFv

.fn breakTargetBridge__Q34Game4Tobi3ObjFv, global
/* 8026B0A0 00267FE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026B0A4 00267FE4  7C 08 02 A6 */	mflr r0
/* 8026B0A8 00267FE8  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8026B0AC 00267FEC  3C A0 80 4B */	lis r5, __vt__Q24Game19InteractBreakBridge@ha
/* 8026B0B0 00267FF0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026B0B4 00267FF4  38 C4 A3 00 */	addi r6, r4, __vt__Q24Game11Interaction@l
/* 8026B0B8 00267FF8  38 05 74 9C */	addi r0, r5, __vt__Q24Game19InteractBreakBridge@l
/* 8026B0BC 00267FFC  38 81 00 08 */	addi r4, r1, 8
/* 8026B0C0 00268000  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 8026B0C4 00268004  C0 07 08 BC */	lfs f0, 0x8bc(r7)
/* 8026B0C8 00268008  90 C1 00 08 */	stw r6, 8(r1)
/* 8026B0CC 0026800C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8026B0D0 00268010  90 01 00 08 */	stw r0, 8(r1)
/* 8026B0D4 00268014  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8026B0D8 00268018  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 8026B0DC 0026801C  81 83 00 00 */	lwz r12, 0(r3)
/* 8026B0E0 00268020  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026B0E4 00268024  7D 89 03 A6 */	mtctr r12
/* 8026B0E8 00268028  4E 80 04 21 */	bctrl 
/* 8026B0EC 0026802C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026B0F0 00268030  7C 08 03 A6 */	mtlr r0
/* 8026B0F4 00268034  38 21 00 20 */	addi r1, r1, 0x20
/* 8026B0F8 00268038  4E 80 00 20 */	blr 
.endfn breakTargetBridge__Q34Game4Tobi3ObjFv

.fn createAppearEffect__Q34Game4Tobi3ObjFv, global
/* 8026B0FC 0026803C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026B100 00268040  7C 08 02 A6 */	mflr r0
/* 8026B104 00268044  3C 80 80 48 */	lis r4, lbl_80485E80@ha
/* 8026B108 00268048  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026B10C 0026804C  38 84 5E 80 */	addi r4, r4, lbl_80485E80@l
/* 8026B110 00268050  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8026B114 00268054  48 1D 3E D1 */	bl getJoint__Q28SysShape5ModelFPc
/* 8026B118 00268058  48 1B E7 89 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8026B11C 0026805C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026B120 00268060  38 C0 00 00 */	li r6, 0
/* 8026B124 00268064  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8026B128 00268068  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 8026B12C 0026806C  90 01 00 08 */	stw r0, 8(r1)
/* 8026B130 00268070  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8026B134 00268074  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8026B138 00268078  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoAp@ha
/* 8026B13C 0026807C  90 01 00 08 */	stw r0, 8(r1)
/* 8026B140 00268080  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 8026B144 00268084  38 E0 01 CE */	li r7, 0x1ce
/* 8026B148 00268088  38 A0 01 CF */	li r5, 0x1cf
/* 8026B14C 0026808C  90 01 00 08 */	stw r0, 8(r1)
/* 8026B150 00268090  38 04 29 34 */	addi r0, r4, __vt__Q23efx9TUjinkoAp@l
/* 8026B154 00268094  38 80 00 00 */	li r4, 0
/* 8026B158 00268098  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026B15C 0026809C  38 61 00 08 */	addi r3, r1, 8
/* 8026B160 002680A0  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 8026B164 002680A4  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8026B168 002680A8  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8026B16C 002680AC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8026B170 002680B0  90 01 00 08 */	stw r0, 8(r1)
/* 8026B174 002680B4  48 14 42 25 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8026B178 002680B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026B17C 002680BC  7C 08 03 A6 */	mtlr r0
/* 8026B180 002680C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8026B184 002680C4  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game4Tobi3ObjFv

.fn createDisAppearEffect__Q34Game4Tobi3ObjFv, global
/* 8026B188 002680C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026B18C 002680CC  7C 08 02 A6 */	mflr r0
/* 8026B190 002680D0  3C 80 80 48 */	lis r4, lbl_80485E80@ha
/* 8026B194 002680D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026B198 002680D8  38 84 5E 80 */	addi r4, r4, lbl_80485E80@l
/* 8026B19C 002680DC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8026B1A0 002680E0  48 1D 3E 45 */	bl getJoint__Q28SysShape5ModelFPc
/* 8026B1A4 002680E4  48 1B E6 FD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8026B1A8 002680E8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026B1AC 002680EC  38 C0 00 00 */	li r6, 0
/* 8026B1B0 002680F0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8026B1B4 002680F4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 8026B1B8 002680F8  90 01 00 08 */	stw r0, 8(r1)
/* 8026B1BC 002680FC  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8026B1C0 00268100  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8026B1C4 00268104  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoHd@ha
/* 8026B1C8 00268108  90 01 00 08 */	stw r0, 8(r1)
/* 8026B1CC 0026810C  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 8026B1D0 00268110  38 E0 01 D1 */	li r7, 0x1d1
/* 8026B1D4 00268114  38 A0 01 D2 */	li r5, 0x1d2
/* 8026B1D8 00268118  90 01 00 08 */	stw r0, 8(r1)
/* 8026B1DC 0026811C  38 04 29 20 */	addi r0, r4, __vt__Q23efx9TUjinkoHd@l
/* 8026B1E0 00268120  38 80 00 00 */	li r4, 0
/* 8026B1E4 00268124  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026B1E8 00268128  38 61 00 08 */	addi r3, r1, 8
/* 8026B1EC 0026812C  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 8026B1F0 00268130  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8026B1F4 00268134  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8026B1F8 00268138  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8026B1FC 0026813C  90 01 00 08 */	stw r0, 8(r1)
/* 8026B200 00268140  48 14 41 99 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8026B204 00268144  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026B208 00268148  7C 08 03 A6 */	mtlr r0
/* 8026B20C 0026814C  38 21 00 20 */	addi r1, r1, 0x20
/* 8026B210 00268150  4E 80 00 20 */	blr 
.endfn createDisAppearEffect__Q34Game4Tobi3ObjFv

.fn createBridgeEffect__Q34Game4Tobi3ObjFv, global
/* 8026B214 00268154  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026B218 00268158  7C 08 02 A6 */	mflr r0
/* 8026B21C 0026815C  38 82 CC 28 */	addi r4, r2, lbl_8051AF88@sda21
/* 8026B220 00268160  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026B224 00268164  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8026B228 00268168  48 1D 3D BD */	bl getJoint__Q28SysShape5ModelFPc
/* 8026B22C 0026816C  48 1B E6 75 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8026B230 00268170  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026B234 00268174  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8026B238 00268178  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8026B23C 0026817C  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 8026B240 00268180  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8026B244 00268184  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8026B248 00268188  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8026B24C 0026818C  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8026B250 00268190  90 81 00 08 */	stw r4, 8(r1)
/* 8026B254 00268194  3C 60 80 4C */	lis r3, __vt__Q23efx10TUjinkoEat@ha
/* 8026B258 00268198  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 8026B25C 0026819C  38 C0 01 D0 */	li r6, 0x1d0
/* 8026B260 002681A0  38 A0 00 00 */	li r5, 0
/* 8026B264 002681A4  90 01 00 08 */	stw r0, 8(r1)
/* 8026B268 002681A8  38 03 29 0C */	addi r0, r3, __vt__Q23efx10TUjinkoEat@l
/* 8026B26C 002681AC  38 61 00 08 */	addi r3, r1, 8
/* 8026B270 002681B0  90 81 00 14 */	stw r4, 0x14(r1)
/* 8026B274 002681B4  38 81 00 14 */	addi r4, r1, 0x14
/* 8026B278 002681B8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8026B27C 002681BC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8026B280 002681C0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8026B284 002681C4  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 8026B288 002681C8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8026B28C 002681CC  90 01 00 08 */	stw r0, 8(r1)
/* 8026B290 002681D0  48 14 3C F5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8026B294 002681D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026B298 002681D8  7C 08 03 A6 */	mtlr r0
/* 8026B29C 002681DC  38 21 00 30 */	addi r1, r1, 0x30
/* 8026B2A0 002681E0  4E 80 00 20 */	blr 
.endfn createBridgeEffect__Q34Game4Tobi3ObjFv

.fn createEatEffect__Q34Game4Tobi3ObjFv, global
/* 8026B2A4 002681E4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026B2A8 002681E8  7C 08 02 A6 */	mflr r0
/* 8026B2AC 002681EC  38 82 CC 28 */	addi r4, r2, lbl_8051AF88@sda21
/* 8026B2B0 002681F0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026B2B4 002681F4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8026B2B8 002681F8  48 1D 3D 2D */	bl getJoint__Q28SysShape5ModelFPc
/* 8026B2BC 002681FC  48 1B E5 E5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8026B2C0 00268200  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026B2C4 00268204  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8026B2C8 00268208  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8026B2CC 0026820C  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 8026B2D0 00268210  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8026B2D4 00268214  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8026B2D8 00268218  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8026B2DC 0026821C  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8026B2E0 00268220  90 81 00 08 */	stw r4, 8(r1)
/* 8026B2E4 00268224  3C 60 80 4C */	lis r3, __vt__Q23efx12TUjinkoPkate@ha
/* 8026B2E8 00268228  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 8026B2EC 0026822C  38 C0 02 5E */	li r6, 0x25e
/* 8026B2F0 00268230  38 A0 00 00 */	li r5, 0
/* 8026B2F4 00268234  90 01 00 08 */	stw r0, 8(r1)
/* 8026B2F8 00268238  38 03 28 F8 */	addi r0, r3, __vt__Q23efx12TUjinkoPkate@l
/* 8026B2FC 0026823C  38 61 00 08 */	addi r3, r1, 8
/* 8026B300 00268240  90 81 00 14 */	stw r4, 0x14(r1)
/* 8026B304 00268244  38 81 00 14 */	addi r4, r1, 0x14
/* 8026B308 00268248  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8026B30C 0026824C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8026B310 00268250  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8026B314 00268254  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 8026B318 00268258  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8026B31C 0026825C  90 01 00 08 */	stw r0, 8(r1)
/* 8026B320 00268260  48 14 3C 65 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8026B324 00268264  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026B328 00268268  7C 08 03 A6 */	mtlr r0
/* 8026B32C 0026826C  38 21 00 30 */	addi r1, r1, 0x30
/* 8026B330 00268270  4E 80 00 20 */	blr 
.endfn createEatEffect__Q34Game4Tobi3ObjFv

.fn isUnderground__Q34Game4Tobi3ObjFv, weak
/* 8026B334 00268274  88 63 02 C1 */	lbz r3, 0x2c1(r3)
/* 8026B338 00268278  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game4Tobi3ObjFv

.fn getMouthSlots__Q34Game4Tobi3ObjFv, weak
/* 8026B33C 0026827C  38 63 02 C8 */	addi r3, r3, 0x2c8
/* 8026B340 00268280  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game4Tobi3ObjFv

.fn getDownSmokeScale__Q34Game4Tobi3ObjFv, weak
/* 8026B344 00268284  C0 22 CC 78 */	lfs f1, lbl_8051AFD8@sda21(r2)
/* 8026B348 00268288  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game4Tobi3ObjFv

.fn getEnemyTypeID__Q34Game4Tobi3ObjFv, weak
/* 8026B34C 0026828C  38 60 00 0E */	li r3, 0xe
/* 8026B350 00268290  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game4Tobi3ObjFv
