.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048AC30, local
	.asciz "koshi1jnt"
.endobj lbl_8048AC30
.balign 4
.obj lbl_8048AC3C, local
	.asciz "imomushi"
.endobj lbl_8048AC3C
.balign 4
.obj lbl_8048AC48, local
	.asciz "ArgImoEat"
.endobj lbl_8048AC48

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx9ArgImoEat, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx9ArgImoEatFv
.endobj __vt__Q23efx9ArgImoEat
.obj __vt__Q34Game8Imomushi3Obj, global
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
	.4byte onInit__Q34Game8Imomushi3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game8Imomushi3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game8Imomushi3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game8Imomushi3ObjFv
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
	.4byte getShadowParam__Q34Game8Imomushi3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game8Imomushi3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game8Imomushi3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game8Imomushi3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q34Game8Imomushi3ObjFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game8Imomushi3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game8Imomushi3ObjFv
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
	.4byte dropCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game8Imomushi3ObjFv
	.4byte doFinishStoneState__Q34Game8Imomushi3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q34Game8Imomushi3ObjFf
	.4byte doFinishEarthquakeState__Q34Game8Imomushi3ObjFv
	.4byte doStartEarthquakeFitState__Q34Game8Imomushi3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game8Imomushi3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game8Imomushi3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game8Imomushi3ObjFv
	.4byte doStartMovie__Q34Game8Imomushi3ObjFv
	.4byte doEndMovie__Q34Game8Imomushi3ObjFv
	.4byte setFSM__Q34Game8Imomushi3ObjFPQ34Game8Imomushi3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@784@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@784@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game8Imomushi3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051C3C0, local
	.float 0.0
.endobj lbl_8051C3C0
.obj lbl_8051C3C4, local
	.float 1.0
.endobj lbl_8051C3C4
.obj lbl_8051C3C8, local
	.float 5.0
.endobj lbl_8051C3C8
.obj lbl_8051C3CC, local
	.float 0.1
.endobj lbl_8051C3CC
.obj lbl_8051C3D0, local
	.float 50.0
.endobj lbl_8051C3D0
.obj lbl_8051C3D4, local
	.float 15.0
.endobj lbl_8051C3D4
.obj lbl_8051C3D8, local
	.float 7.0
.endobj lbl_8051C3D8
.obj lbl_8051C3DC, local
	.float 0.5
.endobj lbl_8051C3DC
.obj lbl_8051C3E0, local
	.float 32768.0
.endobj lbl_8051C3E0
.balign 8
.obj lbl_8051C3E8, local
	.8byte 0x4330000080000000
.endobj lbl_8051C3E8
.obj lbl_8051C3F0, local
	.float 150.0
.endobj lbl_8051C3F0
.obj lbl_8051C3F4, local # pi
	.float 3.1415927
.endobj lbl_8051C3F4
.obj lbl_8051C3F8, local # pi/2
	.float 1.5707964
.endobj lbl_8051C3F8
.obj lbl_8051C3FC, local
	.float 325.9493
.endobj lbl_8051C3FC
.obj lbl_8051C400, local
	.float -325.9493
.endobj lbl_8051C400
.obj lbl_8051C404, local
	.float 500.0
.endobj lbl_8051C404
.balign 4
.obj lbl_8051C408, local
	.asciz "headjnt"
.endobj lbl_8051C408
.balign 4
.obj lbl_8051C410, local
	.float 0.42
.endobj lbl_8051C410

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game8Imomushi3ObjFv, global
/* 802BC138 002B9078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC13C 002B907C  7C 08 02 A6 */	mflr r0
/* 802BC140 002B9080  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC144 002B9084  7C 80 07 35 */	extsh. r0, r4
/* 802BC148 002B9088  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BC14C 002B908C  7C 7F 1B 78 */	mr r31, r3
/* 802BC150 002B9090  93 C1 00 08 */	stw r30, 8(r1)
/* 802BC154 002B9094  41 82 00 24 */	beq .L_802BC178
/* 802BC158 002B9098  38 1F 03 10 */	addi r0, r31, 0x310
/* 802BC15C 002B909C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802BC160 002B90A0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802BC164 002B90A4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802BC168 002B90A8  38 00 00 00 */	li r0, 0
/* 802BC16C 002B90AC  90 7F 03 10 */	stw r3, 0x310(r31)
/* 802BC170 002B90B0  90 1F 03 14 */	stw r0, 0x314(r31)
/* 802BC174 002B90B4  90 1F 03 18 */	stw r0, 0x318(r31)
.L_802BC178:
/* 802BC178 002B90B8  7F E3 FB 78 */	mr r3, r31
/* 802BC17C 002B90BC  38 80 00 00 */	li r4, 0
/* 802BC180 002B90C0  4B E4 52 21 */	bl __ct__Q24Game9EnemyBaseFv
/* 802BC184 002B90C4  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi3Obj@ha
/* 802BC188 002B90C8  38 1F 03 10 */	addi r0, r31, 0x310
/* 802BC18C 002B90CC  38 A3 09 04 */	addi r5, r3, __vt__Q34Game8Imomushi3Obj@l
/* 802BC190 002B90D0  38 60 00 2C */	li r3, 0x2c
/* 802BC194 002B90D4  90 BF 00 00 */	stw r5, 0(r31)
/* 802BC198 002B90D8  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802BC19C 002B90DC  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802BC1A0 002B90E0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802BC1A4 002B90E4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802BC1A8 002B90E8  90 A4 00 00 */	stw r5, 0(r4)
/* 802BC1AC 002B90EC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802BC1B0 002B90F0  7C 04 00 50 */	subf r0, r4, r0
/* 802BC1B4 002B90F4  90 04 00 0C */	stw r0, 0xc(r4)
/* 802BC1B8 002B90F8  4B D6 7C ED */	bl __nw__FUl
/* 802BC1BC 002B90FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802BC1C0 002B9100  41 82 00 44 */	beq .L_802BC204
/* 802BC1C4 002B9104  4B E6 B7 B1 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802BC1C8 002B9108  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi14ProperAnimator@ha
/* 802BC1CC 002B910C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802BC1D0 002B9110  38 03 07 E0 */	addi r0, r3, __vt__Q34Game8Imomushi14ProperAnimator@l
/* 802BC1D4 002B9114  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802BC1D8 002B9118  90 1E 00 00 */	stw r0, 0(r30)
/* 802BC1DC 002B911C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802BC1E0 002B9120  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802BC1E4 002B9124  38 00 00 00 */	li r0, 0
/* 802BC1E8 002B9128  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802BC1EC 002B912C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802BC1F0 002B9130  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802BC1F4 002B9134  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802BC1F8 002B9138  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802BC1FC 002B913C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802BC200 002B9140  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802BC204:
/* 802BC204 002B9144  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802BC208 002B9148  38 60 00 1C */	li r3, 0x1c
/* 802BC20C 002B914C  4B D6 7C 99 */	bl __nw__FUl
/* 802BC210 002B9150  7C 64 1B 79 */	or. r4, r3, r3
/* 802BC214 002B9154  41 82 00 24 */	beq .L_802BC238
/* 802BC218 002B9158  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802BC21C 002B915C  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi3FSM@ha
/* 802BC220 002B9160  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802BC224 002B9164  38 A0 FF FF */	li r5, -1
/* 802BC228 002B9168  90 04 00 00 */	stw r0, 0(r4)
/* 802BC22C 002B916C  38 03 07 BC */	addi r0, r3, __vt__Q34Game8Imomushi3FSM@l
/* 802BC230 002B9170  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802BC234 002B9174  90 04 00 00 */	stw r0, 0(r4)
.L_802BC238:
/* 802BC238 002B9178  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BC23C 002B917C  7F E3 FB 78 */	mr r3, r31
/* 802BC240 002B9180  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802BC244 002B9184  7D 89 03 A6 */	mtctr r12
/* 802BC248 002B9188  4E 80 04 21 */	bctrl 
/* 802BC24C 002B918C  7F E3 FB 78 */	mr r3, r31
/* 802BC250 002B9190  48 00 14 55 */	bl createEffect__Q34Game8Imomushi3ObjFv
/* 802BC254 002B9194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC258 002B9198  7F E3 FB 78 */	mr r3, r31
/* 802BC25C 002B919C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BC260 002B91A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BC264 002B91A4  7C 08 03 A6 */	mtlr r0
/* 802BC268 002B91A8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC26C 002B91AC  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8Imomushi3ObjFv

.fn setInitialSetting__Q34Game8Imomushi3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802BC270 002B91B0  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game8Imomushi3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game8Imomushi3ObjFPQ24Game15CreatureInitArg, global
/* 802BC274 002B91B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC278 002B91B8  7C 08 02 A6 */	mflr r0
/* 802BC27C 002B91BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC280 002B91C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BC284 002B91C4  7C 7F 1B 78 */	mr r31, r3
/* 802BC288 002B91C8  4B E4 57 D1 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802BC28C 002B91CC  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802BC290 002B91D0  38 80 00 00 */	li r4, 0
/* 802BC294 002B91D4  38 00 FF FF */	li r0, -1
/* 802BC298 002B91D8  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BC29C 002B91DC  54 65 05 66 */	rlwinm r5, r3, 0, 0x15, 0x13
/* 802BC2A0 002B91E0  7F E3 FB 78 */	mr r3, r31
/* 802BC2A4 002B91E4  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802BC2A8 002B91E8  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802BC2AC 002B91EC  54 A5 06 B0 */	rlwinm r5, r5, 0, 0x1a, 0x18
/* 802BC2B0 002B91F0  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802BC2B4 002B91F4  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802BC2B8 002B91F8  54 A5 06 2C */	rlwinm r5, r5, 0, 0x18, 0x16
/* 802BC2BC 002B91FC  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802BC2C0 002B9200  98 9F 02 C0 */	stb r4, 0x2c0(r31)
/* 802BC2C4 002B9204  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BC2C8 002B9208  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802BC2CC 002B920C  48 00 0A B5 */	bl resetStickDiff__Q34Game8Imomushi3ObjFv
/* 802BC2D0 002B9210  7F E3 FB 78 */	mr r3, r31
/* 802BC2D4 002B9214  48 00 15 0D */	bl setupEffect__Q34Game8Imomushi3ObjFv
/* 802BC2D8 002B9218  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802BC2DC 002B921C  28 03 00 00 */	cmplwi r3, 0
/* 802BC2E0 002B9220  41 82 00 34 */	beq .L_802BC314
/* 802BC2E4 002B9224  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802BC2E8 002B9228  2C 00 00 04 */	cmpwi r0, 4
/* 802BC2EC 002B922C  40 82 00 28 */	bne .L_802BC314
/* 802BC2F0 002B9230  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802BC2F4 002B9234  7F E4 FB 78 */	mr r4, r31
/* 802BC2F8 002B9238  38 A0 00 0B */	li r5, 0xb
/* 802BC2FC 002B923C  38 C0 00 00 */	li r6, 0
/* 802BC300 002B9240  81 83 00 00 */	lwz r12, 0(r3)
/* 802BC304 002B9244  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802BC308 002B9248  7D 89 03 A6 */	mtctr r12
/* 802BC30C 002B924C  4E 80 04 21 */	bctrl 
/* 802BC310 002B9250  48 00 00 38 */	b .L_802BC348
.L_802BC314:
/* 802BC314 002B9254  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802BC318 002B9258  7F E4 FB 78 */	mr r4, r31
/* 802BC31C 002B925C  38 A0 00 04 */	li r5, 4
/* 802BC320 002B9260  38 C0 00 00 */	li r6, 0
/* 802BC324 002B9264  81 83 00 00 */	lwz r12, 0(r3)
/* 802BC328 002B9268  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802BC32C 002B926C  7D 89 03 A6 */	mtctr r12
/* 802BC330 002B9270  4E 80 04 21 */	bctrl 
/* 802BC334 002B9274  7F E3 FB 78 */	mr r3, r31
/* 802BC338 002B9278  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BC33C 002B927C  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802BC340 002B9280  7D 89 03 A6 */	mtctr r12
/* 802BC344 002B9284  4E 80 04 21 */	bctrl 
.L_802BC348:
/* 802BC348 002B9288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC34C 002B928C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BC350 002B9290  7C 08 03 A6 */	mtlr r0
/* 802BC354 002B9294  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC358 002B9298  4E 80 00 20 */	blr 
.endfn onInit__Q34Game8Imomushi3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game8Imomushi3ObjFPQ24Game15CreatureKillArg, global
/* 802BC35C 002B929C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC360 002B92A0  7C 08 02 A6 */	mflr r0
/* 802BC364 002B92A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC368 002B92A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BC36C 002B92AC  7C 9F 23 78 */	mr r31, r4
/* 802BC370 002B92B0  93 C1 00 08 */	stw r30, 8(r1)
/* 802BC374 002B92B4  7C 7E 1B 78 */	mr r30, r3
/* 802BC378 002B92B8  48 00 16 45 */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BC37C 002B92BC  7F C3 F3 78 */	mr r3, r30
/* 802BC380 002B92C0  7F E4 FB 78 */	mr r4, r31
/* 802BC384 002B92C4  4B E4 5B 65 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802BC388 002B92C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC38C 002B92CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BC390 002B92D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BC394 002B92D4  7C 08 03 A6 */	mtlr r0
/* 802BC398 002B92D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC39C 002B92DC  4E 80 00 20 */	blr 
.endfn onKill__Q34Game8Imomushi3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game8Imomushi3ObjFv, global
/* 802BC3A0 002B92E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC3A4 002B92E4  7C 08 02 A6 */	mflr r0
/* 802BC3A8 002B92E8  7C 64 1B 78 */	mr r4, r3
/* 802BC3AC 002B92EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC3B0 002B92F0  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802BC3B4 002B92F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802BC3B8 002B92F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802BC3BC 002B92FC  7D 89 03 A6 */	mtctr r12
/* 802BC3C0 002B9300  4E 80 04 21 */	bctrl 
/* 802BC3C4 002B9304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC3C8 002B9308  7C 08 03 A6 */	mtlr r0
/* 802BC3CC 002B930C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC3D0 002B9310  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game8Imomushi3ObjFv

.fn doAnimationStick__Q34Game8Imomushi3ObjFv, global
/* 802BC3D4 002B9314  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802BC3D8 002B9318  7C 08 02 A6 */	mflr r0
/* 802BC3DC 002B931C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802BC3E0 002B9320  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802BC3E4 002B9324  7C 7F 1B 78 */	mr r31, r3
/* 802BC3E8 002B9328  80 63 00 F8 */	lwz r3, 0xf8(r3)
/* 802BC3EC 002B932C  88 03 00 58 */	lbz r0, 0x58(r3)
/* 802BC3F0 002B9330  28 00 00 00 */	cmplwi r0, 0
/* 802BC3F4 002B9334  40 82 01 08 */	bne .L_802BC4FC
/* 802BC3F8 002B9338  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802BC3FC 002B933C  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 802BC400 002B9340  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802BC404 002B9344  EC 61 00 28 */	fsubs f3, f1, f0
/* 802BC408 002B9348  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802BC40C 002B934C  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802BC410 002B9350  EC 82 00 28 */	fsubs f4, f2, f0
/* 802BC414 002B9354  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 802BC418 002B9358  EC A3 00 F2 */	fmuls f5, f3, f3
/* 802BC41C 002B935C  EC 41 00 28 */	fsubs f2, f1, f0
/* 802BC420 002B9360  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BC424 002B9364  EC C4 01 32 */	fmuls f6, f4, f4
/* 802BC428 002B9368  EC 22 28 BA */	fmadds f1, f2, f2, f5
/* 802BC42C 002B936C  EC 26 08 2A */	fadds f1, f6, f1
/* 802BC430 002B9370  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BC434 002B9374  40 81 00 14 */	ble .L_802BC448
/* 802BC438 002B9378  40 81 00 14 */	ble .L_802BC44C
/* 802BC43C 002B937C  FC 00 08 34 */	frsqrte f0, f1
/* 802BC440 002B9380  EC 20 00 72 */	fmuls f1, f0, f1
/* 802BC444 002B9384  48 00 00 08 */	b .L_802BC44C
.L_802BC448:
/* 802BC448 002B9388  FC 20 00 90 */	fmr f1, f0
.L_802BC44C:
/* 802BC44C 002B938C  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BC450 002B9390  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BC454 002B9394  40 81 00 18 */	ble .L_802BC46C
/* 802BC458 002B9398  C0 02 E0 64 */	lfs f0, lbl_8051C3C4@sda21(r2)
/* 802BC45C 002B939C  EC 00 08 24 */	fdivs f0, f0, f1
/* 802BC460 002B93A0  EC 42 00 32 */	fmuls f2, f2, f0
/* 802BC464 002B93A4  EC 63 00 32 */	fmuls f3, f3, f0
/* 802BC468 002B93A8  EC 84 00 32 */	fmuls f4, f4, f0
.L_802BC46C:
/* 802BC46C 002B93AC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BC470 002B93B0  C0 1F 02 E4 */	lfs f0, 0x2e4(r31)
/* 802BC474 002B93B4  C0 23 08 BC */	lfs f1, 0x8bc(r3)
/* 802BC478 002B93B8  EC 42 00 72 */	fmuls f2, f2, f1
/* 802BC47C 002B93BC  EC 63 00 72 */	fmuls f3, f3, f1
/* 802BC480 002B93C0  EC 84 00 72 */	fmuls f4, f4, f1
/* 802BC484 002B93C4  EC 00 10 2A */	fadds f0, f0, f2
/* 802BC488 002B93C8  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802BC48C 002B93CC  C0 1F 02 E8 */	lfs f0, 0x2e8(r31)
/* 802BC490 002B93D0  EC 00 18 2A */	fadds f0, f0, f3
/* 802BC494 002B93D4  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802BC498 002B93D8  C0 1F 02 EC */	lfs f0, 0x2ec(r31)
/* 802BC49C 002B93DC  EC 00 20 2A */	fadds f0, f0, f4
/* 802BC4A0 002B93E0  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 802BC4A4 002B93E4  C0 FF 02 E8 */	lfs f7, 0x2e8(r31)
/* 802BC4A8 002B93E8  C0 DF 02 D8 */	lfs f6, 0x2d8(r31)
/* 802BC4AC 002B93EC  C0 BF 02 EC */	lfs f5, 0x2ec(r31)
/* 802BC4B0 002B93F0  C0 3F 02 DC */	lfs f1, 0x2dc(r31)
/* 802BC4B4 002B93F4  EC 07 01 B2 */	fmuls f0, f7, f6
/* 802BC4B8 002B93F8  C1 1F 02 E4 */	lfs f8, 0x2e4(r31)
/* 802BC4BC 002B93FC  C0 9F 02 E0 */	lfs f4, 0x2e0(r31)
/* 802BC4C0 002B9400  EC 65 00 72 */	fmuls f3, f5, f1
/* 802BC4C4 002B9404  EC 48 00 78 */	fmsubs f2, f8, f1, f0
/* 802BC4C8 002B9408  EC 28 01 32 */	fmuls f1, f8, f4
/* 802BC4CC 002B940C  EC 07 19 38 */	fmsubs f0, f7, f4, f3
/* 802BC4D0 002B9410  EC 62 01 F2 */	fmuls f3, f2, f7
/* 802BC4D4 002B9414  EC 25 09 B8 */	fmsubs f1, f5, f6, f1
/* 802BC4D8 002B9418  EC 80 01 72 */	fmuls f4, f0, f5
/* 802BC4DC 002B941C  EC A1 19 78 */	fmsubs f5, f1, f5, f3
/* 802BC4E0 002B9420  EC 61 02 32 */	fmuls f3, f1, f8
/* 802BC4E4 002B9424  EC 82 22 38 */	fmsubs f4, f2, f8, f4
/* 802BC4E8 002B9428  D0 BF 02 D8 */	stfs f5, 0x2d8(r31)
/* 802BC4EC 002B942C  EC 60 19 F8 */	fmsubs f3, f0, f7, f3
/* 802BC4F0 002B9430  D0 9F 02 DC */	stfs f4, 0x2dc(r31)
/* 802BC4F4 002B9434  D0 7F 02 E0 */	stfs f3, 0x2e0(r31)
/* 802BC4F8 002B9438  48 00 00 B4 */	b .L_802BC5AC
.L_802BC4FC:
/* 802BC4FC 002B943C  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802BC500 002B9440  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 802BC504 002B9444  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BC508 002B9448  EC A1 00 28 */	fsubs f5, f1, f0
/* 802BC50C 002B944C  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 802BC510 002B9450  C0 83 08 BC */	lfs f4, 0x8bc(r3)
/* 802BC514 002B9454  C0 7F 02 D0 */	lfs f3, 0x2d0(r31)
/* 802BC518 002B9458  EC A5 01 32 */	fmuls f5, f5, f4
/* 802BC51C 002B945C  C0 3F 02 DC */	lfs f1, 0x2dc(r31)
/* 802BC520 002B9460  C0 5F 02 D4 */	lfs f2, 0x2d4(r31)
/* 802BC524 002B9464  EC 63 08 28 */	fsubs f3, f3, f1
/* 802BC528 002B9468  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 802BC52C 002B946C  EC 00 28 2A */	fadds f0, f0, f5
/* 802BC530 002B9470  EC 22 08 28 */	fsubs f1, f2, f1
/* 802BC534 002B9474  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC538 002B9478  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802BC53C 002B947C  EC 21 01 32 */	fmuls f1, f1, f4
/* 802BC540 002B9480  C0 1F 02 DC */	lfs f0, 0x2dc(r31)
/* 802BC544 002B9484  EC 00 18 2A */	fadds f0, f0, f3
/* 802BC548 002B9488  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802BC54C 002B948C  C0 1F 02 E0 */	lfs f0, 0x2e0(r31)
/* 802BC550 002B9490  EC 00 08 2A */	fadds f0, f0, f1
/* 802BC554 002B9494  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 802BC558 002B9498  C0 DF 02 E0 */	lfs f6, 0x2e0(r31)
/* 802BC55C 002B949C  C0 7F 02 E4 */	lfs f3, 0x2e4(r31)
/* 802BC560 002B94A0  C0 BF 02 E8 */	lfs f5, 0x2e8(r31)
/* 802BC564 002B94A4  C0 FF 02 D8 */	lfs f7, 0x2d8(r31)
/* 802BC568 002B94A8  EC 23 01 B2 */	fmuls f1, f3, f6
/* 802BC56C 002B94AC  C0 5F 02 EC */	lfs f2, 0x2ec(r31)
/* 802BC570 002B94B0  C1 1F 02 DC */	lfs f8, 0x2dc(r31)
/* 802BC574 002B94B4  EC 05 01 F2 */	fmuls f0, f5, f7
/* 802BC578 002B94B8  EC 22 09 F8 */	fmsubs f1, f2, f7, f1
/* 802BC57C 002B94BC  EC 82 02 32 */	fmuls f4, f2, f8
/* 802BC580 002B94C0  EC 43 02 38 */	fmsubs f2, f3, f8, f0
/* 802BC584 002B94C4  EC 66 00 72 */	fmuls f3, f6, f1
/* 802BC588 002B94C8  EC 05 21 B8 */	fmsubs f0, f5, f6, f4
/* 802BC58C 002B94CC  EC 87 00 B2 */	fmuls f4, f7, f2
/* 802BC590 002B94D0  EC A8 18 B8 */	fmsubs f5, f8, f2, f3
/* 802BC594 002B94D4  EC 68 00 32 */	fmuls f3, f8, f0
/* 802BC598 002B94D8  EC 86 20 38 */	fmsubs f4, f6, f0, f4
/* 802BC59C 002B94DC  D0 BF 02 E4 */	stfs f5, 0x2e4(r31)
/* 802BC5A0 002B94E0  EC 67 18 78 */	fmsubs f3, f7, f1, f3
/* 802BC5A4 002B94E4  D0 9F 02 E8 */	stfs f4, 0x2e8(r31)
/* 802BC5A8 002B94E8  D0 7F 02 EC */	stfs f3, 0x2ec(r31)
.L_802BC5AC:
/* 802BC5AC 002B94EC  C0 BF 02 D8 */	lfs f5, 0x2d8(r31)
/* 802BC5B0 002B94F0  C0 9F 02 DC */	lfs f4, 0x2dc(r31)
/* 802BC5B4 002B94F4  EC 65 01 72 */	fmuls f3, f5, f5
/* 802BC5B8 002B94F8  C0 DF 02 E0 */	lfs f6, 0x2e0(r31)
/* 802BC5BC 002B94FC  EC E4 01 32 */	fmuls f7, f4, f4
/* 802BC5C0 002B9500  C0 82 E0 60 */	lfs f4, lbl_8051C3C0@sda21(r2)
/* 802BC5C4 002B9504  EC C6 01 B2 */	fmuls f6, f6, f6
/* 802BC5C8 002B9508  EC 63 38 2A */	fadds f3, f3, f7
/* 802BC5CC 002B950C  EC 66 18 2A */	fadds f3, f6, f3
/* 802BC5D0 002B9510  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 802BC5D4 002B9514  40 81 00 20 */	ble .L_802BC5F4
/* 802BC5D8 002B9518  EC 65 39 7A */	fmadds f3, f5, f5, f7
/* 802BC5DC 002B951C  EC A6 18 2A */	fadds f5, f6, f3
/* 802BC5E0 002B9520  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 802BC5E4 002B9524  40 81 00 14 */	ble .L_802BC5F8
/* 802BC5E8 002B9528  FC 60 28 34 */	frsqrte f3, f5
/* 802BC5EC 002B952C  EC A3 01 72 */	fmuls f5, f3, f5
/* 802BC5F0 002B9530  48 00 00 08 */	b .L_802BC5F8
.L_802BC5F4:
/* 802BC5F4 002B9534  FC A0 20 90 */	fmr f5, f4
.L_802BC5F8:
/* 802BC5F8 002B9538  C0 62 E0 60 */	lfs f3, lbl_8051C3C0@sda21(r2)
/* 802BC5FC 002B953C  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802BC600 002B9540  40 81 00 30 */	ble .L_802BC630
/* 802BC604 002B9544  C0 82 E0 64 */	lfs f4, lbl_8051C3C4@sda21(r2)
/* 802BC608 002B9548  C0 7F 02 D8 */	lfs f3, 0x2d8(r31)
/* 802BC60C 002B954C  EC 84 28 24 */	fdivs f4, f4, f5
/* 802BC610 002B9550  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC614 002B9554  D0 7F 02 D8 */	stfs f3, 0x2d8(r31)
/* 802BC618 002B9558  C0 7F 02 DC */	lfs f3, 0x2dc(r31)
/* 802BC61C 002B955C  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC620 002B9560  D0 7F 02 DC */	stfs f3, 0x2dc(r31)
/* 802BC624 002B9564  C0 7F 02 E0 */	lfs f3, 0x2e0(r31)
/* 802BC628 002B9568  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC62C 002B956C  D0 7F 02 E0 */	stfs f3, 0x2e0(r31)
.L_802BC630:
/* 802BC630 002B9570  EC 81 00 72 */	fmuls f4, f1, f1
/* 802BC634 002B9574  C0 62 E0 60 */	lfs f3, lbl_8051C3C0@sda21(r2)
/* 802BC638 002B9578  EC A2 00 B2 */	fmuls f5, f2, f2
/* 802BC63C 002B957C  EC 80 20 3A */	fmadds f4, f0, f0, f4
/* 802BC640 002B9580  EC 85 20 2A */	fadds f4, f5, f4
/* 802BC644 002B9584  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802BC648 002B9588  40 81 00 14 */	ble .L_802BC65C
/* 802BC64C 002B958C  40 81 00 14 */	ble .L_802BC660
/* 802BC650 002B9590  FC 60 20 34 */	frsqrte f3, f4
/* 802BC654 002B9594  EC 83 01 32 */	fmuls f4, f3, f4
/* 802BC658 002B9598  48 00 00 08 */	b .L_802BC660
.L_802BC65C:
/* 802BC65C 002B959C  FC 80 18 90 */	fmr f4, f3
.L_802BC660:
/* 802BC660 002B95A0  C0 62 E0 60 */	lfs f3, lbl_8051C3C0@sda21(r2)
/* 802BC664 002B95A4  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802BC668 002B95A8  40 81 00 18 */	ble .L_802BC680
/* 802BC66C 002B95AC  C0 62 E0 64 */	lfs f3, lbl_8051C3C4@sda21(r2)
/* 802BC670 002B95B0  EC 63 20 24 */	fdivs f3, f3, f4
/* 802BC674 002B95B4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802BC678 002B95B8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 802BC67C 002B95BC  EC 42 00 F2 */	fmuls f2, f2, f3
.L_802BC680:
/* 802BC680 002B95C0  C0 BF 02 E4 */	lfs f5, 0x2e4(r31)
/* 802BC684 002B95C4  C0 9F 02 E8 */	lfs f4, 0x2e8(r31)
/* 802BC688 002B95C8  EC 65 01 72 */	fmuls f3, f5, f5
/* 802BC68C 002B95CC  C0 DF 02 EC */	lfs f6, 0x2ec(r31)
/* 802BC690 002B95D0  EC E4 01 32 */	fmuls f7, f4, f4
/* 802BC694 002B95D4  C0 82 E0 60 */	lfs f4, lbl_8051C3C0@sda21(r2)
/* 802BC698 002B95D8  EC C6 01 B2 */	fmuls f6, f6, f6
/* 802BC69C 002B95DC  EC 63 38 2A */	fadds f3, f3, f7
/* 802BC6A0 002B95E0  EC 66 18 2A */	fadds f3, f6, f3
/* 802BC6A4 002B95E4  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 802BC6A8 002B95E8  40 81 00 20 */	ble .L_802BC6C8
/* 802BC6AC 002B95EC  EC 65 39 7A */	fmadds f3, f5, f5, f7
/* 802BC6B0 002B95F0  EC A6 18 2A */	fadds f5, f6, f3
/* 802BC6B4 002B95F4  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 802BC6B8 002B95F8  40 81 00 14 */	ble .L_802BC6CC
/* 802BC6BC 002B95FC  FC 60 28 34 */	frsqrte f3, f5
/* 802BC6C0 002B9600  EC A3 01 72 */	fmuls f5, f3, f5
/* 802BC6C4 002B9604  48 00 00 08 */	b .L_802BC6CC
.L_802BC6C8:
/* 802BC6C8 002B9608  FC A0 20 90 */	fmr f5, f4
.L_802BC6CC:
/* 802BC6CC 002B960C  C0 62 E0 60 */	lfs f3, lbl_8051C3C0@sda21(r2)
/* 802BC6D0 002B9610  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802BC6D4 002B9614  40 81 00 30 */	ble .L_802BC704
/* 802BC6D8 002B9618  C0 82 E0 64 */	lfs f4, lbl_8051C3C4@sda21(r2)
/* 802BC6DC 002B961C  C0 7F 02 E4 */	lfs f3, 0x2e4(r31)
/* 802BC6E0 002B9620  EC 84 28 24 */	fdivs f4, f4, f5
/* 802BC6E4 002B9624  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC6E8 002B9628  D0 7F 02 E4 */	stfs f3, 0x2e4(r31)
/* 802BC6EC 002B962C  C0 7F 02 E8 */	lfs f3, 0x2e8(r31)
/* 802BC6F0 002B9630  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC6F4 002B9634  D0 7F 02 E8 */	stfs f3, 0x2e8(r31)
/* 802BC6F8 002B9638  C0 7F 02 EC */	lfs f3, 0x2ec(r31)
/* 802BC6FC 002B963C  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BC700 002B9640  D0 7F 02 EC */	stfs f3, 0x2ec(r31)
.L_802BC704:
/* 802BC704 002B9644  D0 1F 01 38 */	stfs f0, 0x138(r31)
/* 802BC708 002B9648  D0 3F 01 48 */	stfs f1, 0x148(r31)
/* 802BC70C 002B964C  D0 5F 01 58 */	stfs f2, 0x158(r31)
/* 802BC710 002B9650  C0 1F 02 E4 */	lfs f0, 0x2e4(r31)
/* 802BC714 002B9654  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 802BC718 002B9658  C0 1F 02 E8 */	lfs f0, 0x2e8(r31)
/* 802BC71C 002B965C  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 802BC720 002B9660  C0 1F 02 EC */	lfs f0, 0x2ec(r31)
/* 802BC724 002B9664  D0 1F 01 5C */	stfs f0, 0x15c(r31)
/* 802BC728 002B9668  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 802BC72C 002B966C  D0 1F 01 40 */	stfs f0, 0x140(r31)
/* 802BC730 002B9670  C0 1F 02 DC */	lfs f0, 0x2dc(r31)
/* 802BC734 002B9674  D0 1F 01 50 */	stfs f0, 0x150(r31)
/* 802BC738 002B9678  C0 1F 02 E0 */	lfs f0, 0x2e0(r31)
/* 802BC73C 002B967C  D0 1F 01 60 */	stfs f0, 0x160(r31)
/* 802BC740 002B9680  88 1F 02 C1 */	lbz r0, 0x2c1(r31)
/* 802BC744 002B9684  28 00 00 00 */	cmplwi r0, 0
/* 802BC748 002B9688  41 82 00 F8 */	beq .L_802BC840
/* 802BC74C 002B968C  88 1F 02 C2 */	lbz r0, 0x2c2(r31)
/* 802BC750 002B9690  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802BC754 002B9694  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802BC758 002B9698  28 00 00 00 */	cmplwi r0, 0
/* 802BC75C 002B969C  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802BC760 002B96A0  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802BC764 002B96A4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802BC768 002B96A8  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 802BC76C 002B96AC  41 82 00 98 */	beq .L_802BC804
/* 802BC770 002B96B0  C0 9F 03 00 */	lfs f4, 0x300(r31)
/* 802BC774 002B96B4  38 00 00 00 */	li r0, 0
/* 802BC778 002B96B8  C0 BF 03 04 */	lfs f5, 0x304(r31)
/* 802BC77C 002B96BC  EC C1 20 28 */	fsubs f6, f1, f4
/* 802BC780 002B96C0  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BC784 002B96C4  EC E2 28 28 */	fsubs f7, f2, f5
/* 802BC788 002B96C8  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 802BC78C 002B96CC  40 81 00 0C */	ble .L_802BC798
/* 802BC790 002B96D0  FC 40 30 90 */	fmr f2, f6
/* 802BC794 002B96D4  48 00 00 08 */	b .L_802BC79C
.L_802BC798:
/* 802BC798 002B96D8  FC 40 30 50 */	fneg f2, f6
.L_802BC79C:
/* 802BC79C 002B96DC  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BC7A0 002B96E0  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 802BC7A4 002B96E4  40 81 00 0C */	ble .L_802BC7B0
/* 802BC7A8 002B96E8  FC 60 38 90 */	fmr f3, f7
/* 802BC7AC 002B96EC  48 00 00 08 */	b .L_802BC7B4
.L_802BC7B0:
/* 802BC7B0 002B96F0  FC 60 38 50 */	fneg f3, f7
.L_802BC7B4:
/* 802BC7B4 002B96F4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BC7B8 002B96F8  C0 23 08 94 */	lfs f1, 0x894(r3)
/* 802BC7BC 002B96FC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802BC7C0 002B9700  40 81 00 14 */	ble .L_802BC7D4
/* 802BC7C4 002B9704  EC 06 10 24 */	fdivs f0, f6, f2
/* 802BC7C8 002B9708  38 00 00 01 */	li r0, 1
/* 802BC7CC 002B970C  EC 00 20 7A */	fmadds f0, f0, f1, f4
/* 802BC7D0 002B9710  D0 01 00 20 */	stfs f0, 0x20(r1)
.L_802BC7D4:
/* 802BC7D4 002B9714  C0 23 08 94 */	lfs f1, 0x894(r3)
/* 802BC7D8 002B9718  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 802BC7DC 002B971C  40 81 00 14 */	ble .L_802BC7F0
/* 802BC7E0 002B9720  EC 07 18 24 */	fdivs f0, f7, f3
/* 802BC7E4 002B9724  38 00 00 01 */	li r0, 1
/* 802BC7E8 002B9728  EC 00 28 7A */	fmadds f0, f0, f1, f5
/* 802BC7EC 002B972C  D0 01 00 28 */	stfs f0, 0x28(r1)
.L_802BC7F0:
/* 802BC7F0 002B9730  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802BC7F4 002B9734  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 802BC7F8 002B9738  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802BC7FC 002B973C  D0 3F 03 00 */	stfs f1, 0x300(r31)
/* 802BC800 002B9740  D0 1F 03 04 */	stfs f0, 0x304(r31)
.L_802BC804:
/* 802BC804 002B9744  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802BC808 002B9748  38 80 00 01 */	li r4, 1
/* 802BC80C 002B974C  80 61 00 24 */	lwz r3, 0x24(r1)
/* 802BC810 002B9750  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC814 002B9754  80 01 00 28 */	lwz r0, 0x28(r1)
/* 802BC818 002B9758  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BC81C 002B975C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802BC820 002B9760  98 9F 02 C2 */	stb r4, 0x2c2(r31)
/* 802BC824 002B9764  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802BC828 002B9768  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802BC82C 002B976C  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 802BC830 002B9770  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802BC834 002B9774  D0 3F 01 54 */	stfs f1, 0x154(r31)
/* 802BC838 002B9778  D0 1F 01 64 */	stfs f0, 0x164(r31)
/* 802BC83C 002B977C  48 00 00 34 */	b .L_802BC870
.L_802BC840:
/* 802BC840 002B9780  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 802BC844 002B9784  80 7F 01 90 */	lwz r3, 0x190(r31)
/* 802BC848 002B9788  90 01 00 08 */	stw r0, 8(r1)
/* 802BC84C 002B978C  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 802BC850 002B9790  90 61 00 0C */	stw r3, 0xc(r1)
/* 802BC854 002B9794  C0 01 00 08 */	lfs f0, 8(r1)
/* 802BC858 002B9798  90 01 00 10 */	stw r0, 0x10(r1)
/* 802BC85C 002B979C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BC860 002B97A0  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 802BC864 002B97A4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BC868 002B97A8  D0 3F 01 54 */	stfs f1, 0x154(r31)
/* 802BC86C 002B97AC  D0 1F 01 64 */	stfs f0, 0x164(r31)
.L_802BC870:
/* 802BC870 002B97B0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802BC874 002B97B4  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 802BC878 002B97B8  C0 5F 02 E0 */	lfs f2, 0x2e0(r31)
/* 802BC87C 002B97BC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802BC880 002B97C0  4B D7 88 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802BC884 002B97C4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802BC888 002B97C8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802BC88C 002B97CC  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802BC890 002B97D0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802BC894 002B97D4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802BC898 002B97D8  7C 08 03 A6 */	mtlr r0
/* 802BC89C 002B97DC  38 21 00 40 */	addi r1, r1, 0x40
/* 802BC8A0 002B97E0  4E 80 00 20 */	blr 
.endfn doAnimationStick__Q34Game8Imomushi3ObjFv

.fn doDirectDraw__Q34Game8Imomushi3ObjFR8Graphics, global
/* 802BC8A4 002B97E4  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game8Imomushi3ObjFR8Graphics

.fn doDebugDraw__Q34Game8Imomushi3ObjFR8Graphics, global
/* 802BC8A8 002B97E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC8AC 002B97EC  7C 08 02 A6 */	mflr r0
/* 802BC8B0 002B97F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC8B4 002B97F4  4B E4 95 B9 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802BC8B8 002B97F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC8BC 002B97FC  7C 08 03 A6 */	mtlr r0
/* 802BC8C0 002B9800  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC8C4 002B9804  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game8Imomushi3ObjFR8Graphics

.fn setFSM__Q34Game8Imomushi3ObjFPQ34Game8Imomushi3FSM, global
/* 802BC8C8 002B9808  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC8CC 002B980C  7C 08 02 A6 */	mflr r0
/* 802BC8D0 002B9810  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC8D4 002B9814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BC8D8 002B9818  7C 7F 1B 78 */	mr r31, r3
/* 802BC8DC 002B981C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802BC8E0 002B9820  7F E4 FB 78 */	mr r4, r31
/* 802BC8E4 002B9824  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802BC8E8 002B9828  81 83 00 00 */	lwz r12, 0(r3)
/* 802BC8EC 002B982C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BC8F0 002B9830  7D 89 03 A6 */	mtctr r12
/* 802BC8F4 002B9834  4E 80 04 21 */	bctrl 
/* 802BC8F8 002B9838  38 00 00 00 */	li r0, 0
/* 802BC8FC 002B983C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802BC900 002B9840  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC904 002B9844  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BC908 002B9848  7C 08 03 A6 */	mtlr r0
/* 802BC90C 002B984C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC910 002B9850  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game8Imomushi3ObjFPQ34Game8Imomushi3FSM

.fn getShadowParam__Q34Game8Imomushi3ObjFRQ24Game11ShadowParam, global
/* 802BC914 002B9854  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BC918 002B9858  7C 08 02 A6 */	mflr r0
/* 802BC91C 002B985C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BC920 002B9860  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BC924 002B9864  7C 9F 23 78 */	mr r31, r4
/* 802BC928 002B9868  93 C1 00 08 */	stw r30, 8(r1)
/* 802BC92C 002B986C  7C 7E 1B 78 */	mr r30, r3
/* 802BC930 002B9870  3C 60 80 49 */	lis r3, lbl_8048AC30@ha
/* 802BC934 002B9874  38 03 AC 30 */	addi r0, r3, lbl_8048AC30@l
/* 802BC938 002B9878  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802BC93C 002B987C  7C 04 03 78 */	mr r4, r0
/* 802BC940 002B9880  48 18 26 A5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802BC944 002B9884  48 16 CF 5D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802BC948 002B9888  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802BC94C 002B988C  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 802BC950 002B9890  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802BC954 002B9894  7F C3 F3 78 */	mr r3, r30
/* 802BC958 002B9898  C0 42 E0 68 */	lfs f2, lbl_8051C3C8@sda21(r2)
/* 802BC95C 002B989C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802BC960 002B98A0  C0 22 E0 60 */	lfs f1, lbl_8051C3C0@sda21(r2)
/* 802BC964 002B98A4  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802BC968 002B98A8  C0 02 E0 64 */	lfs f0, lbl_8051C3C4@sda21(r2)
/* 802BC96C 002B98AC  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802BC970 002B98B0  C0 7F 00 04 */	lfs f3, 4(r31)
/* 802BC974 002B98B4  EC 43 10 28 */	fsubs f2, f3, f2
/* 802BC978 002B98B8  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802BC97C 002B98BC  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802BC980 002B98C0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802BC984 002B98C4  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802BC988 002B98C8  4B EE 2B ED */	bl isStickTo__Q24Game8CreatureFv
/* 802BC98C 002B98CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BC990 002B98D0  41 82 00 14 */	beq .L_802BC9A4
/* 802BC994 002B98D4  C0 02 E0 6C */	lfs f0, lbl_8051C3CC@sda21(r2)
/* 802BC998 002B98D8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802BC99C 002B98DC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802BC9A0 002B98E0  48 00 00 2C */	b .L_802BC9CC
.L_802BC9A4:
/* 802BC9A4 002B98E4  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802BC9A8 002B98E8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802BC9AC 002B98EC  41 82 00 10 */	beq .L_802BC9BC
/* 802BC9B0 002B98F0  C0 02 E0 70 */	lfs f0, lbl_8051C3D0@sda21(r2)
/* 802BC9B4 002B98F4  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802BC9B8 002B98F8  48 00 00 0C */	b .L_802BC9C4
.L_802BC9BC:
/* 802BC9BC 002B98FC  C0 02 E0 74 */	lfs f0, lbl_8051C3D4@sda21(r2)
/* 802BC9C0 002B9900  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802BC9C4:
/* 802BC9C4 002B9904  C0 02 E0 78 */	lfs f0, lbl_8051C3D8@sda21(r2)
/* 802BC9C8 002B9908  D0 1F 00 1C */	stfs f0, 0x1c(r31)
.L_802BC9CC:
/* 802BC9CC 002B990C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BC9D0 002B9910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BC9D4 002B9914  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BC9D8 002B9918  7C 08 03 A6 */	mtlr r0
/* 802BC9DC 002B991C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BC9E0 002B9920  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game8Imomushi3ObjFRQ24Game11ShadowParam

.fn earthquakeCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creaturef, global
/* 802BC9E4 002B9924  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BC9E8 002B9928  7C 08 02 A6 */	mflr r0
/* 802BC9EC 002B992C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BC9F0 002B9930  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 802BC9F4 002B9934  FF E0 08 90 */	fmr f31, f1
/* 802BC9F8 002B9938  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802BC9FC 002B993C  7C 9F 23 78 */	mr r31, r4
/* 802BCA00 002B9940  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802BCA04 002B9944  7C 7E 1B 78 */	mr r30, r3
/* 802BCA08 002B9948  4B EE 2B 6D */	bl isStickTo__Q24Game8CreatureFv
/* 802BCA0C 002B994C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BCA10 002B9950  41 82 00 0C */	beq .L_802BCA1C
/* 802BCA14 002B9954  38 60 00 00 */	li r3, 0
/* 802BCA18 002B9958  48 00 00 14 */	b .L_802BCA2C
.L_802BCA1C:
/* 802BCA1C 002B995C  FC 20 F8 90 */	fmr f1, f31
/* 802BCA20 002B9960  7F C3 F3 78 */	mr r3, r30
/* 802BCA24 002B9964  7F E4 FB 78 */	mr r4, r31
/* 802BCA28 002B9968  4B E4 99 9D */	bl earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
.L_802BCA2C:
/* 802BCA2C 002B996C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BCA30 002B9970  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 802BCA34 002B9974  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802BCA38 002B9978  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802BCA3C 002B997C  7C 08 03 A6 */	mtlr r0
/* 802BCA40 002B9980  38 21 00 20 */	addi r1, r1, 0x20
/* 802BCA44 002B9984  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creaturef

.fn dropCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creature, global
/* 802BCA48 002B9988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCA4C 002B998C  7C 08 02 A6 */	mflr r0
/* 802BCA50 002B9990  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCA54 002B9994  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCA58 002B9998  7C 7F 1B 78 */	mr r31, r3
/* 802BCA5C 002B999C  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 802BCA60 002B99A0  28 00 00 00 */	cmplwi r0, 0
/* 802BCA64 002B99A4  41 82 00 4C */	beq .L_802BCAB0
/* 802BCA68 002B99A8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BCA6C 002B99AC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802BCA70 002B99B0  40 82 00 40 */	bne .L_802BCAB0
/* 802BCA74 002B99B4  4B E4 A9 81 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802BCA78 002B99B8  2C 03 00 01 */	cmpwi r3, 1
/* 802BCA7C 002B99BC  41 82 00 0C */	beq .L_802BCA88
/* 802BCA80 002B99C0  2C 03 00 09 */	cmpwi r3, 9
/* 802BCA84 002B99C4  40 82 00 2C */	bne .L_802BCAB0
.L_802BCA88:
/* 802BCA88 002B99C8  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802BCA8C 002B99CC  7F E4 FB 78 */	mr r4, r31
/* 802BCA90 002B99D0  38 A0 00 02 */	li r5, 2
/* 802BCA94 002B99D4  38 C0 00 00 */	li r6, 0
/* 802BCA98 002B99D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCA9C 002B99DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802BCAA0 002B99E0  7D 89 03 A6 */	mtctr r12
/* 802BCAA4 002B99E4  4E 80 04 21 */	bctrl 
/* 802BCAA8 002B99E8  38 60 00 01 */	li r3, 1
/* 802BCAAC 002B99EC  48 00 00 08 */	b .L_802BCAB4
.L_802BCAB0:
/* 802BCAB0 002B99F0  38 60 00 00 */	li r3, 0
.L_802BCAB4:
/* 802BCAB4 002B99F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCAB8 002B99F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCABC 002B99FC  7C 08 03 A6 */	mtlr r0
/* 802BCAC0 002B9A00  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCAC4 002B9A04  4E 80 00 20 */	blr 
.endfn dropCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creature

.fn doStartStoneState__Q34Game8Imomushi3ObjFv, global
/* 802BCAC8 002B9A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCACC 002B9A0C  7C 08 02 A6 */	mflr r0
/* 802BCAD0 002B9A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCAD4 002B9A14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCAD8 002B9A18  7C 7F 1B 78 */	mr r31, r3
/* 802BCADC 002B9A1C  4B E4 64 19 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802BCAE0 002B9A20  7F E3 FB 78 */	mr r3, r31
/* 802BCAE4 002B9A24  48 00 0E D9 */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BCAE8 002B9A28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCAEC 002B9A2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCAF0 002B9A30  7C 08 03 A6 */	mtlr r0
/* 802BCAF4 002B9A34  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCAF8 002B9A38  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game8Imomushi3ObjFv

.fn doFinishStoneState__Q34Game8Imomushi3ObjFv, global
/* 802BCAFC 002B9A3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCB00 002B9A40  7C 08 02 A6 */	mflr r0
/* 802BCB04 002B9A44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCB08 002B9A48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCB0C 002B9A4C  7C 7F 1B 78 */	mr r31, r3
/* 802BCB10 002B9A50  4B E4 63 F9 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802BCB14 002B9A54  7F E3 FB 78 */	mr r3, r31
/* 802BCB18 002B9A58  4B E4 A8 DD */	bl getStateID__Q24Game9EnemyBaseFv
/* 802BCB1C 002B9A5C  2C 03 00 07 */	cmpwi r3, 7
/* 802BCB20 002B9A60  41 82 00 0C */	beq .L_802BCB2C
/* 802BCB24 002B9A64  2C 03 00 08 */	cmpwi r3, 8
/* 802BCB28 002B9A68  40 82 00 0C */	bne .L_802BCB34
.L_802BCB2C:
/* 802BCB2C 002B9A6C  7F E3 FB 78 */	mr r3, r31
/* 802BCB30 002B9A70  48 00 0E 09 */	bl startMoveTraceEffect__Q34Game8Imomushi3ObjFv
.L_802BCB34:
/* 802BCB34 002B9A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCB38 002B9A78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCB3C 002B9A7C  7C 08 03 A6 */	mtlr r0
/* 802BCB40 002B9A80  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCB44 002B9A84  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game8Imomushi3ObjFv

.fn doStartEarthquakeState__Q34Game8Imomushi3ObjFf, global
/* 802BCB48 002B9A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCB4C 002B9A8C  7C 08 02 A6 */	mflr r0
/* 802BCB50 002B9A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCB54 002B9A94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCB58 002B9A98  7C 7F 1B 78 */	mr r31, r3
/* 802BCB5C 002B9A9C  4B E4 AD 71 */	bl doStartEarthquakeState__Q24Game9EnemyBaseFf
/* 802BCB60 002B9AA0  7F E3 FB 78 */	mr r3, r31
/* 802BCB64 002B9AA4  48 00 0E 59 */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BCB68 002B9AA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCB6C 002B9AAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCB70 002B9AB0  7C 08 03 A6 */	mtlr r0
/* 802BCB74 002B9AB4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCB78 002B9AB8  4E 80 00 20 */	blr 
.endfn doStartEarthquakeState__Q34Game8Imomushi3ObjFf

.fn doFinishEarthquakeState__Q34Game8Imomushi3ObjFv, global
/* 802BCB7C 002B9ABC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCB80 002B9AC0  7C 08 02 A6 */	mflr r0
/* 802BCB84 002B9AC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCB88 002B9AC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCB8C 002B9ACC  7C 7F 1B 78 */	mr r31, r3
/* 802BCB90 002B9AD0  4B E4 AD D1 */	bl doFinishEarthquakeState__Q24Game9EnemyBaseFv
/* 802BCB94 002B9AD4  7F E3 FB 78 */	mr r3, r31
/* 802BCB98 002B9AD8  4B E4 A8 5D */	bl getStateID__Q24Game9EnemyBaseFv
/* 802BCB9C 002B9ADC  2C 03 00 07 */	cmpwi r3, 7
/* 802BCBA0 002B9AE0  41 82 00 0C */	beq .L_802BCBAC
/* 802BCBA4 002B9AE4  2C 03 00 08 */	cmpwi r3, 8
/* 802BCBA8 002B9AE8  40 82 00 0C */	bne .L_802BCBB4
.L_802BCBAC:
/* 802BCBAC 002B9AEC  7F E3 FB 78 */	mr r3, r31
/* 802BCBB0 002B9AF0  48 00 0D 89 */	bl startMoveTraceEffect__Q34Game8Imomushi3ObjFv
.L_802BCBB4:
/* 802BCBB4 002B9AF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCBB8 002B9AF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCBBC 002B9AFC  7C 08 03 A6 */	mtlr r0
/* 802BCBC0 002B9B00  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCBC4 002B9B04  4E 80 00 20 */	blr 
.endfn doFinishEarthquakeState__Q34Game8Imomushi3ObjFv

.fn doStartEarthquakeFitState__Q34Game8Imomushi3ObjFv, global
/* 802BCBC8 002B9B08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCBCC 002B9B0C  7C 08 02 A6 */	mflr r0
/* 802BCBD0 002B9B10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCBD4 002B9B14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCBD8 002B9B18  7C 7F 1B 78 */	mr r31, r3
/* 802BCBDC 002B9B1C  4B E4 AD 89 */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802BCBE0 002B9B20  7F E3 FB 78 */	mr r3, r31
/* 802BCBE4 002B9B24  48 00 0D D9 */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BCBE8 002B9B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCBEC 002B9B2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCBF0 002B9B30  7C 08 03 A6 */	mtlr r0
/* 802BCBF4 002B9B34  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCBF8 002B9B38  4E 80 00 20 */	blr 
.endfn doStartEarthquakeFitState__Q34Game8Imomushi3ObjFv

.fn doFinishEarthquakeFitState__Q34Game8Imomushi3ObjFv, global
/* 802BCBFC 002B9B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCC00 002B9B40  7C 08 02 A6 */	mflr r0
/* 802BCC04 002B9B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCC08 002B9B48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BCC0C 002B9B4C  7C 7F 1B 78 */	mr r31, r3
/* 802BCC10 002B9B50  4B E4 AD 59 */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802BCC14 002B9B54  7F E3 FB 78 */	mr r3, r31
/* 802BCC18 002B9B58  4B E4 A7 DD */	bl getStateID__Q24Game9EnemyBaseFv
/* 802BCC1C 002B9B5C  2C 03 00 07 */	cmpwi r3, 7
/* 802BCC20 002B9B60  41 82 00 0C */	beq .L_802BCC2C
/* 802BCC24 002B9B64  2C 03 00 08 */	cmpwi r3, 8
/* 802BCC28 002B9B68  40 82 00 0C */	bne .L_802BCC34
.L_802BCC2C:
/* 802BCC2C 002B9B6C  7F E3 FB 78 */	mr r3, r31
/* 802BCC30 002B9B70  48 00 0D 09 */	bl startMoveTraceEffect__Q34Game8Imomushi3ObjFv
.L_802BCC34:
/* 802BCC34 002B9B74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCC38 002B9B78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BCC3C 002B9B7C  7C 08 03 A6 */	mtlr r0
/* 802BCC40 002B9B80  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCC44 002B9B84  4E 80 00 20 */	blr 
.endfn doFinishEarthquakeFitState__Q34Game8Imomushi3ObjFv

.fn startCarcassMotion__Q34Game8Imomushi3ObjFv, global
/* 802BCC48 002B9B88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCC4C 002B9B8C  7C 08 02 A6 */	mflr r0
/* 802BCC50 002B9B90  38 80 00 08 */	li r4, 8
/* 802BCC54 002B9B94  38 A0 00 00 */	li r5, 0
/* 802BCC58 002B9B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCC5C 002B9B9C  4B E4 83 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BCC60 002B9BA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCC64 002B9BA4  7C 08 03 A6 */	mtlr r0
/* 802BCC68 002B9BA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCC6C 002B9BAC  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game8Imomushi3ObjFv

.fn doStartMovie__Q34Game8Imomushi3ObjFv, global
/* 802BCC70 002B9BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCC74 002B9BB4  7C 08 02 A6 */	mflr r0
/* 802BCC78 002B9BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCC7C 002B9BBC  48 00 0D C1 */	bl effectDrawOff__Q34Game8Imomushi3ObjFv
/* 802BCC80 002B9BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCC84 002B9BC4  7C 08 03 A6 */	mtlr r0
/* 802BCC88 002B9BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCC8C 002B9BCC  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game8Imomushi3ObjFv

.fn doEndMovie__Q34Game8Imomushi3ObjFv, global
/* 802BCC90 002B9BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BCC94 002B9BD4  7C 08 02 A6 */	mflr r0
/* 802BCC98 002B9BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BCC9C 002B9BDC  48 00 0D 51 */	bl effectDrawOn__Q34Game8Imomushi3ObjFv
/* 802BCCA0 002B9BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BCCA4 002B9BE4  7C 08 03 A6 */	mtlr r0
/* 802BCCA8 002B9BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BCCAC 002B9BEC  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game8Imomushi3ObjFv

.fn lifeIncrement__Q34Game8Imomushi3ObjFv, global
/* 802BCCB0 002B9BF0  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BCCB4 002B9BF4  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 802BCCB8 002B9BF8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802BCCBC 002B9BFC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 802BCCC0 002B9C00  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802BCCC4 002B9C04  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802BCCC8 002B9C08  C0 04 01 04 */	lfs f0, 0x104(r4)
/* 802BCCCC 002B9C0C  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802BCCD0 002B9C10  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game8Imomushi3ObjFv

.fn resetZukanStateTimer__Q34Game8Imomushi3ObjFv, global
/* 802BCCD4 002B9C14  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BCCD8 002B9C18  7C 08 02 A6 */	mflr r0
/* 802BCCDC 002B9C1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BCCE0 002B9C20  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802BCCE4 002B9C24  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802BCCE8 002B9C28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BCCEC 002B9C2C  7C 7F 1B 78 */	mr r31, r3
/* 802BCCF0 002B9C30  4B E0 C8 B1 */	bl rand
/* 802BCCF4 002B9C34  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802BCCF8 002B9C38  3C 00 43 30 */	lis r0, 0x4330
/* 802BCCFC 002B9C3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802BCD00 002B9C40  7F E3 FB 78 */	mr r3, r31
/* 802BCD04 002B9C44  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BCD08 002B9C48  90 01 00 08 */	stw r0, 8(r1)
/* 802BCD0C 002B9C4C  C8 42 E0 88 */	lfd f2, lbl_8051C3E8@sda21(r2)
/* 802BCD10 002B9C50  C8 01 00 08 */	lfd f0, 8(r1)
/* 802BCD14 002B9C54  C0 22 E0 7C */	lfs f1, lbl_8051C3DC@sda21(r2)
/* 802BCD18 002B9C58  EC 40 10 28 */	fsubs f2, f0, f2
/* 802BCD1C 002B9C5C  C0 02 E0 80 */	lfs f0, lbl_8051C3E0@sda21(r2)
/* 802BCD20 002B9C60  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 802BCD24 002B9C64  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802BCD28 002B9C68  EF E1 00 24 */	fdivs f31, f1, f0
/* 802BCD2C 002B9C6C  7D 89 03 A6 */	mtctr r12
/* 802BCD30 002B9C70  4E 80 04 21 */	bctrl 
/* 802BCD34 002B9C74  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802BCD38 002B9C78  3C 00 43 30 */	lis r0, 0x4330
/* 802BCD3C 002B9C7C  90 61 00 14 */	stw r3, 0x14(r1)
/* 802BCD40 002B9C80  C8 62 E0 88 */	lfd f3, lbl_8051C3E8@sda21(r2)
/* 802BCD44 002B9C84  90 01 00 10 */	stw r0, 0x10(r1)
/* 802BCD48 002B9C88  C0 22 E0 7C */	lfs f1, lbl_8051C3DC@sda21(r2)
/* 802BCD4C 002B9C8C  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 802BCD50 002B9C90  C0 02 E0 68 */	lfs f0, lbl_8051C3C8@sda21(r2)
/* 802BCD54 002B9C94  EC 42 18 28 */	fsubs f2, f2, f3
/* 802BCD58 002B9C98  EC 21 F8 BA */	fmadds f1, f1, f2, f31
/* 802BCD5C 002B9C9C  EC 00 08 28 */	fsubs f0, f0, f1
/* 802BCD60 002B9CA0  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802BCD64 002B9CA4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802BCD68 002B9CA8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BCD6C 002B9CAC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802BCD70 002B9CB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BCD74 002B9CB4  7C 08 03 A6 */	mtlr r0
/* 802BCD78 002B9CB8  38 21 00 30 */	addi r1, r1, 0x30
/* 802BCD7C 002B9CBC  4E 80 00 20 */	blr 
.endfn resetZukanStateTimer__Q34Game8Imomushi3ObjFv

.fn resetStickDiff__Q34Game8Imomushi3ObjFv, global
/* 802BCD80 002B9CC0  38 00 00 00 */	li r0, 0
/* 802BCD84 002B9CC4  98 03 02 C2 */	stb r0, 0x2c2(r3)
/* 802BCD88 002B9CC8  98 03 02 C1 */	stb r0, 0x2c1(r3)
/* 802BCD8C 002B9CCC  4E 80 00 20 */	blr 
.endfn resetStickDiff__Q34Game8Imomushi3ObjFv

.fn setStickDiff__Q34Game8Imomushi3ObjFff, global
/* 802BCD90 002B9CD0  38 80 00 01 */	li r4, 1
/* 802BCD94 002B9CD4  38 00 00 00 */	li r0, 0
/* 802BCD98 002B9CD8  98 83 02 C1 */	stb r4, 0x2c1(r3)
/* 802BCD9C 002B9CDC  98 03 02 C2 */	stb r0, 0x2c2(r3)
/* 802BCDA0 002B9CE0  D0 23 03 00 */	stfs f1, 0x300(r3)
/* 802BCDA4 002B9CE4  D0 43 03 04 */	stfs f2, 0x304(r3)
/* 802BCDA8 002B9CE8  4E 80 00 20 */	blr 
.endfn setStickDiff__Q34Game8Imomushi3ObjFff

.fn getRandFruitsPlant__Q34Game8Imomushi3ObjFv, global
/* 802BCDAC 002B9CEC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802BCDB0 002B9CF0  7C 08 02 A6 */	mflr r0
/* 802BCDB4 002B9CF4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802BCDB8 002B9CF8  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802BCDBC 002B9CFC  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802BCDC0 002B9D00  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 802BCDC4 002B9D04  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 802BCDC8 002B9D08  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 802BCDCC 002B9D0C  93 81 00 C0 */	stw r28, 0xc0(r1)
/* 802BCDD0 002B9D10  7C 7E 1B 78 */	mr r30, r3
/* 802BCDD4 002B9D14  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 802BCDD8 002B9D18  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 802BCDDC 002B9D1C  3B E0 00 00 */	li r31, 0
/* 802BCDE0 002B9D20  28 03 00 00 */	cmplwi r3, 0
/* 802BCDE4 002B9D24  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 802BCDE8 002B9D28  EF E0 00 32 */	fmuls f31, f0, f0
/* 802BCDEC 002B9D2C  41 82 00 08 */	beq .L_802BCDF4
/* 802BCDF0 002B9D30  38 63 00 30 */	addi r3, r3, 0x30
.L_802BCDF4:
/* 802BCDF4 002B9D34  38 00 00 00 */	li r0, 0
/* 802BCDF8 002B9D38  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 802BCDFC 002B9D3C  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 802BCE00 002B9D40  90 01 00 20 */	stw r0, 0x20(r1)
/* 802BCE04 002B9D44  28 00 00 00 */	cmplwi r0, 0
/* 802BCE08 002B9D48  90 81 00 14 */	stw r4, 0x14(r1)
/* 802BCE0C 002B9D4C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802BCE10 002B9D50  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802BCE14 002B9D54  40 82 00 1C */	bne .L_802BCE30
/* 802BCE18 002B9D58  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCE1C 002B9D5C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802BCE20 002B9D60  7D 89 03 A6 */	mtctr r12
/* 802BCE24 002B9D64  4E 80 04 21 */	bctrl 
/* 802BCE28 002B9D68  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BCE2C 002B9D6C  48 00 00 8C */	b .L_802BCEB8
.L_802BCE30:
/* 802BCE30 002B9D70  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCE34 002B9D74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802BCE38 002B9D78  7D 89 03 A6 */	mtctr r12
/* 802BCE3C 002B9D7C  4E 80 04 21 */	bctrl 
/* 802BCE40 002B9D80  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BCE44 002B9D84  48 00 00 58 */	b .L_802BCE9C
.L_802BCE48:
/* 802BCE48 002B9D88  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCE4C 002B9D8C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BCE50 002B9D90  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCE54 002B9D94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802BCE58 002B9D98  7D 89 03 A6 */	mtctr r12
/* 802BCE5C 002B9D9C  4E 80 04 21 */	bctrl 
/* 802BCE60 002B9DA0  7C 64 1B 78 */	mr r4, r3
/* 802BCE64 002B9DA4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802BCE68 002B9DA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCE6C 002B9DAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BCE70 002B9DB0  7D 89 03 A6 */	mtctr r12
/* 802BCE74 002B9DB4  4E 80 04 21 */	bctrl 
/* 802BCE78 002B9DB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BCE7C 002B9DBC  40 82 00 3C */	bne .L_802BCEB8
/* 802BCE80 002B9DC0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCE84 002B9DC4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BCE88 002B9DC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCE8C 002B9DCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802BCE90 002B9DD0  7D 89 03 A6 */	mtctr r12
/* 802BCE94 002B9DD4  4E 80 04 21 */	bctrl 
/* 802BCE98 002B9DD8  90 61 00 18 */	stw r3, 0x18(r1)
.L_802BCE9C:
/* 802BCE9C 002B9DDC  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802BCEA0 002B9DE0  38 61 00 14 */	addi r3, r1, 0x14
/* 802BCEA4 002B9DE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802BCEA8 002B9DE8  7D 89 03 A6 */	mtctr r12
/* 802BCEAC 002B9DEC  4E 80 04 21 */	bctrl 
/* 802BCEB0 002B9DF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BCEB4 002B9DF4  41 82 FF 94 */	beq .L_802BCE48
.L_802BCEB8:
/* 802BCEB8 002B9DF8  3B A1 00 24 */	addi r29, r1, 0x24
/* 802BCEBC 002B9DFC  48 00 01 5C */	b .L_802BD018
.L_802BCEC0:
/* 802BCEC0 002B9E00  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCEC4 002B9E04  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCEC8 002B9E08  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802BCECC 002B9E0C  7D 89 03 A6 */	mtctr r12
/* 802BCED0 002B9E10  4E 80 04 21 */	bctrl 
/* 802BCED4 002B9E14  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCED8 002B9E18  7C 60 1B 78 */	mr r0, r3
/* 802BCEDC 002B9E1C  7C 1C 03 78 */	mr r28, r0
/* 802BCEE0 002B9E20  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802BCEE4 002B9E24  7D 89 03 A6 */	mtctr r12
/* 802BCEE8 002B9E28  4E 80 04 21 */	bctrl 
/* 802BCEEC 002B9E2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BCEF0 002B9E30  41 82 00 6C */	beq .L_802BCF5C
/* 802BCEF4 002B9E34  7F 83 E3 78 */	mr r3, r28
/* 802BCEF8 002B9E38  81 9C 00 00 */	lwz r12, 0(r28)
/* 802BCEFC 002B9E3C  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 802BCF00 002B9E40  7D 89 03 A6 */	mtctr r12
/* 802BCF04 002B9E44  4E 80 04 21 */	bctrl 
/* 802BCF08 002B9E48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BCF0C 002B9E4C  41 82 00 50 */	beq .L_802BCF5C
/* 802BCF10 002B9E50  7F 84 E3 78 */	mr r4, r28
/* 802BCF14 002B9E54  38 61 00 08 */	addi r3, r1, 8
/* 802BCF18 002B9E58  81 9C 00 00 */	lwz r12, 0(r28)
/* 802BCF1C 002B9E5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BCF20 002B9E60  7D 89 03 A6 */	mtctr r12
/* 802BCF24 002B9E64  4E 80 04 21 */	bctrl 
/* 802BCF28 002B9E68  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 802BCF2C 002B9E6C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BCF30 002B9E70  C0 5E 01 98 */	lfs f2, 0x198(r30)
/* 802BCF34 002B9E74  EC 21 00 28 */	fsubs f1, f1, f0
/* 802BCF38 002B9E78  C0 01 00 08 */	lfs f0, 8(r1)
/* 802BCF3C 002B9E7C  EC 42 00 28 */	fsubs f2, f2, f0
/* 802BCF40 002B9E80  EC 01 00 72 */	fmuls f0, f1, f1
/* 802BCF44 002B9E84  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 802BCF48 002B9E88  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802BCF4C 002B9E8C  40 80 00 10 */	bge .L_802BCF5C
/* 802BCF50 002B9E90  93 9D 00 00 */	stw r28, 0(r29)
/* 802BCF54 002B9E94  3B BD 00 04 */	addi r29, r29, 4
/* 802BCF58 002B9E98  3B FF 00 01 */	addi r31, r31, 1
.L_802BCF5C:
/* 802BCF5C 002B9E9C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802BCF60 002B9EA0  28 00 00 00 */	cmplwi r0, 0
/* 802BCF64 002B9EA4  40 82 00 24 */	bne .L_802BCF88
/* 802BCF68 002B9EA8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCF6C 002B9EAC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BCF70 002B9EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCF74 002B9EB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802BCF78 002B9EB8  7D 89 03 A6 */	mtctr r12
/* 802BCF7C 002B9EBC  4E 80 04 21 */	bctrl 
/* 802BCF80 002B9EC0  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BCF84 002B9EC4  48 00 00 94 */	b .L_802BD018
.L_802BCF88:
/* 802BCF88 002B9EC8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCF8C 002B9ECC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BCF90 002B9ED0  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCF94 002B9ED4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802BCF98 002B9ED8  7D 89 03 A6 */	mtctr r12
/* 802BCF9C 002B9EDC  4E 80 04 21 */	bctrl 
/* 802BCFA0 002B9EE0  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BCFA4 002B9EE4  48 00 00 58 */	b .L_802BCFFC
.L_802BCFA8:
/* 802BCFA8 002B9EE8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCFAC 002B9EEC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BCFB0 002B9EF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCFB4 002B9EF4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802BCFB8 002B9EF8  7D 89 03 A6 */	mtctr r12
/* 802BCFBC 002B9EFC  4E 80 04 21 */	bctrl 
/* 802BCFC0 002B9F00  7C 64 1B 78 */	mr r4, r3
/* 802BCFC4 002B9F04  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802BCFC8 002B9F08  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCFCC 002B9F0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BCFD0 002B9F10  7D 89 03 A6 */	mtctr r12
/* 802BCFD4 002B9F14  4E 80 04 21 */	bctrl 
/* 802BCFD8 002B9F18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BCFDC 002B9F1C  40 82 00 3C */	bne .L_802BD018
/* 802BCFE0 002B9F20  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BCFE4 002B9F24  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BCFE8 002B9F28  81 83 00 00 */	lwz r12, 0(r3)
/* 802BCFEC 002B9F2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802BCFF0 002B9F30  7D 89 03 A6 */	mtctr r12
/* 802BCFF4 002B9F34  4E 80 04 21 */	bctrl 
/* 802BCFF8 002B9F38  90 61 00 18 */	stw r3, 0x18(r1)
.L_802BCFFC:
/* 802BCFFC 002B9F3C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802BD000 002B9F40  38 61 00 14 */	addi r3, r1, 0x14
/* 802BD004 002B9F44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802BD008 002B9F48  7D 89 03 A6 */	mtctr r12
/* 802BD00C 002B9F4C  4E 80 04 21 */	bctrl 
/* 802BD010 002B9F50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BD014 002B9F54  41 82 FF 94 */	beq .L_802BCFA8
.L_802BD018:
/* 802BD018 002B9F58  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802BD01C 002B9F5C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD020 002B9F60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BD024 002B9F64  7D 89 03 A6 */	mtctr r12
/* 802BD028 002B9F68  4E 80 04 21 */	bctrl 
/* 802BD02C 002B9F6C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802BD030 002B9F70  7C 04 18 40 */	cmplw r4, r3
/* 802BD034 002B9F74  40 82 FE 8C */	bne .L_802BCEC0
/* 802BD038 002B9F78  2C 1F 00 00 */	cmpwi r31, 0
/* 802BD03C 002B9F7C  41 82 00 60 */	beq .L_802BD09C
/* 802BD040 002B9F80  4B E0 C5 61 */	bl rand
/* 802BD044 002B9F84  3C 80 43 30 */	lis r4, 0x4330
/* 802BD048 002B9F88  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802BD04C 002B9F8C  90 01 00 AC */	stw r0, 0xac(r1)
/* 802BD050 002B9F90  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 802BD054 002B9F94  C8 42 E0 88 */	lfd f2, lbl_8051C3E8@sda21(r2)
/* 802BD058 002B9F98  38 61 00 24 */	addi r3, r1, 0x24
/* 802BD05C 002B9F9C  90 81 00 A8 */	stw r4, 0xa8(r1)
/* 802BD060 002B9FA0  C0 02 E0 80 */	lfs f0, lbl_8051C3E0@sda21(r2)
/* 802BD064 002B9FA4  C8 21 00 A8 */	lfd f1, 0xa8(r1)
/* 802BD068 002B9FA8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 802BD06C 002B9FAC  EC 21 10 28 */	fsubs f1, f1, f2
/* 802BD070 002B9FB0  90 81 00 B0 */	stw r4, 0xb0(r1)
/* 802BD074 002B9FB4  EC 21 00 24 */	fdivs f1, f1, f0
/* 802BD078 002B9FB8  C8 01 00 B0 */	lfd f0, 0xb0(r1)
/* 802BD07C 002B9FBC  EC 00 10 28 */	fsubs f0, f0, f2
/* 802BD080 002B9FC0  EC 00 00 72 */	fmuls f0, f0, f1
/* 802BD084 002B9FC4  FC 00 00 1E */	fctiwz f0, f0
/* 802BD088 002B9FC8  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 802BD08C 002B9FCC  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 802BD090 002B9FD0  54 00 10 3A */	slwi r0, r0, 2
/* 802BD094 002B9FD4  7C 63 00 2E */	lwzx r3, r3, r0
/* 802BD098 002B9FD8  48 00 00 08 */	b .L_802BD0A0
.L_802BD09C:
/* 802BD09C 002B9FDC  38 60 00 00 */	li r3, 0
.L_802BD0A0:
/* 802BD0A0 002B9FE0  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802BD0A4 002B9FE4  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802BD0A8 002B9FE8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802BD0AC 002B9FEC  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 802BD0B0 002B9FF0  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 802BD0B4 002B9FF4  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 802BD0B8 002B9FF8  83 81 00 C0 */	lwz r28, 0xc0(r1)
/* 802BD0BC 002B9FFC  7C 08 03 A6 */	mtlr r0
/* 802BD0C0 002BA000  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802BD0C4 002BA004  4E 80 00 20 */	blr 
.endfn getRandFruitsPlant__Q34Game8Imomushi3ObjFv

.fn startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart, global
/* 802BD0C8 002BA008  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BD0CC 002BA00C  7C 08 02 A6 */	mflr r0
/* 802BD0D0 002BA010  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BD0D4 002BA014  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802BD0D8 002BA018  7C 9F 23 78 */	mr r31, r4
/* 802BD0DC 002BA01C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802BD0E0 002BA020  7C 7E 1B 78 */	mr r30, r3
/* 802BD0E4 002BA024  4B EE 23 41 */	bl endStick__Q24Game8CreatureFv
/* 802BD0E8 002BA028  28 1F 00 00 */	cmplwi r31, 0
/* 802BD0EC 002BA02C  41 82 00 8C */	beq .L_802BD178
/* 802BD0F0 002BA030  80 9E 02 30 */	lwz r4, 0x230(r30)
/* 802BD0F4 002BA034  7F C3 F3 78 */	mr r3, r30
/* 802BD0F8 002BA038  7F E5 FB 78 */	mr r5, r31
/* 802BD0FC 002BA03C  4B EE 1D F9 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 802BD100 002BA040  7F E3 FB 78 */	mr r3, r31
/* 802BD104 002BA044  38 81 00 08 */	addi r4, r1, 8
/* 802BD108 002BA048  4B E7 B1 71 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 802BD10C 002BA04C  38 61 00 08 */	addi r3, r1, 8
/* 802BD110 002BA050  38 9E 02 CC */	addi r4, r30, 0x2cc
/* 802BD114 002BA054  48 15 89 91 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 802BD118 002BA058  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BD11C 002BA05C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802BD120 002BA060  C0 61 00 08 */	lfs f3, 8(r1)
/* 802BD124 002BA064  EC 81 00 28 */	fsubs f4, f1, f0
/* 802BD128 002BA068  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802BD12C 002BA06C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802BD130 002BA070  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802BD134 002BA074  EC 63 10 28 */	fsubs f3, f3, f2
/* 802BD138 002BA078  EC 84 01 32 */	fmuls f4, f4, f4
/* 802BD13C 002BA07C  EC 41 00 28 */	fsubs f2, f1, f0
/* 802BD140 002BA080  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BD144 002BA084  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 802BD148 002BA088  EC 42 00 B2 */	fmuls f2, f2, f2
/* 802BD14C 002BA08C  EC 22 08 2A */	fadds f1, f2, f1
/* 802BD150 002BA090  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BD154 002BA094  40 81 00 14 */	ble .L_802BD168
/* 802BD158 002BA098  40 81 00 14 */	ble .L_802BD16C
/* 802BD15C 002BA09C  FC 00 08 34 */	frsqrte f0, f1
/* 802BD160 002BA0A0  EC 20 00 72 */	fmuls f1, f0, f1
/* 802BD164 002BA0A4  48 00 00 08 */	b .L_802BD16C
.L_802BD168:
/* 802BD168 002BA0A8  FC 20 00 90 */	fmr f1, f0
.L_802BD16C:
/* 802BD16C 002BA0AC  C0 02 E0 64 */	lfs f0, lbl_8051C3C4@sda21(r2)
/* 802BD170 002BA0B0  EC 00 08 24 */	fdivs f0, f0, f1
/* 802BD174 002BA0B4  D0 1E 02 FC */	stfs f0, 0x2fc(r30)
.L_802BD178:
/* 802BD178 002BA0B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BD17C 002BA0BC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802BD180 002BA0C0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802BD184 002BA0C4  7C 08 03 A6 */	mtlr r0
/* 802BD188 002BA0C8  38 21 00 30 */	addi r1, r1, 0x30
/* 802BD18C 002BA0CC  4E 80 00 20 */	blr 
.endfn startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart

.fn moveStickTube__Q34Game8Imomushi3ObjFv, global
/* 802BD190 002BA0D0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802BD194 002BA0D4  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 802BD198 002BA0D8  C0 04 08 1C */	lfs f0, 0x81c(r4)
/* 802BD19C 002BA0DC  C0 43 02 D0 */	lfs f2, 0x2d0(r3)
/* 802BD1A0 002BA0E0  EC 21 00 32 */	fmuls f1, f1, f0
/* 802BD1A4 002BA0E4  C0 63 02 D4 */	lfs f3, 0x2d4(r3)
/* 802BD1A8 002BA0E8  EC 42 00 32 */	fmuls f2, f2, f0
/* 802BD1AC 002BA0EC  EC 63 00 32 */	fmuls f3, f3, f0
/* 802BD1B0 002BA0F0  D0 23 01 D4 */	stfs f1, 0x1d4(r3)
/* 802BD1B4 002BA0F4  D0 43 01 D8 */	stfs f2, 0x1d8(r3)
/* 802BD1B8 002BA0F8  D0 63 01 DC */	stfs f3, 0x1dc(r3)
/* 802BD1BC 002BA0FC  4E 80 00 20 */	blr 
.endfn moveStickTube__Q34Game8Imomushi3ObjFv

.fn moveStickSphere__Q34Game8Imomushi3ObjFv, global
/* 802BD1C0 002BA100  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BD1C4 002BA104  7C 08 02 A6 */	mflr r0
/* 802BD1C8 002BA108  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BD1CC 002BA10C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BD1D0 002BA110  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802BD1D4 002BA114  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802BD1D8 002BA118  7C 7D 1B 78 */	mr r29, r3
/* 802BD1DC 002BA11C  83 E3 00 F4 */	lwz r31, 0xf4(r3)
/* 802BD1E0 002BA120  83 C3 00 F8 */	lwz r30, 0xf8(r3)
/* 802BD1E4 002BA124  4B EE 22 41 */	bl endStick__Q24Game8CreatureFv
/* 802BD1E8 002BA128  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802BD1EC 002BA12C  7F A3 EB 78 */	mr r3, r29
/* 802BD1F0 002BA130  C0 3D 02 D8 */	lfs f1, 0x2d8(r29)
/* 802BD1F4 002BA134  C0 04 08 44 */	lfs f0, 0x844(r4)
/* 802BD1F8 002BA138  C0 5D 02 DC */	lfs f2, 0x2dc(r29)
/* 802BD1FC 002BA13C  EC 21 00 32 */	fmuls f1, f1, f0
/* 802BD200 002BA140  C0 7D 02 E0 */	lfs f3, 0x2e0(r29)
/* 802BD204 002BA144  EC 42 00 32 */	fmuls f2, f2, f0
/* 802BD208 002BA148  EC 63 00 32 */	fmuls f3, f3, f0
/* 802BD20C 002BA14C  D0 3D 01 D4 */	stfs f1, 0x1d4(r29)
/* 802BD210 002BA150  D0 5D 01 D8 */	stfs f2, 0x1d8(r29)
/* 802BD214 002BA154  D0 7D 01 DC */	stfs f3, 0x1dc(r29)
/* 802BD218 002BA158  81 9D 00 00 */	lwz r12, 0(r29)
/* 802BD21C 002BA15C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802BD220 002BA160  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 802BD224 002BA164  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 802BD228 002BA168  7D 89 03 A6 */	mtctr r12
/* 802BD22C 002BA16C  4E 80 04 21 */	bctrl 
/* 802BD230 002BA170  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 802BD234 002BA174  7F A3 EB 78 */	mr r3, r29
/* 802BD238 002BA178  C0 1D 01 C8 */	lfs f0, 0x1c8(r29)
/* 802BD23C 002BA17C  7F E4 FB 78 */	mr r4, r31
/* 802BD240 002BA180  7F C5 F3 78 */	mr r5, r30
/* 802BD244 002BA184  EC 01 00 2A */	fadds f0, f1, f0
/* 802BD248 002BA188  D0 1D 01 8C */	stfs f0, 0x18c(r29)
/* 802BD24C 002BA18C  C0 3D 01 90 */	lfs f1, 0x190(r29)
/* 802BD250 002BA190  C0 1D 01 CC */	lfs f0, 0x1cc(r29)
/* 802BD254 002BA194  EC 01 00 2A */	fadds f0, f1, f0
/* 802BD258 002BA198  D0 1D 01 90 */	stfs f0, 0x190(r29)
/* 802BD25C 002BA19C  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 802BD260 002BA1A0  C0 1D 01 D0 */	lfs f0, 0x1d0(r29)
/* 802BD264 002BA1A4  EC 01 00 2A */	fadds f0, f1, f0
/* 802BD268 002BA1A8  D0 1D 01 94 */	stfs f0, 0x194(r29)
/* 802BD26C 002BA1AC  4B EE 1C 89 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 802BD270 002BA1B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BD274 002BA1B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BD278 002BA1B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802BD27C 002BA1BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802BD280 002BA1C0  7C 08 03 A6 */	mtlr r0
/* 802BD284 002BA1C4  38 21 00 20 */	addi r1, r1, 0x20
/* 802BD288 002BA1C8  4E 80 00 20 */	blr 
.endfn moveStickSphere__Q34Game8Imomushi3ObjFv

.fn eatTsuyukusa__Q34Game8Imomushi3ObjFv, global
/* 802BD28C 002BA1CC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802BD290 002BA1D0  7C 08 02 A6 */	mflr r0
/* 802BD294 002BA1D4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802BD298 002BA1D8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802BD29C 002BA1DC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802BD2A0 002BA1E0  7C 7E 1B 78 */	mr r30, r3
/* 802BD2A4 002BA1E4  80 63 00 F4 */	lwz r3, 0xf4(r3)
/* 802BD2A8 002BA1E8  28 03 00 00 */	cmplwi r3, 0
/* 802BD2AC 002BA1EC  41 82 01 64 */	beq .L_802BD410
/* 802BD2B0 002BA1F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD2B4 002BA1F4  7C 7F 1B 78 */	mr r31, r3
/* 802BD2B8 002BA1F8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802BD2BC 002BA1FC  7D 89 03 A6 */	mtctr r12
/* 802BD2C0 002BA200  4E 80 04 21 */	bctrl 
/* 802BD2C4 002BA204  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BD2C8 002BA208  41 82 01 48 */	beq .L_802BD410
/* 802BD2CC 002BA20C  7F E3 FB 78 */	mr r3, r31
/* 802BD2D0 002BA210  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BD2D4 002BA214  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 802BD2D8 002BA218  7D 89 03 A6 */	mtctr r12
/* 802BD2DC 002BA21C  4E 80 04 21 */	bctrl 
/* 802BD2E0 002BA220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BD2E4 002BA224  41 82 01 2C */	beq .L_802BD410
/* 802BD2E8 002BA228  7F E3 FB 78 */	mr r3, r31
/* 802BD2EC 002BA22C  38 9E 01 8C */	addi r4, r30, 0x18c
/* 802BD2F0 002BA230  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BD2F4 002BA234  81 8C 02 2C */	lwz r12, 0x22c(r12)
/* 802BD2F8 002BA238  7D 89 03 A6 */	mtctr r12
/* 802BD2FC 002BA23C  4E 80 04 21 */	bctrl 
/* 802BD300 002BA240  28 03 00 00 */	cmplwi r3, 0
/* 802BD304 002BA244  41 82 00 B4 */	beq .L_802BD3B8
/* 802BD308 002BA248  A0 03 04 3E */	lhz r0, 0x43e(r3)
/* 802BD30C 002BA24C  28 00 00 00 */	cmplwi r0, 0
/* 802BD310 002BA250  40 82 00 58 */	bne .L_802BD368
/* 802BD314 002BA254  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802BD318 002BA258  3C 60 80 4D */	lis r3, __vt__Q23efx9ArgImoEat@ha
/* 802BD31C 002BA25C  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802BD320 002BA260  38 00 00 00 */	li r0, 0
/* 802BD324 002BA264  90 81 00 28 */	stw r4, 0x28(r1)
/* 802BD328 002BA268  38 63 08 F8 */	addi r3, r3, __vt__Q23efx9ArgImoEat@l
/* 802BD32C 002BA26C  38 81 00 28 */	addi r4, r1, 0x28
/* 802BD330 002BA270  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802BD334 002BA274  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802BD338 002BA278  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802BD33C 002BA27C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802BD340 002BA280  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802BD344 002BA284  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802BD348 002BA288  90 61 00 28 */	stw r3, 0x28(r1)
/* 802BD34C 002BA28C  90 01 00 38 */	stw r0, 0x38(r1)
/* 802BD350 002BA290  80 7E 03 08 */	lwz r3, 0x308(r30)
/* 802BD354 002BA294  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD358 002BA298  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BD35C 002BA29C  7D 89 03 A6 */	mtctr r12
/* 802BD360 002BA2A0  4E 80 04 21 */	bctrl 
/* 802BD364 002BA2A4  48 00 00 54 */	b .L_802BD3B8
.L_802BD368:
/* 802BD368 002BA2A8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802BD36C 002BA2AC  3C 60 80 4D */	lis r3, __vt__Q23efx9ArgImoEat@ha
/* 802BD370 002BA2B0  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802BD374 002BA2B4  38 00 00 01 */	li r0, 1
/* 802BD378 002BA2B8  90 81 00 14 */	stw r4, 0x14(r1)
/* 802BD37C 002BA2BC  38 63 08 F8 */	addi r3, r3, __vt__Q23efx9ArgImoEat@l
/* 802BD380 002BA2C0  38 81 00 14 */	addi r4, r1, 0x14
/* 802BD384 002BA2C4  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802BD388 002BA2C8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802BD38C 002BA2CC  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802BD390 002BA2D0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802BD394 002BA2D4  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802BD398 002BA2D8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802BD39C 002BA2DC  90 61 00 14 */	stw r3, 0x14(r1)
/* 802BD3A0 002BA2E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BD3A4 002BA2E4  80 7E 03 08 */	lwz r3, 0x308(r30)
/* 802BD3A8 002BA2E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD3AC 002BA2EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BD3B0 002BA2F0  7D 89 03 A6 */	mtctr r12
/* 802BD3B4 002BA2F4  4E 80 04 21 */	bctrl 
.L_802BD3B8:
/* 802BD3B8 002BA2F8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802BD3BC 002BA2FC  C0 3E 02 C8 */	lfs f1, 0x2c8(r30)
/* 802BD3C0 002BA300  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 802BD3C4 002BA304  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BD3C8 002BA308  40 81 00 48 */	ble .L_802BD410
/* 802BD3CC 002BA30C  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802BD3D0 002BA310  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractEat@ha
/* 802BD3D4 002BA314  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 802BD3D8 002BA318  38 00 00 02 */	li r0, 2
/* 802BD3DC 002BA31C  90 81 00 08 */	stw r4, 8(r1)
/* 802BD3E0 002BA320  38 A3 22 9C */	addi r5, r3, __vt__Q24Game11InteractEat@l
/* 802BD3E4 002BA324  7F E3 FB 78 */	mr r3, r31
/* 802BD3E8 002BA328  38 81 00 08 */	addi r4, r1, 8
/* 802BD3EC 002BA32C  93 C1 00 0C */	stw r30, 0xc(r1)
/* 802BD3F0 002BA330  90 A1 00 08 */	stw r5, 8(r1)
/* 802BD3F4 002BA334  90 01 00 10 */	stw r0, 0x10(r1)
/* 802BD3F8 002BA338  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BD3FC 002BA33C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802BD400 002BA340  7D 89 03 A6 */	mtctr r12
/* 802BD404 002BA344  4E 80 04 21 */	bctrl 
/* 802BD408 002BA348  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BD40C 002BA34C  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
.L_802BD410:
/* 802BD410 002BA350  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802BD414 002BA354  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802BD418 002BA358  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802BD41C 002BA35C  7C 08 03 A6 */	mtlr r0
/* 802BD420 002BA360  38 21 00 50 */	addi r1, r1, 0x50
/* 802BD424 002BA364  4E 80 00 20 */	blr 
.endfn eatTsuyukusa__Q34Game8Imomushi3ObjFv

.fn isAttackable__Q34Game8Imomushi3ObjFv, global
/* 802BD428 002BA368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BD42C 002BA36C  7C 08 02 A6 */	mflr r0
/* 802BD430 002BA370  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD434 002BA374  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BD438 002BA378  80 63 02 30 */	lwz r3, 0x230(r3)
/* 802BD43C 002BA37C  28 03 00 00 */	cmplwi r3, 0
/* 802BD440 002BA380  41 82 00 44 */	beq .L_802BD484
/* 802BD444 002BA384  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD448 002BA388  7C 7F 1B 78 */	mr r31, r3
/* 802BD44C 002BA38C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802BD450 002BA390  7D 89 03 A6 */	mtctr r12
/* 802BD454 002BA394  4E 80 04 21 */	bctrl 
/* 802BD458 002BA398  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BD45C 002BA39C  41 82 00 28 */	beq .L_802BD484
/* 802BD460 002BA3A0  7F E3 FB 78 */	mr r3, r31
/* 802BD464 002BA3A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BD468 002BA3A8  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 802BD46C 002BA3AC  7D 89 03 A6 */	mtctr r12
/* 802BD470 002BA3B0  4E 80 04 21 */	bctrl 
/* 802BD474 002BA3B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BD478 002BA3B8  41 82 00 0C */	beq .L_802BD484
/* 802BD47C 002BA3BC  38 60 00 01 */	li r3, 1
/* 802BD480 002BA3C0  48 00 00 08 */	b .L_802BD488
.L_802BD484:
/* 802BD484 002BA3C4  38 60 00 00 */	li r3, 0
.L_802BD488:
/* 802BD488 002BA3C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BD48C 002BA3CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BD490 002BA3D0  7C 08 03 A6 */	mtlr r0
/* 802BD494 002BA3D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BD498 002BA3D8  4E 80 00 20 */	blr 
.endfn isAttackable__Q34Game8Imomushi3ObjFv

.fn isStickToFall__Q34Game8Imomushi3ObjFv, global
/* 802BD49C 002BA3DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BD4A0 002BA3E0  7C 08 02 A6 */	mflr r0
/* 802BD4A4 002BA3E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD4A8 002BA3E8  80 63 00 F4 */	lwz r3, 0xf4(r3)
/* 802BD4AC 002BA3EC  28 03 00 00 */	cmplwi r3, 0
/* 802BD4B0 002BA3F0  41 82 00 24 */	beq .L_802BD4D4
/* 802BD4B4 002BA3F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD4B8 002BA3F8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802BD4BC 002BA3FC  7D 89 03 A6 */	mtctr r12
/* 802BD4C0 002BA400  4E 80 04 21 */	bctrl 
/* 802BD4C4 002BA404  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BD4C8 002BA408  40 82 00 0C */	bne .L_802BD4D4
/* 802BD4CC 002BA40C  38 60 00 01 */	li r3, 1
/* 802BD4D0 002BA410  48 00 00 08 */	b .L_802BD4D8
.L_802BD4D4:
/* 802BD4D4 002BA414  38 60 00 00 */	li r3, 0
.L_802BD4D8:
/* 802BD4D8 002BA418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BD4DC 002BA41C  7C 08 03 A6 */	mtlr r0
/* 802BD4E0 002BA420  38 21 00 10 */	addi r1, r1, 0x10
/* 802BD4E4 002BA424  4E 80 00 20 */	blr 
.endfn isStickToFall__Q34Game8Imomushi3ObjFv

.fn setZukanTargetPosition__Q34Game8Imomushi3ObjFv, global
/* 802BD4E8 002BA428  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802BD4EC 002BA42C  7C 08 02 A6 */	mflr r0
/* 802BD4F0 002BA430  90 01 00 64 */	stw r0, 0x64(r1)
/* 802BD4F4 002BA434  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802BD4F8 002BA438  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802BD4FC 002BA43C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802BD500 002BA440  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802BD504 002BA444  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802BD508 002BA448  7C 7F 1B 78 */	mr r31, r3
/* 802BD50C 002BA44C  4B E0 C0 95 */	bl rand
/* 802BD510 002BA450  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802BD514 002BA454  3C 00 43 30 */	lis r0, 0x4330
/* 802BD518 002BA458  90 61 00 0C */	stw r3, 0xc(r1)
/* 802BD51C 002BA45C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802BD520 002BA460  C8 42 E0 88 */	lfd f2, lbl_8051C3E8@sda21(r2)
/* 802BD524 002BA464  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802BD528 002BA468  90 01 00 08 */	stw r0, 8(r1)
/* 802BD52C 002BA46C  C0 02 E0 90 */	lfs f0, lbl_8051C3F0@sda21(r2)
/* 802BD530 002BA470  C8 21 00 08 */	lfd f1, 8(r1)
/* 802BD534 002BA474  C0 A2 E0 80 */	lfs f5, lbl_8051C3E0@sda21(r2)
/* 802BD538 002BA478  EC 41 10 28 */	fsubs f2, f1, f2
/* 802BD53C 002BA47C  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802BD540 002BA480  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802BD544 002BA484  C0 82 E0 70 */	lfs f4, lbl_8051C3D0@sda21(r2)
/* 802BD548 002BA488  EC C0 00 B2 */	fmuls f6, f0, f2
/* 802BD54C 002BA48C  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802BD550 002BA490  EC 23 08 28 */	fsubs f1, f3, f1
/* 802BD554 002BA494  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802BD558 002BA498  EC 66 28 24 */	fdivs f3, f6, f5
/* 802BD55C 002BA49C  EF E4 18 2A */	fadds f31, f4, f3
/* 802BD560 002BA4A0  EC 42 00 28 */	fsubs f2, f2, f0
/* 802BD564 002BA4A4  4B D7 7B A5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802BD568 002BA4A8  FF C0 08 90 */	fmr f30, f1
/* 802BD56C 002BA4AC  4B E0 C0 35 */	bl rand
/* 802BD570 002BA4B0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802BD574 002BA4B4  3C 00 43 30 */	lis r0, 0x4330
/* 802BD578 002BA4B8  90 61 00 14 */	stw r3, 0x14(r1)
/* 802BD57C 002BA4BC  C8 42 E0 88 */	lfd f2, lbl_8051C3E8@sda21(r2)
/* 802BD580 002BA4C0  90 01 00 10 */	stw r0, 0x10(r1)
/* 802BD584 002BA4C4  C0 62 E0 94 */	lfs f3, lbl_8051C3F4@sda21(r2)
/* 802BD588 002BA4C8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802BD58C 002BA4CC  C0 22 E0 80 */	lfs f1, lbl_8051C3E0@sda21(r2)
/* 802BD590 002BA4D0  EC 80 10 28 */	fsubs f4, f0, f2
/* 802BD594 002BA4D4  C0 42 E0 98 */	lfs f2, lbl_8051C3F8@sda21(r2)
/* 802BD598 002BA4D8  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BD59C 002BA4DC  EC 63 01 32 */	fmuls f3, f3, f4
/* 802BD5A0 002BA4E0  EC 23 08 24 */	fdivs f1, f3, f1
/* 802BD5A4 002BA4E4  EC 3E 08 2A */	fadds f1, f30, f1
/* 802BD5A8 002BA4E8  EC A2 08 2A */	fadds f5, f2, f1
/* 802BD5AC 002BA4EC  FC 20 28 90 */	fmr f1, f5
/* 802BD5B0 002BA4F0  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802BD5B4 002BA4F4  40 80 00 08 */	bge .L_802BD5BC
/* 802BD5B8 002BA4F8  FC 20 28 50 */	fneg f1, f5
.L_802BD5BC:
/* 802BD5BC 002BA4FC  C0 62 E0 9C */	lfs f3, lbl_8051C3FC@sda21(r2)
/* 802BD5C0 002BA500  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802BD5C4 002BA504  C0 02 E0 60 */	lfs f0, lbl_8051C3C0@sda21(r2)
/* 802BD5C8 002BA508  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802BD5CC 002BA50C  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802BD5D0 002BA510  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 802BD5D4 002BA514  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802BD5D8 002BA518  C0 9F 01 9C */	lfs f4, 0x19c(r31)
/* 802BD5DC 002BA51C  FC 00 10 1E */	fctiwz f0, f2
/* 802BD5E0 002BA520  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802BD5E4 002BA524  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802BD5E8 002BA528  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802BD5EC 002BA52C  7C 64 02 14 */	add r3, r4, r0
/* 802BD5F0 002BA530  C0 03 00 04 */	lfs f0, 4(r3)
/* 802BD5F4 002BA534  EC 5F 08 3A */	fmadds f2, f31, f0, f1
/* 802BD5F8 002BA538  40 80 00 28 */	bge .L_802BD620
/* 802BD5FC 002BA53C  C0 02 E0 A0 */	lfs f0, lbl_8051C400@sda21(r2)
/* 802BD600 002BA540  EC 05 00 32 */	fmuls f0, f5, f0
/* 802BD604 002BA544  FC 00 00 1E */	fctiwz f0, f0
/* 802BD608 002BA548  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802BD60C 002BA54C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BD610 002BA550  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802BD614 002BA554  7C 04 04 2E */	lfsx f0, r4, r0
/* 802BD618 002BA558  FC 20 00 50 */	fneg f1, f0
/* 802BD61C 002BA55C  48 00 00 1C */	b .L_802BD638
.L_802BD620:
/* 802BD620 002BA560  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802BD624 002BA564  FC 00 00 1E */	fctiwz f0, f0
/* 802BD628 002BA568  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802BD62C 002BA56C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802BD630 002BA570  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802BD634 002BA574  7C 24 04 2E */	lfsx f1, r4, r0
.L_802BD638:
/* 802BD638 002BA578  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802BD63C 002BA57C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802BD640 002BA580  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 802BD644 002BA584  D0 9F 02 F4 */	stfs f4, 0x2f4(r31)
/* 802BD648 002BA588  D0 5F 02 F8 */	stfs f2, 0x2f8(r31)
/* 802BD64C 002BA58C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802BD650 002BA590  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802BD654 002BA594  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802BD658 002BA598  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802BD65C 002BA59C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802BD660 002BA5A0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802BD664 002BA5A4  7C 08 03 A6 */	mtlr r0
/* 802BD668 002BA5A8  38 21 00 60 */	addi r1, r1, 0x60
/* 802BD66C 002BA5AC  4E 80 00 20 */	blr 
.endfn setZukanTargetPosition__Q34Game8Imomushi3ObjFv

.fn isInZukanTargetArea__Q34Game8Imomushi3ObjFv, global
/* 802BD670 002BA5B0  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802BD674 002BA5B4  C0 03 02 F8 */	lfs f0, 0x2f8(r3)
/* 802BD678 002BA5B8  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802BD67C 002BA5BC  EC 61 00 28 */	fsubs f3, f1, f0
/* 802BD680 002BA5C0  C0 23 02 F0 */	lfs f1, 0x2f0(r3)
/* 802BD684 002BA5C4  C0 02 E0 A4 */	lfs f0, lbl_8051C404@sda21(r2)
/* 802BD688 002BA5C8  EC 42 08 28 */	fsubs f2, f2, f1
/* 802BD68C 002BA5CC  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802BD690 002BA5D0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802BD694 002BA5D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BD698 002BA5D8  7C 00 00 26 */	mfcr r0
/* 802BD69C 002BA5DC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802BD6A0 002BA5E0  4E 80 00 20 */	blr 
.endfn isInZukanTargetArea__Q34Game8Imomushi3ObjFv

.fn createEffect__Q34Game8Imomushi3ObjFv, global
/* 802BD6A4 002BA5E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BD6A8 002BA5E8  7C 08 02 A6 */	mflr r0
/* 802BD6AC 002BA5EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD6B0 002BA5F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BD6B4 002BA5F4  7C 7F 1B 78 */	mr r31, r3
/* 802BD6B8 002BA5F8  38 60 00 14 */	li r3, 0x14
/* 802BD6BC 002BA5FC  4B D6 67 E9 */	bl __nw__FUl
/* 802BD6C0 002BA600  28 03 00 00 */	cmplwi r3, 0
/* 802BD6C4 002BA604  41 82 00 78 */	beq .L_802BD73C
/* 802BD6C8 002BA608  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802BD6CC 002BA60C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802BD6D0 002BA610  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802BD6D4 002BA614  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802BD6D8 002BA618  90 03 00 00 */	stw r0, 0(r3)
/* 802BD6DC 002BA61C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802BD6E0 002BA620  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802BD6E4 002BA624  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802BD6E8 002BA628  90 03 00 04 */	stw r0, 4(r3)
/* 802BD6EC 002BA62C  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802BD6F0 002BA630  3C 80 80 4E */	lis r4, __vt__Q23efx7TImoEat@ha
/* 802BD6F4 002BA634  38 05 00 14 */	addi r0, r5, 0x14
/* 802BD6F8 002BA638  90 A3 00 00 */	stw r5, 0(r3)
/* 802BD6FC 002BA63C  38 84 6E CC */	addi r4, r4, __vt__Q23efx7TImoEat@l
/* 802BD700 002BA640  39 20 00 00 */	li r9, 0
/* 802BD704 002BA644  39 00 02 B2 */	li r8, 0x2b2
/* 802BD708 002BA648  90 03 00 04 */	stw r0, 4(r3)
/* 802BD70C 002BA64C  38 C7 00 14 */	addi r6, r7, 0x14
/* 802BD710 002BA650  38 A0 00 B6 */	li r5, 0xb6
/* 802BD714 002BA654  38 04 00 14 */	addi r0, r4, 0x14
/* 802BD718 002BA658  91 23 00 08 */	stw r9, 8(r3)
/* 802BD71C 002BA65C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802BD720 002BA660  99 23 00 0E */	stb r9, 0xe(r3)
/* 802BD724 002BA664  90 E3 00 00 */	stw r7, 0(r3)
/* 802BD728 002BA668  90 C3 00 04 */	stw r6, 4(r3)
/* 802BD72C 002BA66C  91 23 00 10 */	stw r9, 0x10(r3)
/* 802BD730 002BA670  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802BD734 002BA674  90 83 00 00 */	stw r4, 0(r3)
/* 802BD738 002BA678  90 03 00 04 */	stw r0, 4(r3)
.L_802BD73C:
/* 802BD73C 002BA67C  90 7F 03 08 */	stw r3, 0x308(r31)
/* 802BD740 002BA680  38 60 00 14 */	li r3, 0x14
/* 802BD744 002BA684  4B D6 67 61 */	bl __nw__FUl
/* 802BD748 002BA688  28 03 00 00 */	cmplwi r3, 0
/* 802BD74C 002BA68C  41 82 00 7C */	beq .L_802BD7C8
/* 802BD750 002BA690  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802BD754 002BA694  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802BD758 002BA698  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802BD75C 002BA69C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802BD760 002BA6A0  90 03 00 00 */	stw r0, 0(r3)
/* 802BD764 002BA6A4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802BD768 002BA6A8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802BD76C 002BA6AC  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 802BD770 002BA6B0  90 03 00 04 */	stw r0, 4(r3)
/* 802BD774 002BA6B4  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 802BD778 002BA6B8  3C 80 80 4E */	lis r4, __vt__Q23efx9TImoSmoke@ha
/* 802BD77C 002BA6BC  38 05 00 14 */	addi r0, r5, 0x14
/* 802BD780 002BA6C0  90 A3 00 00 */	stw r5, 0(r3)
/* 802BD784 002BA6C4  38 84 6E 58 */	addi r4, r4, __vt__Q23efx9TImoSmoke@l
/* 802BD788 002BA6C8  39 40 00 00 */	li r10, 0
/* 802BD78C 002BA6CC  39 20 02 B2 */	li r9, 0x2b2
/* 802BD790 002BA6D0  90 03 00 04 */	stw r0, 4(r3)
/* 802BD794 002BA6D4  38 E8 00 14 */	addi r7, r8, 0x14
/* 802BD798 002BA6D8  38 DF 01 8C */	addi r6, r31, 0x18c
/* 802BD79C 002BA6DC  38 A0 00 B8 */	li r5, 0xb8
/* 802BD7A0 002BA6E0  91 43 00 08 */	stw r10, 8(r3)
/* 802BD7A4 002BA6E4  38 04 00 14 */	addi r0, r4, 0x14
/* 802BD7A8 002BA6E8  B1 23 00 0C */	sth r9, 0xc(r3)
/* 802BD7AC 002BA6EC  99 43 00 0E */	stb r10, 0xe(r3)
/* 802BD7B0 002BA6F0  91 03 00 00 */	stw r8, 0(r3)
/* 802BD7B4 002BA6F4  90 E3 00 04 */	stw r7, 4(r3)
/* 802BD7B8 002BA6F8  90 C3 00 10 */	stw r6, 0x10(r3)
/* 802BD7BC 002BA6FC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802BD7C0 002BA700  90 83 00 00 */	stw r4, 0(r3)
/* 802BD7C4 002BA704  90 03 00 04 */	stw r0, 4(r3)
.L_802BD7C8:
/* 802BD7C8 002BA708  90 7F 03 0C */	stw r3, 0x30c(r31)
/* 802BD7CC 002BA70C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BD7D0 002BA710  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BD7D4 002BA714  7C 08 03 A6 */	mtlr r0
/* 802BD7D8 002BA718  38 21 00 10 */	addi r1, r1, 0x10
/* 802BD7DC 002BA71C  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game8Imomushi3ObjFv

.fn setupEffect__Q34Game8Imomushi3ObjFv, global
/* 802BD7E0 002BA720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BD7E4 002BA724  7C 08 02 A6 */	mflr r0
/* 802BD7E8 002BA728  38 82 E0 A8 */	addi r4, r2, lbl_8051C408@sda21
/* 802BD7EC 002BA72C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD7F0 002BA730  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BD7F4 002BA734  7C 7F 1B 78 */	mr r31, r3
/* 802BD7F8 002BA738  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802BD7FC 002BA73C  48 18 17 E9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802BD800 002BA740  48 16 C0 A1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802BD804 002BA744  80 9F 03 08 */	lwz r4, 0x308(r31)
/* 802BD808 002BA748  90 64 00 10 */	stw r3, 0x10(r4)
/* 802BD80C 002BA74C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BD810 002BA750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BD814 002BA754  7C 08 03 A6 */	mtlr r0
/* 802BD818 002BA758  38 21 00 10 */	addi r1, r1, 0x10
/* 802BD81C 002BA75C  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game8Imomushi3ObjFv

.fn createAppearEffect__Q34Game8Imomushi3ObjFv, global
/* 802BD820 002BA760  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BD824 002BA764  7C 08 02 A6 */	mflr r0
/* 802BD828 002BA768  3C 80 80 49 */	lis r4, lbl_8048AC3C@ha
/* 802BD82C 002BA76C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BD830 002BA770  38 84 AC 3C */	addi r4, r4, lbl_8048AC3C@l
/* 802BD834 002BA774  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802BD838 002BA778  48 18 17 AD */	bl getJoint__Q28SysShape5ModelFPc
/* 802BD83C 002BA77C  48 16 C0 65 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802BD840 002BA780  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802BD844 002BA784  38 C0 00 00 */	li r6, 0
/* 802BD848 002BA788  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802BD84C 002BA78C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802BD850 002BA790  90 01 00 08 */	stw r0, 8(r1)
/* 802BD854 002BA794  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802BD858 002BA798  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802BD85C 002BA79C  3C 80 80 4E */	lis r4, __vt__Q23efx13TUjinkoAp_Imo@ha
/* 802BD860 002BA7A0  90 01 00 08 */	stw r0, 8(r1)
/* 802BD864 002BA7A4  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802BD868 002BA7A8  38 E0 01 CE */	li r7, 0x1ce
/* 802BD86C 002BA7AC  38 A0 01 CF */	li r5, 0x1cf
/* 802BD870 002BA7B0  90 01 00 08 */	stw r0, 8(r1)
/* 802BD874 002BA7B4  38 04 6E A4 */	addi r0, r4, __vt__Q23efx13TUjinkoAp_Imo@l
/* 802BD878 002BA7B8  38 80 00 00 */	li r4, 0
/* 802BD87C 002BA7BC  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BD880 002BA7C0  38 61 00 08 */	addi r3, r1, 8
/* 802BD884 002BA7C4  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802BD888 002BA7C8  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 802BD88C 002BA7CC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802BD890 002BA7D0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802BD894 002BA7D4  90 01 00 08 */	stw r0, 8(r1)
/* 802BD898 002BA7D8  48 0F 5E F1 */	bl create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg
/* 802BD89C 002BA7DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BD8A0 002BA7E0  7C 08 03 A6 */	mtlr r0
/* 802BD8A4 002BA7E4  38 21 00 20 */	addi r1, r1, 0x20
/* 802BD8A8 002BA7E8  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game8Imomushi3ObjFv

.fn createDisAppearEffect__Q34Game8Imomushi3ObjFv, global
/* 802BD8AC 002BA7EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BD8B0 002BA7F0  7C 08 02 A6 */	mflr r0
/* 802BD8B4 002BA7F4  3C 80 80 49 */	lis r4, lbl_8048AC3C@ha
/* 802BD8B8 002BA7F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BD8BC 002BA7FC  38 84 AC 3C */	addi r4, r4, lbl_8048AC3C@l
/* 802BD8C0 002BA800  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802BD8C4 002BA804  48 18 17 21 */	bl getJoint__Q28SysShape5ModelFPc
/* 802BD8C8 002BA808  48 16 BF D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802BD8CC 002BA80C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802BD8D0 002BA810  38 C0 00 00 */	li r6, 0
/* 802BD8D4 002BA814  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802BD8D8 002BA818  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802BD8DC 002BA81C  90 01 00 08 */	stw r0, 8(r1)
/* 802BD8E0 002BA820  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802BD8E4 002BA824  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802BD8E8 002BA828  3C 80 80 4E */	lis r4, __vt__Q23efx13TUjinkoHd_Imo@ha
/* 802BD8EC 002BA82C  90 01 00 08 */	stw r0, 8(r1)
/* 802BD8F0 002BA830  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802BD8F4 002BA834  38 E0 01 D1 */	li r7, 0x1d1
/* 802BD8F8 002BA838  38 A0 01 D2 */	li r5, 0x1d2
/* 802BD8FC 002BA83C  90 01 00 08 */	stw r0, 8(r1)
/* 802BD900 002BA840  38 04 6E B8 */	addi r0, r4, __vt__Q23efx13TUjinkoHd_Imo@l
/* 802BD904 002BA844  38 80 00 00 */	li r4, 0
/* 802BD908 002BA848  90 61 00 18 */	stw r3, 0x18(r1)
/* 802BD90C 002BA84C  38 61 00 08 */	addi r3, r1, 8
/* 802BD910 002BA850  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802BD914 002BA854  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 802BD918 002BA858  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802BD91C 002BA85C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802BD920 002BA860  90 01 00 08 */	stw r0, 8(r1)
/* 802BD924 002BA864  48 0F 5D F1 */	bl create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg
/* 802BD928 002BA868  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BD92C 002BA86C  7C 08 03 A6 */	mtlr r0
/* 802BD930 002BA870  38 21 00 20 */	addi r1, r1, 0x20
/* 802BD934 002BA874  4E 80 00 20 */	blr 
.endfn createDisAppearEffect__Q34Game8Imomushi3ObjFv

.fn startMoveTraceEffect__Q34Game8Imomushi3ObjFv, global
/* 802BD938 002BA878  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BD93C 002BA87C  7C 08 02 A6 */	mflr r0
/* 802BD940 002BA880  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802BD944 002BA884  3C 80 80 4B */	lis r4, __vt__Q23efx8ArgScale@ha
/* 802BD948 002BA888  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BD94C 002BA88C  38 04 A2 DC */	addi r0, r4, __vt__Q23efx8ArgScale@l
/* 802BD950 002BA890  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 802BD954 002BA894  C0 02 E0 64 */	lfs f0, lbl_8051C3C4@sda21(r2)
/* 802BD958 002BA898  81 03 01 8C */	lwz r8, 0x18c(r3)
/* 802BD95C 002BA89C  38 81 00 14 */	addi r4, r1, 0x14
/* 802BD960 002BA8A0  80 E3 01 90 */	lwz r7, 0x190(r3)
/* 802BD964 002BA8A4  80 C3 01 94 */	lwz r6, 0x194(r3)
/* 802BD968 002BA8A8  91 01 00 08 */	stw r8, 8(r1)
/* 802BD96C 002BA8AC  90 E1 00 0C */	stw r7, 0xc(r1)
/* 802BD970 002BA8B0  C0 61 00 08 */	lfs f3, 8(r1)
/* 802BD974 002BA8B4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802BD978 002BA8B8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802BD97C 002BA8BC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802BD980 002BA8C0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802BD984 002BA8C4  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 802BD988 002BA8C8  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 802BD98C 002BA8CC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802BD990 002BA8D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD994 002BA8D4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802BD998 002BA8D8  80 63 03 0C */	lwz r3, 0x30c(r3)
/* 802BD99C 002BA8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD9A0 002BA8E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BD9A4 002BA8E4  7D 89 03 A6 */	mtctr r12
/* 802BD9A8 002BA8E8  4E 80 04 21 */	bctrl 
/* 802BD9AC 002BA8EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BD9B0 002BA8F0  7C 08 03 A6 */	mtlr r0
/* 802BD9B4 002BA8F4  38 21 00 30 */	addi r1, r1, 0x30
/* 802BD9B8 002BA8F8  4E 80 00 20 */	blr 
.endfn startMoveTraceEffect__Q34Game8Imomushi3ObjFv

.fn finishMoveTraceEffect__Q34Game8Imomushi3ObjFv, global
/* 802BD9BC 002BA8FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BD9C0 002BA900  7C 08 02 A6 */	mflr r0
/* 802BD9C4 002BA904  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD9C8 002BA908  80 63 03 0C */	lwz r3, 0x30c(r3)
/* 802BD9CC 002BA90C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BD9D0 002BA910  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802BD9D4 002BA914  7D 89 03 A6 */	mtctr r12
/* 802BD9D8 002BA918  4E 80 04 21 */	bctrl 
/* 802BD9DC 002BA91C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BD9E0 002BA920  7C 08 03 A6 */	mtlr r0
/* 802BD9E4 002BA924  38 21 00 10 */	addi r1, r1, 0x10
/* 802BD9E8 002BA928  4E 80 00 20 */	blr 
.endfn finishMoveTraceEffect__Q34Game8Imomushi3ObjFv

.fn effectDrawOn__Q34Game8Imomushi3ObjFv, global
/* 802BD9EC 002BA92C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BD9F0 002BA930  7C 08 02 A6 */	mflr r0
/* 802BD9F4 002BA934  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BD9F8 002BA938  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BD9FC 002BA93C  7C 7F 1B 78 */	mr r31, r3
/* 802BDA00 002BA940  80 63 03 08 */	lwz r3, 0x308(r3)
/* 802BDA04 002BA944  81 83 00 00 */	lwz r12, 0(r3)
/* 802BDA08 002BA948  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802BDA0C 002BA94C  7D 89 03 A6 */	mtctr r12
/* 802BDA10 002BA950  4E 80 04 21 */	bctrl 
/* 802BDA14 002BA954  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 802BDA18 002BA958  81 83 00 00 */	lwz r12, 0(r3)
/* 802BDA1C 002BA95C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802BDA20 002BA960  7D 89 03 A6 */	mtctr r12
/* 802BDA24 002BA964  4E 80 04 21 */	bctrl 
/* 802BDA28 002BA968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BDA2C 002BA96C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BDA30 002BA970  7C 08 03 A6 */	mtlr r0
/* 802BDA34 002BA974  38 21 00 10 */	addi r1, r1, 0x10
/* 802BDA38 002BA978  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game8Imomushi3ObjFv

.fn effectDrawOff__Q34Game8Imomushi3ObjFv, global
/* 802BDA3C 002BA97C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BDA40 002BA980  7C 08 02 A6 */	mflr r0
/* 802BDA44 002BA984  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BDA48 002BA988  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BDA4C 002BA98C  7C 7F 1B 78 */	mr r31, r3
/* 802BDA50 002BA990  80 63 03 08 */	lwz r3, 0x308(r3)
/* 802BDA54 002BA994  81 83 00 00 */	lwz r12, 0(r3)
/* 802BDA58 002BA998  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802BDA5C 002BA99C  7D 89 03 A6 */	mtctr r12
/* 802BDA60 002BA9A0  4E 80 04 21 */	bctrl 
/* 802BDA64 002BA9A4  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 802BDA68 002BA9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BDA6C 002BA9AC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802BDA70 002BA9B0  7D 89 03 A6 */	mtctr r12
/* 802BDA74 002BA9B4  4E 80 04 21 */	bctrl 
/* 802BDA78 002BA9B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BDA7C 002BA9BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BDA80 002BA9C0  7C 08 03 A6 */	mtlr r0
/* 802BDA84 002BA9C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BDA88 002BA9C8  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game8Imomushi3ObjFv

.fn getName__Q23efx9ArgImoEatFv, weak
/* 802BDA8C 002BA9CC  3C 60 80 49 */	lis r3, lbl_8048AC48@ha
/* 802BDA90 002BA9D0  38 63 AC 48 */	addi r3, r3, lbl_8048AC48@l
/* 802BDA94 002BA9D4  4E 80 00 20 */	blr 
.endfn getName__Q23efx9ArgImoEatFv

.fn isUnderground__Q34Game8Imomushi3ObjFv, weak
/* 802BDA98 002BA9D8  88 63 02 C0 */	lbz r3, 0x2c0(r3)
/* 802BDA9C 002BA9DC  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game8Imomushi3ObjFv

.fn getDownSmokeScale__Q34Game8Imomushi3ObjFv, weak
/* 802BDAA0 002BA9E0  C0 22 E0 B0 */	lfs f1, lbl_8051C410@sda21(r2)
/* 802BDAA4 002BA9E4  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game8Imomushi3ObjFv

.fn getEnemyTypeID__Q34Game8Imomushi3ObjFv, weak
/* 802BDAA8 002BA9E8  38 60 00 41 */	li r3, 0x41
/* 802BDAAC 002BA9EC  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game8Imomushi3ObjFv
