.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game11GreenKabuto3Obj
__vt__Q34Game11GreenKabuto3Obj:
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
	.4byte __dt__Q34Game11GreenKabuto3ObjFv
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
	.4byte changeMaterial__Q34Game11GreenKabuto3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11GreenKabuto3ObjFv
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
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11GreenKabuto3ObjFv
__ct__Q34Game11GreenKabuto3ObjFv:
/* 802FFBC8 002FCB08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FFBCC 002FCB0C  7C 08 02 A6 */	mflr r0
/* 802FFBD0 002FCB10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FFBD4 002FCB14  7C 80 07 35 */	extsh. r0, r4
/* 802FFBD8 002FCB18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FFBDC 002FCB1C  7C 7F 1B 78 */	mr r31, r3
/* 802FFBE0 002FCB20  41 82 00 24 */	beq lbl_802FFC04
/* 802FFBE4 002FCB24  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802FFBE8 002FCB28  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802FFBEC 002FCB2C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802FFBF0 002FCB30  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802FFBF4 002FCB34  38 00 00 00 */	li r0, 0
/* 802FFBF8 002FCB38  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802FFBFC 002FCB3C  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 802FFC00 002FCB40  90 1F 02 EC */	stw r0, 0x2ec(r31)
lbl_802FFC04:
/* 802FFC04 002FCB44  7F E3 FB 78 */	mr r3, r31
/* 802FFC08 002FCB48  38 80 00 00 */	li r4, 0
/* 802FFC0C 002FCB4C  4B FE 45 6D */	bl __ct__Q34Game6Kabuto3ObjFv
/* 802FFC10 002FCB50  3C 60 80 4D */	lis r3, __vt__Q34Game11GreenKabuto3Obj@ha
/* 802FFC14 002FCB54  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802FFC18 002FCB58  38 A3 66 30 */	addi r5, r3, __vt__Q34Game11GreenKabuto3Obj@l
/* 802FFC1C 002FCB5C  7F E3 FB 78 */	mr r3, r31
/* 802FFC20 002FCB60  90 BF 00 00 */	stw r5, 0(r31)
/* 802FFC24 002FCB64  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802FFC28 002FCB68  38 A5 03 1C */	addi r5, r5, 0x31c
/* 802FFC2C 002FCB6C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802FFC30 002FCB70  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802FFC34 002FCB74  90 A4 00 00 */	stw r5, 0(r4)
/* 802FFC38 002FCB78  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802FFC3C 002FCB7C  7C 04 00 50 */	subf r0, r4, r0
/* 802FFC40 002FCB80  90 04 00 0C */	stw r0, 0xc(r4)
/* 802FFC44 002FCB84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FFC48 002FCB88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FFC4C 002FCB8C  7C 08 03 A6 */	mtlr r0
/* 802FFC50 002FCB90  38 21 00 10 */	addi r1, r1, 0x10
/* 802FFC54 002FCB94  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11GreenKabuto3ObjFv
changeMaterial__Q34Game11GreenKabuto3ObjFv:
/* 802FFC58 002FCB98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FFC5C 002FCB9C  7C 08 02 A6 */	mflr r0
/* 802FFC60 002FCBA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FFC64 002FCBA4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802FFC68 002FCBA8  7C 7B 1B 78 */	mr r27, r3
/* 802FFC6C 002FCBAC  80 63 01 80 */	lwz r3, 0x180(r3)
/* 802FFC70 002FCBB0  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802FFC74 002FCBB4  81 83 00 00 */	lwz r12, 0(r3)
/* 802FFC78 002FCBB8  83 A4 00 08 */	lwz r29, 8(r4)
/* 802FFC7C 002FCBBC  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 802FFC80 002FCBC0  83 DD 00 04 */	lwz r30, 4(r29)
/* 802FFC84 002FCBC4  7D 89 03 A6 */	mtctr r12
/* 802FFC88 002FCBC8  4E 80 04 21 */	bctrl 
/* 802FFC8C 002FCBCC  7C 7F 1B 78 */	mr r31, r3
/* 802FFC90 002FCBD0  7F A3 EB 78 */	mr r3, r29
/* 802FFC94 002FCBD4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802FFC98 002FCBD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FFC9C 002FCBDC  7D 89 03 A6 */	mtctr r12
/* 802FFCA0 002FCBE0  4E 80 04 21 */	bctrl 
/* 802FFCA4 002FCBE4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802FFCA8 002FCBE8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802FFCAC 002FCBEC  88 1F 00 00 */	lbz r0, 0(r31)
/* 802FFCB0 002FCBF0  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 802FFCB4 002FCBF4  80 64 00 08 */	lwz r3, 8(r4)
/* 802FFCB8 002FCBF8  3B 80 00 00 */	li r28, 0
/* 802FFCBC 002FCBFC  80 63 00 04 */	lwz r3, 4(r3)
/* 802FFCC0 002FCC00  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 802FFCC4 002FCC04  80 64 00 04 */	lwz r3, 4(r4)
/* 802FFCC8 002FCC08  98 03 00 00 */	stb r0, 0(r3)
/* 802FFCCC 002FCC0C  88 1F 00 01 */	lbz r0, 1(r31)
/* 802FFCD0 002FCC10  98 03 00 01 */	stb r0, 1(r3)
/* 802FFCD4 002FCC14  A0 1F 00 02 */	lhz r0, 2(r31)
/* 802FFCD8 002FCC18  B0 03 00 02 */	sth r0, 2(r3)
/* 802FFCDC 002FCC1C  A0 1F 00 04 */	lhz r0, 4(r31)
/* 802FFCE0 002FCC20  B0 03 00 04 */	sth r0, 4(r3)
/* 802FFCE4 002FCC24  88 1F 00 06 */	lbz r0, 6(r31)
/* 802FFCE8 002FCC28  98 03 00 06 */	stb r0, 6(r3)
/* 802FFCEC 002FCC2C  88 1F 00 07 */	lbz r0, 7(r31)
/* 802FFCF0 002FCC30  98 03 00 07 */	stb r0, 7(r3)
/* 802FFCF4 002FCC34  88 1F 00 08 */	lbz r0, 8(r31)
/* 802FFCF8 002FCC38  98 03 00 08 */	stb r0, 8(r3)
/* 802FFCFC 002FCC3C  88 1F 00 09 */	lbz r0, 9(r31)
/* 802FFD00 002FCC40  98 03 00 09 */	stb r0, 9(r3)
/* 802FFD04 002FCC44  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 802FFD08 002FCC48  B0 03 00 0A */	sth r0, 0xa(r3)
/* 802FFD0C 002FCC4C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802FFD10 002FCC50  90 03 00 0C */	stw r0, 0xc(r3)
/* 802FFD14 002FCC54  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802FFD18 002FCC58  98 03 00 10 */	stb r0, 0x10(r3)
/* 802FFD1C 002FCC5C  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 802FFD20 002FCC60  98 03 00 11 */	stb r0, 0x11(r3)
/* 802FFD24 002FCC64  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 802FFD28 002FCC68  98 03 00 12 */	stb r0, 0x12(r3)
/* 802FFD2C 002FCC6C  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 802FFD30 002FCC70  98 03 00 13 */	stb r0, 0x13(r3)
/* 802FFD34 002FCC74  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 802FFD38 002FCC78  98 03 00 14 */	stb r0, 0x14(r3)
/* 802FFD3C 002FCC7C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 802FFD40 002FCC80  98 03 00 15 */	stb r0, 0x15(r3)
/* 802FFD44 002FCC84  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 802FFD48 002FCC88  98 03 00 16 */	stb r0, 0x16(r3)
/* 802FFD4C 002FCC8C  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 802FFD50 002FCC90  98 03 00 17 */	stb r0, 0x17(r3)
/* 802FFD54 002FCC94  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802FFD58 002FCC98  98 03 00 18 */	stb r0, 0x18(r3)
/* 802FFD5C 002FCC9C  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 802FFD60 002FCCA0  98 03 00 19 */	stb r0, 0x19(r3)
/* 802FFD64 002FCCA4  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 802FFD68 002FCCA8  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 802FFD6C 002FCCAC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802FFD70 002FCCB0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802FFD74 002FCCB4  80 64 00 04 */	lwz r3, 4(r4)
/* 802FFD78 002FCCB8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FFD7C 002FCCBC  7C 1F 02 14 */	add r0, r31, r0
/* 802FFD80 002FCCC0  7C 03 00 50 */	subf r0, r3, r0
/* 802FFD84 002FCCC4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802FFD88 002FCCC8  80 64 00 04 */	lwz r3, 4(r4)
/* 802FFD8C 002FCCCC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802FFD90 002FCCD0  7C 1F 02 14 */	add r0, r31, r0
/* 802FFD94 002FCCD4  7C 03 00 50 */	subf r0, r3, r0
/* 802FFD98 002FCCD8  90 03 00 0C */	stw r0, 0xc(r3)
/* 802FFD9C 002FCCDC  48 00 00 3C */	b lbl_802FFDD8
lbl_802FFDA0:
/* 802FFDA0 002FCCE0  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802FFDA4 002FCCE4  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802FFDA8 002FCCE8  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802FFDAC 002FCCEC  7C 84 1A 14 */	add r4, r4, r3
/* 802FFDB0 002FCCF0  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 802FFDB4 002FCCF4  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802FFDB8 002FCCF8  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802FFDBC 002FCCFC  7C 63 00 2E */	lwzx r3, r3, r0
/* 802FFDC0 002FCD00  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802FFDC4 002FCD04  81 83 00 00 */	lwz r12, 0(r3)
/* 802FFDC8 002FCD08  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802FFDCC 002FCD0C  7D 89 03 A6 */	mtctr r12
/* 802FFDD0 002FCD10  4E 80 04 21 */	bctrl 
/* 802FFDD4 002FCD14  3B 9C 00 01 */	addi r28, r28, 1
lbl_802FFDD8:
/* 802FFDD8 002FCD18  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802FFDDC 002FCD1C  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802FFDE0 002FCD20  7C 03 00 40 */	cmplw r3, r0
/* 802FFDE4 002FCD24  41 80 FF BC */	blt lbl_802FFDA0
/* 802FFDE8 002FCD28  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802FFDEC 002FCD2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FFDF0 002FCD30  7C 08 03 A6 */	mtlr r0
/* 802FFDF4 002FCD34  38 21 00 20 */	addi r1, r1, 0x20
/* 802FFDF8 002FCD38  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11GreenKabuto3ObjFv
getEnemyTypeID__Q34Game11GreenKabuto3ObjFv:
/* 802FFDFC 002FCD3C  38 60 00 4B */	li r3, 0x4b
/* 802FFE00 002FCD40  4E 80 00 20 */	blr 
