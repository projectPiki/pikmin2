.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game8MaroFrog3Obj
__vt__Q34Game8MaroFrog3Obj:
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
	.4byte onInit__Q34Game4Frog3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game4Frog3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Frog3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game4Frog3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game4Frog3ObjFv
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
	.4byte collisionCallback__Q34Game4Frog3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game4Frog3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game8MaroFrog3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Frog3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Frog3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Frog3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q34Game4Frog3ObjFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q24Game9EnemyBaseFv
	.4byte "getCommonEffectPos__Q34Game4Frog3ObjFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game4Frog3ObjFv
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
	.4byte getEnemyTypeID__Q34Game8MaroFrog3ObjFv
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
	.4byte doStartStoneState__Q34Game4Frog3ObjFv
	.4byte doFinishStoneState__Q34Game4Frog3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game4Frog3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game4Frog3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game4Frog3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game4Frog3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game4Frog3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Frog3ObjFv
	.4byte doStartMovie__Q34Game4Frog3ObjFv
	.4byte doEndMovie__Q34Game4Frog3ObjFv
	.4byte setFSM__Q34Game4Frog3ObjFPQ34Game4Frog3FSM
	.4byte viewGetCollTreeOffset__Q34Game4Frog3ObjFv
	.4byte attackNaviPosition__Q34Game8MaroFrog3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@736@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte "@736@12@viewGetCollTreeOffset__Q34Game4Frog3ObjFv"
	.4byte "@736@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051AD40
lbl_8051AD40:
	.4byte 0x40490FDB
.global lbl_8051AD44
lbl_8051AD44:
	.4byte 0x3BB60B61

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game8MaroFrog3ObjFv
__ct__Q34Game8MaroFrog3ObjFv:
/* 802617E0 0025E720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802617E4 0025E724  7C 08 02 A6 */	mflr r0
/* 802617E8 0025E728  90 01 00 14 */	stw r0, 0x14(r1)
/* 802617EC 0025E72C  7C 80 07 35 */	extsh. r0, r4
/* 802617F0 0025E730  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802617F4 0025E734  7C 7F 1B 78 */	mr r31, r3
/* 802617F8 0025E738  41 82 00 24 */	beq .L_8026181C
/* 802617FC 0025E73C  38 1F 02 E0 */	addi r0, r31, 0x2e0
/* 80261800 0025E740  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80261804 0025E744  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80261808 0025E748  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8026180C 0025E74C  38 00 00 00 */	li r0, 0
/* 80261810 0025E750  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 80261814 0025E754  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 80261818 0025E758  90 1F 02 E8 */	stw r0, 0x2e8(r31)
.L_8026181C:
/* 8026181C 0025E75C  7F E3 FB 78 */	mr r3, r31
/* 80261820 0025E760  38 80 00 00 */	li r4, 0
/* 80261824 0025E764  4B FF 6D 25 */	bl __ct__Q34Game4Frog3ObjFv
/* 80261828 0025E768  3C 60 80 4C */	lis r3, __vt__Q34Game8MaroFrog3Obj@ha
/* 8026182C 0025E76C  38 1F 02 E0 */	addi r0, r31, 0x2e0
/* 80261830 0025E770  38 A3 3B 80 */	addi r5, r3, __vt__Q34Game8MaroFrog3Obj@l
/* 80261834 0025E774  7F E3 FB 78 */	mr r3, r31
/* 80261838 0025E778  90 BF 00 00 */	stw r5, 0(r31)
/* 8026183C 0025E77C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80261840 0025E780  38 A5 03 04 */	addi r5, r5, 0x304
/* 80261844 0025E784  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80261848 0025E788  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026184C 0025E78C  90 A4 00 00 */	stw r5, 0(r4)
/* 80261850 0025E790  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80261854 0025E794  7C 04 00 50 */	subf r0, r4, r0
/* 80261858 0025E798  90 04 00 0C */	stw r0, 0xc(r4)
/* 8026185C 0025E79C  48 00 04 79 */	bl createEffect__Q34Game8MaroFrog3ObjFv
/* 80261860 0025E7A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261864 0025E7A4  7F E3 FB 78 */	mr r3, r31
/* 80261868 0025E7A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026186C 0025E7AC  7C 08 03 A6 */	mtlr r0
/* 80261870 0025E7B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80261874 0025E7B4  4E 80 00 20 */	blr 

.global attackNaviPosition__Q34Game8MaroFrog3ObjFv
attackNaviPosition__Q34Game8MaroFrog3ObjFv:
/* 80261878 0025E7B8  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 8026187C 0025E7BC  7C 08 02 A6 */	mflr r0
/* 80261880 0025E7C0  90 01 01 14 */	stw r0, 0x114(r1)
/* 80261884 0025E7C4  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80261888 0025E7C8  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 8026188C 0025E7CC  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80261890 0025E7D0  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80261894 0025E7D4  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80261898 0025E7D8  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 8026189C 0025E7DC  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 802618A0 0025E7E0  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 802618A4 0025E7E4  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 802618A8 0025E7E8  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 802618AC 0025E7EC  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 802618B0 0025E7F0  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 802618B4 0025E7F4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 802618B8 0025E7F8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 802618BC 0025E7FC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 802618C0 0025E800  38 80 00 00 */	li r4, 0
/* 802618C4 0025E804  80 0D 92 E0 */	lwz r0, naviMgr__4Game@sda21(r13)
/* 802618C8 0025E808  3C A0 80 4B */	lis r5, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 802618CC 0025E80C  90 81 00 98 */	stw r4, 0x98(r1)
/* 802618D0 0025E810  38 A5 BC B4 */	addi r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
/* 802618D4 0025E814  28 04 00 00 */	cmplwi r4, 0
/* 802618D8 0025E818  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 802618DC 0025E81C  7C 7F 1B 78 */	mr r31, r3
/* 802618E0 0025E820  90 81 00 90 */	stw r4, 0x90(r1)
/* 802618E4 0025E824  90 01 00 94 */	stw r0, 0x94(r1)
/* 802618E8 0025E828  40 82 00 20 */	bne .L_80261908
/* 802618EC 0025E82C  7C 03 03 78 */	mr r3, r0
/* 802618F0 0025E830  81 83 00 00 */	lwz r12, 0(r3)
/* 802618F4 0025E834  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802618F8 0025E838  7D 89 03 A6 */	mtctr r12
/* 802618FC 0025E83C  4E 80 04 21 */	bctrl 
/* 80261900 0025E840  90 61 00 90 */	stw r3, 0x90(r1)
/* 80261904 0025E844  48 00 03 64 */	b .L_80261C68
.L_80261908:
/* 80261908 0025E848  7C 03 03 78 */	mr r3, r0
/* 8026190C 0025E84C  81 83 00 00 */	lwz r12, 0(r3)
/* 80261910 0025E850  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80261914 0025E854  7D 89 03 A6 */	mtctr r12
/* 80261918 0025E858  4E 80 04 21 */	bctrl 
/* 8026191C 0025E85C  90 61 00 90 */	stw r3, 0x90(r1)
/* 80261920 0025E860  48 00 00 58 */	b .L_80261978
.L_80261924:
/* 80261924 0025E864  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261928 0025E868  80 81 00 90 */	lwz r4, 0x90(r1)
/* 8026192C 0025E86C  81 83 00 00 */	lwz r12, 0(r3)
/* 80261930 0025E870  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80261934 0025E874  7D 89 03 A6 */	mtctr r12
/* 80261938 0025E878  4E 80 04 21 */	bctrl 
/* 8026193C 0025E87C  7C 64 1B 78 */	mr r4, r3
/* 80261940 0025E880  80 61 00 98 */	lwz r3, 0x98(r1)
/* 80261944 0025E884  81 83 00 00 */	lwz r12, 0(r3)
/* 80261948 0025E888  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026194C 0025E88C  7D 89 03 A6 */	mtctr r12
/* 80261950 0025E890  4E 80 04 21 */	bctrl 
/* 80261954 0025E894  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80261958 0025E898  40 82 03 10 */	bne .L_80261C68
/* 8026195C 0025E89C  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261960 0025E8A0  80 81 00 90 */	lwz r4, 0x90(r1)
/* 80261964 0025E8A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80261968 0025E8A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026196C 0025E8AC  7D 89 03 A6 */	mtctr r12
/* 80261970 0025E8B0  4E 80 04 21 */	bctrl 
/* 80261974 0025E8B4  90 61 00 90 */	stw r3, 0x90(r1)
.L_80261978:
/* 80261978 0025E8B8  81 81 00 8C */	lwz r12, 0x8c(r1)
/* 8026197C 0025E8BC  38 61 00 8C */	addi r3, r1, 0x8c
/* 80261980 0025E8C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80261984 0025E8C4  7D 89 03 A6 */	mtctr r12
/* 80261988 0025E8C8  4E 80 04 21 */	bctrl 
/* 8026198C 0025E8CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80261990 0025E8D0  41 82 FF 94 */	beq .L_80261924
/* 80261994 0025E8D4  48 00 02 D4 */	b .L_80261C68
.L_80261998:
/* 80261998 0025E8D8  80 61 00 94 */	lwz r3, 0x94(r1)
/* 8026199C 0025E8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802619A0 0025E8E0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802619A4 0025E8E4  7D 89 03 A6 */	mtctr r12
/* 802619A8 0025E8E8  4E 80 04 21 */	bctrl 
/* 802619AC 0025E8EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802619B0 0025E8F0  7C 7E 1B 78 */	mr r30, r3
/* 802619B4 0025E8F4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802619B8 0025E8F8  7D 89 03 A6 */	mtctr r12
/* 802619BC 0025E8FC  4E 80 04 21 */	bctrl 
/* 802619C0 0025E900  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802619C4 0025E904  41 82 01 E8 */	beq .L_80261BAC
/* 802619C8 0025E908  7F C4 F3 78 */	mr r4, r30
/* 802619CC 0025E90C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802619D0 0025E910  81 9E 00 00 */	lwz r12, 0(r30)
/* 802619D4 0025E914  38 61 00 68 */	addi r3, r1, 0x68
/* 802619D8 0025E918  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 802619DC 0025E91C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802619E0 0025E920  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 802619E4 0025E924  7D 89 03 A6 */	mtctr r12
/* 802619E8 0025E928  4E 80 04 21 */	bctrl 
/* 802619EC 0025E92C  7F E4 FB 78 */	mr r4, r31
/* 802619F0 0025E930  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 802619F4 0025E934  81 9F 00 00 */	lwz r12, 0(r31)
/* 802619F8 0025E938  38 61 00 74 */	addi r3, r1, 0x74
/* 802619FC 0025E93C  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80261A00 0025E940  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80261A04 0025E944  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261A08 0025E948  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80261A0C 0025E94C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80261A10 0025E950  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80261A14 0025E954  7D 89 03 A6 */	mtctr r12
/* 80261A18 0025E958  4E 80 04 21 */	bctrl 
/* 80261A1C 0025E95C  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80261A20 0025E960  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80261A24 0025E964  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80261A28 0025E968  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80261A2C 0025E96C  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80261A30 0025E970  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80261A34 0025E974  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80261A38 0025E978  EC 21 28 28 */	fsubs f1, f1, f5
/* 80261A3C 0025E97C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80261A40 0025E980  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80261A44 0025E984  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80261A48 0025E988  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80261A4C 0025E98C  4B DD 36 BD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80261A50 0025E990  48 1B 01 81 */	bl roundAng__Ff
/* 80261A54 0025E994  81 9F 00 00 */	lwz r12, 0(r31)
/* 80261A58 0025E998  FF 40 08 90 */	fmr f26, f1
/* 80261A5C 0025E99C  7F E3 FB 78 */	mr r3, r31
/* 80261A60 0025E9A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80261A64 0025E9A4  7D 89 03 A6 */	mtctr r12
/* 80261A68 0025E9A8  4E 80 04 21 */	bctrl 
/* 80261A6C 0025E9AC  FC 40 08 90 */	fmr f2, f1
/* 80261A70 0025E9B0  FC 20 D0 90 */	fmr f1, f26
/* 80261A74 0025E9B4  48 1B 01 89 */	bl angDist__Fff
/* 80261A78 0025E9B8  7F E4 FB 78 */	mr r4, r31
/* 80261A7C 0025E9BC  FF 80 08 90 */	fmr f28, f1
/* 80261A80 0025E9C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80261A84 0025E9C4  38 61 00 14 */	addi r3, r1, 0x14
/* 80261A88 0025E9C8  3B A0 00 00 */	li r29, 0
/* 80261A8C 0025E9CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261A90 0025E9D0  7D 89 03 A6 */	mtctr r12
/* 80261A94 0025E9D4  4E 80 04 21 */	bctrl 
/* 80261A98 0025E9D8  7F C4 F3 78 */	mr r4, r30
/* 80261A9C 0025E9DC  38 61 00 08 */	addi r3, r1, 8
/* 80261AA0 0025E9E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80261AA4 0025E9E4  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 80261AA8 0025E9E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261AAC 0025E9EC  7D 89 03 A6 */	mtctr r12
/* 80261AB0 0025E9F0  4E 80 04 21 */	bctrl 
/* 80261AB4 0025E9F4  7F E4 FB 78 */	mr r4, r31
/* 80261AB8 0025E9F8  C0 01 00 08 */	lfs f0, 8(r1)
/* 80261ABC 0025E9FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80261AC0 0025EA00  38 61 00 2C */	addi r3, r1, 0x2c
/* 80261AC4 0025EA04  EF 40 E8 28 */	fsubs f26, f0, f29
/* 80261AC8 0025EA08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261ACC 0025EA0C  7D 89 03 A6 */	mtctr r12
/* 80261AD0 0025EA10  4E 80 04 21 */	bctrl 
/* 80261AD4 0025EA14  7F C4 F3 78 */	mr r4, r30
/* 80261AD8 0025EA18  38 61 00 20 */	addi r3, r1, 0x20
/* 80261ADC 0025EA1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80261AE0 0025EA20  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 80261AE4 0025EA24  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261AE8 0025EA28  7D 89 03 A6 */	mtctr r12
/* 80261AEC 0025EA2C  4E 80 04 21 */	bctrl 
/* 80261AF0 0025EA30  7F E4 FB 78 */	mr r4, r31
/* 80261AF4 0025EA34  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80261AF8 0025EA38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80261AFC 0025EA3C  38 61 00 44 */	addi r3, r1, 0x44
/* 80261B00 0025EA40  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80261B04 0025EA44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261B08 0025EA48  7D 89 03 A6 */	mtctr r12
/* 80261B0C 0025EA4C  4E 80 04 21 */	bctrl 
/* 80261B10 0025EA50  7F C4 F3 78 */	mr r4, r30
/* 80261B14 0025EA54  38 61 00 38 */	addi r3, r1, 0x38
/* 80261B18 0025EA58  81 9E 00 00 */	lwz r12, 0(r30)
/* 80261B1C 0025EA5C  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80261B20 0025EA60  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261B24 0025EA64  7D 89 03 A6 */	mtctr r12
/* 80261B28 0025EA68  4E 80 04 21 */	bctrl 
/* 80261B2C 0025EA6C  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80261B30 0025EA70  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80261B34 0025EA74  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80261B38 0025EA78  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80261B3C 0025EA7C  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 80261B40 0025EA80  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80261B44 0025EA84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80261B48 0025EA88  40 80 00 2C */	bge .L_80261B74
/* 80261B4C 0025EA8C  C0 02 C9 E4 */	lfs f0, lbl_8051AD44@sda21(r2)
/* 80261B50 0025EA90  FC 40 E2 10 */	fabs f2, f28
/* 80261B54 0025EA94  C0 22 C9 E0 */	lfs f1, lbl_8051AD40@sda21(r2)
/* 80261B58 0025EA98  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80261B5C 0025EA9C  FC 40 10 18 */	frsp f2, f2
/* 80261B60 0025EAA0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80261B64 0025EAA4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80261B68 0025EAA8  4C 40 13 82 */	cror 2, 0, 2
/* 80261B6C 0025EAAC  40 82 00 08 */	bne .L_80261B74
/* 80261B70 0025EAB0  3B A0 00 01 */	li r29, 1
.L_80261B74:
/* 80261B74 0025EAB4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80261B78 0025EAB8  41 82 00 34 */	beq .L_80261BAC
/* 80261B7C 0025EABC  7F C4 F3 78 */	mr r4, r30
/* 80261B80 0025EAC0  38 61 00 80 */	addi r3, r1, 0x80
/* 80261B84 0025EAC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80261B88 0025EAC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261B8C 0025EACC  7D 89 03 A6 */	mtctr r12
/* 80261B90 0025EAD0  4E 80 04 21 */	bctrl 
/* 80261B94 0025EAD4  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80261B98 0025EAD8  C0 41 00 88 */	lfs f2, 0x88(r1)
/* 80261B9C 0025EADC  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80261BA0 0025EAE0  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80261BA4 0025EAE4  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80261BA8 0025EAE8  D0 5F 02 D0 */	stfs f2, 0x2d0(r31)
.L_80261BAC:
/* 80261BAC 0025EAEC  80 01 00 98 */	lwz r0, 0x98(r1)
/* 80261BB0 0025EAF0  28 00 00 00 */	cmplwi r0, 0
/* 80261BB4 0025EAF4  40 82 00 24 */	bne .L_80261BD8
/* 80261BB8 0025EAF8  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261BBC 0025EAFC  80 81 00 90 */	lwz r4, 0x90(r1)
/* 80261BC0 0025EB00  81 83 00 00 */	lwz r12, 0(r3)
/* 80261BC4 0025EB04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80261BC8 0025EB08  7D 89 03 A6 */	mtctr r12
/* 80261BCC 0025EB0C  4E 80 04 21 */	bctrl 
/* 80261BD0 0025EB10  90 61 00 90 */	stw r3, 0x90(r1)
/* 80261BD4 0025EB14  48 00 00 94 */	b .L_80261C68
.L_80261BD8:
/* 80261BD8 0025EB18  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261BDC 0025EB1C  80 81 00 90 */	lwz r4, 0x90(r1)
/* 80261BE0 0025EB20  81 83 00 00 */	lwz r12, 0(r3)
/* 80261BE4 0025EB24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80261BE8 0025EB28  7D 89 03 A6 */	mtctr r12
/* 80261BEC 0025EB2C  4E 80 04 21 */	bctrl 
/* 80261BF0 0025EB30  90 61 00 90 */	stw r3, 0x90(r1)
/* 80261BF4 0025EB34  48 00 00 58 */	b .L_80261C4C
.L_80261BF8:
/* 80261BF8 0025EB38  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261BFC 0025EB3C  80 81 00 90 */	lwz r4, 0x90(r1)
/* 80261C00 0025EB40  81 83 00 00 */	lwz r12, 0(r3)
/* 80261C04 0025EB44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80261C08 0025EB48  7D 89 03 A6 */	mtctr r12
/* 80261C0C 0025EB4C  4E 80 04 21 */	bctrl 
/* 80261C10 0025EB50  7C 64 1B 78 */	mr r4, r3
/* 80261C14 0025EB54  80 61 00 98 */	lwz r3, 0x98(r1)
/* 80261C18 0025EB58  81 83 00 00 */	lwz r12, 0(r3)
/* 80261C1C 0025EB5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80261C20 0025EB60  7D 89 03 A6 */	mtctr r12
/* 80261C24 0025EB64  4E 80 04 21 */	bctrl 
/* 80261C28 0025EB68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80261C2C 0025EB6C  40 82 00 3C */	bne .L_80261C68
/* 80261C30 0025EB70  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261C34 0025EB74  80 81 00 90 */	lwz r4, 0x90(r1)
/* 80261C38 0025EB78  81 83 00 00 */	lwz r12, 0(r3)
/* 80261C3C 0025EB7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80261C40 0025EB80  7D 89 03 A6 */	mtctr r12
/* 80261C44 0025EB84  4E 80 04 21 */	bctrl 
/* 80261C48 0025EB88  90 61 00 90 */	stw r3, 0x90(r1)
.L_80261C4C:
/* 80261C4C 0025EB8C  81 81 00 8C */	lwz r12, 0x8c(r1)
/* 80261C50 0025EB90  38 61 00 8C */	addi r3, r1, 0x8c
/* 80261C54 0025EB94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80261C58 0025EB98  7D 89 03 A6 */	mtctr r12
/* 80261C5C 0025EB9C  4E 80 04 21 */	bctrl 
/* 80261C60 0025EBA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80261C64 0025EBA4  41 82 FF 94 */	beq .L_80261BF8
.L_80261C68:
/* 80261C68 0025EBA8  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80261C6C 0025EBAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80261C70 0025EBB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80261C74 0025EBB4  7D 89 03 A6 */	mtctr r12
/* 80261C78 0025EBB8  4E 80 04 21 */	bctrl 
/* 80261C7C 0025EBBC  80 81 00 90 */	lwz r4, 0x90(r1)
/* 80261C80 0025EBC0  7C 04 18 40 */	cmplw r4, r3
/* 80261C84 0025EBC4  40 82 FD 14 */	bne .L_80261998
/* 80261C88 0025EBC8  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80261C8C 0025EBCC  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80261C90 0025EBD0  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80261C94 0025EBD4  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80261C98 0025EBD8  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80261C9C 0025EBDC  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80261CA0 0025EBE0  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80261CA4 0025EBE4  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80261CA8 0025EBE8  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80261CAC 0025EBEC  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80261CB0 0025EBF0  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80261CB4 0025EBF4  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80261CB8 0025EBF8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80261CBC 0025EBFC  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80261CC0 0025EC00  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80261CC4 0025EC04  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80261CC8 0025EC08  7C 08 03 A6 */	mtlr r0
/* 80261CCC 0025EC0C  38 21 01 10 */	addi r1, r1, 0x110
/* 80261CD0 0025EC10  4E 80 00 20 */	blr 

.global createEffect__Q34Game8MaroFrog3ObjFv
createEffect__Q34Game8MaroFrog3ObjFv:
/* 80261CD4 0025EC14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261CD8 0025EC18  7C 08 02 A6 */	mflr r0
/* 80261CDC 0025EC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261CE0 0025EC20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261CE4 0025EC24  7C 7F 1B 78 */	mr r31, r3
/* 80261CE8 0025EC28  38 60 00 14 */	li r3, 0x14
/* 80261CEC 0025EC2C  4B DC 21 B9 */	bl __nw__FUl
/* 80261CF0 0025EC30  28 03 00 00 */	cmplwi r3, 0
/* 80261CF4 0025EC34  41 82 00 78 */	beq .L_80261D6C
/* 80261CF8 0025EC38  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80261CFC 0025EC3C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80261D00 0025EC40  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80261D04 0025EC44  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80261D08 0025EC48  90 03 00 00 */	stw r0, 0(r3)
/* 80261D0C 0025EC4C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80261D10 0025EC50  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80261D14 0025EC54  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80261D18 0025EC58  90 03 00 04 */	stw r0, 4(r3)
/* 80261D1C 0025EC5C  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 80261D20 0025EC60  3C 80 80 4C */	lis r4, __vt__Q23efx9TFrogPota@ha
/* 80261D24 0025EC64  38 05 00 14 */	addi r0, r5, 0x14
/* 80261D28 0025EC68  90 A3 00 00 */	stw r5, 0(r3)
/* 80261D2C 0025EC6C  38 84 24 5C */	addi r4, r4, __vt__Q23efx9TFrogPota@l
/* 80261D30 0025EC70  39 20 00 00 */	li r9, 0
/* 80261D34 0025EC74  39 00 02 B2 */	li r8, 0x2b2
/* 80261D38 0025EC78  90 03 00 04 */	stw r0, 4(r3)
/* 80261D3C 0025EC7C  38 C7 00 14 */	addi r6, r7, 0x14
/* 80261D40 0025EC80  38 A0 00 62 */	li r5, 0x62
/* 80261D44 0025EC84  38 04 00 14 */	addi r0, r4, 0x14
/* 80261D48 0025EC88  91 23 00 08 */	stw r9, 8(r3)
/* 80261D4C 0025EC8C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80261D50 0025EC90  99 23 00 0E */	stb r9, 0xe(r3)
/* 80261D54 0025EC94  90 E3 00 00 */	stw r7, 0(r3)
/* 80261D58 0025EC98  90 C3 00 04 */	stw r6, 4(r3)
/* 80261D5C 0025EC9C  91 23 00 10 */	stw r9, 0x10(r3)
/* 80261D60 0025ECA0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80261D64 0025ECA4  90 83 00 00 */	stw r4, 0(r3)
/* 80261D68 0025ECA8  90 03 00 04 */	stw r0, 4(r3)
.L_80261D6C:
/* 80261D6C 0025ECAC  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 80261D70 0025ECB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261D74 0025ECB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261D78 0025ECB8  7C 08 03 A6 */	mtlr r0
/* 80261D7C 0025ECBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80261D80 0025ECC0  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game8MaroFrog3ObjFv
getEnemyTypeID__Q34Game8MaroFrog3ObjFv:
/* 80261D84 0025ECC4  38 60 00 12 */	li r3, 0x12
/* 80261D88 0025ECC8  4E 80 00 20 */	blr 
