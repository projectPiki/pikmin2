.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx10TFusenhAir, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx10TFusenhAir
.obj __vt__Q23efx13TFusenhAirhit, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx13TFusenhAirhit
.obj __vt__Q34Game12Hanachirashi3Obj, global
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
	.4byte onInit__Q34Game12Hanachirashi3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game12Hanachirashi3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game12Hanachirashi3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game12Hanachirashi3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game12Hanachirashi3ObjFv
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
	.4byte getShadowParam__Q34Game12Hanachirashi3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game12Hanachirashi3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game12Hanachirashi3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game12Hanachirashi3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game12Hanachirashi3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game12Hanachirashi3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game12Hanachirashi3ObjFv
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
	.4byte getEnemyTypeID__Q34Game12Hanachirashi3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q34Game12Hanachirashi3ObjFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q34Game12Hanachirashi3ObjFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game12Hanachirashi3ObjFv
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
	.4byte doStartStoneState__Q34Game12Hanachirashi3ObjFv
	.4byte doFinishStoneState__Q34Game12Hanachirashi3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q24Game9EnemyBaseFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game12Hanachirashi3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game12Hanachirashi3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game12Hanachirashi3ObjFv
	.4byte doStartMovie__Q34Game12Hanachirashi3ObjFv
	.4byte doEndMovie__Q34Game12Hanachirashi3ObjFv
	.4byte setFSM__Q34Game12Hanachirashi3ObjFPQ34Game12Hanachirashi3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@812@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@812@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@812@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@812@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@812@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@812@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game12Hanachirashi3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051BDB8, local
	.float 0.0
.endobj lbl_8051BDB8
.balign 4
.obj lbl_8051BDBC, local
	.asciz "hana3"
.endobj lbl_8051BDBC
.balign 4
.obj lbl_8051BDC4, local
	.float 30.0
.endobj lbl_8051BDC4
.balign 4
.obj lbl_8051BDC8, local
	.asciz "mune"
.endobj lbl_8051BDC8
.balign 4
.obj lbl_8051BDD0, local
	.asciz "head"
.endobj lbl_8051BDD0
.balign 4
.obj lbl_8051BDD8, local
	.float 0.5
.endobj lbl_8051BDD8
.obj lbl_8051BDDC, local
	.float 1.0
.endobj lbl_8051BDDC
.obj lbl_8051BDE0, local
	.float 100.0
.endobj lbl_8051BDE0
.obj lbl_8051BDE4, local
	.float 50.0
.endobj lbl_8051BDE4
.obj lbl_8051BDE8, local
	.float -10.0
.endobj lbl_8051BDE8
.obj lbl_8051BDEC, local
	.float 500.0
.endobj lbl_8051BDEC
.obj lbl_8051BDF0, local
	.float -325.9493
.endobj lbl_8051BDF0
.obj lbl_8051BDF4, local
	.float 325.9493
.endobj lbl_8051BDF4
.obj lbl_8051BDF8, local
	.float 32768.0
.endobj lbl_8051BDF8
.obj lbl_8051BDFC, local # pi
	.float 3.1415927
.endobj lbl_8051BDFC
.obj lbl_8051BE00, local # pi/2
	.float 1.5707964
.endobj lbl_8051BE00
.balign 8
.obj lbl_8051BE08, local
	.8byte 0x4330000080000000
.endobj lbl_8051BE08
.obj lbl_8051BE10, local
	.float -5.0
.endobj lbl_8051BE10
.obj lbl_8051BE14, local
	.float 5.0
.endobj lbl_8051BE14
.obj lbl_8051BE18, local
	.float 20.0
.endobj lbl_8051BE18
.obj lbl_8051BE1C, local # tau
	.float 6.2831855
.endobj lbl_8051BE1C
.obj lbl_8051BE20, local
	.float 0.0055555557
.endobj lbl_8051BE20
.obj lbl_8051BE24, local
	.float 180.0
.endobj lbl_8051BE24
.obj lbl_8051BE28, local
	.float 12800.0
.endobj lbl_8051BE28
.obj lbl_8051BE2C, local
	.float -0.85
.endobj lbl_8051BE2C
.obj lbl_8051BE30, local
	.float 25.0
.endobj lbl_8051BE30
.obj lbl_8051BE34, local
	.float 3.0
.endobj lbl_8051BE34
.obj lbl_8051BE38, local
	.float 0.2
.endobj lbl_8051BE38
.obj lbl_8051BE3C, local
	.float 10.0
.endobj lbl_8051BE3C
.obj lbl_8051BE40, local
	.float 0.7
.endobj lbl_8051BE40

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game12Hanachirashi3ObjFv, global
/* 802A1AE8 0029EA28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1AEC 0029EA2C  7C 08 02 A6 */	mflr r0
/* 802A1AF0 0029EA30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1AF4 0029EA34  7C 80 07 35 */	extsh. r0, r4
/* 802A1AF8 0029EA38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1AFC 0029EA3C  7C 7F 1B 78 */	mr r31, r3
/* 802A1B00 0029EA40  93 C1 00 08 */	stw r30, 8(r1)
/* 802A1B04 0029EA44  41 82 00 24 */	beq .L_802A1B28
/* 802A1B08 0029EA48  38 1F 03 2C */	addi r0, r31, 0x32c
/* 802A1B0C 0029EA4C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802A1B10 0029EA50  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802A1B14 0029EA54  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802A1B18 0029EA58  38 00 00 00 */	li r0, 0
/* 802A1B1C 0029EA5C  90 7F 03 2C */	stw r3, 0x32c(r31)
/* 802A1B20 0029EA60  90 1F 03 30 */	stw r0, 0x330(r31)
/* 802A1B24 0029EA64  90 1F 03 34 */	stw r0, 0x334(r31)
.L_802A1B28:
/* 802A1B28 0029EA68  7F E3 FB 78 */	mr r3, r31
/* 802A1B2C 0029EA6C  38 80 00 00 */	li r4, 0
/* 802A1B30 0029EA70  4B E5 F8 71 */	bl __ct__Q24Game9EnemyBaseFv
/* 802A1B34 0029EA74  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi3Obj@ha
/* 802A1B38 0029EA78  38 1F 03 2C */	addi r0, r31, 0x32c
/* 802A1B3C 0029EA7C  38 A3 D2 A0 */	addi r5, r3, __vt__Q34Game12Hanachirashi3Obj@l
/* 802A1B40 0029EA80  38 60 00 2C */	li r3, 0x2c
/* 802A1B44 0029EA84  90 BF 00 00 */	stw r5, 0(r31)
/* 802A1B48 0029EA88  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802A1B4C 0029EA8C  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802A1B50 0029EA90  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802A1B54 0029EA94  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802A1B58 0029EA98  90 A4 00 00 */	stw r5, 0(r4)
/* 802A1B5C 0029EA9C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802A1B60 0029EAA0  7C 04 00 50 */	subf r0, r4, r0
/* 802A1B64 0029EAA4  90 04 00 0C */	stw r0, 0xc(r4)
/* 802A1B68 0029EAA8  4B D8 23 3D */	bl __nw__FUl
/* 802A1B6C 0029EAAC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A1B70 0029EAB0  41 82 00 44 */	beq .L_802A1BB4
/* 802A1B74 0029EAB4  4B E8 5E 01 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802A1B78 0029EAB8  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi14ProperAnimator@ha
/* 802A1B7C 0029EABC  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802A1B80 0029EAC0  38 03 D1 50 */	addi r0, r3, __vt__Q34Game12Hanachirashi14ProperAnimator@l
/* 802A1B84 0029EAC4  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802A1B88 0029EAC8  90 1E 00 00 */	stw r0, 0(r30)
/* 802A1B8C 0029EACC  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802A1B90 0029EAD0  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802A1B94 0029EAD4  38 00 00 00 */	li r0, 0
/* 802A1B98 0029EAD8  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802A1B9C 0029EADC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802A1BA0 0029EAE0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802A1BA4 0029EAE4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802A1BA8 0029EAE8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802A1BAC 0029EAEC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802A1BB0 0029EAF0  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802A1BB4:
/* 802A1BB4 0029EAF4  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802A1BB8 0029EAF8  38 60 00 1C */	li r3, 0x1c
/* 802A1BBC 0029EAFC  4B D8 22 E9 */	bl __nw__FUl
/* 802A1BC0 0029EB00  7C 64 1B 79 */	or. r4, r3, r3
/* 802A1BC4 0029EB04  41 82 00 24 */	beq .L_802A1BE8
/* 802A1BC8 0029EB08  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802A1BCC 0029EB0C  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi3FSM@ha
/* 802A1BD0 0029EB10  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802A1BD4 0029EB14  38 A0 FF FF */	li r5, -1
/* 802A1BD8 0029EB18  90 04 00 00 */	stw r0, 0(r4)
/* 802A1BDC 0029EB1C  38 03 D1 28 */	addi r0, r3, __vt__Q34Game12Hanachirashi3FSM@l
/* 802A1BE0 0029EB20  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802A1BE4 0029EB24  90 04 00 00 */	stw r0, 0(r4)
.L_802A1BE8:
/* 802A1BE8 0029EB28  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A1BEC 0029EB2C  7F E3 FB 78 */	mr r3, r31
/* 802A1BF0 0029EB30  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802A1BF4 0029EB34  7D 89 03 A6 */	mtctr r12
/* 802A1BF8 0029EB38  4E 80 04 21 */	bctrl 
/* 802A1BFC 0029EB3C  7F E3 FB 78 */	mr r3, r31
/* 802A1C00 0029EB40  48 00 22 B1 */	bl createEffect__Q34Game12Hanachirashi3ObjFv
/* 802A1C04 0029EB44  38 60 00 28 */	li r3, 0x28
/* 802A1C08 0029EB48  4B D8 23 A5 */	bl __nwa__FUl
/* 802A1C0C 0029EB4C  3C 80 80 16 */	lis r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
/* 802A1C10 0029EB50  38 A0 00 00 */	li r5, 0
/* 802A1C14 0029EB54  38 84 38 EC */	addi r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
/* 802A1C18 0029EB58  38 C0 00 0C */	li r6, 0xc
/* 802A1C1C 0029EB5C  38 E0 00 02 */	li r7, 2
/* 802A1C20 0029EB60  4B E1 FD D1 */	bl __construct_new_array
/* 802A1C24 0029EB64  90 7F 03 28 */	stw r3, 0x328(r31)
/* 802A1C28 0029EB68  7F E3 FB 78 */	mr r3, r31
/* 802A1C2C 0029EB6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1C30 0029EB70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1C34 0029EB74  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A1C38 0029EB78  7C 08 03 A6 */	mtlr r0
/* 802A1C3C 0029EB7C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1C40 0029EB80  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12Hanachirashi3ObjFv

.fn setInitialSetting__Q34Game12Hanachirashi3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802A1C44 0029EB84  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game12Hanachirashi3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game12Hanachirashi3ObjFPQ24Game15CreatureInitArg, global
/* 802A1C48 0029EB88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1C4C 0029EB8C  7C 08 02 A6 */	mflr r0
/* 802A1C50 0029EB90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1C54 0029EB94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1C58 0029EB98  7C 7F 1B 78 */	mr r31, r3
/* 802A1C5C 0029EB9C  4B E5 FD FD */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802A1C60 0029EBA0  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802A1C64 0029EBA4  38 00 FF FF */	li r0, -1
/* 802A1C68 0029EBA8  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A1C6C 0029EBAC  7F E3 FB 78 */	mr r3, r31
/* 802A1C70 0029EBB0  54 84 06 6E */	rlwinm r4, r4, 0, 0x19, 0x17
/* 802A1C74 0029EBB4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802A1C78 0029EBB8  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802A1C7C 0029EBBC  60 84 00 04 */	ori r4, r4, 4
/* 802A1C80 0029EBC0  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802A1C84 0029EBC4  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802A1C88 0029EBC8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802A1C8C 0029EBCC  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802A1C90 0029EBD0  48 00 09 85 */	bl resetShadowOffset__Q34Game12Hanachirashi3ObjFv
/* 802A1C94 0029EBD4  7F E3 FB 78 */	mr r3, r31
/* 802A1C98 0029EBD8  48 00 09 E5 */	bl resetShadowRadius__Q34Game12Hanachirashi3ObjFv
/* 802A1C9C 0029EBDC  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A1CA0 0029EBE0  38 00 00 00 */	li r0, 0
/* 802A1CA4 0029EBE4  38 82 DA 5C */	addi r4, r2, lbl_8051BDBC@sda21
/* 802A1CA8 0029EBE8  D0 1F 03 14 */	stfs f0, 0x314(r31)
/* 802A1CAC 0029EBEC  98 1F 03 10 */	stb r0, 0x310(r31)
/* 802A1CB0 0029EBF0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802A1CB4 0029EBF4  48 19 D3 31 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A1CB8 0029EBF8  48 18 7B E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A1CBC 0029EBFC  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802A1CC0 0029EC00  7F E3 FB 78 */	mr r3, r31
/* 802A1CC4 0029EC04  48 00 23 3D */	bl setupEffect__Q34Game12Hanachirashi3ObjFv
/* 802A1CC8 0029EC08  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A1CCC 0029EC0C  7F E4 FB 78 */	mr r4, r31
/* 802A1CD0 0029EC10  38 A0 00 01 */	li r5, 1
/* 802A1CD4 0029EC14  38 C0 00 00 */	li r6, 0
/* 802A1CD8 0029EC18  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 802A1CDC 0029EC1C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802A1CE0 0029EC20  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1CE4 0029EC24  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802A1CE8 0029EC28  7D 89 03 A6 */	mtctr r12
/* 802A1CEC 0029EC2C  4E 80 04 21 */	bctrl 
/* 802A1CF0 0029EC30  80 7F 03 28 */	lwz r3, 0x328(r31)
/* 802A1CF4 0029EC34  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 802A1CF8 0029EC38  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1CFC 0029EC3C  80 84 00 44 */	lwz r4, 0x44(r4)
/* 802A1D00 0029EC40  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A1D04 0029EC44  7D 89 03 A6 */	mtctr r12
/* 802A1D08 0029EC48  4E 80 04 21 */	bctrl 
/* 802A1D0C 0029EC4C  80 7F 03 28 */	lwz r3, 0x328(r31)
/* 802A1D10 0029EC50  85 83 00 0C */	lwzu r12, 0xc(r3)
/* 802A1D14 0029EC54  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 802A1D18 0029EC58  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A1D1C 0029EC5C  80 84 00 48 */	lwz r4, 0x48(r4)
/* 802A1D20 0029EC60  7D 89 03 A6 */	mtctr r12
/* 802A1D24 0029EC64  4E 80 04 21 */	bctrl 
/* 802A1D28 0029EC68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1D2C 0029EC6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1D30 0029EC70  7C 08 03 A6 */	mtlr r0
/* 802A1D34 0029EC74  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1D38 0029EC78  4E 80 00 20 */	blr 
.endfn onInit__Q34Game12Hanachirashi3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game12Hanachirashi3ObjFPQ24Game15CreatureKillArg, global
/* 802A1D3C 0029EC7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1D40 0029EC80  7C 08 02 A6 */	mflr r0
/* 802A1D44 0029EC84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1D48 0029EC88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1D4C 0029EC8C  7C 9F 23 78 */	mr r31, r4
/* 802A1D50 0029EC90  93 C1 00 08 */	stw r30, 8(r1)
/* 802A1D54 0029EC94  7C 7E 1B 78 */	mr r30, r3
/* 802A1D58 0029EC98  48 00 24 35 */	bl finishWindEffect__Q34Game12Hanachirashi3ObjFv
/* 802A1D5C 0029EC9C  7F C3 F3 78 */	mr r3, r30
/* 802A1D60 0029ECA0  7F E4 FB 78 */	mr r4, r31
/* 802A1D64 0029ECA4  4B E6 01 85 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802A1D68 0029ECA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1D6C 0029ECAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1D70 0029ECB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A1D74 0029ECB4  7C 08 03 A6 */	mtlr r0
/* 802A1D78 0029ECB8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1D7C 0029ECBC  4E 80 00 20 */	blr 
.endfn onKill__Q34Game12Hanachirashi3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game12Hanachirashi3ObjFv, global
/* 802A1D80 0029ECC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1D84 0029ECC4  7C 08 02 A6 */	mflr r0
/* 802A1D88 0029ECC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1D8C 0029ECCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1D90 0029ECD0  7C 7F 1B 78 */	mr r31, r3
/* 802A1D94 0029ECD4  7F E4 FB 78 */	mr r4, r31
/* 802A1D98 0029ECD8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802A1D9C 0029ECDC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1DA0 0029ECE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A1DA4 0029ECE4  7D 89 03 A6 */	mtctr r12
/* 802A1DA8 0029ECE8  4E 80 04 21 */	bctrl 
/* 802A1DAC 0029ECEC  7F E3 FB 78 */	mr r3, r31
/* 802A1DB0 0029ECF0  48 00 09 05 */	bl updateFallTimer__Q34Game12Hanachirashi3ObjFv
/* 802A1DB4 0029ECF4  7F E3 FB 78 */	mr r3, r31
/* 802A1DB8 0029ECF8  48 00 14 59 */	bl updateEmit__Q34Game12Hanachirashi3ObjFv
/* 802A1DBC 0029ECFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1DC0 0029ED00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1DC4 0029ED04  7C 08 03 A6 */	mtlr r0
/* 802A1DC8 0029ED08  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1DCC 0029ED0C  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game12Hanachirashi3ObjFv

.fn changeMaterial__Q34Game12Hanachirashi3ObjFv, global
/* 802A1DD0 0029ED10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A1DD4 0029ED14  7C 08 02 A6 */	mflr r0
/* 802A1DD8 0029ED18  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A1DDC 0029ED1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A1DE0 0029ED20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802A1DE4 0029ED24  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802A1DE8 0029ED28  93 81 00 10 */	stw r28, 0x10(r1)
/* 802A1DEC 0029ED2C  7C 7C 1B 78 */	mr r28, r3
/* 802A1DF0 0029ED30  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802A1DF4 0029ED34  83 A3 00 08 */	lwz r29, 8(r3)
/* 802A1DF8 0029ED38  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A1DFC 0029ED3C  7F A3 EB 78 */	mr r3, r29
/* 802A1E00 0029ED40  83 DD 00 04 */	lwz r30, 4(r29)
/* 802A1E04 0029ED44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A1E08 0029ED48  7D 89 03 A6 */	mtctr r12
/* 802A1E0C 0029ED4C  4E 80 04 21 */	bctrl 
/* 802A1E10 0029ED50  80 7C 03 28 */	lwz r3, 0x328(r28)
/* 802A1E14 0029ED54  C0 22 DA 64 */	lfs f1, lbl_8051BDC4@sda21(r2)
/* 802A1E18 0029ED58  48 19 27 35 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802A1E1C 0029ED5C  80 7C 03 28 */	lwz r3, 0x328(r28)
/* 802A1E20 0029ED60  C0 22 DA 64 */	lfs f1, lbl_8051BDC4@sda21(r2)
/* 802A1E24 0029ED64  38 63 00 0C */	addi r3, r3, 0xc
/* 802A1E28 0029ED68  48 19 27 25 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802A1E2C 0029ED6C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802A1E30 0029ED70  3B 80 00 00 */	li r28, 0
/* 802A1E34 0029ED74  3B E3 F2 30 */	addi r31, r3, j3dSys@l
/* 802A1E38 0029ED78  48 00 00 3C */	b .L_802A1E74
.L_802A1E3C:
/* 802A1E3C 0029ED7C  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802A1E40 0029ED80  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802A1E44 0029ED84  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802A1E48 0029ED88  7C 84 1A 14 */	add r4, r4, r3
/* 802A1E4C 0029ED8C  90 9F 00 3C */	stw r4, 0x3c(r31)
/* 802A1E50 0029ED90  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802A1E54 0029ED94  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802A1E58 0029ED98  7C 63 00 2E */	lwzx r3, r3, r0
/* 802A1E5C 0029ED9C  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802A1E60 0029EDA0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1E64 0029EDA4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802A1E68 0029EDA8  7D 89 03 A6 */	mtctr r12
/* 802A1E6C 0029EDAC  4E 80 04 21 */	bctrl 
/* 802A1E70 0029EDB0  3B 9C 00 01 */	addi r28, r28, 1
.L_802A1E74:
/* 802A1E74 0029EDB4  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802A1E78 0029EDB8  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802A1E7C 0029EDBC  7C 03 00 40 */	cmplw r3, r0
/* 802A1E80 0029EDC0  41 80 FF BC */	blt .L_802A1E3C
/* 802A1E84 0029EDC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A1E88 0029EDC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A1E8C 0029EDCC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802A1E90 0029EDD0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802A1E94 0029EDD4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802A1E98 0029EDD8  7C 08 03 A6 */	mtlr r0
/* 802A1E9C 0029EDDC  38 21 00 20 */	addi r1, r1, 0x20
/* 802A1EA0 0029EDE0  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game12Hanachirashi3ObjFv

.fn setFSM__Q34Game12Hanachirashi3ObjFPQ34Game12Hanachirashi3FSM, global
/* 802A1EA4 0029EDE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1EA8 0029EDE8  7C 08 02 A6 */	mflr r0
/* 802A1EAC 0029EDEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1EB0 0029EDF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1EB4 0029EDF4  7C 7F 1B 78 */	mr r31, r3
/* 802A1EB8 0029EDF8  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802A1EBC 0029EDFC  7F E4 FB 78 */	mr r4, r31
/* 802A1EC0 0029EE00  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802A1EC4 0029EE04  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1EC8 0029EE08  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A1ECC 0029EE0C  7D 89 03 A6 */	mtctr r12
/* 802A1ED0 0029EE10  4E 80 04 21 */	bctrl 
/* 802A1ED4 0029EE14  38 00 00 00 */	li r0, 0
/* 802A1ED8 0029EE18  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802A1EDC 0029EE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1EE0 0029EE20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1EE4 0029EE24  7C 08 03 A6 */	mtlr r0
/* 802A1EE8 0029EE28  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1EEC 0029EE2C  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game12Hanachirashi3ObjFPQ34Game12Hanachirashi3FSM

.fn doDirectDraw__Q34Game12Hanachirashi3ObjFR8Graphics, global
/* 802A1EF0 0029EE30  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game12Hanachirashi3ObjFR8Graphics

.fn doDebugDraw__Q34Game12Hanachirashi3ObjFR8Graphics, global
/* 802A1EF4 0029EE34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1EF8 0029EE38  7C 08 02 A6 */	mflr r0
/* 802A1EFC 0029EE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1F00 0029EE40  4B E6 3F 6D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802A1F04 0029EE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1F08 0029EE48  7C 08 03 A6 */	mtlr r0
/* 802A1F0C 0029EE4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1F10 0029EE50  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game12Hanachirashi3ObjFR8Graphics

.fn getShadowParam__Q34Game12Hanachirashi3ObjFRQ24Game11ShadowParam, global
/* 802A1F14 0029EE54  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802A1F18 0029EE58  7C 08 02 A6 */	mflr r0
/* 802A1F1C 0029EE5C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A1F20 0029EE60  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802A1F24 0029EE64  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802A1F28 0029EE68  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802A1F2C 0029EE6C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802A1F30 0029EE70  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 802A1F34 0029EE74  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 802A1F38 0029EE78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1F3C 0029EE7C  93 C1 00 08 */	stw r30, 8(r1)
/* 802A1F40 0029EE80  7C 7E 1B 78 */	mr r30, r3
/* 802A1F44 0029EE84  7C 9F 23 78 */	mr r31, r4
/* 802A1F48 0029EE88  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802A1F4C 0029EE8C  38 82 DA 68 */	addi r4, r2, lbl_8051BDC8@sda21
/* 802A1F50 0029EE90  48 19 D0 95 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A1F54 0029EE94  48 18 79 4D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A1F58 0029EE98  C3 A3 00 2C */	lfs f29, 0x2c(r3)
/* 802A1F5C 0029EE9C  38 82 DA 70 */	addi r4, r2, lbl_8051BDD0@sda21
/* 802A1F60 0029EEA0  C3 C3 00 1C */	lfs f30, 0x1c(r3)
/* 802A1F64 0029EEA4  C3 E3 00 0C */	lfs f31, 0xc(r3)
/* 802A1F68 0029EEA8  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802A1F6C 0029EEAC  48 19 D0 79 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A1F70 0029EEB0  48 18 79 31 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A1F74 0029EEB4  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802A1F78 0029EEB8  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802A1F7C 0029EEBC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802A1F80 0029EEC0  7F C3 F3 78 */	mr r3, r30
/* 802A1F84 0029EEC4  C0 62 DA 78 */	lfs f3, lbl_8051BDD8@sda21(r2)
/* 802A1F88 0029EEC8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802A1F8C 0029EECC  C0 22 DA 58 */	lfs f1, lbl_8051BDB8@sda21(r2)
/* 802A1F90 0029EED0  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802A1F94 0029EED4  C0 02 DA 7C */	lfs f0, lbl_8051BDDC@sda21(r2)
/* 802A1F98 0029EED8  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802A1F9C 0029EEDC  C0 5F 00 00 */	lfs f2, 0(r31)
/* 802A1FA0 0029EEE0  EC 42 F8 2A */	fadds f2, f2, f31
/* 802A1FA4 0029EEE4  D0 5F 00 00 */	stfs f2, 0(r31)
/* 802A1FA8 0029EEE8  C0 5F 00 04 */	lfs f2, 4(r31)
/* 802A1FAC 0029EEEC  EC 42 F0 2A */	fadds f2, f2, f30
/* 802A1FB0 0029EEF0  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802A1FB4 0029EEF4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 802A1FB8 0029EEF8  EC 42 E8 2A */	fadds f2, f2, f29
/* 802A1FBC 0029EEFC  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802A1FC0 0029EF00  C0 5F 00 00 */	lfs f2, 0(r31)
/* 802A1FC4 0029EF04  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802A1FC8 0029EF08  D0 5F 00 00 */	stfs f2, 0(r31)
/* 802A1FCC 0029EF0C  C0 5F 00 04 */	lfs f2, 4(r31)
/* 802A1FD0 0029EF10  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802A1FD4 0029EF14  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802A1FD8 0029EF18  C0 5F 00 08 */	lfs f2, 8(r31)
/* 802A1FDC 0029EF1C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802A1FE0 0029EF20  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802A1FE4 0029EF24  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 802A1FE8 0029EF28  C0 5E 02 D0 */	lfs f2, 0x2d0(r30)
/* 802A1FEC 0029EF2C  EC 43 10 2A */	fadds f2, f3, f2
/* 802A1FF0 0029EF30  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802A1FF4 0029EF34  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802A1FF8 0029EF38  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802A1FFC 0029EF3C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802A2000 0029EF40  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2004 0029EF44  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802A2008 0029EF48  7D 89 03 A6 */	mtctr r12
/* 802A200C 0029EF4C  4E 80 04 21 */	bctrl 
/* 802A2010 0029EF50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2014 0029EF54  40 82 00 10 */	bne .L_802A2024
/* 802A2018 0029EF58  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 802A201C 0029EF5C  28 00 00 00 */	cmplwi r0, 0
/* 802A2020 0029EF60  40 82 00 1C */	bne .L_802A203C
.L_802A2024:
/* 802A2024 0029EF64  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802A2028 0029EF68  C0 22 DA 80 */	lfs f1, lbl_8051BDE0@sda21(r2)
/* 802A202C 0029EF6C  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 802A2030 0029EF70  EC 01 00 2A */	fadds f0, f1, f0
/* 802A2034 0029EF74  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802A2038 0029EF78  48 00 00 0C */	b .L_802A2044
.L_802A203C:
/* 802A203C 0029EF7C  C0 02 DA 84 */	lfs f0, lbl_8051BDE4@sda21(r2)
/* 802A2040 0029EF80  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802A2044:
/* 802A2044 0029EF84  C0 1E 02 D4 */	lfs f0, 0x2d4(r30)
/* 802A2048 0029EF88  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802A204C 0029EF8C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802A2050 0029EF90  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802A2054 0029EF94  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802A2058 0029EF98  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802A205C 0029EF9C  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 802A2060 0029EFA0  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 802A2064 0029EFA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A2068 0029EFA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A206C 0029EFAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A2070 0029EFB0  7C 08 03 A6 */	mtlr r0
/* 802A2074 0029EFB4  38 21 00 40 */	addi r1, r1, 0x40
/* 802A2078 0029EFB8  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game12Hanachirashi3ObjFRQ24Game11ShadowParam

.fn doStartStoneState__Q34Game12Hanachirashi3ObjFv, global
/* 802A207C 0029EFBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2080 0029EFC0  7C 08 02 A6 */	mflr r0
/* 802A2084 0029EFC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A2088 0029EFC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A208C 0029EFCC  7C 7F 1B 78 */	mr r31, r3
/* 802A2090 0029EFD0  4B E6 0E 65 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802A2094 0029EFD4  7F E3 FB 78 */	mr r3, r31
/* 802A2098 0029EFD8  48 00 20 F5 */	bl finishWindEffect__Q34Game12Hanachirashi3ObjFv
/* 802A209C 0029EFDC  7F E3 FB 78 */	mr r3, r31
/* 802A20A0 0029EFE0  48 00 05 81 */	bl setShadowOffsetMax__Q34Game12Hanachirashi3ObjFv
/* 802A20A4 0029EFE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A20A8 0029EFE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A20AC 0029EFEC  7C 08 03 A6 */	mtlr r0
/* 802A20B0 0029EFF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A20B4 0029EFF4  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game12Hanachirashi3ObjFv

.fn doFinishStoneState__Q34Game12Hanachirashi3ObjFv, global
/* 802A20B8 0029EFF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A20BC 0029EFFC  7C 08 02 A6 */	mflr r0
/* 802A20C0 0029F000  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A20C4 0029F004  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A20C8 0029F008  7C 7F 1B 78 */	mr r31, r3
/* 802A20CC 0029F00C  4B E6 0E 3D */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802A20D0 0029F010  7F E3 FB 78 */	mr r3, r31
/* 802A20D4 0029F014  4B E6 53 21 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802A20D8 0029F018  2C 03 00 01 */	cmpwi r3, 1
/* 802A20DC 0029F01C  41 80 00 0C */	blt .L_802A20E8
/* 802A20E0 0029F020  2C 03 00 06 */	cmpwi r3, 6
/* 802A20E4 0029F024  40 81 00 1C */	ble .L_802A2100
.L_802A20E8:
/* 802A20E8 0029F028  2C 03 00 09 */	cmpwi r3, 9
/* 802A20EC 0029F02C  41 80 00 0C */	blt .L_802A20F8
/* 802A20F0 0029F030  2C 03 00 0A */	cmpwi r3, 0xa
/* 802A20F4 0029F034  40 81 00 0C */	ble .L_802A2100
.L_802A20F8:
/* 802A20F8 0029F038  2C 03 00 0C */	cmpwi r3, 0xc
/* 802A20FC 0029F03C  40 82 00 24 */	bne .L_802A2120
.L_802A2100:
/* 802A2100 0029F040  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802A2104 0029F044  7F E4 FB 78 */	mr r4, r31
/* 802A2108 0029F048  38 A0 00 09 */	li r5, 9
/* 802A210C 0029F04C  38 C0 00 00 */	li r6, 0
/* 802A2110 0029F050  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2114 0029F054  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A2118 0029F058  7D 89 03 A6 */	mtctr r12
/* 802A211C 0029F05C  4E 80 04 21 */	bctrl 
.L_802A2120:
/* 802A2120 0029F060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A2124 0029F064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A2128 0029F068  7C 08 03 A6 */	mtlr r0
/* 802A212C 0029F06C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2130 0029F070  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game12Hanachirashi3ObjFv

.fn doStartWaitingBirthTypeDrop__Q34Game12Hanachirashi3ObjFv, global
/* 802A2134 0029F074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2138 0029F078  7C 08 02 A6 */	mflr r0
/* 802A213C 0029F07C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A2140 0029F080  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A2144 0029F084  7C 7F 1B 78 */	mr r31, r3
/* 802A2148 0029F088  4B E6 58 51 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802A214C 0029F08C  7F E3 FB 78 */	mr r3, r31
/* 802A2150 0029F090  48 00 21 A9 */	bl effectDrawOff__Q34Game12Hanachirashi3ObjFv
/* 802A2154 0029F094  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A2158 0029F098  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A215C 0029F09C  7C 08 03 A6 */	mtlr r0
/* 802A2160 0029F0A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2164 0029F0A4  4E 80 00 20 */	blr 
.endfn doStartWaitingBirthTypeDrop__Q34Game12Hanachirashi3ObjFv

.fn doFinishWaitingBirthTypeDrop__Q34Game12Hanachirashi3ObjFv, global
/* 802A2168 0029F0A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A216C 0029F0AC  7C 08 02 A6 */	mflr r0
/* 802A2170 0029F0B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A2174 0029F0B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A2178 0029F0B8  7C 7F 1B 78 */	mr r31, r3
/* 802A217C 0029F0BC  4B E6 58 4D */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802A2180 0029F0C0  7F E3 FB 78 */	mr r3, r31
/* 802A2184 0029F0C4  48 00 20 FD */	bl effectDrawOn__Q34Game12Hanachirashi3ObjFv
/* 802A2188 0029F0C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A218C 0029F0CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A2190 0029F0D0  7C 08 03 A6 */	mtlr r0
/* 802A2194 0029F0D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2198 0029F0D8  4E 80 00 20 */	blr 
.endfn doFinishWaitingBirthTypeDrop__Q34Game12Hanachirashi3ObjFv

.fn doStartMovie__Q34Game12Hanachirashi3ObjFv, global
/* 802A219C 0029F0DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A21A0 0029F0E0  7C 08 02 A6 */	mflr r0
/* 802A21A4 0029F0E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A21A8 0029F0E8  48 00 21 51 */	bl effectDrawOff__Q34Game12Hanachirashi3ObjFv
/* 802A21AC 0029F0EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A21B0 0029F0F0  7C 08 03 A6 */	mtlr r0
/* 802A21B4 0029F0F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A21B8 0029F0F8  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game12Hanachirashi3ObjFv

.fn doEndMovie__Q34Game12Hanachirashi3ObjFv, global
/* 802A21BC 0029F0FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A21C0 0029F100  7C 08 02 A6 */	mflr r0
/* 802A21C4 0029F104  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A21C8 0029F108  48 00 20 B9 */	bl effectDrawOn__Q34Game12Hanachirashi3ObjFv
/* 802A21CC 0029F10C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A21D0 0029F110  7C 08 03 A6 */	mtlr r0
/* 802A21D4 0029F114  38 21 00 10 */	addi r1, r1, 0x10
/* 802A21D8 0029F118  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game12Hanachirashi3ObjFv

.fn getOffsetForMapCollision__Q34Game12Hanachirashi3ObjFv, global
/* 802A21DC 0029F11C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A21E0 0029F120  7C 08 02 A6 */	mflr r0
/* 802A21E4 0029F124  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A21E8 0029F128  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A21EC 0029F12C  7C 9F 23 78 */	mr r31, r4
/* 802A21F0 0029F130  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802A21F4 0029F134  7C 7E 1B 78 */	mr r30, r3
/* 802A21F8 0029F138  38 61 00 08 */	addi r3, r1, 8
/* 802A21FC 0029F13C  48 00 00 D5 */	bl getHeadJointPos__Q34Game12Hanachirashi3ObjFv
/* 802A2200 0029F140  C0 41 00 08 */	lfs f2, 8(r1)
/* 802A2204 0029F144  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802A2208 0029F148  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802A220C 0029F14C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802A2210 0029F150  EC 42 00 28 */	fsubs f2, f2, f0
/* 802A2214 0029F154  C0 02 DA 88 */	lfs f0, lbl_8051BDE8@sda21(r2)
/* 802A2218 0029F158  EC 63 08 28 */	fsubs f3, f3, f1
/* 802A221C 0029F15C  D0 5E 00 00 */	stfs f2, 0(r30)
/* 802A2220 0029F160  D0 1E 00 04 */	stfs f0, 4(r30)
/* 802A2224 0029F164  D0 7E 00 08 */	stfs f3, 8(r30)
/* 802A2228 0029F168  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A222C 0029F16C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802A2230 0029F170  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A2234 0029F174  7C 08 03 A6 */	mtlr r0
/* 802A2238 0029F178  38 21 00 20 */	addi r1, r1, 0x20
/* 802A223C 0029F17C  4E 80 00 20 */	blr 
.endfn getOffsetForMapCollision__Q34Game12Hanachirashi3ObjFv

.fn "getThrowupItemPosition__Q34Game12Hanachirashi3ObjFP10Vector3<f>", global
/* 802A2240 0029F180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2244 0029F184  7C 08 02 A6 */	mflr r0
/* 802A2248 0029F188  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A224C 0029F18C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802A2250 0029F190  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802A2254 0029F194  41 82 00 0C */	beq .L_802A2260
/* 802A2258 0029F198  4B E6 36 F5 */	bl "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
/* 802A225C 0029F19C  48 00 00 24 */	b .L_802A2280
.L_802A2260:
/* 802A2260 0029F1A0  C0 42 DA 8C */	lfs f2, lbl_8051BDEC@sda21(r2)
/* 802A2264 0029F1A4  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 802A2268 0029F1A8  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 802A226C 0029F1AC  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802A2270 0029F1B0  EC 22 08 2A */	fadds f1, f2, f1
/* 802A2274 0029F1B4  D0 04 00 00 */	stfs f0, 0(r4)
/* 802A2278 0029F1B8  D0 24 00 04 */	stfs f1, 4(r4)
/* 802A227C 0029F1BC  D0 64 00 08 */	stfs f3, 8(r4)
.L_802A2280:
/* 802A2280 0029F1C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A2284 0029F1C4  7C 08 03 A6 */	mtlr r0
/* 802A2288 0029F1C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A228C 0029F1CC  4E 80 00 20 */	blr 
.endfn "getThrowupItemPosition__Q34Game12Hanachirashi3ObjFP10Vector3<f>"

.fn "getThrowupItemVelocity__Q34Game12Hanachirashi3ObjFP10Vector3<f>", global
/* 802A2290 0029F1D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2294 0029F1D4  7C 08 02 A6 */	mflr r0
/* 802A2298 0029F1D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A229C 0029F1DC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802A22A0 0029F1E0  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802A22A4 0029F1E4  41 82 00 0C */	beq .L_802A22B0
/* 802A22A8 0029F1E8  4B E6 36 F9 */	bl "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
/* 802A22AC 0029F1EC  48 00 00 14 */	b .L_802A22C0
.L_802A22B0:
/* 802A22B0 0029F1F0  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A22B4 0029F1F4  D0 04 00 08 */	stfs f0, 8(r4)
/* 802A22B8 0029F1F8  D0 04 00 04 */	stfs f0, 4(r4)
/* 802A22BC 0029F1FC  D0 04 00 00 */	stfs f0, 0(r4)
.L_802A22C0:
/* 802A22C0 0029F200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A22C4 0029F204  7C 08 03 A6 */	mtlr r0
/* 802A22C8 0029F208  38 21 00 10 */	addi r1, r1, 0x10
/* 802A22CC 0029F20C  4E 80 00 20 */	blr 
.endfn "getThrowupItemVelocity__Q34Game12Hanachirashi3ObjFP10Vector3<f>"

.fn getHeadJointPos__Q34Game12Hanachirashi3ObjFv, global
/* 802A22D0 0029F210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A22D4 0029F214  7C 08 02 A6 */	mflr r0
/* 802A22D8 0029F218  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A22DC 0029F21C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A22E0 0029F220  7C 7F 1B 78 */	mr r31, r3
/* 802A22E4 0029F224  80 64 01 74 */	lwz r3, 0x174(r4)
/* 802A22E8 0029F228  38 82 DA 70 */	addi r4, r2, lbl_8051BDD0@sda21
/* 802A22EC 0029F22C  48 19 CC F9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A22F0 0029F230  48 18 75 B1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A22F4 0029F234  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802A22F8 0029F238  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802A22FC 0029F23C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802A2300 0029F240  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802A2304 0029F244  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802A2308 0029F248  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802A230C 0029F24C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A2310 0029F250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A2314 0029F254  7C 08 03 A6 */	mtlr r0
/* 802A2318 0029F258  38 21 00 10 */	addi r1, r1, 0x10
/* 802A231C 0029F25C  4E 80 00 20 */	blr 
.endfn getHeadJointPos__Q34Game12Hanachirashi3ObjFv

.fn setHeightVelocity__Q34Game12Hanachirashi3ObjFv, global
/* 802A2320 0029F260  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802A2324 0029F264  7C 08 02 A6 */	mflr r0
/* 802A2328 0029F268  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A232C 0029F26C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802A2330 0029F270  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802A2334 0029F274  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802A2338 0029F278  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802A233C 0029F27C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A2340 0029F280  7C 7F 1B 78 */	mr r31, r3
/* 802A2344 0029F284  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802A2348 0029F288  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802A234C 0029F28C  81 83 00 04 */	lwz r12, 4(r3)
/* 802A2350 0029F290  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802A2354 0029F294  7D 89 03 A6 */	mtctr r12
/* 802A2358 0029F298  4E 80 04 21 */	bctrl 
/* 802A235C 0029F29C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A2360 0029F2A0  FF E0 08 90 */	fmr f31, f1
/* 802A2364 0029F2A4  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802A2368 0029F2A8  C3 C3 08 1C */	lfs f30, 0x81c(r3)
/* 802A236C 0029F2AC  C0 03 09 34 */	lfs f0, 0x934(r3)
/* 802A2370 0029F2B0  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802A2374 0029F2B4  EC 1E 00 28 */	fsubs f0, f30, f0
/* 802A2378 0029F2B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A237C 0029F2BC  40 81 00 78 */	ble .L_802A23F4
/* 802A2380 0029F2C0  7F E3 FB 78 */	mr r3, r31
/* 802A2384 0029F2C4  48 00 04 05 */	bl addPitchRatio__Q34Game12Hanachirashi3ObjFv
/* 802A2388 0029F2C8  C0 5F 03 14 */	lfs f2, 0x314(r31)
/* 802A238C 0029F2CC  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A2390 0029F2D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A2394 0029F2D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802A2398 0029F2D8  C0 23 09 34 */	lfs f1, 0x934(r3)
/* 802A239C 0029F2DC  40 80 00 30 */	bge .L_802A23CC
/* 802A23A0 0029F2E0  C0 02 DA 90 */	lfs f0, lbl_8051BDF0@sda21(r2)
/* 802A23A4 0029F2E4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A23A8 0029F2E8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A23AC 0029F2EC  EC 02 00 32 */	fmuls f0, f2, f0
/* 802A23B0 0029F2F0  FC 00 00 1E */	fctiwz f0, f0
/* 802A23B4 0029F2F4  D8 01 00 08 */	stfd f0, 8(r1)
/* 802A23B8 0029F2F8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802A23BC 0029F2FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A23C0 0029F300  7C 03 04 2E */	lfsx f0, r3, r0
/* 802A23C4 0029F304  FC 00 00 50 */	fneg f0, f0
/* 802A23C8 0029F308  48 00 00 28 */	b .L_802A23F0
.L_802A23CC:
/* 802A23CC 0029F30C  C0 02 DA 94 */	lfs f0, lbl_8051BDF4@sda21(r2)
/* 802A23D0 0029F310  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A23D4 0029F314  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A23D8 0029F318  EC 02 00 32 */	fmuls f0, f2, f0
/* 802A23DC 0029F31C  FC 00 00 1E */	fctiwz f0, f0
/* 802A23E0 0029F320  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802A23E4 0029F324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A23E8 0029F328  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A23EC 0029F32C  7C 03 04 2E */	lfsx f0, r3, r0
.L_802A23F0:
/* 802A23F0 0029F330  EF C1 F0 3A */	fmadds f30, f1, f0, f30
.L_802A23F4:
/* 802A23F4 0029F334  EC 3F F0 2A */	fadds f1, f31, f30
/* 802A23F8 0029F338  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802A23FC 0029F33C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A2400 0029F340  EC 21 00 28 */	fsubs f1, f1, f0
/* 802A2404 0029F344  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802A2408 0029F348  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A240C 0029F34C  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 802A2410 0029F350  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802A2414 0029F354  EC 20 F8 28 */	fsubs f1, f0, f31
/* 802A2418 0029F358  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802A241C 0029F35C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802A2420 0029F360  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802A2424 0029F364  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802A2428 0029F368  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A242C 0029F36C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A2430 0029F370  7C 08 03 A6 */	mtlr r0
/* 802A2434 0029F374  38 21 00 40 */	addi r1, r1, 0x40
/* 802A2438 0029F378  4E 80 00 20 */	blr 
.endfn setHeightVelocity__Q34Game12Hanachirashi3ObjFv

.fn setRandTarget__Q34Game12Hanachirashi3ObjFv, global
/* 802A243C 0029F37C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 802A2440 0029F380  7C 08 02 A6 */	mflr r0
/* 802A2444 0029F384  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 802A2448 0029F388  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 802A244C 0029F38C  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 802A2450 0029F390  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 802A2454 0029F394  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 802A2458 0029F398  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 802A245C 0029F39C  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 802A2460 0029F3A0  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 802A2464 0029F3A4  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 802A2468 0029F3A8  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 802A246C 0029F3AC  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 802A2470 0029F3B0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802A2474 0029F3B4  7C 7F 1B 78 */	mr r31, r3
/* 802A2478 0029F3B8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802A247C 0029F3BC  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802A2480 0029F3C0  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802A2484 0029F3C4  EF 61 00 28 */	fsubs f27, f1, f0
/* 802A2488 0029F3C8  4B E2 71 19 */	bl rand
/* 802A248C 0029F3CC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802A2490 0029F3D0  3C 00 43 30 */	lis r0, 0x4330
/* 802A2494 0029F3D4  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802A2498 0029F3D8  7F E4 FB 78 */	mr r4, r31
/* 802A249C 0029F3DC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A24A0 0029F3E0  38 61 00 08 */	addi r3, r1, 8
/* 802A24A4 0029F3E4  90 01 00 18 */	stw r0, 0x18(r1)
/* 802A24A8 0029F3E8  C8 22 DA A8 */	lfd f1, lbl_8051BE08@sda21(r2)
/* 802A24AC 0029F3EC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802A24B0 0029F3F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A24B4 0029F3F4  EC 40 08 28 */	fsubs f2, f0, f1
/* 802A24B8 0029F3F8  C0 22 DA 98 */	lfs f1, lbl_8051BDF8@sda21(r2)
/* 802A24BC 0029F3FC  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 802A24C0 0029F400  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A24C4 0029F404  EC 5B 00 B2 */	fmuls f2, f27, f2
/* 802A24C8 0029F408  EC 22 08 24 */	fdivs f1, f2, f1
/* 802A24CC 0029F40C  EF 80 08 2A */	fadds f28, f0, f1
/* 802A24D0 0029F410  7D 89 03 A6 */	mtctr r12
/* 802A24D4 0029F414  4E 80 04 21 */	bctrl 
/* 802A24D8 0029F418  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802A24DC 0029F41C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802A24E0 0029F420  C0 21 00 08 */	lfs f1, 8(r1)
/* 802A24E4 0029F424  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802A24E8 0029F428  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802A24EC 0029F42C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A24F0 0029F430  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802A24F4 0029F434  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 802A24F8 0029F438  EC 40 E8 28 */	fsubs f2, f0, f29
/* 802A24FC 0029F43C  4B D9 2C 0D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802A2500 0029F440  FF 60 08 90 */	fmr f27, f1
/* 802A2504 0029F444  4B E2 70 9D */	bl rand
/* 802A2508 0029F448  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802A250C 0029F44C  3C 00 43 30 */	lis r0, 0x4330
/* 802A2510 0029F450  90 61 00 24 */	stw r3, 0x24(r1)
/* 802A2514 0029F454  C8 42 DA A8 */	lfd f2, lbl_8051BE08@sda21(r2)
/* 802A2518 0029F458  90 01 00 20 */	stw r0, 0x20(r1)
/* 802A251C 0029F45C  C0 62 DA 9C */	lfs f3, lbl_8051BDFC@sda21(r2)
/* 802A2520 0029F460  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802A2524 0029F464  C0 22 DA 98 */	lfs f1, lbl_8051BDF8@sda21(r2)
/* 802A2528 0029F468  EC 80 10 28 */	fsubs f4, f0, f2
/* 802A252C 0029F46C  C0 42 DA A0 */	lfs f2, lbl_8051BE00@sda21(r2)
/* 802A2530 0029F470  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A2534 0029F474  EC 63 01 32 */	fmuls f3, f3, f4
/* 802A2538 0029F478  EC 23 08 24 */	fdivs f1, f3, f1
/* 802A253C 0029F47C  EC 3B 08 2A */	fadds f1, f27, f1
/* 802A2540 0029F480  EC 62 08 2A */	fadds f3, f2, f1
/* 802A2544 0029F484  FC 20 18 90 */	fmr f1, f3
/* 802A2548 0029F488  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802A254C 0029F48C  40 80 00 08 */	bge .L_802A2554
/* 802A2550 0029F490  FC 20 18 50 */	fneg f1, f3
.L_802A2554:
/* 802A2554 0029F494  C0 42 DA 94 */	lfs f2, lbl_8051BDF4@sda21(r2)
/* 802A2558 0029F498  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A255C 0029F49C  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A2560 0029F4A0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802A2564 0029F4A4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802A2568 0029F4A8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802A256C 0029F4AC  FC 00 08 1E */	fctiwz f0, f1
/* 802A2570 0029F4B0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802A2574 0029F4B4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802A2578 0029F4B8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A257C 0029F4BC  7C 64 02 14 */	add r3, r4, r0
/* 802A2580 0029F4C0  C0 03 00 04 */	lfs f0, 4(r3)
/* 802A2584 0029F4C4  EC 3C E8 3A */	fmadds f1, f28, f0, f29
/* 802A2588 0029F4C8  40 80 00 28 */	bge .L_802A25B0
/* 802A258C 0029F4CC  C0 02 DA 90 */	lfs f0, lbl_8051BDF0@sda21(r2)
/* 802A2590 0029F4D0  EC 03 00 32 */	fmuls f0, f3, f0
/* 802A2594 0029F4D4  FC 00 00 1E */	fctiwz f0, f0
/* 802A2598 0029F4D8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802A259C 0029F4DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802A25A0 0029F4E0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A25A4 0029F4E4  7C 04 04 2E */	lfsx f0, r4, r0
/* 802A25A8 0029F4E8  FC 00 00 50 */	fneg f0, f0
/* 802A25AC 0029F4EC  48 00 00 1C */	b .L_802A25C8
.L_802A25B0:
/* 802A25B0 0029F4F0  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802A25B4 0029F4F4  FC 00 00 1E */	fctiwz f0, f0
/* 802A25B8 0029F4F8  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802A25BC 0029F4FC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802A25C0 0029F500  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A25C4 0029F504  7C 04 04 2E */	lfsx f0, r4, r0
.L_802A25C8:
/* 802A25C8 0029F508  EC 1C F8 3A */	fmadds f0, f28, f0, f31
/* 802A25CC 0029F50C  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802A25D0 0029F510  D3 DF 02 DC */	stfs f30, 0x2dc(r31)
/* 802A25D4 0029F514  D0 3F 02 E0 */	stfs f1, 0x2e0(r31)
/* 802A25D8 0029F518  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 802A25DC 0029F51C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 802A25E0 0029F520  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 802A25E4 0029F524  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 802A25E8 0029F528  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 802A25EC 0029F52C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 802A25F0 0029F530  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 802A25F4 0029F534  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 802A25F8 0029F538  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 802A25FC 0029F53C  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 802A2600 0029F540  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802A2604 0029F544  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802A2608 0029F548  7C 08 03 A6 */	mtlr r0
/* 802A260C 0029F54C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802A2610 0029F550  4E 80 00 20 */	blr 
.endfn setRandTarget__Q34Game12Hanachirashi3ObjFv

.fn resetShadowOffset__Q34Game12Hanachirashi3ObjFv, global
/* 802A2614 0029F554  C0 02 DA B0 */	lfs f0, lbl_8051BE10@sda21(r2)
/* 802A2618 0029F558  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802A261C 0029F55C  4E 80 00 20 */	blr 
.endfn resetShadowOffset__Q34Game12Hanachirashi3ObjFv

.fn setShadowOffsetMax__Q34Game12Hanachirashi3ObjFv, global
/* 802A2620 0029F560  C0 02 DA B4 */	lfs f0, lbl_8051BE14@sda21(r2)
/* 802A2624 0029F564  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802A2628 0029F568  4E 80 00 20 */	blr 
.endfn setShadowOffsetMax__Q34Game12Hanachirashi3ObjFv

.fn addShadowOffset__Q34Game12Hanachirashi3ObjFv, global
/* 802A262C 0029F56C  C0 43 02 D0 */	lfs f2, 0x2d0(r3)
/* 802A2630 0029F570  C0 22 DA 7C */	lfs f1, lbl_8051BDDC@sda21(r2)
/* 802A2634 0029F574  C0 02 DA B4 */	lfs f0, lbl_8051BE14@sda21(r2)
/* 802A2638 0029F578  EC 22 08 2A */	fadds f1, f2, f1
/* 802A263C 0029F57C  D0 23 02 D0 */	stfs f1, 0x2d0(r3)
/* 802A2640 0029F580  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 802A2644 0029F584  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A2648 0029F588  4C 81 00 20 */	blelr 
/* 802A264C 0029F58C  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802A2650 0029F590  4E 80 00 20 */	blr 
.endfn addShadowOffset__Q34Game12Hanachirashi3ObjFv

.fn subShadowOffset__Q34Game12Hanachirashi3ObjFv, global
/* 802A2654 0029F594  C0 43 02 D0 */	lfs f2, 0x2d0(r3)
/* 802A2658 0029F598  C0 22 DA 7C */	lfs f1, lbl_8051BDDC@sda21(r2)
/* 802A265C 0029F59C  C0 02 DA B0 */	lfs f0, lbl_8051BE10@sda21(r2)
/* 802A2660 0029F5A0  EC 22 08 28 */	fsubs f1, f2, f1
/* 802A2664 0029F5A4  D0 23 02 D0 */	stfs f1, 0x2d0(r3)
/* 802A2668 0029F5A8  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 802A266C 0029F5AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A2670 0029F5B0  4C 80 00 20 */	bgelr 
/* 802A2674 0029F5B4  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802A2678 0029F5B8  4E 80 00 20 */	blr 
.endfn subShadowOffset__Q34Game12Hanachirashi3ObjFv

.fn resetShadowRadius__Q34Game12Hanachirashi3ObjFv, global
/* 802A267C 0029F5BC  C0 02 DA B8 */	lfs f0, lbl_8051BE18@sda21(r2)
/* 802A2680 0029F5C0  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802A2684 0029F5C4  4E 80 00 20 */	blr 
.endfn resetShadowRadius__Q34Game12Hanachirashi3ObjFv

.fn subShadowRadius__Q34Game12Hanachirashi3ObjFv, global
/* 802A2688 0029F5C8  C0 03 02 D4 */	lfs f0, 0x2d4(r3)
/* 802A268C 0029F5CC  C0 22 DA 7C */	lfs f1, lbl_8051BDDC@sda21(r2)
/* 802A2690 0029F5D0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802A2694 0029F5D4  4C 81 00 20 */	blelr 
/* 802A2698 0029F5D8  EC 00 08 28 */	fsubs f0, f0, f1
/* 802A269C 0029F5DC  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802A26A0 0029F5E0  C0 03 02 D4 */	lfs f0, 0x2d4(r3)
/* 802A26A4 0029F5E4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802A26A8 0029F5E8  4C 80 00 20 */	bgelr 
/* 802A26AC 0029F5EC  D0 23 02 D4 */	stfs f1, 0x2d4(r3)
/* 802A26B0 0029F5F0  4E 80 00 20 */	blr 
.endfn subShadowRadius__Q34Game12Hanachirashi3ObjFv

.fn updateFallTimer__Q34Game12Hanachirashi3ObjFv, global
/* 802A26B4 0029F5F4  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802A26B8 0029F5F8  2C 00 00 00 */	cmpwi r0, 0
/* 802A26BC 0029F5FC  41 82 00 1C */	beq .L_802A26D8
/* 802A26C0 0029F600  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802A26C4 0029F604  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 802A26C8 0029F608  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802A26CC 0029F60C  EC 01 00 2A */	fadds f0, f1, f0
/* 802A26D0 0029F610  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802A26D4 0029F614  4E 80 00 20 */	blr 
.L_802A26D8:
/* 802A26D8 0029F618  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A26DC 0029F61C  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802A26E0 0029F620  4E 80 00 20 */	blr 
.endfn updateFallTimer__Q34Game12Hanachirashi3ObjFv

.fn getFlyingNextState__Q34Game12Hanachirashi3ObjFv, global
/* 802A26E4 0029F624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A26E8 0029F628  7C 08 02 A6 */	mflr r0
/* 802A26EC 0029F62C  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A26F0 0029F630  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A26F4 0029F634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A26F8 0029F638  7C 7F 1B 78 */	mr r31, r3
/* 802A26FC 0029F63C  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802A2700 0029F640  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A2704 0029F644  4C 40 13 82 */	cror 2, 0, 2
/* 802A2708 0029F648  40 82 00 0C */	bne .L_802A2714
/* 802A270C 0029F64C  38 60 00 00 */	li r3, 0
/* 802A2710 0029F650  48 00 00 64 */	b .L_802A2774
.L_802A2714:
/* 802A2714 0029F654  38 80 00 03 */	li r4, 3
/* 802A2718 0029F658  4B E7 2A 9D */	bl getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
/* 802A271C 0029F65C  2C 03 00 00 */	cmpwi r3, 0
/* 802A2720 0029F660  40 81 00 0C */	ble .L_802A272C
/* 802A2724 0029F664  38 60 00 06 */	li r3, 6
/* 802A2728 0029F668  48 00 00 4C */	b .L_802A2774
.L_802A272C:
/* 802A272C 0029F66C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802A2730 0029F670  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802A2734 0029F674  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 802A2738 0029F678  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A273C 0029F67C  41 81 00 14 */	bgt .L_802A2750
/* 802A2740 0029F680  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802A2744 0029F684  80 04 08 E4 */	lwz r0, 0x8e4(r4)
/* 802A2748 0029F688  7C 03 00 00 */	cmpw r3, r0
/* 802A274C 0029F68C  41 80 00 24 */	blt .L_802A2770
.L_802A2750:
/* 802A2750 0029F690  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802A2754 0029F694  80 04 08 E4 */	lwz r0, 0x8e4(r4)
/* 802A2758 0029F698  7C 03 00 00 */	cmpw r3, r0
/* 802A275C 0029F69C  40 80 00 0C */	bge .L_802A2768
/* 802A2760 0029F6A0  38 60 00 0A */	li r3, 0xa
/* 802A2764 0029F6A4  48 00 00 10 */	b .L_802A2774
.L_802A2768:
/* 802A2768 0029F6A8  38 60 00 06 */	li r3, 6
/* 802A276C 0029F6AC  48 00 00 08 */	b .L_802A2774
.L_802A2770:
/* 802A2770 0029F6B0  38 60 FF FF */	li r3, -1
.L_802A2774:
/* 802A2774 0029F6B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A2778 0029F6B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A277C 0029F6BC  7C 08 03 A6 */	mtlr r0
/* 802A2780 0029F6C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2784 0029F6C4  4E 80 00 20 */	blr 
.endfn getFlyingNextState__Q34Game12Hanachirashi3ObjFv

.fn addPitchRatio__Q34Game12Hanachirashi3ObjFv, global
/* 802A2788 0029F6C8  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A278C 0029F6CC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802A2790 0029F6D0  C0 65 09 0C */	lfs f3, 0x90c(r5)
/* 802A2794 0029F6D4  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802A2798 0029F6D8  C0 23 03 14 */	lfs f1, 0x314(r3)
/* 802A279C 0029F6DC  C0 02 DA BC */	lfs f0, lbl_8051BE1C@sda21(r2)
/* 802A27A0 0029F6E0  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802A27A4 0029F6E4  D0 23 03 14 */	stfs f1, 0x314(r3)
/* 802A27A8 0029F6E8  C0 23 03 14 */	lfs f1, 0x314(r3)
/* 802A27AC 0029F6EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A27B0 0029F6F0  4C 81 00 20 */	blelr 
/* 802A27B4 0029F6F4  EC 01 00 28 */	fsubs f0, f1, f0
/* 802A27B8 0029F6F8  D0 03 03 14 */	stfs f0, 0x314(r3)
/* 802A27BC 0029F6FC  4E 80 00 20 */	blr 
.endfn addPitchRatio__Q34Game12Hanachirashi3ObjFv

.fn getSearchedPikmin__Q34Game12Hanachirashi3ObjFv, global
/* 802A27C0 0029F700  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 802A27C4 0029F704  7C 08 02 A6 */	mflr r0
/* 802A27C8 0029F708  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 802A27CC 0029F70C  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 802A27D0 0029F710  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 802A27D4 0029F714  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 802A27D8 0029F718  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 802A27DC 0029F71C  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 802A27E0 0029F720  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 802A27E4 0029F724  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 802A27E8 0029F728  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 802A27EC 0029F72C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802A27F0 0029F730  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802A27F4 0029F734  7C 7F 1B 78 */	mr r31, r3
/* 802A27F8 0029F738  C3 E2 DA 9C */	lfs f31, lbl_8051BDFC@sda21(r2)
/* 802A27FC 0029F73C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802A2800 0029F740  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802A2804 0029F744  C0 03 03 D4 */	lfs f0, 0x3d4(r3)
/* 802A2808 0029F748  2C 00 00 00 */	cmpwi r0, 0
/* 802A280C 0029F74C  EF C0 00 32 */	fmuls f30, f0, f0
/* 802A2810 0029F750  40 82 00 14 */	bne .L_802A2824
/* 802A2814 0029F754  C0 22 DA C0 */	lfs f1, lbl_8051BE20@sda21(r2)
/* 802A2818 0029F758  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 802A281C 0029F75C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A2820 0029F760  EF FF 00 32 */	fmuls f31, f31, f0
.L_802A2824:
/* 802A2824 0029F764  38 00 00 00 */	li r0, 0
/* 802A2828 0029F768  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802A282C 0029F76C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802A2830 0029F770  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802A2834 0029F774  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802A2838 0029F778  28 00 00 00 */	cmplwi r0, 0
/* 802A283C 0029F77C  90 81 00 50 */	stw r4, 0x50(r1)
/* 802A2840 0029F780  90 01 00 54 */	stw r0, 0x54(r1)
/* 802A2844 0029F784  90 61 00 58 */	stw r3, 0x58(r1)
/* 802A2848 0029F788  40 82 00 1C */	bne .L_802A2864
/* 802A284C 0029F78C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2850 0029F790  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A2854 0029F794  7D 89 03 A6 */	mtctr r12
/* 802A2858 0029F798  4E 80 04 21 */	bctrl 
/* 802A285C 0029F79C  90 61 00 54 */	stw r3, 0x54(r1)
/* 802A2860 0029F7A0  48 00 02 D8 */	b .L_802A2B38
.L_802A2864:
/* 802A2864 0029F7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2868 0029F7A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A286C 0029F7AC  7D 89 03 A6 */	mtctr r12
/* 802A2870 0029F7B0  4E 80 04 21 */	bctrl 
/* 802A2874 0029F7B4  90 61 00 54 */	stw r3, 0x54(r1)
/* 802A2878 0029F7B8  48 00 00 58 */	b .L_802A28D0
.L_802A287C:
/* 802A287C 0029F7BC  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A2880 0029F7C0  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A2884 0029F7C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2888 0029F7C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A288C 0029F7CC  7D 89 03 A6 */	mtctr r12
/* 802A2890 0029F7D0  4E 80 04 21 */	bctrl 
/* 802A2894 0029F7D4  7C 64 1B 78 */	mr r4, r3
/* 802A2898 0029F7D8  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 802A289C 0029F7DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A28A0 0029F7E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A28A4 0029F7E4  7D 89 03 A6 */	mtctr r12
/* 802A28A8 0029F7E8  4E 80 04 21 */	bctrl 
/* 802A28AC 0029F7EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A28B0 0029F7F0  40 82 02 88 */	bne .L_802A2B38
/* 802A28B4 0029F7F4  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A28B8 0029F7F8  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A28BC 0029F7FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A28C0 0029F800  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A28C4 0029F804  7D 89 03 A6 */	mtctr r12
/* 802A28C8 0029F808  4E 80 04 21 */	bctrl 
/* 802A28CC 0029F80C  90 61 00 54 */	stw r3, 0x54(r1)
.L_802A28D0:
/* 802A28D0 0029F810  81 81 00 50 */	lwz r12, 0x50(r1)
/* 802A28D4 0029F814  38 61 00 50 */	addi r3, r1, 0x50
/* 802A28D8 0029F818  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A28DC 0029F81C  7D 89 03 A6 */	mtctr r12
/* 802A28E0 0029F820  4E 80 04 21 */	bctrl 
/* 802A28E4 0029F824  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A28E8 0029F828  41 82 FF 94 */	beq .L_802A287C
/* 802A28EC 0029F82C  48 00 02 4C */	b .L_802A2B38
.L_802A28F0:
/* 802A28F0 0029F830  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A28F4 0029F834  81 83 00 00 */	lwz r12, 0(r3)
/* 802A28F8 0029F838  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A28FC 0029F83C  7D 89 03 A6 */	mtctr r12
/* 802A2900 0029F840  4E 80 04 21 */	bctrl 
/* 802A2904 0029F844  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2908 0029F848  7C 7E 1B 78 */	mr r30, r3
/* 802A290C 0029F84C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A2910 0029F850  7D 89 03 A6 */	mtctr r12
/* 802A2914 0029F854  4E 80 04 21 */	bctrl 
/* 802A2918 0029F858  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A291C 0029F85C  41 82 01 60 */	beq .L_802A2A7C
/* 802A2920 0029F860  7F C3 F3 78 */	mr r3, r30
/* 802A2924 0029F864  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2928 0029F868  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802A292C 0029F86C  7D 89 03 A6 */	mtctr r12
/* 802A2930 0029F870  4E 80 04 21 */	bctrl 
/* 802A2934 0029F874  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2938 0029F878  41 82 01 44 */	beq .L_802A2A7C
/* 802A293C 0029F87C  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 802A2940 0029F880  28 00 00 00 */	cmplwi r0, 0
/* 802A2944 0029F884  41 82 01 38 */	beq .L_802A2A7C
/* 802A2948 0029F888  7F C3 F3 78 */	mr r3, r30
/* 802A294C 0029F88C  4B EF CC 3D */	bl isStickToMouth__Q24Game8CreatureFv
/* 802A2950 0029F890  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2954 0029F894  40 82 01 28 */	bne .L_802A2A7C
/* 802A2958 0029F898  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 802A295C 0029F89C  7C 00 F8 40 */	cmplw r0, r31
/* 802A2960 0029F8A0  41 82 01 1C */	beq .L_802A2A7C
/* 802A2964 0029F8A4  7F C4 F3 78 */	mr r4, r30
/* 802A2968 0029F8A8  38 61 00 20 */	addi r3, r1, 0x20
/* 802A296C 0029F8AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2970 0029F8B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2974 0029F8B4  7D 89 03 A6 */	mtctr r12
/* 802A2978 0029F8B8  4E 80 04 21 */	bctrl 
/* 802A297C 0029F8BC  7F E4 FB 78 */	mr r4, r31
/* 802A2980 0029F8C0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802A2984 0029F8C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2988 0029F8C8  38 61 00 2C */	addi r3, r1, 0x2c
/* 802A298C 0029F8CC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802A2990 0029F8D0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802A2994 0029F8D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2998 0029F8D8  D0 41 00 08 */	stfs f2, 8(r1)
/* 802A299C 0029F8DC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802A29A0 0029F8E0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802A29A4 0029F8E4  7D 89 03 A6 */	mtctr r12
/* 802A29A8 0029F8E8  4E 80 04 21 */	bctrl 
/* 802A29AC 0029F8EC  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802A29B0 0029F8F0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802A29B4 0029F8F4  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802A29B8 0029F8F8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802A29BC 0029F8FC  C0 21 00 08 */	lfs f1, 8(r1)
/* 802A29C0 0029F900  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A29C4 0029F904  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802A29C8 0029F908  EC 21 28 28 */	fsubs f1, f1, f5
/* 802A29CC 0029F90C  EC 40 18 28 */	fsubs f2, f0, f3
/* 802A29D0 0029F910  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802A29D4 0029F914  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802A29D8 0029F918  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802A29DC 0029F91C  4B D9 27 2D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802A29E0 0029F920  48 16 F1 F1 */	bl roundAng__Ff
/* 802A29E4 0029F924  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A29E8 0029F928  FF A0 08 90 */	fmr f29, f1
/* 802A29EC 0029F92C  7F E3 FB 78 */	mr r3, r31
/* 802A29F0 0029F930  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A29F4 0029F934  7D 89 03 A6 */	mtctr r12
/* 802A29F8 0029F938  4E 80 04 21 */	bctrl 
/* 802A29FC 0029F93C  FC 40 08 90 */	fmr f2, f1
/* 802A2A00 0029F940  FC 20 E8 90 */	fmr f1, f29
/* 802A2A04 0029F944  48 16 F1 F9 */	bl angDist__Fff
/* 802A2A08 0029F948  FC 00 0A 10 */	fabs f0, f1
/* 802A2A0C 0029F94C  FC 00 00 18 */	frsp f0, f0
/* 802A2A10 0029F950  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802A2A14 0029F954  4C 40 13 82 */	cror 2, 0, 2
/* 802A2A18 0029F958  40 82 00 64 */	bne .L_802A2A7C
/* 802A2A1C 0029F95C  7F E4 FB 78 */	mr r4, r31
/* 802A2A20 0029F960  38 61 00 44 */	addi r3, r1, 0x44
/* 802A2A24 0029F964  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2A28 0029F968  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2A2C 0029F96C  7D 89 03 A6 */	mtctr r12
/* 802A2A30 0029F970  4E 80 04 21 */	bctrl 
/* 802A2A34 0029F974  7F C4 F3 78 */	mr r4, r30
/* 802A2A38 0029F978  38 61 00 38 */	addi r3, r1, 0x38
/* 802A2A3C 0029F97C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2A40 0029F980  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 802A2A44 0029F984  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2A48 0029F988  C3 81 00 4C */	lfs f28, 0x4c(r1)
/* 802A2A4C 0029F98C  7D 89 03 A6 */	mtctr r12
/* 802A2A50 0029F990  4E 80 04 21 */	bctrl 
/* 802A2A54 0029F994  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802A2A58 0029F998  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802A2A5C 0029F99C  EC 00 E0 28 */	fsubs f0, f0, f28
/* 802A2A60 0029F9A0  EC 21 E8 28 */	fsubs f1, f1, f29
/* 802A2A64 0029F9A4  EC 00 00 32 */	fmuls f0, f0, f0
/* 802A2A68 0029F9A8  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802A2A6C 0029F9AC  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802A2A70 0029F9B0  40 80 00 0C */	bge .L_802A2A7C
/* 802A2A74 0029F9B4  7F C3 F3 78 */	mr r3, r30
/* 802A2A78 0029F9B8  48 00 00 E4 */	b .L_802A2B5C
.L_802A2A7C:
/* 802A2A7C 0029F9BC  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802A2A80 0029F9C0  28 00 00 00 */	cmplwi r0, 0
/* 802A2A84 0029F9C4  40 82 00 24 */	bne .L_802A2AA8
/* 802A2A88 0029F9C8  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A2A8C 0029F9CC  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A2A90 0029F9D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2A94 0029F9D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A2A98 0029F9D8  7D 89 03 A6 */	mtctr r12
/* 802A2A9C 0029F9DC  4E 80 04 21 */	bctrl 
/* 802A2AA0 0029F9E0  90 61 00 54 */	stw r3, 0x54(r1)
/* 802A2AA4 0029F9E4  48 00 00 94 */	b .L_802A2B38
.L_802A2AA8:
/* 802A2AA8 0029F9E8  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A2AAC 0029F9EC  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A2AB0 0029F9F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2AB4 0029F9F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A2AB8 0029F9F8  7D 89 03 A6 */	mtctr r12
/* 802A2ABC 0029F9FC  4E 80 04 21 */	bctrl 
/* 802A2AC0 0029FA00  90 61 00 54 */	stw r3, 0x54(r1)
/* 802A2AC4 0029FA04  48 00 00 58 */	b .L_802A2B1C
.L_802A2AC8:
/* 802A2AC8 0029FA08  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A2ACC 0029FA0C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A2AD0 0029FA10  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2AD4 0029FA14  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A2AD8 0029FA18  7D 89 03 A6 */	mtctr r12
/* 802A2ADC 0029FA1C  4E 80 04 21 */	bctrl 
/* 802A2AE0 0029FA20  7C 64 1B 78 */	mr r4, r3
/* 802A2AE4 0029FA24  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 802A2AE8 0029FA28  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2AEC 0029FA2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2AF0 0029FA30  7D 89 03 A6 */	mtctr r12
/* 802A2AF4 0029FA34  4E 80 04 21 */	bctrl 
/* 802A2AF8 0029FA38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2AFC 0029FA3C  40 82 00 3C */	bne .L_802A2B38
/* 802A2B00 0029FA40  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A2B04 0029FA44  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A2B08 0029FA48  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2B0C 0029FA4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A2B10 0029FA50  7D 89 03 A6 */	mtctr r12
/* 802A2B14 0029FA54  4E 80 04 21 */	bctrl 
/* 802A2B18 0029FA58  90 61 00 54 */	stw r3, 0x54(r1)
.L_802A2B1C:
/* 802A2B1C 0029FA5C  81 81 00 50 */	lwz r12, 0x50(r1)
/* 802A2B20 0029FA60  38 61 00 50 */	addi r3, r1, 0x50
/* 802A2B24 0029FA64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A2B28 0029FA68  7D 89 03 A6 */	mtctr r12
/* 802A2B2C 0029FA6C  4E 80 04 21 */	bctrl 
/* 802A2B30 0029FA70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2B34 0029FA74  41 82 FF 94 */	beq .L_802A2AC8
.L_802A2B38:
/* 802A2B38 0029FA78  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802A2B3C 0029FA7C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2B40 0029FA80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A2B44 0029FA84  7D 89 03 A6 */	mtctr r12
/* 802A2B48 0029FA88  4E 80 04 21 */	bctrl 
/* 802A2B4C 0029FA8C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802A2B50 0029FA90  7C 04 18 40 */	cmplw r4, r3
/* 802A2B54 0029FA94  40 82 FD 9C */	bne .L_802A28F0
/* 802A2B58 0029FA98  38 60 00 00 */	li r3, 0
.L_802A2B5C:
/* 802A2B5C 0029FA9C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 802A2B60 0029FAA0  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 802A2B64 0029FAA4  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 802A2B68 0029FAA8  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 802A2B6C 0029FAAC  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 802A2B70 0029FAB0  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 802A2B74 0029FAB4  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 802A2B78 0029FAB8  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 802A2B7C 0029FABC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802A2B80 0029FAC0  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802A2B84 0029FAC4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802A2B88 0029FAC8  7C 08 03 A6 */	mtlr r0
/* 802A2B8C 0029FACC  38 21 00 B0 */	addi r1, r1, 0xb0
/* 802A2B90 0029FAD0  4E 80 00 20 */	blr 
.endfn getSearchedPikmin__Q34Game12Hanachirashi3ObjFv

.fn isTargetLost__Q34Game12Hanachirashi3ObjFv, global
/* 802A2B94 0029FAD4  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 802A2B98 0029FAD8  7C 08 02 A6 */	mflr r0
/* 802A2B9C 0029FADC  90 01 01 04 */	stw r0, 0x104(r1)
/* 802A2BA0 0029FAE0  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 802A2BA4 0029FAE4  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 802A2BA8 0029FAE8  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 802A2BAC 0029FAEC  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 802A2BB0 0029FAF0  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 802A2BB4 0029FAF4  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 802A2BB8 0029FAF8  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 802A2BBC 0029FAFC  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 802A2BC0 0029FB00  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 802A2BC4 0029FB04  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 802A2BC8 0029FB08  DB 41 00 A0 */	stfd f26, 0xa0(r1)
/* 802A2BCC 0029FB0C  F3 41 00 A8 */	psq_st f26, 168(r1), 0, qr0
/* 802A2BD0 0029FB10  DB 21 00 90 */	stfd f25, 0x90(r1)
/* 802A2BD4 0029FB14  F3 21 00 98 */	psq_st f25, 152(r1), 0, qr0
/* 802A2BD8 0029FB18  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 802A2BDC 0029FB1C  93 C1 00 88 */	stw r30, 0x88(r1)
/* 802A2BE0 0029FB20  7C 7E 1B 78 */	mr r30, r3
/* 802A2BE4 0029FB24  83 E3 02 30 */	lwz r31, 0x230(r3)
/* 802A2BE8 0029FB28  28 1F 00 00 */	cmplwi r31, 0
/* 802A2BEC 0029FB2C  41 82 02 44 */	beq .L_802A2E30
/* 802A2BF0 0029FB30  7F E3 FB 78 */	mr r3, r31
/* 802A2BF4 0029FB34  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2BF8 0029FB38  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A2BFC 0029FB3C  7D 89 03 A6 */	mtctr r12
/* 802A2C00 0029FB40  4E 80 04 21 */	bctrl 
/* 802A2C04 0029FB44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2C08 0029FB48  41 82 02 28 */	beq .L_802A2E30
/* 802A2C0C 0029FB4C  7F E3 FB 78 */	mr r3, r31
/* 802A2C10 0029FB50  4B EF C9 79 */	bl isStickToMouth__Q24Game8CreatureFv
/* 802A2C14 0029FB54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A2C18 0029FB58  40 82 02 18 */	bne .L_802A2E30
/* 802A2C1C 0029FB5C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 802A2C20 0029FB60  7C 00 F0 40 */	cmplw r0, r30
/* 802A2C24 0029FB64  41 82 02 0C */	beq .L_802A2E30
/* 802A2C28 0029FB68  80 1E 01 F4 */	lwz r0, 0x1f4(r30)
/* 802A2C2C 0029FB6C  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802A2C30 0029FB70  2C 00 00 00 */	cmpwi r0, 0
/* 802A2C34 0029FB74  C3 A5 04 24 */	lfs f29, 0x424(r5)
/* 802A2C38 0029FB78  41 82 00 08 */	beq .L_802A2C40
/* 802A2C3C 0029FB7C  C3 A2 DA C4 */	lfs f29, lbl_8051BE24@sda21(r2)
.L_802A2C40:
/* 802A2C40 0029FB80  7F E4 FB 78 */	mr r4, r31
/* 802A2C44 0029FB84  38 61 00 20 */	addi r3, r1, 0x20
/* 802A2C48 0029FB88  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2C4C 0029FB8C  C3 C5 03 D4 */	lfs f30, 0x3d4(r5)
/* 802A2C50 0029FB90  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2C54 0029FB94  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802A2C58 0029FB98  7D 89 03 A6 */	mtctr r12
/* 802A2C5C 0029FB9C  4E 80 04 21 */	bctrl 
/* 802A2C60 0029FBA0  7F C4 F3 78 */	mr r4, r30
/* 802A2C64 0029FBA4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802A2C68 0029FBA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2C6C 0029FBAC  38 61 00 2C */	addi r3, r1, 0x2c
/* 802A2C70 0029FBB0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802A2C74 0029FBB4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802A2C78 0029FBB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2C7C 0029FBBC  D0 41 00 08 */	stfs f2, 8(r1)
/* 802A2C80 0029FBC0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802A2C84 0029FBC4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802A2C88 0029FBC8  7D 89 03 A6 */	mtctr r12
/* 802A2C8C 0029FBCC  4E 80 04 21 */	bctrl 
/* 802A2C90 0029FBD0  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802A2C94 0029FBD4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802A2C98 0029FBD8  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802A2C9C 0029FBDC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802A2CA0 0029FBE0  C0 21 00 08 */	lfs f1, 8(r1)
/* 802A2CA4 0029FBE4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A2CA8 0029FBE8  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802A2CAC 0029FBEC  EC 21 28 28 */	fsubs f1, f1, f5
/* 802A2CB0 0029FBF0  EC 40 18 28 */	fsubs f2, f0, f3
/* 802A2CB4 0029FBF4  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802A2CB8 0029FBF8  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802A2CBC 0029FBFC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802A2CC0 0029FC00  4B D9 24 49 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802A2CC4 0029FC04  48 16 EF 0D */	bl roundAng__Ff
/* 802A2CC8 0029FC08  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2CCC 0029FC0C  FF 20 08 90 */	fmr f25, f1
/* 802A2CD0 0029FC10  7F C3 F3 78 */	mr r3, r30
/* 802A2CD4 0029FC14  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A2CD8 0029FC18  7D 89 03 A6 */	mtctr r12
/* 802A2CDC 0029FC1C  4E 80 04 21 */	bctrl 
/* 802A2CE0 0029FC20  FC 40 08 90 */	fmr f2, f1
/* 802A2CE4 0029FC24  FC 20 C8 90 */	fmr f1, f25
/* 802A2CE8 0029FC28  48 16 EF 15 */	bl angDist__Fff
/* 802A2CEC 0029FC2C  7F C4 F3 78 */	mr r4, r30
/* 802A2CF0 0029FC30  FF 60 08 90 */	fmr f27, f1
/* 802A2CF4 0029FC34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2CF8 0029FC38  38 61 00 44 */	addi r3, r1, 0x44
/* 802A2CFC 0029FC3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2D00 0029FC40  7D 89 03 A6 */	mtctr r12
/* 802A2D04 0029FC44  4E 80 04 21 */	bctrl 
/* 802A2D08 0029FC48  7F E4 FB 78 */	mr r4, r31
/* 802A2D0C 0029FC4C  38 61 00 38 */	addi r3, r1, 0x38
/* 802A2D10 0029FC50  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2D14 0029FC54  C3 81 00 44 */	lfs f28, 0x44(r1)
/* 802A2D18 0029FC58  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2D1C 0029FC5C  7D 89 03 A6 */	mtctr r12
/* 802A2D20 0029FC60  4E 80 04 21 */	bctrl 
/* 802A2D24 0029FC64  7F C4 F3 78 */	mr r4, r30
/* 802A2D28 0029FC68  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802A2D2C 0029FC6C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2D30 0029FC70  38 61 00 5C */	addi r3, r1, 0x5c
/* 802A2D34 0029FC74  EF 20 E0 28 */	fsubs f25, f0, f28
/* 802A2D38 0029FC78  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2D3C 0029FC7C  7D 89 03 A6 */	mtctr r12
/* 802A2D40 0029FC80  4E 80 04 21 */	bctrl 
/* 802A2D44 0029FC84  7F E4 FB 78 */	mr r4, r31
/* 802A2D48 0029FC88  38 61 00 50 */	addi r3, r1, 0x50
/* 802A2D4C 0029FC8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2D50 0029FC90  C3 81 00 60 */	lfs f28, 0x60(r1)
/* 802A2D54 0029FC94  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2D58 0029FC98  7D 89 03 A6 */	mtctr r12
/* 802A2D5C 0029FC9C  4E 80 04 21 */	bctrl 
/* 802A2D60 0029FCA0  7F C4 F3 78 */	mr r4, r30
/* 802A2D64 0029FCA4  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 802A2D68 0029FCA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A2D6C 0029FCAC  38 61 00 74 */	addi r3, r1, 0x74
/* 802A2D70 0029FCB0  EF 40 E0 28 */	fsubs f26, f0, f28
/* 802A2D74 0029FCB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2D78 0029FCB8  7D 89 03 A6 */	mtctr r12
/* 802A2D7C 0029FCBC  4E 80 04 21 */	bctrl 
/* 802A2D80 0029FCC0  7F E4 FB 78 */	mr r4, r31
/* 802A2D84 0029FCC4  38 61 00 68 */	addi r3, r1, 0x68
/* 802A2D88 0029FCC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2D8C 0029FCCC  C3 81 00 7C */	lfs f28, 0x7c(r1)
/* 802A2D90 0029FCD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2D94 0029FCD4  7D 89 03 A6 */	mtctr r12
/* 802A2D98 0029FCD8  4E 80 04 21 */	bctrl 
/* 802A2D9C 0029FCDC  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802A2DA0 0029FCE0  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 802A2DA4 0029FCE4  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 802A2DA8 0029FCE8  38 60 00 01 */	li r3, 1
/* 802A2DAC 0029FCEC  EC 00 E0 28 */	fsubs f0, f0, f28
/* 802A2DB0 0029FCF0  38 80 00 00 */	li r4, 0
/* 802A2DB4 0029FCF4  EC 00 00 32 */	fmuls f0, f0, f0
/* 802A2DB8 0029FCF8  EC 19 06 7A */	fmadds f0, f25, f25, f0
/* 802A2DBC 0029FCFC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802A2DC0 0029FD00  40 81 00 34 */	ble .L_802A2DF4
/* 802A2DC4 0029FD04  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802A2DC8 0029FD08  7C 80 23 78 */	mr r0, r4
/* 802A2DCC 0029FD0C  40 81 00 1C */	ble .L_802A2DE8
/* 802A2DD0 0029FD10  FC 20 D2 10 */	fabs f1, f26
/* 802A2DD4 0029FD14  C0 02 DA C8 */	lfs f0, lbl_8051BE28@sda21(r2)
/* 802A2DD8 0029FD18  FC 20 08 18 */	frsp f1, f1
/* 802A2DDC 0029FD1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A2DE0 0029FD20  40 80 00 08 */	bge .L_802A2DE8
/* 802A2DE4 0029FD24  7C 60 1B 78 */	mr r0, r3
.L_802A2DE8:
/* 802A2DE8 0029FD28  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802A2DEC 0029FD2C  41 82 00 08 */	beq .L_802A2DF4
/* 802A2DF0 0029FD30  38 80 00 01 */	li r4, 1
.L_802A2DF4:
/* 802A2DF4 0029FD34  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802A2DF8 0029FD38  40 82 00 3C */	bne .L_802A2E34
/* 802A2DFC 0029FD3C  C0 02 DA C0 */	lfs f0, lbl_8051BE20@sda21(r2)
/* 802A2E00 0029FD40  FC 40 DA 10 */	fabs f2, f27
/* 802A2E04 0029FD44  C0 22 DA 9C */	lfs f1, lbl_8051BDFC@sda21(r2)
/* 802A2E08 0029FD48  EC 00 07 72 */	fmuls f0, f0, f29
/* 802A2E0C 0029FD4C  FC 40 10 18 */	frsp f2, f2
/* 802A2E10 0029FD50  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A2E14 0029FD54  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802A2E18 0029FD58  4C 40 13 82 */	cror 2, 0, 2
/* 802A2E1C 0029FD5C  7C 00 00 26 */	mfcr r0
/* 802A2E20 0029FD60  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 802A2E24 0029FD64  41 82 00 10 */	beq .L_802A2E34
/* 802A2E28 0029FD68  38 60 00 00 */	li r3, 0
/* 802A2E2C 0029FD6C  48 00 00 08 */	b .L_802A2E34
.L_802A2E30:
/* 802A2E30 0029FD70  38 60 00 01 */	li r3, 1
.L_802A2E34:
/* 802A2E34 0029FD74  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 802A2E38 0029FD78  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 802A2E3C 0029FD7C  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 802A2E40 0029FD80  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 802A2E44 0029FD84  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 802A2E48 0029FD88  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 802A2E4C 0029FD8C  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 802A2E50 0029FD90  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 802A2E54 0029FD94  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 802A2E58 0029FD98  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 802A2E5C 0029FD9C  E3 41 00 A8 */	psq_l f26, 168(r1), 0, qr0
/* 802A2E60 0029FDA0  CB 41 00 A0 */	lfd f26, 0xa0(r1)
/* 802A2E64 0029FDA4  E3 21 00 98 */	psq_l f25, 152(r1), 0, qr0
/* 802A2E68 0029FDA8  CB 21 00 90 */	lfd f25, 0x90(r1)
/* 802A2E6C 0029FDAC  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802A2E70 0029FDB0  80 01 01 04 */	lwz r0, 0x104(r1)
/* 802A2E74 0029FDB4  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802A2E78 0029FDB8  7C 08 03 A6 */	mtlr r0
/* 802A2E7C 0029FDBC  38 21 01 00 */	addi r1, r1, 0x100
/* 802A2E80 0029FDC0  4E 80 00 20 */	blr 
.endfn isTargetLost__Q34Game12Hanachirashi3ObjFv

.fn isAttackable__Q34Game12Hanachirashi3ObjFv, global
/* 802A2E84 0029FDC4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802A2E88 0029FDC8  7C 08 02 A6 */	mflr r0
/* 802A2E8C 0029FDCC  90 01 00 84 */	stw r0, 0x84(r1)
/* 802A2E90 0029FDD0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802A2E94 0029FDD4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802A2E98 0029FDD8  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802A2E9C 0029FDDC  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802A2EA0 0029FDE0  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802A2EA4 0029FDE4  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802A2EA8 0029FDE8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802A2EAC 0029FDEC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802A2EB0 0029FDF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2EB4 0029FDF4  7C 7F 1B 78 */	mr r31, r3
/* 802A2EB8 0029FDF8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A2EBC 0029FDFC  7D 89 03 A6 */	mtctr r12
/* 802A2EC0 0029FE00  4E 80 04 21 */	bctrl 
/* 802A2EC4 0029FE04  FC 40 08 90 */	fmr f2, f1
/* 802A2EC8 0029FE08  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A2ECC 0029FE0C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A2ED0 0029FE10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802A2ED4 0029FE14  40 80 00 08 */	bge .L_802A2EDC
/* 802A2ED8 0029FE18  FC 40 10 50 */	fneg f2, f2
.L_802A2EDC:
/* 802A2EDC 0029FE1C  C0 62 DA 94 */	lfs f3, lbl_8051BDF4@sda21(r2)
/* 802A2EE0 0029FE20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A2EE4 0029FE24  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A2EE8 0029FE28  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802A2EEC 0029FE2C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802A2EF0 0029FE30  C0 85 05 64 */	lfs f4, 0x564(r5)
/* 802A2EF4 0029FE34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A2EF8 0029FE38  FC 00 10 1E */	fctiwz f0, f2
/* 802A2EFC 0029FE3C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802A2F00 0029FE40  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802A2F04 0029FE44  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A2F08 0029FE48  7C 64 02 14 */	add r3, r4, r0
/* 802A2F0C 0029FE4C  C0 03 00 04 */	lfs f0, 4(r3)
/* 802A2F10 0029FE50  EF E4 00 32 */	fmuls f31, f4, f0
/* 802A2F14 0029FE54  40 80 00 28 */	bge .L_802A2F3C
/* 802A2F18 0029FE58  C0 02 DA 90 */	lfs f0, lbl_8051BDF0@sda21(r2)
/* 802A2F1C 0029FE5C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A2F20 0029FE60  FC 00 00 1E */	fctiwz f0, f0
/* 802A2F24 0029FE64  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802A2F28 0029FE68  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802A2F2C 0029FE6C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A2F30 0029FE70  7C 04 04 2E */	lfsx f0, r4, r0
/* 802A2F34 0029FE74  FC 00 00 50 */	fneg f0, f0
/* 802A2F38 0029FE78  48 00 00 1C */	b .L_802A2F54
.L_802A2F3C:
/* 802A2F3C 0029FE7C  EC 01 00 F2 */	fmuls f0, f1, f3
/* 802A2F40 0029FE80  FC 00 00 1E */	fctiwz f0, f0
/* 802A2F44 0029FE84  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 802A2F48 0029FE88  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A2F4C 0029FE8C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A2F50 0029FE90  7C 04 04 2E */	lfsx f0, r4, r0
.L_802A2F54:
/* 802A2F54 0029FE94  7F E4 FB 78 */	mr r4, r31
/* 802A2F58 0029FE98  EF C4 00 32 */	fmuls f30, f4, f0
/* 802A2F5C 0029FE9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A2F60 0029FEA0  38 61 00 14 */	addi r3, r1, 0x14
/* 802A2F64 0029FEA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A2F68 0029FEA8  7D 89 03 A6 */	mtctr r12
/* 802A2F6C 0029FEAC  4E 80 04 21 */	bctrl 
/* 802A2F70 0029FEB0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802A2F74 0029FEB4  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802A2F78 0029FEB8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802A2F7C 0029FEBC  38 00 00 00 */	li r0, 0
/* 802A2F80 0029FEC0  C0 04 05 8C */	lfs f0, 0x58c(r4)
/* 802A2F84 0029FEC4  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802A2F88 0029FEC8  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 802A2F8C 0029FECC  28 00 00 00 */	cmplwi r0, 0
/* 802A2F90 0029FED0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802A2F94 0029FED4  EF DE 10 2A */	fadds f30, f30, f2
/* 802A2F98 0029FED8  EF FF 08 2A */	fadds f31, f31, f1
/* 802A2F9C 0029FEDC  90 81 00 20 */	stw r4, 0x20(r1)
/* 802A2FA0 0029FEE0  EF A0 00 32 */	fmuls f29, f0, f0
/* 802A2FA4 0029FEE4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802A2FA8 0029FEE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A2FAC 0029FEEC  90 61 00 28 */	stw r3, 0x28(r1)
/* 802A2FB0 0029FEF0  40 82 00 1C */	bne .L_802A2FCC
/* 802A2FB4 0029FEF4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2FB8 0029FEF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A2FBC 0029FEFC  7D 89 03 A6 */	mtctr r12
/* 802A2FC0 0029FF00  4E 80 04 21 */	bctrl 
/* 802A2FC4 0029FF04  90 61 00 24 */	stw r3, 0x24(r1)
/* 802A2FC8 0029FF08  48 00 01 F4 */	b .L_802A31BC
.L_802A2FCC:
/* 802A2FCC 0029FF0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2FD0 0029FF10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A2FD4 0029FF14  7D 89 03 A6 */	mtctr r12
/* 802A2FD8 0029FF18  4E 80 04 21 */	bctrl 
/* 802A2FDC 0029FF1C  90 61 00 24 */	stw r3, 0x24(r1)
/* 802A2FE0 0029FF20  48 00 00 58 */	b .L_802A3038
.L_802A2FE4:
/* 802A2FE4 0029FF24  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A2FE8 0029FF28  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A2FEC 0029FF2C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A2FF0 0029FF30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A2FF4 0029FF34  7D 89 03 A6 */	mtctr r12
/* 802A2FF8 0029FF38  4E 80 04 21 */	bctrl 
/* 802A2FFC 0029FF3C  7C 64 1B 78 */	mr r4, r3
/* 802A3000 0029FF40  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802A3004 0029FF44  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3008 0029FF48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A300C 0029FF4C  7D 89 03 A6 */	mtctr r12
/* 802A3010 0029FF50  4E 80 04 21 */	bctrl 
/* 802A3014 0029FF54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3018 0029FF58  40 82 01 A4 */	bne .L_802A31BC
/* 802A301C 0029FF5C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A3020 0029FF60  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A3024 0029FF64  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3028 0029FF68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A302C 0029FF6C  7D 89 03 A6 */	mtctr r12
/* 802A3030 0029FF70  4E 80 04 21 */	bctrl 
/* 802A3034 0029FF74  90 61 00 24 */	stw r3, 0x24(r1)
.L_802A3038:
/* 802A3038 0029FF78  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802A303C 0029FF7C  38 61 00 20 */	addi r3, r1, 0x20
/* 802A3040 0029FF80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A3044 0029FF84  7D 89 03 A6 */	mtctr r12
/* 802A3048 0029FF88  4E 80 04 21 */	bctrl 
/* 802A304C 0029FF8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3050 0029FF90  41 82 FF 94 */	beq .L_802A2FE4
/* 802A3054 0029FF94  48 00 01 68 */	b .L_802A31BC
.L_802A3058:
/* 802A3058 0029FF98  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A305C 0029FF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3060 0029FFA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A3064 0029FFA4  7D 89 03 A6 */	mtctr r12
/* 802A3068 0029FFA8  4E 80 04 21 */	bctrl 
/* 802A306C 0029FFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3070 0029FFB0  7C 7E 1B 78 */	mr r30, r3
/* 802A3074 0029FFB4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A3078 0029FFB8  7D 89 03 A6 */	mtctr r12
/* 802A307C 0029FFBC  4E 80 04 21 */	bctrl 
/* 802A3080 0029FFC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3084 0029FFC4  41 82 00 7C */	beq .L_802A3100
/* 802A3088 0029FFC8  7F C3 F3 78 */	mr r3, r30
/* 802A308C 0029FFCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A3090 0029FFD0  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802A3094 0029FFD4  7D 89 03 A6 */	mtctr r12
/* 802A3098 0029FFD8  4E 80 04 21 */	bctrl 
/* 802A309C 0029FFDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A30A0 0029FFE0  41 82 00 60 */	beq .L_802A3100
/* 802A30A4 0029FFE4  7F C3 F3 78 */	mr r3, r30
/* 802A30A8 0029FFE8  4B EF C4 E1 */	bl isStickToMouth__Q24Game8CreatureFv
/* 802A30AC 0029FFEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A30B0 0029FFF0  40 82 00 50 */	bne .L_802A3100
/* 802A30B4 0029FFF4  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 802A30B8 0029FFF8  7C 00 F8 40 */	cmplw r0, r31
/* 802A30BC 0029FFFC  41 82 00 44 */	beq .L_802A3100
/* 802A30C0 002A0000  7F C4 F3 78 */	mr r4, r30
/* 802A30C4 002A0004  38 61 00 08 */	addi r3, r1, 8
/* 802A30C8 002A0008  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A30CC 002A000C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A30D0 002A0010  7D 89 03 A6 */	mtctr r12
/* 802A30D4 002A0014  4E 80 04 21 */	bctrl 
/* 802A30D8 002A0018  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A30DC 002A001C  C0 21 00 08 */	lfs f1, 8(r1)
/* 802A30E0 002A0020  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802A30E4 002A0024  EC 21 F0 28 */	fsubs f1, f1, f30
/* 802A30E8 002A0028  EC 00 00 32 */	fmuls f0, f0, f0
/* 802A30EC 002A002C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802A30F0 002A0030  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802A30F4 002A0034  40 80 00 0C */	bge .L_802A3100
/* 802A30F8 002A0038  7F C3 F3 78 */	mr r3, r30
/* 802A30FC 002A003C  48 00 00 E4 */	b .L_802A31E0
.L_802A3100:
/* 802A3100 002A0040  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802A3104 002A0044  28 00 00 00 */	cmplwi r0, 0
/* 802A3108 002A0048  40 82 00 24 */	bne .L_802A312C
/* 802A310C 002A004C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A3110 002A0050  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A3114 002A0054  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3118 002A0058  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A311C 002A005C  7D 89 03 A6 */	mtctr r12
/* 802A3120 002A0060  4E 80 04 21 */	bctrl 
/* 802A3124 002A0064  90 61 00 24 */	stw r3, 0x24(r1)
/* 802A3128 002A0068  48 00 00 94 */	b .L_802A31BC
.L_802A312C:
/* 802A312C 002A006C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A3130 002A0070  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A3134 002A0074  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3138 002A0078  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A313C 002A007C  7D 89 03 A6 */	mtctr r12
/* 802A3140 002A0080  4E 80 04 21 */	bctrl 
/* 802A3144 002A0084  90 61 00 24 */	stw r3, 0x24(r1)
/* 802A3148 002A0088  48 00 00 58 */	b .L_802A31A0
.L_802A314C:
/* 802A314C 002A008C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A3150 002A0090  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A3154 002A0094  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3158 002A0098  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A315C 002A009C  7D 89 03 A6 */	mtctr r12
/* 802A3160 002A00A0  4E 80 04 21 */	bctrl 
/* 802A3164 002A00A4  7C 64 1B 78 */	mr r4, r3
/* 802A3168 002A00A8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802A316C 002A00AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3170 002A00B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A3174 002A00B4  7D 89 03 A6 */	mtctr r12
/* 802A3178 002A00B8  4E 80 04 21 */	bctrl 
/* 802A317C 002A00BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3180 002A00C0  40 82 00 3C */	bne .L_802A31BC
/* 802A3184 002A00C4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A3188 002A00C8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A318C 002A00CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3190 002A00D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3194 002A00D4  7D 89 03 A6 */	mtctr r12
/* 802A3198 002A00D8  4E 80 04 21 */	bctrl 
/* 802A319C 002A00DC  90 61 00 24 */	stw r3, 0x24(r1)
.L_802A31A0:
/* 802A31A0 002A00E0  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802A31A4 002A00E4  38 61 00 20 */	addi r3, r1, 0x20
/* 802A31A8 002A00E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A31AC 002A00EC  7D 89 03 A6 */	mtctr r12
/* 802A31B0 002A00F0  4E 80 04 21 */	bctrl 
/* 802A31B4 002A00F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A31B8 002A00F8  41 82 FF 94 */	beq .L_802A314C
.L_802A31BC:
/* 802A31BC 002A00FC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802A31C0 002A0100  81 83 00 00 */	lwz r12, 0(r3)
/* 802A31C4 002A0104  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A31C8 002A0108  7D 89 03 A6 */	mtctr r12
/* 802A31CC 002A010C  4E 80 04 21 */	bctrl 
/* 802A31D0 002A0110  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802A31D4 002A0114  7C 04 18 40 */	cmplw r4, r3
/* 802A31D8 002A0118  40 82 FE 80 */	bne .L_802A3058
/* 802A31DC 002A011C  38 60 00 00 */	li r3, 0
.L_802A31E0:
/* 802A31E0 002A0120  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802A31E4 002A0124  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802A31E8 002A0128  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802A31EC 002A012C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802A31F0 002A0130  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802A31F4 002A0134  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802A31F8 002A0138  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802A31FC 002A013C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802A3200 002A0140  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802A3204 002A0144  7C 08 03 A6 */	mtlr r0
/* 802A3208 002A0148  38 21 00 80 */	addi r1, r1, 0x80
/* 802A320C 002A014C  4E 80 00 20 */	blr 
.endfn isAttackable__Q34Game12Hanachirashi3ObjFv

.fn updateEmit__Q34Game12Hanachirashi3ObjFv, global
/* 802A3210 002A0150  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802A3214 002A0154  7C 08 02 A6 */	mflr r0
/* 802A3218 002A0158  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A321C 002A015C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802A3220 002A0160  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802A3224 002A0164  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802A3228 002A0168  7C 7F 1B 78 */	mr r31, r3
/* 802A322C 002A016C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802A3230 002A0170  28 03 00 00 */	cmplwi r3, 0
/* 802A3234 002A0174  41 82 00 1C */	beq .L_802A3250
/* 802A3238 002A0178  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802A323C 002A017C  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802A3240 002A0180  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 802A3244 002A0184  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 802A3248 002A0188  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 802A324C 002A018C  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
.L_802A3250:
/* 802A3250 002A0190  7F E3 FB 78 */	mr r3, r31
/* 802A3254 002A0194  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A3258 002A0198  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A325C 002A019C  7D 89 03 A6 */	mtctr r12
/* 802A3260 002A01A0  4E 80 04 21 */	bctrl 
/* 802A3264 002A01A4  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A3268 002A01A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A326C 002A01AC  40 80 00 08 */	bge .L_802A3274
/* 802A3270 002A01B0  FC 20 08 50 */	fneg f1, f1
.L_802A3274:
/* 802A3274 002A01B4  C0 02 DA 94 */	lfs f0, lbl_8051BDF4@sda21(r2)
/* 802A3278 002A01B8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 802A327C 002A01BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A3280 002A01C0  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 802A3284 002A01C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A3288 002A01C8  7F E3 FB 78 */	mr r3, r31
/* 802A328C 002A01CC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A3290 002A01D0  FC 00 00 1E */	fctiwz f0, f0
/* 802A3294 002A01D4  D8 01 00 08 */	stfd f0, 8(r1)
/* 802A3298 002A01D8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802A329C 002A01DC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A32A0 002A01E0  7C 84 02 14 */	add r4, r4, r0
/* 802A32A4 002A01E4  C3 E4 00 04 */	lfs f31, 4(r4)
/* 802A32A8 002A01E8  7D 89 03 A6 */	mtctr r12
/* 802A32AC 002A01EC  4E 80 04 21 */	bctrl 
/* 802A32B0 002A01F0  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A32B4 002A01F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A32B8 002A01F8  40 80 00 30 */	bge .L_802A32E8
/* 802A32BC 002A01FC  C0 02 DA 90 */	lfs f0, lbl_8051BDF0@sda21(r2)
/* 802A32C0 002A0200  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A32C4 002A0204  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A32C8 002A0208  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A32CC 002A020C  FC 00 00 1E */	fctiwz f0, f0
/* 802A32D0 002A0210  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802A32D4 002A0214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A32D8 002A0218  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A32DC 002A021C  7C 03 04 2E */	lfsx f0, r3, r0
/* 802A32E0 002A0220  FC 00 00 50 */	fneg f0, f0
/* 802A32E4 002A0224  48 00 00 28 */	b .L_802A330C
.L_802A32E8:
/* 802A32E8 002A0228  C0 02 DA 94 */	lfs f0, lbl_8051BDF4@sda21(r2)
/* 802A32EC 002A022C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A32F0 002A0230  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A32F4 002A0234  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A32F8 002A0238  FC 00 00 1E */	fctiwz f0, f0
/* 802A32FC 002A023C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802A3300 002A0240  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802A3304 002A0244  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A3308 002A0248  7C 03 04 2E */	lfsx f0, r3, r0
.L_802A330C:
/* 802A330C 002A024C  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 802A3310 002A0250  C0 02 DA CC */	lfs f0, lbl_8051BE2C@sda21(r2)
/* 802A3314 002A0254  C0 22 DA 58 */	lfs f1, lbl_8051BDB8@sda21(r2)
/* 802A3318 002A0258  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 802A331C 002A025C  D3 FF 02 FC */	stfs f31, 0x2fc(r31)
/* 802A3320 002A0260  C0 7F 02 F4 */	lfs f3, 0x2f4(r31)
/* 802A3324 002A0264  C0 5F 02 F8 */	lfs f2, 0x2f8(r31)
/* 802A3328 002A0268  C0 9F 02 FC */	lfs f4, 0x2fc(r31)
/* 802A332C 002A026C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 802A3330 002A0270  EC 42 00 B2 */	fmuls f2, f2, f2
/* 802A3334 002A0274  EC 84 01 32 */	fmuls f4, f4, f4
/* 802A3338 002A0278  EC 00 10 2A */	fadds f0, f0, f2
/* 802A333C 002A027C  EC 04 00 2A */	fadds f0, f4, f0
/* 802A3340 002A0280  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802A3344 002A0284  40 81 00 20 */	ble .L_802A3364
/* 802A3348 002A0288  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 802A334C 002A028C  EC 44 00 2A */	fadds f2, f4, f0
/* 802A3350 002A0290  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802A3354 002A0294  40 81 00 14 */	ble .L_802A3368
/* 802A3358 002A0298  FC 00 10 34 */	frsqrte f0, f2
/* 802A335C 002A029C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802A3360 002A02A0  48 00 00 08 */	b .L_802A3368
.L_802A3364:
/* 802A3364 002A02A4  FC 40 08 90 */	fmr f2, f1
.L_802A3368:
/* 802A3368 002A02A8  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A336C 002A02AC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802A3370 002A02B0  40 81 00 30 */	ble .L_802A33A0
/* 802A3374 002A02B4  C0 22 DA 7C */	lfs f1, lbl_8051BDDC@sda21(r2)
/* 802A3378 002A02B8  C0 1F 02 F4 */	lfs f0, 0x2f4(r31)
/* 802A337C 002A02BC  EC 21 10 24 */	fdivs f1, f1, f2
/* 802A3380 002A02C0  EC 00 00 72 */	fmuls f0, f0, f1
/* 802A3384 002A02C4  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 802A3388 002A02C8  C0 1F 02 F8 */	lfs f0, 0x2f8(r31)
/* 802A338C 002A02CC  EC 00 00 72 */	fmuls f0, f0, f1
/* 802A3390 002A02D0  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 802A3394 002A02D4  C0 1F 02 FC */	lfs f0, 0x2fc(r31)
/* 802A3398 002A02D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 802A339C 002A02DC  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
.L_802A33A0:
/* 802A33A0 002A02E0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802A33A4 002A02E4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A33A8 002A02E8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802A33AC 002A02EC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802A33B0 002A02F0  7C 08 03 A6 */	mtlr r0
/* 802A33B4 002A02F4  38 21 00 40 */	addi r1, r1, 0x40
/* 802A33B8 002A02F8  4E 80 00 20 */	blr 
.endfn updateEmit__Q34Game12Hanachirashi3ObjFv

.fn getAttackPosition__Q34Game12Hanachirashi3ObjFv, global
/* 802A33BC 002A02FC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802A33C0 002A0300  7C 08 02 A6 */	mflr r0
/* 802A33C4 002A0304  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802A33C8 002A0308  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802A33CC 002A030C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802A33D0 002A0310  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802A33D4 002A0314  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802A33D8 002A0318  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802A33DC 002A031C  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802A33E0 002A0320  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802A33E4 002A0324  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802A33E8 002A0328  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802A33EC 002A032C  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802A33F0 002A0330  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802A33F4 002A0334  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802A33F8 002A0338  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802A33FC 002A033C  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802A3400 002A0340  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 802A3404 002A0344  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 802A3408 002A0348  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 802A340C 002A034C  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 802A3410 002A0350  DA C1 00 40 */	stfd f22, 0x40(r1)
/* 802A3414 002A0354  F2 C1 00 48 */	psq_st f22, 72(r1), 0, qr0
/* 802A3418 002A0358  DA A1 00 30 */	stfd f21, 0x30(r1)
/* 802A341C 002A035C  F2 A1 00 38 */	psq_st f21, 56(r1), 0, qr0
/* 802A3420 002A0360  DA 81 00 20 */	stfd f20, 0x20(r1)
/* 802A3424 002A0364  F2 81 00 28 */	psq_st f20, 40(r1), 0, qr0
/* 802A3428 002A0368  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A342C 002A036C  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 802A3430 002A0370  7C 7F 1B 78 */	mr r31, r3
/* 802A3434 002A0374  C0 02 DA 80 */	lfs f0, lbl_8051BDE0@sda21(r2)
/* 802A3438 002A0378  C0 45 05 B4 */	lfs f2, 0x5b4(r5)
/* 802A343C 002A037C  C0 22 DA D0 */	lfs f1, lbl_8051BE30@sda21(r2)
/* 802A3440 002A0380  EC 60 10 24 */	fdivs f3, f0, f2
/* 802A3444 002A0384  C3 64 02 F4 */	lfs f27, 0x2f4(r4)
/* 802A3448 002A0388  C3 44 02 F8 */	lfs f26, 0x2f8(r4)
/* 802A344C 002A038C  C3 24 02 FC */	lfs f25, 0x2fc(r4)
/* 802A3450 002A0390  C3 E2 DA 7C */	lfs f31, lbl_8051BDDC@sda21(r2)
/* 802A3454 002A0394  C3 C4 02 E8 */	lfs f30, 0x2e8(r4)
/* 802A3458 002A0398  EF 7B 00 B2 */	fmuls f27, f27, f2
/* 802A345C 002A039C  C3 A4 02 EC */	lfs f29, 0x2ec(r4)
/* 802A3460 002A03A0  EF 5A 00 B2 */	fmuls f26, f26, f2
/* 802A3464 002A03A4  C3 84 02 F0 */	lfs f28, 0x2f0(r4)
/* 802A3468 002A03A8  EF 39 00 B2 */	fmuls f25, f25, f2
/* 802A346C 002A03AC  EF 7B F0 2A */	fadds f27, f27, f30
/* 802A3470 002A03B0  EF 5A E8 2A */	fadds f26, f26, f29
/* 802A3474 002A03B4  EF 39 E0 2A */	fadds f25, f25, f28
/* 802A3478 002A03B8  EE A1 10 24 */	fdivs f21, f1, f2
/* 802A347C 002A03BC  EC 9F 18 28 */	fsubs f4, f31, f3
/* 802A3480 002A03C0  EC 5B 00 F2 */	fmuls f2, f27, f3
/* 802A3484 002A03C4  EC 3A 00 F2 */	fmuls f1, f26, f3
/* 802A3488 002A03C8  EC 19 00 F2 */	fmuls f0, f25, f3
/* 802A348C 002A03CC  FE 80 18 90 */	fmr f20, f3
/* 802A3490 002A03D0  EF 1E 11 3A */	fmadds f24, f30, f4, f2
/* 802A3494 002A03D4  EE FD 09 3A */	fmadds f23, f29, f4, f1
/* 802A3498 002A03D8  EE DC 01 3A */	fmadds f22, f28, f4, f0
/* 802A349C 002A03DC  48 00 00 74 */	b .L_802A3510
.L_802A34A0:
/* 802A34A0 002A03E0  EC 7F A0 28 */	fsubs f3, f31, f20
/* 802A34A4 002A03E4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802A34A8 002A03E8  EC 5B 05 32 */	fmuls f2, f27, f20
/* 802A34AC 002A03EC  38 81 00 08 */	addi r4, r1, 8
/* 802A34B0 002A03F0  EC 3A 05 32 */	fmuls f1, f26, f20
/* 802A34B4 002A03F4  EC 19 05 32 */	fmuls f0, f25, f20
/* 802A34B8 002A03F8  EC 5E 10 FA */	fmadds f2, f30, f3, f2
/* 802A34BC 002A03FC  EC 3D 08 FA */	fmadds f1, f29, f3, f1
/* 802A34C0 002A0400  EC 1C 00 FA */	fmadds f0, f28, f3, f0
/* 802A34C4 002A0404  D0 41 00 08 */	stfs f2, 8(r1)
/* 802A34C8 002A0408  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802A34CC 002A040C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802A34D0 002A0410  81 83 00 04 */	lwz r12, 4(r3)
/* 802A34D4 002A0414  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802A34D8 002A0418  7D 89 03 A6 */	mtctr r12
/* 802A34DC 002A041C  4E 80 04 21 */	bctrl 
/* 802A34E0 002A0420  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802A34E4 002A0424  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A34E8 002A0428  40 81 00 14 */	ble .L_802A34FC
/* 802A34EC 002A042C  D3 1F 00 00 */	stfs f24, 0(r31)
/* 802A34F0 002A0430  D2 FF 00 04 */	stfs f23, 4(r31)
/* 802A34F4 002A0434  D2 DF 00 08 */	stfs f22, 8(r31)
/* 802A34F8 002A0438  48 00 00 38 */	b .L_802A3530
.L_802A34FC:
/* 802A34FC 002A043C  FE E0 08 18 */	frsp f23, f1
/* 802A3500 002A0440  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802A3504 002A0444  EE 94 A8 2A */	fadds f20, f20, f21
/* 802A3508 002A0448  C3 01 00 08 */	lfs f24, 8(r1)
/* 802A350C 002A044C  C2 C1 00 10 */	lfs f22, 0x10(r1)
.L_802A3510:
/* 802A3510 002A0450  FC 14 F8 40 */	fcmpo cr0, f20, f31
/* 802A3514 002A0454  41 80 FF 8C */	blt .L_802A34A0
/* 802A3518 002A0458  C0 01 00 08 */	lfs f0, 8(r1)
/* 802A351C 002A045C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802A3520 002A0460  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802A3524 002A0464  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802A3528 002A0468  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A352C 002A046C  D0 1F 00 08 */	stfs f0, 8(r31)
.L_802A3530:
/* 802A3530 002A0470  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802A3534 002A0474  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802A3538 002A0478  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802A353C 002A047C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802A3540 002A0480  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802A3544 002A0484  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802A3548 002A0488  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802A354C 002A048C  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802A3550 002A0490  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802A3554 002A0494  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802A3558 002A0498  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802A355C 002A049C  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802A3560 002A04A0  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 802A3564 002A04A4  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 802A3568 002A04A8  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 802A356C 002A04AC  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 802A3570 002A04B0  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 802A3574 002A04B4  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 802A3578 002A04B8  E2 C1 00 48 */	psq_l f22, 72(r1), 0, qr0
/* 802A357C 002A04BC  CA C1 00 40 */	lfd f22, 0x40(r1)
/* 802A3580 002A04C0  E2 A1 00 38 */	psq_l f21, 56(r1), 0, qr0
/* 802A3584 002A04C4  CA A1 00 30 */	lfd f21, 0x30(r1)
/* 802A3588 002A04C8  E2 81 00 28 */	psq_l f20, 40(r1), 0, qr0
/* 802A358C 002A04CC  CA 81 00 20 */	lfd f20, 0x20(r1)
/* 802A3590 002A04D0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802A3594 002A04D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A3598 002A04D8  7C 08 03 A6 */	mtlr r0
/* 802A359C 002A04DC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802A35A0 002A04E0  4E 80 00 20 */	blr 
.endfn getAttackPosition__Q34Game12Hanachirashi3ObjFv

.fn windTarget__Q34Game12Hanachirashi3ObjFv, global
/* 802A35A4 002A04E4  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 802A35A8 002A04E8  7C 08 02 A6 */	mflr r0
/* 802A35AC 002A04EC  90 01 01 94 */	stw r0, 0x194(r1)
/* 802A35B0 002A04F0  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 802A35B4 002A04F4  F3 E1 01 88 */	psq_st f31, 392(r1), 0, qr0
/* 802A35B8 002A04F8  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 802A35BC 002A04FC  F3 C1 01 78 */	psq_st f30, 376(r1), 0, qr0
/* 802A35C0 002A0500  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 802A35C4 002A0504  F3 A1 01 68 */	psq_st f29, 360(r1), 0, qr0
/* 802A35C8 002A0508  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 802A35CC 002A050C  F3 81 01 58 */	psq_st f28, 344(r1), 0, qr0
/* 802A35D0 002A0510  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 802A35D4 002A0514  F3 61 01 48 */	psq_st f27, 328(r1), 0, qr0
/* 802A35D8 002A0518  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 802A35DC 002A051C  F3 41 01 38 */	psq_st f26, 312(r1), 0, qr0
/* 802A35E0 002A0520  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 802A35E4 002A0524  F3 21 01 28 */	psq_st f25, 296(r1), 0, qr0
/* 802A35E8 002A0528  DB 01 01 10 */	stfd f24, 0x110(r1)
/* 802A35EC 002A052C  F3 01 01 18 */	psq_st f24, 280(r1), 0, qr0
/* 802A35F0 002A0530  DA E1 01 00 */	stfd f23, 0x100(r1)
/* 802A35F4 002A0534  F2 E1 01 08 */	psq_st f23, 264(r1), 0, qr0
/* 802A35F8 002A0538  DA C1 00 F0 */	stfd f22, 0xf0(r1)
/* 802A35FC 002A053C  F2 C1 00 F8 */	psq_st f22, 248(r1), 0, qr0
/* 802A3600 002A0540  DA A1 00 E0 */	stfd f21, 0xe0(r1)
/* 802A3604 002A0544  F2 A1 00 E8 */	psq_st f21, 232(r1), 0, qr0
/* 802A3608 002A0548  DA 81 00 D0 */	stfd f20, 0xd0(r1)
/* 802A360C 002A054C  F2 81 00 D8 */	psq_st f20, 216(r1), 0, qr0
/* 802A3610 002A0550  DA 61 00 C0 */	stfd f19, 0xc0(r1)
/* 802A3614 002A0554  F2 61 00 C8 */	psq_st f19, 200(r1), 0, qr0
/* 802A3618 002A0558  DA 41 00 B0 */	stfd f18, 0xb0(r1)
/* 802A361C 002A055C  F2 41 00 B8 */	psq_st f18, 184(r1), 0, qr0
/* 802A3620 002A0560  DA 21 00 A0 */	stfd f17, 0xa0(r1)
/* 802A3624 002A0564  F2 21 00 A8 */	psq_st f17, 168(r1), 0, qr0
/* 802A3628 002A0568  DA 01 00 90 */	stfd f16, 0x90(r1)
/* 802A362C 002A056C  F2 01 00 98 */	psq_st f16, 152(r1), 0, qr0
/* 802A3630 002A0570  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 802A3634 002A0574  93 C1 00 88 */	stw r30, 0x88(r1)
/* 802A3638 002A0578  93 A1 00 84 */	stw r29, 0x84(r1)
/* 802A363C 002A057C  7C 7E 1B 78 */	mr r30, r3
/* 802A3640 002A0580  C0 42 DA 7C */	lfs f2, lbl_8051BDDC@sda21(r2)
/* 802A3644 002A0584  C0 63 03 0C */	lfs f3, 0x30c(r3)
/* 802A3648 002A0588  3B E0 00 00 */	li r31, 0
/* 802A364C 002A058C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802A3650 002A0590  40 80 00 28 */	bge .L_802A3678
/* 802A3654 002A0594  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802A3658 002A0598  C0 22 DA D4 */	lfs f1, lbl_8051BE34@sda21(r2)
/* 802A365C 002A059C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802A3660 002A05A0  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802A3664 002A05A4  D0 1E 03 0C */	stfs f0, 0x30c(r30)
/* 802A3668 002A05A8  C0 1E 03 0C */	lfs f0, 0x30c(r30)
/* 802A366C 002A05AC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802A3670 002A05B0  40 81 00 08 */	ble .L_802A3678
/* 802A3674 002A05B4  D0 5E 03 0C */	stfs f2, 0x30c(r30)
.L_802A3678:
/* 802A3678 002A05B8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802A367C 002A05BC  C0 22 DA C0 */	lfs f1, lbl_8051BE20@sda21(r2)
/* 802A3680 002A05C0  C0 03 05 DC */	lfs f0, 0x5dc(r3)
/* 802A3684 002A05C4  C0 7E 03 0C */	lfs f3, 0x30c(r30)
/* 802A3688 002A05C8  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A368C 002A05CC  C0 43 05 B4 */	lfs f2, 0x5b4(r3)
/* 802A3690 002A05D0  C0 22 DA 9C */	lfs f1, lbl_8051BDFC@sda21(r2)
/* 802A3694 002A05D4  EE 63 00 B2 */	fmuls f19, f3, f2
/* 802A3698 002A05D8  C2 1E 02 E8 */	lfs f16, 0x2e8(r30)
/* 802A369C 002A05DC  EC 21 00 32 */	fmuls f1, f1, f0
/* 802A36A0 002A05E0  C2 3E 02 EC */	lfs f17, 0x2ec(r30)
/* 802A36A4 002A05E4  C2 5E 02 F0 */	lfs f18, 0x2f0(r30)
/* 802A36A8 002A05E8  C3 BE 02 F4 */	lfs f29, 0x2f4(r30)
/* 802A36AC 002A05EC  C2 BE 02 F8 */	lfs f21, 0x2f8(r30)
/* 802A36B0 002A05F0  C3 9E 02 FC */	lfs f28, 0x2fc(r30)
/* 802A36B4 002A05F4  4B E2 C2 41 */	bl tan
/* 802A36B8 002A05F8  FF 60 E0 50 */	fneg f27, f28
/* 802A36BC 002A05FC  C3 E2 DA 58 */	lfs f31, lbl_8051BDB8@sda21(r2)
/* 802A36C0 002A0600  EC 1D 07 72 */	fmuls f0, f29, f29
/* 802A36C4 002A0604  FF C0 E8 90 */	fmr f30, f29
/* 802A36C8 002A0608  EC 5B FE FA */	fmadds f2, f27, f27, f31
/* 802A36CC 002A060C  FE 80 08 18 */	frsp f20, f1
/* 802A36D0 002A0610  EC 40 10 2A */	fadds f2, f0, f2
/* 802A36D4 002A0614  FC 02 F8 40 */	fcmpo cr0, f2, f31
/* 802A36D8 002A0618  40 81 00 14 */	ble .L_802A36EC
/* 802A36DC 002A061C  40 81 00 14 */	ble .L_802A36F0
/* 802A36E0 002A0620  FC 20 10 34 */	frsqrte f1, f2
/* 802A36E4 002A0624  EC 41 00 B2 */	fmuls f2, f1, f2
/* 802A36E8 002A0628  48 00 00 08 */	b .L_802A36F0
.L_802A36EC:
/* 802A36EC 002A062C  FC 40 F8 90 */	fmr f2, f31
.L_802A36F0:
/* 802A36F0 002A0630  C0 22 DA 58 */	lfs f1, lbl_8051BDB8@sda21(r2)
/* 802A36F4 002A0634  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802A36F8 002A0638  40 81 00 18 */	ble .L_802A3710
/* 802A36FC 002A063C  C0 22 DA 7C */	lfs f1, lbl_8051BDDC@sda21(r2)
/* 802A3700 002A0640  EC 21 10 24 */	fdivs f1, f1, f2
/* 802A3704 002A0644  EF 7B 00 72 */	fmuls f27, f27, f1
/* 802A3708 002A0648  EF FF 00 72 */	fmuls f31, f31, f1
/* 802A370C 002A064C  EF DE 00 72 */	fmuls f30, f30, f1
.L_802A3710:
/* 802A3710 002A0650  EC 7B 07 32 */	fmuls f3, f27, f28
/* 802A3714 002A0654  C0 22 DA 58 */	lfs f1, lbl_8051BDB8@sda21(r2)
/* 802A3718 002A0658  EC 9E 05 72 */	fmuls f4, f30, f21
/* 802A371C 002A065C  EC 5F 07 72 */	fmuls f2, f31, f29
/* 802A3720 002A0660  EF 3E 1F 78 */	fmsubs f25, f30, f29, f3
/* 802A3724 002A0664  EF 5F 27 38 */	fmsubs f26, f31, f28, f4
/* 802A3728 002A0668  EF 1B 15 78 */	fmsubs f24, f27, f21, f2
/* 802A372C 002A066C  EC 59 06 72 */	fmuls f2, f25, f25
/* 802A3730 002A0670  EC 78 06 32 */	fmuls f3, f24, f24
/* 802A3734 002A0674  EC 5A 16 BA */	fmadds f2, f26, f26, f2
/* 802A3738 002A0678  EC 43 10 2A */	fadds f2, f3, f2
/* 802A373C 002A067C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802A3740 002A0680  40 81 00 14 */	ble .L_802A3754
/* 802A3744 002A0684  40 81 00 14 */	ble .L_802A3758
/* 802A3748 002A0688  FC 20 10 34 */	frsqrte f1, f2
/* 802A374C 002A068C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 802A3750 002A0690  48 00 00 08 */	b .L_802A3758
.L_802A3754:
/* 802A3754 002A0694  FC 40 08 90 */	fmr f2, f1
.L_802A3758:
/* 802A3758 002A0698  C0 22 DA 58 */	lfs f1, lbl_8051BDB8@sda21(r2)
/* 802A375C 002A069C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802A3760 002A06A0  40 81 00 18 */	ble .L_802A3778
/* 802A3764 002A06A4  C0 22 DA 7C */	lfs f1, lbl_8051BDDC@sda21(r2)
/* 802A3768 002A06A8  EC 21 10 24 */	fdivs f1, f1, f2
/* 802A376C 002A06AC  EF 5A 00 72 */	fmuls f26, f26, f1
/* 802A3770 002A06B0  EF 39 00 72 */	fmuls f25, f25, f1
/* 802A3774 002A06B4  EF 18 00 72 */	fmuls f24, f24, f1
.L_802A3778:
/* 802A3778 002A06B8  C0 22 DA 58 */	lfs f1, lbl_8051BDB8@sda21(r2)
/* 802A377C 002A06BC  EC 5C 07 32 */	fmuls f2, f28, f28
/* 802A3780 002A06C0  FE C0 E8 90 */	fmr f22, f29
/* 802A3784 002A06C4  EC 00 08 2A */	fadds f0, f0, f1
/* 802A3788 002A06C8  FE E0 E0 90 */	fmr f23, f28
/* 802A378C 002A06CC  EC 02 00 2A */	fadds f0, f2, f0
/* 802A3790 002A06D0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802A3794 002A06D4  40 81 00 20 */	ble .L_802A37B4
/* 802A3798 002A06D8  EC 1D 0F 7A */	fmadds f0, f29, f29, f1
/* 802A379C 002A06DC  EC 42 00 2A */	fadds f2, f2, f0
/* 802A37A0 002A06E0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802A37A4 002A06E4  40 81 00 14 */	ble .L_802A37B8
/* 802A37A8 002A06E8  FC 00 10 34 */	frsqrte f0, f2
/* 802A37AC 002A06EC  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802A37B0 002A06F0  48 00 00 08 */	b .L_802A37B8
.L_802A37B4:
/* 802A37B4 002A06F4  FC 40 08 90 */	fmr f2, f1
.L_802A37B8:
/* 802A37B8 002A06F8  C0 02 DA 58 */	lfs f0, lbl_8051BDB8@sda21(r2)
/* 802A37BC 002A06FC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802A37C0 002A0700  40 81 00 14 */	ble .L_802A37D4
/* 802A37C4 002A0704  C0 02 DA 7C */	lfs f0, lbl_8051BDDC@sda21(r2)
/* 802A37C8 002A0708  EC 00 10 24 */	fdivs f0, f0, f2
/* 802A37CC 002A070C  EE D6 00 32 */	fmuls f22, f22, f0
/* 802A37D0 002A0710  EE F7 00 32 */	fmuls f23, f23, f0
.L_802A37D4:
/* 802A37D4 002A0714  38 00 00 00 */	li r0, 0
/* 802A37D8 002A0718  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802A37DC 002A071C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 802A37E0 002A0720  90 01 00 48 */	stw r0, 0x48(r1)
/* 802A37E4 002A0724  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 802A37E8 002A0728  28 00 00 00 */	cmplwi r0, 0
/* 802A37EC 002A072C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 802A37F0 002A0730  90 01 00 40 */	stw r0, 0x40(r1)
/* 802A37F4 002A0734  90 61 00 44 */	stw r3, 0x44(r1)
/* 802A37F8 002A0738  40 82 00 1C */	bne .L_802A3814
/* 802A37FC 002A073C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3800 002A0740  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A3804 002A0744  7D 89 03 A6 */	mtctr r12
/* 802A3808 002A0748  4E 80 04 21 */	bctrl 
/* 802A380C 002A074C  90 61 00 40 */	stw r3, 0x40(r1)
/* 802A3810 002A0750  48 00 02 94 */	b .L_802A3AA4
.L_802A3814:
/* 802A3814 002A0754  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3818 002A0758  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A381C 002A075C  7D 89 03 A6 */	mtctr r12
/* 802A3820 002A0760  4E 80 04 21 */	bctrl 
/* 802A3824 002A0764  90 61 00 40 */	stw r3, 0x40(r1)
/* 802A3828 002A0768  48 00 00 58 */	b .L_802A3880
.L_802A382C:
/* 802A382C 002A076C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A3830 002A0770  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A3834 002A0774  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3838 002A0778  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A383C 002A077C  7D 89 03 A6 */	mtctr r12
/* 802A3840 002A0780  4E 80 04 21 */	bctrl 
/* 802A3844 002A0784  7C 64 1B 78 */	mr r4, r3
/* 802A3848 002A0788  80 61 00 48 */	lwz r3, 0x48(r1)
/* 802A384C 002A078C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3850 002A0790  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A3854 002A0794  7D 89 03 A6 */	mtctr r12
/* 802A3858 002A0798  4E 80 04 21 */	bctrl 
/* 802A385C 002A079C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3860 002A07A0  40 82 02 44 */	bne .L_802A3AA4
/* 802A3864 002A07A4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A3868 002A07A8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A386C 002A07AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3870 002A07B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3874 002A07B4  7D 89 03 A6 */	mtctr r12
/* 802A3878 002A07B8  4E 80 04 21 */	bctrl 
/* 802A387C 002A07BC  90 61 00 40 */	stw r3, 0x40(r1)
.L_802A3880:
/* 802A3880 002A07C0  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 802A3884 002A07C4  38 61 00 3C */	addi r3, r1, 0x3c
/* 802A3888 002A07C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A388C 002A07CC  7D 89 03 A6 */	mtctr r12
/* 802A3890 002A07D0  4E 80 04 21 */	bctrl 
/* 802A3894 002A07D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3898 002A07D8  41 82 FF 94 */	beq .L_802A382C
/* 802A389C 002A07DC  48 00 02 08 */	b .L_802A3AA4
.L_802A38A0:
/* 802A38A0 002A07E0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A38A4 002A07E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A38A8 002A07E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A38AC 002A07EC  7D 89 03 A6 */	mtctr r12
/* 802A38B0 002A07F0  4E 80 04 21 */	bctrl 
/* 802A38B4 002A07F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A38B8 002A07F8  7C 7D 1B 78 */	mr r29, r3
/* 802A38BC 002A07FC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A38C0 002A0800  7D 89 03 A6 */	mtctr r12
/* 802A38C4 002A0804  4E 80 04 21 */	bctrl 
/* 802A38C8 002A0808  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A38CC 002A080C  41 82 01 1C */	beq .L_802A39E8
/* 802A38D0 002A0810  7F A4 EB 78 */	mr r4, r29
/* 802A38D4 002A0814  38 61 00 20 */	addi r3, r1, 0x20
/* 802A38D8 002A0818  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A38DC 002A081C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A38E0 002A0820  7D 89 03 A6 */	mtctr r12
/* 802A38E4 002A0824  4E 80 04 21 */	bctrl 
/* 802A38E8 002A0828  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802A38EC 002A082C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 802A38F0 002A0830  EC 41 88 28 */	fsubs f2, f1, f17
/* 802A38F4 002A0834  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 802A38F8 002A0838  EC 80 80 28 */	fsubs f4, f0, f16
/* 802A38FC 002A083C  EC 01 90 28 */	fsubs f0, f1, f18
/* 802A3900 002A0840  EC 35 00 B2 */	fmuls f1, f21, f2
/* 802A3904 002A0844  EC 3D 09 3A */	fmadds f1, f29, f4, f1
/* 802A3908 002A0848  EC BC 08 3A */	fmadds f5, f28, f0, f1
/* 802A390C 002A084C  FC 05 98 40 */	fcmpo cr0, f5, f19
/* 802A3910 002A0850  40 80 00 D8 */	bge .L_802A39E8
/* 802A3914 002A0854  C0 C2 DA 58 */	lfs f6, lbl_8051BDB8@sda21(r2)
/* 802A3918 002A0858  FC 05 30 40 */	fcmpo cr0, f5, f6
/* 802A391C 002A085C  40 81 00 CC */	ble .L_802A39E8
/* 802A3920 002A0860  EC 79 00 B2 */	fmuls f3, f25, f2
/* 802A3924 002A0864  EC 3F 00 B2 */	fmuls f1, f31, f2
/* 802A3928 002A0868  EC 45 05 32 */	fmuls f2, f5, f20
/* 802A392C 002A086C  EC BA 19 3A */	fmadds f5, f26, f4, f3
/* 802A3930 002A0870  EC 9B 09 3A */	fmadds f4, f27, f4, f1
/* 802A3934 002A0874  EC 62 00 B2 */	fmuls f3, f2, f2
/* 802A3938 002A0878  EC 38 28 3A */	fmadds f1, f24, f0, f5
/* 802A393C 002A087C  EC 1E 20 3A */	fmadds f0, f30, f0, f4
/* 802A3940 002A0880  EC 81 00 72 */	fmuls f4, f1, f1
/* 802A3944 002A0884  EC 80 20 3A */	fmadds f4, f0, f0, f4
/* 802A3948 002A0888  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802A394C 002A088C  40 80 00 9C */	bge .L_802A39E8
/* 802A3950 002A0890  FC 04 30 40 */	fcmpo cr0, f4, f6
/* 802A3954 002A0894  40 81 00 18 */	ble .L_802A396C
/* 802A3958 002A0898  40 81 00 10 */	ble .L_802A3968
/* 802A395C 002A089C  FC 60 20 34 */	frsqrte f3, f4
/* 802A3960 002A08A0  EC C3 01 32 */	fmuls f6, f3, f4
/* 802A3964 002A08A4  48 00 00 08 */	b .L_802A396C
.L_802A3968:
/* 802A3968 002A08A8  FC C0 20 90 */	fmr f6, f4
.L_802A396C:
/* 802A396C 002A08AC  EC E6 10 24 */	fdivs f7, f6, f2
/* 802A3970 002A08B0  C0 42 DA 7C */	lfs f2, lbl_8051BDDC@sda21(r2)
/* 802A3974 002A08B4  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802A3978 002A08B8  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802A397C 002A08BC  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractWind@ha
/* 802A3980 002A08C0  C0 A2 DA D8 */	lfs f5, lbl_8051BE38@sda21(r2)
/* 802A3984 002A08C4  EC 82 38 28 */	fsubs f4, f2, f7
/* 802A3988 002A08C8  C0 C5 06 04 */	lfs f6, 0x604(r5)
/* 802A398C 002A08CC  EC 7B 00 32 */	fmuls f3, f27, f0
/* 802A3990 002A08D0  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802A3994 002A08D4  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802A3998 002A08D8  C0 42 DA 58 */	lfs f2, lbl_8051BDB8@sda21(r2)
/* 802A399C 002A08DC  EC 85 21 FA */	fmadds f4, f5, f7, f4
/* 802A39A0 002A08E0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802A39A4 002A08E4  EC 76 18 7A */	fmadds f3, f22, f1, f3
/* 802A39A8 002A08E8  38 03 49 74 */	addi r0, r3, __vt__Q24Game12InteractWind@l
/* 802A39AC 002A08EC  EC 17 00 7A */	fmadds f0, f23, f1, f0
/* 802A39B0 002A08F0  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802A39B4 002A08F4  EC 24 00 F2 */	fmuls f1, f4, f3
/* 802A39B8 002A08F8  90 01 00 64 */	stw r0, 0x64(r1)
/* 802A39BC 002A08FC  EC 04 00 32 */	fmuls f0, f4, f0
/* 802A39C0 002A0900  7F A3 EB 78 */	mr r3, r29
/* 802A39C4 002A0904  D0 C1 00 6C */	stfs f6, 0x6c(r1)
/* 802A39C8 002A0908  38 81 00 64 */	addi r4, r1, 0x64
/* 802A39CC 002A090C  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 802A39D0 002A0910  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 802A39D4 002A0914  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 802A39D8 002A0918  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A39DC 002A091C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802A39E0 002A0920  7D 89 03 A6 */	mtctr r12
/* 802A39E4 002A0924  4E 80 04 21 */	bctrl 
.L_802A39E8:
/* 802A39E8 002A0928  80 01 00 48 */	lwz r0, 0x48(r1)
/* 802A39EC 002A092C  28 00 00 00 */	cmplwi r0, 0
/* 802A39F0 002A0930  40 82 00 24 */	bne .L_802A3A14
/* 802A39F4 002A0934  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A39F8 002A0938  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A39FC 002A093C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3A00 002A0940  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3A04 002A0944  7D 89 03 A6 */	mtctr r12
/* 802A3A08 002A0948  4E 80 04 21 */	bctrl 
/* 802A3A0C 002A094C  90 61 00 40 */	stw r3, 0x40(r1)
/* 802A3A10 002A0950  48 00 00 94 */	b .L_802A3AA4
.L_802A3A14:
/* 802A3A14 002A0954  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A3A18 002A0958  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A3A1C 002A095C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3A20 002A0960  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3A24 002A0964  7D 89 03 A6 */	mtctr r12
/* 802A3A28 002A0968  4E 80 04 21 */	bctrl 
/* 802A3A2C 002A096C  90 61 00 40 */	stw r3, 0x40(r1)
/* 802A3A30 002A0970  48 00 00 58 */	b .L_802A3A88
.L_802A3A34:
/* 802A3A34 002A0974  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A3A38 002A0978  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A3A3C 002A097C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3A40 002A0980  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A3A44 002A0984  7D 89 03 A6 */	mtctr r12
/* 802A3A48 002A0988  4E 80 04 21 */	bctrl 
/* 802A3A4C 002A098C  7C 64 1B 78 */	mr r4, r3
/* 802A3A50 002A0990  80 61 00 48 */	lwz r3, 0x48(r1)
/* 802A3A54 002A0994  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3A58 002A0998  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A3A5C 002A099C  7D 89 03 A6 */	mtctr r12
/* 802A3A60 002A09A0  4E 80 04 21 */	bctrl 
/* 802A3A64 002A09A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3A68 002A09A8  40 82 00 3C */	bne .L_802A3AA4
/* 802A3A6C 002A09AC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A3A70 002A09B0  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A3A74 002A09B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3A78 002A09B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3A7C 002A09BC  7D 89 03 A6 */	mtctr r12
/* 802A3A80 002A09C0  4E 80 04 21 */	bctrl 
/* 802A3A84 002A09C4  90 61 00 40 */	stw r3, 0x40(r1)
.L_802A3A88:
/* 802A3A88 002A09C8  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 802A3A8C 002A09CC  38 61 00 3C */	addi r3, r1, 0x3c
/* 802A3A90 002A09D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A3A94 002A09D4  7D 89 03 A6 */	mtctr r12
/* 802A3A98 002A09D8  4E 80 04 21 */	bctrl 
/* 802A3A9C 002A09DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3AA0 002A09E0  41 82 FF 94 */	beq .L_802A3A34
.L_802A3AA4:
/* 802A3AA4 002A09E4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802A3AA8 002A09E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3AAC 002A09EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A3AB0 002A09F0  7D 89 03 A6 */	mtctr r12
/* 802A3AB4 002A09F4  4E 80 04 21 */	bctrl 
/* 802A3AB8 002A09F8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802A3ABC 002A09FC  7C 04 18 40 */	cmplw r4, r3
/* 802A3AC0 002A0A00  40 82 FD E0 */	bne .L_802A38A0
/* 802A3AC4 002A0A04  38 00 00 00 */	li r0, 0
/* 802A3AC8 002A0A08  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802A3ACC 002A0A0C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802A3AD0 002A0A10  90 01 00 38 */	stw r0, 0x38(r1)
/* 802A3AD4 002A0A14  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802A3AD8 002A0A18  28 00 00 00 */	cmplwi r0, 0
/* 802A3ADC 002A0A1C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 802A3AE0 002A0A20  90 01 00 30 */	stw r0, 0x30(r1)
/* 802A3AE4 002A0A24  90 61 00 34 */	stw r3, 0x34(r1)
/* 802A3AE8 002A0A28  40 82 00 1C */	bne .L_802A3B04
/* 802A3AEC 002A0A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3AF0 002A0A30  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A3AF4 002A0A34  7D 89 03 A6 */	mtctr r12
/* 802A3AF8 002A0A38  4E 80 04 21 */	bctrl 
/* 802A3AFC 002A0A3C  90 61 00 30 */	stw r3, 0x30(r1)
/* 802A3B00 002A0A40  48 00 02 CC */	b .L_802A3DCC
.L_802A3B04:
/* 802A3B04 002A0A44  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3B08 002A0A48  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A3B0C 002A0A4C  7D 89 03 A6 */	mtctr r12
/* 802A3B10 002A0A50  4E 80 04 21 */	bctrl 
/* 802A3B14 002A0A54  90 61 00 30 */	stw r3, 0x30(r1)
/* 802A3B18 002A0A58  48 00 00 58 */	b .L_802A3B70
.L_802A3B1C:
/* 802A3B1C 002A0A5C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3B20 002A0A60  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3B24 002A0A64  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3B28 002A0A68  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A3B2C 002A0A6C  7D 89 03 A6 */	mtctr r12
/* 802A3B30 002A0A70  4E 80 04 21 */	bctrl 
/* 802A3B34 002A0A74  7C 64 1B 78 */	mr r4, r3
/* 802A3B38 002A0A78  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802A3B3C 002A0A7C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3B40 002A0A80  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A3B44 002A0A84  7D 89 03 A6 */	mtctr r12
/* 802A3B48 002A0A88  4E 80 04 21 */	bctrl 
/* 802A3B4C 002A0A8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3B50 002A0A90  40 82 02 7C */	bne .L_802A3DCC
/* 802A3B54 002A0A94  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3B58 002A0A98  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3B5C 002A0A9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3B60 002A0AA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3B64 002A0AA4  7D 89 03 A6 */	mtctr r12
/* 802A3B68 002A0AA8  4E 80 04 21 */	bctrl 
/* 802A3B6C 002A0AAC  90 61 00 30 */	stw r3, 0x30(r1)
.L_802A3B70:
/* 802A3B70 002A0AB0  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 802A3B74 002A0AB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802A3B78 002A0AB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A3B7C 002A0ABC  7D 89 03 A6 */	mtctr r12
/* 802A3B80 002A0AC0  4E 80 04 21 */	bctrl 
/* 802A3B84 002A0AC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3B88 002A0AC8  41 82 FF 94 */	beq .L_802A3B1C
/* 802A3B8C 002A0ACC  48 00 02 40 */	b .L_802A3DCC
.L_802A3B90:
/* 802A3B90 002A0AD0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3B94 002A0AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3B98 002A0AD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A3B9C 002A0ADC  7D 89 03 A6 */	mtctr r12
/* 802A3BA0 002A0AE0  4E 80 04 21 */	bctrl 
/* 802A3BA4 002A0AE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3BA8 002A0AE8  7C 7D 1B 78 */	mr r29, r3
/* 802A3BAC 002A0AEC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A3BB0 002A0AF0  7D 89 03 A6 */	mtctr r12
/* 802A3BB4 002A0AF4  4E 80 04 21 */	bctrl 
/* 802A3BB8 002A0AF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3BBC 002A0AFC  41 82 01 54 */	beq .L_802A3D10
/* 802A3BC0 002A0B00  7F A3 EB 78 */	mr r3, r29
/* 802A3BC4 002A0B04  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A3BC8 002A0B08  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802A3BCC 002A0B0C  7D 89 03 A6 */	mtctr r12
/* 802A3BD0 002A0B10  4E 80 04 21 */	bctrl 
/* 802A3BD4 002A0B14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3BD8 002A0B18  41 82 01 38 */	beq .L_802A3D10
/* 802A3BDC 002A0B1C  7F A4 EB 78 */	mr r4, r29
/* 802A3BE0 002A0B20  38 61 00 14 */	addi r3, r1, 0x14
/* 802A3BE4 002A0B24  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A3BE8 002A0B28  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A3BEC 002A0B2C  7D 89 03 A6 */	mtctr r12
/* 802A3BF0 002A0B30  4E 80 04 21 */	bctrl 
/* 802A3BF4 002A0B34  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802A3BF8 002A0B38  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802A3BFC 002A0B3C  EC 81 88 28 */	fsubs f4, f1, f17
/* 802A3C00 002A0B40  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 802A3C04 002A0B44  EC 60 80 28 */	fsubs f3, f0, f16
/* 802A3C08 002A0B48  EC C1 90 28 */	fsubs f6, f1, f18
/* 802A3C0C 002A0B4C  EC 15 01 32 */	fmuls f0, f21, f4
/* 802A3C10 002A0B50  EC 1D 00 FA */	fmadds f0, f29, f3, f0
/* 802A3C14 002A0B54  EC 1C 01 BA */	fmadds f0, f28, f6, f0
/* 802A3C18 002A0B58  FC 00 98 40 */	fcmpo cr0, f0, f19
/* 802A3C1C 002A0B5C  40 80 00 F4 */	bge .L_802A3D10
/* 802A3C20 002A0B60  C0 A2 DA 58 */	lfs f5, lbl_8051BDB8@sda21(r2)
/* 802A3C24 002A0B64  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 802A3C28 002A0B68  40 81 00 E8 */	ble .L_802A3D10
/* 802A3C2C 002A0B6C  EC 59 01 32 */	fmuls f2, f25, f4
/* 802A3C30 002A0B70  EC 3F 01 32 */	fmuls f1, f31, f4
/* 802A3C34 002A0B74  EC 00 05 32 */	fmuls f0, f0, f20
/* 802A3C38 002A0B78  EC 9A 10 FA */	fmadds f4, f26, f3, f2
/* 802A3C3C 002A0B7C  EC 5B 08 FA */	fmadds f2, f27, f3, f1
/* 802A3C40 002A0B80  EC 60 00 32 */	fmuls f3, f0, f0
/* 802A3C44 002A0B84  EC 38 21 BA */	fmadds f1, f24, f6, f4
/* 802A3C48 002A0B88  EC 5E 11 BA */	fmadds f2, f30, f6, f2
/* 802A3C4C 002A0B8C  EC 81 00 72 */	fmuls f4, f1, f1
/* 802A3C50 002A0B90  EC 82 20 BA */	fmadds f4, f2, f2, f4
/* 802A3C54 002A0B94  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802A3C58 002A0B98  40 80 00 B8 */	bge .L_802A3D10
/* 802A3C5C 002A0B9C  FC 04 28 40 */	fcmpo cr0, f4, f5
/* 802A3C60 002A0BA0  40 81 00 14 */	ble .L_802A3C74
/* 802A3C64 002A0BA4  40 81 00 14 */	ble .L_802A3C78
/* 802A3C68 002A0BA8  FC 60 20 34 */	frsqrte f3, f4
/* 802A3C6C 002A0BAC  EC 83 01 32 */	fmuls f4, f3, f4
/* 802A3C70 002A0BB0  48 00 00 08 */	b .L_802A3C78
.L_802A3C74:
/* 802A3C74 002A0BB4  FC 80 28 90 */	fmr f4, f5
.L_802A3C78:
/* 802A3C78 002A0BB8  ED 04 00 24 */	fdivs f8, f4, f0
/* 802A3C7C 002A0BBC  C0 02 DA 7C */	lfs f0, lbl_8051BDDC@sda21(r2)
/* 802A3C80 002A0BC0  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802A3C84 002A0BC4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802A3C88 002A0BC8  C0 A2 DA DC */	lfs f5, lbl_8051BE3C@sda21(r2)
/* 802A3C8C 002A0BCC  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractWind@ha
/* 802A3C90 002A0BD0  EC FB 00 B2 */	fmuls f7, f27, f2
/* 802A3C94 002A0BD4  C0 C2 DA B4 */	lfs f6, lbl_8051BE14@sda21(r2)
/* 802A3C98 002A0BD8  EC 60 40 28 */	fsubs f3, f0, f8
/* 802A3C9C 002A0BDC  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 802A3CA0 002A0BE0  EC 9E 00 B2 */	fmuls f4, f30, f2
/* 802A3CA4 002A0BE4  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802A3CA8 002A0BE8  EC 46 40 FA */	fmadds f2, f6, f3, f8
/* 802A3CAC 002A0BEC  C0 C2 DA 84 */	lfs f6, lbl_8051BDE4@sda21(r2)
/* 802A3CB0 002A0BF0  EC F6 38 7A */	fmadds f7, f22, f1, f7
/* 802A3CB4 002A0BF4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 802A3CB8 002A0BF8  EC A5 02 32 */	fmuls f5, f5, f8
/* 802A3CBC 002A0BFC  38 03 49 74 */	addi r0, r3, __vt__Q24Game12InteractWind@l
/* 802A3CC0 002A0C00  EC 37 20 7A */	fmadds f1, f23, f1, f4
/* 802A3CC4 002A0C04  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractHanaChirashi@ha
/* 802A3CC8 002A0C08  EC 82 01 F2 */	fmuls f4, f2, f7
/* 802A3CCC 002A0C0C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 802A3CD0 002A0C10  EC 66 28 FA */	fmadds f3, f6, f3, f5
/* 802A3CD4 002A0C14  38 03 49 50 */	addi r0, r3, __vt__Q24Game20InteractHanaChirashi@l
/* 802A3CD8 002A0C18  EC 22 00 72 */	fmuls f1, f2, f1
/* 802A3CDC 002A0C1C  93 C1 00 50 */	stw r30, 0x50(r1)
/* 802A3CE0 002A0C20  7F A3 EB 78 */	mr r3, r29
/* 802A3CE4 002A0C24  38 81 00 4C */	addi r4, r1, 0x4c
/* 802A3CE8 002A0C28  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 802A3CEC 002A0C2C  D0 81 00 58 */	stfs f4, 0x58(r1)
/* 802A3CF0 002A0C30  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 802A3CF4 002A0C34  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 802A3CF8 002A0C38  90 01 00 4C */	stw r0, 0x4c(r1)
/* 802A3CFC 002A0C3C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A3D00 002A0C40  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802A3D04 002A0C44  7D 89 03 A6 */	mtctr r12
/* 802A3D08 002A0C48  4E 80 04 21 */	bctrl 
/* 802A3D0C 002A0C4C  7C 7F 1B 78 */	mr r31, r3
.L_802A3D10:
/* 802A3D10 002A0C50  80 01 00 38 */	lwz r0, 0x38(r1)
/* 802A3D14 002A0C54  28 00 00 00 */	cmplwi r0, 0
/* 802A3D18 002A0C58  40 82 00 24 */	bne .L_802A3D3C
/* 802A3D1C 002A0C5C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3D20 002A0C60  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3D24 002A0C64  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3D28 002A0C68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3D2C 002A0C6C  7D 89 03 A6 */	mtctr r12
/* 802A3D30 002A0C70  4E 80 04 21 */	bctrl 
/* 802A3D34 002A0C74  90 61 00 30 */	stw r3, 0x30(r1)
/* 802A3D38 002A0C78  48 00 00 94 */	b .L_802A3DCC
.L_802A3D3C:
/* 802A3D3C 002A0C7C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3D40 002A0C80  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3D44 002A0C84  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3D48 002A0C88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3D4C 002A0C8C  7D 89 03 A6 */	mtctr r12
/* 802A3D50 002A0C90  4E 80 04 21 */	bctrl 
/* 802A3D54 002A0C94  90 61 00 30 */	stw r3, 0x30(r1)
/* 802A3D58 002A0C98  48 00 00 58 */	b .L_802A3DB0
.L_802A3D5C:
/* 802A3D5C 002A0C9C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3D60 002A0CA0  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3D64 002A0CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3D68 002A0CA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802A3D6C 002A0CAC  7D 89 03 A6 */	mtctr r12
/* 802A3D70 002A0CB0  4E 80 04 21 */	bctrl 
/* 802A3D74 002A0CB4  7C 64 1B 78 */	mr r4, r3
/* 802A3D78 002A0CB8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802A3D7C 002A0CBC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3D80 002A0CC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A3D84 002A0CC4  7D 89 03 A6 */	mtctr r12
/* 802A3D88 002A0CC8  4E 80 04 21 */	bctrl 
/* 802A3D8C 002A0CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3D90 002A0CD0  40 82 00 3C */	bne .L_802A3DCC
/* 802A3D94 002A0CD4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3D98 002A0CD8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3D9C 002A0CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3DA0 002A0CE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A3DA4 002A0CE4  7D 89 03 A6 */	mtctr r12
/* 802A3DA8 002A0CE8  4E 80 04 21 */	bctrl 
/* 802A3DAC 002A0CEC  90 61 00 30 */	stw r3, 0x30(r1)
.L_802A3DB0:
/* 802A3DB0 002A0CF0  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 802A3DB4 002A0CF4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802A3DB8 002A0CF8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A3DBC 002A0CFC  7D 89 03 A6 */	mtctr r12
/* 802A3DC0 002A0D00  4E 80 04 21 */	bctrl 
/* 802A3DC4 002A0D04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A3DC8 002A0D08  41 82 FF 94 */	beq .L_802A3D5C
.L_802A3DCC:
/* 802A3DCC 002A0D0C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A3DD0 002A0D10  81 83 00 00 */	lwz r12, 0(r3)
/* 802A3DD4 002A0D14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A3DD8 002A0D18  7D 89 03 A6 */	mtctr r12
/* 802A3DDC 002A0D1C  4E 80 04 21 */	bctrl 
/* 802A3DE0 002A0D20  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802A3DE4 002A0D24  7C 04 18 40 */	cmplw r4, r3
/* 802A3DE8 002A0D28  40 82 FD A8 */	bne .L_802A3B90
/* 802A3DEC 002A0D2C  7F C4 F3 78 */	mr r4, r30
/* 802A3DF0 002A0D30  38 61 00 08 */	addi r3, r1, 8
/* 802A3DF4 002A0D34  4B FF F5 C9 */	bl getAttackPosition__Q34Game12Hanachirashi3ObjFv
/* 802A3DF8 002A0D38  C0 01 00 08 */	lfs f0, 8(r1)
/* 802A3DFC 002A0D3C  7F E3 FB 78 */	mr r3, r31
/* 802A3E00 002A0D40  D0 1E 03 00 */	stfs f0, 0x300(r30)
/* 802A3E04 002A0D44  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802A3E08 002A0D48  D0 1E 03 04 */	stfs f0, 0x304(r30)
/* 802A3E0C 002A0D4C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A3E10 002A0D50  D0 1E 03 08 */	stfs f0, 0x308(r30)
/* 802A3E14 002A0D54  E3 E1 01 88 */	psq_l f31, 392(r1), 0, qr0
/* 802A3E18 002A0D58  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 802A3E1C 002A0D5C  E3 C1 01 78 */	psq_l f30, 376(r1), 0, qr0
/* 802A3E20 002A0D60  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 802A3E24 002A0D64  E3 A1 01 68 */	psq_l f29, 360(r1), 0, qr0
/* 802A3E28 002A0D68  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 802A3E2C 002A0D6C  E3 81 01 58 */	psq_l f28, 344(r1), 0, qr0
/* 802A3E30 002A0D70  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 802A3E34 002A0D74  E3 61 01 48 */	psq_l f27, 328(r1), 0, qr0
/* 802A3E38 002A0D78  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 802A3E3C 002A0D7C  E3 41 01 38 */	psq_l f26, 312(r1), 0, qr0
/* 802A3E40 002A0D80  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 802A3E44 002A0D84  E3 21 01 28 */	psq_l f25, 296(r1), 0, qr0
/* 802A3E48 002A0D88  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 802A3E4C 002A0D8C  E3 01 01 18 */	psq_l f24, 280(r1), 0, qr0
/* 802A3E50 002A0D90  CB 01 01 10 */	lfd f24, 0x110(r1)
/* 802A3E54 002A0D94  E2 E1 01 08 */	psq_l f23, 264(r1), 0, qr0
/* 802A3E58 002A0D98  CA E1 01 00 */	lfd f23, 0x100(r1)
/* 802A3E5C 002A0D9C  E2 C1 00 F8 */	psq_l f22, 248(r1), 0, qr0
/* 802A3E60 002A0DA0  CA C1 00 F0 */	lfd f22, 0xf0(r1)
/* 802A3E64 002A0DA4  E2 A1 00 E8 */	psq_l f21, 232(r1), 0, qr0
/* 802A3E68 002A0DA8  CA A1 00 E0 */	lfd f21, 0xe0(r1)
/* 802A3E6C 002A0DAC  E2 81 00 D8 */	psq_l f20, 216(r1), 0, qr0
/* 802A3E70 002A0DB0  CA 81 00 D0 */	lfd f20, 0xd0(r1)
/* 802A3E74 002A0DB4  E2 61 00 C8 */	psq_l f19, 200(r1), 0, qr0
/* 802A3E78 002A0DB8  CA 61 00 C0 */	lfd f19, 0xc0(r1)
/* 802A3E7C 002A0DBC  E2 41 00 B8 */	psq_l f18, 184(r1), 0, qr0
/* 802A3E80 002A0DC0  CA 41 00 B0 */	lfd f18, 0xb0(r1)
/* 802A3E84 002A0DC4  E2 21 00 A8 */	psq_l f17, 168(r1), 0, qr0
/* 802A3E88 002A0DC8  CA 21 00 A0 */	lfd f17, 0xa0(r1)
/* 802A3E8C 002A0DCC  E2 01 00 98 */	psq_l f16, 152(r1), 0, qr0
/* 802A3E90 002A0DD0  CA 01 00 90 */	lfd f16, 0x90(r1)
/* 802A3E94 002A0DD4  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802A3E98 002A0DD8  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802A3E9C 002A0DDC  80 01 01 94 */	lwz r0, 0x194(r1)
/* 802A3EA0 002A0DE0  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 802A3EA4 002A0DE4  7C 08 03 A6 */	mtlr r0
/* 802A3EA8 002A0DE8  38 21 01 90 */	addi r1, r1, 0x190
/* 802A3EAC 002A0DEC  4E 80 00 20 */	blr 
.endfn windTarget__Q34Game12Hanachirashi3ObjFv

.fn createEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A3EB0 002A0DF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A3EB4 002A0DF4  7C 08 02 A6 */	mflr r0
/* 802A3EB8 002A0DF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A3EBC 002A0DFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A3EC0 002A0E00  7C 7F 1B 78 */	mr r31, r3
/* 802A3EC4 002A0E04  38 60 00 2C */	li r3, 0x2c
/* 802A3EC8 002A0E08  93 C1 00 08 */	stw r30, 8(r1)
/* 802A3ECC 002A0E0C  4B D7 FF D9 */	bl __nw__FUl
/* 802A3ED0 002A0E10  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A3ED4 002A0E14  41 82 00 20 */	beq .L_802A3EF4
/* 802A3ED8 002A0E18  38 80 00 00 */	li r4, 0
/* 802A3EDC 002A0E1C  38 A0 00 71 */	li r5, 0x71
/* 802A3EE0 002A0E20  38 C0 00 72 */	li r6, 0x72
/* 802A3EE4 002A0E24  48 10 C5 B9 */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 802A3EE8 002A0E28  3C 60 80 4D */	lis r3, __vt__Q23efx10TFusenDead@ha
/* 802A3EEC 002A0E2C  38 03 89 2C */	addi r0, r3, __vt__Q23efx10TFusenDead@l
/* 802A3EF0 002A0E30  90 1E 00 00 */	stw r0, 0(r30)
.L_802A3EF4:
/* 802A3EF4 002A0E34  93 DF 03 18 */	stw r30, 0x318(r31)
/* 802A3EF8 002A0E38  38 60 00 34 */	li r3, 0x34
/* 802A3EFC 002A0E3C  4B D7 FF A9 */	bl __nw__FUl
/* 802A3F00 002A0E40  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A3F04 002A0E44  41 82 00 24 */	beq .L_802A3F28
/* 802A3F08 002A0E48  38 9F 03 00 */	addi r4, r31, 0x300
/* 802A3F0C 002A0E4C  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 802A3F10 002A0E50  38 C0 02 52 */	li r6, 0x252
/* 802A3F14 002A0E54  38 E0 02 53 */	li r7, 0x253
/* 802A3F18 002A0E58  48 10 CA B5 */	bl "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
/* 802A3F1C 002A0E5C  3C 60 80 4D */	lis r3, __vt__Q23efx13TFusenhAirhit@ha
/* 802A3F20 002A0E60  38 03 D2 84 */	addi r0, r3, __vt__Q23efx13TFusenhAirhit@l
/* 802A3F24 002A0E64  90 1E 00 00 */	stw r0, 0(r30)
.L_802A3F28:
/* 802A3F28 002A0E68  93 DF 03 1C */	stw r30, 0x31c(r31)
/* 802A3F2C 002A0E6C  38 60 00 40 */	li r3, 0x40
/* 802A3F30 002A0E70  4B D7 FF 75 */	bl __nw__FUl
/* 802A3F34 002A0E74  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A3F38 002A0E78  41 82 00 24 */	beq .L_802A3F5C
/* 802A3F3C 002A0E7C  38 80 00 00 */	li r4, 0
/* 802A3F40 002A0E80  38 A0 02 54 */	li r5, 0x254
/* 802A3F44 002A0E84  38 C0 02 55 */	li r6, 0x255
/* 802A3F48 002A0E88  38 E0 02 56 */	li r7, 0x256
/* 802A3F4C 002A0E8C  48 10 C6 61 */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 802A3F50 002A0E90  3C 60 80 4D */	lis r3, __vt__Q23efx10TFusenhAir@ha
/* 802A3F54 002A0E94  38 03 D2 68 */	addi r0, r3, __vt__Q23efx10TFusenhAir@l
/* 802A3F58 002A0E98  90 1E 00 00 */	stw r0, 0(r30)
.L_802A3F5C:
/* 802A3F5C 002A0E9C  93 DF 03 20 */	stw r30, 0x320(r31)
/* 802A3F60 002A0EA0  38 60 00 14 */	li r3, 0x14
/* 802A3F64 002A0EA4  4B D7 FF 41 */	bl __nw__FUl
/* 802A3F68 002A0EA8  28 03 00 00 */	cmplwi r3, 0
/* 802A3F6C 002A0EAC  41 82 00 78 */	beq .L_802A3FE4
/* 802A3F70 002A0EB0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802A3F74 002A0EB4  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802A3F78 002A0EB8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802A3F7C 002A0EBC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A3F80 002A0EC0  90 03 00 00 */	stw r0, 0(r3)
/* 802A3F84 002A0EC4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802A3F88 002A0EC8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A3F8C 002A0ECC  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802A3F90 002A0ED0  90 03 00 04 */	stw r0, 4(r3)
/* 802A3F94 002A0ED4  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802A3F98 002A0ED8  3C 80 80 4D */	lis r4, __vt__Q23efx9TFusenSui@ha
/* 802A3F9C 002A0EDC  38 05 00 14 */	addi r0, r5, 0x14
/* 802A3FA0 002A0EE0  90 A3 00 00 */	stw r5, 0(r3)
/* 802A3FA4 002A0EE4  38 84 88 A8 */	addi r4, r4, __vt__Q23efx9TFusenSui@l
/* 802A3FA8 002A0EE8  39 20 00 00 */	li r9, 0
/* 802A3FAC 002A0EEC  39 00 02 B2 */	li r8, 0x2b2
/* 802A3FB0 002A0EF0  90 03 00 04 */	stw r0, 4(r3)
/* 802A3FB4 002A0EF4  38 C7 00 14 */	addi r6, r7, 0x14
/* 802A3FB8 002A0EF8  38 A0 00 73 */	li r5, 0x73
/* 802A3FBC 002A0EFC  38 04 00 14 */	addi r0, r4, 0x14
/* 802A3FC0 002A0F00  91 23 00 08 */	stw r9, 8(r3)
/* 802A3FC4 002A0F04  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802A3FC8 002A0F08  99 23 00 0E */	stb r9, 0xe(r3)
/* 802A3FCC 002A0F0C  90 E3 00 00 */	stw r7, 0(r3)
/* 802A3FD0 002A0F10  90 C3 00 04 */	stw r6, 4(r3)
/* 802A3FD4 002A0F14  91 23 00 10 */	stw r9, 0x10(r3)
/* 802A3FD8 002A0F18  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A3FDC 002A0F1C  90 83 00 00 */	stw r4, 0(r3)
/* 802A3FE0 002A0F20  90 03 00 04 */	stw r0, 4(r3)
.L_802A3FE4:
/* 802A3FE4 002A0F24  90 7F 03 24 */	stw r3, 0x324(r31)
/* 802A3FE8 002A0F28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A3FEC 002A0F2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A3FF0 002A0F30  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A3FF4 002A0F34  7C 08 03 A6 */	mtlr r0
/* 802A3FF8 002A0F38  38 21 00 10 */	addi r1, r1, 0x10
/* 802A3FFC 002A0F3C  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game12Hanachirashi3ObjFv

.fn setupEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A4000 002A0F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A4004 002A0F44  7C 08 02 A6 */	mflr r0
/* 802A4008 002A0F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A400C 002A0F4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A4010 002A0F50  7C 7F 1B 78 */	mr r31, r3
/* 802A4014 002A0F54  80 63 03 18 */	lwz r3, 0x318(r3)
/* 802A4018 002A0F58  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 802A401C 002A0F5C  48 10 C5 85 */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 802A4020 002A0F60  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 802A4024 002A0F64  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 802A4028 002A0F68  48 10 C6 25 */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 802A402C 002A0F6C  80 1F 02 E4 */	lwz r0, 0x2e4(r31)
/* 802A4030 002A0F70  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 802A4034 002A0F74  90 03 00 10 */	stw r0, 0x10(r3)
/* 802A4038 002A0F78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A403C 002A0F7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A4040 002A0F80  7C 08 03 A6 */	mtlr r0
/* 802A4044 002A0F84  38 21 00 10 */	addi r1, r1, 0x10
/* 802A4048 002A0F88  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game12Hanachirashi3ObjFv

.fn startDeadEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A404C 002A0F8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A4050 002A0F90  7C 08 02 A6 */	mflr r0
/* 802A4054 002A0F94  38 80 00 00 */	li r4, 0
/* 802A4058 002A0F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A405C 002A0F9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A4060 002A0FA0  7C 7F 1B 78 */	mr r31, r3
/* 802A4064 002A0FA4  80 63 03 18 */	lwz r3, 0x318(r3)
/* 802A4068 002A0FA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A406C 002A0FAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A4070 002A0FB0  7D 89 03 A6 */	mtctr r12
/* 802A4074 002A0FB4  4E 80 04 21 */	bctrl 
/* 802A4078 002A0FB8  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 802A407C 002A0FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A4080 002A0FC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A4084 002A0FC4  7D 89 03 A6 */	mtctr r12
/* 802A4088 002A0FC8  4E 80 04 21 */	bctrl 
/* 802A408C 002A0FCC  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 802A4090 002A0FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A4094 002A0FD4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A4098 002A0FD8  7D 89 03 A6 */	mtctr r12
/* 802A409C 002A0FDC  4E 80 04 21 */	bctrl 
/* 802A40A0 002A0FE0  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 802A40A4 002A0FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A40A8 002A0FE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A40AC 002A0FEC  7D 89 03 A6 */	mtctr r12
/* 802A40B0 002A0FF0  4E 80 04 21 */	bctrl 
/* 802A40B4 002A0FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A40B8 002A0FF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A40BC 002A0FFC  7C 08 03 A6 */	mtlr r0
/* 802A40C0 002A1000  38 21 00 10 */	addi r1, r1, 0x10
/* 802A40C4 002A1004  4E 80 00 20 */	blr 
.endfn startDeadEffect__Q34Game12Hanachirashi3ObjFv

.fn createSuckEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A40C8 002A1008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A40CC 002A100C  7C 08 02 A6 */	mflr r0
/* 802A40D0 002A1010  38 80 00 00 */	li r4, 0
/* 802A40D4 002A1014  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A40D8 002A1018  80 63 03 24 */	lwz r3, 0x324(r3)
/* 802A40DC 002A101C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A40E0 002A1020  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A40E4 002A1024  7D 89 03 A6 */	mtctr r12
/* 802A40E8 002A1028  4E 80 04 21 */	bctrl 
/* 802A40EC 002A102C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A40F0 002A1030  7C 08 03 A6 */	mtlr r0
/* 802A40F4 002A1034  38 21 00 10 */	addi r1, r1, 0x10
/* 802A40F8 002A1038  4E 80 00 20 */	blr 
.endfn createSuckEffect__Q34Game12Hanachirashi3ObjFv

.fn startWindEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A40FC 002A103C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A4100 002A1040  7C 08 02 A6 */	mflr r0
/* 802A4104 002A1044  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A4108 002A1048  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A410C 002A104C  7C 7F 1B 78 */	mr r31, r3
/* 802A4110 002A1050  38 61 00 08 */	addi r3, r1, 8
/* 802A4114 002A1054  7F E4 FB 78 */	mr r4, r31
/* 802A4118 002A1058  4B FF F2 A5 */	bl getAttackPosition__Q34Game12Hanachirashi3ObjFv
/* 802A411C 002A105C  C0 01 00 08 */	lfs f0, 8(r1)
/* 802A4120 002A1060  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 802A4124 002A1064  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802A4128 002A1068  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 802A412C 002A106C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A4130 002A1070  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 802A4134 002A1074  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 802A4138 002A1078  81 83 00 00 */	lwz r12, 0(r3)
/* 802A413C 002A107C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A4140 002A1080  7D 89 03 A6 */	mtctr r12
/* 802A4144 002A1084  4E 80 04 21 */	bctrl 
/* 802A4148 002A1088  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 802A414C 002A108C  38 80 00 00 */	li r4, 0
/* 802A4150 002A1090  81 83 00 00 */	lwz r12, 0(r3)
/* 802A4154 002A1094  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A4158 002A1098  7D 89 03 A6 */	mtctr r12
/* 802A415C 002A109C  4E 80 04 21 */	bctrl 
/* 802A4160 002A10A0  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 802A4164 002A10A4  38 80 00 00 */	li r4, 0
/* 802A4168 002A10A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A416C 002A10AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A4170 002A10B0  7D 89 03 A6 */	mtctr r12
/* 802A4174 002A10B4  4E 80 04 21 */	bctrl 
/* 802A4178 002A10B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A417C 002A10BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A4180 002A10C0  7C 08 03 A6 */	mtlr r0
/* 802A4184 002A10C4  38 21 00 20 */	addi r1, r1, 0x20
/* 802A4188 002A10C8  4E 80 00 20 */	blr 
.endfn startWindEffect__Q34Game12Hanachirashi3ObjFv

.fn finishWindEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A418C 002A10CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A4190 002A10D0  7C 08 02 A6 */	mflr r0
/* 802A4194 002A10D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A4198 002A10D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A419C 002A10DC  7C 7F 1B 78 */	mr r31, r3
/* 802A41A0 002A10E0  80 63 03 18 */	lwz r3, 0x318(r3)
/* 802A41A4 002A10E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A41A8 002A10E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A41AC 002A10EC  7D 89 03 A6 */	mtctr r12
/* 802A41B0 002A10F0  4E 80 04 21 */	bctrl 
/* 802A41B4 002A10F4  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 802A41B8 002A10F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A41BC 002A10FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A41C0 002A1100  7D 89 03 A6 */	mtctr r12
/* 802A41C4 002A1104  4E 80 04 21 */	bctrl 
/* 802A41C8 002A1108  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 802A41CC 002A110C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A41D0 002A1110  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A41D4 002A1114  7D 89 03 A6 */	mtctr r12
/* 802A41D8 002A1118  4E 80 04 21 */	bctrl 
/* 802A41DC 002A111C  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 802A41E0 002A1120  81 83 00 00 */	lwz r12, 0(r3)
/* 802A41E4 002A1124  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A41E8 002A1128  7D 89 03 A6 */	mtctr r12
/* 802A41EC 002A112C  4E 80 04 21 */	bctrl 
/* 802A41F0 002A1130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A41F4 002A1134  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A41F8 002A1138  7C 08 03 A6 */	mtlr r0
/* 802A41FC 002A113C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A4200 002A1140  4E 80 00 20 */	blr 
.endfn finishWindEffect__Q34Game12Hanachirashi3ObjFv

.fn createDownEffect__Q34Game12Hanachirashi3ObjFv, global
/* 802A4204 002A1144  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A4208 002A1148  7C 08 02 A6 */	mflr r0
/* 802A420C 002A114C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A4210 002A1150  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A4214 002A1154  7C 7F 1B 78 */	mr r31, r3
/* 802A4218 002A1158  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802A421C 002A115C  C0 03 02 48 */	lfs f0, 0x248(r3)
/* 802A4220 002A1160  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 802A4224 002A1164  EC 81 00 2A */	fadds f4, f1, f0
/* 802A4228 002A1168  C0 43 02 44 */	lfs f2, 0x244(r3)
/* 802A422C 002A116C  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 802A4230 002A1170  C0 03 02 40 */	lfs f0, 0x240(r3)
/* 802A4234 002A1174  EC 43 10 2A */	fadds f2, f3, f2
/* 802A4238 002A1178  EC 01 00 2A */	fadds f0, f1, f0
/* 802A423C 002A117C  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 802A4240 002A1180  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 802A4244 002A1184  D0 01 00 08 */	stfs f0, 8(r1)
/* 802A4248 002A1188  81 83 00 00 */	lwz r12, 0(r3)
/* 802A424C 002A118C  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 802A4250 002A1190  7D 89 03 A6 */	mtctr r12
/* 802A4254 002A1194  4E 80 04 21 */	bctrl 
/* 802A4258 002A1198  7F E3 FB 78 */	mr r3, r31
/* 802A425C 002A119C  38 81 00 08 */	addi r4, r1, 8
/* 802A4260 002A11A0  4B E5 F8 F1 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802A4264 002A11A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A4268 002A11A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A426C 002A11AC  7C 08 03 A6 */	mtlr r0
/* 802A4270 002A11B0  38 21 00 20 */	addi r1, r1, 0x20
/* 802A4274 002A11B4  4E 80 00 20 */	blr 
.endfn createDownEffect__Q34Game12Hanachirashi3ObjFv

.fn getDownSmokeScale__Q34Game12Hanachirashi3ObjFv, weak
/* 802A4278 002A11B8  C0 22 DA E0 */	lfs f1, lbl_8051BE40@sda21(r2)
/* 802A427C 002A11BC  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game12Hanachirashi3ObjFv

.fn effectDrawOn__Q34Game12Hanachirashi3ObjFv, global
/* 802A4280 002A11C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A4284 002A11C4  7C 08 02 A6 */	mflr r0
/* 802A4288 002A11C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A428C 002A11CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A4290 002A11D0  7C 7F 1B 78 */	mr r31, r3
/* 802A4294 002A11D4  80 63 03 18 */	lwz r3, 0x318(r3)
/* 802A4298 002A11D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A429C 002A11DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A42A0 002A11E0  7D 89 03 A6 */	mtctr r12
/* 802A42A4 002A11E4  4E 80 04 21 */	bctrl 
/* 802A42A8 002A11E8  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 802A42AC 002A11EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A42B0 002A11F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A42B4 002A11F4  7D 89 03 A6 */	mtctr r12
/* 802A42B8 002A11F8  4E 80 04 21 */	bctrl 
/* 802A42BC 002A11FC  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 802A42C0 002A1200  81 83 00 00 */	lwz r12, 0(r3)
/* 802A42C4 002A1204  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A42C8 002A1208  7D 89 03 A6 */	mtctr r12
/* 802A42CC 002A120C  4E 80 04 21 */	bctrl 
/* 802A42D0 002A1210  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 802A42D4 002A1214  81 83 00 00 */	lwz r12, 0(r3)
/* 802A42D8 002A1218  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A42DC 002A121C  7D 89 03 A6 */	mtctr r12
/* 802A42E0 002A1220  4E 80 04 21 */	bctrl 
/* 802A42E4 002A1224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A42E8 002A1228  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A42EC 002A122C  7C 08 03 A6 */	mtlr r0
/* 802A42F0 002A1230  38 21 00 10 */	addi r1, r1, 0x10
/* 802A42F4 002A1234  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game12Hanachirashi3ObjFv

.fn effectDrawOff__Q34Game12Hanachirashi3ObjFv, global
/* 802A42F8 002A1238  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A42FC 002A123C  7C 08 02 A6 */	mflr r0
/* 802A4300 002A1240  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A4304 002A1244  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A4308 002A1248  7C 7F 1B 78 */	mr r31, r3
/* 802A430C 002A124C  80 63 03 18 */	lwz r3, 0x318(r3)
/* 802A4310 002A1250  81 83 00 00 */	lwz r12, 0(r3)
/* 802A4314 002A1254  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A4318 002A1258  7D 89 03 A6 */	mtctr r12
/* 802A431C 002A125C  4E 80 04 21 */	bctrl 
/* 802A4320 002A1260  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 802A4324 002A1264  81 83 00 00 */	lwz r12, 0(r3)
/* 802A4328 002A1268  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A432C 002A126C  7D 89 03 A6 */	mtctr r12
/* 802A4330 002A1270  4E 80 04 21 */	bctrl 
/* 802A4334 002A1274  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 802A4338 002A1278  81 83 00 00 */	lwz r12, 0(r3)
/* 802A433C 002A127C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A4340 002A1280  7D 89 03 A6 */	mtctr r12
/* 802A4344 002A1284  4E 80 04 21 */	bctrl 
/* 802A4348 002A1288  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 802A434C 002A128C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A4350 002A1290  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A4354 002A1294  7D 89 03 A6 */	mtctr r12
/* 802A4358 002A1298  4E 80 04 21 */	bctrl 
/* 802A435C 002A129C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A4360 002A12A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A4364 002A12A4  7C 08 03 A6 */	mtlr r0
/* 802A4368 002A12A8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A436C 002A12AC  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game12Hanachirashi3ObjFv

.fn inWaterCallback__Q34Game12Hanachirashi3ObjFPQ24Game8WaterBox, weak
/* 802A4370 002A12B0  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game12Hanachirashi3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game12Hanachirashi3ObjFv, weak
/* 802A4374 002A12B4  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game12Hanachirashi3ObjFv

.fn throwupItemInDeathProcedure__Q34Game12Hanachirashi3ObjFv, weak
/* 802A4378 002A12B8  4E 80 00 20 */	blr 
.endfn throwupItemInDeathProcedure__Q34Game12Hanachirashi3ObjFv

.fn getEnemyTypeID__Q34Game12Hanachirashi3ObjFv, weak
/* 802A437C 002A12BC  38 60 00 37 */	li r3, 0x37
/* 802A4380 002A12C0  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game12Hanachirashi3ObjFv

.fn "@812@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 802A4384 002A12C4  39 60 00 0C */	li r11, 0xc
/* 802A4388 002A12C8  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A438C 002A12CC  7C 63 5A 14 */	add r3, r3, r11
/* 802A4390 002A12D0  38 63 FC D4 */	addi r3, r3, -812
/* 802A4394 002A12D4  4B E6 25 88 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@812@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@812@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 802A4398 002A12D8  39 60 00 0C */	li r11, 0xc
/* 802A439C 002A12DC  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A43A0 002A12E0  7C 63 5A 14 */	add r3, r3, r11
/* 802A43A4 002A12E4  38 63 FC D4 */	addi r3, r3, -812
/* 802A43A8 002A12E8  4B E6 23 00 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@812@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@812@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 802A43AC 002A12EC  39 60 00 0C */	li r11, 0xc
/* 802A43B0 002A12F0  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A43B4 002A12F4  7C 63 5A 14 */	add r3, r3, r11
/* 802A43B8 002A12F8  38 63 FC D4 */	addi r3, r3, -812
/* 802A43BC 002A12FC  4B E6 23 0C */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@812@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@812@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 802A43C0 002A1300  39 60 00 0C */	li r11, 0xc
/* 802A43C4 002A1304  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A43C8 002A1308  7C 63 5A 14 */	add r3, r3, r11
/* 802A43CC 002A130C  38 63 FC D4 */	addi r3, r3, -812
/* 802A43D0 002A1310  4B E6 26 A8 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@812@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@812@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 802A43D4 002A1314  39 60 00 0C */	li r11, 0xc
/* 802A43D8 002A1318  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A43DC 002A131C  7C 63 5A 14 */	add r3, r3, r11
/* 802A43E0 002A1320  38 63 FC D4 */	addi r3, r3, -812
/* 802A43E4 002A1324  4B E6 26 68 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@812@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@812@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 802A43E8 002A1328  39 60 00 0C */	li r11, 0xc
/* 802A43EC 002A132C  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A43F0 002A1330  7C 63 5A 14 */	add r3, r3, r11
/* 802A43F4 002A1334  38 63 FC D4 */	addi r3, r3, -812
/* 802A43F8 002A1338  4B E6 22 A8 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@812@12@viewGetShape__Q24Game9EnemyBaseFv"
