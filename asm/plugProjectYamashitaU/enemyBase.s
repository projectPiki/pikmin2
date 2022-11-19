.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_enemyBase_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8047A520:
	.4byte 0
	.4byte 0
	.4byte 0
.balign 4
lbl_8047A52C:
	.asciz "enemyBase"
.balign 4
lbl_8047A538:
	.asciz "e-upd-do"
.balign 4
lbl_8047A544:
	.asciz "enemyBase.cpp"
.balign 4
lbl_8047A554:
	.asciz "P2Assert"
.balign 4
lbl_8047A560:
	.asciz "BirthTypeDrop"
.balign 4
lbl_8047A570:
	.asciz "BirthTypeDropPikmin"
.balign 4
lbl_8047A584:
	.asciz "BirthTypeDropOlimar"
.balign 4
lbl_8047A598:
	.asciz "BirthTypeDropTreasure"
.balign 4
lbl_8047A5B0:
	.asciz "BirthTypeDropEarthquake"
.balign 4
lbl_8047A5C8:
	.asciz "Earthquake"
.balign 4
lbl_8047A5D4:
	.asciz "Unknown birth type:%d"
.balign 4
lbl_8047A5EC:
	.asciz "EnemyKillArg"
.balign 4
lbl_8047A5FC:
	.asciz "CreatureKillArg"
.balign 4
lbl_8047A60C:
	.asciz "abolished type\n"
.balign 4
lbl_8047A61C:
	.asciz "PelletInitArg"
.balign 4
lbl_8047A62C:
	.asciz "ArgScale"
.balign 4
lbl_8047A638:
	.asciz "ItemHoney::InitArg"
.balign 4
lbl_8047A64C:
	.asciz "ArgEnemyType"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
lbl_804AA15C:
	.4byte .L_80105D00
	.4byte .L_80105CE4
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105CEC
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105CF4
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105D00
	.4byte .L_80105CFC
lbl_804AA1B0:
	.4byte .L_80106E04
	.4byte .L_80106E50
	.4byte .L_80106E78
	.4byte .L_80106EC4
	.4byte .L_80106F2C
	.4byte .L_80106F50
	.4byte .L_80106EC4
	.4byte .L_80106EE4
	.4byte .L_80106F08
.global __vt__Q34Game10EnemyStone8DrawInfo
__vt__Q34Game10EnemyStone8DrawInfo:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game10EnemyStone8DrawInfoFv
	.4byte getChildCount__5CNodeFv
.global __vt__Q23PSM10EnemyHekoi
__vt__Q23PSM10EnemyHekoi:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "@16@__dt__Q23PSM10EnemyHekoiFv"
	.4byte __dt__Q23PSM10EnemyHekoiFv
	.4byte frameEnd_onPlaySe__Q23PSM13CreatureAnimeFv
	.4byte getCastType__Q23PSM10EnemyHekoiFv
	.4byte exec__Q23PSM13CreatureAnimeFv
	.4byte getJAIObject__Q23PSM13CreatureAnimeFv
	.4byte onCalcOn__Q23PSM9EnemyBaseFv
	.4byte loopCalc__Q23PSM8CreatureFRQ23PSM12FrameCalcArg
	.4byte startSoundInner__Q23PSM9EnemyBaseFRQ23PSM13StartSoundArg
	.4byte judgeNearWithPlayer__Q23PSM9EnemyBaseFRC3VecRC3Vecff
	.4byte onPlayingSe__Q23PSM8CreatureFUlP8JAISound
	.4byte getHandleArea__Q23PSM13CreatureAnimeFUc
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q23PSM10EnemyHekoiFv"
	.4byte "@48@startSound__Q23PSM13CreatureAnimeFUlUl"
	.4byte "@48@startSound__Q23PSM13CreatureAnimeFUcUlUl"
	.4byte "@48@startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl"
	.4byte stopAllSound__Q27JAInter10ObjectBaseFv
	.4byte stopSound__Q27JAInter10ObjectBaseFUlUl
	.4byte enable__Q27JAInter10ObjectBaseFv
	.4byte disable__Q27JAInter6ObjectFv
	.4byte dispose__Q27JAInter10ObjectBaseFv
	.4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
	.4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
	.4byte handleStop__13JAIAnimeSoundFUcUl
	.4byte loop__Q27JAInter6ObjectFv
	.4byte "@48@playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc"
	.4byte "@48@startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc"
	.4byte setSpeedModifySound__13JAIAnimeSoundFP8JAISoundP22JAIAnimeFrameSoundDataf
	.4byte startSound__Q23PSM13CreatureAnimeFUlUl
	.4byte startSound__Q23PSM13CreatureAnimeFUcUlUl
	.4byte startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl
	.4byte startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc
	.4byte playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc
	.4byte onCalcTurnOn__Q23PSM9EnemyBaseFv
	.4byte onCalcTurnOff__Q23PSM9EnemyBaseFv
	.4byte 0
	.4byte 0
	.4byte battleOn__Q23PSM10BattleLinkFv
	.4byte "@184@battleOff__Q23PSM9EnemyBaseFv"
	.4byte 0
	.4byte 0
	.4byte kehaiOn__Q23PSM9KehaiLinkFv
	.4byte kehaiOff__Q23PSM9KehaiLinkFv
	.4byte battleOff__Q23PSM9EnemyBaseFv
	.4byte setKilled__Q23PSM9EnemyBaseFv
	.4byte updateKehai__Q23PSM9EnemyBaseFv
	.4byte updateBattle__Q23PSM9EnemyBaseFv
.global __vt__Q24Game13PelletInitArg
__vt__Q24Game13PelletInitArg:
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game13PelletInitArgFv
.global __vt__Q24Game12EnemyKillArg
__vt__Q24Game12EnemyKillArg:
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game12EnemyKillArgFv
.global __vt__Q24Game15CreatureKillArg
__vt__Q24Game15CreatureKillArg:
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game15CreatureKillArgFv
.global __vt__Q23efx8ArgScale
__vt__Q23efx8ArgScale:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx8ArgScaleFv
.global __vt__Q34Game9ItemHoney7InitArg
__vt__Q34Game9ItemHoney7InitArg:
	.4byte 0
	.4byte 0
	.4byte getName__Q34Game9ItemHoney7InitArgFv
.global __vt__Q24Game15CreatureInitArg
__vt__Q24Game15CreatureInitArg:
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q24Game11Interaction
__vt__Q24Game11Interaction:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
.global __vt__Q24Game9EnemyBase
__vt__Q24Game9EnemyBase:
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
	.4byte onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
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
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
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
	.4byte __dt__Q24Game9EnemyBaseFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte 0
	.4byte update__Q24Game9EnemyBaseFv
	.4byte 0
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q24Game9EnemyBaseFR8Graphics
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
	.4byte 0
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
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@700@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@700@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@700@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@700@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@700@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@700@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q24Game17EnemyAnimKeyEvent
__vt__Q24Game17EnemyAnimKeyEvent:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game17EnemyAnimKeyEventFv
	.4byte getChildCount__5CNodeFv
.global __vt__Q28SysShape8KeyEvent
__vt__Q28SysShape8KeyEvent:
	.4byte 0
	.4byte 0
	.4byte __dt__Q28SysShape8KeyEventFv
	.4byte getChildCount__5CNodeFv
.global __vt__Q28SysShape14MotionListener
__vt__Q28SysShape14MotionListener:
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q24Game10PelletView
__vt__Q24Game10PelletView:
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte 0
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte view_start_carrymotion__Q24Game10PelletViewFv
	.4byte view_finish_carrymotion__Q24Game10PelletViewFv
	.4byte viewStartPreCarryMotion__Q24Game10PelletViewFv
	.4byte viewStartCarryMotion__Q24Game10PelletViewFv
	.4byte viewOnPelletKilled__Q24Game10PelletViewFv
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q34Game12EnemyBaseFSM12StateMachine
__vt__Q34Game12EnemyBaseFSM12StateMachine:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte update__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasef
	.4byte animation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ23Sys8Triangle
.global __vt__Q34Game12EnemyBaseFSM10StoneState
__vt__Q34Game12EnemyBaseFSM10StoneState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
	.4byte updateCullingOff__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase
	.4byte updateAlways__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM15EarthquakeState
__vt__Q34Game12EnemyBaseFSM15EarthquakeState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
	.4byte updateCullingOff__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBase
	.4byte updateAlways__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM8FitState
__vt__Q34Game12EnemyBaseFSM8FitState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
	.4byte updateCullingOff__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase
	.4byte updateAlways__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM11LivingState
__vt__Q34Game12EnemyBaseFSM11LivingState:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
	.4byte updateCullingOff__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
	.4byte updateAlways__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
.global __vt__Q23efx12ArgEnemyType
__vt__Q23efx12ArgEnemyType:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx12ArgEnemyTypeFv
.global __vt__Q23efx3Arg
__vt__Q23efx3Arg:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx3ArgFv
.global __vt__Q23efx5TBase
__vt__Q23efx5TBase:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q34Game12EnemyBaseFSM11AppearState
__vt__Q34Game12EnemyBaseFSM11AppearState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeState
__vt__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureState
__vt__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarState
__vt__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM24BirthTypeDropPikminState
__vt__Q34Game12EnemyBaseFSM24BirthTypeDropPikminState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM24BirthTypeDropPikminStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState
__vt__Q34Game12EnemyBaseFSM18BirthTypeDropState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
	.4byte isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
.global __vt__Q34Game12EnemyBaseFSM5State
__vt__Q34Game12EnemyBaseFSM5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
	.4byte update__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
	.4byte entry__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
	.4byte simulation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasef
	.4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
	.4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4
.global gParmArc__4Game
gParmArc__4Game:
	.skip 0x4
.global "sInstance__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"
"sInstance__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>":
	.skip 0x4
.global "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>":
	.skip 0x4
.global "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>":
	.skip 0x4
.global "sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>":
	.skip 0x4
.global "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>":
	.skip 0x4
.global "sInstance__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"
"sInstance__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>":
	.skip 0x4
.global "sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"
"sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>":
	.skip 0x4
.global "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>":
	.skip 0x4
.global "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>":
	.skip 0x4
.global "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>":
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80517798:
	.float 300.0
lbl_8051779C:
	.float 32768.0
lbl_805177A0:
	.float 6.2831855
lbl_805177A4:
	.float 50.0
lbl_805177A8:
	.float -325.9493
lbl_805177AC:
	.float 325.9493
lbl_805177B0:
	.float 0.0
.balign 8
lbl_805177B8:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_805177C0:
	.float 2.0
lbl_805177C4:
	.float 1.0
lbl_805177C8:
	.float 0.2
lbl_805177CC: # pi
	.float 3.1415927
lbl_805177D0:
	.float 4.0
lbl_805177D4:
	.float 0.25
lbl_805177D8:
	.float 0.017453294
.balign 8
lbl_805177E0:
	.4byte 0x43300000
	.4byte 0x00000000
.balign 4
lbl_805177E8:
	.asciz "Appear"
.balign 4
lbl_805177F0:
	.asciz "Living"
.balign 4
lbl_805177F8:
	.asciz "Stone"
.balign 4
lbl_80517800:
	.asciz "Fit"
.balign 4
lbl_80517804:
	.float 2.5
lbl_80517808:
	.float 0.99
lbl_8051780C:
	.float 0.9
lbl_80517810:
	.float 0.85
lbl_80517814:
	.float 0.5
lbl_80517818:
	.float 10.0
lbl_8051781C:
	.float 250.0
.balign 4
lbl_80517820:
	.asciz "e-calc"
.balign 4
lbl_80517828:
	.float 3.0
lbl_8051782C:
	.float 0.6
lbl_80517830: # TAU/180
	.float 0.03490659
lbl_80517834: # TAU/144
	.float 0.043633234
lbl_80517838:
	.float 200.0
lbl_8051783C:
	.float 8.0
lbl_80517840:
	.float 150.0
lbl_80517844:
	.float 100.0
lbl_80517848:
	.float 1.5
.balign 4
lbl_8051784C:
	.asciz "Arg"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase:
/* 800FF26C 000FC1AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800FF270 000FC1B0  7C 08 02 A6 */	mflr r0
/* 800FF274 000FC1B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800FF278 000FC1B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800FF27C 000FC1BC  93 C1 00 08 */	stw r30, 8(r1)
/* 800FF280 000FC1C0  7C 9E 23 78 */	mr r30, r4
/* 800FF284 000FC1C4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 800FF288 000FC1C8  54 00 00 C7 */	rlwinm. r0, r0, 0, 3, 3
/* 800FF28C 000FC1CC  41 82 00 C0 */	beq .L_800FF34C
/* 800FF290 000FC1D0  80 8D 91 E8 */	lwz r4, mTotalCount__Q24Game15GeneralEnemyMgr@sda21(r13)
/* 800FF294 000FC1D4  7F C3 F3 78 */	mr r3, r30
/* 800FF298 000FC1D8  38 04 00 01 */	addi r0, r4, 1
/* 800FF29C 000FC1DC  90 0D 91 E8 */	stw r0, mTotalCount__Q24Game15GeneralEnemyMgr@sda21(r13)
/* 800FF2A0 000FC1E0  48 00 44 09 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 800FF2A4 000FC1E4  7C 7F 1B 78 */	mr r31, r3
/* 800FF2A8 000FC1E8  7F C3 F3 78 */	mr r3, r30
/* 800FF2AC 000FC1EC  48 03 CA BD */	bl updateCell__Q24Game8CreatureFv
/* 800FF2B0 000FC1F0  7F C3 F3 78 */	mr r3, r30
/* 800FF2B4 000FC1F4  38 9E 02 64 */	addi r4, r30, 0x264
/* 800FF2B8 000FC1F8  48 0D 85 85 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 800FF2BC 000FC1FC  7F C3 F3 78 */	mr r3, r30
/* 800FF2C0 000FC200  48 00 43 E9 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 800FF2C4 000FC204  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF2C8 000FC208  41 82 00 50 */	beq .L_800FF318
/* 800FF2CC 000FC20C  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 800FF2D0 000FC210  54 00 04 21 */	rlwinm. r0, r0, 0, 0x10, 0x10
/* 800FF2D4 000FC214  41 82 00 1C */	beq .L_800FF2F0
/* 800FF2D8 000FC218  7F C3 F3 78 */	mr r3, r30
/* 800FF2DC 000FC21C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF2E0 000FC220  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 800FF2E4 000FC224  7D 89 03 A6 */	mtctr r12
/* 800FF2E8 000FC228  4E 80 04 21 */	bctrl 
/* 800FF2EC 000FC22C  48 00 00 18 */	b .L_800FF304
.L_800FF2F0:
/* 800FF2F0 000FC230  7F C3 F3 78 */	mr r3, r30
/* 800FF2F4 000FC234  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF2F8 000FC238  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 800FF2FC 000FC23C  7D 89 03 A6 */	mtctr r12
/* 800FF300 000FC240  4E 80 04 21 */	bctrl 
.L_800FF304:
/* 800FF304 000FC244  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 800FF308 000FC248  40 82 00 44 */	bne .L_800FF34C
/* 800FF30C 000FC24C  7F C3 F3 78 */	mr r3, r30
/* 800FF310 000FC250  48 00 24 BD */	bl createEffects__Q24Game9EnemyBaseFv
/* 800FF314 000FC254  48 00 00 38 */	b .L_800FF34C
.L_800FF318:
/* 800FF318 000FC258  80 8D 91 E4 */	lwz r4, mCullCount__Q24Game15GeneralEnemyMgr@sda21(r13)
/* 800FF31C 000FC25C  7F C3 F3 78 */	mr r3, r30
/* 800FF320 000FC260  38 04 00 01 */	addi r0, r4, 1
/* 800FF324 000FC264  90 0D 91 E4 */	stw r0, mCullCount__Q24Game15GeneralEnemyMgr@sda21(r13)
/* 800FF328 000FC268  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF32C 000FC26C  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 800FF330 000FC270  7D 89 03 A6 */	mtctr r12
/* 800FF334 000FC274  4E 80 04 21 */	bctrl 
/* 800FF338 000FC278  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 800FF33C 000FC27C  28 00 00 01 */	cmplwi r0, 1
/* 800FF340 000FC280  40 82 00 0C */	bne .L_800FF34C
/* 800FF344 000FC284  7F C3 F3 78 */	mr r3, r30
/* 800FF348 000FC288  48 00 24 E1 */	bl fadeEffects__Q24Game9EnemyBaseFv
.L_800FF34C:
/* 800FF34C 000FC28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FF350 000FC290  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800FF354 000FC294  83 C1 00 08 */	lwz r30, 8(r1)
/* 800FF358 000FC298  7C 08 03 A6 */	mtlr r0
/* 800FF35C 000FC29C  38 21 00 10 */	addi r1, r1, 0x10
/* 800FF360 000FC2A0  4E 80 00 20 */	blr 

.global isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase:
/* 800FF364 000FC2A4  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 800FF368 000FC2A8  7C 08 02 A6 */	mflr r0
/* 800FF36C 000FC2AC  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 800FF370 000FC2B0  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 800FF374 000FC2B4  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 800FF378 000FC2B8  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 800FF37C 000FC2BC  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 800FF380 000FC2C0  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 800FF384 000FC2C4  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 800FF388 000FC2C8  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 800FF38C 000FC2CC  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 800FF390 000FC2D0  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 800FF394 000FC2D4  7C 9D 23 78 */	mr r29, r4
/* 800FF398 000FC2D8  38 61 00 48 */	addi r3, r1, 0x48
/* 800FF39C 000FC2DC  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 800FF3A0 000FC2E0  38 81 00 38 */	addi r4, r1, 0x38
/* 800FF3A4 000FC2E4  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 800FF3A8 000FC2E8  3B E0 00 00 */	li r31, 0
/* 800FF3AC 000FC2EC  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 800FF3B0 000FC2F0  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 800FF3B4 000FC2F4  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 800FF3B8 000FC2F8  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 800FF3BC 000FC2FC  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 800FF3C0 000FC300  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 800FF3C4 000FC304  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 800FF3C8 000FC308  48 12 EF D9 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 800FF3CC 000FC30C  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF3D0 000FC310  38 81 00 48 */	addi r4, r1, 0x48
/* 800FF3D4 000FC314  48 12 F0 0D */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 800FF3D8 000FC318  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF3DC 000FC31C  48 12 F0 81 */	bl first__Q24Game12CellIteratorFv
/* 800FF3E0 000FC320  48 00 01 1C */	b .L_800FF4FC
.L_800FF3E4:
/* 800FF3E4 000FC324  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF3E8 000FC328  48 12 F1 5D */	bl __ml__Q24Game12CellIteratorFv
/* 800FF3EC 000FC32C  81 83 00 00 */	lwz r12, 0(r3)
/* 800FF3F0 000FC330  7C 7E 1B 78 */	mr r30, r3
/* 800FF3F4 000FC334  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 800FF3F8 000FC338  7D 89 03 A6 */	mtctr r12
/* 800FF3FC 000FC33C  4E 80 04 21 */	bctrl 
/* 800FF400 000FC340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF404 000FC344  41 82 00 F0 */	beq .L_800FF4F4
/* 800FF408 000FC348  7F C3 F3 78 */	mr r3, r30
/* 800FF40C 000FC34C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF410 000FC350  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800FF414 000FC354  7D 89 03 A6 */	mtctr r12
/* 800FF418 000FC358  4E 80 04 21 */	bctrl 
/* 800FF41C 000FC35C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF420 000FC360  40 82 00 3C */	bne .L_800FF45C
/* 800FF424 000FC364  7F C3 F3 78 */	mr r3, r30
/* 800FF428 000FC368  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF42C 000FC36C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800FF430 000FC370  7D 89 03 A6 */	mtctr r12
/* 800FF434 000FC374  4E 80 04 21 */	bctrl 
/* 800FF438 000FC378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF43C 000FC37C  41 82 00 B8 */	beq .L_800FF4F4
/* 800FF440 000FC380  7F C3 F3 78 */	mr r3, r30
/* 800FF444 000FC384  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF448 000FC388  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 800FF44C 000FC38C  7D 89 03 A6 */	mtctr r12
/* 800FF450 000FC390  4E 80 04 21 */	bctrl 
/* 800FF454 000FC394  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF458 000FC398  41 82 00 9C */	beq .L_800FF4F4
.L_800FF45C:
/* 800FF45C 000FC39C  7F C4 F3 78 */	mr r4, r30
/* 800FF460 000FC3A0  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 800FF464 000FC3A4  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF468 000FC3A8  38 61 00 14 */	addi r3, r1, 0x14
/* 800FF46C 000FC3AC  C3 A5 03 AC */	lfs f29, 0x3ac(r5)
/* 800FF470 000FC3B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF474 000FC3B4  7D 89 03 A6 */	mtctr r12
/* 800FF478 000FC3B8  4E 80 04 21 */	bctrl 
/* 800FF47C 000FC3BC  7F A4 EB 78 */	mr r4, r29
/* 800FF480 000FC3C0  38 61 00 08 */	addi r3, r1, 8
/* 800FF484 000FC3C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FF488 000FC3C8  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 800FF48C 000FC3CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF490 000FC3D0  7D 89 03 A6 */	mtctr r12
/* 800FF494 000FC3D4  4E 80 04 21 */	bctrl 
/* 800FF498 000FC3D8  7F C4 F3 78 */	mr r4, r30
/* 800FF49C 000FC3DC  C0 01 00 08 */	lfs f0, 8(r1)
/* 800FF4A0 000FC3E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF4A4 000FC3E4  38 61 00 2C */	addi r3, r1, 0x2c
/* 800FF4A8 000FC3E8  EF C0 F8 28 */	fsubs f30, f0, f31
/* 800FF4AC 000FC3EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF4B0 000FC3F0  7D 89 03 A6 */	mtctr r12
/* 800FF4B4 000FC3F4  4E 80 04 21 */	bctrl 
/* 800FF4B8 000FC3F8  7F A4 EB 78 */	mr r4, r29
/* 800FF4BC 000FC3FC  38 61 00 20 */	addi r3, r1, 0x20
/* 800FF4C0 000FC400  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FF4C4 000FC404  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 800FF4C8 000FC408  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF4CC 000FC40C  7D 89 03 A6 */	mtctr r12
/* 800FF4D0 000FC410  4E 80 04 21 */	bctrl 
/* 800FF4D4 000FC414  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 800FF4D8 000FC418  EC 1D 07 72 */	fmuls f0, f29, f29
/* 800FF4DC 000FC41C  EC 21 F8 28 */	fsubs f1, f1, f31
/* 800FF4E0 000FC420  EC 21 00 72 */	fmuls f1, f1, f1
/* 800FF4E4 000FC424  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 800FF4E8 000FC428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800FF4EC 000FC42C  40 80 00 08 */	bge .L_800FF4F4
/* 800FF4F0 000FC430  3B E0 00 01 */	li r31, 1
.L_800FF4F4:
/* 800FF4F4 000FC434  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF4F8 000FC438  48 12 F0 09 */	bl next__Q24Game12CellIteratorFv
.L_800FF4FC:
/* 800FF4FC 000FC43C  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF500 000FC440  48 12 F0 35 */	bl isDone__Q24Game12CellIteratorFv
/* 800FF504 000FC444  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF508 000FC448  41 82 FE DC */	beq .L_800FF3E4
/* 800FF50C 000FC44C  7F E3 FB 78 */	mr r3, r31
/* 800FF510 000FC450  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 800FF514 000FC454  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 800FF518 000FC458  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 800FF51C 000FC45C  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 800FF520 000FC460  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 800FF524 000FC464  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 800FF528 000FC468  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 800FF52C 000FC46C  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 800FF530 000FC470  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 800FF534 000FC474  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 800FF538 000FC478  7C 08 03 A6 */	mtlr r0
/* 800FF53C 000FC47C  38 21 00 F0 */	addi r1, r1, 0xf0
/* 800FF540 000FC480  4E 80 00 20 */	blr 

.global isAlive__Q24Game8CreatureFv
isAlive__Q24Game8CreatureFv:
/* 800FF544 000FC484  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 800FF548 000FC488  54 03 FF FE */	rlwinm r3, r0, 0x1f, 0x1f, 0x1f
/* 800FF54C 000FC48C  4E 80 00 20 */	blr 

.global init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 800FF550 000FC490  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800FF554 000FC494  7C 08 02 A6 */	mflr r0
/* 800FF558 000FC498  90 01 00 34 */	stw r0, 0x34(r1)
/* 800FF55C 000FC49C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800FF560 000FC4A0  7C 9F 23 78 */	mr r31, r4
/* 800FF564 000FC4A4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 800FF568 000FC4A8  28 03 00 00 */	cmplwi r3, 0
/* 800FF56C 000FC4AC  41 82 01 4C */	beq .L_800FF6B8
/* 800FF570 000FC4B0  81 83 00 04 */	lwz r12, 4(r3)
/* 800FF574 000FC4B4  38 9F 01 8C */	addi r4, r31, 0x18c
/* 800FF578 000FC4B8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 800FF57C 000FC4BC  7D 89 03 A6 */	mtctr r12
/* 800FF580 000FC4C0  4E 80 04 21 */	bctrl 
/* 800FF584 000FC4C4  C0 02 94 38 */	lfs f0, lbl_80517798@sda21(r2)
/* 800FF588 000FC4C8  7F E3 FB 78 */	mr r3, r31
/* 800FF58C 000FC4CC  EC 00 08 2A */	fadds f0, f0, f1
/* 800FF590 000FC4D0  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 800FF594 000FC4D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 800FF598 000FC4D8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 800FF59C 000FC4DC  7D 89 03 A6 */	mtctr r12
/* 800FF5A0 000FC4E0  4E 80 04 21 */	bctrl 
/* 800FF5A4 000FC4E4  2C 03 00 03 */	cmpwi r3, 3
/* 800FF5A8 000FC4E8  41 82 01 10 */	beq .L_800FF6B8
/* 800FF5AC 000FC4EC  2C 03 00 04 */	cmpwi r3, 4
/* 800FF5B0 000FC4F0  41 82 01 08 */	beq .L_800FF6B8
/* 800FF5B4 000FC4F4  2C 03 00 05 */	cmpwi r3, 5
/* 800FF5B8 000FC4F8  41 82 01 00 */	beq .L_800FF6B8
/* 800FF5BC 000FC4FC  2C 03 00 06 */	cmpwi r3, 6
/* 800FF5C0 000FC500  41 82 00 F8 */	beq .L_800FF6B8
/* 800FF5C4 000FC504  2C 03 00 07 */	cmpwi r3, 7
/* 800FF5C8 000FC508  41 82 00 F0 */	beq .L_800FF6B8
/* 800FF5CC 000FC50C  2C 03 00 08 */	cmpwi r3, 8
/* 800FF5D0 000FC510  41 82 00 E8 */	beq .L_800FF6B8
/* 800FF5D4 000FC514  4B FC 9F CD */	bl rand
/* 800FF5D8 000FC518  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 800FF5DC 000FC51C  3C 00 43 30 */	lis r0, 0x4330
/* 800FF5E0 000FC520  90 61 00 0C */	stw r3, 0xc(r1)
/* 800FF5E4 000FC524  C8 62 94 58 */	lfd f3, lbl_805177B8@sda21(r2)
/* 800FF5E8 000FC528  90 01 00 08 */	stw r0, 8(r1)
/* 800FF5EC 000FC52C  C0 42 94 3C */	lfs f2, lbl_8051779C@sda21(r2)
/* 800FF5F0 000FC530  C8 01 00 08 */	lfd f0, 8(r1)
/* 800FF5F4 000FC534  C0 22 94 40 */	lfs f1, lbl_805177A0@sda21(r2)
/* 800FF5F8 000FC538  EC 80 18 28 */	fsubs f4, f0, f3
/* 800FF5FC 000FC53C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 800FF600 000FC540  C0 62 94 44 */	lfs f3, lbl_805177A4@sda21(r2)
/* 800FF604 000FC544  EC 44 10 24 */	fdivs f2, f4, f2
/* 800FF608 000FC548  EC 81 00 B2 */	fmuls f4, f1, f2
/* 800FF60C 000FC54C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 800FF610 000FC550  40 80 00 30 */	bge .L_800FF640
/* 800FF614 000FC554  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 800FF618 000FC558  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 800FF61C 000FC55C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 800FF620 000FC560  EC 04 00 32 */	fmuls f0, f4, f0
/* 800FF624 000FC564  FC 00 00 1E */	fctiwz f0, f0
/* 800FF628 000FC568  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800FF62C 000FC56C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FF630 000FC570  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 800FF634 000FC574  7C 03 04 2E */	lfsx f0, r3, r0
/* 800FF638 000FC578  FC 40 00 50 */	fneg f2, f0
/* 800FF63C 000FC57C  48 00 00 28 */	b .L_800FF664
.L_800FF640:
/* 800FF640 000FC580  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 800FF644 000FC584  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 800FF648 000FC588  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 800FF64C 000FC58C  EC 04 00 32 */	fmuls f0, f4, f0
/* 800FF650 000FC590  FC 00 00 1E */	fctiwz f0, f0
/* 800FF654 000FC594  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 800FF658 000FC598  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800FF65C 000FC59C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 800FF660 000FC5A0  7C 43 04 2E */	lfsx f2, r3, r0
.L_800FF664:
/* 800FF664 000FC5A4  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 800FF668 000FC5A8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 800FF66C 000FC5AC  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 800FF670 000FC5B0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 800FF674 000FC5B4  D0 3F 01 8C */	stfs f1, 0x18c(r31)
/* 800FF678 000FC5B8  40 80 00 08 */	bge .L_800FF680
/* 800FF67C 000FC5BC  FC 80 20 50 */	fneg f4, f4
.L_800FF680:
/* 800FF680 000FC5C0  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 800FF684 000FC5C4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 800FF688 000FC5C8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 800FF68C 000FC5CC  C0 42 94 44 */	lfs f2, lbl_805177A4@sda21(r2)
/* 800FF690 000FC5D0  EC 24 00 32 */	fmuls f1, f4, f0
/* 800FF694 000FC5D4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 800FF698 000FC5D8  FC 20 08 1E */	fctiwz f1, f1
/* 800FF69C 000FC5DC  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 800FF6A0 000FC5E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800FF6A4 000FC5E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 800FF6A8 000FC5E8  7C 63 02 14 */	add r3, r3, r0
/* 800FF6AC 000FC5EC  C0 23 00 04 */	lfs f1, 4(r3)
/* 800FF6B0 000FC5F0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 800FF6B4 000FC5F4  D0 1F 01 94 */	stfs f0, 0x194(r31)
.L_800FF6B8:
/* 800FF6B8 000FC5F8  7F E3 FB 78 */	mr r3, r31
/* 800FF6BC 000FC5FC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 800FF6C0 000FC600  38 A0 00 00 */	li r5, 0
/* 800FF6C4 000FC604  48 03 BA E5 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 800FF6C8 000FC608  7F E3 FB 78 */	mr r3, r31
/* 800FF6CC 000FC60C  48 03 C6 9D */	bl updateCell__Q24Game8CreatureFv
/* 800FF6D0 000FC610  7F E3 FB 78 */	mr r3, r31
/* 800FF6D4 000FC614  81 9F 00 00 */	lwz r12, 0(r31)
/* 800FF6D8 000FC618  81 8C 02 D4 */	lwz r12, 0x2d4(r12)
/* 800FF6DC 000FC61C  7D 89 03 A6 */	mtctr r12
/* 800FF6E0 000FC620  4E 80 04 21 */	bctrl 
/* 800FF6E4 000FC624  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800FF6E8 000FC628  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800FF6EC 000FC62C  7C 08 03 A6 */	mtlr r0
/* 800FF6F0 000FC630  38 21 00 30 */	addi r1, r1, 0x30
/* 800FF6F4 000FC634  4E 80 00 20 */	blr 

.global update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
update__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase:
/* 800FF6F8 000FC638  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800FF6FC 000FC63C  7C 08 02 A6 */	mflr r0
/* 800FF700 000FC640  90 01 00 14 */	stw r0, 0x14(r1)
/* 800FF704 000FC644  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800FF708 000FC648  7C 9F 23 78 */	mr r31, r4
/* 800FF70C 000FC64C  93 C1 00 08 */	stw r30, 8(r1)
/* 800FF710 000FC650  7C 7E 1B 78 */	mr r30, r3
/* 800FF714 000FC654  81 83 00 00 */	lwz r12, 0(r3)
/* 800FF718 000FC658  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 800FF71C 000FC65C  7D 89 03 A6 */	mtctr r12
/* 800FF720 000FC660  4E 80 04 21 */	bctrl 
/* 800FF724 000FC664  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF728 000FC668  41 82 00 24 */	beq .L_800FF74C
/* 800FF72C 000FC66C  7F C3 F3 78 */	mr r3, r30
/* 800FF730 000FC670  7F E4 FB 78 */	mr r4, r31
/* 800FF734 000FC674  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF738 000FC678  38 A0 00 05 */	li r5, 5
/* 800FF73C 000FC67C  38 C0 00 00 */	li r6, 0
/* 800FF740 000FC680  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800FF744 000FC684  7D 89 03 A6 */	mtctr r12
/* 800FF748 000FC688  4E 80 04 21 */	bctrl 
.L_800FF74C:
/* 800FF74C 000FC68C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FF750 000FC690  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800FF754 000FC694  83 C1 00 08 */	lwz r30, 8(r1)
/* 800FF758 000FC698  7C 08 03 A6 */	mtlr r0
/* 800FF75C 000FC69C  38 21 00 10 */	addi r1, r1, 0x10
/* 800FF760 000FC6A0  4E 80 00 20 */	blr 

.global cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
cleanup__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase:
/* 800FF764 000FC6A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800FF768 000FC6A8  7C 08 02 A6 */	mflr r0
/* 800FF76C 000FC6AC  7C 83 23 78 */	mr r3, r4
/* 800FF770 000FC6B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800FF774 000FC6B4  81 84 00 00 */	lwz r12, 0(r4)
/* 800FF778 000FC6B8  81 8C 02 D8 */	lwz r12, 0x2d8(r12)
/* 800FF77C 000FC6BC  7D 89 03 A6 */	mtctr r12
/* 800FF780 000FC6C0  4E 80 04 21 */	bctrl 
/* 800FF784 000FC6C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FF788 000FC6C8  7C 08 03 A6 */	mtlr r0
/* 800FF78C 000FC6CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800FF790 000FC6D0  4E 80 00 20 */	blr 

.global isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM24BirthTypeDropPikminStateFPQ24Game9EnemyBase
isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM24BirthTypeDropPikminStateFPQ24Game9EnemyBase:
/* 800FF794 000FC6D4  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 800FF798 000FC6D8  7C 08 02 A6 */	mflr r0
/* 800FF79C 000FC6DC  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 800FF7A0 000FC6E0  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 800FF7A4 000FC6E4  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 800FF7A8 000FC6E8  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 800FF7AC 000FC6EC  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 800FF7B0 000FC6F0  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 800FF7B4 000FC6F4  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 800FF7B8 000FC6F8  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 800FF7BC 000FC6FC  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 800FF7C0 000FC700  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 800FF7C4 000FC704  7C 9D 23 78 */	mr r29, r4
/* 800FF7C8 000FC708  38 61 00 48 */	addi r3, r1, 0x48
/* 800FF7CC 000FC70C  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 800FF7D0 000FC710  38 81 00 38 */	addi r4, r1, 0x38
/* 800FF7D4 000FC714  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 800FF7D8 000FC718  3B E0 00 00 */	li r31, 0
/* 800FF7DC 000FC71C  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 800FF7E0 000FC720  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 800FF7E4 000FC724  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 800FF7E8 000FC728  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 800FF7EC 000FC72C  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 800FF7F0 000FC730  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 800FF7F4 000FC734  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 800FF7F8 000FC738  48 12 EB A9 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 800FF7FC 000FC73C  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF800 000FC740  38 81 00 48 */	addi r4, r1, 0x48
/* 800FF804 000FC744  48 12 EB DD */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 800FF808 000FC748  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF80C 000FC74C  48 12 EC 51 */	bl first__Q24Game12CellIteratorFv
/* 800FF810 000FC750  48 00 01 00 */	b .L_800FF910
.L_800FF814:
/* 800FF814 000FC754  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF818 000FC758  48 12 ED 2D */	bl __ml__Q24Game12CellIteratorFv
/* 800FF81C 000FC75C  81 83 00 00 */	lwz r12, 0(r3)
/* 800FF820 000FC760  7C 7E 1B 78 */	mr r30, r3
/* 800FF824 000FC764  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 800FF828 000FC768  7D 89 03 A6 */	mtctr r12
/* 800FF82C 000FC76C  4E 80 04 21 */	bctrl 
/* 800FF830 000FC770  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF834 000FC774  41 82 00 D4 */	beq .L_800FF908
/* 800FF838 000FC778  7F C3 F3 78 */	mr r3, r30
/* 800FF83C 000FC77C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF840 000FC780  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800FF844 000FC784  7D 89 03 A6 */	mtctr r12
/* 800FF848 000FC788  4E 80 04 21 */	bctrl 
/* 800FF84C 000FC78C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF850 000FC790  41 82 00 B8 */	beq .L_800FF908
/* 800FF854 000FC794  7F C3 F3 78 */	mr r3, r30
/* 800FF858 000FC798  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF85C 000FC79C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 800FF860 000FC7A0  7D 89 03 A6 */	mtctr r12
/* 800FF864 000FC7A4  4E 80 04 21 */	bctrl 
/* 800FF868 000FC7A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF86C 000FC7AC  41 82 00 9C */	beq .L_800FF908
/* 800FF870 000FC7B0  7F C4 F3 78 */	mr r4, r30
/* 800FF874 000FC7B4  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 800FF878 000FC7B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF87C 000FC7BC  38 61 00 14 */	addi r3, r1, 0x14
/* 800FF880 000FC7C0  C3 A5 03 AC */	lfs f29, 0x3ac(r5)
/* 800FF884 000FC7C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF888 000FC7C8  7D 89 03 A6 */	mtctr r12
/* 800FF88C 000FC7CC  4E 80 04 21 */	bctrl 
/* 800FF890 000FC7D0  7F A4 EB 78 */	mr r4, r29
/* 800FF894 000FC7D4  38 61 00 08 */	addi r3, r1, 8
/* 800FF898 000FC7D8  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FF89C 000FC7DC  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 800FF8A0 000FC7E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF8A4 000FC7E4  7D 89 03 A6 */	mtctr r12
/* 800FF8A8 000FC7E8  4E 80 04 21 */	bctrl 
/* 800FF8AC 000FC7EC  7F C4 F3 78 */	mr r4, r30
/* 800FF8B0 000FC7F0  C0 01 00 08 */	lfs f0, 8(r1)
/* 800FF8B4 000FC7F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FF8B8 000FC7F8  38 61 00 2C */	addi r3, r1, 0x2c
/* 800FF8BC 000FC7FC  EF C0 F8 28 */	fsubs f30, f0, f31
/* 800FF8C0 000FC800  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF8C4 000FC804  7D 89 03 A6 */	mtctr r12
/* 800FF8C8 000FC808  4E 80 04 21 */	bctrl 
/* 800FF8CC 000FC80C  7F A4 EB 78 */	mr r4, r29
/* 800FF8D0 000FC810  38 61 00 20 */	addi r3, r1, 0x20
/* 800FF8D4 000FC814  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FF8D8 000FC818  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 800FF8DC 000FC81C  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FF8E0 000FC820  7D 89 03 A6 */	mtctr r12
/* 800FF8E4 000FC824  4E 80 04 21 */	bctrl 
/* 800FF8E8 000FC828  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 800FF8EC 000FC82C  EC 1D 07 72 */	fmuls f0, f29, f29
/* 800FF8F0 000FC830  EC 21 F8 28 */	fsubs f1, f1, f31
/* 800FF8F4 000FC834  EC 21 00 72 */	fmuls f1, f1, f1
/* 800FF8F8 000FC838  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 800FF8FC 000FC83C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800FF900 000FC840  40 80 00 08 */	bge .L_800FF908
/* 800FF904 000FC844  3B E0 00 01 */	li r31, 1
.L_800FF908:
/* 800FF908 000FC848  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF90C 000FC84C  48 12 EB F5 */	bl next__Q24Game12CellIteratorFv
.L_800FF910:
/* 800FF910 000FC850  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF914 000FC854  48 12 EC 21 */	bl isDone__Q24Game12CellIteratorFv
/* 800FF918 000FC858  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF91C 000FC85C  41 82 FE F8 */	beq .L_800FF814
/* 800FF920 000FC860  7F E3 FB 78 */	mr r3, r31
/* 800FF924 000FC864  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 800FF928 000FC868  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 800FF92C 000FC86C  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 800FF930 000FC870  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 800FF934 000FC874  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 800FF938 000FC878  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 800FF93C 000FC87C  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 800FF940 000FC880  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 800FF944 000FC884  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 800FF948 000FC888  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 800FF94C 000FC88C  7C 08 03 A6 */	mtlr r0
/* 800FF950 000FC890  38 21 00 F0 */	addi r1, r1, 0xf0
/* 800FF954 000FC894  4E 80 00 20 */	blr 

.global isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarStateFPQ24Game9EnemyBase
isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarStateFPQ24Game9EnemyBase:
/* 800FF958 000FC898  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 800FF95C 000FC89C  7C 08 02 A6 */	mflr r0
/* 800FF960 000FC8A0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 800FF964 000FC8A4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 800FF968 000FC8A8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 800FF96C 000FC8AC  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 800FF970 000FC8B0  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 800FF974 000FC8B4  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 800FF978 000FC8B8  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 800FF97C 000FC8BC  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 800FF980 000FC8C0  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 800FF984 000FC8C4  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 800FF988 000FC8C8  7C 9D 23 78 */	mr r29, r4
/* 800FF98C 000FC8CC  38 61 00 48 */	addi r3, r1, 0x48
/* 800FF990 000FC8D0  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 800FF994 000FC8D4  38 81 00 38 */	addi r4, r1, 0x38
/* 800FF998 000FC8D8  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 800FF99C 000FC8DC  3B E0 00 00 */	li r31, 0
/* 800FF9A0 000FC8E0  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 800FF9A4 000FC8E4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 800FF9A8 000FC8E8  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 800FF9AC 000FC8EC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 800FF9B0 000FC8F0  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 800FF9B4 000FC8F4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 800FF9B8 000FC8F8  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 800FF9BC 000FC8FC  48 12 E9 E5 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 800FF9C0 000FC900  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF9C4 000FC904  38 81 00 48 */	addi r4, r1, 0x48
/* 800FF9C8 000FC908  48 12 EA 19 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 800FF9CC 000FC90C  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF9D0 000FC910  48 12 EA 8D */	bl first__Q24Game12CellIteratorFv
/* 800FF9D4 000FC914  48 00 00 E4 */	b .L_800FFAB8
.L_800FF9D8:
/* 800FF9D8 000FC918  38 61 00 68 */	addi r3, r1, 0x68
/* 800FF9DC 000FC91C  48 12 EB 69 */	bl __ml__Q24Game12CellIteratorFv
/* 800FF9E0 000FC920  81 83 00 00 */	lwz r12, 0(r3)
/* 800FF9E4 000FC924  7C 7E 1B 78 */	mr r30, r3
/* 800FF9E8 000FC928  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 800FF9EC 000FC92C  7D 89 03 A6 */	mtctr r12
/* 800FF9F0 000FC930  4E 80 04 21 */	bctrl 
/* 800FF9F4 000FC934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FF9F8 000FC938  41 82 00 B8 */	beq .L_800FFAB0
/* 800FF9FC 000FC93C  7F C3 F3 78 */	mr r3, r30
/* 800FFA00 000FC940  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFA04 000FC944  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800FFA08 000FC948  7D 89 03 A6 */	mtctr r12
/* 800FFA0C 000FC94C  4E 80 04 21 */	bctrl 
/* 800FFA10 000FC950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFA14 000FC954  41 82 00 9C */	beq .L_800FFAB0
/* 800FFA18 000FC958  7F C4 F3 78 */	mr r4, r30
/* 800FFA1C 000FC95C  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 800FFA20 000FC960  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFA24 000FC964  38 61 00 14 */	addi r3, r1, 0x14
/* 800FFA28 000FC968  C3 A5 03 AC */	lfs f29, 0x3ac(r5)
/* 800FFA2C 000FC96C  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFA30 000FC970  7D 89 03 A6 */	mtctr r12
/* 800FFA34 000FC974  4E 80 04 21 */	bctrl 
/* 800FFA38 000FC978  7F A4 EB 78 */	mr r4, r29
/* 800FFA3C 000FC97C  38 61 00 08 */	addi r3, r1, 8
/* 800FFA40 000FC980  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FFA44 000FC984  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 800FFA48 000FC988  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFA4C 000FC98C  7D 89 03 A6 */	mtctr r12
/* 800FFA50 000FC990  4E 80 04 21 */	bctrl 
/* 800FFA54 000FC994  7F C4 F3 78 */	mr r4, r30
/* 800FFA58 000FC998  C0 01 00 08 */	lfs f0, 8(r1)
/* 800FFA5C 000FC99C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFA60 000FC9A0  38 61 00 2C */	addi r3, r1, 0x2c
/* 800FFA64 000FC9A4  EF C0 F8 28 */	fsubs f30, f0, f31
/* 800FFA68 000FC9A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFA6C 000FC9AC  7D 89 03 A6 */	mtctr r12
/* 800FFA70 000FC9B0  4E 80 04 21 */	bctrl 
/* 800FFA74 000FC9B4  7F A4 EB 78 */	mr r4, r29
/* 800FFA78 000FC9B8  38 61 00 20 */	addi r3, r1, 0x20
/* 800FFA7C 000FC9BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FFA80 000FC9C0  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 800FFA84 000FC9C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFA88 000FC9C8  7D 89 03 A6 */	mtctr r12
/* 800FFA8C 000FC9CC  4E 80 04 21 */	bctrl 
/* 800FFA90 000FC9D0  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 800FFA94 000FC9D4  EC 1D 07 72 */	fmuls f0, f29, f29
/* 800FFA98 000FC9D8  EC 21 F8 28 */	fsubs f1, f1, f31
/* 800FFA9C 000FC9DC  EC 21 00 72 */	fmuls f1, f1, f1
/* 800FFAA0 000FC9E0  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 800FFAA4 000FC9E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800FFAA8 000FC9E8  40 80 00 08 */	bge .L_800FFAB0
/* 800FFAAC 000FC9EC  3B E0 00 01 */	li r31, 1
.L_800FFAB0:
/* 800FFAB0 000FC9F0  38 61 00 68 */	addi r3, r1, 0x68
/* 800FFAB4 000FC9F4  48 12 EA 4D */	bl next__Q24Game12CellIteratorFv
.L_800FFAB8:
/* 800FFAB8 000FC9F8  38 61 00 68 */	addi r3, r1, 0x68
/* 800FFABC 000FC9FC  48 12 EA 79 */	bl isDone__Q24Game12CellIteratorFv
/* 800FFAC0 000FCA00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFAC4 000FCA04  41 82 FF 14 */	beq .L_800FF9D8
/* 800FFAC8 000FCA08  7F E3 FB 78 */	mr r3, r31
/* 800FFACC 000FCA0C  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 800FFAD0 000FCA10  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 800FFAD4 000FCA14  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 800FFAD8 000FCA18  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 800FFADC 000FCA1C  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 800FFAE0 000FCA20  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 800FFAE4 000FCA24  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 800FFAE8 000FCA28  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 800FFAEC 000FCA2C  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 800FFAF0 000FCA30  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 800FFAF4 000FCA34  7C 08 03 A6 */	mtlr r0
/* 800FFAF8 000FCA38  38 21 00 F0 */	addi r1, r1, 0xf0
/* 800FFAFC 000FCA3C  4E 80 00 20 */	blr 

.global isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureStateFPQ24Game9EnemyBase
isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureStateFPQ24Game9EnemyBase:
/* 800FFB00 000FCA40  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 800FFB04 000FCA44  7C 08 02 A6 */	mflr r0
/* 800FFB08 000FCA48  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 800FFB0C 000FCA4C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 800FFB10 000FCA50  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 800FFB14 000FCA54  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 800FFB18 000FCA58  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 800FFB1C 000FCA5C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 800FFB20 000FCA60  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 800FFB24 000FCA64  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 800FFB28 000FCA68  93 C1 00 68 */	stw r30, 0x68(r1)
/* 800FFB2C 000FCA6C  93 A1 00 64 */	stw r29, 0x64(r1)
/* 800FFB30 000FCA70  7C 9D 23 78 */	mr r29, r4
/* 800FFB34 000FCA74  38 61 00 44 */	addi r3, r1, 0x44
/* 800FFB38 000FCA78  3B E0 00 00 */	li r31, 0
/* 800FFB3C 000FCA7C  48 06 CE 2D */	bl __ct__Q24Game14PelletIteratorFv
/* 800FFB40 000FCA80  38 61 00 44 */	addi r3, r1, 0x44
/* 800FFB44 000FCA84  48 06 CE 3D */	bl first__Q24Game14PelletIteratorFv
/* 800FFB48 000FCA88  48 00 00 FC */	b .L_800FFC44
.L_800FFB4C:
/* 800FFB4C 000FCA8C  38 61 00 44 */	addi r3, r1, 0x44
/* 800FFB50 000FCA90  48 06 CE 7D */	bl __ml__Q24Game14PelletIteratorFv
/* 800FFB54 000FCA94  81 83 00 00 */	lwz r12, 0(r3)
/* 800FFB58 000FCA98  7C 7E 1B 78 */	mr r30, r3
/* 800FFB5C 000FCA9C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 800FFB60 000FCAA0  7D 89 03 A6 */	mtctr r12
/* 800FFB64 000FCAA4  4E 80 04 21 */	bctrl 
/* 800FFB68 000FCAA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFB6C 000FCAAC  41 82 00 D0 */	beq .L_800FFC3C
/* 800FFB70 000FCAB0  7F C3 F3 78 */	mr r3, r30
/* 800FFB74 000FCAB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFB78 000FCAB8  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 800FFB7C 000FCABC  7D 89 03 A6 */	mtctr r12
/* 800FFB80 000FCAC0  4E 80 04 21 */	bctrl 
/* 800FFB84 000FCAC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFB88 000FCAC8  41 82 00 B4 */	beq .L_800FFC3C
/* 800FFB8C 000FCACC  7F C4 F3 78 */	mr r4, r30
/* 800FFB90 000FCAD0  38 61 00 38 */	addi r3, r1, 0x38
/* 800FFB94 000FCAD4  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFB98 000FCAD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFB9C 000FCADC  7D 89 03 A6 */	mtctr r12
/* 800FFBA0 000FCAE0  4E 80 04 21 */	bctrl 
/* 800FFBA4 000FCAE4  7F C4 F3 78 */	mr r4, r30
/* 800FFBA8 000FCAE8  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 800FFBAC 000FCAEC  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFBB0 000FCAF0  38 61 00 14 */	addi r3, r1, 0x14
/* 800FFBB4 000FCAF4  C3 A5 03 AC */	lfs f29, 0x3ac(r5)
/* 800FFBB8 000FCAF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFBBC 000FCAFC  7D 89 03 A6 */	mtctr r12
/* 800FFBC0 000FCB00  4E 80 04 21 */	bctrl 
/* 800FFBC4 000FCB04  7F A4 EB 78 */	mr r4, r29
/* 800FFBC8 000FCB08  38 61 00 08 */	addi r3, r1, 8
/* 800FFBCC 000FCB0C  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FFBD0 000FCB10  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 800FFBD4 000FCB14  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFBD8 000FCB18  7D 89 03 A6 */	mtctr r12
/* 800FFBDC 000FCB1C  4E 80 04 21 */	bctrl 
/* 800FFBE0 000FCB20  7F C4 F3 78 */	mr r4, r30
/* 800FFBE4 000FCB24  C0 01 00 08 */	lfs f0, 8(r1)
/* 800FFBE8 000FCB28  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFBEC 000FCB2C  38 61 00 2C */	addi r3, r1, 0x2c
/* 800FFBF0 000FCB30  EF C0 F8 28 */	fsubs f30, f0, f31
/* 800FFBF4 000FCB34  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFBF8 000FCB38  7D 89 03 A6 */	mtctr r12
/* 800FFBFC 000FCB3C  4E 80 04 21 */	bctrl 
/* 800FFC00 000FCB40  7F A4 EB 78 */	mr r4, r29
/* 800FFC04 000FCB44  38 61 00 20 */	addi r3, r1, 0x20
/* 800FFC08 000FCB48  81 9D 00 00 */	lwz r12, 0(r29)
/* 800FFC0C 000FCB4C  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 800FFC10 000FCB50  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFC14 000FCB54  7D 89 03 A6 */	mtctr r12
/* 800FFC18 000FCB58  4E 80 04 21 */	bctrl 
/* 800FFC1C 000FCB5C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 800FFC20 000FCB60  EC 1D 07 72 */	fmuls f0, f29, f29
/* 800FFC24 000FCB64  EC 21 F8 28 */	fsubs f1, f1, f31
/* 800FFC28 000FCB68  EC 21 00 72 */	fmuls f1, f1, f1
/* 800FFC2C 000FCB6C  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 800FFC30 000FCB70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800FFC34 000FCB74  40 80 00 08 */	bge .L_800FFC3C
/* 800FFC38 000FCB78  3B E0 00 01 */	li r31, 1
.L_800FFC3C:
/* 800FFC3C 000FCB7C  38 61 00 44 */	addi r3, r1, 0x44
/* 800FFC40 000FCB80  48 06 CD F5 */	bl next__Q24Game14PelletIteratorFv
.L_800FFC44:
/* 800FFC44 000FCB84  38 61 00 44 */	addi r3, r1, 0x44
/* 800FFC48 000FCB88  48 06 CE AD */	bl isDone__Q24Game14PelletIteratorFv
/* 800FFC4C 000FCB8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFC50 000FCB90  41 82 FE FC */	beq .L_800FFB4C
/* 800FFC54 000FCB94  7F E3 FB 78 */	mr r3, r31
/* 800FFC58 000FCB98  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 800FFC5C 000FCB9C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 800FFC60 000FCBA0  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 800FFC64 000FCBA4  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 800FFC68 000FCBA8  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 800FFC6C 000FCBAC  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 800FFC70 000FCBB0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 800FFC74 000FCBB4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 800FFC78 000FCBB8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 800FFC7C 000FCBBC  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 800FFC80 000FCBC0  7C 08 03 A6 */	mtlr r0
/* 800FFC84 000FCBC4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 800FFC88 000FCBC8  4E 80 00 20 */	blr 

.global getPosition__Q24Game6PelletFv
getPosition__Q24Game6PelletFv:
/* 800FFC8C 000FCBCC  C0 04 03 AC */	lfs f0, 0x3ac(r4)
/* 800FFC90 000FCBD0  D0 03 00 00 */	stfs f0, 0(r3)
/* 800FFC94 000FCBD4  C0 04 03 B0 */	lfs f0, 0x3b0(r4)
/* 800FFC98 000FCBD8  D0 03 00 04 */	stfs f0, 4(r3)
/* 800FFC9C 000FCBDC  C0 04 03 B4 */	lfs f0, 0x3b4(r4)
/* 800FFCA0 000FCBE0  D0 03 00 08 */	stfs f0, 8(r3)
/* 800FFCA4 000FCBE4  4E 80 00 20 */	blr 

.global isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeStateFPQ24Game9EnemyBase
isFinishableWaitingBirthTypeDrop__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeStateFPQ24Game9EnemyBase:
/* 800FFCA8 000FCBE8  38 60 00 00 */	li r3, 0
/* 800FFCAC 000FCBEC  4E 80 00 20 */	blr 

.global entry__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
entry__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase:
/* 800FFCB0 000FCBF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800FFCB4 000FCBF4  7C 08 02 A6 */	mflr r0
/* 800FFCB8 000FCBF8  7C 83 23 78 */	mr r3, r4
/* 800FFCBC 000FCBFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800FFCC0 000FCC00  48 00 38 51 */	bl doEntryLiving__Q24Game9EnemyBaseFv
/* 800FFCC4 000FCC04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FFCC8 000FCC08  7C 08 03 A6 */	mtlr r0
/* 800FFCCC 000FCC0C  38 21 00 10 */	addi r1, r1, 0x10
/* 800FFCD0 000FCC10  4E 80 00 20 */	blr 

.global init__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 800FFCD4 000FCC14  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 800FFCD8 000FCC18  7C 08 02 A6 */	mflr r0
/* 800FFCDC 000FCC1C  90 01 00 64 */	stw r0, 0x64(r1)
/* 800FFCE0 000FCC20  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 800FFCE4 000FCC24  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 800FFCE8 000FCC28  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 800FFCEC 000FCC2C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 800FFCF0 000FCC30  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 800FFCF4 000FCC34  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyApsmoke@ha
/* 800FFCF8 000FCC38  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 800FFCFC 000FCC3C  7C 9E 23 78 */	mr r30, r4
/* 800FFD00 000FCC40  90 01 00 08 */	stw r0, 8(r1)
/* 800FFD04 000FCC44  38 03 85 98 */	addi r0, r3, __vt__Q23efx13TEnemyApsmoke@l
/* 800FFD08 000FCC48  7F C3 F3 78 */	mr r3, r30
/* 800FFD0C 000FCC4C  90 01 00 08 */	stw r0, 8(r1)
/* 800FFD10 000FCC50  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFD14 000FCC54  C3 E4 01 F8 */	lfs f31, 0x1f8(r4)
/* 800FFD18 000FCC58  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 800FFD1C 000FCC5C  7D 89 03 A6 */	mtctr r12
/* 800FFD20 000FCC60  4E 80 04 21 */	bctrl 
/* 800FFD24 000FCC64  7F C4 F3 78 */	mr r4, r30
/* 800FFD28 000FCC68  7C 7F 1B 78 */	mr r31, r3
/* 800FFD2C 000FCC6C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800FFD30 000FCC70  38 61 00 0C */	addi r3, r1, 0xc
/* 800FFD34 000FCC74  81 8C 00 08 */	lwz r12, 8(r12)
/* 800FFD38 000FCC78  7D 89 03 A6 */	mtctr r12
/* 800FFD3C 000FCC7C  4E 80 04 21 */	bctrl 
/* 800FFD40 000FCC80  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800FFD44 000FCC84  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 800FFD48 000FCC88  80 E1 00 10 */	lwz r7, 0x10(r1)
/* 800FFD4C 000FCC8C  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 800FFD50 000FCC90  80 C1 00 14 */	lwz r6, 0x14(r1)
/* 800FFD54 000FCC94  3C 60 80 4B */	lis r3, __vt__Q23efx12ArgEnemyType@ha
/* 800FFD58 000FCC98  90 01 00 18 */	stw r0, 0x18(r1)
/* 800FFD5C 000FCC9C  38 03 A7 E0 */	addi r0, r3, __vt__Q23efx12ArgEnemyType@l
/* 800FFD60 000FCCA0  38 61 00 08 */	addi r3, r1, 8
/* 800FFD64 000FCCA4  38 81 00 24 */	addi r4, r1, 0x24
/* 800FFD68 000FCCA8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 800FFD6C 000FCCAC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 800FFD70 000FCCB0  90 C1 00 20 */	stw r6, 0x20(r1)
/* 800FFD74 000FCCB4  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 800FFD78 000FCCB8  90 A1 00 24 */	stw r5, 0x24(r1)
/* 800FFD7C 000FCCBC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 800FFD80 000FCCC0  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 800FFD84 000FCCC4  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 800FFD88 000FCCC8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 800FFD8C 000FCCCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800FFD90 000FCCD0  93 E1 00 34 */	stw r31, 0x34(r1)
/* 800FFD94 000FCCD4  D3 E1 00 38 */	stfs f31, 0x38(r1)
/* 800FFD98 000FCCD8  48 2C 94 21 */	bl create__Q23efx13TEnemyApsmokeFPQ23efx3Arg
/* 800FFD9C 000FCCDC  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 800FFDA0 000FCCE0  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 800FFDA4 000FCCE4  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 800FFDA8 000FCCE8  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 800FFDAC 000FCCEC  D0 1E 02 14 */	stfs f0, 0x214(r30)
/* 800FFDB0 000FCCF0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 800FFDB4 000FCCF4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800FFDB8 000FCCF8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 800FFDBC 000FCCFC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 800FFDC0 000FCD00  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 800FFDC4 000FCD04  7C 08 03 A6 */	mtlr r0
/* 800FFDC8 000FCD08  38 21 00 60 */	addi r1, r1, 0x60
/* 800FFDCC 000FCD0C  4E 80 00 20 */	blr 

.global getPosition__Q24Game9EnemyBaseFv
getPosition__Q24Game9EnemyBaseFv:
/* 800FFDD0 000FCD10  C0 04 01 8C */	lfs f0, 0x18c(r4)
/* 800FFDD4 000FCD14  D0 03 00 00 */	stfs f0, 0(r3)
/* 800FFDD8 000FCD18  C0 04 01 90 */	lfs f0, 0x190(r4)
/* 800FFDDC 000FCD1C  D0 03 00 04 */	stfs f0, 4(r3)
/* 800FFDE0 000FCD20  C0 04 01 94 */	lfs f0, 0x194(r4)
/* 800FFDE4 000FCD24  D0 03 00 08 */	stfs f0, 8(r3)
/* 800FFDE8 000FCD28  4E 80 00 20 */	blr 

.global update__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
update__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase:
/* 800FFDEC 000FCD2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800FFDF0 000FCD30  7C 08 02 A6 */	mflr r0
/* 800FFDF4 000FCD34  C0 62 94 60 */	lfs f3, lbl_805177C0@sda21(r2)
/* 800FFDF8 000FCD38  90 01 00 24 */	stw r0, 0x24(r1)
/* 800FFDFC 000FCD3C  C0 22 94 64 */	lfs f1, lbl_805177C4@sda21(r2)
/* 800FFE00 000FCD40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800FFE04 000FCD44  7C 9F 23 78 */	mr r31, r4
/* 800FFE08 000FCD48  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 800FFE0C 000FCD4C  C0 04 02 14 */	lfs f0, 0x214(r4)
/* 800FFE10 000FCD50  C0 45 00 54 */	lfs f2, 0x54(r5)
/* 800FFE14 000FCD54  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 800FFE18 000FCD58  D0 04 02 14 */	stfs f0, 0x214(r4)
/* 800FFE1C 000FCD5C  C0 04 02 14 */	lfs f0, 0x214(r4)
/* 800FFE20 000FCD60  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 800FFE24 000FCD64  40 81 00 20 */	ble .L_800FFE44
/* 800FFE28 000FCD68  81 83 00 00 */	lwz r12, 0(r3)
/* 800FFE2C 000FCD6C  38 A0 00 06 */	li r5, 6
/* 800FFE30 000FCD70  38 C0 00 00 */	li r6, 0
/* 800FFE34 000FCD74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800FFE38 000FCD78  7D 89 03 A6 */	mtctr r12
/* 800FFE3C 000FCD7C  4E 80 04 21 */	bctrl 
/* 800FFE40 000FCD80  48 00 00 C8 */	b .L_800FFF08
.L_800FFE44:
/* 800FFE44 000FCD84  EC 03 00 32 */	fmuls f0, f3, f0
/* 800FFE48 000FCD88  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 800FFE4C 000FCD8C  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 800FFE50 000FCD90  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 800FFE54 000FCD94  40 81 00 08 */	ble .L_800FFE5C
/* 800FFE58 000FCD98  D0 3F 01 68 */	stfs f1, 0x168(r31)
.L_800FFE5C:
/* 800FFE5C 000FCD9C  C0 42 94 40 */	lfs f2, lbl_805177A0@sda21(r2)
/* 800FFE60 000FCDA0  C0 3F 02 14 */	lfs f1, 0x214(r31)
/* 800FFE64 000FCDA4  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 800FFE68 000FCDA8  EC 22 00 72 */	fmuls f1, f2, f1
/* 800FFE6C 000FCDAC  C0 42 94 68 */	lfs f2, lbl_805177C8@sda21(r2)
/* 800FFE70 000FCDB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800FFE74 000FCDB4  40 80 00 30 */	bge .L_800FFEA4
/* 800FFE78 000FCDB8  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 800FFE7C 000FCDBC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 800FFE80 000FCDC0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 800FFE84 000FCDC4  EC 01 00 32 */	fmuls f0, f1, f0
/* 800FFE88 000FCDC8  FC 00 00 1E */	fctiwz f0, f0
/* 800FFE8C 000FCDCC  D8 01 00 08 */	stfd f0, 8(r1)
/* 800FFE90 000FCDD0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800FFE94 000FCDD4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 800FFE98 000FCDD8  7C 03 04 2E */	lfsx f0, r3, r0
/* 800FFE9C 000FCDDC  FC 20 00 50 */	fneg f1, f0
/* 800FFEA0 000FCDE0  48 00 00 28 */	b .L_800FFEC8
.L_800FFEA4:
/* 800FFEA4 000FCDE4  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 800FFEA8 000FCDE8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 800FFEAC 000FCDEC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 800FFEB0 000FCDF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800FFEB4 000FCDF4  FC 00 00 1E */	fctiwz f0, f0
/* 800FFEB8 000FCDF8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800FFEBC 000FCDFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FFEC0 000FCE00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 800FFEC4 000FCE04  7C 23 04 2E */	lfsx f1, r3, r0
.L_800FFEC8:
/* 800FFEC8 000FCE08  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 800FFECC 000FCE0C  7F E3 FB 78 */	mr r3, r31
/* 800FFED0 000FCE10  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 800FFED4 000FCE14  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 800FFED8 000FCE18  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 800FFEDC 000FCE1C  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 800FFEE0 000FCE20  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 800FFEE4 000FCE24  81 9F 00 00 */	lwz r12, 0(r31)
/* 800FFEE8 000FCE28  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 800FFEEC 000FCE2C  7D 89 03 A6 */	mtctr r12
/* 800FFEF0 000FCE30  4E 80 04 21 */	bctrl 
/* 800FFEF4 000FCE34  7F E3 FB 78 */	mr r3, r31
/* 800FFEF8 000FCE38  81 9F 00 00 */	lwz r12, 0(r31)
/* 800FFEFC 000FCE3C  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 800FFF00 000FCE40  7D 89 03 A6 */	mtctr r12
/* 800FFF04 000FCE44  4E 80 04 21 */	bctrl 
.L_800FFF08:
/* 800FFF08 000FCE48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800FFF0C 000FCE4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800FFF10 000FCE50  7C 08 03 A6 */	mtlr r0
/* 800FFF14 000FCE54  38 21 00 20 */	addi r1, r1, 0x20
/* 800FFF18 000FCE58  4E 80 00 20 */	blr 

.global cleanup__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
cleanup__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase:
/* 800FFF1C 000FCE5C  C0 22 94 64 */	lfs f1, lbl_805177C4@sda21(r2)
/* 800FFF20 000FCE60  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 800FFF24 000FCE64  D0 24 01 68 */	stfs f1, 0x168(r4)
/* 800FFF28 000FCE68  D0 24 01 6C */	stfs f1, 0x16c(r4)
/* 800FFF2C 000FCE6C  D0 24 01 70 */	stfs f1, 0x170(r4)
/* 800FFF30 000FCE70  D0 04 02 14 */	stfs f0, 0x214(r4)
/* 800FFF34 000FCE74  4E 80 00 20 */	blr 

.global simulation__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBasef
simulation__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBasef:
/* 800FFF38 000FCE78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800FFF3C 000FCE7C  7C 08 02 A6 */	mflr r0
/* 800FFF40 000FCE80  90 01 00 24 */	stw r0, 0x24(r1)
/* 800FFF44 000FCE84  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800FFF48 000FCE88  FF E0 08 90 */	fmr f31, f1
/* 800FFF4C 000FCE8C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800FFF50 000FCE90  7C 9F 23 78 */	mr r31, r4
/* 800FFF54 000FCE94  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 800FFF58 000FCE98  54 04 03 5B */	rlwinm. r4, r0, 0, 0xd, 0xd
/* 800FFF5C 000FCE9C  40 82 00 38 */	bne .L_800FFF94
/* 800FFF60 000FCEA0  54 00 05 6B */	rlwinm. r0, r0, 0, 0x15, 0x15
/* 800FFF64 000FCEA4  38 60 00 00 */	li r3, 0
/* 800FFF68 000FCEA8  40 82 00 0C */	bne .L_800FFF74
/* 800FFF6C 000FCEAC  28 04 00 00 */	cmplwi r4, 0
/* 800FFF70 000FCEB0  41 82 00 08 */	beq .L_800FFF78
.L_800FFF74:
/* 800FFF74 000FCEB4  38 60 00 01 */	li r3, 1
.L_800FFF78:
/* 800FFF78 000FCEB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFF7C 000FCEBC  41 82 00 38 */	beq .L_800FFFB4
/* 800FFF80 000FCEC0  80 7F 01 E4 */	lwz r3, 0x1e4(r31)
/* 800FFF84 000FCEC4  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 800FFF88 000FCEC8  40 82 00 2C */	bne .L_800FFFB4
/* 800FFF8C 000FCECC  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 800FFF90 000FCED0  40 82 00 24 */	bne .L_800FFFB4
.L_800FFF94:
/* 800FFF94 000FCED4  7F E3 FB 78 */	mr r3, r31
/* 800FFF98 000FCED8  48 00 37 11 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 800FFF9C 000FCEDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFFA0 000FCEE0  41 82 00 38 */	beq .L_800FFFD8
/* 800FFFA4 000FCEE4  FC 20 F8 90 */	fmr f1, f31
/* 800FFFA8 000FCEE8  7F E3 FB 78 */	mr r3, r31
/* 800FFFAC 000FCEEC  48 00 4A E1 */	bl doSimulationConstraint__Q24Game9EnemyBaseFf
/* 800FFFB0 000FCEF0  48 00 00 28 */	b .L_800FFFD8
.L_800FFFB4:
/* 800FFFB4 000FCEF4  7F E3 FB 78 */	mr r3, r31
/* 800FFFB8 000FCEF8  48 00 36 F1 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 800FFFBC 000FCEFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800FFFC0 000FCF00  41 82 00 18 */	beq .L_800FFFD8
/* 800FFFC4 000FCF04  FC 20 F8 90 */	fmr f1, f31
/* 800FFFC8 000FCF08  7F E3 FB 78 */	mr r3, r31
/* 800FFFCC 000FCF0C  48 00 43 75 */	bl collisionMapAndPlat__Q24Game9EnemyBaseFf
/* 800FFFD0 000FCF10  7F E3 FB 78 */	mr r3, r31
/* 800FFFD4 000FCF14  48 00 6B CD */	bl updateWaterBox__Q24Game9EnemyBaseFv
.L_800FFFD8:
/* 800FFFD8 000FCF18  38 60 00 01 */	li r3, 1
/* 800FFFDC 000FCF1C  38 00 00 00 */	li r0, 0
/* 800FFFE0 000FCF20  98 61 00 08 */	stb r3, 8(r1)
/* 800FFFE4 000FCF24  7F E3 FB 78 */	mr r3, r31
/* 800FFFE8 000FCF28  38 81 00 08 */	addi r4, r1, 8
/* 800FFFEC 000FCF2C  98 01 00 08 */	stb r0, 8(r1)
/* 800FFFF0 000FCF30  48 03 BC 35 */	bl checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
/* 800FFFF4 000FCF34  2C 03 00 02 */	cmpwi r3, 2
/* 800FFFF8 000FCF38  40 82 00 34 */	bne .L_8010002C
/* 800FFFFC 000FCF3C  7F E3 FB 78 */	mr r3, r31
/* 80100000 000FCF40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100004 000FCF44  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 80100008 000FCF48  7D 89 03 A6 */	mtctr r12
/* 8010000C 000FCF4C  4E 80 04 21 */	bctrl 
/* 80100010 000FCF50  7F E3 FB 78 */	mr r3, r31
/* 80100014 000FCF54  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100018 000FCF58  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8010001C 000FCF5C  7D 89 03 A6 */	mtctr r12
/* 80100020 000FCF60  4E 80 04 21 */	bctrl 
/* 80100024 000FCF64  7F E3 FB 78 */	mr r3, r31
/* 80100028 000FCF68  48 00 4B 3D */	bl gotoHell__Q24Game9EnemyBaseFv
.L_8010002C:
/* 8010002C 000FCF6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80100030 000FCF70  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80100034 000FCF74  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80100038 000FCF78  7C 08 03 A6 */	mtlr r0
/* 8010003C 000FCF7C  38 21 00 20 */	addi r1, r1, 0x20
/* 80100040 000FCF80  4E 80 00 20 */	blr 

.global getCreatureID__Q24Game9EnemyBaseFv
getCreatureID__Q24Game9EnemyBaseFv:
/* 80100044 000FCF84  88 63 01 F1 */	lbz r3, 0x1f1(r3)
/* 80100048 000FCF88  4E 80 00 20 */	blr 

.global getCreatureName__Q24Game9EnemyBaseFv
getCreatureName__Q24Game9EnemyBaseFv:
/* 8010004C 000FCF8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100050 000FCF90  7C 08 02 A6 */	mflr r0
/* 80100054 000FCF94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100058 000FCF98  81 83 00 00 */	lwz r12, 0(r3)
/* 8010005C 000FCF9C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80100060 000FCFA0  7D 89 03 A6 */	mtctr r12
/* 80100064 000FCFA4  4E 80 04 21 */	bctrl 
/* 80100068 000FCFA8  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8010006C 000FCFAC  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 80100070 000FCFB0  48 02 32 6D */	bl getEnemyName__Q24Game13EnemyInfoFuncFii
/* 80100074 000FCFB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80100078 000FCFB8  7C 08 03 A6 */	mtlr r0
/* 8010007C 000FCFBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80100080 000FCFC0  4E 80 00 20 */	blr 

.global entry__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
entry__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase:
/* 80100084 000FCFC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100088 000FCFC8  7C 08 02 A6 */	mflr r0
/* 8010008C 000FCFCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100090 000FCFD0  80 64 01 7C */	lwz r3, 0x17c(r4)
/* 80100094 000FCFD4  80 03 00 04 */	lwz r0, 4(r3)
/* 80100098 000FCFD8  28 00 00 00 */	cmplwi r0, 0
/* 8010009C 000FCFDC  41 82 00 10 */	beq .L_801000AC
/* 801000A0 000FCFE0  7C 83 23 78 */	mr r3, r4
/* 801000A4 000FCFE4  48 00 33 65 */	bl doEntryCarcass__Q24Game9EnemyBaseFv
/* 801000A8 000FCFE8  48 00 00 0C */	b .L_801000B4
.L_801000AC:
/* 801000AC 000FCFEC  7C 83 23 78 */	mr r3, r4
/* 801000B0 000FCFF0  48 00 34 61 */	bl doEntryLiving__Q24Game9EnemyBaseFv
.L_801000B4:
/* 801000B4 000FCFF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801000B8 000FCFF8  7C 08 03 A6 */	mtlr r0
/* 801000BC 000FCFFC  38 21 00 10 */	addi r1, r1, 0x10
/* 801000C0 000FD000  4E 80 00 20 */	blr 

.global updateCullingOff__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
updateCullingOff__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase:
/* 801000C4 000FD004  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801000C8 000FD008  7C 08 02 A6 */	mflr r0
/* 801000CC 000FD00C  7C 83 23 78 */	mr r3, r4
/* 801000D0 000FD010  90 01 00 14 */	stw r0, 0x14(r1)
/* 801000D4 000FD014  81 84 00 00 */	lwz r12, 0(r4)
/* 801000D8 000FD018  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 801000DC 000FD01C  7D 89 03 A6 */	mtctr r12
/* 801000E0 000FD020  4E 80 04 21 */	bctrl 
/* 801000E4 000FD024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801000E8 000FD028  7C 08 03 A6 */	mtlr r0
/* 801000EC 000FD02C  38 21 00 10 */	addi r1, r1, 0x10
/* 801000F0 000FD030  4E 80 00 20 */	blr 

.global updateAlways__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
updateAlways__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase:
/* 801000F4 000FD034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801000F8 000FD038  7C 08 02 A6 */	mflr r0
/* 801000FC 000FD03C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100100 000FD040  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80100104 000FD044  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 80100108 000FD048  41 82 00 0C */	beq .L_80100114
/* 8010010C 000FD04C  7C 83 23 78 */	mr r3, r4
/* 80100110 000FD050  48 00 2D 55 */	bl startStoneState__Q24Game9EnemyBaseFv
.L_80100114:
/* 80100114 000FD054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80100118 000FD058  7C 08 03 A6 */	mtlr r0
/* 8010011C 000FD05C  38 21 00 10 */	addi r1, r1, 0x10
/* 80100120 000FD060  4E 80 00 20 */	blr 

.global update__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase
update__Q34Game12EnemyBaseFSM11LivingStateFPQ24Game9EnemyBase:
/* 80100124 000FD064  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100128 000FD068  7C 08 02 A6 */	mflr r0
/* 8010012C 000FD06C  3C A0 80 48 */	lis r5, lbl_8047A538@ha
/* 80100130 000FD070  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100134 000FD074  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100138 000FD078  7C 9F 23 78 */	mr r31, r4
/* 8010013C 000FD07C  38 85 A5 38 */	addi r4, r5, lbl_8047A538@l
/* 80100140 000FD080  38 A0 00 01 */	li r5, 1
/* 80100144 000FD084  93 C1 00 08 */	stw r30, 8(r1)
/* 80100148 000FD088  7C 7E 1B 78 */	mr r30, r3
/* 8010014C 000FD08C  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 80100150 000FD090  80 66 00 28 */	lwz r3, 0x28(r6)
/* 80100154 000FD094  48 32 A9 A5 */	bl _start__9SysTimersFPcb
/* 80100158 000FD098  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8010015C 000FD09C  54 00 04 1C */	rlwinm r0, r0, 0, 0x10, 0xe
/* 80100160 000FD0A0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100164 000FD0A4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100168 000FD0A8  54 00 03 DA */	rlwinm r0, r0, 0, 0xf, 0xd
/* 8010016C 000FD0AC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100170 000FD0B0  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80100174 000FD0B4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80100178 000FD0B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8010017C 000FD0BC  7D 89 03 A6 */	mtctr r12
/* 80100180 000FD0C0  4E 80 04 21 */	bctrl 
/* 80100184 000FD0C4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80100188 000FD0C8  80 03 00 04 */	lwz r0, 4(r3)
/* 8010018C 000FD0CC  28 00 00 00 */	cmplwi r0, 0
/* 80100190 000FD0D0  41 82 00 1C */	beq .L_801001AC
/* 80100194 000FD0D4  7F E3 FB 78 */	mr r3, r31
/* 80100198 000FD0D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010019C 000FD0DC  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 801001A0 000FD0E0  7D 89 03 A6 */	mtctr r12
/* 801001A4 000FD0E4  4E 80 04 21 */	bctrl 
/* 801001A8 000FD0E8  48 00 01 0C */	b .L_801002B4
.L_801001AC:
/* 801001AC 000FD0EC  7F E3 FB 78 */	mr r3, r31
/* 801001B0 000FD0F0  48 00 34 F9 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 801001B4 000FD0F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801001B8 000FD0F8  41 82 00 30 */	beq .L_801001E8
/* 801001BC 000FD0FC  7F C3 F3 78 */	mr r3, r30
/* 801001C0 000FD100  7F E4 FB 78 */	mr r4, r31
/* 801001C4 000FD104  81 9E 00 00 */	lwz r12, 0(r30)
/* 801001C8 000FD108  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801001CC 000FD10C  7D 89 03 A6 */	mtctr r12
/* 801001D0 000FD110  4E 80 04 21 */	bctrl 
/* 801001D4 000FD114  7F E3 FB 78 */	mr r3, r31
/* 801001D8 000FD118  81 9F 00 00 */	lwz r12, 0(r31)
/* 801001DC 000FD11C  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 801001E0 000FD120  7D 89 03 A6 */	mtctr r12
/* 801001E4 000FD124  4E 80 04 21 */	bctrl 
.L_801001E8:
/* 801001E8 000FD128  7F C3 F3 78 */	mr r3, r30
/* 801001EC 000FD12C  7F E4 FB 78 */	mr r4, r31
/* 801001F0 000FD130  81 9E 00 00 */	lwz r12, 0(r30)
/* 801001F4 000FD134  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801001F8 000FD138  7D 89 03 A6 */	mtctr r12
/* 801001FC 000FD13C  4E 80 04 21 */	bctrl 
/* 80100200 000FD140  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80100204 000FD144  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100208 000FD148  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8010020C 000FD14C  4C 40 13 82 */	cror 2, 0, 2
/* 80100210 000FD150  41 82 00 48 */	beq .L_80100258
/* 80100214 000FD154  7F E3 FB 78 */	mr r3, r31
/* 80100218 000FD158  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010021C 000FD15C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80100220 000FD160  7D 89 03 A6 */	mtctr r12
/* 80100224 000FD164  4E 80 04 21 */	bctrl 
/* 80100228 000FD168  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8010022C 000FD16C  41 82 00 2C */	beq .L_80100258
/* 80100230 000FD170  7F E3 FB 78 */	mr r3, r31
/* 80100234 000FD174  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100238 000FD178  81 8C 02 C0 */	lwz r12, 0x2c0(r12)
/* 8010023C 000FD17C  7D 89 03 A6 */	mtctr r12
/* 80100240 000FD180  4E 80 04 21 */	bctrl 
/* 80100244 000FD184  7F E3 FB 78 */	mr r3, r31
/* 80100248 000FD188  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010024C 000FD18C  81 8C 02 3C */	lwz r12, 0x23c(r12)
/* 80100250 000FD190  7D 89 03 A6 */	mtctr r12
/* 80100254 000FD194  4E 80 04 21 */	bctrl 
.L_80100258:
/* 80100258 000FD198  C0 3F 02 AC */	lfs f1, 0x2ac(r31)
/* 8010025C 000FD19C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100260 000FD1A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80100264 000FD1A4  40 81 00 50 */	ble .L_801002B4
/* 80100268 000FD1A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8010026C 000FD1AC  C0 3F 02 A8 */	lfs f1, 0x2a8(r31)
/* 80100270 000FD1B0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80100274 000FD1B4  EC 01 00 2A */	fadds f0, f1, f0
/* 80100278 000FD1B8  D0 1F 02 A8 */	stfs f0, 0x2a8(r31)
/* 8010027C 000FD1BC  C0 3F 02 A8 */	lfs f1, 0x2a8(r31)
/* 80100280 000FD1C0  C0 1F 02 AC */	lfs f0, 0x2ac(r31)
/* 80100284 000FD1C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80100288 000FD1C8  40 81 00 2C */	ble .L_801002B4
/* 8010028C 000FD1CC  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 80100290 000FD1D0  7F E3 FB 78 */	mr r3, r31
/* 80100294 000FD1D4  C0 42 94 64 */	lfs f2, lbl_805177C4@sda21(r2)
/* 80100298 000FD1D8  48 00 5D 95 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8010029C 000FD1DC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801002A0 000FD1E0  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 801002A4 000FD1E4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801002A8 000FD1E8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801002AC 000FD1EC  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 801002B0 000FD1F0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_801002B4:
/* 801002B4 000FD1F4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801002B8 000FD1F8  3C 60 80 48 */	lis r3, lbl_8047A538@ha
/* 801002BC 000FD1FC  38 83 A5 38 */	addi r4, r3, lbl_8047A538@l
/* 801002C0 000FD200  80 65 00 28 */	lwz r3, 0x28(r5)
/* 801002C4 000FD204  48 32 A8 39 */	bl _stop__9SysTimersFPc
/* 801002C8 000FD208  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801002CC 000FD20C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801002D0 000FD210  83 C1 00 08 */	lwz r30, 8(r1)
/* 801002D4 000FD214  7C 08 03 A6 */	mtlr r0
/* 801002D8 000FD218  38 21 00 10 */	addi r1, r1, 0x10
/* 801002DC 000FD21C  4E 80 00 20 */	blr 

.global updateCullingOff__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase
updateCullingOff__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase:
/* 801002E0 000FD220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801002E4 000FD224  7C 08 02 A6 */	mflr r0
/* 801002E8 000FD228  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801002EC 000FD22C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801002F0 000FD230  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 801002F4 000FD234  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801002F8 000FD238  4C 40 13 82 */	cror 2, 0, 2
/* 801002FC 000FD23C  40 82 00 1C */	bne .L_80100318
/* 80100300 000FD240  81 83 00 00 */	lwz r12, 0(r3)
/* 80100304 000FD244  38 A0 00 06 */	li r5, 6
/* 80100308 000FD248  38 C0 00 00 */	li r6, 0
/* 8010030C 000FD24C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80100310 000FD250  7D 89 03 A6 */	mtctr r12
/* 80100314 000FD254  4E 80 04 21 */	bctrl 
.L_80100318:
/* 80100318 000FD258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010031C 000FD25C  7C 08 03 A6 */	mtlr r0
/* 80100320 000FD260  38 21 00 10 */	addi r1, r1, 0x10
/* 80100324 000FD264  4E 80 00 20 */	blr 

.global init__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80100328 000FD268  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8010032C 000FD26C  7C 08 02 A6 */	mflr r0
/* 80100330 000FD270  90 01 00 54 */	stw r0, 0x54(r1)
/* 80100334 000FD274  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80100338 000FD278  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8010033C 000FD27C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80100340 000FD280  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80100344 000FD284  7C 9F 23 78 */	mr r31, r4
/* 80100348 000FD288  7C 7E 1B 78 */	mr r30, r3
/* 8010034C 000FD28C  7F E3 FB 78 */	mr r3, r31
/* 80100350 000FD290  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100354 000FD294  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 80100358 000FD298  7D 89 03 A6 */	mtctr r12
/* 8010035C 000FD29C  4E 80 04 21 */	bctrl 
/* 80100360 000FD2A0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100364 000FD2A4  7F E3 FB 78 */	mr r3, r31
/* 80100368 000FD2A8  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 8010036C 000FD2AC  80 1F 01 E4 */	lwz r0, 0x1e4(r31)
/* 80100370 000FD2B0  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 80100374 000FD2B4  80 1F 01 E4 */	lwz r0, 0x1e4(r31)
/* 80100378 000FD2B8  60 00 00 02 */	ori r0, r0, 2
/* 8010037C 000FD2BC  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80100380 000FD2C0  48 00 6F 61 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80100384 000FD2C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100388 000FD2C8  7F E3 FB 78 */	mr r3, r31
/* 8010038C 000FD2CC  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100390 000FD2D0  60 00 04 00 */	ori r0, r0, 0x400
/* 80100394 000FD2D4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100398 000FD2D8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8010039C 000FD2DC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 801003A0 000FD2E0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 801003A4 000FD2E4  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 801003A8 000FD2E8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 801003AC 000FD2EC  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801003B0 000FD2F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801003B4 000FD2F4  81 8C 02 B8 */	lwz r12, 0x2b8(r12)
/* 801003B8 000FD2F8  7D 89 03 A6 */	mtctr r12
/* 801003BC 000FD2FC  4E 80 04 21 */	bctrl 
/* 801003C0 000FD300  7F E3 FB 78 */	mr r3, r31
/* 801003C4 000FD304  81 9F 00 00 */	lwz r12, 0(r31)
/* 801003C8 000FD308  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801003CC 000FD30C  7D 89 03 A6 */	mtctr r12
/* 801003D0 000FD310  4E 80 04 21 */	bctrl 
/* 801003D4 000FD314  90 7E 00 20 */	stw r3, 0x20(r30)
/* 801003D8 000FD318  7F E3 FB 78 */	mr r3, r31
/* 801003DC 000FD31C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801003E0 000FD320  C3 FF 01 F8 */	lfs f31, 0x1f8(r31)
/* 801003E4 000FD324  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801003E8 000FD328  7D 89 03 A6 */	mtctr r12
/* 801003EC 000FD32C  4E 80 04 21 */	bctrl 
/* 801003F0 000FD330  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 801003F4 000FD334  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801003F8 000FD338  80 FF 01 90 */	lwz r7, 0x190(r31)
/* 801003FC 000FD33C  3C 80 80 4B */	lis r4, __vt__Q23efx12ArgEnemyType@ha
/* 80100400 000FD340  80 DF 01 94 */	lwz r6, 0x194(r31)
/* 80100404 000FD344  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 80100408 000FD348  90 01 00 08 */	stw r0, 8(r1)
/* 8010040C 000FD34C  38 04 A7 E0 */	addi r0, r4, __vt__Q23efx12ArgEnemyType@l
/* 80100410 000FD350  38 81 00 14 */	addi r4, r1, 0x14
/* 80100414 000FD354  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80100418 000FD358  C0 41 00 08 */	lfs f2, 8(r1)
/* 8010041C 000FD35C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80100420 000FD360  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80100424 000FD364  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80100428 000FD368  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8010042C 000FD36C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80100430 000FD370  38 7E 00 10 */	addi r3, r30, 0x10
/* 80100434 000FD374  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80100438 000FD378  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8010043C 000FD37C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80100440 000FD380  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100444 000FD384  D3 E1 00 28 */	stfs f31, 0x28(r1)
/* 80100448 000FD388  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8010044C 000FD38C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80100450 000FD390  7D 89 03 A6 */	mtctr r12
/* 80100454 000FD394  4E 80 04 21 */	bctrl 
/* 80100458 000FD398  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8010045C 000FD39C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80100460 000FD3A0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80100464 000FD3A4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80100468 000FD3A8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8010046C 000FD3AC  7C 08 03 A6 */	mtlr r0
/* 80100470 000FD3B0  38 21 00 50 */	addi r1, r1, 0x50
/* 80100474 000FD3B4  4E 80 00 20 */	blr 

.global cleanup__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase
cleanup__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase:
/* 80100478 000FD3B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010047C 000FD3BC  7C 08 02 A6 */	mflr r0
/* 80100480 000FD3C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100484 000FD3C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100488 000FD3C8  7C 9F 23 78 */	mr r31, r4
/* 8010048C 000FD3CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80100490 000FD3D0  7C 7E 1B 78 */	mr r30, r3
/* 80100494 000FD3D4  7F E3 FB 78 */	mr r3, r31
/* 80100498 000FD3D8  80 04 01 E8 */	lwz r0, 0x1e8(r4)
/* 8010049C 000FD3DC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 801004A0 000FD3E0  80 04 01 EC */	lwz r0, 0x1ec(r4)
/* 801004A4 000FD3E4  90 04 01 E4 */	stw r0, 0x1e4(r4)
/* 801004A8 000FD3E8  80 04 01 E4 */	lwz r0, 0x1e4(r4)
/* 801004AC 000FD3EC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801004B0 000FD3F0  90 04 01 E4 */	stw r0, 0x1e4(r4)
/* 801004B4 000FD3F4  48 00 6D 51 */	bl startMotion__Q24Game9EnemyBaseFv
/* 801004B8 000FD3F8  7F E3 FB 78 */	mr r3, r31
/* 801004BC 000FD3FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801004C0 000FD400  81 8C 02 BC */	lwz r12, 0x2bc(r12)
/* 801004C4 000FD404  7D 89 03 A6 */	mtctr r12
/* 801004C8 000FD408  4E 80 04 21 */	bctrl 
/* 801004CC 000FD40C  38 7E 00 10 */	addi r3, r30, 0x10
/* 801004D0 000FD410  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 801004D4 000FD414  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801004D8 000FD418  7D 89 03 A6 */	mtctr r12
/* 801004DC 000FD41C  4E 80 04 21 */	bctrl 
/* 801004E0 000FD420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801004E4 000FD424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801004E8 000FD428  83 C1 00 08 */	lwz r30, 8(r1)
/* 801004EC 000FD42C  7C 08 03 A6 */	mtlr r0
/* 801004F0 000FD430  38 21 00 10 */	addi r1, r1, 0x10
/* 801004F4 000FD434  4E 80 00 20 */	blr 

.global updateAlways__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase
updateAlways__Q34Game12EnemyBaseFSM8FitStateFPQ24Game9EnemyBase:
/* 801004F8 000FD438  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801004FC 000FD43C  7C 08 02 A6 */	mflr r0
/* 80100500 000FD440  90 01 00 44 */	stw r0, 0x44(r1)
/* 80100504 000FD444  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80100508 000FD448  7C 9F 23 78 */	mr r31, r4
/* 8010050C 000FD44C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80100510 000FD450  7C 7E 1B 78 */	mr r30, r3
/* 80100514 000FD454  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80100518 000FD458  C0 24 02 14 */	lfs f1, 0x214(r4)
/* 8010051C 000FD45C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80100520 000FD460  EC 01 00 2A */	fadds f0, f1, f0
/* 80100524 000FD464  D0 04 02 14 */	stfs f0, 0x214(r4)
/* 80100528 000FD468  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 8010052C 000FD46C  C0 84 02 14 */	lfs f4, 0x214(r4)
/* 80100530 000FD470  C0 63 06 CC */	lfs f3, 0x6cc(r3)
/* 80100534 000FD474  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80100538 000FD478  41 81 00 24 */	bgt .L_8010055C
/* 8010053C 000FD47C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100540 000FD480  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 80100544 000FD484  40 82 00 18 */	bne .L_8010055C
/* 80100548 000FD488  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8010054C 000FD48C  C0 42 94 50 */	lfs f2, lbl_805177B0@sda21(r2)
/* 80100550 000FD490  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80100554 000FD494  4C 40 13 82 */	cror 2, 0, 2
/* 80100558 000FD498  40 82 00 30 */	bne .L_80100588
.L_8010055C:
/* 8010055C 000FD49C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100560 000FD4A0  7F C3 F3 78 */	mr r3, r30
/* 80100564 000FD4A4  7F E4 FB 78 */	mr r4, r31
/* 80100568 000FD4A8  38 A0 00 06 */	li r5, 6
/* 8010056C 000FD4AC  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 80100570 000FD4B0  38 C0 00 00 */	li r6, 0
/* 80100574 000FD4B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80100578 000FD4B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010057C 000FD4BC  7D 89 03 A6 */	mtctr r12
/* 80100580 000FD4C0  4E 80 04 21 */	bctrl 
/* 80100584 000FD4C4  48 00 01 48 */	b .L_801006CC
.L_80100588:
/* 80100588 000FD4C8  C0 02 94 6C */	lfs f0, lbl_805177CC@sda21(r2)
/* 8010058C 000FD4CC  C0 22 94 70 */	lfs f1, lbl_805177D0@sda21(r2)
/* 80100590 000FD4D0  EC 00 01 32 */	fmuls f0, f0, f4
/* 80100594 000FD4D4  EC 60 18 24 */	fdivs f3, f0, f3
/* 80100598 000FD4D8  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8010059C 000FD4DC  40 80 00 30 */	bge .L_801005CC
/* 801005A0 000FD4E0  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 801005A4 000FD4E4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801005A8 000FD4E8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801005AC 000FD4EC  EC 03 00 32 */	fmuls f0, f3, f0
/* 801005B0 000FD4F0  FC 00 00 1E */	fctiwz f0, f0
/* 801005B4 000FD4F4  D8 01 00 08 */	stfd f0, 8(r1)
/* 801005B8 000FD4F8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801005BC 000FD4FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801005C0 000FD500  7C 03 04 2E */	lfsx f0, r3, r0
/* 801005C4 000FD504  FC 00 00 50 */	fneg f0, f0
/* 801005C8 000FD508  48 00 00 28 */	b .L_801005F0
.L_801005CC:
/* 801005CC 000FD50C  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 801005D0 000FD510  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801005D4 000FD514  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801005D8 000FD518  EC 03 00 32 */	fmuls f0, f3, f0
/* 801005DC 000FD51C  FC 00 00 1E */	fctiwz f0, f0
/* 801005E0 000FD520  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801005E4 000FD524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801005E8 000FD528  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801005EC 000FD52C  7C 03 04 2E */	lfsx f0, r3, r0
.L_801005F0:
/* 801005F0 000FD530  EC A1 00 32 */	fmuls f5, f1, f0
/* 801005F4 000FD534  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 801005F8 000FD538  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 801005FC 000FD53C  40 81 00 08 */	ble .L_80100604
/* 80100600 000FD540  FC A0 00 90 */	fmr f5, f0
.L_80100604:
/* 80100604 000FD544  C0 02 94 40 */	lfs f0, lbl_805177A0@sda21(r2)
/* 80100608 000FD548  C0 42 94 74 */	lfs f2, lbl_805177D4@sda21(r2)
/* 8010060C 000FD54C  EC 60 01 32 */	fmuls f3, f0, f4
/* 80100610 000FD550  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100614 000FD554  C0 22 94 78 */	lfs f1, lbl_805177D8@sda21(r2)
/* 80100618 000FD558  EC 43 10 24 */	fdivs f2, f3, f2
/* 8010061C 000FD55C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80100620 000FD560  40 80 00 30 */	bge .L_80100650
/* 80100624 000FD564  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 80100628 000FD568  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8010062C 000FD56C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80100630 000FD570  EC 02 00 32 */	fmuls f0, f2, f0
/* 80100634 000FD574  FC 00 00 1E */	fctiwz f0, f0
/* 80100638 000FD578  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8010063C 000FD57C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80100640 000FD580  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80100644 000FD584  7C 03 04 2E */	lfsx f0, r3, r0
/* 80100648 000FD588  FC 00 00 50 */	fneg f0, f0
/* 8010064C 000FD58C  48 00 00 28 */	b .L_80100674
.L_80100650:
/* 80100650 000FD590  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 80100654 000FD594  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80100658 000FD598  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8010065C 000FD59C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80100660 000FD5A0  FC 00 00 1E */	fctiwz f0, f0
/* 80100664 000FD5A4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80100668 000FD5A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010066C 000FD5AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80100670 000FD5B0  7C 03 04 2E */	lfsx f0, r3, r0
.L_80100674:
/* 80100674 000FD5B4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80100678 000FD5B8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 8010067C 000FD5BC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80100680 000FD5C0  EC 25 00 72 */	fmuls f1, f5, f1
/* 80100684 000FD5C4  D0 3F 01 BC */	stfs f1, 0x1bc(r31)
/* 80100688 000FD5C8  D0 1F 01 C0 */	stfs f0, 0x1c0(r31)
/* 8010068C 000FD5CC  40 80 00 08 */	bge .L_80100694
/* 80100690 000FD5D0  FC 40 10 50 */	fneg f2, f2
.L_80100694:
/* 80100694 000FD5D4  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 80100698 000FD5D8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8010069C 000FD5DC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801006A0 000FD5E0  C0 22 94 78 */	lfs f1, lbl_805177D8@sda21(r2)
/* 801006A4 000FD5E4  EC 02 00 32 */	fmuls f0, f2, f0
/* 801006A8 000FD5E8  FC 00 00 1E */	fctiwz f0, f0
/* 801006AC 000FD5EC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801006B0 000FD5F0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801006B4 000FD5F4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801006B8 000FD5F8  7C 63 02 14 */	add r3, r3, r0
/* 801006BC 000FD5FC  C0 03 00 04 */	lfs f0, 4(r3)
/* 801006C0 000FD600  EC 01 00 32 */	fmuls f0, f1, f0
/* 801006C4 000FD604  EC 05 00 32 */	fmuls f0, f5, f0
/* 801006C8 000FD608  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
.L_801006CC:
/* 801006CC 000FD60C  7F E3 FB 78 */	mr r3, r31
/* 801006D0 000FD610  81 9F 00 00 */	lwz r12, 0(r31)
/* 801006D4 000FD614  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801006D8 000FD618  7D 89 03 A6 */	mtctr r12
/* 801006DC 000FD61C  4E 80 04 21 */	bctrl 
/* 801006E0 000FD620  90 7E 00 20 */	stw r3, 0x20(r30)
/* 801006E4 000FD624  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801006E8 000FD628  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801006EC 000FD62C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801006F0 000FD630  7C 08 03 A6 */	mtlr r0
/* 801006F4 000FD634  38 21 00 40 */	addi r1, r1, 0x40
/* 801006F8 000FD638  4E 80 00 20 */	blr 

.global init__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 801006FC 000FD63C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80100700 000FD640  7C 08 02 A6 */	mflr r0
/* 80100704 000FD644  90 01 00 24 */	stw r0, 0x24(r1)
/* 80100708 000FD648  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010070C 000FD64C  7C BF 2B 78 */	mr r31, r5
/* 80100710 000FD650  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80100714 000FD654  7C 9E 23 78 */	mr r30, r4
/* 80100718 000FD658  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8010071C 000FD65C  7C 7D 1B 78 */	mr r29, r3
/* 80100720 000FD660  7F C3 F3 78 */	mr r3, r30
/* 80100724 000FD664  81 9E 00 00 */	lwz r12, 0(r30)
/* 80100728 000FD668  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 8010072C 000FD66C  7D 89 03 A6 */	mtctr r12
/* 80100730 000FD670  4E 80 04 21 */	bctrl 
/* 80100734 000FD674  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80100738 000FD678  7F C3 F3 78 */	mr r3, r30
/* 8010073C 000FD67C  60 00 00 01 */	ori r0, r0, 1
/* 80100740 000FD680  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 80100744 000FD684  48 00 6B 9D */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80100748 000FD688  7F C3 F3 78 */	mr r3, r30
/* 8010074C 000FD68C  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80100750 000FD690  81 9E 00 00 */	lwz r12, 0(r30)
/* 80100754 000FD694  81 8C 02 B0 */	lwz r12, 0x2b0(r12)
/* 80100758 000FD698  7D 89 03 A6 */	mtctr r12
/* 8010075C 000FD69C  4E 80 04 21 */	bctrl 
/* 80100760 000FD6A0  38 00 00 00 */	li r0, 0
/* 80100764 000FD6A4  90 1D 00 10 */	stw r0, 0x10(r29)
/* 80100768 000FD6A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010076C 000FD6AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80100770 000FD6B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80100774 000FD6B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80100778 000FD6B8  7C 08 03 A6 */	mtlr r0
/* 8010077C 000FD6BC  38 21 00 20 */	addi r1, r1, 0x20
/* 80100780 000FD6C0  4E 80 00 20 */	blr 

.global cleanup__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBase
cleanup__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBase:
/* 80100784 000FD6C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100788 000FD6C8  7C 08 02 A6 */	mflr r0
/* 8010078C 000FD6CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100790 000FD6D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100794 000FD6D4  7C 9F 23 78 */	mr r31, r4
/* 80100798 000FD6D8  7F E3 FB 78 */	mr r3, r31
/* 8010079C 000FD6DC  80 04 01 E4 */	lwz r0, 0x1e4(r4)
/* 801007A0 000FD6E0  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 801007A4 000FD6E4  90 04 01 E4 */	stw r0, 0x1e4(r4)
/* 801007A8 000FD6E8  48 00 6A 5D */	bl startMotion__Q24Game9EnemyBaseFv
/* 801007AC 000FD6EC  7F E3 FB 78 */	mr r3, r31
/* 801007B0 000FD6F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801007B4 000FD6F4  81 8C 02 B4 */	lwz r12, 0x2b4(r12)
/* 801007B8 000FD6F8  7D 89 03 A6 */	mtctr r12
/* 801007BC 000FD6FC  4E 80 04 21 */	bctrl 
/* 801007C0 000FD700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801007C4 000FD704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801007C8 000FD708  7C 08 03 A6 */	mtlr r0
/* 801007CC 000FD70C  38 21 00 10 */	addi r1, r1, 0x10
/* 801007D0 000FD710  4E 80 00 20 */	blr 

.global updateCullingOff__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBase
updateCullingOff__Q34Game12EnemyBaseFSM15EarthquakeStateFPQ24Game9EnemyBase:
/* 801007D4 000FD714  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801007D8 000FD718  7C 08 02 A6 */	mflr r0
/* 801007DC 000FD71C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801007E0 000FD720  90 01 00 24 */	stw r0, 0x24(r1)
/* 801007E4 000FD724  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801007E8 000FD728  7C 9F 23 78 */	mr r31, r4
/* 801007EC 000FD72C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801007F0 000FD730  7C 7E 1B 78 */	mr r30, r3
/* 801007F4 000FD734  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 801007F8 000FD738  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801007FC 000FD73C  4C 40 13 82 */	cror 2, 0, 2
/* 80100800 000FD740  40 82 00 2C */	bne .L_8010082C
/* 80100804 000FD744  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80100808 000FD748  28 00 00 00 */	cmplwi r0, 0
/* 8010080C 000FD74C  41 82 00 20 */	beq .L_8010082C
/* 80100810 000FD750  81 83 00 00 */	lwz r12, 0(r3)
/* 80100814 000FD754  38 A0 00 06 */	li r5, 6
/* 80100818 000FD758  38 C0 00 00 */	li r6, 0
/* 8010081C 000FD75C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80100820 000FD760  7D 89 03 A6 */	mtctr r12
/* 80100824 000FD764  4E 80 04 21 */	bctrl 
/* 80100828 000FD768  48 00 00 EC */	b .L_80100914
.L_8010082C:
/* 8010082C 000FD76C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80100830 000FD770  38 03 00 01 */	addi r0, r3, 1
/* 80100834 000FD774  2C 00 00 03 */	cmpwi r0, 3
/* 80100838 000FD778  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8010083C 000FD77C  40 81 00 B0 */	ble .L_801008EC
/* 80100840 000FD780  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80100844 000FD784  28 00 00 00 */	cmplwi r0, 0
/* 80100848 000FD788  41 82 00 A4 */	beq .L_801008EC
/* 8010084C 000FD78C  4B FC 8D 55 */	bl rand
/* 80100850 000FD790  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80100854 000FD794  3C 00 43 30 */	lis r0, 0x4330
/* 80100858 000FD798  90 61 00 0C */	stw r3, 0xc(r1)
/* 8010085C 000FD79C  C8 62 94 58 */	lfd f3, lbl_805177B8@sda21(r2)
/* 80100860 000FD7A0  90 01 00 08 */	stw r0, 8(r1)
/* 80100864 000FD7A4  C0 42 94 3C */	lfs f2, lbl_8051779C@sda21(r2)
/* 80100868 000FD7A8  C8 01 00 08 */	lfd f0, 8(r1)
/* 8010086C 000FD7AC  C0 3F 02 14 */	lfs f1, 0x214(r31)
/* 80100870 000FD7B0  EC 60 18 28 */	fsubs f3, f0, f3
/* 80100874 000FD7B4  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100878 000FD7B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8010087C 000FD7BC  EC 23 10 24 */	fdivs f1, f3, f2
/* 80100880 000FD7C0  41 81 00 28 */	bgt .L_801008A8
/* 80100884 000FD7C4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80100888 000FD7C8  C0 03 06 A4 */	lfs f0, 0x6a4(r3)
/* 8010088C 000FD7CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80100890 000FD7D0  40 80 00 3C */	bge .L_801008CC
/* 80100894 000FD7D4  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80100898 000FD7D8  54 60 02 D7 */	rlwinm. r0, r3, 0, 0xb, 0xb
/* 8010089C 000FD7DC  40 82 00 30 */	bne .L_801008CC
/* 801008A0 000FD7E0  54 60 02 95 */	rlwinm. r0, r3, 0, 0xa, 0xa
/* 801008A4 000FD7E4  40 82 00 28 */	bne .L_801008CC
.L_801008A8:
/* 801008A8 000FD7E8  7F C3 F3 78 */	mr r3, r30
/* 801008AC 000FD7EC  7F E4 FB 78 */	mr r4, r31
/* 801008B0 000FD7F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801008B4 000FD7F4  38 A0 00 09 */	li r5, 9
/* 801008B8 000FD7F8  38 C0 00 00 */	li r6, 0
/* 801008BC 000FD7FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801008C0 000FD800  7D 89 03 A6 */	mtctr r12
/* 801008C4 000FD804  4E 80 04 21 */	bctrl 
/* 801008C8 000FD808  48 00 00 24 */	b .L_801008EC
.L_801008CC:
/* 801008CC 000FD80C  7F C3 F3 78 */	mr r3, r30
/* 801008D0 000FD810  7F E4 FB 78 */	mr r4, r31
/* 801008D4 000FD814  81 9E 00 00 */	lwz r12, 0(r30)
/* 801008D8 000FD818  38 A0 00 06 */	li r5, 6
/* 801008DC 000FD81C  38 C0 00 00 */	li r6, 0
/* 801008E0 000FD820  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801008E4 000FD824  7D 89 03 A6 */	mtctr r12
/* 801008E8 000FD828  4E 80 04 21 */	bctrl 
.L_801008EC:
/* 801008EC 000FD82C  7F E3 FB 78 */	mr r3, r31
/* 801008F0 000FD830  81 9F 00 00 */	lwz r12, 0(r31)
/* 801008F4 000FD834  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 801008F8 000FD838  7D 89 03 A6 */	mtctr r12
/* 801008FC 000FD83C  4E 80 04 21 */	bctrl 
/* 80100900 000FD840  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80100904 000FD844  41 82 00 10 */	beq .L_80100914
/* 80100908 000FD848  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8010090C 000FD84C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80100910 000FD850  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80100914:
/* 80100914 000FD854  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80100918 000FD858  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010091C 000FD85C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80100920 000FD860  7C 08 03 A6 */	mtlr r0
/* 80100924 000FD864  38 21 00 20 */	addi r1, r1, 0x20
/* 80100928 000FD868  4E 80 00 20 */	blr 

.global isFlying__Q24Game9EnemyBaseFv
isFlying__Q24Game9EnemyBaseFv:
/* 8010092C 000FD86C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80100930 000FD870  54 03 F7 FE */	rlwinm r3, r0, 0x1e, 0x1f, 0x1f
/* 80100934 000FD874  4E 80 00 20 */	blr 

.global bounceProcedure__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBasePQ23Sys8Triangle
bounceProcedure__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBasePQ23Sys8Triangle:
/* 80100938 000FD878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010093C 000FD87C  7C 08 02 A6 */	mflr r0
/* 80100940 000FD880  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100944 000FD884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100948 000FD888  7C 9F 23 78 */	mr r31, r4
/* 8010094C 000FD88C  7F E3 FB 78 */	mr r3, r31
/* 80100950 000FD890  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80100954 000FD894  60 00 04 00 */	ori r0, r0, 0x400
/* 80100958 000FD898  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8010095C 000FD89C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100960 000FD8A0  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80100964 000FD8A4  7D 89 03 A6 */	mtctr r12
/* 80100968 000FD8A8  4E 80 04 21 */	bctrl 
/* 8010096C 000FD8AC  7F E3 FB 78 */	mr r3, r31
/* 80100970 000FD8B0  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80100974 000FD8B4  48 00 31 DD */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80100978 000FD8B8  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 8010097C 000FD8BC  7F E3 FB 78 */	mr r3, r31
/* 80100980 000FD8C0  C0 42 94 64 */	lfs f2, lbl_805177C4@sda21(r2)
/* 80100984 000FD8C4  48 00 56 A9 */	bl addDamage__Q24Game9EnemyBaseFff
/* 80100988 000FD8C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010098C 000FD8CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80100990 000FD8D0  7C 08 03 A6 */	mtlr r0
/* 80100994 000FD8D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80100998 000FD8D8  4E 80 00 20 */	blr 

.global init__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8010099C 000FD8DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801009A0 000FD8E0  7C 08 02 A6 */	mflr r0
/* 801009A4 000FD8E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801009A8 000FD8E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801009AC 000FD8EC  7C 9F 23 78 */	mr r31, r4
/* 801009B0 000FD8F0  80 64 01 E0 */	lwz r3, 0x1e0(r4)
/* 801009B4 000FD8F4  54 60 02 D7 */	rlwinm. r0, r3, 0, 0xb, 0xb
/* 801009B8 000FD8F8  41 82 00 10 */	beq .L_801009C8
/* 801009BC 000FD8FC  54 60 03 14 */	rlwinm r0, r3, 0, 0xc, 0xa
/* 801009C0 000FD900  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801009C4 000FD904  48 00 00 18 */	b .L_801009DC
.L_801009C8:
/* 801009C8 000FD908  7F E3 FB 78 */	mr r3, r31
/* 801009CC 000FD90C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801009D0 000FD910  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 801009D4 000FD914  7D 89 03 A6 */	mtctr r12
/* 801009D8 000FD918  4E 80 04 21 */	bctrl 
.L_801009DC:
/* 801009DC 000FD91C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801009E0 000FD920  7F E3 FB 78 */	mr r3, r31
/* 801009E4 000FD924  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 801009E8 000FD928  80 1F 01 E4 */	lwz r0, 0x1e4(r31)
/* 801009EC 000FD92C  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801009F0 000FD930  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801009F4 000FD934  60 00 02 00 */	ori r0, r0, 0x200
/* 801009F8 000FD938  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801009FC 000FD93C  48 00 29 B9 */	bl hide__Q24Game9EnemyBaseFv
/* 80100A00 000FD940  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100A04 000FD944  7F E3 FB 78 */	mr r3, r31
/* 80100A08 000FD948  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 80100A0C 000FD94C  48 00 68 D5 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80100A10 000FD950  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100A14 000FD954  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80100A18 000FD958  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80100A1C 000FD95C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80100A20 000FD960  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80100A24 000FD964  28 00 00 00 */	cmplwi r0, 0
/* 80100A28 000FD968  41 82 00 14 */	beq .L_80100A3C
/* 80100A2C 000FD96C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100A30 000FD970  60 00 04 00 */	ori r0, r0, 0x400
/* 80100A34 000FD974  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100A38 000FD978  48 00 00 10 */	b .L_80100A48
.L_80100A3C:
/* 80100A3C 000FD97C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100A40 000FD980  60 00 04 00 */	ori r0, r0, 0x400
/* 80100A44 000FD984  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80100A48:
/* 80100A48 000FD988  88 1F 01 F0 */	lbz r0, 0x1f0(r31)
/* 80100A4C 000FD98C  28 00 00 02 */	cmplwi r0, 2
/* 80100A50 000FD990  40 82 00 24 */	bne .L_80100A74
/* 80100A54 000FD994  48 23 72 55 */	bl PSGetDirectedMainBgm__Fv
/* 80100A58 000FD998  28 03 00 00 */	cmplwi r3, 0
/* 80100A5C 000FD99C  41 82 00 18 */	beq .L_80100A74
/* 80100A60 000FD9A0  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80100A64 000FD9A4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80100A68 000FD9A8  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80100A6C 000FD9AC  7D 89 03 A6 */	mtctr r12
/* 80100A70 000FD9B0  4E 80 04 21 */	bctrl 
.L_80100A74:
/* 80100A74 000FD9B4  7F E3 FB 78 */	mr r3, r31
/* 80100A78 000FD9B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100A7C 000FD9BC  81 8C 02 A4 */	lwz r12, 0x2a4(r12)
/* 80100A80 000FD9C0  7D 89 03 A6 */	mtctr r12
/* 80100A84 000FD9C4  4E 80 04 21 */	bctrl 
/* 80100A88 000FD9C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80100A8C 000FD9CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80100A90 000FD9D0  7C 08 03 A6 */	mtlr r0
/* 80100A94 000FD9D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80100A98 000FD9D8  4E 80 00 20 */	blr 

.global cleanup__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase
cleanup__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase:
/* 80100A9C 000FD9DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100AA0 000FD9E0  7C 08 02 A6 */	mflr r0
/* 80100AA4 000FD9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100AA8 000FD9E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100AAC 000FD9EC  7C 9F 23 78 */	mr r31, r4
/* 80100AB0 000FD9F0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80100AB4 000FD9F4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80100AB8 000FD9F8  40 82 00 20 */	bne .L_80100AD8
/* 80100ABC 000FD9FC  3C 60 80 48 */	lis r3, lbl_8047A544@ha
/* 80100AC0 000FDA00  3C A0 80 48 */	lis r5, lbl_8047A554@ha
/* 80100AC4 000FDA04  38 63 A5 44 */	addi r3, r3, lbl_8047A544@l
/* 80100AC8 000FDA08  38 80 04 00 */	li r4, 0x400
/* 80100ACC 000FDA0C  38 A5 A5 54 */	addi r5, r5, lbl_8047A554@l
/* 80100AD0 000FDA10  4C C6 31 82 */	crclr 6
/* 80100AD4 000FDA14  4B F2 9B 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80100AD8:
/* 80100AD8 000FDA18  80 1F 01 E8 */	lwz r0, 0x1e8(r31)
/* 80100ADC 000FDA1C  7F E3 FB 78 */	mr r3, r31
/* 80100AE0 000FDA20  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100AE4 000FDA24  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 80100AE8 000FDA28  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80100AEC 000FDA2C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100AF0 000FDA30  54 00 03 14 */	rlwinm r0, r0, 0, 0xc, 0xa
/* 80100AF4 000FDA34  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100AF8 000FDA38  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100AFC 000FDA3C  54 00 05 EA */	rlwinm r0, r0, 0, 0x17, 0x15
/* 80100B00 000FDA40  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80100B04 000FDA44  48 00 28 35 */	bl show__Q24Game9EnemyBaseFv
/* 80100B08 000FDA48  7F E3 FB 78 */	mr r3, r31
/* 80100B0C 000FDA4C  48 00 66 F9 */	bl startMotion__Q24Game9EnemyBaseFv
/* 80100B10 000FDA50  7F E3 FB 78 */	mr r3, r31
/* 80100B14 000FDA54  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100B18 000FDA58  81 8C 02 A8 */	lwz r12, 0x2a8(r12)
/* 80100B1C 000FDA5C  7D 89 03 A6 */	mtctr r12
/* 80100B20 000FDA60  4E 80 04 21 */	bctrl 
/* 80100B24 000FDA64  88 1F 01 F0 */	lbz r0, 0x1f0(r31)
/* 80100B28 000FDA68  28 00 00 02 */	cmplwi r0, 2
/* 80100B2C 000FDA6C  40 82 00 28 */	bne .L_80100B54
/* 80100B30 000FDA70  48 23 71 79 */	bl PSGetDirectedMainBgm__Fv
/* 80100B34 000FDA74  28 03 00 00 */	cmplwi r3, 0
/* 80100B38 000FDA78  41 82 00 1C */	beq .L_80100B54
/* 80100B3C 000FDA7C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80100B40 000FDA80  38 63 00 B8 */	addi r3, r3, 0xb8
/* 80100B44 000FDA84  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80100B48 000FDA88  81 8C 00 08 */	lwz r12, 8(r12)
/* 80100B4C 000FDA8C  7D 89 03 A6 */	mtctr r12
/* 80100B50 000FDA90  4E 80 04 21 */	bctrl 
.L_80100B54:
/* 80100B54 000FDA94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80100B58 000FDA98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80100B5C 000FDA9C  7C 08 03 A6 */	mtlr r0
/* 80100B60 000FDAA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80100B64 000FDAA4  4E 80 00 20 */	blr 

.global updateAlways__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase
updateAlways__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase:
/* 80100B68 000FDAA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80100B6C 000FDAAC  7C 08 02 A6 */	mflr r0
/* 80100B70 000FDAB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80100B74 000FDAB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80100B78 000FDAB8  7C 9F 23 78 */	mr r31, r4
/* 80100B7C 000FDABC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80100B80 000FDAC0  7C 7E 1B 78 */	mr r30, r3
/* 80100B84 000FDAC4  80 64 02 4C */	lwz r3, 0x24c(r4)
/* 80100B88 000FDAC8  48 02 92 35 */	bl update__Q34Game10EnemyStone3ObjFv
/* 80100B8C 000FDACC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80100B90 000FDAD0  C0 3F 02 1C */	lfs f1, 0x21c(r31)
/* 80100B94 000FDAD4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80100B98 000FDAD8  EC 01 00 2A */	fadds f0, f1, f0
/* 80100B9C 000FDADC  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 80100BA0 000FDAE0  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80100BA4 000FDAE4  88 03 00 50 */	lbz r0, 0x50(r3)
/* 80100BA8 000FDAE8  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80100BAC 000FDAEC  41 82 00 BC */	beq .L_80100C68
/* 80100BB0 000FDAF0  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80100BB4 000FDAF4  28 00 00 00 */	cmplwi r0, 0
/* 80100BB8 000FDAF8  40 82 00 18 */	bne .L_80100BD0
/* 80100BBC 000FDAFC  7F E3 FB 78 */	mr r3, r31
/* 80100BC0 000FDB00  48 00 6B AD */	bl constraintOff__Q24Game9EnemyBaseFv
/* 80100BC4 000FDB04  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80100BC8 000FDB08  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80100BCC 000FDB0C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80100BD0:
/* 80100BD0 000FDB10  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80100BD4 000FDB14  C0 3F 02 1C */	lfs f1, 0x21c(r31)
/* 80100BD8 000FDB18  C0 03 06 54 */	lfs f0, 0x654(r3)
/* 80100BDC 000FDB1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80100BE0 000FDB20  7C 60 00 26 */	mfcr r3
/* 80100BE4 000FDB24  3C 00 43 30 */	lis r0, 0x4330
/* 80100BE8 000FDB28  54 63 17 FE */	rlwinm r3, r3, 2, 0x1f, 0x1f
/* 80100BEC 000FDB2C  90 01 00 08 */	stw r0, 8(r1)
/* 80100BF0 000FDB30  C8 42 94 80 */	lfd f2, lbl_805177E0@sda21(r2)
/* 80100BF4 000FDB34  90 61 00 0C */	stw r3, 0xc(r1)
/* 80100BF8 000FDB38  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100BFC 000FDB3C  C8 21 00 08 */	lfd f1, 8(r1)
/* 80100C00 000FDB40  EC 21 10 28 */	fsubs f1, f1, f2
/* 80100C04 000FDB44  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80100C08 000FDB48  41 82 00 60 */	beq .L_80100C68
/* 80100C0C 000FDB4C  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80100C10 000FDB50  88 83 00 50 */	lbz r4, 0x50(r3)
/* 80100C14 000FDB54  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 80100C18 000FDB58  41 82 00 4C */	beq .L_80100C64
/* 80100C1C 000FDB5C  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 80100C20 000FDB60  41 82 00 48 */	beq .L_80100C68
/* 80100C24 000FDB64  7F E3 FB 78 */	mr r3, r31
/* 80100C28 000FDB68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100C2C 000FDB6C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80100C30 000FDB70  7D 89 03 A6 */	mtctr r12
/* 80100C34 000FDB74  4E 80 04 21 */	bctrl 
/* 80100C38 000FDB78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80100C3C 000FDB7C  41 82 00 2C */	beq .L_80100C68
/* 80100C40 000FDB80  7F C3 F3 78 */	mr r3, r30
/* 80100C44 000FDB84  7F E4 FB 78 */	mr r4, r31
/* 80100C48 000FDB88  81 9E 00 00 */	lwz r12, 0(r30)
/* 80100C4C 000FDB8C  38 A0 00 06 */	li r5, 6
/* 80100C50 000FDB90  38 C0 00 00 */	li r6, 0
/* 80100C54 000FDB94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80100C58 000FDB98  7D 89 03 A6 */	mtctr r12
/* 80100C5C 000FDB9C  4E 80 04 21 */	bctrl 
/* 80100C60 000FDBA0  48 00 00 08 */	b .L_80100C68
.L_80100C64:
/* 80100C64 000FDBA4  48 02 90 79 */	bl shake__Q34Game10EnemyStone3ObjFv
.L_80100C68:
/* 80100C68 000FDBA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80100C6C 000FDBAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80100C70 000FDBB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80100C74 000FDBB4  7C 08 03 A6 */	mtlr r0
/* 80100C78 000FDBB8  38 21 00 20 */	addi r1, r1, 0x20
/* 80100C7C 000FDBBC  4E 80 00 20 */	blr 

.global updateCullingOff__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase
updateCullingOff__Q34Game12EnemyBaseFSM10StoneStateFPQ24Game9EnemyBase:
/* 80100C80 000FDBC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100C84 000FDBC4  7C 08 02 A6 */	mflr r0
/* 80100C88 000FDBC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100C8C 000FDBCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100C90 000FDBD0  7C 9F 23 78 */	mr r31, r4
/* 80100C94 000FDBD4  7F E3 FB 78 */	mr r3, r31
/* 80100C98 000FDBD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80100C9C 000FDBDC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80100CA0 000FDBE0  7D 89 03 A6 */	mtctr r12
/* 80100CA4 000FDBE4  4E 80 04 21 */	bctrl 
/* 80100CA8 000FDBE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80100CAC 000FDBEC  41 82 00 34 */	beq .L_80100CE0
/* 80100CB0 000FDBF0  7F E3 FB 78 */	mr r3, r31
/* 80100CB4 000FDBF4  48 00 66 85 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 80100CB8 000FDBF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80100CBC 000FDBFC  41 82 00 24 */	beq .L_80100CE0
/* 80100CC0 000FDC00  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80100CC4 000FDC04  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80100CC8 000FDC08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80100CCC 000FDC0C  4C 40 13 82 */	cror 2, 0, 2
/* 80100CD0 000FDC10  40 82 00 10 */	bne .L_80100CE0
/* 80100CD4 000FDC14  7F E3 FB 78 */	mr r3, r31
/* 80100CD8 000FDC18  38 80 00 00 */	li r4, 0
/* 80100CDC 000FDC1C  48 03 A4 15 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80100CE0:
/* 80100CE0 000FDC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80100CE4 000FDC24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80100CE8 000FDC28  7C 08 03 A6 */	mtlr r0
/* 80100CEC 000FDC2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80100CF0 000FDC30  4E 80 00 20 */	blr 

.global init__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
init__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase:
/* 80100CF4 000FDC34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80100CF8 000FDC38  7C 08 02 A6 */	mflr r0
/* 80100CFC 000FDC3C  3C 80 80 48 */	lis r4, lbl_8047A520@ha
/* 80100D00 000FDC40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80100D04 000FDC44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80100D08 000FDC48  3B E4 A5 20 */	addi r31, r4, lbl_8047A520@l
/* 80100D0C 000FDC4C  38 80 00 0A */	li r4, 0xa
/* 80100D10 000FDC50  93 C1 00 08 */	stw r30, 8(r1)
/* 80100D14 000FDC54  7C 7E 1B 78 */	mr r30, r3
/* 80100D18 000FDC58  48 02 FB 4D */	bl create__Q24Game17EnemyStateMachineFi
/* 80100D1C 000FDC5C  38 60 00 10 */	li r3, 0x10
/* 80100D20 000FDC60  4B F2 31 85 */	bl __nw__FUl
/* 80100D24 000FDC64  7C 64 1B 79 */	or. r4, r3, r3
/* 80100D28 000FDC68  41 82 00 3C */	beq .L_80100D64
/* 80100D2C 000FDC6C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100D30 000FDC70  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100D34 000FDC74  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100D38 000FDC78  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@ha
/* 80100D3C 000FDC7C  90 04 00 00 */	stw r0, 0(r4)
/* 80100D40 000FDC80  38 C0 00 00 */	li r6, 0
/* 80100D44 000FDC84  38 A5 A9 70 */	addi r5, r5, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100D48 000FDC88  38 63 A9 34 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@l
/* 80100D4C 000FDC8C  90 C4 00 04 */	stw r6, 4(r4)
/* 80100D50 000FDC90  38 1F 00 40 */	addi r0, r31, 0x40
/* 80100D54 000FDC94  90 C4 00 08 */	stw r6, 8(r4)
/* 80100D58 000FDC98  90 A4 00 00 */	stw r5, 0(r4)
/* 80100D5C 000FDC9C  90 64 00 00 */	stw r3, 0(r4)
/* 80100D60 000FDCA0  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100D64:
/* 80100D64 000FDCA4  7F C3 F3 78 */	mr r3, r30
/* 80100D68 000FDCA8  48 02 FB A1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100D6C 000FDCAC  38 60 00 10 */	li r3, 0x10
/* 80100D70 000FDCB0  4B F2 31 35 */	bl __nw__FUl
/* 80100D74 000FDCB4  7C 64 1B 79 */	or. r4, r3, r3
/* 80100D78 000FDCB8  41 82 00 54 */	beq .L_80100DCC
/* 80100D7C 000FDCBC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100D80 000FDCC0  3C C0 80 4B */	lis r6, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100D84 000FDCC4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100D88 000FDCC8  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@ha
/* 80100D8C 000FDCCC  90 04 00 00 */	stw r0, 0(r4)
/* 80100D90 000FDCD0  38 E0 00 01 */	li r7, 1
/* 80100D94 000FDCD4  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM24BirthTypeDropPikminState@ha
/* 80100D98 000FDCD8  38 00 00 00 */	li r0, 0
/* 80100D9C 000FDCDC  90 E4 00 04 */	stw r7, 4(r4)
/* 80100DA0 000FDCE0  38 E6 A9 70 */	addi r7, r6, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100DA4 000FDCE4  38 C5 A9 34 */	addi r6, r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@l
/* 80100DA8 000FDCE8  38 BF 00 40 */	addi r5, r31, 0x40
/* 80100DAC 000FDCEC  90 04 00 08 */	stw r0, 8(r4)
/* 80100DB0 000FDCF0  38 63 A8 F8 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM24BirthTypeDropPikminState@l
/* 80100DB4 000FDCF4  38 1F 00 50 */	addi r0, r31, 0x50
/* 80100DB8 000FDCF8  90 E4 00 00 */	stw r7, 0(r4)
/* 80100DBC 000FDCFC  90 C4 00 00 */	stw r6, 0(r4)
/* 80100DC0 000FDD00  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80100DC4 000FDD04  90 64 00 00 */	stw r3, 0(r4)
/* 80100DC8 000FDD08  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100DCC:
/* 80100DCC 000FDD0C  7F C3 F3 78 */	mr r3, r30
/* 80100DD0 000FDD10  48 02 FB 39 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100DD4 000FDD14  38 60 00 10 */	li r3, 0x10
/* 80100DD8 000FDD18  4B F2 30 CD */	bl __nw__FUl
/* 80100DDC 000FDD1C  7C 64 1B 79 */	or. r4, r3, r3
/* 80100DE0 000FDD20  41 82 00 54 */	beq .L_80100E34
/* 80100DE4 000FDD24  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100DE8 000FDD28  3C C0 80 4B */	lis r6, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100DEC 000FDD2C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100DF0 000FDD30  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@ha
/* 80100DF4 000FDD34  90 04 00 00 */	stw r0, 0(r4)
/* 80100DF8 000FDD38  38 E0 00 02 */	li r7, 2
/* 80100DFC 000FDD3C  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarState@ha
/* 80100E00 000FDD40  38 00 00 00 */	li r0, 0
/* 80100E04 000FDD44  90 E4 00 04 */	stw r7, 4(r4)
/* 80100E08 000FDD48  38 E6 A9 70 */	addi r7, r6, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100E0C 000FDD4C  38 C5 A9 34 */	addi r6, r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@l
/* 80100E10 000FDD50  38 BF 00 40 */	addi r5, r31, 0x40
/* 80100E14 000FDD54  90 04 00 08 */	stw r0, 8(r4)
/* 80100E18 000FDD58  38 63 A8 BC */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM24BirthTypeDropOlimarState@l
/* 80100E1C 000FDD5C  38 1F 00 64 */	addi r0, r31, 0x64
/* 80100E20 000FDD60  90 E4 00 00 */	stw r7, 0(r4)
/* 80100E24 000FDD64  90 C4 00 00 */	stw r6, 0(r4)
/* 80100E28 000FDD68  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80100E2C 000FDD6C  90 64 00 00 */	stw r3, 0(r4)
/* 80100E30 000FDD70  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100E34:
/* 80100E34 000FDD74  7F C3 F3 78 */	mr r3, r30
/* 80100E38 000FDD78  48 02 FA D1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100E3C 000FDD7C  38 60 00 10 */	li r3, 0x10
/* 80100E40 000FDD80  4B F2 30 65 */	bl __nw__FUl
/* 80100E44 000FDD84  7C 64 1B 79 */	or. r4, r3, r3
/* 80100E48 000FDD88  41 82 00 54 */	beq .L_80100E9C
/* 80100E4C 000FDD8C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100E50 000FDD90  3C C0 80 4B */	lis r6, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100E54 000FDD94  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100E58 000FDD98  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@ha
/* 80100E5C 000FDD9C  90 04 00 00 */	stw r0, 0(r4)
/* 80100E60 000FDDA0  38 E0 00 03 */	li r7, 3
/* 80100E64 000FDDA4  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureState@ha
/* 80100E68 000FDDA8  38 00 00 00 */	li r0, 0
/* 80100E6C 000FDDAC  90 E4 00 04 */	stw r7, 4(r4)
/* 80100E70 000FDDB0  38 E6 A9 70 */	addi r7, r6, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100E74 000FDDB4  38 C5 A9 34 */	addi r6, r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@l
/* 80100E78 000FDDB8  38 BF 00 40 */	addi r5, r31, 0x40
/* 80100E7C 000FDDBC  90 04 00 08 */	stw r0, 8(r4)
/* 80100E80 000FDDC0  38 63 A8 80 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM26BirthTypeDropTreasureState@l
/* 80100E84 000FDDC4  38 1F 00 78 */	addi r0, r31, 0x78
/* 80100E88 000FDDC8  90 E4 00 00 */	stw r7, 0(r4)
/* 80100E8C 000FDDCC  90 C4 00 00 */	stw r6, 0(r4)
/* 80100E90 000FDDD0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80100E94 000FDDD4  90 64 00 00 */	stw r3, 0(r4)
/* 80100E98 000FDDD8  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100E9C:
/* 80100E9C 000FDDDC  7F C3 F3 78 */	mr r3, r30
/* 80100EA0 000FDDE0  48 02 FA 69 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100EA4 000FDDE4  38 60 00 10 */	li r3, 0x10
/* 80100EA8 000FDDE8  4B F2 2F FD */	bl __nw__FUl
/* 80100EAC 000FDDEC  7C 64 1B 79 */	or. r4, r3, r3
/* 80100EB0 000FDDF0  41 82 00 54 */	beq .L_80100F04
/* 80100EB4 000FDDF4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100EB8 000FDDF8  3C C0 80 4B */	lis r6, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100EBC 000FDDFC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100EC0 000FDE00  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@ha
/* 80100EC4 000FDE04  90 04 00 00 */	stw r0, 0(r4)
/* 80100EC8 000FDE08  38 E0 00 04 */	li r7, 4
/* 80100ECC 000FDE0C  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeState@ha
/* 80100ED0 000FDE10  38 00 00 00 */	li r0, 0
/* 80100ED4 000FDE14  90 E4 00 04 */	stw r7, 4(r4)
/* 80100ED8 000FDE18  38 E6 A9 70 */	addi r7, r6, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100EDC 000FDE1C  38 C5 A9 34 */	addi r6, r5, __vt__Q34Game12EnemyBaseFSM18BirthTypeDropState@l
/* 80100EE0 000FDE20  38 BF 00 40 */	addi r5, r31, 0x40
/* 80100EE4 000FDE24  90 04 00 08 */	stw r0, 8(r4)
/* 80100EE8 000FDE28  38 63 A8 44 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM28BirthTypeDropEarthquakeState@l
/* 80100EEC 000FDE2C  38 1F 00 90 */	addi r0, r31, 0x90
/* 80100EF0 000FDE30  90 E4 00 00 */	stw r7, 0(r4)
/* 80100EF4 000FDE34  90 C4 00 00 */	stw r6, 0(r4)
/* 80100EF8 000FDE38  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80100EFC 000FDE3C  90 64 00 00 */	stw r3, 0(r4)
/* 80100F00 000FDE40  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100F04:
/* 80100F04 000FDE44  7F C3 F3 78 */	mr r3, r30
/* 80100F08 000FDE48  48 02 FA 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100F0C 000FDE4C  38 60 00 10 */	li r3, 0x10
/* 80100F10 000FDE50  4B F2 2F 95 */	bl __nw__FUl
/* 80100F14 000FDE54  7C 64 1B 79 */	or. r4, r3, r3
/* 80100F18 000FDE58  41 82 00 40 */	beq .L_80100F58
/* 80100F1C 000FDE5C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100F20 000FDE60  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100F24 000FDE64  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100F28 000FDE68  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM11AppearState@ha
/* 80100F2C 000FDE6C  90 04 00 00 */	stw r0, 0(r4)
/* 80100F30 000FDE70  38 00 00 05 */	li r0, 5
/* 80100F34 000FDE74  38 C0 00 00 */	li r6, 0
/* 80100F38 000FDE78  38 A5 A9 70 */	addi r5, r5, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100F3C 000FDE7C  90 04 00 04 */	stw r0, 4(r4)
/* 80100F40 000FDE80  38 63 A8 0C */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM11AppearState@l
/* 80100F44 000FDE84  38 02 94 88 */	addi r0, r2, lbl_805177E8@sda21
/* 80100F48 000FDE88  90 C4 00 08 */	stw r6, 8(r4)
/* 80100F4C 000FDE8C  90 A4 00 00 */	stw r5, 0(r4)
/* 80100F50 000FDE90  90 64 00 00 */	stw r3, 0(r4)
/* 80100F54 000FDE94  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100F58:
/* 80100F58 000FDE98  7F C3 F3 78 */	mr r3, r30
/* 80100F5C 000FDE9C  48 02 F9 AD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100F60 000FDEA0  38 60 00 10 */	li r3, 0x10
/* 80100F64 000FDEA4  4B F2 2F 41 */	bl __nw__FUl
/* 80100F68 000FDEA8  7C 64 1B 79 */	or. r4, r3, r3
/* 80100F6C 000FDEAC  41 82 00 40 */	beq .L_80100FAC
/* 80100F70 000FDEB0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100F74 000FDEB4  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100F78 000FDEB8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100F7C 000FDEBC  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM11LivingState@ha
/* 80100F80 000FDEC0  90 04 00 00 */	stw r0, 0(r4)
/* 80100F84 000FDEC4  38 00 00 06 */	li r0, 6
/* 80100F88 000FDEC8  38 C0 00 00 */	li r6, 0
/* 80100F8C 000FDECC  38 A5 A9 70 */	addi r5, r5, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100F90 000FDED0  90 04 00 04 */	stw r0, 4(r4)
/* 80100F94 000FDED4  38 63 A7 A0 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM11LivingState@l
/* 80100F98 000FDED8  38 02 94 90 */	addi r0, r2, lbl_805177F0@sda21
/* 80100F9C 000FDEDC  90 C4 00 08 */	stw r6, 8(r4)
/* 80100FA0 000FDEE0  90 A4 00 00 */	stw r5, 0(r4)
/* 80100FA4 000FDEE4  90 64 00 00 */	stw r3, 0(r4)
/* 80100FA8 000FDEE8  90 04 00 0C */	stw r0, 0xc(r4)
.L_80100FAC:
/* 80100FAC 000FDEEC  7F C3 F3 78 */	mr r3, r30
/* 80100FB0 000FDEF0  48 02 F9 59 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80100FB4 000FDEF4  38 60 00 10 */	li r3, 0x10
/* 80100FB8 000FDEF8  4B F2 2E ED */	bl __nw__FUl
/* 80100FBC 000FDEFC  7C 64 1B 79 */	or. r4, r3, r3
/* 80100FC0 000FDF00  41 82 00 54 */	beq .L_80101014
/* 80100FC4 000FDF04  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80100FC8 000FDF08  3C C0 80 4B */	lis r6, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80100FCC 000FDF0C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80100FD0 000FDF10  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM11LivingState@ha
/* 80100FD4 000FDF14  90 04 00 00 */	stw r0, 0(r4)
/* 80100FD8 000FDF18  38 E0 00 07 */	li r7, 7
/* 80100FDC 000FDF1C  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM10StoneState@ha
/* 80100FE0 000FDF20  38 00 00 00 */	li r0, 0
/* 80100FE4 000FDF24  90 E4 00 04 */	stw r7, 4(r4)
/* 80100FE8 000FDF28  38 E6 A9 70 */	addi r7, r6, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80100FEC 000FDF2C  38 C5 A7 A0 */	addi r6, r5, __vt__Q34Game12EnemyBaseFSM11LivingState@l
/* 80100FF0 000FDF30  38 A2 94 90 */	addi r5, r2, lbl_805177F0@sda21
/* 80100FF4 000FDF34  90 04 00 08 */	stw r0, 8(r4)
/* 80100FF8 000FDF38  38 63 A6 E0 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM10StoneState@l
/* 80100FFC 000FDF3C  38 02 94 98 */	addi r0, r2, lbl_805177F8@sda21
/* 80101000 000FDF40  90 E4 00 00 */	stw r7, 0(r4)
/* 80101004 000FDF44  90 C4 00 00 */	stw r6, 0(r4)
/* 80101008 000FDF48  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8010100C 000FDF4C  90 64 00 00 */	stw r3, 0(r4)
/* 80101010 000FDF50  90 04 00 0C */	stw r0, 0xc(r4)
.L_80101014:
/* 80101014 000FDF54  7F C3 F3 78 */	mr r3, r30
/* 80101018 000FDF58  48 02 F8 F1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010101C 000FDF5C  38 60 00 14 */	li r3, 0x14
/* 80101020 000FDF60  4B F2 2E 85 */	bl __nw__FUl
/* 80101024 000FDF64  7C 64 1B 79 */	or. r4, r3, r3
/* 80101028 000FDF68  41 82 00 58 */	beq .L_80101080
/* 8010102C 000FDF6C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80101030 000FDF70  3C C0 80 4B */	lis r6, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 80101034 000FDF74  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80101038 000FDF78  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM11LivingState@ha
/* 8010103C 000FDF7C  90 04 00 00 */	stw r0, 0(r4)
/* 80101040 000FDF80  38 00 00 08 */	li r0, 8
/* 80101044 000FDF84  3C 60 80 4B */	lis r3, __vt__Q34Game12EnemyBaseFSM15EarthquakeState@ha
/* 80101048 000FDF88  39 00 00 00 */	li r8, 0
/* 8010104C 000FDF8C  90 04 00 04 */	stw r0, 4(r4)
/* 80101050 000FDF90  38 E6 A9 70 */	addi r7, r6, __vt__Q34Game12EnemyBaseFSM5State@l
/* 80101054 000FDF94  38 C5 A7 A0 */	addi r6, r5, __vt__Q34Game12EnemyBaseFSM11LivingState@l
/* 80101058 000FDF98  38 A2 94 90 */	addi r5, r2, lbl_805177F0@sda21
/* 8010105C 000FDF9C  91 04 00 08 */	stw r8, 8(r4)
/* 80101060 000FDFA0  38 63 A7 20 */	addi r3, r3, __vt__Q34Game12EnemyBaseFSM15EarthquakeState@l
/* 80101064 000FDFA4  38 1F 00 A8 */	addi r0, r31, 0xa8
/* 80101068 000FDFA8  90 E4 00 00 */	stw r7, 0(r4)
/* 8010106C 000FDFAC  90 C4 00 00 */	stw r6, 0(r4)
/* 80101070 000FDFB0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80101074 000FDFB4  90 64 00 00 */	stw r3, 0(r4)
/* 80101078 000FDFB8  91 04 00 10 */	stw r8, 0x10(r4)
/* 8010107C 000FDFBC  90 04 00 0C */	stw r0, 0xc(r4)
.L_80101080:
/* 80101080 000FDFC0  7F C3 F3 78 */	mr r3, r30
/* 80101084 000FDFC4  48 02 F8 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80101088 000FDFC8  38 60 00 24 */	li r3, 0x24
/* 8010108C 000FDFCC  4B F2 2E 19 */	bl __nw__FUl
/* 80101090 000FDFD0  7C 64 1B 79 */	or. r4, r3, r3
/* 80101094 000FDFD4  41 82 00 C4 */	beq .L_80101158
/* 80101098 000FDFD8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8010109C 000FDFDC  3D 00 80 4B */	lis r8, __vt__Q34Game12EnemyBaseFSM5State@ha
/* 801010A0 000FDFE0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 801010A4 000FDFE4  3C A0 80 4B */	lis r5, __vt__Q34Game12EnemyBaseFSM11LivingState@ha
/* 801010A8 000FDFE8  90 04 00 00 */	stw r0, 0(r4)
/* 801010AC 000FDFEC  38 00 00 09 */	li r0, 9
/* 801010B0 000FDFF0  3D 20 80 4B */	lis r9, __vt__Q34Game12EnemyBaseFSM8FitState@ha
/* 801010B4 000FDFF4  3C E0 80 4B */	lis r7, __vt__Q23efx5TBase@ha
/* 801010B8 000FDFF8  90 04 00 04 */	stw r0, 4(r4)
/* 801010BC 000FDFFC  3B E0 00 00 */	li r31, 0
/* 801010C0 000FE000  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 801010C4 000FE004  3C 60 80 4E */	lis r3, __vt__Q23efx5TSync@ha
/* 801010C8 000FE008  93 E4 00 08 */	stw r31, 8(r4)
/* 801010CC 000FE00C  38 08 A9 70 */	addi r0, r8, __vt__Q34Game12EnemyBaseFSM5State@l
/* 801010D0 000FE010  39 63 69 8C */	addi r11, r3, __vt__Q23efx5TSync@l
/* 801010D4 000FE014  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 801010D8 000FE018  90 04 00 00 */	stw r0, 0(r4)
/* 801010DC 000FE01C  38 05 A7 A0 */	addi r0, r5, __vt__Q34Game12EnemyBaseFSM11LivingState@l
/* 801010E0 000FE020  39 03 69 40 */	addi r8, r3, __vt__Q23efx9TChasePos@l
/* 801010E4 000FE024  3C 60 80 4F */	lis r3, __vt__Q23efx10TEnemyPiyo@ha
/* 801010E8 000FE028  90 04 00 00 */	stw r0, 0(r4)
/* 801010EC 000FE02C  38 02 94 90 */	addi r0, r2, lbl_805177F0@sda21
/* 801010F0 000FE030  38 A3 87 00 */	addi r5, r3, __vt__Q23efx10TEnemyPiyo@l
/* 801010F4 000FE034  38 69 A7 60 */	addi r3, r9, __vt__Q34Game12EnemyBaseFSM8FitState@l
/* 801010F8 000FE038  90 04 00 0C */	stw r0, 0xc(r4)
/* 801010FC 000FE03C  38 07 A7 F8 */	addi r0, r7, __vt__Q23efx5TBase@l
/* 80101100 000FE040  39 86 E2 7C */	addi r12, r6, __vt__18JPAEmitterCallBack@l
/* 80101104 000FE044  39 4B 00 14 */	addi r10, r11, 0x14
/* 80101108 000FE048  90 64 00 00 */	stw r3, 0(r4)
/* 8010110C 000FE04C  39 20 02 B2 */	li r9, 0x2b2
/* 80101110 000FE050  38 E8 00 14 */	addi r7, r8, 0x14
/* 80101114 000FE054  38 C0 02 91 */	li r6, 0x291
/* 80101118 000FE058  90 04 00 10 */	stw r0, 0x10(r4)
/* 8010111C 000FE05C  38 65 00 14 */	addi r3, r5, 0x14
/* 80101120 000FE060  38 02 94 A0 */	addi r0, r2, lbl_80517800@sda21
/* 80101124 000FE064  91 84 00 14 */	stw r12, 0x14(r4)
/* 80101128 000FE068  91 64 00 10 */	stw r11, 0x10(r4)
/* 8010112C 000FE06C  91 44 00 14 */	stw r10, 0x14(r4)
/* 80101130 000FE070  93 E4 00 18 */	stw r31, 0x18(r4)
/* 80101134 000FE074  B1 24 00 1C */	sth r9, 0x1c(r4)
/* 80101138 000FE078  9B E4 00 1E */	stb r31, 0x1e(r4)
/* 8010113C 000FE07C  91 04 00 10 */	stw r8, 0x10(r4)
/* 80101140 000FE080  90 E4 00 14 */	stw r7, 0x14(r4)
/* 80101144 000FE084  93 E4 00 20 */	stw r31, 0x20(r4)
/* 80101148 000FE088  B0 C4 00 1C */	sth r6, 0x1c(r4)
/* 8010114C 000FE08C  90 A4 00 10 */	stw r5, 0x10(r4)
/* 80101150 000FE090  90 64 00 14 */	stw r3, 0x14(r4)
/* 80101154 000FE094  90 04 00 0C */	stw r0, 0xc(r4)
.L_80101158:
/* 80101158 000FE098  7F C3 F3 78 */	mr r3, r30
/* 8010115C 000FE09C  48 02 F7 AD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80101160 000FE0A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101164 000FE0A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101168 000FE0A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010116C 000FE0AC  7C 08 03 A6 */	mtlr r0
/* 80101170 000FE0B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80101174 000FE0B4  4E 80 00 20 */	blr 

.global __dt__Q23efx10TEnemyPiyoFv
__dt__Q23efx10TEnemyPiyoFv:
/* 80101178 000FE0B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010117C 000FE0BC  7C 08 02 A6 */	mflr r0
/* 80101180 000FE0C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101184 000FE0C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101188 000FE0C8  7C 9F 23 78 */	mr r31, r4
/* 8010118C 000FE0CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80101190 000FE0D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80101194 000FE0D4  41 82 00 64 */	beq .L_801011F8
/* 80101198 000FE0D8  3C 60 80 4F */	lis r3, __vt__Q23efx10TEnemyPiyo@ha
/* 8010119C 000FE0DC  38 63 87 00 */	addi r3, r3, __vt__Q23efx10TEnemyPiyo@l
/* 801011A0 000FE0E0  90 7E 00 00 */	stw r3, 0(r30)
/* 801011A4 000FE0E4  38 03 00 14 */	addi r0, r3, 0x14
/* 801011A8 000FE0E8  90 1E 00 04 */	stw r0, 4(r30)
/* 801011AC 000FE0EC  41 82 00 3C */	beq .L_801011E8
/* 801011B0 000FE0F0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 801011B4 000FE0F4  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 801011B8 000FE0F8  90 7E 00 00 */	stw r3, 0(r30)
/* 801011BC 000FE0FC  38 03 00 14 */	addi r0, r3, 0x14
/* 801011C0 000FE100  90 1E 00 04 */	stw r0, 4(r30)
/* 801011C4 000FE104  41 82 00 24 */	beq .L_801011E8
/* 801011C8 000FE108  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801011CC 000FE10C  38 7E 00 04 */	addi r3, r30, 4
/* 801011D0 000FE110  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801011D4 000FE114  38 80 00 00 */	li r4, 0
/* 801011D8 000FE118  90 BE 00 00 */	stw r5, 0(r30)
/* 801011DC 000FE11C  38 05 00 14 */	addi r0, r5, 0x14
/* 801011E0 000FE120  90 1E 00 04 */	stw r0, 4(r30)
/* 801011E4 000FE124  4B F8 EA B9 */	bl __dt__18JPAEmitterCallBackFv
.L_801011E8:
/* 801011E8 000FE128  7F E0 07 35 */	extsh. r0, r31
/* 801011EC 000FE12C  40 81 00 0C */	ble .L_801011F8
/* 801011F0 000FE130  7F C3 F3 78 */	mr r3, r30
/* 801011F4 000FE134  4B F2 2E C1 */	bl __dl__FPv
.L_801011F8:
/* 801011F8 000FE138  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801011FC 000FE13C  7F C3 F3 78 */	mr r3, r30
/* 80101200 000FE140  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101204 000FE144  83 C1 00 08 */	lwz r30, 8(r1)
/* 80101208 000FE148  7C 08 03 A6 */	mtlr r0
/* 8010120C 000FE14C  38 21 00 10 */	addi r1, r1, 0x10
/* 80101210 000FE150  4E 80 00 20 */	blr 

.global __dt__Q23efx9TChasePosFv
__dt__Q23efx9TChasePosFv:
/* 80101214 000FE154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101218 000FE158  7C 08 02 A6 */	mflr r0
/* 8010121C 000FE15C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101220 000FE160  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101224 000FE164  7C 9F 23 78 */	mr r31, r4
/* 80101228 000FE168  93 C1 00 08 */	stw r30, 8(r1)
/* 8010122C 000FE16C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80101230 000FE170  41 82 00 4C */	beq .L_8010127C
/* 80101234 000FE174  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80101238 000FE178  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 8010123C 000FE17C  90 7E 00 00 */	stw r3, 0(r30)
/* 80101240 000FE180  38 03 00 14 */	addi r0, r3, 0x14
/* 80101244 000FE184  90 1E 00 04 */	stw r0, 4(r30)
/* 80101248 000FE188  41 82 00 24 */	beq .L_8010126C
/* 8010124C 000FE18C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80101250 000FE190  38 7E 00 04 */	addi r3, r30, 4
/* 80101254 000FE194  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80101258 000FE198  38 80 00 00 */	li r4, 0
/* 8010125C 000FE19C  90 BE 00 00 */	stw r5, 0(r30)
/* 80101260 000FE1A0  38 05 00 14 */	addi r0, r5, 0x14
/* 80101264 000FE1A4  90 1E 00 04 */	stw r0, 4(r30)
/* 80101268 000FE1A8  4B F8 EA 35 */	bl __dt__18JPAEmitterCallBackFv
.L_8010126C:
/* 8010126C 000FE1AC  7F E0 07 35 */	extsh. r0, r31
/* 80101270 000FE1B0  40 81 00 0C */	ble .L_8010127C
/* 80101274 000FE1B4  7F C3 F3 78 */	mr r3, r30
/* 80101278 000FE1B8  4B F2 2E 3D */	bl __dl__FPv
.L_8010127C:
/* 8010127C 000FE1BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101280 000FE1C0  7F C3 F3 78 */	mr r3, r30
/* 80101284 000FE1C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101288 000FE1C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010128C 000FE1CC  7C 08 03 A6 */	mtlr r0
/* 80101290 000FE1D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80101294 000FE1D4  4E 80 00 20 */	blr 

.global __dt__Q23efx5TSyncFv
__dt__Q23efx5TSyncFv:
/* 80101298 000FE1D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010129C 000FE1DC  7C 08 02 A6 */	mflr r0
/* 801012A0 000FE1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801012A4 000FE1E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801012A8 000FE1E8  7C 9F 23 78 */	mr r31, r4
/* 801012AC 000FE1EC  93 C1 00 08 */	stw r30, 8(r1)
/* 801012B0 000FE1F0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801012B4 000FE1F4  41 82 00 34 */	beq .L_801012E8
/* 801012B8 000FE1F8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801012BC 000FE1FC  38 7E 00 04 */	addi r3, r30, 4
/* 801012C0 000FE200  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801012C4 000FE204  38 80 00 00 */	li r4, 0
/* 801012C8 000FE208  90 BE 00 00 */	stw r5, 0(r30)
/* 801012CC 000FE20C  38 05 00 14 */	addi r0, r5, 0x14
/* 801012D0 000FE210  90 1E 00 04 */	stw r0, 4(r30)
/* 801012D4 000FE214  4B F8 E9 C9 */	bl __dt__18JPAEmitterCallBackFv
/* 801012D8 000FE218  7F E0 07 35 */	extsh. r0, r31
/* 801012DC 000FE21C  40 81 00 0C */	ble .L_801012E8
/* 801012E0 000FE220  7F C3 F3 78 */	mr r3, r30
/* 801012E4 000FE224  4B F2 2D D1 */	bl __dl__FPv
.L_801012E8:
/* 801012E8 000FE228  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801012EC 000FE22C  7F C3 F3 78 */	mr r3, r30
/* 801012F0 000FE230  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801012F4 000FE234  83 C1 00 08 */	lwz r30, 8(r1)
/* 801012F8 000FE238  7C 08 03 A6 */	mtlr r0
/* 801012FC 000FE23C  38 21 00 10 */	addi r1, r1, 0x10
/* 80101300 000FE240  4E 80 00 20 */	blr 

.global update__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
update__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase:
/* 80101304 000FE244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101308 000FE248  7C 08 02 A6 */	mflr r0
/* 8010130C 000FE24C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101310 000FE250  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80101314 000FE254  81 83 00 00 */	lwz r12, 0(r3)
/* 80101318 000FE258  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8010131C 000FE25C  7D 89 03 A6 */	mtctr r12
/* 80101320 000FE260  4E 80 04 21 */	bctrl 
/* 80101324 000FE264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101328 000FE268  7C 08 03 A6 */	mtlr r0
/* 8010132C 000FE26C  38 21 00 10 */	addi r1, r1, 0x10
/* 80101330 000FE270  4E 80 00 20 */	blr 

.global update__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
update__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase:
/* 80101334 000FE274  4E 80 00 20 */	blr 

.global entry__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
entry__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase:
/* 80101338 000FE278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010133C 000FE27C  7C 08 02 A6 */	mflr r0
/* 80101340 000FE280  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101344 000FE284  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80101348 000FE288  81 83 00 00 */	lwz r12, 0(r3)
/* 8010134C 000FE28C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80101350 000FE290  7D 89 03 A6 */	mtctr r12
/* 80101354 000FE294  4E 80 04 21 */	bctrl 
/* 80101358 000FE298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010135C 000FE29C  7C 08 03 A6 */	mtlr r0
/* 80101360 000FE2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80101364 000FE2A4  4E 80 00 20 */	blr 

.global entry__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
entry__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase:
/* 80101368 000FE2A8  4E 80 00 20 */	blr 

.global simulation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasef
simulation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasef:
/* 8010136C 000FE2AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101370 000FE2B0  7C 08 02 A6 */	mflr r0
/* 80101374 000FE2B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101378 000FE2B8  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8010137C 000FE2BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80101380 000FE2C0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80101384 000FE2C4  7D 89 03 A6 */	mtctr r12
/* 80101388 000FE2C8  4E 80 04 21 */	bctrl 
/* 8010138C 000FE2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101390 000FE2D0  7C 08 03 A6 */	mtlr r0
/* 80101394 000FE2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80101398 000FE2D8  4E 80 00 20 */	blr 

.global simulation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasef
simulation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasef:
/* 8010139C 000FE2DC  4E 80 00 20 */	blr 

.global __ct__Q24Game9EnemyBaseFv
__ct__Q24Game9EnemyBaseFv:
/* 801013A0 000FE2E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801013A4 000FE2E4  7C 08 02 A6 */	mflr r0
/* 801013A8 000FE2E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801013AC 000FE2EC  7C 80 07 35 */	extsh. r0, r4
/* 801013B0 000FE2F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801013B4 000FE2F4  7C 7F 1B 78 */	mr r31, r3
/* 801013B8 000FE2F8  93 C1 00 08 */	stw r30, 8(r1)
/* 801013BC 000FE2FC  41 82 00 24 */	beq .L_801013E0
/* 801013C0 000FE300  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 801013C4 000FE304  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 801013C8 000FE308  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801013CC 000FE30C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 801013D0 000FE310  38 00 00 00 */	li r0, 0
/* 801013D4 000FE314  90 7F 02 BC */	stw r3, 0x2bc(r31)
/* 801013D8 000FE318  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801013DC 000FE31C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
.L_801013E0:
/* 801013E0 000FE320  7F E3 FB 78 */	mr r3, r31
/* 801013E4 000FE324  48 03 9A A1 */	bl __ct__Q24Game8CreatureFv
/* 801013E8 000FE328  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 801013EC 000FE32C  3C 80 80 4B */	lis r4, __vt__Q24Game9EnemyBase@ha
/* 801013F0 000FE330  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 801013F4 000FE334  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801013F8 000FE338  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801013FC 000FE33C  38 A4 A3 24 */	addi r5, r4, __vt__Q24Game9EnemyBase@l
/* 80101400 000FE340  3C 60 80 10 */	lis r3, "__ct__11BitFlag<Ul>Fv"@ha
/* 80101404 000FE344  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 80101408 000FE348  90 BF 00 00 */	stw r5, 0(r31)
/* 8010140C 000FE34C  38 83 17 70 */	addi r4, r3, "__ct__11BitFlag<Ul>Fv"@l
/* 80101410 000FE350  38 65 01 B0 */	addi r3, r5, 0x1b0
/* 80101414 000FE354  39 25 02 F8 */	addi r9, r5, 0x2f8
/* 80101418 000FE358  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8010141C 000FE35C  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 80101420 000FE360  38 A0 00 00 */	li r5, 0
/* 80101424 000FE364  38 C0 00 04 */	li r6, 4
/* 80101428 000FE368  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 8010142C 000FE36C  38 E0 00 02 */	li r7, 2
/* 80101430 000FE370  91 28 00 00 */	stw r9, 0(r8)
/* 80101434 000FE374  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 80101438 000FE378  7C 08 00 50 */	subf r0, r8, r0
/* 8010143C 000FE37C  90 08 00 0C */	stw r0, 0xc(r8)
/* 80101440 000FE380  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 80101444 000FE384  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 80101448 000FE388  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 8010144C 000FE38C  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 80101450 000FE390  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80101454 000FE394  D0 1F 01 AC */	stfs f0, 0x1ac(r31)
/* 80101458 000FE398  D0 1F 01 B0 */	stfs f0, 0x1b0(r31)
/* 8010145C 000FE39C  D0 1F 01 B4 */	stfs f0, 0x1b4(r31)
/* 80101460 000FE3A0  D0 1F 01 B8 */	stfs f0, 0x1b8(r31)
/* 80101464 000FE3A4  D0 1F 01 BC */	stfs f0, 0x1bc(r31)
/* 80101468 000FE3A8  D0 1F 01 C0 */	stfs f0, 0x1c0(r31)
/* 8010146C 000FE3AC  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
/* 80101470 000FE3B0  4B FC 03 CD */	bl __construct_array
/* 80101474 000FE3B4  38 00 00 00 */	li r0, 0
/* 80101478 000FE3B8  3C 60 80 10 */	lis r3, "__ct__11BitFlag<Ul>Fv"@ha
/* 8010147C 000FE3BC  98 1F 01 E0 */	stb r0, 0x1e0(r31)
/* 80101480 000FE3C0  38 83 17 70 */	addi r4, r3, "__ct__11BitFlag<Ul>Fv"@l
/* 80101484 000FE3C4  38 7F 01 E8 */	addi r3, r31, 0x1e8
/* 80101488 000FE3C8  38 A0 00 00 */	li r5, 0
/* 8010148C 000FE3CC  98 1F 01 E1 */	stb r0, 0x1e1(r31)
/* 80101490 000FE3D0  38 C0 00 04 */	li r6, 4
/* 80101494 000FE3D4  38 E0 00 02 */	li r7, 2
/* 80101498 000FE3D8  98 1F 01 E2 */	stb r0, 0x1e2(r31)
/* 8010149C 000FE3DC  98 1F 01 E3 */	stb r0, 0x1e3(r31)
/* 801014A0 000FE3E0  98 1F 01 E4 */	stb r0, 0x1e4(r31)
/* 801014A4 000FE3E4  98 1F 01 E5 */	stb r0, 0x1e5(r31)
/* 801014A8 000FE3E8  98 1F 01 E6 */	stb r0, 0x1e6(r31)
/* 801014AC 000FE3EC  98 1F 01 E7 */	stb r0, 0x1e7(r31)
/* 801014B0 000FE3F0  4B FC 03 8D */	bl __construct_array
/* 801014B4 000FE3F4  38 A0 00 00 */	li r5, 0
/* 801014B8 000FE3F8  38 80 00 01 */	li r4, 1
/* 801014BC 000FE3FC  98 BF 01 E8 */	stb r5, 0x1e8(r31)
/* 801014C0 000FE400  38 00 00 FF */	li r0, 0xff
/* 801014C4 000FE404  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801014C8 000FE408  38 7F 02 58 */	addi r3, r31, 0x258
/* 801014CC 000FE40C  98 BF 01 E9 */	stb r5, 0x1e9(r31)
/* 801014D0 000FE410  98 BF 01 EA */	stb r5, 0x1ea(r31)
/* 801014D4 000FE414  98 BF 01 EB */	stb r5, 0x1eb(r31)
/* 801014D8 000FE418  98 BF 01 EC */	stb r5, 0x1ec(r31)
/* 801014DC 000FE41C  98 BF 01 ED */	stb r5, 0x1ed(r31)
/* 801014E0 000FE420  98 BF 01 EE */	stb r5, 0x1ee(r31)
/* 801014E4 000FE424  98 BF 01 EF */	stb r5, 0x1ef(r31)
/* 801014E8 000FE428  98 9F 01 F0 */	stb r4, 0x1f0(r31)
/* 801014EC 000FE42C  98 1F 01 F1 */	stb r0, 0x1f1(r31)
/* 801014F0 000FE430  98 1F 01 F2 */	stb r0, 0x1f2(r31)
/* 801014F4 000FE434  90 BF 01 F4 */	stw r5, 0x1f4(r31)
/* 801014F8 000FE438  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 801014FC 000FE43C  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 80101500 000FE440  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 80101504 000FE444  90 BF 02 34 */	stw r5, 0x234(r31)
/* 80101508 000FE448  90 BF 02 38 */	stw r5, 0x238(r31)
/* 8010150C 000FE44C  90 BF 02 3C */	stw r5, 0x23c(r31)
/* 80101510 000FE450  D0 1F 02 40 */	stfs f0, 0x240(r31)
/* 80101514 000FE454  D0 1F 02 44 */	stfs f0, 0x244(r31)
/* 80101518 000FE458  D0 1F 02 48 */	stfs f0, 0x248(r31)
/* 8010151C 000FE45C  90 BF 02 4C */	stw r5, 0x24c(r31)
/* 80101520 000FE460  B0 BF 02 50 */	sth r5, 0x250(r31)
/* 80101524 000FE464  90 BF 02 54 */	stw r5, 0x254(r31)
/* 80101528 000FE468  48 02 CE 25 */	bl __ct__Q24Game15EnemyPelletInfoFv
/* 8010152C 000FE46C  38 7F 02 64 */	addi r3, r31, 0x264
/* 80101530 000FE470  48 0D 62 D9 */	bl __ct__Q24Game9AILODParmFv
/* 80101534 000FE474  38 00 00 00 */	li r0, 0
/* 80101538 000FE478  38 7F 02 90 */	addi r3, r31, 0x290
/* 8010153C 000FE47C  90 1F 02 80 */	stw r0, 0x280(r31)
/* 80101540 000FE480  90 1F 02 88 */	stw r0, 0x288(r31)
/* 80101544 000FE484  90 1F 02 8C */	stw r0, 0x28c(r31)
/* 80101548 000FE488  48 30 FE 49 */	bl __ct__5CNodeFv
/* 8010154C 000FE48C  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80101550 000FE490  38 C0 00 00 */	li r6, 0
/* 80101554 000FE494  38 00 00 02 */	li r0, 2
/* 80101558 000FE498  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 8010155C 000FE49C  D0 3F 02 A8 */	stfs f1, 0x2a8(r31)
/* 80101560 000FE4A0  7F E4 FB 78 */	mr r4, r31
/* 80101564 000FE4A4  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 80101568 000FE4A8  38 A0 00 08 */	li r5, 8
/* 8010156C 000FE4AC  D0 3F 02 AC */	stfs f1, 0x2ac(r31)
/* 80101570 000FE4B0  98 DF 02 B0 */	stb r6, 0x2b0(r31)
/* 80101574 000FE4B4  90 DF 02 B4 */	stw r6, 0x2b4(r31)
/* 80101578 000FE4B8  90 DF 02 B8 */	stw r6, 0x2b8(r31)
/* 8010157C 000FE4BC  98 DF 00 BC */	stb r6, 0xbc(r31)
/* 80101580 000FE4C0  98 DF 00 BD */	stb r6, 0xbd(r31)
/* 80101584 000FE4C4  98 DF 00 BE */	stb r6, 0xbe(r31)
/* 80101588 000FE4C8  98 DF 00 BF */	stb r6, 0xbf(r31)
/* 8010158C 000FE4CC  B0 1F 01 28 */	sth r0, 0x128(r31)
/* 80101590 000FE4D0  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 80101594 000FE4D4  48 05 58 9D */	bl alloc__Q24Game15CollisionBufferFPQ24Game10CellObjecti
/* 80101598 000FE4D8  38 00 00 00 */	li r0, 0
/* 8010159C 000FE4DC  38 60 00 28 */	li r3, 0x28
/* 801015A0 000FE4E0  90 1F 01 84 */	stw r0, 0x184(r31)
/* 801015A4 000FE4E4  4B F2 29 01 */	bl __nw__FUl
/* 801015A8 000FE4E8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801015AC 000FE4EC  41 82 00 38 */	beq .L_801015E4
/* 801015B0 000FE4F0  48 30 FD E1 */	bl __ct__5CNodeFv
/* 801015B4 000FE4F4  3C 80 80 4B */	lis r4, __vt__Q28SysShape8KeyEvent@ha
/* 801015B8 000FE4F8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimKeyEvent@ha
/* 801015BC 000FE4FC  38 04 A6 5C */	addi r0, r4, __vt__Q28SysShape8KeyEvent@l
/* 801015C0 000FE500  38 A0 00 00 */	li r5, 0
/* 801015C4 000FE504  90 1E 00 00 */	stw r0, 0(r30)
/* 801015C8 000FE508  38 80 FF FF */	li r4, -1
/* 801015CC 000FE50C  38 03 A6 4C */	addi r0, r3, __vt__Q24Game17EnemyAnimKeyEvent@l
/* 801015D0 000FE510  90 BE 00 18 */	stw r5, 0x18(r30)
/* 801015D4 000FE514  90 BE 00 1C */	stw r5, 0x1c(r30)
/* 801015D8 000FE518  B0 9E 00 20 */	sth r4, 0x20(r30)
/* 801015DC 000FE51C  90 1E 00 00 */	stw r0, 0(r30)
/* 801015E0 000FE520  98 BE 00 24 */	stb r5, 0x24(r30)
.L_801015E4:
/* 801015E4 000FE524  93 DF 01 88 */	stw r30, 0x188(r31)
/* 801015E8 000FE528  38 00 00 00 */	li r0, 0
/* 801015EC 000FE52C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801015F0 000FE530  38 60 00 20 */	li r3, 0x20
/* 801015F4 000FE534  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 801015F8 000FE538  90 1F 02 30 */	stw r0, 0x230(r31)
/* 801015FC 000FE53C  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 80101600 000FE540  4B F2 28 A5 */	bl __nw__FUl
/* 80101604 000FE544  28 03 00 00 */	cmplwi r3, 0
/* 80101608 000FE548  41 82 00 24 */	beq .L_8010162C
/* 8010160C 000FE54C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80101610 000FE550  3C 80 80 4B */	lis r4, __vt__Q34Game12EnemyBaseFSM12StateMachine@ha
/* 80101614 000FE554  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80101618 000FE558  38 A0 FF FF */	li r5, -1
/* 8010161C 000FE55C  90 03 00 00 */	stw r0, 0(r3)
/* 80101620 000FE560  38 04 A6 A8 */	addi r0, r4, __vt__Q34Game12EnemyBaseFSM12StateMachine@l
/* 80101624 000FE564  90 A3 00 18 */	stw r5, 0x18(r3)
/* 80101628 000FE568  90 03 00 00 */	stw r0, 0(r3)
.L_8010162C:
/* 8010162C 000FE56C  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 80101630 000FE570  7F E4 FB 78 */	mr r4, r31
/* 80101634 000FE574  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101638 000FE578  81 83 00 00 */	lwz r12, 0(r3)
/* 8010163C 000FE57C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80101640 000FE580  7D 89 03 A6 */	mtctr r12
/* 80101644 000FE584  4E 80 04 21 */	bctrl 
/* 80101648 000FE588  7F E3 FB 78 */	mr r3, r31
/* 8010164C 000FE58C  48 09 D8 49 */	bl clearStick__Q24Game8CreatureFv
/* 80101650 000FE590  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80101654 000FE594  38 80 00 00 */	li r4, 0
/* 80101658 000FE598  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 8010165C 000FE59C  98 83 00 24 */	stb r4, 0x24(r3)
/* 80101660 000FE5A0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80101664 000FE5A4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101668 000FE5A8  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8010166C 000FE5AC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101670 000FE5B0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80101674 000FE5B4  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 80101678 000FE5B8  98 9F 01 E0 */	stb r4, 0x1e0(r31)
/* 8010167C 000FE5BC  98 9F 01 E1 */	stb r4, 0x1e1(r31)
/* 80101680 000FE5C0  98 9F 01 E2 */	stb r4, 0x1e2(r31)
/* 80101684 000FE5C4  98 9F 01 E3 */	stb r4, 0x1e3(r31)
/* 80101688 000FE5C8  98 9F 01 E4 */	stb r4, 0x1e4(r31)
/* 8010168C 000FE5CC  98 9F 01 E5 */	stb r4, 0x1e5(r31)
/* 80101690 000FE5D0  98 9F 01 E6 */	stb r4, 0x1e6(r31)
/* 80101694 000FE5D4  98 9F 01 E7 */	stb r4, 0x1e7(r31)
/* 80101698 000FE5D8  98 9F 01 E8 */	stb r4, 0x1e8(r31)
/* 8010169C 000FE5DC  98 9F 01 E9 */	stb r4, 0x1e9(r31)
/* 801016A0 000FE5E0  98 9F 01 EA */	stb r4, 0x1ea(r31)
/* 801016A4 000FE5E4  98 9F 01 EB */	stb r4, 0x1eb(r31)
/* 801016A8 000FE5E8  98 9F 01 EC */	stb r4, 0x1ec(r31)
/* 801016AC 000FE5EC  98 9F 01 ED */	stb r4, 0x1ed(r31)
/* 801016B0 000FE5F0  98 9F 01 EE */	stb r4, 0x1ee(r31)
/* 801016B4 000FE5F4  98 9F 01 EF */	stb r4, 0x1ef(r31)
/* 801016B8 000FE5F8  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801016BC 000FE5FC  28 03 00 00 */	cmplwi r3, 0
/* 801016C0 000FE600  41 82 00 0C */	beq .L_801016CC
/* 801016C4 000FE604  7F E4 FB 78 */	mr r4, r31
/* 801016C8 000FE608  48 14 04 59 */	bl createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_801016CC:
/* 801016CC 000FE60C  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 801016D0 000FE610  28 03 00 00 */	cmplwi r3, 0
/* 801016D4 000FE614  41 82 00 0C */	beq .L_801016E0
/* 801016D8 000FE618  7F E4 FB 78 */	mr r4, r31
/* 801016DC 000FE61C  48 01 92 69 */	bl createLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_801016E0:
/* 801016E0 000FE620  38 00 00 00 */	li r0, 0
/* 801016E4 000FE624  7F E3 FB 78 */	mr r3, r31
/* 801016E8 000FE628  90 1F 02 A0 */	stw r0, 0x2a0(r31)
/* 801016EC 000FE62C  90 1F 02 9C */	stw r0, 0x29c(r31)
/* 801016F0 000FE630  90 1F 02 98 */	stw r0, 0x298(r31)
/* 801016F4 000FE634  90 1F 02 94 */	stw r0, 0x294(r31)
/* 801016F8 000FE638  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801016FC 000FE63C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80101700 000FE640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101704 000FE644  7C 08 03 A6 */	mtlr r0
/* 80101708 000FE648  38 21 00 10 */	addi r1, r1, 0x10
/* 8010170C 000FE64C  4E 80 00 20 */	blr 

.global __dt__Q28SysShape8KeyEventFv
__dt__Q28SysShape8KeyEventFv:
/* 80101710 000FE650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101714 000FE654  7C 08 02 A6 */	mflr r0
/* 80101718 000FE658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010171C 000FE65C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101720 000FE660  7C 9F 23 78 */	mr r31, r4
/* 80101724 000FE664  93 C1 00 08 */	stw r30, 8(r1)
/* 80101728 000FE668  7C 7E 1B 79 */	or. r30, r3, r3
/* 8010172C 000FE66C  41 82 00 28 */	beq .L_80101754
/* 80101730 000FE670  3C A0 80 4B */	lis r5, __vt__Q28SysShape8KeyEvent@ha
/* 80101734 000FE674  38 80 00 00 */	li r4, 0
/* 80101738 000FE678  38 05 A6 5C */	addi r0, r5, __vt__Q28SysShape8KeyEvent@l
/* 8010173C 000FE67C  90 1E 00 00 */	stw r0, 0(r30)
/* 80101740 000FE680  48 30 FE 49 */	bl __dt__5CNodeFv
/* 80101744 000FE684  7F E0 07 35 */	extsh. r0, r31
/* 80101748 000FE688  40 81 00 0C */	ble .L_80101754
/* 8010174C 000FE68C  7F C3 F3 78 */	mr r3, r30
/* 80101750 000FE690  4B F2 29 65 */	bl __dl__FPv
.L_80101754:
/* 80101754 000FE694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101758 000FE698  7F C3 F3 78 */	mr r3, r30
/* 8010175C 000FE69C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101760 000FE6A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80101764 000FE6A4  7C 08 03 A6 */	mtlr r0
/* 80101768 000FE6A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010176C 000FE6AC  4E 80 00 20 */	blr 

.global "__ct__11BitFlag<Ul>Fv"
"__ct__11BitFlag<Ul>Fv":
/* 80101770 000FE6B0  38 00 00 00 */	li r0, 0
/* 80101774 000FE6B4  98 03 00 00 */	stb r0, 0(r3)
/* 80101778 000FE6B8  98 03 00 01 */	stb r0, 1(r3)
/* 8010177C 000FE6BC  98 03 00 02 */	stb r0, 2(r3)
/* 80101780 000FE6C0  98 03 00 03 */	stb r0, 3(r3)
/* 80101784 000FE6C4  4E 80 00 20 */	blr 

.global constructor__Q24Game9EnemyBaseFv
constructor__Q24Game9EnemyBaseFv:
/* 80101788 000FE6C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010178C 000FE6CC  7C 08 02 A6 */	mflr r0
/* 80101790 000FE6D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101794 000FE6D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101798 000FE6D8  7C 7F 1B 78 */	mr r31, r3
/* 8010179C 000FE6DC  48 00 55 55 */	bl createPSEnemyBase__Q24Game9EnemyBaseFv
/* 801017A0 000FE6E0  90 7F 02 8C */	stw r3, 0x28c(r31)
/* 801017A4 000FE6E4  7F E3 FB 78 */	mr r3, r31
/* 801017A8 000FE6E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801017AC 000FE6EC  81 8C 02 48 */	lwz r12, 0x248(r12)
/* 801017B0 000FE6F0  7D 89 03 A6 */	mtctr r12
/* 801017B4 000FE6F4  4E 80 04 21 */	bctrl 
/* 801017B8 000FE6F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801017BC 000FE6FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801017C0 000FE700  7C 08 03 A6 */	mtlr r0
/* 801017C4 000FE704  38 21 00 10 */	addi r1, r1, 0x10
/* 801017C8 000FE708  4E 80 00 20 */	blr 

.global createEffects__Q24Game9EnemyBaseFv
createEffects__Q24Game9EnemyBaseFv:
/* 801017CC 000FE70C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801017D0 000FE710  7C 08 02 A6 */	mflr r0
/* 801017D4 000FE714  90 01 00 14 */	stw r0, 0x14(r1)
/* 801017D8 000FE718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801017DC 000FE71C  93 C1 00 08 */	stw r30, 8(r1)
/* 801017E0 000FE720  7C 7E 1B 78 */	mr r30, r3
/* 801017E4 000FE724  80 63 02 A0 */	lwz r3, 0x2a0(r3)
/* 801017E8 000FE728  48 00 00 20 */	b .L_80101808
.L_801017EC:
/* 801017EC 000FE72C  81 83 00 00 */	lwz r12, 0(r3)
/* 801017F0 000FE730  7F C4 F3 78 */	mr r4, r30
/* 801017F4 000FE734  83 E3 00 04 */	lwz r31, 4(r3)
/* 801017F8 000FE738  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801017FC 000FE73C  7D 89 03 A6 */	mtctr r12
/* 80101800 000FE740  4E 80 04 21 */	bctrl 
/* 80101804 000FE744  7F E3 FB 78 */	mr r3, r31
.L_80101808:
/* 80101808 000FE748  28 03 00 00 */	cmplwi r3, 0
/* 8010180C 000FE74C  40 82 FF E0 */	bne .L_801017EC
/* 80101810 000FE750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101814 000FE754  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101818 000FE758  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010181C 000FE75C  7C 08 03 A6 */	mtlr r0
/* 80101820 000FE760  38 21 00 10 */	addi r1, r1, 0x10
/* 80101824 000FE764  4E 80 00 20 */	blr 

.global fadeEffects__Q24Game9EnemyBaseFv
fadeEffects__Q24Game9EnemyBaseFv:
/* 80101828 000FE768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010182C 000FE76C  7C 08 02 A6 */	mflr r0
/* 80101830 000FE770  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101834 000FE774  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101838 000FE778  93 C1 00 08 */	stw r30, 8(r1)
/* 8010183C 000FE77C  7C 7E 1B 78 */	mr r30, r3
/* 80101840 000FE780  80 63 02 A0 */	lwz r3, 0x2a0(r3)
/* 80101844 000FE784  48 00 00 20 */	b .L_80101864
.L_80101848:
/* 80101848 000FE788  81 83 00 00 */	lwz r12, 0(r3)
/* 8010184C 000FE78C  7F C4 F3 78 */	mr r4, r30
/* 80101850 000FE790  83 E3 00 04 */	lwz r31, 4(r3)
/* 80101854 000FE794  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80101858 000FE798  7D 89 03 A6 */	mtctr r12
/* 8010185C 000FE79C  4E 80 04 21 */	bctrl 
/* 80101860 000FE7A0  7F E3 FB 78 */	mr r3, r31
.L_80101864:
/* 80101864 000FE7A4  28 03 00 00 */	cmplwi r3, 0
/* 80101868 000FE7A8  40 82 FF E0 */	bne .L_80101848
/* 8010186C 000FE7AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101870 000FE7B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101874 000FE7B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80101878 000FE7B8  7C 08 03 A6 */	mtlr r0
/* 8010187C 000FE7BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80101880 000FE7C0  4E 80 00 20 */	blr 

.global createInstanceEfxHamon__Q24Game9EnemyBaseFv
createInstanceEfxHamon__Q24Game9EnemyBaseFv:
/* 80101884 000FE7C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101888 000FE7C8  7C 08 02 A6 */	mflr r0
/* 8010188C 000FE7CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101890 000FE7D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101894 000FE7D4  7C 7F 1B 78 */	mr r31, r3
/* 80101898 000FE7D8  38 60 00 64 */	li r3, 0x64
/* 8010189C 000FE7DC  4B F2 26 09 */	bl __nw__FUl
/* 801018A0 000FE7E0  7C 60 1B 79 */	or. r0, r3, r3
/* 801018A4 000FE7E4  41 82 00 0C */	beq .L_801018B0
/* 801018A8 000FE7E8  48 02 CC 69 */	bl __ct__Q24Game20EnemyEffectNodeHamonFv
/* 801018AC 000FE7EC  7C 60 1B 78 */	mr r0, r3
.L_801018B0:
/* 801018B0 000FE7F0  90 1F 02 84 */	stw r0, 0x284(r31)
/* 801018B4 000FE7F4  38 7F 02 90 */	addi r3, r31, 0x290
/* 801018B8 000FE7F8  80 9F 02 84 */	lwz r4, 0x284(r31)
/* 801018BC 000FE7FC  48 30 FB 4D */	bl add__5CNodeFP5CNode
/* 801018C0 000FE800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801018C4 000FE804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801018C8 000FE808  7C 08 03 A6 */	mtlr r0
/* 801018CC 000FE80C  38 21 00 10 */	addi r1, r1, 0x10
/* 801018D0 000FE810  4E 80 00 20 */	blr 

.global updateEfxHamon__Q24Game9EnemyBaseFv
updateEfxHamon__Q24Game9EnemyBaseFv:
/* 801018D4 000FE814  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801018D8 000FE818  7C 08 02 A6 */	mflr r0
/* 801018DC 000FE81C  7C 64 1B 78 */	mr r4, r3
/* 801018E0 000FE820  90 01 00 14 */	stw r0, 0x14(r1)
/* 801018E4 000FE824  80 63 02 84 */	lwz r3, 0x284(r3)
/* 801018E8 000FE828  28 03 00 00 */	cmplwi r3, 0
/* 801018EC 000FE82C  41 82 00 08 */	beq .L_801018F4
/* 801018F0 000FE830  48 02 D1 89 */	bl update__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
.L_801018F4:
/* 801018F4 000FE834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801018F8 000FE838  7C 08 03 A6 */	mtlr r0
/* 801018FC 000FE83C  38 21 00 10 */	addi r1, r1, 0x10
/* 80101900 000FE840  4E 80 00 20 */	blr 

.global createEfxHamon__Q24Game9EnemyBaseFv
createEfxHamon__Q24Game9EnemyBaseFv:
/* 80101904 000FE844  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101908 000FE848  7C 08 02 A6 */	mflr r0
/* 8010190C 000FE84C  7C 64 1B 78 */	mr r4, r3
/* 80101910 000FE850  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101914 000FE854  80 63 02 84 */	lwz r3, 0x284(r3)
/* 80101918 000FE858  28 03 00 00 */	cmplwi r3, 0
/* 8010191C 000FE85C  41 82 00 14 */	beq .L_80101930
/* 80101920 000FE860  81 83 00 00 */	lwz r12, 0(r3)
/* 80101924 000FE864  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80101928 000FE868  7D 89 03 A6 */	mtctr r12
/* 8010192C 000FE86C  4E 80 04 21 */	bctrl 
.L_80101930:
/* 80101930 000FE870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101934 000FE874  7C 08 03 A6 */	mtlr r0
/* 80101938 000FE878  38 21 00 10 */	addi r1, r1, 0x10
/* 8010193C 000FE87C  4E 80 00 20 */	blr 

.global fadeEfxHamon__Q24Game9EnemyBaseFv
fadeEfxHamon__Q24Game9EnemyBaseFv:
/* 80101940 000FE880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101944 000FE884  7C 08 02 A6 */	mflr r0
/* 80101948 000FE888  7C 64 1B 78 */	mr r4, r3
/* 8010194C 000FE88C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101950 000FE890  80 63 02 84 */	lwz r3, 0x284(r3)
/* 80101954 000FE894  28 03 00 00 */	cmplwi r3, 0
/* 80101958 000FE898  41 82 00 14 */	beq .L_8010196C
/* 8010195C 000FE89C  81 83 00 00 */	lwz r12, 0(r3)
/* 80101960 000FE8A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80101964 000FE8A4  7D 89 03 A6 */	mtctr r12
/* 80101968 000FE8A8  4E 80 04 21 */	bctrl 
.L_8010196C:
/* 8010196C 000FE8AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101970 000FE8B0  7C 08 03 A6 */	mtlr r0
/* 80101974 000FE8B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80101978 000FE8B8  4E 80 00 20 */	blr 

.global setEmotionCaution__Q24Game9EnemyBaseFv
setEmotionCaution__Q24Game9EnemyBaseFv:
/* 8010197C 000FE8BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101980 000FE8C0  7C 08 02 A6 */	mflr r0
/* 80101984 000FE8C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101988 000FE8C8  38 00 00 01 */	li r0, 1
/* 8010198C 000FE8CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101990 000FE8D0  7C 7F 1B 78 */	mr r31, r3
/* 80101994 000FE8D4  98 03 01 F0 */	stb r0, 0x1f0(r3)
/* 80101998 000FE8D8  48 23 63 11 */	bl PSGetDirectedMainBgm__Fv
/* 8010199C 000FE8DC  28 03 00 00 */	cmplwi r3, 0
/* 801019A0 000FE8E0  41 82 00 18 */	beq .L_801019B8
/* 801019A4 000FE8E4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801019A8 000FE8E8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801019AC 000FE8EC  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 801019B0 000FE8F0  7D 89 03 A6 */	mtctr r12
/* 801019B4 000FE8F4  4E 80 04 21 */	bctrl 
.L_801019B8:
/* 801019B8 000FE8F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801019BC 000FE8FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801019C0 000FE900  7C 08 03 A6 */	mtlr r0
/* 801019C4 000FE904  38 21 00 10 */	addi r1, r1, 0x10
/* 801019C8 000FE908  4E 80 00 20 */	blr 

.global setEmotionExcitement__Q24Game9EnemyBaseFv
setEmotionExcitement__Q24Game9EnemyBaseFv:
/* 801019CC 000FE90C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801019D0 000FE910  7C 08 02 A6 */	mflr r0
/* 801019D4 000FE914  90 01 00 14 */	stw r0, 0x14(r1)
/* 801019D8 000FE918  38 00 00 02 */	li r0, 2
/* 801019DC 000FE91C  98 03 01 F0 */	stb r0, 0x1f0(r3)
/* 801019E0 000FE920  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 801019E4 000FE924  38 63 00 B8 */	addi r3, r3, 0xb8
/* 801019E8 000FE928  81 83 00 10 */	lwz r12, 0x10(r3)
/* 801019EC 000FE92C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801019F0 000FE930  7D 89 03 A6 */	mtctr r12
/* 801019F4 000FE934  4E 80 04 21 */	bctrl 
/* 801019F8 000FE938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801019FC 000FE93C  7C 08 03 A6 */	mtlr r0
/* 80101A00 000FE940  38 21 00 10 */	addi r1, r1, 0x10
/* 80101A04 000FE944  4E 80 00 20 */	blr 

.global setEmotionNone__Q24Game9EnemyBaseFv
setEmotionNone__Q24Game9EnemyBaseFv:
/* 80101A08 000FE948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101A0C 000FE94C  7C 08 02 A6 */	mflr r0
/* 80101A10 000FE950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101A14 000FE954  38 00 00 00 */	li r0, 0
/* 80101A18 000FE958  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101A1C 000FE95C  7C 7F 1B 78 */	mr r31, r3
/* 80101A20 000FE960  98 03 01 F0 */	stb r0, 0x1f0(r3)
/* 80101A24 000FE964  48 23 62 85 */	bl PSGetDirectedMainBgm__Fv
/* 80101A28 000FE968  28 03 00 00 */	cmplwi r3, 0
/* 80101A2C 000FE96C  41 82 00 18 */	beq .L_80101A44
/* 80101A30 000FE970  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80101A34 000FE974  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80101A38 000FE978  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80101A3C 000FE97C  7D 89 03 A6 */	mtctr r12
/* 80101A40 000FE980  4E 80 04 21 */	bctrl 
.L_80101A44:
/* 80101A44 000FE984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101A48 000FE988  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101A4C 000FE98C  7C 08 03 A6 */	mtlr r0
/* 80101A50 000FE990  38 21 00 10 */	addi r1, r1, 0x10
/* 80101A54 000FE994  4E 80 00 20 */	blr 

.global onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg:
/* 80101A58 000FE998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101A5C 000FE99C  7C 08 02 A6 */	mflr r0
/* 80101A60 000FE9A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101A64 000FE9A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101A68 000FE9A8  7C 7F 1B 78 */	mr r31, r3
/* 80101A6C 000FE9AC  48 09 D4 29 */	bl clearStick__Q24Game8CreatureFv
/* 80101A70 000FE9B0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80101A74 000FE9B4  38 80 00 00 */	li r4, 0
/* 80101A78 000FE9B8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80101A7C 000FE9BC  98 83 00 24 */	stb r4, 0x24(r3)
/* 80101A80 000FE9C0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80101A84 000FE9C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101A88 000FE9C8  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80101A8C 000FE9CC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101A90 000FE9D0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80101A94 000FE9D4  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 80101A98 000FE9D8  98 9F 01 E0 */	stb r4, 0x1e0(r31)
/* 80101A9C 000FE9DC  98 9F 01 E1 */	stb r4, 0x1e1(r31)
/* 80101AA0 000FE9E0  98 9F 01 E2 */	stb r4, 0x1e2(r31)
/* 80101AA4 000FE9E4  98 9F 01 E3 */	stb r4, 0x1e3(r31)
/* 80101AA8 000FE9E8  98 9F 01 E4 */	stb r4, 0x1e4(r31)
/* 80101AAC 000FE9EC  98 9F 01 E5 */	stb r4, 0x1e5(r31)
/* 80101AB0 000FE9F0  98 9F 01 E6 */	stb r4, 0x1e6(r31)
/* 80101AB4 000FE9F4  98 9F 01 E7 */	stb r4, 0x1e7(r31)
/* 80101AB8 000FE9F8  98 9F 01 E8 */	stb r4, 0x1e8(r31)
/* 80101ABC 000FE9FC  98 9F 01 E9 */	stb r4, 0x1e9(r31)
/* 80101AC0 000FEA00  98 9F 01 EA */	stb r4, 0x1ea(r31)
/* 80101AC4 000FEA04  98 9F 01 EB */	stb r4, 0x1eb(r31)
/* 80101AC8 000FEA08  98 9F 01 EC */	stb r4, 0x1ec(r31)
/* 80101ACC 000FEA0C  98 9F 01 ED */	stb r4, 0x1ed(r31)
/* 80101AD0 000FEA10  98 9F 01 EE */	stb r4, 0x1ee(r31)
/* 80101AD4 000FEA14  98 9F 01 EF */	stb r4, 0x1ef(r31)
/* 80101AD8 000FEA18  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101ADC 000FEA1C  64 00 10 00 */	oris r0, r0, 0x1000
/* 80101AE0 000FEA20  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101AE4 000FEA24  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101AE8 000FEA28  60 00 00 08 */	ori r0, r0, 8
/* 80101AEC 000FEA2C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101AF0 000FEA30  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101AF4 000FEA34  60 00 00 20 */	ori r0, r0, 0x20
/* 80101AF8 000FEA38  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101AFC 000FEA3C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101B00 000FEA40  60 00 00 40 */	ori r0, r0, 0x40
/* 80101B04 000FEA44  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101B08 000FEA48  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101B0C 000FEA4C  60 00 00 80 */	ori r0, r0, 0x80
/* 80101B10 000FEA50  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101B14 000FEA54  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101B18 000FEA58  60 00 01 00 */	ori r0, r0, 0x100
/* 80101B1C 000FEA5C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101B20 000FEA60  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101B24 000FEA64  60 00 08 00 */	ori r0, r0, 0x800
/* 80101B28 000FEA68  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101B2C 000FEA6C  90 9F 02 80 */	stw r4, 0x280(r31)
/* 80101B30 000FEA70  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101B34 000FEA74  60 00 10 00 */	ori r0, r0, 0x1000
/* 80101B38 000FEA78  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101B3C 000FEA7C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101B40 000FEA80  60 00 80 00 */	ori r0, r0, 0x8000
/* 80101B44 000FEA84  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80101B48 000FEA88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101B4C 000FEA8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101B50 000FEA90  7C 08 03 A6 */	mtlr r0
/* 80101B54 000FEA94  38 21 00 10 */	addi r1, r1, 0x10
/* 80101B58 000FEA98  4E 80 00 20 */	blr 

.global onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg:
/* 80101B5C 000FEA9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80101B60 000FEAA0  7C 08 02 A6 */	mflr r0
/* 80101B64 000FEAA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80101B68 000FEAA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80101B6C 000FEAAC  7C 7F 1B 78 */	mr r31, r3
/* 80101B70 000FEAB0  88 C3 02 B0 */	lbz r6, 0x2b0(r3)
/* 80101B74 000FEAB4  7C C6 07 75 */	extsb. r6, r6
/* 80101B78 000FEAB8  41 82 00 14 */	beq .L_80101B8C
/* 80101B7C 000FEABC  41 80 01 64 */	blt .L_80101CE0
/* 80101B80 000FEAC0  2C 06 00 06 */	cmpwi r6, 6
/* 80101B84 000FEAC4  40 80 01 5C */	bge .L_80101CE0
/* 80101B88 000FEAC8  48 00 00 28 */	b .L_80101BB0
.L_80101B8C:
/* 80101B8C 000FEACC  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101B90 000FEAD0  7F E4 FB 78 */	mr r4, r31
/* 80101B94 000FEAD4  38 A0 00 06 */	li r5, 6
/* 80101B98 000FEAD8  38 C0 00 00 */	li r6, 0
/* 80101B9C 000FEADC  81 83 00 00 */	lwz r12, 0(r3)
/* 80101BA0 000FEAE0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101BA4 000FEAE4  7D 89 03 A6 */	mtctr r12
/* 80101BA8 000FEAE8  4E 80 04 21 */	bctrl 
/* 80101BAC 000FEAEC  48 00 01 50 */	b .L_80101CFC
.L_80101BB0:
/* 80101BB0 000FEAF0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101BB4 000FEAF4  54 00 03 5B */	rlwinm. r0, r0, 0, 0xd, 0xd
/* 80101BB8 000FEAF8  41 82 00 28 */	beq .L_80101BE0
/* 80101BBC 000FEAFC  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101BC0 000FEB00  7F E4 FB 78 */	mr r4, r31
/* 80101BC4 000FEB04  38 A0 00 06 */	li r5, 6
/* 80101BC8 000FEB08  38 C0 00 00 */	li r6, 0
/* 80101BCC 000FEB0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80101BD0 000FEB10  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101BD4 000FEB14  7D 89 03 A6 */	mtctr r12
/* 80101BD8 000FEB18  4E 80 04 21 */	bctrl 
/* 80101BDC 000FEB1C  48 00 01 20 */	b .L_80101CFC
.L_80101BE0:
/* 80101BE0 000FEB20  2C 06 00 03 */	cmpwi r6, 3
/* 80101BE4 000FEB24  41 82 00 70 */	beq .L_80101C54
/* 80101BE8 000FEB28  40 80 00 14 */	bge .L_80101BFC
/* 80101BEC 000FEB2C  2C 06 00 01 */	cmpwi r6, 1
/* 80101BF0 000FEB30  41 82 00 1C */	beq .L_80101C0C
/* 80101BF4 000FEB34  40 80 00 3C */	bge .L_80101C30
/* 80101BF8 000FEB38  48 00 00 C8 */	b .L_80101CC0
.L_80101BFC:
/* 80101BFC 000FEB3C  2C 06 00 05 */	cmpwi r6, 5
/* 80101C00 000FEB40  41 82 00 9C */	beq .L_80101C9C
/* 80101C04 000FEB44  40 80 00 BC */	bge .L_80101CC0
/* 80101C08 000FEB48  48 00 00 70 */	b .L_80101C78
.L_80101C0C:
/* 80101C0C 000FEB4C  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101C10 000FEB50  7F E4 FB 78 */	mr r4, r31
/* 80101C14 000FEB54  38 A0 00 00 */	li r5, 0
/* 80101C18 000FEB58  38 C0 00 00 */	li r6, 0
/* 80101C1C 000FEB5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80101C20 000FEB60  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101C24 000FEB64  7D 89 03 A6 */	mtctr r12
/* 80101C28 000FEB68  4E 80 04 21 */	bctrl 
/* 80101C2C 000FEB6C  48 00 00 D0 */	b .L_80101CFC
.L_80101C30:
/* 80101C30 000FEB70  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101C34 000FEB74  7F E4 FB 78 */	mr r4, r31
/* 80101C38 000FEB78  38 A0 00 01 */	li r5, 1
/* 80101C3C 000FEB7C  38 C0 00 00 */	li r6, 0
/* 80101C40 000FEB80  81 83 00 00 */	lwz r12, 0(r3)
/* 80101C44 000FEB84  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101C48 000FEB88  7D 89 03 A6 */	mtctr r12
/* 80101C4C 000FEB8C  4E 80 04 21 */	bctrl 
/* 80101C50 000FEB90  48 00 00 AC */	b .L_80101CFC
.L_80101C54:
/* 80101C54 000FEB94  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101C58 000FEB98  7F E4 FB 78 */	mr r4, r31
/* 80101C5C 000FEB9C  38 A0 00 02 */	li r5, 2
/* 80101C60 000FEBA0  38 C0 00 00 */	li r6, 0
/* 80101C64 000FEBA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80101C68 000FEBA8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101C6C 000FEBAC  7D 89 03 A6 */	mtctr r12
/* 80101C70 000FEBB0  4E 80 04 21 */	bctrl 
/* 80101C74 000FEBB4  48 00 00 88 */	b .L_80101CFC
.L_80101C78:
/* 80101C78 000FEBB8  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101C7C 000FEBBC  7F E4 FB 78 */	mr r4, r31
/* 80101C80 000FEBC0  38 A0 00 03 */	li r5, 3
/* 80101C84 000FEBC4  38 C0 00 00 */	li r6, 0
/* 80101C88 000FEBC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80101C8C 000FEBCC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101C90 000FEBD0  7D 89 03 A6 */	mtctr r12
/* 80101C94 000FEBD4  4E 80 04 21 */	bctrl 
/* 80101C98 000FEBD8  48 00 00 64 */	b .L_80101CFC
.L_80101C9C:
/* 80101C9C 000FEBDC  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80101CA0 000FEBE0  7F E4 FB 78 */	mr r4, r31
/* 80101CA4 000FEBE4  38 A0 00 04 */	li r5, 4
/* 80101CA8 000FEBE8  38 C0 00 00 */	li r6, 0
/* 80101CAC 000FEBEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80101CB0 000FEBF0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80101CB4 000FEBF4  7D 89 03 A6 */	mtctr r12
/* 80101CB8 000FEBF8  4E 80 04 21 */	bctrl 
/* 80101CBC 000FEBFC  48 00 00 40 */	b .L_80101CFC
.L_80101CC0:
/* 80101CC0 000FEC00  3C 60 80 48 */	lis r3, lbl_8047A544@ha
/* 80101CC4 000FEC04  3C 80 80 48 */	lis r4, lbl_8047A5D4@ha
/* 80101CC8 000FEC08  38 A4 A5 D4 */	addi r5, r4, lbl_8047A5D4@l
/* 80101CCC 000FEC0C  38 63 A5 44 */	addi r3, r3, lbl_8047A544@l
/* 80101CD0 000FEC10  38 80 05 CB */	li r4, 0x5cb
/* 80101CD4 000FEC14  4C C6 31 82 */	crclr 6
/* 80101CD8 000FEC18  4B F2 89 69 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80101CDC 000FEC1C  48 00 00 20 */	b .L_80101CFC
.L_80101CE0:
/* 80101CE0 000FEC20  3C 60 80 48 */	lis r3, lbl_8047A544@ha
/* 80101CE4 000FEC24  3C 80 80 48 */	lis r4, lbl_8047A5D4@ha
/* 80101CE8 000FEC28  38 A4 A5 D4 */	addi r5, r4, lbl_8047A5D4@l
/* 80101CEC 000FEC2C  38 63 A5 44 */	addi r3, r3, lbl_8047A544@l
/* 80101CF0 000FEC30  38 80 05 D2 */	li r4, 0x5d2
/* 80101CF4 000FEC34  4C C6 31 82 */	crclr 6
/* 80101CF8 000FEC38  4B F2 89 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80101CFC:
/* 80101CFC 000FEC3C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80101D00 000FEC40  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80101D04 000FEC44  2C 00 00 04 */	cmpwi r0, 4
/* 80101D08 000FEC48  40 82 00 58 */	bne .L_80101D60
/* 80101D0C 000FEC4C  7F E3 FB 78 */	mr r3, r31
/* 80101D10 000FEC50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80101D14 000FEC54  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80101D18 000FEC58  7D 89 03 A6 */	mtctr r12
/* 80101D1C 000FEC5C  4E 80 04 21 */	bctrl 
/* 80101D20 000FEC60  7F E3 FB 78 */	mr r3, r31
/* 80101D24 000FEC64  38 81 00 08 */	addi r4, r1, 8
/* 80101D28 000FEC68  48 00 4E 39 */	bl getWaterSphere__Q24Game9EnemyBaseFPQ23Sys6Sphere
/* 80101D2C 000FEC6C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80101D30 000FEC70  38 00 00 00 */	li r0, 0
/* 80101D34 000FEC74  28 03 00 00 */	cmplwi r3, 0
/* 80101D38 000FEC78  41 82 00 10 */	beq .L_80101D48
/* 80101D3C 000FEC7C  38 81 00 08 */	addi r4, r1, 8
/* 80101D40 000FEC80  48 06 1B E9 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 80101D44 000FEC84  7C 60 1B 78 */	mr r0, r3
.L_80101D48:
/* 80101D48 000FEC88  28 00 00 00 */	cmplwi r0, 0
/* 80101D4C 000FEC8C  41 82 00 0C */	beq .L_80101D58
/* 80101D50 000FEC90  90 1F 02 80 */	stw r0, 0x280(r31)
/* 80101D54 000FEC94  48 00 00 0C */	b .L_80101D60
.L_80101D58:
/* 80101D58 000FEC98  38 00 00 00 */	li r0, 0
/* 80101D5C 000FEC9C  90 1F 02 80 */	stw r0, 0x280(r31)
.L_80101D60:
/* 80101D60 000FECA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80101D64 000FECA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80101D68 000FECA8  7C 08 03 A6 */	mtlr r0
/* 80101D6C 000FECAC  38 21 00 20 */	addi r1, r1, 0x20
/* 80101D70 000FECB0  4E 80 00 20 */	blr 

.global setOtakaraCode__Q24Game9EnemyBaseFRQ34Game9PelletMgr15OtakaraItemCode
setOtakaraCode__Q24Game9EnemyBaseFRQ34Game9PelletMgr15OtakaraItemCode:
/* 80101D74 000FECB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80101D78 000FECB8  7C 08 02 A6 */	mflr r0
/* 80101D7C 000FECBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80101D80 000FECC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80101D84 000FECC4  7C 7F 1B 78 */	mr r31, r3
/* 80101D88 000FECC8  38 7F 02 50 */	addi r3, r31, 0x250
/* 80101D8C 000FECCC  A8 04 00 00 */	lha r0, 0(r4)
/* 80101D90 000FECD0  B0 1F 02 50 */	sth r0, 0x250(r31)
/* 80101D94 000FECD4  48 06 BA F5 */	bl isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
/* 80101D98 000FECD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80101D9C 000FECDC  40 82 00 64 */	bne .L_80101E00
/* 80101DA0 000FECE0  A8 1F 02 50 */	lha r0, 0x250(r31)
/* 80101DA4 000FECE4  7C 03 46 70 */	srawi r3, r0, 8
/* 80101DA8 000FECE8  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 80101DAC 000FECEC  28 04 00 04 */	cmplwi r4, 4
/* 80101DB0 000FECF0  40 82 00 18 */	bne .L_80101DC8
/* 80101DB4 000FECF4  7F E3 FB 78 */	mr r3, r31
/* 80101DB8 000FECF8  38 80 00 12 */	li r4, 0x12
/* 80101DBC 000FECFC  38 A0 00 00 */	li r5, 0
/* 80101DC0 000FED00  48 11 C7 C5 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80101DC4 000FED04  48 00 00 3C */	b .L_80101E00
.L_80101DC8:
/* 80101DC8 000FED08  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80101DCC 000FED0C  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 80101DD0 000FED10  48 0E 5D C9 */	bl isPelletEverGot__Q24Game8PlayDataFUcUc
/* 80101DD4 000FED14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80101DD8 000FED18  41 82 00 18 */	beq .L_80101DF0
/* 80101DDC 000FED1C  7F E3 FB 78 */	mr r3, r31
/* 80101DE0 000FED20  38 80 00 10 */	li r4, 0x10
/* 80101DE4 000FED24  38 A0 00 00 */	li r5, 0
/* 80101DE8 000FED28  48 11 C7 9D */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80101DEC 000FED2C  48 00 00 14 */	b .L_80101E00
.L_80101DF0:
/* 80101DF0 000FED30  7F E3 FB 78 */	mr r3, r31
/* 80101DF4 000FED34  38 80 00 11 */	li r4, 0x11
/* 80101DF8 000FED38  38 A0 00 00 */	li r5, 0
/* 80101DFC 000FED3C  48 11 C7 89 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
.L_80101E00:
/* 80101E00 000FED40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80101E04 000FED44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80101E08 000FED48  7C 08 03 A6 */	mtlr r0
/* 80101E0C 000FED4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80101E10 000FED50  4E 80 00 20 */	blr 

.global setKilled__Q23PSM9EnemyBaseFv
setKilled__Q23PSM9EnemyBaseFv:
/* 80101E14 000FED54  4E 80 00 20 */	blr 

.global setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg:
/* 80101E18 000FED58  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80101E1C 000FED5C  7C 08 02 A6 */	mflr r0
/* 80101E20 000FED60  90 01 00 54 */	stw r0, 0x54(r1)
/* 80101E24 000FED64  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80101E28 000FED68  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80101E2C 000FED6C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80101E30 000FED70  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80101E34 000FED74  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80101E38 000FED78  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80101E3C 000FED7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80101E40 000FED80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80101E44 000FED84  7C 7E 1B 78 */	mr r30, r3
/* 80101E48 000FED88  7C 9F 23 78 */	mr r31, r4
/* 80101E4C 000FED8C  7F C4 F3 78 */	mr r4, r30
/* 80101E50 000FED90  38 61 00 08 */	addi r3, r1, 8
/* 80101E54 000FED94  81 9E 00 00 */	lwz r12, 0(r30)
/* 80101E58 000FED98  81 8C 00 08 */	lwz r12, 8(r12)
/* 80101E5C 000FED9C  7D 89 03 A6 */	mtctr r12
/* 80101E60 000FEDA0  4E 80 04 21 */	bctrl 
/* 80101E64 000FEDA4  7F C3 F3 78 */	mr r3, r30
/* 80101E68 000FEDA8  C3 E1 00 08 */	lfs f31, 8(r1)
/* 80101E6C 000FEDAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80101E70 000FEDB0  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 80101E74 000FEDB4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80101E78 000FEDB8  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 80101E7C 000FEDBC  7D 89 03 A6 */	mtctr r12
/* 80101E80 000FEDC0  4E 80 04 21 */	bctrl 
/* 80101E84 000FEDC4  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80101E88 000FEDC8  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 80101E8C 000FEDCC  48 02 14 51 */	bl getEnemyName__Q24Game13EnemyInfoFuncFii
/* 80101E90 000FEDD0  90 7F 00 00 */	stw r3, 0(r31)
/* 80101E94 000FEDD4  38 1E 01 38 */	addi r0, r30, 0x138
/* 80101E98 000FEDD8  D3 FF 00 04 */	stfs f31, 4(r31)
/* 80101E9C 000FEDDC  D3 DF 00 08 */	stfs f30, 8(r31)
/* 80101EA0 000FEDE0  D3 BF 00 0C */	stfs f29, 0xc(r31)
/* 80101EA4 000FEDE4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80101EA8 000FEDE8  93 DF 00 14 */	stw r30, 0x14(r31)
/* 80101EAC 000FEDEC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80101EB0 000FEDF0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80101EB4 000FEDF4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80101EB8 000FEDF8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80101EBC 000FEDFC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80101EC0 000FEE00  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80101EC4 000FEE04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80101EC8 000FEE08  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80101ECC 000FEE0C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80101ED0 000FEE10  7C 08 03 A6 */	mtlr r0
/* 80101ED4 000FEE14  38 21 00 50 */	addi r1, r1, 0x50
/* 80101ED8 000FEE18  4E 80 00 20 */	blr 

.global doBecomeCarcass__Q24Game9EnemyBaseFv
doBecomeCarcass__Q24Game9EnemyBaseFv:
/* 80101EDC 000FEE1C  38 60 00 01 */	li r3, 1
/* 80101EE0 000FEE20  4E 80 00 20 */	blr 

.global doUpdateCarcass__Q24Game9EnemyBaseFv
doUpdateCarcass__Q24Game9EnemyBaseFv:
/* 80101EE4 000FEE24  4E 80 00 20 */	blr 

.global onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg:
/* 80101EE8 000FEE28  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 80101EEC 000FEE2C  7C 08 02 A6 */	mflr r0
/* 80101EF0 000FEE30  90 01 01 54 */	stw r0, 0x154(r1)
/* 80101EF4 000FEE34  DB E1 01 40 */	stfd f31, 0x140(r1)
/* 80101EF8 000FEE38  F3 E1 01 48 */	psq_st f31, 328(r1), 0, qr0
/* 80101EFC 000FEE3C  DB C1 01 30 */	stfd f30, 0x130(r1)
/* 80101F00 000FEE40  F3 C1 01 38 */	psq_st f30, 312(r1), 0, qr0
/* 80101F04 000FEE44  DB A1 01 20 */	stfd f29, 0x120(r1)
/* 80101F08 000FEE48  F3 A1 01 28 */	psq_st f29, 296(r1), 0, qr0
/* 80101F0C 000FEE4C  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 80101F10 000FEE50  F3 81 01 18 */	psq_st f28, 280(r1), 0, qr0
/* 80101F14 000FEE54  BF 21 00 F4 */	stmw r25, 0xf4(r1)
/* 80101F18 000FEE58  81 83 00 00 */	lwz r12, 0(r3)
/* 80101F1C 000FEE5C  7C 7F 1B 78 */	mr r31, r3
/* 80101F20 000FEE60  7C 99 23 78 */	mr r25, r4
/* 80101F24 000FEE64  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 80101F28 000FEE68  7D 89 03 A6 */	mtctr r12
/* 80101F2C 000FEE6C  4E 80 04 21 */	bctrl 
/* 80101F30 000FEE70  7F E3 FB 78 */	mr r3, r31
/* 80101F34 000FEE74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80101F38 000FEE78  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 80101F3C 000FEE7C  7D 89 03 A6 */	mtctr r12
/* 80101F40 000FEE80  4E 80 04 21 */	bctrl 
/* 80101F44 000FEE84  28 19 00 00 */	cmplwi r25, 0
/* 80101F48 000FEE88  3B 80 00 00 */	li r28, 0
/* 80101F4C 000FEE8C  41 82 00 30 */	beq .L_80101F7C
/* 80101F50 000FEE90  7F 23 CB 78 */	mr r3, r25
/* 80101F54 000FEE94  81 99 00 00 */	lwz r12, 0(r25)
/* 80101F58 000FEE98  81 8C 00 08 */	lwz r12, 8(r12)
/* 80101F5C 000FEE9C  7D 89 03 A6 */	mtctr r12
/* 80101F60 000FEEA0  4E 80 04 21 */	bctrl 
/* 80101F64 000FEEA4  3C 80 80 48 */	lis r4, lbl_8047A5EC@ha
/* 80101F68 000FEEA8  38 84 A5 EC */	addi r4, r4, lbl_8047A5EC@l
/* 80101F6C 000FEEAC  4B FC 87 55 */	bl strcmp
/* 80101F70 000FEEB0  2C 03 00 00 */	cmpwi r3, 0
/* 80101F74 000FEEB4  40 82 00 08 */	bne .L_80101F7C
/* 80101F78 000FEEB8  7F 3C CB 78 */	mr r28, r25
.L_80101F7C:
/* 80101F7C 000FEEBC  7F E3 FB 78 */	mr r3, r31
/* 80101F80 000FEEC0  48 09 D4 A5 */	bl endStick__Q24Game8CreatureFv
/* 80101F84 000FEEC4  28 1C 00 00 */	cmplwi r28, 0
/* 80101F88 000FEEC8  41 82 00 10 */	beq .L_80101F98
/* 80101F8C 000FEECC  80 1C 00 04 */	lwz r0, 4(r28)
/* 80101F90 000FEED0  54 00 00 C7 */	rlwinm. r0, r0, 0, 3, 3
/* 80101F94 000FEED4  40 82 00 DC */	bne .L_80102070
.L_80101F98:
/* 80101F98 000FEED8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80101F9C 000FEEDC  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80101FA0 000FEEE0  41 82 00 D0 */	beq .L_80102070
/* 80101FA4 000FEEE4  7F E3 FB 78 */	mr r3, r31
/* 80101FA8 000FEEE8  38 81 00 80 */	addi r4, r1, 0x80
/* 80101FAC 000FEEEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80101FB0 000FEEF0  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 80101FB4 000FEEF4  7D 89 03 A6 */	mtctr r12
/* 80101FB8 000FEEF8  4E 80 04 21 */	bctrl 
/* 80101FBC 000FEEFC  7F E3 FB 78 */	mr r3, r31
/* 80101FC0 000FEF00  C3 9F 01 F8 */	lfs f28, 0x1f8(r31)
/* 80101FC4 000FEF04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80101FC8 000FEF08  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80101FCC 000FEF0C  7D 89 03 A6 */	mtctr r12
/* 80101FD0 000FEF10  4E 80 04 21 */	bctrl 
/* 80101FD4 000FEF14  80 E1 00 80 */	lwz r7, 0x80(r1)
/* 80101FD8 000FEF18  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80101FDC 000FEF1C  80 C1 00 84 */	lwz r6, 0x84(r1)
/* 80101FE0 000FEF20  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80101FE4 000FEF24  80 A1 00 88 */	lwz r5, 0x88(r1)
/* 80101FE8 000FEF28  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80101FEC 000FEF2C  90 E1 00 4C */	stw r7, 0x4c(r1)
/* 80101FF0 000FEF30  3C E0 80 4E */	lis r7, __vt__Q23efx8TSimple1@ha
/* 80101FF4 000FEF34  39 24 A7 EC */	addi r9, r4, __vt__Q23efx3Arg@l
/* 80101FF8 000FEF38  3D 00 80 4B */	lis r8, __vt__Q23efx12ArgEnemyType@ha
/* 80101FFC 000FEF3C  90 C1 00 50 */	stw r6, 0x50(r1)
/* 80102000 000FEF40  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyDead@ha
/* 80102004 000FEF44  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 80102008 000FEF48  38 C0 00 52 */	li r6, 0x52
/* 8010200C 000FEF4C  90 A1 00 54 */	stw r5, 0x54(r1)
/* 80102010 000FEF50  38 A0 00 00 */	li r5, 0
/* 80102014 000FEF54  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80102018 000FEF58  38 E7 6A 78 */	addi r7, r7, __vt__Q23efx8TSimple1@l
/* 8010201C 000FEF5C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80102020 000FEF60  39 08 A7 E0 */	addi r8, r8, __vt__Q23efx12ArgEnemyType@l
/* 80102024 000FEF64  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80102028 000FEF68  38 04 86 60 */	addi r0, r4, __vt__Q23efx10TEnemyDead@l
/* 8010202C 000FEF6C  91 21 00 8C */	stw r9, 0x8c(r1)
/* 80102030 000FEF70  38 81 00 8C */	addi r4, r1, 0x8c
/* 80102034 000FEF74  90 E1 00 74 */	stw r7, 0x74(r1)
/* 80102038 000FEF78  90 61 00 9C */	stw r3, 0x9c(r1)
/* 8010203C 000FEF7C  38 61 00 74 */	addi r3, r1, 0x74
/* 80102040 000FEF80  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 80102044 000FEF84  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 80102048 000FEF88  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8010204C 000FEF8C  91 01 00 8C */	stw r8, 0x8c(r1)
/* 80102050 000FEF90  D3 81 00 A0 */	stfs f28, 0xa0(r1)
/* 80102054 000FEF94  B0 C1 00 78 */	sth r6, 0x78(r1)
/* 80102058 000FEF98  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 8010205C 000FEF9C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80102060 000FEFA0  48 2C 60 4D */	bl create__Q23efx10TEnemyDeadFPQ23efx3Arg
/* 80102064 000FEFA4  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80102068 000FEFA8  7F E3 FB 78 */	mr r3, r31
/* 8010206C 000FEFAC  48 36 C2 11 */	bl PSStartEnemyGhostSE__FPQ24Game9EnemyBasef
.L_80102070:
/* 80102070 000FEFB0  28 1C 00 00 */	cmplwi r28, 0
/* 80102074 000FEFB4  41 82 00 10 */	beq .L_80102084
/* 80102078 000FEFB8  80 1C 00 04 */	lwz r0, 4(r28)
/* 8010207C 000FEFBC  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 80102080 000FEFC0  40 82 07 0C */	bne .L_8010278C
.L_80102084:
/* 80102084 000FEFC4  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80102088 000FEFC8  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 8010208C 000FEFCC  41 82 03 D0 */	beq .L_8010245C
/* 80102090 000FEFD0  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80102094 000FEFD4  48 02 80 59 */	bl dead__Q34Game10EnemyStone3ObjFv
/* 80102098 000FEFD8  7F E3 FB 78 */	mr r3, r31
/* 8010209C 000FEFDC  48 00 36 85 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 801020A0 000FEFE0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801020A4 000FEFE4  7F E3 FB 78 */	mr r3, r31
/* 801020A8 000FEFE8  54 00 05 EA */	rlwinm r0, r0, 0, 0x17, 0x15
/* 801020AC 000FEFEC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801020B0 000FEFF0  48 00 56 BD */	bl constraintOff__Q24Game9EnemyBaseFv
/* 801020B4 000FEFF4  80 0D 94 50 */	lwz r0, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801020B8 000FEFF8  28 00 00 00 */	cmplwi r0, 0
/* 801020BC 000FEFFC  41 82 02 9C */	beq .L_80102358
/* 801020C0 000FF000  7F E3 FB 78 */	mr r3, r31
/* 801020C4 000FF004  81 9F 00 00 */	lwz r12, 0(r31)
/* 801020C8 000FF008  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801020CC 000FF00C  7D 89 03 A6 */	mtctr r12
/* 801020D0 000FF010  4E 80 04 21 */	bctrl 
/* 801020D4 000FF014  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 801020D8 000FF018  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 801020DC 000FF01C  48 02 11 9D */	bl getEnemyInfo__Q24Game13EnemyInfoFuncFii
/* 801020E0 000FF020  88 03 00 30 */	lbz r0, 0x30(r3)
/* 801020E4 000FF024  7C 00 07 74 */	extsb r0, r0
/* 801020E8 000FF028  2C 00 00 03 */	cmpwi r0, 3
/* 801020EC 000FF02C  41 82 00 48 */	beq .L_80102134
/* 801020F0 000FF030  40 80 00 14 */	bge .L_80102104
/* 801020F4 000FF034  2C 00 00 00 */	cmpwi r0, 0
/* 801020F8 000FF038  41 82 00 24 */	beq .L_8010211C
/* 801020FC 000FF03C  40 80 00 2C */	bge .L_80102128
/* 80102100 000FF040  48 00 00 58 */	b .L_80102158
.L_80102104:
/* 80102104 000FF044  2C 00 00 08 */	cmpwi r0, 8
/* 80102108 000FF048  41 82 00 44 */	beq .L_8010214C
/* 8010210C 000FF04C  40 80 00 4C */	bge .L_80102158
/* 80102110 000FF050  2C 00 00 06 */	cmpwi r0, 6
/* 80102114 000FF054  40 80 00 2C */	bge .L_80102140
/* 80102118 000FF058  48 00 00 40 */	b .L_80102158
.L_8010211C:
/* 8010211C 000FF05C  C3 82 94 A8 */	lfs f28, lbl_80517808@sda21(r2)
/* 80102120 000FF060  3B 60 00 01 */	li r27, 1
/* 80102124 000FF064  48 00 00 3C */	b .L_80102160
.L_80102128:
/* 80102128 000FF068  C3 82 94 AC */	lfs f28, lbl_8051780C@sda21(r2)
/* 8010212C 000FF06C  3B 60 00 01 */	li r27, 1
/* 80102130 000FF070  48 00 00 30 */	b .L_80102160
.L_80102134:
/* 80102134 000FF074  C3 82 94 AC */	lfs f28, lbl_8051780C@sda21(r2)
/* 80102138 000FF078  3B 60 00 03 */	li r27, 3
/* 8010213C 000FF07C  48 00 00 24 */	b .L_80102160
.L_80102140:
/* 80102140 000FF080  C3 82 94 B0 */	lfs f28, lbl_80517810@sda21(r2)
/* 80102144 000FF084  3B 60 00 05 */	li r27, 5
/* 80102148 000FF088  48 00 00 18 */	b .L_80102160
.L_8010214C:
/* 8010214C 000FF08C  C3 82 94 50 */	lfs f28, lbl_805177B0@sda21(r2)
/* 80102150 000FF090  3B 60 00 0A */	li r27, 0xa
/* 80102154 000FF094  48 00 00 0C */	b .L_80102160
.L_80102158:
/* 80102158 000FF098  C3 82 94 64 */	lfs f28, lbl_805177C4@sda21(r2)
/* 8010215C 000FF09C  3B 60 00 00 */	li r27, 0
.L_80102160:
/* 80102160 000FF0A0  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80102164 000FF0A4  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 80102168 000FF0A8  3C 60 80 4B */	lis r3, __vt__Q34Game9ItemHoney7InitArg@ha
/* 8010216C 000FF0AC  C0 22 94 B4 */	lfs f1, lbl_80517814@sda21(r2)
/* 80102170 000FF0B0  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80102174 000FF0B4  CB C2 94 58 */	lfd f30, lbl_805177B8@sda21(r2)
/* 80102178 000FF0B8  C3 E2 94 3C */	lfs f31, lbl_8051779C@sda21(r2)
/* 8010217C 000FF0BC  3B A4 A2 F4 */	addi r29, r4, __vt__Q24Game15CreatureInitArg@l
/* 80102180 000FF0C0  3B C3 A2 E8 */	addi r30, r3, __vt__Q34Game9ItemHoney7InitArg@l
/* 80102184 000FF0C4  3B 40 00 00 */	li r26, 0
/* 80102188 000FF0C8  EF A1 E0 3A */	fmadds f29, f1, f0, f28
/* 8010218C 000FF0CC  3F 80 43 30 */	lis r28, 0x4330
/* 80102190 000FF0D0  48 00 01 C0 */	b .L_80102350
.L_80102194:
/* 80102194 000FF0D4  4B FC 74 0D */	bl rand
/* 80102198 000FF0D8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8010219C 000FF0DC  93 81 00 C8 */	stw r28, 0xc8(r1)
/* 801021A0 000FF0E0  90 01 00 CC */	stw r0, 0xcc(r1)
/* 801021A4 000FF0E4  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 801021A8 000FF0E8  EC 00 F0 28 */	fsubs f0, f0, f30
/* 801021AC 000FF0EC  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801021B0 000FF0F0  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 801021B4 000FF0F4  40 80 00 0C */	bge .L_801021C0
/* 801021B8 000FF0F8  3B 20 00 00 */	li r25, 0
/* 801021BC 000FF0FC  48 00 00 18 */	b .L_801021D4
.L_801021C0:
/* 801021C0 000FF100  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 801021C4 000FF104  40 80 00 0C */	bge .L_801021D0
/* 801021C8 000FF108  3B 20 00 01 */	li r25, 1
/* 801021CC 000FF10C  48 00 00 08 */	b .L_801021D4
.L_801021D0:
/* 801021D0 000FF110  3B 20 00 02 */	li r25, 2
.L_801021D4:
/* 801021D4 000FF114  7F E3 FB 78 */	mr r3, r31
/* 801021D8 000FF118  38 81 00 64 */	addi r4, r1, 0x64
/* 801021DC 000FF11C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801021E0 000FF120  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801021E4 000FF124  7D 89 03 A6 */	mtctr r12
/* 801021E8 000FF128  4E 80 04 21 */	bctrl 
/* 801021EC 000FF12C  93 A1 00 08 */	stw r29, 8(r1)
/* 801021F0 000FF130  38 00 00 00 */	li r0, 0
/* 801021F4 000FF134  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801021F8 000FF138  93 C1 00 08 */	stw r30, 8(r1)
/* 801021FC 000FF13C  9B 21 00 0C */	stb r25, 0xc(r1)
/* 80102200 000FF140  98 01 00 0D */	stb r0, 0xd(r1)
/* 80102204 000FF144  81 83 00 00 */	lwz r12, 0(r3)
/* 80102208 000FF148  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8010220C 000FF14C  7D 89 03 A6 */	mtctr r12
/* 80102210 000FF150  4E 80 04 21 */	bctrl 
/* 80102214 000FF154  7C 79 1B 79 */	or. r25, r3, r3
/* 80102218 000FF158  41 82 01 34 */	beq .L_8010234C
/* 8010221C 000FF15C  38 81 00 08 */	addi r4, r1, 8
/* 80102220 000FF160  48 03 8D A9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 80102224 000FF164  7F 23 CB 78 */	mr r3, r25
/* 80102228 000FF168  38 81 00 64 */	addi r4, r1, 0x64
/* 8010222C 000FF16C  38 A0 00 00 */	li r5, 0
/* 80102230 000FF170  48 03 8F 79 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80102234 000FF174  4B FC 73 6D */	bl rand
/* 80102238 000FF178  3C 80 43 30 */	lis r4, 0x4330
/* 8010223C 000FF17C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80102240 000FF180  90 01 00 CC */	stw r0, 0xcc(r1)
/* 80102244 000FF184  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 80102248 000FF188  C8 A2 94 58 */	lfd f5, lbl_805177B8@sda21(r2)
/* 8010224C 000FF18C  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 80102250 000FF190  C0 02 94 3C */	lfs f0, lbl_8051779C@sda21(r2)
/* 80102254 000FF194  C8 21 00 C8 */	lfd f1, 0xc8(r1)
/* 80102258 000FF198  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8010225C 000FF19C  EC 61 28 28 */	fsubs f3, f1, f5
/* 80102260 000FF1A0  C0 22 94 B8 */	lfs f1, lbl_80517818@sda21(r2)
/* 80102264 000FF1A4  90 81 00 D0 */	stw r4, 0xd0(r1)
/* 80102268 000FF1A8  C0 82 94 40 */	lfs f4, lbl_805177A0@sda21(r2)
/* 8010226C 000FF1AC  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 80102270 000FF1B0  EC C3 00 24 */	fdivs f6, f3, f0
/* 80102274 000FF1B4  C0 62 94 64 */	lfs f3, lbl_805177C4@sda21(r2)
/* 80102278 000FF1B8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 8010227C 000FF1BC  EC C4 01 B2 */	fmuls f6, f4, f6
/* 80102280 000FF1C0  EC 42 28 28 */	fsubs f2, f2, f5
/* 80102284 000FF1C4  FC 80 30 90 */	fmr f4, f6
/* 80102288 000FF1C8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8010228C 000FF1CC  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80102290 000FF1D0  EC A3 08 2A */	fadds f5, f3, f1
/* 80102294 000FF1D4  40 80 00 08 */	bge .L_8010229C
/* 80102298 000FF1D8  FC 80 30 50 */	fneg f4, f6
.L_8010229C:
/* 8010229C 000FF1DC  C0 42 94 4C */	lfs f2, lbl_805177AC@sda21(r2)
/* 801022A0 000FF1E0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801022A4 000FF1E4  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801022A8 000FF1E8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 801022AC 000FF1EC  EC 24 00 B2 */	fmuls f1, f4, f2
/* 801022B0 000FF1F0  C0 62 94 44 */	lfs f3, lbl_805177A4@sda21(r2)
/* 801022B4 000FF1F4  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 801022B8 000FF1F8  FC 00 08 1E */	fctiwz f0, f1
/* 801022BC 000FF1FC  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 801022C0 000FF200  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 801022C4 000FF204  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801022C8 000FF208  7C 64 02 14 */	add r3, r4, r0
/* 801022CC 000FF20C  C0 03 00 04 */	lfs f0, 4(r3)
/* 801022D0 000FF210  EC 03 00 32 */	fmuls f0, f3, f0
/* 801022D4 000FF214  EC 85 00 32 */	fmuls f4, f5, f0
/* 801022D8 000FF218  40 80 00 28 */	bge .L_80102300
/* 801022DC 000FF21C  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 801022E0 000FF220  EC 06 00 32 */	fmuls f0, f6, f0
/* 801022E4 000FF224  FC 00 00 1E */	fctiwz f0, f0
/* 801022E8 000FF228  D8 01 00 E0 */	stfd f0, 0xe0(r1)
/* 801022EC 000FF22C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801022F0 000FF230  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801022F4 000FF234  7C 04 04 2E */	lfsx f0, r4, r0
/* 801022F8 000FF238  FC 00 00 50 */	fneg f0, f0
/* 801022FC 000FF23C  48 00 00 1C */	b .L_80102318
.L_80102300:
/* 80102300 000FF240  EC 06 00 B2 */	fmuls f0, f6, f2
/* 80102304 000FF244  FC 00 00 1E */	fctiwz f0, f0
/* 80102308 000FF248  D8 01 00 E8 */	stfd f0, 0xe8(r1)
/* 8010230C 000FF24C  80 01 00 EC */	lwz r0, 0xec(r1)
/* 80102310 000FF250  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80102314 000FF254  7C 04 04 2E */	lfsx f0, r4, r0
.L_80102318:
/* 80102318 000FF258  EC 23 00 32 */	fmuls f1, f3, f0
/* 8010231C 000FF25C  C0 02 94 BC */	lfs f0, lbl_8051781C@sda21(r2)
/* 80102320 000FF260  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80102324 000FF264  7F 23 CB 78 */	mr r3, r25
/* 80102328 000FF268  EC 00 01 72 */	fmuls f0, f0, f5
/* 8010232C 000FF26C  38 81 00 58 */	addi r4, r1, 0x58
/* 80102330 000FF270  EC 25 00 72 */	fmuls f1, f5, f1
/* 80102334 000FF274  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80102338 000FF278  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 8010233C 000FF27C  81 99 00 00 */	lwz r12, 0(r25)
/* 80102340 000FF280  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80102344 000FF284  7D 89 03 A6 */	mtctr r12
/* 80102348 000FF288  4E 80 04 21 */	bctrl 
.L_8010234C:
/* 8010234C 000FF28C  3B 5A 00 01 */	addi r26, r26, 1
.L_80102350:
/* 80102350 000FF290  7C 1A D8 00 */	cmpw r26, r27
/* 80102354 000FF294  41 80 FE 40 */	blt .L_80102194
.L_80102358:
/* 80102358 000FF298  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8010235C 000FF29C  28 03 00 00 */	cmplwi r3, 0
/* 80102360 000FF2A0  41 82 00 44 */	beq .L_801023A4
/* 80102364 000FF2A4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80102368 000FF2A8  C0 02 94 A4 */	lfs f0, lbl_80517804@sda21(r2)
/* 8010236C 000FF2AC  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 80102370 000FF2B0  93 E1 00 44 */	stw r31, 0x44(r1)
/* 80102374 000FF2B4  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 80102378 000FF2B8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8010237C 000FF2BC  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 80102380 000FF2C0  38 81 00 40 */	addi r4, r1, 0x40
/* 80102384 000FF2C4  90 01 00 40 */	stw r0, 0x40(r1)
/* 80102388 000FF2C8  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8010238C 000FF2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80102390 000FF2D0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80102394 000FF2D4  7D 89 03 A6 */	mtctr r12
/* 80102398 000FF2D8  4E 80 04 21 */	bctrl 
/* 8010239C 000FF2DC  38 00 00 00 */	li r0, 0
/* 801023A0 000FF2E0  90 1F 02 54 */	stw r0, 0x254(r31)
.L_801023A4:
/* 801023A4 000FF2E4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801023A8 000FF2E8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801023AC 000FF2EC  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 801023B0 000FF2F0  7D 89 03 A6 */	mtctr r12
/* 801023B4 000FF2F4  4E 80 04 21 */	bctrl 
/* 801023B8 000FF2F8  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 801023BC 000FF2FC  28 03 00 00 */	cmplwi r3, 0
/* 801023C0 000FF300  41 82 00 0C */	beq .L_801023CC
/* 801023C4 000FF304  7F E4 FB 78 */	mr r4, r31
/* 801023C8 000FF308  48 01 87 B1 */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_801023CC:
/* 801023CC 000FF30C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801023D0 000FF310  28 03 00 00 */	cmplwi r3, 0
/* 801023D4 000FF314  41 82 00 0C */	beq .L_801023E0
/* 801023D8 000FF318  7F E4 FB 78 */	mr r4, r31
/* 801023DC 000FF31C  48 13 F9 15 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_801023E0:
/* 801023E0 000FF320  80 7F 02 A0 */	lwz r3, 0x2a0(r31)
/* 801023E4 000FF324  48 00 00 20 */	b .L_80102404
.L_801023E8:
/* 801023E8 000FF328  81 83 00 00 */	lwz r12, 0(r3)
/* 801023EC 000FF32C  7F E4 FB 78 */	mr r4, r31
/* 801023F0 000FF330  83 23 00 04 */	lwz r25, 4(r3)
/* 801023F4 000FF334  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801023F8 000FF338  7D 89 03 A6 */	mtctr r12
/* 801023FC 000FF33C  4E 80 04 21 */	bctrl 
/* 80102400 000FF340  7F 23 CB 78 */	mr r3, r25
.L_80102404:
/* 80102404 000FF344  28 03 00 00 */	cmplwi r3, 0
/* 80102408 000FF348  40 82 FF E0 */	bne .L_801023E8
/* 8010240C 000FF34C  38 00 00 00 */	li r0, 0
/* 80102410 000FF350  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 80102414 000FF354  48 23 58 95 */	bl PSGetDirectedMainBgm__Fv
/* 80102418 000FF358  28 03 00 00 */	cmplwi r3, 0
/* 8010241C 000FF35C  41 82 00 18 */	beq .L_80102434
/* 80102420 000FF360  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102424 000FF364  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80102428 000FF368  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8010242C 000FF36C  7D 89 03 A6 */	mtctr r12
/* 80102430 000FF370  4E 80 04 21 */	bctrl 
.L_80102434:
/* 80102434 000FF374  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80102438 000FF378  38 80 00 00 */	li r4, 0
/* 8010243C 000FF37C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102440 000FF380  38 A0 00 01 */	li r5, 1
/* 80102444 000FF384  FC 40 08 90 */	fmr f2, f1
/* 80102448 000FF388  48 35 B9 99 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 8010244C 000FF38C  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80102450 000FF390  7F E4 FB 78 */	mr r4, r31
/* 80102454 000FF394  48 02 D1 01 */	bl kill__Q24Game12EnemyMgrBaseFPQ24Game9EnemyBase
/* 80102458 000FF398  48 00 03 24 */	b .L_8010277C
.L_8010245C:
/* 8010245C 000FF39C  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80102460 000FF3A0  C0 1F 02 AC */	lfs f0, 0x2ac(r31)
/* 80102464 000FF3A4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80102468 000FF3A8  40 82 02 14 */	bne .L_8010267C
/* 8010246C 000FF3AC  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 80102470 000FF3B0  41 82 02 0C */	beq .L_8010267C
/* 80102474 000FF3B4  28 1C 00 00 */	cmplwi r28, 0
/* 80102478 000FF3B8  41 82 00 10 */	beq .L_80102488
/* 8010247C 000FF3BC  80 1C 00 04 */	lwz r0, 4(r28)
/* 80102480 000FF3C0  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 80102484 000FF3C4  40 82 01 F8 */	bne .L_8010267C
.L_80102488:
/* 80102488 000FF3C8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8010248C 000FF3CC  80 03 00 04 */	lwz r0, 4(r3)
/* 80102490 000FF3D0  28 00 00 00 */	cmplwi r0, 0
/* 80102494 000FF3D4  40 82 01 84 */	bne .L_80102618
/* 80102498 000FF3D8  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8010249C 000FF3DC  48 06 36 B1 */	bl __ct__Q24Game13PelletViewArgFv
/* 801024A0 000FF3E0  7F E3 FB 78 */	mr r3, r31
/* 801024A4 000FF3E4  38 81 00 A4 */	addi r4, r1, 0xa4
/* 801024A8 000FF3E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801024AC 000FF3EC  81 8C 02 C8 */	lwz r12, 0x2c8(r12)
/* 801024B0 000FF3F0  7D 89 03 A6 */	mtctr r12
/* 801024B4 000FF3F4  4E 80 04 21 */	bctrl 
/* 801024B8 000FF3F8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801024BC 000FF3FC  38 81 00 A4 */	addi r4, r1, 0xa4
/* 801024C0 000FF400  48 06 36 C1 */	bl becomePellet__Q24Game10PelletViewFPQ24Game13PelletViewArg
/* 801024C4 000FF404  28 03 00 00 */	cmplwi r3, 0
/* 801024C8 000FF408  40 82 01 08 */	bne .L_801025D0
/* 801024CC 000FF40C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 801024D0 000FF410  28 03 00 00 */	cmplwi r3, 0
/* 801024D4 000FF414  41 82 00 44 */	beq .L_80102518
/* 801024D8 000FF418  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801024DC 000FF41C  C0 02 94 A4 */	lfs f0, lbl_80517804@sda21(r2)
/* 801024E0 000FF420  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 801024E4 000FF424  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801024E8 000FF428  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 801024EC 000FF42C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801024F0 000FF430  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 801024F4 000FF434  38 81 00 10 */	addi r4, r1, 0x10
/* 801024F8 000FF438  90 01 00 10 */	stw r0, 0x10(r1)
/* 801024FC 000FF43C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80102500 000FF440  81 83 00 00 */	lwz r12, 0(r3)
/* 80102504 000FF444  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80102508 000FF448  7D 89 03 A6 */	mtctr r12
/* 8010250C 000FF44C  4E 80 04 21 */	bctrl 
/* 80102510 000FF450  38 00 00 00 */	li r0, 0
/* 80102514 000FF454  90 1F 02 54 */	stw r0, 0x254(r31)
.L_80102518:
/* 80102518 000FF458  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8010251C 000FF45C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80102520 000FF460  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 80102524 000FF464  7D 89 03 A6 */	mtctr r12
/* 80102528 000FF468  4E 80 04 21 */	bctrl 
/* 8010252C 000FF46C  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 80102530 000FF470  28 03 00 00 */	cmplwi r3, 0
/* 80102534 000FF474  41 82 00 0C */	beq .L_80102540
/* 80102538 000FF478  7F E4 FB 78 */	mr r4, r31
/* 8010253C 000FF47C  48 01 86 3D */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_80102540:
/* 80102540 000FF480  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80102544 000FF484  28 03 00 00 */	cmplwi r3, 0
/* 80102548 000FF488  41 82 00 0C */	beq .L_80102554
/* 8010254C 000FF48C  7F E4 FB 78 */	mr r4, r31
/* 80102550 000FF490  48 13 F7 A1 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_80102554:
/* 80102554 000FF494  80 7F 02 A0 */	lwz r3, 0x2a0(r31)
/* 80102558 000FF498  48 00 00 20 */	b .L_80102578
.L_8010255C:
/* 8010255C 000FF49C  81 83 00 00 */	lwz r12, 0(r3)
/* 80102560 000FF4A0  7F E4 FB 78 */	mr r4, r31
/* 80102564 000FF4A4  83 23 00 04 */	lwz r25, 4(r3)
/* 80102568 000FF4A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8010256C 000FF4AC  7D 89 03 A6 */	mtctr r12
/* 80102570 000FF4B0  4E 80 04 21 */	bctrl 
/* 80102574 000FF4B4  7F 23 CB 78 */	mr r3, r25
.L_80102578:
/* 80102578 000FF4B8  28 03 00 00 */	cmplwi r3, 0
/* 8010257C 000FF4BC  40 82 FF E0 */	bne .L_8010255C
/* 80102580 000FF4C0  38 00 00 00 */	li r0, 0
/* 80102584 000FF4C4  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 80102588 000FF4C8  48 23 57 21 */	bl PSGetDirectedMainBgm__Fv
/* 8010258C 000FF4CC  28 03 00 00 */	cmplwi r3, 0
/* 80102590 000FF4D0  41 82 00 18 */	beq .L_801025A8
/* 80102594 000FF4D4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102598 000FF4D8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8010259C 000FF4DC  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 801025A0 000FF4E0  7D 89 03 A6 */	mtctr r12
/* 801025A4 000FF4E4  4E 80 04 21 */	bctrl 
.L_801025A8:
/* 801025A8 000FF4E8  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801025AC 000FF4EC  38 80 00 00 */	li r4, 0
/* 801025B0 000FF4F0  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801025B4 000FF4F4  38 A0 00 01 */	li r5, 1
/* 801025B8 000FF4F8  FC 40 08 90 */	fmr f2, f1
/* 801025BC 000FF4FC  48 35 B8 25 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 801025C0 000FF500  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 801025C4 000FF504  7F E4 FB 78 */	mr r4, r31
/* 801025C8 000FF508  48 02 CF 8D */	bl kill__Q24Game12EnemyMgrBaseFPQ24Game9EnemyBase
/* 801025CC 000FF50C  48 00 00 4C */	b .L_80102618
.L_801025D0:
/* 801025D0 000FF510  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 801025D4 000FF514  7F E4 FB 78 */	mr r4, r31
/* 801025D8 000FF518  48 01 85 A1 */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
/* 801025DC 000FF51C  38 00 00 00 */	li r0, 0
/* 801025E0 000FF520  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 801025E4 000FF524  48 23 56 C5 */	bl PSGetDirectedMainBgm__Fv
/* 801025E8 000FF528  28 03 00 00 */	cmplwi r3, 0
/* 801025EC 000FF52C  41 82 00 18 */	beq .L_80102604
/* 801025F0 000FF530  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801025F4 000FF534  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801025F8 000FF538  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 801025FC 000FF53C  7D 89 03 A6 */	mtctr r12
/* 80102600 000FF540  4E 80 04 21 */	bctrl 
.L_80102604:
/* 80102604 000FF544  7F E3 FB 78 */	mr r3, r31
/* 80102608 000FF548  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010260C 000FF54C  81 8C 02 D0 */	lwz r12, 0x2d0(r12)
/* 80102610 000FF550  7D 89 03 A6 */	mtctr r12
/* 80102614 000FF554  4E 80 04 21 */	bctrl 
.L_80102618:
/* 80102618 000FF558  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8010261C 000FF55C  28 03 00 00 */	cmplwi r3, 0
/* 80102620 000FF560  41 82 00 44 */	beq .L_80102664
/* 80102624 000FF564  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80102628 000FF568  C0 02 94 A4 */	lfs f0, lbl_80517804@sda21(r2)
/* 8010262C 000FF56C  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 80102630 000FF570  93 E1 00 38 */	stw r31, 0x38(r1)
/* 80102634 000FF574  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 80102638 000FF578  90 01 00 34 */	stw r0, 0x34(r1)
/* 8010263C 000FF57C  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 80102640 000FF580  38 81 00 34 */	addi r4, r1, 0x34
/* 80102644 000FF584  90 01 00 34 */	stw r0, 0x34(r1)
/* 80102648 000FF588  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8010264C 000FF58C  81 83 00 00 */	lwz r12, 0(r3)
/* 80102650 000FF590  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80102654 000FF594  7D 89 03 A6 */	mtctr r12
/* 80102658 000FF598  4E 80 04 21 */	bctrl 
/* 8010265C 000FF59C  38 00 00 00 */	li r0, 0
/* 80102660 000FF5A0  90 1F 02 54 */	stw r0, 0x254(r31)
.L_80102664:
/* 80102664 000FF5A4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102668 000FF5A8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8010266C 000FF5AC  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 80102670 000FF5B0  7D 89 03 A6 */	mtctr r12
/* 80102674 000FF5B4  4E 80 04 21 */	bctrl 
/* 80102678 000FF5B8  48 00 01 04 */	b .L_8010277C
.L_8010267C:
/* 8010267C 000FF5BC  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80102680 000FF5C0  28 03 00 00 */	cmplwi r3, 0
/* 80102684 000FF5C4  41 82 00 44 */	beq .L_801026C8
/* 80102688 000FF5C8  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8010268C 000FF5CC  C0 02 94 A4 */	lfs f0, lbl_80517804@sda21(r2)
/* 80102690 000FF5D0  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 80102694 000FF5D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80102698 000FF5D8  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 8010269C 000FF5DC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801026A0 000FF5E0  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 801026A4 000FF5E4  38 81 00 28 */	addi r4, r1, 0x28
/* 801026A8 000FF5E8  90 01 00 28 */	stw r0, 0x28(r1)
/* 801026AC 000FF5EC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801026B0 000FF5F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801026B4 000FF5F4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801026B8 000FF5F8  7D 89 03 A6 */	mtctr r12
/* 801026BC 000FF5FC  4E 80 04 21 */	bctrl 
/* 801026C0 000FF600  38 00 00 00 */	li r0, 0
/* 801026C4 000FF604  90 1F 02 54 */	stw r0, 0x254(r31)
.L_801026C8:
/* 801026C8 000FF608  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801026CC 000FF60C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801026D0 000FF610  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 801026D4 000FF614  7D 89 03 A6 */	mtctr r12
/* 801026D8 000FF618  4E 80 04 21 */	bctrl 
/* 801026DC 000FF61C  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 801026E0 000FF620  28 03 00 00 */	cmplwi r3, 0
/* 801026E4 000FF624  41 82 00 0C */	beq .L_801026F0
/* 801026E8 000FF628  7F E4 FB 78 */	mr r4, r31
/* 801026EC 000FF62C  48 01 84 8D */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_801026F0:
/* 801026F0 000FF630  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801026F4 000FF634  28 03 00 00 */	cmplwi r3, 0
/* 801026F8 000FF638  41 82 00 0C */	beq .L_80102704
/* 801026FC 000FF63C  7F E4 FB 78 */	mr r4, r31
/* 80102700 000FF640  48 13 F5 F1 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_80102704:
/* 80102704 000FF644  80 7F 02 A0 */	lwz r3, 0x2a0(r31)
/* 80102708 000FF648  48 00 00 20 */	b .L_80102728
.L_8010270C:
/* 8010270C 000FF64C  81 83 00 00 */	lwz r12, 0(r3)
/* 80102710 000FF650  7F E4 FB 78 */	mr r4, r31
/* 80102714 000FF654  83 23 00 04 */	lwz r25, 4(r3)
/* 80102718 000FF658  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8010271C 000FF65C  7D 89 03 A6 */	mtctr r12
/* 80102720 000FF660  4E 80 04 21 */	bctrl 
/* 80102724 000FF664  7F 23 CB 78 */	mr r3, r25
.L_80102728:
/* 80102728 000FF668  28 03 00 00 */	cmplwi r3, 0
/* 8010272C 000FF66C  40 82 FF E0 */	bne .L_8010270C
/* 80102730 000FF670  38 00 00 00 */	li r0, 0
/* 80102734 000FF674  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 80102738 000FF678  48 23 55 71 */	bl PSGetDirectedMainBgm__Fv
/* 8010273C 000FF67C  28 03 00 00 */	cmplwi r3, 0
/* 80102740 000FF680  41 82 00 18 */	beq .L_80102758
/* 80102744 000FF684  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102748 000FF688  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8010274C 000FF68C  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80102750 000FF690  7D 89 03 A6 */	mtctr r12
/* 80102754 000FF694  4E 80 04 21 */	bctrl 
.L_80102758:
/* 80102758 000FF698  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 8010275C 000FF69C  38 80 00 00 */	li r4, 0
/* 80102760 000FF6A0  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102764 000FF6A4  38 A0 00 01 */	li r5, 1
/* 80102768 000FF6A8  FC 40 08 90 */	fmr f2, f1
/* 8010276C 000FF6AC  48 35 B6 75 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80102770 000FF6B0  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80102774 000FF6B4  7F E4 FB 78 */	mr r4, r31
/* 80102778 000FF6B8  48 02 CD DD */	bl kill__Q24Game12EnemyMgrBaseFPQ24Game9EnemyBase
.L_8010277C:
/* 8010277C 000FF6BC  7F E3 FB 78 */	mr r3, r31
/* 80102780 000FF6C0  38 80 00 01 */	li r4, 1
/* 80102784 000FF6C4  48 00 01 9D */	bl setZukanVisible__Q24Game9EnemyBaseFb
/* 80102788 000FF6C8  48 00 01 18 */	b .L_801028A0
.L_8010278C:
/* 8010278C 000FF6CC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80102790 000FF6D0  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80102794 000FF6D4  41 82 00 0C */	beq .L_801027A0
/* 80102798 000FF6D8  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 8010279C 000FF6DC  48 02 79 51 */	bl dead__Q34Game10EnemyStone3ObjFv
.L_801027A0:
/* 801027A0 000FF6E0  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 801027A4 000FF6E4  28 03 00 00 */	cmplwi r3, 0
/* 801027A8 000FF6E8  41 82 00 44 */	beq .L_801027EC
/* 801027AC 000FF6EC  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801027B0 000FF6F0  C0 02 94 A4 */	lfs f0, lbl_80517804@sda21(r2)
/* 801027B4 000FF6F4  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 801027B8 000FF6F8  93 E1 00 20 */	stw r31, 0x20(r1)
/* 801027BC 000FF6FC  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 801027C0 000FF700  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801027C4 000FF704  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 801027C8 000FF708  38 81 00 1C */	addi r4, r1, 0x1c
/* 801027CC 000FF70C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801027D0 000FF710  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801027D4 000FF714  81 83 00 00 */	lwz r12, 0(r3)
/* 801027D8 000FF718  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801027DC 000FF71C  7D 89 03 A6 */	mtctr r12
/* 801027E0 000FF720  4E 80 04 21 */	bctrl 
/* 801027E4 000FF724  38 00 00 00 */	li r0, 0
/* 801027E8 000FF728  90 1F 02 54 */	stw r0, 0x254(r31)
.L_801027EC:
/* 801027EC 000FF72C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801027F0 000FF730  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801027F4 000FF734  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 801027F8 000FF738  7D 89 03 A6 */	mtctr r12
/* 801027FC 000FF73C  4E 80 04 21 */	bctrl 
/* 80102800 000FF740  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 80102804 000FF744  28 03 00 00 */	cmplwi r3, 0
/* 80102808 000FF748  41 82 00 0C */	beq .L_80102814
/* 8010280C 000FF74C  7F E4 FB 78 */	mr r4, r31
/* 80102810 000FF750  48 01 83 69 */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_80102814:
/* 80102814 000FF754  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80102818 000FF758  28 03 00 00 */	cmplwi r3, 0
/* 8010281C 000FF75C  41 82 00 0C */	beq .L_80102828
/* 80102820 000FF760  7F E4 FB 78 */	mr r4, r31
/* 80102824 000FF764  48 13 F4 CD */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_80102828:
/* 80102828 000FF768  80 7F 02 A0 */	lwz r3, 0x2a0(r31)
/* 8010282C 000FF76C  48 00 00 20 */	b .L_8010284C
.L_80102830:
/* 80102830 000FF770  81 83 00 00 */	lwz r12, 0(r3)
/* 80102834 000FF774  7F E4 FB 78 */	mr r4, r31
/* 80102838 000FF778  83 23 00 04 */	lwz r25, 4(r3)
/* 8010283C 000FF77C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80102840 000FF780  7D 89 03 A6 */	mtctr r12
/* 80102844 000FF784  4E 80 04 21 */	bctrl 
/* 80102848 000FF788  7F 23 CB 78 */	mr r3, r25
.L_8010284C:
/* 8010284C 000FF78C  28 03 00 00 */	cmplwi r3, 0
/* 80102850 000FF790  40 82 FF E0 */	bne .L_80102830
/* 80102854 000FF794  38 00 00 00 */	li r0, 0
/* 80102858 000FF798  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 8010285C 000FF79C  48 23 54 4D */	bl PSGetDirectedMainBgm__Fv
/* 80102860 000FF7A0  28 03 00 00 */	cmplwi r3, 0
/* 80102864 000FF7A4  41 82 00 18 */	beq .L_8010287C
/* 80102868 000FF7A8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8010286C 000FF7AC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80102870 000FF7B0  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80102874 000FF7B4  7D 89 03 A6 */	mtctr r12
/* 80102878 000FF7B8  4E 80 04 21 */	bctrl 
.L_8010287C:
/* 8010287C 000FF7BC  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80102880 000FF7C0  38 80 00 00 */	li r4, 0
/* 80102884 000FF7C4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80102888 000FF7C8  38 A0 00 01 */	li r5, 1
/* 8010288C 000FF7CC  FC 40 08 90 */	fmr f2, f1
/* 80102890 000FF7D0  48 35 B5 51 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80102894 000FF7D4  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80102898 000FF7D8  7F E4 FB 78 */	mr r4, r31
/* 8010289C 000FF7DC  48 02 CC B9 */	bl kill__Q24Game12EnemyMgrBaseFPQ24Game9EnemyBase
.L_801028A0:
/* 801028A0 000FF7E0  E3 E1 01 48 */	psq_l f31, 328(r1), 0, qr0
/* 801028A4 000FF7E4  CB E1 01 40 */	lfd f31, 0x140(r1)
/* 801028A8 000FF7E8  E3 C1 01 38 */	psq_l f30, 312(r1), 0, qr0
/* 801028AC 000FF7EC  CB C1 01 30 */	lfd f30, 0x130(r1)
/* 801028B0 000FF7F0  E3 A1 01 28 */	psq_l f29, 296(r1), 0, qr0
/* 801028B4 000FF7F4  CB A1 01 20 */	lfd f29, 0x120(r1)
/* 801028B8 000FF7F8  E3 81 01 18 */	psq_l f28, 280(r1), 0, qr0
/* 801028BC 000FF7FC  CB 81 01 10 */	lfd f28, 0x110(r1)
/* 801028C0 000FF800  BB 21 00 F4 */	lmw r25, 0xf4(r1)
/* 801028C4 000FF804  80 01 01 54 */	lwz r0, 0x154(r1)
/* 801028C8 000FF808  7C 08 03 A6 */	mtlr r0
/* 801028CC 000FF80C  38 21 01 50 */	addi r1, r1, 0x150
/* 801028D0 000FF810  4E 80 00 20 */	blr 

.global "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
"setVelocity__Q24Game8BaseItemFR10Vector3<f>":
/* 801028D4 000FF814  C0 04 00 00 */	lfs f0, 0(r4)
/* 801028D8 000FF818  D0 03 01 90 */	stfs f0, 0x190(r3)
/* 801028DC 000FF81C  C0 04 00 04 */	lfs f0, 4(r4)
/* 801028E0 000FF820  D0 03 01 94 */	stfs f0, 0x194(r3)
/* 801028E4 000FF824  C0 04 00 08 */	lfs f0, 8(r4)
/* 801028E8 000FF828  D0 03 01 98 */	stfs f0, 0x198(r3)
/* 801028EC 000FF82C  4E 80 00 20 */	blr 

.global getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere:
/* 801028F0 000FF830  C0 03 02 20 */	lfs f0, 0x220(r3)
/* 801028F4 000FF834  D0 04 00 00 */	stfs f0, 0(r4)
/* 801028F8 000FF838  C0 03 02 24 */	lfs f0, 0x224(r3)
/* 801028FC 000FF83C  D0 04 00 04 */	stfs f0, 4(r4)
/* 80102900 000FF840  C0 03 02 28 */	lfs f0, 0x228(r3)
/* 80102904 000FF844  D0 04 00 08 */	stfs f0, 8(r4)
/* 80102908 000FF848  C0 03 02 2C */	lfs f0, 0x22c(r3)
/* 8010290C 000FF84C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80102910 000FF850  4E 80 00 20 */	blr 

.global getName__Q24Game15CreatureKillArgFv
getName__Q24Game15CreatureKillArgFv:
/* 80102914 000FF854  3C 60 80 48 */	lis r3, lbl_8047A5FC@ha
/* 80102918 000FF858  38 63 A5 FC */	addi r3, r3, lbl_8047A5FC@l
/* 8010291C 000FF85C  4E 80 00 20 */	blr 

.global setZukanVisible__Q24Game9EnemyBaseFb
setZukanVisible__Q24Game9EnemyBaseFb:
/* 80102920 000FF860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102924 000FF864  7C 08 02 A6 */	mflr r0
/* 80102928 000FF868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010292C 000FF86C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80102930 000FF870  7C 7F 1B 78 */	mr r31, r3
/* 80102934 000FF874  93 C1 00 08 */	stw r30, 8(r1)
/* 80102938 000FF878  7C 9E 23 78 */	mr r30, r4
/* 8010293C 000FF87C  88 03 01 F3 */	lbz r0, 0x1f3(r3)
/* 80102940 000FF880  28 00 00 00 */	cmplwi r0, 0
/* 80102944 000FF884  41 82 00 A4 */	beq .L_801029E8
/* 80102948 000FF888  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8010294C 000FF88C  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80102950 000FF890  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80102954 000FF894  40 82 00 94 */	bne .L_801029E8
/* 80102958 000FF898  81 83 00 00 */	lwz r12, 0(r3)
/* 8010295C 000FF89C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80102960 000FF8A0  7D 89 03 A6 */	mtctr r12
/* 80102964 000FF8A4  4E 80 04 21 */	bctrl 
/* 80102968 000FF8A8  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8010296C 000FF8AC  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 80102970 000FF8B0  48 02 09 09 */	bl getEnemyInfo__Q24Game13EnemyInfoFuncFii
/* 80102974 000FF8B4  A0 03 00 08 */	lhz r0, 8(r3)
/* 80102978 000FF8B8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8010297C 000FF8BC  40 82 00 6C */	bne .L_801029E8
/* 80102980 000FF8C0  7F E3 FB 78 */	mr r3, r31
/* 80102984 000FF8C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80102988 000FF8C8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8010298C 000FF8CC  7D 89 03 A6 */	mtctr r12
/* 80102990 000FF8D0  4E 80 04 21 */	bctrl 
/* 80102994 000FF8D4  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80102998 000FF8D8  7C 64 1B 78 */	mr r4, r3
/* 8010299C 000FF8DC  38 65 00 40 */	addi r3, r5, 0x40
/* 801029A0 000FF8E0  48 13 11 25 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 801029A4 000FF8E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 801029A8 000FF8E8  40 82 00 20 */	bne .L_801029C8
/* 801029AC 000FF8EC  3C 60 80 48 */	lis r3, lbl_8047A544@ha
/* 801029B0 000FF8F0  3C A0 80 48 */	lis r5, lbl_8047A554@ha
/* 801029B4 000FF8F4  38 63 A5 44 */	addi r3, r3, lbl_8047A544@l
/* 801029B8 000FF8F8  38 80 07 43 */	li r4, 0x743
/* 801029BC 000FF8FC  38 A5 A5 54 */	addi r5, r5, lbl_8047A554@l
/* 801029C0 000FF900  4C C6 31 82 */	crclr 6
/* 801029C4 000FF904  4B F2 7C 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801029C8:
/* 801029C8 000FF908  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801029CC 000FF90C  41 82 00 10 */	beq .L_801029DC
/* 801029D0 000FF910  7F E3 FB 78 */	mr r3, r31
/* 801029D4 000FF914  48 13 0E 49 */	bl incKilled__Q34Game8TekiStat4InfoFv
/* 801029D8 000FF918  48 00 00 10 */	b .L_801029E8
.L_801029DC:
/* 801029DC 000FF91C  88 1F 00 08 */	lbz r0, 8(r31)
/* 801029E0 000FF920  60 00 00 01 */	ori r0, r0, 1
/* 801029E4 000FF924  98 1F 00 08 */	stb r0, 8(r31)
.L_801029E8:
/* 801029E8 000FF928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801029EC 000FF92C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801029F0 000FF930  83 C1 00 08 */	lwz r30, 8(r1)
/* 801029F4 000FF934  7C 08 03 A6 */	mtlr r0
/* 801029F8 000FF938  38 21 00 10 */	addi r1, r1, 0x10
/* 801029FC 000FF93C  4E 80 00 20 */	blr 

.global "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
"birth__Q24Game9EnemyBaseFR10Vector3<f>f":
/* 80102A00 000FF940  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80102A04 000FF944  7C 08 02 A6 */	mflr r0
/* 80102A08 000FF948  90 01 00 24 */	stw r0, 0x24(r1)
/* 80102A0C 000FF94C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80102A10 000FF950  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80102A14 000FF954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80102A18 000FF958  93 C1 00 08 */	stw r30, 8(r1)
/* 80102A1C 000FF95C  7C 7E 1B 78 */	mr r30, r3
/* 80102A20 000FF960  FF E0 08 90 */	fmr f31, f1
/* 80102A24 000FF964  80 C3 01 E0 */	lwz r6, 0x1e0(r3)
/* 80102A28 000FF968  38 00 00 01 */	li r0, 1
/* 80102A2C 000FF96C  7C 9F 23 78 */	mr r31, r4
/* 80102A30 000FF970  38 A0 00 00 */	li r5, 0
/* 80102A34 000FF974  64 C6 10 00 */	oris r6, r6, 0x1000
/* 80102A38 000FF978  90 C3 01 E0 */	stw r6, 0x1e0(r3)
/* 80102A3C 000FF97C  98 03 01 F3 */	stb r0, 0x1f3(r3)
/* 80102A40 000FF980  48 03 87 69 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80102A44 000FF984  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80102A48 000FF988  38 00 00 00 */	li r0, 0
/* 80102A4C 000FF98C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80102A50 000FF990  D0 3E 01 98 */	stfs f1, 0x198(r30)
/* 80102A54 000FF994  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80102A58 000FF998  D0 3E 01 9C */	stfs f1, 0x19c(r30)
/* 80102A5C 000FF99C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80102A60 000FF9A0  D0 3E 01 A0 */	stfs f1, 0x1a0(r30)
/* 80102A64 000FF9A4  D0 1E 01 A4 */	stfs f0, 0x1a4(r30)
/* 80102A68 000FF9A8  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 80102A6C 000FF9AC  D0 1E 01 AC */	stfs f0, 0x1ac(r30)
/* 80102A70 000FF9B0  D0 1E 01 C8 */	stfs f0, 0x1c8(r30)
/* 80102A74 000FF9B4  D0 1E 01 CC */	stfs f0, 0x1cc(r30)
/* 80102A78 000FF9B8  D0 1E 01 D0 */	stfs f0, 0x1d0(r30)
/* 80102A7C 000FF9BC  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 80102A80 000FF9C0  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 80102A84 000FF9C4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 80102A88 000FF9C8  90 1E 02 30 */	stw r0, 0x230(r30)
/* 80102A8C 000FF9CC  D3 FE 01 FC */	stfs f31, 0x1fc(r30)
/* 80102A90 000FF9D0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 80102A94 000FF9D4  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 80102A98 000FF9D8  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80102A9C 000FF9DC  90 1E 01 F4 */	stw r0, 0x1f4(r30)
/* 80102AA0 000FF9E0  90 1E 02 54 */	stw r0, 0x254(r30)
/* 80102AA4 000FF9E4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80102AA8 000FF9E8  80 63 00 08 */	lwz r3, 8(r3)
/* 80102AAC 000FF9EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80102AB0 000FF9F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80102AB4 000FF9F4  7D 89 03 A6 */	mtctr r12
/* 80102AB8 000FF9F8  4E 80 04 21 */	bctrl 
/* 80102ABC 000FF9FC  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80102AC0 000FFA00  48 03 2F DD */	bl update__8CollTreeFv
/* 80102AC4 000FFA04  7F C3 F3 78 */	mr r3, r30
/* 80102AC8 000FFA08  48 00 0E 09 */	bl updateSpheres__Q24Game9EnemyBaseFv
/* 80102ACC 000FFA0C  7F C3 F3 78 */	mr r3, r30
/* 80102AD0 000FFA10  48 00 3B BD */	bl resetCollEvent__Q24Game9EnemyBaseFv
/* 80102AD4 000FFA14  38 00 00 FF */	li r0, 0xff
/* 80102AD8 000FFA18  7F C3 F3 78 */	mr r3, r30
/* 80102ADC 000FFA1C  98 1E 01 F2 */	stb r0, 0x1f2(r30)
/* 80102AE0 000FFA20  81 9E 00 00 */	lwz r12, 0(r30)
/* 80102AE4 000FFA24  81 8C 02 28 */	lwz r12, 0x228(r12)
/* 80102AE8 000FFA28  7D 89 03 A6 */	mtctr r12
/* 80102AEC 000FFA2C  4E 80 04 21 */	bctrl 
/* 80102AF0 000FFA30  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80102AF4 000FFA34  7F C4 F3 78 */	mr r4, r30
/* 80102AF8 000FFA38  48 13 F1 B5 */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 80102AFC 000FFA3C  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 80102B00 000FFA40  28 03 00 00 */	cmplwi r3, 0
/* 80102B04 000FFA44  41 82 00 10 */	beq .L_80102B14
/* 80102B08 000FFA48  C0 22 94 64 */	lfs f1, lbl_805177C4@sda21(r2)
/* 80102B0C 000FFA4C  7F C4 F3 78 */	mr r4, r30
/* 80102B10 000FFA50  48 01 7F 85 */	bl activeLifeGauge__12LifeGaugeMgrFPQ24Game8Creaturef
.L_80102B14:
/* 80102B14 000FFA54  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80102B18 000FFA58  81 83 00 00 */	lwz r12, 0(r3)
/* 80102B1C 000FFA5C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80102B20 000FFA60  7D 89 03 A6 */	mtctr r12
/* 80102B24 000FFA64  4E 80 04 21 */	bctrl 
/* 80102B28 000FFA68  38 00 00 01 */	li r0, 1
/* 80102B2C 000FFA6C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80102B30 000FFA70  98 1E 01 F0 */	stb r0, 0x1f0(r30)
/* 80102B34 000FFA74  D0 1E 02 AC */	stfs f0, 0x2ac(r30)
/* 80102B38 000FFA78  D0 1E 02 A8 */	stfs f0, 0x2a8(r30)
/* 80102B3C 000FFA7C  D0 1E 02 14 */	stfs f0, 0x214(r30)
/* 80102B40 000FFA80  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80102B44 000FFA84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80102B48 000FFA88  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80102B4C 000FFA8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80102B50 000FFA90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80102B54 000FFA94  7C 08 03 A6 */	mtlr r0
/* 80102B58 000FFA98  38 21 00 20 */	addi r1, r1, 0x20
/* 80102B5C 000FFA9C  4E 80 00 20 */	blr 

.global updateTrMatrix__Q24Game9EnemyBaseFv
updateTrMatrix__Q24Game9EnemyBaseFv:
/* 80102B60 000FFAA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80102B64 000FFAA4  7C 08 02 A6 */	mflr r0
/* 80102B68 000FFAA8  7C 66 1B 78 */	mr r6, r3
/* 80102B6C 000FFAAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80102B70 000FFAB0  38 A1 00 08 */	addi r5, r1, 8
/* 80102B74 000FFAB4  38 86 01 8C */	addi r4, r6, 0x18c
/* 80102B78 000FFAB8  C0 63 01 AC */	lfs f3, 0x1ac(r3)
/* 80102B7C 000FFABC  38 66 01 38 */	addi r3, r6, 0x138
/* 80102B80 000FFAC0  C0 46 01 B8 */	lfs f2, 0x1b8(r6)
/* 80102B84 000FFAC4  C0 26 01 A8 */	lfs f1, 0x1a8(r6)
/* 80102B88 000FFAC8  EC A3 10 2A */	fadds f5, f3, f2
/* 80102B8C 000FFACC  C0 06 01 B4 */	lfs f0, 0x1b4(r6)
/* 80102B90 000FFAD0  C0 66 01 C4 */	lfs f3, 0x1c4(r6)
/* 80102B94 000FFAD4  EC 81 00 2A */	fadds f4, f1, f0
/* 80102B98 000FFAD8  C0 46 01 A4 */	lfs f2, 0x1a4(r6)
/* 80102B9C 000FFADC  C0 26 01 B0 */	lfs f1, 0x1b0(r6)
/* 80102BA0 000FFAE0  EC A5 18 2A */	fadds f5, f5, f3
/* 80102BA4 000FFAE4  C0 66 01 C0 */	lfs f3, 0x1c0(r6)
/* 80102BA8 000FFAE8  EC 22 08 2A */	fadds f1, f2, f1
/* 80102BAC 000FFAEC  C0 06 01 BC */	lfs f0, 0x1bc(r6)
/* 80102BB0 000FFAF0  EC 44 18 2A */	fadds f2, f4, f3
/* 80102BB4 000FFAF4  EC 01 00 2A */	fadds f0, f1, f0
/* 80102BB8 000FFAF8  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 80102BBC 000FFAFC  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80102BC0 000FFB00  D0 01 00 08 */	stfs f0, 8(r1)
/* 80102BC4 000FFB04  48 32 5C C5 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 80102BC8 000FFB08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80102BCC 000FFB0C  7C 08 03 A6 */	mtlr r0
/* 80102BD0 000FFB10  38 21 00 20 */	addi r1, r1, 0x20
/* 80102BD4 000FFB14  4E 80 00 20 */	blr 

.global setParameters__Q24Game9EnemyBaseFv
setParameters__Q24Game9EnemyBaseFv:
/* 80102BD8 000FFB18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80102BDC 000FFB1C  7C 08 02 A6 */	mflr r0
/* 80102BE0 000FFB20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80102BE4 000FFB24  38 81 00 08 */	addi r4, r1, 8
/* 80102BE8 000FFB28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80102BEC 000FFB2C  7C 7F 1B 78 */	mr r31, r3
/* 80102BF0 000FFB30  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80102BF4 000FFB34  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 80102BF8 000FFB38  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80102BFC 000FFB3C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80102C00 000FFB40  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 80102C04 000FFB44  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80102C08 000FFB48  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80102C0C 000FFB4C  C0 03 02 BC */	lfs f0, 0x2bc(r3)
/* 80102C10 000FFB50  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 80102C14 000FFB54  C0 1F 01 18 */	lfs f0, 0x118(r31)
/* 80102C18 000FFB58  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 80102C1C 000FFB5C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80102C20 000FFB60  80 63 00 00 */	lwz r3, 0(r3)
/* 80102C24 000FFB64  48 03 55 D9 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80102C28 000FFB68  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80102C2C 000FFB6C  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 80102C30 000FFB70  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80102C34 000FFB74  C0 03 02 1C */	lfs f0, 0x21c(r3)
/* 80102C38 000FFB78  D0 1F 02 7C */	stfs f0, 0x27c(r31)
/* 80102C3C 000FFB7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80102C40 000FFB80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80102C44 000FFB84  7C 08 03 A6 */	mtlr r0
/* 80102C48 000FFB88  38 21 00 20 */	addi r1, r1, 0x20
/* 80102C4C 000FFB8C  4E 80 00 20 */	blr 

.global update__Q24Game9EnemyBaseFv
update__Q24Game9EnemyBaseFv:
/* 80102C50 000FFB90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102C54 000FFB94  7C 08 02 A6 */	mflr r0
/* 80102C58 000FFB98  7C 64 1B 78 */	mr r4, r3
/* 80102C5C 000FFB9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80102C60 000FFBA0  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80102C64 000FFBA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80102C68 000FFBA8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80102C6C 000FFBAC  7D 89 03 A6 */	mtctr r12
/* 80102C70 000FFBB0  4E 80 04 21 */	bctrl 
/* 80102C74 000FFBB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80102C78 000FFBB8  7C 08 03 A6 */	mtlr r0
/* 80102C7C 000FFBBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80102C80 000FFBC0  4E 80 00 20 */	blr 

.global isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv:
/* 80102C84 000FFBC4  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80102C88 000FFBC8  7C 08 02 A6 */	mflr r0
/* 80102C8C 000FFBCC  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80102C90 000FFBD0  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80102C94 000FFBD4  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 80102C98 000FFBD8  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 80102C9C 000FFBDC  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 80102CA0 000FFBE0  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80102CA4 000FFBE4  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 80102CA8 000FFBE8  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80102CAC 000FFBEC  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 80102CB0 000FFBF0  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80102CB4 000FFBF4  7C 7D 1B 78 */	mr r29, r3
/* 80102CB8 000FFBF8  38 61 00 48 */	addi r3, r1, 0x48
/* 80102CBC 000FFBFC  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 80102CC0 000FFC00  38 81 00 38 */	addi r4, r1, 0x38
/* 80102CC4 000FFC04  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 80102CC8 000FFC08  3B E0 00 00 */	li r31, 0
/* 80102CCC 000FFC0C  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 80102CD0 000FFC10  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80102CD4 000FFC14  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 80102CD8 000FFC18  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80102CDC 000FFC1C  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 80102CE0 000FFC20  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80102CE4 000FFC24  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80102CE8 000FFC28  48 12 B6 B9 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80102CEC 000FFC2C  38 61 00 68 */	addi r3, r1, 0x68
/* 80102CF0 000FFC30  38 81 00 48 */	addi r4, r1, 0x48
/* 80102CF4 000FFC34  48 12 B6 ED */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80102CF8 000FFC38  38 61 00 68 */	addi r3, r1, 0x68
/* 80102CFC 000FFC3C  48 12 B7 61 */	bl first__Q24Game12CellIteratorFv
/* 80102D00 000FFC40  48 00 01 1C */	b .L_80102E1C
.L_80102D04:
/* 80102D04 000FFC44  38 61 00 68 */	addi r3, r1, 0x68
/* 80102D08 000FFC48  48 12 B8 3D */	bl __ml__Q24Game12CellIteratorFv
/* 80102D0C 000FFC4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80102D10 000FFC50  7C 7E 1B 78 */	mr r30, r3
/* 80102D14 000FFC54  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80102D18 000FFC58  7D 89 03 A6 */	mtctr r12
/* 80102D1C 000FFC5C  4E 80 04 21 */	bctrl 
/* 80102D20 000FFC60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102D24 000FFC64  41 82 00 F0 */	beq .L_80102E14
/* 80102D28 000FFC68  7F C3 F3 78 */	mr r3, r30
/* 80102D2C 000FFC6C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80102D30 000FFC70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80102D34 000FFC74  7D 89 03 A6 */	mtctr r12
/* 80102D38 000FFC78  4E 80 04 21 */	bctrl 
/* 80102D3C 000FFC7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102D40 000FFC80  40 82 00 3C */	bne .L_80102D7C
/* 80102D44 000FFC84  7F C3 F3 78 */	mr r3, r30
/* 80102D48 000FFC88  81 9E 00 00 */	lwz r12, 0(r30)
/* 80102D4C 000FFC8C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80102D50 000FFC90  7D 89 03 A6 */	mtctr r12
/* 80102D54 000FFC94  4E 80 04 21 */	bctrl 
/* 80102D58 000FFC98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102D5C 000FFC9C  41 82 00 B8 */	beq .L_80102E14
/* 80102D60 000FFCA0  7F C3 F3 78 */	mr r3, r30
/* 80102D64 000FFCA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80102D68 000FFCA8  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80102D6C 000FFCAC  7D 89 03 A6 */	mtctr r12
/* 80102D70 000FFCB0  4E 80 04 21 */	bctrl 
/* 80102D74 000FFCB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102D78 000FFCB8  41 82 00 9C */	beq .L_80102E14
.L_80102D7C:
/* 80102D7C 000FFCBC  7F C4 F3 78 */	mr r4, r30
/* 80102D80 000FFCC0  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 80102D84 000FFCC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80102D88 000FFCC8  38 61 00 14 */	addi r3, r1, 0x14
/* 80102D8C 000FFCCC  C3 A5 03 AC */	lfs f29, 0x3ac(r5)
/* 80102D90 000FFCD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80102D94 000FFCD4  7D 89 03 A6 */	mtctr r12
/* 80102D98 000FFCD8  4E 80 04 21 */	bctrl 
/* 80102D9C 000FFCDC  7F A4 EB 78 */	mr r4, r29
/* 80102DA0 000FFCE0  38 61 00 08 */	addi r3, r1, 8
/* 80102DA4 000FFCE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80102DA8 000FFCE8  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80102DAC 000FFCEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80102DB0 000FFCF0  7D 89 03 A6 */	mtctr r12
/* 80102DB4 000FFCF4  4E 80 04 21 */	bctrl 
/* 80102DB8 000FFCF8  7F C4 F3 78 */	mr r4, r30
/* 80102DBC 000FFCFC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80102DC0 000FFD00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80102DC4 000FFD04  38 61 00 2C */	addi r3, r1, 0x2c
/* 80102DC8 000FFD08  EF C0 F8 28 */	fsubs f30, f0, f31
/* 80102DCC 000FFD0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80102DD0 000FFD10  7D 89 03 A6 */	mtctr r12
/* 80102DD4 000FFD14  4E 80 04 21 */	bctrl 
/* 80102DD8 000FFD18  7F A4 EB 78 */	mr r4, r29
/* 80102DDC 000FFD1C  38 61 00 20 */	addi r3, r1, 0x20
/* 80102DE0 000FFD20  81 9D 00 00 */	lwz r12, 0(r29)
/* 80102DE4 000FFD24  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 80102DE8 000FFD28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80102DEC 000FFD2C  7D 89 03 A6 */	mtctr r12
/* 80102DF0 000FFD30  4E 80 04 21 */	bctrl 
/* 80102DF4 000FFD34  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80102DF8 000FFD38  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80102DFC 000FFD3C  EC 21 F8 28 */	fsubs f1, f1, f31
/* 80102E00 000FFD40  EC 21 00 72 */	fmuls f1, f1, f1
/* 80102E04 000FFD44  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 80102E08 000FFD48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80102E0C 000FFD4C  40 80 00 08 */	bge .L_80102E14
/* 80102E10 000FFD50  3B E0 00 01 */	li r31, 1
.L_80102E14:
/* 80102E14 000FFD54  38 61 00 68 */	addi r3, r1, 0x68
/* 80102E18 000FFD58  48 12 B6 E9 */	bl next__Q24Game12CellIteratorFv
.L_80102E1C:
/* 80102E1C 000FFD5C  38 61 00 68 */	addi r3, r1, 0x68
/* 80102E20 000FFD60  48 12 B7 15 */	bl isDone__Q24Game12CellIteratorFv
/* 80102E24 000FFD64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102E28 000FFD68  41 82 FE DC */	beq .L_80102D04
/* 80102E2C 000FFD6C  7F E3 FB 78 */	mr r3, r31
/* 80102E30 000FFD70  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80102E34 000FFD74  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80102E38 000FFD78  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 80102E3C 000FFD7C  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80102E40 000FFD80  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 80102E44 000FFD84  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80102E48 000FFD88  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 80102E4C 000FFD8C  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 80102E50 000FFD90  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80102E54 000FFD94  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 80102E58 000FFD98  7C 08 03 A6 */	mtlr r0
/* 80102E5C 000FFD9C  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80102E60 000FFDA0  4E 80 00 20 */	blr 

.global startStoneState__Q24Game9EnemyBaseFv
startStoneState__Q24Game9EnemyBaseFv:
/* 80102E64 000FFDA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102E68 000FFDA8  7C 08 02 A6 */	mflr r0
/* 80102E6C 000FFDAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80102E70 000FFDB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80102E74 000FFDB4  7C 7F 1B 78 */	mr r31, r3
/* 80102E78 000FFDB8  80 63 01 E0 */	lwz r3, 0x1e0(r3)
/* 80102E7C 000FFDBC  54 60 02 53 */	rlwinm. r0, r3, 0, 9, 9
/* 80102E80 000FFDC0  40 82 00 60 */	bne .L_80102EE0
/* 80102E84 000FFDC4  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80102E88 000FFDC8  40 82 00 58 */	bne .L_80102EE0
/* 80102E8C 000FFDCC  54 60 02 95 */	rlwinm. r0, r3, 0, 0xa, 0xa
/* 80102E90 000FFDD0  41 82 00 10 */	beq .L_80102EA0
/* 80102E94 000FFDD4  64 60 00 10 */	oris r0, r3, 0x10
/* 80102E98 000FFDD8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80102E9C 000FFDDC  48 00 00 44 */	b .L_80102EE0
.L_80102EA0:
/* 80102EA0 000FFDE0  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80102EA4 000FFDE4  48 02 6D 35 */	bl start__Q34Game10EnemyStone3ObjFv
/* 80102EA8 000FFDE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102EAC 000FFDEC  41 82 00 28 */	beq .L_80102ED4
/* 80102EB0 000FFDF0  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80102EB4 000FFDF4  7F E4 FB 78 */	mr r4, r31
/* 80102EB8 000FFDF8  38 A0 00 07 */	li r5, 7
/* 80102EBC 000FFDFC  38 C0 00 00 */	li r6, 0
/* 80102EC0 000FFE00  81 83 00 00 */	lwz r12, 0(r3)
/* 80102EC4 000FFE04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80102EC8 000FFE08  7D 89 03 A6 */	mtctr r12
/* 80102ECC 000FFE0C  4E 80 04 21 */	bctrl 
/* 80102ED0 000FFE10  48 00 00 10 */	b .L_80102EE0
.L_80102ED4:
/* 80102ED4 000FFE14  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80102ED8 000FFE18  64 00 00 10 */	oris r0, r0, 0x10
/* 80102EDC 000FFE1C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80102EE0:
/* 80102EE0 000FFE20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80102EE4 000FFE24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80102EE8 000FFE28  7C 08 03 A6 */	mtlr r0
/* 80102EEC 000FFE2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80102EF0 000FFE30  4E 80 00 20 */	blr 

.global doStartStoneState__Q24Game9EnemyBaseFv
doStartStoneState__Q24Game9EnemyBaseFv:
/* 80102EF4 000FFE34  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80102EF8 000FFE38  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80102EFC 000FFE3C  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80102F00 000FFE40  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80102F04 000FFE44  4E 80 00 20 */	blr 

.global doFinishStoneState__Q24Game9EnemyBaseFv
doFinishStoneState__Q24Game9EnemyBaseFv:
/* 80102F08 000FFE48  4E 80 00 20 */	blr 

.global getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv:
/* 80102F0C 000FFE4C  38 60 00 00 */	li r3, 0
/* 80102F10 000FFE50  4E 80 00 20 */	blr 

.global doUpdateCommon__Q24Game9EnemyBaseFv
doUpdateCommon__Q24Game9EnemyBaseFv:
/* 80102F14 000FFE54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102F18 000FFE58  7C 08 02 A6 */	mflr r0
/* 80102F1C 000FFE5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80102F20 000FFE60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80102F24 000FFE64  7C 7F 1B 78 */	mr r31, r3
/* 80102F28 000FFE68  48 00 24 99 */	bl scaleDamageAnim__Q24Game9EnemyBaseFv
/* 80102F2C 000FFE6C  7F E3 FB 78 */	mr r3, r31
/* 80102F30 000FFE70  48 00 37 5D */	bl resetCollEvent__Q24Game9EnemyBaseFv
/* 80102F34 000FFE74  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 80102F38 000FFE78  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80102F3C 000FFE7C  41 82 00 44 */	beq .L_80102F80
/* 80102F40 000FFE80  7F E3 FB 78 */	mr r3, r31
/* 80102F44 000FFE84  81 9F 00 00 */	lwz r12, 0(r31)
/* 80102F48 000FFE88  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80102F4C 000FFE8C  7D 89 03 A6 */	mtctr r12
/* 80102F50 000FFE90  4E 80 04 21 */	bctrl 
/* 80102F54 000FFE94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80102F58 000FFE98  41 82 00 28 */	beq .L_80102F80
/* 80102F5C 000FFE9C  7F E3 FB 78 */	mr r3, r31
/* 80102F60 000FFEA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80102F64 000FFEA4  81 8C 02 34 */	lwz r12, 0x234(r12)
/* 80102F68 000FFEA8  7D 89 03 A6 */	mtctr r12
/* 80102F6C 000FFEAC  4E 80 04 21 */	bctrl 
/* 80102F70 000FFEB0  28 03 00 00 */	cmplwi r3, 0
/* 80102F74 000FFEB4  41 82 00 0C */	beq .L_80102F80
/* 80102F78 000FFEB8  7F E4 FB 78 */	mr r4, r31
/* 80102F7C 000FFEBC  48 02 74 9D */	bl update__Q34Game15WalkSmokeEffect3MgrFPQ24Game9EnemyBase
.L_80102F80:
/* 80102F80 000FFEC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80102F84 000FFEC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80102F88 000FFEC8  7C 08 03 A6 */	mtlr r0
/* 80102F8C 000FFECC  38 21 00 10 */	addi r1, r1, 0x10
/* 80102F90 000FFED0  4E 80 00 20 */	blr 

.global doAnimation__Q24Game9EnemyBaseFv
doAnimation__Q24Game9EnemyBaseFv:
/* 80102F94 000FFED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102F98 000FFED8  7C 08 02 A6 */	mflr r0
/* 80102F9C 000FFEDC  7C 64 1B 78 */	mr r4, r3
/* 80102FA0 000FFEE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80102FA4 000FFEE4  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80102FA8 000FFEE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80102FAC 000FFEEC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80102FB0 000FFEF0  7D 89 03 A6 */	mtctr r12
/* 80102FB4 000FFEF4  4E 80 04 21 */	bctrl 
/* 80102FB8 000FFEF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80102FBC 000FFEFC  7C 08 03 A6 */	mtlr r0
/* 80102FC0 000FFF00  38 21 00 10 */	addi r1, r1, 0x10
/* 80102FC4 000FFF04  4E 80 00 20 */	blr 

.global animation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
animation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase:
/* 80102FC8 000FFF08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102FCC 000FFF0C  7C 08 02 A6 */	mflr r0
/* 80102FD0 000FFF10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80102FD4 000FFF14  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80102FD8 000FFF18  81 83 00 00 */	lwz r12, 0(r3)
/* 80102FDC 000FFF1C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80102FE0 000FFF20  7D 89 03 A6 */	mtctr r12
/* 80102FE4 000FFF24  4E 80 04 21 */	bctrl 
/* 80102FE8 000FFF28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80102FEC 000FFF2C  7C 08 03 A6 */	mtlr r0
/* 80102FF0 000FFF30  38 21 00 10 */	addi r1, r1, 0x10
/* 80102FF4 000FFF34  4E 80 00 20 */	blr 

.global doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
doAnimationUpdateAnimator__Q24Game9EnemyBaseFv:
/* 80102FF8 000FFF38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80102FFC 000FFF3C  7C 08 02 A6 */	mflr r0
/* 80103000 000FFF40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80103004 000FFF44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80103008 000FFF48  7C 7F 1B 78 */	mr r31, r3
/* 8010300C 000FFF4C  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80103010 000FFF50  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80103014 000FFF54  81 83 00 00 */	lwz r12, 0(r3)
/* 80103018 000FFF58  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8010301C 000FFF5C  C0 23 00 04 */	lfs f1, 4(r3)
/* 80103020 000FFF60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80103024 000FFF64  EC 21 00 32 */	fmuls f1, f1, f0
/* 80103028 000FFF68  7D 89 03 A6 */	mtctr r12
/* 8010302C 000FFF6C  4E 80 04 21 */	bctrl 
/* 80103030 000FFF70  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80103034 000FFF74  81 83 00 00 */	lwz r12, 0(r3)
/* 80103038 000FFF78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8010303C 000FFF7C  7D 89 03 A6 */	mtctr r12
/* 80103040 000FFF80  4E 80 04 21 */	bctrl 
/* 80103044 000FFF84  81 83 00 00 */	lwz r12, 0(r3)
/* 80103048 000FFF88  83 FF 01 74 */	lwz r31, 0x174(r31)
/* 8010304C 000FFF8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80103050 000FFF90  7D 89 03 A6 */	mtctr r12
/* 80103054 000FFF94  4E 80 04 21 */	bctrl 
/* 80103058 000FFF98  80 9F 00 08 */	lwz r4, 8(r31)
/* 8010305C 000FFF9C  80 84 00 04 */	lwz r4, 4(r4)
/* 80103060 000FFFA0  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80103064 000FFFA4  80 84 00 00 */	lwz r4, 0(r4)
/* 80103068 000FFFA8  90 64 00 54 */	stw r3, 0x54(r4)
/* 8010306C 000FFFAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80103070 000FFFB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80103074 000FFFB4  7C 08 03 A6 */	mtlr r0
/* 80103078 000FFFB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010307C 000FFFBC  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q24Game9EnemyBaseFv
doAnimationCullingOff__Q24Game9EnemyBaseFv:
/* 80103080 000FFFC0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80103084 000FFFC4  7C 08 02 A6 */	mflr r0
/* 80103088 000FFFC8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8010308C 000FFFCC  38 00 00 00 */	li r0, 0
/* 80103090 000FFFD0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80103094 000FFFD4  7C 7F 1B 78 */	mr r31, r3
/* 80103098 000FFFD8  80 83 01 88 */	lwz r4, 0x188(r3)
/* 8010309C 000FFFDC  98 04 00 24 */	stb r0, 0x24(r4)
/* 801030A0 000FFFE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801030A4 000FFFE4  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 801030A8 000FFFE8  7D 89 03 A6 */	mtctr r12
/* 801030AC 000FFFEC  4E 80 04 21 */	bctrl 
/* 801030B0 000FFFF0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801030B4 000FFFF4  80 03 00 04 */	lwz r0, 4(r3)
/* 801030B8 000FFFF8  28 00 00 00 */	cmplwi r0, 0
/* 801030BC 000FFFFC  41 82 00 7C */	beq .L_80103138
/* 801030C0 00100000  38 9F 01 38 */	addi r4, r31, 0x138
/* 801030C4 00100004  48 06 2C DD */	bl viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
/* 801030C8 00100008  C0 3F 01 68 */	lfs f1, 0x168(r31)
/* 801030CC 0010000C  38 61 00 20 */	addi r3, r1, 0x20
/* 801030D0 00100010  C0 5F 01 6C */	lfs f2, 0x16c(r31)
/* 801030D4 00100014  C0 7F 01 70 */	lfs f3, 0x170(r31)
/* 801030D8 00100018  4B FE 76 FD */	bl PSMTXScale
/* 801030DC 0010001C  38 7F 01 38 */	addi r3, r31, 0x138
/* 801030E0 00100020  38 81 00 20 */	addi r4, r1, 0x20
/* 801030E4 00100024  7C 65 1B 78 */	mr r5, r3
/* 801030E8 00100028  4B FE 72 19 */	bl PSMTXConcat
/* 801030EC 0010002C  C0 1F 01 44 */	lfs f0, 0x144(r31)
/* 801030F0 00100030  7F E3 FB 78 */	mr r3, r31
/* 801030F4 00100034  38 81 00 14 */	addi r4, r1, 0x14
/* 801030F8 00100038  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801030FC 0010003C  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 80103100 00100040  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80103104 00100044  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 80103108 00100048  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8010310C 0010004C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80103110 00100050  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80103114 00100054  7D 89 03 A6 */	mtctr r12
/* 80103118 00100058  4E 80 04 21 */	bctrl 
/* 8010311C 0010005C  7F E3 FB 78 */	mr r3, r31
/* 80103120 00100060  38 81 00 14 */	addi r4, r1, 0x14
/* 80103124 00100064  81 9F 00 00 */	lwz r12, 0(r31)
/* 80103128 00100068  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8010312C 0010006C  7D 89 03 A6 */	mtctr r12
/* 80103130 00100070  4E 80 04 21 */	bctrl 
/* 80103134 00100074  48 00 00 88 */	b .L_801031BC
.L_80103138:
/* 80103138 00100078  7F E3 FB 78 */	mr r3, r31
/* 8010313C 0010007C  48 09 C4 39 */	bl isStickTo__Q24Game8CreatureFv
/* 80103140 00100080  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80103144 00100084  41 82 00 1C */	beq .L_80103160
/* 80103148 00100088  7F E3 FB 78 */	mr r3, r31
/* 8010314C 0010008C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80103150 00100090  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 80103154 00100094  7D 89 03 A6 */	mtctr r12
/* 80103158 00100098  4E 80 04 21 */	bctrl 
/* 8010315C 0010009C  48 00 00 60 */	b .L_801031BC
.L_80103160:
/* 80103160 001000A0  C0 7F 01 AC */	lfs f3, 0x1ac(r31)
/* 80103164 001000A4  38 7F 01 38 */	addi r3, r31, 0x138
/* 80103168 001000A8  C0 5F 01 B8 */	lfs f2, 0x1b8(r31)
/* 8010316C 001000AC  38 9F 01 68 */	addi r4, r31, 0x168
/* 80103170 001000B0  C0 3F 01 A8 */	lfs f1, 0x1a8(r31)
/* 80103174 001000B4  38 A1 00 08 */	addi r5, r1, 8
/* 80103178 001000B8  C0 1F 01 B4 */	lfs f0, 0x1b4(r31)
/* 8010317C 001000BC  EC C3 10 2A */	fadds f6, f3, f2
/* 80103180 001000C0  C0 BF 01 C4 */	lfs f5, 0x1c4(r31)
/* 80103184 001000C4  38 DF 01 8C */	addi r6, r31, 0x18c
/* 80103188 001000C8  C0 5F 01 A4 */	lfs f2, 0x1a4(r31)
/* 8010318C 001000CC  EC 81 00 2A */	fadds f4, f1, f0
/* 80103190 001000D0  C0 3F 01 B0 */	lfs f1, 0x1b0(r31)
/* 80103194 001000D4  C0 7F 01 C0 */	lfs f3, 0x1c0(r31)
/* 80103198 001000D8  EC A6 28 2A */	fadds f5, f6, f5
/* 8010319C 001000DC  C0 1F 01 BC */	lfs f0, 0x1bc(r31)
/* 801031A0 001000E0  EC 22 08 2A */	fadds f1, f2, f1
/* 801031A4 001000E4  EC 44 18 2A */	fadds f2, f4, f3
/* 801031A8 001000E8  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 801031AC 001000EC  EC 01 00 2A */	fadds f0, f1, f0
/* 801031B0 001000F0  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 801031B4 001000F4  D0 01 00 08 */	stfs f0, 8(r1)
/* 801031B8 001000F8  48 32 51 21 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
.L_801031BC:
/* 801031BC 001000FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801031C0 00100100  38 82 94 C0 */	addi r4, r2, lbl_80517820@sda21
/* 801031C4 00100104  38 A0 00 01 */	li r5, 1
/* 801031C8 00100108  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801031CC 0010010C  48 32 79 2D */	bl _start__9SysTimersFPcb
/* 801031D0 00100110  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801031D4 00100114  38 7F 01 38 */	addi r3, r31, 0x138
/* 801031D8 00100118  80 84 00 08 */	lwz r4, 8(r4)
/* 801031DC 0010011C  38 84 00 24 */	addi r4, r4, 0x24
/* 801031E0 00100120  4B FE 70 ED */	bl PSMTXCopy
/* 801031E4 00100124  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801031E8 00100128  80 63 00 08 */	lwz r3, 8(r3)
/* 801031EC 0010012C  81 83 00 00 */	lwz r12, 0(r3)
/* 801031F0 00100130  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801031F4 00100134  7D 89 03 A6 */	mtctr r12
/* 801031F8 00100138  4E 80 04 21 */	bctrl 
/* 801031FC 0010013C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80103200 00100140  38 82 94 C0 */	addi r4, r2, lbl_80517820@sda21
/* 80103204 00100144  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80103208 00100148  48 32 78 F5 */	bl _stop__9SysTimersFPc
/* 8010320C 0010014C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80103210 00100150  48 03 28 8D */	bl update__8CollTreeFv
/* 80103214 00100154  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80103218 00100158  81 83 00 00 */	lwz r12, 0(r3)
/* 8010321C 0010015C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80103220 00100160  7D 89 03 A6 */	mtctr r12
/* 80103224 00100164  4E 80 04 21 */	bctrl 
/* 80103228 00100168  88 03 00 18 */	lbz r0, 0x18(r3)
/* 8010322C 0010016C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80103230 00100170  41 82 00 1C */	beq .L_8010324C
/* 80103234 00100174  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80103238 00100178  38 80 00 00 */	li r4, 0
/* 8010323C 0010017C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80103240 00100180  38 A0 00 01 */	li r5, 1
/* 80103244 00100184  FC 40 08 90 */	fmr f2, f1
/* 80103248 00100188  48 35 AB 99 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
.L_8010324C:
/* 8010324C 0010018C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80103250 00100190  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80103254 00100194  7C 08 03 A6 */	mtlr r0
/* 80103258 00100198  38 21 00 60 */	addi r1, r1, 0x60
/* 8010325C 0010019C  4E 80 00 20 */	blr 

.global "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
"onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>":
/* 80103260 001001A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80103264 001001A4  7C 08 02 A6 */	mflr r0
/* 80103268 001001A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010326C 001001AC  48 00 06 65 */	bl updateSpheres__Q24Game9EnemyBaseFv
/* 80103270 001001B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80103274 001001B4  7C 08 03 A6 */	mtlr r0
/* 80103278 001001B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010327C 001001BC  4E 80 00 20 */	blr 

.global "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
"onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>":
/* 80103280 001001C0  C0 04 00 00 */	lfs f0, 0(r4)
/* 80103284 001001C4  D0 03 01 8C */	stfs f0, 0x18c(r3)
/* 80103288 001001C8  C0 04 00 04 */	lfs f0, 4(r4)
/* 8010328C 001001CC  D0 03 01 90 */	stfs f0, 0x190(r3)
/* 80103290 001001D0  C0 04 00 08 */	lfs f0, 8(r4)
/* 80103294 001001D4  D0 03 01 94 */	stfs f0, 0x194(r3)
/* 80103298 001001D8  4E 80 00 20 */	blr 

.global doAnimationStick__Q24Game9EnemyBaseFv
doAnimationStick__Q24Game9EnemyBaseFv:
/* 8010329C 001001DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801032A0 001001E0  7C 08 02 A6 */	mflr r0
/* 801032A4 001001E4  7C 67 1B 78 */	mr r7, r3
/* 801032A8 001001E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801032AC 001001EC  38 A1 00 08 */	addi r5, r1, 8
/* 801032B0 001001F0  38 87 01 68 */	addi r4, r7, 0x168
/* 801032B4 001001F4  38 C7 01 8C */	addi r6, r7, 0x18c
/* 801032B8 001001F8  C0 63 01 AC */	lfs f3, 0x1ac(r3)
/* 801032BC 001001FC  38 67 01 38 */	addi r3, r7, 0x138
/* 801032C0 00100200  C0 47 01 B8 */	lfs f2, 0x1b8(r7)
/* 801032C4 00100204  C0 27 01 A8 */	lfs f1, 0x1a8(r7)
/* 801032C8 00100208  EC A3 10 2A */	fadds f5, f3, f2
/* 801032CC 0010020C  C0 07 01 B4 */	lfs f0, 0x1b4(r7)
/* 801032D0 00100210  C0 67 01 C4 */	lfs f3, 0x1c4(r7)
/* 801032D4 00100214  EC 81 00 2A */	fadds f4, f1, f0
/* 801032D8 00100218  C0 47 01 A4 */	lfs f2, 0x1a4(r7)
/* 801032DC 0010021C  C0 27 01 B0 */	lfs f1, 0x1b0(r7)
/* 801032E0 00100220  EC A5 18 2A */	fadds f5, f5, f3
/* 801032E4 00100224  C0 67 01 C0 */	lfs f3, 0x1c0(r7)
/* 801032E8 00100228  EC 22 08 2A */	fadds f1, f2, f1
/* 801032EC 0010022C  C0 07 01 BC */	lfs f0, 0x1bc(r7)
/* 801032F0 00100230  EC 44 18 2A */	fadds f2, f4, f3
/* 801032F4 00100234  EC 01 00 2A */	fadds f0, f1, f0
/* 801032F8 00100238  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 801032FC 0010023C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80103300 00100240  D0 01 00 08 */	stfs f0, 8(r1)
/* 80103304 00100244  48 32 4F D5 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80103308 00100248  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010330C 0010024C  7C 08 03 A6 */	mtlr r0
/* 80103310 00100250  38 21 00 20 */	addi r1, r1, 0x20
/* 80103314 00100254  4E 80 00 20 */	blr 

.global doAnimationCullingOn__Q24Game9EnemyBaseFv
doAnimationCullingOn__Q24Game9EnemyBaseFv:
/* 80103318 00100258  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8010331C 0010025C  38 00 00 00 */	li r0, 0
/* 80103320 00100260  80 63 00 08 */	lwz r3, 8(r3)
/* 80103324 00100264  80 63 00 04 */	lwz r3, 4(r3)
/* 80103328 00100268  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8010332C 0010026C  80 63 00 00 */	lwz r3, 0(r3)
/* 80103330 00100270  90 03 00 54 */	stw r0, 0x54(r3)
/* 80103334 00100274  4E 80 00 20 */	blr 

.global show__Q24Game9EnemyBaseFv
show__Q24Game9EnemyBaseFv:
/* 80103338 00100278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010333C 0010027C  7C 08 02 A6 */	mflr r0
/* 80103340 00100280  90 01 00 14 */	stw r0, 0x14(r1)
/* 80103344 00100284  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80103348 00100288  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8010334C 0010028C  41 82 00 44 */	beq .L_80103390
/* 80103350 00100290  80 83 02 4C */	lwz r4, 0x24c(r3)
/* 80103354 00100294  88 04 00 50 */	lbz r0, 0x50(r4)
/* 80103358 00100298  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8010335C 0010029C  41 82 00 1C */	beq .L_80103378
/* 80103360 001002A0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80103364 001002A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80103368 001002A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8010336C 001002AC  7D 89 03 A6 */	mtctr r12
/* 80103370 001002B0  4E 80 04 21 */	bctrl 
/* 80103374 001002B4  48 00 00 30 */	b .L_801033A4
.L_80103378:
/* 80103378 001002B8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8010337C 001002BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80103380 001002C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80103384 001002C4  7D 89 03 A6 */	mtctr r12
/* 80103388 001002C8  4E 80 04 21 */	bctrl 
/* 8010338C 001002CC  48 00 00 18 */	b .L_801033A4
.L_80103390:
/* 80103390 001002D0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80103394 001002D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80103398 001002D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010339C 001002DC  7D 89 03 A6 */	mtctr r12
/* 801033A0 001002E0  4E 80 04 21 */	bctrl 
.L_801033A4:
/* 801033A4 001002E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801033A8 001002E8  7C 08 03 A6 */	mtlr r0
/* 801033AC 001002EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801033B0 001002F0  4E 80 00 20 */	blr 

.global hide__Q24Game9EnemyBaseFv
hide__Q24Game9EnemyBaseFv:
/* 801033B4 001002F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801033B8 001002F8  7C 08 02 A6 */	mflr r0
/* 801033BC 001002FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801033C0 00100300  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801033C4 00100304  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 801033C8 00100308  41 82 00 1C */	beq .L_801033E4
/* 801033CC 0010030C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 801033D0 00100310  81 83 00 00 */	lwz r12, 0(r3)
/* 801033D4 00100314  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801033D8 00100318  7D 89 03 A6 */	mtctr r12
/* 801033DC 0010031C  4E 80 04 21 */	bctrl 
/* 801033E0 00100320  48 00 00 18 */	b .L_801033F8
.L_801033E4:
/* 801033E4 00100324  80 63 01 74 */	lwz r3, 0x174(r3)
/* 801033E8 00100328  81 83 00 00 */	lwz r12, 0(r3)
/* 801033EC 0010032C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801033F0 00100330  7D 89 03 A6 */	mtctr r12
/* 801033F4 00100334  4E 80 04 21 */	bctrl 
.L_801033F8:
/* 801033F8 00100338  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801033FC 0010033C  7C 08 03 A6 */	mtlr r0
/* 80103400 00100340  38 21 00 10 */	addi r1, r1, 0x10
/* 80103404 00100344  4E 80 00 20 */	blr 

.global doEntryCarcass__Q24Game9EnemyBaseFv
doEntryCarcass__Q24Game9EnemyBaseFv:
/* 80103408 00100348  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010340C 0010034C  7C 08 02 A6 */	mflr r0
/* 80103410 00100350  90 01 00 14 */	stw r0, 0x14(r1)
/* 80103414 00100354  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80103418 00100358  7C 7F 1B 78 */	mr r31, r3
/* 8010341C 0010035C  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 80103420 00100360  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80103424 00100364  41 82 00 7C */	beq .L_801034A0
/* 80103428 00100368  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8010342C 0010036C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80103430 00100370  41 82 00 44 */	beq .L_80103474
/* 80103434 00100374  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80103438 00100378  88 03 00 50 */	lbz r0, 0x50(r3)
/* 8010343C 0010037C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80103440 00100380  41 82 00 1C */	beq .L_8010345C
/* 80103444 00100384  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103448 00100388  81 83 00 00 */	lwz r12, 0(r3)
/* 8010344C 0010038C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80103450 00100390  7D 89 03 A6 */	mtctr r12
/* 80103454 00100394  4E 80 04 21 */	bctrl 
/* 80103458 00100398  48 00 00 30 */	b .L_80103488
.L_8010345C:
/* 8010345C 0010039C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103460 001003A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80103464 001003A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80103468 001003A8  7D 89 03 A6 */	mtctr r12
/* 8010346C 001003AC  4E 80 04 21 */	bctrl 
/* 80103470 001003B0  48 00 00 18 */	b .L_80103488
.L_80103474:
/* 80103474 001003B4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103478 001003B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010347C 001003BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80103480 001003C0  7D 89 03 A6 */	mtctr r12
/* 80103484 001003C4  4E 80 04 21 */	bctrl 
.L_80103488:
/* 80103488 001003C8  7F E3 FB 78 */	mr r3, r31
/* 8010348C 001003CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80103490 001003D0  81 8C 02 00 */	lwz r12, 0x200(r12)
/* 80103494 001003D4  7D 89 03 A6 */	mtctr r12
/* 80103498 001003D8  4E 80 04 21 */	bctrl 
/* 8010349C 001003DC  48 00 00 3C */	b .L_801034D8
.L_801034A0:
/* 801034A0 001003E0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801034A4 001003E4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 801034A8 001003E8  41 82 00 1C */	beq .L_801034C4
/* 801034AC 001003EC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801034B0 001003F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801034B4 001003F4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801034B8 001003F8  7D 89 03 A6 */	mtctr r12
/* 801034BC 001003FC  4E 80 04 21 */	bctrl 
/* 801034C0 00100400  48 00 00 18 */	b .L_801034D8
.L_801034C4:
/* 801034C4 00100404  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801034C8 00100408  81 83 00 00 */	lwz r12, 0(r3)
/* 801034CC 0010040C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801034D0 00100410  7D 89 03 A6 */	mtctr r12
/* 801034D4 00100414  4E 80 04 21 */	bctrl 
.L_801034D8:
/* 801034D8 00100418  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801034DC 0010041C  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 801034E0 00100420  40 82 00 1C */	bne .L_801034FC
/* 801034E4 00100424  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801034E8 00100428  80 63 00 08 */	lwz r3, 8(r3)
/* 801034EC 0010042C  81 83 00 00 */	lwz r12, 0(r3)
/* 801034F0 00100430  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801034F4 00100434  7D 89 03 A6 */	mtctr r12
/* 801034F8 00100438  4E 80 04 21 */	bctrl 
.L_801034FC:
/* 801034FC 0010043C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80103500 00100440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80103504 00100444  7C 08 03 A6 */	mtlr r0
/* 80103508 00100448  38 21 00 10 */	addi r1, r1, 0x10
/* 8010350C 0010044C  4E 80 00 20 */	blr 

.global doEntryLiving__Q24Game9EnemyBaseFv
doEntryLiving__Q24Game9EnemyBaseFv:
/* 80103510 00100450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80103514 00100454  7C 08 02 A6 */	mflr r0
/* 80103518 00100458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010351C 0010045C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80103520 00100460  7C 7F 1B 78 */	mr r31, r3
/* 80103524 00100464  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 80103528 00100468  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8010352C 0010046C  41 82 00 7C */	beq .L_801035A8
/* 80103530 00100470  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80103534 00100474  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80103538 00100478  41 82 00 44 */	beq .L_8010357C
/* 8010353C 0010047C  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80103540 00100480  88 03 00 50 */	lbz r0, 0x50(r3)
/* 80103544 00100484  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80103548 00100488  41 82 00 1C */	beq .L_80103564
/* 8010354C 0010048C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103550 00100490  81 83 00 00 */	lwz r12, 0(r3)
/* 80103554 00100494  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80103558 00100498  7D 89 03 A6 */	mtctr r12
/* 8010355C 0010049C  4E 80 04 21 */	bctrl 
/* 80103560 001004A0  48 00 00 30 */	b .L_80103590
.L_80103564:
/* 80103564 001004A4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103568 001004A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010356C 001004AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80103570 001004B0  7D 89 03 A6 */	mtctr r12
/* 80103574 001004B4  4E 80 04 21 */	bctrl 
/* 80103578 001004B8  48 00 00 18 */	b .L_80103590
.L_8010357C:
/* 8010357C 001004BC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103580 001004C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80103584 001004C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80103588 001004C8  7D 89 03 A6 */	mtctr r12
/* 8010358C 001004CC  4E 80 04 21 */	bctrl 
.L_80103590:
/* 80103590 001004D0  7F E3 FB 78 */	mr r3, r31
/* 80103594 001004D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80103598 001004D8  81 8C 02 00 */	lwz r12, 0x200(r12)
/* 8010359C 001004DC  7D 89 03 A6 */	mtctr r12
/* 801035A0 001004E0  4E 80 04 21 */	bctrl 
/* 801035A4 001004E4  48 00 00 70 */	b .L_80103614
.L_801035A8:
/* 801035A8 001004E8  88 0D 84 68 */	lbz r0, sEntryOpt__Q24Game12BaseHIOParms@sda21(r13)
/* 801035AC 001004EC  28 00 00 00 */	cmplwi r0, 0
/* 801035B0 001004F0  41 82 00 2C */	beq .L_801035DC
/* 801035B4 001004F4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801035B8 001004F8  38 60 00 00 */	li r3, 0
/* 801035BC 001004FC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801035C0 00100500  2C 00 00 01 */	cmpwi r0, 1
/* 801035C4 00100504  41 82 00 0C */	beq .L_801035D0
/* 801035C8 00100508  2C 00 00 03 */	cmpwi r0, 3
/* 801035CC 0010050C  40 82 00 08 */	bne .L_801035D4
.L_801035D0:
/* 801035D0 00100510  38 60 00 01 */	li r3, 1
.L_801035D4:
/* 801035D4 00100514  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801035D8 00100518  41 82 00 60 */	beq .L_80103638
.L_801035DC:
/* 801035DC 0010051C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801035E0 00100520  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 801035E4 00100524  41 82 00 1C */	beq .L_80103600
/* 801035E8 00100528  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801035EC 0010052C  81 83 00 00 */	lwz r12, 0(r3)
/* 801035F0 00100530  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801035F4 00100534  7D 89 03 A6 */	mtctr r12
/* 801035F8 00100538  4E 80 04 21 */	bctrl 
/* 801035FC 0010053C  48 00 00 18 */	b .L_80103614
.L_80103600:
/* 80103600 00100540  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103604 00100544  81 83 00 00 */	lwz r12, 0(r3)
/* 80103608 00100548  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8010360C 0010054C  7D 89 03 A6 */	mtctr r12
/* 80103610 00100550  4E 80 04 21 */	bctrl 
.L_80103614:
/* 80103614 00100554  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80103618 00100558  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 8010361C 0010055C  40 82 00 1C */	bne .L_80103638
/* 80103620 00100560  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80103624 00100564  80 63 00 08 */	lwz r3, 8(r3)
/* 80103628 00100568  81 83 00 00 */	lwz r12, 0(r3)
/* 8010362C 0010056C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80103630 00100570  7D 89 03 A6 */	mtctr r12
/* 80103634 00100574  4E 80 04 21 */	bctrl 
.L_80103638:
/* 80103638 00100578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010363C 0010057C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80103640 00100580  7C 08 03 A6 */	mtlr r0
/* 80103644 00100584  38 21 00 10 */	addi r1, r1, 0x10
/* 80103648 00100588  4E 80 00 20 */	blr 

.global doEntry__Q24Game9EnemyBaseFv
doEntry__Q24Game9EnemyBaseFv:
/* 8010364C 0010058C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80103650 00100590  7C 08 02 A6 */	mflr r0
/* 80103654 00100594  7C 64 1B 78 */	mr r4, r3
/* 80103658 00100598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010365C 0010059C  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80103660 001005A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80103664 001005A4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80103668 001005A8  7D 89 03 A6 */	mtctr r12
/* 8010366C 001005AC  4E 80 04 21 */	bctrl 
/* 80103670 001005B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80103674 001005B4  7C 08 03 A6 */	mtlr r0
/* 80103678 001005B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010367C 001005BC  4E 80 00 20 */	blr 

.global doSetView__Q24Game9EnemyBaseFi
doSetView__Q24Game9EnemyBaseFi:
/* 80103680 001005C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80103684 001005C4  7C 08 02 A6 */	mflr r0
/* 80103688 001005C8  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 8010368C 001005CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80103690 001005D0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80103694 001005D4  48 33 BA 2D */	bl setCurrentViewNo__Q28SysShape5ModelFUl
/* 80103698 001005D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010369C 001005DC  7C 08 03 A6 */	mtlr r0
/* 801036A0 001005E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801036A4 001005E4  4E 80 00 20 */	blr 

.global isCullingOff__Q24Game9EnemyBaseFv
isCullingOff__Q24Game9EnemyBaseFv:
/* 801036A8 001005E8  80 83 01 7C */	lwz r4, 0x17c(r3)
/* 801036AC 001005EC  80 04 00 04 */	lwz r0, 4(r4)
/* 801036B0 001005F0  28 00 00 00 */	cmplwi r0, 0
/* 801036B4 001005F4  41 82 00 0C */	beq .L_801036C0
/* 801036B8 001005F8  38 60 00 01 */	li r3, 1
/* 801036BC 001005FC  4E 80 00 20 */	blr 
.L_801036C0:
/* 801036C0 00100600  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801036C4 00100604  38 A0 00 00 */	li r5, 0
/* 801036C8 00100608  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 801036CC 0010060C  41 82 00 24 */	beq .L_801036F0
/* 801036D0 00100610  88 83 00 D8 */	lbz r4, 0xd8(r3)
/* 801036D4 00100614  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 801036D8 00100618  40 82 00 18 */	bne .L_801036F0
/* 801036DC 0010061C  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 801036E0 00100620  40 82 00 10 */	bne .L_801036F0
/* 801036E4 00100624  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 801036E8 00100628  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 801036EC 0010062C  41 82 00 08 */	beq .L_801036F4
.L_801036F0:
/* 801036F0 00100630  38 A0 00 01 */	li r5, 1
.L_801036F4:
/* 801036F4 00100634  7C A3 2B 78 */	mr r3, r5
/* 801036F8 00100638  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game9EnemyBaseFv
doViewCalc__Q24Game9EnemyBaseFv:
/* 801036FC 0010063C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80103700 00100640  7C 08 02 A6 */	mflr r0
/* 80103704 00100644  90 01 00 14 */	stw r0, 0x14(r1)
/* 80103708 00100648  80 83 01 7C */	lwz r4, 0x17c(r3)
/* 8010370C 0010064C  80 04 00 04 */	lwz r0, 4(r4)
/* 80103710 00100650  28 00 00 00 */	cmplwi r0, 0
/* 80103714 00100654  41 82 00 0C */	beq .L_80103720
/* 80103718 00100658  38 A0 00 01 */	li r5, 1
/* 8010371C 0010065C  48 00 00 38 */	b .L_80103754
.L_80103720:
/* 80103720 00100660  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80103724 00100664  38 A0 00 00 */	li r5, 0
/* 80103728 00100668  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 8010372C 0010066C  41 82 00 24 */	beq .L_80103750
/* 80103730 00100670  88 83 00 D8 */	lbz r4, 0xd8(r3)
/* 80103734 00100674  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 80103738 00100678  40 82 00 18 */	bne .L_80103750
/* 8010373C 0010067C  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 80103740 00100680  40 82 00 10 */	bne .L_80103750
/* 80103744 00100684  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 80103748 00100688  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8010374C 0010068C  41 82 00 08 */	beq .L_80103754
.L_80103750:
/* 80103750 00100690  38 A0 00 01 */	li r5, 1
.L_80103754:
/* 80103754 00100694  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80103758 00100698  41 82 00 0C */	beq .L_80103764
/* 8010375C 0010069C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80103760 001006A0  48 33 B8 F9 */	bl viewCalc__Q28SysShape5ModelFv
.L_80103764:
/* 80103764 001006A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80103768 001006A8  7C 08 03 A6 */	mtlr r0
/* 8010376C 001006AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80103770 001006B0  4E 80 00 20 */	blr 

.global doSimulationGround__Q24Game9EnemyBaseFf
doSimulationGround__Q24Game9EnemyBaseFf:
/* 80103774 001006B4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80103778 001006B8  38 80 00 00 */	li r4, 0
/* 8010377C 001006BC  C0 C3 01 CC */	lfs f6, 0x1cc(r3)
/* 80103780 001006C0  C0 05 00 9C */	lfs f0, 0x9c(r5)
/* 80103784 001006C4  C0 43 01 D4 */	lfs f2, 0x1d4(r3)
/* 80103788 001006C8  EC 86 30 28 */	fsubs f4, f6, f6
/* 8010378C 001006CC  EC A1 00 24 */	fdivs f5, f1, f0
/* 80103790 001006D0  C1 03 01 C8 */	lfs f8, 0x1c8(r3)
/* 80103794 001006D4  C0 03 01 DC */	lfs f0, 0x1dc(r3)
/* 80103798 001006D8  C0 E3 01 D0 */	lfs f7, 0x1d0(r3)
/* 8010379C 001006DC  EC 62 40 28 */	fsubs f3, f2, f8
/* 801037A0 001006E0  EC 00 38 28 */	fsubs f0, f0, f7
/* 801037A4 001006E4  EC 44 01 72 */	fmuls f2, f4, f5
/* 801037A8 001006E8  EC 63 01 72 */	fmuls f3, f3, f5
/* 801037AC 001006EC  EC 00 01 72 */	fmuls f0, f0, f5
/* 801037B0 001006F0  EC 46 10 2A */	fadds f2, f6, f2
/* 801037B4 001006F4  EC 68 18 2A */	fadds f3, f8, f3
/* 801037B8 001006F8  EC 07 00 2A */	fadds f0, f7, f0
/* 801037BC 001006FC  D0 63 01 C8 */	stfs f3, 0x1c8(r3)
/* 801037C0 00100700  D0 43 01 CC */	stfs f2, 0x1cc(r3)
/* 801037C4 00100704  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801037C8 00100708  80 A3 01 E4 */	lwz r5, 0x1e4(r3)
/* 801037CC 0010070C  54 A0 07 FF */	clrlwi. r0, r5, 0x1f
/* 801037D0 00100710  40 82 00 0C */	bne .L_801037DC
/* 801037D4 00100714  54 A0 06 F7 */	rlwinm. r0, r5, 0, 0x1b, 0x1b
/* 801037D8 00100718  41 82 00 08 */	beq .L_801037E0
.L_801037DC:
/* 801037DC 0010071C  38 80 00 01 */	li r4, 1
.L_801037E0:
/* 801037E0 00100720  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801037E4 00100724  41 82 00 24 */	beq .L_80103808
/* 801037E8 00100728  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 801037EC 0010072C  C0 62 94 C8 */	lfs f3, lbl_80517828@sda21(r2)
/* 801037F0 00100730  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 801037F4 00100734  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 801037F8 00100738  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801037FC 0010073C  EC 03 00 7C */	fnmsubs f0, f3, f1, f0
/* 80103800 00100740  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 80103804 00100744  4E 80 00 20 */	blr 
.L_80103808:
/* 80103808 00100748  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 8010380C 0010074C  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 80103810 00100750  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 80103814 00100754  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 80103818 00100758  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 8010381C 0010075C  4E 80 00 20 */	blr 

.global doSimulationFlying__Q24Game9EnemyBaseFf
doSimulationFlying__Q24Game9EnemyBaseFf:
/* 80103820 00100760  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80103824 00100764  C0 43 01 D4 */	lfs f2, 0x1d4(r3)
/* 80103828 00100768  C0 04 00 9C */	lfs f0, 0x9c(r4)
/* 8010382C 0010076C  C0 E3 01 C8 */	lfs f7, 0x1c8(r3)
/* 80103830 00100770  EC 81 00 24 */	fdivs f4, f1, f0
/* 80103834 00100774  C0 03 01 D8 */	lfs f0, 0x1d8(r3)
/* 80103838 00100778  C0 C3 01 CC */	lfs f6, 0x1cc(r3)
/* 8010383C 0010077C  C0 23 01 DC */	lfs f1, 0x1dc(r3)
/* 80103840 00100780  C0 A3 01 D0 */	lfs f5, 0x1d0(r3)
/* 80103844 00100784  EC 42 38 28 */	fsubs f2, f2, f7
/* 80103848 00100788  EC 00 30 28 */	fsubs f0, f0, f6
/* 8010384C 0010078C  EC 61 28 28 */	fsubs f3, f1, f5
/* 80103850 00100790  EC 42 01 32 */	fmuls f2, f2, f4
/* 80103854 00100794  EC 20 01 32 */	fmuls f1, f0, f4
/* 80103858 00100798  EC 03 01 32 */	fmuls f0, f3, f4
/* 8010385C 0010079C  EC 47 10 2A */	fadds f2, f7, f2
/* 80103860 001007A0  EC 26 08 2A */	fadds f1, f6, f1
/* 80103864 001007A4  EC 05 00 2A */	fadds f0, f5, f0
/* 80103868 001007A8  D0 43 01 C8 */	stfs f2, 0x1c8(r3)
/* 8010386C 001007AC  D0 23 01 CC */	stfs f1, 0x1cc(r3)
/* 80103870 001007B0  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 80103874 001007B4  4E 80 00 20 */	blr 

.global doSimulationStick__Q24Game9EnemyBaseFf
doSimulationStick__Q24Game9EnemyBaseFf:
/* 80103878 001007B8  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8010387C 001007BC  C0 43 01 D4 */	lfs f2, 0x1d4(r3)
/* 80103880 001007C0  C0 04 00 9C */	lfs f0, 0x9c(r4)
/* 80103884 001007C4  C0 E3 01 C8 */	lfs f7, 0x1c8(r3)
/* 80103888 001007C8  EC 81 00 24 */	fdivs f4, f1, f0
/* 8010388C 001007CC  C0 03 01 D8 */	lfs f0, 0x1d8(r3)
/* 80103890 001007D0  C0 C3 01 CC */	lfs f6, 0x1cc(r3)
/* 80103894 001007D4  C0 23 01 DC */	lfs f1, 0x1dc(r3)
/* 80103898 001007D8  C0 A3 01 D0 */	lfs f5, 0x1d0(r3)
/* 8010389C 001007DC  EC 42 38 28 */	fsubs f2, f2, f7
/* 801038A0 001007E0  EC 00 30 28 */	fsubs f0, f0, f6
/* 801038A4 001007E4  EC 61 28 28 */	fsubs f3, f1, f5
/* 801038A8 001007E8  EC 42 01 32 */	fmuls f2, f2, f4
/* 801038AC 001007EC  EC 20 01 32 */	fmuls f1, f0, f4
/* 801038B0 001007F0  EC 03 01 32 */	fmuls f0, f3, f4
/* 801038B4 001007F4  EC 47 10 2A */	fadds f2, f7, f2
/* 801038B8 001007F8  EC 26 08 2A */	fadds f1, f6, f1
/* 801038BC 001007FC  EC 05 00 2A */	fadds f0, f5, f0
/* 801038C0 00100800  D0 43 01 C8 */	stfs f2, 0x1c8(r3)
/* 801038C4 00100804  D0 23 01 CC */	stfs f1, 0x1cc(r3)
/* 801038C8 00100808  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801038CC 0010080C  4E 80 00 20 */	blr 

.global updateSpheres__Q24Game9EnemyBaseFv
updateSpheres__Q24Game9EnemyBaseFv:
/* 801038D0 00100810  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801038D4 00100814  7C 08 02 A6 */	mflr r0
/* 801038D8 00100818  90 01 00 24 */	stw r0, 0x24(r1)
/* 801038DC 0010081C  38 81 00 08 */	addi r4, r1, 8
/* 801038E0 00100820  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801038E4 00100824  7C 7F 1B 78 */	mr r31, r3
/* 801038E8 00100828  80 63 01 14 */	lwz r3, 0x114(r3)
/* 801038EC 0010082C  80 63 00 00 */	lwz r3, 0(r3)
/* 801038F0 00100830  48 03 49 0D */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 801038F4 00100834  C0 01 00 08 */	lfs f0, 8(r1)
/* 801038F8 00100838  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 801038FC 0010083C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80103900 00100840  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 80103904 00100844  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80103908 00100848  D0 1F 02 28 */	stfs f0, 0x228(r31)
/* 8010390C 0010084C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80103910 00100850  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 80103914 00100854  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 80103918 00100858  D0 1F 02 70 */	stfs f0, 0x270(r31)
/* 8010391C 0010085C  C0 1F 02 24 */	lfs f0, 0x224(r31)
/* 80103920 00100860  D0 1F 02 74 */	stfs f0, 0x274(r31)
/* 80103924 00100864  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 80103928 00100868  D0 1F 02 78 */	stfs f0, 0x278(r31)
/* 8010392C 0010086C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80103930 00100870  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80103934 00100874  7C 08 03 A6 */	mtlr r0
/* 80103938 00100878  38 21 00 20 */	addi r1, r1, 0x20
/* 8010393C 0010087C  4E 80 00 20 */	blr 

.global "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
"createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f":
/* 80103940 00100880  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80103944 00100884  7C 08 02 A6 */	mflr r0
/* 80103948 00100888  90 01 00 44 */	stw r0, 0x44(r1)
/* 8010394C 0010088C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80103950 00100890  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80103954 00100894  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80103958 00100898  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8010395C 0010089C  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80103960 001008A0  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 80103964 001008A4  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple1@ha
/* 80103968 001008A8  90 01 00 08 */	stw r0, 8(r1)
/* 8010396C 001008AC  38 05 6A 78 */	addi r0, r5, __vt__Q23efx8TSimple1@l
/* 80103970 001008B0  FF E0 08 90 */	fmr f31, f1
/* 80103974 001008B4  C0 44 00 00 */	lfs f2, 0(r4)
/* 80103978 001008B8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8010397C 001008BC  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 80103980 001008C0  C0 24 00 04 */	lfs f1, 4(r4)
/* 80103984 001008C4  3C A0 80 4F */	lis r5, __vt__Q23efx15TEnemyDownSmoke@ha
/* 80103988 001008C8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8010398C 001008CC  38 86 A7 EC */	addi r4, r6, __vt__Q23efx3Arg@l
/* 80103990 001008D0  38 E0 00 53 */	li r7, 0x53
/* 80103994 001008D4  38 C0 00 00 */	li r6, 0
/* 80103998 001008D8  7C 7F 1B 78 */	mr r31, r3
/* 8010399C 001008DC  90 01 00 08 */	stw r0, 8(r1)
/* 801039A0 001008E0  38 05 86 10 */	addi r0, r5, __vt__Q23efx15TEnemyDownSmoke@l
/* 801039A4 001008E4  38 61 00 08 */	addi r3, r1, 8
/* 801039A8 001008E8  90 81 00 18 */	stw r4, 0x18(r1)
/* 801039AC 001008EC  38 81 00 18 */	addi r4, r1, 0x18
/* 801039B0 001008F0  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 801039B4 001008F4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 801039B8 001008F8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801039BC 001008FC  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 801039C0 00100900  90 C1 00 10 */	stw r6, 0x10(r1)
/* 801039C4 00100904  90 01 00 08 */	stw r0, 8(r1)
/* 801039C8 00100908  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 801039CC 0010090C  48 2C 4D 99 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
/* 801039D0 00100910  FC 20 F8 90 */	fmr f1, f31
/* 801039D4 00100914  7F E3 FB 78 */	mr r3, r31
/* 801039D8 00100918  48 36 AC B9 */	bl PSStartEnemyDownSmokeSE__FPQ24Game9EnemyBasef
/* 801039DC 0010091C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801039E0 00100920  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801039E4 00100924  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801039E8 00100928  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801039EC 0010092C  7C 08 03 A6 */	mtlr r0
/* 801039F0 00100930  38 21 00 40 */	addi r1, r1, 0x40
/* 801039F4 00100934  4E 80 00 20 */	blr 

.global "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
"createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f":
/* 801039F8 00100938  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801039FC 0010093C  7C 08 02 A6 */	mflr r0
/* 80103A00 00100940  90 01 00 84 */	stw r0, 0x84(r1)
/* 80103A04 00100944  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80103A08 00100948  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80103A0C 0010094C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80103A10 00100950  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80103A14 00100954  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80103A18 00100958  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80103A1C 0010095C  7C 7F 1B 78 */	mr r31, r3
/* 80103A20 00100960  FF C0 08 90 */	fmr f30, f1
/* 80103A24 00100964  80 63 02 80 */	lwz r3, 0x280(r3)
/* 80103A28 00100968  7C 9E 23 78 */	mr r30, r4
/* 80103A2C 0010096C  28 03 00 00 */	cmplwi r3, 0
/* 80103A30 00100970  41 82 00 30 */	beq .L_80103A60
/* 80103A34 00100974  81 83 00 00 */	lwz r12, 0(r3)
/* 80103A38 00100978  C3 FE 00 08 */	lfs f31, 8(r30)
/* 80103A3C 0010097C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80103A40 00100980  7D 89 03 A6 */	mtctr r12
/* 80103A44 00100984  4E 80 04 21 */	bctrl 
/* 80103A48 00100988  C0 23 00 00 */	lfs f1, 0(r3)
/* 80103A4C 0010098C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80103A50 00100990  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80103A54 00100994  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80103A58 00100998  D3 E1 00 1C */	stfs f31, 0x1c(r1)
/* 80103A5C 0010099C  48 00 00 1C */	b .L_80103A78
.L_80103A60:
/* 80103A60 001009A0  C0 5E 00 00 */	lfs f2, 0(r30)
/* 80103A64 001009A4  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80103A68 001009A8  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80103A6C 001009AC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80103A70 001009B0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80103A74 001009B4  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_80103A78:
/* 80103A78 001009B8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80103A7C 001009BC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80103A80 001009C0  80 E1 00 18 */	lwz r7, 0x18(r1)
/* 80103A84 001009C4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80103A88 001009C8  80 C1 00 1C */	lwz r6, 0x1c(r1)
/* 80103A8C 001009CC  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80103A90 001009D0  90 81 00 08 */	stw r4, 8(r1)
/* 80103A94 001009D4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 80103A98 001009D8  39 63 A7 EC */	addi r11, r3, __vt__Q23efx3Arg@l
/* 80103A9C 001009DC  3D 40 80 4B */	lis r10, __vt__Q23efx8ArgScale@ha
/* 80103AA0 001009E0  38 A0 00 00 */	li r5, 0
/* 80103AA4 001009E4  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80103AA8 001009E8  C0 41 00 08 */	lfs f2, 8(r1)
/* 80103AAC 001009EC  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 80103AB0 001009F0  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80103AB4 001009F4  39 00 00 54 */	li r8, 0x54
/* 80103AB8 001009F8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80103ABC 001009FC  38 E0 00 55 */	li r7, 0x55
/* 80103AC0 00100A00  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80103AC4 00100A04  38 C0 00 56 */	li r6, 0x56
/* 80103AC8 00100A08  90 01 00 20 */	stw r0, 0x20(r1)
/* 80103ACC 00100A0C  39 24 6A 50 */	addi r9, r4, __vt__Q23efx8TSimple3@l
/* 80103AD0 00100A10  39 4A A2 DC */	addi r10, r10, __vt__Q23efx8ArgScale@l
/* 80103AD4 00100A14  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80103AD8 00100A18  91 61 00 38 */	stw r11, 0x38(r1)
/* 80103ADC 00100A1C  38 61 00 20 */	addi r3, r1, 0x20
/* 80103AE0 00100A20  38 81 00 38 */	addi r4, r1, 0x38
/* 80103AE4 00100A24  91 21 00 20 */	stw r9, 0x20(r1)
/* 80103AE8 00100A28  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80103AEC 00100A2C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80103AF0 00100A30  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80103AF4 00100A34  91 41 00 38 */	stw r10, 0x38(r1)
/* 80103AF8 00100A38  D3 C1 00 48 */	stfs f30, 0x48(r1)
/* 80103AFC 00100A3C  B1 01 00 24 */	sth r8, 0x24(r1)
/* 80103B00 00100A40  B0 E1 00 26 */	sth r7, 0x26(r1)
/* 80103B04 00100A44  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 80103B08 00100A48  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80103B0C 00100A4C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80103B10 00100A50  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80103B14 00100A54  90 01 00 20 */	stw r0, 0x20(r1)
/* 80103B18 00100A58  48 2C 4C B5 */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80103B1C 00100A5C  FC 20 F0 90 */	fmr f1, f30
/* 80103B20 00100A60  7F E3 FB 78 */	mr r3, r31
/* 80103B24 00100A64  48 36 AD 1D */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
/* 80103B28 00100A68  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80103B2C 00100A6C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80103B30 00100A70  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80103B34 00100A74  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80103B38 00100A78  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80103B3C 00100A7C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80103B40 00100A80  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80103B44 00100A84  7C 08 03 A6 */	mtlr r0
/* 80103B48 00100A88  38 21 00 80 */	addi r1, r1, 0x80
/* 80103B4C 00100A8C  4E 80 00 20 */	blr 

.global "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
"createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f":
/* 80103B50 00100A90  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80103B54 00100A94  7C 08 02 A6 */	mflr r0
/* 80103B58 00100A98  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80103B5C 00100A9C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80103B60 00100AA0  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80103B64 00100AA4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80103B68 00100AA8  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80103B6C 00100AAC  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80103B70 00100AB0  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80103B74 00100AB4  7C 7F 1B 78 */	mr r31, r3
/* 80103B78 00100AB8  FF C0 08 90 */	fmr f30, f1
/* 80103B7C 00100ABC  80 63 02 80 */	lwz r3, 0x280(r3)
/* 80103B80 00100AC0  7C 9E 23 78 */	mr r30, r4
/* 80103B84 00100AC4  28 03 00 00 */	cmplwi r3, 0
/* 80103B88 00100AC8  41 82 01 00 */	beq .L_80103C88
/* 80103B8C 00100ACC  41 82 00 30 */	beq .L_80103BBC
/* 80103B90 00100AD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80103B94 00100AD4  C3 FE 00 08 */	lfs f31, 8(r30)
/* 80103B98 00100AD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80103B9C 00100ADC  7D 89 03 A6 */	mtctr r12
/* 80103BA0 00100AE0  4E 80 04 21 */	bctrl 
/* 80103BA4 00100AE4  C0 23 00 00 */	lfs f1, 0(r3)
/* 80103BA8 00100AE8  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80103BAC 00100AEC  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80103BB0 00100AF0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80103BB4 00100AF4  D3 E1 00 30 */	stfs f31, 0x30(r1)
/* 80103BB8 00100AF8  48 00 00 1C */	b .L_80103BD4
.L_80103BBC:
/* 80103BBC 00100AFC  C0 5E 00 00 */	lfs f2, 0(r30)
/* 80103BC0 00100B00  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80103BC4 00100B04  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80103BC8 00100B08  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80103BCC 00100B0C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80103BD0 00100B10  D0 01 00 30 */	stfs f0, 0x30(r1)
.L_80103BD4:
/* 80103BD4 00100B14  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80103BD8 00100B18  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80103BDC 00100B1C  80 E1 00 2C */	lwz r7, 0x2c(r1)
/* 80103BE0 00100B20  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80103BE4 00100B24  80 C1 00 30 */	lwz r6, 0x30(r1)
/* 80103BE8 00100B28  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80103BEC 00100B2C  90 81 00 34 */	stw r4, 0x34(r1)
/* 80103BF0 00100B30  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 80103BF4 00100B34  39 63 A7 EC */	addi r11, r3, __vt__Q23efx3Arg@l
/* 80103BF8 00100B38  3D 40 80 4B */	lis r10, __vt__Q23efx8ArgScale@ha
/* 80103BFC 00100B3C  38 A0 00 00 */	li r5, 0
/* 80103C00 00100B40  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80103C04 00100B44  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80103C08 00100B48  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 80103C0C 00100B4C  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80103C10 00100B50  39 00 00 54 */	li r8, 0x54
/* 80103C14 00100B54  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80103C18 00100B58  38 E0 00 55 */	li r7, 0x55
/* 80103C1C 00100B5C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80103C20 00100B60  38 C0 00 56 */	li r6, 0x56
/* 80103C24 00100B64  90 01 00 54 */	stw r0, 0x54(r1)
/* 80103C28 00100B68  39 24 6A 50 */	addi r9, r4, __vt__Q23efx8TSimple3@l
/* 80103C2C 00100B6C  39 4A A2 DC */	addi r10, r10, __vt__Q23efx8ArgScale@l
/* 80103C30 00100B70  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80103C34 00100B74  91 61 00 40 */	stw r11, 0x40(r1)
/* 80103C38 00100B78  38 61 00 54 */	addi r3, r1, 0x54
/* 80103C3C 00100B7C  38 81 00 40 */	addi r4, r1, 0x40
/* 80103C40 00100B80  91 21 00 54 */	stw r9, 0x54(r1)
/* 80103C44 00100B84  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80103C48 00100B88  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80103C4C 00100B8C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80103C50 00100B90  91 41 00 40 */	stw r10, 0x40(r1)
/* 80103C54 00100B94  D3 C1 00 50 */	stfs f30, 0x50(r1)
/* 80103C58 00100B98  B1 01 00 58 */	sth r8, 0x58(r1)
/* 80103C5C 00100B9C  B0 E1 00 5A */	sth r7, 0x5a(r1)
/* 80103C60 00100BA0  B0 C1 00 5C */	sth r6, 0x5c(r1)
/* 80103C64 00100BA4  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80103C68 00100BA8  90 A1 00 64 */	stw r5, 0x64(r1)
/* 80103C6C 00100BAC  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80103C70 00100BB0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80103C74 00100BB4  48 2C 4B 59 */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80103C78 00100BB8  FC 20 F0 90 */	fmr f1, f30
/* 80103C7C 00100BBC  7F E3 FB 78 */	mr r3, r31
/* 80103C80 00100BC0  48 36 AB C1 */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
/* 80103C84 00100BC4  48 00 00 80 */	b .L_80103D04
.L_80103C88:
/* 80103C88 00100BC8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80103C8C 00100BCC  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80103C90 00100BD0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80103C94 00100BD4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 80103C98 00100BD8  90 01 00 18 */	stw r0, 0x18(r1)
/* 80103C9C 00100BDC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 80103CA0 00100BE0  C0 5E 00 00 */	lfs f2, 0(r30)
/* 80103CA4 00100BE4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80103CA8 00100BE8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80103CAC 00100BEC  3C 60 80 4F */	lis r3, __vt__Q23efx15TEnemyDownSmoke@ha
/* 80103CB0 00100BF0  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80103CB4 00100BF4  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 80103CB8 00100BF8  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80103CBC 00100BFC  38 C0 00 53 */	li r6, 0x53
/* 80103CC0 00100C00  38 A0 00 00 */	li r5, 0
/* 80103CC4 00100C04  90 01 00 18 */	stw r0, 0x18(r1)
/* 80103CC8 00100C08  38 03 86 10 */	addi r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
/* 80103CCC 00100C0C  38 61 00 18 */	addi r3, r1, 0x18
/* 80103CD0 00100C10  90 81 00 08 */	stw r4, 8(r1)
/* 80103CD4 00100C14  38 81 00 08 */	addi r4, r1, 8
/* 80103CD8 00100C18  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80103CDC 00100C1C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80103CE0 00100C20  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80103CE4 00100C24  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 80103CE8 00100C28  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80103CEC 00100C2C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80103CF0 00100C30  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 80103CF4 00100C34  48 2C 4A 71 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
/* 80103CF8 00100C38  FC 20 F0 90 */	fmr f1, f30
/* 80103CFC 00100C3C  7F E3 FB 78 */	mr r3, r31
/* 80103D00 00100C40  48 36 A9 91 */	bl PSStartEnemyDownSmokeSE__FPQ24Game9EnemyBasef
.L_80103D04:
/* 80103D04 00100C44  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80103D08 00100C48  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80103D0C 00100C4C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80103D10 00100C50  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80103D14 00100C54  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80103D18 00100C58  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80103D1C 00100C5C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80103D20 00100C60  7C 08 03 A6 */	mtlr r0
/* 80103D24 00100C64  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80103D28 00100C68  4E 80 00 20 */	blr 

.global outWaterCallback__Q24Game9EnemyBaseFv
outWaterCallback__Q24Game9EnemyBaseFv:
/* 80103D2C 00100C6C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80103D30 00100C70  7C 08 02 A6 */	mflr r0
/* 80103D34 00100C74  90 01 00 84 */	stw r0, 0x84(r1)
/* 80103D38 00100C78  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80103D3C 00100C7C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80103D40 00100C80  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80103D44 00100C84  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80103D48 00100C88  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80103D4C 00100C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80103D50 00100C90  7C 7F 1B 78 */	mr r31, r3
/* 80103D54 00100C94  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80103D58 00100C98  7D 89 03 A6 */	mtctr r12
/* 80103D5C 00100C9C  4E 80 04 21 */	bctrl 
/* 80103D60 00100CA0  FF C0 08 90 */	fmr f30, f1
/* 80103D64 00100CA4  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80103D68 00100CA8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80103D6C 00100CAC  40 81 01 04 */	ble .L_80103E70
/* 80103D70 00100CB0  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80103D74 00100CB4  28 03 00 00 */	cmplwi r3, 0
/* 80103D78 00100CB8  41 82 00 30 */	beq .L_80103DA8
/* 80103D7C 00100CBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80103D80 00100CC0  C3 FF 01 94 */	lfs f31, 0x194(r31)
/* 80103D84 00100CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80103D88 00100CC8  7D 89 03 A6 */	mtctr r12
/* 80103D8C 00100CCC  4E 80 04 21 */	bctrl 
/* 80103D90 00100CD0  C0 23 00 00 */	lfs f1, 0(r3)
/* 80103D94 00100CD4  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80103D98 00100CD8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80103D9C 00100CDC  D0 01 00 08 */	stfs f0, 8(r1)
/* 80103DA0 00100CE0  D3 E1 00 10 */	stfs f31, 0x10(r1)
/* 80103DA4 00100CE4  48 00 00 1C */	b .L_80103DC0
.L_80103DA8:
/* 80103DA8 00100CE8  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80103DAC 00100CEC  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80103DB0 00100CF0  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80103DB4 00100CF4  D0 41 00 08 */	stfs f2, 8(r1)
/* 80103DB8 00100CF8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80103DBC 00100CFC  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_80103DC0:
/* 80103DC0 00100D00  80 81 00 08 */	lwz r4, 8(r1)
/* 80103DC4 00100D04  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80103DC8 00100D08  80 E1 00 0C */	lwz r7, 0xc(r1)
/* 80103DCC 00100D0C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80103DD0 00100D10  80 C1 00 10 */	lwz r6, 0x10(r1)
/* 80103DD4 00100D14  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80103DD8 00100D18  90 81 00 14 */	stw r4, 0x14(r1)
/* 80103DDC 00100D1C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 80103DE0 00100D20  39 63 A7 EC */	addi r11, r3, __vt__Q23efx3Arg@l
/* 80103DE4 00100D24  3D 40 80 4B */	lis r10, __vt__Q23efx8ArgScale@ha
/* 80103DE8 00100D28  38 A0 00 00 */	li r5, 0
/* 80103DEC 00100D2C  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80103DF0 00100D30  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80103DF4 00100D34  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 80103DF8 00100D38  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80103DFC 00100D3C  39 00 00 54 */	li r8, 0x54
/* 80103E00 00100D40  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80103E04 00100D44  38 E0 00 55 */	li r7, 0x55
/* 80103E08 00100D48  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80103E0C 00100D4C  38 C0 00 56 */	li r6, 0x56
/* 80103E10 00100D50  90 01 00 34 */	stw r0, 0x34(r1)
/* 80103E14 00100D54  39 24 6A 50 */	addi r9, r4, __vt__Q23efx8TSimple3@l
/* 80103E18 00100D58  39 4A A2 DC */	addi r10, r10, __vt__Q23efx8ArgScale@l
/* 80103E1C 00100D5C  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80103E20 00100D60  91 61 00 20 */	stw r11, 0x20(r1)
/* 80103E24 00100D64  38 61 00 34 */	addi r3, r1, 0x34
/* 80103E28 00100D68  38 81 00 20 */	addi r4, r1, 0x20
/* 80103E2C 00100D6C  91 21 00 34 */	stw r9, 0x34(r1)
/* 80103E30 00100D70  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80103E34 00100D74  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80103E38 00100D78  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80103E3C 00100D7C  91 41 00 20 */	stw r10, 0x20(r1)
/* 80103E40 00100D80  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 80103E44 00100D84  B1 01 00 38 */	sth r8, 0x38(r1)
/* 80103E48 00100D88  B0 E1 00 3A */	sth r7, 0x3a(r1)
/* 80103E4C 00100D8C  B0 C1 00 3C */	sth r6, 0x3c(r1)
/* 80103E50 00100D90  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80103E54 00100D94  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80103E58 00100D98  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80103E5C 00100D9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80103E60 00100DA0  48 2C 49 6D */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80103E64 00100DA4  FC 20 F0 90 */	fmr f1, f30
/* 80103E68 00100DA8  7F E3 FB 78 */	mr r3, r31
/* 80103E6C 00100DAC  48 36 A9 D5 */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
.L_80103E70:
/* 80103E70 00100DB0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80103E74 00100DB4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80103E78 00100DB8  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80103E7C 00100DBC  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80103E80 00100DC0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80103E84 00100DC4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80103E88 00100DC8  7C 08 03 A6 */	mtlr r0
/* 80103E8C 00100DCC  38 21 00 80 */	addi r1, r1, 0x80
/* 80103E90 00100DD0  4E 80 00 20 */	blr 

.global inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox:
/* 80103E94 00100DD4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80103E98 00100DD8  7C 08 02 A6 */	mflr r0
/* 80103E9C 00100DDC  90 01 00 84 */	stw r0, 0x84(r1)
/* 80103EA0 00100DE0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80103EA4 00100DE4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80103EA8 00100DE8  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80103EAC 00100DEC  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80103EB0 00100DF0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80103EB4 00100DF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80103EB8 00100DF8  7C 7F 1B 78 */	mr r31, r3
/* 80103EBC 00100DFC  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80103EC0 00100E00  7D 89 03 A6 */	mtctr r12
/* 80103EC4 00100E04  4E 80 04 21 */	bctrl 
/* 80103EC8 00100E08  FF C0 08 90 */	fmr f30, f1
/* 80103ECC 00100E0C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80103ED0 00100E10  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80103ED4 00100E14  40 81 01 04 */	ble .L_80103FD8
/* 80103ED8 00100E18  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80103EDC 00100E1C  28 03 00 00 */	cmplwi r3, 0
/* 80103EE0 00100E20  41 82 00 30 */	beq .L_80103F10
/* 80103EE4 00100E24  81 83 00 00 */	lwz r12, 0(r3)
/* 80103EE8 00100E28  C3 FF 01 94 */	lfs f31, 0x194(r31)
/* 80103EEC 00100E2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80103EF0 00100E30  7D 89 03 A6 */	mtctr r12
/* 80103EF4 00100E34  4E 80 04 21 */	bctrl 
/* 80103EF8 00100E38  C0 23 00 00 */	lfs f1, 0(r3)
/* 80103EFC 00100E3C  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80103F00 00100E40  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80103F04 00100E44  D0 01 00 08 */	stfs f0, 8(r1)
/* 80103F08 00100E48  D3 E1 00 10 */	stfs f31, 0x10(r1)
/* 80103F0C 00100E4C  48 00 00 1C */	b .L_80103F28
.L_80103F10:
/* 80103F10 00100E50  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80103F14 00100E54  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80103F18 00100E58  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80103F1C 00100E5C  D0 41 00 08 */	stfs f2, 8(r1)
/* 80103F20 00100E60  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80103F24 00100E64  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_80103F28:
/* 80103F28 00100E68  80 81 00 08 */	lwz r4, 8(r1)
/* 80103F2C 00100E6C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80103F30 00100E70  80 E1 00 0C */	lwz r7, 0xc(r1)
/* 80103F34 00100E74  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80103F38 00100E78  80 C1 00 10 */	lwz r6, 0x10(r1)
/* 80103F3C 00100E7C  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80103F40 00100E80  90 81 00 14 */	stw r4, 0x14(r1)
/* 80103F44 00100E84  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 80103F48 00100E88  39 63 A7 EC */	addi r11, r3, __vt__Q23efx3Arg@l
/* 80103F4C 00100E8C  3D 40 80 4B */	lis r10, __vt__Q23efx8ArgScale@ha
/* 80103F50 00100E90  38 A0 00 00 */	li r5, 0
/* 80103F54 00100E94  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80103F58 00100E98  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80103F5C 00100E9C  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 80103F60 00100EA0  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80103F64 00100EA4  39 00 00 54 */	li r8, 0x54
/* 80103F68 00100EA8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80103F6C 00100EAC  38 E0 00 55 */	li r7, 0x55
/* 80103F70 00100EB0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80103F74 00100EB4  38 C0 00 56 */	li r6, 0x56
/* 80103F78 00100EB8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80103F7C 00100EBC  39 24 6A 50 */	addi r9, r4, __vt__Q23efx8TSimple3@l
/* 80103F80 00100EC0  39 4A A2 DC */	addi r10, r10, __vt__Q23efx8ArgScale@l
/* 80103F84 00100EC4  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80103F88 00100EC8  91 61 00 20 */	stw r11, 0x20(r1)
/* 80103F8C 00100ECC  38 61 00 34 */	addi r3, r1, 0x34
/* 80103F90 00100ED0  38 81 00 20 */	addi r4, r1, 0x20
/* 80103F94 00100ED4  91 21 00 34 */	stw r9, 0x34(r1)
/* 80103F98 00100ED8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80103F9C 00100EDC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80103FA0 00100EE0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80103FA4 00100EE4  91 41 00 20 */	stw r10, 0x20(r1)
/* 80103FA8 00100EE8  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 80103FAC 00100EEC  B1 01 00 38 */	sth r8, 0x38(r1)
/* 80103FB0 00100EF0  B0 E1 00 3A */	sth r7, 0x3a(r1)
/* 80103FB4 00100EF4  B0 C1 00 3C */	sth r6, 0x3c(r1)
/* 80103FB8 00100EF8  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80103FBC 00100EFC  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80103FC0 00100F00  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80103FC4 00100F04  90 01 00 34 */	stw r0, 0x34(r1)
/* 80103FC8 00100F08  48 2C 48 05 */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80103FCC 00100F0C  FC 20 F0 90 */	fmr f1, f30
/* 80103FD0 00100F10  7F E3 FB 78 */	mr r3, r31
/* 80103FD4 00100F14  48 36 A8 6D */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
.L_80103FD8:
/* 80103FD8 00100F18  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80103FDC 00100F1C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80103FE0 00100F20  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80103FE4 00100F24  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80103FE8 00100F28  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80103FEC 00100F2C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80103FF0 00100F30  7C 08 03 A6 */	mtlr r0
/* 80103FF4 00100F34  38 21 00 80 */	addi r1, r1, 0x80
/* 80103FF8 00100F38  4E 80 00 20 */	blr 

.global finishDropping__Q24Game9EnemyBaseFb
finishDropping__Q24Game9EnemyBaseFb:
/* 80103FFC 00100F3C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80104000 00100F40  7C 08 02 A6 */	mflr r0
/* 80104004 00100F44  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80104008 00100F48  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8010400C 00100F4C  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80104010 00100F50  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80104014 00100F54  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80104018 00100F58  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8010401C 00100F5C  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80104020 00100F60  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 80104024 00100F64  7C 7F 1B 78 */	mr r31, r3
/* 80104028 00100F68  7C 9E 23 78 */	mr r30, r4
/* 8010402C 00100F6C  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80104030 00100F70  41 82 02 30 */	beq .L_80104260
/* 80104034 00100F74  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104038 00100F78  C0 42 94 64 */	lfs f2, lbl_805177C4@sda21(r2)
/* 8010403C 00100F7C  48 00 1F F1 */	bl addDamage__Q24Game9EnemyBaseFff
/* 80104040 00100F80  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104044 00100F84  7F E3 FB 78 */	mr r3, r31
/* 80104048 00100F88  38 81 00 4C */	addi r4, r1, 0x4c
/* 8010404C 00100F8C  64 00 00 08 */	oris r0, r0, 8
/* 80104050 00100F90  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80104054 00100F94  81 9F 00 00 */	lwz r12, 0(r31)
/* 80104058 00100F98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8010405C 00100F9C  7D 89 03 A6 */	mtctr r12
/* 80104060 00100FA0  4E 80 04 21 */	bctrl 
/* 80104064 00100FA4  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 80104068 00100FA8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8010406C 00100FAC  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80104070 00100FB0  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80104074 00100FB4  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80104078 00100FB8  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8010407C 00100FBC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80104080 00100FC0  41 82 00 28 */	beq .L_801040A8
/* 80104084 00100FC4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80104088 00100FC8  28 03 00 00 */	cmplwi r3, 0
/* 8010408C 00100FCC  41 82 00 1C */	beq .L_801040A8
/* 80104090 00100FD0  81 83 00 04 */	lwz r12, 4(r3)
/* 80104094 00100FD4  38 81 00 40 */	addi r4, r1, 0x40
/* 80104098 00100FD8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8010409C 00100FDC  7D 89 03 A6 */	mtctr r12
/* 801040A0 00100FE0  4E 80 04 21 */	bctrl 
/* 801040A4 00100FE4  D0 21 00 44 */	stfs f1, 0x44(r1)
.L_801040A8:
/* 801040A8 00100FE8  7F E3 FB 78 */	mr r3, r31
/* 801040AC 00100FEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801040B0 00100FF0  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 801040B4 00100FF4  7D 89 03 A6 */	mtctr r12
/* 801040B8 00100FF8  4E 80 04 21 */	bctrl 
/* 801040BC 00100FFC  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 801040C0 00101000  FF E0 08 90 */	fmr f31, f1
/* 801040C4 00101004  28 03 00 00 */	cmplwi r3, 0
/* 801040C8 00101008  41 82 01 00 */	beq .L_801041C8
/* 801040CC 0010100C  41 82 00 30 */	beq .L_801040FC
/* 801040D0 00101010  81 83 00 00 */	lwz r12, 0(r3)
/* 801040D4 00101014  C3 C1 00 48 */	lfs f30, 0x48(r1)
/* 801040D8 00101018  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801040DC 0010101C  7D 89 03 A6 */	mtctr r12
/* 801040E0 00101020  4E 80 04 21 */	bctrl 
/* 801040E4 00101024  C0 23 00 00 */	lfs f1, 0(r3)
/* 801040E8 00101028  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 801040EC 0010102C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801040F0 00101030  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801040F4 00101034  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 801040F8 00101038  48 00 00 1C */	b .L_80104114
.L_801040FC:
/* 801040FC 0010103C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80104100 00101040  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 80104104 00101044  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80104108 00101048  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8010410C 0010104C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80104110 00101050  D0 01 00 30 */	stfs f0, 0x30(r1)
.L_80104114:
/* 80104114 00101054  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80104118 00101058  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8010411C 0010105C  80 E1 00 2C */	lwz r7, 0x2c(r1)
/* 80104120 00101060  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80104124 00101064  80 C1 00 30 */	lwz r6, 0x30(r1)
/* 80104128 00101068  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8010412C 0010106C  90 81 00 34 */	stw r4, 0x34(r1)
/* 80104130 00101070  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 80104134 00101074  39 63 A7 EC */	addi r11, r3, __vt__Q23efx3Arg@l
/* 80104138 00101078  3D 40 80 4B */	lis r10, __vt__Q23efx8ArgScale@ha
/* 8010413C 0010107C  38 A0 00 00 */	li r5, 0
/* 80104140 00101080  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80104144 00101084  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80104148 00101088  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 8010414C 0010108C  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80104150 00101090  39 00 00 54 */	li r8, 0x54
/* 80104154 00101094  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80104158 00101098  38 E0 00 55 */	li r7, 0x55
/* 8010415C 0010109C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80104160 001010A0  38 C0 00 56 */	li r6, 0x56
/* 80104164 001010A4  90 01 00 70 */	stw r0, 0x70(r1)
/* 80104168 001010A8  39 24 6A 50 */	addi r9, r4, __vt__Q23efx8TSimple3@l
/* 8010416C 001010AC  39 4A A2 DC */	addi r10, r10, __vt__Q23efx8ArgScale@l
/* 80104170 001010B0  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80104174 001010B4  91 61 00 5C */	stw r11, 0x5c(r1)
/* 80104178 001010B8  38 61 00 70 */	addi r3, r1, 0x70
/* 8010417C 001010BC  38 81 00 5C */	addi r4, r1, 0x5c
/* 80104180 001010C0  91 21 00 70 */	stw r9, 0x70(r1)
/* 80104184 001010C4  D0 41 00 60 */	stfs f2, 0x60(r1)
/* 80104188 001010C8  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8010418C 001010CC  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80104190 001010D0  91 41 00 5C */	stw r10, 0x5c(r1)
/* 80104194 001010D4  D3 E1 00 6C */	stfs f31, 0x6c(r1)
/* 80104198 001010D8  B1 01 00 74 */	sth r8, 0x74(r1)
/* 8010419C 001010DC  B0 E1 00 76 */	sth r7, 0x76(r1)
/* 801041A0 001010E0  B0 C1 00 78 */	sth r6, 0x78(r1)
/* 801041A4 001010E4  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 801041A8 001010E8  90 A1 00 80 */	stw r5, 0x80(r1)
/* 801041AC 001010EC  90 A1 00 84 */	stw r5, 0x84(r1)
/* 801041B0 001010F0  90 01 00 70 */	stw r0, 0x70(r1)
/* 801041B4 001010F4  48 2C 46 19 */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 801041B8 001010F8  FC 20 F8 90 */	fmr f1, f31
/* 801041BC 001010FC  7F E3 FB 78 */	mr r3, r31
/* 801041C0 00101100  48 36 A6 81 */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
/* 801041C4 00101104  48 00 00 80 */	b .L_80104244
.L_801041C8:
/* 801041C8 00101108  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801041CC 0010110C  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 801041D0 00101110  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801041D4 00101114  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801041D8 00101118  90 01 00 18 */	stw r0, 0x18(r1)
/* 801041DC 0010111C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801041E0 00101120  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 801041E4 00101124  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801041E8 00101128  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801041EC 0010112C  3C 60 80 4F */	lis r3, __vt__Q23efx15TEnemyDownSmoke@ha
/* 801041F0 00101130  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 801041F4 00101134  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 801041F8 00101138  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 801041FC 0010113C  38 C0 00 53 */	li r6, 0x53
/* 80104200 00101140  38 A0 00 00 */	li r5, 0
/* 80104204 00101144  90 01 00 18 */	stw r0, 0x18(r1)
/* 80104208 00101148  38 03 86 10 */	addi r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
/* 8010420C 0010114C  38 61 00 18 */	addi r3, r1, 0x18
/* 80104210 00101150  90 81 00 08 */	stw r4, 8(r1)
/* 80104214 00101154  38 81 00 08 */	addi r4, r1, 8
/* 80104218 00101158  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8010421C 0010115C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80104220 00101160  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80104224 00101164  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 80104228 00101168  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8010422C 0010116C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80104230 00101170  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 80104234 00101174  48 2C 45 31 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
/* 80104238 00101178  FC 20 F8 90 */	fmr f1, f31
/* 8010423C 0010117C  7F E3 FB 78 */	mr r3, r31
/* 80104240 00101180  48 36 A4 51 */	bl PSStartEnemyDownSmokeSE__FPQ24Game9EnemyBasef
.L_80104244:
/* 80104244 00101184  80 1F 01 E4 */	lwz r0, 0x1e4(r31)
/* 80104248 00101188  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 8010424C 0010118C  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80104250 00101190  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80104254 00101194  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80104258 00101198  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8010425C 0010119C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_80104260:
/* 80104260 001011A0  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80104264 001011A4  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80104268 001011A8  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8010426C 001011AC  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80104270 001011B0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80104274 001011B4  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80104278 001011B8  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8010427C 001011BC  7C 08 03 A6 */	mtlr r0
/* 80104280 001011C0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80104284 001011C4  4E 80 00 20 */	blr 

.global bounceProcedure__Q24Game9EnemyBaseFPQ23Sys8Triangle
bounceProcedure__Q24Game9EnemyBaseFPQ23Sys8Triangle:
/* 80104288 001011C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010428C 001011CC  7C 08 02 A6 */	mflr r0
/* 80104290 001011D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104294 001011D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80104298 001011D8  7C 9F 23 78 */	mr r31, r4
/* 8010429C 001011DC  93 C1 00 08 */	stw r30, 8(r1)
/* 801042A0 001011E0  7C 7E 1B 78 */	mr r30, r3
/* 801042A4 001011E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801042A8 001011E8  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 801042AC 001011EC  7D 89 03 A6 */	mtctr r12
/* 801042B0 001011F0  4E 80 04 21 */	bctrl 
/* 801042B4 001011F4  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 801042B8 001011F8  7F C3 F3 78 */	mr r3, r30
/* 801042BC 001011FC  38 80 00 01 */	li r4, 1
/* 801042C0 00101200  54 00 00 C2 */	rlwinm r0, r0, 0, 3, 1
/* 801042C4 00101204  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 801042C8 00101208  4B FF FD 35 */	bl finishDropping__Q24Game9EnemyBaseFb
/* 801042CC 0010120C  7F C3 F3 78 */	mr r3, r30
/* 801042D0 00101210  48 00 37 B9 */	bl resetDroppingMassZero__Q24Game9EnemyBaseFv
/* 801042D4 00101214  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 801042D8 00101218  7F C4 F3 78 */	mr r4, r30
/* 801042DC 0010121C  7F E5 FB 78 */	mr r5, r31
/* 801042E0 00101220  81 83 00 00 */	lwz r12, 0(r3)
/* 801042E4 00101224  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801042E8 00101228  7D 89 03 A6 */	mtctr r12
/* 801042EC 0010122C  4E 80 04 21 */	bctrl 
/* 801042F0 00101230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801042F4 00101234  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801042F8 00101238  83 C1 00 08 */	lwz r30, 8(r1)
/* 801042FC 0010123C  7C 08 03 A6 */	mtlr r0
/* 80104300 00101240  38 21 00 10 */	addi r1, r1, 0x10
/* 80104304 00101244  4E 80 00 20 */	blr 

.global bounceProcedure__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ23Sys8Triangle
bounceProcedure__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ23Sys8Triangle:
/* 80104308 00101248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010430C 0010124C  7C 08 02 A6 */	mflr r0
/* 80104310 00101250  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104314 00101254  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80104318 00101258  81 83 00 00 */	lwz r12, 0(r3)
/* 8010431C 0010125C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80104320 00101260  7D 89 03 A6 */	mtctr r12
/* 80104324 00101264  4E 80 04 21 */	bctrl 
/* 80104328 00101268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010432C 0010126C  7C 08 03 A6 */	mtlr r0
/* 80104330 00101270  38 21 00 10 */	addi r1, r1, 0x10
/* 80104334 00101274  4E 80 00 20 */	blr 

.global bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle:
/* 80104338 00101278  4E 80 00 20 */	blr 

.global bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle:
/* 8010433C 0010127C  4E 80 00 20 */	blr 

.global collisionMapAndPlat__Q24Game9EnemyBaseFf
collisionMapAndPlat__Q24Game9EnemyBaseFf:
/* 80104340 00101280  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 80104344 00101284  7C 08 02 A6 */	mflr r0
/* 80104348 00101288  90 01 01 84 */	stw r0, 0x184(r1)
/* 8010434C 0010128C  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 80104350 00101290  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 80104354 00101294  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 80104358 00101298  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 8010435C 0010129C  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 80104360 001012A0  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 80104364 001012A4  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 80104368 001012A8  F3 81 01 48 */	psq_st f28, 328(r1), 0, qr0
/* 8010436C 001012AC  DB 61 01 30 */	stfd f27, 0x130(r1)
/* 80104370 001012B0  F3 61 01 38 */	psq_st f27, 312(r1), 0, qr0
/* 80104374 001012B4  93 E1 01 2C */	stw r31, 0x12c(r1)
/* 80104378 001012B8  7C 7F 1B 78 */	mr r31, r3
/* 8010437C 001012BC  FF C0 08 90 */	fmr f30, f1
/* 80104380 001012C0  48 09 B1 F5 */	bl isStickTo__Q24Game8CreatureFv
/* 80104384 001012C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80104388 001012C8  40 82 05 04 */	bne .L_8010488C
/* 8010438C 001012CC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104390 001012D0  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80104394 001012D4  40 82 00 20 */	bne .L_801043B4
/* 80104398 001012D8  7F E3 FB 78 */	mr r3, r31
/* 8010439C 001012DC  FC 20 F0 90 */	fmr f1, f30
/* 801043A0 001012E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801043A4 001012E4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801043A8 001012E8  7D 89 03 A6 */	mtctr r12
/* 801043AC 001012EC  4E 80 04 21 */	bctrl 
/* 801043B0 001012F0  48 00 00 28 */	b .L_801043D8
.L_801043B4:
/* 801043B4 001012F4  7F E3 FB 78 */	mr r3, r31
/* 801043B8 001012F8  FC 20 F0 90 */	fmr f1, f30
/* 801043BC 001012FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801043C0 00101300  81 8C 01 F8 */	lwz r12, 0x1f8(r12)
/* 801043C4 00101304  7D 89 03 A6 */	mtctr r12
/* 801043C8 00101308  4E 80 04 21 */	bctrl 
/* 801043CC 0010130C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801043D0 00101310  54 00 00 C2 */	rlwinm r0, r0, 0, 3, 1
/* 801043D4 00101314  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_801043D8:
/* 801043D8 00101318  7F E4 FB 78 */	mr r4, r31
/* 801043DC 0010131C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801043E0 00101320  81 9F 00 00 */	lwz r12, 0(r31)
/* 801043E4 00101324  38 61 00 34 */	addi r3, r1, 0x34
/* 801043E8 00101328  C3 E5 01 A4 */	lfs f31, 0x1a4(r5)
/* 801043EC 0010132C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801043F0 00101330  7D 89 03 A6 */	mtctr r12
/* 801043F4 00101334  4E 80 04 21 */	bctrl 
/* 801043F8 00101338  7F E4 FB 78 */	mr r4, r31
/* 801043FC 0010133C  38 61 00 28 */	addi r3, r1, 0x28
/* 80104400 00101340  81 9F 00 00 */	lwz r12, 0(r31)
/* 80104404 00101344  C3 A1 00 34 */	lfs f29, 0x34(r1)
/* 80104408 00101348  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 8010440C 0010134C  C3 81 00 38 */	lfs f28, 0x38(r1)
/* 80104410 00101350  C3 61 00 3C */	lfs f27, 0x3c(r1)
/* 80104414 00101354  7D 89 03 A6 */	mtctr r12
/* 80104418 00101358  4E 80 04 21 */	bctrl 
/* 8010441C 0010135C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80104420 00101360  38 60 00 00 */	li r3, 0
/* 80104424 00101364  D0 1F 02 40 */	stfs f0, 0x240(r31)
/* 80104428 00101368  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8010442C 0010136C  D0 1F 02 44 */	stfs f0, 0x244(r31)
/* 80104430 00101370  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80104434 00101374  D0 1F 02 48 */	stfs f0, 0x248(r31)
/* 80104438 00101378  C0 1F 02 44 */	lfs f0, 0x244(r31)
/* 8010443C 0010137C  C0 3F 02 40 */	lfs f1, 0x240(r31)
/* 80104440 00101380  EF 9C 00 2A */	fadds f28, f28, f0
/* 80104444 00101384  C0 1F 02 48 */	lfs f0, 0x248(r31)
/* 80104448 00101388  EF BD 08 2A */	fadds f29, f29, f1
/* 8010444C 0010138C  EF 7B 00 2A */	fadds f27, f27, f0
/* 80104450 00101390  D3 E1 00 64 */	stfs f31, 0x64(r1)
/* 80104454 00101394  EF 9C F8 2A */	fadds f28, f28, f31
/* 80104458 00101398  D3 A1 00 58 */	stfs f29, 0x58(r1)
/* 8010445C 0010139C  D3 81 00 5C */	stfs f28, 0x5c(r1)
/* 80104460 001013A0  D3 61 00 60 */	stfs f27, 0x60(r1)
/* 80104464 001013A4  80 9F 01 E4 */	lwz r4, 0x1e4(r31)
/* 80104468 001013A8  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 8010446C 001013AC  40 82 00 0C */	bne .L_80104478
/* 80104470 001013B0  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 80104474 001013B4  41 82 00 08 */	beq .L_8010447C
.L_80104478:
/* 80104478 001013B8  38 60 00 01 */	li r3, 1
.L_8010447C:
/* 8010447C 001013BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80104480 001013C0  41 82 00 0C */	beq .L_8010448C
/* 80104484 001013C4  C1 02 94 50 */	lfs f8, lbl_805177B0@sda21(r2)
/* 80104488 001013C8  48 00 00 0C */	b .L_80104494
.L_8010448C:
/* 8010448C 001013CC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80104490 001013D0  C1 03 00 4C */	lfs f8, 0x4c(r3)
.L_80104494:
/* 80104494 001013D4  C0 C2 94 50 */	lfs f6, lbl_805177B0@sda21(r2)
/* 80104498 001013D8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8010449C 001013DC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801044A0 001013E0  38 A0 00 00 */	li r5, 0
/* 801044A4 001013E4  D0 DF 01 20 */	stfs f6, 0x120(r31)
/* 801044A8 001013E8  38 E1 00 58 */	addi r7, r1, 0x58
/* 801044AC 001013EC  C0 02 94 CC */	lfs f0, lbl_8051782C@sda21(r2)
/* 801044B0 001013F0  38 C1 00 4C */	addi r6, r1, 0x4c
/* 801044B4 001013F4  C0 9F 01 D0 */	lfs f4, 0x1d0(r31)
/* 801044B8 001013F8  38 00 FF FF */	li r0, -1
/* 801044BC 001013FC  C0 7F 01 24 */	lfs f3, 0x124(r31)
/* 801044C0 00101400  FC 20 F0 90 */	fmr f1, f30
/* 801044C4 00101404  C0 BF 01 CC */	lfs f5, 0x1cc(r31)
/* 801044C8 00101408  38 81 00 68 */	addi r4, r1, 0x68
/* 801044CC 0010140C  C0 5F 01 20 */	lfs f2, 0x120(r31)
/* 801044D0 00101410  EC E4 18 2A */	fadds f7, f4, f3
/* 801044D4 00101414  C0 9F 01 C8 */	lfs f4, 0x1c8(r31)
/* 801044D8 00101418  C0 7F 01 1C */	lfs f3, 0x11c(r31)
/* 801044DC 0010141C  EC A5 10 2A */	fadds f5, f5, f2
/* 801044E0 00101420  C0 43 08 00 */	lfs f2, 0x800(r3)
/* 801044E4 00101424  EC 64 18 2A */	fadds f3, f4, f3
/* 801044E8 00101428  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 801044EC 0010142C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801044F0 00101430  D0 A1 00 50 */	stfs f5, 0x50(r1)
/* 801044F4 00101434  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 801044F8 00101438  D0 E1 00 54 */	stfs f7, 0x54(r1)
/* 801044FC 0010143C  90 E1 00 68 */	stw r7, 0x68(r1)
/* 80104500 00101440  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80104504 00101444  D1 01 00 70 */	stfs f8, 0x70(r1)
/* 80104508 00101448  D0 C1 00 74 */	stfs f6, 0x74(r1)
/* 8010450C 0010144C  90 A1 00 78 */	stw r5, 0x78(r1)
/* 80104510 00101450  90 A1 00 AC */	stw r5, 0xac(r1)
/* 80104514 00101454  98 A1 00 DC */	stb r5, 0xdc(r1)
/* 80104518 00101458  98 A1 00 81 */	stb r5, 0x81(r1)
/* 8010451C 0010145C  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80104520 00101460  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 80104524 00101464  98 A1 00 F8 */	stb r5, 0xf8(r1)
/* 80104528 00101468  90 A1 00 FC */	stw r5, 0xfc(r1)
/* 8010452C 0010146C  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 80104530 00101470  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80104534 00101474  90 01 01 00 */	stw r0, 0x100(r1)
/* 80104538 00101478  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 8010453C 0010147C  98 A1 00 82 */	stb r5, 0x82(r1)
/* 80104540 00101480  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80104544 00101484  81 83 00 04 */	lwz r12, 4(r3)
/* 80104548 00101488  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8010454C 0010148C  7D 89 03 A6 */	mtctr r12
/* 80104550 00101490  4E 80 04 21 */	bctrl 
/* 80104554 00101494  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80104558 00101498  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 8010455C 0010149C  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80104560 001014A0  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80104564 001014A4  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80104568 001014A8  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 8010456C 001014AC  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80104570 001014B0  C0 7F 01 C8 */	lfs f3, 0x1c8(r31)
/* 80104574 001014B4  C0 5F 01 CC */	lfs f2, 0x1cc(r31)
/* 80104578 001014B8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8010457C 001014BC  C0 9F 01 D0 */	lfs f4, 0x1d0(r31)
/* 80104580 001014C0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80104584 001014C4  EC 84 01 32 */	fmuls f4, f4, f4
/* 80104588 001014C8  EC 00 10 2A */	fadds f0, f0, f2
/* 8010458C 001014CC  EC 04 00 2A */	fadds f0, f4, f0
/* 80104590 001014D0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80104594 001014D4  40 81 00 20 */	ble .L_801045B4
/* 80104598 001014D8  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8010459C 001014DC  EC 84 00 2A */	fadds f4, f4, f0
/* 801045A0 001014E0  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 801045A4 001014E4  40 81 00 14 */	ble .L_801045B8
/* 801045A8 001014E8  FC 00 20 34 */	frsqrte f0, f4
/* 801045AC 001014EC  EC 80 01 32 */	fmuls f4, f0, f4
/* 801045B0 001014F0  48 00 00 08 */	b .L_801045B8
.L_801045B4:
/* 801045B4 001014F4  FC 80 08 90 */	fmr f4, f1
.L_801045B8:
/* 801045B8 001014F8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801045BC 001014FC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801045C0 00101500  40 81 00 34 */	ble .L_801045F4
/* 801045C4 00101504  C0 22 94 64 */	lfs f1, lbl_805177C4@sda21(r2)
/* 801045C8 00101508  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 801045CC 0010150C  EC 21 20 24 */	fdivs f1, f1, f4
/* 801045D0 00101510  EC 00 00 72 */	fmuls f0, f0, f1
/* 801045D4 00101514  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 801045D8 00101518  C0 1F 01 CC */	lfs f0, 0x1cc(r31)
/* 801045DC 0010151C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801045E0 00101520  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 801045E4 00101524  C0 1F 01 D0 */	lfs f0, 0x1d0(r31)
/* 801045E8 00101528  EC 00 00 72 */	fmuls f0, f0, f1
/* 801045EC 0010152C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801045F0 00101530  48 00 00 08 */	b .L_801045F8
.L_801045F4:
/* 801045F4 00101534  FC 80 00 90 */	fmr f4, f0
.L_801045F8:
/* 801045F8 00101538  C0 5F 01 1C */	lfs f2, 0x11c(r31)
/* 801045FC 0010153C  C0 3F 01 20 */	lfs f1, 0x120(r31)
/* 80104600 00101540  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80104604 00101544  C0 7F 01 24 */	lfs f3, 0x124(r31)
/* 80104608 00101548  EC A1 00 72 */	fmuls f5, f1, f1
/* 8010460C 0010154C  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104610 00101550  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80104614 00101554  EC 00 28 2A */	fadds f0, f0, f5
/* 80104618 00101558  EC 03 00 2A */	fadds f0, f3, f0
/* 8010461C 0010155C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80104620 00101560  40 81 00 20 */	ble .L_80104640
/* 80104624 00101564  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 80104628 00101568  EC 03 00 2A */	fadds f0, f3, f0
/* 8010462C 0010156C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80104630 00101570  40 81 00 14 */	ble .L_80104644
/* 80104634 00101574  FC 20 00 34 */	frsqrte f1, f0
/* 80104638 00101578  EC 01 00 32 */	fmuls f0, f1, f0
/* 8010463C 0010157C  48 00 00 08 */	b .L_80104644
.L_80104640:
/* 80104640 00101580  FC 00 08 90 */	fmr f0, f1
.L_80104644:
/* 80104644 00101584  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80104648 00101588  40 81 00 40 */	ble .L_80104688
/* 8010464C 0010158C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80104650 00101590  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 80104654 00101594  C0 5F 01 CC */	lfs f2, 0x1cc(r31)
/* 80104658 00101598  C0 7F 01 D0 */	lfs f3, 0x1d0(r31)
/* 8010465C 0010159C  EC 20 01 32 */	fmuls f1, f0, f4
/* 80104660 001015A0  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80104664 001015A4  EC 42 01 32 */	fmuls f2, f2, f4
/* 80104668 001015A8  EC 63 01 32 */	fmuls f3, f3, f4
/* 8010466C 001015AC  D0 3F 01 C8 */	stfs f1, 0x1c8(r31)
/* 80104670 001015B0  D0 5F 01 CC */	stfs f2, 0x1cc(r31)
/* 80104674 001015B4  D0 7F 01 D0 */	stfs f3, 0x1d0(r31)
/* 80104678 001015B8  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8010467C 001015BC  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 80104680 001015C0  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 80104684 001015C4  48 00 00 38 */	b .L_801046BC
.L_80104688:
/* 80104688 001015C8  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 8010468C 001015CC  C0 5F 01 CC */	lfs f2, 0x1cc(r31)
/* 80104690 001015D0  EC 20 01 32 */	fmuls f1, f0, f4
/* 80104694 001015D4  C0 7F 01 D0 */	lfs f3, 0x1d0(r31)
/* 80104698 001015D8  EC 42 01 32 */	fmuls f2, f2, f4
/* 8010469C 001015DC  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801046A0 001015E0  EC 63 01 32 */	fmuls f3, f3, f4
/* 801046A4 001015E4  D0 3F 01 C8 */	stfs f1, 0x1c8(r31)
/* 801046A8 001015E8  D0 5F 01 CC */	stfs f2, 0x1cc(r31)
/* 801046AC 001015EC  D0 7F 01 D0 */	stfs f3, 0x1d0(r31)
/* 801046B0 001015F0  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 801046B4 001015F4  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 801046B8 001015F8  D0 1F 01 24 */	stfs f0, 0x124(r31)
.L_801046BC:
/* 801046BC 001015FC  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 801046C0 00101600  28 00 00 00 */	cmplwi r0, 0
/* 801046C4 00101604  40 82 00 18 */	bne .L_801046DC
/* 801046C8 00101608  80 81 00 AC */	lwz r4, 0xac(r1)
/* 801046CC 0010160C  28 04 00 00 */	cmplwi r4, 0
/* 801046D0 00101610  41 82 00 0C */	beq .L_801046DC
/* 801046D4 00101614  7F E3 FB 78 */	mr r3, r31
/* 801046D8 00101618  4B FF FB B1 */	bl bounceProcedure__Q24Game9EnemyBaseFPQ23Sys8Triangle
.L_801046DC:
/* 801046DC 0010161C  80 01 00 AC */	lwz r0, 0xac(r1)
/* 801046E0 00101620  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 801046E4 00101624  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 801046E8 00101628  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 801046EC 0010162C  C0 01 00 BC */	lfs f0, 0xbc(r1)
/* 801046F0 00101630  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 801046F4 00101634  C0 01 00 C0 */	lfs f0, 0xc0(r1)
/* 801046F8 00101638  D0 1F 00 D4 */	stfs f0, 0xd4(r31)
/* 801046FC 0010163C  80 1F 02 88 */	lwz r0, 0x288(r31)
/* 80104700 00101640  28 00 00 00 */	cmplwi r0, 0
/* 80104704 00101644  40 82 00 28 */	bne .L_8010472C
/* 80104708 00101648  80 01 00 B0 */	lwz r0, 0xb0(r1)
/* 8010470C 0010164C  28 00 00 00 */	cmplwi r0, 0
/* 80104710 00101650  41 82 00 1C */	beq .L_8010472C
/* 80104714 00101654  7F E3 FB 78 */	mr r3, r31
/* 80104718 00101658  38 81 00 68 */	addi r4, r1, 0x68
/* 8010471C 0010165C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80104720 00101660  81 8C 02 E8 */	lwz r12, 0x2e8(r12)
/* 80104724 00101664  7D 89 03 A6 */	mtctr r12
/* 80104728 00101668  4E 80 04 21 */	bctrl 
.L_8010472C:
/* 8010472C 0010166C  80 01 00 B0 */	lwz r0, 0xb0(r1)
/* 80104730 00101670  90 1F 02 88 */	stw r0, 0x288(r31)
/* 80104734 00101674  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 80104738 00101678  28 03 00 00 */	cmplwi r3, 0
/* 8010473C 0010167C  41 82 00 9C */	beq .L_801047D8
/* 80104740 00101680  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104744 00101684  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 80104748 00101688  41 82 00 90 */	beq .L_801047D8
/* 8010474C 0010168C  38 1F 01 C8 */	addi r0, r31, 0x1c8
/* 80104750 00101690  FC 20 F0 90 */	fmr f1, f30
/* 80104754 00101694  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80104758 00101698  38 81 00 68 */	addi r4, r1, 0x68
/* 8010475C 0010169C  48 0C 14 5D */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
/* 80104760 001016A0  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80104764 001016A4  28 00 00 00 */	cmplwi r0, 0
/* 80104768 001016A8  40 82 00 38 */	bne .L_801047A0
/* 8010476C 001016AC  80 81 00 AC */	lwz r4, 0xac(r1)
/* 80104770 001016B0  28 04 00 00 */	cmplwi r4, 0
/* 80104774 001016B4  41 82 00 0C */	beq .L_80104780
/* 80104778 001016B8  7F E3 FB 78 */	mr r3, r31
/* 8010477C 001016BC  4B FF FB 0D */	bl bounceProcedure__Q24Game9EnemyBaseFPQ23Sys8Triangle
.L_80104780:
/* 80104780 001016C0  80 01 00 AC */	lwz r0, 0xac(r1)
/* 80104784 001016C4  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 80104788 001016C8  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 8010478C 001016CC  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 80104790 001016D0  C0 01 00 BC */	lfs f0, 0xbc(r1)
/* 80104794 001016D4  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 80104798 001016D8  C0 01 00 C0 */	lfs f0, 0xc0(r1)
/* 8010479C 001016DC  D0 1F 00 D4 */	stfs f0, 0xd4(r31)
.L_801047A0:
/* 801047A0 001016E0  80 1F 02 88 */	lwz r0, 0x288(r31)
/* 801047A4 001016E4  28 00 00 00 */	cmplwi r0, 0
/* 801047A8 001016E8  40 82 00 28 */	bne .L_801047D0
/* 801047AC 001016EC  80 01 00 B0 */	lwz r0, 0xb0(r1)
/* 801047B0 001016F0  28 00 00 00 */	cmplwi r0, 0
/* 801047B4 001016F4  41 82 00 1C */	beq .L_801047D0
/* 801047B8 001016F8  7F E3 FB 78 */	mr r3, r31
/* 801047BC 001016FC  38 81 00 68 */	addi r4, r1, 0x68
/* 801047C0 00101700  81 9F 00 00 */	lwz r12, 0(r31)
/* 801047C4 00101704  81 8C 02 E8 */	lwz r12, 0x2e8(r12)
/* 801047C8 00101708  7D 89 03 A6 */	mtctr r12
/* 801047CC 0010170C  4E 80 04 21 */	bctrl 
.L_801047D0:
/* 801047D0 00101710  80 01 00 B0 */	lwz r0, 0xb0(r1)
/* 801047D4 00101714  90 1F 02 88 */	stw r0, 0x288(r31)
.L_801047D8:
/* 801047D8 00101718  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801047DC 0010171C  81 83 00 04 */	lwz r12, 4(r3)
/* 801047E0 00101720  81 8C 00 08 */	lwz r12, 8(r12)
/* 801047E4 00101724  7D 89 03 A6 */	mtctr r12
/* 801047E8 00101728  4E 80 04 21 */	bctrl 
/* 801047EC 0010172C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801047F0 00101730  41 82 00 1C */	beq .L_8010480C
/* 801047F4 00101734  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801047F8 00101738  38 81 00 58 */	addi r4, r1, 0x58
/* 801047FC 0010173C  81 83 00 04 */	lwz r12, 4(r3)
/* 80104800 00101740  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80104804 00101744  7D 89 03 A6 */	mtctr r12
/* 80104808 00101748  4E 80 04 21 */	bctrl 
.L_8010480C:
/* 8010480C 0010174C  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80104810 00101750  38 81 00 18 */	addi r4, r1, 0x18
/* 80104814 00101754  C0 1F 02 40 */	lfs f0, 0x240(r31)
/* 80104818 00101758  EC 01 00 28 */	fsubs f0, f1, f0
/* 8010481C 0010175C  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 80104820 00101760  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 80104824 00101764  C0 1F 02 44 */	lfs f0, 0x244(r31)
/* 80104828 00101768  EC 01 00 28 */	fsubs f0, f1, f0
/* 8010482C 0010176C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80104830 00101770  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 80104834 00101774  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 80104838 00101778  C0 1F 02 48 */	lfs f0, 0x248(r31)
/* 8010483C 0010177C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80104840 00101780  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 80104844 00101784  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80104848 00101788  80 63 00 00 */	lwz r3, 0(r3)
/* 8010484C 0010178C  48 03 39 B1 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80104850 00101790  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80104854 00101794  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 80104858 00101798  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8010485C 0010179C  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 80104860 001017A0  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80104864 001017A4  D0 1F 02 28 */	stfs f0, 0x228(r31)
/* 80104868 001017A8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8010486C 001017AC  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 80104870 001017B0  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 80104874 001017B4  D0 1F 02 70 */	stfs f0, 0x270(r31)
/* 80104878 001017B8  C0 1F 02 24 */	lfs f0, 0x224(r31)
/* 8010487C 001017BC  D0 1F 02 74 */	stfs f0, 0x274(r31)
/* 80104880 001017C0  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 80104884 001017C4  D0 1F 02 78 */	stfs f0, 0x278(r31)
/* 80104888 001017C8  48 00 01 50 */	b .L_801049D8
.L_8010488C:
/* 8010488C 001017CC  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80104890 001017D0  7F E3 FB 78 */	mr r3, r31
/* 80104894 001017D4  FC 20 F0 90 */	fmr f1, f30
/* 80104898 001017D8  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8010489C 001017DC  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 801048A0 001017E0  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 801048A4 001017E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801048A8 001017E8  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 801048AC 001017EC  7D 89 03 A6 */	mtctr r12
/* 801048B0 001017F0  4E 80 04 21 */	bctrl 
/* 801048B4 001017F4  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 801048B8 001017F8  C0 3F 01 C8 */	lfs f1, 0x1c8(r31)
/* 801048BC 001017FC  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801048C0 00101800  EC 22 08 2A */	fadds f1, f2, f1
/* 801048C4 00101804  D0 3F 01 8C */	stfs f1, 0x18c(r31)
/* 801048C8 00101808  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 801048CC 0010180C  C0 3F 01 CC */	lfs f1, 0x1cc(r31)
/* 801048D0 00101810  EC 22 08 2A */	fadds f1, f2, f1
/* 801048D4 00101814  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 801048D8 00101818  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 801048DC 0010181C  C0 3F 01 D0 */	lfs f1, 0x1d0(r31)
/* 801048E0 00101820  EC 22 08 2A */	fadds f1, f2, f1
/* 801048E4 00101824  D0 3F 01 94 */	stfs f1, 0x194(r31)
/* 801048E8 00101828  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 801048EC 0010182C  FC 20 20 90 */	fmr f1, f4
/* 801048F0 00101830  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801048F4 00101834  40 80 00 08 */	bge .L_801048FC
/* 801048F8 00101838  FC 20 20 50 */	fneg f1, f4
.L_801048FC:
/* 801048FC 0010183C  C0 42 94 4C */	lfs f2, lbl_805177AC@sda21(r2)
/* 80104900 00101840  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80104904 00101844  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80104908 00101848  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8010490C 0010184C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80104910 00101850  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80104914 00101854  FC 00 08 1E */	fctiwz f0, f1
/* 80104918 00101858  D8 01 01 08 */	stfd f0, 0x108(r1)
/* 8010491C 0010185C  80 01 01 0C */	lwz r0, 0x10c(r1)
/* 80104920 00101860  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80104924 00101864  7C 64 02 14 */	add r3, r4, r0
/* 80104928 00101868  C0 63 00 04 */	lfs f3, 4(r3)
/* 8010492C 0010186C  40 80 00 28 */	bge .L_80104954
/* 80104930 00101870  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 80104934 00101874  EC 04 00 32 */	fmuls f0, f4, f0
/* 80104938 00101878  FC 00 00 1E */	fctiwz f0, f0
/* 8010493C 0010187C  D8 01 01 10 */	stfd f0, 0x110(r1)
/* 80104940 00101880  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80104944 00101884  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80104948 00101888  7C 04 04 2E */	lfsx f0, r4, r0
/* 8010494C 0010188C  FC 20 00 50 */	fneg f1, f0
/* 80104950 00101890  48 00 00 1C */	b .L_8010496C
.L_80104954:
/* 80104954 00101894  EC 04 00 B2 */	fmuls f0, f4, f2
/* 80104958 00101898  FC 00 00 1E */	fctiwz f0, f0
/* 8010495C 0010189C  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 80104960 001018A0  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 80104964 001018A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80104968 001018A8  7C 24 04 2E */	lfsx f1, r4, r0
.L_8010496C:
/* 8010496C 001018AC  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80104970 001018B0  7F E3 FB 78 */	mr r3, r31
/* 80104974 001018B4  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80104978 001018B8  38 81 00 40 */	addi r4, r1, 0x40
/* 8010497C 001018BC  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80104980 001018C0  D0 61 00 48 */	stfs f3, 0x48(r1)
/* 80104984 001018C4  48 09 AC 65 */	bl "updateStick__Q24Game8CreatureFR10Vector3<f>"
/* 80104988 001018C8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8010498C 001018CC  38 81 00 08 */	addi r4, r1, 8
/* 80104990 001018D0  80 63 00 00 */	lwz r3, 0(r3)
/* 80104994 001018D4  48 03 38 69 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80104998 001018D8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8010499C 001018DC  7F E3 FB 78 */	mr r3, r31
/* 801049A0 001018E0  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 801049A4 001018E4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801049A8 001018E8  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 801049AC 001018EC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801049B0 001018F0  D0 1F 02 28 */	stfs f0, 0x228(r31)
/* 801049B4 001018F4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801049B8 001018F8  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 801049BC 001018FC  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 801049C0 00101900  D0 1F 02 70 */	stfs f0, 0x270(r31)
/* 801049C4 00101904  C0 1F 02 24 */	lfs f0, 0x224(r31)
/* 801049C8 00101908  D0 1F 02 74 */	stfs f0, 0x274(r31)
/* 801049CC 0010190C  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 801049D0 00101910  D0 1F 02 78 */	stfs f0, 0x278(r31)
/* 801049D4 00101914  48 03 73 95 */	bl updateCell__Q24Game8CreatureFv
.L_801049D8:
/* 801049D8 00101918  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 801049DC 0010191C  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 801049E0 00101920  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 801049E4 00101924  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 801049E8 00101928  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 801049EC 0010192C  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 801049F0 00101930  E3 81 01 48 */	psq_l f28, 328(r1), 0, qr0
/* 801049F4 00101934  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 801049F8 00101938  E3 61 01 38 */	psq_l f27, 312(r1), 0, qr0
/* 801049FC 0010193C  CB 61 01 30 */	lfd f27, 0x130(r1)
/* 80104A00 00101940  80 01 01 84 */	lwz r0, 0x184(r1)
/* 80104A04 00101944  83 E1 01 2C */	lwz r31, 0x12c(r1)
/* 80104A08 00101948  7C 08 03 A6 */	mtlr r0
/* 80104A0C 0010194C  38 21 01 80 */	addi r1, r1, 0x180
/* 80104A10 00101950  4E 80 00 20 */	blr 

.global constraintBoundBox__Q24Game6MapMgrFRQ23Sys6Sphere
constraintBoundBox__Q24Game6MapMgrFRQ23Sys6Sphere:
/* 80104A14 00101954  4E 80 00 20 */	blr 

.global hasHiddenCollision__Q24Game6MapMgrFv
hasHiddenCollision__Q24Game6MapMgrFv:
/* 80104A18 00101958  38 60 00 00 */	li r3, 0
/* 80104A1C 0010195C  4E 80 00 20 */	blr 

.global wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo:
/* 80104A20 00101960  4E 80 00 20 */	blr 

.global getOffsetForMapCollision__Q24Game9EnemyBaseFv
getOffsetForMapCollision__Q24Game9EnemyBaseFv:
/* 80104A24 00101964  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80104A28 00101968  D0 03 00 00 */	stfs f0, 0(r3)
/* 80104A2C 0010196C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80104A30 00101970  D0 03 00 08 */	stfs f0, 8(r3)
/* 80104A34 00101974  4E 80 00 20 */	blr 

.global doSimulationCarcass__Q24Game9EnemyBaseFf
doSimulationCarcass__Q24Game9EnemyBaseFf:
/* 80104A38 00101978  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80104A3C 0010197C  7C 08 02 A6 */	mflr r0
/* 80104A40 00101980  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104A44 00101984  48 00 21 5D */	bl updateWaterBox__Q24Game9EnemyBaseFv
/* 80104A48 00101988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80104A4C 0010198C  7C 08 03 A6 */	mtlr r0
/* 80104A50 00101990  38 21 00 10 */	addi r1, r1, 0x10
/* 80104A54 00101994  4E 80 00 20 */	blr 

.global doSimulation__Q24Game9EnemyBaseFf
doSimulation__Q24Game9EnemyBaseFf:
/* 80104A58 00101998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80104A5C 0010199C  7C 08 02 A6 */	mflr r0
/* 80104A60 001019A0  7C 64 1B 78 */	mr r4, r3
/* 80104A64 001019A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104A68 001019A8  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80104A6C 001019AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80104A70 001019B0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80104A74 001019B4  7D 89 03 A6 */	mtctr r12
/* 80104A78 001019B8  4E 80 04 21 */	bctrl 
/* 80104A7C 001019BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80104A80 001019C0  7C 08 03 A6 */	mtlr r0
/* 80104A84 001019C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80104A88 001019C8  4E 80 00 20 */	blr 

.global doSimulationConstraint__Q24Game9EnemyBaseFf
doSimulationConstraint__Q24Game9EnemyBaseFf:
/* 80104A8C 001019CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80104A90 001019D0  7C 08 02 A6 */	mflr r0
/* 80104A94 001019D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80104A98 001019D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80104A9C 001019DC  7C 7F 1B 78 */	mr r31, r3
/* 80104AA0 001019E0  80 63 01 E0 */	lwz r3, 0x1e0(r3)
/* 80104AA4 001019E4  54 60 03 5B */	rlwinm. r0, r3, 0, 0xd, 0xd
/* 80104AA8 001019E8  40 82 00 58 */	bne .L_80104B00
/* 80104AAC 001019EC  C0 42 94 50 */	lfs f2, lbl_805177B0@sda21(r2)
/* 80104AB0 001019F0  C0 1F 01 1C */	lfs f0, 0x11c(r31)
/* 80104AB4 001019F4  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80104AB8 001019F8  40 82 00 10 */	bne .L_80104AC8
/* 80104ABC 001019FC  C0 1F 01 24 */	lfs f0, 0x124(r31)
/* 80104AC0 00101A00  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80104AC4 00101A04  41 82 00 14 */	beq .L_80104AD8
.L_80104AC8:
/* 80104AC8 00101A08  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104ACC 00101A0C  64 00 20 00 */	oris r0, r0, 0x2000
/* 80104AD0 00101A10  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80104AD4 00101A14  48 00 00 18 */	b .L_80104AEC
.L_80104AD8:
/* 80104AD8 00101A18  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80104ADC 00101A1C  28 00 00 00 */	cmplwi r0, 0
/* 80104AE0 00101A20  41 82 00 0C */	beq .L_80104AEC
/* 80104AE4 00101A24  54 60 00 C2 */	rlwinm r0, r3, 0, 3, 1
/* 80104AE8 00101A28  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80104AEC:
/* 80104AEC 00101A2C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104AF0 00101A30  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 80104AF4 00101A34  41 82 00 0C */	beq .L_80104B00
/* 80104AF8 00101A38  7F E3 FB 78 */	mr r3, r31
/* 80104AFC 00101A3C  4B FF F8 45 */	bl collisionMapAndPlat__Q24Game9EnemyBaseFf
.L_80104B00:
/* 80104B00 00101A40  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80104B04 00101A44  38 81 00 08 */	addi r4, r1, 8
/* 80104B08 00101A48  80 63 00 00 */	lwz r3, 0(r3)
/* 80104B0C 00101A4C  48 03 36 F1 */	bl getSphere__8CollPartFRQ23Sys6Sphere
/* 80104B10 00101A50  C0 01 00 08 */	lfs f0, 8(r1)
/* 80104B14 00101A54  7F E3 FB 78 */	mr r3, r31
/* 80104B18 00101A58  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 80104B1C 00101A5C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80104B20 00101A60  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 80104B24 00101A64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80104B28 00101A68  D0 1F 02 28 */	stfs f0, 0x228(r31)
/* 80104B2C 00101A6C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80104B30 00101A70  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 80104B34 00101A74  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 80104B38 00101A78  D0 1F 02 70 */	stfs f0, 0x270(r31)
/* 80104B3C 00101A7C  C0 1F 02 24 */	lfs f0, 0x224(r31)
/* 80104B40 00101A80  D0 1F 02 74 */	stfs f0, 0x274(r31)
/* 80104B44 00101A84  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 80104B48 00101A88  D0 1F 02 78 */	stfs f0, 0x278(r31)
/* 80104B4C 00101A8C  48 00 20 55 */	bl updateWaterBox__Q24Game9EnemyBaseFv
/* 80104B50 00101A90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80104B54 00101A94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80104B58 00101A98  7C 08 03 A6 */	mtlr r0
/* 80104B5C 00101A9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80104B60 00101AA0  4E 80 00 20 */	blr 

.global gotoHell__Q24Game9EnemyBaseFv
gotoHell__Q24Game9EnemyBaseFv:
/* 80104B64 00101AA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80104B68 00101AA8  7C 08 02 A6 */	mflr r0
/* 80104B6C 00101AAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80104B70 00101AB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80104B74 00101AB4  7C 7F 1B 78 */	mr r31, r3
/* 80104B78 00101AB8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80104B7C 00101ABC  54 00 00 C7 */	rlwinm. r0, r0, 0, 3, 3
/* 80104B80 00101AC0  41 82 00 40 */	beq .L_80104BC0
/* 80104B84 00101AC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80104B88 00101AC8  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 80104B8C 00101ACC  7D 89 03 A6 */	mtctr r12
/* 80104B90 00101AD0  4E 80 04 21 */	bctrl 
/* 80104B94 00101AD4  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 80104B98 00101AD8  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyKillArg@ha
/* 80104B9C 00101ADC  38 04 A2 D0 */	addi r0, r4, __vt__Q24Game15CreatureKillArg@l
/* 80104BA0 00101AE0  3C A0 70 00 */	lis r5, 0x7000
/* 80104BA4 00101AE4  90 01 00 08 */	stw r0, 8(r1)
/* 80104BA8 00101AE8  38 03 A2 C4 */	addi r0, r3, __vt__Q24Game12EnemyKillArg@l
/* 80104BAC 00101AEC  7F E3 FB 78 */	mr r3, r31
/* 80104BB0 00101AF0  38 81 00 08 */	addi r4, r1, 8
/* 80104BB4 00101AF4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80104BB8 00101AF8  90 01 00 08 */	stw r0, 8(r1)
/* 80104BBC 00101AFC  48 03 65 35 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80104BC0:
/* 80104BC0 00101B00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80104BC4 00101B04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80104BC8 00101B08  7C 08 03 A6 */	mtlr r0
/* 80104BCC 00101B0C  38 21 00 20 */	addi r1, r1, 0x20
/* 80104BD0 00101B10  4E 80 00 20 */	blr 

.global setAnimMgr__Q24Game9EnemyBaseFPQ28SysShape7AnimMgr
setAnimMgr__Q24Game9EnemyBaseFPQ28SysShape7AnimMgr:
/* 80104BD4 00101B14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80104BD8 00101B18  7C 08 02 A6 */	mflr r0
/* 80104BDC 00101B1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104BE0 00101B20  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80104BE4 00101B24  81 83 00 00 */	lwz r12, 0(r3)
/* 80104BE8 00101B28  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80104BEC 00101B2C  7D 89 03 A6 */	mtctr r12
/* 80104BF0 00101B30  4E 80 04 21 */	bctrl 
/* 80104BF4 00101B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80104BF8 00101B38  7C 08 03 A6 */	mtlr r0
/* 80104BFC 00101B3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80104C00 00101B40  4E 80 00 20 */	blr 

.global setPSEnemyBaseAnime__Q24Game9EnemyBaseFv
setPSEnemyBaseAnime__Q24Game9EnemyBaseFv:
/* 80104C04 00101B44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80104C08 00101B48  7C 08 02 A6 */	mflr r0
/* 80104C0C 00101B4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80104C10 00101B50  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80104C14 00101B54  7C 7F 1B 78 */	mr r31, r3
/* 80104C18 00101B58  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80104C1C 00101B5C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80104C20 00101B60  93 81 00 20 */	stw r28, 0x20(r1)
/* 80104C24 00101B64  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80104C28 00101B68  54 80 01 CF */	rlwinm. r0, r4, 0, 7, 7
/* 80104C2C 00101B6C  41 82 01 0C */	beq .L_80104D38
/* 80104C30 00101B70  48 00 27 19 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80104C34 00101B74  7C 7E 1B 78 */	mr r30, r3
/* 80104C38 00101B78  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80104C3C 00101B7C  38 80 00 00 */	li r4, 0
/* 80104C40 00101B80  81 83 00 00 */	lwz r12, 0(r3)
/* 80104C44 00101B84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80104C48 00101B88  7D 89 03 A6 */	mtctr r12
/* 80104C4C 00101B8C  4E 80 04 21 */	bctrl 
/* 80104C50 00101B90  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80104C54 00101B94  83 A3 00 2C */	lwz r29, 0x2c(r3)
/* 80104C58 00101B98  48 00 00 18 */	b .L_80104C70
.L_80104C5C:
/* 80104C5C 00101B9C  A8 1D 00 20 */	lha r0, 0x20(r29)
/* 80104C60 00101BA0  7C 1E 00 00 */	cmpw r30, r0
/* 80104C64 00101BA4  40 82 00 08 */	bne .L_80104C6C
/* 80104C68 00101BA8  48 00 00 14 */	b .L_80104C7C
.L_80104C6C:
/* 80104C6C 00101BAC  83 BD 00 04 */	lwz r29, 4(r29)
.L_80104C70:
/* 80104C70 00101BB0  28 1D 00 00 */	cmplwi r29, 0
/* 80104C74 00101BB4  40 82 FF E8 */	bne .L_80104C5C
/* 80104C78 00101BB8  3B A0 00 00 */	li r29, 0
.L_80104C7C:
/* 80104C7C 00101BBC  83 9D 00 24 */	lwz r28, 0x24(r29)
/* 80104C80 00101BC0  28 1C 00 00 */	cmplwi r28, 0
/* 80104C84 00101BC4  41 82 00 98 */	beq .L_80104D1C
/* 80104C88 00101BC8  7F A3 EB 78 */	mr r3, r29
/* 80104C8C 00101BCC  38 80 00 00 */	li r4, 0
/* 80104C90 00101BD0  48 32 4C C5 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80104C94 00101BD4  7C 7E 1B 78 */	mr r30, r3
/* 80104C98 00101BD8  7F A3 EB 78 */	mr r3, r29
/* 80104C9C 00101BDC  38 80 00 01 */	li r4, 1
/* 80104CA0 00101BE0  48 32 4C B5 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80104CA4 00101BE4  28 1E 00 00 */	cmplwi r30, 0
/* 80104CA8 00101BE8  41 82 00 58 */	beq .L_80104D00
/* 80104CAC 00101BEC  28 03 00 00 */	cmplwi r3, 0
/* 80104CB0 00101BF0  41 82 00 50 */	beq .L_80104D00
/* 80104CB4 00101BF4  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 80104CB8 00101BF8  3C C0 43 30 */	lis r6, 0x4330
/* 80104CBC 00101BFC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80104CC0 00101C00  7F 84 E3 78 */	mr r4, r28
/* 80104CC4 00101C04  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 80104CC8 00101C08  90 C1 00 08 */	stw r6, 8(r1)
/* 80104CCC 00101C0C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80104CD0 00101C10  C8 42 94 58 */	lfd f2, lbl_805177B8@sda21(r2)
/* 80104CD4 00101C14  90 61 00 0C */	stw r3, 0xc(r1)
/* 80104CD8 00101C18  38 A0 00 01 */	li r5, 1
/* 80104CDC 00101C1C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104CE0 00101C20  C8 01 00 08 */	lfd f0, 8(r1)
/* 80104CE4 00101C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104CE8 00101C28  EC 20 10 28 */	fsubs f1, f0, f2
/* 80104CEC 00101C2C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80104CF0 00101C30  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80104CF4 00101C34  EC 40 10 28 */	fsubs f2, f0, f2
/* 80104CF8 00101C38  48 35 90 E9 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104CFC 00101C3C  48 00 00 9C */	b .L_80104D98
.L_80104D00:
/* 80104D00 00101C40  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104D04 00101C44  7F 84 E3 78 */	mr r4, r28
/* 80104D08 00101C48  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104D0C 00101C4C  38 A0 00 01 */	li r5, 1
/* 80104D10 00101C50  FC 40 08 90 */	fmr f2, f1
/* 80104D14 00101C54  48 35 90 CD */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104D18 00101C58  48 00 00 80 */	b .L_80104D98
.L_80104D1C:
/* 80104D1C 00101C5C  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104D20 00101C60  38 80 00 00 */	li r4, 0
/* 80104D24 00101C64  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104D28 00101C68  38 A0 00 01 */	li r5, 1
/* 80104D2C 00101C6C  FC 40 08 90 */	fmr f2, f1
/* 80104D30 00101C70  48 35 90 B1 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104D34 00101C74  48 00 00 64 */	b .L_80104D98
.L_80104D38:
/* 80104D38 00101C78  54 80 01 8D */	rlwinm. r0, r4, 0, 6, 6
/* 80104D3C 00101C7C  41 82 00 20 */	beq .L_80104D5C
/* 80104D40 00101C80  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104D44 00101C84  38 80 FF FF */	li r4, -1
/* 80104D48 00101C88  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104D4C 00101C8C  38 A0 00 01 */	li r5, 1
/* 80104D50 00101C90  FC 40 08 90 */	fmr f2, f1
/* 80104D54 00101C94  48 35 90 8D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104D58 00101C98  48 00 00 40 */	b .L_80104D98
.L_80104D5C:
/* 80104D5C 00101C9C  54 80 01 4B */	rlwinm. r0, r4, 0, 5, 5
/* 80104D60 00101CA0  41 82 00 20 */	beq .L_80104D80
/* 80104D64 00101CA4  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104D68 00101CA8  38 80 FF FF */	li r4, -1
/* 80104D6C 00101CAC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104D70 00101CB0  38 A0 00 01 */	li r5, 1
/* 80104D74 00101CB4  FC 40 08 90 */	fmr f2, f1
/* 80104D78 00101CB8  48 35 90 69 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104D7C 00101CBC  48 00 00 1C */	b .L_80104D98
.L_80104D80:
/* 80104D80 00101CC0  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104D84 00101CC4  38 80 00 00 */	li r4, 0
/* 80104D88 00101CC8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104D8C 00101CCC  38 A0 00 01 */	li r5, 1
/* 80104D90 00101CD0  FC 40 08 90 */	fmr f2, f1
/* 80104D94 00101CD4  48 35 90 4D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
.L_80104D98:
/* 80104D98 00101CD8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80104D9C 00101CDC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80104DA0 00101CE0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80104DA4 00101CE4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80104DA8 00101CE8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80104DAC 00101CEC  7C 08 03 A6 */	mtlr r0
/* 80104DB0 00101CF0  38 21 00 30 */	addi r1, r1, 0x30
/* 80104DB4 00101CF4  4E 80 00 20 */	blr 

.global startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener:
/* 80104DB8 00101CF8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80104DBC 00101CFC  7C 08 02 A6 */	mflr r0
/* 80104DC0 00101D00  28 07 00 00 */	cmplwi r7, 0
/* 80104DC4 00101D04  90 01 00 34 */	stw r0, 0x34(r1)
/* 80104DC8 00101D08  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80104DCC 00101D0C  7C 7F 1B 78 */	mr r31, r3
/* 80104DD0 00101D10  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80104DD4 00101D14  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80104DD8 00101D18  93 81 00 20 */	stw r28, 0x20(r1)
/* 80104DDC 00101D1C  40 82 00 14 */	bne .L_80104DF0
/* 80104DE0 00101D20  28 1F 00 00 */	cmplwi r31, 0
/* 80104DE4 00101D24  7F E7 FB 78 */	mr r7, r31
/* 80104DE8 00101D28  41 82 00 08 */	beq .L_80104DF0
/* 80104DEC 00101D2C  38 E7 01 78 */	addi r7, r7, 0x178
.L_80104DF0:
/* 80104DF0 00101D30  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80104DF4 00101D34  48 02 93 79 */	bl startBlend__Q24Game22EnemyBlendAnimatorBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
/* 80104DF8 00101D38  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104DFC 00101D3C  54 00 02 06 */	rlwinm r0, r0, 0, 8, 3
/* 80104E00 00101D40  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80104E04 00101D44  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80104E08 00101D48  64 00 04 00 */	oris r0, r0, 0x400
/* 80104E0C 00101D4C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80104E10 00101D50  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80104E14 00101D54  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80104E18 00101D58  41 82 01 10 */	beq .L_80104F28
/* 80104E1C 00101D5C  7F E3 FB 78 */	mr r3, r31
/* 80104E20 00101D60  48 00 25 29 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80104E24 00101D64  7C 7E 1B 78 */	mr r30, r3
/* 80104E28 00101D68  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80104E2C 00101D6C  38 80 00 00 */	li r4, 0
/* 80104E30 00101D70  81 83 00 00 */	lwz r12, 0(r3)
/* 80104E34 00101D74  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80104E38 00101D78  7D 89 03 A6 */	mtctr r12
/* 80104E3C 00101D7C  4E 80 04 21 */	bctrl 
/* 80104E40 00101D80  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80104E44 00101D84  83 A3 00 2C */	lwz r29, 0x2c(r3)
/* 80104E48 00101D88  48 00 00 18 */	b .L_80104E60
.L_80104E4C:
/* 80104E4C 00101D8C  A8 1D 00 20 */	lha r0, 0x20(r29)
/* 80104E50 00101D90  7C 1E 00 00 */	cmpw r30, r0
/* 80104E54 00101D94  40 82 00 08 */	bne .L_80104E5C
/* 80104E58 00101D98  48 00 00 14 */	b .L_80104E6C
.L_80104E5C:
/* 80104E5C 00101D9C  83 BD 00 04 */	lwz r29, 4(r29)
.L_80104E60:
/* 80104E60 00101DA0  28 1D 00 00 */	cmplwi r29, 0
/* 80104E64 00101DA4  40 82 FF E8 */	bne .L_80104E4C
/* 80104E68 00101DA8  3B A0 00 00 */	li r29, 0
.L_80104E6C:
/* 80104E6C 00101DAC  83 9D 00 24 */	lwz r28, 0x24(r29)
/* 80104E70 00101DB0  28 1C 00 00 */	cmplwi r28, 0
/* 80104E74 00101DB4  41 82 00 98 */	beq .L_80104F0C
/* 80104E78 00101DB8  7F A3 EB 78 */	mr r3, r29
/* 80104E7C 00101DBC  38 80 00 00 */	li r4, 0
/* 80104E80 00101DC0  48 32 4A D5 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80104E84 00101DC4  7C 7E 1B 78 */	mr r30, r3
/* 80104E88 00101DC8  7F A3 EB 78 */	mr r3, r29
/* 80104E8C 00101DCC  38 80 00 01 */	li r4, 1
/* 80104E90 00101DD0  48 32 4A C5 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80104E94 00101DD4  28 1E 00 00 */	cmplwi r30, 0
/* 80104E98 00101DD8  41 82 00 58 */	beq .L_80104EF0
/* 80104E9C 00101DDC  28 03 00 00 */	cmplwi r3, 0
/* 80104EA0 00101DE0  41 82 00 50 */	beq .L_80104EF0
/* 80104EA4 00101DE4  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 80104EA8 00101DE8  3C C0 43 30 */	lis r6, 0x4330
/* 80104EAC 00101DEC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80104EB0 00101DF0  7F 84 E3 78 */	mr r4, r28
/* 80104EB4 00101DF4  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 80104EB8 00101DF8  90 C1 00 08 */	stw r6, 8(r1)
/* 80104EBC 00101DFC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80104EC0 00101E00  C8 42 94 58 */	lfd f2, lbl_805177B8@sda21(r2)
/* 80104EC4 00101E04  90 61 00 0C */	stw r3, 0xc(r1)
/* 80104EC8 00101E08  38 A0 00 01 */	li r5, 1
/* 80104ECC 00101E0C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104ED0 00101E10  C8 01 00 08 */	lfd f0, 8(r1)
/* 80104ED4 00101E14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104ED8 00101E18  EC 20 10 28 */	fsubs f1, f0, f2
/* 80104EDC 00101E1C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80104EE0 00101E20  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80104EE4 00101E24  EC 40 10 28 */	fsubs f2, f0, f2
/* 80104EE8 00101E28  48 35 8E F9 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104EEC 00101E2C  48 00 00 9C */	b .L_80104F88
.L_80104EF0:
/* 80104EF0 00101E30  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104EF4 00101E34  7F 84 E3 78 */	mr r4, r28
/* 80104EF8 00101E38  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104EFC 00101E3C  38 A0 00 01 */	li r5, 1
/* 80104F00 00101E40  FC 40 08 90 */	fmr f2, f1
/* 80104F04 00101E44  48 35 8E DD */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104F08 00101E48  48 00 00 80 */	b .L_80104F88
.L_80104F0C:
/* 80104F0C 00101E4C  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104F10 00101E50  38 80 00 00 */	li r4, 0
/* 80104F14 00101E54  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104F18 00101E58  38 A0 00 01 */	li r5, 1
/* 80104F1C 00101E5C  FC 40 08 90 */	fmr f2, f1
/* 80104F20 00101E60  48 35 8E C1 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104F24 00101E64  48 00 00 64 */	b .L_80104F88
.L_80104F28:
/* 80104F28 00101E68  54 60 01 8D */	rlwinm. r0, r3, 0, 6, 6
/* 80104F2C 00101E6C  41 82 00 20 */	beq .L_80104F4C
/* 80104F30 00101E70  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104F34 00101E74  38 80 FF FF */	li r4, -1
/* 80104F38 00101E78  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104F3C 00101E7C  38 A0 00 01 */	li r5, 1
/* 80104F40 00101E80  FC 40 08 90 */	fmr f2, f1
/* 80104F44 00101E84  48 35 8E 9D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104F48 00101E88  48 00 00 40 */	b .L_80104F88
.L_80104F4C:
/* 80104F4C 00101E8C  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80104F50 00101E90  41 82 00 20 */	beq .L_80104F70
/* 80104F54 00101E94  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104F58 00101E98  38 80 FF FF */	li r4, -1
/* 80104F5C 00101E9C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104F60 00101EA0  38 A0 00 01 */	li r5, 1
/* 80104F64 00101EA4  FC 40 08 90 */	fmr f2, f1
/* 80104F68 00101EA8  48 35 8E 79 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80104F6C 00101EAC  48 00 00 1C */	b .L_80104F88
.L_80104F70:
/* 80104F70 00101EB0  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80104F74 00101EB4  38 80 00 00 */	li r4, 0
/* 80104F78 00101EB8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80104F7C 00101EBC  38 A0 00 01 */	li r5, 1
/* 80104F80 00101EC0  FC 40 08 90 */	fmr f2, f1
/* 80104F84 00101EC4  48 35 8E 5D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
.L_80104F88:
/* 80104F88 00101EC8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80104F8C 00101ECC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80104F90 00101ED0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80104F94 00101ED4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80104F98 00101ED8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80104F9C 00101EDC  7C 08 03 A6 */	mtlr r0
/* 80104FA0 00101EE0  38 21 00 30 */	addi r1, r1, 0x30
/* 80104FA4 00101EE4  4E 80 00 20 */	blr 

.global endBlend__Q24Game9EnemyBaseFv
endBlend__Q24Game9EnemyBaseFv:
/* 80104FA8 00101EE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80104FAC 00101EEC  7C 08 02 A6 */	mflr r0
/* 80104FB0 00101EF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80104FB4 00101EF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80104FB8 00101EF8  7C 7F 1B 78 */	mr r31, r3
/* 80104FBC 00101EFC  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80104FC0 00101F00  81 83 00 00 */	lwz r12, 0(r3)
/* 80104FC4 00101F04  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80104FC8 00101F08  7D 89 03 A6 */	mtctr r12
/* 80104FCC 00101F0C  4E 80 04 21 */	bctrl 
/* 80104FD0 00101F10  3C 03 9D 94 */	subis r0, r3, 0x626c
/* 80104FD4 00101F14  28 00 6E 64 */	cmplwi r0, 0x6e64
/* 80104FD8 00101F18  40 82 00 0C */	bne .L_80104FE4
/* 80104FDC 00101F1C  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80104FE0 00101F20  48 02 92 29 */	bl endBlend__Q24Game22EnemyBlendAnimatorBaseFv
.L_80104FE4:
/* 80104FE4 00101F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80104FE8 00101F28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80104FEC 00101F2C  7C 08 03 A6 */	mtlr r0
/* 80104FF0 00101F30  38 21 00 10 */	addi r1, r1, 0x10
/* 80104FF4 00101F34  4E 80 00 20 */	blr 

.global getTypeID__Q24Game17EnemyAnimatorBaseFv
getTypeID__Q24Game17EnemyAnimatorBaseFv:
/* 80104FF8 00101F38  3C 60 62 61 */	lis r3, 0x62617365@ha
/* 80104FFC 00101F3C  38 63 73 65 */	addi r3, r3, 0x62617365@l
/* 80105000 00101F40  4E 80 00 20 */	blr 

.global startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener:
/* 80105004 00101F44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80105008 00101F48  7C 08 02 A6 */	mflr r0
/* 8010500C 00101F4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80105010 00101F50  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80105014 00101F54  7C 7F 1B 78 */	mr r31, r3
/* 80105018 00101F58  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8010501C 00101F5C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80105020 00101F60  7C 9D 23 78 */	mr r29, r4
/* 80105024 00101F64  93 81 00 20 */	stw r28, 0x20(r1)
/* 80105028 00101F68  7C BC 2B 79 */	or. r28, r5, r5
/* 8010502C 00101F6C  40 82 00 14 */	bne .L_80105040
/* 80105030 00101F70  28 1F 00 00 */	cmplwi r31, 0
/* 80105034 00101F74  41 82 00 08 */	beq .L_8010503C
/* 80105038 00101F78  38 63 01 78 */	addi r3, r3, 0x178
.L_8010503C:
/* 8010503C 00101F7C  7C 7C 1B 78 */	mr r28, r3
.L_80105040:
/* 80105040 00101F80  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80105044 00101F84  38 80 00 00 */	li r4, 0
/* 80105048 00101F88  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 8010504C 00101F8C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80105050 00101F90  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 80105054 00101F94  90 03 00 0C */	stw r0, 0xc(r3)
/* 80105058 00101F98  D0 03 00 08 */	stfs f0, 8(r3)
/* 8010505C 00101F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80105060 00101FA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80105064 00101FA4  7D 89 03 A6 */	mtctr r12
/* 80105068 00101FA8  4E 80 04 21 */	bctrl 
/* 8010506C 00101FAC  7F A4 EB 78 */	mr r4, r29
/* 80105070 00101FB0  7F 85 E3 78 */	mr r5, r28
/* 80105074 00101FB4  48 32 3C 15 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 80105078 00101FB8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8010507C 00101FBC  54 00 02 06 */	rlwinm r0, r0, 0, 8, 3
/* 80105080 00101FC0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80105084 00101FC4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80105088 00101FC8  64 00 01 00 */	oris r0, r0, 0x100
/* 8010508C 00101FCC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80105090 00101FD0  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80105094 00101FD4  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80105098 00101FD8  41 82 01 10 */	beq .L_801051A8
/* 8010509C 00101FDC  7F E3 FB 78 */	mr r3, r31
/* 801050A0 00101FE0  48 00 22 A9 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 801050A4 00101FE4  7C 7E 1B 78 */	mr r30, r3
/* 801050A8 00101FE8  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 801050AC 00101FEC  38 80 00 00 */	li r4, 0
/* 801050B0 00101FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801050B4 00101FF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801050B8 00101FF8  7D 89 03 A6 */	mtctr r12
/* 801050BC 00101FFC  4E 80 04 21 */	bctrl 
/* 801050C0 00102000  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801050C4 00102004  83 A3 00 2C */	lwz r29, 0x2c(r3)
/* 801050C8 00102008  48 00 00 18 */	b .L_801050E0
.L_801050CC:
/* 801050CC 0010200C  A8 1D 00 20 */	lha r0, 0x20(r29)
/* 801050D0 00102010  7C 1E 00 00 */	cmpw r30, r0
/* 801050D4 00102014  40 82 00 08 */	bne .L_801050DC
/* 801050D8 00102018  48 00 00 14 */	b .L_801050EC
.L_801050DC:
/* 801050DC 0010201C  83 BD 00 04 */	lwz r29, 4(r29)
.L_801050E0:
/* 801050E0 00102020  28 1D 00 00 */	cmplwi r29, 0
/* 801050E4 00102024  40 82 FF E8 */	bne .L_801050CC
/* 801050E8 00102028  3B A0 00 00 */	li r29, 0
.L_801050EC:
/* 801050EC 0010202C  83 9D 00 24 */	lwz r28, 0x24(r29)
/* 801050F0 00102030  28 1C 00 00 */	cmplwi r28, 0
/* 801050F4 00102034  41 82 00 98 */	beq .L_8010518C
/* 801050F8 00102038  7F A3 EB 78 */	mr r3, r29
/* 801050FC 0010203C  38 80 00 00 */	li r4, 0
/* 80105100 00102040  48 32 48 55 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80105104 00102044  7C 7E 1B 78 */	mr r30, r3
/* 80105108 00102048  7F A3 EB 78 */	mr r3, r29
/* 8010510C 0010204C  38 80 00 01 */	li r4, 1
/* 80105110 00102050  48 32 48 45 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80105114 00102054  28 1E 00 00 */	cmplwi r30, 0
/* 80105118 00102058  41 82 00 58 */	beq .L_80105170
/* 8010511C 0010205C  28 03 00 00 */	cmplwi r3, 0
/* 80105120 00102060  41 82 00 50 */	beq .L_80105170
/* 80105124 00102064  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 80105128 00102068  3C C0 43 30 */	lis r6, 0x4330
/* 8010512C 0010206C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80105130 00102070  7F 84 E3 78 */	mr r4, r28
/* 80105134 00102074  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 80105138 00102078  90 C1 00 08 */	stw r6, 8(r1)
/* 8010513C 0010207C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80105140 00102080  C8 42 94 58 */	lfd f2, lbl_805177B8@sda21(r2)
/* 80105144 00102084  90 61 00 0C */	stw r3, 0xc(r1)
/* 80105148 00102088  38 A0 00 01 */	li r5, 1
/* 8010514C 0010208C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80105150 00102090  C8 01 00 08 */	lfd f0, 8(r1)
/* 80105154 00102094  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105158 00102098  EC 20 10 28 */	fsubs f1, f0, f2
/* 8010515C 0010209C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80105160 001020A0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80105164 001020A4  EC 40 10 28 */	fsubs f2, f0, f2
/* 80105168 001020A8  48 35 8C 79 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 8010516C 001020AC  48 00 00 9C */	b .L_80105208
.L_80105170:
/* 80105170 001020B0  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80105174 001020B4  7F 84 E3 78 */	mr r4, r28
/* 80105178 001020B8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8010517C 001020BC  38 A0 00 01 */	li r5, 1
/* 80105180 001020C0  FC 40 08 90 */	fmr f2, f1
/* 80105184 001020C4  48 35 8C 5D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80105188 001020C8  48 00 00 80 */	b .L_80105208
.L_8010518C:
/* 8010518C 001020CC  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80105190 001020D0  38 80 00 00 */	li r4, 0
/* 80105194 001020D4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80105198 001020D8  38 A0 00 01 */	li r5, 1
/* 8010519C 001020DC  FC 40 08 90 */	fmr f2, f1
/* 801051A0 001020E0  48 35 8C 41 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 801051A4 001020E4  48 00 00 64 */	b .L_80105208
.L_801051A8:
/* 801051A8 001020E8  54 60 01 8D */	rlwinm. r0, r3, 0, 6, 6
/* 801051AC 001020EC  41 82 00 20 */	beq .L_801051CC
/* 801051B0 001020F0  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801051B4 001020F4  38 80 FF FF */	li r4, -1
/* 801051B8 001020F8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801051BC 001020FC  38 A0 00 01 */	li r5, 1
/* 801051C0 00102100  FC 40 08 90 */	fmr f2, f1
/* 801051C4 00102104  48 35 8C 1D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 801051C8 00102108  48 00 00 40 */	b .L_80105208
.L_801051CC:
/* 801051CC 0010210C  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 801051D0 00102110  41 82 00 20 */	beq .L_801051F0
/* 801051D4 00102114  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801051D8 00102118  38 80 FF FF */	li r4, -1
/* 801051DC 0010211C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801051E0 00102120  38 A0 00 01 */	li r5, 1
/* 801051E4 00102124  FC 40 08 90 */	fmr f2, f1
/* 801051E8 00102128  48 35 8B F9 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 801051EC 0010212C  48 00 00 1C */	b .L_80105208
.L_801051F0:
/* 801051F0 00102130  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801051F4 00102134  38 80 00 00 */	li r4, 0
/* 801051F8 00102138  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801051FC 0010213C  38 A0 00 01 */	li r5, 1
/* 80105200 00102140  FC 40 08 90 */	fmr f2, f1
/* 80105204 00102144  48 35 8B DD */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
.L_80105208:
/* 80105208 00102148  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8010520C 0010214C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80105210 00102150  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80105214 00102154  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80105218 00102158  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8010521C 0010215C  7C 08 03 A6 */	mtlr r0
/* 80105220 00102160  38 21 00 30 */	addi r1, r1, 0x30
/* 80105224 00102164  4E 80 00 20 */	blr 

.global setMotionFrame__Q24Game9EnemyBaseFf
setMotionFrame__Q24Game9EnemyBaseFf:
/* 80105228 00102168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010522C 0010216C  7C 08 02 A6 */	mflr r0
/* 80105230 00102170  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105234 00102174  DB E1 00 08 */	stfd f31, 8(r1)
/* 80105238 00102178  FF E0 08 90 */	fmr f31, f1
/* 8010523C 0010217C  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80105240 00102180  81 83 00 00 */	lwz r12, 0(r3)
/* 80105244 00102184  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80105248 00102188  7D 89 03 A6 */	mtctr r12
/* 8010524C 0010218C  4E 80 04 21 */	bctrl 
/* 80105250 00102190  FC 20 F8 90 */	fmr f1, f31
/* 80105254 00102194  48 32 3B 6D */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 80105258 00102198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010525C 0010219C  CB E1 00 08 */	lfd f31, 8(r1)
/* 80105260 001021A0  7C 08 03 A6 */	mtlr r0
/* 80105264 001021A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80105268 001021A8  4E 80 00 20 */	blr 

.global getMotionFrame__Q24Game9EnemyBaseFv
getMotionFrame__Q24Game9EnemyBaseFv:
/* 8010526C 001021AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80105270 001021B0  7C 08 02 A6 */	mflr r0
/* 80105274 001021B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105278 001021B8  80 63 01 84 */	lwz r3, 0x184(r3)
/* 8010527C 001021BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80105280 001021C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80105284 001021C4  7D 89 03 A6 */	mtctr r12
/* 80105288 001021C8  4E 80 04 21 */	bctrl 
/* 8010528C 001021CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105290 001021D0  C0 23 00 08 */	lfs f1, 8(r3)
/* 80105294 001021D4  7C 08 03 A6 */	mtlr r0
/* 80105298 001021D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010529C 001021DC  4E 80 00 20 */	blr 

.global finishMotion__Q24Game9EnemyBaseFv
finishMotion__Q24Game9EnemyBaseFv:
/* 801052A0 001021E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801052A4 001021E4  7C 08 02 A6 */	mflr r0
/* 801052A8 001021E8  38 80 00 00 */	li r4, 0
/* 801052AC 001021EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801052B0 001021F0  80 63 01 84 */	lwz r3, 0x184(r3)
/* 801052B4 001021F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801052B8 001021F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801052BC 001021FC  7D 89 03 A6 */	mtctr r12
/* 801052C0 00102200  4E 80 04 21 */	bctrl 
/* 801052C4 00102204  88 03 00 18 */	lbz r0, 0x18(r3)
/* 801052C8 00102208  60 00 00 02 */	ori r0, r0, 2
/* 801052CC 0010220C  98 03 00 18 */	stb r0, 0x18(r3)
/* 801052D0 00102210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801052D4 00102214  7C 08 03 A6 */	mtlr r0
/* 801052D8 00102218  38 21 00 10 */	addi r1, r1, 0x10
/* 801052DC 0010221C  4E 80 00 20 */	blr 

.global onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent:
/* 801052E0 00102220  80 C3 01 88 */	lwz r6, 0x188(r3)
/* 801052E4 00102224  38 00 00 01 */	li r0, 1
/* 801052E8 00102228  80 A4 00 18 */	lwz r5, 0x18(r4)
/* 801052EC 0010222C  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 801052F0 00102230  90 A6 00 18 */	stw r5, 0x18(r6)
/* 801052F4 00102234  90 66 00 1C */	stw r3, 0x1c(r6)
/* 801052F8 00102238  98 06 00 24 */	stb r0, 0x24(r6)
/* 801052FC 0010223C  4E 80 00 20 */	blr 

.global stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction:
/* 80105300 00102240  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80105304 00102244  7C 08 02 A6 */	mflr r0
/* 80105308 00102248  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010530C 0010224C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80105310 00102250  3B E0 00 00 */	li r31, 0
/* 80105314 00102254  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80105318 00102258  7C 9E 23 78 */	mr r30, r4
/* 8010531C 0010225C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80105320 00102260  7C 7D 1B 78 */	mr r29, r3
/* 80105324 00102264  7F C3 F3 78 */	mr r3, r30
/* 80105328 00102268  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010532C 0010226C  7F A4 EB 78 */	mr r4, r29
/* 80105330 00102270  81 8C 00 08 */	lwz r12, 8(r12)
/* 80105334 00102274  7D 89 03 A6 */	mtctr r12
/* 80105338 00102278  4E 80 04 21 */	bctrl 
/* 8010533C 0010227C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80105340 00102280  41 82 00 20 */	beq .L_80105360
/* 80105344 00102284  7F C3 F3 78 */	mr r3, r30
/* 80105348 00102288  7F A4 EB 78 */	mr r4, r29
/* 8010534C 0010228C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80105350 00102290  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80105354 00102294  7D 89 03 A6 */	mtctr r12
/* 80105358 00102298  4E 80 04 21 */	bctrl 
/* 8010535C 0010229C  7C 7F 1B 78 */	mr r31, r3
.L_80105360:
/* 80105360 001022A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80105364 001022A4  7F E3 FB 78 */	mr r3, r31
/* 80105368 001022A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010536C 001022AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80105370 001022B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80105374 001022B4  7C 08 03 A6 */	mtlr r0
/* 80105378 001022B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8010537C 001022BC  4E 80 00 20 */	blr 

.global actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase:
/* 80105380 001022C0  38 60 00 01 */	li r3, 1
/* 80105384 001022C4  4E 80 00 20 */	blr 

.global actCommon__Q24Game11InteractionFPQ24Game8Creature
actCommon__Q24Game11InteractionFPQ24Game8Creature:
/* 80105388 001022C8  38 60 00 01 */	li r3, 1
/* 8010538C 001022CC  4E 80 00 20 */	blr 

.global lifeRecover__Q24Game9EnemyBaseFv
lifeRecover__Q24Game9EnemyBaseFv:
/* 80105390 001022D0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80105394 001022D4  C0 43 02 04 */	lfs f2, 0x204(r3)
/* 80105398 001022D8  C0 24 01 54 */	lfs f1, 0x154(r4)
/* 8010539C 001022DC  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 801053A0 001022E0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801053A4 001022E4  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 801053A8 001022E8  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 801053AC 001022EC  C0 23 02 04 */	lfs f1, 0x204(r3)
/* 801053B0 001022F0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801053B4 001022F4  4C 81 00 20 */	blelr 
/* 801053B8 001022F8  D0 23 02 00 */	stfs f1, 0x200(r3)
/* 801053BC 001022FC  4E 80 00 20 */	blr 

.global scaleDamageAnim__Q24Game9EnemyBaseFv
scaleDamageAnim__Q24Game9EnemyBaseFv:
/* 801053C0 00102300  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801053C4 00102304  7C 08 02 A6 */	mflr r0
/* 801053C8 00102308  90 01 00 54 */	stw r0, 0x54(r1)
/* 801053CC 0010230C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801053D0 00102310  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801053D4 00102314  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801053D8 00102318  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801053DC 0010231C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801053E0 00102320  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 801053E4 00102324  7C 7F 1B 78 */	mr r31, r3
/* 801053E8 00102328  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 801053EC 0010232C  40 82 00 14 */	bne .L_80105400
/* 801053F0 00102330  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801053F4 00102334  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 801053F8 00102338  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 801053FC 0010233C  41 82 02 DC */	beq .L_801056D8
.L_80105400:
/* 80105400 00102340  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80105404 00102344  C0 3F 02 10 */	lfs f1, 0x210(r31)
/* 80105408 00102348  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8010540C 0010234C  40 82 00 20 */	bne .L_8010542C
/* 80105410 00102350  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80105414 00102354  41 82 02 C4 */	beq .L_801056D8
/* 80105418 00102358  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8010541C 0010235C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80105420 00102360  EC 01 00 2A */	fadds f0, f1, f0
/* 80105424 00102364  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 80105428 00102368  48 00 02 B0 */	b .L_801056D8
.L_8010542C:
/* 8010542C 0010236C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80105430 00102370  54 80 03 19 */	rlwinm. r0, r4, 0, 0xc, 0xc
/* 80105434 00102374  FF E0 00 90 */	fmr f31, f0
/* 80105438 00102378  C0 63 02 94 */	lfs f3, 0x294(r3)
/* 8010543C 0010237C  41 82 00 0C */	beq .L_80105448
/* 80105440 00102380  C3 C2 94 A4 */	lfs f30, lbl_80517804@sda21(r2)
/* 80105444 00102384  48 00 00 08 */	b .L_8010544C
.L_80105448:
/* 80105448 00102388  C3 C2 94 64 */	lfs f30, lbl_805177C4@sda21(r2)
.L_8010544C:
/* 8010544C 0010238C  54 80 04 63 */	rlwinm. r0, r4, 0, 0x11, 0x11
/* 80105450 00102390  41 82 00 20 */	beq .L_80105470
/* 80105454 00102394  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80105458 00102398  C0 42 94 B4 */	lfs f2, lbl_80517814@sda21(r2)
/* 8010545C 0010239C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80105460 001023A0  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 80105464 001023A4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80105468 001023A8  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 8010546C 001023AC  48 00 00 18 */	b .L_80105484
.L_80105470:
/* 80105470 001023B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80105474 001023B4  C0 3F 02 10 */	lfs f1, 0x210(r31)
/* 80105478 001023B8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8010547C 001023BC  EC 01 00 2A */	fadds f0, f1, f0
/* 80105480 001023C0  D0 1F 02 10 */	stfs f0, 0x210(r31)
.L_80105484:
/* 80105484 001023C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80105488 001023C8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8010548C 001023CC  41 82 01 38 */	beq .L_801055C4
/* 80105490 001023D0  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 80105494 001023D4  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80105498 001023D8  40 81 00 10 */	ble .L_801054A8
/* 8010549C 001023DC  7F E3 FB 78 */	mr r3, r31
/* 801054A0 001023E0  48 00 02 5D */	bl finishScaleDamageAnim__Q24Game9EnemyBaseFv
/* 801054A4 001023E4  48 00 00 10 */	b .L_801054B4
.L_801054A8:
/* 801054A8 001023E8  EC 00 18 24 */	fdivs f0, f0, f3
/* 801054AC 001023EC  C0 22 94 64 */	lfs f1, lbl_805177C4@sda21(r2)
/* 801054B0 001023F0  EF E1 00 28 */	fsubs f31, f1, f0
.L_801054B4:
/* 801054B4 001023F4  C0 22 94 40 */	lfs f1, lbl_805177A0@sda21(r2)
/* 801054B8 001023F8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801054BC 001023FC  EC 21 07 F2 */	fmuls f1, f1, f31
/* 801054C0 00102400  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801054C4 00102404  40 80 00 30 */	bge .L_801054F4
/* 801054C8 00102408  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 801054CC 0010240C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801054D0 00102410  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801054D4 00102414  EC 01 00 32 */	fmuls f0, f1, f0
/* 801054D8 00102418  FC 00 00 1E */	fctiwz f0, f0
/* 801054DC 0010241C  D8 01 00 08 */	stfd f0, 8(r1)
/* 801054E0 00102420  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801054E4 00102424  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801054E8 00102428  7C 03 04 2E */	lfsx f0, r3, r0
/* 801054EC 0010242C  FC 80 00 50 */	fneg f4, f0
/* 801054F0 00102430  48 00 00 28 */	b .L_80105518
.L_801054F4:
/* 801054F4 00102434  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 801054F8 00102438  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801054FC 0010243C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80105500 00102440  EC 01 00 32 */	fmuls f0, f1, f0
/* 80105504 00102444  FC 00 00 1E */	fctiwz f0, f0
/* 80105508 00102448  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8010550C 0010244C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105510 00102450  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80105514 00102454  7C 83 04 2E */	lfsx f4, r3, r0
.L_80105518:
/* 80105518 00102458  C0 22 94 D0 */	lfs f1, lbl_80517830@sda21(r2)
/* 8010551C 0010245C  C0 02 94 60 */	lfs f0, lbl_805177C0@sda21(r2)
/* 80105520 00102460  EC 61 07 B2 */	fmuls f3, f1, f30
/* 80105524 00102464  C0 22 94 40 */	lfs f1, lbl_805177A0@sda21(r2)
/* 80105528 00102468  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8010552C 0010246C  C0 42 94 50 */	lfs f2, lbl_805177B0@sda21(r2)
/* 80105530 00102470  EC 63 01 32 */	fmuls f3, f3, f4
/* 80105534 00102474  EC 21 00 32 */	fmuls f1, f1, f0
/* 80105538 00102478  EC 1F 00 F2 */	fmuls f0, f31, f3
/* 8010553C 0010247C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80105540 00102480  D0 1F 01 B0 */	stfs f0, 0x1b0(r31)
/* 80105544 00102484  D0 5F 01 B4 */	stfs f2, 0x1b4(r31)
/* 80105548 00102488  40 80 00 30 */	bge .L_80105578
/* 8010554C 0010248C  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 80105550 00102490  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80105554 00102494  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80105558 00102498  EC 01 00 32 */	fmuls f0, f1, f0
/* 8010555C 0010249C  FC 00 00 1E */	fctiwz f0, f0
/* 80105560 001024A0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80105564 001024A4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80105568 001024A8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8010556C 001024AC  7C 03 04 2E */	lfsx f0, r3, r0
/* 80105570 001024B0  FC 20 00 50 */	fneg f1, f0
/* 80105574 001024B4  48 00 00 28 */	b .L_8010559C
.L_80105578:
/* 80105578 001024B8  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 8010557C 001024BC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80105580 001024C0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80105584 001024C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80105588 001024C8  FC 00 00 1E */	fctiwz f0, f0
/* 8010558C 001024CC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80105590 001024D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80105594 001024D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80105598 001024D8  7C 23 04 2E */	lfsx f1, r3, r0
.L_8010559C:
/* 8010559C 001024DC  C0 02 94 D4 */	lfs f0, lbl_80517834@sda21(r2)
/* 801055A0 001024E0  EC 00 07 B2 */	fmuls f0, f0, f30
/* 801055A4 001024E4  EC 00 00 72 */	fmuls f0, f0, f1
/* 801055A8 001024E8  EC 1F 00 32 */	fmuls f0, f31, f0
/* 801055AC 001024EC  D0 1F 01 B8 */	stfs f0, 0x1b8(r31)
/* 801055B0 001024F0  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 801055B4 001024F4  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 801055B8 001024F8  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 801055BC 001024FC  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 801055C0 00102500  48 00 01 18 */	b .L_801056D8
.L_801055C4:
/* 801055C4 00102504  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 801055C8 00102508  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801055CC 0010250C  40 81 00 10 */	ble .L_801055DC
/* 801055D0 00102510  7F E3 FB 78 */	mr r3, r31
/* 801055D4 00102514  48 00 01 29 */	bl finishScaleDamageAnim__Q24Game9EnemyBaseFv
/* 801055D8 00102518  48 00 00 78 */	b .L_80105650
.L_801055DC:
/* 801055DC 0010251C  EC 40 18 24 */	fdivs f2, f0, f3
/* 801055E0 00102520  C0 22 94 40 */	lfs f1, lbl_805177A0@sda21(r2)
/* 801055E4 00102524  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801055E8 00102528  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801055EC 0010252C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801055F0 00102530  40 80 00 30 */	bge .L_80105620
/* 801055F4 00102534  C0 02 94 48 */	lfs f0, lbl_805177A8@sda21(r2)
/* 801055F8 00102538  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801055FC 0010253C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80105600 00102540  EC 01 00 32 */	fmuls f0, f1, f0
/* 80105604 00102544  FC 00 00 1E */	fctiwz f0, f0
/* 80105608 00102548  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8010560C 0010254C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80105610 00102550  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80105614 00102554  7C 03 04 2E */	lfsx f0, r3, r0
/* 80105618 00102558  FC 20 00 50 */	fneg f1, f0
/* 8010561C 0010255C  48 00 00 28 */	b .L_80105644
.L_80105620:
/* 80105620 00102560  C0 02 94 4C */	lfs f0, lbl_805177AC@sda21(r2)
/* 80105624 00102564  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80105628 00102568  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8010562C 0010256C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80105630 00102570  FC 00 00 1E */	fctiwz f0, f0
/* 80105634 00102574  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80105638 00102578  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8010563C 0010257C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80105640 00102580  7C 23 04 2E */	lfsx f1, r3, r0
.L_80105644:
/* 80105644 00102584  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80105648 00102588  EC 00 10 28 */	fsubs f0, f0, f2
/* 8010564C 0010258C  EF E0 00 72 */	fmuls f31, f0, f1
.L_80105650:
/* 80105650 00102590  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80105654 00102594  54 80 04 63 */	rlwinm. r0, r4, 0, 0x11, 0x11
/* 80105658 00102598  41 82 00 0C */	beq .L_80105664
/* 8010565C 0010259C  C0 02 94 60 */	lfs f0, lbl_805177C0@sda21(r2)
/* 80105660 001025A0  EF FF 00 32 */	fmuls f31, f31, f0
.L_80105664:
/* 80105664 001025A4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80105668 001025A8  54 80 03 19 */	rlwinm. r0, r4, 0, 0xc, 0xc
/* 8010566C 001025AC  C0 03 02 44 */	lfs f0, 0x244(r3)
/* 80105670 001025B0  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80105674 001025B4  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80105678 001025B8  41 82 00 34 */	beq .L_801056AC
/* 8010567C 001025BC  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 80105680 001025C0  EC 00 10 2A */	fadds f0, f0, f2
/* 80105684 001025C4  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80105688 001025C8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8010568C 001025CC  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 80105690 001025D0  C0 23 02 6C */	lfs f1, 0x26c(r3)
/* 80105694 001025D4  EC 1F 00 7C */	fnmsubs f0, f31, f1, f0
/* 80105698 001025D8  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 8010569C 001025DC  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 801056A0 001025E0  EC 00 10 2A */	fadds f0, f0, f2
/* 801056A4 001025E4  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 801056A8 001025E8  48 00 00 30 */	b .L_801056D8
.L_801056AC:
/* 801056AC 001025EC  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 801056B0 001025F0  EC 00 10 28 */	fsubs f0, f0, f2
/* 801056B4 001025F4  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 801056B8 001025F8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801056BC 001025FC  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 801056C0 00102600  C0 23 02 6C */	lfs f1, 0x26c(r3)
/* 801056C4 00102604  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 801056C8 00102608  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 801056CC 0010260C  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 801056D0 00102610  EC 00 10 28 */	fsubs f0, f0, f2
/* 801056D4 00102614  D0 1F 01 70 */	stfs f0, 0x170(r31)
.L_801056D8:
/* 801056D8 00102618  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801056DC 0010261C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801056E0 00102620  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801056E4 00102624  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801056E8 00102628  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801056EC 0010262C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801056F0 00102630  7C 08 03 A6 */	mtlr r0
/* 801056F4 00102634  38 21 00 50 */	addi r1, r1, 0x50
/* 801056F8 00102638  4E 80 00 20 */	blr 

.global finishScaleDamageAnim__Q24Game9EnemyBaseFv
finishScaleDamageAnim__Q24Game9EnemyBaseFv:
/* 801056FC 0010263C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80105700 00102640  D0 03 02 10 */	stfs f0, 0x210(r3)
/* 80105704 00102644  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80105708 00102648  54 00 04 A0 */	rlwinm r0, r0, 0, 0x12, 0x10
/* 8010570C 0010264C  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80105710 00102650  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80105714 00102654  54 00 03 56 */	rlwinm r0, r0, 0, 0xd, 0xb
/* 80105718 00102658  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8010571C 0010265C  4E 80 00 20 */	blr 

.global deathProcedure__Q24Game9EnemyBaseFv
deathProcedure__Q24Game9EnemyBaseFv:
/* 80105720 00102660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80105724 00102664  7C 08 02 A6 */	mflr r0
/* 80105728 00102668  38 80 00 00 */	li r4, 0
/* 8010572C 0010266C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105730 00102670  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80105734 00102674  7C 7F 1B 78 */	mr r31, r3
/* 80105738 00102678  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8010573C 0010267C  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80105740 00102680  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80105744 00102684  81 83 00 00 */	lwz r12, 0(r3)
/* 80105748 00102688  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8010574C 0010268C  7D 89 03 A6 */	mtctr r12
/* 80105750 00102690  4E 80 04 21 */	bctrl 
/* 80105754 00102694  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80105758 00102698  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8010575C 0010269C  41 82 00 1C */	beq .L_80105778
/* 80105760 001026A0  7F E3 FB 78 */	mr r3, r31
/* 80105764 001026A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80105768 001026A8  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 8010576C 001026AC  7D 89 03 A6 */	mtctr r12
/* 80105770 001026B0  4E 80 04 21 */	bctrl 
/* 80105774 001026B4  48 00 00 18 */	b .L_8010578C
.L_80105778:
/* 80105778 001026B8  7F E3 FB 78 */	mr r3, r31
/* 8010577C 001026BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80105780 001026C0  81 8C 02 70 */	lwz r12, 0x270(r12)
/* 80105784 001026C4  7D 89 03 A6 */	mtctr r12
/* 80105788 001026C8  4E 80 04 21 */	bctrl 
.L_8010578C:
/* 8010578C 001026CC  7F E3 FB 78 */	mr r3, r31
/* 80105790 001026D0  48 00 1A 75 */	bl startMotion__Q24Game9EnemyBaseFv
/* 80105794 001026D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80105798 001026D8  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8010579C 001026DC  41 82 00 18 */	beq .L_801057B4
/* 801057A0 001026E0  7F E3 FB 78 */	mr r3, r31
/* 801057A4 001026E4  48 00 00 D1 */	bl createDeadBombEffect__Q24Game9EnemyBaseFv
/* 801057A8 001026E8  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801057AC 001026EC  7F E3 FB 78 */	mr r3, r31
/* 801057B0 001026F0  48 36 8C 65 */	bl PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
.L_801057B4:
/* 801057B4 001026F4  83 FF 02 8C */	lwz r31, 0x28c(r31)
/* 801057B8 001026F8  7F E3 FB 78 */	mr r3, r31
/* 801057BC 001026FC  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 801057C0 00102700  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801057C4 00102704  7D 89 03 A6 */	mtctr r12
/* 801057C8 00102708  4E 80 04 21 */	bctrl 
/* 801057CC 0010270C  2C 03 00 06 */	cmpwi r3, 6
/* 801057D0 00102710  41 82 00 20 */	beq .L_801057F0
/* 801057D4 00102714  7F E3 FB 78 */	mr r3, r31
/* 801057D8 00102718  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 801057DC 0010271C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801057E0 00102720  7D 89 03 A6 */	mtctr r12
/* 801057E4 00102724  4E 80 04 21 */	bctrl 
/* 801057E8 00102728  2C 03 00 07 */	cmpwi r3, 7
/* 801057EC 0010272C  40 82 00 18 */	bne .L_80105804
.L_801057F0:
/* 801057F0 00102730  7F E3 FB 78 */	mr r3, r31
/* 801057F4 00102734  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 801057F8 00102738  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 801057FC 0010273C  7D 89 03 A6 */	mtctr r12
/* 80105800 00102740  4E 80 04 21 */	bctrl 
.L_80105804:
/* 80105804 00102744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105808 00102748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010580C 0010274C  7C 08 03 A6 */	mtlr r0
/* 80105810 00102750  38 21 00 10 */	addi r1, r1, 0x10
/* 80105814 00102754  4E 80 00 20 */	blr 

.global getCastType__Q23PSM9EnemyBaseFv
getCastType__Q23PSM9EnemyBaseFv:
/* 80105818 00102758  38 60 00 02 */	li r3, 2
/* 8010581C 0010275C  4E 80 00 20 */	blr 

.global throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
throwupItemInDeathProcedure__Q24Game9EnemyBaseFv:
/* 80105820 00102760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80105824 00102764  7C 08 02 A6 */	mflr r0
/* 80105828 00102768  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010582C 0010276C  81 83 00 00 */	lwz r12, 0(r3)
/* 80105830 00102770  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 80105834 00102774  7D 89 03 A6 */	mtctr r12
/* 80105838 00102778  4E 80 04 21 */	bctrl 
/* 8010583C 0010277C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105840 00102780  7C 08 03 A6 */	mtlr r0
/* 80105844 00102784  38 21 00 10 */	addi r1, r1, 0x10
/* 80105848 00102788  4E 80 00 20 */	blr 

.global setAlive__Q24Game8CreatureFb
setAlive__Q24Game8CreatureFb:
/* 8010584C 0010278C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80105850 00102790  41 82 00 14 */	beq .L_80105864
/* 80105854 00102794  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80105858 00102798  60 00 00 02 */	ori r0, r0, 2
/* 8010585C 0010279C  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80105860 001027A0  4E 80 00 20 */	blr 
.L_80105864:
/* 80105864 001027A4  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80105868 001027A8  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8010586C 001027AC  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80105870 001027B0  4E 80 00 20 */	blr 

.global createDeadBombEffect__Q24Game9EnemyBaseFv
createDeadBombEffect__Q24Game9EnemyBaseFv:
/* 80105874 001027B4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80105878 001027B8  7C 08 02 A6 */	mflr r0
/* 8010587C 001027BC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80105880 001027C0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80105884 001027C4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80105888 001027C8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8010588C 001027CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80105890 001027D0  7C 7F 1B 78 */	mr r31, r3
/* 80105894 001027D4  38 81 00 18 */	addi r4, r1, 0x18
/* 80105898 001027D8  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 8010589C 001027DC  7D 89 03 A6 */	mtctr r12
/* 801058A0 001027E0  4E 80 04 21 */	bctrl 
/* 801058A4 001027E4  7F E3 FB 78 */	mr r3, r31
/* 801058A8 001027E8  C3 FF 01 F8 */	lfs f31, 0x1f8(r31)
/* 801058AC 001027EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801058B0 001027F0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801058B4 001027F4  7D 89 03 A6 */	mtctr r12
/* 801058B8 001027F8  4E 80 04 21 */	bctrl 
/* 801058BC 001027FC  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 801058C0 00102800  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 801058C4 00102804  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801058C8 00102808  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801058CC 0010280C  81 01 00 20 */	lwz r8, 0x20(r1)
/* 801058D0 00102810  38 E5 A7 EC */	addi r7, r5, __vt__Q23efx3Arg@l
/* 801058D4 00102814  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801058D8 00102818  38 A4 A7 F8 */	addi r5, r4, __vt__Q23efx5TBase@l
/* 801058DC 0010281C  3C C0 80 4B */	lis r6, __vt__Q23efx12ArgEnemyType@ha
/* 801058E0 00102820  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyBomb@ha
/* 801058E4 00102824  90 01 00 10 */	stw r0, 0x10(r1)
/* 801058E8 00102828  38 C6 A7 E0 */	addi r6, r6, __vt__Q23efx12ArgEnemyType@l
/* 801058EC 0010282C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801058F0 00102830  38 04 85 D4 */	addi r0, r4, __vt__Q23efx10TEnemyBomb@l
/* 801058F4 00102834  91 01 00 14 */	stw r8, 0x14(r1)
/* 801058F8 00102838  38 81 00 24 */	addi r4, r1, 0x24
/* 801058FC 0010283C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80105900 00102840  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80105904 00102844  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80105908 00102848  90 A1 00 08 */	stw r5, 8(r1)
/* 8010590C 0010284C  90 61 00 34 */	stw r3, 0x34(r1)
/* 80105910 00102850  38 61 00 08 */	addi r3, r1, 8
/* 80105914 00102854  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80105918 00102858  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8010591C 0010285C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80105920 00102860  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80105924 00102864  D3 E1 00 38 */	stfs f31, 0x38(r1)
/* 80105928 00102868  90 01 00 08 */	stw r0, 8(r1)
/* 8010592C 0010286C  48 2C 34 59 */	bl create__Q23efx10TEnemyBombFPQ23efx3Arg
/* 80105930 00102870  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80105934 00102874  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80105938 00102878  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8010593C 0010287C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80105940 00102880  7C 08 03 A6 */	mtlr r0
/* 80105944 00102884  38 21 00 60 */	addi r1, r1, 0x60
/* 80105948 00102888  4E 80 00 20 */	blr 

.global "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
"getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>":
/* 8010594C 0010288C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80105950 00102890  7C 08 02 A6 */	mflr r0
/* 80105954 00102894  90 01 00 24 */	stw r0, 0x24(r1)
/* 80105958 00102898  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010595C 0010289C  7C 9F 23 78 */	mr r31, r4
/* 80105960 001028A0  38 81 00 08 */	addi r4, r1, 8
/* 80105964 001028A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80105968 001028A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8010596C 001028AC  7D 89 03 A6 */	mtctr r12
/* 80105970 001028B0  4E 80 04 21 */	bctrl 
/* 80105974 001028B4  C0 01 00 08 */	lfs f0, 8(r1)
/* 80105978 001028B8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8010597C 001028BC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80105980 001028C0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80105984 001028C4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80105988 001028C8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8010598C 001028CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80105990 001028D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80105994 001028D4  7C 08 03 A6 */	mtlr r0
/* 80105998 001028D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8010599C 001028DC  4E 80 00 20 */	blr 

.global "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
"getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>":
/* 801059A0 001028E0  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801059A4 001028E4  C0 02 94 D8 */	lfs f0, lbl_80517838@sda21(r2)
/* 801059A8 001028E8  D0 24 00 00 */	stfs f1, 0(r4)
/* 801059AC 001028EC  D0 04 00 04 */	stfs f0, 4(r4)
/* 801059B0 001028F0  D0 24 00 08 */	stfs f1, 8(r4)
/* 801059B4 001028F4  4E 80 00 20 */	blr 

.global throwupItem__Q24Game9EnemyBaseFv
throwupItem__Q24Game9EnemyBaseFv:
/* 801059B8 001028F8  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 801059BC 001028FC  7C 08 02 A6 */	mflr r0
/* 801059C0 00102900  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 801059C4 00102904  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 801059C8 00102908  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 801059CC 0010290C  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 801059D0 00102910  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 801059D4 00102914  93 E1 00 AC */	stw r31, 0xac(r1)
/* 801059D8 00102918  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 801059DC 0010291C  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 801059E0 00102920  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 801059E4 00102924  81 83 00 00 */	lwz r12, 0(r3)
/* 801059E8 00102928  7C 7F 1B 78 */	mr r31, r3
/* 801059EC 0010292C  38 81 00 2C */	addi r4, r1, 0x2c
/* 801059F0 00102930  81 8C 02 68 */	lwz r12, 0x268(r12)
/* 801059F4 00102934  7D 89 03 A6 */	mtctr r12
/* 801059F8 00102938  4E 80 04 21 */	bctrl 
/* 801059FC 0010293C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 80105A00 00102940  39 00 00 00 */	li r8, 0
/* 80105A04 00102944  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 80105A08 00102948  38 00 FF FF */	li r0, -1
/* 80105A0C 0010294C  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 80105A10 00102950  90 81 00 60 */	stw r4, 0x60(r1)
/* 80105A14 00102954  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 80105A18 00102958  38 E0 00 FF */	li r7, 0xff
/* 80105A1C 0010295C  38 C0 00 01 */	li r6, 1
/* 80105A20 00102960  90 61 00 60 */	stw r3, 0x60(r1)
/* 80105A24 00102964  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80105A28 00102968  38 81 00 60 */	addi r4, r1, 0x60
/* 80105A2C 0010296C  99 01 00 7C */	stb r8, 0x7c(r1)
/* 80105A30 00102970  38 BF 02 50 */	addi r5, r31, 0x250
/* 80105A34 00102974  B1 01 00 74 */	sth r8, 0x74(r1)
/* 80105A38 00102978  98 E1 00 76 */	stb r7, 0x76(r1)
/* 80105A3C 0010297C  91 01 00 78 */	stw r8, 0x78(r1)
/* 80105A40 00102980  99 01 00 77 */	stb r8, 0x77(r1)
/* 80105A44 00102984  98 C1 00 64 */	stb r6, 0x64(r1)
/* 80105A48 00102988  99 01 00 7D */	stb r8, 0x7d(r1)
/* 80105A4C 0010298C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80105A50 00102990  90 01 00 80 */	stw r0, 0x80(r1)
/* 80105A54 00102994  99 01 00 7E */	stb r8, 0x7e(r1)
/* 80105A58 00102998  99 01 00 7F */	stb r8, 0x7f(r1)
/* 80105A5C 0010299C  48 06 81 35 */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
/* 80105A60 001029A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80105A64 001029A4  41 82 01 A4 */	beq .L_80105C08
/* 80105A68 001029A8  38 00 00 02 */	li r0, 2
/* 80105A6C 001029AC  7F E3 FB 78 */	mr r3, r31
/* 80105A70 001029B0  B0 01 00 74 */	sth r0, 0x74(r1)
/* 80105A74 001029B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80105A78 001029B8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80105A7C 001029BC  7D 89 03 A6 */	mtctr r12
/* 80105A80 001029C0  4E 80 04 21 */	bctrl 
/* 80105A84 001029C4  2C 03 00 1E */	cmpwi r3, 0x1e
/* 80105A88 001029C8  41 82 00 58 */	beq .L_80105AE0
/* 80105A8C 001029CC  2C 03 00 22 */	cmpwi r3, 0x22
/* 80105A90 001029D0  41 82 00 50 */	beq .L_80105AE0
/* 80105A94 001029D4  2C 03 00 35 */	cmpwi r3, 0x35
/* 80105A98 001029D8  41 82 00 48 */	beq .L_80105AE0
/* 80105A9C 001029DC  2C 03 00 38 */	cmpwi r3, 0x38
/* 80105AA0 001029E0  41 82 00 40 */	beq .L_80105AE0
/* 80105AA4 001029E4  2C 03 00 28 */	cmpwi r3, 0x28
/* 80105AA8 001029E8  41 82 00 38 */	beq .L_80105AE0
/* 80105AAC 001029EC  2C 03 00 42 */	cmpwi r3, 0x42
/* 80105AB0 001029F0  41 82 00 30 */	beq .L_80105AE0
/* 80105AB4 001029F4  2C 03 00 65 */	cmpwi r3, 0x65
/* 80105AB8 001029F8  41 82 00 28 */	beq .L_80105AE0
/* 80105ABC 001029FC  2C 03 00 63 */	cmpwi r3, 0x63
/* 80105AC0 00102A00  41 82 00 20 */	beq .L_80105AE0
/* 80105AC4 00102A04  2C 03 00 5E */	cmpwi r3, 0x5e
/* 80105AC8 00102A08  41 82 00 18 */	beq .L_80105AE0
/* 80105ACC 00102A0C  38 03 FF BB */	addi r0, r3, -69
/* 80105AD0 00102A10  28 00 00 02 */	cmplwi r0, 2
/* 80105AD4 00102A14  40 81 00 0C */	ble .L_80105AE0
/* 80105AD8 00102A18  2C 03 00 49 */	cmpwi r3, 0x49
/* 80105ADC 00102A1C  40 82 00 48 */	bne .L_80105B24
.L_80105AE0:
/* 80105AE0 00102A20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80105AE4 00102A24  28 03 00 00 */	cmplwi r3, 0
/* 80105AE8 00102A28  41 82 00 3C */	beq .L_80105B24
/* 80105AEC 00102A2C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80105AF0 00102A30  2C 00 00 00 */	cmpwi r0, 0
/* 80105AF4 00102A34  40 82 00 30 */	bne .L_80105B24
/* 80105AF8 00102A38  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80105AFC 00102A3C  28 00 00 00 */	cmplwi r0, 0
/* 80105B00 00102A40  41 82 00 24 */	beq .L_80105B24
/* 80105B04 00102A44  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80105B08 00102A48  28 03 00 00 */	cmplwi r3, 0
/* 80105B0C 00102A4C  41 82 00 18 */	beq .L_80105B24
/* 80105B10 00102A50  48 13 F3 85 */	bl isLastFloor__Q34Game4Cave10RandMapMgrFv
/* 80105B14 00102A54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80105B18 00102A58  41 82 00 0C */	beq .L_80105B24
/* 80105B1C 00102A5C  38 00 00 01 */	li r0, 1
/* 80105B20 00102A60  98 01 00 7D */	stb r0, 0x7d(r1)
.L_80105B24:
/* 80105B24 00102A64  88 0D 84 20 */	lbz r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
/* 80105B28 00102A68  28 00 00 00 */	cmplwi r0, 0
/* 80105B2C 00102A6C  41 82 00 0C */	beq .L_80105B38
/* 80105B30 00102A70  38 00 00 01 */	li r0, 1
/* 80105B34 00102A74  98 01 00 7F */	stb r0, 0x7f(r1)
.L_80105B38:
/* 80105B38 00102A78  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80105B3C 00102A7C  38 81 00 60 */	addi r4, r1, 0x60
/* 80105B40 00102A80  48 06 79 81 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 80105B44 00102A84  90 7F 02 54 */	stw r3, 0x254(r31)
/* 80105B48 00102A88  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80105B4C 00102A8C  28 03 00 00 */	cmplwi r3, 0
/* 80105B50 00102A90  41 82 00 B8 */	beq .L_80105C08
/* 80105B54 00102A94  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80105B58 00102A98  C0 02 94 DC */	lfs f0, lbl_8051783C@sda21(r2)
/* 80105B5C 00102A9C  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 80105B60 00102AA0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 80105B64 00102AA4  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 80105B68 00102AA8  90 01 00 20 */	stw r0, 0x20(r1)
/* 80105B6C 00102AAC  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 80105B70 00102AB0  38 81 00 20 */	addi r4, r1, 0x20
/* 80105B74 00102AB4  90 01 00 20 */	stw r0, 0x20(r1)
/* 80105B78 00102AB8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80105B7C 00102ABC  81 83 00 00 */	lwz r12, 0(r3)
/* 80105B80 00102AC0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80105B84 00102AC4  7D 89 03 A6 */	mtctr r12
/* 80105B88 00102AC8  4E 80 04 21 */	bctrl 
/* 80105B8C 00102ACC  7F E3 FB 78 */	mr r3, r31
/* 80105B90 00102AD0  38 81 00 14 */	addi r4, r1, 0x14
/* 80105B94 00102AD4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80105B98 00102AD8  81 8C 02 6C */	lwz r12, 0x26c(r12)
/* 80105B9C 00102ADC  7D 89 03 A6 */	mtctr r12
/* 80105BA0 00102AE0  4E 80 04 21 */	bctrl 
/* 80105BA4 00102AE4  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80105BA8 00102AE8  38 81 00 2C */	addi r4, r1, 0x2c
/* 80105BAC 00102AEC  38 A0 00 00 */	li r5, 0
/* 80105BB0 00102AF0  48 03 55 F9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80105BB4 00102AF4  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80105BB8 00102AF8  38 81 00 14 */	addi r4, r1, 0x14
/* 80105BBC 00102AFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80105BC0 00102B00  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80105BC4 00102B04  7D 89 03 A6 */	mtctr r12
/* 80105BC8 00102B08  4E 80 04 21 */	bctrl 
/* 80105BCC 00102B0C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80105BD0 00102B10  38 81 00 2C */	addi r4, r1, 0x2c
/* 80105BD4 00102B14  81 83 00 00 */	lwz r12, 0(r3)
/* 80105BD8 00102B18  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 80105BDC 00102B1C  7D 89 03 A6 */	mtctr r12
/* 80105BE0 00102B20  4E 80 04 21 */	bctrl 
/* 80105BE4 00102B24  7F E3 FB 78 */	mr r3, r31
/* 80105BE8 00102B28  48 11 8A 0D */	bl exit__Q25Radar3MgrFPQ24Game15TPositionObject
/* 80105BEC 00102B2C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80105BF0 00102B30  38 80 58 10 */	li r4, 0x5810
/* 80105BF4 00102B34  38 A0 00 00 */	li r5, 0
/* 80105BF8 00102B38  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80105BFC 00102B3C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80105C00 00102B40  7D 89 03 A6 */	mtctr r12
/* 80105C04 00102B44  4E 80 04 21 */	bctrl 
.L_80105C08:
/* 80105C08 00102B48  4B FC 39 99 */	bl rand
/* 80105C0C 00102B4C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80105C10 00102B50  3C 00 43 30 */	lis r0, 0x4330
/* 80105C14 00102B54  90 61 00 8C */	stw r3, 0x8c(r1)
/* 80105C18 00102B58  C8 62 94 58 */	lfd f3, lbl_805177B8@sda21(r2)
/* 80105C1C 00102B5C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80105C20 00102B60  C0 22 94 3C */	lfs f1, lbl_8051779C@sda21(r2)
/* 80105C24 00102B64  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 80105C28 00102B68  C0 1F 02 5C */	lfs f0, 0x25c(r31)
/* 80105C2C 00102B6C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80105C30 00102B70  EC 22 08 24 */	fdivs f1, f2, f1
/* 80105C34 00102B74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80105C38 00102B78  40 80 02 00 */	bge .L_80105E38
/* 80105C3C 00102B7C  4B FC 39 65 */	bl rand
/* 80105C40 00102B80  3C 80 43 30 */	lis r4, 0x4330
/* 80105C44 00102B84  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80105C48 00102B88  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80105C4C 00102B8C  C8 62 94 58 */	lfd f3, lbl_805177B8@sda21(r2)
/* 80105C50 00102B90  90 81 00 88 */	stw r4, 0x88(r1)
/* 80105C54 00102B94  C0 22 94 3C */	lfs f1, lbl_8051779C@sda21(r2)
/* 80105C58 00102B98  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80105C5C 00102B9C  88 BF 02 5A */	lbz r5, 0x25a(r31)
/* 80105C60 00102BA0  EC 40 18 28 */	fsubs f2, f0, f3
/* 80105C64 00102BA4  88 1F 02 5B */	lbz r0, 0x25b(r31)
/* 80105C68 00102BA8  90 81 00 90 */	stw r4, 0x90(r1)
/* 80105C6C 00102BAC  7C 05 00 50 */	subf r0, r5, r0
/* 80105C70 00102BB0  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80105C74 00102BB4  EC 42 08 24 */	fdivs f2, f2, f1
/* 80105C78 00102BB8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80105C7C 00102BBC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80105C80 00102BC0  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 80105C84 00102BC4  EC 21 18 28 */	fsubs f1, f1, f3
/* 80105C88 00102BC8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80105C8C 00102BCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80105C90 00102BD0  4C 41 13 82 */	cror 2, 1, 2
/* 80105C94 00102BD4  40 82 00 10 */	bne .L_80105CA4
/* 80105C98 00102BD8  C0 02 94 B4 */	lfs f0, lbl_80517814@sda21(r2)
/* 80105C9C 00102BDC  EC 00 08 2A */	fadds f0, f0, f1
/* 80105CA0 00102BE0  48 00 00 0C */	b .L_80105CAC
.L_80105CA4:
/* 80105CA4 00102BE4  C0 02 94 B4 */	lfs f0, lbl_80517814@sda21(r2)
/* 80105CA8 00102BE8  EC 01 00 28 */	fsubs f0, f1, f0
.L_80105CAC:
/* 80105CAC 00102BEC  FC 00 00 1E */	fctiwz f0, f0
/* 80105CB0 00102BF0  88 1F 02 59 */	lbz r0, 0x259(r31)
/* 80105CB4 00102BF4  C3 E2 94 50 */	lfs f31, lbl_805177B0@sda21(r2)
/* 80105CB8 00102BF8  28 00 00 14 */	cmplwi r0, 0x14
/* 80105CBC 00102BFC  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 80105CC0 00102C00  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 80105CC4 00102C04  7F C5 1A 14 */	add r30, r5, r3
/* 80105CC8 00102C08  41 81 00 38 */	bgt .L_80105D00
/* 80105CCC 00102C0C  3C 60 80 4B */	lis r3, lbl_804AA15C@ha
/* 80105CD0 00102C10  54 00 10 3A */	slwi r0, r0, 2
/* 80105CD4 00102C14  38 63 A1 5C */	addi r3, r3, lbl_804AA15C@l
/* 80105CD8 00102C18  7C 03 00 2E */	lwzx r0, r3, r0
/* 80105CDC 00102C1C  7C 09 03 A6 */	mtctr r0
/* 80105CE0 00102C20  4E 80 04 20 */	bctr 
.L_80105CE4:
/* 80105CE4 00102C24  C3 E2 94 E0 */	lfs f31, lbl_80517840@sda21(r2)
/* 80105CE8 00102C28  48 00 00 18 */	b .L_80105D00
.L_80105CEC:
/* 80105CEC 00102C2C  C3 E2 94 D8 */	lfs f31, lbl_80517838@sda21(r2)
/* 80105CF0 00102C30  48 00 00 10 */	b .L_80105D00
.L_80105CF4:
/* 80105CF4 00102C34  C3 E2 94 BC */	lfs f31, lbl_8051781C@sda21(r2)
/* 80105CF8 00102C38  48 00 00 08 */	b .L_80105D00
.L_80105CFC:
/* 80105CFC 00102C3C  C3 E2 94 BC */	lfs f31, lbl_8051781C@sda21(r2)
.L_80105D00:
/* 80105D00 00102C40  3B A0 00 00 */	li r29, 0
/* 80105D04 00102C44  48 00 01 2C */	b .L_80105E30
.L_80105D08:
/* 80105D08 00102C48  88 1F 02 58 */	lbz r0, 0x258(r31)
/* 80105D0C 00102C4C  28 00 00 03 */	cmplwi r0, 3
/* 80105D10 00102C50  40 82 00 40 */	bne .L_80105D50
/* 80105D14 00102C54  4B FC 38 8D */	bl rand
/* 80105D18 00102C58  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80105D1C 00102C5C  3C 00 43 30 */	lis r0, 0x4330
/* 80105D20 00102C60  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80105D24 00102C64  C8 62 94 58 */	lfd f3, lbl_805177B8@sda21(r2)
/* 80105D28 00102C68  90 01 00 98 */	stw r0, 0x98(r1)
/* 80105D2C 00102C6C  C0 22 94 3C */	lfs f1, lbl_8051779C@sda21(r2)
/* 80105D30 00102C70  C8 41 00 98 */	lfd f2, 0x98(r1)
/* 80105D34 00102C74  C0 02 94 C8 */	lfs f0, lbl_80517828@sda21(r2)
/* 80105D38 00102C78  EC 42 18 28 */	fsubs f2, f2, f3
/* 80105D3C 00102C7C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80105D40 00102C80  EC 00 00 72 */	fmuls f0, f0, f1
/* 80105D44 00102C84  FC 00 00 1E */	fctiwz f0, f0
/* 80105D48 00102C88  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 80105D4C 00102C8C  80 01 00 94 */	lwz r0, 0x94(r1)
.L_80105D50:
/* 80105D50 00102C90  88 9F 02 59 */	lbz r4, 0x259(r31)
/* 80105D54 00102C94  38 61 00 38 */	addi r3, r1, 0x38
/* 80105D58 00102C98  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 80105D5C 00102C9C  48 06 0E 19 */	bl __ct__Q24Game19PelletNumberInitArgFii
/* 80105D60 00102CA0  38 00 00 02 */	li r0, 2
/* 80105D64 00102CA4  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80105D68 00102CA8  B0 01 00 4C */	sth r0, 0x4c(r1)
/* 80105D6C 00102CAC  38 81 00 38 */	addi r4, r1, 0x38
/* 80105D70 00102CB0  48 06 77 51 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 80105D74 00102CB4  7C 7C 1B 79 */	or. r28, r3, r3
/* 80105D78 00102CB8  41 82 00 B4 */	beq .L_80105E2C
/* 80105D7C 00102CBC  4B FC 38 25 */	bl rand
/* 80105D80 00102CC0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80105D84 00102CC4  3C 00 43 30 */	lis r0, 0x4330
/* 80105D88 00102CC8  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80105D8C 00102CCC  C8 42 94 58 */	lfd f2, lbl_805177B8@sda21(r2)
/* 80105D90 00102CD0  90 01 00 98 */	stw r0, 0x98(r1)
/* 80105D94 00102CD4  C0 02 94 3C */	lfs f0, lbl_8051779C@sda21(r2)
/* 80105D98 00102CD8  C8 21 00 98 */	lfd f1, 0x98(r1)
/* 80105D9C 00102CDC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80105DA0 00102CE0  EF C1 00 24 */	fdivs f30, f1, f0
/* 80105DA4 00102CE4  4B FC 37 FD */	bl rand
/* 80105DA8 00102CE8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80105DAC 00102CEC  3C 00 43 30 */	lis r0, 0x4330
/* 80105DB0 00102CF0  90 61 00 94 */	stw r3, 0x94(r1)
/* 80105DB4 00102CF4  7F 83 E3 78 */	mr r3, r28
/* 80105DB8 00102CF8  C0 22 94 B4 */	lfs f1, lbl_80517814@sda21(r2)
/* 80105DBC 00102CFC  38 81 00 2C */	addi r4, r1, 0x2c
/* 80105DC0 00102D00  90 01 00 90 */	stw r0, 0x90(r1)
/* 80105DC4 00102D04  38 A0 00 00 */	li r5, 0
/* 80105DC8 00102D08  C8 82 94 58 */	lfd f4, lbl_805177B8@sda21(r2)
/* 80105DCC 00102D0C  EC 1E 08 28 */	fsubs f0, f30, f1
/* 80105DD0 00102D10  C8 61 00 90 */	lfd f3, 0x90(r1)
/* 80105DD4 00102D14  C0 42 94 3C */	lfs f2, lbl_8051779C@sda21(r2)
/* 80105DD8 00102D18  EC 63 20 28 */	fsubs f3, f3, f4
/* 80105DDC 00102D1C  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 80105DE0 00102D20  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80105DE4 00102D24  EC 43 10 24 */	fdivs f2, f3, f2
/* 80105DE8 00102D28  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80105DEC 00102D2C  EC 02 08 28 */	fsubs f0, f2, f1
/* 80105DF0 00102D30  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80105DF4 00102D34  D0 01 00 08 */	stfs f0, 8(r1)
/* 80105DF8 00102D38  48 03 53 B1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80105DFC 00102D3C  7F 83 E3 78 */	mr r3, r28
/* 80105E00 00102D40  38 81 00 08 */	addi r4, r1, 8
/* 80105E04 00102D44  81 9C 00 00 */	lwz r12, 0(r28)
/* 80105E08 00102D48  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80105E0C 00102D4C  7D 89 03 A6 */	mtctr r12
/* 80105E10 00102D50  4E 80 04 21 */	bctrl 
/* 80105E14 00102D54  7F 83 E3 78 */	mr r3, r28
/* 80105E18 00102D58  38 81 00 2C */	addi r4, r1, 0x2c
/* 80105E1C 00102D5C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80105E20 00102D60  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 80105E24 00102D64  7D 89 03 A6 */	mtctr r12
/* 80105E28 00102D68  4E 80 04 21 */	bctrl 
.L_80105E2C:
/* 80105E2C 00102D6C  3B BD 00 01 */	addi r29, r29, 1
.L_80105E30:
/* 80105E30 00102D70  7C 1D F0 00 */	cmpw r29, r30
/* 80105E34 00102D74  41 80 FE D4 */	blt .L_80105D08
.L_80105E38:
/* 80105E38 00102D78  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 80105E3C 00102D7C  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80105E40 00102D80  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 80105E44 00102D84  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 80105E48 00102D88  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80105E4C 00102D8C  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80105E50 00102D90  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80105E54 00102D94  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80105E58 00102D98  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 80105E5C 00102D9C  7C 08 03 A6 */	mtlr r0
/* 80105E60 00102DA0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80105E64 00102DA4  4E 80 00 20 */	blr 

.global "createKiraEffect__Q24Game6PelletFR10Vector3<f>"
"createKiraEffect__Q24Game6PelletFR10Vector3<f>":
/* 80105E68 00102DA8  4E 80 00 20 */	blr 

.global doDebugDraw__Q24Game9EnemyBaseFR8Graphics
doDebugDraw__Q24Game9EnemyBaseFR8Graphics:
/* 80105E6C 00102DAC  4E 80 00 20 */	blr 

.global getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam:
/* 80105E70 00102DB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80105E74 00102DB4  7C 08 02 A6 */	mflr r0
/* 80105E78 00102DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105E7C 00102DBC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80105E80 00102DC0  28 05 00 00 */	cmplwi r5, 0
/* 80105E84 00102DC4  41 82 00 1C */	beq .L_80105EA0
/* 80105E88 00102DC8  80 05 01 F0 */	lwz r0, 0x1f0(r5)
/* 80105E8C 00102DCC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80105E90 00102DD0  41 82 00 10 */	beq .L_80105EA0
/* 80105E94 00102DD4  38 00 00 00 */	li r0, 0
/* 80105E98 00102DD8  98 04 00 14 */	stb r0, 0x14(r4)
/* 80105E9C 00102DDC  48 00 00 28 */	b .L_80105EC4
.L_80105EA0:
/* 80105EA0 00102DE0  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80105EA4 00102DE4  38 A0 00 00 */	li r5, 0
/* 80105EA8 00102DE8  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80105EAC 00102DEC  41 82 00 14 */	beq .L_80105EC0
/* 80105EB0 00102DF0  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 80105EB4 00102DF4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80105EB8 00102DF8  41 82 00 08 */	beq .L_80105EC0
/* 80105EBC 00102DFC  38 A0 00 01 */	li r5, 1
.L_80105EC0:
/* 80105EC0 00102E00  98 A4 00 14 */	stb r5, 0x14(r4)
.L_80105EC4:
/* 80105EC4 00102E04  88 04 00 14 */	lbz r0, 0x14(r4)
/* 80105EC8 00102E08  28 00 00 00 */	cmplwi r0, 0
/* 80105ECC 00102E0C  41 82 00 14 */	beq .L_80105EE0
/* 80105ED0 00102E10  81 83 00 00 */	lwz r12, 0(r3)
/* 80105ED4 00102E14  81 8C 02 60 */	lwz r12, 0x260(r12)
/* 80105ED8 00102E18  7D 89 03 A6 */	mtctr r12
/* 80105EDC 00102E1C  4E 80 04 21 */	bctrl 
.L_80105EE0:
/* 80105EE0 00102E20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105EE4 00102E24  7C 08 03 A6 */	mtlr r0
/* 80105EE8 00102E28  38 21 00 10 */	addi r1, r1, 0x10
/* 80105EEC 00102E2C  4E 80 00 20 */	blr 

.global doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam:
/* 80105EF0 00102E30  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80105EF4 00102E34  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 80105EF8 00102E38  C0 05 01 2C */	lfs f0, 0x12c(r5)
/* 80105EFC 00102E3C  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 80105F00 00102E40  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80105F04 00102E44  EC 42 00 2A */	fadds f2, f2, f0
/* 80105F08 00102E48  C0 02 94 B8 */	lfs f0, lbl_80517818@sda21(r2)
/* 80105F0C 00102E4C  D0 24 00 00 */	stfs f1, 0(r4)
/* 80105F10 00102E50  D0 44 00 04 */	stfs f2, 4(r4)
/* 80105F14 00102E54  D0 64 00 08 */	stfs f3, 8(r4)
/* 80105F18 00102E58  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 80105F1C 00102E5C  C0 23 02 04 */	lfs f1, 0x204(r3)
/* 80105F20 00102E60  EC 22 08 24 */	fdivs f1, f2, f1
/* 80105F24 00102E64  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 80105F28 00102E68  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80105F2C 00102E6C  4E 80 00 20 */	blr 

.global onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature
onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature:
/* 80105F30 00102E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80105F34 00102E74  7C 08 02 A6 */	mflr r0
/* 80105F38 00102E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105F3C 00102E7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80105F40 00102E80  7C 7F 1B 78 */	mr r31, r3
/* 80105F44 00102E84  7C 83 23 78 */	mr r3, r4
/* 80105F48 00102E88  81 84 00 00 */	lwz r12, 0(r4)
/* 80105F4C 00102E8C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80105F50 00102E90  7D 89 03 A6 */	mtctr r12
/* 80105F54 00102E94  4E 80 04 21 */	bctrl 
/* 80105F58 00102E98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80105F5C 00102E9C  41 82 00 10 */	beq .L_80105F6C
/* 80105F60 00102EA0  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 80105F64 00102EA4  38 03 00 01 */	addi r0, r3, 1
/* 80105F68 00102EA8  90 1F 01 F4 */	stw r0, 0x1f4(r31)
.L_80105F6C:
/* 80105F6C 00102EAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105F70 00102EB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80105F74 00102EB4  7C 08 03 A6 */	mtlr r0
/* 80105F78 00102EB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80105F7C 00102EBC  4E 80 00 20 */	blr 

.global onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature:
/* 80105F80 00102EC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80105F84 00102EC4  7C 08 02 A6 */	mflr r0
/* 80105F88 00102EC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105F8C 00102ECC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80105F90 00102ED0  7C 7F 1B 78 */	mr r31, r3
/* 80105F94 00102ED4  7C 83 23 78 */	mr r3, r4
/* 80105F98 00102ED8  81 84 00 00 */	lwz r12, 0(r4)
/* 80105F9C 00102EDC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80105FA0 00102EE0  7D 89 03 A6 */	mtctr r12
/* 80105FA4 00102EE4  4E 80 04 21 */	bctrl 
/* 80105FA8 00102EE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80105FAC 00102EEC  41 82 00 10 */	beq .L_80105FBC
/* 80105FB0 00102EF0  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 80105FB4 00102EF4  38 03 FF FF */	addi r0, r3, -1
/* 80105FB8 00102EF8  90 1F 01 F4 */	stw r0, 0x1f4(r31)
.L_80105FBC:
/* 80105FBC 00102EFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80105FC0 00102F00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80105FC4 00102F04  7C 08 03 A6 */	mtlr r0
/* 80105FC8 00102F08  38 21 00 10 */	addi r1, r1, 0x10
/* 80105FCC 00102F0C  4E 80 00 20 */	blr 

.global injure__Q24Game9EnemyBaseFv
injure__Q24Game9EnemyBaseFv:
/* 80105FD0 00102F10  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80105FD4 00102F14  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80105FD8 00102F18  41 82 00 4C */	beq .L_80106024
/* 80105FDC 00102F1C  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80105FE0 00102F20  40 82 00 28 */	bne .L_80106008
/* 80105FE4 00102F24  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 80105FE8 00102F28  C0 23 02 08 */	lfs f1, 0x208(r3)
/* 80105FEC 00102F2C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80105FF0 00102F30  EC 22 08 28 */	fsubs f1, f2, f1
/* 80105FF4 00102F34  D0 23 02 00 */	stfs f1, 0x200(r3)
/* 80105FF8 00102F38  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80105FFC 00102F3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80106000 00102F40  40 80 00 08 */	bge .L_80106008
/* 80106004 00102F44  D0 03 02 00 */	stfs f0, 0x200(r3)
.L_80106008:
/* 80106008 00102F48  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 8010600C 00102F4C  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 80106010 00102F50  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106014 00102F54  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80106018 00102F58  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8010601C 00102F5C  38 60 00 01 */	li r3, 1
/* 80106020 00102F60  4E 80 00 20 */	blr 
.L_80106024:
/* 80106024 00102F64  38 60 00 00 */	li r3, 0
/* 80106028 00102F68  4E 80 00 20 */	blr 

.global addDamage__Q24Game9EnemyBaseFff
addDamage__Q24Game9EnemyBaseFff:
/* 8010602C 00102F6C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106030 00102F70  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80106034 00102F74  4C 82 00 20 */	bnelr 
/* 80106038 00102F78  C0 03 02 08 */	lfs f0, 0x208(r3)
/* 8010603C 00102F7C  EC 00 08 2A */	fadds f0, f0, f1
/* 80106040 00102F80  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 80106044 00102F84  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106048 00102F88  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8010604C 00102F8C  41 82 00 10 */	beq .L_8010605C
/* 80106050 00102F90  C0 03 02 0C */	lfs f0, 0x20c(r3)
/* 80106054 00102F94  EC 00 10 2A */	fadds f0, f0, f2
/* 80106058 00102F98  D0 03 02 0C */	stfs f0, 0x20c(r3)
.L_8010605C:
/* 8010605C 00102F9C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106060 00102FA0  60 00 00 02 */	ori r0, r0, 2
/* 80106064 00102FA4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80106068 00102FA8  4E 80 00 20 */	blr 

.global damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart:
/* 8010606C 00102FAC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106070 00102FB0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80106074 00102FB4  40 82 00 38 */	bne .L_801060AC
/* 80106078 00102FB8  C0 03 02 08 */	lfs f0, 0x208(r3)
/* 8010607C 00102FBC  EC 00 08 2A */	fadds f0, f0, f1
/* 80106080 00102FC0  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 80106084 00102FC4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106088 00102FC8  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8010608C 00102FCC  41 82 00 14 */	beq .L_801060A0
/* 80106090 00102FD0  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 80106094 00102FD4  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80106098 00102FD8  EC 01 00 2A */	fadds f0, f1, f0
/* 8010609C 00102FDC  D0 03 02 0C */	stfs f0, 0x20c(r3)
.L_801060A0:
/* 801060A0 00102FE0  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801060A4 00102FE4  60 00 00 02 */	ori r0, r0, 2
/* 801060A8 00102FE8  90 03 01 E0 */	stw r0, 0x1e0(r3)
.L_801060AC:
/* 801060AC 00102FEC  38 60 00 01 */	li r3, 1
/* 801060B0 00102FF0  4E 80 00 20 */	blr 

.global pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart:
/* 801060B4 00102FF4  38 60 00 00 */	li r3, 0
/* 801060B8 00102FF8  4E 80 00 20 */	blr 

.global flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart:
/* 801060BC 00102FFC  38 60 00 00 */	li r3, 0
/* 801060C0 00103000  4E 80 00 20 */	blr 

.global hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart:
/* 801060C4 00103004  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801060C8 00103008  7C 08 02 A6 */	mflr r0
/* 801060CC 0010300C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801060D0 00103010  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 801060D4 00103014  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 801060D8 00103018  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 801060DC 0010301C  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 801060E0 00103020  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801060E4 00103024  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801060E8 00103028  7C 7F 1B 78 */	mr r31, r3
/* 801060EC 0010302C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 801060F0 00103030  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801060F4 00103034  C0 23 06 7C */	lfs f1, 0x67c(r3)
/* 801060F8 00103038  40 82 00 38 */	bne .L_80106130
/* 801060FC 0010303C  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 80106100 00103040  EC 00 08 2A */	fadds f0, f0, f1
/* 80106104 00103044  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80106108 00103048  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8010610C 0010304C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80106110 00103050  41 82 00 14 */	beq .L_80106124
/* 80106114 00103054  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 80106118 00103058  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 8010611C 0010305C  EC 01 00 2A */	fadds f0, f1, f0
/* 80106120 00103060  D0 1F 02 0C */	stfs f0, 0x20c(r31)
.L_80106124:
/* 80106124 00103064  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80106128 00103068  60 00 00 02 */	ori r0, r0, 2
/* 8010612C 0010306C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80106130:
/* 80106130 00103070  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80106134 00103074  64 00 00 08 */	oris r0, r0, 8
/* 80106138 00103078  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8010613C 0010307C  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80106140 00103080  28 00 00 00 */	cmplwi r0, 0
/* 80106144 00103084  41 82 01 A0 */	beq .L_801062E4
/* 80106148 00103088  7F E3 FB 78 */	mr r3, r31
/* 8010614C 0010308C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106150 00103090  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80106154 00103094  7D 89 03 A6 */	mtctr r12
/* 80106158 00103098  4E 80 04 21 */	bctrl 
/* 8010615C 0010309C  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80106160 001030A0  FF E0 08 90 */	fmr f31, f1
/* 80106164 001030A4  28 03 00 00 */	cmplwi r3, 0
/* 80106168 001030A8  41 82 01 00 */	beq .L_80106268
/* 8010616C 001030AC  41 82 00 30 */	beq .L_8010619C
/* 80106170 001030B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80106174 001030B4  C3 DF 01 94 */	lfs f30, 0x194(r31)
/* 80106178 001030B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8010617C 001030BC  7D 89 03 A6 */	mtctr r12
/* 80106180 001030C0  4E 80 04 21 */	bctrl 
/* 80106184 001030C4  C0 23 00 00 */	lfs f1, 0(r3)
/* 80106188 001030C8  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8010618C 001030CC  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80106190 001030D0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80106194 001030D4  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 80106198 001030D8  48 00 00 1C */	b .L_801061B4
.L_8010619C:
/* 8010619C 001030DC  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 801061A0 001030E0  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 801061A4 001030E4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 801061A8 001030E8  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 801061AC 001030EC  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801061B0 001030F0  D0 01 00 30 */	stfs f0, 0x30(r1)
.L_801061B4:
/* 801061B4 001030F4  80 81 00 28 */	lwz r4, 0x28(r1)
/* 801061B8 001030F8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801061BC 001030FC  80 E1 00 2C */	lwz r7, 0x2c(r1)
/* 801061C0 00103100  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801061C4 00103104  80 C1 00 30 */	lwz r6, 0x30(r1)
/* 801061C8 00103108  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801061CC 0010310C  90 81 00 34 */	stw r4, 0x34(r1)
/* 801061D0 00103110  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 801061D4 00103114  39 63 A7 EC */	addi r11, r3, __vt__Q23efx3Arg@l
/* 801061D8 00103118  3D 40 80 4B */	lis r10, __vt__Q23efx8ArgScale@ha
/* 801061DC 0010311C  38 A0 00 00 */	li r5, 0
/* 801061E0 00103120  90 E1 00 38 */	stw r7, 0x38(r1)
/* 801061E4 00103124  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 801061E8 00103128  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 801061EC 0010312C  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 801061F0 00103130  39 00 00 54 */	li r8, 0x54
/* 801061F4 00103134  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 801061F8 00103138  38 E0 00 55 */	li r7, 0x55
/* 801061FC 0010313C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80106200 00103140  38 C0 00 56 */	li r6, 0x56
/* 80106204 00103144  90 01 00 54 */	stw r0, 0x54(r1)
/* 80106208 00103148  39 24 6A 50 */	addi r9, r4, __vt__Q23efx8TSimple3@l
/* 8010620C 0010314C  39 4A A2 DC */	addi r10, r10, __vt__Q23efx8ArgScale@l
/* 80106210 00103150  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80106214 00103154  91 61 00 40 */	stw r11, 0x40(r1)
/* 80106218 00103158  38 61 00 54 */	addi r3, r1, 0x54
/* 8010621C 0010315C  38 81 00 40 */	addi r4, r1, 0x40
/* 80106220 00103160  91 21 00 54 */	stw r9, 0x54(r1)
/* 80106224 00103164  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80106228 00103168  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8010622C 0010316C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80106230 00103170  91 41 00 40 */	stw r10, 0x40(r1)
/* 80106234 00103174  D3 E1 00 50 */	stfs f31, 0x50(r1)
/* 80106238 00103178  B1 01 00 58 */	sth r8, 0x58(r1)
/* 8010623C 0010317C  B0 E1 00 5A */	sth r7, 0x5a(r1)
/* 80106240 00103180  B0 C1 00 5C */	sth r6, 0x5c(r1)
/* 80106244 00103184  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80106248 00103188  90 A1 00 64 */	stw r5, 0x64(r1)
/* 8010624C 0010318C  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80106250 00103190  90 01 00 54 */	stw r0, 0x54(r1)
/* 80106254 00103194  48 2C 25 79 */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80106258 00103198  FC 20 F8 90 */	fmr f1, f31
/* 8010625C 0010319C  7F E3 FB 78 */	mr r3, r31
/* 80106260 001031A0  48 36 85 E1 */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
/* 80106264 001031A4  48 00 00 80 */	b .L_801062E4
.L_80106268:
/* 80106268 001031A8  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8010626C 001031AC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 80106270 001031B0  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 80106274 001031B4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80106278 001031B8  90 01 00 08 */	stw r0, 8(r1)
/* 8010627C 001031BC  3C 60 80 4F */	lis r3, __vt__Q23efx15TEnemyDownSmoke@ha
/* 80106280 001031C0  39 05 A7 F8 */	addi r8, r5, __vt__Q23efx5TBase@l
/* 80106284 001031C4  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80106288 001031C8  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8010628C 001031CC  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 80106290 001031D0  38 03 86 10 */	addi r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
/* 80106294 001031D4  38 C0 00 53 */	li r6, 0x53
/* 80106298 001031D8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8010629C 001031DC  38 A0 00 00 */	li r5, 0
/* 801062A0 001031E0  38 61 00 18 */	addi r3, r1, 0x18
/* 801062A4 001031E4  38 81 00 08 */	addi r4, r1, 8
/* 801062A8 001031E8  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 801062AC 001031EC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801062B0 001031F0  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 801062B4 001031F4  91 01 00 18 */	stw r8, 0x18(r1)
/* 801062B8 001031F8  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801062BC 001031FC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801062C0 00103200  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 801062C4 00103204  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 801062C8 00103208  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801062CC 0010320C  90 01 00 18 */	stw r0, 0x18(r1)
/* 801062D0 00103210  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 801062D4 00103214  48 2C 24 91 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
/* 801062D8 00103218  FC 20 F8 90 */	fmr f1, f31
/* 801062DC 0010321C  7F E3 FB 78 */	mr r3, r31
/* 801062E0 00103220  48 36 83 B1 */	bl PSStartEnemyDownSmokeSE__FPQ24Game9EnemyBasef
.L_801062E4:
/* 801062E4 00103224  38 60 00 00 */	li r3, 0
/* 801062E8 00103228  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 801062EC 0010322C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 801062F0 00103230  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 801062F4 00103234  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 801062F8 00103238  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801062FC 0010323C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80106300 00103240  7C 08 03 A6 */	mtlr r0
/* 80106304 00103244  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80106308 00103248  4E 80 00 20 */	blr 

.global dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature:
/* 8010630C 0010324C  38 60 00 00 */	li r3, 0
/* 80106310 00103250  4E 80 00 20 */	blr 

.global isBeforeAppearState__Q24Game9EnemyBaseFv
isBeforeAppearState__Q24Game9EnemyBaseFv:
/* 80106314 00103254  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106318 00103258  7C 08 02 A6 */	mflr r0
/* 8010631C 0010325C  7C 64 1B 78 */	mr r4, r3
/* 80106320 00103260  90 01 00 14 */	stw r0, 0x14(r1)
/* 80106324 00103264  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80106328 00103268  48 02 A6 65 */	bl getCurrID__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
/* 8010632C 0010326C  38 80 00 05 */	li r4, 5
/* 80106330 00103270  7C 80 1A 78 */	xor r0, r4, r3
/* 80106334 00103274  7C 03 0E 70 */	srawi r3, r0, 1
/* 80106338 00103278  7C 00 20 38 */	and r0, r0, r4
/* 8010633C 0010327C  7C 00 18 50 */	subf r0, r0, r3
/* 80106340 00103280  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80106344 00103284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80106348 00103288  7C 08 03 A6 */	mtlr r0
/* 8010634C 0010328C  38 21 00 10 */	addi r1, r1, 0x10
/* 80106350 00103290  4E 80 00 20 */	blr 

.global checkBirthTypeDropEarthquake__Q24Game9EnemyBaseFv
checkBirthTypeDropEarthquake__Q24Game9EnemyBaseFv:
/* 80106354 00103294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106358 00103298  7C 08 02 A6 */	mflr r0
/* 8010635C 0010329C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80106360 001032A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80106364 001032A4  3B E0 00 00 */	li r31, 0
/* 80106368 001032A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8010636C 001032AC  7C 7E 1B 78 */	mr r30, r3
/* 80106370 001032B0  7F C4 F3 78 */	mr r4, r30
/* 80106374 001032B4  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80106378 001032B8  48 02 A6 15 */	bl getCurrID__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
/* 8010637C 001032BC  2C 03 00 04 */	cmpwi r3, 4
/* 80106380 001032C0  40 82 00 28 */	bne .L_801063A8
/* 80106384 001032C4  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80106388 001032C8  7F C4 F3 78 */	mr r4, r30
/* 8010638C 001032CC  38 A0 00 05 */	li r5, 5
/* 80106390 001032D0  38 C0 00 00 */	li r6, 0
/* 80106394 001032D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80106398 001032D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8010639C 001032DC  7D 89 03 A6 */	mtctr r12
/* 801063A0 001032E0  4E 80 04 21 */	bctrl 
/* 801063A4 001032E4  3B E0 00 01 */	li r31, 1
.L_801063A8:
/* 801063A8 001032E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801063AC 001032EC  7F E3 FB 78 */	mr r3, r31
/* 801063B0 001032F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801063B4 001032F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801063B8 001032F8  7C 08 03 A6 */	mtlr r0
/* 801063BC 001032FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801063C0 00103300  4E 80 00 20 */	blr 

.global earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef:
/* 801063C4 00103304  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801063C8 00103308  7C 08 02 A6 */	mflr r0
/* 801063CC 0010330C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801063D0 00103310  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801063D4 00103314  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801063D8 00103318  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801063DC 0010331C  7C 7F 1B 78 */	mr r31, r3
/* 801063E0 00103320  FF E0 08 90 */	fmr f31, f1
/* 801063E4 00103324  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 801063E8 00103328  28 00 00 00 */	cmplwi r0, 0
/* 801063EC 0010332C  41 82 00 A4 */	beq .L_80106490
/* 801063F0 00103330  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801063F4 00103334  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801063F8 00103338  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801063FC 0010333C  4C 40 13 82 */	cror 2, 0, 2
/* 80106400 00103340  41 82 00 90 */	beq .L_80106490
/* 80106404 00103344  81 83 00 00 */	lwz r12, 0(r3)
/* 80106408 00103348  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 8010640C 0010334C  7D 89 03 A6 */	mtctr r12
/* 80106410 00103350  4E 80 04 21 */	bctrl 
/* 80106414 00103354  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80106418 00103358  40 82 00 78 */	bne .L_80106490
/* 8010641C 0010335C  7F E3 FB 78 */	mr r3, r31
/* 80106420 00103360  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106424 00103364  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80106428 00103368  7D 89 03 A6 */	mtctr r12
/* 8010642C 0010336C  4E 80 04 21 */	bctrl 
/* 80106430 00103370  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80106434 00103374  41 82 00 5C */	beq .L_80106490
/* 80106438 00103378  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8010643C 0010337C  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 80106440 00103380  40 82 00 50 */	bne .L_80106490
/* 80106444 00103384  54 80 05 AD */	rlwinm. r0, r4, 0, 0x16, 0x16
/* 80106448 00103388  40 82 00 48 */	bne .L_80106490
/* 8010644C 0010338C  54 80 02 95 */	rlwinm. r0, r4, 0, 0xa, 0xa
/* 80106450 00103390  38 60 00 00 */	li r3, 0
/* 80106454 00103394  40 82 00 0C */	bne .L_80106460
/* 80106458 00103398  54 80 02 53 */	rlwinm. r0, r4, 0, 9, 9
/* 8010645C 0010339C  41 82 00 08 */	beq .L_80106464
.L_80106460:
/* 80106460 001033A0  38 60 00 01 */	li r3, 1
.L_80106464:
/* 80106464 001033A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80106468 001033A8  40 82 00 28 */	bne .L_80106490
/* 8010646C 001033AC  D3 E1 00 08 */	stfs f31, 8(r1)
/* 80106470 001033B0  7F E4 FB 78 */	mr r4, r31
/* 80106474 001033B4  38 C1 00 08 */	addi r6, r1, 8
/* 80106478 001033B8  38 A0 00 08 */	li r5, 8
/* 8010647C 001033BC  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 80106480 001033C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80106484 001033C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80106488 001033C8  7D 89 03 A6 */	mtctr r12
/* 8010648C 001033CC  4E 80 04 21 */	bctrl 
.L_80106490:
/* 80106490 001033D0  38 60 00 00 */	li r3, 0
/* 80106494 001033D4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80106498 001033D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8010649C 001033DC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801064A0 001033E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801064A4 001033E4  7C 08 03 A6 */	mtlr r0
/* 801064A8 001033E8  38 21 00 30 */	addi r1, r1, 0x30
/* 801064AC 001033EC  4E 80 00 20 */	blr 

.global dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei:
/* 801064B0 001033F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801064B4 001033F4  7C 08 02 A6 */	mflr r0
/* 801064B8 001033F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801064BC 001033FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801064C0 00103400  7C BF 2B 78 */	mr r31, r5
/* 801064C4 00103404  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801064C8 00103408  7C 9E 23 78 */	mr r30, r4
/* 801064CC 0010340C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801064D0 00103410  7C 7D 1B 78 */	mr r29, r3
/* 801064D4 00103414  81 83 00 00 */	lwz r12, 0(r3)
/* 801064D8 00103418  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801064DC 0010341C  7D 89 03 A6 */	mtctr r12
/* 801064E0 00103420  4E 80 04 21 */	bctrl 
/* 801064E4 00103424  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801064E8 00103428  41 82 00 B0 */	beq .L_80106598
/* 801064EC 0010342C  C0 3D 02 00 */	lfs f1, 0x200(r29)
/* 801064F0 00103430  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801064F4 00103434  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801064F8 00103438  4C 40 13 82 */	cror 2, 0, 2
/* 801064FC 0010343C  41 82 00 9C */	beq .L_80106598
/* 80106500 00103440  7F A3 EB 78 */	mr r3, r29
/* 80106504 00103444  7F C4 F3 78 */	mr r4, r30
/* 80106508 00103448  81 9D 00 00 */	lwz r12, 0(r29)
/* 8010650C 0010344C  7F E5 FB 78 */	mr r5, r31
/* 80106510 00103450  81 8C 02 A0 */	lwz r12, 0x2a0(r12)
/* 80106514 00103454  7D 89 03 A6 */	mtctr r12
/* 80106518 00103458  4E 80 04 21 */	bctrl 
/* 8010651C 0010345C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80106520 00103460  41 82 00 78 */	beq .L_80106598
/* 80106524 00103464  2C 1F 00 01 */	cmpwi r31, 1
/* 80106528 00103468  41 82 00 08 */	beq .L_80106530
/* 8010652C 0010346C  48 00 00 6C */	b .L_80106598
.L_80106530:
/* 80106530 00103470  80 7D 01 E0 */	lwz r3, 0x1e0(r29)
/* 80106534 00103474  54 60 02 53 */	rlwinm. r0, r3, 0, 9, 9
/* 80106538 00103478  40 82 00 60 */	bne .L_80106598
/* 8010653C 0010347C  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80106540 00103480  40 82 00 58 */	bne .L_80106598
/* 80106544 00103484  54 60 02 95 */	rlwinm. r0, r3, 0, 0xa, 0xa
/* 80106548 00103488  41 82 00 10 */	beq .L_80106558
/* 8010654C 0010348C  64 60 00 10 */	oris r0, r3, 0x10
/* 80106550 00103490  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 80106554 00103494  48 00 00 44 */	b .L_80106598
.L_80106558:
/* 80106558 00103498  80 7D 02 4C */	lwz r3, 0x24c(r29)
/* 8010655C 0010349C  48 02 36 7D */	bl start__Q34Game10EnemyStone3ObjFv
/* 80106560 001034A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80106564 001034A4  41 82 00 28 */	beq .L_8010658C
/* 80106568 001034A8  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 8010656C 001034AC  7F A4 EB 78 */	mr r4, r29
/* 80106570 001034B0  38 A0 00 07 */	li r5, 7
/* 80106574 001034B4  38 C0 00 00 */	li r6, 0
/* 80106578 001034B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010657C 001034BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80106580 001034C0  7D 89 03 A6 */	mtctr r12
/* 80106584 001034C4  4E 80 04 21 */	bctrl 
/* 80106588 001034C8  48 00 00 10 */	b .L_80106598
.L_8010658C:
/* 8010658C 001034CC  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 80106590 001034D0  64 00 00 10 */	oris r0, r0, 0x10
/* 80106594 001034D4  90 1D 01 E0 */	stw r0, 0x1e0(r29)
.L_80106598:
/* 80106598 001034D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010659C 001034DC  38 60 00 00 */	li r3, 0
/* 801065A0 001034E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801065A4 001034E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801065A8 001034E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801065AC 001034EC  7C 08 03 A6 */	mtlr r0
/* 801065B0 001034F0  38 21 00 20 */	addi r1, r1, 0x20
/* 801065B4 001034F4  4E 80 00 20 */	blr 

.global doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei:
/* 801065B8 001034F8  38 60 00 01 */	li r3, 1
/* 801065BC 001034FC  4E 80 00 20 */	blr 

.global farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef:
/* 801065C0 00103500  38 60 00 00 */	li r3, 0
/* 801065C4 00103504  4E 80 00 20 */	blr 

.global "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f":
/* 801065C8 00103508  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801065CC 0010350C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801065D0 00103510  40 82 00 38 */	bne .L_80106608
/* 801065D4 00103514  C0 03 02 08 */	lfs f0, 0x208(r3)
/* 801065D8 00103518  EC 00 08 2A */	fadds f0, f0, f1
/* 801065DC 0010351C  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 801065E0 00103520  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801065E4 00103524  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801065E8 00103528  41 82 00 14 */	beq .L_801065FC
/* 801065EC 0010352C  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 801065F0 00103530  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 801065F4 00103534  EC 01 00 2A */	fadds f0, f1, f0
/* 801065F8 00103538  D0 03 02 0C */	stfs f0, 0x20c(r3)
.L_801065FC:
/* 801065FC 0010353C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106600 00103540  60 00 00 02 */	ori r0, r0, 2
/* 80106604 00103544  90 03 01 E0 */	stw r0, 0x1e0(r3)
.L_80106608:
/* 80106608 00103548  38 60 00 01 */	li r3, 1
/* 8010660C 0010354C  4E 80 00 20 */	blr 

.global collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent:
/* 80106610 00103550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106614 00103554  7C 08 02 A6 */	mflr r0
/* 80106618 00103558  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010661C 0010355C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80106620 00103560  7C 9F 23 78 */	mr r31, r4
/* 80106624 00103564  38 80 00 00 */	li r4, 0
/* 80106628 00103568  93 C1 00 08 */	stw r30, 8(r1)
/* 8010662C 0010356C  7C 7E 1B 78 */	mr r30, r3
/* 80106630 00103570  4B FF D9 CD */	bl finishDropping__Q24Game9EnemyBaseFb
/* 80106634 00103574  7F C3 F3 78 */	mr r3, r30
/* 80106638 00103578  7F E4 FB 78 */	mr r4, r31
/* 8010663C 0010357C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80106640 00103580  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 80106644 00103584  7D 89 03 A6 */	mtctr r12
/* 80106648 00103588  4E 80 04 21 */	bctrl 
/* 8010664C 0010358C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80106650 00103590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80106654 00103594  83 C1 00 08 */	lwz r30, 8(r1)
/* 80106658 00103598  7C 08 03 A6 */	mtlr r0
/* 8010665C 0010359C  38 21 00 10 */	addi r1, r1, 0x10
/* 80106660 001035A0  4E 80 00 20 */	blr 

.global setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent:
/* 80106664 001035A4  80 04 00 00 */	lwz r0, 0(r4)
/* 80106668 001035A8  90 03 02 34 */	stw r0, 0x234(r3)
/* 8010666C 001035AC  80 04 00 04 */	lwz r0, 4(r4)
/* 80106670 001035B0  90 03 02 38 */	stw r0, 0x238(r3)
/* 80106674 001035B4  80 04 00 08 */	lwz r0, 8(r4)
/* 80106678 001035B8  90 03 02 3C */	stw r0, 0x23c(r3)
/* 8010667C 001035BC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106680 001035C0  60 00 00 10 */	ori r0, r0, 0x10
/* 80106684 001035C4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80106688 001035C8  4E 80 00 20 */	blr 

.global resetCollEvent__Q24Game9EnemyBaseFv
resetCollEvent__Q24Game9EnemyBaseFv:
/* 8010668C 001035CC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80106690 001035D0  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80106694 001035D4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80106698 001035D8  4E 80 00 20 */	blr 

.global changeMaterial__Q24Game9EnemyBaseFv
changeMaterial__Q24Game9EnemyBaseFv:
/* 8010669C 001035DC  4E 80 00 20 */	blr 

.global viewGetShape__Q24Game9EnemyBaseFv
viewGetShape__Q24Game9EnemyBaseFv:
/* 801066A0 001035E0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 801066A4 001035E4  4E 80 00 20 */	blr 

.global viewStartCarryMotion__Q24Game9EnemyBaseFv
viewStartCarryMotion__Q24Game9EnemyBaseFv:
/* 801066A8 001035E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801066AC 001035EC  7C 08 02 A6 */	mflr r0
/* 801066B0 001035F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801066B4 001035F4  48 00 0B 51 */	bl startMotion__Q24Game9EnemyBaseFv
/* 801066B8 001035F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801066BC 001035FC  7C 08 03 A6 */	mtlr r0
/* 801066C0 00103600  38 21 00 10 */	addi r1, r1, 0x10
/* 801066C4 00103604  4E 80 00 20 */	blr 

.global viewStartPreCarryMotion__Q24Game9EnemyBaseFv
viewStartPreCarryMotion__Q24Game9EnemyBaseFv:
/* 801066C8 00103608  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801066CC 0010360C  7C 08 02 A6 */	mflr r0
/* 801066D0 00103610  90 01 00 14 */	stw r0, 0x14(r1)
/* 801066D4 00103614  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801066D8 00103618  7C 7F 1B 78 */	mr r31, r3
/* 801066DC 0010361C  81 83 00 00 */	lwz r12, 0(r3)
/* 801066E0 00103620  81 8C 02 C4 */	lwz r12, 0x2c4(r12)
/* 801066E4 00103624  7D 89 03 A6 */	mtctr r12
/* 801066E8 00103628  4E 80 04 21 */	bctrl 
/* 801066EC 0010362C  7F E3 FB 78 */	mr r3, r31
/* 801066F0 00103630  48 00 0B F1 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 801066F4 00103634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801066F8 00103638  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801066FC 0010363C  7C 08 03 A6 */	mtlr r0
/* 80106700 00103640  38 21 00 10 */	addi r1, r1, 0x10
/* 80106704 00103644  4E 80 00 20 */	blr 

.global startCarcassMotion__Q24Game9EnemyBaseFv
startCarcassMotion__Q24Game9EnemyBaseFv:
/* 80106708 00103648  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8010670C 0010364C  7C 08 02 A6 */	mflr r0
/* 80106710 00103650  90 01 00 34 */	stw r0, 0x34(r1)
/* 80106714 00103654  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80106718 00103658  7C 7F 1B 79 */	or. r31, r3, r3
/* 8010671C 0010365C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80106720 00103660  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80106724 00103664  7F FD FB 78 */	mr r29, r31
/* 80106728 00103668  93 81 00 20 */	stw r28, 0x20(r1)
/* 8010672C 0010366C  41 82 00 08 */	beq .L_80106734
/* 80106730 00103670  3B BD 01 78 */	addi r29, r29, 0x178
.L_80106734:
/* 80106734 00103674  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80106738 00103678  38 80 00 00 */	li r4, 0
/* 8010673C 0010367C  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80106740 00103680  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80106744 00103684  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 80106748 00103688  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010674C 0010368C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80106750 00103690  81 83 00 00 */	lwz r12, 0(r3)
/* 80106754 00103694  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80106758 00103698  7D 89 03 A6 */	mtctr r12
/* 8010675C 0010369C  4E 80 04 21 */	bctrl 
/* 80106760 001036A0  7F A5 EB 78 */	mr r5, r29
/* 80106764 001036A4  38 80 00 00 */	li r4, 0
/* 80106768 001036A8  48 32 25 21 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8010676C 001036AC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80106770 001036B0  54 00 02 06 */	rlwinm r0, r0, 0, 8, 3
/* 80106774 001036B4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80106778 001036B8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8010677C 001036BC  64 00 01 00 */	oris r0, r0, 0x100
/* 80106780 001036C0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80106784 001036C4  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80106788 001036C8  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 8010678C 001036CC  41 82 01 10 */	beq .L_8010689C
/* 80106790 001036D0  7F E3 FB 78 */	mr r3, r31
/* 80106794 001036D4  48 00 0B B5 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80106798 001036D8  7C 7E 1B 78 */	mr r30, r3
/* 8010679C 001036DC  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 801067A0 001036E0  38 80 00 00 */	li r4, 0
/* 801067A4 001036E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801067A8 001036E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801067AC 001036EC  7D 89 03 A6 */	mtctr r12
/* 801067B0 001036F0  4E 80 04 21 */	bctrl 
/* 801067B4 001036F4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801067B8 001036F8  83 A3 00 2C */	lwz r29, 0x2c(r3)
/* 801067BC 001036FC  48 00 00 18 */	b .L_801067D4
.L_801067C0:
/* 801067C0 00103700  A8 1D 00 20 */	lha r0, 0x20(r29)
/* 801067C4 00103704  7C 1E 00 00 */	cmpw r30, r0
/* 801067C8 00103708  40 82 00 08 */	bne .L_801067D0
/* 801067CC 0010370C  48 00 00 14 */	b .L_801067E0
.L_801067D0:
/* 801067D0 00103710  83 BD 00 04 */	lwz r29, 4(r29)
.L_801067D4:
/* 801067D4 00103714  28 1D 00 00 */	cmplwi r29, 0
/* 801067D8 00103718  40 82 FF E8 */	bne .L_801067C0
/* 801067DC 0010371C  3B A0 00 00 */	li r29, 0
.L_801067E0:
/* 801067E0 00103720  83 9D 00 24 */	lwz r28, 0x24(r29)
/* 801067E4 00103724  28 1C 00 00 */	cmplwi r28, 0
/* 801067E8 00103728  41 82 00 98 */	beq .L_80106880
/* 801067EC 0010372C  7F A3 EB 78 */	mr r3, r29
/* 801067F0 00103730  38 80 00 00 */	li r4, 0
/* 801067F4 00103734  48 32 31 61 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 801067F8 00103738  7C 7E 1B 78 */	mr r30, r3
/* 801067FC 0010373C  7F A3 EB 78 */	mr r3, r29
/* 80106800 00103740  38 80 00 01 */	li r4, 1
/* 80106804 00103744  48 32 31 51 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80106808 00103748  28 1E 00 00 */	cmplwi r30, 0
/* 8010680C 0010374C  41 82 00 58 */	beq .L_80106864
/* 80106810 00103750  28 03 00 00 */	cmplwi r3, 0
/* 80106814 00103754  41 82 00 50 */	beq .L_80106864
/* 80106818 00103758  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 8010681C 0010375C  3C C0 43 30 */	lis r6, 0x4330
/* 80106820 00103760  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80106824 00103764  7F 84 E3 78 */	mr r4, r28
/* 80106828 00103768  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 8010682C 0010376C  90 C1 00 08 */	stw r6, 8(r1)
/* 80106830 00103770  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80106834 00103774  C8 42 94 58 */	lfd f2, lbl_805177B8@sda21(r2)
/* 80106838 00103778  90 61 00 0C */	stw r3, 0xc(r1)
/* 8010683C 0010377C  38 A0 00 01 */	li r5, 1
/* 80106840 00103780  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80106844 00103784  C8 01 00 08 */	lfd f0, 8(r1)
/* 80106848 00103788  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010684C 0010378C  EC 20 10 28 */	fsubs f1, f0, f2
/* 80106850 00103790  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80106854 00103794  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80106858 00103798  EC 40 10 28 */	fsubs f2, f0, f2
/* 8010685C 0010379C  48 35 75 85 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80106860 001037A0  48 00 00 9C */	b .L_801068FC
.L_80106864:
/* 80106864 001037A4  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80106868 001037A8  7F 84 E3 78 */	mr r4, r28
/* 8010686C 001037AC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80106870 001037B0  38 A0 00 01 */	li r5, 1
/* 80106874 001037B4  FC 40 08 90 */	fmr f2, f1
/* 80106878 001037B8  48 35 75 69 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 8010687C 001037BC  48 00 00 80 */	b .L_801068FC
.L_80106880:
/* 80106880 001037C0  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80106884 001037C4  38 80 00 00 */	li r4, 0
/* 80106888 001037C8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8010688C 001037CC  38 A0 00 01 */	li r5, 1
/* 80106890 001037D0  FC 40 08 90 */	fmr f2, f1
/* 80106894 001037D4  48 35 75 4D */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80106898 001037D8  48 00 00 64 */	b .L_801068FC
.L_8010689C:
/* 8010689C 001037DC  54 60 01 8D */	rlwinm. r0, r3, 0, 6, 6
/* 801068A0 001037E0  41 82 00 20 */	beq .L_801068C0
/* 801068A4 001037E4  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801068A8 001037E8  38 80 FF FF */	li r4, -1
/* 801068AC 001037EC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801068B0 001037F0  38 A0 00 01 */	li r5, 1
/* 801068B4 001037F4  FC 40 08 90 */	fmr f2, f1
/* 801068B8 001037F8  48 35 75 29 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 801068BC 001037FC  48 00 00 40 */	b .L_801068FC
.L_801068C0:
/* 801068C0 00103800  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 801068C4 00103804  41 82 00 20 */	beq .L_801068E4
/* 801068C8 00103808  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801068CC 0010380C  38 80 FF FF */	li r4, -1
/* 801068D0 00103810  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801068D4 00103814  38 A0 00 01 */	li r5, 1
/* 801068D8 00103818  FC 40 08 90 */	fmr f2, f1
/* 801068DC 0010381C  48 35 75 05 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 801068E0 00103820  48 00 00 1C */	b .L_801068FC
.L_801068E4:
/* 801068E4 00103824  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 801068E8 00103828  38 80 00 00 */	li r4, 0
/* 801068EC 0010382C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801068F0 00103830  38 A0 00 01 */	li r5, 1
/* 801068F4 00103834  FC 40 08 90 */	fmr f2, f1
/* 801068F8 00103838  48 35 74 E9 */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
.L_801068FC:
/* 801068FC 0010383C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80106900 00103840  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80106904 00103844  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80106908 00103848  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8010690C 0010384C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80106910 00103850  7C 08 03 A6 */	mtlr r0
/* 80106914 00103854  38 21 00 30 */	addi r1, r1, 0x30
/* 80106918 00103858  4E 80 00 20 */	blr 

.global viewOnPelletKilled__Q24Game9EnemyBaseFv
viewOnPelletKilled__Q24Game9EnemyBaseFv:
/* 8010691C 0010385C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80106920 00103860  7C 08 02 A6 */	mflr r0
/* 80106924 00103864  90 01 00 24 */	stw r0, 0x24(r1)
/* 80106928 00103868  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010692C 0010386C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80106930 00103870  7C 7E 1B 78 */	mr r30, r3
/* 80106934 00103874  80 63 02 54 */	lwz r3, 0x254(r3)
/* 80106938 00103878  28 03 00 00 */	cmplwi r3, 0
/* 8010693C 0010387C  41 82 00 44 */	beq .L_80106980
/* 80106940 00103880  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80106944 00103884  C0 02 94 A4 */	lfs f0, lbl_80517804@sda21(r2)
/* 80106948 00103888  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 8010694C 0010388C  93 C1 00 0C */	stw r30, 0xc(r1)
/* 80106950 00103890  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractMattuan@ha
/* 80106954 00103894  90 01 00 08 */	stw r0, 8(r1)
/* 80106958 00103898  38 04 22 C0 */	addi r0, r4, __vt__Q24Game15InteractMattuan@l
/* 8010695C 0010389C  38 81 00 08 */	addi r4, r1, 8
/* 80106960 001038A0  90 01 00 08 */	stw r0, 8(r1)
/* 80106964 001038A4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80106968 001038A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010696C 001038AC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80106970 001038B0  7D 89 03 A6 */	mtctr r12
/* 80106974 001038B4  4E 80 04 21 */	bctrl 
/* 80106978 001038B8  38 00 00 00 */	li r0, 0
/* 8010697C 001038BC  90 1E 02 54 */	stw r0, 0x254(r30)
.L_80106980:
/* 80106980 001038C0  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80106984 001038C4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80106988 001038C8  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 8010698C 001038CC  7D 89 03 A6 */	mtctr r12
/* 80106990 001038D0  4E 80 04 21 */	bctrl 
/* 80106994 001038D4  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 80106998 001038D8  28 03 00 00 */	cmplwi r3, 0
/* 8010699C 001038DC  41 82 00 0C */	beq .L_801069A8
/* 801069A0 001038E0  7F C4 F3 78 */	mr r4, r30
/* 801069A4 001038E4  48 01 41 D5 */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_801069A8:
/* 801069A8 001038E8  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801069AC 001038EC  28 03 00 00 */	cmplwi r3, 0
/* 801069B0 001038F0  41 82 00 0C */	beq .L_801069BC
/* 801069B4 001038F4  7F C4 F3 78 */	mr r4, r30
/* 801069B8 001038F8  48 13 B3 39 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_801069BC:
/* 801069BC 001038FC  80 7E 02 A0 */	lwz r3, 0x2a0(r30)
/* 801069C0 00103900  48 00 00 20 */	b .L_801069E0
.L_801069C4:
/* 801069C4 00103904  81 83 00 00 */	lwz r12, 0(r3)
/* 801069C8 00103908  7F C4 F3 78 */	mr r4, r30
/* 801069CC 0010390C  83 E3 00 04 */	lwz r31, 4(r3)
/* 801069D0 00103910  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801069D4 00103914  7D 89 03 A6 */	mtctr r12
/* 801069D8 00103918  4E 80 04 21 */	bctrl 
/* 801069DC 0010391C  7F E3 FB 78 */	mr r3, r31
.L_801069E0:
/* 801069E0 00103920  28 03 00 00 */	cmplwi r3, 0
/* 801069E4 00103924  40 82 FF E0 */	bne .L_801069C4
/* 801069E8 00103928  38 00 00 00 */	li r0, 0
/* 801069EC 0010392C  98 1E 01 F0 */	stb r0, 0x1f0(r30)
/* 801069F0 00103930  48 23 12 B9 */	bl PSGetDirectedMainBgm__Fv
/* 801069F4 00103934  28 03 00 00 */	cmplwi r3, 0
/* 801069F8 00103938  41 82 00 18 */	beq .L_80106A10
/* 801069FC 0010393C  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80106A00 00103940  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80106A04 00103944  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80106A08 00103948  7D 89 03 A6 */	mtctr r12
/* 80106A0C 0010394C  4E 80 04 21 */	bctrl 
.L_80106A10:
/* 80106A10 00103950  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80106A14 00103954  38 80 00 00 */	li r4, 0
/* 80106A18 00103958  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80106A1C 0010395C  38 A0 00 01 */	li r5, 1
/* 80106A20 00103960  FC 40 08 90 */	fmr f2, f1
/* 80106A24 00103964  48 35 73 BD */	bl setAnime__Q23PSM13CreatureAnimeFP17JAIAnimeSoundDataUlff
/* 80106A28 00103968  80 7E 01 80 */	lwz r3, 0x180(r30)
/* 80106A2C 0010396C  7F C4 F3 78 */	mr r4, r30
/* 80106A30 00103970  48 02 8B 25 */	bl kill__Q24Game12EnemyMgrBaseFPQ24Game9EnemyBase
/* 80106A34 00103974  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80106A38 00103978  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80106A3C 0010397C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80106A40 00103980  7C 08 03 A6 */	mtlr r0
/* 80106A44 00103984  38 21 00 20 */	addi r1, r1, 0x20
/* 80106A48 00103988  4E 80 00 20 */	blr 

.global view_start_carrymotion__Q24Game9EnemyBaseFv
view_start_carrymotion__Q24Game9EnemyBaseFv:
/* 80106A4C 0010398C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106A50 00103990  7C 08 02 A6 */	mflr r0
/* 80106A54 00103994  90 01 00 14 */	stw r0, 0x14(r1)
/* 80106A58 00103998  81 83 00 00 */	lwz r12, 0(r3)
/* 80106A5C 0010399C  81 8C 02 C4 */	lwz r12, 0x2c4(r12)
/* 80106A60 001039A0  7D 89 03 A6 */	mtctr r12
/* 80106A64 001039A4  4E 80 04 21 */	bctrl 
/* 80106A68 001039A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80106A6C 001039AC  7C 08 03 A6 */	mtlr r0
/* 80106A70 001039B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80106A74 001039B4  4E 80 00 20 */	blr 

.global view_finish_carrymotion__Q24Game9EnemyBaseFv
view_finish_carrymotion__Q24Game9EnemyBaseFv:
/* 80106A78 001039B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106A7C 001039BC  7C 08 02 A6 */	mflr r0
/* 80106A80 001039C0  38 80 00 00 */	li r4, 0
/* 80106A84 001039C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80106A88 001039C8  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80106A8C 001039CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80106A90 001039D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80106A94 001039D4  7D 89 03 A6 */	mtctr r12
/* 80106A98 001039D8  4E 80 04 21 */	bctrl 
/* 80106A9C 001039DC  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80106AA0 001039E0  60 00 00 02 */	ori r0, r0, 2
/* 80106AA4 001039E4  98 03 00 18 */	stb r0, 0x18(r3)
/* 80106AA8 001039E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80106AAC 001039EC  7C 08 03 A6 */	mtlr r0
/* 80106AB0 001039F0  38 21 00 10 */	addi r1, r1, 0x10
/* 80106AB4 001039F4  4E 80 00 20 */	blr 

.global "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
"getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>":
/* 80106AB8 001039F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80106ABC 001039FC  7C 08 02 A6 */	mflr r0
/* 80106AC0 00103A00  90 01 00 24 */	stw r0, 0x24(r1)
/* 80106AC4 00103A04  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80106AC8 00103A08  7C 9F 23 78 */	mr r31, r4
/* 80106ACC 00103A0C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80106AD0 00103A10  7C 7E 1B 78 */	mr r30, r3
/* 80106AD4 00103A14  7F C4 F3 78 */	mr r4, r30
/* 80106AD8 00103A18  38 61 00 08 */	addi r3, r1, 8
/* 80106ADC 00103A1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80106AE0 00103A20  81 8C 00 08 */	lwz r12, 8(r12)
/* 80106AE4 00103A24  7D 89 03 A6 */	mtctr r12
/* 80106AE8 00103A28  4E 80 04 21 */	bctrl 
/* 80106AEC 00103A2C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80106AF0 00103A30  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80106AF4 00103A34  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80106AF8 00103A38  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80106AFC 00103A3C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80106B00 00103A40  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80106B04 00103A44  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80106B08 00103A48  C0 1E 02 40 */	lfs f0, 0x240(r30)
/* 80106B0C 00103A4C  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B10 00103A50  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80106B14 00103A54  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80106B18 00103A58  C0 1E 02 44 */	lfs f0, 0x244(r30)
/* 80106B1C 00103A5C  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B20 00103A60  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80106B24 00103A64  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80106B28 00103A68  C0 1E 02 48 */	lfs f0, 0x248(r30)
/* 80106B2C 00103A6C  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B30 00103A70  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80106B34 00103A74  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80106B38 00103A78  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80106B3C 00103A7C  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 80106B40 00103A80  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B44 00103A84  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80106B48 00103A88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80106B4C 00103A8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80106B50 00103A90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80106B54 00103A94  7C 08 03 A6 */	mtlr r0
/* 80106B58 00103A98  38 21 00 20 */	addi r1, r1, 0x20
/* 80106B5C 00103A9C  4E 80 00 20 */	blr 

.global getWaterSphere__Q24Game9EnemyBaseFPQ23Sys6Sphere
getWaterSphere__Q24Game9EnemyBaseFPQ23Sys6Sphere:
/* 80106B60 00103AA0  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80106B64 00103AA4  C0 03 02 40 */	lfs f0, 0x240(r3)
/* 80106B68 00103AA8  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B6C 00103AAC  D0 04 00 00 */	stfs f0, 0(r4)
/* 80106B70 00103AB0  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80106B74 00103AB4  C0 03 02 44 */	lfs f0, 0x244(r3)
/* 80106B78 00103AB8  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B7C 00103ABC  D0 04 00 04 */	stfs f0, 4(r4)
/* 80106B80 00103AC0  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 80106B84 00103AC4  C0 03 02 48 */	lfs f0, 0x248(r3)
/* 80106B88 00103AC8  EC 01 00 2A */	fadds f0, f1, f0
/* 80106B8C 00103ACC  D0 04 00 08 */	stfs f0, 8(r4)
/* 80106B90 00103AD0  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80106B94 00103AD4  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 80106B98 00103AD8  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80106B9C 00103ADC  4E 80 00 20 */	blr 

.global updateWaterBox__Q24Game9EnemyBaseFv
updateWaterBox__Q24Game9EnemyBaseFv:
/* 80106BA0 00103AE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80106BA4 00103AE4  7C 08 02 A6 */	mflr r0
/* 80106BA8 00103AE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80106BAC 00103AEC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80106BB0 00103AF0  7C 7F 1B 78 */	mr r31, r3
/* 80106BB4 00103AF4  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80106BB8 00103AF8  C0 03 02 40 */	lfs f0, 0x240(r3)
/* 80106BBC 00103AFC  EC 01 00 2A */	fadds f0, f1, f0
/* 80106BC0 00103B00  D0 01 00 08 */	stfs f0, 8(r1)
/* 80106BC4 00103B04  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80106BC8 00103B08  C0 03 02 44 */	lfs f0, 0x244(r3)
/* 80106BCC 00103B0C  EC 01 00 2A */	fadds f0, f1, f0
/* 80106BD0 00103B10  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80106BD4 00103B14  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 80106BD8 00103B18  C0 03 02 48 */	lfs f0, 0x248(r3)
/* 80106BDC 00103B1C  EC 01 00 2A */	fadds f0, f1, f0
/* 80106BE0 00103B20  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80106BE4 00103B24  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80106BE8 00103B28  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 80106BEC 00103B2C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80106BF0 00103B30  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80106BF4 00103B34  28 03 00 00 */	cmplwi r3, 0
/* 80106BF8 00103B38  41 82 00 8C */	beq .L_80106C84
/* 80106BFC 00103B3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80106C00 00103B40  38 81 00 08 */	addi r4, r1, 8
/* 80106C04 00103B44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80106C08 00103B48  7D 89 03 A6 */	mtctr r12
/* 80106C0C 00103B4C  4E 80 04 21 */	bctrl 
/* 80106C10 00103B50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80106C14 00103B54  40 82 00 58 */	bne .L_80106C6C
/* 80106C18 00103B58  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80106C1C 00103B5C  28 03 00 00 */	cmplwi r3, 0
/* 80106C20 00103B60  41 82 00 10 */	beq .L_80106C30
/* 80106C24 00103B64  38 81 00 08 */	addi r4, r1, 8
/* 80106C28 00103B68  48 05 CD 01 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 80106C2C 00103B6C  90 7F 02 80 */	stw r3, 0x280(r31)
.L_80106C30:
/* 80106C30 00103B70  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80106C34 00103B74  28 00 00 00 */	cmplwi r0, 0
/* 80106C38 00103B78  40 82 00 34 */	bne .L_80106C6C
/* 80106C3C 00103B7C  38 00 00 00 */	li r0, 0
/* 80106C40 00103B80  7F E3 FB 78 */	mr r3, r31
/* 80106C44 00103B84  90 1F 02 80 */	stw r0, 0x280(r31)
/* 80106C48 00103B88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106C4C 00103B8C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80106C50 00103B90  7D 89 03 A6 */	mtctr r12
/* 80106C54 00103B94  4E 80 04 21 */	bctrl 
/* 80106C58 00103B98  7F E3 FB 78 */	mr r3, r31
/* 80106C5C 00103B9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106C60 00103BA0  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 80106C64 00103BA4  7D 89 03 A6 */	mtctr r12
/* 80106C68 00103BA8  4E 80 04 21 */	bctrl 
.L_80106C6C:
/* 80106C6C 00103BAC  7F E3 FB 78 */	mr r3, r31
/* 80106C70 00103BB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106C74 00103BB4  81 8C 02 4C */	lwz r12, 0x24c(r12)
/* 80106C78 00103BB8  7D 89 03 A6 */	mtctr r12
/* 80106C7C 00103BBC  4E 80 04 21 */	bctrl 
/* 80106C80 00103BC0  48 00 00 54 */	b .L_80106CD4
.L_80106C84:
/* 80106C84 00103BC4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80106C88 00103BC8  38 80 00 00 */	li r4, 0
/* 80106C8C 00103BCC  28 03 00 00 */	cmplwi r3, 0
/* 80106C90 00103BD0  41 82 00 10 */	beq .L_80106CA0
/* 80106C94 00103BD4  38 81 00 08 */	addi r4, r1, 8
/* 80106C98 00103BD8  48 05 CC 91 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 80106C9C 00103BDC  7C 64 1B 78 */	mr r4, r3
.L_80106CA0:
/* 80106CA0 00103BE0  28 04 00 00 */	cmplwi r4, 0
/* 80106CA4 00103BE4  41 82 00 30 */	beq .L_80106CD4
/* 80106CA8 00103BE8  90 9F 02 80 */	stw r4, 0x280(r31)
/* 80106CAC 00103BEC  7F E3 FB 78 */	mr r3, r31
/* 80106CB0 00103BF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106CB4 00103BF4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80106CB8 00103BF8  7D 89 03 A6 */	mtctr r12
/* 80106CBC 00103BFC  4E 80 04 21 */	bctrl 
/* 80106CC0 00103C00  7F E3 FB 78 */	mr r3, r31
/* 80106CC4 00103C04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106CC8 00103C08  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 80106CCC 00103C0C  7D 89 03 A6 */	mtctr r12
/* 80106CD0 00103C10  4E 80 04 21 */	bctrl 
.L_80106CD4:
/* 80106CD4 00103C14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80106CD8 00103C18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80106CDC 00103C1C  7C 08 03 A6 */	mtlr r0
/* 80106CE0 00103C20  38 21 00 20 */	addi r1, r1, 0x20
/* 80106CE4 00103C24  4E 80 00 20 */	blr 

.global inWater__Q24Game8WaterBoxFRQ23Sys6Sphere
inWater__Q24Game8WaterBoxFRQ23Sys6Sphere:
/* 80106CE8 00103C28  38 60 00 00 */	li r3, 0
/* 80106CEC 00103C2C  4E 80 00 20 */	blr 

.global createPSEnemyBase__Q24Game9EnemyBaseFv
createPSEnemyBase__Q24Game9EnemyBaseFv:
/* 80106CF0 00103C30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106CF4 00103C34  7C 08 02 A6 */	mflr r0
/* 80106CF8 00103C38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80106CFC 00103C3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80106D00 00103C40  7C 7F 1B 78 */	mr r31, r3
/* 80106D04 00103C44  93 C1 00 08 */	stw r30, 8(r1)
/* 80106D08 00103C48  3B C0 00 00 */	li r30, 0
/* 80106D0C 00103C4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80106D10 00103C50  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80106D14 00103C54  7D 89 03 A6 */	mtctr r12
/* 80106D18 00103C58  4E 80 04 21 */	bctrl 
/* 80106D1C 00103C5C  2C 03 00 23 */	cmpwi r3, 0x23
/* 80106D20 00103C60  41 82 00 20 */	beq .L_80106D40
/* 80106D24 00103C64  7F E3 FB 78 */	mr r3, r31
/* 80106D28 00103C68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106D2C 00103C6C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80106D30 00103C70  7D 89 03 A6 */	mtctr r12
/* 80106D34 00103C74  4E 80 04 21 */	bctrl 
/* 80106D38 00103C78  2C 03 00 21 */	cmpwi r3, 0x21
/* 80106D3C 00103C7C  40 82 00 80 */	bne .L_80106DBC
.L_80106D40:
/* 80106D40 00103C80  38 60 00 E0 */	li r3, 0xe0
/* 80106D44 00103C84  4B F1 D1 61 */	bl __nw__FUl
/* 80106D48 00103C88  7C 7E 1B 79 */	or. r30, r3, r3
/* 80106D4C 00103C8C  41 82 00 68 */	beq .L_80106DB4
/* 80106D50 00103C90  7F E4 FB 78 */	mr r4, r31
/* 80106D54 00103C94  38 A0 00 04 */	li r5, 4
/* 80106D58 00103C98  48 35 76 ED */	bl __ct__Q23PSM9EnemyBaseFPQ24Game9EnemyBaseUc
/* 80106D5C 00103C9C  3C 80 80 4F */	lis r4, __vt__Q23PSM8EnemyBig@ha
/* 80106D60 00103CA0  3C 60 80 4F */	lis r3, __vt__Q23PSM19Enemy_SpecialChappy@ha
/* 80106D64 00103CA4  38 84 ED 70 */	addi r4, r4, __vt__Q23PSM8EnemyBig@l
/* 80106D68 00103CA8  90 9E 00 28 */	stw r4, 0x28(r30)
/* 80106D6C 00103CAC  38 C3 E9 CC */	addi r6, r3, __vt__Q23PSM19Enemy_SpecialChappy@l
/* 80106D70 00103CB0  38 64 00 08 */	addi r3, r4, 8
/* 80106D74 00103CB4  38 04 00 40 */	addi r0, r4, 0x40
/* 80106D78 00103CB8  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80106D7C 00103CBC  39 04 00 A4 */	addi r8, r4, 0xa4
/* 80106D80 00103CC0  38 E4 00 B4 */	addi r7, r4, 0xb4
/* 80106D84 00103CC4  38 A6 00 08 */	addi r5, r6, 8
/* 80106D88 00103CC8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80106D8C 00103CCC  38 86 00 40 */	addi r4, r6, 0x40
/* 80106D90 00103CD0  38 66 00 A4 */	addi r3, r6, 0xa4
/* 80106D94 00103CD4  38 06 00 B4 */	addi r0, r6, 0xb4
/* 80106D98 00103CD8  91 1E 00 C8 */	stw r8, 0xc8(r30)
/* 80106D9C 00103CDC  90 FE 00 DC */	stw r7, 0xdc(r30)
/* 80106DA0 00103CE0  90 DE 00 28 */	stw r6, 0x28(r30)
/* 80106DA4 00103CE4  90 BE 00 10 */	stw r5, 0x10(r30)
/* 80106DA8 00103CE8  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80106DAC 00103CEC  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80106DB0 00103CF0  90 1E 00 DC */	stw r0, 0xdc(r30)
.L_80106DB4:
/* 80106DB4 00103CF4  7F C3 F3 78 */	mr r3, r30
/* 80106DB8 00103CF8  48 00 01 9C */	b .L_80106F54
.L_80106DBC:
/* 80106DBC 00103CFC  7F E3 FB 78 */	mr r3, r31
/* 80106DC0 00103D00  81 9F 00 00 */	lwz r12, 0(r31)
/* 80106DC4 00103D04  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80106DC8 00103D08  7D 89 03 A6 */	mtctr r12
/* 80106DCC 00103D0C  4E 80 04 21 */	bctrl 
/* 80106DD0 00103D10  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80106DD4 00103D14  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 80106DD8 00103D18  48 01 C4 A1 */	bl getEnemyInfo__Q24Game13EnemyInfoFuncFii
/* 80106DDC 00103D1C  88 03 00 30 */	lbz r0, 0x30(r3)
/* 80106DE0 00103D20  7C 00 07 74 */	extsb r0, r0
/* 80106DE4 00103D24  28 00 00 08 */	cmplwi r0, 8
/* 80106DE8 00103D28  41 81 01 68 */	bgt .L_80106F50
/* 80106DEC 00103D2C  3C 60 80 4B */	lis r3, lbl_804AA1B0@ha
/* 80106DF0 00103D30  54 00 10 3A */	slwi r0, r0, 2
/* 80106DF4 00103D34  38 63 A1 B0 */	addi r3, r3, lbl_804AA1B0@l
/* 80106DF8 00103D38  7C 03 00 2E */	lwzx r0, r3, r0
/* 80106DFC 00103D3C  7C 09 03 A6 */	mtctr r0
/* 80106E00 00103D40  4E 80 04 20 */	bctr 
.L_80106E04:
/* 80106E04 00103D44  38 60 00 E0 */	li r3, 0xe0
/* 80106E08 00103D48  4B F1 D0 9D */	bl __nw__FUl
/* 80106E0C 00103D4C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80106E10 00103D50  41 82 01 40 */	beq .L_80106F50
/* 80106E14 00103D54  7F E4 FB 78 */	mr r4, r31
/* 80106E18 00103D58  38 A0 00 02 */	li r5, 2
/* 80106E1C 00103D5C  48 35 76 29 */	bl __ct__Q23PSM9EnemyBaseFPQ24Game9EnemyBaseUc
/* 80106E20 00103D60  3C 60 80 4B */	lis r3, __vt__Q23PSM10EnemyHekoi@ha
/* 80106E24 00103D64  38 A3 A1 E4 */	addi r5, r3, __vt__Q23PSM10EnemyHekoi@l
/* 80106E28 00103D68  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80106E2C 00103D6C  38 05 00 08 */	addi r0, r5, 8
/* 80106E30 00103D70  38 85 00 40 */	addi r4, r5, 0x40
/* 80106E34 00103D74  38 65 00 A4 */	addi r3, r5, 0xa4
/* 80106E38 00103D78  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80106E3C 00103D7C  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80106E40 00103D80  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80106E44 00103D84  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80106E48 00103D88  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80106E4C 00103D8C  48 00 01 04 */	b .L_80106F50
.L_80106E50:
/* 80106E50 00103D90  38 60 00 E0 */	li r3, 0xe0
/* 80106E54 00103D94  4B F1 D0 51 */	bl __nw__FUl
/* 80106E58 00103D98  7C 60 1B 79 */	or. r0, r3, r3
/* 80106E5C 00103D9C  41 82 00 14 */	beq .L_80106E70
/* 80106E60 00103DA0  7F E4 FB 78 */	mr r4, r31
/* 80106E64 00103DA4  38 A0 00 03 */	li r5, 3
/* 80106E68 00103DA8  48 35 75 DD */	bl __ct__Q23PSM9EnemyBaseFPQ24Game9EnemyBaseUc
/* 80106E6C 00103DAC  7C 60 1B 78 */	mr r0, r3
.L_80106E70:
/* 80106E70 00103DB0  7C 1E 03 78 */	mr r30, r0
/* 80106E74 00103DB4  48 00 00 DC */	b .L_80106F50
.L_80106E78:
/* 80106E78 00103DB8  38 60 00 E0 */	li r3, 0xe0
/* 80106E7C 00103DBC  4B F1 D0 29 */	bl __nw__FUl
/* 80106E80 00103DC0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80106E84 00103DC4  41 82 00 CC */	beq .L_80106F50
/* 80106E88 00103DC8  7F E4 FB 78 */	mr r4, r31
/* 80106E8C 00103DCC  38 A0 00 04 */	li r5, 4
/* 80106E90 00103DD0  48 35 75 B5 */	bl __ct__Q23PSM9EnemyBaseFPQ24Game9EnemyBaseUc
/* 80106E94 00103DD4  3C 60 80 4F */	lis r3, __vt__Q23PSM8EnemyBig@ha
/* 80106E98 00103DD8  38 A3 ED 70 */	addi r5, r3, __vt__Q23PSM8EnemyBig@l
/* 80106E9C 00103DDC  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80106EA0 00103DE0  38 05 00 08 */	addi r0, r5, 8
/* 80106EA4 00103DE4  38 85 00 40 */	addi r4, r5, 0x40
/* 80106EA8 00103DE8  38 65 00 A4 */	addi r3, r5, 0xa4
/* 80106EAC 00103DEC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80106EB0 00103DF0  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80106EB4 00103DF4  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80106EB8 00103DF8  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80106EBC 00103DFC  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80106EC0 00103E00  48 00 00 90 */	b .L_80106F50
.L_80106EC4:
/* 80106EC4 00103E04  3C 60 80 48 */	lis r3, lbl_8047A544@ha
/* 80106EC8 00103E08  3C A0 80 48 */	lis r5, lbl_8047A60C@ha
/* 80106ECC 00103E0C  38 63 A5 44 */	addi r3, r3, lbl_8047A544@l
/* 80106ED0 00103E10  38 80 11 28 */	li r4, 0x1128
/* 80106ED4 00103E14  38 A5 A6 0C */	addi r5, r5, lbl_8047A60C@l
/* 80106ED8 00103E18  4C C6 31 82 */	crclr 6
/* 80106EDC 00103E1C  4B F2 37 65 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80106EE0 00103E20  48 00 00 70 */	b .L_80106F50
.L_80106EE4:
/* 80106EE4 00103E24  38 60 01 1C */	li r3, 0x11c
/* 80106EE8 00103E28  4B F1 CF BD */	bl __nw__FUl
/* 80106EEC 00103E2C  7C 60 1B 79 */	or. r0, r3, r3
/* 80106EF0 00103E30  41 82 00 10 */	beq .L_80106F00
/* 80106EF4 00103E34  7F E4 FB 78 */	mr r4, r31
/* 80106EF8 00103E38  48 35 90 79 */	bl __ct__Q23PSM12EnemyMidBossFPQ24Game9EnemyBase
/* 80106EFC 00103E3C  7C 60 1B 78 */	mr r0, r3
.L_80106F00:
/* 80106F00 00103E40  7C 1E 03 78 */	mr r30, r0
/* 80106F04 00103E44  48 00 00 4C */	b .L_80106F50
.L_80106F08:
/* 80106F08 00103E48  38 60 01 20 */	li r3, 0x120
/* 80106F0C 00103E4C  4B F1 CF 99 */	bl __nw__FUl
/* 80106F10 00103E50  7C 60 1B 79 */	or. r0, r3, r3
/* 80106F14 00103E54  41 82 00 10 */	beq .L_80106F24
/* 80106F18 00103E58  7F E4 FB 78 */	mr r4, r31
/* 80106F1C 00103E5C  48 35 98 D1 */	bl __ct__Q23PSM12EnemyBigBossFPQ24Game9EnemyBase
/* 80106F20 00103E60  7C 60 1B 78 */	mr r0, r3
.L_80106F24:
/* 80106F24 00103E64  7C 1E 03 78 */	mr r30, r0
/* 80106F28 00103E68  48 00 00 28 */	b .L_80106F50
.L_80106F2C:
/* 80106F2C 00103E6C  38 60 00 E0 */	li r3, 0xe0
/* 80106F30 00103E70  4B F1 CF 75 */	bl __nw__FUl
/* 80106F34 00103E74  7C 60 1B 79 */	or. r0, r3, r3
/* 80106F38 00103E78  41 82 00 14 */	beq .L_80106F4C
/* 80106F3C 00103E7C  7F E4 FB 78 */	mr r4, r31
/* 80106F40 00103E80  38 A0 00 02 */	li r5, 2
/* 80106F44 00103E84  48 35 80 29 */	bl __ct__Q23PSM18EnemyNotAggressiveFPQ24Game9EnemyBaseUc
/* 80106F48 00103E88  7C 60 1B 78 */	mr r0, r3
.L_80106F4C:
/* 80106F4C 00103E8C  7C 1E 03 78 */	mr r30, r0
.L_80106F50:
/* 80106F50 00103E90  7F C3 F3 78 */	mr r3, r30
.L_80106F54:
/* 80106F54 00103E94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80106F58 00103E98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80106F5C 00103E9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80106F60 00103EA0  7C 08 03 A6 */	mtlr r0
/* 80106F64 00103EA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80106F68 00103EA8  4E 80 00 20 */	blr 

.global __dt__Q23PSM8EnemyBigFv
__dt__Q23PSM8EnemyBigFv:
/* 80106F6C 00103EAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80106F70 00103EB0  7C 08 02 A6 */	mflr r0
/* 80106F74 00103EB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80106F78 00103EB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80106F7C 00103EBC  7C 9F 23 78 */	mr r31, r4
/* 80106F80 00103EC0  93 C1 00 08 */	stw r30, 8(r1)
/* 80106F84 00103EC4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80106F88 00103EC8  41 82 01 2C */	beq .L_801070B4
/* 80106F8C 00103ECC  3C 60 80 4F */	lis r3, __vt__Q23PSM8EnemyBig@ha
/* 80106F90 00103ED0  38 A3 ED 70 */	addi r5, r3, __vt__Q23PSM8EnemyBig@l
/* 80106F94 00103ED4  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80106F98 00103ED8  38 05 00 08 */	addi r0, r5, 8
/* 80106F9C 00103EDC  38 85 00 40 */	addi r4, r5, 0x40
/* 80106FA0 00103EE0  38 65 00 A4 */	addi r3, r5, 0xa4
/* 80106FA4 00103EE4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80106FA8 00103EE8  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80106FAC 00103EEC  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80106FB0 00103EF0  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80106FB4 00103EF4  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80106FB8 00103EF8  41 82 00 EC */	beq .L_801070A4
/* 80106FBC 00103EFC  3C 60 80 4F */	lis r3, __vt__Q23PSM9EnemyBase@ha
/* 80106FC0 00103F00  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 80106FC4 00103F04  38 A3 EF AC */	addi r5, r3, __vt__Q23PSM9EnemyBase@l
/* 80106FC8 00103F08  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80106FCC 00103F0C  38 05 00 08 */	addi r0, r5, 8
/* 80106FD0 00103F10  38 85 00 40 */	addi r4, r5, 0x40
/* 80106FD4 00103F14  38 65 00 A4 */	addi r3, r5, 0xa4
/* 80106FD8 00103F18  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80106FDC 00103F1C  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80106FE0 00103F20  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80106FE4 00103F24  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80106FE8 00103F28  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80106FEC 00103F2C  41 82 00 24 */	beq .L_80107010
/* 80106FF0 00103F30  3C 60 80 4F */	lis r3, __vt__Q23PSM9KehaiLink@ha
/* 80106FF4 00103F34  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 80106FF8 00103F38  38 03 F0 80 */	addi r0, r3, __vt__Q23PSM9KehaiLink@l
/* 80106FFC 00103F3C  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80107000 00103F40  41 82 00 10 */	beq .L_80107010
/* 80107004 00103F44  38 7E 00 CC */	addi r3, r30, 0xcc
/* 80107008 00103F48  38 80 00 00 */	li r4, 0
/* 8010700C 00103F4C  4B F1 F7 C5 */	bl __dt__10JSUPtrLinkFv
.L_80107010:
/* 80107010 00103F50  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 80107014 00103F54  41 82 00 24 */	beq .L_80107038
/* 80107018 00103F58  3C 60 80 4F */	lis r3, __vt__Q23PSM10BattleLink@ha
/* 8010701C 00103F5C  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 80107020 00103F60  38 03 F0 90 */	addi r0, r3, __vt__Q23PSM10BattleLink@l
/* 80107024 00103F64  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80107028 00103F68  41 82 00 10 */	beq .L_80107038
/* 8010702C 00103F6C  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80107030 00103F70  38 80 00 00 */	li r4, 0
/* 80107034 00103F74  4B F1 F7 9D */	bl __dt__10JSUPtrLinkFv
.L_80107038:
/* 80107038 00103F78  28 1E 00 00 */	cmplwi r30, 0
/* 8010703C 00103F7C  41 82 00 68 */	beq .L_801070A4
/* 80107040 00103F80  3C 60 80 4F */	lis r3, __vt__Q23PSM13CreatureAnime@ha
/* 80107044 00103F84  34 1E 00 30 */	addic. r0, r30, 0x30
/* 80107048 00103F88  38 83 F0 A0 */	addi r4, r3, __vt__Q23PSM13CreatureAnime@l
/* 8010704C 00103F8C  90 9E 00 28 */	stw r4, 0x28(r30)
/* 80107050 00103F90  38 64 00 08 */	addi r3, r4, 8
/* 80107054 00103F94  38 04 00 40 */	addi r0, r4, 0x40
/* 80107058 00103F98  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8010705C 00103F9C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80107060 00103FA0  41 82 00 1C */	beq .L_8010707C
/* 80107064 00103FA4  3C 80 80 4A */	lis r4, __vt__13JAIAnimeSound@ha
/* 80107068 00103FA8  38 7E 00 30 */	addi r3, r30, 0x30
/* 8010706C 00103FAC  38 04 62 00 */	addi r0, r4, __vt__13JAIAnimeSound@l
/* 80107070 00103FB0  38 80 00 00 */	li r4, 0
/* 80107074 00103FB4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80107078 00103FB8  4B FB 2B 69 */	bl __dt__Q27JAInter6ObjectFv
.L_8010707C:
/* 8010707C 00103FBC  28 1E 00 00 */	cmplwi r30, 0
/* 80107080 00103FC0  41 82 00 24 */	beq .L_801070A4
/* 80107084 00103FC4  3C 80 80 4F */	lis r4, __vt__Q23PSM8Creature@ha
/* 80107088 00103FC8  7F C3 F3 78 */	mr r3, r30
/* 8010708C 00103FCC  38 A4 F1 CC */	addi r5, r4, __vt__Q23PSM8Creature@l
/* 80107090 00103FD0  38 80 00 00 */	li r4, 0
/* 80107094 00103FD4  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80107098 00103FD8  38 05 00 08 */	addi r0, r5, 8
/* 8010709C 00103FDC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801070A0 00103FE0  48 35 5D C5 */	bl __dt__Q23PSM7ObjBaseFv
.L_801070A4:
/* 801070A4 00103FE4  7F E0 07 35 */	extsh. r0, r31
/* 801070A8 00103FE8  40 81 00 0C */	ble .L_801070B4
/* 801070AC 00103FEC  7F C3 F3 78 */	mr r3, r30
/* 801070B0 00103FF0  4B F1 D0 05 */	bl __dl__FPv
.L_801070B4:
/* 801070B4 00103FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801070B8 00103FF8  7F C3 F3 78 */	mr r3, r30
/* 801070BC 00103FFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801070C0 00104000  83 C1 00 08 */	lwz r30, 8(r1)
/* 801070C4 00104004  7C 08 03 A6 */	mtlr r0
/* 801070C8 00104008  38 21 00 10 */	addi r1, r1, 0x10
/* 801070CC 0010400C  4E 80 00 20 */	blr 

.global __dt__Q23PSM9EnemyBaseFv
__dt__Q23PSM9EnemyBaseFv:
/* 801070D0 00104010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801070D4 00104014  7C 08 02 A6 */	mflr r0
/* 801070D8 00104018  90 01 00 14 */	stw r0, 0x14(r1)
/* 801070DC 0010401C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801070E0 00104020  7C 9F 23 78 */	mr r31, r4
/* 801070E4 00104024  93 C1 00 08 */	stw r30, 8(r1)
/* 801070E8 00104028  7C 7E 1B 79 */	or. r30, r3, r3
/* 801070EC 0010402C  41 82 00 FC */	beq .L_801071E8
/* 801070F0 00104030  3C 60 80 4F */	lis r3, __vt__Q23PSM9EnemyBase@ha
/* 801070F4 00104034  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 801070F8 00104038  38 A3 EF AC */	addi r5, r3, __vt__Q23PSM9EnemyBase@l
/* 801070FC 0010403C  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80107100 00104040  38 05 00 08 */	addi r0, r5, 8
/* 80107104 00104044  38 85 00 40 */	addi r4, r5, 0x40
/* 80107108 00104048  38 65 00 A4 */	addi r3, r5, 0xa4
/* 8010710C 0010404C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80107110 00104050  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80107114 00104054  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80107118 00104058  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 8010711C 0010405C  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80107120 00104060  41 82 00 24 */	beq .L_80107144
/* 80107124 00104064  3C 60 80 4F */	lis r3, __vt__Q23PSM9KehaiLink@ha
/* 80107128 00104068  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 8010712C 0010406C  38 03 F0 80 */	addi r0, r3, __vt__Q23PSM9KehaiLink@l
/* 80107130 00104070  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80107134 00104074  41 82 00 10 */	beq .L_80107144
/* 80107138 00104078  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8010713C 0010407C  38 80 00 00 */	li r4, 0
/* 80107140 00104080  4B F1 F6 91 */	bl __dt__10JSUPtrLinkFv
.L_80107144:
/* 80107144 00104084  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 80107148 00104088  41 82 00 24 */	beq .L_8010716C
/* 8010714C 0010408C  3C 60 80 4F */	lis r3, __vt__Q23PSM10BattleLink@ha
/* 80107150 00104090  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 80107154 00104094  38 03 F0 90 */	addi r0, r3, __vt__Q23PSM10BattleLink@l
/* 80107158 00104098  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 8010715C 0010409C  41 82 00 10 */	beq .L_8010716C
/* 80107160 001040A0  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80107164 001040A4  38 80 00 00 */	li r4, 0
/* 80107168 001040A8  4B F1 F6 69 */	bl __dt__10JSUPtrLinkFv
.L_8010716C:
/* 8010716C 001040AC  28 1E 00 00 */	cmplwi r30, 0
/* 80107170 001040B0  41 82 00 68 */	beq .L_801071D8
/* 80107174 001040B4  3C 60 80 4F */	lis r3, __vt__Q23PSM13CreatureAnime@ha
/* 80107178 001040B8  34 1E 00 30 */	addic. r0, r30, 0x30
/* 8010717C 001040BC  38 83 F0 A0 */	addi r4, r3, __vt__Q23PSM13CreatureAnime@l
/* 80107180 001040C0  90 9E 00 28 */	stw r4, 0x28(r30)
/* 80107184 001040C4  38 64 00 08 */	addi r3, r4, 8
/* 80107188 001040C8  38 04 00 40 */	addi r0, r4, 0x40
/* 8010718C 001040CC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80107190 001040D0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80107194 001040D4  41 82 00 1C */	beq .L_801071B0
/* 80107198 001040D8  3C 80 80 4A */	lis r4, __vt__13JAIAnimeSound@ha
/* 8010719C 001040DC  38 7E 00 30 */	addi r3, r30, 0x30
/* 801071A0 001040E0  38 04 62 00 */	addi r0, r4, __vt__13JAIAnimeSound@l
/* 801071A4 001040E4  38 80 00 00 */	li r4, 0
/* 801071A8 001040E8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801071AC 001040EC  4B FB 2A 35 */	bl __dt__Q27JAInter6ObjectFv
.L_801071B0:
/* 801071B0 001040F0  28 1E 00 00 */	cmplwi r30, 0
/* 801071B4 001040F4  41 82 00 24 */	beq .L_801071D8
/* 801071B8 001040F8  3C 80 80 4F */	lis r4, __vt__Q23PSM8Creature@ha
/* 801071BC 001040FC  7F C3 F3 78 */	mr r3, r30
/* 801071C0 00104100  38 A4 F1 CC */	addi r5, r4, __vt__Q23PSM8Creature@l
/* 801071C4 00104104  38 80 00 00 */	li r4, 0
/* 801071C8 00104108  90 BE 00 28 */	stw r5, 0x28(r30)
/* 801071CC 0010410C  38 05 00 08 */	addi r0, r5, 8
/* 801071D0 00104110  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801071D4 00104114  48 35 5C 91 */	bl __dt__Q23PSM7ObjBaseFv
.L_801071D8:
/* 801071D8 00104118  7F E0 07 35 */	extsh. r0, r31
/* 801071DC 0010411C  40 81 00 0C */	ble .L_801071E8
/* 801071E0 00104120  7F C3 F3 78 */	mr r3, r30
/* 801071E4 00104124  4B F1 CE D1 */	bl __dl__FPv
.L_801071E8:
/* 801071E8 00104128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801071EC 0010412C  7F C3 F3 78 */	mr r3, r30
/* 801071F0 00104130  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801071F4 00104134  83 C1 00 08 */	lwz r30, 8(r1)
/* 801071F8 00104138  7C 08 03 A6 */	mtlr r0
/* 801071FC 0010413C  38 21 00 10 */	addi r1, r1, 0x10
/* 80107200 00104140  4E 80 00 20 */	blr 

.global startMotion__Q24Game9EnemyBaseFv
startMotion__Q24Game9EnemyBaseFv:
/* 80107204 00104144  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107208 00104148  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 8010720C 0010414C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80107210 00104150  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 80107214 00104154  90 03 00 0C */	stw r0, 0xc(r3)
/* 80107218 00104158  D0 03 00 08 */	stfs f0, 8(r3)
/* 8010721C 0010415C  4E 80 00 20 */	blr 

.global getMotionFrameMax__Q24Game9EnemyBaseFv
getMotionFrameMax__Q24Game9EnemyBaseFv:
/* 80107220 00104160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107224 00104164  7C 08 02 A6 */	mflr r0
/* 80107228 00104168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010722C 0010416C  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107230 00104170  81 83 00 00 */	lwz r12, 0(r3)
/* 80107234 00104174  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80107238 00104178  7D 89 03 A6 */	mtctr r12
/* 8010723C 0010417C  4E 80 04 21 */	bctrl 
/* 80107240 00104180  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80107244 00104184  3C 00 43 30 */	lis r0, 0x4330
/* 80107248 00104188  90 01 00 08 */	stw r0, 8(r1)
/* 8010724C 0010418C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80107250 00104190  C8 22 94 58 */	lfd f1, lbl_805177B8@sda21(r2)
/* 80107254 00104194  A8 03 00 06 */	lha r0, 6(r3)
/* 80107258 00104198  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8010725C 0010419C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80107260 001041A0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80107264 001041A4  EC 20 08 28 */	fsubs f1, f0, f1
/* 80107268 001041A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010726C 001041AC  7C 08 03 A6 */	mtlr r0
/* 80107270 001041B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80107274 001041B4  4E 80 00 20 */	blr 

.global getFirstKeyFrame__Q24Game9EnemyBaseFv
getFirstKeyFrame__Q24Game9EnemyBaseFv:
/* 80107278 001041B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010727C 001041BC  7C 08 02 A6 */	mflr r0
/* 80107280 001041C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107284 001041C4  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107288 001041C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010728C 001041CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80107290 001041D0  7D 89 03 A6 */	mtctr r12
/* 80107294 001041D4  4E 80 04 21 */	bctrl 
/* 80107298 001041D8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8010729C 001041DC  80 63 00 38 */	lwz r3, 0x38(r3)
/* 801072A0 001041E0  28 03 00 00 */	cmplwi r3, 0
/* 801072A4 001041E4  41 82 00 28 */	beq .L_801072CC
/* 801072A8 001041E8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801072AC 001041EC  3C 00 43 30 */	lis r0, 0x4330
/* 801072B0 001041F0  90 01 00 08 */	stw r0, 8(r1)
/* 801072B4 001041F4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801072B8 001041F8  C8 22 94 58 */	lfd f1, lbl_805177B8@sda21(r2)
/* 801072BC 001041FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801072C0 00104200  C8 01 00 08 */	lfd f0, 8(r1)
/* 801072C4 00104204  EC 20 08 28 */	fsubs f1, f0, f1
/* 801072C8 00104208  48 00 00 08 */	b .L_801072D0
.L_801072CC:
/* 801072CC 0010420C  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
.L_801072D0:
/* 801072D0 00104210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801072D4 00104214  7C 08 03 A6 */	mtlr r0
/* 801072D8 00104218  38 21 00 10 */	addi r1, r1, 0x10
/* 801072DC 0010421C  4E 80 00 20 */	blr 

.global stopMotion__Q24Game9EnemyBaseFv
stopMotion__Q24Game9EnemyBaseFv:
/* 801072E0 00104220  80 63 01 84 */	lwz r3, 0x184(r3)
/* 801072E4 00104224  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801072E8 00104228  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801072EC 0010422C  90 03 00 0C */	stw r0, 0xc(r3)
/* 801072F0 00104230  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801072F4 00104234  60 00 00 01 */	ori r0, r0, 1
/* 801072F8 00104238  90 03 00 0C */	stw r0, 0xc(r3)
/* 801072FC 0010423C  4E 80 00 20 */	blr 

.global isFinishMotion__Q24Game9EnemyBaseFv
isFinishMotion__Q24Game9EnemyBaseFv:
/* 80107300 00104240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107304 00104244  7C 08 02 A6 */	mflr r0
/* 80107308 00104248  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010730C 0010424C  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107310 00104250  81 83 00 00 */	lwz r12, 0(r3)
/* 80107314 00104254  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80107318 00104258  7D 89 03 A6 */	mtctr r12
/* 8010731C 0010425C  4E 80 04 21 */	bctrl 
/* 80107320 00104260  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80107324 00104264  54 03 FF FE */	rlwinm r3, r0, 0x1f, 0x1f, 0x1f
/* 80107328 00104268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010732C 0010426C  7C 08 03 A6 */	mtlr r0
/* 80107330 00104270  38 21 00 10 */	addi r1, r1, 0x10
/* 80107334 00104274  4E 80 00 20 */	blr 

.global isStopMotion__Q24Game9EnemyBaseFv
isStopMotion__Q24Game9EnemyBaseFv:
/* 80107338 00104278  80 63 01 84 */	lwz r3, 0x184(r3)
/* 8010733C 0010427C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80107340 00104280  54 03 07 FE */	clrlwi r3, r0, 0x1f
/* 80107344 00104284  4E 80 00 20 */	blr 

.global getCurrAnimIndex__Q24Game9EnemyBaseFv
getCurrAnimIndex__Q24Game9EnemyBaseFv:
/* 80107348 00104288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010734C 0010428C  7C 08 02 A6 */	mflr r0
/* 80107350 00104290  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107354 00104294  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107358 00104298  81 83 00 00 */	lwz r12, 0(r3)
/* 8010735C 0010429C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80107360 001042A0  7D 89 03 A6 */	mtctr r12
/* 80107364 001042A4  4E 80 04 21 */	bctrl 
/* 80107368 001042A8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8010736C 001042AC  28 03 00 00 */	cmplwi r3, 0
/* 80107370 001042B0  41 82 00 0C */	beq .L_8010737C
/* 80107374 001042B4  A8 63 00 20 */	lha r3, 0x20(r3)
/* 80107378 001042B8  48 00 00 08 */	b .L_80107380
.L_8010737C:
/* 8010737C 001042BC  38 60 FF FF */	li r3, -1
.L_80107380:
/* 80107380 001042C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80107384 001042C4  7C 08 03 A6 */	mtlr r0
/* 80107388 001042C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010738C 001042CC  4E 80 00 20 */	blr 

.global setAnimSpeed__Q24Game9EnemyBaseFf
setAnimSpeed__Q24Game9EnemyBaseFf:
/* 80107390 001042D0  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107394 001042D4  D0 23 00 04 */	stfs f1, 4(r3)
/* 80107398 001042D8  4E 80 00 20 */	blr 

.global resetAnimSpeed__Q24Game9EnemyBaseFv
resetAnimSpeed__Q24Game9EnemyBaseFv:
/* 8010739C 001042DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801073A0 001042E0  7C 08 02 A6 */	mflr r0
/* 801073A4 001042E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801073A8 001042E8  80 63 01 84 */	lwz r3, 0x184(r3)
/* 801073AC 001042EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801073B0 001042F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801073B4 001042F4  7D 89 03 A6 */	mtctr r12
/* 801073B8 001042F8  4E 80 04 21 */	bctrl 
/* 801073BC 001042FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801073C0 00104300  7C 08 03 A6 */	mtlr r0
/* 801073C4 00104304  38 21 00 10 */	addi r1, r1, 0x10
/* 801073C8 00104308  4E 80 00 20 */	blr 

.global resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv:
/* 801073CC 0010430C  C0 02 9C 38 */	lfs f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 801073D0 00104310  D0 03 00 04 */	stfs f0, 4(r3)
/* 801073D4 00104314  4E 80 00 20 */	blr 

.global getJAIObject__Q24Game9EnemyBaseFv
getJAIObject__Q24Game9EnemyBaseFv:
/* 801073D8 00104318  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 801073DC 0010431C  28 03 00 00 */	cmplwi r3, 0
/* 801073E0 00104320  4D 82 00 20 */	beqlr 
/* 801073E4 00104324  38 63 00 30 */	addi r3, r3, 0x30
/* 801073E8 00104328  4E 80 00 20 */	blr 

.global getPSCreature__Q24Game9EnemyBaseFv
getPSCreature__Q24Game9EnemyBaseFv:
/* 801073EC 0010432C  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 801073F0 00104330  4E 80 00 20 */	blr 

.global getStateID__Q24Game9EnemyBaseFv
getStateID__Q24Game9EnemyBaseFv:
/* 801073F4 00104334  80 63 02 B4 */	lwz r3, 0x2b4(r3)
/* 801073F8 00104338  28 03 00 00 */	cmplwi r3, 0
/* 801073FC 0010433C  41 82 00 0C */	beq .L_80107408
/* 80107400 00104340  80 63 00 04 */	lwz r3, 4(r3)
/* 80107404 00104344  4E 80 00 20 */	blr 
.L_80107408:
/* 80107408 00104348  38 60 FF FF */	li r3, -1
/* 8010740C 0010434C  4E 80 00 20 */	blr 

.global needShadow__Q24Game9EnemyBaseFv
needShadow__Q24Game9EnemyBaseFv:
/* 80107410 00104350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107414 00104354  7C 08 02 A6 */	mflr r0
/* 80107418 00104358  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010741C 0010435C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80107420 00104360  93 C1 00 08 */	stw r30, 8(r1)
/* 80107424 00104364  7C 7E 1B 78 */	mr r30, r3
/* 80107428 00104368  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8010742C 0010436C  28 04 00 00 */	cmplwi r4, 0
/* 80107430 00104370  41 82 00 54 */	beq .L_80107484
/* 80107434 00104374  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 80107438 00104378  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8010743C 0010437C  41 82 00 48 */	beq .L_80107484
/* 80107440 00104380  81 83 00 00 */	lwz r12, 0(r3)
/* 80107444 00104384  3B E0 00 00 */	li r31, 0
/* 80107448 00104388  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8010744C 0010438C  7D 89 03 A6 */	mtctr r12
/* 80107450 00104390  4E 80 04 21 */	bctrl 
/* 80107454 00104394  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80107458 00104398  40 82 00 20 */	bne .L_80107478
/* 8010745C 0010439C  80 7E 01 80 */	lwz r3, 0x180(r30)
/* 80107460 001043A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80107464 001043A4  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80107468 001043A8  7D 89 03 A6 */	mtctr r12
/* 8010746C 001043AC  4E 80 04 21 */	bctrl 
/* 80107470 001043B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80107474 001043B4  41 82 00 08 */	beq .L_8010747C
.L_80107478:
/* 80107478 001043B8  3B E0 00 01 */	li r31, 1
.L_8010747C:
/* 8010747C 001043BC  7F E3 FB 78 */	mr r3, r31
/* 80107480 001043C0  48 00 00 24 */	b .L_801074A4
.L_80107484:
/* 80107484 001043C4  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80107488 001043C8  38 60 00 00 */	li r3, 0
/* 8010748C 001043CC  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80107490 001043D0  41 82 00 14 */	beq .L_801074A4
/* 80107494 001043D4  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 80107498 001043D8  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 8010749C 001043DC  40 82 00 08 */	bne .L_801074A4
/* 801074A0 001043E0  38 60 00 01 */	li r3, 1
.L_801074A4:
/* 801074A4 001043E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801074A8 001043E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801074AC 001043EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801074B0 001043F0  7C 08 03 A6 */	mtlr r0
/* 801074B4 001043F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801074B8 001043F8  4E 80 00 20 */	blr 

.global isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv:
/* 801074BC 001043FC  38 60 00 00 */	li r3, 0
/* 801074C0 00104400  4E 80 00 20 */	blr 

.global isMovieActor__Q24Game8CreatureFv
isMovieActor__Q24Game8CreatureFv:
/* 801074C4 00104404  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 801074C8 00104408  54 03 E7 FE */	rlwinm r3, r0, 0x1c, 0x1f, 0x1f
/* 801074CC 0010440C  4E 80 00 20 */	blr 

.global eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef:
/* 801074D0 00104410  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 801074D4 00104414  7C 08 02 A6 */	mflr r0
/* 801074D8 00104418  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 801074DC 0010441C  BF 61 00 9C */	stmw r27, 0x9c(r1)
/* 801074E0 00104420  7C 7D 1B 78 */	mr r29, r3
/* 801074E4 00104424  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 801074E8 00104428  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801074EC 0010442C  40 82 00 38 */	bne .L_80107524
/* 801074F0 00104430  C0 1D 02 08 */	lfs f0, 0x208(r29)
/* 801074F4 00104434  EC 00 08 2A */	fadds f0, f0, f1
/* 801074F8 00104438  D0 1D 02 08 */	stfs f0, 0x208(r29)
/* 801074FC 0010443C  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 80107500 00104440  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80107504 00104444  41 82 00 14 */	beq .L_80107518
/* 80107508 00104448  C0 3D 02 0C */	lfs f1, 0x20c(r29)
/* 8010750C 0010444C  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80107510 00104450  EC 01 00 2A */	fadds f0, f1, f0
/* 80107514 00104454  D0 1D 02 0C */	stfs f0, 0x20c(r29)
.L_80107518:
/* 80107518 00104458  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 8010751C 0010445C  60 00 00 02 */	ori r0, r0, 2
/* 80107520 00104460  90 1D 01 E0 */	stw r0, 0x1e0(r29)
.L_80107524:
/* 80107524 00104464  80 7D 01 E0 */	lwz r3, 0x1e0(r29)
/* 80107528 00104468  54 60 04 63 */	rlwinm. r0, r3, 0, 0x11, 0x11
/* 8010752C 0010446C  40 82 01 C0 */	bne .L_801076EC
/* 80107530 00104470  60 60 40 00 */	ori r0, r3, 0x4000
/* 80107534 00104474  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone8DrawInfo@ha
/* 80107538 00104478  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 8010753C 0010447C  3B 83 A1 D4 */	addi r28, r3, __vt__Q34Game10EnemyStone8DrawInfo@l
/* 80107540 00104480  3B C0 00 00 */	li r30, 0
/* 80107544 00104484  3B E0 00 00 */	li r31, 0
/* 80107548 00104488  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8010754C 0010448C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80107550 00104490  D0 1D 02 10 */	stfs f0, 0x210(r29)
/* 80107554 00104494  48 00 01 68 */	b .L_801076BC
.L_80107558:
/* 80107558 00104498  38 61 00 50 */	addi r3, r1, 0x50
/* 8010755C 0010449C  38 80 00 00 */	li r4, 0
/* 80107560 001044A0  48 02 1F 21 */	bl __ct__Q34Game10EnemyStone8DrawInfoFb
/* 80107564 001044A4  80 9D 02 4C */	lwz r4, 0x24c(r29)
/* 80107568 001044A8  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 8010756C 001044AC  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80107570 001044B0  80 04 00 04 */	lwz r0, 4(r4)
/* 80107574 001044B4  7F 60 FA 14 */	add r27, r0, r31
/* 80107578 001044B8  80 9B 00 00 */	lwz r4, 0(r27)
/* 8010757C 001044BC  48 33 7A 69 */	bl getJoint__Q28SysShape5ModelFPc
/* 80107580 001044C0  48 32 23 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80107584 001044C4  90 61 00 94 */	stw r3, 0x94(r1)
/* 80107588 001044C8  38 61 00 50 */	addi r3, r1, 0x50
/* 8010758C 001044CC  38 81 00 30 */	addi r4, r1, 0x30
/* 80107590 001044D0  38 A1 00 08 */	addi r5, r1, 8
/* 80107594 001044D4  93 61 00 90 */	stw r27, 0x90(r1)
/* 80107598 001044D8  48 02 21 35 */	bl "getPosAndScale__Q34Game10EnemyStone8DrawInfoFP10Vector3<f>Pf"
/* 8010759C 001044DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801075A0 001044E0  41 82 01 04 */	beq .L_801076A4
/* 801075A4 001044E4  80 E1 00 30 */	lwz r7, 0x30(r1)
/* 801075A8 001044E8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801075AC 001044EC  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 801075B0 001044F0  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 801075B4 001044F4  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 801075B8 001044F8  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 801075BC 001044FC  C0 1D 01 F8 */	lfs f0, 0x1f8(r29)
/* 801075C0 00104500  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 801075C4 00104504  C0 21 00 08 */	lfs f1, 8(r1)
/* 801075C8 00104508  90 E1 00 0C */	stw r7, 0xc(r1)
/* 801075CC 0010450C  EC 61 00 32 */	fmuls f3, f1, f0
/* 801075D0 00104510  80 61 00 90 */	lwz r3, 0x90(r1)
/* 801075D4 00104514  90 C1 00 10 */	stw r6, 0x10(r1)
/* 801075D8 00104518  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801075DC 0010451C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801075E0 00104520  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801075E4 00104524  90 81 00 3C */	stw r4, 0x3c(r1)
/* 801075E8 00104528  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801075EC 0010452C  D0 61 00 08 */	stfs f3, 8(r1)
/* 801075F0 00104530  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 801075F4 00104534  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 801075F8 00104538  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801075FC 0010453C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80107600 00104540  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80107604 00104544  80 03 00 04 */	lwz r0, 4(r3)
/* 80107608 00104548  2C 00 00 01 */	cmpwi r0, 1
/* 8010760C 0010454C  41 82 00 58 */	beq .L_80107664
/* 80107610 00104550  40 80 00 94 */	bge .L_801076A4
/* 80107614 00104554  2C 00 00 00 */	cmpwi r0, 0
/* 80107618 00104558  40 80 00 08 */	bge .L_80107620
/* 8010761C 0010455C  48 00 00 88 */	b .L_801076A4
.L_80107620:
/* 80107620 00104560  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80107624 00104564  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80107628 00104568  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8010762C 0010456C  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyPoisonL@ha
/* 80107630 00104570  90 01 00 24 */	stw r0, 0x24(r1)
/* 80107634 00104574  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 80107638 00104578  38 C0 02 2E */	li r6, 0x22e
/* 8010763C 0010457C  38 A0 00 00 */	li r5, 0
/* 80107640 00104580  90 01 00 24 */	stw r0, 0x24(r1)
/* 80107644 00104584  38 03 86 EC */	addi r0, r3, __vt__Q23efx13TEnemyPoisonL@l
/* 80107648 00104588  38 61 00 24 */	addi r3, r1, 0x24
/* 8010764C 0010458C  38 81 00 3C */	addi r4, r1, 0x3c
/* 80107650 00104590  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 80107654 00104594  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80107658 00104598  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010765C 0010459C  48 2C 04 4D */	bl create__Q23efx13TEnemyPoisonLFPQ23efx3Arg
/* 80107660 001045A0  48 00 00 44 */	b .L_801076A4
.L_80107664:
/* 80107664 001045A4  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80107668 001045A8  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 8010766C 001045AC  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80107670 001045B0  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyPoisonS@ha
/* 80107674 001045B4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80107678 001045B8  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 8010767C 001045BC  38 C0 02 2F */	li r6, 0x22f
/* 80107680 001045C0  38 A0 00 00 */	li r5, 0
/* 80107684 001045C4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80107688 001045C8  38 03 86 D8 */	addi r0, r3, __vt__Q23efx13TEnemyPoisonS@l
/* 8010768C 001045CC  38 61 00 18 */	addi r3, r1, 0x18
/* 80107690 001045D0  38 81 00 3C */	addi r4, r1, 0x3c
/* 80107694 001045D4  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 80107698 001045D8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8010769C 001045DC  90 01 00 18 */	stw r0, 0x18(r1)
/* 801076A0 001045E0  48 2C 04 E5 */	bl create__Q23efx13TEnemyPoisonSFPQ23efx3Arg
.L_801076A4:
/* 801076A4 001045E4  93 81 00 50 */	stw r28, 0x50(r1)
/* 801076A8 001045E8  38 61 00 50 */	addi r3, r1, 0x50
/* 801076AC 001045EC  38 80 00 00 */	li r4, 0
/* 801076B0 001045F0  48 30 9E D9 */	bl __dt__5CNodeFv
/* 801076B4 001045F4  3B FF 00 38 */	addi r31, r31, 0x38
/* 801076B8 001045F8  3B DE 00 01 */	addi r30, r30, 1
.L_801076BC:
/* 801076BC 001045FC  80 7D 02 4C */	lwz r3, 0x24c(r29)
/* 801076C0 00104600  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801076C4 00104604  88 03 00 00 */	lbz r0, 0(r3)
/* 801076C8 00104608  7C 1E 00 00 */	cmpw r30, r0
/* 801076CC 0010460C  41 80 FE 8C */	blt .L_80107558
/* 801076D0 00104610  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 801076D4 00104614  38 80 58 07 */	li r4, 0x5807
/* 801076D8 00104618  38 A0 00 00 */	li r5, 0
/* 801076DC 0010461C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801076E0 00104620  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801076E4 00104624  7D 89 03 A6 */	mtctr r12
/* 801076E8 00104628  4E 80 04 21 */	bctrl 
.L_801076EC:
/* 801076EC 0010462C  BB 61 00 9C */	lmw r27, 0x9c(r1)
/* 801076F0 00104630  38 60 00 01 */	li r3, 1
/* 801076F4 00104634  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801076F8 00104638  7C 08 03 A6 */	mtlr r0
/* 801076FC 0010463C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80107700 00104640  4E 80 00 20 */	blr 

.global __dt__Q34Game10EnemyStone8DrawInfoFv
__dt__Q34Game10EnemyStone8DrawInfoFv:
/* 80107704 00104644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107708 00104648  7C 08 02 A6 */	mflr r0
/* 8010770C 0010464C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107710 00104650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80107714 00104654  7C 9F 23 78 */	mr r31, r4
/* 80107718 00104658  93 C1 00 08 */	stw r30, 8(r1)
/* 8010771C 0010465C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80107720 00104660  41 82 00 28 */	beq .L_80107748
/* 80107724 00104664  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8DrawInfo@ha
/* 80107728 00104668  38 80 00 00 */	li r4, 0
/* 8010772C 0010466C  38 05 A1 D4 */	addi r0, r5, __vt__Q34Game10EnemyStone8DrawInfo@l
/* 80107730 00104670  90 1E 00 00 */	stw r0, 0(r30)
/* 80107734 00104674  48 30 9E 55 */	bl __dt__5CNodeFv
/* 80107738 00104678  7F E0 07 35 */	extsh. r0, r31
/* 8010773C 0010467C  40 81 00 0C */	ble .L_80107748
/* 80107740 00104680  7F C3 F3 78 */	mr r3, r30
/* 80107744 00104684  4B F1 C9 71 */	bl __dl__FPv
.L_80107748:
/* 80107748 00104688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010774C 0010468C  7F C3 F3 78 */	mr r3, r30
/* 80107750 00104690  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80107754 00104694  83 C1 00 08 */	lwz r30, 8(r1)
/* 80107758 00104698  7C 08 03 A6 */	mtlr r0
/* 8010775C 0010469C  38 21 00 10 */	addi r1, r1, 0x10
/* 80107760 001046A0  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q24Game9EnemyBaseFv
getDownSmokeScale__Q24Game9EnemyBaseFv:
/* 80107764 001046A4  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80107768 001046A8  4E 80 00 20 */	blr 

.global constraintOff__Q24Game9EnemyBaseFv
constraintOff__Q24Game9EnemyBaseFv:
/* 8010776C 001046AC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80107770 001046B0  54 00 05 A8 */	rlwinm r0, r0, 0, 0x16, 0x14
/* 80107774 001046B4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80107778 001046B8  4E 80 00 20 */	blr 

.global hardConstraintOn__Q24Game9EnemyBaseFv
hardConstraintOn__Q24Game9EnemyBaseFv:
/* 8010777C 001046BC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80107780 001046C0  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80107784 001046C4  64 00 00 04 */	oris r0, r0, 4
/* 80107788 001046C8  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8010778C 001046CC  D0 03 01 18 */	stfs f0, 0x118(r3)
/* 80107790 001046D0  4E 80 00 20 */	blr 

.global hardConstraintOff__Q24Game9EnemyBaseFv
hardConstraintOff__Q24Game9EnemyBaseFv:
/* 80107794 001046D4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80107798 001046D8  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 8010779C 001046DC  54 00 03 98 */	rlwinm r0, r0, 0, 0xe, 0xc
/* 801077A0 001046E0  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 801077A4 001046E4  C0 23 02 18 */	lfs f1, 0x218(r3)
/* 801077A8 001046E8  D0 23 01 18 */	stfs f1, 0x118(r3)
/* 801077AC 001046EC  D0 03 01 1C */	stfs f0, 0x11c(r3)
/* 801077B0 001046F0  D0 03 01 20 */	stfs f0, 0x120(r3)
/* 801077B4 001046F4  D0 03 01 24 */	stfs f0, 0x124(r3)
/* 801077B8 001046F8  4E 80 00 20 */	blr 

.global startMovie__Q24Game9EnemyBaseFv
startMovie__Q24Game9EnemyBaseFv:
/* 801077BC 001046FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801077C0 00104700  7C 08 02 A6 */	mflr r0
/* 801077C4 00104704  90 01 00 14 */	stw r0, 0x14(r1)
/* 801077C8 00104708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801077CC 0010470C  93 C1 00 08 */	stw r30, 8(r1)
/* 801077D0 00104710  7C 7E 1B 78 */	mr r30, r3
/* 801077D4 00104714  7F C4 F3 78 */	mr r4, r30
/* 801077D8 00104718  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 801077DC 0010471C  48 02 91 B1 */	bl getCurrID__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
/* 801077E0 00104720  2C 03 00 05 */	cmpwi r3, 5
/* 801077E4 00104724  41 80 00 44 */	blt .L_80107828
/* 801077E8 00104728  80 7E 02 A0 */	lwz r3, 0x2a0(r30)
/* 801077EC 0010472C  48 00 00 20 */	b .L_8010780C
.L_801077F0:
/* 801077F0 00104730  81 83 00 00 */	lwz r12, 0(r3)
/* 801077F4 00104734  7F C4 F3 78 */	mr r4, r30
/* 801077F8 00104738  83 E3 00 04 */	lwz r31, 4(r3)
/* 801077FC 0010473C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80107800 00104740  7D 89 03 A6 */	mtctr r12
/* 80107804 00104744  4E 80 04 21 */	bctrl 
/* 80107808 00104748  7F E3 FB 78 */	mr r3, r31
.L_8010780C:
/* 8010780C 0010474C  28 03 00 00 */	cmplwi r3, 0
/* 80107810 00104750  40 82 FF E0 */	bne .L_801077F0
/* 80107814 00104754  7F C3 F3 78 */	mr r3, r30
/* 80107818 00104758  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010781C 0010475C  81 8C 02 F0 */	lwz r12, 0x2f0(r12)
/* 80107820 00104760  7D 89 03 A6 */	mtctr r12
/* 80107824 00104764  4E 80 04 21 */	bctrl 
.L_80107828:
/* 80107828 00104768  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010782C 0010476C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80107830 00104770  83 C1 00 08 */	lwz r30, 8(r1)
/* 80107834 00104774  7C 08 03 A6 */	mtlr r0
/* 80107838 00104778  38 21 00 10 */	addi r1, r1, 0x10
/* 8010783C 0010477C  4E 80 00 20 */	blr 

.global doStartMovie__Q24Game9EnemyBaseFv
doStartMovie__Q24Game9EnemyBaseFv:
/* 80107840 00104780  4E 80 00 20 */	blr 

.global endMovie__Q24Game9EnemyBaseFv
endMovie__Q24Game9EnemyBaseFv:
/* 80107844 00104784  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107848 00104788  7C 08 02 A6 */	mflr r0
/* 8010784C 0010478C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107850 00104790  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80107854 00104794  93 C1 00 08 */	stw r30, 8(r1)
/* 80107858 00104798  7C 7E 1B 78 */	mr r30, r3
/* 8010785C 0010479C  7F C4 F3 78 */	mr r4, r30
/* 80107860 001047A0  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80107864 001047A4  48 02 91 29 */	bl getCurrID__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
/* 80107868 001047A8  2C 03 00 05 */	cmpwi r3, 5
/* 8010786C 001047AC  41 80 00 44 */	blt .L_801078B0
/* 80107870 001047B0  80 7E 02 A0 */	lwz r3, 0x2a0(r30)
/* 80107874 001047B4  48 00 00 20 */	b .L_80107894
.L_80107878:
/* 80107878 001047B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010787C 001047BC  7F C4 F3 78 */	mr r4, r30
/* 80107880 001047C0  83 E3 00 04 */	lwz r31, 4(r3)
/* 80107884 001047C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80107888 001047C8  7D 89 03 A6 */	mtctr r12
/* 8010788C 001047CC  4E 80 04 21 */	bctrl 
/* 80107890 001047D0  7F E3 FB 78 */	mr r3, r31
.L_80107894:
/* 80107894 001047D4  28 03 00 00 */	cmplwi r3, 0
/* 80107898 001047D8  40 82 FF E0 */	bne .L_80107878
/* 8010789C 001047DC  7F C3 F3 78 */	mr r3, r30
/* 801078A0 001047E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801078A4 001047E4  81 8C 02 F4 */	lwz r12, 0x2f4(r12)
/* 801078A8 001047E8  7D 89 03 A6 */	mtctr r12
/* 801078AC 001047EC  4E 80 04 21 */	bctrl 
.L_801078B0:
/* 801078B0 001047F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801078B4 001047F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801078B8 001047F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801078BC 001047FC  7C 08 03 A6 */	mtlr r0
/* 801078C0 00104800  38 21 00 10 */	addi r1, r1, 0x10
/* 801078C4 00104804  4E 80 00 20 */	blr 

.global doEndMovie__Q24Game9EnemyBaseFv
doEndMovie__Q24Game9EnemyBaseFv:
/* 801078C8 00104808  4E 80 00 20 */	blr 

.global doStartEarthquakeState__Q24Game9EnemyBaseFf
doStartEarthquakeState__Q24Game9EnemyBaseFf:
/* 801078CC 0010480C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801078D0 00104810  7C 08 02 A6 */	mflr r0
/* 801078D4 00104814  90 01 00 34 */	stw r0, 0x34(r1)
/* 801078D8 00104818  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801078DC 0010481C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801078E0 00104820  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801078E4 00104824  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 801078E8 00104828  7C 7F 1B 78 */	mr r31, r3
/* 801078EC 0010482C  FF E0 08 90 */	fmr f31, f1
/* 801078F0 00104830  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 801078F4 00104834  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 801078F8 00104838  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 801078FC 0010483C  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 80107900 00104840  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 80107904 00104844  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 80107908 00104848  4B FC 1C 99 */	bl rand
/* 8010790C 0010484C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80107910 00104850  3C 00 43 30 */	lis r0, 0x4330
/* 80107914 00104854  90 61 00 0C */	stw r3, 0xc(r1)
/* 80107918 00104858  C8 62 94 58 */	lfd f3, lbl_805177B8@sda21(r2)
/* 8010791C 0010485C  90 01 00 08 */	stw r0, 8(r1)
/* 80107920 00104860  C0 42 94 3C */	lfs f2, lbl_8051779C@sda21(r2)
/* 80107924 00104864  C8 21 00 08 */	lfd f1, 8(r1)
/* 80107928 00104868  C0 02 94 E4 */	lfs f0, lbl_80517844@sda21(r2)
/* 8010792C 0010486C  EC 61 18 28 */	fsubs f3, f1, f3
/* 80107930 00104870  C0 22 94 D8 */	lfs f1, lbl_80517838@sda21(r2)
/* 80107934 00104874  EC 43 10 24 */	fdivs f2, f3, f2
/* 80107938 00104878  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8010793C 0010487C  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80107940 00104880  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80107944 00104884  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80107948 00104888  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8010794C 0010488C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80107950 00104890  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80107954 00104894  7C 08 03 A6 */	mtlr r0
/* 80107958 00104898  38 21 00 30 */	addi r1, r1, 0x30
/* 8010795C 0010489C  4E 80 00 20 */	blr 

.global doFinishEarthquakeState__Q24Game9EnemyBaseFv
doFinishEarthquakeState__Q24Game9EnemyBaseFv:
/* 80107960 001048A0  4E 80 00 20 */	blr 

.global doStartEarthquakeFitState__Q24Game9EnemyBaseFv
doStartEarthquakeFitState__Q24Game9EnemyBaseFv:
/* 80107964 001048A4  4E 80 00 20 */	blr 

.global doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
doFinishEarthquakeFitState__Q24Game9EnemyBaseFv:
/* 80107968 001048A8  4E 80 00 20 */	blr 

.global startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv:
/* 8010796C 001048AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107970 001048B0  7C 08 02 A6 */	mflr r0
/* 80107974 001048B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107978 001048B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010797C 001048BC  81 8C 02 E0 */	lwz r12, 0x2e0(r12)
/* 80107980 001048C0  7D 89 03 A6 */	mtctr r12
/* 80107984 001048C4  4E 80 04 21 */	bctrl 
/* 80107988 001048C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010798C 001048CC  7C 08 03 A6 */	mtlr r0
/* 80107990 001048D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80107994 001048D4  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv:
/* 80107998 001048D8  4E 80 00 20 */	blr 

.global finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv:
/* 8010799C 001048DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801079A0 001048E0  7C 08 02 A6 */	mflr r0
/* 801079A4 001048E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801079A8 001048E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801079AC 001048EC  81 8C 02 E4 */	lwz r12, 0x2e4(r12)
/* 801079B0 001048F0  7D 89 03 A6 */	mtctr r12
/* 801079B4 001048F4  4E 80 04 21 */	bctrl 
/* 801079B8 001048F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801079BC 001048FC  7C 08 03 A6 */	mtlr r0
/* 801079C0 00104900  38 21 00 10 */	addi r1, r1, 0x10
/* 801079C4 00104904  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv:
/* 801079C8 00104908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801079CC 0010490C  7C 08 02 A6 */	mflr r0
/* 801079D0 00104910  90 01 00 14 */	stw r0, 0x14(r1)
/* 801079D4 00104914  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801079D8 00104918  7C 7F 1B 78 */	mr r31, r3
/* 801079DC 0010491C  81 83 00 00 */	lwz r12, 0(r3)
/* 801079E0 00104920  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 801079E4 00104924  7D 89 03 A6 */	mtctr r12
/* 801079E8 00104928  4E 80 04 21 */	bctrl 
/* 801079EC 0010492C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801079F0 00104930  40 82 00 28 */	bne .L_80107A18
/* 801079F4 00104934  80 1F 01 E4 */	lwz r0, 0x1e4(r31)
/* 801079F8 00104938  7F E3 FB 78 */	mr r3, r31
/* 801079FC 0010493C  60 00 00 10 */	ori r0, r0, 0x10
/* 80107A00 00104940  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80107A04 00104944  48 00 00 6D */	bl setDroppingMassZero__Q24Game9EnemyBaseFv
/* 80107A08 00104948  C0 02 94 64 */	lfs f0, lbl_805177C4@sda21(r2)
/* 80107A0C 0010494C  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80107A10 00104950  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 80107A14 00104954  D0 1F 01 70 */	stfs f0, 0x170(r31)
.L_80107A18:
/* 80107A18 00104958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80107A1C 0010495C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80107A20 00104960  7C 08 03 A6 */	mtlr r0
/* 80107A24 00104964  38 21 00 10 */	addi r1, r1, 0x10
/* 80107A28 00104968  4E 80 00 20 */	blr 

.global isBirthTypeDropGroup__Q24Game9EnemyBaseFv
isBirthTypeDropGroup__Q24Game9EnemyBaseFv:
/* 80107A2C 0010496C  88 03 02 B0 */	lbz r0, 0x2b0(r3)
/* 80107A30 00104970  38 60 00 00 */	li r3, 0
/* 80107A34 00104974  7C 00 07 74 */	extsb r0, r0
/* 80107A38 00104978  2C 00 00 01 */	cmpwi r0, 1
/* 80107A3C 0010497C  41 82 00 24 */	beq .L_80107A60
/* 80107A40 00104980  2C 00 00 02 */	cmpwi r0, 2
/* 80107A44 00104984  41 82 00 1C */	beq .L_80107A60
/* 80107A48 00104988  2C 00 00 03 */	cmpwi r0, 3
/* 80107A4C 0010498C  41 82 00 14 */	beq .L_80107A60
/* 80107A50 00104990  2C 00 00 04 */	cmpwi r0, 4
/* 80107A54 00104994  41 82 00 0C */	beq .L_80107A60
/* 80107A58 00104998  2C 00 00 05 */	cmpwi r0, 5
/* 80107A5C 0010499C  4C 82 00 20 */	bnelr 
.L_80107A60:
/* 80107A60 001049A0  38 60 00 01 */	li r3, 1
/* 80107A64 001049A4  4E 80 00 20 */	blr 

.global getFitEffectPos__Q24Game9EnemyBaseFv
getFitEffectPos__Q24Game9EnemyBaseFv:
/* 80107A68 001049A8  38 63 02 20 */	addi r3, r3, 0x220
/* 80107A6C 001049AC  4E 80 00 20 */	blr 

.global setDroppingMassZero__Q24Game9EnemyBaseFv
setDroppingMassZero__Q24Game9EnemyBaseFv:
/* 80107A70 001049B0  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 80107A74 001049B4  C0 02 94 50 */	lfs f0, lbl_805177B0@sda21(r2)
/* 80107A78 001049B8  60 00 00 20 */	ori r0, r0, 0x20
/* 80107A7C 001049BC  90 03 01 E4 */	stw r0, 0x1e4(r3)
/* 80107A80 001049C0  D0 03 01 18 */	stfs f0, 0x118(r3)
/* 80107A84 001049C4  4E 80 00 20 */	blr 

.global resetDroppingMassZero__Q24Game9EnemyBaseFv
resetDroppingMassZero__Q24Game9EnemyBaseFv:
/* 80107A88 001049C8  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 80107A8C 001049CC  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80107A90 001049D0  90 03 01 E4 */	stw r0, 0x1e4(r3)
/* 80107A94 001049D4  C0 03 02 18 */	lfs f0, 0x218(r3)
/* 80107A98 001049D8  D0 03 01 18 */	stfs f0, 0x118(r3)
/* 80107A9C 001049DC  4E 80 00 20 */	blr 

.global __dt__Q23PSM10EnemyHekoiFv
__dt__Q23PSM10EnemyHekoiFv:
/* 80107AA0 001049E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107AA4 001049E4  7C 08 02 A6 */	mflr r0
/* 80107AA8 001049E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107AAC 001049EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80107AB0 001049F0  7C 9F 23 78 */	mr r31, r4
/* 80107AB4 001049F4  93 C1 00 08 */	stw r30, 8(r1)
/* 80107AB8 001049F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80107ABC 001049FC  41 82 01 2C */	beq .L_80107BE8
/* 80107AC0 00104A00  3C 60 80 4B */	lis r3, __vt__Q23PSM10EnemyHekoi@ha
/* 80107AC4 00104A04  38 A3 A1 E4 */	addi r5, r3, __vt__Q23PSM10EnemyHekoi@l
/* 80107AC8 00104A08  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80107ACC 00104A0C  38 05 00 08 */	addi r0, r5, 8
/* 80107AD0 00104A10  38 85 00 40 */	addi r4, r5, 0x40
/* 80107AD4 00104A14  38 65 00 A4 */	addi r3, r5, 0xa4
/* 80107AD8 00104A18  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80107ADC 00104A1C  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80107AE0 00104A20  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80107AE4 00104A24  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80107AE8 00104A28  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80107AEC 00104A2C  41 82 00 EC */	beq .L_80107BD8
/* 80107AF0 00104A30  3C 60 80 4F */	lis r3, __vt__Q23PSM9EnemyBase@ha
/* 80107AF4 00104A34  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 80107AF8 00104A38  38 A3 EF AC */	addi r5, r3, __vt__Q23PSM9EnemyBase@l
/* 80107AFC 00104A3C  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80107B00 00104A40  38 05 00 08 */	addi r0, r5, 8
/* 80107B04 00104A44  38 85 00 40 */	addi r4, r5, 0x40
/* 80107B08 00104A48  38 65 00 A4 */	addi r3, r5, 0xa4
/* 80107B0C 00104A4C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80107B10 00104A50  38 05 00 B4 */	addi r0, r5, 0xb4
/* 80107B14 00104A54  90 9E 00 30 */	stw r4, 0x30(r30)
/* 80107B18 00104A58  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 80107B1C 00104A5C  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80107B20 00104A60  41 82 00 24 */	beq .L_80107B44
/* 80107B24 00104A64  3C 60 80 4F */	lis r3, __vt__Q23PSM9KehaiLink@ha
/* 80107B28 00104A68  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 80107B2C 00104A6C  38 03 F0 80 */	addi r0, r3, __vt__Q23PSM9KehaiLink@l
/* 80107B30 00104A70  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 80107B34 00104A74  41 82 00 10 */	beq .L_80107B44
/* 80107B38 00104A78  38 7E 00 CC */	addi r3, r30, 0xcc
/* 80107B3C 00104A7C  38 80 00 00 */	li r4, 0
/* 80107B40 00104A80  4B F1 EC 91 */	bl __dt__10JSUPtrLinkFv
.L_80107B44:
/* 80107B44 00104A84  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 80107B48 00104A88  41 82 00 24 */	beq .L_80107B6C
/* 80107B4C 00104A8C  3C 60 80 4F */	lis r3, __vt__Q23PSM10BattleLink@ha
/* 80107B50 00104A90  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 80107B54 00104A94  38 03 F0 90 */	addi r0, r3, __vt__Q23PSM10BattleLink@l
/* 80107B58 00104A98  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80107B5C 00104A9C  41 82 00 10 */	beq .L_80107B6C
/* 80107B60 00104AA0  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80107B64 00104AA4  38 80 00 00 */	li r4, 0
/* 80107B68 00104AA8  4B F1 EC 69 */	bl __dt__10JSUPtrLinkFv
.L_80107B6C:
/* 80107B6C 00104AAC  28 1E 00 00 */	cmplwi r30, 0
/* 80107B70 00104AB0  41 82 00 68 */	beq .L_80107BD8
/* 80107B74 00104AB4  3C 60 80 4F */	lis r3, __vt__Q23PSM13CreatureAnime@ha
/* 80107B78 00104AB8  34 1E 00 30 */	addic. r0, r30, 0x30
/* 80107B7C 00104ABC  38 83 F0 A0 */	addi r4, r3, __vt__Q23PSM13CreatureAnime@l
/* 80107B80 00104AC0  90 9E 00 28 */	stw r4, 0x28(r30)
/* 80107B84 00104AC4  38 64 00 08 */	addi r3, r4, 8
/* 80107B88 00104AC8  38 04 00 40 */	addi r0, r4, 0x40
/* 80107B8C 00104ACC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80107B90 00104AD0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80107B94 00104AD4  41 82 00 1C */	beq .L_80107BB0
/* 80107B98 00104AD8  3C 80 80 4A */	lis r4, __vt__13JAIAnimeSound@ha
/* 80107B9C 00104ADC  38 7E 00 30 */	addi r3, r30, 0x30
/* 80107BA0 00104AE0  38 04 62 00 */	addi r0, r4, __vt__13JAIAnimeSound@l
/* 80107BA4 00104AE4  38 80 00 00 */	li r4, 0
/* 80107BA8 00104AE8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80107BAC 00104AEC  4B FB 20 35 */	bl __dt__Q27JAInter6ObjectFv
.L_80107BB0:
/* 80107BB0 00104AF0  28 1E 00 00 */	cmplwi r30, 0
/* 80107BB4 00104AF4  41 82 00 24 */	beq .L_80107BD8
/* 80107BB8 00104AF8  3C 80 80 4F */	lis r4, __vt__Q23PSM8Creature@ha
/* 80107BBC 00104AFC  7F C3 F3 78 */	mr r3, r30
/* 80107BC0 00104B00  38 A4 F1 CC */	addi r5, r4, __vt__Q23PSM8Creature@l
/* 80107BC4 00104B04  38 80 00 00 */	li r4, 0
/* 80107BC8 00104B08  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80107BCC 00104B0C  38 05 00 08 */	addi r0, r5, 8
/* 80107BD0 00104B10  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80107BD4 00104B14  48 35 52 91 */	bl __dt__Q23PSM7ObjBaseFv
.L_80107BD8:
/* 80107BD8 00104B18  7F E0 07 35 */	extsh. r0, r31
/* 80107BDC 00104B1C  40 81 00 0C */	ble .L_80107BE8
/* 80107BE0 00104B20  7F C3 F3 78 */	mr r3, r30
/* 80107BE4 00104B24  4B F1 C4 D1 */	bl __dl__FPv
.L_80107BE8:
/* 80107BE8 00104B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80107BEC 00104B2C  7F C3 F3 78 */	mr r3, r30
/* 80107BF0 00104B30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80107BF4 00104B34  83 C1 00 08 */	lwz r30, 8(r1)
/* 80107BF8 00104B38  7C 08 03 A6 */	mtlr r0
/* 80107BFC 00104B3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80107C00 00104B40  4E 80 00 20 */	blr 

.global getCastType__Q23PSM10EnemyHekoiFv
getCastType__Q23PSM10EnemyHekoiFv:
/* 80107C04 00104B44  38 60 00 03 */	li r3, 3
/* 80107C08 00104B48  4E 80 00 20 */	blr 

.global getJAIObject__Q23PSM13CreatureAnimeFv
getJAIObject__Q23PSM13CreatureAnimeFv:
/* 80107C0C 00104B4C  28 03 00 00 */	cmplwi r3, 0
/* 80107C10 00104B50  4D 82 00 20 */	beqlr 
/* 80107C14 00104B54  38 63 00 30 */	addi r3, r3, 0x30
/* 80107C18 00104B58  4E 80 00 20 */	blr 

.global getHandleArea__Q23PSM13CreatureAnimeFUc
getHandleArea__Q23PSM13CreatureAnimeFUc:
/* 80107C1C 00104B5C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80107C20 00104B60  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 80107C24 00104B64  7C 63 02 14 */	add r3, r3, r0
/* 80107C28 00104B68  4E 80 00 20 */	blr 

.global getName__Q24Game13PelletInitArgFv
getName__Q24Game13PelletInitArgFv:
/* 80107C2C 00104B6C  3C 60 80 48 */	lis r3, lbl_8047A61C@ha
/* 80107C30 00104B70  38 63 A6 1C */	addi r3, r3, lbl_8047A61C@l
/* 80107C34 00104B74  4E 80 00 20 */	blr 

.global getName__Q24Game12EnemyKillArgFv
getName__Q24Game12EnemyKillArgFv:
/* 80107C38 00104B78  3C 60 80 48 */	lis r3, lbl_8047A5EC@ha
/* 80107C3C 00104B7C  38 63 A5 EC */	addi r3, r3, lbl_8047A5EC@l
/* 80107C40 00104B80  4E 80 00 20 */	blr 

.global getName__Q23efx8ArgScaleFv
getName__Q23efx8ArgScaleFv:
/* 80107C44 00104B84  3C 60 80 48 */	lis r3, lbl_8047A62C@ha
/* 80107C48 00104B88  38 63 A6 2C */	addi r3, r3, lbl_8047A62C@l
/* 80107C4C 00104B8C  4E 80 00 20 */	blr 

.global getName__Q34Game9ItemHoney7InitArgFv
getName__Q34Game9ItemHoney7InitArgFv:
/* 80107C50 00104B90  3C 60 80 48 */	lis r3, lbl_8047A638@ha
/* 80107C54 00104B94  38 63 A6 38 */	addi r3, r3, lbl_8047A638@l
/* 80107C58 00104B98  4E 80 00 20 */	blr 

.global actPiki__Q24Game11InteractionFPQ24Game4Piki
actPiki__Q24Game11InteractionFPQ24Game4Piki:
/* 80107C5C 00104B9C  38 60 00 01 */	li r3, 1
/* 80107C60 00104BA0  4E 80 00 20 */	blr 

.global actNavi__Q24Game11InteractionFPQ24Game4Navi
actNavi__Q24Game11InteractionFPQ24Game4Navi:
/* 80107C64 00104BA4  38 60 00 01 */	li r3, 1
/* 80107C68 00104BA8  4E 80 00 20 */	blr 

.global actPellet__Q24Game11InteractionFPQ24Game6Pellet
actPellet__Q24Game11InteractionFPQ24Game6Pellet:
/* 80107C6C 00104BAC  38 60 00 01 */	li r3, 1
/* 80107C70 00104BB0  4E 80 00 20 */	blr 

.global actOnyon__Q24Game11InteractionFPQ24Game5Onyon
actOnyon__Q24Game11InteractionFPQ24Game5Onyon:
/* 80107C74 00104BB4  38 60 00 01 */	li r3, 1
/* 80107C78 00104BB8  4E 80 00 20 */	blr 

.global actItem__Q24Game11InteractionFPQ24Game8BaseItem
actItem__Q24Game11InteractionFPQ24Game8BaseItem:
/* 80107C7C 00104BBC  38 60 00 01 */	li r3, 1
/* 80107C80 00104BC0  4E 80 00 20 */	blr 

.global __dt__Q24Game9EnemyBaseFv
__dt__Q24Game9EnemyBaseFv:
/* 80107C84 00104BC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107C88 00104BC8  7C 08 02 A6 */	mflr r0
/* 80107C8C 00104BCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107C90 00104BD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80107C94 00104BD4  7C 9F 23 78 */	mr r31, r4
/* 80107C98 00104BD8  93 C1 00 08 */	stw r30, 8(r1)
/* 80107C9C 00104BDC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80107CA0 00104BE0  41 82 00 50 */	beq .L_80107CF0
/* 80107CA4 00104BE4  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80107CA8 00104BE8  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 80107CAC 00104BEC  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80107CB0 00104BF0  38 7E 02 90 */	addi r3, r30, 0x290
/* 80107CB4 00104BF4  90 9E 00 00 */	stw r4, 0(r30)
/* 80107CB8 00104BF8  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 80107CBC 00104BFC  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80107CC0 00104C00  38 80 FF FF */	li r4, -1
/* 80107CC4 00104C04  90 BE 01 78 */	stw r5, 0x178(r30)
/* 80107CC8 00104C08  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 80107CCC 00104C0C  90 C5 00 00 */	stw r6, 0(r5)
/* 80107CD0 00104C10  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 80107CD4 00104C14  7C 05 00 50 */	subf r0, r5, r0
/* 80107CD8 00104C18  90 05 00 0C */	stw r0, 0xc(r5)
/* 80107CDC 00104C1C  48 30 98 AD */	bl __dt__5CNodeFv
/* 80107CE0 00104C20  7F E0 07 35 */	extsh. r0, r31
/* 80107CE4 00104C24  40 81 00 0C */	ble .L_80107CF0
/* 80107CE8 00104C28  7F C3 F3 78 */	mr r3, r30
/* 80107CEC 00104C2C  4B F1 C3 C9 */	bl __dl__FPv
.L_80107CF0:
/* 80107CF0 00104C30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80107CF4 00104C34  7F C3 F3 78 */	mr r3, r30
/* 80107CF8 00104C38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80107CFC 00104C3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80107D00 00104C40  7C 08 03 A6 */	mtlr r0
/* 80107D04 00104C44  38 21 00 10 */	addi r1, r1, 0x10
/* 80107D08 00104C48  4E 80 00 20 */	blr 

.global doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
doSimpleDraw__Q24Game9EnemyBaseFP8Viewport:
/* 80107D0C 00104C4C  4E 80 00 20 */	blr 

.global getCellRadius__Q24Game9EnemyBaseFv
getCellRadius__Q24Game9EnemyBaseFv:
/* 80107D10 00104C50  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80107D14 00104C54  C0 23 01 CC */	lfs f1, 0x1cc(r3)
/* 80107D18 00104C58  4E 80 00 20 */	blr 

.global getBodyRadius__Q24Game9EnemyBaseFv
getBodyRadius__Q24Game9EnemyBaseFv:
/* 80107D1C 00104C5C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80107D20 00104C60  C0 23 01 F4 */	lfs f1, 0x1f4(r3)
/* 80107D24 00104C64  4E 80 00 20 */	blr 

.global getFaceDir__Q24Game9EnemyBaseFv
getFaceDir__Q24Game9EnemyBaseFv:
/* 80107D28 00104C68  C0 23 01 FC */	lfs f1, 0x1fc(r3)
/* 80107D2C 00104C6C  4E 80 00 20 */	blr 

.global "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
"setVelocity__Q24Game9EnemyBaseFR10Vector3<f>":
/* 80107D30 00104C70  C0 04 00 00 */	lfs f0, 0(r4)
/* 80107D34 00104C74  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 80107D38 00104C78  C0 04 00 04 */	lfs f0, 4(r4)
/* 80107D3C 00104C7C  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 80107D40 00104C80  C0 04 00 08 */	lfs f0, 8(r4)
/* 80107D44 00104C84  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 80107D48 00104C88  4E 80 00 20 */	blr 

.global getVelocity__Q24Game9EnemyBaseFv
getVelocity__Q24Game9EnemyBaseFv:
/* 80107D4C 00104C8C  C0 04 01 C8 */	lfs f0, 0x1c8(r4)
/* 80107D50 00104C90  D0 03 00 00 */	stfs f0, 0(r3)
/* 80107D54 00104C94  C0 04 01 CC */	lfs f0, 0x1cc(r4)
/* 80107D58 00104C98  D0 03 00 04 */	stfs f0, 4(r3)
/* 80107D5C 00104C9C  C0 04 01 D0 */	lfs f0, 0x1d0(r4)
/* 80107D60 00104CA0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80107D64 00104CA4  4E 80 00 20 */	blr 

.global "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
"getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>":
/* 80107D68 00104CA8  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 80107D6C 00104CAC  D0 04 00 00 */	stfs f0, 0(r4)
/* 80107D70 00104CB0  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 80107D74 00104CB4  D0 04 00 04 */	stfs f0, 4(r4)
/* 80107D78 00104CB8  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 80107D7C 00104CBC  D0 04 00 08 */	stfs f0, 8(r4)
/* 80107D80 00104CC0  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 80107D84 00104CC4  D0 05 00 00 */	stfs f0, 0(r5)
/* 80107D88 00104CC8  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 80107D8C 00104CCC  D0 05 00 04 */	stfs f0, 4(r5)
/* 80107D90 00104CD0  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 80107D94 00104CD4  D0 05 00 08 */	stfs f0, 8(r5)
/* 80107D98 00104CD8  4E 80 00 20 */	blr 

.global isTeki__Q24Game9EnemyBaseFv
isTeki__Q24Game9EnemyBaseFv:
/* 80107D9C 00104CDC  38 60 00 01 */	li r3, 1
/* 80107DA0 00104CE0  4E 80 00 20 */	blr 

.global getSound_PosPtr__Q24Game9EnemyBaseFv
getSound_PosPtr__Q24Game9EnemyBaseFv:
/* 80107DA4 00104CE4  38 63 01 8C */	addi r3, r3, 0x18c
/* 80107DA8 00104CE8  4E 80 00 20 */	blr 

.global initMouthSlots__Q24Game9EnemyBaseFv
initMouthSlots__Q24Game9EnemyBaseFv:
/* 80107DAC 00104CEC  4E 80 00 20 */	blr 

.global initWalkSmokeEffect__Q24Game9EnemyBaseFv
initWalkSmokeEffect__Q24Game9EnemyBaseFv:
/* 80107DB0 00104CF0  4E 80 00 20 */	blr 

.global inWater__Q24Game9EnemyBaseFv
inWater__Q24Game9EnemyBaseFv:
/* 80107DB4 00104CF4  80 63 02 80 */	lwz r3, 0x280(r3)
/* 80107DB8 00104CF8  7C 03 00 D0 */	neg r0, r3
/* 80107DBC 00104CFC  7C 00 1B 78 */	or r0, r0, r3
/* 80107DC0 00104D00  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80107DC4 00104D04  4E 80 00 20 */	blr 

.global "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
"getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>":
/* 80107DC8 00104D08  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80107DCC 00104D0C  D0 04 00 00 */	stfs f0, 0(r4)
/* 80107DD0 00104D10  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80107DD4 00104D14  D0 04 00 04 */	stfs f0, 4(r4)
/* 80107DD8 00104D18  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80107DDC 00104D1C  D0 04 00 08 */	stfs f0, 8(r4)
/* 80107DE0 00104D20  4E 80 00 20 */	blr 

.global getMouthSlots__Q24Game9EnemyBaseFv
getMouthSlots__Q24Game9EnemyBaseFv:
/* 80107DE4 00104D24  38 60 00 00 */	li r3, 0
/* 80107DE8 00104D28  4E 80 00 20 */	blr 

.global setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere:
/* 80107DEC 00104D2C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80107DF0 00104D30  D0 03 02 70 */	stfs f0, 0x270(r3)
/* 80107DF4 00104D34  C0 04 00 04 */	lfs f0, 4(r4)
/* 80107DF8 00104D38  D0 03 02 74 */	stfs f0, 0x274(r3)
/* 80107DFC 00104D3C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80107E00 00104D40  D0 03 02 78 */	stfs f0, 0x278(r3)
/* 80107E04 00104D44  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80107E08 00104D48  D0 03 02 7C */	stfs f0, 0x27c(r3)
/* 80107E0C 00104D4C  4E 80 00 20 */	blr 

.global getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere:
/* 80107E10 00104D50  C0 03 02 70 */	lfs f0, 0x270(r3)
/* 80107E14 00104D54  D0 04 00 00 */	stfs f0, 0(r4)
/* 80107E18 00104D58  C0 03 02 74 */	lfs f0, 0x274(r3)
/* 80107E1C 00104D5C  D0 04 00 04 */	stfs f0, 4(r4)
/* 80107E20 00104D60  C0 03 02 78 */	lfs f0, 0x278(r3)
/* 80107E24 00104D64  D0 04 00 08 */	stfs f0, 8(r4)
/* 80107E28 00104D68  C0 03 02 7C */	lfs f0, 0x27c(r3)
/* 80107E2C 00104D6C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80107E30 00104D70  4E 80 00 20 */	blr 

.global getDamageCoeStoneState__Q24Game9EnemyBaseFv
getDamageCoeStoneState__Q24Game9EnemyBaseFv:
/* 80107E34 00104D74  C0 22 94 E8 */	lfs f1, lbl_80517848@sda21(r2)
/* 80107E38 00104D78  4E 80 00 20 */	blr 

.global getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
getSound_CurrAnimFrame__Q24Game9EnemyBaseFv:
/* 80107E3C 00104D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80107E40 00104D80  7C 08 02 A6 */	mflr r0
/* 80107E44 00104D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80107E48 00104D88  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107E4C 00104D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80107E50 00104D90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80107E54 00104D94  7D 89 03 A6 */	mtctr r12
/* 80107E58 00104D98  4E 80 04 21 */	bctrl 
/* 80107E5C 00104D9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80107E60 00104DA0  C0 23 00 08 */	lfs f1, 8(r3)
/* 80107E64 00104DA4  7C 08 03 A6 */	mtlr r0
/* 80107E68 00104DA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80107E6C 00104DAC  4E 80 00 20 */	blr 

.global getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv:
/* 80107E70 00104DB0  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80107E74 00104DB4  C0 23 00 04 */	lfs f1, 4(r3)
/* 80107E78 00104DB8  4E 80 00 20 */	blr 

.global sound_culling__Q24Game9EnemyBaseFv
sound_culling__Q24Game9EnemyBaseFv:
/* 80107E7C 00104DBC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80107E80 00104DC0  38 80 00 00 */	li r4, 0
/* 80107E84 00104DC4  54 00 04 A5 */	rlwinm. r0, r0, 0, 0x12, 0x12
/* 80107E88 00104DC8  41 82 00 1C */	beq .L_80107EA4
/* 80107E8C 00104DCC  88 63 00 D8 */	lbz r3, 0xd8(r3)
/* 80107E90 00104DD0  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80107E94 00104DD4  40 82 00 10 */	bne .L_80107EA4
/* 80107E98 00104DD8  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80107E9C 00104DDC  40 82 00 08 */	bne .L_80107EA4
/* 80107EA0 00104DE0  38 80 00 01 */	li r4, 1
.L_80107EA4:
/* 80107EA4 00104DE4  7C 83 23 78 */	mr r3, r4
/* 80107EA8 00104DE8  4E 80 00 20 */	blr 

.global getCarcassArgHeight__Q24Game9EnemyBaseFv
getCarcassArgHeight__Q24Game9EnemyBaseFv:
/* 80107EAC 00104DEC  C0 23 02 2C */	lfs f1, 0x22c(r3)
/* 80107EB0 00104DF0  4E 80 00 20 */	blr 

.global viewGetBaseScale__Q24Game10PelletViewFv
viewGetBaseScale__Q24Game10PelletViewFv:
/* 80107EB4 00104DF4  C0 22 94 64 */	lfs f1, lbl_805177C4@sda21(r2)
/* 80107EB8 00104DF8  4E 80 00 20 */	blr 

.global viewGetCollTreeJointIndex__Q24Game10PelletViewFv
viewGetCollTreeJointIndex__Q24Game10PelletViewFv:
/* 80107EBC 00104DFC  38 60 00 00 */	li r3, 0
/* 80107EC0 00104E00  4E 80 00 20 */	blr 

.global viewGetCollTreeOffset__Q24Game10PelletViewFv
viewGetCollTreeOffset__Q24Game10PelletViewFv:
/* 80107EC4 00104E04  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 80107EC8 00104E08  C4 04 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r4)
/* 80107ECC 00104E0C  D0 03 00 00 */	stfs f0, 0(r3)
/* 80107ED0 00104E10  C0 04 00 04 */	lfs f0, 4(r4)
/* 80107ED4 00104E14  D0 03 00 04 */	stfs f0, 4(r3)
/* 80107ED8 00104E18  C0 04 00 08 */	lfs f0, 8(r4)
/* 80107EDC 00104E1C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80107EE0 00104E20  4E 80 00 20 */	blr 

.global "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
"viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>":
/* 80107EE4 00104E24  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game8CreatureFR8Graphics
doDirectDraw__Q24Game8CreatureFR8Graphics:
/* 80107EE8 00104E28  4E 80 00 20 */	blr 

.global "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
"onInitPosition__Q24Game8CreatureFR10Vector3<f>":
/* 80107EEC 00104E2C  4E 80 00 20 */	blr 

.global getFlockMgr__Q24Game8CreatureFv
getFlockMgr__Q24Game8CreatureFv:
/* 80107EF0 00104E30  38 60 00 00 */	li r3, 0
/* 80107EF4 00104E34  4E 80 00 20 */	blr 

.global onStartCapture__Q24Game8CreatureFv
onStartCapture__Q24Game8CreatureFv:
/* 80107EF8 00104E38  4E 80 00 20 */	blr 

.global onUpdateCapture__Q24Game8CreatureFR7Matrixf
onUpdateCapture__Q24Game8CreatureFR7Matrixf:
/* 80107EFC 00104E3C  4E 80 00 20 */	blr 

.global onEndCapture__Q24Game8CreatureFv
onEndCapture__Q24Game8CreatureFv:
/* 80107F00 00104E40  4E 80 00 20 */	blr 

.global isAtari__Q24Game8CreatureFv
isAtari__Q24Game8CreatureFv:
/* 80107F04 00104E44  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F08 00104E48  54 03 07 FE */	clrlwi r3, r0, 0x1f
/* 80107F0C 00104E4C  4E 80 00 20 */	blr 

.global setAtari__Q24Game8CreatureFb
setAtari__Q24Game8CreatureFb:
/* 80107F10 00104E50  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80107F14 00104E54  41 82 00 14 */	beq .L_80107F28
/* 80107F18 00104E58  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F1C 00104E5C  60 00 00 01 */	ori r0, r0, 1
/* 80107F20 00104E60  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107F24 00104E64  4E 80 00 20 */	blr 
.L_80107F28:
/* 80107F28 00104E68  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F2C 00104E6C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80107F30 00104E70  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107F34 00104E74  4E 80 00 20 */	blr 

.global isCollisionFlick__Q24Game8CreatureFv
isCollisionFlick__Q24Game8CreatureFv:
/* 80107F38 00104E78  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F3C 00104E7C  54 03 F7 FE */	rlwinm r3, r0, 0x1e, 0x1f, 0x1f
/* 80107F40 00104E80  4E 80 00 20 */	blr 

.global setCollisionFlick__Q24Game8CreatureFb
setCollisionFlick__Q24Game8CreatureFb:
/* 80107F44 00104E84  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80107F48 00104E88  41 82 00 14 */	beq .L_80107F5C
/* 80107F4C 00104E8C  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F50 00104E90  60 00 00 04 */	ori r0, r0, 4
/* 80107F54 00104E94  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107F58 00104E98  4E 80 00 20 */	blr 
.L_80107F5C:
/* 80107F5C 00104E9C  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F60 00104EA0  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80107F64 00104EA4  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107F68 00104EA8  4E 80 00 20 */	blr 

.global isMovieExtra__Q24Game8CreatureFv
isMovieExtra__Q24Game8CreatureFv:
/* 80107F6C 00104EAC  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F70 00104EB0  54 03 D7 FE */	rlwinm r3, r0, 0x1a, 0x1f, 0x1f
/* 80107F74 00104EB4  4E 80 00 20 */	blr 

.global isMovieMotion__Q24Game8CreatureFv
isMovieMotion__Q24Game8CreatureFv:
/* 80107F78 00104EB8  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F7C 00104EBC  54 03 DF FE */	rlwinm r3, r0, 0x1b, 0x1f, 0x1f
/* 80107F80 00104EC0  4E 80 00 20 */	blr 

.global setMovieMotion__Q24Game8CreatureFb
setMovieMotion__Q24Game8CreatureFb:
/* 80107F84 00104EC4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80107F88 00104EC8  41 82 00 14 */	beq .L_80107F9C
/* 80107F8C 00104ECC  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107F90 00104ED0  60 00 00 20 */	ori r0, r0, 0x20
/* 80107F94 00104ED4  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107F98 00104ED8  4E 80 00 20 */	blr 
.L_80107F9C:
/* 80107F9C 00104EDC  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107FA0 00104EE0  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80107FA4 00104EE4  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107FA8 00104EE8  4E 80 00 20 */	blr 

.global isBuried__Q24Game8CreatureFv
isBuried__Q24Game8CreatureFv:
/* 80107FAC 00104EEC  38 60 00 00 */	li r3, 0
/* 80107FB0 00104EF0  4E 80 00 20 */	blr 

.global isUnderground__Q24Game8CreatureFv
isUnderground__Q24Game8CreatureFv:
/* 80107FB4 00104EF4  38 60 00 00 */	li r3, 0
/* 80107FB8 00104EF8  4E 80 00 20 */	blr 

.global isLivingThing__Q24Game8CreatureFv
isLivingThing__Q24Game8CreatureFv:
/* 80107FBC 00104EFC  38 60 00 01 */	li r3, 1
/* 80107FC0 00104F00  4E 80 00 20 */	blr 

.global isDebugCollision__Q24Game8CreatureFv
isDebugCollision__Q24Game8CreatureFv:
/* 80107FC4 00104F04  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107FC8 00104F08  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80107FCC 00104F0C  4E 80 00 20 */	blr 

.global setDebugCollision__Q24Game8CreatureFb
setDebugCollision__Q24Game8CreatureFb:
/* 80107FD0 00104F10  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80107FD4 00104F14  41 82 00 14 */	beq .L_80107FE8
/* 80107FD8 00104F18  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107FDC 00104F1C  64 00 80 00 */	oris r0, r0, 0x8000
/* 80107FE0 00104F20  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107FE4 00104F24  4E 80 00 20 */	blr 
.L_80107FE8:
/* 80107FE8 00104F28  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80107FEC 00104F2C  54 00 00 7E */	clrlwi r0, r0, 1
/* 80107FF0 00104F30  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80107FF4 00104F34  4E 80 00 20 */	blr 

.global doSave__Q24Game8CreatureFR6Stream
doSave__Q24Game8CreatureFR6Stream:
/* 80107FF8 00104F38  4E 80 00 20 */	blr 

.global doLoad__Q24Game8CreatureFR6Stream
doLoad__Q24Game8CreatureFR6Stream:
/* 80107FFC 00104F3C  4E 80 00 20 */	blr 

.global platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
platCallback__Q24Game8CreatureFRQ24Game9PlatEvent:
/* 80108000 00104F40  4E 80 00 20 */	blr 

.global getSound_AILOD__Q24Game8CreatureFv
getSound_AILOD__Q24Game8CreatureFv:
/* 80108004 00104F44  38 63 00 D8 */	addi r3, r3, 0xd8
/* 80108008 00104F48  4E 80 00 20 */	blr 

.global on_movie_begin__Q24Game8CreatureFb
on_movie_begin__Q24Game8CreatureFb:
/* 8010800C 00104F4C  4E 80 00 20 */	blr 

.global on_movie_end__Q24Game8CreatureFb
on_movie_end__Q24Game8CreatureFb:
/* 80108010 00104F50  4E 80 00 20 */	blr 

.global movieStartAnimation__Q24Game8CreatureFUl
movieStartAnimation__Q24Game8CreatureFUl:
/* 80108014 00104F54  4E 80 00 20 */	blr 

.global movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo:
/* 80108018 00104F58  4E 80 00 20 */	blr 

.global movieSetAnimationLastFrame__Q24Game8CreatureFv
movieSetAnimationLastFrame__Q24Game8CreatureFv:
/* 8010801C 00104F5C  4E 80 00 20 */	blr 

.global "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
"movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f":
/* 80108020 00104F60  4E 80 00 20 */	blr 

.global movieSetFaceDir__Q24Game8CreatureFf
movieSetFaceDir__Q24Game8CreatureFf:
/* 80108024 00104F64  4E 80 00 20 */	blr 

.global "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
"movieGotoPosition__Q24Game8CreatureFR10Vector3<f>":
/* 80108028 00104F68  38 60 00 01 */	li r3, 1
/* 8010802C 00104F6C  4E 80 00 20 */	blr 

.global movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer:
/* 80108030 00104F70  4E 80 00 20 */	blr 

.global getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder:
/* 80108034 00104F74  4E 80 00 20 */	blr 

.global startPick__Q24Game8CreatureFv
startPick__Q24Game8CreatureFv:
/* 80108038 00104F78  4E 80 00 20 */	blr 

.global endPick__Q24Game8CreatureFb
endPick__Q24Game8CreatureFb:
/* 8010803C 00104F7C  4E 80 00 20 */	blr 

.global getMabiki__Q24Game8CreatureFv
getMabiki__Q24Game8CreatureFv:
/* 80108040 00104F80  38 60 00 00 */	li r3, 0
/* 80108044 00104F84  4E 80 00 20 */	blr 

.global getFootmarks__Q24Game8CreatureFv
getFootmarks__Q24Game8CreatureFv:
/* 80108048 00104F88  38 60 00 00 */	li r3, 0
/* 8010804C 00104F8C  4E 80 00 20 */	blr 

.global onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature:
/* 80108050 00104F90  4E 80 00 20 */	blr 

.global onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature:
/* 80108054 00104F94  4E 80 00 20 */	blr 

.global isSlotFree__Q24Game8CreatureFs
isSlotFree__Q24Game8CreatureFs:
/* 80108058 00104F98  38 60 00 00 */	li r3, 0
/* 8010805C 00104F9C  4E 80 00 20 */	blr 

.global getFreeStickSlot__Q24Game8CreatureFv
getFreeStickSlot__Q24Game8CreatureFv:
/* 80108060 00104FA0  38 60 FF FF */	li r3, -1
/* 80108064 00104FA4  4E 80 00 20 */	blr 

.global "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
"getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>":
/* 80108068 00104FA8  38 60 FF FF */	li r3, -1
/* 8010806C 00104FAC  4E 80 00 20 */	blr 

.global getRandomFreeStickSlot__Q24Game8CreatureFv
getRandomFreeStickSlot__Q24Game8CreatureFv:
/* 80108070 00104FB0  38 60 FF FF */	li r3, -1
/* 80108074 00104FB4  4E 80 00 20 */	blr 

.global onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures:
/* 80108078 00104FB8  4E 80 00 20 */	blr 

.global onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures:
/* 8010807C 00104FBC  4E 80 00 20 */	blr 

.global "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
"calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>":
/* 80108080 00104FC0  4E 80 00 20 */	blr 

.global "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
"getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>":
/* 80108084 00104FC4  C0 22 94 50 */	lfs f1, lbl_805177B0@sda21(r2)
/* 80108088 00104FC8  4E 80 00 20 */	blr 

.global ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
ignoreAtari__Q24Game8CreatureFPQ24Game8Creature:
/* 8010808C 00104FCC  38 60 00 00 */	li r3, 0
/* 80108090 00104FD0  4E 80 00 20 */	blr 

.global getSuckPos__Q24Game8CreatureFv
getSuckPos__Q24Game8CreatureFv:
/* 80108094 00104FD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80108098 00104FD8  7C 08 02 A6 */	mflr r0
/* 8010809C 00104FDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801080A0 00104FE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801080A4 00104FE4  7C 7F 1B 78 */	mr r31, r3
/* 801080A8 00104FE8  81 84 00 00 */	lwz r12, 0(r4)
/* 801080AC 00104FEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801080B0 00104FF0  7D 89 03 A6 */	mtctr r12
/* 801080B4 00104FF4  4E 80 04 21 */	bctrl 
/* 801080B8 00104FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801080BC 00104FFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801080C0 00105000  7C 08 03 A6 */	mtlr r0
/* 801080C4 00105004  38 21 00 10 */	addi r1, r1, 0x10
/* 801080C8 00105008  4E 80 00 20 */	blr 

.global getGoalPos__Q24Game8CreatureFv
getGoalPos__Q24Game8CreatureFv:
/* 801080CC 0010500C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801080D0 00105010  7C 08 02 A6 */	mflr r0
/* 801080D4 00105014  90 01 00 14 */	stw r0, 0x14(r1)
/* 801080D8 00105018  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801080DC 0010501C  7C 7F 1B 78 */	mr r31, r3
/* 801080E0 00105020  81 84 00 00 */	lwz r12, 0(r4)
/* 801080E4 00105024  81 8C 00 08 */	lwz r12, 8(r12)
/* 801080E8 00105028  7D 89 03 A6 */	mtctr r12
/* 801080EC 0010502C  4E 80 04 21 */	bctrl 
/* 801080F0 00105030  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801080F4 00105034  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801080F8 00105038  7C 08 03 A6 */	mtlr r0
/* 801080FC 0010503C  38 21 00 10 */	addi r1, r1, 0x10
/* 80108100 00105040  4E 80 00 20 */	blr 

.global isSuckReady__Q24Game8CreatureFv
isSuckReady__Q24Game8CreatureFv:
/* 80108104 00105044  38 60 00 01 */	li r3, 1
/* 80108108 00105048  4E 80 00 20 */	blr 

.global isSuckArriveWait__Q24Game8CreatureFv
isSuckArriveWait__Q24Game8CreatureFv:
/* 8010810C 0010504C  38 60 00 00 */	li r3, 0
/* 80108110 00105050  4E 80 00 20 */	blr 

.global getObjType__Q24Game8CreatureFv
getObjType__Q24Game8CreatureFv:
/* 80108114 00105054  A0 63 01 28 */	lhz r3, 0x128(r3)
/* 80108118 00105058  4E 80 00 20 */	blr 

.global collisionUpdatable__Q24Game8CreatureFv
collisionUpdatable__Q24Game8CreatureFv:
/* 8010811C 0010505C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80108120 00105060  7C 08 02 A6 */	mflr r0
/* 80108124 00105064  38 63 01 2C */	addi r3, r3, 0x12c
/* 80108128 00105068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010812C 0010506C  48 08 E5 5D */	bl updatable__Q24Game13UpdateContextFv
/* 80108130 00105070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80108134 00105074  7C 08 03 A6 */	mtlr r0
/* 80108138 00105078  38 21 00 10 */	addi r1, r1, 0x10
/* 8010813C 0010507C  4E 80 00 20 */	blr 

.global deferPikiCollision__Q24Game10CellObjectFv
deferPikiCollision__Q24Game10CellObjectFv:
/* 80108140 00105080  38 60 00 00 */	li r3, 0
/* 80108144 00105084  4E 80 00 20 */	blr 

.global __dt__Q24Game17EnemyAnimKeyEventFv
__dt__Q24Game17EnemyAnimKeyEventFv:
/* 80108148 00105088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010814C 0010508C  7C 08 02 A6 */	mflr r0
/* 80108150 00105090  90 01 00 14 */	stw r0, 0x14(r1)
/* 80108154 00105094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80108158 00105098  7C 9F 23 78 */	mr r31, r4
/* 8010815C 0010509C  93 C1 00 08 */	stw r30, 8(r1)
/* 80108160 001050A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80108164 001050A4  41 82 00 38 */	beq .L_8010819C
/* 80108168 001050A8  3C 80 80 4B */	lis r4, __vt__Q24Game17EnemyAnimKeyEvent@ha
/* 8010816C 001050AC  38 04 A6 4C */	addi r0, r4, __vt__Q24Game17EnemyAnimKeyEvent@l
/* 80108170 001050B0  90 1E 00 00 */	stw r0, 0(r30)
/* 80108174 001050B4  41 82 00 18 */	beq .L_8010818C
/* 80108178 001050B8  3C A0 80 4B */	lis r5, __vt__Q28SysShape8KeyEvent@ha
/* 8010817C 001050BC  38 80 00 00 */	li r4, 0
/* 80108180 001050C0  38 05 A6 5C */	addi r0, r5, __vt__Q28SysShape8KeyEvent@l
/* 80108184 001050C4  90 1E 00 00 */	stw r0, 0(r30)
/* 80108188 001050C8  48 30 94 01 */	bl __dt__5CNodeFv
.L_8010818C:
/* 8010818C 001050CC  7F E0 07 35 */	extsh. r0, r31
/* 80108190 001050D0  40 81 00 0C */	ble .L_8010819C
/* 80108194 001050D4  7F C3 F3 78 */	mr r3, r30
/* 80108198 001050D8  4B F1 BF 1D */	bl __dl__FPv
.L_8010819C:
/* 8010819C 001050DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801081A0 001050E0  7F C3 F3 78 */	mr r3, r30
/* 801081A4 001050E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801081A8 001050E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801081AC 001050EC  7C 08 03 A6 */	mtlr r0
/* 801081B0 001050F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801081B4 001050F4  4E 80 00 20 */	blr 

.global view_start_carrymotion__Q24Game10PelletViewFv
view_start_carrymotion__Q24Game10PelletViewFv:
/* 801081B8 001050F8  4E 80 00 20 */	blr 

.global view_finish_carrymotion__Q24Game10PelletViewFv
view_finish_carrymotion__Q24Game10PelletViewFv:
/* 801081BC 001050FC  4E 80 00 20 */	blr 

.global viewStartPreCarryMotion__Q24Game10PelletViewFv
viewStartPreCarryMotion__Q24Game10PelletViewFv:
/* 801081C0 00105100  4E 80 00 20 */	blr 

.global viewStartCarryMotion__Q24Game10PelletViewFv
viewStartCarryMotion__Q24Game10PelletViewFv:
/* 801081C4 00105104  4E 80 00 20 */	blr 

.global viewOnPelletKilled__Q24Game10PelletViewFv
viewOnPelletKilled__Q24Game10PelletViewFv:
/* 801081C8 00105108  4E 80 00 20 */	blr 

.global getCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
getCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase:
/* 801081CC 0010510C  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 801081D0 00105110  4E 80 00 20 */	blr 

.global setCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
setCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState:
/* 801081D4 00105114  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 801081D8 00105118  4E 80 00 20 */	blr 

.global exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase:
/* 801081DC 0010511C  4E 80 00 20 */	blr 

.global resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase:
/* 801081E0 00105120  4E 80 00 20 */	blr 

.global restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase:
/* 801081E4 00105124  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics:
/* 801081E8 00105128  4E 80 00 20 */	blr 

.global init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 801081EC 0010512C  4E 80 00 20 */	blr 

.global cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase:
/* 801081F0 00105130  4E 80 00 20 */	blr 

.global getName__Q23efx12ArgEnemyTypeFv
getName__Q23efx12ArgEnemyTypeFv:
/* 801081F4 00105134  3C 60 80 48 */	lis r3, lbl_8047A64C@ha
/* 801081F8 00105138  38 63 A6 4C */	addi r3, r3, lbl_8047A64C@l
/* 801081FC 0010513C  4E 80 00 20 */	blr 

.global getName__Q23efx3ArgFv
getName__Q23efx3ArgFv:
/* 80108200 00105140  38 62 94 EC */	addi r3, r2, lbl_8051784C@sda21
/* 80108204 00105144  4E 80 00 20 */	blr 

.global simulation__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasef
simulation__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasef:
/* 80108208 00105148  4E 80 00 20 */	blr 

.global entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
entry__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase:
/* 8010820C 0010514C  4E 80 00 20 */	blr 

.global simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef
simulation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBasef:
/* 80108210 00105150  4E 80 00 20 */	blr 

.global animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase
animation__Q34Game12EnemyBaseFSM18BirthTypeDropStateFPQ24Game9EnemyBase:
/* 80108214 00105154  4E 80 00 20 */	blr 

fn local __sinit_enemyBase_cpp
/* 80108218 00105158  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8010821C 0010515C  38 00 FF FF */	li r0, -1
/* 80108220 00105160  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80108224 00105164  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80108228 00105168  90 0D 91 A0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8010822C 0010516C  D4 03 A1 50 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80108230 00105170  D0 0D 91 A4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80108234 00105174  D0 03 00 04 */	stfs f0, 4(r3)
/* 80108238 00105178  D0 03 00 08 */	stfs f0, 8(r3)
/* 8010823C 0010517C  4E 80 00 20 */	blr 
end __sinit_enemyBase_cpp

.global "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent":
/* 80108240 00105180  38 63 FE 88 */	addi r3, r3, -376
/* 80108244 00105184  4B FF D0 9C */	b onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent

.global "@700@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@700@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 80108248 00105188  39 60 00 0C */	li r11, 0xc
/* 8010824C 0010518C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80108250 00105190  7C 63 5A 14 */	add r3, r3, r11
/* 80108254 00105194  38 63 FD 44 */	addi r3, r3, -700
/* 80108258 00105198  4B FF E6 C4 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@700@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@700@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 8010825C 0010519C  39 60 00 0C */	li r11, 0xc
/* 80108260 001051A0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80108264 001051A4  7C 63 5A 14 */	add r3, r3, r11
/* 80108268 001051A8  38 63 FD 44 */	addi r3, r3, -700
/* 8010826C 001051AC  4B FF E4 3C */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@700@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@700@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 80108270 001051B0  39 60 00 0C */	li r11, 0xc
/* 80108274 001051B4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80108278 001051B8  7C 63 5A 14 */	add r3, r3, r11
/* 8010827C 001051BC  38 63 FD 44 */	addi r3, r3, -700
/* 80108280 001051C0  4B FF E4 48 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@700@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@700@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 80108284 001051C4  39 60 00 0C */	li r11, 0xc
/* 80108288 001051C8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8010828C 001051CC  7C 63 5A 14 */	add r3, r3, r11
/* 80108290 001051D0  38 63 FD 44 */	addi r3, r3, -700
/* 80108294 001051D4  4B FF E7 E4 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@700@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@700@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 80108298 001051D8  39 60 00 0C */	li r11, 0xc
/* 8010829C 001051DC  7D 63 58 2E */	lwzx r11, r3, r11
/* 801082A0 001051E0  7C 63 5A 14 */	add r3, r3, r11
/* 801082A4 001051E4  38 63 FD 44 */	addi r3, r3, -700
/* 801082A8 001051E8  4B FF E7 A4 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@700@12@viewGetShape__Q24Game9EnemyBaseFv"
"@700@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 801082AC 001051EC  39 60 00 0C */	li r11, 0xc
/* 801082B0 001051F0  7D 63 58 2E */	lwzx r11, r3, r11
/* 801082B4 001051F4  7C 63 5A 14 */	add r3, r3, r11
/* 801082B8 001051F8  38 63 FD 44 */	addi r3, r3, -700
/* 801082BC 001051FC  4B FF E3 E4 */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@16@__dt__Q23PSM10EnemyHekoiFv"
"@16@__dt__Q23PSM10EnemyHekoiFv":
/* 801082C0 00105200  38 63 FF F0 */	addi r3, r3, -16
/* 801082C4 00105204  4B FF F7 DC */	b __dt__Q23PSM10EnemyHekoiFv

.global "@48@startSound__Q23PSM13CreatureAnimeFUcUlUl"
"@48@startSound__Q23PSM13CreatureAnimeFUcUlUl":
/* 801082C8 00105208  38 63 FF D0 */	addi r3, r3, -48
/* 801082CC 0010520C  48 35 59 BC */	b startSound__Q23PSM13CreatureAnimeFUcUlUl

.global "@48@startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl"
"@48@startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl":
/* 801082D0 00105210  38 63 FF D0 */	addi r3, r3, -48
/* 801082D4 00105214  48 35 5A 64 */	b startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl

.global "@48@startSound__Q23PSM13CreatureAnimeFUlUl"
"@48@startSound__Q23PSM13CreatureAnimeFUlUl":
/* 801082D8 00105218  38 63 FF D0 */	addi r3, r3, -48
/* 801082DC 0010521C  48 35 59 70 */	b startSound__Q23PSM13CreatureAnimeFUlUl

.global "@48@__dt__Q23PSM10EnemyHekoiFv"
"@48@__dt__Q23PSM10EnemyHekoiFv":
/* 801082E0 00105220  38 63 FF D0 */	addi r3, r3, -48
/* 801082E4 00105224  4B FF F7 BC */	b __dt__Q23PSM10EnemyHekoiFv

.global "@48@startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc"
"@48@startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc":
/* 801082E8 00105228  38 63 FF D0 */	addi r3, r3, -48
/* 801082EC 0010522C  48 35 63 B4 */	b startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc

.global "@48@playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc"
"@48@playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc":
/* 801082F0 00105230  38 63 FF D0 */	addi r3, r3, -48
/* 801082F4 00105234  48 35 5B 2C */	b playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc

.global "@184@battleOff__Q23PSM9EnemyBaseFv"
"@184@battleOff__Q23PSM9EnemyBaseFv":
/* 801082F8 00105238  38 63 FF 48 */	addi r3, r3, -184
/* 801082FC 0010523C  48 35 66 F4 */	b battleOff__Q23PSM9EnemyBaseFv
