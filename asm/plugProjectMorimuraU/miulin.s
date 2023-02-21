.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80491A18, local
	.asciz "jnt_koshi"
.endobj lbl_80491A18
.balign 4
.obj lbl_80491A24, local
	.asciz "miulin.cpp"
.endobj lbl_80491A24
.balign 4
.obj lbl_80491A30, local
	.asciz "P2Assert"
.endobj lbl_80491A30
.balign 4
.obj lbl_80491A3C, local
	.asciz "jnt_footR"
.endobj lbl_80491A3C
.balign 4
.obj lbl_80491A48, local
	.asciz "jnt_footL"
.endobj lbl_80491A48

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx10TMiuAttack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TMiuAttack
.obj __vt__Q34Game6Miulin3Obj, global
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
	.4byte setInitialSetting__Q34Game6Miulin3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game6Miulin3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game6Miulin3ObjFR8Graphics
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
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
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
	.4byte startCarcassMotion__Q34Game6Miulin3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q34Game6Miulin3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game6Miulin3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
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
.endobj __vt__Q34Game6Miulin3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E810, local
	.float 80.0
.endobj lbl_8051E810
.obj lbl_8051E814, local
	.float 2.0
.endobj lbl_8051E814
.obj lbl_8051E818, local
	.float 0.0
.endobj lbl_8051E818
.obj lbl_8051E81C, local
	.float 1.0
.endobj lbl_8051E81C
.obj lbl_8051E820, local
	.float 20.0
.endobj lbl_8051E820
.obj lbl_8051E824, local
	.float 25.0
.endobj lbl_8051E824
.obj lbl_8051E828, local
	.float 5.0
.endobj lbl_8051E828
.obj lbl_8051E82C, local # pi
	.float 3.1415927
.endobj lbl_8051E82C
.obj lbl_8051E830, local
	.float 0.0055555557
.endobj lbl_8051E830
.obj lbl_8051E834, local
	.float 10.0
.endobj lbl_8051E834
.obj lbl_8051E838, local
	.float 0.7
.endobj lbl_8051E838
.obj lbl_8051E83C, local
	.float 180.0
.endobj lbl_8051E83C
.obj lbl_8051E840, local
	.float 900.0
.endobj lbl_8051E840
.obj lbl_8051E844, local
	.float 32768.0
.endobj lbl_8051E844
.obj lbl_8051E848, local
	.float -325.9493
.endobj lbl_8051E848
.obj lbl_8051E84C, local
	.float 325.9493
.endobj lbl_8051E84C
.obj lbl_8051E850, local # tau
	.float 6.2831855
.endobj lbl_8051E850
.balign 8
.obj lbl_8051E858, local
	.8byte 0x4330000080000000
.endobj lbl_8051E858
.obj lbl_8051E860, local
	.float 0.1
.endobj lbl_8051E860
.obj lbl_8051E864, local
	.float 0.9
.endobj lbl_8051E864
.obj lbl_8051E868, local
	.float 0.8
.endobj lbl_8051E868
.obj lbl_8051E86C, local
	.float 0.85
.endobj lbl_8051E86C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn setParameters__Q34Game6Miulin3ObjFv, global
/* 80364454 00361394  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80364458 00361398  7C 08 02 A6 */	mflr r0
/* 8036445C 0036139C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364460 003613A0  4B D9 E7 79 */	bl setParameters__Q24Game9EnemyBaseFv
/* 80364464 003613A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80364468 003613A8  7C 08 03 A6 */	mtlr r0
/* 8036446C 003613AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80364470 003613B0  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game6Miulin3ObjFv

.fn "birth__Q34Game6Miulin3ObjFR10Vector3<f>f", global
/* 80364474 003613B4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80364478 003613B8  7C 08 02 A6 */	mflr r0
/* 8036447C 003613BC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80364480 003613C0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80364484 003613C4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80364488 003613C8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8036448C 003613CC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80364490 003613D0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80364494 003613D4  FF E0 08 90 */	fmr f31, f1
/* 80364498 003613D8  7C 7D 1B 78 */	mr r29, r3
/* 8036449C 003613DC  7C 9E 23 78 */	mr r30, r4
/* 803644A0 003613E0  4B D9 E5 61 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 803644A4 003613E4  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 803644A8 003613E8  38 80 00 4D */	li r4, 0x4d
/* 803644AC 003613EC  4B DA 97 F9 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 803644B0 003613F0  7C 7F 1B 79 */	or. r31, r3, r3
/* 803644B4 003613F4  41 82 00 4C */	beq .L_80364500
/* 803644B8 003613F8  38 61 00 08 */	addi r3, r1, 8
/* 803644BC 003613FC  4B DC A7 69 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 803644C0 00361400  C0 3E 00 00 */	lfs f1, 0(r30)
/* 803644C4 00361404  7F E3 FB 78 */	mr r3, r31
/* 803644C8 00361408  C0 02 04 B0 */	lfs f0, lbl_8051E810@sda21(r2)
/* 803644CC 0036140C  7F A5 EB 78 */	mr r5, r29
/* 803644D0 00361410  D0 21 00 08 */	stfs f1, 8(r1)
/* 803644D4 00361414  38 81 00 08 */	addi r4, r1, 8
/* 803644D8 00361418  38 C0 00 05 */	li r6, 5
/* 803644DC 0036141C  38 E0 00 01 */	li r7, 1
/* 803644E0 00361420  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803644E4 00361424  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803644E8 00361428  EC 01 00 2A */	fadds f0, f1, f0
/* 803644EC 0036142C  C0 3E 00 08 */	lfs f1, 8(r30)
/* 803644F0 00361430  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803644F4 00361434  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803644F8 00361438  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 803644FC 0036143C  48 02 4D 75 */	bl createGroupByEnemy__Q34Game11ShijimiChou3MgrFRQ24Game13EnemyBirthArgPQ24Game9EnemyBaseib
.L_80364500:
/* 80364500 00361440  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80364504 00361444  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80364508 00361448  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8036450C 0036144C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80364510 00361450  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80364514 00361454  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80364518 00361458  7C 08 03 A6 */	mtlr r0
/* 8036451C 0036145C  38 21 00 60 */	addi r1, r1, 0x60
/* 80364520 00361460  4E 80 00 20 */	blr 
.endfn "birth__Q34Game6Miulin3ObjFR10Vector3<f>f"

.fn onInit__Q34Game6Miulin3ObjFPQ24Game15CreatureInitArg, global
/* 80364524 00361464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80364528 00361468  7C 08 02 A6 */	mflr r0
/* 8036452C 0036146C  3C A0 80 49 */	lis r5, lbl_80491A18@ha
/* 80364530 00361470  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364534 00361474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80364538 00361478  3B E5 1A 18 */	addi r31, r5, lbl_80491A18@l
/* 8036453C 0036147C  93 C1 00 08 */	stw r30, 8(r1)
/* 80364540 00361480  7C 7E 1B 78 */	mr r30, r3
/* 80364544 00361484  4B D9 D5 15 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80364548 00361488  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8036454C 0036148C  38 9F 00 00 */	addi r4, r31, 0
/* 80364550 00361490  48 0D AA 95 */	bl getJoint__Q28SysShape5ModelFPc
/* 80364554 00361494  90 7E 02 CC */	stw r3, 0x2cc(r30)
/* 80364558 00361498  80 1E 02 CC */	lwz r0, 0x2cc(r30)
/* 8036455C 0036149C  28 00 00 00 */	cmplwi r0, 0
/* 80364560 003614A0  40 82 00 18 */	bne .L_80364578
/* 80364564 003614A4  38 7F 00 0C */	addi r3, r31, 0xc
/* 80364568 003614A8  38 BF 00 18 */	addi r5, r31, 0x18
/* 8036456C 003614AC  38 80 00 4A */	li r4, 0x4a
/* 80364570 003614B0  4C C6 31 82 */	crclr 6
/* 80364574 003614B4  4B CC 60 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80364578:
/* 80364578 003614B8  38 00 00 00 */	li r0, 0
/* 8036457C 003614BC  7F C4 F3 78 */	mr r4, r30
/* 80364580 003614C0  90 1E 02 D0 */	stw r0, 0x2d0(r30)
/* 80364584 003614C4  38 A0 00 00 */	li r5, 0
/* 80364588 003614C8  38 C0 00 00 */	li r6, 0
/* 8036458C 003614CC  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 80364590 003614D0  D0 1E 02 D4 */	stfs f0, 0x2d4(r30)
/* 80364594 003614D4  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 80364598 003614D8  D0 1E 02 D8 */	stfs f0, 0x2d8(r30)
/* 8036459C 003614DC  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 803645A0 003614E0  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
/* 803645A4 003614E4  90 1E 02 E0 */	stw r0, 0x2e0(r30)
/* 803645A8 003614E8  98 1E 02 E4 */	stb r0, 0x2e4(r30)
/* 803645AC 003614EC  80 7E 02 F4 */	lwz r3, 0x2f4(r30)
/* 803645B0 003614F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803645B4 003614F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803645B8 003614F8  7D 89 03 A6 */	mtctr r12
/* 803645BC 003614FC  4E 80 04 21 */	bctrl 
/* 803645C0 00361500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803645C4 00361504  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803645C8 00361508  83 C1 00 08 */	lwz r30, 8(r1)
/* 803645CC 0036150C  7C 08 03 A6 */	mtlr r0
/* 803645D0 00361510  38 21 00 10 */	addi r1, r1, 0x10
/* 803645D4 00361514  4E 80 00 20 */	blr 
.endfn onInit__Q34Game6Miulin3ObjFPQ24Game15CreatureInitArg

.fn __ct__Q34Game6Miulin3ObjFv, global
/* 803645D8 00361518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803645DC 0036151C  7C 08 02 A6 */	mflr r0
/* 803645E0 00361520  90 01 00 14 */	stw r0, 0x14(r1)
/* 803645E4 00361524  7C 80 07 35 */	extsh. r0, r4
/* 803645E8 00361528  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803645EC 0036152C  7C 7F 1B 78 */	mr r31, r3
/* 803645F0 00361530  93 C1 00 08 */	stw r30, 8(r1)
/* 803645F4 00361534  41 82 00 24 */	beq .L_80364618
/* 803645F8 00361538  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 803645FC 0036153C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80364600 00361540  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80364604 00361544  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80364608 00361548  38 00 00 00 */	li r0, 0
/* 8036460C 0036154C  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 80364610 00361550  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 80364614 00361554  90 1F 03 00 */	stw r0, 0x300(r31)
.L_80364618:
/* 80364618 00361558  7F E3 FB 78 */	mr r3, r31
/* 8036461C 0036155C  38 80 00 00 */	li r4, 0
/* 80364620 00361560  4B D9 CD 81 */	bl __ct__Q24Game9EnemyBaseFv
/* 80364624 00361564  3C 60 80 4E */	lis r3, __vt__Q34Game6Miulin3Obj@ha
/* 80364628 00361568  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 8036462C 0036156C  38 A3 25 DC */	addi r5, r3, __vt__Q34Game6Miulin3Obj@l
/* 80364630 00361570  38 7F 02 EC */	addi r3, r31, 0x2ec
/* 80364634 00361574  90 BF 00 00 */	stw r5, 0(r31)
/* 80364638 00361578  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8036463C 0036157C  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 80364640 00361580  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80364644 00361584  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80364648 00361588  90 A4 00 00 */	stw r5, 0(r4)
/* 8036464C 0036158C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80364650 00361590  7C 04 00 50 */	subf r0, r4, r0
/* 80364654 00361594  90 04 00 0C */	stw r0, 0xc(r4)
/* 80364658 00361598  4B DC 5C FD */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 8036465C 0036159C  38 00 00 00 */	li r0, 0
/* 80364660 003615A0  38 60 00 2C */	li r3, 0x2c
/* 80364664 003615A4  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 80364668 003615A8  4B CB F8 3D */	bl __nw__FUl
/* 8036466C 003615AC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80364670 003615B0  41 82 00 44 */	beq .L_803646B4
/* 80364674 003615B4  4B DC 33 01 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80364678 003615B8  3C 60 80 4E */	lis r3, __vt__Q34Game6Miulin14ProperAnimator@ha
/* 8036467C 003615BC  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80364680 003615C0  38 03 24 B0 */	addi r0, r3, __vt__Q34Game6Miulin14ProperAnimator@l
/* 80364684 003615C4  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80364688 003615C8  90 1E 00 00 */	stw r0, 0(r30)
/* 8036468C 003615CC  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80364690 003615D0  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80364694 003615D4  38 00 00 00 */	li r0, 0
/* 80364698 003615D8  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8036469C 003615DC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803646A0 003615E0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 803646A4 003615E4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803646A8 003615E8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803646AC 003615EC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 803646B0 003615F0  90 1E 00 20 */	stw r0, 0x20(r30)
.L_803646B4:
/* 803646B4 003615F4  93 DF 01 84 */	stw r30, 0x184(r31)
/* 803646B8 003615F8  38 60 00 1C */	li r3, 0x1c
/* 803646BC 003615FC  4B CB F7 E9 */	bl __nw__FUl
/* 803646C0 00361600  7C 64 1B 79 */	or. r4, r3, r3
/* 803646C4 00361604  41 82 00 24 */	beq .L_803646E8
/* 803646C8 00361608  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 803646CC 0036160C  3C 60 80 4E */	lis r3, __vt__Q34Game6Miulin3FSM@ha
/* 803646D0 00361610  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 803646D4 00361614  38 A0 FF FF */	li r5, -1
/* 803646D8 00361618  90 04 00 00 */	stw r0, 0(r4)
/* 803646DC 0036161C  38 03 24 8C */	addi r0, r3, __vt__Q34Game6Miulin3FSM@l
/* 803646E0 00361620  90 A4 00 18 */	stw r5, 0x18(r4)
/* 803646E4 00361624  90 04 00 00 */	stw r0, 0(r4)
.L_803646E8:
/* 803646E8 00361628  81 9F 00 00 */	lwz r12, 0(r31)
/* 803646EC 0036162C  7F E3 FB 78 */	mr r3, r31
/* 803646F0 00361630  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 803646F4 00361634  7D 89 03 A6 */	mtctr r12
/* 803646F8 00361638  4E 80 04 21 */	bctrl 
/* 803646FC 0036163C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80364700 00361640  7F E3 FB 78 */	mr r3, r31
/* 80364704 00361644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80364708 00361648  83 C1 00 08 */	lwz r30, 8(r1)
/* 8036470C 0036164C  7C 08 03 A6 */	mtlr r0
/* 80364710 00361650  38 21 00 10 */	addi r1, r1, 0x10
/* 80364714 00361654  4E 80 00 20 */	blr 
.endfn __ct__Q34Game6Miulin3ObjFv

.fn setFSM__Q34Game6Miulin3ObjFPQ34Game6Miulin3FSM, weak
/* 80364718 00361658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036471C 0036165C  7C 08 02 A6 */	mflr r0
/* 80364720 00361660  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364724 00361664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80364728 00361668  7C 7F 1B 78 */	mr r31, r3
/* 8036472C 0036166C  90 83 02 F4 */	stw r4, 0x2f4(r3)
/* 80364730 00361670  7F E4 FB 78 */	mr r4, r31
/* 80364734 00361674  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 80364738 00361678  81 83 00 00 */	lwz r12, 0(r3)
/* 8036473C 0036167C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364740 00361680  7D 89 03 A6 */	mtctr r12
/* 80364744 00361684  4E 80 04 21 */	bctrl 
/* 80364748 00361688  38 00 00 00 */	li r0, 0
/* 8036474C 0036168C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80364750 00361690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80364754 00361694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80364758 00361698  7C 08 03 A6 */	mtlr r0
/* 8036475C 0036169C  38 21 00 10 */	addi r1, r1, 0x10
/* 80364760 003616A0  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game6Miulin3ObjFPQ34Game6Miulin3FSM

.fn doUpdate__Q34Game6Miulin3ObjFv, global
/* 80364764 003616A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80364768 003616A8  7C 08 02 A6 */	mflr r0
/* 8036476C 003616AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364770 003616B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80364774 003616B4  7C 7F 1B 78 */	mr r31, r3
/* 80364778 003616B8  7F E4 FB 78 */	mr r4, r31
/* 8036477C 003616BC  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 80364780 003616C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80364784 003616C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80364788 003616C8  7D 89 03 A6 */	mtctr r12
/* 8036478C 003616CC  4E 80 04 21 */	bctrl 
/* 80364790 003616D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80364794 003616D4  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 80364798 003616D8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8036479C 003616DC  EC 01 00 2A */	fadds f0, f1, f0
/* 803647A0 003616E0  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 803647A4 003616E4  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 803647A8 003616E8  28 03 00 00 */	cmplwi r3, 0
/* 803647AC 003616EC  41 82 00 24 */	beq .L_803647D0
/* 803647B0 003616F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803647B4 003616F4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803647B8 003616F8  7D 89 03 A6 */	mtctr r12
/* 803647BC 003616FC  4E 80 04 21 */	bctrl 
/* 803647C0 00361700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803647C4 00361704  40 82 00 0C */	bne .L_803647D0
/* 803647C8 00361708  38 00 00 00 */	li r0, 0
/* 803647CC 0036170C  90 1F 02 30 */	stw r0, 0x230(r31)
.L_803647D0:
/* 803647D0 00361710  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803647D4 00361714  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803647D8 00361718  7C 08 03 A6 */	mtlr r0
/* 803647DC 0036171C  38 21 00 10 */	addi r1, r1, 0x10
/* 803647E0 00361720  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game6Miulin3ObjFv

.fn doDirectDraw__Q34Game6Miulin3ObjFR8Graphics, global
/* 803647E4 00361724  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game6Miulin3ObjFR8Graphics

.fn doDebugDraw__Q34Game6Miulin3ObjFR8Graphics, global
/* 803647E8 00361728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803647EC 0036172C  7C 08 02 A6 */	mflr r0
/* 803647F0 00361730  90 01 00 14 */	stw r0, 0x14(r1)
/* 803647F4 00361734  4B DA 16 79 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 803647F8 00361738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803647FC 0036173C  7C 08 03 A6 */	mtlr r0
/* 80364800 00361740  38 21 00 10 */	addi r1, r1, 0x10
/* 80364804 00361744  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game6Miulin3ObjFR8Graphics

.fn getShadowParam__Q34Game6Miulin3ObjFRQ24Game11ShadowParam, global
/* 80364808 00361748  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036480C 0036174C  7C 08 02 A6 */	mflr r0
/* 80364810 00361750  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364814 00361754  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80364818 00361758  7C 9F 23 78 */	mr r31, r4
/* 8036481C 0036175C  93 C1 00 08 */	stw r30, 8(r1)
/* 80364820 00361760  7C 7E 1B 78 */	mr r30, r3
/* 80364824 00361764  80 63 02 CC */	lwz r3, 0x2cc(r3)
/* 80364828 00361768  48 0C 50 79 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8036482C 0036176C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80364830 00361770  C0 A2 04 B4 */	lfs f5, lbl_8051E814@sda21(r2)
/* 80364834 00361774  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80364838 00361778  C0 62 04 B8 */	lfs f3, lbl_8051E818@sda21(r2)
/* 8036483C 0036177C  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80364840 00361780  C0 42 04 BC */	lfs f2, lbl_8051E81C@sda21(r2)
/* 80364844 00361784  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80364848 00361788  C0 22 04 C0 */	lfs f1, lbl_8051E820@sda21(r2)
/* 8036484C 0036178C  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 80364850 00361790  C0 02 04 C4 */	lfs f0, lbl_8051E824@sda21(r2)
/* 80364854 00361794  D0 9F 00 08 */	stfs f4, 8(r31)
/* 80364858 00361798  C0 9E 01 90 */	lfs f4, 0x190(r30)
/* 8036485C 0036179C  EC 85 20 2A */	fadds f4, f5, f4
/* 80364860 003617A0  D0 9F 00 04 */	stfs f4, 4(r31)
/* 80364864 003617A4  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 80364868 003617A8  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 8036486C 003617AC  D0 7F 00 14 */	stfs f3, 0x14(r31)
/* 80364870 003617B0  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80364874 003617B4  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80364878 003617B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036487C 003617BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80364880 003617C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80364884 003617C4  7C 08 03 A6 */	mtlr r0
/* 80364888 003617C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8036488C 003617CC  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game6Miulin3ObjFRQ24Game11ShadowParam

.fn doSimulation__Q34Game6Miulin3ObjFf, global
/* 80364890 003617D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80364894 003617D4  7C 08 02 A6 */	mflr r0
/* 80364898 003617D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036489C 003617DC  80 83 02 D0 */	lwz r4, 0x2d0(r3)
/* 803648A0 003617E0  38 04 FF FF */	addi r0, r4, -1
/* 803648A4 003617E4  90 03 02 D0 */	stw r0, 0x2d0(r3)
/* 803648A8 003617E8  80 03 02 D0 */	lwz r0, 0x2d0(r3)
/* 803648AC 003617EC  2C 00 00 00 */	cmpwi r0, 0
/* 803648B0 003617F0  40 80 00 0C */	bge .L_803648BC
/* 803648B4 003617F4  38 00 00 00 */	li r0, 0
/* 803648B8 003617F8  90 03 02 D0 */	stw r0, 0x2d0(r3)
.L_803648BC:
/* 803648BC 003617FC  4B DA 01 9D */	bl doSimulation__Q24Game9EnemyBaseFf
/* 803648C0 00361800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803648C4 00361804  7C 08 03 A6 */	mtlr r0
/* 803648C8 00361808  38 21 00 10 */	addi r1, r1, 0x10
/* 803648CC 0036180C  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game6Miulin3ObjFf

.fn wallCallback__Q34Game6Miulin3ObjFRCQ24Game8MoveInfo, global
/* 803648D0 00361810  38 80 00 78 */	li r4, 0x78
/* 803648D4 00361814  38 00 00 00 */	li r0, 0
/* 803648D8 00361818  90 83 02 D0 */	stw r4, 0x2d0(r3)
/* 803648DC 0036181C  90 03 02 30 */	stw r0, 0x230(r3)
/* 803648E0 00361820  C0 03 01 98 */	lfs f0, 0x198(r3)
/* 803648E4 00361824  D0 03 02 BC */	stfs f0, 0x2bc(r3)
/* 803648E8 00361828  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 803648EC 0036182C  D0 03 02 C0 */	stfs f0, 0x2c0(r3)
/* 803648F0 00361830  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 803648F4 00361834  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 803648F8 00361838  4E 80 00 20 */	blr 
.endfn wallCallback__Q34Game6Miulin3ObjFRCQ24Game8MoveInfo

.fn startCarcassMotion__Q34Game6Miulin3ObjFv, global
/* 803648FC 0036183C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80364900 00361840  7C 08 02 A6 */	mflr r0
/* 80364904 00361844  38 80 00 06 */	li r4, 6
/* 80364908 00361848  38 A0 00 00 */	li r5, 0
/* 8036490C 0036184C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364910 00361850  4B DA 06 F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80364914 00361854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80364918 00361858  7C 08 03 A6 */	mtlr r0
/* 8036491C 0036185C  38 21 00 10 */	addi r1, r1, 0x10
/* 80364920 00361860  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game6Miulin3ObjFv

.fn initWalkSmokeEffect__Q34Game6Miulin3ObjFv, global
/* 80364924 00361864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80364928 00361868  7C 08 02 A6 */	mflr r0
/* 8036492C 0036186C  38 80 00 02 */	li r4, 2
/* 80364930 00361870  90 01 00 14 */	stw r0, 0x14(r1)
/* 80364934 00361874  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80364938 00361878  7C 7F 1B 78 */	mr r31, r3
/* 8036493C 0036187C  38 7F 02 EC */	addi r3, r31, 0x2ec
/* 80364940 00361880  4B DC 5A 25 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 80364944 00361884  3C 60 80 49 */	lis r3, lbl_80491A3C@ha
/* 80364948 00361888  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 8036494C 0036188C  38 C3 1A 3C */	addi r6, r3, lbl_80491A3C@l
/* 80364950 00361890  C0 22 04 C8 */	lfs f1, lbl_8051E828@sda21(r2)
/* 80364954 00361894  38 7F 02 EC */	addi r3, r31, 0x2ec
/* 80364958 00361898  38 80 00 00 */	li r4, 0
/* 8036495C 0036189C  4B DC 5C 85 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80364960 003618A0  3C 60 80 49 */	lis r3, lbl_80491A48@ha
/* 80364964 003618A4  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80364968 003618A8  38 C3 1A 48 */	addi r6, r3, lbl_80491A48@l
/* 8036496C 003618AC  C0 22 04 C8 */	lfs f1, lbl_8051E828@sda21(r2)
/* 80364970 003618B0  38 7F 02 EC */	addi r3, r31, 0x2ec
/* 80364974 003618B4  38 80 00 01 */	li r4, 1
/* 80364978 003618B8  4B DC 5C 69 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 8036497C 003618BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80364980 003618C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80364984 003618C4  7C 08 03 A6 */	mtlr r0
/* 80364988 003618C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8036498C 003618CC  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game6Miulin3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game6Miulin3ObjFv, global
/* 80364990 003618D0  38 63 02 EC */	addi r3, r3, 0x2ec
/* 80364994 003618D4  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game6Miulin3ObjFv

.fn isAttackStart__Q34Game6Miulin3ObjFv, global
/* 80364998 003618D8  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 8036499C 003618DC  7C 08 02 A6 */	mflr r0
/* 803649A0 003618E0  90 01 01 24 */	stw r0, 0x124(r1)
/* 803649A4 003618E4  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 803649A8 003618E8  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 803649AC 003618EC  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 803649B0 003618F0  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 803649B4 003618F4  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 803649B8 003618F8  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 803649BC 003618FC  DB 81 00 E0 */	stfd f28, 0xe0(r1)
/* 803649C0 00361900  F3 81 00 E8 */	psq_st f28, 232(r1), 0, qr0
/* 803649C4 00361904  DB 61 00 D0 */	stfd f27, 0xd0(r1)
/* 803649C8 00361908  F3 61 00 D8 */	psq_st f27, 216(r1), 0, qr0
/* 803649CC 0036190C  DB 41 00 C0 */	stfd f26, 0xc0(r1)
/* 803649D0 00361910  F3 41 00 C8 */	psq_st f26, 200(r1), 0, qr0
/* 803649D4 00361914  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 803649D8 00361918  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 803649DC 0036191C  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 803649E0 00361920  7C 7F 1B 78 */	mr r31, r3
/* 803649E4 00361924  C0 22 04 D0 */	lfs f1, lbl_8051E830@sda21(r2)
/* 803649E8 00361928  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 803649EC 0036192C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 803649F0 00361930  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 803649F4 00361934  C0 43 05 B4 */	lfs f2, 0x5b4(r3)
/* 803649F8 00361938  28 04 00 00 */	cmplwi r4, 0
/* 803649FC 0036193C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80364A00 00361940  C0 63 09 0C */	lfs f3, 0x90c(r3)
/* 80364A04 00361944  C0 22 04 CC */	lfs f1, lbl_8051E82C@sda21(r2)
/* 80364A08 00361948  EF C2 00 B2 */	fmuls f30, f2, f2
/* 80364A0C 0036194C  EF A3 00 F2 */	fmuls f29, f3, f3
/* 80364A10 00361950  EF 81 00 32 */	fmuls f28, f1, f0
/* 80364A14 00361954  41 82 01 28 */	beq .L_80364B3C
/* 80364A18 00361958  81 84 00 00 */	lwz r12, 0(r4)
/* 80364A1C 0036195C  38 61 00 50 */	addi r3, r1, 0x50
/* 80364A20 00361960  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364A24 00361964  7D 89 03 A6 */	mtctr r12
/* 80364A28 00361968  4E 80 04 21 */	bctrl 
/* 80364A2C 0036196C  7F E4 FB 78 */	mr r4, r31
/* 80364A30 00361970  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80364A34 00361974  81 9F 00 00 */	lwz r12, 0(r31)
/* 80364A38 00361978  38 61 00 5C */	addi r3, r1, 0x5c
/* 80364A3C 0036197C  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 80364A40 00361980  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80364A44 00361984  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364A48 00361988  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80364A4C 0036198C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80364A50 00361990  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80364A54 00361994  7D 89 03 A6 */	mtctr r12
/* 80364A58 00361998  4E 80 04 21 */	bctrl 
/* 80364A5C 0036199C  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 80364A60 003619A0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80364A64 003619A4  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 80364A68 003619A8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80364A6C 003619AC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80364A70 003619B0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80364A74 003619B4  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 80364A78 003619B8  EC 21 28 28 */	fsubs f1, f1, f5
/* 80364A7C 003619BC  EC 40 18 28 */	fsubs f2, f0, f3
/* 80364A80 003619C0  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 80364A84 003619C4  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 80364A88 003619C8  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80364A8C 003619CC  4B CD 06 7D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80364A90 003619D0  48 0A D1 41 */	bl roundAng__Ff
/* 80364A94 003619D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80364A98 003619D8  FF 40 08 90 */	fmr f26, f1
/* 80364A9C 003619DC  7F E3 FB 78 */	mr r3, r31
/* 80364AA0 003619E0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80364AA4 003619E4  7D 89 03 A6 */	mtctr r12
/* 80364AA8 003619E8  4E 80 04 21 */	bctrl 
/* 80364AAC 003619EC  FC 40 08 90 */	fmr f2, f1
/* 80364AB0 003619F0  FC 20 D0 90 */	fmr f1, f26
/* 80364AB4 003619F4  48 0A D1 49 */	bl angDist__Fff
/* 80364AB8 003619F8  FC 00 0A 10 */	fabs f0, f1
/* 80364ABC 003619FC  FC 00 00 18 */	frsp f0, f0
/* 80364AC0 00361A00  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80364AC4 00361A04  4C 40 13 82 */	cror 2, 0, 2
/* 80364AC8 00361A08  40 82 00 74 */	bne .L_80364B3C
/* 80364ACC 00361A0C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80364AD0 00361A10  38 61 00 80 */	addi r3, r1, 0x80
/* 80364AD4 00361A14  C3 5F 01 94 */	lfs f26, 0x194(r31)
/* 80364AD8 00361A18  81 84 00 00 */	lwz r12, 0(r4)
/* 80364ADC 00361A1C  C3 7F 01 8C */	lfs f27, 0x18c(r31)
/* 80364AE0 00361A20  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364AE4 00361A24  7D 89 03 A6 */	mtctr r12
/* 80364AE8 00361A28  4E 80 04 21 */	bctrl 
/* 80364AEC 00361A2C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80364AF0 00361A30  38 61 00 8C */	addi r3, r1, 0x8c
/* 80364AF4 00361A34  C3 E1 00 88 */	lfs f31, 0x88(r1)
/* 80364AF8 00361A38  81 84 00 00 */	lwz r12, 0(r4)
/* 80364AFC 00361A3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364B00 00361A40  7D 89 03 A6 */	mtctr r12
/* 80364B04 00361A44  4E 80 04 21 */	bctrl 
/* 80364B08 00361A48  EC 3F D0 28 */	fsubs f1, f31, f26
/* 80364B0C 00361A4C  C0 41 00 8C */	lfs f2, 0x8c(r1)
/* 80364B10 00361A50  EC 1D F0 2A */	fadds f0, f29, f30
/* 80364B14 00361A54  EC 42 D8 28 */	fsubs f2, f2, f27
/* 80364B18 00361A58  EC 21 00 72 */	fmuls f1, f1, f1
/* 80364B1C 00361A5C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80364B20 00361A60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80364B24 00361A64  40 80 00 18 */	bge .L_80364B3C
/* 80364B28 00361A68  EC 1D F0 28 */	fsubs f0, f29, f30
/* 80364B2C 00361A6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80364B30 00361A70  40 81 00 0C */	ble .L_80364B3C
/* 80364B34 00361A74  38 60 00 01 */	li r3, 1
/* 80364B38 00361A78  48 00 03 48 */	b .L_80364E80
.L_80364B3C:
/* 80364B3C 00361A7C  38 00 00 00 */	li r0, 0
/* 80364B40 00361A80  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80364B44 00361A84  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80364B48 00361A88  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80364B4C 00361A8C  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80364B50 00361A90  28 00 00 00 */	cmplwi r0, 0
/* 80364B54 00361A94  90 81 00 98 */	stw r4, 0x98(r1)
/* 80364B58 00361A98  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80364B5C 00361A9C  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 80364B60 00361AA0  40 82 00 1C */	bne .L_80364B7C
/* 80364B64 00361AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80364B68 00361AA8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80364B6C 00361AAC  7D 89 03 A6 */	mtctr r12
/* 80364B70 00361AB0  4E 80 04 21 */	bctrl 
/* 80364B74 00361AB4  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80364B78 00361AB8  48 00 00 8C */	b .L_80364C04
.L_80364B7C:
/* 80364B7C 00361ABC  81 83 00 00 */	lwz r12, 0(r3)
/* 80364B80 00361AC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80364B84 00361AC4  7D 89 03 A6 */	mtctr r12
/* 80364B88 00361AC8  4E 80 04 21 */	bctrl 
/* 80364B8C 00361ACC  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80364B90 00361AD0  48 00 00 58 */	b .L_80364BE8
.L_80364B94:
/* 80364B94 00361AD4  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364B98 00361AD8  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364B9C 00361ADC  81 83 00 00 */	lwz r12, 0(r3)
/* 80364BA0 00361AE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80364BA4 00361AE4  7D 89 03 A6 */	mtctr r12
/* 80364BA8 00361AE8  4E 80 04 21 */	bctrl 
/* 80364BAC 00361AEC  7C 64 1B 78 */	mr r4, r3
/* 80364BB0 00361AF0  80 61 00 A4 */	lwz r3, 0xa4(r1)
/* 80364BB4 00361AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80364BB8 00361AF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364BBC 00361AFC  7D 89 03 A6 */	mtctr r12
/* 80364BC0 00361B00  4E 80 04 21 */	bctrl 
/* 80364BC4 00361B04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364BC8 00361B08  40 82 00 3C */	bne .L_80364C04
/* 80364BCC 00361B0C  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364BD0 00361B10  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364BD4 00361B14  81 83 00 00 */	lwz r12, 0(r3)
/* 80364BD8 00361B18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80364BDC 00361B1C  7D 89 03 A6 */	mtctr r12
/* 80364BE0 00361B20  4E 80 04 21 */	bctrl 
/* 80364BE4 00361B24  90 61 00 9C */	stw r3, 0x9c(r1)
.L_80364BE8:
/* 80364BE8 00361B28  81 81 00 98 */	lwz r12, 0x98(r1)
/* 80364BEC 00361B2C  38 61 00 98 */	addi r3, r1, 0x98
/* 80364BF0 00361B30  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80364BF4 00361B34  7D 89 03 A6 */	mtctr r12
/* 80364BF8 00361B38  4E 80 04 21 */	bctrl 
/* 80364BFC 00361B3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364C00 00361B40  41 82 FF 94 */	beq .L_80364B94
.L_80364C04:
/* 80364C04 00361B44  EF FD F0 2A */	fadds f31, f29, f30
/* 80364C08 00361B48  EF DD F0 28 */	fsubs f30, f29, f30
/* 80364C0C 00361B4C  48 00 02 50 */	b .L_80364E5C
.L_80364C10:
/* 80364C10 00361B50  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364C14 00361B54  81 83 00 00 */	lwz r12, 0(r3)
/* 80364C18 00361B58  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80364C1C 00361B5C  7D 89 03 A6 */	mtctr r12
/* 80364C20 00361B60  4E 80 04 21 */	bctrl 
/* 80364C24 00361B64  81 83 00 00 */	lwz r12, 0(r3)
/* 80364C28 00361B68  7C 7D 1B 78 */	mr r29, r3
/* 80364C2C 00361B6C  3B C0 00 00 */	li r30, 0
/* 80364C30 00361B70  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80364C34 00361B74  7D 89 03 A6 */	mtctr r12
/* 80364C38 00361B78  4E 80 04 21 */	bctrl 
/* 80364C3C 00361B7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364C40 00361B80  41 82 00 34 */	beq .L_80364C74
/* 80364C44 00361B84  7F A3 EB 78 */	mr r3, r29
/* 80364C48 00361B88  81 9D 00 00 */	lwz r12, 0(r29)
/* 80364C4C 00361B8C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80364C50 00361B90  7D 89 03 A6 */	mtctr r12
/* 80364C54 00361B94  4E 80 04 21 */	bctrl 
/* 80364C58 00361B98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364C5C 00361B9C  41 82 00 18 */	beq .L_80364C74
/* 80364C60 00361BA0  7F A3 EB 78 */	mr r3, r29
/* 80364C64 00361BA4  4B E3 A9 25 */	bl isStickToMouth__Q24Game8CreatureFv
/* 80364C68 00361BA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364C6C 00361BAC  40 82 00 08 */	bne .L_80364C74
/* 80364C70 00361BB0  3B C0 00 01 */	li r30, 1
.L_80364C74:
/* 80364C74 00361BB4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80364C78 00361BB8  41 82 01 28 */	beq .L_80364DA0
/* 80364C7C 00361BBC  7F A4 EB 78 */	mr r4, r29
/* 80364C80 00361BC0  38 61 00 20 */	addi r3, r1, 0x20
/* 80364C84 00361BC4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80364C88 00361BC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364C8C 00361BCC  7D 89 03 A6 */	mtctr r12
/* 80364C90 00361BD0  4E 80 04 21 */	bctrl 
/* 80364C94 00361BD4  7F E4 FB 78 */	mr r4, r31
/* 80364C98 00361BD8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80364C9C 00361BDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80364CA0 00361BE0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80364CA4 00361BE4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80364CA8 00361BE8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80364CAC 00361BEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364CB0 00361BF0  D0 41 00 08 */	stfs f2, 8(r1)
/* 80364CB4 00361BF4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80364CB8 00361BF8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80364CBC 00361BFC  7D 89 03 A6 */	mtctr r12
/* 80364CC0 00361C00  4E 80 04 21 */	bctrl 
/* 80364CC4 00361C04  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80364CC8 00361C08  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80364CCC 00361C0C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80364CD0 00361C10  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80364CD4 00361C14  C0 21 00 08 */	lfs f1, 8(r1)
/* 80364CD8 00361C18  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80364CDC 00361C1C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80364CE0 00361C20  EC 21 28 28 */	fsubs f1, f1, f5
/* 80364CE4 00361C24  EC 40 18 28 */	fsubs f2, f0, f3
/* 80364CE8 00361C28  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80364CEC 00361C2C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80364CF0 00361C30  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80364CF4 00361C34  4B CD 04 15 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80364CF8 00361C38  48 0A CE D9 */	bl roundAng__Ff
/* 80364CFC 00361C3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80364D00 00361C40  FF 40 08 90 */	fmr f26, f1
/* 80364D04 00361C44  7F E3 FB 78 */	mr r3, r31
/* 80364D08 00361C48  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80364D0C 00361C4C  7D 89 03 A6 */	mtctr r12
/* 80364D10 00361C50  4E 80 04 21 */	bctrl 
/* 80364D14 00361C54  FC 40 08 90 */	fmr f2, f1
/* 80364D18 00361C58  FC 20 D0 90 */	fmr f1, f26
/* 80364D1C 00361C5C  48 0A CE E1 */	bl angDist__Fff
/* 80364D20 00361C60  FC 00 0A 10 */	fabs f0, f1
/* 80364D24 00361C64  FC 00 00 18 */	frsp f0, f0
/* 80364D28 00361C68  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80364D2C 00361C6C  4C 40 13 82 */	cror 2, 0, 2
/* 80364D30 00361C70  40 82 00 70 */	bne .L_80364DA0
/* 80364D34 00361C74  7F A4 EB 78 */	mr r4, r29
/* 80364D38 00361C78  38 61 00 68 */	addi r3, r1, 0x68
/* 80364D3C 00361C7C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80364D40 00361C80  C3 BF 01 94 */	lfs f29, 0x194(r31)
/* 80364D44 00361C84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364D48 00361C88  C3 7F 01 8C */	lfs f27, 0x18c(r31)
/* 80364D4C 00361C8C  7D 89 03 A6 */	mtctr r12
/* 80364D50 00361C90  4E 80 04 21 */	bctrl 
/* 80364D54 00361C94  7F A4 EB 78 */	mr r4, r29
/* 80364D58 00361C98  38 61 00 74 */	addi r3, r1, 0x74
/* 80364D5C 00361C9C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80364D60 00361CA0  C3 41 00 70 */	lfs f26, 0x70(r1)
/* 80364D64 00361CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364D68 00361CA8  7D 89 03 A6 */	mtctr r12
/* 80364D6C 00361CAC  4E 80 04 21 */	bctrl 
/* 80364D70 00361CB0  EC 1A E8 28 */	fsubs f0, f26, f29
/* 80364D74 00361CB4  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 80364D78 00361CB8  EC 21 D8 28 */	fsubs f1, f1, f27
/* 80364D7C 00361CBC  EC 00 00 32 */	fmuls f0, f0, f0
/* 80364D80 00361CC0  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80364D84 00361CC4  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80364D88 00361CC8  40 80 00 18 */	bge .L_80364DA0
/* 80364D8C 00361CCC  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80364D90 00361CD0  40 81 00 10 */	ble .L_80364DA0
/* 80364D94 00361CD4  93 BF 02 30 */	stw r29, 0x230(r31)
/* 80364D98 00361CD8  38 60 00 01 */	li r3, 1
/* 80364D9C 00361CDC  48 00 00 E4 */	b .L_80364E80
.L_80364DA0:
/* 80364DA0 00361CE0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80364DA4 00361CE4  28 00 00 00 */	cmplwi r0, 0
/* 80364DA8 00361CE8  40 82 00 24 */	bne .L_80364DCC
/* 80364DAC 00361CEC  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364DB0 00361CF0  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364DB4 00361CF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80364DB8 00361CF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80364DBC 00361CFC  7D 89 03 A6 */	mtctr r12
/* 80364DC0 00361D00  4E 80 04 21 */	bctrl 
/* 80364DC4 00361D04  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80364DC8 00361D08  48 00 00 94 */	b .L_80364E5C
.L_80364DCC:
/* 80364DCC 00361D0C  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364DD0 00361D10  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364DD4 00361D14  81 83 00 00 */	lwz r12, 0(r3)
/* 80364DD8 00361D18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80364DDC 00361D1C  7D 89 03 A6 */	mtctr r12
/* 80364DE0 00361D20  4E 80 04 21 */	bctrl 
/* 80364DE4 00361D24  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80364DE8 00361D28  48 00 00 58 */	b .L_80364E40
.L_80364DEC:
/* 80364DEC 00361D2C  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364DF0 00361D30  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364DF4 00361D34  81 83 00 00 */	lwz r12, 0(r3)
/* 80364DF8 00361D38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80364DFC 00361D3C  7D 89 03 A6 */	mtctr r12
/* 80364E00 00361D40  4E 80 04 21 */	bctrl 
/* 80364E04 00361D44  7C 64 1B 78 */	mr r4, r3
/* 80364E08 00361D48  80 61 00 A4 */	lwz r3, 0xa4(r1)
/* 80364E0C 00361D4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80364E10 00361D50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80364E14 00361D54  7D 89 03 A6 */	mtctr r12
/* 80364E18 00361D58  4E 80 04 21 */	bctrl 
/* 80364E1C 00361D5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364E20 00361D60  40 82 00 3C */	bne .L_80364E5C
/* 80364E24 00361D64  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364E28 00361D68  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364E2C 00361D6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80364E30 00361D70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80364E34 00361D74  7D 89 03 A6 */	mtctr r12
/* 80364E38 00361D78  4E 80 04 21 */	bctrl 
/* 80364E3C 00361D7C  90 61 00 9C */	stw r3, 0x9c(r1)
.L_80364E40:
/* 80364E40 00361D80  81 81 00 98 */	lwz r12, 0x98(r1)
/* 80364E44 00361D84  38 61 00 98 */	addi r3, r1, 0x98
/* 80364E48 00361D88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80364E4C 00361D8C  7D 89 03 A6 */	mtctr r12
/* 80364E50 00361D90  4E 80 04 21 */	bctrl 
/* 80364E54 00361D94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364E58 00361D98  41 82 FF 94 */	beq .L_80364DEC
.L_80364E5C:
/* 80364E5C 00361D9C  80 61 00 A0 */	lwz r3, 0xa0(r1)
/* 80364E60 00361DA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80364E64 00361DA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80364E68 00361DA8  7D 89 03 A6 */	mtctr r12
/* 80364E6C 00361DAC  4E 80 04 21 */	bctrl 
/* 80364E70 00361DB0  80 81 00 9C */	lwz r4, 0x9c(r1)
/* 80364E74 00361DB4  7C 04 18 40 */	cmplw r4, r3
/* 80364E78 00361DB8  40 82 FD 98 */	bne .L_80364C10
/* 80364E7C 00361DBC  38 60 00 00 */	li r3, 0
.L_80364E80:
/* 80364E80 00361DC0  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 80364E84 00361DC4  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 80364E88 00361DC8  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 80364E8C 00361DCC  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 80364E90 00361DD0  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 80364E94 00361DD4  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 80364E98 00361DD8  E3 81 00 E8 */	psq_l f28, 232(r1), 0, qr0
/* 80364E9C 00361DDC  CB 81 00 E0 */	lfd f28, 0xe0(r1)
/* 80364EA0 00361DE0  E3 61 00 D8 */	psq_l f27, 216(r1), 0, qr0
/* 80364EA4 00361DE4  CB 61 00 D0 */	lfd f27, 0xd0(r1)
/* 80364EA8 00361DE8  E3 41 00 C8 */	psq_l f26, 200(r1), 0, qr0
/* 80364EAC 00361DEC  CB 41 00 C0 */	lfd f26, 0xc0(r1)
/* 80364EB0 00361DF0  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 80364EB4 00361DF4  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 80364EB8 00361DF8  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80364EBC 00361DFC  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 80364EC0 00361E00  7C 08 03 A6 */	mtlr r0
/* 80364EC4 00361E04  38 21 01 20 */	addi r1, r1, 0x120
/* 80364EC8 00361E08  4E 80 00 20 */	blr 
.endfn isAttackStart__Q34Game6Miulin3ObjFv

.fn isFindTarget__Q34Game6Miulin3ObjFv, global
/* 80364ECC 00361E0C  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80364ED0 00361E10  7C 08 02 A6 */	mflr r0
/* 80364ED4 00361E14  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80364ED8 00361E18  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80364EDC 00361E1C  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80364EE0 00361E20  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80364EE4 00361E24  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80364EE8 00361E28  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 80364EEC 00361E2C  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 80364EF0 00361E30  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 80364EF4 00361E34  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 80364EF8 00361E38  DB 61 00 80 */	stfd f27, 0x80(r1)
/* 80364EFC 00361E3C  F3 61 00 88 */	psq_st f27, 136(r1), 0, qr0
/* 80364F00 00361E40  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80364F04 00361E44  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80364F08 00361E48  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80364F0C 00361E4C  7C 7F 1B 78 */	mr r31, r3
/* 80364F10 00361E50  C0 22 04 D0 */	lfs f1, lbl_8051E830@sda21(r2)
/* 80364F14 00361E54  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80364F18 00361E58  38 00 00 00 */	li r0, 0
/* 80364F1C 00361E5C  C0 42 04 CC */	lfs f2, lbl_8051E82C@sda21(r2)
/* 80364F20 00361E60  C0 04 04 9C */	lfs f0, 0x49c(r4)
/* 80364F24 00361E64  EC 01 00 32 */	fmuls f0, f1, f0
/* 80364F28 00361E68  90 03 02 30 */	stw r0, 0x230(r3)
/* 80364F2C 00361E6C  EF E2 00 32 */	fmuls f31, f2, f0
/* 80364F30 00361E70  48 00 0E 55 */	bl isNowCaution__Q34Game6Miulin3ObjFv
/* 80364F34 00361E74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364F38 00361E78  41 82 00 0C */	beq .L_80364F44
/* 80364F3C 00361E7C  C3 E2 04 CC */	lfs f31, lbl_8051E82C@sda21(r2)
/* 80364F40 00361E80  48 00 00 1C */	b .L_80364F5C
.L_80364F44:
/* 80364F44 00361E84  7F E3 FB 78 */	mr r3, r31
/* 80364F48 00361E88  48 00 04 65 */	bl isProhibitedSearch__Q34Game6Miulin3ObjFv
/* 80364F4C 00361E8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80364F50 00361E90  41 82 00 0C */	beq .L_80364F5C
/* 80364F54 00361E94  38 60 00 00 */	li r3, 0
/* 80364F58 00361E98  48 00 03 D4 */	b .L_8036532C
.L_80364F5C:
/* 80364F5C 00361E9C  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 80364F60 00361EA0  7F E3 FB 78 */	mr r3, r31
/* 80364F64 00361EA4  38 81 00 08 */	addi r4, r1, 8
/* 80364F68 00361EA8  38 A0 00 00 */	li r5, 0
/* 80364F6C 00361EAC  C0 26 04 4C */	lfs f1, 0x44c(r6)
/* 80364F70 00361EB0  EC 01 00 72 */	fmuls f0, f1, f1
/* 80364F74 00361EB4  D0 21 00 08 */	stfs f1, 8(r1)
/* 80364F78 00361EB8  D0 01 00 08 */	stfs f0, 8(r1)
/* 80364F7C 00361EBC  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 80364F80 00361EC0  C0 26 04 9C */	lfs f1, 0x49c(r6)
/* 80364F84 00361EC4  C0 46 04 4C */	lfs f2, 0x44c(r6)
/* 80364F88 00361EC8  4B DA D7 6D */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 80364F8C 00361ECC  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80364F90 00361ED0  38 00 00 00 */	li r0, 0
/* 80364F94 00361ED4  C3 C2 04 D4 */	lfs f30, lbl_8051E834@sda21(r2)
/* 80364F98 00361ED8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80364F9C 00361EDC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80364FA0 00361EE0  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80364FA4 00361EE4  28 00 00 00 */	cmplwi r0, 0
/* 80364FA8 00361EE8  EF DE 07 B2 */	fmuls f30, f30, f30
/* 80364FAC 00361EEC  90 81 00 60 */	stw r4, 0x60(r1)
/* 80364FB0 00361EF0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80364FB4 00361EF4  90 01 00 64 */	stw r0, 0x64(r1)
/* 80364FB8 00361EF8  90 61 00 68 */	stw r3, 0x68(r1)
/* 80364FBC 00361EFC  40 82 00 1C */	bne .L_80364FD8
/* 80364FC0 00361F00  81 83 00 00 */	lwz r12, 0(r3)
/* 80364FC4 00361F04  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80364FC8 00361F08  7D 89 03 A6 */	mtctr r12
/* 80364FCC 00361F0C  4E 80 04 21 */	bctrl 
/* 80364FD0 00361F10  90 61 00 64 */	stw r3, 0x64(r1)
/* 80364FD4 00361F14  48 00 02 EC */	b .L_803652C0
.L_80364FD8:
/* 80364FD8 00361F18  81 83 00 00 */	lwz r12, 0(r3)
/* 80364FDC 00361F1C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80364FE0 00361F20  7D 89 03 A6 */	mtctr r12
/* 80364FE4 00361F24  4E 80 04 21 */	bctrl 
/* 80364FE8 00361F28  90 61 00 64 */	stw r3, 0x64(r1)
/* 80364FEC 00361F2C  48 00 00 58 */	b .L_80365044
.L_80364FF0:
/* 80364FF0 00361F30  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80364FF4 00361F34  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80364FF8 00361F38  81 83 00 00 */	lwz r12, 0(r3)
/* 80364FFC 00361F3C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80365000 00361F40  7D 89 03 A6 */	mtctr r12
/* 80365004 00361F44  4E 80 04 21 */	bctrl 
/* 80365008 00361F48  7C 64 1B 78 */	mr r4, r3
/* 8036500C 00361F4C  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 80365010 00361F50  81 83 00 00 */	lwz r12, 0(r3)
/* 80365014 00361F54  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365018 00361F58  7D 89 03 A6 */	mtctr r12
/* 8036501C 00361F5C  4E 80 04 21 */	bctrl 
/* 80365020 00361F60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365024 00361F64  40 82 02 9C */	bne .L_803652C0
/* 80365028 00361F68  80 61 00 68 */	lwz r3, 0x68(r1)
/* 8036502C 00361F6C  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80365030 00361F70  81 83 00 00 */	lwz r12, 0(r3)
/* 80365034 00361F74  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80365038 00361F78  7D 89 03 A6 */	mtctr r12
/* 8036503C 00361F7C  4E 80 04 21 */	bctrl 
/* 80365040 00361F80  90 61 00 64 */	stw r3, 0x64(r1)
.L_80365044:
/* 80365044 00361F84  81 81 00 60 */	lwz r12, 0x60(r1)
/* 80365048 00361F88  38 61 00 60 */	addi r3, r1, 0x60
/* 8036504C 00361F8C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80365050 00361F90  7D 89 03 A6 */	mtctr r12
/* 80365054 00361F94  4E 80 04 21 */	bctrl 
/* 80365058 00361F98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036505C 00361F9C  41 82 FF 94 */	beq .L_80364FF0
/* 80365060 00361FA0  48 00 02 60 */	b .L_803652C0
.L_80365064:
/* 80365064 00361FA4  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80365068 00361FA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036506C 00361FAC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80365070 00361FB0  7D 89 03 A6 */	mtctr r12
/* 80365074 00361FB4  4E 80 04 21 */	bctrl 
/* 80365078 00361FB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036507C 00361FBC  7C 7D 1B 78 */	mr r29, r3
/* 80365080 00361FC0  3B C0 00 00 */	li r30, 0
/* 80365084 00361FC4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80365088 00361FC8  7D 89 03 A6 */	mtctr r12
/* 8036508C 00361FCC  4E 80 04 21 */	bctrl 
/* 80365090 00361FD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365094 00361FD4  41 82 00 34 */	beq .L_803650C8
/* 80365098 00361FD8  7F A3 EB 78 */	mr r3, r29
/* 8036509C 00361FDC  81 9D 00 00 */	lwz r12, 0(r29)
/* 803650A0 00361FE0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803650A4 00361FE4  7D 89 03 A6 */	mtctr r12
/* 803650A8 00361FE8  4E 80 04 21 */	bctrl 
/* 803650AC 00361FEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803650B0 00361FF0  41 82 00 18 */	beq .L_803650C8
/* 803650B4 00361FF4  7F A3 EB 78 */	mr r3, r29
/* 803650B8 00361FF8  4B E3 A4 D1 */	bl isStickToMouth__Q24Game8CreatureFv
/* 803650BC 00361FFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803650C0 00362000  40 82 00 08 */	bne .L_803650C8
/* 803650C4 00362004  3B C0 00 01 */	li r30, 1
.L_803650C8:
/* 803650C8 00362008  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803650CC 0036200C  41 82 01 38 */	beq .L_80365204
/* 803650D0 00362010  7F A3 EB 78 */	mr r3, r29
/* 803650D4 00362014  4B E3 A4 A1 */	bl isStickTo__Q24Game8CreatureFv
/* 803650D8 00362018  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803650DC 0036201C  40 82 01 28 */	bne .L_80365204
/* 803650E0 00362020  7F A4 EB 78 */	mr r4, r29
/* 803650E4 00362024  38 61 00 24 */	addi r3, r1, 0x24
/* 803650E8 00362028  81 9D 00 00 */	lwz r12, 0(r29)
/* 803650EC 0036202C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803650F0 00362030  7D 89 03 A6 */	mtctr r12
/* 803650F4 00362034  4E 80 04 21 */	bctrl 
/* 803650F8 00362038  7F E4 FB 78 */	mr r4, r31
/* 803650FC 0036203C  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80365100 00362040  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365104 00362044  38 61 00 30 */	addi r3, r1, 0x30
/* 80365108 00362048  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8036510C 0036204C  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80365110 00362050  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365114 00362054  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80365118 00362058  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8036511C 0036205C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80365120 00362060  7D 89 03 A6 */	mtctr r12
/* 80365124 00362064  4E 80 04 21 */	bctrl 
/* 80365128 00362068  C0 A1 00 30 */	lfs f5, 0x30(r1)
/* 8036512C 0036206C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80365130 00362070  C0 61 00 38 */	lfs f3, 0x38(r1)
/* 80365134 00362074  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80365138 00362078  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8036513C 0036207C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80365140 00362080  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80365144 00362084  EC 21 28 28 */	fsubs f1, f1, f5
/* 80365148 00362088  EC 40 18 28 */	fsubs f2, f0, f3
/* 8036514C 0036208C  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 80365150 00362090  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 80365154 00362094  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 80365158 00362098  4B CC FF B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8036515C 0036209C  48 0A CA 75 */	bl roundAng__Ff
/* 80365160 003620A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365164 003620A4  FF 60 08 90 */	fmr f27, f1
/* 80365168 003620A8  7F E3 FB 78 */	mr r3, r31
/* 8036516C 003620AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80365170 003620B0  7D 89 03 A6 */	mtctr r12
/* 80365174 003620B4  4E 80 04 21 */	bctrl 
/* 80365178 003620B8  FC 40 08 90 */	fmr f2, f1
/* 8036517C 003620BC  FC 20 D8 90 */	fmr f1, f27
/* 80365180 003620C0  48 0A CA 7D */	bl angDist__Fff
/* 80365184 003620C4  FC 00 0A 10 */	fabs f0, f1
/* 80365188 003620C8  FC 00 00 18 */	frsp f0, f0
/* 8036518C 003620CC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80365190 003620D0  4C 40 13 82 */	cror 2, 0, 2
/* 80365194 003620D4  40 82 00 70 */	bne .L_80365204
/* 80365198 003620D8  7F A4 EB 78 */	mr r4, r29
/* 8036519C 003620DC  38 61 00 48 */	addi r3, r1, 0x48
/* 803651A0 003620E0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803651A4 003620E4  C3 7F 01 94 */	lfs f27, 0x194(r31)
/* 803651A8 003620E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803651AC 003620EC  C3 9F 01 8C */	lfs f28, 0x18c(r31)
/* 803651B0 003620F0  7D 89 03 A6 */	mtctr r12
/* 803651B4 003620F4  4E 80 04 21 */	bctrl 
/* 803651B8 003620F8  7F A4 EB 78 */	mr r4, r29
/* 803651BC 003620FC  38 61 00 54 */	addi r3, r1, 0x54
/* 803651C0 00362100  81 9D 00 00 */	lwz r12, 0(r29)
/* 803651C4 00362104  C3 A1 00 50 */	lfs f29, 0x50(r1)
/* 803651C8 00362108  81 8C 00 08 */	lwz r12, 8(r12)
/* 803651CC 0036210C  7D 89 03 A6 */	mtctr r12
/* 803651D0 00362110  4E 80 04 21 */	bctrl 
/* 803651D4 00362114  EC 3D D8 28 */	fsubs f1, f29, f27
/* 803651D8 00362118  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 803651DC 0036211C  C0 01 00 08 */	lfs f0, 8(r1)
/* 803651E0 00362120  EC 42 E0 28 */	fsubs f2, f2, f28
/* 803651E4 00362124  EC 21 00 72 */	fmuls f1, f1, f1
/* 803651E8 00362128  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803651EC 0036212C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803651F0 00362130  40 80 00 14 */	bge .L_80365204
/* 803651F4 00362134  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 803651F8 00362138  40 81 00 0C */	ble .L_80365204
/* 803651FC 0036213C  93 BF 02 30 */	stw r29, 0x230(r31)
/* 80365200 00362140  D0 21 00 08 */	stfs f1, 8(r1)
.L_80365204:
/* 80365204 00362144  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80365208 00362148  28 00 00 00 */	cmplwi r0, 0
/* 8036520C 0036214C  40 82 00 24 */	bne .L_80365230
/* 80365210 00362150  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80365214 00362154  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80365218 00362158  81 83 00 00 */	lwz r12, 0(r3)
/* 8036521C 0036215C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80365220 00362160  7D 89 03 A6 */	mtctr r12
/* 80365224 00362164  4E 80 04 21 */	bctrl 
/* 80365228 00362168  90 61 00 64 */	stw r3, 0x64(r1)
/* 8036522C 0036216C  48 00 00 94 */	b .L_803652C0
.L_80365230:
/* 80365230 00362170  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80365234 00362174  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80365238 00362178  81 83 00 00 */	lwz r12, 0(r3)
/* 8036523C 0036217C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80365240 00362180  7D 89 03 A6 */	mtctr r12
/* 80365244 00362184  4E 80 04 21 */	bctrl 
/* 80365248 00362188  90 61 00 64 */	stw r3, 0x64(r1)
/* 8036524C 0036218C  48 00 00 58 */	b .L_803652A4
.L_80365250:
/* 80365250 00362190  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80365254 00362194  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80365258 00362198  81 83 00 00 */	lwz r12, 0(r3)
/* 8036525C 0036219C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80365260 003621A0  7D 89 03 A6 */	mtctr r12
/* 80365264 003621A4  4E 80 04 21 */	bctrl 
/* 80365268 003621A8  7C 64 1B 78 */	mr r4, r3
/* 8036526C 003621AC  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 80365270 003621B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80365274 003621B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365278 003621B8  7D 89 03 A6 */	mtctr r12
/* 8036527C 003621BC  4E 80 04 21 */	bctrl 
/* 80365280 003621C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365284 003621C4  40 82 00 3C */	bne .L_803652C0
/* 80365288 003621C8  80 61 00 68 */	lwz r3, 0x68(r1)
/* 8036528C 003621CC  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80365290 003621D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80365294 003621D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80365298 003621D8  7D 89 03 A6 */	mtctr r12
/* 8036529C 003621DC  4E 80 04 21 */	bctrl 
/* 803652A0 003621E0  90 61 00 64 */	stw r3, 0x64(r1)
.L_803652A4:
/* 803652A4 003621E4  81 81 00 60 */	lwz r12, 0x60(r1)
/* 803652A8 003621E8  38 61 00 60 */	addi r3, r1, 0x60
/* 803652AC 003621EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803652B0 003621F0  7D 89 03 A6 */	mtctr r12
/* 803652B4 003621F4  4E 80 04 21 */	bctrl 
/* 803652B8 003621F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803652BC 003621FC  41 82 FF 94 */	beq .L_80365250
.L_803652C0:
/* 803652C0 00362200  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803652C4 00362204  81 83 00 00 */	lwz r12, 0(r3)
/* 803652C8 00362208  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803652CC 0036220C  7D 89 03 A6 */	mtctr r12
/* 803652D0 00362210  4E 80 04 21 */	bctrl 
/* 803652D4 00362214  80 81 00 64 */	lwz r4, 0x64(r1)
/* 803652D8 00362218  7C 04 18 40 */	cmplw r4, r3
/* 803652DC 0036221C  40 82 FD 88 */	bne .L_80365064
/* 803652E0 00362220  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 803652E4 00362224  28 04 00 00 */	cmplwi r4, 0
/* 803652E8 00362228  41 82 00 40 */	beq .L_80365328
/* 803652EC 0036222C  81 84 00 00 */	lwz r12, 0(r4)
/* 803652F0 00362230  38 61 00 3C */	addi r3, r1, 0x3c
/* 803652F4 00362234  81 8C 00 08 */	lwz r12, 8(r12)
/* 803652F8 00362238  7D 89 03 A6 */	mtctr r12
/* 803652FC 0036223C  4E 80 04 21 */	bctrl 
/* 80365300 00362240  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80365304 00362244  38 00 00 00 */	li r0, 0
/* 80365308 00362248  38 60 00 01 */	li r3, 1
/* 8036530C 0036224C  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80365310 00362250  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80365314 00362254  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80365318 00362258  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8036531C 0036225C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80365320 00362260  98 1F 02 E4 */	stb r0, 0x2e4(r31)
/* 80365324 00362264  48 00 00 08 */	b .L_8036532C
.L_80365328:
/* 80365328 00362268  38 60 00 00 */	li r3, 0
.L_8036532C:
/* 8036532C 0036226C  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 80365330 00362270  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80365334 00362274  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 80365338 00362278  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8036533C 0036227C  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 80365340 00362280  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 80365344 00362284  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 80365348 00362288  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 8036534C 0036228C  E3 61 00 88 */	psq_l f27, 136(r1), 0, qr0
/* 80365350 00362290  CB 61 00 80 */	lfd f27, 0x80(r1)
/* 80365354 00362294  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80365358 00362298  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8036535C 0036229C  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80365360 003622A0  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80365364 003622A4  7C 08 03 A6 */	mtlr r0
/* 80365368 003622A8  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8036536C 003622AC  4E 80 00 20 */	blr 
.endfn isFindTarget__Q34Game6Miulin3ObjFv

.fn isOutOfTerritory__Q34Game6Miulin3ObjFv, global
/* 80365370 003622B0  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 80365374 003622B4  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80365378 003622B8  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8036537C 003622BC  EC 41 00 28 */	fsubs f2, f1, f0
/* 80365380 003622C0  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 80365384 003622C4  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80365388 003622C8  C0 84 03 5C */	lfs f4, 0x35c(r4)
/* 8036538C 003622CC  EC 61 00 28 */	fsubs f3, f1, f0
/* 80365390 003622D0  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80365394 003622D4  EC 04 01 32 */	fmuls f0, f4, f4
/* 80365398 003622D8  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8036539C 003622DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803653A0 003622E0  7C 00 00 26 */	mfcr r0
/* 803653A4 003622E4  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 803653A8 003622E8  4E 80 00 20 */	blr 
.endfn isOutOfTerritory__Q34Game6Miulin3ObjFv

.fn isProhibitedSearch__Q34Game6Miulin3ObjFv, global
/* 803653AC 003622EC  80 03 02 D0 */	lwz r0, 0x2d0(r3)
/* 803653B0 003622F0  2C 00 00 00 */	cmpwi r0, 0
/* 803653B4 003622F4  40 81 00 0C */	ble .L_803653C0
/* 803653B8 003622F8  38 60 00 01 */	li r3, 1
/* 803653BC 003622FC  4E 80 00 20 */	blr 
.L_803653C0:
/* 803653C0 00362300  88 03 02 E4 */	lbz r0, 0x2e4(r3)
/* 803653C4 00362304  28 00 00 00 */	cmplwi r0, 0
/* 803653C8 00362308  41 82 00 64 */	beq .L_8036542C
/* 803653CC 0036230C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 803653D0 00362310  C0 42 04 D8 */	lfs f2, lbl_8051E838@sda21(r2)
/* 803653D4 00362314  C0 64 03 5C */	lfs f3, 0x35c(r4)
/* 803653D8 00362318  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 803653DC 0036231C  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 803653E0 00362320  EC 63 00 B2 */	fmuls f3, f3, f2
/* 803653E4 00362324  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803653E8 00362328  40 81 00 10 */	ble .L_803653F8
/* 803653EC 0036232C  D0 03 02 0C */	stfs f0, 0x20c(r3)
/* 803653F0 00362330  38 60 00 00 */	li r3, 0
/* 803653F4 00362334  4E 80 00 20 */	blr 
.L_803653F8:
/* 803653F8 00362338  C0 43 01 A0 */	lfs f2, 0x1a0(r3)
/* 803653FC 0036233C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80365400 00362340  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 80365404 00362344  C0 63 01 98 */	lfs f3, 0x198(r3)
/* 80365408 00362348  EC 42 08 28 */	fsubs f2, f2, f1
/* 8036540C 0036234C  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80365410 00362350  EC 63 08 28 */	fsubs f3, f3, f1
/* 80365414 00362354  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80365418 00362358  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8036541C 0036235C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80365420 00362360  40 81 00 0C */	ble .L_8036542C
/* 80365424 00362364  38 60 00 01 */	li r3, 1
/* 80365428 00362368  4E 80 00 20 */	blr 
.L_8036542C:
/* 8036542C 0036236C  38 60 00 00 */	li r3, 0
/* 80365430 00362370  4E 80 00 20 */	blr 
.endfn isProhibitedSearch__Q34Game6Miulin3ObjFv

.fn isStartWalk__Q34Game6Miulin3ObjFv, global
/* 80365434 00362374  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80365438 00362378  7C 08 02 A6 */	mflr r0
/* 8036543C 0036237C  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365440 00362380  90 01 00 24 */	stw r0, 0x24(r1)
/* 80365444 00362384  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80365448 00362388  7C 7F 1B 78 */	mr r31, r3
/* 8036544C 0036238C  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 80365450 00362390  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80365454 00362394  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80365458 00362398  C0 23 04 24 */	lfs f1, 0x424(r3)
/* 8036545C 0036239C  40 81 00 0C */	ble .L_80365468
/* 80365460 003623A0  C0 22 04 DC */	lfs f1, lbl_8051E83C@sda21(r2)
/* 80365464 003623A4  D0 1F 02 0C */	stfs f0, 0x20c(r31)
.L_80365468:
/* 80365468 003623A8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8036546C 003623AC  7F E3 FB 78 */	mr r3, r31
/* 80365470 003623B0  38 80 00 00 */	li r4, 0
/* 80365474 003623B4  38 C0 00 00 */	li r6, 0
/* 80365478 003623B8  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 8036547C 003623BC  38 A0 00 00 */	li r5, 0
/* 80365480 003623C0  4B DA DB D1 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80365484 003623C4  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80365488 003623C8  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 8036548C 003623CC  28 04 00 00 */	cmplwi r4, 0
/* 80365490 003623D0  41 82 00 38 */	beq .L_803654C8
/* 80365494 003623D4  81 84 00 00 */	lwz r12, 0(r4)
/* 80365498 003623D8  38 61 00 08 */	addi r3, r1, 8
/* 8036549C 003623DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803654A0 003623E0  7D 89 03 A6 */	mtctr r12
/* 803654A4 003623E4  4E 80 04 21 */	bctrl 
/* 803654A8 003623E8  C0 01 00 08 */	lfs f0, 8(r1)
/* 803654AC 003623EC  38 60 00 01 */	li r3, 1
/* 803654B0 003623F0  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 803654B4 003623F4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803654B8 003623F8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 803654BC 003623FC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803654C0 00362400  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 803654C4 00362404  48 00 00 08 */	b .L_803654CC
.L_803654C8:
/* 803654C8 00362408  38 60 00 00 */	li r3, 0
.L_803654CC:
/* 803654CC 0036240C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803654D0 00362410  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803654D4 00362414  7C 08 03 A6 */	mtlr r0
/* 803654D8 00362418  38 21 00 20 */	addi r1, r1, 0x20
/* 803654DC 0036241C  4E 80 00 20 */	blr 
.endfn isStartWalk__Q34Game6Miulin3ObjFv

.fn setReturnState__Q34Game6Miulin3ObjFv, global
/* 803654E0 00362420  38 80 00 00 */	li r4, 0
/* 803654E4 00362424  38 00 00 01 */	li r0, 1
/* 803654E8 00362428  90 83 02 30 */	stw r4, 0x230(r3)
/* 803654EC 0036242C  98 03 02 E4 */	stb r0, 0x2e4(r3)
/* 803654F0 00362430  C0 03 01 98 */	lfs f0, 0x198(r3)
/* 803654F4 00362434  D0 03 02 BC */	stfs f0, 0x2bc(r3)
/* 803654F8 00362438  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 803654FC 0036243C  D0 03 02 C0 */	stfs f0, 0x2c0(r3)
/* 80365500 00362440  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 80365504 00362444  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 80365508 00362448  4E 80 00 20 */	blr 
.endfn setReturnState__Q34Game6Miulin3ObjFv

.fn walkFunc__Q34Game6Miulin3ObjFv, global
/* 8036550C 0036244C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80365510 00362450  7C 08 02 A6 */	mflr r0
/* 80365514 00362454  90 01 00 94 */	stw r0, 0x94(r1)
/* 80365518 00362458  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8036551C 0036245C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80365520 00362460  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80365524 00362464  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80365528 00362468  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8036552C 0036246C  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80365530 00362470  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80365534 00362474  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 80365538 00362478  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8036553C 0036247C  7C 7F 1B 78 */	mr r31, r3
/* 80365540 00362480  4B D9 FD 2D */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80365544 00362484  C3 E2 04 BC */	lfs f31, lbl_8051E81C@sda21(r2)
/* 80365548 00362488  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 8036554C 0036248C  FF C0 F8 90 */	fmr f30, f31
/* 80365550 00362490  28 04 00 00 */	cmplwi r4, 0
/* 80365554 00362494  41 82 00 E0 */	beq .L_80365634
/* 80365558 00362498  81 84 00 00 */	lwz r12, 0(r4)
/* 8036555C 0036249C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80365560 003624A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365564 003624A4  7D 89 03 A6 */	mtctr r12
/* 80365568 003624A8  4E 80 04 21 */	bctrl 
/* 8036556C 003624AC  7F E4 FB 78 */	mr r4, r31
/* 80365570 003624B0  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80365574 003624B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365578 003624B8  38 61 00 38 */	addi r3, r1, 0x38
/* 8036557C 003624BC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80365580 003624C0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80365584 003624C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365588 003624C8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8036558C 003624CC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80365590 003624D0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80365594 003624D4  7D 89 03 A6 */	mtctr r12
/* 80365598 003624D8  4E 80 04 21 */	bctrl 
/* 8036559C 003624DC  C0 A1 00 38 */	lfs f5, 0x38(r1)
/* 803655A0 003624E0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803655A4 003624E4  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 803655A8 003624E8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803655AC 003624EC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803655B0 003624F0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803655B4 003624F4  C0 81 00 3C */	lfs f4, 0x3c(r1)
/* 803655B8 003624F8  EC 21 28 28 */	fsubs f1, f1, f5
/* 803655BC 003624FC  EC 40 18 28 */	fsubs f2, f0, f3
/* 803655C0 00362500  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 803655C4 00362504  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 803655C8 00362508  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 803655CC 0036250C  4B CC FB 3D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803655D0 00362510  48 0A C6 01 */	bl roundAng__Ff
/* 803655D4 00362514  81 9F 00 00 */	lwz r12, 0(r31)
/* 803655D8 00362518  FF A0 08 90 */	fmr f29, f1
/* 803655DC 0036251C  7F E3 FB 78 */	mr r3, r31
/* 803655E0 00362520  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803655E4 00362524  7D 89 03 A6 */	mtctr r12
/* 803655E8 00362528  4E 80 04 21 */	bctrl 
/* 803655EC 0036252C  FC 40 08 90 */	fmr f2, f1
/* 803655F0 00362530  FC 20 E8 90 */	fmr f1, f29
/* 803655F4 00362534  48 0A C6 09 */	bl angDist__Fff
/* 803655F8 00362538  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803655FC 0036253C  FC 60 0A 10 */	fabs f3, f1
/* 80365600 00362540  C0 22 04 D0 */	lfs f1, lbl_8051E830@sda21(r2)
/* 80365604 00362544  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 80365608 00362548  C0 42 04 CC */	lfs f2, lbl_8051E82C@sda21(r2)
/* 8036560C 0036254C  FC 60 18 18 */	frsp f3, f3
/* 80365610 00362550  EC 01 00 32 */	fmuls f0, f1, f0
/* 80365614 00362554  EC 02 00 32 */	fmuls f0, f2, f0
/* 80365618 00362558  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036561C 0036255C  40 80 00 18 */	bge .L_80365634
/* 80365620 00362560  C3 E4 08 6C */	lfs f31, 0x86c(r4)
/* 80365624 00362564  7F E3 FB 78 */	mr r3, r31
/* 80365628 00362568  C3 C4 08 94 */	lfs f30, 0x894(r4)
/* 8036562C 0036256C  4B D9 C3 A1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80365630 00362570  48 00 00 0C */	b .L_8036563C
.L_80365634:
/* 80365634 00362574  7F E3 FB 78 */	mr r3, r31
/* 80365638 00362578  4B D9 C3 45 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
.L_8036563C:
/* 8036563C 0036257C  7F E3 FB 78 */	mr r3, r31
/* 80365640 00362580  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80365644 00362584  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365648 00362588  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8036564C 0036258C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80365650 00362590  EF BF 00 32 */	fmuls f29, f31, f0
/* 80365654 00362594  7D 89 03 A6 */	mtctr r12
/* 80365658 00362598  4E 80 04 21 */	bctrl 
/* 8036565C 0036259C  4B D6 A1 C1 */	bl sin
/* 80365660 003625A0  7F E3 FB 78 */	mr r3, r31
/* 80365664 003625A4  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80365668 003625A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036566C 003625AC  FF 80 08 18 */	frsp f28, f1
/* 80365670 003625B0  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80365674 003625B4  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80365678 003625B8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8036567C 003625BC  D0 41 00 08 */	stfs f2, 8(r1)
/* 80365680 003625C0  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 80365684 003625C4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80365688 003625C8  7D 89 03 A6 */	mtctr r12
/* 8036568C 003625CC  4E 80 04 21 */	bctrl 
/* 80365690 003625D0  4B D6 9C 25 */	bl cos
/* 80365694 003625D4  EC 5D 07 32 */	fmuls f2, f29, f28
/* 80365698 003625D8  C0 02 9C 38 */	lfs f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 8036569C 003625DC  FC 60 08 18 */	frsp f3, f1
/* 803656A0 003625E0  7F E3 FB 78 */	mr r3, r31
/* 803656A4 003625E4  EC 20 07 B2 */	fmuls f1, f0, f30
/* 803656A8 003625E8  D0 5F 01 D4 */	stfs f2, 0x1d4(r31)
/* 803656AC 003625EC  EC 1D 00 F2 */	fmuls f0, f29, f3
/* 803656B0 003625F0  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 803656B4 003625F4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803656B8 003625F8  4B DA 1C D9 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 803656BC 003625FC  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 803656C0 00362600  38 03 00 01 */	addi r0, r3, 1
/* 803656C4 00362604  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 803656C8 00362608  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803656CC 0036260C  2C 00 00 78 */	cmpwi r0, 0x78
/* 803656D0 00362610  40 81 00 78 */	ble .L_80365748
/* 803656D4 00362614  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803656D8 00362618  C0 1F 02 DC */	lfs f0, 0x2dc(r31)
/* 803656DC 0036261C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 803656E0 00362620  EC 61 00 28 */	fsubs f3, f1, f0
/* 803656E4 00362624  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 803656E8 00362628  C0 02 04 E0 */	lfs f0, lbl_8051E840@sda21(r2)
/* 803656EC 0036262C  EC 42 08 28 */	fsubs f2, f2, f1
/* 803656F0 00362630  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803656F4 00362634  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803656F8 00362638  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803656FC 0036263C  40 80 00 2C */	bge .L_80365728
/* 80365700 00362640  38 60 00 78 */	li r3, 0x78
/* 80365704 00362644  38 00 00 00 */	li r0, 0
/* 80365708 00362648  90 7F 02 D0 */	stw r3, 0x2d0(r31)
/* 8036570C 0036264C  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80365710 00362650  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80365714 00362654  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80365718 00362658  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8036571C 0036265C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80365720 00362660  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80365724 00362664  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_80365728:
/* 80365728 00362668  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8036572C 0036266C  38 00 00 00 */	li r0, 0
/* 80365730 00362670  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 80365734 00362674  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80365738 00362678  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 8036573C 0036267C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80365740 00362680  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80365744 00362684  90 1F 02 E0 */	stw r0, 0x2e0(r31)
.L_80365748:
/* 80365748 00362688  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8036574C 0036268C  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80365750 00362690  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80365754 00362694  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80365758 00362698  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8036575C 0036269C  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80365760 003626A0  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80365764 003626A4  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80365768 003626A8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8036576C 003626AC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80365770 003626B0  7C 08 03 A6 */	mtlr r0
/* 80365774 003626B4  38 21 00 90 */	addi r1, r1, 0x90
/* 80365778 003626B8  4E 80 00 20 */	blr 
.endfn walkFunc__Q34Game6Miulin3ObjFv

.fn turnFunc__Q34Game6Miulin3ObjFf, global
/* 8036577C 003626BC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80365780 003626C0  7C 08 02 A6 */	mflr r0
/* 80365784 003626C4  90 01 00 74 */	stw r0, 0x74(r1)
/* 80365788 003626C8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8036578C 003626CC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80365790 003626D0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80365794 003626D4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80365798 003626D8  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8036579C 003626DC  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 803657A0 003626E0  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 803657A4 003626E4  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 803657A8 003626E8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803657AC 003626EC  7C 7F 1B 78 */	mr r31, r3
/* 803657B0 003626F0  FF C0 08 90 */	fmr f30, f1
/* 803657B4 003626F4  80 83 02 30 */	lwz r4, 0x230(r3)
/* 803657B8 003626F8  C3 E3 02 BC */	lfs f31, 0x2bc(r3)
/* 803657BC 003626FC  28 04 00 00 */	cmplwi r4, 0
/* 803657C0 00362700  C3 83 02 C4 */	lfs f28, 0x2c4(r3)
/* 803657C4 00362704  41 82 00 20 */	beq .L_803657E4
/* 803657C8 00362708  81 84 00 00 */	lwz r12, 0(r4)
/* 803657CC 0036270C  38 61 00 14 */	addi r3, r1, 0x14
/* 803657D0 00362710  81 8C 00 08 */	lwz r12, 8(r12)
/* 803657D4 00362714  7D 89 03 A6 */	mtctr r12
/* 803657D8 00362718  4E 80 04 21 */	bctrl 
/* 803657DC 0036271C  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 803657E0 00362720  C3 81 00 1C */	lfs f28, 0x1c(r1)
.L_803657E4:
/* 803657E4 00362724  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803657E8 00362728  7F E4 FB 78 */	mr r4, r31
/* 803657EC 0036272C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803657F0 00362730  38 61 00 08 */	addi r3, r1, 8
/* 803657F4 00362734  C0 25 03 34 */	lfs f1, 0x334(r5)
/* 803657F8 00362738  C0 05 03 0C */	lfs f0, 0x30c(r5)
/* 803657FC 0036273C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365800 00362740  EF BE 00 72 */	fmuls f29, f30, f1
/* 80365804 00362744  EF DE 00 32 */	fmuls f30, f30, f0
/* 80365808 00362748  7D 89 03 A6 */	mtctr r12
/* 8036580C 0036274C  4E 80 04 21 */	bctrl 
/* 80365810 00362750  C0 21 00 08 */	lfs f1, 8(r1)
/* 80365814 00362754  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80365818 00362758  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8036581C 0036275C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80365820 00362760  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80365824 00362764  EC 5C 00 28 */	fsubs f2, f28, f0
/* 80365828 00362768  4B CC F8 E1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8036582C 0036276C  48 0A C3 A5 */	bl roundAng__Ff
/* 80365830 00362770  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365834 00362774  FF E0 08 90 */	fmr f31, f1
/* 80365838 00362778  7F E3 FB 78 */	mr r3, r31
/* 8036583C 0036277C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80365840 00362780  7D 89 03 A6 */	mtctr r12
/* 80365844 00362784  4E 80 04 21 */	bctrl 
/* 80365848 00362788  FC 40 08 90 */	fmr f2, f1
/* 8036584C 0036278C  FC 20 F8 90 */	fmr f1, f31
/* 80365850 00362790  48 0A C3 AD */	bl angDist__Fff
/* 80365854 00362794  FF E0 08 90 */	fmr f31, f1
/* 80365858 00362798  C0 02 04 D0 */	lfs f0, lbl_8051E830@sda21(r2)
/* 8036585C 0036279C  C0 22 04 CC */	lfs f1, lbl_8051E82C@sda21(r2)
/* 80365860 003627A0  EC 00 07 72 */	fmuls f0, f0, f29
/* 80365864 003627A4  EF BF 07 B2 */	fmuls f29, f31, f30
/* 80365868 003627A8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8036586C 003627AC  FC 00 EA 10 */	fabs f0, f29
/* 80365870 003627B0  FC 00 00 18 */	frsp f0, f0
/* 80365874 003627B4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80365878 003627B8  40 81 00 1C */	ble .L_80365894
/* 8036587C 003627BC  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365880 003627C0  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80365884 003627C4  40 81 00 0C */	ble .L_80365890
/* 80365888 003627C8  FF A0 08 90 */	fmr f29, f1
/* 8036588C 003627CC  48 00 00 08 */	b .L_80365894
.L_80365890:
/* 80365890 003627D0  FF A0 08 50 */	fneg f29, f1
.L_80365894:
/* 80365894 003627D4  7F E3 FB 78 */	mr r3, r31
/* 80365898 003627D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036589C 003627DC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803658A0 003627E0  7D 89 03 A6 */	mtctr r12
/* 803658A4 003627E4  4E 80 04 21 */	bctrl 
/* 803658A8 003627E8  EC 3D 08 2A */	fadds f1, f29, f1
/* 803658AC 003627EC  48 0A C3 25 */	bl roundAng__Ff
/* 803658B0 003627F0  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 803658B4 003627F4  FC 20 FA 10 */	fabs f1, f31
/* 803658B8 003627F8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 803658BC 003627FC  FC 20 08 18 */	frsp f1, f1
/* 803658C0 00362800  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 803658C4 00362804  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803658C8 00362808  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803658CC 0036280C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 803658D0 00362810  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 803658D4 00362814  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 803658D8 00362818  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 803658DC 0036281C  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 803658E0 00362820  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 803658E4 00362824  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803658E8 00362828  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803658EC 0036282C  7C 08 03 A6 */	mtlr r0
/* 803658F0 00362830  38 21 00 70 */	addi r1, r1, 0x70
/* 803658F4 00362834  4E 80 00 20 */	blr 
.endfn turnFunc__Q34Game6Miulin3ObjFf

.fn isReachToGoal__Q34Game6Miulin3ObjFf, global
/* 803658F8 00362838  88 03 02 E4 */	lbz r0, 0x2e4(r3)
/* 803658FC 0036283C  28 00 00 00 */	cmplwi r0, 0
/* 80365900 00362840  41 82 00 0C */	beq .L_8036590C
/* 80365904 00362844  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80365908 00362848  C0 24 03 84 */	lfs f1, 0x384(r4)
.L_8036590C:
/* 8036590C 0036284C  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 80365910 00362850  EC 01 00 72 */	fmuls f0, f1, f1
/* 80365914 00362854  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 80365918 00362858  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 8036591C 0036285C  EC 42 08 28 */	fsubs f2, f2, f1
/* 80365920 00362860  C0 23 02 BC */	lfs f1, 0x2bc(r3)
/* 80365924 00362864  EC 63 08 28 */	fsubs f3, f3, f1
/* 80365928 00362868  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8036592C 0036286C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80365930 00362870  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80365934 00362874  40 80 00 0C */	bge .L_80365940
/* 80365938 00362878  38 60 00 01 */	li r3, 1
/* 8036593C 0036287C  4E 80 00 20 */	blr 
.L_80365940:
/* 80365940 00362880  38 60 00 00 */	li r3, 0
/* 80365944 00362884  4E 80 00 20 */	blr 
.endfn isReachToGoal__Q34Game6Miulin3ObjFf

.fn setNextGoal__Q34Game6Miulin3ObjFv, global
/* 80365948 00362888  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8036594C 0036288C  7C 08 02 A6 */	mflr r0
/* 80365950 00362890  90 01 00 44 */	stw r0, 0x44(r1)
/* 80365954 00362894  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80365958 00362898  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8036595C 0036289C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80365960 003628A0  7C 7F 1B 78 */	mr r31, r3
/* 80365964 003628A4  88 03 02 E4 */	lbz r0, 0x2e4(r3)
/* 80365968 003628A8  28 00 00 00 */	cmplwi r0, 0
/* 8036596C 003628AC  41 82 00 20 */	beq .L_8036598C
/* 80365970 003628B0  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80365974 003628B4  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80365978 003628B8  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8036597C 003628BC  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80365980 003628C0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80365984 003628C4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80365988 003628C8  48 00 01 00 */	b .L_80365A88
.L_8036598C:
/* 8036598C 003628CC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80365990 003628D0  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80365994 003628D4  C3 E3 03 5C */	lfs f31, 0x35c(r3)
/* 80365998 003628D8  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 8036599C 003628DC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 803659A0 003628E0  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 803659A4 003628E4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 803659A8 003628E8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 803659AC 003628EC  4B D6 3B F5 */	bl rand
/* 803659B0 003628F0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803659B4 003628F4  3C 00 43 30 */	lis r0, 0x4330
/* 803659B8 003628F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 803659BC 003628FC  C8 62 04 F8 */	lfd f3, lbl_8051E858@sda21(r2)
/* 803659C0 00362900  90 01 00 08 */	stw r0, 8(r1)
/* 803659C4 00362904  C0 42 04 E4 */	lfs f2, lbl_8051E844@sda21(r2)
/* 803659C8 00362908  C8 01 00 08 */	lfd f0, 8(r1)
/* 803659CC 0036290C  C0 22 04 F0 */	lfs f1, lbl_8051E850@sda21(r2)
/* 803659D0 00362910  EC 60 18 28 */	fsubs f3, f0, f3
/* 803659D4 00362914  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 803659D8 00362918  EC 43 10 24 */	fdivs f2, f3, f2
/* 803659DC 0036291C  EC 61 00 B2 */	fmuls f3, f1, f2
/* 803659E0 00362920  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803659E4 00362924  40 80 00 30 */	bge .L_80365A14
/* 803659E8 00362928  C0 02 04 E8 */	lfs f0, lbl_8051E848@sda21(r2)
/* 803659EC 0036292C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803659F0 00362930  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803659F4 00362934  EC 03 00 32 */	fmuls f0, f3, f0
/* 803659F8 00362938  FC 00 00 1E */	fctiwz f0, f0
/* 803659FC 0036293C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80365A00 00362940  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80365A04 00362944  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80365A08 00362948  7C 03 04 2E */	lfsx f0, r3, r0
/* 80365A0C 0036294C  FC 40 00 50 */	fneg f2, f0
/* 80365A10 00362950  48 00 00 28 */	b .L_80365A38
.L_80365A14:
/* 80365A14 00362954  C0 02 04 EC */	lfs f0, lbl_8051E84C@sda21(r2)
/* 80365A18 00362958  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80365A1C 0036295C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80365A20 00362960  EC 03 00 32 */	fmuls f0, f3, f0
/* 80365A24 00362964  FC 00 00 1E */	fctiwz f0, f0
/* 80365A28 00362968  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80365A2C 0036296C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80365A30 00362970  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80365A34 00362974  7C 43 04 2E */	lfsx f2, r3, r0
.L_80365A38:
/* 80365A38 00362978  C0 3F 02 BC */	lfs f1, 0x2bc(r31)
/* 80365A3C 0036297C  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365A40 00362980  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 80365A44 00362984  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80365A48 00362988  D0 3F 02 BC */	stfs f1, 0x2bc(r31)
/* 80365A4C 0036298C  40 80 00 08 */	bge .L_80365A54
/* 80365A50 00362990  FC 60 18 50 */	fneg f3, f3
.L_80365A54:
/* 80365A54 00362994  C0 22 04 EC */	lfs f1, lbl_8051E84C@sda21(r2)
/* 80365A58 00362998  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80365A5C 0036299C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80365A60 003629A0  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 80365A64 003629A4  EC 23 00 72 */	fmuls f1, f3, f1
/* 80365A68 003629A8  FC 20 08 1E */	fctiwz f1, f1
/* 80365A6C 003629AC  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 80365A70 003629B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80365A74 003629B4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80365A78 003629B8  7C 63 02 14 */	add r3, r3, r0
/* 80365A7C 003629BC  C0 23 00 04 */	lfs f1, 4(r3)
/* 80365A80 003629C0  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 80365A84 003629C4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_80365A88:
/* 80365A88 003629C8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80365A8C 003629CC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80365A90 003629D0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80365A94 003629D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80365A98 003629D8  7C 08 03 A6 */	mtlr r0
/* 80365A9C 003629DC  38 21 00 40 */	addi r1, r1, 0x40
/* 80365AA0 003629E0  4E 80 00 20 */	blr 
.endfn setNextGoal__Q34Game6Miulin3ObjFv

.fn nextTargetTurnCheck__Q34Game6Miulin3ObjFv, global
/* 80365AA4 003629E4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80365AA8 003629E8  7C 08 02 A6 */	mflr r0
/* 80365AAC 003629EC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80365AB0 003629F0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80365AB4 003629F4  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80365AB8 003629F8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80365ABC 003629FC  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80365AC0 00362A00  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80365AC4 00362A04  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80365AC8 00362A08  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80365ACC 00362A0C  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 80365AD0 00362A10  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80365AD4 00362A14  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80365AD8 00362A18  7C 7F 1B 78 */	mr r31, r3
/* 80365ADC 00362A1C  4B FF F3 F1 */	bl isFindTarget__Q34Game6Miulin3ObjFv
/* 80365AE0 00362A20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365AE4 00362A24  40 82 01 28 */	bne .L_80365C0C
/* 80365AE8 00362A28  88 1F 02 E4 */	lbz r0, 0x2e4(r31)
/* 80365AEC 00362A2C  28 00 00 00 */	cmplwi r0, 0
/* 80365AF0 00362A30  41 82 00 20 */	beq .L_80365B10
/* 80365AF4 00362A34  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80365AF8 00362A38  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80365AFC 00362A3C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80365B00 00362A40  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80365B04 00362A44  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80365B08 00362A48  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80365B0C 00362A4C  48 00 01 00 */	b .L_80365C0C
.L_80365B10:
/* 80365B10 00362A50  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80365B14 00362A54  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80365B18 00362A58  C3 E3 03 5C */	lfs f31, 0x35c(r3)
/* 80365B1C 00362A5C  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80365B20 00362A60  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80365B24 00362A64  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80365B28 00362A68  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80365B2C 00362A6C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80365B30 00362A70  4B D6 3A 71 */	bl rand
/* 80365B34 00362A74  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80365B38 00362A78  3C 00 43 30 */	lis r0, 0x4330
/* 80365B3C 00362A7C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80365B40 00362A80  C8 62 04 F8 */	lfd f3, lbl_8051E858@sda21(r2)
/* 80365B44 00362A84  90 01 00 20 */	stw r0, 0x20(r1)
/* 80365B48 00362A88  C0 42 04 E4 */	lfs f2, lbl_8051E844@sda21(r2)
/* 80365B4C 00362A8C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80365B50 00362A90  C0 22 04 F0 */	lfs f1, lbl_8051E850@sda21(r2)
/* 80365B54 00362A94  EC 60 18 28 */	fsubs f3, f0, f3
/* 80365B58 00362A98  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365B5C 00362A9C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80365B60 00362AA0  EC 61 00 B2 */	fmuls f3, f1, f2
/* 80365B64 00362AA4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80365B68 00362AA8  40 80 00 30 */	bge .L_80365B98
/* 80365B6C 00362AAC  C0 02 04 E8 */	lfs f0, lbl_8051E848@sda21(r2)
/* 80365B70 00362AB0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80365B74 00362AB4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80365B78 00362AB8  EC 03 00 32 */	fmuls f0, f3, f0
/* 80365B7C 00362ABC  FC 00 00 1E */	fctiwz f0, f0
/* 80365B80 00362AC0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80365B84 00362AC4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80365B88 00362AC8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80365B8C 00362ACC  7C 03 04 2E */	lfsx f0, r3, r0
/* 80365B90 00362AD0  FC 40 00 50 */	fneg f2, f0
/* 80365B94 00362AD4  48 00 00 28 */	b .L_80365BBC
.L_80365B98:
/* 80365B98 00362AD8  C0 02 04 EC */	lfs f0, lbl_8051E84C@sda21(r2)
/* 80365B9C 00362ADC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80365BA0 00362AE0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80365BA4 00362AE4  EC 03 00 32 */	fmuls f0, f3, f0
/* 80365BA8 00362AE8  FC 00 00 1E */	fctiwz f0, f0
/* 80365BAC 00362AEC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80365BB0 00362AF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80365BB4 00362AF4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80365BB8 00362AF8  7C 43 04 2E */	lfsx f2, r3, r0
.L_80365BBC:
/* 80365BBC 00362AFC  C0 3F 02 BC */	lfs f1, 0x2bc(r31)
/* 80365BC0 00362B00  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365BC4 00362B04  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 80365BC8 00362B08  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80365BCC 00362B0C  D0 3F 02 BC */	stfs f1, 0x2bc(r31)
/* 80365BD0 00362B10  40 80 00 08 */	bge .L_80365BD8
/* 80365BD4 00362B14  FC 60 18 50 */	fneg f3, f3
.L_80365BD8:
/* 80365BD8 00362B18  C0 22 04 EC */	lfs f1, lbl_8051E84C@sda21(r2)
/* 80365BDC 00362B1C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80365BE0 00362B20  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80365BE4 00362B24  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 80365BE8 00362B28  EC 23 00 72 */	fmuls f1, f3, f1
/* 80365BEC 00362B2C  FC 20 08 1E */	fctiwz f1, f1
/* 80365BF0 00362B30  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 80365BF4 00362B34  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80365BF8 00362B38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80365BFC 00362B3C  7C 63 02 14 */	add r3, r3, r0
/* 80365C00 00362B40  C0 23 00 04 */	lfs f1, 4(r3)
/* 80365C04 00362B44  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 80365C08 00362B48  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_80365C0C:
/* 80365C0C 00362B4C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80365C10 00362B50  83 DF 00 C0 */	lwz r30, 0xc0(r31)
/* 80365C14 00362B54  28 04 00 00 */	cmplwi r4, 0
/* 80365C18 00362B58  C3 FF 02 BC */	lfs f31, 0x2bc(r31)
/* 80365C1C 00362B5C  C3 9F 02 C4 */	lfs f28, 0x2c4(r31)
/* 80365C20 00362B60  41 82 00 20 */	beq .L_80365C40
/* 80365C24 00362B64  81 84 00 00 */	lwz r12, 0(r4)
/* 80365C28 00362B68  38 61 00 14 */	addi r3, r1, 0x14
/* 80365C2C 00362B6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365C30 00362B70  7D 89 03 A6 */	mtctr r12
/* 80365C34 00362B74  4E 80 04 21 */	bctrl 
/* 80365C38 00362B78  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80365C3C 00362B7C  C3 81 00 1C */	lfs f28, 0x1c(r1)
.L_80365C40:
/* 80365C40 00362B80  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80365C44 00362B84  7F E4 FB 78 */	mr r4, r31
/* 80365C48 00362B88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365C4C 00362B8C  38 61 00 08 */	addi r3, r1, 8
/* 80365C50 00362B90  C0 42 05 00 */	lfs f2, lbl_8051E860@sda21(r2)
/* 80365C54 00362B94  C0 25 03 34 */	lfs f1, 0x334(r5)
/* 80365C58 00362B98  C0 05 03 0C */	lfs f0, 0x30c(r5)
/* 80365C5C 00362B9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80365C60 00362BA0  EF A2 00 72 */	fmuls f29, f2, f1
/* 80365C64 00362BA4  EF C2 00 32 */	fmuls f30, f2, f0
/* 80365C68 00362BA8  7D 89 03 A6 */	mtctr r12
/* 80365C6C 00362BAC  4E 80 04 21 */	bctrl 
/* 80365C70 00362BB0  C0 21 00 08 */	lfs f1, 8(r1)
/* 80365C74 00362BB4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80365C78 00362BB8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80365C7C 00362BBC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80365C80 00362BC0  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80365C84 00362BC4  EC 5C 00 28 */	fsubs f2, f28, f0
/* 80365C88 00362BC8  4B CC F4 81 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80365C8C 00362BCC  48 0A BF 45 */	bl roundAng__Ff
/* 80365C90 00362BD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365C94 00362BD4  FF E0 08 90 */	fmr f31, f1
/* 80365C98 00362BD8  7F E3 FB 78 */	mr r3, r31
/* 80365C9C 00362BDC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80365CA0 00362BE0  7D 89 03 A6 */	mtctr r12
/* 80365CA4 00362BE4  4E 80 04 21 */	bctrl 
/* 80365CA8 00362BE8  FC 40 08 90 */	fmr f2, f1
/* 80365CAC 00362BEC  FC 20 F8 90 */	fmr f1, f31
/* 80365CB0 00362BF0  48 0A BF 4D */	bl angDist__Fff
/* 80365CB4 00362BF4  FF E0 08 90 */	fmr f31, f1
/* 80365CB8 00362BF8  C0 02 04 D0 */	lfs f0, lbl_8051E830@sda21(r2)
/* 80365CBC 00362BFC  C0 22 04 CC */	lfs f1, lbl_8051E82C@sda21(r2)
/* 80365CC0 00362C00  EC 00 07 72 */	fmuls f0, f0, f29
/* 80365CC4 00362C04  EF BF 07 B2 */	fmuls f29, f31, f30
/* 80365CC8 00362C08  EC 21 00 32 */	fmuls f1, f1, f0
/* 80365CCC 00362C0C  FC 00 EA 10 */	fabs f0, f29
/* 80365CD0 00362C10  FC 00 00 18 */	frsp f0, f0
/* 80365CD4 00362C14  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80365CD8 00362C18  40 81 00 1C */	ble .L_80365CF4
/* 80365CDC 00362C1C  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365CE0 00362C20  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80365CE4 00362C24  40 81 00 0C */	ble .L_80365CF0
/* 80365CE8 00362C28  FF A0 08 90 */	fmr f29, f1
/* 80365CEC 00362C2C  48 00 00 08 */	b .L_80365CF4
.L_80365CF0:
/* 80365CF0 00362C30  FF A0 08 50 */	fneg f29, f1
.L_80365CF4:
/* 80365CF4 00362C34  7F E3 FB 78 */	mr r3, r31
/* 80365CF8 00362C38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80365CFC 00362C3C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80365D00 00362C40  7D 89 03 A6 */	mtctr r12
/* 80365D04 00362C44  4E 80 04 21 */	bctrl 
/* 80365D08 00362C48  EC 3D 08 2A */	fadds f1, f29, f1
/* 80365D0C 00362C4C  48 0A BE C5 */	bl roundAng__Ff
/* 80365D10 00362C50  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80365D14 00362C54  FC 60 FA 10 */	fabs f3, f31
/* 80365D18 00362C58  C0 22 04 D0 */	lfs f1, lbl_8051E830@sda21(r2)
/* 80365D1C 00362C5C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80365D20 00362C60  C0 42 04 CC */	lfs f2, lbl_8051E82C@sda21(r2)
/* 80365D24 00362C64  FC 60 18 18 */	frsp f3, f3
/* 80365D28 00362C68  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80365D2C 00362C6C  C0 1E 08 BC */	lfs f0, 0x8bc(r30)
/* 80365D30 00362C70  EC 01 00 32 */	fmuls f0, f1, f0
/* 80365D34 00362C74  EC 02 00 32 */	fmuls f0, f2, f0
/* 80365D38 00362C78  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80365D3C 00362C7C  40 80 00 0C */	bge .L_80365D48
/* 80365D40 00362C80  38 60 00 00 */	li r3, 0
/* 80365D44 00362C84  48 00 00 08 */	b .L_80365D4C
.L_80365D48:
/* 80365D48 00362C88  38 60 00 01 */	li r3, 1
.L_80365D4C:
/* 80365D4C 00362C8C  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80365D50 00362C90  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80365D54 00362C94  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80365D58 00362C98  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80365D5C 00362C9C  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80365D60 00362CA0  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80365D64 00362CA4  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80365D68 00362CA8  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80365D6C 00362CAC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80365D70 00362CB0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80365D74 00362CB4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80365D78 00362CB8  7C 08 03 A6 */	mtlr r0
/* 80365D7C 00362CBC  38 21 00 90 */	addi r1, r1, 0x90
/* 80365D80 00362CC0  4E 80 00 20 */	blr 
.endfn nextTargetTurnCheck__Q34Game6Miulin3ObjFv

.fn isNowCaution__Q34Game6Miulin3ObjFv, global
/* 80365D84 00362CC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80365D88 00362CC8  7C 08 02 A6 */	mflr r0
/* 80365D8C 00362CCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80365D90 00362CD0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80365D94 00362CD4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80365D98 00362CD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80365D9C 00362CDC  7C 7F 1B 78 */	mr r31, r3
/* 80365DA0 00362CE0  38 80 00 00 */	li r4, 0
/* 80365DA4 00362CE4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80365DA8 00362CE8  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 80365DAC 00362CEC  FC 20 F8 90 */	fmr f1, f31
/* 80365DB0 00362CF0  4B DA ED 11 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80365DB4 00362CF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365DB8 00362CF8  41 82 00 0C */	beq .L_80365DC4
/* 80365DBC 00362CFC  38 60 00 01 */	li r3, 1
/* 80365DC0 00362D00  48 00 00 28 */	b .L_80365DE8
.L_80365DC4:
/* 80365DC4 00362D04  FC 20 F8 90 */	fmr f1, f31
/* 80365DC8 00362D08  7F E3 FB 78 */	mr r3, r31
/* 80365DCC 00362D0C  38 80 00 00 */	li r4, 0
/* 80365DD0 00362D10  4B DA E9 65 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80365DD4 00362D14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365DD8 00362D18  41 82 00 0C */	beq .L_80365DE4
/* 80365DDC 00362D1C  38 60 00 01 */	li r3, 1
/* 80365DE0 00362D20  48 00 00 08 */	b .L_80365DE8
.L_80365DE4:
/* 80365DE4 00362D24  38 60 00 00 */	li r3, 0
.L_80365DE8:
/* 80365DE8 00362D28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365DEC 00362D2C  40 82 00 1C */	bne .L_80365E08
/* 80365DF0 00362D30  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80365DF4 00362D34  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80365DF8 00362D38  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80365DFC 00362D3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80365E00 00362D40  7C 00 00 26 */	mfcr r0
/* 80365E04 00362D44  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80365E08:
/* 80365E08 00362D48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80365E0C 00362D4C  41 82 00 14 */	beq .L_80365E20
/* 80365E10 00362D50  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365E14 00362D54  38 60 00 01 */	li r3, 1
/* 80365E18 00362D58  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 80365E1C 00362D5C  48 00 00 1C */	b .L_80365E38
.L_80365E20:
/* 80365E20 00362D60  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80365E24 00362D64  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 80365E28 00362D68  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80365E2C 00362D6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80365E30 00362D70  7C 00 00 26 */	mfcr r0
/* 80365E34 00362D74  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80365E38:
/* 80365E38 00362D78  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80365E3C 00362D7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80365E40 00362D80  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80365E44 00362D84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80365E48 00362D88  7C 08 03 A6 */	mtlr r0
/* 80365E4C 00362D8C  38 21 00 20 */	addi r1, r1, 0x20
/* 80365E50 00362D90  4E 80 00 20 */	blr 
.endfn isNowCaution__Q34Game6Miulin3ObjFv

.fn landEffect__Q34Game6Miulin3ObjFv, global
/* 80365E54 00362D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80365E58 00362D98  7C 08 02 A6 */	mflr r0
/* 80365E5C 00362D9C  C0 22 05 04 */	lfs f1, lbl_8051E864@sda21(r2)
/* 80365E60 00362DA0  38 83 01 8C */	addi r4, r3, 0x18c
/* 80365E64 00362DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80365E68 00362DA8  4B D9 DC E9 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80365E6C 00362DAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80365E70 00362DB0  7C 08 03 A6 */	mtlr r0
/* 80365E74 00362DB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80365E78 00362DB8  4E 80 00 20 */	blr 
.endfn landEffect__Q34Game6Miulin3ObjFv

.fn "attackEffect__Q34Game6Miulin3ObjFR10Vector3<f>", global
/* 80365E7C 00362DBC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80365E80 00362DC0  7C 08 02 A6 */	mflr r0
/* 80365E84 00362DC4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80365E88 00362DC8  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80365E8C 00362DCC  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80365E90 00362DD0  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80365E94 00362DD4  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80365E98 00362DD8  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80365E9C 00362DDC  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80365EA0 00362DE0  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80365EA4 00362DE4  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80365EA8 00362DE8  7C 7E 1B 78 */	mr r30, r3
/* 80365EAC 00362DEC  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80365EB0 00362DF0  C3 FE 01 8C */	lfs f31, 0x18c(r30)
/* 80365EB4 00362DF4  38 03 41 E4 */	addi r0, r3, "zero__10Vector3<f>"@l
/* 80365EB8 00362DF8  C3 DE 01 90 */	lfs f30, 0x190(r30)
/* 80365EBC 00362DFC  7C 9F 23 78 */	mr r31, r4
/* 80365EC0 00362E00  C3 BE 01 94 */	lfs f29, 0x194(r30)
/* 80365EC4 00362E04  7C 04 03 78 */	mr r4, r0
/* 80365EC8 00362E08  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 80365ECC 00362E0C  38 61 00 34 */	addi r3, r1, 0x34
/* 80365ED0 00362E10  C0 02 04 B8 */	lfs f0, lbl_8051E818@sda21(r2)
/* 80365ED4 00362E14  38 A1 00 28 */	addi r5, r1, 0x28
/* 80365ED8 00362E18  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80365EDC 00362E1C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80365EE0 00362E20  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80365EE4 00362E24  48 0C 29 A5 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 80365EE8 00362E28  7F E4 FB 78 */	mr r4, r31
/* 80365EEC 00362E2C  7F E5 FB 78 */	mr r5, r31
/* 80365EF0 00362E30  38 61 00 34 */	addi r3, r1, 0x34
/* 80365EF4 00362E34  4B D8 4C E5 */	bl PSMTXMultVec
/* 80365EF8 00362E38  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80365EFC 00362E3C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80365F00 00362E40  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80365F04 00362E44  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80365F08 00362E48  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80365F0C 00362E4C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 80365F10 00362E50  EF FF 10 2A */	fadds f31, f31, f2
/* 80365F14 00362E54  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 80365F18 00362E58  90 01 00 18 */	stw r0, 0x18(r1)
/* 80365F1C 00362E5C  EF DE 08 2A */	fadds f30, f30, f1
/* 80365F20 00362E60  38 C0 00 00 */	li r6, 0
/* 80365F24 00362E64  EF BD 00 2A */	fadds f29, f29, f0
/* 80365F28 00362E68  3C 80 80 4E */	lis r4, __vt__Q23efx10TMiuAttack@ha
/* 80365F2C 00362E6C  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80365F30 00362E70  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 80365F34 00362E74  39 00 01 F7 */	li r8, 0x1f7
/* 80365F38 00362E78  38 E0 01 F8 */	li r7, 0x1f8
/* 80365F3C 00362E7C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80365F40 00362E80  38 A4 25 C8 */	addi r5, r4, __vt__Q23efx10TMiuAttack@l
/* 80365F44 00362E84  38 61 00 18 */	addi r3, r1, 0x18
/* 80365F48 00362E88  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 80365F4C 00362E8C  38 81 00 08 */	addi r4, r1, 8
/* 80365F50 00362E90  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 80365F54 00362E94  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80365F58 00362E98  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80365F5C 00362E9C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80365F60 00362EA0  90 01 00 08 */	stw r0, 8(r1)
/* 80365F64 00362EA4  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 80365F68 00362EA8  D3 C1 00 10 */	stfs f30, 0x10(r1)
/* 80365F6C 00362EAC  D3 A1 00 14 */	stfs f29, 0x14(r1)
/* 80365F70 00362EB0  48 04 90 A5 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 80365F74 00362EB4  80 1E 02 80 */	lwz r0, 0x280(r30)
/* 80365F78 00362EB8  28 00 00 00 */	cmplwi r0, 0
/* 80365F7C 00362EBC  41 82 00 14 */	beq .L_80365F90
/* 80365F80 00362EC0  C0 22 05 08 */	lfs f1, lbl_8051E868@sda21(r2)
/* 80365F84 00362EC4  7F C3 F3 78 */	mr r3, r30
/* 80365F88 00362EC8  38 9E 01 8C */	addi r4, r30, 0x18c
/* 80365F8C 00362ECC  4B D9 DB C5 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_80365F90:
/* 80365F90 00362ED0  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80365F94 00362ED4  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80365F98 00362ED8  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80365F9C 00362EDC  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80365FA0 00362EE0  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80365FA4 00362EE4  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80365FA8 00362EE8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80365FAC 00362EEC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80365FB0 00362EF0  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80365FB4 00362EF4  7C 08 03 A6 */	mtlr r0
/* 80365FB8 00362EF8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80365FBC 00362EFC  4E 80 00 20 */	blr 
.endfn "attackEffect__Q34Game6Miulin3ObjFR10Vector3<f>"

.fn setInitialSetting__Q34Game6Miulin3ObjFPQ24Game21EnemyInitialParamBase, weak
/* 80365FC0 00362F00  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game6Miulin3ObjFPQ24Game21EnemyInitialParamBase

.fn "applyImpulse__Q34Game6Miulin3ObjFR10Vector3<f>R10Vector3<f>", weak
/* 80365FC4 00362F04  4E 80 00 20 */	blr 
.endfn "applyImpulse__Q34Game6Miulin3ObjFR10Vector3<f>R10Vector3<f>"

.fn getEnemyTypeID__Q34Game6Miulin3ObjFv, weak
/* 80365FC8 00362F08  38 60 00 36 */	li r3, 0x36
/* 80365FCC 00362F0C  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game6Miulin3ObjFv

.fn getDownSmokeScale__Q34Game6Miulin3ObjFv, weak
/* 80365FD0 00362F10  C0 22 05 0C */	lfs f1, lbl_8051E86C@sda21(r2)
/* 80365FD4 00362F14  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game6Miulin3ObjFv

.fn getGoalPos__Q34Game6Miulin3ObjFv, weak
/* 80365FD8 00362F18  C0 04 02 BC */	lfs f0, 0x2bc(r4)
/* 80365FDC 00362F1C  D0 03 00 00 */	stfs f0, 0(r3)
/* 80365FE0 00362F20  C0 04 02 C0 */	lfs f0, 0x2c0(r4)
/* 80365FE4 00362F24  D0 03 00 04 */	stfs f0, 4(r3)
/* 80365FE8 00362F28  C0 04 02 C4 */	lfs f0, 0x2c4(r4)
/* 80365FEC 00362F2C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80365FF0 00362F30  4E 80 00 20 */	blr 
.endfn getGoalPos__Q34Game6Miulin3ObjFv
