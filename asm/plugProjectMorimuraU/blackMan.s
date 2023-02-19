.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_blackMan_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80495670, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80495670
.balign 4
.obj lbl_8049567C, local
	.asciz "blackMan"
.endobj lbl_8049567C
.balign 4
.obj lbl_80495688, local
	.asciz "blackMan.cpp"
.endobj lbl_80495688
.balign 4
.obj lbl_80495698, local
	.asciz "P2Assert"
.endobj lbl_80495698
.balign 4
.obj lbl_804956A4, local
	.asciz "handLend"
.endobj lbl_804956A4
.balign 4
.obj lbl_804956B0, local
	.asciz "handRend"
.endobj lbl_804956B0
.balign 4
.obj lbl_804956BC, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_804956BC
.balign 4
.obj lbl_804956D4, local
	.asciz "kage_mat"
.endobj lbl_804956D4
.balign 4
.obj lbl_804956E0, local
	.asciz "PSGame.h"
.endobj lbl_804956E0
.balign 4
.obj lbl_804956EC, local
	.asciz "PSScene.h"
.endobj lbl_804956EC
.balign 4
.obj lbl_804956F8, local
	.asciz "x20_blackman"
.endobj lbl_804956F8
.balign 4
.obj lbl_80495708, local
	.asciz "failed traceRoutePoint\n"
.endobj lbl_80495708
.balign 4
.obj lbl_80495720, local
	.asciz "no handle pathFinder\n"
.endobj lbl_80495720
.balign 4
.obj lbl_80495738, local
	.4byte lbl_8051F454
	.4byte lbl_8051F45C
	.4byte lbl_8051F464
	.4byte lbl_8051F46C
.endobj lbl_80495738
.balign 4
.obj lbl_80495748, local
	.4byte lbl_804956A4
	.4byte lbl_804956B0
	.4byte lbl_8051F444
	.4byte lbl_8051F44C
.endobj lbl_80495748
.balign 4
.obj lbl_80495758, local
	.4byte lbl_8051F500
	.4byte lbl_8051F508
	.4byte lbl_8051F510
	.4byte lbl_8051F518
.endobj lbl_80495758
.balign 4
.obj lbl_80495768, local
	.4byte lbl_8051F520
	.4byte lbl_8051F528
	.4byte lbl_8051F530
	.4byte lbl_8051F538
.endobj lbl_80495768
.balign 4
.obj lbl_80495778, local
	.asciz "shoulderL"
.endobj lbl_80495778
.balign 4
.obj lbl_80495784, local
	.asciz "shoulderR"
.endobj lbl_80495784
.balign 4
.obj lbl_80495790, local
	.4byte lbl_80495778
	.4byte lbl_80495784
	.4byte lbl_8051F540
	.4byte lbl_8051F548
.endobj lbl_80495790
.balign 4
.obj lbl_804957A0, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_804957A0
.balign 4
.obj lbl_804957C4, local
	.asciz "ArgPrmColor"
.endobj lbl_804957C4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q23efx10TKageBend1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TKageBend1
.obj __vt__Q23efx11ArgPrmColor, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx11ArgPrmColorFv
.endobj __vt__Q23efx11ArgPrmColor
.obj __vt__Q23efx10TKageFlick, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TKageFlickFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx10TKageFlickFv
.endobj __vt__Q23efx10TKageFlick
.obj __vt__Q23efx11TKageTyreup, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TKageTyreupFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx11TKageTyreupFv
.endobj __vt__Q23efx11TKageTyreup
.obj __vt__Q23efx10TKageDead1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TKageDead1Fv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx10TKageDead1Fv
.endobj __vt__Q23efx10TKageDead1
.obj __vt__Q23efx8TKageRun, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx8TKageRunFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx8TKageRunFv
.endobj __vt__Q23efx8TKageRun
.obj __vt__Q23efx9TKageMove, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TKageMoveFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx9TKageMoveFv
.endobj __vt__Q23efx9TKageMove
.obj __vt__Q34Game8BlackMan3Obj, global
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
	.4byte onInit__Q34Game8BlackMan3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game8BlackMan3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q34Game8BlackMan3ObjFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game8BlackMan3ObjFf
	.4byte doDirectDraw__Q34Game8BlackMan3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game8BlackMan3ObjFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game8BlackMan3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game8BlackMan3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game8BlackMan3ObjFv
	.4byte "birth__Q34Game8BlackMan3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game8BlackMan3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game8BlackMan3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game8BlackMan3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game8BlackMan3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game8BlackMan3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
	.4byte setParameters__Q34Game8BlackMan3ObjFv
	.4byte initMouthSlots__Q24Game9EnemyBaseFv
	.4byte initWalkSmokeEffect__Q34Game8BlackMan3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game8BlackMan3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q34Game8BlackMan3ObjFv
	.4byte createEfxHamon__Q34Game8BlackMan3ObjFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game8BlackMan3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q34Game8BlackMan3ObjFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game8BlackMan3ObjFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game8BlackMan3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game8BlackMan3ObjFv
	.4byte doFinishStoneState__Q34Game8BlackMan3ObjFv
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
	.4byte setFSM__Q34Game8BlackMan3ObjFPQ34Game8BlackMan3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@940@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@940@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@940@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@940@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@940@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@940@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game8BlackMan3Obj

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj curB__Q24Game8BlackMan, global
	.skip 0x4
.endobj curB__Q24Game8BlackMan

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F438, local
	.float 0.0
.endobj lbl_8051F438
.balign 4
.obj lbl_8051F43C, local
	.asciz "chest"
.endobj lbl_8051F43C
.balign 4
.obj lbl_8051F444, local
	.asciz "footL"
.endobj lbl_8051F444
.balign 4
.obj lbl_8051F44C, local
	.asciz "footR"
.endobj lbl_8051F44C
.balign 4
.obj lbl_8051F454, local
	.asciz "tyreFL"
.endobj lbl_8051F454
.balign 4
.obj lbl_8051F45C, local
	.asciz "TyreFR"
.endobj lbl_8051F45C
.balign 4
.obj lbl_8051F464, local
	.asciz "TyreBL"
.endobj lbl_8051F464
.balign 4
.obj lbl_8051F46C, local
	.asciz "tyreBR"
.endobj lbl_8051F46C
.balign 4
.obj lbl_8051F474, local
	.asciz "waist"
.endobj lbl_8051F474
.balign 4
.obj lbl_8051F47C, local
	.float 10.0
.endobj lbl_8051F47C
.obj lbl_8051F480, local
	.float 1.0
.endobj lbl_8051F480
.obj lbl_8051F484, local
	.float 255.0
.endobj lbl_8051F484
.obj lbl_8051F488, local
	.float 10000.0
.endobj lbl_8051F488
.obj lbl_8051F48C, local
	.float -1.0
.endobj lbl_8051F48C
.balign 8
.obj lbl_8051F490, local
	.8byte 0x4330000000000000
.endobj lbl_8051F490
.obj lbl_8051F498, local
	.float 0.01
.endobj lbl_8051F498
.obj lbl_8051F49C, local
	.float -1000.0
.endobj lbl_8051F49C
.obj lbl_8051F4A0, local
	.float 0.1
.endobj lbl_8051F4A0
.obj lbl_8051F4A4, local
	.float 30.0
.endobj lbl_8051F4A4
.obj lbl_8051F4A8, local
	.float 2.0
.endobj lbl_8051F4A8
.obj lbl_8051F4AC, local
	.float 50.0
.endobj lbl_8051F4AC
.obj lbl_8051F4B0, local
	.float 5.0
.endobj lbl_8051F4B0
.obj lbl_8051F4B4, local
	.float 640000.0
.endobj lbl_8051F4B4
.obj lbl_8051F4B8, local
	.float 160000.0
.endobj lbl_8051F4B8
.obj lbl_8051F4BC, local
	.float 0.2
.endobj lbl_8051F4BC
.obj lbl_8051F4C0, local
	.float 100.0
.endobj lbl_8051F4C0
.obj lbl_8051F4C4, local
	.float 138.23009
.endobj lbl_8051F4C4
.obj lbl_8051F4C8, local
	.float 0.25
.endobj lbl_8051F4C8
.balign 8
.obj lbl_8051F4D0, local
	.double 0.0
.endobj lbl_8051F4D0
.obj lbl_8051F4D8, local
	.float 0.05
.endobj lbl_8051F4D8
.obj lbl_8051F4DC, local
	.float 0.5
.endobj lbl_8051F4DC
.obj lbl_8051F4E0, local
	.float 1.4
.endobj lbl_8051F4E0
.balign 8
.obj lbl_8051F4E8, local
	.8byte 0x4330000080000000
.endobj lbl_8051F4E8
.obj lbl_8051F4F0, local
	.float -325.9493
.endobj lbl_8051F4F0
.obj lbl_8051F4F4, local
	.float 325.9493
.endobj lbl_8051F4F4
.obj lbl_8051F4F8, local
	.float 32768.0
.endobj lbl_8051F4F8
.obj lbl_8051F4FC, local
	.float 1000000.0
.endobj lbl_8051F4FC
.balign 4
.obj lbl_8051F500, local
	.asciz "handL"
.endobj lbl_8051F500
.balign 4
.obj lbl_8051F508, local
	.asciz "handR"
.endobj lbl_8051F508
.balign 4
.obj lbl_8051F510, local
	.asciz "legBL"
.endobj lbl_8051F510
.balign 4
.obj lbl_8051F518, local
	.asciz "legBR"
.endobj lbl_8051F518
.balign 4
.obj lbl_8051F520, local
	.asciz "armBL"
.endobj lbl_8051F520
.balign 4
.obj lbl_8051F528, local
	.asciz "armBR"
.endobj lbl_8051F528
.balign 4
.obj lbl_8051F530, local
	.asciz "legTL"
.endobj lbl_8051F530
.balign 4
.obj lbl_8051F538, local
	.asciz "legTR"
.endobj lbl_8051F538
.balign 4
.obj lbl_8051F540, local
	.asciz "clouchL"
.endobj lbl_8051F540
.balign 4
.obj lbl_8051F548, local
	.asciz "clouchR"
.endobj lbl_8051F548
.balign 4
.obj lbl_8051F550, local
	.float 15.0
.endobj lbl_8051F550
.balign 4
.obj lbl_8051F554, local
	.4byte lbl_8051F454
	.4byte lbl_8051F45C
.endobj lbl_8051F554
.obj lbl_8051F55C, local
	.float 0.8
.endobj lbl_8051F55C
.balign 4
.obj lbl_8051F560, local
	.asciz "head"
.endobj lbl_8051F560

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn lHandCallBack__Q24Game8BlackManFP8J3DJointi, local
/* 803A5DB0 003A2CF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5DB4 003A2CF4  7C 08 02 A6 */	mflr r0
/* 803A5DB8 003A2CF8  2C 04 00 00 */	cmpwi r4, 0
/* 803A5DBC 003A2CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5DC0 003A2D00  40 82 00 18 */	bne .L_803A5DD8
/* 803A5DC4 003A2D04  80 6D 99 E0 */	lwz r3, curB__Q24Game8BlackMan@sda21(r13)
/* 803A5DC8 003A2D08  28 03 00 00 */	cmplwi r3, 0
/* 803A5DCC 003A2D0C  41 82 00 0C */	beq .L_803A5DD8
/* 803A5DD0 003A2D10  38 80 00 00 */	li r4, 0
/* 803A5DD4 003A2D14  48 00 40 AD */	bl jointMtxCalc__Q34Game8BlackMan3ObjFi
.L_803A5DD8:
/* 803A5DD8 003A2D18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5DDC 003A2D1C  38 60 00 01 */	li r3, 1
/* 803A5DE0 003A2D20  7C 08 03 A6 */	mtlr r0
/* 803A5DE4 003A2D24  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5DE8 003A2D28  4E 80 00 20 */	blr 
.endfn lHandCallBack__Q24Game8BlackManFP8J3DJointi

.fn rHandCallBack__Q24Game8BlackManFP8J3DJointi, local
/* 803A5DEC 003A2D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5DF0 003A2D30  7C 08 02 A6 */	mflr r0
/* 803A5DF4 003A2D34  2C 04 00 00 */	cmpwi r4, 0
/* 803A5DF8 003A2D38  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5DFC 003A2D3C  40 82 00 18 */	bne .L_803A5E14
/* 803A5E00 003A2D40  80 6D 99 E0 */	lwz r3, curB__Q24Game8BlackMan@sda21(r13)
/* 803A5E04 003A2D44  28 03 00 00 */	cmplwi r3, 0
/* 803A5E08 003A2D48  41 82 00 0C */	beq .L_803A5E14
/* 803A5E0C 003A2D4C  38 80 00 01 */	li r4, 1
/* 803A5E10 003A2D50  48 00 40 71 */	bl jointMtxCalc__Q34Game8BlackMan3ObjFi
.L_803A5E14:
/* 803A5E14 003A2D54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5E18 003A2D58  38 60 00 01 */	li r3, 1
/* 803A5E1C 003A2D5C  7C 08 03 A6 */	mtlr r0
/* 803A5E20 003A2D60  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5E24 003A2D64  4E 80 00 20 */	blr 
.endfn rHandCallBack__Q24Game8BlackManFP8J3DJointi

.fn lFootCallBack__Q24Game8BlackManFP8J3DJointi, local
/* 803A5E28 003A2D68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5E2C 003A2D6C  7C 08 02 A6 */	mflr r0
/* 803A5E30 003A2D70  2C 04 00 00 */	cmpwi r4, 0
/* 803A5E34 003A2D74  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5E38 003A2D78  40 82 00 18 */	bne .L_803A5E50
/* 803A5E3C 003A2D7C  80 6D 99 E0 */	lwz r3, curB__Q24Game8BlackMan@sda21(r13)
/* 803A5E40 003A2D80  28 03 00 00 */	cmplwi r3, 0
/* 803A5E44 003A2D84  41 82 00 0C */	beq .L_803A5E50
/* 803A5E48 003A2D88  38 80 00 02 */	li r4, 2
/* 803A5E4C 003A2D8C  48 00 40 35 */	bl jointMtxCalc__Q34Game8BlackMan3ObjFi
.L_803A5E50:
/* 803A5E50 003A2D90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5E54 003A2D94  38 60 00 01 */	li r3, 1
/* 803A5E58 003A2D98  7C 08 03 A6 */	mtlr r0
/* 803A5E5C 003A2D9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5E60 003A2DA0  4E 80 00 20 */	blr 
.endfn lFootCallBack__Q24Game8BlackManFP8J3DJointi

.fn rFootCallBack__Q24Game8BlackManFP8J3DJointi, local
/* 803A5E64 003A2DA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5E68 003A2DA8  7C 08 02 A6 */	mflr r0
/* 803A5E6C 003A2DAC  2C 04 00 00 */	cmpwi r4, 0
/* 803A5E70 003A2DB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5E74 003A2DB4  40 82 00 18 */	bne .L_803A5E8C
/* 803A5E78 003A2DB8  80 6D 99 E0 */	lwz r3, curB__Q24Game8BlackMan@sda21(r13)
/* 803A5E7C 003A2DBC  28 03 00 00 */	cmplwi r3, 0
/* 803A5E80 003A2DC0  41 82 00 0C */	beq .L_803A5E8C
/* 803A5E84 003A2DC4  38 80 00 03 */	li r4, 3
/* 803A5E88 003A2DC8  48 00 3F F9 */	bl jointMtxCalc__Q34Game8BlackMan3ObjFi
.L_803A5E8C:
/* 803A5E8C 003A2DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5E90 003A2DD0  38 60 00 01 */	li r3, 1
/* 803A5E94 003A2DD4  7C 08 03 A6 */	mtlr r0
/* 803A5E98 003A2DD8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5E9C 003A2DDC  4E 80 00 20 */	blr 
.endfn rFootCallBack__Q24Game8BlackManFP8J3DJointi

.fn bodyCallBack__Q24Game8BlackManFP8J3DJointi, local
/* 803A5EA0 003A2DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5EA4 003A2DE4  7C 08 02 A6 */	mflr r0
/* 803A5EA8 003A2DE8  2C 04 00 00 */	cmpwi r4, 0
/* 803A5EAC 003A2DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5EB0 003A2DF0  40 82 00 14 */	bne .L_803A5EC4
/* 803A5EB4 003A2DF4  80 6D 99 E0 */	lwz r3, curB__Q24Game8BlackMan@sda21(r13)
/* 803A5EB8 003A2DF8  28 03 00 00 */	cmplwi r3, 0
/* 803A5EBC 003A2DFC  41 82 00 08 */	beq .L_803A5EC4
/* 803A5EC0 003A2E00  48 00 45 51 */	bl bodyMtxCalc__Q34Game8BlackMan3ObjFv
.L_803A5EC4:
/* 803A5EC4 003A2E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5EC8 003A2E08  38 60 00 01 */	li r3, 1
/* 803A5ECC 003A2E0C  7C 08 03 A6 */	mtlr r0
/* 803A5ED0 003A2E10  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5ED4 003A2E14  4E 80 00 20 */	blr 
.endfn bodyCallBack__Q24Game8BlackManFP8J3DJointi

.fn setParameters__Q34Game8BlackMan3ObjFv, global
/* 803A5ED8 003A2E18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A5EDC 003A2E1C  7C 08 02 A6 */	mflr r0
/* 803A5EE0 003A2E20  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A5EE4 003A2E24  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 803A5EE8 003A2E28  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 803A5EEC 003A2E2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5EF0 003A2E30  7C 7F 1B 78 */	mr r31, r3
/* 803A5EF4 003A2E34  4B D5 CC E5 */	bl setParameters__Q24Game9EnemyBaseFv
/* 803A5EF8 003A2E38  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803A5EFC 003A2E3C  54 00 03 5B */	rlwinm. r0, r0, 0, 0xd, 0xd
/* 803A5F00 003A2E40  41 82 00 54 */	beq .L_803A5F54
/* 803A5F04 003A2E44  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A5F08 003A2E48  38 9F 01 8C */	addi r4, r31, 0x18c
/* 803A5F0C 003A2E4C  81 83 00 04 */	lwz r12, 4(r3)
/* 803A5F10 003A2E50  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803A5F14 003A2E54  7D 89 03 A6 */	mtctr r12
/* 803A5F18 003A2E58  4E 80 04 21 */	bctrl 
/* 803A5F1C 003A2E5C  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 803A5F20 003A2E60  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A5F24 003A2E64  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 803A5F28 003A2E68  C0 03 0A 50 */	lfs f0, 0xa50(r3)
/* 803A5F2C 003A2E6C  EC 01 00 2A */	fadds f0, f1, f0
/* 803A5F30 003A2E70  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 803A5F34 003A2E74  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A5F38 003A2E78  28 03 00 00 */	cmplwi r3, 0
/* 803A5F3C 003A2E7C  41 82 00 18 */	beq .L_803A5F54
/* 803A5F40 003A2E80  81 83 00 00 */	lwz r12, 0(r3)
/* 803A5F44 003A2E84  38 9F 01 8C */	addi r4, r31, 0x18c
/* 803A5F48 003A2E88  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 803A5F4C 003A2E8C  7D 89 03 A6 */	mtctr r12
/* 803A5F50 003A2E90  4E 80 04 21 */	bctrl 
.L_803A5F54:
/* 803A5F54 003A2E94  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A5F58 003A2E98  C3 E3 0A 24 */	lfs f31, 0xa24(r3)
/* 803A5F5C 003A2E9C  D3 FF 01 F8 */	stfs f31, 0x1f8(r31)
/* 803A5F60 003A2EA0  FC 20 F8 90 */	fmr f1, f31
/* 803A5F64 003A2EA4  D3 FF 01 68 */	stfs f31, 0x168(r31)
/* 803A5F68 003A2EA8  D3 FF 01 6C */	stfs f31, 0x16c(r31)
/* 803A5F6C 003A2EAC  D3 FF 01 70 */	stfs f31, 0x170(r31)
/* 803A5F70 003A2EB0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A5F74 003A2EB4  80 63 00 00 */	lwz r3, 0(r3)
/* 803A5F78 003A2EB8  4B D9 1E 95 */	bl setScale__8CollPartFf
/* 803A5F7C 003A2EBC  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A5F80 003A2EC0  28 03 00 00 */	cmplwi r3, 0
/* 803A5F84 003A2EC4  41 82 00 28 */	beq .L_803A5FAC
/* 803A5F88 003A2EC8  D3 E3 01 F8 */	stfs f31, 0x1f8(r3)
/* 803A5F8C 003A2ECC  FC 20 F8 90 */	fmr f1, f31
/* 803A5F90 003A2ED0  D3 E3 01 68 */	stfs f31, 0x168(r3)
/* 803A5F94 003A2ED4  D3 E3 01 6C */	stfs f31, 0x16c(r3)
/* 803A5F98 003A2ED8  D3 E3 01 70 */	stfs f31, 0x170(r3)
/* 803A5F9C 003A2EDC  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A5FA0 003A2EE0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 803A5FA4 003A2EE4  80 63 00 00 */	lwz r3, 0(r3)
/* 803A5FA8 003A2EE8  4B D9 1E 65 */	bl setScale__8CollPartFf
.L_803A5FAC:
/* 803A5FAC 003A2EEC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 803A5FB0 003A2EF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A5FB4 003A2EF4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 803A5FB8 003A2EF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5FBC 003A2EFC  7C 08 03 A6 */	mtlr r0
/* 803A5FC0 003A2F00  38 21 00 20 */	addi r1, r1, 0x20
/* 803A5FC4 003A2F04  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game8BlackMan3ObjFv

.fn "birth__Q34Game8BlackMan3ObjFR10Vector3<f>f", global
/* 803A5FC8 003A2F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5FCC 003A2F0C  7C 08 02 A6 */	mflr r0
/* 803A5FD0 003A2F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5FD4 003A2F14  4B D5 CA 2D */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 803A5FD8 003A2F18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5FDC 003A2F1C  7C 08 03 A6 */	mtlr r0
/* 803A5FE0 003A2F20  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5FE4 003A2F24  4E 80 00 20 */	blr 
.endfn "birth__Q34Game8BlackMan3ObjFR10Vector3<f>f"

.fn onInit__Q34Game8BlackMan3ObjFPQ24Game15CreatureInitArg, global
/* 803A5FE8 003A2F28  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803A5FEC 003A2F2C  7C 08 02 A6 */	mflr r0
/* 803A5FF0 003A2F30  3C A0 80 49 */	lis r5, lbl_80495670@ha
/* 803A5FF4 003A2F34  90 01 00 74 */	stw r0, 0x74(r1)
/* 803A5FF8 003A2F38  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803A5FFC 003A2F3C  3B E5 56 70 */	addi r31, r5, lbl_80495670@l
/* 803A6000 003A2F40  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803A6004 003A2F44  93 A1 00 64 */	stw r29, 0x64(r1)
/* 803A6008 003A2F48  7C 7D 1B 78 */	mr r29, r3
/* 803A600C 003A2F4C  93 81 00 60 */	stw r28, 0x60(r1)
/* 803A6010 003A2F50  4B D5 BA 49 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 803A6014 003A2F54  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803A6018 003A2F58  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 803A601C 003A2F5C  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 803A6020 003A2F60  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803A6024 003A2F64  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 803A6028 003A2F68  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 803A602C 003A2F6C  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803A6030 003A2F70  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 803A6034 003A2F74  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 803A6038 003A2F78  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 803A603C 003A2F7C  88 03 0A 10 */	lbz r0, 0xa10(r3)
/* 803A6040 003A2F80  90 1D 02 E0 */	stw r0, 0x2e0(r29)
/* 803A6044 003A2F84  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A6048 003A2F88  80 63 00 58 */	lwz r3, 0x58(r3)
/* 803A604C 003A2F8C  28 03 00 00 */	cmplwi r3, 0
/* 803A6050 003A2F90  41 82 00 64 */	beq .L_803A60B4
/* 803A6054 003A2F94  81 83 00 00 */	lwz r12, 0(r3)
/* 803A6058 003A2F98  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 803A605C 003A2F9C  7D 89 03 A6 */	mtctr r12
/* 803A6060 003A2FA0  4E 80 04 21 */	bctrl 
/* 803A6064 003A2FA4  3C 03 86 A1 */	subis r0, r3, 0x795f
/* 803A6068 003A2FA8  28 00 30 31 */	cmplwi r0, 0x3031
/* 803A606C 003A2FAC  40 82 00 48 */	bne .L_803A60B4
/* 803A6070 003A2FB0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A6074 003A2FB4  28 03 00 00 */	cmplwi r3, 0
/* 803A6078 003A2FB8  41 82 00 3C */	beq .L_803A60B4
/* 803A607C 003A2FBC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803A6080 003A2FC0  2C 00 00 04 */	cmpwi r0, 4
/* 803A6084 003A2FC4  41 82 00 30 */	beq .L_803A60B4
/* 803A6088 003A2FC8  80 7D 03 60 */	lwz r3, 0x360(r29)
/* 803A608C 003A2FCC  7F A4 EB 78 */	mr r4, r29
/* 803A6090 003A2FD0  38 A0 00 00 */	li r5, 0
/* 803A6094 003A2FD4  38 C0 00 00 */	li r6, 0
/* 803A6098 003A2FD8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A609C 003A2FDC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803A60A0 003A2FE0  7D 89 03 A6 */	mtctr r12
/* 803A60A4 003A2FE4  4E 80 04 21 */	bctrl 
/* 803A60A8 003A2FE8  38 00 00 02 */	li r0, 2
/* 803A60AC 003A2FEC  90 1D 02 E0 */	stw r0, 0x2e0(r29)
/* 803A60B0 003A2FF0  48 00 00 90 */	b .L_803A6140
.L_803A60B4:
/* 803A60B4 003A2FF4  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 803A60B8 003A2FF8  38 80 00 62 */	li r4, 0x62
/* 803A60BC 003A2FFC  4B D6 7B E9 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 803A60C0 003A3000  7C 7C 1B 79 */	or. r28, r3, r3
/* 803A60C4 003A3004  41 82 00 5C */	beq .L_803A6120
/* 803A60C8 003A3008  38 61 00 20 */	addi r3, r1, 0x20
/* 803A60CC 003A300C  4B D8 8B 59 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 803A60D0 003A3010  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 803A60D4 003A3014  7F 83 E3 78 */	mr r3, r28
/* 803A60D8 003A3018  38 81 00 20 */	addi r4, r1, 0x20
/* 803A60DC 003A301C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803A60E0 003A3020  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 803A60E4 003A3024  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803A60E8 003A3028  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 803A60EC 003A302C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803A60F0 003A3030  C0 1D 01 FC */	lfs f0, 0x1fc(r29)
/* 803A60F4 003A3034  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803A60F8 003A3038  81 9C 00 00 */	lwz r12, 0(r28)
/* 803A60FC 003A303C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 803A6100 003A3040  7D 89 03 A6 */	mtctr r12
/* 803A6104 003A3044  4E 80 04 21 */	bctrl 
/* 803A6108 003A3048  90 7D 03 64 */	stw r3, 0x364(r29)
/* 803A610C 003A304C  38 80 00 00 */	li r4, 0
/* 803A6110 003A3050  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A6114 003A3054  4B D9 4E B5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 803A6118 003A3058  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A611C 003A305C  93 A3 02 BC */	stw r29, 0x2bc(r3)
.L_803A6120:
/* 803A6120 003A3060  80 7D 03 60 */	lwz r3, 0x360(r29)
/* 803A6124 003A3064  7F A4 EB 78 */	mr r4, r29
/* 803A6128 003A3068  38 A0 00 05 */	li r5, 5
/* 803A612C 003A306C  38 C0 00 00 */	li r6, 0
/* 803A6130 003A3070  81 83 00 00 */	lwz r12, 0(r3)
/* 803A6134 003A3074  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803A6138 003A3078  7D 89 03 A6 */	mtctr r12
/* 803A613C 003A307C  4E 80 04 21 */	bctrl 
.L_803A6140:
/* 803A6140 003A3080  80 1D 03 58 */	lwz r0, 0x358(r29)
/* 803A6144 003A3084  28 00 00 00 */	cmplwi r0, 0
/* 803A6148 003A3088  40 82 00 18 */	bne .L_803A6160
/* 803A614C 003A308C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A6150 003A3090  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A6154 003A3094  38 80 00 B2 */	li r4, 0xb2
/* 803A6158 003A3098  4C C6 31 82 */	crclr 6
/* 803A615C 003A309C  4B C8 44 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A6160:
/* 803A6160 003A30A0  80 7D 03 58 */	lwz r3, 0x358(r29)
/* 803A6164 003A30A4  80 9D 01 80 */	lwz r4, 0x180(r29)
/* 803A6168 003A30A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A616C 003A30AC  80 84 00 44 */	lwz r4, 0x44(r4)
/* 803A6170 003A30B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A6174 003A30B4  7D 89 03 A6 */	mtctr r12
/* 803A6178 003A30B8  4E 80 04 21 */	bctrl 
/* 803A617C 003A30BC  38 60 FF FF */	li r3, -1
/* 803A6180 003A30C0  38 00 00 00 */	li r0, 0
/* 803A6184 003A30C4  90 7D 02 DC */	stw r3, 0x2dc(r29)
/* 803A6188 003A30C8  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A618C 003A30CC  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 803A6190 003A30D0  D0 3D 02 F8 */	stfs f1, 0x2f8(r29)
/* 803A6194 003A30D4  C0 3D 01 90 */	lfs f1, 0x190(r29)
/* 803A6198 003A30D8  D0 3D 02 FC */	stfs f1, 0x2fc(r29)
/* 803A619C 003A30DC  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 803A61A0 003A30E0  D0 3D 03 00 */	stfs f1, 0x300(r29)
/* 803A61A4 003A30E4  C0 3D 02 F8 */	lfs f1, 0x2f8(r29)
/* 803A61A8 003A30E8  D0 3D 01 98 */	stfs f1, 0x198(r29)
/* 803A61AC 003A30EC  C0 3D 02 FC */	lfs f1, 0x2fc(r29)
/* 803A61B0 003A30F0  D0 3D 01 9C */	stfs f1, 0x19c(r29)
/* 803A61B4 003A30F4  C0 3D 03 00 */	lfs f1, 0x300(r29)
/* 803A61B8 003A30F8  D0 3D 01 A0 */	stfs f1, 0x1a0(r29)
/* 803A61BC 003A30FC  C0 3D 01 98 */	lfs f1, 0x198(r29)
/* 803A61C0 003A3100  D0 3D 02 D0 */	stfs f1, 0x2d0(r29)
/* 803A61C4 003A3104  C0 3D 01 9C */	lfs f1, 0x19c(r29)
/* 803A61C8 003A3108  D0 3D 02 D4 */	stfs f1, 0x2d4(r29)
/* 803A61CC 003A310C  C0 3D 01 A0 */	lfs f1, 0x1a0(r29)
/* 803A61D0 003A3110  D0 3D 02 D8 */	stfs f1, 0x2d8(r29)
/* 803A61D4 003A3114  90 1D 03 48 */	stw r0, 0x348(r29)
/* 803A61D8 003A3118  98 1D 03 4C */	stb r0, 0x34c(r29)
/* 803A61DC 003A311C  90 1D 03 5C */	stw r0, 0x35c(r29)
/* 803A61E0 003A3120  90 1D 02 E4 */	stw r0, 0x2e4(r29)
/* 803A61E4 003A3124  90 1D 02 E8 */	stw r0, 0x2e8(r29)
/* 803A61E8 003A3128  90 1D 03 34 */	stw r0, 0x334(r29)
/* 803A61EC 003A312C  90 1D 02 CC */	stw r0, 0x2cc(r29)
/* 803A61F0 003A3130  D0 1D 03 74 */	stfs f0, 0x374(r29)
/* 803A61F4 003A3134  90 0D 99 E0 */	stw r0, curB__Q24Game8BlackMan@sda21(r13)
/* 803A61F8 003A3138  80 1D 01 74 */	lwz r0, 0x174(r29)
/* 803A61FC 003A313C  28 00 00 00 */	cmplwi r0, 0
/* 803A6200 003A3140  40 82 00 18 */	bne .L_803A6218
/* 803A6204 003A3144  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A6208 003A3148  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A620C 003A314C  38 80 00 D1 */	li r4, 0xd1
/* 803A6210 003A3150  4C C6 31 82 */	crclr 6
/* 803A6214 003A3154  4B C8 44 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A6218:
/* 803A6218 003A3158  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A621C 003A315C  80 63 00 08 */	lwz r3, 8(r3)
/* 803A6220 003A3160  83 C3 00 04 */	lwz r30, 4(r3)
/* 803A6224 003A3164  28 1E 00 00 */	cmplwi r30, 0
/* 803A6228 003A3168  40 82 00 18 */	bne .L_803A6240
/* 803A622C 003A316C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A6230 003A3170  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A6234 003A3174  38 80 00 D4 */	li r4, 0xd4
/* 803A6238 003A3178  4C C6 31 82 */	crclr 6
/* 803A623C 003A317C  4B C8 44 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A6240:
/* 803A6240 003A3180  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6244 003A3184  38 82 10 DC */	addi r4, r2, lbl_8051F43C@sda21
/* 803A6248 003A3188  48 09 8D 6D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A624C 003A318C  B0 7D 03 6A */	sth r3, 0x36a(r29)
/* 803A6250 003A3190  38 9F 00 34 */	addi r4, r31, 0x34
/* 803A6254 003A3194  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6258 003A3198  48 09 8D 5D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A625C 003A319C  B0 7D 03 6C */	sth r3, 0x36c(r29)
/* 803A6260 003A31A0  38 9F 00 40 */	addi r4, r31, 0x40
/* 803A6264 003A31A4  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6268 003A31A8  48 09 8D 4D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A626C 003A31AC  B0 7D 03 6E */	sth r3, 0x36e(r29)
/* 803A6270 003A31B0  38 82 10 E4 */	addi r4, r2, lbl_8051F444@sda21
/* 803A6274 003A31B4  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6278 003A31B8  48 09 8D 3D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A627C 003A31BC  B0 7D 03 70 */	sth r3, 0x370(r29)
/* 803A6280 003A31C0  38 82 10 EC */	addi r4, r2, lbl_8051F44C@sda21
/* 803A6284 003A31C4  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6288 003A31C8  48 09 8D 2D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A628C 003A31CC  B0 7D 03 72 */	sth r3, 0x372(r29)
/* 803A6290 003A31D0  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A6294 003A31D4  28 03 00 00 */	cmplwi r3, 0
/* 803A6298 003A31D8  41 82 01 78 */	beq .L_803A6410
/* 803A629C 003A31DC  83 83 01 74 */	lwz r28, 0x174(r3)
/* 803A62A0 003A31E0  38 82 10 F4 */	addi r4, r2, lbl_8051F454@sda21
/* 803A62A4 003A31E4  7F 83 E3 78 */	mr r3, r28
/* 803A62A8 003A31E8  48 09 8D 0D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A62AC 003A31EC  81 9C 00 00 */	lwz r12, 0(r28)
/* 803A62B0 003A31F0  54 64 04 3E */	clrlwi r4, r3, 0x10
/* 803A62B4 003A31F4  7F 83 E3 78 */	mr r3, r28
/* 803A62B8 003A31F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A62BC 003A31FC  7D 89 03 A6 */	mtctr r12
/* 803A62C0 003A3200  4E 80 04 21 */	bctrl 
/* 803A62C4 003A3204  90 7D 02 BC */	stw r3, 0x2bc(r29)
/* 803A62C8 003A3208  3C 60 80 3A */	lis r3, lHandCallBack__Q24Game8BlackManFP8J3DJointi@ha
/* 803A62CC 003A320C  38 A3 5D B0 */	addi r5, r3, lHandCallBack__Q24Game8BlackManFP8J3DJointi@l
/* 803A62D0 003A3210  38 82 10 FC */	addi r4, r2, lbl_8051F45C@sda21
/* 803A62D4 003A3214  A0 1D 03 6C */	lhz r0, 0x36c(r29)
/* 803A62D8 003A3218  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803A62DC 003A321C  54 00 10 3A */	slwi r0, r0, 2
/* 803A62E0 003A3220  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A62E4 003A3224  90 A3 00 04 */	stw r5, 4(r3)
/* 803A62E8 003A3228  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A62EC 003A322C  83 83 01 74 */	lwz r28, 0x174(r3)
/* 803A62F0 003A3230  7F 83 E3 78 */	mr r3, r28
/* 803A62F4 003A3234  48 09 8C C1 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A62F8 003A3238  81 9C 00 00 */	lwz r12, 0(r28)
/* 803A62FC 003A323C  54 64 04 3E */	clrlwi r4, r3, 0x10
/* 803A6300 003A3240  7F 83 E3 78 */	mr r3, r28
/* 803A6304 003A3244  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A6308 003A3248  7D 89 03 A6 */	mtctr r12
/* 803A630C 003A324C  4E 80 04 21 */	bctrl 
/* 803A6310 003A3250  90 7D 02 C0 */	stw r3, 0x2c0(r29)
/* 803A6314 003A3254  3C 60 80 3A */	lis r3, rHandCallBack__Q24Game8BlackManFP8J3DJointi@ha
/* 803A6318 003A3258  38 A3 5D EC */	addi r5, r3, rHandCallBack__Q24Game8BlackManFP8J3DJointi@l
/* 803A631C 003A325C  38 82 11 04 */	addi r4, r2, lbl_8051F464@sda21
/* 803A6320 003A3260  A0 1D 03 6E */	lhz r0, 0x36e(r29)
/* 803A6324 003A3264  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803A6328 003A3268  54 00 10 3A */	slwi r0, r0, 2
/* 803A632C 003A326C  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A6330 003A3270  90 A3 00 04 */	stw r5, 4(r3)
/* 803A6334 003A3274  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A6338 003A3278  83 83 01 74 */	lwz r28, 0x174(r3)
/* 803A633C 003A327C  7F 83 E3 78 */	mr r3, r28
/* 803A6340 003A3280  48 09 8C 75 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A6344 003A3284  81 9C 00 00 */	lwz r12, 0(r28)
/* 803A6348 003A3288  54 64 04 3E */	clrlwi r4, r3, 0x10
/* 803A634C 003A328C  7F 83 E3 78 */	mr r3, r28
/* 803A6350 003A3290  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A6354 003A3294  7D 89 03 A6 */	mtctr r12
/* 803A6358 003A3298  4E 80 04 21 */	bctrl 
/* 803A635C 003A329C  90 7D 02 C4 */	stw r3, 0x2c4(r29)
/* 803A6360 003A32A0  3C 60 80 3A */	lis r3, lFootCallBack__Q24Game8BlackManFP8J3DJointi@ha
/* 803A6364 003A32A4  38 A3 5E 28 */	addi r5, r3, lFootCallBack__Q24Game8BlackManFP8J3DJointi@l
/* 803A6368 003A32A8  38 82 11 0C */	addi r4, r2, lbl_8051F46C@sda21
/* 803A636C 003A32AC  A0 1D 03 70 */	lhz r0, 0x370(r29)
/* 803A6370 003A32B0  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803A6374 003A32B4  54 00 10 3A */	slwi r0, r0, 2
/* 803A6378 003A32B8  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A637C 003A32BC  90 A3 00 04 */	stw r5, 4(r3)
/* 803A6380 003A32C0  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A6384 003A32C4  83 83 01 74 */	lwz r28, 0x174(r3)
/* 803A6388 003A32C8  7F 83 E3 78 */	mr r3, r28
/* 803A638C 003A32CC  48 09 8C 29 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A6390 003A32D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 803A6394 003A32D4  54 64 04 3E */	clrlwi r4, r3, 0x10
/* 803A6398 003A32D8  7F 83 E3 78 */	mr r3, r28
/* 803A639C 003A32DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A63A0 003A32E0  7D 89 03 A6 */	mtctr r12
/* 803A63A4 003A32E4  4E 80 04 21 */	bctrl 
/* 803A63A8 003A32E8  90 7D 02 C8 */	stw r3, 0x2c8(r29)
/* 803A63AC 003A32EC  3C 60 80 3A */	lis r3, rFootCallBack__Q24Game8BlackManFP8J3DJointi@ha
/* 803A63B0 003A32F0  38 83 5E 64 */	addi r4, r3, rFootCallBack__Q24Game8BlackManFP8J3DJointi@l
/* 803A63B4 003A32F4  A0 1D 03 72 */	lhz r0, 0x372(r29)
/* 803A63B8 003A32F8  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803A63BC 003A32FC  54 00 10 3A */	slwi r0, r0, 2
/* 803A63C0 003A3300  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A63C4 003A3304  90 83 00 04 */	stw r4, 4(r3)
/* 803A63C8 003A3308  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A63CC 003A330C  81 83 00 00 */	lwz r12, 0(r3)
/* 803A63D0 003A3310  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803A63D4 003A3314  7D 89 03 A6 */	mtctr r12
/* 803A63D8 003A3318  4E 80 04 21 */	bctrl 
/* 803A63DC 003A331C  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A63E0 003A3320  80 63 01 74 */	lwz r3, 0x174(r3)
/* 803A63E4 003A3324  81 83 00 00 */	lwz r12, 0(r3)
/* 803A63E8 003A3328  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803A63EC 003A332C  7D 89 03 A6 */	mtctr r12
/* 803A63F0 003A3330  4E 80 04 21 */	bctrl 
/* 803A63F4 003A3334  A0 1D 03 6A */	lhz r0, 0x36a(r29)
/* 803A63F8 003A3338  3C 80 80 3A */	lis r4, bodyCallBack__Q24Game8BlackManFP8J3DJointi@ha
/* 803A63FC 003A333C  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803A6400 003A3340  38 84 5E A0 */	addi r4, r4, bodyCallBack__Q24Game8BlackManFP8J3DJointi@l
/* 803A6404 003A3344  54 00 10 3A */	slwi r0, r0, 2
/* 803A6408 003A3348  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A640C 003A334C  90 83 00 04 */	stw r4, 4(r3)
.L_803A6410:
/* 803A6410 003A3350  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6414 003A3354  38 82 11 14 */	addi r4, r2, lbl_8051F474@sda21
/* 803A6418 003A3358  48 09 8B 9D */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803A641C 003A335C  B0 7D 03 68 */	sth r3, 0x368(r29)
/* 803A6420 003A3360  80 1D 03 64 */	lwz r0, 0x364(r29)
/* 803A6424 003A3364  28 00 00 00 */	cmplwi r0, 0
/* 803A6428 003A3368  41 82 00 30 */	beq .L_803A6458
/* 803A642C 003A336C  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 803A6430 003A3370  38 9D 01 8C */	addi r4, r29, 0x18c
/* 803A6434 003A3374  C0 3D 01 90 */	lfs f1, 0x190(r29)
/* 803A6438 003A3378  C0 03 0A 50 */	lfs f0, 0xa50(r3)
/* 803A643C 003A337C  EC 01 00 2A */	fadds f0, f1, f0
/* 803A6440 003A3380  D0 1D 01 90 */	stfs f0, 0x190(r29)
/* 803A6444 003A3384  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A6448 003A3388  81 83 00 00 */	lwz r12, 0(r3)
/* 803A644C 003A338C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 803A6450 003A3390  7D 89 03 A6 */	mtctr r12
/* 803A6454 003A3394  4E 80 04 21 */	bctrl 
.L_803A6458:
/* 803A6458 003A3398  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 803A645C 003A339C  38 00 00 00 */	li r0, 0
/* 803A6460 003A33A0  C0 02 11 1C */	lfs f0, lbl_8051F47C@sda21(r2)
/* 803A6464 003A33A4  38 81 00 08 */	addi r4, r1, 8
/* 803A6468 003A33A8  D0 21 00 08 */	stfs f1, 8(r1)
/* 803A646C 003A33AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A6470 003A33B0  C0 3D 01 90 */	lfs f1, 0x190(r29)
/* 803A6474 003A33B4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803A6478 003A33B8  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 803A647C 003A33BC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803A6480 003A33C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A6484 003A33C4  98 01 00 18 */	stb r0, 0x18(r1)
/* 803A6488 003A33C8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803A648C 003A33CC  80 63 00 08 */	lwz r3, 8(r3)
/* 803A6490 003A33D0  4B DC CB 35 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 803A6494 003A33D4  A8 03 00 36 */	lha r0, 0x36(r3)
/* 803A6498 003A33D8  7F A3 EB 78 */	mr r3, r29
/* 803A649C 003A33DC  B0 1D 03 44 */	sth r0, 0x344(r29)
/* 803A64A0 003A33E0  B0 1D 03 42 */	sth r0, 0x342(r29)
/* 803A64A4 003A33E4  B0 1D 03 40 */	sth r0, 0x340(r29)
/* 803A64A8 003A33E8  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 803A64AC 003A33EC  D0 1D 02 F8 */	stfs f0, 0x2f8(r29)
/* 803A64B0 003A33F0  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 803A64B4 003A33F4  D0 1D 02 FC */	stfs f0, 0x2fc(r29)
/* 803A64B8 003A33F8  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 803A64BC 003A33FC  D0 1D 03 00 */	stfs f0, 0x300(r29)
/* 803A64C0 003A3400  C0 1D 02 F8 */	lfs f0, 0x2f8(r29)
/* 803A64C4 003A3404  D0 1D 01 98 */	stfs f0, 0x198(r29)
/* 803A64C8 003A3408  C0 1D 02 FC */	lfs f0, 0x2fc(r29)
/* 803A64CC 003A340C  D0 1D 01 9C */	stfs f0, 0x19c(r29)
/* 803A64D0 003A3410  C0 1D 03 00 */	lfs f0, 0x300(r29)
/* 803A64D4 003A3414  D0 1D 01 A0 */	stfs f0, 0x1a0(r29)
/* 803A64D8 003A3418  C0 1D 01 98 */	lfs f0, 0x198(r29)
/* 803A64DC 003A341C  D0 1D 02 D0 */	stfs f0, 0x2d0(r29)
/* 803A64E0 003A3420  C0 1D 01 9C */	lfs f0, 0x19c(r29)
/* 803A64E4 003A3424  D0 1D 02 D4 */	stfs f0, 0x2d4(r29)
/* 803A64E8 003A3428  C0 1D 01 A0 */	lfs f0, 0x1a0(r29)
/* 803A64EC 003A342C  D0 1D 02 D8 */	stfs f0, 0x2d8(r29)
/* 803A64F0 003A3430  48 00 4C 8D */	bl isFinalFloor__Q34Game8BlackMan3ObjFv
/* 803A64F4 003A3434  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A64F8 003A3438  41 82 00 58 */	beq .L_803A6550
/* 803A64FC 003A343C  83 DD 02 8C */	lwz r30, 0x28c(r29)
/* 803A6500 003A3440  7F C3 F3 78 */	mr r3, r30
/* 803A6504 003A3444  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 803A6508 003A3448  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A650C 003A344C  7D 89 03 A6 */	mtctr r12
/* 803A6510 003A3450  4E 80 04 21 */	bctrl 
/* 803A6514 003A3454  2C 03 00 06 */	cmpwi r3, 6
/* 803A6518 003A3458  41 82 00 18 */	beq .L_803A6530
/* 803A651C 003A345C  38 7F 00 4C */	addi r3, r31, 0x4c
/* 803A6520 003A3460  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A6524 003A3464  38 80 04 5A */	li r4, 0x45a
/* 803A6528 003A3468  4C C6 31 82 */	crclr 6
/* 803A652C 003A346C  4B C8 41 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A6530:
/* 803A6530 003A3470  28 1E 00 00 */	cmplwi r30, 0
/* 803A6534 003A3474  41 82 00 4C */	beq .L_803A6580
/* 803A6538 003A3478  7F C3 F3 78 */	mr r3, r30
/* 803A653C 003A347C  38 80 00 00 */	li r4, 0
/* 803A6540 003A3480  48 0B 94 B1 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 803A6544 003A3484  38 00 00 01 */	li r0, 1
/* 803A6548 003A3488  98 1E 00 FF */	stb r0, 0xff(r30)
/* 803A654C 003A348C  48 00 00 34 */	b .L_803A6580
.L_803A6550:
/* 803A6550 003A3490  80 1D 03 64 */	lwz r0, 0x364(r29)
/* 803A6554 003A3494  28 00 00 00 */	cmplwi r0, 0
/* 803A6558 003A3498  41 82 00 28 */	beq .L_803A6580
/* 803A655C 003A349C  38 7D 02 50 */	addi r3, r29, 0x250
/* 803A6560 003A34A0  4B DC 73 29 */	bl isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
/* 803A6564 003A34A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A6568 003A34A8  40 82 00 18 */	bne .L_803A6580
/* 803A656C 003A34AC  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 803A6570 003A34B0  28 00 00 00 */	cmplwi r0, 0
/* 803A6574 003A34B4  41 82 00 0C */	beq .L_803A6580
/* 803A6578 003A34B8  7F A3 EB 78 */	mr r3, r29
/* 803A657C 003A34BC  4B E7 80 79 */	bl exit__Q25Radar3MgrFPQ24Game15TPositionObject
.L_803A6580:
/* 803A6580 003A34C0  38 00 00 B5 */	li r0, 0xb5
/* 803A6584 003A34C4  38 60 00 C0 */	li r3, 0xc0
/* 803A6588 003A34C8  98 1D 03 84 */	stb r0, 0x384(r29)
/* 803A658C 003A34CC  38 00 00 AE */	li r0, 0xae
/* 803A6590 003A34D0  39 00 00 FF */	li r8, 0xff
/* 803A6594 003A34D4  38 E0 00 20 */	li r7, 0x20
/* 803A6598 003A34D8  98 7D 03 85 */	stb r3, 0x385(r29)
/* 803A659C 003A34DC  38 C0 00 16 */	li r6, 0x16
/* 803A65A0 003A34E0  38 A0 00 30 */	li r5, 0x30
/* 803A65A4 003A34E4  38 80 00 3F */	li r4, 0x3f
/* 803A65A8 003A34E8  98 1D 03 86 */	stb r0, 0x386(r29)
/* 803A65AC 003A34EC  38 60 00 57 */	li r3, 0x57
/* 803A65B0 003A34F0  38 00 00 00 */	li r0, 0
/* 803A65B4 003A34F4  99 1D 03 87 */	stb r8, 0x387(r29)
/* 803A65B8 003A34F8  99 1D 03 88 */	stb r8, 0x388(r29)
/* 803A65BC 003A34FC  98 FD 03 89 */	stb r7, 0x389(r29)
/* 803A65C0 003A3500  98 DD 03 8A */	stb r6, 0x38a(r29)
/* 803A65C4 003A3504  99 1D 03 8B */	stb r8, 0x38b(r29)
/* 803A65C8 003A3508  98 BD 03 8C */	stb r5, 0x38c(r29)
/* 803A65CC 003A350C  98 9D 03 8D */	stb r4, 0x38d(r29)
/* 803A65D0 003A3510  98 7D 03 8E */	stb r3, 0x38e(r29)
/* 803A65D4 003A3514  98 1D 03 8F */	stb r0, 0x38f(r29)
/* 803A65D8 003A3518  88 1D 03 84 */	lbz r0, 0x384(r29)
/* 803A65DC 003A351C  98 1D 03 80 */	stb r0, 0x380(r29)
/* 803A65E0 003A3520  88 1D 03 85 */	lbz r0, 0x385(r29)
/* 803A65E4 003A3524  98 1D 03 81 */	stb r0, 0x381(r29)
/* 803A65E8 003A3528  88 1D 03 86 */	lbz r0, 0x386(r29)
/* 803A65EC 003A352C  98 1D 03 82 */	stb r0, 0x382(r29)
/* 803A65F0 003A3530  88 1D 03 87 */	lbz r0, 0x387(r29)
/* 803A65F4 003A3534  98 1D 03 83 */	stb r0, 0x383(r29)
/* 803A65F8 003A3538  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A65FC 003A353C  80 63 00 08 */	lwz r3, 8(r3)
/* 803A6600 003A3540  83 C3 00 04 */	lwz r30, 4(r3)
/* 803A6604 003A3544  28 1E 00 00 */	cmplwi r30, 0
/* 803A6608 003A3548  40 82 00 18 */	bne .L_803A6620
/* 803A660C 003A354C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A6610 003A3550  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A6614 003A3554  38 80 01 26 */	li r4, 0x126
/* 803A6618 003A3558  4C C6 31 82 */	crclr 6
/* 803A661C 003A355C  4B C8 40 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A6620:
/* 803A6620 003A3560  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 803A6624 003A3564  38 9F 00 64 */	addi r4, r31, 0x64
/* 803A6628 003A3568  4B C8 87 5D */	bl getIndex__10JUTNameTabCFPCc
/* 803A662C 003A356C  80 9E 00 60 */	lwz r4, 0x60(r30)
/* 803A6630 003A3570  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 803A6634 003A3574  7C 04 00 2E */	lwzx r0, r4, r0
/* 803A6638 003A3578  90 1D 03 7C */	stw r0, 0x37c(r29)
/* 803A663C 003A357C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A6640 003A3580  28 03 00 00 */	cmplwi r3, 0
/* 803A6644 003A3584  41 82 00 18 */	beq .L_803A665C
/* 803A6648 003A3588  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803A664C 003A358C  2C 00 00 04 */	cmpwi r0, 4
/* 803A6650 003A3590  40 82 00 0C */	bne .L_803A665C
/* 803A6654 003A3594  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A6658 003A3598  D0 1D 03 3C */	stfs f0, 0x33c(r29)
.L_803A665C:
/* 803A665C 003A359C  A0 1D 03 6A */	lhz r0, 0x36a(r29)
/* 803A6660 003A35A0  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A6664 003A35A4  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803A6668 003A35A8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803A666C 003A35AC  7C 63 02 14 */	add r3, r3, r0
/* 803A6670 003A35B0  48 08 32 31 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803A6674 003A35B4  80 9D 03 9C */	lwz r4, 0x39c(r29)
/* 803A6678 003A35B8  90 64 00 10 */	stw r3, 0x10(r4)
/* 803A667C 003A35BC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803A6680 003A35C0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803A6684 003A35C4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803A6688 003A35C8  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 803A668C 003A35CC  83 81 00 60 */	lwz r28, 0x60(r1)
/* 803A6690 003A35D0  7C 08 03 A6 */	mtlr r0
/* 803A6694 003A35D4  38 21 00 70 */	addi r1, r1, 0x70
/* 803A6698 003A35D8  4E 80 00 20 */	blr 
.endfn onInit__Q34Game8BlackMan3ObjFPQ24Game15CreatureInitArg

.fn __ct__Q34Game8BlackMan3ObjFv, global
/* 803A669C 003A35DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A66A0 003A35E0  7C 08 02 A6 */	mflr r0
/* 803A66A4 003A35E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A66A8 003A35E8  7C 80 07 35 */	extsh. r0, r4
/* 803A66AC 003A35EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A66B0 003A35F0  7C 7F 1B 78 */	mr r31, r3
/* 803A66B4 003A35F4  93 C1 00 08 */	stw r30, 8(r1)
/* 803A66B8 003A35F8  41 82 00 24 */	beq .L_803A66DC
/* 803A66BC 003A35FC  38 1F 03 AC */	addi r0, r31, 0x3ac
/* 803A66C0 003A3600  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 803A66C4 003A3604  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803A66C8 003A3608  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 803A66CC 003A360C  38 00 00 00 */	li r0, 0
/* 803A66D0 003A3610  90 7F 03 AC */	stw r3, 0x3ac(r31)
/* 803A66D4 003A3614  90 1F 03 B0 */	stw r0, 0x3b0(r31)
/* 803A66D8 003A3618  90 1F 03 B4 */	stw r0, 0x3b4(r31)
.L_803A66DC:
/* 803A66DC 003A361C  7F E3 FB 78 */	mr r3, r31
/* 803A66E0 003A3620  38 80 00 00 */	li r4, 0
/* 803A66E4 003A3624  4B D5 AC BD */	bl __ct__Q24Game9EnemyBaseFv
/* 803A66E8 003A3628  3C 80 80 4E */	lis r4, __vt__Q34Game8BlackMan3Obj@ha
/* 803A66EC 003A362C  39 3F 03 AC */	addi r9, r31, 0x3ac
/* 803A66F0 003A3630  38 A4 5E A8 */	addi r5, r4, __vt__Q34Game8BlackMan3Obj@l
/* 803A66F4 003A3634  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 803A66F8 003A3638  90 BF 00 00 */	stw r5, 0(r31)
/* 803A66FC 003A363C  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 803A6700 003A3640  39 45 02 FC */	addi r10, r5, 0x2fc
/* 803A6704 003A3644  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 803A6708 003A3648  90 1F 01 78 */	stw r0, 0x178(r31)
/* 803A670C 003A364C  39 00 FF FF */	li r8, -1
/* 803A6710 003A3650  38 00 00 00 */	li r0, 0
/* 803A6714 003A3654  38 7F 03 10 */	addi r3, r31, 0x310
/* 803A6718 003A3658  80 FF 01 7C */	lwz r7, 0x17c(r31)
/* 803A671C 003A365C  38 A0 00 00 */	li r5, 0
/* 803A6720 003A3660  38 C0 00 0C */	li r6, 0xc
/* 803A6724 003A3664  91 47 00 00 */	stw r10, 0(r7)
/* 803A6728 003A3668  38 E0 00 02 */	li r7, 2
/* 803A672C 003A366C  81 5F 01 7C */	lwz r10, 0x17c(r31)
/* 803A6730 003A3670  7D 2A 48 50 */	subf r9, r10, r9
/* 803A6734 003A3674  91 2A 00 0C */	stw r9, 0xc(r10)
/* 803A6738 003A3678  91 1F 02 DC */	stw r8, 0x2dc(r31)
/* 803A673C 003A367C  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 803A6740 003A3680  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 803A6744 003A3684  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 803A6748 003A3688  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 803A674C 003A368C  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 803A6750 003A3690  4B D1 B0 ED */	bl __construct_array
/* 803A6754 003A3694  38 80 00 00 */	li r4, 0
/* 803A6758 003A3698  C0 02 11 1C */	lfs f0, lbl_8051F47C@sda21(r2)
/* 803A675C 003A369C  90 9F 03 34 */	stw r4, 0x334(r31)
/* 803A6760 003A36A0  38 00 FF FF */	li r0, -1
/* 803A6764 003A36A4  38 7F 03 50 */	addi r3, r31, 0x350
/* 803A6768 003A36A8  98 9F 03 38 */	stb r4, 0x338(r31)
/* 803A676C 003A36AC  D0 1F 03 3C */	stfs f0, 0x33c(r31)
/* 803A6770 003A36B0  B0 1F 03 40 */	sth r0, 0x340(r31)
/* 803A6774 003A36B4  B0 1F 03 42 */	sth r0, 0x342(r31)
/* 803A6778 003A36B8  B0 1F 03 44 */	sth r0, 0x344(r31)
/* 803A677C 003A36BC  90 9F 03 48 */	stw r4, 0x348(r31)
/* 803A6780 003A36C0  98 9F 03 4C */	stb r4, 0x34c(r31)
/* 803A6784 003A36C4  4B D8 3B D1 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 803A6788 003A36C8  38 00 00 00 */	li r0, 0
/* 803A678C 003A36CC  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A6790 003A36D0  90 1F 03 58 */	stw r0, 0x358(r31)
/* 803A6794 003A36D4  38 60 00 2C */	li r3, 0x2c
/* 803A6798 003A36D8  90 1F 03 5C */	stw r0, 0x35c(r31)
/* 803A679C 003A36DC  90 1F 03 60 */	stw r0, 0x360(r31)
/* 803A67A0 003A36E0  90 1F 03 64 */	stw r0, 0x364(r31)
/* 803A67A4 003A36E4  D0 1F 03 78 */	stfs f0, 0x378(r31)
/* 803A67A8 003A36E8  90 1F 03 7C */	stw r0, 0x37c(r31)
/* 803A67AC 003A36EC  90 1F 03 90 */	stw r0, 0x390(r31)
/* 803A67B0 003A36F0  90 1F 03 94 */	stw r0, 0x394(r31)
/* 803A67B4 003A36F4  90 1F 03 98 */	stw r0, 0x398(r31)
/* 803A67B8 003A36F8  90 1F 03 9C */	stw r0, 0x39c(r31)
/* 803A67BC 003A36FC  98 1F 03 A8 */	stb r0, 0x3a8(r31)
/* 803A67C0 003A3700  98 1F 03 A9 */	stb r0, 0x3a9(r31)
/* 803A67C4 003A3704  98 1F 03 AA */	stb r0, 0x3aa(r31)
/* 803A67C8 003A3708  98 1F 03 AB */	stb r0, 0x3ab(r31)
/* 803A67CC 003A370C  4B C7 D6 D9 */	bl __nw__FUl
/* 803A67D0 003A3710  7C 7E 1B 79 */	or. r30, r3, r3
/* 803A67D4 003A3714  41 82 00 44 */	beq .L_803A6818
/* 803A67D8 003A3718  4B D8 11 9D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 803A67DC 003A371C  3C 60 80 4E */	lis r3, __vt__Q34Game8BlackMan14ProperAnimator@ha
/* 803A67E0 003A3720  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 803A67E4 003A3724  38 03 5B E8 */	addi r0, r3, __vt__Q34Game8BlackMan14ProperAnimator@l
/* 803A67E8 003A3728  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 803A67EC 003A372C  90 1E 00 00 */	stw r0, 0(r30)
/* 803A67F0 003A3730  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 803A67F4 003A3734  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 803A67F8 003A3738  38 00 00 00 */	li r0, 0
/* 803A67FC 003A373C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 803A6800 003A3740  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803A6804 003A3744  98 1E 00 28 */	stb r0, 0x28(r30)
/* 803A6808 003A3748  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803A680C 003A374C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803A6810 003A3750  98 1E 00 28 */	stb r0, 0x28(r30)
/* 803A6814 003A3754  90 1E 00 20 */	stw r0, 0x20(r30)
.L_803A6818:
/* 803A6818 003A3758  93 DF 01 84 */	stw r30, 0x184(r31)
/* 803A681C 003A375C  38 60 00 0C */	li r3, 0xc
/* 803A6820 003A3760  4B C7 D6 85 */	bl __nw__FUl
/* 803A6824 003A3764  7C 7E 1B 79 */	or. r30, r3, r3
/* 803A6828 003A3768  41 82 00 14 */	beq .L_803A683C
/* 803A682C 003A376C  48 08 DB 29 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 803A6830 003A3770  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 803A6834 003A3774  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 803A6838 003A3778  90 1E 00 00 */	stw r0, 0(r30)
.L_803A683C:
/* 803A683C 003A377C  93 DF 03 58 */	stw r30, 0x358(r31)
/* 803A6840 003A3780  38 60 00 1C */	li r3, 0x1c
/* 803A6844 003A3784  4B C7 D6 61 */	bl __nw__FUl
/* 803A6848 003A3788  7C 64 1B 79 */	or. r4, r3, r3
/* 803A684C 003A378C  41 82 00 24 */	beq .L_803A6870
/* 803A6850 003A3790  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 803A6854 003A3794  3C 60 80 4E */	lis r3, __vt__Q34Game8BlackMan3FSM@ha
/* 803A6858 003A3798  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 803A685C 003A379C  38 A0 FF FF */	li r5, -1
/* 803A6860 003A37A0  90 04 00 00 */	stw r0, 0(r4)
/* 803A6864 003A37A4  38 03 5B C4 */	addi r0, r3, __vt__Q34Game8BlackMan3FSM@l
/* 803A6868 003A37A8  90 A4 00 18 */	stw r5, 0x18(r4)
/* 803A686C 003A37AC  90 04 00 00 */	stw r0, 0(r4)
.L_803A6870:
/* 803A6870 003A37B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A6874 003A37B4  7F E3 FB 78 */	mr r3, r31
/* 803A6878 003A37B8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 803A687C 003A37BC  7D 89 03 A6 */	mtctr r12
/* 803A6880 003A37C0  4E 80 04 21 */	bctrl 
/* 803A6884 003A37C4  38 60 00 18 */	li r3, 0x18
/* 803A6888 003A37C8  4B C7 D6 1D */	bl __nw__FUl
/* 803A688C 003A37CC  28 03 00 00 */	cmplwi r3, 0
/* 803A6890 003A37D0  41 82 00 84 */	beq .L_803A6914
/* 803A6894 003A37D4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803A6898 003A37D8  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803A689C 003A37DC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803A68A0 003A37E0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803A68A4 003A37E4  90 03 00 00 */	stw r0, 0(r3)
/* 803A68A8 003A37E8  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803A68AC 003A37EC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803A68B0 003A37F0  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 803A68B4 003A37F4  90 03 00 04 */	stw r0, 4(r3)
/* 803A68B8 003A37F8  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 803A68BC 003A37FC  3C 80 80 4E */	lis r4, __vt__Q23efx9TKageMove@ha
/* 803A68C0 003A3800  38 05 00 14 */	addi r0, r5, 0x14
/* 803A68C4 003A3804  90 A3 00 00 */	stw r5, 0(r3)
/* 803A68C8 003A3808  38 84 5E 5C */	addi r4, r4, __vt__Q23efx9TKageMove@l
/* 803A68CC 003A380C  39 60 00 00 */	li r11, 0
/* 803A68D0 003A3810  39 40 02 B2 */	li r10, 0x2b2
/* 803A68D4 003A3814  90 03 00 04 */	stw r0, 4(r3)
/* 803A68D8 003A3818  39 09 00 14 */	addi r8, r9, 0x14
/* 803A68DC 003A381C  38 FF 03 04 */	addi r7, r31, 0x304
/* 803A68E0 003A3820  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 803A68E4 003A3824  91 63 00 08 */	stw r11, 8(r3)
/* 803A68E8 003A3828  38 A0 02 99 */	li r5, 0x299
/* 803A68EC 003A382C  38 04 00 14 */	addi r0, r4, 0x14
/* 803A68F0 003A3830  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803A68F4 003A3834  99 63 00 0E */	stb r11, 0xe(r3)
/* 803A68F8 003A3838  91 23 00 00 */	stw r9, 0(r3)
/* 803A68FC 003A383C  91 03 00 04 */	stw r8, 4(r3)
/* 803A6900 003A3840  90 E3 00 10 */	stw r7, 0x10(r3)
/* 803A6904 003A3844  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803A6908 003A3848  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803A690C 003A384C  90 83 00 00 */	stw r4, 0(r3)
/* 803A6910 003A3850  90 03 00 04 */	stw r0, 4(r3)
.L_803A6914:
/* 803A6914 003A3854  90 7F 03 90 */	stw r3, 0x390(r31)
/* 803A6918 003A3858  38 60 00 18 */	li r3, 0x18
/* 803A691C 003A385C  4B C7 D5 89 */	bl __nw__FUl
/* 803A6920 003A3860  28 03 00 00 */	cmplwi r3, 0
/* 803A6924 003A3864  41 82 00 84 */	beq .L_803A69A8
/* 803A6928 003A3868  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803A692C 003A386C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803A6930 003A3870  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803A6934 003A3874  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803A6938 003A3878  90 03 00 00 */	stw r0, 0(r3)
/* 803A693C 003A387C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803A6940 003A3880  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803A6944 003A3884  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 803A6948 003A3888  90 03 00 04 */	stw r0, 4(r3)
/* 803A694C 003A388C  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 803A6950 003A3890  3C 80 80 4E */	lis r4, __vt__Q23efx8TKageRun@ha
/* 803A6954 003A3894  38 05 00 14 */	addi r0, r5, 0x14
/* 803A6958 003A3898  90 A3 00 00 */	stw r5, 0(r3)
/* 803A695C 003A389C  38 84 5E 10 */	addi r4, r4, __vt__Q23efx8TKageRun@l
/* 803A6960 003A38A0  39 60 00 00 */	li r11, 0
/* 803A6964 003A38A4  39 40 02 B2 */	li r10, 0x2b2
/* 803A6968 003A38A8  90 03 00 04 */	stw r0, 4(r3)
/* 803A696C 003A38AC  39 09 00 14 */	addi r8, r9, 0x14
/* 803A6970 003A38B0  38 FF 03 04 */	addi r7, r31, 0x304
/* 803A6974 003A38B4  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 803A6978 003A38B8  91 63 00 08 */	stw r11, 8(r3)
/* 803A697C 003A38BC  38 A0 02 9C */	li r5, 0x29c
/* 803A6980 003A38C0  38 04 00 14 */	addi r0, r4, 0x14
/* 803A6984 003A38C4  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803A6988 003A38C8  99 63 00 0E */	stb r11, 0xe(r3)
/* 803A698C 003A38CC  91 23 00 00 */	stw r9, 0(r3)
/* 803A6990 003A38D0  91 03 00 04 */	stw r8, 4(r3)
/* 803A6994 003A38D4  90 E3 00 10 */	stw r7, 0x10(r3)
/* 803A6998 003A38D8  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803A699C 003A38DC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803A69A0 003A38E0  90 83 00 00 */	stw r4, 0(r3)
/* 803A69A4 003A38E4  90 03 00 04 */	stw r0, 4(r3)
.L_803A69A8:
/* 803A69A8 003A38E8  90 7F 03 94 */	stw r3, 0x394(r31)
/* 803A69AC 003A38EC  38 60 00 14 */	li r3, 0x14
/* 803A69B0 003A38F0  4B C7 D4 F5 */	bl __nw__FUl
/* 803A69B4 003A38F4  28 03 00 00 */	cmplwi r3, 0
/* 803A69B8 003A38F8  41 82 00 78 */	beq .L_803A6A30
/* 803A69BC 003A38FC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803A69C0 003A3900  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803A69C4 003A3904  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803A69C8 003A3908  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803A69CC 003A390C  90 03 00 00 */	stw r0, 0(r3)
/* 803A69D0 003A3910  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803A69D4 003A3914  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803A69D8 003A3918  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 803A69DC 003A391C  90 03 00 04 */	stw r0, 4(r3)
/* 803A69E0 003A3920  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 803A69E4 003A3924  3C 80 80 4E */	lis r4, __vt__Q23efx10TKageDead1@ha
/* 803A69E8 003A3928  38 05 00 14 */	addi r0, r5, 0x14
/* 803A69EC 003A392C  90 A3 00 00 */	stw r5, 0(r3)
/* 803A69F0 003A3930  38 84 5D C4 */	addi r4, r4, __vt__Q23efx10TKageDead1@l
/* 803A69F4 003A3934  39 20 00 00 */	li r9, 0
/* 803A69F8 003A3938  39 00 02 B2 */	li r8, 0x2b2
/* 803A69FC 003A393C  90 03 00 04 */	stw r0, 4(r3)
/* 803A6A00 003A3940  38 C7 00 14 */	addi r6, r7, 0x14
/* 803A6A04 003A3944  38 A0 02 97 */	li r5, 0x297
/* 803A6A08 003A3948  38 04 00 14 */	addi r0, r4, 0x14
/* 803A6A0C 003A394C  91 23 00 08 */	stw r9, 8(r3)
/* 803A6A10 003A3950  B1 03 00 0C */	sth r8, 0xc(r3)
/* 803A6A14 003A3954  99 23 00 0E */	stb r9, 0xe(r3)
/* 803A6A18 003A3958  90 E3 00 00 */	stw r7, 0(r3)
/* 803A6A1C 003A395C  90 C3 00 04 */	stw r6, 4(r3)
/* 803A6A20 003A3960  91 23 00 10 */	stw r9, 0x10(r3)
/* 803A6A24 003A3964  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803A6A28 003A3968  90 83 00 00 */	stw r4, 0(r3)
/* 803A6A2C 003A396C  90 03 00 04 */	stw r0, 4(r3)
.L_803A6A30:
/* 803A6A30 003A3970  90 7F 03 9C */	stw r3, 0x39c(r31)
/* 803A6A34 003A3974  38 60 00 18 */	li r3, 0x18
/* 803A6A38 003A3978  4B C7 D4 6D */	bl __nw__FUl
/* 803A6A3C 003A397C  28 03 00 00 */	cmplwi r3, 0
/* 803A6A40 003A3980  41 82 00 84 */	beq .L_803A6AC4
/* 803A6A44 003A3984  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803A6A48 003A3988  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803A6A4C 003A398C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803A6A50 003A3990  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803A6A54 003A3994  90 03 00 00 */	stw r0, 0(r3)
/* 803A6A58 003A3998  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803A6A5C 003A399C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803A6A60 003A39A0  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 803A6A64 003A39A4  90 03 00 04 */	stw r0, 4(r3)
/* 803A6A68 003A39A8  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 803A6A6C 003A39AC  3C 80 80 4E */	lis r4, __vt__Q23efx11TKageTyreup@ha
/* 803A6A70 003A39B0  38 05 00 14 */	addi r0, r5, 0x14
/* 803A6A74 003A39B4  90 A3 00 00 */	stw r5, 0(r3)
/* 803A6A78 003A39B8  38 84 5D 78 */	addi r4, r4, __vt__Q23efx11TKageTyreup@l
/* 803A6A7C 003A39BC  39 60 00 00 */	li r11, 0
/* 803A6A80 003A39C0  39 40 02 B2 */	li r10, 0x2b2
/* 803A6A84 003A39C4  90 03 00 04 */	stw r0, 4(r3)
/* 803A6A88 003A39C8  39 09 00 14 */	addi r8, r9, 0x14
/* 803A6A8C 003A39CC  38 FF 03 28 */	addi r7, r31, 0x328
/* 803A6A90 003A39D0  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 803A6A94 003A39D4  91 63 00 08 */	stw r11, 8(r3)
/* 803A6A98 003A39D8  38 A0 02 A1 */	li r5, 0x2a1
/* 803A6A9C 003A39DC  38 04 00 14 */	addi r0, r4, 0x14
/* 803A6AA0 003A39E0  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803A6AA4 003A39E4  99 63 00 0E */	stb r11, 0xe(r3)
/* 803A6AA8 003A39E8  91 23 00 00 */	stw r9, 0(r3)
/* 803A6AAC 003A39EC  91 03 00 04 */	stw r8, 4(r3)
/* 803A6AB0 003A39F0  90 E3 00 10 */	stw r7, 0x10(r3)
/* 803A6AB4 003A39F4  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803A6AB8 003A39F8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803A6ABC 003A39FC  90 83 00 00 */	stw r4, 0(r3)
/* 803A6AC0 003A3A00  90 03 00 04 */	stw r0, 4(r3)
.L_803A6AC4:
/* 803A6AC4 003A3A04  90 7F 03 98 */	stw r3, 0x398(r31)
/* 803A6AC8 003A3A08  38 60 00 14 */	li r3, 0x14
/* 803A6ACC 003A3A0C  4B C7 D3 D9 */	bl __nw__FUl
/* 803A6AD0 003A3A10  28 03 00 00 */	cmplwi r3, 0
/* 803A6AD4 003A3A14  41 82 00 7C */	beq .L_803A6B50
/* 803A6AD8 003A3A18  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803A6ADC 003A3A1C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803A6AE0 003A3A20  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803A6AE4 003A3A24  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803A6AE8 003A3A28  90 03 00 00 */	stw r0, 0(r3)
/* 803A6AEC 003A3A2C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803A6AF0 003A3A30  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803A6AF4 003A3A34  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 803A6AF8 003A3A38  90 03 00 04 */	stw r0, 4(r3)
/* 803A6AFC 003A3A3C  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 803A6B00 003A3A40  3C 80 80 4E */	lis r4, __vt__Q23efx10TKageFlick@ha
/* 803A6B04 003A3A44  38 05 00 14 */	addi r0, r5, 0x14
/* 803A6B08 003A3A48  90 A3 00 00 */	stw r5, 0(r3)
/* 803A6B0C 003A3A4C  38 84 5D 2C */	addi r4, r4, __vt__Q23efx10TKageFlick@l
/* 803A6B10 003A3A50  39 40 00 00 */	li r10, 0
/* 803A6B14 003A3A54  39 20 02 B2 */	li r9, 0x2b2
/* 803A6B18 003A3A58  90 03 00 04 */	stw r0, 4(r3)
/* 803A6B1C 003A3A5C  38 E8 00 14 */	addi r7, r8, 0x14
/* 803A6B20 003A3A60  38 DF 03 10 */	addi r6, r31, 0x310
/* 803A6B24 003A3A64  38 A0 02 AE */	li r5, 0x2ae
/* 803A6B28 003A3A68  91 43 00 08 */	stw r10, 8(r3)
/* 803A6B2C 003A3A6C  38 04 00 14 */	addi r0, r4, 0x14
/* 803A6B30 003A3A70  B1 23 00 0C */	sth r9, 0xc(r3)
/* 803A6B34 003A3A74  99 43 00 0E */	stb r10, 0xe(r3)
/* 803A6B38 003A3A78  91 03 00 00 */	stw r8, 0(r3)
/* 803A6B3C 003A3A7C  90 E3 00 04 */	stw r7, 4(r3)
/* 803A6B40 003A3A80  90 C3 00 10 */	stw r6, 0x10(r3)
/* 803A6B44 003A3A84  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803A6B48 003A3A88  90 83 00 00 */	stw r4, 0(r3)
/* 803A6B4C 003A3A8C  90 03 00 04 */	stw r0, 4(r3)
.L_803A6B50:
/* 803A6B50 003A3A90  90 7F 03 A0 */	stw r3, 0x3a0(r31)
/* 803A6B54 003A3A94  38 60 00 14 */	li r3, 0x14
/* 803A6B58 003A3A98  4B C7 D3 4D */	bl __nw__FUl
/* 803A6B5C 003A3A9C  28 03 00 00 */	cmplwi r3, 0
/* 803A6B60 003A3AA0  41 82 00 7C */	beq .L_803A6BDC
/* 803A6B64 003A3AA4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803A6B68 003A3AA8  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803A6B6C 003A3AAC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803A6B70 003A3AB0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803A6B74 003A3AB4  90 03 00 00 */	stw r0, 0(r3)
/* 803A6B78 003A3AB8  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803A6B7C 003A3ABC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803A6B80 003A3AC0  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 803A6B84 003A3AC4  90 03 00 04 */	stw r0, 4(r3)
/* 803A6B88 003A3AC8  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 803A6B8C 003A3ACC  3C 80 80 4E */	lis r4, __vt__Q23efx10TKageFlick@ha
/* 803A6B90 003A3AD0  38 05 00 14 */	addi r0, r5, 0x14
/* 803A6B94 003A3AD4  90 A3 00 00 */	stw r5, 0(r3)
/* 803A6B98 003A3AD8  38 84 5D 2C */	addi r4, r4, __vt__Q23efx10TKageFlick@l
/* 803A6B9C 003A3ADC  39 40 00 00 */	li r10, 0
/* 803A6BA0 003A3AE0  39 20 02 B2 */	li r9, 0x2b2
/* 803A6BA4 003A3AE4  90 03 00 04 */	stw r0, 4(r3)
/* 803A6BA8 003A3AE8  38 E8 00 14 */	addi r7, r8, 0x14
/* 803A6BAC 003A3AEC  38 DF 03 1C */	addi r6, r31, 0x31c
/* 803A6BB0 003A3AF0  38 A0 02 AE */	li r5, 0x2ae
/* 803A6BB4 003A3AF4  91 43 00 08 */	stw r10, 8(r3)
/* 803A6BB8 003A3AF8  38 04 00 14 */	addi r0, r4, 0x14
/* 803A6BBC 003A3AFC  B1 23 00 0C */	sth r9, 0xc(r3)
/* 803A6BC0 003A3B00  99 43 00 0E */	stb r10, 0xe(r3)
/* 803A6BC4 003A3B04  91 03 00 00 */	stw r8, 0(r3)
/* 803A6BC8 003A3B08  90 E3 00 04 */	stw r7, 4(r3)
/* 803A6BCC 003A3B0C  90 C3 00 10 */	stw r6, 0x10(r3)
/* 803A6BD0 003A3B10  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803A6BD4 003A3B14  90 83 00 00 */	stw r4, 0(r3)
/* 803A6BD8 003A3B18  90 03 00 04 */	stw r0, 4(r3)
.L_803A6BDC:
/* 803A6BDC 003A3B1C  90 7F 03 A4 */	stw r3, 0x3a4(r31)
/* 803A6BE0 003A3B20  7F E3 FB 78 */	mr r3, r31
/* 803A6BE4 003A3B24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A6BE8 003A3B28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A6BEC 003A3B2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A6BF0 003A3B30  7C 08 03 A6 */	mtlr r0
/* 803A6BF4 003A3B34  38 21 00 10 */	addi r1, r1, 0x10
/* 803A6BF8 003A3B38  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8BlackMan3ObjFv

.fn setFSM__Q34Game8BlackMan3ObjFPQ34Game8BlackMan3FSM, weak
/* 803A6BFC 003A3B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A6C00 003A3B40  7C 08 02 A6 */	mflr r0
/* 803A6C04 003A3B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A6C08 003A3B48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A6C0C 003A3B4C  7C 7F 1B 78 */	mr r31, r3
/* 803A6C10 003A3B50  90 83 03 60 */	stw r4, 0x360(r3)
/* 803A6C14 003A3B54  7F E4 FB 78 */	mr r4, r31
/* 803A6C18 003A3B58  80 63 03 60 */	lwz r3, 0x360(r3)
/* 803A6C1C 003A3B5C  81 83 00 00 */	lwz r12, 0(r3)
/* 803A6C20 003A3B60  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A6C24 003A3B64  7D 89 03 A6 */	mtctr r12
/* 803A6C28 003A3B68  4E 80 04 21 */	bctrl 
/* 803A6C2C 003A3B6C  38 00 00 00 */	li r0, 0
/* 803A6C30 003A3B70  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 803A6C34 003A3B74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A6C38 003A3B78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A6C3C 003A3B7C  7C 08 03 A6 */	mtlr r0
/* 803A6C40 003A3B80  38 21 00 10 */	addi r1, r1, 0x10
/* 803A6C44 003A3B84  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game8BlackMan3ObjFPQ34Game8BlackMan3FSM

.fn doUpdate__Q34Game8BlackMan3ObjFv, global
/* 803A6C48 003A3B88  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 803A6C4C 003A3B8C  7C 08 02 A6 */	mflr r0
/* 803A6C50 003A3B90  90 01 01 14 */	stw r0, 0x114(r1)
/* 803A6C54 003A3B94  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 803A6C58 003A3B98  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 803A6C5C 003A3B9C  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 803A6C60 003A3BA0  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 803A6C64 003A3BA4  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 803A6C68 003A3BA8  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 803A6C6C 003A3BAC  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 803A6C70 003A3BB0  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 803A6C74 003A3BB4  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 803A6C78 003A3BB8  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 803A6C7C 003A3BBC  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 803A6C80 003A3BC0  3C 80 80 49 */	lis r4, lbl_80495670@ha
/* 803A6C84 003A3BC4  7C 7E 1B 78 */	mr r30, r3
/* 803A6C88 003A3BC8  3B E4 56 70 */	addi r31, r4, lbl_80495670@l
/* 803A6C8C 003A3BCC  4B D6 07 69 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A6C90 003A3BD0  7F C3 F3 78 */	mr r3, r30
/* 803A6C94 003A3BD4  4B D6 06 A5 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 803A6C98 003A3BD8  7F C3 F3 78 */	mr r3, r30
/* 803A6C9C 003A3BDC  4B D6 06 65 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 803A6CA0 003A3BE0  80 7E 03 60 */	lwz r3, 0x360(r30)
/* 803A6CA4 003A3BE4  7F C4 F3 78 */	mr r4, r30
/* 803A6CA8 003A3BE8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A6CAC 003A3BEC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803A6CB0 003A3BF0  7D 89 03 A6 */	mtctr r12
/* 803A6CB4 003A3BF4  4E 80 04 21 */	bctrl 
/* 803A6CB8 003A3BF8  C0 5E 03 78 */	lfs f2, 0x378(r30)
/* 803A6CBC 003A3BFC  C0 22 11 20 */	lfs f1, lbl_8051F480@sda21(r2)
/* 803A6CC0 003A3C00  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803A6CC4 003A3C04  40 80 01 84 */	bge .L_803A6E48
/* 803A6CC8 003A3C08  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803A6CCC 003A3C0C  C0 03 0A 3C */	lfs f0, 0xa3c(r3)
/* 803A6CD0 003A3C10  EC 02 00 2A */	fadds f0, f2, f0
/* 803A6CD4 003A3C14  D0 1E 03 78 */	stfs f0, 0x378(r30)
/* 803A6CD8 003A3C18  C0 1E 03 78 */	lfs f0, 0x378(r30)
/* 803A6CDC 003A3C1C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803A6CE0 003A3C20  40 81 00 08 */	ble .L_803A6CE8
/* 803A6CE4 003A3C24  D0 3E 03 78 */	stfs f1, 0x378(r30)
.L_803A6CE8:
/* 803A6CE8 003A3C28  C0 22 11 20 */	lfs f1, lbl_8051F480@sda21(r2)
/* 803A6CEC 003A3C2C  3C 60 6B 6F */	lis r3, 0x6B6F7369@ha
/* 803A6CF0 003A3C30  C0 1E 03 78 */	lfs f0, 0x378(r30)
/* 803A6CF4 003A3C34  38 83 73 69 */	addi r4, r3, 0x6B6F7369@l
/* 803A6CF8 003A3C38  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 803A6CFC 003A3C3C  EF E1 00 28 */	fsubs f31, f1, f0
/* 803A6D00 003A3C40  4B D8 F1 45 */	bl getCollPart__8CollTreeFUl
/* 803A6D04 003A3C44  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803A6D08 003A3C48  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A6D0C 003A3C4C  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803A6D10 003A3C50  48 06 C7 25 */	bl __eq__4ID32FUl
/* 803A6D14 003A3C54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A6D18 003A3C58  40 82 00 14 */	bne .L_803A6D2C
/* 803A6D1C 003A3C5C  7F C3 F3 78 */	mr r3, r30
/* 803A6D20 003A3C60  4B D6 06 D5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A6D24 003A3C64  2C 03 00 01 */	cmpwi r3, 1
/* 803A6D28 003A3C68  40 82 00 24 */	bne .L_803A6D4C
.L_803A6D2C:
/* 803A6D2C 003A3C6C  C0 22 11 24 */	lfs f1, lbl_8051F484@sda21(r2)
/* 803A6D30 003A3C70  C0 1E 03 78 */	lfs f0, 0x378(r30)
/* 803A6D34 003A3C74  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A6D38 003A3C78  FC 00 00 1E */	fctiwz f0, f0
/* 803A6D3C 003A3C7C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 803A6D40 003A3C80  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803A6D44 003A3C84  98 1E 03 8F */	stb r0, 0x38f(r30)
/* 803A6D48 003A3C88  48 00 01 00 */	b .L_803A6E48
.L_803A6D4C:
/* 803A6D4C 003A3C8C  88 1E 03 8F */	lbz r0, 0x38f(r30)
/* 803A6D50 003A3C90  3C 60 43 30 */	lis r3, 0x4330
/* 803A6D54 003A3C94  90 61 00 60 */	stw r3, 0x60(r1)
/* 803A6D58 003A3C98  C8 62 11 30 */	lfd f3, lbl_8051F490@sda21(r2)
/* 803A6D5C 003A3C9C  90 01 00 64 */	stw r0, 0x64(r1)
/* 803A6D60 003A3CA0  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 803A6D64 003A3CA4  90 61 00 78 */	stw r3, 0x78(r1)
/* 803A6D68 003A3CA8  EC 00 18 28 */	fsubs f0, f0, f3
/* 803A6D6C 003A3CAC  90 61 00 70 */	stw r3, 0x70(r1)
/* 803A6D70 003A3CB0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 803A6D74 003A3CB4  90 61 00 90 */	stw r3, 0x90(r1)
/* 803A6D78 003A3CB8  90 61 00 88 */	stw r3, 0x88(r1)
/* 803A6D7C 003A3CBC  FC 00 00 1E */	fctiwz f0, f0
/* 803A6D80 003A3CC0  90 61 00 A8 */	stw r3, 0xa8(r1)
/* 803A6D84 003A3CC4  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 803A6D88 003A3CC8  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 803A6D8C 003A3CCC  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 803A6D90 003A3CD0  98 1E 03 8F */	stb r0, 0x38f(r30)
/* 803A6D94 003A3CD4  88 1E 03 84 */	lbz r0, 0x384(r30)
/* 803A6D98 003A3CD8  88 7E 03 80 */	lbz r3, 0x380(r30)
/* 803A6D9C 003A3CDC  90 01 00 7C */	stw r0, 0x7c(r1)
/* 803A6DA0 003A3CE0  C0 1E 03 78 */	lfs f0, 0x378(r30)
/* 803A6DA4 003A3CE4  C8 21 00 78 */	lfd f1, 0x78(r1)
/* 803A6DA8 003A3CE8  90 61 00 74 */	stw r3, 0x74(r1)
/* 803A6DAC 003A3CEC  EC 21 18 28 */	fsubs f1, f1, f3
/* 803A6DB0 003A3CF0  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 803A6DB4 003A3CF4  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A6DB8 003A3CF8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A6DBC 003A3CFC  EC 02 07 FA */	fmadds f0, f2, f31, f0
/* 803A6DC0 003A3D00  FC 00 00 1E */	fctiwz f0, f0
/* 803A6DC4 003A3D04  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 803A6DC8 003A3D08  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803A6DCC 003A3D0C  98 1E 03 80 */	stb r0, 0x380(r30)
/* 803A6DD0 003A3D10  88 1E 03 85 */	lbz r0, 0x385(r30)
/* 803A6DD4 003A3D14  88 7E 03 81 */	lbz r3, 0x381(r30)
/* 803A6DD8 003A3D18  90 01 00 94 */	stw r0, 0x94(r1)
/* 803A6DDC 003A3D1C  C0 1E 03 78 */	lfs f0, 0x378(r30)
/* 803A6DE0 003A3D20  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 803A6DE4 003A3D24  90 61 00 8C */	stw r3, 0x8c(r1)
/* 803A6DE8 003A3D28  EC 21 18 28 */	fsubs f1, f1, f3
/* 803A6DEC 003A3D2C  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 803A6DF0 003A3D30  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A6DF4 003A3D34  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A6DF8 003A3D38  EC 02 07 FA */	fmadds f0, f2, f31, f0
/* 803A6DFC 003A3D3C  FC 00 00 1E */	fctiwz f0, f0
/* 803A6E00 003A3D40  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 803A6E04 003A3D44  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 803A6E08 003A3D48  98 1E 03 81 */	stb r0, 0x381(r30)
/* 803A6E0C 003A3D4C  88 1E 03 86 */	lbz r0, 0x386(r30)
/* 803A6E10 003A3D50  88 7E 03 82 */	lbz r3, 0x382(r30)
/* 803A6E14 003A3D54  90 01 00 AC */	stw r0, 0xac(r1)
/* 803A6E18 003A3D58  C0 1E 03 78 */	lfs f0, 0x378(r30)
/* 803A6E1C 003A3D5C  C8 21 00 A8 */	lfd f1, 0xa8(r1)
/* 803A6E20 003A3D60  90 61 00 A4 */	stw r3, 0xa4(r1)
/* 803A6E24 003A3D64  EC 21 18 28 */	fsubs f1, f1, f3
/* 803A6E28 003A3D68  C8 41 00 A0 */	lfd f2, 0xa0(r1)
/* 803A6E2C 003A3D6C  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A6E30 003A3D70  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A6E34 003A3D74  EC 02 07 FA */	fmadds f0, f2, f31, f0
/* 803A6E38 003A3D78  FC 00 00 1E */	fctiwz f0, f0
/* 803A6E3C 003A3D7C  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 803A6E40 003A3D80  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 803A6E44 003A3D84  98 1E 03 82 */	stb r0, 0x382(r30)
.L_803A6E48:
/* 803A6E48 003A3D88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803A6E4C 003A3D8C  C0 3E 03 3C */	lfs f1, 0x33c(r30)
/* 803A6E50 003A3D90  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803A6E54 003A3D94  EC 01 00 28 */	fsubs f0, f1, f0
/* 803A6E58 003A3D98  D0 1E 03 3C */	stfs f0, 0x33c(r30)
/* 803A6E5C 003A3D9C  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 803A6E60 003A3DA0  54 00 03 5B */	rlwinm. r0, r0, 0, 0xd, 0xd
/* 803A6E64 003A3DA4  41 82 04 40 */	beq .L_803A72A4
/* 803A6E68 003A3DA8  7F C3 F3 78 */	mr r3, r30
/* 803A6E6C 003A3DAC  4B D6 05 89 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A6E70 003A3DB0  2C 03 00 05 */	cmpwi r3, 5
/* 803A6E74 003A3DB4  40 82 04 30 */	bne .L_803A72A4
/* 803A6E78 003A3DB8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803A6E7C 003A3DBC  80 1E 03 64 */	lwz r0, 0x364(r30)
/* 803A6E80 003A3DC0  C0 03 0A 4C */	lfs f0, 0xa4c(r3)
/* 803A6E84 003A3DC4  28 00 00 00 */	cmplwi r0, 0
/* 803A6E88 003A3DC8  FC 20 00 50 */	fneg f1, f0
/* 803A6E8C 003A3DCC  41 82 00 10 */	beq .L_803A6E9C
/* 803A6E90 003A3DD0  C0 1E 03 3C */	lfs f0, 0x33c(r30)
/* 803A6E94 003A3DD4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803A6E98 003A3DD8  40 80 00 40 */	bge .L_803A6ED8
.L_803A6E9C:
/* 803A6E9C 003A3DDC  7F C3 F3 78 */	mr r3, r30
/* 803A6EA0 003A3DE0  4B D6 08 F5 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 803A6EA4 003A3DE4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 803A6EA8 003A3DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A6EAC 003A3DEC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803A6EB0 003A3DF0  7D 89 03 A6 */	mtctr r12
/* 803A6EB4 003A3DF4  4E 80 04 21 */	bctrl 
/* 803A6EB8 003A3DF8  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 803A6EBC 003A3DFC  38 80 59 7B */	li r4, 0x597b
/* 803A6EC0 003A3E00  38 A0 00 00 */	li r5, 0
/* 803A6EC4 003A3E04  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A6EC8 003A3E08  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A6ECC 003A3E0C  7D 89 03 A6 */	mtctr r12
/* 803A6ED0 003A3E10  4E 80 04 21 */	bctrl 
/* 803A6ED4 003A3E14  48 00 01 38 */	b .L_803A700C
.L_803A6ED8:
/* 803A6ED8 003A3E18  88 1E 03 A9 */	lbz r0, 0x3a9(r30)
/* 803A6EDC 003A3E1C  C3 83 0A 58 */	lfs f28, 0xa58(r3)
/* 803A6EE0 003A3E20  28 00 00 00 */	cmplwi r0, 0
/* 803A6EE4 003A3E24  40 82 01 28 */	bne .L_803A700C
/* 803A6EE8 003A3E28  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 803A6EEC 003A3E2C  40 80 01 20 */	bge .L_803A700C
/* 803A6EF0 003A3E30  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A6EF4 003A3E34  28 03 00 00 */	cmplwi r3, 0
/* 803A6EF8 003A3E38  41 82 00 20 */	beq .L_803A6F18
/* 803A6EFC 003A3E3C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803A6F00 003A3E40  2C 00 00 04 */	cmpwi r0, 4
/* 803A6F04 003A3E44  40 82 00 14 */	bne .L_803A6F18
/* 803A6F08 003A3E48  38 00 00 01 */	li r0, 1
/* 803A6F0C 003A3E4C  98 1E 03 A9 */	stb r0, 0x3a9(r30)
/* 803A6F10 003A3E50  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A6F14 003A3E54  98 03 02 D2 */	stb r0, 0x2d2(r3)
.L_803A6F18:
/* 803A6F18 003A3E58  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803A6F1C 003A3E5C  4B DB 3D 05 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 803A6F20 003A3E60  88 1E 03 A9 */	lbz r0, 0x3a9(r30)
/* 803A6F24 003A3E64  7C 7D 1B 78 */	mr r29, r3
/* 803A6F28 003A3E68  28 00 00 00 */	cmplwi r0, 0
/* 803A6F2C 003A3E6C  40 82 00 D0 */	bne .L_803A6FFC
/* 803A6F30 003A3E70  28 1D 00 00 */	cmplwi r29, 0
/* 803A6F34 003A3E74  41 82 00 C8 */	beq .L_803A6FFC
/* 803A6F38 003A3E78  81 83 00 00 */	lwz r12, 0(r3)
/* 803A6F3C 003A3E7C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803A6F40 003A3E80  7D 89 03 A6 */	mtctr r12
/* 803A6F44 003A3E84  4E 80 04 21 */	bctrl 
/* 803A6F48 003A3E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A6F4C 003A3E8C  41 82 00 B0 */	beq .L_803A6FFC
/* 803A6F50 003A3E90  7F A4 EB 78 */	mr r4, r29
/* 803A6F54 003A3E94  38 61 00 14 */	addi r3, r1, 0x14
/* 803A6F58 003A3E98  81 9D 00 00 */	lwz r12, 0(r29)
/* 803A6F5C 003A3E9C  C3 BE 01 94 */	lfs f29, 0x194(r30)
/* 803A6F60 003A3EA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A6F64 003A3EA4  C3 DE 01 8C */	lfs f30, 0x18c(r30)
/* 803A6F68 003A3EA8  7D 89 03 A6 */	mtctr r12
/* 803A6F6C 003A3EAC  4E 80 04 21 */	bctrl 
/* 803A6F70 003A3EB0  7F A4 EB 78 */	mr r4, r29
/* 803A6F74 003A3EB4  38 61 00 20 */	addi r3, r1, 0x20
/* 803A6F78 003A3EB8  81 9D 00 00 */	lwz r12, 0(r29)
/* 803A6F7C 003A3EBC  C3 E1 00 1C */	lfs f31, 0x1c(r1)
/* 803A6F80 003A3EC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A6F84 003A3EC4  7D 89 03 A6 */	mtctr r12
/* 803A6F88 003A3EC8  4E 80 04 21 */	bctrl 
/* 803A6F8C 003A3ECC  EC 1F E8 28 */	fsubs f0, f31, f29
/* 803A6F90 003A3ED0  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 803A6F94 003A3ED4  7F C3 F3 78 */	mr r3, r30
/* 803A6F98 003A3ED8  EC 21 F0 28 */	fsubs f1, f1, f30
/* 803A6F9C 003A3EDC  EC 00 00 32 */	fmuls f0, f0, f0
/* 803A6FA0 003A3EE0  EF A1 00 7A */	fmadds f29, f1, f1, f0
/* 803A6FA4 003A3EE4  48 00 41 D9 */	bl isFinalFloor__Q34Game8BlackMan3ObjFv
/* 803A6FA8 003A3EE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A6FAC 003A3EEC  41 82 00 24 */	beq .L_803A6FD0
/* 803A6FB0 003A3EF0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803A6FB4 003A3EF4  C0 03 0A 54 */	lfs f0, 0xa54(r3)
/* 803A6FB8 003A3EF8  EC 00 00 32 */	fmuls f0, f0, f0
/* 803A6FBC 003A3EFC  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 803A6FC0 003A3F00  40 80 00 24 */	bge .L_803A6FE4
/* 803A6FC4 003A3F04  38 00 00 01 */	li r0, 1
/* 803A6FC8 003A3F08  98 1E 03 A9 */	stb r0, 0x3a9(r30)
/* 803A6FCC 003A3F0C  48 00 00 18 */	b .L_803A6FE4
.L_803A6FD0:
/* 803A6FD0 003A3F10  C0 02 11 28 */	lfs f0, lbl_8051F488@sda21(r2)
/* 803A6FD4 003A3F14  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 803A6FD8 003A3F18  40 81 00 0C */	ble .L_803A6FE4
/* 803A6FDC 003A3F1C  38 00 00 01 */	li r0, 1
/* 803A6FE0 003A3F20  98 1E 03 A9 */	stb r0, 0x3a9(r30)
.L_803A6FE4:
/* 803A6FE4 003A3F24  88 1E 03 A9 */	lbz r0, 0x3a9(r30)
/* 803A6FE8 003A3F28  28 00 00 00 */	cmplwi r0, 0
/* 803A6FEC 003A3F2C  41 82 00 10 */	beq .L_803A6FFC
/* 803A6FF0 003A3F30  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A6FF4 003A3F34  38 00 00 01 */	li r0, 1
/* 803A6FF8 003A3F38  98 03 02 D2 */	stb r0, 0x2d2(r3)
.L_803A6FFC:
/* 803A6FFC 003A3F3C  88 1E 03 A9 */	lbz r0, 0x3a9(r30)
/* 803A7000 003A3F40  28 00 00 00 */	cmplwi r0, 0
/* 803A7004 003A3F44  40 82 00 08 */	bne .L_803A700C
/* 803A7008 003A3F48  D3 9E 03 3C */	stfs f28, 0x33c(r30)
.L_803A700C:
/* 803A700C 003A3F4C  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A7010 003A3F50  28 03 00 00 */	cmplwi r3, 0
/* 803A7014 003A3F54  41 82 02 90 */	beq .L_803A72A4
/* 803A7018 003A3F58  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 803A701C 003A3F5C  54 00 03 5B */	rlwinm. r0, r0, 0, 0xd, 0xd
/* 803A7020 003A3F60  41 82 02 84 */	beq .L_803A72A4
/* 803A7024 003A3F64  C0 3E 03 3C */	lfs f1, 0x33c(r30)
/* 803A7028 003A3F68  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A702C 003A3F6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A7030 003A3F70  40 80 02 74 */	bge .L_803A72A4
/* 803A7034 003A3F74  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A7038 003A3F78  28 03 00 00 */	cmplwi r3, 0
/* 803A703C 003A3F7C  41 82 02 1C */	beq .L_803A7258
/* 803A7040 003A3F80  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803A7044 003A3F84  2C 00 00 04 */	cmpwi r0, 4
/* 803A7048 003A3F88  41 82 02 10 */	beq .L_803A7258
/* 803A704C 003A3F8C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 803A7050 003A3F90  28 03 00 00 */	cmplwi r3, 0
/* 803A7054 003A3F94  41 82 02 04 */	beq .L_803A7258
/* 803A7058 003A3F98  81 83 00 00 */	lwz r12, 0(r3)
/* 803A705C 003A3F9C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 803A7060 003A3FA0  7D 89 03 A6 */	mtctr r12
/* 803A7064 003A3FA4  4E 80 04 21 */	bctrl 
/* 803A7068 003A3FA8  3C 03 86 A1 */	subis r0, r3, 0x795f
/* 803A706C 003A3FAC  28 00 30 34 */	cmplwi r0, 0x3034
/* 803A7070 003A3FB0  40 82 01 E8 */	bne .L_803A7258
/* 803A7074 003A3FB4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 803A7078 003A3FB8  28 00 00 00 */	cmplwi r0, 0
/* 803A707C 003A3FBC  40 82 00 18 */	bne .L_803A7094
/* 803A7080 003A3FC0  38 7F 00 70 */	addi r3, r31, 0x70
/* 803A7084 003A3FC4  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A7088 003A3FC8  38 80 01 D3 */	li r4, 0x1d3
/* 803A708C 003A3FCC  4C C6 31 82 */	crclr 6
/* 803A7090 003A3FD0  4B C8 35 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A7094:
/* 803A7094 003A3FD4  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 803A7098 003A3FD8  28 1D 00 00 */	cmplwi r29, 0
/* 803A709C 003A3FDC  40 82 00 18 */	bne .L_803A70B4
/* 803A70A0 003A3FE0  38 7F 00 70 */	addi r3, r31, 0x70
/* 803A70A4 003A3FE4  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A70A8 003A3FE8  38 80 01 DC */	li r4, 0x1dc
/* 803A70AC 003A3FEC  4C C6 31 82 */	crclr 6
/* 803A70B0 003A3FF0  4B C8 35 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A70B4:
/* 803A70B4 003A3FF4  80 1D 00 04 */	lwz r0, 4(r29)
/* 803A70B8 003A3FF8  28 00 00 00 */	cmplwi r0, 0
/* 803A70BC 003A3FFC  40 82 00 18 */	bne .L_803A70D4
/* 803A70C0 003A4000  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803A70C4 003A4004  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A70C8 003A4008  38 80 00 C7 */	li r4, 0xc7
/* 803A70CC 003A400C  4C C6 31 82 */	crclr 6
/* 803A70D0 003A4010  4B C8 35 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A70D4:
/* 803A70D4 003A4014  80 7D 00 04 */	lwz r3, 4(r29)
/* 803A70D8 003A4018  83 A3 00 04 */	lwz r29, 4(r3)
/* 803A70DC 003A401C  28 1D 00 00 */	cmplwi r29, 0
/* 803A70E0 003A4020  40 82 00 18 */	bne .L_803A70F8
/* 803A70E4 003A4024  38 7F 00 70 */	addi r3, r31, 0x70
/* 803A70E8 003A4028  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A70EC 003A402C  38 80 01 E5 */	li r4, 0x1e5
/* 803A70F0 003A4030  4C C6 31 82 */	crclr 6
/* 803A70F4 003A4034  4B C8 35 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A70F8:
/* 803A70F8 003A4038  38 7D 00 10 */	addi r3, r29, 0x10
/* 803A70FC 003A403C  38 80 00 00 */	li r4, 0
/* 803A7100 003A4040  4B F8 CD 9D */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 803A7104 003A4044  7C 7D 1B 79 */	or. r29, r3, r3
/* 803A7108 003A4048  40 82 00 18 */	bne .L_803A7120
/* 803A710C 003A404C  38 7F 00 70 */	addi r3, r31, 0x70
/* 803A7110 003A4050  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A7114 003A4054  38 80 01 E7 */	li r4, 0x1e7
/* 803A7118 003A4058  4C C6 31 82 */	crclr 6
/* 803A711C 003A405C  4B C8 35 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A7120:
/* 803A7120 003A4060  28 1D 00 00 */	cmplwi r29, 0
/* 803A7124 003A4064  40 82 00 18 */	bne .L_803A713C
/* 803A7128 003A4068  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A712C 003A406C  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A7130 003A4070  38 80 01 E9 */	li r4, 0x1e9
/* 803A7134 003A4074  4C C6 31 82 */	crclr 6
/* 803A7138 003A4078  4B C8 35 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A713C:
/* 803A713C 003A407C  7F A3 EB 78 */	mr r3, r29
/* 803A7140 003A4080  38 80 00 05 */	li r4, 5
/* 803A7144 003A4084  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 803A7148 003A4088  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803A714C 003A408C  7D 89 03 A6 */	mtctr r12
/* 803A7150 003A4090  4E 80 04 21 */	bctrl 
/* 803A7154 003A4094  7F C3 F3 78 */	mr r3, r30
/* 803A7158 003A4098  48 00 40 25 */	bl isFinalFloor__Q34Game8BlackMan3ObjFv
/* 803A715C 003A409C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A7160 003A40A0  40 82 00 F8 */	bne .L_803A7258
/* 803A7164 003A40A4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803A7168 003A40A8  38 80 00 32 */	li r4, 0x32
/* 803A716C 003A40AC  4B E4 02 75 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 803A7170 003A40B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A7174 003A40B4  40 82 00 E4 */	bne .L_803A7258
/* 803A7178 003A40B8  80 0D 9B 54 */	lwz r0, moviePlayer__4Game@sda21(r13)
/* 803A717C 003A40BC  28 00 00 00 */	cmplwi r0, 0
/* 803A7180 003A40C0  41 82 00 D8 */	beq .L_803A7258
/* 803A7184 003A40C4  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A7188 003A40C8  38 00 00 00 */	li r0, 0
/* 803A718C 003A40CC  38 BF 00 88 */	addi r5, r31, 0x88
/* 803A7190 003A40D0  90 01 00 30 */	stw r0, 0x30(r1)
/* 803A7194 003A40D4  7F C4 F3 78 */	mr r4, r30
/* 803A7198 003A40D8  38 61 00 08 */	addi r3, r1, 8
/* 803A719C 003A40DC  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 803A71A0 003A40E0  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A71A4 003A40E4  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 803A71A8 003A40E8  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 803A71AC 003A40EC  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 803A71B0 003A40F0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 803A71B4 003A40F4  90 01 00 54 */	stw r0, 0x54(r1)
/* 803A71B8 003A40F8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803A71BC 003A40FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803A71C0 003A4100  90 01 00 58 */	stw r0, 0x58(r1)
/* 803A71C4 003A4104  90 01 00 40 */	stw r0, 0x40(r1)
/* 803A71C8 003A4108  90 01 00 5C */	stw r0, 0x5c(r1)
/* 803A71CC 003A410C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A71D0 003A4110  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A71D4 003A4114  7D 89 03 A6 */	mtctr r12
/* 803A71D8 003A4118  4E 80 04 21 */	bctrl 
/* 803A71DC 003A411C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A71E0 003A4120  38 9E 01 8C */	addi r4, r30, 0x18c
/* 803A71E4 003A4124  C3 A1 00 08 */	lfs f29, 8(r1)
/* 803A71E8 003A4128  81 83 00 04 */	lwz r12, 4(r3)
/* 803A71EC 003A412C  C3 C1 00 10 */	lfs f30, 0x10(r1)
/* 803A71F0 003A4130  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803A71F4 003A4134  7D 89 03 A6 */	mtctr r12
/* 803A71F8 003A4138  4E 80 04 21 */	bctrl 
/* 803A71FC 003A413C  D3 A1 00 44 */	stfs f29, 0x44(r1)
/* 803A7200 003A4140  7F C3 F3 78 */	mr r3, r30
/* 803A7204 003A4144  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 803A7208 003A4148  D3 C1 00 4C */	stfs f30, 0x4c(r1)
/* 803A720C 003A414C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A7210 003A4150  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803A7214 003A4154  7D 89 03 A6 */	mtctr r12
/* 803A7218 003A4158  4E 80 04 21 */	bctrl 
/* 803A721C 003A415C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 803A7220 003A4160  38 81 00 2C */	addi r4, r1, 0x2c
/* 803A7224 003A4164  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 803A7228 003A4168  93 C3 01 94 */	stw r30, 0x194(r3)
/* 803A722C 003A416C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 803A7230 003A4170  48 08 57 A1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 803A7234 003A4174  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A7238 003A4178  38 80 00 00 */	li r4, 0
/* 803A723C 003A417C  4B D9 48 15 */	bl movie_begin__Q24Game8CreatureFb
/* 803A7240 003A4180  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803A7244 003A4184  38 80 00 32 */	li r4, 0x32
/* 803A7248 003A4188  4B E4 01 5D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 803A724C 003A418C  38 00 00 01 */	li r0, 1
/* 803A7250 003A4190  98 1E 03 AB */	stb r0, 0x3ab(r30)
/* 803A7254 003A4194  98 1E 03 AA */	stb r0, 0x3aa(r30)
.L_803A7258:
/* 803A7258 003A4198  88 1E 03 AB */	lbz r0, 0x3ab(r30)
/* 803A725C 003A419C  28 00 00 00 */	cmplwi r0, 0
/* 803A7260 003A41A0  40 82 00 24 */	bne .L_803A7284
/* 803A7264 003A41A4  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A7268 003A41A8  38 80 59 7B */	li r4, 0x597b
/* 803A726C 003A41AC  38 A0 00 00 */	li r5, 0
/* 803A7270 003A41B0  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 803A7274 003A41B4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A7278 003A41B8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A727C 003A41BC  7D 89 03 A6 */	mtctr r12
/* 803A7280 003A41C0  4E 80 04 21 */	bctrl 
.L_803A7284:
/* 803A7284 003A41C4  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A7288 003A41C8  4B D6 05 0D */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 803A728C 003A41CC  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A7290 003A41D0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 803A7294 003A41D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7298 003A41D8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803A729C 003A41DC  7D 89 03 A6 */	mtctr r12
/* 803A72A0 003A41E0  4E 80 04 21 */	bctrl 
.L_803A72A4:
/* 803A72A4 003A41E4  88 1E 03 A9 */	lbz r0, 0x3a9(r30)
/* 803A72A8 003A41E8  28 00 00 00 */	cmplwi r0, 0
/* 803A72AC 003A41EC  41 82 00 24 */	beq .L_803A72D0
/* 803A72B0 003A41F0  C0 3E 03 3C */	lfs f1, 0x33c(r30)
/* 803A72B4 003A41F4  C0 02 11 2C */	lfs f0, lbl_8051F48C@sda21(r2)
/* 803A72B8 003A41F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A72BC 003A41FC  40 80 00 14 */	bge .L_803A72D0
/* 803A72C0 003A4200  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A72C4 003A4204  28 03 00 00 */	cmplwi r3, 0
/* 803A72C8 003A4208  41 82 00 08 */	beq .L_803A72D0
/* 803A72CC 003A420C  48 00 74 61 */	bl scaleUpShadow__Q34Game4Tyre3ObjFv
.L_803A72D0:
/* 803A72D0 003A4210  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 803A72D4 003A4214  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 803A72D8 003A4218  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 803A72DC 003A421C  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 803A72E0 003A4220  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 803A72E4 003A4224  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 803A72E8 003A4228  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 803A72EC 003A422C  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 803A72F0 003A4230  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 803A72F4 003A4234  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 803A72F8 003A4238  80 01 01 14 */	lwz r0, 0x114(r1)
/* 803A72FC 003A423C  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 803A7300 003A4240  7C 08 03 A6 */	mtlr r0
/* 803A7304 003A4244  38 21 01 10 */	addi r1, r1, 0x110
/* 803A7308 003A4248  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game8BlackMan3ObjFv

.fn doDirectDraw__Q34Game8BlackMan3ObjFR8Graphics, global
/* 803A730C 003A424C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game8BlackMan3ObjFR8Graphics

.fn doDebugDraw__Q34Game8BlackMan3ObjFR8Graphics, global
/* 803A7310 003A4250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A7314 003A4254  7C 08 02 A6 */	mflr r0
/* 803A7318 003A4258  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A731C 003A425C  4B D5 EB 51 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 803A7320 003A4260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A7324 003A4264  7C 08 03 A6 */	mtlr r0
/* 803A7328 003A4268  38 21 00 10 */	addi r1, r1, 0x10
/* 803A732C 003A426C  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game8BlackMan3ObjFR8Graphics

.fn doSimulation__Q34Game8BlackMan3ObjFf, global
/* 803A7330 003A4270  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803A7334 003A4274  7C 08 02 A6 */	mflr r0
/* 803A7338 003A4278  90 01 00 54 */	stw r0, 0x54(r1)
/* 803A733C 003A427C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803A7340 003A4280  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803A7344 003A4284  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803A7348 003A4288  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803A734C 003A428C  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803A7350 003A4290  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803A7354 003A4294  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A7358 003A4298  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A735C 003A429C  7C 7E 1B 78 */	mr r30, r3
/* 803A7360 003A42A0  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803A7364 003A42A4  28 03 00 00 */	cmplwi r3, 0
/* 803A7368 003A42A8  41 82 00 1C */	beq .L_803A7384
/* 803A736C 003A42AC  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 803A7370 003A42B0  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 803A7374 003A42B4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 803A7378 003A42B8  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 803A737C 003A42BC  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 803A7380 003A42C0  D0 03 02 E8 */	stfs f0, 0x2e8(r3)
.L_803A7384:
/* 803A7384 003A42C4  80 7E 02 E8 */	lwz r3, 0x2e8(r30)
/* 803A7388 003A42C8  38 03 FF FF */	addi r0, r3, -1
/* 803A738C 003A42CC  90 1E 02 E8 */	stw r0, 0x2e8(r30)
/* 803A7390 003A42D0  80 1E 02 E8 */	lwz r0, 0x2e8(r30)
/* 803A7394 003A42D4  2C 00 00 00 */	cmpwi r0, 0
/* 803A7398 003A42D8  40 80 00 0C */	bge .L_803A73A4
/* 803A739C 003A42DC  38 00 00 00 */	li r0, 0
/* 803A73A0 003A42E0  90 1E 02 E8 */	stw r0, 0x2e8(r30)
.L_803A73A4:
/* 803A73A4 003A42E4  7F C3 F3 78 */	mr r3, r30
/* 803A73A8 003A42E8  4B D5 D6 B1 */	bl doSimulation__Q24Game9EnemyBaseFf
/* 803A73AC 003A42EC  7F C3 F3 78 */	mr r3, r30
/* 803A73B0 003A42F0  4B D6 00 45 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A73B4 003A42F4  80 9E 03 64 */	lwz r4, 0x364(r30)
/* 803A73B8 003A42F8  7C 7F 1B 78 */	mr r31, r3
/* 803A73BC 003A42FC  28 04 00 00 */	cmplwi r4, 0
/* 803A73C0 003A4300  41 82 00 B4 */	beq .L_803A7474
/* 803A73C4 003A4304  81 84 00 00 */	lwz r12, 0(r4)
/* 803A73C8 003A4308  38 61 00 08 */	addi r3, r1, 8
/* 803A73CC 003A430C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A73D0 003A4310  7D 89 03 A6 */	mtctr r12
/* 803A73D4 003A4314  4E 80 04 21 */	bctrl 
/* 803A73D8 003A4318  2C 1F 00 05 */	cmpwi r31, 5
/* 803A73DC 003A431C  C3 E1 00 08 */	lfs f31, 8(r1)
/* 803A73E0 003A4320  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 803A73E4 003A4324  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 803A73E8 003A4328  40 82 00 2C */	bne .L_803A7414
/* 803A73EC 003A432C  7F C3 F3 78 */	mr r3, r30
/* 803A73F0 003A4330  4B D5 FF 11 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 803A73F4 003A4334  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A73F8 003A4338  40 82 00 1C */	bne .L_803A7414
/* 803A73FC 003A433C  C0 02 11 38 */	lfs f0, lbl_8051F498@sda21(r2)
/* 803A7400 003A4340  EC 20 F8 2A */	fadds f1, f0, f31
/* 803A7404 003A4344  EC 00 E8 2A */	fadds f0, f0, f29
/* 803A7408 003A4348  D0 3E 01 8C */	stfs f1, 0x18c(r30)
/* 803A740C 003A434C  D0 1E 01 94 */	stfs f0, 0x194(r30)
/* 803A7410 003A4350  48 00 00 10 */	b .L_803A7420
.L_803A7414:
/* 803A7414 003A4354  D3 FE 01 8C */	stfs f31, 0x18c(r30)
/* 803A7418 003A4358  D3 DE 01 90 */	stfs f30, 0x190(r30)
/* 803A741C 003A435C  D3 BE 01 94 */	stfs f29, 0x194(r30)
.L_803A7420:
/* 803A7420 003A4360  2C 1F 00 03 */	cmpwi r31, 3
/* 803A7424 003A4364  41 82 00 50 */	beq .L_803A7474
/* 803A7428 003A4368  2C 1F 00 07 */	cmpwi r31, 7
/* 803A742C 003A436C  41 82 00 48 */	beq .L_803A7474
/* 803A7430 003A4370  2C 1F 00 06 */	cmpwi r31, 6
/* 803A7434 003A4374  41 82 00 40 */	beq .L_803A7474
/* 803A7438 003A4378  2C 1F 00 05 */	cmpwi r31, 5
/* 803A743C 003A437C  41 82 00 38 */	beq .L_803A7474
/* 803A7440 003A4380  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A7444 003A4384  38 9E 01 C8 */	addi r4, r30, 0x1c8
/* 803A7448 003A4388  81 83 00 00 */	lwz r12, 0(r3)
/* 803A744C 003A438C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 803A7450 003A4390  7D 89 03 A6 */	mtctr r12
/* 803A7454 003A4394  4E 80 04 21 */	bctrl 
/* 803A7458 003A4398  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803A745C 003A439C  C0 1E 01 D4 */	lfs f0, 0x1d4(r30)
/* 803A7460 003A43A0  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 803A7464 003A43A4  C0 1E 01 D8 */	lfs f0, 0x1d8(r30)
/* 803A7468 003A43A8  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 803A746C 003A43AC  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 803A7470 003A43B0  D0 03 01 DC */	stfs f0, 0x1dc(r3)
.L_803A7474:
/* 803A7474 003A43B4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803A7478 003A43B8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803A747C 003A43BC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803A7480 003A43C0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803A7484 003A43C4  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803A7488 003A43C8  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803A748C 003A43CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A7490 003A43D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803A7494 003A43D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A7498 003A43D8  7C 08 03 A6 */	mtlr r0
/* 803A749C 003A43DC  38 21 00 50 */	addi r1, r1, 0x50
/* 803A74A0 003A43E0  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game8BlackMan3ObjFf

.fn doAnimationCullingOff__Q34Game8BlackMan3ObjFv, global
/* 803A74A4 003A43E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A74A8 003A43E8  7C 08 02 A6 */	mflr r0
/* 803A74AC 003A43EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A74B0 003A43F0  38 00 00 FF */	li r0, 0xff
/* 803A74B4 003A43F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A74B8 003A43F8  7C 7F 1B 78 */	mr r31, r3
/* 803A74BC 003A43FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A74C0 003A4400  98 01 00 08 */	stb r0, 8(r1)
/* 803A74C4 003A4404  98 01 00 09 */	stb r0, 9(r1)
/* 803A74C8 003A4408  98 01 00 0A */	stb r0, 0xa(r1)
/* 803A74CC 003A440C  98 01 00 0B */	stb r0, 0xb(r1)
/* 803A74D0 003A4410  80 03 02 F0 */	lwz r0, 0x2f0(r3)
/* 803A74D4 003A4414  2C 00 00 00 */	cmpwi r0, 0
/* 803A74D8 003A4418  41 82 00 28 */	beq .L_803A7500
/* 803A74DC 003A441C  80 1F 03 64 */	lwz r0, 0x364(r31)
/* 803A74E0 003A4420  28 00 00 00 */	cmplwi r0, 0
/* 803A74E4 003A4424  41 82 00 1C */	beq .L_803A7500
/* 803A74E8 003A4428  88 1F 03 80 */	lbz r0, 0x380(r31)
/* 803A74EC 003A442C  98 01 00 08 */	stb r0, 8(r1)
/* 803A74F0 003A4430  88 1F 03 81 */	lbz r0, 0x381(r31)
/* 803A74F4 003A4434  98 01 00 09 */	stb r0, 9(r1)
/* 803A74F8 003A4438  88 1F 03 82 */	lbz r0, 0x382(r31)
/* 803A74FC 003A443C  98 01 00 0A */	stb r0, 0xa(r1)
.L_803A7500:
/* 803A7500 003A4440  80 7F 03 90 */	lwz r3, 0x390(r31)
/* 803A7504 003A4444  38 81 00 08 */	addi r4, r1, 8
/* 803A7508 003A4448  48 04 41 1D */	bl setGlobalPrmColor__Q23efx9TKageMoveFR6Color4
/* 803A750C 003A444C  80 7F 03 94 */	lwz r3, 0x394(r31)
/* 803A7510 003A4450  38 81 00 08 */	addi r4, r1, 8
/* 803A7514 003A4454  48 04 41 41 */	bl setGlobalPrmColor__Q23efx8TKageRunFR6Color4
/* 803A7518 003A4458  80 7F 03 9C */	lwz r3, 0x39c(r31)
/* 803A751C 003A445C  38 81 00 08 */	addi r4, r1, 8
/* 803A7520 003A4460  48 04 41 65 */	bl setGlobalPrmColor__Q23efx10TKageDead1FR6Color4
/* 803A7524 003A4464  A0 1F 03 6A */	lhz r0, 0x36a(r31)
/* 803A7528 003A4468  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803A752C 003A446C  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803A7530 003A4470  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803A7534 003A4474  7C 63 02 14 */	add r3, r3, r0
/* 803A7538 003A4478  48 08 23 69 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803A753C 003A447C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803A7540 003A4480  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803A7544 003A4484  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803A7548 003A4488  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 803A754C 003A448C  D0 3F 03 08 */	stfs f1, 0x308(r31)
/* 803A7550 003A4490  D0 5F 03 0C */	stfs f2, 0x30c(r31)
/* 803A7554 003A4494  A0 1F 03 6C */	lhz r0, 0x36c(r31)
/* 803A7558 003A4498  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803A755C 003A449C  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803A7560 003A44A0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803A7564 003A44A4  7C 63 02 14 */	add r3, r3, r0
/* 803A7568 003A44A8  48 08 23 39 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803A756C 003A44AC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803A7570 003A44B0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803A7574 003A44B4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803A7578 003A44B8  D0 1F 03 10 */	stfs f0, 0x310(r31)
/* 803A757C 003A44BC  D0 3F 03 14 */	stfs f1, 0x314(r31)
/* 803A7580 003A44C0  D0 5F 03 18 */	stfs f2, 0x318(r31)
/* 803A7584 003A44C4  A0 1F 03 6E */	lhz r0, 0x36e(r31)
/* 803A7588 003A44C8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803A758C 003A44CC  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803A7590 003A44D0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803A7594 003A44D4  7C 63 02 14 */	add r3, r3, r0
/* 803A7598 003A44D8  48 08 23 09 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803A759C 003A44DC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803A75A0 003A44E0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803A75A4 003A44E4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803A75A8 003A44E8  D0 1F 03 1C */	stfs f0, 0x31c(r31)
/* 803A75AC 003A44EC  D0 3F 03 20 */	stfs f1, 0x320(r31)
/* 803A75B0 003A44F0  D0 5F 03 24 */	stfs f2, 0x324(r31)
/* 803A75B4 003A44F4  80 1F 03 64 */	lwz r0, 0x364(r31)
/* 803A75B8 003A44F8  28 00 00 00 */	cmplwi r0, 0
/* 803A75BC 003A44FC  41 82 00 44 */	beq .L_803A7600
/* 803A75C0 003A4500  7F E3 FB 78 */	mr r3, r31
/* 803A75C4 003A4504  4B D5 FE 31 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A75C8 003A4508  2C 03 00 05 */	cmpwi r3, 5
/* 803A75CC 003A450C  41 82 00 18 */	beq .L_803A75E4
/* 803A75D0 003A4510  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A75D4 003A4514  88 03 0A 14 */	lbz r0, 0xa14(r3)
/* 803A75D8 003A4518  28 00 00 00 */	cmplwi r0, 0
/* 803A75DC 003A451C  41 82 00 08 */	beq .L_803A75E4
/* 803A75E0 003A4520  93 ED 99 E0 */	stw r31, curB__Q24Game8BlackMan@sda21(r13)
.L_803A75E4:
/* 803A75E4 003A4524  7F E3 FB 78 */	mr r3, r31
/* 803A75E8 003A4528  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A75EC 003A452C  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 803A75F0 003A4530  7D 89 03 A6 */	mtctr r12
/* 803A75F4 003A4534  4E 80 04 21 */	bctrl 
/* 803A75F8 003A4538  80 9F 03 64 */	lwz r4, 0x364(r31)
/* 803A75FC 003A453C  98 64 02 D1 */	stb r3, 0x2d1(r4)
.L_803A7600:
/* 803A7600 003A4540  7F E3 FB 78 */	mr r3, r31
/* 803A7604 003A4544  4B D5 BA 7D */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 803A7608 003A4548  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A760C 003A454C  38 00 00 00 */	li r0, 0
/* 803A7610 003A4550  90 0D 99 E0 */	stw r0, curB__Q24Game8BlackMan@sda21(r13)
/* 803A7614 003A4554  28 03 00 00 */	cmplwi r3, 0
/* 803A7618 003A4558  41 82 00 10 */	beq .L_803A7628
/* 803A761C 003A455C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803A7620 003A4560  2C 00 00 04 */	cmpwi r0, 4
/* 803A7624 003A4564  41 82 00 A0 */	beq .L_803A76C4
.L_803A7628:
/* 803A7628 003A4568  83 DF 02 8C */	lwz r30, 0x28c(r31)
/* 803A762C 003A456C  7F C3 F3 78 */	mr r3, r30
/* 803A7630 003A4570  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 803A7634 003A4574  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A7638 003A4578  7D 89 03 A6 */	mtctr r12
/* 803A763C 003A457C  4E 80 04 21 */	bctrl 
/* 803A7640 003A4580  2C 03 00 06 */	cmpwi r3, 6
/* 803A7644 003A4584  41 82 00 20 */	beq .L_803A7664
/* 803A7648 003A4588  3C 60 80 49 */	lis r3, lbl_804956BC@ha
/* 803A764C 003A458C  3C A0 80 49 */	lis r5, lbl_80495698@ha
/* 803A7650 003A4590  38 63 56 BC */	addi r3, r3, lbl_804956BC@l
/* 803A7654 003A4594  38 80 04 5A */	li r4, 0x45a
/* 803A7658 003A4598  38 A5 56 98 */	addi r5, r5, lbl_80495698@l
/* 803A765C 003A459C  4C C6 31 82 */	crclr 6
/* 803A7660 003A45A0  4B C8 2F E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A7664:
/* 803A7664 003A45A4  28 1E 00 00 */	cmplwi r30, 0
/* 803A7668 003A45A8  41 82 00 5C */	beq .L_803A76C4
/* 803A766C 003A45AC  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 803A7670 003A45B0  28 00 00 00 */	cmplwi r0, 0
/* 803A7674 003A45B4  40 82 00 1C */	bne .L_803A7690
/* 803A7678 003A45B8  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A767C 003A45BC  28 03 00 00 */	cmplwi r3, 0
/* 803A7680 003A45C0  41 82 00 2C */	beq .L_803A76AC
/* 803A7684 003A45C4  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 803A7688 003A45C8  28 00 00 00 */	cmplwi r0, 0
/* 803A768C 003A45CC  41 82 00 20 */	beq .L_803A76AC
.L_803A7690:
/* 803A7690 003A45D0  7F C3 F3 78 */	mr r3, r30
/* 803A7694 003A45D4  38 80 00 01 */	li r4, 1
/* 803A7698 003A45D8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 803A769C 003A45DC  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 803A76A0 003A45E0  7D 89 03 A6 */	mtctr r12
/* 803A76A4 003A45E4  4E 80 04 21 */	bctrl 
/* 803A76A8 003A45E8  48 00 00 1C */	b .L_803A76C4
.L_803A76AC:
/* 803A76AC 003A45EC  7F C3 F3 78 */	mr r3, r30
/* 803A76B0 003A45F0  38 80 00 01 */	li r4, 1
/* 803A76B4 003A45F4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 803A76B8 003A45F8  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 803A76BC 003A45FC  7D 89 03 A6 */	mtctr r12
/* 803A76C0 003A4600  4E 80 04 21 */	bctrl 
.L_803A76C4:
/* 803A76C4 003A4604  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A76C8 003A4608  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A76CC 003A460C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A76D0 003A4610  7C 08 03 A6 */	mtlr r0
/* 803A76D4 003A4614  38 21 00 20 */	addi r1, r1, 0x20
/* 803A76D8 003A4618  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game8BlackMan3ObjFv

.fn onKill__Q34Game8BlackMan3ObjFPQ24Game15CreatureKillArg, global
/* 803A76DC 003A461C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A76E0 003A4620  7C 08 02 A6 */	mflr r0
/* 803A76E4 003A4624  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A76E8 003A4628  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A76EC 003A462C  7C 7F 1B 78 */	mr r31, r3
/* 803A76F0 003A4630  4B D5 A7 F9 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 803A76F4 003A4634  7F E3 FB 78 */	mr r3, r31
/* 803A76F8 003A4638  48 00 27 45 */	bl releasePathFinder__Q34Game8BlackMan3ObjFv
/* 803A76FC 003A463C  7F E3 FB 78 */	mr r3, r31
/* 803A7700 003A4640  48 00 3A 2D */	bl fadeFlickEffect__Q34Game8BlackMan3ObjFv
/* 803A7704 003A4644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A7708 003A4648  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A770C 003A464C  7C 08 03 A6 */	mtlr r0
/* 803A7710 003A4650  38 21 00 10 */	addi r1, r1, 0x10
/* 803A7714 003A4654  4E 80 00 20 */	blr 
.endfn onKill__Q34Game8BlackMan3ObjFPQ24Game15CreatureKillArg

.fn doStartStoneState__Q34Game8BlackMan3ObjFv, global
/* 803A7718 003A4658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A771C 003A465C  7C 08 02 A6 */	mflr r0
/* 803A7720 003A4660  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A7724 003A4664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A7728 003A4668  7C 7F 1B 78 */	mr r31, r3
/* 803A772C 003A466C  4B D5 B7 C9 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 803A7730 003A4670  7F E3 FB 78 */	mr r3, r31
/* 803A7734 003A4674  4B D5 FC C1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7738 003A4678  2C 03 00 05 */	cmpwi r3, 5
/* 803A773C 003A467C  41 82 00 20 */	beq .L_803A775C
/* 803A7740 003A4680  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A7744 003A4684  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803A7748 003A4688  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803A774C 003A468C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803A7750 003A4690  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803A7754 003A4694  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803A7758 003A4698  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_803A775C:
/* 803A775C 003A469C  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A7760 003A46A0  28 03 00 00 */	cmplwi r3, 0
/* 803A7764 003A46A4  41 82 00 0C */	beq .L_803A7770
/* 803A7768 003A46A8  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A776C 003A46AC  D0 03 03 0C */	stfs f0, 0x30c(r3)
.L_803A7770:
/* 803A7770 003A46B0  3C 80 6B 6F */	lis r4, 0x6B6F7369@ha
/* 803A7774 003A46B4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A7778 003A46B8  38 84 73 69 */	addi r4, r4, 0x6B6F7369@l
/* 803A777C 003A46BC  4B D8 E6 C9 */	bl getCollPart__8CollTreeFUl
/* 803A7780 003A46C0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803A7784 003A46C4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A7788 003A46C8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803A778C 003A46CC  48 06 BC 79 */	bl __as__4ID32FUl
/* 803A7790 003A46D0  3C 80 6D 75 */	lis r4, 0x6D756E65@ha
/* 803A7794 003A46D4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A7798 003A46D8  38 84 6E 65 */	addi r4, r4, 0x6D756E65@l
/* 803A779C 003A46DC  4B D8 E6 A9 */	bl getCollPart__8CollTreeFUl
/* 803A77A0 003A46E0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803A77A4 003A46E4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A77A8 003A46E8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803A77AC 003A46EC  48 06 BC 59 */	bl __as__4ID32FUl
/* 803A77B0 003A46F0  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 803A77B4 003A46F4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A77B8 003A46F8  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 803A77BC 003A46FC  4B D8 E6 89 */	bl getCollPart__8CollTreeFUl
/* 803A77C0 003A4700  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803A77C4 003A4704  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A77C8 003A4708  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803A77CC 003A470C  48 06 BC 39 */	bl __as__4ID32FUl
/* 803A77D0 003A4710  7F E3 FB 78 */	mr r3, r31
/* 803A77D4 003A4714  48 00 38 B1 */	bl fadeTraceEffect__Q34Game8BlackMan3ObjFv
/* 803A77D8 003A4718  7F E3 FB 78 */	mr r3, r31
/* 803A77DC 003A471C  48 00 39 51 */	bl fadeFlickEffect__Q34Game8BlackMan3ObjFv
/* 803A77E0 003A4720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A77E4 003A4724  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A77E8 003A4728  7C 08 03 A6 */	mtlr r0
/* 803A77EC 003A472C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A77F0 003A4730  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game8BlackMan3ObjFv

.fn doFinishStoneState__Q34Game8BlackMan3ObjFv, global
/* 803A77F4 003A4734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A77F8 003A4738  7C 08 02 A6 */	mflr r0
/* 803A77FC 003A473C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A7800 003A4740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A7804 003A4744  7C 7F 1B 78 */	mr r31, r3
/* 803A7808 003A4748  4B D5 B7 01 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 803A780C 003A474C  7F E3 FB 78 */	mr r3, r31
/* 803A7810 003A4750  4B D5 FB E5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7814 003A4754  2C 03 00 02 */	cmpwi r3, 2
/* 803A7818 003A4758  41 82 00 74 */	beq .L_803A788C
/* 803A781C 003A475C  7F E3 FB 78 */	mr r3, r31
/* 803A7820 003A4760  4B D5 FB D5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7824 003A4764  2C 03 00 03 */	cmpwi r3, 3
/* 803A7828 003A4768  41 82 00 64 */	beq .L_803A788C
/* 803A782C 003A476C  3C 80 6B 6F */	lis r4, 0x6B6F7369@ha
/* 803A7830 003A4770  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A7834 003A4774  38 84 73 69 */	addi r4, r4, 0x6B6F7369@l
/* 803A7838 003A4778  4B D8 E6 0D */	bl getCollPart__8CollTreeFUl
/* 803A783C 003A477C  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803A7840 003A4780  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A7844 003A4784  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803A7848 003A4788  48 06 BB BD */	bl __as__4ID32FUl
/* 803A784C 003A478C  3C 80 6D 75 */	lis r4, 0x6D756E65@ha
/* 803A7850 003A4790  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A7854 003A4794  38 84 6E 65 */	addi r4, r4, 0x6D756E65@l
/* 803A7858 003A4798  4B D8 E5 ED */	bl getCollPart__8CollTreeFUl
/* 803A785C 003A479C  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803A7860 003A47A0  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A7864 003A47A4  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803A7868 003A47A8  48 06 BB 9D */	bl __as__4ID32FUl
/* 803A786C 003A47AC  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 803A7870 003A47B0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803A7874 003A47B4  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 803A7878 003A47B8  4B D8 E5 CD */	bl getCollPart__8CollTreeFUl
/* 803A787C 003A47BC  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803A7880 003A47C0  38 63 00 3C */	addi r3, r3, 0x3c
/* 803A7884 003A47C4  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803A7888 003A47C8  48 06 BB 7D */	bl __as__4ID32FUl
.L_803A788C:
/* 803A788C 003A47CC  7F E3 FB 78 */	mr r3, r31
/* 803A7890 003A47D0  48 00 32 7D */	bl flick__Q34Game8BlackMan3ObjFv
/* 803A7894 003A47D4  7F E3 FB 78 */	mr r3, r31
/* 803A7898 003A47D8  48 00 37 ED */	bl fadeTraceEffect__Q34Game8BlackMan3ObjFv
/* 803A789C 003A47DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A78A0 003A47E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A78A4 003A47E4  7C 08 03 A6 */	mtlr r0
/* 803A78A8 003A47E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A78AC 003A47EC  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game8BlackMan3ObjFv

.fn isUnderground__Q34Game8BlackMan3ObjFv, global
/* 803A78B0 003A47F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A78B4 003A47F4  7C 08 02 A6 */	mflr r0
/* 803A78B8 003A47F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A78BC 003A47FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A78C0 003A4800  7C 7F 1B 78 */	mr r31, r3
/* 803A78C4 003A4804  4B D5 FB 31 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A78C8 003A4808  38 03 FF FE */	addi r0, r3, -2
/* 803A78CC 003A480C  28 00 00 01 */	cmplwi r0, 1
/* 803A78D0 003A4810  40 81 00 18 */	ble .L_803A78E8
/* 803A78D4 003A4814  2C 03 00 08 */	cmpwi r3, 8
/* 803A78D8 003A4818  41 82 00 10 */	beq .L_803A78E8
/* 803A78DC 003A481C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803A78E0 003A4820  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A78E4 003A4824  41 82 00 0C */	beq .L_803A78F0
.L_803A78E8:
/* 803A78E8 003A4828  38 60 00 00 */	li r3, 0
/* 803A78EC 003A482C  48 00 00 08 */	b .L_803A78F4
.L_803A78F0:
/* 803A78F0 003A4830  38 60 00 01 */	li r3, 1
.L_803A78F4:
/* 803A78F4 003A4834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A78F8 003A4838  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A78FC 003A483C  7C 08 03 A6 */	mtlr r0
/* 803A7900 003A4840  38 21 00 10 */	addi r1, r1, 0x10
/* 803A7904 003A4844  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game8BlackMan3ObjFv

.fn doGetLifeGaugeParam__Q34Game8BlackMan3ObjFRQ24Game14LifeGaugeParam, global
/* 803A7908 003A4848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A790C 003A484C  7C 08 02 A6 */	mflr r0
/* 803A7910 003A4850  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A7914 003A4854  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A7918 003A4858  7C 9F 23 78 */	mr r31, r4
/* 803A791C 003A485C  93 C1 00 08 */	stw r30, 8(r1)
/* 803A7920 003A4860  7C 7E 1B 78 */	mr r30, r3
/* 803A7924 003A4864  4B D5 E5 CD */	bl doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
/* 803A7928 003A4868  80 1E 03 64 */	lwz r0, 0x364(r30)
/* 803A792C 003A486C  28 00 00 00 */	cmplwi r0, 0
/* 803A7930 003A4870  41 82 00 10 */	beq .L_803A7940
/* 803A7934 003A4874  80 1E 02 E0 */	lwz r0, 0x2e0(r30)
/* 803A7938 003A4878  2C 00 00 02 */	cmpwi r0, 2
/* 803A793C 003A487C  40 82 00 0C */	bne .L_803A7948
.L_803A7940:
/* 803A7940 003A4880  38 00 00 00 */	li r0, 0
/* 803A7944 003A4884  48 00 00 08 */	b .L_803A794C
.L_803A7948:
/* 803A7948 003A4888  38 00 00 01 */	li r0, 1
.L_803A794C:
/* 803A794C 003A488C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803A7950 003A4890  41 82 00 44 */	beq .L_803A7994
/* 803A7954 003A4894  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 803A7958 003A4898  A0 1E 03 68 */	lhz r0, 0x368(r30)
/* 803A795C 003A489C  80 83 00 08 */	lwz r4, 8(r3)
/* 803A7960 003A48A0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803A7964 003A48A4  1C 00 00 30 */	mulli r0, r0, 0x30
/* 803A7968 003A48A8  80 84 00 84 */	lwz r4, 0x84(r4)
/* 803A796C 003A48AC  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 803A7970 003A48B0  80 84 00 0C */	lwz r4, 0xc(r4)
/* 803A7974 003A48B4  C0 03 01 2C */	lfs f0, 0x12c(r3)
/* 803A7978 003A48B8  7C 64 02 14 */	add r3, r4, r0
/* 803A797C 003A48BC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803A7980 003A48C0  EC 21 00 2A */	fadds f1, f1, f0
/* 803A7984 003A48C4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803A7988 003A48C8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 803A798C 003A48CC  D0 3F 00 04 */	stfs f1, 4(r31)
/* 803A7990 003A48D0  D0 5F 00 08 */	stfs f2, 8(r31)
.L_803A7994:
/* 803A7994 003A48D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A7998 003A48D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A799C 003A48DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A79A0 003A48E0  7C 08 03 A6 */	mtlr r0
/* 803A79A4 003A48E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803A79A8 003A48E8  4E 80 00 20 */	blr 
.endfn doGetLifeGaugeParam__Q34Game8BlackMan3ObjFRQ24Game14LifeGaugeParam

.fn collisionCallback__Q34Game8BlackMan3ObjFRQ24Game9CollEvent, global
/* 803A79AC 003A48EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803A79B0 003A48F0  7C 08 02 A6 */	mflr r0
/* 803A79B4 003A48F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 803A79B8 003A48F8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803A79BC 003A48FC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803A79C0 003A4900  93 A1 00 34 */	stw r29, 0x34(r1)
/* 803A79C4 003A4904  7C 9D 23 78 */	mr r29, r4
/* 803A79C8 003A4908  93 81 00 30 */	stw r28, 0x30(r1)
/* 803A79CC 003A490C  7C 7C 1B 78 */	mr r28, r3
/* 803A79D0 003A4910  83 C4 00 00 */	lwz r30, 0(r4)
/* 803A79D4 003A4914  4B D5 FA 21 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A79D8 003A4918  7C 7F 1B 78 */	mr r31, r3
/* 803A79DC 003A491C  2C 1F 00 03 */	cmpwi r31, 3
/* 803A79E0 003A4920  41 82 01 04 */	beq .L_803A7AE4
/* 803A79E4 003A4924  2C 1F 00 02 */	cmpwi r31, 2
/* 803A79E8 003A4928  41 82 00 FC */	beq .L_803A7AE4
/* 803A79EC 003A492C  80 1C 01 E0 */	lwz r0, 0x1e0(r28)
/* 803A79F0 003A4930  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A79F4 003A4934  40 82 00 F0 */	bne .L_803A7AE4
/* 803A79F8 003A4938  28 1E 00 00 */	cmplwi r30, 0
/* 803A79FC 003A493C  41 82 00 E8 */	beq .L_803A7AE4
/* 803A7A00 003A4940  7F C3 F3 78 */	mr r3, r30
/* 803A7A04 003A4944  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A7A08 003A4948  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803A7A0C 003A494C  7D 89 03 A6 */	mtctr r12
/* 803A7A10 003A4950  4E 80 04 21 */	bctrl 
/* 803A7A14 003A4954  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A7A18 003A4958  41 82 00 CC */	beq .L_803A7AE4
/* 803A7A1C 003A495C  7F C4 F3 78 */	mr r4, r30
/* 803A7A20 003A4960  38 61 00 08 */	addi r3, r1, 8
/* 803A7A24 003A4964  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A7A28 003A4968  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A7A2C 003A496C  7D 89 03 A6 */	mtctr r12
/* 803A7A30 003A4970  4E 80 04 21 */	bctrl 
/* 803A7A34 003A4974  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 803A7A38 003A4978  7F C4 F3 78 */	mr r4, r30
/* 803A7A3C 003A497C  2C 00 00 03 */	cmpwi r0, 3
/* 803A7A40 003A4980  41 82 00 74 */	beq .L_803A7AB4
/* 803A7A44 003A4984  80 BC 00 C0 */	lwz r5, 0xc0(r28)
/* 803A7A48 003A4988  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 803A7A4C 003A498C  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 803A7A50 003A4990  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A7A54 003A4994  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 803A7A58 003A4998  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 803A7A5C 003A499C  C0 02 11 3C */	lfs f0, lbl_8051F49C@sda21(r2)
/* 803A7A60 003A49A0  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 803A7A64 003A49A4  90 81 00 14 */	stw r4, 0x14(r1)
/* 803A7A68 003A49A8  7F C3 F3 78 */	mr r3, r30
/* 803A7A6C 003A49AC  38 81 00 14 */	addi r4, r1, 0x14
/* 803A7A70 003A49B0  93 81 00 18 */	stw r28, 0x18(r1)
/* 803A7A74 003A49B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A7A78 003A49B8  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 803A7A7C 003A49BC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803A7A80 003A49C0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803A7A84 003A49C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A7A88 003A49C8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803A7A8C 003A49CC  7D 89 03 A6 */	mtctr r12
/* 803A7A90 003A49D0  4E 80 04 21 */	bctrl 
/* 803A7A94 003A49D4  80 7C 02 8C */	lwz r3, 0x28c(r28)
/* 803A7A98 003A49D8  38 80 59 77 */	li r4, 0x5977
/* 803A7A9C 003A49DC  38 A0 00 00 */	li r5, 0
/* 803A7AA0 003A49E0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A7AA4 003A49E4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A7AA8 003A49E8  7D 89 03 A6 */	mtctr r12
/* 803A7AAC 003A49EC  4E 80 04 21 */	bctrl 
/* 803A7AB0 003A49F0  48 00 00 34 */	b .L_803A7AE4
.L_803A7AB4:
/* 803A7AB4 003A49F4  2C 1F 00 00 */	cmpwi r31, 0
/* 803A7AB8 003A49F8  41 82 00 0C */	beq .L_803A7AC4
/* 803A7ABC 003A49FC  2C 1F 00 08 */	cmpwi r31, 8
/* 803A7AC0 003A4A00  40 82 00 24 */	bne .L_803A7AE4
.L_803A7AC4:
/* 803A7AC4 003A4A04  80 7C 03 64 */	lwz r3, 0x364(r28)
/* 803A7AC8 003A4A08  28 03 00 00 */	cmplwi r3, 0
/* 803A7ACC 003A4A0C  41 82 00 18 */	beq .L_803A7AE4
/* 803A7AD0 003A4A10  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7AD4 003A4A14  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A7AD8 003A4A18  81 8C 02 8C */	lwz r12, 0x28c(r12)
/* 803A7ADC 003A4A1C  7D 89 03 A6 */	mtctr r12
/* 803A7AE0 003A4A20  4E 80 04 21 */	bctrl 
.L_803A7AE4:
/* 803A7AE4 003A4A24  7F C3 F3 78 */	mr r3, r30
/* 803A7AE8 003A4A28  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A7AEC 003A4A2C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803A7AF0 003A4A30  7D 89 03 A6 */	mtctr r12
/* 803A7AF4 003A4A34  4E 80 04 21 */	bctrl 
/* 803A7AF8 003A4A38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A7AFC 003A4A3C  41 82 00 30 */	beq .L_803A7B2C
/* 803A7B00 003A4A40  7F C3 F3 78 */	mr r3, r30
/* 803A7B04 003A4A44  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A7B08 003A4A48  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 803A7B0C 003A4A4C  7D 89 03 A6 */	mtctr r12
/* 803A7B10 003A4A50  4E 80 04 21 */	bctrl 
/* 803A7B14 003A4A54  2C 03 00 62 */	cmpwi r3, 0x62
/* 803A7B18 003A4A58  40 82 00 14 */	bne .L_803A7B2C
/* 803A7B1C 003A4A5C  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A7B20 003A4A60  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 803A7B24 003A4A64  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 803A7B28 003A4A68  D0 1C 01 24 */	stfs f0, 0x124(r28)
.L_803A7B2C:
/* 803A7B2C 003A4A6C  80 1C 02 E0 */	lwz r0, 0x2e0(r28)
/* 803A7B30 003A4A70  2C 00 00 02 */	cmpwi r0, 2
/* 803A7B34 003A4A74  41 82 00 10 */	beq .L_803A7B44
/* 803A7B38 003A4A78  7F 83 E3 78 */	mr r3, r28
/* 803A7B3C 003A4A7C  7F A4 EB 78 */	mr r4, r29
/* 803A7B40 003A4A80  4B D5 EA D1 */	bl collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
.L_803A7B44:
/* 803A7B44 003A4A84  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803A7B48 003A4A88  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803A7B4C 003A4A8C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803A7B50 003A4A90  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 803A7B54 003A4A94  83 81 00 30 */	lwz r28, 0x30(r1)
/* 803A7B58 003A4A98  7C 08 03 A6 */	mtlr r0
/* 803A7B5C 003A4A9C  38 21 00 40 */	addi r1, r1, 0x40
/* 803A7B60 003A4AA0  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game8BlackMan3ObjFRQ24Game9CollEvent

.fn damageCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart, global
/* 803A7B64 003A4AA4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803A7B68 003A4AA8  7C 08 02 A6 */	mflr r0
/* 803A7B6C 003A4AAC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803A7B70 003A4AB0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803A7B74 003A4AB4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803A7B78 003A4AB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A7B7C 003A4ABC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A7B80 003A4AC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A7B84 003A4AC4  93 81 00 10 */	stw r28, 0x10(r1)
/* 803A7B88 003A4AC8  FF E0 08 90 */	fmr f31, f1
/* 803A7B8C 003A4ACC  7C 7C 1B 78 */	mr r28, r3
/* 803A7B90 003A4AD0  7C 9D 23 78 */	mr r29, r4
/* 803A7B94 003A4AD4  7C BE 2B 78 */	mr r30, r5
/* 803A7B98 003A4AD8  4B D5 F8 5D */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7B9C 003A4ADC  7C 7F 1B 78 */	mr r31, r3
/* 803A7BA0 003A4AE0  2C 1F 00 08 */	cmpwi r31, 8
/* 803A7BA4 003A4AE4  40 82 00 78 */	bne .L_803A7C1C
/* 803A7BA8 003A4AE8  7F A3 EB 78 */	mr r3, r29
/* 803A7BAC 003A4AEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 803A7BB0 003A4AF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803A7BB4 003A4AF4  7D 89 03 A6 */	mtctr r12
/* 803A7BB8 003A4AF8  4E 80 04 21 */	bctrl 
/* 803A7BBC 003A4AFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A7BC0 003A4B00  41 82 00 5C */	beq .L_803A7C1C
/* 803A7BC4 003A4B04  88 1D 02 B8 */	lbz r0, 0x2b8(r29)
/* 803A7BC8 003A4B08  2C 00 00 03 */	cmpwi r0, 3
/* 803A7BCC 003A4B0C  40 82 00 50 */	bne .L_803A7C1C
/* 803A7BD0 003A4B10  80 1D 00 C8 */	lwz r0, 0xc8(r29)
/* 803A7BD4 003A4B14  28 00 00 00 */	cmplwi r0, 0
/* 803A7BD8 003A4B18  40 82 00 44 */	bne .L_803A7C1C
/* 803A7BDC 003A4B1C  38 00 00 00 */	li r0, 0
/* 803A7BE0 003A4B20  7F 84 E3 78 */	mr r4, r28
/* 803A7BE4 003A4B24  90 1C 02 CC */	stw r0, 0x2cc(r28)
/* 803A7BE8 003A4B28  38 A0 00 02 */	li r5, 2
/* 803A7BEC 003A4B2C  38 C0 00 00 */	li r6, 0
/* 803A7BF0 003A4B30  80 7C 03 60 */	lwz r3, 0x360(r28)
/* 803A7BF4 003A4B34  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7BF8 003A4B38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A7BFC 003A4B3C  7D 89 03 A6 */	mtctr r12
/* 803A7C00 003A4B40  4E 80 04 21 */	bctrl 
/* 803A7C04 003A4B44  FC 20 F8 90 */	fmr f1, f31
/* 803A7C08 003A4B48  7F 83 E3 78 */	mr r3, r28
/* 803A7C0C 003A4B4C  7F A4 EB 78 */	mr r4, r29
/* 803A7C10 003A4B50  7F C5 F3 78 */	mr r5, r30
/* 803A7C14 003A4B54  4B D5 E4 59 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 803A7C18 003A4B58  48 00 00 90 */	b .L_803A7CA8
.L_803A7C1C:
/* 803A7C1C 003A4B5C  38 1F FF FE */	addi r0, r31, -2
/* 803A7C20 003A4B60  28 00 00 01 */	cmplwi r0, 1
/* 803A7C24 003A4B64  40 81 00 10 */	ble .L_803A7C34
/* 803A7C28 003A4B68  80 1C 01 E0 */	lwz r0, 0x1e0(r28)
/* 803A7C2C 003A4B6C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A7C30 003A4B70  41 82 00 74 */	beq .L_803A7CA4
.L_803A7C34:
/* 803A7C34 003A4B74  80 1C 01 E0 */	lwz r0, 0x1e0(r28)
/* 803A7C38 003A4B78  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A7C3C 003A4B7C  41 82 00 0C */	beq .L_803A7C48
/* 803A7C40 003A4B80  38 60 00 00 */	li r3, 0
/* 803A7C44 003A4B84  48 00 00 64 */	b .L_803A7CA8
.L_803A7C48:
/* 803A7C48 003A4B88  80 1C 03 64 */	lwz r0, 0x364(r28)
/* 803A7C4C 003A4B8C  28 00 00 00 */	cmplwi r0, 0
/* 803A7C50 003A4B90  41 82 00 3C */	beq .L_803A7C8C
/* 803A7C54 003A4B94  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A7C58 003A4B98  7F 83 E3 78 */	mr r3, r28
/* 803A7C5C 003A4B9C  7F A4 EB 78 */	mr r4, r29
/* 803A7C60 003A4BA0  38 A0 00 00 */	li r5, 0
/* 803A7C64 003A4BA4  4B D5 E4 09 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 803A7C68 003A4BA8  80 7C 03 64 */	lwz r3, 0x364(r28)
/* 803A7C6C 003A4BAC  FC 20 F8 90 */	fmr f1, f31
/* 803A7C70 003A4BB0  7F A4 EB 78 */	mr r4, r29
/* 803A7C74 003A4BB4  7F C5 F3 78 */	mr r5, r30
/* 803A7C78 003A4BB8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7C7C 003A4BBC  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 803A7C80 003A4BC0  7D 89 03 A6 */	mtctr r12
/* 803A7C84 003A4BC4  4E 80 04 21 */	bctrl 
/* 803A7C88 003A4BC8  48 00 00 20 */	b .L_803A7CA8
.L_803A7C8C:
/* 803A7C8C 003A4BCC  FC 20 F8 90 */	fmr f1, f31
/* 803A7C90 003A4BD0  7F 83 E3 78 */	mr r3, r28
/* 803A7C94 003A4BD4  7F A4 EB 78 */	mr r4, r29
/* 803A7C98 003A4BD8  7F C5 F3 78 */	mr r5, r30
/* 803A7C9C 003A4BDC  4B D5 E3 D1 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 803A7CA0 003A4BE0  48 00 00 08 */	b .L_803A7CA8
.L_803A7CA4:
/* 803A7CA4 003A4BE4  38 60 00 00 */	li r3, 0
.L_803A7CA8:
/* 803A7CA8 003A4BE8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803A7CAC 003A4BEC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A7CB0 003A4BF0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803A7CB4 003A4BF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A7CB8 003A4BF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A7CBC 003A4BFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A7CC0 003A4C00  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803A7CC4 003A4C04  7C 08 03 A6 */	mtlr r0
/* 803A7CC8 003A4C08  38 21 00 30 */	addi r1, r1, 0x30
/* 803A7CCC 003A4C0C  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart, global
/* 803A7CD0 003A4C10  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803A7CD4 003A4C14  7C 08 02 A6 */	mflr r0
/* 803A7CD8 003A4C18  90 01 00 34 */	stw r0, 0x34(r1)
/* 803A7CDC 003A4C1C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803A7CE0 003A4C20  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803A7CE4 003A4C24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A7CE8 003A4C28  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A7CEC 003A4C2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A7CF0 003A4C30  FF E0 08 90 */	fmr f31, f1
/* 803A7CF4 003A4C34  7C 7D 1B 78 */	mr r29, r3
/* 803A7CF8 003A4C38  7C 9E 23 78 */	mr r30, r4
/* 803A7CFC 003A4C3C  7C BF 2B 78 */	mr r31, r5
/* 803A7D00 003A4C40  4B D5 F6 F5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7D04 003A4C44  2C 03 00 08 */	cmpwi r3, 8
/* 803A7D08 003A4C48  40 82 00 44 */	bne .L_803A7D4C
/* 803A7D0C 003A4C4C  38 00 00 00 */	li r0, 0
/* 803A7D10 003A4C50  7F A4 EB 78 */	mr r4, r29
/* 803A7D14 003A4C54  90 1D 02 CC */	stw r0, 0x2cc(r29)
/* 803A7D18 003A4C58  38 A0 00 02 */	li r5, 2
/* 803A7D1C 003A4C5C  38 C0 00 00 */	li r6, 0
/* 803A7D20 003A4C60  80 7D 03 60 */	lwz r3, 0x360(r29)
/* 803A7D24 003A4C64  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7D28 003A4C68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A7D2C 003A4C6C  7D 89 03 A6 */	mtctr r12
/* 803A7D30 003A4C70  4E 80 04 21 */	bctrl 
/* 803A7D34 003A4C74  FC 20 F8 90 */	fmr f1, f31
/* 803A7D38 003A4C78  7F A3 EB 78 */	mr r3, r29
/* 803A7D3C 003A4C7C  7F C4 F3 78 */	mr r4, r30
/* 803A7D40 003A4C80  7F E5 FB 78 */	mr r5, r31
/* 803A7D44 003A4C84  4B D5 E3 81 */	bl hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 803A7D48 003A4C88  48 00 00 98 */	b .L_803A7DE0
.L_803A7D4C:
/* 803A7D4C 003A4C8C  38 03 FF FE */	addi r0, r3, -2
/* 803A7D50 003A4C90  28 00 00 01 */	cmplwi r0, 1
/* 803A7D54 003A4C94  40 81 00 10 */	ble .L_803A7D64
/* 803A7D58 003A4C98  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803A7D5C 003A4C9C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A7D60 003A4CA0  41 82 00 7C */	beq .L_803A7DDC
.L_803A7D64:
/* 803A7D64 003A4CA4  80 7D 03 64 */	lwz r3, 0x364(r29)
/* 803A7D68 003A4CA8  28 03 00 00 */	cmplwi r3, 0
/* 803A7D6C 003A4CAC  41 82 00 58 */	beq .L_803A7DC4
/* 803A7D70 003A4CB0  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803A7D74 003A4CB4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A7D78 003A4CB8  41 82 00 08 */	beq .L_803A7D80
/* 803A7D7C 003A4CBC  C3 E2 11 40 */	lfs f31, lbl_8051F4A0@sda21(r2)
.L_803A7D80:
/* 803A7D80 003A4CC0  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 803A7D84 003A4CC4  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A7D88 003A4CC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A7D8C 003A4CCC  40 80 00 08 */	bge .L_803A7D94
/* 803A7D90 003A4CD0  C3 E2 10 D8 */	lfs f31, lbl_8051F438@sda21(r2)
.L_803A7D94:
/* 803A7D94 003A4CD4  FC 20 F8 90 */	fmr f1, f31
/* 803A7D98 003A4CD8  C0 42 11 20 */	lfs f2, lbl_8051F480@sda21(r2)
/* 803A7D9C 003A4CDC  4B D5 E2 91 */	bl addDamage__Q24Game9EnemyBaseFff
/* 803A7DA0 003A4CE0  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803A7DA4 003A4CE4  7F A3 EB 78 */	mr r3, r29
/* 803A7DA8 003A4CE8  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A7DAC 003A4CEC  64 00 00 08 */	oris r0, r0, 8
/* 803A7DB0 003A4CF0  C0 42 11 20 */	lfs f2, lbl_8051F480@sda21(r2)
/* 803A7DB4 003A4CF4  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 803A7DB8 003A4CF8  4B D5 E2 75 */	bl addDamage__Q24Game9EnemyBaseFff
/* 803A7DBC 003A4CFC  38 60 00 00 */	li r3, 0
/* 803A7DC0 003A4D00  48 00 00 20 */	b .L_803A7DE0
.L_803A7DC4:
/* 803A7DC4 003A4D04  FC 20 F8 90 */	fmr f1, f31
/* 803A7DC8 003A4D08  7F A3 EB 78 */	mr r3, r29
/* 803A7DCC 003A4D0C  7F C4 F3 78 */	mr r4, r30
/* 803A7DD0 003A4D10  7F E5 FB 78 */	mr r5, r31
/* 803A7DD4 003A4D14  4B D5 E2 F1 */	bl hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 803A7DD8 003A4D18  48 00 00 08 */	b .L_803A7DE0
.L_803A7DDC:
/* 803A7DDC 003A4D1C  38 60 00 00 */	li r3, 0
.L_803A7DE0:
/* 803A7DE0 003A4D20  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803A7DE4 003A4D24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A7DE8 003A4D28  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803A7DEC 003A4D2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A7DF0 003A4D30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A7DF4 003A4D34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A7DF8 003A4D38  7C 08 03 A6 */	mtlr r0
/* 803A7DFC 003A4D3C  38 21 00 30 */	addi r1, r1, 0x30
/* 803A7E00 003A4D40  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart

.fn earthquakeCallBack__Q34Game8BlackMan3ObjFPQ24Game8Creaturef, global
/* 803A7E04 003A4D44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A7E08 003A4D48  7C 08 02 A6 */	mflr r0
/* 803A7E0C 003A4D4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A7E10 003A4D50  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 803A7E14 003A4D54  FF E0 08 90 */	fmr f31, f1
/* 803A7E18 003A4D58  93 E1 00 14 */	stw r31, 0x14(r1)
/* 803A7E1C 003A4D5C  7C 9F 23 78 */	mr r31, r4
/* 803A7E20 003A4D60  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803A7E24 003A4D64  7C 7E 1B 78 */	mr r30, r3
/* 803A7E28 003A4D68  80 03 03 64 */	lwz r0, 0x364(r3)
/* 803A7E2C 003A4D6C  28 00 00 00 */	cmplwi r0, 0
/* 803A7E30 003A4D70  41 82 00 2C */	beq .L_803A7E5C
/* 803A7E34 003A4D74  7C 03 03 78 */	mr r3, r0
/* 803A7E38 003A4D78  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7E3C 003A4D7C  81 8C 02 8C */	lwz r12, 0x28c(r12)
/* 803A7E40 003A4D80  7D 89 03 A6 */	mtctr r12
/* 803A7E44 003A4D84  4E 80 04 21 */	bctrl 
/* 803A7E48 003A4D88  FC 20 F8 90 */	fmr f1, f31
/* 803A7E4C 003A4D8C  7F C3 F3 78 */	mr r3, r30
/* 803A7E50 003A4D90  7F E4 FB 78 */	mr r4, r31
/* 803A7E54 003A4D94  4B D5 E5 71 */	bl earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
/* 803A7E58 003A4D98  48 00 00 6C */	b .L_803A7EC4
.L_803A7E5C:
/* 803A7E5C 003A4D9C  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 803A7E60 003A4DA0  88 04 0A 12 */	lbz r0, 0xa12(r4)
/* 803A7E64 003A4DA4  28 00 00 00 */	cmplwi r0, 0
/* 803A7E68 003A4DA8  41 82 00 4C */	beq .L_803A7EB4
/* 803A7E6C 003A4DAC  4B D5 F5 89 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7E70 003A4DB0  2C 03 00 00 */	cmpwi r3, 0
/* 803A7E74 003A4DB4  41 82 00 14 */	beq .L_803A7E88
/* 803A7E78 003A4DB8  7F C3 F3 78 */	mr r3, r30
/* 803A7E7C 003A4DBC  4B D5 F5 79 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A7E80 003A4DC0  2C 03 00 08 */	cmpwi r3, 8
/* 803A7E84 003A4DC4  40 82 00 30 */	bne .L_803A7EB4
.L_803A7E88:
/* 803A7E88 003A4DC8  38 00 00 00 */	li r0, 0
/* 803A7E8C 003A4DCC  7F C4 F3 78 */	mr r4, r30
/* 803A7E90 003A4DD0  90 1E 02 CC */	stw r0, 0x2cc(r30)
/* 803A7E94 003A4DD4  38 A0 00 02 */	li r5, 2
/* 803A7E98 003A4DD8  38 C0 00 00 */	li r6, 0
/* 803A7E9C 003A4DDC  90 1E 02 F4 */	stw r0, 0x2f4(r30)
/* 803A7EA0 003A4DE0  80 7E 03 60 */	lwz r3, 0x360(r30)
/* 803A7EA4 003A4DE4  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7EA8 003A4DE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A7EAC 003A4DEC  7D 89 03 A6 */	mtctr r12
/* 803A7EB0 003A4DF0  4E 80 04 21 */	bctrl 
.L_803A7EB4:
/* 803A7EB4 003A4DF4  FC 20 F8 90 */	fmr f1, f31
/* 803A7EB8 003A4DF8  7F C3 F3 78 */	mr r3, r30
/* 803A7EBC 003A4DFC  7F E4 FB 78 */	mr r4, r31
/* 803A7EC0 003A4E00  4B D5 E5 05 */	bl earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
.L_803A7EC4:
/* 803A7EC4 003A4E04  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A7EC8 003A4E08  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 803A7ECC 003A4E0C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 803A7ED0 003A4E10  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 803A7ED4 003A4E14  7C 08 03 A6 */	mtlr r0
/* 803A7ED8 003A4E18  38 21 00 20 */	addi r1, r1, 0x20
/* 803A7EDC 003A4E1C  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game8BlackMan3ObjFPQ24Game8Creaturef

.fn doEntry__Q34Game8BlackMan3ObjFv, global
/* 803A7EE0 003A4E20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A7EE4 003A4E24  7C 08 02 A6 */	mflr r0
/* 803A7EE8 003A4E28  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A7EEC 003A4E2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A7EF0 003A4E30  7C 7F 1B 78 */	mr r31, r3
/* 803A7EF4 003A4E34  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 803A7EF8 003A4E38  88 03 0A 17 */	lbz r0, 0xa17(r3)
/* 803A7EFC 003A4E3C  28 00 00 00 */	cmplwi r0, 0
/* 803A7F00 003A4E40  41 82 00 14 */	beq .L_803A7F14
/* 803A7F04 003A4E44  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A7F08 003A4E48  38 80 00 08 */	li r4, 8
/* 803A7F0C 003A4E4C  4B E0 D1 35 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 803A7F10 003A4E50  48 00 00 10 */	b .L_803A7F20
.L_803A7F14:
/* 803A7F14 003A4E54  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A7F18 003A4E58  38 80 00 04 */	li r4, 4
/* 803A7F1C 003A4E5C  4B E0 D1 25 */	bl setDrawBuffer__Q24Game10GameSystemFi
.L_803A7F20:
/* 803A7F20 003A4E60  7F E3 FB 78 */	mr r3, r31
/* 803A7F24 003A4E64  4B D5 B7 29 */	bl doEntry__Q24Game9EnemyBaseFv
/* 803A7F28 003A4E68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A7F2C 003A4E6C  38 80 00 00 */	li r4, 0
/* 803A7F30 003A4E70  4B E0 D1 11 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 803A7F34 003A4E74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A7F38 003A4E78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A7F3C 003A4E7C  7C 08 03 A6 */	mtlr r0
/* 803A7F40 003A4E80  38 21 00 10 */	addi r1, r1, 0x10
/* 803A7F44 003A4E84  4E 80 00 20 */	blr 
.endfn doEntry__Q34Game8BlackMan3ObjFv

.fn changeMaterial__Q34Game8BlackMan3ObjFv, global
/* 803A7F48 003A4E88  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803A7F4C 003A4E8C  7C 08 02 A6 */	mflr r0
/* 803A7F50 003A4E90  90 01 00 64 */	stw r0, 0x64(r1)
/* 803A7F54 003A4E94  38 81 00 10 */	addi r4, r1, 0x10
/* 803A7F58 003A4E98  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803A7F5C 003A4E9C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803A7F60 003A4EA0  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803A7F64 003A4EA4  7C 7D 1B 78 */	mr r29, r3
/* 803A7F68 003A4EA8  93 81 00 50 */	stw r28, 0x50(r1)
/* 803A7F6C 003A4EAC  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803A7F70 003A4EB0  80 65 00 24 */	lwz r3, 0x24(r5)
/* 803A7F74 003A4EB4  80 63 02 5C */	lwz r3, 0x25c(r3)
/* 803A7F78 003A4EB8  80 63 00 44 */	lwz r3, 0x44(r3)
/* 803A7F7C 003A4EBC  38 63 00 B4 */	addi r3, r3, 0xb4
/* 803A7F80 003A4EC0  4B D4 2E F1 */	bl PSMTX44Copy
/* 803A7F84 003A4EC4  C0 A1 00 40 */	lfs f5, 0x40(r1)
/* 803A7F88 003A4EC8  38 A1 00 0C */	addi r5, r1, 0xc
/* 803A7F8C 003A4ECC  C0 81 00 44 */	lfs f4, 0x44(r1)
/* 803A7F90 003A4ED0  38 80 00 00 */	li r4, 0
/* 803A7F94 003A4ED4  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A7F98 003A4ED8  C0 61 00 48 */	lfs f3, 0x48(r1)
/* 803A7F9C 003A4EDC  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 803A7FA0 003A4EE0  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A7FA4 003A4EE4  D0 A1 00 30 */	stfs f5, 0x30(r1)
/* 803A7FA8 003A4EE8  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 803A7FAC 003A4EEC  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 803A7FB0 003A4EF0  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 803A7FB4 003A4EF4  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 803A7FB8 003A4EF8  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 803A7FBC 003A4EFC  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 803A7FC0 003A4F00  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 803A7FC4 003A4F04  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 803A7FC8 003A4F08  88 1D 03 80 */	lbz r0, 0x380(r29)
/* 803A7FCC 003A4F0C  83 C3 00 08 */	lwz r30, 8(r3)
/* 803A7FD0 003A4F10  83 FE 00 04 */	lwz r31, 4(r30)
/* 803A7FD4 003A4F14  98 01 00 0C */	stb r0, 0xc(r1)
/* 803A7FD8 003A4F18  88 1D 03 81 */	lbz r0, 0x381(r29)
/* 803A7FDC 003A4F1C  98 01 00 0D */	stb r0, 0xd(r1)
/* 803A7FE0 003A4F20  88 1D 03 82 */	lbz r0, 0x382(r29)
/* 803A7FE4 003A4F24  98 01 00 0E */	stb r0, 0xe(r1)
/* 803A7FE8 003A4F28  88 1D 03 83 */	lbz r0, 0x383(r29)
/* 803A7FEC 003A4F2C  98 01 00 0F */	stb r0, 0xf(r1)
/* 803A7FF0 003A4F30  80 7D 03 7C */	lwz r3, 0x37c(r29)
/* 803A7FF4 003A4F34  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 803A7FF8 003A4F38  81 83 00 00 */	lwz r12, 0(r3)
/* 803A7FFC 003A4F3C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 803A8000 003A4F40  7D 89 03 A6 */	mtctr r12
/* 803A8004 003A4F44  4E 80 04 21 */	bctrl 
/* 803A8008 003A4F48  88 1D 03 8C */	lbz r0, 0x38c(r29)
/* 803A800C 003A4F4C  38 A1 00 08 */	addi r5, r1, 8
/* 803A8010 003A4F50  38 80 00 03 */	li r4, 3
/* 803A8014 003A4F54  98 01 00 08 */	stb r0, 8(r1)
/* 803A8018 003A4F58  88 1D 03 8D */	lbz r0, 0x38d(r29)
/* 803A801C 003A4F5C  98 01 00 09 */	stb r0, 9(r1)
/* 803A8020 003A4F60  88 1D 03 8E */	lbz r0, 0x38e(r29)
/* 803A8024 003A4F64  98 01 00 0A */	stb r0, 0xa(r1)
/* 803A8028 003A4F68  88 1D 03 8F */	lbz r0, 0x38f(r29)
/* 803A802C 003A4F6C  98 01 00 0B */	stb r0, 0xb(r1)
/* 803A8030 003A4F70  80 7D 03 7C */	lwz r3, 0x37c(r29)
/* 803A8034 003A4F74  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 803A8038 003A4F78  81 83 00 00 */	lwz r12, 0(r3)
/* 803A803C 003A4F7C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 803A8040 003A4F80  7D 89 03 A6 */	mtctr r12
/* 803A8044 003A4F84  4E 80 04 21 */	bctrl 
/* 803A8048 003A4F88  7F C3 F3 78 */	mr r3, r30
/* 803A804C 003A4F8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8050 003A4F90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A8054 003A4F94  7D 89 03 A6 */	mtctr r12
/* 803A8058 003A4F98  4E 80 04 21 */	bctrl 
/* 803A805C 003A4F9C  80 7D 03 58 */	lwz r3, 0x358(r29)
/* 803A8060 003A4FA0  C0 22 11 44 */	lfs f1, lbl_8051F4A4@sda21(r2)
/* 803A8064 003A4FA4  48 08 C4 E9 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 803A8068 003A4FA8  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 803A806C 003A4FAC  38 80 00 00 */	li r4, 0
/* 803A8070 003A4FB0  80 63 00 00 */	lwz r3, 0(r3)
/* 803A8074 003A4FB4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 803A8078 003A4FB8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A807C 003A4FBC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 803A8080 003A4FC0  7D 89 03 A6 */	mtctr r12
/* 803A8084 003A4FC4  4E 80 04 21 */	bctrl 
/* 803A8088 003A4FC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803A808C 003A4FCC  3C 80 80 51 */	lis r4, j3dSys@ha
/* 803A8090 003A4FD0  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A8094 003A4FD4  3B 84 F2 30 */	addi r28, r4, j3dSys@l
/* 803A8098 003A4FD8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 803A809C 003A4FDC  3B A0 00 00 */	li r29, 0
/* 803A80A0 003A4FE0  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A80A4 003A4FE4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803A80A8 003A4FE8  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 803A80AC 003A4FEC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 803A80B0 003A4FF0  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 803A80B4 003A4FF4  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803A80B8 003A4FF8  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 803A80BC 003A4FFC  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 803A80C0 003A5000  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 803A80C4 003A5004  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 803A80C8 003A5008  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 803A80CC 003A500C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 803A80D0 003A5010  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 803A80D4 003A5014  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 803A80D8 003A5018  D0 43 00 40 */	stfs f2, 0x40(r3)
/* 803A80DC 003A501C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 803A80E0 003A5020  D0 43 00 44 */	stfs f2, 0x44(r3)
/* 803A80E4 003A5024  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 803A80E8 003A5028  D0 43 00 48 */	stfs f2, 0x48(r3)
/* 803A80EC 003A502C  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 803A80F0 003A5030  D0 43 00 4C */	stfs f2, 0x4c(r3)
/* 803A80F4 003A5034  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 803A80F8 003A5038  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 803A80FC 003A503C  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 803A8100 003A5040  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 803A8104 003A5044  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 803A8108 003A5048  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 803A810C 003A504C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803A8110 003A5050  80 BF 00 6C */	lwz r5, 0x6c(r31)
/* 803A8114 003A5054  80 83 00 54 */	lwz r4, 0x54(r3)
/* 803A8118 003A5058  80 65 00 04 */	lwz r3, 4(r5)
/* 803A811C 003A505C  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803A8120 003A5060  88 04 00 00 */	lbz r0, 0(r4)
/* 803A8124 003A5064  98 03 00 00 */	stb r0, 0(r3)
/* 803A8128 003A5068  88 04 00 01 */	lbz r0, 1(r4)
/* 803A812C 003A506C  98 03 00 01 */	stb r0, 1(r3)
/* 803A8130 003A5070  A0 04 00 02 */	lhz r0, 2(r4)
/* 803A8134 003A5074  B0 03 00 02 */	sth r0, 2(r3)
/* 803A8138 003A5078  A0 04 00 04 */	lhz r0, 4(r4)
/* 803A813C 003A507C  B0 03 00 04 */	sth r0, 4(r3)
/* 803A8140 003A5080  88 04 00 06 */	lbz r0, 6(r4)
/* 803A8144 003A5084  98 03 00 06 */	stb r0, 6(r3)
/* 803A8148 003A5088  88 04 00 07 */	lbz r0, 7(r4)
/* 803A814C 003A508C  98 03 00 07 */	stb r0, 7(r3)
/* 803A8150 003A5090  88 04 00 08 */	lbz r0, 8(r4)
/* 803A8154 003A5094  98 03 00 08 */	stb r0, 8(r3)
/* 803A8158 003A5098  88 04 00 09 */	lbz r0, 9(r4)
/* 803A815C 003A509C  98 03 00 09 */	stb r0, 9(r3)
/* 803A8160 003A50A0  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 803A8164 003A50A4  B0 03 00 0A */	sth r0, 0xa(r3)
/* 803A8168 003A50A8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 803A816C 003A50AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A8170 003A50B0  88 04 00 10 */	lbz r0, 0x10(r4)
/* 803A8174 003A50B4  98 03 00 10 */	stb r0, 0x10(r3)
/* 803A8178 003A50B8  88 04 00 11 */	lbz r0, 0x11(r4)
/* 803A817C 003A50BC  98 03 00 11 */	stb r0, 0x11(r3)
/* 803A8180 003A50C0  88 04 00 12 */	lbz r0, 0x12(r4)
/* 803A8184 003A50C4  98 03 00 12 */	stb r0, 0x12(r3)
/* 803A8188 003A50C8  88 04 00 13 */	lbz r0, 0x13(r4)
/* 803A818C 003A50CC  98 03 00 13 */	stb r0, 0x13(r3)
/* 803A8190 003A50D0  88 04 00 14 */	lbz r0, 0x14(r4)
/* 803A8194 003A50D4  98 03 00 14 */	stb r0, 0x14(r3)
/* 803A8198 003A50D8  88 04 00 15 */	lbz r0, 0x15(r4)
/* 803A819C 003A50DC  98 03 00 15 */	stb r0, 0x15(r3)
/* 803A81A0 003A50E0  88 04 00 16 */	lbz r0, 0x16(r4)
/* 803A81A4 003A50E4  98 03 00 16 */	stb r0, 0x16(r3)
/* 803A81A8 003A50E8  88 04 00 17 */	lbz r0, 0x17(r4)
/* 803A81AC 003A50EC  98 03 00 17 */	stb r0, 0x17(r3)
/* 803A81B0 003A50F0  88 04 00 18 */	lbz r0, 0x18(r4)
/* 803A81B4 003A50F4  98 03 00 18 */	stb r0, 0x18(r3)
/* 803A81B8 003A50F8  88 04 00 19 */	lbz r0, 0x19(r4)
/* 803A81BC 003A50FC  98 03 00 19 */	stb r0, 0x19(r3)
/* 803A81C0 003A5100  A8 04 00 1A */	lha r0, 0x1a(r4)
/* 803A81C4 003A5104  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 803A81C8 003A5108  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 803A81CC 003A510C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803A81D0 003A5110  80 65 00 04 */	lwz r3, 4(r5)
/* 803A81D4 003A5114  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A81D8 003A5118  7C 04 02 14 */	add r0, r4, r0
/* 803A81DC 003A511C  7C 03 00 50 */	subf r0, r3, r0
/* 803A81E0 003A5120  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803A81E4 003A5124  80 65 00 04 */	lwz r3, 4(r5)
/* 803A81E8 003A5128  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803A81EC 003A512C  7C 04 02 14 */	add r0, r4, r0
/* 803A81F0 003A5130  7C 03 00 50 */	subf r0, r3, r0
/* 803A81F4 003A5134  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A81F8 003A5138  48 00 00 3C */	b .L_803A8234
.L_803A81FC:
/* 803A81FC 003A513C  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 803A8200 003A5140  57 A3 32 B2 */	rlwinm r3, r29, 6, 0xa, 0x19
/* 803A8204 003A5144  57 A0 13 BA */	rlwinm r0, r29, 2, 0xe, 0x1d
/* 803A8208 003A5148  7C 84 1A 14 */	add r4, r4, r3
/* 803A820C 003A514C  90 9C 00 3C */	stw r4, 0x3c(r28)
/* 803A8210 003A5150  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 803A8214 003A5154  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 803A8218 003A5158  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A821C 003A515C  80 84 00 34 */	lwz r4, 0x34(r4)
/* 803A8220 003A5160  81 83 00 00 */	lwz r12, 0(r3)
/* 803A8224 003A5164  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803A8228 003A5168  7D 89 03 A6 */	mtctr r12
/* 803A822C 003A516C  4E 80 04 21 */	bctrl 
/* 803A8230 003A5170  3B BD 00 01 */	addi r29, r29, 1
.L_803A8234:
/* 803A8234 003A5174  A0 1F 00 5C */	lhz r0, 0x5c(r31)
/* 803A8238 003A5178  57 A3 04 3E */	clrlwi r3, r29, 0x10
/* 803A823C 003A517C  7C 03 00 40 */	cmplw r3, r0
/* 803A8240 003A5180  41 80 FF BC */	blt .L_803A81FC
/* 803A8244 003A5184  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803A8248 003A5188  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803A824C 003A518C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803A8250 003A5190  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803A8254 003A5194  83 81 00 50 */	lwz r28, 0x50(r1)
/* 803A8258 003A5198  7C 08 03 A6 */	mtlr r0
/* 803A825C 003A519C  38 21 00 60 */	addi r1, r1, 0x60
/* 803A8260 003A51A0  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game8BlackMan3ObjFv

.fn getShadowParam__Q34Game8BlackMan3ObjFRQ24Game11ShadowParam, global
/* 803A8264 003A51A4  C0 03 03 04 */	lfs f0, 0x304(r3)
/* 803A8268 003A51A8  C0 A2 11 48 */	lfs f5, lbl_8051F4A8@sda21(r2)
/* 803A826C 003A51AC  D0 04 00 00 */	stfs f0, 0(r4)
/* 803A8270 003A51B0  C0 62 10 D8 */	lfs f3, lbl_8051F438@sda21(r2)
/* 803A8274 003A51B4  C0 03 03 08 */	lfs f0, 0x308(r3)
/* 803A8278 003A51B8  C0 42 11 20 */	lfs f2, lbl_8051F480@sda21(r2)
/* 803A827C 003A51BC  D0 04 00 04 */	stfs f0, 4(r4)
/* 803A8280 003A51C0  C0 22 11 4C */	lfs f1, lbl_8051F4AC@sda21(r2)
/* 803A8284 003A51C4  C0 83 03 0C */	lfs f4, 0x30c(r3)
/* 803A8288 003A51C8  C0 02 11 44 */	lfs f0, lbl_8051F4A4@sda21(r2)
/* 803A828C 003A51CC  D0 84 00 08 */	stfs f4, 8(r4)
/* 803A8290 003A51D0  C0 83 01 90 */	lfs f4, 0x190(r3)
/* 803A8294 003A51D4  EC 85 20 2A */	fadds f4, f5, f4
/* 803A8298 003A51D8  D0 84 00 04 */	stfs f4, 4(r4)
/* 803A829C 003A51DC  D0 64 00 0C */	stfs f3, 0xc(r4)
/* 803A82A0 003A51E0  D0 44 00 10 */	stfs f2, 0x10(r4)
/* 803A82A4 003A51E4  D0 64 00 14 */	stfs f3, 0x14(r4)
/* 803A82A8 003A51E8  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 803A82AC 003A51EC  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 803A82B0 003A51F0  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game8BlackMan3ObjFRQ24Game11ShadowParam

.fn initWalkSmokeEffect__Q34Game8BlackMan3ObjFv, global
/* 803A82B4 003A51F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A82B8 003A51F8  7C 08 02 A6 */	mflr r0
/* 803A82BC 003A51FC  38 80 00 02 */	li r4, 2
/* 803A82C0 003A5200  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A82C4 003A5204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A82C8 003A5208  7C 7F 1B 78 */	mr r31, r3
/* 803A82CC 003A520C  38 7F 03 50 */	addi r3, r31, 0x350
/* 803A82D0 003A5210  4B D8 20 95 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 803A82D4 003A5214  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 803A82D8 003A5218  38 7F 03 50 */	addi r3, r31, 0x350
/* 803A82DC 003A521C  C0 22 11 1C */	lfs f1, lbl_8051F47C@sda21(r2)
/* 803A82E0 003A5220  38 80 00 00 */	li r4, 0
/* 803A82E4 003A5224  38 C2 10 EC */	addi r6, r2, lbl_8051F44C@sda21
/* 803A82E8 003A5228  4B D8 22 F9 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 803A82EC 003A522C  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 803A82F0 003A5230  38 7F 03 50 */	addi r3, r31, 0x350
/* 803A82F4 003A5234  C0 22 11 1C */	lfs f1, lbl_8051F47C@sda21(r2)
/* 803A82F8 003A5238  38 80 00 01 */	li r4, 1
/* 803A82FC 003A523C  38 C2 10 E4 */	addi r6, r2, lbl_8051F444@sda21
/* 803A8300 003A5240  4B D8 22 E1 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 803A8304 003A5244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A8308 003A5248  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A830C 003A524C  7C 08 03 A6 */	mtlr r0
/* 803A8310 003A5250  38 21 00 10 */	addi r1, r1, 0x10
/* 803A8314 003A5254  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game8BlackMan3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game8BlackMan3ObjFv, global
/* 803A8318 003A5258  80 03 03 64 */	lwz r0, 0x364(r3)
/* 803A831C 003A525C  28 00 00 00 */	cmplwi r0, 0
/* 803A8320 003A5260  41 82 00 0C */	beq .L_803A832C
/* 803A8324 003A5264  38 60 00 00 */	li r3, 0
/* 803A8328 003A5268  4E 80 00 20 */	blr 
.L_803A832C:
/* 803A832C 003A526C  38 63 03 50 */	addi r3, r3, 0x350
/* 803A8330 003A5270  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game8BlackMan3ObjFv

.fn walkFunc__Q34Game8BlackMan3ObjFv, global
/* 803A8334 003A5274  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 803A8338 003A5278  7C 08 02 A6 */	mflr r0
/* 803A833C 003A527C  90 01 00 84 */	stw r0, 0x84(r1)
/* 803A8340 003A5280  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 803A8344 003A5284  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 803A8348 003A5288  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 803A834C 003A528C  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 803A8350 003A5290  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 803A8354 003A5294  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 803A8358 003A5298  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803A835C 003A529C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803A8360 003A52A0  7C 7F 1B 78 */	mr r31, r3
/* 803A8364 003A52A4  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803A8368 003A52A8  28 03 00 00 */	cmplwi r3, 0
/* 803A836C 003A52AC  41 82 00 10 */	beq .L_803A837C
/* 803A8370 003A52B0  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 803A8374 003A52B4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A8378 003A52B8  40 82 07 D4 */	bne .L_803A8B4C
.L_803A837C:
/* 803A837C 003A52BC  7F E3 FB 78 */	mr r3, r31
/* 803A8380 003A52C0  48 00 23 1D */	bl isTyreFreeze__Q34Game8BlackMan3ObjFv
/* 803A8384 003A52C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A8388 003A52C8  41 82 00 30 */	beq .L_803A83B8
/* 803A838C 003A52CC  80 7F 03 60 */	lwz r3, 0x360(r31)
/* 803A8390 003A52D0  7F E4 FB 78 */	mr r4, r31
/* 803A8394 003A52D4  38 A0 00 03 */	li r5, 3
/* 803A8398 003A52D8  38 C0 00 00 */	li r6, 0
/* 803A839C 003A52DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803A83A0 003A52E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A83A4 003A52E4  7D 89 03 A6 */	mtctr r12
/* 803A83A8 003A52E8  4E 80 04 21 */	bctrl 
/* 803A83AC 003A52EC  38 00 00 00 */	li r0, 0
/* 803A83B0 003A52F0  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 803A83B4 003A52F4  48 00 07 98 */	b .L_803A8B4C
.L_803A83B8:
/* 803A83B8 003A52F8  80 1F 03 64 */	lwz r0, 0x364(r31)
/* 803A83BC 003A52FC  28 00 00 00 */	cmplwi r0, 0
/* 803A83C0 003A5300  41 82 00 10 */	beq .L_803A83D0
/* 803A83C4 003A5304  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A83C8 003A5308  2C 00 00 02 */	cmpwi r0, 2
/* 803A83CC 003A530C  40 82 00 0C */	bne .L_803A83D8
.L_803A83D0:
/* 803A83D0 003A5310  38 00 00 00 */	li r0, 0
/* 803A83D4 003A5314  48 00 00 08 */	b .L_803A83DC
.L_803A83D8:
/* 803A83D8 003A5318  38 00 00 01 */	li r0, 1
.L_803A83DC:
/* 803A83DC 003A531C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803A83E0 003A5320  41 82 00 28 */	beq .L_803A8408
/* 803A83E4 003A5324  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 803A83E8 003A5328  C0 02 11 50 */	lfs f0, lbl_8051F4B0@sda21(r2)
/* 803A83EC 003A532C  EC 01 00 2A */	fadds f0, f1, f0
/* 803A83F0 003A5330  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 803A83F4 003A5334  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 803A83F8 003A5338  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 803A83FC 003A533C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803A8400 003A5340  40 81 00 08 */	ble .L_803A8408
/* 803A8404 003A5344  D0 3F 02 00 */	stfs f1, 0x200(r31)
.L_803A8408:
/* 803A8408 003A5348  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A840C 003A534C  A8 83 0A 1A */	lha r4, 0xa1a(r3)
/* 803A8410 003A5350  C3 E3 02 E4 */	lfs f31, 0x2e4(r3)
/* 803A8414 003A5354  7C 80 07 35 */	extsh. r0, r4
/* 803A8418 003A5358  C3 C3 03 34 */	lfs f30, 0x334(r3)
/* 803A841C 003A535C  C3 A3 03 0C */	lfs f29, 0x30c(r3)
/* 803A8420 003A5360  41 80 00 0C */	blt .L_803A842C
/* 803A8424 003A5364  90 9F 02 F0 */	stw r4, 0x2f0(r31)
/* 803A8428 003A5368  48 00 00 10 */	b .L_803A8438
.L_803A842C:
/* 803A842C 003A536C  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 803A8430 003A5370  38 03 00 01 */	addi r0, r3, 1
/* 803A8434 003A5374  90 1F 02 EC */	stw r0, 0x2ec(r31)
.L_803A8438:
/* 803A8438 003A5378  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 803A843C 003A537C  2C 00 00 00 */	cmpwi r0, 0
/* 803A8440 003A5380  40 82 00 34 */	bne .L_803A8474
/* 803A8444 003A5384  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A8448 003A5388  80 9F 02 EC */	lwz r4, 0x2ec(r31)
/* 803A844C 003A538C  80 03 09 5C */	lwz r0, 0x95c(r3)
/* 803A8450 003A5390  7C 04 00 00 */	cmpw r4, r0
/* 803A8454 003A5394  40 81 00 30 */	ble .L_803A8484
/* 803A8458 003A5398  38 60 00 01 */	li r3, 1
/* 803A845C 003A539C  38 00 00 00 */	li r0, 0
/* 803A8460 003A53A0  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 803A8464 003A53A4  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A8468 003A53A8  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 803A846C 003A53AC  D0 1F 03 78 */	stfs f0, 0x378(r31)
/* 803A8470 003A53B0  48 00 00 14 */	b .L_803A8484
.L_803A8474:
/* 803A8474 003A53B4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A8478 003A53B8  C3 E3 08 BC */	lfs f31, 0x8bc(r3)
/* 803A847C 003A53BC  C3 C3 09 0C */	lfs f30, 0x90c(r3)
/* 803A8480 003A53C0  C3 A3 08 E4 */	lfs f29, 0x8e4(r3)
.L_803A8484:
/* 803A8484 003A53C4  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A8488 003A53C8  2C 00 00 02 */	cmpwi r0, 2
/* 803A848C 003A53CC  40 82 01 EC */	bne .L_803A8678
/* 803A8490 003A53D0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803A8494 003A53D4  4B DB 27 8D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 803A8498 003A53D8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803A849C 003A53DC  28 03 00 00 */	cmplwi r3, 0
/* 803A84A0 003A53E0  C3 A4 08 44 */	lfs f29, 0x844(r4)
/* 803A84A4 003A53E4  41 82 01 80 */	beq .L_803A8624
/* 803A84A8 003A53E8  7C 64 1B 78 */	mr r4, r3
/* 803A84AC 003A53EC  38 61 00 2C */	addi r3, r1, 0x2c
/* 803A84B0 003A53F0  81 84 00 00 */	lwz r12, 0(r4)
/* 803A84B4 003A53F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A84B8 003A53F8  7D 89 03 A6 */	mtctr r12
/* 803A84BC 003A53FC  4E 80 04 21 */	bctrl 
/* 803A84C0 003A5400  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803A84C4 003A5404  3B C0 00 00 */	li r30, 0
/* 803A84C8 003A5408  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 803A84CC 003A540C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A84D0 003A5410  EC 41 00 28 */	fsubs f2, f1, f0
/* 803A84D4 003A5414  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 803A84D8 003A5418  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 803A84DC 003A541C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A84E0 003A5420  EC 21 00 28 */	fsubs f1, f1, f0
/* 803A84E4 003A5424  EC 02 00 B2 */	fmuls f0, f2, f2
/* 803A84E8 003A5428  28 00 00 00 */	cmplwi r0, 0
/* 803A84EC 003A542C  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 803A84F0 003A5430  41 82 00 14 */	beq .L_803A8504
/* 803A84F4 003A5434  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A84F8 003A5438  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A84FC 003A543C  40 82 00 08 */	bne .L_803A8504
/* 803A8500 003A5440  3B C0 00 01 */	li r30, 1
.L_803A8504:
/* 803A8504 003A5444  C0 02 11 54 */	lfs f0, lbl_8051F4B4@sda21(r2)
/* 803A8508 003A5448  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A850C 003A544C  40 81 00 40 */	ble .L_803A854C
/* 803A8510 003A5450  38 00 00 00 */	li r0, 0
/* 803A8514 003A5454  7F E3 FB 78 */	mr r3, r31
/* 803A8518 003A5458  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 803A851C 003A545C  4B D5 EE 2D */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A8520 003A5460  2C 03 00 09 */	cmpwi r3, 9
/* 803A8524 003A5464  41 82 00 0C */	beq .L_803A8530
/* 803A8528 003A5468  7F E3 FB 78 */	mr r3, r31
/* 803A852C 003A546C  4B D5 CD 75 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803A8530:
/* 803A8530 003A5470  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A8534 003A5474  41 82 00 F0 */	beq .L_803A8624
/* 803A8538 003A5478  7F E3 FB 78 */	mr r3, r31
/* 803A853C 003A547C  38 80 00 09 */	li r4, 9
/* 803A8540 003A5480  38 A0 00 00 */	li r5, 0
/* 803A8544 003A5484  4B D5 CA C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A8548 003A5488  48 00 00 DC */	b .L_803A8624
.L_803A854C:
/* 803A854C 003A548C  C0 02 11 58 */	lfs f0, lbl_8051F4B8@sda21(r2)
/* 803A8550 003A5490  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A8554 003A5494  40 81 00 40 */	ble .L_803A8594
/* 803A8558 003A5498  38 00 00 00 */	li r0, 0
/* 803A855C 003A549C  7F E3 FB 78 */	mr r3, r31
/* 803A8560 003A54A0  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 803A8564 003A54A4  4B D5 ED E5 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A8568 003A54A8  2C 03 00 0B */	cmpwi r3, 0xb
/* 803A856C 003A54AC  41 82 00 0C */	beq .L_803A8578
/* 803A8570 003A54B0  7F E3 FB 78 */	mr r3, r31
/* 803A8574 003A54B4  4B D5 CD 2D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803A8578:
/* 803A8578 003A54B8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A857C 003A54BC  41 82 00 A8 */	beq .L_803A8624
/* 803A8580 003A54C0  7F E3 FB 78 */	mr r3, r31
/* 803A8584 003A54C4  38 80 00 0B */	li r4, 0xb
/* 803A8588 003A54C8  38 A0 00 00 */	li r5, 0
/* 803A858C 003A54CC  4B D5 CA 79 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A8590 003A54D0  48 00 00 94 */	b .L_803A8624
.L_803A8594:
/* 803A8594 003A54D4  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 803A8598 003A54D8  38 03 00 01 */	addi r0, r3, 1
/* 803A859C 003A54DC  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 803A85A0 003A54E0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A85A4 003A54E4  80 9F 02 F4 */	lwz r4, 0x2f4(r31)
/* 803A85A8 003A54E8  80 03 09 D4 */	lwz r0, 0x9d4(r3)
/* 803A85AC 003A54EC  7C 04 00 00 */	cmpw r4, r0
/* 803A85B0 003A54F0  41 81 00 14 */	bgt .L_803A85C4
/* 803A85B4 003A54F4  7F E3 FB 78 */	mr r3, r31
/* 803A85B8 003A54F8  4B D5 ED 91 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A85BC 003A54FC  2C 03 00 08 */	cmpwi r3, 8
/* 803A85C0 003A5500  41 82 00 0C */	beq .L_803A85CC
.L_803A85C4:
/* 803A85C4 003A5504  7F E3 FB 78 */	mr r3, r31
/* 803A85C8 003A5508  4B D5 CC D9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803A85CC:
/* 803A85CC 003A550C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A85D0 003A5510  41 82 00 54 */	beq .L_803A8624
/* 803A85D4 003A5514  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A85D8 003A5518  80 9F 02 F4 */	lwz r4, 0x2f4(r31)
/* 803A85DC 003A551C  80 03 09 D4 */	lwz r0, 0x9d4(r3)
/* 803A85E0 003A5520  7C 04 00 00 */	cmpw r4, r0
/* 803A85E4 003A5524  40 81 00 30 */	ble .L_803A8614
/* 803A85E8 003A5528  38 00 00 00 */	li r0, 0
/* 803A85EC 003A552C  7F E4 FB 78 */	mr r4, r31
/* 803A85F0 003A5530  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 803A85F4 003A5534  38 A0 00 08 */	li r5, 8
/* 803A85F8 003A5538  38 C0 00 00 */	li r6, 0
/* 803A85FC 003A553C  80 7F 03 60 */	lwz r3, 0x360(r31)
/* 803A8600 003A5540  81 83 00 00 */	lwz r12, 0(r3)
/* 803A8604 003A5544  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A8608 003A5548  7D 89 03 A6 */	mtctr r12
/* 803A860C 003A554C  4E 80 04 21 */	bctrl 
/* 803A8610 003A5550  48 00 00 14 */	b .L_803A8624
.L_803A8614:
/* 803A8614 003A5554  7F E3 FB 78 */	mr r3, r31
/* 803A8618 003A5558  38 80 00 08 */	li r4, 8
/* 803A861C 003A555C  38 A0 00 00 */	li r5, 0
/* 803A8620 003A5560  4B D5 C9 E5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_803A8624:
/* 803A8624 003A5564  7F E3 FB 78 */	mr r3, r31
/* 803A8628 003A5568  4B D5 ED 21 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A862C 003A556C  2C 03 00 09 */	cmpwi r3, 9
/* 803A8630 003A5570  40 82 00 08 */	bne .L_803A8638
/* 803A8634 003A5574  C3 A2 10 D8 */	lfs f29, lbl_8051F438@sda21(r2)
.L_803A8638:
/* 803A8638 003A5578  7F E3 FB 78 */	mr r3, r31
/* 803A863C 003A557C  4B D5 ED 0D */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A8640 003A5580  2C 03 00 0B */	cmpwi r3, 0xb
/* 803A8644 003A5584  40 82 00 0C */	bne .L_803A8650
/* 803A8648 003A5588  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A864C 003A558C  C3 A3 09 34 */	lfs f29, 0x934(r3)
.L_803A8650:
/* 803A8650 003A5590  C0 3F 03 74 */	lfs f1, 0x374(r31)
/* 803A8654 003A5594  C0 42 11 5C */	lfs f2, lbl_8051F4BC@sda21(r2)
/* 803A8658 003A5598  EC 1D 08 28 */	fsubs f0, f29, f1
/* 803A865C 003A559C  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 803A8660 003A55A0  D0 1F 03 74 */	stfs f0, 0x374(r31)
/* 803A8664 003A55A4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A8668 003A55A8  C3 FF 03 74 */	lfs f31, 0x374(r31)
/* 803A866C 003A55AC  C3 C3 08 94 */	lfs f30, 0x894(r3)
/* 803A8670 003A55B0  C3 A3 08 6C */	lfs f29, 0x86c(r3)
/* 803A8674 003A55B4  48 00 00 E4 */	b .L_803A8758
.L_803A8678:
/* 803A8678 003A55B8  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 803A867C 003A55BC  28 03 00 00 */	cmplwi r3, 0
/* 803A8680 003A55C0  41 82 00 D8 */	beq .L_803A8758
/* 803A8684 003A55C4  80 83 00 AC */	lwz r4, 0xac(r3)
/* 803A8688 003A55C8  28 04 00 00 */	cmplwi r4, 0
/* 803A868C 003A55CC  41 82 00 CC */	beq .L_803A8758
/* 803A8690 003A55D0  81 84 00 00 */	lwz r12, 0(r4)
/* 803A8694 003A55D4  38 61 00 20 */	addi r3, r1, 0x20
/* 803A8698 003A55D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A869C 003A55DC  7D 89 03 A6 */	mtctr r12
/* 803A86A0 003A55E0  4E 80 04 21 */	bctrl 
/* 803A86A4 003A55E4  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803A86A8 003A55E8  3B C0 00 00 */	li r30, 0
/* 803A86AC 003A55EC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 803A86B0 003A55F0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A86B4 003A55F4  EC 41 00 28 */	fsubs f2, f1, f0
/* 803A86B8 003A55F8  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 803A86BC 003A55FC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 803A86C0 003A5600  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A86C4 003A5604  EC 21 00 28 */	fsubs f1, f1, f0
/* 803A86C8 003A5608  EC 02 00 B2 */	fmuls f0, f2, f2
/* 803A86CC 003A560C  28 00 00 00 */	cmplwi r0, 0
/* 803A86D0 003A5610  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 803A86D4 003A5614  41 82 00 14 */	beq .L_803A86E8
/* 803A86D8 003A5618  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A86DC 003A561C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A86E0 003A5620  40 82 00 08 */	bne .L_803A86E8
/* 803A86E4 003A5624  3B C0 00 01 */	li r30, 1
.L_803A86E8:
/* 803A86E8 003A5628  C0 02 11 28 */	lfs f0, lbl_8051F488@sda21(r2)
/* 803A86EC 003A562C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A86F0 003A5630  40 80 00 38 */	bge .L_803A8728
/* 803A86F4 003A5634  7F E3 FB 78 */	mr r3, r31
/* 803A86F8 003A5638  4B D5 EC 51 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A86FC 003A563C  2C 03 00 06 */	cmpwi r3, 6
/* 803A8700 003A5640  40 82 00 0C */	bne .L_803A870C
/* 803A8704 003A5644  7F E3 FB 78 */	mr r3, r31
/* 803A8708 003A5648  4B D5 CB 99 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803A870C:
/* 803A870C 003A564C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A8710 003A5650  41 82 00 48 */	beq .L_803A8758
/* 803A8714 003A5654  7F E3 FB 78 */	mr r3, r31
/* 803A8718 003A5658  38 80 00 0C */	li r4, 0xc
/* 803A871C 003A565C  38 A0 00 00 */	li r5, 0
/* 803A8720 003A5660  4B D5 C8 E5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A8724 003A5664  48 00 00 34 */	b .L_803A8758
.L_803A8728:
/* 803A8728 003A5668  7F E3 FB 78 */	mr r3, r31
/* 803A872C 003A566C  4B D5 EC 1D */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A8730 003A5670  2C 03 00 0C */	cmpwi r3, 0xc
/* 803A8734 003A5674  40 82 00 0C */	bne .L_803A8740
/* 803A8738 003A5678  7F E3 FB 78 */	mr r3, r31
/* 803A873C 003A567C  4B D5 CB 65 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803A8740:
/* 803A8740 003A5680  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A8744 003A5684  41 82 00 14 */	beq .L_803A8758
/* 803A8748 003A5688  7F E3 FB 78 */	mr r3, r31
/* 803A874C 003A568C  38 80 00 06 */	li r4, 6
/* 803A8750 003A5690  38 A0 00 00 */	li r5, 0
/* 803A8754 003A5694  4B D5 C8 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_803A8758:
/* 803A8758 003A5698  80 1F 03 64 */	lwz r0, 0x364(r31)
/* 803A875C 003A569C  28 00 00 00 */	cmplwi r0, 0
/* 803A8760 003A56A0  41 82 00 64 */	beq .L_803A87C4
/* 803A8764 003A56A4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A8768 003A56A8  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A876C 003A56AC  88 63 0A 10 */	lbz r3, 0xa10(r3)
/* 803A8770 003A56B0  7C 03 00 00 */	cmpw r3, r0
/* 803A8774 003A56B4  41 82 00 50 */	beq .L_803A87C4
/* 803A8778 003A56B8  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 803A877C 003A56BC  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A8780 003A56C0  2C 00 00 04 */	cmpwi r0, 4
/* 803A8784 003A56C4  40 82 00 30 */	bne .L_803A87B4
/* 803A8788 003A56C8  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A878C 003A56CC  7F E3 FB 78 */	mr r3, r31
/* 803A8790 003A56D0  38 80 00 00 */	li r4, 0
/* 803A8794 003A56D4  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803A8798 003A56D8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803A879C 003A56DC  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803A87A0 003A56E0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803A87A4 003A56E4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803A87A8 003A56E8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803A87AC 003A56EC  48 00 14 B9 */	bl setPathFinder__Q34Game8BlackMan3ObjFb
/* 803A87B0 003A56F0  48 00 00 14 */	b .L_803A87C4
.L_803A87B4:
/* 803A87B4 003A56F4  38 00 00 00 */	li r0, 0
/* 803A87B8 003A56F8  7F E3 FB 78 */	mr r3, r31
/* 803A87BC 003A56FC  98 1F 03 4C */	stb r0, 0x34c(r31)
/* 803A87C0 003A5700  48 00 16 7D */	bl releasePathFinder__Q34Game8BlackMan3ObjFv
.L_803A87C4:
/* 803A87C4 003A5704  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A87C8 003A5708  2C 00 00 04 */	cmpwi r0, 4
/* 803A87CC 003A570C  40 82 00 24 */	bne .L_803A87F0
/* 803A87D0 003A5710  7F E3 FB 78 */	mr r3, r31
/* 803A87D4 003A5714  48 00 13 7D */	bl isEndPathFinder__Q34Game8BlackMan3ObjFv
/* 803A87D8 003A5718  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A87DC 003A571C  41 82 03 70 */	beq .L_803A8B4C
/* 803A87E0 003A5720  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A87E4 003A5724  C3 E3 08 1C */	lfs f31, 0x81c(r3)
/* 803A87E8 003A5728  48 00 00 08 */	b .L_803A87F0
/* 803A87EC 003A572C  48 00 03 60 */	b .L_803A8B4C
.L_803A87F0:
/* 803A87F0 003A5730  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 803A87F4 003A5734  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 803A87F8 003A5738  C0 42 11 60 */	lfs f2, lbl_8051F4C0@sda21(r2)
/* 803A87FC 003A573C  EC 01 00 28 */	fsubs f0, f1, f0
/* 803A8800 003A5740  FC 00 02 10 */	fabs f0, f0
/* 803A8804 003A5744  FC 00 00 18 */	frsp f0, f0
/* 803A8808 003A5748  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803A880C 003A574C  40 80 00 20 */	bge .L_803A882C
/* 803A8810 003A5750  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 803A8814 003A5754  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 803A8818 003A5758  EC 01 00 28 */	fsubs f0, f1, f0
/* 803A881C 003A575C  FC 00 02 10 */	fabs f0, f0
/* 803A8820 003A5760  FC 00 00 18 */	frsp f0, f0
/* 803A8824 003A5764  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803A8828 003A5768  41 80 00 0C */	blt .L_803A8834
.L_803A882C:
/* 803A882C 003A576C  38 00 00 00 */	li r0, 0
/* 803A8830 003A5770  90 1F 02 E4 */	stw r0, 0x2e4(r31)
.L_803A8834:
/* 803A8834 003A5774  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A8838 003A5778  28 03 00 00 */	cmplwi r3, 0
/* 803A883C 003A577C  41 82 00 0C */	beq .L_803A8848
/* 803A8840 003A5780  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 803A8844 003A5784  D0 03 03 14 */	stfs f0, 0x314(r3)
.L_803A8848:
/* 803A8848 003A5788  FC 20 F8 90 */	fmr f1, f31
/* 803A884C 003A578C  C3 FF 01 FC */	lfs f31, 0x1fc(r31)
/* 803A8850 003A5790  FC 40 E8 90 */	fmr f2, f29
/* 803A8854 003A5794  7F E3 FB 78 */	mr r3, r31
/* 803A8858 003A5798  FC 60 F0 90 */	fmr f3, f30
/* 803A885C 003A579C  38 9F 02 D0 */	addi r4, r31, 0x2d0
/* 803A8860 003A57A0  4B D6 CD 7D */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 803A8864 003A57A4  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A8868 003A57A8  28 03 00 00 */	cmplwi r3, 0
/* 803A886C 003A57AC  41 82 00 64 */	beq .L_803A88D0
/* 803A8870 003A57B0  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803A8874 003A57B4  C0 03 02 E8 */	lfs f0, 0x2e8(r3)
/* 803A8878 003A57B8  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 803A887C 003A57BC  EC 61 00 28 */	fsubs f3, f1, f0
/* 803A8880 003A57C0  C0 23 02 E0 */	lfs f1, 0x2e0(r3)
/* 803A8884 003A57C4  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A8888 003A57C8  EC 22 08 28 */	fsubs f1, f2, f1
/* 803A888C 003A57CC  EC 43 00 F2 */	fmuls f2, f3, f3
/* 803A8890 003A57D0  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 803A8894 003A57D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A8898 003A57D8  40 81 00 14 */	ble .L_803A88AC
/* 803A889C 003A57DC  40 81 00 14 */	ble .L_803A88B0
/* 803A88A0 003A57E0  FC 00 08 34 */	frsqrte f0, f1
/* 803A88A4 003A57E4  EC 20 00 72 */	fmuls f1, f0, f1
/* 803A88A8 003A57E8  48 00 00 08 */	b .L_803A88B0
.L_803A88AC:
/* 803A88AC 003A57EC  FC 20 00 90 */	fmr f1, f0
.L_803A88B0:
/* 803A88B0 003A57F0  C0 02 11 64 */	lfs f0, lbl_8051F4C4@sda21(r2)
/* 803A88B4 003A57F4  EC 01 00 24 */	fdivs f0, f1, f0
/* 803A88B8 003A57F8  D0 03 03 0C */	stfs f0, 0x30c(r3)
/* 803A88BC 003A57FC  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A88C0 003A5800  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 803A88C4 003A5804  D0 03 01 FC */	stfs f0, 0x1fc(r3)
/* 803A88C8 003A5808  C0 03 01 FC */	lfs f0, 0x1fc(r3)
/* 803A88CC 003A580C  D0 03 01 A8 */	stfs f0, 0x1a8(r3)
.L_803A88D0:
/* 803A88D0 003A5810  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 803A88D4 003A5814  2C 00 00 00 */	cmpwi r0, 0
/* 803A88D8 003A5818  40 82 00 78 */	bne .L_803A8950
/* 803A88DC 003A581C  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 803A88E0 003A5820  38 03 00 01 */	addi r0, r3, 1
/* 803A88E4 003A5824  90 1F 03 34 */	stw r0, 0x334(r31)
/* 803A88E8 003A5828  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 803A88EC 003A582C  2C 00 00 3C */	cmpwi r0, 0x3c
/* 803A88F0 003A5830  40 81 00 60 */	ble .L_803A8950
/* 803A88F4 003A5834  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803A88F8 003A5838  C0 1F 03 00 */	lfs f0, 0x300(r31)
/* 803A88FC 003A583C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 803A8900 003A5840  EC 61 00 28 */	fsubs f3, f1, f0
/* 803A8904 003A5844  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 803A8908 003A5848  C0 02 11 60 */	lfs f0, lbl_8051F4C0@sda21(r2)
/* 803A890C 003A584C  EC 42 08 28 */	fsubs f2, f2, f1
/* 803A8910 003A5850  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803A8914 003A5854  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803A8918 003A5858  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A891C 003A585C  40 80 00 14 */	bge .L_803A8930
/* 803A8920 003A5860  38 00 00 78 */	li r0, 0x78
/* 803A8924 003A5864  7F E3 FB 78 */	mr r3, r31
/* 803A8928 003A5868  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 803A892C 003A586C  48 00 02 85 */	bl findNextRoutePoint__Q34Game8BlackMan3ObjFv
.L_803A8930:
/* 803A8930 003A5870  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 803A8934 003A5874  38 00 00 00 */	li r0, 0
/* 803A8938 003A5878  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 803A893C 003A587C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 803A8940 003A5880  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 803A8944 003A5884  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 803A8948 003A5888  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 803A894C 003A588C  90 1F 03 34 */	stw r0, 0x334(r31)
.L_803A8950:
/* 803A8950 003A5890  7F E4 FB 78 */	mr r4, r31
/* 803A8954 003A5894  38 61 00 14 */	addi r3, r1, 0x14
/* 803A8958 003A5898  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A895C 003A589C  3B C0 00 00 */	li r30, 0
/* 803A8960 003A58A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A8964 003A58A4  7D 89 03 A6 */	mtctr r12
/* 803A8968 003A58A8  4E 80 04 21 */	bctrl 
/* 803A896C 003A58AC  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 803A8970 003A58B0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803A8974 003A58B4  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 803A8978 003A58B8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803A897C 003A58BC  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 803A8980 003A58C0  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 803A8984 003A58C4  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 803A8988 003A58C8  EC 21 28 28 */	fsubs f1, f1, f5
/* 803A898C 003A58CC  EC 40 18 28 */	fsubs f2, f0, f3
/* 803A8990 003A58D0  D0 A1 00 08 */	stfs f5, 8(r1)
/* 803A8994 003A58D4  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 803A8998 003A58D8  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 803A899C 003A58DC  4B C8 C7 6D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803A89A0 003A58E0  48 06 92 31 */	bl roundAng__Ff
/* 803A89A4 003A58E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A89A8 003A58E8  FF A0 08 90 */	fmr f29, f1
/* 803A89AC 003A58EC  7F E3 FB 78 */	mr r3, r31
/* 803A89B0 003A58F0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803A89B4 003A58F4  7D 89 03 A6 */	mtctr r12
/* 803A89B8 003A58F8  4E 80 04 21 */	bctrl 
/* 803A89BC 003A58FC  FC 40 08 90 */	fmr f2, f1
/* 803A89C0 003A5900  FC 20 E8 90 */	fmr f1, f29
/* 803A89C4 003A5904  48 06 92 39 */	bl angDist__Fff
/* 803A89C8 003A5908  C0 02 11 68 */	lfs f0, lbl_8051F4C8@sda21(r2)
/* 803A89CC 003A590C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A89D0 003A5910  7C 60 00 26 */	mfcr r3
/* 803A89D4 003A5914  3C 00 43 30 */	lis r0, 0x4330
/* 803A89D8 003A5918  54 63 17 FE */	rlwinm r3, r3, 2, 0x1f, 0x1f
/* 803A89DC 003A591C  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A89E0 003A5920  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A89E4 003A5924  C8 42 11 88 */	lfd f2, lbl_8051F4E8@sda21(r2)
/* 803A89E8 003A5928  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803A89EC 003A592C  C8 02 11 70 */	lfd f0, lbl_8051F4D0@sda21(r2)
/* 803A89F0 003A5930  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 803A89F4 003A5934  FC 21 10 28 */	fsub f1, f1, f2
/* 803A89F8 003A5938  FC 20 0A 10 */	fabs f1, f1
/* 803A89FC 003A593C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 803A8A00 003A5940  41 82 00 08 */	beq .L_803A8A08
/* 803A8A04 003A5944  3B C0 00 01 */	li r30, 1
.L_803A8A08:
/* 803A8A08 003A5948  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A8A0C 003A594C  40 82 00 24 */	bne .L_803A8A30
/* 803A8A10 003A5950  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 803A8A14 003A5954  C0 02 11 78 */	lfs f0, lbl_8051F4D8@sda21(r2)
/* 803A8A18 003A5958  EC 3F 08 28 */	fsubs f1, f31, f1
/* 803A8A1C 003A595C  FC 20 0A 10 */	fabs f1, f1
/* 803A8A20 003A5960  FC 20 08 18 */	frsp f1, f1
/* 803A8A24 003A5964  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A8A28 003A5968  40 81 00 08 */	ble .L_803A8A30
/* 803A8A2C 003A596C  3B C0 00 01 */	li r30, 1
.L_803A8A30:
/* 803A8A30 003A5970  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803A8A34 003A5974  41 82 00 20 */	beq .L_803A8A54
/* 803A8A38 003A5978  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 803A8A3C 003A597C  C0 22 11 7C */	lfs f1, lbl_8051F4DC@sda21(r2)
/* 803A8A40 003A5980  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A8A44 003A5984  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803A8A48 003A5988  C0 1F 01 D0 */	lfs f0, 0x1d0(r31)
/* 803A8A4C 003A598C  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A8A50 003A5990  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_803A8A54:
/* 803A8A54 003A5994  80 1F 03 64 */	lwz r0, 0x364(r31)
/* 803A8A58 003A5998  28 00 00 00 */	cmplwi r0, 0
/* 803A8A5C 003A599C  41 82 00 F0 */	beq .L_803A8B4C
/* 803A8A60 003A59A0  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 803A8A64 003A59A4  2C 00 00 00 */	cmpwi r0, 0
/* 803A8A68 003A59A8  40 82 00 64 */	bne .L_803A8ACC
/* 803A8A6C 003A59AC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 803A8A70 003A59B0  38 80 51 74 */	li r4, 0x5174
/* 803A8A74 003A59B4  38 A0 00 00 */	li r5, 0
/* 803A8A78 003A59B8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A8A7C 003A59BC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A8A80 003A59C0  7D 89 03 A6 */	mtctr r12
/* 803A8A84 003A59C4  4E 80 04 21 */	bctrl 
/* 803A8A88 003A59C8  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A8A8C 003A59CC  38 80 51 6E */	li r4, 0x516e
/* 803A8A90 003A59D0  38 A0 00 00 */	li r5, 0
/* 803A8A94 003A59D4  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 803A8A98 003A59D8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A8A9C 003A59DC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A8AA0 003A59E0  7D 89 03 A6 */	mtctr r12
/* 803A8AA4 003A59E4  4E 80 04 21 */	bctrl 
/* 803A8AA8 003A59E8  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A8AAC 003A59EC  38 80 51 89 */	li r4, 0x5189
/* 803A8AB0 003A59F0  38 A0 00 00 */	li r5, 0
/* 803A8AB4 003A59F4  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 803A8AB8 003A59F8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A8ABC 003A59FC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A8AC0 003A5A00  7D 89 03 A6 */	mtctr r12
/* 803A8AC4 003A5A04  4E 80 04 21 */	bctrl 
/* 803A8AC8 003A5A08  48 00 00 84 */	b .L_803A8B4C
.L_803A8ACC:
/* 803A8ACC 003A5A0C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 803A8AD0 003A5A10  38 80 51 74 */	li r4, 0x5174
/* 803A8AD4 003A5A14  38 A0 00 00 */	li r5, 0
/* 803A8AD8 003A5A18  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A8ADC 003A5A1C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A8AE0 003A5A20  7D 89 03 A6 */	mtctr r12
/* 803A8AE4 003A5A24  4E 80 04 21 */	bctrl 
/* 803A8AE8 003A5A28  28 03 00 00 */	cmplwi r3, 0
/* 803A8AEC 003A5A2C  41 82 00 20 */	beq .L_803A8B0C
/* 803A8AF0 003A5A30  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803A8AF4 003A5A34  38 80 00 00 */	li r4, 0
/* 803A8AF8 003A5A38  C0 22 11 80 */	lfs f1, lbl_8051F4E0@sda21(r2)
/* 803A8AFC 003A5A3C  38 A0 00 00 */	li r5, 0
/* 803A8B00 003A5A40  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8B04 003A5A44  7D 89 03 A6 */	mtctr r12
/* 803A8B08 003A5A48  4E 80 04 21 */	bctrl 
.L_803A8B0C:
/* 803A8B0C 003A5A4C  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A8B10 003A5A50  38 80 51 6E */	li r4, 0x516e
/* 803A8B14 003A5A54  38 A0 00 00 */	li r5, 0
/* 803A8B18 003A5A58  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 803A8B1C 003A5A5C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A8B20 003A5A60  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A8B24 003A5A64  7D 89 03 A6 */	mtctr r12
/* 803A8B28 003A5A68  4E 80 04 21 */	bctrl 
/* 803A8B2C 003A5A6C  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803A8B30 003A5A70  38 80 51 89 */	li r4, 0x5189
/* 803A8B34 003A5A74  38 A0 00 00 */	li r5, 0
/* 803A8B38 003A5A78  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 803A8B3C 003A5A7C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803A8B40 003A5A80  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803A8B44 003A5A84  7D 89 03 A6 */	mtctr r12
/* 803A8B48 003A5A88  4E 80 04 21 */	bctrl 
.L_803A8B4C:
/* 803A8B4C 003A5A8C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 803A8B50 003A5A90  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 803A8B54 003A5A94  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 803A8B58 003A5A98  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 803A8B5C 003A5A9C  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 803A8B60 003A5AA0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 803A8B64 003A5AA4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803A8B68 003A5AA8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803A8B6C 003A5AAC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803A8B70 003A5AB0  7C 08 03 A6 */	mtlr r0
/* 803A8B74 003A5AB4  38 21 00 80 */	addi r1, r1, 0x80
/* 803A8B78 003A5AB8  4E 80 00 20 */	blr 
.endfn walkFunc__Q34Game8BlackMan3ObjFv

.fn isReachToGoal__Q34Game8BlackMan3ObjFf, global
/* 803A8B7C 003A5ABC  EC 01 00 72 */	fmuls f0, f1, f1
/* 803A8B80 003A5AC0  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 803A8B84 003A5AC4  C0 23 02 D8 */	lfs f1, 0x2d8(r3)
/* 803A8B88 003A5AC8  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 803A8B8C 003A5ACC  EC 42 08 28 */	fsubs f2, f2, f1
/* 803A8B90 003A5AD0  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 803A8B94 003A5AD4  EC 63 08 28 */	fsubs f3, f3, f1
/* 803A8B98 003A5AD8  EC 22 00 B2 */	fmuls f1, f2, f2
/* 803A8B9C 003A5ADC  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 803A8BA0 003A5AE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A8BA4 003A5AE4  7C 00 00 26 */	mfcr r0
/* 803A8BA8 003A5AE8  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803A8BAC 003A5AEC  4E 80 00 20 */	blr 
.endfn isReachToGoal__Q34Game8BlackMan3ObjFf

.fn findNextRoutePoint__Q34Game8BlackMan3ObjFv, global
/* 803A8BB0 003A5AF0  94 21 FE 20 */	stwu r1, -0x1e0(r1)
/* 803A8BB4 003A5AF4  7C 08 02 A6 */	mflr r0
/* 803A8BB8 003A5AF8  90 01 01 E4 */	stw r0, 0x1e4(r1)
/* 803A8BBC 003A5AFC  DB E1 01 D0 */	stfd f31, 0x1d0(r1)
/* 803A8BC0 003A5B00  F3 E1 01 D8 */	psq_st f31, 472(r1), 0, qr0
/* 803A8BC4 003A5B04  DB C1 01 C0 */	stfd f30, 0x1c0(r1)
/* 803A8BC8 003A5B08  F3 C1 01 C8 */	psq_st f30, 456(r1), 0, qr0
/* 803A8BCC 003A5B0C  DB A1 01 B0 */	stfd f29, 0x1b0(r1)
/* 803A8BD0 003A5B10  F3 A1 01 B8 */	psq_st f29, 440(r1), 0, qr0
/* 803A8BD4 003A5B14  DB 81 01 A0 */	stfd f28, 0x1a0(r1)
/* 803A8BD8 003A5B18  F3 81 01 A8 */	psq_st f28, 424(r1), 0, qr0
/* 803A8BDC 003A5B1C  DB 61 01 90 */	stfd f27, 0x190(r1)
/* 803A8BE0 003A5B20  F3 61 01 98 */	psq_st f27, 408(r1), 0, qr0
/* 803A8BE4 003A5B24  DB 41 01 80 */	stfd f26, 0x180(r1)
/* 803A8BE8 003A5B28  F3 41 01 88 */	psq_st f26, 392(r1), 0, qr0
/* 803A8BEC 003A5B2C  BE C1 01 58 */	stmw r22, 0x158(r1)
/* 803A8BF0 003A5B30  7C 7F 1B 78 */	mr r31, r3
/* 803A8BF4 003A5B34  88 03 03 4C */	lbz r0, 0x34c(r3)
/* 803A8BF8 003A5B38  28 00 00 00 */	cmplwi r0, 0
/* 803A8BFC 003A5B3C  40 82 00 10 */	bne .L_803A8C0C
/* 803A8C00 003A5B40  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A8C04 003A5B44  2C 00 00 04 */	cmpwi r0, 4
/* 803A8C08 003A5B48  40 82 00 10 */	bne .L_803A8C18
.L_803A8C0C:
/* 803A8C0C 003A5B4C  7F E3 FB 78 */	mr r3, r31
/* 803A8C10 003A5B50  48 00 0E 71 */	bl findNextTraceRoutePoint__Q34Game8BlackMan3ObjFv
/* 803A8C14 003A5B54  48 00 0E 28 */	b .L_803A9A3C
.L_803A8C18:
/* 803A8C18 003A5B58  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 803A8C1C 003A5B5C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A8C20 003A5B60  2C 00 00 00 */	cmpwi r0, 0
/* 803A8C24 003A5B64  83 C3 00 08 */	lwz r30, 8(r3)
/* 803A8C28 003A5B68  40 81 02 C8 */	ble .L_803A8EF0
/* 803A8C2C 003A5B6C  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A8C30 003A5B70  A8 7F 03 40 */	lha r3, 0x340(r31)
/* 803A8C34 003A5B74  7C 00 18 00 */	cmpw r0, r3
/* 803A8C38 003A5B78  40 82 00 2C */	bne .L_803A8C64
/* 803A8C3C 003A5B7C  A8 1F 03 44 */	lha r0, 0x344(r31)
/* 803A8C40 003A5B80  7C 03 00 00 */	cmpw r3, r0
/* 803A8C44 003A5B84  40 82 00 20 */	bne .L_803A8C64
/* 803A8C48 003A5B88  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 803A8C4C 003A5B8C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 803A8C50 003A5B90  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 803A8C54 003A5B94  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 803A8C58 003A5B98  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 803A8C5C 003A5B9C  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 803A8C60 003A5BA0  48 00 0D DC */	b .L_803A9A3C
.L_803A8C64:
/* 803A8C64 003A5BA4  38 A0 00 00 */	li r5, 0
/* 803A8C68 003A5BA8  38 00 FF FF */	li r0, -1
/* 803A8C6C 003A5BAC  90 BF 02 E8 */	stw r5, 0x2e8(r31)
/* 803A8C70 003A5BB0  7F C3 F3 78 */	mr r3, r30
/* 803A8C74 003A5BB4  38 81 01 18 */	addi r4, r1, 0x118
/* 803A8C78 003A5BB8  90 A1 01 34 */	stw r5, 0x134(r1)
/* 803A8C7C 003A5BBC  90 A1 01 30 */	stw r5, 0x130(r1)
/* 803A8C80 003A5BC0  98 A1 01 24 */	stb r5, 0x124(r1)
/* 803A8C84 003A5BC4  B0 01 01 2C */	sth r0, 0x12c(r1)
/* 803A8C88 003A5BC8  90 A1 01 28 */	stw r5, 0x128(r1)
/* 803A8C8C 003A5BCC  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 803A8C90 003A5BD0  D0 01 01 18 */	stfs f0, 0x118(r1)
/* 803A8C94 003A5BD4  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 803A8C98 003A5BD8  D0 01 01 1C */	stfs f0, 0x11c(r1)
/* 803A8C9C 003A5BDC  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 803A8CA0 003A5BE0  D0 01 01 20 */	stfs f0, 0x120(r1)
/* 803A8CA4 003A5BE4  4B DC A6 C9 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 803A8CA8 003A5BE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A8CAC 003A5BEC  41 82 02 44 */	beq .L_803A8EF0
/* 803A8CB0 003A5BF0  80 81 01 30 */	lwz r4, 0x130(r1)
/* 803A8CB4 003A5BF4  AB 1F 03 40 */	lha r24, 0x340(r31)
/* 803A8CB8 003A5BF8  88 04 00 34 */	lbz r0, 0x34(r4)
/* 803A8CBC 003A5BFC  AB 3F 03 42 */	lha r25, 0x342(r31)
/* 803A8CC0 003A5C00  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A8CC4 003A5C04  40 82 00 AC */	bne .L_803A8D70
/* 803A8CC8 003A5C08  7F C3 F3 78 */	mr r3, r30
/* 803A8CCC 003A5C0C  A8 84 00 36 */	lha r4, 0x36(r4)
/* 803A8CD0 003A5C10  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8CD4 003A5C14  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8CD8 003A5C18  7D 89 03 A6 */	mtctr r12
/* 803A8CDC 003A5C1C  4E 80 04 21 */	bctrl 
/* 803A8CE0 003A5C20  A8 03 00 38 */	lha r0, 0x38(r3)
/* 803A8CE4 003A5C24  2C 00 00 01 */	cmpwi r0, 1
/* 803A8CE8 003A5C28  40 82 00 2C */	bne .L_803A8D14
/* 803A8CEC 003A5C2C  80 61 01 34 */	lwz r3, 0x134(r1)
/* 803A8CF0 003A5C30  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803A8CF4 003A5C34  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A8CF8 003A5C38  40 82 00 1C */	bne .L_803A8D14
/* 803A8CFC 003A5C3C  A8 1F 03 40 */	lha r0, 0x340(r31)
/* 803A8D00 003A5C40  B0 1F 03 42 */	sth r0, 0x342(r31)
/* 803A8D04 003A5C44  80 61 01 34 */	lwz r3, 0x134(r1)
/* 803A8D08 003A5C48  A8 03 00 36 */	lha r0, 0x36(r3)
/* 803A8D0C 003A5C4C  B0 1F 03 40 */	sth r0, 0x340(r31)
/* 803A8D10 003A5C50  48 00 00 B8 */	b .L_803A8DC8
.L_803A8D14:
/* 803A8D14 003A5C54  80 81 01 30 */	lwz r4, 0x130(r1)
/* 803A8D18 003A5C58  7F C3 F3 78 */	mr r3, r30
/* 803A8D1C 003A5C5C  A8 04 00 36 */	lha r0, 0x36(r4)
/* 803A8D20 003A5C60  B0 1F 03 40 */	sth r0, 0x340(r31)
/* 803A8D24 003A5C64  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8D28 003A5C68  80 81 01 34 */	lwz r4, 0x134(r1)
/* 803A8D2C 003A5C6C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8D30 003A5C70  A8 84 00 36 */	lha r4, 0x36(r4)
/* 803A8D34 003A5C74  7D 89 03 A6 */	mtctr r12
/* 803A8D38 003A5C78  4E 80 04 21 */	bctrl 
/* 803A8D3C 003A5C7C  A8 03 00 38 */	lha r0, 0x38(r3)
/* 803A8D40 003A5C80  2C 00 00 01 */	cmpwi r0, 1
/* 803A8D44 003A5C84  40 81 00 20 */	ble .L_803A8D64
/* 803A8D48 003A5C88  80 61 01 34 */	lwz r3, 0x134(r1)
/* 803A8D4C 003A5C8C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803A8D50 003A5C90  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A8D54 003A5C94  40 82 00 10 */	bne .L_803A8D64
/* 803A8D58 003A5C98  A8 03 00 36 */	lha r0, 0x36(r3)
/* 803A8D5C 003A5C9C  B0 1F 03 42 */	sth r0, 0x342(r31)
/* 803A8D60 003A5CA0  48 00 00 68 */	b .L_803A8DC8
.L_803A8D64:
/* 803A8D64 003A5CA4  A8 1F 03 40 */	lha r0, 0x340(r31)
/* 803A8D68 003A5CA8  B0 1F 03 42 */	sth r0, 0x342(r31)
/* 803A8D6C 003A5CAC  48 00 00 5C */	b .L_803A8DC8
.L_803A8D70:
/* 803A8D70 003A5CB0  80 81 01 34 */	lwz r4, 0x134(r1)
/* 803A8D74 003A5CB4  7F C3 F3 78 */	mr r3, r30
/* 803A8D78 003A5CB8  A8 04 00 36 */	lha r0, 0x36(r4)
/* 803A8D7C 003A5CBC  B0 1F 03 40 */	sth r0, 0x340(r31)
/* 803A8D80 003A5CC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8D84 003A5CC4  80 81 01 30 */	lwz r4, 0x130(r1)
/* 803A8D88 003A5CC8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8D8C 003A5CCC  A8 84 00 36 */	lha r4, 0x36(r4)
/* 803A8D90 003A5CD0  7D 89 03 A6 */	mtctr r12
/* 803A8D94 003A5CD4  4E 80 04 21 */	bctrl 
/* 803A8D98 003A5CD8  A8 03 00 38 */	lha r0, 0x38(r3)
/* 803A8D9C 003A5CDC  2C 00 00 01 */	cmpwi r0, 1
/* 803A8DA0 003A5CE0  40 81 00 20 */	ble .L_803A8DC0
/* 803A8DA4 003A5CE4  80 61 01 30 */	lwz r3, 0x130(r1)
/* 803A8DA8 003A5CE8  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803A8DAC 003A5CEC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A8DB0 003A5CF0  40 82 00 10 */	bne .L_803A8DC0
/* 803A8DB4 003A5CF4  A8 03 00 36 */	lha r0, 0x36(r3)
/* 803A8DB8 003A5CF8  B0 1F 03 42 */	sth r0, 0x342(r31)
/* 803A8DBC 003A5CFC  48 00 00 0C */	b .L_803A8DC8
.L_803A8DC0:
/* 803A8DC0 003A5D00  A8 1F 03 40 */	lha r0, 0x340(r31)
/* 803A8DC4 003A5D04  B0 1F 03 42 */	sth r0, 0x342(r31)
.L_803A8DC8:
/* 803A8DC8 003A5D08  A8 7F 03 40 */	lha r3, 0x340(r31)
/* 803A8DCC 003A5D0C  7C 03 C0 00 */	cmpw r3, r24
/* 803A8DD0 003A5D10  40 82 00 E8 */	bne .L_803A8EB8
/* 803A8DD4 003A5D14  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A8DD8 003A5D18  7C 00 C8 00 */	cmpw r0, r25
/* 803A8DDC 003A5D1C  40 82 00 DC */	bne .L_803A8EB8
/* 803A8DE0 003A5D20  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 803A8DE4 003A5D24  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A8DE8 003A5D28  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 803A8DEC 003A5D2C  C0 62 11 60 */	lfs f3, lbl_8051F4C0@sda21(r2)
/* 803A8DF0 003A5D30  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 803A8DF4 003A5D34  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 803A8DF8 003A5D38  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803A8DFC 003A5D3C  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 803A8E00 003A5D40  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 803A8E04 003A5D44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A8E08 003A5D48  40 80 00 30 */	bge .L_803A8E38
/* 803A8E0C 003A5D4C  C0 02 11 90 */	lfs f0, lbl_8051F4F0@sda21(r2)
/* 803A8E10 003A5D50  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A8E14 003A5D54  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A8E18 003A5D58  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A8E1C 003A5D5C  FC 00 00 1E */	fctiwz f0, f0
/* 803A8E20 003A5D60  D8 01 01 38 */	stfd f0, 0x138(r1)
/* 803A8E24 003A5D64  80 01 01 3C */	lwz r0, 0x13c(r1)
/* 803A8E28 003A5D68  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A8E2C 003A5D6C  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A8E30 003A5D70  FC 40 00 50 */	fneg f2, f0
/* 803A8E34 003A5D74  48 00 00 28 */	b .L_803A8E5C
.L_803A8E38:
/* 803A8E38 003A5D78  C0 02 11 94 */	lfs f0, lbl_8051F4F4@sda21(r2)
/* 803A8E3C 003A5D7C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A8E40 003A5D80  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A8E44 003A5D84  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A8E48 003A5D88  FC 00 00 1E */	fctiwz f0, f0
/* 803A8E4C 003A5D8C  D8 01 01 40 */	stfd f0, 0x140(r1)
/* 803A8E50 003A5D90  80 01 01 44 */	lwz r0, 0x144(r1)
/* 803A8E54 003A5D94  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A8E58 003A5D98  7C 43 04 2E */	lfsx f2, r3, r0
.L_803A8E5C:
/* 803A8E5C 003A5D9C  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 803A8E60 003A5DA0  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A8E64 003A5DA4  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 803A8E68 003A5DA8  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 803A8E6C 003A5DAC  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 803A8E70 003A5DB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A8E74 003A5DB4  40 80 00 08 */	bge .L_803A8E7C
/* 803A8E78 003A5DB8  FC 20 08 50 */	fneg f1, f1
.L_803A8E7C:
/* 803A8E7C 003A5DBC  C0 02 11 94 */	lfs f0, lbl_8051F4F4@sda21(r2)
/* 803A8E80 003A5DC0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A8E84 003A5DC4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A8E88 003A5DC8  C0 42 11 60 */	lfs f2, lbl_8051F4C0@sda21(r2)
/* 803A8E8C 003A5DCC  EC 21 00 32 */	fmuls f1, f1, f0
/* 803A8E90 003A5DD0  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 803A8E94 003A5DD4  FC 20 08 1E */	fctiwz f1, f1
/* 803A8E98 003A5DD8  D8 21 01 48 */	stfd f1, 0x148(r1)
/* 803A8E9C 003A5DDC  80 01 01 4C */	lwz r0, 0x14c(r1)
/* 803A8EA0 003A5DE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A8EA4 003A5DE4  7C 63 02 14 */	add r3, r3, r0
/* 803A8EA8 003A5DE8  C0 23 00 04 */	lfs f1, 4(r3)
/* 803A8EAC 003A5DEC  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 803A8EB0 003A5DF0  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 803A8EB4 003A5DF4  48 00 0B 88 */	b .L_803A9A3C
.L_803A8EB8:
/* 803A8EB8 003A5DF8  B0 7F 03 42 */	sth r3, 0x342(r31)
/* 803A8EBC 003A5DFC  7F C3 F3 78 */	mr r3, r30
/* 803A8EC0 003A5E00  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8EC4 003A5E04  A8 9F 03 40 */	lha r4, 0x340(r31)
/* 803A8EC8 003A5E08  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8ECC 003A5E0C  7D 89 03 A6 */	mtctr r12
/* 803A8ED0 003A5E10  4E 80 04 21 */	bctrl 
/* 803A8ED4 003A5E14  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 803A8ED8 003A5E18  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 803A8EDC 003A5E1C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 803A8EE0 003A5E20  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 803A8EE4 003A5E24  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 803A8EE8 003A5E28  D0 5F 02 D8 */	stfs f2, 0x2d8(r31)
/* 803A8EEC 003A5E2C  48 00 0B 50 */	b .L_803A9A3C
.L_803A8EF0:
/* 803A8EF0 003A5E30  7F C3 F3 78 */	mr r3, r30
/* 803A8EF4 003A5E34  A8 9F 03 40 */	lha r4, 0x340(r31)
/* 803A8EF8 003A5E38  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8EFC 003A5E3C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8F00 003A5E40  7D 89 03 A6 */	mtctr r12
/* 803A8F04 003A5E44  4E 80 04 21 */	bctrl 
/* 803A8F08 003A5E48  7C 79 1B 79 */	or. r25, r3, r3
/* 803A8F0C 003A5E4C  40 82 00 20 */	bne .L_803A8F2C
/* 803A8F10 003A5E50  3C 60 80 49 */	lis r3, lbl_80495688@ha
/* 803A8F14 003A5E54  3C A0 80 49 */	lis r5, lbl_80495698@ha
/* 803A8F18 003A5E58  38 63 56 88 */	addi r3, r3, lbl_80495688@l
/* 803A8F1C 003A5E5C  38 80 06 15 */	li r4, 0x615
/* 803A8F20 003A5E60  38 A5 56 98 */	addi r5, r5, lbl_80495698@l
/* 803A8F24 003A5E64  4C C6 31 82 */	crclr 6
/* 803A8F28 003A5E68  4B C8 17 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A8F2C:
/* 803A8F2C 003A5E6C  7F 24 CB 78 */	mr r4, r25
/* 803A8F30 003A5E70  38 61 00 FC */	addi r3, r1, 0xfc
/* 803A8F34 003A5E74  3B A0 00 00 */	li r29, 0
/* 803A8F38 003A5E78  38 A0 00 01 */	li r5, 1
/* 803A8F3C 003A5E7C  4B DC 95 E5 */	bl __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
/* 803A8F40 003A5E80  38 61 00 FC */	addi r3, r1, 0xfc
/* 803A8F44 003A5E84  4B DC 95 F1 */	bl first__Q24Game16WayPointIteratorFv
/* 803A8F48 003A5E88  3B 01 01 08 */	addi r24, r1, 0x108
/* 803A8F4C 003A5E8C  7F 16 C3 78 */	mr r22, r24
/* 803A8F50 003A5E90  48 00 00 80 */	b .L_803A8FD0
.L_803A8F54:
/* 803A8F54 003A5E94  38 61 00 FC */	addi r3, r1, 0xfc
/* 803A8F58 003A5E98  4B DC 96 6D */	bl __ml__Q24Game16WayPointIteratorFv
/* 803A8F5C 003A5E9C  7C 60 1B 78 */	mr r0, r3
/* 803A8F60 003A5EA0  7F C3 F3 78 */	mr r3, r30
/* 803A8F64 003A5EA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A8F68 003A5EA8  7C 17 03 78 */	mr r23, r0
/* 803A8F6C 003A5EAC  7E E4 BB 78 */	mr r4, r23
/* 803A8F70 003A5EB0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A8F74 003A5EB4  7D 89 03 A6 */	mtctr r12
/* 803A8F78 003A5EB8  4E 80 04 21 */	bctrl 
/* 803A8F7C 003A5EBC  C0 43 00 4C */	lfs f2, 0x4c(r3)
/* 803A8F80 003A5EC0  28 03 00 00 */	cmplwi r3, 0
/* 803A8F84 003A5EC4  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 803A8F88 003A5EC8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803A8F8C 003A5ECC  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 803A8F90 003A5ED0  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 803A8F94 003A5ED4  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 803A8F98 003A5ED8  41 82 00 30 */	beq .L_803A8FC8
/* 803A8F9C 003A5EDC  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803A8FA0 003A5EE0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A8FA4 003A5EE4  40 82 00 24 */	bne .L_803A8FC8
/* 803A8FA8 003A5EE8  A8 83 00 5C */	lha r4, 0x5c(r3)
/* 803A8FAC 003A5EEC  A8 03 00 38 */	lha r0, 0x38(r3)
/* 803A8FB0 003A5EF0  7C 04 02 14 */	add r0, r4, r0
/* 803A8FB4 003A5EF4  2C 00 00 01 */	cmpwi r0, 1
/* 803A8FB8 003A5EF8  40 81 00 10 */	ble .L_803A8FC8
/* 803A8FBC 003A5EFC  B2 F6 00 00 */	sth r23, 0(r22)
/* 803A8FC0 003A5F00  3A D6 00 02 */	addi r22, r22, 2
/* 803A8FC4 003A5F04  3B BD 00 01 */	addi r29, r29, 1
.L_803A8FC8:
/* 803A8FC8 003A5F08  38 61 00 FC */	addi r3, r1, 0xfc
/* 803A8FCC 003A5F0C  4B DC 95 91 */	bl next__Q24Game16WayPointIteratorFv
.L_803A8FD0:
/* 803A8FD0 003A5F10  38 61 00 FC */	addi r3, r1, 0xfc
/* 803A8FD4 003A5F14  4B DC 95 B5 */	bl isDone__Q24Game16WayPointIteratorFv
/* 803A8FD8 003A5F18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A8FDC 003A5F1C  41 82 FF 78 */	beq .L_803A8F54
/* 803A8FE0 003A5F20  2C 1D 00 00 */	cmpwi r29, 0
/* 803A8FE4 003A5F24  40 82 00 8C */	bne .L_803A9070
/* 803A8FE8 003A5F28  7F 24 CB 78 */	mr r4, r25
/* 803A8FEC 003A5F2C  38 61 00 F0 */	addi r3, r1, 0xf0
/* 803A8FF0 003A5F30  38 A0 00 01 */	li r5, 1
/* 803A8FF4 003A5F34  4B DC 95 2D */	bl __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
/* 803A8FF8 003A5F38  38 61 00 F0 */	addi r3, r1, 0xf0
/* 803A8FFC 003A5F3C  4B DC 95 39 */	bl first__Q24Game16WayPointIteratorFv
/* 803A9000 003A5F40  57 A0 08 3C */	slwi r0, r29, 1
/* 803A9004 003A5F44  3A C1 01 08 */	addi r22, r1, 0x108
/* 803A9008 003A5F48  7E D6 02 14 */	add r22, r22, r0
/* 803A900C 003A5F4C  48 00 00 54 */	b .L_803A9060
.L_803A9010:
/* 803A9010 003A5F50  38 61 00 F0 */	addi r3, r1, 0xf0
/* 803A9014 003A5F54  4B DC 95 B1 */	bl __ml__Q24Game16WayPointIteratorFv
/* 803A9018 003A5F58  7C 60 1B 78 */	mr r0, r3
/* 803A901C 003A5F5C  7F C3 F3 78 */	mr r3, r30
/* 803A9020 003A5F60  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9024 003A5F64  7C 17 03 78 */	mr r23, r0
/* 803A9028 003A5F68  7E E4 BB 78 */	mr r4, r23
/* 803A902C 003A5F6C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9030 003A5F70  7D 89 03 A6 */	mtctr r12
/* 803A9034 003A5F74  4E 80 04 21 */	bctrl 
/* 803A9038 003A5F78  28 03 00 00 */	cmplwi r3, 0
/* 803A903C 003A5F7C  41 82 00 1C */	beq .L_803A9058
/* 803A9040 003A5F80  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803A9044 003A5F84  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A9048 003A5F88  40 82 00 10 */	bne .L_803A9058
/* 803A904C 003A5F8C  B2 F6 00 00 */	sth r23, 0(r22)
/* 803A9050 003A5F90  3A D6 00 02 */	addi r22, r22, 2
/* 803A9054 003A5F94  3B BD 00 01 */	addi r29, r29, 1
.L_803A9058:
/* 803A9058 003A5F98  38 61 00 F0 */	addi r3, r1, 0xf0
/* 803A905C 003A5F9C  4B DC 95 01 */	bl next__Q24Game16WayPointIteratorFv
.L_803A9060:
/* 803A9060 003A5FA0  38 61 00 F0 */	addi r3, r1, 0xf0
/* 803A9064 003A5FA4  4B DC 95 25 */	bl isDone__Q24Game16WayPointIteratorFv
/* 803A9068 003A5FA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A906C 003A5FAC  41 82 FF A4 */	beq .L_803A9010
.L_803A9070:
/* 803A9070 003A5FB0  2C 1D 00 00 */	cmpwi r29, 0
/* 803A9074 003A5FB4  41 82 09 90 */	beq .L_803A9A04
/* 803A9078 003A5FB8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A907C 003A5FBC  3B 80 FF FF */	li r28, -1
/* 803A9080 003A5FC0  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A9084 003A5FC4  3B 60 00 00 */	li r27, 0
/* 803A9088 003A5FC8  C0 03 04 4C */	lfs f0, 0x44c(r3)
/* 803A908C 003A5FCC  2C 00 00 02 */	cmpwi r0, 2
/* 803A9090 003A5FD0  EF E0 00 32 */	fmuls f31, f0, f0
/* 803A9094 003A5FD4  41 82 04 70 */	beq .L_803A9504
/* 803A9098 003A5FD8  40 80 00 14 */	bge .L_803A90AC
/* 803A909C 003A5FDC  2C 00 00 00 */	cmpwi r0, 0
/* 803A90A0 003A5FE0  41 82 00 18 */	beq .L_803A90B8
/* 803A90A4 003A5FE4  40 80 00 64 */	bge .L_803A9108
/* 803A90A8 003A5FE8  48 00 08 E4 */	b .L_803A998C
.L_803A90AC:
/* 803A90AC 003A5FEC  2C 00 00 04 */	cmpwi r0, 4
/* 803A90B0 003A5FF0  40 80 08 DC */	bge .L_803A998C
/* 803A90B4 003A5FF4  48 00 06 28 */	b .L_803A96DC
.L_803A90B8:
/* 803A90B8 003A5FF8  4B D2 04 E9 */	bl rand
/* 803A90BC 003A5FFC  3C 80 43 30 */	lis r4, 0x4330
/* 803A90C0 003A6000  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A90C4 003A6004  90 01 01 4C */	stw r0, 0x14c(r1)
/* 803A90C8 003A6008  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 803A90CC 003A600C  C8 42 11 88 */	lfd f2, lbl_8051F4E8@sda21(r2)
/* 803A90D0 003A6010  90 81 01 48 */	stw r4, 0x148(r1)
/* 803A90D4 003A6014  C0 02 11 98 */	lfs f0, lbl_8051F4F8@sda21(r2)
/* 803A90D8 003A6018  C8 21 01 48 */	lfd f1, 0x148(r1)
/* 803A90DC 003A601C  90 01 01 44 */	stw r0, 0x144(r1)
/* 803A90E0 003A6020  EC 21 10 28 */	fsubs f1, f1, f2
/* 803A90E4 003A6024  90 81 01 40 */	stw r4, 0x140(r1)
/* 803A90E8 003A6028  EC 21 00 24 */	fdivs f1, f1, f0
/* 803A90EC 003A602C  C8 01 01 40 */	lfd f0, 0x140(r1)
/* 803A90F0 003A6030  EC 00 10 28 */	fsubs f0, f0, f2
/* 803A90F4 003A6034  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A90F8 003A6038  FC 00 00 1E */	fctiwz f0, f0
/* 803A90FC 003A603C  D8 01 01 38 */	stfd f0, 0x138(r1)
/* 803A9100 003A6040  83 41 01 3C */	lwz r26, 0x13c(r1)
/* 803A9104 003A6044  48 00 08 88 */	b .L_803A998C
.L_803A9108:
/* 803A9108 003A6048  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 803A910C 003A604C  3A E0 00 00 */	li r23, 0
/* 803A9110 003A6050  3B 23 BC 9C */	addi r25, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 803A9114 003A6054  48 00 03 60 */	b .L_803A9474
.L_803A9118:
/* 803A9118 003A6058  80 0D 92 F4 */	lwz r0, pikiMgr__4Game@sda21(r13)
/* 803A911C 003A605C  38 60 00 00 */	li r3, 0
/* 803A9120 003A6060  93 21 00 E0 */	stw r25, 0xe0(r1)
/* 803A9124 003A6064  A8 98 00 00 */	lha r4, 0(r24)
/* 803A9128 003A6068  90 61 00 EC */	stw r3, 0xec(r1)
/* 803A912C 003A606C  90 61 00 E4 */	stw r3, 0xe4(r1)
/* 803A9130 003A6070  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 803A9134 003A6074  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A9138 003A6078  7C 00 20 00 */	cmpw r0, r4
/* 803A913C 003A607C  40 82 00 24 */	bne .L_803A9160
/* 803A9140 003A6080  88 1F 03 38 */	lbz r0, 0x338(r31)
/* 803A9144 003A6084  28 00 00 00 */	cmplwi r0, 0
/* 803A9148 003A6088  40 82 03 24 */	bne .L_803A946C
/* 803A914C 003A608C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A9150 003A6090  88 03 0A 15 */	lbz r0, 0xa15(r3)
/* 803A9154 003A6094  28 00 00 00 */	cmplwi r0, 0
/* 803A9158 003A6098  41 82 03 14 */	beq .L_803A946C
/* 803A915C 003A609C  3B 60 00 01 */	li r27, 1
.L_803A9160:
/* 803A9160 003A60A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9164 003A60A4  7F C3 F3 78 */	mr r3, r30
/* 803A9168 003A60A8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A916C 003A60AC  7D 89 03 A6 */	mtctr r12
/* 803A9170 003A60B0  4E 80 04 21 */	bctrl 
/* 803A9174 003A60B4  80 01 00 EC */	lwz r0, 0xec(r1)
/* 803A9178 003A60B8  7C 7A 1B 78 */	mr r26, r3
/* 803A917C 003A60BC  28 00 00 00 */	cmplwi r0, 0
/* 803A9180 003A60C0  40 82 00 20 */	bne .L_803A91A0
/* 803A9184 003A60C4  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A9188 003A60C8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A918C 003A60CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803A9190 003A60D0  7D 89 03 A6 */	mtctr r12
/* 803A9194 003A60D4  4E 80 04 21 */	bctrl 
/* 803A9198 003A60D8  90 61 00 E4 */	stw r3, 0xe4(r1)
/* 803A919C 003A60DC  48 00 02 0C */	b .L_803A93A8
.L_803A91A0:
/* 803A91A0 003A60E0  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A91A4 003A60E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803A91A8 003A60E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803A91AC 003A60EC  7D 89 03 A6 */	mtctr r12
/* 803A91B0 003A60F0  4E 80 04 21 */	bctrl 
/* 803A91B4 003A60F4  90 61 00 E4 */	stw r3, 0xe4(r1)
/* 803A91B8 003A60F8  48 00 00 58 */	b .L_803A9210
.L_803A91BC:
/* 803A91BC 003A60FC  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A91C0 003A6100  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A91C4 003A6104  81 83 00 00 */	lwz r12, 0(r3)
/* 803A91C8 003A6108  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803A91CC 003A610C  7D 89 03 A6 */	mtctr r12
/* 803A91D0 003A6110  4E 80 04 21 */	bctrl 
/* 803A91D4 003A6114  7C 64 1B 78 */	mr r4, r3
/* 803A91D8 003A6118  80 61 00 EC */	lwz r3, 0xec(r1)
/* 803A91DC 003A611C  81 83 00 00 */	lwz r12, 0(r3)
/* 803A91E0 003A6120  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A91E4 003A6124  7D 89 03 A6 */	mtctr r12
/* 803A91E8 003A6128  4E 80 04 21 */	bctrl 
/* 803A91EC 003A612C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A91F0 003A6130  40 82 01 B8 */	bne .L_803A93A8
/* 803A91F4 003A6134  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A91F8 003A6138  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A91FC 003A613C  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9200 003A6140  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A9204 003A6144  7D 89 03 A6 */	mtctr r12
/* 803A9208 003A6148  4E 80 04 21 */	bctrl 
/* 803A920C 003A614C  90 61 00 E4 */	stw r3, 0xe4(r1)
.L_803A9210:
/* 803A9210 003A6150  81 81 00 E0 */	lwz r12, 0xe0(r1)
/* 803A9214 003A6154  38 61 00 E0 */	addi r3, r1, 0xe0
/* 803A9218 003A6158  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803A921C 003A615C  7D 89 03 A6 */	mtctr r12
/* 803A9220 003A6160  4E 80 04 21 */	bctrl 
/* 803A9224 003A6164  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A9228 003A6168  41 82 FF 94 */	beq .L_803A91BC
/* 803A922C 003A616C  48 00 01 7C */	b .L_803A93A8
.L_803A9230:
/* 803A9230 003A6170  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A9234 003A6174  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9238 003A6178  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803A923C 003A617C  7D 89 03 A6 */	mtctr r12
/* 803A9240 003A6180  4E 80 04 21 */	bctrl 
/* 803A9244 003A6184  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9248 003A6188  7C 76 1B 78 */	mr r22, r3
/* 803A924C 003A618C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803A9250 003A6190  7D 89 03 A6 */	mtctr r12
/* 803A9254 003A6194  4E 80 04 21 */	bctrl 
/* 803A9258 003A6198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A925C 003A619C  41 82 00 90 */	beq .L_803A92EC
/* 803A9260 003A61A0  7E C3 B3 78 */	mr r3, r22
/* 803A9264 003A61A4  4B DF 63 11 */	bl isStickTo__Q24Game8CreatureFv
/* 803A9268 003A61A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A926C 003A61AC  41 82 00 80 */	beq .L_803A92EC
/* 803A9270 003A61B0  7E C4 B3 78 */	mr r4, r22
/* 803A9274 003A61B4  C3 DA 00 4C */	lfs f30, 0x4c(r26)
/* 803A9278 003A61B8  81 96 00 00 */	lwz r12, 0(r22)
/* 803A927C 003A61BC  38 61 00 98 */	addi r3, r1, 0x98
/* 803A9280 003A61C0  C0 1A 00 50 */	lfs f0, 0x50(r26)
/* 803A9284 003A61C4  C3 BA 00 54 */	lfs f29, 0x54(r26)
/* 803A9288 003A61C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A928C 003A61CC  D3 C1 00 80 */	stfs f30, 0x80(r1)
/* 803A9290 003A61D0  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 803A9294 003A61D4  D3 A1 00 88 */	stfs f29, 0x88(r1)
/* 803A9298 003A61D8  D3 C1 00 8C */	stfs f30, 0x8c(r1)
/* 803A929C 003A61DC  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 803A92A0 003A61E0  D3 A1 00 94 */	stfs f29, 0x94(r1)
/* 803A92A4 003A61E4  7D 89 03 A6 */	mtctr r12
/* 803A92A8 003A61E8  4E 80 04 21 */	bctrl 
/* 803A92AC 003A61EC  7E C4 B3 78 */	mr r4, r22
/* 803A92B0 003A61F0  38 61 00 A4 */	addi r3, r1, 0xa4
/* 803A92B4 003A61F4  81 96 00 00 */	lwz r12, 0(r22)
/* 803A92B8 003A61F8  C3 81 00 A0 */	lfs f28, 0xa0(r1)
/* 803A92BC 003A61FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A92C0 003A6200  7D 89 03 A6 */	mtctr r12
/* 803A92C4 003A6204  4E 80 04 21 */	bctrl 
/* 803A92C8 003A6208  EC 1C E8 28 */	fsubs f0, f28, f29
/* 803A92CC 003A620C  C0 21 00 A4 */	lfs f1, 0xa4(r1)
/* 803A92D0 003A6210  EC 21 F0 28 */	fsubs f1, f1, f30
/* 803A92D4 003A6214  EC 00 00 32 */	fmuls f0, f0, f0
/* 803A92D8 003A6218  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 803A92DC 003A621C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803A92E0 003A6220  40 80 00 0C */	bge .L_803A92EC
/* 803A92E4 003A6224  FF E0 00 90 */	fmr f31, f0
/* 803A92E8 003A6228  7E FC BB 78 */	mr r28, r23
.L_803A92EC:
/* 803A92EC 003A622C  80 01 00 EC */	lwz r0, 0xec(r1)
/* 803A92F0 003A6230  28 00 00 00 */	cmplwi r0, 0
/* 803A92F4 003A6234  40 82 00 24 */	bne .L_803A9318
/* 803A92F8 003A6238  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A92FC 003A623C  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A9300 003A6240  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9304 003A6244  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A9308 003A6248  7D 89 03 A6 */	mtctr r12
/* 803A930C 003A624C  4E 80 04 21 */	bctrl 
/* 803A9310 003A6250  90 61 00 E4 */	stw r3, 0xe4(r1)
/* 803A9314 003A6254  48 00 00 94 */	b .L_803A93A8
.L_803A9318:
/* 803A9318 003A6258  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A931C 003A625C  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A9320 003A6260  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9324 003A6264  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A9328 003A6268  7D 89 03 A6 */	mtctr r12
/* 803A932C 003A626C  4E 80 04 21 */	bctrl 
/* 803A9330 003A6270  90 61 00 E4 */	stw r3, 0xe4(r1)
/* 803A9334 003A6274  48 00 00 58 */	b .L_803A938C
.L_803A9338:
/* 803A9338 003A6278  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A933C 003A627C  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A9340 003A6280  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9344 003A6284  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803A9348 003A6288  7D 89 03 A6 */	mtctr r12
/* 803A934C 003A628C  4E 80 04 21 */	bctrl 
/* 803A9350 003A6290  7C 64 1B 78 */	mr r4, r3
/* 803A9354 003A6294  80 61 00 EC */	lwz r3, 0xec(r1)
/* 803A9358 003A6298  81 83 00 00 */	lwz r12, 0(r3)
/* 803A935C 003A629C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A9360 003A62A0  7D 89 03 A6 */	mtctr r12
/* 803A9364 003A62A4  4E 80 04 21 */	bctrl 
/* 803A9368 003A62A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A936C 003A62AC  40 82 00 3C */	bne .L_803A93A8
/* 803A9370 003A62B0  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A9374 003A62B4  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A9378 003A62B8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A937C 003A62BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A9380 003A62C0  7D 89 03 A6 */	mtctr r12
/* 803A9384 003A62C4  4E 80 04 21 */	bctrl 
/* 803A9388 003A62C8  90 61 00 E4 */	stw r3, 0xe4(r1)
.L_803A938C:
/* 803A938C 003A62CC  81 81 00 E0 */	lwz r12, 0xe0(r1)
/* 803A9390 003A62D0  38 61 00 E0 */	addi r3, r1, 0xe0
/* 803A9394 003A62D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803A9398 003A62D8  7D 89 03 A6 */	mtctr r12
/* 803A939C 003A62DC  4E 80 04 21 */	bctrl 
/* 803A93A0 003A62E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A93A4 003A62E4  41 82 FF 94 */	beq .L_803A9338
.L_803A93A8:
/* 803A93A8 003A62E8  80 61 00 E8 */	lwz r3, 0xe8(r1)
/* 803A93AC 003A62EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803A93B0 003A62F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A93B4 003A62F4  7D 89 03 A6 */	mtctr r12
/* 803A93B8 003A62F8  4E 80 04 21 */	bctrl 
/* 803A93BC 003A62FC  80 81 00 E4 */	lwz r4, 0xe4(r1)
/* 803A93C0 003A6300  7C 04 18 40 */	cmplw r4, r3
/* 803A93C4 003A6304  40 82 FE 6C */	bne .L_803A9230
/* 803A93C8 003A6308  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803A93CC 003A630C  4B DB 18 55 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 803A93D0 003A6310  7C 76 1B 79 */	or. r22, r3, r3
/* 803A93D4 003A6314  41 82 00 98 */	beq .L_803A946C
/* 803A93D8 003A6318  81 83 00 00 */	lwz r12, 0(r3)
/* 803A93DC 003A631C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803A93E0 003A6320  7D 89 03 A6 */	mtctr r12
/* 803A93E4 003A6324  4E 80 04 21 */	bctrl 
/* 803A93E8 003A6328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A93EC 003A632C  41 82 00 80 */	beq .L_803A946C
/* 803A93F0 003A6330  7E C4 B3 78 */	mr r4, r22
/* 803A93F4 003A6334  C3 DA 00 4C */	lfs f30, 0x4c(r26)
/* 803A93F8 003A6338  81 96 00 00 */	lwz r12, 0(r22)
/* 803A93FC 003A633C  38 61 00 68 */	addi r3, r1, 0x68
/* 803A9400 003A6340  C0 1A 00 50 */	lfs f0, 0x50(r26)
/* 803A9404 003A6344  C3 BA 00 54 */	lfs f29, 0x54(r26)
/* 803A9408 003A6348  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A940C 003A634C  D3 C1 00 50 */	stfs f30, 0x50(r1)
/* 803A9410 003A6350  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 803A9414 003A6354  D3 A1 00 58 */	stfs f29, 0x58(r1)
/* 803A9418 003A6358  D3 C1 00 5C */	stfs f30, 0x5c(r1)
/* 803A941C 003A635C  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 803A9420 003A6360  D3 A1 00 64 */	stfs f29, 0x64(r1)
/* 803A9424 003A6364  7D 89 03 A6 */	mtctr r12
/* 803A9428 003A6368  4E 80 04 21 */	bctrl 
/* 803A942C 003A636C  7E C4 B3 78 */	mr r4, r22
/* 803A9430 003A6370  38 61 00 74 */	addi r3, r1, 0x74
/* 803A9434 003A6374  81 96 00 00 */	lwz r12, 0(r22)
/* 803A9438 003A6378  C3 81 00 70 */	lfs f28, 0x70(r1)
/* 803A943C 003A637C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A9440 003A6380  7D 89 03 A6 */	mtctr r12
/* 803A9444 003A6384  4E 80 04 21 */	bctrl 
/* 803A9448 003A6388  EC 1C E8 28 */	fsubs f0, f28, f29
/* 803A944C 003A638C  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 803A9450 003A6390  EC 21 F0 28 */	fsubs f1, f1, f30
/* 803A9454 003A6394  EC 00 00 32 */	fmuls f0, f0, f0
/* 803A9458 003A6398  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 803A945C 003A639C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803A9460 003A63A0  40 80 00 0C */	bge .L_803A946C
/* 803A9464 003A63A4  FF E0 00 90 */	fmr f31, f0
/* 803A9468 003A63A8  7E FC BB 78 */	mr r28, r23
.L_803A946C:
/* 803A946C 003A63AC  3B 18 00 02 */	addi r24, r24, 2
/* 803A9470 003A63B0  3A F7 00 01 */	addi r23, r23, 1
.L_803A9474:
/* 803A9474 003A63B4  7C 17 E8 00 */	cmpw r23, r29
/* 803A9478 003A63B8  41 80 FC A0 */	blt .L_803A9118
/* 803A947C 003A63BC  2C 1C 00 00 */	cmpwi r28, 0
/* 803A9480 003A63C0  40 80 00 7C */	bge .L_803A94FC
/* 803A9484 003A63C4  CB C2 11 88 */	lfd f30, lbl_8051F4E8@sda21(r2)
/* 803A9488 003A63C8  6F B8 80 00 */	xoris r24, r29, 0x8000
/* 803A948C 003A63CC  C3 A2 11 98 */	lfs f29, lbl_8051F4F8@sda21(r2)
/* 803A9490 003A63D0  3A E1 01 08 */	addi r23, r1, 0x108
/* 803A9494 003A63D4  3A C0 00 00 */	li r22, 0
/* 803A9498 003A63D8  3F 20 43 30 */	lis r25, 0x4330
.L_803A949C:
/* 803A949C 003A63DC  4B D2 01 05 */	bl rand
/* 803A94A0 003A63E0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A94A4 003A63E4  93 21 01 48 */	stw r25, 0x148(r1)
/* 803A94A8 003A63E8  A8 7F 03 42 */	lha r3, 0x342(r31)
/* 803A94AC 003A63EC  90 01 01 4C */	stw r0, 0x14c(r1)
/* 803A94B0 003A63F0  C8 01 01 48 */	lfd f0, 0x148(r1)
/* 803A94B4 003A63F4  93 01 01 44 */	stw r24, 0x144(r1)
/* 803A94B8 003A63F8  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803A94BC 003A63FC  93 21 01 40 */	stw r25, 0x140(r1)
/* 803A94C0 003A6400  EC 20 E8 24 */	fdivs f1, f0, f29
/* 803A94C4 003A6404  C8 01 01 40 */	lfd f0, 0x140(r1)
/* 803A94C8 003A6408  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803A94CC 003A640C  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A94D0 003A6410  FC 00 00 1E */	fctiwz f0, f0
/* 803A94D4 003A6414  D8 01 01 38 */	stfd f0, 0x138(r1)
/* 803A94D8 003A6418  83 41 01 3C */	lwz r26, 0x13c(r1)
/* 803A94DC 003A641C  57 40 08 3C */	slwi r0, r26, 1
/* 803A94E0 003A6420  7C 17 02 AE */	lhax r0, r23, r0
/* 803A94E4 003A6424  7C 03 00 00 */	cmpw r3, r0
/* 803A94E8 003A6428  40 82 04 A4 */	bne .L_803A998C
/* 803A94EC 003A642C  3A D6 00 01 */	addi r22, r22, 1
/* 803A94F0 003A6430  2C 16 00 64 */	cmpwi r22, 0x64
/* 803A94F4 003A6434  41 80 FF A8 */	blt .L_803A949C
/* 803A94F8 003A6438  48 00 04 94 */	b .L_803A998C
.L_803A94FC:
/* 803A94FC 003A643C  7F 9A E3 78 */	mr r26, r28
/* 803A9500 003A6440  48 00 04 8C */	b .L_803A998C
.L_803A9504:
/* 803A9504 003A6444  C3 42 11 9C */	lfs f26, lbl_8051F4FC@sda21(r2)
/* 803A9508 003A6448  3A C0 00 00 */	li r22, 0
/* 803A950C 003A644C  48 00 00 F0 */	b .L_803A95FC
.L_803A9510:
/* 803A9510 003A6450  A8 98 00 00 */	lha r4, 0(r24)
/* 803A9514 003A6454  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A9518 003A6458  7C 00 20 00 */	cmpw r0, r4
/* 803A951C 003A645C  41 82 00 D8 */	beq .L_803A95F4
/* 803A9520 003A6460  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9524 003A6464  7F C3 F3 78 */	mr r3, r30
/* 803A9528 003A6468  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A952C 003A646C  7D 89 03 A6 */	mtctr r12
/* 803A9530 003A6470  4E 80 04 21 */	bctrl 
/* 803A9534 003A6474  7C 77 1B 78 */	mr r23, r3
/* 803A9538 003A6478  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803A953C 003A647C  4B DB 16 E5 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 803A9540 003A6480  7C 79 1B 79 */	or. r25, r3, r3
/* 803A9544 003A6484  41 82 00 B0 */	beq .L_803A95F4
/* 803A9548 003A6488  7F 24 CB 78 */	mr r4, r25
/* 803A954C 003A648C  C3 B7 00 4C */	lfs f29, 0x4c(r23)
/* 803A9550 003A6490  81 99 00 00 */	lwz r12, 0(r25)
/* 803A9554 003A6494  38 61 00 2C */	addi r3, r1, 0x2c
/* 803A9558 003A6498  C3 F7 00 50 */	lfs f31, 0x50(r23)
/* 803A955C 003A649C  C3 D7 00 54 */	lfs f30, 0x54(r23)
/* 803A9560 003A64A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A9564 003A64A4  D3 A1 00 08 */	stfs f29, 8(r1)
/* 803A9568 003A64A8  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 803A956C 003A64AC  D3 C1 00 10 */	stfs f30, 0x10(r1)
/* 803A9570 003A64B0  D3 A1 00 14 */	stfs f29, 0x14(r1)
/* 803A9574 003A64B4  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 803A9578 003A64B8  D3 C1 00 1C */	stfs f30, 0x1c(r1)
/* 803A957C 003A64BC  D3 A1 00 20 */	stfs f29, 0x20(r1)
/* 803A9580 003A64C0  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 803A9584 003A64C4  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 803A9588 003A64C8  7D 89 03 A6 */	mtctr r12
/* 803A958C 003A64CC  4E 80 04 21 */	bctrl 
/* 803A9590 003A64D0  7F 24 CB 78 */	mr r4, r25
/* 803A9594 003A64D4  38 61 00 38 */	addi r3, r1, 0x38
/* 803A9598 003A64D8  81 99 00 00 */	lwz r12, 0(r25)
/* 803A959C 003A64DC  C3 61 00 34 */	lfs f27, 0x34(r1)
/* 803A95A0 003A64E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A95A4 003A64E4  7D 89 03 A6 */	mtctr r12
/* 803A95A8 003A64E8  4E 80 04 21 */	bctrl 
/* 803A95AC 003A64EC  7F 24 CB 78 */	mr r4, r25
/* 803A95B0 003A64F0  38 61 00 44 */	addi r3, r1, 0x44
/* 803A95B4 003A64F4  81 99 00 00 */	lwz r12, 0(r25)
/* 803A95B8 003A64F8  C3 81 00 3C */	lfs f28, 0x3c(r1)
/* 803A95BC 003A64FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A95C0 003A6500  7D 89 03 A6 */	mtctr r12
/* 803A95C4 003A6504  4E 80 04 21 */	bctrl 
/* 803A95C8 003A6508  EC 1C F8 28 */	fsubs f0, f28, f31
/* 803A95CC 003A650C  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 803A95D0 003A6510  EC 3B F0 28 */	fsubs f1, f27, f30
/* 803A95D4 003A6514  EC 42 E8 28 */	fsubs f2, f2, f29
/* 803A95D8 003A6518  EC 00 00 32 */	fmuls f0, f0, f0
/* 803A95DC 003A651C  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 803A95E0 003A6520  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 803A95E4 003A6524  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 803A95E8 003A6528  40 80 00 0C */	bge .L_803A95F4
/* 803A95EC 003A652C  FF 40 00 90 */	fmr f26, f0
/* 803A95F0 003A6530  7E DC B3 78 */	mr r28, r22
.L_803A95F4:
/* 803A95F4 003A6534  3B 18 00 02 */	addi r24, r24, 2
/* 803A95F8 003A6538  3A D6 00 01 */	addi r22, r22, 1
.L_803A95FC:
/* 803A95FC 003A653C  7C 16 E8 00 */	cmpw r22, r29
/* 803A9600 003A6540  41 80 FF 10 */	blt .L_803A9510
/* 803A9604 003A6544  2C 1C 00 00 */	cmpwi r28, 0
/* 803A9608 003A6548  41 80 00 0C */	blt .L_803A9614
/* 803A960C 003A654C  2C 1D 00 02 */	cmpwi r29, 2
/* 803A9610 003A6550  41 81 00 54 */	bgt .L_803A9664
.L_803A9614:
/* 803A9614 003A6554  4B D1 FF 8D */	bl rand
/* 803A9618 003A6558  3C 80 43 30 */	lis r4, 0x4330
/* 803A961C 003A655C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A9620 003A6560  90 01 01 4C */	stw r0, 0x14c(r1)
/* 803A9624 003A6564  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 803A9628 003A6568  C8 42 11 88 */	lfd f2, lbl_8051F4E8@sda21(r2)
/* 803A962C 003A656C  90 81 01 48 */	stw r4, 0x148(r1)
/* 803A9630 003A6570  C0 02 11 98 */	lfs f0, lbl_8051F4F8@sda21(r2)
/* 803A9634 003A6574  C8 21 01 48 */	lfd f1, 0x148(r1)
/* 803A9638 003A6578  90 01 01 44 */	stw r0, 0x144(r1)
/* 803A963C 003A657C  EC 21 10 28 */	fsubs f1, f1, f2
/* 803A9640 003A6580  90 81 01 40 */	stw r4, 0x140(r1)
/* 803A9644 003A6584  EC 21 00 24 */	fdivs f1, f1, f0
/* 803A9648 003A6588  C8 01 01 40 */	lfd f0, 0x140(r1)
/* 803A964C 003A658C  EC 00 10 28 */	fsubs f0, f0, f2
/* 803A9650 003A6590  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A9654 003A6594  FC 00 00 1E */	fctiwz f0, f0
/* 803A9658 003A6598  D8 01 01 38 */	stfd f0, 0x138(r1)
/* 803A965C 003A659C  83 41 01 3C */	lwz r26, 0x13c(r1)
/* 803A9660 003A65A0  48 00 03 2C */	b .L_803A998C
.L_803A9664:
/* 803A9664 003A65A4  CB C2 11 88 */	lfd f30, lbl_8051F4E8@sda21(r2)
/* 803A9668 003A65A8  6F B7 80 00 */	xoris r23, r29, 0x8000
/* 803A966C 003A65AC  C3 E2 11 98 */	lfs f31, lbl_8051F4F8@sda21(r2)
/* 803A9670 003A65B0  3A C0 00 00 */	li r22, 0
/* 803A9674 003A65B4  3F 00 43 30 */	lis r24, 0x4330
.L_803A9678:
/* 803A9678 003A65B8  4B D1 FF 29 */	bl rand
/* 803A967C 003A65BC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A9680 003A65C0  93 01 01 48 */	stw r24, 0x148(r1)
/* 803A9684 003A65C4  90 01 01 4C */	stw r0, 0x14c(r1)
/* 803A9688 003A65C8  C8 01 01 48 */	lfd f0, 0x148(r1)
/* 803A968C 003A65CC  92 E1 01 44 */	stw r23, 0x144(r1)
/* 803A9690 003A65D0  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803A9694 003A65D4  93 01 01 40 */	stw r24, 0x140(r1)
/* 803A9698 003A65D8  EC 20 F8 24 */	fdivs f1, f0, f31
/* 803A969C 003A65DC  C8 01 01 40 */	lfd f0, 0x140(r1)
/* 803A96A0 003A65E0  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803A96A4 003A65E4  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A96A8 003A65E8  FC 00 00 1E */	fctiwz f0, f0
/* 803A96AC 003A65EC  D8 01 01 38 */	stfd f0, 0x138(r1)
/* 803A96B0 003A65F0  83 41 01 3C */	lwz r26, 0x13c(r1)
/* 803A96B4 003A65F4  7C 1A E0 00 */	cmpw r26, r28
/* 803A96B8 003A65F8  40 82 00 14 */	bne .L_803A96CC
/* 803A96BC 003A65FC  3A D6 00 01 */	addi r22, r22, 1
/* 803A96C0 003A6600  3B 40 FF FF */	li r26, -1
/* 803A96C4 003A6604  2C 16 00 0A */	cmpwi r22, 0xa
/* 803A96C8 003A6608  41 80 FF B0 */	blt .L_803A9678
.L_803A96CC:
/* 803A96CC 003A660C  2C 1A 00 00 */	cmpwi r26, 0
/* 803A96D0 003A6610  40 80 02 BC */	bge .L_803A998C
/* 803A96D4 003A6614  7F 9A E3 78 */	mr r26, r28
/* 803A96D8 003A6618  48 00 02 B4 */	b .L_803A998C
.L_803A96DC:
/* 803A96DC 003A661C  C3 E2 10 D8 */	lfs f31, lbl_8051F438@sda21(r2)
/* 803A96E0 003A6620  3A C0 00 00 */	li r22, 0
/* 803A96E4 003A6624  48 00 02 44 */	b .L_803A9928
.L_803A96E8:
/* 803A96E8 003A6628  AA F8 00 00 */	lha r23, 0(r24)
/* 803A96EC 003A662C  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A96F0 003A6630  7C 00 B8 00 */	cmpw r0, r23
/* 803A96F4 003A6634  41 82 02 2C */	beq .L_803A9920
/* 803A96F8 003A6638  7F C3 F3 78 */	mr r3, r30
/* 803A96FC 003A663C  A8 9F 03 40 */	lha r4, 0x340(r31)
/* 803A9700 003A6640  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9704 003A6644  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9708 003A6648  7D 89 03 A6 */	mtctr r12
/* 803A970C 003A664C  4E 80 04 21 */	bctrl 
/* 803A9710 003A6650  C3 63 00 4C */	lfs f27, 0x4c(r3)
/* 803A9714 003A6654  C3 83 00 54 */	lfs f28, 0x54(r3)
/* 803A9718 003A6658  7F C3 F3 78 */	mr r3, r30
/* 803A971C 003A665C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9720 003A6660  A8 9F 03 42 */	lha r4, 0x342(r31)
/* 803A9724 003A6664  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9728 003A6668  7D 89 03 A6 */	mtctr r12
/* 803A972C 003A666C  4E 80 04 21 */	bctrl 
/* 803A9730 003A6670  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 803A9734 003A6674  C0 63 00 54 */	lfs f3, 0x54(r3)
/* 803A9738 003A6678  EC 5B 00 28 */	fsubs f2, f27, f0
/* 803A973C 003A667C  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A9740 003A6680  EC 7C 18 28 */	fsubs f3, f28, f3
/* 803A9744 003A6684  EC 81 00 72 */	fmuls f4, f1, f1
/* 803A9748 003A6688  D0 21 00 D8 */	stfs f1, 0xd8(r1)
/* 803A974C 003A668C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 803A9750 003A6690  EC A3 00 F2 */	fmuls f5, f3, f3
/* 803A9754 003A6694  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 803A9758 003A6698  EC 00 20 2A */	fadds f0, f0, f4
/* 803A975C 003A669C  D0 61 00 DC */	stfs f3, 0xdc(r1)
/* 803A9760 003A66A0  EC 05 00 2A */	fadds f0, f5, f0
/* 803A9764 003A66A4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803A9768 003A66A8  40 81 00 20 */	ble .L_803A9788
/* 803A976C 003A66AC  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 803A9770 003A66B0  EC 65 00 2A */	fadds f3, f5, f0
/* 803A9774 003A66B4  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 803A9778 003A66B8  40 81 00 14 */	ble .L_803A978C
/* 803A977C 003A66BC  FC 00 18 34 */	frsqrte f0, f3
/* 803A9780 003A66C0  EC 60 00 F2 */	fmuls f3, f0, f3
/* 803A9784 003A66C4  48 00 00 08 */	b .L_803A978C
.L_803A9788:
/* 803A9788 003A66C8  FC 60 08 90 */	fmr f3, f1
.L_803A978C:
/* 803A978C 003A66CC  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A9790 003A66D0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803A9794 003A66D4  40 81 00 30 */	ble .L_803A97C4
/* 803A9798 003A66D8  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A979C 003A66DC  C0 41 00 D4 */	lfs f2, 0xd4(r1)
/* 803A97A0 003A66E0  EC 60 18 24 */	fdivs f3, f0, f3
/* 803A97A4 003A66E4  C0 21 00 D8 */	lfs f1, 0xd8(r1)
/* 803A97A8 003A66E8  C0 01 00 DC */	lfs f0, 0xdc(r1)
/* 803A97AC 003A66EC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803A97B0 003A66F0  EC 21 00 F2 */	fmuls f1, f1, f3
/* 803A97B4 003A66F4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803A97B8 003A66F8  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 803A97BC 003A66FC  D0 21 00 D8 */	stfs f1, 0xd8(r1)
/* 803A97C0 003A6700  D0 01 00 DC */	stfs f0, 0xdc(r1)
.L_803A97C4:
/* 803A97C4 003A6704  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A97C8 003A6708  38 61 00 C8 */	addi r3, r1, 0xc8
/* 803A97CC 003A670C  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A97D0 003A6710  38 81 00 D4 */	addi r4, r1, 0xd4
/* 803A97D4 003A6714  D0 21 00 C8 */	stfs f1, 0xc8(r1)
/* 803A97D8 003A6718  38 A1 00 BC */	addi r5, r1, 0xbc
/* 803A97DC 003A671C  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 803A97E0 003A6720  D0 21 00 D0 */	stfs f1, 0xd0(r1)
/* 803A97E4 003A6724  4B D4 17 A1 */	bl PSVECCrossProduct
/* 803A97E8 003A6728  C0 41 00 BC */	lfs f2, 0xbc(r1)
/* 803A97EC 003A672C  C0 21 00 C0 */	lfs f1, 0xc0(r1)
/* 803A97F0 003A6730  EC 02 00 B2 */	fmuls f0, f2, f2
/* 803A97F4 003A6734  C0 61 00 C4 */	lfs f3, 0xc4(r1)
/* 803A97F8 003A6738  EC 81 00 72 */	fmuls f4, f1, f1
/* 803A97FC 003A673C  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803A9800 003A6740  EC 63 00 F2 */	fmuls f3, f3, f3
/* 803A9804 003A6744  EC 00 20 2A */	fadds f0, f0, f4
/* 803A9808 003A6748  EC 03 00 2A */	fadds f0, f3, f0
/* 803A980C 003A674C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803A9810 003A6750  40 81 00 20 */	ble .L_803A9830
/* 803A9814 003A6754  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 803A9818 003A6758  EC 63 00 2A */	fadds f3, f3, f0
/* 803A981C 003A675C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 803A9820 003A6760  40 81 00 14 */	ble .L_803A9834
/* 803A9824 003A6764  FC 00 18 34 */	frsqrte f0, f3
/* 803A9828 003A6768  EC 60 00 F2 */	fmuls f3, f0, f3
/* 803A982C 003A676C  48 00 00 08 */	b .L_803A9834
.L_803A9830:
/* 803A9830 003A6770  FC 60 08 90 */	fmr f3, f1
.L_803A9834:
/* 803A9834 003A6774  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A9838 003A6778  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803A983C 003A677C  40 81 00 30 */	ble .L_803A986C
/* 803A9840 003A6780  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A9844 003A6784  C0 41 00 BC */	lfs f2, 0xbc(r1)
/* 803A9848 003A6788  EC 60 18 24 */	fdivs f3, f0, f3
/* 803A984C 003A678C  C0 21 00 C0 */	lfs f1, 0xc0(r1)
/* 803A9850 003A6790  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 803A9854 003A6794  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803A9858 003A6798  EC 21 00 F2 */	fmuls f1, f1, f3
/* 803A985C 003A679C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803A9860 003A67A0  D0 41 00 BC */	stfs f2, 0xbc(r1)
/* 803A9864 003A67A4  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 803A9868 003A67A8  D0 01 00 C4 */	stfs f0, 0xc4(r1)
.L_803A986C:
/* 803A986C 003A67AC  7F C3 F3 78 */	mr r3, r30
/* 803A9870 003A67B0  7E E4 BB 78 */	mr r4, r23
/* 803A9874 003A67B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9878 003A67B8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A987C 003A67BC  7D 89 03 A6 */	mtctr r12
/* 803A9880 003A67C0  4E 80 04 21 */	bctrl 
/* 803A9884 003A67C4  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 803A9888 003A67C8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 803A988C 003A67CC  C0 63 00 4C */	lfs f3, 0x4c(r3)
/* 803A9890 003A67D0  EC 81 00 28 */	fsubs f4, f1, f0
/* 803A9894 003A67D4  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 803A9898 003A67D8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 803A989C 003A67DC  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 803A98A0 003A67E0  EC 63 10 28 */	fsubs f3, f3, f2
/* 803A98A4 003A67E4  EC 44 01 32 */	fmuls f2, f4, f4
/* 803A98A8 003A67E8  EC A1 00 28 */	fsubs f5, f1, f0
/* 803A98AC 003A67EC  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A98B0 003A67F0  EC 23 10 FA */	fmadds f1, f3, f3, f2
/* 803A98B4 003A67F4  EC 45 01 72 */	fmuls f2, f5, f5
/* 803A98B8 003A67F8  EC 22 08 2A */	fadds f1, f2, f1
/* 803A98BC 003A67FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A98C0 003A6800  40 81 00 14 */	ble .L_803A98D4
/* 803A98C4 003A6804  40 81 00 14 */	ble .L_803A98D8
/* 803A98C8 003A6808  FC 00 08 34 */	frsqrte f0, f1
/* 803A98CC 003A680C  EC 20 00 72 */	fmuls f1, f0, f1
/* 803A98D0 003A6810  48 00 00 08 */	b .L_803A98D8
.L_803A98D4:
/* 803A98D4 003A6814  FC 20 00 90 */	fmr f1, f0
.L_803A98D8:
/* 803A98D8 003A6818  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803A98DC 003A681C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A98E0 003A6820  40 81 00 18 */	ble .L_803A98F8
/* 803A98E4 003A6824  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803A98E8 003A6828  EC 00 08 24 */	fdivs f0, f0, f1
/* 803A98EC 003A682C  EC 63 00 32 */	fmuls f3, f3, f0
/* 803A98F0 003A6830  EC 84 00 32 */	fmuls f4, f4, f0
/* 803A98F4 003A6834  EC A5 00 32 */	fmuls f5, f5, f0
.L_803A98F8:
/* 803A98F8 003A6838  C0 01 00 C0 */	lfs f0, 0xc0(r1)
/* 803A98FC 003A683C  C0 21 00 BC */	lfs f1, 0xbc(r1)
/* 803A9900 003A6840  EC 00 01 32 */	fmuls f0, f0, f4
/* 803A9904 003A6844  C0 41 00 C4 */	lfs f2, 0xc4(r1)
/* 803A9908 003A6848  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 803A990C 003A684C  EC 02 01 7A */	fmadds f0, f2, f5, f0
/* 803A9910 003A6850  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803A9914 003A6854  40 81 00 0C */	ble .L_803A9920
/* 803A9918 003A6858  FF E0 00 90 */	fmr f31, f0
/* 803A991C 003A685C  7E DC B3 78 */	mr r28, r22
.L_803A9920:
/* 803A9920 003A6860  3B 18 00 02 */	addi r24, r24, 2
/* 803A9924 003A6864  3A D6 00 01 */	addi r22, r22, 1
.L_803A9928:
/* 803A9928 003A6868  7C 16 E8 00 */	cmpw r22, r29
/* 803A992C 003A686C  41 80 FD BC */	blt .L_803A96E8
/* 803A9930 003A6870  2C 1C 00 00 */	cmpwi r28, 0
/* 803A9934 003A6874  40 80 00 54 */	bge .L_803A9988
/* 803A9938 003A6878  4B D1 FC 69 */	bl rand
/* 803A993C 003A687C  3C 80 43 30 */	lis r4, 0x4330
/* 803A9940 003A6880  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A9944 003A6884  90 01 01 4C */	stw r0, 0x14c(r1)
/* 803A9948 003A6888  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 803A994C 003A688C  C8 42 11 88 */	lfd f2, lbl_8051F4E8@sda21(r2)
/* 803A9950 003A6890  90 81 01 48 */	stw r4, 0x148(r1)
/* 803A9954 003A6894  C0 02 11 98 */	lfs f0, lbl_8051F4F8@sda21(r2)
/* 803A9958 003A6898  C8 21 01 48 */	lfd f1, 0x148(r1)
/* 803A995C 003A689C  90 01 01 44 */	stw r0, 0x144(r1)
/* 803A9960 003A68A0  EC 21 10 28 */	fsubs f1, f1, f2
/* 803A9964 003A68A4  90 81 01 40 */	stw r4, 0x140(r1)
/* 803A9968 003A68A8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803A996C 003A68AC  C8 01 01 40 */	lfd f0, 0x140(r1)
/* 803A9970 003A68B0  EC 00 10 28 */	fsubs f0, f0, f2
/* 803A9974 003A68B4  EC 00 00 72 */	fmuls f0, f0, f1
/* 803A9978 003A68B8  FC 00 00 1E */	fctiwz f0, f0
/* 803A997C 003A68BC  D8 01 01 38 */	stfd f0, 0x138(r1)
/* 803A9980 003A68C0  83 41 01 3C */	lwz r26, 0x13c(r1)
/* 803A9984 003A68C4  48 00 00 08 */	b .L_803A998C
.L_803A9988:
/* 803A9988 003A68C8  7F 9A E3 78 */	mr r26, r28
.L_803A998C:
/* 803A998C 003A68CC  7C 1A E8 00 */	cmpw r26, r29
/* 803A9990 003A68D0  41 80 00 08 */	blt .L_803A9998
/* 803A9994 003A68D4  3B 5D FF FF */	addi r26, r29, -1
.L_803A9998:
/* 803A9998 003A68D8  7F C3 F3 78 */	mr r3, r30
/* 803A999C 003A68DC  57 40 08 3C */	slwi r0, r26, 1
/* 803A99A0 003A68E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A99A4 003A68E4  38 81 01 08 */	addi r4, r1, 0x108
/* 803A99A8 003A68E8  7E C4 02 AE */	lhax r22, r4, r0
/* 803A99AC 003A68EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A99B0 003A68F0  7E C4 B3 78 */	mr r4, r22
/* 803A99B4 003A68F4  7D 89 03 A6 */	mtctr r12
/* 803A99B8 003A68F8  4E 80 04 21 */	bctrl 
/* 803A99BC 003A68FC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 803A99C0 003A6900  40 82 00 18 */	bne .L_803A99D8
/* 803A99C4 003A6904  2C 1D 00 01 */	cmpwi r29, 1
/* 803A99C8 003A6908  41 82 00 10 */	beq .L_803A99D8
/* 803A99CC 003A690C  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A99D0 003A6910  7C 16 00 00 */	cmpw r22, r0
/* 803A99D4 003A6914  41 82 00 30 */	beq .L_803A9A04
.L_803A99D8:
/* 803A99D8 003A6918  A8 1F 03 42 */	lha r0, 0x342(r31)
/* 803A99DC 003A691C  7C 00 B0 00 */	cmpw r0, r22
/* 803A99E0 003A6920  40 82 00 10 */	bne .L_803A99F0
/* 803A99E4 003A6924  38 00 00 01 */	li r0, 1
/* 803A99E8 003A6928  98 1F 03 38 */	stb r0, 0x338(r31)
/* 803A99EC 003A692C  48 00 00 0C */	b .L_803A99F8
.L_803A99F0:
/* 803A99F0 003A6930  38 00 00 00 */	li r0, 0
/* 803A99F4 003A6934  98 1F 03 38 */	stb r0, 0x338(r31)
.L_803A99F8:
/* 803A99F8 003A6938  A8 1F 03 40 */	lha r0, 0x340(r31)
/* 803A99FC 003A693C  B0 1F 03 42 */	sth r0, 0x342(r31)
/* 803A9A00 003A6940  B2 DF 03 40 */	sth r22, 0x340(r31)
.L_803A9A04:
/* 803A9A04 003A6944  7F C3 F3 78 */	mr r3, r30
/* 803A9A08 003A6948  A8 9F 03 40 */	lha r4, 0x340(r31)
/* 803A9A0C 003A694C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A9A10 003A6950  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9A14 003A6954  7D 89 03 A6 */	mtctr r12
/* 803A9A18 003A6958  4E 80 04 21 */	bctrl 
/* 803A9A1C 003A695C  28 03 00 00 */	cmplwi r3, 0
/* 803A9A20 003A6960  41 82 00 1C */	beq .L_803A9A3C
/* 803A9A24 003A6964  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 803A9A28 003A6968  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 803A9A2C 003A696C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 803A9A30 003A6970  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 803A9A34 003A6974  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 803A9A38 003A6978  D0 5F 02 D8 */	stfs f2, 0x2d8(r31)
.L_803A9A3C:
/* 803A9A3C 003A697C  E3 E1 01 D8 */	psq_l f31, 472(r1), 0, qr0
/* 803A9A40 003A6980  CB E1 01 D0 */	lfd f31, 0x1d0(r1)
/* 803A9A44 003A6984  E3 C1 01 C8 */	psq_l f30, 456(r1), 0, qr0
/* 803A9A48 003A6988  CB C1 01 C0 */	lfd f30, 0x1c0(r1)
/* 803A9A4C 003A698C  E3 A1 01 B8 */	psq_l f29, 440(r1), 0, qr0
/* 803A9A50 003A6990  CB A1 01 B0 */	lfd f29, 0x1b0(r1)
/* 803A9A54 003A6994  E3 81 01 A8 */	psq_l f28, 424(r1), 0, qr0
/* 803A9A58 003A6998  CB 81 01 A0 */	lfd f28, 0x1a0(r1)
/* 803A9A5C 003A699C  E3 61 01 98 */	psq_l f27, 408(r1), 0, qr0
/* 803A9A60 003A69A0  CB 61 01 90 */	lfd f27, 0x190(r1)
/* 803A9A64 003A69A4  E3 41 01 88 */	psq_l f26, 392(r1), 0, qr0
/* 803A9A68 003A69A8  CB 41 01 80 */	lfd f26, 0x180(r1)
/* 803A9A6C 003A69AC  BA C1 01 58 */	lmw r22, 0x158(r1)
/* 803A9A70 003A69B0  80 01 01 E4 */	lwz r0, 0x1e4(r1)
/* 803A9A74 003A69B4  7C 08 03 A6 */	mtlr r0
/* 803A9A78 003A69B8  38 21 01 E0 */	addi r1, r1, 0x1e0
/* 803A9A7C 003A69BC  4E 80 00 20 */	blr 
.endfn findNextRoutePoint__Q34Game8BlackMan3ObjFv

.fn findNextTraceRoutePoint__Q34Game8BlackMan3ObjFv, global
/* 803A9A80 003A69C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A9A84 003A69C4  7C 08 02 A6 */	mflr r0
/* 803A9A88 003A69C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A9A8C 003A69CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A9A90 003A69D0  7C 7F 1B 78 */	mr r31, r3
/* 803A9A94 003A69D4  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 803A9A98 003A69D8  28 00 00 00 */	cmplwi r0, 0
/* 803A9A9C 003A69DC  41 82 00 A0 */	beq .L_803A9B3C
/* 803A9AA0 003A69E0  7C 04 03 78 */	mr r4, r0
/* 803A9AA4 003A69E4  48 00 00 74 */	b .L_803A9B18
.L_803A9AA8:
/* 803A9AA8 003A69E8  A8 04 00 20 */	lha r0, 0x20(r4)
/* 803A9AAC 003A69EC  A8 7F 03 40 */	lha r3, 0x340(r31)
/* 803A9AB0 003A69F0  7C 00 18 00 */	cmpw r0, r3
/* 803A9AB4 003A69F4  40 82 00 60 */	bne .L_803A9B14
/* 803A9AB8 003A69F8  B0 7F 03 42 */	sth r3, 0x342(r31)
/* 803A9ABC 003A69FC  80 64 00 0C */	lwz r3, 0xc(r4)
/* 803A9AC0 003A6A00  28 03 00 00 */	cmplwi r3, 0
/* 803A9AC4 003A6A04  41 82 00 10 */	beq .L_803A9AD4
/* 803A9AC8 003A6A08  A8 03 00 20 */	lha r0, 0x20(r3)
/* 803A9ACC 003A6A0C  B0 1F 03 40 */	sth r0, 0x340(r31)
/* 803A9AD0 003A6A10  48 00 00 0C */	b .L_803A9ADC
.L_803A9AD4:
/* 803A9AD4 003A6A14  A8 1F 03 44 */	lha r0, 0x344(r31)
/* 803A9AD8 003A6A18  B0 1F 03 40 */	sth r0, 0x340(r31)
.L_803A9ADC:
/* 803A9ADC 003A6A1C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A9AE0 003A6A20  A8 9F 03 40 */	lha r4, 0x340(r31)
/* 803A9AE4 003A6A24  80 63 00 08 */	lwz r3, 8(r3)
/* 803A9AE8 003A6A28  81 83 00 00 */	lwz r12, 0(r3)
/* 803A9AEC 003A6A2C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9AF0 003A6A30  7D 89 03 A6 */	mtctr r12
/* 803A9AF4 003A6A34  4E 80 04 21 */	bctrl 
/* 803A9AF8 003A6A38  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 803A9AFC 003A6A3C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 803A9B00 003A6A40  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 803A9B04 003A6A44  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 803A9B08 003A6A48  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 803A9B0C 003A6A4C  D0 5F 02 D8 */	stfs f2, 0x2d8(r31)
/* 803A9B10 003A6A50  48 00 00 2C */	b .L_803A9B3C
.L_803A9B14:
/* 803A9B14 003A6A54  80 84 00 0C */	lwz r4, 0xc(r4)
.L_803A9B18:
/* 803A9B18 003A6A58  28 04 00 00 */	cmplwi r4, 0
/* 803A9B1C 003A6A5C  40 82 FF 8C */	bne .L_803A9AA8
/* 803A9B20 003A6A60  3C 60 80 49 */	lis r3, lbl_80495688@ha
/* 803A9B24 003A6A64  3C A0 80 49 */	lis r5, lbl_80495708@ha
/* 803A9B28 003A6A68  38 63 56 88 */	addi r3, r3, lbl_80495688@l
/* 803A9B2C 003A6A6C  38 80 07 2E */	li r4, 0x72e
/* 803A9B30 003A6A70  38 A5 57 08 */	addi r5, r5, lbl_80495708@l
/* 803A9B34 003A6A74  4C C6 31 82 */	crclr 6
/* 803A9B38 003A6A78  4B C8 0B 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A9B3C:
/* 803A9B3C 003A6A7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A9B40 003A6A80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A9B44 003A6A84  7C 08 03 A6 */	mtlr r0
/* 803A9B48 003A6A88  38 21 00 10 */	addi r1, r1, 0x10
/* 803A9B4C 003A6A8C  4E 80 00 20 */	blr 
.endfn findNextTraceRoutePoint__Q34Game8BlackMan3ObjFv

.fn isEndPathFinder__Q34Game8BlackMan3ObjFv, global
/* 803A9B50 003A6A90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A9B54 003A6A94  7C 08 02 A6 */	mflr r0
/* 803A9B58 003A6A98  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A9B5C 003A6A9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A9B60 003A6AA0  93 C1 00 08 */	stw r30, 8(r1)
/* 803A9B64 003A6AA4  7C 7E 1B 78 */	mr r30, r3
/* 803A9B68 003A6AA8  3C 60 80 49 */	lis r3, lbl_80495670@ha
/* 803A9B6C 003A6AAC  88 1E 03 4C */	lbz r0, 0x34c(r30)
/* 803A9B70 003A6AB0  3B E3 56 70 */	addi r31, r3, lbl_80495670@l
/* 803A9B74 003A6AB4  28 00 00 00 */	cmplwi r0, 0
/* 803A9B78 003A6AB8  41 82 00 0C */	beq .L_803A9B84
/* 803A9B7C 003A6ABC  38 60 00 01 */	li r3, 1
/* 803A9B80 003A6AC0  48 00 00 CC */	b .L_803A9C4C
.L_803A9B84:
/* 803A9B84 003A6AC4  80 0D 93 80 */	lwz r0, testPathfinder__4Game@sda21(r13)
/* 803A9B88 003A6AC8  28 00 00 00 */	cmplwi r0, 0
/* 803A9B8C 003A6ACC  40 82 00 18 */	bne .L_803A9BA4
/* 803A9B90 003A6AD0  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A9B94 003A6AD4  38 BF 00 28 */	addi r5, r31, 0x28
/* 803A9B98 003A6AD8  38 80 07 3A */	li r4, 0x73a
/* 803A9B9C 003A6ADC  4C C6 31 82 */	crclr 6
/* 803A9BA0 003A6AE0  4B C8 0A A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A9BA4:
/* 803A9BA4 003A6AE4  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 803A9BA8 003A6AE8  80 9E 03 48 */	lwz r4, 0x348(r30)
/* 803A9BAC 003A6AEC  4B DF 9F 25 */	bl check__Q24Game10PathfinderFUl
/* 803A9BB0 003A6AF0  2C 03 00 02 */	cmpwi r3, 2
/* 803A9BB4 003A6AF4  41 82 00 44 */	beq .L_803A9BF8
/* 803A9BB8 003A6AF8  40 80 00 14 */	bge .L_803A9BCC
/* 803A9BBC 003A6AFC  2C 03 00 00 */	cmpwi r3, 0
/* 803A9BC0 003A6B00  41 82 00 18 */	beq .L_803A9BD8
/* 803A9BC4 003A6B04  40 80 00 44 */	bge .L_803A9C08
/* 803A9BC8 003A6B08  48 00 00 80 */	b .L_803A9C48
.L_803A9BCC:
/* 803A9BCC 003A6B0C  2C 03 00 04 */	cmpwi r3, 4
/* 803A9BD0 003A6B10  40 80 00 78 */	bge .L_803A9C48
/* 803A9BD4 003A6B14  48 00 00 50 */	b .L_803A9C24
.L_803A9BD8:
/* 803A9BD8 003A6B18  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 803A9BDC 003A6B1C  38 BE 03 5C */	addi r5, r30, 0x35c
/* 803A9BE0 003A6B20  80 9E 03 48 */	lwz r4, 0x348(r30)
/* 803A9BE4 003A6B24  4B DF 9D BD */	bl makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
/* 803A9BE8 003A6B28  38 00 00 01 */	li r0, 1
/* 803A9BEC 003A6B2C  38 60 00 01 */	li r3, 1
/* 803A9BF0 003A6B30  98 1E 03 4C */	stb r0, 0x34c(r30)
/* 803A9BF4 003A6B34  48 00 00 58 */	b .L_803A9C4C
.L_803A9BF8:
/* 803A9BF8 003A6B38  38 00 00 00 */	li r0, 0
/* 803A9BFC 003A6B3C  38 60 00 00 */	li r3, 0
/* 803A9C00 003A6B40  98 1E 03 4C */	stb r0, 0x34c(r30)
/* 803A9C04 003A6B44  48 00 00 48 */	b .L_803A9C4C
.L_803A9C08:
/* 803A9C08 003A6B48  38 00 00 00 */	li r0, 0
/* 803A9C0C 003A6B4C  7F C3 F3 78 */	mr r3, r30
/* 803A9C10 003A6B50  98 1E 03 4C */	stb r0, 0x34c(r30)
/* 803A9C14 003A6B54  38 80 00 01 */	li r4, 1
/* 803A9C18 003A6B58  48 00 00 4D */	bl setPathFinder__Q34Game8BlackMan3ObjFb
/* 803A9C1C 003A6B5C  38 60 00 00 */	li r3, 0
/* 803A9C20 003A6B60  48 00 00 2C */	b .L_803A9C4C
.L_803A9C24:
/* 803A9C24 003A6B64  38 7F 00 18 */	addi r3, r31, 0x18
/* 803A9C28 003A6B68  38 BF 00 B0 */	addi r5, r31, 0xb0
/* 803A9C2C 003A6B6C  38 80 07 4E */	li r4, 0x74e
/* 803A9C30 003A6B70  4C C6 31 82 */	crclr 6
/* 803A9C34 003A6B74  4B C8 0A 0D */	bl panic_f__12JUTExceptionFPCciPCce
/* 803A9C38 003A6B78  38 00 00 00 */	li r0, 0
/* 803A9C3C 003A6B7C  38 60 00 00 */	li r3, 0
/* 803A9C40 003A6B80  98 1E 03 4C */	stb r0, 0x34c(r30)
/* 803A9C44 003A6B84  48 00 00 08 */	b .L_803A9C4C
.L_803A9C48:
/* 803A9C48 003A6B88  38 60 00 00 */	li r3, 0
.L_803A9C4C:
/* 803A9C4C 003A6B8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A9C50 003A6B90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A9C54 003A6B94  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A9C58 003A6B98  7C 08 03 A6 */	mtlr r0
/* 803A9C5C 003A6B9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A9C60 003A6BA0  4E 80 00 20 */	blr 
.endfn isEndPathFinder__Q34Game8BlackMan3ObjFv

.fn setPathFinder__Q34Game8BlackMan3ObjFb, global
/* 803A9C64 003A6BA4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803A9C68 003A6BA8  7C 08 02 A6 */	mflr r0
/* 803A9C6C 003A6BAC  90 01 00 54 */	stw r0, 0x54(r1)
/* 803A9C70 003A6BB0  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 803A9C74 003A6BB4  7C 7D 1B 78 */	mr r29, r3
/* 803A9C78 003A6BB8  7C 9E 23 78 */	mr r30, r4
/* 803A9C7C 003A6BBC  48 00 01 C1 */	bl releasePathFinder__Q34Game8BlackMan3ObjFv
/* 803A9C80 003A6BC0  38 80 00 00 */	li r4, 0
/* 803A9C84 003A6BC4  38 00 FF FF */	li r0, -1
/* 803A9C88 003A6BC8  90 81 00 2C */	stw r4, 0x2c(r1)
/* 803A9C8C 003A6BCC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A9C90 003A6BD0  90 81 00 28 */	stw r4, 0x28(r1)
/* 803A9C94 003A6BD4  98 81 00 1C */	stb r4, 0x1c(r1)
/* 803A9C98 003A6BD8  B0 01 00 24 */	sth r0, 0x24(r1)
/* 803A9C9C 003A6BDC  90 81 00 20 */	stw r4, 0x20(r1)
/* 803A9CA0 003A6BE0  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 803A9CA4 003A6BE4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803A9CA8 003A6BE8  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 803A9CAC 003A6BEC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803A9CB0 003A6BF0  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 803A9CB4 003A6BF4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803A9CB8 003A6BF8  83 E3 00 08 */	lwz r31, 8(r3)
/* 803A9CBC 003A6BFC  28 1F 00 00 */	cmplwi r31, 0
/* 803A9CC0 003A6C00  40 82 00 20 */	bne .L_803A9CE0
/* 803A9CC4 003A6C04  3C 60 80 49 */	lis r3, lbl_80495688@ha
/* 803A9CC8 003A6C08  3C A0 80 49 */	lis r5, lbl_80495698@ha
/* 803A9CCC 003A6C0C  38 63 56 88 */	addi r3, r3, lbl_80495688@l
/* 803A9CD0 003A6C10  38 80 07 65 */	li r4, 0x765
/* 803A9CD4 003A6C14  38 A5 56 98 */	addi r5, r5, lbl_80495698@l
/* 803A9CD8 003A6C18  4C C6 31 82 */	crclr 6
/* 803A9CDC 003A6C1C  4B C8 09 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A9CE0:
/* 803A9CE0 003A6C20  7F E3 FB 78 */	mr r3, r31
/* 803A9CE4 003A6C24  38 81 00 10 */	addi r4, r1, 0x10
/* 803A9CE8 003A6C28  4B DC 96 85 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 803A9CEC 003A6C2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A9CF0 003A6C30  41 82 01 1C */	beq .L_803A9E0C
/* 803A9CF4 003A6C34  80 61 00 28 */	lwz r3, 0x28(r1)
/* 803A9CF8 003A6C38  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 803A9CFC 003A6C3C  C0 7D 01 A0 */	lfs f3, 0x1a0(r29)
/* 803A9D00 003A6C40  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 803A9D04 003A6C44  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803A9D08 003A6C48  EC 81 18 28 */	fsubs f4, f1, f3
/* 803A9D0C 003A6C4C  C0 44 00 4C */	lfs f2, 0x4c(r4)
/* 803A9D10 003A6C50  EC 60 18 28 */	fsubs f3, f0, f3
/* 803A9D14 003A6C54  C0 DD 01 98 */	lfs f6, 0x198(r29)
/* 803A9D18 003A6C58  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 803A9D1C 003A6C5C  EC A2 30 28 */	fsubs f5, f2, f6
/* 803A9D20 003A6C60  EC 04 01 32 */	fmuls f0, f4, f4
/* 803A9D24 003A6C64  A8 03 00 36 */	lha r0, 0x36(r3)
/* 803A9D28 003A6C68  EC 41 30 28 */	fsubs f2, f1, f6
/* 803A9D2C 003A6C6C  A8 64 00 36 */	lha r3, 0x36(r4)
/* 803A9D30 003A6C70  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803A9D34 003A6C74  EC 05 01 7A */	fmadds f0, f5, f5, f0
/* 803A9D38 003A6C78  7C 1C 03 78 */	mr r28, r0
/* 803A9D3C 003A6C7C  7C 7B 1B 78 */	mr r27, r3
/* 803A9D40 003A6C80  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803A9D44 003A6C84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A9D48 003A6C88  40 81 00 0C */	ble .L_803A9D54
/* 803A9D4C 003A6C8C  7C 1B 03 78 */	mr r27, r0
/* 803A9D50 003A6C90  7C 7C 1B 78 */	mr r28, r3
.L_803A9D54:
/* 803A9D54 003A6C94  7F E3 FB 78 */	mr r3, r31
/* 803A9D58 003A6C98  7F 84 E3 78 */	mr r4, r28
/* 803A9D5C 003A6C9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A9D60 003A6CA0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9D64 003A6CA4  7D 89 03 A6 */	mtctr r12
/* 803A9D68 003A6CA8  4E 80 04 21 */	bctrl 
/* 803A9D6C 003A6CAC  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803A9D70 003A6CB0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803A9D74 003A6CB4  41 82 00 08 */	beq .L_803A9D7C
/* 803A9D78 003A6CB8  7F 7C DB 78 */	mr r28, r27
.L_803A9D7C:
/* 803A9D7C 003A6CBC  A8 9D 03 40 */	lha r4, 0x340(r29)
/* 803A9D80 003A6CC0  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 803A9D84 003A6CC4  7C 03 00 D0 */	neg r0, r3
/* 803A9D88 003A6CC8  B0 9D 03 42 */	sth r4, 0x342(r29)
/* 803A9D8C 003A6CCC  7C 00 1B 78 */	or r0, r0, r3
/* 803A9D90 003A6CD0  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 803A9D94 003A6CD4  B3 9D 03 40 */	sth r28, 0x340(r29)
/* 803A9D98 003A6CD8  3B C3 00 C3 */	addi r30, r3, 0xc3
/* 803A9D9C 003A6CDC  80 9D 03 48 */	lwz r4, 0x348(r29)
/* 803A9DA0 003A6CE0  28 04 00 00 */	cmplwi r4, 0
/* 803A9DA4 003A6CE4  41 82 00 0C */	beq .L_803A9DB0
/* 803A9DA8 003A6CE8  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 803A9DAC 003A6CEC  4B DF 9C B5 */	bl release__Q24Game10PathfinderFUl
.L_803A9DB0:
/* 803A9DB0 003A6CF0  A8 BD 03 44 */	lha r5, 0x344(r29)
/* 803A9DB4 003A6CF4  38 81 00 08 */	addi r4, r1, 8
/* 803A9DB8 003A6CF8  A8 1D 03 40 */	lha r0, 0x340(r29)
/* 803A9DBC 003A6CFC  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 803A9DC0 003A6D00  B0 01 00 08 */	sth r0, 8(r1)
/* 803A9DC4 003A6D04  B0 A1 00 0A */	sth r5, 0xa(r1)
/* 803A9DC8 003A6D08  9B C1 00 0C */	stb r30, 0xc(r1)
/* 803A9DCC 003A6D0C  4B DF 9A 89 */	bl start__Q24Game10PathfinderFRQ24Game15PathfindRequest
/* 803A9DD0 003A6D10  90 7D 03 48 */	stw r3, 0x348(r29)
/* 803A9DD4 003A6D14  7F E3 FB 78 */	mr r3, r31
/* 803A9DD8 003A6D18  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A9DDC 003A6D1C  A8 9D 03 40 */	lha r4, 0x340(r29)
/* 803A9DE0 003A6D20  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A9DE4 003A6D24  7D 89 03 A6 */	mtctr r12
/* 803A9DE8 003A6D28  4E 80 04 21 */	bctrl 
/* 803A9DEC 003A6D2C  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 803A9DF0 003A6D30  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 803A9DF4 003A6D34  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 803A9DF8 003A6D38  38 60 00 01 */	li r3, 1
/* 803A9DFC 003A6D3C  D0 1D 02 D0 */	stfs f0, 0x2d0(r29)
/* 803A9E00 003A6D40  D0 3D 02 D4 */	stfs f1, 0x2d4(r29)
/* 803A9E04 003A6D44  D0 5D 02 D8 */	stfs f2, 0x2d8(r29)
/* 803A9E08 003A6D48  48 00 00 20 */	b .L_803A9E28
.L_803A9E0C:
/* 803A9E0C 003A6D4C  3C 60 80 49 */	lis r3, lbl_80495688@ha
/* 803A9E10 003A6D50  38 80 07 8E */	li r4, 0x78e
/* 803A9E14 003A6D54  38 63 56 88 */	addi r3, r3, lbl_80495688@l
/* 803A9E18 003A6D58  38 A0 00 00 */	li r5, 0
/* 803A9E1C 003A6D5C  4C C6 31 82 */	crclr 6
/* 803A9E20 003A6D60  4B C8 08 21 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803A9E24 003A6D64  38 60 00 00 */	li r3, 0
.L_803A9E28:
/* 803A9E28 003A6D68  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 803A9E2C 003A6D6C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803A9E30 003A6D70  7C 08 03 A6 */	mtlr r0
/* 803A9E34 003A6D74  38 21 00 50 */	addi r1, r1, 0x50
/* 803A9E38 003A6D78  4E 80 00 20 */	blr 
.endfn setPathFinder__Q34Game8BlackMan3ObjFb

.fn releasePathFinder__Q34Game8BlackMan3ObjFv, global
/* 803A9E3C 003A6D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A9E40 003A6D80  7C 08 02 A6 */	mflr r0
/* 803A9E44 003A6D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A9E48 003A6D88  38 00 00 00 */	li r0, 0
/* 803A9E4C 003A6D8C  98 03 03 4C */	stb r0, 0x34c(r3)
/* 803A9E50 003A6D90  80 0D 93 80 */	lwz r0, testPathfinder__4Game@sda21(r13)
/* 803A9E54 003A6D94  28 00 00 00 */	cmplwi r0, 0
/* 803A9E58 003A6D98  41 82 00 18 */	beq .L_803A9E70
/* 803A9E5C 003A6D9C  80 83 03 48 */	lwz r4, 0x348(r3)
/* 803A9E60 003A6DA0  28 04 00 00 */	cmplwi r4, 0
/* 803A9E64 003A6DA4  41 82 00 0C */	beq .L_803A9E70
/* 803A9E68 003A6DA8  7C 03 03 78 */	mr r3, r0
/* 803A9E6C 003A6DAC  4B DF 9B F5 */	bl release__Q24Game10PathfinderFUl
.L_803A9E70:
/* 803A9E70 003A6DB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A9E74 003A6DB4  7C 08 03 A6 */	mtlr r0
/* 803A9E78 003A6DB8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A9E7C 003A6DBC  4E 80 00 20 */	blr 
.endfn releasePathFinder__Q34Game8BlackMan3ObjFv

.fn jointMtxCalc__Q34Game8BlackMan3ObjFi, global
/* 803A9E80 003A6DC0  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 803A9E84 003A6DC4  7C 08 02 A6 */	mflr r0
/* 803A9E88 003A6DC8  90 01 01 84 */	stw r0, 0x184(r1)
/* 803A9E8C 003A6DCC  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 803A9E90 003A6DD0  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 803A9E94 003A6DD4  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 803A9E98 003A6DD8  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 803A9E9C 003A6DDC  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 803A9EA0 003A6DE0  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 803A9EA4 003A6DE4  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 803A9EA8 003A6DE8  F3 81 01 48 */	psq_st f28, 328(r1), 0, qr0
/* 803A9EAC 003A6DEC  DB 61 01 30 */	stfd f27, 0x130(r1)
/* 803A9EB0 003A6DF0  F3 61 01 38 */	psq_st f27, 312(r1), 0, qr0
/* 803A9EB4 003A6DF4  DB 41 01 20 */	stfd f26, 0x120(r1)
/* 803A9EB8 003A6DF8  F3 41 01 28 */	psq_st f26, 296(r1), 0, qr0
/* 803A9EBC 003A6DFC  DB 21 01 10 */	stfd f25, 0x110(r1)
/* 803A9EC0 003A6E00  F3 21 01 18 */	psq_st f25, 280(r1), 0, qr0
/* 803A9EC4 003A6E04  DB 01 01 00 */	stfd f24, 0x100(r1)
/* 803A9EC8 003A6E08  F3 01 01 08 */	psq_st f24, 264(r1), 0, qr0
/* 803A9ECC 003A6E0C  DA E1 00 F0 */	stfd f23, 0xf0(r1)
/* 803A9ED0 003A6E10  F2 E1 00 F8 */	psq_st f23, 248(r1), 0, qr0
/* 803A9ED4 003A6E14  DA C1 00 E0 */	stfd f22, 0xe0(r1)
/* 803A9ED8 003A6E18  F2 C1 00 E8 */	psq_st f22, 232(r1), 0, qr0
/* 803A9EDC 003A6E1C  DA A1 00 D0 */	stfd f21, 0xd0(r1)
/* 803A9EE0 003A6E20  F2 A1 00 D8 */	psq_st f21, 216(r1), 0, qr0
/* 803A9EE4 003A6E24  DA 81 00 C0 */	stfd f20, 0xc0(r1)
/* 803A9EE8 003A6E28  F2 81 00 C8 */	psq_st f20, 200(r1), 0, qr0
/* 803A9EEC 003A6E2C  BE 21 00 84 */	stmw r17, 0x84(r1)
/* 803A9EF0 003A6E30  3C A0 80 49 */	lis r5, lbl_80495670@ha
/* 803A9EF4 003A6E34  7C 7A 1B 78 */	mr r26, r3
/* 803A9EF8 003A6E38  7C 9B 23 78 */	mr r27, r4
/* 803A9EFC 003A6E3C  3B A5 56 70 */	addi r29, r5, lbl_80495670@l
/* 803A9F00 003A6E40  4B D5 D4 F5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803A9F04 003A6E44  2C 1B 00 02 */	cmpwi r27, 2
/* 803A9F08 003A6E48  40 80 00 34 */	bge .L_803A9F3C
/* 803A9F0C 003A6E4C  2C 03 00 06 */	cmpwi r3, 6
/* 803A9F10 003A6E50  41 82 00 0C */	beq .L_803A9F1C
/* 803A9F14 003A6E54  2C 03 00 07 */	cmpwi r3, 7
/* 803A9F18 003A6E58  40 82 00 24 */	bne .L_803A9F3C
.L_803A9F1C:
/* 803A9F1C 003A6E5C  80 1A 01 E0 */	lwz r0, 0x1e0(r26)
/* 803A9F20 003A6E60  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A9F24 003A6E64  40 82 04 78 */	bne .L_803AA39C
/* 803A9F28 003A6E68  80 7A 03 64 */	lwz r3, 0x364(r26)
/* 803A9F2C 003A6E6C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 803A9F30 003A6E70  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803A9F34 003A6E74  40 82 00 08 */	bne .L_803A9F3C
/* 803A9F38 003A6E78  48 00 04 64 */	b .L_803AA39C
.L_803A9F3C:
/* 803A9F3C 003A6E7C  82 3A 03 64 */	lwz r17, 0x364(r26)
/* 803A9F40 003A6E80  28 11 00 00 */	cmplwi r17, 0
/* 803A9F44 003A6E84  41 82 04 58 */	beq .L_803AA39C
/* 803A9F48 003A6E88  2C 1B 00 04 */	cmpwi r27, 4
/* 803A9F4C 003A6E8C  40 80 04 50 */	bge .L_803AA39C
/* 803A9F50 003A6E90  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 803A9F54 003A6E94  57 7C 10 3A */	slwi r28, r27, 2
/* 803A9F58 003A6E98  82 5D 00 CC */	lwz r18, 0xcc(r29)
/* 803A9F5C 003A6E9C  38 81 00 48 */	addi r4, r1, 0x48
/* 803A9F60 003A6EA0  82 7D 00 D0 */	lwz r19, 0xd0(r29)
/* 803A9F64 003A6EA4  82 9D 00 D4 */	lwz r20, 0xd4(r29)
/* 803A9F68 003A6EA8  82 BD 00 D8 */	lwz r21, 0xd8(r29)
/* 803A9F6C 003A6EAC  82 DD 00 DC */	lwz r22, 0xdc(r29)
/* 803A9F70 003A6EB0  82 FD 00 E0 */	lwz r23, 0xe0(r29)
/* 803A9F74 003A6EB4  83 1D 00 E4 */	lwz r24, 0xe4(r29)
/* 803A9F78 003A6EB8  83 3D 00 E8 */	lwz r25, 0xe8(r29)
/* 803A9F7C 003A6EBC  83 FD 00 EC */	lwz r31, 0xec(r29)
/* 803A9F80 003A6EC0  83 DD 00 F0 */	lwz r30, 0xf0(r29)
/* 803A9F84 003A6EC4  81 9D 00 F4 */	lwz r12, 0xf4(r29)
/* 803A9F88 003A6EC8  81 7D 00 F8 */	lwz r11, 0xf8(r29)
/* 803A9F8C 003A6ECC  81 5D 00 FC */	lwz r10, 0xfc(r29)
/* 803A9F90 003A6ED0  81 3D 01 00 */	lwz r9, 0x100(r29)
/* 803A9F94 003A6ED4  81 1D 01 04 */	lwz r8, 0x104(r29)
/* 803A9F98 003A6ED8  80 FD 01 20 */	lwz r7, 0x120(r29)
/* 803A9F9C 003A6EDC  80 DD 01 24 */	lwz r6, 0x124(r29)
/* 803A9FA0 003A6EE0  80 BD 01 28 */	lwz r5, 0x128(r29)
/* 803A9FA4 003A6EE4  80 1D 01 2C */	lwz r0, 0x12c(r29)
/* 803A9FA8 003A6EE8  90 61 00 48 */	stw r3, 0x48(r1)
/* 803A9FAC 003A6EEC  80 71 01 74 */	lwz r3, 0x174(r17)
/* 803A9FB0 003A6EF0  92 41 00 4C */	stw r18, 0x4c(r1)
/* 803A9FB4 003A6EF4  92 61 00 50 */	stw r19, 0x50(r1)
/* 803A9FB8 003A6EF8  92 81 00 54 */	stw r20, 0x54(r1)
/* 803A9FBC 003A6EFC  92 A1 00 38 */	stw r21, 0x38(r1)
/* 803A9FC0 003A6F00  7C 84 E0 2E */	lwzx r4, r4, r28
/* 803A9FC4 003A6F04  92 C1 00 3C */	stw r22, 0x3c(r1)
/* 803A9FC8 003A6F08  92 E1 00 40 */	stw r23, 0x40(r1)
/* 803A9FCC 003A6F0C  93 01 00 44 */	stw r24, 0x44(r1)
/* 803A9FD0 003A6F10  93 21 00 28 */	stw r25, 0x28(r1)
/* 803A9FD4 003A6F14  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803A9FD8 003A6F18  93 C1 00 30 */	stw r30, 0x30(r1)
/* 803A9FDC 003A6F1C  91 81 00 34 */	stw r12, 0x34(r1)
/* 803A9FE0 003A6F20  91 61 00 18 */	stw r11, 0x18(r1)
/* 803A9FE4 003A6F24  91 41 00 1C */	stw r10, 0x1c(r1)
/* 803A9FE8 003A6F28  91 21 00 20 */	stw r9, 0x20(r1)
/* 803A9FEC 003A6F2C  91 01 00 24 */	stw r8, 0x24(r1)
/* 803A9FF0 003A6F30  90 E1 00 08 */	stw r7, 8(r1)
/* 803A9FF4 003A6F34  90 C1 00 0C */	stw r6, 0xc(r1)
/* 803A9FF8 003A6F38  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803A9FFC 003A6F3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AA000 003A6F40  48 09 4F E5 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA004 003A6F44  48 07 F8 9D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA008 003A6F48  38 81 00 38 */	addi r4, r1, 0x38
/* 803AA00C 003A6F4C  7C 7D 1B 78 */	mr r29, r3
/* 803AA010 003A6F50  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 803AA014 003A6F54  7C 84 E0 2E */	lwzx r4, r4, r28
/* 803AA018 003A6F58  48 09 4F CD */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA01C 003A6F5C  48 07 F8 85 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA020 003A6F60  80 1A 02 F0 */	lwz r0, 0x2f0(r26)
/* 803AA024 003A6F64  C0 E2 11 F0 */	lfs f7, lbl_8051F550@sda21(r2)
/* 803AA028 003A6F68  2C 00 00 01 */	cmpwi r0, 1
/* 803AA02C 003A6F6C  40 80 00 08 */	bge .L_803AA034
/* 803AA030 003A6F70  C0 E2 10 D8 */	lfs f7, lbl_8051F438@sda21(r2)
.L_803AA034:
/* 803AA034 003A6F74  2C 1B 00 02 */	cmpwi r27, 2
/* 803AA038 003A6F78  40 80 00 08 */	bge .L_803AA040
/* 803AA03C 003A6F7C  C0 E2 10 D8 */	lfs f7, lbl_8051F438@sda21(r2)
.L_803AA040:
/* 803AA040 003A6F80  57 64 0F FE */	srwi r4, r27, 0x1f
/* 803AA044 003A6F84  57 60 07 FE */	clrlwi r0, r27, 0x1f
/* 803AA048 003A6F88  7C 00 22 78 */	xor r0, r0, r4
/* 803AA04C 003A6F8C  7C 04 00 51 */	subf. r0, r4, r0
/* 803AA050 003A6F90  41 82 00 08 */	beq .L_803AA058
/* 803AA054 003A6F94  FC E0 38 50 */	fneg f7, f7
.L_803AA058:
/* 803AA058 003A6F98  C0 7D 00 04 */	lfs f3, 4(r29)
/* 803AA05C 003A6F9C  3C 80 80 51 */	lis r4, mCurrentMtx__6J3DSys@ha
/* 803AA060 003A6FA0  C0 5D 00 0C */	lfs f2, 0xc(r29)
/* 803AA064 003A6FA4  38 84 F3 D4 */	addi r4, r4, mCurrentMtx__6J3DSys@l
/* 803AA068 003A6FA8  C0 3D 00 14 */	lfs f1, 0x14(r29)
/* 803AA06C 003A6FAC  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 803AA070 003A6FB0  EC 43 11 FA */	fmadds f2, f3, f7, f2
/* 803AA074 003A6FB4  C0 BD 00 00 */	lfs f5, 0(r29)
/* 803AA078 003A6FB8  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 803AA07C 003A6FBC  C0 82 10 D8 */	lfs f4, lbl_8051F438@sda21(r2)
/* 803AA080 003A6FC0  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 803AA084 003A6FC4  EC A5 11 3A */	fmadds f5, f5, f4, f2
/* 803AA088 003A6FC8  C0 7D 00 24 */	lfs f3, 0x24(r29)
/* 803AA08C 003A6FCC  EC C1 01 3A */	fmadds f6, f1, f4, f0
/* 803AA090 003A6FD0  C0 5D 00 2C */	lfs f2, 0x2c(r29)
/* 803AA094 003A6FD4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803AA098 003A6FD8  EC 43 11 FA */	fmadds f2, f3, f7, f2
/* 803AA09C 003A6FDC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AA0A0 003A6FE0  EF C6 08 28 */	fsubs f30, f6, f1
/* 803AA0A4 003A6FE4  C0 7D 00 20 */	lfs f3, 0x20(r29)
/* 803AA0A8 003A6FE8  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 803AA0AC 003A6FEC  EF E5 00 28 */	fsubs f31, f5, f0
/* 803AA0B0 003A6FF0  EC 03 11 3A */	fmadds f0, f3, f4, f2
/* 803AA0B4 003A6FF4  D0 A3 00 0C */	stfs f5, 0xc(r3)
/* 803AA0B8 003A6FF8  D0 C3 00 1C */	stfs f6, 0x1c(r3)
/* 803AA0BC 003A6FFC  EF A0 08 28 */	fsubs f29, f0, f1
/* 803AA0C0 003A7000  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 803AA0C4 003A7004  4B D4 02 09 */	bl PSMTXCopy
/* 803AA0C8 003A7008  38 81 00 28 */	addi r4, r1, 0x28
/* 803AA0CC 003A700C  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 803AA0D0 003A7010  7C 84 E0 2E */	lwzx r4, r4, r28
/* 803AA0D4 003A7014  48 09 4F 11 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA0D8 003A7018  48 07 F7 C9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA0DC 003A701C  38 81 00 18 */	addi r4, r1, 0x18
/* 803AA0E0 003A7020  7C 7E 1B 78 */	mr r30, r3
/* 803AA0E4 003A7024  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 803AA0E8 003A7028  7C 84 E0 2E */	lwzx r4, r4, r28
/* 803AA0EC 003A702C  48 09 4E F9 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA0F0 003A7030  48 07 F7 B1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA0F4 003A7034  80 9A 00 C0 */	lwz r4, 0xc0(r26)
/* 803AA0F8 003A7038  2C 1B 00 02 */	cmpwi r27, 2
/* 803AA0FC 003A703C  7C 7F 1B 78 */	mr r31, r3
/* 803AA100 003A7040  C0 04 0A 30 */	lfs f0, 0xa30(r4)
/* 803AA104 003A7044  C0 24 0A 34 */	lfs f1, 0xa34(r4)
/* 803AA108 003A7048  EF 9F 00 32 */	fmuls f28, f31, f0
/* 803AA10C 003A704C  EF 7E 00 32 */	fmuls f27, f30, f0
/* 803AA110 003A7050  EF 5D 00 32 */	fmuls f26, f29, f0
/* 803AA114 003A7054  40 80 00 08 */	bge .L_803AA11C
/* 803AA118 003A7058  C0 22 11 40 */	lfs f1, lbl_8051F4A0@sda21(r2)
.L_803AA11C:
/* 803AA11C 003A705C  C2 C2 10 D8 */	lfs f22, lbl_8051F438@sda21(r2)
/* 803AA120 003A7060  2C 1B 00 02 */	cmpwi r27, 2
/* 803AA124 003A7064  EF 3F 00 72 */	fmuls f25, f31, f1
/* 803AA128 003A7068  FE A0 B0 90 */	fmr f21, f22
/* 803AA12C 003A706C  FE 80 B0 90 */	fmr f20, f22
/* 803AA130 003A7070  EF 1E 00 72 */	fmuls f24, f30, f1
/* 803AA134 003A7074  EE FD 00 72 */	fmuls f23, f29, f1
/* 803AA138 003A7078  40 80 01 B0 */	bge .L_803AA2E8
/* 803AA13C 003A707C  88 04 0A 18 */	lbz r0, 0xa18(r4)
/* 803AA140 003A7080  28 00 00 00 */	cmplwi r0, 0
/* 803AA144 003A7084  41 82 01 A4 */	beq .L_803AA2E8
/* 803AA148 003A7088  80 7A 03 64 */	lwz r3, 0x364(r26)
/* 803AA14C 003A708C  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 803AA150 003A7090  FC 01 B0 40 */	fcmpo cr0, f1, f22
/* 803AA154 003A7094  40 80 00 30 */	bge .L_803AA184
/* 803AA158 003A7098  C0 02 11 90 */	lfs f0, lbl_8051F4F0@sda21(r2)
/* 803AA15C 003A709C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA160 003A70A0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA164 003A70A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 803AA168 003A70A8  FC 00 00 1E */	fctiwz f0, f0
/* 803AA16C 003A70AC  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 803AA170 003A70B0  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 803AA174 003A70B4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA178 003A70B8  7C 03 04 2E */	lfsx f0, r3, r0
/* 803AA17C 003A70BC  FC 00 00 50 */	fneg f0, f0
/* 803AA180 003A70C0  48 00 00 28 */	b .L_803AA1A8
.L_803AA184:
/* 803AA184 003A70C4  C0 02 11 94 */	lfs f0, lbl_8051F4F4@sda21(r2)
/* 803AA188 003A70C8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA18C 003A70CC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA190 003A70D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803AA194 003A70D4  FC 00 00 1E */	fctiwz f0, f0
/* 803AA198 003A70D8  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 803AA19C 003A70DC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803AA1A0 003A70E0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA1A4 003A70E4  7C 03 04 2E */	lfsx f0, r3, r0
.L_803AA1A8:
/* 803AA1A8 003A70E8  FC 00 02 10 */	fabs f0, f0
/* 803AA1AC 003A70EC  80 9A 00 C0 */	lwz r4, 0xc0(r26)
/* 803AA1B0 003A70F0  80 7A 03 64 */	lwz r3, 0x364(r26)
/* 803AA1B4 003A70F4  C0 44 0A 40 */	lfs f2, 0xa40(r4)
/* 803AA1B8 003A70F8  FC 20 00 18 */	frsp f1, f0
/* 803AA1BC 003A70FC  C0 63 02 CC */	lfs f3, 0x2cc(r3)
/* 803AA1C0 003A7100  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AA1C4 003A7104  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803AA1C8 003A7108  EE E2 00 72 */	fmuls f23, f2, f1
/* 803AA1CC 003A710C  40 80 00 30 */	bge .L_803AA1FC
/* 803AA1D0 003A7110  C0 02 11 90 */	lfs f0, lbl_8051F4F0@sda21(r2)
/* 803AA1D4 003A7114  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA1D8 003A7118  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA1DC 003A711C  EC 03 00 32 */	fmuls f0, f3, f0
/* 803AA1E0 003A7120  FC 00 00 1E */	fctiwz f0, f0
/* 803AA1E4 003A7124  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 803AA1E8 003A7128  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 803AA1EC 003A712C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA1F0 003A7130  7C 03 04 2E */	lfsx f0, r3, r0
/* 803AA1F4 003A7134  FC 00 00 50 */	fneg f0, f0
/* 803AA1F8 003A7138  48 00 00 28 */	b .L_803AA220
.L_803AA1FC:
/* 803AA1FC 003A713C  C0 02 11 94 */	lfs f0, lbl_8051F4F4@sda21(r2)
/* 803AA200 003A7140  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA204 003A7144  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA208 003A7148  EC 03 00 32 */	fmuls f0, f3, f0
/* 803AA20C 003A714C  FC 00 00 1E */	fctiwz f0, f0
/* 803AA210 003A7150  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 803AA214 003A7154  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803AA218 003A7158  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA21C 003A715C  7C 03 04 2E */	lfsx f0, r3, r0
.L_803AA220:
/* 803AA220 003A7160  FC 00 02 10 */	fabs f0, f0
/* 803AA224 003A7164  80 9A 00 C0 */	lwz r4, 0xc0(r26)
/* 803AA228 003A7168  7F 43 D3 78 */	mr r3, r26
/* 803AA22C 003A716C  C0 24 0A 44 */	lfs f1, 0xa44(r4)
/* 803AA230 003A7170  FC 00 00 18 */	frsp f0, f0
/* 803AA234 003A7174  EF 01 00 32 */	fmuls f24, f1, f0
/* 803AA238 003A7178  4B D5 D1 BD */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AA23C 003A717C  80 9A 03 64 */	lwz r4, 0x364(r26)
/* 803AA240 003A7180  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AA244 003A7184  C0 24 02 CC */	lfs f1, 0x2cc(r4)
/* 803AA248 003A7188  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AA24C 003A718C  40 80 00 24 */	bge .L_803AA270
/* 803AA250 003A7190  2C 1B 00 00 */	cmpwi r27, 0
/* 803AA254 003A7194  40 82 00 40 */	bne .L_803AA294
/* 803AA258 003A7198  C0 3D 00 00 */	lfs f1, 0(r29)
/* 803AA25C 003A719C  FE A0 C0 90 */	fmr f21, f24
/* 803AA260 003A71A0  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 803AA264 003A71A4  EE C1 05 F2 */	fmuls f22, f1, f23
/* 803AA268 003A71A8  EE 80 05 F2 */	fmuls f20, f0, f23
/* 803AA26C 003A71AC  48 00 00 28 */	b .L_803AA294
.L_803AA270:
/* 803AA270 003A71B0  2C 1B 00 01 */	cmpwi r27, 1
/* 803AA274 003A71B4  40 82 00 20 */	bne .L_803AA294
/* 803AA278 003A71B8  C0 3D 00 00 */	lfs f1, 0(r29)
/* 803AA27C 003A71BC  FE A0 C0 90 */	fmr f21, f24
/* 803AA280 003A71C0  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 803AA284 003A71C4  FC 20 08 50 */	fneg f1, f1
/* 803AA288 003A71C8  FC 00 00 50 */	fneg f0, f0
/* 803AA28C 003A71CC  EE C1 05 F2 */	fmuls f22, f1, f23
/* 803AA290 003A71D0  EE 80 05 F2 */	fmuls f20, f0, f23
.L_803AA294:
/* 803AA294 003A71D4  80 7A 00 C0 */	lwz r3, 0xc0(r26)
/* 803AA298 003A71D8  88 03 0A 11 */	lbz r0, 0xa11(r3)
/* 803AA29C 003A71DC  28 00 00 00 */	cmplwi r0, 0
/* 803AA2A0 003A71E0  40 82 00 10 */	bne .L_803AA2B0
/* 803AA2A4 003A71E4  FF 20 B0 90 */	fmr f25, f22
/* 803AA2A8 003A71E8  FE E0 A0 90 */	fmr f23, f20
/* 803AA2AC 003A71EC  48 00 00 3C */	b .L_803AA2E8
.L_803AA2B0:
/* 803AA2B0 003A71F0  1C 1B 00 0C */	mulli r0, r27, 0xc
/* 803AA2B4 003A71F4  C0 BD 00 0C */	lfs f5, 0xc(r29)
/* 803AA2B8 003A71F8  C0 7D 00 1C */	lfs f3, 0x1c(r29)
/* 803AA2BC 003A71FC  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 803AA2C0 003A7200  7C 64 02 14 */	add r3, r4, r0
/* 803AA2C4 003A7204  C0 83 02 EC */	lfs f4, 0x2ec(r3)
/* 803AA2C8 003A7208  C0 43 02 F0 */	lfs f2, 0x2f0(r3)
/* 803AA2CC 003A720C  C0 03 02 F4 */	lfs f0, 0x2f4(r3)
/* 803AA2D0 003A7210  EC 85 20 28 */	fsubs f4, f5, f4
/* 803AA2D4 003A7214  EC 43 10 28 */	fsubs f2, f3, f2
/* 803AA2D8 003A7218  EC 01 00 28 */	fsubs f0, f1, f0
/* 803AA2DC 003A721C  EF 36 20 2A */	fadds f25, f22, f4
/* 803AA2E0 003A7220  EF 15 10 2A */	fadds f24, f21, f2
/* 803AA2E4 003A7224  EE F4 00 2A */	fadds f23, f20, f0
.L_803AA2E8:
/* 803AA2E8 003A7228  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 803AA2EC 003A722C  38 61 00 08 */	addi r3, r1, 8
/* 803AA2F0 003A7230  7C 83 E0 2E */	lwzx r4, r3, r28
/* 803AA2F4 003A7234  EC 00 E0 2A */	fadds f0, f0, f28
/* 803AA2F8 003A7238  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 803AA2FC 003A723C  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 803AA300 003A7240  EC 00 D8 2A */	fadds f0, f0, f27
/* 803AA304 003A7244  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 803AA308 003A7248  C0 1E 00 2C */	lfs f0, 0x2c(r30)
/* 803AA30C 003A724C  EC 00 D0 2A */	fadds f0, f0, f26
/* 803AA310 003A7250  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 803AA314 003A7254  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 803AA318 003A7258  EC 00 C8 2A */	fadds f0, f0, f25
/* 803AA31C 003A725C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 803AA320 003A7260  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 803AA324 003A7264  EC 00 C0 2A */	fadds f0, f0, f24
/* 803AA328 003A7268  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 803AA32C 003A726C  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803AA330 003A7270  EC 00 B8 2A */	fadds f0, f0, f23
/* 803AA334 003A7274  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 803AA338 003A7278  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 803AA33C 003A727C  48 09 4C A9 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA340 003A7280  48 07 F5 61 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA344 003A7284  80 9A 00 C0 */	lwz r4, 0xc0(r26)
/* 803AA348 003A7288  2C 1B 00 02 */	cmpwi r27, 2
/* 803AA34C 003A728C  C0 04 0A 38 */	lfs f0, 0xa38(r4)
/* 803AA350 003A7290  EC 3F 00 32 */	fmuls f1, f31, f0
/* 803AA354 003A7294  EC 5E 00 32 */	fmuls f2, f30, f0
/* 803AA358 003A7298  EC 7D 00 32 */	fmuls f3, f29, f0
/* 803AA35C 003A729C  40 80 00 1C */	bge .L_803AA378
/* 803AA360 003A72A0  EF 39 00 32 */	fmuls f25, f25, f0
/* 803AA364 003A72A4  EF 18 00 32 */	fmuls f24, f24, f0
/* 803AA368 003A72A8  EE F7 00 32 */	fmuls f23, f23, f0
/* 803AA36C 003A72AC  FC 20 C8 90 */	fmr f1, f25
/* 803AA370 003A72B0  FC 40 C0 90 */	fmr f2, f24
/* 803AA374 003A72B4  FC 60 B8 90 */	fmr f3, f23
.L_803AA378:
/* 803AA378 003A72B8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AA37C 003A72BC  EC 00 08 2A */	fadds f0, f0, f1
/* 803AA380 003A72C0  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 803AA384 003A72C4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 803AA388 003A72C8  EC 00 10 2A */	fadds f0, f0, f2
/* 803AA38C 003A72CC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 803AA390 003A72D0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 803AA394 003A72D4  EC 00 18 2A */	fadds f0, f0, f3
/* 803AA398 003A72D8  D0 03 00 2C */	stfs f0, 0x2c(r3)
.L_803AA39C:
/* 803AA39C 003A72DC  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 803AA3A0 003A72E0  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 803AA3A4 003A72E4  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 803AA3A8 003A72E8  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 803AA3AC 003A72EC  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 803AA3B0 003A72F0  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 803AA3B4 003A72F4  E3 81 01 48 */	psq_l f28, 328(r1), 0, qr0
/* 803AA3B8 003A72F8  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 803AA3BC 003A72FC  E3 61 01 38 */	psq_l f27, 312(r1), 0, qr0
/* 803AA3C0 003A7300  CB 61 01 30 */	lfd f27, 0x130(r1)
/* 803AA3C4 003A7304  E3 41 01 28 */	psq_l f26, 296(r1), 0, qr0
/* 803AA3C8 003A7308  CB 41 01 20 */	lfd f26, 0x120(r1)
/* 803AA3CC 003A730C  E3 21 01 18 */	psq_l f25, 280(r1), 0, qr0
/* 803AA3D0 003A7310  CB 21 01 10 */	lfd f25, 0x110(r1)
/* 803AA3D4 003A7314  E3 01 01 08 */	psq_l f24, 264(r1), 0, qr0
/* 803AA3D8 003A7318  CB 01 01 00 */	lfd f24, 0x100(r1)
/* 803AA3DC 003A731C  E2 E1 00 F8 */	psq_l f23, 248(r1), 0, qr0
/* 803AA3E0 003A7320  CA E1 00 F0 */	lfd f23, 0xf0(r1)
/* 803AA3E4 003A7324  E2 C1 00 E8 */	psq_l f22, 232(r1), 0, qr0
/* 803AA3E8 003A7328  CA C1 00 E0 */	lfd f22, 0xe0(r1)
/* 803AA3EC 003A732C  E2 A1 00 D8 */	psq_l f21, 216(r1), 0, qr0
/* 803AA3F0 003A7330  CA A1 00 D0 */	lfd f21, 0xd0(r1)
/* 803AA3F4 003A7334  E2 81 00 C8 */	psq_l f20, 200(r1), 0, qr0
/* 803AA3F8 003A7338  CA 81 00 C0 */	lfd f20, 0xc0(r1)
/* 803AA3FC 003A733C  BA 21 00 84 */	lmw r17, 0x84(r1)
/* 803AA400 003A7340  80 01 01 84 */	lwz r0, 0x184(r1)
/* 803AA404 003A7344  7C 08 03 A6 */	mtlr r0
/* 803AA408 003A7348  38 21 01 80 */	addi r1, r1, 0x180
/* 803AA40C 003A734C  4E 80 00 20 */	blr 
.endfn jointMtxCalc__Q34Game8BlackMan3ObjFi

.fn bodyMtxCalc__Q34Game8BlackMan3ObjFv, global
/* 803AA410 003A7350  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 803AA414 003A7354  7C 08 02 A6 */	mflr r0
/* 803AA418 003A7358  90 01 00 84 */	stw r0, 0x84(r1)
/* 803AA41C 003A735C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 803AA420 003A7360  93 C1 00 78 */	stw r30, 0x78(r1)
/* 803AA424 003A7364  7C 7E 1B 78 */	mr r30, r3
/* 803AA428 003A7368  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 803AA42C 003A736C  88 03 0A 18 */	lbz r0, 0xa18(r3)
/* 803AA430 003A7370  28 00 00 00 */	cmplwi r0, 0
/* 803AA434 003A7374  41 82 02 50 */	beq .L_803AA684
/* 803AA438 003A7378  A0 1E 03 6A */	lhz r0, 0x36a(r30)
/* 803AA43C 003A737C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 803AA440 003A7380  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803AA444 003A7384  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803AA448 003A7388  7C 63 02 14 */	add r3, r3, r0
/* 803AA44C 003A738C  48 07 F4 55 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA450 003A7390  80 BE 03 64 */	lwz r5, 0x364(r30)
/* 803AA454 003A7394  7C 7F 1B 78 */	mr r31, r3
/* 803AA458 003A7398  80 82 11 F4 */	lwz r4, lbl_8051F554@sda21(r2)
/* 803AA45C 003A739C  C0 25 02 CC */	lfs f1, 0x2cc(r5)
/* 803AA460 003A73A0  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AA464 003A73A4  80 02 11 F8 */	lwz r0, (lbl_8051F554+4)@sda21(r2)
/* 803AA468 003A73A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AA46C 003A73AC  90 81 00 08 */	stw r4, 8(r1)
/* 803AA470 003A73B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 803AA474 003A73B4  40 81 00 20 */	ble .L_803AA494
/* 803AA478 003A73B8  80 65 01 74 */	lwz r3, 0x174(r5)
/* 803AA47C 003A73BC  48 09 4B 69 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA480 003A73C0  48 07 F4 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA484 003A73C4  C0 83 00 0C */	lfs f4, 0xc(r3)
/* 803AA488 003A73C8  C0 A3 00 1C */	lfs f5, 0x1c(r3)
/* 803AA48C 003A73CC  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 803AA490 003A73D0  48 00 00 20 */	b .L_803AA4B0
.L_803AA494:
/* 803AA494 003A73D4  80 65 01 74 */	lwz r3, 0x174(r5)
/* 803AA498 003A73D8  7C 04 03 78 */	mr r4, r0
/* 803AA49C 003A73DC  48 09 4B 49 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AA4A0 003A73E0  48 07 F4 01 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AA4A4 003A73E4  C0 83 00 0C */	lfs f4, 0xc(r3)
/* 803AA4A8 003A73E8  C0 A3 00 1C */	lfs f5, 0x1c(r3)
/* 803AA4AC 003A73EC  C0 03 00 2C */	lfs f0, 0x2c(r3)
.L_803AA4B0:
/* 803AA4B0 003A73F0  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 803AA4B4 003A73F4  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 803AA4B8 003A73F8  EC A5 08 28 */	fsubs f5, f5, f1
/* 803AA4BC 003A73FC  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 803AA4C0 003A7400  EC 84 18 28 */	fsubs f4, f4, f3
/* 803AA4C4 003A7404  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803AA4C8 003A7408  EC 00 10 28 */	fsubs f0, f0, f2
/* 803AA4CC 003A740C  EC 45 01 72 */	fmuls f2, f5, f5
/* 803AA4D0 003A7410  EC 60 00 32 */	fmuls f3, f0, f0
/* 803AA4D4 003A7414  EC 44 11 3A */	fmadds f2, f4, f4, f2
/* 803AA4D8 003A7418  EC 43 10 2A */	fadds f2, f3, f2
/* 803AA4DC 003A741C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803AA4E0 003A7420  40 81 00 14 */	ble .L_803AA4F4
/* 803AA4E4 003A7424  40 81 00 14 */	ble .L_803AA4F8
/* 803AA4E8 003A7428  FC 20 10 34 */	frsqrte f1, f2
/* 803AA4EC 003A742C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 803AA4F0 003A7430  48 00 00 08 */	b .L_803AA4F8
.L_803AA4F4:
/* 803AA4F4 003A7434  FC 40 08 90 */	fmr f2, f1
.L_803AA4F8:
/* 803AA4F8 003A7438  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803AA4FC 003A743C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803AA500 003A7440  40 81 00 14 */	ble .L_803AA514
/* 803AA504 003A7444  C0 22 11 20 */	lfs f1, lbl_8051F480@sda21(r2)
/* 803AA508 003A7448  EC 21 10 24 */	fdivs f1, f1, f2
/* 803AA50C 003A744C  EC 84 00 72 */	fmuls f4, f4, f1
/* 803AA510 003A7450  EC 00 00 72 */	fmuls f0, f0, f1
.L_803AA514:
/* 803AA514 003A7454  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803AA518 003A7458  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803AA51C 003A745C  C0 43 02 CC */	lfs f2, 0x2cc(r3)
/* 803AA520 003A7460  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803AA524 003A7464  40 80 00 30 */	bge .L_803AA554
/* 803AA528 003A7468  C0 22 11 90 */	lfs f1, lbl_8051F4F0@sda21(r2)
/* 803AA52C 003A746C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA530 003A7470  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA534 003A7474  EC 22 00 72 */	fmuls f1, f2, f1
/* 803AA538 003A7478  FC 20 08 1E */	fctiwz f1, f1
/* 803AA53C 003A747C  D8 21 00 58 */	stfd f1, 0x58(r1)
/* 803AA540 003A7480  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 803AA544 003A7484  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA548 003A7488  7C 23 04 2E */	lfsx f1, r3, r0
/* 803AA54C 003A748C  FC 20 08 50 */	fneg f1, f1
/* 803AA550 003A7490  48 00 00 28 */	b .L_803AA578
.L_803AA554:
/* 803AA554 003A7494  C0 22 11 94 */	lfs f1, lbl_8051F4F4@sda21(r2)
/* 803AA558 003A7498  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA55C 003A749C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA560 003A74A0  EC 22 00 72 */	fmuls f1, f2, f1
/* 803AA564 003A74A4  FC 20 08 1E */	fctiwz f1, f1
/* 803AA568 003A74A8  D8 21 00 60 */	stfd f1, 0x60(r1)
/* 803AA56C 003A74AC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803AA570 003A74B0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA574 003A74B4  7C 23 04 2E */	lfsx f1, r3, r0
.L_803AA578:
/* 803AA578 003A74B8  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 803AA57C 003A74BC  FC 60 0A 10 */	fabs f3, f1
/* 803AA580 003A74C0  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 803AA584 003A74C4  3C 60 80 51 */	lis r3, mCurrentMtx__6J3DSys@ha
/* 803AA588 003A74C8  C0 44 0A 28 */	lfs f2, 0xa28(r4)
/* 803AA58C 003A74CC  38 83 F3 D4 */	addi r4, r3, mCurrentMtx__6J3DSys@l
/* 803AA590 003A74D0  FC 60 18 18 */	frsp f3, f3
/* 803AA594 003A74D4  EC 42 01 32 */	fmuls f2, f2, f4
/* 803AA598 003A74D8  7F E3 FB 78 */	mr r3, r31
/* 803AA59C 003A74DC  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 803AA5A0 003A74E0  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803AA5A4 003A74E4  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 803AA5A8 003A74E8  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 803AA5AC 003A74EC  C0 45 0A 28 */	lfs f2, 0xa28(r5)
/* 803AA5B0 003A74F0  EC 02 00 32 */	fmuls f0, f2, f0
/* 803AA5B4 003A74F4  EC 03 08 3A */	fmadds f0, f3, f0, f1
/* 803AA5B8 003A74F8  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 803AA5BC 003A74FC  4B D3 FD 11 */	bl PSMTXCopy
/* 803AA5C0 003A7500  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803AA5C4 003A7504  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 803AA5C8 003A7508  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803AA5CC 003A750C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803AA5D0 003A7510  80 9E 03 64 */	lwz r4, 0x364(r30)
/* 803AA5D4 003A7514  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803AA5D8 003A7518  C0 44 02 CC */	lfs f2, 0x2cc(r4)
/* 803AA5DC 003A751C  C0 03 0A 2C */	lfs f0, 0xa2c(r3)
/* 803AA5E0 003A7520  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803AA5E4 003A7524  FC 20 00 50 */	fneg f1, f0
/* 803AA5E8 003A7528  40 80 00 30 */	bge .L_803AA618
/* 803AA5EC 003A752C  C0 02 11 90 */	lfs f0, lbl_8051F4F0@sda21(r2)
/* 803AA5F0 003A7530  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA5F4 003A7534  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA5F8 003A7538  EC 02 00 32 */	fmuls f0, f2, f0
/* 803AA5FC 003A753C  FC 00 00 1E */	fctiwz f0, f0
/* 803AA600 003A7540  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 803AA604 003A7544  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 803AA608 003A7548  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA60C 003A754C  7C 03 04 2E */	lfsx f0, r3, r0
/* 803AA610 003A7550  FC 00 00 50 */	fneg f0, f0
/* 803AA614 003A7554  48 00 00 28 */	b .L_803AA63C
.L_803AA618:
/* 803AA618 003A7558  C0 02 11 94 */	lfs f0, lbl_8051F4F4@sda21(r2)
/* 803AA61C 003A755C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803AA620 003A7560  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803AA624 003A7564  EC 02 00 32 */	fmuls f0, f2, f0
/* 803AA628 003A7568  FC 00 00 1E */	fctiwz f0, f0
/* 803AA62C 003A756C  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 803AA630 003A7570  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803AA634 003A7574  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803AA638 003A7578  7C 03 04 2E */	lfsx f0, r3, r0
.L_803AA63C:
/* 803AA63C 003A757C  EC 21 00 32 */	fmuls f1, f1, f0
/* 803AA640 003A7580  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AA644 003A7584  38 61 00 28 */	addi r3, r1, 0x28
/* 803AA648 003A7588  38 81 00 1C */	addi r4, r1, 0x1c
/* 803AA64C 003A758C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AA650 003A7590  38 A1 00 10 */	addi r5, r1, 0x10
/* 803AA654 003A7594  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803AA658 003A7598  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803AA65C 003A759C  48 07 E2 2D */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 803AA660 003A75A0  7F E3 FB 78 */	mr r3, r31
/* 803AA664 003A75A4  7F E5 FB 78 */	mr r5, r31
/* 803AA668 003A75A8  38 81 00 28 */	addi r4, r1, 0x28
/* 803AA66C 003A75AC  4B D3 FC 95 */	bl PSMTXConcat
/* 803AA670 003A75B0  3C 60 80 51 */	lis r3, mCurrentMtx__6J3DSys@ha
/* 803AA674 003A75B4  38 81 00 28 */	addi r4, r1, 0x28
/* 803AA678 003A75B8  38 63 F3 D4 */	addi r3, r3, mCurrentMtx__6J3DSys@l
/* 803AA67C 003A75BC  7C 65 1B 78 */	mr r5, r3
/* 803AA680 003A75C0  4B D3 FC 81 */	bl PSMTXConcat
.L_803AA684:
/* 803AA684 003A75C4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803AA688 003A75C8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 803AA68C 003A75CC  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 803AA690 003A75D0  7C 08 03 A6 */	mtlr r0
/* 803AA694 003A75D4  38 21 00 80 */	addi r1, r1, 0x80
/* 803AA698 003A75D8  4E 80 00 20 */	blr 
.endfn bodyMtxCalc__Q34Game8BlackMan3ObjFv

.fn isTyreFreeze__Q34Game8BlackMan3ObjFv, global
/* 803AA69C 003A75DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AA6A0 003A75E0  7C 08 02 A6 */	mflr r0
/* 803AA6A4 003A75E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AA6A8 003A75E8  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AA6AC 003A75EC  28 03 00 00 */	cmplwi r3, 0
/* 803AA6B0 003A75F0  41 82 00 18 */	beq .L_803AA6C8
/* 803AA6B4 003A75F4  48 00 2E 1D */	bl isFreeze__Q34Game4Tyre3ObjFv
/* 803AA6B8 003A75F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AA6BC 003A75FC  41 82 00 0C */	beq .L_803AA6C8
/* 803AA6C0 003A7600  38 60 00 01 */	li r3, 1
/* 803AA6C4 003A7604  48 00 00 08 */	b .L_803AA6CC
.L_803AA6C8:
/* 803AA6C8 003A7608  38 60 00 00 */	li r3, 0
.L_803AA6CC:
/* 803AA6CC 003A760C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AA6D0 003A7610  7C 08 03 A6 */	mtlr r0
/* 803AA6D4 003A7614  38 21 00 10 */	addi r1, r1, 0x10
/* 803AA6D8 003A7618  4E 80 00 20 */	blr 
.endfn isTyreFreeze__Q34Game8BlackMan3ObjFv

.fn isTyreDead__Q34Game8BlackMan3ObjFv, global
/* 803AA6DC 003A761C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AA6E0 003A7620  7C 08 02 A6 */	mflr r0
/* 803AA6E4 003A7624  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AA6E8 003A7628  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AA6EC 003A762C  7C 7F 1B 78 */	mr r31, r3
/* 803AA6F0 003A7630  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AA6F4 003A7634  28 03 00 00 */	cmplwi r3, 0
/* 803AA6F8 003A7638  41 82 00 68 */	beq .L_803AA760
/* 803AA6FC 003A763C  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 803AA700 003A7640  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AA704 003A7644  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AA708 003A7648  4C 40 13 82 */	cror 2, 0, 2
/* 803AA70C 003A764C  40 82 00 54 */	bne .L_803AA760
/* 803AA710 003A7650  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 803AA714 003A7654  81 83 00 00 */	lwz r12, 0(r3)
/* 803AA718 003A7658  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AA71C 003A765C  7D 89 03 A6 */	mtctr r12
/* 803AA720 003A7660  4E 80 04 21 */	bctrl 
/* 803AA724 003A7664  88 03 00 18 */	lbz r0, 0x18(r3)
/* 803AA728 003A7668  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803AA72C 003A766C  41 82 00 2C */	beq .L_803AA758
/* 803AA730 003A7670  80 DF 03 64 */	lwz r6, 0x364(r31)
/* 803AA734 003A7674  38 80 00 00 */	li r4, 0
/* 803AA738 003A7678  38 00 00 02 */	li r0, 2
/* 803AA73C 003A767C  38 60 00 01 */	li r3, 1
/* 803AA740 003A7680  80 A6 01 E0 */	lwz r5, 0x1e0(r6)
/* 803AA744 003A7684  60 A5 00 01 */	ori r5, r5, 1
/* 803AA748 003A7688  90 A6 01 E0 */	stw r5, 0x1e0(r6)
/* 803AA74C 003A768C  90 9F 03 64 */	stw r4, 0x364(r31)
/* 803AA750 003A7690  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 803AA754 003A7694  48 00 00 10 */	b .L_803AA764
.L_803AA758:
/* 803AA758 003A7698  7F E3 FB 78 */	mr r3, r31
/* 803AA75C 003A769C  4B D5 AB 45 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803AA760:
/* 803AA760 003A76A0  38 60 00 00 */	li r3, 0
.L_803AA764:
/* 803AA764 003A76A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AA768 003A76A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AA76C 003A76AC  7C 08 03 A6 */	mtlr r0
/* 803AA770 003A76B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803AA774 003A76B4  4E 80 00 20 */	blr 
.endfn isTyreDead__Q34Game8BlackMan3ObjFv

.fn isFallEnd__Q34Game8BlackMan3ObjFv, global
/* 803AA778 003A76B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AA77C 003A76BC  7C 08 02 A6 */	mflr r0
/* 803AA780 003A76C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AA784 003A76C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AA788 003A76C8  3B E0 00 00 */	li r31, 0
/* 803AA78C 003A76CC  93 C1 00 08 */	stw r30, 8(r1)
/* 803AA790 003A76D0  7C 7E 1B 78 */	mr r30, r3
/* 803AA794 003A76D4  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 803AA798 003A76D8  28 00 00 00 */	cmplwi r0, 0
/* 803AA79C 003A76DC  41 82 00 08 */	beq .L_803AA7A4
/* 803AA7A0 003A76E0  3B E0 00 01 */	li r31, 1
.L_803AA7A4:
/* 803AA7A4 003A76E4  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803AA7A8 003A76E8  28 03 00 00 */	cmplwi r3, 0
/* 803AA7AC 003A76EC  41 82 00 24 */	beq .L_803AA7D0
/* 803AA7B0 003A76F0  48 00 2D 21 */	bl isFreeze__Q34Game4Tyre3ObjFv
/* 803AA7B4 003A76F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AA7B8 003A76F8  40 82 00 14 */	bne .L_803AA7CC
/* 803AA7BC 003A76FC  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 803AA7C0 003A7700  88 03 03 22 */	lbz r0, 0x322(r3)
/* 803AA7C4 003A7704  28 00 00 00 */	cmplwi r0, 0
/* 803AA7C8 003A7708  41 82 00 08 */	beq .L_803AA7D0
.L_803AA7CC:
/* 803AA7CC 003A770C  3B E0 00 01 */	li r31, 1
.L_803AA7D0:
/* 803AA7D0 003A7710  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AA7D4 003A7714  7F E3 FB 78 */	mr r3, r31
/* 803AA7D8 003A7718  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AA7DC 003A771C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AA7E0 003A7720  7C 08 03 A6 */	mtlr r0
/* 803AA7E4 003A7724  38 21 00 10 */	addi r1, r1, 0x10
/* 803AA7E8 003A7728  4E 80 00 20 */	blr 
.endfn isFallEnd__Q34Game8BlackMan3ObjFv

.fn moveRestart__Q34Game8BlackMan3ObjFv, global
/* 803AA7EC 003A772C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AA7F0 003A7730  7C 08 02 A6 */	mflr r0
/* 803AA7F4 003A7734  3C 80 80 49 */	lis r4, lbl_80495670@ha
/* 803AA7F8 003A7738  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AA7FC 003A773C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803AA800 003A7740  7C 7F 1B 78 */	mr r31, r3
/* 803AA804 003A7744  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803AA808 003A7748  3B C4 56 70 */	addi r30, r4, lbl_80495670@l
/* 803AA80C 003A774C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803AA810 003A7750  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AA814 003A7754  28 03 00 00 */	cmplwi r3, 0
/* 803AA818 003A7758  41 82 01 8C */	beq .L_803AA9A4
/* 803AA81C 003A775C  48 00 33 31 */	bl moveStart__Q34Game4Tyre3ObjFv
/* 803AA820 003A7760  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AA824 003A7764  38 80 00 00 */	li r4, 0
/* 803AA828 003A7768  98 83 02 D0 */	stb r4, 0x2d0(r3)
/* 803AA82C 003A776C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803AA830 003A7770  28 03 00 00 */	cmplwi r3, 0
/* 803AA834 003A7774  41 82 00 18 */	beq .L_803AA84C
/* 803AA838 003A7778  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803AA83C 003A777C  2C 00 00 04 */	cmpwi r0, 4
/* 803AA840 003A7780  40 82 00 0C */	bne .L_803AA84C
/* 803AA844 003A7784  98 9F 03 A8 */	stb r4, 0x3a8(r31)
/* 803AA848 003A7788  48 00 01 3C */	b .L_803AA984
.L_803AA84C:
/* 803AA84C 003A778C  7F E3 FB 78 */	mr r3, r31
/* 803AA850 003A7790  48 00 09 2D */	bl isFinalFloor__Q34Game8BlackMan3ObjFv
/* 803AA854 003A7794  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AA858 003A7798  40 82 01 2C */	bne .L_803AA984
/* 803AA85C 003A779C  88 1F 03 A8 */	lbz r0, 0x3a8(r31)
/* 803AA860 003A77A0  28 00 00 00 */	cmplwi r0, 0
/* 803AA864 003A77A4  40 82 01 20 */	bne .L_803AA984
/* 803AA868 003A77A8  88 1F 03 AB */	lbz r0, 0x3ab(r31)
/* 803AA86C 003A77AC  28 00 00 00 */	cmplwi r0, 0
/* 803AA870 003A77B0  40 82 01 14 */	bne .L_803AA984
/* 803AA874 003A77B4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803AA878 003A77B8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 803AA87C 003A77BC  28 03 00 00 */	cmplwi r3, 0
/* 803AA880 003A77C0  41 82 01 04 */	beq .L_803AA984
/* 803AA884 003A77C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803AA888 003A77C8  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 803AA88C 003A77CC  7D 89 03 A6 */	mtctr r12
/* 803AA890 003A77D0  4E 80 04 21 */	bctrl 
/* 803AA894 003A77D4  3C 03 86 A1 */	subis r0, r3, 0x795f
/* 803AA898 003A77D8  28 00 30 34 */	cmplwi r0, 0x3034
/* 803AA89C 003A77DC  40 82 00 E8 */	bne .L_803AA984
/* 803AA8A0 003A77E0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 803AA8A4 003A77E4  28 00 00 00 */	cmplwi r0, 0
/* 803AA8A8 003A77E8  40 82 00 18 */	bne .L_803AA8C0
/* 803AA8AC 003A77EC  38 7E 00 70 */	addi r3, r30, 0x70
/* 803AA8B0 003A77F0  38 BE 00 28 */	addi r5, r30, 0x28
/* 803AA8B4 003A77F4  38 80 01 D3 */	li r4, 0x1d3
/* 803AA8B8 003A77F8  4C C6 31 82 */	crclr 6
/* 803AA8BC 003A77FC  4B C7 FD 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AA8C0:
/* 803AA8C0 003A7800  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 803AA8C4 003A7804  28 1D 00 00 */	cmplwi r29, 0
/* 803AA8C8 003A7808  40 82 00 18 */	bne .L_803AA8E0
/* 803AA8CC 003A780C  38 7E 00 70 */	addi r3, r30, 0x70
/* 803AA8D0 003A7810  38 BE 00 28 */	addi r5, r30, 0x28
/* 803AA8D4 003A7814  38 80 01 DC */	li r4, 0x1dc
/* 803AA8D8 003A7818  4C C6 31 82 */	crclr 6
/* 803AA8DC 003A781C  4B C7 FD 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AA8E0:
/* 803AA8E0 003A7820  80 1D 00 04 */	lwz r0, 4(r29)
/* 803AA8E4 003A7824  28 00 00 00 */	cmplwi r0, 0
/* 803AA8E8 003A7828  40 82 00 18 */	bne .L_803AA900
/* 803AA8EC 003A782C  38 7E 00 7C */	addi r3, r30, 0x7c
/* 803AA8F0 003A7830  38 BE 00 28 */	addi r5, r30, 0x28
/* 803AA8F4 003A7834  38 80 00 C7 */	li r4, 0xc7
/* 803AA8F8 003A7838  4C C6 31 82 */	crclr 6
/* 803AA8FC 003A783C  4B C7 FD 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AA900:
/* 803AA900 003A7840  80 7D 00 04 */	lwz r3, 4(r29)
/* 803AA904 003A7844  83 A3 00 04 */	lwz r29, 4(r3)
/* 803AA908 003A7848  28 1D 00 00 */	cmplwi r29, 0
/* 803AA90C 003A784C  40 82 00 18 */	bne .L_803AA924
/* 803AA910 003A7850  38 7E 00 70 */	addi r3, r30, 0x70
/* 803AA914 003A7854  38 BE 00 28 */	addi r5, r30, 0x28
/* 803AA918 003A7858  38 80 01 E5 */	li r4, 0x1e5
/* 803AA91C 003A785C  4C C6 31 82 */	crclr 6
/* 803AA920 003A7860  4B C7 FD 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AA924:
/* 803AA924 003A7864  38 7D 00 10 */	addi r3, r29, 0x10
/* 803AA928 003A7868  38 80 00 01 */	li r4, 1
/* 803AA92C 003A786C  4B F8 95 71 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 803AA930 003A7870  7C 7D 1B 79 */	or. r29, r3, r3
/* 803AA934 003A7874  40 82 00 18 */	bne .L_803AA94C
/* 803AA938 003A7878  38 7E 00 70 */	addi r3, r30, 0x70
/* 803AA93C 003A787C  38 BE 00 28 */	addi r5, r30, 0x28
/* 803AA940 003A7880  38 80 01 E7 */	li r4, 0x1e7
/* 803AA944 003A7884  4C C6 31 82 */	crclr 6
/* 803AA948 003A7888  4B C7 FC F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AA94C:
/* 803AA94C 003A788C  28 1D 00 00 */	cmplwi r29, 0
/* 803AA950 003A7890  40 82 00 18 */	bne .L_803AA968
/* 803AA954 003A7894  38 7E 00 18 */	addi r3, r30, 0x18
/* 803AA958 003A7898  38 BE 00 28 */	addi r5, r30, 0x28
/* 803AA95C 003A789C  38 80 08 AD */	li r4, 0x8ad
/* 803AA960 003A78A0  4C C6 31 82 */	crclr 6
/* 803AA964 003A78A4  4B C7 FC DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AA968:
/* 803AA968 003A78A8  7F A3 EB 78 */	mr r3, r29
/* 803AA96C 003A78AC  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 803AA970 003A78B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AA974 003A78B4  7D 89 03 A6 */	mtctr r12
/* 803AA978 003A78B8  4E 80 04 21 */	bctrl 
/* 803AA97C 003A78BC  38 00 00 01 */	li r0, 1
/* 803AA980 003A78C0  98 1F 03 A8 */	stb r0, 0x3a8(r31)
.L_803AA984:
/* 803AA984 003A78C4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803AA988 003A78C8  38 80 00 00 */	li r4, 0
/* 803AA98C 003A78CC  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AA990 003A78D0  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 803AA994 003A78D4  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 803AA998 003A78D8  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 803AA99C 003A78DC  C0 82 11 3C */	lfs f4, lbl_8051F49C@sda21(r2)
/* 803AA9A0 003A78E0  4B D6 87 7D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
.L_803AA9A4:
/* 803AA9A4 003A78E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AA9A8 003A78E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803AA9AC 003A78EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803AA9B0 003A78F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803AA9B4 003A78F4  7C 08 03 A6 */	mtlr r0
/* 803AA9B8 003A78F8  38 21 00 20 */	addi r1, r1, 0x20
/* 803AA9BC 003A78FC  4E 80 00 20 */	blr 
.endfn moveRestart__Q34Game8BlackMan3ObjFv

.fn escape__Q34Game8BlackMan3ObjFv, global
/* 803AA9C0 003A7900  4E 80 00 20 */	blr 
.endfn escape__Q34Game8BlackMan3ObjFv

.fn setTimer__Q34Game8BlackMan3ObjFf, global
/* 803AA9C4 003A7904  D0 23 03 3C */	stfs f1, 0x33c(r3)
/* 803AA9C8 003A7908  4E 80 00 20 */	blr 
.endfn setTimer__Q34Game8BlackMan3ObjFf

.fn getTimer__Q34Game8BlackMan3ObjFv, global
/* 803AA9CC 003A790C  C0 23 03 3C */	lfs f1, 0x33c(r3)
/* 803AA9D0 003A7910  4E 80 00 20 */	blr 
.endfn getTimer__Q34Game8BlackMan3ObjFv

.fn collisionStOn__Q34Game8BlackMan3ObjFv, global
/* 803AA9D4 003A7914  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AA9D8 003A7918  7C 08 02 A6 */	mflr r0
/* 803AA9DC 003A791C  3C 80 6B 6F */	lis r4, 0x6B6F7369@ha
/* 803AA9E0 003A7920  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AA9E4 003A7924  38 84 73 69 */	addi r4, r4, 0x6B6F7369@l
/* 803AA9E8 003A7928  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AA9EC 003A792C  7C 7F 1B 78 */	mr r31, r3
/* 803AA9F0 003A7930  80 63 01 14 */	lwz r3, 0x114(r3)
/* 803AA9F4 003A7934  4B D8 B4 51 */	bl getCollPart__8CollTreeFUl
/* 803AA9F8 003A7938  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803AA9FC 003A793C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803AAA00 003A7940  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803AAA04 003A7944  48 06 8A 01 */	bl __as__4ID32FUl
/* 803AAA08 003A7948  3C 80 6D 75 */	lis r4, 0x6D756E65@ha
/* 803AAA0C 003A794C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803AAA10 003A7950  38 84 6E 65 */	addi r4, r4, 0x6D756E65@l
/* 803AAA14 003A7954  4B D8 B4 31 */	bl getCollPart__8CollTreeFUl
/* 803AAA18 003A7958  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803AAA1C 003A795C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803AAA20 003A7960  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803AAA24 003A7964  48 06 89 E1 */	bl __as__4ID32FUl
/* 803AAA28 003A7968  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 803AAA2C 003A796C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803AAA30 003A7970  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 803AAA34 003A7974  4B D8 B4 11 */	bl getCollPart__8CollTreeFUl
/* 803AAA38 003A7978  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803AAA3C 003A797C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803AAA40 003A7980  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803AAA44 003A7984  48 06 89 C1 */	bl __as__4ID32FUl
/* 803AAA48 003A7988  7F E3 FB 78 */	mr r3, r31
/* 803AAA4C 003A798C  4B D5 C8 FD */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803AAA50 003A7990  2C 03 00 0A */	cmpwi r3, 0xa
/* 803AAA54 003A7994  41 82 00 0C */	beq .L_803AAA60
/* 803AAA58 003A7998  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AAA5C 003A799C  D0 1F 03 78 */	stfs f0, 0x378(r31)
.L_803AAA60:
/* 803AAA60 003A79A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAA64 003A79A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAA68 003A79A8  7C 08 03 A6 */	mtlr r0
/* 803AAA6C 003A79AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AAA70 003A79B0  4E 80 00 20 */	blr 
.endfn collisionStOn__Q34Game8BlackMan3ObjFv

.fn collisionStOff__Q34Game8BlackMan3ObjFv, global
/* 803AAA74 003A79B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AAA78 003A79B8  7C 08 02 A6 */	mflr r0
/* 803AAA7C 003A79BC  3C 80 6B 6F */	lis r4, 0x6B6F7369@ha
/* 803AAA80 003A79C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AAA84 003A79C4  38 84 73 69 */	addi r4, r4, 0x6B6F7369@l
/* 803AAA88 003A79C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AAA8C 003A79CC  7C 7F 1B 78 */	mr r31, r3
/* 803AAA90 003A79D0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 803AAA94 003A79D4  4B D8 B3 B1 */	bl getCollPart__8CollTreeFUl
/* 803AAA98 003A79D8  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803AAA9C 003A79DC  38 63 00 3C */	addi r3, r3, 0x3c
/* 803AAAA0 003A79E0  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803AAAA4 003A79E4  48 06 89 61 */	bl __as__4ID32FUl
/* 803AAAA8 003A79E8  3C 80 6D 75 */	lis r4, 0x6D756E65@ha
/* 803AAAAC 003A79EC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803AAAB0 003A79F0  38 84 6E 65 */	addi r4, r4, 0x6D756E65@l
/* 803AAAB4 003A79F4  4B D8 B3 91 */	bl getCollPart__8CollTreeFUl
/* 803AAAB8 003A79F8  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803AAABC 003A79FC  38 63 00 3C */	addi r3, r3, 0x3c
/* 803AAAC0 003A7A00  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803AAAC4 003A7A04  48 06 89 41 */	bl __as__4ID32FUl
/* 803AAAC8 003A7A08  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 803AAACC 003A7A0C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803AAAD0 003A7A10  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 803AAAD4 003A7A14  4B D8 B3 71 */	bl getCollPart__8CollTreeFUl
/* 803AAAD8 003A7A18  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803AAADC 003A7A1C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803AAAE0 003A7A20  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803AAAE4 003A7A24  48 06 89 21 */	bl __as__4ID32FUl
/* 803AAAE8 003A7A28  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AAAEC 003A7A2C  7F E3 FB 78 */	mr r3, r31
/* 803AAAF0 003A7A30  D0 1F 03 78 */	stfs f0, 0x378(r31)
/* 803AAAF4 003A7A34  48 00 00 19 */	bl flick__Q34Game8BlackMan3ObjFv
/* 803AAAF8 003A7A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAAFC 003A7A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAB00 003A7A40  7C 08 03 A6 */	mtlr r0
/* 803AAB04 003A7A44  38 21 00 10 */	addi r1, r1, 0x10
/* 803AAB08 003A7A48  4E 80 00 20 */	blr 
.endfn collisionStOff__Q34Game8BlackMan3ObjFv

.fn flick__Q34Game8BlackMan3ObjFv, global
/* 803AAB0C 003A7A4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AAB10 003A7A50  7C 08 02 A6 */	mflr r0
/* 803AAB14 003A7A54  C0 82 11 3C */	lfs f4, lbl_8051F49C@sda21(r2)
/* 803AAB18 003A7A58  38 80 00 00 */	li r4, 0
/* 803AAB1C 003A7A5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AAB20 003A7A60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AAB24 003A7A64  7C 7F 1B 78 */	mr r31, r3
/* 803AAB28 003A7A68  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 803AAB2C 003A7A6C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 803AAB30 003A7A70  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 803AAB34 003A7A74  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 803AAB38 003A7A78  4B D6 85 E5 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803AAB3C 003A7A7C  C0 02 10 D8 */	lfs f0, lbl_8051F438@sda21(r2)
/* 803AAB40 003A7A80  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 803AAB44 003A7A84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAB48 003A7A88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAB4C 003A7A8C  7C 08 03 A6 */	mtlr r0
/* 803AAB50 003A7A90  38 21 00 10 */	addi r1, r1, 0x10
/* 803AAB54 003A7A94  4E 80 00 20 */	blr 
.endfn flick__Q34Game8BlackMan3ObjFv

.fn recover__Q34Game8BlackMan3ObjFv, global
/* 803AAB58 003A7A98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AAB5C 003A7A9C  7C 08 02 A6 */	mflr r0
/* 803AAB60 003A7AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AAB64 003A7AA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AAB68 003A7AA8  7C 7F 1B 78 */	mr r31, r3
/* 803AAB6C 003A7AAC  80 83 03 64 */	lwz r4, 0x364(r3)
/* 803AAB70 003A7AB0  28 04 00 00 */	cmplwi r4, 0
/* 803AAB74 003A7AB4  41 82 01 20 */	beq .L_803AAC94
/* 803AAB78 003A7AB8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AAB7C 003A7ABC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AAB80 003A7AC0  40 82 00 64 */	bne .L_803AABE4
/* 803AAB84 003A7AC4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 803AAB88 003A7AC8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AAB8C 003A7ACC  41 82 00 58 */	beq .L_803AABE4
/* 803AAB90 003A7AD0  4B D5 A6 DD */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 803AAB94 003A7AD4  C0 02 11 50 */	lfs f0, lbl_8051F4B0@sda21(r2)
/* 803AAB98 003A7AD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AAB9C 003A7ADC  4C 41 13 82 */	cror 2, 1, 2
/* 803AABA0 003A7AE0  40 82 00 20 */	bne .L_803AABC0
/* 803AABA4 003A7AE4  C0 02 11 7C */	lfs f0, lbl_8051F4DC@sda21(r2)
/* 803AABA8 003A7AE8  7F E3 FB 78 */	mr r3, r31
/* 803AABAC 003A7AEC  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 803AABB0 003A7AF0  FC 00 00 50 */	fneg f0, f0
/* 803AABB4 003A7AF4  EC 21 00 32 */	fmuls f1, f1, f0
/* 803AABB8 003A7AF8  4B D5 C7 D9 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 803AABBC 003A7AFC  48 00 00 30 */	b .L_803AABEC
.L_803AABC0:
/* 803AABC0 003A7B00  7F E3 FB 78 */	mr r3, r31
/* 803AABC4 003A7B04  4B D5 A6 A9 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 803AABC8 003A7B08  C0 02 11 20 */	lfs f0, lbl_8051F480@sda21(r2)
/* 803AABCC 003A7B0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AABD0 003A7B10  40 80 00 1C */	bge .L_803AABEC
/* 803AABD4 003A7B14  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 803AABD8 003A7B18  7F E3 FB 78 */	mr r3, r31
/* 803AABDC 003A7B1C  4B D5 C7 B5 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 803AABE0 003A7B20  48 00 00 0C */	b .L_803AABEC
.L_803AABE4:
/* 803AABE4 003A7B24  7F E3 FB 78 */	mr r3, r31
/* 803AABE8 003A7B28  4B D5 C7 B5 */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
.L_803AABEC:
/* 803AABEC 003A7B2C  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AABF0 003A7B30  38 00 00 01 */	li r0, 1
/* 803AABF4 003A7B34  C0 A2 11 7C */	lfs f5, lbl_8051F4DC@sda21(r2)
/* 803AABF8 003A7B38  98 03 02 D0 */	stb r0, 0x2d0(r3)
/* 803AABFC 003A7B3C  C0 02 11 FC */	lfs f0, lbl_8051F55C@sda21(r2)
/* 803AAC00 003A7B40  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 803AAC04 003A7B44  A0 7F 03 6C */	lhz r3, 0x36c(r31)
/* 803AAC08 003A7B48  80 A4 00 08 */	lwz r5, 8(r4)
/* 803AAC0C 003A7B4C  A0 1F 03 6E */	lhz r0, 0x36e(r31)
/* 803AAC10 003A7B50  1C 83 00 30 */	mulli r4, r3, 0x30
/* 803AAC14 003A7B54  80 A5 00 84 */	lwz r5, 0x84(r5)
/* 803AAC18 003A7B58  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AAC1C 003A7B5C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 803AAC20 003A7B60  1C 00 00 30 */	mulli r0, r0, 0x30
/* 803AAC24 003A7B64  7C 85 22 14 */	add r4, r5, r4
/* 803AAC28 003A7B68  7C A5 02 14 */	add r5, r5, r0
/* 803AAC2C 003A7B6C  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 803AAC30 003A7B70  C0 25 00 0C */	lfs f1, 0xc(r5)
/* 803AAC34 003A7B74  C0 64 00 1C */	lfs f3, 0x1c(r4)
/* 803AAC38 003A7B78  EC 22 08 2A */	fadds f1, f2, f1
/* 803AAC3C 003A7B7C  C0 45 00 1C */	lfs f2, 0x1c(r5)
/* 803AAC40 003A7B80  C0 84 00 2C */	lfs f4, 0x2c(r4)
/* 803AAC44 003A7B84  EC 43 10 2A */	fadds f2, f3, f2
/* 803AAC48 003A7B88  C0 65 00 2C */	lfs f3, 0x2c(r5)
/* 803AAC4C 003A7B8C  EC 25 00 72 */	fmuls f1, f5, f1
/* 803AAC50 003A7B90  EC 64 18 2A */	fadds f3, f4, f3
/* 803AAC54 003A7B94  EC 45 00 B2 */	fmuls f2, f5, f2
/* 803AAC58 003A7B98  D0 23 02 D4 */	stfs f1, 0x2d4(r3)
/* 803AAC5C 003A7B9C  EC 25 00 F2 */	fmuls f1, f5, f3
/* 803AAC60 003A7BA0  D0 43 02 D8 */	stfs f2, 0x2d8(r3)
/* 803AAC64 003A7BA4  D0 23 02 DC */	stfs f1, 0x2dc(r3)
/* 803AAC68 003A7BA8  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AAC6C 003A7BAC  C0 23 02 D4 */	lfs f1, 0x2d4(r3)
/* 803AAC70 003A7BB0  D0 3F 03 28 */	stfs f1, 0x328(r31)
/* 803AAC74 003A7BB4  C0 23 02 D8 */	lfs f1, 0x2d8(r3)
/* 803AAC78 003A7BB8  D0 3F 03 2C */	stfs f1, 0x32c(r31)
/* 803AAC7C 003A7BBC  C0 23 02 DC */	lfs f1, 0x2dc(r3)
/* 803AAC80 003A7BC0  D0 3F 03 30 */	stfs f1, 0x330(r31)
/* 803AAC84 003A7BC4  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AAC88 003A7BC8  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 803AAC8C 003A7BCC  EC 01 00 32 */	fmuls f0, f1, f0
/* 803AAC90 003A7BD0  D0 03 02 CC */	stfs f0, 0x2cc(r3)
.L_803AAC94:
/* 803AAC94 003A7BD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAC98 003A7BD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAC9C 003A7BDC  7C 08 03 A6 */	mtlr r0
/* 803AACA0 003A7BE0  38 21 00 10 */	addi r1, r1, 0x10
/* 803AACA4 003A7BE4  4E 80 00 20 */	blr 
.endfn recover__Q34Game8BlackMan3ObjFv

.fn recoverFlick__Q34Game8BlackMan3ObjFv, global
/* 803AACA8 003A7BE8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803AACAC 003A7BEC  7C 08 02 A6 */	mflr r0
/* 803AACB0 003A7BF0  90 01 00 54 */	stw r0, 0x54(r1)
/* 803AACB4 003A7BF4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803AACB8 003A7BF8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803AACBC 003A7BFC  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803AACC0 003A7C00  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803AACC4 003A7C04  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803AACC8 003A7C08  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803AACCC 003A7C0C  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 803AACD0 003A7C10  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 803AACD4 003A7C14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AACD8 003A7C18  7C 7F 1B 78 */	mr r31, r3
/* 803AACDC 003A7C1C  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AACE0 003A7C20  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803AACE4 003A7C24  28 03 00 00 */	cmplwi r3, 0
/* 803AACE8 003A7C28  C3 E4 05 3C */	lfs f31, 0x53c(r4)
/* 803AACEC 003A7C2C  C3 C4 04 C4 */	lfs f30, 0x4c4(r4)
/* 803AACF0 003A7C30  C3 A4 04 EC */	lfs f29, 0x4ec(r4)
/* 803AACF4 003A7C34  C3 84 05 14 */	lfs f28, 0x514(r4)
/* 803AACF8 003A7C38  41 82 00 20 */	beq .L_803AAD18
/* 803AACFC 003A7C3C  C0 02 11 48 */	lfs f0, lbl_8051F4A8@sda21(r2)
/* 803AAD00 003A7C40  FC 20 F8 90 */	fmr f1, f31
/* 803AAD04 003A7C44  FC 60 E8 90 */	fmr f3, f29
/* 803AAD08 003A7C48  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 803AAD0C 003A7C4C  EC 40 07 B2 */	fmuls f2, f0, f30
/* 803AAD10 003A7C50  38 80 00 00 */	li r4, 0
/* 803AAD14 003A7C54  4B D6 84 09 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
.L_803AAD18:
/* 803AAD18 003A7C58  FC 20 F8 90 */	fmr f1, f31
/* 803AAD1C 003A7C5C  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 803AAD20 003A7C60  FC 40 F0 90 */	fmr f2, f30
/* 803AAD24 003A7C64  7F E3 FB 78 */	mr r3, r31
/* 803AAD28 003A7C68  FC 60 E8 90 */	fmr f3, f29
/* 803AAD2C 003A7C6C  38 80 00 00 */	li r4, 0
/* 803AAD30 003A7C70  4B D6 83 ED */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803AAD34 003A7C74  FC 20 E0 90 */	fmr f1, f28
/* 803AAD38 003A7C78  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 803AAD3C 003A7C7C  FC 40 F0 90 */	fmr f2, f30
/* 803AAD40 003A7C80  7F E3 FB 78 */	mr r3, r31
/* 803AAD44 003A7C84  FC 60 E8 90 */	fmr f3, f29
/* 803AAD48 003A7C88  38 80 00 00 */	li r4, 0
/* 803AAD4C 003A7C8C  4B D6 87 89 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803AAD50 003A7C90  FC 20 E0 90 */	fmr f1, f28
/* 803AAD54 003A7C94  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 803AAD58 003A7C98  FC 40 F0 90 */	fmr f2, f30
/* 803AAD5C 003A7C9C  7F E3 FB 78 */	mr r3, r31
/* 803AAD60 003A7CA0  FC 60 E8 90 */	fmr f3, f29
/* 803AAD64 003A7CA4  38 80 00 00 */	li r4, 0
/* 803AAD68 003A7CA8  4B D6 8A 29 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 803AAD6C 003A7CAC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803AAD70 003A7CB0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803AAD74 003A7CB4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803AAD78 003A7CB8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803AAD7C 003A7CBC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803AAD80 003A7CC0  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803AAD84 003A7CC4  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 803AAD88 003A7CC8  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 803AAD8C 003A7CCC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803AAD90 003A7CD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAD94 003A7CD4  7C 08 03 A6 */	mtlr r0
/* 803AAD98 003A7CD8  38 21 00 50 */	addi r1, r1, 0x50
/* 803AAD9C 003A7CDC  4E 80 00 20 */	blr 
.endfn recoverFlick__Q34Game8BlackMan3ObjFv

.fn tyreFlick__Q34Game8BlackMan3ObjFv, global
/* 803AADA0 003A7CE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AADA4 003A7CE4  7C 08 02 A6 */	mflr r0
/* 803AADA8 003A7CE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AADAC 003A7CEC  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AADB0 003A7CF0  28 03 00 00 */	cmplwi r3, 0
/* 803AADB4 003A7CF4  41 82 00 08 */	beq .L_803AADBC
/* 803AADB8 003A7CF8  48 00 30 0D */	bl flick__Q34Game4Tyre3ObjFv
.L_803AADBC:
/* 803AADBC 003A7CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AADC0 003A7D00  7C 08 03 A6 */	mtlr r0
/* 803AADC4 003A7D04  38 21 00 10 */	addi r1, r1, 0x10
/* 803AADC8 003A7D08  4E 80 00 20 */	blr 
.endfn tyreFlick__Q34Game8BlackMan3ObjFv

.fn deadEffect__Q34Game8BlackMan3ObjFv, global
/* 803AADCC 003A7D0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803AADD0 003A7D10  7C 08 02 A6 */	mflr r0
/* 803AADD4 003A7D14  90 01 00 34 */	stw r0, 0x34(r1)
/* 803AADD8 003A7D18  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803AADDC 003A7D1C  7C 7F 1B 78 */	mr r31, r3
/* 803AADE0 003A7D20  4B D5 AA 95 */	bl createDeadBombEffect__Q24Game9EnemyBaseFv
/* 803AADE4 003A7D24  7F E3 FB 78 */	mr r3, r31
/* 803AADE8 003A7D28  81 9F 00 00 */	lwz r12, 0(r31)
/* 803AADEC 003A7D2C  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 803AADF0 003A7D30  7D 89 03 A6 */	mtctr r12
/* 803AADF4 003A7D34  4E 80 04 21 */	bctrl 
/* 803AADF8 003A7D38  C0 22 10 D8 */	lfs f1, lbl_8051F438@sda21(r2)
/* 803AADFC 003A7D3C  7F E3 FB 78 */	mr r3, r31
/* 803AAE00 003A7D40  48 0C 36 15 */	bl PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
/* 803AAE04 003A7D44  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803AAE08 003A7D48  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 803AAE0C 003A7D4C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803AAE10 003A7D50  3C 80 80 4F */	lis r4, __vt__Q23efx10TKageDead2@ha
/* 803AAE14 003A7D54  90 01 00 08 */	stw r0, 8(r1)
/* 803AAE18 003A7D58  38 A3 6A 78 */	addi r5, r3, __vt__Q23efx8TSimple1@l
/* 803AAE1C 003A7D5C  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 803AAE20 003A7D60  38 00 02 98 */	li r0, 0x298
/* 803AAE24 003A7D64  90 A1 00 08 */	stw r5, 8(r1)
/* 803AAE28 003A7D68  38 E4 A1 4C */	addi r7, r4, __vt__Q23efx10TKageDead2@l
/* 803AAE2C 003A7D6C  38 C3 A7 EC */	addi r6, r3, __vt__Q23efx3Arg@l
/* 803AAE30 003A7D70  38 80 00 00 */	li r4, 0
/* 803AAE34 003A7D74  B0 01 00 0C */	sth r0, 0xc(r1)
/* 803AAE38 003A7D78  3C 60 80 4E */	lis r3, __vt__Q23efx11ArgPrmColor@ha
/* 803AAE3C 003A7D7C  38 A3 5D 20 */	addi r5, r3, __vt__Q23efx11ArgPrmColor@l
/* 803AAE40 003A7D80  38 00 00 FF */	li r0, 0xff
/* 803AAE44 003A7D84  90 81 00 10 */	stw r4, 0x10(r1)
/* 803AAE48 003A7D88  38 61 00 08 */	addi r3, r1, 8
/* 803AAE4C 003A7D8C  38 81 00 14 */	addi r4, r1, 0x14
/* 803AAE50 003A7D90  90 E1 00 08 */	stw r7, 8(r1)
/* 803AAE54 003A7D94  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803AAE58 003A7D98  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 803AAE5C 003A7D9C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803AAE60 003A7DA0  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 803AAE64 003A7DA4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AAE68 003A7DA8  C0 1F 03 0C */	lfs f0, 0x30c(r31)
/* 803AAE6C 003A7DAC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803AAE70 003A7DB0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803AAE74 003A7DB4  98 01 00 24 */	stb r0, 0x24(r1)
/* 803AAE78 003A7DB8  98 01 00 25 */	stb r0, 0x25(r1)
/* 803AAE7C 003A7DBC  98 01 00 26 */	stb r0, 0x26(r1)
/* 803AAE80 003A7DC0  98 01 00 27 */	stb r0, 0x27(r1)
/* 803AAE84 003A7DC4  48 04 08 31 */	bl create__Q23efx10TKageDead2FPQ23efx3Arg
/* 803AAE88 003A7DC8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803AAE8C 003A7DCC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803AAE90 003A7DD0  7C 08 03 A6 */	mtlr r0
/* 803AAE94 003A7DD4  38 21 00 30 */	addi r1, r1, 0x30
/* 803AAE98 003A7DD8  4E 80 00 20 */	blr 
.endfn deadEffect__Q34Game8BlackMan3ObjFv

.fn deadTraceEffect__Q34Game8BlackMan3ObjFv, global
/* 803AAE9C 003A7DDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AAEA0 003A7DE0  7C 08 02 A6 */	mflr r0
/* 803AAEA4 003A7DE4  38 80 00 00 */	li r4, 0
/* 803AAEA8 003A7DE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AAEAC 003A7DEC  80 63 03 9C */	lwz r3, 0x39c(r3)
/* 803AAEB0 003A7DF0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AAEB4 003A7DF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AAEB8 003A7DF8  7D 89 03 A6 */	mtctr r12
/* 803AAEBC 003A7DFC  4E 80 04 21 */	bctrl 
/* 803AAEC0 003A7E00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAEC4 003A7E04  7C 08 03 A6 */	mtlr r0
/* 803AAEC8 003A7E08  38 21 00 10 */	addi r1, r1, 0x10
/* 803AAECC 003A7E0C  4E 80 00 20 */	blr 
.endfn deadTraceEffect__Q34Game8BlackMan3ObjFv

.fn tyreUpEffect__Q34Game8BlackMan3ObjFv, global
/* 803AAED0 003A7E10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AAED4 003A7E14  7C 08 02 A6 */	mflr r0
/* 803AAED8 003A7E18  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AAEDC 003A7E1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AAEE0 003A7E20  7C 7F 1B 78 */	mr r31, r3
/* 803AAEE4 003A7E24  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AAEE8 003A7E28  28 03 00 00 */	cmplwi r3, 0
/* 803AAEEC 003A7E2C  41 82 00 44 */	beq .L_803AAF30
/* 803AAEF0 003A7E30  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AAEF4 003A7E34  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AAEF8 003A7E38  40 82 00 10 */	bne .L_803AAF08
/* 803AAEFC 003A7E3C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 803AAF00 003A7E40  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AAF04 003A7E44  40 82 00 2C */	bne .L_803AAF30
.L_803AAF08:
/* 803AAF08 003A7E48  81 83 00 00 */	lwz r12, 0(r3)
/* 803AAF0C 003A7E4C  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 803AAF10 003A7E50  7D 89 03 A6 */	mtctr r12
/* 803AAF14 003A7E54  4E 80 04 21 */	bctrl 
/* 803AAF18 003A7E58  80 7F 03 98 */	lwz r3, 0x398(r31)
/* 803AAF1C 003A7E5C  38 80 00 00 */	li r4, 0
/* 803AAF20 003A7E60  81 83 00 00 */	lwz r12, 0(r3)
/* 803AAF24 003A7E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AAF28 003A7E68  7D 89 03 A6 */	mtctr r12
/* 803AAF2C 003A7E6C  4E 80 04 21 */	bctrl 
.L_803AAF30:
/* 803AAF30 003A7E70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAF34 003A7E74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAF38 003A7E78  7C 08 03 A6 */	mtlr r0
/* 803AAF3C 003A7E7C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AAF40 003A7E80  4E 80 00 20 */	blr 
.endfn tyreUpEffect__Q34Game8BlackMan3ObjFv

.fn tyreDownEffect__Q34Game8BlackMan3ObjFv, global
/* 803AAF44 003A7E84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AAF48 003A7E88  7C 08 02 A6 */	mflr r0
/* 803AAF4C 003A7E8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AAF50 003A7E90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AAF54 003A7E94  7C 7F 1B 78 */	mr r31, r3
/* 803AAF58 003A7E98  80 63 03 64 */	lwz r3, 0x364(r3)
/* 803AAF5C 003A7E9C  28 03 00 00 */	cmplwi r3, 0
/* 803AAF60 003A7EA0  41 82 00 20 */	beq .L_803AAF80
/* 803AAF64 003A7EA4  38 9F 03 28 */	addi r4, r31, 0x328
/* 803AAF68 003A7EA8  48 00 35 DD */	bl "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
/* 803AAF6C 003A7EAC  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803AAF70 003A7EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AAF74 003A7EB4  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 803AAF78 003A7EB8  7D 89 03 A6 */	mtctr r12
/* 803AAF7C 003A7EBC  4E 80 04 21 */	bctrl 
.L_803AAF80:
/* 803AAF80 003A7EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AAF84 003A7EC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AAF88 003A7EC8  7C 08 03 A6 */	mtlr r0
/* 803AAF8C 003A7ECC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AAF90 003A7ED0  4E 80 00 20 */	blr 
.endfn tyreDownEffect__Q34Game8BlackMan3ObjFv

.fn bendEffect__Q34Game8BlackMan3ObjFv, global
/* 803AAF94 003A7ED4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AAF98 003A7ED8  7C 08 02 A6 */	mflr r0
/* 803AAF9C 003A7EDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AAFA0 003A7EE0  80 03 03 64 */	lwz r0, 0x364(r3)
/* 803AAFA4 003A7EE4  28 00 00 00 */	cmplwi r0, 0
/* 803AAFA8 003A7EE8  41 82 00 70 */	beq .L_803AB018
/* 803AAFAC 003A7EEC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 803AAFB0 003A7EF0  38 82 12 00 */	addi r4, r2, lbl_8051F560@sda21
/* 803AAFB4 003A7EF4  48 09 40 31 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AAFB8 003A7EF8  48 07 E8 E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AAFBC 003A7EFC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803AAFC0 003A7F00  38 C0 00 00 */	li r6, 0
/* 803AAFC4 003A7F04  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803AAFC8 003A7F08  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 803AAFCC 003A7F0C  90 01 00 08 */	stw r0, 8(r1)
/* 803AAFD0 003A7F10  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 803AAFD4 003A7F14  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 803AAFD8 003A7F18  3C 80 80 4E */	lis r4, __vt__Q23efx10TKageBend1@ha
/* 803AAFDC 003A7F1C  90 01 00 08 */	stw r0, 8(r1)
/* 803AAFE0 003A7F20  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 803AAFE4 003A7F24  38 E0 02 95 */	li r7, 0x295
/* 803AAFE8 003A7F28  38 A0 02 96 */	li r5, 0x296
/* 803AAFEC 003A7F2C  90 01 00 08 */	stw r0, 8(r1)
/* 803AAFF0 003A7F30  38 04 5D 0C */	addi r0, r4, __vt__Q23efx10TKageBend1@l
/* 803AAFF4 003A7F34  38 80 00 00 */	li r4, 0
/* 803AAFF8 003A7F38  90 61 00 18 */	stw r3, 0x18(r1)
/* 803AAFFC 003A7F3C  38 61 00 08 */	addi r3, r1, 8
/* 803AB000 003A7F40  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 803AB004 003A7F44  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 803AB008 003A7F48  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803AB00C 003A7F4C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803AB010 003A7F50  90 01 00 08 */	stw r0, 8(r1)
/* 803AB014 003A7F54  48 00 43 85 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
.L_803AB018:
/* 803AB018 003A7F58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AB01C 003A7F5C  7C 08 03 A6 */	mtlr r0
/* 803AB020 003A7F60  38 21 00 20 */	addi r1, r1, 0x20
/* 803AB024 003A7F64  4E 80 00 20 */	blr 
.endfn bendEffect__Q34Game8BlackMan3ObjFv

.fn createTraceEffect__Q34Game8BlackMan3ObjFv, global
/* 803AB028 003A7F68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB02C 003A7F6C  7C 08 02 A6 */	mflr r0
/* 803AB030 003A7F70  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB034 003A7F74  80 03 03 64 */	lwz r0, 0x364(r3)
/* 803AB038 003A7F78  28 00 00 00 */	cmplwi r0, 0
/* 803AB03C 003A7F7C  41 82 00 20 */	beq .L_803AB05C
/* 803AB040 003A7F80  80 63 03 90 */	lwz r3, 0x390(r3)
/* 803AB044 003A7F84  38 80 00 00 */	li r4, 0
/* 803AB048 003A7F88  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB04C 003A7F8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AB050 003A7F90  7D 89 03 A6 */	mtctr r12
/* 803AB054 003A7F94  4E 80 04 21 */	bctrl 
/* 803AB058 003A7F98  48 00 00 1C */	b .L_803AB074
.L_803AB05C:
/* 803AB05C 003A7F9C  80 63 03 94 */	lwz r3, 0x394(r3)
/* 803AB060 003A7FA0  38 80 00 00 */	li r4, 0
/* 803AB064 003A7FA4  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB068 003A7FA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AB06C 003A7FAC  7D 89 03 A6 */	mtctr r12
/* 803AB070 003A7FB0  4E 80 04 21 */	bctrl 
.L_803AB074:
/* 803AB074 003A7FB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB078 003A7FB8  7C 08 03 A6 */	mtlr r0
/* 803AB07C 003A7FBC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB080 003A7FC0  4E 80 00 20 */	blr 
.endfn createTraceEffect__Q34Game8BlackMan3ObjFv

.fn fadeTraceEffect__Q34Game8BlackMan3ObjFv, global
/* 803AB084 003A7FC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB088 003A7FC8  7C 08 02 A6 */	mflr r0
/* 803AB08C 003A7FCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB090 003A7FD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB094 003A7FD4  7C 7F 1B 78 */	mr r31, r3
/* 803AB098 003A7FD8  80 63 03 90 */	lwz r3, 0x390(r3)
/* 803AB09C 003A7FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB0A0 003A7FE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AB0A4 003A7FE4  7D 89 03 A6 */	mtctr r12
/* 803AB0A8 003A7FE8  4E 80 04 21 */	bctrl 
/* 803AB0AC 003A7FEC  80 7F 03 94 */	lwz r3, 0x394(r31)
/* 803AB0B0 003A7FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB0B4 003A7FF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AB0B8 003A7FF8  7D 89 03 A6 */	mtctr r12
/* 803AB0BC 003A7FFC  4E 80 04 21 */	bctrl 
/* 803AB0C0 003A8000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB0C4 003A8004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB0C8 003A8008  7C 08 03 A6 */	mtlr r0
/* 803AB0CC 003A800C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB0D0 003A8010  4E 80 00 20 */	blr 
.endfn fadeTraceEffect__Q34Game8BlackMan3ObjFv

.fn createFlickEffect__Q34Game8BlackMan3ObjFv, global
/* 803AB0D4 003A8014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB0D8 003A8018  7C 08 02 A6 */	mflr r0
/* 803AB0DC 003A801C  38 80 00 00 */	li r4, 0
/* 803AB0E0 003A8020  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB0E4 003A8024  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB0E8 003A8028  7C 7F 1B 78 */	mr r31, r3
/* 803AB0EC 003A802C  80 63 03 A0 */	lwz r3, 0x3a0(r3)
/* 803AB0F0 003A8030  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB0F4 003A8034  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AB0F8 003A8038  7D 89 03 A6 */	mtctr r12
/* 803AB0FC 003A803C  4E 80 04 21 */	bctrl 
/* 803AB100 003A8040  80 7F 03 A4 */	lwz r3, 0x3a4(r31)
/* 803AB104 003A8044  38 80 00 00 */	li r4, 0
/* 803AB108 003A8048  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB10C 003A804C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AB110 003A8050  7D 89 03 A6 */	mtctr r12
/* 803AB114 003A8054  4E 80 04 21 */	bctrl 
/* 803AB118 003A8058  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB11C 003A805C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB120 003A8060  7C 08 03 A6 */	mtlr r0
/* 803AB124 003A8064  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB128 003A8068  4E 80 00 20 */	blr 
.endfn createFlickEffect__Q34Game8BlackMan3ObjFv

.fn fadeFlickEffect__Q34Game8BlackMan3ObjFv, global
/* 803AB12C 003A806C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB130 003A8070  7C 08 02 A6 */	mflr r0
/* 803AB134 003A8074  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB138 003A8078  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB13C 003A807C  7C 7F 1B 78 */	mr r31, r3
/* 803AB140 003A8080  80 63 03 A0 */	lwz r3, 0x3a0(r3)
/* 803AB144 003A8084  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB148 003A8088  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AB14C 003A808C  7D 89 03 A6 */	mtctr r12
/* 803AB150 003A8090  4E 80 04 21 */	bctrl 
/* 803AB154 003A8094  80 7F 03 A4 */	lwz r3, 0x3a4(r31)
/* 803AB158 003A8098  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB15C 003A809C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AB160 003A80A0  7D 89 03 A6 */	mtctr r12
/* 803AB164 003A80A4  4E 80 04 21 */	bctrl 
/* 803AB168 003A80A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB16C 003A80AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB170 003A80B0  7C 08 03 A6 */	mtlr r0
/* 803AB174 003A80B4  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB178 003A80B8  4E 80 00 20 */	blr 
.endfn fadeFlickEffect__Q34Game8BlackMan3ObjFv

.fn isFinalFloor__Q34Game8BlackMan3ObjFv, global
/* 803AB17C 003A80BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB180 003A80C0  7C 08 02 A6 */	mflr r0
/* 803AB184 003A80C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB188 003A80C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB18C 003A80CC  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB190 003A80D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 803AB194 003A80D4  28 03 00 00 */	cmplwi r3, 0
/* 803AB198 003A80D8  41 82 00 18 */	beq .L_803AB1B0
/* 803AB19C 003A80DC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803AB1A0 003A80E0  2C 00 00 04 */	cmpwi r0, 4
/* 803AB1A4 003A80E4  40 82 00 0C */	bne .L_803AB1B0
/* 803AB1A8 003A80E8  38 60 00 00 */	li r3, 0
/* 803AB1AC 003A80EC  48 00 00 7C */	b .L_803AB228
.L_803AB1B0:
/* 803AB1B0 003A80F0  83 C3 00 58 */	lwz r30, 0x58(r3)
/* 803AB1B4 003A80F4  28 1E 00 00 */	cmplwi r30, 0
/* 803AB1B8 003A80F8  41 82 00 6C */	beq .L_803AB224
/* 803AB1BC 003A80FC  7F C3 F3 78 */	mr r3, r30
/* 803AB1C0 003A8100  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AB1C4 003A8104  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 803AB1C8 003A8108  7D 89 03 A6 */	mtctr r12
/* 803AB1CC 003A810C  4E 80 04 21 */	bctrl 
/* 803AB1D0 003A8110  3C 03 86 A1 */	subis r0, r3, 0x795f
/* 803AB1D4 003A8114  28 00 30 34 */	cmplwi r0, 0x3034
/* 803AB1D8 003A8118  40 82 00 4C */	bne .L_803AB224
/* 803AB1DC 003A811C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803AB1E0 003A8120  28 03 00 00 */	cmplwi r3, 0
/* 803AB1E4 003A8124  41 82 00 40 */	beq .L_803AB224
/* 803AB1E8 003A8128  80 63 00 28 */	lwz r3, 0x28(r3)
/* 803AB1EC 003A812C  28 03 00 00 */	cmplwi r3, 0
/* 803AB1F0 003A8130  41 82 00 34 */	beq .L_803AB224
/* 803AB1F4 003A8134  4B E2 C2 FD */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 803AB1F8 003A8138  7C 7F 1B 78 */	mr r31, r3
/* 803AB1FC 003A813C  7F C3 F3 78 */	mr r3, r30
/* 803AB200 003A8140  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AB204 003A8144  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803AB208 003A8148  7D 89 03 A6 */	mtctr r12
/* 803AB20C 003A814C  4E 80 04 21 */	bctrl 
/* 803AB210 003A8150  38 03 00 01 */	addi r0, r3, 1
/* 803AB214 003A8154  7C 00 F8 00 */	cmpw r0, r31
/* 803AB218 003A8158  40 82 00 0C */	bne .L_803AB224
/* 803AB21C 003A815C  38 60 00 01 */	li r3, 1
/* 803AB220 003A8160  48 00 00 08 */	b .L_803AB228
.L_803AB224:
/* 803AB224 003A8164  38 60 00 00 */	li r3, 0
.L_803AB228:
/* 803AB228 003A8168  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB22C 003A816C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB230 003A8170  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB234 003A8174  7C 08 03 A6 */	mtlr r0
/* 803AB238 003A8178  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB23C 003A817C  4E 80 00 20 */	blr 
.endfn isFinalFloor__Q34Game8BlackMan3ObjFv

.fn appearFanfare__Q34Game8BlackMan3ObjFv, global
/* 803AB240 003A8180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB244 003A8184  7C 08 02 A6 */	mflr r0
/* 803AB248 003A8188  3C A0 80 49 */	lis r5, lbl_80495670@ha
/* 803AB24C 003A818C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB250 003A8190  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB254 003A8194  3B E5 56 70 */	addi r31, r5, lbl_80495670@l
/* 803AB258 003A8198  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB25C 003A819C  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 803AB260 003A81A0  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 803AB264 003A81A4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803AB268 003A81A8  41 82 01 80 */	beq .L_803AB3E8
/* 803AB26C 003A81AC  88 03 03 AA */	lbz r0, 0x3aa(r3)
/* 803AB270 003A81B0  28 00 00 00 */	cmplwi r0, 0
/* 803AB274 003A81B4  41 82 01 74 */	beq .L_803AB3E8
/* 803AB278 003A81B8  38 00 00 00 */	li r0, 0
/* 803AB27C 003A81BC  98 03 03 AA */	stb r0, 0x3aa(r3)
/* 803AB280 003A81C0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 803AB284 003A81C4  28 00 00 00 */	cmplwi r0, 0
/* 803AB288 003A81C8  40 82 00 18 */	bne .L_803AB2A0
/* 803AB28C 003A81CC  38 7F 00 70 */	addi r3, r31, 0x70
/* 803AB290 003A81D0  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB294 003A81D4  38 80 01 D3 */	li r4, 0x1d3
/* 803AB298 003A81D8  4C C6 31 82 */	crclr 6
/* 803AB29C 003A81DC  4B C7 F3 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB2A0:
/* 803AB2A0 003A81E0  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 803AB2A4 003A81E4  28 1E 00 00 */	cmplwi r30, 0
/* 803AB2A8 003A81E8  40 82 00 18 */	bne .L_803AB2C0
/* 803AB2AC 003A81EC  38 7F 00 70 */	addi r3, r31, 0x70
/* 803AB2B0 003A81F0  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB2B4 003A81F4  38 80 01 DC */	li r4, 0x1dc
/* 803AB2B8 003A81F8  4C C6 31 82 */	crclr 6
/* 803AB2BC 003A81FC  4B C7 F3 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB2C0:
/* 803AB2C0 003A8200  80 1E 00 04 */	lwz r0, 4(r30)
/* 803AB2C4 003A8204  28 00 00 00 */	cmplwi r0, 0
/* 803AB2C8 003A8208  40 82 00 18 */	bne .L_803AB2E0
/* 803AB2CC 003A820C  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803AB2D0 003A8210  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB2D4 003A8214  38 80 00 CF */	li r4, 0xcf
/* 803AB2D8 003A8218  4C C6 31 82 */	crclr 6
/* 803AB2DC 003A821C  4B C7 F3 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB2E0:
/* 803AB2E0 003A8220  80 7E 00 04 */	lwz r3, 4(r30)
/* 803AB2E4 003A8224  83 C3 00 04 */	lwz r30, 4(r3)
/* 803AB2E8 003A8228  28 1E 00 00 */	cmplwi r30, 0
/* 803AB2EC 003A822C  40 82 00 18 */	bne .L_803AB304
/* 803AB2F0 003A8230  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803AB2F4 003A8234  38 BF 01 30 */	addi r5, r31, 0x130
/* 803AB2F8 003A8238  38 80 00 D1 */	li r4, 0xd1
/* 803AB2FC 003A823C  4C C6 31 82 */	crclr 6
/* 803AB300 003A8240  4B C7 F3 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB304:
/* 803AB304 003A8244  80 1E 00 04 */	lwz r0, 4(r30)
/* 803AB308 003A8248  28 00 00 00 */	cmplwi r0, 0
/* 803AB30C 003A824C  40 82 00 18 */	bne .L_803AB324
/* 803AB310 003A8250  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803AB314 003A8254  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB318 003A8258  38 80 00 5A */	li r4, 0x5a
/* 803AB31C 003A825C  4C C6 31 82 */	crclr 6
/* 803AB320 003A8260  4B C7 F3 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB324:
/* 803AB324 003A8264  80 1E 00 04 */	lwz r0, 4(r30)
/* 803AB328 003A8268  28 00 00 00 */	cmplwi r0, 0
/* 803AB32C 003A826C  41 82 00 BC */	beq .L_803AB3E8
/* 803AB330 003A8270  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 803AB334 003A8274  28 00 00 00 */	cmplwi r0, 0
/* 803AB338 003A8278  40 82 00 18 */	bne .L_803AB350
/* 803AB33C 003A827C  38 7F 00 70 */	addi r3, r31, 0x70
/* 803AB340 003A8280  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB344 003A8284  38 80 01 D3 */	li r4, 0x1d3
/* 803AB348 003A8288  4C C6 31 82 */	crclr 6
/* 803AB34C 003A828C  4B C7 F2 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB350:
/* 803AB350 003A8290  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 803AB354 003A8294  28 1E 00 00 */	cmplwi r30, 0
/* 803AB358 003A8298  40 82 00 18 */	bne .L_803AB370
/* 803AB35C 003A829C  38 7F 00 70 */	addi r3, r31, 0x70
/* 803AB360 003A82A0  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB364 003A82A4  38 80 01 DC */	li r4, 0x1dc
/* 803AB368 003A82A8  4C C6 31 82 */	crclr 6
/* 803AB36C 003A82AC  4B C7 F2 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB370:
/* 803AB370 003A82B0  80 1E 00 04 */	lwz r0, 4(r30)
/* 803AB374 003A82B4  28 00 00 00 */	cmplwi r0, 0
/* 803AB378 003A82B8  40 82 00 18 */	bne .L_803AB390
/* 803AB37C 003A82BC  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803AB380 003A82C0  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB384 003A82C4  38 80 00 CF */	li r4, 0xcf
/* 803AB388 003A82C8  4C C6 31 82 */	crclr 6
/* 803AB38C 003A82CC  4B C7 F2 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB390:
/* 803AB390 003A82D0  80 7E 00 04 */	lwz r3, 4(r30)
/* 803AB394 003A82D4  83 C3 00 04 */	lwz r30, 4(r3)
/* 803AB398 003A82D8  28 1E 00 00 */	cmplwi r30, 0
/* 803AB39C 003A82DC  40 82 00 18 */	bne .L_803AB3B4
/* 803AB3A0 003A82E0  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803AB3A4 003A82E4  38 BF 01 30 */	addi r5, r31, 0x130
/* 803AB3A8 003A82E8  38 80 00 D1 */	li r4, 0xd1
/* 803AB3AC 003A82EC  4C C6 31 82 */	crclr 6
/* 803AB3B0 003A82F0  4B C7 F2 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB3B4:
/* 803AB3B4 003A82F4  80 1E 00 04 */	lwz r0, 4(r30)
/* 803AB3B8 003A82F8  28 00 00 00 */	cmplwi r0, 0
/* 803AB3BC 003A82FC  40 82 00 18 */	bne .L_803AB3D4
/* 803AB3C0 003A8300  38 7F 00 7C */	addi r3, r31, 0x7c
/* 803AB3C4 003A8304  38 BF 00 28 */	addi r5, r31, 0x28
/* 803AB3C8 003A8308  38 80 00 5A */	li r4, 0x5a
/* 803AB3CC 003A830C  4C C6 31 82 */	crclr 6
/* 803AB3D0 003A8310  4B C7 F2 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AB3D4:
/* 803AB3D4 003A8314  80 7E 00 04 */	lwz r3, 4(r30)
/* 803AB3D8 003A8318  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB3DC 003A831C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803AB3E0 003A8320  7D 89 03 A6 */	mtctr r12
/* 803AB3E4 003A8324  4E 80 04 21 */	bctrl 
.L_803AB3E8:
/* 803AB3E8 003A8328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB3EC 003A832C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB3F0 003A8330  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB3F4 003A8334  7C 08 03 A6 */	mtlr r0
/* 803AB3F8 003A8338  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB3FC 003A833C  4E 80 00 20 */	blr 
.endfn appearFanfare__Q34Game8BlackMan3ObjFv

.fn getName__Q23efx11ArgPrmColorFv, weak
/* 803AB400 003A8340  3C 60 80 49 */	lis r3, lbl_804957C4@ha
/* 803AB404 003A8344  38 63 57 C4 */	addi r3, r3, lbl_804957C4@l
/* 803AB408 003A8348  4E 80 00 20 */	blr 
.endfn getName__Q23efx11ArgPrmColorFv

.fn __dt__Q23efx10TKageFlickFv, weak
/* 803AB40C 003A834C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB410 003A8350  7C 08 02 A6 */	mflr r0
/* 803AB414 003A8354  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB418 003A8358  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB41C 003A835C  7C 9F 23 78 */	mr r31, r4
/* 803AB420 003A8360  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB424 003A8364  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AB428 003A8368  41 82 00 64 */	beq .L_803AB48C
/* 803AB42C 003A836C  3C 60 80 4E */	lis r3, __vt__Q23efx10TKageFlick@ha
/* 803AB430 003A8370  38 63 5D 2C */	addi r3, r3, __vt__Q23efx10TKageFlick@l
/* 803AB434 003A8374  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB438 003A8378  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB43C 003A837C  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB440 003A8380  41 82 00 3C */	beq .L_803AB47C
/* 803AB444 003A8384  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803AB448 003A8388  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803AB44C 003A838C  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB450 003A8390  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB454 003A8394  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB458 003A8398  41 82 00 24 */	beq .L_803AB47C
/* 803AB45C 003A839C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AB460 003A83A0  38 7E 00 04 */	addi r3, r30, 4
/* 803AB464 003A83A4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AB468 003A83A8  38 80 00 00 */	li r4, 0
/* 803AB46C 003A83AC  90 BE 00 00 */	stw r5, 0(r30)
/* 803AB470 003A83B0  38 05 00 14 */	addi r0, r5, 0x14
/* 803AB474 003A83B4  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB478 003A83B8  4B CE 48 25 */	bl __dt__18JPAEmitterCallBackFv
.L_803AB47C:
/* 803AB47C 003A83BC  7F E0 07 35 */	extsh. r0, r31
/* 803AB480 003A83C0  40 81 00 0C */	ble .L_803AB48C
/* 803AB484 003A83C4  7F C3 F3 78 */	mr r3, r30
/* 803AB488 003A83C8  4B C7 8C 2D */	bl __dl__FPv
.L_803AB48C:
/* 803AB48C 003A83CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB490 003A83D0  7F C3 F3 78 */	mr r3, r30
/* 803AB494 003A83D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB498 003A83D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB49C 003A83DC  7C 08 03 A6 */	mtlr r0
/* 803AB4A0 003A83E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB4A4 003A83E4  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TKageFlickFv

.fn __dt__Q23efx11TKageTyreupFv, weak
/* 803AB4A8 003A83E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB4AC 003A83EC  7C 08 02 A6 */	mflr r0
/* 803AB4B0 003A83F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB4B4 003A83F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB4B8 003A83F8  7C 9F 23 78 */	mr r31, r4
/* 803AB4BC 003A83FC  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB4C0 003A8400  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AB4C4 003A8404  41 82 00 64 */	beq .L_803AB528
/* 803AB4C8 003A8408  3C 60 80 4E */	lis r3, __vt__Q23efx11TKageTyreup@ha
/* 803AB4CC 003A840C  38 63 5D 78 */	addi r3, r3, __vt__Q23efx11TKageTyreup@l
/* 803AB4D0 003A8410  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB4D4 003A8414  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB4D8 003A8418  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB4DC 003A841C  41 82 00 3C */	beq .L_803AB518
/* 803AB4E0 003A8420  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 803AB4E4 003A8424  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 803AB4E8 003A8428  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB4EC 003A842C  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB4F0 003A8430  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB4F4 003A8434  41 82 00 24 */	beq .L_803AB518
/* 803AB4F8 003A8438  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AB4FC 003A843C  38 7E 00 04 */	addi r3, r30, 4
/* 803AB500 003A8440  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AB504 003A8444  38 80 00 00 */	li r4, 0
/* 803AB508 003A8448  90 BE 00 00 */	stw r5, 0(r30)
/* 803AB50C 003A844C  38 05 00 14 */	addi r0, r5, 0x14
/* 803AB510 003A8450  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB514 003A8454  4B CE 47 89 */	bl __dt__18JPAEmitterCallBackFv
.L_803AB518:
/* 803AB518 003A8458  7F E0 07 35 */	extsh. r0, r31
/* 803AB51C 003A845C  40 81 00 0C */	ble .L_803AB528
/* 803AB520 003A8460  7F C3 F3 78 */	mr r3, r30
/* 803AB524 003A8464  4B C7 8B 91 */	bl __dl__FPv
.L_803AB528:
/* 803AB528 003A8468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB52C 003A846C  7F C3 F3 78 */	mr r3, r30
/* 803AB530 003A8470  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB534 003A8474  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB538 003A8478  7C 08 03 A6 */	mtlr r0
/* 803AB53C 003A847C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB540 003A8480  4E 80 00 20 */	blr 
.endfn __dt__Q23efx11TKageTyreupFv

.fn __dt__Q23efx10TKageDead1Fv, weak
/* 803AB544 003A8484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB548 003A8488  7C 08 02 A6 */	mflr r0
/* 803AB54C 003A848C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB550 003A8490  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB554 003A8494  7C 9F 23 78 */	mr r31, r4
/* 803AB558 003A8498  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB55C 003A849C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AB560 003A84A0  41 82 00 64 */	beq .L_803AB5C4
/* 803AB564 003A84A4  3C 60 80 4E */	lis r3, __vt__Q23efx10TKageDead1@ha
/* 803AB568 003A84A8  38 63 5D C4 */	addi r3, r3, __vt__Q23efx10TKageDead1@l
/* 803AB56C 003A84AC  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB570 003A84B0  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB574 003A84B4  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB578 003A84B8  41 82 00 3C */	beq .L_803AB5B4
/* 803AB57C 003A84BC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 803AB580 003A84C0  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 803AB584 003A84C4  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB588 003A84C8  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB58C 003A84CC  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB590 003A84D0  41 82 00 24 */	beq .L_803AB5B4
/* 803AB594 003A84D4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AB598 003A84D8  38 7E 00 04 */	addi r3, r30, 4
/* 803AB59C 003A84DC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AB5A0 003A84E0  38 80 00 00 */	li r4, 0
/* 803AB5A4 003A84E4  90 BE 00 00 */	stw r5, 0(r30)
/* 803AB5A8 003A84E8  38 05 00 14 */	addi r0, r5, 0x14
/* 803AB5AC 003A84EC  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB5B0 003A84F0  4B CE 46 ED */	bl __dt__18JPAEmitterCallBackFv
.L_803AB5B4:
/* 803AB5B4 003A84F4  7F E0 07 35 */	extsh. r0, r31
/* 803AB5B8 003A84F8  40 81 00 0C */	ble .L_803AB5C4
/* 803AB5BC 003A84FC  7F C3 F3 78 */	mr r3, r30
/* 803AB5C0 003A8500  4B C7 8A F5 */	bl __dl__FPv
.L_803AB5C4:
/* 803AB5C4 003A8504  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB5C8 003A8508  7F C3 F3 78 */	mr r3, r30
/* 803AB5CC 003A850C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB5D0 003A8510  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB5D4 003A8514  7C 08 03 A6 */	mtlr r0
/* 803AB5D8 003A8518  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB5DC 003A851C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TKageDead1Fv

.fn __dt__Q23efx8TKageRunFv, weak
/* 803AB5E0 003A8520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB5E4 003A8524  7C 08 02 A6 */	mflr r0
/* 803AB5E8 003A8528  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB5EC 003A852C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB5F0 003A8530  7C 9F 23 78 */	mr r31, r4
/* 803AB5F4 003A8534  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB5F8 003A8538  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AB5FC 003A853C  41 82 00 64 */	beq .L_803AB660
/* 803AB600 003A8540  3C 60 80 4E */	lis r3, __vt__Q23efx8TKageRun@ha
/* 803AB604 003A8544  38 63 5E 10 */	addi r3, r3, __vt__Q23efx8TKageRun@l
/* 803AB608 003A8548  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB60C 003A854C  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB610 003A8550  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB614 003A8554  41 82 00 3C */	beq .L_803AB650
/* 803AB618 003A8558  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 803AB61C 003A855C  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 803AB620 003A8560  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB624 003A8564  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB628 003A8568  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB62C 003A856C  41 82 00 24 */	beq .L_803AB650
/* 803AB630 003A8570  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AB634 003A8574  38 7E 00 04 */	addi r3, r30, 4
/* 803AB638 003A8578  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AB63C 003A857C  38 80 00 00 */	li r4, 0
/* 803AB640 003A8580  90 BE 00 00 */	stw r5, 0(r30)
/* 803AB644 003A8584  38 05 00 14 */	addi r0, r5, 0x14
/* 803AB648 003A8588  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB64C 003A858C  4B CE 46 51 */	bl __dt__18JPAEmitterCallBackFv
.L_803AB650:
/* 803AB650 003A8590  7F E0 07 35 */	extsh. r0, r31
/* 803AB654 003A8594  40 81 00 0C */	ble .L_803AB660
/* 803AB658 003A8598  7F C3 F3 78 */	mr r3, r30
/* 803AB65C 003A859C  4B C7 8A 59 */	bl __dl__FPv
.L_803AB660:
/* 803AB660 003A85A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB664 003A85A4  7F C3 F3 78 */	mr r3, r30
/* 803AB668 003A85A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB66C 003A85AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB670 003A85B0  7C 08 03 A6 */	mtlr r0
/* 803AB674 003A85B4  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB678 003A85B8  4E 80 00 20 */	blr 
.endfn __dt__Q23efx8TKageRunFv

.fn __dt__Q23efx9TKageMoveFv, weak
/* 803AB67C 003A85BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB680 003A85C0  7C 08 02 A6 */	mflr r0
/* 803AB684 003A85C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB688 003A85C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AB68C 003A85CC  7C 9F 23 78 */	mr r31, r4
/* 803AB690 003A85D0  93 C1 00 08 */	stw r30, 8(r1)
/* 803AB694 003A85D4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AB698 003A85D8  41 82 00 64 */	beq .L_803AB6FC
/* 803AB69C 003A85DC  3C 60 80 4E */	lis r3, __vt__Q23efx9TKageMove@ha
/* 803AB6A0 003A85E0  38 63 5E 5C */	addi r3, r3, __vt__Q23efx9TKageMove@l
/* 803AB6A4 003A85E4  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB6A8 003A85E8  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB6AC 003A85EC  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB6B0 003A85F0  41 82 00 3C */	beq .L_803AB6EC
/* 803AB6B4 003A85F4  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 803AB6B8 003A85F8  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 803AB6BC 003A85FC  90 7E 00 00 */	stw r3, 0(r30)
/* 803AB6C0 003A8600  38 03 00 14 */	addi r0, r3, 0x14
/* 803AB6C4 003A8604  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB6C8 003A8608  41 82 00 24 */	beq .L_803AB6EC
/* 803AB6CC 003A860C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AB6D0 003A8610  38 7E 00 04 */	addi r3, r30, 4
/* 803AB6D4 003A8614  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AB6D8 003A8618  38 80 00 00 */	li r4, 0
/* 803AB6DC 003A861C  90 BE 00 00 */	stw r5, 0(r30)
/* 803AB6E0 003A8620  38 05 00 14 */	addi r0, r5, 0x14
/* 803AB6E4 003A8624  90 1E 00 04 */	stw r0, 4(r30)
/* 803AB6E8 003A8628  4B CE 45 B5 */	bl __dt__18JPAEmitterCallBackFv
.L_803AB6EC:
/* 803AB6EC 003A862C  7F E0 07 35 */	extsh. r0, r31
/* 803AB6F0 003A8630  40 81 00 0C */	ble .L_803AB6FC
/* 803AB6F4 003A8634  7F C3 F3 78 */	mr r3, r30
/* 803AB6F8 003A8638  4B C7 89 BD */	bl __dl__FPv
.L_803AB6FC:
/* 803AB6FC 003A863C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB700 003A8640  7F C3 F3 78 */	mr r3, r30
/* 803AB704 003A8644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AB708 003A8648  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AB70C 003A864C  7C 08 03 A6 */	mtlr r0
/* 803AB710 003A8650  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB714 003A8654  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9TKageMoveFv

.fn setInitialSetting__Q34Game8BlackMan3ObjFPQ24Game21EnemyInitialParamBase, weak
/* 803AB718 003A8658  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game8BlackMan3ObjFPQ24Game21EnemyInitialParamBase

.fn throwupItemInDeathProcedure__Q34Game8BlackMan3ObjFv, weak
/* 803AB71C 003A865C  4E 80 00 20 */	blr 
.endfn throwupItemInDeathProcedure__Q34Game8BlackMan3ObjFv

.fn createEfxHamon__Q34Game8BlackMan3ObjFv, weak
/* 803AB720 003A8660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB724 003A8664  7C 08 02 A6 */	mflr r0
/* 803AB728 003A8668  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB72C 003A866C  80 03 03 64 */	lwz r0, 0x364(r3)
/* 803AB730 003A8670  28 00 00 00 */	cmplwi r0, 0
/* 803AB734 003A8674  40 82 00 08 */	bne .L_803AB73C
/* 803AB738 003A8678  4B D5 61 CD */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_803AB73C:
/* 803AB73C 003A867C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB740 003A8680  7C 08 03 A6 */	mtlr r0
/* 803AB744 003A8684  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB748 003A8688  4E 80 00 20 */	blr 
.endfn createEfxHamon__Q34Game8BlackMan3ObjFv

.fn updateEfxHamon__Q34Game8BlackMan3ObjFv, weak
/* 803AB74C 003A868C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AB750 003A8690  7C 08 02 A6 */	mflr r0
/* 803AB754 003A8694  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AB758 003A8698  80 03 03 64 */	lwz r0, 0x364(r3)
/* 803AB75C 003A869C  28 00 00 00 */	cmplwi r0, 0
/* 803AB760 003A86A0  41 82 00 18 */	beq .L_803AB778
/* 803AB764 003A86A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803AB768 003A86A8  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 803AB76C 003A86AC  7D 89 03 A6 */	mtctr r12
/* 803AB770 003A86B0  4E 80 04 21 */	bctrl 
/* 803AB774 003A86B4  48 00 00 08 */	b .L_803AB77C
.L_803AB778:
/* 803AB778 003A86B8  4B D5 61 5D */	bl updateEfxHamon__Q24Game9EnemyBaseFv
.L_803AB77C:
/* 803AB77C 003A86BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AB780 003A86C0  7C 08 03 A6 */	mtlr r0
/* 803AB784 003A86C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803AB788 003A86C8  4E 80 00 20 */	blr 
.endfn updateEfxHamon__Q34Game8BlackMan3ObjFv

.fn "bombCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreatureR10Vector3<f>f", weak
/* 803AB78C 003A86CC  38 60 00 00 */	li r3, 0
/* 803AB790 003A86D0  4E 80 00 20 */	blr 
.endfn "bombCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreatureR10Vector3<f>f"

.fn getEnemyTypeID__Q34Game8BlackMan3ObjFv, weak
/* 803AB794 003A86D4  38 60 00 63 */	li r3, 0x63
/* 803AB798 003A86D8  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game8BlackMan3ObjFv

.fn __sinit_blackMan_cpp, local
/* 803AB79C 003A86DC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803AB7A0 003A86E0  38 00 FF FF */	li r0, -1
/* 803AB7A4 003A86E4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803AB7A8 003A86E8  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 803AB7AC 003A86EC  90 0D 99 D8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803AB7B0 003A86F0  D4 03 5D 00 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 803AB7B4 003A86F4  D0 0D 99 DC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803AB7B8 003A86F8  D0 03 00 04 */	stfs f0, 4(r3)
/* 803AB7BC 003A86FC  D0 03 00 08 */	stfs f0, 8(r3)
/* 803AB7C0 003A8700  4E 80 00 20 */	blr 
.endfn __sinit_blackMan_cpp

.fn "@940@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 803AB7C4 003A8704  39 60 00 0C */	li r11, 0xc
/* 803AB7C8 003A8708  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AB7CC 003A870C  7C 63 5A 14 */	add r3, r3, r11
/* 803AB7D0 003A8710  38 63 FC 54 */	addi r3, r3, -940
/* 803AB7D4 003A8714  4B D5 B1 48 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@940@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@940@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 803AB7D8 003A8718  39 60 00 0C */	li r11, 0xc
/* 803AB7DC 003A871C  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AB7E0 003A8720  7C 63 5A 14 */	add r3, r3, r11
/* 803AB7E4 003A8724  38 63 FC 54 */	addi r3, r3, -940
/* 803AB7E8 003A8728  4B D5 AE C0 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@940@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@940@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 803AB7EC 003A872C  39 60 00 0C */	li r11, 0xc
/* 803AB7F0 003A8730  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AB7F4 003A8734  7C 63 5A 14 */	add r3, r3, r11
/* 803AB7F8 003A8738  38 63 FC 54 */	addi r3, r3, -940
/* 803AB7FC 003A873C  4B D5 AE CC */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@940@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@940@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 803AB800 003A8740  39 60 00 0C */	li r11, 0xc
/* 803AB804 003A8744  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AB808 003A8748  7C 63 5A 14 */	add r3, r3, r11
/* 803AB80C 003A874C  38 63 FC 54 */	addi r3, r3, -940
/* 803AB810 003A8750  4B D5 B2 68 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@940@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@940@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 803AB814 003A8754  39 60 00 0C */	li r11, 0xc
/* 803AB818 003A8758  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AB81C 003A875C  7C 63 5A 14 */	add r3, r3, r11
/* 803AB820 003A8760  38 63 FC 54 */	addi r3, r3, -940
/* 803AB824 003A8764  4B D5 B2 28 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@940@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@940@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 803AB828 003A8768  39 60 00 0C */	li r11, 0xc
/* 803AB82C 003A876C  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AB830 003A8770  7C 63 5A 14 */	add r3, r3, r11
/* 803AB834 003A8774  38 63 FC 54 */	addi r3, r3, -940
/* 803AB838 003A8778  4B D5 AE 68 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@940@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx9TKageMoveFv", weak
/* 803AB83C 003A877C  38 63 FF FC */	addi r3, r3, -4
/* 803AB840 003A8780  4B FF FE 3C */	b __dt__Q23efx9TKageMoveFv
.endfn "@4@__dt__Q23efx9TKageMoveFv"

.fn "@4@__dt__Q23efx8TKageRunFv", weak
/* 803AB844 003A8784  38 63 FF FC */	addi r3, r3, -4
/* 803AB848 003A8788  4B FF FD 98 */	b __dt__Q23efx8TKageRunFv
.endfn "@4@__dt__Q23efx8TKageRunFv"

.fn "@4@__dt__Q23efx10TKageDead1Fv", weak
/* 803AB84C 003A878C  38 63 FF FC */	addi r3, r3, -4
/* 803AB850 003A8790  4B FF FC F4 */	b __dt__Q23efx10TKageDead1Fv
.endfn "@4@__dt__Q23efx10TKageDead1Fv"

.fn "@4@__dt__Q23efx11TKageTyreupFv", weak
/* 803AB854 003A8794  38 63 FF FC */	addi r3, r3, -4
/* 803AB858 003A8798  4B FF FC 50 */	b __dt__Q23efx11TKageTyreupFv
.endfn "@4@__dt__Q23efx11TKageTyreupFv"

.fn "@4@__dt__Q23efx10TKageFlickFv", weak
/* 803AB85C 003A879C  38 63 FF FC */	addi r3, r3, -4
/* 803AB860 003A87A0  4B FF FB AC */	b __dt__Q23efx10TKageFlickFv
.endfn "@4@__dt__Q23efx10TKageFlickFv"
