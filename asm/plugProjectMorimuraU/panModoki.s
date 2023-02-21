.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_panModoki_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80490EF8, local
	.asciz "panModoki.cpp"
.endobj lbl_80490EF8
.balign 4
.obj lbl_80490F08, local
	.asciz "P2Assert"
.endobj lbl_80490F08

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game11OoPanModoki3Obj, global
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
	.4byte onInit__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q34Game13PanModokiBase3ObjFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game13PanModokiBase3ObjFf
	.4byte doDirectDraw__Q34Game13PanModokiBase3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game13PanModokiBase3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game13PanModokiBase3ObjFv
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
	.4byte isUnderground__Q34Game13PanModokiBase3ObjFv
	.4byte isLivingThing__Q34Game13PanModokiBase3ObjFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q34Game13PanModokiBase3ObjFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game13PanModokiBase3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game13PanModokiBase3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game13PanModokiBase3ObjFv
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
	.4byte "applyImpulse__Q34Game13PanModokiBase3ObjFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q34Game13PanModokiBase3ObjFPQ24Game8Creature
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
	.4byte __dt__Q34Game11OoPanModoki3ObjFv
	.4byte "birth__Q34Game13PanModokiBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game13PanModokiBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game13PanModokiBase3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q34Game13PanModokiBase3ObjFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game13PanModokiBase3ObjFR8Graphics
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
	.4byte setParameters__Q34Game13PanModokiBase3ObjFv
	.4byte initMouthSlots__Q34Game13PanModokiBase3ObjFv
	.4byte initWalkSmokeEffect__Q34Game13PanModokiBase3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game13PanModokiBase3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game11OoPanModoki3ObjFv
	.4byte getMouthSlots__Q34Game13PanModokiBase3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game11OoPanModoki3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game13PanModokiBase3ObjFv
	.4byte doFinishStoneState__Q34Game13PanModokiBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game13PanModokiBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game11OoPanModoki3ObjFv
	.4byte doStartMovie__Q34Game13PanModokiBase3ObjFv
	.4byte doEndMovie__Q34Game13PanModokiBase3ObjFv
	.4byte appearRumble__Q34Game11OoPanModoki3ObjFv
	.4byte hideRumble__Q34Game11OoPanModoki3ObjFv
	.4byte damageRumble__Q34Game13PanModokiBase3ObjFv
	.4byte walkFunc__Q34Game13PanModokiBase3ObjFv
	.4byte canTarget__Q34Game11OoPanModoki3ObjFii
	.4byte setFSM__Q34Game13PanModokiBase3ObjFPQ34Game13PanModokiBase3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@968@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@968@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game11OoPanModoki3Obj
.obj __vt__Q24Game13PelletKillArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game15CreatureKillArgFv
.endobj __vt__Q24Game13PelletKillArg
.obj __vt__Q34Game13PanModokiBase3Obj, global
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
	.4byte onInit__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q34Game13PanModokiBase3ObjFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game13PanModokiBase3ObjFf
	.4byte doDirectDraw__Q34Game13PanModokiBase3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game13PanModokiBase3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game13PanModokiBase3ObjFv
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
	.4byte isUnderground__Q34Game13PanModokiBase3ObjFv
	.4byte isLivingThing__Q34Game13PanModokiBase3ObjFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q34Game13PanModokiBase3ObjFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game13PanModokiBase3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game13PanModokiBase3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game13PanModokiBase3ObjFv
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
	.4byte "applyImpulse__Q34Game13PanModokiBase3ObjFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q34Game13PanModokiBase3ObjFPQ24Game8Creature
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
	.4byte __dt__Q34Game13PanModokiBase3ObjFv
	.4byte "birth__Q34Game13PanModokiBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game13PanModokiBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game13PanModokiBase3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q34Game13PanModokiBase3ObjFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game13PanModokiBase3ObjFR8Graphics
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
	.4byte setParameters__Q34Game13PanModokiBase3ObjFv
	.4byte initMouthSlots__Q34Game13PanModokiBase3ObjFv
	.4byte initWalkSmokeEffect__Q34Game13PanModokiBase3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game13PanModokiBase3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte 0
	.4byte getMouthSlots__Q34Game13PanModokiBase3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game13PanModokiBase3ObjFv
	.4byte doFinishStoneState__Q34Game13PanModokiBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game13PanModokiBase3ObjFv
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
	.4byte doStartMovie__Q34Game13PanModokiBase3ObjFv
	.4byte doEndMovie__Q34Game13PanModokiBase3ObjFv
	.4byte appearRumble__Q34Game13PanModokiBase3ObjFv
	.4byte hideRumble__Q34Game13PanModokiBase3ObjFv
	.4byte damageRumble__Q34Game13PanModokiBase3ObjFv
	.4byte walkFunc__Q34Game13PanModokiBase3ObjFv
	.4byte 0
	.4byte setFSM__Q34Game13PanModokiBase3ObjFPQ34Game13PanModokiBase3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@968@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@968@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@968@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game13PanModokiBase3Obj
.obj __vt__Q24Game18InteractSuckFinish, global
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game18InteractSuckFinishFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
.endobj __vt__Q24Game18InteractSuckFinish

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E490, local
	.float 0.0
.endobj lbl_8051E490
.balign 4
.obj lbl_8051E494, local
	.asciz "body"
.endobj lbl_8051E494
.balign 4
.obj lbl_8051E49C, local
	.asciz "kamu"
.endobj lbl_8051E49C
.balign 4
.obj lbl_8051E4A4, local
	.float 20.0
.endobj lbl_8051E4A4
.obj lbl_8051E4A8, local
	.float 15.0
.endobj lbl_8051E4A8
.obj lbl_8051E4AC, local
	.float 5.0
.endobj lbl_8051E4AC
.obj lbl_8051E4B0, local
	.float 0.6
.endobj lbl_8051E4B0
.obj lbl_8051E4B4, local
	.float 1.0
.endobj lbl_8051E4B4
.obj lbl_8051E4B8, local
	.float 0.1
.endobj lbl_8051E4B8
.obj lbl_8051E4BC, local
	.float 0.2
.endobj lbl_8051E4BC
.obj lbl_8051E4C0, local # half-pi
	.float 1.5707964
.endobj lbl_8051E4C0
.obj lbl_8051E4C4, local # pi
	.float 3.1415927
.endobj lbl_8051E4C4
.obj lbl_8051E4C8, local
	.float 325.9493
.endobj lbl_8051E4C8
.obj lbl_8051E4CC, local
	.float -325.9493
.endobj lbl_8051E4CC
.obj lbl_8051E4D0, local
	.float 0.5
.endobj lbl_8051E4D0
.obj lbl_8051E4D4, local
	.float 2.0
.endobj lbl_8051E4D4
.obj lbl_8051E4D8, local
	.float 50.0
.endobj lbl_8051E4D8
.obj lbl_8051E4DC, local
	.float 30.0
.endobj lbl_8051E4DC
.obj lbl_8051E4E0, local
	.float -1000.0
.endobj lbl_8051E4E0
.balign 4
.obj lbl_8051E4E4, local
	.asciz "asiL"
.endobj lbl_8051E4E4
.balign 4
.obj lbl_8051E4EC, local
	.asciz "asiR"
.endobj lbl_8051E4EC
.balign 4
.obj lbl_8051E4F4, local
	.float 100.0
.endobj lbl_8051E4F4
.obj lbl_8051E4F8, local
	.float 32768.0
.endobj lbl_8051E4F8
.balign 8
.obj lbl_8051E500, local
	.8byte 0x4330000080000000
.endobj lbl_8051E500
.obj lbl_8051E508, local
	.float 60.0
.endobj lbl_8051E508
.obj lbl_8051E50C, local
	.float 75.0
.endobj lbl_8051E50C
.obj lbl_8051E510, local
	.float -1.0
.endobj lbl_8051E510
.obj lbl_8051E514, local
	.float 150.0
.endobj lbl_8051E514
.obj lbl_8051E518, local
	.float 10.0
.endobj lbl_8051E518
.obj lbl_8051E51C, local
	.float -0.1
.endobj lbl_8051E51C
.obj lbl_8051E520, local
	.float 0.9
.endobj lbl_8051E520
.obj lbl_8051E524, local
	.float 0.0055555557
.endobj lbl_8051E524
.balign 4
.obj lbl_8051E528, local
	.asciz "orima"
.endobj lbl_8051E528
.balign 4
.obj lbl_8051E530, local # tau
	.float 6.2831855
.endobj lbl_8051E530
.obj lbl_8051E534, local
	.float 10000.0
.endobj lbl_8051E534
.obj lbl_8051E538, local
	.float 0.15
.endobj lbl_8051E538
.obj lbl_8051E53C, local
	.float 0.99
.endobj lbl_8051E53C
.obj lbl_8051E540, local
	.float 40.0
.endobj lbl_8051E540
.obj lbl_8051E544, local
	.float 12.0
.endobj lbl_8051E544
.obj lbl_8051E548, local
	.float 1.6
.endobj lbl_8051E548

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn actEnemy__Q24Game18InteractSuckFinishFPQ24Game9EnemyBase, global
/* 8034F5E0 0034C520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034F5E4 0034C524  7C 08 02 A6 */	mflr r0
/* 8034F5E8 0034C528  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034F5EC 0034C52C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034F5F0 0034C530  7C 9F 23 78 */	mr r31, r4
/* 8034F5F4 0034C534  7F E3 FB 78 */	mr r3, r31
/* 8034F5F8 0034C538  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034F5FC 0034C53C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8034F600 0034C540  7D 89 03 A6 */	mtctr r12
/* 8034F604 0034C544  4E 80 04 21 */	bctrl 
/* 8034F608 0034C548  2C 03 00 27 */	cmpwi r3, 0x27
/* 8034F60C 0034C54C  41 82 00 2C */	beq .L_8034F638
/* 8034F610 0034C550  40 80 00 10 */	bge .L_8034F620
/* 8034F614 0034C554  2C 03 00 26 */	cmpwi r3, 0x26
/* 8034F618 0034C558  40 80 00 10 */	bge .L_8034F628
/* 8034F61C 0034C55C  48 00 00 1C */	b .L_8034F638
.L_8034F620:
/* 8034F620 0034C560  2C 03 00 29 */	cmpwi r3, 0x29
/* 8034F624 0034C564  40 80 00 14 */	bge .L_8034F638
.L_8034F628:
/* 8034F628 0034C568  7F E3 FB 78 */	mr r3, r31
/* 8034F62C 0034C56C  48 00 35 E9 */	bl suckFinish__Q34Game13PanModokiBase3ObjFv
/* 8034F630 0034C570  38 60 00 01 */	li r3, 1
/* 8034F634 0034C574  48 00 00 08 */	b .L_8034F63C
.L_8034F638:
/* 8034F638 0034C578  38 60 00 00 */	li r3, 0
.L_8034F63C:
/* 8034F63C 0034C57C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034F640 0034C580  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034F644 0034C584  7C 08 03 A6 */	mtlr r0
/* 8034F648 0034C588  38 21 00 10 */	addi r1, r1, 0x10
/* 8034F64C 0034C58C  4E 80 00 20 */	blr 
.endfn actEnemy__Q24Game18InteractSuckFinishFPQ24Game9EnemyBase

.fn setParameters__Q34Game13PanModokiBase3ObjFv, global
/* 8034F650 0034C590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034F654 0034C594  7C 08 02 A6 */	mflr r0
/* 8034F658 0034C598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034F65C 0034C59C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034F660 0034C5A0  7C 7F 1B 78 */	mr r31, r3
/* 8034F664 0034C5A4  4B DB 35 75 */	bl setParameters__Q24Game9EnemyBaseFv
/* 8034F668 0034C5A8  80 9F 03 78 */	lwz r4, 0x378(r31)
/* 8034F66C 0034C5AC  28 04 00 00 */	cmplwi r4, 0
/* 8034F670 0034C5B0  41 82 00 34 */	beq .L_8034F6A4
/* 8034F674 0034C5B4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8034F678 0034C5B8  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8034F67C 0034C5BC  D0 04 01 F8 */	stfs f0, 0x1f8(r4)
/* 8034F680 0034C5C0  D0 04 01 68 */	stfs f0, 0x168(r4)
/* 8034F684 0034C5C4  D0 04 01 6C */	stfs f0, 0x16c(r4)
/* 8034F688 0034C5C8  D0 04 01 70 */	stfs f0, 0x170(r4)
/* 8034F68C 0034C5CC  80 9F 03 78 */	lwz r4, 0x378(r31)
/* 8034F690 0034C5D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8034F694 0034C5D4  80 84 01 14 */	lwz r4, 0x114(r4)
/* 8034F698 0034C5D8  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 8034F69C 0034C5DC  80 64 00 00 */	lwz r3, 0(r4)
/* 8034F6A0 0034C5E0  4B DE 87 6D */	bl setScale__8CollPartFf
.L_8034F6A4:
/* 8034F6A4 0034C5E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034F6A8 0034C5E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034F6AC 0034C5EC  7C 08 03 A6 */	mtlr r0
/* 8034F6B0 0034C5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8034F6B4 0034C5F4  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game13PanModokiBase3ObjFv

.fn "birth__Q34Game13PanModokiBase3ObjFR10Vector3<f>f", global
/* 8034F6B8 0034C5F8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034F6BC 0034C5FC  7C 08 02 A6 */	mflr r0
/* 8034F6C0 0034C600  90 01 00 54 */	stw r0, 0x54(r1)
/* 8034F6C4 0034C604  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8034F6C8 0034C608  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8034F6CC 0034C60C  7C 7E 1B 78 */	mr r30, r3
/* 8034F6D0 0034C610  4B DB 33 31 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8034F6D4 0034C614  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8034F6D8 0034C618  38 80 00 53 */	li r4, 0x53
/* 8034F6DC 0034C61C  4B DB E5 C9 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8034F6E0 0034C620  7C 7F 1B 79 */	or. r31, r3, r3
/* 8034F6E4 0034C624  41 82 00 DC */	beq .L_8034F7C0
/* 8034F6E8 0034C628  38 61 00 08 */	addi r3, r1, 8
/* 8034F6EC 0034C62C  4B DD F5 39 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 8034F6F0 0034C630  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8034F6F4 0034C634  7F C3 F3 78 */	mr r3, r30
/* 8034F6F8 0034C638  D0 01 00 08 */	stfs f0, 8(r1)
/* 8034F6FC 0034C63C  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8034F700 0034C640  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8034F704 0034C644  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8034F708 0034C648  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8034F70C 0034C64C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8034F710 0034C650  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8034F714 0034C654  7D 89 03 A6 */	mtctr r12
/* 8034F718 0034C658  4E 80 04 21 */	bctrl 
/* 8034F71C 0034C65C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8034F720 0034C660  7F E3 FB 78 */	mr r3, r31
/* 8034F724 0034C664  38 81 00 08 */	addi r4, r1, 8
/* 8034F728 0034C668  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034F72C 0034C66C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8034F730 0034C670  7D 89 03 A6 */	mtctr r12
/* 8034F734 0034C674  4E 80 04 21 */	bctrl 
/* 8034F738 0034C678  7C 7F 1B 79 */	or. r31, r3, r3
/* 8034F73C 0034C67C  40 82 00 20 */	bne .L_8034F75C
/* 8034F740 0034C680  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 8034F744 0034C684  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 8034F748 0034C688  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 8034F74C 0034C68C  38 80 00 59 */	li r4, 0x59
/* 8034F750 0034C690  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 8034F754 0034C694  4C C6 31 82 */	crclr 6
/* 8034F758 0034C698  4B CD AE E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8034F75C:
/* 8034F75C 0034C69C  28 1F 00 00 */	cmplwi r31, 0
/* 8034F760 0034C6A0  41 82 00 60 */	beq .L_8034F7C0
/* 8034F764 0034C6A4  7F E3 FB 78 */	mr r3, r31
/* 8034F768 0034C6A8  38 80 00 00 */	li r4, 0
/* 8034F76C 0034C6AC  4B DE B8 5D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8034F770 0034C6B0  93 FE 03 78 */	stw r31, 0x378(r30)
/* 8034F774 0034C6B4  7F C3 F3 78 */	mr r3, r30
/* 8034F778 0034C6B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8034F77C 0034C6BC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8034F780 0034C6C0  7D 89 03 A6 */	mtctr r12
/* 8034F784 0034C6C4  4E 80 04 21 */	bctrl 
/* 8034F788 0034C6C8  7C 64 1B 78 */	mr r4, r3
/* 8034F78C 0034C6CC  80 7E 03 78 */	lwz r3, 0x378(r30)
/* 8034F790 0034C6D0  48 01 D4 ED */	bl setHouseType__Q34Game4Nest3ObjFi
/* 8034F794 0034C6D4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8034F798 0034C6D8  80 9E 03 78 */	lwz r4, 0x378(r30)
/* 8034F79C 0034C6DC  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 8034F7A0 0034C6E0  D0 24 01 F8 */	stfs f1, 0x1f8(r4)
/* 8034F7A4 0034C6E4  D0 24 01 68 */	stfs f1, 0x168(r4)
/* 8034F7A8 0034C6E8  D0 24 01 6C */	stfs f1, 0x16c(r4)
/* 8034F7AC 0034C6EC  D0 24 01 70 */	stfs f1, 0x170(r4)
/* 8034F7B0 0034C6F0  80 7E 03 78 */	lwz r3, 0x378(r30)
/* 8034F7B4 0034C6F4  80 63 01 14 */	lwz r3, 0x114(r3)
/* 8034F7B8 0034C6F8  80 63 00 00 */	lwz r3, 0(r3)
/* 8034F7BC 0034C6FC  4B DE 86 51 */	bl setScale__8CollPartFf
.L_8034F7C0:
/* 8034F7C0 0034C700  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8034F7C4 0034C704  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8034F7C8 0034C708  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8034F7CC 0034C70C  7C 08 03 A6 */	mtlr r0
/* 8034F7D0 0034C710  38 21 00 50 */	addi r1, r1, 0x50
/* 8034F7D4 0034C714  4E 80 00 20 */	blr 
.endfn "birth__Q34Game13PanModokiBase3ObjFR10Vector3<f>f"

.fn onInit__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureInitArg, global
/* 8034F7D8 0034C718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034F7DC 0034C71C  7C 08 02 A6 */	mflr r0
/* 8034F7E0 0034C720  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034F7E4 0034C724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034F7E8 0034C728  7C 7F 1B 78 */	mr r31, r3
/* 8034F7EC 0034C72C  4B DB 22 6D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8034F7F0 0034C730  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034F7F4 0034C734  7F E3 FB 78 */	mr r3, r31
/* 8034F7F8 0034C738  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8034F7FC 0034C73C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034F800 0034C740  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034F804 0034C744  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8034F808 0034C748  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034F80C 0034C74C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8034F810 0034C750  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 8034F814 0034C754  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8034F818 0034C758  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8034F81C 0034C75C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8034F820 0034C760  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8034F824 0034C764  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8034F828 0034C768  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8034F82C 0034C76C  4B DB 21 DD */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 8034F830 0034C770  38 60 00 00 */	li r3, 0
/* 8034F834 0034C774  38 00 00 01 */	li r0, 1
/* 8034F838 0034C778  90 7F 03 04 */	stw r3, 0x304(r31)
/* 8034F83C 0034C77C  38 82 01 34 */	addi r4, r2, lbl_8051E494@sda21
/* 8034F840 0034C780  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8034F844 0034C784  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8034F848 0034C788  D0 3F 03 08 */	stfs f1, 0x308(r31)
/* 8034F84C 0034C78C  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 8034F850 0034C790  D0 3F 03 0C */	stfs f1, 0x30c(r31)
/* 8034F854 0034C794  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 8034F858 0034C798  D0 3F 03 10 */	stfs f1, 0x310(r31)
/* 8034F85C 0034C79C  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8034F860 0034C7A0  D0 3F 03 34 */	stfs f1, 0x334(r31)
/* 8034F864 0034C7A4  90 7F 03 14 */	stw r3, 0x314(r31)
/* 8034F868 0034C7A8  98 1F 02 E4 */	stb r0, 0x2e4(r31)
/* 8034F86C 0034C7AC  98 7F 02 F0 */	stb r3, 0x2f0(r31)
/* 8034F870 0034C7B0  98 7F 02 F1 */	stb r3, 0x2f1(r31)
/* 8034F874 0034C7B4  90 7F 03 18 */	stw r3, 0x318(r31)
/* 8034F878 0034C7B8  B0 7F 02 E6 */	sth r3, 0x2e6(r31)
/* 8034F87C 0034C7BC  B0 7F 02 EA */	sth r3, 0x2ea(r31)
/* 8034F880 0034C7C0  B0 7F 02 E8 */	sth r3, 0x2e8(r31)
/* 8034F884 0034C7C4  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 8034F888 0034C7C8  D0 1F 03 24 */	stfs f0, 0x324(r31)
/* 8034F88C 0034C7CC  D0 1F 03 28 */	stfs f0, 0x328(r31)
/* 8034F890 0034C7D0  98 7F 03 1C */	stb r3, 0x31c(r31)
/* 8034F894 0034C7D4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8034F898 0034C7D8  48 0E F7 4D */	bl getJoint__Q28SysShape5ModelFPc
/* 8034F89C 0034C7DC  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8034F8A0 0034C7E0  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 8034F8A4 0034C7E4  28 00 00 00 */	cmplwi r0, 0
/* 8034F8A8 0034C7E8  40 82 00 20 */	bne .L_8034F8C8
/* 8034F8AC 0034C7EC  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 8034F8B0 0034C7F0  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 8034F8B4 0034C7F4  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 8034F8B8 0034C7F8  38 80 00 89 */	li r4, 0x89
/* 8034F8BC 0034C7FC  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 8034F8C0 0034C800  4C C6 31 82 */	crclr 6
/* 8034F8C4 0034C804  4B CD AD 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8034F8C8:
/* 8034F8C8 0034C808  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8034F8CC 0034C80C  38 82 01 3C */	addi r4, r2, lbl_8051E49C@sda21
/* 8034F8D0 0034C810  48 0E F7 15 */	bl getJoint__Q28SysShape5ModelFPc
/* 8034F8D4 0034C814  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8034F8D8 0034C818  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 8034F8DC 0034C81C  28 00 00 00 */	cmplwi r0, 0
/* 8034F8E0 0034C820  40 82 00 20 */	bne .L_8034F900
/* 8034F8E4 0034C824  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 8034F8E8 0034C828  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 8034F8EC 0034C82C  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 8034F8F0 0034C830  38 80 00 8C */	li r4, 0x8c
/* 8034F8F4 0034C834  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 8034F8F8 0034C838  4C C6 31 82 */	crclr 6
/* 8034F8FC 0034C83C  4B CD AD 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8034F900:
/* 8034F900 0034C840  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8034F904 0034C844  7F E4 FB 78 */	mr r4, r31
/* 8034F908 0034C848  38 A0 00 04 */	li r5, 4
/* 8034F90C 0034C84C  38 C0 00 00 */	li r6, 0
/* 8034F910 0034C850  D0 1F 03 34 */	stfs f0, 0x334(r31)
/* 8034F914 0034C854  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8034F918 0034C858  81 83 00 00 */	lwz r12, 0(r3)
/* 8034F91C 0034C85C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8034F920 0034C860  7D 89 03 A6 */	mtctr r12
/* 8034F924 0034C864  4E 80 04 21 */	bctrl 
/* 8034F928 0034C868  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 8034F92C 0034C86C  28 00 00 00 */	cmplwi r0, 0
/* 8034F930 0034C870  40 82 00 20 */	bne .L_8034F950
/* 8034F934 0034C874  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 8034F938 0034C878  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 8034F93C 0034C87C  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 8034F940 0034C880  38 80 00 91 */	li r4, 0x91
/* 8034F944 0034C884  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 8034F948 0034C888  4C C6 31 82 */	crclr 6
/* 8034F94C 0034C88C  4B CD AC F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8034F950:
/* 8034F950 0034C890  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 8034F954 0034C894  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8034F958 0034C898  38 00 00 00 */	li r0, 0
/* 8034F95C 0034C89C  90 83 00 10 */	stw r4, 0x10(r3)
/* 8034F960 0034C8A0  90 1F 03 88 */	stw r0, 0x388(r31)
/* 8034F964 0034C8A4  90 1F 03 8C */	stw r0, 0x38c(r31)
/* 8034F968 0034C8A8  90 1F 03 90 */	stw r0, 0x390(r31)
/* 8034F96C 0034C8AC  90 1F 03 94 */	stw r0, 0x394(r31)
/* 8034F970 0034C8B0  90 1F 03 98 */	stw r0, 0x398(r31)
/* 8034F974 0034C8B4  90 1F 03 9C */	stw r0, 0x39c(r31)
/* 8034F978 0034C8B8  90 1F 03 A0 */	stw r0, 0x3a0(r31)
/* 8034F97C 0034C8BC  90 1F 03 A4 */	stw r0, 0x3a4(r31)
/* 8034F980 0034C8C0  90 1F 03 A8 */	stw r0, 0x3a8(r31)
/* 8034F984 0034C8C4  90 1F 03 AC */	stw r0, 0x3ac(r31)
/* 8034F988 0034C8C8  90 1F 03 B0 */	stw r0, 0x3b0(r31)
/* 8034F98C 0034C8CC  90 1F 03 B4 */	stw r0, 0x3b4(r31)
/* 8034F990 0034C8D0  90 1F 03 B8 */	stw r0, 0x3b8(r31)
/* 8034F994 0034C8D4  90 1F 03 BC */	stw r0, 0x3bc(r31)
/* 8034F998 0034C8D8  90 1F 03 C0 */	stw r0, 0x3c0(r31)
/* 8034F99C 0034C8DC  90 1F 03 C4 */	stw r0, 0x3c4(r31)
/* 8034F9A0 0034C8E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034F9A4 0034C8E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034F9A8 0034C8E8  7C 08 03 A6 */	mtlr r0
/* 8034F9AC 0034C8EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8034F9B0 0034C8F0  4E 80 00 20 */	blr 
.endfn onInit__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureInitArg

.fn __ct__Q34Game13PanModokiBase3ObjFv, global
/* 8034F9B4 0034C8F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034F9B8 0034C8F8  7C 08 02 A6 */	mflr r0
/* 8034F9BC 0034C8FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034F9C0 0034C900  7C 80 07 35 */	extsh. r0, r4
/* 8034F9C4 0034C904  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034F9C8 0034C908  7C 7F 1B 78 */	mr r31, r3
/* 8034F9CC 0034C90C  93 C1 00 08 */	stw r30, 8(r1)
/* 8034F9D0 0034C910  41 82 00 24 */	beq .L_8034F9F4
/* 8034F9D4 0034C914  38 1F 03 C8 */	addi r0, r31, 0x3c8
/* 8034F9D8 0034C918  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8034F9DC 0034C91C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8034F9E0 0034C920  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8034F9E4 0034C924  38 00 00 00 */	li r0, 0
/* 8034F9E8 0034C928  90 7F 03 C8 */	stw r3, 0x3c8(r31)
/* 8034F9EC 0034C92C  90 1F 03 CC */	stw r0, 0x3cc(r31)
/* 8034F9F0 0034C930  90 1F 03 D0 */	stw r0, 0x3d0(r31)
.L_8034F9F4:
/* 8034F9F4 0034C934  7F E3 FB 78 */	mr r3, r31
/* 8034F9F8 0034C938  38 80 00 00 */	li r4, 0
/* 8034F9FC 0034C93C  4B DB 19 A5 */	bl __ct__Q24Game9EnemyBaseFv
/* 8034FA00 0034C940  3C 60 80 4E */	lis r3, __vt__Q34Game13PanModokiBase3Obj@ha
/* 8034FA04 0034C944  38 1F 03 C8 */	addi r0, r31, 0x3c8
/* 8034FA08 0034C948  38 63 CE 10 */	addi r3, r3, __vt__Q34Game13PanModokiBase3Obj@l
/* 8034FA0C 0034C94C  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8034FA10 0034C950  90 7F 00 00 */	stw r3, 0(r31)
/* 8034FA14 0034C954  38 83 01 B0 */	addi r4, r3, 0x1b0
/* 8034FA18 0034C958  38 A3 03 10 */	addi r5, r3, 0x310
/* 8034FA1C 0034C95C  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8034FA20 0034C960  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8034FA24 0034C964  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8034FA28 0034C968  90 A4 00 00 */	stw r5, 0(r4)
/* 8034FA2C 0034C96C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8034FA30 0034C970  7C 04 00 50 */	subf r0, r4, r0
/* 8034FA34 0034C974  90 04 00 0C */	stw r0, 0xc(r4)
/* 8034FA38 0034C978  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8034FA3C 0034C97C  4B DE 8B 0D */	bl __ct__10MouthSlotsFv
/* 8034FA40 0034C980  38 00 00 00 */	li r0, 0
/* 8034FA44 0034C984  38 7F 02 F4 */	addi r3, r31, 0x2f4
/* 8034FA48 0034C988  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8034FA4C 0034C98C  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 8034FA50 0034C990  4B DD A9 05 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 8034FA54 0034C994  38 00 00 00 */	li r0, 0
/* 8034FA58 0034C998  C0 22 01 44 */	lfs f1, lbl_8051E4A4@sda21(r2)
/* 8034FA5C 0034C99C  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 8034FA60 0034C9A0  38 60 00 2C */	li r3, 0x2c
/* 8034FA64 0034C9A4  C0 02 01 48 */	lfs f0, lbl_8051E4A8@sda21(r2)
/* 8034FA68 0034C9A8  90 1F 03 00 */	stw r0, 0x300(r31)
/* 8034FA6C 0034C9AC  C0 42 01 4C */	lfs f2, lbl_8051E4AC@sda21(r2)
/* 8034FA70 0034C9B0  D0 3F 03 2C */	stfs f1, 0x32c(r31)
/* 8034FA74 0034C9B4  C0 22 01 50 */	lfs f1, lbl_8051E4B0@sda21(r2)
/* 8034FA78 0034C9B8  D0 1F 03 30 */	stfs f0, 0x330(r31)
/* 8034FA7C 0034C9BC  C0 02 01 54 */	lfs f0, lbl_8051E4B4@sda21(r2)
/* 8034FA80 0034C9C0  D0 5F 03 38 */	stfs f2, 0x338(r31)
/* 8034FA84 0034C9C4  D0 3F 03 3C */	stfs f1, 0x33c(r31)
/* 8034FA88 0034C9C8  D0 1F 03 40 */	stfs f0, 0x340(r31)
/* 8034FA8C 0034C9CC  90 1F 03 78 */	stw r0, 0x378(r31)
/* 8034FA90 0034C9D0  90 1F 03 80 */	stw r0, 0x380(r31)
/* 8034FA94 0034C9D4  90 1F 03 84 */	stw r0, 0x384(r31)
/* 8034FA98 0034C9D8  90 1F 03 88 */	stw r0, 0x388(r31)
/* 8034FA9C 0034C9DC  4B CD 44 09 */	bl __nw__FUl
/* 8034FAA0 0034C9E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8034FAA4 0034C9E4  41 82 00 44 */	beq .L_8034FAE8
/* 8034FAA8 0034C9E8  4B DD 7E CD */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8034FAAC 0034C9EC  3C 60 80 4E */	lis r3, __vt__Q34Game13PanModokiBase14ProperAnimator@ha
/* 8034FAB0 0034C9F0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8034FAB4 0034C9F4  38 03 C5 80 */	addi r0, r3, __vt__Q34Game13PanModokiBase14ProperAnimator@l
/* 8034FAB8 0034C9F8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8034FABC 0034C9FC  90 1E 00 00 */	stw r0, 0(r30)
/* 8034FAC0 0034CA00  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8034FAC4 0034CA04  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8034FAC8 0034CA08  38 00 00 00 */	li r0, 0
/* 8034FACC 0034CA0C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8034FAD0 0034CA10  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8034FAD4 0034CA14  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8034FAD8 0034CA18  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8034FADC 0034CA1C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8034FAE0 0034CA20  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8034FAE4 0034CA24  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8034FAE8:
/* 8034FAE8 0034CA28  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8034FAEC 0034CA2C  38 60 00 1C */	li r3, 0x1c
/* 8034FAF0 0034CA30  4B CD 43 B5 */	bl __nw__FUl
/* 8034FAF4 0034CA34  7C 64 1B 79 */	or. r4, r3, r3
/* 8034FAF8 0034CA38  41 82 00 24 */	beq .L_8034FB1C
/* 8034FAFC 0034CA3C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8034FB00 0034CA40  3C 60 80 4E */	lis r3, __vt__Q34Game13PanModokiBase3FSM@ha
/* 8034FB04 0034CA44  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8034FB08 0034CA48  38 A0 FF FF */	li r5, -1
/* 8034FB0C 0034CA4C  90 04 00 00 */	stw r0, 0(r4)
/* 8034FB10 0034CA50  38 03 C5 58 */	addi r0, r3, __vt__Q34Game13PanModokiBase3FSM@l
/* 8034FB14 0034CA54  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8034FB18 0034CA58  90 04 00 00 */	stw r0, 0(r4)
.L_8034FB1C:
/* 8034FB1C 0034CA5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034FB20 0034CA60  7F E3 FB 78 */	mr r3, r31
/* 8034FB24 0034CA64  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 8034FB28 0034CA68  7D 89 03 A6 */	mtctr r12
/* 8034FB2C 0034CA6C  4E 80 04 21 */	bctrl 
/* 8034FB30 0034CA70  38 60 00 10 */	li r3, 0x10
/* 8034FB34 0034CA74  4B CD 43 71 */	bl __nw__FUl
/* 8034FB38 0034CA78  28 03 00 00 */	cmplwi r3, 0
/* 8034FB3C 0034CA7C  41 82 00 6C */	beq .L_8034FBA8
/* 8034FB40 0034CA80  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8034FB44 0034CA84  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8034FB48 0034CA88  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8034FB4C 0034CA8C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8034FB50 0034CA90  90 03 00 00 */	stw r0, 0(r3)
/* 8034FB54 0034CA94  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8034FB58 0034CA98  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8034FB5C 0034CA9C  3C 80 80 4B */	lis r4, __vt__Q23efx8TForever@ha
/* 8034FB60 0034CAA0  90 03 00 04 */	stw r0, 4(r3)
/* 8034FB64 0034CAA4  38 C4 2C 24 */	addi r6, r4, __vt__Q23efx8TForever@l
/* 8034FB68 0034CAA8  3C 80 80 4E */	lis r4, __vt__Q23efx8TPanHide@ha
/* 8034FB6C 0034CAAC  38 05 00 14 */	addi r0, r5, 0x14
/* 8034FB70 0034CAB0  90 A3 00 00 */	stw r5, 0(r3)
/* 8034FB74 0034CAB4  38 84 6D D0 */	addi r4, r4, __vt__Q23efx8TPanHide@l
/* 8034FB78 0034CAB8  39 00 00 00 */	li r8, 0
/* 8034FB7C 0034CABC  38 E0 02 6F */	li r7, 0x26f
/* 8034FB80 0034CAC0  90 03 00 04 */	stw r0, 4(r3)
/* 8034FB84 0034CAC4  38 A6 00 14 */	addi r5, r6, 0x14
/* 8034FB88 0034CAC8  38 04 00 14 */	addi r0, r4, 0x14
/* 8034FB8C 0034CACC  91 03 00 08 */	stw r8, 8(r3)
/* 8034FB90 0034CAD0  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 8034FB94 0034CAD4  99 03 00 0E */	stb r8, 0xe(r3)
/* 8034FB98 0034CAD8  90 C3 00 00 */	stw r6, 0(r3)
/* 8034FB9C 0034CADC  90 A3 00 04 */	stw r5, 4(r3)
/* 8034FBA0 0034CAE0  90 83 00 00 */	stw r4, 0(r3)
/* 8034FBA4 0034CAE4  90 03 00 04 */	stw r0, 4(r3)
.L_8034FBA8:
/* 8034FBA8 0034CAE8  90 7F 02 FC */	stw r3, 0x2fc(r31)
/* 8034FBAC 0034CAEC  38 60 00 14 */	li r3, 0x14
/* 8034FBB0 0034CAF0  4B CD 42 F5 */	bl __nw__FUl
/* 8034FBB4 0034CAF4  28 03 00 00 */	cmplwi r3, 0
/* 8034FBB8 0034CAF8  41 82 00 7C */	beq .L_8034FC34
/* 8034FBBC 0034CAFC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8034FBC0 0034CB00  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8034FBC4 0034CB04  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8034FBC8 0034CB08  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8034FBCC 0034CB0C  90 03 00 00 */	stw r0, 0(r3)
/* 8034FBD0 0034CB10  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8034FBD4 0034CB14  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8034FBD8 0034CB18  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 8034FBDC 0034CB1C  90 03 00 04 */	stw r0, 4(r3)
/* 8034FBE0 0034CB20  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 8034FBE4 0034CB24  3C 80 80 4E */	lis r4, __vt__Q23efx9TPanSmoke@ha
/* 8034FBE8 0034CB28  38 05 00 14 */	addi r0, r5, 0x14
/* 8034FBEC 0034CB2C  90 A3 00 00 */	stw r5, 0(r3)
/* 8034FBF0 0034CB30  38 84 6D 84 */	addi r4, r4, __vt__Q23efx9TPanSmoke@l
/* 8034FBF4 0034CB34  39 40 00 00 */	li r10, 0
/* 8034FBF8 0034CB38  39 20 02 B2 */	li r9, 0x2b2
/* 8034FBFC 0034CB3C  90 03 00 04 */	stw r0, 4(r3)
/* 8034FC00 0034CB40  38 E8 00 14 */	addi r7, r8, 0x14
/* 8034FC04 0034CB44  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8034FC08 0034CB48  38 A0 02 70 */	li r5, 0x270
/* 8034FC0C 0034CB4C  91 43 00 08 */	stw r10, 8(r3)
/* 8034FC10 0034CB50  38 04 00 14 */	addi r0, r4, 0x14
/* 8034FC14 0034CB54  B1 23 00 0C */	sth r9, 0xc(r3)
/* 8034FC18 0034CB58  99 43 00 0E */	stb r10, 0xe(r3)
/* 8034FC1C 0034CB5C  91 03 00 00 */	stw r8, 0(r3)
/* 8034FC20 0034CB60  90 E3 00 04 */	stw r7, 4(r3)
/* 8034FC24 0034CB64  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8034FC28 0034CB68  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8034FC2C 0034CB6C  90 83 00 00 */	stw r4, 0(r3)
/* 8034FC30 0034CB70  90 03 00 04 */	stw r0, 4(r3)
.L_8034FC34:
/* 8034FC34 0034CB74  90 7F 03 00 */	stw r3, 0x300(r31)
/* 8034FC38 0034CB78  7F E3 FB 78 */	mr r3, r31
/* 8034FC3C 0034CB7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034FC40 0034CB80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034FC44 0034CB84  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034FC48 0034CB88  7C 08 03 A6 */	mtlr r0
/* 8034FC4C 0034CB8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034FC50 0034CB90  4E 80 00 20 */	blr 
.endfn __ct__Q34Game13PanModokiBase3ObjFv

.fn doUpdate__Q34Game13PanModokiBase3ObjFv, global
/* 8034FC54 0034CB94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034FC58 0034CB98  7C 08 02 A6 */	mflr r0
/* 8034FC5C 0034CB9C  7C 64 1B 78 */	mr r4, r3
/* 8034FC60 0034CBA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034FC64 0034CBA4  80 63 03 80 */	lwz r3, 0x380(r3)
/* 8034FC68 0034CBA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8034FC6C 0034CBAC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8034FC70 0034CBB0  7D 89 03 A6 */	mtctr r12
/* 8034FC74 0034CBB4  4E 80 04 21 */	bctrl 
/* 8034FC78 0034CBB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034FC7C 0034CBBC  7C 08 03 A6 */	mtlr r0
/* 8034FC80 0034CBC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8034FC84 0034CBC4  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game13PanModokiBase3ObjFv

.fn doAnimation__Q34Game13PanModokiBase3ObjFv, global
/* 8034FC88 0034CBC8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034FC8C 0034CBCC  7C 08 02 A6 */	mflr r0
/* 8034FC90 0034CBD0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8034FC94 0034CBD4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8034FC98 0034CBD8  7C 7F 1B 78 */	mr r31, r3
/* 8034FC9C 0034CBDC  4B DB 32 F9 */	bl doAnimation__Q24Game9EnemyBaseFv
/* 8034FCA0 0034CBE0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034FCA4 0034CBE4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8034FCA8 0034CBE8  40 82 00 80 */	bne .L_8034FD28
/* 8034FCAC 0034CBEC  7F E3 FB 78 */	mr r3, r31
/* 8034FCB0 0034CBF0  4B DB 77 45 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034FCB4 0034CBF4  2C 03 00 05 */	cmpwi r3, 5
/* 8034FCB8 0034CBF8  41 82 00 0C */	beq .L_8034FCC4
/* 8034FCBC 0034CBFC  2C 03 00 0A */	cmpwi r3, 0xa
/* 8034FCC0 0034CC00  40 82 00 18 */	bne .L_8034FCD8
.L_8034FCC4:
/* 8034FCC4 0034CC04  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8034FCC8 0034CC08  28 00 00 00 */	cmplwi r0, 0
/* 8034FCCC 0034CC0C  41 82 00 0C */	beq .L_8034FCD8
/* 8034FCD0 0034CC10  7F E3 FB 78 */	mr r3, r31
/* 8034FCD4 0034CC14  48 00 03 81 */	bl updateCaptureMatrix__Q34Game13PanModokiBase3ObjFv
.L_8034FCD8:
/* 8034FCD8 0034CC18  80 7F 03 8C */	lwz r3, 0x38c(r31)
/* 8034FCDC 0034CC1C  28 03 00 00 */	cmplwi r3, 0
/* 8034FCE0 0034CC20  41 82 00 48 */	beq .L_8034FD28
/* 8034FCE4 0034CC24  80 9F 03 78 */	lwz r4, 0x378(r31)
/* 8034FCE8 0034CC28  28 04 00 00 */	cmplwi r4, 0
/* 8034FCEC 0034CC2C  41 82 00 3C */	beq .L_8034FD28
/* 8034FCF0 0034CC30  38 84 02 BC */	addi r4, r4, 0x2bc
/* 8034FCF4 0034CC34  4B E4 FD B5 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 8034FCF8 0034CC38  C0 02 01 58 */	lfs f0, lbl_8051E4B8@sda21(r2)
/* 8034FCFC 0034CC3C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8034FD00 0034CC40  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 8034FD04 0034CC44  38 81 00 08 */	addi r4, r1, 8
/* 8034FD08 0034CC48  D0 01 00 08 */	stfs f0, 8(r1)
/* 8034FD0C 0034CC4C  38 61 00 14 */	addi r3, r1, 0x14
/* 8034FD10 0034CC50  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8034FD14 0034CC54  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8034FD18 0034CC58  48 0D 88 49 */	bl "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8034FD1C 0034CC5C  80 7F 03 8C */	lwz r3, 0x38c(r31)
/* 8034FD20 0034CC60  38 81 00 14 */	addi r4, r1, 0x14
/* 8034FD24 0034CC64  4B E4 FD D9 */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_8034FD28:
/* 8034FD28 0034CC68  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8034FD2C 0034CC6C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8034FD30 0034CC70  7C 08 03 A6 */	mtlr r0
/* 8034FD34 0034CC74  38 21 00 50 */	addi r1, r1, 0x50
/* 8034FD38 0034CC78  4E 80 00 20 */	blr 
.endfn doAnimation__Q34Game13PanModokiBase3ObjFv

.fn doAnimationStick__Q34Game13PanModokiBase3ObjFv, global
/* 8034FD3C 0034CC7C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034FD40 0034CC80  7C 08 02 A6 */	mflr r0
/* 8034FD44 0034CC84  90 01 00 54 */	stw r0, 0x54(r1)
/* 8034FD48 0034CC88  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8034FD4C 0034CC8C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8034FD50 0034CC90  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8034FD54 0034CC94  7C 7F 1B 78 */	mr r31, r3
/* 8034FD58 0034CC98  48 00 1E AD */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 8034FD5C 0034CC9C  28 03 00 00 */	cmplwi r3, 0
/* 8034FD60 0034CCA0  41 82 02 C4 */	beq .L_80350024
/* 8034FD64 0034CCA4  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 8034FD68 0034CCA8  28 00 00 00 */	cmplwi r0, 0
/* 8034FD6C 0034CCAC  40 82 02 B8 */	bne .L_80350024
/* 8034FD70 0034CCB0  38 81 00 20 */	addi r4, r1, 0x20
/* 8034FD74 0034CCB4  4B DE B5 CD */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
/* 8034FD78 0034CCB8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8034FD7C 0034CCBC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8034FD80 0034CCC0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8034FD84 0034CCC4  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8034FD88 0034CCC8  EC 81 00 72 */	fmuls f4, f1, f1
/* 8034FD8C 0034CCCC  C0 22 01 30 */	lfs f1, lbl_8051E490@sda21(r2)
/* 8034FD90 0034CCD0  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8034FD94 0034CCD4  EC 00 20 2A */	fadds f0, f0, f4
/* 8034FD98 0034CCD8  EC 03 00 2A */	fadds f0, f3, f0
/* 8034FD9C 0034CCDC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8034FDA0 0034CCE0  40 81 00 20 */	ble .L_8034FDC0
/* 8034FDA4 0034CCE4  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8034FDA8 0034CCE8  EC 63 00 2A */	fadds f3, f3, f0
/* 8034FDAC 0034CCEC  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8034FDB0 0034CCF0  40 81 00 14 */	ble .L_8034FDC4
/* 8034FDB4 0034CCF4  FC 00 18 34 */	frsqrte f0, f3
/* 8034FDB8 0034CCF8  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8034FDBC 0034CCFC  48 00 00 08 */	b .L_8034FDC4
.L_8034FDC0:
/* 8034FDC0 0034CD00  FC 60 08 90 */	fmr f3, f1
.L_8034FDC4:
/* 8034FDC4 0034CD04  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8034FDC8 0034CD08  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8034FDCC 0034CD0C  40 81 00 30 */	ble .L_8034FDFC
/* 8034FDD0 0034CD10  C0 02 01 54 */	lfs f0, lbl_8051E4B4@sda21(r2)
/* 8034FDD4 0034CD14  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8034FDD8 0034CD18  EC 60 18 24 */	fdivs f3, f0, f3
/* 8034FDDC 0034CD1C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8034FDE0 0034CD20  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8034FDE4 0034CD24  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8034FDE8 0034CD28  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8034FDEC 0034CD2C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8034FDF0 0034CD30  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8034FDF4 0034CD34  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8034FDF8 0034CD38  D0 01 00 28 */	stfs f0, 0x28(r1)
.L_8034FDFC:
/* 8034FDFC 0034CD3C  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8034FE00 0034CD40  4B D7 F4 B5 */	bl cos
/* 8034FE04 0034CD44  FF E0 08 18 */	frsp f31, f1
/* 8034FE08 0034CD48  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8034FE0C 0034CD4C  4B D7 FA 11 */	bl sin
/* 8034FE10 0034CD50  FC 40 08 18 */	frsp f2, f1
/* 8034FE14 0034CD54  C0 22 01 30 */	lfs f1, lbl_8051E490@sda21(r2)
/* 8034FE18 0034CD58  EC 9F 07 F2 */	fmuls f4, f31, f31
/* 8034FE1C 0034CD5C  D3 E1 00 1C */	stfs f31, 0x1c(r1)
/* 8034FE20 0034CD60  EC 61 00 72 */	fmuls f3, f1, f1
/* 8034FE24 0034CD64  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8034FE28 0034CD68  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8034FE2C 0034CD6C  EC 00 18 2A */	fadds f0, f0, f3
/* 8034FE30 0034CD70  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8034FE34 0034CD74  EC 04 00 2A */	fadds f0, f4, f0
/* 8034FE38 0034CD78  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8034FE3C 0034CD7C  40 81 00 20 */	ble .L_8034FE5C
/* 8034FE40 0034CD80  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 8034FE44 0034CD84  EC 64 00 2A */	fadds f3, f4, f0
/* 8034FE48 0034CD88  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8034FE4C 0034CD8C  40 81 00 14 */	ble .L_8034FE60
/* 8034FE50 0034CD90  FC 00 18 34 */	frsqrte f0, f3
/* 8034FE54 0034CD94  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8034FE58 0034CD98  48 00 00 08 */	b .L_8034FE60
.L_8034FE5C:
/* 8034FE5C 0034CD9C  FC 60 08 90 */	fmr f3, f1
.L_8034FE60:
/* 8034FE60 0034CDA0  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8034FE64 0034CDA4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8034FE68 0034CDA8  40 81 00 30 */	ble .L_8034FE98
/* 8034FE6C 0034CDAC  C0 02 01 54 */	lfs f0, lbl_8051E4B4@sda21(r2)
/* 8034FE70 0034CDB0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8034FE74 0034CDB4  EC 60 18 24 */	fdivs f3, f0, f3
/* 8034FE78 0034CDB8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8034FE7C 0034CDBC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8034FE80 0034CDC0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8034FE84 0034CDC4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8034FE88 0034CDC8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8034FE8C 0034CDCC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8034FE90 0034CDD0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8034FE94 0034CDD4  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_8034FE98:
/* 8034FE98 0034CDD8  38 61 00 20 */	addi r3, r1, 0x20
/* 8034FE9C 0034CDDC  38 81 00 14 */	addi r4, r1, 0x14
/* 8034FEA0 0034CDE0  38 A1 00 08 */	addi r5, r1, 8
/* 8034FEA4 0034CDE4  4B D9 B0 E1 */	bl PSVECCrossProduct
/* 8034FEA8 0034CDE8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8034FEAC 0034CDEC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8034FEB0 0034CDF0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8034FEB4 0034CDF4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8034FEB8 0034CDF8  EC 81 00 72 */	fmuls f4, f1, f1
/* 8034FEBC 0034CDFC  C0 22 01 30 */	lfs f1, lbl_8051E490@sda21(r2)
/* 8034FEC0 0034CE00  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8034FEC4 0034CE04  EC 00 20 2A */	fadds f0, f0, f4
/* 8034FEC8 0034CE08  EC 03 00 2A */	fadds f0, f3, f0
/* 8034FECC 0034CE0C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8034FED0 0034CE10  40 81 00 20 */	ble .L_8034FEF0
/* 8034FED4 0034CE14  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8034FED8 0034CE18  EC 63 00 2A */	fadds f3, f3, f0
/* 8034FEDC 0034CE1C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8034FEE0 0034CE20  40 81 00 14 */	ble .L_8034FEF4
/* 8034FEE4 0034CE24  FC 00 18 34 */	frsqrte f0, f3
/* 8034FEE8 0034CE28  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8034FEEC 0034CE2C  48 00 00 08 */	b .L_8034FEF4
.L_8034FEF0:
/* 8034FEF0 0034CE30  FC 60 08 90 */	fmr f3, f1
.L_8034FEF4:
/* 8034FEF4 0034CE34  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8034FEF8 0034CE38  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8034FEFC 0034CE3C  40 81 00 30 */	ble .L_8034FF2C
/* 8034FF00 0034CE40  C0 02 01 54 */	lfs f0, lbl_8051E4B4@sda21(r2)
/* 8034FF04 0034CE44  C0 41 00 08 */	lfs f2, 8(r1)
/* 8034FF08 0034CE48  EC 60 18 24 */	fdivs f3, f0, f3
/* 8034FF0C 0034CE4C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8034FF10 0034CE50  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8034FF14 0034CE54  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8034FF18 0034CE58  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8034FF1C 0034CE5C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8034FF20 0034CE60  D0 41 00 08 */	stfs f2, 8(r1)
/* 8034FF24 0034CE64  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8034FF28 0034CE68  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8034FF2C:
/* 8034FF2C 0034CE6C  38 61 00 08 */	addi r3, r1, 8
/* 8034FF30 0034CE70  38 81 00 20 */	addi r4, r1, 0x20
/* 8034FF34 0034CE74  38 A1 00 14 */	addi r5, r1, 0x14
/* 8034FF38 0034CE78  4B D9 B0 4D */	bl PSVECCrossProduct
/* 8034FF3C 0034CE7C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8034FF40 0034CE80  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8034FF44 0034CE84  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8034FF48 0034CE88  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8034FF4C 0034CE8C  EC 81 00 72 */	fmuls f4, f1, f1
/* 8034FF50 0034CE90  C0 22 01 30 */	lfs f1, lbl_8051E490@sda21(r2)
/* 8034FF54 0034CE94  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8034FF58 0034CE98  EC 00 20 2A */	fadds f0, f0, f4
/* 8034FF5C 0034CE9C  EC 03 00 2A */	fadds f0, f3, f0
/* 8034FF60 0034CEA0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8034FF64 0034CEA4  40 81 00 20 */	ble .L_8034FF84
/* 8034FF68 0034CEA8  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8034FF6C 0034CEAC  EC 63 00 2A */	fadds f3, f3, f0
/* 8034FF70 0034CEB0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8034FF74 0034CEB4  40 81 00 14 */	ble .L_8034FF88
/* 8034FF78 0034CEB8  FC 00 18 34 */	frsqrte f0, f3
/* 8034FF7C 0034CEBC  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8034FF80 0034CEC0  48 00 00 08 */	b .L_8034FF88
.L_8034FF84:
/* 8034FF84 0034CEC4  FC 60 08 90 */	fmr f3, f1
.L_8034FF88:
/* 8034FF88 0034CEC8  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8034FF8C 0034CECC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8034FF90 0034CED0  40 81 00 30 */	ble .L_8034FFC0
/* 8034FF94 0034CED4  C0 02 01 54 */	lfs f0, lbl_8051E4B4@sda21(r2)
/* 8034FF98 0034CED8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8034FF9C 0034CEDC  EC 60 18 24 */	fdivs f3, f0, f3
/* 8034FFA0 0034CEE0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8034FFA4 0034CEE4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8034FFA8 0034CEE8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8034FFAC 0034CEEC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8034FFB0 0034CEF0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8034FFB4 0034CEF4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8034FFB8 0034CEF8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8034FFBC 0034CEFC  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_8034FFC0:
/* 8034FFC0 0034CF00  C0 01 00 08 */	lfs f0, 8(r1)
/* 8034FFC4 0034CF04  D0 1F 01 38 */	stfs f0, 0x138(r31)
/* 8034FFC8 0034CF08  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8034FFCC 0034CF0C  D0 1F 01 48 */	stfs f0, 0x148(r31)
/* 8034FFD0 0034CF10  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8034FFD4 0034CF14  D0 1F 01 58 */	stfs f0, 0x158(r31)
/* 8034FFD8 0034CF18  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8034FFDC 0034CF1C  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 8034FFE0 0034CF20  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8034FFE4 0034CF24  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 8034FFE8 0034CF28  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8034FFEC 0034CF2C  D0 1F 01 5C */	stfs f0, 0x15c(r31)
/* 8034FFF0 0034CF30  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8034FFF4 0034CF34  D0 1F 01 40 */	stfs f0, 0x140(r31)
/* 8034FFF8 0034CF38  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8034FFFC 0034CF3C  D0 1F 01 50 */	stfs f0, 0x150(r31)
/* 80350000 0034CF40  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80350004 0034CF44  D0 1F 01 60 */	stfs f0, 0x160(r31)
/* 80350008 0034CF48  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8035000C 0034CF4C  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 80350010 0034CF50  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80350014 0034CF54  D0 1F 01 54 */	stfs f0, 0x154(r31)
/* 80350018 0034CF58  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8035001C 0034CF5C  D0 1F 01 64 */	stfs f0, 0x164(r31)
/* 80350020 0034CF60  48 00 00 18 */	b .L_80350038
.L_80350024:
/* 80350024 0034CF64  38 7F 01 38 */	addi r3, r31, 0x138
/* 80350028 0034CF68  38 9F 01 68 */	addi r4, r31, 0x168
/* 8035002C 0034CF6C  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 80350030 0034CF70  38 DF 01 8C */	addi r6, r31, 0x18c
/* 80350034 0034CF74  48 0D 82 A5 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
.L_80350038:
/* 80350038 0034CF78  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8035003C 0034CF7C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80350040 0034CF80  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80350044 0034CF84  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80350048 0034CF88  7C 08 03 A6 */	mtlr r0
/* 8035004C 0034CF8C  38 21 00 50 */	addi r1, r1, 0x50
/* 80350050 0034CF90  4E 80 00 20 */	blr 
.endfn doAnimationStick__Q34Game13PanModokiBase3ObjFv

.fn updateCaptureMatrix__Q34Game13PanModokiBase3ObjFv, global
/* 80350054 0034CF94  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80350058 0034CF98  7C 08 02 A6 */	mflr r0
/* 8035005C 0034CF9C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80350060 0034CFA0  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80350064 0034CFA4  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80350068 0034CFA8  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 8035006C 0034CFAC  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80350070 0034CFB0  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 80350074 0034CFB4  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 80350078 0034CFB8  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 8035007C 0034CFBC  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 80350080 0034CFC0  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80350084 0034CFC4  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80350088 0034CFC8  7C 7E 1B 78 */	mr r30, r3
/* 8035008C 0034CFCC  48 00 1B 79 */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 80350090 0034CFD0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80350094 0034CFD4  7C 7F 1B 78 */	mr r31, r3
/* 80350098 0034CFD8  28 04 00 00 */	cmplwi r4, 0
/* 8035009C 0034CFDC  41 82 00 30 */	beq .L_803500CC
/* 803500A0 0034CFE0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 803500A4 0034CFE4  2C 00 00 01 */	cmpwi r0, 1
/* 803500A8 0034CFE8  40 82 00 24 */	bne .L_803500CC
/* 803500AC 0034CFEC  28 1F 00 00 */	cmplwi r31, 0
/* 803500B0 0034CFF0  41 82 00 1C */	beq .L_803500CC
/* 803500B4 0034CFF4  7F C3 F3 78 */	mr r3, r30
/* 803500B8 0034CFF8  4B E4 F4 BD */	bl isStickTo__Q24Game8CreatureFv
/* 803500BC 0034CFFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803500C0 0034D000  40 82 00 0C */	bne .L_803500CC
/* 803500C4 0034D004  7F C3 F3 78 */	mr r3, r30
/* 803500C8 0034D008  48 00 1B A5 */	bl releaseCarryTarget__Q34Game13PanModokiBase3ObjFv
.L_803500CC:
/* 803500CC 0034D00C  7F E3 FB 78 */	mr r3, r31
/* 803500D0 0034D010  81 9F 00 00 */	lwz r12, 0(r31)
/* 803500D4 0034D014  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 803500D8 0034D018  7D 89 03 A6 */	mtctr r12
/* 803500DC 0034D01C  4E 80 04 21 */	bctrl 
/* 803500E0 0034D020  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 803500E4 0034D024  28 00 00 01 */	cmplwi r0, 1
/* 803500E8 0034D028  40 82 00 28 */	bne .L_80350110
/* 803500EC 0034D02C  7F E3 FB 78 */	mr r3, r31
/* 803500F0 0034D030  81 9F 00 00 */	lwz r12, 0(r31)
/* 803500F4 0034D034  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803500F8 0034D038  7D 89 03 A6 */	mtctr r12
/* 803500FC 0034D03C  4E 80 04 21 */	bctrl 
/* 80350100 0034D040  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350104 0034D044  40 82 00 0C */	bne .L_80350110
/* 80350108 0034D048  7F C3 F3 78 */	mr r3, r30
/* 8035010C 0034D04C  48 00 1B 61 */	bl releaseCarryTarget__Q34Game13PanModokiBase3ObjFv
.L_80350110:
/* 80350110 0034D050  7F C3 F3 78 */	mr r3, r30
/* 80350114 0034D054  48 00 1A F1 */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 80350118 0034D058  28 03 00 00 */	cmplwi r3, 0
/* 8035011C 0034D05C  41 82 01 7C */	beq .L_80350298
/* 80350120 0034D060  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 80350124 0034D064  48 0D 97 7D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80350128 0034D068  C3 E3 00 00 */	lfs f31, 0(r3)
/* 8035012C 0034D06C  38 81 00 44 */	addi r4, r1, 0x44
/* 80350130 0034D070  C3 C3 00 10 */	lfs f30, 0x10(r3)
/* 80350134 0034D074  C3 A3 00 20 */	lfs f29, 0x20(r3)
/* 80350138 0034D078  7F C3 F3 78 */	mr r3, r30
/* 8035013C 0034D07C  48 00 32 F1 */	bl "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"
/* 80350140 0034D080  7F E4 FB 78 */	mr r4, r31
/* 80350144 0034D084  38 61 00 20 */	addi r3, r1, 0x20
/* 80350148 0034D088  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035014C 0034D08C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80350150 0034D090  7D 89 03 A6 */	mtctr r12
/* 80350154 0034D094  4E 80 04 21 */	bctrl 
/* 80350158 0034D098  7F E4 FB 78 */	mr r4, r31
/* 8035015C 0034D09C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80350160 0034D0A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80350164 0034D0A4  C3 81 00 28 */	lfs f28, 0x28(r1)
/* 80350168 0034D0A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035016C 0034D0AC  7D 89 03 A6 */	mtctr r12
/* 80350170 0034D0B0  4E 80 04 21 */	bctrl 
/* 80350174 0034D0B4  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80350178 0034D0B8  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8035017C 0034D0BC  EC 20 E0 28 */	fsubs f1, f0, f28
/* 80350180 0034D0C0  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80350184 0034D0C4  C0 62 01 30 */	lfs f3, lbl_8051E490@sda21(r2)
/* 80350188 0034D0C8  EC 40 10 28 */	fsubs f2, f0, f2
/* 8035018C 0034D0CC  EC 01 00 72 */	fmuls f0, f1, f1
/* 80350190 0034D0D0  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80350194 0034D0D4  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80350198 0034D0D8  40 81 00 68 */	ble .L_80350200
/* 8035019C 0034D0DC  7F E4 FB 78 */	mr r4, r31
/* 803501A0 0034D0E0  38 61 00 14 */	addi r3, r1, 0x14
/* 803501A4 0034D0E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803501A8 0034D0E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803501AC 0034D0EC  7D 89 03 A6 */	mtctr r12
/* 803501B0 0034D0F0  4E 80 04 21 */	bctrl 
/* 803501B4 0034D0F4  7F E4 FB 78 */	mr r4, r31
/* 803501B8 0034D0F8  38 61 00 08 */	addi r3, r1, 8
/* 803501BC 0034D0FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803501C0 0034D100  C3 81 00 1C */	lfs f28, 0x1c(r1)
/* 803501C4 0034D104  81 8C 00 08 */	lwz r12, 8(r12)
/* 803501C8 0034D108  7D 89 03 A6 */	mtctr r12
/* 803501CC 0034D10C  4E 80 04 21 */	bctrl 
/* 803501D0 0034D110  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 803501D4 0034D114  C0 61 00 08 */	lfs f3, 8(r1)
/* 803501D8 0034D118  EC 40 E0 28 */	fsubs f2, f0, f28
/* 803501DC 0034D11C  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 803501E0 0034D120  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803501E4 0034D124  EC 61 18 28 */	fsubs f3, f1, f3
/* 803501E8 0034D128  EC 22 00 B2 */	fmuls f1, f2, f2
/* 803501EC 0034D12C  EC 63 08 FA */	fmadds f3, f3, f3, f1
/* 803501F0 0034D130  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803501F4 0034D134  40 81 00 0C */	ble .L_80350200
/* 803501F8 0034D138  FC 00 18 34 */	frsqrte f0, f3
/* 803501FC 0034D13C  EC 60 00 F2 */	fmuls f3, f0, f3
.L_80350200:
/* 80350200 0034D140  C0 22 01 5C */	lfs f1, lbl_8051E4BC@sda21(r2)
/* 80350204 0034D144  C0 1E 03 2C */	lfs f0, 0x32c(r30)
/* 80350208 0034D148  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 8035020C 0034D14C  EF 81 18 3A */	fmadds f28, f1, f0, f3
/* 80350210 0034D150  48 0D 96 91 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80350214 0034D154  38 9E 03 48 */	addi r4, r30, 0x348
/* 80350218 0034D158  4B D9 A0 B5 */	bl PSMTXCopy
/* 8035021C 0034D15C  EC 5F 07 32 */	fmuls f2, f31, f28
/* 80350220 0034D160  C0 7E 03 54 */	lfs f3, 0x354(r30)
/* 80350224 0034D164  EC 3E 07 32 */	fmuls f1, f30, f28
/* 80350228 0034D168  7F E3 FB 78 */	mr r3, r31
/* 8035022C 0034D16C  EC 1D 07 32 */	fmuls f0, f29, f28
/* 80350230 0034D170  38 9E 03 48 */	addi r4, r30, 0x348
/* 80350234 0034D174  EC 43 10 2A */	fadds f2, f3, f2
/* 80350238 0034D178  D0 5E 03 54 */	stfs f2, 0x354(r30)
/* 8035023C 0034D17C  C0 5E 03 64 */	lfs f2, 0x364(r30)
/* 80350240 0034D180  EC 22 08 2A */	fadds f1, f2, f1
/* 80350244 0034D184  D0 3E 03 64 */	stfs f1, 0x364(r30)
/* 80350248 0034D188  C0 3E 03 74 */	lfs f1, 0x374(r30)
/* 8035024C 0034D18C  EC 01 00 2A */	fadds f0, f1, f0
/* 80350250 0034D190  D0 1E 03 74 */	stfs f0, 0x374(r30)
/* 80350254 0034D194  4B E4 F8 55 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 80350258 0034D198  C0 42 01 60 */	lfs f2, lbl_8051E4C0@sda21(r2)
/* 8035025C 0034D19C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80350260 0034D1A0  C0 1E 02 E0 */	lfs f0, 0x2e0(r30)
/* 80350264 0034D1A4  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 80350268 0034D1A8  C0 22 01 30 */	lfs f1, lbl_8051E490@sda21(r2)
/* 8035026C 0034D1AC  38 61 00 50 */	addi r3, r1, 0x50
/* 80350270 0034D1B0  EC 42 00 28 */	fsubs f2, f2, f0
/* 80350274 0034D1B4  C0 02 01 64 */	lfs f0, lbl_8051E4C4@sda21(r2)
/* 80350278 0034D1B8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8035027C 0034D1BC  38 A1 00 38 */	addi r5, r1, 0x38
/* 80350280 0034D1C0  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80350284 0034D1C4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80350288 0034D1C8  48 0D 86 01 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8035028C 0034D1CC  7F E3 FB 78 */	mr r3, r31
/* 80350290 0034D1D0  38 81 00 50 */	addi r4, r1, 0x50
/* 80350294 0034D1D4  4B E4 F8 69 */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_80350298:
/* 80350298 0034D1D8  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 8035029C 0034D1DC  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 803502A0 0034D1E0  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 803502A4 0034D1E4  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 803502A8 0034D1E8  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 803502AC 0034D1EC  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 803502B0 0034D1F0  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 803502B4 0034D1F4  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 803502B8 0034D1F8  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 803502BC 0034D1FC  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 803502C0 0034D200  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 803502C4 0034D204  7C 08 03 A6 */	mtlr r0
/* 803502C8 0034D208  38 21 00 D0 */	addi r1, r1, 0xd0
/* 803502CC 0034D20C  4E 80 00 20 */	blr 
.endfn updateCaptureMatrix__Q34Game13PanModokiBase3ObjFv

.fn doDirectDraw__Q34Game13PanModokiBase3ObjFR8Graphics, global
/* 803502D0 0034D210  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game13PanModokiBase3ObjFR8Graphics

.fn doDebugDraw__Q34Game13PanModokiBase3ObjFR8Graphics, global
/* 803502D4 0034D214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803502D8 0034D218  7C 08 02 A6 */	mflr r0
/* 803502DC 0034D21C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803502E0 0034D220  4B DB 5B 8D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 803502E4 0034D224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803502E8 0034D228  7C 08 03 A6 */	mtlr r0
/* 803502EC 0034D22C  38 21 00 10 */	addi r1, r1, 0x10
/* 803502F0 0034D230  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game13PanModokiBase3ObjFR8Graphics

.fn damageCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart, global
/* 803502F4 0034D234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803502F8 0034D238  7C 08 02 A6 */	mflr r0
/* 803502FC 0034D23C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350300 0034D240  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80350304 0034D244  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80350308 0034D248  41 82 00 08 */	beq .L_80350310
/* 8035030C 0034D24C  4B DB 5D 61 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
.L_80350310:
/* 80350310 0034D250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350314 0034D254  38 60 00 00 */	li r3, 0
/* 80350318 0034D258  7C 08 03 A6 */	mtlr r0
/* 8035031C 0034D25C  38 21 00 10 */	addi r1, r1, 0x10
/* 80350320 0034D260  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart

.fn pressCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80350324 0034D264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350328 0034D268  7C 08 02 A6 */	mflr r0
/* 8035032C 0034D26C  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350330 0034D270  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350334 0034D274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350338 0034D278  7C 7F 1B 78 */	mr r31, r3
/* 8035033C 0034D27C  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80350340 0034D280  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80350344 0034D284  4C 40 13 82 */	cror 2, 0, 2
/* 80350348 0034D288  40 82 00 0C */	bne .L_80350354
/* 8035034C 0034D28C  38 60 00 00 */	li r3, 0
/* 80350350 0034D290  48 00 01 7C */	b .L_803504CC
.L_80350354:
/* 80350354 0034D294  28 04 00 00 */	cmplwi r4, 0
/* 80350358 0034D298  41 82 01 70 */	beq .L_803504C8
/* 8035035C 0034D29C  7C 83 23 78 */	mr r3, r4
/* 80350360 0034D2A0  81 84 00 00 */	lwz r12, 0(r4)
/* 80350364 0034D2A4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80350368 0034D2A8  7D 89 03 A6 */	mtctr r12
/* 8035036C 0034D2AC  4E 80 04 21 */	bctrl 
/* 80350370 0034D2B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350374 0034D2B4  41 82 01 54 */	beq .L_803504C8
/* 80350378 0034D2B8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035037C 0034D2BC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80350380 0034D2C0  40 82 01 40 */	bne .L_803504C0
/* 80350384 0034D2C4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80350388 0034D2C8  88 03 09 99 */	lbz r0, 0x999(r3)
/* 8035038C 0034D2CC  28 00 00 00 */	cmplwi r0, 0
/* 80350390 0034D2D0  41 82 00 1C */	beq .L_803503AC
/* 80350394 0034D2D4  7F E3 FB 78 */	mr r3, r31
/* 80350398 0034D2D8  4B DB 6F 69 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 8035039C 0034D2DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803503A0 0034D2E0  41 82 00 0C */	beq .L_803503AC
/* 803503A4 0034D2E4  38 60 00 00 */	li r3, 0
/* 803503A8 0034D2E8  48 00 01 24 */	b .L_803504CC
.L_803503AC:
/* 803503AC 0034D2EC  7F E3 FB 78 */	mr r3, r31
/* 803503B0 0034D2F0  4B DB 70 45 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803503B4 0034D2F4  2C 03 00 04 */	cmpwi r3, 4
/* 803503B8 0034D2F8  40 80 00 14 */	bge .L_803503CC
/* 803503BC 0034D2FC  2C 03 00 01 */	cmpwi r3, 1
/* 803503C0 0034D300  41 82 00 20 */	beq .L_803503E0
/* 803503C4 0034D304  40 80 00 8C */	bge .L_80350450
/* 803503C8 0034D308  48 00 00 F8 */	b .L_803504C0
.L_803503CC:
/* 803503CC 0034D30C  2C 03 00 09 */	cmpwi r3, 9
/* 803503D0 0034D310  40 80 00 F0 */	bge .L_803504C0
/* 803503D4 0034D314  2C 03 00 07 */	cmpwi r3, 7
/* 803503D8 0034D318  40 80 00 08 */	bge .L_803503E0
/* 803503DC 0034D31C  48 00 00 E4 */	b .L_803504C0
.L_803503E0:
/* 803503E0 0034D320  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803503E4 0034D324  38 00 00 00 */	li r0, 0
/* 803503E8 0034D328  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803503EC 0034D32C  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803503F0 0034D330  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803503F4 0034D334  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803503F8 0034D338  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803503FC 0034D33C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80350400 0034D340  98 1F 02 F1 */	stb r0, 0x2f1(r31)
/* 80350404 0034D344  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80350408 0034D348  88 03 09 99 */	lbz r0, 0x999(r3)
/* 8035040C 0034D34C  28 00 00 00 */	cmplwi r0, 0
/* 80350410 0034D350  41 82 00 18 */	beq .L_80350428
/* 80350414 0034D354  7F E3 FB 78 */	mr r3, r31
/* 80350418 0034D358  4B DB 4E 89 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8035041C 0034D35C  38 00 00 06 */	li r0, 6
/* 80350420 0034D360  90 1F 03 44 */	stw r0, 0x344(r31)
/* 80350424 0034D364  48 00 00 24 */	b .L_80350448
.L_80350428:
/* 80350428 0034D368  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8035042C 0034D36C  7F E4 FB 78 */	mr r4, r31
/* 80350430 0034D370  38 A0 00 06 */	li r5, 6
/* 80350434 0034D374  38 C0 00 00 */	li r6, 0
/* 80350438 0034D378  81 83 00 00 */	lwz r12, 0(r3)
/* 8035043C 0034D37C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80350440 0034D380  7D 89 03 A6 */	mtctr r12
/* 80350444 0034D384  4E 80 04 21 */	bctrl 
.L_80350448:
/* 80350448 0034D388  38 60 00 01 */	li r3, 1
/* 8035044C 0034D38C  48 00 00 80 */	b .L_803504CC
.L_80350450:
/* 80350450 0034D390  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350454 0034D394  38 00 00 00 */	li r0, 0
/* 80350458 0034D398  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8035045C 0034D39C  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80350460 0034D3A0  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80350464 0034D3A4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80350468 0034D3A8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8035046C 0034D3AC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80350470 0034D3B0  98 1F 02 F1 */	stb r0, 0x2f1(r31)
/* 80350474 0034D3B4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80350478 0034D3B8  88 03 09 99 */	lbz r0, 0x999(r3)
/* 8035047C 0034D3BC  28 00 00 00 */	cmplwi r0, 0
/* 80350480 0034D3C0  41 82 00 18 */	beq .L_80350498
/* 80350484 0034D3C4  7F E3 FB 78 */	mr r3, r31
/* 80350488 0034D3C8  4B DB 4E 19 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8035048C 0034D3CC  38 00 00 06 */	li r0, 6
/* 80350490 0034D3D0  90 1F 03 44 */	stw r0, 0x344(r31)
/* 80350494 0034D3D4  48 00 00 24 */	b .L_803504B8
.L_80350498:
/* 80350498 0034D3D8  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 8035049C 0034D3DC  7F E4 FB 78 */	mr r4, r31
/* 803504A0 0034D3E0  38 A0 00 06 */	li r5, 6
/* 803504A4 0034D3E4  38 C0 00 00 */	li r6, 0
/* 803504A8 0034D3E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803504AC 0034D3EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803504B0 0034D3F0  7D 89 03 A6 */	mtctr r12
/* 803504B4 0034D3F4  4E 80 04 21 */	bctrl 
.L_803504B8:
/* 803504B8 0034D3F8  38 60 00 01 */	li r3, 1
/* 803504BC 0034D3FC  48 00 00 10 */	b .L_803504CC
.L_803504C0:
/* 803504C0 0034D400  38 60 00 00 */	li r3, 0
/* 803504C4 0034D404  48 00 00 08 */	b .L_803504CC
.L_803504C8:
/* 803504C8 0034D408  38 60 00 00 */	li r3, 0
.L_803504CC:
/* 803504CC 0034D40C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803504D0 0034D410  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803504D4 0034D414  7C 08 03 A6 */	mtlr r0
/* 803504D8 0034D418  38 21 00 10 */	addi r1, r1, 0x10
/* 803504DC 0034D41C  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart, global
/* 803504E0 0034D420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803504E4 0034D424  7C 08 02 A6 */	mflr r0
/* 803504E8 0034D428  90 01 00 14 */	stw r0, 0x14(r1)
/* 803504EC 0034D42C  81 83 00 00 */	lwz r12, 0(r3)
/* 803504F0 0034D430  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 803504F4 0034D434  7D 89 03 A6 */	mtctr r12
/* 803504F8 0034D438  4E 80 04 21 */	bctrl 
/* 803504FC 0034D43C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350500 0034D440  7C 08 03 A6 */	mtlr r0
/* 80350504 0034D444  38 21 00 10 */	addi r1, r1, 0x10
/* 80350508 0034D448  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart

.fn collisionCallback__Q34Game13PanModokiBase3ObjFRQ24Game9CollEvent, global
/* 8035050C 0034D44C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350510 0034D450  7C 08 02 A6 */	mflr r0
/* 80350514 0034D454  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350518 0034D458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035051C 0034D45C  7C 9F 23 78 */	mr r31, r4
/* 80350520 0034D460  93 C1 00 08 */	stw r30, 8(r1)
/* 80350524 0034D464  7C 7E 1B 78 */	mr r30, r3
/* 80350528 0034D468  80 64 00 00 */	lwz r3, 0(r4)
/* 8035052C 0034D46C  28 03 00 00 */	cmplwi r3, 0
/* 80350530 0034D470  41 82 00 48 */	beq .L_80350578
/* 80350534 0034D474  81 83 00 00 */	lwz r12, 0(r3)
/* 80350538 0034D478  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8035053C 0034D47C  7D 89 03 A6 */	mtctr r12
/* 80350540 0034D480  4E 80 04 21 */	bctrl 
/* 80350544 0034D484  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350548 0034D488  41 82 00 30 */	beq .L_80350578
/* 8035054C 0034D48C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80350550 0034D490  81 83 00 00 */	lwz r12, 0(r3)
/* 80350554 0034D494  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80350558 0034D498  7D 89 03 A6 */	mtctr r12
/* 8035055C 0034D49C  4E 80 04 21 */	bctrl 
/* 80350560 0034D4A0  2C 03 00 53 */	cmpwi r3, 0x53
/* 80350564 0034D4A4  40 82 00 14 */	bne .L_80350578
/* 80350568 0034D4A8  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8035056C 0034D4AC  D0 1E 01 1C */	stfs f0, 0x11c(r30)
/* 80350570 0034D4B0  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80350574 0034D4B4  D0 1E 01 24 */	stfs f0, 0x124(r30)
.L_80350578:
/* 80350578 0034D4B8  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8035057C 0034D4BC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80350580 0034D4C0  41 82 00 14 */	beq .L_80350594
/* 80350584 0034D4C4  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350588 0034D4C8  D0 1E 01 1C */	stfs f0, 0x11c(r30)
/* 8035058C 0034D4CC  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80350590 0034D4D0  D0 1E 01 24 */	stfs f0, 0x124(r30)
.L_80350594:
/* 80350594 0034D4D4  7F C3 F3 78 */	mr r3, r30
/* 80350598 0034D4D8  7F E4 FB 78 */	mr r4, r31
/* 8035059C 0034D4DC  4B DB 60 75 */	bl collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
/* 803505A0 0034D4E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803505A4 0034D4E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803505A8 0034D4E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803505AC 0034D4EC  7C 08 03 A6 */	mtlr r0
/* 803505B0 0034D4F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803505B4 0034D4F4  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game13PanModokiBase3ObjFRQ24Game9CollEvent

.fn outWaterCallback__Q34Game13PanModokiBase3ObjFv, global
/* 803505B8 0034D4F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803505BC 0034D4FC  7C 08 02 A6 */	mflr r0
/* 803505C0 0034D500  90 01 00 14 */	stw r0, 0x14(r1)
/* 803505C4 0034D504  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803505C8 0034D508  7C 7F 1B 78 */	mr r31, r3
/* 803505CC 0034D50C  4B DB 37 61 */	bl outWaterCallback__Q24Game9EnemyBaseFv
/* 803505D0 0034D510  7F E3 FB 78 */	mr r3, r31
/* 803505D4 0034D514  4B DB 6E 21 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803505D8 0034D518  2C 03 00 03 */	cmpwi r3, 3
/* 803505DC 0034D51C  40 82 00 0C */	bne .L_803505E8
/* 803505E0 0034D520  7F E3 FB 78 */	mr r3, r31
/* 803505E4 0034D524  48 00 31 E5 */	bl createPulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
.L_803505E8:
/* 803505E8 0034D528  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803505EC 0034D52C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803505F0 0034D530  7C 08 03 A6 */	mtlr r0
/* 803505F4 0034D534  38 21 00 10 */	addi r1, r1, 0x10
/* 803505F8 0034D538  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game13PanModokiBase3ObjFv

.fn inWaterCallback__Q34Game13PanModokiBase3ObjFPQ24Game8WaterBox, global
/* 803505FC 0034D53C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350600 0034D540  7C 08 02 A6 */	mflr r0
/* 80350604 0034D544  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350608 0034D548  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035060C 0034D54C  7C 7F 1B 78 */	mr r31, r3
/* 80350610 0034D550  4B DB 38 85 */	bl inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
/* 80350614 0034D554  7F E3 FB 78 */	mr r3, r31
/* 80350618 0034D558  48 00 32 35 */	bl fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
/* 8035061C 0034D55C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350620 0034D560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350624 0034D564  7C 08 03 A6 */	mtlr r0
/* 80350628 0034D568  38 21 00 10 */	addi r1, r1, 0x10
/* 8035062C 0034D56C  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game13PanModokiBase3ObjFPQ24Game8WaterBox

.fn bounceCallback__Q34Game13PanModokiBase3ObjFPQ23Sys8Triangle, global
/* 80350630 0034D570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350634 0034D574  7C 08 02 A6 */	mflr r0
/* 80350638 0034D578  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035063C 0034D57C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350640 0034D580  7C 7F 1B 78 */	mr r31, r3
/* 80350644 0034D584  4B DB 6D B1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80350648 0034D588  2C 03 00 09 */	cmpwi r3, 9
/* 8035064C 0034D58C  40 82 00 24 */	bne .L_80350670
/* 80350650 0034D590  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 80350654 0034D594  7F E4 FB 78 */	mr r4, r31
/* 80350658 0034D598  38 A0 00 06 */	li r5, 6
/* 8035065C 0034D59C  38 C0 00 00 */	li r6, 0
/* 80350660 0034D5A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80350664 0034D5A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80350668 0034D5A8  7D 89 03 A6 */	mtctr r12
/* 8035066C 0034D5AC  4E 80 04 21 */	bctrl 
.L_80350670:
/* 80350670 0034D5B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350674 0034D5B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350678 0034D5B8  7C 08 03 A6 */	mtlr r0
/* 8035067C 0034D5BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80350680 0034D5C0  4E 80 00 20 */	blr 
.endfn bounceCallback__Q34Game13PanModokiBase3ObjFPQ23Sys8Triangle

.fn damageRumble__Q34Game13PanModokiBase3ObjFv, global
/* 80350684 0034D5C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350688 0034D5C8  7C 08 02 A6 */	mflr r0
/* 8035068C 0034D5CC  38 80 00 03 */	li r4, 3
/* 80350690 0034D5D0  38 C0 00 02 */	li r6, 2
/* 80350694 0034D5D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350698 0034D5D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035069C 0034D5DC  7C 7F 1B 78 */	mr r31, r3
/* 803506A0 0034D5E0  38 BF 01 8C */	addi r5, r31, 0x18c
/* 803506A4 0034D5E4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803506A8 0034D5E8  4B F0 1B 95 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803506AC 0034D5EC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803506B0 0034D5F0  38 BF 01 8C */	addi r5, r31, 0x18c
/* 803506B4 0034D5F4  38 80 00 0B */	li r4, 0xb
/* 803506B8 0034D5F8  38 C0 00 02 */	li r6, 2
/* 803506BC 0034D5FC  4B F0 30 C5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803506C0 0034D600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803506C4 0034D604  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803506C8 0034D608  7C 08 03 A6 */	mtlr r0
/* 803506CC 0034D60C  38 21 00 10 */	addi r1, r1, 0x10
/* 803506D0 0034D610  4E 80 00 20 */	blr 
.endfn damageRumble__Q34Game13PanModokiBase3ObjFv

.fn doSimulation__Q34Game13PanModokiBase3ObjFf, global
/* 803506D4 0034D614  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803506D8 0034D618  7C 08 02 A6 */	mflr r0
/* 803506DC 0034D61C  90 01 00 54 */	stw r0, 0x54(r1)
/* 803506E0 0034D620  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803506E4 0034D624  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803506E8 0034D628  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803506EC 0034D62C  7C 7F 1B 78 */	mr r31, r3
/* 803506F0 0034D630  FF E0 08 90 */	fmr f31, f1
/* 803506F4 0034D634  4B E4 EE 81 */	bl isStickTo__Q24Game8CreatureFv
/* 803506F8 0034D638  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803506FC 0034D63C  41 82 00 14 */	beq .L_80350710
/* 80350700 0034D640  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350704 0034D644  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 80350708 0034D648  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8035070C 0034D64C  D0 1F 01 24 */	stfs f0, 0x124(r31)
.L_80350710:
/* 80350710 0034D650  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 80350714 0034D654  38 03 FF FF */	addi r0, r3, -1
/* 80350718 0034D658  90 1F 03 04 */	stw r0, 0x304(r31)
/* 8035071C 0034D65C  80 1F 03 04 */	lwz r0, 0x304(r31)
/* 80350720 0034D660  2C 00 00 00 */	cmpwi r0, 0
/* 80350724 0034D664  40 80 00 0C */	bge .L_80350730
/* 80350728 0034D668  38 00 00 00 */	li r0, 0
/* 8035072C 0034D66C  90 1F 03 04 */	stw r0, 0x304(r31)
.L_80350730:
/* 80350730 0034D670  FC 20 F8 90 */	fmr f1, f31
/* 80350734 0034D674  7F E3 FB 78 */	mr r3, r31
/* 80350738 0034D678  4B DB 43 21 */	bl doSimulation__Q24Game9EnemyBaseFf
/* 8035073C 0034D67C  7F E3 FB 78 */	mr r3, r31
/* 80350740 0034D680  4B DB 6C B5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80350744 0034D684  7F E3 FB 78 */	mr r3, r31
/* 80350748 0034D688  4B DB 2F 61 */	bl isCullingOff__Q24Game9EnemyBaseFv
/* 8035074C 0034D68C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350750 0034D690  41 82 01 84 */	beq .L_803508D4
/* 80350754 0034D694  7F E3 FB 78 */	mr r3, r31
/* 80350758 0034D698  4B E4 EE 1D */	bl isStickTo__Q24Game8CreatureFv
/* 8035075C 0034D69C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350760 0034D6A0  41 82 01 74 */	beq .L_803508D4
/* 80350764 0034D6A4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80350768 0034D6A8  38 60 00 00 */	li r3, 0
/* 8035076C 0034D6AC  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 80350770 0034D6B0  40 82 00 0C */	bne .L_8035077C
/* 80350774 0034D6B4  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 80350778 0034D6B8  41 82 00 08 */	beq .L_80350780
.L_8035077C:
/* 8035077C 0034D6BC  38 60 00 01 */	li r3, 1
.L_80350780:
/* 80350780 0034D6C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350784 0034D6C4  40 82 01 50 */	bne .L_803508D4
/* 80350788 0034D6C8  7F E3 FB 78 */	mr r3, r31
/* 8035078C 0034D6CC  48 00 14 79 */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 80350790 0034D6D0  28 03 00 00 */	cmplwi r3, 0
/* 80350794 0034D6D4  41 82 01 40 */	beq .L_803508D4
/* 80350798 0034D6D8  7F E3 FB 78 */	mr r3, r31
/* 8035079C 0034D6DC  38 81 00 14 */	addi r4, r1, 0x14
/* 803507A0 0034D6E0  48 00 2C 8D */	bl "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"
/* 803507A4 0034D6E4  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 803507A8 0034D6E8  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803507AC 0034D6EC  FC 20 18 90 */	fmr f1, f3
/* 803507B0 0034D6F0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803507B4 0034D6F4  40 80 00 08 */	bge .L_803507BC
/* 803507B8 0034D6F8  FC 20 18 50 */	fneg f1, f3
.L_803507BC:
/* 803507BC 0034D6FC  C0 42 01 68 */	lfs f2, lbl_8051E4C8@sda21(r2)
/* 803507C0 0034D700  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803507C4 0034D704  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803507C8 0034D708  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 803507CC 0034D70C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 803507D0 0034D710  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803507D4 0034D714  FC 00 08 1E */	fctiwz f0, f1
/* 803507D8 0034D718  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803507DC 0034D71C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803507E0 0034D720  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803507E4 0034D724  7C 64 02 14 */	add r3, r4, r0
/* 803507E8 0034D728  C0 83 00 04 */	lfs f4, 4(r3)
/* 803507EC 0034D72C  40 80 00 28 */	bge .L_80350814
/* 803507F0 0034D730  C0 02 01 6C */	lfs f0, lbl_8051E4CC@sda21(r2)
/* 803507F4 0034D734  EC 03 00 32 */	fmuls f0, f3, f0
/* 803507F8 0034D738  FC 00 00 1E */	fctiwz f0, f0
/* 803507FC 0034D73C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80350800 0034D740  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80350804 0034D744  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80350808 0034D748  7C 04 04 2E */	lfsx f0, r4, r0
/* 8035080C 0034D74C  FC 60 00 50 */	fneg f3, f0
/* 80350810 0034D750  48 00 00 1C */	b .L_8035082C
.L_80350814:
/* 80350814 0034D754  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80350818 0034D758  FC 00 00 1E */	fctiwz f0, f0
/* 8035081C 0034D75C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80350820 0034D760  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80350824 0034D764  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80350828 0034D768  7C 64 04 2E */	lfsx f3, r4, r0
.L_8035082C:
/* 8035082C 0034D76C  C0 5F 03 2C */	lfs f2, 0x32c(r31)
/* 80350830 0034D770  38 81 00 08 */	addi r4, r1, 8
/* 80350834 0034D774  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80350838 0034D778  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8035083C 0034D77C  EC 63 08 BC */	fnmsubs f3, f3, f2, f1
/* 80350840 0034D780  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80350844 0034D784  EC 44 00 BC */	fnmsubs f2, f4, f2, f0
/* 80350848 0034D788  C0 02 01 44 */	lfs f0, lbl_8051E4A4@sda21(r2)
/* 8035084C 0034D78C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80350850 0034D790  EC 01 00 2A */	fadds f0, f1, f0
/* 80350854 0034D794  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80350858 0034D798  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8035085C 0034D79C  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80350860 0034D7A0  D0 61 00 08 */	stfs f3, 8(r1)
/* 80350864 0034D7A4  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 80350868 0034D7A8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8035086C 0034D7AC  81 83 00 04 */	lwz r12, 4(r3)
/* 80350870 0034D7B0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80350874 0034D7B4  7D 89 03 A6 */	mtctr r12
/* 80350878 0034D7B8  4E 80 04 21 */	bctrl 
/* 8035087C 0034D7BC  D0 3F 03 34 */	stfs f1, 0x334(r31)
/* 80350880 0034D7C0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80350884 0034D7C4  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80350888 0034D7C8  C0 03 09 9C */	lfs f0, 0x99c(r3)
/* 8035088C 0034D7CC  EC 02 00 28 */	fsubs f0, f2, f0
/* 80350890 0034D7D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80350894 0034D7D4  40 80 00 08 */	bge .L_8035089C
/* 80350898 0034D7D8  FC 20 00 90 */	fmr f1, f0
.L_8035089C:
/* 8035089C 0034D7DC  C0 1F 03 34 */	lfs f0, 0x334(r31)
/* 803508A0 0034D7E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803508A4 0034D7E4  40 80 00 10 */	bge .L_803508B4
/* 803508A8 0034D7E8  EC 02 00 2A */	fadds f0, f2, f0
/* 803508AC 0034D7EC  C0 22 01 70 */	lfs f1, lbl_8051E4D0@sda21(r2)
/* 803508B0 0034D7F0  EC 21 00 32 */	fmuls f1, f1, f0
.L_803508B4:
/* 803508B4 0034D7F4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803508B8 0034D7F8  D0 3F 03 34 */	stfs f1, 0x334(r31)
/* 803508BC 0034D7FC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803508C0 0034D800  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 803508C4 0034D804  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803508C8 0034D808  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 803508CC 0034D80C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803508D0 0034D810  D0 1F 01 94 */	stfs f0, 0x194(r31)
.L_803508D4:
/* 803508D4 0034D814  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803508D8 0034D818  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803508DC 0034D81C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803508E0 0034D820  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803508E4 0034D824  7C 08 03 A6 */	mtlr r0
/* 803508E8 0034D828  38 21 00 50 */	addi r1, r1, 0x50
/* 803508EC 0034D82C  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game13PanModokiBase3ObjFf

.fn getShadowParam__Q34Game13PanModokiBase3ObjFRQ24Game11ShadowParam, global
/* 803508F0 0034D830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803508F4 0034D834  7C 08 02 A6 */	mflr r0
/* 803508F8 0034D838  90 01 00 14 */	stw r0, 0x14(r1)
/* 803508FC 0034D83C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350900 0034D840  7C 9F 23 78 */	mr r31, r4
/* 80350904 0034D844  93 C1 00 08 */	stw r30, 8(r1)
/* 80350908 0034D848  7C 7E 1B 78 */	mr r30, r3
/* 8035090C 0034D84C  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 80350910 0034D850  48 0D 8F 91 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80350914 0034D854  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80350918 0034D858  C0 82 01 74 */	lfs f4, lbl_8051E4D4@sda21(r2)
/* 8035091C 0034D85C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80350920 0034D860  C0 42 01 30 */	lfs f2, lbl_8051E490@sda21(r2)
/* 80350924 0034D864  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80350928 0034D868  C0 22 01 54 */	lfs f1, lbl_8051E4B4@sda21(r2)
/* 8035092C 0034D86C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80350930 0034D870  C0 02 01 78 */	lfs f0, lbl_8051E4D8@sda21(r2)
/* 80350934 0034D874  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80350938 0034D878  D0 7F 00 08 */	stfs f3, 8(r31)
/* 8035093C 0034D87C  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 80350940 0034D880  EC 64 18 2A */	fadds f3, f4, f3
/* 80350944 0034D884  D0 7F 00 04 */	stfs f3, 4(r31)
/* 80350948 0034D888  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 8035094C 0034D88C  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 80350950 0034D890  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 80350954 0034D894  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80350958 0034D898  C0 1E 03 30 */	lfs f0, 0x330(r30)
/* 8035095C 0034D89C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80350960 0034D8A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350964 0034D8A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80350968 0034D8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035096C 0034D8AC  7C 08 03 A6 */	mtlr r0
/* 80350970 0034D8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80350974 0034D8B4  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game13PanModokiBase3ObjFRQ24Game11ShadowParam

.fn needShadow__Q34Game13PanModokiBase3ObjFv, global
/* 80350978 0034D8B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035097C 0034D8BC  7C 08 02 A6 */	mflr r0
/* 80350980 0034D8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350984 0034D8C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350988 0034D8C8  7C 7F 1B 78 */	mr r31, r3
/* 8035098C 0034D8CC  4B DB 6A 85 */	bl needShadow__Q24Game9EnemyBaseFv
/* 80350990 0034D8D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350994 0034D8D4  40 82 00 0C */	bne .L_803509A0
/* 80350998 0034D8D8  38 60 00 00 */	li r3, 0
/* 8035099C 0034D8DC  48 00 00 20 */	b .L_803509BC
.L_803509A0:
/* 803509A0 0034D8E0  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 803509A4 0034D8E4  38 60 00 00 */	li r3, 0
/* 803509A8 0034D8E8  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 803509AC 0034D8EC  40 82 00 10 */	bne .L_803509BC
/* 803509B0 0034D8F0  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 803509B4 0034D8F4  40 82 00 08 */	bne .L_803509BC
/* 803509B8 0034D8F8  38 60 00 01 */	li r3, 1
.L_803509BC:
/* 803509BC 0034D8FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803509C0 0034D900  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803509C4 0034D904  7C 08 03 A6 */	mtlr r0
/* 803509C8 0034D908  38 21 00 10 */	addi r1, r1, 0x10
/* 803509CC 0034D90C  4E 80 00 20 */	blr 
.endfn needShadow__Q34Game13PanModokiBase3ObjFv

.fn startCarcassMotion__Q34Game13PanModokiBase3ObjFv, global
/* 803509D0 0034D910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803509D4 0034D914  7C 08 02 A6 */	mflr r0
/* 803509D8 0034D918  38 80 00 07 */	li r4, 7
/* 803509DC 0034D91C  38 A0 00 00 */	li r5, 0
/* 803509E0 0034D920  90 01 00 14 */	stw r0, 0x14(r1)
/* 803509E4 0034D924  4B DB 46 21 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803509E8 0034D928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803509EC 0034D92C  7C 08 03 A6 */	mtlr r0
/* 803509F0 0034D930  38 21 00 10 */	addi r1, r1, 0x10
/* 803509F4 0034D934  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game13PanModokiBase3ObjFv

.fn initMouthSlots__Q34Game13PanModokiBase3ObjFv, global
/* 803509F8 0034D938  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803509FC 0034D93C  7C 08 02 A6 */	mflr r0
/* 80350A00 0034D940  90 01 00 24 */	stw r0, 0x24(r1)
/* 80350A04 0034D944  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80350A08 0034D948  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80350A0C 0034D94C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350A10 0034D950  93 C1 00 08 */	stw r30, 8(r1)
/* 80350A14 0034D954  7C 7E 1B 78 */	mr r30, r3
/* 80350A18 0034D958  38 80 00 01 */	li r4, 1
/* 80350A1C 0034D95C  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 80350A20 0034D960  4B DE 7B 39 */	bl alloc__10MouthSlotsFi
/* 80350A24 0034D964  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80350A28 0034D968  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 80350A2C 0034D96C  38 80 00 00 */	li r4, 0
/* 80350A30 0034D970  38 C2 01 3C */	addi r6, r2, lbl_8051E49C@sda21
/* 80350A34 0034D974  4B DE 7C 5D */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80350A38 0034D978  C3 E2 01 7C */	lfs f31, lbl_8051E4DC@sda21(r2)
/* 80350A3C 0034D97C  3B E0 00 00 */	li r31, 0
/* 80350A40 0034D980  48 00 00 18 */	b .L_80350A58
.L_80350A44:
/* 80350A44 0034D984  7F E4 FB 78 */	mr r4, r31
/* 80350A48 0034D988  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 80350A4C 0034D98C  4B DE 7D 2D */	bl getSlot__10MouthSlotsFi
/* 80350A50 0034D990  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 80350A54 0034D994  3B FF 00 01 */	addi r31, r31, 1
.L_80350A58:
/* 80350A58 0034D998  80 1E 02 CC */	lwz r0, 0x2cc(r30)
/* 80350A5C 0034D99C  7C 1F 00 00 */	cmpw r31, r0
/* 80350A60 0034D9A0  41 80 FF E4 */	blt .L_80350A44
/* 80350A64 0034D9A4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80350A68 0034D9A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80350A6C 0034D9AC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80350A70 0034D9B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350A74 0034D9B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80350A78 0034D9B8  7C 08 03 A6 */	mtlr r0
/* 80350A7C 0034D9BC  38 21 00 20 */	addi r1, r1, 0x20
/* 80350A80 0034D9C0  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game13PanModokiBase3ObjFv

.fn onKill__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureKillArg, global
/* 80350A84 0034D9C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350A88 0034D9C8  7C 08 02 A6 */	mflr r0
/* 80350A8C 0034D9CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350A90 0034D9D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350A94 0034D9D4  7C 7F 1B 78 */	mr r31, r3
/* 80350A98 0034D9D8  4B DB 14 51 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 80350A9C 0034D9DC  7F E3 FB 78 */	mr r3, r31
/* 80350AA0 0034D9E0  48 00 2D DD */	bl throwUpEatItem__Q34Game13PanModokiBase3ObjFv
/* 80350AA4 0034D9E4  7F E3 FB 78 */	mr r3, r31
/* 80350AA8 0034D9E8  48 00 25 FD */	bl releasePathFinder__Q34Game13PanModokiBase3ObjFv
/* 80350AAC 0034D9EC  7F E3 FB 78 */	mr r3, r31
/* 80350AB0 0034D9F0  48 00 26 39 */	bl killNest__Q34Game13PanModokiBase3ObjFv
/* 80350AB4 0034D9F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350AB8 0034D9F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350ABC 0034D9FC  7C 08 03 A6 */	mtlr r0
/* 80350AC0 0034DA00  38 21 00 10 */	addi r1, r1, 0x10
/* 80350AC4 0034DA04  4E 80 00 20 */	blr 
.endfn onKill__Q34Game13PanModokiBase3ObjFPQ24Game15CreatureKillArg

.fn doStartMovie__Q34Game13PanModokiBase3ObjFv, global
/* 80350AC8 0034DA08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350ACC 0034DA0C  7C 08 02 A6 */	mflr r0
/* 80350AD0 0034DA10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350AD4 0034DA14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350AD8 0034DA18  7C 7F 1B 78 */	mr r31, r3
/* 80350ADC 0034DA1C  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 80350AE0 0034DA20  81 83 00 00 */	lwz r12, 0(r3)
/* 80350AE4 0034DA24  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80350AE8 0034DA28  7D 89 03 A6 */	mtctr r12
/* 80350AEC 0034DA2C  4E 80 04 21 */	bctrl 
/* 80350AF0 0034DA30  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 80350AF4 0034DA34  81 83 00 00 */	lwz r12, 0(r3)
/* 80350AF8 0034DA38  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80350AFC 0034DA3C  7D 89 03 A6 */	mtctr r12
/* 80350B00 0034DA40  4E 80 04 21 */	bctrl 
/* 80350B04 0034DA44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350B08 0034DA48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350B0C 0034DA4C  7C 08 03 A6 */	mtlr r0
/* 80350B10 0034DA50  38 21 00 10 */	addi r1, r1, 0x10
/* 80350B14 0034DA54  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game13PanModokiBase3ObjFv

.fn doEndMovie__Q34Game13PanModokiBase3ObjFv, global
/* 80350B18 0034DA58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350B1C 0034DA5C  7C 08 02 A6 */	mflr r0
/* 80350B20 0034DA60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350B24 0034DA64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350B28 0034DA68  7C 7F 1B 78 */	mr r31, r3
/* 80350B2C 0034DA6C  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 80350B30 0034DA70  81 83 00 00 */	lwz r12, 0(r3)
/* 80350B34 0034DA74  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80350B38 0034DA78  7D 89 03 A6 */	mtctr r12
/* 80350B3C 0034DA7C  4E 80 04 21 */	bctrl 
/* 80350B40 0034DA80  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 80350B44 0034DA84  81 83 00 00 */	lwz r12, 0(r3)
/* 80350B48 0034DA88  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80350B4C 0034DA8C  7D 89 03 A6 */	mtctr r12
/* 80350B50 0034DA90  4E 80 04 21 */	bctrl 
/* 80350B54 0034DA94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350B58 0034DA98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350B5C 0034DA9C  7C 08 03 A6 */	mtlr r0
/* 80350B60 0034DAA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80350B64 0034DAA4  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game13PanModokiBase3ObjFv

.fn doStartStoneState__Q34Game13PanModokiBase3ObjFv, global
/* 80350B68 0034DAA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350B6C 0034DAAC  7C 08 02 A6 */	mflr r0
/* 80350B70 0034DAB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350B74 0034DAB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350B78 0034DAB8  7C 7F 1B 78 */	mr r31, r3
/* 80350B7C 0034DABC  4B DB 23 79 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 80350B80 0034DAC0  3C 80 62 6F */	lis r4, 0x626F6479@ha
/* 80350B84 0034DAC4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80350B88 0034DAC8  38 84 64 79 */	addi r4, r4, 0x626F6479@l
/* 80350B8C 0034DACC  4B DE 52 B9 */	bl getCollPart__8CollTreeFUl
/* 80350B90 0034DAD0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 80350B94 0034DAD4  38 63 00 3C */	addi r3, r3, 0x3c
/* 80350B98 0034DAD8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 80350B9C 0034DADC  48 0C 28 69 */	bl __as__4ID32FUl
/* 80350BA0 0034DAE0  7F E3 FB 78 */	mr r3, r31
/* 80350BA4 0034DAE4  48 00 10 C9 */	bl releaseCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 80350BA8 0034DAE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350BAC 0034DAEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350BB0 0034DAF0  7C 08 03 A6 */	mtlr r0
/* 80350BB4 0034DAF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80350BB8 0034DAF8  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game13PanModokiBase3ObjFv

.fn doFinishStoneState__Q34Game13PanModokiBase3ObjFv, global
/* 80350BBC 0034DAFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350BC0 0034DB00  7C 08 02 A6 */	mflr r0
/* 80350BC4 0034DB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350BC8 0034DB08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350BCC 0034DB0C  7C 7F 1B 78 */	mr r31, r3
/* 80350BD0 0034DB10  4B DB 23 39 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 80350BD4 0034DB14  3C 80 62 6F */	lis r4, 0x626F6479@ha
/* 80350BD8 0034DB18  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80350BDC 0034DB1C  38 84 64 79 */	addi r4, r4, 0x626F6479@l
/* 80350BE0 0034DB20  4B DE 52 65 */	bl getCollPart__8CollTreeFUl
/* 80350BE4 0034DB24  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80350BE8 0034DB28  38 63 00 3C */	addi r3, r3, 0x3c
/* 80350BEC 0034DB2C  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80350BF0 0034DB30  48 0C 28 15 */	bl __as__4ID32FUl
/* 80350BF4 0034DB34  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80350BF8 0034DB38  7F E3 FB 78 */	mr r3, r31
/* 80350BFC 0034DB3C  C0 82 01 80 */	lfs f4, lbl_8051E4E0@sda21(r2)
/* 80350C00 0034DB40  38 80 00 00 */	li r4, 0
/* 80350C04 0034DB44  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 80350C08 0034DB48  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80350C0C 0034DB4C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80350C10 0034DB50  4B DC 25 0D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80350C14 0034DB54  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350C18 0034DB58  7F E3 FB 78 */	mr r3, r31
/* 80350C1C 0034DB5C  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80350C20 0034DB60  4B DB 67 D5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80350C24 0034DB64  2C 03 00 03 */	cmpwi r3, 3
/* 80350C28 0034DB68  41 82 00 0C */	beq .L_80350C34
/* 80350C2C 0034DB6C  2C 03 00 02 */	cmpwi r3, 2
/* 80350C30 0034DB70  40 82 00 24 */	bne .L_80350C54
.L_80350C34:
/* 80350C34 0034DB74  80 7F 03 80 */	lwz r3, 0x380(r31)
/* 80350C38 0034DB78  7F E4 FB 78 */	mr r4, r31
/* 80350C3C 0034DB7C  38 A0 00 07 */	li r5, 7
/* 80350C40 0034DB80  38 C0 00 00 */	li r6, 0
/* 80350C44 0034DB84  81 83 00 00 */	lwz r12, 0(r3)
/* 80350C48 0034DB88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80350C4C 0034DB8C  7D 89 03 A6 */	mtctr r12
/* 80350C50 0034DB90  4E 80 04 21 */	bctrl 
.L_80350C54:
/* 80350C54 0034DB94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350C58 0034DB98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350C5C 0034DB9C  7C 08 03 A6 */	mtlr r0
/* 80350C60 0034DBA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80350C64 0034DBA4  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game13PanModokiBase3ObjFv

.fn initWalkSmokeEffect__Q34Game13PanModokiBase3ObjFv, global
/* 80350C68 0034DBA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80350C6C 0034DBAC  7C 08 02 A6 */	mflr r0
/* 80350C70 0034DBB0  38 80 00 02 */	li r4, 2
/* 80350C74 0034DBB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80350C78 0034DBB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80350C7C 0034DBBC  7C 7F 1B 78 */	mr r31, r3
/* 80350C80 0034DBC0  38 7F 02 F4 */	addi r3, r31, 0x2f4
/* 80350C84 0034DBC4  4B DD 96 E1 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 80350C88 0034DBC8  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80350C8C 0034DBCC  38 7F 02 F4 */	addi r3, r31, 0x2f4
/* 80350C90 0034DBD0  C0 22 01 74 */	lfs f1, lbl_8051E4D4@sda21(r2)
/* 80350C94 0034DBD4  38 80 00 00 */	li r4, 0
/* 80350C98 0034DBD8  38 C2 01 84 */	addi r6, r2, lbl_8051E4E4@sda21
/* 80350C9C 0034DBDC  4B DD 99 45 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80350CA0 0034DBE0  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80350CA4 0034DBE4  38 7F 02 F4 */	addi r3, r31, 0x2f4
/* 80350CA8 0034DBE8  C0 22 01 74 */	lfs f1, lbl_8051E4D4@sda21(r2)
/* 80350CAC 0034DBEC  38 80 00 01 */	li r4, 1
/* 80350CB0 0034DBF0  38 C2 01 8C */	addi r6, r2, lbl_8051E4EC@sda21
/* 80350CB4 0034DBF4  4B DD 99 2D */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80350CB8 0034DBF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80350CBC 0034DBFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80350CC0 0034DC00  7C 08 03 A6 */	mtlr r0
/* 80350CC4 0034DC04  38 21 00 10 */	addi r1, r1, 0x10
/* 80350CC8 0034DC08  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game13PanModokiBase3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game13PanModokiBase3ObjFv, global
/* 80350CCC 0034DC0C  38 63 02 F4 */	addi r3, r3, 0x2f4
/* 80350CD0 0034DC10  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game13PanModokiBase3ObjFv

.fn findNextRoutePoint__Q34Game13PanModokiBase3ObjFb, global
/* 80350CD4 0034DC14  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80350CD8 0034DC18  7C 08 02 A6 */	mflr r0
/* 80350CDC 0034DC1C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80350CE0 0034DC20  38 00 00 00 */	li r0, 0
/* 80350CE4 0034DC24  BF 61 00 6C */	stmw r27, 0x6c(r1)
/* 80350CE8 0034DC28  7C 7C 1B 78 */	mr r28, r3
/* 80350CEC 0034DC2C  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 80350CF0 0034DC30  83 E5 00 08 */	lwz r31, 8(r5)
/* 80350CF4 0034DC34  98 03 03 1C */	stb r0, 0x31c(r3)
/* 80350CF8 0034DC38  80 03 03 04 */	lwz r0, 0x304(r3)
/* 80350CFC 0034DC3C  2C 00 00 00 */	cmpwi r0, 0
/* 80350D00 0034DC40  40 81 02 C4 */	ble .L_80350FC4
/* 80350D04 0034DC44  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80350D08 0034DC48  41 82 02 BC */	beq .L_80350FC4
/* 80350D0C 0034DC4C  A8 1C 02 EA */	lha r0, 0x2ea(r28)
/* 80350D10 0034DC50  A8 7C 02 E8 */	lha r3, 0x2e8(r28)
/* 80350D14 0034DC54  7C 00 18 00 */	cmpw r0, r3
/* 80350D18 0034DC58  40 82 00 2C */	bne .L_80350D44
/* 80350D1C 0034DC5C  A8 1C 02 E6 */	lha r0, 0x2e6(r28)
/* 80350D20 0034DC60  7C 03 00 00 */	cmpw r3, r0
/* 80350D24 0034DC64  40 82 00 20 */	bne .L_80350D44
/* 80350D28 0034DC68  C0 1C 01 98 */	lfs f0, 0x198(r28)
/* 80350D2C 0034DC6C  D0 1C 02 BC */	stfs f0, 0x2bc(r28)
/* 80350D30 0034DC70  C0 1C 01 9C */	lfs f0, 0x19c(r28)
/* 80350D34 0034DC74  D0 1C 02 C0 */	stfs f0, 0x2c0(r28)
/* 80350D38 0034DC78  C0 1C 01 A0 */	lfs f0, 0x1a0(r28)
/* 80350D3C 0034DC7C  D0 1C 02 C4 */	stfs f0, 0x2c4(r28)
/* 80350D40 0034DC80  48 00 04 34 */	b .L_80351174
.L_80350D44:
/* 80350D44 0034DC84  38 A0 00 00 */	li r5, 0
/* 80350D48 0034DC88  38 00 FF FF */	li r0, -1
/* 80350D4C 0034DC8C  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80350D50 0034DC90  7F E3 FB 78 */	mr r3, r31
/* 80350D54 0034DC94  38 81 00 24 */	addi r4, r1, 0x24
/* 80350D58 0034DC98  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 80350D5C 0034DC9C  98 A1 00 30 */	stb r5, 0x30(r1)
/* 80350D60 0034DCA0  B0 01 00 38 */	sth r0, 0x38(r1)
/* 80350D64 0034DCA4  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80350D68 0034DCA8  C0 1C 01 8C */	lfs f0, 0x18c(r28)
/* 80350D6C 0034DCAC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80350D70 0034DCB0  C0 1C 01 90 */	lfs f0, 0x190(r28)
/* 80350D74 0034DCB4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80350D78 0034DCB8  C0 1C 01 94 */	lfs f0, 0x194(r28)
/* 80350D7C 0034DCBC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80350D80 0034DCC0  4B E2 25 ED */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 80350D84 0034DCC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80350D88 0034DCC8  41 82 02 3C */	beq .L_80350FC4
/* 80350D8C 0034DCCC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80350D90 0034DCD0  AB DC 02 E8 */	lha r30, 0x2e8(r28)
/* 80350D94 0034DCD4  88 04 00 34 */	lbz r0, 0x34(r4)
/* 80350D98 0034DCD8  AB BC 02 EA */	lha r29, 0x2ea(r28)
/* 80350D9C 0034DCDC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80350DA0 0034DCE0  40 82 00 AC */	bne .L_80350E4C
/* 80350DA4 0034DCE4  7F E3 FB 78 */	mr r3, r31
/* 80350DA8 0034DCE8  A8 84 00 36 */	lha r4, 0x36(r4)
/* 80350DAC 0034DCEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80350DB0 0034DCF0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80350DB4 0034DCF4  7D 89 03 A6 */	mtctr r12
/* 80350DB8 0034DCF8  4E 80 04 21 */	bctrl 
/* 80350DBC 0034DCFC  A8 03 00 38 */	lha r0, 0x38(r3)
/* 80350DC0 0034DD00  2C 00 00 01 */	cmpwi r0, 1
/* 80350DC4 0034DD04  40 82 00 2C */	bne .L_80350DF0
/* 80350DC8 0034DD08  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80350DCC 0034DD0C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80350DD0 0034DD10  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80350DD4 0034DD14  40 82 00 1C */	bne .L_80350DF0
/* 80350DD8 0034DD18  A8 1C 02 E8 */	lha r0, 0x2e8(r28)
/* 80350DDC 0034DD1C  B0 1C 02 EA */	sth r0, 0x2ea(r28)
/* 80350DE0 0034DD20  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80350DE4 0034DD24  A8 03 00 36 */	lha r0, 0x36(r3)
/* 80350DE8 0034DD28  B0 1C 02 E8 */	sth r0, 0x2e8(r28)
/* 80350DEC 0034DD2C  48 00 00 B8 */	b .L_80350EA4
.L_80350DF0:
/* 80350DF0 0034DD30  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80350DF4 0034DD34  7F E3 FB 78 */	mr r3, r31
/* 80350DF8 0034DD38  A8 04 00 36 */	lha r0, 0x36(r4)
/* 80350DFC 0034DD3C  B0 1C 02 E8 */	sth r0, 0x2e8(r28)
/* 80350E00 0034DD40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80350E04 0034DD44  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80350E08 0034DD48  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80350E0C 0034DD4C  A8 84 00 36 */	lha r4, 0x36(r4)
/* 80350E10 0034DD50  7D 89 03 A6 */	mtctr r12
/* 80350E14 0034DD54  4E 80 04 21 */	bctrl 
/* 80350E18 0034DD58  A8 03 00 38 */	lha r0, 0x38(r3)
/* 80350E1C 0034DD5C  2C 00 00 01 */	cmpwi r0, 1
/* 80350E20 0034DD60  40 81 00 20 */	ble .L_80350E40
/* 80350E24 0034DD64  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80350E28 0034DD68  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80350E2C 0034DD6C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80350E30 0034DD70  40 82 00 10 */	bne .L_80350E40
/* 80350E34 0034DD74  A8 03 00 36 */	lha r0, 0x36(r3)
/* 80350E38 0034DD78  B0 1C 02 EA */	sth r0, 0x2ea(r28)
/* 80350E3C 0034DD7C  48 00 00 68 */	b .L_80350EA4
.L_80350E40:
/* 80350E40 0034DD80  A8 1C 02 E8 */	lha r0, 0x2e8(r28)
/* 80350E44 0034DD84  B0 1C 02 EA */	sth r0, 0x2ea(r28)
/* 80350E48 0034DD88  48 00 00 5C */	b .L_80350EA4
.L_80350E4C:
/* 80350E4C 0034DD8C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80350E50 0034DD90  7F E3 FB 78 */	mr r3, r31
/* 80350E54 0034DD94  A8 04 00 36 */	lha r0, 0x36(r4)
/* 80350E58 0034DD98  B0 1C 02 E8 */	sth r0, 0x2e8(r28)
/* 80350E5C 0034DD9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80350E60 0034DDA0  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80350E64 0034DDA4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80350E68 0034DDA8  A8 84 00 36 */	lha r4, 0x36(r4)
/* 80350E6C 0034DDAC  7D 89 03 A6 */	mtctr r12
/* 80350E70 0034DDB0  4E 80 04 21 */	bctrl 
/* 80350E74 0034DDB4  A8 03 00 38 */	lha r0, 0x38(r3)
/* 80350E78 0034DDB8  2C 00 00 01 */	cmpwi r0, 1
/* 80350E7C 0034DDBC  40 81 00 20 */	ble .L_80350E9C
/* 80350E80 0034DDC0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80350E84 0034DDC4  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80350E88 0034DDC8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80350E8C 0034DDCC  40 82 00 10 */	bne .L_80350E9C
/* 80350E90 0034DDD0  A8 03 00 36 */	lha r0, 0x36(r3)
/* 80350E94 0034DDD4  B0 1C 02 EA */	sth r0, 0x2ea(r28)
/* 80350E98 0034DDD8  48 00 00 0C */	b .L_80350EA4
.L_80350E9C:
/* 80350E9C 0034DDDC  A8 1C 02 E8 */	lha r0, 0x2e8(r28)
/* 80350EA0 0034DDE0  B0 1C 02 EA */	sth r0, 0x2ea(r28)
.L_80350EA4:
/* 80350EA4 0034DDE4  A8 9C 02 E8 */	lha r4, 0x2e8(r28)
/* 80350EA8 0034DDE8  7C 04 F0 00 */	cmpw r4, r30
/* 80350EAC 0034DDEC  40 82 00 E8 */	bne .L_80350F94
/* 80350EB0 0034DDF0  A8 1C 02 EA */	lha r0, 0x2ea(r28)
/* 80350EB4 0034DDF4  7C 00 E8 00 */	cmpw r0, r29
/* 80350EB8 0034DDF8  40 82 00 DC */	bne .L_80350F94
/* 80350EBC 0034DDFC  C0 3C 01 8C */	lfs f1, 0x18c(r28)
/* 80350EC0 0034DE00  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350EC4 0034DE04  D0 3C 02 BC */	stfs f1, 0x2bc(r28)
/* 80350EC8 0034DE08  C0 62 01 94 */	lfs f3, lbl_8051E4F4@sda21(r2)
/* 80350ECC 0034DE0C  C0 3C 01 90 */	lfs f1, 0x190(r28)
/* 80350ED0 0034DE10  D0 3C 02 C0 */	stfs f1, 0x2c0(r28)
/* 80350ED4 0034DE14  C0 3C 01 94 */	lfs f1, 0x194(r28)
/* 80350ED8 0034DE18  D0 3C 02 C4 */	stfs f1, 0x2c4(r28)
/* 80350EDC 0034DE1C  C0 3C 01 FC */	lfs f1, 0x1fc(r28)
/* 80350EE0 0034DE20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80350EE4 0034DE24  40 80 00 30 */	bge .L_80350F14
/* 80350EE8 0034DE28  C0 02 01 6C */	lfs f0, lbl_8051E4CC@sda21(r2)
/* 80350EEC 0034DE2C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80350EF0 0034DE30  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80350EF4 0034DE34  EC 01 00 32 */	fmuls f0, f1, f0
/* 80350EF8 0034DE38  FC 00 00 1E */	fctiwz f0, f0
/* 80350EFC 0034DE3C  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 80350F00 0034DE40  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80350F04 0034DE44  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80350F08 0034DE48  7C 03 04 2E */	lfsx f0, r3, r0
/* 80350F0C 0034DE4C  FC 40 00 50 */	fneg f2, f0
/* 80350F10 0034DE50  48 00 00 28 */	b .L_80350F38
.L_80350F14:
/* 80350F14 0034DE54  C0 02 01 68 */	lfs f0, lbl_8051E4C8@sda21(r2)
/* 80350F18 0034DE58  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80350F1C 0034DE5C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80350F20 0034DE60  EC 01 00 32 */	fmuls f0, f1, f0
/* 80350F24 0034DE64  FC 00 00 1E */	fctiwz f0, f0
/* 80350F28 0034DE68  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80350F2C 0034DE6C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80350F30 0034DE70  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80350F34 0034DE74  7C 43 04 2E */	lfsx f2, r3, r0
.L_80350F38:
/* 80350F38 0034DE78  C0 3C 02 BC */	lfs f1, 0x2bc(r28)
/* 80350F3C 0034DE7C  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80350F40 0034DE80  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 80350F44 0034DE84  D0 3C 02 BC */	stfs f1, 0x2bc(r28)
/* 80350F48 0034DE88  C0 3C 01 FC */	lfs f1, 0x1fc(r28)
/* 80350F4C 0034DE8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80350F50 0034DE90  40 80 00 08 */	bge .L_80350F58
/* 80350F54 0034DE94  FC 20 08 50 */	fneg f1, f1
.L_80350F58:
/* 80350F58 0034DE98  C0 02 01 68 */	lfs f0, lbl_8051E4C8@sda21(r2)
/* 80350F5C 0034DE9C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80350F60 0034DEA0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80350F64 0034DEA4  C0 42 01 94 */	lfs f2, lbl_8051E4F4@sda21(r2)
/* 80350F68 0034DEA8  EC 21 00 32 */	fmuls f1, f1, f0
/* 80350F6C 0034DEAC  C0 1C 02 C4 */	lfs f0, 0x2c4(r28)
/* 80350F70 0034DEB0  FC 20 08 1E */	fctiwz f1, f1
/* 80350F74 0034DEB4  D8 21 00 58 */	stfd f1, 0x58(r1)
/* 80350F78 0034DEB8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 80350F7C 0034DEBC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80350F80 0034DEC0  7C 63 02 14 */	add r3, r3, r0
/* 80350F84 0034DEC4  C0 23 00 04 */	lfs f1, 4(r3)
/* 80350F88 0034DEC8  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 80350F8C 0034DECC  D0 1C 02 C4 */	stfs f0, 0x2c4(r28)
/* 80350F90 0034DED0  48 00 01 E4 */	b .L_80351174
.L_80350F94:
/* 80350F94 0034DED4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80350F98 0034DED8  7F E3 FB 78 */	mr r3, r31
/* 80350F9C 0034DEDC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80350FA0 0034DEE0  7D 89 03 A6 */	mtctr r12
/* 80350FA4 0034DEE4  4E 80 04 21 */	bctrl 
/* 80350FA8 0034DEE8  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80350FAC 0034DEEC  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80350FB0 0034DEF0  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80350FB4 0034DEF4  D0 1C 02 BC */	stfs f0, 0x2bc(r28)
/* 80350FB8 0034DEF8  D0 3C 02 C0 */	stfs f1, 0x2c0(r28)
/* 80350FBC 0034DEFC  D0 5C 02 C4 */	stfs f2, 0x2c4(r28)
/* 80350FC0 0034DF00  48 00 01 B4 */	b .L_80351174
.L_80350FC4:
/* 80350FC4 0034DF04  7F E3 FB 78 */	mr r3, r31
/* 80350FC8 0034DF08  A8 9C 02 E8 */	lha r4, 0x2e8(r28)
/* 80350FCC 0034DF0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80350FD0 0034DF10  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80350FD4 0034DF14  7D 89 03 A6 */	mtctr r12
/* 80350FD8 0034DF18  4E 80 04 21 */	bctrl 
/* 80350FDC 0034DF1C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80350FE0 0034DF20  40 82 00 20 */	bne .L_80351000
/* 80350FE4 0034DF24  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80350FE8 0034DF28  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 80350FEC 0034DF2C  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 80350FF0 0034DF30  38 80 03 E1 */	li r4, 0x3e1
/* 80350FF4 0034DF34  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 80350FF8 0034DF38  4C C6 31 82 */	crclr 6
/* 80350FFC 0034DF3C  4B CD 96 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80351000:
/* 80351000 0034DF40  7F A4 EB 78 */	mr r4, r29
/* 80351004 0034DF44  38 61 00 08 */	addi r3, r1, 8
/* 80351008 0034DF48  3B C0 00 00 */	li r30, 0
/* 8035100C 0034DF4C  38 A0 00 01 */	li r5, 1
/* 80351010 0034DF50  4B E2 15 11 */	bl __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
/* 80351014 0034DF54  38 61 00 08 */	addi r3, r1, 8
/* 80351018 0034DF58  4B E2 15 1D */	bl first__Q24Game16WayPointIteratorFv
/* 8035101C 0034DF5C  3B A1 00 14 */	addi r29, r1, 0x14
/* 80351020 0034DF60  48 00 00 68 */	b .L_80351088
.L_80351024:
/* 80351024 0034DF64  38 61 00 08 */	addi r3, r1, 8
/* 80351028 0034DF68  4B E2 15 9D */	bl __ml__Q24Game16WayPointIteratorFv
/* 8035102C 0034DF6C  7C 60 1B 78 */	mr r0, r3
/* 80351030 0034DF70  7F E3 FB 78 */	mr r3, r31
/* 80351034 0034DF74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351038 0034DF78  7C 1B 03 78 */	mr r27, r0
/* 8035103C 0034DF7C  7F 64 DB 78 */	mr r4, r27
/* 80351040 0034DF80  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80351044 0034DF84  7D 89 03 A6 */	mtctr r12
/* 80351048 0034DF88  4E 80 04 21 */	bctrl 
/* 8035104C 0034DF8C  28 03 00 00 */	cmplwi r3, 0
/* 80351050 0034DF90  41 82 00 30 */	beq .L_80351080
/* 80351054 0034DF94  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80351058 0034DF98  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8035105C 0034DF9C  40 82 00 24 */	bne .L_80351080
/* 80351060 0034DFA0  A8 83 00 5C */	lha r4, 0x5c(r3)
/* 80351064 0034DFA4  A8 03 00 38 */	lha r0, 0x38(r3)
/* 80351068 0034DFA8  7C 04 02 14 */	add r0, r4, r0
/* 8035106C 0034DFAC  2C 00 00 01 */	cmpwi r0, 1
/* 80351070 0034DFB0  40 81 00 10 */	ble .L_80351080
/* 80351074 0034DFB4  B3 7D 00 00 */	sth r27, 0(r29)
/* 80351078 0034DFB8  3B BD 00 02 */	addi r29, r29, 2
/* 8035107C 0034DFBC  3B DE 00 01 */	addi r30, r30, 1
.L_80351080:
/* 80351080 0034DFC0  38 61 00 08 */	addi r3, r1, 8
/* 80351084 0034DFC4  4B E2 14 D9 */	bl next__Q24Game16WayPointIteratorFv
.L_80351088:
/* 80351088 0034DFC8  38 61 00 08 */	addi r3, r1, 8
/* 8035108C 0034DFCC  4B E2 14 FD */	bl isDone__Q24Game16WayPointIteratorFv
/* 80351090 0034DFD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80351094 0034DFD4  41 82 FF 90 */	beq .L_80351024
/* 80351098 0034DFD8  2C 1E 00 00 */	cmpwi r30, 0
/* 8035109C 0034DFDC  41 82 00 A0 */	beq .L_8035113C
/* 803510A0 0034DFE0  4B D7 85 01 */	bl rand
/* 803510A4 0034DFE4  3C 80 43 30 */	lis r4, 0x4330
/* 803510A8 0034DFE8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803510AC 0034DFEC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 803510B0 0034DFF0  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 803510B4 0034DFF4  C8 42 01 A0 */	lfd f2, lbl_8051E500@sda21(r2)
/* 803510B8 0034DFF8  90 81 00 58 */	stw r4, 0x58(r1)
/* 803510BC 0034DFFC  C0 02 01 98 */	lfs f0, lbl_8051E4F8@sda21(r2)
/* 803510C0 0034E000  C8 21 00 58 */	lfd f1, 0x58(r1)
/* 803510C4 0034E004  90 01 00 54 */	stw r0, 0x54(r1)
/* 803510C8 0034E008  EC 21 10 28 */	fsubs f1, f1, f2
/* 803510CC 0034E00C  90 81 00 50 */	stw r4, 0x50(r1)
/* 803510D0 0034E010  EC 21 00 24 */	fdivs f1, f1, f0
/* 803510D4 0034E014  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 803510D8 0034E018  EC 00 10 28 */	fsubs f0, f0, f2
/* 803510DC 0034E01C  EC 00 00 72 */	fmuls f0, f0, f1
/* 803510E0 0034E020  FC 00 00 1E */	fctiwz f0, f0
/* 803510E4 0034E024  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 803510E8 0034E028  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 803510EC 0034E02C  7C 00 F0 00 */	cmpw r0, r30
/* 803510F0 0034E030  41 80 00 08 */	blt .L_803510F8
/* 803510F4 0034E034  38 1E FF FF */	addi r0, r30, -1
.L_803510F8:
/* 803510F8 0034E038  7F E3 FB 78 */	mr r3, r31
/* 803510FC 0034E03C  54 00 08 3C */	slwi r0, r0, 1
/* 80351100 0034E040  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351104 0034E044  38 81 00 14 */	addi r4, r1, 0x14
/* 80351108 0034E048  7F 64 02 AE */	lhax r27, r4, r0
/* 8035110C 0034E04C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80351110 0034E050  7F 64 DB 78 */	mr r4, r27
/* 80351114 0034E054  7D 89 03 A6 */	mtctr r12
/* 80351118 0034E058  4E 80 04 21 */	bctrl 
/* 8035111C 0034E05C  2C 1E 00 01 */	cmpwi r30, 1
/* 80351120 0034E060  41 82 00 10 */	beq .L_80351130
/* 80351124 0034E064  A8 1C 02 EA */	lha r0, 0x2ea(r28)
/* 80351128 0034E068  7C 1B 00 00 */	cmpw r27, r0
/* 8035112C 0034E06C  41 82 00 10 */	beq .L_8035113C
.L_80351130:
/* 80351130 0034E070  A8 1C 02 E8 */	lha r0, 0x2e8(r28)
/* 80351134 0034E074  B0 1C 02 EA */	sth r0, 0x2ea(r28)
/* 80351138 0034E078  B3 7C 02 E8 */	sth r27, 0x2e8(r28)
.L_8035113C:
/* 8035113C 0034E07C  7F E3 FB 78 */	mr r3, r31
/* 80351140 0034E080  A8 9C 02 E8 */	lha r4, 0x2e8(r28)
/* 80351144 0034E084  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351148 0034E088  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8035114C 0034E08C  7D 89 03 A6 */	mtctr r12
/* 80351150 0034E090  4E 80 04 21 */	bctrl 
/* 80351154 0034E094  28 03 00 00 */	cmplwi r3, 0
/* 80351158 0034E098  41 82 00 1C */	beq .L_80351174
/* 8035115C 0034E09C  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80351160 0034E0A0  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80351164 0034E0A4  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80351168 0034E0A8  D0 1C 02 BC */	stfs f0, 0x2bc(r28)
/* 8035116C 0034E0AC  D0 3C 02 C0 */	stfs f1, 0x2c0(r28)
/* 80351170 0034E0B0  D0 5C 02 C4 */	stfs f2, 0x2c4(r28)
.L_80351174:
/* 80351174 0034E0B4  BB 61 00 6C */	lmw r27, 0x6c(r1)
/* 80351178 0034E0B8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8035117C 0034E0BC  7C 08 03 A6 */	mtlr r0
/* 80351180 0034E0C0  38 21 00 80 */	addi r1, r1, 0x80
/* 80351184 0034E0C4  4E 80 00 20 */	blr 
.endfn findNextRoutePoint__Q34Game13PanModokiBase3ObjFb

.fn isCarryToGoal__Q34Game13PanModokiBase3ObjFv, global
/* 80351188 0034E0C8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8035118C 0034E0CC  7C 08 02 A6 */	mflr r0
/* 80351190 0034E0D0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80351194 0034E0D4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80351198 0034E0D8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8035119C 0034E0DC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803511A0 0034E0E0  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803511A4 0034E0E4  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803511A8 0034E0E8  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803511AC 0034E0EC  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 803511B0 0034E0F0  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 803511B4 0034E0F4  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 803511B8 0034E0F8  F3 61 00 48 */	psq_st f27, 72(r1), 0, qr0
/* 803511BC 0034E0FC  DB 41 00 30 */	stfd f26, 0x30(r1)
/* 803511C0 0034E100  F3 41 00 38 */	psq_st f26, 56(r1), 0, qr0
/* 803511C4 0034E104  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803511C8 0034E108  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803511CC 0034E10C  7C 7E 1B 78 */	mr r30, r3
/* 803511D0 0034E110  88 03 02 F0 */	lbz r0, 0x2f0(r3)
/* 803511D4 0034E114  28 00 00 00 */	cmplwi r0, 0
/* 803511D8 0034E118  40 82 00 0C */	bne .L_803511E4
/* 803511DC 0034E11C  38 60 00 00 */	li r3, 0
/* 803511E0 0034E120  48 00 01 D4 */	b .L_803513B4
.L_803511E4:
/* 803511E4 0034E124  80 1E 03 18 */	lwz r0, 0x318(r30)
/* 803511E8 0034E128  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803511EC 0034E12C  2C 00 00 64 */	cmpwi r0, 0x64
/* 803511F0 0034E130  C0 A3 03 84 */	lfs f5, 0x384(r3)
/* 803511F4 0034E134  40 81 00 08 */	ble .L_803511FC
/* 803511F8 0034E138  C0 A2 01 A8 */	lfs f5, lbl_8051E508@sda21(r2)
.L_803511FC:
/* 803511FC 0034E13C  C0 9E 01 94 */	lfs f4, 0x194(r30)
/* 80351200 0034E140  EC A5 01 72 */	fmuls f5, f5, f5
/* 80351204 0034E144  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 80351208 0034E148  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 8035120C 0034E14C  EC 24 00 28 */	fsubs f1, f4, f0
/* 80351210 0034E150  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 80351214 0034E154  EC 43 00 28 */	fsubs f2, f3, f0
/* 80351218 0034E158  EC 01 00 72 */	fmuls f0, f1, f1
/* 8035121C 0034E15C  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80351220 0034E160  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 80351224 0034E164  40 80 00 14 */	bge .L_80351238
/* 80351228 0034E168  7F C3 F3 78 */	mr r3, r30
/* 8035122C 0034E16C  48 00 1E 79 */	bl releasePathFinder__Q34Game13PanModokiBase3ObjFv
/* 80351230 0034E170  38 60 00 01 */	li r3, 1
/* 80351234 0034E174  48 00 01 80 */	b .L_803513B4
.L_80351238:
/* 80351238 0034E178  2C 00 00 64 */	cmpwi r0, 0x64
/* 8035123C 0034E17C  C3 42 01 7C */	lfs f26, lbl_8051E4DC@sda21(r2)
/* 80351240 0034E180  C3 E2 01 78 */	lfs f31, lbl_8051E4D8@sda21(r2)
/* 80351244 0034E184  40 81 00 0C */	ble .L_80351250
/* 80351248 0034E188  C3 42 01 A8 */	lfs f26, lbl_8051E508@sda21(r2)
/* 8035124C 0034E18C  C3 E2 01 AC */	lfs f31, lbl_8051E50C@sda21(r2)
.L_80351250:
/* 80351250 0034E190  C0 1E 02 C4 */	lfs f0, 0x2c4(r30)
/* 80351254 0034E194  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 80351258 0034E198  C0 3E 02 BC */	lfs f1, 0x2bc(r30)
/* 8035125C 0034E19C  EF FF 07 F2 */	fmuls f31, f31, f31
/* 80351260 0034E1A0  EC 04 00 28 */	fsubs f0, f4, f0
/* 80351264 0034E1A4  7F C3 F3 78 */	mr r3, r30
/* 80351268 0034E1A8  EC 23 08 28 */	fsubs f1, f3, f1
/* 8035126C 0034E1AC  EC 00 00 32 */	fmuls f0, f0, f0
/* 80351270 0034E1B0  EF 61 00 7A */	fmadds f27, f1, f1, f0
/* 80351274 0034E1B4  48 00 09 91 */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 80351278 0034E1B8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8035127C 0034E1BC  C0 22 01 B0 */	lfs f1, lbl_8051E510@sda21(r2)
/* 80351280 0034E1C0  41 82 00 54 */	beq .L_803512D4
/* 80351284 0034E1C4  7F E4 FB 78 */	mr r4, r31
/* 80351288 0034E1C8  38 61 00 08 */	addi r3, r1, 8
/* 8035128C 0034E1CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351290 0034E1D0  C3 9E 02 C4 */	lfs f28, 0x2c4(r30)
/* 80351294 0034E1D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351298 0034E1D8  C3 BE 02 BC */	lfs f29, 0x2bc(r30)
/* 8035129C 0034E1DC  7D 89 03 A6 */	mtctr r12
/* 803512A0 0034E1E0  4E 80 04 21 */	bctrl 
/* 803512A4 0034E1E4  7F E4 FB 78 */	mr r4, r31
/* 803512A8 0034E1E8  38 61 00 14 */	addi r3, r1, 0x14
/* 803512AC 0034E1EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803512B0 0034E1F0  C3 C1 00 10 */	lfs f30, 0x10(r1)
/* 803512B4 0034E1F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803512B8 0034E1F8  7D 89 03 A6 */	mtctr r12
/* 803512BC 0034E1FC  4E 80 04 21 */	bctrl 
/* 803512C0 0034E200  EC 1E E0 28 */	fsubs f0, f30, f28
/* 803512C4 0034E204  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803512C8 0034E208  EC 21 E8 28 */	fsubs f1, f1, f29
/* 803512CC 0034E20C  EC 00 00 32 */	fmuls f0, f0, f0
/* 803512D0 0034E210  EC 21 00 7A */	fmadds f1, f1, f1, f0
.L_803512D4:
/* 803512D4 0034E214  FC 1B D0 40 */	fcmpo cr0, f27, f26
/* 803512D8 0034E218  41 80 00 18 */	blt .L_803512F0
/* 803512DC 0034E21C  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803512E0 0034E220  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803512E4 0034E224  40 81 00 CC */	ble .L_803513B0
/* 803512E8 0034E228  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 803512EC 0034E22C  40 80 00 C4 */	bge .L_803513B0
.L_803512F0:
/* 803512F0 0034E230  38 00 00 00 */	li r0, 0
/* 803512F4 0034E234  90 1E 03 18 */	stw r0, 0x318(r30)
/* 803512F8 0034E238  A8 7E 02 E8 */	lha r3, 0x2e8(r30)
/* 803512FC 0034E23C  A8 1E 02 E6 */	lha r0, 0x2e6(r30)
/* 80351300 0034E240  7C 03 00 00 */	cmpw r3, r0
/* 80351304 0034E244  40 82 00 2C */	bne .L_80351330
/* 80351308 0034E248  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 8035130C 0034E24C  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80351310 0034E250  D0 1E 02 BC */	stfs f0, 0x2bc(r30)
/* 80351314 0034E254  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 80351318 0034E258  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
/* 8035131C 0034E25C  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 80351320 0034E260  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
/* 80351324 0034E264  40 80 00 8C */	bge .L_803513B0
/* 80351328 0034E268  38 60 00 01 */	li r3, 1
/* 8035132C 0034E26C  48 00 00 88 */	b .L_803513B4
.L_80351330:
/* 80351330 0034E270  80 9E 03 84 */	lwz r4, 0x384(r30)
/* 80351334 0034E274  48 00 00 74 */	b .L_803513A8
.L_80351338:
/* 80351338 0034E278  A8 04 00 20 */	lha r0, 0x20(r4)
/* 8035133C 0034E27C  7C 00 18 00 */	cmpw r0, r3
/* 80351340 0034E280  40 82 00 64 */	bne .L_803513A4
/* 80351344 0034E284  B0 7E 02 EA */	sth r3, 0x2ea(r30)
/* 80351348 0034E288  80 64 00 0C */	lwz r3, 0xc(r4)
/* 8035134C 0034E28C  28 03 00 00 */	cmplwi r3, 0
/* 80351350 0034E290  41 82 00 10 */	beq .L_80351360
/* 80351354 0034E294  A8 03 00 20 */	lha r0, 0x20(r3)
/* 80351358 0034E298  B0 1E 02 E8 */	sth r0, 0x2e8(r30)
/* 8035135C 0034E29C  48 00 00 0C */	b .L_80351368
.L_80351360:
/* 80351360 0034E2A0  A8 1E 02 E6 */	lha r0, 0x2e6(r30)
/* 80351364 0034E2A4  B0 1E 02 E8 */	sth r0, 0x2e8(r30)
.L_80351368:
/* 80351368 0034E2A8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8035136C 0034E2AC  A8 9E 02 E8 */	lha r4, 0x2e8(r30)
/* 80351370 0034E2B0  80 63 00 08 */	lwz r3, 8(r3)
/* 80351374 0034E2B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80351378 0034E2B8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8035137C 0034E2BC  7D 89 03 A6 */	mtctr r12
/* 80351380 0034E2C0  4E 80 04 21 */	bctrl 
/* 80351384 0034E2C4  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80351388 0034E2C8  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8035138C 0034E2CC  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80351390 0034E2D0  38 60 00 00 */	li r3, 0
/* 80351394 0034E2D4  D0 1E 02 BC */	stfs f0, 0x2bc(r30)
/* 80351398 0034E2D8  D0 3E 02 C0 */	stfs f1, 0x2c0(r30)
/* 8035139C 0034E2DC  D0 5E 02 C4 */	stfs f2, 0x2c4(r30)
/* 803513A0 0034E2E0  48 00 00 14 */	b .L_803513B4
.L_803513A4:
/* 803513A4 0034E2E4  80 84 00 0C */	lwz r4, 0xc(r4)
.L_803513A8:
/* 803513A8 0034E2E8  28 04 00 00 */	cmplwi r4, 0
/* 803513AC 0034E2EC  40 82 FF 8C */	bne .L_80351338
.L_803513B0:
/* 803513B0 0034E2F0  38 60 00 00 */	li r3, 0
.L_803513B4:
/* 803513B4 0034E2F4  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803513B8 0034E2F8  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803513BC 0034E2FC  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803513C0 0034E300  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803513C4 0034E304  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803513C8 0034E308  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803513CC 0034E30C  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 803513D0 0034E310  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 803513D4 0034E314  E3 61 00 48 */	psq_l f27, 72(r1), 0, qr0
/* 803513D8 0034E318  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 803513DC 0034E31C  E3 41 00 38 */	psq_l f26, 56(r1), 0, qr0
/* 803513E0 0034E320  CB 41 00 30 */	lfd f26, 0x30(r1)
/* 803513E4 0034E324  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803513E8 0034E328  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803513EC 0034E32C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803513F0 0034E330  7C 08 03 A6 */	mtlr r0
/* 803513F4 0034E334  38 21 00 90 */	addi r1, r1, 0x90
/* 803513F8 0034E338  4E 80 00 20 */	blr 
.endfn isCarryToGoal__Q34Game13PanModokiBase3ObjFv

.fn walkFunc__Q34Game13PanModokiBase3ObjFv, global
/* 803513FC 0034E33C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80351400 0034E340  7C 08 02 A6 */	mflr r0
/* 80351404 0034E344  90 01 00 64 */	stw r0, 0x64(r1)
/* 80351408 0034E348  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8035140C 0034E34C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80351410 0034E350  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80351414 0034E354  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80351418 0034E358  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8035141C 0034E35C  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80351420 0034E360  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 80351424 0034E364  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 80351428 0034E368  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035142C 0034E36C  81 83 00 00 */	lwz r12, 0(r3)
/* 80351430 0034E370  7C 7F 1B 78 */	mr r31, r3
/* 80351434 0034E374  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80351438 0034E378  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8035143C 0034E37C  C3 E4 02 E4 */	lfs f31, 0x2e4(r4)
/* 80351440 0034E380  C3 C4 03 34 */	lfs f30, 0x334(r4)
/* 80351444 0034E384  C3 A4 03 0C */	lfs f29, 0x30c(r4)
/* 80351448 0034E388  C3 82 01 94 */	lfs f28, lbl_8051E4F4@sda21(r2)
/* 8035144C 0034E38C  7D 89 03 A6 */	mtctr r12
/* 80351450 0034E390  4E 80 04 21 */	bctrl 
/* 80351454 0034E394  2C 03 00 28 */	cmpwi r3, 0x28
/* 80351458 0034E398  40 82 00 08 */	bne .L_80351460
/* 8035145C 0034E39C  C3 82 01 B4 */	lfs f28, lbl_8051E514@sda21(r2)
.L_80351460:
/* 80351460 0034E3A0  C0 3F 02 BC */	lfs f1, 0x2bc(r31)
/* 80351464 0034E3A4  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80351468 0034E3A8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8035146C 0034E3AC  FC 00 02 10 */	fabs f0, f0
/* 80351470 0034E3B0  FC 00 00 18 */	frsp f0, f0
/* 80351474 0034E3B4  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80351478 0034E3B8  40 80 00 54 */	bge .L_803514CC
/* 8035147C 0034E3BC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 80351480 0034E3C0  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80351484 0034E3C4  EC 01 00 28 */	fsubs f0, f1, f0
/* 80351488 0034E3C8  FC 00 02 10 */	fabs f0, f0
/* 8035148C 0034E3CC  FC 00 00 18 */	frsp f0, f0
/* 80351490 0034E3D0  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80351494 0034E3D4  40 80 00 38 */	bge .L_803514CC
/* 80351498 0034E3D8  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 8035149C 0034E3DC  38 03 00 01 */	addi r0, r3, 1
/* 803514A0 0034E3E0  90 1F 03 18 */	stw r0, 0x318(r31)
/* 803514A4 0034E3E4  80 1F 03 18 */	lwz r0, 0x318(r31)
/* 803514A8 0034E3E8  2C 00 00 64 */	cmpwi r0, 0x64
/* 803514AC 0034E3EC  40 81 00 0C */	ble .L_803514B8
/* 803514B0 0034E3F0  C0 02 01 70 */	lfs f0, lbl_8051E4D0@sda21(r2)
/* 803514B4 0034E3F4  EF FF 00 32 */	fmuls f31, f31, f0
.L_803514B8:
/* 803514B8 0034E3F8  2C 00 00 C8 */	cmpwi r0, 0xc8
/* 803514BC 0034E3FC  40 81 00 18 */	ble .L_803514D4
/* 803514C0 0034E400  38 00 00 00 */	li r0, 0
/* 803514C4 0034E404  90 1F 03 18 */	stw r0, 0x318(r31)
/* 803514C8 0034E408  48 00 00 0C */	b .L_803514D4
.L_803514CC:
/* 803514CC 0034E40C  38 00 00 00 */	li r0, 0
/* 803514D0 0034E410  90 1F 03 18 */	stw r0, 0x318(r31)
.L_803514D4:
/* 803514D4 0034E414  80 1F 03 04 */	lwz r0, 0x304(r31)
/* 803514D8 0034E418  2C 00 00 00 */	cmpwi r0, 0
/* 803514DC 0034E41C  40 82 00 4C */	bne .L_80351528
/* 803514E0 0034E420  7F E3 FB 78 */	mr r3, r31
/* 803514E4 0034E424  48 00 03 DD */	bl findNearestPellet__Q34Game13PanModokiBase3ObjFv
/* 803514E8 0034E428  90 7F 02 30 */	stw r3, 0x230(r31)
/* 803514EC 0034E42C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 803514F0 0034E430  28 04 00 00 */	cmplwi r4, 0
/* 803514F4 0034E434  41 82 00 40 */	beq .L_80351534
/* 803514F8 0034E438  81 84 00 00 */	lwz r12, 0(r4)
/* 803514FC 0034E43C  38 61 00 08 */	addi r3, r1, 8
/* 80351500 0034E440  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351504 0034E444  7D 89 03 A6 */	mtctr r12
/* 80351508 0034E448  4E 80 04 21 */	bctrl 
/* 8035150C 0034E44C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80351510 0034E450  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80351514 0034E454  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80351518 0034E458  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8035151C 0034E45C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80351520 0034E460  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80351524 0034E464  48 00 00 10 */	b .L_80351534
.L_80351528:
/* 80351528 0034E468  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035152C 0034E46C  C3 C3 08 94 */	lfs f30, 0x894(r3)
/* 80351530 0034E470  C3 A3 08 6C */	lfs f29, 0x86c(r3)
.L_80351534:
/* 80351534 0034E474  FC 20 F8 90 */	fmr f1, f31
/* 80351538 0034E478  7F E3 FB 78 */	mr r3, r31
/* 8035153C 0034E47C  FC 40 E8 90 */	fmr f2, f29
/* 80351540 0034E480  38 9F 02 BC */	addi r4, r31, 0x2bc
/* 80351544 0034E484  FC 60 F0 90 */	fmr f3, f30
/* 80351548 0034E488  4B DC 40 95 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8035154C 0034E48C  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80351550 0034E490  28 00 00 00 */	cmplwi r0, 0
/* 80351554 0034E494  41 82 00 B4 */	beq .L_80351608
/* 80351558 0034E498  C0 3F 00 CC */	lfs f1, 0xcc(r31)
/* 8035155C 0034E49C  C0 02 01 58 */	lfs f0, lbl_8051E4B8@sda21(r2)
/* 80351560 0034E4A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80351564 0034E4A4  40 81 00 14 */	ble .L_80351578
/* 80351568 0034E4A8  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 8035156C 0034E4AC  FC 00 00 50 */	fneg f0, f0
/* 80351570 0034E4B0  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 80351574 0034E4B4  48 00 00 2C */	b .L_803515A0
.L_80351578:
/* 80351578 0034E4B8  C0 02 01 BC */	lfs f0, lbl_8051E51C@sda21(r2)
/* 8035157C 0034E4BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80351580 0034E4C0  40 80 00 10 */	bge .L_80351590
/* 80351584 0034E4C4  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80351588 0034E4C8  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 8035158C 0034E4CC  48 00 00 14 */	b .L_803515A0
.L_80351590:
/* 80351590 0034E4D0  C0 3F 03 20 */	lfs f1, 0x320(r31)
/* 80351594 0034E4D4  C0 02 01 C0 */	lfs f0, lbl_8051E520@sda21(r2)
/* 80351598 0034E4D8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035159C 0034E4DC  D0 1F 03 20 */	stfs f0, 0x320(r31)
.L_803515A0:
/* 803515A0 0034E4E0  C0 5F 01 C8 */	lfs f2, 0x1c8(r31)
/* 803515A4 0034E4E4  C0 3F 03 20 */	lfs f1, 0x320(r31)
/* 803515A8 0034E4E8  C0 02 01 58 */	lfs f0, lbl_8051E4B8@sda21(r2)
/* 803515AC 0034E4EC  EC 22 08 2A */	fadds f1, f2, f1
/* 803515B0 0034E4F0  D0 3F 01 C8 */	stfs f1, 0x1c8(r31)
/* 803515B4 0034E4F4  C0 3F 00 D4 */	lfs f1, 0xd4(r31)
/* 803515B8 0034E4F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803515BC 0034E4FC  40 81 00 14 */	ble .L_803515D0
/* 803515C0 0034E500  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 803515C4 0034E504  FC 00 00 50 */	fneg f0, f0
/* 803515C8 0034E508  D0 1F 03 28 */	stfs f0, 0x328(r31)
/* 803515CC 0034E50C  48 00 00 2C */	b .L_803515F8
.L_803515D0:
/* 803515D0 0034E510  C0 02 01 BC */	lfs f0, lbl_8051E51C@sda21(r2)
/* 803515D4 0034E514  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803515D8 0034E518  40 80 00 10 */	bge .L_803515E8
/* 803515DC 0034E51C  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 803515E0 0034E520  D0 1F 03 28 */	stfs f0, 0x328(r31)
/* 803515E4 0034E524  48 00 00 14 */	b .L_803515F8
.L_803515E8:
/* 803515E8 0034E528  C0 3F 03 28 */	lfs f1, 0x328(r31)
/* 803515EC 0034E52C  C0 02 01 C0 */	lfs f0, lbl_8051E520@sda21(r2)
/* 803515F0 0034E530  EC 01 00 32 */	fmuls f0, f1, f0
/* 803515F4 0034E534  D0 1F 03 28 */	stfs f0, 0x328(r31)
.L_803515F8:
/* 803515F8 0034E538  C0 3F 01 D0 */	lfs f1, 0x1d0(r31)
/* 803515FC 0034E53C  C0 1F 03 28 */	lfs f0, 0x328(r31)
/* 80351600 0034E540  EC 01 00 2A */	fadds f0, f1, f0
/* 80351604 0034E544  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_80351608:
/* 80351608 0034E548  80 1F 03 04 */	lwz r0, 0x304(r31)
/* 8035160C 0034E54C  2C 00 00 00 */	cmpwi r0, 0
/* 80351610 0034E550  40 82 00 84 */	bne .L_80351694
/* 80351614 0034E554  80 7F 03 14 */	lwz r3, 0x314(r31)
/* 80351618 0034E558  38 03 00 01 */	addi r0, r3, 1
/* 8035161C 0034E55C  90 1F 03 14 */	stw r0, 0x314(r31)
/* 80351620 0034E560  80 1F 03 14 */	lwz r0, 0x314(r31)
/* 80351624 0034E564  2C 00 00 3C */	cmpwi r0, 0x3c
/* 80351628 0034E568  40 81 00 6C */	ble .L_80351694
/* 8035162C 0034E56C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80351630 0034E570  C0 1F 03 10 */	lfs f0, 0x310(r31)
/* 80351634 0034E574  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80351638 0034E578  EC 61 00 28 */	fsubs f3, f1, f0
/* 8035163C 0034E57C  C0 3F 03 08 */	lfs f1, 0x308(r31)
/* 80351640 0034E580  C0 02 01 94 */	lfs f0, lbl_8051E4F4@sda21(r2)
/* 80351644 0034E584  EC 42 08 28 */	fsubs f2, f2, f1
/* 80351648 0034E588  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8035164C 0034E58C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80351650 0034E590  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80351654 0034E594  40 80 00 20 */	bge .L_80351674
/* 80351658 0034E598  38 60 00 78 */	li r3, 0x78
/* 8035165C 0034E59C  38 00 00 00 */	li r0, 0
/* 80351660 0034E5A0  90 7F 03 04 */	stw r3, 0x304(r31)
/* 80351664 0034E5A4  7F E3 FB 78 */	mr r3, r31
/* 80351668 0034E5A8  38 80 00 01 */	li r4, 1
/* 8035166C 0034E5AC  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80351670 0034E5B0  4B FF F6 65 */	bl findNextRoutePoint__Q34Game13PanModokiBase3ObjFb
.L_80351674:
/* 80351674 0034E5B4  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80351678 0034E5B8  38 00 00 00 */	li r0, 0
/* 8035167C 0034E5BC  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 80351680 0034E5C0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80351684 0034E5C4  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 80351688 0034E5C8  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8035168C 0034E5CC  D0 1F 03 10 */	stfs f0, 0x310(r31)
/* 80351690 0034E5D0  90 1F 03 14 */	stw r0, 0x314(r31)
.L_80351694:
/* 80351694 0034E5D4  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80351698 0034E5D8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8035169C 0034E5DC  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 803516A0 0034E5E0  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 803516A4 0034E5E4  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 803516A8 0034E5E8  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 803516AC 0034E5EC  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 803516B0 0034E5F0  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 803516B4 0034E5F4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803516B8 0034E5F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803516BC 0034E5FC  7C 08 03 A6 */	mtlr r0
/* 803516C0 0034E600  38 21 00 60 */	addi r1, r1, 0x60
/* 803516C4 0034E604  4E 80 00 20 */	blr 
.endfn walkFunc__Q34Game13PanModokiBase3ObjFv

.fn isReachToGoal__Q34Game13PanModokiBase3ObjFf, global
/* 803516C8 0034E608  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803516CC 0034E60C  7C 08 02 A6 */	mflr r0
/* 803516D0 0034E610  90 01 00 54 */	stw r0, 0x54(r1)
/* 803516D4 0034E614  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803516D8 0034E618  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803516DC 0034E61C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803516E0 0034E620  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803516E4 0034E624  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803516E8 0034E628  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803516EC 0034E62C  7C 7E 1B 78 */	mr r30, r3
/* 803516F0 0034E630  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803516F4 0034E634  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 803516F8 0034E638  FF C0 08 90 */	fmr f30, f1
/* 803516FC 0034E63C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80351700 0034E640  4C 40 13 82 */	cror 2, 0, 2
/* 80351704 0034E644  40 82 00 0C */	bne .L_80351710
/* 80351708 0034E648  38 60 00 00 */	li r3, 0
/* 8035170C 0034E64C  48 00 01 18 */	b .L_80351824
.L_80351710:
/* 80351710 0034E650  83 FE 02 30 */	lwz r31, 0x230(r30)
/* 80351714 0034E654  28 1F 00 00 */	cmplwi r31, 0
/* 80351718 0034E658  41 82 00 34 */	beq .L_8035174C
/* 8035171C 0034E65C  40 82 00 20 */	bne .L_8035173C
/* 80351720 0034E660  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80351724 0034E664  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 80351728 0034E668  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 8035172C 0034E66C  38 80 04 B0 */	li r4, 0x4b0
/* 80351730 0034E670  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 80351734 0034E674  4C C6 31 82 */	crclr 6
/* 80351738 0034E678  4B CD 8F 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035173C:
/* 8035173C 0034E67C  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 80351740 0034E680  C0 03 00 A0 */	lfs f0, 0xa0(r3)
/* 80351744 0034E684  EF DE 00 2A */	fadds f30, f30, f0
/* 80351748 0034E688  48 00 00 0C */	b .L_80351754
.L_8035174C:
/* 8035174C 0034E68C  C0 02 01 74 */	lfs f0, lbl_8051E4D4@sda21(r2)
/* 80351750 0034E690  EF DE 00 32 */	fmuls f30, f30, f0
.L_80351754:
/* 80351754 0034E694  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 80351758 0034E698  EF DE 07 B2 */	fmuls f30, f30, f30
/* 8035175C 0034E69C  C0 1E 02 C4 */	lfs f0, 0x2c4(r30)
/* 80351760 0034E6A0  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 80351764 0034E6A4  EC 21 00 28 */	fsubs f1, f1, f0
/* 80351768 0034E6A8  C0 1E 02 BC */	lfs f0, 0x2bc(r30)
/* 8035176C 0034E6AC  EC 42 00 28 */	fsubs f2, f2, f0
/* 80351770 0034E6B0  EC 01 00 72 */	fmuls f0, f1, f1
/* 80351774 0034E6B4  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80351778 0034E6B8  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8035177C 0034E6BC  40 80 00 A4 */	bge .L_80351820
/* 80351780 0034E6C0  7F C3 F3 78 */	mr r3, r30
/* 80351784 0034E6C4  4B DB 5C 71 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80351788 0034E6C8  2C 03 00 01 */	cmpwi r3, 1
/* 8035178C 0034E6CC  40 82 00 84 */	bne .L_80351810
/* 80351790 0034E6D0  80 9E 02 30 */	lwz r4, 0x230(r30)
/* 80351794 0034E6D4  28 04 00 00 */	cmplwi r4, 0
/* 80351798 0034E6D8  41 82 00 78 */	beq .L_80351810
/* 8035179C 0034E6DC  81 84 00 00 */	lwz r12, 0(r4)
/* 803517A0 0034E6E0  38 61 00 08 */	addi r3, r1, 8
/* 803517A4 0034E6E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803517A8 0034E6E8  7D 89 03 A6 */	mtctr r12
/* 803517AC 0034E6EC  4E 80 04 21 */	bctrl 
/* 803517B0 0034E6F0  80 9E 02 30 */	lwz r4, 0x230(r30)
/* 803517B4 0034E6F4  38 61 00 14 */	addi r3, r1, 0x14
/* 803517B8 0034E6F8  C3 E1 00 10 */	lfs f31, 0x10(r1)
/* 803517BC 0034E6FC  81 84 00 00 */	lwz r12, 0(r4)
/* 803517C0 0034E700  81 8C 00 08 */	lwz r12, 8(r12)
/* 803517C4 0034E704  7D 89 03 A6 */	mtctr r12
/* 803517C8 0034E708  4E 80 04 21 */	bctrl 
/* 803517CC 0034E70C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 803517D0 0034E710  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803517D4 0034E714  EC 20 F8 28 */	fsubs f1, f0, f31
/* 803517D8 0034E718  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 803517DC 0034E71C  EC 40 10 28 */	fsubs f2, f0, f2
/* 803517E0 0034E720  EC 01 00 72 */	fmuls f0, f1, f1
/* 803517E4 0034E724  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 803517E8 0034E728  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 803517EC 0034E72C  40 80 00 24 */	bge .L_80351810
/* 803517F0 0034E730  80 7E 03 80 */	lwz r3, 0x380(r30)
/* 803517F4 0034E734  7F C4 F3 78 */	mr r4, r30
/* 803517F8 0034E738  38 A0 00 08 */	li r5, 8
/* 803517FC 0034E73C  38 C0 00 00 */	li r6, 0
/* 80351800 0034E740  81 83 00 00 */	lwz r12, 0(r3)
/* 80351804 0034E744  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80351808 0034E748  7D 89 03 A6 */	mtctr r12
/* 8035180C 0034E74C  4E 80 04 21 */	bctrl 
.L_80351810:
/* 80351810 0034E750  38 00 00 00 */	li r0, 0
/* 80351814 0034E754  38 60 00 01 */	li r3, 1
/* 80351818 0034E758  90 1E 03 18 */	stw r0, 0x318(r30)
/* 8035181C 0034E75C  48 00 00 08 */	b .L_80351824
.L_80351820:
/* 80351820 0034E760  38 60 00 00 */	li r3, 0
.L_80351824:
/* 80351824 0034E764  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80351828 0034E768  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8035182C 0034E76C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80351830 0034E770  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80351834 0034E774  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80351838 0034E778  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8035183C 0034E77C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80351840 0034E780  7C 08 03 A6 */	mtlr r0
/* 80351844 0034E784  38 21 00 50 */	addi r1, r1, 0x50
/* 80351848 0034E788  4E 80 00 20 */	blr 
.endfn isReachToGoal__Q34Game13PanModokiBase3ObjFf

.fn canBack__Q34Game13PanModokiBase3ObjFv, global
/* 8035184C 0034E78C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80351850 0034E790  7C 08 02 A6 */	mflr r0
/* 80351854 0034E794  90 01 00 14 */	stw r0, 0x14(r1)
/* 80351858 0034E798  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035185C 0034E79C  7C 7F 1B 78 */	mr r31, r3
/* 80351860 0034E7A0  48 00 03 A5 */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 80351864 0034E7A4  28 03 00 00 */	cmplwi r3, 0
/* 80351868 0034E7A8  40 82 00 0C */	bne .L_80351874
/* 8035186C 0034E7AC  38 60 00 00 */	li r3, 0
/* 80351870 0034E7B0  48 00 00 3C */	b .L_803518AC
.L_80351874:
/* 80351874 0034E7B4  7F E3 FB 78 */	mr r3, r31
/* 80351878 0034E7B8  48 00 03 8D */	bl getCarryTarget__Q34Game13PanModokiBase3ObjFv
/* 8035187C 0034E7BC  80 63 03 34 */	lwz r3, 0x334(r3)
/* 80351880 0034E7C0  38 80 00 02 */	li r4, 2
/* 80351884 0034E7C4  C0 3F 03 7C */	lfs f1, 0x37c(r31)
/* 80351888 0034E7C8  4B EE 37 4D */	bl pullable__Q24Game11PelletCarryFUsf
/* 8035188C 0034E7CC  7C 60 1B 78 */	mr r0, r3
/* 80351890 0034E7D0  7F E3 FB 78 */	mr r3, r31
/* 80351894 0034E7D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351898 0034E7D8  7C 1F 03 78 */	mr r31, r0
/* 8035189C 0034E7DC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 803518A0 0034E7E0  7D 89 03 A6 */	mtctr r12
/* 803518A4 0034E7E4  4E 80 04 21 */	bctrl 
/* 803518A8 0034E7E8  7F E3 FB 78 */	mr r3, r31
.L_803518AC:
/* 803518AC 0034E7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803518B0 0034E7F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803518B4 0034E7F4  7C 08 03 A6 */	mtlr r0
/* 803518B8 0034E7F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803518BC 0034E7FC  4E 80 00 20 */	blr 
.endfn canBack__Q34Game13PanModokiBase3ObjFv

.fn findNearestPellet__Q34Game13PanModokiBase3ObjFv, global
/* 803518C0 0034E800  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803518C4 0034E804  7C 08 02 A6 */	mflr r0
/* 803518C8 0034E808  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803518CC 0034E80C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 803518D0 0034E810  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 803518D4 0034E814  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 803518D8 0034E818  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 803518DC 0034E81C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 803518E0 0034E820  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 803518E4 0034E824  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803518E8 0034E828  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803518EC 0034E82C  93 A1 00 64 */	stw r29, 0x64(r1)
/* 803518F0 0034E830  93 81 00 60 */	stw r28, 0x60(r1)
/* 803518F4 0034E834  7C 7E 1B 78 */	mr r30, r3
/* 803518F8 0034E838  C0 22 01 C4 */	lfs f1, lbl_8051E524@sda21(r2)
/* 803518FC 0034E83C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80351900 0034E840  3B E0 00 00 */	li r31, 0
/* 80351904 0034E844  C0 42 01 64 */	lfs f2, lbl_8051E4C4@sda21(r2)
/* 80351908 0034E848  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 8035190C 0034E84C  C0 63 04 4C */	lfs f3, 0x44c(r3)
/* 80351910 0034E850  EC 21 00 32 */	fmuls f1, f1, f0
/* 80351914 0034E854  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80351918 0034E858  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8035191C 0034E85C  EF C2 00 72 */	fmuls f30, f2, f1
/* 80351920 0034E860  40 80 00 10 */	bge .L_80351930
/* 80351924 0034E864  3C 60 80 51 */	lis r3, __float_max@ha
/* 80351928 0034E868  C0 63 48 D8 */	lfs f3, __float_max@l(r3)
/* 8035192C 0034E86C  48 00 00 08 */	b .L_80351934
.L_80351930:
/* 80351930 0034E870  EC 63 00 F2 */	fmuls f3, f3, f3
.L_80351934:
/* 80351934 0034E874  FF E0 18 90 */	fmr f31, f3
/* 80351938 0034E878  38 61 00 50 */	addi r3, r1, 0x50
/* 8035193C 0034E87C  4B E1 B0 2D */	bl __ct__Q24Game14PelletIteratorFv
/* 80351940 0034E880  38 61 00 50 */	addi r3, r1, 0x50
/* 80351944 0034E884  4B E1 B0 3D */	bl first__Q24Game14PelletIteratorFv
/* 80351948 0034E888  48 00 02 70 */	b .L_80351BB8
.L_8035194C:
/* 8035194C 0034E88C  38 61 00 50 */	addi r3, r1, 0x50
/* 80351950 0034E890  4B E1 B0 7D */	bl __ml__Q24Game14PelletIteratorFv
/* 80351954 0034E894  81 83 00 00 */	lwz r12, 0(r3)
/* 80351958 0034E898  7C 7C 1B 78 */	mr r28, r3
/* 8035195C 0034E89C  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 80351960 0034E8A0  7D 89 03 A6 */	mtctr r12
/* 80351964 0034E8A4  4E 80 04 21 */	bctrl 
/* 80351968 0034E8A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035196C 0034E8AC  41 82 02 44 */	beq .L_80351BB0
/* 80351970 0034E8B0  7F 83 E3 78 */	mr r3, r28
/* 80351974 0034E8B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351978 0034E8B8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035197C 0034E8BC  7D 89 03 A6 */	mtctr r12
/* 80351980 0034E8C0  4E 80 04 21 */	bctrl 
/* 80351984 0034E8C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80351988 0034E8C8  41 82 02 28 */	beq .L_80351BB0
/* 8035198C 0034E8CC  7F 83 E3 78 */	mr r3, r28
/* 80351990 0034E8D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351994 0034E8D4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80351998 0034E8D8  7D 89 03 A6 */	mtctr r12
/* 8035199C 0034E8DC  4E 80 04 21 */	bctrl 
/* 803519A0 0034E8E0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 803519A4 0034E8E4  28 00 00 04 */	cmplwi r0, 4
/* 803519A8 0034E8E8  41 82 02 08 */	beq .L_80351BB0
/* 803519AC 0034E8EC  80 1C 00 B8 */	lwz r0, 0xb8(r28)
/* 803519B0 0034E8F0  28 00 00 00 */	cmplwi r0, 0
/* 803519B4 0034E8F4  40 82 01 FC */	bne .L_80351BB0
/* 803519B8 0034E8F8  7F C3 F3 78 */	mr r3, r30
/* 803519BC 0034E8FC  7F 84 E3 78 */	mr r4, r28
/* 803519C0 0034E900  48 00 17 49 */	bl isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
/* 803519C4 0034E904  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803519C8 0034E908  41 82 01 E8 */	beq .L_80351BB0
/* 803519CC 0034E90C  7F C3 F3 78 */	mr r3, r30
/* 803519D0 0034E910  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 803519D4 0034E914  81 9E 00 00 */	lwz r12, 0(r30)
/* 803519D8 0034E918  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 803519DC 0034E91C  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 803519E0 0034E920  80 84 01 20 */	lwz r4, 0x120(r4)
/* 803519E4 0034E924  80 A5 09 84 */	lwz r5, 0x984(r5)
/* 803519E8 0034E928  7D 89 03 A6 */	mtctr r12
/* 803519EC 0034E92C  4E 80 04 21 */	bctrl 
/* 803519F0 0034E930  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803519F4 0034E934  41 82 01 BC */	beq .L_80351BB0
/* 803519F8 0034E938  7F 84 E3 78 */	mr r4, r28
/* 803519FC 0034E93C  38 61 00 44 */	addi r3, r1, 0x44
/* 80351A00 0034E940  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351A04 0034E944  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351A08 0034E948  7D 89 03 A6 */	mtctr r12
/* 80351A0C 0034E94C  4E 80 04 21 */	bctrl 
/* 80351A10 0034E950  C3 A1 00 48 */	lfs f29, 0x48(r1)
/* 80351A14 0034E954  7F 83 E3 78 */	mr r3, r28
/* 80351A18 0034E958  4B E1 4F BD */	bl getCylinderHeight__Q24Game6PelletFv
/* 80351A1C 0034E95C  C0 02 01 70 */	lfs f0, lbl_8051E4D0@sda21(r2)
/* 80351A20 0034E960  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 80351A24 0034E964  EC 20 E8 7C */	fnmsubs f1, f0, f1, f29
/* 80351A28 0034E968  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80351A2C 0034E96C  EC 21 10 28 */	fsubs f1, f1, f2
/* 80351A30 0034E970  FC 20 0A 10 */	fabs f1, f1
/* 80351A34 0034E974  FC 20 08 18 */	frsp f1, f1
/* 80351A38 0034E978  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80351A3C 0034E97C  41 81 01 74 */	bgt .L_80351BB0
/* 80351A40 0034E980  7F 84 E3 78 */	mr r4, r28
/* 80351A44 0034E984  38 61 00 20 */	addi r3, r1, 0x20
/* 80351A48 0034E988  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351A4C 0034E98C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351A50 0034E990  7D 89 03 A6 */	mtctr r12
/* 80351A54 0034E994  4E 80 04 21 */	bctrl 
/* 80351A58 0034E998  7F C4 F3 78 */	mr r4, r30
/* 80351A5C 0034E99C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80351A60 0034E9A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80351A64 0034E9A4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80351A68 0034E9A8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80351A6C 0034E9AC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80351A70 0034E9B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351A74 0034E9B4  D0 41 00 08 */	stfs f2, 8(r1)
/* 80351A78 0034E9B8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80351A7C 0034E9BC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80351A80 0034E9C0  7D 89 03 A6 */	mtctr r12
/* 80351A84 0034E9C4  4E 80 04 21 */	bctrl 
/* 80351A88 0034E9C8  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80351A8C 0034E9CC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80351A90 0034E9D0  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80351A94 0034E9D4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80351A98 0034E9D8  C0 21 00 08 */	lfs f1, 8(r1)
/* 80351A9C 0034E9DC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80351AA0 0034E9E0  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80351AA4 0034E9E4  EC 21 28 28 */	fsubs f1, f1, f5
/* 80351AA8 0034E9E8  EC 40 18 28 */	fsubs f2, f0, f3
/* 80351AAC 0034E9EC  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80351AB0 0034E9F0  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80351AB4 0034E9F4  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80351AB8 0034E9F8  4B CE 36 51 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80351ABC 0034E9FC  48 0C 01 15 */	bl roundAng__Ff
/* 80351AC0 0034EA00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80351AC4 0034EA04  FF A0 08 90 */	fmr f29, f1
/* 80351AC8 0034EA08  7F C3 F3 78 */	mr r3, r30
/* 80351ACC 0034EA0C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80351AD0 0034EA10  7D 89 03 A6 */	mtctr r12
/* 80351AD4 0034EA14  4E 80 04 21 */	bctrl 
/* 80351AD8 0034EA18  FC 40 08 90 */	fmr f2, f1
/* 80351ADC 0034EA1C  FC 20 E8 90 */	fmr f1, f29
/* 80351AE0 0034EA20  48 0C 01 1D */	bl angDist__Fff
/* 80351AE4 0034EA24  FC 00 0A 10 */	fabs f0, f1
/* 80351AE8 0034EA28  FC 00 00 18 */	frsp f0, f0
/* 80351AEC 0034EA2C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80351AF0 0034EA30  4C 40 13 82 */	cror 2, 0, 2
/* 80351AF4 0034EA34  40 82 00 BC */	bne .L_80351BB0
/* 80351AF8 0034EA38  7F 83 E3 78 */	mr r3, r28
/* 80351AFC 0034EA3C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351B00 0034EA40  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 80351B04 0034EA44  7D 89 03 A6 */	mtctr r12
/* 80351B08 0034EA48  4E 80 04 21 */	bctrl 
/* 80351B0C 0034EA4C  7C 7D 1B 78 */	mr r29, r3
/* 80351B10 0034EA50  7F 83 E3 78 */	mr r3, r28
/* 80351B14 0034EA54  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351B18 0034EA58  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80351B1C 0034EA5C  7D 89 03 A6 */	mtctr r12
/* 80351B20 0034EA60  4E 80 04 21 */	bctrl 
/* 80351B24 0034EA64  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80351B28 0034EA68  28 00 00 01 */	cmplwi r0, 1
/* 80351B2C 0034EA6C  40 82 00 3C */	bne .L_80351B68
/* 80351B30 0034EA70  2C 1D 00 00 */	cmpwi r29, 0
/* 80351B34 0034EA74  41 82 00 0C */	beq .L_80351B40
/* 80351B38 0034EA78  2C 1D 00 01 */	cmpwi r29, 1
/* 80351B3C 0034EA7C  40 82 00 2C */	bne .L_80351B68
.L_80351B40:
/* 80351B40 0034EA80  7F 83 E3 78 */	mr r3, r28
/* 80351B44 0034EA84  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351B48 0034EA88  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 80351B4C 0034EA8C  7D 89 03 A6 */	mtctr r12
/* 80351B50 0034EA90  4E 80 04 21 */	bctrl 
/* 80351B54 0034EA94  7C 64 1B 78 */	mr r4, r3
/* 80351B58 0034EA98  38 62 01 C8 */	addi r3, r2, lbl_8051E528@sda21
/* 80351B5C 0034EA9C  4B D7 8B 65 */	bl strcmp
/* 80351B60 0034EAA0  2C 03 00 00 */	cmpwi r3, 0
/* 80351B64 0034EAA4  41 82 00 4C */	beq .L_80351BB0
.L_80351B68:
/* 80351B68 0034EAA8  7F 84 E3 78 */	mr r4, r28
/* 80351B6C 0034EAAC  38 61 00 38 */	addi r3, r1, 0x38
/* 80351B70 0034EAB0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80351B74 0034EAB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351B78 0034EAB8  7D 89 03 A6 */	mtctr r12
/* 80351B7C 0034EABC  4E 80 04 21 */	bctrl 
/* 80351B80 0034EAC0  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 80351B84 0034EAC4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80351B88 0034EAC8  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 80351B8C 0034EACC  EC 21 00 28 */	fsubs f1, f1, f0
/* 80351B90 0034EAD0  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80351B94 0034EAD4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80351B98 0034EAD8  EC 01 00 72 */	fmuls f0, f1, f1
/* 80351B9C 0034EADC  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80351BA0 0034EAE0  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80351BA4 0034EAE4  40 80 00 0C */	bge .L_80351BB0
/* 80351BA8 0034EAE8  7F 9F E3 78 */	mr r31, r28
/* 80351BAC 0034EAEC  FF E0 00 90 */	fmr f31, f0
.L_80351BB0:
/* 80351BB0 0034EAF0  38 61 00 50 */	addi r3, r1, 0x50
/* 80351BB4 0034EAF4  4B E1 AE 81 */	bl next__Q24Game14PelletIteratorFv
.L_80351BB8:
/* 80351BB8 0034EAF8  38 61 00 50 */	addi r3, r1, 0x50
/* 80351BBC 0034EAFC  4B E1 AF 39 */	bl isDone__Q24Game14PelletIteratorFv
/* 80351BC0 0034EB00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80351BC4 0034EB04  41 82 FD 88 */	beq .L_8035194C
/* 80351BC8 0034EB08  7F E3 FB 78 */	mr r3, r31
/* 80351BCC 0034EB0C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80351BD0 0034EB10  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80351BD4 0034EB14  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80351BD8 0034EB18  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80351BDC 0034EB1C  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80351BE0 0034EB20  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80351BE4 0034EB24  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80351BE8 0034EB28  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80351BEC 0034EB2C  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 80351BF0 0034EB30  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80351BF4 0034EB34  83 81 00 60 */	lwz r28, 0x60(r1)
/* 80351BF8 0034EB38  7C 08 03 A6 */	mtlr r0
/* 80351BFC 0034EB3C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80351C00 0034EB40  4E 80 00 20 */	blr 
.endfn findNearestPellet__Q34Game13PanModokiBase3ObjFv

.fn getCarryTarget__Q34Game13PanModokiBase3ObjFv, global
/* 80351C04 0034EB44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80351C08 0034EB48  7C 08 02 A6 */	mflr r0
/* 80351C0C 0034EB4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80351C10 0034EB50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80351C14 0034EB54  7C 7F 1B 78 */	mr r31, r3
/* 80351C18 0034EB58  80 63 02 30 */	lwz r3, 0x230(r3)
/* 80351C1C 0034EB5C  28 03 00 00 */	cmplwi r3, 0
/* 80351C20 0034EB60  40 82 00 0C */	bne .L_80351C2C
/* 80351C24 0034EB64  38 60 00 00 */	li r3, 0
/* 80351C28 0034EB68  48 00 00 30 */	b .L_80351C58
.L_80351C2C:
/* 80351C2C 0034EB6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80351C30 0034EB70  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80351C34 0034EB74  7D 89 03 A6 */	mtctr r12
/* 80351C38 0034EB78  4E 80 04 21 */	bctrl 
/* 80351C3C 0034EB7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80351C40 0034EB80  41 82 00 14 */	beq .L_80351C54
/* 80351C44 0034EB84  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80351C48 0034EB88  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80351C4C 0034EB8C  80 63 00 04 */	lwz r3, 4(r3)
/* 80351C50 0034EB90  48 00 00 08 */	b .L_80351C58
.L_80351C54:
/* 80351C54 0034EB94  80 7F 02 30 */	lwz r3, 0x230(r31)
.L_80351C58:
/* 80351C58 0034EB98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80351C5C 0034EB9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80351C60 0034EBA0  7C 08 03 A6 */	mtlr r0
/* 80351C64 0034EBA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80351C68 0034EBA8  4E 80 00 20 */	blr 
.endfn getCarryTarget__Q34Game13PanModokiBase3ObjFv

.fn releaseCarryTarget__Q34Game13PanModokiBase3ObjFv, global
/* 80351C6C 0034EBAC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80351C70 0034EBB0  7C 08 02 A6 */	mflr r0
/* 80351C74 0034EBB4  90 01 00 54 */	stw r0, 0x54(r1)
/* 80351C78 0034EBB8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80351C7C 0034EBBC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80351C80 0034EBC0  7C 7E 1B 78 */	mr r30, r3
/* 80351C84 0034EBC4  80 63 02 30 */	lwz r3, 0x230(r3)
/* 80351C88 0034EBC8  28 03 00 00 */	cmplwi r3, 0
/* 80351C8C 0034EBCC  40 82 00 0C */	bne .L_80351C98
/* 80351C90 0034EBD0  3B E0 00 00 */	li r31, 0
/* 80351C94 0034EBD4  48 00 00 30 */	b .L_80351CC4
.L_80351C98:
/* 80351C98 0034EBD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80351C9C 0034EBDC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80351CA0 0034EBE0  7D 89 03 A6 */	mtctr r12
/* 80351CA4 0034EBE4  4E 80 04 21 */	bctrl 
/* 80351CA8 0034EBE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80351CAC 0034EBEC  41 82 00 14 */	beq .L_80351CC0
/* 80351CB0 0034EBF0  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 80351CB4 0034EBF4  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80351CB8 0034EBF8  83 E3 00 04 */	lwz r31, 4(r3)
/* 80351CBC 0034EBFC  48 00 00 08 */	b .L_80351CC4
.L_80351CC0:
/* 80351CC0 0034EC00  83 FE 02 30 */	lwz r31, 0x230(r30)
.L_80351CC4:
/* 80351CC4 0034EC04  28 1F 00 00 */	cmplwi r31, 0
/* 80351CC8 0034EC08  41 82 01 68 */	beq .L_80351E30
/* 80351CCC 0034EC0C  7F C3 F3 78 */	mr r3, r30
/* 80351CD0 0034EC10  4B DB 57 25 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80351CD4 0034EC14  2C 03 00 02 */	cmpwi r3, 2
/* 80351CD8 0034EC18  40 82 00 60 */	bne .L_80351D38
/* 80351CDC 0034EC1C  7F E4 FB 78 */	mr r4, r31
/* 80351CE0 0034EC20  38 61 00 08 */	addi r3, r1, 8
/* 80351CE4 0034EC24  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351CE8 0034EC28  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80351CEC 0034EC2C  7D 89 03 A6 */	mtctr r12
/* 80351CF0 0034EC30  4E 80 04 21 */	bctrl 
/* 80351CF4 0034EC34  C0 01 00 08 */	lfs f0, 8(r1)
/* 80351CF8 0034EC38  7F E3 FB 78 */	mr r3, r31
/* 80351CFC 0034EC3C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80351D00 0034EC40  38 81 00 20 */	addi r4, r1, 0x20
/* 80351D04 0034EC44  FC 20 00 50 */	fneg f1, f0
/* 80351D08 0034EC48  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80351D0C 0034EC4C  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80351D10 0034EC50  FC 00 10 50 */	fneg f0, f2
/* 80351D14 0034EC54  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80351D18 0034EC58  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80351D1C 0034EC5C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80351D20 0034EC60  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80351D24 0034EC64  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351D28 0034EC68  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80351D2C 0034EC6C  7D 89 03 A6 */	mtctr r12
/* 80351D30 0034EC70  4E 80 04 21 */	bctrl 
/* 80351D34 0034EC74  48 00 00 E8 */	b .L_80351E1C
.L_80351D38:
/* 80351D38 0034EC78  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 80351D3C 0034EC7C  28 00 00 00 */	cmplwi r0, 0
/* 80351D40 0034EC80  41 82 00 DC */	beq .L_80351E1C
/* 80351D44 0034EC84  7F E3 FB 78 */	mr r3, r31
/* 80351D48 0034EC88  4B E4 DE 55 */	bl endCapture__Q24Game8CreatureFv
/* 80351D4C 0034EC8C  C0 7E 01 FC */	lfs f3, 0x1fc(r30)
/* 80351D50 0034EC90  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80351D54 0034EC94  FC 20 18 90 */	fmr f1, f3
/* 80351D58 0034EC98  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80351D5C 0034EC9C  40 80 00 08 */	bge .L_80351D64
/* 80351D60 0034ECA0  FC 20 18 50 */	fneg f1, f3
.L_80351D64:
/* 80351D64 0034ECA4  C0 42 01 68 */	lfs f2, lbl_8051E4C8@sda21(r2)
/* 80351D68 0034ECA8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80351D6C 0034ECAC  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80351D70 0034ECB0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80351D74 0034ECB4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80351D78 0034ECB8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80351D7C 0034ECBC  FC 00 08 1E */	fctiwz f0, f1
/* 80351D80 0034ECC0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80351D84 0034ECC4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80351D88 0034ECC8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80351D8C 0034ECCC  7C 64 02 14 */	add r3, r4, r0
/* 80351D90 0034ECD0  C0 A3 00 04 */	lfs f5, 4(r3)
/* 80351D94 0034ECD4  40 80 00 28 */	bge .L_80351DBC
/* 80351D98 0034ECD8  C0 02 01 6C */	lfs f0, lbl_8051E4CC@sda21(r2)
/* 80351D9C 0034ECDC  EC 03 00 32 */	fmuls f0, f3, f0
/* 80351DA0 0034ECE0  FC 00 00 1E */	fctiwz f0, f0
/* 80351DA4 0034ECE4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80351DA8 0034ECE8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80351DAC 0034ECEC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80351DB0 0034ECF0  7C 04 04 2E */	lfsx f0, r4, r0
/* 80351DB4 0034ECF4  FC 80 00 50 */	fneg f4, f0
/* 80351DB8 0034ECF8  48 00 00 1C */	b .L_80351DD4
.L_80351DBC:
/* 80351DBC 0034ECFC  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80351DC0 0034ED00  FC 00 00 1E */	fctiwz f0, f0
/* 80351DC4 0034ED04  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80351DC8 0034ED08  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80351DCC 0034ED0C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80351DD0 0034ED10  7C 84 04 2E */	lfsx f4, r4, r0
.L_80351DD4:
/* 80351DD4 0034ED14  FC 40 20 18 */	frsp f2, f4
/* 80351DD8 0034ED18  C0 22 01 78 */	lfs f1, lbl_8051E4D8@sda21(r2)
/* 80351DDC 0034ED1C  C0 62 01 30 */	lfs f3, lbl_8051E490@sda21(r2)
/* 80351DE0 0034ED20  7F E3 FB 78 */	mr r3, r31
/* 80351DE4 0034ED24  EC 05 00 72 */	fmuls f0, f5, f1
/* 80351DE8 0034ED28  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80351DEC 0034ED2C  EC 42 00 72 */	fmuls f2, f2, f1
/* 80351DF0 0034ED30  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 80351DF4 0034ED34  C0 22 01 94 */	lfs f1, lbl_8051E4F4@sda21(r2)
/* 80351DF8 0034ED38  38 81 00 14 */	addi r4, r1, 0x14
/* 80351DFC 0034ED3C  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 80351E00 0034ED40  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80351E04 0034ED44  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80351E08 0034ED48  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80351E0C 0034ED4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351E10 0034ED50  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80351E14 0034ED54  7D 89 03 A6 */	mtctr r12
/* 80351E18 0034ED58  4E 80 04 21 */	bctrl 
.L_80351E1C:
/* 80351E1C 0034ED5C  7F C3 F3 78 */	mr r3, r30
/* 80351E20 0034ED60  4B E4 D6 05 */	bl endStick__Q24Game8CreatureFv
/* 80351E24 0034ED64  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 80351E28 0034ED68  38 80 00 02 */	li r4, 2
/* 80351E2C 0034ED6C  4B EE 31 DD */	bl giveup__Q24Game11PelletCarryFUs
.L_80351E30:
/* 80351E30 0034ED70  38 00 00 00 */	li r0, 0
/* 80351E34 0034ED74  90 1E 02 30 */	stw r0, 0x230(r30)
/* 80351E38 0034ED78  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80351E3C 0034ED7C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80351E40 0034ED80  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80351E44 0034ED84  7C 08 03 A6 */	mtlr r0
/* 80351E48 0034ED88  38 21 00 50 */	addi r1, r1, 0x50
/* 80351E4C 0034ED8C  4E 80 00 20 */	blr 
.endfn releaseCarryTarget__Q34Game13PanModokiBase3ObjFv

.fn checkNearHomeGraphIndex__Q34Game13PanModokiBase3ObjFv, global
/* 80351E50 0034ED90  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80351E54 0034ED94  7C 08 02 A6 */	mflr r0
/* 80351E58 0034ED98  90 01 00 84 */	stw r0, 0x84(r1)
/* 80351E5C 0034ED9C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80351E60 0034EDA0  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80351E64 0034EDA4  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80351E68 0034EDA8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80351E6C 0034EDAC  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80351E70 0034EDB0  7C 7E 1B 78 */	mr r30, r3
/* 80351E74 0034EDB4  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80351E78 0034EDB8  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80351E7C 0034EDBC  38 00 00 00 */	li r0, 0
/* 80351E80 0034EDC0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80351E84 0034EDC4  38 81 00 40 */	addi r4, r1, 0x40
/* 80351E88 0034EDC8  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80351E8C 0034EDCC  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 80351E90 0034EDD0  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80351E94 0034EDD4  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 80351E98 0034EDD8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80351E9C 0034EDDC  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80351EA0 0034EDE0  98 01 00 50 */	stb r0, 0x50(r1)
/* 80351EA4 0034EDE4  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80351EA8 0034EDE8  83 E3 00 08 */	lwz r31, 8(r3)
/* 80351EAC 0034EDEC  7F E3 FB 78 */	mr r3, r31
/* 80351EB0 0034EDF0  4B E2 11 15 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 80351EB4 0034EDF4  7C 7D 1B 79 */	or. r29, r3, r3
/* 80351EB8 0034EDF8  40 82 00 20 */	bne .L_80351ED8
/* 80351EBC 0034EDFC  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80351EC0 0034EE00  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 80351EC4 0034EE04  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 80351EC8 0034EE08  38 80 05 59 */	li r4, 0x559
/* 80351ECC 0034EE0C  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 80351ED0 0034EE10  4C C6 31 82 */	crclr 6
/* 80351ED4 0034EE14  4B CD 87 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80351ED8:
/* 80351ED8 0034EE18  A8 1D 00 36 */	lha r0, 0x36(r29)
/* 80351EDC 0034EE1C  7F E3 FB 78 */	mr r3, r31
/* 80351EE0 0034EE20  B0 1E 02 E6 */	sth r0, 0x2e6(r30)
/* 80351EE4 0034EE24  B0 1E 02 EA */	sth r0, 0x2ea(r30)
/* 80351EE8 0034EE28  B0 1E 02 E8 */	sth r0, 0x2e8(r30)
/* 80351EEC 0034EE2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351EF0 0034EE30  A8 9E 02 E8 */	lha r4, 0x2e8(r30)
/* 80351EF4 0034EE34  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80351EF8 0034EE38  7D 89 03 A6 */	mtctr r12
/* 80351EFC 0034EE3C  4E 80 04 21 */	bctrl 
/* 80351F00 0034EE40  7C 7D 1B 79 */	or. r29, r3, r3
/* 80351F04 0034EE44  40 82 00 20 */	bne .L_80351F24
/* 80351F08 0034EE48  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80351F0C 0034EE4C  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 80351F10 0034EE50  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 80351F14 0034EE54  38 80 05 5E */	li r4, 0x55e
/* 80351F18 0034EE58  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 80351F1C 0034EE5C  4C C6 31 82 */	crclr 6
/* 80351F20 0034EE60  4B CD 87 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80351F24:
/* 80351F24 0034EE64  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 80351F28 0034EE68  38 A0 00 00 */	li r5, 0
/* 80351F2C 0034EE6C  C0 5D 00 54 */	lfs f2, 0x54(r29)
/* 80351F30 0034EE70  38 00 FF FF */	li r0, -1
/* 80351F34 0034EE74  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 80351F38 0034EE78  7F E3 FB 78 */	mr r3, r31
/* 80351F3C 0034EE7C  38 81 00 20 */	addi r4, r1, 0x20
/* 80351F40 0034EE80  D0 1E 02 BC */	stfs f0, 0x2bc(r30)
/* 80351F44 0034EE84  D0 3E 02 C0 */	stfs f1, 0x2c0(r30)
/* 80351F48 0034EE88  D0 5E 02 C4 */	stfs f2, 0x2c4(r30)
/* 80351F4C 0034EE8C  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 80351F50 0034EE90  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80351F54 0034EE94  98 A1 00 2C */	stb r5, 0x2c(r1)
/* 80351F58 0034EE98  B0 01 00 34 */	sth r0, 0x34(r1)
/* 80351F5C 0034EE9C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80351F60 0034EEA0  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 80351F64 0034EEA4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80351F68 0034EEA8  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 80351F6C 0034EEAC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80351F70 0034EEB0  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 80351F74 0034EEB4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80351F78 0034EEB8  4B E2 13 F5 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 80351F7C 0034EEBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80351F80 0034EEC0  41 82 00 60 */	beq .L_80351FE0
/* 80351F84 0034EEC4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80351F88 0034EEC8  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80351F8C 0034EECC  A8 63 00 36 */	lha r3, 0x36(r3)
/* 80351F90 0034EED0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80351F94 0034EED4  7C 60 1B 78 */	mr r0, r3
/* 80351F98 0034EED8  41 82 00 0C */	beq .L_80351FA4
/* 80351F9C 0034EEDC  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80351FA0 0034EEE0  A8 03 00 36 */	lha r0, 0x36(r3)
.L_80351FA4:
/* 80351FA4 0034EEE4  B0 1E 02 E6 */	sth r0, 0x2e6(r30)
/* 80351FA8 0034EEE8  7F E3 FB 78 */	mr r3, r31
/* 80351FAC 0034EEEC  B0 1E 02 EA */	sth r0, 0x2ea(r30)
/* 80351FB0 0034EEF0  B0 1E 02 E8 */	sth r0, 0x2e8(r30)
/* 80351FB4 0034EEF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80351FB8 0034EEF8  A8 9E 02 E8 */	lha r4, 0x2e8(r30)
/* 80351FBC 0034EEFC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80351FC0 0034EF00  7D 89 03 A6 */	mtctr r12
/* 80351FC4 0034EF04  4E 80 04 21 */	bctrl 
/* 80351FC8 0034EF08  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80351FCC 0034EF0C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80351FD0 0034EF10  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80351FD4 0034EF14  D0 1E 02 BC */	stfs f0, 0x2bc(r30)
/* 80351FD8 0034EF18  D0 3E 02 C0 */	stfs f1, 0x2c0(r30)
/* 80351FDC 0034EF1C  D0 5E 02 C4 */	stfs f2, 0x2c4(r30)
.L_80351FE0:
/* 80351FE0 0034EF20  7F C4 F3 78 */	mr r4, r30
/* 80351FE4 0034EF24  38 61 00 14 */	addi r3, r1, 0x14
/* 80351FE8 0034EF28  81 9E 00 00 */	lwz r12, 0(r30)
/* 80351FEC 0034EF2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80351FF0 0034EF30  7D 89 03 A6 */	mtctr r12
/* 80351FF4 0034EF34  4E 80 04 21 */	bctrl 
/* 80351FF8 0034EF38  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 80351FFC 0034EF3C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80352000 0034EF40  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 80352004 0034EF44  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80352008 0034EF48  C0 3E 02 BC */	lfs f1, 0x2bc(r30)
/* 8035200C 0034EF4C  C0 1E 02 C4 */	lfs f0, 0x2c4(r30)
/* 80352010 0034EF50  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 80352014 0034EF54  EC 21 28 28 */	fsubs f1, f1, f5
/* 80352018 0034EF58  EC 40 18 28 */	fsubs f2, f0, f3
/* 8035201C 0034EF5C  D0 A1 00 08 */	stfs f5, 8(r1)
/* 80352020 0034EF60  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80352024 0034EF64  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 80352028 0034EF68  4B CE 30 E1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8035202C 0034EF6C  48 0B FB A5 */	bl roundAng__Ff
/* 80352030 0034EF70  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352034 0034EF74  FF E0 08 90 */	fmr f31, f1
/* 80352038 0034EF78  7F C3 F3 78 */	mr r3, r30
/* 8035203C 0034EF7C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80352040 0034EF80  7D 89 03 A6 */	mtctr r12
/* 80352044 0034EF84  4E 80 04 21 */	bctrl 
/* 80352048 0034EF88  FC 40 08 90 */	fmr f2, f1
/* 8035204C 0034EF8C  FC 20 F8 90 */	fmr f1, f31
/* 80352050 0034EF90  48 0B FB AD */	bl angDist__Fff
/* 80352054 0034EF94  C0 02 01 54 */	lfs f0, lbl_8051E4B4@sda21(r2)
/* 80352058 0034EF98  C0 42 01 D0 */	lfs f2, lbl_8051E530@sda21(r2)
/* 8035205C 0034EF9C  EF E1 00 32 */	fmuls f31, f1, f0
/* 80352060 0034EFA0  FC 00 FA 10 */	fabs f0, f31
/* 80352064 0034EFA4  FC 00 00 18 */	frsp f0, f0
/* 80352068 0034EFA8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8035206C 0034EFAC  40 81 00 1C */	ble .L_80352088
/* 80352070 0034EFB0  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80352074 0034EFB4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80352078 0034EFB8  40 81 00 0C */	ble .L_80352084
/* 8035207C 0034EFBC  FF E0 10 90 */	fmr f31, f2
/* 80352080 0034EFC0  48 00 00 08 */	b .L_80352088
.L_80352084:
/* 80352084 0034EFC4  FF E0 10 50 */	fneg f31, f2
.L_80352088:
/* 80352088 0034EFC8  7F C3 F3 78 */	mr r3, r30
/* 8035208C 0034EFCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352090 0034EFD0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80352094 0034EFD4  7D 89 03 A6 */	mtctr r12
/* 80352098 0034EFD8  4E 80 04 21 */	bctrl 
/* 8035209C 0034EFDC  EC 3F 08 2A */	fadds f1, f31, f1
/* 803520A0 0034EFE0  48 0B FB 31 */	bl roundAng__Ff
/* 803520A4 0034EFE4  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 803520A8 0034EFE8  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 803520AC 0034EFEC  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 803520B0 0034EFF0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 803520B4 0034EFF4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803520B8 0034EFF8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 803520BC 0034EFFC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803520C0 0034F000  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803520C4 0034F004  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 803520C8 0034F008  7C 08 03 A6 */	mtlr r0
/* 803520CC 0034F00C  38 21 00 80 */	addi r1, r1, 0x80
/* 803520D0 0034F010  4E 80 00 20 */	blr 
.endfn checkNearHomeGraphIndex__Q34Game13PanModokiBase3ObjFv

.fn carryTarget__Q34Game13PanModokiBase3ObjFf, global
/* 803520D4 0034F014  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 803520D8 0034F018  7C 08 02 A6 */	mflr r0
/* 803520DC 0034F01C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 803520E0 0034F020  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 803520E4 0034F024  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 803520E8 0034F028  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 803520EC 0034F02C  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 803520F0 0034F030  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 803520F4 0034F034  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 803520F8 0034F038  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 803520FC 0034F03C  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80352100 0034F040  7C 7E 1B 78 */	mr r30, r3
/* 80352104 0034F044  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80352108 0034F048  80 63 02 30 */	lwz r3, 0x230(r3)
/* 8035210C 0034F04C  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 80352110 0034F050  28 03 00 00 */	cmplwi r3, 0
/* 80352114 0034F054  C3 C4 03 0C */	lfs f30, 0x30c(r4)
/* 80352118 0034F058  EF A1 00 32 */	fmuls f29, f1, f0
/* 8035211C 0034F05C  C3 E4 03 34 */	lfs f31, 0x334(r4)
/* 80352120 0034F060  40 82 00 0C */	bne .L_8035212C
/* 80352124 0034F064  3B E0 00 00 */	li r31, 0
/* 80352128 0034F068  48 00 00 30 */	b .L_80352158
.L_8035212C:
/* 8035212C 0034F06C  81 83 00 00 */	lwz r12, 0(r3)
/* 80352130 0034F070  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80352134 0034F074  7D 89 03 A6 */	mtctr r12
/* 80352138 0034F078  4E 80 04 21 */	bctrl 
/* 8035213C 0034F07C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352140 0034F080  41 82 00 14 */	beq .L_80352154
/* 80352144 0034F084  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 80352148 0034F088  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 8035214C 0034F08C  83 E3 00 04 */	lwz r31, 4(r3)
/* 80352150 0034F090  48 00 00 08 */	b .L_80352158
.L_80352154:
/* 80352154 0034F094  83 FE 02 30 */	lwz r31, 0x230(r30)
.L_80352158:
/* 80352158 0034F098  7F C3 F3 78 */	mr r3, r30
/* 8035215C 0034F09C  4B DB 52 99 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80352160 0034F0A0  2C 03 00 03 */	cmpwi r3, 3
/* 80352164 0034F0A4  40 82 00 AC */	bne .L_80352210
/* 80352168 0034F0A8  C0 02 01 70 */	lfs f0, lbl_8051E4D0@sda21(r2)
/* 8035216C 0034F0AC  28 1F 00 00 */	cmplwi r31, 0
/* 80352170 0034F0B0  EF DE 00 32 */	fmuls f30, f30, f0
/* 80352174 0034F0B4  41 82 00 9C */	beq .L_80352210
/* 80352178 0034F0B8  7F E3 FB 78 */	mr r3, r31
/* 8035217C 0034F0BC  4B E1 66 21 */	bl getStateID__Q24Game6PelletFv
/* 80352180 0034F0C0  2C 03 00 01 */	cmpwi r3, 1
/* 80352184 0034F0C4  41 82 00 8C */	beq .L_80352210
/* 80352188 0034F0C8  7F E4 FB 78 */	mr r4, r31
/* 8035218C 0034F0CC  38 61 00 5C */	addi r3, r1, 0x5c
/* 80352190 0034F0D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80352194 0034F0D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80352198 0034F0D8  7D 89 03 A6 */	mtctr r12
/* 8035219C 0034F0DC  4E 80 04 21 */	bctrl 
/* 803521A0 0034F0E0  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 803521A4 0034F0E4  7F E4 FB 78 */	mr r4, r31
/* 803521A8 0034F0E8  38 61 00 50 */	addi r3, r1, 0x50
/* 803521AC 0034F0EC  D0 1E 02 BC */	stfs f0, 0x2bc(r30)
/* 803521B0 0034F0F0  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 803521B4 0034F0F4  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
/* 803521B8 0034F0F8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 803521BC 0034F0FC  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
/* 803521C0 0034F100  81 9F 00 00 */	lwz r12, 0(r31)
/* 803521C4 0034F104  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803521C8 0034F108  7D 89 03 A6 */	mtctr r12
/* 803521CC 0034F10C  4E 80 04 21 */	bctrl 
/* 803521D0 0034F110  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 803521D4 0034F114  7F E4 FB 78 */	mr r4, r31
/* 803521D8 0034F118  C0 22 01 B8 */	lfs f1, lbl_8051E518@sda21(r2)
/* 803521DC 0034F11C  38 61 00 44 */	addi r3, r1, 0x44
/* 803521E0 0034F120  C0 1E 02 BC */	lfs f0, 0x2bc(r30)
/* 803521E4 0034F124  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 803521E8 0034F128  D0 1E 02 BC */	stfs f0, 0x2bc(r30)
/* 803521EC 0034F12C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803521F0 0034F130  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803521F4 0034F134  7D 89 03 A6 */	mtctr r12
/* 803521F8 0034F138  4E 80 04 21 */	bctrl 
/* 803521FC 0034F13C  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 80352200 0034F140  C0 22 01 B8 */	lfs f1, lbl_8051E518@sda21(r2)
/* 80352204 0034F144  C0 1E 02 C4 */	lfs f0, 0x2c4(r30)
/* 80352208 0034F148  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 8035220C 0034F14C  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
.L_80352210:
/* 80352210 0034F150  C0 3E 02 BC */	lfs f1, 0x2bc(r30)
/* 80352214 0034F154  C0 02 01 D4 */	lfs f0, lbl_8051E534@sda21(r2)
/* 80352218 0034F158  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8035221C 0034F15C  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 80352220 0034F160  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 80352224 0034F164  C0 3E 02 C4 */	lfs f1, 0x2c4(r30)
/* 80352228 0034F168  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8035222C 0034F16C  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 80352230 0034F170  C0 3E 02 C4 */	lfs f1, 0x2c4(r30)
/* 80352234 0034F174  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 80352238 0034F178  EC 42 08 28 */	fsubs f2, f2, f1
/* 8035223C 0034F17C  C0 3E 02 BC */	lfs f1, 0x2bc(r30)
/* 80352240 0034F180  EC 63 08 28 */	fsubs f3, f3, f1
/* 80352244 0034F184  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80352248 0034F188  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8035224C 0034F18C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352250 0034F190  40 80 00 10 */	bge .L_80352260
/* 80352254 0034F194  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80352258 0034F198  C3 C3 08 6C */	lfs f30, 0x86c(r3)
/* 8035225C 0034F19C  C3 E3 08 94 */	lfs f31, 0x894(r3)
.L_80352260:
/* 80352260 0034F1A0  28 1F 00 00 */	cmplwi r31, 0
/* 80352264 0034F1A4  41 82 03 54 */	beq .L_803525B8
/* 80352268 0034F1A8  C0 1E 02 C8 */	lfs f0, 0x2c8(r30)
/* 8035226C 0034F1AC  FC 20 E8 90 */	fmr f1, f29
/* 80352270 0034F1B0  FC 40 F0 90 */	fmr f2, f30
/* 80352274 0034F1B4  7F C3 F3 78 */	mr r3, r30
/* 80352278 0034F1B8  FC 60 F8 90 */	fmr f3, f31
/* 8035227C 0034F1BC  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
/* 80352280 0034F1C0  38 81 00 74 */	addi r4, r1, 0x74
/* 80352284 0034F1C4  4B DC 33 59 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 80352288 0034F1C8  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 8035228C 0034F1CC  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 80352290 0034F1D0  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 80352294 0034F1D4  C3 FE 01 D4 */	lfs f31, 0x1d4(r30)
/* 80352298 0034F1D8  28 03 00 00 */	cmplwi r3, 0
/* 8035229C 0034F1DC  C3 DE 01 DC */	lfs f30, 0x1dc(r30)
/* 803522A0 0034F1E0  40 82 00 0C */	bne .L_803522AC
/* 803522A4 0034F1E4  38 80 00 00 */	li r4, 0
/* 803522A8 0034F1E8  48 00 00 30 */	b .L_803522D8
.L_803522AC:
/* 803522AC 0034F1EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803522B0 0034F1F0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803522B4 0034F1F4  7D 89 03 A6 */	mtctr r12
/* 803522B8 0034F1F8  4E 80 04 21 */	bctrl 
/* 803522BC 0034F1FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803522C0 0034F200  41 82 00 14 */	beq .L_803522D4
/* 803522C4 0034F204  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 803522C8 0034F208  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 803522CC 0034F20C  80 83 00 04 */	lwz r4, 4(r3)
/* 803522D0 0034F210  48 00 00 08 */	b .L_803522D8
.L_803522D4:
/* 803522D4 0034F214  80 9E 02 30 */	lwz r4, 0x230(r30)
.L_803522D8:
/* 803522D8 0034F218  81 84 00 00 */	lwz r12, 0(r4)
/* 803522DC 0034F21C  38 61 00 38 */	addi r3, r1, 0x38
/* 803522E0 0034F220  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803522E4 0034F224  7D 89 03 A6 */	mtctr r12
/* 803522E8 0034F228  4E 80 04 21 */	bctrl 
/* 803522EC 0034F22C  C0 C1 00 38 */	lfs f6, 0x38(r1)
/* 803522F0 0034F230  C0 A1 00 40 */	lfs f5, 0x40(r1)
/* 803522F4 0034F234  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 803522F8 0034F238  EC 7F 30 28 */	fsubs f3, f31, f6
/* 803522FC 0034F23C  D0 C1 00 68 */	stfs f6, 0x68(r1)
/* 80352300 0034F240  ED 1E 28 28 */	fsubs f8, f30, f5
/* 80352304 0034F244  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80352308 0034F248  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 8035230C 0034F24C  C0 02 01 D8 */	lfs f0, lbl_8051E538@sda21(r2)
/* 80352310 0034F250  D0 A1 00 70 */	stfs f5, 0x70(r1)
/* 80352314 0034F254  C0 82 01 30 */	lfs f4, lbl_8051E490@sda21(r2)
/* 80352318 0034F258  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8035231C 0034F25C  EC E4 10 28 */	fsubs f7, f4, f2
/* 80352320 0034F260  EC 01 00 24 */	fdivs f0, f1, f0
/* 80352324 0034F264  EC 27 00 32 */	fmuls f1, f7, f0
/* 80352328 0034F268  EC 63 00 32 */	fmuls f3, f3, f0
/* 8035232C 0034F26C  EC 08 00 32 */	fmuls f0, f8, f0
/* 80352330 0034F270  EC 42 08 2A */	fadds f2, f2, f1
/* 80352334 0034F274  EC 66 18 2A */	fadds f3, f6, f3
/* 80352338 0034F278  EC 25 00 2A */	fadds f1, f5, f0
/* 8035233C 0034F27C  EC 02 20 2A */	fadds f0, f2, f4
/* 80352340 0034F280  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 80352344 0034F284  D0 61 00 68 */	stfs f3, 0x68(r1)
/* 80352348 0034F288  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 8035234C 0034F28C  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80352350 0034F290  D3 E1 00 68 */	stfs f31, 0x68(r1)
/* 80352354 0034F294  D3 C1 00 70 */	stfs f30, 0x70(r1)
/* 80352358 0034F298  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8035235C 0034F29C  88 03 09 9A */	lbz r0, 0x99a(r3)
/* 80352360 0034F2A0  28 00 00 00 */	cmplwi r0, 0
/* 80352364 0034F2A4  41 82 01 64 */	beq .L_803524C8
/* 80352368 0034F2A8  28 1F 00 00 */	cmplwi r31, 0
/* 8035236C 0034F2AC  41 82 01 5C */	beq .L_803524C8
/* 80352370 0034F2B0  88 1E 03 1C */	lbz r0, 0x31c(r30)
/* 80352374 0034F2B4  28 00 00 00 */	cmplwi r0, 0
/* 80352378 0034F2B8  40 82 00 74 */	bne .L_803523EC
/* 8035237C 0034F2BC  80 7E 03 14 */	lwz r3, 0x314(r30)
/* 80352380 0034F2C0  38 03 00 01 */	addi r0, r3, 1
/* 80352384 0034F2C4  90 1E 03 14 */	stw r0, 0x314(r30)
/* 80352388 0034F2C8  80 1E 03 14 */	lwz r0, 0x314(r30)
/* 8035238C 0034F2CC  2C 00 00 5A */	cmpwi r0, 0x5a
/* 80352390 0034F2D0  40 81 00 5C */	ble .L_803523EC
/* 80352394 0034F2D4  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 80352398 0034F2D8  C0 1E 03 10 */	lfs f0, 0x310(r30)
/* 8035239C 0034F2DC  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 803523A0 0034F2E0  EC 61 00 28 */	fsubs f3, f1, f0
/* 803523A4 0034F2E4  C0 3E 03 08 */	lfs f1, 0x308(r30)
/* 803523A8 0034F2E8  C0 02 01 94 */	lfs f0, lbl_8051E4F4@sda21(r2)
/* 803523AC 0034F2EC  EC 42 08 28 */	fsubs f2, f2, f1
/* 803523B0 0034F2F0  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803523B4 0034F2F4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803523B8 0034F2F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803523BC 0034F2FC  40 80 00 10 */	bge .L_803523CC
/* 803523C0 0034F300  38 00 00 01 */	li r0, 1
/* 803523C4 0034F304  98 1E 03 1C */	stb r0, 0x31c(r30)
/* 803523C8 0034F308  48 00 00 0C */	b .L_803523D4
.L_803523CC:
/* 803523CC 0034F30C  38 00 00 00 */	li r0, 0
/* 803523D0 0034F310  90 1E 03 14 */	stw r0, 0x314(r30)
.L_803523D4:
/* 803523D4 0034F314  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 803523D8 0034F318  D0 1E 03 08 */	stfs f0, 0x308(r30)
/* 803523DC 0034F31C  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 803523E0 0034F320  D0 1E 03 0C */	stfs f0, 0x30c(r30)
/* 803523E4 0034F324  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 803523E8 0034F328  D0 1E 03 10 */	stfs f0, 0x310(r30)
.L_803523EC:
/* 803523EC 0034F32C  88 1E 03 1C */	lbz r0, 0x31c(r30)
/* 803523F0 0034F330  28 00 00 00 */	cmplwi r0, 0
/* 803523F4 0034F334  40 82 00 98 */	bne .L_8035248C
/* 803523F8 0034F338  C0 3E 00 CC */	lfs f1, 0xcc(r30)
/* 803523FC 0034F33C  C0 02 01 58 */	lfs f0, lbl_8051E4B8@sda21(r2)
/* 80352400 0034F340  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352404 0034F344  40 81 00 14 */	ble .L_80352418
/* 80352408 0034F348  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 8035240C 0034F34C  FC 00 00 50 */	fneg f0, f0
/* 80352410 0034F350  D0 1E 03 20 */	stfs f0, 0x320(r30)
/* 80352414 0034F354  48 00 00 2C */	b .L_80352440
.L_80352418:
/* 80352418 0034F358  C0 02 01 BC */	lfs f0, lbl_8051E51C@sda21(r2)
/* 8035241C 0034F35C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352420 0034F360  40 80 00 10 */	bge .L_80352430
/* 80352424 0034F364  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80352428 0034F368  D0 1E 03 20 */	stfs f0, 0x320(r30)
/* 8035242C 0034F36C  48 00 00 14 */	b .L_80352440
.L_80352430:
/* 80352430 0034F370  C0 3E 03 20 */	lfs f1, 0x320(r30)
/* 80352434 0034F374  C0 02 01 DC */	lfs f0, lbl_8051E53C@sda21(r2)
/* 80352438 0034F378  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035243C 0034F37C  D0 1E 03 20 */	stfs f0, 0x320(r30)
.L_80352440:
/* 80352440 0034F380  C0 3E 00 D4 */	lfs f1, 0xd4(r30)
/* 80352444 0034F384  C0 02 01 58 */	lfs f0, lbl_8051E4B8@sda21(r2)
/* 80352448 0034F388  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035244C 0034F38C  40 81 00 14 */	ble .L_80352460
/* 80352450 0034F390  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80352454 0034F394  FC 00 00 50 */	fneg f0, f0
/* 80352458 0034F398  D0 1E 03 28 */	stfs f0, 0x328(r30)
/* 8035245C 0034F39C  48 00 00 4C */	b .L_803524A8
.L_80352460:
/* 80352460 0034F3A0  C0 02 01 BC */	lfs f0, lbl_8051E51C@sda21(r2)
/* 80352464 0034F3A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352468 0034F3A8  40 80 00 10 */	bge .L_80352478
/* 8035246C 0034F3AC  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80352470 0034F3B0  D0 1E 03 28 */	stfs f0, 0x328(r30)
/* 80352474 0034F3B4  48 00 00 34 */	b .L_803524A8
.L_80352478:
/* 80352478 0034F3B8  C0 3E 03 28 */	lfs f1, 0x328(r30)
/* 8035247C 0034F3BC  C0 02 01 DC */	lfs f0, lbl_8051E53C@sda21(r2)
/* 80352480 0034F3C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80352484 0034F3C4  D0 1E 03 28 */	stfs f0, 0x328(r30)
/* 80352488 0034F3C8  48 00 00 20 */	b .L_803524A8
.L_8035248C:
/* 8035248C 0034F3CC  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80352490 0034F3D0  C0 22 01 70 */	lfs f1, lbl_8051E4D0@sda21(r2)
/* 80352494 0034F3D4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80352498 0034F3D8  D0 1E 03 20 */	stfs f0, 0x320(r30)
/* 8035249C 0034F3DC  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 803524A0 0034F3E0  EC 00 00 72 */	fmuls f0, f0, f1
/* 803524A4 0034F3E4  D0 1E 03 28 */	stfs f0, 0x328(r30)
.L_803524A8:
/* 803524A8 0034F3E8  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 803524AC 0034F3EC  C0 1E 03 20 */	lfs f0, 0x320(r30)
/* 803524B0 0034F3F0  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 803524B4 0034F3F4  EC 02 00 2A */	fadds f0, f2, f0
/* 803524B8 0034F3F8  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 803524BC 0034F3FC  C0 1E 03 28 */	lfs f0, 0x328(r30)
/* 803524C0 0034F400  EC 01 00 2A */	fadds f0, f1, f0
/* 803524C4 0034F404  D0 01 00 70 */	stfs f0, 0x70(r1)
.L_803524C8:
/* 803524C8 0034F408  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 803524CC 0034F40C  38 A1 00 68 */	addi r5, r1, 0x68
/* 803524D0 0034F410  C0 3E 03 7C */	lfs f1, 0x37c(r30)
/* 803524D4 0034F414  38 80 00 02 */	li r4, 2
/* 803524D8 0034F418  4B EE 2A 79 */	bl "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
/* 803524DC 0034F41C  7F E4 FB 78 */	mr r4, r31
/* 803524E0 0034F420  38 61 00 20 */	addi r3, r1, 0x20
/* 803524E4 0034F424  81 9F 00 00 */	lwz r12, 0(r31)
/* 803524E8 0034F428  81 8C 00 08 */	lwz r12, 8(r12)
/* 803524EC 0034F42C  7D 89 03 A6 */	mtctr r12
/* 803524F0 0034F430  4E 80 04 21 */	bctrl 
/* 803524F4 0034F434  7F C4 F3 78 */	mr r4, r30
/* 803524F8 0034F438  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 803524FC 0034F43C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352500 0034F440  38 61 00 2C */	addi r3, r1, 0x2c
/* 80352504 0034F444  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80352508 0034F448  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8035250C 0034F44C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80352510 0034F450  D0 41 00 08 */	stfs f2, 8(r1)
/* 80352514 0034F454  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80352518 0034F458  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8035251C 0034F45C  7D 89 03 A6 */	mtctr r12
/* 80352520 0034F460  4E 80 04 21 */	bctrl 
/* 80352524 0034F464  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80352528 0034F468  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8035252C 0034F46C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80352530 0034F470  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80352534 0034F474  C0 21 00 08 */	lfs f1, 8(r1)
/* 80352538 0034F478  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035253C 0034F47C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80352540 0034F480  EC 21 28 28 */	fsubs f1, f1, f5
/* 80352544 0034F484  EC 40 18 28 */	fsubs f2, f0, f3
/* 80352548 0034F488  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8035254C 0034F48C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80352550 0034F490  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80352554 0034F494  4B CE 2B B5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80352558 0034F498  48 0B F6 79 */	bl roundAng__Ff
/* 8035255C 0034F49C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352560 0034F4A0  FF A0 08 90 */	fmr f29, f1
/* 80352564 0034F4A4  7F C3 F3 78 */	mr r3, r30
/* 80352568 0034F4A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035256C 0034F4AC  7D 89 03 A6 */	mtctr r12
/* 80352570 0034F4B0  4E 80 04 21 */	bctrl 
/* 80352574 0034F4B4  FC 40 08 90 */	fmr f2, f1
/* 80352578 0034F4B8  FC 20 E8 90 */	fmr f1, f29
/* 8035257C 0034F4BC  48 0B F6 81 */	bl angDist__Fff
/* 80352580 0034F4C0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 80352584 0034F4C4  EC 20 08 2A */	fadds f1, f0, f1
/* 80352588 0034F4C8  48 0B F6 49 */	bl roundAng__Ff
/* 8035258C 0034F4CC  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 80352590 0034F4D0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 80352594 0034F4D4  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 80352598 0034F4D8  C0 5E 02 C8 */	lfs f2, 0x2c8(r30)
/* 8035259C 0034F4DC  C0 3E 02 DC */	lfs f1, 0x2dc(r30)
/* 803525A0 0034F4E0  C0 1E 02 E0 */	lfs f0, 0x2e0(r30)
/* 803525A4 0034F4E4  EC 22 08 2A */	fadds f1, f2, f1
/* 803525A8 0034F4E8  EC 21 00 28 */	fsubs f1, f1, f0
/* 803525AC 0034F4EC  48 0B F6 25 */	bl roundAng__Ff
/* 803525B0 0034F4F0  7F E3 FB 78 */	mr r3, r31
/* 803525B4 0034F4F4  4B E1 5D B9 */	bl setPanModokiRotation__Q24Game6PelletFf
.L_803525B8:
/* 803525B8 0034F4F8  38 60 00 00 */	li r3, 0
/* 803525BC 0034F4FC  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 803525C0 0034F500  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 803525C4 0034F504  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 803525C8 0034F508  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 803525CC 0034F50C  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 803525D0 0034F510  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 803525D4 0034F514  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 803525D8 0034F518  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 803525DC 0034F51C  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 803525E0 0034F520  7C 08 03 A6 */	mtlr r0
/* 803525E4 0034F524  38 21 00 C0 */	addi r1, r1, 0xc0
/* 803525E8 0034F528  4E 80 00 20 */	blr 
.endfn carryTarget__Q34Game13PanModokiBase3ObjFf

.fn changeCarryDir__Q34Game13PanModokiBase3ObjFb, global
/* 803525EC 0034F52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803525F0 0034F530  7C 08 02 A6 */	mflr r0
/* 803525F4 0034F534  90 01 00 14 */	stw r0, 0x14(r1)
/* 803525F8 0034F538  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 803525FC 0034F53C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80352600 0034F540  7C 7F 1B 78 */	mr r31, r3
/* 80352604 0034F544  41 82 00 10 */	beq .L_80352614
/* 80352608 0034F548  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8035260C 0034F54C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80352610 0034F550  48 00 00 18 */	b .L_80352628
.L_80352614:
/* 80352614 0034F554  C0 22 01 64 */	lfs f1, lbl_8051E4C4@sda21(r2)
/* 80352618 0034F558  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8035261C 0034F55C  EC 21 00 2A */	fadds f1, f1, f0
/* 80352620 0034F560  48 0B F5 B1 */	bl roundAng__Ff
/* 80352624 0034F564  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
.L_80352628:
/* 80352628 0034F568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035262C 0034F56C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80352630 0034F570  7C 08 03 A6 */	mtlr r0
/* 80352634 0034F574  38 21 00 10 */	addi r1, r1, 0x10
/* 80352638 0034F578  4E 80 00 20 */	blr 
.endfn changeCarryDir__Q34Game13PanModokiBase3ObjFb

.fn setCarryDir__Q34Game13PanModokiBase3ObjFb, global
/* 8035263C 0034F57C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80352640 0034F580  7C 08 02 A6 */	mflr r0
/* 80352644 0034F584  90 01 00 94 */	stw r0, 0x94(r1)
/* 80352648 0034F588  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8035264C 0034F58C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80352650 0034F590  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80352654 0034F594  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80352658 0034F598  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8035265C 0034F59C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80352660 0034F5A0  7C 9F 23 78 */	mr r31, r4
/* 80352664 0034F5A4  7C 7D 1B 78 */	mr r29, r3
/* 80352668 0034F5A8  41 82 00 10 */	beq .L_80352678
/* 8035266C 0034F5AC  C0 1D 01 FC */	lfs f0, 0x1fc(r29)
/* 80352670 0034F5B0  D0 1D 02 C8 */	stfs f0, 0x2c8(r29)
/* 80352674 0034F5B4  48 00 00 18 */	b .L_8035268C
.L_80352678:
/* 80352678 0034F5B8  C0 22 01 64 */	lfs f1, lbl_8051E4C4@sda21(r2)
/* 8035267C 0034F5BC  C0 1D 01 FC */	lfs f0, 0x1fc(r29)
/* 80352680 0034F5C0  EC 21 00 2A */	fadds f1, f1, f0
/* 80352684 0034F5C4  48 0B F5 4D */	bl roundAng__Ff
/* 80352688 0034F5C8  D0 3D 02 C8 */	stfs f1, 0x2c8(r29)
.L_8035268C:
/* 8035268C 0034F5CC  80 7D 02 30 */	lwz r3, 0x230(r29)
/* 80352690 0034F5D0  28 03 00 00 */	cmplwi r3, 0
/* 80352694 0034F5D4  40 82 00 0C */	bne .L_803526A0
/* 80352698 0034F5D8  3B C0 00 00 */	li r30, 0
/* 8035269C 0034F5DC  48 00 00 30 */	b .L_803526CC
.L_803526A0:
/* 803526A0 0034F5E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803526A4 0034F5E4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803526A8 0034F5E8  7D 89 03 A6 */	mtctr r12
/* 803526AC 0034F5EC  4E 80 04 21 */	bctrl 
/* 803526B0 0034F5F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803526B4 0034F5F4  41 82 00 14 */	beq .L_803526C8
/* 803526B8 0034F5F8  80 7D 02 30 */	lwz r3, 0x230(r29)
/* 803526BC 0034F5FC  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 803526C0 0034F600  83 C3 00 04 */	lwz r30, 4(r3)
/* 803526C4 0034F604  48 00 00 08 */	b .L_803526CC
.L_803526C8:
/* 803526C8 0034F608  83 DD 02 30 */	lwz r30, 0x230(r29)
.L_803526CC:
/* 803526CC 0034F60C  28 1E 00 00 */	cmplwi r30, 0
/* 803526D0 0034F610  41 82 00 FC */	beq .L_803527CC
/* 803526D4 0034F614  7F C4 F3 78 */	mr r4, r30
/* 803526D8 0034F618  38 61 00 14 */	addi r3, r1, 0x14
/* 803526DC 0034F61C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803526E0 0034F620  81 8C 00 08 */	lwz r12, 8(r12)
/* 803526E4 0034F624  7D 89 03 A6 */	mtctr r12
/* 803526E8 0034F628  4E 80 04 21 */	bctrl 
/* 803526EC 0034F62C  7F C4 F3 78 */	mr r4, r30
/* 803526F0 0034F630  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 803526F4 0034F634  81 9E 00 00 */	lwz r12, 0(r30)
/* 803526F8 0034F638  38 61 00 20 */	addi r3, r1, 0x20
/* 803526FC 0034F63C  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 80352700 0034F640  81 8C 00 08 */	lwz r12, 8(r12)
/* 80352704 0034F644  EF E0 08 28 */	fsubs f31, f0, f1
/* 80352708 0034F648  7D 89 03 A6 */	mtctr r12
/* 8035270C 0034F64C  4E 80 04 21 */	bctrl 
/* 80352710 0034F650  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 80352714 0034F654  38 7E 01 38 */	addi r3, r30, 0x138
/* 80352718 0034F658  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8035271C 0034F65C  38 81 00 38 */	addi r4, r1, 0x38
/* 80352720 0034F660  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80352724 0034F664  EC 21 10 28 */	fsubs f1, f1, f2
/* 80352728 0034F668  D3 E1 00 34 */	stfs f31, 0x34(r1)
/* 8035272C 0034F66C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80352730 0034F670  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80352734 0034F674  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 80352738 0034F678  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8035273C 0034F67C  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 80352740 0034F680  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80352744 0034F684  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 80352748 0034F688  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8035274C 0034F68C  4B D9 7C D1 */	bl PSMTXInverse
/* 80352750 0034F690  38 61 00 38 */	addi r3, r1, 0x38
/* 80352754 0034F694  38 81 00 2C */	addi r4, r1, 0x2c
/* 80352758 0034F698  38 A1 00 08 */	addi r5, r1, 8
/* 8035275C 0034F69C  4B D9 84 7D */	bl PSMTXMultVec
/* 80352760 0034F6A0  C0 21 00 08 */	lfs f1, 8(r1)
/* 80352764 0034F6A4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80352768 0034F6A8  4B D7 D2 25 */	bl atan2
/* 8035276C 0034F6AC  FC 20 08 18 */	frsp f1, f1
/* 80352770 0034F6B0  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80352774 0034F6B4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80352778 0034F6B8  D0 3D 02 E0 */	stfs f1, 0x2e0(r29)
/* 8035277C 0034F6BC  D0 1D 02 DC */	stfs f0, 0x2dc(r29)
/* 80352780 0034F6C0  41 82 00 0C */	beq .L_8035278C
/* 80352784 0034F6C4  C0 02 01 64 */	lfs f0, lbl_8051E4C4@sda21(r2)
/* 80352788 0034F6C8  D0 1D 02 DC */	stfs f0, 0x2dc(r29)
.L_8035278C:
/* 8035278C 0034F6CC  7F C3 F3 78 */	mr r3, r30
/* 80352790 0034F6D0  4B E1 4E 21 */	bl getPelletConfigMax__Q24Game6PelletFv
/* 80352794 0034F6D4  7C 7F 1B 78 */	mr r31, r3
/* 80352798 0034F6D8  7F C3 F3 78 */	mr r3, r30
/* 8035279C 0034F6DC  4B E1 4D F5 */	bl getPelletConfigMin__Q24Game6PelletFv
/* 803527A0 0034F6E0  7C 63 FA 14 */	add r3, r3, r31
/* 803527A4 0034F6E4  3C 00 43 30 */	lis r0, 0x4330
/* 803527A8 0034F6E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803527AC 0034F6EC  90 01 00 68 */	stw r0, 0x68(r1)
/* 803527B0 0034F6F0  C8 42 01 A0 */	lfd f2, lbl_8051E500@sda21(r2)
/* 803527B4 0034F6F4  90 61 00 6C */	stw r3, 0x6c(r1)
/* 803527B8 0034F6F8  C0 02 01 70 */	lfs f0, lbl_8051E4D0@sda21(r2)
/* 803527BC 0034F6FC  C8 21 00 68 */	lfd f1, 0x68(r1)
/* 803527C0 0034F700  EC 21 10 28 */	fsubs f1, f1, f2
/* 803527C4 0034F704  EC 00 00 72 */	fmuls f0, f0, f1
/* 803527C8 0034F708  D0 1D 03 7C */	stfs f0, 0x37c(r29)
.L_803527CC:
/* 803527CC 0034F70C  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803527D0 0034F710  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803527D4 0034F714  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803527D8 0034F718  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 803527DC 0034F71C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 803527E0 0034F720  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 803527E4 0034F724  7C 08 03 A6 */	mtlr r0
/* 803527E8 0034F728  38 21 00 90 */	addi r1, r1, 0x90
/* 803527EC 0034F72C  4E 80 00 20 */	blr 
.endfn setCarryDir__Q34Game13PanModokiBase3ObjFb

.fn endCarry__Q34Game13PanModokiBase3ObjFv, global
/* 803527F0 0034F730  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803527F4 0034F734  7C 08 02 A6 */	mflr r0
/* 803527F8 0034F738  90 01 00 64 */	stw r0, 0x64(r1)
/* 803527FC 0034F73C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80352800 0034F740  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80352804 0034F744  7C 7E 1B 78 */	mr r30, r3
/* 80352808 0034F748  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8035280C 0034F74C  80 63 02 30 */	lwz r3, 0x230(r3)
/* 80352810 0034F750  28 03 00 00 */	cmplwi r3, 0
/* 80352814 0034F754  40 82 00 0C */	bne .L_80352820
/* 80352818 0034F758  3B E0 00 00 */	li r31, 0
/* 8035281C 0034F75C  48 00 00 30 */	b .L_8035284C
.L_80352820:
/* 80352820 0034F760  81 83 00 00 */	lwz r12, 0(r3)
/* 80352824 0034F764  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80352828 0034F768  7D 89 03 A6 */	mtctr r12
/* 8035282C 0034F76C  4E 80 04 21 */	bctrl 
/* 80352830 0034F770  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352834 0034F774  41 82 00 14 */	beq .L_80352848
/* 80352838 0034F778  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 8035283C 0034F77C  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80352840 0034F780  83 E3 00 04 */	lwz r31, 4(r3)
/* 80352844 0034F784  48 00 00 08 */	b .L_8035284C
.L_80352848:
/* 80352848 0034F788  83 FE 02 30 */	lwz r31, 0x230(r30)
.L_8035284C:
/* 8035284C 0034F78C  7F C3 F3 78 */	mr r3, r30
/* 80352850 0034F790  4B DB 4F 2D */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80352854 0034F794  28 1F 00 00 */	cmplwi r31, 0
/* 80352858 0034F798  41 82 03 00 */	beq .L_80352B58
/* 8035285C 0034F79C  7F E4 FB 78 */	mr r4, r31
/* 80352860 0034F7A0  38 61 00 30 */	addi r3, r1, 0x30
/* 80352864 0034F7A4  4B E4 D3 F9 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80352868 0034F7A8  38 00 00 00 */	li r0, 0
/* 8035286C 0034F7AC  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80352870 0034F7B0  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80352874 0034F7B4  38 61 00 30 */	addi r3, r1, 0x30
/* 80352878 0034F7B8  28 00 00 00 */	cmplwi r0, 0
/* 8035287C 0034F7BC  90 81 00 20 */	stw r4, 0x20(r1)
/* 80352880 0034F7C0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80352884 0034F7C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80352888 0034F7C8  90 61 00 28 */	stw r3, 0x28(r1)
/* 8035288C 0034F7CC  40 82 00 1C */	bne .L_803528A8
/* 80352890 0034F7D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80352894 0034F7D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80352898 0034F7D8  7D 89 03 A6 */	mtctr r12
/* 8035289C 0034F7DC  4E 80 04 21 */	bctrl 
/* 803528A0 0034F7E0  90 61 00 24 */	stw r3, 0x24(r1)
/* 803528A4 0034F7E4  48 00 01 B8 */	b .L_80352A5C
.L_803528A8:
/* 803528A8 0034F7E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803528AC 0034F7EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803528B0 0034F7F0  7D 89 03 A6 */	mtctr r12
/* 803528B4 0034F7F4  4E 80 04 21 */	bctrl 
/* 803528B8 0034F7F8  90 61 00 24 */	stw r3, 0x24(r1)
/* 803528BC 0034F7FC  48 00 00 58 */	b .L_80352914
.L_803528C0:
/* 803528C0 0034F800  80 61 00 28 */	lwz r3, 0x28(r1)
/* 803528C4 0034F804  80 81 00 24 */	lwz r4, 0x24(r1)
/* 803528C8 0034F808  81 83 00 00 */	lwz r12, 0(r3)
/* 803528CC 0034F80C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803528D0 0034F810  7D 89 03 A6 */	mtctr r12
/* 803528D4 0034F814  4E 80 04 21 */	bctrl 
/* 803528D8 0034F818  7C 64 1B 78 */	mr r4, r3
/* 803528DC 0034F81C  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 803528E0 0034F820  81 83 00 00 */	lwz r12, 0(r3)
/* 803528E4 0034F824  81 8C 00 08 */	lwz r12, 8(r12)
/* 803528E8 0034F828  7D 89 03 A6 */	mtctr r12
/* 803528EC 0034F82C  4E 80 04 21 */	bctrl 
/* 803528F0 0034F830  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803528F4 0034F834  40 82 01 68 */	bne .L_80352A5C
/* 803528F8 0034F838  80 61 00 28 */	lwz r3, 0x28(r1)
/* 803528FC 0034F83C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80352900 0034F840  81 83 00 00 */	lwz r12, 0(r3)
/* 80352904 0034F844  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80352908 0034F848  7D 89 03 A6 */	mtctr r12
/* 8035290C 0034F84C  4E 80 04 21 */	bctrl 
/* 80352910 0034F850  90 61 00 24 */	stw r3, 0x24(r1)
.L_80352914:
/* 80352914 0034F854  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80352918 0034F858  38 61 00 20 */	addi r3, r1, 0x20
/* 8035291C 0034F85C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80352920 0034F860  7D 89 03 A6 */	mtctr r12
/* 80352924 0034F864  4E 80 04 21 */	bctrl 
/* 80352928 0034F868  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035292C 0034F86C  41 82 FF 94 */	beq .L_803528C0
/* 80352930 0034F870  48 00 01 2C */	b .L_80352A5C
.L_80352934:
/* 80352934 0034F874  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80352938 0034F878  81 83 00 00 */	lwz r12, 0(r3)
/* 8035293C 0034F87C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80352940 0034F880  7D 89 03 A6 */	mtctr r12
/* 80352944 0034F884  4E 80 04 21 */	bctrl 
/* 80352948 0034F888  81 83 00 00 */	lwz r12, 0(r3)
/* 8035294C 0034F88C  7C 7D 1B 78 */	mr r29, r3
/* 80352950 0034F890  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80352954 0034F894  7D 89 03 A6 */	mtctr r12
/* 80352958 0034F898  4E 80 04 21 */	bctrl 
/* 8035295C 0034F89C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352960 0034F8A0  41 82 00 40 */	beq .L_803529A0
/* 80352964 0034F8A4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80352968 0034F8A8  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractKill@ha
/* 8035296C 0034F8AC  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 80352970 0034F8B0  38 00 00 00 */	li r0, 0
/* 80352974 0034F8B4  90 81 00 14 */	stw r4, 0x14(r1)
/* 80352978 0034F8B8  38 A3 4D 98 */	addi r5, r3, __vt__Q24Game12InteractKill@l
/* 8035297C 0034F8BC  7F A3 EB 78 */	mr r3, r29
/* 80352980 0034F8C0  38 81 00 14 */	addi r4, r1, 0x14
/* 80352984 0034F8C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80352988 0034F8C8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8035298C 0034F8CC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80352990 0034F8D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80352994 0034F8D4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80352998 0034F8D8  7D 89 03 A6 */	mtctr r12
/* 8035299C 0034F8DC  4E 80 04 21 */	bctrl 
.L_803529A0:
/* 803529A0 0034F8E0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803529A4 0034F8E4  28 00 00 00 */	cmplwi r0, 0
/* 803529A8 0034F8E8  40 82 00 24 */	bne .L_803529CC
/* 803529AC 0034F8EC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 803529B0 0034F8F0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 803529B4 0034F8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803529B8 0034F8F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803529BC 0034F8FC  7D 89 03 A6 */	mtctr r12
/* 803529C0 0034F900  4E 80 04 21 */	bctrl 
/* 803529C4 0034F904  90 61 00 24 */	stw r3, 0x24(r1)
/* 803529C8 0034F908  48 00 00 94 */	b .L_80352A5C
.L_803529CC:
/* 803529CC 0034F90C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 803529D0 0034F910  80 81 00 24 */	lwz r4, 0x24(r1)
/* 803529D4 0034F914  81 83 00 00 */	lwz r12, 0(r3)
/* 803529D8 0034F918  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803529DC 0034F91C  7D 89 03 A6 */	mtctr r12
/* 803529E0 0034F920  4E 80 04 21 */	bctrl 
/* 803529E4 0034F924  90 61 00 24 */	stw r3, 0x24(r1)
/* 803529E8 0034F928  48 00 00 58 */	b .L_80352A40
.L_803529EC:
/* 803529EC 0034F92C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 803529F0 0034F930  80 81 00 24 */	lwz r4, 0x24(r1)
/* 803529F4 0034F934  81 83 00 00 */	lwz r12, 0(r3)
/* 803529F8 0034F938  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803529FC 0034F93C  7D 89 03 A6 */	mtctr r12
/* 80352A00 0034F940  4E 80 04 21 */	bctrl 
/* 80352A04 0034F944  7C 64 1B 78 */	mr r4, r3
/* 80352A08 0034F948  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80352A0C 0034F94C  81 83 00 00 */	lwz r12, 0(r3)
/* 80352A10 0034F950  81 8C 00 08 */	lwz r12, 8(r12)
/* 80352A14 0034F954  7D 89 03 A6 */	mtctr r12
/* 80352A18 0034F958  4E 80 04 21 */	bctrl 
/* 80352A1C 0034F95C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352A20 0034F960  40 82 00 3C */	bne .L_80352A5C
/* 80352A24 0034F964  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80352A28 0034F968  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80352A2C 0034F96C  81 83 00 00 */	lwz r12, 0(r3)
/* 80352A30 0034F970  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80352A34 0034F974  7D 89 03 A6 */	mtctr r12
/* 80352A38 0034F978  4E 80 04 21 */	bctrl 
/* 80352A3C 0034F97C  90 61 00 24 */	stw r3, 0x24(r1)
.L_80352A40:
/* 80352A40 0034F980  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80352A44 0034F984  38 61 00 20 */	addi r3, r1, 0x20
/* 80352A48 0034F988  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80352A4C 0034F98C  7D 89 03 A6 */	mtctr r12
/* 80352A50 0034F990  4E 80 04 21 */	bctrl 
/* 80352A54 0034F994  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352A58 0034F998  41 82 FF 94 */	beq .L_803529EC
.L_80352A5C:
/* 80352A5C 0034F99C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80352A60 0034F9A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80352A64 0034F9A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80352A68 0034F9A8  7D 89 03 A6 */	mtctr r12
/* 80352A6C 0034F9AC  4E 80 04 21 */	bctrl 
/* 80352A70 0034F9B0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80352A74 0034F9B4  7C 04 18 40 */	cmplw r4, r3
/* 80352A78 0034F9B8  40 82 FE BC */	bne .L_80352934
/* 80352A7C 0034F9BC  7F C3 F3 78 */	mr r3, r30
/* 80352A80 0034F9C0  4B E4 C9 A5 */	bl endStick__Q24Game8CreatureFv
/* 80352A84 0034F9C4  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 80352A88 0034F9C8  38 80 00 02 */	li r4, 2
/* 80352A8C 0034F9CC  4B EE 25 7D */	bl giveup__Q24Game11PelletCarryFUs
/* 80352A90 0034F9D0  7F E3 FB 78 */	mr r3, r31
/* 80352A94 0034F9D4  3B A0 00 01 */	li r29, 1
/* 80352A98 0034F9D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80352A9C 0034F9DC  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80352AA0 0034F9E0  7D 89 03 A6 */	mtctr r12
/* 80352AA4 0034F9E4  4E 80 04 21 */	bctrl 
/* 80352AA8 0034F9E8  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80352AAC 0034F9EC  28 00 00 03 */	cmplwi r0, 3
/* 80352AB0 0034F9F0  40 82 00 58 */	bne .L_80352B08
/* 80352AB4 0034F9F4  80 1E 03 88 */	lwz r0, 0x388(r30)
/* 80352AB8 0034F9F8  54 00 10 3A */	slwi r0, r0, 2
/* 80352ABC 0034F9FC  7C 7E 02 14 */	add r3, r30, r0
/* 80352AC0 0034FA00  93 E3 03 8C */	stw r31, 0x38c(r3)
/* 80352AC4 0034FA04  80 1E 03 88 */	lwz r0, 0x388(r30)
/* 80352AC8 0034FA08  2C 00 00 00 */	cmpwi r0, 0
/* 80352ACC 0034FA0C  40 82 00 30 */	bne .L_80352AFC
/* 80352AD0 0034FA10  7F E3 FB 78 */	mr r3, r31
/* 80352AD4 0034FA14  38 80 00 00 */	li r4, 0
/* 80352AD8 0034FA18  81 9F 00 00 */	lwz r12, 0(r31)
/* 80352ADC 0034FA1C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80352AE0 0034FA20  7D 89 03 A6 */	mtctr r12
/* 80352AE4 0034FA24  4E 80 04 21 */	bctrl 
/* 80352AE8 0034FA28  80 9E 03 78 */	lwz r4, 0x378(r30)
/* 80352AEC 0034FA2C  7F E3 FB 78 */	mr r3, r31
/* 80352AF0 0034FA30  38 84 02 BC */	addi r4, r4, 0x2bc
/* 80352AF4 0034FA34  4B E4 CF B5 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 80352AF8 0034FA38  3B A0 00 00 */	li r29, 0
.L_80352AFC:
/* 80352AFC 0034FA3C  80 7E 03 88 */	lwz r3, 0x388(r30)
/* 80352B00 0034FA40  38 03 00 01 */	addi r0, r3, 1
/* 80352B04 0034FA44  90 1E 03 88 */	stw r0, 0x388(r30)
.L_80352B08:
/* 80352B08 0034FA48  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80352B0C 0034FA4C  41 82 00 38 */	beq .L_80352B44
/* 80352B10 0034FA50  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 80352B14 0034FA54  3C 60 80 4E */	lis r3, __vt__Q24Game13PelletKillArg@ha
/* 80352B18 0034FA58  38 04 A2 D0 */	addi r0, r4, __vt__Q24Game15CreatureKillArg@l
/* 80352B1C 0034FA5C  38 80 00 00 */	li r4, 0
/* 80352B20 0034FA60  90 01 00 08 */	stw r0, 8(r1)
/* 80352B24 0034FA64  38 A3 CE 04 */	addi r5, r3, __vt__Q24Game13PelletKillArg@l
/* 80352B28 0034FA68  38 00 00 01 */	li r0, 1
/* 80352B2C 0034FA6C  7F E3 FB 78 */	mr r3, r31
/* 80352B30 0034FA70  90 81 00 0C */	stw r4, 0xc(r1)
/* 80352B34 0034FA74  38 81 00 08 */	addi r4, r1, 8
/* 80352B38 0034FA78  90 A1 00 08 */	stw r5, 8(r1)
/* 80352B3C 0034FA7C  98 01 00 10 */	stb r0, 0x10(r1)
/* 80352B40 0034FA80  4B DE 85 B1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80352B44:
/* 80352B44 0034FA84  38 00 00 00 */	li r0, 0
/* 80352B48 0034FA88  38 61 00 30 */	addi r3, r1, 0x30
/* 80352B4C 0034FA8C  90 1E 02 30 */	stw r0, 0x230(r30)
/* 80352B50 0034FA90  38 80 FF FF */	li r4, -1
/* 80352B54 0034FA94  4B E4 D2 11 */	bl __dt__Q24Game8StickersFv
.L_80352B58:
/* 80352B58 0034FA98  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80352B5C 0034FA9C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80352B60 0034FAA0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80352B64 0034FAA4  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80352B68 0034FAA8  7C 08 03 A6 */	mtlr r0
/* 80352B6C 0034FAAC  38 21 00 60 */	addi r1, r1, 0x60
/* 80352B70 0034FAB0  4E 80 00 20 */	blr 
.endfn endCarry__Q34Game13PanModokiBase3ObjFv

.fn checkSucked__Q34Game13PanModokiBase3ObjFv, global
/* 80352B74 0034FAB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80352B78 0034FAB8  7C 08 02 A6 */	mflr r0
/* 80352B7C 0034FABC  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80352B80 0034FAC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80352B84 0034FAC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80352B88 0034FAC8  7C 7F 1B 78 */	mr r31, r3
/* 80352B8C 0034FACC  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80352B90 0034FAD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352B94 0034FAD4  4C 40 13 82 */	cror 2, 0, 2
/* 80352B98 0034FAD8  41 82 00 68 */	beq .L_80352C00
/* 80352B9C 0034FADC  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80352BA0 0034FAE0  28 03 00 00 */	cmplwi r3, 0
/* 80352BA4 0034FAE4  41 82 00 5C */	beq .L_80352C00
/* 80352BA8 0034FAE8  40 82 00 0C */	bne .L_80352BB4
/* 80352BAC 0034FAEC  38 60 00 00 */	li r3, 0
/* 80352BB0 0034FAF0  48 00 00 30 */	b .L_80352BE0
.L_80352BB4:
/* 80352BB4 0034FAF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80352BB8 0034FAF8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80352BBC 0034FAFC  7D 89 03 A6 */	mtctr r12
/* 80352BC0 0034FB00  4E 80 04 21 */	bctrl 
/* 80352BC4 0034FB04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352BC8 0034FB08  41 82 00 14 */	beq .L_80352BDC
/* 80352BCC 0034FB0C  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80352BD0 0034FB10  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80352BD4 0034FB14  80 63 00 04 */	lwz r3, 4(r3)
/* 80352BD8 0034FB18  48 00 00 08 */	b .L_80352BE0
.L_80352BDC:
/* 80352BDC 0034FB1C  80 7F 02 30 */	lwz r3, 0x230(r31)
.L_80352BE0:
/* 80352BE0 0034FB20  4B E1 5B BD */	bl getStateID__Q24Game6PelletFv
/* 80352BE4 0034FB24  2C 03 00 01 */	cmpwi r3, 1
/* 80352BE8 0034FB28  40 82 00 18 */	bne .L_80352C00
/* 80352BEC 0034FB2C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80352BF0 0034FB30  7F E3 FB 78 */	mr r3, r31
/* 80352BF4 0034FB34  64 00 00 20 */	oris r0, r0, 0x20
/* 80352BF8 0034FB38  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80352BFC 0034FB3C  48 00 0C 51 */	bl fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
.L_80352C00:
/* 80352C00 0034FB40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80352C04 0034FB44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80352C08 0034FB48  7C 08 03 A6 */	mtlr r0
/* 80352C0C 0034FB4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80352C10 0034FB50  4E 80 00 20 */	blr 
.endfn checkSucked__Q34Game13PanModokiBase3ObjFv

.fn suckFinish__Q34Game13PanModokiBase3ObjFv, global
/* 80352C14 0034FB54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80352C18 0034FB58  7C 08 02 A6 */	mflr r0
/* 80352C1C 0034FB5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80352C20 0034FB60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80352C24 0034FB64  93 C1 00 08 */	stw r30, 8(r1)
/* 80352C28 0034FB68  7C 7E 1B 78 */	mr r30, r3
/* 80352C2C 0034FB6C  80 63 02 30 */	lwz r3, 0x230(r3)
/* 80352C30 0034FB70  28 03 00 00 */	cmplwi r3, 0
/* 80352C34 0034FB74  40 82 00 0C */	bne .L_80352C40
/* 80352C38 0034FB78  3B E0 00 00 */	li r31, 0
/* 80352C3C 0034FB7C  48 00 00 30 */	b .L_80352C6C
.L_80352C40:
/* 80352C40 0034FB80  81 83 00 00 */	lwz r12, 0(r3)
/* 80352C44 0034FB84  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80352C48 0034FB88  7D 89 03 A6 */	mtctr r12
/* 80352C4C 0034FB8C  4E 80 04 21 */	bctrl 
/* 80352C50 0034FB90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352C54 0034FB94  41 82 00 14 */	beq .L_80352C68
/* 80352C58 0034FB98  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 80352C5C 0034FB9C  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80352C60 0034FBA0  83 E3 00 04 */	lwz r31, 4(r3)
/* 80352C64 0034FBA4  48 00 00 08 */	b .L_80352C6C
.L_80352C68:
/* 80352C68 0034FBA8  83 FE 02 30 */	lwz r31, 0x230(r30)
.L_80352C6C:
/* 80352C6C 0034FBAC  7F C3 F3 78 */	mr r3, r30
/* 80352C70 0034FBB0  4B E4 C7 B5 */	bl endStick__Q24Game8CreatureFv
/* 80352C74 0034FBB4  28 1F 00 00 */	cmplwi r31, 0
/* 80352C78 0034FBB8  41 82 00 10 */	beq .L_80352C88
/* 80352C7C 0034FBBC  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 80352C80 0034FBC0  38 80 00 02 */	li r4, 2
/* 80352C84 0034FBC4  4B EE 23 85 */	bl giveup__Q24Game11PelletCarryFUs
.L_80352C88:
/* 80352C88 0034FBC8  80 7E 03 80 */	lwz r3, 0x380(r30)
/* 80352C8C 0034FBCC  7F C4 F3 78 */	mr r4, r30
/* 80352C90 0034FBD0  38 A0 00 09 */	li r5, 9
/* 80352C94 0034FBD4  38 C0 00 00 */	li r6, 0
/* 80352C98 0034FBD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80352C9C 0034FBDC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80352CA0 0034FBE0  7D 89 03 A6 */	mtctr r12
/* 80352CA4 0034FBE4  4E 80 04 21 */	bctrl 
/* 80352CA8 0034FBE8  38 00 00 00 */	li r0, 0
/* 80352CAC 0034FBEC  7F C3 F3 78 */	mr r3, r30
/* 80352CB0 0034FBF0  90 1E 02 30 */	stw r0, 0x230(r30)
/* 80352CB4 0034FBF4  48 00 0B 99 */	bl fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
/* 80352CB8 0034FBF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80352CBC 0034FBFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80352CC0 0034FC00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80352CC4 0034FC04  7C 08 03 A6 */	mtlr r0
/* 80352CC8 0034FC08  38 21 00 10 */	addi r1, r1, 0x10
/* 80352CCC 0034FC0C  4E 80 00 20 */	blr 
.endfn suckFinish__Q34Game13PanModokiBase3ObjFv

.fn isEndPathFinder__Q34Game13PanModokiBase3ObjFv, global
/* 80352CD0 0034FC10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80352CD4 0034FC14  7C 08 02 A6 */	mflr r0
/* 80352CD8 0034FC18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80352CDC 0034FC1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80352CE0 0034FC20  7C 7F 1B 78 */	mr r31, r3
/* 80352CE4 0034FC24  88 03 02 F0 */	lbz r0, 0x2f0(r3)
/* 80352CE8 0034FC28  28 00 00 00 */	cmplwi r0, 0
/* 80352CEC 0034FC2C  41 82 00 0C */	beq .L_80352CF8
/* 80352CF0 0034FC30  38 60 00 01 */	li r3, 1
/* 80352CF4 0034FC34  48 00 00 E0 */	b .L_80352DD4
.L_80352CF8:
/* 80352CF8 0034FC38  80 0D 93 80 */	lwz r0, testPathfinder__4Game@sda21(r13)
/* 80352CFC 0034FC3C  28 00 00 00 */	cmplwi r0, 0
/* 80352D00 0034FC40  40 82 00 20 */	bne .L_80352D20
/* 80352D04 0034FC44  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80352D08 0034FC48  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 80352D0C 0034FC4C  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 80352D10 0034FC50  38 80 06 AC */	li r4, 0x6ac
/* 80352D14 0034FC54  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 80352D18 0034FC58  4C C6 31 82 */	crclr 6
/* 80352D1C 0034FC5C  4B CD 79 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80352D20:
/* 80352D20 0034FC60  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80352D24 0034FC64  80 9F 02 EC */	lwz r4, 0x2ec(r31)
/* 80352D28 0034FC68  4B E5 0D A9 */	bl check__Q24Game10PathfinderFUl
/* 80352D2C 0034FC6C  2C 03 00 02 */	cmpwi r3, 2
/* 80352D30 0034FC70  41 82 00 44 */	beq .L_80352D74
/* 80352D34 0034FC74  40 80 00 14 */	bge .L_80352D48
/* 80352D38 0034FC78  2C 03 00 00 */	cmpwi r3, 0
/* 80352D3C 0034FC7C  41 82 00 18 */	beq .L_80352D54
/* 80352D40 0034FC80  40 80 00 44 */	bge .L_80352D84
/* 80352D44 0034FC84  48 00 00 8C */	b .L_80352DD0
.L_80352D48:
/* 80352D48 0034FC88  2C 03 00 04 */	cmpwi r3, 4
/* 80352D4C 0034FC8C  40 80 00 84 */	bge .L_80352DD0
/* 80352D50 0034FC90  48 00 00 70 */	b .L_80352DC0
.L_80352D54:
/* 80352D54 0034FC94  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80352D58 0034FC98  38 BF 03 84 */	addi r5, r31, 0x384
/* 80352D5C 0034FC9C  80 9F 02 EC */	lwz r4, 0x2ec(r31)
/* 80352D60 0034FCA0  4B E5 0C 41 */	bl makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
/* 80352D64 0034FCA4  38 00 00 01 */	li r0, 1
/* 80352D68 0034FCA8  38 60 00 01 */	li r3, 1
/* 80352D6C 0034FCAC  98 1F 02 F0 */	stb r0, 0x2f0(r31)
/* 80352D70 0034FCB0  48 00 00 64 */	b .L_80352DD4
.L_80352D74:
/* 80352D74 0034FCB4  38 00 00 00 */	li r0, 0
/* 80352D78 0034FCB8  38 60 00 00 */	li r3, 0
/* 80352D7C 0034FCBC  98 1F 02 F0 */	stb r0, 0x2f0(r31)
/* 80352D80 0034FCC0  48 00 00 54 */	b .L_80352DD4
.L_80352D84:
/* 80352D84 0034FCC4  7F E3 FB 78 */	mr r3, r31
/* 80352D88 0034FCC8  4B DB 45 C1 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80352D8C 0034FCCC  2C 03 00 08 */	cmpwi r3, 8
/* 80352D90 0034FCD0  41 82 00 14 */	beq .L_80352DA4
/* 80352D94 0034FCD4  7F E3 FB 78 */	mr r3, r31
/* 80352D98 0034FCD8  38 80 00 08 */	li r4, 8
/* 80352D9C 0034FCDC  38 A0 00 00 */	li r5, 0
/* 80352DA0 0034FCE0  4B DB 22 65 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_80352DA4:
/* 80352DA4 0034FCE4  7F E3 FB 78 */	mr r3, r31
/* 80352DA8 0034FCE8  38 80 00 01 */	li r4, 1
/* 80352DAC 0034FCEC  48 00 00 3D */	bl setPathFinder__Q34Game13PanModokiBase3ObjFb
/* 80352DB0 0034FCF0  38 00 00 00 */	li r0, 0
/* 80352DB4 0034FCF4  38 60 00 00 */	li r3, 0
/* 80352DB8 0034FCF8  98 1F 02 F0 */	stb r0, 0x2f0(r31)
/* 80352DBC 0034FCFC  48 00 00 18 */	b .L_80352DD4
.L_80352DC0:
/* 80352DC0 0034FD00  38 00 00 00 */	li r0, 0
/* 80352DC4 0034FD04  38 60 00 00 */	li r3, 0
/* 80352DC8 0034FD08  98 1F 02 F0 */	stb r0, 0x2f0(r31)
/* 80352DCC 0034FD0C  48 00 00 08 */	b .L_80352DD4
.L_80352DD0:
/* 80352DD0 0034FD10  38 60 00 00 */	li r3, 0
.L_80352DD4:
/* 80352DD4 0034FD14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80352DD8 0034FD18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80352DDC 0034FD1C  7C 08 03 A6 */	mtlr r0
/* 80352DE0 0034FD20  38 21 00 10 */	addi r1, r1, 0x10
/* 80352DE4 0034FD24  4E 80 00 20 */	blr 
.endfn isEndPathFinder__Q34Game13PanModokiBase3ObjFv

.fn setPathFinder__Q34Game13PanModokiBase3ObjFb, global
/* 80352DE8 0034FD28  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80352DEC 0034FD2C  7C 08 02 A6 */	mflr r0
/* 80352DF0 0034FD30  90 01 00 74 */	stw r0, 0x74(r1)
/* 80352DF4 0034FD34  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80352DF8 0034FD38  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80352DFC 0034FD3C  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80352E00 0034FD40  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80352E04 0034FD44  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80352E08 0034FD48  7C 7C 1B 78 */	mr r28, r3
/* 80352E0C 0034FD4C  7C 9D 23 78 */	mr r29, r4
/* 80352E10 0034FD50  48 00 02 95 */	bl releasePathFinder__Q34Game13PanModokiBase3ObjFv
/* 80352E14 0034FD54  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80352E18 0034FD58  38 80 00 00 */	li r4, 0
/* 80352E1C 0034FD5C  38 00 FF FF */	li r0, -1
/* 80352E20 0034FD60  D0 1C 03 20 */	stfs f0, 0x320(r28)
/* 80352E24 0034FD64  D0 1C 03 24 */	stfs f0, 0x324(r28)
/* 80352E28 0034FD68  D0 1C 03 28 */	stfs f0, 0x328(r28)
/* 80352E2C 0034FD6C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80352E30 0034FD70  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80352E34 0034FD74  90 81 00 28 */	stw r4, 0x28(r1)
/* 80352E38 0034FD78  98 81 00 1C */	stb r4, 0x1c(r1)
/* 80352E3C 0034FD7C  B0 01 00 24 */	sth r0, 0x24(r1)
/* 80352E40 0034FD80  90 81 00 20 */	stw r4, 0x20(r1)
/* 80352E44 0034FD84  C0 1C 01 8C */	lfs f0, 0x18c(r28)
/* 80352E48 0034FD88  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80352E4C 0034FD8C  C0 1C 01 90 */	lfs f0, 0x190(r28)
/* 80352E50 0034FD90  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80352E54 0034FD94  C0 1C 01 94 */	lfs f0, 0x194(r28)
/* 80352E58 0034FD98  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80352E5C 0034FD9C  83 C3 00 08 */	lwz r30, 8(r3)
/* 80352E60 0034FDA0  28 1E 00 00 */	cmplwi r30, 0
/* 80352E64 0034FDA4  40 82 00 20 */	bne .L_80352E84
/* 80352E68 0034FDA8  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80352E6C 0034FDAC  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 80352E70 0034FDB0  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 80352E74 0034FDB4  38 80 06 DC */	li r4, 0x6dc
/* 80352E78 0034FDB8  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 80352E7C 0034FDBC  4C C6 31 82 */	crclr 6
/* 80352E80 0034FDC0  4B CD 77 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80352E84:
/* 80352E84 0034FDC4  7F C3 F3 78 */	mr r3, r30
/* 80352E88 0034FDC8  38 81 00 10 */	addi r4, r1, 0x10
/* 80352E8C 0034FDCC  4B E2 04 E1 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 80352E90 0034FDD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80352E94 0034FDD4  41 82 01 D0 */	beq .L_80353064
/* 80352E98 0034FDD8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80352E9C 0034FDDC  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80352EA0 0034FDE0  C0 7C 01 A0 */	lfs f3, 0x1a0(r28)
/* 80352EA4 0034FDE4  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80352EA8 0034FDE8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80352EAC 0034FDEC  EC 81 18 28 */	fsubs f4, f1, f3
/* 80352EB0 0034FDF0  C0 44 00 4C */	lfs f2, 0x4c(r4)
/* 80352EB4 0034FDF4  EC 60 18 28 */	fsubs f3, f0, f3
/* 80352EB8 0034FDF8  C0 DC 01 98 */	lfs f6, 0x198(r28)
/* 80352EBC 0034FDFC  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 80352EC0 0034FE00  EC A2 30 28 */	fsubs f5, f2, f6
/* 80352EC4 0034FE04  EC 04 01 32 */	fmuls f0, f4, f4
/* 80352EC8 0034FE08  A8 03 00 36 */	lha r0, 0x36(r3)
/* 80352ECC 0034FE0C  EC 41 30 28 */	fsubs f2, f1, f6
/* 80352ED0 0034FE10  A8 A4 00 36 */	lha r5, 0x36(r4)
/* 80352ED4 0034FE14  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80352ED8 0034FE18  EC 05 01 7A */	fmadds f0, f5, f5, f0
/* 80352EDC 0034FE1C  C3 E3 00 50 */	lfs f31, 0x50(r3)
/* 80352EE0 0034FE20  7C 1F 03 78 */	mr r31, r0
/* 80352EE4 0034FE24  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80352EE8 0034FE28  C3 C4 00 50 */	lfs f30, 0x50(r4)
/* 80352EEC 0034FE2C  7C BB 2B 78 */	mr r27, r5
/* 80352EF0 0034FE30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352EF4 0034FE34  40 81 00 0C */	ble .L_80352F00
/* 80352EF8 0034FE38  7C 1B 03 78 */	mr r27, r0
/* 80352EFC 0034FE3C  7C BF 2B 78 */	mr r31, r5
.L_80352F00:
/* 80352F00 0034FE40  7F C3 F3 78 */	mr r3, r30
/* 80352F04 0034FE44  7F E4 FB 78 */	mr r4, r31
/* 80352F08 0034FE48  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352F0C 0034FE4C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80352F10 0034FE50  7D 89 03 A6 */	mtctr r12
/* 80352F14 0034FE54  4E 80 04 21 */	bctrl 
/* 80352F18 0034FE58  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80352F1C 0034FE5C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80352F20 0034FE60  41 82 00 08 */	beq .L_80352F28
/* 80352F24 0034FE64  7F 7F DB 78 */	mr r31, r27
.L_80352F28:
/* 80352F28 0034FE68  7F C3 F3 78 */	mr r3, r30
/* 80352F2C 0034FE6C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80352F30 0034FE70  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352F34 0034FE74  A8 84 00 36 */	lha r4, 0x36(r4)
/* 80352F38 0034FE78  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80352F3C 0034FE7C  7D 89 03 A6 */	mtctr r12
/* 80352F40 0034FE80  4E 80 04 21 */	bctrl 
/* 80352F44 0034FE84  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80352F48 0034FE88  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80352F4C 0034FE8C  40 82 00 88 */	bne .L_80352FD4
/* 80352F50 0034FE90  7F C3 F3 78 */	mr r3, r30
/* 80352F54 0034FE94  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80352F58 0034FE98  81 9E 00 00 */	lwz r12, 0(r30)
/* 80352F5C 0034FE9C  A8 84 00 36 */	lha r4, 0x36(r4)
/* 80352F60 0034FEA0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80352F64 0034FEA4  7D 89 03 A6 */	mtctr r12
/* 80352F68 0034FEA8  4E 80 04 21 */	bctrl 
/* 80352F6C 0034FEAC  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80352F70 0034FEB0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80352F74 0034FEB4  40 82 00 60 */	bne .L_80352FD4
/* 80352F78 0034FEB8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80352F7C 0034FEBC  7F E4 07 34 */	extsh r4, r31
/* 80352F80 0034FEC0  A8 03 00 36 */	lha r0, 0x36(r3)
/* 80352F84 0034FEC4  7C 04 00 00 */	cmpw r4, r0
/* 80352F88 0034FEC8  40 82 00 2C */	bne .L_80352FB4
/* 80352F8C 0034FECC  C0 3C 01 90 */	lfs f1, 0x190(r28)
/* 80352F90 0034FED0  C0 02 01 48 */	lfs f0, lbl_8051E4A8@sda21(r2)
/* 80352F94 0034FED4  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80352F98 0034FED8  FC 20 0A 10 */	fabs f1, f1
/* 80352F9C 0034FEDC  FC 20 08 18 */	frsp f1, f1
/* 80352FA0 0034FEE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352FA4 0034FEE4  40 81 00 30 */	ble .L_80352FD4
/* 80352FA8 0034FEE8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80352FAC 0034FEEC  AB E3 00 36 */	lha r31, 0x36(r3)
/* 80352FB0 0034FEF0  48 00 00 24 */	b .L_80352FD4
.L_80352FB4:
/* 80352FB4 0034FEF4  C0 3C 01 90 */	lfs f1, 0x190(r28)
/* 80352FB8 0034FEF8  C0 02 01 48 */	lfs f0, lbl_8051E4A8@sda21(r2)
/* 80352FBC 0034FEFC  EC 3E 08 28 */	fsubs f1, f30, f1
/* 80352FC0 0034FF00  FC 20 0A 10 */	fabs f1, f1
/* 80352FC4 0034FF04  FC 20 08 18 */	frsp f1, f1
/* 80352FC8 0034FF08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80352FCC 0034FF0C  40 81 00 08 */	ble .L_80352FD4
/* 80352FD0 0034FF10  7C 1F 03 78 */	mr r31, r0
.L_80352FD4:
/* 80352FD4 0034FF14  A8 9C 02 E8 */	lha r4, 0x2e8(r28)
/* 80352FD8 0034FF18  57 A3 06 3E */	clrlwi r3, r29, 0x18
/* 80352FDC 0034FF1C  7C 03 00 D0 */	neg r0, r3
/* 80352FE0 0034FF20  B0 9C 02 EA */	sth r4, 0x2ea(r28)
/* 80352FE4 0034FF24  7C 00 1B 78 */	or r0, r0, r3
/* 80352FE8 0034FF28  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 80352FEC 0034FF2C  B3 FC 02 E8 */	sth r31, 0x2e8(r28)
/* 80352FF0 0034FF30  3B A3 00 C3 */	addi r29, r3, 0xc3
/* 80352FF4 0034FF34  80 9C 02 EC */	lwz r4, 0x2ec(r28)
/* 80352FF8 0034FF38  28 04 00 00 */	cmplwi r4, 0
/* 80352FFC 0034FF3C  41 82 00 0C */	beq .L_80353008
/* 80353000 0034FF40  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80353004 0034FF44  4B E5 0A 5D */	bl release__Q24Game10PathfinderFUl
.L_80353008:
/* 80353008 0034FF48  A8 BC 02 E6 */	lha r5, 0x2e6(r28)
/* 8035300C 0034FF4C  38 81 00 08 */	addi r4, r1, 8
/* 80353010 0034FF50  A8 1C 02 E8 */	lha r0, 0x2e8(r28)
/* 80353014 0034FF54  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80353018 0034FF58  B0 01 00 08 */	sth r0, 8(r1)
/* 8035301C 0034FF5C  B0 A1 00 0A */	sth r5, 0xa(r1)
/* 80353020 0034FF60  9B A1 00 0C */	stb r29, 0xc(r1)
/* 80353024 0034FF64  4B E5 08 31 */	bl start__Q24Game10PathfinderFRQ24Game15PathfindRequest
/* 80353028 0034FF68  90 7C 02 EC */	stw r3, 0x2ec(r28)
/* 8035302C 0034FF6C  7F C3 F3 78 */	mr r3, r30
/* 80353030 0034FF70  81 9E 00 00 */	lwz r12, 0(r30)
/* 80353034 0034FF74  A8 9C 02 E8 */	lha r4, 0x2e8(r28)
/* 80353038 0034FF78  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8035303C 0034FF7C  7D 89 03 A6 */	mtctr r12
/* 80353040 0034FF80  4E 80 04 21 */	bctrl 
/* 80353044 0034FF84  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80353048 0034FF88  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8035304C 0034FF8C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80353050 0034FF90  38 60 00 01 */	li r3, 1
/* 80353054 0034FF94  D0 1C 02 BC */	stfs f0, 0x2bc(r28)
/* 80353058 0034FF98  D0 3C 02 C0 */	stfs f1, 0x2c0(r28)
/* 8035305C 0034FF9C  D0 5C 02 C4 */	stfs f2, 0x2c4(r28)
/* 80353060 0034FFA0  48 00 00 20 */	b .L_80353080
.L_80353064:
/* 80353064 0034FFA4  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80353068 0034FFA8  38 80 07 12 */	li r4, 0x712
/* 8035306C 0034FFAC  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 80353070 0034FFB0  38 A0 00 00 */	li r5, 0
/* 80353074 0034FFB4  4C C6 31 82 */	crclr 6
/* 80353078 0034FFB8  4B CD 75 C9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8035307C 0034FFBC  38 60 00 00 */	li r3, 0
.L_80353080:
/* 80353080 0034FFC0  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80353084 0034FFC4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80353088 0034FFC8  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8035308C 0034FFCC  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80353090 0034FFD0  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 80353094 0034FFD4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80353098 0034FFD8  7C 08 03 A6 */	mtlr r0
/* 8035309C 0034FFDC  38 21 00 70 */	addi r1, r1, 0x70
/* 803530A0 0034FFE0  4E 80 00 20 */	blr 
.endfn setPathFinder__Q34Game13PanModokiBase3ObjFb

.fn releasePathFinder__Q34Game13PanModokiBase3ObjFv, global
/* 803530A4 0034FFE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803530A8 0034FFE8  7C 08 02 A6 */	mflr r0
/* 803530AC 0034FFEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803530B0 0034FFF0  38 00 00 00 */	li r0, 0
/* 803530B4 0034FFF4  98 03 02 F0 */	stb r0, 0x2f0(r3)
/* 803530B8 0034FFF8  80 0D 93 80 */	lwz r0, testPathfinder__4Game@sda21(r13)
/* 803530BC 0034FFFC  28 00 00 00 */	cmplwi r0, 0
/* 803530C0 00350000  41 82 00 18 */	beq .L_803530D8
/* 803530C4 00350004  80 83 02 EC */	lwz r4, 0x2ec(r3)
/* 803530C8 00350008  28 04 00 00 */	cmplwi r4, 0
/* 803530CC 0035000C  41 82 00 0C */	beq .L_803530D8
/* 803530D0 00350010  7C 03 03 78 */	mr r3, r0
/* 803530D4 00350014  4B E5 09 8D */	bl release__Q24Game10PathfinderFUl
.L_803530D8:
/* 803530D8 00350018  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803530DC 0035001C  7C 08 03 A6 */	mtlr r0
/* 803530E0 00350020  38 21 00 10 */	addi r1, r1, 0x10
/* 803530E4 00350024  4E 80 00 20 */	blr 
.endfn releasePathFinder__Q34Game13PanModokiBase3ObjFv

.fn killNest__Q34Game13PanModokiBase3ObjFv, global
/* 803530E8 00350028  80 83 03 78 */	lwz r4, 0x378(r3)
/* 803530EC 0035002C  28 04 00 00 */	cmplwi r4, 0
/* 803530F0 00350030  41 82 00 0C */	beq .L_803530FC
/* 803530F4 00350034  38 00 00 01 */	li r0, 1
/* 803530F8 00350038  90 04 02 F0 */	stw r0, 0x2f0(r4)
.L_803530FC:
/* 803530FC 0035003C  38 00 00 00 */	li r0, 0
/* 80353100 00350040  90 03 03 78 */	stw r0, 0x378(r3)
/* 80353104 00350044  4E 80 00 20 */	blr 
.endfn killNest__Q34Game13PanModokiBase3ObjFv

.fn isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet, global
/* 80353108 00350048  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8035310C 0035004C  7C 08 02 A6 */	mflr r0
/* 80353110 00350050  90 01 00 54 */	stw r0, 0x54(r1)
/* 80353114 00350054  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80353118 00350058  7C 9F 23 78 */	mr r31, r4
/* 8035311C 0035005C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80353120 00350060  7C 7E 1B 78 */	mr r30, r3
/* 80353124 00350064  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80353128 00350068  28 05 00 00 */	cmplwi r5, 0
/* 8035312C 0035006C  41 82 00 24 */	beq .L_80353150
/* 80353130 00350070  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80353134 00350074  2C 00 00 01 */	cmpwi r0, 1
/* 80353138 00350078  40 82 00 18 */	bne .L_80353150
/* 8035313C 0035007C  88 1F 03 2C */	lbz r0, 0x32c(r31)
/* 80353140 00350080  28 00 00 03 */	cmplwi r0, 3
/* 80353144 00350084  40 82 00 0C */	bne .L_80353150
/* 80353148 00350088  38 60 00 00 */	li r3, 0
/* 8035314C 0035008C  48 00 02 C8 */	b .L_80353414
.L_80353150:
/* 80353150 00350090  28 1F 00 00 */	cmplwi r31, 0
/* 80353154 00350094  41 82 02 BC */	beq .L_80353410
/* 80353158 00350098  7F E3 FB 78 */	mr r3, r31
/* 8035315C 0035009C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80353160 003500A0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80353164 003500A4  7D 89 03 A6 */	mtctr r12
/* 80353168 003500A8  4E 80 04 21 */	bctrl 
/* 8035316C 003500AC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80353170 003500B0  28 00 00 03 */	cmplwi r0, 3
/* 80353174 003500B4  41 80 00 18 */	blt .L_8035318C
/* 80353178 003500B8  80 1E 03 88 */	lwz r0, 0x388(r30)
/* 8035317C 003500BC  2C 00 00 0F */	cmpwi r0, 0xf
/* 80353180 003500C0  41 80 00 0C */	blt .L_8035318C
/* 80353184 003500C4  38 60 00 00 */	li r3, 0
/* 80353188 003500C8  48 00 02 8C */	b .L_80353414
.L_8035318C:
/* 8035318C 003500CC  7F E3 FB 78 */	mr r3, r31
/* 80353190 003500D0  4B E1 4B E5 */	bl panmodokiCarryable__Q24Game6PelletFv
/* 80353194 003500D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80353198 003500D8  40 82 00 0C */	bne .L_803531A4
/* 8035319C 003500DC  38 60 00 00 */	li r3, 0
/* 803531A0 003500E0  48 00 02 74 */	b .L_80353414
.L_803531A4:
/* 803531A4 003500E4  7F E4 FB 78 */	mr r4, r31
/* 803531A8 003500E8  38 61 00 18 */	addi r3, r1, 0x18
/* 803531AC 003500EC  4B E4 CA B1 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 803531B0 003500F0  38 00 00 00 */	li r0, 0
/* 803531B4 003500F4  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 803531B8 003500F8  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 803531BC 003500FC  38 61 00 18 */	addi r3, r1, 0x18
/* 803531C0 00350100  28 00 00 00 */	cmplwi r0, 0
/* 803531C4 00350104  90 81 00 08 */	stw r4, 8(r1)
/* 803531C8 00350108  90 01 00 14 */	stw r0, 0x14(r1)
/* 803531CC 0035010C  90 01 00 0C */	stw r0, 0xc(r1)
/* 803531D0 00350110  90 61 00 10 */	stw r3, 0x10(r1)
/* 803531D4 00350114  40 82 00 1C */	bne .L_803531F0
/* 803531D8 00350118  81 83 00 00 */	lwz r12, 0(r3)
/* 803531DC 0035011C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803531E0 00350120  7D 89 03 A6 */	mtctr r12
/* 803531E4 00350124  4E 80 04 21 */	bctrl 
/* 803531E8 00350128  90 61 00 0C */	stw r3, 0xc(r1)
/* 803531EC 0035012C  48 00 01 8C */	b .L_80353378
.L_803531F0:
/* 803531F0 00350130  81 83 00 00 */	lwz r12, 0(r3)
/* 803531F4 00350134  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803531F8 00350138  7D 89 03 A6 */	mtctr r12
/* 803531FC 0035013C  4E 80 04 21 */	bctrl 
/* 80353200 00350140  90 61 00 0C */	stw r3, 0xc(r1)
/* 80353204 00350144  48 00 00 58 */	b .L_8035325C
.L_80353208:
/* 80353208 00350148  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8035320C 0035014C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80353210 00350150  81 83 00 00 */	lwz r12, 0(r3)
/* 80353214 00350154  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80353218 00350158  7D 89 03 A6 */	mtctr r12
/* 8035321C 0035015C  4E 80 04 21 */	bctrl 
/* 80353220 00350160  7C 64 1B 78 */	mr r4, r3
/* 80353224 00350164  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80353228 00350168  81 83 00 00 */	lwz r12, 0(r3)
/* 8035322C 0035016C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80353230 00350170  7D 89 03 A6 */	mtctr r12
/* 80353234 00350174  4E 80 04 21 */	bctrl 
/* 80353238 00350178  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035323C 0035017C  40 82 01 3C */	bne .L_80353378
/* 80353240 00350180  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80353244 00350184  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80353248 00350188  81 83 00 00 */	lwz r12, 0(r3)
/* 8035324C 0035018C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80353250 00350190  7D 89 03 A6 */	mtctr r12
/* 80353254 00350194  4E 80 04 21 */	bctrl 
/* 80353258 00350198  90 61 00 0C */	stw r3, 0xc(r1)
.L_8035325C:
/* 8035325C 0035019C  81 81 00 08 */	lwz r12, 8(r1)
/* 80353260 003501A0  38 61 00 08 */	addi r3, r1, 8
/* 80353264 003501A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80353268 003501A8  7D 89 03 A6 */	mtctr r12
/* 8035326C 003501AC  4E 80 04 21 */	bctrl 
/* 80353270 003501B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80353274 003501B4  41 82 FF 94 */	beq .L_80353208
/* 80353278 003501B8  48 00 01 00 */	b .L_80353378
.L_8035327C:
/* 8035327C 003501BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80353280 003501C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80353284 003501C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80353288 003501C8  7D 89 03 A6 */	mtctr r12
/* 8035328C 003501CC  4E 80 04 21 */	bctrl 
/* 80353290 003501D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80353294 003501D4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80353298 003501D8  7D 89 03 A6 */	mtctr r12
/* 8035329C 003501DC  4E 80 04 21 */	bctrl 
/* 803532A0 003501E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803532A4 003501E4  41 82 00 18 */	beq .L_803532BC
/* 803532A8 003501E8  38 61 00 18 */	addi r3, r1, 0x18
/* 803532AC 003501EC  38 80 FF FF */	li r4, -1
/* 803532B0 003501F0  4B E4 CA B5 */	bl __dt__Q24Game8StickersFv
/* 803532B4 003501F4  38 60 00 00 */	li r3, 0
/* 803532B8 003501F8  48 00 01 5C */	b .L_80353414
.L_803532BC:
/* 803532BC 003501FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803532C0 00350200  28 00 00 00 */	cmplwi r0, 0
/* 803532C4 00350204  40 82 00 24 */	bne .L_803532E8
/* 803532C8 00350208  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803532CC 0035020C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803532D0 00350210  81 83 00 00 */	lwz r12, 0(r3)
/* 803532D4 00350214  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803532D8 00350218  7D 89 03 A6 */	mtctr r12
/* 803532DC 0035021C  4E 80 04 21 */	bctrl 
/* 803532E0 00350220  90 61 00 0C */	stw r3, 0xc(r1)
/* 803532E4 00350224  48 00 00 94 */	b .L_80353378
.L_803532E8:
/* 803532E8 00350228  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803532EC 0035022C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803532F0 00350230  81 83 00 00 */	lwz r12, 0(r3)
/* 803532F4 00350234  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803532F8 00350238  7D 89 03 A6 */	mtctr r12
/* 803532FC 0035023C  4E 80 04 21 */	bctrl 
/* 80353300 00350240  90 61 00 0C */	stw r3, 0xc(r1)
/* 80353304 00350244  48 00 00 58 */	b .L_8035335C
.L_80353308:
/* 80353308 00350248  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8035330C 0035024C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80353310 00350250  81 83 00 00 */	lwz r12, 0(r3)
/* 80353314 00350254  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80353318 00350258  7D 89 03 A6 */	mtctr r12
/* 8035331C 0035025C  4E 80 04 21 */	bctrl 
/* 80353320 00350260  7C 64 1B 78 */	mr r4, r3
/* 80353324 00350264  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80353328 00350268  81 83 00 00 */	lwz r12, 0(r3)
/* 8035332C 0035026C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80353330 00350270  7D 89 03 A6 */	mtctr r12
/* 80353334 00350274  4E 80 04 21 */	bctrl 
/* 80353338 00350278  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035333C 0035027C  40 82 00 3C */	bne .L_80353378
/* 80353340 00350280  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80353344 00350284  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80353348 00350288  81 83 00 00 */	lwz r12, 0(r3)
/* 8035334C 0035028C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80353350 00350290  7D 89 03 A6 */	mtctr r12
/* 80353354 00350294  4E 80 04 21 */	bctrl 
/* 80353358 00350298  90 61 00 0C */	stw r3, 0xc(r1)
.L_8035335C:
/* 8035335C 0035029C  81 81 00 08 */	lwz r12, 8(r1)
/* 80353360 003502A0  38 61 00 08 */	addi r3, r1, 8
/* 80353364 003502A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80353368 003502A8  7D 89 03 A6 */	mtctr r12
/* 8035336C 003502AC  4E 80 04 21 */	bctrl 
/* 80353370 003502B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80353374 003502B4  41 82 FF 94 */	beq .L_80353308
.L_80353378:
/* 80353378 003502B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8035337C 003502BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80353380 003502C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80353384 003502C4  7D 89 03 A6 */	mtctr r12
/* 80353388 003502C8  4E 80 04 21 */	bctrl 
/* 8035338C 003502CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80353390 003502D0  7C 04 18 40 */	cmplw r4, r3
/* 80353394 003502D4  40 82 FE E8 */	bne .L_8035327C
/* 80353398 003502D8  7F E3 FB 78 */	mr r3, r31
/* 8035339C 003502DC  4B E1 42 15 */	bl getPelletConfigMax__Q24Game6PelletFv
/* 803533A0 003502E0  7C 7E 1B 78 */	mr r30, r3
/* 803533A4 003502E4  7F E3 FB 78 */	mr r3, r31
/* 803533A8 003502E8  4B E1 41 E9 */	bl getPelletConfigMin__Q24Game6PelletFv
/* 803533AC 003502EC  7C 63 F2 14 */	add r3, r3, r30
/* 803533B0 003502F0  3C 00 43 30 */	lis r0, 0x4330
/* 803533B4 003502F4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803533B8 003502F8  90 01 00 38 */	stw r0, 0x38(r1)
/* 803533BC 003502FC  C8 42 01 A0 */	lfd f2, lbl_8051E500@sda21(r2)
/* 803533C0 00350300  38 80 00 02 */	li r4, 2
/* 803533C4 00350304  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803533C8 00350308  C0 02 01 70 */	lfs f0, lbl_8051E4D0@sda21(r2)
/* 803533CC 0035030C  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 803533D0 00350310  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 803533D4 00350314  EC 21 10 28 */	fsubs f1, f1, f2
/* 803533D8 00350318  EC 20 00 72 */	fmuls f1, f0, f1
/* 803533DC 0035031C  4B EE 1B F9 */	bl pullable__Q24Game11PelletCarryFUsf
/* 803533E0 00350320  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803533E4 00350324  40 82 00 18 */	bne .L_803533FC
/* 803533E8 00350328  38 61 00 18 */	addi r3, r1, 0x18
/* 803533EC 0035032C  38 80 FF FF */	li r4, -1
/* 803533F0 00350330  4B E4 C9 75 */	bl __dt__Q24Game8StickersFv
/* 803533F4 00350334  38 60 00 00 */	li r3, 0
/* 803533F8 00350338  48 00 00 1C */	b .L_80353414
.L_803533FC:
/* 803533FC 0035033C  38 61 00 18 */	addi r3, r1, 0x18
/* 80353400 00350340  38 80 FF FF */	li r4, -1
/* 80353404 00350344  4B E4 C9 61 */	bl __dt__Q24Game8StickersFv
/* 80353408 00350348  38 60 00 01 */	li r3, 1
/* 8035340C 0035034C  48 00 00 08 */	b .L_80353414
.L_80353410:
/* 80353410 00350350  38 60 00 00 */	li r3, 0
.L_80353414:
/* 80353414 00350354  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80353418 00350358  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8035341C 0035035C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80353420 00350360  7C 08 03 A6 */	mtlr r0
/* 80353424 00350364  38 21 00 50 */	addi r1, r1, 0x50
/* 80353428 00350368  4E 80 00 20 */	blr 
.endfn isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet

.fn "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>", global
/* 8035342C 0035036C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80353430 00350370  7C 08 02 A6 */	mflr r0
/* 80353434 00350374  90 01 00 84 */	stw r0, 0x84(r1)
/* 80353438 00350378  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8035343C 0035037C  7C 9F 23 78 */	mr r31, r4
/* 80353440 00350380  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80353444 00350384  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80353448 00350388  7C 7D 1B 78 */	mr r29, r3
/* 8035344C 0035038C  80 63 02 30 */	lwz r3, 0x230(r3)
/* 80353450 00350390  28 03 00 00 */	cmplwi r3, 0
/* 80353454 00350394  40 82 00 0C */	bne .L_80353460
/* 80353458 00350398  3B C0 00 00 */	li r30, 0
/* 8035345C 0035039C  48 00 00 30 */	b .L_8035348C
.L_80353460:
/* 80353460 003503A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80353464 003503A4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80353468 003503A8  7D 89 03 A6 */	mtctr r12
/* 8035346C 003503AC  4E 80 04 21 */	bctrl 
/* 80353470 003503B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80353474 003503B4  41 82 00 14 */	beq .L_80353488
/* 80353478 003503B8  80 7D 02 30 */	lwz r3, 0x230(r29)
/* 8035347C 003503BC  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80353480 003503C0  83 C3 00 04 */	lwz r30, 4(r3)
/* 80353484 003503C4  48 00 00 08 */	b .L_8035348C
.L_80353488:
/* 80353488 003503C8  83 DD 02 30 */	lwz r30, 0x230(r29)
.L_8035348C:
/* 8035348C 003503CC  28 1E 00 00 */	cmplwi r30, 0
/* 80353490 003503D0  40 82 00 20 */	bne .L_803534B0
/* 80353494 003503D4  3C 60 80 49 */	lis r3, lbl_80490EF8@ha
/* 80353498 003503D8  3C A0 80 49 */	lis r5, lbl_80490F08@ha
/* 8035349C 003503DC  38 63 0E F8 */	addi r3, r3, lbl_80490EF8@l
/* 803534A0 003503E0  38 80 07 6F */	li r4, 0x76f
/* 803534A4 003503E4  38 A5 0F 08 */	addi r5, r5, lbl_80490F08@l
/* 803534A8 003503E8  4C C6 31 82 */	crclr 6
/* 803534AC 003503EC  4B CD 71 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803534B0:
/* 803534B0 003503F0  7F C3 F3 78 */	mr r3, r30
/* 803534B4 003503F4  4B E1 35 15 */	bl getPickRadius__Q24Game6PelletFv
/* 803534B8 003503F8  C0 9D 02 E0 */	lfs f4, 0x2e0(r29)
/* 803534BC 003503FC  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803534C0 00350400  FC 40 20 90 */	fmr f2, f4
/* 803534C4 00350404  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803534C8 00350408  40 80 00 08 */	bge .L_803534D0
/* 803534CC 0035040C  FC 40 20 50 */	fneg f2, f4
.L_803534D0:
/* 803534D0 00350410  C0 62 01 68 */	lfs f3, lbl_8051E4C8@sda21(r2)
/* 803534D4 00350414  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803534D8 00350418  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 803534DC 0035041C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 803534E0 00350420  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803534E4 00350424  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803534E8 00350428  FC 00 10 1E */	fctiwz f0, f2
/* 803534EC 0035042C  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 803534F0 00350430  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803534F4 00350434  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803534F8 00350438  7C 64 02 14 */	add r3, r4, r0
/* 803534FC 0035043C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80353500 00350440  EC 41 00 32 */	fmuls f2, f1, f0
/* 80353504 00350444  40 80 00 28 */	bge .L_8035352C
/* 80353508 00350448  C0 02 01 6C */	lfs f0, lbl_8051E4CC@sda21(r2)
/* 8035350C 0035044C  EC 04 00 32 */	fmuls f0, f4, f0
/* 80353510 00350450  FC 00 00 1E */	fctiwz f0, f0
/* 80353514 00350454  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80353518 00350458  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8035351C 0035045C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80353520 00350460  7C 04 04 2E */	lfsx f0, r4, r0
/* 80353524 00350464  FC 00 00 50 */	fneg f0, f0
/* 80353528 00350468  48 00 00 1C */	b .L_80353544
.L_8035352C:
/* 8035352C 0035046C  EC 04 00 F2 */	fmuls f0, f4, f3
/* 80353530 00350470  FC 00 00 1E */	fctiwz f0, f0
/* 80353534 00350474  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80353538 00350478  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8035353C 0035047C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80353540 00350480  7C 04 04 2E */	lfsx f0, r4, r0
.L_80353544:
/* 80353544 00350484  EC 21 00 32 */	fmuls f1, f1, f0
/* 80353548 00350488  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 8035354C 0035048C  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80353550 00350490  38 7E 01 38 */	addi r3, r30, 0x138
/* 80353554 00350494  38 81 00 20 */	addi r4, r1, 0x20
/* 80353558 00350498  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8035355C 0035049C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80353560 003504A0  4B D9 6D 6D */	bl PSMTXCopy
/* 80353564 003504A4  38 61 00 20 */	addi r3, r1, 0x20
/* 80353568 003504A8  38 81 00 14 */	addi r4, r1, 0x14
/* 8035356C 003504AC  38 A1 00 08 */	addi r5, r1, 8
/* 80353570 003504B0  4B D9 76 69 */	bl PSMTXMultVec
/* 80353574 003504B4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80353578 003504B8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8035357C 003504BC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80353580 003504C0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80353584 003504C4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80353588 003504C8  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8035358C 003504CC  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80353590 003504D0  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80353594 003504D4  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80353598 003504D8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8035359C 003504DC  7C 08 03 A6 */	mtlr r0
/* 803535A0 003504E0  38 21 00 80 */	addi r1, r1, 0x80
/* 803535A4 003504E4  4E 80 00 20 */	blr 
.endfn "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"

.fn boundEffect__Q34Game13PanModokiBase3ObjFv, global
/* 803535A8 003504E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803535AC 003504EC  7C 08 02 A6 */	mflr r0
/* 803535B0 003504F0  38 83 01 8C */	addi r4, r3, 0x18c
/* 803535B4 003504F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803535B8 003504F8  C0 23 03 3C */	lfs f1, 0x33c(r3)
/* 803535BC 003504FC  4B DB 05 95 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 803535C0 00350500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803535C4 00350504  7C 08 03 A6 */	mtlr r0
/* 803535C8 00350508  38 21 00 10 */	addi r1, r1, 0x10
/* 803535CC 0035050C  4E 80 00 20 */	blr 
.endfn boundEffect__Q34Game13PanModokiBase3ObjFv

.fn createAppearEffect__Q34Game13PanModokiBase3ObjFv, global
/* 803535D0 00350510  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803535D4 00350514  7C 08 02 A6 */	mflr r0
/* 803535D8 00350518  90 01 00 44 */	stw r0, 0x44(r1)
/* 803535DC 0035051C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803535E0 00350520  7C 7F 1B 78 */	mr r31, r3
/* 803535E4 00350524  80 03 02 80 */	lwz r0, 0x280(r3)
/* 803535E8 00350528  28 00 00 00 */	cmplwi r0, 0
/* 803535EC 0035052C  40 82 00 98 */	bne .L_80353684
/* 803535F0 00350530  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 803535F4 00350534  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 803535F8 00350538  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 803535FC 0035053C  3C 60 80 4E */	lis r3, __vt__Q23efx7TPanApp@ha
/* 80353600 00350540  90 01 00 14 */	stw r0, 0x14(r1)
/* 80353604 00350544  38 84 6A 78 */	addi r4, r4, __vt__Q23efx8TSimple1@l
/* 80353608 00350548  38 00 02 6E */	li r0, 0x26e
/* 8035360C 0035054C  38 E0 00 00 */	li r7, 0
/* 80353610 00350550  90 81 00 14 */	stw r4, 0x14(r1)
/* 80353614 00350554  38 C3 6E 1C */	addi r6, r3, __vt__Q23efx7TPanApp@l
/* 80353618 00350558  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8035361C 0035055C  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80353620 00350560  B0 01 00 18 */	sth r0, 0x18(r1)
/* 80353624 00350564  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 80353628 00350568  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8035362C 0035056C  38 61 00 14 */	addi r3, r1, 0x14
/* 80353630 00350570  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80353634 00350574  38 81 00 20 */	addi r4, r1, 0x20
/* 80353638 00350578  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8035363C 0035057C  81 1F 01 8C */	lwz r8, 0x18c(r31)
/* 80353640 00350580  80 FF 01 90 */	lwz r7, 0x190(r31)
/* 80353644 00350584  80 DF 01 94 */	lwz r6, 0x194(r31)
/* 80353648 00350588  C0 7F 03 40 */	lfs f3, 0x340(r31)
/* 8035364C 0035058C  91 01 00 08 */	stw r8, 8(r1)
/* 80353650 00350590  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80353654 00350594  C0 41 00 08 */	lfs f2, 8(r1)
/* 80353658 00350598  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8035365C 0035059C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80353660 003505A0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80353664 003505A4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80353668 003505A8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8035366C 003505AC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80353670 003505B0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80353674 003505B4  90 01 00 20 */	stw r0, 0x20(r1)
/* 80353678 003505B8  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8035367C 003505BC  48 06 06 99 */	bl create__Q23efx7TPanAppFPQ23efx3Arg
/* 80353680 003505C0  48 00 00 24 */	b .L_803536A4
.L_80353684:
/* 80353684 003505C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80353688 003505C8  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 8035368C 003505CC  7D 89 03 A6 */	mtctr r12
/* 80353690 003505D0  4E 80 04 21 */	bctrl 
/* 80353694 003505D4  C0 3F 03 3C */	lfs f1, 0x33c(r31)
/* 80353698 003505D8  7F E3 FB 78 */	mr r3, r31
/* 8035369C 003505DC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 803536A0 003505E0  4B DB 03 59 */	bl "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_803536A4:
/* 803536A4 003505E4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803536A8 003505E8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803536AC 003505EC  7C 08 03 A6 */	mtlr r0
/* 803536B0 003505F0  38 21 00 40 */	addi r1, r1, 0x40
/* 803536B4 003505F4  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game13PanModokiBase3ObjFv

.fn createHideEffect__Q34Game13PanModokiBase3ObjFv, global
/* 803536B8 003505F8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803536BC 003505FC  7C 08 02 A6 */	mflr r0
/* 803536C0 00350600  90 01 00 54 */	stw r0, 0x54(r1)
/* 803536C4 00350604  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803536C8 00350608  7C 7F 1B 78 */	mr r31, r3
/* 803536CC 0035060C  80 03 02 80 */	lwz r0, 0x280(r3)
/* 803536D0 00350610  28 00 00 00 */	cmplwi r0, 0
/* 803536D4 00350614  40 82 00 A0 */	bne .L_80353774
/* 803536D8 00350618  80 9F 03 78 */	lwz r4, 0x378(r31)
/* 803536DC 0035061C  38 61 00 14 */	addi r3, r1, 0x14
/* 803536E0 00350620  81 84 00 00 */	lwz r12, 0(r4)
/* 803536E4 00350624  81 8C 00 08 */	lwz r12, 8(r12)
/* 803536E8 00350628  7D 89 03 A6 */	mtctr r12
/* 803536EC 0035062C  4E 80 04 21 */	bctrl 
/* 803536F0 00350630  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803536F4 00350634  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803536F8 00350638  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803536FC 0035063C  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80353700 00350640  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80353704 00350644  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 80353708 00350648  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8035370C 0035064C  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80353710 00350650  C0 7F 03 40 */	lfs f3, 0x340(r31)
/* 80353714 00350654  38 81 00 2C */	addi r4, r1, 0x2c
/* 80353718 00350658  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8035371C 0035065C  80 E1 00 20 */	lwz r7, 0x20(r1)
/* 80353720 00350660  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80353724 00350664  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 80353728 00350668  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8035372C 0035066C  90 E1 00 08 */	stw r7, 8(r1)
/* 80353730 00350670  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80353734 00350674  C0 41 00 08 */	lfs f2, 8(r1)
/* 80353738 00350678  90 61 00 10 */	stw r3, 0x10(r1)
/* 8035373C 0035067C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80353740 00350680  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80353744 00350684  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80353748 00350688  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8035374C 0035068C  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80353750 00350690  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80353754 00350694  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80353758 00350698  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 8035375C 0035069C  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 80353760 003506A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80353764 003506A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80353768 003506A8  7D 89 03 A6 */	mtctr r12
/* 8035376C 003506AC  4E 80 04 21 */	bctrl 
/* 80353770 003506B0  48 00 00 14 */	b .L_80353784
.L_80353774:
/* 80353774 003506B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80353778 003506B8  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 8035377C 003506BC  7D 89 03 A6 */	mtctr r12
/* 80353780 003506C0  4E 80 04 21 */	bctrl 
.L_80353784:
/* 80353784 003506C4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80353788 003506C8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8035378C 003506CC  7C 08 03 A6 */	mtlr r0
/* 80353790 003506D0  38 21 00 50 */	addi r1, r1, 0x50
/* 80353794 003506D4  4E 80 00 20 */	blr 
.endfn createHideEffect__Q34Game13PanModokiBase3ObjFv

.fn fadeHideEffect__Q34Game13PanModokiBase3ObjFv, global
/* 80353798 003506D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035379C 003506DC  7C 08 02 A6 */	mflr r0
/* 803537A0 003506E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803537A4 003506E4  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 803537A8 003506E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803537AC 003506EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803537B0 003506F0  7D 89 03 A6 */	mtctr r12
/* 803537B4 003506F4  4E 80 04 21 */	bctrl 
/* 803537B8 003506F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803537BC 003506FC  7C 08 03 A6 */	mtlr r0
/* 803537C0 00350700  38 21 00 10 */	addi r1, r1, 0x10
/* 803537C4 00350704  4E 80 00 20 */	blr 
.endfn fadeHideEffect__Q34Game13PanModokiBase3ObjFv

.fn createPulledSmokeEffect__Q34Game13PanModokiBase3ObjFv, global
/* 803537C8 00350708  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803537CC 0035070C  7C 08 02 A6 */	mflr r0
/* 803537D0 00350710  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 803537D4 00350714  3C 80 80 4B */	lis r4, __vt__Q23efx8ArgScale@ha
/* 803537D8 00350718  90 01 00 34 */	stw r0, 0x34(r1)
/* 803537DC 0035071C  38 04 A2 DC */	addi r0, r4, __vt__Q23efx8ArgScale@l
/* 803537E0 00350720  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 803537E4 00350724  38 81 00 14 */	addi r4, r1, 0x14
/* 803537E8 00350728  81 03 01 8C */	lwz r8, 0x18c(r3)
/* 803537EC 0035072C  80 E3 01 90 */	lwz r7, 0x190(r3)
/* 803537F0 00350730  80 C3 01 94 */	lwz r6, 0x194(r3)
/* 803537F4 00350734  C0 63 03 40 */	lfs f3, 0x340(r3)
/* 803537F8 00350738  91 01 00 08 */	stw r8, 8(r1)
/* 803537FC 0035073C  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80353800 00350740  C0 41 00 08 */	lfs f2, 8(r1)
/* 80353804 00350744  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80353808 00350748  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035380C 0035074C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80353810 00350750  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80353814 00350754  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80353818 00350758  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8035381C 0035075C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80353820 00350760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80353824 00350764  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80353828 00350768  80 63 03 00 */	lwz r3, 0x300(r3)
/* 8035382C 0035076C  81 83 00 00 */	lwz r12, 0(r3)
/* 80353830 00350770  81 8C 00 08 */	lwz r12, 8(r12)
/* 80353834 00350774  7D 89 03 A6 */	mtctr r12
/* 80353838 00350778  4E 80 04 21 */	bctrl 
/* 8035383C 0035077C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80353840 00350780  7C 08 03 A6 */	mtlr r0
/* 80353844 00350784  38 21 00 30 */	addi r1, r1, 0x30
/* 80353848 00350788  4E 80 00 20 */	blr 
.endfn createPulledSmokeEffect__Q34Game13PanModokiBase3ObjFv

.fn fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv, global
/* 8035384C 0035078C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80353850 00350790  7C 08 02 A6 */	mflr r0
/* 80353854 00350794  90 01 00 14 */	stw r0, 0x14(r1)
/* 80353858 00350798  80 63 03 00 */	lwz r3, 0x300(r3)
/* 8035385C 0035079C  81 83 00 00 */	lwz r12, 0(r3)
/* 80353860 003507A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80353864 003507A4  7D 89 03 A6 */	mtctr r12
/* 80353868 003507A8  4E 80 04 21 */	bctrl 
/* 8035386C 003507AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80353870 003507B0  7C 08 03 A6 */	mtlr r0
/* 80353874 003507B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80353878 003507B8  4E 80 00 20 */	blr 
.endfn fadePulledSmokeEffect__Q34Game13PanModokiBase3ObjFv

.fn throwUpEatItem__Q34Game13PanModokiBase3ObjFv, global
/* 8035387C 003507BC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80353880 003507C0  7C 08 02 A6 */	mflr r0
/* 80353884 003507C4  90 01 00 94 */	stw r0, 0x94(r1)
/* 80353888 003507C8  BF 41 00 78 */	stmw r26, 0x78(r1)
/* 8035388C 003507CC  7C 7A 1B 78 */	mr r26, r3
/* 80353890 003507D0  80 63 03 8C */	lwz r3, 0x38c(r3)
/* 80353894 003507D4  28 03 00 00 */	cmplwi r3, 0
/* 80353898 003507D8  41 82 00 34 */	beq .L_803538CC
/* 8035389C 003507DC  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureKillArg@ha
/* 803538A0 003507E0  38 C0 00 00 */	li r6, 0
/* 803538A4 003507E4  38 05 A2 D0 */	addi r0, r5, __vt__Q24Game15CreatureKillArg@l
/* 803538A8 003507E8  3C 80 80 4E */	lis r4, __vt__Q24Game13PelletKillArg@ha
/* 803538AC 003507EC  90 01 00 20 */	stw r0, 0x20(r1)
/* 803538B0 003507F0  38 A4 CE 04 */	addi r5, r4, __vt__Q24Game13PelletKillArg@l
/* 803538B4 003507F4  38 00 00 01 */	li r0, 1
/* 803538B8 003507F8  38 81 00 20 */	addi r4, r1, 0x20
/* 803538BC 003507FC  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803538C0 00350800  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803538C4 00350804  98 01 00 28 */	stb r0, 0x28(r1)
/* 803538C8 00350808  4B DE 78 29 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_803538CC:
/* 803538CC 0035080C  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 803538D0 00350810  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 803538D4 00350814  7F 5D D3 78 */	mr r29, r26
/* 803538D8 00350818  3B 80 00 00 */	li r28, 0
/* 803538DC 0035081C  3B C4 A2 F4 */	addi r30, r4, __vt__Q24Game15CreatureInitArg@l
/* 803538E0 00350820  3B E3 A2 B8 */	addi r31, r3, __vt__Q24Game13PelletInitArg@l
/* 803538E4 00350824  48 00 02 44 */	b .L_80353B28
.L_803538E8:
/* 803538E8 00350828  93 C1 00 2C */	stw r30, 0x2c(r1)
/* 803538EC 0035082C  38 A0 00 00 */	li r5, 0
/* 803538F0 00350830  38 00 FF FF */	li r0, -1
/* 803538F4 00350834  38 80 00 FF */	li r4, 0xff
/* 803538F8 00350838  38 60 00 01 */	li r3, 1
/* 803538FC 0035083C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80353900 00350840  98 A1 00 48 */	stb r5, 0x48(r1)
/* 80353904 00350844  B0 A1 00 40 */	sth r5, 0x40(r1)
/* 80353908 00350848  98 81 00 42 */	stb r4, 0x42(r1)
/* 8035390C 0035084C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80353910 00350850  98 A1 00 43 */	stb r5, 0x43(r1)
/* 80353914 00350854  98 61 00 30 */	stb r3, 0x30(r1)
/* 80353918 00350858  98 A1 00 49 */	stb r5, 0x49(r1)
/* 8035391C 0035085C  90 01 00 50 */	stw r0, 0x50(r1)
/* 80353920 00350860  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80353924 00350864  98 A1 00 4A */	stb r5, 0x4a(r1)
/* 80353928 00350868  98 A1 00 4B */	stb r5, 0x4b(r1)
/* 8035392C 0035086C  80 7D 03 8C */	lwz r3, 0x38c(r29)
/* 80353930 00350870  4B E1 31 09 */	bl getConfigName__Q24Game6PelletFv
/* 80353934 00350874  7C 65 1B 78 */	mr r5, r3
/* 80353938 00350878  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8035393C 0035087C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80353940 00350880  4B E1 A0 A5 */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
/* 80353944 00350884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80353948 00350888  41 82 01 D8 */	beq .L_80353B20
/* 8035394C 0035088C  83 7D 03 8C */	lwz r27, 0x38c(r29)
/* 80353950 00350890  28 1B 00 00 */	cmplwi r27, 0
/* 80353954 00350894  41 82 01 CC */	beq .L_80353B20
/* 80353958 00350898  80 7B 04 54 */	lwz r3, 0x454(r27)
/* 8035395C 0035089C  7F 64 DB 78 */	mr r4, r27
/* 80353960 003508A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80353964 003508A4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80353968 003508A8  7D 89 03 A6 */	mtctr r12
/* 8035396C 003508AC  4E 80 04 21 */	bctrl 
/* 80353970 003508B0  38 60 00 02 */	li r3, 2
/* 80353974 003508B4  38 00 00 01 */	li r0, 1
/* 80353978 003508B8  B0 61 00 40 */	sth r3, 0x40(r1)
/* 8035397C 003508BC  7F 63 DB 78 */	mr r3, r27
/* 80353980 003508C0  38 81 00 2C */	addi r4, r1, 0x2c
/* 80353984 003508C4  98 01 00 48 */	stb r0, 0x48(r1)
/* 80353988 003508C8  4B DE 76 41 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8035398C 003508CC  C0 3A 01 98 */	lfs f1, 0x198(r26)
/* 80353990 003508D0  7F 43 D3 78 */	mr r3, r26
/* 80353994 003508D4  C0 02 01 B8 */	lfs f0, lbl_8051E518@sda21(r2)
/* 80353998 003508D8  38 81 00 08 */	addi r4, r1, 8
/* 8035399C 003508DC  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803539A0 003508E0  C0 3A 01 9C */	lfs f1, 0x19c(r26)
/* 803539A4 003508E4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803539A8 003508E8  EC 01 00 2A */	fadds f0, f1, f0
/* 803539AC 003508EC  C0 3A 01 A0 */	lfs f1, 0x1a0(r26)
/* 803539B0 003508F0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 803539B4 003508F4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803539B8 003508F8  81 9A 00 00 */	lwz r12, 0(r26)
/* 803539BC 003508FC  81 8C 02 6C */	lwz r12, 0x26c(r12)
/* 803539C0 00350900  7D 89 03 A6 */	mtctr r12
/* 803539C4 00350904  4E 80 04 21 */	bctrl 
/* 803539C8 00350908  3C 60 43 30 */	lis r3, 0x4330
/* 803539CC 0035090C  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 803539D0 00350910  80 9A 03 88 */	lwz r4, 0x388(r26)
/* 803539D4 00350914  90 01 00 5C */	stw r0, 0x5c(r1)
/* 803539D8 00350918  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 803539DC 0035091C  C8 42 01 A0 */	lfd f2, lbl_8051E500@sda21(r2)
/* 803539E0 00350920  90 61 00 58 */	stw r3, 0x58(r1)
/* 803539E4 00350924  2C 04 00 01 */	cmpwi r4, 1
/* 803539E8 00350928  C0 62 01 D0 */	lfs f3, lbl_8051E530@sda21(r2)
/* 803539EC 0035092C  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 803539F0 00350930  90 01 00 64 */	stw r0, 0x64(r1)
/* 803539F4 00350934  EC 20 10 28 */	fsubs f1, f0, f2
/* 803539F8 00350938  90 61 00 60 */	stw r3, 0x60(r1)
/* 803539FC 0035093C  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80353A00 00350940  EC 23 00 72 */	fmuls f1, f3, f1
/* 80353A04 00350944  EC 00 10 28 */	fsubs f0, f0, f2
/* 80353A08 00350948  EC 81 00 24 */	fdivs f4, f1, f0
/* 80353A0C 0035094C  41 82 00 B8 */	beq .L_80353AC4
/* 80353A10 00350950  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80353A14 00350954  C0 62 01 78 */	lfs f3, lbl_8051E4D8@sda21(r2)
/* 80353A18 00350958  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80353A1C 0035095C  40 80 00 30 */	bge .L_80353A4C
/* 80353A20 00350960  C0 02 01 6C */	lfs f0, lbl_8051E4CC@sda21(r2)
/* 80353A24 00350964  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80353A28 00350968  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80353A2C 0035096C  EC 04 00 32 */	fmuls f0, f4, f0
/* 80353A30 00350970  FC 00 00 1E */	fctiwz f0, f0
/* 80353A34 00350974  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80353A38 00350978  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80353A3C 0035097C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80353A40 00350980  7C 03 04 2E */	lfsx f0, r3, r0
/* 80353A44 00350984  FC 40 00 50 */	fneg f2, f0
/* 80353A48 00350988  48 00 00 28 */	b .L_80353A70
.L_80353A4C:
/* 80353A4C 0035098C  C0 02 01 68 */	lfs f0, lbl_8051E4C8@sda21(r2)
/* 80353A50 00350990  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80353A54 00350994  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80353A58 00350998  EC 04 00 32 */	fmuls f0, f4, f0
/* 80353A5C 0035099C  FC 00 00 1E */	fctiwz f0, f0
/* 80353A60 003509A0  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80353A64 003509A4  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 80353A68 003509A8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80353A6C 003509AC  7C 43 04 2E */	lfsx f2, r3, r0
.L_80353A70:
/* 80353A70 003509B0  C0 21 00 08 */	lfs f1, 8(r1)
/* 80353A74 003509B4  C0 02 01 30 */	lfs f0, lbl_8051E490@sda21(r2)
/* 80353A78 003509B8  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80353A7C 003509BC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80353A80 003509C0  D0 21 00 08 */	stfs f1, 8(r1)
/* 80353A84 003509C4  40 80 00 08 */	bge .L_80353A8C
/* 80353A88 003509C8  FC 80 20 50 */	fneg f4, f4
.L_80353A8C:
/* 80353A8C 003509CC  C0 02 01 68 */	lfs f0, lbl_8051E4C8@sda21(r2)
/* 80353A90 003509D0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80353A94 003509D4  38 03 71 A0 */	addi r0, r3, sincosTable___5JMath@l
/* 80353A98 003509D8  C0 42 01 78 */	lfs f2, lbl_8051E4D8@sda21(r2)
/* 80353A9C 003509DC  EC 24 00 32 */	fmuls f1, f4, f0
/* 80353AA0 003509E0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80353AA4 003509E4  FC 20 08 1E */	fctiwz f1, f1
/* 80353AA8 003509E8  D8 21 00 68 */	stfd f1, 0x68(r1)
/* 80353AAC 003509EC  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 80353AB0 003509F0  54 63 1C B8 */	rlwinm r3, r3, 3, 0x12, 0x1c
/* 80353AB4 003509F4  7C 60 1A 14 */	add r3, r0, r3
/* 80353AB8 003509F8  C0 23 00 04 */	lfs f1, 4(r3)
/* 80353ABC 003509FC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80353AC0 00350A00  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_80353AC4:
/* 80353AC4 00350A04  7F 63 DB 78 */	mr r3, r27
/* 80353AC8 00350A08  38 81 00 14 */	addi r4, r1, 0x14
/* 80353ACC 00350A0C  38 A0 00 00 */	li r5, 0
/* 80353AD0 00350A10  4B DE 76 D9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80353AD4 00350A14  7F 63 DB 78 */	mr r3, r27
/* 80353AD8 00350A18  38 81 00 08 */	addi r4, r1, 8
/* 80353ADC 00350A1C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80353AE0 00350A20  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80353AE4 00350A24  7D 89 03 A6 */	mtctr r12
/* 80353AE8 00350A28  4E 80 04 21 */	bctrl 
/* 80353AEC 00350A2C  7F 63 DB 78 */	mr r3, r27
/* 80353AF0 00350A30  38 81 00 14 */	addi r4, r1, 0x14
/* 80353AF4 00350A34  81 9B 00 00 */	lwz r12, 0(r27)
/* 80353AF8 00350A38  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 80353AFC 00350A3C  7D 89 03 A6 */	mtctr r12
/* 80353B00 00350A40  4E 80 04 21 */	bctrl 
/* 80353B04 00350A44  80 7A 02 8C */	lwz r3, 0x28c(r26)
/* 80353B08 00350A48  38 80 58 10 */	li r4, 0x5810
/* 80353B0C 00350A4C  38 A0 00 00 */	li r5, 0
/* 80353B10 00350A50  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80353B14 00350A54  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80353B18 00350A58  7D 89 03 A6 */	mtctr r12
/* 80353B1C 00350A5C  4E 80 04 21 */	bctrl 
.L_80353B20:
/* 80353B20 00350A60  3B BD 00 04 */	addi r29, r29, 4
/* 80353B24 00350A64  3B 9C 00 01 */	addi r28, r28, 1
.L_80353B28:
/* 80353B28 00350A68  80 1A 03 88 */	lwz r0, 0x388(r26)
/* 80353B2C 00350A6C  7C 1C 00 00 */	cmpw r28, r0
/* 80353B30 00350A70  41 80 FD B8 */	blt .L_803538E8
/* 80353B34 00350A74  BB 41 00 78 */	lmw r26, 0x78(r1)
/* 80353B38 00350A78  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80353B3C 00350A7C  7C 08 03 A6 */	mtlr r0
/* 80353B40 00350A80  38 21 00 90 */	addi r1, r1, 0x90
/* 80353B44 00350A84  4E 80 00 20 */	blr 
.endfn throwUpEatItem__Q34Game13PanModokiBase3ObjFv

.fn __ct__Q34Game11OoPanModoki3ObjFv, global
/* 80353B48 00350A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80353B4C 00350A8C  7C 08 02 A6 */	mflr r0
/* 80353B50 00350A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80353B54 00350A94  7C 80 07 35 */	extsh. r0, r4
/* 80353B58 00350A98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80353B5C 00350A9C  7C 7F 1B 78 */	mr r31, r3
/* 80353B60 00350AA0  41 82 00 24 */	beq .L_80353B84
/* 80353B64 00350AA4  38 1F 03 C8 */	addi r0, r31, 0x3c8
/* 80353B68 00350AA8  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80353B6C 00350AAC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80353B70 00350AB0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80353B74 00350AB4  38 00 00 00 */	li r0, 0
/* 80353B78 00350AB8  90 7F 03 C8 */	stw r3, 0x3c8(r31)
/* 80353B7C 00350ABC  90 1F 03 CC */	stw r0, 0x3cc(r31)
/* 80353B80 00350AC0  90 1F 03 D0 */	stw r0, 0x3d0(r31)
.L_80353B84:
/* 80353B84 00350AC4  7F E3 FB 78 */	mr r3, r31
/* 80353B88 00350AC8  38 80 00 00 */	li r4, 0
/* 80353B8C 00350ACC  4B FF BE 29 */	bl __ct__Q34Game13PanModokiBase3ObjFv
/* 80353B90 00350AD0  3C 60 80 4E */	lis r3, __vt__Q34Game11OoPanModoki3Obj@ha
/* 80353B94 00350AD4  38 1F 03 C8 */	addi r0, r31, 0x3c8
/* 80353B98 00350AD8  38 83 CA C4 */	addi r4, r3, __vt__Q34Game11OoPanModoki3Obj@l
/* 80353B9C 00350ADC  C0 82 01 E0 */	lfs f4, lbl_8051E540@sda21(r2)
/* 80353BA0 00350AE0  90 9F 00 00 */	stw r4, 0(r31)
/* 80353BA4 00350AE4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80353BA8 00350AE8  38 A4 03 10 */	addi r5, r4, 0x310
/* 80353BAC 00350AEC  C0 62 01 7C */	lfs f3, lbl_8051E4DC@sda21(r2)
/* 80353BB0 00350AF0  90 7F 01 78 */	stw r3, 0x178(r31)
/* 80353BB4 00350AF4  7F E3 FB 78 */	mr r3, r31
/* 80353BB8 00350AF8  C0 42 01 E4 */	lfs f2, lbl_8051E544@sda21(r2)
/* 80353BBC 00350AFC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80353BC0 00350B00  C0 22 01 C0 */	lfs f1, lbl_8051E520@sda21(r2)
/* 80353BC4 00350B04  90 A4 00 00 */	stw r5, 0(r4)
/* 80353BC8 00350B08  C0 02 01 E8 */	lfs f0, lbl_8051E548@sda21(r2)
/* 80353BCC 00350B0C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80353BD0 00350B10  7C 04 00 50 */	subf r0, r4, r0
/* 80353BD4 00350B14  90 04 00 0C */	stw r0, 0xc(r4)
/* 80353BD8 00350B18  D0 9F 03 2C */	stfs f4, 0x32c(r31)
/* 80353BDC 00350B1C  D0 7F 03 30 */	stfs f3, 0x330(r31)
/* 80353BE0 00350B20  D0 5F 03 38 */	stfs f2, 0x338(r31)
/* 80353BE4 00350B24  D0 3F 03 3C */	stfs f1, 0x33c(r31)
/* 80353BE8 00350B28  D0 1F 03 40 */	stfs f0, 0x340(r31)
/* 80353BEC 00350B2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80353BF0 00350B30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80353BF4 00350B34  7C 08 03 A6 */	mtlr r0
/* 80353BF8 00350B38  38 21 00 10 */	addi r1, r1, 0x10
/* 80353BFC 00350B3C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game11OoPanModoki3ObjFv

.fn appearRumble__Q34Game11OoPanModoki3ObjFv, global
/* 80353C00 00350B40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80353C04 00350B44  7C 08 02 A6 */	mflr r0
/* 80353C08 00350B48  7C 64 1B 78 */	mr r4, r3
/* 80353C0C 00350B4C  38 C0 00 02 */	li r6, 2
/* 80353C10 00350B50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80353C14 00350B54  38 A4 01 8C */	addi r5, r4, 0x18c
/* 80353C18 00350B58  38 80 00 0B */	li r4, 0xb
/* 80353C1C 00350B5C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80353C20 00350B60  4B EF FB 61 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80353C24 00350B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80353C28 00350B68  7C 08 03 A6 */	mtlr r0
/* 80353C2C 00350B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80353C30 00350B70  4E 80 00 20 */	blr 
.endfn appearRumble__Q34Game11OoPanModoki3ObjFv

.fn hideRumble__Q34Game11OoPanModoki3ObjFv, global
/* 80353C34 00350B74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80353C38 00350B78  7C 08 02 A6 */	mflr r0
/* 80353C3C 00350B7C  7C 64 1B 78 */	mr r4, r3
/* 80353C40 00350B80  38 C0 00 02 */	li r6, 2
/* 80353C44 00350B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80353C48 00350B88  38 A4 01 8C */	addi r5, r4, 0x18c
/* 80353C4C 00350B8C  38 80 00 0A */	li r4, 0xa
/* 80353C50 00350B90  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80353C54 00350B94  4B EF FB 2D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80353C58 00350B98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80353C5C 00350B9C  7C 08 03 A6 */	mtlr r0
/* 80353C60 00350BA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80353C64 00350BA4  4E 80 00 20 */	blr 
.endfn hideRumble__Q34Game11OoPanModoki3ObjFv

.fn pressCallBack__Q34Game11OoPanModoki3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80353C68 00350BA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80353C6C 00350BAC  7C 08 02 A6 */	mflr r0
/* 80353C70 00350BB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80353C74 00350BB4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80353C78 00350BB8  FF E0 08 90 */	fmr f31, f1
/* 80353C7C 00350BBC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80353C80 00350BC0  7C BF 2B 78 */	mr r31, r5
/* 80353C84 00350BC4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80353C88 00350BC8  7C 9E 23 79 */	or. r30, r4, r4
/* 80353C8C 00350BCC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80353C90 00350BD0  7C 7D 1B 78 */	mr r29, r3
/* 80353C94 00350BD4  41 82 00 34 */	beq .L_80353CC8
/* 80353C98 00350BD8  7F C3 F3 78 */	mr r3, r30
/* 80353C9C 00350BDC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80353CA0 00350BE0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80353CA4 00350BE4  7D 89 03 A6 */	mtctr r12
/* 80353CA8 00350BE8  4E 80 04 21 */	bctrl 
/* 80353CAC 00350BEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80353CB0 00350BF0  41 82 00 18 */	beq .L_80353CC8
/* 80353CB4 00350BF4  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 80353CB8 00350BF8  2C 00 00 03 */	cmpwi r0, 3
/* 80353CBC 00350BFC  41 82 00 0C */	beq .L_80353CC8
/* 80353CC0 00350C00  38 60 00 00 */	li r3, 0
/* 80353CC4 00350C04  48 00 00 18 */	b .L_80353CDC
.L_80353CC8:
/* 80353CC8 00350C08  FC 20 F8 90 */	fmr f1, f31
/* 80353CCC 00350C0C  7F A3 EB 78 */	mr r3, r29
/* 80353CD0 00350C10  7F C4 F3 78 */	mr r4, r30
/* 80353CD4 00350C14  7F E5 FB 78 */	mr r5, r31
/* 80353CD8 00350C18  4B FF C6 4D */	bl pressCallBack__Q34Game13PanModokiBase3ObjFPQ24Game8CreaturefP8CollPart
.L_80353CDC:
/* 80353CDC 00350C1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80353CE0 00350C20  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80353CE4 00350C24  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80353CE8 00350C28  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80353CEC 00350C2C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80353CF0 00350C30  7C 08 03 A6 */	mtlr r0
/* 80353CF4 00350C34  38 21 00 20 */	addi r1, r1, 0x20
/* 80353CF8 00350C38  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game11OoPanModoki3ObjFPQ24Game8CreaturefP8CollPart

.fn canTarget__Q34Game11OoPanModoki3ObjFii, weak
/* 80353CFC 00350C3C  7C 86 FE 70 */	srawi r6, r4, 0x1f
/* 80353D00 00350C40  54 A3 0F FE */	srwi r3, r5, 0x1f
/* 80353D04 00350C44  7C 05 20 10 */	subfc r0, r5, r4
/* 80353D08 00350C48  7C 06 19 14 */	adde r0, r6, r3
/* 80353D0C 00350C4C  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80353D10 00350C50  4E 80 00 20 */	blr 
.endfn canTarget__Q34Game11OoPanModoki3ObjFii

.fn getDownSmokeScale__Q34Game11OoPanModoki3ObjFv, weak
/* 80353D14 00350C54  C0 22 01 54 */	lfs f1, lbl_8051E4B4@sda21(r2)
/* 80353D18 00350C58  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game11OoPanModoki3ObjFv

.fn getEnemyTypeID__Q34Game11OoPanModoki3ObjFv, weak
/* 80353D1C 00350C5C  38 60 00 28 */	li r3, 0x28
/* 80353D20 00350C60  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game11OoPanModoki3ObjFv

.fn __sinit_panModoki_cpp, local
/* 80353D24 00350C64  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80353D28 00350C68  38 00 FF FF */	li r0, -1
/* 80353D2C 00350C6C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80353D30 00350C70  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80353D34 00350C74  90 0D 98 B0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80353D38 00350C78  D4 03 CA B8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80353D3C 00350C7C  D0 0D 98 B4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80353D40 00350C80  D0 03 00 04 */	stfs f0, 4(r3)
/* 80353D44 00350C84  D0 03 00 08 */	stfs f0, 8(r3)
/* 80353D48 00350C88  4E 80 00 20 */	blr 
.endfn __sinit_panModoki_cpp
