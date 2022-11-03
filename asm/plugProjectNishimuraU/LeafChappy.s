.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game10LeafChappy3Obj
__vt__Q34Game10LeafChappy3Obj:
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
	.4byte onInit__Q34Game10KumaChappy3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game10LeafChappy3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game10LeafChappy3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game9EnemyBaseFv
	.4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q34Game10LeafChappy3ObjFv
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
	.4byte __dt__Q34Game10LeafChappy3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10LeafChappy3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q34Game10LeafChappy3ObjFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10KumaChappy3ObjFR8Graphics
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
	.4byte getOffsetForMapCollision__Q34Game10KumaChappy3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q34Game10LeafChappy3ObjFv
	.4byte initWalkSmokeEffect__Q34Game10LeafChappy3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game10LeafChappy3ObjFv
	.4byte getMouthSlots__Q34Game10KumaChappy3ObjFv
	.4byte doGetLifeGaugeParam__Q34Game10LeafChappy3ObjFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10KumaChappy3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte startCarcassMotion__Q34Game10KumaChappy3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q34Game10LeafChappy3ObjFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10LeafChappy3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM
	.4byte createChappyRelation__Q34Game10LeafChappy3ObjFv
	.4byte getChappyRelation__Q34Game10LeafChappy3ObjFv
	.4byte startEnemyRumble__Q34Game10LeafChappy3ObjFv
	.4byte resetChappyRelation__Q34Game10LeafChappy3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@764@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051C5F8:
	.float 0.0
lbl_8051C5FC:
	.float 2.5
.balign 8
lbl_8051C600:
	.4byte 0x43300000
	.4byte 0x80000000
.balign 4
lbl_8051C608:
	.asciz "ago"
.balign 4
lbl_8051C60C:
	.float 7.0
lbl_8051C610:
	.float 5.0
lbl_8051C614:
	.float 1.0
lbl_8051C618:
	.float 50.0
lbl_8051C61C:
	.float 30.0
lbl_8051C620:
	.float 12.5
.balign 4
lbl_8051C624:
	.asciz "kamu1"
.balign 4
lbl_8051C62C:
	.asciz "kamu2"
.balign 4
lbl_8051C634:
	.asciz "kamu3"
.balign 4
lbl_8051C63C:
	.asciz "asiL"
.balign 4
lbl_8051C644:
	.asciz "asiR"
.balign 4
lbl_8051C64C: # pi
	.float 3.1415927
lbl_8051C650:
	.float 325.9493
lbl_8051C654:
	.float -325.9493
lbl_8051C658:
	.float 17.5
lbl_8051C65C:
	.float 0.4
lbl_8051C660:
	.float 0.55

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10LeafChappy3ObjFv
__ct__Q34Game10LeafChappy3ObjFv:
/* 802C5C18 002C2B58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C5C1C 002C2B5C  7C 08 02 A6 */	mflr r0
/* 802C5C20 002C2B60  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C5C24 002C2B64  7C 80 07 35 */	extsh. r0, r4
/* 802C5C28 002C2B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C5C2C 002C2B6C  7C 7F 1B 78 */	mr r31, r3
/* 802C5C30 002C2B70  41 82 00 24 */	beq .L_802C5C54
/* 802C5C34 002C2B74  38 1F 02 FC */	addi r0, r31, 0x2fc
/* 802C5C38 002C2B78  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802C5C3C 002C2B7C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802C5C40 002C2B80  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802C5C44 002C2B84  38 00 00 00 */	li r0, 0
/* 802C5C48 002C2B88  90 7F 02 FC */	stw r3, 0x2fc(r31)
/* 802C5C4C 002C2B8C  90 1F 03 00 */	stw r0, 0x300(r31)
/* 802C5C50 002C2B90  90 1F 03 04 */	stw r0, 0x304(r31)
.L_802C5C54:
/* 802C5C54 002C2B94  7F E3 FB 78 */	mr r3, r31
/* 802C5C58 002C2B98  38 80 00 00 */	li r4, 0
/* 802C5C5C 002C2B9C  4B FD 3A 45 */	bl __ct__Q34Game10KumaChappy3ObjFv
/* 802C5C60 002C2BA0  3C 60 80 4D */	lis r3, __vt__Q34Game10LeafChappy3Obj@ha
/* 802C5C64 002C2BA4  38 1F 02 FC */	addi r0, r31, 0x2fc
/* 802C5C68 002C2BA8  38 A3 16 38 */	addi r5, r3, __vt__Q34Game10LeafChappy3Obj@l
/* 802C5C6C 002C2BAC  7F E3 FB 78 */	mr r3, r31
/* 802C5C70 002C2BB0  90 BF 00 00 */	stw r5, 0(r31)
/* 802C5C74 002C2BB4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802C5C78 002C2BB8  38 A5 03 0C */	addi r5, r5, 0x30c
/* 802C5C7C 002C2BBC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802C5C80 002C2BC0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802C5C84 002C2BC4  90 A4 00 00 */	stw r5, 0(r4)
/* 802C5C88 002C2BC8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802C5C8C 002C2BCC  7C 04 00 50 */	subf r0, r4, r0
/* 802C5C90 002C2BD0  90 04 00 0C */	stw r0, 0xc(r4)
/* 802C5C94 002C2BD4  48 00 05 DD */	bl createFootmarks__Q34Game10LeafChappy3ObjFv
/* 802C5C98 002C2BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C5C9C 002C2BDC  7F E3 FB 78 */	mr r3, r31
/* 802C5CA0 002C2BE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C5CA4 002C2BE4  7C 08 03 A6 */	mtlr r0
/* 802C5CA8 002C2BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C5CAC 002C2BEC  4E 80 00 20 */	blr 

.global doUpdate__Q34Game10LeafChappy3ObjFv
doUpdate__Q34Game10LeafChappy3ObjFv:
/* 802C5CB0 002C2BF0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802C5CB4 002C2BF4  7C 08 02 A6 */	mflr r0
/* 802C5CB8 002C2BF8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802C5CBC 002C2BFC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802C5CC0 002C2C00  7C 7F 1B 78 */	mr r31, r3
/* 802C5CC4 002C2C04  4B FD 3B B1 */	bl doUpdate__Q34Game10KumaChappy3ObjFv
/* 802C5CC8 002C2C08  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802C5CCC 002C2C0C  3C 00 43 30 */	lis r0, 0x4330
/* 802C5CD0 002C2C10  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802C5CD4 002C2C14  80 84 00 50 */	lwz r4, 0x50(r4)
/* 802C5CD8 002C2C18  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802C5CDC 002C2C1C  90 01 00 28 */	stw r0, 0x28(r1)
/* 802C5CE0 002C2C20  7C 04 18 50 */	subf r0, r4, r3
/* 802C5CE4 002C2C24  C8 42 E2 A0 */	lfd f2, lbl_8051C600@sda21(r2)
/* 802C5CE8 002C2C28  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802C5CEC 002C2C2C  C0 02 E2 98 */	lfs f0, lbl_8051C5F8@sda21(r2)
/* 802C5CF0 002C2C30  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802C5CF4 002C2C34  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 802C5CF8 002C2C38  EC 21 10 28 */	fsubs f1, f1, f2
/* 802C5CFC 002C2C3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802C5D00 002C2C40  40 81 00 08 */	ble .L_802C5D08
/* 802C5D04 002C2C44  48 00 00 08 */	b .L_802C5D0C
.L_802C5D08:
/* 802C5D08 002C2C48  FC 20 08 50 */	fneg f1, f1
.L_802C5D0C:
/* 802C5D0C 002C2C4C  C0 02 E2 9C */	lfs f0, lbl_8051C5FC@sda21(r2)
/* 802C5D10 002C2C50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802C5D14 002C2C54  40 81 00 48 */	ble .L_802C5D5C
/* 802C5D18 002C2C58  38 61 00 14 */	addi r3, r1, 0x14
/* 802C5D1C 002C2C5C  4B EE EA 79 */	bl __ct__Q24Game8FootmarkFv
/* 802C5D20 002C2C60  7F E4 FB 78 */	mr r4, r31
/* 802C5D24 002C2C64  38 61 00 08 */	addi r3, r1, 8
/* 802C5D28 002C2C68  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C5D2C 002C2C6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802C5D30 002C2C70  7D 89 03 A6 */	mtctr r12
/* 802C5D34 002C2C74  4E 80 04 21 */	bctrl 
/* 802C5D38 002C2C78  C0 41 00 08 */	lfs f2, 8(r1)
/* 802C5D3C 002C2C7C  38 81 00 14 */	addi r4, r1, 0x14
/* 802C5D40 002C2C80  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802C5D44 002C2C84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802C5D48 002C2C88  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802C5D4C 002C2C8C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802C5D50 002C2C90  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802C5D54 002C2C94  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802C5D58 002C2C98  4B EE EA E1 */	bl add__Q24Game9FootmarksFRQ24Game8Footmark
.L_802C5D5C:
/* 802C5D5C 002C2C9C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802C5D60 002C2CA0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802C5D64 002C2CA4  7C 08 03 A6 */	mtlr r0
/* 802C5D68 002C2CA8  38 21 00 40 */	addi r1, r1, 0x40
/* 802C5D6C 002C2CAC  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game10LeafChappy3ObjFR8Graphics
doDirectDraw__Q34Game10LeafChappy3ObjFR8Graphics:
/* 802C5D70 002C2CB0  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game10LeafChappy3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game10LeafChappy3ObjFRQ24Game11ShadowParam:
/* 802C5D74 002C2CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C5D78 002C2CB8  7C 08 02 A6 */	mflr r0
/* 802C5D7C 002C2CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C5D80 002C2CC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C5D84 002C2CC4  7C 9F 23 78 */	mr r31, r4
/* 802C5D88 002C2CC8  38 82 E2 A8 */	addi r4, r2, lbl_8051C608@sda21
/* 802C5D8C 002C2CCC  93 C1 00 08 */	stw r30, 8(r1)
/* 802C5D90 002C2CD0  7C 7E 1B 78 */	mr r30, r3
/* 802C5D94 002C2CD4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802C5D98 002C2CD8  48 17 92 4D */	bl getJoint__Q28SysShape5ModelFPc
/* 802C5D9C 002C2CDC  48 16 3B 05 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802C5DA0 002C2CE0  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802C5DA4 002C2CE4  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 802C5DA8 002C2CE8  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 802C5DAC 002C2CEC  C0 02 E2 AC */	lfs f0, lbl_8051C60C@sda21(r2)
/* 802C5DB0 002C2CF0  D0 3F 00 00 */	stfs f1, 0(r31)
/* 802C5DB4 002C2CF4  C0 42 E2 B0 */	lfs f2, lbl_8051C610@sda21(r2)
/* 802C5DB8 002C2CF8  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802C5DBC 002C2CFC  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802C5DC0 002C2D00  C0 3F 00 04 */	lfs f1, 4(r31)
/* 802C5DC4 002C2D04  EC 01 00 28 */	fsubs f0, f1, f0
/* 802C5DC8 002C2D08  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802C5DCC 002C2D0C  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 802C5DD0 002C2D10  C0 1F 00 04 */	lfs f0, 4(r31)
/* 802C5DD4 002C2D14  EC 22 08 2A */	fadds f1, f2, f1
/* 802C5DD8 002C2D18  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802C5DDC 002C2D1C  40 80 00 08 */	bge .L_802C5DE4
/* 802C5DE0 002C2D20  D0 3F 00 04 */	stfs f1, 4(r31)
.L_802C5DE4:
/* 802C5DE4 002C2D24  C0 22 E2 98 */	lfs f1, lbl_8051C5F8@sda21(r2)
/* 802C5DE8 002C2D28  C0 02 E2 B4 */	lfs f0, lbl_8051C614@sda21(r2)
/* 802C5DEC 002C2D2C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802C5DF0 002C2D30  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802C5DF4 002C2D34  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802C5DF8 002C2D38  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802C5DFC 002C2D3C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802C5E00 002C2D40  41 82 00 10 */	beq .L_802C5E10
/* 802C5E04 002C2D44  C0 02 E2 B8 */	lfs f0, lbl_8051C618@sda21(r2)
/* 802C5E08 002C2D48  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802C5E0C 002C2D4C  48 00 00 0C */	b .L_802C5E18
.L_802C5E10:
/* 802C5E10 002C2D50  C0 02 E2 BC */	lfs f0, lbl_8051C61C@sda21(r2)
/* 802C5E14 002C2D54  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802C5E18:
/* 802C5E18 002C2D58  C0 02 E2 C0 */	lfs f0, lbl_8051C620@sda21(r2)
/* 802C5E1C 002C2D5C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802C5E20 002C2D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C5E24 002C2D64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C5E28 002C2D68  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C5E2C 002C2D6C  7C 08 03 A6 */	mtlr r0
/* 802C5E30 002C2D70  38 21 00 10 */	addi r1, r1, 0x10
/* 802C5E34 002C2D74  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game10LeafChappy3ObjFv
initMouthSlots__Q34Game10LeafChappy3ObjFv:
/* 802C5E38 002C2D78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C5E3C 002C2D7C  7C 08 02 A6 */	mflr r0
/* 802C5E40 002C2D80  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C5E44 002C2D84  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802C5E48 002C2D88  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802C5E4C 002C2D8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C5E50 002C2D90  93 C1 00 08 */	stw r30, 8(r1)
/* 802C5E54 002C2D94  7C 7E 1B 78 */	mr r30, r3
/* 802C5E58 002C2D98  38 80 00 03 */	li r4, 3
/* 802C5E5C 002C2D9C  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 802C5E60 002C2DA0  4B E7 26 F9 */	bl alloc__10MouthSlotsFi
/* 802C5E64 002C2DA4  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802C5E68 002C2DA8  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 802C5E6C 002C2DAC  38 80 00 00 */	li r4, 0
/* 802C5E70 002C2DB0  38 C2 E2 C4 */	addi r6, r2, lbl_8051C624@sda21
/* 802C5E74 002C2DB4  4B E7 28 1D */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802C5E78 002C2DB8  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802C5E7C 002C2DBC  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 802C5E80 002C2DC0  38 80 00 01 */	li r4, 1
/* 802C5E84 002C2DC4  38 C2 E2 CC */	addi r6, r2, lbl_8051C62C@sda21
/* 802C5E88 002C2DC8  4B E7 28 09 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802C5E8C 002C2DCC  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802C5E90 002C2DD0  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 802C5E94 002C2DD4  38 80 00 02 */	li r4, 2
/* 802C5E98 002C2DD8  38 C2 E2 D4 */	addi r6, r2, lbl_8051C634@sda21
/* 802C5E9C 002C2DDC  4B E7 27 F5 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802C5EA0 002C2DE0  C3 E2 E2 BC */	lfs f31, lbl_8051C61C@sda21(r2)
/* 802C5EA4 002C2DE4  3B E0 00 00 */	li r31, 0
/* 802C5EA8 002C2DE8  48 00 00 18 */	b .L_802C5EC0
.L_802C5EAC:
/* 802C5EAC 002C2DEC  7F E4 FB 78 */	mr r4, r31
/* 802C5EB0 002C2DF0  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 802C5EB4 002C2DF4  4B E7 28 C5 */	bl getSlot__10MouthSlotsFi
/* 802C5EB8 002C2DF8  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 802C5EBC 002C2DFC  3B FF 00 01 */	addi r31, r31, 1
.L_802C5EC0:
/* 802C5EC0 002C2E00  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 802C5EC4 002C2E04  7C 1F 00 00 */	cmpw r31, r0
/* 802C5EC8 002C2E08  41 80 FF E4 */	blt .L_802C5EAC
/* 802C5ECC 002C2E0C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802C5ED0 002C2E10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C5ED4 002C2E14  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802C5ED8 002C2E18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C5EDC 002C2E1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C5EE0 002C2E20  7C 08 03 A6 */	mtlr r0
/* 802C5EE4 002C2E24  38 21 00 20 */	addi r1, r1, 0x20
/* 802C5EE8 002C2E28  4E 80 00 20 */	blr 

.global initWalkSmokeEffect__Q34Game10LeafChappy3ObjFv
initWalkSmokeEffect__Q34Game10LeafChappy3ObjFv:
/* 802C5EEC 002C2E2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C5EF0 002C2E30  7C 08 02 A6 */	mflr r0
/* 802C5EF4 002C2E34  38 80 00 02 */	li r4, 2
/* 802C5EF8 002C2E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C5EFC 002C2E3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C5F00 002C2E40  7C 7F 1B 78 */	mr r31, r3
/* 802C5F04 002C2E44  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802C5F08 002C2E48  4B E6 44 5D */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 802C5F0C 002C2E4C  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802C5F10 002C2E50  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802C5F14 002C2E54  C0 22 E2 B0 */	lfs f1, lbl_8051C610@sda21(r2)
/* 802C5F18 002C2E58  38 80 00 00 */	li r4, 0
/* 802C5F1C 002C2E5C  38 C2 E2 DC */	addi r6, r2, lbl_8051C63C@sda21
/* 802C5F20 002C2E60  4B E6 46 C1 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802C5F24 002C2E64  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802C5F28 002C2E68  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802C5F2C 002C2E6C  C0 22 E2 B0 */	lfs f1, lbl_8051C610@sda21(r2)
/* 802C5F30 002C2E70  38 80 00 01 */	li r4, 1
/* 802C5F34 002C2E74  38 C2 E2 E4 */	addi r6, r2, lbl_8051C644@sda21
/* 802C5F38 002C2E78  4B E6 46 A9 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802C5F3C 002C2E7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C5F40 002C2E80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C5F44 002C2E84  7C 08 03 A6 */	mtlr r0
/* 802C5F48 002C2E88  38 21 00 10 */	addi r1, r1, 0x10
/* 802C5F4C 002C2E8C  4E 80 00 20 */	blr 

.global doBecomeCarcass__Q34Game10LeafChappy3ObjFv
doBecomeCarcass__Q34Game10LeafChappy3ObjFv:
/* 802C5F50 002C2E90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C5F54 002C2E94  7C 08 02 A6 */	mflr r0
/* 802C5F58 002C2E98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C5F5C 002C2E9C  4B E3 BF 81 */	bl doBecomeCarcass__Q24Game9EnemyBaseFv
/* 802C5F60 002C2EA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C5F64 002C2EA4  7C 08 03 A6 */	mtlr r0
/* 802C5F68 002C2EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C5F6C 002C2EAC  4E 80 00 20 */	blr 

.global doUpdateCarcass__Q34Game10LeafChappy3ObjFv
doUpdateCarcass__Q34Game10LeafChappy3ObjFv:
/* 802C5F70 002C2EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C5F74 002C2EB4  7C 08 02 A6 */	mflr r0
/* 802C5F78 002C2EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C5F7C 002C2EBC  4B E3 BF 69 */	bl doUpdateCarcass__Q24Game9EnemyBaseFv
/* 802C5F80 002C2EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C5F84 002C2EC4  7C 08 03 A6 */	mtlr r0
/* 802C5F88 002C2EC8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C5F8C 002C2ECC  4E 80 00 20 */	blr 

.global doGetLifeGaugeParam__Q34Game10LeafChappy3ObjFRQ24Game14LifeGaugeParam
doGetLifeGaugeParam__Q34Game10LeafChappy3ObjFRQ24Game14LifeGaugeParam:
/* 802C5F90 002C2ED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C5F94 002C2ED4  7C 08 02 A6 */	mflr r0
/* 802C5F98 002C2ED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C5F9C 002C2EDC  4B E3 FF 55 */	bl doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
/* 802C5FA0 002C2EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C5FA4 002C2EE4  7C 08 03 A6 */	mtlr r0
/* 802C5FA8 002C2EE8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C5FAC 002C2EEC  4E 80 00 20 */	blr 

.global birthChildren__Q34Game10LeafChappy3ObjFRQ24Game13EnemyBirthArg
birthChildren__Q34Game10LeafChappy3ObjFRQ24Game13EnemyBirthArg:
/* 802C5FB0 002C2EF0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802C5FB4 002C2EF4  7C 08 02 A6 */	mflr r0
/* 802C5FB8 002C2EF8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802C5FBC 002C2EFC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802C5FC0 002C2F00  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802C5FC4 002C2F04  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802C5FC8 002C2F08  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802C5FCC 002C2F0C  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802C5FD0 002C2F10  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802C5FD4 002C2F14  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802C5FD8 002C2F18  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802C5FDC 002C2F1C  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802C5FE0 002C2F20  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802C5FE4 002C2F24  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802C5FE8 002C2F28  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802C5FEC 002C2F2C  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802C5FF0 002C2F30  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802C5FF4 002C2F34  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 802C5FF8 002C2F38  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 802C5FFC 002C2F3C  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 802C6000 002C2F40  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 802C6004 002C2F44  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 802C6008 002C2F48  C0 42 E2 EC */	lfs f2, lbl_8051C64C@sda21(r2)
/* 802C600C 002C2F4C  7C 7F 1B 78 */	mr r31, r3
/* 802C6010 002C2F50  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 802C6014 002C2F54  C0 02 E2 98 */	lfs f0, lbl_8051C5F8@sda21(r2)
/* 802C6018 002C2F58  EC 62 08 2A */	fadds f3, f2, f1
/* 802C601C 002C2F5C  C3 64 00 00 */	lfs f27, 0(r4)
/* 802C6020 002C2F60  C3 44 00 04 */	lfs f26, 4(r4)
/* 802C6024 002C2F64  C3 24 00 08 */	lfs f25, 8(r4)
/* 802C6028 002C2F68  FC 20 18 90 */	fmr f1, f3
/* 802C602C 002C2F6C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802C6030 002C2F70  40 80 00 08 */	bge .L_802C6038
/* 802C6034 002C2F74  FC 20 18 50 */	fneg f1, f3
.L_802C6038:
/* 802C6038 002C2F78  C0 42 E2 F0 */	lfs f2, lbl_8051C650@sda21(r2)
/* 802C603C 002C2F7C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C6040 002C2F80  C0 02 E2 98 */	lfs f0, lbl_8051C5F8@sda21(r2)
/* 802C6044 002C2F84  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802C6048 002C2F88  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802C604C 002C2F8C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802C6050 002C2F90  FC 00 08 1E */	fctiwz f0, f1
/* 802C6054 002C2F94  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802C6058 002C2F98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C605C 002C2F9C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C6060 002C2FA0  7C 64 02 14 */	add r3, r4, r0
/* 802C6064 002C2FA4  C3 83 00 04 */	lfs f28, 4(r3)
/* 802C6068 002C2FA8  40 80 00 28 */	bge .L_802C6090
/* 802C606C 002C2FAC  C0 02 E2 F4 */	lfs f0, lbl_8051C654@sda21(r2)
/* 802C6070 002C2FB0  EC 03 00 32 */	fmuls f0, f3, f0
/* 802C6074 002C2FB4  FC 00 00 1E */	fctiwz f0, f0
/* 802C6078 002C2FB8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802C607C 002C2FBC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802C6080 002C2FC0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C6084 002C2FC4  7C 04 04 2E */	lfsx f0, r4, r0
/* 802C6088 002C2FC8  FF A0 00 50 */	fneg f29, f0
/* 802C608C 002C2FCC  48 00 00 1C */	b .L_802C60A8
.L_802C6090:
/* 802C6090 002C2FD0  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802C6094 002C2FD4  FC 00 00 1E */	fctiwz f0, f0
/* 802C6098 002C2FD8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802C609C 002C2FDC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802C60A0 002C2FE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C60A4 002C2FE4  7F A4 04 2E */	lfsx f29, r4, r0
.L_802C60A8:
/* 802C60A8 002C2FE8  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 802C60AC 002C2FEC  3C 60 80 4B */	lis r3, __vt__Q24Game11PikiInitArg@ha
/* 802C60B0 002C2FF0  C3 C2 E2 9C */	lfs f30, lbl_8051C5FC@sda21(r2)
/* 802C60B4 002C2FF4  3B A4 A2 F4 */	addi r29, r4, __vt__Q24Game15CreatureInitArg@l
/* 802C60B8 002C2FF8  CB E2 E2 A0 */	lfd f31, lbl_8051C600@sda21(r2)
/* 802C60BC 002C2FFC  3B C3 10 F4 */	addi r30, r3, __vt__Q24Game11PikiInitArg@l
/* 802C60C0 002C3000  C2 E2 E2 F8 */	lfs f23, lbl_8051C658@sda21(r2)
/* 802C60C4 002C3004  3B 60 00 00 */	li r27, 0
/* 802C60C8 002C3008  C3 02 E2 98 */	lfs f24, lbl_8051C5F8@sda21(r2)
/* 802C60CC 002C300C  3F 80 43 30 */	lis r28, 0x4330
.L_802C60D0:
/* 802C60D0 002C3010  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 802C60D4 002C3014  93 81 00 30 */	stw r28, 0x30(r1)
/* 802C60D8 002C3018  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802C60DC 002C301C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802C60E0 002C3020  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802C60E4 002C3024  D3 01 00 18 */	stfs f24, 0x18(r1)
/* 802C60E8 002C3028  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802C60EC 002C302C  EC 1E B8 3A */	fmadds f0, f30, f0, f23
/* 802C60F0 002C3030  EC 20 07 72 */	fmuls f1, f0, f29
/* 802C60F4 002C3034  EC 00 07 32 */	fmuls f0, f0, f28
/* 802C60F8 002C3038  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802C60FC 002C303C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802C6100 002C3040  81 83 00 00 */	lwz r12, 0(r3)
/* 802C6104 002C3044  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802C6108 002C3048  7D 89 03 A6 */	mtctr r12
/* 802C610C 002C304C  4E 80 04 21 */	bctrl 
/* 802C6110 002C3050  38 00 00 00 */	li r0, 0
/* 802C6114 002C3054  93 A1 00 08 */	stw r29, 8(r1)
/* 802C6118 002C3058  38 80 FF FF */	li r4, -1
/* 802C611C 002C305C  7C 7A 1B 79 */	or. r26, r3, r3
/* 802C6120 002C3060  90 01 00 10 */	stw r0, 0x10(r1)
/* 802C6124 002C3064  93 C1 00 08 */	stw r30, 8(r1)
/* 802C6128 002C3068  90 81 00 0C */	stw r4, 0xc(r1)
/* 802C612C 002C306C  93 E1 00 10 */	stw r31, 0x10(r1)
/* 802C6130 002C3070  41 82 00 5C */	beq .L_802C618C
/* 802C6134 002C3074  38 81 00 08 */	addi r4, r1, 8
/* 802C6138 002C3078  4B E7 4E 91 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802C613C 002C307C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802C6140 002C3080  38 81 00 14 */	addi r4, r1, 0x14
/* 802C6144 002C3084  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802C6148 002C3088  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802C614C 002C308C  EC 42 D8 2A */	fadds f2, f2, f27
/* 802C6150 002C3090  EC 21 D0 2A */	fadds f1, f1, f26
/* 802C6154 002C3094  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802C6158 002C3098  EC 00 C8 2A */	fadds f0, f0, f25
/* 802C615C 002C309C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802C6160 002C30A0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802C6164 002C30A4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802C6168 002C30A8  81 83 00 04 */	lwz r12, 4(r3)
/* 802C616C 002C30AC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802C6170 002C30B0  7D 89 03 A6 */	mtctr r12
/* 802C6174 002C30B4  4E 80 04 21 */	bctrl 
/* 802C6178 002C30B8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802C617C 002C30BC  7F 43 D3 78 */	mr r3, r26
/* 802C6180 002C30C0  38 81 00 14 */	addi r4, r1, 0x14
/* 802C6184 002C30C4  38 A0 00 00 */	li r5, 0
/* 802C6188 002C30C8  4B E7 50 21 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_802C618C:
/* 802C618C 002C30CC  3B 7B 00 01 */	addi r27, r27, 1
/* 802C6190 002C30D0  2C 1B 00 0A */	cmpwi r27, 0xa
/* 802C6194 002C30D4  41 80 FF 3C */	blt .L_802C60D0
/* 802C6198 002C30D8  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802C619C 002C30DC  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802C61A0 002C30E0  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802C61A4 002C30E4  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802C61A8 002C30E8  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802C61AC 002C30EC  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802C61B0 002C30F0  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802C61B4 002C30F4  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802C61B8 002C30F8  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802C61BC 002C30FC  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802C61C0 002C3100  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802C61C4 002C3104  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802C61C8 002C3108  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 802C61CC 002C310C  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 802C61D0 002C3110  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 802C61D4 002C3114  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 802C61D8 002C3118  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 802C61DC 002C311C  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 802C61E0 002C3120  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 802C61E4 002C3124  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802C61E8 002C3128  7C 08 03 A6 */	mtlr r0
/* 802C61EC 002C312C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802C61F0 002C3130  4E 80 00 20 */	blr 

.global startEnemyRumble__Q34Game10LeafChappy3ObjFv
startEnemyRumble__Q34Game10LeafChappy3ObjFv:
/* 802C61F4 002C3134  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C61F8 002C3138  7C 08 02 A6 */	mflr r0
/* 802C61FC 002C313C  38 82 E2 A8 */	addi r4, r2, lbl_8051C608@sda21
/* 802C6200 002C3140  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C6204 002C3144  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802C6208 002C3148  7C 7F 1B 78 */	mr r31, r3
/* 802C620C 002C314C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802C6210 002C3150  48 17 8D D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802C6214 002C3154  48 16 36 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802C6218 002C3158  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802C621C 002C315C  38 A1 00 08 */	addi r5, r1, 8
/* 802C6220 002C3160  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802C6224 002C3164  38 80 00 08 */	li r4, 8
/* 802C6228 002C3168  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802C622C 002C316C  38 C0 00 02 */	li r6, 2
/* 802C6230 002C3170  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802C6234 002C3174  D0 01 00 08 */	stfs f0, 8(r1)
/* 802C6238 002C3178  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802C623C 002C317C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802C6240 002C3180  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802C6244 002C3184  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802C6248 002C3188  4B F8 D5 39 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802C624C 002C318C  C0 22 E2 FC */	lfs f1, lbl_8051C65C@sda21(r2)
/* 802C6250 002C3190  7F E3 FB 78 */	mr r3, r31
/* 802C6254 002C3194  38 81 00 08 */	addi r4, r1, 8
/* 802C6258 002C3198  4B E3 D8 F9 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802C625C 002C319C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C6260 002C31A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802C6264 002C31A4  7C 08 03 A6 */	mtlr r0
/* 802C6268 002C31A8  38 21 00 20 */	addi r1, r1, 0x20
/* 802C626C 002C31AC  4E 80 00 20 */	blr 

.global createFootmarks__Q34Game10LeafChappy3ObjFv
createFootmarks__Q34Game10LeafChappy3ObjFv:
/* 802C6270 002C31B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C6274 002C31B4  7C 08 02 A6 */	mflr r0
/* 802C6278 002C31B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C627C 002C31BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C6280 002C31C0  7C 7F 1B 78 */	mr r31, r3
/* 802C6284 002C31C4  38 60 00 20 */	li r3, 0x20
/* 802C6288 002C31C8  4B D5 DC 1D */	bl __nw__FUl
/* 802C628C 002C31CC  7C 60 1B 79 */	or. r0, r3, r3
/* 802C6290 002C31D0  41 82 00 0C */	beq .L_802C629C
/* 802C6294 002C31D4  4B EE E5 1D */	bl __ct__Q24Game9FootmarksFv
/* 802C6298 002C31D8  7C 60 1B 78 */	mr r0, r3
.L_802C629C:
/* 802C629C 002C31DC  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 802C62A0 002C31E0  38 80 00 0A */	li r4, 0xa
/* 802C62A4 002C31E4  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802C62A8 002C31E8  4B EE E5 25 */	bl alloc__Q24Game9FootmarksFi
/* 802C62AC 002C31EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C62B0 002C31F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C62B4 002C31F4  7C 08 03 A6 */	mtlr r0
/* 802C62B8 002C31F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C62BC 002C31FC  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game10LeafChappy3ObjFv
getDownSmokeScale__Q34Game10LeafChappy3ObjFv: # weak function
/* 802C62C0 002C3200  C0 22 E3 00 */	lfs f1, lbl_8051C660@sda21(r2)
/* 802C62C4 002C3204  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10LeafChappy3ObjFv
getEnemyTypeID__Q34Game10LeafChappy3ObjFv: # weak function
/* 802C62C8 002C3208  38 60 00 43 */	li r3, 0x43
/* 802C62CC 002C320C  4E 80 00 20 */	blr 

.global createChappyRelation__Q34Game10LeafChappy3ObjFv
createChappyRelation__Q34Game10LeafChappy3ObjFv: # weak function
/* 802C62D0 002C3210  4E 80 00 20 */	blr 

.global resetChappyRelation__Q34Game10LeafChappy3ObjFv
resetChappyRelation__Q34Game10LeafChappy3ObjFv: # weak function
/* 802C62D4 002C3214  4E 80 00 20 */	blr 

.global getChappyRelation__Q34Game10LeafChappy3ObjFv
getChappyRelation__Q34Game10LeafChappy3ObjFv: # weak function
/* 802C62D8 002C3218  38 60 00 00 */	li r3, 0
/* 802C62DC 002C321C  4E 80 00 20 */	blr 

.global getFootmarks__Q34Game10LeafChappy3ObjFv
getFootmarks__Q34Game10LeafChappy3ObjFv: # weak function
/* 802C62E0 002C3220  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802C62E4 002C3224  4E 80 00 20 */	blr 
