.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>"
"__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>":
	.4byte 0
	.4byte 0
	.4byte "first__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
	.4byte "next__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
	.4byte "isDone__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
	.4byte "__ml__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
.global __vt__Q34Game12KumaKochappy3Obj
__vt__Q34Game12KumaKochappy3Obj:
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
	.4byte onInit__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game12KumaKochappy3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game12KumaKochappy3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game12KumaKochappy3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game12KumaKochappy3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game12KumaKochappy3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game12KumaKochappy3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game12KumaKochappy3ObjFv
	.4byte initWalkSmokeEffect__Q34Game12KumaKochappy3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game12KumaKochappy3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game12KumaKochappy3ObjFv
	.4byte getMouthSlots__Q34Game12KumaKochappy3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte startCarcassMotion__Q34Game12KumaKochappy3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game12KumaKochappy3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game12KumaKochappy3ObjFPQ34Game12KumaKochappy3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@744@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051CEC0
lbl_8051CEC0:
	.4byte 0x61676F00
.global lbl_8051CEC4
lbl_8051CEC4:
	.4byte 0x40A00000
.global lbl_8051CEC8
lbl_8051CEC8:
	.4byte 0x00000000
.global lbl_8051CECC
lbl_8051CECC:
	.float 1.0
.global lbl_8051CED0
lbl_8051CED0:
	.4byte 0x42480000
.global lbl_8051CED4
lbl_8051CED4:
	.4byte 0x41A00000
.global lbl_8051CED8
lbl_8051CED8:
	.4byte 0x41200000
.global lbl_8051CEDC
lbl_8051CEDC:
	.4byte 0x6B616D75
	.4byte 0x00000000
.global lbl_8051CEE4
lbl_8051CEE4:
	.4byte 0x41700000
.global lbl_8051CEE8
lbl_8051CEE8:
	.4byte 0x6173694C
	.4byte 0x00000000
.global lbl_8051CEF0
lbl_8051CEF0:
	.4byte 0x40800000
.global lbl_8051CEF4
lbl_8051CEF4:
	.4byte 0x61736952
	.4byte 0x00000000
.global lbl_8051CEFC
lbl_8051CEFC:
	.4byte 0x47000000
.global lbl_8051CF00
lbl_8051CF00:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051CF08
lbl_8051CF08:
	.4byte 0x3ECCCCCD
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12KumaKochappy3ObjFv
__ct__Q34Game12KumaKochappy3ObjFv:
/* 802E7050 002E3F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7054 002E3F94  7C 08 02 A6 */	mflr r0
/* 802E7058 002E3F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E705C 002E3F9C  7C 80 07 35 */	extsh. r0, r4
/* 802E7060 002E3FA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7064 002E3FA4  7C 7F 1B 78 */	mr r31, r3
/* 802E7068 002E3FA8  93 C1 00 08 */	stw r30, 8(r1)
/* 802E706C 002E3FAC  41 82 00 24 */	beq .L_802E7090
/* 802E7070 002E3FB0  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 802E7074 002E3FB4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802E7078 002E3FB8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802E707C 002E3FBC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802E7080 002E3FC0  38 00 00 00 */	li r0, 0
/* 802E7084 002E3FC4  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802E7088 002E3FC8  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 802E708C 002E3FCC  90 1F 02 F0 */	stw r0, 0x2f0(r31)
.L_802E7090:
/* 802E7090 002E3FD0  7F E3 FB 78 */	mr r3, r31
/* 802E7094 002E3FD4  38 80 00 00 */	li r4, 0
/* 802E7098 002E3FD8  4B E1 A3 09 */	bl __ct__Q24Game9EnemyBaseFv
/* 802E709C 002E3FDC  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy3Obj@ha
/* 802E70A0 002E3FE0  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 802E70A4 002E3FE4  38 A3 42 18 */	addi r5, r3, __vt__Q34Game12KumaKochappy3Obj@l
/* 802E70A8 002E3FE8  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E70AC 002E3FEC  90 BF 00 00 */	stw r5, 0(r31)
/* 802E70B0 002E3FF0  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802E70B4 002E3FF4  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802E70B8 002E3FF8  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802E70BC 002E3FFC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802E70C0 002E4000  90 A4 00 00 */	stw r5, 0(r4)
/* 802E70C4 002E4004  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802E70C8 002E4008  7C 04 00 50 */	subf r0, r4, r0
/* 802E70CC 002E400C  90 04 00 0C */	stw r0, 0xc(r4)
/* 802E70D0 002E4010  4B E4 32 85 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 802E70D4 002E4014  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 802E70D8 002E4018  4B E5 14 71 */	bl __ct__10MouthSlotsFv
/* 802E70DC 002E401C  38 60 00 2C */	li r3, 0x2c
/* 802E70E0 002E4020  4B D3 CD C5 */	bl __nw__FUl
/* 802E70E4 002E4024  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E70E8 002E4028  41 82 00 44 */	beq .L_802E712C
/* 802E70EC 002E402C  4B E4 08 89 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802E70F0 002E4030  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy14ProperAnimator@ha
/* 802E70F4 002E4034  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802E70F8 002E4038  38 03 40 E8 */	addi r0, r3, __vt__Q34Game12KumaKochappy14ProperAnimator@l
/* 802E70FC 002E403C  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802E7100 002E4040  90 1E 00 00 */	stw r0, 0(r30)
/* 802E7104 002E4044  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802E7108 002E4048  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802E710C 002E404C  38 00 00 00 */	li r0, 0
/* 802E7110 002E4050  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802E7114 002E4054  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802E7118 002E4058  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802E711C 002E405C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802E7120 002E4060  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802E7124 002E4064  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802E7128 002E4068  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802E712C:
/* 802E712C 002E406C  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802E7130 002E4070  38 60 00 1C */	li r3, 0x1c
/* 802E7134 002E4074  4B D3 CD 71 */	bl __nw__FUl
/* 802E7138 002E4078  7C 64 1B 79 */	or. r4, r3, r3
/* 802E713C 002E407C  41 82 00 24 */	beq .L_802E7160
/* 802E7140 002E4080  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802E7144 002E4084  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy3FSM@ha
/* 802E7148 002E4088  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802E714C 002E408C  38 A0 FF FF */	li r5, -1
/* 802E7150 002E4090  90 04 00 00 */	stw r0, 0(r4)
/* 802E7154 002E4094  38 03 40 C0 */	addi r0, r3, __vt__Q34Game12KumaKochappy3FSM@l
/* 802E7158 002E4098  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802E715C 002E409C  90 04 00 00 */	stw r0, 0(r4)
.L_802E7160:
/* 802E7160 002E40A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E7164 002E40A4  7F E3 FB 78 */	mr r3, r31
/* 802E7168 002E40A8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802E716C 002E40AC  7D 89 03 A6 */	mtctr r12
/* 802E7170 002E40B0  4E 80 04 21 */	bctrl 
/* 802E7174 002E40B4  7F E3 FB 78 */	mr r3, r31
/* 802E7178 002E40B8  48 00 0A 49 */	bl createChappyRelation__Q34Game12KumaKochappy3ObjFv
/* 802E717C 002E40BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7180 002E40C0  7F E3 FB 78 */	mr r3, r31
/* 802E7184 002E40C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7188 002E40C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E718C 002E40CC  7C 08 03 A6 */	mtlr r0
/* 802E7190 002E40D0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7194 002E40D4  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game12KumaKochappy3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game12KumaKochappy3ObjFPQ24Game21EnemyInitialParamBase:
/* 802E7198 002E40D8  4E 80 00 20 */	blr 

.global onInit__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureInitArg:
/* 802E719C 002E40DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E71A0 002E40E0  7C 08 02 A6 */	mflr r0
/* 802E71A4 002E40E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E71A8 002E40E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E71AC 002E40EC  7C 7F 1B 78 */	mr r31, r3
/* 802E71B0 002E40F0  4B E1 A8 A9 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802E71B4 002E40F4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E71B8 002E40F8  7F E3 FB 78 */	mr r3, r31
/* 802E71BC 002E40FC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802E71C0 002E4100  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E71C4 002E4104  48 00 04 35 */	bl setNearestParent__Q34Game12KumaKochappy3ObjFv
/* 802E71C8 002E4108  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802E71CC 002E410C  7F E4 FB 78 */	mr r4, r31
/* 802E71D0 002E4110  38 A0 00 02 */	li r5, 2
/* 802E71D4 002E4114  38 C0 00 00 */	li r6, 0
/* 802E71D8 002E4118  81 83 00 00 */	lwz r12, 0(r3)
/* 802E71DC 002E411C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802E71E0 002E4120  7D 89 03 A6 */	mtctr r12
/* 802E71E4 002E4124  4E 80 04 21 */	bctrl 
/* 802E71E8 002E4128  7F E3 FB 78 */	mr r3, r31
/* 802E71EC 002E412C  48 00 03 95 */	bl resetZukanAnimationFrame__Q34Game12KumaKochappy3ObjFv
/* 802E71F0 002E4130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E71F4 002E4134  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E71F8 002E4138  7C 08 03 A6 */	mtlr r0
/* 802E71FC 002E413C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7200 002E4140  4E 80 00 20 */	blr 

.global onKill__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureKillArg:
/* 802E7204 002E4144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7208 002E4148  7C 08 02 A6 */	mflr r0
/* 802E720C 002E414C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7210 002E4150  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7214 002E4154  7C 9F 23 78 */	mr r31, r4
/* 802E7218 002E4158  93 C1 00 08 */	stw r30, 8(r1)
/* 802E721C 002E415C  7C 7E 1B 78 */	mr r30, r3
/* 802E7220 002E4160  48 00 0A 11 */	bl releaseParent__Q34Game12KumaKochappy3ObjFv
/* 802E7224 002E4164  7F C3 F3 78 */	mr r3, r30
/* 802E7228 002E4168  7F E4 FB 78 */	mr r4, r31
/* 802E722C 002E416C  4B E1 AC BD */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802E7230 002E4170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7234 002E4174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7238 002E4178  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E723C 002E417C  7C 08 03 A6 */	mtlr r0
/* 802E7240 002E4180  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7244 002E4184  4E 80 00 20 */	blr 

.global doUpdate__Q34Game12KumaKochappy3ObjFv
doUpdate__Q34Game12KumaKochappy3ObjFv:
/* 802E7248 002E4188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E724C 002E418C  7C 08 02 A6 */	mflr r0
/* 802E7250 002E4190  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7254 002E4194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7258 002E4198  7C 7F 1B 78 */	mr r31, r3
/* 802E725C 002E419C  48 00 09 11 */	bl updateHomePosition__Q34Game12KumaKochappy3ObjFv
/* 802E7260 002E41A0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802E7264 002E41A4  7F E4 FB 78 */	mr r4, r31
/* 802E7268 002E41A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E726C 002E41AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7270 002E41B0  7D 89 03 A6 */	mtctr r12
/* 802E7274 002E41B4  4E 80 04 21 */	bctrl 
/* 802E7278 002E41B8  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 802E727C 002E41BC  4B E5 13 B1 */	bl update__10MouthSlotsFv
/* 802E7280 002E41C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7284 002E41C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7288 002E41C8  7C 08 03 A6 */	mtlr r0
/* 802E728C 002E41CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7290 002E41D0  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game12KumaKochappy3ObjFR8Graphics
doDirectDraw__Q34Game12KumaKochappy3ObjFR8Graphics:
/* 802E7294 002E41D4  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game12KumaKochappy3ObjFR8Graphics
doDebugDraw__Q34Game12KumaKochappy3ObjFR8Graphics:
/* 802E7298 002E41D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E729C 002E41DC  7C 08 02 A6 */	mflr r0
/* 802E72A0 002E41E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E72A4 002E41E4  4B E1 EB C9 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802E72A8 002E41E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E72AC 002E41EC  7C 08 03 A6 */	mtlr r0
/* 802E72B0 002E41F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E72B4 002E41F4  4E 80 00 20 */	blr 

.global setFSM__Q34Game12KumaKochappy3ObjFPQ34Game12KumaKochappy3FSM
setFSM__Q34Game12KumaKochappy3ObjFPQ34Game12KumaKochappy3FSM:
/* 802E72B8 002E41F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E72BC 002E41FC  7C 08 02 A6 */	mflr r0
/* 802E72C0 002E4200  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E72C4 002E4204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E72C8 002E4208  7C 7F 1B 78 */	mr r31, r3
/* 802E72CC 002E420C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802E72D0 002E4210  7F E4 FB 78 */	mr r4, r31
/* 802E72D4 002E4214  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802E72D8 002E4218  81 83 00 00 */	lwz r12, 0(r3)
/* 802E72DC 002E421C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E72E0 002E4220  7D 89 03 A6 */	mtctr r12
/* 802E72E4 002E4224  4E 80 04 21 */	bctrl 
/* 802E72E8 002E4228  38 00 00 00 */	li r0, 0
/* 802E72EC 002E422C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802E72F0 002E4230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E72F4 002E4234  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E72F8 002E4238  7C 08 03 A6 */	mtlr r0
/* 802E72FC 002E423C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7300 002E4240  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game12KumaKochappy3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game12KumaKochappy3ObjFRQ24Game11ShadowParam:
/* 802E7304 002E4244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7308 002E4248  7C 08 02 A6 */	mflr r0
/* 802E730C 002E424C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7310 002E4250  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7314 002E4254  7C 9F 23 78 */	mr r31, r4
/* 802E7318 002E4258  38 82 EB 60 */	addi r4, r2, lbl_8051CEC0@sda21
/* 802E731C 002E425C  93 C1 00 08 */	stw r30, 8(r1)
/* 802E7320 002E4260  7C 7E 1B 78 */	mr r30, r3
/* 802E7324 002E4264  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802E7328 002E4268  48 15 7C BD */	bl getJoint__Q28SysShape5ModelFPc
/* 802E732C 002E426C  48 14 25 75 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E7330 002E4270  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802E7334 002E4274  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802E7338 002E4278  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802E733C 002E427C  C0 62 EB 64 */	lfs f3, lbl_8051CEC4@sda21(r2)
/* 802E7340 002E4280  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802E7344 002E4284  C0 22 EB 68 */	lfs f1, lbl_8051CEC8@sda21(r2)
/* 802E7348 002E4288  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802E734C 002E428C  C0 02 EB 6C */	lfs f0, lbl_8051CECC@sda21(r2)
/* 802E7350 002E4290  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802E7354 002E4294  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 802E7358 002E4298  EC 43 10 2A */	fadds f2, f3, f2
/* 802E735C 002E429C  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802E7360 002E42A0  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802E7364 002E42A4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802E7368 002E42A8  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802E736C 002E42AC  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802E7370 002E42B0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802E7374 002E42B4  41 82 00 10 */	beq .L_802E7384
/* 802E7378 002E42B8  C0 02 EB 70 */	lfs f0, lbl_8051CED0@sda21(r2)
/* 802E737C 002E42BC  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802E7380 002E42C0  48 00 00 0C */	b .L_802E738C
.L_802E7384:
/* 802E7384 002E42C4  C0 02 EB 74 */	lfs f0, lbl_8051CED4@sda21(r2)
/* 802E7388 002E42C8  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802E738C:
/* 802E738C 002E42CC  C0 02 EB 78 */	lfs f0, lbl_8051CED8@sda21(r2)
/* 802E7390 002E42D0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802E7394 002E42D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7398 002E42D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E739C 002E42DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E73A0 002E42E0  7C 08 03 A6 */	mtlr r0
/* 802E73A4 002E42E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E73A8 002E42E8  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart:
/* 802E73AC 002E42EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E73B0 002E42F0  7C 08 02 A6 */	mflr r0
/* 802E73B4 002E42F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E73B8 002E42F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E73BC 002E42FC  7C 7F 1B 78 */	mr r31, r3
/* 802E73C0 002E4300  81 83 00 00 */	lwz r12, 0(r3)
/* 802E73C4 002E4304  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802E73C8 002E4308  7D 89 03 A6 */	mtctr r12
/* 802E73CC 002E430C  4E 80 04 21 */	bctrl 
/* 802E73D0 002E4310  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E73D4 002E4314  41 82 00 48 */	beq .L_802E741C
/* 802E73D8 002E4318  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E73DC 002E431C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802E73E0 002E4320  40 82 00 3C */	bne .L_802E741C
/* 802E73E4 002E4324  7F E3 FB 78 */	mr r3, r31
/* 802E73E8 002E4328  4B E2 00 0D */	bl getStateID__Q24Game9EnemyBaseFv
/* 802E73EC 002E432C  2C 03 00 01 */	cmpwi r3, 1
/* 802E73F0 002E4330  40 81 00 2C */	ble .L_802E741C
/* 802E73F4 002E4334  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802E73F8 002E4338  7F E4 FB 78 */	mr r4, r31
/* 802E73FC 002E433C  38 A0 00 01 */	li r5, 1
/* 802E7400 002E4340  38 C0 00 00 */	li r6, 0
/* 802E7404 002E4344  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7408 002E4348  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E740C 002E434C  7D 89 03 A6 */	mtctr r12
/* 802E7410 002E4350  4E 80 04 21 */	bctrl 
/* 802E7414 002E4354  38 60 00 01 */	li r3, 1
/* 802E7418 002E4358  48 00 00 08 */	b .L_802E7420
.L_802E741C:
/* 802E741C 002E435C  38 60 00 00 */	li r3, 0
.L_802E7420:
/* 802E7420 002E4360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7424 002E4364  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7428 002E4368  7C 08 03 A6 */	mtlr r0
/* 802E742C 002E436C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7430 002E4370  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart:
/* 802E7434 002E4374  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7438 002E4378  7C 08 02 A6 */	mflr r0
/* 802E743C 002E437C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7440 002E4380  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7444 002E4384  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 802E7448 002E4388  7D 89 03 A6 */	mtctr r12
/* 802E744C 002E438C  4E 80 04 21 */	bctrl 
/* 802E7450 002E4390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7454 002E4394  7C 08 03 A6 */	mtlr r0
/* 802E7458 002E4398  38 21 00 10 */	addi r1, r1, 0x10
/* 802E745C 002E439C  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game12KumaKochappy3ObjFv
startCarcassMotion__Q34Game12KumaKochappy3ObjFv:
/* 802E7460 002E43A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7464 002E43A4  7C 08 02 A6 */	mflr r0
/* 802E7468 002E43A8  38 80 00 05 */	li r4, 5
/* 802E746C 002E43AC  38 A0 00 00 */	li r5, 0
/* 802E7470 002E43B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7474 002E43B4  4B E1 DB 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E7478 002E43B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E747C 002E43BC  7C 08 03 A6 */	mtlr r0
/* 802E7480 002E43C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7484 002E43C4  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game12KumaKochappy3ObjFv
initMouthSlots__Q34Game12KumaKochappy3ObjFv:
/* 802E7488 002E43C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E748C 002E43CC  7C 08 02 A6 */	mflr r0
/* 802E7490 002E43D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E7494 002E43D4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802E7498 002E43D8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802E749C 002E43DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E74A0 002E43E0  93 C1 00 08 */	stw r30, 8(r1)
/* 802E74A4 002E43E4  7C 7E 1B 78 */	mr r30, r3
/* 802E74A8 002E43E8  38 80 00 01 */	li r4, 1
/* 802E74AC 002E43EC  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802E74B0 002E43F0  4B E5 10 A9 */	bl alloc__10MouthSlotsFi
/* 802E74B4 002E43F4  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802E74B8 002E43F8  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802E74BC 002E43FC  38 80 00 00 */	li r4, 0
/* 802E74C0 002E4400  38 C2 EB 7C */	addi r6, r2, lbl_8051CEDC@sda21
/* 802E74C4 002E4404  4B E5 11 CD */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802E74C8 002E4408  C3 E2 EB 84 */	lfs f31, lbl_8051CEE4@sda21(r2)
/* 802E74CC 002E440C  3B E0 00 00 */	li r31, 0
/* 802E74D0 002E4410  48 00 00 18 */	b .L_802E74E8
.L_802E74D4:
/* 802E74D4 002E4414  7F E4 FB 78 */	mr r4, r31
/* 802E74D8 002E4418  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 802E74DC 002E441C  4B E5 12 9D */	bl getSlot__10MouthSlotsFi
/* 802E74E0 002E4420  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 802E74E4 002E4424  3B FF 00 01 */	addi r31, r31, 1
.L_802E74E8:
/* 802E74E8 002E4428  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 802E74EC 002E442C  7C 1F 00 00 */	cmpw r31, r0
/* 802E74F0 002E4430  41 80 FF E4 */	blt .L_802E74D4
/* 802E74F4 002E4434  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802E74F8 002E4438  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E74FC 002E443C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802E7500 002E4440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7504 002E4444  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E7508 002E4448  7C 08 03 A6 */	mtlr r0
/* 802E750C 002E444C  38 21 00 20 */	addi r1, r1, 0x20
/* 802E7510 002E4450  4E 80 00 20 */	blr 

.global initWalkSmokeEffect__Q34Game12KumaKochappy3ObjFv
initWalkSmokeEffect__Q34Game12KumaKochappy3ObjFv:
/* 802E7514 002E4454  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7518 002E4458  7C 08 02 A6 */	mflr r0
/* 802E751C 002E445C  38 80 00 02 */	li r4, 2
/* 802E7520 002E4460  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7524 002E4464  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7528 002E4468  7C 7F 1B 78 */	mr r31, r3
/* 802E752C 002E446C  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E7530 002E4470  4B E4 2E 35 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 802E7534 002E4474  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802E7538 002E4478  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E753C 002E447C  C0 22 EB 90 */	lfs f1, lbl_8051CEF0@sda21(r2)
/* 802E7540 002E4480  38 80 00 00 */	li r4, 0
/* 802E7544 002E4484  38 C2 EB 88 */	addi r6, r2, lbl_8051CEE8@sda21
/* 802E7548 002E4488  4B E4 30 99 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802E754C 002E448C  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802E7550 002E4490  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802E7554 002E4494  C0 22 EB 90 */	lfs f1, lbl_8051CEF0@sda21(r2)
/* 802E7558 002E4498  38 80 00 01 */	li r4, 1
/* 802E755C 002E449C  38 C2 EB 94 */	addi r6, r2, lbl_8051CEF4@sda21
/* 802E7560 002E44A0  4B E4 30 81 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802E7564 002E44A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7568 002E44A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E756C 002E44AC  7C 08 03 A6 */	mtlr r0
/* 802E7570 002E44B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7574 002E44B4  4E 80 00 20 */	blr 

.global getWalkSmokeEffectMgr__Q34Game12KumaKochappy3ObjFv
getWalkSmokeEffectMgr__Q34Game12KumaKochappy3ObjFv:
/* 802E7578 002E44B8  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 802E757C 002E44BC  4E 80 00 20 */	blr 

.global resetZukanAnimationFrame__Q34Game12KumaKochappy3ObjFv
resetZukanAnimationFrame__Q34Game12KumaKochappy3ObjFv:
/* 802E7580 002E44C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E7584 002E44C4  7C 08 02 A6 */	mflr r0
/* 802E7588 002E44C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E758C 002E44CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802E7590 002E44D0  7C 7F 1B 78 */	mr r31, r3
/* 802E7594 002E44D4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802E7598 002E44D8  28 04 00 00 */	cmplwi r4, 0
/* 802E759C 002E44DC  41 82 00 48 */	beq .L_802E75E4
/* 802E75A0 002E44E0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802E75A4 002E44E4  2C 00 00 04 */	cmpwi r0, 4
/* 802E75A8 002E44E8  40 82 00 3C */	bne .L_802E75E4
/* 802E75AC 002E44EC  4B DE 1F F5 */	bl rand
/* 802E75B0 002E44F0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802E75B4 002E44F4  3C 00 43 30 */	lis r0, 0x4330
/* 802E75B8 002E44F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 802E75BC 002E44FC  7F E3 FB 78 */	mr r3, r31
/* 802E75C0 002E4500  C8 62 EB A0 */	lfd f3, lbl_8051CF00@sda21(r2)
/* 802E75C4 002E4504  90 01 00 08 */	stw r0, 8(r1)
/* 802E75C8 002E4508  C0 22 EB 70 */	lfs f1, lbl_8051CED0@sda21(r2)
/* 802E75CC 002E450C  C8 41 00 08 */	lfd f2, 8(r1)
/* 802E75D0 002E4510  C0 02 EB 9C */	lfs f0, lbl_8051CEFC@sda21(r2)
/* 802E75D4 002E4514  EC 42 18 28 */	fsubs f2, f2, f3
/* 802E75D8 002E4518  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802E75DC 002E451C  EC 21 00 24 */	fdivs f1, f1, f0
/* 802E75E0 002E4520  4B E1 DC 49 */	bl setMotionFrame__Q24Game9EnemyBaseFf
.L_802E75E4:
/* 802E75E4 002E4524  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E75E8 002E4528  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802E75EC 002E452C  7C 08 03 A6 */	mtlr r0
/* 802E75F0 002E4530  38 21 00 20 */	addi r1, r1, 0x20
/* 802E75F4 002E4534  4E 80 00 20 */	blr 

.global setNearestParent__Q34Game12KumaKochappy3ObjFv
setNearestParent__Q34Game12KumaKochappy3ObjFv:
/* 802E75F8 002E4538  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 802E75FC 002E453C  7C 08 02 A6 */	mflr r0
/* 802E7600 002E4540  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 802E7604 002E4544  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 802E7608 002E4548  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 802E760C 002E454C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 802E7610 002E4550  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 802E7614 002E4554  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 802E7618 002E4558  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 802E761C 002E455C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802E7620 002E4560  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802E7624 002E4564  93 A1 00 64 */	stw r29, 0x64(r1)
/* 802E7628 002E4568  7C 7E 1B 78 */	mr r30, r3
/* 802E762C 002E456C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802E7630 002E4570  3B E0 00 00 */	li r31, 0
/* 802E7634 002E4574  38 80 00 23 */	li r4, 0x23
/* 802E7638 002E4578  4B E2 66 6D */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802E763C 002E457C  28 03 00 00 */	cmplwi r3, 0
/* 802E7640 002E4580  41 82 02 F4 */	beq .L_802E7934
/* 802E7644 002E4584  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 802E7648 002E4588  C0 04 04 4C */	lfs f0, 0x44c(r4)
/* 802E764C 002E458C  C3 E4 04 9C */	lfs f31, 0x49c(r4)
/* 802E7650 002E4590  EF C0 00 32 */	fmuls f30, f0, f0
/* 802E7654 002E4594  41 82 00 08 */	beq .L_802E765C
/* 802E7658 002E4598  38 63 00 04 */	addi r3, r3, 4
.L_802E765C:
/* 802E765C 002E459C  38 00 00 00 */	li r0, 0
/* 802E7660 002E45A0  3C 80 80 4D */	lis r4, "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>"@ha
/* 802E7664 002E45A4  38 84 42 00 */	addi r4, r4, "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>"@l
/* 802E7668 002E45A8  90 01 00 50 */	stw r0, 0x50(r1)
/* 802E766C 002E45AC  28 00 00 00 */	cmplwi r0, 0
/* 802E7670 002E45B0  90 81 00 44 */	stw r4, 0x44(r1)
/* 802E7674 002E45B4  90 01 00 48 */	stw r0, 0x48(r1)
/* 802E7678 002E45B8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 802E767C 002E45BC  40 82 00 1C */	bne .L_802E7698
/* 802E7680 002E45C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7684 002E45C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E7688 002E45C8  7D 89 03 A6 */	mtctr r12
/* 802E768C 002E45CC  4E 80 04 21 */	bctrl 
/* 802E7690 002E45D0  90 61 00 48 */	stw r3, 0x48(r1)
/* 802E7694 002E45D4  48 00 02 80 */	b .L_802E7914
.L_802E7698:
/* 802E7698 002E45D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E769C 002E45DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E76A0 002E45E0  7D 89 03 A6 */	mtctr r12
/* 802E76A4 002E45E4  4E 80 04 21 */	bctrl 
/* 802E76A8 002E45E8  90 61 00 48 */	stw r3, 0x48(r1)
/* 802E76AC 002E45EC  48 00 00 58 */	b .L_802E7704
.L_802E76B0:
/* 802E76B0 002E45F0  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E76B4 002E45F4  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E76B8 002E45F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E76BC 002E45FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E76C0 002E4600  7D 89 03 A6 */	mtctr r12
/* 802E76C4 002E4604  4E 80 04 21 */	bctrl 
/* 802E76C8 002E4608  7C 64 1B 78 */	mr r4, r3
/* 802E76CC 002E460C  80 61 00 50 */	lwz r3, 0x50(r1)
/* 802E76D0 002E4610  81 83 00 00 */	lwz r12, 0(r3)
/* 802E76D4 002E4614  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E76D8 002E4618  7D 89 03 A6 */	mtctr r12
/* 802E76DC 002E461C  4E 80 04 21 */	bctrl 
/* 802E76E0 002E4620  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E76E4 002E4624  40 82 02 30 */	bne .L_802E7914
/* 802E76E8 002E4628  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E76EC 002E462C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E76F0 002E4630  81 83 00 00 */	lwz r12, 0(r3)
/* 802E76F4 002E4634  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E76F8 002E4638  7D 89 03 A6 */	mtctr r12
/* 802E76FC 002E463C  4E 80 04 21 */	bctrl 
/* 802E7700 002E4640  90 61 00 48 */	stw r3, 0x48(r1)
.L_802E7704:
/* 802E7704 002E4644  81 81 00 44 */	lwz r12, 0x44(r1)
/* 802E7708 002E4648  38 61 00 44 */	addi r3, r1, 0x44
/* 802E770C 002E464C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7710 002E4650  7D 89 03 A6 */	mtctr r12
/* 802E7714 002E4654  4E 80 04 21 */	bctrl 
/* 802E7718 002E4658  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E771C 002E465C  41 82 FF 94 */	beq .L_802E76B0
/* 802E7720 002E4660  48 00 01 F4 */	b .L_802E7914
.L_802E7724:
/* 802E7724 002E4664  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E7728 002E4668  81 83 00 00 */	lwz r12, 0(r3)
/* 802E772C 002E466C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7730 002E4670  7D 89 03 A6 */	mtctr r12
/* 802E7734 002E4674  4E 80 04 21 */	bctrl 
/* 802E7738 002E4678  81 83 00 00 */	lwz r12, 0(r3)
/* 802E773C 002E467C  7C 60 1B 78 */	mr r0, r3
/* 802E7740 002E4680  7C 1D 03 78 */	mr r29, r0
/* 802E7744 002E4684  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802E7748 002E4688  7D 89 03 A6 */	mtctr r12
/* 802E774C 002E468C  4E 80 04 21 */	bctrl 
/* 802E7750 002E4690  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E7754 002E4694  41 82 01 04 */	beq .L_802E7858
/* 802E7758 002E4698  7F A4 EB 78 */	mr r4, r29
/* 802E775C 002E469C  38 61 00 20 */	addi r3, r1, 0x20
/* 802E7760 002E46A0  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E7764 002E46A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E7768 002E46A8  7D 89 03 A6 */	mtctr r12
/* 802E776C 002E46AC  4E 80 04 21 */	bctrl 
/* 802E7770 002E46B0  7F C4 F3 78 */	mr r4, r30
/* 802E7774 002E46B4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802E7778 002E46B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E777C 002E46BC  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E7780 002E46C0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802E7784 002E46C4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E7788 002E46C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E778C 002E46CC  D0 41 00 08 */	stfs f2, 8(r1)
/* 802E7790 002E46D0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802E7794 002E46D4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E7798 002E46D8  7D 89 03 A6 */	mtctr r12
/* 802E779C 002E46DC  4E 80 04 21 */	bctrl 
/* 802E77A0 002E46E0  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802E77A4 002E46E4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E77A8 002E46E8  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802E77AC 002E46EC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E77B0 002E46F0  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E77B4 002E46F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E77B8 002E46F8  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802E77BC 002E46FC  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E77C0 002E4700  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E77C4 002E4704  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802E77C8 002E4708  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802E77CC 002E470C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802E77D0 002E4710  4B D4 D9 39 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E77D4 002E4714  48 12 A3 FD */	bl roundAng__Ff
/* 802E77D8 002E4718  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E77DC 002E471C  FF A0 08 90 */	fmr f29, f1
/* 802E77E0 002E4720  7F C3 F3 78 */	mr r3, r30
/* 802E77E4 002E4724  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E77E8 002E4728  7D 89 03 A6 */	mtctr r12
/* 802E77EC 002E472C  4E 80 04 21 */	bctrl 
/* 802E77F0 002E4730  FC 40 08 90 */	fmr f2, f1
/* 802E77F4 002E4734  FC 20 E8 90 */	fmr f1, f29
/* 802E77F8 002E4738  48 12 A4 05 */	bl angDist__Fff
/* 802E77FC 002E473C  FC 00 0A 10 */	fabs f0, f1
/* 802E7800 002E4740  FC 00 00 18 */	frsp f0, f0
/* 802E7804 002E4744  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802E7808 002E4748  4C 40 13 82 */	cror 2, 0, 2
/* 802E780C 002E474C  40 82 00 4C */	bne .L_802E7858
/* 802E7810 002E4750  7F A4 EB 78 */	mr r4, r29
/* 802E7814 002E4754  38 61 00 38 */	addi r3, r1, 0x38
/* 802E7818 002E4758  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E781C 002E475C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E7820 002E4760  7D 89 03 A6 */	mtctr r12
/* 802E7824 002E4764  4E 80 04 21 */	bctrl 
/* 802E7828 002E4768  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 802E782C 002E476C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802E7830 002E4770  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 802E7834 002E4774  EC 21 00 28 */	fsubs f1, f1, f0
/* 802E7838 002E4778  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802E783C 002E477C  EC 42 00 28 */	fsubs f2, f2, f0
/* 802E7840 002E4780  EC 01 00 72 */	fmuls f0, f1, f1
/* 802E7844 002E4784  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 802E7848 002E4788  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802E784C 002E478C  40 80 00 0C */	bge .L_802E7858
/* 802E7850 002E4790  7F BF EB 78 */	mr r31, r29
/* 802E7854 002E4794  FF C0 00 90 */	fmr f30, f0
.L_802E7858:
/* 802E7858 002E4798  80 01 00 50 */	lwz r0, 0x50(r1)
/* 802E785C 002E479C  28 00 00 00 */	cmplwi r0, 0
/* 802E7860 002E47A0  40 82 00 24 */	bne .L_802E7884
/* 802E7864 002E47A4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E7868 002E47A8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E786C 002E47AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7870 002E47B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E7874 002E47B4  7D 89 03 A6 */	mtctr r12
/* 802E7878 002E47B8  4E 80 04 21 */	bctrl 
/* 802E787C 002E47BC  90 61 00 48 */	stw r3, 0x48(r1)
/* 802E7880 002E47C0  48 00 00 94 */	b .L_802E7914
.L_802E7884:
/* 802E7884 002E47C4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E7888 002E47C8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E788C 002E47CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7890 002E47D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E7894 002E47D4  7D 89 03 A6 */	mtctr r12
/* 802E7898 002E47D8  4E 80 04 21 */	bctrl 
/* 802E789C 002E47DC  90 61 00 48 */	stw r3, 0x48(r1)
/* 802E78A0 002E47E0  48 00 00 58 */	b .L_802E78F8
.L_802E78A4:
/* 802E78A4 002E47E4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E78A8 002E47E8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E78AC 002E47EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E78B0 002E47F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E78B4 002E47F4  7D 89 03 A6 */	mtctr r12
/* 802E78B8 002E47F8  4E 80 04 21 */	bctrl 
/* 802E78BC 002E47FC  7C 64 1B 78 */	mr r4, r3
/* 802E78C0 002E4800  80 61 00 50 */	lwz r3, 0x50(r1)
/* 802E78C4 002E4804  81 83 00 00 */	lwz r12, 0(r3)
/* 802E78C8 002E4808  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E78CC 002E480C  7D 89 03 A6 */	mtctr r12
/* 802E78D0 002E4810  4E 80 04 21 */	bctrl 
/* 802E78D4 002E4814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E78D8 002E4818  40 82 00 3C */	bne .L_802E7914
/* 802E78DC 002E481C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E78E0 002E4820  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E78E4 002E4824  81 83 00 00 */	lwz r12, 0(r3)
/* 802E78E8 002E4828  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E78EC 002E482C  7D 89 03 A6 */	mtctr r12
/* 802E78F0 002E4830  4E 80 04 21 */	bctrl 
/* 802E78F4 002E4834  90 61 00 48 */	stw r3, 0x48(r1)
.L_802E78F8:
/* 802E78F8 002E4838  81 81 00 44 */	lwz r12, 0x44(r1)
/* 802E78FC 002E483C  38 61 00 44 */	addi r3, r1, 0x44
/* 802E7900 002E4840  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7904 002E4844  7D 89 03 A6 */	mtctr r12
/* 802E7908 002E4848  4E 80 04 21 */	bctrl 
/* 802E790C 002E484C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E7910 002E4850  41 82 FF 94 */	beq .L_802E78A4
.L_802E7914:
/* 802E7914 002E4854  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802E7918 002E4858  81 83 00 00 */	lwz r12, 0(r3)
/* 802E791C 002E485C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E7920 002E4860  7D 89 03 A6 */	mtctr r12
/* 802E7924 002E4864  4E 80 04 21 */	bctrl 
/* 802E7928 002E4868  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802E792C 002E486C  7C 04 18 40 */	cmplw r4, r3
/* 802E7930 002E4870  40 82 FD F4 */	bne .L_802E7724
.L_802E7934:
/* 802E7934 002E4874  7F C3 F3 78 */	mr r3, r30
/* 802E7938 002E4878  7F E4 FB 78 */	mr r4, r31
/* 802E793C 002E487C  48 00 03 61 */	bl addParentEnemy__Q34Game12KumaKochappy3ObjFPQ34Game10KumaChappy3Obj
/* 802E7940 002E4880  7F E3 FB 78 */	mr r3, r31
/* 802E7944 002E4884  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 802E7948 002E4888  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 802E794C 002E488C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 802E7950 002E4890  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 802E7954 002E4894  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 802E7958 002E4898  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 802E795C 002E489C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802E7960 002E48A0  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802E7964 002E48A4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802E7968 002E48A8  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 802E796C 002E48AC  7C 08 03 A6 */	mtlr r0
/* 802E7970 002E48B0  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802E7974 002E48B4  4E 80 00 20 */	blr 

.global "isDone__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
"isDone__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv":
/* 802E7978 002E48B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E797C 002E48BC  7C 08 02 A6 */	mflr r0
/* 802E7980 002E48C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7984 002E48C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7988 002E48C8  7C 7F 1B 78 */	mr r31, r3
/* 802E798C 002E48CC  80 63 00 08 */	lwz r3, 8(r3)
/* 802E7990 002E48D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7994 002E48D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E7998 002E48D8  7D 89 03 A6 */	mtctr r12
/* 802E799C 002E48DC  4E 80 04 21 */	bctrl 
/* 802E79A0 002E48E0  80 1F 00 04 */	lwz r0, 4(r31)
/* 802E79A4 002E48E4  7C 00 18 50 */	subf r0, r0, r3
/* 802E79A8 002E48E8  7C 00 00 34 */	cntlzw r0, r0
/* 802E79AC 002E48EC  54 03 D9 7E */	srwi r3, r0, 5
/* 802E79B0 002E48F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E79B4 002E48F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E79B8 002E48F8  7C 08 03 A6 */	mtlr r0
/* 802E79BC 002E48FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E79C0 002E4900  4E 80 00 20 */	blr 

.global setTargetParentPosition__Q34Game12KumaKochappy3ObjFv
setTargetParentPosition__Q34Game12KumaKochappy3ObjFv:
/* 802E79C4 002E4904  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802E79C8 002E4908  7C 08 02 A6 */	mflr r0
/* 802E79CC 002E490C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802E79D0 002E4910  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802E79D4 002E4914  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802E79D8 002E4918  7C 7E 1B 78 */	mr r30, r3
/* 802E79DC 002E491C  4B FF FC 1D */	bl setNearestParent__Q34Game12KumaKochappy3ObjFv
/* 802E79E0 002E4920  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 802E79E4 002E4924  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802E79E8 002E4928  28 00 00 00 */	cmplwi r0, 0
/* 802E79EC 002E492C  41 82 01 64 */	beq .L_802E7B50
/* 802E79F0 002E4930  7F C3 F3 78 */	mr r3, r30
/* 802E79F4 002E4934  48 00 02 61 */	bl getParentRelation__Q34Game12KumaKochappy3ObjFv
/* 802E79F8 002E4938  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 802E79FC 002E493C  28 1F 00 00 */	cmplwi r31, 0
/* 802E7A00 002E4940  41 82 01 50 */	beq .L_802E7B50
/* 802E7A04 002E4944  38 00 00 00 */	li r0, 0
/* 802E7A08 002E4948  7F C3 F3 78 */	mr r3, r30
/* 802E7A0C 002E494C  90 01 00 08 */	stw r0, 8(r1)
/* 802E7A10 002E4950  38 81 00 08 */	addi r4, r1, 8
/* 802E7A14 002E4954  48 00 02 4D */	bl getEnemyIndex__Q34Game12KumaKochappy3ObjFRi
/* 802E7A18 002E4958  7F E4 FB 78 */	mr r4, r31
/* 802E7A1C 002E495C  38 61 00 0C */	addi r3, r1, 0xc
/* 802E7A20 002E4960  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E7A24 002E4964  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E7A28 002E4968  7D 89 03 A6 */	mtctr r12
/* 802E7A2C 002E496C  4E 80 04 21 */	bctrl 
/* 802E7A30 002E4970  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802E7A34 002E4974  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802E7A38 002E4978  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E7A3C 002E497C  EC 61 10 28 */	fsubs f3, f1, f2
/* 802E7A40 002E4980  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 802E7A44 002E4984  C0 82 EB 68 */	lfs f4, lbl_8051CEC8@sda21(r2)
/* 802E7A48 002E4988  D0 7E 02 D8 */	stfs f3, 0x2d8(r30)
/* 802E7A4C 002E498C  D0 9E 02 DC */	stfs f4, 0x2dc(r30)
/* 802E7A50 002E4990  C0 7E 01 94 */	lfs f3, 0x194(r30)
/* 802E7A54 002E4994  EC 63 08 28 */	fsubs f3, f3, f1
/* 802E7A58 002E4998  D0 7E 02 E0 */	stfs f3, 0x2e0(r30)
/* 802E7A5C 002E499C  C0 DE 02 D8 */	lfs f6, 0x2d8(r30)
/* 802E7A60 002E49A0  C0 BE 02 DC */	lfs f5, 0x2dc(r30)
/* 802E7A64 002E49A4  C0 FE 02 E0 */	lfs f7, 0x2e0(r30)
/* 802E7A68 002E49A8  EC 66 01 B2 */	fmuls f3, f6, f6
/* 802E7A6C 002E49AC  EC A5 01 72 */	fmuls f5, f5, f5
/* 802E7A70 002E49B0  EC E7 01 F2 */	fmuls f7, f7, f7
/* 802E7A74 002E49B4  EC 63 28 2A */	fadds f3, f3, f5
/* 802E7A78 002E49B8  EC 67 18 2A */	fadds f3, f7, f3
/* 802E7A7C 002E49BC  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 802E7A80 002E49C0  40 81 00 20 */	ble .L_802E7AA0
/* 802E7A84 002E49C4  EC 66 29 BA */	fmadds f3, f6, f6, f5
/* 802E7A88 002E49C8  EC A7 18 2A */	fadds f5, f7, f3
/* 802E7A8C 002E49CC  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 802E7A90 002E49D0  40 81 00 14 */	ble .L_802E7AA4
/* 802E7A94 002E49D4  FC 60 28 34 */	frsqrte f3, f5
/* 802E7A98 002E49D8  EC A3 01 72 */	fmuls f5, f3, f5
/* 802E7A9C 002E49DC  48 00 00 08 */	b .L_802E7AA4
.L_802E7AA0:
/* 802E7AA0 002E49E0  FC A0 20 90 */	fmr f5, f4
.L_802E7AA4:
/* 802E7AA4 002E49E4  C0 62 EB 68 */	lfs f3, lbl_8051CEC8@sda21(r2)
/* 802E7AA8 002E49E8  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802E7AAC 002E49EC  40 81 00 30 */	ble .L_802E7ADC
/* 802E7AB0 002E49F0  C0 82 EB 6C */	lfs f4, lbl_8051CECC@sda21(r2)
/* 802E7AB4 002E49F4  C0 7E 02 D8 */	lfs f3, 0x2d8(r30)
/* 802E7AB8 002E49F8  EC 84 28 24 */	fdivs f4, f4, f5
/* 802E7ABC 002E49FC  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E7AC0 002E4A00  D0 7E 02 D8 */	stfs f3, 0x2d8(r30)
/* 802E7AC4 002E4A04  C0 7E 02 DC */	lfs f3, 0x2dc(r30)
/* 802E7AC8 002E4A08  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E7ACC 002E4A0C  D0 7E 02 DC */	stfs f3, 0x2dc(r30)
/* 802E7AD0 002E4A10  C0 7E 02 E0 */	lfs f3, 0x2e0(r30)
/* 802E7AD4 002E4A14  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E7AD8 002E4A18  D0 7E 02 E0 */	stfs f3, 0x2e0(r30)
.L_802E7ADC:
/* 802E7ADC 002E4A1C  80 81 00 08 */	lwz r4, 8(r1)
/* 802E7AE0 002E4A20  3C 00 43 30 */	lis r0, 0x4330
/* 802E7AE4 002E4A24  90 01 00 18 */	stw r0, 0x18(r1)
/* 802E7AE8 002E4A28  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 802E7AEC 002E4A2C  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 802E7AF0 002E4A30  C8 A2 EB A0 */	lfd f5, lbl_8051CF00@sda21(r2)
/* 802E7AF4 002E4A34  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802E7AF8 002E4A38  C0 C2 EB 78 */	lfs f6, lbl_8051CED8@sda21(r2)
/* 802E7AFC 002E4A3C  C8 61 00 18 */	lfd f3, 0x18(r1)
/* 802E7B00 002E4A40  C0 82 EB 84 */	lfs f4, lbl_8051CEE4@sda21(r2)
/* 802E7B04 002E4A44  EC A3 28 28 */	fsubs f5, f3, f5
/* 802E7B08 002E4A48  C0 7E 02 D8 */	lfs f3, 0x2d8(r30)
/* 802E7B0C 002E4A4C  EC 86 21 7A */	fmadds f4, f6, f5, f4
/* 802E7B10 002E4A50  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E7B14 002E4A54  D0 7E 02 D8 */	stfs f3, 0x2d8(r30)
/* 802E7B18 002E4A58  C0 7E 02 DC */	lfs f3, 0x2dc(r30)
/* 802E7B1C 002E4A5C  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E7B20 002E4A60  D0 7E 02 DC */	stfs f3, 0x2dc(r30)
/* 802E7B24 002E4A64  C0 7E 02 E0 */	lfs f3, 0x2e0(r30)
/* 802E7B28 002E4A68  EC 63 01 32 */	fmuls f3, f3, f4
/* 802E7B2C 002E4A6C  D0 7E 02 E0 */	stfs f3, 0x2e0(r30)
/* 802E7B30 002E4A70  C0 7E 02 D8 */	lfs f3, 0x2d8(r30)
/* 802E7B34 002E4A74  EC 43 10 2A */	fadds f2, f3, f2
/* 802E7B38 002E4A78  D0 5E 02 D8 */	stfs f2, 0x2d8(r30)
/* 802E7B3C 002E4A7C  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
/* 802E7B40 002E4A80  C0 1E 02 E0 */	lfs f0, 0x2e0(r30)
/* 802E7B44 002E4A84  EC 00 08 2A */	fadds f0, f0, f1
/* 802E7B48 002E4A88  D0 1E 02 E0 */	stfs f0, 0x2e0(r30)
/* 802E7B4C 002E4A8C  48 00 00 08 */	b .L_802E7B54
.L_802E7B50:
/* 802E7B50 002E4A90  38 60 00 00 */	li r3, 0
.L_802E7B54:
/* 802E7B54 002E4A94  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802E7B58 002E4A98  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802E7B5C 002E4A9C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802E7B60 002E4AA0  7C 08 03 A6 */	mtlr r0
/* 802E7B64 002E4AA4  38 21 00 30 */	addi r1, r1, 0x30
/* 802E7B68 002E4AA8  4E 80 00 20 */	blr 

.global updateHomePosition__Q34Game12KumaKochappy3ObjFv
updateHomePosition__Q34Game12KumaKochappy3ObjFv:
/* 802E7B6C 002E4AAC  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802E7B70 002E4AB0  D0 03 01 98 */	stfs f0, 0x198(r3)
/* 802E7B74 002E4AB4  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802E7B78 002E4AB8  D0 03 01 9C */	stfs f0, 0x19c(r3)
/* 802E7B7C 002E4ABC  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802E7B80 002E4AC0  D0 03 01 A0 */	stfs f0, 0x1a0(r3)
/* 802E7B84 002E4AC4  4E 80 00 20 */	blr 

.global getSearchedTarget__Q34Game12KumaKochappy3ObjFv
getSearchedTarget__Q34Game12KumaKochappy3ObjFv:
/* 802E7B88 002E4AC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7B8C 002E4ACC  7C 08 02 A6 */	mflr r0
/* 802E7B90 002E4AD0  38 80 00 00 */	li r4, 0
/* 802E7B94 002E4AD4  38 A0 00 00 */	li r5, 0
/* 802E7B98 002E4AD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7B9C 002E4ADC  38 C0 00 00 */	li r6, 0
/* 802E7BA0 002E4AE0  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802E7BA4 002E4AE4  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802E7BA8 002E4AE8  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802E7BAC 002E4AEC  4B E2 B4 A5 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802E7BB0 002E4AF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7BB4 002E4AF4  7C 08 03 A6 */	mtlr r0
/* 802E7BB8 002E4AF8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7BBC 002E4AFC  4E 80 00 20 */	blr 

.global createChappyRelation__Q34Game12KumaKochappy3ObjFv
createChappyRelation__Q34Game12KumaKochappy3ObjFv:
/* 802E7BC0 002E4B00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7BC4 002E4B04  7C 08 02 A6 */	mflr r0
/* 802E7BC8 002E4B08  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7BCC 002E4B0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7BD0 002E4B10  93 C1 00 08 */	stw r30, 8(r1)
/* 802E7BD4 002E4B14  7C 7E 1B 78 */	mr r30, r3
/* 802E7BD8 002E4B18  38 60 00 1C */	li r3, 0x1c
/* 802E7BDC 002E4B1C  4B D3 C2 C9 */	bl __nw__FUl
/* 802E7BE0 002E4B20  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E7BE4 002E4B24  41 82 00 18 */	beq .L_802E7BFC
/* 802E7BE8 002E4B28  48 12 97 A9 */	bl __ct__5CNodeFv
/* 802E7BEC 002E4B2C  3C 60 80 4D */	lis r3, __vt__Q24Game14ChappyRelation@ha
/* 802E7BF0 002E4B30  38 03 BC 90 */	addi r0, r3, __vt__Q24Game14ChappyRelation@l
/* 802E7BF4 002E4B34  90 1F 00 00 */	stw r0, 0(r31)
/* 802E7BF8 002E4B38  93 DF 00 18 */	stw r30, 0x18(r31)
.L_802E7BFC:
/* 802E7BFC 002E4B3C  93 FE 02 E4 */	stw r31, 0x2e4(r30)
/* 802E7C00 002E4B40  38 00 00 00 */	li r0, 0
/* 802E7C04 002E4B44  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 802E7C08 002E4B48  90 03 00 10 */	stw r0, 0x10(r3)
/* 802E7C0C 002E4B4C  90 03 00 0C */	stw r0, 0xc(r3)
/* 802E7C10 002E4B50  90 03 00 08 */	stw r0, 8(r3)
/* 802E7C14 002E4B54  90 03 00 04 */	stw r0, 4(r3)
/* 802E7C18 002E4B58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7C1C 002E4B5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E7C20 002E4B60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7C24 002E4B64  7C 08 03 A6 */	mtlr r0
/* 802E7C28 002E4B68  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7C2C 002E4B6C  4E 80 00 20 */	blr 

.global releaseParent__Q34Game12KumaKochappy3ObjFv
releaseParent__Q34Game12KumaKochappy3ObjFv:
/* 802E7C30 002E4B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7C34 002E4B74  7C 08 02 A6 */	mflr r0
/* 802E7C38 002E4B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7C3C 002E4B7C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802E7C40 002E4B80  48 12 99 91 */	bl del__5CNodeFv
/* 802E7C44 002E4B84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7C48 002E4B88  7C 08 03 A6 */	mtlr r0
/* 802E7C4C 002E4B8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7C50 002E4B90  4E 80 00 20 */	blr 

.global getParentRelation__Q34Game12KumaKochappy3ObjFv
getParentRelation__Q34Game12KumaKochappy3ObjFv:
/* 802E7C54 002E4B94  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802E7C58 002E4B98  80 63 00 0C */	lwz r3, 0xc(r3)
/* 802E7C5C 002E4B9C  4E 80 00 20 */	blr 

.global getEnemyIndex__Q34Game12KumaKochappy3ObjFRi
getEnemyIndex__Q34Game12KumaKochappy3ObjFRi:
/* 802E7C60 002E4BA0  80 A3 02 E4 */	lwz r5, 0x2e4(r3)
/* 802E7C64 002E4BA4  38 C0 00 00 */	li r6, 0
/* 802E7C68 002E4BA8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 802E7C6C 002E4BAC  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 802E7C70 002E4BB0  48 00 00 1C */	b .L_802E7C8C
.L_802E7C74:
/* 802E7C74 002E4BB4  80 03 02 E4 */	lwz r0, 0x2e4(r3)
/* 802E7C78 002E4BB8  7C 05 00 40 */	cmplw r5, r0
/* 802E7C7C 002E4BBC  40 82 00 08 */	bne .L_802E7C84
/* 802E7C80 002E4BC0  90 C4 00 00 */	stw r6, 0(r4)
.L_802E7C84:
/* 802E7C84 002E4BC4  80 A5 00 04 */	lwz r5, 4(r5)
/* 802E7C88 002E4BC8  38 C6 00 01 */	addi r6, r6, 1
.L_802E7C8C:
/* 802E7C8C 002E4BCC  28 05 00 00 */	cmplwi r5, 0
/* 802E7C90 002E4BD0  40 82 FF E4 */	bne .L_802E7C74
/* 802E7C94 002E4BD4  38 60 FF FF */	li r3, -1
/* 802E7C98 002E4BD8  4E 80 00 20 */	blr 

.global addParentEnemy__Q34Game12KumaKochappy3ObjFPQ34Game10KumaChappy3Obj
addParentEnemy__Q34Game12KumaKochappy3ObjFPQ34Game10KumaChappy3Obj:
/* 802E7C9C 002E4BDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E7CA0 002E4BE0  7C 08 02 A6 */	mflr r0
/* 802E7CA4 002E4BE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E7CA8 002E4BE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802E7CAC 002E4BEC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802E7CB0 002E4BF0  7C 9E 23 79 */	or. r30, r4, r4
/* 802E7CB4 002E4BF4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802E7CB8 002E4BF8  7C 7D 1B 78 */	mr r29, r3
/* 802E7CBC 002E4BFC  41 82 00 50 */	beq .L_802E7D0C
/* 802E7CC0 002E4C00  7F C3 F3 78 */	mr r3, r30
/* 802E7CC4 002E4C04  80 9D 02 E4 */	lwz r4, 0x2e4(r29)
/* 802E7CC8 002E4C08  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E7CCC 002E4C0C  83 E4 00 0C */	lwz r31, 0xc(r4)
/* 802E7CD0 002E4C10  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802E7CD4 002E4C14  7D 89 03 A6 */	mtctr r12
/* 802E7CD8 002E4C18  4E 80 04 21 */	bctrl 
/* 802E7CDC 002E4C1C  7C 03 F8 40 */	cmplw r3, r31
/* 802E7CE0 002E4C20  41 82 00 40 */	beq .L_802E7D20
/* 802E7CE4 002E4C24  80 7D 02 E4 */	lwz r3, 0x2e4(r29)
/* 802E7CE8 002E4C28  48 12 98 E9 */	bl del__5CNodeFv
/* 802E7CEC 002E4C2C  7F C3 F3 78 */	mr r3, r30
/* 802E7CF0 002E4C30  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E7CF4 002E4C34  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802E7CF8 002E4C38  7D 89 03 A6 */	mtctr r12
/* 802E7CFC 002E4C3C  4E 80 04 21 */	bctrl 
/* 802E7D00 002E4C40  80 9D 02 E4 */	lwz r4, 0x2e4(r29)
/* 802E7D04 002E4C44  48 12 97 05 */	bl add__5CNodeFP5CNode
/* 802E7D08 002E4C48  48 00 00 18 */	b .L_802E7D20
.L_802E7D0C:
/* 802E7D0C 002E4C4C  80 7D 02 E4 */	lwz r3, 0x2e4(r29)
/* 802E7D10 002E4C50  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802E7D14 002E4C54  28 00 00 00 */	cmplwi r0, 0
/* 802E7D18 002E4C58  41 82 00 08 */	beq .L_802E7D20
/* 802E7D1C 002E4C5C  48 12 98 B5 */	bl del__5CNodeFv
.L_802E7D20:
/* 802E7D20 002E4C60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E7D24 002E4C64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802E7D28 002E4C68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802E7D2C 002E4C6C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802E7D30 002E4C70  7C 08 03 A6 */	mtlr r0
/* 802E7D34 002E4C74  38 21 00 20 */	addi r1, r1, 0x20
/* 802E7D38 002E4C78  4E 80 00 20 */	blr 

.global "__ml__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
"__ml__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv":
/* 802E7D3C 002E4C7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7D40 002E4C80  7C 08 02 A6 */	mflr r0
/* 802E7D44 002E4C84  7C 64 1B 78 */	mr r4, r3
/* 802E7D48 002E4C88  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7D4C 002E4C8C  80 63 00 08 */	lwz r3, 8(r3)
/* 802E7D50 002E4C90  80 84 00 04 */	lwz r4, 4(r4)
/* 802E7D54 002E4C94  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7D58 002E4C98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7D5C 002E4C9C  7D 89 03 A6 */	mtctr r12
/* 802E7D60 002E4CA0  4E 80 04 21 */	bctrl 
/* 802E7D64 002E4CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7D68 002E4CA8  7C 08 03 A6 */	mtlr r0
/* 802E7D6C 002E4CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7D70 002E4CB0  4E 80 00 20 */	blr 

.global "next__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
"next__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv":
/* 802E7D74 002E4CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7D78 002E4CB8  7C 08 02 A6 */	mflr r0
/* 802E7D7C 002E4CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7D80 002E4CC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7D84 002E4CC4  7C 7F 1B 78 */	mr r31, r3
/* 802E7D88 002E4CC8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802E7D8C 002E4CCC  28 00 00 00 */	cmplwi r0, 0
/* 802E7D90 002E4CD0  40 82 00 24 */	bne .L_802E7DB4
/* 802E7D94 002E4CD4  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7D98 002E4CD8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802E7D9C 002E4CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7DA0 002E4CE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E7DA4 002E4CE4  7D 89 03 A6 */	mtctr r12
/* 802E7DA8 002E4CE8  4E 80 04 21 */	bctrl 
/* 802E7DAC 002E4CEC  90 7F 00 04 */	stw r3, 4(r31)
/* 802E7DB0 002E4CF0  48 00 00 94 */	b .L_802E7E44
.L_802E7DB4:
/* 802E7DB4 002E4CF4  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7DB8 002E4CF8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802E7DBC 002E4CFC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7DC0 002E4D00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E7DC4 002E4D04  7D 89 03 A6 */	mtctr r12
/* 802E7DC8 002E4D08  4E 80 04 21 */	bctrl 
/* 802E7DCC 002E4D0C  90 7F 00 04 */	stw r3, 4(r31)
/* 802E7DD0 002E4D10  48 00 00 58 */	b .L_802E7E28
.L_802E7DD4:
/* 802E7DD4 002E4D14  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7DD8 002E4D18  80 9F 00 04 */	lwz r4, 4(r31)
/* 802E7DDC 002E4D1C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7DE0 002E4D20  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7DE4 002E4D24  7D 89 03 A6 */	mtctr r12
/* 802E7DE8 002E4D28  4E 80 04 21 */	bctrl 
/* 802E7DEC 002E4D2C  7C 64 1B 78 */	mr r4, r3
/* 802E7DF0 002E4D30  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 802E7DF4 002E4D34  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7DF8 002E4D38  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E7DFC 002E4D3C  7D 89 03 A6 */	mtctr r12
/* 802E7E00 002E4D40  4E 80 04 21 */	bctrl 
/* 802E7E04 002E4D44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E7E08 002E4D48  40 82 00 3C */	bne .L_802E7E44
/* 802E7E0C 002E4D4C  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7E10 002E4D50  80 9F 00 04 */	lwz r4, 4(r31)
/* 802E7E14 002E4D54  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7E18 002E4D58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E7E1C 002E4D5C  7D 89 03 A6 */	mtctr r12
/* 802E7E20 002E4D60  4E 80 04 21 */	bctrl 
/* 802E7E24 002E4D64  90 7F 00 04 */	stw r3, 4(r31)
.L_802E7E28:
/* 802E7E28 002E4D68  7F E3 FB 78 */	mr r3, r31
/* 802E7E2C 002E4D6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E7E30 002E4D70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7E34 002E4D74  7D 89 03 A6 */	mtctr r12
/* 802E7E38 002E4D78  4E 80 04 21 */	bctrl 
/* 802E7E3C 002E4D7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E7E40 002E4D80  41 82 FF 94 */	beq .L_802E7DD4
.L_802E7E44:
/* 802E7E44 002E4D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7E48 002E4D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7E4C 002E4D8C  7C 08 03 A6 */	mtlr r0
/* 802E7E50 002E4D90  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7E54 002E4D94  4E 80 00 20 */	blr 

.global "first__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
"first__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv":
/* 802E7E58 002E4D98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7E5C 002E4D9C  7C 08 02 A6 */	mflr r0
/* 802E7E60 002E4DA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7E64 002E4DA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7E68 002E4DA8  7C 7F 1B 78 */	mr r31, r3
/* 802E7E6C 002E4DAC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802E7E70 002E4DB0  28 00 00 00 */	cmplwi r0, 0
/* 802E7E74 002E4DB4  40 82 00 20 */	bne .L_802E7E94
/* 802E7E78 002E4DB8  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7E7C 002E4DBC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7E80 002E4DC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E7E84 002E4DC4  7D 89 03 A6 */	mtctr r12
/* 802E7E88 002E4DC8  4E 80 04 21 */	bctrl 
/* 802E7E8C 002E4DCC  90 7F 00 04 */	stw r3, 4(r31)
/* 802E7E90 002E4DD0  48 00 00 90 */	b .L_802E7F20
.L_802E7E94:
/* 802E7E94 002E4DD4  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7E98 002E4DD8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7E9C 002E4DDC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E7EA0 002E4DE0  7D 89 03 A6 */	mtctr r12
/* 802E7EA4 002E4DE4  4E 80 04 21 */	bctrl 
/* 802E7EA8 002E4DE8  90 7F 00 04 */	stw r3, 4(r31)
/* 802E7EAC 002E4DEC  48 00 00 58 */	b .L_802E7F04
.L_802E7EB0:
/* 802E7EB0 002E4DF0  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7EB4 002E4DF4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802E7EB8 002E4DF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7EBC 002E4DFC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7EC0 002E4E00  7D 89 03 A6 */	mtctr r12
/* 802E7EC4 002E4E04  4E 80 04 21 */	bctrl 
/* 802E7EC8 002E4E08  7C 64 1B 78 */	mr r4, r3
/* 802E7ECC 002E4E0C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 802E7ED0 002E4E10  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7ED4 002E4E14  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E7ED8 002E4E18  7D 89 03 A6 */	mtctr r12
/* 802E7EDC 002E4E1C  4E 80 04 21 */	bctrl 
/* 802E7EE0 002E4E20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E7EE4 002E4E24  40 82 00 3C */	bne .L_802E7F20
/* 802E7EE8 002E4E28  80 7F 00 08 */	lwz r3, 8(r31)
/* 802E7EEC 002E4E2C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802E7EF0 002E4E30  81 83 00 00 */	lwz r12, 0(r3)
/* 802E7EF4 002E4E34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E7EF8 002E4E38  7D 89 03 A6 */	mtctr r12
/* 802E7EFC 002E4E3C  4E 80 04 21 */	bctrl 
/* 802E7F00 002E4E40  90 7F 00 04 */	stw r3, 4(r31)
.L_802E7F04:
/* 802E7F04 002E4E44  7F E3 FB 78 */	mr r3, r31
/* 802E7F08 002E4E48  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E7F0C 002E4E4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E7F10 002E4E50  7D 89 03 A6 */	mtctr r12
/* 802E7F14 002E4E54  4E 80 04 21 */	bctrl 
/* 802E7F18 002E4E58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E7F1C 002E4E5C  41 82 FF 94 */	beq .L_802E7EB0
.L_802E7F20:
/* 802E7F20 002E4E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7F24 002E4E64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7F28 002E4E68  7C 08 03 A6 */	mtlr r0
/* 802E7F2C 002E4E6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E7F30 002E4E70  4E 80 00 20 */	blr 

.global getMouthSlots__Q34Game12KumaKochappy3ObjFv
getMouthSlots__Q34Game12KumaKochappy3ObjFv:
/* 802E7F34 002E4E74  38 63 02 D0 */	addi r3, r3, 0x2d0
/* 802E7F38 002E4E78  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game12KumaKochappy3ObjFv
getDownSmokeScale__Q34Game12KumaKochappy3ObjFv:
/* 802E7F3C 002E4E7C  C0 22 EB A8 */	lfs f1, lbl_8051CF08@sda21(r2)
/* 802E7F40 002E4E80  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12KumaKochappy3ObjFv
getEnemyTypeID__Q34Game12KumaKochappy3ObjFv:
/* 802E7F44 002E4E84  38 60 00 4C */	li r3, 0x4c
/* 802E7F48 002E4E88  4E 80 00 20 */	blr 
