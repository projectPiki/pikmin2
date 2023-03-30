.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q24Game14ChappyRelation, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game14ChappyRelationFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game14ChappyRelation
.obj __vt__Q34Game10KumaChappy3Obj, global
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
	.4byte doDirectDraw__Q34Game10KumaChappy3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game10KumaChappy3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game10KumaChappy3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10KumaChappy3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q34Game10KumaChappy3ObjFv
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
	.4byte initMouthSlots__Q34Game10KumaChappy3ObjFv
	.4byte initWalkSmokeEffect__Q34Game10KumaChappy3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game10KumaChappy3ObjFv
	.4byte getMouthSlots__Q34Game10KumaChappy3ObjFv
	.4byte doGetLifeGaugeParam__Q34Game10KumaChappy3ObjFRQ24Game14LifeGaugeParam
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
	.4byte doBecomeCarcass__Q34Game10KumaChappy3ObjFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10KumaChappy3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM
	.4byte createChappyRelation__Q34Game10KumaChappy3ObjFv
	.4byte getChappyRelation__Q34Game10KumaChappy3ObjFv
	.4byte startEnemyRumble__Q34Game10KumaChappy3ObjFv
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
.endobj __vt__Q34Game10KumaChappy3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051BB68, local
	.float 0.0
.endobj lbl_8051BB68
.balign 4
.obj lbl_8051BB6C, local
	.asciz "ago"
.endobj lbl_8051BB6C
.balign 4
.obj lbl_8051BB70, local
	.float 17.5
.endobj lbl_8051BB70
.obj lbl_8051BB74, local
	.float 5.0
.endobj lbl_8051BB74
.obj lbl_8051BB78, local
	.float 1.0
.endobj lbl_8051BB78
.obj lbl_8051BB7C, local
	.float 100.0
.endobj lbl_8051BB7C
.obj lbl_8051BB80, local
	.float 75.0
.endobj lbl_8051BB80
.obj lbl_8051BB84, local
	.float 30.0
.endobj lbl_8051BB84
.obj lbl_8051BB88, local
	.float 0.1
.endobj lbl_8051BB88
.balign 4
.obj lbl_8051BB8C, local
	.asciz "kamu1"
.endobj lbl_8051BB8C
.balign 4
.obj lbl_8051BB94, local
	.asciz "kamu2"
.endobj lbl_8051BB94
.balign 4
.obj lbl_8051BB9C, local
	.asciz "kamu3"
.endobj lbl_8051BB9C
.balign 4
.obj lbl_8051BBA4, local
	.asciz "kamu4"
.endobj lbl_8051BBA4
.balign 4
.obj lbl_8051BBAC, local
	.asciz "kamu5"
.endobj lbl_8051BBAC
.balign 4
.obj lbl_8051BBB4, local
	.float 35.0
.endobj lbl_8051BBB4
.balign 4
.obj lbl_8051BBB8, local
	.asciz "asiL"
.endobj lbl_8051BBB8
.balign 4
.obj lbl_8051BBC0, local
	.float 10.0
.endobj lbl_8051BBC0
.balign 4
.obj lbl_8051BBC4, local
	.asciz "asiR"
.endobj lbl_8051BBC4
.balign 4
.obj lbl_8051BBCC, local
	.float 50.0
.endobj lbl_8051BBCC
.obj lbl_8051BBD0, local
	.float 180.0
.endobj lbl_8051BBD0
.obj lbl_8051BBD4, local
	.float 32768.0
.endobj lbl_8051BBD4
.balign 8
.obj lbl_8051BBD8, local
	.8byte 0x4330000080000000
.endobj lbl_8051BBD8
.obj lbl_8051BBE0, local
	.float 325.9493
.endobj lbl_8051BBE0
.obj lbl_8051BBE4, local
	.float -325.9493
.endobj lbl_8051BBE4
.obj lbl_8051BBE8, local
	.float 0.75
.endobj lbl_8051BBE8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game10KumaChappy3ObjFv, global
/* 802996A0 002965E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802996A4 002965E4  7C 08 02 A6 */	mflr r0
/* 802996A8 002965E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802996AC 002965EC  7C 80 07 35 */	extsh. r0, r4
/* 802996B0 002965F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802996B4 002965F4  7C 7F 1B 78 */	mr r31, r3
/* 802996B8 002965F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802996BC 002965FC  41 82 00 24 */	beq .L_802996E0
/* 802996C0 00296600  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802996C4 00296604  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802996C8 00296608  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802996CC 0029660C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802996D0 00296610  38 00 00 00 */	li r0, 0
/* 802996D4 00296614  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802996D8 00296618  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 802996DC 0029661C  90 1F 03 00 */	stw r0, 0x300(r31)
.L_802996E0:
/* 802996E0 00296620  7F E3 FB 78 */	mr r3, r31
/* 802996E4 00296624  38 80 00 00 */	li r4, 0
/* 802996E8 00296628  4B E6 7C B9 */	bl __ct__Q24Game9EnemyBaseFv
/* 802996EC 0029662C  3C 60 80 4D */	lis r3, __vt__Q34Game10KumaChappy3Obj@ha
/* 802996F0 00296630  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802996F4 00296634  38 A3 BC A0 */	addi r5, r3, __vt__Q34Game10KumaChappy3Obj@l
/* 802996F8 00296638  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802996FC 0029663C  90 BF 00 00 */	stw r5, 0(r31)
/* 80299700 00296640  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80299704 00296644  38 A5 03 08 */	addi r5, r5, 0x308
/* 80299708 00296648  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8029970C 0029664C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80299710 00296650  90 A4 00 00 */	stw r5, 0(r4)
/* 80299714 00296654  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80299718 00296658  7C 04 00 50 */	subf r0, r4, r0
/* 8029971C 0029665C  90 04 00 0C */	stw r0, 0xc(r4)
/* 80299720 00296660  4B E9 0C 35 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 80299724 00296664  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 80299728 00296668  4B E9 EE 21 */	bl __ct__10MouthSlotsFv
/* 8029972C 0029666C  38 60 00 2C */	li r3, 0x2c
/* 80299730 00296670  4B D8 A7 75 */	bl __nw__FUl
/* 80299734 00296674  7C 7E 1B 79 */	or. r30, r3, r3
/* 80299738 00296678  41 82 00 44 */	beq .L_8029977C
/* 8029973C 0029667C  4B E8 E2 39 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80299740 00296680  3C 60 80 4D */	lis r3, __vt__Q34Game10KumaChappy14ProperAnimator@ha
/* 80299744 00296684  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80299748 00296688  38 03 BB 78 */	addi r0, r3, __vt__Q34Game10KumaChappy14ProperAnimator@l
/* 8029974C 0029668C  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80299750 00296690  90 1E 00 00 */	stw r0, 0(r30)
/* 80299754 00296694  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80299758 00296698  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8029975C 0029669C  38 00 00 00 */	li r0, 0
/* 80299760 002966A0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80299764 002966A4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80299768 002966A8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8029976C 002966AC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80299770 002966B0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80299774 002966B4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80299778 002966B8  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8029977C:
/* 8029977C 002966BC  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80299780 002966C0  38 60 00 1C */	li r3, 0x1c
/* 80299784 002966C4  4B D8 A7 21 */	bl __nw__FUl
/* 80299788 002966C8  7C 64 1B 79 */	or. r4, r3, r3
/* 8029978C 002966CC  41 82 00 24 */	beq .L_802997B0
/* 80299790 002966D0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80299794 002966D4  3C 60 80 4D */	lis r3, __vt__Q34Game10KumaChappy3FSM@ha
/* 80299798 002966D8  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8029979C 002966DC  38 A0 FF FF */	li r5, -1
/* 802997A0 002966E0  90 04 00 00 */	stw r0, 0(r4)
/* 802997A4 002966E4  38 03 BB 50 */	addi r0, r3, __vt__Q34Game10KumaChappy3FSM@l
/* 802997A8 002966E8  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802997AC 002966EC  90 04 00 00 */	stw r0, 0(r4)
.L_802997B0:
/* 802997B0 002966F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802997B4 002966F4  7F E3 FB 78 */	mr r3, r31
/* 802997B8 002966F8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802997BC 002966FC  7D 89 03 A6 */	mtctr r12
/* 802997C0 00296700  4E 80 04 21 */	bctrl 
/* 802997C4 00296704  7F E3 FB 78 */	mr r3, r31
/* 802997C8 00296708  81 9F 00 00 */	lwz r12, 0(r31)
/* 802997CC 0029670C  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 802997D0 00296710  7D 89 03 A6 */	mtctr r12
/* 802997D4 00296714  4E 80 04 21 */	bctrl 
/* 802997D8 00296718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802997DC 0029671C  7F E3 FB 78 */	mr r3, r31
/* 802997E0 00296720  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802997E4 00296724  83 C1 00 08 */	lwz r30, 8(r1)
/* 802997E8 00296728  7C 08 03 A6 */	mtlr r0
/* 802997EC 0029672C  38 21 00 10 */	addi r1, r1, 0x10
/* 802997F0 00296730  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KumaChappy3ObjFv

.fn setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802997F4 00296734  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game10KumaChappy3ObjFPQ24Game15CreatureInitArg, global
/* 802997F8 00296738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802997FC 0029673C  7C 08 02 A6 */	mflr r0
/* 80299800 00296740  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299804 00296744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299808 00296748  7C 7F 1B 78 */	mr r31, r3
/* 8029980C 0029674C  4B E6 82 4D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80299810 00296750  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80299814 00296754  38 00 FF FF */	li r0, -1
/* 80299818 00296758  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 8029981C 0029675C  7F E3 FB 78 */	mr r3, r31
/* 80299820 00296760  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 80299824 00296764  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80299828 00296768  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8029982C 0029676C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 80299830 00296770  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80299834 00296774  48 00 06 BD */	bl resetWayPoint__Q34Game10KumaChappy3ObjFv
/* 80299838 00296778  7F E3 FB 78 */	mr r3, r31
/* 8029983C 0029677C  48 00 06 C5 */	bl setNearestWayPoint__Q34Game10KumaChappy3ObjFv
/* 80299840 00296780  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80299844 00296784  7F E4 FB 78 */	mr r4, r31
/* 80299848 00296788  38 A0 00 06 */	li r5, 6
/* 8029984C 0029678C  38 C0 00 00 */	li r6, 0
/* 80299850 00296790  81 83 00 00 */	lwz r12, 0(r3)
/* 80299854 00296794  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80299858 00296798  7D 89 03 A6 */	mtctr r12
/* 8029985C 0029679C  4E 80 04 21 */	bctrl 
/* 80299860 002967A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299864 002967A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80299868 002967A8  7C 08 03 A6 */	mtlr r0
/* 8029986C 002967AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80299870 002967B0  4E 80 00 20 */	blr 
.endfn onInit__Q34Game10KumaChappy3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game10KumaChappy3ObjFv, global
/* 80299874 002967B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299878 002967B8  7C 08 02 A6 */	mflr r0
/* 8029987C 002967BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299880 002967C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299884 002967C4  7C 7F 1B 78 */	mr r31, r3
/* 80299888 002967C8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8029988C 002967CC  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 80299890 002967D0  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80299894 002967D4  EC 01 00 2A */	fadds f0, f1, f0
/* 80299898 002967D8  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8029989C 002967DC  48 00 09 E1 */	bl updateTargetDistance__Q34Game10KumaChappy3ObjFv
/* 802998A0 002967E0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802998A4 002967E4  7F E4 FB 78 */	mr r4, r31
/* 802998A8 002967E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802998AC 002967EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802998B0 002967F0  7D 89 03 A6 */	mtctr r12
/* 802998B4 002967F4  4E 80 04 21 */	bctrl 
/* 802998B8 002967F8  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 802998BC 002967FC  4B E9 ED 71 */	bl update__10MouthSlotsFv
/* 802998C0 00296800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802998C4 00296804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802998C8 00296808  7C 08 03 A6 */	mtlr r0
/* 802998CC 0029680C  38 21 00 10 */	addi r1, r1, 0x10
/* 802998D0 00296810  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game10KumaChappy3ObjFv

.fn doDirectDraw__Q34Game10KumaChappy3ObjFR8Graphics, global
/* 802998D4 00296814  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10KumaChappy3ObjFR8Graphics

.fn doDebugDraw__Q34Game10KumaChappy3ObjFR8Graphics, global
/* 802998D8 00296818  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802998DC 0029681C  7C 08 02 A6 */	mflr r0
/* 802998E0 00296820  90 01 00 14 */	stw r0, 0x14(r1)
/* 802998E4 00296824  4B E6 C5 89 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802998E8 00296828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802998EC 0029682C  7C 08 03 A6 */	mtlr r0
/* 802998F0 00296830  38 21 00 10 */	addi r1, r1, 0x10
/* 802998F4 00296834  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game10KumaChappy3ObjFR8Graphics

.fn setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM, global
/* 802998F8 00296838  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802998FC 0029683C  7C 08 02 A6 */	mflr r0
/* 80299900 00296840  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299904 00296844  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299908 00296848  7C 7F 1B 78 */	mr r31, r3
/* 8029990C 0029684C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80299910 00296850  7F E4 FB 78 */	mr r4, r31
/* 80299914 00296854  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80299918 00296858  81 83 00 00 */	lwz r12, 0(r3)
/* 8029991C 0029685C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80299920 00296860  7D 89 03 A6 */	mtctr r12
/* 80299924 00296864  4E 80 04 21 */	bctrl 
/* 80299928 00296868  38 00 00 00 */	li r0, 0
/* 8029992C 0029686C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80299930 00296870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299934 00296874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80299938 00296878  7C 08 03 A6 */	mtlr r0
/* 8029993C 0029687C  38 21 00 10 */	addi r1, r1, 0x10
/* 80299940 00296880  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM

.fn getShadowParam__Q34Game10KumaChappy3ObjFRQ24Game11ShadowParam, global
/* 80299944 00296884  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299948 00296888  7C 08 02 A6 */	mflr r0
/* 8029994C 0029688C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299950 00296890  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299954 00296894  7C 9F 23 78 */	mr r31, r4
/* 80299958 00296898  38 82 D8 0C */	addi r4, r2, lbl_8051BB6C@sda21
/* 8029995C 0029689C  93 C1 00 08 */	stw r30, 8(r1)
/* 80299960 002968A0  7C 7E 1B 78 */	mr r30, r3
/* 80299964 002968A4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80299968 002968A8  48 1A 56 7D */	bl getJoint__Q28SysShape5ModelFPc
/* 8029996C 002968AC  48 18 FF 35 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80299970 002968B0  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 80299974 002968B4  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80299978 002968B8  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8029997C 002968BC  C0 02 D8 10 */	lfs f0, lbl_8051BB70@sda21(r2)
/* 80299980 002968C0  D0 3F 00 00 */	stfs f1, 0(r31)
/* 80299984 002968C4  C0 42 D8 14 */	lfs f2, lbl_8051BB74@sda21(r2)
/* 80299988 002968C8  D0 7F 00 04 */	stfs f3, 4(r31)
/* 8029998C 002968CC  D0 9F 00 08 */	stfs f4, 8(r31)
/* 80299990 002968D0  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80299994 002968D4  EC 01 00 28 */	fsubs f0, f1, f0
/* 80299998 002968D8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8029999C 002968DC  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 802999A0 002968E0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 802999A4 002968E4  EC 22 08 2A */	fadds f1, f2, f1
/* 802999A8 002968E8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802999AC 002968EC  40 80 00 08 */	bge .L_802999B4
/* 802999B0 002968F0  D0 3F 00 04 */	stfs f1, 4(r31)
.L_802999B4:
/* 802999B4 002968F4  C0 22 D8 08 */	lfs f1, lbl_8051BB68@sda21(r2)
/* 802999B8 002968F8  C0 02 D8 18 */	lfs f0, lbl_8051BB78@sda21(r2)
/* 802999BC 002968FC  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802999C0 00296900  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802999C4 00296904  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802999C8 00296908  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802999CC 0029690C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802999D0 00296910  41 82 00 10 */	beq .L_802999E0
/* 802999D4 00296914  C0 02 D8 1C */	lfs f0, lbl_8051BB7C@sda21(r2)
/* 802999D8 00296918  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802999DC 0029691C  48 00 00 0C */	b .L_802999E8
.L_802999E0:
/* 802999E0 00296920  C0 02 D8 20 */	lfs f0, lbl_8051BB80@sda21(r2)
/* 802999E4 00296924  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802999E8:
/* 802999E8 00296928  C0 02 D8 24 */	lfs f0, lbl_8051BB84@sda21(r2)
/* 802999EC 0029692C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802999F0 00296930  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802999F4 00296934  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802999F8 00296938  83 C1 00 08 */	lwz r30, 8(r1)
/* 802999FC 0029693C  7C 08 03 A6 */	mtlr r0
/* 80299A00 00296940  38 21 00 10 */	addi r1, r1, 0x10
/* 80299A04 00296944  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game10KumaChappy3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game10KumaChappy3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80299A08 00296948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299A0C 0029694C  7C 08 02 A6 */	mflr r0
/* 80299A10 00296950  28 05 00 00 */	cmplwi r5, 0
/* 80299A14 00296954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299A18 00296958  40 82 00 0C */	bne .L_80299A24
/* 80299A1C 0029695C  C0 02 D8 28 */	lfs f0, lbl_8051BB88@sda21(r2)
/* 80299A20 00296960  EC 21 00 32 */	fmuls f1, f1, f0
.L_80299A24:
/* 80299A24 00296964  C0 42 D8 18 */	lfs f2, lbl_8051BB78@sda21(r2)
/* 80299A28 00296968  4B E6 C6 05 */	bl addDamage__Q24Game9EnemyBaseFff
/* 80299A2C 0029696C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299A30 00296970  38 60 00 01 */	li r3, 1
/* 80299A34 00296974  7C 08 03 A6 */	mtlr r0
/* 80299A38 00296978  38 21 00 10 */	addi r1, r1, 0x10
/* 80299A3C 0029697C  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game10KumaChappy3ObjFPQ24Game8CreaturefP8CollPart

.fn startCarcassMotion__Q34Game10KumaChappy3ObjFv, global
/* 80299A40 00296980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299A44 00296984  7C 08 02 A6 */	mflr r0
/* 80299A48 00296988  38 80 00 04 */	li r4, 4
/* 80299A4C 0029698C  38 A0 00 00 */	li r5, 0
/* 80299A50 00296990  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299A54 00296994  4B E6 B5 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80299A58 00296998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299A5C 0029699C  7C 08 03 A6 */	mtlr r0
/* 80299A60 002969A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80299A64 002969A4  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game10KumaChappy3ObjFv

.fn getOffsetForMapCollision__Q34Game10KumaChappy3ObjFv, global
/* 80299A68 002969A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299A6C 002969AC  7C 08 02 A6 */	mflr r0
/* 80299A70 002969B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299A74 002969B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299A78 002969B8  7C 9F 23 78 */	mr r31, r4
/* 80299A7C 002969BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80299A80 002969C0  7C 7E 1B 78 */	mr r30, r3
/* 80299A84 002969C4  7F E3 FB 78 */	mr r3, r31
/* 80299A88 002969C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80299A8C 002969CC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80299A90 002969D0  7D 89 03 A6 */	mtctr r12
/* 80299A94 002969D4  4E 80 04 21 */	bctrl 
/* 80299A98 002969D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80299A9C 002969DC  41 82 00 24 */	beq .L_80299AC0
/* 80299AA0 002969E0  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80299AA4 002969E4  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 80299AA8 002969E8  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80299AAC 002969EC  C0 03 00 04 */	lfs f0, 4(r3)
/* 80299AB0 002969F0  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80299AB4 002969F4  C0 03 00 08 */	lfs f0, 8(r3)
/* 80299AB8 002969F8  D0 1E 00 08 */	stfs f0, 8(r30)
/* 80299ABC 002969FC  48 00 00 3C */	b .L_80299AF8
.L_80299AC0:
/* 80299AC0 00296A00  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80299AC4 00296A04  38 82 D8 0C */	addi r4, r2, lbl_8051BB6C@sda21
/* 80299AC8 00296A08  48 1A 55 1D */	bl getJoint__Q28SysShape5ModelFPc
/* 80299ACC 00296A0C  48 18 FD D5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80299AD0 00296A10  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 80299AD4 00296A14  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80299AD8 00296A18  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80299ADC 00296A1C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80299AE0 00296A20  EC 42 00 28 */	fsubs f2, f2, f0
/* 80299AE4 00296A24  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 80299AE8 00296A28  EC 63 08 28 */	fsubs f3, f3, f1
/* 80299AEC 00296A2C  D0 5E 00 00 */	stfs f2, 0(r30)
/* 80299AF0 00296A30  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80299AF4 00296A34  D0 7E 00 08 */	stfs f3, 8(r30)
.L_80299AF8:
/* 80299AF8 00296A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299AFC 00296A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80299B00 00296A40  83 C1 00 08 */	lwz r30, 8(r1)
/* 80299B04 00296A44  7C 08 03 A6 */	mtlr r0
/* 80299B08 00296A48  38 21 00 10 */	addi r1, r1, 0x10
/* 80299B0C 00296A4C  4E 80 00 20 */	blr 
.endfn getOffsetForMapCollision__Q34Game10KumaChappy3ObjFv

.fn initMouthSlots__Q34Game10KumaChappy3ObjFv, global
/* 80299B10 00296A50  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80299B14 00296A54  7C 08 02 A6 */	mflr r0
/* 80299B18 00296A58  90 01 00 24 */	stw r0, 0x24(r1)
/* 80299B1C 00296A5C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80299B20 00296A60  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80299B24 00296A64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299B28 00296A68  93 C1 00 08 */	stw r30, 8(r1)
/* 80299B2C 00296A6C  7C 7E 1B 78 */	mr r30, r3
/* 80299B30 00296A70  38 80 00 05 */	li r4, 5
/* 80299B34 00296A74  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299B38 00296A78  4B E9 EA 21 */	bl alloc__10MouthSlotsFi
/* 80299B3C 00296A7C  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80299B40 00296A80  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299B44 00296A84  38 80 00 00 */	li r4, 0
/* 80299B48 00296A88  38 C2 D8 2C */	addi r6, r2, lbl_8051BB8C@sda21
/* 80299B4C 00296A8C  4B E9 EB 45 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80299B50 00296A90  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80299B54 00296A94  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299B58 00296A98  38 80 00 01 */	li r4, 1
/* 80299B5C 00296A9C  38 C2 D8 34 */	addi r6, r2, lbl_8051BB94@sda21
/* 80299B60 00296AA0  4B E9 EB 31 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80299B64 00296AA4  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80299B68 00296AA8  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299B6C 00296AAC  38 80 00 02 */	li r4, 2
/* 80299B70 00296AB0  38 C2 D8 3C */	addi r6, r2, lbl_8051BB9C@sda21
/* 80299B74 00296AB4  4B E9 EB 1D */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80299B78 00296AB8  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80299B7C 00296ABC  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299B80 00296AC0  38 80 00 03 */	li r4, 3
/* 80299B84 00296AC4  38 C2 D8 44 */	addi r6, r2, lbl_8051BBA4@sda21
/* 80299B88 00296AC8  4B E9 EB 09 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80299B8C 00296ACC  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80299B90 00296AD0  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299B94 00296AD4  38 80 00 04 */	li r4, 4
/* 80299B98 00296AD8  38 C2 D8 4C */	addi r6, r2, lbl_8051BBAC@sda21
/* 80299B9C 00296ADC  4B E9 EA F5 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80299BA0 00296AE0  C3 E2 D8 54 */	lfs f31, lbl_8051BBB4@sda21(r2)
/* 80299BA4 00296AE4  3B E0 00 00 */	li r31, 0
/* 80299BA8 00296AE8  48 00 00 18 */	b .L_80299BC0
.L_80299BAC:
/* 80299BAC 00296AEC  7F E4 FB 78 */	mr r4, r31
/* 80299BB0 00296AF0  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80299BB4 00296AF4  4B E9 EB C5 */	bl getSlot__10MouthSlotsFi
/* 80299BB8 00296AF8  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 80299BBC 00296AFC  3B FF 00 01 */	addi r31, r31, 1
.L_80299BC0:
/* 80299BC0 00296B00  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80299BC4 00296B04  7C 1F 00 00 */	cmpw r31, r0
/* 80299BC8 00296B08  41 80 FF E4 */	blt .L_80299BAC
/* 80299BCC 00296B0C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80299BD0 00296B10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80299BD4 00296B14  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80299BD8 00296B18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80299BDC 00296B1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80299BE0 00296B20  7C 08 03 A6 */	mtlr r0
/* 80299BE4 00296B24  38 21 00 20 */	addi r1, r1, 0x20
/* 80299BE8 00296B28  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game10KumaChappy3ObjFv

.fn initWalkSmokeEffect__Q34Game10KumaChappy3ObjFv, global
/* 80299BEC 00296B2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299BF0 00296B30  7C 08 02 A6 */	mflr r0
/* 80299BF4 00296B34  38 80 00 02 */	li r4, 2
/* 80299BF8 00296B38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299BFC 00296B3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299C00 00296B40  7C 7F 1B 78 */	mr r31, r3
/* 80299C04 00296B44  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 80299C08 00296B48  4B E9 07 5D */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 80299C0C 00296B4C  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80299C10 00296B50  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 80299C14 00296B54  C0 22 D8 60 */	lfs f1, lbl_8051BBC0@sda21(r2)
/* 80299C18 00296B58  38 80 00 00 */	li r4, 0
/* 80299C1C 00296B5C  38 C2 D8 58 */	addi r6, r2, lbl_8051BBB8@sda21
/* 80299C20 00296B60  4B E9 09 C1 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80299C24 00296B64  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80299C28 00296B68  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 80299C2C 00296B6C  C0 22 D8 60 */	lfs f1, lbl_8051BBC0@sda21(r2)
/* 80299C30 00296B70  38 80 00 01 */	li r4, 1
/* 80299C34 00296B74  38 C2 D8 64 */	addi r6, r2, lbl_8051BBC4@sda21
/* 80299C38 00296B78  4B E9 09 A9 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80299C3C 00296B7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299C40 00296B80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80299C44 00296B84  7C 08 03 A6 */	mtlr r0
/* 80299C48 00296B88  38 21 00 10 */	addi r1, r1, 0x10
/* 80299C4C 00296B8C  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game10KumaChappy3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv, global
/* 80299C50 00296B90  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 80299C54 00296B94  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv

.fn doBecomeCarcass__Q34Game10KumaChappy3ObjFv, global
/* 80299C58 00296B98  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 80299C5C 00296B9C  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 80299C60 00296BA0  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80299C64 00296BA4  38 60 00 01 */	li r3, 1
/* 80299C68 00296BA8  4E 80 00 20 */	blr 
.endfn doBecomeCarcass__Q34Game10KumaChappy3ObjFv

.fn doUpdateCarcass__Q34Game10KumaChappy3ObjFv, global
/* 80299C6C 00296BAC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80299C70 00296BB0  7C 08 02 A6 */	mflr r0
/* 80299C74 00296BB4  90 01 00 74 */	stw r0, 0x74(r1)
/* 80299C78 00296BB8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80299C7C 00296BBC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80299C80 00296BC0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80299C84 00296BC4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80299C88 00296BC8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80299C8C 00296BCC  7C 7F 1B 78 */	mr r31, r3
/* 80299C90 00296BD0  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80299C94 00296BD4  80 63 00 04 */	lwz r3, 4(r3)
/* 80299C98 00296BD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80299C9C 00296BDC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80299CA0 00296BE0  7D 89 03 A6 */	mtctr r12
/* 80299CA4 00296BE4  4E 80 04 21 */	bctrl 
/* 80299CA8 00296BE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80299CAC 00296BEC  41 82 01 5C */	beq .L_80299E08
/* 80299CB0 00296BF0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80299CB4 00296BF4  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 80299CB8 00296BF8  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 80299CBC 00296BFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80299CC0 00296C00  40 80 00 48 */	bge .L_80299D08
/* 80299CC4 00296C04  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80299CC8 00296C08  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80299CCC 00296C0C  EC 01 00 2A */	fadds f0, f1, f0
/* 80299CD0 00296C10  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80299CD4 00296C14  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 80299CD8 00296C18  28 03 00 00 */	cmplwi r3, 0
/* 80299CDC 00296C1C  41 82 01 68 */	beq .L_80299E44
/* 80299CE0 00296C20  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80299CE4 00296C24  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 80299CE8 00296C28  C0 04 08 44 */	lfs f0, 0x844(r4)
/* 80299CEC 00296C2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80299CF0 00296C30  4C 41 13 82 */	cror 2, 1, 2
/* 80299CF4 00296C34  40 82 01 50 */	bne .L_80299E44
/* 80299CF8 00296C38  C0 22 D8 08 */	lfs f1, lbl_8051BB68@sda21(r2)
/* 80299CFC 00296C3C  7F E4 FB 78 */	mr r4, r31
/* 80299D00 00296C40  4B E8 0D 95 */	bl activeLifeGauge__12LifeGaugeMgrFPQ24Game8Creaturef
/* 80299D04 00296C44  48 00 01 40 */	b .L_80299E44
.L_80299D08:
/* 80299D08 00296C48  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 80299D0C 00296C4C  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 80299D10 00296C50  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80299D14 00296C54  40 80 01 30 */	bge .L_80299E44
/* 80299D18 00296C58  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80299D1C 00296C5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80299D20 00296C60  EC 21 00 24 */	fdivs f1, f1, f0
/* 80299D24 00296C64  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80299D28 00296C68  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80299D2C 00296C6C  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80299D30 00296C70  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80299D34 00296C74  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 80299D38 00296C78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80299D3C 00296C7C  4C 41 13 82 */	cror 2, 1, 2
/* 80299D40 00296C80  40 82 01 04 */	bne .L_80299E44
/* 80299D44 00296C84  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80299D48 00296C88  38 80 00 00 */	li r4, 0
/* 80299D4C 00296C8C  80 63 00 04 */	lwz r3, 4(r3)
/* 80299D50 00296C90  4B EA 13 A1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80299D54 00296C94  C3 FF 01 40 */	lfs f31, 0x140(r31)
/* 80299D58 00296C98  38 61 00 08 */	addi r3, r1, 8
/* 80299D5C 00296C9C  C3 DF 01 60 */	lfs f30, 0x160(r31)
/* 80299D60 00296CA0  4B E9 4E C5 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 80299D64 00296CA4  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80299D68 00296CA8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80299D6C 00296CAC  FC 20 F8 90 */	fmr f1, f31
/* 80299D70 00296CB0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80299D74 00296CB4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80299D78 00296CB8  FC 40 F0 90 */	fmr f2, f30
/* 80299D7C 00296CBC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80299D80 00296CC0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80299D84 00296CC4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80299D88 00296CC8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80299D8C 00296CCC  4B D9 B3 7D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80299D90 00296CD0  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80299D94 00296CD4  7F E3 FB 78 */	mr r3, r31
/* 80299D98 00296CD8  C0 1F 02 AC */	lfs f0, 0x2ac(r31)
/* 80299D9C 00296CDC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80299DA0 00296CE0  88 9F 01 F3 */	lbz r4, 0x1f3(r31)
/* 80299DA4 00296CE4  7C 04 00 D0 */	neg r0, r4
/* 80299DA8 00296CE8  7C 00 23 78 */	or r0, r0, r4
/* 80299DAC 00296CEC  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80299DB0 00296CF0  98 01 00 38 */	stb r0, 0x38(r1)
/* 80299DB4 00296CF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80299DB8 00296CF8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80299DBC 00296CFC  7D 89 03 A6 */	mtctr r12
/* 80299DC0 00296D00  4E 80 04 21 */	bctrl 
/* 80299DC4 00296D04  7C 64 1B 78 */	mr r4, r3
/* 80299DC8 00296D08  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80299DCC 00296D0C  38 A1 00 08 */	addi r5, r1, 8
/* 80299DD0 00296D10  4B E7 36 F1 */	bl birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
/* 80299DD4 00296D14  28 03 00 00 */	cmplwi r3, 0
/* 80299DD8 00296D18  41 82 00 6C */	beq .L_80299E44
/* 80299DDC 00296D1C  38 80 00 00 */	li r4, 0
/* 80299DE0 00296D20  4B EA 11 E9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 80299DE4 00296D24  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80299DE8 00296D28  7F E4 FB 78 */	mr r4, r31
/* 80299DEC 00296D2C  38 A0 00 01 */	li r5, 1
/* 80299DF0 00296D30  38 C0 00 00 */	li r6, 0
/* 80299DF4 00296D34  81 83 00 00 */	lwz r12, 0(r3)
/* 80299DF8 00296D38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80299DFC 00296D3C  7D 89 03 A6 */	mtctr r12
/* 80299E00 00296D40  4E 80 04 21 */	bctrl 
/* 80299E04 00296D44  48 00 00 40 */	b .L_80299E44
.L_80299E08:
/* 80299E08 00296D48  80 0D 92 08 */	lwz r0, lifeGaugeMgr@sda21(r13)
/* 80299E0C 00296D4C  28 00 00 00 */	cmplwi r0, 0
/* 80299E10 00296D50  41 82 00 34 */	beq .L_80299E44
/* 80299E14 00296D54  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80299E18 00296D58  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 80299E1C 00296D5C  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 80299E20 00296D60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80299E24 00296D64  4C 41 13 82 */	cror 2, 1, 2
/* 80299E28 00296D68  40 82 00 1C */	bne .L_80299E44
/* 80299E2C 00296D6C  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 80299E30 00296D70  7F E4 FB 78 */	mr r4, r31
/* 80299E34 00296D74  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80299E38 00296D78  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80299E3C 00296D7C  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 80299E40 00296D80  4B E8 0D 39 */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_80299E44:
/* 80299E44 00296D84  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80299E48 00296D88  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80299E4C 00296D8C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80299E50 00296D90  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80299E54 00296D94  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80299E58 00296D98  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80299E5C 00296D9C  7C 08 03 A6 */	mtlr r0
/* 80299E60 00296DA0  38 21 00 70 */	addi r1, r1, 0x70
/* 80299E64 00296DA4  4E 80 00 20 */	blr 
.endfn doUpdateCarcass__Q34Game10KumaChappy3ObjFv

.fn doGetLifeGaugeParam__Q34Game10KumaChappy3ObjFRQ24Game14LifeGaugeParam, global
/* 80299E68 00296DA8  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80299E6C 00296DAC  D0 04 00 00 */	stfs f0, 0(r4)
/* 80299E70 00296DB0  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 80299E74 00296DB4  80 05 00 04 */	lwz r0, 4(r5)
/* 80299E78 00296DB8  28 00 00 00 */	cmplwi r0, 0
/* 80299E7C 00296DBC  41 82 00 18 */	beq .L_80299E94
/* 80299E80 00296DC0  C0 22 D8 6C */	lfs f1, lbl_8051BBCC@sda21(r2)
/* 80299E84 00296DC4  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80299E88 00296DC8  EC 01 00 2A */	fadds f0, f1, f0
/* 80299E8C 00296DCC  D0 04 00 04 */	stfs f0, 4(r4)
/* 80299E90 00296DD0  48 00 00 18 */	b .L_80299EA8
.L_80299E94:
/* 80299E94 00296DD4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80299E98 00296DD8  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80299E9C 00296DDC  C0 05 01 2C */	lfs f0, 0x12c(r5)
/* 80299EA0 00296DE0  EC 01 00 2A */	fadds f0, f1, f0
/* 80299EA4 00296DE4  D0 04 00 04 */	stfs f0, 4(r4)
.L_80299EA8:
/* 80299EA8 00296DE8  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 80299EAC 00296DEC  C0 02 D8 60 */	lfs f0, lbl_8051BBC0@sda21(r2)
/* 80299EB0 00296DF0  D0 24 00 08 */	stfs f1, 8(r4)
/* 80299EB4 00296DF4  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 80299EB8 00296DF8  C0 23 02 04 */	lfs f1, 0x204(r3)
/* 80299EBC 00296DFC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80299EC0 00296E00  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 80299EC4 00296E04  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80299EC8 00296E08  4E 80 00 20 */	blr 
.endfn doGetLifeGaugeParam__Q34Game10KumaChappy3ObjFRQ24Game14LifeGaugeParam

.fn getViewAngle__Q34Game10KumaChappy3ObjFv, global
/* 80299ECC 00296E0C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80299ED0 00296E10  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 80299ED4 00296E14  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 80299ED8 00296E18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80299EDC 00296E1C  40 80 00 0C */	bge .L_80299EE8
/* 80299EE0 00296E20  C0 22 D8 70 */	lfs f1, lbl_8051BBD0@sda21(r2)
/* 80299EE4 00296E24  4E 80 00 20 */	blr 
.L_80299EE8:
/* 80299EE8 00296E28  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 80299EEC 00296E2C  4E 80 00 20 */	blr 
.endfn getViewAngle__Q34Game10KumaChappy3ObjFv

.fn resetWayPoint__Q34Game10KumaChappy3ObjFv, global
/* 80299EF0 00296E30  38 00 00 00 */	li r0, 0
/* 80299EF4 00296E34  90 03 02 EC */	stw r0, 0x2ec(r3)
/* 80299EF8 00296E38  90 03 02 F0 */	stw r0, 0x2f0(r3)
/* 80299EFC 00296E3C  4E 80 00 20 */	blr 
.endfn resetWayPoint__Q34Game10KumaChappy3ObjFv

.fn setNearestWayPoint__Q34Game10KumaChappy3ObjFv, global
/* 80299F00 00296E40  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80299F04 00296E44  7C 08 02 A6 */	mflr r0
/* 80299F08 00296E48  C0 02 D8 60 */	lfs f0, lbl_8051BBC0@sda21(r2)
/* 80299F0C 00296E4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80299F10 00296E50  38 00 00 00 */	li r0, 0
/* 80299F14 00296E54  38 81 00 08 */	addi r4, r1, 8
/* 80299F18 00296E58  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80299F1C 00296E5C  7C 7F 1B 78 */	mr r31, r3
/* 80299F20 00296E60  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 80299F24 00296E64  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 80299F28 00296E68  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 80299F2C 00296E6C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80299F30 00296E70  D0 21 00 08 */	stfs f1, 8(r1)
/* 80299F34 00296E74  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80299F38 00296E78  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80299F3C 00296E7C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80299F40 00296E80  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80299F44 00296E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80299F48 00296E88  98 01 00 18 */	stb r0, 0x18(r1)
/* 80299F4C 00296E8C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80299F50 00296E90  80 63 00 08 */	lwz r3, 8(r3)
/* 80299F54 00296E94  4B ED 90 71 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 80299F58 00296E98  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 80299F5C 00296E9C  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 80299F60 00296EA0  28 03 00 00 */	cmplwi r3, 0
/* 80299F64 00296EA4  41 82 00 20 */	beq .L_80299F84
/* 80299F68 00296EA8  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80299F6C 00296EAC  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80299F70 00296EB0  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80299F74 00296EB4  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80299F78 00296EB8  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 80299F7C 00296EBC  D0 5F 02 E8 */	stfs f2, 0x2e8(r31)
/* 80299F80 00296EC0  48 00 00 1C */	b .L_80299F9C
.L_80299F84:
/* 80299F84 00296EC4  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80299F88 00296EC8  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80299F8C 00296ECC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80299F90 00296ED0  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80299F94 00296ED4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80299F98 00296ED8  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
.L_80299F9C:
/* 80299F9C 00296EDC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80299FA0 00296EE0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80299FA4 00296EE4  7C 08 03 A6 */	mtlr r0
/* 80299FA8 00296EE8  38 21 00 30 */	addi r1, r1, 0x30
/* 80299FAC 00296EEC  4E 80 00 20 */	blr 
.endfn setNearestWayPoint__Q34Game10KumaChappy3ObjFv

.fn setLinkWayPoint__Q34Game10KumaChappy3ObjFv, global
/* 80299FB0 00296EF0  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80299FB4 00296EF4  7C 08 02 A6 */	mflr r0
/* 80299FB8 00296EF8  90 01 00 84 */	stw r0, 0x84(r1)
/* 80299FBC 00296EFC  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80299FC0 00296F00  7C 7F 1B 78 */	mr r31, r3
/* 80299FC4 00296F04  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80299FC8 00296F08  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80299FCC 00296F0C  93 81 00 70 */	stw r28, 0x70(r1)
/* 80299FD0 00296F10  80 83 02 EC */	lwz r4, 0x2ec(r3)
/* 80299FD4 00296F14  28 04 00 00 */	cmplwi r4, 0
/* 80299FD8 00296F18  41 82 01 90 */	beq .L_8029A168
/* 80299FDC 00296F1C  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 80299FE0 00296F20  3B A0 00 00 */	li r29, 0
/* 80299FE4 00296F24  3B 80 FF FF */	li r28, -1
/* 80299FE8 00296F28  28 03 00 00 */	cmplwi r3, 0
/* 80299FEC 00296F2C  41 82 00 08 */	beq .L_80299FF4
/* 80299FF0 00296F30  AB 83 00 36 */	lha r28, 0x36(r3)
.L_80299FF4:
/* 80299FF4 00296F34  38 61 00 08 */	addi r3, r1, 8
/* 80299FF8 00296F38  38 A0 00 01 */	li r5, 1
/* 80299FFC 00296F3C  4B ED 85 25 */	bl __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
/* 8029A000 00296F40  38 61 00 08 */	addi r3, r1, 8
/* 8029A004 00296F44  4B ED 85 31 */	bl first__Q24Game16WayPointIteratorFv
/* 8029A008 00296F48  3B C1 00 2C */	addi r30, r1, 0x2c
/* 8029A00C 00296F4C  48 00 00 5C */	b .L_8029A068
.L_8029A010:
/* 8029A010 00296F50  38 61 00 08 */	addi r3, r1, 8
/* 8029A014 00296F54  4B ED 85 B1 */	bl __ml__Q24Game16WayPointIteratorFv
/* 8029A018 00296F58  7C 60 07 34 */	extsh r0, r3
/* 8029A01C 00296F5C  7C 00 E0 00 */	cmpw r0, r28
/* 8029A020 00296F60  41 82 00 40 */	beq .L_8029A060
/* 8029A024 00296F64  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 8029A028 00296F68  7C 64 1B 78 */	mr r4, r3
/* 8029A02C 00296F6C  80 65 00 08 */	lwz r3, 8(r5)
/* 8029A030 00296F70  81 83 00 00 */	lwz r12, 0(r3)
/* 8029A034 00296F74  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8029A038 00296F78  7D 89 03 A6 */	mtctr r12
/* 8029A03C 00296F7C  4E 80 04 21 */	bctrl 
/* 8029A040 00296F80  28 03 00 00 */	cmplwi r3, 0
/* 8029A044 00296F84  41 82 00 1C */	beq .L_8029A060
/* 8029A048 00296F88  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8029A04C 00296F8C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8029A050 00296F90  40 82 00 10 */	bne .L_8029A060
/* 8029A054 00296F94  90 7E 00 00 */	stw r3, 0(r30)
/* 8029A058 00296F98  3B DE 00 04 */	addi r30, r30, 4
/* 8029A05C 00296F9C  3B BD 00 01 */	addi r29, r29, 1
.L_8029A060:
/* 8029A060 00296FA0  38 61 00 08 */	addi r3, r1, 8
/* 8029A064 00296FA4  4B ED 84 F9 */	bl next__Q24Game16WayPointIteratorFv
.L_8029A068:
/* 8029A068 00296FA8  38 61 00 08 */	addi r3, r1, 8
/* 8029A06C 00296FAC  4B ED 85 1D */	bl isDone__Q24Game16WayPointIteratorFv
/* 8029A070 00296FB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029A074 00296FB4  41 82 FF 9C */	beq .L_8029A010
/* 8029A078 00296FB8  2C 1D 00 00 */	cmpwi r29, 0
/* 8029A07C 00296FBC  41 82 00 88 */	beq .L_8029A104
/* 8029A080 00296FC0  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 8029A084 00296FC4  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 8029A088 00296FC8  4B E2 F5 19 */	bl rand
/* 8029A08C 00296FCC  3C 80 43 30 */	lis r4, 0x4330
/* 8029A090 00296FD0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8029A094 00296FD4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8029A098 00296FD8  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 8029A09C 00296FDC  C8 42 D8 78 */	lfd f2, lbl_8051BBD8@sda21(r2)
/* 8029A0A0 00296FE0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8029A0A4 00296FE4  90 81 00 50 */	stw r4, 0x50(r1)
/* 8029A0A8 00296FE8  C0 02 D8 74 */	lfs f0, lbl_8051BBD4@sda21(r2)
/* 8029A0AC 00296FEC  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 8029A0B0 00296FF0  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8029A0B4 00296FF4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8029A0B8 00296FF8  90 81 00 58 */	stw r4, 0x58(r1)
/* 8029A0BC 00296FFC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8029A0C0 00297000  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8029A0C4 00297004  EC 00 10 28 */	fsubs f0, f0, f2
/* 8029A0C8 00297008  EC 00 00 72 */	fmuls f0, f0, f1
/* 8029A0CC 0029700C  FC 00 00 1E */	fctiwz f0, f0
/* 8029A0D0 00297010  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8029A0D4 00297014  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8029A0D8 00297018  54 00 10 3A */	slwi r0, r0, 2
/* 8029A0DC 0029701C  7C 03 00 2E */	lwzx r0, r3, r0
/* 8029A0E0 00297020  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 8029A0E4 00297024  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029A0E8 00297028  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 8029A0EC 0029702C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8029A0F0 00297030  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8029A0F4 00297034  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8029A0F8 00297038  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 8029A0FC 0029703C  D0 5F 02 E8 */	stfs f2, 0x2e8(r31)
/* 8029A100 00297040  48 00 00 F0 */	b .L_8029A1F0
.L_8029A104:
/* 8029A104 00297044  2C 1C 00 00 */	cmpwi r28, 0
/* 8029A108 00297048  41 80 00 60 */	blt .L_8029A168
/* 8029A10C 0029704C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8029A110 00297050  7F 84 07 34 */	extsh r4, r28
/* 8029A114 00297054  80 63 00 08 */	lwz r3, 8(r3)
/* 8029A118 00297058  81 83 00 00 */	lwz r12, 0(r3)
/* 8029A11C 0029705C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8029A120 00297060  7D 89 03 A6 */	mtctr r12
/* 8029A124 00297064  4E 80 04 21 */	bctrl 
/* 8029A128 00297068  28 03 00 00 */	cmplwi r3, 0
/* 8029A12C 0029706C  41 82 00 3C */	beq .L_8029A168
/* 8029A130 00297070  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8029A134 00297074  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8029A138 00297078  40 82 00 30 */	bne .L_8029A168
/* 8029A13C 0029707C  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 8029A140 00297080  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 8029A144 00297084  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 8029A148 00297088  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029A14C 0029708C  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 8029A150 00297090  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8029A154 00297094  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8029A158 00297098  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8029A15C 0029709C  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 8029A160 002970A0  D0 5F 02 E8 */	stfs f2, 0x2e8(r31)
/* 8029A164 002970A4  48 00 00 8C */	b .L_8029A1F0
.L_8029A168:
/* 8029A168 002970A8  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029A16C 002970AC  38 00 00 00 */	li r0, 0
/* 8029A170 002970B0  C0 02 D8 60 */	lfs f0, lbl_8051BBC0@sda21(r2)
/* 8029A174 002970B4  38 81 00 14 */	addi r4, r1, 0x14
/* 8029A178 002970B8  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 8029A17C 002970BC  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8029A180 002970C0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8029A184 002970C4  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8029A188 002970C8  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8029A18C 002970CC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8029A190 002970D0  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8029A194 002970D4  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8029A198 002970D8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8029A19C 002970DC  98 01 00 24 */	stb r0, 0x24(r1)
/* 8029A1A0 002970E0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8029A1A4 002970E4  80 63 00 08 */	lwz r3, 8(r3)
/* 8029A1A8 002970E8  4B ED 8E 1D */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 8029A1AC 002970EC  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 8029A1B0 002970F0  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029A1B4 002970F4  28 03 00 00 */	cmplwi r3, 0
/* 8029A1B8 002970F8  41 82 00 20 */	beq .L_8029A1D8
/* 8029A1BC 002970FC  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 8029A1C0 00297100  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8029A1C4 00297104  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8029A1C8 00297108  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8029A1CC 0029710C  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 8029A1D0 00297110  D0 5F 02 E8 */	stfs f2, 0x2e8(r31)
/* 8029A1D4 00297114  48 00 00 1C */	b .L_8029A1F0
.L_8029A1D8:
/* 8029A1D8 00297118  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8029A1DC 0029711C  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8029A1E0 00297120  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8029A1E4 00297124  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 8029A1E8 00297128  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8029A1EC 0029712C  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
.L_8029A1F0:
/* 8029A1F0 00297130  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8029A1F4 00297134  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8029A1F8 00297138  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8029A1FC 0029713C  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8029A200 00297140  83 81 00 70 */	lwz r28, 0x70(r1)
/* 8029A204 00297144  7C 08 03 A6 */	mtlr r0
/* 8029A208 00297148  38 21 00 80 */	addi r1, r1, 0x80
/* 8029A20C 0029714C  4E 80 00 20 */	blr 
.endfn setLinkWayPoint__Q34Game10KumaChappy3ObjFv

.fn getSearchedTarget__Q34Game10KumaChappy3ObjFv, global
/* 8029A210 00297150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029A214 00297154  7C 08 02 A6 */	mflr r0
/* 8029A218 00297158  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029A21C 0029715C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029A220 00297160  7C 7F 1B 78 */	mr r31, r3
/* 8029A224 00297164  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8029A228 00297168  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8029A22C 0029716C  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 8029A230 00297170  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029A234 00297174  40 80 00 0C */	bge .L_8029A240
/* 8029A238 00297178  C0 22 D8 70 */	lfs f1, lbl_8051BBD0@sda21(r2)
/* 8029A23C 0029717C  48 00 00 08 */	b .L_8029A244
.L_8029A240:
/* 8029A240 00297180  C0 24 04 24 */	lfs f1, 0x424(r4)
.L_8029A244:
/* 8029A244 00297184  C0 44 03 D4 */	lfs f2, 0x3d4(r4)
/* 8029A248 00297188  38 80 00 00 */	li r4, 0
/* 8029A24C 0029718C  38 A0 00 00 */	li r5, 0
/* 8029A250 00297190  38 C0 00 00 */	li r6, 0
/* 8029A254 00297194  4B E7 8D FD */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8029A258 00297198  28 03 00 00 */	cmplwi r3, 0
/* 8029A25C 0029719C  41 82 00 0C */	beq .L_8029A268
/* 8029A260 002971A0  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 8029A264 002971A4  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
.L_8029A268:
/* 8029A268 002971A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029A26C 002971AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029A270 002971B0  7C 08 03 A6 */	mtlr r0
/* 8029A274 002971B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029A278 002971B8  4E 80 00 20 */	blr 
.endfn getSearchedTarget__Q34Game10KumaChappy3ObjFv

.fn updateTargetDistance__Q34Game10KumaChappy3ObjFv, global
/* 8029A27C 002971BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8029A280 002971C0  7C 08 02 A6 */	mflr r0
/* 8029A284 002971C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8029A288 002971C8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8029A28C 002971CC  7C 7F 1B 78 */	mr r31, r3
/* 8029A290 002971D0  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 8029A294 002971D4  28 03 00 00 */	cmplwi r3, 0
/* 8029A298 002971D8  41 82 00 0C */	beq .L_8029A2A4
/* 8029A29C 002971DC  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 8029A2A0 002971E0  48 00 00 0C */	b .L_8029A2AC
.L_8029A2A4:
/* 8029A2A4 002971E4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8029A2A8 002971E8  C0 03 03 84 */	lfs f0, 0x384(r3)
.L_8029A2AC:
/* 8029A2AC 002971EC  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8029A2B0 002971F0  EC 00 00 32 */	fmuls f0, f0, f0
/* 8029A2B4 002971F4  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 8029A2B8 002971F8  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 8029A2BC 002971FC  EC 42 08 28 */	fsubs f2, f2, f1
/* 8029A2C0 00297200  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 8029A2C4 00297204  EC 63 08 28 */	fsubs f3, f3, f1
/* 8029A2C8 00297208  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8029A2CC 0029720C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8029A2D0 00297210  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029A2D4 00297214  40 80 00 14 */	bge .L_8029A2E8
/* 8029A2D8 00297218  7F E3 FB 78 */	mr r3, r31
/* 8029A2DC 0029721C  4B FF FC D5 */	bl setLinkWayPoint__Q34Game10KumaChappy3ObjFv
/* 8029A2E0 00297220  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 8029A2E4 00297224  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_8029A2E8:
/* 8029A2E8 00297228  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8029A2EC 0029722C  C0 02 D8 14 */	lfs f0, lbl_8051BB74@sda21(r2)
/* 8029A2F0 00297230  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029A2F4 00297234  40 81 00 9C */	ble .L_8029A390
/* 8029A2F8 00297238  C0 22 D8 08 */	lfs f1, lbl_8051BB68@sda21(r2)
/* 8029A2FC 0029723C  38 00 00 00 */	li r0, 0
/* 8029A300 00297240  C0 02 D8 60 */	lfs f0, lbl_8051BBC0@sda21(r2)
/* 8029A304 00297244  38 81 00 08 */	addi r4, r1, 8
/* 8029A308 00297248  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 8029A30C 0029724C  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029A310 00297250  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 8029A314 00297254  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8029A318 00297258  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8029A31C 0029725C  D0 21 00 08 */	stfs f1, 8(r1)
/* 8029A320 00297260  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8029A324 00297264  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8029A328 00297268  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8029A32C 0029726C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8029A330 00297270  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029A334 00297274  98 01 00 18 */	stb r0, 0x18(r1)
/* 8029A338 00297278  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8029A33C 0029727C  80 63 00 08 */	lwz r3, 8(r3)
/* 8029A340 00297280  4B ED 8C 85 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 8029A344 00297284  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 8029A348 00297288  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029A34C 0029728C  28 03 00 00 */	cmplwi r3, 0
/* 8029A350 00297290  41 82 00 20 */	beq .L_8029A370
/* 8029A354 00297294  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 8029A358 00297298  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8029A35C 0029729C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8029A360 002972A0  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8029A364 002972A4  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 8029A368 002972A8  D0 5F 02 E8 */	stfs f2, 0x2e8(r31)
/* 8029A36C 002972AC  48 00 00 1C */	b .L_8029A388
.L_8029A370:
/* 8029A370 002972B0  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8029A374 002972B4  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8029A378 002972B8  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8029A37C 002972BC  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 8029A380 002972C0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8029A384 002972C4  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
.L_8029A388:
/* 8029A388 002972C8  7F E3 FB 78 */	mr r3, r31
/* 8029A38C 002972CC  48 00 00 19 */	bl updateHomePosition__Q34Game10KumaChappy3ObjFv
.L_8029A390:
/* 8029A390 002972D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029A394 002972D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029A398 002972D8  7C 08 03 A6 */	mtlr r0
/* 8029A39C 002972DC  38 21 00 30 */	addi r1, r1, 0x30
/* 8029A3A0 002972E0  4E 80 00 20 */	blr 
.endfn updateTargetDistance__Q34Game10KumaChappy3ObjFv

.fn updateHomePosition__Q34Game10KumaChappy3ObjFv, global
/* 8029A3A4 002972E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029A3A8 002972E8  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 8029A3AC 002972EC  C0 A3 01 FC */	lfs f5, 0x1fc(r3)
/* 8029A3B0 002972F0  FC 20 28 90 */	fmr f1, f5
/* 8029A3B4 002972F4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8029A3B8 002972F8  40 80 00 08 */	bge .L_8029A3C0
/* 8029A3BC 002972FC  FC 20 28 50 */	fneg f1, f5
.L_8029A3C0:
/* 8029A3C0 00297300  C0 62 D8 80 */	lfs f3, lbl_8051BBE0@sda21(r2)
/* 8029A3C4 00297304  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8029A3C8 00297308  C0 02 D8 08 */	lfs f0, lbl_8051BB68@sda21(r2)
/* 8029A3CC 0029730C  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 8029A3D0 00297310  EC 41 00 F2 */	fmuls f2, f1, f3
/* 8029A3D4 00297314  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8029A3D8 00297318  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8029A3DC 0029731C  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 8029A3E0 00297320  C0 C4 03 84 */	lfs f6, 0x384(r4)
/* 8029A3E4 00297324  FC 00 10 1E */	fctiwz f0, f2
/* 8029A3E8 00297328  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 8029A3EC 0029732C  D8 01 00 08 */	stfd f0, 8(r1)
/* 8029A3F0 00297330  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8029A3F4 00297334  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029A3F8 00297338  7C 85 02 14 */	add r4, r5, r0
/* 8029A3FC 0029733C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8029A400 00297340  EC 80 09 BA */	fmadds f4, f0, f6, f1
/* 8029A404 00297344  40 80 00 28 */	bge .L_8029A42C
/* 8029A408 00297348  C0 02 D8 84 */	lfs f0, lbl_8051BBE4@sda21(r2)
/* 8029A40C 0029734C  EC 05 00 32 */	fmuls f0, f5, f0
/* 8029A410 00297350  FC 00 00 1E */	fctiwz f0, f0
/* 8029A414 00297354  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8029A418 00297358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029A41C 0029735C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029A420 00297360  7C 05 04 2E */	lfsx f0, r5, r0
/* 8029A424 00297364  FC 20 00 50 */	fneg f1, f0
/* 8029A428 00297368  48 00 00 1C */	b .L_8029A444
.L_8029A42C:
/* 8029A42C 0029736C  EC 05 00 F2 */	fmuls f0, f5, f3
/* 8029A430 00297370  FC 00 00 1E */	fctiwz f0, f0
/* 8029A434 00297374  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8029A438 00297378  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8029A43C 0029737C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029A440 00297380  7C 25 04 2E */	lfsx f1, r5, r0
.L_8029A444:
/* 8029A444 00297384  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8029A448 00297388  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 8029A44C 0029738C  D0 03 01 98 */	stfs f0, 0x198(r3)
/* 8029A450 00297390  D0 43 01 9C */	stfs f2, 0x19c(r3)
/* 8029A454 00297394  D0 83 01 A0 */	stfs f4, 0x1a0(r3)
/* 8029A458 00297398  38 21 00 20 */	addi r1, r1, 0x20
/* 8029A45C 0029739C  4E 80 00 20 */	blr 
.endfn updateHomePosition__Q34Game10KumaChappy3ObjFv

.fn createChappyRelation__Q34Game10KumaChappy3ObjFv, global
/* 8029A460 002973A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029A464 002973A4  7C 08 02 A6 */	mflr r0
/* 8029A468 002973A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029A46C 002973AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029A470 002973B0  93 C1 00 08 */	stw r30, 8(r1)
/* 8029A474 002973B4  7C 7E 1B 78 */	mr r30, r3
/* 8029A478 002973B8  38 60 00 1C */	li r3, 0x1c
/* 8029A47C 002973BC  4B D8 9A 29 */	bl __nw__FUl
/* 8029A480 002973C0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8029A484 002973C4  41 82 00 18 */	beq .L_8029A49C
/* 8029A488 002973C8  48 17 6F 09 */	bl __ct__5CNodeFv
/* 8029A48C 002973CC  3C 60 80 4D */	lis r3, __vt__Q24Game14ChappyRelation@ha
/* 8029A490 002973D0  38 03 BC 90 */	addi r0, r3, __vt__Q24Game14ChappyRelation@l
/* 8029A494 002973D4  90 1F 00 00 */	stw r0, 0(r31)
/* 8029A498 002973D8  93 DF 00 18 */	stw r30, 0x18(r31)
.L_8029A49C:
/* 8029A49C 002973DC  93 FE 02 F4 */	stw r31, 0x2f4(r30)
/* 8029A4A0 002973E0  38 00 00 00 */	li r0, 0
/* 8029A4A4 002973E4  80 7E 02 F4 */	lwz r3, 0x2f4(r30)
/* 8029A4A8 002973E8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8029A4AC 002973EC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029A4B0 002973F0  90 03 00 08 */	stw r0, 8(r3)
/* 8029A4B4 002973F4  90 03 00 04 */	stw r0, 4(r3)
/* 8029A4B8 002973F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029A4BC 002973FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029A4C0 00297400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029A4C4 00297404  7C 08 03 A6 */	mtlr r0
/* 8029A4C8 00297408  38 21 00 10 */	addi r1, r1, 0x10
/* 8029A4CC 0029740C  4E 80 00 20 */	blr 
.endfn createChappyRelation__Q34Game10KumaChappy3ObjFv

.fn startEnemyRumble__Q34Game10KumaChappy3ObjFv, global
/* 8029A4D0 00297410  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029A4D4 00297414  7C 08 02 A6 */	mflr r0
/* 8029A4D8 00297418  38 82 D8 0C */	addi r4, r2, lbl_8051BB6C@sda21
/* 8029A4DC 0029741C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029A4E0 00297420  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8029A4E4 00297424  7C 7F 1B 78 */	mr r31, r3
/* 8029A4E8 00297428  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8029A4EC 0029742C  48 1A 4A F9 */	bl getJoint__Q28SysShape5ModelFPc
/* 8029A4F0 00297430  48 18 F3 B1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8029A4F4 00297434  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8029A4F8 00297438  38 A1 00 08 */	addi r5, r1, 8
/* 8029A4FC 0029743C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8029A500 00297440  38 80 00 0B */	li r4, 0xb
/* 8029A504 00297444  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8029A508 00297448  38 C0 00 02 */	li r6, 2
/* 8029A50C 0029744C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8029A510 00297450  D0 01 00 08 */	stfs f0, 8(r1)
/* 8029A514 00297454  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8029A518 00297458  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8029A51C 0029745C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8029A520 00297460  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8029A524 00297464  4B FB 92 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8029A528 00297468  C0 22 D8 88 */	lfs f1, lbl_8051BBE8@sda21(r2)
/* 8029A52C 0029746C  7F E3 FB 78 */	mr r3, r31
/* 8029A530 00297470  38 81 00 08 */	addi r4, r1, 8
/* 8029A534 00297474  4B E6 96 1D */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8029A538 00297478  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029A53C 0029747C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8029A540 00297480  7C 08 03 A6 */	mtlr r0
/* 8029A544 00297484  38 21 00 20 */	addi r1, r1, 0x20
/* 8029A548 00297488  4E 80 00 20 */	blr 
.endfn startEnemyRumble__Q34Game10KumaChappy3ObjFv

.fn __dt__Q24Game14ChappyRelationFv, weak
/* 8029A54C 0029748C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029A550 00297490  7C 08 02 A6 */	mflr r0
/* 8029A554 00297494  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029A558 00297498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029A55C 0029749C  7C 9F 23 78 */	mr r31, r4
/* 8029A560 002974A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8029A564 002974A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029A568 002974A8  41 82 00 28 */	beq .L_8029A590
/* 8029A56C 002974AC  3C A0 80 4D */	lis r5, __vt__Q24Game14ChappyRelation@ha
/* 8029A570 002974B0  38 80 00 00 */	li r4, 0
/* 8029A574 002974B4  38 05 BC 90 */	addi r0, r5, __vt__Q24Game14ChappyRelation@l
/* 8029A578 002974B8  90 1E 00 00 */	stw r0, 0(r30)
/* 8029A57C 002974BC  48 17 70 0D */	bl __dt__5CNodeFv
/* 8029A580 002974C0  7F E0 07 35 */	extsh. r0, r31
/* 8029A584 002974C4  40 81 00 0C */	ble .L_8029A590
/* 8029A588 002974C8  7F C3 F3 78 */	mr r3, r30
/* 8029A58C 002974CC  4B D8 9B 29 */	bl __dl__FPv
.L_8029A590:
/* 8029A590 002974D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029A594 002974D4  7F C3 F3 78 */	mr r3, r30
/* 8029A598 002974D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029A59C 002974DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029A5A0 002974E0  7C 08 03 A6 */	mtlr r0
/* 8029A5A4 002974E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029A5A8 002974E8  4E 80 00 20 */	blr 
.endfn __dt__Q24Game14ChappyRelationFv

.fn getMouthSlots__Q34Game10KumaChappy3ObjFv, weak
/* 8029A5AC 002974EC  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8029A5B0 002974F0  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game10KumaChappy3ObjFv

.fn getDownSmokeScale__Q34Game10KumaChappy3ObjFv, weak
/* 8029A5B4 002974F4  C0 22 D8 18 */	lfs f1, lbl_8051BB78@sda21(r2)
/* 8029A5B8 002974F8  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game10KumaChappy3ObjFv

.fn getChappyRelation__Q34Game10KumaChappy3ObjFv, weak
/* 8029A5BC 002974FC  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 8029A5C0 00297500  4E 80 00 20 */	blr 
.endfn getChappyRelation__Q34Game10KumaChappy3ObjFv

.fn "@760@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 8029A5C4 00297504  39 60 00 0C */	li r11, 0xc
/* 8029A5C8 00297508  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029A5CC 0029750C  7C 63 5A 14 */	add r3, r3, r11
/* 8029A5D0 00297510  38 63 FD 08 */	addi r3, r3, -760
/* 8029A5D4 00297514  4B E6 C3 48 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@760@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@760@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8029A5D8 00297518  39 60 00 0C */	li r11, 0xc
/* 8029A5DC 0029751C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029A5E0 00297520  7C 63 5A 14 */	add r3, r3, r11
/* 8029A5E4 00297524  38 63 FD 08 */	addi r3, r3, -760
/* 8029A5E8 00297528  4B E6 C0 C0 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@760@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@760@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8029A5EC 0029752C  39 60 00 0C */	li r11, 0xc
/* 8029A5F0 00297530  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029A5F4 00297534  7C 63 5A 14 */	add r3, r3, r11
/* 8029A5F8 00297538  38 63 FD 08 */	addi r3, r3, -760
/* 8029A5FC 0029753C  4B E6 C0 CC */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@760@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@760@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8029A600 00297540  39 60 00 0C */	li r11, 0xc
/* 8029A604 00297544  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029A608 00297548  7C 63 5A 14 */	add r3, r3, r11
/* 8029A60C 0029754C  38 63 FD 08 */	addi r3, r3, -760
/* 8029A610 00297550  4B E6 C4 68 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@760@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@760@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8029A614 00297554  39 60 00 0C */	li r11, 0xc
/* 8029A618 00297558  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029A61C 0029755C  7C 63 5A 14 */	add r3, r3, r11
/* 8029A620 00297560  38 63 FD 08 */	addi r3, r3, -760
/* 8029A624 00297564  4B E6 C4 28 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@760@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@760@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 8029A628 00297568  39 60 00 0C */	li r11, 0xc
/* 8029A62C 0029756C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029A630 00297570  7C 63 5A 14 */	add r3, r3, r11
/* 8029A634 00297574  38 63 FD 08 */	addi r3, r3, -760
/* 8029A638 00297578  4B E6 C0 68 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@760@12@viewGetShape__Q24Game9EnemyBaseFv"
