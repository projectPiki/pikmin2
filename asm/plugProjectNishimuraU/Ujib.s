.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80485358, local
	.asciz "ujinnko_o"
.endobj lbl_80485358

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx12TUjinkoPkate, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TUjinkoPkate
.obj __vt__Q23efx10TUjinkoEat, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10TUjinkoEat
.obj __vt__Q23efx9TUjinkoHd, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx9TUjinkoHd
.obj __vt__Q23efx9TUjinkoAp, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx9TUjinkoAp
.obj __vt__Q34Game4Ujib3Obj, global
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
	.4byte onInit__Q34Game4Ujib3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Ujib3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game4Ujib3ObjFv
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
	.4byte getShadowParam__Q34Game4Ujib3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Ujib3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Ujib3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Ujib3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Ujib3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game4Ujib3ObjFv
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
	.4byte getEnemyTypeID__Q34Game4Ujib3ObjFv
	.4byte getMouthSlots__Q34Game4Ujib3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game4Ujib3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game4Ujib3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte startCarcassMotion__Q34Game4Ujib3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Ujib3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game4Ujib3ObjFPQ34Game4Ujib3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@732@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@732@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game4Ujib3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AB30, local
	.asciz "kosijnt"
.endobj lbl_8051AB30
.balign 4
.obj lbl_8051AB38, local
	.float 2.5
.endobj lbl_8051AB38
.obj lbl_8051AB3C, local
	.float 0.0
.endobj lbl_8051AB3C
.obj lbl_8051AB40, local
	.float 1.0
.endobj lbl_8051AB40
.obj lbl_8051AB44, local
	.float 50.0
.endobj lbl_8051AB44
.obj lbl_8051AB48, local
	.float 15.0
.endobj lbl_8051AB48
.obj lbl_8051AB4C, local
	.float 8.0
.endobj lbl_8051AB4C
.balign 4
.obj lbl_8051AB50, local
	.asciz "kamujnt"
.endobj lbl_8051AB50
.balign 4
.obj lbl_8051AB58, local
	.float 2.0
.endobj lbl_8051AB58
.obj lbl_8051AB5C, local
	.float 30.0
.endobj lbl_8051AB5C
.obj lbl_8051AB60, local
	.float 32768.0
.endobj lbl_8051AB60
.balign 8
.obj lbl_8051AB68, local
	.8byte 0x4330000080000000
.endobj lbl_8051AB68
.obj lbl_8051AB70, local
	.float 20.0
.endobj lbl_8051AB70
.obj lbl_8051AB74, local
	.float 0.5
.endobj lbl_8051AB74
.obj lbl_8051AB78, local
	.float 5.0
.endobj lbl_8051AB78
.obj lbl_8051AB7C, local
	.float -20.0
.endobj lbl_8051AB7C
.obj lbl_8051AB80, local
	.float 250.0
.endobj lbl_8051AB80
.obj lbl_8051AB84, local
	.float 0.75
.endobj lbl_8051AB84
.obj lbl_8051AB88, local # pi
	.float 3.1415927
.endobj lbl_8051AB88
.obj lbl_8051AB8C, local
	.float 0.0055555557
.endobj lbl_8051AB8C
.obj lbl_8051AB90, local
	.float 0.7
.endobj lbl_8051AB90
.obj lbl_8051AB94, local
	.float 0.35
.endobj lbl_8051AB94

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game4Ujib3ObjFv, global
/* 80259B4C 00256A8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259B50 00256A90  7C 08 02 A6 */	mflr r0
/* 80259B54 00256A94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259B58 00256A98  7C 80 07 35 */	extsh. r0, r4
/* 80259B5C 00256A9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259B60 00256AA0  7C 7F 1B 78 */	mr r31, r3
/* 80259B64 00256AA4  93 C1 00 08 */	stw r30, 8(r1)
/* 80259B68 00256AA8  41 82 00 24 */	beq .L_80259B8C
/* 80259B6C 00256AAC  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 80259B70 00256AB0  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80259B74 00256AB4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80259B78 00256AB8  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80259B7C 00256ABC  38 00 00 00 */	li r0, 0
/* 80259B80 00256AC0  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 80259B84 00256AC4  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 80259B88 00256AC8  90 1F 02 E4 */	stw r0, 0x2e4(r31)
.L_80259B8C:
/* 80259B8C 00256ACC  7F E3 FB 78 */	mr r3, r31
/* 80259B90 00256AD0  38 80 00 00 */	li r4, 0
/* 80259B94 00256AD4  4B EA 78 0D */	bl __ct__Q24Game9EnemyBaseFv
/* 80259B98 00256AD8  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib3Obj@ha
/* 80259B9C 00256ADC  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 80259BA0 00256AE0  38 A3 29 48 */	addi r5, r3, __vt__Q34Game4Ujib3Obj@l
/* 80259BA4 00256AE4  38 7F 02 C8 */	addi r3, r31, 0x2c8
/* 80259BA8 00256AE8  90 BF 00 00 */	stw r5, 0(r31)
/* 80259BAC 00256AEC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80259BB0 00256AF0  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 80259BB4 00256AF4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80259BB8 00256AF8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80259BBC 00256AFC  90 A4 00 00 */	stw r5, 0(r4)
/* 80259BC0 00256B00  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80259BC4 00256B04  7C 04 00 50 */	subf r0, r4, r0
/* 80259BC8 00256B08  90 04 00 0C */	stw r0, 0xc(r4)
/* 80259BCC 00256B0C  4B ED E9 7D */	bl __ct__10MouthSlotsFv
/* 80259BD0 00256B10  38 60 00 2C */	li r3, 0x2c
/* 80259BD4 00256B14  4B DC A2 D1 */	bl __nw__FUl
/* 80259BD8 00256B18  7C 7E 1B 79 */	or. r30, r3, r3
/* 80259BDC 00256B1C  41 82 00 44 */	beq .L_80259C20
/* 80259BE0 00256B20  4B EC DD 95 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80259BE4 00256B24  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib14ProperAnimator@ha
/* 80259BE8 00256B28  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80259BEC 00256B2C  38 03 2E 98 */	addi r0, r3, __vt__Q34Game4Ujib14ProperAnimator@l
/* 80259BF0 00256B30  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80259BF4 00256B34  90 1E 00 00 */	stw r0, 0(r30)
/* 80259BF8 00256B38  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80259BFC 00256B3C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80259C00 00256B40  38 00 00 00 */	li r0, 0
/* 80259C04 00256B44  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80259C08 00256B48  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80259C0C 00256B4C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80259C10 00256B50  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80259C14 00256B54  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80259C18 00256B58  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80259C1C 00256B5C  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80259C20:
/* 80259C20 00256B60  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80259C24 00256B64  38 60 00 1C */	li r3, 0x1c
/* 80259C28 00256B68  4B DC A2 7D */	bl __nw__FUl
/* 80259C2C 00256B6C  7C 64 1B 79 */	or. r4, r3, r3
/* 80259C30 00256B70  41 82 00 24 */	beq .L_80259C54
/* 80259C34 00256B74  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80259C38 00256B78  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib3FSM@ha
/* 80259C3C 00256B7C  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80259C40 00256B80  38 A0 FF FF */	li r5, -1
/* 80259C44 00256B84  90 04 00 00 */	stw r0, 0(r4)
/* 80259C48 00256B88  38 03 2E 70 */	addi r0, r3, __vt__Q34Game4Ujib3FSM@l
/* 80259C4C 00256B8C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80259C50 00256B90  90 04 00 00 */	stw r0, 0(r4)
.L_80259C54:
/* 80259C54 00256B94  81 9F 00 00 */	lwz r12, 0(r31)
/* 80259C58 00256B98  7F E3 FB 78 */	mr r3, r31
/* 80259C5C 00256B9C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 80259C60 00256BA0  7D 89 03 A6 */	mtctr r12
/* 80259C64 00256BA4  4E 80 04 21 */	bctrl 
/* 80259C68 00256BA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259C6C 00256BAC  7F E3 FB 78 */	mr r3, r31
/* 80259C70 00256BB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259C74 00256BB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80259C78 00256BB8  7C 08 03 A6 */	mtlr r0
/* 80259C7C 00256BBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80259C80 00256BC0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Ujib3ObjFv

.fn setInitialSetting__Q34Game4Ujib3ObjFPQ24Game21EnemyInitialParamBase, global
/* 80259C84 00256BC4  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game4Ujib3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game4Ujib3ObjFPQ24Game15CreatureInitArg, global
/* 80259C88 00256BC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259C8C 00256BCC  7C 08 02 A6 */	mflr r0
/* 80259C90 00256BD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259C94 00256BD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259C98 00256BD8  7C 7F 1B 78 */	mr r31, r3
/* 80259C9C 00256BDC  4B EA 7D BD */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80259CA0 00256BE0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80259CA4 00256BE4  7F E3 FB 78 */	mr r3, r31
/* 80259CA8 00256BE8  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80259CAC 00256BEC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80259CB0 00256BF0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80259CB4 00256BF4  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80259CB8 00256BF8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80259CBC 00256BFC  48 00 03 9D */	bl resetAppearCheck__Q34Game4Ujib3ObjFv
/* 80259CC0 00256C00  38 60 00 00 */	li r3, 0
/* 80259CC4 00256C04  38 00 FF FF */	li r0, -1
/* 80259CC8 00256C08  98 7F 02 C1 */	stb r3, 0x2c1(r31)
/* 80259CCC 00256C0C  7F E3 FB 78 */	mr r3, r31
/* 80259CD0 00256C10  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80259CD4 00256C14  48 00 04 81 */	bl resetBridgeSearch__Q34Game4Ujib3ObjFv
/* 80259CD8 00256C18  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80259CDC 00256C1C  7F E4 FB 78 */	mr r4, r31
/* 80259CE0 00256C20  38 A0 00 02 */	li r5, 2
/* 80259CE4 00256C24  38 C0 00 00 */	li r6, 0
/* 80259CE8 00256C28  81 83 00 00 */	lwz r12, 0(r3)
/* 80259CEC 00256C2C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80259CF0 00256C30  7D 89 03 A6 */	mtctr r12
/* 80259CF4 00256C34  4E 80 04 21 */	bctrl 
/* 80259CF8 00256C38  7F E3 FB 78 */	mr r3, r31
/* 80259CFC 00256C3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80259D00 00256C40  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80259D04 00256C44  7D 89 03 A6 */	mtctr r12
/* 80259D08 00256C48  4E 80 04 21 */	bctrl 
/* 80259D0C 00256C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259D10 00256C50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259D14 00256C54  7C 08 03 A6 */	mtlr r0
/* 80259D18 00256C58  38 21 00 10 */	addi r1, r1, 0x10
/* 80259D1C 00256C5C  4E 80 00 20 */	blr 
.endfn onInit__Q34Game4Ujib3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game4Ujib3ObjFv, global
/* 80259D20 00256C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259D24 00256C64  7C 08 02 A6 */	mflr r0
/* 80259D28 00256C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259D2C 00256C6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259D30 00256C70  7C 7F 1B 78 */	mr r31, r3
/* 80259D34 00256C74  7F E4 FB 78 */	mr r4, r31
/* 80259D38 00256C78  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80259D3C 00256C7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80259D40 00256C80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80259D44 00256C84  7D 89 03 A6 */	mtctr r12
/* 80259D48 00256C88  4E 80 04 21 */	bctrl 
/* 80259D4C 00256C8C  38 7F 02 C8 */	addi r3, r31, 0x2c8
/* 80259D50 00256C90  4B ED E8 DD */	bl update__10MouthSlotsFv
/* 80259D54 00256C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259D58 00256C98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259D5C 00256C9C  7C 08 03 A6 */	mtlr r0
/* 80259D60 00256CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80259D64 00256CA4  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game4Ujib3ObjFv

.fn doDirectDraw__Q34Game4Ujib3ObjFR8Graphics, global
/* 80259D68 00256CA8  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game4Ujib3ObjFR8Graphics

.fn doDebugDraw__Q34Game4Ujib3ObjFR8Graphics, global
/* 80259D6C 00256CAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259D70 00256CB0  7C 08 02 A6 */	mflr r0
/* 80259D74 00256CB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259D78 00256CB8  4B EA C0 F5 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80259D7C 00256CBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259D80 00256CC0  7C 08 03 A6 */	mtlr r0
/* 80259D84 00256CC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80259D88 00256CC8  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game4Ujib3ObjFR8Graphics

.fn setFSM__Q34Game4Ujib3ObjFPQ34Game4Ujib3FSM, global
/* 80259D8C 00256CCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259D90 00256CD0  7C 08 02 A6 */	mflr r0
/* 80259D94 00256CD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259D98 00256CD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259D9C 00256CDC  7C 7F 1B 78 */	mr r31, r3
/* 80259DA0 00256CE0  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80259DA4 00256CE4  7F E4 FB 78 */	mr r4, r31
/* 80259DA8 00256CE8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80259DAC 00256CEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80259DB0 00256CF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80259DB4 00256CF4  7D 89 03 A6 */	mtctr r12
/* 80259DB8 00256CF8  4E 80 04 21 */	bctrl 
/* 80259DBC 00256CFC  38 00 00 00 */	li r0, 0
/* 80259DC0 00256D00  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80259DC4 00256D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259DC8 00256D08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259DCC 00256D0C  7C 08 03 A6 */	mtlr r0
/* 80259DD0 00256D10  38 21 00 10 */	addi r1, r1, 0x10
/* 80259DD4 00256D14  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game4Ujib3ObjFPQ34Game4Ujib3FSM

.fn getShadowParam__Q34Game4Ujib3ObjFRQ24Game11ShadowParam, global
/* 80259DD8 00256D18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259DDC 00256D1C  7C 08 02 A6 */	mflr r0
/* 80259DE0 00256D20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259DE4 00256D24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259DE8 00256D28  7C 9F 23 78 */	mr r31, r4
/* 80259DEC 00256D2C  38 82 C7 D0 */	addi r4, r2, lbl_8051AB30@sda21
/* 80259DF0 00256D30  93 C1 00 08 */	stw r30, 8(r1)
/* 80259DF4 00256D34  7C 7E 1B 78 */	mr r30, r3
/* 80259DF8 00256D38  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80259DFC 00256D3C  48 1E 51 E9 */	bl getJoint__Q28SysShape5ModelFPc
/* 80259E00 00256D40  48 1C FA A1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80259E04 00256D44  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 80259E08 00256D48  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80259E0C 00256D4C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80259E10 00256D50  C0 42 C7 D8 */	lfs f2, lbl_8051AB38@sda21(r2)
/* 80259E14 00256D54  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80259E18 00256D58  C0 22 C7 DC */	lfs f1, lbl_8051AB3C@sda21(r2)
/* 80259E1C 00256D5C  D0 7F 00 04 */	stfs f3, 4(r31)
/* 80259E20 00256D60  C0 02 C7 E0 */	lfs f0, lbl_8051AB40@sda21(r2)
/* 80259E24 00256D64  D0 9F 00 08 */	stfs f4, 8(r31)
/* 80259E28 00256D68  C0 7F 00 04 */	lfs f3, 4(r31)
/* 80259E2C 00256D6C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80259E30 00256D70  D0 5F 00 04 */	stfs f2, 4(r31)
/* 80259E34 00256D74  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80259E38 00256D78  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80259E3C 00256D7C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80259E40 00256D80  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80259E44 00256D84  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80259E48 00256D88  41 82 00 10 */	beq .L_80259E58
/* 80259E4C 00256D8C  C0 02 C7 E4 */	lfs f0, lbl_8051AB44@sda21(r2)
/* 80259E50 00256D90  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80259E54 00256D94  48 00 00 0C */	b .L_80259E60
.L_80259E58:
/* 80259E58 00256D98  C0 02 C7 E8 */	lfs f0, lbl_8051AB48@sda21(r2)
/* 80259E5C 00256D9C  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80259E60:
/* 80259E60 00256DA0  C0 02 C7 EC */	lfs f0, lbl_8051AB4C@sda21(r2)
/* 80259E64 00256DA4  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80259E68 00256DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259E6C 00256DAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259E70 00256DB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80259E74 00256DB4  7C 08 03 A6 */	mtlr r0
/* 80259E78 00256DB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80259E7C 00256DBC  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game4Ujib3ObjFRQ24Game11ShadowParam

.fn pressCallBack__Q34Game4Ujib3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80259E80 00256DC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259E84 00256DC4  7C 08 02 A6 */	mflr r0
/* 80259E88 00256DC8  28 04 00 00 */	cmplwi r4, 0
/* 80259E8C 00256DCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259E90 00256DD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259E94 00256DD4  7C 7F 1B 78 */	mr r31, r3
/* 80259E98 00256DD8  41 82 00 64 */	beq .L_80259EFC
/* 80259E9C 00256DDC  7C 83 23 78 */	mr r3, r4
/* 80259EA0 00256DE0  81 84 00 00 */	lwz r12, 0(r4)
/* 80259EA4 00256DE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80259EA8 00256DE8  7D 89 03 A6 */	mtctr r12
/* 80259EAC 00256DEC  4E 80 04 21 */	bctrl 
/* 80259EB0 00256DF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80259EB4 00256DF4  41 82 00 48 */	beq .L_80259EFC
/* 80259EB8 00256DF8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80259EBC 00256DFC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80259EC0 00256E00  40 82 00 3C */	bne .L_80259EFC
/* 80259EC4 00256E04  7F E3 FB 78 */	mr r3, r31
/* 80259EC8 00256E08  4B EA D5 2D */	bl getStateID__Q24Game9EnemyBaseFv
/* 80259ECC 00256E0C  2C 03 00 04 */	cmpwi r3, 4
/* 80259ED0 00256E10  40 81 00 2C */	ble .L_80259EFC
/* 80259ED4 00256E14  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80259ED8 00256E18  7F E4 FB 78 */	mr r4, r31
/* 80259EDC 00256E1C  38 A0 00 01 */	li r5, 1
/* 80259EE0 00256E20  38 C0 00 00 */	li r6, 0
/* 80259EE4 00256E24  81 83 00 00 */	lwz r12, 0(r3)
/* 80259EE8 00256E28  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80259EEC 00256E2C  7D 89 03 A6 */	mtctr r12
/* 80259EF0 00256E30  4E 80 04 21 */	bctrl 
/* 80259EF4 00256E34  38 60 00 01 */	li r3, 1
/* 80259EF8 00256E38  48 00 00 08 */	b .L_80259F00
.L_80259EFC:
/* 80259EFC 00256E3C  38 60 00 00 */	li r3, 0
.L_80259F00:
/* 80259F00 00256E40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259F04 00256E44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259F08 00256E48  7C 08 03 A6 */	mtlr r0
/* 80259F0C 00256E4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80259F10 00256E50  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game4Ujib3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game4Ujib3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80259F14 00256E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259F18 00256E58  7C 08 02 A6 */	mflr r0
/* 80259F1C 00256E5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259F20 00256E60  81 83 00 00 */	lwz r12, 0(r3)
/* 80259F24 00256E64  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 80259F28 00256E68  7D 89 03 A6 */	mtctr r12
/* 80259F2C 00256E6C  4E 80 04 21 */	bctrl 
/* 80259F30 00256E70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259F34 00256E74  7C 08 03 A6 */	mtlr r0
/* 80259F38 00256E78  38 21 00 10 */	addi r1, r1, 0x10
/* 80259F3C 00256E7C  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game4Ujib3ObjFPQ24Game8CreaturefP8CollPart

.fn startCarcassMotion__Q34Game4Ujib3ObjFv, global
/* 80259F40 00256E80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259F44 00256E84  7C 08 02 A6 */	mflr r0
/* 80259F48 00256E88  38 80 00 08 */	li r4, 8
/* 80259F4C 00256E8C  38 A0 00 00 */	li r5, 0
/* 80259F50 00256E90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259F54 00256E94  4B EA B0 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80259F58 00256E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259F5C 00256E9C  7C 08 03 A6 */	mtlr r0
/* 80259F60 00256EA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80259F64 00256EA4  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game4Ujib3ObjFv

.fn initMouthSlots__Q34Game4Ujib3ObjFv, global
/* 80259F68 00256EA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80259F6C 00256EAC  7C 08 02 A6 */	mflr r0
/* 80259F70 00256EB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80259F74 00256EB4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80259F78 00256EB8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80259F7C 00256EBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80259F80 00256EC0  93 C1 00 08 */	stw r30, 8(r1)
/* 80259F84 00256EC4  7C 7E 1B 78 */	mr r30, r3
/* 80259F88 00256EC8  38 80 00 01 */	li r4, 1
/* 80259F8C 00256ECC  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 80259F90 00256ED0  4B ED E5 C9 */	bl alloc__10MouthSlotsFi
/* 80259F94 00256ED4  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80259F98 00256ED8  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 80259F9C 00256EDC  38 80 00 00 */	li r4, 0
/* 80259FA0 00256EE0  38 C2 C7 F0 */	addi r6, r2, lbl_8051AB50@sda21
/* 80259FA4 00256EE4  4B ED E6 ED */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80259FA8 00256EE8  C3 E2 C7 E8 */	lfs f31, lbl_8051AB48@sda21(r2)
/* 80259FAC 00256EEC  3B E0 00 00 */	li r31, 0
/* 80259FB0 00256EF0  48 00 00 18 */	b .L_80259FC8
.L_80259FB4:
/* 80259FB4 00256EF4  7F E4 FB 78 */	mr r4, r31
/* 80259FB8 00256EF8  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 80259FBC 00256EFC  4B ED E7 BD */	bl getSlot__10MouthSlotsFi
/* 80259FC0 00256F00  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 80259FC4 00256F04  3B FF 00 01 */	addi r31, r31, 1
.L_80259FC8:
/* 80259FC8 00256F08  80 1E 02 C8 */	lwz r0, 0x2c8(r30)
/* 80259FCC 00256F0C  7C 1F 00 00 */	cmpw r31, r0
/* 80259FD0 00256F10  41 80 FF E4 */	blt .L_80259FB4
/* 80259FD4 00256F14  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80259FD8 00256F18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80259FDC 00256F1C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80259FE0 00256F20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80259FE4 00256F24  83 C1 00 08 */	lwz r30, 8(r1)
/* 80259FE8 00256F28  7C 08 03 A6 */	mtlr r0
/* 80259FEC 00256F2C  38 21 00 20 */	addi r1, r1, 0x20
/* 80259FF0 00256F30  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game4Ujib3ObjFv

.fn lifeIncrement__Q34Game4Ujib3ObjFv, global
/* 80259FF4 00256F34  C0 22 C7 DC */	lfs f1, lbl_8051AB3C@sda21(r2)
/* 80259FF8 00256F38  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 80259FFC 00256F3C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8025A000 00256F40  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8025A004 00256F44  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8025A008 00256F48  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 8025A00C 00256F4C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8025A010 00256F50  4C 40 13 82 */	cror 2, 0, 2
/* 8025A014 00256F54  4C 82 00 20 */	bnelr 
/* 8025A018 00256F58  C0 02 C7 E0 */	lfs f0, lbl_8051AB40@sda21(r2)
/* 8025A01C 00256F5C  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8025A020 00256F60  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game4Ujib3ObjFv

.fn setInWaterDamage__Q34Game4Ujib3ObjFv, global
/* 8025A024 00256F64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025A028 00256F68  7C 08 02 A6 */	mflr r0
/* 8025A02C 00256F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025A030 00256F70  80 03 02 80 */	lwz r0, 0x280(r3)
/* 8025A034 00256F74  28 00 00 00 */	cmplwi r0, 0
/* 8025A038 00256F78  41 82 00 10 */	beq .L_8025A048
/* 8025A03C 00256F7C  C0 22 C7 F8 */	lfs f1, lbl_8051AB58@sda21(r2)
/* 8025A040 00256F80  C0 42 C7 E0 */	lfs f2, lbl_8051AB40@sda21(r2)
/* 8025A044 00256F84  4B EA BF E9 */	bl addDamage__Q24Game9EnemyBaseFff
.L_8025A048:
/* 8025A048 00256F88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025A04C 00256F8C  7C 08 03 A6 */	mtlr r0
/* 8025A050 00256F90  38 21 00 10 */	addi r1, r1, 0x10
/* 8025A054 00256F94  4E 80 00 20 */	blr 
.endfn setInWaterDamage__Q34Game4Ujib3ObjFv

.fn resetAppearCheck__Q34Game4Ujib3ObjFv, global
/* 8025A058 00256F98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025A05C 00256F9C  7C 08 02 A6 */	mflr r0
/* 8025A060 00256FA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025A064 00256FA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025A068 00256FA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8025A06C 00256FAC  7C 7E 1B 78 */	mr r30, r3
/* 8025A070 00256FB0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8025A074 00256FB4  28 04 00 00 */	cmplwi r4, 0
/* 8025A078 00256FB8  41 82 00 74 */	beq .L_8025A0EC
/* 8025A07C 00256FBC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8025A080 00256FC0  2C 00 00 04 */	cmpwi r0, 4
/* 8025A084 00256FC4  40 82 00 68 */	bne .L_8025A0EC
/* 8025A088 00256FC8  4B E6 F5 19 */	bl rand
/* 8025A08C 00256FCC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025A090 00256FD0  3C 00 43 30 */	lis r0, 0x4330
/* 8025A094 00256FD4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025A098 00256FD8  7F C3 F3 78 */	mr r3, r30
/* 8025A09C 00256FDC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025A0A0 00256FE0  90 01 00 08 */	stw r0, 8(r1)
/* 8025A0A4 00256FE4  C8 42 C8 08 */	lfd f2, lbl_8051AB68@sda21(r2)
/* 8025A0A8 00256FE8  C8 01 00 08 */	lfd f0, 8(r1)
/* 8025A0AC 00256FEC  C0 22 C8 00 */	lfs f1, lbl_8051AB60@sda21(r2)
/* 8025A0B0 00256FF0  EC 40 10 28 */	fsubs f2, f0, f2
/* 8025A0B4 00256FF4  C0 02 C7 FC */	lfs f0, lbl_8051AB5C@sda21(r2)
/* 8025A0B8 00256FF8  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8025A0BC 00256FFC  EC 22 08 24 */	fdivs f1, f2, f1
/* 8025A0C0 00257000  EC 00 00 72 */	fmuls f0, f0, f1
/* 8025A0C4 00257004  FC 00 00 1E */	fctiwz f0, f0
/* 8025A0C8 00257008  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8025A0CC 0025700C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8025A0D0 00257010  7D 89 03 A6 */	mtctr r12
/* 8025A0D4 00257014  4E 80 04 21 */	bctrl 
/* 8025A0D8 00257018  1C 03 00 05 */	mulli r0, r3, 5
/* 8025A0DC 0025701C  7C 1F 02 14 */	add r0, r31, r0
/* 8025A0E0 00257020  54 00 44 2E */	rlwinm r0, r0, 8, 0x10, 0x17
/* 8025A0E4 00257024  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
/* 8025A0E8 00257028  48 00 00 0C */	b .L_8025A0F4
.L_8025A0EC:
/* 8025A0EC 0025702C  38 00 00 00 */	li r0, 0
/* 8025A0F0 00257030  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
.L_8025A0F4:
/* 8025A0F4 00257034  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025A0F8 00257038  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025A0FC 0025703C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8025A100 00257040  7C 08 03 A6 */	mtlr r0
/* 8025A104 00257044  38 21 00 20 */	addi r1, r1, 0x20
/* 8025A108 00257048  4E 80 00 20 */	blr 
.endfn resetAppearCheck__Q34Game4Ujib3ObjFv

.fn isAppearCheck__Q34Game4Ujib3ObjFv, global
/* 8025A10C 0025704C  A0 83 02 C2 */	lhz r4, 0x2c2(r3)
/* 8025A110 00257050  28 04 00 00 */	cmplwi r4, 0
/* 8025A114 00257054  41 82 00 38 */	beq .L_8025A14C
/* 8025A118 00257058  38 04 00 01 */	addi r0, r4, 1
/* 8025A11C 0025705C  B0 03 02 C2 */	sth r0, 0x2c2(r3)
/* 8025A120 00257060  A0 03 02 C2 */	lhz r0, 0x2c2(r3)
/* 8025A124 00257064  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8025A128 00257068  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8025A12C 0025706C  7C 04 00 00 */	cmpw r4, r0
/* 8025A130 00257070  40 81 00 14 */	ble .L_8025A144
/* 8025A134 00257074  38 00 00 00 */	li r0, 0
/* 8025A138 00257078  B0 03 02 C2 */	sth r0, 0x2c2(r3)
/* 8025A13C 0025707C  38 60 00 01 */	li r3, 1
/* 8025A140 00257080  4E 80 00 20 */	blr 
.L_8025A144:
/* 8025A144 00257084  38 60 00 00 */	li r3, 0
/* 8025A148 00257088  4E 80 00 20 */	blr 
.L_8025A14C:
/* 8025A14C 0025708C  38 60 00 01 */	li r3, 1
/* 8025A150 00257090  4E 80 00 20 */	blr 
.endfn isAppearCheck__Q34Game4Ujib3ObjFv

.fn resetBridgeSearch__Q34Game4Ujib3ObjFv, global
/* 8025A154 00257094  38 80 00 01 */	li r4, 1
/* 8025A158 00257098  38 00 00 00 */	li r0, 0
/* 8025A15C 0025709C  98 83 02 C0 */	stb r4, 0x2c0(r3)
/* 8025A160 002570A0  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025A164 002570A4  90 03 02 D0 */	stw r0, 0x2d0(r3)
/* 8025A168 002570A8  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 8025A16C 002570AC  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 8025A170 002570B0  4E 80 00 20 */	blr 
.endfn resetBridgeSearch__Q34Game4Ujib3ObjFv

.fn setBridgeSearch__Q34Game4Ujib3ObjFv, global
/* 8025A174 002570B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025A178 002570B8  7C 08 02 A6 */	mflr r0
/* 8025A17C 002570BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025A180 002570C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025A184 002570C4  7C 7F 1B 78 */	mr r31, r3
/* 8025A188 002570C8  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 8025A18C 002570CC  28 00 00 00 */	cmplwi r0, 0
/* 8025A190 002570D0  41 82 00 18 */	beq .L_8025A1A8
/* 8025A194 002570D4  38 00 00 00 */	li r0, 0
/* 8025A198 002570D8  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8025A19C 002570DC  48 00 00 21 */	bl setNearestBridge__Q34Game4Ujib3ObjFv
/* 8025A1A0 002570E0  7F E3 FB 78 */	mr r3, r31
/* 8025A1A4 002570E4  48 00 02 D9 */	bl setCullingCheck__Q34Game4Ujib3ObjFv
.L_8025A1A8:
/* 8025A1A8 002570E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025A1AC 002570EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025A1B0 002570F0  7C 08 03 A6 */	mtlr r0
/* 8025A1B4 002570F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025A1B8 002570F8  4E 80 00 20 */	blr 
.endfn setBridgeSearch__Q34Game4Ujib3ObjFv

.fn setNearestBridge__Q34Game4Ujib3ObjFv, global
/* 8025A1BC 002570FC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8025A1C0 00257100  7C 08 02 A6 */	mflr r0
/* 8025A1C4 00257104  90 01 00 54 */	stw r0, 0x54(r1)
/* 8025A1C8 00257108  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8025A1CC 0025710C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8025A1D0 00257110  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8025A1D4 00257114  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8025A1D8 00257118  7C 7F 1B 78 */	mr r31, r3
/* 8025A1DC 0025711C  38 00 00 00 */	li r0, 0
/* 8025A1E0 00257120  90 03 02 D0 */	stw r0, 0x2d0(r3)
/* 8025A1E4 00257124  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025A1E8 00257128  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 8025A1EC 0025712C  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 8025A1F0 00257130  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 8025A1F4 00257134  28 03 00 00 */	cmplwi r3, 0
/* 8025A1F8 00257138  41 82 02 14 */	beq .L_8025A40C
/* 8025A1FC 0025713C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025A200 00257140  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 8025A204 00257144  EF E0 00 32 */	fmuls f31, f0, f0
/* 8025A208 00257148  41 82 00 08 */	beq .L_8025A210
/* 8025A20C 0025714C  38 63 00 30 */	addi r3, r3, 0x30
.L_8025A210:
/* 8025A210 00257150  38 00 00 00 */	li r0, 0
/* 8025A214 00257154  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8025A218 00257158  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8025A21C 0025715C  90 01 00 20 */	stw r0, 0x20(r1)
/* 8025A220 00257160  28 00 00 00 */	cmplwi r0, 0
/* 8025A224 00257164  90 81 00 14 */	stw r4, 0x14(r1)
/* 8025A228 00257168  90 01 00 18 */	stw r0, 0x18(r1)
/* 8025A22C 0025716C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8025A230 00257170  40 82 00 1C */	bne .L_8025A24C
/* 8025A234 00257174  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A238 00257178  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8025A23C 0025717C  7D 89 03 A6 */	mtctr r12
/* 8025A240 00257180  4E 80 04 21 */	bctrl 
/* 8025A244 00257184  90 61 00 18 */	stw r3, 0x18(r1)
/* 8025A248 00257188  48 00 01 A4 */	b .L_8025A3EC
.L_8025A24C:
/* 8025A24C 0025718C  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A250 00257190  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8025A254 00257194  7D 89 03 A6 */	mtctr r12
/* 8025A258 00257198  4E 80 04 21 */	bctrl 
/* 8025A25C 0025719C  90 61 00 18 */	stw r3, 0x18(r1)
/* 8025A260 002571A0  48 00 00 58 */	b .L_8025A2B8
.L_8025A264:
/* 8025A264 002571A4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A268 002571A8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A26C 002571AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A270 002571B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8025A274 002571B4  7D 89 03 A6 */	mtctr r12
/* 8025A278 002571B8  4E 80 04 21 */	bctrl 
/* 8025A27C 002571BC  7C 64 1B 78 */	mr r4, r3
/* 8025A280 002571C0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8025A284 002571C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A288 002571C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025A28C 002571CC  7D 89 03 A6 */	mtctr r12
/* 8025A290 002571D0  4E 80 04 21 */	bctrl 
/* 8025A294 002571D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025A298 002571D8  40 82 01 54 */	bne .L_8025A3EC
/* 8025A29C 002571DC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A2A0 002571E0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A2A4 002571E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A2A8 002571E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025A2AC 002571EC  7D 89 03 A6 */	mtctr r12
/* 8025A2B0 002571F0  4E 80 04 21 */	bctrl 
/* 8025A2B4 002571F4  90 61 00 18 */	stw r3, 0x18(r1)
.L_8025A2B8:
/* 8025A2B8 002571F8  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8025A2BC 002571FC  38 61 00 14 */	addi r3, r1, 0x14
/* 8025A2C0 00257200  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8025A2C4 00257204  7D 89 03 A6 */	mtctr r12
/* 8025A2C8 00257208  4E 80 04 21 */	bctrl 
/* 8025A2CC 0025720C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025A2D0 00257210  41 82 FF 94 */	beq .L_8025A264
/* 8025A2D4 00257214  48 00 01 18 */	b .L_8025A3EC
.L_8025A2D8:
/* 8025A2D8 00257218  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A2DC 0025721C  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A2E0 00257220  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8025A2E4 00257224  7D 89 03 A6 */	mtctr r12
/* 8025A2E8 00257228  4E 80 04 21 */	bctrl 
/* 8025A2EC 0025722C  7C 60 1B 78 */	mr r0, r3
/* 8025A2F0 00257230  38 61 00 08 */	addi r3, r1, 8
/* 8025A2F4 00257234  7C 1E 03 78 */	mr r30, r0
/* 8025A2F8 00257238  7F C4 F3 78 */	mr r4, r30
/* 8025A2FC 0025723C  4B F9 4C 39 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8025A300 00257240  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8025A304 00257244  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8025A308 00257248  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8025A30C 0025724C  EC 21 00 28 */	fsubs f1, f1, f0
/* 8025A310 00257250  C0 01 00 08 */	lfs f0, 8(r1)
/* 8025A314 00257254  EC 42 00 28 */	fsubs f2, f2, f0
/* 8025A318 00257258  EC 01 00 72 */	fmuls f0, f1, f1
/* 8025A31C 0025725C  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 8025A320 00257260  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8025A324 00257264  40 80 00 0C */	bge .L_8025A330
/* 8025A328 00257268  93 DF 02 D0 */	stw r30, 0x2d0(r31)
/* 8025A32C 0025726C  FF E0 00 90 */	fmr f31, f0
.L_8025A330:
/* 8025A330 00257270  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8025A334 00257274  28 00 00 00 */	cmplwi r0, 0
/* 8025A338 00257278  40 82 00 24 */	bne .L_8025A35C
/* 8025A33C 0025727C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A340 00257280  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A344 00257284  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A348 00257288  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025A34C 0025728C  7D 89 03 A6 */	mtctr r12
/* 8025A350 00257290  4E 80 04 21 */	bctrl 
/* 8025A354 00257294  90 61 00 18 */	stw r3, 0x18(r1)
/* 8025A358 00257298  48 00 00 94 */	b .L_8025A3EC
.L_8025A35C:
/* 8025A35C 0025729C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A360 002572A0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A364 002572A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A368 002572A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025A36C 002572AC  7D 89 03 A6 */	mtctr r12
/* 8025A370 002572B0  4E 80 04 21 */	bctrl 
/* 8025A374 002572B4  90 61 00 18 */	stw r3, 0x18(r1)
/* 8025A378 002572B8  48 00 00 58 */	b .L_8025A3D0
.L_8025A37C:
/* 8025A37C 002572BC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A380 002572C0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A384 002572C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A388 002572C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8025A38C 002572CC  7D 89 03 A6 */	mtctr r12
/* 8025A390 002572D0  4E 80 04 21 */	bctrl 
/* 8025A394 002572D4  7C 64 1B 78 */	mr r4, r3
/* 8025A398 002572D8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8025A39C 002572DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A3A0 002572E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025A3A4 002572E4  7D 89 03 A6 */	mtctr r12
/* 8025A3A8 002572E8  4E 80 04 21 */	bctrl 
/* 8025A3AC 002572EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025A3B0 002572F0  40 82 00 3C */	bne .L_8025A3EC
/* 8025A3B4 002572F4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A3B8 002572F8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A3BC 002572FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A3C0 00257300  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025A3C4 00257304  7D 89 03 A6 */	mtctr r12
/* 8025A3C8 00257308  4E 80 04 21 */	bctrl 
/* 8025A3CC 0025730C  90 61 00 18 */	stw r3, 0x18(r1)
.L_8025A3D0:
/* 8025A3D0 00257310  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8025A3D4 00257314  38 61 00 14 */	addi r3, r1, 0x14
/* 8025A3D8 00257318  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8025A3DC 0025731C  7D 89 03 A6 */	mtctr r12
/* 8025A3E0 00257320  4E 80 04 21 */	bctrl 
/* 8025A3E4 00257324  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025A3E8 00257328  41 82 FF 94 */	beq .L_8025A37C
.L_8025A3EC:
/* 8025A3EC 0025732C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8025A3F0 00257330  81 83 00 00 */	lwz r12, 0(r3)
/* 8025A3F4 00257334  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025A3F8 00257338  7D 89 03 A6 */	mtctr r12
/* 8025A3FC 0025733C  4E 80 04 21 */	bctrl 
/* 8025A400 00257340  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8025A404 00257344  7C 04 18 40 */	cmplw r4, r3
/* 8025A408 00257348  40 82 FE D0 */	bne .L_8025A2D8
.L_8025A40C:
/* 8025A40C 0025734C  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 8025A410 00257350  28 03 00 00 */	cmplwi r3, 0
/* 8025A414 00257354  41 82 00 48 */	beq .L_8025A45C
/* 8025A418 00257358  4B F9 4C 19 */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 8025A41C 0025735C  C0 02 C8 10 */	lfs f0, lbl_8051AB70@sda21(r2)
/* 8025A420 00257360  EF E1 00 28 */	fsubs f31, f1, f0
/* 8025A424 00257364  4B E6 F1 7D */	bl rand
/* 8025A428 00257368  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025A42C 0025736C  3C 00 43 30 */	lis r0, 0x4330
/* 8025A430 00257370  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8025A434 00257374  C8 62 C8 08 */	lfd f3, lbl_8051AB68@sda21(r2)
/* 8025A438 00257378  90 01 00 28 */	stw r0, 0x28(r1)
/* 8025A43C 0025737C  C0 22 C8 00 */	lfs f1, lbl_8051AB60@sda21(r2)
/* 8025A440 00257380  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8025A444 00257384  C0 02 C8 14 */	lfs f0, lbl_8051AB74@sda21(r2)
/* 8025A448 00257388  EC 42 18 28 */	fsubs f2, f2, f3
/* 8025A44C 0025738C  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 8025A450 00257390  EC 22 08 24 */	fdivs f1, f2, f1
/* 8025A454 00257394  EC 00 0F FC */	fnmsubs f0, f0, f31, f1
/* 8025A458 00257398  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
.L_8025A45C:
/* 8025A45C 0025739C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8025A460 002573A0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8025A464 002573A4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8025A468 002573A8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8025A46C 002573AC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8025A470 002573B0  7C 08 03 A6 */	mtlr r0
/* 8025A474 002573B4  38 21 00 50 */	addi r1, r1, 0x50
/* 8025A478 002573B8  4E 80 00 20 */	blr 
.endfn setNearestBridge__Q34Game4Ujib3ObjFv

.fn setCullingCheck__Q34Game4Ujib3ObjFv, global
/* 8025A47C 002573BC  4E 80 00 20 */	blr 
.endfn setCullingCheck__Q34Game4Ujib3ObjFv

.fn checkBreakOrMove__Q34Game4Ujib3ObjFv, global
/* 8025A480 002573C0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8025A484 002573C4  7C 08 02 A6 */	mflr r0
/* 8025A488 002573C8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8025A48C 002573CC  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8025A490 002573D0  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8025A494 002573D4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8025A498 002573D8  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8025A49C 002573DC  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8025A4A0 002573E0  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8025A4A4 002573E4  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8025A4A8 002573E8  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8025A4AC 002573EC  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8025A4B0 002573F0  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8025A4B4 002573F4  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 8025A4B8 002573F8  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 8025A4BC 002573FC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8025A4C0 00257400  7C 7F 1B 78 */	mr r31, r3
/* 8025A4C4 00257404  80 83 02 D0 */	lwz r4, 0x2d0(r3)
/* 8025A4C8 00257408  28 04 00 00 */	cmplwi r4, 0
/* 8025A4CC 0025740C  41 82 01 20 */	beq .L_8025A5EC
/* 8025A4D0 00257410  38 61 00 20 */	addi r3, r1, 0x20
/* 8025A4D4 00257414  4B F9 4B 65 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8025A4D8 00257418  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 8025A4DC 0025741C  38 61 00 14 */	addi r3, r1, 0x14
/* 8025A4E0 00257420  C3 A1 00 24 */	lfs f29, 0x24(r1)
/* 8025A4E4 00257424  C3 61 00 28 */	lfs f27, 0x28(r1)
/* 8025A4E8 00257428  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A4EC 0025742C  4B F9 4A 49 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8025A4F0 00257430  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8025A4F4 00257434  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8025A4F8 00257438  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8025A4FC 0025743C  EF C2 00 28 */	fsubs f30, f2, f0
/* 8025A500 00257440  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8025A504 00257444  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8025A508 00257448  EF E1 00 28 */	fsubs f31, f1, f0
/* 8025A50C 0025744C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8025A510 00257450  EC 3D 07 B2 */	fmuls f1, f29, f30
/* 8025A514 00257454  EF A2 00 28 */	fsubs f29, f2, f0
/* 8025A518 00257458  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025A51C 0025745C  EC 3C 0F FA */	fmadds f1, f28, f31, f1
/* 8025A520 00257460  EC 3B 0F 7A */	fmadds f1, f27, f29, f1
/* 8025A524 00257464  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025A528 00257468  40 81 00 0C */	ble .L_8025A534
/* 8025A52C 0025746C  38 60 00 07 */	li r3, 7
/* 8025A530 00257470  48 00 00 C0 */	b .L_8025A5F0
.L_8025A534:
/* 8025A534 00257474  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A538 00257478  38 61 00 08 */	addi r3, r1, 8
/* 8025A53C 0025747C  4B F9 4B A1 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8025A540 00257480  C3 61 00 08 */	lfs f27, 8(r1)
/* 8025A544 00257484  C3 81 00 0C */	lfs f28, 0xc(r1)
/* 8025A548 00257488  C3 41 00 10 */	lfs f26, 0x10(r1)
/* 8025A54C 0025748C  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 8025A550 00257490  4B F9 4A E1 */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 8025A554 00257494  EC 7C 07 B2 */	fmuls f3, f28, f30
/* 8025A558 00257498  C0 02 C8 14 */	lfs f0, lbl_8051AB74@sda21(r2)
/* 8025A55C 0025749C  C0 42 C8 10 */	lfs f2, lbl_8051AB70@sda21(r2)
/* 8025A560 002574A0  EC 80 00 72 */	fmuls f4, f0, f1
/* 8025A564 002574A4  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025A568 002574A8  EC 3B 1F FA */	fmadds f1, f27, f31, f3
/* 8025A56C 002574AC  EC 42 20 2A */	fadds f2, f2, f4
/* 8025A570 002574B0  EC 3A 0F 7A */	fmadds f1, f26, f29, f1
/* 8025A574 002574B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025A578 002574B8  40 80 00 0C */	bge .L_8025A584
/* 8025A57C 002574BC  D0 5F 02 D8 */	stfs f2, 0x2d8(r31)
/* 8025A580 002574C0  48 00 00 0C */	b .L_8025A58C
.L_8025A584:
/* 8025A584 002574C4  FC 00 10 50 */	fneg f0, f2
/* 8025A588 002574C8  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
.L_8025A58C:
/* 8025A58C 002574CC  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025A590 002574D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025A594 002574D4  40 81 00 08 */	ble .L_8025A59C
/* 8025A598 002574D8  48 00 00 08 */	b .L_8025A5A0
.L_8025A59C:
/* 8025A59C 002574DC  FC 20 08 50 */	fneg f1, f1
.L_8025A5A0:
/* 8025A5A0 002574E0  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 8025A5A4 002574E4  40 81 00 0C */	ble .L_8025A5B0
/* 8025A5A8 002574E8  38 60 00 06 */	li r3, 6
/* 8025A5AC 002574EC  48 00 00 44 */	b .L_8025A5F0
.L_8025A5B0:
/* 8025A5B0 002574F0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8025A5B4 002574F4  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8025A5B8 002574F8  81 83 00 04 */	lwz r12, 4(r3)
/* 8025A5BC 002574FC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8025A5C0 00257500  7D 89 03 A6 */	mtctr r12
/* 8025A5C4 00257504  4E 80 04 21 */	bctrl 
/* 8025A5C8 00257508  C0 02 C8 18 */	lfs f0, lbl_8051AB78@sda21(r2)
/* 8025A5CC 0025750C  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8025A5D0 00257510  EC 00 08 2A */	fadds f0, f0, f1
/* 8025A5D4 00257514  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8025A5D8 00257518  40 81 00 0C */	ble .L_8025A5E4
/* 8025A5DC 0025751C  38 60 00 08 */	li r3, 8
/* 8025A5E0 00257520  48 00 00 10 */	b .L_8025A5F0
.L_8025A5E4:
/* 8025A5E4 00257524  38 60 00 06 */	li r3, 6
/* 8025A5E8 00257528  48 00 00 08 */	b .L_8025A5F0
.L_8025A5EC:
/* 8025A5EC 0025752C  38 60 00 07 */	li r3, 7
.L_8025A5F0:
/* 8025A5F0 00257530  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8025A5F4 00257534  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8025A5F8 00257538  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8025A5FC 0025753C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8025A600 00257540  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8025A604 00257544  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8025A608 00257548  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8025A60C 0025754C  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8025A610 00257550  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 8025A614 00257554  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8025A618 00257558  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 8025A61C 0025755C  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 8025A620 00257560  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8025A624 00257564  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8025A628 00257568  7C 08 03 A6 */	mtlr r0
/* 8025A62C 0025756C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8025A630 00257570  4E 80 00 20 */	blr 
.endfn checkBreakOrMove__Q34Game4Ujib3ObjFv

.fn isBreakBridge__Q34Game4Ujib3ObjFv, global
/* 8025A634 00257574  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8025A638 00257578  28 03 00 00 */	cmplwi r3, 0
/* 8025A63C 0025757C  41 82 00 18 */	beq .L_8025A654
/* 8025A640 00257580  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8025A644 00257584  2C 00 00 00 */	cmpwi r0, 0
/* 8025A648 00257588  41 82 00 0C */	beq .L_8025A654
/* 8025A64C 0025758C  38 60 00 01 */	li r3, 1
/* 8025A650 00257590  4E 80 00 20 */	blr 
.L_8025A654:
/* 8025A654 00257594  38 60 00 00 */	li r3, 0
/* 8025A658 00257598  4E 80 00 20 */	blr 
.endfn isBreakBridge__Q34Game4Ujib3ObjFv

.fn moveBridgeSide__Q34Game4Ujib3ObjFv, global
/* 8025A65C 0025759C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8025A660 002575A0  7C 08 02 A6 */	mflr r0
/* 8025A664 002575A4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8025A668 002575A8  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8025A66C 002575AC  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8025A670 002575B0  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8025A674 002575B4  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8025A678 002575B8  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8025A67C 002575BC  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8025A680 002575C0  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8025A684 002575C4  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8025A688 002575C8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8025A68C 002575CC  7C 7F 1B 78 */	mr r31, r3
/* 8025A690 002575D0  38 61 00 44 */	addi r3, r1, 0x44
/* 8025A694 002575D4  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A698 002575D8  4B F9 48 9D */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8025A69C 002575DC  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 8025A6A0 002575E0  38 61 00 38 */	addi r3, r1, 0x38
/* 8025A6A4 002575E4  C3 81 00 4C */	lfs f28, 0x4c(r1)
/* 8025A6A8 002575E8  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A6AC 002575EC  4B F9 4A 31 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8025A6B0 002575F0  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 8025A6B4 002575F4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8025A6B8 002575F8  C3 E1 00 40 */	lfs f31, 0x40(r1)
/* 8025A6BC 002575FC  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A6C0 00257600  4B F9 49 79 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8025A6C4 00257604  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 8025A6C8 00257608  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8025A6CC 0025760C  EF FF 00 72 */	fmuls f31, f31, f1
/* 8025A6D0 00257610  C0 02 C8 1C */	lfs f0, lbl_8051AB7C@sda21(r2)
/* 8025A6D4 00257614  EF DE 00 72 */	fmuls f30, f30, f1
/* 8025A6D8 00257618  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8025A6DC 0025761C  EC 84 00 32 */	fmuls f4, f4, f0
/* 8025A6E0 00257620  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8025A6E4 00257624  EF 9C F8 2A */	fadds f28, f28, f31
/* 8025A6E8 00257628  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8025A6EC 0025762C  EC 63 00 32 */	fmuls f3, f3, f0
/* 8025A6F0 00257630  C0 02 C8 20 */	lfs f0, lbl_8051AB80@sda21(r2)
/* 8025A6F4 00257634  EF BD F0 2A */	fadds f29, f29, f30
/* 8025A6F8 00257638  EF 9C 20 2A */	fadds f28, f28, f4
/* 8025A6FC 0025763C  EF BD 18 2A */	fadds f29, f29, f3
/* 8025A700 00257640  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8025A704 00257644  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8025A708 00257648  EC 21 00 72 */	fmuls f1, f1, f1
/* 8025A70C 0025764C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8025A710 00257650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025A714 00257654  40 80 00 80 */	bge .L_8025A794
/* 8025A718 00257658  7F E3 FB 78 */	mr r3, r31
/* 8025A71C 0025765C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025A720 00257660  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A724 00257664  C0 22 C8 24 */	lfs f1, lbl_8051AB84@sda21(r2)
/* 8025A728 00257668  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8025A72C 0025766C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A730 00257670  EF C1 00 32 */	fmuls f30, f1, f0
/* 8025A734 00257674  7D 89 03 A6 */	mtctr r12
/* 8025A738 00257678  4E 80 04 21 */	bctrl 
/* 8025A73C 0025767C  4B E7 50 E1 */	bl sin
/* 8025A740 00257680  7F E3 FB 78 */	mr r3, r31
/* 8025A744 00257684  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8025A748 00257688  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A74C 0025768C  FF A0 08 18 */	frsp f29, f1
/* 8025A750 00257690  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8025A754 00257694  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8025A758 00257698  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A75C 0025769C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8025A760 002576A0  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8025A764 002576A4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8025A768 002576A8  7D 89 03 A6 */	mtctr r12
/* 8025A76C 002576AC  4E 80 04 21 */	bctrl 
/* 8025A770 002576B0  4B E7 4B 45 */	bl cos
/* 8025A774 002576B4  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8025A778 002576B8  38 60 00 01 */	li r3, 1
/* 8025A77C 002576BC  FC 20 08 18 */	frsp f1, f1
/* 8025A780 002576C0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025A784 002576C4  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8025A788 002576C8  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8025A78C 002576CC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025A790 002576D0  48 00 01 40 */	b .L_8025A8D0
.L_8025A794:
/* 8025A794 002576D4  7F E4 FB 78 */	mr r4, r31
/* 8025A798 002576D8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8025A79C 002576DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A7A0 002576E0  38 61 00 08 */	addi r3, r1, 8
/* 8025A7A4 002576E4  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 8025A7A8 002576E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025A7AC 002576EC  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8025A7B0 002576F0  7D 89 03 A6 */	mtctr r12
/* 8025A7B4 002576F4  4E 80 04 21 */	bctrl 
/* 8025A7B8 002576F8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8025A7BC 002576FC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8025A7C0 00257700  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8025A7C4 00257704  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8025A7C8 00257708  EC 3D 08 28 */	fsubs f1, f29, f1
/* 8025A7CC 0025770C  EC 5C 00 28 */	fsubs f2, f28, f0
/* 8025A7D0 00257710  4B DD A9 39 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8025A7D4 00257714  48 1B 73 FD */	bl roundAng__Ff
/* 8025A7D8 00257718  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A7DC 0025771C  FF A0 08 90 */	fmr f29, f1
/* 8025A7E0 00257720  7F E3 FB 78 */	mr r3, r31
/* 8025A7E4 00257724  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A7E8 00257728  7D 89 03 A6 */	mtctr r12
/* 8025A7EC 0025772C  4E 80 04 21 */	bctrl 
/* 8025A7F0 00257730  FC 40 08 90 */	fmr f2, f1
/* 8025A7F4 00257734  FC 20 E8 90 */	fmr f1, f29
/* 8025A7F8 00257738  48 1B 74 05 */	bl angDist__Fff
/* 8025A7FC 0025773C  EF C1 07 B2 */	fmuls f30, f1, f30
/* 8025A800 00257740  C0 02 C8 2C */	lfs f0, lbl_8051AB8C@sda21(r2)
/* 8025A804 00257744  C0 22 C8 28 */	lfs f1, lbl_8051AB88@sda21(r2)
/* 8025A808 00257748  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8025A80C 0025774C  FC 40 F2 10 */	fabs f2, f30
/* 8025A810 00257750  EC 21 00 32 */	fmuls f1, f1, f0
/* 8025A814 00257754  FC 00 10 18 */	frsp f0, f2
/* 8025A818 00257758  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8025A81C 0025775C  40 81 00 1C */	ble .L_8025A838
/* 8025A820 00257760  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025A824 00257764  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8025A828 00257768  40 81 00 0C */	ble .L_8025A834
/* 8025A82C 0025776C  FF C0 08 90 */	fmr f30, f1
/* 8025A830 00257770  48 00 00 08 */	b .L_8025A838
.L_8025A834:
/* 8025A834 00257774  FF C0 08 50 */	fneg f30, f1
.L_8025A838:
/* 8025A838 00257778  7F E3 FB 78 */	mr r3, r31
/* 8025A83C 0025777C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A840 00257780  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A844 00257784  7D 89 03 A6 */	mtctr r12
/* 8025A848 00257788  4E 80 04 21 */	bctrl 
/* 8025A84C 0025778C  EC 3E 08 2A */	fadds f1, f30, f1
/* 8025A850 00257790  48 1B 73 81 */	bl roundAng__Ff
/* 8025A854 00257794  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8025A858 00257798  7F E3 FB 78 */	mr r3, r31
/* 8025A85C 0025779C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8025A860 002577A0  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8025A864 002577A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A868 002577A8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025A86C 002577AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A870 002577B0  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 8025A874 002577B4  7D 89 03 A6 */	mtctr r12
/* 8025A878 002577B8  4E 80 04 21 */	bctrl 
/* 8025A87C 002577BC  4B E7 4F A1 */	bl sin
/* 8025A880 002577C0  7F E3 FB 78 */	mr r3, r31
/* 8025A884 002577C4  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8025A888 002577C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A88C 002577CC  FF A0 08 18 */	frsp f29, f1
/* 8025A890 002577D0  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8025A894 002577D4  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8025A898 002577D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A89C 002577DC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8025A8A0 002577E0  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8025A8A4 002577E4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8025A8A8 002577E8  7D 89 03 A6 */	mtctr r12
/* 8025A8AC 002577EC  4E 80 04 21 */	bctrl 
/* 8025A8B0 002577F0  4B E7 4A 05 */	bl cos
/* 8025A8B4 002577F4  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8025A8B8 002577F8  38 60 00 00 */	li r3, 0
/* 8025A8BC 002577FC  FC 20 08 18 */	frsp f1, f1
/* 8025A8C0 00257800  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025A8C4 00257804  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8025A8C8 00257808  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8025A8CC 0025780C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8025A8D0:
/* 8025A8D0 00257810  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8025A8D4 00257814  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8025A8D8 00257818  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8025A8DC 0025781C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8025A8E0 00257820  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8025A8E4 00257824  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8025A8E8 00257828  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8025A8EC 0025782C  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8025A8F0 00257830  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8025A8F4 00257834  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8025A8F8 00257838  7C 08 03 A6 */	mtlr r0
/* 8025A8FC 0025783C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8025A900 00257840  4E 80 00 20 */	blr 
.endfn moveBridgeSide__Q34Game4Ujib3ObjFv

.fn moveBridgeCentre__Q34Game4Ujib3ObjFv, global
/* 8025A904 00257844  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8025A908 00257848  7C 08 02 A6 */	mflr r0
/* 8025A90C 0025784C  90 01 00 94 */	stw r0, 0x94(r1)
/* 8025A910 00257850  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8025A914 00257854  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8025A918 00257858  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8025A91C 0025785C  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8025A920 00257860  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8025A924 00257864  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8025A928 00257868  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8025A92C 0025786C  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8025A930 00257870  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8025A934 00257874  7C 7F 1B 78 */	mr r31, r3
/* 8025A938 00257878  38 61 00 38 */	addi r3, r1, 0x38
/* 8025A93C 0025787C  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A940 00257880  4B F9 45 F5 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8025A944 00257884  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 8025A948 00257888  38 61 00 2C */	addi r3, r1, 0x2c
/* 8025A94C 0025788C  C3 81 00 40 */	lfs f28, 0x40(r1)
/* 8025A950 00257890  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8025A954 00257894  4B F9 47 89 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8025A958 00257898  C0 22 C8 30 */	lfs f1, lbl_8051AB90@sda21(r2)
/* 8025A95C 0025789C  C0 1F 02 D4 */	lfs f0, 0x2d4(r31)
/* 8025A960 002578A0  C0 A1 00 34 */	lfs f5, 0x34(r1)
/* 8025A964 002578A4  EC 61 00 32 */	fmuls f3, f1, f0
/* 8025A968 002578A8  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 8025A96C 002578AC  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8025A970 002578B0  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8025A974 002578B4  EC A5 00 F2 */	fmuls f5, f5, f3
/* 8025A978 002578B8  C0 02 C8 20 */	lfs f0, lbl_8051AB80@sda21(r2)
/* 8025A97C 002578BC  EC 84 00 F2 */	fmuls f4, f4, f3
/* 8025A980 002578C0  EF 9C 28 2A */	fadds f28, f28, f5
/* 8025A984 002578C4  EF BD 20 2A */	fadds f29, f29, f4
/* 8025A988 002578C8  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8025A98C 002578CC  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8025A990 002578D0  EC 21 00 72 */	fmuls f1, f1, f1
/* 8025A994 002578D4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8025A998 002578D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025A99C 002578DC  40 80 00 80 */	bge .L_8025AA1C
/* 8025A9A0 002578E0  7F E3 FB 78 */	mr r3, r31
/* 8025A9A4 002578E4  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025A9A8 002578E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A9AC 002578EC  C0 22 C8 24 */	lfs f1, lbl_8051AB84@sda21(r2)
/* 8025A9B0 002578F0  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8025A9B4 002578F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A9B8 002578F8  EF C1 00 32 */	fmuls f30, f1, f0
/* 8025A9BC 002578FC  7D 89 03 A6 */	mtctr r12
/* 8025A9C0 00257900  4E 80 04 21 */	bctrl 
/* 8025A9C4 00257904  4B E7 4E 59 */	bl sin
/* 8025A9C8 00257908  7F E3 FB 78 */	mr r3, r31
/* 8025A9CC 0025790C  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8025A9D0 00257910  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025A9D4 00257914  FF A0 08 18 */	frsp f29, f1
/* 8025A9D8 00257918  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8025A9DC 0025791C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8025A9E0 00257920  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025A9E4 00257924  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8025A9E8 00257928  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8025A9EC 0025792C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8025A9F0 00257930  7D 89 03 A6 */	mtctr r12
/* 8025A9F4 00257934  4E 80 04 21 */	bctrl 
/* 8025A9F8 00257938  4B E7 48 BD */	bl cos
/* 8025A9FC 0025793C  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8025AA00 00257940  38 60 00 01 */	li r3, 1
/* 8025AA04 00257944  FC 20 08 18 */	frsp f1, f1
/* 8025AA08 00257948  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025AA0C 0025794C  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8025AA10 00257950  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8025AA14 00257954  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025AA18 00257958  48 00 01 40 */	b .L_8025AB58
.L_8025AA1C:
/* 8025AA1C 0025795C  7F E4 FB 78 */	mr r4, r31
/* 8025AA20 00257960  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8025AA24 00257964  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025AA28 00257968  38 61 00 08 */	addi r3, r1, 8
/* 8025AA2C 0025796C  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 8025AA30 00257970  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025AA34 00257974  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8025AA38 00257978  7D 89 03 A6 */	mtctr r12
/* 8025AA3C 0025797C  4E 80 04 21 */	bctrl 
/* 8025AA40 00257980  C0 21 00 08 */	lfs f1, 8(r1)
/* 8025AA44 00257984  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8025AA48 00257988  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8025AA4C 0025798C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8025AA50 00257990  EC 3D 08 28 */	fsubs f1, f29, f1
/* 8025AA54 00257994  EC 5C 00 28 */	fsubs f2, f28, f0
/* 8025AA58 00257998  4B DD A6 B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8025AA5C 0025799C  48 1B 71 75 */	bl roundAng__Ff
/* 8025AA60 002579A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025AA64 002579A4  FF A0 08 90 */	fmr f29, f1
/* 8025AA68 002579A8  7F E3 FB 78 */	mr r3, r31
/* 8025AA6C 002579AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AA70 002579B0  7D 89 03 A6 */	mtctr r12
/* 8025AA74 002579B4  4E 80 04 21 */	bctrl 
/* 8025AA78 002579B8  FC 40 08 90 */	fmr f2, f1
/* 8025AA7C 002579BC  FC 20 E8 90 */	fmr f1, f29
/* 8025AA80 002579C0  48 1B 71 7D */	bl angDist__Fff
/* 8025AA84 002579C4  EF C1 07 B2 */	fmuls f30, f1, f30
/* 8025AA88 002579C8  C0 02 C8 2C */	lfs f0, lbl_8051AB8C@sda21(r2)
/* 8025AA8C 002579CC  C0 22 C8 28 */	lfs f1, lbl_8051AB88@sda21(r2)
/* 8025AA90 002579D0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8025AA94 002579D4  FC 40 F2 10 */	fabs f2, f30
/* 8025AA98 002579D8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8025AA9C 002579DC  FC 00 10 18 */	frsp f0, f2
/* 8025AAA0 002579E0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8025AAA4 002579E4  40 81 00 1C */	ble .L_8025AAC0
/* 8025AAA8 002579E8  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025AAAC 002579EC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8025AAB0 002579F0  40 81 00 0C */	ble .L_8025AABC
/* 8025AAB4 002579F4  FF C0 08 90 */	fmr f30, f1
/* 8025AAB8 002579F8  48 00 00 08 */	b .L_8025AAC0
.L_8025AABC:
/* 8025AABC 002579FC  FF C0 08 50 */	fneg f30, f1
.L_8025AAC0:
/* 8025AAC0 00257A00  7F E3 FB 78 */	mr r3, r31
/* 8025AAC4 00257A04  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025AAC8 00257A08  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AACC 00257A0C  7D 89 03 A6 */	mtctr r12
/* 8025AAD0 00257A10  4E 80 04 21 */	bctrl 
/* 8025AAD4 00257A14  EC 3E 08 2A */	fadds f1, f30, f1
/* 8025AAD8 00257A18  48 1B 70 F9 */	bl roundAng__Ff
/* 8025AADC 00257A1C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8025AAE0 00257A20  7F E3 FB 78 */	mr r3, r31
/* 8025AAE4 00257A24  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8025AAE8 00257A28  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8025AAEC 00257A2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025AAF0 00257A30  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025AAF4 00257A34  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AAF8 00257A38  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 8025AAFC 00257A3C  7D 89 03 A6 */	mtctr r12
/* 8025AB00 00257A40  4E 80 04 21 */	bctrl 
/* 8025AB04 00257A44  4B E7 4D 19 */	bl sin
/* 8025AB08 00257A48  7F E3 FB 78 */	mr r3, r31
/* 8025AB0C 00257A4C  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8025AB10 00257A50  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025AB14 00257A54  FF A0 08 18 */	frsp f29, f1
/* 8025AB18 00257A58  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8025AB1C 00257A5C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8025AB20 00257A60  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AB24 00257A64  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8025AB28 00257A68  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8025AB2C 00257A6C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8025AB30 00257A70  7D 89 03 A6 */	mtctr r12
/* 8025AB34 00257A74  4E 80 04 21 */	bctrl 
/* 8025AB38 00257A78  4B E7 47 7D */	bl cos
/* 8025AB3C 00257A7C  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8025AB40 00257A80  38 60 00 00 */	li r3, 0
/* 8025AB44 00257A84  FC 20 08 18 */	frsp f1, f1
/* 8025AB48 00257A88  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025AB4C 00257A8C  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8025AB50 00257A90  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8025AB54 00257A94  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8025AB58:
/* 8025AB58 00257A98  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8025AB5C 00257A9C  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8025AB60 00257AA0  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8025AB64 00257AA4  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8025AB68 00257AA8  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8025AB6C 00257AAC  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8025AB70 00257AB0  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8025AB74 00257AB4  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8025AB78 00257AB8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8025AB7C 00257ABC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8025AB80 00257AC0  7C 08 03 A6 */	mtlr r0
/* 8025AB84 00257AC4  38 21 00 90 */	addi r1, r1, 0x90
/* 8025AB88 00257AC8  4E 80 00 20 */	blr 
.endfn moveBridgeCentre__Q34Game4Ujib3ObjFv

.fn moveBridgeTop__Q34Game4Ujib3ObjFv, global
/* 8025AB8C 00257ACC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8025AB90 00257AD0  7C 08 02 A6 */	mflr r0
/* 8025AB94 00257AD4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8025AB98 00257AD8  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8025AB9C 00257ADC  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8025ABA0 00257AE0  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8025ABA4 00257AE4  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8025ABA8 00257AE8  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8025ABAC 00257AEC  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8025ABB0 00257AF0  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8025ABB4 00257AF4  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 8025ABB8 00257AF8  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 8025ABBC 00257AFC  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 8025ABC0 00257B00  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8025ABC4 00257B04  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8025ABC8 00257B08  7C 7E 1B 78 */	mr r30, r3
/* 8025ABCC 00257B0C  38 61 00 44 */	addi r3, r1, 0x44
/* 8025ABD0 00257B10  80 9E 02 D0 */	lwz r4, 0x2d0(r30)
/* 8025ABD4 00257B14  80 A4 02 18 */	lwz r5, 0x218(r4)
/* 8025ABD8 00257B18  3B E5 FF FF */	addi r31, r5, -1
/* 8025ABDC 00257B1C  7F E5 FB 78 */	mr r5, r31
/* 8025ABE0 00257B20  4B F9 42 6D */	bl getStagePos__Q34Game10ItemBridge4ItemFi
/* 8025ABE4 00257B24  C3 E1 00 44 */	lfs f31, 0x44(r1)
/* 8025ABE8 00257B28  38 61 00 38 */	addi r3, r1, 0x38
/* 8025ABEC 00257B2C  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 8025ABF0 00257B30  80 9E 02 D0 */	lwz r4, 0x2d0(r30)
/* 8025ABF4 00257B34  4B F9 44 E9 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8025ABF8 00257B38  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8025ABFC 00257B3C  2C 1F 00 00 */	cmpwi r31, 0
/* 8025AC00 00257B40  C0 1E 02 D4 */	lfs f0, 0x2d4(r30)
/* 8025AC04 00257B44  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8025AC08 00257B48  EC 21 00 32 */	fmuls f1, f1, f0
/* 8025AC0C 00257B4C  EC 42 00 32 */	fmuls f2, f2, f0
/* 8025AC10 00257B50  EF FF 08 2A */	fadds f31, f31, f1
/* 8025AC14 00257B54  EF DE 10 2A */	fadds f30, f30, f2
/* 8025AC18 00257B58  40 81 00 2C */	ble .L_8025AC44
/* 8025AC1C 00257B5C  80 9E 02 D0 */	lwz r4, 0x2d0(r30)
/* 8025AC20 00257B60  38 61 00 2C */	addi r3, r1, 0x2c
/* 8025AC24 00257B64  4B F9 44 15 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8025AC28 00257B68  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8025AC2C 00257B6C  C0 02 C8 1C */	lfs f0, lbl_8051AB7C@sda21(r2)
/* 8025AC30 00257B70  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8025AC34 00257B74  EC 21 00 32 */	fmuls f1, f1, f0
/* 8025AC38 00257B78  EC 42 00 32 */	fmuls f2, f2, f0
/* 8025AC3C 00257B7C  EF FF 08 2A */	fadds f31, f31, f1
/* 8025AC40 00257B80  EF DE 10 2A */	fadds f30, f30, f2
.L_8025AC44:
/* 8025AC44 00257B84  7F C4 F3 78 */	mr r4, r30
/* 8025AC48 00257B88  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8025AC4C 00257B8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025AC50 00257B90  38 61 00 08 */	addi r3, r1, 8
/* 8025AC54 00257B94  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 8025AC58 00257B98  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025AC5C 00257B9C  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 8025AC60 00257BA0  7D 89 03 A6 */	mtctr r12
/* 8025AC64 00257BA4  4E 80 04 21 */	bctrl 
/* 8025AC68 00257BA8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8025AC6C 00257BAC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8025AC70 00257BB0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8025AC74 00257BB4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8025AC78 00257BB8  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8025AC7C 00257BBC  EC 5E 00 28 */	fsubs f2, f30, f0
/* 8025AC80 00257BC0  4B DD A4 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8025AC84 00257BC4  48 1B 6F 4D */	bl roundAng__Ff
/* 8025AC88 00257BC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025AC8C 00257BCC  FF 60 08 90 */	fmr f27, f1
/* 8025AC90 00257BD0  7F C3 F3 78 */	mr r3, r30
/* 8025AC94 00257BD4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AC98 00257BD8  7D 89 03 A6 */	mtctr r12
/* 8025AC9C 00257BDC  4E 80 04 21 */	bctrl 
/* 8025ACA0 00257BE0  FC 40 08 90 */	fmr f2, f1
/* 8025ACA4 00257BE4  FC 20 D8 90 */	fmr f1, f27
/* 8025ACA8 00257BE8  48 1B 6F 55 */	bl angDist__Fff
/* 8025ACAC 00257BEC  EF A1 07 72 */	fmuls f29, f1, f29
/* 8025ACB0 00257BF0  C0 02 C8 2C */	lfs f0, lbl_8051AB8C@sda21(r2)
/* 8025ACB4 00257BF4  C0 22 C8 28 */	lfs f1, lbl_8051AB88@sda21(r2)
/* 8025ACB8 00257BF8  EC 00 07 32 */	fmuls f0, f0, f28
/* 8025ACBC 00257BFC  FC 40 EA 10 */	fabs f2, f29
/* 8025ACC0 00257C00  EC 21 00 32 */	fmuls f1, f1, f0
/* 8025ACC4 00257C04  FC 00 10 18 */	frsp f0, f2
/* 8025ACC8 00257C08  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8025ACCC 00257C0C  40 81 00 1C */	ble .L_8025ACE8
/* 8025ACD0 00257C10  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025ACD4 00257C14  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8025ACD8 00257C18  40 81 00 0C */	ble .L_8025ACE4
/* 8025ACDC 00257C1C  FF A0 08 90 */	fmr f29, f1
/* 8025ACE0 00257C20  48 00 00 08 */	b .L_8025ACE8
.L_8025ACE4:
/* 8025ACE4 00257C24  FF A0 08 50 */	fneg f29, f1
.L_8025ACE8:
/* 8025ACE8 00257C28  7F C3 F3 78 */	mr r3, r30
/* 8025ACEC 00257C2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025ACF0 00257C30  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025ACF4 00257C34  7D 89 03 A6 */	mtctr r12
/* 8025ACF8 00257C38  4E 80 04 21 */	bctrl 
/* 8025ACFC 00257C3C  EC 3D 08 2A */	fadds f1, f29, f1
/* 8025AD00 00257C40  48 1B 6E D1 */	bl roundAng__Ff
/* 8025AD04 00257C44  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8025AD08 00257C48  C0 02 C7 E4 */	lfs f0, lbl_8051AB44@sda21(r2)
/* 8025AD0C 00257C4C  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8025AD10 00257C50  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 8025AD14 00257C54  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 8025AD18 00257C58  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 8025AD1C 00257C5C  EC 21 F0 28 */	fsubs f1, f1, f30
/* 8025AD20 00257C60  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8025AD24 00257C64  EC 21 00 72 */	fmuls f1, f1, f1
/* 8025AD28 00257C68  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8025AD2C 00257C6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025AD30 00257C70  40 80 00 1C */	bge .L_8025AD4C
/* 8025AD34 00257C74  C0 02 C7 DC */	lfs f0, lbl_8051AB3C@sda21(r2)
/* 8025AD38 00257C78  38 60 00 01 */	li r3, 1
/* 8025AD3C 00257C7C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8025AD40 00257C80  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 8025AD44 00257C84  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8025AD48 00257C88  48 00 00 F4 */	b .L_8025AE3C
.L_8025AD4C:
/* 8025AD4C 00257C8C  C0 02 C8 20 */	lfs f0, lbl_8051AB80@sda21(r2)
/* 8025AD50 00257C90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025AD54 00257C94  40 80 00 78 */	bge .L_8025ADCC
/* 8025AD58 00257C98  7F C3 F3 78 */	mr r3, r30
/* 8025AD5C 00257C9C  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8025AD60 00257CA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025AD64 00257CA4  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 8025AD68 00257CA8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AD6C 00257CAC  7D 89 03 A6 */	mtctr r12
/* 8025AD70 00257CB0  4E 80 04 21 */	bctrl 
/* 8025AD74 00257CB4  4B E7 4A A9 */	bl sin
/* 8025AD78 00257CB8  7F C3 F3 78 */	mr r3, r30
/* 8025AD7C 00257CBC  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8025AD80 00257CC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025AD84 00257CC4  FF 60 08 18 */	frsp f27, f1
/* 8025AD88 00257CC8  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8025AD8C 00257CCC  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8025AD90 00257CD0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AD94 00257CD4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8025AD98 00257CD8  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8025AD9C 00257CDC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8025ADA0 00257CE0  7D 89 03 A6 */	mtctr r12
/* 8025ADA4 00257CE4  4E 80 04 21 */	bctrl 
/* 8025ADA8 00257CE8  4B E7 45 0D */	bl cos
/* 8025ADAC 00257CEC  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8025ADB0 00257CF0  38 60 00 01 */	li r3, 1
/* 8025ADB4 00257CF4  FC 20 08 18 */	frsp f1, f1
/* 8025ADB8 00257CF8  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8025ADBC 00257CFC  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8025ADC0 00257D00  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8025ADC4 00257D04  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8025ADC8 00257D08  48 00 00 74 */	b .L_8025AE3C
.L_8025ADCC:
/* 8025ADCC 00257D0C  7F C3 F3 78 */	mr r3, r30
/* 8025ADD0 00257D10  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8025ADD4 00257D14  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025ADD8 00257D18  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 8025ADDC 00257D1C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025ADE0 00257D20  7D 89 03 A6 */	mtctr r12
/* 8025ADE4 00257D24  4E 80 04 21 */	bctrl 
/* 8025ADE8 00257D28  4B E7 4A 35 */	bl sin
/* 8025ADEC 00257D2C  7F C3 F3 78 */	mr r3, r30
/* 8025ADF0 00257D30  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8025ADF4 00257D34  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025ADF8 00257D38  FF 60 08 18 */	frsp f27, f1
/* 8025ADFC 00257D3C  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8025AE00 00257D40  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8025AE04 00257D44  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025AE08 00257D48  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8025AE0C 00257D4C  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8025AE10 00257D50  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8025AE14 00257D54  7D 89 03 A6 */	mtctr r12
/* 8025AE18 00257D58  4E 80 04 21 */	bctrl 
/* 8025AE1C 00257D5C  4B E7 44 99 */	bl cos
/* 8025AE20 00257D60  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8025AE24 00257D64  38 60 00 00 */	li r3, 0
/* 8025AE28 00257D68  FC 20 08 18 */	frsp f1, f1
/* 8025AE2C 00257D6C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8025AE30 00257D70  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8025AE34 00257D74  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8025AE38 00257D78  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_8025AE3C:
/* 8025AE3C 00257D7C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8025AE40 00257D80  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8025AE44 00257D84  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8025AE48 00257D88  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8025AE4C 00257D8C  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 8025AE50 00257D90  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8025AE54 00257D94  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 8025AE58 00257D98  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 8025AE5C 00257D9C  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 8025AE60 00257DA0  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 8025AE64 00257DA4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8025AE68 00257DA8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8025AE6C 00257DAC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8025AE70 00257DB0  7C 08 03 A6 */	mtlr r0
/* 8025AE74 00257DB4  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8025AE78 00257DB8  4E 80 00 20 */	blr 
.endfn moveBridgeTop__Q34Game4Ujib3ObjFv

.fn breakTargetBridge__Q34Game4Ujib3ObjFv, global
/* 8025AE7C 00257DBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025AE80 00257DC0  7C 08 02 A6 */	mflr r0
/* 8025AE84 00257DC4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8025AE88 00257DC8  3C A0 80 4B */	lis r5, __vt__Q24Game19InteractBreakBridge@ha
/* 8025AE8C 00257DCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025AE90 00257DD0  38 C4 A3 00 */	addi r6, r4, __vt__Q24Game11Interaction@l
/* 8025AE94 00257DD4  38 05 74 9C */	addi r0, r5, __vt__Q24Game19InteractBreakBridge@l
/* 8025AE98 00257DD8  38 81 00 08 */	addi r4, r1, 8
/* 8025AE9C 00257DDC  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 8025AEA0 00257DE0  C0 07 08 44 */	lfs f0, 0x844(r7)
/* 8025AEA4 00257DE4  90 C1 00 08 */	stw r6, 8(r1)
/* 8025AEA8 00257DE8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025AEAC 00257DEC  90 01 00 08 */	stw r0, 8(r1)
/* 8025AEB0 00257DF0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8025AEB4 00257DF4  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8025AEB8 00257DF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8025AEBC 00257DFC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8025AEC0 00257E00  7D 89 03 A6 */	mtctr r12
/* 8025AEC4 00257E04  4E 80 04 21 */	bctrl 
/* 8025AEC8 00257E08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025AECC 00257E0C  7C 08 03 A6 */	mtlr r0
/* 8025AED0 00257E10  38 21 00 20 */	addi r1, r1, 0x20
/* 8025AED4 00257E14  4E 80 00 20 */	blr 
.endfn breakTargetBridge__Q34Game4Ujib3ObjFv

.fn createAppearEffect__Q34Game4Ujib3ObjFv, global
/* 8025AED8 00257E18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025AEDC 00257E1C  7C 08 02 A6 */	mflr r0
/* 8025AEE0 00257E20  3C 80 80 48 */	lis r4, lbl_80485358@ha
/* 8025AEE4 00257E24  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025AEE8 00257E28  38 84 53 58 */	addi r4, r4, lbl_80485358@l
/* 8025AEEC 00257E2C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8025AEF0 00257E30  48 1E 40 F5 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025AEF4 00257E34  48 1C E9 AD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025AEF8 00257E38  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8025AEFC 00257E3C  38 C0 00 00 */	li r6, 0
/* 8025AF00 00257E40  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8025AF04 00257E44  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 8025AF08 00257E48  90 01 00 08 */	stw r0, 8(r1)
/* 8025AF0C 00257E4C  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8025AF10 00257E50  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8025AF14 00257E54  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoAp@ha
/* 8025AF18 00257E58  90 01 00 08 */	stw r0, 8(r1)
/* 8025AF1C 00257E5C  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 8025AF20 00257E60  38 E0 01 CE */	li r7, 0x1ce
/* 8025AF24 00257E64  38 A0 01 CF */	li r5, 0x1cf
/* 8025AF28 00257E68  90 01 00 08 */	stw r0, 8(r1)
/* 8025AF2C 00257E6C  38 04 29 34 */	addi r0, r4, __vt__Q23efx9TUjinkoAp@l
/* 8025AF30 00257E70  38 80 00 00 */	li r4, 0
/* 8025AF34 00257E74  90 61 00 18 */	stw r3, 0x18(r1)
/* 8025AF38 00257E78  38 61 00 08 */	addi r3, r1, 8
/* 8025AF3C 00257E7C  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 8025AF40 00257E80  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8025AF44 00257E84  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8025AF48 00257E88  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8025AF4C 00257E8C  90 01 00 08 */	stw r0, 8(r1)
/* 8025AF50 00257E90  48 15 44 49 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8025AF54 00257E94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025AF58 00257E98  7C 08 03 A6 */	mtlr r0
/* 8025AF5C 00257E9C  38 21 00 20 */	addi r1, r1, 0x20
/* 8025AF60 00257EA0  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game4Ujib3ObjFv

.fn createDisAppearEffect__Q34Game4Ujib3ObjFv, global
/* 8025AF64 00257EA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025AF68 00257EA8  7C 08 02 A6 */	mflr r0
/* 8025AF6C 00257EAC  3C 80 80 48 */	lis r4, lbl_80485358@ha
/* 8025AF70 00257EB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025AF74 00257EB4  38 84 53 58 */	addi r4, r4, lbl_80485358@l
/* 8025AF78 00257EB8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8025AF7C 00257EBC  48 1E 40 69 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025AF80 00257EC0  48 1C E9 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025AF84 00257EC4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8025AF88 00257EC8  38 C0 00 00 */	li r6, 0
/* 8025AF8C 00257ECC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8025AF90 00257ED0  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 8025AF94 00257ED4  90 01 00 08 */	stw r0, 8(r1)
/* 8025AF98 00257ED8  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8025AF9C 00257EDC  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8025AFA0 00257EE0  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoHd@ha
/* 8025AFA4 00257EE4  90 01 00 08 */	stw r0, 8(r1)
/* 8025AFA8 00257EE8  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 8025AFAC 00257EEC  38 E0 01 D1 */	li r7, 0x1d1
/* 8025AFB0 00257EF0  38 A0 01 D2 */	li r5, 0x1d2
/* 8025AFB4 00257EF4  90 01 00 08 */	stw r0, 8(r1)
/* 8025AFB8 00257EF8  38 04 29 20 */	addi r0, r4, __vt__Q23efx9TUjinkoHd@l
/* 8025AFBC 00257EFC  38 80 00 00 */	li r4, 0
/* 8025AFC0 00257F00  90 61 00 18 */	stw r3, 0x18(r1)
/* 8025AFC4 00257F04  38 61 00 08 */	addi r3, r1, 8
/* 8025AFC8 00257F08  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 8025AFCC 00257F0C  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8025AFD0 00257F10  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8025AFD4 00257F14  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8025AFD8 00257F18  90 01 00 08 */	stw r0, 8(r1)
/* 8025AFDC 00257F1C  48 15 43 BD */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8025AFE0 00257F20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025AFE4 00257F24  7C 08 03 A6 */	mtlr r0
/* 8025AFE8 00257F28  38 21 00 20 */	addi r1, r1, 0x20
/* 8025AFEC 00257F2C  4E 80 00 20 */	blr 
.endfn createDisAppearEffect__Q34Game4Ujib3ObjFv

.fn createBridgeEffect__Q34Game4Ujib3ObjFv, global
/* 8025AFF0 00257F30  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8025AFF4 00257F34  7C 08 02 A6 */	mflr r0
/* 8025AFF8 00257F38  38 82 C7 F0 */	addi r4, r2, lbl_8051AB50@sda21
/* 8025AFFC 00257F3C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8025B000 00257F40  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8025B004 00257F44  48 1E 3F E1 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025B008 00257F48  48 1C E8 99 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025B00C 00257F4C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8025B010 00257F50  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8025B014 00257F54  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8025B018 00257F58  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 8025B01C 00257F5C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8025B020 00257F60  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8025B024 00257F64  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8025B028 00257F68  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8025B02C 00257F6C  90 81 00 08 */	stw r4, 8(r1)
/* 8025B030 00257F70  3C 60 80 4C */	lis r3, __vt__Q23efx10TUjinkoEat@ha
/* 8025B034 00257F74  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 8025B038 00257F78  38 C0 01 D0 */	li r6, 0x1d0
/* 8025B03C 00257F7C  38 A0 00 00 */	li r5, 0
/* 8025B040 00257F80  90 01 00 08 */	stw r0, 8(r1)
/* 8025B044 00257F84  38 03 29 0C */	addi r0, r3, __vt__Q23efx10TUjinkoEat@l
/* 8025B048 00257F88  38 61 00 08 */	addi r3, r1, 8
/* 8025B04C 00257F8C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8025B050 00257F90  38 81 00 14 */	addi r4, r1, 0x14
/* 8025B054 00257F94  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8025B058 00257F98  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8025B05C 00257F9C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8025B060 00257FA0  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 8025B064 00257FA4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8025B068 00257FA8  90 01 00 08 */	stw r0, 8(r1)
/* 8025B06C 00257FAC  48 15 3F 19 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8025B070 00257FB0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8025B074 00257FB4  7C 08 03 A6 */	mtlr r0
/* 8025B078 00257FB8  38 21 00 30 */	addi r1, r1, 0x30
/* 8025B07C 00257FBC  4E 80 00 20 */	blr 
.endfn createBridgeEffect__Q34Game4Ujib3ObjFv

.fn createEatEffect__Q34Game4Ujib3ObjFv, global
/* 8025B080 00257FC0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8025B084 00257FC4  7C 08 02 A6 */	mflr r0
/* 8025B088 00257FC8  38 82 C7 F0 */	addi r4, r2, lbl_8051AB50@sda21
/* 8025B08C 00257FCC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8025B090 00257FD0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8025B094 00257FD4  48 1E 3F 51 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025B098 00257FD8  48 1C E8 09 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025B09C 00257FDC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8025B0A0 00257FE0  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8025B0A4 00257FE4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8025B0A8 00257FE8  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 8025B0AC 00257FEC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8025B0B0 00257FF0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8025B0B4 00257FF4  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8025B0B8 00257FF8  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8025B0BC 00257FFC  90 81 00 08 */	stw r4, 8(r1)
/* 8025B0C0 00258000  3C 60 80 4C */	lis r3, __vt__Q23efx12TUjinkoPkate@ha
/* 8025B0C4 00258004  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 8025B0C8 00258008  38 C0 02 5E */	li r6, 0x25e
/* 8025B0CC 0025800C  38 A0 00 00 */	li r5, 0
/* 8025B0D0 00258010  90 01 00 08 */	stw r0, 8(r1)
/* 8025B0D4 00258014  38 03 28 F8 */	addi r0, r3, __vt__Q23efx12TUjinkoPkate@l
/* 8025B0D8 00258018  38 61 00 08 */	addi r3, r1, 8
/* 8025B0DC 0025801C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8025B0E0 00258020  38 81 00 14 */	addi r4, r1, 0x14
/* 8025B0E4 00258024  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8025B0E8 00258028  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8025B0EC 0025802C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8025B0F0 00258030  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 8025B0F4 00258034  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8025B0F8 00258038  90 01 00 08 */	stw r0, 8(r1)
/* 8025B0FC 0025803C  48 15 3E 89 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8025B100 00258040  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8025B104 00258044  7C 08 03 A6 */	mtlr r0
/* 8025B108 00258048  38 21 00 30 */	addi r1, r1, 0x30
/* 8025B10C 0025804C  4E 80 00 20 */	blr 
.endfn createEatEffect__Q34Game4Ujib3ObjFv

.fn isUnderground__Q34Game4Ujib3ObjFv, weak
/* 8025B110 00258050  88 63 02 C1 */	lbz r3, 0x2c1(r3)
/* 8025B114 00258054  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game4Ujib3ObjFv

.fn getMouthSlots__Q34Game4Ujib3ObjFv, weak
/* 8025B118 00258058  38 63 02 C8 */	addi r3, r3, 0x2c8
/* 8025B11C 0025805C  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game4Ujib3ObjFv

.fn getDownSmokeScale__Q34Game4Ujib3ObjFv, weak
/* 8025B120 00258060  C0 22 C8 34 */	lfs f1, lbl_8051AB94@sda21(r2)
/* 8025B124 00258064  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game4Ujib3ObjFv

.fn getEnemyTypeID__Q34Game4Ujib3ObjFv, weak
/* 8025B128 00258068  38 60 00 0D */	li r3, 0xd
/* 8025B12C 0025806C  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game4Ujib3ObjFv

.fn "@732@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 8025B130 00258070  39 60 00 0C */	li r11, 0xc
/* 8025B134 00258074  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025B138 00258078  7C 63 5A 14 */	add r3, r3, r11
/* 8025B13C 0025807C  38 63 FD 24 */	addi r3, r3, -732
/* 8025B140 00258080  4B EA B7 DC */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@732@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@732@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8025B144 00258084  39 60 00 0C */	li r11, 0xc
/* 8025B148 00258088  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025B14C 0025808C  7C 63 5A 14 */	add r3, r3, r11
/* 8025B150 00258090  38 63 FD 24 */	addi r3, r3, -732
/* 8025B154 00258094  4B EA B5 54 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@732@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@732@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8025B158 00258098  39 60 00 0C */	li r11, 0xc
/* 8025B15C 0025809C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025B160 002580A0  7C 63 5A 14 */	add r3, r3, r11
/* 8025B164 002580A4  38 63 FD 24 */	addi r3, r3, -732
/* 8025B168 002580A8  4B EA B5 60 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@732@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@732@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8025B16C 002580AC  39 60 00 0C */	li r11, 0xc
/* 8025B170 002580B0  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025B174 002580B4  7C 63 5A 14 */	add r3, r3, r11
/* 8025B178 002580B8  38 63 FD 24 */	addi r3, r3, -732
/* 8025B17C 002580BC  4B EA B8 FC */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@732@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@732@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8025B180 002580C0  39 60 00 0C */	li r11, 0xc
/* 8025B184 002580C4  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025B188 002580C8  7C 63 5A 14 */	add r3, r3, r11
/* 8025B18C 002580CC  38 63 FD 24 */	addi r3, r3, -732
/* 8025B190 002580D0  4B EA B8 BC */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@732@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@732@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 8025B194 002580D4  39 60 00 0C */	li r11, 0xc
/* 8025B198 002580D8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025B19C 002580DC  7C 63 5A 14 */	add r3, r3, r11
/* 8025B1A0 002580E0  38 63 FD 24 */	addi r3, r3, -732
/* 8025B1A4 002580E4  4B EA B4 FC */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@732@12@viewGetShape__Q24Game9EnemyBaseFv"
