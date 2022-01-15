.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game9RedKabuto3Obj
__vt__Q34Game9RedKabuto3Obj:
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
	.4byte __dt__Q34Game9RedKabuto3ObjFv
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
	.4byte changeMaterial__Q34Game9RedKabuto3ObjFv
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
	.4byte getEnemyTypeID__Q34Game9RedKabuto3ObjFv
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
.global __ct__Q34Game9RedKabuto3ObjFv
__ct__Q34Game9RedKabuto3ObjFv:
/* 80300158 002FD098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030015C 002FD09C  7C 08 02 A6 */	mflr r0
/* 80300160 002FD0A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80300164 002FD0A4  7C 80 07 35 */	extsh. r0, r4
/* 80300168 002FD0A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030016C 002FD0AC  7C 7F 1B 78 */	mr r31, r3
/* 80300170 002FD0B0  41 82 00 24 */	beq lbl_80300194
/* 80300174 002FD0B4  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 80300178 002FD0B8  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8030017C 002FD0BC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80300180 002FD0C0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80300184 002FD0C4  38 00 00 00 */	li r0, 0
/* 80300188 002FD0C8  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 8030018C 002FD0CC  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 80300190 002FD0D0  90 1F 02 EC */	stw r0, 0x2ec(r31)
lbl_80300194:
/* 80300194 002FD0D4  7F E3 FB 78 */	mr r3, r31
/* 80300198 002FD0D8  38 80 00 00 */	li r4, 0
/* 8030019C 002FD0DC  4B FE 3F DD */	bl __ct__Q34Game6Kabuto3ObjFv
/* 803001A0 002FD0E0  3C 60 80 4D */	lis r3, __vt__Q34Game9RedKabuto3Obj@ha
/* 803001A4 002FD0E4  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 803001A8 002FD0E8  38 A3 6A 68 */	addi r5, r3, __vt__Q34Game9RedKabuto3Obj@l
/* 803001AC 002FD0EC  7F E3 FB 78 */	mr r3, r31
/* 803001B0 002FD0F0  90 BF 00 00 */	stw r5, 0(r31)
/* 803001B4 002FD0F4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 803001B8 002FD0F8  38 A5 03 1C */	addi r5, r5, 0x31c
/* 803001BC 002FD0FC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 803001C0 002FD100  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 803001C4 002FD104  90 A4 00 00 */	stw r5, 0(r4)
/* 803001C8 002FD108  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 803001CC 002FD10C  7C 04 00 50 */	subf r0, r4, r0
/* 803001D0 002FD110  90 04 00 0C */	stw r0, 0xc(r4)
/* 803001D4 002FD114  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803001D8 002FD118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803001DC 002FD11C  7C 08 03 A6 */	mtlr r0
/* 803001E0 002FD120  38 21 00 10 */	addi r1, r1, 0x10
/* 803001E4 002FD124  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game9RedKabuto3ObjFv
changeMaterial__Q34Game9RedKabuto3ObjFv:
/* 803001E8 002FD128  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803001EC 002FD12C  7C 08 02 A6 */	mflr r0
/* 803001F0 002FD130  90 01 00 24 */	stw r0, 0x24(r1)
/* 803001F4 002FD134  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803001F8 002FD138  7C 7B 1B 78 */	mr r27, r3
/* 803001FC 002FD13C  80 63 01 80 */	lwz r3, 0x180(r3)
/* 80300200 002FD140  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 80300204 002FD144  81 83 00 00 */	lwz r12, 0(r3)
/* 80300208 002FD148  83 A4 00 08 */	lwz r29, 8(r4)
/* 8030020C 002FD14C  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 80300210 002FD150  83 DD 00 04 */	lwz r30, 4(r29)
/* 80300214 002FD154  7D 89 03 A6 */	mtctr r12
/* 80300218 002FD158  4E 80 04 21 */	bctrl 
/* 8030021C 002FD15C  7C 7F 1B 78 */	mr r31, r3
/* 80300220 002FD160  7F A3 EB 78 */	mr r3, r29
/* 80300224 002FD164  81 9D 00 00 */	lwz r12, 0(r29)
/* 80300228 002FD168  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8030022C 002FD16C  7D 89 03 A6 */	mtctr r12
/* 80300230 002FD170  4E 80 04 21 */	bctrl 
/* 80300234 002FD174  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 80300238 002FD178  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8030023C 002FD17C  88 1F 00 00 */	lbz r0, 0(r31)
/* 80300240 002FD180  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 80300244 002FD184  80 64 00 08 */	lwz r3, 8(r4)
/* 80300248 002FD188  3B 80 00 00 */	li r28, 0
/* 8030024C 002FD18C  80 63 00 04 */	lwz r3, 4(r3)
/* 80300250 002FD190  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 80300254 002FD194  80 64 00 04 */	lwz r3, 4(r4)
/* 80300258 002FD198  98 03 00 00 */	stb r0, 0(r3)
/* 8030025C 002FD19C  88 1F 00 01 */	lbz r0, 1(r31)
/* 80300260 002FD1A0  98 03 00 01 */	stb r0, 1(r3)
/* 80300264 002FD1A4  A0 1F 00 02 */	lhz r0, 2(r31)
/* 80300268 002FD1A8  B0 03 00 02 */	sth r0, 2(r3)
/* 8030026C 002FD1AC  A0 1F 00 04 */	lhz r0, 4(r31)
/* 80300270 002FD1B0  B0 03 00 04 */	sth r0, 4(r3)
/* 80300274 002FD1B4  88 1F 00 06 */	lbz r0, 6(r31)
/* 80300278 002FD1B8  98 03 00 06 */	stb r0, 6(r3)
/* 8030027C 002FD1BC  88 1F 00 07 */	lbz r0, 7(r31)
/* 80300280 002FD1C0  98 03 00 07 */	stb r0, 7(r3)
/* 80300284 002FD1C4  88 1F 00 08 */	lbz r0, 8(r31)
/* 80300288 002FD1C8  98 03 00 08 */	stb r0, 8(r3)
/* 8030028C 002FD1CC  88 1F 00 09 */	lbz r0, 9(r31)
/* 80300290 002FD1D0  98 03 00 09 */	stb r0, 9(r3)
/* 80300294 002FD1D4  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80300298 002FD1D8  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8030029C 002FD1DC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803002A0 002FD1E0  90 03 00 0C */	stw r0, 0xc(r3)
/* 803002A4 002FD1E4  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 803002A8 002FD1E8  98 03 00 10 */	stb r0, 0x10(r3)
/* 803002AC 002FD1EC  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 803002B0 002FD1F0  98 03 00 11 */	stb r0, 0x11(r3)
/* 803002B4 002FD1F4  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 803002B8 002FD1F8  98 03 00 12 */	stb r0, 0x12(r3)
/* 803002BC 002FD1FC  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 803002C0 002FD200  98 03 00 13 */	stb r0, 0x13(r3)
/* 803002C4 002FD204  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 803002C8 002FD208  98 03 00 14 */	stb r0, 0x14(r3)
/* 803002CC 002FD20C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 803002D0 002FD210  98 03 00 15 */	stb r0, 0x15(r3)
/* 803002D4 002FD214  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 803002D8 002FD218  98 03 00 16 */	stb r0, 0x16(r3)
/* 803002DC 002FD21C  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 803002E0 002FD220  98 03 00 17 */	stb r0, 0x17(r3)
/* 803002E4 002FD224  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 803002E8 002FD228  98 03 00 18 */	stb r0, 0x18(r3)
/* 803002EC 002FD22C  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 803002F0 002FD230  98 03 00 19 */	stb r0, 0x19(r3)
/* 803002F4 002FD234  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 803002F8 002FD238  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 803002FC 002FD23C  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80300300 002FD240  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80300304 002FD244  80 64 00 04 */	lwz r3, 4(r4)
/* 80300308 002FD248  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8030030C 002FD24C  7C 1F 02 14 */	add r0, r31, r0
/* 80300310 002FD250  7C 03 00 50 */	subf r0, r3, r0
/* 80300314 002FD254  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80300318 002FD258  80 64 00 04 */	lwz r3, 4(r4)
/* 8030031C 002FD25C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80300320 002FD260  7C 1F 02 14 */	add r0, r31, r0
/* 80300324 002FD264  7C 03 00 50 */	subf r0, r3, r0
/* 80300328 002FD268  90 03 00 0C */	stw r0, 0xc(r3)
/* 8030032C 002FD26C  48 00 00 3C */	b lbl_80300368
lbl_80300330:
/* 80300330 002FD270  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 80300334 002FD274  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 80300338 002FD278  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8030033C 002FD27C  7C 84 1A 14 */	add r4, r4, r3
/* 80300340 002FD280  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 80300344 002FD284  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 80300348 002FD288  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8030034C 002FD28C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80300350 002FD290  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80300354 002FD294  81 83 00 00 */	lwz r12, 0(r3)
/* 80300358 002FD298  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8030035C 002FD29C  7D 89 03 A6 */	mtctr r12
/* 80300360 002FD2A0  4E 80 04 21 */	bctrl 
/* 80300364 002FD2A4  3B 9C 00 01 */	addi r28, r28, 1
lbl_80300368:
/* 80300368 002FD2A8  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8030036C 002FD2AC  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 80300370 002FD2B0  7C 03 00 40 */	cmplw r3, r0
/* 80300374 002FD2B4  41 80 FF BC */	blt lbl_80300330
/* 80300378 002FD2B8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8030037C 002FD2BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80300380 002FD2C0  7C 08 03 A6 */	mtlr r0
/* 80300384 002FD2C4  38 21 00 20 */	addi r1, r1, 0x20
/* 80300388 002FD2C8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game9RedKabuto3ObjFv
getEnemyTypeID__Q34Game9RedKabuto3ObjFv:
/* 8030038C 002FD2CC  38 60 00 5F */	li r3, 0x5f
/* 80300390 002FD2D0  4E 80 00 20 */	blr 
