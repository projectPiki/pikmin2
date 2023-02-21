.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_shijimiChou_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80493F80, local
	.asciz "shijimiChou"
.endobj lbl_80493F80
.balign 4
.obj lbl_80493F8C, local
	.asciz "mat_shijimi_hane_v"
.endobj lbl_80493F8C
.balign 4
.obj lbl_80493FA0, local
	.asciz "shijimiChou.cpp"
.endobj lbl_80493FA0
.balign 4
.obj lbl_80493FB0, local
	.asciz "P2Assert"
.endobj lbl_80493FB0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx8TChouHit, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx8TChouHit
.obj __vt__Q23efx7ArgChou, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx7ArgChouFv
.endobj __vt__Q23efx7ArgChou
.obj __vt__Q34Game11ShijimiChou3Obj, global
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
	.4byte onInit__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q34Game11ShijimiChou3ObjFv
	.4byte doEntry__Q34Game11ShijimiChou3ObjFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game11ShijimiChou3ObjFf
	.4byte doDirectDraw__Q34Game11ShijimiChou3ObjFR8Graphics
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
	.4byte collisionCallback__Q34Game11ShijimiChou3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game11ShijimiChou3ObjFRQ24Game11ShadowParam
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
	.4byte ignoreAtari__Q34Game11ShijimiChou3ObjFPQ24Game8Creature
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
	.4byte __dt__Q34Game11ShijimiChou3ObjFv
	.4byte "birth__Q34Game11ShijimiChou3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game11ShijimiChou3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game11ShijimiChou3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game11ShijimiChou3ObjFv
	.4byte doAnimationCullingOn__Q34Game11ShijimiChou3ObjFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game11ShijimiChou3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game11ShijimiChou3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
	.4byte setParameters__Q34Game11ShijimiChou3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11ShijimiChou3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game11ShijimiChou3ObjFv
	.4byte doFinishStoneState__Q24Game9EnemyBaseFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game11ShijimiChou3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q34Game11ShijimiChou3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game11ShijimiChou3ObjFv
	.4byte doEndMovie__Q34Game11ShijimiChou3ObjFv
	.4byte setFSM__Q34Game11ShijimiChou3ObjFPQ34Game11ShijimiChou3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@828@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@828@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@828@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@828@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@828@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@828@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game11ShijimiChou3Obj

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mMatColorY0__Q24Game11ShijimiChou, local
	.skip 0x8
.endobj mMatColorY0__Q24Game11ShijimiChou
.obj mMatColorR0__Q24Game11ShijimiChou, local
	.skip 0x8
.endobj mMatColorR0__Q24Game11ShijimiChou
.obj mMatColorB0__Q24Game11ShijimiChou, local
	.skip 0x8
.endobj mMatColorB0__Q24Game11ShijimiChou
.obj mMatKColorY__Q24Game11ShijimiChou, local
	.skip 0x4
.endobj mMatKColorY__Q24Game11ShijimiChou
.obj mMatKColorR__Q24Game11ShijimiChou, local
	.skip 0x4
.endobj mMatKColorR__Q24Game11ShijimiChou
.obj mMatKColorB__Q24Game11ShijimiChou, local
	.skip 0x4
.endobj mMatKColorB__Q24Game11ShijimiChou

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051EEF8, local
	.float 32768.0
.endobj lbl_8051EEF8
.balign 8
.obj lbl_8051EF00, local
	.8byte 0x4330000080000000
.endobj lbl_8051EF00
.obj lbl_8051EF08, local
	.float 0.0
.endobj lbl_8051EF08
.obj lbl_8051EF0C, local # tau
	.float 6.2831855
.endobj lbl_8051EF0C
.obj lbl_8051EF10, local
	.float -325.9493
.endobj lbl_8051EF10
.obj lbl_8051EF14, local
	.float 325.9493
.endobj lbl_8051EF14
.obj lbl_8051EF18, local
	.float 3.0
.endobj lbl_8051EF18
.obj lbl_8051EF1C, local
	.float 0.1
.endobj lbl_8051EF1C
.obj lbl_8051EF20, local
	.float 2.0
.endobj lbl_8051EF20
.obj lbl_8051EF24, local
	.float 100.0
.endobj lbl_8051EF24
.obj lbl_8051EF28, local
	.float 1.0
.endobj lbl_8051EF28
.obj lbl_8051EF2C, local
	.float 20.0
.endobj lbl_8051EF2C
.obj lbl_8051EF30, local
	.float 7.0
.endobj lbl_8051EF30
.obj lbl_8051EF34, local
	.float 50.0
.endobj lbl_8051EF34
.obj lbl_8051EF38, local
	.float 200.0
.endobj lbl_8051EF38
.obj lbl_8051EF3C, local
	.float 1000.0
.endobj lbl_8051EF3C
.obj lbl_8051EF40, local
	.float 360.0
.endobj lbl_8051EF40
.obj lbl_8051EF44, local # pi
	.float 3.1415927
.endobj lbl_8051EF44
.obj lbl_8051EF48, local
	.float 0.0055555557
.endobj lbl_8051EF48
.obj lbl_8051EF4C, local
	.float 0.01
.endobj lbl_8051EF4C
.obj lbl_8051EF50, local
	.float 0.2
.endobj lbl_8051EF50
.obj lbl_8051EF54, local
	.float 0.05
.endobj lbl_8051EF54
.obj lbl_8051EF58, local
	.float 1.2
.endobj lbl_8051EF58
.obj lbl_8051EF5C, local
	.float 0.3
.endobj lbl_8051EF5C
.obj lbl_8051EF60, local
	.float 0.02
.endobj lbl_8051EF60
.obj lbl_8051EF64, local
	.float -1.0
.endobj lbl_8051EF64
.obj lbl_8051EF68, local
	.float 500.0
.endobj lbl_8051EF68
.obj lbl_8051EF6C, local
	.float 180.0
.endobj lbl_8051EF6C
.obj lbl_8051EF70, local
	.float 0.5
.endobj lbl_8051EF70
.obj lbl_8051EF74, local
	.float 10.0
.endobj lbl_8051EF74
.obj lbl_8051EF78, local
	.float 0.35
.endobj lbl_8051EF78
.balign 4
.obj lbl_8051EF7C, local
	.asciz "ArgChou"
.endobj lbl_8051EF7C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn setParameters__Q34Game11ShijimiChou3ObjFv, global
/* 80389634 00386574  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80389638 00386578  7C 08 02 A6 */	mflr r0
/* 8038963C 0038657C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80389640 00386580  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80389644 00386584  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80389648 00386588  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8038964C 0038658C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80389650 00386590  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80389654 00386594  7C 7F 1B 78 */	mr r31, r3
/* 80389658 00386598  4B D7 95 81 */	bl setParameters__Q24Game9EnemyBaseFv
/* 8038965C 0038659C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80389660 003865A0  C3 E3 09 60 */	lfs f31, 0x960(r3)
/* 80389664 003865A4  C3 C3 09 64 */	lfs f30, 0x964(r3)
/* 80389668 003865A8  4B D3 FF 39 */	bl rand
/* 8038966C 003865AC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80389670 003865B0  3C 00 43 30 */	lis r0, 0x4330
/* 80389674 003865B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80389678 003865B8  EC 1F F0 28 */	fsubs f0, f31, f30
/* 8038967C 003865BC  C8 62 0B A0 */	lfd f3, lbl_8051EF00@sda21(r2)
/* 80389680 003865C0  90 01 00 08 */	stw r0, 8(r1)
/* 80389684 003865C4  C0 22 0B 98 */	lfs f1, lbl_8051EEF8@sda21(r2)
/* 80389688 003865C8  C8 41 00 08 */	lfd f2, 8(r1)
/* 8038968C 003865CC  EC 42 18 28 */	fsubs f2, f2, f3
/* 80389690 003865D0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80389694 003865D4  EC 20 F0 7A */	fmadds f1, f0, f1, f30
/* 80389698 003865D8  D0 3F 01 F8 */	stfs f1, 0x1f8(r31)
/* 8038969C 003865DC  D0 3F 01 68 */	stfs f1, 0x168(r31)
/* 803896A0 003865E0  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 803896A4 003865E4  D0 3F 01 70 */	stfs f1, 0x170(r31)
/* 803896A8 003865E8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803896AC 003865EC  80 63 00 00 */	lwz r3, 0(r3)
/* 803896B0 003865F0  4B DA E7 5D */	bl setScale__8CollPartFf
/* 803896B4 003865F4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803896B8 003865F8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803896BC 003865FC  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 803896C0 00386600  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 803896C4 00386604  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803896C8 00386608  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803896CC 0038660C  7C 08 03 A6 */	mtlr r0
/* 803896D0 00386610  38 21 00 40 */	addi r1, r1, 0x40
/* 803896D4 00386614  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game11ShijimiChou3ObjFv

.fn "birth__Q34Game11ShijimiChou3ObjFR10Vector3<f>f", global
/* 803896D8 00386618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803896DC 0038661C  7C 08 02 A6 */	mflr r0
/* 803896E0 00386620  90 01 00 14 */	stw r0, 0x14(r1)
/* 803896E4 00386624  4B D7 93 1D */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 803896E8 00386628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803896EC 0038662C  7C 08 03 A6 */	mtlr r0
/* 803896F0 00386630  38 21 00 10 */	addi r1, r1, 0x10
/* 803896F4 00386634  4E 80 00 20 */	blr 
.endfn "birth__Q34Game11ShijimiChou3ObjFR10Vector3<f>f"

.fn onInit__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureInitArg, global
/* 803896F8 00386638  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803896FC 0038663C  7C 08 02 A6 */	mflr r0
/* 80389700 00386640  3C A0 80 49 */	lis r5, lbl_80493F80@ha
/* 80389704 00386644  90 01 00 44 */	stw r0, 0x44(r1)
/* 80389708 00386648  BE A1 00 14 */	stmw r21, 0x14(r1)
/* 8038970C 0038664C  7C 7E 1B 78 */	mr r30, r3
/* 80389710 00386650  3B E5 3F 80 */	addi r31, r5, lbl_80493F80@l
/* 80389714 00386654  4B D7 83 45 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80389718 00386658  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8038971C 0038665C  38 7E 02 DC */	addi r3, r30, 0x2dc
/* 80389720 00386660  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 80389724 00386664  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 80389728 00386668  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8038972C 0038666C  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80389730 00386670  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 80389734 00386674  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 80389738 00386678  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8038973C 0038667C  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 80389740 00386680  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 80389744 00386684  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 80389748 00386688  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8038974C 0038668C  80 9E 01 80 */	lwz r4, 0x180(r30)
/* 80389750 00386690  80 84 00 44 */	lwz r4, 0x44(r4)
/* 80389754 00386694  4B E0 CF 91 */	bl init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
/* 80389758 00386698  4B D3 FE 49 */	bl rand
/* 8038975C 0038669C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80389760 003866A0  3C 60 43 30 */	lis r3, 0x4330
/* 80389764 003866A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80389768 003866A8  38 00 00 00 */	li r0, 0
/* 8038976C 003866AC  C8 62 0B A0 */	lfd f3, lbl_8051EF00@sda21(r2)
/* 80389770 003866B0  90 61 00 08 */	stw r3, 8(r1)
/* 80389774 003866B4  C0 02 0B 98 */	lfs f0, lbl_8051EEF8@sda21(r2)
/* 80389778 003866B8  C8 41 00 08 */	lfd f2, 8(r1)
/* 8038977C 003866BC  C0 22 0B A8 */	lfs f1, lbl_8051EF08@sda21(r2)
/* 80389780 003866C0  EC 42 18 28 */	fsubs f2, f2, f3
/* 80389784 003866C4  EC 02 00 24 */	fdivs f0, f2, f0
/* 80389788 003866C8  D0 1E 02 F0 */	stfs f0, 0x2f0(r30)
/* 8038978C 003866CC  D0 3E 02 F4 */	stfs f1, 0x2f4(r30)
/* 80389790 003866D0  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 80389794 003866D4  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 80389798 003866D8  D0 1E 03 04 */	stfs f0, 0x304(r30)
/* 8038979C 003866DC  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 803897A0 003866E0  D0 1E 03 08 */	stfs f0, 0x308(r30)
/* 803897A4 003866E4  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 803897A8 003866E8  D0 1E 03 0C */	stfs f0, 0x30c(r30)
/* 803897AC 003866EC  D0 3E 02 F8 */	stfs f1, 0x2f8(r30)
/* 803897B0 003866F0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 803897B4 003866F4  D0 1E 02 FC */	stfs f0, 0x2fc(r30)
/* 803897B8 003866F8  D0 3E 03 00 */	stfs f1, 0x300(r30)
/* 803897BC 003866FC  98 1E 03 20 */	stb r0, 0x320(r30)
/* 803897C0 00386700  D0 3E 03 24 */	stfs f1, 0x324(r30)
/* 803897C4 00386704  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 803897C8 00386708  D0 1E 03 30 */	stfs f0, 0x330(r30)
/* 803897CC 0038670C  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 803897D0 00386710  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 803897D4 00386714  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 803897D8 00386718  D0 1E 01 9C */	stfs f0, 0x19c(r30)
/* 803897DC 0038671C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 803897E0 00386720  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 803897E4 00386724  90 1E 02 C8 */	stw r0, 0x2c8(r30)
/* 803897E8 00386728  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 803897EC 0038672C  80 7E 02 E8 */	lwz r3, 0x2e8(r30)
/* 803897F0 00386730  28 03 00 00 */	cmplwi r3, 0
/* 803897F4 00386734  41 82 00 14 */	beq .L_80389808
/* 803897F8 00386738  7C 03 F0 40 */	cmplw r3, r30
/* 803897FC 0038673C  41 82 00 0C */	beq .L_80389808
/* 80389800 00386740  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 80389804 00386744  90 1E 02 C0 */	stw r0, 0x2c0(r30)
.L_80389808:
/* 80389808 00386748  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 8038980C 0038674C  38 00 00 00 */	li r0, 0
/* 80389810 00386750  7F C4 F3 78 */	mr r4, r30
/* 80389814 00386754  38 A0 00 01 */	li r5, 1
/* 80389818 00386758  54 63 06 B0 */	rlwinm r3, r3, 0, 0x1a, 0x18
/* 8038981C 0038675C  90 7E 01 E0 */	stw r3, 0x1e0(r30)
/* 80389820 00386760  98 1E 01 F3 */	stb r0, 0x1f3(r30)
/* 80389824 00386764  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80389828 00386768  4B EB 88 D9 */	bl setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
/* 8038982C 0038676C  3A A0 00 FF */	li r21, 0xff
/* 80389830 00386770  3A CD 99 50 */	addi r22, r13, mMatColorY0__Q24Game11ShijimiChou@sda21
/* 80389834 00386774  3A E0 00 AF */	li r23, 0xaf
/* 80389838 00386778  3B 60 00 5A */	li r27, 0x5a
/* 8038983C 0038677C  39 60 00 55 */	li r11, 0x55
/* 80389840 00386780  38 E0 00 50 */	li r7, 0x50
/* 80389844 00386784  38 A0 00 05 */	li r5, 5
/* 80389848 00386788  38 CD 99 6C */	addi r6, r13, mMatKColorR__Q24Game11ShijimiChou@sda21
/* 8038984C 0038678C  39 00 00 0A */	li r8, 0xa
/* 80389850 00386790  39 2D 99 68 */	addi r9, r13, mMatKColorY__Q24Game11ShijimiChou@sda21
/* 80389854 00386794  39 40 00 2D */	li r10, 0x2d
/* 80389858 00386798  38 6D 99 70 */	addi r3, r13, mMatKColorB__Q24Game11ShijimiChou@sda21
/* 8038985C 0038679C  38 00 00 11 */	li r0, 0x11
/* 80389860 003867A0  3B 00 00 78 */	li r24, 0x78
/* 80389864 003867A4  3B 2D 99 58 */	addi r25, r13, mMatColorR0__Q24Game11ShijimiChou@sda21
/* 80389868 003867A8  3B 40 00 B4 */	li r26, 0xb4
/* 8038986C 003867AC  3B 80 00 1E */	li r28, 0x1e
/* 80389870 003867B0  3B AD 99 60 */	addi r29, r13, mMatColorB0__Q24Game11ShijimiChou@sda21
/* 80389874 003867B4  39 80 00 D2 */	li r12, 0xd2
/* 80389878 003867B8  B2 AD 99 50 */	sth r21, mMatColorY0__Q24Game11ShijimiChou@sda21(r13)
/* 8038987C 003867BC  38 9F 00 0C */	addi r4, r31, 0xc
/* 80389880 003867C0  B2 B6 00 02 */	sth r21, 2(r22)
/* 80389884 003867C4  B2 F6 00 04 */	sth r23, 4(r22)
/* 80389888 003867C8  B2 AD 99 58 */	sth r21, mMatColorR0__Q24Game11ShijimiChou@sda21(r13)
/* 8038988C 003867CC  B3 19 00 02 */	sth r24, 2(r25)
/* 80389890 003867D0  B3 59 00 04 */	sth r26, 4(r25)
/* 80389894 003867D4  B3 6D 99 60 */	sth r27, mMatColorB0__Q24Game11ShijimiChou@sda21(r13)
/* 80389898 003867D8  B3 9D 00 02 */	sth r28, 2(r29)
/* 8038989C 003867DC  B1 9D 00 04 */	sth r12, 4(r29)
/* 803898A0 003867E0  99 6D 99 68 */	stb r11, mMatKColorY__Q24Game11ShijimiChou@sda21(r13)
/* 803898A4 003867E4  99 49 00 01 */	stb r10, 1(r9)
/* 803898A8 003867E8  99 09 00 02 */	stb r8, 2(r9)
/* 803898AC 003867EC  98 ED 99 6C */	stb r7, mMatKColorR__Q24Game11ShijimiChou@sda21(r13)
/* 803898B0 003867F0  99 06 00 01 */	stb r8, 1(r6)
/* 803898B4 003867F4  98 A6 00 02 */	stb r5, 2(r6)
/* 803898B8 003867F8  98 AD 99 70 */	stb r5, mMatKColorB__Q24Game11ShijimiChou@sda21(r13)
/* 803898BC 003867FC  98 03 00 01 */	stb r0, 1(r3)
/* 803898C0 00386800  98 A3 00 02 */	stb r5, 2(r3)
/* 803898C4 00386804  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 803898C8 00386808  80 63 00 08 */	lwz r3, 8(r3)
/* 803898CC 0038680C  82 A3 00 04 */	lwz r21, 4(r3)
/* 803898D0 00386810  80 75 00 64 */	lwz r3, 0x64(r21)
/* 803898D4 00386814  4B CA 54 B1 */	bl getIndex__10JUTNameTabCFPCc
/* 803898D8 00386818  80 95 00 60 */	lwz r4, 0x60(r21)
/* 803898DC 0038681C  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 803898E0 00386820  7C 04 00 2E */	lwzx r0, r4, r0
/* 803898E4 00386824  90 1E 02 EC */	stw r0, 0x2ec(r30)
/* 803898E8 00386828  80 1E 02 EC */	lwz r0, 0x2ec(r30)
/* 803898EC 0038682C  28 00 00 00 */	cmplwi r0, 0
/* 803898F0 00386830  40 82 00 18 */	bne .L_80389908
/* 803898F4 00386834  38 7F 00 20 */	addi r3, r31, 0x20
/* 803898F8 00386838  38 BF 00 30 */	addi r5, r31, 0x30
/* 803898FC 0038683C  38 80 00 6B */	li r4, 0x6b
/* 80389900 00386840  4C C6 31 82 */	crclr 6
/* 80389904 00386844  4B CA 0D 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80389908:
/* 80389908 00386848  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 8038990C 0038684C  7F C4 F3 78 */	mr r4, r30
/* 80389910 00386850  38 A0 00 00 */	li r5, 0
/* 80389914 00386854  38 C0 00 00 */	li r6, 0
/* 80389918 00386858  81 83 00 00 */	lwz r12, 0(r3)
/* 8038991C 0038685C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80389920 00386860  7D 89 03 A6 */	mtctr r12
/* 80389924 00386864  4E 80 04 21 */	bctrl 
/* 80389928 00386868  38 00 00 00 */	li r0, 0
/* 8038992C 0038686C  98 1E 03 21 */	stb r0, 0x321(r30)
/* 80389930 00386870  BA A1 00 14 */	lmw r21, 0x14(r1)
/* 80389934 00386874  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80389938 00386878  7C 08 03 A6 */	mtlr r0
/* 8038993C 0038687C  38 21 00 40 */	addi r1, r1, 0x40
/* 80389940 00386880  4E 80 00 20 */	blr 
.endfn onInit__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureInitArg

.fn __ct__Q34Game11ShijimiChou3ObjFv, global
/* 80389944 00386884  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389948 00386888  7C 08 02 A6 */	mflr r0
/* 8038994C 0038688C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389950 00386890  7C 80 07 35 */	extsh. r0, r4
/* 80389954 00386894  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80389958 00386898  7C 7F 1B 78 */	mr r31, r3
/* 8038995C 0038689C  93 C1 00 08 */	stw r30, 8(r1)
/* 80389960 003868A0  41 82 00 24 */	beq .L_80389984
/* 80389964 003868A4  38 1F 03 3C */	addi r0, r31, 0x33c
/* 80389968 003868A8  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8038996C 003868AC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80389970 003868B0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80389974 003868B4  38 00 00 00 */	li r0, 0
/* 80389978 003868B8  90 7F 03 3C */	stw r3, 0x33c(r31)
/* 8038997C 003868BC  90 1F 03 40 */	stw r0, 0x340(r31)
/* 80389980 003868C0  90 1F 03 44 */	stw r0, 0x344(r31)
.L_80389984:
/* 80389984 003868C4  7F E3 FB 78 */	mr r3, r31
/* 80389988 003868C8  38 80 00 00 */	li r4, 0
/* 8038998C 003868CC  4B D7 7A 15 */	bl __ct__Q24Game9EnemyBaseFv
/* 80389990 003868D0  3C 60 80 4E */	lis r3, __vt__Q34Game11ShijimiChou3Obj@ha
/* 80389994 003868D4  38 9F 03 3C */	addi r4, r31, 0x33c
/* 80389998 003868D8  38 63 4D 00 */	addi r3, r3, __vt__Q34Game11ShijimiChou3Obj@l
/* 8038999C 003868DC  38 00 00 00 */	li r0, 0
/* 803899A0 003868E0  90 7F 00 00 */	stw r3, 0(r31)
/* 803899A4 003868E4  38 A3 01 B0 */	addi r5, r3, 0x1b0
/* 803899A8 003868E8  38 C3 02 FC */	addi r6, r3, 0x2fc
/* 803899AC 003868EC  38 7F 02 DC */	addi r3, r31, 0x2dc
/* 803899B0 003868F0  90 BF 01 78 */	stw r5, 0x178(r31)
/* 803899B4 003868F4  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 803899B8 003868F8  90 C5 00 00 */	stw r6, 0(r5)
/* 803899BC 003868FC  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 803899C0 00386900  7C 85 20 50 */	subf r4, r5, r4
/* 803899C4 00386904  90 85 00 0C */	stw r4, 0xc(r5)
/* 803899C8 00386908  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 803899CC 0038690C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 803899D0 00386910  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803899D4 00386914  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 803899D8 00386918  4B E0 CC 99 */	bl __ct__Q24Game13UpdateContextFv
/* 803899DC 0038691C  38 00 00 00 */	li r0, 0
/* 803899E0 00386920  38 60 00 2C */	li r3, 0x2c
/* 803899E4 00386924  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 803899E8 00386928  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 803899EC 0038692C  98 1F 03 20 */	stb r0, 0x320(r31)
/* 803899F0 00386930  90 1F 03 28 */	stw r0, 0x328(r31)
/* 803899F4 00386934  90 1F 03 2C */	stw r0, 0x32c(r31)
/* 803899F8 00386938  90 1F 03 34 */	stw r0, 0x334(r31)
/* 803899FC 0038693C  90 1F 03 38 */	stw r0, 0x338(r31)
/* 80389A00 00386940  4B C9 A4 A5 */	bl __nw__FUl
/* 80389A04 00386944  7C 7E 1B 79 */	or. r30, r3, r3
/* 80389A08 00386948  41 82 00 44 */	beq .L_80389A4C
/* 80389A0C 0038694C  4B D9 DF 69 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80389A10 00386950  3C 60 80 4E */	lis r3, __vt__Q34Game11ShijimiChou14ProperAnimator@ha
/* 80389A14 00386954  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80389A18 00386958  38 03 4B C8 */	addi r0, r3, __vt__Q34Game11ShijimiChou14ProperAnimator@l
/* 80389A1C 0038695C  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80389A20 00386960  90 1E 00 00 */	stw r0, 0(r30)
/* 80389A24 00386964  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80389A28 00386968  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80389A2C 0038696C  38 00 00 00 */	li r0, 0
/* 80389A30 00386970  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80389A34 00386974  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80389A38 00386978  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80389A3C 0038697C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80389A40 00386980  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80389A44 00386984  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80389A48 00386988  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80389A4C:
/* 80389A4C 0038698C  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80389A50 00386990  38 60 00 1C */	li r3, 0x1c
/* 80389A54 00386994  4B C9 A4 51 */	bl __nw__FUl
/* 80389A58 00386998  7C 64 1B 79 */	or. r4, r3, r3
/* 80389A5C 0038699C  41 82 00 24 */	beq .L_80389A80
/* 80389A60 003869A0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80389A64 003869A4  3C 60 80 4E */	lis r3, __vt__Q34Game11ShijimiChou3FSM@ha
/* 80389A68 003869A8  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80389A6C 003869AC  38 A0 FF FF */	li r5, -1
/* 80389A70 003869B0  90 04 00 00 */	stw r0, 0(r4)
/* 80389A74 003869B4  38 03 4B A4 */	addi r0, r3, __vt__Q34Game11ShijimiChou3FSM@l
/* 80389A78 003869B8  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80389A7C 003869BC  90 04 00 00 */	stw r0, 0(r4)
.L_80389A80:
/* 80389A80 003869C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80389A84 003869C4  7F E3 FB 78 */	mr r3, r31
/* 80389A88 003869C8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 80389A8C 003869CC  7D 89 03 A6 */	mtctr r12
/* 80389A90 003869D0  4E 80 04 21 */	bctrl 
/* 80389A94 003869D4  38 60 00 14 */	li r3, 0x14
/* 80389A98 003869D8  4B C9 A4 0D */	bl __nw__FUl
/* 80389A9C 003869DC  28 03 00 00 */	cmplwi r3, 0
/* 80389AA0 003869E0  41 82 00 78 */	beq .L_80389B18
/* 80389AA4 003869E4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80389AA8 003869E8  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80389AAC 003869EC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80389AB0 003869F0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80389AB4 003869F4  90 03 00 00 */	stw r0, 0(r3)
/* 80389AB8 003869F8  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80389ABC 003869FC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80389AC0 00386A00  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80389AC4 00386A04  90 03 00 04 */	stw r0, 4(r3)
/* 80389AC8 00386A08  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 80389ACC 00386A0C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChouDown@ha
/* 80389AD0 00386A10  38 05 00 14 */	addi r0, r5, 0x14
/* 80389AD4 00386A14  90 A3 00 00 */	stw r5, 0(r3)
/* 80389AD8 00386A18  38 84 6F F4 */	addi r4, r4, __vt__Q23efx9TChouDown@l
/* 80389ADC 00386A1C  39 20 00 00 */	li r9, 0
/* 80389AE0 00386A20  39 00 02 B2 */	li r8, 0x2b2
/* 80389AE4 00386A24  90 03 00 04 */	stw r0, 4(r3)
/* 80389AE8 00386A28  38 C7 00 14 */	addi r6, r7, 0x14
/* 80389AEC 00386A2C  38 BF 01 8C */	addi r5, r31, 0x18c
/* 80389AF0 00386A30  38 04 00 14 */	addi r0, r4, 0x14
/* 80389AF4 00386A34  91 23 00 08 */	stw r9, 8(r3)
/* 80389AF8 00386A38  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80389AFC 00386A3C  99 23 00 0E */	stb r9, 0xe(r3)
/* 80389B00 00386A40  90 E3 00 00 */	stw r7, 0(r3)
/* 80389B04 00386A44  90 C3 00 04 */	stw r6, 4(r3)
/* 80389B08 00386A48  90 A3 00 10 */	stw r5, 0x10(r3)
/* 80389B0C 00386A4C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80389B10 00386A50  90 83 00 00 */	stw r4, 0(r3)
/* 80389B14 00386A54  90 03 00 04 */	stw r0, 4(r3)
.L_80389B18:
/* 80389B18 00386A58  90 7F 03 34 */	stw r3, 0x334(r31)
/* 80389B1C 00386A5C  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 80389B20 00386A60  28 00 00 00 */	cmplwi r0, 0
/* 80389B24 00386A64  40 82 00 20 */	bne .L_80389B44
/* 80389B28 00386A68  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 80389B2C 00386A6C  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 80389B30 00386A70  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 80389B34 00386A74  38 80 00 8C */	li r4, 0x8c
/* 80389B38 00386A78  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 80389B3C 00386A7C  4C C6 31 82 */	crclr 6
/* 80389B40 00386A80  4B CA 0B 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80389B44:
/* 80389B44 00386A84  7F E3 FB 78 */	mr r3, r31
/* 80389B48 00386A88  48 0E 46 C9 */	bl newPSCluster_SijimiChou__FPQ24Game8Creature
/* 80389B4C 00386A8C  90 7F 03 38 */	stw r3, 0x338(r31)
/* 80389B50 00386A90  80 1F 03 38 */	lwz r0, 0x338(r31)
/* 80389B54 00386A94  28 00 00 00 */	cmplwi r0, 0
/* 80389B58 00386A98  40 82 00 20 */	bne .L_80389B78
/* 80389B5C 00386A9C  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 80389B60 00386AA0  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 80389B64 00386AA4  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 80389B68 00386AA8  38 80 00 8F */	li r4, 0x8f
/* 80389B6C 00386AAC  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 80389B70 00386AB0  4C C6 31 82 */	crclr 6
/* 80389B74 00386AB4  4B CA 0A CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80389B78:
/* 80389B78 00386AB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389B7C 00386ABC  7F E3 FB 78 */	mr r3, r31
/* 80389B80 00386AC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80389B84 00386AC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80389B88 00386AC8  7C 08 03 A6 */	mtlr r0
/* 80389B8C 00386ACC  38 21 00 10 */	addi r1, r1, 0x10
/* 80389B90 00386AD0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game11ShijimiChou3ObjFv

.fn setFSM__Q34Game11ShijimiChou3ObjFPQ34Game11ShijimiChou3FSM, weak
/* 80389B94 00386AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389B98 00386AD8  7C 08 02 A6 */	mflr r0
/* 80389B9C 00386ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389BA0 00386AE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80389BA4 00386AE4  7C 7F 1B 78 */	mr r31, r3
/* 80389BA8 00386AE8  90 83 02 D8 */	stw r4, 0x2d8(r3)
/* 80389BAC 00386AEC  7F E4 FB 78 */	mr r4, r31
/* 80389BB0 00386AF0  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 80389BB4 00386AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80389BB8 00386AF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80389BBC 00386AFC  7D 89 03 A6 */	mtctr r12
/* 80389BC0 00386B00  4E 80 04 21 */	bctrl 
/* 80389BC4 00386B04  38 00 00 00 */	li r0, 0
/* 80389BC8 00386B08  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80389BCC 00386B0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389BD0 00386B10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80389BD4 00386B14  7C 08 03 A6 */	mtlr r0
/* 80389BD8 00386B18  38 21 00 10 */	addi r1, r1, 0x10
/* 80389BDC 00386B1C  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game11ShijimiChou3ObjFPQ34Game11ShijimiChou3FSM

.fn doUpdate__Q34Game11ShijimiChou3ObjFv, global
/* 80389BE0 00386B20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80389BE4 00386B24  7C 08 02 A6 */	mflr r0
/* 80389BE8 00386B28  90 01 00 24 */	stw r0, 0x24(r1)
/* 80389BEC 00386B2C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80389BF0 00386B30  7C 7F 1B 78 */	mr r31, r3
/* 80389BF4 00386B34  7F E4 FB 78 */	mr r4, r31
/* 80389BF8 00386B38  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 80389BFC 00386B3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80389C00 00386B40  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80389C04 00386B44  7D 89 03 A6 */	mtctr r12
/* 80389C08 00386B48  4E 80 04 21 */	bctrl 
/* 80389C0C 00386B4C  C0 42 0B AC */	lfs f2, lbl_8051EF0C@sda21(r2)
/* 80389C10 00386B50  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 80389C14 00386B54  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 80389C18 00386B58  EC 22 00 72 */	fmuls f1, f2, f1
/* 80389C1C 00386B5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80389C20 00386B60  40 80 00 30 */	bge .L_80389C50
/* 80389C24 00386B64  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 80389C28 00386B68  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80389C2C 00386B6C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80389C30 00386B70  EC 01 00 32 */	fmuls f0, f1, f0
/* 80389C34 00386B74  FC 00 00 1E */	fctiwz f0, f0
/* 80389C38 00386B78  D8 01 00 08 */	stfd f0, 8(r1)
/* 80389C3C 00386B7C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80389C40 00386B80  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80389C44 00386B84  7C 03 04 2E */	lfsx f0, r3, r0
/* 80389C48 00386B88  FC 00 00 50 */	fneg f0, f0
/* 80389C4C 00386B8C  48 00 00 28 */	b .L_80389C74
.L_80389C50:
/* 80389C50 00386B90  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 80389C54 00386B94  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80389C58 00386B98  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80389C5C 00386B9C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80389C60 00386BA0  FC 00 00 1E */	fctiwz f0, f0
/* 80389C64 00386BA4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80389C68 00386BA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389C6C 00386BAC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80389C70 00386BB0  7C 03 04 2E */	lfsx f0, r3, r0
.L_80389C74:
/* 80389C74 00386BB4  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 80389C78 00386BB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80389C7C 00386BBC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80389C80 00386BC0  7C 08 03 A6 */	mtlr r0
/* 80389C84 00386BC4  38 21 00 20 */	addi r1, r1, 0x20
/* 80389C88 00386BC8  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game11ShijimiChou3ObjFv

.fn doDirectDraw__Q34Game11ShijimiChou3ObjFR8Graphics, global
/* 80389C8C 00386BCC  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game11ShijimiChou3ObjFR8Graphics

.fn doDebugDraw__Q34Game11ShijimiChou3ObjFR8Graphics, global
/* 80389C90 00386BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389C94 00386BD4  7C 08 02 A6 */	mflr r0
/* 80389C98 00386BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389C9C 00386BDC  4B D7 C1 D1 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80389CA0 00386BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389CA4 00386BE4  7C 08 03 A6 */	mtlr r0
/* 80389CA8 00386BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80389CAC 00386BEC  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game11ShijimiChou3ObjFR8Graphics

.fn doAnimation__Q34Game11ShijimiChou3ObjFv, global
/* 80389CB0 00386BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389CB4 00386BF4  7C 08 02 A6 */	mflr r0
/* 80389CB8 00386BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389CBC 00386BFC  4B D7 92 D9 */	bl doAnimation__Q24Game9EnemyBaseFv
/* 80389CC0 00386C00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389CC4 00386C04  7C 08 03 A6 */	mtlr r0
/* 80389CC8 00386C08  38 21 00 10 */	addi r1, r1, 0x10
/* 80389CCC 00386C0C  4E 80 00 20 */	blr 
.endfn doAnimation__Q34Game11ShijimiChou3ObjFv

.fn doEntry__Q34Game11ShijimiChou3ObjFv, global
/* 80389CD0 00386C10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389CD4 00386C14  7C 08 02 A6 */	mflr r0
/* 80389CD8 00386C18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389CDC 00386C1C  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 80389CE0 00386C20  7C 00 18 40 */	cmplw r0, r3
/* 80389CE4 00386C24  40 82 00 24 */	bne .L_80389D08
/* 80389CE8 00386C28  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80389CEC 00386C2C  28 04 00 00 */	cmplwi r4, 0
/* 80389CF0 00386C30  41 82 00 1C */	beq .L_80389D0C
/* 80389CF4 00386C34  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80389CF8 00386C38  2C 00 00 04 */	cmpwi r0, 4
/* 80389CFC 00386C3C  40 82 00 10 */	bne .L_80389D0C
/* 80389D00 00386C40  4B D7 99 4D */	bl doEntry__Q24Game9EnemyBaseFv
/* 80389D04 00386C44  48 00 00 08 */	b .L_80389D0C
.L_80389D08:
/* 80389D08 00386C48  4B D7 99 45 */	bl doEntry__Q24Game9EnemyBaseFv
.L_80389D0C:
/* 80389D0C 00386C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389D10 00386C50  7C 08 03 A6 */	mtlr r0
/* 80389D14 00386C54  38 21 00 10 */	addi r1, r1, 0x10
/* 80389D18 00386C58  4E 80 00 20 */	blr 
.endfn doEntry__Q34Game11ShijimiChou3ObjFv

.fn doAnimationCullingOff__Q34Game11ShijimiChou3ObjFv, global
/* 80389D1C 00386C5C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80389D20 00386C60  7C 08 02 A6 */	mflr r0
/* 80389D24 00386C64  90 01 00 54 */	stw r0, 0x54(r1)
/* 80389D28 00386C68  38 00 00 00 */	li r0, 0
/* 80389D2C 00386C6C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80389D30 00386C70  7C 7F 1B 78 */	mr r31, r3
/* 80389D34 00386C74  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80389D38 00386C78  80 83 01 88 */	lwz r4, 0x188(r3)
/* 80389D3C 00386C7C  98 04 00 24 */	stb r0, 0x24(r4)
/* 80389D40 00386C80  81 83 00 00 */	lwz r12, 0(r3)
/* 80389D44 00386C84  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80389D48 00386C88  7D 89 03 A6 */	mtctr r12
/* 80389D4C 00386C8C  4E 80 04 21 */	bctrl 
/* 80389D50 00386C90  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80389D54 00386C94  80 03 00 04 */	lwz r0, 4(r3)
/* 80389D58 00386C98  28 00 00 00 */	cmplwi r0, 0
/* 80389D5C 00386C9C  41 82 00 7C */	beq .L_80389DD8
/* 80389D60 00386CA0  38 9F 01 38 */	addi r4, r31, 0x138
/* 80389D64 00386CA4  4B DD C0 3D */	bl viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
/* 80389D68 00386CA8  C0 3F 01 68 */	lfs f1, 0x168(r31)
/* 80389D6C 00386CAC  38 61 00 14 */	addi r3, r1, 0x14
/* 80389D70 00386CB0  C0 5F 01 6C */	lfs f2, 0x16c(r31)
/* 80389D74 00386CB4  C0 7F 01 70 */	lfs f3, 0x170(r31)
/* 80389D78 00386CB8  4B D6 0A 5D */	bl PSMTXScale
/* 80389D7C 00386CBC  38 7F 01 38 */	addi r3, r31, 0x138
/* 80389D80 00386CC0  38 81 00 14 */	addi r4, r1, 0x14
/* 80389D84 00386CC4  7C 65 1B 78 */	mr r5, r3
/* 80389D88 00386CC8  4B D6 05 79 */	bl PSMTXConcat
/* 80389D8C 00386CCC  C0 1F 01 44 */	lfs f0, 0x144(r31)
/* 80389D90 00386CD0  7F E3 FB 78 */	mr r3, r31
/* 80389D94 00386CD4  38 81 00 08 */	addi r4, r1, 8
/* 80389D98 00386CD8  D0 01 00 08 */	stfs f0, 8(r1)
/* 80389D9C 00386CDC  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 80389DA0 00386CE0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80389DA4 00386CE4  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 80389DA8 00386CE8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80389DAC 00386CEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80389DB0 00386CF0  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80389DB4 00386CF4  7D 89 03 A6 */	mtctr r12
/* 80389DB8 00386CF8  4E 80 04 21 */	bctrl 
/* 80389DBC 00386CFC  7F E3 FB 78 */	mr r3, r31
/* 80389DC0 00386D00  38 81 00 08 */	addi r4, r1, 8
/* 80389DC4 00386D04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80389DC8 00386D08  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80389DCC 00386D0C  7D 89 03 A6 */	mtctr r12
/* 80389DD0 00386D10  4E 80 04 21 */	bctrl 
/* 80389DD4 00386D14  48 00 00 14 */	b .L_80389DE8
.L_80389DD8:
/* 80389DD8 00386D18  38 7F 01 38 */	addi r3, r31, 0x138
/* 80389DDC 00386D1C  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80389DE0 00386D20  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 80389DE4 00386D24  48 09 EA A5 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
.L_80389DE8:
/* 80389DE8 00386D28  7F E3 FB 78 */	mr r3, r31
/* 80389DEC 00386D2C  4B D7 98 BD */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 80389DF0 00386D30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80389DF4 00386D34  41 82 00 84 */	beq .L_80389E78
/* 80389DF8 00386D38  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 80389DFC 00386D3C  38 7F 01 38 */	addi r3, r31, 0x138
/* 80389E00 00386D40  80 84 00 08 */	lwz r4, 8(r4)
/* 80389E04 00386D44  38 84 00 24 */	addi r4, r4, 0x24
/* 80389E08 00386D48  4B D6 04 C5 */	bl PSMTXCopy
/* 80389E0C 00386D4C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80389E10 00386D50  88 03 09 49 */	lbz r0, 0x949(r3)
/* 80389E14 00386D54  28 00 00 00 */	cmplwi r0, 0
/* 80389E18 00386D58  41 82 00 44 */	beq .L_80389E5C
/* 80389E1C 00386D5C  7F E3 FB 78 */	mr r3, r31
/* 80389E20 00386D60  4B D7 D5 29 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80389E24 00386D64  2C 03 00 02 */	cmpwi r3, 2
/* 80389E28 00386D68  40 82 00 34 */	bne .L_80389E5C
/* 80389E2C 00386D6C  7F E3 FB 78 */	mr r3, r31
/* 80389E30 00386D70  4B D7 D5 C5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80389E34 00386D74  2C 03 00 05 */	cmpwi r3, 5
/* 80389E38 00386D78  41 82 00 24 */	beq .L_80389E5C
/* 80389E3C 00386D7C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 80389E40 00386D80  7F E3 FB 78 */	mr r3, r31
/* 80389E44 00386D84  83 C4 00 08 */	lwz r30, 8(r4)
/* 80389E48 00386D88  4B D7 B4 25 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80389E4C 00386D8C  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80389E50 00386D90  7F C4 F3 78 */	mr r4, r30
/* 80389E54 00386D94  4B FF ED 99 */	bl fetch__Q34Game11ShijimiChou3MgrFP8J3DModelf
/* 80389E58 00386D98  48 00 00 3C */	b .L_80389E94
.L_80389E5C:
/* 80389E5C 00386D9C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80389E60 00386DA0  80 63 00 08 */	lwz r3, 8(r3)
/* 80389E64 00386DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80389E68 00386DA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80389E6C 00386DAC  7D 89 03 A6 */	mtctr r12
/* 80389E70 00386DB0  4E 80 04 21 */	bctrl 
/* 80389E74 00386DB4  48 00 00 20 */	b .L_80389E94
.L_80389E78:
/* 80389E78 00386DB8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80389E7C 00386DBC  38 00 00 00 */	li r0, 0
/* 80389E80 00386DC0  80 63 00 08 */	lwz r3, 8(r3)
/* 80389E84 00386DC4  80 63 00 04 */	lwz r3, 4(r3)
/* 80389E88 00386DC8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80389E8C 00386DCC  80 63 00 00 */	lwz r3, 0(r3)
/* 80389E90 00386DD0  90 03 00 54 */	stw r0, 0x54(r3)
.L_80389E94:
/* 80389E94 00386DD4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80389E98 00386DD8  4B DA BC 05 */	bl update__8CollTreeFv
/* 80389E9C 00386DDC  7F E3 FB 78 */	mr r3, r31
/* 80389EA0 00386DE0  48 00 22 A5 */	bl updateCluster__Q34Game11ShijimiChou3ObjFv
/* 80389EA4 00386DE4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80389EA8 00386DE8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80389EAC 00386DEC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80389EB0 00386DF0  7C 08 03 A6 */	mtlr r0
/* 80389EB4 00386DF4  38 21 00 50 */	addi r1, r1, 0x50
/* 80389EB8 00386DF8  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game11ShijimiChou3ObjFv

.fn doAnimationCullingOn__Q34Game11ShijimiChou3ObjFv, global
/* 80389EBC 00386DFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389EC0 00386E00  7C 08 02 A6 */	mflr r0
/* 80389EC4 00386E04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389EC8 00386E08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80389ECC 00386E0C  7C 7F 1B 78 */	mr r31, r3
/* 80389ED0 00386E10  48 00 22 75 */	bl updateCluster__Q34Game11ShijimiChou3ObjFv
/* 80389ED4 00386E14  7F E3 FB 78 */	mr r3, r31
/* 80389ED8 00386E18  4B D7 94 41 */	bl doAnimationCullingOn__Q24Game9EnemyBaseFv
/* 80389EDC 00386E1C  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 80389EE0 00386E20  28 03 00 00 */	cmplwi r3, 0
/* 80389EE4 00386E24  41 82 00 7C */	beq .L_80389F60
/* 80389EE8 00386E28  7C 03 F8 40 */	cmplw r3, r31
/* 80389EEC 00386E2C  41 82 00 74 */	beq .L_80389F60
/* 80389EF0 00386E30  4B D7 D5 05 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80389EF4 00386E34  2C 03 00 04 */	cmpwi r3, 4
/* 80389EF8 00386E38  40 82 00 14 */	bne .L_80389F0C
/* 80389EFC 00386E3C  7F E3 FB 78 */	mr r3, r31
/* 80389F00 00386E40  38 80 00 00 */	li r4, 0
/* 80389F04 00386E44  4B DB 11 ED */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80389F08 00386E48  48 00 00 58 */	b .L_80389F60
.L_80389F0C:
/* 80389F0C 00386E4C  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 80389F10 00386E50  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80389F14 00386E54  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80389F18 00386E58  EC 41 00 28 */	fsubs f2, f1, f0
/* 80389F1C 00386E5C  C0 22 0B B8 */	lfs f1, lbl_8051EF18@sda21(r2)
/* 80389F20 00386E60  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 80389F24 00386E64  FC 60 12 10 */	fabs f3, f2
/* 80389F28 00386E68  EC 41 00 32 */	fmuls f2, f1, f0
/* 80389F2C 00386E6C  FC 00 18 18 */	frsp f0, f3
/* 80389F30 00386E70  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80389F34 00386E74  41 81 00 20 */	bgt .L_80389F54
/* 80389F38 00386E78  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80389F3C 00386E7C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80389F40 00386E80  EC 01 00 28 */	fsubs f0, f1, f0
/* 80389F44 00386E84  FC 00 02 10 */	fabs f0, f0
/* 80389F48 00386E88  FC 00 00 18 */	frsp f0, f0
/* 80389F4C 00386E8C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80389F50 00386E90  40 81 00 10 */	ble .L_80389F60
.L_80389F54:
/* 80389F54 00386E94  7F E3 FB 78 */	mr r3, r31
/* 80389F58 00386E98  38 80 00 00 */	li r4, 0
/* 80389F5C 00386E9C  4B DB 11 95 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80389F60:
/* 80389F60 00386EA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389F64 00386EA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80389F68 00386EA8  7C 08 03 A6 */	mtlr r0
/* 80389F6C 00386EAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80389F70 00386EB0  4E 80 00 20 */	blr 
.endfn doAnimationCullingOn__Q34Game11ShijimiChou3ObjFv

.fn onKill__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureKillArg, global
/* 80389F74 00386EB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80389F78 00386EB8  7C 08 02 A6 */	mflr r0
/* 80389F7C 00386EBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80389F80 00386EC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80389F84 00386EC4  7C 9F 23 78 */	mr r31, r4
/* 80389F88 00386EC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80389F8C 00386ECC  7C 7E 1B 78 */	mr r30, r3
/* 80389F90 00386ED0  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 80389F94 00386ED4  28 04 00 00 */	cmplwi r4, 0
/* 80389F98 00386ED8  41 82 00 18 */	beq .L_80389FB0
/* 80389F9C 00386EDC  7C 04 F0 40 */	cmplw r4, r30
/* 80389FA0 00386EE0  41 82 00 10 */	beq .L_80389FB0
/* 80389FA4 00386EE4  80 64 03 28 */	lwz r3, 0x328(r4)
/* 80389FA8 00386EE8  38 03 FF FF */	addi r0, r3, -1
/* 80389FAC 00386EEC  90 04 03 28 */	stw r0, 0x328(r4)
.L_80389FB0:
/* 80389FB0 00386EF0  38 00 00 00 */	li r0, 0
/* 80389FB4 00386EF4  90 1E 02 C8 */	stw r0, 0x2c8(r30)
/* 80389FB8 00386EF8  80 7E 03 34 */	lwz r3, 0x334(r30)
/* 80389FBC 00386EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80389FC0 00386F00  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80389FC4 00386F04  7D 89 03 A6 */	mtctr r12
/* 80389FC8 00386F08  4E 80 04 21 */	bctrl 
/* 80389FCC 00386F0C  38 7E 02 DC */	addi r3, r30, 0x2dc
/* 80389FD0 00386F10  4B E0 C7 51 */	bl exit__Q24Game13UpdateContextFv
/* 80389FD4 00386F14  7F C3 F3 78 */	mr r3, r30
/* 80389FD8 00386F18  7F E4 FB 78 */	mr r4, r31
/* 80389FDC 00386F1C  4B D7 7F 0D */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 80389FE0 00386F20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80389FE4 00386F24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80389FE8 00386F28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80389FEC 00386F2C  7C 08 03 A6 */	mtlr r0
/* 80389FF0 00386F30  38 21 00 10 */	addi r1, r1, 0x10
/* 80389FF4 00386F34  4E 80 00 20 */	blr 
.endfn onKill__Q34Game11ShijimiChou3ObjFPQ24Game15CreatureKillArg

.fn doSimulation__Q34Game11ShijimiChou3ObjFf, global
/* 80389FF8 00386F38  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80389FFC 00386F3C  7C 08 02 A6 */	mflr r0
/* 8038A000 00386F40  90 01 00 84 */	stw r0, 0x84(r1)
/* 8038A004 00386F44  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8038A008 00386F48  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8038A00C 00386F4C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8038A010 00386F50  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8038A014 00386F54  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038A018 00386F58  7C 7F 1B 78 */	mr r31, r3
/* 8038A01C 00386F5C  FF E0 08 90 */	fmr f31, f1
/* 8038A020 00386F60  D0 03 01 1C */	stfs f0, 0x11c(r3)
/* 8038A024 00386F64  D0 03 01 20 */	stfs f0, 0x120(r3)
/* 8038A028 00386F68  D0 03 01 24 */	stfs f0, 0x124(r3)
/* 8038A02C 00386F6C  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 8038A030 00386F70  28 00 00 00 */	cmplwi r0, 0
/* 8038A034 00386F74  41 82 03 68 */	beq .L_8038A39C
/* 8038A038 00386F78  88 1F 03 20 */	lbz r0, 0x320(r31)
/* 8038A03C 00386F7C  28 00 00 00 */	cmplwi r0, 0
/* 8038A040 00386F80  40 82 03 5C */	bne .L_8038A39C
/* 8038A044 00386F84  4B D7 D3 B1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038A048 00386F88  2C 03 00 03 */	cmpwi r3, 3
/* 8038A04C 00386F8C  41 82 03 50 */	beq .L_8038A39C
/* 8038A050 00386F90  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 8038A054 00386F94  7C 00 F8 40 */	cmplw r0, r31
/* 8038A058 00386F98  40 82 00 20 */	bne .L_8038A078
/* 8038A05C 00386F9C  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 8038A060 00386FA0  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 8038A064 00386FA4  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 8038A068 00386FA8  38 80 01 76 */	li r4, 0x176
/* 8038A06C 00386FAC  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 8038A070 00386FB0  4C C6 31 82 */	crclr 6
/* 8038A074 00386FB4  4B CA 05 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038A078:
/* 8038A078 00386FB8  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8038A07C 00386FBC  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8038A080 00386FC0  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 8038A084 00386FC4  3C 60 80 4E */	lis r3, __vt__Q23efx7ArgChou@ha
/* 8038A088 00386FC8  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 8038A08C 00386FCC  C0 44 00 00 */	lfs f2, 0(r4)
/* 8038A090 00386FD0  C0 24 00 04 */	lfs f1, 4(r4)
/* 8038A094 00386FD4  38 00 00 00 */	li r0, 0
/* 8038A098 00386FD8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8038A09C 00386FDC  38 63 4C F4 */	addi r3, r3, __vt__Q23efx7ArgChou@l
/* 8038A0A0 00386FE0  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8038A0A4 00386FE4  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 8038A0A8 00386FE8  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 8038A0AC 00386FEC  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8038A0B0 00386FF0  90 61 00 50 */	stw r3, 0x50(r1)
/* 8038A0B4 00386FF4  90 01 00 60 */	stw r0, 0x60(r1)
/* 8038A0B8 00386FF8  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 8038A0BC 00386FFC  2C 00 00 01 */	cmpwi r0, 1
/* 8038A0C0 00387000  40 82 00 10 */	bne .L_8038A0D0
/* 8038A0C4 00387004  38 00 00 01 */	li r0, 1
/* 8038A0C8 00387008  90 01 00 60 */	stw r0, 0x60(r1)
/* 8038A0CC 0038700C  48 00 00 14 */	b .L_8038A0E0
.L_8038A0D0:
/* 8038A0D0 00387010  2C 00 00 02 */	cmpwi r0, 2
/* 8038A0D4 00387014  40 82 00 0C */	bne .L_8038A0E0
/* 8038A0D8 00387018  38 00 00 02 */	li r0, 2
/* 8038A0DC 0038701C  90 01 00 60 */	stw r0, 0x60(r1)
.L_8038A0E0:
/* 8038A0E0 00387020  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 8038A0E4 00387024  38 81 00 50 */	addi r4, r1, 0x50
/* 8038A0E8 00387028  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A0EC 0038702C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038A0F0 00387030  7D 89 03 A6 */	mtctr r12
/* 8038A0F4 00387034  4E 80 04 21 */	bctrl 
/* 8038A0F8 00387038  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8038A0FC 0038703C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8038A100 00387040  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8038A104 00387044  3C 80 80 4E */	lis r4, __vt__Q23efx8TChouHit@ha
/* 8038A108 00387048  90 01 00 28 */	stw r0, 0x28(r1)
/* 8038A10C 0038704C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8038A110 00387050  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8038A114 00387054  38 E0 00 18 */	li r7, 0x18
/* 8038A118 00387058  90 01 00 28 */	stw r0, 0x28(r1)
/* 8038A11C 0038705C  38 A4 4C E0 */	addi r5, r4, __vt__Q23efx8TChouHit@l
/* 8038A120 00387060  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 8038A124 00387064  38 C0 00 00 */	li r6, 0
/* 8038A128 00387068  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 8038A12C 0038706C  38 61 00 28 */	addi r3, r1, 0x28
/* 8038A130 00387070  38 81 00 18 */	addi r4, r1, 0x18
/* 8038A134 00387074  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8038A138 00387078  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8038A13C 0038707C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8038A140 00387080  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8038A144 00387084  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8038A148 00387088  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8038A14C 0038708C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8038A150 00387090  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8038A154 00387094  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8038A158 00387098  48 02 4E 2D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8038A15C 0038709C  38 00 00 01 */	li r0, 1
/* 8038A160 003870A0  7F E4 FB 78 */	mr r4, r31
/* 8038A164 003870A4  98 1F 03 20 */	stb r0, 0x320(r31)
/* 8038A168 003870A8  38 A0 00 02 */	li r5, 2
/* 8038A16C 003870AC  38 C0 00 00 */	li r6, 0
/* 8038A170 003870B0  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8038A174 003870B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A178 003870B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038A17C 003870BC  7D 89 03 A6 */	mtctr r12
/* 8038A180 003870C0  4E 80 04 21 */	bctrl 
/* 8038A184 003870C4  7F E4 FB 78 */	mr r4, r31
/* 8038A188 003870C8  38 61 00 34 */	addi r3, r1, 0x34
/* 8038A18C 003870CC  4B E1 5A D1 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 8038A190 003870D0  38 00 00 00 */	li r0, 0
/* 8038A194 003870D4  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 8038A198 003870D8  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 8038A19C 003870DC  38 61 00 34 */	addi r3, r1, 0x34
/* 8038A1A0 003870E0  28 00 00 00 */	cmplwi r0, 0
/* 8038A1A4 003870E4  90 81 00 08 */	stw r4, 8(r1)
/* 8038A1A8 003870E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A1AC 003870EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8038A1B0 003870F0  90 61 00 10 */	stw r3, 0x10(r1)
/* 8038A1B4 003870F4  40 82 00 1C */	bne .L_8038A1D0
/* 8038A1B8 003870F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A1BC 003870FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8038A1C0 00387100  7D 89 03 A6 */	mtctr r12
/* 8038A1C4 00387104  4E 80 04 21 */	bctrl 
/* 8038A1C8 00387108  90 61 00 0C */	stw r3, 0xc(r1)
/* 8038A1CC 0038710C  48 00 01 A4 */	b .L_8038A370
.L_8038A1D0:
/* 8038A1D0 00387110  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A1D4 00387114  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8038A1D8 00387118  7D 89 03 A6 */	mtctr r12
/* 8038A1DC 0038711C  4E 80 04 21 */	bctrl 
/* 8038A1E0 00387120  90 61 00 0C */	stw r3, 0xc(r1)
/* 8038A1E4 00387124  48 00 00 58 */	b .L_8038A23C
.L_8038A1E8:
/* 8038A1E8 00387128  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A1EC 0038712C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A1F0 00387130  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A1F4 00387134  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8038A1F8 00387138  7D 89 03 A6 */	mtctr r12
/* 8038A1FC 0038713C  4E 80 04 21 */	bctrl 
/* 8038A200 00387140  7C 64 1B 78 */	mr r4, r3
/* 8038A204 00387144  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8038A208 00387148  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A20C 0038714C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038A210 00387150  7D 89 03 A6 */	mtctr r12
/* 8038A214 00387154  4E 80 04 21 */	bctrl 
/* 8038A218 00387158  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A21C 0038715C  40 82 01 54 */	bne .L_8038A370
/* 8038A220 00387160  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A224 00387164  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A228 00387168  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A22C 0038716C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038A230 00387170  7D 89 03 A6 */	mtctr r12
/* 8038A234 00387174  4E 80 04 21 */	bctrl 
/* 8038A238 00387178  90 61 00 0C */	stw r3, 0xc(r1)
.L_8038A23C:
/* 8038A23C 0038717C  81 81 00 08 */	lwz r12, 8(r1)
/* 8038A240 00387180  38 61 00 08 */	addi r3, r1, 8
/* 8038A244 00387184  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8038A248 00387188  7D 89 03 A6 */	mtctr r12
/* 8038A24C 0038718C  4E 80 04 21 */	bctrl 
/* 8038A250 00387190  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A254 00387194  41 82 FF 94 */	beq .L_8038A1E8
/* 8038A258 00387198  48 00 01 18 */	b .L_8038A370
.L_8038A25C:
/* 8038A25C 0038719C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A260 003871A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A264 003871A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8038A268 003871A8  7D 89 03 A6 */	mtctr r12
/* 8038A26C 003871AC  4E 80 04 21 */	bctrl 
/* 8038A270 003871B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A274 003871B4  7C 7E 1B 78 */	mr r30, r3
/* 8038A278 003871B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8038A27C 003871BC  7D 89 03 A6 */	mtctr r12
/* 8038A280 003871C0  4E 80 04 21 */	bctrl 
/* 8038A284 003871C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A288 003871C8  41 82 00 2C */	beq .L_8038A2B4
/* 8038A28C 003871CC  C0 3E 01 04 */	lfs f1, 0x104(r30)
/* 8038A290 003871D0  C0 02 0B BC */	lfs f0, lbl_8051EF1C@sda21(r2)
/* 8038A294 003871D4  C0 5E 01 08 */	lfs f2, 0x108(r30)
/* 8038A298 003871D8  C0 7E 01 0C */	lfs f3, 0x10c(r30)
/* 8038A29C 003871DC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038A2A0 003871E0  EC 42 00 32 */	fmuls f2, f2, f0
/* 8038A2A4 003871E4  EC 63 00 32 */	fmuls f3, f3, f0
/* 8038A2A8 003871E8  D0 3E 01 04 */	stfs f1, 0x104(r30)
/* 8038A2AC 003871EC  D0 5E 01 08 */	stfs f2, 0x108(r30)
/* 8038A2B0 003871F0  D0 7E 01 0C */	stfs f3, 0x10c(r30)
.L_8038A2B4:
/* 8038A2B4 003871F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A2B8 003871F8  28 00 00 00 */	cmplwi r0, 0
/* 8038A2BC 003871FC  40 82 00 24 */	bne .L_8038A2E0
/* 8038A2C0 00387200  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A2C4 00387204  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A2C8 00387208  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A2CC 0038720C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038A2D0 00387210  7D 89 03 A6 */	mtctr r12
/* 8038A2D4 00387214  4E 80 04 21 */	bctrl 
/* 8038A2D8 00387218  90 61 00 0C */	stw r3, 0xc(r1)
/* 8038A2DC 0038721C  48 00 00 94 */	b .L_8038A370
.L_8038A2E0:
/* 8038A2E0 00387220  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A2E4 00387224  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A2E8 00387228  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A2EC 0038722C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038A2F0 00387230  7D 89 03 A6 */	mtctr r12
/* 8038A2F4 00387234  4E 80 04 21 */	bctrl 
/* 8038A2F8 00387238  90 61 00 0C */	stw r3, 0xc(r1)
/* 8038A2FC 0038723C  48 00 00 58 */	b .L_8038A354
.L_8038A300:
/* 8038A300 00387240  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A304 00387244  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A308 00387248  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A30C 0038724C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8038A310 00387250  7D 89 03 A6 */	mtctr r12
/* 8038A314 00387254  4E 80 04 21 */	bctrl 
/* 8038A318 00387258  7C 64 1B 78 */	mr r4, r3
/* 8038A31C 0038725C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8038A320 00387260  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A324 00387264  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038A328 00387268  7D 89 03 A6 */	mtctr r12
/* 8038A32C 0038726C  4E 80 04 21 */	bctrl 
/* 8038A330 00387270  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A334 00387274  40 82 00 3C */	bne .L_8038A370
/* 8038A338 00387278  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A33C 0038727C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A340 00387280  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A344 00387284  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038A348 00387288  7D 89 03 A6 */	mtctr r12
/* 8038A34C 0038728C  4E 80 04 21 */	bctrl 
/* 8038A350 00387290  90 61 00 0C */	stw r3, 0xc(r1)
.L_8038A354:
/* 8038A354 00387294  81 81 00 08 */	lwz r12, 8(r1)
/* 8038A358 00387298  38 61 00 08 */	addi r3, r1, 8
/* 8038A35C 0038729C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8038A360 003872A0  7D 89 03 A6 */	mtctr r12
/* 8038A364 003872A4  4E 80 04 21 */	bctrl 
/* 8038A368 003872A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A36C 003872AC  41 82 FF 94 */	beq .L_8038A300
.L_8038A370:
/* 8038A370 003872B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038A374 003872B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A378 003872B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8038A37C 003872BC  7D 89 03 A6 */	mtctr r12
/* 8038A380 003872C0  4E 80 04 21 */	bctrl 
/* 8038A384 003872C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8038A388 003872C8  7C 04 18 40 */	cmplw r4, r3
/* 8038A38C 003872CC  40 82 FE D0 */	bne .L_8038A25C
/* 8038A390 003872D0  38 61 00 34 */	addi r3, r1, 0x34
/* 8038A394 003872D4  38 80 FF FF */	li r4, -1
/* 8038A398 003872D8  4B E1 59 CD */	bl __dt__Q24Game8StickersFv
.L_8038A39C:
/* 8038A39C 003872DC  FC 20 F8 90 */	fmr f1, f31
/* 8038A3A0 003872E0  7F E3 FB 78 */	mr r3, r31
/* 8038A3A4 003872E4  4B D7 A6 B5 */	bl doSimulation__Q24Game9EnemyBaseFf
/* 8038A3A8 003872E8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8038A3AC 003872EC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8038A3B0 003872F0  41 82 00 60 */	beq .L_8038A410
/* 8038A3B4 003872F4  C0 22 0B C0 */	lfs f1, lbl_8051EF20@sda21(r2)
/* 8038A3B8 003872F8  C0 1F 03 00 */	lfs f0, 0x300(r31)
/* 8038A3BC 003872FC  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8038A3C0 00387300  EC 01 00 2A */	fadds f0, f1, f0
/* 8038A3C4 00387304  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038A3C8 00387308  41 80 00 10 */	blt .L_8038A3D8
/* 8038A3CC 0038730C  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 8038A3D0 00387310  28 00 00 00 */	cmplwi r0, 0
/* 8038A3D4 00387314  41 82 00 3C */	beq .L_8038A410
.L_8038A3D8:
/* 8038A3D8 00387318  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8038A3DC 0038731C  28 03 00 00 */	cmplwi r3, 0
/* 8038A3E0 00387320  41 82 00 1C */	beq .L_8038A3FC
/* 8038A3E4 00387324  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8038A3E8 00387328  2C 00 00 04 */	cmpwi r0, 4
/* 8038A3EC 0038732C  40 82 00 10 */	bne .L_8038A3FC
/* 8038A3F0 00387330  C0 1F 03 30 */	lfs f0, 0x330(r31)
/* 8038A3F4 00387334  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8038A3F8 00387338  48 00 00 18 */	b .L_8038A410
.L_8038A3FC:
/* 8038A3FC 0038733C  7F E3 FB 78 */	mr r3, r31
/* 8038A400 00387340  48 00 05 7D */	bl genItem__Q34Game11ShijimiChou3ObjFv
/* 8038A404 00387344  7F E3 FB 78 */	mr r3, r31
/* 8038A408 00387348  38 80 00 00 */	li r4, 0
/* 8038A40C 0038734C  4B DB 0C E5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8038A410:
/* 8038A410 00387350  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8038A414 00387354  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8038A418 00387358  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8038A41C 0038735C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8038A420 00387360  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8038A424 00387364  7C 08 03 A6 */	mtlr r0
/* 8038A428 00387368  38 21 00 80 */	addi r1, r1, 0x80
/* 8038A42C 0038736C  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game11ShijimiChou3ObjFf

.fn changeMaterial__Q34Game11ShijimiChou3ObjFv, global
/* 8038A430 00387370  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8038A434 00387374  7C 08 02 A6 */	mflr r0
/* 8038A438 00387378  90 01 00 44 */	stw r0, 0x44(r1)
/* 8038A43C 0038737C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8038A440 00387380  7C 7F 1B 78 */	mr r31, r3
/* 8038A444 00387384  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8038A448 00387388  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8038A44C 0038738C  93 81 00 30 */	stw r28, 0x30(r1)
/* 8038A450 00387390  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8038A454 00387394  2C 00 00 00 */	cmpwi r0, 0
/* 8038A458 00387398  40 82 00 90 */	bne .L_8038A4E8
/* 8038A45C 0038739C  38 ED 99 50 */	addi r7, r13, mMatColorY0__Q24Game11ShijimiChou@sda21
/* 8038A460 003873A0  A9 0D 99 50 */	lha r8, mMatColorY0__Q24Game11ShijimiChou@sda21(r13)
/* 8038A464 003873A4  A8 C7 00 02 */	lha r6, 2(r7)
/* 8038A468 003873A8  38 A1 00 24 */	addi r5, r1, 0x24
/* 8038A46C 003873AC  A8 67 00 04 */	lha r3, 4(r7)
/* 8038A470 003873B0  38 80 00 00 */	li r4, 0
/* 8038A474 003873B4  A8 07 00 06 */	lha r0, 6(r7)
/* 8038A478 003873B8  B1 01 00 24 */	sth r8, 0x24(r1)
/* 8038A47C 003873BC  B0 C1 00 26 */	sth r6, 0x26(r1)
/* 8038A480 003873C0  B0 61 00 28 */	sth r3, 0x28(r1)
/* 8038A484 003873C4  B0 01 00 2A */	sth r0, 0x2a(r1)
/* 8038A488 003873C8  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8038A48C 003873CC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8038A490 003873D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A494 003873D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038A498 003873D8  7D 89 03 A6 */	mtctr r12
/* 8038A49C 003873DC  4E 80 04 21 */	bctrl 
/* 8038A4A0 003873E0  38 ED 99 68 */	addi r7, r13, mMatKColorY__Q24Game11ShijimiChou@sda21
/* 8038A4A4 003873E4  89 0D 99 68 */	lbz r8, mMatKColorY__Q24Game11ShijimiChou@sda21(r13)
/* 8038A4A8 003873E8  88 C7 00 01 */	lbz r6, 1(r7)
/* 8038A4AC 003873EC  38 A1 00 10 */	addi r5, r1, 0x10
/* 8038A4B0 003873F0  88 67 00 02 */	lbz r3, 2(r7)
/* 8038A4B4 003873F4  38 80 00 00 */	li r4, 0
/* 8038A4B8 003873F8  88 07 00 03 */	lbz r0, 3(r7)
/* 8038A4BC 003873FC  99 01 00 10 */	stb r8, 0x10(r1)
/* 8038A4C0 00387400  98 C1 00 11 */	stb r6, 0x11(r1)
/* 8038A4C4 00387404  98 61 00 12 */	stb r3, 0x12(r1)
/* 8038A4C8 00387408  98 01 00 13 */	stb r0, 0x13(r1)
/* 8038A4CC 0038740C  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8038A4D0 00387410  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8038A4D4 00387414  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A4D8 00387418  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8038A4DC 0038741C  7D 89 03 A6 */	mtctr r12
/* 8038A4E0 00387420  4E 80 04 21 */	bctrl 
/* 8038A4E4 00387424  48 00 01 20 */	b .L_8038A604
.L_8038A4E8:
/* 8038A4E8 00387428  2C 00 00 01 */	cmpwi r0, 1
/* 8038A4EC 0038742C  40 82 00 90 */	bne .L_8038A57C
/* 8038A4F0 00387430  38 ED 99 58 */	addi r7, r13, mMatColorR0__Q24Game11ShijimiChou@sda21
/* 8038A4F4 00387434  A9 0D 99 58 */	lha r8, mMatColorR0__Q24Game11ShijimiChou@sda21(r13)
/* 8038A4F8 00387438  A8 C7 00 02 */	lha r6, 2(r7)
/* 8038A4FC 0038743C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8038A500 00387440  A8 67 00 04 */	lha r3, 4(r7)
/* 8038A504 00387444  38 80 00 00 */	li r4, 0
/* 8038A508 00387448  A8 07 00 06 */	lha r0, 6(r7)
/* 8038A50C 0038744C  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 8038A510 00387450  B0 C1 00 1E */	sth r6, 0x1e(r1)
/* 8038A514 00387454  B0 61 00 20 */	sth r3, 0x20(r1)
/* 8038A518 00387458  B0 01 00 22 */	sth r0, 0x22(r1)
/* 8038A51C 0038745C  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8038A520 00387460  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8038A524 00387464  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A528 00387468  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038A52C 0038746C  7D 89 03 A6 */	mtctr r12
/* 8038A530 00387470  4E 80 04 21 */	bctrl 
/* 8038A534 00387474  38 ED 99 6C */	addi r7, r13, mMatKColorR__Q24Game11ShijimiChou@sda21
/* 8038A538 00387478  89 0D 99 6C */	lbz r8, mMatKColorR__Q24Game11ShijimiChou@sda21(r13)
/* 8038A53C 0038747C  88 C7 00 01 */	lbz r6, 1(r7)
/* 8038A540 00387480  38 A1 00 0C */	addi r5, r1, 0xc
/* 8038A544 00387484  88 67 00 02 */	lbz r3, 2(r7)
/* 8038A548 00387488  38 80 00 00 */	li r4, 0
/* 8038A54C 0038748C  88 07 00 03 */	lbz r0, 3(r7)
/* 8038A550 00387490  99 01 00 0C */	stb r8, 0xc(r1)
/* 8038A554 00387494  98 C1 00 0D */	stb r6, 0xd(r1)
/* 8038A558 00387498  98 61 00 0E */	stb r3, 0xe(r1)
/* 8038A55C 0038749C  98 01 00 0F */	stb r0, 0xf(r1)
/* 8038A560 003874A0  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8038A564 003874A4  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8038A568 003874A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A56C 003874AC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8038A570 003874B0  7D 89 03 A6 */	mtctr r12
/* 8038A574 003874B4  4E 80 04 21 */	bctrl 
/* 8038A578 003874B8  48 00 00 8C */	b .L_8038A604
.L_8038A57C:
/* 8038A57C 003874BC  38 ED 99 60 */	addi r7, r13, mMatColorB0__Q24Game11ShijimiChou@sda21
/* 8038A580 003874C0  A9 0D 99 60 */	lha r8, mMatColorB0__Q24Game11ShijimiChou@sda21(r13)
/* 8038A584 003874C4  A8 C7 00 02 */	lha r6, 2(r7)
/* 8038A588 003874C8  38 A1 00 14 */	addi r5, r1, 0x14
/* 8038A58C 003874CC  A8 67 00 04 */	lha r3, 4(r7)
/* 8038A590 003874D0  38 80 00 00 */	li r4, 0
/* 8038A594 003874D4  A8 07 00 06 */	lha r0, 6(r7)
/* 8038A598 003874D8  B1 01 00 14 */	sth r8, 0x14(r1)
/* 8038A59C 003874DC  B0 C1 00 16 */	sth r6, 0x16(r1)
/* 8038A5A0 003874E0  B0 61 00 18 */	sth r3, 0x18(r1)
/* 8038A5A4 003874E4  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 8038A5A8 003874E8  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8038A5AC 003874EC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8038A5B0 003874F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A5B4 003874F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038A5B8 003874F8  7D 89 03 A6 */	mtctr r12
/* 8038A5BC 003874FC  4E 80 04 21 */	bctrl 
/* 8038A5C0 00387500  38 ED 99 70 */	addi r7, r13, mMatKColorB__Q24Game11ShijimiChou@sda21
/* 8038A5C4 00387504  89 0D 99 70 */	lbz r8, mMatKColorB__Q24Game11ShijimiChou@sda21(r13)
/* 8038A5C8 00387508  88 C7 00 01 */	lbz r6, 1(r7)
/* 8038A5CC 0038750C  38 A1 00 08 */	addi r5, r1, 8
/* 8038A5D0 00387510  88 67 00 02 */	lbz r3, 2(r7)
/* 8038A5D4 00387514  38 80 00 00 */	li r4, 0
/* 8038A5D8 00387518  88 07 00 03 */	lbz r0, 3(r7)
/* 8038A5DC 0038751C  99 01 00 08 */	stb r8, 8(r1)
/* 8038A5E0 00387520  98 C1 00 09 */	stb r6, 9(r1)
/* 8038A5E4 00387524  98 61 00 0A */	stb r3, 0xa(r1)
/* 8038A5E8 00387528  98 01 00 0B */	stb r0, 0xb(r1)
/* 8038A5EC 0038752C  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8038A5F0 00387530  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8038A5F4 00387534  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A5F8 00387538  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8038A5FC 0038753C  7D 89 03 A6 */	mtctr r12
/* 8038A600 00387540  4E 80 04 21 */	bctrl 
.L_8038A604:
/* 8038A604 00387544  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8038A608 00387548  83 A3 00 08 */	lwz r29, 8(r3)
/* 8038A60C 0038754C  7F A3 EB 78 */	mr r3, r29
/* 8038A610 00387550  83 DD 00 04 */	lwz r30, 4(r29)
/* 8038A614 00387554  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038A618 00387558  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038A61C 0038755C  7D 89 03 A6 */	mtctr r12
/* 8038A620 00387560  4E 80 04 21 */	bctrl 
/* 8038A624 00387564  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8038A628 00387568  3B 80 00 00 */	li r28, 0
/* 8038A62C 0038756C  3B E3 F2 30 */	addi r31, r3, j3dSys@l
/* 8038A630 00387570  48 00 00 3C */	b .L_8038A66C
.L_8038A634:
/* 8038A634 00387574  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8038A638 00387578  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8038A63C 0038757C  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8038A640 00387580  7C 84 1A 14 */	add r4, r4, r3
/* 8038A644 00387584  90 9F 00 3C */	stw r4, 0x3c(r31)
/* 8038A648 00387588  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8038A64C 0038758C  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8038A650 00387590  7C 63 00 2E */	lwzx r3, r3, r0
/* 8038A654 00387594  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8038A658 00387598  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A65C 0038759C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038A660 003875A0  7D 89 03 A6 */	mtctr r12
/* 8038A664 003875A4  4E 80 04 21 */	bctrl 
/* 8038A668 003875A8  3B 9C 00 01 */	addi r28, r28, 1
.L_8038A66C:
/* 8038A66C 003875AC  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8038A670 003875B0  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8038A674 003875B4  7C 03 00 40 */	cmplw r3, r0
/* 8038A678 003875B8  41 80 FF BC */	blt .L_8038A634
/* 8038A67C 003875BC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038A680 003875C0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8038A684 003875C4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8038A688 003875C8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8038A68C 003875CC  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8038A690 003875D0  7C 08 03 A6 */	mtlr r0
/* 8038A694 003875D4  38 21 00 40 */	addi r1, r1, 0x40
/* 8038A698 003875D8  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game11ShijimiChou3ObjFv

.fn doStartMovie__Q34Game11ShijimiChou3ObjFv, global
/* 8038A69C 003875DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A6A0 003875E0  7C 08 02 A6 */	mflr r0
/* 8038A6A4 003875E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A6A8 003875E8  80 63 03 34 */	lwz r3, 0x334(r3)
/* 8038A6AC 003875EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A6B0 003875F0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8038A6B4 003875F4  7D 89 03 A6 */	mtctr r12
/* 8038A6B8 003875F8  4E 80 04 21 */	bctrl 
/* 8038A6BC 003875FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A6C0 00387600  7C 08 03 A6 */	mtlr r0
/* 8038A6C4 00387604  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A6C8 00387608  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game11ShijimiChou3ObjFv

.fn doEndMovie__Q34Game11ShijimiChou3ObjFv, global
/* 8038A6CC 0038760C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A6D0 00387610  7C 08 02 A6 */	mflr r0
/* 8038A6D4 00387614  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A6D8 00387618  80 63 03 34 */	lwz r3, 0x334(r3)
/* 8038A6DC 0038761C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A6E0 00387620  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8038A6E4 00387624  7D 89 03 A6 */	mtctr r12
/* 8038A6E8 00387628  4E 80 04 21 */	bctrl 
/* 8038A6EC 0038762C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A6F0 00387630  7C 08 03 A6 */	mtlr r0
/* 8038A6F4 00387634  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A6F8 00387638  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game11ShijimiChou3ObjFv

.fn doStartStoneState__Q34Game11ShijimiChou3ObjFv, global
/* 8038A6FC 0038763C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A700 00387640  7C 08 02 A6 */	mflr r0
/* 8038A704 00387644  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A708 00387648  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038A70C 0038764C  7C 7F 1B 78 */	mr r31, r3
/* 8038A710 00387650  4B D7 87 E5 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8038A714 00387654  7F E3 FB 78 */	mr r3, r31
/* 8038A718 00387658  4B D7 D0 7D */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 8038A71C 0038765C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A720 00387660  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038A724 00387664  7C 08 03 A6 */	mtlr r0
/* 8038A728 00387668  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A72C 0038766C  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game11ShijimiChou3ObjFv

.fn damageCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8038A730 00387670  38 60 00 00 */	li r3, 0
/* 8038A734 00387674  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart

.fn wallCallback__Q34Game11ShijimiChou3ObjFRCQ24Game8MoveInfo, global
/* 8038A738 00387678  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A73C 0038767C  7C 08 02 A6 */	mflr r0
/* 8038A740 00387680  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A744 00387684  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038A748 00387688  7C 9F 23 78 */	mr r31, r4
/* 8038A74C 0038768C  93 C1 00 08 */	stw r30, 8(r1)
/* 8038A750 00387690  7C 7E 1B 78 */	mr r30, r3
/* 8038A754 00387694  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8038A758 00387698  28 05 00 00 */	cmplwi r5, 0
/* 8038A75C 0038769C  41 82 00 10 */	beq .L_8038A76C
/* 8038A760 003876A0  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8038A764 003876A4  2C 00 00 04 */	cmpwi r0, 4
/* 8038A768 003876A8  41 82 00 4C */	beq .L_8038A7B4
.L_8038A76C:
/* 8038A76C 003876AC  7F C3 F3 78 */	mr r3, r30
/* 8038A770 003876B0  4B D7 CC 85 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038A774 003876B4  2C 03 00 02 */	cmpwi r3, 2
/* 8038A778 003876B8  40 82 00 10 */	bne .L_8038A788
/* 8038A77C 003876BC  38 00 00 01 */	li r0, 1
/* 8038A780 003876C0  98 1E 03 21 */	stb r0, 0x321(r30)
/* 8038A784 003876C4  48 00 00 30 */	b .L_8038A7B4
.L_8038A788:
/* 8038A788 003876C8  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 8038A78C 003876CC  C0 22 0B C4 */	lfs f1, lbl_8051EF24@sda21(r2)
/* 8038A790 003876D0  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 8038A794 003876D4  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 8038A798 003876D8  EC 41 10 3A */	fmadds f2, f1, f0, f2
/* 8038A79C 003876DC  C0 9E 01 94 */	lfs f4, 0x194(r30)
/* 8038A7A0 003876E0  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8038A7A4 003876E4  D0 5E 03 04 */	stfs f2, 0x304(r30)
/* 8038A7A8 003876E8  EC 81 20 3A */	fmadds f4, f1, f0, f4
/* 8038A7AC 003876EC  D0 7E 03 08 */	stfs f3, 0x308(r30)
/* 8038A7B0 003876F0  D0 9E 03 0C */	stfs f4, 0x30c(r30)
.L_8038A7B4:
/* 8038A7B4 003876F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A7B8 003876F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038A7BC 003876FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8038A7C0 00387700  7C 08 03 A6 */	mtlr r0
/* 8038A7C4 00387704  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A7C8 00387708  4E 80 00 20 */	blr 
.endfn wallCallback__Q34Game11ShijimiChou3ObjFRCQ24Game8MoveInfo

.fn collisionCallback__Q34Game11ShijimiChou3ObjFRQ24Game9CollEvent, global
/* 8038A7CC 0038770C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A7D0 00387710  7C 08 02 A6 */	mflr r0
/* 8038A7D4 00387714  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A7D8 00387718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038A7DC 0038771C  7C 9F 23 78 */	mr r31, r4
/* 8038A7E0 00387720  93 C1 00 08 */	stw r30, 8(r1)
/* 8038A7E4 00387724  7C 7E 1B 78 */	mr r30, r3
/* 8038A7E8 00387728  80 64 00 00 */	lwz r3, 0(r4)
/* 8038A7EC 0038772C  28 03 00 00 */	cmplwi r3, 0
/* 8038A7F0 00387730  41 82 00 28 */	beq .L_8038A818
/* 8038A7F4 00387734  81 83 00 00 */	lwz r12, 0(r3)
/* 8038A7F8 00387738  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8038A7FC 0038773C  7D 89 03 A6 */	mtctr r12
/* 8038A800 00387740  4E 80 04 21 */	bctrl 
/* 8038A804 00387744  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A808 00387748  41 82 00 10 */	beq .L_8038A818
/* 8038A80C 0038774C  7F C3 F3 78 */	mr r3, r30
/* 8038A810 00387750  7F E4 FB 78 */	mr r4, r31
/* 8038A814 00387754  4B D7 BD FD */	bl collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
.L_8038A818:
/* 8038A818 00387758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A81C 0038775C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038A820 00387760  83 C1 00 08 */	lwz r30, 8(r1)
/* 8038A824 00387764  7C 08 03 A6 */	mtlr r0
/* 8038A828 00387768  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A82C 0038776C  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game11ShijimiChou3ObjFRQ24Game9CollEvent

.fn startCarcassMotion__Q34Game11ShijimiChou3ObjFv, global
/* 8038A830 00387770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A834 00387774  7C 08 02 A6 */	mflr r0
/* 8038A838 00387778  38 80 00 00 */	li r4, 0
/* 8038A83C 0038777C  38 A0 00 00 */	li r5, 0
/* 8038A840 00387780  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A844 00387784  4B D7 A7 C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8038A848 00387788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A84C 0038778C  7C 08 03 A6 */	mtlr r0
/* 8038A850 00387790  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A854 00387794  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game11ShijimiChou3ObjFv

.fn getShadowParam__Q34Game11ShijimiChou3ObjFRQ24Game11ShadowParam, global
/* 8038A858 00387798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038A85C 0038779C  7C 08 02 A6 */	mflr r0
/* 8038A860 003877A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038A864 003877A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038A868 003877A8  7C 9F 23 78 */	mr r31, r4
/* 8038A86C 003877AC  93 C1 00 08 */	stw r30, 8(r1)
/* 8038A870 003877B0  7C 7E 1B 78 */	mr r30, r3
/* 8038A874 003877B4  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8038A878 003877B8  D0 04 00 00 */	stfs f0, 0(r4)
/* 8038A87C 003877BC  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 8038A880 003877C0  D0 04 00 04 */	stfs f0, 4(r4)
/* 8038A884 003877C4  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8038A888 003877C8  D0 04 00 08 */	stfs f0, 8(r4)
/* 8038A88C 003877CC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8038A890 003877D0  88 03 09 49 */	lbz r0, 0x949(r3)
/* 8038A894 003877D4  28 00 00 00 */	cmplwi r0, 0
/* 8038A898 003877D8  41 82 00 20 */	beq .L_8038A8B8
/* 8038A89C 003877DC  38 7E 02 DC */	addi r3, r30, 0x2dc
/* 8038A8A0 003877E0  4B E0 BD E9 */	bl updatable__Q24Game13UpdateContextFv
/* 8038A8A4 003877E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038A8A8 003877E8  40 82 00 10 */	bne .L_8038A8B8
/* 8038A8AC 003877EC  80 1E 02 E8 */	lwz r0, 0x2e8(r30)
/* 8038A8B0 003877F0  7C 00 F0 40 */	cmplw r0, r30
/* 8038A8B4 003877F4  40 82 00 48 */	bne .L_8038A8FC
.L_8038A8B8:
/* 8038A8B8 003877F8  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 8038A8BC 003877FC  28 00 00 00 */	cmplwi r0, 0
/* 8038A8C0 00387800  40 82 00 20 */	bne .L_8038A8E0
/* 8038A8C4 00387804  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 8038A8C8 00387808  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 8038A8CC 0038780C  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 8038A8D0 00387810  38 80 02 59 */	li r4, 0x259
/* 8038A8D4 00387814  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 8038A8D8 00387818  4C C6 31 82 */	crclr 6
/* 8038A8DC 0038781C  4B C9 FD 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038A8E0:
/* 8038A8E0 00387820  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8038A8E4 00387824  7F E4 FB 78 */	mr r4, r31
/* 8038A8E8 00387828  81 83 00 04 */	lwz r12, 4(r3)
/* 8038A8EC 0038782C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8038A8F0 00387830  7D 89 03 A6 */	mtctr r12
/* 8038A8F4 00387834  4E 80 04 21 */	bctrl 
/* 8038A8F8 00387838  D0 3E 03 00 */	stfs f1, 0x300(r30)
.L_8038A8FC:
/* 8038A8FC 0038783C  C0 22 0B C0 */	lfs f1, lbl_8051EF20@sda21(r2)
/* 8038A900 00387840  C0 1E 03 00 */	lfs f0, 0x300(r30)
/* 8038A904 00387844  C0 62 0B A8 */	lfs f3, lbl_8051EF08@sda21(r2)
/* 8038A908 00387848  EC 21 00 2A */	fadds f1, f1, f0
/* 8038A90C 0038784C  C0 42 0B C8 */	lfs f2, lbl_8051EF28@sda21(r2)
/* 8038A910 00387850  C0 02 0B CC */	lfs f0, lbl_8051EF2C@sda21(r2)
/* 8038A914 00387854  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8038A918 00387858  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 8038A91C 0038785C  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 8038A920 00387860  D0 7F 00 14 */	stfs f3, 0x14(r31)
/* 8038A924 00387864  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8038A928 00387868  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 8038A92C 0038786C  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 8038A930 00387870  EC 21 00 28 */	fsubs f1, f1, f0
/* 8038A934 00387874  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8038A938 00387878  40 81 00 10 */	ble .L_8038A948
/* 8038A93C 0038787C  C0 02 0B C4 */	lfs f0, lbl_8051EF24@sda21(r2)
/* 8038A940 00387880  EC 01 00 24 */	fdivs f0, f1, f0
/* 8038A944 00387884  EC 42 00 28 */	fsubs f2, f2, f0
.L_8038A948:
/* 8038A948 00387888  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038A94C 0038788C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038A950 00387890  40 80 00 08 */	bge .L_8038A958
/* 8038A954 00387894  FC 40 00 90 */	fmr f2, f0
.L_8038A958:
/* 8038A958 00387898  C0 02 0B D0 */	lfs f0, lbl_8051EF30@sda21(r2)
/* 8038A95C 0038789C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8038A960 003878A0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8038A964 003878A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038A968 003878A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8038A96C 003878AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038A970 003878B0  7C 08 03 A6 */	mtlr r0
/* 8038A974 003878B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8038A978 003878B8  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game11ShijimiChou3ObjFRQ24Game11ShadowParam

.fn genItem__Q34Game11ShijimiChou3ObjFv, global
/* 8038A97C 003878BC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8038A980 003878C0  7C 08 02 A6 */	mflr r0
/* 8038A984 003878C4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8038A988 003878C8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8038A98C 003878CC  7C 7F 1B 78 */	mr r31, r3
/* 8038A990 003878D0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8038A994 003878D4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8038A998 003878D8  28 04 00 00 */	cmplwi r4, 0
/* 8038A99C 003878DC  41 82 00 10 */	beq .L_8038A9AC
/* 8038A9A0 003878E0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8038A9A4 003878E4  2C 00 00 04 */	cmpwi r0, 4
/* 8038A9A8 003878E8  41 82 01 F8 */	beq .L_8038ABA0
.L_8038A9AC:
/* 8038A9AC 003878EC  38 00 00 01 */	li r0, 1
/* 8038A9B0 003878F0  98 1F 01 F3 */	stb r0, 0x1f3(r31)
/* 8038A9B4 003878F4  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8038A9B8 003878F8  2C 00 00 02 */	cmpwi r0, 2
/* 8038A9BC 003878FC  41 82 00 3C */	beq .L_8038A9F8
/* 8038A9C0 00387900  83 DF 00 C0 */	lwz r30, 0xc0(r31)
/* 8038A9C4 00387904  4B D3 EB DD */	bl rand
/* 8038A9C8 00387908  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038A9CC 0038790C  3C 00 43 30 */	lis r0, 0x4330
/* 8038A9D0 00387910  90 61 00 24 */	stw r3, 0x24(r1)
/* 8038A9D4 00387914  C8 62 0B A0 */	lfd f3, lbl_8051EF00@sda21(r2)
/* 8038A9D8 00387918  90 01 00 20 */	stw r0, 0x20(r1)
/* 8038A9DC 0038791C  C0 22 0B 98 */	lfs f1, lbl_8051EEF8@sda21(r2)
/* 8038A9E0 00387920  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8038A9E4 00387924  C0 1E 08 6C */	lfs f0, 0x86c(r30)
/* 8038A9E8 00387928  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038A9EC 0038792C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038A9F0 00387930  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038A9F4 00387934  41 81 01 AC */	bgt .L_8038ABA0
.L_8038A9F8:
/* 8038A9F8 00387938  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 8038A9FC 0038793C  2C 00 00 01 */	cmpwi r0, 1
/* 8038AA00 00387940  40 82 00 24 */	bne .L_8038AA24
/* 8038AA04 00387944  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8038AA08 00387948  28 03 00 00 */	cmplwi r3, 0
/* 8038AA0C 0038794C  41 82 00 3C */	beq .L_8038AA48
/* 8038AA10 00387950  38 80 00 1D */	li r4, 0x1d
/* 8038AA14 00387954  4B E5 C9 CD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8038AA18 00387958  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038AA1C 0038795C  40 82 00 2C */	bne .L_8038AA48
/* 8038AA20 00387960  48 00 01 80 */	b .L_8038ABA0
.L_8038AA24:
/* 8038AA24 00387964  2C 00 00 02 */	cmpwi r0, 2
/* 8038AA28 00387968  40 82 00 20 */	bne .L_8038AA48
/* 8038AA2C 0038796C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8038AA30 00387970  28 03 00 00 */	cmplwi r3, 0
/* 8038AA34 00387974  41 82 00 14 */	beq .L_8038AA48
/* 8038AA38 00387978  38 80 00 1E */	li r4, 0x1e
/* 8038AA3C 0038797C  4B E5 C9 A5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8038AA40 00387980  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038AA44 00387984  41 82 01 5C */	beq .L_8038ABA0
.L_8038AA48:
/* 8038AA48 00387988  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 8038AA4C 0038798C  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038AA50 00387990  C0 42 0B D4 */	lfs f2, lbl_8051EF34@sda21(r2)
/* 8038AA54 00387994  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8038AA58 00387998  40 80 00 30 */	bge .L_8038AA88
/* 8038AA5C 0038799C  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 8038AA60 003879A0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AA64 003879A4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AA68 003879A8  EC 04 00 32 */	fmuls f0, f4, f0
/* 8038AA6C 003879AC  FC 00 00 1E */	fctiwz f0, f0
/* 8038AA70 003879B0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8038AA74 003879B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8038AA78 003879B8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AA7C 003879BC  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038AA80 003879C0  FC 20 00 50 */	fneg f1, f0
/* 8038AA84 003879C4  48 00 00 28 */	b .L_8038AAAC
.L_8038AA88:
/* 8038AA88 003879C8  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038AA8C 003879CC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AA90 003879D0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AA94 003879D4  EC 04 00 32 */	fmuls f0, f4, f0
/* 8038AA98 003879D8  FC 00 00 1E */	fctiwz f0, f0
/* 8038AA9C 003879DC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8038AAA0 003879E0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8038AAA4 003879E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AAA8 003879E8  7C 23 04 2E */	lfsx f1, r3, r0
.L_8038AAAC:
/* 8038AAAC 003879EC  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038AAB0 003879F0  EC 62 00 72 */	fmuls f3, f2, f1
/* 8038AAB4 003879F4  C0 22 0B D4 */	lfs f1, lbl_8051EF34@sda21(r2)
/* 8038AAB8 003879F8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8038AABC 003879FC  40 80 00 30 */	bge .L_8038AAEC
/* 8038AAC0 00387A00  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 8038AAC4 00387A04  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AAC8 00387A08  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AACC 00387A0C  EC 04 00 32 */	fmuls f0, f4, f0
/* 8038AAD0 00387A10  FC 00 00 1E */	fctiwz f0, f0
/* 8038AAD4 00387A14  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8038AAD8 00387A18  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038AADC 00387A1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AAE0 00387A20  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038AAE4 00387A24  FC 00 00 50 */	fneg f0, f0
/* 8038AAE8 00387A28  48 00 00 28 */	b .L_8038AB10
.L_8038AAEC:
/* 8038AAEC 00387A2C  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038AAF0 00387A30  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AAF4 00387A34  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AAF8 00387A38  EC 04 00 32 */	fmuls f0, f4, f0
/* 8038AAFC 00387A3C  FC 00 00 1E */	fctiwz f0, f0
/* 8038AB00 00387A40  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8038AB04 00387A44  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8038AB08 00387A48  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AB0C 00387A4C  7C 03 04 2E */	lfsx f0, r3, r0
.L_8038AB10:
/* 8038AB10 00387A50  EC 41 00 32 */	fmuls f2, f1, f0
/* 8038AB14 00387A54  C0 22 0B D8 */	lfs f1, lbl_8051EF38@sda21(r2)
/* 8038AB18 00387A58  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8038AB1C 00387A5C  C0 02 0B C0 */	lfs f0, lbl_8051EF20@sda21(r2)
/* 8038AB20 00387A60  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8038AB24 00387A64  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 8038AB28 00387A68  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8038AB2C 00387A6C  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8038AB30 00387A70  D0 21 00 08 */	stfs f1, 8(r1)
/* 8038AB34 00387A74  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038AB38 00387A78  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8038AB3C 00387A7C  EC 01 00 2A */	fadds f0, f1, f0
/* 8038AB40 00387A80  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8038AB44 00387A84  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8038AB48 00387A88  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8038AB4C 00387A8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038AB50 00387A90  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8038AB54 00387A94  7D 89 03 A6 */	mtctr r12
/* 8038AB58 00387A98  4E 80 04 21 */	bctrl 
/* 8038AB5C 00387A9C  7C 60 1B 79 */	or. r0, r3, r3
/* 8038AB60 00387AA0  41 82 00 40 */	beq .L_8038ABA0
/* 8038AB64 00387AA4  7C 1E 03 78 */	mr r30, r0
/* 8038AB68 00387AA8  38 80 00 00 */	li r4, 0
/* 8038AB6C 00387AAC  4B DB 04 5D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8038AB70 00387AB0  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 8038AB74 00387AB4  7F C3 F3 78 */	mr r3, r30
/* 8038AB78 00387AB8  38 81 00 08 */	addi r4, r1, 8
/* 8038AB7C 00387ABC  38 A0 00 00 */	li r5, 0
/* 8038AB80 00387AC0  98 1E 01 E0 */	stb r0, 0x1e0(r30)
/* 8038AB84 00387AC4  4B DB 06 25 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8038AB88 00387AC8  7F C3 F3 78 */	mr r3, r30
/* 8038AB8C 00387ACC  38 81 00 14 */	addi r4, r1, 0x14
/* 8038AB90 00387AD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038AB94 00387AD4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8038AB98 00387AD8  7D 89 03 A6 */	mtctr r12
/* 8038AB9C 00387ADC  4E 80 04 21 */	bctrl 
.L_8038ABA0:
/* 8038ABA0 00387AE0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8038ABA4 00387AE4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8038ABA8 00387AE8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8038ABAC 00387AEC  7C 08 03 A6 */	mtlr r0
/* 8038ABB0 00387AF0  38 21 00 50 */	addi r1, r1, 0x50
/* 8038ABB4 00387AF4  4E 80 00 20 */	blr 
.endfn genItem__Q34Game11ShijimiChou3ObjFv

.fn checkFlyStart__Q34Game11ShijimiChou3ObjFv, global
/* 8038ABB8 00387AF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038ABBC 00387AFC  7C 08 02 A6 */	mflr r0
/* 8038ABC0 00387B00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038ABC4 00387B04  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8038ABC8 00387B08  28 04 00 00 */	cmplwi r4, 0
/* 8038ABCC 00387B0C  41 82 00 24 */	beq .L_8038ABF0
/* 8038ABD0 00387B10  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8038ABD4 00387B14  2C 00 00 04 */	cmpwi r0, 4
/* 8038ABD8 00387B18  40 82 00 18 */	bne .L_8038ABF0
/* 8038ABDC 00387B1C  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 8038ABE0 00387B20  2C 00 00 03 */	cmpwi r0, 3
/* 8038ABE4 00387B24  41 82 00 0C */	beq .L_8038ABF0
/* 8038ABE8 00387B28  38 60 00 00 */	li r3, 0
/* 8038ABEC 00387B2C  48 00 00 3C */	b .L_8038AC28
.L_8038ABF0:
/* 8038ABF0 00387B30  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 8038ABF4 00387B34  28 00 00 00 */	cmplwi r0, 0
/* 8038ABF8 00387B38  41 82 00 2C */	beq .L_8038AC24
/* 8038ABFC 00387B3C  7C 00 18 40 */	cmplw r0, r3
/* 8038AC00 00387B40  40 82 00 0C */	bne .L_8038AC0C
/* 8038AC04 00387B44  38 60 00 01 */	li r3, 1
/* 8038AC08 00387B48  48 00 00 20 */	b .L_8038AC28
.L_8038AC0C:
/* 8038AC0C 00387B4C  7C 03 03 78 */	mr r3, r0
/* 8038AC10 00387B50  4B D7 C7 E5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038AC14 00387B54  7C 03 00 D0 */	neg r0, r3
/* 8038AC18 00387B58  7C 00 1B 78 */	or r0, r0, r3
/* 8038AC1C 00387B5C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8038AC20 00387B60  48 00 00 08 */	b .L_8038AC28
.L_8038AC24:
/* 8038AC24 00387B64  38 60 00 01 */	li r3, 1
.L_8038AC28:
/* 8038AC28 00387B68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038AC2C 00387B6C  7C 08 03 A6 */	mtlr r0
/* 8038AC30 00387B70  38 21 00 10 */	addi r1, r1, 0x10
/* 8038AC34 00387B74  4E 80 00 20 */	blr 
.endfn checkFlyStart__Q34Game11ShijimiChou3ObjFv

.fn fly__Q34Game11ShijimiChou3ObjFv, global
/* 8038AC38 00387B78  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8038AC3C 00387B7C  7C 08 02 A6 */	mflr r0
/* 8038AC40 00387B80  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8038AC44 00387B84  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8038AC48 00387B88  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8038AC4C 00387B8C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8038AC50 00387B90  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8038AC54 00387B94  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8038AC58 00387B98  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8038AC5C 00387B9C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8038AC60 00387BA0  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8038AC64 00387BA4  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8038AC68 00387BA8  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8038AC6C 00387BAC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8038AC70 00387BB0  7C 7F 1B 78 */	mr r31, r3
/* 8038AC74 00387BB4  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 8038AC78 00387BB8  7C 00 F8 40 */	cmplw r0, r31
/* 8038AC7C 00387BBC  41 82 00 28 */	beq .L_8038ACA4
/* 8038AC80 00387BC0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8038AC84 00387BC4  28 03 00 00 */	cmplwi r3, 0
/* 8038AC88 00387BC8  41 82 00 10 */	beq .L_8038AC98
/* 8038AC8C 00387BCC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8038AC90 00387BD0  2C 00 00 04 */	cmpwi r0, 4
/* 8038AC94 00387BD4  41 82 00 10 */	beq .L_8038ACA4
.L_8038AC98:
/* 8038AC98 00387BD8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8038AC9C 00387BDC  60 00 00 40 */	ori r0, r0, 0x40
/* 8038ACA0 00387BE0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8038ACA4:
/* 8038ACA4 00387BE4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038ACA8 00387BE8  C0 5F 02 F0 */	lfs f2, 0x2f0(r31)
/* 8038ACAC 00387BEC  C0 23 08 BC */	lfs f1, 0x8bc(r3)
/* 8038ACB0 00387BF0  C0 02 0B C8 */	lfs f0, lbl_8051EF28@sda21(r2)
/* 8038ACB4 00387BF4  EC 22 08 2A */	fadds f1, f2, f1
/* 8038ACB8 00387BF8  D0 3F 02 F0 */	stfs f1, 0x2f0(r31)
/* 8038ACBC 00387BFC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038ACC0 00387C00  C0 7F 02 F4 */	lfs f3, 0x2f4(r31)
/* 8038ACC4 00387C04  C0 43 08 E4 */	lfs f2, 0x8e4(r3)
/* 8038ACC8 00387C08  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038ACCC 00387C0C  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8038ACD0 00387C10  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8038ACD4 00387C14  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8038ACD8 00387C18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038ACDC 00387C1C  40 81 00 0C */	ble .L_8038ACE8
/* 8038ACE0 00387C20  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038ACE4 00387C24  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
.L_8038ACE8:
/* 8038ACE8 00387C28  C0 22 0B A8 */	lfs f1, lbl_8051EF08@sda21(r2)
/* 8038ACEC 00387C2C  C0 02 0B DC */	lfs f0, lbl_8051EF3C@sda21(r2)
/* 8038ACF0 00387C30  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 8038ACF4 00387C34  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8038ACF8 00387C38  C0 3F 03 0C */	lfs f1, 0x30c(r31)
/* 8038ACFC 00387C3C  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 8038AD00 00387C40  EC 42 08 28 */	fsubs f2, f2, f1
/* 8038AD04 00387C44  C0 3F 03 04 */	lfs f1, 0x304(r31)
/* 8038AD08 00387C48  EC 63 08 28 */	fsubs f3, f3, f1
/* 8038AD0C 00387C4C  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8038AD10 00387C50  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8038AD14 00387C54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038AD18 00387C58  40 80 00 10 */	bge .L_8038AD28
/* 8038AD1C 00387C5C  7F E3 FB 78 */	mr r3, r31
/* 8038AD20 00387C60  48 00 0E C9 */	bl setNextGoal__Q34Game11ShijimiChou3ObjFv
/* 8038AD24 00387C64  48 00 02 94 */	b .L_8038AFB8
.L_8038AD28:
/* 8038AD28 00387C68  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038AD2C 00387C6C  88 03 09 4A */	lbz r0, 0x94a(r3)
/* 8038AD30 00387C70  C3 C3 02 E4 */	lfs f30, 0x2e4(r3)
/* 8038AD34 00387C74  28 00 00 00 */	cmplwi r0, 0
/* 8038AD38 00387C78  40 82 00 20 */	bne .L_8038AD58
/* 8038AD3C 00387C7C  FC 20 F0 90 */	fmr f1, f30
/* 8038AD40 00387C80  C0 43 03 0C */	lfs f2, 0x30c(r3)
/* 8038AD44 00387C84  C0 63 03 34 */	lfs f3, 0x334(r3)
/* 8038AD48 00387C88  7F E3 FB 78 */	mr r3, r31
/* 8038AD4C 00387C8C  38 9F 03 04 */	addi r4, r31, 0x304
/* 8038AD50 00387C90  4B D8 A8 8D */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8038AD54 00387C94  48 00 02 4C */	b .L_8038AFA0
.L_8038AD58:
/* 8038AD58 00387C98  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 8038AD5C 00387C9C  C0 03 09 5C */	lfs f0, 0x95c(r3)
/* 8038AD60 00387CA0  C3 E3 03 0C */	lfs f31, 0x30c(r3)
/* 8038AD64 00387CA4  EC 21 00 2A */	fadds f1, f1, f0
/* 8038AD68 00387CA8  C3 A3 03 34 */	lfs f29, 0x334(r3)
/* 8038AD6C 00387CAC  C0 02 0B E0 */	lfs f0, lbl_8051EF40@sda21(r2)
/* 8038AD70 00387CB0  D0 3F 02 F8 */	stfs f1, 0x2f8(r31)
/* 8038AD74 00387CB4  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 8038AD78 00387CB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038AD7C 00387CBC  40 81 00 0C */	ble .L_8038AD88
/* 8038AD80 00387CC0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038AD84 00387CC4  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
.L_8038AD88:
/* 8038AD88 00387CC8  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 8038AD8C 00387CCC  4B D4 4A 91 */	bl sin
/* 8038AD90 00387CD0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038AD94 00387CD4  FC 60 08 18 */	frsp f3, f1
/* 8038AD98 00387CD8  C0 1F 02 FC */	lfs f0, 0x2fc(r31)
/* 8038AD9C 00387CDC  7F E4 FB 78 */	mr r4, r31
/* 8038ADA0 00387CE0  C0 23 09 58 */	lfs f1, 0x958(r3)
/* 8038ADA4 00387CE4  38 61 00 14 */	addi r3, r1, 0x14
/* 8038ADA8 00387CE8  C0 42 0B E8 */	lfs f2, lbl_8051EF48@sda21(r2)
/* 8038ADAC 00387CEC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8038ADB0 00387CF0  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 8038ADB4 00387CF4  C0 62 0B E4 */	lfs f3, lbl_8051EF44@sda21(r2)
/* 8038ADB8 00387CF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038ADBC 00387CFC  EC 02 00 72 */	fmuls f0, f2, f1
/* 8038ADC0 00387D00  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038ADC4 00387D04  EF 83 00 32 */	fmuls f28, f3, f0
/* 8038ADC8 00387D08  7D 89 03 A6 */	mtctr r12
/* 8038ADCC 00387D0C  4E 80 04 21 */	bctrl 
/* 8038ADD0 00387D10  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 8038ADD4 00387D14  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8038ADD8 00387D18  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8038ADDC 00387D1C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8038ADE0 00387D20  C0 3F 03 04 */	lfs f1, 0x304(r31)
/* 8038ADE4 00387D24  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8038ADE8 00387D28  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8038ADEC 00387D2C  EC 21 28 28 */	fsubs f1, f1, f5
/* 8038ADF0 00387D30  EC 40 18 28 */	fsubs f2, f0, f3
/* 8038ADF4 00387D34  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8038ADF8 00387D38  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8038ADFC 00387D3C  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8038AE00 00387D40  4B CA A3 09 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8038AE04 00387D44  48 08 6D CD */	bl roundAng__Ff
/* 8038AE08 00387D48  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038AE0C 00387D4C  FF 60 08 90 */	fmr f27, f1
/* 8038AE10 00387D50  7F E3 FB 78 */	mr r3, r31
/* 8038AE14 00387D54  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038AE18 00387D58  7D 89 03 A6 */	mtctr r12
/* 8038AE1C 00387D5C  4E 80 04 21 */	bctrl 
/* 8038AE20 00387D60  FC 40 08 90 */	fmr f2, f1
/* 8038AE24 00387D64  FC 20 D8 90 */	fmr f1, f27
/* 8038AE28 00387D68  48 08 6D D5 */	bl angDist__Fff
/* 8038AE2C 00387D6C  EF 61 07 F2 */	fmuls f27, f1, f31
/* 8038AE30 00387D70  C0 02 0B E8 */	lfs f0, lbl_8051EF48@sda21(r2)
/* 8038AE34 00387D74  C0 22 0B E4 */	lfs f1, lbl_8051EF44@sda21(r2)
/* 8038AE38 00387D78  EC 00 07 72 */	fmuls f0, f0, f29
/* 8038AE3C 00387D7C  FC 40 DA 10 */	fabs f2, f27
/* 8038AE40 00387D80  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038AE44 00387D84  FC 00 10 18 */	frsp f0, f2
/* 8038AE48 00387D88  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8038AE4C 00387D8C  40 81 00 1C */	ble .L_8038AE68
/* 8038AE50 00387D90  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038AE54 00387D94  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 8038AE58 00387D98  40 81 00 0C */	ble .L_8038AE64
/* 8038AE5C 00387D9C  FF 60 08 90 */	fmr f27, f1
/* 8038AE60 00387DA0  48 00 00 08 */	b .L_8038AE68
.L_8038AE64:
/* 8038AE64 00387DA4  FF 60 08 50 */	fneg f27, f1
.L_8038AE68:
/* 8038AE68 00387DA8  7F E3 FB 78 */	mr r3, r31
/* 8038AE6C 00387DAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038AE70 00387DB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038AE74 00387DB4  7D 89 03 A6 */	mtctr r12
/* 8038AE78 00387DB8  4E 80 04 21 */	bctrl 
/* 8038AE7C 00387DBC  EC 3B 08 2A */	fadds f1, f27, f1
/* 8038AE80 00387DC0  48 08 6D 51 */	bl roundAng__Ff
/* 8038AE84 00387DC4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8038AE88 00387DC8  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038AE8C 00387DCC  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8038AE90 00387DD0  D0 3F 01 A8 */	stfs f1, 0x1a8(r31)
/* 8038AE94 00387DD4  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 8038AE98 00387DD8  EC 64 E0 2A */	fadds f3, f4, f28
/* 8038AE9C 00387DDC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8038AEA0 00387DE0  40 80 00 30 */	bge .L_8038AED0
/* 8038AEA4 00387DE4  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 8038AEA8 00387DE8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AEAC 00387DEC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AEB0 00387DF0  EC 03 00 32 */	fmuls f0, f3, f0
/* 8038AEB4 00387DF4  FC 00 00 1E */	fctiwz f0, f0
/* 8038AEB8 00387DF8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8038AEBC 00387DFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038AEC0 00387E00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AEC4 00387E04  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038AEC8 00387E08  FC 40 00 50 */	fneg f2, f0
/* 8038AECC 00387E0C  48 00 00 28 */	b .L_8038AEF4
.L_8038AED0:
/* 8038AED0 00387E10  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038AED4 00387E14  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AED8 00387E18  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AEDC 00387E1C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8038AEE0 00387E20  FC 00 00 1E */	fctiwz f0, f0
/* 8038AEE4 00387E24  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8038AEE8 00387E28  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8038AEEC 00387E2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AEF0 00387E30  7C 43 04 2E */	lfsx f2, r3, r0
.L_8038AEF4:
/* 8038AEF4 00387E34  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038AEF8 00387E38  EF FE 00 B2 */	fmuls f31, f30, f2
/* 8038AEFC 00387E3C  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 8038AF00 00387E40  C3 7F 01 D8 */	lfs f27, 0x1d8(r31)
/* 8038AF04 00387E44  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8038AF08 00387E48  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8038AF0C 00387E4C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8038AF10 00387E50  D3 61 00 24 */	stfs f27, 0x24(r1)
/* 8038AF14 00387E54  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8038AF18 00387E58  40 80 00 08 */	bge .L_8038AF20
/* 8038AF1C 00387E5C  FC 60 18 50 */	fneg f3, f3
.L_8038AF20:
/* 8038AF20 00387E60  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038AF24 00387E64  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038AF28 00387E68  FC 40 E2 10 */	fabs f2, f28
/* 8038AF2C 00387E6C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038AF30 00387E70  EC 23 00 32 */	fmuls f1, f3, f0
/* 8038AF34 00387E74  FC 00 10 18 */	frsp f0, f2
/* 8038AF38 00387E78  FC 20 08 1E */	fctiwz f1, f1
/* 8038AF3C 00387E7C  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8038AF40 00387E80  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 8038AF44 00387E84  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038AF48 00387E88  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038AF4C 00387E8C  7C 63 02 14 */	add r3, r3, r0
/* 8038AF50 00387E90  C0 03 00 04 */	lfs f0, 4(r3)
/* 8038AF54 00387E94  EF DE 00 32 */	fmuls f30, f30, f0
/* 8038AF58 00387E98  D0 9F 02 FC */	stfs f4, 0x2fc(r31)
/* 8038AF5C 00387E9C  40 81 00 1C */	ble .L_8038AF78
/* 8038AF60 00387EA0  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038AF64 00387EA4  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8038AF68 00387EA8  40 81 00 0C */	ble .L_8038AF74
/* 8038AF6C 00387EAC  FF 80 E8 90 */	fmr f28, f29
/* 8038AF70 00387EB0  48 00 00 08 */	b .L_8038AF78
.L_8038AF74:
/* 8038AF74 00387EB4  FF 80 E8 50 */	fneg f28, f29
.L_8038AF78:
/* 8038AF78 00387EB8  FC 20 E0 90 */	fmr f1, f28
/* 8038AF7C 00387EBC  48 08 6C 55 */	bl roundAng__Ff
/* 8038AF80 00387EC0  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8038AF84 00387EC4  EC 00 08 2A */	fadds f0, f0, f1
/* 8038AF88 00387EC8  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 8038AF8C 00387ECC  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8038AF90 00387ED0  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8038AF94 00387ED4  D3 FF 01 D4 */	stfs f31, 0x1d4(r31)
/* 8038AF98 00387ED8  D3 7F 01 D8 */	stfs f27, 0x1d8(r31)
/* 8038AF9C 00387EDC  D3 DF 01 DC */	stfs f30, 0x1dc(r31)
.L_8038AFA0:
/* 8038AFA0 00387EE0  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8038AFA4 00387EE4  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038AFA8 00387EE8  C0 42 0B EC */	lfs f2, lbl_8051EF4C@sda21(r2)
/* 8038AFAC 00387EEC  EC 00 08 28 */	fsubs f0, f0, f1
/* 8038AFB0 00387EF0  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8038AFB4 00387EF4  D0 1F 01 90 */	stfs f0, 0x190(r31)
.L_8038AFB8:
/* 8038AFB8 00387EF8  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8038AFBC 00387EFC  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8038AFC0 00387F00  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8038AFC4 00387F04  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8038AFC8 00387F08  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8038AFCC 00387F0C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8038AFD0 00387F10  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8038AFD4 00387F14  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8038AFD8 00387F18  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 8038AFDC 00387F1C  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8038AFE0 00387F20  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8038AFE4 00387F24  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8038AFE8 00387F28  7C 08 03 A6 */	mtlr r0
/* 8038AFEC 00387F2C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8038AFF0 00387F30  4E 80 00 20 */	blr 
.endfn fly__Q34Game11ShijimiChou3ObjFv

.fn restFly__Q34Game11ShijimiChou3ObjFv, global
/* 8038AFF4 00387F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038AFF8 00387F38  7C 08 02 A6 */	mflr r0
/* 8038AFFC 00387F3C  C0 42 0B F0 */	lfs f2, lbl_8051EF50@sda21(r2)
/* 8038B000 00387F40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038B004 00387F44  C0 02 0B AC */	lfs f0, lbl_8051EF0C@sda21(r2)
/* 8038B008 00387F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038B00C 00387F4C  7C 7F 1B 78 */	mr r31, r3
/* 8038B010 00387F50  C0 23 01 A4 */	lfs f1, 0x1a4(r3)
/* 8038B014 00387F54  EC 22 08 7A */	fmadds f1, f2, f1, f1
/* 8038B018 00387F58  D0 23 01 A4 */	stfs f1, 0x1a4(r3)
/* 8038B01C 00387F5C  C0 23 01 A4 */	lfs f1, 0x1a4(r3)
/* 8038B020 00387F60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B024 00387F64  40 81 00 0C */	ble .L_8038B030
/* 8038B028 00387F68  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038B02C 00387F6C  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
.L_8038B030:
/* 8038B030 00387F70  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038B034 00387F74  C0 5F 02 F0 */	lfs f2, 0x2f0(r31)
/* 8038B038 00387F78  C0 23 08 BC */	lfs f1, 0x8bc(r3)
/* 8038B03C 00387F7C  C0 02 0B C8 */	lfs f0, lbl_8051EF28@sda21(r2)
/* 8038B040 00387F80  EC 22 08 2A */	fadds f1, f2, f1
/* 8038B044 00387F84  D0 3F 02 F0 */	stfs f1, 0x2f0(r31)
/* 8038B048 00387F88  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038B04C 00387F8C  C0 7F 02 F4 */	lfs f3, 0x2f4(r31)
/* 8038B050 00387F90  C0 43 08 E4 */	lfs f2, 0x8e4(r3)
/* 8038B054 00387F94  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038B058 00387F98  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8038B05C 00387F9C  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8038B060 00387FA0  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8038B064 00387FA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B068 00387FA8  40 81 00 0C */	ble .L_8038B074
/* 8038B06C 00387FAC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038B070 00387FB0  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
.L_8038B074:
/* 8038B074 00387FB4  C0 22 0B A8 */	lfs f1, lbl_8051EF08@sda21(r2)
/* 8038B078 00387FB8  C0 02 0B DC */	lfs f0, lbl_8051EF3C@sda21(r2)
/* 8038B07C 00387FBC  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 8038B080 00387FC0  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8038B084 00387FC4  C0 3F 03 0C */	lfs f1, 0x30c(r31)
/* 8038B088 00387FC8  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 8038B08C 00387FCC  EC 42 08 28 */	fsubs f2, f2, f1
/* 8038B090 00387FD0  C0 3F 03 04 */	lfs f1, 0x304(r31)
/* 8038B094 00387FD4  EC 63 08 28 */	fsubs f3, f3, f1
/* 8038B098 00387FD8  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8038B09C 00387FDC  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8038B0A0 00387FE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B0A4 00387FE4  40 80 00 10 */	bge .L_8038B0B4
/* 8038B0A8 00387FE8  7F E3 FB 78 */	mr r3, r31
/* 8038B0AC 00387FEC  48 00 0B 3D */	bl setNextGoal__Q34Game11ShijimiChou3ObjFv
/* 8038B0B0 00387FF0  48 00 00 20 */	b .L_8038B0D0
.L_8038B0B4:
/* 8038B0B4 00387FF4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8038B0B8 00387FF8  7F E3 FB 78 */	mr r3, r31
/* 8038B0BC 00387FFC  38 9F 03 04 */	addi r4, r31, 0x304
/* 8038B0C0 00388000  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 8038B0C4 00388004  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 8038B0C8 00388008  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 8038B0CC 0038800C  4B D8 A5 11 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_8038B0D0:
/* 8038B0D0 00388010  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8038B0D4 00388014  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038B0D8 00388018  C0 42 0B F4 */	lfs f2, lbl_8051EF54@sda21(r2)
/* 8038B0DC 0038801C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8038B0E0 00388020  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8038B0E4 00388024  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 8038B0E8 00388028  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038B0EC 0038802C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038B0F0 00388030  7C 08 03 A6 */	mtlr r0
/* 8038B0F4 00388034  38 21 00 10 */	addi r1, r1, 0x10
/* 8038B0F8 00388038  4E 80 00 20 */	blr 
.endfn restFly__Q34Game11ShijimiChou3ObjFv

.fn restCheck__Q34Game11ShijimiChou3ObjFv, global
/* 8038B0FC 0038803C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038B100 00388040  7C 08 02 A6 */	mflr r0
/* 8038B104 00388044  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038B108 00388048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038B10C 0038804C  7C 7F 1B 78 */	mr r31, r3
/* 8038B110 00388050  80 63 02 E8 */	lwz r3, 0x2e8(r3)
/* 8038B114 00388054  28 03 00 00 */	cmplwi r3, 0
/* 8038B118 00388058  41 82 00 84 */	beq .L_8038B19C
/* 8038B11C 0038805C  4B D7 C2 D9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038B120 00388060  2C 03 00 00 */	cmpwi r3, 0
/* 8038B124 00388064  41 82 00 78 */	beq .L_8038B19C
/* 8038B128 00388068  7F E3 FB 78 */	mr r3, r31
/* 8038B12C 0038806C  4B D7 C2 C9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038B130 00388070  2C 03 00 03 */	cmpwi r3, 3
/* 8038B134 00388074  41 82 00 68 */	beq .L_8038B19C
/* 8038B138 00388078  7F E3 FB 78 */	mr r3, r31
/* 8038B13C 0038807C  38 80 00 02 */	li r4, 2
/* 8038B140 00388080  38 A0 00 00 */	li r5, 0
/* 8038B144 00388084  4B D7 9E C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8038B148 00388088  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8038B14C 0038808C  7F E4 FB 78 */	mr r4, r31
/* 8038B150 00388090  38 A0 00 01 */	li r5, 1
/* 8038B154 00388094  38 C0 00 00 */	li r6, 0
/* 8038B158 00388098  81 83 00 00 */	lwz r12, 0(r3)
/* 8038B15C 0038809C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038B160 003880A0  7D 89 03 A6 */	mtctr r12
/* 8038B164 003880A4  4E 80 04 21 */	bctrl 
/* 8038B168 003880A8  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038B16C 003880AC  7F E3 FB 78 */	mr r3, r31
/* 8038B170 003880B0  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 8038B174 003880B4  4B D7 C6 21 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 8038B178 003880B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8038B17C 003880BC  28 03 00 00 */	cmplwi r3, 0
/* 8038B180 003880C0  41 82 00 1C */	beq .L_8038B19C
/* 8038B184 003880C4  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8038B188 003880C8  2C 00 00 04 */	cmpwi r0, 4
/* 8038B18C 003880CC  40 82 00 10 */	bne .L_8038B19C
/* 8038B190 003880D0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8038B194 003880D4  60 00 00 40 */	ori r0, r0, 0x40
/* 8038B198 003880D8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8038B19C:
/* 8038B19C 003880DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038B1A0 003880E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038B1A4 003880E4  7C 08 03 A6 */	mtlr r0
/* 8038B1A8 003880E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8038B1AC 003880EC  4E 80 00 20 */	blr 
.endfn restCheck__Q34Game11ShijimiChou3ObjFv

.fn checkRestOn__Q34Game11ShijimiChou3ObjFv, global
/* 8038B1B0 003880F0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8038B1B4 003880F4  7C 08 02 A6 */	mflr r0
/* 8038B1B8 003880F8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8038B1BC 003880FC  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8038B1C0 00388100  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8038B1C4 00388104  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8038B1C8 00388108  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8038B1CC 0038810C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8038B1D0 00388110  7C 7F 1B 78 */	mr r31, r3
/* 8038B1D4 00388114  80 03 02 C8 */	lwz r0, 0x2c8(r3)
/* 8038B1D8 00388118  28 00 00 00 */	cmplwi r0, 0
/* 8038B1DC 0038811C  40 82 00 20 */	bne .L_8038B1FC
/* 8038B1E0 00388120  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 8038B1E4 00388124  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 8038B1E8 00388128  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 8038B1EC 0038812C  38 80 03 3B */	li r4, 0x33b
/* 8038B1F0 00388130  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 8038B1F4 00388134  4C C6 31 82 */	crclr 6
/* 8038B1F8 00388138  4B C9 F4 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038B1FC:
/* 8038B1FC 0038813C  80 7F 02 C8 */	lwz r3, 0x2c8(r31)
/* 8038B200 00388140  38 81 00 20 */	addi r4, r1, 0x20
/* 8038B204 00388144  80 63 01 14 */	lwz r3, 0x114(r3)
/* 8038B208 00388148  80 63 00 00 */	lwz r3, 0(r3)
/* 8038B20C 0038814C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8038B210 00388150  4B DA CF ED */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 8038B214 00388154  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038B218 00388158  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8038B21C 0038815C  C3 C1 00 2C */	lfs f30, 0x2c(r1)
/* 8038B220 00388160  EC 61 00 28 */	fsubs f3, f1, f0
/* 8038B224 00388164  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8038B228 00388168  C0 81 00 20 */	lfs f4, 0x20(r1)
/* 8038B22C 0038816C  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8038B230 00388170  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8038B234 00388174  EC A1 20 28 */	fsubs f5, f1, f4
/* 8038B238 00388178  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8038B23C 0038817C  C0 62 0B F8 */	lfs f3, lbl_8051EF58@sda21(r2)
/* 8038B240 00388180  D0 9F 03 10 */	stfs f4, 0x310(r31)
/* 8038B244 00388184  EC 82 00 28 */	fsubs f4, f2, f0
/* 8038B248 00388188  EC 63 07 B2 */	fmuls f3, f3, f30
/* 8038B24C 0038818C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8038B250 00388190  EC 45 09 7A */	fmadds f2, f5, f5, f1
/* 8038B254 00388194  D0 1F 03 14 */	stfs f0, 0x314(r31)
/* 8038B258 00388198  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8038B25C 0038819C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8038B260 003881A0  EF E4 11 3A */	fmadds f31, f4, f4, f2
/* 8038B264 003881A4  D0 3F 03 18 */	stfs f1, 0x318(r31)
/* 8038B268 003881A8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8038B26C 003881AC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8038B270 003881B0  D0 1F 03 1C */	stfs f0, 0x31c(r31)
/* 8038B274 003881B4  40 80 02 84 */	bge .L_8038B4F8
/* 8038B278 003881B8  C0 1F 01 D4 */	lfs f0, 0x1d4(r31)
/* 8038B27C 003881BC  7F E3 FB 78 */	mr r3, r31
/* 8038B280 003881C0  C0 22 0B A8 */	lfs f1, lbl_8051EF08@sda21(r2)
/* 8038B284 003881C4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038B288 003881C8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8038B28C 003881CC  C0 1F 01 D8 */	lfs f0, 0x1d8(r31)
/* 8038B290 003881D0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038B294 003881D4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8038B298 003881D8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8038B29C 003881DC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038B2A0 003881E0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8038B2A4 003881E4  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 8038B2A8 003881E8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038B2AC 003881EC  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8038B2B0 003881F0  C0 1F 01 CC */	lfs f0, 0x1cc(r31)
/* 8038B2B4 003881F4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038B2B8 003881F8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8038B2BC 003881FC  C0 1F 01 D0 */	lfs f0, 0x1d0(r31)
/* 8038B2C0 00388200  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038B2C4 00388204  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8038B2C8 00388208  4B D7 C4 B5 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8038B2CC 0038820C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8038B2D0 00388210  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8038B2D4 00388214  40 81 00 DC */	ble .L_8038B3B0
/* 8038B2D8 00388218  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8038B2DC 0038821C  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8038B2E0 00388220  C0 A1 00 24 */	lfs f5, 0x24(r1)
/* 8038B2E4 00388224  EC C2 08 28 */	fsubs f6, f2, f1
/* 8038B2E8 00388228  C0 81 00 28 */	lfs f4, 0x28(r1)
/* 8038B2EC 0038822C  C0 42 0B A8 */	lfs f2, lbl_8051EF08@sda21(r2)
/* 8038B2F0 00388230  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 8038B2F4 00388234  EC 26 01 B2 */	fmuls f1, f6, f6
/* 8038B2F8 00388238  C0 7F 01 90 */	lfs f3, 0x190(r31)
/* 8038B2FC 0038823C  EC 65 18 28 */	fsubs f3, f5, f3
/* 8038B300 00388240  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 8038B304 00388244  EC A3 00 F2 */	fmuls f5, f3, f3
/* 8038B308 00388248  C0 7F 01 94 */	lfs f3, 0x194(r31)
/* 8038B30C 0038824C  EC 21 28 2A */	fadds f1, f1, f5
/* 8038B310 00388250  EC 64 18 28 */	fsubs f3, f4, f3
/* 8038B314 00388254  EC 83 00 F2 */	fmuls f4, f3, f3
/* 8038B318 00388258  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8038B31C 0038825C  EC 24 08 2A */	fadds f1, f4, f1
/* 8038B320 00388260  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8038B324 00388264  40 81 00 20 */	ble .L_8038B344
/* 8038B328 00388268  EC 26 29 BA */	fmadds f1, f6, f6, f5
/* 8038B32C 0038826C  EC 84 08 2A */	fadds f4, f4, f1
/* 8038B330 00388270  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 8038B334 00388274  40 81 00 14 */	ble .L_8038B348
/* 8038B338 00388278  FC 20 20 34 */	frsqrte f1, f4
/* 8038B33C 0038827C  EC 81 01 32 */	fmuls f4, f1, f4
/* 8038B340 00388280  48 00 00 08 */	b .L_8038B348
.L_8038B344:
/* 8038B344 00388284  FC 80 10 90 */	fmr f4, f2
.L_8038B348:
/* 8038B348 00388288  C0 22 0B A8 */	lfs f1, lbl_8051EF08@sda21(r2)
/* 8038B34C 0038828C  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8038B350 00388290  40 81 00 30 */	ble .L_8038B380
/* 8038B354 00388294  C0 22 0B C8 */	lfs f1, lbl_8051EF28@sda21(r2)
/* 8038B358 00388298  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 8038B35C 0038829C  EC 81 20 24 */	fdivs f4, f1, f4
/* 8038B360 003882A0  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8038B364 003882A4  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8038B368 003882A8  EC 63 01 32 */	fmuls f3, f3, f4
/* 8038B36C 003882AC  EC 42 01 32 */	fmuls f2, f2, f4
/* 8038B370 003882B0  EC 21 01 32 */	fmuls f1, f1, f4
/* 8038B374 003882B4  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8038B378 003882B8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8038B37C 003882BC  D0 21 00 28 */	stfs f1, 0x28(r1)
.L_8038B380:
/* 8038B380 003882C0  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8038B384 003882C4  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8038B388 003882C8  EC 22 08 2A */	fadds f1, f2, f1
/* 8038B38C 003882CC  D0 3F 01 8C */	stfs f1, 0x18c(r31)
/* 8038B390 003882D0  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8038B394 003882D4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8038B398 003882D8  EC 22 08 2A */	fadds f1, f2, f1
/* 8038B39C 003882DC  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8038B3A0 003882E0  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8038B3A4 003882E4  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8038B3A8 003882E8  EC 22 08 2A */	fadds f1, f2, f1
/* 8038B3AC 003882EC  D0 3F 01 94 */	stfs f1, 0x194(r31)
.L_8038B3B0:
/* 8038B3B0 003882F0  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 8038B3B4 003882F4  C0 E1 00 24 */	lfs f7, 0x24(r1)
/* 8038B3B8 003882F8  C0 DF 01 90 */	lfs f6, 0x190(r31)
/* 8038B3BC 003882FC  FC 20 20 50 */	fneg f1, f4
/* 8038B3C0 00388300  EC A7 20 2A */	fadds f5, f7, f4
/* 8038B3C4 00388304  C0 42 0B C0 */	lfs f2, lbl_8051EF20@sda21(r2)
/* 8038B3C8 00388308  C0 62 0B E4 */	lfs f3, lbl_8051EF44@sda21(r2)
/* 8038B3CC 0038830C  EC 22 00 72 */	fmuls f1, f2, f1
/* 8038B3D0 00388310  EC 45 30 28 */	fsubs f2, f5, f6
/* 8038B3D4 00388314  FC 05 30 40 */	fcmpo cr0, f5, f6
/* 8038B3D8 00388318  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8038B3DC 0038831C  EC 62 08 24 */	fdivs f3, f2, f1
/* 8038B3E0 00388320  40 80 00 08 */	bge .L_8038B3E8
/* 8038B3E4 00388324  C0 62 0B A8 */	lfs f3, lbl_8051EF08@sda21(r2)
.L_8038B3E8:
/* 8038B3E8 00388328  EC 27 20 28 */	fsubs f1, f7, f4
/* 8038B3EC 0038832C  FC 01 30 40 */	fcmpo cr0, f1, f6
/* 8038B3F0 00388330  40 81 00 08 */	ble .L_8038B3F8
/* 8038B3F4 00388334  C0 62 0B E4 */	lfs f3, lbl_8051EF44@sda21(r2)
.L_8038B3F8:
/* 8038B3F8 00388338  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 8038B3FC 0038833C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8038B400 00388340  C0 42 0B FC */	lfs f2, lbl_8051EF5C@sda21(r2)
/* 8038B404 00388344  EC 03 08 28 */	fsubs f0, f3, f1
/* 8038B408 00388348  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8038B40C 0038834C  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 8038B410 00388350  40 80 00 58 */	bge .L_8038B468
/* 8038B414 00388354  C0 5F 01 A4 */	lfs f2, 0x1a4(r31)
/* 8038B418 00388358  C0 02 0B EC */	lfs f0, lbl_8051EF4C@sda21(r2)
/* 8038B41C 0038835C  EC 23 10 28 */	fsubs f1, f3, f2
/* 8038B420 00388360  FC 20 0A 10 */	fabs f1, f1
/* 8038B424 00388364  FC 20 08 18 */	frsp f1, f1
/* 8038B428 00388368  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B42C 0038836C  40 80 00 3C */	bge .L_8038B468
/* 8038B430 00388370  C0 02 0B AC */	lfs f0, lbl_8051EF0C@sda21(r2)
/* 8038B434 00388374  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038B438 00388378  40 81 00 0C */	ble .L_8038B444
/* 8038B43C 0038837C  EC 02 00 28 */	fsubs f0, f2, f0
/* 8038B440 00388380  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
.L_8038B444:
/* 8038B444 00388384  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 8038B448 00388388  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038B44C 0038838C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B450 00388390  40 80 00 10 */	bge .L_8038B460
/* 8038B454 00388394  C0 02 0B AC */	lfs f0, lbl_8051EF0C@sda21(r2)
/* 8038B458 00388398  EC 01 00 2A */	fadds f0, f1, f0
/* 8038B45C 0038839C  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
.L_8038B460:
/* 8038B460 003883A0  38 60 00 01 */	li r3, 1
/* 8038B464 003883A4  48 00 00 98 */	b .L_8038B4FC
.L_8038B468:
/* 8038B468 003883A8  7F E4 FB 78 */	mr r4, r31
/* 8038B46C 003883AC  38 61 00 14 */	addi r3, r1, 0x14
/* 8038B470 003883B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038B474 003883B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038B478 003883B8  7D 89 03 A6 */	mtctr r12
/* 8038B47C 003883BC  4E 80 04 21 */	bctrl 
/* 8038B480 003883C0  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 8038B484 003883C4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8038B488 003883C8  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8038B48C 003883CC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8038B490 003883D0  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8038B494 003883D4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8038B498 003883D8  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8038B49C 003883DC  EC 21 28 28 */	fsubs f1, f1, f5
/* 8038B4A0 003883E0  EC 40 18 28 */	fsubs f2, f0, f3
/* 8038B4A4 003883E4  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8038B4A8 003883E8  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8038B4AC 003883EC  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8038B4B0 003883F0  4B CA 9C 59 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8038B4B4 003883F4  48 08 67 1D */	bl roundAng__Ff
/* 8038B4B8 003883F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038B4BC 003883FC  FF C0 08 90 */	fmr f30, f1
/* 8038B4C0 00388400  7F E3 FB 78 */	mr r3, r31
/* 8038B4C4 00388404  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038B4C8 00388408  7D 89 03 A6 */	mtctr r12
/* 8038B4CC 0038840C  4E 80 04 21 */	bctrl 
/* 8038B4D0 00388410  FC 40 08 90 */	fmr f2, f1
/* 8038B4D4 00388414  FC 20 F0 90 */	fmr f1, f30
/* 8038B4D8 00388418  48 08 67 25 */	bl angDist__Fff
/* 8038B4DC 0038841C  C0 42 0B FC */	lfs f2, lbl_8051EF5C@sda21(r2)
/* 8038B4E0 00388420  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8038B4E4 00388424  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 8038B4E8 00388428  48 08 66 E9 */	bl roundAng__Ff
/* 8038B4EC 0038842C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8038B4F0 00388430  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8038B4F4 00388434  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
.L_8038B4F8:
/* 8038B4F8 00388438  38 60 00 00 */	li r3, 0
.L_8038B4FC:
/* 8038B4FC 0038843C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8038B500 00388440  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8038B504 00388444  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8038B508 00388448  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8038B50C 0038844C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8038B510 00388450  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8038B514 00388454  7C 08 03 A6 */	mtlr r0
/* 8038B518 00388458  38 21 00 60 */	addi r1, r1, 0x60
/* 8038B51C 0038845C  4E 80 00 20 */	blr 
.endfn checkRestOn__Q34Game11ShijimiChou3ObjFv

.fn checkRestOff__Q34Game11ShijimiChou3ObjFv, global
/* 8038B520 00388460  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8038B524 00388464  7C 08 02 A6 */	mflr r0
/* 8038B528 00388468  90 01 00 34 */	stw r0, 0x34(r1)
/* 8038B52C 0038846C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8038B530 00388470  7C 7F 1B 78 */	mr r31, r3
/* 8038B534 00388474  80 03 02 C8 */	lwz r0, 0x2c8(r3)
/* 8038B538 00388478  28 00 00 00 */	cmplwi r0, 0
/* 8038B53C 0038847C  40 82 00 20 */	bne .L_8038B55C
/* 8038B540 00388480  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 8038B544 00388484  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 8038B548 00388488  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 8038B54C 0038848C  38 80 03 6B */	li r4, 0x36b
/* 8038B550 00388490  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 8038B554 00388494  4C C6 31 82 */	crclr 6
/* 8038B558 00388498  4B C9 F0 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038B55C:
/* 8038B55C 0038849C  80 9F 02 C8 */	lwz r4, 0x2c8(r31)
/* 8038B560 003884A0  38 61 00 08 */	addi r3, r1, 8
/* 8038B564 003884A4  81 84 00 00 */	lwz r12, 0(r4)
/* 8038B568 003884A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038B56C 003884AC  7D 89 03 A6 */	mtctr r12
/* 8038B570 003884B0  4E 80 04 21 */	bctrl 
/* 8038B574 003884B4  80 7F 02 C8 */	lwz r3, 0x2c8(r31)
/* 8038B578 003884B8  38 81 00 14 */	addi r4, r1, 0x14
/* 8038B57C 003884BC  80 63 01 14 */	lwz r3, 0x114(r3)
/* 8038B580 003884C0  80 63 00 00 */	lwz r3, 0(r3)
/* 8038B584 003884C4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8038B588 003884C8  4B DA CC 75 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 8038B58C 003884CC  C0 FF 01 90 */	lfs f7, 0x190(r31)
/* 8038B590 003884D0  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 8038B594 003884D4  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8038B598 003884D8  EC 47 18 28 */	fsubs f2, f7, f3
/* 8038B59C 003884DC  C1 5F 01 8C */	lfs f10, 0x18c(r31)
/* 8038B5A0 003884E0  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 8038B5A4 003884E4  EC 00 00 32 */	fmuls f0, f0, f0
/* 8038B5A8 003884E8  C0 22 0B C0 */	lfs f1, lbl_8051EF20@sda21(r2)
/* 8038B5AC 003884EC  ED 2A 20 28 */	fsubs f9, f10, f4
/* 8038B5B0 003884F0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8038B5B4 003884F4  C0 DF 01 94 */	lfs f6, 0x194(r31)
/* 8038B5B8 003884F8  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 8038B5BC 003884FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038B5C0 00388500  ED 06 28 28 */	fsubs f8, f6, f5
/* 8038B5C4 00388504  EC 29 12 7A */	fmadds f1, f9, f9, f2
/* 8038B5C8 00388508  EC 28 0A 3A */	fmadds f1, f8, f8, f1
/* 8038B5CC 0038850C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B5D0 00388510  40 81 01 00 */	ble .L_8038B6D0
/* 8038B5D4 00388514  C1 02 0B A8 */	lfs f8, lbl_8051EF08@sda21(r2)
/* 8038B5D8 00388518  D1 1F 02 F0 */	stfs f8, 0x2f0(r31)
/* 8038B5DC 0038851C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8038B5E0 00388520  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8038B5E4 00388524  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8038B5E8 00388528  EC E1 10 28 */	fsubs f7, f1, f2
/* 8038B5EC 0038852C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8038B5F0 00388530  C0 C1 00 18 */	lfs f6, 0x18(r1)
/* 8038B5F4 00388534  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 8038B5F8 00388538  D0 E1 00 14 */	stfs f7, 0x14(r1)
/* 8038B5FC 0038853C  EC 67 01 F2 */	fmuls f3, f7, f7
/* 8038B600 00388540  C0 9F 01 90 */	lfs f4, 0x190(r31)
/* 8038B604 00388544  EC 86 20 28 */	fsubs f4, f6, f4
/* 8038B608 00388548  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8038B60C 0038854C  EC C4 01 32 */	fmuls f6, f4, f4
/* 8038B610 00388550  C0 9F 01 94 */	lfs f4, 0x194(r31)
/* 8038B614 00388554  EC 63 30 2A */	fadds f3, f3, f6
/* 8038B618 00388558  EC 85 20 28 */	fsubs f4, f5, f4
/* 8038B61C 0038855C  EC A4 01 32 */	fmuls f5, f4, f4
/* 8038B620 00388560  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 8038B624 00388564  EC 65 18 2A */	fadds f3, f5, f3
/* 8038B628 00388568  FC 03 40 40 */	fcmpo cr0, f3, f8
/* 8038B62C 0038856C  40 81 00 20 */	ble .L_8038B64C
/* 8038B630 00388570  EC 67 31 FA */	fmadds f3, f7, f7, f6
/* 8038B634 00388574  EC 85 18 2A */	fadds f4, f5, f3
/* 8038B638 00388578  FC 04 40 40 */	fcmpo cr0, f4, f8
/* 8038B63C 0038857C  40 81 00 14 */	ble .L_8038B650
/* 8038B640 00388580  FC 60 20 34 */	frsqrte f3, f4
/* 8038B644 00388584  EC 83 01 32 */	fmuls f4, f3, f4
/* 8038B648 00388588  48 00 00 08 */	b .L_8038B650
.L_8038B64C:
/* 8038B64C 0038858C  FC 80 40 90 */	fmr f4, f8
.L_8038B650:
/* 8038B650 00388590  C0 62 0B A8 */	lfs f3, lbl_8051EF08@sda21(r2)
/* 8038B654 00388594  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 8038B658 00388598  40 81 00 30 */	ble .L_8038B688
/* 8038B65C 0038859C  C0 62 0B C8 */	lfs f3, lbl_8051EF28@sda21(r2)
/* 8038B660 003885A0  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 8038B664 003885A4  EC C3 20 24 */	fdivs f6, f3, f4
/* 8038B668 003885A8  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8038B66C 003885AC  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8038B670 003885B0  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8038B674 003885B4  EC 84 01 B2 */	fmuls f4, f4, f6
/* 8038B678 003885B8  EC 63 01 B2 */	fmuls f3, f3, f6
/* 8038B67C 003885BC  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8038B680 003885C0  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8038B684 003885C4  D0 61 00 1C */	stfs f3, 0x1c(r1)
.L_8038B688:
/* 8038B688 003885C8  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8038B68C 003885CC  38 60 00 01 */	li r3, 1
/* 8038B690 003885D0  C0 C2 0B C4 */	lfs f6, lbl_8051EF24@sda21(r2)
/* 8038B694 003885D4  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8038B698 003885D8  EC A3 01 B2 */	fmuls f5, f3, f6
/* 8038B69C 003885DC  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8038B6A0 003885E0  EC 84 01 B2 */	fmuls f4, f4, f6
/* 8038B6A4 003885E4  EC 63 01 B2 */	fmuls f3, f3, f6
/* 8038B6A8 003885E8  EC 42 28 28 */	fsubs f2, f2, f5
/* 8038B6AC 003885EC  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8038B6B0 003885F0  EC 00 20 28 */	fsubs f0, f0, f4
/* 8038B6B4 003885F4  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8038B6B8 003885F8  EC 21 18 28 */	fsubs f1, f1, f3
/* 8038B6BC 003885FC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8038B6C0 00388600  D0 5F 03 04 */	stfs f2, 0x304(r31)
/* 8038B6C4 00388604  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8038B6C8 00388608  D0 3F 03 0C */	stfs f1, 0x30c(r31)
/* 8038B6CC 0038860C  48 00 00 EC */	b .L_8038B7B8
.L_8038B6D0:
/* 8038B6D0 00388610  EC 84 50 28 */	fsubs f4, f4, f10
/* 8038B6D4 00388614  C0 22 0B A8 */	lfs f1, lbl_8051EF08@sda21(r2)
/* 8038B6D8 00388618  EC 63 38 28 */	fsubs f3, f3, f7
/* 8038B6DC 0038861C  EC 45 30 28 */	fsubs f2, f5, f6
/* 8038B6E0 00388620  EC 04 01 32 */	fmuls f0, f4, f4
/* 8038B6E4 00388624  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 8038B6E8 00388628  EC A3 00 F2 */	fmuls f5, f3, f3
/* 8038B6EC 0038862C  EC C2 00 B2 */	fmuls f6, f2, f2
/* 8038B6F0 00388630  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8038B6F4 00388634  EC 00 28 2A */	fadds f0, f0, f5
/* 8038B6F8 00388638  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8038B6FC 0038863C  EC 06 00 2A */	fadds f0, f6, f0
/* 8038B700 00388640  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8038B704 00388644  40 81 00 20 */	ble .L_8038B724
/* 8038B708 00388648  EC 04 29 3A */	fmadds f0, f4, f4, f5
/* 8038B70C 0038864C  EC 66 00 2A */	fadds f3, f6, f0
/* 8038B710 00388650  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8038B714 00388654  40 81 00 14 */	ble .L_8038B728
/* 8038B718 00388658  FC 00 18 34 */	frsqrte f0, f3
/* 8038B71C 0038865C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8038B720 00388660  48 00 00 08 */	b .L_8038B728
.L_8038B724:
/* 8038B724 00388664  FC 60 08 90 */	fmr f3, f1
.L_8038B728:
/* 8038B728 00388668  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038B72C 0038866C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8038B730 00388670  40 81 00 30 */	ble .L_8038B760
/* 8038B734 00388674  C0 02 0B C8 */	lfs f0, lbl_8051EF28@sda21(r2)
/* 8038B738 00388678  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8038B73C 0038867C  EC 60 18 24 */	fdivs f3, f0, f3
/* 8038B740 00388680  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8038B744 00388684  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8038B748 00388688  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8038B74C 0038868C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8038B750 00388690  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8038B754 00388694  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8038B758 00388698  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8038B75C 0038869C  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_8038B760:
/* 8038B760 003886A0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8038B764 003886A4  38 60 00 00 */	li r3, 0
/* 8038B768 003886A8  C0 62 0B C0 */	lfs f3, lbl_8051EF20@sda21(r2)
/* 8038B76C 003886AC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8038B770 003886B0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8038B774 003886B4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8038B778 003886B8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8038B77C 003886BC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8038B780 003886C0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8038B784 003886C4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8038B788 003886C8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8038B78C 003886CC  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8038B790 003886D0  EC 00 10 28 */	fsubs f0, f0, f2
/* 8038B794 003886D4  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 8038B798 003886D8  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038B79C 003886DC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8038B7A0 003886E0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038B7A4 003886E4  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 8038B7A8 003886E8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8038B7AC 003886EC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8038B7B0 003886F0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038B7B4 003886F4  D0 1F 01 94 */	stfs f0, 0x194(r31)
.L_8038B7B8:
/* 8038B7B8 003886F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038B7BC 003886FC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8038B7C0 00388700  7C 08 03 A6 */	mtlr r0
/* 8038B7C4 00388704  38 21 00 30 */	addi r1, r1, 0x30
/* 8038B7C8 00388708  4E 80 00 20 */	blr 
.endfn checkRestOff__Q34Game11ShijimiChou3ObjFv

.fn resetRestPos__Q34Game11ShijimiChou3ObjFv, global
/* 8038B7CC 0038870C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8038B7D0 00388710  7C 08 02 A6 */	mflr r0
/* 8038B7D4 00388714  90 01 00 54 */	stw r0, 0x54(r1)
/* 8038B7D8 00388718  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8038B7DC 0038871C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8038B7E0 00388720  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8038B7E4 00388724  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8038B7E8 00388728  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8038B7EC 0038872C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8038B7F0 00388730  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8038B7F4 00388734  7C 7F 1B 78 */	mr r31, r3
/* 8038B7F8 00388738  80 03 02 C8 */	lwz r0, 0x2c8(r3)
/* 8038B7FC 0038873C  28 00 00 00 */	cmplwi r0, 0
/* 8038B800 00388740  40 82 00 20 */	bne .L_8038B820
/* 8038B804 00388744  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 8038B808 00388748  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 8038B80C 0038874C  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 8038B810 00388750  38 80 03 8E */	li r4, 0x38e
/* 8038B814 00388754  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 8038B818 00388758  4C C6 31 82 */	crclr 6
/* 8038B81C 0038875C  4B C9 EE 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038B820:
/* 8038B820 00388760  80 7F 02 C8 */	lwz r3, 0x2c8(r31)
/* 8038B824 00388764  38 81 00 08 */	addi r4, r1, 8
/* 8038B828 00388768  C3 FF 03 10 */	lfs f31, 0x310(r31)
/* 8038B82C 0038876C  80 63 01 14 */	lwz r3, 0x114(r3)
/* 8038B830 00388770  C3 DF 03 14 */	lfs f30, 0x314(r31)
/* 8038B834 00388774  80 63 00 00 */	lwz r3, 0(r3)
/* 8038B838 00388778  C3 BF 03 18 */	lfs f29, 0x318(r31)
/* 8038B83C 0038877C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8038B840 00388780  4B DA C9 BD */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 8038B844 00388784  C0 41 00 08 */	lfs f2, 8(r1)
/* 8038B848 00388788  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8038B84C 0038878C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8038B850 00388790  EF FF 10 28 */	fsubs f31, f31, f2
/* 8038B854 00388794  EF DE 08 28 */	fsubs f30, f30, f1
/* 8038B858 00388798  D0 5F 03 10 */	stfs f2, 0x310(r31)
/* 8038B85C 0038879C  EF BD 00 28 */	fsubs f29, f29, f0
/* 8038B860 003887A0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8038B864 003887A4  D0 1F 03 14 */	stfs f0, 0x314(r31)
/* 8038B868 003887A8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8038B86C 003887AC  D0 1F 03 18 */	stfs f0, 0x318(r31)
/* 8038B870 003887B0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8038B874 003887B4  D0 1F 03 1C */	stfs f0, 0x31c(r31)
/* 8038B878 003887B8  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8038B87C 003887BC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8038B880 003887C0  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 8038B884 003887C4  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8038B888 003887C8  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8038B88C 003887CC  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 8038B890 003887D0  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8038B894 003887D4  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8038B898 003887D8  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 8038B89C 003887DC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8038B8A0 003887E0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8038B8A4 003887E4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8038B8A8 003887E8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8038B8AC 003887EC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8038B8B0 003887F0  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8038B8B4 003887F4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8038B8B8 003887F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8038B8BC 003887FC  7C 08 03 A6 */	mtlr r0
/* 8038B8C0 00388800  38 21 00 50 */	addi r1, r1, 0x50
/* 8038B8C4 00388804  4E 80 00 20 */	blr 
.endfn resetRestPos__Q34Game11ShijimiChou3ObjFv

.fn leave__Q34Game11ShijimiChou3ObjFv, global
/* 8038B8C8 00388808  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038B8CC 0038880C  7C 08 02 A6 */	mflr r0
/* 8038B8D0 00388810  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038B8D4 00388814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038B8D8 00388818  7C 7F 1B 78 */	mr r31, r3
/* 8038B8DC 0038881C  80 63 02 E8 */	lwz r3, 0x2e8(r3)
/* 8038B8E0 00388820  28 03 00 00 */	cmplwi r3, 0
/* 8038B8E4 00388824  41 82 00 D4 */	beq .L_8038B9B8
/* 8038B8E8 00388828  7C 03 F8 40 */	cmplw r3, r31
/* 8038B8EC 0038882C  41 82 00 CC */	beq .L_8038B9B8
/* 8038B8F0 00388830  81 83 00 00 */	lwz r12, 0(r3)
/* 8038B8F4 00388834  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8038B8F8 00388838  7D 89 03 A6 */	mtctr r12
/* 8038B8FC 0038883C  4E 80 04 21 */	bctrl 
/* 8038B900 00388840  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038B904 00388844  41 82 00 B4 */	beq .L_8038B9B8
/* 8038B908 00388848  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8038B90C 0038884C  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8038B910 00388850  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8038B914 00388854  EC 61 00 28 */	fsubs f3, f1, f0
/* 8038B918 00388858  C0 3F 03 04 */	lfs f1, 0x304(r31)
/* 8038B91C 0038885C  C0 02 0B DC */	lfs f0, lbl_8051EF3C@sda21(r2)
/* 8038B920 00388860  EC 42 08 28 */	fsubs f2, f2, f1
/* 8038B924 00388864  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8038B928 00388868  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8038B92C 0038886C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B930 00388870  40 80 00 0C */	bge .L_8038B93C
/* 8038B934 00388874  7F E3 FB 78 */	mr r3, r31
/* 8038B938 00388878  48 00 04 C1 */	bl setTraceGoal__Q34Game11ShijimiChou3ObjFv
.L_8038B93C:
/* 8038B93C 0038887C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8038B940 00388880  7F E3 FB 78 */	mr r3, r31
/* 8038B944 00388884  38 9F 03 04 */	addi r4, r31, 0x304
/* 8038B948 00388888  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 8038B94C 0038888C  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 8038B950 00388890  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 8038B954 00388894  4B D8 9C 89 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8038B958 00388898  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8038B95C 0038889C  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8038B960 003888A0  C0 62 0C 00 */	lfs f3, lbl_8051EF60@sda21(r2)
/* 8038B964 003888A4  EC 20 10 28 */	fsubs f1, f0, f2
/* 8038B968 003888A8  C0 02 0B C8 */	lfs f0, lbl_8051EF28@sda21(r2)
/* 8038B96C 003888AC  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 8038B970 003888B0  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8038B974 003888B4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038B978 003888B8  C0 5F 02 F0 */	lfs f2, 0x2f0(r31)
/* 8038B97C 003888BC  C0 23 08 BC */	lfs f1, 0x8bc(r3)
/* 8038B980 003888C0  EC 22 08 2A */	fadds f1, f2, f1
/* 8038B984 003888C4  D0 3F 02 F0 */	stfs f1, 0x2f0(r31)
/* 8038B988 003888C8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038B98C 003888CC  C0 7F 02 F4 */	lfs f3, 0x2f4(r31)
/* 8038B990 003888D0  C0 43 08 E4 */	lfs f2, 0x8e4(r3)
/* 8038B994 003888D4  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8038B998 003888D8  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8038B99C 003888DC  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8038B9A0 003888E0  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8038B9A4 003888E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B9A8 003888E8  40 81 00 80 */	ble .L_8038BA28
/* 8038B9AC 003888EC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038B9B0 003888F0  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 8038B9B4 003888F4  48 00 00 74 */	b .L_8038BA28
.L_8038B9B8:
/* 8038B9B8 003888F8  7F E3 FB 78 */	mr r3, r31
/* 8038B9BC 003888FC  4B D7 7C ED */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 8038B9C0 00388900  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038B9C4 00388904  41 82 00 64 */	beq .L_8038BA28
/* 8038B9C8 00388908  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8038B9CC 0038890C  C0 02 0B C8 */	lfs f0, lbl_8051EF28@sda21(r2)
/* 8038B9D0 00388910  C0 42 0B B8 */	lfs f2, lbl_8051EF18@sda21(r2)
/* 8038B9D4 00388914  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038B9D8 00388918  40 81 00 0C */	ble .L_8038B9E4
/* 8038B9DC 0038891C  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038B9E0 00388920  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
.L_8038B9E4:
/* 8038B9E4 00388924  C0 7F 02 F4 */	lfs f3, 0x2f4(r31)
/* 8038B9E8 00388928  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038B9EC 0038892C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8038B9F0 00388930  40 80 00 1C */	bge .L_8038BA0C
/* 8038B9F4 00388934  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8038B9F8 00388938  C0 02 0B F4 */	lfs f0, lbl_8051EF54@sda21(r2)
/* 8038B9FC 0038893C  C0 42 0C 04 */	lfs f2, lbl_8051EF64@sda21(r2)
/* 8038BA00 00388940  EC 01 00 2A */	fadds f0, f1, f0
/* 8038BA04 00388944  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 8038BA08 00388948  48 00 00 14 */	b .L_8038BA1C
.L_8038BA0C:
/* 8038BA0C 0038894C  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8038BA10 00388950  C0 02 0B EC */	lfs f0, lbl_8051EF4C@sda21(r2)
/* 8038BA14 00388954  EC 01 00 2A */	fadds f0, f1, f0
/* 8038BA18 00388958  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
.L_8038BA1C:
/* 8038BA1C 0038895C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8038BA20 00388960  EC 02 00 FA */	fmadds f0, f2, f3, f0
/* 8038BA24 00388964  D0 1F 01 90 */	stfs f0, 0x190(r31)
.L_8038BA28:
/* 8038BA28 00388968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038BA2C 0038896C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038BA30 00388970  7C 08 03 A6 */	mtlr r0
/* 8038BA34 00388974  38 21 00 10 */	addi r1, r1, 0x10
/* 8038BA38 00388978  4E 80 00 20 */	blr 
.endfn leave__Q34Game11ShijimiChou3ObjFv

.fn leaveInit__Q34Game11ShijimiChou3ObjFv, global
/* 8038BA3C 0038897C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8038BA40 00388980  7C 08 02 A6 */	mflr r0
/* 8038BA44 00388984  90 01 00 54 */	stw r0, 0x54(r1)
/* 8038BA48 00388988  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8038BA4C 0038898C  7C 7F 1B 78 */	mr r31, r3
/* 8038BA50 00388990  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8038BA54 00388994  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 8038BA58 00388998  28 00 00 00 */	cmplwi r0, 0
/* 8038BA5C 0038899C  41 82 01 6C */	beq .L_8038BBC8
/* 8038BA60 003889A0  7C 00 F8 40 */	cmplw r0, r31
/* 8038BA64 003889A4  40 82 01 64 */	bne .L_8038BBC8
/* 8038BA68 003889A8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8038BA6C 003889AC  4B DC F1 B5 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8038BA70 003889B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8038BA74 003889B4  41 82 01 5C */	beq .L_8038BBD0
/* 8038BA78 003889B8  7F C4 F3 78 */	mr r4, r30
/* 8038BA7C 003889BC  38 61 00 08 */	addi r3, r1, 8
/* 8038BA80 003889C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038BA84 003889C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038BA88 003889C8  7D 89 03 A6 */	mtctr r12
/* 8038BA8C 003889CC  4E 80 04 21 */	bctrl 
/* 8038BA90 003889D0  C0 41 00 08 */	lfs f2, 8(r1)
/* 8038BA94 003889D4  7F C3 F3 78 */	mr r3, r30
/* 8038BA98 003889D8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8038BA9C 003889DC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8038BAA0 003889E0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8038BAA4 003889E4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8038BAA8 003889E8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8038BAAC 003889EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038BAB0 003889F0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038BAB4 003889F4  7D 89 03 A6 */	mtctr r12
/* 8038BAB8 003889F8  4E 80 04 21 */	bctrl 
/* 8038BABC 003889FC  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038BAC0 00388A00  C0 82 0C 08 */	lfs f4, lbl_8051EF68@sda21(r2)
/* 8038BAC4 00388A04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038BAC8 00388A08  40 80 00 30 */	bge .L_8038BAF8
/* 8038BACC 00388A0C  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 8038BAD0 00388A10  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BAD4 00388A14  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038BAD8 00388A18  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038BADC 00388A1C  FC 00 00 1E */	fctiwz f0, f0
/* 8038BAE0 00388A20  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8038BAE4 00388A24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038BAE8 00388A28  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BAEC 00388A2C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038BAF0 00388A30  FC 60 00 50 */	fneg f3, f0
/* 8038BAF4 00388A34  48 00 00 28 */	b .L_8038BB1C
.L_8038BAF8:
/* 8038BAF8 00388A38  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038BAFC 00388A3C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BB00 00388A40  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038BB04 00388A44  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038BB08 00388A48  FC 00 00 1E */	fctiwz f0, f0
/* 8038BB0C 00388A4C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8038BB10 00388A50  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8038BB14 00388A54  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BB18 00388A58  7C 63 04 2E */	lfsx f3, r3, r0
.L_8038BB1C:
/* 8038BB1C 00388A5C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8038BB20 00388A60  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038BB24 00388A64  EC 44 10 FC */	fnmsubs f2, f4, f3, f2
/* 8038BB28 00388A68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038BB2C 00388A6C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8038BB30 00388A70  40 80 00 08 */	bge .L_8038BB38
/* 8038BB34 00388A74  FC 20 08 50 */	fneg f1, f1
.L_8038BB38:
/* 8038BB38 00388A78  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038BB3C 00388A7C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BB40 00388A80  38 A3 71 A0 */	addi r5, r3, sincosTable___5JMath@l
/* 8038BB44 00388A84  C0 82 0C 08 */	lfs f4, lbl_8051EF68@sda21(r2)
/* 8038BB48 00388A88  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038BB4C 00388A8C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8038BB50 00388A90  C0 42 0B C8 */	lfs f2, lbl_8051EF28@sda21(r2)
/* 8038BB54 00388A94  7F E3 FB 78 */	mr r3, r31
/* 8038BB58 00388A98  C0 62 0C 0C */	lfs f3, lbl_8051EF6C@sda21(r2)
/* 8038BB5C 00388A9C  38 81 00 20 */	addi r4, r1, 0x20
/* 8038BB60 00388AA0  FC 20 08 1E */	fctiwz f1, f1
/* 8038BB64 00388AA4  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 8038BB68 00388AA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038BB6C 00388AAC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BB70 00388AB0  7C A5 02 14 */	add r5, r5, r0
/* 8038BB74 00388AB4  C0 25 00 04 */	lfs f1, 4(r5)
/* 8038BB78 00388AB8  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8038BB7C 00388ABC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8038BB80 00388AC0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8038BB84 00388AC4  C0 25 09 54 */	lfs f1, 0x954(r5)
/* 8038BB88 00388AC8  C0 05 02 E4 */	lfs f0, 0x2e4(r5)
/* 8038BB8C 00388ACC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038BB90 00388AD0  4B D8 9A 4D */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8038BB94 00388AD4  C0 3F 01 D8 */	lfs f1, 0x1d8(r31)
/* 8038BB98 00388AD8  7F E3 FB 78 */	mr r3, r31
/* 8038BB9C 00388ADC  C0 5F 01 DC */	lfs f2, 0x1dc(r31)
/* 8038BBA0 00388AE0  38 81 00 14 */	addi r4, r1, 0x14
/* 8038BBA4 00388AE4  C0 1F 01 D4 */	lfs f0, 0x1d4(r31)
/* 8038BBA8 00388AE8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8038BBAC 00388AEC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8038BBB0 00388AF0  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8038BBB4 00388AF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038BBB8 00388AF8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8038BBBC 00388AFC  7D 89 03 A6 */	mtctr r12
/* 8038BBC0 00388B00  4E 80 04 21 */	bctrl 
/* 8038BBC4 00388B04  48 00 00 0C */	b .L_8038BBD0
.L_8038BBC8:
/* 8038BBC8 00388B08  7F E3 FB 78 */	mr r3, r31
/* 8038BBCC 00388B0C  48 00 02 2D */	bl setTraceGoal__Q34Game11ShijimiChou3ObjFv
.L_8038BBD0:
/* 8038BBD0 00388B10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8038BBD4 00388B14  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8038BBD8 00388B18  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8038BBDC 00388B1C  7C 08 03 A6 */	mtlr r0
/* 8038BBE0 00388B20  38 21 00 50 */	addi r1, r1, 0x50
/* 8038BBE4 00388B24  4E 80 00 20 */	blr 
.endfn leaveInit__Q34Game11ShijimiChou3ObjFv

.fn setNextGoal__Q34Game11ShijimiChou3ObjFv, global
/* 8038BBE8 00388B28  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8038BBEC 00388B2C  7C 08 02 A6 */	mflr r0
/* 8038BBF0 00388B30  90 01 00 54 */	stw r0, 0x54(r1)
/* 8038BBF4 00388B34  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8038BBF8 00388B38  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8038BBFC 00388B3C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8038BC00 00388B40  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8038BC04 00388B44  7C 7F 1B 78 */	mr r31, r3
/* 8038BC08 00388B48  4B D7 B7 ED */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038BC0C 00388B4C  7C 7E 1B 78 */	mr r30, r3
/* 8038BC10 00388B50  7F E3 FB 78 */	mr r3, r31
/* 8038BC14 00388B54  48 00 05 E1 */	bl getFlyType__Q34Game11ShijimiChou3ObjFv
/* 8038BC18 00388B58  2C 03 00 01 */	cmpwi r3, 1
/* 8038BC1C 00388B5C  40 82 00 64 */	bne .L_8038BC80
/* 8038BC20 00388B60  2C 1E 00 01 */	cmpwi r30, 1
/* 8038BC24 00388B64  40 82 00 5C */	bne .L_8038BC80
/* 8038BC28 00388B68  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 8038BC2C 00388B6C  28 00 00 00 */	cmplwi r0, 0
/* 8038BC30 00388B70  41 82 00 50 */	beq .L_8038BC80
/* 8038BC34 00388B74  7C 00 F8 40 */	cmplw r0, r31
/* 8038BC38 00388B78  41 82 00 48 */	beq .L_8038BC80
/* 8038BC3C 00388B7C  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8038BC40 00388B80  3C 00 43 30 */	lis r0, 0x4330
/* 8038BC44 00388B84  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038BC48 00388B88  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8038BC4C 00388B8C  90 01 00 08 */	stw r0, 8(r1)
/* 8038BC50 00388B90  C8 62 0B A0 */	lfd f3, lbl_8051EF00@sda21(r2)
/* 8038BC54 00388B94  90 81 00 0C */	stw r4, 0xc(r1)
/* 8038BC58 00388B98  C0 22 0C 10 */	lfs f1, lbl_8051EF70@sda21(r2)
/* 8038BC5C 00388B9C  C8 41 00 08 */	lfd f2, 8(r1)
/* 8038BC60 00388BA0  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8038BC64 00388BA4  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038BC68 00388BA8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038BC6C 00388BAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038BC70 00388BB0  40 80 00 10 */	bge .L_8038BC80
/* 8038BC74 00388BB4  7F E3 FB 78 */	mr r3, r31
/* 8038BC78 00388BB8  48 00 01 81 */	bl setTraceGoal__Q34Game11ShijimiChou3ObjFv
/* 8038BC7C 00388BBC  48 00 01 5C */	b .L_8038BDD8
.L_8038BC80:
/* 8038BC80 00388BC0  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8038BC84 00388BC4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038BC88 00388BC8  2C 00 00 02 */	cmpwi r0, 2
/* 8038BC8C 00388BCC  C3 E3 03 5C */	lfs f31, 0x35c(r3)
/* 8038BC90 00388BD0  41 82 00 0C */	beq .L_8038BC9C
/* 8038BC94 00388BD4  2C 00 00 03 */	cmpwi r0, 3
/* 8038BC98 00388BD8  40 82 00 08 */	bne .L_8038BCA0
.L_8038BC9C:
/* 8038BC9C 00388BDC  C3 E2 0B C4 */	lfs f31, lbl_8051EF24@sda21(r2)
.L_8038BCA0:
/* 8038BCA0 00388BE0  4B D3 D9 01 */	bl rand
/* 8038BCA4 00388BE4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038BCA8 00388BE8  3C 00 43 30 */	lis r0, 0x4330
/* 8038BCAC 00388BEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8038BCB0 00388BF0  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8038BCB4 00388BF4  90 01 00 08 */	stw r0, 8(r1)
/* 8038BCB8 00388BF8  C8 62 0B A0 */	lfd f3, lbl_8051EF00@sda21(r2)
/* 8038BCBC 00388BFC  C8 21 00 08 */	lfd f1, 8(r1)
/* 8038BCC0 00388C00  C0 42 0B 98 */	lfs f2, lbl_8051EEF8@sda21(r2)
/* 8038BCC4 00388C04  EC 61 18 28 */	fsubs f3, f1, f3
/* 8038BCC8 00388C08  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8038BCCC 00388C0C  C0 22 0C 10 */	lfs f1, lbl_8051EF70@sda21(r2)
/* 8038BCD0 00388C10  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8038BCD4 00388C14  EC 43 10 24 */	fdivs f2, f3, f2
/* 8038BCD8 00388C18  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8038BCDC 00388C1C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8038BCE0 00388C20  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 8038BCE4 00388C24  EC 01 08 BA */	fmadds f0, f1, f2, f1
/* 8038BCE8 00388C28  EF FF 00 32 */	fmuls f31, f31, f0
/* 8038BCEC 00388C2C  4B D3 D8 B5 */	bl rand
/* 8038BCF0 00388C30  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038BCF4 00388C34  3C 00 43 30 */	lis r0, 0x4330
/* 8038BCF8 00388C38  90 61 00 14 */	stw r3, 0x14(r1)
/* 8038BCFC 00388C3C  C8 62 0B A0 */	lfd f3, lbl_8051EF00@sda21(r2)
/* 8038BD00 00388C40  90 01 00 10 */	stw r0, 0x10(r1)
/* 8038BD04 00388C44  C0 42 0B 98 */	lfs f2, lbl_8051EEF8@sda21(r2)
/* 8038BD08 00388C48  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8038BD0C 00388C4C  C0 22 0B AC */	lfs f1, lbl_8051EF0C@sda21(r2)
/* 8038BD10 00388C50  EC 60 18 28 */	fsubs f3, f0, f3
/* 8038BD14 00388C54  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038BD18 00388C58  EC 43 10 24 */	fdivs f2, f3, f2
/* 8038BD1C 00388C5C  EC 81 00 B2 */	fmuls f4, f1, f2
/* 8038BD20 00388C60  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8038BD24 00388C64  40 80 00 30 */	bge .L_8038BD54
/* 8038BD28 00388C68  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 8038BD2C 00388C6C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BD30 00388C70  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038BD34 00388C74  EC 04 00 32 */	fmuls f0, f4, f0
/* 8038BD38 00388C78  FC 00 00 1E */	fctiwz f0, f0
/* 8038BD3C 00388C7C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8038BD40 00388C80  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8038BD44 00388C84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BD48 00388C88  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038BD4C 00388C8C  FC 60 00 50 */	fneg f3, f0
/* 8038BD50 00388C90  48 00 00 28 */	b .L_8038BD78
.L_8038BD54:
/* 8038BD54 00388C94  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038BD58 00388C98  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BD5C 00388C9C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038BD60 00388CA0  EC 04 00 32 */	fmuls f0, f4, f0
/* 8038BD64 00388CA4  FC 00 00 1E */	fctiwz f0, f0
/* 8038BD68 00388CA8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8038BD6C 00388CAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8038BD70 00388CB0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BD74 00388CB4  7C 63 04 2E */	lfsx f3, r3, r0
.L_8038BD78:
/* 8038BD78 00388CB8  C0 3F 03 04 */	lfs f1, 0x304(r31)
/* 8038BD7C 00388CBC  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038BD80 00388CC0  EC 5F 08 FA */	fmadds f2, f31, f3, f1
/* 8038BD84 00388CC4  C0 22 0B D4 */	lfs f1, lbl_8051EF34@sda21(r2)
/* 8038BD88 00388CC8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8038BD8C 00388CCC  D0 5F 03 04 */	stfs f2, 0x304(r31)
/* 8038BD90 00388CD0  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8038BD94 00388CD4  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8038BD98 00388CD8  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8038BD9C 00388CDC  40 80 00 08 */	bge .L_8038BDA4
/* 8038BDA0 00388CE0  FC 80 20 50 */	fneg f4, f4
.L_8038BDA4:
/* 8038BDA4 00388CE4  C0 22 0B B4 */	lfs f1, lbl_8051EF14@sda21(r2)
/* 8038BDA8 00388CE8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BDAC 00388CEC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038BDB0 00388CF0  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8038BDB4 00388CF4  EC 24 00 72 */	fmuls f1, f4, f1
/* 8038BDB8 00388CF8  FC 20 08 1E */	fctiwz f1, f1
/* 8038BDBC 00388CFC  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8038BDC0 00388D00  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8038BDC4 00388D04  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BDC8 00388D08  7C 63 02 14 */	add r3, r3, r0
/* 8038BDCC 00388D0C  C0 23 00 04 */	lfs f1, 4(r3)
/* 8038BDD0 00388D10  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8038BDD4 00388D14  D0 1F 03 0C */	stfs f0, 0x30c(r31)
.L_8038BDD8:
/* 8038BDD8 00388D18  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8038BDDC 00388D1C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8038BDE0 00388D20  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8038BDE4 00388D24  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8038BDE8 00388D28  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8038BDEC 00388D2C  7C 08 03 A6 */	mtlr r0
/* 8038BDF0 00388D30  38 21 00 50 */	addi r1, r1, 0x50
/* 8038BDF4 00388D34  4E 80 00 20 */	blr 
.endfn setNextGoal__Q34Game11ShijimiChou3ObjFv

.fn setTraceGoal__Q34Game11ShijimiChou3ObjFv, global
/* 8038BDF8 00388D38  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8038BDFC 00388D3C  7C 08 02 A6 */	mflr r0
/* 8038BE00 00388D40  90 01 00 44 */	stw r0, 0x44(r1)
/* 8038BE04 00388D44  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8038BE08 00388D48  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8038BE0C 00388D4C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8038BE10 00388D50  7C 7F 1B 78 */	mr r31, r3
/* 8038BE14 00388D54  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 8038BE18 00388D58  28 04 00 00 */	cmplwi r4, 0
/* 8038BE1C 00388D5C  41 82 00 C0 */	beq .L_8038BEDC
/* 8038BE20 00388D60  81 84 00 00 */	lwz r12, 0(r4)
/* 8038BE24 00388D64  38 61 00 08 */	addi r3, r1, 8
/* 8038BE28 00388D68  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038BE2C 00388D6C  7D 89 03 A6 */	mtctr r12
/* 8038BE30 00388D70  4E 80 04 21 */	bctrl 
/* 8038BE34 00388D74  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038BE38 00388D78  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8038BE3C 00388D7C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8038BE40 00388D80  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8038BE44 00388D84  C0 23 09 50 */	lfs f1, 0x950(r3)
/* 8038BE48 00388D88  EF E0 10 28 */	fsubs f31, f0, f2
/* 8038BE4C 00388D8C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8038BE50 00388D90  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8038BE54 00388D94  EF FF 00 72 */	fmuls f31, f31, f1
/* 8038BE58 00388D98  D0 5F 03 08 */	stfs f2, 0x308(r31)
/* 8038BE5C 00388D9C  D0 7F 03 0C */	stfs f3, 0x30c(r31)
/* 8038BE60 00388DA0  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8038BE64 00388DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038BE68 00388DA8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8038BE6C 00388DAC  7D 89 03 A6 */	mtctr r12
/* 8038BE70 00388DB0  4E 80 04 21 */	bctrl 
/* 8038BE74 00388DB4  4B D3 D7 2D */	bl rand
/* 8038BE78 00388DB8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038BE7C 00388DBC  3C 00 43 30 */	lis r0, 0x4330
/* 8038BE80 00388DC0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8038BE84 00388DC4  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038BE88 00388DC8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8038BE8C 00388DCC  C8 42 0B A0 */	lfd f2, lbl_8051EF00@sda21(r2)
/* 8038BE90 00388DD0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8038BE94 00388DD4  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8038BE98 00388DD8  C0 02 0B 98 */	lfs f0, lbl_8051EEF8@sda21(r2)
/* 8038BE9C 00388DDC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038BEA0 00388DE0  EC 01 00 24 */	fdivs f0, f1, f0
/* 8038BEA4 00388DE4  FC 60 00 90 */	fmr f3, f0
/* 8038BEA8 00388DE8  40 81 00 08 */	ble .L_8038BEB0
/* 8038BEAC 00388DEC  FC 60 00 50 */	fneg f3, f0
.L_8038BEB0:
/* 8038BEB0 00388DF0  EC 43 07 F2 */	fmuls f2, f3, f31
/* 8038BEB4 00388DF4  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 8038BEB8 00388DF8  C0 22 0C 14 */	lfs f1, lbl_8051EF74@sda21(r2)
/* 8038BEBC 00388DFC  EC 00 10 2A */	fadds f0, f0, f2
/* 8038BEC0 00388E00  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8038BEC4 00388E04  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8038BEC8 00388E08  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8038BECC 00388E0C  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8038BED0 00388E10  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 8038BED4 00388E14  EC 00 10 2A */	fadds f0, f0, f2
/* 8038BED8 00388E18  D0 1F 03 0C */	stfs f0, 0x30c(r31)
.L_8038BEDC:
/* 8038BEDC 00388E1C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8038BEE0 00388E20  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038BEE4 00388E24  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8038BEE8 00388E28  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8038BEEC 00388E2C  7C 08 03 A6 */	mtlr r0
/* 8038BEF0 00388E30  38 21 00 40 */	addi r1, r1, 0x40
/* 8038BEF4 00388E34  4E 80 00 20 */	blr 
.endfn setTraceGoal__Q34Game11ShijimiChou3ObjFv

.fn isFallEnd__Q34Game11ShijimiChou3ObjFv, global
/* 8038BEF8 00388E38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038BEFC 00388E3C  7C 08 02 A6 */	mflr r0
/* 8038BF00 00388E40  C0 22 0C 14 */	lfs f1, lbl_8051EF74@sda21(r2)
/* 8038BF04 00388E44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038BF08 00388E48  C0 03 03 00 */	lfs f0, 0x300(r3)
/* 8038BF0C 00388E4C  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 8038BF10 00388E50  EC 01 00 2A */	fadds f0, f1, f0
/* 8038BF14 00388E54  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038BF18 00388E58  41 80 00 10 */	blt .L_8038BF28
/* 8038BF1C 00388E5C  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 8038BF20 00388E60  28 00 00 00 */	cmplwi r0, 0
/* 8038BF24 00388E64  41 82 00 20 */	beq .L_8038BF44
.L_8038BF28:
/* 8038BF28 00388E68  80 63 03 34 */	lwz r3, 0x334(r3)
/* 8038BF2C 00388E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038BF30 00388E70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8038BF34 00388E74  7D 89 03 A6 */	mtctr r12
/* 8038BF38 00388E78  4E 80 04 21 */	bctrl 
/* 8038BF3C 00388E7C  38 60 00 01 */	li r3, 1
/* 8038BF40 00388E80  48 00 00 08 */	b .L_8038BF48
.L_8038BF44:
/* 8038BF44 00388E84  38 60 00 00 */	li r3, 0
.L_8038BF48:
/* 8038BF48 00388E88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038BF4C 00388E8C  7C 08 03 A6 */	mtlr r0
/* 8038BF50 00388E90  38 21 00 10 */	addi r1, r1, 0x10
/* 8038BF54 00388E94  4E 80 00 20 */	blr 
.endfn isFallEnd__Q34Game11ShijimiChou3ObjFv

.fn deadEffect__Q34Game11ShijimiChou3ObjFv, global
/* 8038BF58 00388E98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038BF5C 00388E9C  7C 08 02 A6 */	mflr r0
/* 8038BF60 00388EA0  C0 22 0C 18 */	lfs f1, lbl_8051EF78@sda21(r2)
/* 8038BF64 00388EA4  38 83 01 8C */	addi r4, r3, 0x18c
/* 8038BF68 00388EA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038BF6C 00388EAC  4B D7 7B E5 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8038BF70 00388EB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038BF74 00388EB4  7C 08 03 A6 */	mtlr r0
/* 8038BF78 00388EB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8038BF7C 00388EBC  4E 80 00 20 */	blr 
.endfn deadEffect__Q34Game11ShijimiChou3ObjFv

.fn fallBehavior__Q34Game11ShijimiChou3ObjFv, global
/* 8038BF80 00388EC0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8038BF84 00388EC4  7C 08 02 A6 */	mflr r0
/* 8038BF88 00388EC8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8038BF8C 00388ECC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8038BF90 00388ED0  7C 7F 1B 78 */	mr r31, r3
/* 8038BF94 00388ED4  88 03 03 21 */	lbz r0, 0x321(r3)
/* 8038BF98 00388ED8  28 00 00 00 */	cmplwi r0, 0
/* 8038BF9C 00388EDC  40 82 01 28 */	bne .L_8038C0C4
/* 8038BFA0 00388EE0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038BFA4 00388EE4  C0 5F 03 24 */	lfs f2, 0x324(r31)
/* 8038BFA8 00388EE8  C0 23 09 68 */	lfs f1, 0x968(r3)
/* 8038BFAC 00388EEC  C0 02 0B AC */	lfs f0, lbl_8051EF0C@sda21(r2)
/* 8038BFB0 00388EF0  EC 22 08 2A */	fadds f1, f2, f1
/* 8038BFB4 00388EF4  D0 3F 03 24 */	stfs f1, 0x324(r31)
/* 8038BFB8 00388EF8  C0 3F 03 24 */	lfs f1, 0x324(r31)
/* 8038BFBC 00388EFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038BFC0 00388F00  40 81 00 0C */	ble .L_8038BFCC
/* 8038BFC4 00388F04  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038BFC8 00388F08  D0 1F 03 24 */	stfs f0, 0x324(r31)
.L_8038BFCC:
/* 8038BFCC 00388F0C  C0 3F 03 24 */	lfs f1, 0x324(r31)
/* 8038BFD0 00388F10  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038BFD4 00388F14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038BFD8 00388F18  40 80 00 30 */	bge .L_8038C008
/* 8038BFDC 00388F1C  C0 02 0B B0 */	lfs f0, lbl_8051EF10@sda21(r2)
/* 8038BFE0 00388F20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038BFE4 00388F24  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038BFE8 00388F28  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038BFEC 00388F2C  FC 00 00 1E */	fctiwz f0, f0
/* 8038BFF0 00388F30  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8038BFF4 00388F34  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8038BFF8 00388F38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038BFFC 00388F3C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038C000 00388F40  FC 60 00 50 */	fneg f3, f0
/* 8038C004 00388F44  48 00 00 28 */	b .L_8038C02C
.L_8038C008:
/* 8038C008 00388F48  C0 02 0B B4 */	lfs f0, lbl_8051EF14@sda21(r2)
/* 8038C00C 00388F4C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C010 00388F50  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C014 00388F54  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C018 00388F58  FC 00 00 1E */	fctiwz f0, f0
/* 8038C01C 00388F5C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8038C020 00388F60  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038C024 00388F64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C028 00388F68  7C 63 04 2E */	lfsx f3, r3, r0
.L_8038C02C:
/* 8038C02C 00388F6C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8038C030 00388F70  7F E4 FB 78 */	mr r4, r31
/* 8038C034 00388F74  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 8038C038 00388F78  38 61 00 14 */	addi r3, r1, 0x14
/* 8038C03C 00388F7C  C0 85 09 70 */	lfs f4, 0x970(r5)
/* 8038C040 00388F80  C0 02 0C 10 */	lfs f0, lbl_8051EF70@sda21(r2)
/* 8038C044 00388F84  EC 44 08 FA */	fmadds f2, f4, f3, f1
/* 8038C048 00388F88  EC 20 01 32 */	fmuls f1, f0, f4
/* 8038C04C 00388F8C  D0 5F 01 8C */	stfs f2, 0x18c(r31)
/* 8038C050 00388F90  C0 1F 02 D4 */	lfs f0, 0x2d4(r31)
/* 8038C054 00388F94  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8038C058 00388F98  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 8038C05C 00388F9C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8038C060 00388FA0  EC 00 18 2A */	fadds f0, f0, f3
/* 8038C064 00388FA4  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 8038C068 00388FA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038C06C 00388FAC  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8038C070 00388FB0  7D 89 03 A6 */	mtctr r12
/* 8038C074 00388FB4  4E 80 04 21 */	bctrl 
/* 8038C078 00388FB8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8038C07C 00388FBC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8038C080 00388FC0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8038C084 00388FC4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8038C088 00388FC8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8038C08C 00388FCC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8038C090 00388FD0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038C094 00388FD4  C0 03 09 6C */	lfs f0, 0x96c(r3)
/* 8038C098 00388FD8  FC 00 00 50 */	fneg f0, f0
/* 8038C09C 00388FDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C0A0 00388FE0  40 80 00 08 */	bge .L_8038C0A8
/* 8038C0A4 00388FE4  D0 01 00 30 */	stfs f0, 0x30(r1)
.L_8038C0A8:
/* 8038C0A8 00388FE8  7F E3 FB 78 */	mr r3, r31
/* 8038C0AC 00388FEC  38 81 00 2C */	addi r4, r1, 0x2c
/* 8038C0B0 00388FF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038C0B4 00388FF4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8038C0B8 00388FF8  7D 89 03 A6 */	mtctr r12
/* 8038C0BC 00388FFC  4E 80 04 21 */	bctrl 
/* 8038C0C0 00389000  48 00 00 70 */	b .L_8038C130
.L_8038C0C4:
/* 8038C0C4 00389004  7F E4 FB 78 */	mr r4, r31
/* 8038C0C8 00389008  38 61 00 08 */	addi r3, r1, 8
/* 8038C0CC 0038900C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038C0D0 00389010  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8038C0D4 00389014  7D 89 03 A6 */	mtctr r12
/* 8038C0D8 00389018  4E 80 04 21 */	bctrl 
/* 8038C0DC 0038901C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8038C0E0 00389020  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8038C0E4 00389024  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8038C0E8 00389028  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8038C0EC 0038902C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8038C0F0 00389030  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8038C0F4 00389034  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038C0F8 00389038  C0 03 09 6C */	lfs f0, 0x96c(r3)
/* 8038C0FC 0038903C  FC 00 00 50 */	fneg f0, f0
/* 8038C100 00389040  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C104 00389044  40 80 00 08 */	bge .L_8038C10C
/* 8038C108 00389048  D0 01 00 24 */	stfs f0, 0x24(r1)
.L_8038C10C:
/* 8038C10C 0038904C  C0 02 0B A8 */	lfs f0, lbl_8051EF08@sda21(r2)
/* 8038C110 00389050  7F E3 FB 78 */	mr r3, r31
/* 8038C114 00389054  38 81 00 20 */	addi r4, r1, 0x20
/* 8038C118 00389058  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8038C11C 0038905C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8038C120 00389060  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038C124 00389064  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8038C128 00389068  7D 89 03 A6 */	mtctr r12
/* 8038C12C 0038906C  4E 80 04 21 */	bctrl 
.L_8038C130:
/* 8038C130 00389070  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8038C134 00389074  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8038C138 00389078  7C 08 03 A6 */	mtlr r0
/* 8038C13C 0038907C  38 21 00 50 */	addi r1, r1, 0x50
/* 8038C140 00389080  4E 80 00 20 */	blr 
.endfn fallBehavior__Q34Game11ShijimiChou3ObjFv

.fn updateCluster__Q34Game11ShijimiChou3ObjFv, global
/* 8038C144 00389084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038C148 00389088  7C 08 02 A6 */	mflr r0
/* 8038C14C 0038908C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038C150 00389090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038C154 00389094  93 C1 00 08 */	stw r30, 8(r1)
/* 8038C158 00389098  7C 7E 1B 78 */	mr r30, r3
/* 8038C15C 0038909C  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 8038C160 003890A0  7C 00 F0 40 */	cmplw r0, r30
/* 8038C164 003890A4  40 82 00 78 */	bne .L_8038C1DC
/* 8038C168 003890A8  83 FE 03 28 */	lwz r31, 0x328(r30)
/* 8038C16C 003890AC  2C 1F 00 28 */	cmpwi r31, 0x28
/* 8038C170 003890B0  40 81 00 08 */	ble .L_8038C178
/* 8038C174 003890B4  3B E0 00 28 */	li r31, 0x28
.L_8038C178:
/* 8038C178 003890B8  2C 1F 00 01 */	cmpwi r31, 1
/* 8038C17C 003890BC  41 81 00 2C */	bgt .L_8038C1A8
/* 8038C180 003890C0  7F C3 F3 78 */	mr r3, r30
/* 8038C184 003890C4  4B D7 B2 71 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038C188 003890C8  2C 03 00 00 */	cmpwi r3, 0
/* 8038C18C 003890CC  41 82 00 1C */	beq .L_8038C1A8
/* 8038C190 003890D0  7F C3 F3 78 */	mr r3, r30
/* 8038C194 003890D4  38 80 00 00 */	li r4, 0
/* 8038C198 003890D8  4B DA EF 59 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8038C19C 003890DC  38 00 00 00 */	li r0, 0
/* 8038C1A0 003890E0  90 1E 02 E8 */	stw r0, 0x2e8(r30)
/* 8038C1A4 003890E4  48 00 00 38 */	b .L_8038C1DC
.L_8038C1A8:
/* 8038C1A8 003890E8  80 1E 03 38 */	lwz r0, 0x338(r30)
/* 8038C1AC 003890EC  28 00 00 00 */	cmplwi r0, 0
/* 8038C1B0 003890F0  40 82 00 20 */	bne .L_8038C1D0
/* 8038C1B4 003890F4  3C 60 80 49 */	lis r3, lbl_80493FA0@ha
/* 8038C1B8 003890F8  3C A0 80 49 */	lis r5, lbl_80493FB0@ha
/* 8038C1BC 003890FC  38 63 3F A0 */	addi r3, r3, lbl_80493FA0@l
/* 8038C1C0 00389100  38 80 04 92 */	li r4, 0x492
/* 8038C1C4 00389104  38 A5 3F B0 */	addi r5, r5, lbl_80493FB0@l
/* 8038C1C8 00389108  4C C6 31 82 */	crclr 6
/* 8038C1CC 0038910C  4B C9 E4 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038C1D0:
/* 8038C1D0 00389110  80 7E 03 38 */	lwz r3, 0x338(r30)
/* 8038C1D4 00389114  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 8038C1D8 00389118  48 0D 6F B5 */	bl startClusterSound__Q23PSM7ClusterFUc
.L_8038C1DC:
/* 8038C1DC 0038911C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038C1E0 00389120  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038C1E4 00389124  83 C1 00 08 */	lwz r30, 8(r1)
/* 8038C1E8 00389128  7C 08 03 A6 */	mtlr r0
/* 8038C1EC 0038912C  38 21 00 10 */	addi r1, r1, 0x10
/* 8038C1F0 00389130  4E 80 00 20 */	blr 
.endfn updateCluster__Q34Game11ShijimiChou3ObjFv

.fn getFlyType__Q34Game11ShijimiChou3ObjFv, global
/* 8038C1F4 00389134  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8038C1F8 00389138  88 04 09 4D */	lbz r0, 0x94d(r4)
/* 8038C1FC 0038913C  28 00 00 00 */	cmplwi r0, 0
/* 8038C200 00389140  41 82 00 0C */	beq .L_8038C20C
/* 8038C204 00389144  88 64 09 48 */	lbz r3, 0x948(r4)
/* 8038C208 00389148  4E 80 00 20 */	blr 
.L_8038C20C:
/* 8038C20C 0038914C  80 63 03 2C */	lwz r3, 0x32c(r3)
/* 8038C210 00389150  4E 80 00 20 */	blr 
.endfn getFlyType__Q34Game11ShijimiChou3ObjFv

.fn leaderInit__Q34Game11ShijimiChou3ObjFv, global
/* 8038C214 00389154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038C218 00389158  7C 08 02 A6 */	mflr r0
/* 8038C21C 0038915C  38 80 00 00 */	li r4, 0
/* 8038C220 00389160  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038C224 00389164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038C228 00389168  7C 7F 1B 78 */	mr r31, r3
/* 8038C22C 0038916C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038C230 00389170  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8038C234 00389174  7D 89 03 A6 */	mtctr r12
/* 8038C238 00389178  4E 80 04 21 */	bctrl 
/* 8038C23C 0038917C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8038C240 00389180  28 03 00 00 */	cmplwi r3, 0
/* 8038C244 00389184  41 82 00 1C */	beq .L_8038C260
/* 8038C248 00389188  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8038C24C 0038918C  2C 00 00 04 */	cmpwi r0, 4
/* 8038C250 00389190  41 82 00 10 */	beq .L_8038C260
/* 8038C254 00389194  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8038C258 00389198  64 00 00 40 */	oris r0, r0, 0x40
/* 8038C25C 0038919C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8038C260:
/* 8038C260 003891A0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8038C264 003891A4  7F E4 FB 78 */	mr r4, r31
/* 8038C268 003891A8  4B EB 5C 31 */	bl delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8038C26C 003891AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038C270 003891B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038C274 003891B4  7C 08 03 A6 */	mtlr r0
/* 8038C278 003891B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8038C27C 003891BC  4E 80 00 20 */	blr 
.endfn leaderInit__Q34Game11ShijimiChou3ObjFv

.fn createAppearEffect__Q34Game11ShijimiChou3ObjFv, global
/* 8038C280 003891C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8038C284 003891C4  7C 08 02 A6 */	mflr r0
/* 8038C288 003891C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8038C28C 003891CC  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 8038C290 003891D0  7C 00 18 40 */	cmplw r0, r3
/* 8038C294 003891D4  41 82 00 84 */	beq .L_8038C318
/* 8038C298 003891D8  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 8038C29C 003891DC  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 8038C2A0 003891E0  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 8038C2A4 003891E4  3C 80 80 4E */	lis r4, __vt__Q23efx7ArgChou@ha
/* 8038C2A8 003891E8  38 C6 A7 EC */	addi r6, r6, __vt__Q23efx3Arg@l
/* 8038C2AC 003891EC  C0 45 00 00 */	lfs f2, 0(r5)
/* 8038C2B0 003891F0  C0 25 00 04 */	lfs f1, 4(r5)
/* 8038C2B4 003891F4  38 00 00 00 */	li r0, 0
/* 8038C2B8 003891F8  C0 05 00 08 */	lfs f0, 8(r5)
/* 8038C2BC 003891FC  38 84 4C F4 */	addi r4, r4, __vt__Q23efx7ArgChou@l
/* 8038C2C0 00389200  90 C1 00 08 */	stw r6, 8(r1)
/* 8038C2C4 00389204  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8038C2C8 00389208  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8038C2CC 0038920C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8038C2D0 00389210  90 81 00 08 */	stw r4, 8(r1)
/* 8038C2D4 00389214  90 01 00 18 */	stw r0, 0x18(r1)
/* 8038C2D8 00389218  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8038C2DC 0038921C  2C 00 00 01 */	cmpwi r0, 1
/* 8038C2E0 00389220  40 82 00 10 */	bne .L_8038C2F0
/* 8038C2E4 00389224  38 00 00 01 */	li r0, 1
/* 8038C2E8 00389228  90 01 00 18 */	stw r0, 0x18(r1)
/* 8038C2EC 0038922C  48 00 00 14 */	b .L_8038C300
.L_8038C2F0:
/* 8038C2F0 00389230  2C 00 00 02 */	cmpwi r0, 2
/* 8038C2F4 00389234  40 82 00 0C */	bne .L_8038C300
/* 8038C2F8 00389238  38 00 00 02 */	li r0, 2
/* 8038C2FC 0038923C  90 01 00 18 */	stw r0, 0x18(r1)
.L_8038C300:
/* 8038C300 00389240  80 63 03 34 */	lwz r3, 0x334(r3)
/* 8038C304 00389244  38 81 00 08 */	addi r4, r1, 8
/* 8038C308 00389248  81 83 00 00 */	lwz r12, 0(r3)
/* 8038C30C 0038924C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038C310 00389250  7D 89 03 A6 */	mtctr r12
/* 8038C314 00389254  4E 80 04 21 */	bctrl 
.L_8038C318:
/* 8038C318 00389258  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8038C31C 0038925C  7C 08 03 A6 */	mtlr r0
/* 8038C320 00389260  38 21 00 20 */	addi r1, r1, 0x20
/* 8038C324 00389264  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game11ShijimiChou3ObjFv

.fn fadeAppearEffect__Q34Game11ShijimiChou3ObjFv, global
/* 8038C328 00389268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038C32C 0038926C  7C 08 02 A6 */	mflr r0
/* 8038C330 00389270  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038C334 00389274  80 63 03 34 */	lwz r3, 0x334(r3)
/* 8038C338 00389278  81 83 00 00 */	lwz r12, 0(r3)
/* 8038C33C 0038927C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8038C340 00389280  7D 89 03 A6 */	mtctr r12
/* 8038C344 00389284  4E 80 04 21 */	bctrl 
/* 8038C348 00389288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038C34C 0038928C  7C 08 03 A6 */	mtlr r0
/* 8038C350 00389290  38 21 00 10 */	addi r1, r1, 0x10
/* 8038C354 00389294  4E 80 00 20 */	blr 
.endfn fadeAppearEffect__Q34Game11ShijimiChou3ObjFv

.fn getName__Q23efx7ArgChouFv, weak
/* 8038C358 00389298  38 62 0C 1C */	addi r3, r2, lbl_8051EF7C@sda21
/* 8038C35C 0038929C  4E 80 00 20 */	blr 
.endfn getName__Q23efx7ArgChouFv

.fn setInitialSetting__Q34Game11ShijimiChou3ObjFPQ24Game21EnemyInitialParamBase, weak
/* 8038C360 003892A0  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game11ShijimiChou3ObjFPQ24Game21EnemyInitialParamBase

.fn ignoreAtari__Q34Game11ShijimiChou3ObjFPQ24Game8Creature, weak
/* 8038C364 003892A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038C368 003892A8  7C 08 02 A6 */	mflr r0
/* 8038C36C 003892AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038C370 003892B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038C374 003892B4  7C 9F 23 78 */	mr r31, r4
/* 8038C378 003892B8  4B D7 B0 7D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8038C37C 003892BC  2C 03 00 05 */	cmpwi r3, 5
/* 8038C380 003892C0  40 82 00 0C */	bne .L_8038C38C
/* 8038C384 003892C4  38 60 00 00 */	li r3, 0
/* 8038C388 003892C8  48 00 00 50 */	b .L_8038C3D8
.L_8038C38C:
/* 8038C38C 003892CC  28 1F 00 00 */	cmplwi r31, 0
/* 8038C390 003892D0  41 82 00 20 */	beq .L_8038C3B0
/* 8038C394 003892D4  7F E3 FB 78 */	mr r3, r31
/* 8038C398 003892D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038C39C 003892DC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8038C3A0 003892E0  7D 89 03 A6 */	mtctr r12
/* 8038C3A4 003892E4  4E 80 04 21 */	bctrl 
/* 8038C3A8 003892E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038C3AC 003892EC  40 82 00 20 */	bne .L_8038C3CC
.L_8038C3B0:
/* 8038C3B0 003892F0  7F E3 FB 78 */	mr r3, r31
/* 8038C3B4 003892F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038C3B8 003892F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8038C3BC 003892FC  7D 89 03 A6 */	mtctr r12
/* 8038C3C0 00389300  4E 80 04 21 */	bctrl 
/* 8038C3C4 00389304  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038C3C8 00389308  41 82 00 0C */	beq .L_8038C3D4
.L_8038C3CC:
/* 8038C3CC 0038930C  38 60 00 01 */	li r3, 1
/* 8038C3D0 00389310  48 00 00 08 */	b .L_8038C3D8
.L_8038C3D4:
/* 8038C3D4 00389314  38 60 00 00 */	li r3, 0
.L_8038C3D8:
/* 8038C3D8 00389318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038C3DC 0038931C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038C3E0 00389320  7C 08 03 A6 */	mtlr r0
/* 8038C3E4 00389324  38 21 00 10 */	addi r1, r1, 0x10
/* 8038C3E8 00389328  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q34Game11ShijimiChou3ObjFPQ24Game8Creature

.fn pressCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart, weak
/* 8038C3EC 0038932C  38 60 00 00 */	li r3, 0
/* 8038C3F0 00389330  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart, weak
/* 8038C3F4 00389334  38 60 00 00 */	li r3, 0
/* 8038C3F8 00389338  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8CreaturefP8CollPart

.fn earthquakeCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8Creaturef, weak
/* 8038C3FC 0038933C  38 60 00 00 */	li r3, 0
/* 8038C400 00389340  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game11ShijimiChou3ObjFPQ24Game8Creaturef

.fn getEnemyTypeID__Q34Game11ShijimiChou3ObjFv, weak
/* 8038C404 00389344  38 60 00 4D */	li r3, 0x4d
/* 8038C408 00389348  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game11ShijimiChou3ObjFv

.fn __sinit_shijimiChou_cpp, local
/* 8038C40C 0038934C  4E 80 00 20 */	blr 
.endfn __sinit_shijimiChou_cpp

.fn "@828@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 8038C410 00389350  39 60 00 0C */	li r11, 0xc
/* 8038C414 00389354  7D 63 58 2E */	lwzx r11, r3, r11
/* 8038C418 00389358  7C 63 5A 14 */	add r3, r3, r11
/* 8038C41C 0038935C  38 63 FC C4 */	addi r3, r3, -828
/* 8038C420 00389360  4B D7 A4 FC */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@828@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@828@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8038C424 00389364  39 60 00 0C */	li r11, 0xc
/* 8038C428 00389368  7D 63 58 2E */	lwzx r11, r3, r11
/* 8038C42C 0038936C  7C 63 5A 14 */	add r3, r3, r11
/* 8038C430 00389370  38 63 FC C4 */	addi r3, r3, -828
/* 8038C434 00389374  4B D7 A2 74 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@828@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@828@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8038C438 00389378  39 60 00 0C */	li r11, 0xc
/* 8038C43C 0038937C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8038C440 00389380  7C 63 5A 14 */	add r3, r3, r11
/* 8038C444 00389384  38 63 FC C4 */	addi r3, r3, -828
/* 8038C448 00389388  4B D7 A2 80 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@828@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@828@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8038C44C 0038938C  39 60 00 0C */	li r11, 0xc
/* 8038C450 00389390  7D 63 58 2E */	lwzx r11, r3, r11
/* 8038C454 00389394  7C 63 5A 14 */	add r3, r3, r11
/* 8038C458 00389398  38 63 FC C4 */	addi r3, r3, -828
/* 8038C45C 0038939C  4B D7 A6 1C */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@828@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@828@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8038C460 003893A0  39 60 00 0C */	li r11, 0xc
/* 8038C464 003893A4  7D 63 58 2E */	lwzx r11, r3, r11
/* 8038C468 003893A8  7C 63 5A 14 */	add r3, r3, r11
/* 8038C46C 003893AC  38 63 FC C4 */	addi r3, r3, -828
/* 8038C470 003893B0  4B D7 A5 DC */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@828@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@828@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 8038C474 003893B4  39 60 00 0C */	li r11, 0xc
/* 8038C478 003893B8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8038C47C 003893BC  7C 63 5A 14 */	add r3, r3, r11
/* 8038C480 003893C0  38 63 FC C4 */	addi r3, r3, -828
/* 8038C484 003893C4  4B D7 A2 1C */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@828@12@viewGetShape__Q24Game9EnemyBaseFv"
