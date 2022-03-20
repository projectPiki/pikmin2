.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game10BlueChappy3Obj
__vt__Q34Game10BlueChappy3Obj:
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
	.4byte onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game10ChappyBase3ObjFR8Graphics
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
	.4byte collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game10ChappyBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game10BlueChappy3ObjFv
	.4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10ChappyBase3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10ChappyBase3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game10BlueChappy3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game10ChappyBase3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q34Game10ChappyBase3ObjFv
	.4byte initWalkSmokeEffect__Q34Game10ChappyBase3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10ChappyBase3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game10BlueChappy3ObjFv
	.4byte getMouthSlots__Q34Game10ChappyBase3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10ChappyBase3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game10ChappyBase3ObjFv
	.4byte doFinishStoneState__Q34Game10ChappyBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10ChappyBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10ChappyBase3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
	.4byte isWakeup__Q34Game10ChappyBase3ObjFv
	.4byte setAnimationSpeed__Q34Game10ChappyBase3ObjFf
	.4byte flickAttackFail__Q34Game10ChappyBase3ObjFv
	.4byte flickStatePikmin__Q34Game10ChappyBase3ObjFv
	.4byte flickAttackBomb__Q34Game10ChappyBase3ObjFv
	.4byte eatAttackPikmin__Q34Game10ChappyBase3ObjFv
	.4byte resetUnderGround__Q34Game10ChappyBase3ObjFv
	.4byte setUnderGround__Q34Game10ChappyBase3ObjFv
	.4byte createEffect__Q34Game10ChappyBase3ObjFv
	.4byte setupEffect__Q34Game10ChappyBase3ObjFv
	.4byte startSleepEffect__Q34Game10ChappyBase3ObjFv
	.4byte finishSleepEffect__Q34Game10ChappyBase3ObjFv
	.4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
	.4byte createSmokeEffect__Q34Game10ChappyBase3ObjFv
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10BlueChappy3ObjFv
__ct__Q34Game10BlueChappy3ObjFv:
/* 8012BBF4 00128B34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012BBF8 00128B38  7C 08 02 A6 */	mflr r0
/* 8012BBFC 00128B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012BC00 00128B40  7C 80 07 35 */	extsh. r0, r4
/* 8012BC04 00128B44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012BC08 00128B48  7C 7F 1B 78 */	mr r31, r3
/* 8012BC0C 00128B4C  93 C1 00 08 */	stw r30, 8(r1)
/* 8012BC10 00128B50  41 82 00 24 */	beq lbl_8012BC34
/* 8012BC14 00128B54  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 8012BC18 00128B58  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8012BC1C 00128B5C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8012BC20 00128B60  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8012BC24 00128B64  38 00 00 00 */	li r0, 0
/* 8012BC28 00128B68  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 8012BC2C 00128B6C  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8012BC30 00128B70  90 1F 02 EC */	stw r0, 0x2ec(r31)
lbl_8012BC34:
/* 8012BC34 00128B74  7F E3 FB 78 */	mr r3, r31
/* 8012BC38 00128B78  38 80 00 00 */	li r4, 0
/* 8012BC3C 00128B7C  4B FF ED 15 */	bl __ct__Q34Game10ChappyBase3ObjFv
/* 8012BC40 00128B80  3C 60 80 4B */	lis r3, __vt__Q34Game10BlueChappy3Obj@ha
/* 8012BC44 00128B84  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 8012BC48 00128B88  38 A3 E3 98 */	addi r5, r3, __vt__Q34Game10BlueChappy3Obj@l
/* 8012BC4C 00128B8C  38 60 00 2C */	li r3, 0x2c
/* 8012BC50 00128B90  90 BF 00 00 */	stw r5, 0(r31)
/* 8012BC54 00128B94  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8012BC58 00128B98  38 A5 03 34 */	addi r5, r5, 0x334
/* 8012BC5C 00128B9C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8012BC60 00128BA0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8012BC64 00128BA4  90 A4 00 00 */	stw r5, 0(r4)
/* 8012BC68 00128BA8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8012BC6C 00128BAC  7C 04 00 50 */	subf r0, r4, r0
/* 8012BC70 00128BB0  90 04 00 0C */	stw r0, 0xc(r4)
/* 8012BC74 00128BB4  4B EF 82 31 */	bl __nw__FUl
/* 8012BC78 00128BB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012BC7C 00128BBC  41 82 00 44 */	beq lbl_8012BCC0
/* 8012BC80 00128BC0  4B FF BC F5 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8012BC84 00128BC4  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase14ProperAnimator@ha
/* 8012BC88 00128BC8  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8012BC8C 00128BCC  38 03 C1 E8 */	addi r0, r3, __vt__Q34Game10ChappyBase14ProperAnimator@l
/* 8012BC90 00128BD0  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8012BC94 00128BD4  90 1E 00 00 */	stw r0, 0(r30)
/* 8012BC98 00128BD8  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8012BC9C 00128BDC  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8012BCA0 00128BE0  38 00 00 00 */	li r0, 0
/* 8012BCA4 00128BE4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8012BCA8 00128BE8  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8012BCAC 00128BEC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012BCB0 00128BF0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8012BCB4 00128BF4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8012BCB8 00128BF8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012BCBC 00128BFC  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8012BCC0:
/* 8012BCC0 00128C00  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8012BCC4 00128C04  38 60 00 1C */	li r3, 0x1c
/* 8012BCC8 00128C08  4B EF 81 DD */	bl __nw__FUl
/* 8012BCCC 00128C0C  7C 64 1B 79 */	or. r4, r3, r3
/* 8012BCD0 00128C10  41 82 00 24 */	beq lbl_8012BCF4
/* 8012BCD4 00128C14  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8012BCD8 00128C18  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3FSM@ha
/* 8012BCDC 00128C1C  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8012BCE0 00128C20  38 A0 FF FF */	li r5, -1
/* 8012BCE4 00128C24  90 04 00 00 */	stw r0, 0(r4)
/* 8012BCE8 00128C28  38 03 C1 C4 */	addi r0, r3, __vt__Q34Game10ChappyBase3FSM@l
/* 8012BCEC 00128C2C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8012BCF0 00128C30  90 04 00 00 */	stw r0, 0(r4)
lbl_8012BCF4:
/* 8012BCF4 00128C34  81 9F 00 00 */	lwz r12, 0(r31)
/* 8012BCF8 00128C38  7F E3 FB 78 */	mr r3, r31
/* 8012BCFC 00128C3C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8012BD00 00128C40  7D 89 03 A6 */	mtctr r12
/* 8012BD04 00128C44  4E 80 04 21 */	bctrl 
/* 8012BD08 00128C48  7F E3 FB 78 */	mr r3, r31
/* 8012BD0C 00128C4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8012BD10 00128C50  81 8C 03 1C */	lwz r12, 0x31c(r12)
/* 8012BD14 00128C54  7D 89 03 A6 */	mtctr r12
/* 8012BD18 00128C58  4E 80 04 21 */	bctrl 
/* 8012BD1C 00128C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012BD20 00128C60  7F E3 FB 78 */	mr r3, r31
/* 8012BD24 00128C64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012BD28 00128C68  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012BD2C 00128C6C  7C 08 03 A6 */	mtlr r0
/* 8012BD30 00128C70  38 21 00 10 */	addi r1, r1, 0x10
/* 8012BD34 00128C74  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game10BlueChappy3ObjFv
changeMaterial__Q34Game10BlueChappy3ObjFv:
/* 8012BD38 00128C78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012BD3C 00128C7C  7C 08 02 A6 */	mflr r0
/* 8012BD40 00128C80  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012BD44 00128C84  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8012BD48 00128C88  7C 7B 1B 78 */	mr r27, r3
/* 8012BD4C 00128C8C  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8012BD50 00128C90  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8012BD54 00128C94  81 83 00 00 */	lwz r12, 0(r3)
/* 8012BD58 00128C98  83 84 00 08 */	lwz r28, 8(r4)
/* 8012BD5C 00128C9C  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8012BD60 00128CA0  83 BC 00 04 */	lwz r29, 4(r28)
/* 8012BD64 00128CA4  7D 89 03 A6 */	mtctr r12
/* 8012BD68 00128CA8  4E 80 04 21 */	bctrl 
/* 8012BD6C 00128CAC  7C 7E 1B 78 */	mr r30, r3
/* 8012BD70 00128CB0  80 7B 01 80 */	lwz r3, 0x180(r27)
/* 8012BD74 00128CB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8012BD78 00128CB8  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8012BD7C 00128CBC  7D 89 03 A6 */	mtctr r12
/* 8012BD80 00128CC0  4E 80 04 21 */	bctrl 
/* 8012BD84 00128CC4  7C 7F 1B 78 */	mr r31, r3
/* 8012BD88 00128CC8  7F 83 E3 78 */	mr r3, r28
/* 8012BD8C 00128CCC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8012BD90 00128CD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012BD94 00128CD4  7D 89 03 A6 */	mtctr r12
/* 8012BD98 00128CD8  4E 80 04 21 */	bctrl 
/* 8012BD9C 00128CDC  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 8012BDA0 00128CE0  88 1E 00 00 */	lbz r0, 0(r30)
/* 8012BDA4 00128CE4  80 63 00 08 */	lwz r3, 8(r3)
/* 8012BDA8 00128CE8  80 63 00 04 */	lwz r3, 4(r3)
/* 8012BDAC 00128CEC  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8012BDB0 00128CF0  80 64 00 04 */	lwz r3, 4(r4)
/* 8012BDB4 00128CF4  98 03 00 00 */	stb r0, 0(r3)
/* 8012BDB8 00128CF8  88 1E 00 01 */	lbz r0, 1(r30)
/* 8012BDBC 00128CFC  98 03 00 01 */	stb r0, 1(r3)
/* 8012BDC0 00128D00  A0 1E 00 02 */	lhz r0, 2(r30)
/* 8012BDC4 00128D04  B0 03 00 02 */	sth r0, 2(r3)
/* 8012BDC8 00128D08  A0 1E 00 04 */	lhz r0, 4(r30)
/* 8012BDCC 00128D0C  B0 03 00 04 */	sth r0, 4(r3)
/* 8012BDD0 00128D10  88 1E 00 06 */	lbz r0, 6(r30)
/* 8012BDD4 00128D14  98 03 00 06 */	stb r0, 6(r3)
/* 8012BDD8 00128D18  88 1E 00 07 */	lbz r0, 7(r30)
/* 8012BDDC 00128D1C  98 03 00 07 */	stb r0, 7(r3)
/* 8012BDE0 00128D20  88 1E 00 08 */	lbz r0, 8(r30)
/* 8012BDE4 00128D24  98 03 00 08 */	stb r0, 8(r3)
/* 8012BDE8 00128D28  88 1E 00 09 */	lbz r0, 9(r30)
/* 8012BDEC 00128D2C  98 03 00 09 */	stb r0, 9(r3)
/* 8012BDF0 00128D30  A0 1E 00 0A */	lhz r0, 0xa(r30)
/* 8012BDF4 00128D34  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8012BDF8 00128D38  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 8012BDFC 00128D3C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012BE00 00128D40  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8012BE04 00128D44  98 03 00 10 */	stb r0, 0x10(r3)
/* 8012BE08 00128D48  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 8012BE0C 00128D4C  98 03 00 11 */	stb r0, 0x11(r3)
/* 8012BE10 00128D50  88 1E 00 12 */	lbz r0, 0x12(r30)
/* 8012BE14 00128D54  98 03 00 12 */	stb r0, 0x12(r3)
/* 8012BE18 00128D58  88 1E 00 13 */	lbz r0, 0x13(r30)
/* 8012BE1C 00128D5C  98 03 00 13 */	stb r0, 0x13(r3)
/* 8012BE20 00128D60  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8012BE24 00128D64  98 03 00 14 */	stb r0, 0x14(r3)
/* 8012BE28 00128D68  88 1E 00 15 */	lbz r0, 0x15(r30)
/* 8012BE2C 00128D6C  98 03 00 15 */	stb r0, 0x15(r3)
/* 8012BE30 00128D70  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8012BE34 00128D74  98 03 00 16 */	stb r0, 0x16(r3)
/* 8012BE38 00128D78  88 1E 00 17 */	lbz r0, 0x17(r30)
/* 8012BE3C 00128D7C  98 03 00 17 */	stb r0, 0x17(r3)
/* 8012BE40 00128D80  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8012BE44 00128D84  98 03 00 18 */	stb r0, 0x18(r3)
/* 8012BE48 00128D88  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8012BE4C 00128D8C  98 03 00 19 */	stb r0, 0x19(r3)
/* 8012BE50 00128D90  A8 1E 00 1A */	lha r0, 0x1a(r30)
/* 8012BE54 00128D94  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8012BE58 00128D98  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8012BE5C 00128D9C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012BE60 00128DA0  80 64 00 04 */	lwz r3, 4(r4)
/* 8012BE64 00128DA4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8012BE68 00128DA8  7C 1E 02 14 */	add r0, r30, r0
/* 8012BE6C 00128DAC  7C 03 00 50 */	subf r0, r3, r0
/* 8012BE70 00128DB0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012BE74 00128DB4  80 64 00 04 */	lwz r3, 4(r4)
/* 8012BE78 00128DB8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8012BE7C 00128DBC  7C 1E 02 14 */	add r0, r30, r0
/* 8012BE80 00128DC0  7C 03 00 50 */	subf r0, r3, r0
/* 8012BE84 00128DC4  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012BE88 00128DC8  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 8012BE8C 00128DCC  88 1F 00 00 */	lbz r0, 0(r31)
/* 8012BE90 00128DD0  80 63 00 08 */	lwz r3, 8(r3)
/* 8012BE94 00128DD4  80 63 00 04 */	lwz r3, 4(r3)
/* 8012BE98 00128DD8  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8012BE9C 00128DDC  80 64 00 04 */	lwz r3, 4(r4)
/* 8012BEA0 00128DE0  98 03 00 20 */	stb r0, 0x20(r3)
/* 8012BEA4 00128DE4  88 1F 00 01 */	lbz r0, 1(r31)
/* 8012BEA8 00128DE8  98 03 00 21 */	stb r0, 0x21(r3)
/* 8012BEAC 00128DEC  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8012BEB0 00128DF0  B0 03 00 22 */	sth r0, 0x22(r3)
/* 8012BEB4 00128DF4  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8012BEB8 00128DF8  B0 03 00 24 */	sth r0, 0x24(r3)
/* 8012BEBC 00128DFC  88 1F 00 06 */	lbz r0, 6(r31)
/* 8012BEC0 00128E00  98 03 00 26 */	stb r0, 0x26(r3)
/* 8012BEC4 00128E04  88 1F 00 07 */	lbz r0, 7(r31)
/* 8012BEC8 00128E08  98 03 00 27 */	stb r0, 0x27(r3)
/* 8012BECC 00128E0C  88 1F 00 08 */	lbz r0, 8(r31)
/* 8012BED0 00128E10  98 03 00 28 */	stb r0, 0x28(r3)
/* 8012BED4 00128E14  88 1F 00 09 */	lbz r0, 9(r31)
/* 8012BED8 00128E18  98 03 00 29 */	stb r0, 0x29(r3)
/* 8012BEDC 00128E1C  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8012BEE0 00128E20  B0 03 00 2A */	sth r0, 0x2a(r3)
/* 8012BEE4 00128E24  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8012BEE8 00128E28  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8012BEEC 00128E2C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8012BEF0 00128E30  98 03 00 30 */	stb r0, 0x30(r3)
/* 8012BEF4 00128E34  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8012BEF8 00128E38  98 03 00 31 */	stb r0, 0x31(r3)
/* 8012BEFC 00128E3C  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8012BF00 00128E40  98 03 00 32 */	stb r0, 0x32(r3)
/* 8012BF04 00128E44  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8012BF08 00128E48  98 03 00 33 */	stb r0, 0x33(r3)
/* 8012BF0C 00128E4C  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8012BF10 00128E50  98 03 00 34 */	stb r0, 0x34(r3)
/* 8012BF14 00128E54  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8012BF18 00128E58  98 03 00 35 */	stb r0, 0x35(r3)
/* 8012BF1C 00128E5C  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8012BF20 00128E60  98 03 00 36 */	stb r0, 0x36(r3)
/* 8012BF24 00128E64  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8012BF28 00128E68  3C A0 80 51 */	lis r5, j3dSys@ha
/* 8012BF2C 00128E6C  3B 65 F2 30 */	addi r27, r5, j3dSys@l
/* 8012BF30 00128E70  3B C0 00 00 */	li r30, 0
/* 8012BF34 00128E74  98 03 00 37 */	stb r0, 0x37(r3)
/* 8012BF38 00128E78  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8012BF3C 00128E7C  98 03 00 38 */	stb r0, 0x38(r3)
/* 8012BF40 00128E80  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8012BF44 00128E84  98 03 00 39 */	stb r0, 0x39(r3)
/* 8012BF48 00128E88  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8012BF4C 00128E8C  B0 03 00 3A */	sth r0, 0x3a(r3)
/* 8012BF50 00128E90  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8012BF54 00128E94  90 03 00 3C */	stw r0, 0x3c(r3)
/* 8012BF58 00128E98  80 A4 00 04 */	lwz r5, 4(r4)
/* 8012BF5C 00128E9C  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 8012BF60 00128EA0  38 65 00 20 */	addi r3, r5, 0x20
/* 8012BF64 00128EA4  7C 1F 02 14 */	add r0, r31, r0
/* 8012BF68 00128EA8  7C 03 00 50 */	subf r0, r3, r0
/* 8012BF6C 00128EAC  90 05 00 3C */	stw r0, 0x3c(r5)
/* 8012BF70 00128EB0  80 84 00 04 */	lwz r4, 4(r4)
/* 8012BF74 00128EB4  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 8012BF78 00128EB8  38 64 00 20 */	addi r3, r4, 0x20
/* 8012BF7C 00128EBC  7C 1F 02 14 */	add r0, r31, r0
/* 8012BF80 00128EC0  7C 03 00 50 */	subf r0, r3, r0
/* 8012BF84 00128EC4  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8012BF88 00128EC8  48 00 00 3C */	b lbl_8012BFC4
lbl_8012BF8C:
/* 8012BF8C 00128ECC  80 9C 00 C0 */	lwz r4, 0xc0(r28)
/* 8012BF90 00128ED0  57 C3 32 B2 */	rlwinm r3, r30, 6, 0xa, 0x19
/* 8012BF94 00128ED4  57 C0 13 BA */	rlwinm r0, r30, 2, 0xe, 0x1d
/* 8012BF98 00128ED8  7C 84 1A 14 */	add r4, r4, r3
/* 8012BF9C 00128EDC  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8012BFA0 00128EE0  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 8012BFA4 00128EE4  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8012BFA8 00128EE8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8012BFAC 00128EEC  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8012BFB0 00128EF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8012BFB4 00128EF4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8012BFB8 00128EF8  7D 89 03 A6 */	mtctr r12
/* 8012BFBC 00128EFC  4E 80 04 21 */	bctrl 
/* 8012BFC0 00128F00  3B DE 00 01 */	addi r30, r30, 1
lbl_8012BFC4:
/* 8012BFC4 00128F04  A0 1D 00 5C */	lhz r0, 0x5c(r29)
/* 8012BFC8 00128F08  57 C3 04 3E */	clrlwi r3, r30, 0x10
/* 8012BFCC 00128F0C  7C 03 00 40 */	cmplw r3, r0
/* 8012BFD0 00128F10  41 80 FF BC */	blt lbl_8012BF8C
/* 8012BFD4 00128F14  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8012BFD8 00128F18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012BFDC 00128F1C  7C 08 03 A6 */	mtlr r0
/* 8012BFE0 00128F20  38 21 00 20 */	addi r1, r1, 0x20
/* 8012BFE4 00128F24  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10BlueChappy3ObjFv
getEnemyTypeID__Q34Game10BlueChappy3ObjFv:
/* 8012BFE8 00128F28  38 60 00 2A */	li r3, 0x2a
/* 8012BFEC 00128F2C  4E 80 00 20 */	blr 
