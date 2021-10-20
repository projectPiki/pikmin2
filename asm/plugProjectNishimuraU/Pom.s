.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_80484CD8
lbl_80484CD8:
	.4byte 0x68616E61
	.4byte 0x62697261
	.4byte 0x315F7600
.global lbl_80484CE4
lbl_80484CE4:
	.4byte 0x6A6E745F
	.4byte 0x63656E74
	.4byte 0x65720000
.global lbl_80484CF0
lbl_80484CF0:
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx8TPonDead
__vt__Q23efx8TPonDead:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game3Pom3Obj
__vt__Q34Game3Pom3Obj:
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
	.4byte onInit__Q34Game3Pom3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game3Pom3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game3Pom3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game3Pom3ObjFv
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
	.4byte isLivingThing__Q34Game3Pom3ObjFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game3Pom3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game3Pom3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game3Pom3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game3Pom3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game3Pom3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game3Pom3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game3Pom3ObjFv
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
	.4byte initMouthSlots__Q34Game3Pom3ObjFv
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
	.4byte getEnemyTypeID__Q34Game3Pom3ObjFv
	.4byte getMouthSlots__Q34Game3Pom3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte startCarcassMotion__Q24Game9EnemyBaseFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game3Pom3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game3Pom3ObjFPQ34Game3Pom3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@752@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@752@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game3Pom3ObjFv
__ct__Q34Game3Pom3ObjFv:
/* 802547A4 002516E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802547A8 002516E8  7C 08 02 A6 */	mflr r0
/* 802547AC 002516EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802547B0 002516F0  7C 80 07 35 */	extsh. r0, r4
/* 802547B4 002516F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802547B8 002516F8  7C 7F 1B 78 */	mr r31, r3
/* 802547BC 002516FC  93 C1 00 08 */	stw r30, 8(r1)
/* 802547C0 00251700  41 82 00 24 */	beq lbl_802547E4
/* 802547C4 00251704  38 1F 02 F0 */	addi r0, r31, 0x2f0
/* 802547C8 00251708  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802547CC 0025170C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802547D0 00251710  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802547D4 00251714  38 00 00 00 */	li r0, 0
/* 802547D8 00251718  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 802547DC 0025171C  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 802547E0 00251720  90 1F 02 F8 */	stw r0, 0x2f8(r31)
lbl_802547E4:
/* 802547E4 00251724  7F E3 FB 78 */	mr r3, r31
/* 802547E8 00251728  38 80 00 00 */	li r4, 0
/* 802547EC 0025172C  4B EA CB B5 */	bl __ct__Q24Game9EnemyBaseFv
/* 802547F0 00251730  3C 60 80 4C */	lis r3, __vt__Q34Game3Pom3Obj@ha
/* 802547F4 00251734  38 1F 02 F0 */	addi r0, r31, 0x2f0
/* 802547F8 00251738  38 A3 1D 3C */	addi r5, r3, __vt__Q34Game3Pom3Obj@l
/* 802547FC 0025173C  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 80254800 00251740  90 BF 00 00 */	stw r5, 0(r31)
/* 80254804 00251744  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80254808 00251748  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8025480C 0025174C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80254810 00251750  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80254814 00251754  90 A4 00 00 */	stw r5, 0(r4)
/* 80254818 00251758  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8025481C 0025175C  7C 04 00 50 */	subf r0, r4, r0
/* 80254820 00251760  90 04 00 0C */	stw r0, 0xc(r4)
/* 80254824 00251764  4B EE 3D 25 */	bl __ct__10MouthSlotsFv
/* 80254828 00251768  38 60 00 2C */	li r3, 0x2c
/* 8025482C 0025176C  4B DC F6 79 */	bl __nw__FUl
/* 80254830 00251770  7C 7E 1B 79 */	or. r30, r3, r3
/* 80254834 00251774  41 82 00 44 */	beq lbl_80254878
/* 80254838 00251778  4B ED 31 3D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8025483C 0025177C  3C 60 80 4C */	lis r3, __vt__Q34Game3Pom14ProperAnimator@ha
/* 80254840 00251780  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80254844 00251784  38 03 1C 08 */	addi r0, r3, __vt__Q34Game3Pom14ProperAnimator@l
/* 80254848 00251788  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8025484C 0025178C  90 1E 00 00 */	stw r0, 0(r30)
/* 80254850 00251790  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80254854 00251794  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80254858 00251798  38 00 00 00 */	li r0, 0
/* 8025485C 0025179C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80254860 002517A0  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80254864 002517A4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80254868 002517A8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8025486C 002517AC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80254870 002517B0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80254874 002517B4  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_80254878:
/* 80254878 002517B8  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8025487C 002517BC  38 60 00 1C */	li r3, 0x1c
/* 80254880 002517C0  4B DC F6 25 */	bl __nw__FUl
/* 80254884 002517C4  7C 64 1B 79 */	or. r4, r3, r3
/* 80254888 002517C8  41 82 00 24 */	beq lbl_802548AC
/* 8025488C 002517CC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80254890 002517D0  3C 60 80 4C */	lis r3, __vt__Q34Game3Pom3FSM@ha
/* 80254894 002517D4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80254898 002517D8  38 A0 FF FF */	li r5, -1
/* 8025489C 002517DC  90 04 00 00 */	stw r0, 0(r4)
/* 802548A0 002517E0  38 03 21 64 */	addi r0, r3, __vt__Q34Game3Pom3FSM@l
/* 802548A4 002517E4  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802548A8 002517E8  90 04 00 00 */	stw r0, 0(r4)
lbl_802548AC:
/* 802548AC 002517EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802548B0 002517F0  7F E3 FB 78 */	mr r3, r31
/* 802548B4 002517F4  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802548B8 002517F8  7D 89 03 A6 */	mtctr r12
/* 802548BC 002517FC  4E 80 04 21 */	bctrl 
/* 802548C0 00251800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802548C4 00251804  7F E3 FB 78 */	mr r3, r31
/* 802548C8 00251808  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802548CC 0025180C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802548D0 00251810  7C 08 03 A6 */	mtlr r0
/* 802548D4 00251814  38 21 00 10 */	addi r1, r1, 0x10
/* 802548D8 00251818  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game3Pom3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game3Pom3ObjFPQ24Game21EnemyInitialParamBase:
/* 802548DC 0025181C  4E 80 00 20 */	blr 

.global onInit__Q34Game3Pom3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game3Pom3ObjFPQ24Game15CreatureInitArg:
/* 802548E0 00251820  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802548E4 00251824  7C 08 02 A6 */	mflr r0
/* 802548E8 00251828  90 01 00 14 */	stw r0, 0x14(r1)
/* 802548EC 0025182C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802548F0 00251830  7C 7F 1B 78 */	mr r31, r3
/* 802548F4 00251834  4B EA D1 65 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802548F8 00251838  7F E3 FB 78 */	mr r3, r31
/* 802548FC 0025183C  4B EB 31 31 */	bl isBirthTypeDropGroup__Q24Game9EnemyBaseFv
/* 80254900 00251840  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254904 00251844  41 82 00 28 */	beq lbl_8025492C
/* 80254908 00251848  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025490C 0025184C  7F E3 FB 78 */	mr r3, r31
/* 80254910 00251850  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80254914 00251854  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254918 00251858  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025491C 0025185C  60 00 00 08 */	ori r0, r0, 8
/* 80254920 00251860  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254924 00251864  4B EB 2E 71 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80254928 00251868  48 00 00 24 */	b lbl_8025494C
lbl_8025492C:
/* 8025492C 0025186C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254930 00251870  7F E3 FB 78 */	mr r3, r31
/* 80254934 00251874  60 00 00 01 */	ori r0, r0, 1
/* 80254938 00251878  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025493C 0025187C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254940 00251880  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80254944 00251884  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254948 00251888  4B EB 2E 35 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
lbl_8025494C:
/* 8025494C 0025188C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254950 00251890  7F E3 FB 78 */	mr r3, r31
/* 80254954 00251894  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 80254958 00251898  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025495C 0025189C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254960 002518A0  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 80254964 002518A4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254968 002518A8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025496C 002518AC  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 80254970 002518B0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254974 002518B4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254978 002518B8  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8025497C 002518BC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254980 002518C0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254984 002518C4  64 00 00 40 */	oris r0, r0, 0x40
/* 80254988 002518C8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025498C 002518CC  4B EA D0 7D */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 80254990 002518D0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80254994 002518D4  7F E4 FB 78 */	mr r4, r31
/* 80254998 002518D8  4B FE D2 D1 */	bl killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8025499C 002518DC  7F E3 FB 78 */	mr r3, r31
/* 802549A0 002518E0  48 00 04 ED */	bl setPomParms__Q34Game3Pom3ObjFv
/* 802549A4 002518E4  38 00 00 00 */	li r0, 0
/* 802549A8 002518E8  C0 02 C6 48 */	lfs f0, lbl_8051A9A8@sda21(r2)
/* 802549AC 002518EC  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802549B0 002518F0  7F E4 FB 78 */	mr r4, r31
/* 802549B4 002518F4  38 A0 00 00 */	li r5, 0
/* 802549B8 002518F8  38 C0 00 00 */	li r6, 0
/* 802549BC 002518FC  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802549C0 00251900  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802549C4 00251904  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802549C8 00251908  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802549CC 0025190C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802549D0 00251910  81 83 00 00 */	lwz r12, 0(r3)
/* 802549D4 00251914  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802549D8 00251918  7D 89 03 A6 */	mtctr r12
/* 802549DC 0025191C  4E 80 04 21 */	bctrl 
/* 802549E0 00251920  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802549E4 00251924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802549E8 00251928  7C 08 03 A6 */	mtlr r0
/* 802549EC 0025192C  38 21 00 10 */	addi r1, r1, 0x10
/* 802549F0 00251930  4E 80 00 20 */	blr 

.global doUpdate__Q34Game3Pom3ObjFv
doUpdate__Q34Game3Pom3ObjFv:
/* 802549F4 00251934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802549F8 00251938  7C 08 02 A6 */	mflr r0
/* 802549FC 0025193C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254A00 00251940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80254A04 00251944  7C 7F 1B 78 */	mr r31, r3
/* 80254A08 00251948  7F E4 FB 78 */	mr r4, r31
/* 80254A0C 0025194C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80254A10 00251950  81 83 00 00 */	lwz r12, 0(r3)
/* 80254A14 00251954  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80254A18 00251958  7D 89 03 A6 */	mtctr r12
/* 80254A1C 0025195C  4E 80 04 21 */	bctrl 
/* 80254A20 00251960  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 80254A24 00251964  4B EE 3C 09 */	bl update__10MouthSlotsFv
/* 80254A28 00251968  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80254A2C 0025196C  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80254A30 00251970  41 82 00 38 */	beq lbl_80254A68
/* 80254A34 00251974  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80254A38 00251978  28 00 00 00 */	cmplwi r0, 0
/* 80254A3C 0025197C  41 82 00 2C */	beq lbl_80254A68
/* 80254A40 00251980  54 60 03 5B */	rlwinm. r0, r3, 0, 0xd, 0xd
/* 80254A44 00251984  41 82 00 1C */	beq lbl_80254A60
/* 80254A48 00251988  60 60 00 01 */	ori r0, r3, 1
/* 80254A4C 0025198C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254A50 00251990  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80254A54 00251994  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80254A58 00251998  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80254A5C 0025199C  48 00 00 0C */	b lbl_80254A68
lbl_80254A60:
/* 80254A60 002519A0  7F E3 FB 78 */	mr r3, r31
/* 80254A64 002519A4  4B EB 2D 19 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
lbl_80254A68:
/* 80254A68 002519A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80254A6C 002519AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80254A70 002519B0  7C 08 03 A6 */	mtlr r0
/* 80254A74 002519B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80254A78 002519B8  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game3Pom3ObjFv
changeMaterial__Q34Game3Pom3ObjFv:
/* 80254A7C 002519BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80254A80 002519C0  7C 08 02 A6 */	mflr r0
/* 80254A84 002519C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80254A88 002519C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80254A8C 002519CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80254A90 002519D0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80254A94 002519D4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80254A98 002519D8  7C 7C 1B 78 */	mr r28, r3
/* 80254A9C 002519DC  3C 60 80 48 */	lis r3, lbl_80484CD8@ha
/* 80254AA0 002519E0  80 BC 01 74 */	lwz r5, 0x174(r28)
/* 80254AA4 002519E4  38 83 4C D8 */	addi r4, r3, lbl_80484CD8@l
/* 80254AA8 002519E8  83 E5 00 08 */	lwz r31, 8(r5)
/* 80254AAC 002519EC  83 BF 00 04 */	lwz r29, 4(r31)
/* 80254AB0 002519F0  80 7D 00 64 */	lwz r3, 0x64(r29)
/* 80254AB4 002519F4  4B DD A2 D1 */	bl getIndex__10JUTNameTabCFPCc
/* 80254AB8 002519F8  80 9D 00 60 */	lwz r4, 0x60(r29)
/* 80254ABC 002519FC  54 63 13 BA */	rlwinm r3, r3, 2, 0xe, 0x1d
/* 80254AC0 00251A00  A8 1C 02 DC */	lha r0, 0x2dc(r28)
/* 80254AC4 00251A04  38 A1 00 08 */	addi r5, r1, 8
/* 80254AC8 00251A08  7C 64 18 2E */	lwzx r3, r4, r3
/* 80254ACC 00251A0C  38 80 00 00 */	li r4, 0
/* 80254AD0 00251A10  B0 01 00 08 */	sth r0, 8(r1)
/* 80254AD4 00251A14  A8 1C 02 DE */	lha r0, 0x2de(r28)
/* 80254AD8 00251A18  B0 01 00 0A */	sth r0, 0xa(r1)
/* 80254ADC 00251A1C  A8 1C 02 E0 */	lha r0, 0x2e0(r28)
/* 80254AE0 00251A20  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80254AE4 00251A24  A8 1C 02 E2 */	lha r0, 0x2e2(r28)
/* 80254AE8 00251A28  B0 01 00 0E */	sth r0, 0xe(r1)
/* 80254AEC 00251A2C  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 80254AF0 00251A30  81 83 00 00 */	lwz r12, 0(r3)
/* 80254AF4 00251A34  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80254AF8 00251A38  7D 89 03 A6 */	mtctr r12
/* 80254AFC 00251A3C  4E 80 04 21 */	bctrl 
/* 80254B00 00251A40  7F E3 FB 78 */	mr r3, r31
/* 80254B04 00251A44  81 9F 00 00 */	lwz r12, 0(r31)
/* 80254B08 00251A48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80254B0C 00251A4C  7D 89 03 A6 */	mtctr r12
/* 80254B10 00251A50  4E 80 04 21 */	bctrl 
/* 80254B14 00251A54  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80254B18 00251A58  3B 80 00 00 */	li r28, 0
/* 80254B1C 00251A5C  3B C3 F2 30 */	addi r30, r3, j3dSys@l
/* 80254B20 00251A60  48 00 00 3C */	b lbl_80254B5C
lbl_80254B24:
/* 80254B24 00251A64  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80254B28 00251A68  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 80254B2C 00251A6C  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 80254B30 00251A70  7C 84 1A 14 */	add r4, r4, r3
/* 80254B34 00251A74  90 9E 00 3C */	stw r4, 0x3c(r30)
/* 80254B38 00251A78  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 80254B3C 00251A7C  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 80254B40 00251A80  7C 63 00 2E */	lwzx r3, r3, r0
/* 80254B44 00251A84  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80254B48 00251A88  81 83 00 00 */	lwz r12, 0(r3)
/* 80254B4C 00251A8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80254B50 00251A90  7D 89 03 A6 */	mtctr r12
/* 80254B54 00251A94  4E 80 04 21 */	bctrl 
/* 80254B58 00251A98  3B 9C 00 01 */	addi r28, r28, 1
lbl_80254B5C:
/* 80254B5C 00251A9C  A0 1D 00 5C */	lhz r0, 0x5c(r29)
/* 80254B60 00251AA0  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 80254B64 00251AA4  7C 03 00 40 */	cmplw r3, r0
/* 80254B68 00251AA8  41 80 FF BC */	blt lbl_80254B24
/* 80254B6C 00251AAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80254B70 00251AB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80254B74 00251AB4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80254B78 00251AB8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80254B7C 00251ABC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80254B80 00251AC0  7C 08 03 A6 */	mtlr r0
/* 80254B84 00251AC4  38 21 00 20 */	addi r1, r1, 0x20
/* 80254B88 00251AC8  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game3Pom3ObjFR8Graphics
doDirectDraw__Q34Game3Pom3ObjFR8Graphics:
/* 80254B8C 00251ACC  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game3Pom3ObjFR8Graphics
doDebugDraw__Q34Game3Pom3ObjFR8Graphics:
/* 80254B90 00251AD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80254B94 00251AD4  7C 08 02 A6 */	mflr r0
/* 80254B98 00251AD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254B9C 00251ADC  4B EB 12 D1 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80254BA0 00251AE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80254BA4 00251AE4  7C 08 03 A6 */	mtlr r0
/* 80254BA8 00251AE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80254BAC 00251AEC  4E 80 00 20 */	blr 

.global setFSM__Q34Game3Pom3ObjFPQ34Game3Pom3FSM
setFSM__Q34Game3Pom3ObjFPQ34Game3Pom3FSM:
/* 80254BB0 00251AF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80254BB4 00251AF4  7C 08 02 A6 */	mflr r0
/* 80254BB8 00251AF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254BBC 00251AFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80254BC0 00251B00  7C 7F 1B 78 */	mr r31, r3
/* 80254BC4 00251B04  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80254BC8 00251B08  7F E4 FB 78 */	mr r4, r31
/* 80254BCC 00251B0C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80254BD0 00251B10  81 83 00 00 */	lwz r12, 0(r3)
/* 80254BD4 00251B14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80254BD8 00251B18  7D 89 03 A6 */	mtctr r12
/* 80254BDC 00251B1C  4E 80 04 21 */	bctrl 
/* 80254BE0 00251B20  38 00 00 00 */	li r0, 0
/* 80254BE4 00251B24  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80254BE8 00251B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80254BEC 00251B2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80254BF0 00251B30  7C 08 03 A6 */	mtlr r0
/* 80254BF4 00251B34  38 21 00 10 */	addi r1, r1, 0x10
/* 80254BF8 00251B38  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game3Pom3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game3Pom3ObjFRQ24Game11ShadowParam:
/* 80254BFC 00251B3C  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80254C00 00251B40  C0 62 C6 4C */	lfs f3, lbl_8051A9AC@sda21(r2)
/* 80254C04 00251B44  D0 04 00 00 */	stfs f0, 0(r4)
/* 80254C08 00251B48  C0 42 C6 48 */	lfs f2, lbl_8051A9A8@sda21(r2)
/* 80254C0C 00251B4C  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80254C10 00251B50  C0 22 C6 50 */	lfs f1, lbl_8051A9B0@sda21(r2)
/* 80254C14 00251B54  EC 63 00 2A */	fadds f3, f3, f0
/* 80254C18 00251B58  C0 02 C6 54 */	lfs f0, lbl_8051A9B4@sda21(r2)
/* 80254C1C 00251B5C  D0 64 00 04 */	stfs f3, 4(r4)
/* 80254C20 00251B60  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 80254C24 00251B64  D0 64 00 08 */	stfs f3, 8(r4)
/* 80254C28 00251B68  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 80254C2C 00251B6C  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 80254C30 00251B70  D0 44 00 14 */	stfs f2, 0x14(r4)
/* 80254C34 00251B74  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80254C38 00251B78  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80254C3C 00251B7C  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart:
/* 80254C40 00251B80  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80254C44 00251B84  7C 08 02 A6 */	mflr r0
/* 80254C48 00251B88  90 01 00 34 */	stw r0, 0x34(r1)
/* 80254C4C 00251B8C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80254C50 00251B90  7C 7F 1B 78 */	mr r31, r3
/* 80254C54 00251B94  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80254C58 00251B98  7C BE 2B 78 */	mr r30, r5
/* 80254C5C 00251B9C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80254C60 00251BA0  7C 9D 23 79 */	or. r29, r4, r4
/* 80254C64 00251BA4  41 82 00 E8 */	beq lbl_80254D4C
/* 80254C68 00251BA8  7F A3 EB 78 */	mr r3, r29
/* 80254C6C 00251BAC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80254C70 00251BB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80254C74 00251BB4  7D 89 03 A6 */	mtctr r12
/* 80254C78 00251BB8  4E 80 04 21 */	bctrl 
/* 80254C7C 00251BBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254C80 00251BC0  41 82 00 CC */	beq lbl_80254D4C
/* 80254C84 00251BC4  28 1E 00 00 */	cmplwi r30, 0
/* 80254C88 00251BC8  41 82 00 C4 */	beq lbl_80254D4C
/* 80254C8C 00251BCC  3C 80 73 6C */	lis r4, 0x736C6F74@ha
/* 80254C90 00251BD0  38 7E 00 30 */	addi r3, r30, 0x30
/* 80254C94 00251BD4  38 84 6F 74 */	addi r4, r4, 0x736C6F74@l
/* 80254C98 00251BD8  48 1B E7 9D */	bl __eq__4ID32FUl
/* 80254C9C 00251BDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254CA0 00251BE0  41 82 00 AC */	beq lbl_80254D4C
/* 80254CA4 00251BE4  88 1F 02 C1 */	lbz r0, 0x2c1(r31)
/* 80254CA8 00251BE8  28 00 00 00 */	cmplwi r0, 0
/* 80254CAC 00251BEC  41 82 00 A0 */	beq lbl_80254D4C
/* 80254CB0 00251BF0  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80254CB4 00251BF4  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 80254CB8 00251BF8  7C 03 00 00 */	cmpw r3, r0
/* 80254CBC 00251BFC  40 80 00 90 */	bge lbl_80254D4C
/* 80254CC0 00251C00  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 80254CC4 00251C04  38 80 00 00 */	li r4, 0
/* 80254CC8 00251C08  4B EE 3A B1 */	bl getSlot__10MouthSlotsFi
/* 80254CCC 00251C0C  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 80254CD0 00251C10  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 80254CD4 00251C14  38 05 A3 00 */	addi r0, r5, __vt__Q24Game11Interaction@l
/* 80254CD8 00251C18  C0 02 C6 50 */	lfs f0, lbl_8051A9B0@sda21(r2)
/* 80254CDC 00251C1C  90 01 00 08 */	stw r0, 8(r1)
/* 80254CE0 00251C20  38 A4 4D E0 */	addi r5, r4, __vt__Q24Game14InteractAttack@l
/* 80254CE4 00251C24  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractSwallow@ha
/* 80254CE8 00251C28  38 00 00 00 */	li r0, 0
/* 80254CEC 00251C2C  90 A1 00 08 */	stw r5, 8(r1)
/* 80254CF0 00251C30  38 A4 4D BC */	addi r5, r4, __vt__Q24Game15InteractSwallow@l
/* 80254CF4 00251C34  38 81 00 08 */	addi r4, r1, 8
/* 80254CF8 00251C38  90 61 00 14 */	stw r3, 0x14(r1)
/* 80254CFC 00251C3C  7F A3 EB 78 */	mr r3, r29
/* 80254D00 00251C40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80254D04 00251C44  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80254D08 00251C48  90 A1 00 08 */	stw r5, 8(r1)
/* 80254D0C 00251C4C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80254D10 00251C50  81 9D 00 00 */	lwz r12, 0(r29)
/* 80254D14 00251C54  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80254D18 00251C58  7D 89 03 A6 */	mtctr r12
/* 80254D1C 00251C5C  4E 80 04 21 */	bctrl 
/* 80254D20 00251C60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254D24 00251C64  41 82 00 10 */	beq lbl_80254D34
/* 80254D28 00251C68  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80254D2C 00251C6C  38 03 00 01 */	addi r0, r3, 1
/* 80254D30 00251C70  90 1F 02 C4 */	stw r0, 0x2c4(r31)
lbl_80254D34:
/* 80254D34 00251C74  C0 02 C6 48 */	lfs f0, lbl_8051A9A8@sda21(r2)
/* 80254D38 00251C78  7F E3 FB 78 */	mr r3, r31
/* 80254D3C 00251C7C  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80254D40 00251C80  48 00 0C AD */	bl createSwingSmokeEffect__Q34Game3Pom3ObjFv
/* 80254D44 00251C84  38 60 00 01 */	li r3, 1
/* 80254D48 00251C88  48 00 00 08 */	b lbl_80254D50
lbl_80254D4C:
/* 80254D4C 00251C8C  38 60 00 00 */	li r3, 0
lbl_80254D50:
/* 80254D50 00251C90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80254D54 00251C94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80254D58 00251C98  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80254D5C 00251C9C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80254D60 00251CA0  7C 08 03 A6 */	mtlr r0
/* 80254D64 00251CA4  38 21 00 30 */	addi r1, r1, 0x30
/* 80254D68 00251CA8  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game3Pom3ObjFPQ24Game8CreaturefP8CollPart:
/* 80254D6C 00251CAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80254D70 00251CB0  7C 08 02 A6 */	mflr r0
/* 80254D74 00251CB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254D78 00251CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80254D7C 00251CBC  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 80254D80 00251CC0  7D 89 03 A6 */	mtctr r12
/* 80254D84 00251CC4  4E 80 04 21 */	bctrl 
/* 80254D88 00251CC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80254D8C 00251CCC  7C 08 03 A6 */	mtlr r0
/* 80254D90 00251CD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80254D94 00251CD4  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game3Pom3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game3Pom3ObjFRQ24Game9CollEvent:
/* 80254D98 00251CD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80254D9C 00251CDC  7C 08 02 A6 */	mflr r0
/* 80254DA0 00251CE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254DA4 00251CE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80254DA8 00251CE8  7C 9F 23 78 */	mr r31, r4
/* 80254DAC 00251CEC  93 C1 00 08 */	stw r30, 8(r1)
/* 80254DB0 00251CF0  7C 7E 1B 78 */	mr r30, r3
/* 80254DB4 00251CF4  80 64 00 00 */	lwz r3, 0(r4)
/* 80254DB8 00251CF8  28 03 00 00 */	cmplwi r3, 0
/* 80254DBC 00251CFC  41 82 00 6C */	beq lbl_80254E28
/* 80254DC0 00251D00  81 83 00 00 */	lwz r12, 0(r3)
/* 80254DC4 00251D04  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80254DC8 00251D08  7D 89 03 A6 */	mtctr r12
/* 80254DCC 00251D0C  4E 80 04 21 */	bctrl 
/* 80254DD0 00251D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254DD4 00251D14  40 82 00 3C */	bne lbl_80254E10
/* 80254DD8 00251D18  80 7F 00 00 */	lwz r3, 0(r31)
/* 80254DDC 00251D1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80254DE0 00251D20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80254DE4 00251D24  7D 89 03 A6 */	mtctr r12
/* 80254DE8 00251D28  4E 80 04 21 */	bctrl 
/* 80254DEC 00251D2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254DF0 00251D30  40 82 00 20 */	bne lbl_80254E10
/* 80254DF4 00251D34  80 7F 00 00 */	lwz r3, 0(r31)
/* 80254DF8 00251D38  81 83 00 00 */	lwz r12, 0(r3)
/* 80254DFC 00251D3C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80254E00 00251D40  7D 89 03 A6 */	mtctr r12
/* 80254E04 00251D44  4E 80 04 21 */	bctrl 
/* 80254E08 00251D48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80254E0C 00251D4C  41 82 00 1C */	beq lbl_80254E28
lbl_80254E10:
/* 80254E10 00251D50  7F C3 F3 78 */	mr r3, r30
/* 80254E14 00251D54  7F E4 FB 78 */	mr r4, r31
/* 80254E18 00251D58  81 9E 00 00 */	lwz r12, 0(r30)
/* 80254E1C 00251D5C  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 80254E20 00251D60  7D 89 03 A6 */	mtctr r12
/* 80254E24 00251D64  4E 80 04 21 */	bctrl 
lbl_80254E28:
/* 80254E28 00251D68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80254E2C 00251D6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80254E30 00251D70  83 C1 00 08 */	lwz r30, 8(r1)
/* 80254E34 00251D74  7C 08 03 A6 */	mtlr r0
/* 80254E38 00251D78  38 21 00 10 */	addi r1, r1, 0x10
/* 80254E3C 00251D7C  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game3Pom3ObjFv
initMouthSlots__Q34Game3Pom3ObjFv:
/* 80254E40 00251D80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80254E44 00251D84  7C 08 02 A6 */	mflr r0
/* 80254E48 00251D88  38 80 00 01 */	li r4, 1
/* 80254E4C 00251D8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254E50 00251D90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80254E54 00251D94  7C 7F 1B 78 */	mr r31, r3
/* 80254E58 00251D98  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 80254E5C 00251D9C  4B EE 36 FD */	bl alloc__10MouthSlotsFi
/* 80254E60 00251DA0  3C 60 80 48 */	lis r3, lbl_80484CE4@ha
/* 80254E64 00251DA4  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80254E68 00251DA8  38 C3 4C E4 */	addi r6, r3, lbl_80484CE4@l
/* 80254E6C 00251DAC  38 80 00 00 */	li r4, 0
/* 80254E70 00251DB0  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 80254E74 00251DB4  4B EE 38 1D */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80254E78 00251DB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80254E7C 00251DBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80254E80 00251DC0  7C 08 03 A6 */	mtlr r0
/* 80254E84 00251DC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80254E88 00251DC8  4E 80 00 20 */	blr 

.global setPomParms__Q34Game3Pom3ObjFv
setPomParms__Q34Game3Pom3ObjFv:
/* 80254E8C 00251DCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80254E90 00251DD0  7C 08 02 A6 */	mflr r0
/* 80254E94 00251DD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80254E98 00251DD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80254E9C 00251DDC  7C 7F 1B 78 */	mr r31, r3
/* 80254EA0 00251DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80254EA4 00251DE4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80254EA8 00251DE8  7D 89 03 A6 */	mtctr r12
/* 80254EAC 00251DEC  4E 80 04 21 */	bctrl 
/* 80254EB0 00251DF0  2C 03 00 06 */	cmpwi r3, 6
/* 80254EB4 00251DF4  41 82 02 54 */	beq lbl_80255108
/* 80254EB8 00251DF8  40 80 00 1C */	bge lbl_80254ED4
/* 80254EBC 00251DFC  2C 03 00 04 */	cmpwi r3, 4
/* 80254EC0 00251E00  41 82 00 D8 */	beq lbl_80254F98
/* 80254EC4 00251E04  40 80 01 8C */	bge lbl_80255050
/* 80254EC8 00251E08  2C 03 00 03 */	cmpwi r3, 3
/* 80254ECC 00251E0C  40 80 00 18 */	bge lbl_80254EE4
/* 80254ED0 00251E10  48 00 04 5C */	b lbl_8025532C
lbl_80254ED4:
/* 80254ED4 00251E14  2C 03 00 08 */	cmpwi r3, 8
/* 80254ED8 00251E18  41 82 03 A0 */	beq lbl_80255278
/* 80254EDC 00251E1C  40 80 04 50 */	bge lbl_8025532C
/* 80254EE0 00251E20  48 00 02 E0 */	b lbl_802551C0
lbl_80254EE4:
/* 80254EE4 00251E24  38 80 00 00 */	li r4, 0
/* 80254EE8 00251E28  90 9F 02 D8 */	stw r4, 0x2d8(r31)
/* 80254EEC 00251E2C  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80254EF0 00251E30  2C 00 00 02 */	cmpwi r0, 2
/* 80254EF4 00251E34  41 82 00 58 */	beq lbl_80254F4C
/* 80254EF8 00251E38  40 80 00 14 */	bge lbl_80254F0C
/* 80254EFC 00251E3C  2C 00 00 00 */	cmpwi r0, 0
/* 80254F00 00251E40  41 82 00 1C */	beq lbl_80254F1C
/* 80254F04 00251E44  40 80 00 30 */	bge lbl_80254F34
/* 80254F08 00251E48  48 00 04 24 */	b lbl_8025532C
lbl_80254F0C:
/* 80254F0C 00251E4C  2C 00 00 04 */	cmpwi r0, 4
/* 80254F10 00251E50  41 82 00 6C */	beq lbl_80254F7C
/* 80254F14 00251E54  40 80 04 18 */	bge lbl_8025532C
/* 80254F18 00251E58  48 00 00 4C */	b lbl_80254F64
lbl_80254F1C:
/* 80254F1C 00251E5C  38 60 00 32 */	li r3, 0x32
/* 80254F20 00251E60  38 00 00 FF */	li r0, 0xff
/* 80254F24 00251E64  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80254F28 00251E68  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80254F2C 00251E6C  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254F30 00251E70  48 00 03 FC */	b lbl_8025532C
lbl_80254F34:
/* 80254F34 00251E74  38 60 00 FF */	li r3, 0xff
/* 80254F38 00251E78  38 00 00 14 */	li r0, 0x14
/* 80254F3C 00251E7C  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80254F40 00251E80  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254F44 00251E84  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 80254F48 00251E88  48 00 03 E4 */	b lbl_8025532C
lbl_80254F4C:
/* 80254F4C 00251E8C  38 60 00 FF */	li r3, 0xff
/* 80254F50 00251E90  38 00 00 14 */	li r0, 0x14
/* 80254F54 00251E94  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80254F58 00251E98  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80254F5C 00251E9C  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254F60 00251EA0  48 00 03 CC */	b lbl_8025532C
lbl_80254F64:
/* 80254F64 00251EA4  38 60 00 1C */	li r3, 0x1c
/* 80254F68 00251EA8  38 00 00 34 */	li r0, 0x34
/* 80254F6C 00251EAC  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80254F70 00251EB0  B0 9F 02 DE */	sth r4, 0x2de(r31)
/* 80254F74 00251EB4  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254F78 00251EB8  48 00 03 B4 */	b lbl_8025532C
lbl_80254F7C:
/* 80254F7C 00251EBC  38 00 00 C8 */	li r0, 0xc8
/* 80254F80 00251EC0  38 60 00 FF */	li r3, 0xff
/* 80254F84 00251EC4  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80254F88 00251EC8  38 00 00 DC */	li r0, 0xdc
/* 80254F8C 00251ECC  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80254F90 00251ED0  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254F94 00251ED4  48 00 03 98 */	b lbl_8025532C
lbl_80254F98:
/* 80254F98 00251ED8  38 00 00 01 */	li r0, 1
/* 80254F9C 00251EDC  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 80254FA0 00251EE0  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80254FA4 00251EE4  2C 00 00 02 */	cmpwi r0, 2
/* 80254FA8 00251EE8  41 82 00 58 */	beq lbl_80255000
/* 80254FAC 00251EEC  40 80 00 14 */	bge lbl_80254FC0
/* 80254FB0 00251EF0  2C 00 00 00 */	cmpwi r0, 0
/* 80254FB4 00251EF4  41 82 00 1C */	beq lbl_80254FD0
/* 80254FB8 00251EF8  40 80 00 30 */	bge lbl_80254FE8
/* 80254FBC 00251EFC  48 00 03 70 */	b lbl_8025532C
lbl_80254FC0:
/* 80254FC0 00251F00  2C 00 00 04 */	cmpwi r0, 4
/* 80254FC4 00251F04  41 82 00 70 */	beq lbl_80255034
/* 80254FC8 00251F08  40 80 03 64 */	bge lbl_8025532C
/* 80254FCC 00251F0C  48 00 00 4C */	b lbl_80255018
lbl_80254FD0:
/* 80254FD0 00251F10  38 60 00 32 */	li r3, 0x32
/* 80254FD4 00251F14  38 00 00 FF */	li r0, 0xff
/* 80254FD8 00251F18  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80254FDC 00251F1C  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80254FE0 00251F20  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254FE4 00251F24  48 00 03 48 */	b lbl_8025532C
lbl_80254FE8:
/* 80254FE8 00251F28  38 60 00 FF */	li r3, 0xff
/* 80254FEC 00251F2C  38 00 00 14 */	li r0, 0x14
/* 80254FF0 00251F30  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80254FF4 00251F34  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80254FF8 00251F38  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 80254FFC 00251F3C  48 00 03 30 */	b lbl_8025532C
lbl_80255000:
/* 80255000 00251F40  38 60 00 FF */	li r3, 0xff
/* 80255004 00251F44  38 00 00 14 */	li r0, 0x14
/* 80255008 00251F48  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025500C 00251F4C  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255010 00251F50  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255014 00251F54  48 00 03 18 */	b lbl_8025532C
lbl_80255018:
/* 80255018 00251F58  38 00 00 1C */	li r0, 0x1c
/* 8025501C 00251F5C  38 60 00 00 */	li r3, 0
/* 80255020 00251F60  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255024 00251F64  38 00 00 34 */	li r0, 0x34
/* 80255028 00251F68  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025502C 00251F6C  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255030 00251F70  48 00 02 FC */	b lbl_8025532C
lbl_80255034:
/* 80255034 00251F74  38 00 00 C8 */	li r0, 0xc8
/* 80255038 00251F78  38 60 00 FF */	li r3, 0xff
/* 8025503C 00251F7C  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255040 00251F80  38 00 00 DC */	li r0, 0xdc
/* 80255044 00251F84  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255048 00251F88  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 8025504C 00251F8C  48 00 02 E0 */	b lbl_8025532C
lbl_80255050:
/* 80255050 00251F90  38 00 00 02 */	li r0, 2
/* 80255054 00251F94  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 80255058 00251F98  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 8025505C 00251F9C  2C 00 00 02 */	cmpwi r0, 2
/* 80255060 00251FA0  41 82 00 58 */	beq lbl_802550B8
/* 80255064 00251FA4  40 80 00 14 */	bge lbl_80255078
/* 80255068 00251FA8  2C 00 00 00 */	cmpwi r0, 0
/* 8025506C 00251FAC  41 82 00 1C */	beq lbl_80255088
/* 80255070 00251FB0  40 80 00 30 */	bge lbl_802550A0
/* 80255074 00251FB4  48 00 02 B8 */	b lbl_8025532C
lbl_80255078:
/* 80255078 00251FB8  2C 00 00 04 */	cmpwi r0, 4
/* 8025507C 00251FBC  41 82 00 70 */	beq lbl_802550EC
/* 80255080 00251FC0  40 80 02 AC */	bge lbl_8025532C
/* 80255084 00251FC4  48 00 00 4C */	b lbl_802550D0
lbl_80255088:
/* 80255088 00251FC8  38 60 00 32 */	li r3, 0x32
/* 8025508C 00251FCC  38 00 00 FF */	li r0, 0xff
/* 80255090 00251FD0  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255094 00251FD4  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255098 00251FD8  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 8025509C 00251FDC  48 00 02 90 */	b lbl_8025532C
lbl_802550A0:
/* 802550A0 00251FE0  38 60 00 FF */	li r3, 0xff
/* 802550A4 00251FE4  38 00 00 14 */	li r0, 0x14
/* 802550A8 00251FE8  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 802550AC 00251FEC  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802550B0 00251FF0  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 802550B4 00251FF4  48 00 02 78 */	b lbl_8025532C
lbl_802550B8:
/* 802550B8 00251FF8  38 60 00 FF */	li r3, 0xff
/* 802550BC 00251FFC  38 00 00 14 */	li r0, 0x14
/* 802550C0 00252000  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 802550C4 00252004  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 802550C8 00252008  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802550CC 0025200C  48 00 02 60 */	b lbl_8025532C
lbl_802550D0:
/* 802550D0 00252010  38 00 00 1C */	li r0, 0x1c
/* 802550D4 00252014  38 60 00 00 */	li r3, 0
/* 802550D8 00252018  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 802550DC 0025201C  38 00 00 34 */	li r0, 0x34
/* 802550E0 00252020  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 802550E4 00252024  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802550E8 00252028  48 00 02 44 */	b lbl_8025532C
lbl_802550EC:
/* 802550EC 0025202C  38 00 00 C8 */	li r0, 0xc8
/* 802550F0 00252030  38 60 00 FF */	li r3, 0xff
/* 802550F4 00252034  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 802550F8 00252038  38 00 00 DC */	li r0, 0xdc
/* 802550FC 0025203C  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255100 00252040  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255104 00252044  48 00 02 28 */	b lbl_8025532C
lbl_80255108:
/* 80255108 00252048  38 00 00 03 */	li r0, 3
/* 8025510C 0025204C  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 80255110 00252050  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80255114 00252054  2C 00 00 02 */	cmpwi r0, 2
/* 80255118 00252058  41 82 00 58 */	beq lbl_80255170
/* 8025511C 0025205C  40 80 00 14 */	bge lbl_80255130
/* 80255120 00252060  2C 00 00 00 */	cmpwi r0, 0
/* 80255124 00252064  41 82 00 1C */	beq lbl_80255140
/* 80255128 00252068  40 80 00 30 */	bge lbl_80255158
/* 8025512C 0025206C  48 00 02 00 */	b lbl_8025532C
lbl_80255130:
/* 80255130 00252070  2C 00 00 04 */	cmpwi r0, 4
/* 80255134 00252074  41 82 00 70 */	beq lbl_802551A4
/* 80255138 00252078  40 80 01 F4 */	bge lbl_8025532C
/* 8025513C 0025207C  48 00 00 4C */	b lbl_80255188
lbl_80255140:
/* 80255140 00252080  38 60 00 32 */	li r3, 0x32
/* 80255144 00252084  38 00 00 FF */	li r0, 0xff
/* 80255148 00252088  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025514C 0025208C  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255150 00252090  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255154 00252094  48 00 01 D8 */	b lbl_8025532C
lbl_80255158:
/* 80255158 00252098  38 60 00 FF */	li r3, 0xff
/* 8025515C 0025209C  38 00 00 14 */	li r0, 0x14
/* 80255160 002520A0  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255164 002520A4  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255168 002520A8  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 8025516C 002520AC  48 00 01 C0 */	b lbl_8025532C
lbl_80255170:
/* 80255170 002520B0  38 60 00 FF */	li r3, 0xff
/* 80255174 002520B4  38 00 00 14 */	li r0, 0x14
/* 80255178 002520B8  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025517C 002520BC  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255180 002520C0  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255184 002520C4  48 00 01 A8 */	b lbl_8025532C
lbl_80255188:
/* 80255188 002520C8  38 00 00 1C */	li r0, 0x1c
/* 8025518C 002520CC  38 60 00 00 */	li r3, 0
/* 80255190 002520D0  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255194 002520D4  38 00 00 34 */	li r0, 0x34
/* 80255198 002520D8  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025519C 002520DC  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802551A0 002520E0  48 00 01 8C */	b lbl_8025532C
lbl_802551A4:
/* 802551A4 002520E4  38 00 00 C8 */	li r0, 0xc8
/* 802551A8 002520E8  38 60 00 FF */	li r3, 0xff
/* 802551AC 002520EC  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 802551B0 002520F0  38 00 00 DC */	li r0, 0xdc
/* 802551B4 002520F4  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 802551B8 002520F8  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802551BC 002520FC  48 00 01 70 */	b lbl_8025532C
lbl_802551C0:
/* 802551C0 00252100  38 00 00 04 */	li r0, 4
/* 802551C4 00252104  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 802551C8 00252108  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 802551CC 0025210C  2C 00 00 02 */	cmpwi r0, 2
/* 802551D0 00252110  41 82 00 58 */	beq lbl_80255228
/* 802551D4 00252114  40 80 00 14 */	bge lbl_802551E8
/* 802551D8 00252118  2C 00 00 00 */	cmpwi r0, 0
/* 802551DC 0025211C  41 82 00 1C */	beq lbl_802551F8
/* 802551E0 00252120  40 80 00 30 */	bge lbl_80255210
/* 802551E4 00252124  48 00 01 48 */	b lbl_8025532C
lbl_802551E8:
/* 802551E8 00252128  2C 00 00 04 */	cmpwi r0, 4
/* 802551EC 0025212C  41 82 00 70 */	beq lbl_8025525C
/* 802551F0 00252130  40 80 01 3C */	bge lbl_8025532C
/* 802551F4 00252134  48 00 00 4C */	b lbl_80255240
lbl_802551F8:
/* 802551F8 00252138  38 60 00 32 */	li r3, 0x32
/* 802551FC 0025213C  38 00 00 FF */	li r0, 0xff
/* 80255200 00252140  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255204 00252144  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255208 00252148  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 8025520C 0025214C  48 00 01 20 */	b lbl_8025532C
lbl_80255210:
/* 80255210 00252150  38 60 00 FF */	li r3, 0xff
/* 80255214 00252154  38 00 00 14 */	li r0, 0x14
/* 80255218 00252158  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 8025521C 0025215C  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255220 00252160  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 80255224 00252164  48 00 01 08 */	b lbl_8025532C
lbl_80255228:
/* 80255228 00252168  38 60 00 FF */	li r3, 0xff
/* 8025522C 0025216C  38 00 00 14 */	li r0, 0x14
/* 80255230 00252170  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255234 00252174  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255238 00252178  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 8025523C 0025217C  48 00 00 F0 */	b lbl_8025532C
lbl_80255240:
/* 80255240 00252180  38 00 00 1C */	li r0, 0x1c
/* 80255244 00252184  38 60 00 00 */	li r3, 0
/* 80255248 00252188  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 8025524C 0025218C  38 00 00 34 */	li r0, 0x34
/* 80255250 00252190  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255254 00252194  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255258 00252198  48 00 00 D4 */	b lbl_8025532C
lbl_8025525C:
/* 8025525C 0025219C  38 00 00 C8 */	li r0, 0xc8
/* 80255260 002521A0  38 60 00 FF */	li r3, 0xff
/* 80255264 002521A4  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255268 002521A8  38 00 00 DC */	li r0, 0xdc
/* 8025526C 002521AC  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255270 002521B0  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255274 002521B4  48 00 00 B8 */	b lbl_8025532C
lbl_80255278:
/* 80255278 002521B8  38 00 00 01 */	li r0, 1
/* 8025527C 002521BC  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 80255280 002521C0  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80255284 002521C4  2C 00 00 02 */	cmpwi r0, 2
/* 80255288 002521C8  41 82 00 58 */	beq lbl_802552E0
/* 8025528C 002521CC  40 80 00 14 */	bge lbl_802552A0
/* 80255290 002521D0  2C 00 00 00 */	cmpwi r0, 0
/* 80255294 002521D4  41 82 00 1C */	beq lbl_802552B0
/* 80255298 002521D8  40 80 00 30 */	bge lbl_802552C8
/* 8025529C 002521DC  48 00 00 90 */	b lbl_8025532C
lbl_802552A0:
/* 802552A0 002521E0  2C 00 00 04 */	cmpwi r0, 4
/* 802552A4 002521E4  41 82 00 70 */	beq lbl_80255314
/* 802552A8 002521E8  40 80 00 84 */	bge lbl_8025532C
/* 802552AC 002521EC  48 00 00 4C */	b lbl_802552F8
lbl_802552B0:
/* 802552B0 002521F0  38 60 00 32 */	li r3, 0x32
/* 802552B4 002521F4  38 00 00 FF */	li r0, 0xff
/* 802552B8 002521F8  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 802552BC 002521FC  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 802552C0 00252200  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802552C4 00252204  48 00 00 68 */	b lbl_8025532C
lbl_802552C8:
/* 802552C8 00252208  38 60 00 FF */	li r3, 0xff
/* 802552CC 0025220C  38 00 00 14 */	li r0, 0x14
/* 802552D0 00252210  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 802552D4 00252214  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802552D8 00252218  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 802552DC 0025221C  48 00 00 50 */	b lbl_8025532C
lbl_802552E0:
/* 802552E0 00252220  38 60 00 FF */	li r3, 0xff
/* 802552E4 00252224  38 00 00 14 */	li r0, 0x14
/* 802552E8 00252228  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 802552EC 0025222C  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 802552F0 00252230  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 802552F4 00252234  48 00 00 38 */	b lbl_8025532C
lbl_802552F8:
/* 802552F8 00252238  38 00 00 1C */	li r0, 0x1c
/* 802552FC 0025223C  38 60 00 00 */	li r3, 0
/* 80255300 00252240  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255304 00252244  38 00 00 34 */	li r0, 0x34
/* 80255308 00252248  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025530C 0025224C  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255310 00252250  48 00 00 1C */	b lbl_8025532C
lbl_80255314:
/* 80255314 00252254  38 00 00 C8 */	li r0, 0xc8
/* 80255318 00252258  38 60 00 FF */	li r3, 0xff
/* 8025531C 0025225C  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255320 00252260  38 00 00 DC */	li r0, 0xdc
/* 80255324 00252264  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 80255328 00252268  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
lbl_8025532C:
/* 8025532C 0025226C  7F E3 FB 78 */	mr r3, r31
/* 80255330 00252270  81 9F 00 00 */	lwz r12, 0(r31)
/* 80255334 00252274  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80255338 00252278  7D 89 03 A6 */	mtctr r12
/* 8025533C 0025227C  4E 80 04 21 */	bctrl 
/* 80255340 00252280  2C 03 00 08 */	cmpwi r3, 8
/* 80255344 00252284  41 82 00 24 */	beq lbl_80255368
/* 80255348 00252288  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025534C 0025228C  38 60 00 01 */	li r3, 1
/* 80255350 00252290  38 00 00 00 */	li r0, 0
/* 80255354 00252294  80 84 08 1C */	lwz r4, 0x81c(r4)
/* 80255358 00252298  90 9F 02 C8 */	stw r4, 0x2c8(r31)
/* 8025535C 0025229C  90 7F 02 CC */	stw r3, 0x2cc(r31)
/* 80255360 002522A0  B0 1F 02 E2 */	sth r0, 0x2e2(r31)
/* 80255364 002522A4  48 00 00 24 */	b lbl_80255388
lbl_80255368:
/* 80255368 002522A8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025536C 002522AC  38 00 00 FF */	li r0, 0xff
/* 80255370 002522B0  80 63 08 44 */	lwz r3, 0x844(r3)
/* 80255374 002522B4  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 80255378 002522B8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025537C 002522BC  80 63 08 6C */	lwz r3, 0x86c(r3)
/* 80255380 002522C0  90 7F 02 CC */	stw r3, 0x2cc(r31)
/* 80255384 002522C4  B0 1F 02 E2 */	sth r0, 0x2e2(r31)
lbl_80255388:
/* 80255388 002522C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025538C 002522CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80255390 002522D0  7C 08 03 A6 */	mtlr r0
/* 80255394 002522D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80255398 002522D8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game3Pom3ObjFv
getEnemyTypeID__Q34Game3Pom3ObjFv:
/* 8025539C 002522DC  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802553A0 002522E0  4E 80 00 20 */	blr 

.global shotPikmin__Q34Game3Pom3ObjFv
shotPikmin__Q34Game3Pom3ObjFv:
/* 802553A4 002522E4  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 802553A8 002522E8  7C 08 02 A6 */	mflr r0
/* 802553AC 002522EC  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 802553B0 002522F0  93 E1 00 AC */	stw r31, 0xac(r1)
/* 802553B4 002522F4  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 802553B8 002522F8  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 802553BC 002522FC  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 802553C0 00252300  7C 7C 1B 78 */	mr r28, r3
/* 802553C4 00252304  38 61 00 10 */	addi r3, r1, 0x10
/* 802553C8 00252308  81 9C 00 00 */	lwz r12, 0(r28)
/* 802553CC 0025230C  7F 84 E3 78 */	mr r4, r28
/* 802553D0 00252310  81 8C 00 08 */	lwz r12, 8(r12)
/* 802553D4 00252314  7D 89 03 A6 */	mtctr r12
/* 802553D8 00252318  4E 80 04 21 */	bctrl 
/* 802553DC 0025231C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802553E0 00252320  7F 84 E3 78 */	mr r4, r28
/* 802553E4 00252324  C0 02 C6 58 */	lfs f0, lbl_8051A9B8@sda21(r2)
/* 802553E8 00252328  38 61 00 64 */	addi r3, r1, 0x64
/* 802553EC 0025232C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802553F0 00252330  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802553F4 00252334  EC 02 00 2A */	fadds f0, f2, f0
/* 802553F8 00252338  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802553FC 0025233C  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80255400 00252340  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80255404 00252344  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80255408 00252348  80 BC 01 F4 */	lwz r5, 0x1f4(r28)
/* 8025540C 0025234C  80 1C 02 CC */	lwz r0, 0x2cc(r28)
/* 80255410 00252350  7F C5 01 D6 */	mullw r30, r5, r0
/* 80255414 00252354  4B F4 A8 49 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80255418 00252358  38 00 00 00 */	li r0, 0
/* 8025541C 0025235C  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80255420 00252360  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80255424 00252364  38 61 00 64 */	addi r3, r1, 0x64
/* 80255428 00252368  28 00 00 00 */	cmplwi r0, 0
/* 8025542C 0025236C  90 81 00 28 */	stw r4, 0x28(r1)
/* 80255430 00252370  90 01 00 34 */	stw r0, 0x34(r1)
/* 80255434 00252374  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80255438 00252378  90 61 00 30 */	stw r3, 0x30(r1)
/* 8025543C 0025237C  40 82 00 1C */	bne lbl_80255458
/* 80255440 00252380  81 83 00 00 */	lwz r12, 0(r3)
/* 80255444 00252384  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80255448 00252388  7D 89 03 A6 */	mtctr r12
/* 8025544C 0025238C  4E 80 04 21 */	bctrl 
/* 80255450 00252390  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80255454 00252394  48 00 02 24 */	b lbl_80255678
lbl_80255458:
/* 80255458 00252398  81 83 00 00 */	lwz r12, 0(r3)
/* 8025545C 0025239C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80255460 002523A0  7D 89 03 A6 */	mtctr r12
/* 80255464 002523A4  4E 80 04 21 */	bctrl 
/* 80255468 002523A8  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8025546C 002523AC  48 00 00 58 */	b lbl_802554C4
lbl_80255470:
/* 80255470 002523B0  80 61 00 30 */	lwz r3, 0x30(r1)
/* 80255474 002523B4  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80255478 002523B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8025547C 002523BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80255480 002523C0  7D 89 03 A6 */	mtctr r12
/* 80255484 002523C4  4E 80 04 21 */	bctrl 
/* 80255488 002523C8  7C 64 1B 78 */	mr r4, r3
/* 8025548C 002523CC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80255490 002523D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80255494 002523D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80255498 002523D8  7D 89 03 A6 */	mtctr r12
/* 8025549C 002523DC  4E 80 04 21 */	bctrl 
/* 802554A0 002523E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802554A4 002523E4  40 82 01 D4 */	bne lbl_80255678
/* 802554A8 002523E8  80 61 00 30 */	lwz r3, 0x30(r1)
/* 802554AC 002523EC  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 802554B0 002523F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802554B4 002523F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802554B8 002523F8  7D 89 03 A6 */	mtctr r12
/* 802554BC 002523FC  4E 80 04 21 */	bctrl 
/* 802554C0 00252400  90 61 00 2C */	stw r3, 0x2c(r1)
lbl_802554C4:
/* 802554C4 00252404  81 81 00 28 */	lwz r12, 0x28(r1)
/* 802554C8 00252408  38 61 00 28 */	addi r3, r1, 0x28
/* 802554CC 0025240C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802554D0 00252410  7D 89 03 A6 */	mtctr r12
/* 802554D4 00252414  4E 80 04 21 */	bctrl 
/* 802554D8 00252418  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802554DC 0025241C  41 82 FF 94 */	beq lbl_80255470
/* 802554E0 00252420  48 00 01 98 */	b lbl_80255678
lbl_802554E4:
/* 802554E4 00252424  80 61 00 30 */	lwz r3, 0x30(r1)
/* 802554E8 00252428  81 83 00 00 */	lwz r12, 0(r3)
/* 802554EC 0025242C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802554F0 00252430  7D 89 03 A6 */	mtctr r12
/* 802554F4 00252434  4E 80 04 21 */	bctrl 
/* 802554F8 00252438  81 83 00 00 */	lwz r12, 0(r3)
/* 802554FC 0025243C  7C 7F 1B 78 */	mr r31, r3
/* 80255500 00252440  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80255504 00252444  7D 89 03 A6 */	mtctr r12
/* 80255508 00252448  4E 80 04 21 */	bctrl 
/* 8025550C 0025244C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80255510 00252450  41 82 00 AC */	beq lbl_802555BC
/* 80255514 00252454  7F E3 FB 78 */	mr r3, r31
/* 80255518 00252458  4B F4 A0 71 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8025551C 0025245C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80255520 00252460  41 82 00 9C */	beq lbl_802555BC
/* 80255524 00252464  88 7F 02 B8 */	lbz r3, 0x2b8(r31)
/* 80255528 00252468  2C 03 00 05 */	cmpwi r3, 5
/* 8025552C 0025246C  40 80 00 40 */	bge lbl_8025556C
/* 80255530 00252470  4B FD A5 7D */	bl dec__Q24Game8BirthMgrFi
/* 80255534 00252474  7F 83 E3 78 */	mr r3, r28
/* 80255538 00252478  81 9C 00 00 */	lwz r12, 0(r28)
/* 8025553C 0025247C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80255540 00252480  7D 89 03 A6 */	mtctr r12
/* 80255544 00252484  4E 80 04 21 */	bctrl 
/* 80255548 00252488  2C 03 00 08 */	cmpwi r3, 8
/* 8025554C 0025248C  41 82 00 20 */	beq lbl_8025556C
/* 80255550 00252490  88 7F 02 B8 */	lbz r3, 0x2b8(r31)
/* 80255554 00252494  80 1C 02 D8 */	lwz r0, 0x2d8(r28)
/* 80255558 00252498  7C 03 00 00 */	cmpw r3, r0
/* 8025555C 0025249C  40 82 00 10 */	bne lbl_8025556C
/* 80255560 002524A0  80 7C 02 C4 */	lwz r3, 0x2c4(r28)
/* 80255564 002524A4  38 03 FF FF */	addi r0, r3, -1
/* 80255568 002524A8  90 1C 02 C4 */	stw r0, 0x2c4(r28)
lbl_8025556C:
/* 8025556C 002524AC  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 80255570 002524B0  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 80255574 002524B4  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 80255578 002524B8  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractKill@ha
/* 8025557C 002524BC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80255580 002524C0  38 84 A2 D0 */	addi r4, r4, __vt__Q24Game15CreatureKillArg@l
/* 80255584 002524C4  38 A3 4D 98 */	addi r5, r3, __vt__Q24Game12InteractKill@l
/* 80255588 002524C8  38 01 00 08 */	addi r0, r1, 8
/* 8025558C 002524CC  38 C0 00 01 */	li r6, 1
/* 80255590 002524D0  90 81 00 08 */	stw r4, 8(r1)
/* 80255594 002524D4  7F E3 FB 78 */	mr r3, r31
/* 80255598 002524D8  38 81 00 1C */	addi r4, r1, 0x1c
/* 8025559C 002524DC  90 C1 00 0C */	stw r6, 0xc(r1)
/* 802555A0 002524E0  93 81 00 20 */	stw r28, 0x20(r1)
/* 802555A4 002524E4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802555A8 002524E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802555AC 002524EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802555B0 002524F0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802555B4 002524F4  7D 89 03 A6 */	mtctr r12
/* 802555B8 002524F8  4E 80 04 21 */	bctrl 
lbl_802555BC:
/* 802555BC 002524FC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802555C0 00252500  28 00 00 00 */	cmplwi r0, 0
/* 802555C4 00252504  40 82 00 24 */	bne lbl_802555E8
/* 802555C8 00252508  80 61 00 30 */	lwz r3, 0x30(r1)
/* 802555CC 0025250C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 802555D0 00252510  81 83 00 00 */	lwz r12, 0(r3)
/* 802555D4 00252514  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802555D8 00252518  7D 89 03 A6 */	mtctr r12
/* 802555DC 0025251C  4E 80 04 21 */	bctrl 
/* 802555E0 00252520  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802555E4 00252524  48 00 00 94 */	b lbl_80255678
lbl_802555E8:
/* 802555E8 00252528  80 61 00 30 */	lwz r3, 0x30(r1)
/* 802555EC 0025252C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 802555F0 00252530  81 83 00 00 */	lwz r12, 0(r3)
/* 802555F4 00252534  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802555F8 00252538  7D 89 03 A6 */	mtctr r12
/* 802555FC 0025253C  4E 80 04 21 */	bctrl 
/* 80255600 00252540  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80255604 00252544  48 00 00 58 */	b lbl_8025565C
lbl_80255608:
/* 80255608 00252548  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8025560C 0025254C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80255610 00252550  81 83 00 00 */	lwz r12, 0(r3)
/* 80255614 00252554  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80255618 00252558  7D 89 03 A6 */	mtctr r12
/* 8025561C 0025255C  4E 80 04 21 */	bctrl 
/* 80255620 00252560  7C 64 1B 78 */	mr r4, r3
/* 80255624 00252564  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80255628 00252568  81 83 00 00 */	lwz r12, 0(r3)
/* 8025562C 0025256C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80255630 00252570  7D 89 03 A6 */	mtctr r12
/* 80255634 00252574  4E 80 04 21 */	bctrl 
/* 80255638 00252578  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025563C 0025257C  40 82 00 3C */	bne lbl_80255678
/* 80255640 00252580  80 61 00 30 */	lwz r3, 0x30(r1)
/* 80255644 00252584  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80255648 00252588  81 83 00 00 */	lwz r12, 0(r3)
/* 8025564C 0025258C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80255650 00252590  7D 89 03 A6 */	mtctr r12
/* 80255654 00252594  4E 80 04 21 */	bctrl 
/* 80255658 00252598  90 61 00 2C */	stw r3, 0x2c(r1)
lbl_8025565C:
/* 8025565C 0025259C  81 81 00 28 */	lwz r12, 0x28(r1)
/* 80255660 002525A0  38 61 00 28 */	addi r3, r1, 0x28
/* 80255664 002525A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80255668 002525A8  7D 89 03 A6 */	mtctr r12
/* 8025566C 002525AC  4E 80 04 21 */	bctrl 
/* 80255670 002525B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80255674 002525B4  41 82 FF 94 */	beq lbl_80255608
lbl_80255678:
/* 80255678 002525B8  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8025567C 002525BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80255680 002525C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80255684 002525C4  7D 89 03 A6 */	mtctr r12
/* 80255688 002525C8  4E 80 04 21 */	bctrl 
/* 8025568C 002525CC  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80255690 002525D0  7C 04 18 40 */	cmplw r4, r3
/* 80255694 002525D4  40 82 FE 50 */	bne lbl_802554E4
/* 80255698 002525D8  3B E0 00 00 */	li r31, 0
/* 8025569C 002525DC  48 00 01 6C */	b lbl_80255808
lbl_802556A0:
/* 802556A0 002525E0  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 802556A4 002525E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802556A8 002525E8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802556AC 002525EC  7D 89 03 A6 */	mtctr r12
/* 802556B0 002525F0  4E 80 04 21 */	bctrl 
/* 802556B4 002525F4  7C 7D 1B 79 */	or. r29, r3, r3
/* 802556B8 002525F8  41 82 01 4C */	beq lbl_80255804
/* 802556BC 002525FC  4B E7 3E E5 */	bl rand
/* 802556C0 00252600  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802556C4 00252604  3C 00 43 30 */	lis r0, 0x4330
/* 802556C8 00252608  90 61 00 84 */	stw r3, 0x84(r1)
/* 802556CC 0025260C  C8 42 C6 78 */	lfd f2, lbl_8051A9D8@sda21(r2)
/* 802556D0 00252610  90 01 00 80 */	stw r0, 0x80(r1)
/* 802556D4 00252614  C0 62 C6 5C */	lfs f3, lbl_8051A9BC@sda21(r2)
/* 802556D8 00252618  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 802556DC 0025261C  C0 22 C6 60 */	lfs f1, lbl_8051A9C0@sda21(r2)
/* 802556E0 00252620  EC 80 10 28 */	fsubs f4, f0, f2
/* 802556E4 00252624  C0 02 C6 48 */	lfs f0, lbl_8051A9A8@sda21(r2)
/* 802556E8 00252628  C0 42 C6 64 */	lfs f2, lbl_8051A9C4@sda21(r2)
/* 802556EC 0025262C  EC 63 01 32 */	fmuls f3, f3, f4
/* 802556F0 00252630  EC 63 08 24 */	fdivs f3, f3, f1
/* 802556F4 00252634  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802556F8 00252638  40 80 00 30 */	bge lbl_80255728
/* 802556FC 0025263C  C0 02 C6 68 */	lfs f0, lbl_8051A9C8@sda21(r2)
/* 80255700 00252640  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80255704 00252644  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80255708 00252648  EC 03 00 32 */	fmuls f0, f3, f0
/* 8025570C 0025264C  FC 00 00 1E */	fctiwz f0, f0
/* 80255710 00252650  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 80255714 00252654  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 80255718 00252658  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025571C 0025265C  7C 03 04 2E */	lfsx f0, r3, r0
/* 80255720 00252660  FC 20 00 50 */	fneg f1, f0
/* 80255724 00252664  48 00 00 28 */	b lbl_8025574C
lbl_80255728:
/* 80255728 00252668  C0 02 C6 6C */	lfs f0, lbl_8051A9CC@sda21(r2)
/* 8025572C 0025266C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80255730 00252670  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80255734 00252674  EC 03 00 32 */	fmuls f0, f3, f0
/* 80255738 00252678  FC 00 00 1E */	fctiwz f0, f0
/* 8025573C 0025267C  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 80255740 00252680  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80255744 00252684  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80255748 00252688  7C 23 04 2E */	lfsx f1, r3, r0
lbl_8025574C:
/* 8025574C 0025268C  C0 02 C6 48 */	lfs f0, lbl_8051A9A8@sda21(r2)
/* 80255750 00252690  EC 82 00 72 */	fmuls f4, f2, f1
/* 80255754 00252694  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80255758 00252698  40 80 00 08 */	bge lbl_80255760
/* 8025575C 0025269C  FC 60 18 50 */	fneg f3, f3
lbl_80255760:
/* 80255760 002526A0  C0 02 C6 6C */	lfs f0, lbl_8051A9CC@sda21(r2)
/* 80255764 002526A4  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 80255768 002526A8  81 3C 02 D8 */	lwz r9, 0x2d8(r28)
/* 8025576C 002526AC  38 A3 A2 F4 */	addi r5, r3, __vt__Q24Game15CreatureInitArg@l
/* 80255770 002526B0  EC 03 00 32 */	fmuls f0, f3, f0
/* 80255774 002526B4  38 00 00 00 */	li r0, 0
/* 80255778 002526B8  3C C0 80 50 */	lis r6, sincosTable___5JMath@ha
/* 8025577C 002526BC  C0 22 C6 70 */	lfs f1, lbl_8051A9D0@sda21(r2)
/* 80255780 002526C0  3C 80 80 4B */	lis r4, __vt__Q24Game11ItemInitArg@ha
/* 80255784 002526C4  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80255788 002526C8  FC 40 00 1E */	fctiwz f2, f0
/* 8025578C 002526CC  38 E6 71 A0 */	addi r7, r6, sincosTable___5JMath@l
/* 80255790 002526D0  38 C4 2C 7C */	addi r6, r4, __vt__Q24Game11ItemInitArg@l
/* 80255794 002526D4  3C 60 80 4B */	lis r3, __vt__Q34Game12ItemPikihead7InitArg@ha
/* 80255798 002526D8  C0 02 C6 74 */	lfs f0, lbl_8051A9D4@sda21(r2)
/* 8025579C 002526DC  38 A3 2C 70 */	addi r5, r3, __vt__Q34Game12ItemPikihead7InitArg@l
/* 802557A0 002526E0  D8 41 00 98 */	stfd f2, 0x98(r1)
/* 802557A4 002526E4  7F A3 EB 78 */	mr r3, r29
/* 802557A8 002526E8  C0 62 C6 64 */	lfs f3, lbl_8051A9C4@sda21(r2)
/* 802557AC 002526EC  38 81 00 44 */	addi r4, r1, 0x44
/* 802557B0 002526F0  90 C1 00 44 */	stw r6, 0x44(r1)
/* 802557B4 002526F4  81 01 00 9C */	lwz r8, 0x9c(r1)
/* 802557B8 002526F8  90 A1 00 44 */	stw r5, 0x44(r1)
/* 802557BC 002526FC  55 06 1C B8 */	rlwinm r6, r8, 3, 0x12, 0x1c
/* 802557C0 00252700  7C C7 32 14 */	add r6, r7, r6
/* 802557C4 00252704  91 21 00 48 */	stw r9, 0x48(r1)
/* 802557C8 00252708  C0 46 00 04 */	lfs f2, 4(r6)
/* 802557CC 0025270C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 802557D0 00252710  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802557D4 00252714  D0 81 00 54 */	stfs f4, 0x54(r1)
/* 802557D8 00252718  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 802557DC 0025271C  98 01 00 58 */	stb r0, 0x58(r1)
/* 802557E0 00252720  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802557E4 00252724  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 802557E8 00252728  4B EE 57 E1 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802557EC 0025272C  7F A3 EB 78 */	mr r3, r29
/* 802557F0 00252730  38 81 00 38 */	addi r4, r1, 0x38
/* 802557F4 00252734  38 A0 00 00 */	li r5, 0
/* 802557F8 00252738  4B EE 59 B1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 802557FC 0025273C  80 7C 02 D8 */	lwz r3, 0x2d8(r28)
/* 80255800 00252740  4B FD A2 65 */	bl inc__Q24Game8BirthMgrFi
lbl_80255804:
/* 80255804 00252744  3B FF 00 01 */	addi r31, r31, 1
lbl_80255808:
/* 80255808 00252748  7C 1F F0 00 */	cmpw r31, r30
/* 8025580C 0025274C  41 80 FE 94 */	blt lbl_802556A0
/* 80255810 00252750  7F 83 E3 78 */	mr r3, r28
/* 80255814 00252754  48 00 03 5D */	bl createShotEffect__Q34Game3Pom3ObjFv
/* 80255818 00252758  7F 83 E3 78 */	mr r3, r28
/* 8025581C 0025275C  38 80 00 00 */	li r4, 0
/* 80255820 00252760  4B EA D1 01 */	bl setZukanVisible__Q24Game9EnemyBaseFb
/* 80255824 00252764  38 61 00 64 */	addi r3, r1, 0x64
/* 80255828 00252768  38 80 FF FF */	li r4, -1
/* 8025582C 0025276C  4B F4 A5 39 */	bl __dt__Q24Game8StickersFv
/* 80255830 00252770  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80255834 00252774  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80255838 00252778  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8025583C 0025277C  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80255840 00252780  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 80255844 00252784  7C 08 03 A6 */	mtlr r0
/* 80255848 00252788  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8025584C 0025278C  4E 80 00 20 */	blr 

.global changePomColor__Q34Game3Pom3ObjFv
changePomColor__Q34Game3Pom3ObjFv:
/* 80255850 00252790  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80255854 00252794  7C 08 02 A6 */	mflr r0
/* 80255858 00252798  90 01 00 44 */	stw r0, 0x44(r1)
/* 8025585C 0025279C  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 80255860 002527A0  7C 7F 1B 78 */	mr r31, r3
/* 80255864 002527A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80255868 002527A8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8025586C 002527AC  7D 89 03 A6 */	mtctr r12
/* 80255870 002527B0  4E 80 04 21 */	bctrl 
/* 80255874 002527B4  2C 03 00 08 */	cmpwi r3, 8
/* 80255878 002527B8  40 82 01 60 */	bne lbl_802559D8
/* 8025587C 002527BC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80255880 002527C0  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 80255884 002527C4  C0 03 08 BC */	lfs f0, 0x8bc(r3)
/* 80255888 002527C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025588C 002527CC  40 81 01 3C */	ble lbl_802559C8
/* 80255890 002527D0  3C 60 80 48 */	lis r3, lbl_80484CF0@ha
/* 80255894 002527D4  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 80255898 002527D8  38 E3 4C F0 */	addi r7, r3, lbl_80484CF0@l
/* 8025589C 002527DC  3B C1 00 08 */	addi r30, r1, 8
/* 802558A0 002527E0  80 C7 00 00 */	lwz r6, 0(r7)
/* 802558A4 002527E4  3B A4 00 03 */	addi r29, r4, 3
/* 802558A8 002527E8  80 A7 00 04 */	lwz r5, 4(r7)
/* 802558AC 002527EC  3B 84 00 01 */	addi r28, r4, 1
/* 802558B0 002527F0  80 87 00 08 */	lwz r4, 8(r7)
/* 802558B4 002527F4  80 67 00 0C */	lwz r3, 0xc(r7)
/* 802558B8 002527F8  80 07 00 10 */	lwz r0, 0x10(r7)
/* 802558BC 002527FC  90 C1 00 08 */	stw r6, 8(r1)
/* 802558C0 00252800  90 A1 00 0C */	stw r5, 0xc(r1)
/* 802558C4 00252804  90 81 00 10 */	stw r4, 0x10(r1)
/* 802558C8 00252808  90 61 00 14 */	stw r3, 0x14(r1)
/* 802558CC 0025280C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802558D0 00252810  48 00 00 EC */	b lbl_802559BC
lbl_802558D4:
/* 802558D4 00252814  2C 1C 00 02 */	cmpwi r28, 2
/* 802558D8 00252818  7F 9B E3 78 */	mr r27, r28
/* 802558DC 0025281C  40 81 00 08 */	ble lbl_802558E4
/* 802558E0 00252820  3B 7C FF FD */	addi r27, r28, -3
lbl_802558E4:
/* 802558E4 00252824  57 60 10 3A */	slwi r0, r27, 2
/* 802558E8 00252828  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802558EC 0025282C  7C 9E 00 2E */	lwzx r4, r30, r0
/* 802558F0 00252830  4B F9 17 B9 */	bl hasMetPikmin__Q24Game8PlayDataFi
/* 802558F4 00252834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802558F8 00252838  41 82 00 C0 */	beq lbl_802559B8
/* 802558FC 0025283C  93 7F 02 D8 */	stw r27, 0x2d8(r31)
/* 80255900 00252840  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80255904 00252844  2C 00 00 02 */	cmpwi r0, 2
/* 80255908 00252848  41 82 00 58 */	beq lbl_80255960
/* 8025590C 0025284C  40 80 00 14 */	bge lbl_80255920
/* 80255910 00252850  2C 00 00 00 */	cmpwi r0, 0
/* 80255914 00252854  41 82 00 1C */	beq lbl_80255930
/* 80255918 00252858  40 80 00 30 */	bge lbl_80255948
/* 8025591C 0025285C  48 00 00 90 */	b lbl_802559AC
lbl_80255920:
/* 80255920 00252860  2C 00 00 04 */	cmpwi r0, 4
/* 80255924 00252864  41 82 00 70 */	beq lbl_80255994
/* 80255928 00252868  40 80 00 84 */	bge lbl_802559AC
/* 8025592C 0025286C  48 00 00 4C */	b lbl_80255978
lbl_80255930:
/* 80255930 00252870  38 60 00 32 */	li r3, 0x32
/* 80255934 00252874  38 00 00 FF */	li r0, 0xff
/* 80255938 00252878  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025593C 0025287C  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255940 00252880  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255944 00252884  48 00 00 68 */	b lbl_802559AC
lbl_80255948:
/* 80255948 00252888  38 60 00 FF */	li r3, 0xff
/* 8025594C 0025288C  38 00 00 14 */	li r0, 0x14
/* 80255950 00252890  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255954 00252894  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255958 00252898  B0 1F 02 DE */	sth r0, 0x2de(r31)
/* 8025595C 0025289C  48 00 00 50 */	b lbl_802559AC
lbl_80255960:
/* 80255960 002528A0  38 60 00 FF */	li r3, 0xff
/* 80255964 002528A4  38 00 00 14 */	li r0, 0x14
/* 80255968 002528A8  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025596C 002528AC  B0 7F 02 DC */	sth r3, 0x2dc(r31)
/* 80255970 002528B0  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255974 002528B4  48 00 00 38 */	b lbl_802559AC
lbl_80255978:
/* 80255978 002528B8  38 00 00 1C */	li r0, 0x1c
/* 8025597C 002528BC  38 60 00 00 */	li r3, 0
/* 80255980 002528C0  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 80255984 002528C4  38 00 00 34 */	li r0, 0x34
/* 80255988 002528C8  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 8025598C 002528CC  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
/* 80255990 002528D0  48 00 00 1C */	b lbl_802559AC
lbl_80255994:
/* 80255994 002528D4  38 00 00 C8 */	li r0, 0xc8
/* 80255998 002528D8  38 60 00 FF */	li r3, 0xff
/* 8025599C 002528DC  B0 1F 02 DC */	sth r0, 0x2dc(r31)
/* 802559A0 002528E0  38 00 00 DC */	li r0, 0xdc
/* 802559A4 002528E4  B0 7F 02 DE */	sth r3, 0x2de(r31)
/* 802559A8 002528E8  B0 1F 02 E0 */	sth r0, 0x2e0(r31)
lbl_802559AC:
/* 802559AC 002528EC  C0 02 C6 48 */	lfs f0, lbl_8051A9A8@sda21(r2)
/* 802559B0 002528F0  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802559B4 002528F4  48 00 00 24 */	b lbl_802559D8
lbl_802559B8:
/* 802559B8 002528F8  3B 9C 00 01 */	addi r28, r28, 1
lbl_802559BC:
/* 802559BC 002528FC  7C 1C E8 00 */	cmpw r28, r29
/* 802559C0 00252900  41 80 FF 14 */	blt lbl_802558D4
/* 802559C4 00252904  48 00 00 14 */	b lbl_802559D8
lbl_802559C8:
/* 802559C8 00252908  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802559CC 0025290C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802559D0 00252910  EC 01 00 2A */	fadds f0, f1, f0
/* 802559D4 00252914  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
lbl_802559D8:
/* 802559D8 00252918  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 802559DC 0025291C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802559E0 00252920  7C 08 03 A6 */	mtlr r0
/* 802559E4 00252924  38 21 00 40 */	addi r1, r1, 0x40
/* 802559E8 00252928  4E 80 00 20 */	blr 

.global createSwingSmokeEffect__Q34Game3Pom3ObjFv
createSwingSmokeEffect__Q34Game3Pom3ObjFv:
/* 802559EC 0025292C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802559F0 00252930  7C 08 02 A6 */	mflr r0
/* 802559F4 00252934  90 01 00 74 */	stw r0, 0x74(r1)
/* 802559F8 00252938  80 03 02 80 */	lwz r0, 0x280(r3)
/* 802559FC 0025293C  28 00 00 00 */	cmplwi r0, 0
/* 80255A00 00252940  41 82 00 E4 */	beq lbl_80255AE4
/* 80255A04 00252944  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 80255A08 00252948  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80255A0C 0025294C  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80255A10 00252950  7C 03 03 78 */	mr r3, r0
/* 80255A14 00252954  81 83 00 00 */	lwz r12, 0(r3)
/* 80255A18 00252958  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80255A1C 0025295C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80255A20 00252960  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80255A24 00252964  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80255A28 00252968  7D 89 03 A6 */	mtctr r12
/* 80255A2C 0025296C  4E 80 04 21 */	bctrl 
/* 80255A30 00252970  C0 03 00 00 */	lfs f0, 0(r3)
/* 80255A34 00252974  38 A0 00 00 */	li r5, 0
/* 80255A38 00252978  81 01 00 34 */	lwz r8, 0x34(r1)
/* 80255A3C 0025297C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80255A40 00252980  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80255A44 00252984  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80255A48 00252988  80 C1 00 3C */	lwz r6, 0x3c(r1)
/* 80255A4C 0025298C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80255A50 00252990  80 E1 00 38 */	lwz r7, 0x38(r1)
/* 80255A54 00252994  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 80255A58 00252998  91 01 00 08 */	stw r8, 8(r1)
/* 80255A5C 0025299C  39 64 A7 EC */	addi r11, r4, __vt__Q23efx3Arg@l
/* 80255A60 002529A0  C0 02 C6 80 */	lfs f0, lbl_8051A9E0@sda21(r2)
/* 80255A64 002529A4  3C 80 80 4B */	lis r4, __vt__Q23efx8ArgScale@ha
/* 80255A68 002529A8  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80255A6C 002529AC  39 23 6A 50 */	addi r9, r3, __vt__Q23efx8TSimple3@l
/* 80255A70 002529B0  C0 61 00 08 */	lfs f3, 8(r1)
/* 80255A74 002529B4  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 80255A78 002529B8  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80255A7C 002529BC  39 00 00 54 */	li r8, 0x54
/* 80255A80 002529C0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80255A84 002529C4  38 E0 00 55 */	li r7, 0x55
/* 80255A88 002529C8  90 01 00 40 */	stw r0, 0x40(r1)
/* 80255A8C 002529CC  38 C0 00 56 */	li r6, 0x56
/* 80255A90 002529D0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80255A94 002529D4  39 44 A2 DC */	addi r10, r4, __vt__Q23efx8ArgScale@l
/* 80255A98 002529D8  91 61 00 58 */	stw r11, 0x58(r1)
/* 80255A9C 002529DC  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80255AA0 002529E0  38 61 00 40 */	addi r3, r1, 0x40
/* 80255AA4 002529E4  38 81 00 58 */	addi r4, r1, 0x58
/* 80255AA8 002529E8  91 21 00 40 */	stw r9, 0x40(r1)
/* 80255AAC 002529EC  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 80255AB0 002529F0  D0 41 00 60 */	stfs f2, 0x60(r1)
/* 80255AB4 002529F4  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 80255AB8 002529F8  91 41 00 58 */	stw r10, 0x58(r1)
/* 80255ABC 002529FC  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80255AC0 00252A00  B1 01 00 44 */	sth r8, 0x44(r1)
/* 80255AC4 00252A04  B0 E1 00 46 */	sth r7, 0x46(r1)
/* 80255AC8 00252A08  B0 C1 00 48 */	sth r6, 0x48(r1)
/* 80255ACC 00252A0C  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 80255AD0 00252A10  90 A1 00 50 */	stw r5, 0x50(r1)
/* 80255AD4 00252A14  90 A1 00 54 */	stw r5, 0x54(r1)
/* 80255AD8 00252A18  90 01 00 40 */	stw r0, 0x40(r1)
/* 80255ADC 00252A1C  48 17 2C F1 */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80255AE0 00252A20  48 00 00 80 */	b lbl_80255B60
lbl_80255AE4:
/* 80255AE4 00252A24  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80255AE8 00252A28  C0 83 01 94 */	lfs f4, 0x194(r3)
/* 80255AEC 00252A2C  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 80255AF0 00252A30  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 80255AF4 00252A34  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 80255AF8 00252A38  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 80255AFC 00252A3C  C0 02 C6 84 */	lfs f0, lbl_8051A9E4@sda21(r2)
/* 80255B00 00252A40  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 80255B04 00252A44  90 81 00 14 */	stw r4, 0x14(r1)
/* 80255B08 00252A48  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80255B0C 00252A4C  C0 22 C6 50 */	lfs f1, lbl_8051A9B0@sda21(r2)
/* 80255B10 00252A50  EC 42 00 28 */	fsubs f2, f2, f0
/* 80255B14 00252A54  3C 60 80 4F */	lis r3, __vt__Q23efx15TEnemyDownSmoke@ha
/* 80255B18 00252A58  38 E4 A7 EC */	addi r7, r4, __vt__Q23efx3Arg@l
/* 80255B1C 00252A5C  38 C0 00 53 */	li r6, 0x53
/* 80255B20 00252A60  38 A0 00 00 */	li r5, 0
/* 80255B24 00252A64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80255B28 00252A68  38 03 86 10 */	addi r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
/* 80255B2C 00252A6C  C0 02 C6 80 */	lfs f0, lbl_8051A9E0@sda21(r2)
/* 80255B30 00252A70  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80255B34 00252A74  38 61 00 14 */	addi r3, r1, 0x14
/* 80255B38 00252A78  38 81 00 24 */	addi r4, r1, 0x24
/* 80255B3C 00252A7C  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80255B40 00252A80  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80255B44 00252A84  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80255B48 00252A88  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 80255B4C 00252A8C  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 80255B50 00252A90  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80255B54 00252A94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80255B58 00252A98  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80255B5C 00252A9C  48 17 2C 09 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
lbl_80255B60:
/* 80255B60 00252AA0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80255B64 00252AA4  7C 08 03 A6 */	mtlr r0
/* 80255B68 00252AA8  38 21 00 70 */	addi r1, r1, 0x70
/* 80255B6C 00252AAC  4E 80 00 20 */	blr 

.global createShotEffect__Q34Game3Pom3ObjFv
createShotEffect__Q34Game3Pom3ObjFv:
/* 80255B70 00252AB0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80255B74 00252AB4  7C 08 02 A6 */	mflr r0
/* 80255B78 00252AB8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80255B7C 00252ABC  C0 02 C6 88 */	lfs f0, lbl_8051A9E8@sda21(r2)
/* 80255B80 00252AC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80255B84 00252AC4  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 80255B88 00252AC8  38 A0 00 00 */	li r5, 0
/* 80255B8C 00252ACC  38 E0 01 01 */	li r7, 0x101
/* 80255B90 00252AD0  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 80255B94 00252AD4  38 C0 01 02 */	li r6, 0x102
/* 80255B98 00252AD8  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80255B9C 00252ADC  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 80255BA0 00252AE0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 80255BA4 00252AE4  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 80255BA8 00252AE8  EC 42 00 28 */	fsubs f2, f2, f0
/* 80255BAC 00252AEC  90 81 00 08 */	stw r4, 8(r1)
/* 80255BB0 00252AF0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80255BB4 00252AF4  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 80255BB8 00252AF8  3C 60 80 4B */	lis r3, __vt__Q23efx9TOnyonLay@ha
/* 80255BBC 00252AFC  90 01 00 08 */	stw r0, 8(r1)
/* 80255BC0 00252B00  38 03 26 8C */	addi r0, r3, __vt__Q23efx9TOnyonLay@l
/* 80255BC4 00252B04  38 61 00 08 */	addi r3, r1, 8
/* 80255BC8 00252B08  90 81 00 18 */	stw r4, 0x18(r1)
/* 80255BCC 00252B0C  38 81 00 18 */	addi r4, r1, 0x18
/* 80255BD0 00252B10  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80255BD4 00252B14  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80255BD8 00252B18  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80255BDC 00252B1C  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 80255BE0 00252B20  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 80255BE4 00252B24  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80255BE8 00252B28  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80255BEC 00252B2C  90 01 00 08 */	stw r0, 8(r1)
/* 80255BF0 00252B30  48 15 94 25 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 80255BF4 00252B34  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80255BF8 00252B38  7C 08 03 A6 */	mtlr r0
/* 80255BFC 00252B3C  38 21 00 30 */	addi r1, r1, 0x30
/* 80255C00 00252B40  4E 80 00 20 */	blr 

.global createPomDeadEffect__Q34Game3Pom3ObjFv
createPomDeadEffect__Q34Game3Pom3ObjFv:
/* 80255C04 00252B44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80255C08 00252B48  7C 08 02 A6 */	mflr r0
/* 80255C0C 00252B4C  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 80255C10 00252B50  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple1@ha
/* 80255C14 00252B54  90 01 00 34 */	stw r0, 0x34(r1)
/* 80255C18 00252B58  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80255C1C 00252B5C  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 80255C20 00252B60  39 06 A7 F8 */	addi r8, r6, __vt__Q23efx5TBase@l
/* 80255C24 00252B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80255C28 00252B68  38 E5 6A 78 */	addi r7, r5, __vt__Q23efx8TSimple1@l
/* 80255C2C 00252B6C  3C 80 80 4C */	lis r4, __vt__Q23efx8TPonDead@ha
/* 80255C30 00252B70  38 C0 02 71 */	li r6, 0x271
/* 80255C34 00252B74  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80255C38 00252B78  38 04 1D 28 */	addi r0, r4, __vt__Q23efx8TPonDead@l
/* 80255C3C 00252B7C  38 A0 00 00 */	li r5, 0
/* 80255C40 00252B80  38 81 00 14 */	addi r4, r1, 0x14
/* 80255C44 00252B84  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80255C48 00252B88  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80255C4C 00252B8C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80255C50 00252B90  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80255C54 00252B94  38 61 00 08 */	addi r3, r1, 8
/* 80255C58 00252B98  91 01 00 08 */	stw r8, 8(r1)
/* 80255C5C 00252B9C  90 E1 00 08 */	stw r7, 8(r1)
/* 80255C60 00252BA0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80255C64 00252BA4  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 80255C68 00252BA8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80255C6C 00252BAC  90 01 00 08 */	stw r0, 8(r1)
/* 80255C70 00252BB0  48 15 93 15 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 80255C74 00252BB4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80255C78 00252BB8  7C 08 03 A6 */	mtlr r0
/* 80255C7C 00252BBC  38 21 00 30 */	addi r1, r1, 0x30
/* 80255C80 00252BC0  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game3Pom3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game3Pom3ObjFPQ24Game8WaterBox:
/* 80255C84 00252BC4  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game3Pom3ObjFv
outWaterCallback__Q34Game3Pom3ObjFv:
/* 80255C88 00252BC8  4E 80 00 20 */	blr 

.global isLivingThing__Q34Game3Pom3ObjFv
isLivingThing__Q34Game3Pom3ObjFv:
/* 80255C8C 00252BCC  38 60 00 00 */	li r3, 0
/* 80255C90 00252BD0  4E 80 00 20 */	blr 

.global getMouthSlots__Q34Game3Pom3ObjFv
getMouthSlots__Q34Game3Pom3ObjFv:
/* 80255C94 00252BD4  38 63 02 D0 */	addi r3, r3, 0x2d0
/* 80255C98 00252BD8  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game3Pom3ObjFv
getDownSmokeScale__Q34Game3Pom3ObjFv:
/* 80255C9C 00252BDC  C0 22 C6 8C */	lfs f1, lbl_8051A9EC@sda21(r2)
/* 80255CA0 00252BE0  4E 80 00 20 */	blr 
