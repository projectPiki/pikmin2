.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx13TKabutoAttack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx13TKabutoAttack
.obj __vt__Q34Game6Kabuto3Obj, global
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
	.4byte onInit__Q34Game6Kabuto3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game6Kabuto3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game6Kabuto3ObjFv
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
	.4byte getShadowParam__Q34Game6Kabuto3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game6Kabuto3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game6Kabuto3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game6Kabuto3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game6Kabuto3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte 0
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
	.4byte initWalkSmokeEffect__Q34Game6Kabuto3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game6Kabuto3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game6Kabuto3ObjFv
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
	.4byte doStartStoneState__Q34Game6Kabuto3ObjFv
	.4byte doFinishStoneState__Q34Game6Kabuto3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game6Kabuto3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game6Kabuto3ObjFv
	.4byte doStartMovie__Q34Game6Kabuto3ObjFv
	.4byte doEndMovie__Q34Game6Kabuto3ObjFv
	.4byte setFSM__Q34Game6Kabuto3ObjFPQ34Game6Kabuto3FSM
	.4byte createEffect__Q34Game6Kabuto3ObjFv
	.4byte setupEffect__Q34Game6Kabuto3ObjFv
	.4byte startRotateEffect__Q34Game6Kabuto3ObjFv
	.4byte finishRotateEffect__Q34Game6Kabuto3ObjFv
	.4byte startWaitEffect__Q34Game6Kabuto3ObjFv
	.4byte finishWaitEffect__Q34Game6Kabuto3ObjFv
	.4byte effectDrawOn__Q34Game6Kabuto3ObjFv
	.4byte effectDrawOff__Q34Game6Kabuto3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@740@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game6Kabuto3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051CDC8, local
	.float 128.0
.endobj lbl_8051CDC8
.obj lbl_8051CDCC, local
	.float 0.0
.endobj lbl_8051CDCC
.balign 4
.obj lbl_8051CDD0, local
	.asciz "center"
.endobj lbl_8051CDD0
.balign 4
.obj lbl_8051CDD8, local
	.float 5.0
.endobj lbl_8051CDD8
.obj lbl_8051CDDC, local
	.float 1.0
.endobj lbl_8051CDDC
.obj lbl_8051CDE0, local
	.float 50.0
.endobj lbl_8051CDE0
.obj lbl_8051CDE4, local
	.float 10.0
.endobj lbl_8051CDE4
.obj lbl_8051CDE8, local
	.float 25.0
.endobj lbl_8051CDE8
.obj lbl_8051CDEC, local
	.float -1000.0
.endobj lbl_8051CDEC
.balign 4
.obj lbl_8051CDF0, local
	.asciz "rhand2"
.endobj lbl_8051CDF0
.balign 4
.obj lbl_8051CDF8, local
	.float 11.0
.endobj lbl_8051CDF8
.balign 4
.obj lbl_8051CDFC, local
	.asciz "rleg"
.endobj lbl_8051CDFC
.balign 4
.obj lbl_8051CE04, local
	.float 16.0
.endobj lbl_8051CE04
.balign 4
.obj lbl_8051CE08, local
	.asciz "lhand2"
.endobj lbl_8051CE08
.balign 4
.obj lbl_8051CE10, local
	.asciz "lleg"
.endobj lbl_8051CE10
.balign 4
.obj lbl_8051CE18, local
	.float 32768.0
.endobj lbl_8051CE18
.obj lbl_8051CE1C, local
	.float 3.1415927
.endobj lbl_8051CE1C
.obj lbl_8051CE20, local
	.float 1.5707964
.endobj lbl_8051CE20
.obj lbl_8051CE24, local
	.float 325.9493
.endobj lbl_8051CE24
.obj lbl_8051CE28, local
	.float -325.9493
.endobj lbl_8051CE28
.balign 8
.obj lbl_8051CE30, local
	.8byte 0x4330000080000000
.endobj lbl_8051CE30
.obj lbl_8051CE38, local
	.float 0.5
.endobj lbl_8051CE38
.obj lbl_8051CE3C, local
	.float 0.75
.endobj lbl_8051CE3C
.obj lbl_8051CE40, local
	.float 15.0
.endobj lbl_8051CE40
.balign 4
.obj lbl_8051CE44, local
	.asciz "mouth"
.endobj lbl_8051CE44
.balign 4
.obj lbl_8051CE4C, local
	.float 180.0
.endobj lbl_8051CE4C
.balign 4
.obj lbl_8051CE50, local
	.asciz "head"
.endobj lbl_8051CE50
.balign 4
.obj lbl_8051CE58, local
	.float 0.9
.endobj lbl_8051CE58

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game6Kabuto3ObjFv, global
/* 802E4178 002E10B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E417C 002E10BC  7C 08 02 A6 */	mflr r0
/* 802E4180 002E10C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4184 002E10C4  7C 80 07 35 */	extsh. r0, r4
/* 802E4188 002E10C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E418C 002E10CC  7C 7F 1B 78 */	mr r31, r3
/* 802E4190 002E10D0  93 C1 00 08 */	stw r30, 8(r1)
/* 802E4194 002E10D4  41 82 00 24 */	beq .L_802E41B8
/* 802E4198 002E10D8  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802E419C 002E10DC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802E41A0 002E10E0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802E41A4 002E10E4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802E41A8 002E10E8  38 00 00 00 */	li r0, 0
/* 802E41AC 002E10EC  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802E41B0 002E10F0  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 802E41B4 002E10F4  90 1F 02 EC */	stw r0, 0x2ec(r31)
.L_802E41B8:
/* 802E41B8 002E10F8  7F E3 FB 78 */	mr r3, r31
/* 802E41BC 002E10FC  38 80 00 00 */	li r4, 0
/* 802E41C0 002E1100  4B E1 D1 E1 */	bl __ct__Q24Game9EnemyBaseFv
/* 802E41C4 002E1104  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3Obj@ha
/* 802E41C8 002E1108  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802E41CC 002E110C  38 A3 3C 54 */	addi r5, r3, __vt__Q34Game6Kabuto3Obj@l
/* 802E41D0 002E1110  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E41D4 002E1114  90 BF 00 00 */	stw r5, 0(r31)
/* 802E41D8 002E1118  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802E41DC 002E111C  38 A5 03 1C */	addi r5, r5, 0x31c
/* 802E41E0 002E1120  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802E41E4 002E1124  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802E41E8 002E1128  90 A4 00 00 */	stw r5, 0(r4)
/* 802E41EC 002E112C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802E41F0 002E1130  7C 04 00 50 */	subf r0, r4, r0
/* 802E41F4 002E1134  90 04 00 0C */	stw r0, 0xc(r4)
/* 802E41F8 002E1138  4B E4 61 5D */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 802E41FC 002E113C  38 60 00 2C */	li r3, 0x2c
/* 802E4200 002E1140  4B D3 FC A5 */	bl __nw__FUl
/* 802E4204 002E1144  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E4208 002E1148  41 82 00 44 */	beq .L_802E424C
/* 802E420C 002E114C  4B E4 37 69 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802E4210 002E1150  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto14ProperAnimator@ha
/* 802E4214 002E1154  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802E4218 002E1158  38 03 3B 30 */	addi r0, r3, __vt__Q34Game6Kabuto14ProperAnimator@l
/* 802E421C 002E115C  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802E4220 002E1160  90 1E 00 00 */	stw r0, 0(r30)
/* 802E4224 002E1164  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802E4228 002E1168  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802E422C 002E116C  38 00 00 00 */	li r0, 0
/* 802E4230 002E1170  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802E4234 002E1174  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802E4238 002E1178  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802E423C 002E117C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802E4240 002E1180  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802E4244 002E1184  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802E4248 002E1188  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802E424C:
/* 802E424C 002E118C  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802E4250 002E1190  38 60 00 1C */	li r3, 0x1c
/* 802E4254 002E1194  4B D3 FC 51 */	bl __nw__FUl
/* 802E4258 002E1198  7C 64 1B 79 */	or. r4, r3, r3
/* 802E425C 002E119C  41 82 00 24 */	beq .L_802E4280
/* 802E4260 002E11A0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802E4264 002E11A4  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3FSM@ha
/* 802E4268 002E11A8  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802E426C 002E11AC  38 A0 FF FF */	li r5, -1
/* 802E4270 002E11B0  90 04 00 00 */	stw r0, 0(r4)
/* 802E4274 002E11B4  38 03 3B 08 */	addi r0, r3, __vt__Q34Game6Kabuto3FSM@l
/* 802E4278 002E11B8  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802E427C 002E11BC  90 04 00 00 */	stw r0, 0(r4)
.L_802E4280:
/* 802E4280 002E11C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4284 002E11C4  7F E3 FB 78 */	mr r3, r31
/* 802E4288 002E11C8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802E428C 002E11CC  7D 89 03 A6 */	mtctr r12
/* 802E4290 002E11D0  4E 80 04 21 */	bctrl 
/* 802E4294 002E11D4  7F E3 FB 78 */	mr r3, r31
/* 802E4298 002E11D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E429C 002E11DC  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 802E42A0 002E11E0  7D 89 03 A6 */	mtctr r12
/* 802E42A4 002E11E4  4E 80 04 21 */	bctrl 
/* 802E42A8 002E11E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E42AC 002E11EC  7F E3 FB 78 */	mr r3, r31
/* 802E42B0 002E11F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E42B4 002E11F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E42B8 002E11F8  7C 08 03 A6 */	mtlr r0
/* 802E42BC 002E11FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E42C0 002E1200  4E 80 00 20 */	blr 
.endfn __ct__Q34Game6Kabuto3ObjFv

.fn createEffect__Q34Game6Kabuto3ObjFv, weak
/* 802E42C4 002E1204  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game6Kabuto3ObjFv

.fn setInitialSetting__Q34Game6Kabuto3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802E42C8 002E1208  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game6Kabuto3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game6Kabuto3ObjFPQ24Game15CreatureInitArg, global
/* 802E42CC 002E120C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E42D0 002E1210  7C 08 02 A6 */	mflr r0
/* 802E42D4 002E1214  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E42D8 002E1218  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E42DC 002E121C  7C 7F 1B 78 */	mr r31, r3
/* 802E42E0 002E1220  4B E1 D7 79 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802E42E4 002E1224  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802E42E8 002E1228  28 03 00 00 */	cmplwi r3, 0
/* 802E42EC 002E122C  41 82 00 1C */	beq .L_802E4308
/* 802E42F0 002E1230  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802E42F4 002E1234  2C 00 00 04 */	cmpwi r0, 4
/* 802E42F8 002E1238  40 82 00 10 */	bne .L_802E4308
/* 802E42FC 002E123C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E4300 002E1240  60 00 00 01 */	ori r0, r0, 1
/* 802E4304 002E1244  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_802E4308:
/* 802E4308 002E1248  C0 22 EA 68 */	lfs f1, lbl_8051CDC8@sda21(r2)
/* 802E430C 002E124C  38 80 00 00 */	li r4, 0
/* 802E4310 002E1250  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E4314 002E1254  38 00 FF FF */	li r0, -1
/* 802E4318 002E1258  D0 3F 02 DC */	stfs f1, 0x2dc(r31)
/* 802E431C 002E125C  7F E3 FB 78 */	mr r3, r31
/* 802E4320 002E1260  98 9F 02 E1 */	stb r4, 0x2e1(r31)
/* 802E4324 002E1264  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802E4328 002E1268  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802E432C 002E126C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E4330 002E1270  98 9F 02 E0 */	stb r4, 0x2e0(r31)
/* 802E4334 002E1274  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4338 002E1278  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802E433C 002E127C  7D 89 03 A6 */	mtctr r12
/* 802E4340 002E1280  4E 80 04 21 */	bctrl 
/* 802E4344 002E1284  7F E3 FB 78 */	mr r3, r31
/* 802E4348 002E1288  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E434C 002E128C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802E4350 002E1290  7D 89 03 A6 */	mtctr r12
/* 802E4354 002E1294  4E 80 04 21 */	bctrl 
/* 802E4358 002E1298  2C 03 00 60 */	cmpwi r3, 0x60
/* 802E435C 002E129C  40 82 00 44 */	bne .L_802E43A0
/* 802E4360 002E12A0  7F E3 FB 78 */	mr r3, r31
/* 802E4364 002E12A4  4B E2 34 19 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802E4368 002E12A8  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802E436C 002E12AC  7F E4 FB 78 */	mr r4, r31
/* 802E4370 002E12B0  38 A0 00 06 */	li r5, 6
/* 802E4374 002E12B4  38 C0 00 00 */	li r6, 0
/* 802E4378 002E12B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E437C 002E12BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802E4380 002E12C0  7D 89 03 A6 */	mtctr r12
/* 802E4384 002E12C4  4E 80 04 21 */	bctrl 
/* 802E4388 002E12C8  7F E3 FB 78 */	mr r3, r31
/* 802E438C 002E12CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4390 002E12D0  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802E4394 002E12D4  7D 89 03 A6 */	mtctr r12
/* 802E4398 002E12D8  4E 80 04 21 */	bctrl 
/* 802E439C 002E12DC  48 00 00 24 */	b .L_802E43C0
.L_802E43A0:
/* 802E43A0 002E12E0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802E43A4 002E12E4  7F E4 FB 78 */	mr r4, r31
/* 802E43A8 002E12E8  38 A0 00 01 */	li r5, 1
/* 802E43AC 002E12EC  38 C0 00 00 */	li r6, 0
/* 802E43B0 002E12F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E43B4 002E12F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802E43B8 002E12F8  7D 89 03 A6 */	mtctr r12
/* 802E43BC 002E12FC  4E 80 04 21 */	bctrl 
.L_802E43C0:
/* 802E43C0 002E1300  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E43C4 002E1304  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E43C8 002E1308  7C 08 03 A6 */	mtlr r0
/* 802E43CC 002E130C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E43D0 002E1310  4E 80 00 20 */	blr 
.endfn onInit__Q34Game6Kabuto3ObjFPQ24Game15CreatureInitArg

.fn setupEffect__Q34Game6Kabuto3ObjFv, weak
/* 802E43D4 002E1314  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game6Kabuto3ObjFv

.fn doUpdate__Q34Game6Kabuto3ObjFv, global
/* 802E43D8 002E1318  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E43DC 002E131C  7C 08 02 A6 */	mflr r0
/* 802E43E0 002E1320  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E43E4 002E1324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E43E8 002E1328  7C 7F 1B 78 */	mr r31, r3
/* 802E43EC 002E132C  48 00 09 01 */	bl updateCaution__Q34Game6Kabuto3ObjFv
/* 802E43F0 002E1330  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802E43F4 002E1334  7F E4 FB 78 */	mr r4, r31
/* 802E43F8 002E1338  81 83 00 00 */	lwz r12, 0(r3)
/* 802E43FC 002E133C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E4400 002E1340  7D 89 03 A6 */	mtctr r12
/* 802E4404 002E1344  4E 80 04 21 */	bctrl 
/* 802E4408 002E1348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E440C 002E134C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4410 002E1350  7C 08 03 A6 */	mtlr r0
/* 802E4414 002E1354  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4418 002E1358  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game6Kabuto3ObjFv

.fn doDirectDraw__Q34Game6Kabuto3ObjFR8Graphics, global
/* 802E441C 002E135C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game6Kabuto3ObjFR8Graphics

.fn doDebugDraw__Q34Game6Kabuto3ObjFR8Graphics, global
/* 802E4420 002E1360  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4424 002E1364  7C 08 02 A6 */	mflr r0
/* 802E4428 002E1368  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E442C 002E136C  4B E2 1A 41 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802E4430 002E1370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4434 002E1374  7C 08 03 A6 */	mtlr r0
/* 802E4438 002E1378  38 21 00 10 */	addi r1, r1, 0x10
/* 802E443C 002E137C  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game6Kabuto3ObjFR8Graphics

.fn setFSM__Q34Game6Kabuto3ObjFPQ34Game6Kabuto3FSM, global
/* 802E4440 002E1380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4444 002E1384  7C 08 02 A6 */	mflr r0
/* 802E4448 002E1388  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E444C 002E138C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E4450 002E1390  7C 7F 1B 78 */	mr r31, r3
/* 802E4454 002E1394  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802E4458 002E1398  7F E4 FB 78 */	mr r4, r31
/* 802E445C 002E139C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802E4460 002E13A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E4464 002E13A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E4468 002E13A8  7D 89 03 A6 */	mtctr r12
/* 802E446C 002E13AC  4E 80 04 21 */	bctrl 
/* 802E4470 002E13B0  38 00 00 00 */	li r0, 0
/* 802E4474 002E13B4  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802E4478 002E13B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E447C 002E13BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4480 002E13C0  7C 08 03 A6 */	mtlr r0
/* 802E4484 002E13C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4488 002E13C8  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game6Kabuto3ObjFPQ34Game6Kabuto3FSM

.fn getShadowParam__Q34Game6Kabuto3ObjFRQ24Game11ShadowParam, global
/* 802E448C 002E13CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4490 002E13D0  7C 08 02 A6 */	mflr r0
/* 802E4494 002E13D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4498 002E13D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E449C 002E13DC  7C 9F 23 78 */	mr r31, r4
/* 802E44A0 002E13E0  38 82 EA 70 */	addi r4, r2, lbl_8051CDD0@sda21
/* 802E44A4 002E13E4  93 C1 00 08 */	stw r30, 8(r1)
/* 802E44A8 002E13E8  7C 7E 1B 78 */	mr r30, r3
/* 802E44AC 002E13EC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802E44B0 002E13F0  48 15 AB 35 */	bl getJoint__Q28SysShape5ModelFPc
/* 802E44B4 002E13F4  48 14 53 ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E44B8 002E13F8  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802E44BC 002E13FC  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802E44C0 002E1400  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802E44C4 002E1404  C0 62 EA 78 */	lfs f3, lbl_8051CDD8@sda21(r2)
/* 802E44C8 002E1408  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802E44CC 002E140C  C0 22 EA 6C */	lfs f1, lbl_8051CDCC@sda21(r2)
/* 802E44D0 002E1410  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802E44D4 002E1414  C0 02 EA 7C */	lfs f0, lbl_8051CDDC@sda21(r2)
/* 802E44D8 002E1418  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802E44DC 002E141C  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 802E44E0 002E1420  EC 43 10 2A */	fadds f2, f3, f2
/* 802E44E4 002E1424  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802E44E8 002E1428  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802E44EC 002E142C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802E44F0 002E1430  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802E44F4 002E1434  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802E44F8 002E1438  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802E44FC 002E143C  41 82 00 10 */	beq .L_802E450C
/* 802E4500 002E1440  C0 02 EA 80 */	lfs f0, lbl_8051CDE0@sda21(r2)
/* 802E4504 002E1444  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802E4508 002E1448  48 00 00 0C */	b .L_802E4514
.L_802E450C:
/* 802E450C 002E144C  C0 02 EA 84 */	lfs f0, lbl_8051CDE4@sda21(r2)
/* 802E4510 002E1450  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802E4514:
/* 802E4514 002E1454  C0 02 EA 88 */	lfs f0, lbl_8051CDE8@sda21(r2)
/* 802E4518 002E1458  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802E451C 002E145C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4520 002E1460  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4524 002E1464  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E4528 002E1468  7C 08 03 A6 */	mtlr r0
/* 802E452C 002E146C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4530 002E1470  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game6Kabuto3ObjFRQ24Game11ShadowParam

.fn doStartStoneState__Q34Game6Kabuto3ObjFv, global
/* 802E4534 002E1474  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4538 002E1478  7C 08 02 A6 */	mflr r0
/* 802E453C 002E147C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4540 002E1480  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E4544 002E1484  7C 7F 1B 78 */	mr r31, r3
/* 802E4548 002E1488  4B E1 E9 AD */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802E454C 002E148C  7F E3 FB 78 */	mr r3, r31
/* 802E4550 002E1490  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4554 002E1494  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 802E4558 002E1498  7D 89 03 A6 */	mtctr r12
/* 802E455C 002E149C  4E 80 04 21 */	bctrl 
/* 802E4560 002E14A0  7F E3 FB 78 */	mr r3, r31
/* 802E4564 002E14A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4568 002E14A8  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 802E456C 002E14AC  7D 89 03 A6 */	mtctr r12
/* 802E4570 002E14B0  4E 80 04 21 */	bctrl 
/* 802E4574 002E14B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4578 002E14B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E457C 002E14BC  7C 08 03 A6 */	mtlr r0
/* 802E4580 002E14C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4584 002E14C4  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game6Kabuto3ObjFv

.fn doFinishStoneState__Q34Game6Kabuto3ObjFv, global
/* 802E4588 002E14C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E458C 002E14CC  7C 08 02 A6 */	mflr r0
/* 802E4590 002E14D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4594 002E14D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E4598 002E14D8  93 C1 00 08 */	stw r30, 8(r1)
/* 802E459C 002E14DC  7C 7E 1B 78 */	mr r30, r3
/* 802E45A0 002E14E0  4B E1 E9 69 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802E45A4 002E14E4  C0 22 EA 7C */	lfs f1, lbl_8051CDDC@sda21(r2)
/* 802E45A8 002E14E8  7F C3 F3 78 */	mr r3, r30
/* 802E45AC 002E14EC  C0 42 EA 84 */	lfs f2, lbl_8051CDE4@sda21(r2)
/* 802E45B0 002E14F0  38 80 00 00 */	li r4, 0
/* 802E45B4 002E14F4  C0 62 EA 6C */	lfs f3, lbl_8051CDCC@sda21(r2)
/* 802E45B8 002E14F8  C0 82 EA 8C */	lfs f4, lbl_8051CDEC@sda21(r2)
/* 802E45BC 002E14FC  4B E2 EB 61 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E45C0 002E1500  7F C3 F3 78 */	mr r3, r30
/* 802E45C4 002E1504  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E45C8 002E1508  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802E45CC 002E150C  7D 89 03 A6 */	mtctr r12
/* 802E45D0 002E1510  4E 80 04 21 */	bctrl 
/* 802E45D4 002E1514  2C 03 00 60 */	cmpwi r3, 0x60
/* 802E45D8 002E1518  40 82 00 48 */	bne .L_802E4620
/* 802E45DC 002E151C  7F C3 F3 78 */	mr r3, r30
/* 802E45E0 002E1520  4B E2 2E 15 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802E45E4 002E1524  7C 7F 1B 78 */	mr r31, r3
/* 802E45E8 002E1528  2C 1F 00 09 */	cmpwi r31, 9
/* 802E45EC 002E152C  41 80 00 18 */	blt .L_802E4604
/* 802E45F0 002E1530  7F C3 F3 78 */	mr r3, r30
/* 802E45F4 002E1534  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E45F8 002E1538  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802E45FC 002E153C  7D 89 03 A6 */	mtctr r12
/* 802E4600 002E1540  4E 80 04 21 */	bctrl 
.L_802E4604:
/* 802E4604 002E1544  2C 1F 00 0A */	cmpwi r31, 0xa
/* 802E4608 002E1548  40 82 00 18 */	bne .L_802E4620
/* 802E460C 002E154C  7F C3 F3 78 */	mr r3, r30
/* 802E4610 002E1550  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E4614 002E1554  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 802E4618 002E1558  7D 89 03 A6 */	mtctr r12
/* 802E461C 002E155C  4E 80 04 21 */	bctrl 
.L_802E4620:
/* 802E4620 002E1560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4624 002E1564  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4628 002E1568  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E462C 002E156C  7C 08 03 A6 */	mtlr r0
/* 802E4630 002E1570  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4634 002E1574  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game6Kabuto3ObjFv

.fn startCarcassMotion__Q34Game6Kabuto3ObjFv, global
/* 802E4638 002E1578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E463C 002E157C  7C 08 02 A6 */	mflr r0
/* 802E4640 002E1580  38 80 00 0D */	li r4, 0xd
/* 802E4644 002E1584  38 A0 00 00 */	li r5, 0
/* 802E4648 002E1588  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E464C 002E158C  4B E2 09 B9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E4650 002E1590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4654 002E1594  7C 08 03 A6 */	mtlr r0
/* 802E4658 002E1598  38 21 00 10 */	addi r1, r1, 0x10
/* 802E465C 002E159C  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game6Kabuto3ObjFv

.fn doStartMovie__Q34Game6Kabuto3ObjFv, global
/* 802E4660 002E15A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4664 002E15A4  7C 08 02 A6 */	mflr r0
/* 802E4668 002E15A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E466C 002E15AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E4670 002E15B0  81 8C 03 18 */	lwz r12, 0x318(r12)
/* 802E4674 002E15B4  7D 89 03 A6 */	mtctr r12
/* 802E4678 002E15B8  4E 80 04 21 */	bctrl 
/* 802E467C 002E15BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4680 002E15C0  7C 08 03 A6 */	mtlr r0
/* 802E4684 002E15C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4688 002E15C8  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game6Kabuto3ObjFv

.fn effectDrawOff__Q34Game6Kabuto3ObjFv, weak
/* 802E468C 002E15CC  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game6Kabuto3ObjFv

.fn doEndMovie__Q34Game6Kabuto3ObjFv, global
/* 802E4690 002E15D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4694 002E15D4  7C 08 02 A6 */	mflr r0
/* 802E4698 002E15D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E469C 002E15DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E46A0 002E15E0  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 802E46A4 002E15E4  7D 89 03 A6 */	mtctr r12
/* 802E46A8 002E15E8  4E 80 04 21 */	bctrl 
/* 802E46AC 002E15EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E46B0 002E15F0  7C 08 03 A6 */	mtlr r0
/* 802E46B4 002E15F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E46B8 002E15F8  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game6Kabuto3ObjFv

.fn effectDrawOn__Q34Game6Kabuto3ObjFv, weak
/* 802E46BC 002E15FC  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game6Kabuto3ObjFv

.fn initWalkSmokeEffect__Q34Game6Kabuto3ObjFv, global
/* 802E46C0 002E1600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E46C4 002E1604  7C 08 02 A6 */	mflr r0
/* 802E46C8 002E1608  38 80 00 04 */	li r4, 4
/* 802E46CC 002E160C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E46D0 002E1610  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E46D4 002E1614  7C 7F 1B 78 */	mr r31, r3
/* 802E46D8 002E1618  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E46DC 002E161C  4B E4 5C 89 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 802E46E0 002E1620  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802E46E4 002E1624  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E46E8 002E1628  C0 22 EA 98 */	lfs f1, lbl_8051CDF8@sda21(r2)
/* 802E46EC 002E162C  38 80 00 00 */	li r4, 0
/* 802E46F0 002E1630  38 C2 EA 90 */	addi r6, r2, lbl_8051CDF0@sda21
/* 802E46F4 002E1634  4B E4 5E ED */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802E46F8 002E1638  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802E46FC 002E163C  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E4700 002E1640  C0 22 EA A4 */	lfs f1, lbl_8051CE04@sda21(r2)
/* 802E4704 002E1644  38 80 00 01 */	li r4, 1
/* 802E4708 002E1648  38 C2 EA 9C */	addi r6, r2, lbl_8051CDFC@sda21
/* 802E470C 002E164C  4B E4 5E D5 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802E4710 002E1650  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802E4714 002E1654  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E4718 002E1658  C0 22 EA 98 */	lfs f1, lbl_8051CDF8@sda21(r2)
/* 802E471C 002E165C  38 80 00 02 */	li r4, 2
/* 802E4720 002E1660  38 C2 EA A8 */	addi r6, r2, lbl_8051CE08@sda21
/* 802E4724 002E1664  4B E4 5E BD */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802E4728 002E1668  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802E472C 002E166C  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E4730 002E1670  C0 22 EA A4 */	lfs f1, lbl_8051CE04@sda21(r2)
/* 802E4734 002E1674  38 80 00 03 */	li r4, 3
/* 802E4738 002E1678  38 C2 EA B0 */	addi r6, r2, lbl_8051CE10@sda21
/* 802E473C 002E167C  4B E4 5E A5 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802E4740 002E1680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4744 002E1684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4748 002E1688  7C 08 03 A6 */	mtlr r0
/* 802E474C 002E168C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4750 002E1690  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game6Kabuto3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game6Kabuto3ObjFv, global
/* 802E4754 002E1694  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 802E4758 002E1698  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game6Kabuto3ObjFv

.fn setRandTarget__Q34Game6Kabuto3ObjFv, global
/* 802E475C 002E169C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802E4760 002E16A0  7C 08 02 A6 */	mflr r0
/* 802E4764 002E16A4  90 01 00 64 */	stw r0, 0x64(r1)
/* 802E4768 002E16A8  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802E476C 002E16AC  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802E4770 002E16B0  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802E4774 002E16B4  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802E4778 002E16B8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E477C 002E16BC  7C 7F 1B 78 */	mr r31, r3
/* 802E4780 002E16C0  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802E4784 002E16C4  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802E4788 002E16C8  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802E478C 002E16CC  EF C1 00 28 */	fsubs f30, f1, f0
/* 802E4790 002E16D0  4B DE 4E 11 */	bl rand
/* 802E4794 002E16D4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802E4798 002E16D8  3C 00 43 30 */	lis r0, 0x4330
/* 802E479C 002E16DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802E47A0 002E16E0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E47A4 002E16E4  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802E47A8 002E16E8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E47AC 002E16EC  90 01 00 08 */	stw r0, 8(r1)
/* 802E47B0 002E16F0  C8 22 EA D0 */	lfd f1, lbl_8051CE30@sda21(r2)
/* 802E47B4 002E16F4  C8 01 00 08 */	lfd f0, 8(r1)
/* 802E47B8 002E16F8  C0 A2 EA B8 */	lfs f5, lbl_8051CE18@sda21(r2)
/* 802E47BC 002E16FC  EC 00 08 28 */	fsubs f0, f0, f1
/* 802E47C0 002E1700  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802E47C4 002E1704  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802E47C8 002E1708  C0 84 03 84 */	lfs f4, 0x384(r4)
/* 802E47CC 002E170C  EC DE 00 32 */	fmuls f6, f30, f0
/* 802E47D0 002E1710  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802E47D4 002E1714  EC 23 08 28 */	fsubs f1, f3, f1
/* 802E47D8 002E1718  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802E47DC 002E171C  EC 66 28 24 */	fdivs f3, f6, f5
/* 802E47E0 002E1720  EF E4 18 2A */	fadds f31, f4, f3
/* 802E47E4 002E1724  EC 42 00 28 */	fsubs f2, f2, f0
/* 802E47E8 002E1728  4B D5 09 21 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E47EC 002E172C  FF C0 08 90 */	fmr f30, f1
/* 802E47F0 002E1730  4B DE 4D B1 */	bl rand
/* 802E47F4 002E1734  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802E47F8 002E1738  3C 00 43 30 */	lis r0, 0x4330
/* 802E47FC 002E173C  90 61 00 14 */	stw r3, 0x14(r1)
/* 802E4800 002E1740  C8 42 EA D0 */	lfd f2, lbl_8051CE30@sda21(r2)
/* 802E4804 002E1744  90 01 00 10 */	stw r0, 0x10(r1)
/* 802E4808 002E1748  C0 62 EA BC */	lfs f3, lbl_8051CE1C@sda21(r2)
/* 802E480C 002E174C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802E4810 002E1750  C0 22 EA B8 */	lfs f1, lbl_8051CE18@sda21(r2)
/* 802E4814 002E1754  EC 80 10 28 */	fsubs f4, f0, f2
/* 802E4818 002E1758  C0 42 EA C0 */	lfs f2, lbl_8051CE20@sda21(r2)
/* 802E481C 002E175C  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E4820 002E1760  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E4824 002E1764  EC 23 08 24 */	fdivs f1, f3, f1
/* 802E4828 002E1768  EC 3E 08 2A */	fadds f1, f30, f1
/* 802E482C 002E176C  EC A2 08 2A */	fadds f5, f2, f1
/* 802E4830 002E1770  FC 20 28 90 */	fmr f1, f5
/* 802E4834 002E1774  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802E4838 002E1778  40 80 00 08 */	bge .L_802E4840
/* 802E483C 002E177C  FC 20 28 50 */	fneg f1, f5
.L_802E4840:
/* 802E4840 002E1780  C0 62 EA C4 */	lfs f3, lbl_8051CE24@sda21(r2)
/* 802E4844 002E1784  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802E4848 002E1788  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E484C 002E178C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802E4850 002E1790  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802E4854 002E1794  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 802E4858 002E1798  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802E485C 002E179C  C0 9F 01 9C */	lfs f4, 0x19c(r31)
/* 802E4860 002E17A0  FC 00 10 1E */	fctiwz f0, f2
/* 802E4864 002E17A4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802E4868 002E17A8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802E486C 002E17AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802E4870 002E17B0  7C 64 02 14 */	add r3, r4, r0
/* 802E4874 002E17B4  C0 03 00 04 */	lfs f0, 4(r3)
/* 802E4878 002E17B8  EC 5F 08 3A */	fmadds f2, f31, f0, f1
/* 802E487C 002E17BC  40 80 00 28 */	bge .L_802E48A4
/* 802E4880 002E17C0  C0 02 EA C8 */	lfs f0, lbl_8051CE28@sda21(r2)
/* 802E4884 002E17C4  EC 05 00 32 */	fmuls f0, f5, f0
/* 802E4888 002E17C8  FC 00 00 1E */	fctiwz f0, f0
/* 802E488C 002E17CC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802E4890 002E17D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E4894 002E17D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802E4898 002E17D8  7C 04 04 2E */	lfsx f0, r4, r0
/* 802E489C 002E17DC  FC 20 00 50 */	fneg f1, f0
/* 802E48A0 002E17E0  48 00 00 1C */	b .L_802E48BC
.L_802E48A4:
/* 802E48A4 002E17E4  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802E48A8 002E17E8  FC 00 00 1E */	fctiwz f0, f0
/* 802E48AC 002E17EC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802E48B0 002E17F0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802E48B4 002E17F4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802E48B8 002E17F8  7C 24 04 2E */	lfsx f1, r4, r0
.L_802E48BC:
/* 802E48BC 002E17FC  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802E48C0 002E1800  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802E48C4 002E1804  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802E48C8 002E1808  D0 9F 02 D4 */	stfs f4, 0x2d4(r31)
/* 802E48CC 002E180C  D0 5F 02 D8 */	stfs f2, 0x2d8(r31)
/* 802E48D0 002E1810  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802E48D4 002E1814  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802E48D8 002E1818  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802E48DC 002E181C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802E48E0 002E1820  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802E48E4 002E1824  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E48E8 002E1828  7C 08 03 A6 */	mtlr r0
/* 802E48EC 002E182C  38 21 00 60 */	addi r1, r1, 0x60
/* 802E48F0 002E1830  4E 80 00 20 */	blr 
.endfn setRandTarget__Q34Game6Kabuto3ObjFv

.fn getSearchedTarget__Q34Game6Kabuto3ObjFv, global
/* 802E48F4 002E1834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E48F8 002E1838  7C 08 02 A6 */	mflr r0
/* 802E48FC 002E183C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4900 002E1840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E4904 002E1844  7C 7F 1B 78 */	mr r31, r3
/* 802E4908 002E1848  48 00 04 35 */	bl getViewAngle__Q34Game6Kabuto3ObjFv
/* 802E490C 002E184C  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 802E4910 002E1850  7F E3 FB 78 */	mr r3, r31
/* 802E4914 002E1854  38 80 00 00 */	li r4, 0
/* 802E4918 002E1858  38 A0 00 00 */	li r5, 0
/* 802E491C 002E185C  C0 46 03 D4 */	lfs f2, 0x3d4(r6)
/* 802E4920 002E1860  38 C0 00 00 */	li r6, 0
/* 802E4924 002E1864  4B E2 E7 2D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802E4928 002E1868  28 03 00 00 */	cmplwi r3, 0
/* 802E492C 002E186C  41 82 00 0C */	beq .L_802E4938
/* 802E4930 002E1870  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E4934 002E1874  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
.L_802E4938:
/* 802E4938 002E1878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E493C 002E187C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4940 002E1880  7C 08 03 A6 */	mtlr r0
/* 802E4944 002E1884  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4948 002E1888  4E 80 00 20 */	blr 
.endfn getSearchedTarget__Q34Game6Kabuto3ObjFv

.fn isAttackableTarget__Q34Game6Kabuto3ObjFv, global
/* 802E494C 002E188C  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 802E4950 002E1890  7C 08 02 A6 */	mflr r0
/* 802E4954 002E1894  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 802E4958 002E1898  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 802E495C 002E189C  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 802E4960 002E18A0  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 802E4964 002E18A4  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 802E4968 002E18A8  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 802E496C 002E18AC  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 802E4970 002E18B0  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 802E4974 002E18B4  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 802E4978 002E18B8  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 802E497C 002E18BC  7C 7F 1B 78 */	mr r31, r3
/* 802E4980 002E18C0  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E4984 002E18C4  C0 63 01 FC */	lfs f3, 0x1fc(r3)
/* 802E4988 002E18C8  FC 20 18 90 */	fmr f1, f3
/* 802E498C 002E18CC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802E4990 002E18D0  40 80 00 08 */	bge .L_802E4998
/* 802E4994 002E18D4  FC 20 18 50 */	fneg f1, f3
.L_802E4998:
/* 802E4998 002E18D8  C0 42 EA C4 */	lfs f2, lbl_8051CE24@sda21(r2)
/* 802E499C 002E18DC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802E49A0 002E18E0  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E49A4 002E18E4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802E49A8 002E18E8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802E49AC 002E18EC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802E49B0 002E18F0  FC 00 08 1E */	fctiwz f0, f1
/* 802E49B4 002E18F4  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 802E49B8 002E18F8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802E49BC 002E18FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802E49C0 002E1900  7C 64 02 14 */	add r3, r4, r0
/* 802E49C4 002E1904  C3 C3 00 04 */	lfs f30, 4(r3)
/* 802E49C8 002E1908  40 80 00 28 */	bge .L_802E49F0
/* 802E49CC 002E190C  C0 02 EA C8 */	lfs f0, lbl_8051CE28@sda21(r2)
/* 802E49D0 002E1910  EC 03 00 32 */	fmuls f0, f3, f0
/* 802E49D4 002E1914  FC 00 00 1E */	fctiwz f0, f0
/* 802E49D8 002E1918  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 802E49DC 002E191C  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 802E49E0 002E1920  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802E49E4 002E1924  7C 04 04 2E */	lfsx f0, r4, r0
/* 802E49E8 002E1928  FF A0 00 50 */	fneg f29, f0
/* 802E49EC 002E192C  48 00 00 1C */	b .L_802E4A08
.L_802E49F0:
/* 802E49F0 002E1930  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802E49F4 002E1934  FC 00 00 1E */	fctiwz f0, f0
/* 802E49F8 002E1938  D8 01 00 A0 */	stfd f0, 0xa0(r1)
/* 802E49FC 002E193C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802E4A00 002E1940  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802E4A04 002E1944  7F A4 04 2E */	lfsx f29, r4, r0
.L_802E4A08:
/* 802E4A08 002E1948  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802E4A0C 002E194C  FF E0 F0 50 */	fneg f31, f30
/* 802E4A10 002E1950  C0 02 EA D8 */	lfs f0, lbl_8051CE38@sda21(r2)
/* 802E4A14 002E1954  38 61 00 24 */	addi r3, r1, 0x24
/* 802E4A18 002E1958  C0 44 03 D4 */	lfs f2, 0x3d4(r4)
/* 802E4A1C 002E195C  38 81 00 14 */	addi r4, r1, 0x14
/* 802E4A20 002E1960  C0 22 EA DC */	lfs f1, lbl_8051CE3C@sda21(r2)
/* 802E4A24 002E1964  EC A0 00 B2 */	fmuls f5, f0, f2
/* 802E4A28 002E1968  C0 7F 01 94 */	lfs f3, 0x194(r31)
/* 802E4A2C 002E196C  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802E4A30 002E1970  EC 81 00 B2 */	fmuls f4, f1, f2
/* 802E4A34 002E1974  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802E4A38 002E1978  C0 42 EA 6C */	lfs f2, lbl_8051CDCC@sda21(r2)
/* 802E4A3C 002E197C  EC 7E 19 7A */	fmadds f3, f30, f5, f3
/* 802E4A40 002E1980  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802E4A44 002E1984  EC 22 09 7A */	fmadds f1, f2, f5, f1
/* 802E4A48 002E1988  EC 1D 01 7A */	fmadds f0, f29, f5, f0
/* 802E4A4C 002E198C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802E4A50 002E1990  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802E4A54 002E1994  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802E4A58 002E1998  4B F4 99 49 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802E4A5C 002E199C  38 00 00 01 */	li r0, 1
/* 802E4A60 002E19A0  38 61 00 44 */	addi r3, r1, 0x44
/* 802E4A64 002E19A4  98 01 00 40 */	stb r0, 0x40(r1)
/* 802E4A68 002E19A8  38 81 00 24 */	addi r4, r1, 0x24
/* 802E4A6C 002E19AC  4B F4 99 75 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802E4A70 002E19B0  38 61 00 44 */	addi r3, r1, 0x44
/* 802E4A74 002E19B4  4B F4 99 E9 */	bl first__Q24Game12CellIteratorFv
/* 802E4A78 002E19B8  48 00 01 48 */	b .L_802E4BC0
.L_802E4A7C:
/* 802E4A7C 002E19BC  38 61 00 44 */	addi r3, r1, 0x44
/* 802E4A80 002E19C0  4B F4 9A C5 */	bl __ml__Q24Game12CellIteratorFv
/* 802E4A84 002E19C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802E4A88 002E19C8  7C 7E 1B 78 */	mr r30, r3
/* 802E4A8C 002E19CC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802E4A90 002E19D0  7D 89 03 A6 */	mtctr r12
/* 802E4A94 002E19D4  4E 80 04 21 */	bctrl 
/* 802E4A98 002E19D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E4A9C 002E19DC  41 82 01 1C */	beq .L_802E4BB8
/* 802E4AA0 002E19E0  7F C3 F3 78 */	mr r3, r30
/* 802E4AA4 002E19E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E4AA8 002E19E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E4AAC 002E19EC  7D 89 03 A6 */	mtctr r12
/* 802E4AB0 002E19F0  4E 80 04 21 */	bctrl 
/* 802E4AB4 002E19F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E4AB8 002E19F8  7C 7D 1B 78 */	mr r29, r3
/* 802E4ABC 002E19FC  40 82 00 40 */	bne .L_802E4AFC
/* 802E4AC0 002E1A00  7F C3 F3 78 */	mr r3, r30
/* 802E4AC4 002E1A04  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E4AC8 002E1A08  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E4ACC 002E1A0C  7D 89 03 A6 */	mtctr r12
/* 802E4AD0 002E1A10  4E 80 04 21 */	bctrl 
/* 802E4AD4 002E1A14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E4AD8 002E1A18  41 82 00 24 */	beq .L_802E4AFC
/* 802E4ADC 002E1A1C  7F C3 F3 78 */	mr r3, r30
/* 802E4AE0 002E1A20  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E4AE4 002E1A24  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802E4AE8 002E1A28  7D 89 03 A6 */	mtctr r12
/* 802E4AEC 002E1A2C  4E 80 04 21 */	bctrl 
/* 802E4AF0 002E1A30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E4AF4 002E1A34  41 82 00 08 */	beq .L_802E4AFC
/* 802E4AF8 002E1A38  3B A0 00 01 */	li r29, 1
.L_802E4AFC:
/* 802E4AFC 002E1A3C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802E4B00 002E1A40  41 82 00 B8 */	beq .L_802E4BB8
/* 802E4B04 002E1A44  7F C4 F3 78 */	mr r4, r30
/* 802E4B08 002E1A48  38 61 00 08 */	addi r3, r1, 8
/* 802E4B0C 002E1A4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E4B10 002E1A50  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E4B14 002E1A54  7D 89 03 A6 */	mtctr r12
/* 802E4B18 002E1A58  4E 80 04 21 */	bctrl 
/* 802E4B1C 002E1A5C  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 802E4B20 002E1A60  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802E4B24 002E1A64  C0 41 00 08 */	lfs f2, 8(r1)
/* 802E4B28 002E1A68  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802E4B2C 002E1A6C  EC 63 00 28 */	fsubs f3, f3, f0
/* 802E4B30 002E1A70  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E4B34 002E1A74  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802E4B38 002E1A78  EC 42 08 28 */	fsubs f2, f2, f1
/* 802E4B3C 002E1A7C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802E4B40 002E1A80  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802E4B44 002E1A84  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E4B48 002E1A88  EC 84 08 28 */	fsubs f4, f4, f1
/* 802E4B4C 002E1A8C  40 81 00 0C */	ble .L_802E4B58
/* 802E4B50 002E1A90  FC 20 18 90 */	fmr f1, f3
/* 802E4B54 002E1A94  48 00 00 08 */	b .L_802E4B5C
.L_802E4B58:
/* 802E4B58 002E1A98  FC 20 18 50 */	fneg f1, f3
.L_802E4B5C:
/* 802E4B5C 002E1A9C  C0 03 03 FC */	lfs f0, 0x3fc(r3)
/* 802E4B60 002E1AA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E4B64 002E1AA4  40 80 00 54 */	bge .L_802E4BB8
/* 802E4B68 002E1AA8  C0 22 EA 6C */	lfs f1, lbl_8051CDCC@sda21(r2)
/* 802E4B6C 002E1AAC  EC 61 00 F2 */	fmuls f3, f1, f3
/* 802E4B70 002E1AB0  EC 1F 18 BA */	fmadds f0, f31, f2, f3
/* 802E4B74 002E1AB4  EC 1D 01 3A */	fmadds f0, f29, f4, f0
/* 802E4B78 002E1AB8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E4B7C 002E1ABC  40 81 00 08 */	ble .L_802E4B84
/* 802E4B80 002E1AC0  48 00 00 08 */	b .L_802E4B88
.L_802E4B84:
/* 802E4B84 002E1AC4  FC 00 00 50 */	fneg f0, f0
.L_802E4B88:
/* 802E4B88 002E1AC8  C0 22 EA E0 */	lfs f1, lbl_8051CE40@sda21(r2)
/* 802E4B8C 002E1ACC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E4B90 002E1AD0  40 80 00 28 */	bge .L_802E4BB8
/* 802E4B94 002E1AD4  EC 1D 18 BA */	fmadds f0, f29, f2, f3
/* 802E4B98 002E1AD8  EC 5E 01 3A */	fmadds f2, f30, f4, f0
/* 802E4B9C 002E1ADC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802E4BA0 002E1AE0  40 81 00 18 */	ble .L_802E4BB8
/* 802E4BA4 002E1AE4  C0 03 03 D4 */	lfs f0, 0x3d4(r3)
/* 802E4BA8 002E1AE8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E4BAC 002E1AEC  40 80 00 0C */	bge .L_802E4BB8
/* 802E4BB0 002E1AF0  38 60 00 01 */	li r3, 1
/* 802E4BB4 002E1AF4  48 00 00 20 */	b .L_802E4BD4
.L_802E4BB8:
/* 802E4BB8 002E1AF8  38 61 00 44 */	addi r3, r1, 0x44
/* 802E4BBC 002E1AFC  4B F4 99 45 */	bl next__Q24Game12CellIteratorFv
.L_802E4BC0:
/* 802E4BC0 002E1B00  38 61 00 44 */	addi r3, r1, 0x44
/* 802E4BC4 002E1B04  4B F4 99 71 */	bl isDone__Q24Game12CellIteratorFv
/* 802E4BC8 002E1B08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E4BCC 002E1B0C  41 82 FE B0 */	beq .L_802E4A7C
/* 802E4BD0 002E1B10  38 60 00 00 */	li r3, 0
.L_802E4BD4:
/* 802E4BD4 002E1B14  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 802E4BD8 002E1B18  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 802E4BDC 002E1B1C  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 802E4BE0 002E1B20  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 802E4BE4 002E1B24  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 802E4BE8 002E1B28  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 802E4BEC 002E1B2C  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 802E4BF0 002E1B30  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 802E4BF4 002E1B34  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 802E4BF8 002E1B38  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 802E4BFC 002E1B3C  7C 08 03 A6 */	mtlr r0
/* 802E4C00 002E1B40  38 21 00 F0 */	addi r1, r1, 0xf0
/* 802E4C04 002E1B44  4E 80 00 20 */	blr 
.endfn isAttackableTarget__Q34Game6Kabuto3ObjFv

.fn createStoneAttack__Q34Game6Kabuto3ObjFv, global
/* 802E4C08 002E1B48  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E4C0C 002E1B4C  7C 08 02 A6 */	mflr r0
/* 802E4C10 002E1B50  38 80 00 13 */	li r4, 0x13
/* 802E4C14 002E1B54  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E4C18 002E1B58  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802E4C1C 002E1B5C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802E4C20 002E1B60  7C 7E 1B 78 */	mr r30, r3
/* 802E4C24 002E1B64  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802E4C28 002E1B68  4B E2 90 7D */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802E4C2C 002E1B6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E4C30 002E1B70  41 82 00 A4 */	beq .L_802E4CD4
/* 802E4C34 002E1B74  38 61 00 08 */	addi r3, r1, 8
/* 802E4C38 002E1B78  4B E4 9F ED */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802E4C3C 002E1B7C  38 00 00 4A */	li r0, 0x4a
/* 802E4C40 002E1B80  38 82 EA E4 */	addi r4, r2, lbl_8051CE44@sda21
/* 802E4C44 002E1B84  90 01 00 30 */	stw r0, 0x30(r1)
/* 802E4C48 002E1B88  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802E4C4C 002E1B8C  48 15 A3 99 */	bl getJoint__Q28SysShape5ModelFPc
/* 802E4C50 002E1B90  48 14 4C 51 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E4C54 002E1B94  28 03 00 00 */	cmplwi r3, 0
/* 802E4C58 002E1B98  41 82 00 24 */	beq .L_802E4C7C
/* 802E4C5C 002E1B9C  C0 42 EA 88 */	lfs f2, lbl_8051CDE8@sda21(r2)
/* 802E4C60 002E1BA0  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 802E4C64 002E1BA4  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 802E4C68 002E1BA8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802E4C6C 002E1BAC  EC 22 08 2A */	fadds f1, f2, f1
/* 802E4C70 002E1BB0  D0 01 00 08 */	stfs f0, 8(r1)
/* 802E4C74 002E1BB4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802E4C78 002E1BB8  D0 61 00 10 */	stfs f3, 0x10(r1)
.L_802E4C7C:
/* 802E4C7C 002E1BBC  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 802E4C80 002E1BC0  7F E3 FB 78 */	mr r3, r31
/* 802E4C84 002E1BC4  38 81 00 08 */	addi r4, r1, 8
/* 802E4C88 002E1BC8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802E4C8C 002E1BCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4C90 002E1BD0  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802E4C94 002E1BD4  7D 89 03 A6 */	mtctr r12
/* 802E4C98 002E1BD8  4E 80 04 21 */	bctrl 
/* 802E4C9C 002E1BDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E4CA0 002E1BE0  41 82 00 34 */	beq .L_802E4CD4
/* 802E4CA4 002E1BE4  38 80 00 00 */	li r4, 0
/* 802E4CA8 002E1BE8  4B E5 63 21 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802E4CAC 002E1BEC  93 DF 02 C0 */	stw r30, 0x2c0(r31)
/* 802E4CB0 002E1BF0  7F C3 F3 78 */	mr r3, r30
/* 802E4CB4 002E1BF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E4CB8 002E1BF8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802E4CBC 002E1BFC  7D 89 03 A6 */	mtctr r12
/* 802E4CC0 002E1C00  4E 80 04 21 */	bctrl 
/* 802E4CC4 002E1C04  2C 03 00 5F */	cmpwi r3, 0x5f
/* 802E4CC8 002E1C08  40 82 00 0C */	bne .L_802E4CD4
/* 802E4CCC 002E1C0C  38 00 00 01 */	li r0, 1
/* 802E4CD0 002E1C10  98 1F 02 C4 */	stb r0, 0x2c4(r31)
.L_802E4CD4:
/* 802E4CD4 002E1C14  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E4CD8 002E1C18  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802E4CDC 002E1C1C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802E4CE0 002E1C20  7C 08 03 A6 */	mtlr r0
/* 802E4CE4 002E1C24  38 21 00 50 */	addi r1, r1, 0x50
/* 802E4CE8 002E1C28  4E 80 00 20 */	blr 
.endfn createStoneAttack__Q34Game6Kabuto3ObjFv

.fn updateCaution__Q34Game6Kabuto3ObjFv, global
/* 802E4CEC 002E1C2C  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 802E4CF0 002E1C30  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 802E4CF4 002E1C34  40 82 00 18 */	bne .L_802E4D0C
/* 802E4CF8 002E1C38  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 802E4CFC 002E1C3C  40 82 00 10 */	bne .L_802E4D0C
/* 802E4D00 002E1C40  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802E4D04 002E1C44  2C 00 00 00 */	cmpwi r0, 0
/* 802E4D08 002E1C48  41 82 00 0C */	beq .L_802E4D14
.L_802E4D0C:
/* 802E4D0C 002E1C4C  C0 02 EA 6C */	lfs f0, lbl_8051CDCC@sda21(r2)
/* 802E4D10 002E1C50  D0 03 02 DC */	stfs f0, 0x2dc(r3)
.L_802E4D14:
/* 802E4D14 002E1C54  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802E4D18 002E1C58  C0 23 02 DC */	lfs f1, 0x2dc(r3)
/* 802E4D1C 002E1C5C  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 802E4D20 002E1C60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E4D24 002E1C64  4C 80 00 20 */	bgelr 
/* 802E4D28 002E1C68  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802E4D2C 002E1C6C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802E4D30 002E1C70  EC 01 00 2A */	fadds f0, f1, f0
/* 802E4D34 002E1C74  D0 03 02 DC */	stfs f0, 0x2dc(r3)
/* 802E4D38 002E1C78  4E 80 00 20 */	blr 
.endfn updateCaution__Q34Game6Kabuto3ObjFv

.fn getViewAngle__Q34Game6Kabuto3ObjFv, global
/* 802E4D3C 002E1C7C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802E4D40 002E1C80  C0 23 02 DC */	lfs f1, 0x2dc(r3)
/* 802E4D44 002E1C84  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 802E4D48 002E1C88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E4D4C 002E1C8C  40 80 00 0C */	bge .L_802E4D58
/* 802E4D50 002E1C90  C0 22 EA EC */	lfs f1, lbl_8051CE4C@sda21(r2)
/* 802E4D54 002E1C94  4E 80 00 20 */	blr 
.L_802E4D58:
/* 802E4D58 002E1C98  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 802E4D5C 002E1C9C  4E 80 00 20 */	blr 
.endfn getViewAngle__Q34Game6Kabuto3ObjFv

.fn lifeIncrement__Q34Game6Kabuto3ObjFv, global
/* 802E4D60 002E1CA0  C0 22 EA 6C */	lfs f1, lbl_8051CDCC@sda21(r2)
/* 802E4D64 002E1CA4  C0 02 EA 7C */	lfs f0, lbl_8051CDDC@sda21(r2)
/* 802E4D68 002E1CA8  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 802E4D6C 002E1CAC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802E4D70 002E1CB0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 802E4D74 002E1CB4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802E4D78 002E1CB8  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802E4D7C 002E1CBC  EC 01 00 2A */	fadds f0, f1, f0
/* 802E4D80 002E1CC0  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802E4D84 002E1CC4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802E4D88 002E1CC8  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802E4D8C 002E1CCC  C0 04 01 04 */	lfs f0, 0x104(r4)
/* 802E4D90 002E1CD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E4D94 002E1CD4  4C 81 00 20 */	blelr 
/* 802E4D98 002E1CD8  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802E4D9C 002E1CDC  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game6Kabuto3ObjFv

.fn createRockEmitEffect__Q34Game6Kabuto3ObjFv, global
/* 802E4DA0 002E1CE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E4DA4 002E1CE4  7C 08 02 A6 */	mflr r0
/* 802E4DA8 002E1CE8  38 82 EA F0 */	addi r4, r2, lbl_8051CE50@sda21
/* 802E4DAC 002E1CEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E4DB0 002E1CF0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802E4DB4 002E1CF4  48 15 A2 31 */	bl getJoint__Q28SysShape5ModelFPc
/* 802E4DB8 002E1CF8  48 14 4A E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E4DBC 002E1CFC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802E4DC0 002E1D00  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802E4DC4 002E1D04  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802E4DC8 002E1D08  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx1@ha
/* 802E4DCC 002E1D0C  90 01 00 08 */	stw r0, 8(r1)
/* 802E4DD0 002E1D10  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 802E4DD4 002E1D14  3C 80 80 4D */	lis r4, __vt__Q23efx13TKabutoAttack@ha
/* 802E4DD8 002E1D18  38 E0 00 C2 */	li r7, 0xc2
/* 802E4DDC 002E1D1C  90 01 00 08 */	stw r0, 8(r1)
/* 802E4DE0 002E1D20  38 A5 6A 14 */	addi r5, r5, __vt__Q23efx11TSimpleMtx1@l
/* 802E4DE4 002E1D24  38 C0 00 00 */	li r6, 0
/* 802E4DE8 002E1D28  38 04 3C 40 */	addi r0, r4, __vt__Q23efx13TKabutoAttack@l
/* 802E4DEC 002E1D2C  90 A1 00 08 */	stw r5, 8(r1)
/* 802E4DF0 002E1D30  38 80 00 00 */	li r4, 0
/* 802E4DF4 002E1D34  90 61 00 14 */	stw r3, 0x14(r1)
/* 802E4DF8 002E1D38  38 61 00 08 */	addi r3, r1, 8
/* 802E4DFC 002E1D3C  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802E4E00 002E1D40  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802E4E04 002E1D44  90 01 00 08 */	stw r0, 8(r1)
/* 802E4E08 002E1D48  48 0C A4 AD */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802E4E0C 002E1D4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E4E10 002E1D50  7C 08 03 A6 */	mtlr r0
/* 802E4E14 002E1D54  38 21 00 20 */	addi r1, r1, 0x20
/* 802E4E18 002E1D58  4E 80 00 20 */	blr 
.endfn createRockEmitEffect__Q34Game6Kabuto3ObjFv

.fn __dt__Q34Game6Kabuto3ObjFv, weak
/* 802E4E1C 002E1D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4E20 002E1D60  7C 08 02 A6 */	mflr r0
/* 802E4E24 002E1D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4E28 002E1D68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E4E2C 002E1D6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E4E30 002E1D70  93 C1 00 08 */	stw r30, 8(r1)
/* 802E4E34 002E1D74  7C 9E 23 78 */	mr r30, r4
/* 802E4E38 002E1D78  41 82 00 84 */	beq .L_802E4EBC
/* 802E4E3C 002E1D7C  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3Obj@ha
/* 802E4E40 002E1D80  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802E4E44 002E1D84  38 83 3C 54 */	addi r4, r3, __vt__Q34Game6Kabuto3Obj@l
/* 802E4E48 002E1D88  90 9F 00 00 */	stw r4, 0(r31)
/* 802E4E4C 002E1D8C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802E4E50 002E1D90  38 84 03 1C */	addi r4, r4, 0x31c
/* 802E4E54 002E1D94  90 7F 01 78 */	stw r3, 0x178(r31)
/* 802E4E58 002E1D98  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802E4E5C 002E1D9C  90 83 00 00 */	stw r4, 0(r3)
/* 802E4E60 002E1DA0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802E4E64 002E1DA4  7C 03 00 50 */	subf r0, r3, r0
/* 802E4E68 002E1DA8  90 03 00 0C */	stw r0, 0xc(r3)
/* 802E4E6C 002E1DAC  41 82 00 40 */	beq .L_802E4EAC
/* 802E4E70 002E1DB0  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802E4E74 002E1DB4  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 802E4E78 002E1DB8  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802E4E7C 002E1DBC  38 7F 02 90 */	addi r3, r31, 0x290
/* 802E4E80 002E1DC0  90 9F 00 00 */	stw r4, 0(r31)
/* 802E4E84 002E1DC4  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802E4E88 002E1DC8  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802E4E8C 002E1DCC  38 80 FF FF */	li r4, -1
/* 802E4E90 002E1DD0  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802E4E94 002E1DD4  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802E4E98 002E1DD8  90 C5 00 00 */	stw r6, 0(r5)
/* 802E4E9C 002E1DDC  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802E4EA0 002E1DE0  7C 05 00 50 */	subf r0, r5, r0
/* 802E4EA4 002E1DE4  90 05 00 0C */	stw r0, 0xc(r5)
/* 802E4EA8 002E1DE8  48 12 C6 E1 */	bl __dt__5CNodeFv
.L_802E4EAC:
/* 802E4EAC 002E1DEC  7F C0 07 35 */	extsh. r0, r30
/* 802E4EB0 002E1DF0  40 81 00 0C */	ble .L_802E4EBC
/* 802E4EB4 002E1DF4  7F E3 FB 78 */	mr r3, r31
/* 802E4EB8 002E1DF8  4B D3 F1 FD */	bl __dl__FPv
.L_802E4EBC:
/* 802E4EBC 002E1DFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4EC0 002E1E00  7F E3 FB 78 */	mr r3, r31
/* 802E4EC4 002E1E04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E4EC8 002E1E08  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E4ECC 002E1E0C  7C 08 03 A6 */	mtlr r0
/* 802E4ED0 002E1E10  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4ED4 002E1E14  4E 80 00 20 */	blr 
.endfn __dt__Q34Game6Kabuto3ObjFv

.fn isUnderground__Q34Game6Kabuto3ObjFv, weak
/* 802E4ED8 002E1E18  88 63 02 E1 */	lbz r3, 0x2e1(r3)
/* 802E4EDC 002E1E1C  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game6Kabuto3ObjFv

.fn getDownSmokeScale__Q34Game6Kabuto3ObjFv, weak
/* 802E4EE0 002E1E20  C0 22 EA F8 */	lfs f1, lbl_8051CE58@sda21(r2)
/* 802E4EE4 002E1E24  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game6Kabuto3ObjFv
