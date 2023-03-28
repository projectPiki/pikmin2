.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80485B28, local
	.asciz "ujinnko_m"
.endobj lbl_80485B28

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Ujia3Obj, global
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
	.4byte onInit__Q34Game4Ujia3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Ujia3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game4Ujia3ObjFv
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
	.4byte getShadowParam__Q34Game4Ujia3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Ujia3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Ujia3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Ujia3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Ujia3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game4Ujia3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game4Ujia3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game4Ujia3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte startCarcassMotion__Q34Game4Ujia3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Ujia3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game4Ujia3ObjFPQ34Game4Ujia3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@724@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@724@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game4Ujia3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AE70, local
	.asciz "kosijnt"
.endobj lbl_8051AE70
.balign 4
.obj lbl_8051AE78, local
	.float 2.5
.endobj lbl_8051AE78
.obj lbl_8051AE7C, local
	.float 0.0
.endobj lbl_8051AE7C
.obj lbl_8051AE80, local
	.float 1.0
.endobj lbl_8051AE80
.obj lbl_8051AE84, local
	.float 50.0
.endobj lbl_8051AE84
.obj lbl_8051AE88, local
	.float 15.0
.endobj lbl_8051AE88
.obj lbl_8051AE8C, local
	.float 8.0
.endobj lbl_8051AE8C
.obj lbl_8051AE90, local
	.float 2.0
.endobj lbl_8051AE90
.obj lbl_8051AE94, local
	.float 30.0
.endobj lbl_8051AE94
.obj lbl_8051AE98, local
	.float 32768.0
.endobj lbl_8051AE98
.balign 8
.obj lbl_8051AEA0, local
	.8byte 0x4330000080000000
.endobj lbl_8051AEA0
.obj lbl_8051AEA8, local
	.float 20.0
.endobj lbl_8051AEA8
.obj lbl_8051AEAC, local
	.float 0.5
.endobj lbl_8051AEAC
.obj lbl_8051AEB0, local
	.float 5.0
.endobj lbl_8051AEB0
.obj lbl_8051AEB4, local
	.float -20.0
.endobj lbl_8051AEB4
.obj lbl_8051AEB8, local
	.float 250.0
.endobj lbl_8051AEB8
.obj lbl_8051AEBC, local
	.float 0.75
.endobj lbl_8051AEBC
.obj lbl_8051AEC0, local # pi
	.float 3.1415927
.endobj lbl_8051AEC0
.obj lbl_8051AEC4, local
	.float 0.0055555557
.endobj lbl_8051AEC4
.obj lbl_8051AEC8, local
	.float 0.7
.endobj lbl_8051AEC8
.balign 4
.obj lbl_8051AECC, local
	.asciz "kamujnt"
.endobj lbl_8051AECC
.balign 4
.obj lbl_8051AED4, local
	.float 0.35
.endobj lbl_8051AED4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game4Ujia3ObjFv, global
/* 80266080 00262FC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80266084 00262FC4  7C 08 02 A6 */	mflr r0
/* 80266088 00262FC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026608C 00262FCC  7C 80 07 35 */	extsh. r0, r4
/* 80266090 00262FD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80266094 00262FD4  7C 7F 1B 78 */	mr r31, r3
/* 80266098 00262FD8  93 C1 00 08 */	stw r30, 8(r1)
/* 8026609C 00262FDC  41 82 00 24 */	beq .L_802660C0
/* 802660A0 00262FE0  38 1F 02 D4 */	addi r0, r31, 0x2d4
/* 802660A4 00262FE4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802660A8 00262FE8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802660AC 00262FEC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802660B0 00262FF0  38 00 00 00 */	li r0, 0
/* 802660B4 00262FF4  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 802660B8 00262FF8  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 802660BC 00262FFC  90 1F 02 DC */	stw r0, 0x2dc(r31)
.L_802660C0:
/* 802660C0 00263000  7F E3 FB 78 */	mr r3, r31
/* 802660C4 00263004  38 80 00 00 */	li r4, 0
/* 802660C8 00263008  4B E9 B2 D9 */	bl __ct__Q24Game9EnemyBaseFv
/* 802660CC 0026300C  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia3Obj@ha
/* 802660D0 00263010  38 1F 02 D4 */	addi r0, r31, 0x2d4
/* 802660D4 00263014  38 A3 48 50 */	addi r5, r3, __vt__Q34Game4Ujia3Obj@l
/* 802660D8 00263018  38 60 00 2C */	li r3, 0x2c
/* 802660DC 0026301C  90 BF 00 00 */	stw r5, 0(r31)
/* 802660E0 00263020  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802660E4 00263024  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802660E8 00263028  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802660EC 0026302C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802660F0 00263030  90 A4 00 00 */	stw r5, 0(r4)
/* 802660F4 00263034  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802660F8 00263038  7C 04 00 50 */	subf r0, r4, r0
/* 802660FC 0026303C  90 04 00 0C */	stw r0, 0xc(r4)
/* 80266100 00263040  4B DB DD A5 */	bl __nw__FUl
/* 80266104 00263044  7C 7E 1B 79 */	or. r30, r3, r3
/* 80266108 00263048  41 82 00 44 */	beq .L_8026614C
/* 8026610C 0026304C  4B EC 18 69 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80266110 00263050  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia14ProperAnimator@ha
/* 80266114 00263054  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80266118 00263058  38 03 47 38 */	addi r0, r3, __vt__Q34Game4Ujia14ProperAnimator@l
/* 8026611C 0026305C  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80266120 00263060  90 1E 00 00 */	stw r0, 0(r30)
/* 80266124 00263064  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80266128 00263068  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8026612C 0026306C  38 00 00 00 */	li r0, 0
/* 80266130 00263070  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80266134 00263074  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80266138 00263078  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026613C 0026307C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80266140 00263080  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80266144 00263084  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80266148 00263088  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8026614C:
/* 8026614C 0026308C  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80266150 00263090  38 60 00 1C */	li r3, 0x1c
/* 80266154 00263094  4B DB DD 51 */	bl __nw__FUl
/* 80266158 00263098  7C 64 1B 79 */	or. r4, r3, r3
/* 8026615C 0026309C  41 82 00 24 */	beq .L_80266180
/* 80266160 002630A0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80266164 002630A4  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia3FSM@ha
/* 80266168 002630A8  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8026616C 002630AC  38 A0 FF FF */	li r5, -1
/* 80266170 002630B0  90 04 00 00 */	stw r0, 0(r4)
/* 80266174 002630B4  38 03 47 10 */	addi r0, r3, __vt__Q34Game4Ujia3FSM@l
/* 80266178 002630B8  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8026617C 002630BC  90 04 00 00 */	stw r0, 0(r4)
.L_80266180:
/* 80266180 002630C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266184 002630C4  7F E3 FB 78 */	mr r3, r31
/* 80266188 002630C8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8026618C 002630CC  7D 89 03 A6 */	mtctr r12
/* 80266190 002630D0  4E 80 04 21 */	bctrl 
/* 80266194 002630D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266198 002630D8  7F E3 FB 78 */	mr r3, r31
/* 8026619C 002630DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802661A0 002630E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802661A4 002630E4  7C 08 03 A6 */	mtlr r0
/* 802661A8 002630E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802661AC 002630EC  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Ujia3ObjFv

.fn setInitialSetting__Q34Game4Ujia3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802661B0 002630F0  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game4Ujia3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game4Ujia3ObjFPQ24Game15CreatureInitArg, global
/* 802661B4 002630F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802661B8 002630F8  7C 08 02 A6 */	mflr r0
/* 802661BC 002630FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802661C0 00263100  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802661C4 00263104  7C 7F 1B 78 */	mr r31, r3
/* 802661C8 00263108  4B E9 B8 91 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802661CC 0026310C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802661D0 00263110  7F E3 FB 78 */	mr r3, r31
/* 802661D4 00263114  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 802661D8 00263118  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802661DC 0026311C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802661E0 00263120  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802661E4 00263124  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802661E8 00263128  48 00 02 FD */	bl resetAppearCheck__Q34Game4Ujia3ObjFv
/* 802661EC 0026312C  38 60 00 00 */	li r3, 0
/* 802661F0 00263130  38 00 FF FF */	li r0, -1
/* 802661F4 00263134  98 7F 02 C1 */	stb r3, 0x2c1(r31)
/* 802661F8 00263138  7F E3 FB 78 */	mr r3, r31
/* 802661FC 0026313C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80266200 00263140  48 00 03 E1 */	bl resetBridgeSearch__Q34Game4Ujia3ObjFv
/* 80266204 00263144  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80266208 00263148  7F E4 FB 78 */	mr r4, r31
/* 8026620C 0026314C  38 A0 00 02 */	li r5, 2
/* 80266210 00263150  38 C0 00 00 */	li r6, 0
/* 80266214 00263154  81 83 00 00 */	lwz r12, 0(r3)
/* 80266218 00263158  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026621C 0026315C  7D 89 03 A6 */	mtctr r12
/* 80266220 00263160  4E 80 04 21 */	bctrl 
/* 80266224 00263164  7F E3 FB 78 */	mr r3, r31
/* 80266228 00263168  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026622C 0026316C  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80266230 00263170  7D 89 03 A6 */	mtctr r12
/* 80266234 00263174  4E 80 04 21 */	bctrl 
/* 80266238 00263178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026623C 0026317C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80266240 00263180  7C 08 03 A6 */	mtlr r0
/* 80266244 00263184  38 21 00 10 */	addi r1, r1, 0x10
/* 80266248 00263188  4E 80 00 20 */	blr 
.endfn onInit__Q34Game4Ujia3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game4Ujia3ObjFv, global
/* 8026624C 0026318C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80266250 00263190  7C 08 02 A6 */	mflr r0
/* 80266254 00263194  7C 64 1B 78 */	mr r4, r3
/* 80266258 00263198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026625C 0026319C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80266260 002631A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80266264 002631A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80266268 002631A8  7D 89 03 A6 */	mtctr r12
/* 8026626C 002631AC  4E 80 04 21 */	bctrl 
/* 80266270 002631B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266274 002631B4  7C 08 03 A6 */	mtlr r0
/* 80266278 002631B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8026627C 002631BC  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game4Ujia3ObjFv

.fn doDirectDraw__Q34Game4Ujia3ObjFR8Graphics, global
/* 80266280 002631C0  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game4Ujia3ObjFR8Graphics

.fn doDebugDraw__Q34Game4Ujia3ObjFR8Graphics, global
/* 80266284 002631C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80266288 002631C8  7C 08 02 A6 */	mflr r0
/* 8026628C 002631CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80266290 002631D0  4B E9 FB DD */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80266294 002631D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266298 002631D8  7C 08 03 A6 */	mtlr r0
/* 8026629C 002631DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802662A0 002631E0  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game4Ujia3ObjFR8Graphics

.fn setFSM__Q34Game4Ujia3ObjFPQ34Game4Ujia3FSM, global
/* 802662A4 002631E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802662A8 002631E8  7C 08 02 A6 */	mflr r0
/* 802662AC 002631EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802662B0 002631F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802662B4 002631F4  7C 7F 1B 78 */	mr r31, r3
/* 802662B8 002631F8  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802662BC 002631FC  7F E4 FB 78 */	mr r4, r31
/* 802662C0 00263200  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802662C4 00263204  81 83 00 00 */	lwz r12, 0(r3)
/* 802662C8 00263208  81 8C 00 08 */	lwz r12, 8(r12)
/* 802662CC 0026320C  7D 89 03 A6 */	mtctr r12
/* 802662D0 00263210  4E 80 04 21 */	bctrl 
/* 802662D4 00263214  38 00 00 00 */	li r0, 0
/* 802662D8 00263218  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802662DC 0026321C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802662E0 00263220  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802662E4 00263224  7C 08 03 A6 */	mtlr r0
/* 802662E8 00263228  38 21 00 10 */	addi r1, r1, 0x10
/* 802662EC 0026322C  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game4Ujia3ObjFPQ34Game4Ujia3FSM

.fn getShadowParam__Q34Game4Ujia3ObjFRQ24Game11ShadowParam, global
/* 802662F0 00263230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802662F4 00263234  7C 08 02 A6 */	mflr r0
/* 802662F8 00263238  90 01 00 14 */	stw r0, 0x14(r1)
/* 802662FC 0026323C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80266300 00263240  7C 9F 23 78 */	mr r31, r4
/* 80266304 00263244  38 82 CB 10 */	addi r4, r2, lbl_8051AE70@sda21
/* 80266308 00263248  93 C1 00 08 */	stw r30, 8(r1)
/* 8026630C 0026324C  7C 7E 1B 78 */	mr r30, r3
/* 80266310 00263250  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80266314 00263254  48 1D 8C D1 */	bl getJoint__Q28SysShape5ModelFPc
/* 80266318 00263258  48 1C 35 89 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8026631C 0026325C  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 80266320 00263260  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80266324 00263264  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80266328 00263268  C0 42 CB 18 */	lfs f2, lbl_8051AE78@sda21(r2)
/* 8026632C 0026326C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80266330 00263270  C0 22 CB 1C */	lfs f1, lbl_8051AE7C@sda21(r2)
/* 80266334 00263274  D0 7F 00 04 */	stfs f3, 4(r31)
/* 80266338 00263278  C0 02 CB 20 */	lfs f0, lbl_8051AE80@sda21(r2)
/* 8026633C 0026327C  D0 9F 00 08 */	stfs f4, 8(r31)
/* 80266340 00263280  C0 7F 00 04 */	lfs f3, 4(r31)
/* 80266344 00263284  EC 43 10 28 */	fsubs f2, f3, f2
/* 80266348 00263288  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8026634C 0026328C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80266350 00263290  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80266354 00263294  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80266358 00263298  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 8026635C 0026329C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80266360 002632A0  41 82 00 10 */	beq .L_80266370
/* 80266364 002632A4  C0 02 CB 24 */	lfs f0, lbl_8051AE84@sda21(r2)
/* 80266368 002632A8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8026636C 002632AC  48 00 00 0C */	b .L_80266378
.L_80266370:
/* 80266370 002632B0  C0 02 CB 28 */	lfs f0, lbl_8051AE88@sda21(r2)
/* 80266374 002632B4  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80266378:
/* 80266378 002632B8  C0 02 CB 2C */	lfs f0, lbl_8051AE8C@sda21(r2)
/* 8026637C 002632BC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80266380 002632C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266384 002632C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80266388 002632C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026638C 002632CC  7C 08 03 A6 */	mtlr r0
/* 80266390 002632D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80266394 002632D4  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game4Ujia3ObjFRQ24Game11ShadowParam

.fn pressCallBack__Q34Game4Ujia3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80266398 002632D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026639C 002632DC  7C 08 02 A6 */	mflr r0
/* 802663A0 002632E0  28 04 00 00 */	cmplwi r4, 0
/* 802663A4 002632E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802663A8 002632E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802663AC 002632EC  7C 7F 1B 78 */	mr r31, r3
/* 802663B0 002632F0  41 82 00 64 */	beq .L_80266414
/* 802663B4 002632F4  7C 83 23 78 */	mr r3, r4
/* 802663B8 002632F8  81 84 00 00 */	lwz r12, 0(r4)
/* 802663BC 002632FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802663C0 00263300  7D 89 03 A6 */	mtctr r12
/* 802663C4 00263304  4E 80 04 21 */	bctrl 
/* 802663C8 00263308  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802663CC 0026330C  41 82 00 48 */	beq .L_80266414
/* 802663D0 00263310  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802663D4 00263314  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802663D8 00263318  40 82 00 3C */	bne .L_80266414
/* 802663DC 0026331C  7F E3 FB 78 */	mr r3, r31
/* 802663E0 00263320  4B EA 10 15 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802663E4 00263324  2C 03 00 04 */	cmpwi r3, 4
/* 802663E8 00263328  40 81 00 2C */	ble .L_80266414
/* 802663EC 0026332C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802663F0 00263330  7F E4 FB 78 */	mr r4, r31
/* 802663F4 00263334  38 A0 00 01 */	li r5, 1
/* 802663F8 00263338  38 C0 00 00 */	li r6, 0
/* 802663FC 0026333C  81 83 00 00 */	lwz r12, 0(r3)
/* 80266400 00263340  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80266404 00263344  7D 89 03 A6 */	mtctr r12
/* 80266408 00263348  4E 80 04 21 */	bctrl 
/* 8026640C 0026334C  38 60 00 01 */	li r3, 1
/* 80266410 00263350  48 00 00 08 */	b .L_80266418
.L_80266414:
/* 80266414 00263354  38 60 00 00 */	li r3, 0
.L_80266418:
/* 80266418 00263358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026641C 0026335C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80266420 00263360  7C 08 03 A6 */	mtlr r0
/* 80266424 00263364  38 21 00 10 */	addi r1, r1, 0x10
/* 80266428 00263368  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game4Ujia3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game4Ujia3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8026642C 0026336C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80266430 00263370  7C 08 02 A6 */	mflr r0
/* 80266434 00263374  90 01 00 14 */	stw r0, 0x14(r1)
/* 80266438 00263378  81 83 00 00 */	lwz r12, 0(r3)
/* 8026643C 0026337C  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 80266440 00263380  7D 89 03 A6 */	mtctr r12
/* 80266444 00263384  4E 80 04 21 */	bctrl 
/* 80266448 00263388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026644C 0026338C  7C 08 03 A6 */	mtlr r0
/* 80266450 00263390  38 21 00 10 */	addi r1, r1, 0x10
/* 80266454 00263394  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game4Ujia3ObjFPQ24Game8CreaturefP8CollPart

.fn startCarcassMotion__Q34Game4Ujia3ObjFv, global
/* 80266458 00263398  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026645C 0026339C  7C 08 02 A6 */	mflr r0
/* 80266460 002633A0  38 80 00 06 */	li r4, 6
/* 80266464 002633A4  38 A0 00 00 */	li r5, 0
/* 80266468 002633A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026646C 002633AC  4B E9 EB 99 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80266470 002633B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266474 002633B4  7C 08 03 A6 */	mtlr r0
/* 80266478 002633B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8026647C 002633BC  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game4Ujia3ObjFv

.fn lifeIncrement__Q34Game4Ujia3ObjFv, global
/* 80266480 002633C0  C0 22 CB 1C */	lfs f1, lbl_8051AE7C@sda21(r2)
/* 80266484 002633C4  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 80266488 002633C8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8026648C 002633CC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80266490 002633D0  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80266494 002633D4  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 80266498 002633D8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026649C 002633DC  4C 40 13 82 */	cror 2, 0, 2
/* 802664A0 002633E0  4C 82 00 20 */	bnelr 
/* 802664A4 002633E4  C0 02 CB 20 */	lfs f0, lbl_8051AE80@sda21(r2)
/* 802664A8 002633E8  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802664AC 002633EC  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game4Ujia3ObjFv

.fn setInWaterDamage__Q34Game4Ujia3ObjFv, global
/* 802664B0 002633F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802664B4 002633F4  7C 08 02 A6 */	mflr r0
/* 802664B8 002633F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802664BC 002633FC  80 03 02 80 */	lwz r0, 0x280(r3)
/* 802664C0 00263400  28 00 00 00 */	cmplwi r0, 0
/* 802664C4 00263404  41 82 00 10 */	beq .L_802664D4
/* 802664C8 00263408  C0 22 CB 30 */	lfs f1, lbl_8051AE90@sda21(r2)
/* 802664CC 0026340C  C0 42 CB 20 */	lfs f2, lbl_8051AE80@sda21(r2)
/* 802664D0 00263410  4B E9 FB 5D */	bl addDamage__Q24Game9EnemyBaseFff
.L_802664D4:
/* 802664D4 00263414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802664D8 00263418  7C 08 03 A6 */	mtlr r0
/* 802664DC 0026341C  38 21 00 10 */	addi r1, r1, 0x10
/* 802664E0 00263420  4E 80 00 20 */	blr 
.endfn setInWaterDamage__Q34Game4Ujia3ObjFv

.fn resetAppearCheck__Q34Game4Ujia3ObjFv, global
/* 802664E4 00263424  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802664E8 00263428  7C 08 02 A6 */	mflr r0
/* 802664EC 0026342C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802664F0 00263430  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802664F4 00263434  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802664F8 00263438  7C 7E 1B 78 */	mr r30, r3
/* 802664FC 0026343C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80266500 00263440  28 04 00 00 */	cmplwi r4, 0
/* 80266504 00263444  41 82 00 74 */	beq .L_80266578
/* 80266508 00263448  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8026650C 0026344C  2C 00 00 04 */	cmpwi r0, 4
/* 80266510 00263450  40 82 00 68 */	bne .L_80266578
/* 80266514 00263454  4B E6 30 8D */	bl rand
/* 80266518 00263458  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026651C 0026345C  3C 00 43 30 */	lis r0, 0x4330
/* 80266520 00263460  90 61 00 0C */	stw r3, 0xc(r1)
/* 80266524 00263464  7F C3 F3 78 */	mr r3, r30
/* 80266528 00263468  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026652C 0026346C  90 01 00 08 */	stw r0, 8(r1)
/* 80266530 00263470  C8 42 CB 40 */	lfd f2, lbl_8051AEA0@sda21(r2)
/* 80266534 00263474  C8 01 00 08 */	lfd f0, 8(r1)
/* 80266538 00263478  C0 22 CB 38 */	lfs f1, lbl_8051AE98@sda21(r2)
/* 8026653C 0026347C  EC 40 10 28 */	fsubs f2, f0, f2
/* 80266540 00263480  C0 02 CB 34 */	lfs f0, lbl_8051AE94@sda21(r2)
/* 80266544 00263484  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 80266548 00263488  EC 22 08 24 */	fdivs f1, f2, f1
/* 8026654C 0026348C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80266550 00263490  FC 00 00 1E */	fctiwz f0, f0
/* 80266554 00263494  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80266558 00263498  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8026655C 0026349C  7D 89 03 A6 */	mtctr r12
/* 80266560 002634A0  4E 80 04 21 */	bctrl 
/* 80266564 002634A4  1C 03 00 05 */	mulli r0, r3, 5
/* 80266568 002634A8  7C 1F 02 14 */	add r0, r31, r0
/* 8026656C 002634AC  54 00 44 2E */	rlwinm r0, r0, 8, 0x10, 0x17
/* 80266570 002634B0  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
/* 80266574 002634B4  48 00 00 0C */	b .L_80266580
.L_80266578:
/* 80266578 002634B8  38 00 00 00 */	li r0, 0
/* 8026657C 002634BC  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
.L_80266580:
/* 80266580 002634C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80266584 002634C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80266588 002634C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8026658C 002634CC  7C 08 03 A6 */	mtlr r0
/* 80266590 002634D0  38 21 00 20 */	addi r1, r1, 0x20
/* 80266594 002634D4  4E 80 00 20 */	blr 
.endfn resetAppearCheck__Q34Game4Ujia3ObjFv

.fn isAppearCheck__Q34Game4Ujia3ObjFv, global
/* 80266598 002634D8  A0 83 02 C2 */	lhz r4, 0x2c2(r3)
/* 8026659C 002634DC  28 04 00 00 */	cmplwi r4, 0
/* 802665A0 002634E0  41 82 00 38 */	beq .L_802665D8
/* 802665A4 002634E4  38 04 00 01 */	addi r0, r4, 1
/* 802665A8 002634E8  B0 03 02 C2 */	sth r0, 0x2c2(r3)
/* 802665AC 002634EC  A0 03 02 C2 */	lhz r0, 0x2c2(r3)
/* 802665B0 002634F0  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 802665B4 002634F4  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 802665B8 002634F8  7C 04 00 00 */	cmpw r4, r0
/* 802665BC 002634FC  40 81 00 14 */	ble .L_802665D0
/* 802665C0 00263500  38 00 00 00 */	li r0, 0
/* 802665C4 00263504  B0 03 02 C2 */	sth r0, 0x2c2(r3)
/* 802665C8 00263508  38 60 00 01 */	li r3, 1
/* 802665CC 0026350C  4E 80 00 20 */	blr 
.L_802665D0:
/* 802665D0 00263510  38 60 00 00 */	li r3, 0
/* 802665D4 00263514  4E 80 00 20 */	blr 
.L_802665D8:
/* 802665D8 00263518  38 60 00 01 */	li r3, 1
/* 802665DC 0026351C  4E 80 00 20 */	blr 
.endfn isAppearCheck__Q34Game4Ujia3ObjFv

.fn resetBridgeSearch__Q34Game4Ujia3ObjFv, global
/* 802665E0 00263520  38 80 00 01 */	li r4, 1
/* 802665E4 00263524  38 00 00 00 */	li r0, 0
/* 802665E8 00263528  98 83 02 C0 */	stb r4, 0x2c0(r3)
/* 802665EC 0026352C  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 802665F0 00263530  90 03 02 C8 */	stw r0, 0x2c8(r3)
/* 802665F4 00263534  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802665F8 00263538  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802665FC 0026353C  4E 80 00 20 */	blr 
.endfn resetBridgeSearch__Q34Game4Ujia3ObjFv

.fn setBridgeSearch__Q34Game4Ujia3ObjFv, global
/* 80266600 00263540  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80266604 00263544  7C 08 02 A6 */	mflr r0
/* 80266608 00263548  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026660C 0026354C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80266610 00263550  7C 7F 1B 78 */	mr r31, r3
/* 80266614 00263554  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 80266618 00263558  28 00 00 00 */	cmplwi r0, 0
/* 8026661C 0026355C  41 82 00 18 */	beq .L_80266634
/* 80266620 00263560  38 00 00 00 */	li r0, 0
/* 80266624 00263564  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80266628 00263568  48 00 00 21 */	bl setNearestBridge__Q34Game4Ujia3ObjFv
/* 8026662C 0026356C  7F E3 FB 78 */	mr r3, r31
/* 80266630 00263570  48 00 02 D9 */	bl setCullingCheck__Q34Game4Ujia3ObjFv
.L_80266634:
/* 80266634 00263574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266638 00263578  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026663C 0026357C  7C 08 03 A6 */	mtlr r0
/* 80266640 00263580  38 21 00 10 */	addi r1, r1, 0x10
/* 80266644 00263584  4E 80 00 20 */	blr 
.endfn setBridgeSearch__Q34Game4Ujia3ObjFv

.fn setNearestBridge__Q34Game4Ujia3ObjFv, global
/* 80266648 00263588  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8026664C 0026358C  7C 08 02 A6 */	mflr r0
/* 80266650 00263590  90 01 00 54 */	stw r0, 0x54(r1)
/* 80266654 00263594  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80266658 00263598  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8026665C 0026359C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80266660 002635A0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80266664 002635A4  7C 7F 1B 78 */	mr r31, r3
/* 80266668 002635A8  38 00 00 00 */	li r0, 0
/* 8026666C 002635AC  90 03 02 C8 */	stw r0, 0x2c8(r3)
/* 80266670 002635B0  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 80266674 002635B4  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 80266678 002635B8  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 8026667C 002635BC  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 80266680 002635C0  28 03 00 00 */	cmplwi r3, 0
/* 80266684 002635C4  41 82 02 14 */	beq .L_80266898
/* 80266688 002635C8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8026668C 002635CC  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 80266690 002635D0  EF E0 00 32 */	fmuls f31, f0, f0
/* 80266694 002635D4  41 82 00 08 */	beq .L_8026669C
/* 80266698 002635D8  38 63 00 30 */	addi r3, r3, 0x30
.L_8026669C:
/* 8026669C 002635DC  38 00 00 00 */	li r0, 0
/* 802666A0 002635E0  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 802666A4 002635E4  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 802666A8 002635E8  90 01 00 20 */	stw r0, 0x20(r1)
/* 802666AC 002635EC  28 00 00 00 */	cmplwi r0, 0
/* 802666B0 002635F0  90 81 00 14 */	stw r4, 0x14(r1)
/* 802666B4 002635F4  90 01 00 18 */	stw r0, 0x18(r1)
/* 802666B8 002635F8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802666BC 002635FC  40 82 00 1C */	bne .L_802666D8
/* 802666C0 00263600  81 83 00 00 */	lwz r12, 0(r3)
/* 802666C4 00263604  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802666C8 00263608  7D 89 03 A6 */	mtctr r12
/* 802666CC 0026360C  4E 80 04 21 */	bctrl 
/* 802666D0 00263610  90 61 00 18 */	stw r3, 0x18(r1)
/* 802666D4 00263614  48 00 01 A4 */	b .L_80266878
.L_802666D8:
/* 802666D8 00263618  81 83 00 00 */	lwz r12, 0(r3)
/* 802666DC 0026361C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802666E0 00263620  7D 89 03 A6 */	mtctr r12
/* 802666E4 00263624  4E 80 04 21 */	bctrl 
/* 802666E8 00263628  90 61 00 18 */	stw r3, 0x18(r1)
/* 802666EC 0026362C  48 00 00 58 */	b .L_80266744
.L_802666F0:
/* 802666F0 00263630  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802666F4 00263634  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802666F8 00263638  81 83 00 00 */	lwz r12, 0(r3)
/* 802666FC 0026363C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80266700 00263640  7D 89 03 A6 */	mtctr r12
/* 80266704 00263644  4E 80 04 21 */	bctrl 
/* 80266708 00263648  7C 64 1B 78 */	mr r4, r3
/* 8026670C 0026364C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80266710 00263650  81 83 00 00 */	lwz r12, 0(r3)
/* 80266714 00263654  81 8C 00 08 */	lwz r12, 8(r12)
/* 80266718 00263658  7D 89 03 A6 */	mtctr r12
/* 8026671C 0026365C  4E 80 04 21 */	bctrl 
/* 80266720 00263660  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80266724 00263664  40 82 01 54 */	bne .L_80266878
/* 80266728 00263668  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026672C 0026366C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80266730 00263670  81 83 00 00 */	lwz r12, 0(r3)
/* 80266734 00263674  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80266738 00263678  7D 89 03 A6 */	mtctr r12
/* 8026673C 0026367C  4E 80 04 21 */	bctrl 
/* 80266740 00263680  90 61 00 18 */	stw r3, 0x18(r1)
.L_80266744:
/* 80266744 00263684  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80266748 00263688  38 61 00 14 */	addi r3, r1, 0x14
/* 8026674C 0026368C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80266750 00263690  7D 89 03 A6 */	mtctr r12
/* 80266754 00263694  4E 80 04 21 */	bctrl 
/* 80266758 00263698  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026675C 0026369C  41 82 FF 94 */	beq .L_802666F0
/* 80266760 002636A0  48 00 01 18 */	b .L_80266878
.L_80266764:
/* 80266764 002636A4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80266768 002636A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026676C 002636AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80266770 002636B0  7D 89 03 A6 */	mtctr r12
/* 80266774 002636B4  4E 80 04 21 */	bctrl 
/* 80266778 002636B8  7C 60 1B 78 */	mr r0, r3
/* 8026677C 002636BC  38 61 00 08 */	addi r3, r1, 8
/* 80266780 002636C0  7C 1E 03 78 */	mr r30, r0
/* 80266784 002636C4  7F C4 F3 78 */	mr r4, r30
/* 80266788 002636C8  4B F8 87 AD */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8026678C 002636CC  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80266790 002636D0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80266794 002636D4  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80266798 002636D8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8026679C 002636DC  C0 01 00 08 */	lfs f0, 8(r1)
/* 802667A0 002636E0  EC 42 00 28 */	fsubs f2, f2, f0
/* 802667A4 002636E4  EC 01 00 72 */	fmuls f0, f1, f1
/* 802667A8 002636E8  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 802667AC 002636EC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802667B0 002636F0  40 80 00 0C */	bge .L_802667BC
/* 802667B4 002636F4  93 DF 02 C8 */	stw r30, 0x2c8(r31)
/* 802667B8 002636F8  FF E0 00 90 */	fmr f31, f0
.L_802667BC:
/* 802667BC 002636FC  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802667C0 00263700  28 00 00 00 */	cmplwi r0, 0
/* 802667C4 00263704  40 82 00 24 */	bne .L_802667E8
/* 802667C8 00263708  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802667CC 0026370C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802667D0 00263710  81 83 00 00 */	lwz r12, 0(r3)
/* 802667D4 00263714  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802667D8 00263718  7D 89 03 A6 */	mtctr r12
/* 802667DC 0026371C  4E 80 04 21 */	bctrl 
/* 802667E0 00263720  90 61 00 18 */	stw r3, 0x18(r1)
/* 802667E4 00263724  48 00 00 94 */	b .L_80266878
.L_802667E8:
/* 802667E8 00263728  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802667EC 0026372C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802667F0 00263730  81 83 00 00 */	lwz r12, 0(r3)
/* 802667F4 00263734  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802667F8 00263738  7D 89 03 A6 */	mtctr r12
/* 802667FC 0026373C  4E 80 04 21 */	bctrl 
/* 80266800 00263740  90 61 00 18 */	stw r3, 0x18(r1)
/* 80266804 00263744  48 00 00 58 */	b .L_8026685C
.L_80266808:
/* 80266808 00263748  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026680C 0026374C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80266810 00263750  81 83 00 00 */	lwz r12, 0(r3)
/* 80266814 00263754  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80266818 00263758  7D 89 03 A6 */	mtctr r12
/* 8026681C 0026375C  4E 80 04 21 */	bctrl 
/* 80266820 00263760  7C 64 1B 78 */	mr r4, r3
/* 80266824 00263764  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80266828 00263768  81 83 00 00 */	lwz r12, 0(r3)
/* 8026682C 0026376C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80266830 00263770  7D 89 03 A6 */	mtctr r12
/* 80266834 00263774  4E 80 04 21 */	bctrl 
/* 80266838 00263778  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026683C 0026377C  40 82 00 3C */	bne .L_80266878
/* 80266840 00263780  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80266844 00263784  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80266848 00263788  81 83 00 00 */	lwz r12, 0(r3)
/* 8026684C 0026378C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80266850 00263790  7D 89 03 A6 */	mtctr r12
/* 80266854 00263794  4E 80 04 21 */	bctrl 
/* 80266858 00263798  90 61 00 18 */	stw r3, 0x18(r1)
.L_8026685C:
/* 8026685C 0026379C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80266860 002637A0  38 61 00 14 */	addi r3, r1, 0x14
/* 80266864 002637A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80266868 002637A8  7D 89 03 A6 */	mtctr r12
/* 8026686C 002637AC  4E 80 04 21 */	bctrl 
/* 80266870 002637B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80266874 002637B4  41 82 FF 94 */	beq .L_80266808
.L_80266878:
/* 80266878 002637B8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8026687C 002637BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80266880 002637C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80266884 002637C4  7D 89 03 A6 */	mtctr r12
/* 80266888 002637C8  4E 80 04 21 */	bctrl 
/* 8026688C 002637CC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80266890 002637D0  7C 04 18 40 */	cmplw r4, r3
/* 80266894 002637D4  40 82 FE D0 */	bne .L_80266764
.L_80266898:
/* 80266898 002637D8  80 7F 02 C8 */	lwz r3, 0x2c8(r31)
/* 8026689C 002637DC  28 03 00 00 */	cmplwi r3, 0
/* 802668A0 002637E0  41 82 00 48 */	beq .L_802668E8
/* 802668A4 002637E4  4B F8 87 8D */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 802668A8 002637E8  C0 02 CB 48 */	lfs f0, lbl_8051AEA8@sda21(r2)
/* 802668AC 002637EC  EF E1 00 28 */	fsubs f31, f1, f0
/* 802668B0 002637F0  4B E6 2C F1 */	bl rand
/* 802668B4 002637F4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802668B8 002637F8  3C 00 43 30 */	lis r0, 0x4330
/* 802668BC 002637FC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802668C0 00263800  C8 62 CB 40 */	lfd f3, lbl_8051AEA0@sda21(r2)
/* 802668C4 00263804  90 01 00 28 */	stw r0, 0x28(r1)
/* 802668C8 00263808  C0 22 CB 38 */	lfs f1, lbl_8051AE98@sda21(r2)
/* 802668CC 0026380C  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 802668D0 00263810  C0 02 CB 4C */	lfs f0, lbl_8051AEAC@sda21(r2)
/* 802668D4 00263814  EC 42 18 28 */	fsubs f2, f2, f3
/* 802668D8 00263818  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 802668DC 0026381C  EC 22 08 24 */	fdivs f1, f2, f1
/* 802668E0 00263820  EC 00 0F FC */	fnmsubs f0, f0, f31, f1
/* 802668E4 00263824  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_802668E8:
/* 802668E8 00263828  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802668EC 0026382C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802668F0 00263830  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802668F4 00263834  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802668F8 00263838  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802668FC 0026383C  7C 08 03 A6 */	mtlr r0
/* 80266900 00263840  38 21 00 50 */	addi r1, r1, 0x50
/* 80266904 00263844  4E 80 00 20 */	blr 
.endfn setNearestBridge__Q34Game4Ujia3ObjFv

.fn setCullingCheck__Q34Game4Ujia3ObjFv, global
/* 80266908 00263848  4E 80 00 20 */	blr 
.endfn setCullingCheck__Q34Game4Ujia3ObjFv

.fn checkBreakOrMove__Q34Game4Ujia3ObjFv, global
/* 8026690C 0026384C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80266910 00263850  7C 08 02 A6 */	mflr r0
/* 80266914 00263854  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80266918 00263858  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8026691C 0026385C  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80266920 00263860  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80266924 00263864  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80266928 00263868  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8026692C 0026386C  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80266930 00263870  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80266934 00263874  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80266938 00263878  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8026693C 0026387C  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 80266940 00263880  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 80266944 00263884  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 80266948 00263888  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8026694C 0026388C  7C 7F 1B 78 */	mr r31, r3
/* 80266950 00263890  80 83 02 C8 */	lwz r4, 0x2c8(r3)
/* 80266954 00263894  28 04 00 00 */	cmplwi r4, 0
/* 80266958 00263898  41 82 01 20 */	beq .L_80266A78
/* 8026695C 0026389C  38 61 00 20 */	addi r3, r1, 0x20
/* 80266960 002638A0  4B F8 86 D9 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 80266964 002638A4  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 80266968 002638A8  38 61 00 14 */	addi r3, r1, 0x14
/* 8026696C 002638AC  C3 A1 00 24 */	lfs f29, 0x24(r1)
/* 80266970 002638B0  C3 61 00 28 */	lfs f27, 0x28(r1)
/* 80266974 002638B4  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 80266978 002638B8  4B F8 85 BD */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8026697C 002638BC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80266980 002638C0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80266984 002638C4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80266988 002638C8  EF C2 00 28 */	fsubs f30, f2, f0
/* 8026698C 002638CC  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80266990 002638D0  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80266994 002638D4  EF E1 00 28 */	fsubs f31, f1, f0
/* 80266998 002638D8  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8026699C 002638DC  EC 3D 07 B2 */	fmuls f1, f29, f30
/* 802669A0 002638E0  EF A2 00 28 */	fsubs f29, f2, f0
/* 802669A4 002638E4  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 802669A8 002638E8  EC 3C 0F FA */	fmadds f1, f28, f31, f1
/* 802669AC 002638EC  EC 3B 0F 7A */	fmadds f1, f27, f29, f1
/* 802669B0 002638F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802669B4 002638F4  40 81 00 0C */	ble .L_802669C0
/* 802669B8 002638F8  38 60 00 07 */	li r3, 7
/* 802669BC 002638FC  48 00 00 C0 */	b .L_80266A7C
.L_802669C0:
/* 802669C0 00263900  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 802669C4 00263904  38 61 00 08 */	addi r3, r1, 8
/* 802669C8 00263908  4B F8 87 15 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 802669CC 0026390C  C3 61 00 08 */	lfs f27, 8(r1)
/* 802669D0 00263910  C3 81 00 0C */	lfs f28, 0xc(r1)
/* 802669D4 00263914  C3 41 00 10 */	lfs f26, 0x10(r1)
/* 802669D8 00263918  80 7F 02 C8 */	lwz r3, 0x2c8(r31)
/* 802669DC 0026391C  4B F8 86 55 */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 802669E0 00263920  EC 7C 07 B2 */	fmuls f3, f28, f30
/* 802669E4 00263924  C0 02 CB 4C */	lfs f0, lbl_8051AEAC@sda21(r2)
/* 802669E8 00263928  C0 42 CB 48 */	lfs f2, lbl_8051AEA8@sda21(r2)
/* 802669EC 0026392C  EC 80 00 72 */	fmuls f4, f0, f1
/* 802669F0 00263930  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 802669F4 00263934  EC 3B 1F FA */	fmadds f1, f27, f31, f3
/* 802669F8 00263938  EC 42 20 2A */	fadds f2, f2, f4
/* 802669FC 0026393C  EC 3A 0F 7A */	fmadds f1, f26, f29, f1
/* 80266A00 00263940  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80266A04 00263944  40 80 00 0C */	bge .L_80266A10
/* 80266A08 00263948  D0 5F 02 D0 */	stfs f2, 0x2d0(r31)
/* 80266A0C 0026394C  48 00 00 0C */	b .L_80266A18
.L_80266A10:
/* 80266A10 00263950  FC 00 10 50 */	fneg f0, f2
/* 80266A14 00263954  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_80266A18:
/* 80266A18 00263958  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 80266A1C 0026395C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80266A20 00263960  40 81 00 08 */	ble .L_80266A28
/* 80266A24 00263964  48 00 00 08 */	b .L_80266A2C
.L_80266A28:
/* 80266A28 00263968  FC 20 08 50 */	fneg f1, f1
.L_80266A2C:
/* 80266A2C 0026396C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 80266A30 00263970  40 81 00 0C */	ble .L_80266A3C
/* 80266A34 00263974  38 60 00 06 */	li r3, 6
/* 80266A38 00263978  48 00 00 44 */	b .L_80266A7C
.L_80266A3C:
/* 80266A3C 0026397C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80266A40 00263980  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80266A44 00263984  81 83 00 04 */	lwz r12, 4(r3)
/* 80266A48 00263988  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80266A4C 0026398C  7D 89 03 A6 */	mtctr r12
/* 80266A50 00263990  4E 80 04 21 */	bctrl 
/* 80266A54 00263994  C0 02 CB 50 */	lfs f0, lbl_8051AEB0@sda21(r2)
/* 80266A58 00263998  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 80266A5C 0026399C  EC 00 08 2A */	fadds f0, f0, f1
/* 80266A60 002639A0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80266A64 002639A4  40 81 00 0C */	ble .L_80266A70
/* 80266A68 002639A8  38 60 00 08 */	li r3, 8
/* 80266A6C 002639AC  48 00 00 10 */	b .L_80266A7C
.L_80266A70:
/* 80266A70 002639B0  38 60 00 06 */	li r3, 6
/* 80266A74 002639B4  48 00 00 08 */	b .L_80266A7C
.L_80266A78:
/* 80266A78 002639B8  38 60 00 07 */	li r3, 7
.L_80266A7C:
/* 80266A7C 002639BC  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80266A80 002639C0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80266A84 002639C4  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80266A88 002639C8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80266A8C 002639CC  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80266A90 002639D0  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80266A94 002639D4  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80266A98 002639D8  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80266A9C 002639DC  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 80266AA0 002639E0  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 80266AA4 002639E4  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 80266AA8 002639E8  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 80266AAC 002639EC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80266AB0 002639F0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80266AB4 002639F4  7C 08 03 A6 */	mtlr r0
/* 80266AB8 002639F8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80266ABC 002639FC  4E 80 00 20 */	blr 
.endfn checkBreakOrMove__Q34Game4Ujia3ObjFv

.fn isBreakBridge__Q34Game4Ujia3ObjFv, global
/* 80266AC0 00263A00  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 80266AC4 00263A04  28 03 00 00 */	cmplwi r3, 0
/* 80266AC8 00263A08  41 82 00 18 */	beq .L_80266AE0
/* 80266ACC 00263A0C  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80266AD0 00263A10  2C 00 00 00 */	cmpwi r0, 0
/* 80266AD4 00263A14  41 82 00 0C */	beq .L_80266AE0
/* 80266AD8 00263A18  38 60 00 01 */	li r3, 1
/* 80266ADC 00263A1C  4E 80 00 20 */	blr 
.L_80266AE0:
/* 80266AE0 00263A20  38 60 00 00 */	li r3, 0
/* 80266AE4 00263A24  4E 80 00 20 */	blr 
.endfn isBreakBridge__Q34Game4Ujia3ObjFv

.fn moveBridgeSide__Q34Game4Ujia3ObjFv, global
/* 80266AE8 00263A28  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80266AEC 00263A2C  7C 08 02 A6 */	mflr r0
/* 80266AF0 00263A30  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80266AF4 00263A34  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80266AF8 00263A38  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80266AFC 00263A3C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80266B00 00263A40  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80266B04 00263A44  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80266B08 00263A48  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80266B0C 00263A4C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80266B10 00263A50  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80266B14 00263A54  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80266B18 00263A58  7C 7F 1B 78 */	mr r31, r3
/* 80266B1C 00263A5C  38 61 00 44 */	addi r3, r1, 0x44
/* 80266B20 00263A60  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 80266B24 00263A64  4B F8 84 11 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 80266B28 00263A68  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 80266B2C 00263A6C  38 61 00 38 */	addi r3, r1, 0x38
/* 80266B30 00263A70  C3 81 00 4C */	lfs f28, 0x4c(r1)
/* 80266B34 00263A74  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 80266B38 00263A78  4B F8 85 A5 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 80266B3C 00263A7C  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 80266B40 00263A80  38 61 00 2C */	addi r3, r1, 0x2c
/* 80266B44 00263A84  C3 E1 00 40 */	lfs f31, 0x40(r1)
/* 80266B48 00263A88  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 80266B4C 00263A8C  4B F8 84 ED */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 80266B50 00263A90  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 80266B54 00263A94  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80266B58 00263A98  EF FF 00 72 */	fmuls f31, f31, f1
/* 80266B5C 00263A9C  C0 02 CB 54 */	lfs f0, lbl_8051AEB4@sda21(r2)
/* 80266B60 00263AA0  EF DE 00 72 */	fmuls f30, f30, f1
/* 80266B64 00263AA4  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 80266B68 00263AA8  EC 84 00 32 */	fmuls f4, f4, f0
/* 80266B6C 00263AAC  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80266B70 00263AB0  EF 9C F8 2A */	fadds f28, f28, f31
/* 80266B74 00263AB4  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80266B78 00263AB8  EC 63 00 32 */	fmuls f3, f3, f0
/* 80266B7C 00263ABC  C0 02 CB 58 */	lfs f0, lbl_8051AEB8@sda21(r2)
/* 80266B80 00263AC0  EF BD F0 2A */	fadds f29, f29, f30
/* 80266B84 00263AC4  EF 9C 20 2A */	fadds f28, f28, f4
/* 80266B88 00263AC8  EF BD 18 2A */	fadds f29, f29, f3
/* 80266B8C 00263ACC  EC 21 E0 28 */	fsubs f1, f1, f28
/* 80266B90 00263AD0  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80266B94 00263AD4  EC 21 00 72 */	fmuls f1, f1, f1
/* 80266B98 00263AD8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80266B9C 00263ADC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80266BA0 00263AE0  40 80 00 80 */	bge .L_80266C20
/* 80266BA4 00263AE4  7F E3 FB 78 */	mr r3, r31
/* 80266BA8 00263AE8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80266BAC 00263AEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266BB0 00263AF0  C0 22 CB 5C */	lfs f1, lbl_8051AEBC@sda21(r2)
/* 80266BB4 00263AF4  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 80266BB8 00263AF8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266BBC 00263AFC  EF C1 00 32 */	fmuls f30, f1, f0
/* 80266BC0 00263B00  7D 89 03 A6 */	mtctr r12
/* 80266BC4 00263B04  4E 80 04 21 */	bctrl 
/* 80266BC8 00263B08  4B E6 8C 55 */	bl sin
/* 80266BCC 00263B0C  7F E3 FB 78 */	mr r3, r31
/* 80266BD0 00263B10  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80266BD4 00263B14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266BD8 00263B18  FF A0 08 18 */	frsp f29, f1
/* 80266BDC 00263B1C  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80266BE0 00263B20  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80266BE4 00263B24  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266BE8 00263B28  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80266BEC 00263B2C  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 80266BF0 00263B30  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80266BF4 00263B34  7D 89 03 A6 */	mtctr r12
/* 80266BF8 00263B38  4E 80 04 21 */	bctrl 
/* 80266BFC 00263B3C  4B E6 86 B9 */	bl cos
/* 80266C00 00263B40  EC 1E 07 72 */	fmuls f0, f30, f29
/* 80266C04 00263B44  38 60 00 01 */	li r3, 1
/* 80266C08 00263B48  FC 20 08 18 */	frsp f1, f1
/* 80266C0C 00263B4C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80266C10 00263B50  EC 1E 00 72 */	fmuls f0, f30, f1
/* 80266C14 00263B54  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 80266C18 00263B58  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80266C1C 00263B5C  48 00 01 40 */	b .L_80266D5C
.L_80266C20:
/* 80266C20 00263B60  7F E4 FB 78 */	mr r4, r31
/* 80266C24 00263B64  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80266C28 00263B68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266C2C 00263B6C  38 61 00 08 */	addi r3, r1, 8
/* 80266C30 00263B70  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 80266C34 00263B74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80266C38 00263B78  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80266C3C 00263B7C  7D 89 03 A6 */	mtctr r12
/* 80266C40 00263B80  4E 80 04 21 */	bctrl 
/* 80266C44 00263B84  C0 21 00 08 */	lfs f1, 8(r1)
/* 80266C48 00263B88  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80266C4C 00263B8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80266C50 00263B90  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80266C54 00263B94  EC 3D 08 28 */	fsubs f1, f29, f1
/* 80266C58 00263B98  EC 5C 00 28 */	fsubs f2, f28, f0
/* 80266C5C 00263B9C  4B DC E4 AD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80266C60 00263BA0  48 1A AF 71 */	bl roundAng__Ff
/* 80266C64 00263BA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266C68 00263BA8  FF A0 08 90 */	fmr f29, f1
/* 80266C6C 00263BAC  7F E3 FB 78 */	mr r3, r31
/* 80266C70 00263BB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266C74 00263BB4  7D 89 03 A6 */	mtctr r12
/* 80266C78 00263BB8  4E 80 04 21 */	bctrl 
/* 80266C7C 00263BBC  FC 40 08 90 */	fmr f2, f1
/* 80266C80 00263BC0  FC 20 E8 90 */	fmr f1, f29
/* 80266C84 00263BC4  48 1A AF 79 */	bl angDist__Fff
/* 80266C88 00263BC8  EF C1 07 B2 */	fmuls f30, f1, f30
/* 80266C8C 00263BCC  C0 02 CB 64 */	lfs f0, lbl_8051AEC4@sda21(r2)
/* 80266C90 00263BD0  C0 22 CB 60 */	lfs f1, lbl_8051AEC0@sda21(r2)
/* 80266C94 00263BD4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80266C98 00263BD8  FC 40 F2 10 */	fabs f2, f30
/* 80266C9C 00263BDC  EC 21 00 32 */	fmuls f1, f1, f0
/* 80266CA0 00263BE0  FC 00 10 18 */	frsp f0, f2
/* 80266CA4 00263BE4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80266CA8 00263BE8  40 81 00 1C */	ble .L_80266CC4
/* 80266CAC 00263BEC  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 80266CB0 00263BF0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80266CB4 00263BF4  40 81 00 0C */	ble .L_80266CC0
/* 80266CB8 00263BF8  FF C0 08 90 */	fmr f30, f1
/* 80266CBC 00263BFC  48 00 00 08 */	b .L_80266CC4
.L_80266CC0:
/* 80266CC0 00263C00  FF C0 08 50 */	fneg f30, f1
.L_80266CC4:
/* 80266CC4 00263C04  7F E3 FB 78 */	mr r3, r31
/* 80266CC8 00263C08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266CCC 00263C0C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266CD0 00263C10  7D 89 03 A6 */	mtctr r12
/* 80266CD4 00263C14  4E 80 04 21 */	bctrl 
/* 80266CD8 00263C18  EC 3E 08 2A */	fadds f1, f30, f1
/* 80266CDC 00263C1C  48 1A AE F5 */	bl roundAng__Ff
/* 80266CE0 00263C20  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80266CE4 00263C24  7F E3 FB 78 */	mr r3, r31
/* 80266CE8 00263C28  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80266CEC 00263C2C  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80266CF0 00263C30  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266CF4 00263C34  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80266CF8 00263C38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266CFC 00263C3C  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 80266D00 00263C40  7D 89 03 A6 */	mtctr r12
/* 80266D04 00263C44  4E 80 04 21 */	bctrl 
/* 80266D08 00263C48  4B E6 8B 15 */	bl sin
/* 80266D0C 00263C4C  7F E3 FB 78 */	mr r3, r31
/* 80266D10 00263C50  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80266D14 00263C54  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266D18 00263C58  FF A0 08 18 */	frsp f29, f1
/* 80266D1C 00263C5C  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80266D20 00263C60  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80266D24 00263C64  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266D28 00263C68  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80266D2C 00263C6C  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 80266D30 00263C70  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80266D34 00263C74  7D 89 03 A6 */	mtctr r12
/* 80266D38 00263C78  4E 80 04 21 */	bctrl 
/* 80266D3C 00263C7C  4B E6 85 79 */	bl cos
/* 80266D40 00263C80  EC 1E 07 72 */	fmuls f0, f30, f29
/* 80266D44 00263C84  38 60 00 00 */	li r3, 0
/* 80266D48 00263C88  FC 20 08 18 */	frsp f1, f1
/* 80266D4C 00263C8C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80266D50 00263C90  EC 1E 00 72 */	fmuls f0, f30, f1
/* 80266D54 00263C94  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 80266D58 00263C98  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80266D5C:
/* 80266D5C 00263C9C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80266D60 00263CA0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80266D64 00263CA4  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80266D68 00263CA8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80266D6C 00263CAC  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80266D70 00263CB0  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80266D74 00263CB4  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80266D78 00263CB8  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80266D7C 00263CBC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80266D80 00263CC0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80266D84 00263CC4  7C 08 03 A6 */	mtlr r0
/* 80266D88 00263CC8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80266D8C 00263CCC  4E 80 00 20 */	blr 
.endfn moveBridgeSide__Q34Game4Ujia3ObjFv

.fn moveBridgeCentre__Q34Game4Ujia3ObjFv, global
/* 80266D90 00263CD0  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80266D94 00263CD4  7C 08 02 A6 */	mflr r0
/* 80266D98 00263CD8  90 01 00 94 */	stw r0, 0x94(r1)
/* 80266D9C 00263CDC  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80266DA0 00263CE0  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80266DA4 00263CE4  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80266DA8 00263CE8  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80266DAC 00263CEC  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80266DB0 00263CF0  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80266DB4 00263CF4  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80266DB8 00263CF8  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 80266DBC 00263CFC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80266DC0 00263D00  7C 7F 1B 78 */	mr r31, r3
/* 80266DC4 00263D04  38 61 00 38 */	addi r3, r1, 0x38
/* 80266DC8 00263D08  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 80266DCC 00263D0C  4B F8 81 69 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 80266DD0 00263D10  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 80266DD4 00263D14  38 61 00 2C */	addi r3, r1, 0x2c
/* 80266DD8 00263D18  C3 81 00 40 */	lfs f28, 0x40(r1)
/* 80266DDC 00263D1C  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 80266DE0 00263D20  4B F8 82 FD */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 80266DE4 00263D24  C0 22 CB 68 */	lfs f1, lbl_8051AEC8@sda21(r2)
/* 80266DE8 00263D28  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 80266DEC 00263D2C  C0 A1 00 34 */	lfs f5, 0x34(r1)
/* 80266DF0 00263D30  EC 61 00 32 */	fmuls f3, f1, f0
/* 80266DF4 00263D34  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 80266DF8 00263D38  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80266DFC 00263D3C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80266E00 00263D40  EC A5 00 F2 */	fmuls f5, f5, f3
/* 80266E04 00263D44  C0 02 CB 58 */	lfs f0, lbl_8051AEB8@sda21(r2)
/* 80266E08 00263D48  EC 84 00 F2 */	fmuls f4, f4, f3
/* 80266E0C 00263D4C  EF 9C 28 2A */	fadds f28, f28, f5
/* 80266E10 00263D50  EF BD 20 2A */	fadds f29, f29, f4
/* 80266E14 00263D54  EC 21 E0 28 */	fsubs f1, f1, f28
/* 80266E18 00263D58  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80266E1C 00263D5C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80266E20 00263D60  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80266E24 00263D64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80266E28 00263D68  40 80 00 80 */	bge .L_80266EA8
/* 80266E2C 00263D6C  7F E3 FB 78 */	mr r3, r31
/* 80266E30 00263D70  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80266E34 00263D74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266E38 00263D78  C0 22 CB 5C */	lfs f1, lbl_8051AEBC@sda21(r2)
/* 80266E3C 00263D7C  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 80266E40 00263D80  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266E44 00263D84  EF C1 00 32 */	fmuls f30, f1, f0
/* 80266E48 00263D88  7D 89 03 A6 */	mtctr r12
/* 80266E4C 00263D8C  4E 80 04 21 */	bctrl 
/* 80266E50 00263D90  4B E6 89 CD */	bl sin
/* 80266E54 00263D94  7F E3 FB 78 */	mr r3, r31
/* 80266E58 00263D98  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80266E5C 00263D9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266E60 00263DA0  FF A0 08 18 */	frsp f29, f1
/* 80266E64 00263DA4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80266E68 00263DA8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80266E6C 00263DAC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266E70 00263DB0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80266E74 00263DB4  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 80266E78 00263DB8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80266E7C 00263DBC  7D 89 03 A6 */	mtctr r12
/* 80266E80 00263DC0  4E 80 04 21 */	bctrl 
/* 80266E84 00263DC4  4B E6 84 31 */	bl cos
/* 80266E88 00263DC8  EC 1E 07 72 */	fmuls f0, f30, f29
/* 80266E8C 00263DCC  38 60 00 01 */	li r3, 1
/* 80266E90 00263DD0  FC 20 08 18 */	frsp f1, f1
/* 80266E94 00263DD4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80266E98 00263DD8  EC 1E 00 72 */	fmuls f0, f30, f1
/* 80266E9C 00263DDC  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 80266EA0 00263DE0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80266EA4 00263DE4  48 00 01 40 */	b .L_80266FE4
.L_80266EA8:
/* 80266EA8 00263DE8  7F E4 FB 78 */	mr r4, r31
/* 80266EAC 00263DEC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80266EB0 00263DF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266EB4 00263DF4  38 61 00 08 */	addi r3, r1, 8
/* 80266EB8 00263DF8  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 80266EBC 00263DFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80266EC0 00263E00  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80266EC4 00263E04  7D 89 03 A6 */	mtctr r12
/* 80266EC8 00263E08  4E 80 04 21 */	bctrl 
/* 80266ECC 00263E0C  C0 21 00 08 */	lfs f1, 8(r1)
/* 80266ED0 00263E10  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80266ED4 00263E14  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80266ED8 00263E18  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80266EDC 00263E1C  EC 3D 08 28 */	fsubs f1, f29, f1
/* 80266EE0 00263E20  EC 5C 00 28 */	fsubs f2, f28, f0
/* 80266EE4 00263E24  4B DC E2 25 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80266EE8 00263E28  48 1A AC E9 */	bl roundAng__Ff
/* 80266EEC 00263E2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266EF0 00263E30  FF A0 08 90 */	fmr f29, f1
/* 80266EF4 00263E34  7F E3 FB 78 */	mr r3, r31
/* 80266EF8 00263E38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266EFC 00263E3C  7D 89 03 A6 */	mtctr r12
/* 80266F00 00263E40  4E 80 04 21 */	bctrl 
/* 80266F04 00263E44  FC 40 08 90 */	fmr f2, f1
/* 80266F08 00263E48  FC 20 E8 90 */	fmr f1, f29
/* 80266F0C 00263E4C  48 1A AC F1 */	bl angDist__Fff
/* 80266F10 00263E50  EF C1 07 B2 */	fmuls f30, f1, f30
/* 80266F14 00263E54  C0 02 CB 64 */	lfs f0, lbl_8051AEC4@sda21(r2)
/* 80266F18 00263E58  C0 22 CB 60 */	lfs f1, lbl_8051AEC0@sda21(r2)
/* 80266F1C 00263E5C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80266F20 00263E60  FC 40 F2 10 */	fabs f2, f30
/* 80266F24 00263E64  EC 21 00 32 */	fmuls f1, f1, f0
/* 80266F28 00263E68  FC 00 10 18 */	frsp f0, f2
/* 80266F2C 00263E6C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80266F30 00263E70  40 81 00 1C */	ble .L_80266F4C
/* 80266F34 00263E74  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 80266F38 00263E78  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80266F3C 00263E7C  40 81 00 0C */	ble .L_80266F48
/* 80266F40 00263E80  FF C0 08 90 */	fmr f30, f1
/* 80266F44 00263E84  48 00 00 08 */	b .L_80266F4C
.L_80266F48:
/* 80266F48 00263E88  FF C0 08 50 */	fneg f30, f1
.L_80266F4C:
/* 80266F4C 00263E8C  7F E3 FB 78 */	mr r3, r31
/* 80266F50 00263E90  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266F54 00263E94  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266F58 00263E98  7D 89 03 A6 */	mtctr r12
/* 80266F5C 00263E9C  4E 80 04 21 */	bctrl 
/* 80266F60 00263EA0  EC 3E 08 2A */	fadds f1, f30, f1
/* 80266F64 00263EA4  48 1A AC 6D */	bl roundAng__Ff
/* 80266F68 00263EA8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80266F6C 00263EAC  7F E3 FB 78 */	mr r3, r31
/* 80266F70 00263EB0  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80266F74 00263EB4  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80266F78 00263EB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266F7C 00263EBC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80266F80 00263EC0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266F84 00263EC4  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 80266F88 00263EC8  7D 89 03 A6 */	mtctr r12
/* 80266F8C 00263ECC  4E 80 04 21 */	bctrl 
/* 80266F90 00263ED0  4B E6 88 8D */	bl sin
/* 80266F94 00263ED4  7F E3 FB 78 */	mr r3, r31
/* 80266F98 00263ED8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80266F9C 00263EDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80266FA0 00263EE0  FF A0 08 18 */	frsp f29, f1
/* 80266FA4 00263EE4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80266FA8 00263EE8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80266FAC 00263EEC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80266FB0 00263EF0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80266FB4 00263EF4  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 80266FB8 00263EF8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80266FBC 00263EFC  7D 89 03 A6 */	mtctr r12
/* 80266FC0 00263F00  4E 80 04 21 */	bctrl 
/* 80266FC4 00263F04  4B E6 82 F1 */	bl cos
/* 80266FC8 00263F08  EC 1E 07 72 */	fmuls f0, f30, f29
/* 80266FCC 00263F0C  38 60 00 00 */	li r3, 0
/* 80266FD0 00263F10  FC 20 08 18 */	frsp f1, f1
/* 80266FD4 00263F14  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80266FD8 00263F18  EC 1E 00 72 */	fmuls f0, f30, f1
/* 80266FDC 00263F1C  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 80266FE0 00263F20  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80266FE4:
/* 80266FE4 00263F24  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80266FE8 00263F28  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80266FEC 00263F2C  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80266FF0 00263F30  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80266FF4 00263F34  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80266FF8 00263F38  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80266FFC 00263F3C  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80267000 00263F40  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80267004 00263F44  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80267008 00263F48  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8026700C 00263F4C  7C 08 03 A6 */	mtlr r0
/* 80267010 00263F50  38 21 00 90 */	addi r1, r1, 0x90
/* 80267014 00263F54  4E 80 00 20 */	blr 
.endfn moveBridgeCentre__Q34Game4Ujia3ObjFv

.fn moveBridgeTop__Q34Game4Ujia3ObjFv, global
/* 80267018 00263F58  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8026701C 00263F5C  7C 08 02 A6 */	mflr r0
/* 80267020 00263F60  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80267024 00263F64  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80267028 00263F68  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8026702C 00263F6C  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80267030 00263F70  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80267034 00263F74  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80267038 00263F78  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8026703C 00263F7C  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80267040 00263F80  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80267044 00263F84  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 80267048 00263F88  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 8026704C 00263F8C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80267050 00263F90  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80267054 00263F94  7C 7E 1B 78 */	mr r30, r3
/* 80267058 00263F98  38 61 00 44 */	addi r3, r1, 0x44
/* 8026705C 00263F9C  80 9E 02 C8 */	lwz r4, 0x2c8(r30)
/* 80267060 00263FA0  80 A4 02 18 */	lwz r5, 0x218(r4)
/* 80267064 00263FA4  3B E5 FF FF */	addi r31, r5, -1
/* 80267068 00263FA8  7F E5 FB 78 */	mr r5, r31
/* 8026706C 00263FAC  4B F8 7D E1 */	bl getStagePos__Q34Game10ItemBridge4ItemFi
/* 80267070 00263FB0  C3 E1 00 44 */	lfs f31, 0x44(r1)
/* 80267074 00263FB4  38 61 00 38 */	addi r3, r1, 0x38
/* 80267078 00263FB8  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 8026707C 00263FBC  80 9E 02 C8 */	lwz r4, 0x2c8(r30)
/* 80267080 00263FC0  4B F8 80 5D */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 80267084 00263FC4  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80267088 00263FC8  2C 1F 00 00 */	cmpwi r31, 0
/* 8026708C 00263FCC  C0 1E 02 CC */	lfs f0, 0x2cc(r30)
/* 80267090 00263FD0  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80267094 00263FD4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80267098 00263FD8  EC 42 00 32 */	fmuls f2, f2, f0
/* 8026709C 00263FDC  EF FF 08 2A */	fadds f31, f31, f1
/* 802670A0 00263FE0  EF DE 10 2A */	fadds f30, f30, f2
/* 802670A4 00263FE4  40 81 00 2C */	ble .L_802670D0
/* 802670A8 00263FE8  80 9E 02 C8 */	lwz r4, 0x2c8(r30)
/* 802670AC 00263FEC  38 61 00 2C */	addi r3, r1, 0x2c
/* 802670B0 00263FF0  4B F8 7F 89 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 802670B4 00263FF4  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 802670B8 00263FF8  C0 02 CB 54 */	lfs f0, lbl_8051AEB4@sda21(r2)
/* 802670BC 00263FFC  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 802670C0 00264000  EC 21 00 32 */	fmuls f1, f1, f0
/* 802670C4 00264004  EC 42 00 32 */	fmuls f2, f2, f0
/* 802670C8 00264008  EF FF 08 2A */	fadds f31, f31, f1
/* 802670CC 0026400C  EF DE 10 2A */	fadds f30, f30, f2
.L_802670D0:
/* 802670D0 00264010  7F C4 F3 78 */	mr r4, r30
/* 802670D4 00264014  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802670D8 00264018  81 9E 00 00 */	lwz r12, 0(r30)
/* 802670DC 0026401C  38 61 00 08 */	addi r3, r1, 8
/* 802670E0 00264020  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 802670E4 00264024  81 8C 00 08 */	lwz r12, 8(r12)
/* 802670E8 00264028  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 802670EC 0026402C  7D 89 03 A6 */	mtctr r12
/* 802670F0 00264030  4E 80 04 21 */	bctrl 
/* 802670F4 00264034  C0 21 00 08 */	lfs f1, 8(r1)
/* 802670F8 00264038  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802670FC 0026403C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80267100 00264040  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80267104 00264044  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80267108 00264048  EC 5E 00 28 */	fsubs f2, f30, f0
/* 8026710C 0026404C  4B DC DF FD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80267110 00264050  48 1A AA C1 */	bl roundAng__Ff
/* 80267114 00264054  81 9E 00 00 */	lwz r12, 0(r30)
/* 80267118 00264058  FF 60 08 90 */	fmr f27, f1
/* 8026711C 0026405C  7F C3 F3 78 */	mr r3, r30
/* 80267120 00264060  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80267124 00264064  7D 89 03 A6 */	mtctr r12
/* 80267128 00264068  4E 80 04 21 */	bctrl 
/* 8026712C 0026406C  FC 40 08 90 */	fmr f2, f1
/* 80267130 00264070  FC 20 D8 90 */	fmr f1, f27
/* 80267134 00264074  48 1A AA C9 */	bl angDist__Fff
/* 80267138 00264078  EF A1 07 72 */	fmuls f29, f1, f29
/* 8026713C 0026407C  C0 02 CB 64 */	lfs f0, lbl_8051AEC4@sda21(r2)
/* 80267140 00264080  C0 22 CB 60 */	lfs f1, lbl_8051AEC0@sda21(r2)
/* 80267144 00264084  EC 00 07 32 */	fmuls f0, f0, f28
/* 80267148 00264088  FC 40 EA 10 */	fabs f2, f29
/* 8026714C 0026408C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80267150 00264090  FC 00 10 18 */	frsp f0, f2
/* 80267154 00264094  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80267158 00264098  40 81 00 1C */	ble .L_80267174
/* 8026715C 0026409C  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 80267160 002640A0  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80267164 002640A4  40 81 00 0C */	ble .L_80267170
/* 80267168 002640A8  FF A0 08 90 */	fmr f29, f1
/* 8026716C 002640AC  48 00 00 08 */	b .L_80267174
.L_80267170:
/* 80267170 002640B0  FF A0 08 50 */	fneg f29, f1
.L_80267174:
/* 80267174 002640B4  7F C3 F3 78 */	mr r3, r30
/* 80267178 002640B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026717C 002640BC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80267180 002640C0  7D 89 03 A6 */	mtctr r12
/* 80267184 002640C4  4E 80 04 21 */	bctrl 
/* 80267188 002640C8  EC 3D 08 2A */	fadds f1, f29, f1
/* 8026718C 002640CC  48 1A AA 45 */	bl roundAng__Ff
/* 80267190 002640D0  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 80267194 002640D4  C0 02 CB 24 */	lfs f0, lbl_8051AE84@sda21(r2)
/* 80267198 002640D8  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8026719C 002640DC  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 802671A0 002640E0  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 802671A4 002640E4  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 802671A8 002640E8  EC 21 F0 28 */	fsubs f1, f1, f30
/* 802671AC 002640EC  EC 42 F8 28 */	fsubs f2, f2, f31
/* 802671B0 002640F0  EC 21 00 72 */	fmuls f1, f1, f1
/* 802671B4 002640F4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802671B8 002640F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802671BC 002640FC  40 80 00 1C */	bge .L_802671D8
/* 802671C0 00264100  C0 02 CB 1C */	lfs f0, lbl_8051AE7C@sda21(r2)
/* 802671C4 00264104  38 60 00 01 */	li r3, 1
/* 802671C8 00264108  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802671CC 0026410C  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 802671D0 00264110  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 802671D4 00264114  48 00 00 F4 */	b .L_802672C8
.L_802671D8:
/* 802671D8 00264118  C0 02 CB 58 */	lfs f0, lbl_8051AEB8@sda21(r2)
/* 802671DC 0026411C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802671E0 00264120  40 80 00 78 */	bge .L_80267258
/* 802671E4 00264124  7F C3 F3 78 */	mr r3, r30
/* 802671E8 00264128  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 802671EC 0026412C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802671F0 00264130  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 802671F4 00264134  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802671F8 00264138  7D 89 03 A6 */	mtctr r12
/* 802671FC 0026413C  4E 80 04 21 */	bctrl 
/* 80267200 00264140  4B E6 86 1D */	bl sin
/* 80267204 00264144  7F C3 F3 78 */	mr r3, r30
/* 80267208 00264148  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8026720C 0026414C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80267210 00264150  FF 60 08 18 */	frsp f27, f1
/* 80267214 00264154  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 80267218 00264158  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8026721C 0026415C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80267220 00264160  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80267224 00264164  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 80267228 00264168  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026722C 0026416C  7D 89 03 A6 */	mtctr r12
/* 80267230 00264170  4E 80 04 21 */	bctrl 
/* 80267234 00264174  4B E6 80 81 */	bl cos
/* 80267238 00264178  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8026723C 0026417C  38 60 00 01 */	li r3, 1
/* 80267240 00264180  FC 20 08 18 */	frsp f1, f1
/* 80267244 00264184  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 80267248 00264188  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8026724C 0026418C  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 80267250 00264190  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 80267254 00264194  48 00 00 74 */	b .L_802672C8
.L_80267258:
/* 80267258 00264198  7F C3 F3 78 */	mr r3, r30
/* 8026725C 0026419C  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 80267260 002641A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80267264 002641A4  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 80267268 002641A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026726C 002641AC  7D 89 03 A6 */	mtctr r12
/* 80267270 002641B0  4E 80 04 21 */	bctrl 
/* 80267274 002641B4  4B E6 85 A9 */	bl sin
/* 80267278 002641B8  7F C3 F3 78 */	mr r3, r30
/* 8026727C 002641BC  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 80267280 002641C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80267284 002641C4  FF 60 08 18 */	frsp f27, f1
/* 80267288 002641C8  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8026728C 002641CC  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 80267290 002641D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80267294 002641D4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80267298 002641D8  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8026729C 002641DC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802672A0 002641E0  7D 89 03 A6 */	mtctr r12
/* 802672A4 002641E4  4E 80 04 21 */	bctrl 
/* 802672A8 002641E8  4B E6 80 0D */	bl cos
/* 802672AC 002641EC  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 802672B0 002641F0  38 60 00 00 */	li r3, 0
/* 802672B4 002641F4  FC 20 08 18 */	frsp f1, f1
/* 802672B8 002641F8  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802672BC 002641FC  EC 1C 00 72 */	fmuls f0, f28, f1
/* 802672C0 00264200  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 802672C4 00264204  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_802672C8:
/* 802672C8 00264208  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 802672CC 0026420C  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 802672D0 00264210  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 802672D4 00264214  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 802672D8 00264218  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 802672DC 0026421C  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 802672E0 00264220  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 802672E4 00264224  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 802672E8 00264228  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 802672EC 0026422C  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 802672F0 00264230  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802672F4 00264234  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802672F8 00264238  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802672FC 0026423C  7C 08 03 A6 */	mtlr r0
/* 80267300 00264240  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80267304 00264244  4E 80 00 20 */	blr 
.endfn moveBridgeTop__Q34Game4Ujia3ObjFv

.fn breakTargetBridge__Q34Game4Ujia3ObjFv, global
/* 80267308 00264248  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026730C 0026424C  7C 08 02 A6 */	mflr r0
/* 80267310 00264250  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80267314 00264254  3C A0 80 4B */	lis r5, __vt__Q24Game19InteractBreakBridge@ha
/* 80267318 00264258  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026731C 0026425C  38 C4 A3 00 */	addi r6, r4, __vt__Q24Game11Interaction@l
/* 80267320 00264260  38 05 74 9C */	addi r0, r5, __vt__Q24Game19InteractBreakBridge@l
/* 80267324 00264264  38 81 00 08 */	addi r4, r1, 8
/* 80267328 00264268  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 8026732C 0026426C  C0 07 08 1C */	lfs f0, 0x81c(r7)
/* 80267330 00264270  90 C1 00 08 */	stw r6, 8(r1)
/* 80267334 00264274  90 61 00 0C */	stw r3, 0xc(r1)
/* 80267338 00264278  90 01 00 08 */	stw r0, 8(r1)
/* 8026733C 0026427C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80267340 00264280  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 80267344 00264284  81 83 00 00 */	lwz r12, 0(r3)
/* 80267348 00264288  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026734C 0026428C  7D 89 03 A6 */	mtctr r12
/* 80267350 00264290  4E 80 04 21 */	bctrl 
/* 80267354 00264294  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80267358 00264298  7C 08 03 A6 */	mtlr r0
/* 8026735C 0026429C  38 21 00 20 */	addi r1, r1, 0x20
/* 80267360 002642A0  4E 80 00 20 */	blr 
.endfn breakTargetBridge__Q34Game4Ujia3ObjFv

.fn createAppearEffect__Q34Game4Ujia3ObjFv, global
/* 80267364 002642A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80267368 002642A8  7C 08 02 A6 */	mflr r0
/* 8026736C 002642AC  3C 80 80 48 */	lis r4, lbl_80485B28@ha
/* 80267370 002642B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80267374 002642B4  38 84 5B 28 */	addi r4, r4, lbl_80485B28@l
/* 80267378 002642B8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8026737C 002642BC  48 1D 7C 69 */	bl getJoint__Q28SysShape5ModelFPc
/* 80267380 002642C0  48 1C 25 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80267384 002642C4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80267388 002642C8  38 C0 00 00 */	li r6, 0
/* 8026738C 002642CC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80267390 002642D0  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 80267394 002642D4  90 01 00 08 */	stw r0, 8(r1)
/* 80267398 002642D8  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8026739C 002642DC  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802673A0 002642E0  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoAp@ha
/* 802673A4 002642E4  90 01 00 08 */	stw r0, 8(r1)
/* 802673A8 002642E8  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802673AC 002642EC  38 E0 01 CE */	li r7, 0x1ce
/* 802673B0 002642F0  38 A0 01 CF */	li r5, 0x1cf
/* 802673B4 002642F4  90 01 00 08 */	stw r0, 8(r1)
/* 802673B8 002642F8  38 04 29 34 */	addi r0, r4, __vt__Q23efx9TUjinkoAp@l
/* 802673BC 002642FC  38 80 00 00 */	li r4, 0
/* 802673C0 00264300  90 61 00 18 */	stw r3, 0x18(r1)
/* 802673C4 00264304  38 61 00 08 */	addi r3, r1, 8
/* 802673C8 00264308  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802673CC 0026430C  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 802673D0 00264310  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802673D4 00264314  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802673D8 00264318  90 01 00 08 */	stw r0, 8(r1)
/* 802673DC 0026431C  48 14 7F BD */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 802673E0 00264320  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802673E4 00264324  7C 08 03 A6 */	mtlr r0
/* 802673E8 00264328  38 21 00 20 */	addi r1, r1, 0x20
/* 802673EC 0026432C  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game4Ujia3ObjFv

.fn createDisAppearEffect__Q34Game4Ujia3ObjFv, global
/* 802673F0 00264330  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802673F4 00264334  7C 08 02 A6 */	mflr r0
/* 802673F8 00264338  3C 80 80 48 */	lis r4, lbl_80485B28@ha
/* 802673FC 0026433C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80267400 00264340  38 84 5B 28 */	addi r4, r4, lbl_80485B28@l
/* 80267404 00264344  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80267408 00264348  48 1D 7B DD */	bl getJoint__Q28SysShape5ModelFPc
/* 8026740C 0026434C  48 1C 24 95 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80267410 00264350  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80267414 00264354  38 C0 00 00 */	li r6, 0
/* 80267418 00264358  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8026741C 0026435C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 80267420 00264360  90 01 00 08 */	stw r0, 8(r1)
/* 80267424 00264364  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 80267428 00264368  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8026742C 0026436C  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoHd@ha
/* 80267430 00264370  90 01 00 08 */	stw r0, 8(r1)
/* 80267434 00264374  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 80267438 00264378  38 E0 01 D1 */	li r7, 0x1d1
/* 8026743C 0026437C  38 A0 01 D2 */	li r5, 0x1d2
/* 80267440 00264380  90 01 00 08 */	stw r0, 8(r1)
/* 80267444 00264384  38 04 29 20 */	addi r0, r4, __vt__Q23efx9TUjinkoHd@l
/* 80267448 00264388  38 80 00 00 */	li r4, 0
/* 8026744C 0026438C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80267450 00264390  38 61 00 08 */	addi r3, r1, 8
/* 80267454 00264394  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 80267458 00264398  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8026745C 0026439C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80267460 002643A0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80267464 002643A4  90 01 00 08 */	stw r0, 8(r1)
/* 80267468 002643A8  48 14 7F 31 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8026746C 002643AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80267470 002643B0  7C 08 03 A6 */	mtlr r0
/* 80267474 002643B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80267478 002643B8  4E 80 00 20 */	blr 
.endfn createDisAppearEffect__Q34Game4Ujia3ObjFv

.fn createBridgeEffect__Q34Game4Ujia3ObjFv, global
/* 8026747C 002643BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80267480 002643C0  7C 08 02 A6 */	mflr r0
/* 80267484 002643C4  38 82 CB 6C */	addi r4, r2, lbl_8051AECC@sda21
/* 80267488 002643C8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026748C 002643CC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80267490 002643D0  48 1D 7B 55 */	bl getJoint__Q28SysShape5ModelFPc
/* 80267494 002643D4  48 1C 24 0D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80267498 002643D8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026749C 002643DC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802674A0 002643E0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802674A4 002643E4  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 802674A8 002643E8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802674AC 002643EC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802674B0 002643F0  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802674B4 002643F4  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802674B8 002643F8  90 81 00 08 */	stw r4, 8(r1)
/* 802674BC 002643FC  3C 60 80 4C */	lis r3, __vt__Q23efx10TUjinkoEat@ha
/* 802674C0 00264400  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 802674C4 00264404  38 C0 01 D0 */	li r6, 0x1d0
/* 802674C8 00264408  38 A0 00 00 */	li r5, 0
/* 802674CC 0026440C  90 01 00 08 */	stw r0, 8(r1)
/* 802674D0 00264410  38 03 29 0C */	addi r0, r3, __vt__Q23efx10TUjinkoEat@l
/* 802674D4 00264414  38 61 00 08 */	addi r3, r1, 8
/* 802674D8 00264418  90 81 00 14 */	stw r4, 0x14(r1)
/* 802674DC 0026441C  38 81 00 14 */	addi r4, r1, 0x14
/* 802674E0 00264420  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802674E4 00264424  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802674E8 00264428  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802674EC 0026442C  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802674F0 00264430  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802674F4 00264434  90 01 00 08 */	stw r0, 8(r1)
/* 802674F8 00264438  48 14 7A 8D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802674FC 0026443C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80267500 00264440  7C 08 03 A6 */	mtlr r0
/* 80267504 00264444  38 21 00 30 */	addi r1, r1, 0x30
/* 80267508 00264448  4E 80 00 20 */	blr 
.endfn createBridgeEffect__Q34Game4Ujia3ObjFv

.fn isUnderground__Q34Game4Ujia3ObjFv, weak
/* 8026750C 0026444C  88 63 02 C1 */	lbz r3, 0x2c1(r3)
/* 80267510 00264450  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game4Ujia3ObjFv

.fn getDownSmokeScale__Q34Game4Ujia3ObjFv, weak
/* 80267514 00264454  C0 22 CB 74 */	lfs f1, lbl_8051AED4@sda21(r2)
/* 80267518 00264458  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game4Ujia3ObjFv

.fn getEnemyTypeID__Q34Game4Ujia3ObjFv, weak
/* 8026751C 0026445C  38 60 00 0C */	li r3, 0xc
/* 80267520 00264460  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game4Ujia3ObjFv

.fn "@724@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 80267524 00264464  39 60 00 0C */	li r11, 0xc
/* 80267528 00264468  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026752C 0026446C  7C 63 5A 14 */	add r3, r3, r11
/* 80267530 00264470  38 63 FD 2C */	addi r3, r3, -724
/* 80267534 00264474  4B E9 F3 E8 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@724@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@724@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80267538 00264478  39 60 00 0C */	li r11, 0xc
/* 8026753C 0026447C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80267540 00264480  7C 63 5A 14 */	add r3, r3, r11
/* 80267544 00264484  38 63 FD 2C */	addi r3, r3, -724
/* 80267548 00264488  4B E9 F1 60 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@724@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@724@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8026754C 0026448C  39 60 00 0C */	li r11, 0xc
/* 80267550 00264490  7D 63 58 2E */	lwzx r11, r3, r11
/* 80267554 00264494  7C 63 5A 14 */	add r3, r3, r11
/* 80267558 00264498  38 63 FD 2C */	addi r3, r3, -724
/* 8026755C 0026449C  4B E9 F1 6C */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@724@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@724@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80267560 002644A0  39 60 00 0C */	li r11, 0xc
/* 80267564 002644A4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80267568 002644A8  7C 63 5A 14 */	add r3, r3, r11
/* 8026756C 002644AC  38 63 FD 2C */	addi r3, r3, -724
/* 80267570 002644B0  4B E9 F5 08 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@724@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@724@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80267574 002644B4  39 60 00 0C */	li r11, 0xc
/* 80267578 002644B8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026757C 002644BC  7C 63 5A 14 */	add r3, r3, r11
/* 80267580 002644C0  38 63 FD 2C */	addi r3, r3, -724
/* 80267584 002644C4  4B E9 F4 C8 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@724@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@724@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 80267588 002644C8  39 60 00 0C */	li r11, 0xc
/* 8026758C 002644CC  7D 63 58 2E */	lwzx r11, r3, r11
/* 80267590 002644D0  7C 63 5A 14 */	add r3, r3, r11
/* 80267594 002644D4  38 63 FD 2C */	addi r3, r3, -724
/* 80267598 002644D8  4B E9 F1 08 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@724@12@viewGetShape__Q24Game9EnemyBaseFv"
