.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx9THibaFire
__vt__Q23efx9THibaFire:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
.global __vt__Q34Game4Hiba3Obj
__vt__Q34Game4Hiba3Obj:
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
	.4byte onInit__Q34Game4Hiba3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game4Hiba3ObjFf
	.4byte doDirectDraw__Q34Game4Hiba3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game4Hiba3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game4Hiba3ObjFv
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
	.4byte isLivingThing__Q34Game4Hiba3ObjFv
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
	.4byte getShadowParam__Q34Game4Hiba3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Hiba3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Hiba3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Hiba3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Hiba3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game4Hiba3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game4Hiba3ObjFPQ24Game8CreatureR10Vector3<f>f"
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
	.4byte lifeRecover__Q34Game4Hiba3ObjFv
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
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game4Hiba3ObjFPQ34Game4Hiba3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@716@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@716@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@716@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@716@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@716@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@716@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051B020
lbl_8051B020:
	.4byte 0x00000000
.global lbl_8051B024
lbl_8051B024:
	.4byte 0x47000000
.global lbl_8051B028
lbl_8051B028:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051B030
lbl_8051B030:
	.float 1.0
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Hiba3ObjFv
__ct__Q34Game4Hiba3ObjFv:
/* 8026BE8C 00268DCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026BE90 00268DD0  7C 08 02 A6 */	mflr r0
/* 8026BE94 00268DD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026BE98 00268DD8  7C 80 07 35 */	extsh. r0, r4
/* 8026BE9C 00268DDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026BEA0 00268DE0  7C 7F 1B 78 */	mr r31, r3
/* 8026BEA4 00268DE4  93 C1 00 08 */	stw r30, 8(r1)
/* 8026BEA8 00268DE8  41 82 00 24 */	beq lbl_8026BECC
/* 8026BEAC 00268DEC  38 1F 02 CC */	addi r0, r31, 0x2cc
/* 8026BEB0 00268DF0  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8026BEB4 00268DF4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8026BEB8 00268DF8  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8026BEBC 00268DFC  38 00 00 00 */	li r0, 0
/* 8026BEC0 00268E00  90 7F 02 CC */	stw r3, 0x2cc(r31)
/* 8026BEC4 00268E04  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 8026BEC8 00268E08  90 1F 02 D4 */	stw r0, 0x2d4(r31)
lbl_8026BECC:
/* 8026BECC 00268E0C  7F E3 FB 78 */	mr r3, r31
/* 8026BED0 00268E10  38 80 00 00 */	li r4, 0
/* 8026BED4 00268E14  4B E9 54 CD */	bl __ct__Q24Game9EnemyBaseFv
/* 8026BED8 00268E18  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba3Obj@ha
/* 8026BEDC 00268E1C  38 1F 02 CC */	addi r0, r31, 0x2cc
/* 8026BEE0 00268E20  38 A3 54 D4 */	addi r5, r3, __vt__Q34Game4Hiba3Obj@l
/* 8026BEE4 00268E24  38 60 00 2C */	li r3, 0x2c
/* 8026BEE8 00268E28  90 BF 00 00 */	stw r5, 0(r31)
/* 8026BEEC 00268E2C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8026BEF0 00268E30  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8026BEF4 00268E34  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8026BEF8 00268E38  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026BEFC 00268E3C  90 A4 00 00 */	stw r5, 0(r4)
/* 8026BF00 00268E40  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026BF04 00268E44  7C 04 00 50 */	subf r0, r4, r0
/* 8026BF08 00268E48  90 04 00 0C */	stw r0, 0xc(r4)
/* 8026BF0C 00268E4C  4B DB 7F 99 */	bl __nw__FUl
/* 8026BF10 00268E50  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026BF14 00268E54  41 82 00 44 */	beq lbl_8026BF58
/* 8026BF18 00268E58  4B EB BA 5D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8026BF1C 00268E5C  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba14ProperAnimator@ha
/* 8026BF20 00268E60  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8026BF24 00268E64  38 03 52 C0 */	addi r0, r3, __vt__Q34Game4Hiba14ProperAnimator@l
/* 8026BF28 00268E68  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8026BF2C 00268E6C  90 1E 00 00 */	stw r0, 0(r30)
/* 8026BF30 00268E70  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8026BF34 00268E74  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8026BF38 00268E78  38 00 00 00 */	li r0, 0
/* 8026BF3C 00268E7C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8026BF40 00268E80  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8026BF44 00268E84  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026BF48 00268E88  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8026BF4C 00268E8C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8026BF50 00268E90  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026BF54 00268E94  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8026BF58:
/* 8026BF58 00268E98  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8026BF5C 00268E9C  38 60 00 1C */	li r3, 0x1c
/* 8026BF60 00268EA0  4B DB 7F 45 */	bl __nw__FUl
/* 8026BF64 00268EA4  7C 64 1B 79 */	or. r4, r3, r3
/* 8026BF68 00268EA8  41 82 00 24 */	beq lbl_8026BF8C
/* 8026BF6C 00268EAC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8026BF70 00268EB0  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba3FSM@ha
/* 8026BF74 00268EB4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8026BF78 00268EB8  38 A0 FF FF */	li r5, -1
/* 8026BF7C 00268EBC  90 04 00 00 */	stw r0, 0(r4)
/* 8026BF80 00268EC0  38 03 52 98 */	addi r0, r3, __vt__Q34Game4Hiba3FSM@l
/* 8026BF84 00268EC4  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8026BF88 00268EC8  90 04 00 00 */	stw r0, 0(r4)
lbl_8026BF8C:
/* 8026BF8C 00268ECC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026BF90 00268ED0  7F E3 FB 78 */	mr r3, r31
/* 8026BF94 00268ED4  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8026BF98 00268ED8  7D 89 03 A6 */	mtctr r12
/* 8026BF9C 00268EDC  4E 80 04 21 */	bctrl 
/* 8026BFA0 00268EE0  7F E3 FB 78 */	mr r3, r31
/* 8026BFA4 00268EE4  48 00 05 29 */	bl createEffect__Q34Game4Hiba3ObjFv
/* 8026BFA8 00268EE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026BFAC 00268EEC  7F E3 FB 78 */	mr r3, r31
/* 8026BFB0 00268EF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026BFB4 00268EF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026BFB8 00268EF8  7C 08 03 A6 */	mtlr r0
/* 8026BFBC 00268EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8026BFC0 00268F00  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Hiba3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Hiba3ObjFPQ24Game21EnemyInitialParamBase:
/* 8026BFC4 00268F04  4E 80 00 20 */	blr 

.global onInit__Q34Game4Hiba3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Hiba3ObjFPQ24Game15CreatureInitArg:
/* 8026BFC8 00268F08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026BFCC 00268F0C  7C 08 02 A6 */	mflr r0
/* 8026BFD0 00268F10  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026BFD4 00268F14  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8026BFD8 00268F18  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8026BFDC 00268F1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026BFE0 00268F20  7C 7F 1B 78 */	mr r31, r3
/* 8026BFE4 00268F24  4B E9 5A 75 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8026BFE8 00268F28  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026BFEC 00268F2C  7F E3 FB 78 */	mr r3, r31
/* 8026BFF0 00268F30  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 8026BFF4 00268F34  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026BFF8 00268F38  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026BFFC 00268F3C  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8026C000 00268F40  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026C004 00268F44  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026C008 00268F48  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8026C00C 00268F4C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026C010 00268F50  4B E9 B7 6D */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8026C014 00268F54  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026C018 00268F58  7F E3 FB 78 */	mr r3, r31
/* 8026C01C 00268F5C  64 00 00 40 */	oris r0, r0, 0x40
/* 8026C020 00268F60  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026C024 00268F64  4B E9 59 E5 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 8026C028 00268F68  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8026C02C 00268F6C  7F E4 FB 78 */	mr r4, r31
/* 8026C030 00268F70  4B FD 5C 39 */	bl killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8026C034 00268F74  C0 02 CC C0 */	lfs f0, lbl_8051B020@sda21(r2)
/* 8026C038 00268F78  38 00 00 01 */	li r0, 1
/* 8026C03C 00268F7C  7F E3 FB 78 */	mr r3, r31
/* 8026C040 00268F80  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026C044 00268F84  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8026C048 00268F88  48 00 04 35 */	bl setupLodParms__Q34Game4Hiba3ObjFv
/* 8026C04C 00268F8C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026C050 00268F90  C3 E3 08 1C */	lfs f31, 0x81c(r3)
/* 8026C054 00268F94  4B E5 D5 4D */	bl rand
/* 8026C058 00268F98  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026C05C 00268F9C  3C 00 43 30 */	lis r0, 0x4330
/* 8026C060 00268FA0  90 61 00 14 */	stw r3, 0x14(r1)
/* 8026C064 00268FA4  7F E4 FB 78 */	mr r4, r31
/* 8026C068 00268FA8  C8 42 CC C8 */	lfd f2, lbl_8051B028@sda21(r2)
/* 8026C06C 00268FAC  38 C1 00 08 */	addi r6, r1, 8
/* 8026C070 00268FB0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8026C074 00268FB4  38 A0 00 01 */	li r5, 1
/* 8026C078 00268FB8  C0 02 CC C4 */	lfs f0, lbl_8051B024@sda21(r2)
/* 8026C07C 00268FBC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8026C080 00268FC0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8026C084 00268FC4  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8026C088 00268FC8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8026C08C 00268FCC  D0 01 00 08 */	stfs f0, 8(r1)
/* 8026C090 00268FD0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8026C094 00268FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C098 00268FD8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026C09C 00268FDC  7D 89 03 A6 */	mtctr r12
/* 8026C0A0 00268FE0  4E 80 04 21 */	bctrl 
/* 8026C0A4 00268FE4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8026C0A8 00268FE8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026C0AC 00268FEC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8026C0B0 00268FF0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026C0B4 00268FF4  7C 08 03 A6 */	mtlr r0
/* 8026C0B8 00268FF8  38 21 00 30 */	addi r1, r1, 0x30
/* 8026C0BC 00268FFC  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Hiba3ObjFv
doUpdate__Q34Game4Hiba3ObjFv:
/* 8026C0C0 00269000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C0C4 00269004  7C 08 02 A6 */	mflr r0
/* 8026C0C8 00269008  7C 64 1B 78 */	mr r4, r3
/* 8026C0CC 0026900C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C0D0 00269010  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8026C0D4 00269014  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C0D8 00269018  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026C0DC 0026901C  7D 89 03 A6 */	mtctr r12
/* 8026C0E0 00269020  4E 80 04 21 */	bctrl 
/* 8026C0E4 00269024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C0E8 00269028  7C 08 03 A6 */	mtlr r0
/* 8026C0EC 0026902C  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C0F0 00269030  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Hiba3ObjFR8Graphics
doDirectDraw__Q34Game4Hiba3ObjFR8Graphics:
/* 8026C0F4 00269034  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game4Hiba3ObjFR8Graphics
doDebugDraw__Q34Game4Hiba3ObjFR8Graphics:
/* 8026C0F8 00269038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C0FC 0026903C  7C 08 02 A6 */	mflr r0
/* 8026C100 00269040  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C104 00269044  4B E9 9D 69 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8026C108 00269048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C10C 0026904C  7C 08 03 A6 */	mtlr r0
/* 8026C110 00269050  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C114 00269054  4E 80 00 20 */	blr 

.global setFSM__Q34Game4Hiba3ObjFPQ34Game4Hiba3FSM
setFSM__Q34Game4Hiba3ObjFPQ34Game4Hiba3FSM:
/* 8026C118 00269058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C11C 0026905C  7C 08 02 A6 */	mflr r0
/* 8026C120 00269060  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C124 00269064  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026C128 00269068  7C 7F 1B 78 */	mr r31, r3
/* 8026C12C 0026906C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8026C130 00269070  7F E4 FB 78 */	mr r4, r31
/* 8026C134 00269074  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8026C138 00269078  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C13C 0026907C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026C140 00269080  7D 89 03 A6 */	mtctr r12
/* 8026C144 00269084  4E 80 04 21 */	bctrl 
/* 8026C148 00269088  38 00 00 00 */	li r0, 0
/* 8026C14C 0026908C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8026C150 00269090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C154 00269094  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026C158 00269098  7C 08 03 A6 */	mtlr r0
/* 8026C15C 0026909C  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C160 002690A0  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Hiba3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Hiba3ObjFRQ24Game11ShadowParam:
/* 8026C164 002690A4  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8026C168 002690A8  C0 22 CC C0 */	lfs f1, lbl_8051B020@sda21(r2)
/* 8026C16C 002690AC  D0 04 00 00 */	stfs f0, 0(r4)
/* 8026C170 002690B0  C0 02 CC D0 */	lfs f0, lbl_8051B030@sda21(r2)
/* 8026C174 002690B4  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 8026C178 002690B8  D0 44 00 04 */	stfs f2, 4(r4)
/* 8026C17C 002690BC  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 8026C180 002690C0  D0 44 00 08 */	stfs f2, 8(r4)
/* 8026C184 002690C4  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8026C188 002690C8  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8026C18C 002690CC  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 8026C190 002690D0  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 8026C194 002690D4  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 8026C198 002690D8  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart:
/* 8026C19C 002690DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026C1A0 002690E0  7C 08 02 A6 */	mflr r0
/* 8026C1A4 002690E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026C1A8 002690E8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8026C1AC 002690EC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8026C1B0 002690F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026C1B4 002690F4  FF E0 08 90 */	fmr f31, f1
/* 8026C1B8 002690F8  28 04 00 00 */	cmplwi r4, 0
/* 8026C1BC 002690FC  7C 7F 1B 78 */	mr r31, r3
/* 8026C1C0 00269100  41 82 00 38 */	beq lbl_8026C1F8
/* 8026C1C4 00269104  7C 83 23 78 */	mr r3, r4
/* 8026C1C8 00269108  81 84 00 00 */	lwz r12, 0(r4)
/* 8026C1CC 0026910C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026C1D0 00269110  7D 89 03 A6 */	mtctr r12
/* 8026C1D4 00269114  4E 80 04 21 */	bctrl 
/* 8026C1D8 00269118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026C1DC 0026911C  40 82 00 1C */	bne lbl_8026C1F8
/* 8026C1E0 00269120  FC 20 F8 90 */	fmr f1, f31
/* 8026C1E4 00269124  C0 42 CC D0 */	lfs f2, lbl_8051B030@sda21(r2)
/* 8026C1E8 00269128  7F E3 FB 78 */	mr r3, r31
/* 8026C1EC 0026912C  4B E9 9E 41 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8026C1F0 00269130  38 60 00 01 */	li r3, 1
/* 8026C1F4 00269134  48 00 00 08 */	b lbl_8026C1FC
lbl_8026C1F8:
/* 8026C1F8 00269138  38 60 00 00 */	li r3, 0
lbl_8026C1FC:
/* 8026C1FC 0026913C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8026C200 00269140  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026C204 00269144  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8026C208 00269148  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026C20C 0026914C  7C 08 03 A6 */	mtlr r0
/* 8026C210 00269150  38 21 00 20 */	addi r1, r1, 0x20
/* 8026C214 00269154  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart:
/* 8026C218 00269158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C21C 0026915C  7C 08 02 A6 */	mflr r0
/* 8026C220 00269160  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C224 00269164  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C228 00269168  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026C22C 0026916C  7D 89 03 A6 */	mtctr r12
/* 8026C230 00269170  4E 80 04 21 */	bctrl 
/* 8026C234 00269174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C238 00269178  38 60 00 01 */	li r3, 1
/* 8026C23C 0026917C  7C 08 03 A6 */	mtlr r0
/* 8026C240 00269180  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C244 00269184  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game4Hiba3ObjFPQ24Game8CreaturefP8CollPart:
/* 8026C248 00269188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C24C 0026918C  7C 08 02 A6 */	mflr r0
/* 8026C250 00269190  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C254 00269194  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C258 00269198  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026C25C 0026919C  7D 89 03 A6 */	mtctr r12
/* 8026C260 002691A0  4E 80 04 21 */	bctrl 
/* 8026C264 002691A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C268 002691A8  38 60 00 01 */	li r3, 1
/* 8026C26C 002691AC  7C 08 03 A6 */	mtlr r0
/* 8026C270 002691B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C274 002691B4  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game4Hiba3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game4Hiba3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 8026C278 002691B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C27C 002691BC  7C 08 02 A6 */	mflr r0
/* 8026C280 002691C0  38 A0 00 00 */	li r5, 0
/* 8026C284 002691C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C288 002691C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C28C 002691CC  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026C290 002691D0  7D 89 03 A6 */	mtctr r12
/* 8026C294 002691D4  4E 80 04 21 */	bctrl 
/* 8026C298 002691D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C29C 002691DC  38 60 00 01 */	li r3, 1
/* 8026C2A0 002691E0  7C 08 03 A6 */	mtlr r0
/* 8026C2A4 002691E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C2A8 002691E8  4E 80 00 20 */	blr 

.global interactFireAttack__Q34Game4Hiba3ObjFv
interactFireAttack__Q34Game4Hiba3ObjFv:
/* 8026C2AC 002691EC  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8026C2B0 002691F0  7C 08 02 A6 */	mflr r0
/* 8026C2B4 002691F4  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8026C2B8 002691F8  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 8026C2BC 002691FC  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 8026C2C0 00269200  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 8026C2C4 00269204  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 8026C2C8 00269208  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 8026C2CC 0026920C  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 8026C2D0 00269210  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8026C2D4 00269214  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8026C2D8 00269218  7C 7E 1B 78 */	mr r30, r3
/* 8026C2DC 0026921C  38 61 00 30 */	addi r3, r1, 0x30
/* 8026C2E0 00269220  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8026C2E4 00269224  38 81 00 20 */	addi r4, r1, 0x20
/* 8026C2E8 00269228  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 8026C2EC 0026922C  C0 05 05 64 */	lfs f0, 0x564(r5)
/* 8026C2F0 00269230  C0 25 05 8C */	lfs f1, 0x58c(r5)
/* 8026C2F4 00269234  C0 65 05 B4 */	lfs f3, 0x5b4(r5)
/* 8026C2F8 00269238  EF E2 00 2A */	fadds f31, f2, f0
/* 8026C2FC 0026923C  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8026C300 00269240  EF C2 08 28 */	fsubs f30, f2, f1
/* 8026C304 00269244  EF A3 00 F2 */	fmuls f29, f3, f3
/* 8026C308 00269248  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8026C30C 0026924C  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8026C310 00269250  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8026C314 00269254  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8026C318 00269258  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026C31C 0026925C  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8026C320 00269260  4B FC 20 81 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8026C324 00269264  38 00 00 01 */	li r0, 1
/* 8026C328 00269268  38 61 00 50 */	addi r3, r1, 0x50
/* 8026C32C 0026926C  98 01 00 4C */	stb r0, 0x4c(r1)
/* 8026C330 00269270  38 81 00 30 */	addi r4, r1, 0x30
/* 8026C334 00269274  4B FC 20 AD */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8026C338 00269278  38 61 00 50 */	addi r3, r1, 0x50
/* 8026C33C 0026927C  4B FC 21 21 */	bl first__Q24Game12CellIteratorFv
/* 8026C340 00269280  48 00 00 FC */	b lbl_8026C43C
lbl_8026C344:
/* 8026C344 00269284  38 61 00 50 */	addi r3, r1, 0x50
/* 8026C348 00269288  4B FC 21 FD */	bl __ml__Q24Game12CellIteratorFv
/* 8026C34C 0026928C  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C350 00269290  7C 7F 1B 78 */	mr r31, r3
/* 8026C354 00269294  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8026C358 00269298  7D 89 03 A6 */	mtctr r12
/* 8026C35C 0026929C  4E 80 04 21 */	bctrl 
/* 8026C360 002692A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026C364 002692A4  41 82 00 D0 */	beq lbl_8026C434
/* 8026C368 002692A8  7F E3 FB 78 */	mr r3, r31
/* 8026C36C 002692AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C370 002692B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026C374 002692B4  7D 89 03 A6 */	mtctr r12
/* 8026C378 002692B8  4E 80 04 21 */	bctrl 
/* 8026C37C 002692BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026C380 002692C0  40 82 00 20 */	bne lbl_8026C3A0
/* 8026C384 002692C4  7F E3 FB 78 */	mr r3, r31
/* 8026C388 002692C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C38C 002692CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026C390 002692D0  7D 89 03 A6 */	mtctr r12
/* 8026C394 002692D4  4E 80 04 21 */	bctrl 
/* 8026C398 002692D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026C39C 002692DC  41 82 00 98 */	beq lbl_8026C434
lbl_8026C3A0:
/* 8026C3A0 002692E0  7F E4 FB 78 */	mr r4, r31
/* 8026C3A4 002692E4  38 61 00 08 */	addi r3, r1, 8
/* 8026C3A8 002692E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C3AC 002692EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026C3B0 002692F0  7D 89 03 A6 */	mtctr r12
/* 8026C3B4 002692F4  4E 80 04 21 */	bctrl 
/* 8026C3B8 002692F8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8026C3BC 002692FC  C0 41 00 08 */	lfs f2, 8(r1)
/* 8026C3C0 00269300  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8026C3C4 00269304  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8026C3C8 00269308  40 81 00 6C */	ble lbl_8026C434
/* 8026C3CC 0026930C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8026C3D0 00269310  40 80 00 64 */	bge lbl_8026C434
/* 8026C3D4 00269314  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8026C3D8 00269318  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 8026C3DC 0026931C  EC 00 18 28 */	fsubs f0, f0, f3
/* 8026C3E0 00269320  EC 21 10 28 */	fsubs f1, f1, f2
/* 8026C3E4 00269324  EC 00 00 32 */	fmuls f0, f0, f0
/* 8026C3E8 00269328  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8026C3EC 0026932C  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8026C3F0 00269330  40 80 00 44 */	bge lbl_8026C434
/* 8026C3F4 00269334  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 8026C3F8 00269338  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8026C3FC 0026933C  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractFire@ha
/* 8026C400 00269340  7F E3 FB 78 */	mr r3, r31
/* 8026C404 00269344  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 8026C408 00269348  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8026C40C 0026934C  38 04 48 78 */	addi r0, r4, __vt__Q24Game12InteractFire@l
/* 8026C410 00269350  38 81 00 14 */	addi r4, r1, 0x14
/* 8026C414 00269354  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8026C418 00269358  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026C41C 0026935C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C420 00269360  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8026C424 00269364  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C428 00269368  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026C42C 0026936C  7D 89 03 A6 */	mtctr r12
/* 8026C430 00269370  4E 80 04 21 */	bctrl 
lbl_8026C434:
/* 8026C434 00269374  38 61 00 50 */	addi r3, r1, 0x50
/* 8026C438 00269378  4B FC 20 C9 */	bl next__Q24Game12CellIteratorFv
lbl_8026C43C:
/* 8026C43C 0026937C  38 61 00 50 */	addi r3, r1, 0x50
/* 8026C440 00269380  4B FC 20 F5 */	bl isDone__Q24Game12CellIteratorFv
/* 8026C444 00269384  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026C448 00269388  41 82 FE FC */	beq lbl_8026C344
/* 8026C44C 0026938C  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 8026C450 00269390  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8026C454 00269394  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 8026C458 00269398  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8026C45C 0026939C  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 8026C460 002693A0  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 8026C464 002693A4  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8026C468 002693A8  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8026C46C 002693AC  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8026C470 002693B0  7C 08 03 A6 */	mtlr r0
/* 8026C474 002693B4  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8026C478 002693B8  4E 80 00 20 */	blr 

.global setupLodParms__Q34Game4Hiba3ObjFv
setupLodParms__Q34Game4Hiba3ObjFv:
/* 8026C47C 002693BC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8026C480 002693C0  38 00 00 00 */	li r0, 0
/* 8026C484 002693C4  C0 04 08 94 */	lfs f0, 0x894(r4)
/* 8026C488 002693C8  D0 03 02 64 */	stfs f0, 0x264(r3)
/* 8026C48C 002693CC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8026C490 002693D0  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 8026C494 002693D4  D0 03 02 68 */	stfs f0, 0x268(r3)
/* 8026C498 002693D8  98 03 02 6C */	stb r0, 0x26c(r3)
/* 8026C49C 002693DC  4E 80 00 20 */	blr 

.global updateEfxLod__Q34Game4Hiba3ObjFv
updateEfxLod__Q34Game4Hiba3ObjFv:
/* 8026C4A0 002693E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C4A4 002693E4  7C 08 02 A6 */	mflr r0
/* 8026C4A8 002693E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C4AC 002693EC  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 8026C4B0 002693F0  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 8026C4B4 002693F4  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8026C4B8 002693F8  48 14 84 F9 */	bl setRateLOD__Q23efx9THibaFireFi
/* 8026C4BC 002693FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C4C0 00269400  7C 08 03 A6 */	mtlr r0
/* 8026C4C4 00269404  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C4C8 00269408  4E 80 00 20 */	blr 

.global createEffect__Q34Game4Hiba3ObjFv
createEffect__Q34Game4Hiba3ObjFv:
/* 8026C4CC 0026940C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C4D0 00269410  7C 08 02 A6 */	mflr r0
/* 8026C4D4 00269414  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C4D8 00269418  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026C4DC 0026941C  93 C1 00 08 */	stw r30, 8(r1)
/* 8026C4E0 00269420  7C 7E 1B 78 */	mr r30, r3
/* 8026C4E4 00269424  38 60 00 44 */	li r3, 0x44
/* 8026C4E8 00269428  4B DB 79 BD */	bl __nw__FUl
/* 8026C4EC 0026942C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8026C4F0 00269430  41 82 00 24 */	beq lbl_8026C514
/* 8026C4F4 00269434  38 80 00 AB */	li r4, 0xab
/* 8026C4F8 00269438  38 A0 00 AC */	li r5, 0xac
/* 8026C4FC 0026943C  38 C0 00 AD */	li r6, 0xad
/* 8026C500 00269440  38 E0 00 AE */	li r7, 0xae
/* 8026C504 00269444  48 14 3C A5 */	bl __ct__Q23efx9TForever4FUsUsUsUs
/* 8026C508 00269448  3C 60 80 4C */	lis r3, __vt__Q23efx9THibaFire@ha
/* 8026C50C 0026944C  38 03 54 B8 */	addi r0, r3, __vt__Q23efx9THibaFire@l
/* 8026C510 00269450  90 1F 00 00 */	stw r0, 0(r31)
lbl_8026C514:
/* 8026C514 00269454  93 FE 02 C8 */	stw r31, 0x2c8(r30)
/* 8026C518 00269458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C51C 0026945C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026C520 00269460  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026C524 00269464  7C 08 03 A6 */	mtlr r0
/* 8026C528 00269468  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C52C 0026946C  4E 80 00 20 */	blr 

.global startFireEffect__Q34Game4Hiba3ObjFv
startFireEffect__Q34Game4Hiba3ObjFv:
/* 8026C530 00269470  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026C534 00269474  7C 08 02 A6 */	mflr r0
/* 8026C538 00269478  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8026C53C 0026947C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026C540 00269480  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 8026C544 00269484  38 81 00 08 */	addi r4, r1, 8
/* 8026C548 00269488  90 01 00 08 */	stw r0, 8(r1)
/* 8026C54C 0026948C  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8026C550 00269490  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8026C554 00269494  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 8026C558 00269498  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8026C55C 0026949C  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8026C560 002694A0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8026C564 002694A4  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 8026C568 002694A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C56C 002694AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026C570 002694B0  7D 89 03 A6 */	mtctr r12
/* 8026C574 002694B4  4E 80 04 21 */	bctrl 
/* 8026C578 002694B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026C57C 002694BC  7C 08 03 A6 */	mtlr r0
/* 8026C580 002694C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8026C584 002694C4  4E 80 00 20 */	blr 

.global finishFireEffect__Q34Game4Hiba3ObjFv
finishFireEffect__Q34Game4Hiba3ObjFv:
/* 8026C588 002694C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C58C 002694CC  7C 08 02 A6 */	mflr r0
/* 8026C590 002694D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C594 002694D4  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 8026C598 002694D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C59C 002694DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026C5A0 002694E0  7D 89 03 A6 */	mtctr r12
/* 8026C5A4 002694E4  4E 80 04 21 */	bctrl 
/* 8026C5A8 002694E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C5AC 002694EC  7C 08 03 A6 */	mtlr r0
/* 8026C5B0 002694F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C5B4 002694F4  4E 80 00 20 */	blr 

.global generatorKill__Q34Game4Hiba3ObjFv
generatorKill__Q34Game4Hiba3ObjFv:
/* 8026C5B8 002694F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C5BC 002694FC  7C 08 02 A6 */	mflr r0
/* 8026C5C0 00269500  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C5C4 00269504  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026C5C8 00269508  7C 7F 1B 78 */	mr r31, r3
/* 8026C5CC 0026950C  80 63 00 C4 */	lwz r3, 0xc4(r3)
/* 8026C5D0 00269510  28 03 00 00 */	cmplwi r3, 0
/* 8026C5D4 00269514  41 82 00 14 */	beq lbl_8026C5E8
/* 8026C5D8 00269518  7F E4 FB 78 */	mr r4, r31
/* 8026C5DC 0026951C  4B F3 E7 19 */	bl informDeath__Q24Game9GeneratorFPQ24Game8Creature
/* 8026C5E0 00269520  38 00 00 00 */	li r0, 0
/* 8026C5E4 00269524  90 1F 00 C4 */	stw r0, 0xc4(r31)
lbl_8026C5E8:
/* 8026C5E8 00269528  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C5EC 0026952C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026C5F0 00269530  7C 08 03 A6 */	mtlr r0
/* 8026C5F4 00269534  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C5F8 00269538  4E 80 00 20 */	blr 

.global doSimulation__Q34Game4Hiba3ObjFf
doSimulation__Q34Game4Hiba3ObjFf:
/* 8026C5FC 0026953C  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game4Hiba3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game4Hiba3ObjFPQ24Game8WaterBox:
/* 8026C600 00269540  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game4Hiba3ObjFv
outWaterCallback__Q34Game4Hiba3ObjFv:
/* 8026C604 00269544  4E 80 00 20 */	blr 

.global isLivingThing__Q34Game4Hiba3ObjFv
isLivingThing__Q34Game4Hiba3ObjFv:
/* 8026C608 00269548  88 63 02 C0 */	lbz r3, 0x2c0(r3)
/* 8026C60C 0026954C  4E 80 00 20 */	blr 

.global lifeRecover__Q34Game4Hiba3ObjFv
lifeRecover__Q34Game4Hiba3ObjFv:
/* 8026C610 00269550  4E 80 00 20 */	blr 

.global "@716@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@716@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 8026C614 00269554  39 60 00 0C */	li r11, 0xc
/* 8026C618 00269558  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026C61C 0026955C  7C 63 5A 14 */	add r3, r3, r11
/* 8026C620 00269560  38 63 FD 34 */	addi r3, r3, -716
/* 8026C624 00269564  4B E9 A2 F8 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@716@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@716@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 8026C628 00269568  39 60 00 0C */	li r11, 0xc
/* 8026C62C 0026956C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026C630 00269570  7C 63 5A 14 */	add r3, r3, r11
/* 8026C634 00269574  38 63 FD 34 */	addi r3, r3, -716
/* 8026C638 00269578  4B E9 A0 70 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@716@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@716@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 8026C63C 0026957C  39 60 00 0C */	li r11, 0xc
/* 8026C640 00269580  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026C644 00269584  7C 63 5A 14 */	add r3, r3, r11
/* 8026C648 00269588  38 63 FD 34 */	addi r3, r3, -716
/* 8026C64C 0026958C  4B E9 A0 7C */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@716@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@716@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 8026C650 00269590  39 60 00 0C */	li r11, 0xc
/* 8026C654 00269594  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026C658 00269598  7C 63 5A 14 */	add r3, r3, r11
/* 8026C65C 0026959C  38 63 FD 34 */	addi r3, r3, -716
/* 8026C660 002695A0  4B E9 A4 18 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@716@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@716@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 8026C664 002695A4  39 60 00 0C */	li r11, 0xc
/* 8026C668 002695A8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026C66C 002695AC  7C 63 5A 14 */	add r3, r3, r11
/* 8026C670 002695B0  38 63 FD 34 */	addi r3, r3, -716
/* 8026C674 002695B4  4B E9 A3 D8 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@716@12@viewGetShape__Q24Game9EnemyBaseFv"
"@716@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 8026C678 002695B8  39 60 00 0C */	li r11, 0xc
/* 8026C67C 002695BC  7D 63 58 2E */	lwzx r11, r3, r11
/* 8026C680 002695C0  7C 63 5A 14 */	add r3, r3, r11
/* 8026C684 002695C4  38 63 FD 34 */	addi r3, r3, -716
/* 8026C688 002695C8  4B E9 A0 18 */	b viewGetShape__Q24Game9EnemyBaseFv
