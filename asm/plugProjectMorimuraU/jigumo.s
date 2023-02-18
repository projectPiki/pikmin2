.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80491D98, local
	.asciz "jigumo.cpp"
.endobj lbl_80491D98
.balign 4
.obj lbl_80491DA4, local
	.asciz "P2Assert"
.endobj lbl_80491DA4
.balign 4
.obj lbl_80491DB0, local
	.asciz "body_joint1"
.endobj lbl_80491DB0
.balign 4
.obj lbl_80491DBC, local
	.asciz "kamu_joint1"
.endobj lbl_80491DBC
.balign 4
.obj lbl_80491DC8, local
	.asciz "ArgScale"
.endobj lbl_80491DC8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game6Jigumo3Obj, global
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
	.4byte setInitialSetting__Q34Game6Jigumo3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game6Jigumo3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game6Jigumo3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game6Jigumo3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q34Game6Jigumo3ObjFf
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
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game6Jigumo3ObjFv
	.4byte doFinishStoneState__Q34Game6Jigumo3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game6Jigumo3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game6Jigumo3ObjFv
	.4byte doStartMovie__Q34Game6Jigumo3ObjFv
	.4byte doEndMovie__Q34Game6Jigumo3ObjFv
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
.endobj __vt__Q34Game6Jigumo3Obj

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj curJ__Q24Game6Jigumo, global
	.skip 0x4
.endobj curJ__Q24Game6Jigumo

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E960, local
	.float 32768.0
.endobj lbl_8051E960
.obj lbl_8051E964, local
	.float 5.0
.endobj lbl_8051E964
.obj lbl_8051E968, local
	.float 25.0
.endobj lbl_8051E968
.balign 8
.obj lbl_8051E970, local
	.8byte 0x4330000080000000
.endobj lbl_8051E970
.obj lbl_8051E978, local
	.float 0.0
.endobj lbl_8051E978
.obj lbl_8051E97C, local
	.float 1.0
.endobj lbl_8051E97C
.obj lbl_8051E980, local
	.float 10.0
.endobj lbl_8051E980
.obj lbl_8051E984, local
	.float 2.0
.endobj lbl_8051E984
.obj lbl_8051E988, local
	.float 80.0
.endobj lbl_8051E988
.obj lbl_8051E98C, local
	.float 15.0
.endobj lbl_8051E98C
.obj lbl_8051E990, local
	.float 2.5
.endobj lbl_8051E990
.obj lbl_8051E994, local
	.float 3.0
.endobj lbl_8051E994
.obj lbl_8051E998, local
	.float 30.0
.endobj lbl_8051E998
.obj lbl_8051E99C, local
	.float 360.0
.endobj lbl_8051E99C
.obj lbl_8051E9A0, local
	.float 180.0
.endobj lbl_8051E9A0
.obj lbl_8051E9A4, local # pi
	.float 3.1415927
.endobj lbl_8051E9A4
.obj lbl_8051E9A8, local
	.float 0.0055555557
.endobj lbl_8051E9A8
.obj lbl_8051E9AC, local
	.float 0.1
.endobj lbl_8051E9AC
.obj lbl_8051E9B0, local
	.float 0.2
.endobj lbl_8051E9B0
.obj lbl_8051E9B4, local
	.float 0.8
.endobj lbl_8051E9B4
.obj lbl_8051E9B8, local
	.float 400.0
.endobj lbl_8051E9B8
.obj lbl_8051E9BC, local
	.float -1.0
.endobj lbl_8051E9BC
.obj lbl_8051E9C0, local
	.float -325.9493
.endobj lbl_8051E9C0
.obj lbl_8051E9C4, local
	.float 325.9493
.endobj lbl_8051E9C4
.obj lbl_8051E9C8, local
	.float -2.0
.endobj lbl_8051E9C8
.obj lbl_8051E9CC, local
	.float 100.0
.endobj lbl_8051E9CC
.obj lbl_8051E9D0, local
	.float 0.6
.endobj lbl_8051E9D0
.obj lbl_8051E9D4, local
	.float 0.95
.endobj lbl_8051E9D4
.obj lbl_8051E9D8, local
	.float 1.1
.endobj lbl_8051E9D8
.obj lbl_8051E9DC, local
	.float 1.625
.endobj lbl_8051E9DC
.obj lbl_8051E9E0, local
	.float 0.75
.endobj lbl_8051E9E0
.obj lbl_8051E9E4, local
	.float 0.01
.endobj lbl_8051E9E4
.obj lbl_8051E9E8, local
	.float 0.65
.endobj lbl_8051E9E8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn mouthScaleCallBack__Q24Game6JigumoFP8J3DJointi, local
/* 80368EA0 00365DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368EA4 00365DE4  7C 08 02 A6 */	mflr r0
/* 80368EA8 00365DE8  2C 04 00 00 */	cmpwi r4, 0
/* 80368EAC 00365DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368EB0 00365DF0  40 82 00 14 */	bne .L_80368EC4
/* 80368EB4 00365DF4  80 6D 98 E0 */	lwz r3, curJ__Q24Game6Jigumo@sda21(r13)
/* 80368EB8 00365DF8  28 03 00 00 */	cmplwi r3, 0
/* 80368EBC 00365DFC  41 82 00 08 */	beq .L_80368EC4
/* 80368EC0 00365E00  48 00 30 35 */	bl mouthScaleMtxCalc__Q34Game6Jigumo3ObjFv
.L_80368EC4:
/* 80368EC4 00365E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368EC8 00365E08  38 60 00 01 */	li r3, 1
/* 80368ECC 00365E0C  7C 08 03 A6 */	mtlr r0
/* 80368ED0 00365E10  38 21 00 10 */	addi r1, r1, 0x10
/* 80368ED4 00365E14  4E 80 00 20 */	blr 
.endfn mouthScaleCallBack__Q24Game6JigumoFP8J3DJointi

.fn setParameters__Q34Game6Jigumo3ObjFv, global
/* 80368ED8 00365E18  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80368EDC 00365E1C  7C 08 02 A6 */	mflr r0
/* 80368EE0 00365E20  90 01 00 54 */	stw r0, 0x54(r1)
/* 80368EE4 00365E24  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80368EE8 00365E28  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80368EEC 00365E2C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80368EF0 00365E30  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80368EF4 00365E34  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80368EF8 00365E38  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80368EFC 00365E3C  7C 7E 1B 78 */	mr r30, r3
/* 80368F00 00365E40  4B D9 9C D9 */	bl setParameters__Q24Game9EnemyBaseFv
/* 80368F04 00365E44  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80368F08 00365E48  C3 E3 08 6C */	lfs f31, 0x86c(r3)
/* 80368F0C 00365E4C  C3 C3 08 94 */	lfs f30, 0x894(r3)
/* 80368F10 00365E50  EF DE F8 28 */	fsubs f30, f30, f31
/* 80368F14 00365E54  4B D6 06 8D */	bl rand
/* 80368F18 00365E58  3C 00 43 30 */	lis r0, 0x4330
/* 80368F1C 00365E5C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80368F20 00365E60  90 61 00 0C */	stw r3, 0xc(r1)
/* 80368F24 00365E64  C0 02 06 04 */	lfs f0, lbl_8051E964@sda21(r2)
/* 80368F28 00365E68  90 01 00 08 */	stw r0, 8(r1)
/* 80368F2C 00365E6C  C8 62 06 10 */	lfd f3, lbl_8051E970@sda21(r2)
/* 80368F30 00365E70  EF DE 00 24 */	fdivs f30, f30, f0
/* 80368F34 00365E74  C8 41 00 08 */	lfd f2, 8(r1)
/* 80368F38 00365E78  C0 22 06 00 */	lfs f1, lbl_8051E960@sda21(r2)
/* 80368F3C 00365E7C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80368F40 00365E80  EC 42 18 28 */	fsubs f2, f2, f3
/* 80368F44 00365E84  EC 22 08 24 */	fdivs f1, f2, f1
/* 80368F48 00365E88  EC 00 00 72 */	fmuls f0, f0, f1
/* 80368F4C 00365E8C  FC 00 00 1E */	fctiwz f0, f0
/* 80368F50 00365E90  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80368F54 00365E94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368F58 00365E98  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80368F5C 00365E9C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80368F60 00365EA0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80368F64 00365EA4  EC 00 18 28 */	fsubs f0, f0, f3
/* 80368F68 00365EA8  EF FE F8 3A */	fmadds f31, f30, f0, f31
/* 80368F6C 00365EAC  D3 FE 01 F8 */	stfs f31, 0x1f8(r30)
/* 80368F70 00365EB0  D3 FE 01 68 */	stfs f31, 0x168(r30)
/* 80368F74 00365EB4  D3 FE 01 6C */	stfs f31, 0x16c(r30)
/* 80368F78 00365EB8  D3 FE 01 70 */	stfs f31, 0x170(r30)
/* 80368F7C 00365EBC  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 80368F80 00365EC0  28 03 00 00 */	cmplwi r3, 0
/* 80368F84 00365EC4  41 82 00 28 */	beq .L_80368FAC
/* 80368F88 00365EC8  D3 E3 01 F8 */	stfs f31, 0x1f8(r3)
/* 80368F8C 00365ECC  FC 20 F8 90 */	fmr f1, f31
/* 80368F90 00365ED0  D3 E3 01 68 */	stfs f31, 0x168(r3)
/* 80368F94 00365ED4  D3 E3 01 6C */	stfs f31, 0x16c(r3)
/* 80368F98 00365ED8  D3 E3 01 70 */	stfs f31, 0x170(r3)
/* 80368F9C 00365EDC  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 80368FA0 00365EE0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 80368FA4 00365EE4  80 63 00 00 */	lwz r3, 0(r3)
/* 80368FA8 00365EE8  4B DC EE 65 */	bl setScale__8CollPartFf
.L_80368FAC:
/* 80368FAC 00365EEC  C3 E2 06 08 */	lfs f31, lbl_8051E968@sda21(r2)
/* 80368FB0 00365EF0  3B E0 00 00 */	li r31, 0
/* 80368FB4 00365EF4  48 00 00 34 */	b .L_80368FE8
.L_80368FB8:
/* 80368FB8 00365EF8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80368FBC 00365EFC  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 80368FC0 00365F00  C0 23 09 28 */	lfs f1, 0x928(r3)
/* 80368FC4 00365F04  EF C1 00 32 */	fmuls f30, f1, f0
/* 80368FC8 00365F08  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 80368FCC 00365F0C  40 80 00 08 */	bge .L_80368FD4
/* 80368FD0 00365F10  FF C0 F8 90 */	fmr f30, f31
.L_80368FD4:
/* 80368FD4 00365F14  7F E4 FB 78 */	mr r4, r31
/* 80368FD8 00365F18  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80368FDC 00365F1C  4B DC F7 9D */	bl getSlot__10MouthSlotsFi
/* 80368FE0 00365F20  D3 C3 00 1C */	stfs f30, 0x1c(r3)
/* 80368FE4 00365F24  3B FF 00 01 */	addi r31, r31, 1
.L_80368FE8:
/* 80368FE8 00365F28  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80368FEC 00365F2C  7C 1F 00 00 */	cmpw r31, r0
/* 80368FF0 00365F30  41 80 FF C8 */	blt .L_80368FB8
/* 80368FF4 00365F34  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80368FF8 00365F38  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 80368FFC 00365F3C  C0 03 02 1C */	lfs f0, 0x21c(r3)
/* 80369000 00365F40  EC 01 00 32 */	fmuls f0, f1, f0
/* 80369004 00365F44  D0 1E 02 7C */	stfs f0, 0x27c(r30)
/* 80369008 00365F48  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036900C 00365F4C  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 80369010 00365F50  C0 03 01 F4 */	lfs f0, 0x1f4(r3)
/* 80369014 00365F54  EC 01 00 32 */	fmuls f0, f1, f0
/* 80369018 00365F58  D0 1E 02 F0 */	stfs f0, 0x2f0(r30)
/* 8036901C 00365F5C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80369020 00365F60  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80369024 00365F64  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80369028 00365F68  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8036902C 00365F6C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80369030 00365F70  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80369034 00365F74  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80369038 00365F78  7C 08 03 A6 */	mtlr r0
/* 8036903C 00365F7C  38 21 00 50 */	addi r1, r1, 0x50
/* 80369040 00365F80  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game6Jigumo3ObjFv

.fn "birth__Q34Game6Jigumo3ObjFR10Vector3<f>f", global
/* 80369044 00365F84  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80369048 00365F88  7C 08 02 A6 */	mflr r0
/* 8036904C 00365F8C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80369050 00365F90  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80369054 00365F94  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80369058 00365F98  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8036905C 00365F9C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80369060 00365FA0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80369064 00365FA4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80369068 00365FA8  7C 7E 1B 78 */	mr r30, r3
/* 8036906C 00365FAC  4B D9 99 95 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 80369070 00365FB0  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80369074 00365FB4  38 80 00 53 */	li r4, 0x53
/* 80369078 00365FB8  4B DA 4C 2D */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8036907C 00365FBC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80369080 00365FC0  41 82 00 D0 */	beq .L_80369150
/* 80369084 00365FC4  38 61 00 08 */	addi r3, r1, 8
/* 80369088 00365FC8  4B DC 5B 9D */	bl __ct__Q24Game13EnemyBirthArgFv
/* 8036908C 00365FCC  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 80369090 00365FD0  7F C3 F3 78 */	mr r3, r30
/* 80369094 00365FD4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80369098 00365FD8  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036909C 00365FDC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803690A0 00365FE0  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 803690A4 00365FE4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803690A8 00365FE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803690AC 00365FEC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803690B0 00365FF0  7D 89 03 A6 */	mtctr r12
/* 803690B4 00365FF4  4E 80 04 21 */	bctrl 
/* 803690B8 00365FF8  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803690BC 00365FFC  7F E3 FB 78 */	mr r3, r31
/* 803690C0 00366000  38 81 00 08 */	addi r4, r1, 8
/* 803690C4 00366004  81 9F 00 00 */	lwz r12, 0(r31)
/* 803690C8 00366008  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 803690CC 0036600C  7D 89 03 A6 */	mtctr r12
/* 803690D0 00366010  4E 80 04 21 */	bctrl 
/* 803690D4 00366014  7C 7F 1B 79 */	or. r31, r3, r3
/* 803690D8 00366018  40 82 00 20 */	bne .L_803690F8
/* 803690DC 0036601C  3C 60 80 49 */	lis r3, lbl_80491D98@ha
/* 803690E0 00366020  3C A0 80 49 */	lis r5, lbl_80491DA4@ha
/* 803690E4 00366024  38 63 1D 98 */	addi r3, r3, lbl_80491D98@l
/* 803690E8 00366028  38 80 00 56 */	li r4, 0x56
/* 803690EC 0036602C  38 A5 1D A4 */	addi r5, r5, lbl_80491DA4@l
/* 803690F0 00366030  4C C6 31 82 */	crclr 6
/* 803690F4 00366034  4B CC 15 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803690F8:
/* 803690F8 00366038  7F E3 FB 78 */	mr r3, r31
/* 803690FC 0036603C  38 80 00 00 */	li r4, 0
/* 80369100 00366040  4B DD 1E C9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 80369104 00366044  38 00 00 00 */	li r0, 0
/* 80369108 00366048  7F C3 F3 78 */	mr r3, r30
/* 8036910C 0036604C  90 1E 02 E4 */	stw r0, 0x2e4(r30)
/* 80369110 00366050  93 FE 02 E4 */	stw r31, 0x2e4(r30)
/* 80369114 00366054  81 9E 00 00 */	lwz r12, 0(r30)
/* 80369118 00366058  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8036911C 0036605C  7D 89 03 A6 */	mtctr r12
/* 80369120 00366060  4E 80 04 21 */	bctrl 
/* 80369124 00366064  7C 64 1B 78 */	mr r4, r3
/* 80369128 00366068  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 8036912C 0036606C  48 00 3B 51 */	bl setHouseType__Q34Game4Nest3ObjFi
/* 80369130 00366070  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 80369134 00366074  D0 3F 01 F8 */	stfs f1, 0x1f8(r31)
/* 80369138 00366078  D0 3F 01 68 */	stfs f1, 0x168(r31)
/* 8036913C 0036607C  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 80369140 00366080  D0 3F 01 70 */	stfs f1, 0x170(r31)
/* 80369144 00366084  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80369148 00366088  80 63 00 00 */	lwz r3, 0(r3)
/* 8036914C 0036608C  4B DC EC C1 */	bl setScale__8CollPartFf
.L_80369150:
/* 80369150 00366090  C3 E2 06 08 */	lfs f31, lbl_8051E968@sda21(r2)
/* 80369154 00366094  3B E0 00 00 */	li r31, 0
/* 80369158 00366098  48 00 00 34 */	b .L_8036918C
.L_8036915C:
/* 8036915C 0036609C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80369160 003660A0  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 80369164 003660A4  C0 23 09 28 */	lfs f1, 0x928(r3)
/* 80369168 003660A8  EF C1 00 32 */	fmuls f30, f1, f0
/* 8036916C 003660AC  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 80369170 003660B0  40 80 00 08 */	bge .L_80369178
/* 80369174 003660B4  FF C0 F8 90 */	fmr f30, f31
.L_80369178:
/* 80369178 003660B8  7F E4 FB 78 */	mr r4, r31
/* 8036917C 003660BC  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80369180 003660C0  4B DC F5 F9 */	bl getSlot__10MouthSlotsFi
/* 80369184 003660C4  D3 C3 00 1C */	stfs f30, 0x1c(r3)
/* 80369188 003660C8  3B FF 00 01 */	addi r31, r31, 1
.L_8036918C:
/* 8036918C 003660CC  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80369190 003660D0  7C 1F 00 00 */	cmpw r31, r0
/* 80369194 003660D4  41 80 FF C8 */	blt .L_8036915C
/* 80369198 003660D8  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8036919C 003660DC  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803691A0 003660E0  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 803691A4 003660E4  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 803691A8 003660E8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803691AC 003660EC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803691B0 003660F0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803691B4 003660F4  7C 08 03 A6 */	mtlr r0
/* 803691B8 003660F8  38 21 00 70 */	addi r1, r1, 0x70
/* 803691BC 003660FC  4E 80 00 20 */	blr 
.endfn "birth__Q34Game6Jigumo3ObjFR10Vector3<f>f"

.fn getEnemyTypeID__Q34Game6Jigumo3ObjFv, weak
/* 803691C0 00366100  38 60 00 3F */	li r3, 0x3f
/* 803691C4 00366104  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game6Jigumo3ObjFv

.fn onInit__Q34Game6Jigumo3ObjFPQ24Game15CreatureInitArg, global
/* 803691C8 00366108  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803691CC 0036610C  7C 08 02 A6 */	mflr r0
/* 803691D0 00366110  3C A0 80 49 */	lis r5, lbl_80491D98@ha
/* 803691D4 00366114  38 C0 00 00 */	li r6, 0
/* 803691D8 00366118  90 01 00 24 */	stw r0, 0x24(r1)
/* 803691DC 0036611C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803691E0 00366120  7C 7F 1B 78 */	mr r31, r3
/* 803691E4 00366124  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803691E8 00366128  3B C5 1D 98 */	addi r30, r5, lbl_80491D98@l
/* 803691EC 0036612C  38 A0 00 01 */	li r5, 1
/* 803691F0 00366130  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803691F4 00366134  7C 9D 23 78 */	mr r29, r4
/* 803691F8 00366138  7F E4 FB 78 */	mr r4, r31
/* 803691FC 0036613C  80 63 03 88 */	lwz r3, 0x388(r3)
/* 80369200 00366140  81 83 00 00 */	lwz r12, 0(r3)
/* 80369204 00366144  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80369208 00366148  7D 89 03 A6 */	mtctr r12
/* 8036920C 0036614C  4E 80 04 21 */	bctrl 
/* 80369210 00366150  7F E3 FB 78 */	mr r3, r31
/* 80369214 00366154  7F A4 EB 78 */	mr r4, r29
/* 80369218 00366158  4B D9 88 41 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8036921C 0036615C  7F E3 FB 78 */	mr r3, r31
/* 80369220 00366160  81 9F 00 00 */	lwz r12, 0(r31)
/* 80369224 00366164  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 80369228 00366168  7D 89 03 A6 */	mtctr r12
/* 8036922C 0036616C  4E 80 04 21 */	bctrl 
/* 80369230 00366170  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80369234 00366174  38 80 00 00 */	li r4, 0
/* 80369238 00366178  C0 42 06 18 */	lfs f2, lbl_8051E978@sda21(r2)
/* 8036923C 0036617C  38 00 00 01 */	li r0, 1
/* 80369240 00366180  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80369244 00366184  38 7F 03 10 */	addi r3, r31, 0x310
/* 80369248 00366188  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 8036924C 0036618C  FC 60 10 90 */	fmr f3, f2
/* 80369250 00366190  90 9F 03 34 */	stw r4, 0x334(r31)
/* 80369254 00366194  FC 80 10 90 */	fmr f4, f2
/* 80369258 00366198  D0 5F 02 F8 */	stfs f2, 0x2f8(r31)
/* 8036925C 0036619C  D0 3F 02 FC */	stfs f1, 0x2fc(r31)
/* 80369260 003661A0  D0 5F 03 00 */	stfs f2, 0x300(r31)
/* 80369264 003661A4  C0 1F 02 F8 */	lfs f0, 0x2f8(r31)
/* 80369268 003661A8  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8036926C 003661AC  C0 1F 02 FC */	lfs f0, 0x2fc(r31)
/* 80369270 003661B0  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 80369274 003661B4  C0 1F 03 00 */	lfs f0, 0x300(r31)
/* 80369278 003661B8  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 8036927C 003661BC  D0 5F 03 3C */	stfs f2, 0x33c(r31)
/* 80369280 003661C0  D0 5F 03 38 */	stfs f2, 0x338(r31)
/* 80369284 003661C4  98 1F 03 40 */	stb r0, 0x340(r31)
/* 80369288 003661C8  48 0A 94 FD */	bl set__4QuatFffff
/* 8036928C 003661CC  C0 1F 03 10 */	lfs f0, 0x310(r31)
/* 80369290 003661D0  38 00 00 00 */	li r0, 0
/* 80369294 003661D4  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 80369298 003661D8  38 9E 00 18 */	addi r4, r30, 0x18
/* 8036929C 003661DC  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 803692A0 003661E0  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 803692A4 003661E4  C0 5F 03 14 */	lfs f2, 0x314(r31)
/* 803692A8 003661E8  D0 5F 03 24 */	stfs f2, 0x324(r31)
/* 803692AC 003661EC  C0 5F 03 18 */	lfs f2, 0x318(r31)
/* 803692B0 003661F0  D0 5F 03 28 */	stfs f2, 0x328(r31)
/* 803692B4 003661F4  C0 5F 03 1C */	lfs f2, 0x31c(r31)
/* 803692B8 003661F8  D0 5F 03 2C */	stfs f2, 0x32c(r31)
/* 803692BC 003661FC  D0 3F 03 30 */	stfs f1, 0x330(r31)
/* 803692C0 00366200  D0 3F 02 BC */	stfs f1, 0x2bc(r31)
/* 803692C4 00366204  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 803692C8 00366208  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 803692CC 0036620C  D0 3F 03 44 */	stfs f1, 0x344(r31)
/* 803692D0 00366210  98 1F 02 E9 */	stb r0, 0x2e9(r31)
/* 803692D4 00366214  98 1F 03 84 */	stb r0, 0x384(r31)
/* 803692D8 00366218  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 803692DC 0036621C  D0 3F 03 50 */	stfs f1, 0x350(r31)
/* 803692E0 00366220  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 803692E4 00366224  D0 3F 03 54 */	stfs f1, 0x354(r31)
/* 803692E8 00366228  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 803692EC 0036622C  D0 3F 03 58 */	stfs f1, 0x358(r31)
/* 803692F0 00366230  90 1F 03 5C */	stw r0, 0x35c(r31)
/* 803692F4 00366234  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 803692F8 00366238  D0 3F 03 64 */	stfs f1, 0x364(r31)
/* 803692FC 0036623C  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80369300 00366240  D0 3F 03 68 */	stfs f1, 0x368(r31)
/* 80369304 00366244  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80369308 00366248  D0 3F 03 6C */	stfs f1, 0x36c(r31)
/* 8036930C 0036624C  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 80369310 00366250  90 1F 03 4C */	stw r0, 0x34c(r31)
/* 80369314 00366254  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80369318 00366258  48 0D 5C CD */	bl getJoint__Q28SysShape5ModelFPc
/* 8036931C 0036625C  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 80369320 00366260  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 80369324 00366264  28 00 00 00 */	cmplwi r0, 0
/* 80369328 00366268  40 82 00 18 */	bne .L_80369340
/* 8036932C 0036626C  38 7E 00 00 */	addi r3, r30, 0
/* 80369330 00366270  38 BE 00 0C */	addi r5, r30, 0xc
/* 80369334 00366274  38 80 00 97 */	li r4, 0x97
/* 80369338 00366278  4C C6 31 82 */	crclr 6
/* 8036933C 0036627C  4B CC 13 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80369340:
/* 80369340 00366280  80 7F 03 88 */	lwz r3, 0x388(r31)
/* 80369344 00366284  7F E4 FB 78 */	mr r4, r31
/* 80369348 00366288  38 A0 00 01 */	li r5, 1
/* 8036934C 0036628C  38 C0 00 00 */	li r6, 0
/* 80369350 00366290  81 83 00 00 */	lwz r12, 0(r3)
/* 80369354 00366294  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80369358 00366298  7D 89 03 A6 */	mtctr r12
/* 8036935C 0036629C  4E 80 04 21 */	bctrl 
/* 80369360 003662A0  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 80369364 003662A4  28 00 00 00 */	cmplwi r0, 0
/* 80369368 003662A8  40 82 00 18 */	bne .L_80369380
/* 8036936C 003662AC  38 7E 00 00 */	addi r3, r30, 0
/* 80369370 003662B0  38 BE 00 0C */	addi r5, r30, 0xc
/* 80369374 003662B4  38 80 00 9E */	li r4, 0x9e
/* 80369378 003662B8  4C C6 31 82 */	crclr 6
/* 8036937C 003662BC  4B CC 12 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80369380:
/* 80369380 003662C0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80369384 003662C4  38 9E 00 24 */	addi r4, r30, 0x24
/* 80369388 003662C8  80 A3 00 08 */	lwz r5, 8(r3)
/* 8036938C 003662CC  83 A5 00 04 */	lwz r29, 4(r5)
/* 80369390 003662D0  48 0D 5C 25 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 80369394 003662D4  B0 7F 03 60 */	sth r3, 0x360(r31)
/* 80369398 003662D8  A0 1F 03 60 */	lhz r0, 0x360(r31)
/* 8036939C 003662DC  28 00 00 00 */	cmplwi r0, 0
/* 803693A0 003662E0  40 82 00 18 */	bne .L_803693B8
/* 803693A4 003662E4  38 7E 00 00 */	addi r3, r30, 0
/* 803693A8 003662E8  38 BE 00 0C */	addi r5, r30, 0xc
/* 803693AC 003662EC  38 80 00 A3 */	li r4, 0xa3
/* 803693B0 003662F0  4C C6 31 82 */	crclr 6
/* 803693B4 003662F4  4B CC 12 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803693B8:
/* 803693B8 003662F8  A0 1F 03 60 */	lhz r0, 0x360(r31)
/* 803693BC 003662FC  3C 80 80 37 */	lis r4, mouthScaleCallBack__Q24Game6JigumoFP8J3DJointi@ha
/* 803693C0 00366300  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 803693C4 00366304  38 84 8E A0 */	addi r4, r4, mouthScaleCallBack__Q24Game6JigumoFP8J3DJointi@l
/* 803693C8 00366308  54 00 10 3A */	slwi r0, r0, 2
/* 803693CC 0036630C  7C 63 00 2E */	lwzx r3, r3, r0
/* 803693D0 00366310  90 83 00 04 */	stw r4, 4(r3)
/* 803693D4 00366314  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803693D8 00366318  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 803693DC 0036631C  C0 03 01 F4 */	lfs f0, 0x1f4(r3)
/* 803693E0 00366320  EC 01 00 32 */	fmuls f0, f1, f0
/* 803693E4 00366324  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 803693E8 00366328  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803693EC 0036632C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803693F0 00366330  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803693F4 00366334  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803693F8 00366338  7C 08 03 A6 */	mtlr r0
/* 803693FC 0036633C  38 21 00 20 */	addi r1, r1, 0x20
/* 80369400 00366340  4E 80 00 20 */	blr 
.endfn onInit__Q34Game6Jigumo3ObjFPQ24Game15CreatureInitArg

.fn __ct__Q34Game6Jigumo3ObjFv, global
/* 80369404 00366344  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80369408 00366348  7C 08 02 A6 */	mflr r0
/* 8036940C 0036634C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80369410 00366350  7C 80 07 35 */	extsh. r0, r4
/* 80369414 00366354  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80369418 00366358  7C 7F 1B 78 */	mr r31, r3
/* 8036941C 0036635C  93 C1 00 08 */	stw r30, 8(r1)
/* 80369420 00366360  41 82 00 24 */	beq .L_80369444
/* 80369424 00366364  38 1F 03 8C */	addi r0, r31, 0x38c
/* 80369428 00366368  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8036942C 0036636C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80369430 00366370  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80369434 00366374  38 00 00 00 */	li r0, 0
/* 80369438 00366378  90 7F 03 8C */	stw r3, 0x38c(r31)
/* 8036943C 0036637C  90 1F 03 90 */	stw r0, 0x390(r31)
/* 80369440 00366380  90 1F 03 94 */	stw r0, 0x394(r31)
.L_80369444:
/* 80369444 00366384  7F E3 FB 78 */	mr r3, r31
/* 80369448 00366388  38 80 00 00 */	li r4, 0
/* 8036944C 0036638C  4B D9 7F 55 */	bl __ct__Q24Game9EnemyBaseFv
/* 80369450 00366390  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo3Obj@ha
/* 80369454 00366394  38 1F 03 8C */	addi r0, r31, 0x38c
/* 80369458 00366398  38 A3 2C 58 */	addi r5, r3, __vt__Q34Game6Jigumo3Obj@l
/* 8036945C 0036639C  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 80369460 003663A0  90 BF 00 00 */	stw r5, 0(r31)
/* 80369464 003663A4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80369468 003663A8  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8036946C 003663AC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80369470 003663B0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80369474 003663B4  90 A4 00 00 */	stw r5, 0(r4)
/* 80369478 003663B8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8036947C 003663BC  7C 04 00 50 */	subf r0, r4, r0
/* 80369480 003663C0  90 04 00 0C */	stw r0, 0xc(r4)
/* 80369484 003663C4  4B DC F0 C5 */	bl __ct__10MouthSlotsFv
/* 80369488 003663C8  38 00 00 00 */	li r0, 0
/* 8036948C 003663CC  38 7F 03 10 */	addi r3, r31, 0x310
/* 80369490 003663D0  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 80369494 003663D4  48 0A 8F 35 */	bl __ct__4QuatFv
/* 80369498 003663D8  38 7F 03 20 */	addi r3, r31, 0x320
/* 8036949C 003663DC  48 0A 8F 2D */	bl __ct__4QuatFv
/* 803694A0 003663E0  38 60 00 01 */	li r3, 1
/* 803694A4 003663E4  38 00 00 00 */	li r0, 0
/* 803694A8 003663E8  98 7F 03 85 */	stb r3, 0x385(r31)
/* 803694AC 003663EC  38 60 00 2C */	li r3, 0x2c
/* 803694B0 003663F0  90 1F 03 88 */	stw r0, 0x388(r31)
/* 803694B4 003663F4  4B CB A9 F1 */	bl __nw__FUl
/* 803694B8 003663F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803694BC 003663FC  41 82 00 44 */	beq .L_80369500
/* 803694C0 00366400  4B DB E4 B5 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 803694C4 00366404  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo14ProperAnimator@ha
/* 803694C8 00366408  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 803694CC 0036640C  38 03 2B 40 */	addi r0, r3, __vt__Q34Game6Jigumo14ProperAnimator@l
/* 803694D0 00366410  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 803694D4 00366414  90 1E 00 00 */	stw r0, 0(r30)
/* 803694D8 00366418  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 803694DC 0036641C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 803694E0 00366420  38 00 00 00 */	li r0, 0
/* 803694E4 00366424  90 9E 00 10 */	stw r4, 0x10(r30)
/* 803694E8 00366428  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803694EC 0036642C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 803694F0 00366430  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803694F4 00366434  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803694F8 00366438  98 1E 00 28 */	stb r0, 0x28(r30)
/* 803694FC 0036643C  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80369500:
/* 80369500 00366440  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80369504 00366444  38 60 00 1C */	li r3, 0x1c
/* 80369508 00366448  4B CB A9 9D */	bl __nw__FUl
/* 8036950C 0036644C  7C 64 1B 79 */	or. r4, r3, r3
/* 80369510 00366450  41 82 00 24 */	beq .L_80369534
/* 80369514 00366454  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80369518 00366458  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo3FSM@ha
/* 8036951C 0036645C  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80369520 00366460  38 A0 FF FF */	li r5, -1
/* 80369524 00366464  90 04 00 00 */	stw r0, 0(r4)
/* 80369528 00366468  38 03 2B 18 */	addi r0, r3, __vt__Q34Game6Jigumo3FSM@l
/* 8036952C 0036646C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80369530 00366470  90 04 00 00 */	stw r0, 0(r4)
.L_80369534:
/* 80369534 00366474  81 9F 00 00 */	lwz r12, 0(r31)
/* 80369538 00366478  7F E3 FB 78 */	mr r3, r31
/* 8036953C 0036647C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 80369540 00366480  7D 89 03 A6 */	mtctr r12
/* 80369544 00366484  4E 80 04 21 */	bctrl 
/* 80369548 00366488  38 60 00 2C */	li r3, 0x2c
/* 8036954C 0036648C  4B CB A9 59 */	bl __nw__FUl
/* 80369550 00366490  7C 7E 1B 79 */	or. r30, r3, r3
/* 80369554 00366494  41 82 00 20 */	beq .L_80369574
/* 80369558 00366498  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8036955C 0036649C  38 A0 00 B9 */	li r5, 0xb9
/* 80369560 003664A0  38 C0 00 BA */	li r6, 0xba
/* 80369564 003664A4  48 04 6C DD */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 80369568 003664A8  3C 60 80 4E */	lis r3, __vt__Q23efx10TJgmAttack@ha
/* 8036956C 003664AC  38 03 6F 9C */	addi r0, r3, __vt__Q23efx10TJgmAttack@l
/* 80369570 003664B0  90 1E 00 00 */	stw r0, 0(r30)
.L_80369574:
/* 80369574 003664B4  93 DF 03 70 */	stw r30, 0x370(r31)
/* 80369578 003664B8  80 1F 03 70 */	lwz r0, 0x370(r31)
/* 8036957C 003664BC  28 00 00 00 */	cmplwi r0, 0
/* 80369580 003664C0  40 82 00 20 */	bne .L_803695A0
/* 80369584 003664C4  3C 60 80 49 */	lis r3, lbl_80491D98@ha
/* 80369588 003664C8  3C A0 80 49 */	lis r5, lbl_80491DA4@ha
/* 8036958C 003664CC  38 63 1D 98 */	addi r3, r3, lbl_80491D98@l
/* 80369590 003664D0  38 80 00 BC */	li r4, 0xbc
/* 80369594 003664D4  38 A5 1D A4 */	addi r5, r5, lbl_80491DA4@l
/* 80369598 003664D8  4C C6 31 82 */	crclr 6
/* 8036959C 003664DC  4B CC 10 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803695A0:
/* 803695A0 003664E0  38 60 00 4C */	li r3, 0x4c
/* 803695A4 003664E4  4B CB A9 01 */	bl __nw__FUl
/* 803695A8 003664E8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803695AC 003664EC  41 82 00 28 */	beq .L_803695D4
/* 803695B0 003664F0  38 9F 03 64 */	addi r4, r31, 0x364
/* 803695B4 003664F4  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 803695B8 003664F8  38 C0 00 BB */	li r6, 0xbb
/* 803695BC 003664FC  38 E0 00 BC */	li r7, 0xbc
/* 803695C0 00366500  39 00 00 BD */	li r8, 0xbd
/* 803695C4 00366504  48 04 75 01 */	bl "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"
/* 803695C8 00366508  3C 60 80 4E */	lis r3, __vt__Q23efx11TJgmAttackW@ha
/* 803695CC 0036650C  38 03 6F 80 */	addi r0, r3, __vt__Q23efx11TJgmAttackW@l
/* 803695D0 00366510  90 1E 00 00 */	stw r0, 0(r30)
.L_803695D4:
/* 803695D4 00366514  93 DF 03 74 */	stw r30, 0x374(r31)
/* 803695D8 00366518  80 1F 03 74 */	lwz r0, 0x374(r31)
/* 803695DC 0036651C  28 00 00 00 */	cmplwi r0, 0
/* 803695E0 00366520  40 82 00 20 */	bne .L_80369600
/* 803695E4 00366524  3C 60 80 49 */	lis r3, lbl_80491D98@ha
/* 803695E8 00366528  3C A0 80 49 */	lis r5, lbl_80491DA4@ha
/* 803695EC 0036652C  38 63 1D 98 */	addi r3, r3, lbl_80491D98@l
/* 803695F0 00366530  38 80 00 BF */	li r4, 0xbf
/* 803695F4 00366534  38 A5 1D A4 */	addi r5, r5, lbl_80491DA4@l
/* 803695F8 00366538  4C C6 31 82 */	crclr 6
/* 803695FC 0036653C  4B CC 10 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80369600:
/* 80369600 00366540  38 60 00 14 */	li r3, 0x14
/* 80369604 00366544  4B CB A8 A1 */	bl __nw__FUl
/* 80369608 00366548  28 03 00 00 */	cmplwi r3, 0
/* 8036960C 0036654C  41 82 00 7C */	beq .L_80369688
/* 80369610 00366550  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80369614 00366554  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80369618 00366558  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8036961C 0036655C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80369620 00366560  90 03 00 00 */	stw r0, 0(r3)
/* 80369624 00366564  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80369628 00366568  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8036962C 0036656C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80369630 00366570  90 03 00 04 */	stw r0, 4(r3)
/* 80369634 00366574  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 80369638 00366578  3C 80 80 4E */	lis r4, __vt__Q23efx8TJgmBack@ha
/* 8036963C 0036657C  38 05 00 14 */	addi r0, r5, 0x14
/* 80369640 00366580  90 A3 00 00 */	stw r5, 0(r3)
/* 80369644 00366584  38 84 6F 34 */	addi r4, r4, __vt__Q23efx8TJgmBack@l
/* 80369648 00366588  39 40 00 00 */	li r10, 0
/* 8036964C 0036658C  39 20 02 B2 */	li r9, 0x2b2
/* 80369650 00366590  90 03 00 04 */	stw r0, 4(r3)
/* 80369654 00366594  38 E8 00 14 */	addi r7, r8, 0x14
/* 80369658 00366598  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8036965C 0036659C  38 A0 00 BE */	li r5, 0xbe
/* 80369660 003665A0  91 43 00 08 */	stw r10, 8(r3)
/* 80369664 003665A4  38 04 00 14 */	addi r0, r4, 0x14
/* 80369668 003665A8  B1 23 00 0C */	sth r9, 0xc(r3)
/* 8036966C 003665AC  99 43 00 0E */	stb r10, 0xe(r3)
/* 80369670 003665B0  91 03 00 00 */	stw r8, 0(r3)
/* 80369674 003665B4  90 E3 00 04 */	stw r7, 4(r3)
/* 80369678 003665B8  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8036967C 003665BC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80369680 003665C0  90 83 00 00 */	stw r4, 0(r3)
/* 80369684 003665C4  90 03 00 04 */	stw r0, 4(r3)
.L_80369688:
/* 80369688 003665C8  90 7F 03 78 */	stw r3, 0x378(r31)
/* 8036968C 003665CC  80 1F 03 78 */	lwz r0, 0x378(r31)
/* 80369690 003665D0  28 00 00 00 */	cmplwi r0, 0
/* 80369694 003665D4  40 82 00 20 */	bne .L_803696B4
/* 80369698 003665D8  3C 60 80 49 */	lis r3, lbl_80491D98@ha
/* 8036969C 003665DC  3C A0 80 49 */	lis r5, lbl_80491DA4@ha
/* 803696A0 003665E0  38 63 1D 98 */	addi r3, r3, lbl_80491D98@l
/* 803696A4 003665E4  38 80 00 C2 */	li r4, 0xc2
/* 803696A8 003665E8  38 A5 1D A4 */	addi r5, r5, lbl_80491DA4@l
/* 803696AC 003665EC  4C C6 31 82 */	crclr 6
/* 803696B0 003665F0  4B CC 0F 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803696B4:
/* 803696B4 003665F4  38 60 00 34 */	li r3, 0x34
/* 803696B8 003665F8  4B CB A7 ED */	bl __nw__FUl
/* 803696BC 003665FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803696C0 00366600  41 82 00 24 */	beq .L_803696E4
/* 803696C4 00366604  38 9F 03 64 */	addi r4, r31, 0x364
/* 803696C8 00366608  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 803696CC 0036660C  38 C0 00 BF */	li r6, 0xbf
/* 803696D0 00366610  38 E0 00 C0 */	li r7, 0xc0
/* 803696D4 00366614  48 04 72 F9 */	bl "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
/* 803696D8 00366618  3C 60 80 4E */	lis r3, __vt__Q23efx9TJgmBackW@ha
/* 803696DC 0036661C  38 03 6F 18 */	addi r0, r3, __vt__Q23efx9TJgmBackW@l
/* 803696E0 00366620  90 1E 00 00 */	stw r0, 0(r30)
.L_803696E4:
/* 803696E4 00366624  93 DF 03 7C */	stw r30, 0x37c(r31)
/* 803696E8 00366628  80 1F 03 7C */	lwz r0, 0x37c(r31)
/* 803696EC 0036662C  28 00 00 00 */	cmplwi r0, 0
/* 803696F0 00366630  40 82 00 20 */	bne .L_80369710
/* 803696F4 00366634  3C 60 80 49 */	lis r3, lbl_80491D98@ha
/* 803696F8 00366638  3C A0 80 49 */	lis r5, lbl_80491DA4@ha
/* 803696FC 0036663C  38 63 1D 98 */	addi r3, r3, lbl_80491D98@l
/* 80369700 00366640  38 80 00 C5 */	li r4, 0xc5
/* 80369704 00366644  38 A5 1D A4 */	addi r5, r5, lbl_80491DA4@l
/* 80369708 00366648  4C C6 31 82 */	crclr 6
/* 8036970C 0036664C  4B CC 0F 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80369710:
/* 80369710 00366650  38 60 00 14 */	li r3, 0x14
/* 80369714 00366654  4B CB A7 91 */	bl __nw__FUl
/* 80369718 00366658  28 03 00 00 */	cmplwi r3, 0
/* 8036971C 0036665C  41 82 00 7C */	beq .L_80369798
/* 80369720 00366660  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80369724 00366664  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80369728 00366668  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8036972C 0036666C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80369730 00366670  90 03 00 00 */	stw r0, 0(r3)
/* 80369734 00366674  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80369738 00366678  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8036973C 0036667C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80369740 00366680  90 03 00 04 */	stw r0, 4(r3)
/* 80369744 00366684  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 80369748 00366688  3C 80 80 4E */	lis r4, __vt__Q23efx9TImoSmoke@ha
/* 8036974C 0036668C  38 05 00 14 */	addi r0, r5, 0x14
/* 80369750 00366690  90 A3 00 00 */	stw r5, 0(r3)
/* 80369754 00366694  38 84 6E 58 */	addi r4, r4, __vt__Q23efx9TImoSmoke@l
/* 80369758 00366698  39 40 00 00 */	li r10, 0
/* 8036975C 0036669C  39 20 02 B2 */	li r9, 0x2b2
/* 80369760 003666A0  90 03 00 04 */	stw r0, 4(r3)
/* 80369764 003666A4  38 E8 00 14 */	addi r7, r8, 0x14
/* 80369768 003666A8  38 DF 03 64 */	addi r6, r31, 0x364
/* 8036976C 003666AC  38 A0 00 B8 */	li r5, 0xb8
/* 80369770 003666B0  91 43 00 08 */	stw r10, 8(r3)
/* 80369774 003666B4  38 04 00 14 */	addi r0, r4, 0x14
/* 80369778 003666B8  B1 23 00 0C */	sth r9, 0xc(r3)
/* 8036977C 003666BC  99 43 00 0E */	stb r10, 0xe(r3)
/* 80369780 003666C0  91 03 00 00 */	stw r8, 0(r3)
/* 80369784 003666C4  90 E3 00 04 */	stw r7, 4(r3)
/* 80369788 003666C8  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8036978C 003666CC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80369790 003666D0  90 83 00 00 */	stw r4, 0(r3)
/* 80369794 003666D4  90 03 00 04 */	stw r0, 4(r3)
.L_80369798:
/* 80369798 003666D8  90 7F 03 80 */	stw r3, 0x380(r31)
/* 8036979C 003666DC  80 1F 03 78 */	lwz r0, 0x378(r31)
/* 803697A0 003666E0  28 00 00 00 */	cmplwi r0, 0
/* 803697A4 003666E4  40 82 00 20 */	bne .L_803697C4
/* 803697A8 003666E8  3C 60 80 49 */	lis r3, lbl_80491D98@ha
/* 803697AC 003666EC  3C A0 80 49 */	lis r5, lbl_80491DA4@ha
/* 803697B0 003666F0  38 63 1D 98 */	addi r3, r3, lbl_80491D98@l
/* 803697B4 003666F4  38 80 00 C8 */	li r4, 0xc8
/* 803697B8 003666F8  38 A5 1D A4 */	addi r5, r5, lbl_80491DA4@l
/* 803697BC 003666FC  4C C6 31 82 */	crclr 6
/* 803697C0 00366700  4B CC 0E 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803697C4:
/* 803697C4 00366704  38 00 00 00 */	li r0, 0
/* 803697C8 00366708  7F E3 FB 78 */	mr r3, r31
/* 803697CC 0036670C  90 0D 98 E0 */	stw r0, curJ__Q24Game6Jigumo@sda21(r13)
/* 803697D0 00366710  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803697D4 00366714  83 C1 00 08 */	lwz r30, 8(r1)
/* 803697D8 00366718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803697DC 0036671C  7C 08 03 A6 */	mtlr r0
/* 803697E0 00366720  38 21 00 10 */	addi r1, r1, 0x10
/* 803697E4 00366724  4E 80 00 20 */	blr 
.endfn __ct__Q34Game6Jigumo3ObjFv

.fn setFSM__Q34Game6Jigumo3ObjFPQ34Game6Jigumo3FSM, weak
/* 803697E8 00366728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803697EC 0036672C  7C 08 02 A6 */	mflr r0
/* 803697F0 00366730  90 01 00 14 */	stw r0, 0x14(r1)
/* 803697F4 00366734  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803697F8 00366738  7C 7F 1B 78 */	mr r31, r3
/* 803697FC 0036673C  90 83 03 88 */	stw r4, 0x388(r3)
/* 80369800 00366740  7F E4 FB 78 */	mr r4, r31
/* 80369804 00366744  80 63 03 88 */	lwz r3, 0x388(r3)
/* 80369808 00366748  81 83 00 00 */	lwz r12, 0(r3)
/* 8036980C 0036674C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80369810 00366750  7D 89 03 A6 */	mtctr r12
/* 80369814 00366754  4E 80 04 21 */	bctrl 
/* 80369818 00366758  38 00 00 00 */	li r0, 0
/* 8036981C 0036675C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80369820 00366760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80369824 00366764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80369828 00366768  7C 08 03 A6 */	mtlr r0
/* 8036982C 0036676C  38 21 00 10 */	addi r1, r1, 0x10
/* 80369830 00366770  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game6Jigumo3ObjFPQ34Game6Jigumo3FSM

.fn doUpdate__Q34Game6Jigumo3ObjFv, global
/* 80369834 00366774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80369838 00366778  7C 08 02 A6 */	mflr r0
/* 8036983C 0036677C  7C 64 1B 78 */	mr r4, r3
/* 80369840 00366780  90 01 00 14 */	stw r0, 0x14(r1)
/* 80369844 00366784  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80369848 00366788  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8036984C 0036678C  40 82 00 18 */	bne .L_80369864
/* 80369850 00366790  80 64 03 88 */	lwz r3, 0x388(r4)
/* 80369854 00366794  81 83 00 00 */	lwz r12, 0(r3)
/* 80369858 00366798  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036985C 0036679C  7D 89 03 A6 */	mtctr r12
/* 80369860 003667A0  4E 80 04 21 */	bctrl 
.L_80369864:
/* 80369864 003667A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80369868 003667A8  7C 08 03 A6 */	mtlr r0
/* 8036986C 003667AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80369870 003667B0  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game6Jigumo3ObjFv

.fn doDirectDraw__Q34Game6Jigumo3ObjFR8Graphics, global
/* 80369874 003667B4  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game6Jigumo3ObjFR8Graphics

.fn doDebugDraw__Q34Game6Jigumo3ObjFR8Graphics, global
/* 80369878 003667B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036987C 003667BC  7C 08 02 A6 */	mflr r0
/* 80369880 003667C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80369884 003667C4  4B D9 C5 E9 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80369888 003667C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036988C 003667CC  7C 08 03 A6 */	mtlr r0
/* 80369890 003667D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80369894 003667D4  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game6Jigumo3ObjFR8Graphics

.fn doAnimationCullingOff__Q34Game6Jigumo3ObjFv, global
/* 80369898 003667D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036989C 003667DC  7C 08 02 A6 */	mflr r0
/* 803698A0 003667E0  38 80 00 00 */	li r4, 0
/* 803698A4 003667E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803698A8 003667E8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803698AC 003667EC  7C 7F 1B 78 */	mr r31, r3
/* 803698B0 003667F0  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 803698B4 003667F4  4B DC EE C5 */	bl getSlot__10MouthSlotsFi
/* 803698B8 003667F8  80 03 00 64 */	lwz r0, 0x64(r3)
/* 803698BC 003667FC  28 00 00 00 */	cmplwi r0, 0
/* 803698C0 00366800  41 82 00 08 */	beq .L_803698C8
/* 803698C4 00366804  93 ED 98 E0 */	stw r31, curJ__Q24Game6Jigumo@sda21(r13)
.L_803698C8:
/* 803698C8 00366808  80 9F 01 88 */	lwz r4, 0x188(r31)
/* 803698CC 0036680C  38 00 00 00 */	li r0, 0
/* 803698D0 00366810  7F E3 FB 78 */	mr r3, r31
/* 803698D4 00366814  98 04 00 24 */	stb r0, 0x24(r4)
/* 803698D8 00366818  81 9F 00 00 */	lwz r12, 0(r31)
/* 803698DC 0036681C  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 803698E0 00366820  7D 89 03 A6 */	mtctr r12
/* 803698E4 00366824  4E 80 04 21 */	bctrl 
/* 803698E8 00366828  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803698EC 0036682C  80 03 00 04 */	lwz r0, 4(r3)
/* 803698F0 00366830  28 00 00 00 */	cmplwi r0, 0
/* 803698F4 00366834  41 82 00 6C */	beq .L_80369960
/* 803698F8 00366838  38 9F 01 38 */	addi r4, r31, 0x138
/* 803698FC 0036683C  4B DF C4 A5 */	bl viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
/* 80369900 00366840  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 80369904 00366844  38 7F 01 38 */	addi r3, r31, 0x138
/* 80369908 00366848  80 84 00 08 */	lwz r4, 8(r4)
/* 8036990C 0036684C  38 84 00 24 */	addi r4, r4, 0x24
/* 80369910 00366850  4B D8 09 BD */	bl PSMTXCopy
/* 80369914 00366854  C0 1F 01 44 */	lfs f0, 0x144(r31)
/* 80369918 00366858  7F E3 FB 78 */	mr r3, r31
/* 8036991C 0036685C  38 81 00 18 */	addi r4, r1, 0x18
/* 80369920 00366860  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80369924 00366864  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 80369928 00366868  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8036992C 0036686C  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 80369930 00366870  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80369934 00366874  81 9F 00 00 */	lwz r12, 0(r31)
/* 80369938 00366878  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8036993C 0036687C  7D 89 03 A6 */	mtctr r12
/* 80369940 00366880  4E 80 04 21 */	bctrl 
/* 80369944 00366884  7F E3 FB 78 */	mr r3, r31
/* 80369948 00366888  38 81 00 18 */	addi r4, r1, 0x18
/* 8036994C 0036688C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80369950 00366890  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80369954 00366894  7D 89 03 A6 */	mtctr r12
/* 80369958 00366898  4E 80 04 21 */	bctrl 
/* 8036995C 0036689C  48 00 00 0C */	b .L_80369968
.L_80369960:
/* 80369960 003668A0  7F E3 FB 78 */	mr r3, r31
/* 80369964 003668A4  48 00 17 C5 */	bl calcBaseTrMatrix__Q34Game6Jigumo3ObjFv
.L_80369968:
/* 80369968 003668A8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8036996C 003668AC  80 63 00 08 */	lwz r3, 8(r3)
/* 80369970 003668B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80369974 003668B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80369978 003668B8  7D 89 03 A6 */	mtctr r12
/* 8036997C 003668BC  4E 80 04 21 */	bctrl 
/* 80369980 003668C0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80369984 003668C4  38 81 00 08 */	addi r4, r1, 8
/* 80369988 003668C8  80 63 00 00 */	lwz r3, 0(r3)
/* 8036998C 003668CC  4B DC E8 71 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80369990 003668D0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80369994 003668D4  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 80369998 003668D8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8036999C 003668DC  EC 22 00 72 */	fmuls f1, f2, f1
/* 803699A0 003668E0  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803699A4 003668E4  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 803699A8 003668E8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803699AC 003668EC  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 803699B0 003668F0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803699B4 003668F4  D0 1F 02 28 */	stfs f0, 0x228(r31)
/* 803699B8 003668F8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803699BC 003668FC  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 803699C0 00366900  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803699C4 00366904  4B DC C0 D9 */	bl update__8CollTreeFv
/* 803699C8 00366908  38 00 00 00 */	li r0, 0
/* 803699CC 0036690C  90 0D 98 E0 */	stw r0, curJ__Q24Game6Jigumo@sda21(r13)
/* 803699D0 00366910  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803699D4 00366914  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803699D8 00366918  7C 08 03 A6 */	mtlr r0
/* 803699DC 0036691C  38 21 00 30 */	addi r1, r1, 0x30
/* 803699E0 00366920  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game6Jigumo3ObjFv

.fn startCarcassMotion__Q34Game6Jigumo3ObjFv, global
/* 803699E4 00366924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803699E8 00366928  7C 08 02 A6 */	mflr r0
/* 803699EC 0036692C  38 80 00 0E */	li r4, 0xe
/* 803699F0 00366930  38 A0 00 00 */	li r5, 0
/* 803699F4 00366934  90 01 00 14 */	stw r0, 0x14(r1)
/* 803699F8 00366938  4B D9 B6 0D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803699FC 0036693C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80369A00 00366940  7C 08 03 A6 */	mtlr r0
/* 80369A04 00366944  38 21 00 10 */	addi r1, r1, 0x10
/* 80369A08 00366948  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game6Jigumo3ObjFv

.fn initMouthSlots__Q34Game6Jigumo3ObjFv, global
/* 80369A0C 0036694C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80369A10 00366950  7C 08 02 A6 */	mflr r0
/* 80369A14 00366954  90 01 00 34 */	stw r0, 0x34(r1)
/* 80369A18 00366958  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80369A1C 0036695C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80369A20 00366960  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80369A24 00366964  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 80369A28 00366968  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80369A2C 0036696C  93 C1 00 08 */	stw r30, 8(r1)
/* 80369A30 00366970  7C 7E 1B 78 */	mr r30, r3
/* 80369A34 00366974  38 80 00 01 */	li r4, 1
/* 80369A38 00366978  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80369A3C 0036697C  4B DC EB 1D */	bl alloc__10MouthSlotsFi
/* 80369A40 00366980  3C 60 80 49 */	lis r3, lbl_80491DBC@ha
/* 80369A44 00366984  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80369A48 00366988  38 C3 1D BC */	addi r6, r3, lbl_80491DBC@l
/* 80369A4C 0036698C  38 80 00 00 */	li r4, 0
/* 80369A50 00366990  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80369A54 00366994  4B DC EC 3D */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80369A58 00366998  C3 E2 06 08 */	lfs f31, lbl_8051E968@sda21(r2)
/* 80369A5C 0036699C  3B E0 00 00 */	li r31, 0
/* 80369A60 003669A0  48 00 00 34 */	b .L_80369A94
.L_80369A64:
/* 80369A64 003669A4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80369A68 003669A8  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 80369A6C 003669AC  C0 23 09 28 */	lfs f1, 0x928(r3)
/* 80369A70 003669B0  EF C1 00 32 */	fmuls f30, f1, f0
/* 80369A74 003669B4  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 80369A78 003669B8  40 80 00 08 */	bge .L_80369A80
/* 80369A7C 003669BC  FF C0 F8 90 */	fmr f30, f31
.L_80369A80:
/* 80369A80 003669C0  7F E4 FB 78 */	mr r4, r31
/* 80369A84 003669C4  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80369A88 003669C8  4B DC EC F1 */	bl getSlot__10MouthSlotsFi
/* 80369A8C 003669CC  D3 C3 00 1C */	stfs f30, 0x1c(r3)
/* 80369A90 003669D0  3B FF 00 01 */	addi r31, r31, 1
.L_80369A94:
/* 80369A94 003669D4  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80369A98 003669D8  7C 1F 00 00 */	cmpw r31, r0
/* 80369A9C 003669DC  41 80 FF C8 */	blt .L_80369A64
/* 80369AA0 003669E0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80369AA4 003669E4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80369AA8 003669E8  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 80369AAC 003669EC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80369AB0 003669F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80369AB4 003669F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80369AB8 003669F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80369ABC 003669FC  7C 08 03 A6 */	mtlr r0
/* 80369AC0 00366A00  38 21 00 30 */	addi r1, r1, 0x30
/* 80369AC4 00366A04  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game6Jigumo3ObjFv

.fn doGetLifeGaugeParam__Q34Game6Jigumo3ObjFRQ24Game14LifeGaugeParam, global
/* 80369AC8 00366A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80369ACC 00366A0C  7C 08 02 A6 */	mflr r0
/* 80369AD0 00366A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80369AD4 00366A14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80369AD8 00366A18  3B E0 00 00 */	li r31, 0
/* 80369ADC 00366A1C  93 C1 00 08 */	stw r30, 8(r1)
/* 80369AE0 00366A20  7C 9E 23 78 */	mr r30, r4
/* 80369AE4 00366A24  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80369AE8 00366A28  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80369AEC 00366A2C  C0 05 01 2C */	lfs f0, 0x12c(r5)
/* 80369AF0 00366A30  C0 65 09 30 */	lfs f3, 0x930(r5)
/* 80369AF4 00366A34  EC 01 00 2A */	fadds f0, f1, f0
/* 80369AF8 00366A38  C0 43 01 F8 */	lfs f2, 0x1f8(r3)
/* 80369AFC 00366A3C  C0 83 01 94 */	lfs f4, 0x194(r3)
/* 80369B00 00366A40  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80369B04 00366A44  EC 43 00 BA */	fmadds f2, f3, f2, f0
/* 80369B08 00366A48  C0 02 06 20 */	lfs f0, lbl_8051E980@sda21(r2)
/* 80369B0C 00366A4C  D0 24 00 00 */	stfs f1, 0(r4)
/* 80369B10 00366A50  D0 44 00 04 */	stfs f2, 4(r4)
/* 80369B14 00366A54  D0 84 00 08 */	stfs f4, 8(r4)
/* 80369B18 00366A58  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 80369B1C 00366A5C  C0 23 02 04 */	lfs f1, 0x204(r3)
/* 80369B20 00366A60  EC 22 08 24 */	fdivs f1, f2, f1
/* 80369B24 00366A64  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 80369B28 00366A68  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80369B2C 00366A6C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80369B30 00366A70  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80369B34 00366A74  41 82 00 14 */	beq .L_80369B48
/* 80369B38 00366A78  4B D9 9B 71 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 80369B3C 00366A7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80369B40 00366A80  41 82 00 08 */	beq .L_80369B48
/* 80369B44 00366A84  3B E0 00 01 */	li r31, 1
.L_80369B48:
/* 80369B48 00366A88  9B FE 00 14 */	stb r31, 0x14(r30)
/* 80369B4C 00366A8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80369B50 00366A90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80369B54 00366A94  83 C1 00 08 */	lwz r30, 8(r1)
/* 80369B58 00366A98  7C 08 03 A6 */	mtlr r0
/* 80369B5C 00366A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80369B60 00366AA0  4E 80 00 20 */	blr 
.endfn doGetLifeGaugeParam__Q34Game6Jigumo3ObjFRQ24Game14LifeGaugeParam

.fn pressCallBack__Q34Game6Jigumo3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80369B64 00366AA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80369B68 00366AA8  7C 08 02 A6 */	mflr r0
/* 80369B6C 00366AAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80369B70 00366AB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80369B74 00366AB4  7C BF 2B 78 */	mr r31, r5
/* 80369B78 00366AB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80369B7C 00366ABC  7C 9E 23 78 */	mr r30, r4
/* 80369B80 00366AC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80369B84 00366AC4  7C 7D 1B 78 */	mr r29, r3
/* 80369B88 00366AC8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80369B8C 00366ACC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80369B90 00366AD0  41 82 00 18 */	beq .L_80369BA8
/* 80369B94 00366AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80369B98 00366AD8  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 80369B9C 00366ADC  7D 89 03 A6 */	mtctr r12
/* 80369BA0 00366AE0  4E 80 04 21 */	bctrl 
/* 80369BA4 00366AE4  48 00 00 AC */	b .L_80369C50
.L_80369BA8:
/* 80369BA8 00366AE8  4B D9 D8 4D */	bl getStateID__Q24Game9EnemyBaseFv
/* 80369BAC 00366AEC  2C 03 00 07 */	cmpwi r3, 7
/* 80369BB0 00366AF0  41 82 00 1C */	beq .L_80369BCC
/* 80369BB4 00366AF4  7F A3 EB 78 */	mr r3, r29
/* 80369BB8 00366AF8  4B D9 D8 3D */	bl getStateID__Q24Game9EnemyBaseFv
/* 80369BBC 00366AFC  2C 03 00 06 */	cmpwi r3, 6
/* 80369BC0 00366B00  41 82 00 0C */	beq .L_80369BCC
/* 80369BC4 00366B04  38 60 00 00 */	li r3, 0
/* 80369BC8 00366B08  48 00 00 88 */	b .L_80369C50
.L_80369BCC:
/* 80369BCC 00366B0C  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80369BD0 00366B10  88 03 08 FE */	lbz r0, 0x8fe(r3)
/* 80369BD4 00366B14  28 00 00 00 */	cmplwi r0, 0
/* 80369BD8 00366B18  41 82 00 74 */	beq .L_80369C4C
/* 80369BDC 00366B1C  28 1F 00 00 */	cmplwi r31, 0
/* 80369BE0 00366B20  41 82 00 6C */	beq .L_80369C4C
/* 80369BE4 00366B24  7F C3 F3 78 */	mr r3, r30
/* 80369BE8 00366B28  81 9E 00 00 */	lwz r12, 0(r30)
/* 80369BEC 00366B2C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80369BF0 00366B30  7D 89 03 A6 */	mtctr r12
/* 80369BF4 00366B34  4E 80 04 21 */	bctrl 
/* 80369BF8 00366B38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80369BFC 00366B3C  41 82 00 50 */	beq .L_80369C4C
/* 80369C00 00366B40  7F A3 EB 78 */	mr r3, r29
/* 80369C04 00366B44  4B D9 D7 F1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80369C08 00366B48  2C 03 00 03 */	cmpwi r3, 3
/* 80369C0C 00366B4C  41 82 00 40 */	beq .L_80369C4C
/* 80369C10 00366B50  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 80369C14 00366B54  7F A4 EB 78 */	mr r4, r29
/* 80369C18 00366B58  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 80369C1C 00366B5C  38 A0 00 03 */	li r5, 3
/* 80369C20 00366B60  60 00 08 00 */	ori r0, r0, 0x800
/* 80369C24 00366B64  38 C0 00 00 */	li r6, 0
/* 80369C28 00366B68  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 80369C2C 00366B6C  D0 1D 02 00 */	stfs f0, 0x200(r29)
/* 80369C30 00366B70  80 7D 03 88 */	lwz r3, 0x388(r29)
/* 80369C34 00366B74  81 83 00 00 */	lwz r12, 0(r3)
/* 80369C38 00366B78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80369C3C 00366B7C  7D 89 03 A6 */	mtctr r12
/* 80369C40 00366B80  4E 80 04 21 */	bctrl 
/* 80369C44 00366B84  38 60 00 01 */	li r3, 1
/* 80369C48 00366B88  48 00 00 08 */	b .L_80369C50
.L_80369C4C:
/* 80369C4C 00366B8C  38 60 00 00 */	li r3, 0
.L_80369C50:
/* 80369C50 00366B90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80369C54 00366B94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80369C58 00366B98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80369C5C 00366B9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80369C60 00366BA0  7C 08 03 A6 */	mtlr r0
/* 80369C64 00366BA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80369C68 00366BA8  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game6Jigumo3ObjFPQ24Game8CreaturefP8CollPart

.fn damageCallBack__Q34Game6Jigumo3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80369C6C 00366BAC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80369C70 00366BB0  7C 08 02 A6 */	mflr r0
/* 80369C74 00366BB4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80369C78 00366BB8  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80369C7C 00366BBC  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80369C80 00366BC0  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80369C84 00366BC4  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80369C88 00366BC8  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80369C8C 00366BCC  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 80369C90 00366BD0  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80369C94 00366BD4  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80369C98 00366BD8  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 80369C9C 00366BDC  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 80369CA0 00366BE0  DB 41 00 50 */	stfd f26, 0x50(r1)
/* 80369CA4 00366BE4  F3 41 00 58 */	psq_st f26, 88(r1), 0, qr0
/* 80369CA8 00366BE8  DB 21 00 40 */	stfd f25, 0x40(r1)
/* 80369CAC 00366BEC  F3 21 00 48 */	psq_st f25, 72(r1), 0, qr0
/* 80369CB0 00366BF0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80369CB4 00366BF4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80369CB8 00366BF8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80369CBC 00366BFC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80369CC0 00366C00  FF E0 08 90 */	fmr f31, f1
/* 80369CC4 00366C04  7C 7D 1B 78 */	mr r29, r3
/* 80369CC8 00366C08  7C 9E 23 78 */	mr r30, r4
/* 80369CCC 00366C0C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80369CD0 00366C10  7C BF 2B 78 */	mr r31, r5
/* 80369CD4 00366C14  41 82 00 10 */	beq .L_80369CE4
/* 80369CD8 00366C18  4B D9 C3 95 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 80369CDC 00366C1C  38 60 00 01 */	li r3, 1
/* 80369CE0 00366C20  48 00 00 EC */	b .L_80369DCC
.L_80369CE4:
/* 80369CE4 00366C24  4B D9 D7 11 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80369CE8 00366C28  2C 03 00 07 */	cmpwi r3, 7
/* 80369CEC 00366C2C  41 82 00 14 */	beq .L_80369D00
/* 80369CF0 00366C30  7F A3 EB 78 */	mr r3, r29
/* 80369CF4 00366C34  4B D9 D7 01 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80369CF8 00366C38  2C 03 00 06 */	cmpwi r3, 6
/* 80369CFC 00366C3C  40 82 00 CC */	bne .L_80369DC8
.L_80369D00:
/* 80369D00 00366C40  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 80369D04 00366C44  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 80369D08 00366C48  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 80369D0C 00366C4C  4B DC C1 39 */	bl getCollPart__8CollTreeFUl
/* 80369D10 00366C50  38 81 00 14 */	addi r4, r1, 0x14
/* 80369D14 00366C54  4B DC E4 E9 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80369D18 00366C58  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 80369D1C 00366C5C  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 80369D20 00366C60  C3 A1 00 18 */	lfs f29, 0x18(r1)
/* 80369D24 00366C64  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 80369D28 00366C68  C3 81 00 1C */	lfs f28, 0x1c(r1)
/* 80369D2C 00366C6C  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 80369D30 00366C70  4B DC C1 15 */	bl getCollPart__8CollTreeFUl
/* 80369D34 00366C74  38 81 00 14 */	addi r4, r1, 0x14
/* 80369D38 00366C78  4B DC E4 C5 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80369D3C 00366C7C  7F C4 F3 78 */	mr r4, r30
/* 80369D40 00366C80  38 61 00 08 */	addi r3, r1, 8
/* 80369D44 00366C84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80369D48 00366C88  C3 61 00 14 */	lfs f27, 0x14(r1)
/* 80369D4C 00366C8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80369D50 00366C90  C3 41 00 18 */	lfs f26, 0x18(r1)
/* 80369D54 00366C94  C3 21 00 1C */	lfs f25, 0x1c(r1)
/* 80369D58 00366C98  7D 89 03 A6 */	mtctr r12
/* 80369D5C 00366C9C  4E 80 04 21 */	bctrl 
/* 80369D60 00366CA0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80369D64 00366CA4  C0 61 00 08 */	lfs f3, 8(r1)
/* 80369D68 00366CA8  EC 1A 08 28 */	fsubs f0, f26, f1
/* 80369D6C 00366CAC  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 80369D70 00366CB0  EC 3D 08 28 */	fsubs f1, f29, f1
/* 80369D74 00366CB4  EC 5B 18 28 */	fsubs f2, f27, f3
/* 80369D78 00366CB8  EC 00 00 32 */	fmuls f0, f0, f0
/* 80369D7C 00366CBC  EC 7E 18 28 */	fsubs f3, f30, f3
/* 80369D80 00366CC0  EC 21 00 72 */	fmuls f1, f1, f1
/* 80369D84 00366CC4  EC 99 28 28 */	fsubs f4, f25, f5
/* 80369D88 00366CC8  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80369D8C 00366CCC  EC 5C 28 28 */	fsubs f2, f28, f5
/* 80369D90 00366CD0  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80369D94 00366CD4  EC 04 01 3A */	fmadds f0, f4, f4, f0
/* 80369D98 00366CD8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80369D9C 00366CDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80369DA0 00366CE0  40 80 00 0C */	bge .L_80369DAC
/* 80369DA4 00366CE4  38 60 00 00 */	li r3, 0
/* 80369DA8 00366CE8  48 00 00 24 */	b .L_80369DCC
.L_80369DAC:
/* 80369DAC 00366CEC  FC 20 F8 90 */	fmr f1, f31
/* 80369DB0 00366CF0  7F A3 EB 78 */	mr r3, r29
/* 80369DB4 00366CF4  7F C4 F3 78 */	mr r4, r30
/* 80369DB8 00366CF8  7F E5 FB 78 */	mr r5, r31
/* 80369DBC 00366CFC  4B D9 C2 B1 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 80369DC0 00366D00  38 60 00 01 */	li r3, 1
/* 80369DC4 00366D04  48 00 00 08 */	b .L_80369DCC
.L_80369DC8:
/* 80369DC8 00366D08  38 60 00 00 */	li r3, 0
.L_80369DCC:
/* 80369DCC 00366D0C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80369DD0 00366D10  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80369DD4 00366D14  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 80369DD8 00366D18  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80369DDC 00366D1C  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 80369DE0 00366D20  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80369DE4 00366D24  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 80369DE8 00366D28  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 80369DEC 00366D2C  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 80369DF0 00366D30  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 80369DF4 00366D34  E3 41 00 58 */	psq_l f26, 88(r1), 0, qr0
/* 80369DF8 00366D38  CB 41 00 50 */	lfd f26, 0x50(r1)
/* 80369DFC 00366D3C  E3 21 00 48 */	psq_l f25, 72(r1), 0, qr0
/* 80369E00 00366D40  CB 21 00 40 */	lfd f25, 0x40(r1)
/* 80369E04 00366D44  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80369E08 00366D48  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80369E0C 00366D4C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80369E10 00366D50  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80369E14 00366D54  7C 08 03 A6 */	mtlr r0
/* 80369E18 00366D58  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80369E1C 00366D5C  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game6Jigumo3ObjFPQ24Game8CreaturefP8CollPart

.fn collisionCallback__Q34Game6Jigumo3ObjFRQ24Game9CollEvent, global
/* 80369E20 00366D60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80369E24 00366D64  7C 08 02 A6 */	mflr r0
/* 80369E28 00366D68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80369E2C 00366D6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80369E30 00366D70  7C 9F 23 78 */	mr r31, r4
/* 80369E34 00366D74  93 C1 00 08 */	stw r30, 8(r1)
/* 80369E38 00366D78  7C 7E 1B 78 */	mr r30, r3
/* 80369E3C 00366D7C  80 64 00 00 */	lwz r3, 0(r4)
/* 80369E40 00366D80  81 83 00 00 */	lwz r12, 0(r3)
/* 80369E44 00366D84  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80369E48 00366D88  7D 89 03 A6 */	mtctr r12
/* 80369E4C 00366D8C  4E 80 04 21 */	bctrl 
/* 80369E50 00366D90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80369E54 00366D94  41 82 00 30 */	beq .L_80369E84
/* 80369E58 00366D98  80 7F 00 00 */	lwz r3, 0(r31)
/* 80369E5C 00366D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80369E60 00366DA0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80369E64 00366DA4  7D 89 03 A6 */	mtctr r12
/* 80369E68 00366DA8  4E 80 04 21 */	bctrl 
/* 80369E6C 00366DAC  2C 03 00 53 */	cmpwi r3, 0x53
/* 80369E70 00366DB0  40 82 00 14 */	bne .L_80369E84
/* 80369E74 00366DB4  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 80369E78 00366DB8  D0 1E 01 1C */	stfs f0, 0x11c(r30)
/* 80369E7C 00366DBC  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80369E80 00366DC0  D0 1E 01 24 */	stfs f0, 0x124(r30)
.L_80369E84:
/* 80369E84 00366DC4  7F C3 F3 78 */	mr r3, r30
/* 80369E88 00366DC8  7F E4 FB 78 */	mr r4, r31
/* 80369E8C 00366DCC  4B D9 C7 85 */	bl collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
/* 80369E90 00366DD0  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 80369E94 00366DD4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80369E98 00366DD8  41 82 00 40 */	beq .L_80369ED8
/* 80369E9C 00366DDC  80 7F 00 00 */	lwz r3, 0(r31)
/* 80369EA0 00366DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80369EA4 00366DE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80369EA8 00366DE8  7D 89 03 A6 */	mtctr r12
/* 80369EAC 00366DEC  4E 80 04 21 */	bctrl 
/* 80369EB0 00366DF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80369EB4 00366DF4  41 82 00 24 */	beq .L_80369ED8
/* 80369EB8 00366DF8  7F C3 F3 78 */	mr r3, r30
/* 80369EBC 00366DFC  80 9F 00 00 */	lwz r4, 0(r31)
/* 80369EC0 00366E00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80369EC4 00366E04  38 A0 00 00 */	li r5, 0
/* 80369EC8 00366E08  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 80369ECC 00366E0C  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 80369ED0 00366E10  7D 89 03 A6 */	mtctr r12
/* 80369ED4 00366E14  4E 80 04 21 */	bctrl 
.L_80369ED8:
/* 80369ED8 00366E18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80369EDC 00366E1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80369EE0 00366E20  83 C1 00 08 */	lwz r30, 8(r1)
/* 80369EE4 00366E24  7C 08 03 A6 */	mtlr r0
/* 80369EE8 00366E28  38 21 00 10 */	addi r1, r1, 0x10
/* 80369EEC 00366E2C  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game6Jigumo3ObjFRQ24Game9CollEvent

.fn outWaterCallback__Q34Game6Jigumo3ObjFv, global
/* 80369EF0 00366E30  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80369EF4 00366E34  7C 08 02 A6 */	mflr r0
/* 80369EF8 00366E38  90 01 00 34 */	stw r0, 0x34(r1)
/* 80369EFC 00366E3C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80369F00 00366E40  7C 7F 1B 78 */	mr r31, r3
/* 80369F04 00366E44  4B D9 9E 29 */	bl outWaterCallback__Q24Game9EnemyBaseFv
/* 80369F08 00366E48  80 FF 01 8C */	lwz r7, 0x18c(r31)
/* 80369F0C 00366E4C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80369F10 00366E50  80 DF 01 90 */	lwz r6, 0x190(r31)
/* 80369F14 00366E54  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80369F18 00366E58  80 BF 01 94 */	lwz r5, 0x194(r31)
/* 80369F1C 00366E5C  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 80369F20 00366E60  C0 7F 01 F8 */	lfs f3, 0x1f8(r31)
/* 80369F24 00366E64  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80369F28 00366E68  90 E1 00 08 */	stw r7, 8(r1)
/* 80369F2C 00366E6C  7F E3 FB 78 */	mr r3, r31
/* 80369F30 00366E70  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80369F34 00366E74  C0 41 00 08 */	lfs f2, 8(r1)
/* 80369F38 00366E78  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80369F3C 00366E7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80369F40 00366E80  90 81 00 14 */	stw r4, 0x14(r1)
/* 80369F44 00366E84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80369F48 00366E88  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80369F4C 00366E8C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80369F50 00366E90  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80369F54 00366E94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80369F58 00366E98  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80369F5C 00366E9C  4B D9 D4 99 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80369F60 00366EA0  2C 03 00 06 */	cmpwi r3, 6
/* 80369F64 00366EA4  41 82 00 80 */	beq .L_80369FE4
/* 80369F68 00366EA8  40 80 00 10 */	bge .L_80369F78
/* 80369F6C 00366EAC  2C 03 00 04 */	cmpwi r3, 4
/* 80369F70 00366EB0  41 82 00 14 */	beq .L_80369F84
/* 80369F74 00366EB4  48 00 00 88 */	b .L_80369FFC
.L_80369F78:
/* 80369F78 00366EB8  2C 03 00 08 */	cmpwi r3, 8
/* 80369F7C 00366EBC  40 80 00 80 */	bge .L_80369FFC
/* 80369F80 00366EC0  48 00 00 34 */	b .L_80369FB4
.L_80369F84:
/* 80369F84 00366EC4  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 80369F88 00366EC8  38 81 00 14 */	addi r4, r1, 0x14
/* 80369F8C 00366ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 80369F90 00366ED0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80369F94 00366ED4  7D 89 03 A6 */	mtctr r12
/* 80369F98 00366ED8  4E 80 04 21 */	bctrl 
/* 80369F9C 00366EDC  80 7F 03 74 */	lwz r3, 0x374(r31)
/* 80369FA0 00366EE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80369FA4 00366EE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80369FA8 00366EE8  7D 89 03 A6 */	mtctr r12
/* 80369FAC 00366EEC  4E 80 04 21 */	bctrl 
/* 80369FB0 00366EF0  48 00 00 4C */	b .L_80369FFC
.L_80369FB4:
/* 80369FB4 00366EF4  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 80369FB8 00366EF8  38 81 00 14 */	addi r4, r1, 0x14
/* 80369FBC 00366EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80369FC0 00366F00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80369FC4 00366F04  7D 89 03 A6 */	mtctr r12
/* 80369FC8 00366F08  4E 80 04 21 */	bctrl 
/* 80369FCC 00366F0C  80 7F 03 7C */	lwz r3, 0x37c(r31)
/* 80369FD0 00366F10  81 83 00 00 */	lwz r12, 0(r3)
/* 80369FD4 00366F14  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80369FD8 00366F18  7D 89 03 A6 */	mtctr r12
/* 80369FDC 00366F1C  4E 80 04 21 */	bctrl 
/* 80369FE0 00366F20  48 00 00 1C */	b .L_80369FFC
.L_80369FE4:
/* 80369FE4 00366F24  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 80369FE8 00366F28  38 81 00 14 */	addi r4, r1, 0x14
/* 80369FEC 00366F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80369FF0 00366F30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80369FF4 00366F34  7D 89 03 A6 */	mtctr r12
/* 80369FF8 00366F38  4E 80 04 21 */	bctrl 
.L_80369FFC:
/* 80369FFC 00366F3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036A000 00366F40  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8036A004 00366F44  7C 08 03 A6 */	mtlr r0
/* 8036A008 00366F48  38 21 00 30 */	addi r1, r1, 0x30
/* 8036A00C 00366F4C  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game6Jigumo3ObjFv

.fn inWaterCallback__Q34Game6Jigumo3ObjFPQ24Game8WaterBox, global
/* 8036A010 00366F50  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036A014 00366F54  7C 08 02 A6 */	mflr r0
/* 8036A018 00366F58  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036A01C 00366F5C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8036A020 00366F60  7C 7F 1B 78 */	mr r31, r3
/* 8036A024 00366F64  4B D9 9E 71 */	bl inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
/* 8036A028 00366F68  80 FF 01 8C */	lwz r7, 0x18c(r31)
/* 8036A02C 00366F6C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8036A030 00366F70  80 DF 01 90 */	lwz r6, 0x190(r31)
/* 8036A034 00366F74  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8036A038 00366F78  80 BF 01 94 */	lwz r5, 0x194(r31)
/* 8036A03C 00366F7C  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8036A040 00366F80  C0 7F 01 F8 */	lfs f3, 0x1f8(r31)
/* 8036A044 00366F84  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8036A048 00366F88  90 E1 00 08 */	stw r7, 8(r1)
/* 8036A04C 00366F8C  7F E3 FB 78 */	mr r3, r31
/* 8036A050 00366F90  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8036A054 00366F94  C0 41 00 08 */	lfs f2, 8(r1)
/* 8036A058 00366F98  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8036A05C 00366F9C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8036A060 00366FA0  90 81 00 14 */	stw r4, 0x14(r1)
/* 8036A064 00366FA4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8036A068 00366FA8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8036A06C 00366FAC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8036A070 00366FB0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8036A074 00366FB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A078 00366FB8  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 8036A07C 00366FBC  4B D9 D3 79 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A080 00366FC0  2C 03 00 06 */	cmpwi r3, 6
/* 8036A084 00366FC4  41 82 00 B4 */	beq .L_8036A138
/* 8036A088 00366FC8  40 80 00 10 */	bge .L_8036A098
/* 8036A08C 00366FCC  2C 03 00 04 */	cmpwi r3, 4
/* 8036A090 00366FD0  41 82 00 14 */	beq .L_8036A0A4
/* 8036A094 00366FD4  48 00 00 B8 */	b .L_8036A14C
.L_8036A098:
/* 8036A098 00366FD8  2C 03 00 08 */	cmpwi r3, 8
/* 8036A09C 00366FDC  40 80 00 B0 */	bge .L_8036A14C
/* 8036A0A0 00366FE0  48 00 00 68 */	b .L_8036A108
.L_8036A0A4:
/* 8036A0A4 00366FE4  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8036A0A8 00366FE8  D0 1F 03 64 */	stfs f0, 0x364(r31)
/* 8036A0AC 00366FEC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8036A0B0 00366FF0  D0 1F 03 68 */	stfs f0, 0x368(r31)
/* 8036A0B4 00366FF4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8036A0B8 00366FF8  D0 1F 03 6C */	stfs f0, 0x36c(r31)
/* 8036A0BC 00366FFC  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 8036A0C0 00367000  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A0C4 00367004  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036A0C8 00367008  7D 89 03 A6 */	mtctr r12
/* 8036A0CC 0036700C  4E 80 04 21 */	bctrl 
/* 8036A0D0 00367010  C0 03 00 00 */	lfs f0, 0(r3)
/* 8036A0D4 00367014  38 81 00 14 */	addi r4, r1, 0x14
/* 8036A0D8 00367018  D0 1F 03 68 */	stfs f0, 0x368(r31)
/* 8036A0DC 0036701C  80 7F 03 74 */	lwz r3, 0x374(r31)
/* 8036A0E0 00367020  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A0E4 00367024  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036A0E8 00367028  7D 89 03 A6 */	mtctr r12
/* 8036A0EC 0036702C  4E 80 04 21 */	bctrl 
/* 8036A0F0 00367030  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 8036A0F4 00367034  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A0F8 00367038  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036A0FC 0036703C  7D 89 03 A6 */	mtctr r12
/* 8036A100 00367040  4E 80 04 21 */	bctrl 
/* 8036A104 00367044  48 00 00 48 */	b .L_8036A14C
.L_8036A108:
/* 8036A108 00367048  80 7F 03 7C */	lwz r3, 0x37c(r31)
/* 8036A10C 0036704C  38 81 00 14 */	addi r4, r1, 0x14
/* 8036A110 00367050  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A114 00367054  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036A118 00367058  7D 89 03 A6 */	mtctr r12
/* 8036A11C 0036705C  4E 80 04 21 */	bctrl 
/* 8036A120 00367060  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 8036A124 00367064  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A128 00367068  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036A12C 0036706C  7D 89 03 A6 */	mtctr r12
/* 8036A130 00367070  4E 80 04 21 */	bctrl 
/* 8036A134 00367074  48 00 00 18 */	b .L_8036A14C
.L_8036A138:
/* 8036A138 00367078  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8036A13C 0036707C  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A140 00367080  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036A144 00367084  7D 89 03 A6 */	mtctr r12
/* 8036A148 00367088  4E 80 04 21 */	bctrl 
.L_8036A14C:
/* 8036A14C 0036708C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036A150 00367090  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8036A154 00367094  7C 08 03 A6 */	mtlr r0
/* 8036A158 00367098  38 21 00 30 */	addi r1, r1, 0x30
/* 8036A15C 0036709C  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game6Jigumo3ObjFPQ24Game8WaterBox

.fn earthquakeCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef, global
/* 8036A160 003670A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8036A164 003670A4  7C 08 02 A6 */	mflr r0
/* 8036A168 003670A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036A16C 003670AC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8036A170 003670B0  FF E0 08 90 */	fmr f31, f1
/* 8036A174 003670B4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8036A178 003670B8  7C 9F 23 78 */	mr r31, r4
/* 8036A17C 003670BC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8036A180 003670C0  7C 7E 1B 78 */	mr r30, r3
/* 8036A184 003670C4  88 03 03 85 */	lbz r0, 0x385(r3)
/* 8036A188 003670C8  28 00 00 00 */	cmplwi r0, 0
/* 8036A18C 003670CC  41 82 00 30 */	beq .L_8036A1BC
/* 8036A190 003670D0  4B D9 D2 65 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A194 003670D4  2C 03 00 08 */	cmpwi r3, 8
/* 8036A198 003670D8  41 82 00 24 */	beq .L_8036A1BC
/* 8036A19C 003670DC  80 1E 03 34 */	lwz r0, 0x334(r30)
/* 8036A1A0 003670E0  2C 00 00 00 */	cmpwi r0, 0
/* 8036A1A4 003670E4  40 82 00 18 */	bne .L_8036A1BC
/* 8036A1A8 003670E8  FC 20 F8 90 */	fmr f1, f31
/* 8036A1AC 003670EC  7F C3 F3 78 */	mr r3, r30
/* 8036A1B0 003670F0  7F E4 FB 78 */	mr r4, r31
/* 8036A1B4 003670F4  4B D9 C2 11 */	bl earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
/* 8036A1B8 003670F8  48 00 00 08 */	b .L_8036A1C0
.L_8036A1BC:
/* 8036A1BC 003670FC  38 60 00 00 */	li r3, 0
.L_8036A1C0:
/* 8036A1C0 00367100  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036A1C4 00367104  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8036A1C8 00367108  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8036A1CC 0036710C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8036A1D0 00367110  7C 08 03 A6 */	mtlr r0
/* 8036A1D4 00367114  38 21 00 20 */	addi r1, r1, 0x20
/* 8036A1D8 00367118  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef

.fn getShadowParam__Q34Game6Jigumo3ObjFRQ24Game11ShadowParam, global
/* 8036A1DC 0036711C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A1E0 00367120  7C 08 02 A6 */	mflr r0
/* 8036A1E4 00367124  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A1E8 00367128  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A1EC 0036712C  7C 9F 23 78 */	mr r31, r4
/* 8036A1F0 00367130  93 C1 00 08 */	stw r30, 8(r1)
/* 8036A1F4 00367134  7C 7E 1B 78 */	mr r30, r3
/* 8036A1F8 00367138  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 8036A1FC 0036713C  48 0B F6 A5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8036A200 00367140  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8036A204 00367144  C0 62 06 24 */	lfs f3, lbl_8051E984@sda21(r2)
/* 8036A208 00367148  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8036A20C 0036714C  C0 02 06 28 */	lfs f0, lbl_8051E988@sda21(r2)
/* 8036A210 00367150  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8036A214 00367154  C0 22 06 2C */	lfs f1, lbl_8051E98C@sda21(r2)
/* 8036A218 00367158  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8036A21C 0036715C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8036A220 00367160  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8036A224 00367164  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 8036A228 00367168  EC 43 10 2A */	fadds f2, f3, f2
/* 8036A22C 0036716C  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8036A230 00367170  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8036A234 00367174  80 63 00 08 */	lwz r3, 8(r3)
/* 8036A238 00367178  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 8036A23C 0036717C  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 8036A240 00367180  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8036A244 00367184  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 8036A248 00367188  C0 43 00 48 */	lfs f2, 0x48(r3)
/* 8036A24C 0036718C  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8036A250 00367190  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8036A254 00367194  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 8036A258 00367198  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036A25C 0036719C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8036A260 003671A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A264 003671A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8036A268 003671A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A26C 003671AC  7C 08 03 A6 */	mtlr r0
/* 8036A270 003671B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A274 003671B4  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game6Jigumo3ObjFRQ24Game11ShadowParam

.fn needShadow__Q34Game6Jigumo3ObjFv, global
/* 8036A278 003671B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A27C 003671BC  7C 08 02 A6 */	mflr r0
/* 8036A280 003671C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A284 003671C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A288 003671C8  7C 7F 1B 78 */	mr r31, r3
/* 8036A28C 003671CC  4B D9 D1 85 */	bl needShadow__Q24Game9EnemyBaseFv
/* 8036A290 003671D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036A294 003671D4  40 82 00 0C */	bne .L_8036A2A0
/* 8036A298 003671D8  38 60 00 00 */	li r3, 0
/* 8036A29C 003671DC  48 00 00 44 */	b .L_8036A2E0
.L_8036A2A0:
/* 8036A2A0 003671E0  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8036A2A4 003671E4  38 60 00 00 */	li r3, 0
/* 8036A2A8 003671E8  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 8036A2AC 003671EC  40 82 00 0C */	bne .L_8036A2B8
/* 8036A2B0 003671F0  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 8036A2B4 003671F4  41 82 00 08 */	beq .L_8036A2BC
.L_8036A2B8:
/* 8036A2B8 003671F8  38 60 00 01 */	li r3, 1
.L_8036A2BC:
/* 8036A2BC 003671FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036A2C0 00367200  41 82 00 1C */	beq .L_8036A2DC
/* 8036A2C4 00367204  7F E3 FB 78 */	mr r3, r31
/* 8036A2C8 00367208  4B D9 D1 2D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A2CC 0036720C  20 03 00 02 */	subfic r0, r3, 2
/* 8036A2D0 00367210  7C 00 00 34 */	cntlzw r0, r0
/* 8036A2D4 00367214  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8036A2D8 00367218  48 00 00 08 */	b .L_8036A2E0
.L_8036A2DC:
/* 8036A2DC 0036721C  38 60 00 01 */	li r3, 1
.L_8036A2E0:
/* 8036A2E0 00367220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A2E4 00367224  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A2E8 00367228  7C 08 03 A6 */	mtlr r0
/* 8036A2EC 0036722C  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A2F0 00367230  4E 80 00 20 */	blr 
.endfn needShadow__Q34Game6Jigumo3ObjFv

.fn doSimulationGround__Q34Game6Jigumo3ObjFf, global
/* 8036A2F4 00367234  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8036A2F8 00367238  7C 08 02 A6 */	mflr r0
/* 8036A2FC 0036723C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8036A300 00367240  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8036A304 00367244  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8036A308 00367248  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8036A30C 0036724C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8036A310 00367250  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8036A314 00367254  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 8036A318 00367258  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A31C 0036725C  7C 7F 1B 78 */	mr r31, r3
/* 8036A320 00367260  FF C0 08 90 */	fmr f30, f1
/* 8036A324 00367264  80 03 03 34 */	lwz r0, 0x334(r3)
/* 8036A328 00367268  2C 00 00 00 */	cmpwi r0, 0
/* 8036A32C 0036726C  40 81 00 2C */	ble .L_8036A358
/* 8036A330 00367270  80 9F 01 E4 */	lwz r4, 0x1e4(r31)
/* 8036A334 00367274  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 8036A338 00367278  40 82 00 20 */	bne .L_8036A358
/* 8036A33C 0036727C  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 8036A340 00367280  40 82 00 18 */	bne .L_8036A358
/* 8036A344 00367284  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A348 00367288  81 8C 01 F8 */	lwz r12, 0x1f8(r12)
/* 8036A34C 0036728C  7D 89 03 A6 */	mtctr r12
/* 8036A350 00367290  4E 80 04 21 */	bctrl 
/* 8036A354 00367294  48 00 00 E8 */	b .L_8036A43C
.L_8036A358:
/* 8036A358 00367298  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8036A35C 0036729C  7F E3 FB 78 */	mr r3, r31
/* 8036A360 003672A0  C0 BF 01 CC */	lfs f5, 0x1cc(r31)
/* 8036A364 003672A4  C0 04 00 9C */	lfs f0, 0x9c(r4)
/* 8036A368 003672A8  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 8036A36C 003672AC  EC 65 28 28 */	fsubs f3, f5, f5
/* 8036A370 003672B0  EC 9E 00 24 */	fdivs f4, f30, f0
/* 8036A374 003672B4  C0 FF 01 C8 */	lfs f7, 0x1c8(r31)
/* 8036A378 003672B8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8036A37C 003672BC  C0 DF 01 D0 */	lfs f6, 0x1d0(r31)
/* 8036A380 003672C0  C3 E2 06 1C */	lfs f31, lbl_8051E97C@sda21(r2)
/* 8036A384 003672C4  EC 41 38 28 */	fsubs f2, f1, f7
/* 8036A388 003672C8  EC 00 30 28 */	fsubs f0, f0, f6
/* 8036A38C 003672CC  EC 23 01 32 */	fmuls f1, f3, f4
/* 8036A390 003672D0  EC 42 01 32 */	fmuls f2, f2, f4
/* 8036A394 003672D4  EC 00 01 32 */	fmuls f0, f0, f4
/* 8036A398 003672D8  EC 25 08 2A */	fadds f1, f5, f1
/* 8036A39C 003672DC  EC 47 10 2A */	fadds f2, f7, f2
/* 8036A3A0 003672E0  EC 06 00 2A */	fadds f0, f6, f0
/* 8036A3A4 003672E4  D0 5F 01 C8 */	stfs f2, 0x1c8(r31)
/* 8036A3A8 003672E8  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 8036A3AC 003672EC  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8036A3B0 003672F0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8036A3B4 003672F4  C3 A4 09 0C */	lfs f29, 0x90c(r4)
/* 8036A3B8 003672F8  4B D9 D0 3D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A3BC 003672FC  2C 03 00 04 */	cmpwi r3, 4
/* 8036A3C0 00367300  40 82 00 0C */	bne .L_8036A3CC
/* 8036A3C4 00367304  C3 A2 06 18 */	lfs f29, lbl_8051E978@sda21(r2)
/* 8036A3C8 00367308  C3 E2 06 30 */	lfs f31, lbl_8051E990@sda21(r2)
.L_8036A3CC:
/* 8036A3CC 0036730C  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 8036A3D0 00367310  C0 1F 02 FC */	lfs f0, 0x2fc(r31)
/* 8036A3D4 00367314  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036A3D8 00367318  41 82 00 24 */	beq .L_8036A3FC
/* 8036A3DC 0036731C  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 8036A3E0 00367320  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 8036A3E4 00367324  EC 01 07 7C */	fnmsubs f0, f1, f29, f0
/* 8036A3E8 00367328  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8036A3EC 0036732C  C0 3F 03 00 */	lfs f1, 0x300(r31)
/* 8036A3F0 00367330  C0 1F 01 D0 */	lfs f0, 0x1d0(r31)
/* 8036A3F4 00367334  EC 01 07 7C */	fnmsubs f0, f1, f29, f0
/* 8036A3F8 00367338  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_8036A3FC:
/* 8036A3FC 0036733C  80 9F 01 E4 */	lwz r4, 0x1e4(r31)
/* 8036A400 00367340  38 60 00 00 */	li r3, 0
/* 8036A404 00367344  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 8036A408 00367348  40 82 00 0C */	bne .L_8036A414
/* 8036A40C 0036734C  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 8036A410 00367350  41 82 00 08 */	beq .L_8036A418
.L_8036A414:
/* 8036A414 00367354  38 60 00 01 */	li r3, 1
.L_8036A418:
/* 8036A418 00367358  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036A41C 0036735C  41 82 00 08 */	beq .L_8036A424
/* 8036A420 00367360  C3 E2 06 34 */	lfs f31, lbl_8051E994@sda21(r2)
.L_8036A424:
/* 8036A424 00367364  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 8036A428 00367368  C0 1F 01 CC */	lfs f0, 0x1cc(r31)
/* 8036A42C 0036736C  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 8036A430 00367370  EC 3E 00 72 */	fmuls f1, f30, f1
/* 8036A434 00367374  EC 1F 00 7C */	fnmsubs f0, f31, f1, f0
/* 8036A438 00367378  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
.L_8036A43C:
/* 8036A43C 0036737C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8036A440 00367380  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8036A444 00367384  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8036A448 00367388  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8036A44C 0036738C  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 8036A450 00367390  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8036A454 00367394  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036A458 00367398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A45C 0036739C  7C 08 03 A6 */	mtlr r0
/* 8036A460 003673A0  38 21 00 40 */	addi r1, r1, 0x40
/* 8036A464 003673A4  4E 80 00 20 */	blr 
.endfn doSimulationGround__Q34Game6Jigumo3ObjFf

.fn onKill__Q34Game6Jigumo3ObjFPQ24Game15CreatureKillArg, global
/* 8036A468 003673A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A46C 003673AC  7C 08 02 A6 */	mflr r0
/* 8036A470 003673B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A474 003673B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A478 003673B8  7C 7F 1B 78 */	mr r31, r3
/* 8036A47C 003673BC  4B D9 7A 6D */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8036A480 003673C0  7F E3 FB 78 */	mr r3, r31
/* 8036A484 003673C4  48 00 1A 51 */	bl killNest__Q34Game6Jigumo3ObjFv
/* 8036A488 003673C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A48C 003673CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A490 003673D0  7C 08 03 A6 */	mtlr r0
/* 8036A494 003673D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A498 003673D8  4E 80 00 20 */	blr 
.endfn onKill__Q34Game6Jigumo3ObjFPQ24Game15CreatureKillArg

.fn isLivingThing__Q34Game6Jigumo3ObjFv, global
/* 8036A49C 003673DC  38 60 00 01 */	li r3, 1
/* 8036A4A0 003673E0  4E 80 00 20 */	blr 
.endfn isLivingThing__Q34Game6Jigumo3ObjFv

.fn doStartMovie__Q34Game6Jigumo3ObjFv, global
/* 8036A4A4 003673E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A4A8 003673E8  7C 08 02 A6 */	mflr r0
/* 8036A4AC 003673EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A4B0 003673F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A4B4 003673F4  7C 7F 1B 78 */	mr r31, r3
/* 8036A4B8 003673F8  80 63 03 70 */	lwz r3, 0x370(r3)
/* 8036A4BC 003673FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A4C0 00367400  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036A4C4 00367404  7D 89 03 A6 */	mtctr r12
/* 8036A4C8 00367408  4E 80 04 21 */	bctrl 
/* 8036A4CC 0036740C  80 7F 03 74 */	lwz r3, 0x374(r31)
/* 8036A4D0 00367410  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A4D4 00367414  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036A4D8 00367418  7D 89 03 A6 */	mtctr r12
/* 8036A4DC 0036741C  4E 80 04 21 */	bctrl 
/* 8036A4E0 00367420  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 8036A4E4 00367424  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A4E8 00367428  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8036A4EC 0036742C  7D 89 03 A6 */	mtctr r12
/* 8036A4F0 00367430  4E 80 04 21 */	bctrl 
/* 8036A4F4 00367434  80 7F 03 7C */	lwz r3, 0x37c(r31)
/* 8036A4F8 00367438  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A4FC 0036743C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036A500 00367440  7D 89 03 A6 */	mtctr r12
/* 8036A504 00367444  4E 80 04 21 */	bctrl 
/* 8036A508 00367448  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8036A50C 0036744C  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A510 00367450  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8036A514 00367454  7D 89 03 A6 */	mtctr r12
/* 8036A518 00367458  4E 80 04 21 */	bctrl 
/* 8036A51C 0036745C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A520 00367460  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A524 00367464  7C 08 03 A6 */	mtlr r0
/* 8036A528 00367468  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A52C 0036746C  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game6Jigumo3ObjFv

.fn doEndMovie__Q34Game6Jigumo3ObjFv, global
/* 8036A530 00367470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A534 00367474  7C 08 02 A6 */	mflr r0
/* 8036A538 00367478  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A53C 0036747C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A540 00367480  7C 7F 1B 78 */	mr r31, r3
/* 8036A544 00367484  80 63 03 70 */	lwz r3, 0x370(r3)
/* 8036A548 00367488  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A54C 0036748C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8036A550 00367490  7D 89 03 A6 */	mtctr r12
/* 8036A554 00367494  4E 80 04 21 */	bctrl 
/* 8036A558 00367498  80 7F 03 74 */	lwz r3, 0x374(r31)
/* 8036A55C 0036749C  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A560 003674A0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8036A564 003674A4  7D 89 03 A6 */	mtctr r12
/* 8036A568 003674A8  4E 80 04 21 */	bctrl 
/* 8036A56C 003674AC  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 8036A570 003674B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A574 003674B4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8036A578 003674B8  7D 89 03 A6 */	mtctr r12
/* 8036A57C 003674BC  4E 80 04 21 */	bctrl 
/* 8036A580 003674C0  80 7F 03 7C */	lwz r3, 0x37c(r31)
/* 8036A584 003674C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A588 003674C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8036A58C 003674CC  7D 89 03 A6 */	mtctr r12
/* 8036A590 003674D0  4E 80 04 21 */	bctrl 
/* 8036A594 003674D4  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8036A598 003674D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A59C 003674DC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8036A5A0 003674E0  7D 89 03 A6 */	mtctr r12
/* 8036A5A4 003674E4  4E 80 04 21 */	bctrl 
/* 8036A5A8 003674E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A5AC 003674EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A5B0 003674F0  7C 08 03 A6 */	mtlr r0
/* 8036A5B4 003674F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A5B8 003674F8  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game6Jigumo3ObjFv

.fn doStartStoneState__Q34Game6Jigumo3ObjFv, global
/* 8036A5BC 003674FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A5C0 00367500  7C 08 02 A6 */	mflr r0
/* 8036A5C4 00367504  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A5C8 00367508  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A5CC 0036750C  7C 7F 1B 78 */	mr r31, r3
/* 8036A5D0 00367510  4B D9 89 25 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8036A5D4 00367514  3C 80 62 6F */	lis r4, 0x626F6479@ha
/* 8036A5D8 00367518  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8036A5DC 0036751C  38 84 64 79 */	addi r4, r4, 0x626F6479@l
/* 8036A5E0 00367520  4B DC B8 65 */	bl getCollPart__8CollTreeFUl
/* 8036A5E4 00367524  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 8036A5E8 00367528  38 63 00 3C */	addi r3, r3, 0x3c
/* 8036A5EC 0036752C  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 8036A5F0 00367530  48 0A 8E 15 */	bl __as__4ID32FUl
/* 8036A5F4 00367534  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 8036A5F8 00367538  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8036A5FC 0036753C  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 8036A600 00367540  4B DC B8 45 */	bl getCollPart__8CollTreeFUl
/* 8036A604 00367544  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 8036A608 00367548  38 63 00 3C */	addi r3, r3, 0x3c
/* 8036A60C 0036754C  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 8036A610 00367550  48 0A 8D F5 */	bl __as__4ID32FUl
/* 8036A614 00367554  7F E3 FB 78 */	mr r3, r31
/* 8036A618 00367558  48 00 16 E5 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 8036A61C 0036755C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036A620 00367560  7F E3 FB 78 */	mr r3, r31
/* 8036A624 00367564  38 80 00 01 */	li r4, 1
/* 8036A628 00367568  60 00 08 00 */	ori r0, r0, 0x800
/* 8036A62C 0036756C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036A630 00367570  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036A634 00367574  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8036A638 00367578  7D 89 03 A6 */	mtctr r12
/* 8036A63C 0036757C  4E 80 04 21 */	bctrl 
/* 8036A640 00367580  7F E3 FB 78 */	mr r3, r31
/* 8036A644 00367584  38 80 00 01 */	li r4, 1
/* 8036A648 00367588  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036A64C 0036758C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8036A650 00367590  7D 89 03 A6 */	mtctr r12
/* 8036A654 00367594  4E 80 04 21 */	bctrl 
/* 8036A658 00367598  7F E3 FB 78 */	mr r3, r31
/* 8036A65C 0036759C  4B D9 CD 99 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A660 003675A0  28 03 00 02 */	cmplwi r3, 2
/* 8036A664 003675A4  40 81 00 0C */	ble .L_8036A670
/* 8036A668 003675A8  2C 03 00 0A */	cmpwi r3, 0xa
/* 8036A66C 003675AC  40 82 00 14 */	bne .L_8036A680
.L_8036A670:
/* 8036A670 003675B0  C0 22 06 38 */	lfs f1, lbl_8051E998@sda21(r2)
/* 8036A674 003675B4  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 8036A678 003675B8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036A67C 003675BC  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
.L_8036A680:
/* 8036A680 003675C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A684 003675C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A688 003675C8  7C 08 03 A6 */	mtlr r0
/* 8036A68C 003675CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A690 003675D0  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game6Jigumo3ObjFv

.fn doFinishStoneState__Q34Game6Jigumo3ObjFv, global
/* 8036A694 003675D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036A698 003675D8  7C 08 02 A6 */	mflr r0
/* 8036A69C 003675DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036A6A0 003675E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036A6A4 003675E4  7C 7F 1B 78 */	mr r31, r3
/* 8036A6A8 003675E8  4B D9 88 61 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8036A6AC 003675EC  88 1F 03 84 */	lbz r0, 0x384(r31)
/* 8036A6B0 003675F0  28 00 00 00 */	cmplwi r0, 0
/* 8036A6B4 003675F4  40 82 00 44 */	bne .L_8036A6F8
/* 8036A6B8 003675F8  3C 80 62 6F */	lis r4, 0x626F6479@ha
/* 8036A6BC 003675FC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8036A6C0 00367600  38 84 64 79 */	addi r4, r4, 0x626F6479@l
/* 8036A6C4 00367604  4B DC B7 81 */	bl getCollPart__8CollTreeFUl
/* 8036A6C8 00367608  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 8036A6CC 0036760C  38 63 00 3C */	addi r3, r3, 0x3c
/* 8036A6D0 00367610  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 8036A6D4 00367614  48 0A 8D 31 */	bl __as__4ID32FUl
/* 8036A6D8 00367618  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 8036A6DC 0036761C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8036A6E0 00367620  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 8036A6E4 00367624  4B DC B7 61 */	bl getCollPart__8CollTreeFUl
/* 8036A6E8 00367628  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 8036A6EC 0036762C  38 63 00 3C */	addi r3, r3, 0x3c
/* 8036A6F0 00367630  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 8036A6F4 00367634  48 0A 8D 11 */	bl __as__4ID32FUl
.L_8036A6F8:
/* 8036A6F8 00367638  7F E3 FB 78 */	mr r3, r31
/* 8036A6FC 0036763C  4B D9 CC F9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A700 00367640  28 03 00 02 */	cmplwi r3, 2
/* 8036A704 00367644  40 81 00 0C */	ble .L_8036A710
/* 8036A708 00367648  2C 03 00 0A */	cmpwi r3, 0xa
/* 8036A70C 0036764C  40 82 00 40 */	bne .L_8036A74C
.L_8036A710:
/* 8036A710 00367650  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036A714 00367654  7F E3 FB 78 */	mr r3, r31
/* 8036A718 00367658  38 80 00 00 */	li r4, 0
/* 8036A71C 0036765C  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8036A720 00367660  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036A724 00367664  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036A728 00367668  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8036A72C 0036766C  7D 89 03 A6 */	mtctr r12
/* 8036A730 00367670  4E 80 04 21 */	bctrl 
/* 8036A734 00367674  7F E3 FB 78 */	mr r3, r31
/* 8036A738 00367678  38 80 00 00 */	li r4, 0
/* 8036A73C 0036767C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036A740 00367680  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8036A744 00367684  7D 89 03 A6 */	mtctr r12
/* 8036A748 00367688  4E 80 04 21 */	bctrl 
.L_8036A74C:
/* 8036A74C 0036768C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8036A750 00367690  7F E3 FB 78 */	mr r3, r31
/* 8036A754 00367694  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 8036A758 00367698  C0 04 01 F4 */	lfs f0, 0x1f4(r4)
/* 8036A75C 0036769C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036A760 003676A0  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 8036A764 003676A4  48 00 13 D9 */	bl effectStart__Q34Game6Jigumo3ObjFv
/* 8036A768 003676A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036A76C 003676AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036A770 003676B0  7C 08 03 A6 */	mtlr r0
/* 8036A774 003676B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8036A778 003676B8  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game6Jigumo3ObjFv

.fn getGoalDist__Q34Game6Jigumo3ObjFv, global
/* 8036A77C 003676BC  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 8036A780 003676C0  C0 03 02 CC */	lfs f0, 0x2cc(r3)
/* 8036A784 003676C4  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 8036A788 003676C8  EC 81 00 28 */	fsubs f4, f1, f0
/* 8036A78C 003676CC  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 8036A790 003676D0  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 8036A794 003676D4  EC 63 00 28 */	fsubs f3, f3, f0
/* 8036A798 003676D8  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 8036A79C 003676DC  EC 04 01 32 */	fmuls f0, f4, f4
/* 8036A7A0 003676E0  EC 22 08 28 */	fsubs f1, f2, f1
/* 8036A7A4 003676E4  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 8036A7A8 003676E8  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8036A7AC 003676EC  4E 80 00 20 */	blr 
.endfn getGoalDist__Q34Game6Jigumo3ObjFv

.fn walkFunc__Q34Game6Jigumo3ObjFv, global
/* 8036A7B0 003676F0  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8036A7B4 003676F4  7C 08 02 A6 */	mflr r0
/* 8036A7B8 003676F8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8036A7BC 003676FC  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8036A7C0 00367700  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8036A7C4 00367704  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8036A7C8 00367708  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8036A7CC 0036770C  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8036A7D0 00367710  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8036A7D4 00367714  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8036A7D8 00367718  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 8036A7DC 0036771C  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 8036A7E0 00367720  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 8036A7E4 00367724  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8036A7E8 00367728  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8036A7EC 0036772C  7C 7E 1B 78 */	mr r30, r3
/* 8036A7F0 00367730  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8036A7F4 00367734  D0 03 03 64 */	stfs f0, 0x364(r3)
/* 8036A7F8 00367738  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 8036A7FC 0036773C  D0 03 03 68 */	stfs f0, 0x368(r3)
/* 8036A800 00367740  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8036A804 00367744  D0 03 03 6C */	stfs f0, 0x36c(r3)
/* 8036A808 00367748  80 63 02 80 */	lwz r3, 0x280(r3)
/* 8036A80C 0036774C  28 03 00 00 */	cmplwi r3, 0
/* 8036A810 00367750  41 82 00 1C */	beq .L_8036A82C
/* 8036A814 00367754  81 83 00 00 */	lwz r12, 0(r3)
/* 8036A818 00367758  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036A81C 0036775C  7D 89 03 A6 */	mtctr r12
/* 8036A820 00367760  4E 80 04 21 */	bctrl 
/* 8036A824 00367764  C0 03 00 00 */	lfs f0, 0(r3)
/* 8036A828 00367768  D0 1E 03 68 */	stfs f0, 0x368(r30)
.L_8036A82C:
/* 8036A82C 0036776C  7F C3 F3 78 */	mr r3, r30
/* 8036A830 00367770  48 00 11 71 */	bl getWalkSpeed__Q34Game6Jigumo3ObjFv
/* 8036A834 00367774  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8036A838 00367778  FF A0 08 90 */	fmr f29, f1
/* 8036A83C 0036777C  7F C3 F3 78 */	mr r3, r30
/* 8036A840 00367780  C3 C4 03 5C */	lfs f30, 0x35c(r4)
/* 8036A844 00367784  C3 E4 09 04 */	lfs f31, 0x904(r4)
/* 8036A848 00367788  C3 84 03 0C */	lfs f28, 0x30c(r4)
/* 8036A84C 0036778C  C3 64 03 34 */	lfs f27, 0x334(r4)
/* 8036A850 00367790  4B D9 CB A5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A854 00367794  7C 7F 1B 78 */	mr r31, r3
/* 8036A858 00367798  2C 1F 00 07 */	cmpwi r31, 7
/* 8036A85C 0036779C  41 82 00 24 */	beq .L_8036A880
/* 8036A860 003677A0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036A864 003677A4  88 03 08 FC */	lbz r0, 0x8fc(r3)
/* 8036A868 003677A8  28 00 00 00 */	cmplwi r0, 0
/* 8036A86C 003677AC  40 82 06 58 */	bne .L_8036AEC4
/* 8036A870 003677B0  2C 1F 00 06 */	cmpwi r31, 6
/* 8036A874 003677B4  41 82 00 0C */	beq .L_8036A880
/* 8036A878 003677B8  2C 1F 00 05 */	cmpwi r31, 5
/* 8036A87C 003677BC  40 82 06 48 */	bne .L_8036AEC4
.L_8036A880:
/* 8036A880 003677C0  C0 3E 02 CC */	lfs f1, 0x2cc(r30)
/* 8036A884 003677C4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036A888 003677C8  C0 7E 02 C8 */	lfs f3, 0x2c8(r30)
/* 8036A88C 003677CC  EC 21 00 28 */	fsubs f1, f1, f0
/* 8036A890 003677D0  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8036A894 003677D4  C0 5E 02 D0 */	lfs f2, 0x2d0(r30)
/* 8036A898 003677D8  EC 63 00 28 */	fsubs f3, f3, f0
/* 8036A89C 003677DC  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8036A8A0 003677E0  EC 21 00 72 */	fmuls f1, f1, f1
/* 8036A8A4 003677E4  EC 42 00 28 */	fsubs f2, f2, f0
/* 8036A8A8 003677E8  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036A8AC 003677EC  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8036A8B0 003677F0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8036A8B4 003677F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036A8B8 003677F8  40 81 00 14 */	ble .L_8036A8CC
/* 8036A8BC 003677FC  40 81 00 14 */	ble .L_8036A8D0
/* 8036A8C0 00367800  FC 00 08 34 */	frsqrte f0, f1
/* 8036A8C4 00367804  EC 20 00 72 */	fmuls f1, f0, f1
/* 8036A8C8 00367808  48 00 00 08 */	b .L_8036A8D0
.L_8036A8CC:
/* 8036A8CC 0036780C  FC 20 00 90 */	fmr f1, f0
.L_8036A8D0:
/* 8036A8D0 00367810  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036A8D4 00367814  FC 80 08 90 */	fmr f4, f1
/* 8036A8D8 00367818  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036A8DC 0036781C  40 80 00 08 */	bge .L_8036A8E4
/* 8036A8E0 00367820  FC 80 00 90 */	fmr f4, f0
.L_8036A8E4:
/* 8036A8E4 00367824  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036A8E8 00367828  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036A8EC 0036782C  EC 00 F0 24 */	fdivs f0, f0, f30
/* 8036A8F0 00367830  C0 62 06 3C */	lfs f3, lbl_8051E99C@sda21(r2)
/* 8036A8F4 00367834  C0 23 09 08 */	lfs f1, 0x908(r3)
/* 8036A8F8 00367838  C0 42 06 40 */	lfs f2, lbl_8051E9A0@sda21(r2)
/* 8036A8FC 0036783C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036A900 00367840  EC 04 00 32 */	fmuls f0, f4, f0
/* 8036A904 00367844  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036A908 00367848  EC 22 00 2A */	fadds f1, f2, f0
/* 8036A90C 0036784C  4B D6 4F 11 */	bl sin
/* 8036A910 00367850  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036A914 00367854  FC 00 08 18 */	frsp f0, f1
/* 8036A918 00367858  88 03 08 FB */	lbz r0, 0x8fb(r3)
/* 8036A91C 0036785C  EC 5F 00 32 */	fmuls f2, f31, f0
/* 8036A920 00367860  28 00 00 00 */	cmplwi r0, 0
/* 8036A924 00367864  40 82 00 08 */	bne .L_8036A92C
/* 8036A928 00367868  C0 42 06 18 */	lfs f2, lbl_8051E978@sda21(r2)
.L_8036A92C:
/* 8036A92C 0036786C  C0 3E 03 44 */	lfs f1, 0x344(r30)
/* 8036A930 00367870  C0 02 06 4C */	lfs f0, lbl_8051E9AC@sda21(r2)
/* 8036A934 00367874  EC 42 00 72 */	fmuls f2, f2, f1
/* 8036A938 00367878  C0 62 06 48 */	lfs f3, lbl_8051E9A8@sda21(r2)
/* 8036A93C 0036787C  EC 21 00 2A */	fadds f1, f1, f0
/* 8036A940 00367880  C0 82 06 44 */	lfs f4, lbl_8051E9A4@sda21(r2)
/* 8036A944 00367884  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036A948 00367888  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8036A94C 0036788C  D0 3E 03 44 */	stfs f1, 0x344(r30)
/* 8036A950 00367890  C0 3E 03 44 */	lfs f1, 0x344(r30)
/* 8036A954 00367894  EF C4 00 B2 */	fmuls f30, f4, f2
/* 8036A958 00367898  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036A95C 0036789C  40 81 00 08 */	ble .L_8036A964
/* 8036A960 003678A0  D0 1E 03 44 */	stfs f0, 0x344(r30)
.L_8036A964:
/* 8036A964 003678A4  7F C3 F3 78 */	mr r3, r30
/* 8036A968 003678A8  4B D9 CA 8D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036A96C 003678AC  2C 03 00 07 */	cmpwi r3, 7
/* 8036A970 003678B0  40 82 01 80 */	bne .L_8036AAF0
/* 8036A974 003678B4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036A978 003678B8  88 03 08 F9 */	lbz r0, 0x8f9(r3)
/* 8036A97C 003678BC  28 00 00 00 */	cmplwi r0, 0
/* 8036A980 003678C0  41 82 01 1C */	beq .L_8036AA9C
/* 8036A984 003678C4  C0 3E 03 38 */	lfs f1, 0x338(r30)
/* 8036A988 003678C8  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036A98C 003678CC  EC 01 00 2A */	fadds f0, f1, f0
/* 8036A990 003678D0  D0 1E 03 38 */	stfs f0, 0x338(r30)
/* 8036A994 003678D4  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 8036A998 003678D8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8036A99C 003678DC  28 00 00 00 */	cmplwi r0, 0
/* 8036A9A0 003678E0  41 82 00 C4 */	beq .L_8036AA64
/* 8036A9A4 003678E4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8036A9A8 003678E8  28 00 00 01 */	cmplwi r0, 1
/* 8036A9AC 003678EC  40 82 00 B8 */	bne .L_8036AA64
/* 8036A9B0 003678F0  C0 3E 03 38 */	lfs f1, 0x338(r30)
/* 8036A9B4 003678F4  C0 1E 03 3C */	lfs f0, 0x33c(r30)
/* 8036A9B8 003678F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036A9BC 003678FC  40 81 00 A8 */	ble .L_8036AA64
/* 8036A9C0 00367900  88 1E 03 40 */	lbz r0, 0x340(r30)
/* 8036A9C4 00367904  7C 00 00 34 */	cntlzw r0, r0
/* 8036A9C8 00367908  54 00 D9 7E */	srwi r0, r0, 5
/* 8036A9CC 0036790C  98 1E 03 40 */	stb r0, 0x340(r30)
/* 8036A9D0 00367910  80 1E 03 34 */	lwz r0, 0x334(r30)
/* 8036A9D4 00367914  2C 00 00 00 */	cmpwi r0, 0
/* 8036A9D8 00367918  40 81 00 0C */	ble .L_8036A9E4
/* 8036A9DC 0036791C  38 00 00 00 */	li r0, 0
/* 8036A9E0 00367920  98 1E 03 40 */	stb r0, 0x340(r30)
.L_8036A9E4:
/* 8036A9E4 00367924  88 1E 03 40 */	lbz r0, 0x340(r30)
/* 8036A9E8 00367928  28 00 00 00 */	cmplwi r0, 0
/* 8036A9EC 0036792C  41 82 00 20 */	beq .L_8036AA0C
/* 8036A9F0 00367930  7F C3 F3 78 */	mr r3, r30
/* 8036A9F4 00367934  38 80 00 03 */	li r4, 3
/* 8036A9F8 00367938  38 A0 00 00 */	li r5, 0
/* 8036A9FC 0036793C  4B D9 A6 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8036AA00 00367940  7F C3 F3 78 */	mr r3, r30
/* 8036AA04 00367944  48 00 12 F9 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 8036AA08 00367948  48 00 00 1C */	b .L_8036AA24
.L_8036AA0C:
/* 8036AA0C 0036794C  7F C3 F3 78 */	mr r3, r30
/* 8036AA10 00367950  38 80 00 02 */	li r4, 2
/* 8036AA14 00367954  38 A0 00 00 */	li r5, 0
/* 8036AA18 00367958  4B D9 A5 ED */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8036AA1C 0036795C  7F C3 F3 78 */	mr r3, r30
/* 8036AA20 00367960  48 00 11 1D */	bl effectStart__Q34Game6Jigumo3ObjFv
.L_8036AA24:
/* 8036AA24 00367964  4B D5 EB 7D */	bl rand
/* 8036AA28 00367968  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036AA2C 0036796C  3C 00 43 30 */	lis r0, 0x4330
/* 8036AA30 00367970  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8036AA34 00367974  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036AA38 00367978  90 01 00 38 */	stw r0, 0x38(r1)
/* 8036AA3C 0036797C  C8 22 06 10 */	lfd f1, lbl_8051E970@sda21(r2)
/* 8036AA40 00367980  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8036AA44 00367984  C0 42 06 00 */	lfs f2, lbl_8051E960@sda21(r2)
/* 8036AA48 00367988  EC 60 08 28 */	fsubs f3, f0, f1
/* 8036AA4C 0036798C  C0 23 09 14 */	lfs f1, 0x914(r3)
/* 8036AA50 00367990  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AA54 00367994  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036AA58 00367998  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036AA5C 0036799C  D0 3E 03 3C */	stfs f1, 0x33c(r30)
/* 8036AA60 003679A0  D0 1E 03 38 */	stfs f0, 0x338(r30)
.L_8036AA64:
/* 8036AA64 003679A4  88 1E 03 40 */	lbz r0, 0x340(r30)
/* 8036AA68 003679A8  28 00 00 00 */	cmplwi r0, 0
/* 8036AA6C 003679AC  41 82 00 30 */	beq .L_8036AA9C
/* 8036AA70 003679B0  C0 3E 03 38 */	lfs f1, 0x338(r30)
/* 8036AA74 003679B4  C0 1E 03 3C */	lfs f0, 0x33c(r30)
/* 8036AA78 003679B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036AA7C 003679BC  40 80 00 20 */	bge .L_8036AA9C
/* 8036AA80 003679C0  EC 01 00 24 */	fdivs f0, f1, f0
/* 8036AA84 003679C4  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 8036AA88 003679C8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036AA8C 003679CC  C0 43 09 18 */	lfs f2, 0x918(r3)
/* 8036AA90 003679D0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8036AA94 003679D4  EC 02 00 32 */	fmuls f0, f2, f0
/* 8036AA98 003679D8  EF BD 00 32 */	fmuls f29, f29, f0
.L_8036AA9C:
/* 8036AA9C 003679DC  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036AAA0 003679E0  88 03 08 FA */	lbz r0, 0x8fa(r3)
/* 8036AAA4 003679E4  28 00 00 00 */	cmplwi r0, 0
/* 8036AAA8 003679E8  41 82 00 48 */	beq .L_8036AAF0
/* 8036AAAC 003679EC  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 8036AAB0 003679F0  3C 00 43 30 */	lis r0, 0x4330
/* 8036AAB4 003679F4  90 01 00 38 */	stw r0, 0x38(r1)
/* 8036AAB8 003679F8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8036AABC 003679FC  C8 42 06 10 */	lfd f2, lbl_8051E970@sda21(r2)
/* 8036AAC0 00367A00  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8036AAC4 00367A04  C0 62 06 50 */	lfs f3, lbl_8051E9B0@sda21(r2)
/* 8036AAC8 00367A08  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 8036AACC 00367A0C  C0 02 06 54 */	lfs f0, lbl_8051E9B4@sda21(r2)
/* 8036AAD0 00367A10  EC 21 10 28 */	fsubs f1, f1, f2
/* 8036AAD4 00367A14  EC 23 00 72 */	fmuls f1, f3, f1
/* 8036AAD8 00367A18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036AADC 00367A1C  40 81 00 08 */	ble .L_8036AAE4
/* 8036AAE0 00367A20  FC 20 00 90 */	fmr f1, f0
.L_8036AAE4:
/* 8036AAE4 00367A24  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036AAE8 00367A28  EC 00 08 28 */	fsubs f0, f0, f1
/* 8036AAEC 00367A2C  EF BD 00 32 */	fmuls f29, f29, f0
.L_8036AAF0:
/* 8036AAF0 00367A30  C0 1E 02 EC */	lfs f0, 0x2ec(r30)
/* 8036AAF4 00367A34  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
/* 8036AAF8 00367A38  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8036AAFC 00367A3C  38 03 00 01 */	addi r0, r3, 1
/* 8036AB00 00367A40  90 1E 03 5C */	stw r0, 0x35c(r30)
/* 8036AB04 00367A44  80 1E 03 5C */	lwz r0, 0x35c(r30)
/* 8036AB08 00367A48  2C 00 00 3C */	cmpwi r0, 0x3c
/* 8036AB0C 00367A4C  40 81 01 78 */	ble .L_8036AC84
/* 8036AB10 00367A50  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 8036AB14 00367A54  C0 1E 03 54 */	lfs f0, 0x354(r30)
/* 8036AB18 00367A58  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 8036AB1C 00367A5C  EC 21 00 28 */	fsubs f1, f1, f0
/* 8036AB20 00367A60  C0 1E 03 50 */	lfs f0, 0x350(r30)
/* 8036AB24 00367A64  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 8036AB28 00367A68  EC 63 00 28 */	fsubs f3, f3, f0
/* 8036AB2C 00367A6C  C0 1E 03 58 */	lfs f0, 0x358(r30)
/* 8036AB30 00367A70  EC 21 00 72 */	fmuls f1, f1, f1
/* 8036AB34 00367A74  EC 42 00 28 */	fsubs f2, f2, f0
/* 8036AB38 00367A78  C0 02 06 58 */	lfs f0, lbl_8051E9B8@sda21(r2)
/* 8036AB3C 00367A7C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8036AB40 00367A80  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8036AB44 00367A84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036AB48 00367A88  40 80 01 1C */	bge .L_8036AC64
/* 8036AB4C 00367A8C  88 1E 02 E8 */	lbz r0, 0x2e8(r30)
/* 8036AB50 00367A90  C0 82 06 24 */	lfs f4, lbl_8051E984@sda21(r2)
/* 8036AB54 00367A94  28 00 00 00 */	cmplwi r0, 0
/* 8036AB58 00367A98  41 82 00 0C */	beq .L_8036AB64
/* 8036AB5C 00367A9C  C0 02 06 5C */	lfs f0, lbl_8051E9BC@sda21(r2)
/* 8036AB60 00367AA0  EC 84 00 32 */	fmuls f4, f4, f0
.L_8036AB64:
/* 8036AB64 00367AA4  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8036AB68 00367AA8  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AB6C 00367AAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036AB70 00367AB0  40 80 00 30 */	bge .L_8036ABA0
/* 8036AB74 00367AB4  C0 02 06 60 */	lfs f0, lbl_8051E9C0@sda21(r2)
/* 8036AB78 00367AB8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036AB7C 00367ABC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036AB80 00367AC0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036AB84 00367AC4  FC 00 00 1E */	fctiwz f0, f0
/* 8036AB88 00367AC8  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8036AB8C 00367ACC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8036AB90 00367AD0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036AB94 00367AD4  7C 03 04 2E */	lfsx f0, r3, r0
/* 8036AB98 00367AD8  FC 40 00 50 */	fneg f2, f0
/* 8036AB9C 00367ADC  48 00 00 28 */	b .L_8036ABC4
.L_8036ABA0:
/* 8036ABA0 00367AE0  C0 02 06 64 */	lfs f0, lbl_8051E9C4@sda21(r2)
/* 8036ABA4 00367AE4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036ABA8 00367AE8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036ABAC 00367AEC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036ABB0 00367AF0  FC 00 00 1E */	fctiwz f0, f0
/* 8036ABB4 00367AF4  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8036ABB8 00367AF8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036ABBC 00367AFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036ABC0 00367B00  7C 43 04 2E */	lfsx f2, r3, r0
.L_8036ABC4:
/* 8036ABC4 00367B04  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 8036ABC8 00367B08  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036ABCC 00367B0C  EC 24 08 BC */	fnmsubs f1, f4, f2, f1
/* 8036ABD0 00367B10  D0 3E 01 8C */	stfs f1, 0x18c(r30)
/* 8036ABD4 00367B14  C0 5E 01 FC */	lfs f2, 0x1fc(r30)
/* 8036ABD8 00367B18  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8036ABDC 00367B1C  40 80 00 08 */	bge .L_8036ABE4
/* 8036ABE0 00367B20  FC 40 10 50 */	fneg f2, f2
.L_8036ABE4:
/* 8036ABE4 00367B24  C0 22 06 64 */	lfs f1, lbl_8051E9C4@sda21(r2)
/* 8036ABE8 00367B28  3C 00 43 30 */	lis r0, 0x4330
/* 8036ABEC 00367B2C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036ABF0 00367B30  90 01 00 50 */	stw r0, 0x50(r1)
/* 8036ABF4 00367B34  EC 42 00 72 */	fmuls f2, f2, f1
/* 8036ABF8 00367B38  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036ABFC 00367B3C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8036AC00 00367B40  C8 22 06 10 */	lfd f1, lbl_8051E970@sda21(r2)
/* 8036AC04 00367B44  FC 60 10 1E */	fctiwz f3, f2
/* 8036AC08 00367B48  C0 42 06 18 */	lfs f2, lbl_8051E978@sda21(r2)
/* 8036AC0C 00367B4C  D8 61 00 48 */	stfd f3, 0x48(r1)
/* 8036AC10 00367B50  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8036AC14 00367B54  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036AC18 00367B58  7C 63 02 14 */	add r3, r3, r0
/* 8036AC1C 00367B5C  C0 63 00 04 */	lfs f3, 4(r3)
/* 8036AC20 00367B60  EC 04 00 FC */	fnmsubs f0, f4, f3, f0
/* 8036AC24 00367B64  D0 1E 01 94 */	stfs f0, 0x194(r30)
/* 8036AC28 00367B68  80 1E 03 34 */	lwz r0, 0x334(r30)
/* 8036AC2C 00367B6C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8036AC30 00367B70  90 01 00 54 */	stw r0, 0x54(r1)
/* 8036AC34 00367B74  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8036AC38 00367B78  EC 00 08 28 */	fsubs f0, f0, f1
/* 8036AC3C 00367B7C  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 8036AC40 00367B80  41 82 00 10 */	beq .L_8036AC50
/* 8036AC44 00367B84  C0 02 06 24 */	lfs f0, lbl_8051E984@sda21(r2)
/* 8036AC48 00367B88  D0 1E 02 F4 */	stfs f0, 0x2f4(r30)
/* 8036AC4C 00367B8C  48 00 00 18 */	b .L_8036AC64
.L_8036AC50:
/* 8036AC50 00367B90  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036AC54 00367B94  D0 1E 02 F4 */	stfs f0, 0x2f4(r30)
/* 8036AC58 00367B98  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036AC5C 00367B9C  88 03 09 10 */	lbz r0, 0x910(r3)
/* 8036AC60 00367BA0  90 1E 03 34 */	stw r0, 0x334(r30)
.L_8036AC64:
/* 8036AC64 00367BA4  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8036AC68 00367BA8  38 00 00 00 */	li r0, 0
/* 8036AC6C 00367BAC  D0 1E 03 50 */	stfs f0, 0x350(r30)
/* 8036AC70 00367BB0  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036AC74 00367BB4  D0 1E 03 54 */	stfs f0, 0x354(r30)
/* 8036AC78 00367BB8  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8036AC7C 00367BBC  D0 1E 03 58 */	stfs f0, 0x358(r30)
/* 8036AC80 00367BC0  90 1E 03 5C */	stw r0, 0x35c(r30)
.L_8036AC84:
/* 8036AC84 00367BC4  7F C4 F3 78 */	mr r4, r30
/* 8036AC88 00367BC8  38 61 00 14 */	addi r3, r1, 0x14
/* 8036AC8C 00367BCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036AC90 00367BD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036AC94 00367BD4  7D 89 03 A6 */	mtctr r12
/* 8036AC98 00367BD8  4E 80 04 21 */	bctrl 
/* 8036AC9C 00367BDC  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 8036ACA0 00367BE0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8036ACA4 00367BE4  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8036ACA8 00367BE8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8036ACAC 00367BEC  C0 3E 02 C8 */	lfs f1, 0x2c8(r30)
/* 8036ACB0 00367BF0  C0 1E 02 D0 */	lfs f0, 0x2d0(r30)
/* 8036ACB4 00367BF4  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8036ACB8 00367BF8  EC 21 28 28 */	fsubs f1, f1, f5
/* 8036ACBC 00367BFC  EC 40 18 28 */	fsubs f2, f0, f3
/* 8036ACC0 00367C00  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8036ACC4 00367C04  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8036ACC8 00367C08  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8036ACCC 00367C0C  4B CC A4 3D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8036ACD0 00367C10  48 0A 6F 01 */	bl roundAng__Ff
/* 8036ACD4 00367C14  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036ACD8 00367C18  FF E0 08 90 */	fmr f31, f1
/* 8036ACDC 00367C1C  7F C3 F3 78 */	mr r3, r30
/* 8036ACE0 00367C20  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8036ACE4 00367C24  7D 89 03 A6 */	mtctr r12
/* 8036ACE8 00367C28  4E 80 04 21 */	bctrl 
/* 8036ACEC 00367C2C  FC 40 08 90 */	fmr f2, f1
/* 8036ACF0 00367C30  FC 20 F8 90 */	fmr f1, f31
/* 8036ACF4 00367C34  48 0A 6F 09 */	bl angDist__Fff
/* 8036ACF8 00367C38  EF 81 07 32 */	fmuls f28, f1, f28
/* 8036ACFC 00367C3C  C0 02 06 48 */	lfs f0, lbl_8051E9A8@sda21(r2)
/* 8036AD00 00367C40  C0 22 06 44 */	lfs f1, lbl_8051E9A4@sda21(r2)
/* 8036AD04 00367C44  EC 00 06 F2 */	fmuls f0, f0, f27
/* 8036AD08 00367C48  FC 40 E2 10 */	fabs f2, f28
/* 8036AD0C 00367C4C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8036AD10 00367C50  FC 00 10 18 */	frsp f0, f2
/* 8036AD14 00367C54  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036AD18 00367C58  40 81 00 1C */	ble .L_8036AD34
/* 8036AD1C 00367C5C  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AD20 00367C60  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8036AD24 00367C64  40 81 00 0C */	ble .L_8036AD30
/* 8036AD28 00367C68  FF 80 08 90 */	fmr f28, f1
/* 8036AD2C 00367C6C  48 00 00 08 */	b .L_8036AD34
.L_8036AD30:
/* 8036AD30 00367C70  FF 80 08 50 */	fneg f28, f1
.L_8036AD34:
/* 8036AD34 00367C74  7F C3 F3 78 */	mr r3, r30
/* 8036AD38 00367C78  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036AD3C 00367C7C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8036AD40 00367C80  7D 89 03 A6 */	mtctr r12
/* 8036AD44 00367C84  4E 80 04 21 */	bctrl 
/* 8036AD48 00367C88  EC 3C 08 2A */	fadds f1, f28, f1
/* 8036AD4C 00367C8C  48 0A 6E 85 */	bl roundAng__Ff
/* 8036AD50 00367C90  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8036AD54 00367C94  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AD58 00367C98  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8036AD5C 00367C9C  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 8036AD60 00367CA0  C0 9E 01 FC */	lfs f4, 0x1fc(r30)
/* 8036AD64 00367CA4  EC 64 F0 2A */	fadds f3, f4, f30
/* 8036AD68 00367CA8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036AD6C 00367CAC  40 80 00 30 */	bge .L_8036AD9C
/* 8036AD70 00367CB0  C0 02 06 60 */	lfs f0, lbl_8051E9C0@sda21(r2)
/* 8036AD74 00367CB4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036AD78 00367CB8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036AD7C 00367CBC  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036AD80 00367CC0  FC 00 00 1E */	fctiwz f0, f0
/* 8036AD84 00367CC4  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8036AD88 00367CC8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8036AD8C 00367CCC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036AD90 00367CD0  7C 03 04 2E */	lfsx f0, r3, r0
/* 8036AD94 00367CD4  FC 40 00 50 */	fneg f2, f0
/* 8036AD98 00367CD8  48 00 00 28 */	b .L_8036ADC0
.L_8036AD9C:
/* 8036AD9C 00367CDC  C0 02 06 64 */	lfs f0, lbl_8051E9C4@sda21(r2)
/* 8036ADA0 00367CE0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036ADA4 00367CE4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036ADA8 00367CE8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036ADAC 00367CEC  FC 00 00 1E */	fctiwz f0, f0
/* 8036ADB0 00367CF0  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8036ADB4 00367CF4  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8036ADB8 00367CF8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036ADBC 00367CFC  7C 43 04 2E */	lfsx f2, r3, r0
.L_8036ADC0:
/* 8036ADC0 00367D00  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036ADC4 00367D04  EF FD 00 B2 */	fmuls f31, f29, f2
/* 8036ADC8 00367D08  C0 3E 01 D4 */	lfs f1, 0x1d4(r30)
/* 8036ADCC 00367D0C  C3 9E 01 D8 */	lfs f28, 0x1d8(r30)
/* 8036ADD0 00367D10  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036ADD4 00367D14  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8036ADD8 00367D18  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8036ADDC 00367D1C  D3 81 00 30 */	stfs f28, 0x30(r1)
/* 8036ADE0 00367D20  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8036ADE4 00367D24  40 80 00 08 */	bge .L_8036ADEC
/* 8036ADE8 00367D28  FC 60 18 50 */	fneg f3, f3
.L_8036ADEC:
/* 8036ADEC 00367D2C  C0 02 06 64 */	lfs f0, lbl_8051E9C4@sda21(r2)
/* 8036ADF0 00367D30  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036ADF4 00367D34  FC 40 F2 10 */	fabs f2, f30
/* 8036ADF8 00367D38  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036ADFC 00367D3C  EC 23 00 32 */	fmuls f1, f3, f0
/* 8036AE00 00367D40  FC 00 10 18 */	frsp f0, f2
/* 8036AE04 00367D44  FC 20 08 1E */	fctiwz f1, f1
/* 8036AE08 00367D48  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 8036AE0C 00367D4C  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 8036AE10 00367D50  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036AE14 00367D54  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036AE18 00367D58  7C 63 02 14 */	add r3, r3, r0
/* 8036AE1C 00367D5C  C0 03 00 04 */	lfs f0, 4(r3)
/* 8036AE20 00367D60  EF BD 00 32 */	fmuls f29, f29, f0
/* 8036AE24 00367D64  D0 9E 02 EC */	stfs f4, 0x2ec(r30)
/* 8036AE28 00367D68  40 81 00 1C */	ble .L_8036AE44
/* 8036AE2C 00367D6C  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AE30 00367D70  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8036AE34 00367D74  40 81 00 0C */	ble .L_8036AE40
/* 8036AE38 00367D78  FF C0 D8 90 */	fmr f30, f27
/* 8036AE3C 00367D7C  48 00 00 08 */	b .L_8036AE44
.L_8036AE40:
/* 8036AE40 00367D80  FF C0 D8 50 */	fneg f30, f27
.L_8036AE44:
/* 8036AE44 00367D84  2C 1F 00 06 */	cmpwi r31, 6
/* 8036AE48 00367D88  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 8036AE4C 00367D8C  41 82 00 0C */	beq .L_8036AE58
/* 8036AE50 00367D90  2C 1F 00 05 */	cmpwi r31, 5
/* 8036AE54 00367D94  40 82 00 08 */	bne .L_8036AE5C
.L_8036AE58:
/* 8036AE58 00367D98  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
.L_8036AE5C:
/* 8036AE5C 00367D9C  C0 02 06 44 */	lfs f0, lbl_8051E9A4@sda21(r2)
/* 8036AE60 00367DA0  EC 20 F0 7A */	fmadds f1, f0, f1, f30
/* 8036AE64 00367DA4  48 0A 6D 6D */	bl roundAng__Ff
/* 8036AE68 00367DA8  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 8036AE6C 00367DAC  EC 00 08 2A */	fadds f0, f0, f1
/* 8036AE70 00367DB0  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
/* 8036AE74 00367DB4  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 8036AE78 00367DB8  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 8036AE7C 00367DBC  D3 FE 01 D4 */	stfs f31, 0x1d4(r30)
/* 8036AE80 00367DC0  D3 9E 01 D8 */	stfs f28, 0x1d8(r30)
/* 8036AE84 00367DC4  D3 BE 01 DC */	stfs f29, 0x1dc(r30)
/* 8036AE88 00367DC8  88 1E 03 40 */	lbz r0, 0x340(r30)
/* 8036AE8C 00367DCC  28 00 00 00 */	cmplwi r0, 0
/* 8036AE90 00367DD0  41 82 00 BC */	beq .L_8036AF4C
/* 8036AE94 00367DD4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036AE98 00367DD8  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036AE9C 00367DDC  C0 03 09 18 */	lfs f0, 0x918(r3)
/* 8036AEA0 00367DE0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036AEA4 00367DE4  40 82 00 A8 */	bne .L_8036AF4C
/* 8036AEA8 00367DE8  D0 3E 01 D4 */	stfs f1, 0x1d4(r30)
/* 8036AEAC 00367DEC  D0 3E 01 D8 */	stfs f1, 0x1d8(r30)
/* 8036AEB0 00367DF0  D0 3E 01 DC */	stfs f1, 0x1dc(r30)
/* 8036AEB4 00367DF4  D0 3E 01 C8 */	stfs f1, 0x1c8(r30)
/* 8036AEB8 00367DF8  D0 3E 01 CC */	stfs f1, 0x1cc(r30)
/* 8036AEBC 00367DFC  D0 3E 01 D0 */	stfs f1, 0x1d0(r30)
/* 8036AEC0 00367E00  48 00 00 8C */	b .L_8036AF4C
.L_8036AEC4:
/* 8036AEC4 00367E04  2C 1F 00 04 */	cmpwi r31, 4
/* 8036AEC8 00367E08  40 82 00 6C */	bne .L_8036AF34
/* 8036AECC 00367E0C  7F C3 F3 78 */	mr r3, r30
/* 8036AED0 00367E10  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036AED4 00367E14  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8036AED8 00367E18  7D 89 03 A6 */	mtctr r12
/* 8036AEDC 00367E1C  4E 80 04 21 */	bctrl 
/* 8036AEE0 00367E20  4B D6 49 3D */	bl sin
/* 8036AEE4 00367E24  7F C3 F3 78 */	mr r3, r30
/* 8036AEE8 00367E28  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8036AEEC 00367E2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036AEF0 00367E30  FF 80 08 18 */	frsp f28, f1
/* 8036AEF4 00367E34  C3 7E 01 D8 */	lfs f27, 0x1d8(r30)
/* 8036AEF8 00367E38  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8036AEFC 00367E3C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8036AF00 00367E40  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8036AF04 00367E44  D3 61 00 24 */	stfs f27, 0x24(r1)
/* 8036AF08 00367E48  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8036AF0C 00367E4C  7D 89 03 A6 */	mtctr r12
/* 8036AF10 00367E50  4E 80 04 21 */	bctrl 
/* 8036AF14 00367E54  4B D6 43 A1 */	bl cos
/* 8036AF18 00367E58  EC 1D 07 32 */	fmuls f0, f29, f28
/* 8036AF1C 00367E5C  FC 20 08 18 */	frsp f1, f1
/* 8036AF20 00367E60  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8036AF24 00367E64  EC 1D 00 72 */	fmuls f0, f29, f1
/* 8036AF28 00367E68  D3 7E 01 D8 */	stfs f27, 0x1d8(r30)
/* 8036AF2C 00367E6C  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8036AF30 00367E70  48 00 00 1C */	b .L_8036AF4C
.L_8036AF34:
/* 8036AF34 00367E74  FC 20 E8 90 */	fmr f1, f29
/* 8036AF38 00367E78  7F C3 F3 78 */	mr r3, r30
/* 8036AF3C 00367E7C  FC 40 E0 90 */	fmr f2, f28
/* 8036AF40 00367E80  38 9E 02 C8 */	addi r4, r30, 0x2c8
/* 8036AF44 00367E84  FC 60 D8 90 */	fmr f3, f27
/* 8036AF48 00367E88  4B DA A6 95 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_8036AF4C:
/* 8036AF4C 00367E8C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8036AF50 00367E90  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8036AF54 00367E94  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8036AF58 00367E98  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8036AF5C 00367E9C  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 8036AF60 00367EA0  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8036AF64 00367EA4  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 8036AF68 00367EA8  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 8036AF6C 00367EAC  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 8036AF70 00367EB0  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 8036AF74 00367EB4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8036AF78 00367EB8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8036AF7C 00367EBC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8036AF80 00367EC0  7C 08 03 A6 */	mtlr r0
/* 8036AF84 00367EC4  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8036AF88 00367EC8  4E 80 00 20 */	blr 
.endfn walkFunc__Q34Game6Jigumo3ObjFv

.fn getOffsetForMapCollision__Q34Game6Jigumo3ObjFv, global
/* 8036AF8C 00367ECC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8036AF90 00367ED0  38 A0 00 00 */	li r5, 0
/* 8036AF94 00367ED4  80 C4 01 E0 */	lwz r6, 0x1e0(r4)
/* 8036AF98 00367ED8  54 C0 05 6B */	rlwinm. r0, r6, 0, 0x15, 0x15
/* 8036AF9C 00367EDC  40 82 00 0C */	bne .L_8036AFA8
/* 8036AFA0 00367EE0  54 C0 03 5B */	rlwinm. r0, r6, 0, 0xd, 0xd
/* 8036AFA4 00367EE4  41 82 00 08 */	beq .L_8036AFAC
.L_8036AFA8:
/* 8036AFA8 00367EE8  38 A0 00 01 */	li r5, 1
.L_8036AFAC:
/* 8036AFAC 00367EEC  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8036AFB0 00367EF0  41 82 00 18 */	beq .L_8036AFC8
/* 8036AFB4 00367EF4  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AFB8 00367EF8  D0 03 00 00 */	stfs f0, 0(r3)
/* 8036AFBC 00367EFC  D0 03 00 04 */	stfs f0, 4(r3)
/* 8036AFC0 00367F00  D0 03 00 08 */	stfs f0, 8(r3)
/* 8036AFC4 00367F04  48 00 01 5C */	b .L_8036B120
.L_8036AFC8:
/* 8036AFC8 00367F08  88 04 02 E8 */	lbz r0, 0x2e8(r4)
/* 8036AFCC 00367F0C  28 00 00 00 */	cmplwi r0, 0
/* 8036AFD0 00367F10  41 82 00 AC */	beq .L_8036B07C
/* 8036AFD4 00367F14  C0 A4 01 FC */	lfs f5, 0x1fc(r4)
/* 8036AFD8 00367F18  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AFDC 00367F1C  FC 20 28 90 */	fmr f1, f5
/* 8036AFE0 00367F20  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8036AFE4 00367F24  40 80 00 08 */	bge .L_8036AFEC
/* 8036AFE8 00367F28  FC 20 28 50 */	fneg f1, f5
.L_8036AFEC:
/* 8036AFEC 00367F2C  C0 42 06 64 */	lfs f2, lbl_8051E9C4@sda21(r2)
/* 8036AFF0 00367F30  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8036AFF4 00367F34  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036AFF8 00367F38  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 8036AFFC 00367F3C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036B000 00367F40  C0 62 06 68 */	lfs f3, lbl_8051E9C8@sda21(r2)
/* 8036B004 00367F44  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8036B008 00367F48  FC 00 08 1E */	fctiwz f0, f1
/* 8036B00C 00367F4C  D8 01 00 08 */	stfd f0, 8(r1)
/* 8036B010 00367F50  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8036B014 00367F54  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036B018 00367F58  7C 85 02 14 */	add r4, r5, r0
/* 8036B01C 00367F5C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8036B020 00367F60  EC 83 00 32 */	fmuls f4, f3, f0
/* 8036B024 00367F64  40 80 00 28 */	bge .L_8036B04C
/* 8036B028 00367F68  C0 02 06 60 */	lfs f0, lbl_8051E9C0@sda21(r2)
/* 8036B02C 00367F6C  EC 05 00 32 */	fmuls f0, f5, f0
/* 8036B030 00367F70  FC 00 00 1E */	fctiwz f0, f0
/* 8036B034 00367F74  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8036B038 00367F78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036B03C 00367F7C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036B040 00367F80  7C 05 04 2E */	lfsx f0, r5, r0
/* 8036B044 00367F84  FC 00 00 50 */	fneg f0, f0
/* 8036B048 00367F88  48 00 00 1C */	b .L_8036B064
.L_8036B04C:
/* 8036B04C 00367F8C  EC 05 00 B2 */	fmuls f0, f5, f2
/* 8036B050 00367F90  FC 00 00 1E */	fctiwz f0, f0
/* 8036B054 00367F94  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8036B058 00367F98  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8036B05C 00367F9C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036B060 00367FA0  7C 05 04 2E */	lfsx f0, r5, r0
.L_8036B064:
/* 8036B064 00367FA4  EC 23 00 32 */	fmuls f1, f3, f0
/* 8036B068 00367FA8  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B06C 00367FAC  D0 23 00 00 */	stfs f1, 0(r3)
/* 8036B070 00367FB0  D0 03 00 04 */	stfs f0, 4(r3)
/* 8036B074 00367FB4  D0 83 00 08 */	stfs f4, 8(r3)
/* 8036B078 00367FB8  48 00 00 A8 */	b .L_8036B120
.L_8036B07C:
/* 8036B07C 00367FBC  C0 A4 01 FC */	lfs f5, 0x1fc(r4)
/* 8036B080 00367FC0  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B084 00367FC4  FC 20 28 90 */	fmr f1, f5
/* 8036B088 00367FC8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8036B08C 00367FCC  40 80 00 08 */	bge .L_8036B094
/* 8036B090 00367FD0  FC 20 28 50 */	fneg f1, f5
.L_8036B094:
/* 8036B094 00367FD4  C0 42 06 64 */	lfs f2, lbl_8051E9C4@sda21(r2)
/* 8036B098 00367FD8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8036B09C 00367FDC  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B0A0 00367FE0  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 8036B0A4 00367FE4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036B0A8 00367FE8  C0 62 06 24 */	lfs f3, lbl_8051E984@sda21(r2)
/* 8036B0AC 00367FEC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8036B0B0 00367FF0  FC 00 08 1E */	fctiwz f0, f1
/* 8036B0B4 00367FF4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8036B0B8 00367FF8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8036B0BC 00367FFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036B0C0 00368000  7C 85 02 14 */	add r4, r5, r0
/* 8036B0C4 00368004  C0 04 00 04 */	lfs f0, 4(r4)
/* 8036B0C8 00368008  EC 83 00 32 */	fmuls f4, f3, f0
/* 8036B0CC 0036800C  40 80 00 28 */	bge .L_8036B0F4
/* 8036B0D0 00368010  C0 02 06 60 */	lfs f0, lbl_8051E9C0@sda21(r2)
/* 8036B0D4 00368014  EC 05 00 32 */	fmuls f0, f5, f0
/* 8036B0D8 00368018  FC 00 00 1E */	fctiwz f0, f0
/* 8036B0DC 0036801C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8036B0E0 00368020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036B0E4 00368024  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036B0E8 00368028  7C 05 04 2E */	lfsx f0, r5, r0
/* 8036B0EC 0036802C  FC 00 00 50 */	fneg f0, f0
/* 8036B0F0 00368030  48 00 00 1C */	b .L_8036B10C
.L_8036B0F4:
/* 8036B0F4 00368034  EC 05 00 B2 */	fmuls f0, f5, f2
/* 8036B0F8 00368038  FC 00 00 1E */	fctiwz f0, f0
/* 8036B0FC 0036803C  D8 01 00 08 */	stfd f0, 8(r1)
/* 8036B100 00368040  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8036B104 00368044  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036B108 00368048  7C 05 04 2E */	lfsx f0, r5, r0
.L_8036B10C:
/* 8036B10C 0036804C  EC 23 00 32 */	fmuls f1, f3, f0
/* 8036B110 00368050  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B114 00368054  D0 23 00 00 */	stfs f1, 0(r3)
/* 8036B118 00368058  D0 03 00 04 */	stfs f0, 4(r3)
/* 8036B11C 0036805C  D0 83 00 08 */	stfs f4, 8(r3)
.L_8036B120:
/* 8036B120 00368060  38 21 00 20 */	addi r1, r1, 0x20
/* 8036B124 00368064  4E 80 00 20 */	blr 
.endfn getOffsetForMapCollision__Q34Game6Jigumo3ObjFv

.fn calcBaseTrMatrix__Q34Game6Jigumo3ObjFv, global
/* 8036B128 00368068  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8036B12C 0036806C  7C 08 02 A6 */	mflr r0
/* 8036B130 00368070  90 01 01 64 */	stw r0, 0x164(r1)
/* 8036B134 00368074  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 8036B138 00368078  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 8036B13C 0036807C  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 8036B140 00368080  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 8036B144 00368084  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 8036B148 00368088  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 8036B14C 0036808C  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 8036B150 00368090  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 8036B154 00368094  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 8036B158 00368098  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 8036B15C 0036809C  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 8036B160 003680A0  7C 7F 1B 78 */	mr r31, r3
/* 8036B164 003680A4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8036B168 003680A8  88 04 08 F8 */	lbz r0, 0x8f8(r4)
/* 8036B16C 003680AC  28 00 00 00 */	cmplwi r0, 0
/* 8036B170 003680B0  40 82 00 60 */	bne .L_8036B1D0
/* 8036B174 003680B4  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B178 003680B8  38 7F 01 38 */	addi r3, r31, 0x138
/* 8036B17C 003680BC  38 81 00 58 */	addi r4, r1, 0x58
/* 8036B180 003680C0  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8036B184 003680C4  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8036B188 003680C8  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8036B18C 003680CC  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8036B190 003680D0  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8036B194 003680D4  48 0B D1 45 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8036B198 003680D8  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8036B19C 003680DC  38 7F 01 38 */	addi r3, r31, 0x138
/* 8036B1A0 003680E0  80 84 00 08 */	lwz r4, 8(r4)
/* 8036B1A4 003680E4  38 84 00 24 */	addi r4, r4, 0x24
/* 8036B1A8 003680E8  4B D7 F1 25 */	bl PSMTXCopy
/* 8036B1AC 003680EC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8036B1B0 003680F0  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 8036B1B4 003680F4  80 63 00 08 */	lwz r3, 8(r3)
/* 8036B1B8 003680F8  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8036B1BC 003680FC  C0 1F 01 6C */	lfs f0, 0x16c(r31)
/* 8036B1C0 00368100  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8036B1C4 00368104  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 8036B1C8 00368108  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8036B1CC 0036810C  48 00 07 40 */	b .L_8036B90C
.L_8036B1D0:
/* 8036B1D0 00368110  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8036B1D4 00368114  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8036B1D8 00368118  28 05 00 00 */	cmplwi r5, 0
/* 8036B1DC 0036811C  C3 64 01 A4 */	lfs f27, 0x1a4(r4)
/* 8036B1E0 00368120  C3 E3 00 54 */	lfs f31, 0x54(r3)
/* 8036B1E4 00368124  41 82 00 4C */	beq .L_8036B230
/* 8036B1E8 00368128  88 05 00 48 */	lbz r0, 0x48(r5)
/* 8036B1EC 0036812C  28 00 00 00 */	cmplwi r0, 0
/* 8036B1F0 00368130  41 82 00 40 */	beq .L_8036B230
/* 8036B1F4 00368134  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8036B1F8 00368138  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8036B1FC 0036813C  81 83 00 04 */	lwz r12, 4(r3)
/* 8036B200 00368140  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8036B204 00368144  7D 89 03 A6 */	mtctr r12
/* 8036B208 00368148  4E 80 04 21 */	bctrl 
/* 8036B20C 0036814C  C0 02 06 6C */	lfs f0, lbl_8051E9CC@sda21(r2)
/* 8036B210 00368150  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8036B214 00368154  EC 00 08 2A */	fadds f0, f0, f1
/* 8036B218 00368158  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8036B21C 0036815C  40 81 00 14 */	ble .L_8036B230
/* 8036B220 00368160  38 60 00 00 */	li r3, 0
/* 8036B224 00368164  38 00 00 1E */	li r0, 0x1e
/* 8036B228 00368168  90 7F 03 34 */	stw r3, 0x334(r31)
/* 8036B22C 0036816C  90 1F 03 4C */	stw r0, 0x34c(r31)
.L_8036B230:
/* 8036B230 00368170  80 7F 03 4C */	lwz r3, 0x34c(r31)
/* 8036B234 00368174  2C 03 00 00 */	cmpwi r3, 0
/* 8036B238 00368178  40 81 00 20 */	ble .L_8036B258
/* 8036B23C 0036817C  38 03 FF FF */	addi r0, r3, -1
/* 8036B240 00368180  90 1F 03 4C */	stw r0, 0x34c(r31)
/* 8036B244 00368184  80 1F 03 4C */	lwz r0, 0x34c(r31)
/* 8036B248 00368188  2C 00 00 00 */	cmpwi r0, 0
/* 8036B24C 0036818C  40 80 00 0C */	bge .L_8036B258
/* 8036B250 00368190  38 00 00 00 */	li r0, 0
/* 8036B254 00368194  90 1F 03 4C */	stw r0, 0x34c(r31)
.L_8036B258:
/* 8036B258 00368198  7F E4 FB 78 */	mr r4, r31
/* 8036B25C 0036819C  38 61 00 08 */	addi r3, r1, 8
/* 8036B260 003681A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036B264 003681A4  C3 DF 01 8C */	lfs f30, 0x18c(r31)
/* 8036B268 003681A8  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 8036B26C 003681AC  C3 BF 01 90 */	lfs f29, 0x190(r31)
/* 8036B270 003681B0  C3 9F 01 94 */	lfs f28, 0x194(r31)
/* 8036B274 003681B4  7D 89 03 A6 */	mtctr r12
/* 8036B278 003681B8  4E 80 04 21 */	bctrl 
/* 8036B27C 003681BC  C0 01 00 08 */	lfs f0, 8(r1)
/* 8036B280 003681C0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036B284 003681C4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036B288 003681C8  C0 62 06 18 */	lfs f3, lbl_8051E978@sda21(r2)
/* 8036B28C 003681CC  D0 1F 02 40 */	stfs f0, 0x240(r31)
/* 8036B290 003681D0  38 E1 00 48 */	addi r7, r1, 0x48
/* 8036B294 003681D4  C0 02 06 70 */	lfs f0, lbl_8051E9D0@sda21(r2)
/* 8036B298 003681D8  38 DF 01 C8 */	addi r6, r31, 0x1c8
/* 8036B29C 003681DC  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8036B2A0 003681E0  38 A0 00 00 */	li r5, 0
/* 8036B2A4 003681E4  38 00 FF FF */	li r0, -1
/* 8036B2A8 003681E8  FC 20 F8 90 */	fmr f1, f31
/* 8036B2AC 003681EC  D0 5F 02 44 */	stfs f2, 0x244(r31)
/* 8036B2B0 003681F0  38 81 00 64 */	addi r4, r1, 0x64
/* 8036B2B4 003681F4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8036B2B8 003681F8  D0 5F 02 48 */	stfs f2, 0x248(r31)
/* 8036B2BC 003681FC  C0 5F 02 44 */	lfs f2, 0x244(r31)
/* 8036B2C0 00368200  C0 BF 02 40 */	lfs f5, 0x240(r31)
/* 8036B2C4 00368204  EF BD 10 2A */	fadds f29, f29, f2
/* 8036B2C8 00368208  C0 9F 02 48 */	lfs f4, 0x248(r31)
/* 8036B2CC 0036820C  EF DE 28 2A */	fadds f30, f30, f5
/* 8036B2D0 00368210  C0 43 08 00 */	lfs f2, 0x800(r3)
/* 8036B2D4 00368214  EF 9C 20 2A */	fadds f28, f28, f4
/* 8036B2D8 00368218  D3 61 00 54 */	stfs f27, 0x54(r1)
/* 8036B2DC 0036821C  EF BD D8 2A */	fadds f29, f29, f27
/* 8036B2E0 00368220  D3 C1 00 48 */	stfs f30, 0x48(r1)
/* 8036B2E4 00368224  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8036B2E8 00368228  D3 81 00 50 */	stfs f28, 0x50(r1)
/* 8036B2EC 0036822C  D3 A1 00 4C */	stfs f29, 0x4c(r1)
/* 8036B2F0 00368230  81 1F 00 C0 */	lwz r8, 0xc0(r31)
/* 8036B2F4 00368234  C0 88 00 4C */	lfs f4, 0x4c(r8)
/* 8036B2F8 00368238  90 E1 00 64 */	stw r7, 0x64(r1)
/* 8036B2FC 0036823C  90 C1 00 68 */	stw r6, 0x68(r1)
/* 8036B300 00368240  D0 81 00 6C */	stfs f4, 0x6c(r1)
/* 8036B304 00368244  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 8036B308 00368248  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8036B30C 0036824C  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 8036B310 00368250  98 A1 00 D8 */	stb r5, 0xd8(r1)
/* 8036B314 00368254  98 A1 00 7D */	stb r5, 0x7d(r1)
/* 8036B318 00368258  98 A1 00 7C */	stb r5, 0x7c(r1)
/* 8036B31C 0036825C  90 A1 00 AC */	stw r5, 0xac(r1)
/* 8036B320 00368260  90 A1 00 78 */	stw r5, 0x78(r1)
/* 8036B324 00368264  98 A1 00 F4 */	stb r5, 0xf4(r1)
/* 8036B328 00368268  90 A1 00 F8 */	stw r5, 0xf8(r1)
/* 8036B32C 0036826C  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 8036B330 00368270  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 8036B334 00368274  90 01 00 FC */	stw r0, 0xfc(r1)
/* 8036B338 00368278  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 8036B33C 0036827C  98 A1 00 7E */	stb r5, 0x7e(r1)
/* 8036B340 00368280  81 83 00 04 */	lwz r12, 4(r3)
/* 8036B344 00368284  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8036B348 00368288  7D 89 03 A6 */	mtctr r12
/* 8036B34C 0036828C  4E 80 04 21 */	bctrl 
/* 8036B350 00368290  7F E3 FB 78 */	mr r3, r31
/* 8036B354 00368294  4B D9 C0 A1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036B358 00368298  2C 03 00 04 */	cmpwi r3, 4
/* 8036B35C 0036829C  41 82 01 B4 */	beq .L_8036B510
/* 8036B360 003682A0  80 1F 03 4C */	lwz r0, 0x34c(r31)
/* 8036B364 003682A4  2C 00 00 00 */	cmpwi r0, 0
/* 8036B368 003682A8  40 82 01 A8 */	bne .L_8036B510
/* 8036B36C 003682AC  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 8036B370 003682B0  2C 00 00 00 */	cmpwi r0, 0
/* 8036B374 003682B4  41 81 00 10 */	bgt .L_8036B384
/* 8036B378 003682B8  80 01 00 AC */	lwz r0, 0xac(r1)
/* 8036B37C 003682BC  28 00 00 00 */	cmplwi r0, 0
/* 8036B380 003682C0  41 82 01 90 */	beq .L_8036B510
.L_8036B384:
/* 8036B384 003682C4  80 01 00 AC */	lwz r0, 0xac(r1)
/* 8036B388 003682C8  28 00 00 00 */	cmplwi r0, 0
/* 8036B38C 003682CC  41 82 00 4C */	beq .L_8036B3D8
/* 8036B390 003682D0  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036B394 003682D4  C0 41 00 C0 */	lfs f2, 0xc0(r1)
/* 8036B398 003682D8  FC 01 10 00 */	fcmpu cr0, f1, f2
/* 8036B39C 003682DC  40 82 00 1C */	bne .L_8036B3B8
/* 8036B3A0 003682E0  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 8036B3A4 003682E4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B3A8 003682E8  40 82 00 10 */	bne .L_8036B3B8
/* 8036B3AC 003682EC  C0 01 00 C8 */	lfs f0, 0xc8(r1)
/* 8036B3B0 003682F0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B3B4 003682F4  41 82 00 24 */	beq .L_8036B3D8
.L_8036B3B8:
/* 8036B3B8 003682F8  D0 5F 03 04 */	stfs f2, 0x304(r31)
/* 8036B3BC 003682FC  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 8036B3C0 00368300  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8036B3C4 00368304  C0 01 00 C8 */	lfs f0, 0xc8(r1)
/* 8036B3C8 00368308  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 8036B3CC 0036830C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036B3D0 00368310  88 03 09 10 */	lbz r0, 0x910(r3)
/* 8036B3D4 00368314  90 1F 03 34 */	stw r0, 0x334(r31)
.L_8036B3D8:
/* 8036B3D8 00368318  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 8036B3DC 0036831C  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 8036B3E0 00368320  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B3E4 00368324  40 82 00 24 */	bne .L_8036B408
/* 8036B3E8 00368328  C0 3F 02 FC */	lfs f1, 0x2fc(r31)
/* 8036B3EC 0036832C  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8036B3F0 00368330  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B3F4 00368334  40 82 00 14 */	bne .L_8036B408
/* 8036B3F8 00368338  C0 3F 03 00 */	lfs f1, 0x300(r31)
/* 8036B3FC 0036833C  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8036B400 00368340  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B404 00368344  41 82 00 0C */	beq .L_8036B410
.L_8036B408:
/* 8036B408 00368348  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B40C 0036834C  D0 1F 03 30 */	stfs f0, 0x330(r31)
.L_8036B410:
/* 8036B410 00368350  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036B414 00368354  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8036B418 00368358  C0 23 09 00 */	lfs f1, 0x900(r3)
/* 8036B41C 0036835C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036B420 00368360  40 80 00 8C */	bge .L_8036B4AC
/* 8036B424 00368364  D0 3F 03 08 */	stfs f1, 0x308(r31)
/* 8036B428 00368368  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036B42C 0036836C  C0 7F 03 04 */	lfs f3, 0x304(r31)
/* 8036B430 00368370  C0 5F 03 08 */	lfs f2, 0x308(r31)
/* 8036B434 00368374  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8036B438 00368378  C0 9F 03 0C */	lfs f4, 0x30c(r31)
/* 8036B43C 0036837C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8036B440 00368380  EC 84 01 32 */	fmuls f4, f4, f4
/* 8036B444 00368384  EC 00 10 2A */	fadds f0, f0, f2
/* 8036B448 00368388  EC 04 00 2A */	fadds f0, f4, f0
/* 8036B44C 0036838C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036B450 00368390  40 81 00 20 */	ble .L_8036B470
/* 8036B454 00368394  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8036B458 00368398  EC 44 00 2A */	fadds f2, f4, f0
/* 8036B45C 0036839C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8036B460 003683A0  40 81 00 14 */	ble .L_8036B474
/* 8036B464 003683A4  FC 00 10 34 */	frsqrte f0, f2
/* 8036B468 003683A8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8036B46C 003683AC  48 00 00 08 */	b .L_8036B474
.L_8036B470:
/* 8036B470 003683B0  FC 40 08 90 */	fmr f2, f1
.L_8036B474:
/* 8036B474 003683B4  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B478 003683B8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8036B47C 003683BC  40 81 00 30 */	ble .L_8036B4AC
/* 8036B480 003683C0  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 8036B484 003683C4  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 8036B488 003683C8  EC 21 10 24 */	fdivs f1, f1, f2
/* 8036B48C 003683CC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8036B490 003683D0  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8036B494 003683D4  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8036B498 003683D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8036B49C 003683DC  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8036B4A0 003683E0  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8036B4A4 003683E4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8036B4A8 003683E8  D0 1F 03 0C */	stfs f0, 0x30c(r31)
.L_8036B4AC:
/* 8036B4AC 003683EC  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 8036B4B0 003683F0  38 60 00 00 */	li r3, 0
/* 8036B4B4 003683F4  C0 62 06 1C */	lfs f3, lbl_8051E97C@sda21(r2)
/* 8036B4B8 003683F8  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 8036B4BC 003683FC  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8036B4C0 00368400  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 8036B4C4 00368404  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8036B4C8 00368408  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 8036B4CC 0036840C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8036B4D0 00368410  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 8036B4D4 00368414  40 82 00 0C */	bne .L_8036B4E0
/* 8036B4D8 00368418  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 8036B4DC 0036841C  41 82 00 08 */	beq .L_8036B4E4
.L_8036B4E0:
/* 8036B4E0 00368420  38 60 00 01 */	li r3, 1
.L_8036B4E4:
/* 8036B4E4 00368424  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036B4E8 00368428  41 82 00 08 */	beq .L_8036B4F0
/* 8036B4EC 0036842C  C0 62 06 18 */	lfs f3, lbl_8051E978@sda21(r2)
.L_8036B4F0:
/* 8036B4F0 00368430  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036B4F4 00368434  C0 5F 02 F4 */	lfs f2, 0x2f4(r31)
/* 8036B4F8 00368438  C0 23 09 1C */	lfs f1, 0x91c(r3)
/* 8036B4FC 0036843C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8036B500 00368440  EC 23 00 72 */	fmuls f1, f3, f1
/* 8036B504 00368444  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8036B508 00368448  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 8036B50C 0036844C  48 00 00 C0 */	b .L_8036B5CC
.L_8036B510:
/* 8036B510 00368450  80 01 00 A8 */	lwz r0, 0xa8(r1)
/* 8036B514 00368454  28 00 00 00 */	cmplwi r0, 0
/* 8036B518 00368458  41 82 00 1C */	beq .L_8036B534
/* 8036B51C 0036845C  C0 01 00 B4 */	lfs f0, 0xb4(r1)
/* 8036B520 00368460  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8036B524 00368464  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 8036B528 00368468  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8036B52C 0036846C  C0 01 00 BC */	lfs f0, 0xbc(r1)
/* 8036B530 00368470  D0 1F 03 0C */	stfs f0, 0x30c(r31)
.L_8036B534:
/* 8036B534 00368474  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8036B538 00368478  38 60 00 00 */	li r3, 0
/* 8036B53C 0036847C  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 8036B540 00368480  40 82 00 0C */	bne .L_8036B54C
/* 8036B544 00368484  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 8036B548 00368488  41 82 00 08 */	beq .L_8036B550
.L_8036B54C:
/* 8036B54C 0036848C  38 60 00 01 */	li r3, 1
.L_8036B550:
/* 8036B550 00368490  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036B554 00368494  41 82 00 18 */	beq .L_8036B56C
/* 8036B558 00368498  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036B55C 0036849C  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B560 003684A0  D0 3F 03 04 */	stfs f1, 0x304(r31)
/* 8036B564 003684A4  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8036B568 003684A8  D0 3F 03 0C */	stfs f1, 0x30c(r31)
.L_8036B56C:
/* 8036B56C 003684AC  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 8036B570 003684B0  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 8036B574 003684B4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B578 003684B8  40 82 00 24 */	bne .L_8036B59C
/* 8036B57C 003684BC  C0 3F 02 FC */	lfs f1, 0x2fc(r31)
/* 8036B580 003684C0  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8036B584 003684C4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B588 003684C8  40 82 00 14 */	bne .L_8036B59C
/* 8036B58C 003684CC  C0 3F 03 00 */	lfs f1, 0x300(r31)
/* 8036B590 003684D0  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8036B594 003684D4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8036B598 003684D8  41 82 00 0C */	beq .L_8036B5A4
.L_8036B59C:
/* 8036B59C 003684DC  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B5A0 003684E0  D0 1F 03 30 */	stfs f0, 0x330(r31)
.L_8036B5A4:
/* 8036B5A4 003684E4  C0 3F 03 04 */	lfs f1, 0x304(r31)
/* 8036B5A8 003684E8  C0 02 06 74 */	lfs f0, lbl_8051E9D4@sda21(r2)
/* 8036B5AC 003684EC  D0 3F 02 F8 */	stfs f1, 0x2f8(r31)
/* 8036B5B0 003684F0  C0 3F 03 08 */	lfs f1, 0x308(r31)
/* 8036B5B4 003684F4  D0 3F 02 FC */	stfs f1, 0x2fc(r31)
/* 8036B5B8 003684F8  C0 3F 03 0C */	lfs f1, 0x30c(r31)
/* 8036B5BC 003684FC  D0 3F 03 00 */	stfs f1, 0x300(r31)
/* 8036B5C0 00368500  C0 3F 02 F4 */	lfs f1, 0x2f4(r31)
/* 8036B5C4 00368504  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036B5C8 00368508  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
.L_8036B5CC:
/* 8036B5CC 0036850C  C0 3F 02 F4 */	lfs f1, 0x2f4(r31)
/* 8036B5D0 00368510  C0 02 06 78 */	lfs f0, lbl_8051E9D8@sda21(r2)
/* 8036B5D4 00368514  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036B5D8 00368518  40 80 00 0C */	bge .L_8036B5E4
/* 8036B5DC 0036851C  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B5E0 00368520  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
.L_8036B5E4:
/* 8036B5E4 00368524  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 8036B5E8 00368528  38 03 FF FF */	addi r0, r3, -1
/* 8036B5EC 0036852C  90 1F 03 34 */	stw r0, 0x334(r31)
/* 8036B5F0 00368530  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 8036B5F4 00368534  2C 00 00 00 */	cmpwi r0, 0
/* 8036B5F8 00368538  40 80 00 0C */	bge .L_8036B604
/* 8036B5FC 0036853C  38 00 00 00 */	li r0, 0
/* 8036B600 00368540  90 1F 03 34 */	stw r0, 0x334(r31)
.L_8036B604:
/* 8036B604 00368544  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8036B608 00368548  4B D6 3C AD */	bl cos
/* 8036B60C 0036854C  FF E0 08 18 */	frsp f31, f1
/* 8036B610 00368550  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8036B614 00368554  4B D6 42 09 */	bl sin
/* 8036B618 00368558  FC 40 08 18 */	frsp f2, f1
/* 8036B61C 0036855C  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036B620 00368560  EC 9F 07 F2 */	fmuls f4, f31, f31
/* 8036B624 00368564  D3 E1 00 44 */	stfs f31, 0x44(r1)
/* 8036B628 00368568  EC 61 00 72 */	fmuls f3, f1, f1
/* 8036B62C 0036856C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8036B630 00368570  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8036B634 00368574  EC 00 18 2A */	fadds f0, f0, f3
/* 8036B638 00368578  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8036B63C 0036857C  EC 04 00 2A */	fadds f0, f4, f0
/* 8036B640 00368580  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036B644 00368584  40 81 00 20 */	ble .L_8036B664
/* 8036B648 00368588  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 8036B64C 0036858C  EC 64 00 2A */	fadds f3, f4, f0
/* 8036B650 00368590  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8036B654 00368594  40 81 00 14 */	ble .L_8036B668
/* 8036B658 00368598  FC 00 18 34 */	frsqrte f0, f3
/* 8036B65C 0036859C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8036B660 003685A0  48 00 00 08 */	b .L_8036B668
.L_8036B664:
/* 8036B664 003685A4  FC 60 08 90 */	fmr f3, f1
.L_8036B668:
/* 8036B668 003685A8  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B66C 003685AC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036B670 003685B0  40 81 00 30 */	ble .L_8036B6A0
/* 8036B674 003685B4  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B678 003685B8  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 8036B67C 003685BC  EC 60 18 24 */	fdivs f3, f0, f3
/* 8036B680 003685C0  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 8036B684 003685C4  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8036B688 003685C8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8036B68C 003685CC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8036B690 003685D0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8036B694 003685D4  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8036B698 003685D8  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8036B69C 003685DC  D0 01 00 44 */	stfs f0, 0x44(r1)
.L_8036B6A0:
/* 8036B6A0 003685E0  C0 1F 02 F8 */	lfs f0, 0x2f8(r31)
/* 8036B6A4 003685E4  38 61 00 30 */	addi r3, r1, 0x30
/* 8036B6A8 003685E8  38 81 00 3C */	addi r4, r1, 0x3c
/* 8036B6AC 003685EC  38 A1 00 24 */	addi r5, r1, 0x24
/* 8036B6B0 003685F0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8036B6B4 003685F4  C0 1F 02 FC */	lfs f0, 0x2fc(r31)
/* 8036B6B8 003685F8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8036B6BC 003685FC  C0 1F 03 00 */	lfs f0, 0x300(r31)
/* 8036B6C0 00368600  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8036B6C4 00368604  4B D7 F8 C1 */	bl PSVECCrossProduct
/* 8036B6C8 00368608  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8036B6CC 0036860C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8036B6D0 00368610  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8036B6D4 00368614  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8036B6D8 00368618  EC 81 00 72 */	fmuls f4, f1, f1
/* 8036B6DC 0036861C  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036B6E0 00368620  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8036B6E4 00368624  EC 00 20 2A */	fadds f0, f0, f4
/* 8036B6E8 00368628  EC 03 00 2A */	fadds f0, f3, f0
/* 8036B6EC 0036862C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036B6F0 00368630  40 81 00 20 */	ble .L_8036B710
/* 8036B6F4 00368634  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8036B6F8 00368638  EC 63 00 2A */	fadds f3, f3, f0
/* 8036B6FC 0036863C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8036B700 00368640  40 81 00 14 */	ble .L_8036B714
/* 8036B704 00368644  FC 00 18 34 */	frsqrte f0, f3
/* 8036B708 00368648  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8036B70C 0036864C  48 00 00 08 */	b .L_8036B714
.L_8036B710:
/* 8036B710 00368650  FC 60 08 90 */	fmr f3, f1
.L_8036B714:
/* 8036B714 00368654  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B718 00368658  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036B71C 0036865C  40 81 00 30 */	ble .L_8036B74C
/* 8036B720 00368660  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B724 00368664  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8036B728 00368668  EC 60 18 24 */	fdivs f3, f0, f3
/* 8036B72C 0036866C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8036B730 00368670  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8036B734 00368674  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8036B738 00368678  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8036B73C 0036867C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8036B740 00368680  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8036B744 00368684  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8036B748 00368688  D0 01 00 2C */	stfs f0, 0x2c(r1)
.L_8036B74C:
/* 8036B74C 0036868C  38 61 00 24 */	addi r3, r1, 0x24
/* 8036B750 00368690  38 81 00 30 */	addi r4, r1, 0x30
/* 8036B754 00368694  38 A1 00 3C */	addi r5, r1, 0x3c
/* 8036B758 00368698  4B D7 F8 2D */	bl PSVECCrossProduct
/* 8036B75C 0036869C  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 8036B760 003686A0  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 8036B764 003686A4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8036B768 003686A8  C0 61 00 44 */	lfs f3, 0x44(r1)
/* 8036B76C 003686AC  EC 81 00 72 */	fmuls f4, f1, f1
/* 8036B770 003686B0  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036B774 003686B4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8036B778 003686B8  EC 00 20 2A */	fadds f0, f0, f4
/* 8036B77C 003686BC  EC 03 00 2A */	fadds f0, f3, f0
/* 8036B780 003686C0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036B784 003686C4  40 81 00 20 */	ble .L_8036B7A4
/* 8036B788 003686C8  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8036B78C 003686CC  EC 63 00 2A */	fadds f3, f3, f0
/* 8036B790 003686D0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8036B794 003686D4  40 81 00 14 */	ble .L_8036B7A8
/* 8036B798 003686D8  FC 00 18 34 */	frsqrte f0, f3
/* 8036B79C 003686DC  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8036B7A0 003686E0  48 00 00 08 */	b .L_8036B7A8
.L_8036B7A4:
/* 8036B7A4 003686E4  FC 60 08 90 */	fmr f3, f1
.L_8036B7A8:
/* 8036B7A8 003686E8  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B7AC 003686EC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036B7B0 003686F0  40 81 00 30 */	ble .L_8036B7E0
/* 8036B7B4 003686F4  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B7B8 003686F8  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 8036B7BC 003686FC  EC 60 18 24 */	fdivs f3, f0, f3
/* 8036B7C0 00368700  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 8036B7C4 00368704  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8036B7C8 00368708  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8036B7CC 0036870C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8036B7D0 00368710  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8036B7D4 00368714  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8036B7D8 00368718  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8036B7DC 0036871C  D0 01 00 44 */	stfs f0, 0x44(r1)
.L_8036B7E0:
/* 8036B7E0 00368720  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8036B7E4 00368724  38 7F 03 20 */	addi r3, r31, 0x320
/* 8036B7E8 00368728  38 9F 01 38 */	addi r4, r31, 0x138
/* 8036B7EC 0036872C  D0 1F 01 38 */	stfs f0, 0x138(r31)
/* 8036B7F0 00368730  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8036B7F4 00368734  D0 1F 01 48 */	stfs f0, 0x148(r31)
/* 8036B7F8 00368738  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8036B7FC 0036873C  D0 1F 01 58 */	stfs f0, 0x158(r31)
/* 8036B800 00368740  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8036B804 00368744  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 8036B808 00368748  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8036B80C 0036874C  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 8036B810 00368750  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8036B814 00368754  D0 1F 01 5C */	stfs f0, 0x15c(r31)
/* 8036B818 00368758  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8036B81C 0036875C  D0 1F 01 40 */	stfs f0, 0x140(r31)
/* 8036B820 00368760  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8036B824 00368764  D0 1F 01 50 */	stfs f0, 0x150(r31)
/* 8036B828 00368768  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8036B82C 0036876C  D0 1F 01 60 */	stfs f0, 0x160(r31)
/* 8036B830 00368770  48 0A 74 09 */	bl fromMatrixf__4QuatFR7Matrixf
/* 8036B834 00368774  38 61 00 14 */	addi r3, r1, 0x14
/* 8036B838 00368778  38 9F 03 10 */	addi r4, r31, 0x310
/* 8036B83C 0036877C  48 0A 6F 25 */	bl __ct__4QuatFR4Quat
/* 8036B840 00368780  C0 5F 03 30 */	lfs f2, 0x330(r31)
/* 8036B844 00368784  C0 22 06 1C */	lfs f1, lbl_8051E97C@sda21(r2)
/* 8036B848 00368788  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8036B84C 0036878C  40 80 00 38 */	bge .L_8036B884
/* 8036B850 00368790  C0 02 06 4C */	lfs f0, lbl_8051E9AC@sda21(r2)
/* 8036B854 00368794  EC 02 00 2A */	fadds f0, f2, f0
/* 8036B858 00368798  D0 1F 03 30 */	stfs f0, 0x330(r31)
/* 8036B85C 0036879C  C0 1F 03 30 */	lfs f0, 0x330(r31)
/* 8036B860 003687A0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8036B864 003687A4  40 81 00 08 */	ble .L_8036B86C
/* 8036B868 003687A8  D0 3F 03 30 */	stfs f1, 0x330(r31)
.L_8036B86C:
/* 8036B86C 003687AC  38 7F 03 10 */	addi r3, r31, 0x310
/* 8036B870 003687B0  C0 3F 03 30 */	lfs f1, 0x330(r31)
/* 8036B874 003687B4  7C 65 1B 78 */	mr r5, r3
/* 8036B878 003687B8  38 9F 03 20 */	addi r4, r31, 0x320
/* 8036B87C 003687BC  48 0A 70 75 */	bl slerp__4QuatFR4QuatfR4Quat
/* 8036B880 003687C0  48 00 00 2C */	b .L_8036B8AC
.L_8036B884:
/* 8036B884 003687C4  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036B888 003687C8  D0 1F 03 30 */	stfs f0, 0x330(r31)
/* 8036B88C 003687CC  C0 1F 03 20 */	lfs f0, 0x320(r31)
/* 8036B890 003687D0  D0 1F 03 10 */	stfs f0, 0x310(r31)
/* 8036B894 003687D4  C0 1F 03 24 */	lfs f0, 0x324(r31)
/* 8036B898 003687D8  D0 1F 03 14 */	stfs f0, 0x314(r31)
/* 8036B89C 003687DC  C0 1F 03 28 */	lfs f0, 0x328(r31)
/* 8036B8A0 003687E0  D0 1F 03 18 */	stfs f0, 0x318(r31)
/* 8036B8A4 003687E4  C0 1F 03 2C */	lfs f0, 0x32c(r31)
/* 8036B8A8 003687E8  D0 1F 03 1C */	stfs f0, 0x31c(r31)
.L_8036B8AC:
/* 8036B8AC 003687EC  38 7F 03 10 */	addi r3, r31, 0x310
/* 8036B8B0 003687F0  48 0A 6F 9D */	bl normalise__4QuatFv
/* 8036B8B4 003687F4  38 7F 01 38 */	addi r3, r31, 0x138
/* 8036B8B8 003687F8  38 9F 03 10 */	addi r4, r31, 0x310
/* 8036B8BC 003687FC  48 0B D2 CD */	bl makeQ__7MatrixfFR4Quat
/* 8036B8C0 00368800  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8036B8C4 00368804  38 7F 01 38 */	addi r3, r31, 0x138
/* 8036B8C8 00368808  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 8036B8CC 0036880C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8036B8D0 00368810  D0 1F 01 54 */	stfs f0, 0x154(r31)
/* 8036B8D4 00368814  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8036B8D8 00368818  D0 1F 01 64 */	stfs f0, 0x164(r31)
/* 8036B8DC 0036881C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8036B8E0 00368820  80 84 00 08 */	lwz r4, 8(r4)
/* 8036B8E4 00368824  38 84 00 24 */	addi r4, r4, 0x24
/* 8036B8E8 00368828  4B D7 E9 E5 */	bl PSMTXCopy
/* 8036B8EC 0036882C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8036B8F0 00368830  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 8036B8F4 00368834  80 63 00 08 */	lwz r3, 8(r3)
/* 8036B8F8 00368838  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8036B8FC 0036883C  C0 1F 01 6C */	lfs f0, 0x16c(r31)
/* 8036B900 00368840  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8036B904 00368844  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 8036B908 00368848  D0 03 00 20 */	stfs f0, 0x20(r3)
.L_8036B90C:
/* 8036B90C 0036884C  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 8036B910 00368850  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 8036B914 00368854  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 8036B918 00368858  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 8036B91C 0036885C  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 8036B920 00368860  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 8036B924 00368864  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 8036B928 00368868  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 8036B92C 0036886C  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 8036B930 00368870  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 8036B934 00368874  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8036B938 00368878  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 8036B93C 0036887C  7C 08 03 A6 */	mtlr r0
/* 8036B940 00368880  38 21 01 60 */	addi r1, r1, 0x160
/* 8036B944 00368884  4E 80 00 20 */	blr 
.endfn calcBaseTrMatrix__Q34Game6Jigumo3ObjFv

.fn revisionAnimPos__Q34Game6Jigumo3ObjFf, global
/* 8036B948 00368888  C0 02 06 1C */	lfs f0, lbl_8051E97C@sda21(r2)
/* 8036B94C 0036888C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036B950 00368890  40 81 00 20 */	ble .L_8036B970
/* 8036B954 00368894  C0 03 01 98 */	lfs f0, 0x198(r3)
/* 8036B958 00368898  D0 03 01 8C */	stfs f0, 0x18c(r3)
/* 8036B95C 0036889C  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 8036B960 003688A0  D0 03 01 90 */	stfs f0, 0x190(r3)
/* 8036B964 003688A4  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 8036B968 003688A8  D0 03 01 94 */	stfs f0, 0x194(r3)
/* 8036B96C 003688AC  4E 80 00 20 */	blr 
.L_8036B970:
/* 8036B970 003688B0  C0 43 01 98 */	lfs f2, 0x198(r3)
/* 8036B974 003688B4  C0 83 02 BC */	lfs f4, 0x2bc(r3)
/* 8036B978 003688B8  C0 63 01 A0 */	lfs f3, 0x1a0(r3)
/* 8036B97C 003688BC  EC 42 20 28 */	fsubs f2, f2, f4
/* 8036B980 003688C0  C0 03 02 C4 */	lfs f0, 0x2c4(r3)
/* 8036B984 003688C4  EC 63 00 28 */	fsubs f3, f3, f0
/* 8036B988 003688C8  EC 02 20 7A */	fmadds f0, f2, f1, f4
/* 8036B98C 003688CC  D0 03 01 8C */	stfs f0, 0x18c(r3)
/* 8036B990 003688D0  C0 03 02 C4 */	lfs f0, 0x2c4(r3)
/* 8036B994 003688D4  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 8036B998 003688D8  D0 03 01 94 */	stfs f0, 0x194(r3)
/* 8036B99C 003688DC  4E 80 00 20 */	blr 
.endfn revisionAnimPos__Q34Game6Jigumo3ObjFf

.fn getWalkSpeed__Q34Game6Jigumo3ObjFv, global
/* 8036B9A0 003688E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036B9A4 003688E4  7C 08 02 A6 */	mflr r0
/* 8036B9A8 003688E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036B9AC 003688EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036B9B0 003688F0  7C 7F 1B 78 */	mr r31, r3
/* 8036B9B4 003688F4  4B D9 BA 41 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036B9B8 003688F8  2C 03 00 08 */	cmpwi r3, 8
/* 8036B9BC 003688FC  41 82 00 48 */	beq .L_8036BA04
/* 8036B9C0 00368900  40 80 00 18 */	bge .L_8036B9D8
/* 8036B9C4 00368904  2C 03 00 07 */	cmpwi r3, 7
/* 8036B9C8 00368908  40 80 00 1C */	bge .L_8036B9E4
/* 8036B9CC 0036890C  2C 03 00 05 */	cmpwi r3, 5
/* 8036B9D0 00368910  40 80 00 20 */	bge .L_8036B9F0
/* 8036B9D4 00368914  48 00 00 30 */	b .L_8036BA04
.L_8036B9D8:
/* 8036B9D8 00368918  2C 03 00 0A */	cmpwi r3, 0xa
/* 8036B9DC 0036891C  40 80 00 28 */	bge .L_8036BA04
/* 8036B9E0 00368920  48 00 00 1C */	b .L_8036B9FC
.L_8036B9E4:
/* 8036B9E4 00368924  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036B9E8 00368928  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 8036B9EC 0036892C  48 00 00 20 */	b .L_8036BA0C
.L_8036B9F0:
/* 8036B9F0 00368930  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036B9F4 00368934  C0 23 08 44 */	lfs f1, 0x844(r3)
/* 8036B9F8 00368938  48 00 00 14 */	b .L_8036BA0C
.L_8036B9FC:
/* 8036B9FC 0036893C  C0 22 06 18 */	lfs f1, lbl_8051E978@sda21(r2)
/* 8036BA00 00368940  48 00 00 0C */	b .L_8036BA0C
.L_8036BA04:
/* 8036BA04 00368944  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036BA08 00368948  C0 23 02 E4 */	lfs f1, 0x2e4(r3)
.L_8036BA0C:
/* 8036BA0C 0036894C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036BA10 00368950  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036BA14 00368954  7C 08 03 A6 */	mtlr r0
/* 8036BA18 00368958  38 21 00 10 */	addi r1, r1, 0x10
/* 8036BA1C 0036895C  4E 80 00 20 */	blr 
.endfn getWalkSpeed__Q34Game6Jigumo3ObjFv

.fn velocityControl__Q34Game6Jigumo3ObjFv, global
/* 8036BA20 00368960  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8036BA24 00368964  7C 08 02 A6 */	mflr r0
/* 8036BA28 00368968  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036BA2C 0036896C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8036BA30 00368970  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8036BA34 00368974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036BA38 00368978  7C 7F 1B 78 */	mr r31, r3
/* 8036BA3C 0036897C  4B D9 B7 E5 */	bl getMotionFrameMax__Q24Game9EnemyBaseFv
/* 8036BA40 00368980  FF E0 08 90 */	fmr f31, f1
/* 8036BA44 00368984  7F E3 FB 78 */	mr r3, r31
/* 8036BA48 00368988  4B D9 98 25 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 8036BA4C 0036898C  EC 21 F8 24 */	fdivs f1, f1, f31
/* 8036BA50 00368990  C0 02 06 4C */	lfs f0, lbl_8051E9AC@sda21(r2)
/* 8036BA54 00368994  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036BA58 00368998  40 80 00 20 */	bge .L_8036BA78
/* 8036BA5C 0036899C  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 8036BA60 003689A0  C0 22 06 24 */	lfs f1, lbl_8051E984@sda21(r2)
/* 8036BA64 003689A4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8036BA68 003689A8  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8036BA6C 003689AC  C0 1F 01 D0 */	lfs f0, 0x1d0(r31)
/* 8036BA70 003689B0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8036BA74 003689B4  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_8036BA78:
/* 8036BA78 003689B8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8036BA7C 003689BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036BA80 003689C0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8036BA84 003689C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036BA88 003689C8  7C 08 03 A6 */	mtlr r0
/* 8036BA8C 003689CC  38 21 00 20 */	addi r1, r1, 0x20
/* 8036BA90 003689D0  4E 80 00 20 */	blr 
.endfn velocityControl__Q34Game6Jigumo3ObjFv

.fn getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff, global
/* 8036BA94 003689D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8036BA98 003689D8  7C 08 02 A6 */	mflr r0
/* 8036BA9C 003689DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8036BAA0 003689E0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8036BAA4 003689E4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8036BAA8 003689E8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8036BAAC 003689EC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8036BAB0 003689F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8036BAB4 003689F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8036BAB8 003689F8  FF E0 10 90 */	fmr f31, f2
/* 8036BABC 003689FC  7C 7E 1B 78 */	mr r30, r3
/* 8036BAC0 00368A00  FF C0 08 90 */	fmr f30, f1
/* 8036BAC4 00368A04  38 81 00 0C */	addi r4, r1, 0xc
/* 8036BAC8 00368A08  38 A0 00 00 */	li r5, 0
/* 8036BACC 00368A0C  FC 00 F8 18 */	frsp f0, f31
/* 8036BAD0 00368A10  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 8036BAD4 00368A14  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8036BAD8 00368A18  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8036BADC 00368A1C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8036BAE0 00368A20  4B DA 70 85 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 8036BAE4 00368A24  FC 20 F0 90 */	fmr f1, f30
/* 8036BAE8 00368A28  7C 7F 1B 78 */	mr r31, r3
/* 8036BAEC 00368A2C  FC 40 F8 90 */	fmr f2, f31
/* 8036BAF0 00368A30  7F C3 F3 78 */	mr r3, r30
/* 8036BAF4 00368A34  38 81 00 08 */	addi r4, r1, 8
/* 8036BAF8 00368A38  38 A0 00 00 */	li r5, 0
/* 8036BAFC 00368A3C  4B DA 6B F9 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 8036BB00 00368A40  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8036BB04 00368A44  C0 01 00 08 */	lfs f0, 8(r1)
/* 8036BB08 00368A48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036BB0C 00368A4C  40 80 00 08 */	bge .L_8036BB14
/* 8036BB10 00368A50  7F E3 FB 78 */	mr r3, r31
.L_8036BB14:
/* 8036BB14 00368A54  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8036BB18 00368A58  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8036BB1C 00368A5C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8036BB20 00368A60  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8036BB24 00368A64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8036BB28 00368A68  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036BB2C 00368A6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8036BB30 00368A70  7C 08 03 A6 */	mtlr r0
/* 8036BB34 00368A74  38 21 00 40 */	addi r1, r1, 0x40
/* 8036BB38 00368A78  4E 80 00 20 */	blr 
.endfn getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff

.fn effectStart__Q34Game6Jigumo3ObjFv, global
/* 8036BB3C 00368A7C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8036BB40 00368A80  7C 08 02 A6 */	mflr r0
/* 8036BB44 00368A84  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036BB48 00368A88  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8036BB4C 00368A8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8036BB50 00368A90  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 8036BB54 00368A94  3C 80 80 4B */	lis r4, __vt__Q23efx8ArgScale@ha
/* 8036BB58 00368A98  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8036BB5C 00368A9C  38 04 A2 DC */	addi r0, r4, __vt__Q23efx8ArgScale@l
/* 8036BB60 00368AA0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8036BB64 00368AA4  7C 7E 1B 78 */	mr r30, r3
/* 8036BB68 00368AA8  C0 63 01 F8 */	lfs f3, 0x1f8(r3)
/* 8036BB6C 00368AAC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8036BB70 00368AB0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8036BB74 00368AB4  80 E1 00 14 */	lwz r7, 0x14(r1)
/* 8036BB78 00368AB8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8036BB7C 00368ABC  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 8036BB80 00368AC0  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8036BB84 00368AC4  90 E1 00 08 */	stw r7, 8(r1)
/* 8036BB88 00368AC8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8036BB8C 00368ACC  C0 41 00 08 */	lfs f2, 8(r1)
/* 8036BB90 00368AD0  90 81 00 10 */	stw r4, 0x10(r1)
/* 8036BB94 00368AD4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8036BB98 00368AD8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8036BB9C 00368ADC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8036BBA0 00368AE0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8036BBA4 00368AE4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8036BBA8 00368AE8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8036BBAC 00368AEC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8036BBB0 00368AF0  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8036BBB4 00368AF4  4B D9 B8 41 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036BBB8 00368AF8  7C 7F 1B 78 */	mr r31, r3
/* 8036BBBC 00368AFC  2C 1F 00 04 */	cmpwi r31, 4
/* 8036BBC0 00368B00  40 82 00 88 */	bne .L_8036BC48
/* 8036BBC4 00368B04  80 1E 02 80 */	lwz r0, 0x280(r30)
/* 8036BBC8 00368B08  28 00 00 00 */	cmplwi r0, 0
/* 8036BBCC 00368B0C  41 82 00 5C */	beq .L_8036BC28
/* 8036BBD0 00368B10  80 7E 03 74 */	lwz r3, 0x374(r30)
/* 8036BBD4 00368B14  28 03 00 00 */	cmplwi r3, 0
/* 8036BBD8 00368B18  41 82 00 70 */	beq .L_8036BC48
/* 8036BBDC 00368B1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BBE0 00368B20  38 81 00 20 */	addi r4, r1, 0x20
/* 8036BBE4 00368B24  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036BBE8 00368B28  7D 89 03 A6 */	mtctr r12
/* 8036BBEC 00368B2C  4E 80 04 21 */	bctrl 
/* 8036BBF0 00368B30  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8036BBF4 00368B34  D0 1E 03 64 */	stfs f0, 0x364(r30)
/* 8036BBF8 00368B38  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036BBFC 00368B3C  D0 1E 03 68 */	stfs f0, 0x368(r30)
/* 8036BC00 00368B40  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8036BC04 00368B44  D0 1E 03 6C */	stfs f0, 0x36c(r30)
/* 8036BC08 00368B48  80 7E 02 80 */	lwz r3, 0x280(r30)
/* 8036BC0C 00368B4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BC10 00368B50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036BC14 00368B54  7D 89 03 A6 */	mtctr r12
/* 8036BC18 00368B58  4E 80 04 21 */	bctrl 
/* 8036BC1C 00368B5C  C0 03 00 00 */	lfs f0, 0(r3)
/* 8036BC20 00368B60  D0 1E 03 68 */	stfs f0, 0x368(r30)
/* 8036BC24 00368B64  48 00 00 24 */	b .L_8036BC48
.L_8036BC28:
/* 8036BC28 00368B68  80 7E 03 70 */	lwz r3, 0x370(r30)
/* 8036BC2C 00368B6C  28 03 00 00 */	cmplwi r3, 0
/* 8036BC30 00368B70  41 82 00 18 */	beq .L_8036BC48
/* 8036BC34 00368B74  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BC38 00368B78  38 81 00 20 */	addi r4, r1, 0x20
/* 8036BC3C 00368B7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036BC40 00368B80  7D 89 03 A6 */	mtctr r12
/* 8036BC44 00368B84  4E 80 04 21 */	bctrl 
.L_8036BC48:
/* 8036BC48 00368B88  2C 1F 00 07 */	cmpwi r31, 7
/* 8036BC4C 00368B8C  40 82 00 5C */	bne .L_8036BCA8
/* 8036BC50 00368B90  C0 02 06 18 */	lfs f0, lbl_8051E978@sda21(r2)
/* 8036BC54 00368B94  D0 1E 03 44 */	stfs f0, 0x344(r30)
/* 8036BC58 00368B98  80 1E 02 80 */	lwz r0, 0x280(r30)
/* 8036BC5C 00368B9C  28 00 00 00 */	cmplwi r0, 0
/* 8036BC60 00368BA0  41 82 00 28 */	beq .L_8036BC88
/* 8036BC64 00368BA4  80 7E 03 7C */	lwz r3, 0x37c(r30)
/* 8036BC68 00368BA8  28 03 00 00 */	cmplwi r3, 0
/* 8036BC6C 00368BAC  41 82 00 3C */	beq .L_8036BCA8
/* 8036BC70 00368BB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BC74 00368BB4  38 81 00 20 */	addi r4, r1, 0x20
/* 8036BC78 00368BB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036BC7C 00368BBC  7D 89 03 A6 */	mtctr r12
/* 8036BC80 00368BC0  4E 80 04 21 */	bctrl 
/* 8036BC84 00368BC4  48 00 00 24 */	b .L_8036BCA8
.L_8036BC88:
/* 8036BC88 00368BC8  80 7E 03 78 */	lwz r3, 0x378(r30)
/* 8036BC8C 00368BCC  28 03 00 00 */	cmplwi r3, 0
/* 8036BC90 00368BD0  41 82 00 18 */	beq .L_8036BCA8
/* 8036BC94 00368BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BC98 00368BD8  38 81 00 20 */	addi r4, r1, 0x20
/* 8036BC9C 00368BDC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036BCA0 00368BE0  7D 89 03 A6 */	mtctr r12
/* 8036BCA4 00368BE4  4E 80 04 21 */	bctrl 
.L_8036BCA8:
/* 8036BCA8 00368BE8  2C 1F 00 06 */	cmpwi r31, 6
/* 8036BCAC 00368BEC  40 82 00 38 */	bne .L_8036BCE4
/* 8036BCB0 00368BF0  80 1E 02 80 */	lwz r0, 0x280(r30)
/* 8036BCB4 00368BF4  28 00 00 00 */	cmplwi r0, 0
/* 8036BCB8 00368BF8  40 82 00 2C */	bne .L_8036BCE4
/* 8036BCBC 00368BFC  C0 22 06 7C */	lfs f1, lbl_8051E9DC@sda21(r2)
/* 8036BCC0 00368C00  38 81 00 20 */	addi r4, r1, 0x20
/* 8036BCC4 00368C04  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 8036BCC8 00368C08  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036BCCC 00368C0C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8036BCD0 00368C10  80 7E 03 80 */	lwz r3, 0x380(r30)
/* 8036BCD4 00368C14  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BCD8 00368C18  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036BCDC 00368C1C  7D 89 03 A6 */	mtctr r12
/* 8036BCE0 00368C20  4E 80 04 21 */	bctrl 
.L_8036BCE4:
/* 8036BCE4 00368C24  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036BCE8 00368C28  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8036BCEC 00368C2C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8036BCF0 00368C30  7C 08 03 A6 */	mtlr r0
/* 8036BCF4 00368C34  38 21 00 40 */	addi r1, r1, 0x40
/* 8036BCF8 00368C38  4E 80 00 20 */	blr 
.endfn effectStart__Q34Game6Jigumo3ObjFv

.fn effectStop__Q34Game6Jigumo3ObjFv, global
/* 8036BCFC 00368C3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036BD00 00368C40  7C 08 02 A6 */	mflr r0
/* 8036BD04 00368C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036BD08 00368C48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036BD0C 00368C4C  7C 7F 1B 78 */	mr r31, r3
/* 8036BD10 00368C50  80 63 03 74 */	lwz r3, 0x374(r3)
/* 8036BD14 00368C54  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BD18 00368C58  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036BD1C 00368C5C  7D 89 03 A6 */	mtctr r12
/* 8036BD20 00368C60  4E 80 04 21 */	bctrl 
/* 8036BD24 00368C64  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 8036BD28 00368C68  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BD2C 00368C6C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036BD30 00368C70  7D 89 03 A6 */	mtctr r12
/* 8036BD34 00368C74  4E 80 04 21 */	bctrl 
/* 8036BD38 00368C78  80 7F 03 7C */	lwz r3, 0x37c(r31)
/* 8036BD3C 00368C7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BD40 00368C80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036BD44 00368C84  7D 89 03 A6 */	mtctr r12
/* 8036BD48 00368C88  4E 80 04 21 */	bctrl 
/* 8036BD4C 00368C8C  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 8036BD50 00368C90  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BD54 00368C94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036BD58 00368C98  7D 89 03 A6 */	mtctr r12
/* 8036BD5C 00368C9C  4E 80 04 21 */	bctrl 
/* 8036BD60 00368CA0  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8036BD64 00368CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BD68 00368CA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036BD6C 00368CAC  7D 89 03 A6 */	mtctr r12
/* 8036BD70 00368CB0  4E 80 04 21 */	bctrl 
/* 8036BD74 00368CB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036BD78 00368CB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036BD7C 00368CBC  7C 08 03 A6 */	mtlr r0
/* 8036BD80 00368CC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8036BD84 00368CC4  4E 80 00 20 */	blr 
.endfn effectStop__Q34Game6Jigumo3ObjFv

.fn boundEffect__Q34Game6Jigumo3ObjFv, global
/* 8036BD88 00368CC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036BD8C 00368CCC  7C 08 02 A6 */	mflr r0
/* 8036BD90 00368CD0  C0 22 06 80 */	lfs f1, lbl_8051E9E0@sda21(r2)
/* 8036BD94 00368CD4  38 83 01 8C */	addi r4, r3, 0x18c
/* 8036BD98 00368CD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036BD9C 00368CDC  4B D9 7D B5 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8036BDA0 00368CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036BDA4 00368CE4  7C 08 03 A6 */	mtlr r0
/* 8036BDA8 00368CE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8036BDAC 00368CEC  4E 80 00 20 */	blr 
.endfn boundEffect__Q34Game6Jigumo3ObjFv

.fn eatWaterEffect__Q34Game6Jigumo3ObjFv, global
/* 8036BDB0 00368CF0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8036BDB4 00368CF4  7C 08 02 A6 */	mflr r0
/* 8036BDB8 00368CF8  38 80 00 00 */	li r4, 0
/* 8036BDBC 00368CFC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8036BDC0 00368D00  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8036BDC4 00368D04  7C 7F 1B 78 */	mr r31, r3
/* 8036BDC8 00368D08  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 8036BDCC 00368D0C  4B DC C9 AD */	bl getSlot__10MouthSlotsFi
/* 8036BDD0 00368D10  80 83 00 64 */	lwz r4, 0x64(r3)
/* 8036BDD4 00368D14  28 04 00 00 */	cmplwi r4, 0
/* 8036BDD8 00368D18  41 82 00 E8 */	beq .L_8036BEC0
/* 8036BDDC 00368D1C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8036BDE0 00368D20  38 A0 00 00 */	li r5, 0
/* 8036BDE4 00368D24  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8036BDE8 00368D28  38 E0 01 59 */	li r7, 0x159
/* 8036BDEC 00368D2C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 8036BDF0 00368D30  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8036BDF4 00368D34  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 8036BDF8 00368D38  38 C0 01 5A */	li r6, 0x15a
/* 8036BDFC 00368D3C  3C 60 80 4F */	lis r3, __vt__Q23efx10TEnemyDive@ha
/* 8036BE00 00368D40  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8036BE04 00368D44  38 03 85 E8 */	addi r0, r3, __vt__Q23efx10TEnemyDive@l
/* 8036BE08 00368D48  B0 E1 00 30 */	sth r7, 0x30(r1)
/* 8036BE0C 00368D4C  38 61 00 14 */	addi r3, r1, 0x14
/* 8036BE10 00368D50  B0 C1 00 32 */	sth r6, 0x32(r1)
/* 8036BE14 00368D54  90 A1 00 34 */	stw r5, 0x34(r1)
/* 8036BE18 00368D58  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8036BE1C 00368D5C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8036BE20 00368D60  81 84 00 00 */	lwz r12, 0(r4)
/* 8036BE24 00368D64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036BE28 00368D68  7D 89 03 A6 */	mtctr r12
/* 8036BE2C 00368D6C  4E 80 04 21 */	bctrl 
/* 8036BE30 00368D70  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 8036BE34 00368D74  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8036BE38 00368D78  81 83 00 00 */	lwz r12, 0(r3)
/* 8036BE3C 00368D7C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8036BE40 00368D80  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8036BE44 00368D84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036BE48 00368D88  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8036BE4C 00368D8C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8036BE50 00368D90  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8036BE54 00368D94  7D 89 03 A6 */	mtctr r12
/* 8036BE58 00368D98  4E 80 04 21 */	bctrl 
/* 8036BE5C 00368D9C  C0 03 00 00 */	lfs f0, 0(r3)
/* 8036BE60 00368DA0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8036BE64 00368DA4  81 01 00 20 */	lwz r8, 0x20(r1)
/* 8036BE68 00368DA8  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8036BE6C 00368DAC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8036BE70 00368DB0  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 8036BE74 00368DB4  C0 7F 01 F8 */	lfs f3, 0x1f8(r31)
/* 8036BE78 00368DB8  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8036BE7C 00368DBC  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 8036BE80 00368DC0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8036BE84 00368DC4  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 8036BE88 00368DC8  38 81 00 3C */	addi r4, r1, 0x3c
/* 8036BE8C 00368DCC  91 01 00 08 */	stw r8, 8(r1)
/* 8036BE90 00368DD0  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8036BE94 00368DD4  C0 41 00 08 */	lfs f2, 8(r1)
/* 8036BE98 00368DD8  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8036BE9C 00368DDC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8036BEA0 00368DE0  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8036BEA4 00368DE4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8036BEA8 00368DE8  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 8036BEAC 00368DEC  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8036BEB0 00368DF0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8036BEB4 00368DF4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8036BEB8 00368DF8  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 8036BEBC 00368DFC  48 05 CA 1D */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
.L_8036BEC0:
/* 8036BEC0 00368E00  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8036BEC4 00368E04  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8036BEC8 00368E08  7C 08 03 A6 */	mtlr r0
/* 8036BECC 00368E0C  38 21 00 60 */	addi r1, r1, 0x60
/* 8036BED0 00368E10  4E 80 00 20 */	blr 
.endfn eatWaterEffect__Q34Game6Jigumo3ObjFv

.fn killNest__Q34Game6Jigumo3ObjFv, global
/* 8036BED4 00368E14  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 8036BED8 00368E18  28 04 00 00 */	cmplwi r4, 0
/* 8036BEDC 00368E1C  41 82 00 0C */	beq .L_8036BEE8
/* 8036BEE0 00368E20  38 00 00 01 */	li r0, 1
/* 8036BEE4 00368E24  90 04 02 F0 */	stw r0, 0x2f0(r4)
.L_8036BEE8:
/* 8036BEE8 00368E28  38 00 00 00 */	li r0, 0
/* 8036BEEC 00368E2C  90 03 02 E4 */	stw r0, 0x2e4(r3)
/* 8036BEF0 00368E30  4E 80 00 20 */	blr 
.endfn killNest__Q34Game6Jigumo3ObjFv

.fn mouthScaleMtxCalc__Q34Game6Jigumo3ObjFv, global
/* 8036BEF4 00368E34  80 83 01 74 */	lwz r4, 0x174(r3)
/* 8036BEF8 00368E38  A0 03 03 60 */	lhz r0, 0x360(r3)
/* 8036BEFC 00368E3C  80 84 00 08 */	lwz r4, 8(r4)
/* 8036BF00 00368E40  1C 00 00 30 */	mulli r0, r0, 0x30
/* 8036BF04 00368E44  C0 62 06 18 */	lfs f3, lbl_8051E978@sda21(r2)
/* 8036BF08 00368E48  80 84 00 84 */	lwz r4, 0x84(r4)
/* 8036BF0C 00368E4C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8036BF10 00368E50  7C 84 02 14 */	add r4, r4, r0
/* 8036BF14 00368E54  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8036BF18 00368E58  C0 44 00 20 */	lfs f2, 0x20(r4)
/* 8036BF1C 00368E5C  EC 81 00 72 */	fmuls f4, f1, f1
/* 8036BF20 00368E60  C0 04 00 00 */	lfs f0, 0(r4)
/* 8036BF24 00368E64  EC A2 00 B2 */	fmuls f5, f2, f2
/* 8036BF28 00368E68  EC 80 20 3A */	fmadds f4, f0, f0, f4
/* 8036BF2C 00368E6C  EC 85 20 2A */	fadds f4, f5, f4
/* 8036BF30 00368E70  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 8036BF34 00368E74  40 81 00 14 */	ble .L_8036BF48
/* 8036BF38 00368E78  40 81 00 14 */	ble .L_8036BF4C
/* 8036BF3C 00368E7C  FC 60 20 34 */	frsqrte f3, f4
/* 8036BF40 00368E80  EC 83 01 32 */	fmuls f4, f3, f4
/* 8036BF44 00368E84  48 00 00 08 */	b .L_8036BF4C
.L_8036BF48:
/* 8036BF48 00368E88  FC 80 18 90 */	fmr f4, f3
.L_8036BF4C:
/* 8036BF4C 00368E8C  C0 62 06 18 */	lfs f3, lbl_8051E978@sda21(r2)
/* 8036BF50 00368E90  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 8036BF54 00368E94  40 81 00 18 */	ble .L_8036BF6C
/* 8036BF58 00368E98  C0 62 06 1C */	lfs f3, lbl_8051E97C@sda21(r2)
/* 8036BF5C 00368E9C  EC 63 20 24 */	fdivs f3, f3, f4
/* 8036BF60 00368EA0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8036BF64 00368EA4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8036BF68 00368EA8  EC 42 00 F2 */	fmuls f2, f2, f3
.L_8036BF6C:
/* 8036BF6C 00368EAC  C0 64 00 14 */	lfs f3, 0x14(r4)
/* 8036BF70 00368EB0  C0 84 00 24 */	lfs f4, 0x24(r4)
/* 8036BF74 00368EB4  EC C3 00 F2 */	fmuls f6, f3, f3
/* 8036BF78 00368EB8  C0 E4 00 04 */	lfs f7, 4(r4)
/* 8036BF7C 00368EBC  ED 04 01 32 */	fmuls f8, f4, f4
/* 8036BF80 00368EC0  C0 A2 06 18 */	lfs f5, lbl_8051E978@sda21(r2)
/* 8036BF84 00368EC4  EC C7 31 FA */	fmadds f6, f7, f7, f6
/* 8036BF88 00368EC8  EC C8 30 2A */	fadds f6, f8, f6
/* 8036BF8C 00368ECC  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 8036BF90 00368ED0  40 81 00 14 */	ble .L_8036BFA4
/* 8036BF94 00368ED4  40 81 00 14 */	ble .L_8036BFA8
/* 8036BF98 00368ED8  FC A0 30 34 */	frsqrte f5, f6
/* 8036BF9C 00368EDC  EC C5 01 B2 */	fmuls f6, f5, f6
/* 8036BFA0 00368EE0  48 00 00 08 */	b .L_8036BFA8
.L_8036BFA4:
/* 8036BFA4 00368EE4  FC C0 28 90 */	fmr f6, f5
.L_8036BFA8:
/* 8036BFA8 00368EE8  C0 A2 06 18 */	lfs f5, lbl_8051E978@sda21(r2)
/* 8036BFAC 00368EEC  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 8036BFB0 00368EF0  40 81 00 18 */	ble .L_8036BFC8
/* 8036BFB4 00368EF4  C0 A2 06 1C */	lfs f5, lbl_8051E97C@sda21(r2)
/* 8036BFB8 00368EF8  EC A5 30 24 */	fdivs f5, f5, f6
/* 8036BFBC 00368EFC  EC E7 01 72 */	fmuls f7, f7, f5
/* 8036BFC0 00368F00  EC 63 01 72 */	fmuls f3, f3, f5
/* 8036BFC4 00368F04  EC 84 01 72 */	fmuls f4, f4, f5
.L_8036BFC8:
/* 8036BFC8 00368F08  C1 24 00 18 */	lfs f9, 0x18(r4)
/* 8036BFCC 00368F0C  C1 44 00 28 */	lfs f10, 0x28(r4)
/* 8036BFD0 00368F10  EC C9 02 72 */	fmuls f6, f9, f9
/* 8036BFD4 00368F14  C1 04 00 08 */	lfs f8, 8(r4)
/* 8036BFD8 00368F18  ED 6A 02 B2 */	fmuls f11, f10, f10
/* 8036BFDC 00368F1C  C0 A2 06 18 */	lfs f5, lbl_8051E978@sda21(r2)
/* 8036BFE0 00368F20  EC C8 32 3A */	fmadds f6, f8, f8, f6
/* 8036BFE4 00368F24  EC CB 30 2A */	fadds f6, f11, f6
/* 8036BFE8 00368F28  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 8036BFEC 00368F2C  40 81 00 14 */	ble .L_8036C000
/* 8036BFF0 00368F30  40 81 00 14 */	ble .L_8036C004
/* 8036BFF4 00368F34  FC A0 30 34 */	frsqrte f5, f6
/* 8036BFF8 00368F38  EC C5 01 B2 */	fmuls f6, f5, f6
/* 8036BFFC 00368F3C  48 00 00 08 */	b .L_8036C004
.L_8036C000:
/* 8036C000 00368F40  FC C0 28 90 */	fmr f6, f5
.L_8036C004:
/* 8036C004 00368F44  C0 A2 06 18 */	lfs f5, lbl_8051E978@sda21(r2)
/* 8036C008 00368F48  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 8036C00C 00368F4C  40 81 00 18 */	ble .L_8036C024
/* 8036C010 00368F50  C0 A2 06 1C */	lfs f5, lbl_8051E97C@sda21(r2)
/* 8036C014 00368F54  EC A5 30 24 */	fdivs f5, f5, f6
/* 8036C018 00368F58  ED 08 01 72 */	fmuls f8, f8, f5
/* 8036C01C 00368F5C  ED 29 01 72 */	fmuls f9, f9, f5
/* 8036C020 00368F60  ED 4A 01 72 */	fmuls f10, f10, f5
.L_8036C024:
/* 8036C024 00368F64  88 03 02 E9 */	lbz r0, 0x2e9(r3)
/* 8036C028 00368F68  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8036C02C 00368F6C  28 00 00 00 */	cmplwi r0, 0
/* 8036C030 00368F70  C1 63 09 2C */	lfs f11, 0x92c(r3)
/* 8036C034 00368F74  41 82 00 08 */	beq .L_8036C03C
/* 8036C038 00368F78  C1 62 06 84 */	lfs f11, lbl_8051E9E4@sda21(r2)
.L_8036C03C:
/* 8036C03C 00368F7C  EC A0 02 F2 */	fmuls f5, f0, f11
/* 8036C040 00368F80  EC 21 02 F2 */	fmuls f1, f1, f11
/* 8036C044 00368F84  EC 02 02 F2 */	fmuls f0, f2, f11
/* 8036C048 00368F88  D0 A4 00 00 */	stfs f5, 0(r4)
/* 8036C04C 00368F8C  EC C7 02 F2 */	fmuls f6, f7, f11
/* 8036C050 00368F90  EC A3 02 F2 */	fmuls f5, f3, f11
/* 8036C054 00368F94  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 8036C058 00368F98  EC 64 02 F2 */	fmuls f3, f4, f11
/* 8036C05C 00368F9C  EC 48 02 F2 */	fmuls f2, f8, f11
/* 8036C060 00368FA0  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8036C064 00368FA4  EC 29 02 F2 */	fmuls f1, f9, f11
/* 8036C068 00368FA8  EC 0A 02 F2 */	fmuls f0, f10, f11
/* 8036C06C 00368FAC  D0 C4 00 04 */	stfs f6, 4(r4)
/* 8036C070 00368FB0  D0 A4 00 14 */	stfs f5, 0x14(r4)
/* 8036C074 00368FB4  D0 64 00 24 */	stfs f3, 0x24(r4)
/* 8036C078 00368FB8  D0 44 00 08 */	stfs f2, 8(r4)
/* 8036C07C 00368FBC  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 8036C080 00368FC0  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 8036C084 00368FC4  4E 80 00 20 */	blr 
.endfn mouthScaleMtxCalc__Q34Game6Jigumo3ObjFv

.fn setInitialSetting__Q34Game6Jigumo3ObjFPQ24Game21EnemyInitialParamBase, weak
/* 8036C088 00368FC8  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game6Jigumo3ObjFPQ24Game21EnemyInitialParamBase

.fn getCellRadius__Q34Game6Jigumo3ObjFv, weak
/* 8036C08C 00368FCC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8036C090 00368FD0  C0 23 01 F8 */	lfs f1, 0x1f8(r3)
/* 8036C094 00368FD4  C0 04 01 CC */	lfs f0, 0x1cc(r4)
/* 8036C098 00368FD8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8036C09C 00368FDC  4E 80 00 20 */	blr 
.endfn getCellRadius__Q34Game6Jigumo3ObjFv

.fn getBodyRadius__Q34Game6Jigumo3ObjFv, weak
/* 8036C0A0 00368FE0  C0 23 02 F0 */	lfs f1, 0x2f0(r3)
/* 8036C0A4 00368FE4  4E 80 00 20 */	blr 
.endfn getBodyRadius__Q34Game6Jigumo3ObjFv

.fn eatWhitePikminCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef, weak
/* 8036C0A8 00368FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036C0AC 00368FEC  7C 08 02 A6 */	mflr r0
/* 8036C0B0 00368FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036C0B4 00368FF4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 8036C0B8 00368FF8  C0 25 08 BC */	lfs f1, 0x8bc(r5)
/* 8036C0BC 00368FFC  4B D9 B4 15 */	bl eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
/* 8036C0C0 00369000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036C0C4 00369004  7C 08 03 A6 */	mtlr r0
/* 8036C0C8 00369008  38 21 00 10 */	addi r1, r1, 0x10
/* 8036C0CC 0036900C  4E 80 00 20 */	blr 
.endfn eatWhitePikminCallBack__Q34Game6Jigumo3ObjFPQ24Game8Creaturef

.fn getDownSmokeScale__Q34Game6Jigumo3ObjFv, weak
/* 8036C0D0 00369010  C0 22 06 88 */	lfs f1, lbl_8051E9E8@sda21(r2)
/* 8036C0D4 00369014  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game6Jigumo3ObjFv

.fn getMouthSlots__Q34Game6Jigumo3ObjFv, weak
/* 8036C0D8 00369018  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8036C0DC 0036901C  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game6Jigumo3ObjFv

.fn createEfxHamon__Q34Game6Jigumo3ObjFv, weak
/* 8036C0E0 00369020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036C0E4 00369024  7C 08 02 A6 */	mflr r0
/* 8036C0E8 00369028  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036C0EC 0036902C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036C0F0 00369030  7C 7F 1B 78 */	mr r31, r3
/* 8036C0F4 00369034  4B D9 B2 45 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 8036C0F8 00369038  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036C0FC 0036903C  40 82 00 0C */	bne .L_8036C108
/* 8036C100 00369040  7F E3 FB 78 */	mr r3, r31
/* 8036C104 00369044  4B D9 58 01 */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_8036C108:
/* 8036C108 00369048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036C10C 0036904C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036C110 00369050  7C 08 03 A6 */	mtlr r0
/* 8036C114 00369054  38 21 00 10 */	addi r1, r1, 0x10
/* 8036C118 00369058  4E 80 00 20 */	blr 
.endfn createEfxHamon__Q34Game6Jigumo3ObjFv

.fn "@908@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 8036C11C 0036905C  39 60 00 0C */	li r11, 0xc
/* 8036C120 00369060  7D 63 58 2E */	lwzx r11, r3, r11
/* 8036C124 00369064  7C 63 5A 14 */	add r3, r3, r11
/* 8036C128 00369068  38 63 FC 74 */	addi r3, r3, -908
/* 8036C12C 0036906C  4B D9 A7 F0 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@908@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@908@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8036C130 00369070  39 60 00 0C */	li r11, 0xc
/* 8036C134 00369074  7D 63 58 2E */	lwzx r11, r3, r11
/* 8036C138 00369078  7C 63 5A 14 */	add r3, r3, r11
/* 8036C13C 0036907C  38 63 FC 74 */	addi r3, r3, -908
/* 8036C140 00369080  4B D9 A5 68 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@908@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@908@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8036C144 00369084  39 60 00 0C */	li r11, 0xc
/* 8036C148 00369088  7D 63 58 2E */	lwzx r11, r3, r11
/* 8036C14C 0036908C  7C 63 5A 14 */	add r3, r3, r11
/* 8036C150 00369090  38 63 FC 74 */	addi r3, r3, -908
/* 8036C154 00369094  4B D9 A5 74 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@908@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@908@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8036C158 00369098  39 60 00 0C */	li r11, 0xc
/* 8036C15C 0036909C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8036C160 003690A0  7C 63 5A 14 */	add r3, r3, r11
/* 8036C164 003690A4  38 63 FC 74 */	addi r3, r3, -908
/* 8036C168 003690A8  4B D9 A9 10 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@908@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@908@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8036C16C 003690AC  39 60 00 0C */	li r11, 0xc
/* 8036C170 003690B0  7D 63 58 2E */	lwzx r11, r3, r11
/* 8036C174 003690B4  7C 63 5A 14 */	add r3, r3, r11
/* 8036C178 003690B8  38 63 FC 74 */	addi r3, r3, -908
/* 8036C17C 003690BC  4B D9 A8 D0 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@908@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@908@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 8036C180 003690C0  39 60 00 0C */	li r11, 0xc
/* 8036C184 003690C4  7D 63 58 2E */	lwzx r11, r3, r11
/* 8036C188 003690C8  7C 63 5A 14 */	add r3, r3, r11
/* 8036C18C 003690CC  38 63 FC 74 */	addi r3, r3, -908
/* 8036C190 003690D0  4B D9 A5 10 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@908@12@viewGetShape__Q24Game9EnemyBaseFv"
