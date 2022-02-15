.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game11BombOtakara3Obj
__vt__Q34Game11BombOtakara3Obj:
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
	.4byte onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics
	.4byte getBodyRadius__Q24Game9EnemyBaseFv
	.4byte getCellRadius__Q34Game11OtakaraBase3ObjFv
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
	.4byte getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game11BombOtakara3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game11OtakaraBase3ObjFv
	.4byte doUpdateCommon__Q34Game11OtakaraBase3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game11BombOtakara3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11BombOtakara3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game11BombOtakara3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishStoneState__Q34Game11OtakaraBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf
	.4byte doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv
	.4byte doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game11OtakaraBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game11OtakaraBase3ObjFv
	.4byte doStartMovie__Q34Game11OtakaraBase3ObjFv
	.4byte doEndMovie__Q34Game11OtakaraBase3ObjFv
	.4byte setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM
	.4byte interactCreature__Q34Game11BombOtakara3ObjFPQ24Game8Creature
	.4byte createEffect__Q34Game11BombOtakara3ObjFv
	.4byte setupEffect__Q34Game11BombOtakara3ObjFv
	.4byte startChargeEffect__Q34Game11BombOtakara3ObjFv
	.4byte finishChargeEffect__Q34Game11BombOtakara3ObjFv
	.4byte createDisChargeEffect__Q34Game11BombOtakara3ObjFv
	.4byte effectDrawOn__Q34Game11BombOtakara3ObjFv
	.4byte effectDrawOff__Q34Game11BombOtakara3ObjFv
	.4byte startEscapeSE__Q34Game11BombOtakara3ObjFv
	.4byte startDisChargeSE__Q34Game11BombOtakara3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@756@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051D2F0:
	.float 2.5
lbl_8051D2F4:
	.float 0.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11BombOtakara3ObjFv
__ct__Q34Game11BombOtakara3ObjFv:
/* 802F9624 002F6564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9628 002F6568  7C 08 02 A6 */	mflr r0
/* 802F962C 002F656C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9630 002F6570  7C 80 07 35 */	extsh. r0, r4
/* 802F9634 002F6574  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9638 002F6578  7C 7F 1B 78 */	mr r31, r3
/* 802F963C 002F657C  41 82 00 24 */	beq lbl_802F9660
/* 802F9640 002F6580  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 802F9644 002F6584  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802F9648 002F6588  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802F964C 002F658C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802F9650 002F6590  38 00 00 00 */	li r0, 0
/* 802F9654 002F6594  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802F9658 002F6598  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 802F965C 002F659C  90 1F 02 FC */	stw r0, 0x2fc(r31)
lbl_802F9660:
/* 802F9660 002F65A0  7F E3 FB 78 */	mr r3, r31
/* 802F9664 002F65A4  38 80 00 00 */	li r4, 0
/* 802F9668 002F65A8  4B FB CB E5 */	bl __ct__Q34Game11OtakaraBase3ObjFv
/* 802F966C 002F65AC  3C 60 80 4D */	lis r3, __vt__Q34Game11BombOtakara3Obj@ha
/* 802F9670 002F65B0  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 802F9674 002F65B4  38 A3 5B 08 */	addi r5, r3, __vt__Q34Game11BombOtakara3Obj@l
/* 802F9678 002F65B8  7F E3 FB 78 */	mr r3, r31
/* 802F967C 002F65BC  90 BF 00 00 */	stw r5, 0(r31)
/* 802F9680 002F65C0  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802F9684 002F65C4  38 A5 03 24 */	addi r5, r5, 0x324
/* 802F9688 002F65C8  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802F968C 002F65CC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802F9690 002F65D0  90 A4 00 00 */	stw r5, 0(r4)
/* 802F9694 002F65D4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802F9698 002F65D8  7C 04 00 50 */	subf r0, r4, r0
/* 802F969C 002F65DC  90 04 00 0C */	stw r0, 0xc(r4)
/* 802F96A0 002F65E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F96A4 002F65E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F96A8 002F65E8  7C 08 03 A6 */	mtlr r0
/* 802F96AC 002F65EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F96B0 002F65F0  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11BombOtakara3ObjFv
changeMaterial__Q34Game11BombOtakara3ObjFv:
/* 802F96B4 002F65F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F96B8 002F65F8  7C 08 02 A6 */	mflr r0
/* 802F96BC 002F65FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F96C0 002F6600  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802F96C4 002F6604  7C 7B 1B 78 */	mr r27, r3
/* 802F96C8 002F6608  80 63 01 80 */	lwz r3, 0x180(r3)
/* 802F96CC 002F660C  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802F96D0 002F6610  81 83 00 00 */	lwz r12, 0(r3)
/* 802F96D4 002F6614  83 A4 00 08 */	lwz r29, 8(r4)
/* 802F96D8 002F6618  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 802F96DC 002F661C  83 DD 00 04 */	lwz r30, 4(r29)
/* 802F96E0 002F6620  7D 89 03 A6 */	mtctr r12
/* 802F96E4 002F6624  4E 80 04 21 */	bctrl 
/* 802F96E8 002F6628  7C 7F 1B 78 */	mr r31, r3
/* 802F96EC 002F662C  7F A3 EB 78 */	mr r3, r29
/* 802F96F0 002F6630  81 9D 00 00 */	lwz r12, 0(r29)
/* 802F96F4 002F6634  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F96F8 002F6638  7D 89 03 A6 */	mtctr r12
/* 802F96FC 002F663C  4E 80 04 21 */	bctrl 
/* 802F9700 002F6640  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802F9704 002F6644  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802F9708 002F6648  88 1F 00 00 */	lbz r0, 0(r31)
/* 802F970C 002F664C  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 802F9710 002F6650  80 64 00 08 */	lwz r3, 8(r4)
/* 802F9714 002F6654  3B 80 00 00 */	li r28, 0
/* 802F9718 002F6658  80 63 00 04 */	lwz r3, 4(r3)
/* 802F971C 002F665C  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 802F9720 002F6660  80 64 00 04 */	lwz r3, 4(r4)
/* 802F9724 002F6664  98 03 00 00 */	stb r0, 0(r3)
/* 802F9728 002F6668  88 1F 00 01 */	lbz r0, 1(r31)
/* 802F972C 002F666C  98 03 00 01 */	stb r0, 1(r3)
/* 802F9730 002F6670  A0 1F 00 02 */	lhz r0, 2(r31)
/* 802F9734 002F6674  B0 03 00 02 */	sth r0, 2(r3)
/* 802F9738 002F6678  A0 1F 00 04 */	lhz r0, 4(r31)
/* 802F973C 002F667C  B0 03 00 04 */	sth r0, 4(r3)
/* 802F9740 002F6680  88 1F 00 06 */	lbz r0, 6(r31)
/* 802F9744 002F6684  98 03 00 06 */	stb r0, 6(r3)
/* 802F9748 002F6688  88 1F 00 07 */	lbz r0, 7(r31)
/* 802F974C 002F668C  98 03 00 07 */	stb r0, 7(r3)
/* 802F9750 002F6690  88 1F 00 08 */	lbz r0, 8(r31)
/* 802F9754 002F6694  98 03 00 08 */	stb r0, 8(r3)
/* 802F9758 002F6698  88 1F 00 09 */	lbz r0, 9(r31)
/* 802F975C 002F669C  98 03 00 09 */	stb r0, 9(r3)
/* 802F9760 002F66A0  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 802F9764 002F66A4  B0 03 00 0A */	sth r0, 0xa(r3)
/* 802F9768 002F66A8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802F976C 002F66AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 802F9770 002F66B0  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802F9774 002F66B4  98 03 00 10 */	stb r0, 0x10(r3)
/* 802F9778 002F66B8  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 802F977C 002F66BC  98 03 00 11 */	stb r0, 0x11(r3)
/* 802F9780 002F66C0  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 802F9784 002F66C4  98 03 00 12 */	stb r0, 0x12(r3)
/* 802F9788 002F66C8  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 802F978C 002F66CC  98 03 00 13 */	stb r0, 0x13(r3)
/* 802F9790 002F66D0  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 802F9794 002F66D4  98 03 00 14 */	stb r0, 0x14(r3)
/* 802F9798 002F66D8  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 802F979C 002F66DC  98 03 00 15 */	stb r0, 0x15(r3)
/* 802F97A0 002F66E0  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 802F97A4 002F66E4  98 03 00 16 */	stb r0, 0x16(r3)
/* 802F97A8 002F66E8  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 802F97AC 002F66EC  98 03 00 17 */	stb r0, 0x17(r3)
/* 802F97B0 002F66F0  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802F97B4 002F66F4  98 03 00 18 */	stb r0, 0x18(r3)
/* 802F97B8 002F66F8  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 802F97BC 002F66FC  98 03 00 19 */	stb r0, 0x19(r3)
/* 802F97C0 002F6700  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 802F97C4 002F6704  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 802F97C8 002F6708  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802F97CC 002F670C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802F97D0 002F6710  80 64 00 04 */	lwz r3, 4(r4)
/* 802F97D4 002F6714  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F97D8 002F6718  7C 1F 02 14 */	add r0, r31, r0
/* 802F97DC 002F671C  7C 03 00 50 */	subf r0, r3, r0
/* 802F97E0 002F6720  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802F97E4 002F6724  80 64 00 04 */	lwz r3, 4(r4)
/* 802F97E8 002F6728  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802F97EC 002F672C  7C 1F 02 14 */	add r0, r31, r0
/* 802F97F0 002F6730  7C 03 00 50 */	subf r0, r3, r0
/* 802F97F4 002F6734  90 03 00 0C */	stw r0, 0xc(r3)
/* 802F97F8 002F6738  48 00 00 3C */	b lbl_802F9834
lbl_802F97FC:
/* 802F97FC 002F673C  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802F9800 002F6740  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802F9804 002F6744  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802F9808 002F6748  7C 84 1A 14 */	add r4, r4, r3
/* 802F980C 002F674C  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 802F9810 002F6750  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802F9814 002F6754  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802F9818 002F6758  7C 63 00 2E */	lwzx r3, r3, r0
/* 802F981C 002F675C  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802F9820 002F6760  81 83 00 00 */	lwz r12, 0(r3)
/* 802F9824 002F6764  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802F9828 002F6768  7D 89 03 A6 */	mtctr r12
/* 802F982C 002F676C  4E 80 04 21 */	bctrl 
/* 802F9830 002F6770  3B 9C 00 01 */	addi r28, r28, 1
lbl_802F9834:
/* 802F9834 002F6774  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802F9838 002F6778  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802F983C 002F677C  7C 03 00 40 */	cmplw r3, r0
/* 802F9840 002F6780  41 80 FF BC */	blt lbl_802F97FC
/* 802F9844 002F6784  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802F9848 002F6788  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F984C 002F678C  7C 08 03 A6 */	mtlr r0
/* 802F9850 002F6790  38 21 00 20 */	addi r1, r1, 0x20
/* 802F9854 002F6794  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreaturefP8CollPart:
/* 802F9858 002F6798  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F985C 002F679C  7C 08 02 A6 */	mflr r0
/* 802F9860 002F67A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F9864 002F67A4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 802F9868 002F67A8  FF E0 08 90 */	fmr f31, f1
/* 802F986C 002F67AC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802F9870 002F67B0  7C BF 2B 78 */	mr r31, r5
/* 802F9874 002F67B4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802F9878 002F67B8  7C 9E 23 78 */	mr r30, r4
/* 802F987C 002F67BC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802F9880 002F67C0  7C 7D 1B 78 */	mr r29, r3
/* 802F9884 002F67C4  80 63 02 30 */	lwz r3, 0x230(r3)
/* 802F9888 002F67C8  28 03 00 00 */	cmplwi r3, 0
/* 802F988C 002F67CC  41 82 00 5C */	beq lbl_802F98E8
/* 802F9890 002F67D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F9894 002F67D4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F9898 002F67D8  7D 89 03 A6 */	mtctr r12
/* 802F989C 002F67DC  4E 80 04 21 */	bctrl 
/* 802F98A0 002F67E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F98A4 002F67E4  41 82 00 44 */	beq lbl_802F98E8
/* 802F98A8 002F67E8  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 802F98AC 002F67EC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802F98B0 002F67F0  41 82 00 28 */	beq lbl_802F98D8
/* 802F98B4 002F67F4  80 7D 02 30 */	lwz r3, 0x230(r29)
/* 802F98B8 002F67F8  FC 20 F8 90 */	fmr f1, f31
/* 802F98BC 002F67FC  7F C4 F3 78 */	mr r4, r30
/* 802F98C0 002F6800  7F E5 FB 78 */	mr r5, r31
/* 802F98C4 002F6804  81 83 00 00 */	lwz r12, 0(r3)
/* 802F98C8 002F6808  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 802F98CC 002F680C  7D 89 03 A6 */	mtctr r12
/* 802F98D0 002F6810  4E 80 04 21 */	bctrl 
/* 802F98D4 002F6814  48 00 00 0C */	b lbl_802F98E0
lbl_802F98D8:
/* 802F98D8 002F6818  80 7D 02 30 */	lwz r3, 0x230(r29)
/* 802F98DC 002F681C  48 05 17 F5 */	bl forceBomb__Q34Game4Bomb3ObjFv
lbl_802F98E0:
/* 802F98E0 002F6820  38 60 00 01 */	li r3, 1
/* 802F98E4 002F6824  48 00 00 08 */	b lbl_802F98EC
lbl_802F98E8:
/* 802F98E8 002F6828  38 60 00 00 */	li r3, 0
lbl_802F98EC:
/* 802F98EC 002F682C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F98F0 002F6830  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 802F98F4 002F6834  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802F98F8 002F6838  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802F98FC 002F683C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 802F9900 002F6840  7C 08 03 A6 */	mtlr r0
/* 802F9904 002F6844  38 21 00 20 */	addi r1, r1, 0x20
/* 802F9908 002F6848  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreaturefP8CollPart:
/* 802F990C 002F684C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9910 002F6850  7C 08 02 A6 */	mflr r0
/* 802F9914 002F6854  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9918 002F6858  81 83 00 00 */	lwz r12, 0(r3)
/* 802F991C 002F685C  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 802F9920 002F6860  7D 89 03 A6 */	mtctr r12
/* 802F9924 002F6864  4E 80 04 21 */	bctrl 
/* 802F9928 002F6868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F992C 002F686C  7C 08 03 A6 */	mtlr r0
/* 802F9930 002F6870  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9934 002F6874  4E 80 00 20 */	blr 

.global earthquakeCallBack__Q34Game11BombOtakara3ObjFPQ24Game8Creaturef
earthquakeCallBack__Q34Game11BombOtakara3ObjFPQ24Game8Creaturef:
/* 802F9938 002F6878  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F993C 002F687C  7C 08 02 A6 */	mflr r0
/* 802F9940 002F6880  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F9944 002F6884  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 802F9948 002F6888  FF E0 08 90 */	fmr f31, f1
/* 802F994C 002F688C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802F9950 002F6890  7C 9F 23 78 */	mr r31, r4
/* 802F9954 002F6894  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802F9958 002F6898  7C 7E 1B 78 */	mr r30, r3
/* 802F995C 002F689C  80 63 02 30 */	lwz r3, 0x230(r3)
/* 802F9960 002F68A0  28 03 00 00 */	cmplwi r3, 0
/* 802F9964 002F68A4  41 82 00 24 */	beq lbl_802F9988
/* 802F9968 002F68A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802F996C 002F68AC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F9970 002F68B0  7D 89 03 A6 */	mtctr r12
/* 802F9974 002F68B4  4E 80 04 21 */	bctrl 
/* 802F9978 002F68B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F997C 002F68BC  41 82 00 0C */	beq lbl_802F9988
/* 802F9980 002F68C0  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 802F9984 002F68C4  48 05 17 4D */	bl forceBomb__Q34Game4Bomb3ObjFv
lbl_802F9988:
/* 802F9988 002F68C8  FC 20 F8 90 */	fmr f1, f31
/* 802F998C 002F68CC  7F C3 F3 78 */	mr r3, r30
/* 802F9990 002F68D0  7F E4 FB 78 */	mr r4, r31
/* 802F9994 002F68D4  4B E0 CA 31 */	bl earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
/* 802F9998 002F68D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F999C 002F68DC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 802F99A0 002F68E0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802F99A4 002F68E4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802F99A8 002F68E8  7C 08 03 A6 */	mtlr r0
/* 802F99AC 002F68EC  38 21 00 20 */	addi r1, r1, 0x20
/* 802F99B0 002F68F0  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game11BombOtakara3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 802F99B4 002F68F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F99B8 002F68F8  7C 08 02 A6 */	mflr r0
/* 802F99BC 002F68FC  38 A0 00 00 */	li r5, 0
/* 802F99C0 002F6900  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F99C4 002F6904  81 83 00 00 */	lwz r12, 0(r3)
/* 802F99C8 002F6908  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 802F99CC 002F690C  7D 89 03 A6 */	mtctr r12
/* 802F99D0 002F6910  4E 80 04 21 */	bctrl 
/* 802F99D4 002F6914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F99D8 002F6918  7C 08 03 A6 */	mtlr r0
/* 802F99DC 002F691C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F99E0 002F6920  4E 80 00 20 */	blr 

.global startEscapeSE__Q34Game11BombOtakara3ObjFv
startEscapeSE__Q34Game11BombOtakara3ObjFv:
/* 802F99E4 002F6924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F99E8 002F6928  7C 08 02 A6 */	mflr r0
/* 802F99EC 002F692C  C0 02 EF 90 */	lfs f0, lbl_8051D2F0@sda21(r2)
/* 802F99F0 002F6930  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F99F4 002F6934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F99F8 002F6938  7C 7F 1B 78 */	mr r31, r3
/* 802F99FC 002F693C  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 802F9A00 002F6940  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F9A04 002F6944  40 81 00 38 */	ble lbl_802F9A3C
/* 802F9A08 002F6948  81 83 00 00 */	lwz r12, 0(r3)
/* 802F9A0C 002F694C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802F9A10 002F6950  7D 89 03 A6 */	mtctr r12
/* 802F9A14 002F6954  4E 80 04 21 */	bctrl 
/* 802F9A18 002F6958  81 83 00 00 */	lwz r12, 0(r3)
/* 802F9A1C 002F695C  38 80 58 F0 */	li r4, 0x58f0
/* 802F9A20 002F6960  38 A0 00 00 */	li r5, 0
/* 802F9A24 002F6964  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802F9A28 002F6968  7D 89 03 A6 */	mtctr r12
/* 802F9A2C 002F696C  4E 80 04 21 */	bctrl 
/* 802F9A30 002F6970  C0 02 EF 94 */	lfs f0, lbl_8051D2F4@sda21(r2)
/* 802F9A34 002F6974  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802F9A38 002F6978  48 00 00 14 */	b lbl_802F9A4C
lbl_802F9A3C:
/* 802F9A3C 002F697C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F9A40 002F6980  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F9A44 002F6984  EC 01 00 2A */	fadds f0, f1, f0
/* 802F9A48 002F6988  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
lbl_802F9A4C:
/* 802F9A4C 002F698C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9A50 002F6990  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F9A54 002F6994  7C 08 03 A6 */	mtlr r0
/* 802F9A58 002F6998  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9A5C 002F699C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11BombOtakara3ObjFv
getEnemyTypeID__Q34Game11BombOtakara3ObjFv:
/* 802F9A60 002F69A0  38 60 00 5D */	li r3, 0x5d
/* 802F9A64 002F69A4  4E 80 00 20 */	blr 

.global interactCreature__Q34Game11BombOtakara3ObjFPQ24Game8Creature
interactCreature__Q34Game11BombOtakara3ObjFPQ24Game8Creature:
/* 802F9A68 002F69A8  4E 80 00 20 */	blr 

.global createEffect__Q34Game11BombOtakara3ObjFv
createEffect__Q34Game11BombOtakara3ObjFv:
/* 802F9A6C 002F69AC  4E 80 00 20 */	blr 

.global setupEffect__Q34Game11BombOtakara3ObjFv
setupEffect__Q34Game11BombOtakara3ObjFv:
/* 802F9A70 002F69B0  4E 80 00 20 */	blr 

.global startChargeEffect__Q34Game11BombOtakara3ObjFv
startChargeEffect__Q34Game11BombOtakara3ObjFv:
/* 802F9A74 002F69B4  4E 80 00 20 */	blr 

.global finishChargeEffect__Q34Game11BombOtakara3ObjFv
finishChargeEffect__Q34Game11BombOtakara3ObjFv:
/* 802F9A78 002F69B8  4E 80 00 20 */	blr 

.global createDisChargeEffect__Q34Game11BombOtakara3ObjFv
createDisChargeEffect__Q34Game11BombOtakara3ObjFv:
/* 802F9A7C 002F69BC  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game11BombOtakara3ObjFv
effectDrawOn__Q34Game11BombOtakara3ObjFv:
/* 802F9A80 002F69C0  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game11BombOtakara3ObjFv
effectDrawOff__Q34Game11BombOtakara3ObjFv:
/* 802F9A84 002F69C4  4E 80 00 20 */	blr 

.global startDisChargeSE__Q34Game11BombOtakara3ObjFv
startDisChargeSE__Q34Game11BombOtakara3ObjFv:
/* 802F9A88 002F69C8  4E 80 00 20 */	blr 
