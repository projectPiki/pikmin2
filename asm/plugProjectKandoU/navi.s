.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_navi_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C788, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047C788
.balign 4
.obj lbl_8047C794, local
	.asciz "navi.cpp"
.endobj lbl_8047C794
.balign 4
.obj lbl_8047C7A0, local # Shift-JIS
	.4byte 0x83558393
	.4byte 0x815B815B
	.4byte 0x81698145
	.4byte 0x84748145
	.4byte 0x816A817C
	.4byte 0x817C836C
	.4byte 0x83930A00
.endobj lbl_8047C7A0
.balign 4
.obj lbl_8047C7BC, local
	.asciz "happajnt3"
.endobj lbl_8047C7BC
.balign 4
.obj lbl_8047C7C8, local
	.asciz "no target!! HOLEIN\n"
.endobj lbl_8047C7C8
.balign 4
.obj lbl_8047C7DC, local
	.asciz "no target!! FOUNTAINON\n"
.endobj lbl_8047C7DC
.balign 4
.obj lbl_8047C7F4, local
	.asciz "P2Assert"
.endobj lbl_8047C7F4
.balign 4
.obj lbl_8047C800, local
	.asciz "timeout %d,%d:%d\n%d,%d-%d,%d\n"
.endobj lbl_8047C800
.balign 4
.obj lbl_8047C820, local
	.asciz "infloop %d,%d:%d\n%d,%d-%d,%d\n"
.endobj lbl_8047C820
.balign 4
.obj lbl_8047C840, local
	.asciz "ActFreeArg"
.endobj lbl_8047C840
.balign 4
.obj lbl_8047C84C, local
	.asciz "CreatureActionArg"
.endobj lbl_8047C84C
.balign 4
.obj lbl_8047C860, local
	.asciz "ActionArg"
.endobj lbl_8047C860
.balign 4
.obj lbl_8047C86C, local
	.asciz "NaviDamageArg"
.endobj lbl_8047C86C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.balign 4
.obj lbl_804B04EC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte applyDopeSmoke__Q24Game4NaviFPQ24Game10CellObject
.endobj lbl_804B04EC
.obj lbl_804B04F8, local
	.4byte .L_801425F8
	.4byte .L_8014280C
	.4byte .L_80142618
	.4byte .L_80142678
	.4byte .L_801426D8
	.4byte .L_801426F8
	.4byte .L_8014279C
	.4byte .L_801426E8
.endobj lbl_804B04F8
.obj __vt__Q26PikiAI10ActFreeArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q26PikiAI10ActFreeArgFv
.endobj __vt__Q26PikiAI10ActFreeArg
.obj __vt__Q26PikiAI17CreatureActionArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q26PikiAI17CreatureActionArgFv
.endobj __vt__Q26PikiAI17CreatureActionArg
.obj __vt__Q26PikiAI9ActionArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q26PikiAI9ActionArgFv
.endobj __vt__Q26PikiAI9ActionArg
.obj __vt__Q24Game13NaviDamageArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game13NaviDamageArgFv
.endobj __vt__Q24Game13NaviDamageArg
.obj "__vt__23Iterator<Q24Game5Onyon>", weak
	.4byte 0
	.4byte 0
	.4byte "first__23Iterator<Q24Game5Onyon>Fv"
	.4byte "next__23Iterator<Q24Game5Onyon>Fv"
	.4byte "isDone__23Iterator<Q24Game5Onyon>Fv"
	.4byte "__ml__23Iterator<Q24Game5Onyon>Fv"
.endobj "__vt__23Iterator<Q24Game5Onyon>"
.obj "__vt__26Iterator<Q24Game8BaseItem>", weak
	.4byte 0
	.4byte 0
	.4byte "first__26Iterator<Q24Game8BaseItem>Fv"
	.4byte "next__26Iterator<Q24Game8BaseItem>Fv"
	.4byte "isDone__26Iterator<Q24Game8BaseItem>Fv"
	.4byte "__ml__26Iterator<Q24Game8BaseItem>Fv"
.endobj "__vt__26Iterator<Q24Game8BaseItem>"
.obj "__vt__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>FPQ24Game10CellObject"
.endobj "__vt__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>"
.obj "__vt__32IDelegate1<PQ24Game10CellObject>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__32IDelegate1<PQ24Game10CellObject>"
.obj __vt__Q24Game11GameMessage, weak
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game11GameMessageFPQ24Game13VsGameSection
.endobj __vt__Q24Game11GameMessage
.obj "__vt__36Iterator<Q34Game12ItemPikihead4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "first__36Iterator<Q34Game12ItemPikihead4Item>Fv"
	.4byte "next__36Iterator<Q34Game12ItemPikihead4Item>Fv"
	.4byte "isDone__36Iterator<Q34Game12ItemPikihead4Item>Fv"
	.4byte "__ml__36Iterator<Q34Game12ItemPikihead4Item>Fv"
.endobj "__vt__36Iterator<Q34Game12ItemPikihead4Item>"
.obj __vt__Q24Game4Navi, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game4NaviFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game8CreatureFv
	.4byte onInit__Q24Game4NaviFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game4NaviFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game4NaviFv
	.4byte doEntry__Q24Game4NaviFv
	.4byte doSetView__Q24Game4NaviFi
	.4byte doViewCalc__Q24Game4NaviFv
	.4byte doSimulation__Q24Game4NaviFf
	.4byte doDirectDraw__Q24Game4NaviFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8FakePikiFv
	.4byte "setVelocity__Q24Game4NaviFR10Vector3<f>"
	.4byte getVelocity__Q24Game8FakePikiFv
	.4byte "onSetPosition__Q24Game4NaviFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8FakePikiFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game4NaviFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game4NaviFv
	.4byte inWater__Q24Game8FakePikiFv
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
	.4byte isFlying__Q24Game8CreatureFv
	.4byte isUnderground__Q24Game8CreatureFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game4NaviFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game4NaviFRQ24Game9CollEvent
	.4byte platCallback__Q24Game4NaviFRQ24Game9PlatEvent
	.4byte getJAIObject__Q24Game4NaviFv
	.4byte getPSCreature__Q24Game4NaviFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8FakePikiFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game4NaviFb
	.4byte on_movie_end__Q24Game4NaviFb
	.4byte movieStartAnimation__Q24Game4NaviFUl
	.4byte movieStartDemoAnimation__Q24Game4NaviFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
	.4byte "movieSetTranslation__Q24Game4NaviFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game4NaviFf
	.4byte "movieGotoPosition__Q24Game4NaviFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game4NaviFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game4NaviFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game4NaviFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game4NaviFPQ24Game8Creature
	.4byte onStickEnd__Q24Game4NaviFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8FakePikiFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game4NaviFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game4NaviFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game4NaviFv
	.4byte getCreatureID__Q24Game4NaviFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent"
	.4byte getDownfloorMass__Q24Game4NaviFv
	.4byte isPikmin__Q24Game8FakePikiFv
	.4byte doColorChange__Q24Game8FakePikiFv
	.4byte doDebugDL__Q24Game8FakePikiFv
	.4byte update__Q24Game4NaviFv
	.4byte move__Q24Game8FakePikiFf
	.4byte useMoveRotation__Q24Game8FakePikiFv
	.4byte setMoveRotation__Q24Game8FakePikiFb
	.4byte useUpdateTrMatrix__Q24Game8FakePikiFv
	.4byte setUpdateTrMatrix__Q24Game8FakePikiFb
	.4byte useMoveVelocity__Q24Game8FakePikiFv
	.4byte setMoveVelocity__Q24Game8FakePikiFb
	.4byte useMapCollision__Q24Game8FakePikiFv
	.4byte setMapCollision__Q24Game8FakePikiFb
	.4byte isZikatu__Q24Game8FakePikiFv
	.4byte setZikatu__Q24Game8FakePikiFb
	.4byte wasZikatu__Q24Game8FakePikiFv
	.4byte getMapCollisionRadius__Q24Game4NaviFv
	.4byte "wallCallback__Q24Game4NaviFR10Vector3<f>"
	.4byte startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
	.4byte onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent
	.4byte updateLookCreature__Q24Game8FakePikiFv
	.4byte do_updateLookCreature__Q24Game4NaviFv
	.4byte onSetPosition__Q24Game8FakePikiFv
	.4byte isWalking__Q24Game4NaviFv
	.4byte "viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"
	.4byte viewGetShape__Q24Game4NaviFv
	.4byte viewGetBaseScale__Q24Game4NaviFv
	.4byte transit__Q24Game4NaviFiPQ24Game8StateArg
	.4byte 0
	.4byte 0
	.4byte "@784@12@viewGetBaseScale__Q24Game4NaviFv"
	.4byte "@784@12@viewGetShape__Q24Game4NaviFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte view_start_carrymotion__Q24Game10PelletViewFv
	.4byte view_finish_carrymotion__Q24Game10PelletViewFv
	.4byte viewStartPreCarryMotion__Q24Game10PelletViewFv
	.4byte viewStartCarryMotion__Q24Game10PelletViewFv
	.4byte viewOnPelletKilled__Q24Game10PelletViewFv
	.4byte "@784@12@viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"
.endobj __vt__Q24Game4Navi
.obj __vt__Q23efx15ContextChasePos, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23efx15ContextChasePosFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q23efx15ContextChasePos
.obj "__vt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
.endobj "__vt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>"
.obj __vt__Q23efx10TChaseMtx2, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx10TChaseMtx2
.obj "__vt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.endobj "__vt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>"
.obj __vt__Q23efx11TChaseMtxT2, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.endobj __vt__Q23efx11TChaseMtxT2
.obj __vt__Q23efx12TOrimadamage, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.endobj __vt__Q23efx12TOrimadamage
.obj __vt__Q23efx7Context, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23efx7ContextFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q23efx7Context
.obj __vt__Q23efx12TFueactBiri2, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TFueactBiri2Fv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TFueactBiri2Fv
.endobj __vt__Q23efx12TFueactBiri2
.obj __vt__Q23efx12TFueactBiri1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TFueactBiri1Fv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TFueactBiri1Fv
.endobj __vt__Q23efx12TFueactBiri1
.obj __vt__Q23efx7TFueact, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx7TFueactFPQ23efx3Arg
	.4byte forceKill__Q23efx7TFueactFv
	.4byte fade__Q23efx7TFueactFv
.endobj __vt__Q23efx7TFueact
.obj "__vt__Q24Game26StateMachine<Q24Game4Navi>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
.endobj "__vt__Q24Game26StateMachine<Q24Game4Navi>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 4
.endobj gfNAN___Q24Game5P2JST
.obj numSearch, local
	.skip 4
.endobj numSearch

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518348, local
	.float 0.5
.endobj lbl_80518348
.obj lbl_8051834C, local
	.float 10.0
.endobj lbl_8051834C
.obj lbl_80518350, local
	.float 4.0
.endobj lbl_80518350
.obj lbl_80518354, local
	.float 0.0
.endobj lbl_80518354
.obj lbl_80518358, local
	.float 1.0
.endobj lbl_80518358
.obj lbl_8051835C, local
	.float 24.0
.endobj lbl_8051835C
.balign 4
.obj lbl_80518360, local
	.asciz "headjnt"
.endobj lbl_80518360
.balign 4
.obj lbl_80518368, local
	.float 1.3
.endobj lbl_80518368
.obj lbl_8051836C, local
	.float 1.5
.endobj lbl_8051836C
.obj lbl_80518370, local
	.float 25.0
.endobj lbl_80518370
.obj lbl_80518374, local
	.float 3.0003002
.endobj lbl_80518374
.obj lbl_80518378, local
	.float 15.0
.endobj lbl_80518378
.obj lbl_8051837C, local
	.float 140.0
.endobj lbl_8051837C
.obj lbl_80518380, local
	.float 50.0
.endobj lbl_80518380
.obj lbl_80518384, local
	.float -1.0
.endobj lbl_80518384
.obj lbl_80518388, local
	.float 200.0
.endobj lbl_80518388
.obj lbl_8051838C, local
	.float 150.0
.endobj lbl_8051838C
.obj lbl_80518390, local
	.float 0.02
.endobj lbl_80518390
.obj lbl_80518394, local
	.float 0.015
.endobj lbl_80518394
.obj lbl_80518398, local
	.float 30.0
.endobj lbl_80518398
.obj lbl_8051839C, local
	.float 5.0
.endobj lbl_8051839C
.obj lbl_805183A0, local
	.float 400.0
.endobj lbl_805183A0
.obj lbl_805183A4, local
	.float -170.0
.endobj lbl_805183A4
.obj lbl_805183A8, local
	.float 40.0
.endobj lbl_805183A8
.obj lbl_805183AC, local
	.float -190.0
.endobj lbl_805183AC
.obj lbl_805183B0, local
	.float 3600.0
.endobj lbl_805183B0
.obj lbl_805183B4, local
	.float 6400.0
.endobj lbl_805183B4
.obj lbl_805183B8, local
	.float 8.5
.endobj lbl_805183B8
.obj lbl_805183BC, local
	.float 0.2
.endobj lbl_805183BC
.obj lbl_805183C0, local # pi
	.float 3.1415927
.endobj lbl_805183C0
.obj lbl_805183C4, local
	.float 0.0055555557
.endobj lbl_805183C4
.obj lbl_805183C8, local
	.float 0.7853982
.endobj lbl_805183C8
.balign 8
.obj lbl_805183D0, local
	.8byte 0x4330000080000000
.endobj lbl_805183D0
.obj lbl_805183D8, local
	.float 20.0
.endobj lbl_805183D8
.obj lbl_805183DC, local
	.float 6.25
.endobj lbl_805183DC
.obj lbl_805183E0, local
	.float 0.05
.endobj lbl_805183E0
.obj lbl_805183E4, local
	.float 0.4
.endobj lbl_805183E4
.obj lbl_805183E8, local
	.float 2.0943952
.endobj lbl_805183E8
.obj lbl_805183EC, local
	.float 0.95
.endobj lbl_805183EC
.obj lbl_805183F0, local
	.float 0.6
.endobj lbl_805183F0
.obj lbl_805183F4, local
	.float 0.9
.endobj lbl_805183F4
.obj lbl_805183F8, local
	.float 3.0
.endobj lbl_805183F8
.obj lbl_805183FC, local
	.float 12800.0
.endobj lbl_805183FC
.obj lbl_80518400, local
	.float -15.0
.endobj lbl_80518400
.obj lbl_80518404, local
	.float 2.0
.endobj lbl_80518404
.balign 4
.obj lbl_80518408, local
	.asciz "orima"
.endobj lbl_80518408

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn getShadowParam__Q24Game4NaviFRQ24Game11ShadowParam, global
/* 8013F6D4 0013C614  C0 03 02 0C */	lfs f0, 0x20c(r3)
/* 8013F6D8 0013C618  C0 82 9F E8 */	lfs f4, lbl_80518348@sda21(r2)
/* 8013F6DC 0013C61C  D0 04 00 00 */	stfs f0, 0(r4)
/* 8013F6E0 0013C620  C0 62 9F EC */	lfs f3, lbl_8051834C@sda21(r2)
/* 8013F6E4 0013C624  C0 03 02 10 */	lfs f0, 0x210(r3)
/* 8013F6E8 0013C628  C0 42 9F F0 */	lfs f2, lbl_80518350@sda21(r2)
/* 8013F6EC 0013C62C  D0 04 00 04 */	stfs f0, 4(r4)
/* 8013F6F0 0013C630  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 8013F6F4 0013C634  C0 A3 02 14 */	lfs f5, 0x214(r3)
/* 8013F6F8 0013C638  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 8013F6FC 0013C63C  D0 A4 00 08 */	stfs f5, 8(r4)
/* 8013F700 0013C640  C0 A4 00 04 */	lfs f5, 4(r4)
/* 8013F704 0013C644  EC 85 20 2A */	fadds f4, f5, f4
/* 8013F708 0013C648  D0 84 00 04 */	stfs f4, 4(r4)
/* 8013F70C 0013C64C  D0 64 00 18 */	stfs f3, 0x18(r4)
/* 8013F710 0013C650  D0 44 00 1C */	stfs f2, 0x1c(r4)
/* 8013F714 0013C654  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8013F718 0013C658  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8013F71C 0013C65C  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 8013F720 0013C660  4E 80 00 20 */	blr 
.endfn getShadowParam__Q24Game4NaviFRQ24Game11ShadowParam

.fn getLODSphere__Q24Game4NaviFRQ23Sys6Sphere, global
/* 8013F724 0013C664  C0 02 9F FC */	lfs f0, lbl_8051835C@sda21(r2)
/* 8013F728 0013C668  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8013F72C 0013C66C  C0 03 02 18 */	lfs f0, 0x218(r3)
/* 8013F730 0013C670  D0 04 00 00 */	stfs f0, 0(r4)
/* 8013F734 0013C674  C0 03 02 1C */	lfs f0, 0x21c(r3)
/* 8013F738 0013C678  D0 04 00 04 */	stfs f0, 4(r4)
/* 8013F73C 0013C67C  C0 03 02 20 */	lfs f0, 0x220(r3)
/* 8013F740 0013C680  D0 04 00 08 */	stfs f0, 8(r4)
/* 8013F744 0013C684  4E 80 00 20 */	blr 
.endfn getLODSphere__Q24Game4NaviFRQ23Sys6Sphere

.fn __ct__Q24Game4NaviFv, global
/* 8013F748 0013C688  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013F74C 0013C68C  7C 08 02 A6 */	mflr r0
/* 8013F750 0013C690  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013F754 0013C694  7C 80 07 35 */	extsh. r0, r4
/* 8013F758 0013C698  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013F75C 0013C69C  7C 7F 1B 78 */	mr r31, r3
/* 8013F760 0013C6A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8013F764 0013C6A4  41 82 00 24 */	beq .L_8013F788
/* 8013F768 0013C6A8  38 1F 03 10 */	addi r0, r31, 0x310
/* 8013F76C 0013C6AC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8013F770 0013C6B0  90 1F 02 50 */	stw r0, 0x250(r31)
/* 8013F774 0013C6B4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8013F778 0013C6B8  38 00 00 00 */	li r0, 0
/* 8013F77C 0013C6BC  90 7F 03 10 */	stw r3, 0x310(r31)
/* 8013F780 0013C6C0  90 1F 03 14 */	stw r0, 0x314(r31)
/* 8013F784 0013C6C4  90 1F 03 18 */	stw r0, 0x318(r31)
.L_8013F788:
/* 8013F788 0013C6C8  7F E3 FB 78 */	mr r3, r31
/* 8013F78C 0013C6CC  4B FF D4 DD */	bl __ct__Q24Game8FakePikiFv
/* 8013F790 0013C6D0  3C 60 80 4B */	lis r3, __vt__Q24Game4Navi@ha
/* 8013F794 0013C6D4  38 BF 03 10 */	addi r5, r31, 0x310
/* 8013F798 0013C6D8  38 C3 05 BC */	addi r6, r3, __vt__Q24Game4Navi@l
/* 8013F79C 0013C6DC  38 80 00 00 */	li r4, 0
/* 8013F7A0 0013C6E0  90 DF 00 00 */	stw r6, 0(r31)
/* 8013F7A4 0013C6E4  38 66 01 B0 */	addi r3, r6, 0x1b0
/* 8013F7A8 0013C6E8  38 E6 02 30 */	addi r7, r6, 0x230
/* 8013F7AC 0013C6EC  38 00 00 01 */	li r0, 1
/* 8013F7B0 0013C6F0  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8013F7B4 0013C6F4  38 60 03 C8 */	li r3, 0x3c8
/* 8013F7B8 0013C6F8  80 DF 02 50 */	lwz r6, 0x250(r31)
/* 8013F7BC 0013C6FC  90 E6 00 00 */	stw r7, 0(r6)
/* 8013F7C0 0013C700  80 DF 02 50 */	lwz r6, 0x250(r31)
/* 8013F7C4 0013C704  7C A6 28 50 */	subf r5, r6, r5
/* 8013F7C8 0013C708  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8013F7CC 0013C70C  98 9F 02 88 */	stb r4, 0x288(r31)
/* 8013F7D0 0013C710  98 9F 02 89 */	stb r4, 0x289(r31)
/* 8013F7D4 0013C714  90 9F 02 78 */	stw r4, 0x278(r31)
/* 8013F7D8 0013C718  90 9F 02 7C */	stw r4, 0x27c(r31)
/* 8013F7DC 0013C71C  90 9F 02 80 */	stw r4, 0x280(r31)
/* 8013F7E0 0013C720  90 9F 02 84 */	stw r4, 0x284(r31)
/* 8013F7E4 0013C724  90 9F 02 8C */	stw r4, 0x28c(r31)
/* 8013F7E8 0013C728  B0 1F 01 28 */	sth r0, 0x128(r31)
/* 8013F7EC 0013C72C  4B EE 46 B9 */	bl __nw__FUl
/* 8013F7F0 0013C730  7C 60 1B 79 */	or. r0, r3, r3
/* 8013F7F4 0013C734  41 82 00 0C */	beq .L_8013F800
/* 8013F7F8 0013C738  48 00 01 59 */	bl __ct__Q23efx11TNaviEffectFv
/* 8013F7FC 0013C73C  7C 60 1B 78 */	mr r0, r3
.L_8013F800:
/* 8013F800 0013C740  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 8013F804 0013C744  38 80 00 00 */	li r4, 0
/* 8013F808 0013C748  38 A0 00 00 */	li r5, 0
/* 8013F80C 0013C74C  38 C0 00 00 */	li r6, 0
/* 8013F810 0013C750  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 8013F814 0013C754  38 E0 00 00 */	li r7, 0
/* 8013F818 0013C758  48 27 85 D5 */	bl "init__Q23efx11TNaviEffectFP10Vector3<f>PA4_fP10Vector3<f>Q33efx11TNaviEffect12enumNaviType"
/* 8013F81C 0013C75C  80 9F 02 D0 */	lwz r4, 0x2d0(r31)
/* 8013F820 0013C760  38 1F 02 0C */	addi r0, r31, 0x20c
/* 8013F824 0013C764  38 60 00 20 */	li r3, 0x20
/* 8013F828 0013C768  90 04 00 08 */	stw r0, 8(r4)
/* 8013F82C 0013C76C  4B EE 46 79 */	bl __nw__FUl
/* 8013F830 0013C770  28 03 00 00 */	cmplwi r3, 0
/* 8013F834 0013C774  41 82 00 24 */	beq .L_8013F858
/* 8013F838 0013C778  3C A0 80 4B */	lis r5, "__vt__Q24Game26StateMachine<Q24Game4Navi>"@ha
/* 8013F83C 0013C77C  3C 80 80 4B */	lis r4, __vt__Q24Game7NaviFSM@ha
/* 8013F840 0013C780  38 05 09 74 */	addi r0, r5, "__vt__Q24Game26StateMachine<Q24Game4Navi>"@l
/* 8013F844 0013C784  38 A0 FF FF */	li r5, -1
/* 8013F848 0013C788  90 03 00 00 */	stw r0, 0(r3)
/* 8013F84C 0013C78C  38 04 37 6C */	addi r0, r4, __vt__Q24Game7NaviFSM@l
/* 8013F850 0013C790  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8013F854 0013C794  90 03 00 00 */	stw r0, 0(r3)
.L_8013F858:
/* 8013F858 0013C798  90 7F 02 70 */	stw r3, 0x270(r31)
/* 8013F85C 0013C79C  7F E4 FB 78 */	mr r4, r31
/* 8013F860 0013C7A0  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 8013F864 0013C7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8013F868 0013C7A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013F86C 0013C7AC  7D 89 03 A6 */	mtctr r12
/* 8013F870 0013C7B0  4E 80 04 21 */	bctrl 
/* 8013F874 0013C7B4  38 60 01 14 */	li r3, 0x114
/* 8013F878 0013C7B8  4B EE 46 2D */	bl __nw__FUl
/* 8013F87C 0013C7BC  7C 60 1B 79 */	or. r0, r3, r3
/* 8013F880 0013C7C0  41 82 00 10 */	beq .L_8013F890
/* 8013F884 0013C7C4  38 80 00 64 */	li r4, 0x64
/* 8013F888 0013C7C8  48 05 57 D9 */	bl __ct__Q24Game6CPlateFi
/* 8013F88C 0013C7CC  7C 60 1B 78 */	mr r0, r3
.L_8013F890:
/* 8013F890 0013C7D0  90 1F 02 54 */	stw r0, 0x254(r31)
/* 8013F894 0013C7D4  38 60 00 20 */	li r3, 0x20
/* 8013F898 0013C7D8  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 8013F89C 0013C7DC  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 8013F8A0 0013C7E0  4B EE 46 05 */	bl __nw__FUl
/* 8013F8A4 0013C7E4  7C 60 1B 79 */	or. r0, r3, r3
/* 8013F8A8 0013C7E8  41 82 00 0C */	beq .L_8013F8B4
/* 8013F8AC 0013C7EC  48 07 4F 05 */	bl __ct__Q24Game9FootmarksFv
/* 8013F8B0 0013C7F0  7C 60 1B 78 */	mr r0, r3
.L_8013F8B4:
/* 8013F8B4 0013C7F4  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 8013F8B8 0013C7F8  38 80 00 10 */	li r4, 0x10
/* 8013F8BC 0013C7FC  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8013F8C0 0013C800  48 07 4F 0D */	bl alloc__Q24Game9FootmarksFi
/* 8013F8C4 0013C804  38 00 00 01 */	li r0, 1
/* 8013F8C8 0013C808  38 60 00 10 */	li r3, 0x10
/* 8013F8CC 0013C80C  98 1F 01 35 */	stb r0, 0x135(r31)
/* 8013F8D0 0013C810  4B EE 45 D5 */	bl __nw__FUl
/* 8013F8D4 0013C814  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013F8D8 0013C818  41 82 00 14 */	beq .L_8013F8EC
/* 8013F8DC 0013C81C  48 2F 4A 79 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 8013F8E0 0013C820  3C 60 80 4F */	lis r3, __vt__Q23Sys17MatRepeatAnimator@ha
/* 8013F8E4 0013C824  38 03 C4 78 */	addi r0, r3, __vt__Q23Sys17MatRepeatAnimator@l
/* 8013F8E8 0013C828  90 1E 00 00 */	stw r0, 0(r30)
.L_8013F8EC:
/* 8013F8EC 0013C82C  93 DF 02 98 */	stw r30, 0x298(r31)
/* 8013F8F0 0013C830  38 60 00 0C */	li r3, 0xc
/* 8013F8F4 0013C834  4B EE 45 B1 */	bl __nw__FUl
/* 8013F8F8 0013C838  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013F8FC 0013C83C  41 82 00 14 */	beq .L_8013F910
/* 8013F900 0013C840  48 2F 4A 55 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 8013F904 0013C844  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 8013F908 0013C848  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 8013F90C 0013C84C  90 1E 00 00 */	stw r0, 0(r30)
.L_8013F910:
/* 8013F910 0013C850  93 DF 02 9C */	stw r30, 0x29c(r31)
/* 8013F914 0013C854  38 60 00 94 */	li r3, 0x94
/* 8013F918 0013C858  4B EE 45 8D */	bl __nw__FUl
/* 8013F91C 0013C85C  7C 60 1B 79 */	or. r0, r3, r3
/* 8013F920 0013C860  41 82 00 10 */	beq .L_8013F930
/* 8013F924 0013C864  7F E4 FB 78 */	mr r4, r31
/* 8013F928 0013C868  48 32 31 99 */	bl __ct__Q23PSM4NaviFPQ24Game4Navi
/* 8013F92C 0013C86C  7C 60 1B 78 */	mr r0, r3
.L_8013F930:
/* 8013F930 0013C870  90 1F 02 6C */	stw r0, 0x26c(r31)
/* 8013F934 0013C874  7F E3 FB 78 */	mr r3, r31
/* 8013F938 0013C878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013F93C 0013C87C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013F940 0013C880  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013F944 0013C884  7C 08 03 A6 */	mtlr r0
/* 8013F948 0013C888  38 21 00 10 */	addi r1, r1, 0x10
/* 8013F94C 0013C88C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game4NaviFv

.fn __ct__Q23efx11TNaviEffectFv, weak
/* 8013F950 0013C890  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8013F954 0013C894  7C 08 02 A6 */	mflr r0
/* 8013F958 0013C898  3C 80 80 14 */	lis r4, __ct__Q23efx15ContextChasePosFv@ha
/* 8013F95C 0013C89C  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 8013F960 0013C8A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8013F964 0013C8A4  38 00 00 00 */	li r0, 0
/* 8013F968 0013C8A8  38 84 00 5C */	addi r4, r4, __ct__Q23efx15ContextChasePosFv@l
/* 8013F96C 0013C8AC  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 8013F970 0013C8B0  BE A1 00 14 */	stmw r21, 0x14(r1)
/* 8013F974 0013C8B4  7C 7F 1B 78 */	mr r31, r3
/* 8013F978 0013C8B8  38 C0 00 1C */	li r6, 0x1c
/* 8013F97C 0013C8BC  38 E0 00 01 */	li r7, 1
/* 8013F980 0013C8C0  98 03 00 00 */	stb r0, 0(r3)
/* 8013F984 0013C8C4  38 7F 00 28 */	addi r3, r31, 0x28
/* 8013F988 0013C8C8  98 1F 00 01 */	stb r0, 1(r31)
/* 8013F98C 0013C8CC  98 1F 00 02 */	stb r0, 2(r31)
/* 8013F990 0013C8D0  98 1F 00 03 */	stb r0, 3(r31)
/* 8013F994 0013C8D4  98 1F 00 04 */	stb r0, 4(r31)
/* 8013F998 0013C8D8  98 1F 00 05 */	stb r0, 5(r31)
/* 8013F99C 0013C8DC  98 1F 00 06 */	stb r0, 6(r31)
/* 8013F9A0 0013C8E0  98 1F 00 07 */	stb r0, 7(r31)
/* 8013F9A4 0013C8E4  90 1F 00 08 */	stw r0, 8(r31)
/* 8013F9A8 0013C8E8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8013F9AC 0013C8EC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8013F9B0 0013C8F0  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8013F9B4 0013C8F4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8013F9B8 0013C8F8  4B F8 1E 85 */	bl __construct_array
/* 8013F9BC 0013C8FC  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 8013F9C0 0013C900  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 8013F9C4 0013C904  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 8013F9C8 0013C908  38 C0 00 1C */	li r6, 0x1c
/* 8013F9CC 0013C90C  38 7F 00 44 */	addi r3, r31, 0x44
/* 8013F9D0 0013C910  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 8013F9D4 0013C914  38 E0 00 01 */	li r7, 1
/* 8013F9D8 0013C918  4B F8 1E 65 */	bl __construct_array
/* 8013F9DC 0013C91C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8013F9E0 0013C920  3C 60 80 4B */	lis r3, __vt__Q23efx7TFueact@ha
/* 8013F9E4 0013C924  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 8013F9E8 0013C928  3C C0 80 4A */	lis r6, __vt__19JPAParticleCallBack@ha
/* 8013F9EC 0013C92C  90 9F 00 60 */	stw r4, 0x60(r31)
/* 8013F9F0 0013C930  38 03 09 60 */	addi r0, r3, __vt__Q23efx7TFueact@l
/* 8013F9F4 0013C934  3C 60 80 4E */	lis r3, __vt__Q23efx13TFueactCircle@ha
/* 8013F9F8 0013C938  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 8013F9FC 0013C93C  90 1F 00 60 */	stw r0, 0x60(r31)
/* 8013FA00 0013C940  3B 25 69 8C */	addi r25, r5, __vt__Q23efx5TSync@l
/* 8013FA04 0013C944  3D 00 80 4A */	lis r8, __vt__18JPAEmitterCallBack@ha
/* 8013FA08 0013C948  38 E3 72 64 */	addi r7, r3, __vt__Q23efx13TFueactCircle@l
/* 8013FA0C 0013C94C  90 9F 00 64 */	stw r4, 0x64(r31)
/* 8013FA10 0013C950  38 08 E2 7C */	addi r0, r8, __vt__18JPAEmitterCallBack@l
/* 8013FA14 0013C954  3C 60 80 4E */	lis r3, __vt__Q23efx15TFueactBiriBase@ha
/* 8013FA18 0013C958  3C A0 80 4B */	lis r5, __vt__Q23efx12TFueactBiri1@ha
/* 8013FA1C 0013C95C  90 1F 00 68 */	stw r0, 0x68(r31)
/* 8013FA20 0013C960  3B 63 72 18 */	addi r27, r3, __vt__Q23efx15TFueactBiriBase@l
/* 8013FA24 0013C964  38 C6 33 58 */	addi r6, r6, __vt__19JPAParticleCallBack@l
/* 8013FA28 0013C968  3B 85 09 14 */	addi r28, r5, __vt__Q23efx12TFueactBiri1@l
/* 8013FA2C 0013C96C  90 DF 00 6C */	stw r6, 0x6c(r31)
/* 8013FA30 0013C970  3C 60 80 4B */	lis r3, __vt__Q23efx12TFueactBiri2@ha
/* 8013FA34 0013C974  39 43 08 C8 */	addi r10, r3, __vt__Q23efx12TFueactBiri2@l
/* 8013FA38 0013C978  3C A0 80 4E */	lis r5, __vt__Q23efx7TCursor@ha
/* 8013FA3C 0013C97C  90 FF 00 64 */	stw r7, 0x64(r31)
/* 8013FA40 0013C980  38 C7 00 14 */	addi r6, r7, 0x14
/* 8013FA44 0013C984  39 05 72 B8 */	addi r8, r5, __vt__Q23efx7TCursor@l
/* 8013FA48 0013C988  3B BF 00 AC */	addi r29, r31, 0xac
/* 8013FA4C 0013C98C  90 DF 00 68 */	stw r6, 0x68(r31)
/* 8013FA50 0013C990  38 C7 00 30 */	addi r6, r7, 0x30
/* 8013FA54 0013C994  3C 60 80 4E */	lis r3, __vt__Q23efx11TOneEmitter@ha
/* 8013FA58 0013C998  3B 00 00 00 */	li r24, 0
/* 8013FA5C 0013C99C  90 DF 00 6C */	stw r6, 0x6c(r31)
/* 8013FA60 0013C9A0  38 E3 6B 0C */	addi r7, r3, __vt__Q23efx11TOneEmitter@l
/* 8013FA64 0013C9A4  3B DD 00 14 */	addi r30, r29, 0x14
/* 8013FA68 0013C9A8  3A F9 00 14 */	addi r23, r25, 0x14
/* 8013FA6C 0013C9AC  93 1F 00 78 */	stw r24, 0x78(r31)
/* 8013FA70 0013C9B0  3B 40 00 67 */	li r26, 0x67
/* 8013FA74 0013C9B4  3A DB 00 14 */	addi r22, r27, 0x14
/* 8013FA78 0013C9B8  39 9C 00 14 */	addi r12, r28, 0x14
/* 8013FA7C 0013C9BC  90 9F 00 7C */	stw r4, 0x7c(r31)
/* 8013FA80 0013C9C0  39 60 00 68 */	li r11, 0x68
/* 8013FA84 0013C9C4  39 2A 00 14 */	addi r9, r10, 0x14
/* 8013FA88 0013C9C8  38 C7 00 14 */	addi r6, r7, 0x14
/* 8013FA8C 0013C9CC  90 1F 00 80 */	stw r0, 0x80(r31)
/* 8013FA90 0013C9D0  38 A0 00 19 */	li r5, 0x19
/* 8013FA94 0013C9D4  7F C3 F3 78 */	mr r3, r30
/* 8013FA98 0013C9D8  93 3F 00 7C */	stw r25, 0x7c(r31)
/* 8013FA9C 0013C9DC  92 FF 00 80 */	stw r23, 0x80(r31)
/* 8013FAA0 0013C9E0  93 1F 00 84 */	stw r24, 0x84(r31)
/* 8013FAA4 0013C9E4  B3 5F 00 88 */	sth r26, 0x88(r31)
/* 8013FAA8 0013C9E8  9B 1F 00 8A */	stb r24, 0x8a(r31)
/* 8013FAAC 0013C9EC  93 7F 00 7C */	stw r27, 0x7c(r31)
/* 8013FAB0 0013C9F0  92 DF 00 80 */	stw r22, 0x80(r31)
/* 8013FAB4 0013C9F4  93 9F 00 7C */	stw r28, 0x7c(r31)
/* 8013FAB8 0013C9F8  91 9F 00 80 */	stw r12, 0x80(r31)
/* 8013FABC 0013C9FC  90 9F 00 94 */	stw r4, 0x94(r31)
/* 8013FAC0 0013CA00  90 1F 00 98 */	stw r0, 0x98(r31)
/* 8013FAC4 0013CA04  93 3F 00 94 */	stw r25, 0x94(r31)
/* 8013FAC8 0013CA08  92 FF 00 98 */	stw r23, 0x98(r31)
/* 8013FACC 0013CA0C  93 1F 00 9C */	stw r24, 0x9c(r31)
/* 8013FAD0 0013CA10  B1 7F 00 A0 */	sth r11, 0xa0(r31)
/* 8013FAD4 0013CA14  9B 1F 00 A2 */	stb r24, 0xa2(r31)
/* 8013FAD8 0013CA18  93 7F 00 94 */	stw r27, 0x94(r31)
/* 8013FADC 0013CA1C  92 DF 00 98 */	stw r22, 0x98(r31)
/* 8013FAE0 0013CA20  91 5F 00 94 */	stw r10, 0x94(r31)
/* 8013FAE4 0013CA24  91 3F 00 98 */	stw r9, 0x98(r31)
/* 8013FAE8 0013CA28  90 9F 00 AC */	stw r4, 0xac(r31)
/* 8013FAEC 0013CA2C  91 1F 00 AC */	stw r8, 0xac(r31)
/* 8013FAF0 0013CA30  90 9F 00 B0 */	stw r4, 0xb0(r31)
/* 8013FAF4 0013CA34  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 8013FAF8 0013CA38  90 FF 00 B0 */	stw r7, 0xb0(r31)
/* 8013FAFC 0013CA3C  90 DF 00 B4 */	stw r6, 0xb4(r31)
/* 8013FB00 0013CA40  93 1F 00 B8 */	stw r24, 0xb8(r31)
/* 8013FB04 0013CA44  B0 BF 00 BC */	sth r5, 0xbc(r31)
/* 8013FB08 0013CA48  48 2D 18 89 */	bl __ct__5CNodeFv
/* 8013FB0C 0013CA4C  3C 60 80 4B */	lis r3, __vt__Q23efx7Context@ha
/* 8013FB10 0013CA50  3C 80 80 14 */	lis r4, __ct__Q23efx7ContextFv@ha
/* 8013FB14 0013CA54  38 03 08 B8 */	addi r0, r3, __vt__Q23efx7Context@l
/* 8013FB18 0013CA58  38 C0 00 24 */	li r6, 0x24
/* 8013FB1C 0013CA5C  90 1E 00 00 */	stw r0, 0(r30)
/* 8013FB20 0013CA60  38 00 00 00 */	li r0, 0
/* 8013FB24 0013CA64  3C 60 80 14 */	lis r3, __dt__Q23efx7ContextFv@ha
/* 8013FB28 0013CA68  38 84 FC 84 */	addi r4, r4, __ct__Q23efx7ContextFv@l
/* 8013FB2C 0013CA6C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8013FB30 0013CA70  38 A3 FD 60 */	addi r5, r3, __dt__Q23efx7ContextFv@l
/* 8013FB34 0013CA74  38 7D 00 3C */	addi r3, r29, 0x3c
/* 8013FB38 0013CA78  38 E0 00 10 */	li r7, 0x10
/* 8013FB3C 0013CA7C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8013FB40 0013CA80  90 1E 00 08 */	stw r0, 8(r30)
/* 8013FB44 0013CA84  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FB48 0013CA88  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8013FB4C 0013CA8C  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8013FB50 0013CA90  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 8013FB54 0013CA94  90 1D 00 18 */	stw r0, 0x18(r29)
/* 8013FB58 0013CA98  4B F8 1C E5 */	bl __construct_array
/* 8013FB5C 0013CA9C  7F A3 EB 78 */	mr r3, r29
/* 8013FB60 0013CAA0  38 80 00 00 */	li r4, 0
/* 8013FB64 0013CAA4  38 A0 00 10 */	li r5, 0x10
/* 8013FB68 0013CAA8  48 27 6E D9 */	bl init__Q23efx7TCursorFll
/* 8013FB6C 0013CAAC  3A BF 03 3C */	addi r21, r31, 0x33c
/* 8013FB70 0013CAB0  38 80 00 00 */	li r4, 0
/* 8013FB74 0013CAB4  7E A3 AB 78 */	mr r3, r21
/* 8013FB78 0013CAB8  38 A0 01 23 */	li r5, 0x123
/* 8013FB7C 0013CABC  38 C0 01 23 */	li r6, 0x123
/* 8013FB80 0013CAC0  48 27 09 1D */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 8013FB84 0013CAC4  3C 60 80 4E */	lis r3, __vt__Q23efx11TOrimaLight@ha
/* 8013FB88 0013CAC8  3A DF 03 6C */	addi r22, r31, 0x36c
/* 8013FB8C 0013CACC  38 63 72 E8 */	addi r3, r3, __vt__Q23efx11TOrimaLight@l
/* 8013FB90 0013CAD0  38 00 00 00 */	li r0, 0
/* 8013FB94 0013CAD4  90 75 00 00 */	stw r3, 0(r21)
/* 8013FB98 0013CAD8  7E C3 B3 78 */	mr r3, r22
/* 8013FB9C 0013CADC  38 80 00 00 */	li r4, 0
/* 8013FBA0 0013CAE0  38 A0 01 24 */	li r5, 0x124
/* 8013FBA4 0013CAE4  90 15 00 2C */	stw r0, 0x2c(r21)
/* 8013FBA8 0013CAE8  38 C0 01 25 */	li r6, 0x125
/* 8013FBAC 0013CAEC  48 27 08 F1 */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 8013FBB0 0013CAF0  3C 60 80 4E */	lis r3, __vt__Q23efx14TOrimaLightAct@ha
/* 8013FBB4 0013CAF4  3A BF 03 9C */	addi r21, r31, 0x39c
/* 8013FBB8 0013CAF8  38 63 72 CC */	addi r3, r3, __vt__Q23efx14TOrimaLightAct@l
/* 8013FBBC 0013CAFC  38 00 00 00 */	li r0, 0
/* 8013FBC0 0013CB00  90 76 00 00 */	stw r3, 0(r22)
/* 8013FBC4 0013CB04  7E A3 AB 78 */	mr r3, r21
/* 8013FBC8 0013CB08  38 80 00 00 */	li r4, 0
/* 8013FBCC 0013CB0C  38 A0 01 21 */	li r5, 0x121
/* 8013FBD0 0013CB10  90 16 00 2C */	stw r0, 0x2c(r22)
/* 8013FBD4 0013CB14  38 C0 01 22 */	li r6, 0x122
/* 8013FBD8 0013CB18  48 27 0C 25 */	bl __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
/* 8013FBDC 0013CB1C  3C 80 80 4B */	lis r4, __vt__Q23efx12TOrimadamage@ha
/* 8013FBE0 0013CB20  7F E3 FB 78 */	mr r3, r31
/* 8013FBE4 0013CB24  38 04 08 9C */	addi r0, r4, __vt__Q23efx12TOrimadamage@l
/* 8013FBE8 0013CB28  90 15 00 00 */	stw r0, 0(r21)
/* 8013FBEC 0013CB2C  BA A1 00 14 */	lmw r21, 0x14(r1)
/* 8013FBF0 0013CB30  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8013FBF4 0013CB34  7C 08 03 A6 */	mtlr r0
/* 8013FBF8 0013CB38  38 21 00 40 */	addi r1, r1, 0x40
/* 8013FBFC 0013CB3C  4E 80 00 20 */	blr 
.endfn __ct__Q23efx11TNaviEffectFv

.fn __dt__Q23efx10TChaseMtxTFv, weak
/* 8013FC00 0013CB40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FC04 0013CB44  7C 08 02 A6 */	mflr r0
/* 8013FC08 0013CB48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FC0C 0013CB4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FC10 0013CB50  7C 9F 23 78 */	mr r31, r4
/* 8013FC14 0013CB54  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FC18 0013CB58  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FC1C 0013CB5C  41 82 00 4C */	beq .L_8013FC68
/* 8013FC20 0013CB60  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 8013FC24 0013CB64  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 8013FC28 0013CB68  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FC2C 0013CB6C  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FC30 0013CB70  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FC34 0013CB74  41 82 00 24 */	beq .L_8013FC58
/* 8013FC38 0013CB78  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8013FC3C 0013CB7C  38 7E 00 04 */	addi r3, r30, 4
/* 8013FC40 0013CB80  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8013FC44 0013CB84  38 80 00 00 */	li r4, 0
/* 8013FC48 0013CB88  90 BE 00 00 */	stw r5, 0(r30)
/* 8013FC4C 0013CB8C  38 05 00 14 */	addi r0, r5, 0x14
/* 8013FC50 0013CB90  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FC54 0013CB94  4B F5 00 49 */	bl __dt__18JPAEmitterCallBackFv
.L_8013FC58:
/* 8013FC58 0013CB98  7F E0 07 35 */	extsh. r0, r31
/* 8013FC5C 0013CB9C  40 81 00 0C */	ble .L_8013FC68
/* 8013FC60 0013CBA0  7F C3 F3 78 */	mr r3, r30
/* 8013FC64 0013CBA4  4B EE 44 51 */	bl __dl__FPv
.L_8013FC68:
/* 8013FC68 0013CBA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FC6C 0013CBAC  7F C3 F3 78 */	mr r3, r30
/* 8013FC70 0013CBB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FC74 0013CBB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FC78 0013CBB8  7C 08 03 A6 */	mtlr r0
/* 8013FC7C 0013CBBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FC80 0013CBC0  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TChaseMtxTFv

.fn __ct__Q23efx7ContextFv, weak
/* 8013FC84 0013CBC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FC88 0013CBC8  7C 08 02 A6 */	mflr r0
/* 8013FC8C 0013CBCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FC90 0013CBD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FC94 0013CBD4  7C 7F 1B 78 */	mr r31, r3
/* 8013FC98 0013CBD8  48 2D 16 F9 */	bl __ct__5CNodeFv
/* 8013FC9C 0013CBDC  3C 60 80 4B */	lis r3, __vt__Q23efx7Context@ha
/* 8013FCA0 0013CBE0  38 00 00 00 */	li r0, 0
/* 8013FCA4 0013CBE4  38 83 08 B8 */	addi r4, r3, __vt__Q23efx7Context@l
/* 8013FCA8 0013CBE8  7F E3 FB 78 */	mr r3, r31
/* 8013FCAC 0013CBEC  90 9F 00 00 */	stw r4, 0(r31)
/* 8013FCB0 0013CBF0  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8013FCB4 0013CBF4  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8013FCB8 0013CBF8  90 1F 00 08 */	stw r0, 8(r31)
/* 8013FCBC 0013CBFC  90 1F 00 04 */	stw r0, 4(r31)
/* 8013FCC0 0013CC00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FCC4 0013CC04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FCC8 0013CC08  7C 08 03 A6 */	mtlr r0
/* 8013FCCC 0013CC0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FCD0 0013CC10  4E 80 00 20 */	blr 
.endfn __ct__Q23efx7ContextFv

.fn __dt__Q23efx11TOneEmitterFv, weak
/* 8013FCD4 0013CC14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FCD8 0013CC18  7C 08 02 A6 */	mflr r0
/* 8013FCDC 0013CC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FCE0 0013CC20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FCE4 0013CC24  7C 9F 23 78 */	mr r31, r4
/* 8013FCE8 0013CC28  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FCEC 0013CC2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FCF0 0013CC30  41 82 00 54 */	beq .L_8013FD44
/* 8013FCF4 0013CC34  3C 60 80 4E */	lis r3, __vt__Q23efx11TOneEmitter@ha
/* 8013FCF8 0013CC38  34 1E 00 10 */	addic. r0, r30, 0x10
/* 8013FCFC 0013CC3C  38 63 6B 0C */	addi r3, r3, __vt__Q23efx11TOneEmitter@l
/* 8013FD00 0013CC40  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FD04 0013CC44  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FD08 0013CC48  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FD0C 0013CC4C  41 82 00 1C */	beq .L_8013FD28
/* 8013FD10 0013CC50  3C 80 80 4B */	lis r4, __vt__Q23efx7Context@ha
/* 8013FD14 0013CC54  38 7E 00 10 */	addi r3, r30, 0x10
/* 8013FD18 0013CC58  38 04 08 B8 */	addi r0, r4, __vt__Q23efx7Context@l
/* 8013FD1C 0013CC5C  38 80 00 00 */	li r4, 0
/* 8013FD20 0013CC60  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8013FD24 0013CC64  48 2D 18 65 */	bl __dt__5CNodeFv
.L_8013FD28:
/* 8013FD28 0013CC68  38 7E 00 04 */	addi r3, r30, 4
/* 8013FD2C 0013CC6C  38 80 00 00 */	li r4, 0
/* 8013FD30 0013CC70  4B F4 FF 6D */	bl __dt__18JPAEmitterCallBackFv
/* 8013FD34 0013CC74  7F E0 07 35 */	extsh. r0, r31
/* 8013FD38 0013CC78  40 81 00 0C */	ble .L_8013FD44
/* 8013FD3C 0013CC7C  7F C3 F3 78 */	mr r3, r30
/* 8013FD40 0013CC80  4B EE 43 75 */	bl __dl__FPv
.L_8013FD44:
/* 8013FD44 0013CC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FD48 0013CC88  7F C3 F3 78 */	mr r3, r30
/* 8013FD4C 0013CC8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FD50 0013CC90  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FD54 0013CC94  7C 08 03 A6 */	mtlr r0
/* 8013FD58 0013CC98  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FD5C 0013CC9C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx11TOneEmitterFv

.fn __dt__Q23efx7ContextFv, weak
/* 8013FD60 0013CCA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FD64 0013CCA4  7C 08 02 A6 */	mflr r0
/* 8013FD68 0013CCA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FD6C 0013CCAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FD70 0013CCB0  7C 9F 23 78 */	mr r31, r4
/* 8013FD74 0013CCB4  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FD78 0013CCB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FD7C 0013CCBC  41 82 00 28 */	beq .L_8013FDA4
/* 8013FD80 0013CCC0  3C A0 80 4B */	lis r5, __vt__Q23efx7Context@ha
/* 8013FD84 0013CCC4  38 80 00 00 */	li r4, 0
/* 8013FD88 0013CCC8  38 05 08 B8 */	addi r0, r5, __vt__Q23efx7Context@l
/* 8013FD8C 0013CCCC  90 1E 00 00 */	stw r0, 0(r30)
/* 8013FD90 0013CCD0  48 2D 17 F9 */	bl __dt__5CNodeFv
/* 8013FD94 0013CCD4  7F E0 07 35 */	extsh. r0, r31
/* 8013FD98 0013CCD8  40 81 00 0C */	ble .L_8013FDA4
/* 8013FD9C 0013CCDC  7F C3 F3 78 */	mr r3, r30
/* 8013FDA0 0013CCE0  4B EE 43 15 */	bl __dl__FPv
.L_8013FDA4:
/* 8013FDA4 0013CCE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FDA8 0013CCE8  7F C3 F3 78 */	mr r3, r30
/* 8013FDAC 0013CCEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FDB0 0013CCF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FDB4 0013CCF4  7C 08 03 A6 */	mtlr r0
/* 8013FDB8 0013CCF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FDBC 0013CCFC  4E 80 00 20 */	blr 
.endfn __dt__Q23efx7ContextFv

.fn __dt__Q23efx12TFueactBiri2Fv, weak
/* 8013FDC0 0013CD00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FDC4 0013CD04  7C 08 02 A6 */	mflr r0
/* 8013FDC8 0013CD08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FDCC 0013CD0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FDD0 0013CD10  7C 9F 23 78 */	mr r31, r4
/* 8013FDD4 0013CD14  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FDD8 0013CD18  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FDDC 0013CD1C  41 82 00 64 */	beq .L_8013FE40
/* 8013FDE0 0013CD20  3C 60 80 4B */	lis r3, __vt__Q23efx12TFueactBiri2@ha
/* 8013FDE4 0013CD24  38 63 08 C8 */	addi r3, r3, __vt__Q23efx12TFueactBiri2@l
/* 8013FDE8 0013CD28  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FDEC 0013CD2C  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FDF0 0013CD30  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FDF4 0013CD34  41 82 00 3C */	beq .L_8013FE30
/* 8013FDF8 0013CD38  3C 60 80 4E */	lis r3, __vt__Q23efx15TFueactBiriBase@ha
/* 8013FDFC 0013CD3C  38 63 72 18 */	addi r3, r3, __vt__Q23efx15TFueactBiriBase@l
/* 8013FE00 0013CD40  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FE04 0013CD44  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FE08 0013CD48  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FE0C 0013CD4C  41 82 00 24 */	beq .L_8013FE30
/* 8013FE10 0013CD50  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8013FE14 0013CD54  38 7E 00 04 */	addi r3, r30, 4
/* 8013FE18 0013CD58  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8013FE1C 0013CD5C  38 80 00 00 */	li r4, 0
/* 8013FE20 0013CD60  90 BE 00 00 */	stw r5, 0(r30)
/* 8013FE24 0013CD64  38 05 00 14 */	addi r0, r5, 0x14
/* 8013FE28 0013CD68  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FE2C 0013CD6C  4B F4 FE 71 */	bl __dt__18JPAEmitterCallBackFv
.L_8013FE30:
/* 8013FE30 0013CD70  7F E0 07 35 */	extsh. r0, r31
/* 8013FE34 0013CD74  40 81 00 0C */	ble .L_8013FE40
/* 8013FE38 0013CD78  7F C3 F3 78 */	mr r3, r30
/* 8013FE3C 0013CD7C  4B EE 42 79 */	bl __dl__FPv
.L_8013FE40:
/* 8013FE40 0013CD80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FE44 0013CD84  7F C3 F3 78 */	mr r3, r30
/* 8013FE48 0013CD88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FE4C 0013CD8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FE50 0013CD90  7C 08 03 A6 */	mtlr r0
/* 8013FE54 0013CD94  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FE58 0013CD98  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TFueactBiri2Fv

.fn __dt__Q23efx12TFueactBiri1Fv, weak
/* 8013FE5C 0013CD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FE60 0013CDA0  7C 08 02 A6 */	mflr r0
/* 8013FE64 0013CDA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FE68 0013CDA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FE6C 0013CDAC  7C 9F 23 78 */	mr r31, r4
/* 8013FE70 0013CDB0  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FE74 0013CDB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FE78 0013CDB8  41 82 00 64 */	beq .L_8013FEDC
/* 8013FE7C 0013CDBC  3C 60 80 4B */	lis r3, __vt__Q23efx12TFueactBiri1@ha
/* 8013FE80 0013CDC0  38 63 09 14 */	addi r3, r3, __vt__Q23efx12TFueactBiri1@l
/* 8013FE84 0013CDC4  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FE88 0013CDC8  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FE8C 0013CDCC  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FE90 0013CDD0  41 82 00 3C */	beq .L_8013FECC
/* 8013FE94 0013CDD4  3C 60 80 4E */	lis r3, __vt__Q23efx15TFueactBiriBase@ha
/* 8013FE98 0013CDD8  38 63 72 18 */	addi r3, r3, __vt__Q23efx15TFueactBiriBase@l
/* 8013FE9C 0013CDDC  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FEA0 0013CDE0  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FEA4 0013CDE4  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FEA8 0013CDE8  41 82 00 24 */	beq .L_8013FECC
/* 8013FEAC 0013CDEC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8013FEB0 0013CDF0  38 7E 00 04 */	addi r3, r30, 4
/* 8013FEB4 0013CDF4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8013FEB8 0013CDF8  38 80 00 00 */	li r4, 0
/* 8013FEBC 0013CDFC  90 BE 00 00 */	stw r5, 0(r30)
/* 8013FEC0 0013CE00  38 05 00 14 */	addi r0, r5, 0x14
/* 8013FEC4 0013CE04  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FEC8 0013CE08  4B F4 FD D5 */	bl __dt__18JPAEmitterCallBackFv
.L_8013FECC:
/* 8013FECC 0013CE0C  7F E0 07 35 */	extsh. r0, r31
/* 8013FED0 0013CE10  40 81 00 0C */	ble .L_8013FEDC
/* 8013FED4 0013CE14  7F C3 F3 78 */	mr r3, r30
/* 8013FED8 0013CE18  4B EE 41 DD */	bl __dl__FPv
.L_8013FEDC:
/* 8013FEDC 0013CE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FEE0 0013CE20  7F C3 F3 78 */	mr r3, r30
/* 8013FEE4 0013CE24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FEE8 0013CE28  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FEEC 0013CE2C  7C 08 03 A6 */	mtlr r0
/* 8013FEF0 0013CE30  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FEF4 0013CE34  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TFueactBiri1Fv

.fn __dt__Q23efx15TFueactBiriBaseFv, weak
/* 8013FEF8 0013CE38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FEFC 0013CE3C  7C 08 02 A6 */	mflr r0
/* 8013FF00 0013CE40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FF04 0013CE44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FF08 0013CE48  7C 9F 23 78 */	mr r31, r4
/* 8013FF0C 0013CE4C  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FF10 0013CE50  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FF14 0013CE54  41 82 00 4C */	beq .L_8013FF60
/* 8013FF18 0013CE58  3C 60 80 4E */	lis r3, __vt__Q23efx15TFueactBiriBase@ha
/* 8013FF1C 0013CE5C  38 63 72 18 */	addi r3, r3, __vt__Q23efx15TFueactBiriBase@l
/* 8013FF20 0013CE60  90 7E 00 00 */	stw r3, 0(r30)
/* 8013FF24 0013CE64  38 03 00 14 */	addi r0, r3, 0x14
/* 8013FF28 0013CE68  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FF2C 0013CE6C  41 82 00 24 */	beq .L_8013FF50
/* 8013FF30 0013CE70  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8013FF34 0013CE74  38 7E 00 04 */	addi r3, r30, 4
/* 8013FF38 0013CE78  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8013FF3C 0013CE7C  38 80 00 00 */	li r4, 0
/* 8013FF40 0013CE80  90 BE 00 00 */	stw r5, 0(r30)
/* 8013FF44 0013CE84  38 05 00 14 */	addi r0, r5, 0x14
/* 8013FF48 0013CE88  90 1E 00 04 */	stw r0, 4(r30)
/* 8013FF4C 0013CE8C  4B F4 FD 51 */	bl __dt__18JPAEmitterCallBackFv
.L_8013FF50:
/* 8013FF50 0013CE90  7F E0 07 35 */	extsh. r0, r31
/* 8013FF54 0013CE94  40 81 00 0C */	ble .L_8013FF60
/* 8013FF58 0013CE98  7F C3 F3 78 */	mr r3, r30
/* 8013FF5C 0013CE9C  4B EE 41 59 */	bl __dl__FPv
.L_8013FF60:
/* 8013FF60 0013CEA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FF64 0013CEA4  7F C3 F3 78 */	mr r3, r30
/* 8013FF68 0013CEA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FF6C 0013CEAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FF70 0013CEB0  7C 08 03 A6 */	mtlr r0
/* 8013FF74 0013CEB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FF78 0013CEB8  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15TFueactBiriBaseFv

.fn __dt__Q23efx13TFueactCircleFv, weak
/* 8013FF7C 0013CEBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FF80 0013CEC0  7C 08 02 A6 */	mflr r0
/* 8013FF84 0013CEC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FF88 0013CEC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FF8C 0013CECC  7C 9F 23 78 */	mr r31, r4
/* 8013FF90 0013CED0  93 C1 00 08 */	stw r30, 8(r1)
/* 8013FF94 0013CED4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013FF98 0013CED8  41 82 00 48 */	beq .L_8013FFE0
/* 8013FF9C 0013CEDC  3C 80 80 4E */	lis r4, __vt__Q23efx13TFueactCircle@ha
/* 8013FFA0 0013CEE0  38 7E 00 08 */	addi r3, r30, 8
/* 8013FFA4 0013CEE4  38 C4 72 64 */	addi r6, r4, __vt__Q23efx13TFueactCircle@l
/* 8013FFA8 0013CEE8  38 80 00 00 */	li r4, 0
/* 8013FFAC 0013CEEC  90 DE 00 00 */	stw r6, 0(r30)
/* 8013FFB0 0013CEF0  38 A6 00 14 */	addi r5, r6, 0x14
/* 8013FFB4 0013CEF4  38 06 00 30 */	addi r0, r6, 0x30
/* 8013FFB8 0013CEF8  90 BE 00 04 */	stw r5, 4(r30)
/* 8013FFBC 0013CEFC  90 1E 00 08 */	stw r0, 8(r30)
/* 8013FFC0 0013CF00  4B F5 40 69 */	bl __dt__19JPAParticleCallBackFv
/* 8013FFC4 0013CF04  38 7E 00 04 */	addi r3, r30, 4
/* 8013FFC8 0013CF08  38 80 00 00 */	li r4, 0
/* 8013FFCC 0013CF0C  4B F4 FC D1 */	bl __dt__18JPAEmitterCallBackFv
/* 8013FFD0 0013CF10  7F E0 07 35 */	extsh. r0, r31
/* 8013FFD4 0013CF14  40 81 00 0C */	ble .L_8013FFE0
/* 8013FFD8 0013CF18  7F C3 F3 78 */	mr r3, r30
/* 8013FFDC 0013CF1C  4B EE 40 D9 */	bl __dl__FPv
.L_8013FFE0:
/* 8013FFE0 0013CF20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013FFE4 0013CF24  7F C3 F3 78 */	mr r3, r30
/* 8013FFE8 0013CF28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013FFEC 0013CF2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013FFF0 0013CF30  7C 08 03 A6 */	mtlr r0
/* 8013FFF4 0013CF34  38 21 00 10 */	addi r1, r1, 0x10
/* 8013FFF8 0013CF38  4E 80 00 20 */	blr 
.endfn __dt__Q23efx13TFueactCircleFv

.fn __dt__Q23efx15ContextChasePosFv, weak
/* 8013FFFC 0013CF3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140000 0013CF40  7C 08 02 A6 */	mflr r0
/* 80140004 0013CF44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140008 0013CF48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014000C 0013CF4C  7C 9F 23 78 */	mr r31, r4
/* 80140010 0013CF50  93 C1 00 08 */	stw r30, 8(r1)
/* 80140014 0013CF54  7C 7E 1B 79 */	or. r30, r3, r3
/* 80140018 0013CF58  41 82 00 28 */	beq .L_80140040
/* 8014001C 0013CF5C  3C A0 80 4B */	lis r5, __vt__Q23efx15ContextChasePos@ha
/* 80140020 0013CF60  38 80 00 00 */	li r4, 0
/* 80140024 0013CF64  38 05 08 1C */	addi r0, r5, __vt__Q23efx15ContextChasePos@l
/* 80140028 0013CF68  90 1E 00 00 */	stw r0, 0(r30)
/* 8014002C 0013CF6C  48 2D 15 5D */	bl __dt__5CNodeFv
/* 80140030 0013CF70  7F E0 07 35 */	extsh. r0, r31
/* 80140034 0013CF74  40 81 00 0C */	ble .L_80140040
/* 80140038 0013CF78  7F C3 F3 78 */	mr r3, r30
/* 8014003C 0013CF7C  4B EE 40 79 */	bl __dl__FPv
.L_80140040:
/* 80140040 0013CF80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140044 0013CF84  7F C3 F3 78 */	mr r3, r30
/* 80140048 0013CF88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014004C 0013CF8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80140050 0013CF90  7C 08 03 A6 */	mtlr r0
/* 80140054 0013CF94  38 21 00 10 */	addi r1, r1, 0x10
/* 80140058 0013CF98  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15ContextChasePosFv

.fn __ct__Q23efx15ContextChasePosFv, weak
/* 8014005C 0013CF9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140060 0013CFA0  7C 08 02 A6 */	mflr r0
/* 80140064 0013CFA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140068 0013CFA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014006C 0013CFAC  7C 7F 1B 78 */	mr r31, r3
/* 80140070 0013CFB0  48 2D 13 21 */	bl __ct__5CNodeFv
/* 80140074 0013CFB4  3C 60 80 4B */	lis r3, __vt__Q23efx15ContextChasePos@ha
/* 80140078 0013CFB8  38 00 00 00 */	li r0, 0
/* 8014007C 0013CFBC  38 83 08 1C */	addi r4, r3, __vt__Q23efx15ContextChasePos@l
/* 80140080 0013CFC0  7F E3 FB 78 */	mr r3, r31
/* 80140084 0013CFC4  90 9F 00 00 */	stw r4, 0(r31)
/* 80140088 0013CFC8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8014008C 0013CFCC  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80140090 0013CFD0  90 1F 00 08 */	stw r0, 8(r31)
/* 80140094 0013CFD4  90 1F 00 04 */	stw r0, 4(r31)
/* 80140098 0013CFD8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8014009C 0013CFDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801400A0 0013CFE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801400A4 0013CFE4  7C 08 03 A6 */	mtlr r0
/* 801400A8 0013CFE8  38 21 00 10 */	addi r1, r1, 0x10
/* 801400AC 0013CFEC  4E 80 00 20 */	blr 
.endfn __ct__Q23efx15ContextChasePosFv

.fn onInit__Q24Game4NaviFPQ24Game15CreatureInitArg, global
/* 801400B0 0013CFF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801400B4 0013CFF4  7C 08 02 A6 */	mflr r0
/* 801400B8 0013CFF8  3C 80 80 48 */	lis r4, lbl_8047C788@ha
/* 801400BC 0013CFFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801400C0 0013D000  38 00 00 00 */	li r0, 0
/* 801400C4 0013D004  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801400C8 0013D008  3B E4 C7 88 */	addi r31, r4, lbl_8047C788@l
/* 801400CC 0013D00C  93 C1 00 08 */	stw r30, 8(r1)
/* 801400D0 0013D010  7C 7E 1B 78 */	mr r30, r3
/* 801400D4 0013D014  98 03 02 59 */	stb r0, 0x259(r3)
/* 801400D8 0013D018  98 03 02 58 */	stb r0, 0x258(r3)
/* 801400DC 0013D01C  48 00 4A 69 */	bl clearKaisanDisable__Q24Game4NaviFv
/* 801400E0 0013D020  7F C3 F3 78 */	mr r3, r30
/* 801400E4 0013D024  48 00 4A C5 */	bl clearThrowDisable__Q24Game4NaviFv
/* 801400E8 0013D028  38 00 00 00 */	li r0, 0
/* 801400EC 0013D02C  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 801400F0 0013D030  98 1E 02 A4 */	stb r0, 0x2a4(r30)
/* 801400F4 0013D034  7F C3 F3 78 */	mr r3, r30
/* 801400F8 0013D038  D0 1E 02 F8 */	stfs f0, 0x2f8(r30)
/* 801400FC 0013D03C  90 1E 02 60 */	stw r0, 0x260(r30)
/* 80140100 0013D040  90 1E 02 5C */	stw r0, 0x25c(r30)
/* 80140104 0013D044  4B FF CC 91 */	bl initFakePiki__Q24Game8FakePikiFv
/* 80140108 0013D048  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014010C 0013D04C  7F C4 F3 78 */	mr r4, r30
/* 80140110 0013D050  48 01 A9 25 */	bl setupNavi__Q24Game7NaviMgrFPQ24Game4Navi
/* 80140114 0013D054  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 80140118 0013D058  38 00 00 00 */	li r0, 0
/* 8014011C 0013D05C  7F C3 F3 78 */	mr r3, r30
/* 80140120 0013D060  80 84 00 08 */	lwz r4, 8(r4)
/* 80140124 0013D064  80 84 00 04 */	lwz r4, 4(r4)
/* 80140128 0013D068  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8014012C 0013D06C  80 84 00 00 */	lwz r4, 0(r4)
/* 80140130 0013D070  90 04 00 54 */	stw r0, 0x54(r4)
/* 80140134 0013D074  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 80140138 0013D078  80 84 00 08 */	lwz r4, 8(r4)
/* 8014013C 0013D07C  80 84 00 04 */	lwz r4, 4(r4)
/* 80140140 0013D080  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80140144 0013D084  80 84 00 04 */	lwz r4, 4(r4)
/* 80140148 0013D088  90 04 00 54 */	stw r0, 0x54(r4)
/* 8014014C 0013D08C  98 1E 02 88 */	stb r0, 0x288(r30)
/* 80140150 0013D090  98 1E 02 89 */	stb r0, 0x289(r30)
/* 80140154 0013D094  A0 1E 02 88 */	lhz r0, 0x288(r30)
/* 80140158 0013D098  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 8014015C 0013D09C  B0 1E 02 88 */	sth r0, 0x288(r30)
/* 80140160 0013D0A0  4B FF CD 15 */	bl initAnimator__Q24Game8FakePikiFv
/* 80140164 0013D0A4  38 00 00 00 */	li r0, 0
/* 80140168 0013D0A8  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 8014016C 0013D0AC  98 1E 02 68 */	stb r0, 0x268(r30)
/* 80140170 0013D0B0  38 60 00 3C */	li r3, 0x3c
/* 80140174 0013D0B4  D0 1E 03 08 */	stfs f0, 0x308(r30)
/* 80140178 0013D0B8  4B EE 3D 2D */	bl __nw__FUl
/* 8014017C 0013D0BC  7C 60 1B 79 */	or. r0, r3, r3
/* 80140180 0013D0C0  41 82 00 10 */	beq .L_80140190
/* 80140184 0013D0C4  7F C4 F3 78 */	mr r4, r30
/* 80140188 0013D0C8  48 02 4F 01 */	bl __ct__Q24Game11NaviWhistleFPQ24Game4Navi
/* 8014018C 0013D0CC  7C 60 1B 78 */	mr r0, r3
.L_80140190:
/* 80140190 0013D0D0  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 80140194 0013D0D4  38 00 00 00 */	li r0, 0
/* 80140198 0013D0D8  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 8014019C 0013D0DC  38 C0 00 00 */	li r6, 0
/* 801401A0 0013D0E0  98 1E 02 DE */	stb r0, 0x2de(r30)
/* 801401A4 0013D0E4  90 1E 02 A8 */	stw r0, 0x2a8(r30)
/* 801401A8 0013D0E8  D0 1E 02 B0 */	stfs f0, 0x2b0(r30)
/* 801401AC 0013D0EC  98 1E 02 AC */	stb r0, 0x2ac(r30)
/* 801401B0 0013D0F0  80 AD 92 E0 */	lwz r5, naviMgr__4Game@sda21(r13)
/* 801401B4 0013D0F4  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 801401B8 0013D0F8  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 801401BC 0013D0FC  80 A5 00 CC */	lwz r5, 0xcc(r5)
/* 801401C0 0013D100  4B FF 3E AD */	bl createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
/* 801401C4 0013D104  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 801401C8 0013D108  3C 00 80 00 */	lis r0, 0x8000
/* 801401CC 0013D10C  80 63 00 00 */	lwz r3, 0(r3)
/* 801401D0 0013D110  7C 03 00 40 */	cmplw r3, r0
/* 801401D4 0013D114  40 80 00 18 */	bge .L_801401EC
/* 801401D8 0013D118  38 7F 00 0C */	addi r3, r31, 0xc
/* 801401DC 0013D11C  38 BF 00 18 */	addi r5, r31, 0x18
/* 801401E0 0013D120  38 80 03 46 */	li r4, 0x346
/* 801401E4 0013D124  4C C6 31 82 */	crclr 6
/* 801401E8 0013D128  4B EE A4 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801401EC:
/* 801401EC 0013D12C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 801401F0 0013D130  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 801401F4 0013D134  4B FF 58 D5 */	bl attachModel__8CollTreeFPQ28SysShape9MtxObject
/* 801401F8 0013D138  80 7E 02 70 */	lwz r3, 0x270(r30)
/* 801401FC 0013D13C  7F C4 F3 78 */	mr r4, r30
/* 80140200 0013D140  38 A0 00 00 */	li r5, 0
/* 80140204 0013D144  38 C0 00 00 */	li r6, 0
/* 80140208 0013D148  81 83 00 00 */	lwz r12, 0(r3)
/* 8014020C 0013D14C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80140210 0013D150  7D 89 03 A6 */	mtctr r12
/* 80140214 0013D154  4E 80 04 21 */	bctrl 
/* 80140218 0013D158  7F C3 F3 78 */	mr r3, r30
/* 8014021C 0013D15C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80140220 0013D160  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 80140224 0013D164  7D 89 03 A6 */	mtctr r12
/* 80140228 0013D168  4E 80 04 21 */	bctrl 
/* 8014022C 0013D16C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80140230 0013D170  38 9F 00 34 */	addi r4, r31, 0x34
/* 80140234 0013D174  48 2F ED B1 */	bl getJoint__Q28SysShape5ModelFPc
/* 80140238 0013D178  90 7E 02 C0 */	stw r3, 0x2c0(r30)
/* 8014023C 0013D17C  80 7E 02 C0 */	lwz r3, 0x2c0(r30)
/* 80140240 0013D180  48 2E 96 61 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80140244 0013D184  80 BE 02 D0 */	lwz r5, 0x2d0(r30)
/* 80140248 0013D188  38 82 A0 00 */	addi r4, r2, lbl_80518360@sda21
/* 8014024C 0013D18C  90 65 00 10 */	stw r3, 0x10(r5)
/* 80140250 0013D190  80 BE 02 8C */	lwz r5, 0x28c(r30)
/* 80140254 0013D194  80 7E 02 D0 */	lwz r3, 0x2d0(r30)
/* 80140258 0013D198  38 05 00 0C */	addi r0, r5, 0xc
/* 8014025C 0013D19C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80140260 0013D1A0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80140264 0013D1A4  48 2F ED 81 */	bl getJoint__Q28SysShape5ModelFPc
/* 80140268 0013D1A8  48 2E 96 39 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8014026C 0013D1AC  80 9E 02 D0 */	lwz r4, 0x2d0(r30)
/* 80140270 0013D1B0  90 64 00 14 */	stw r3, 0x14(r4)
/* 80140274 0013D1B4  A0 9E 02 DC */	lhz r4, 0x2dc(r30)
/* 80140278 0013D1B8  80 7E 02 D0 */	lwz r3, 0x2d0(r30)
/* 8014027C 0013D1BC  7C 04 00 D0 */	neg r0, r4
/* 80140280 0013D1C0  7C 00 23 78 */	or r0, r0, r4
/* 80140284 0013D1C4  54 04 0F FE */	srwi r4, r0, 0x1f
/* 80140288 0013D1C8  48 27 7B 9D */	bl setNaviType__Q23efx11TNaviEffectFQ33efx11TNaviEffect12enumNaviType
/* 8014028C 0013D1CC  80 7E 02 D0 */	lwz r3, 0x2d0(r30)
/* 80140290 0013D1D0  80 03 00 00 */	lwz r0, 0(r3)
/* 80140294 0013D1D4  60 00 00 02 */	ori r0, r0, 2
/* 80140298 0013D1D8  90 03 00 00 */	stw r0, 0(r3)
/* 8014029C 0013D1DC  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801402A0 0013D1E0  48 27 7E 5D */	bl createLight___Q23efx11TNaviEffectFPA4_f
/* 801402A4 0013D1E4  7F C3 F3 78 */	mr r3, r30
/* 801402A8 0013D1E8  48 00 1D 41 */	bl setLifeMax__Q24Game4NaviFv
/* 801402AC 0013D1EC  38 00 00 00 */	li r0, 0
/* 801402B0 0013D1F0  C0 02 A0 08 */	lfs f0, lbl_80518368@sda21(r2)
/* 801402B4 0013D1F4  98 1E 02 6A */	stb r0, 0x26a(r30)
/* 801402B8 0013D1F8  FC 20 00 90 */	fmr f1, f0
/* 801402BC 0013D1FC  98 1E 02 69 */	stb r0, 0x269(r30)
/* 801402C0 0013D200  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 801402C4 0013D204  28 00 00 01 */	cmplwi r0, 1
/* 801402C8 0013D208  40 82 00 0C */	bne .L_801402D4
/* 801402CC 0013D20C  C0 02 A0 0C */	lfs f0, lbl_8051836C@sda21(r2)
/* 801402D0 0013D210  FC 20 00 90 */	fmr f1, f0
.L_801402D4:
/* 801402D4 0013D214  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 801402D8 0013D218  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 801402DC 0013D21C  D0 3E 01 70 */	stfs f1, 0x170(r30)
/* 801402E0 0013D220  80 7E 02 98 */	lwz r3, 0x298(r30)
/* 801402E4 0013D224  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 801402E8 0013D228  81 83 00 00 */	lwz r12, 0(r3)
/* 801402EC 0013D22C  1F E0 00 14 */	mulli r31, r0, 0x14
/* 801402F0 0013D230  80 0D 92 E0 */	lwz r0, naviMgr__4Game@sda21(r13)
/* 801402F4 0013D234  81 8C 00 08 */	lwz r12, 8(r12)
/* 801402F8 0013D238  38 9F 00 60 */	addi r4, r31, 0x60
/* 801402FC 0013D23C  7C 80 22 14 */	add r4, r0, r4
/* 80140300 0013D240  7D 89 03 A6 */	mtctr r12
/* 80140304 0013D244  4E 80 04 21 */	bctrl 
/* 80140308 0013D248  80 7E 02 9C */	lwz r3, 0x29c(r30)
/* 8014030C 0013D24C  38 9F 00 88 */	addi r4, r31, 0x88
/* 80140310 0013D250  80 0D 92 E0 */	lwz r0, naviMgr__4Game@sda21(r13)
/* 80140314 0013D254  81 83 00 00 */	lwz r12, 0(r3)
/* 80140318 0013D258  7C 80 22 14 */	add r4, r0, r4
/* 8014031C 0013D25C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140320 0013D260  7D 89 03 A6 */	mtctr r12
/* 80140324 0013D264  4E 80 04 21 */	bctrl 
/* 80140328 0013D268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014032C 0013D26C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140330 0013D270  83 C1 00 08 */	lwz r30, 8(r1)
/* 80140334 0013D274  7C 08 03 A6 */	mtlr r0
/* 80140338 0013D278  38 21 00 10 */	addi r1, r1, 0x10
/* 8014033C 0013D27C  4E 80 00 20 */	blr 
.endfn onInit__Q24Game4NaviFPQ24Game15CreatureInitArg

.fn getCreatureID__Q24Game4NaviFv, weak
/* 80140340 0013D280  A0 63 02 DC */	lhz r3, 0x2dc(r3)
/* 80140344 0013D284  4E 80 00 20 */	blr 
.endfn getCreatureID__Q24Game4NaviFv

.fn "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg", weak
/* 80140348 0013D288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014034C 0013D28C  7C 08 02 A6 */	mflr r0
/* 80140350 0013D290  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140354 0013D294  38 00 00 00 */	li r0, 0
/* 80140358 0013D298  90 04 02 74 */	stw r0, 0x274(r4)
/* 8014035C 0013D29C  81 83 00 00 */	lwz r12, 0(r3)
/* 80140360 0013D2A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140364 0013D2A4  7D 89 03 A6 */	mtctr r12
/* 80140368 0013D2A8  4E 80 04 21 */	bctrl 
/* 8014036C 0013D2AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140370 0013D2B0  7C 08 03 A6 */	mtlr r0
/* 80140374 0013D2B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80140378 0013D2B8  4E 80 00 20 */	blr 
.endfn "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"

.fn "onSetPosition__Q24Game4NaviFR10Vector3<f>", global
/* 8014037C 0013D2BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140380 0013D2C0  7C 08 02 A6 */	mflr r0
/* 80140384 0013D2C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140388 0013D2C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014038C 0013D2CC  7C 7F 1B 78 */	mr r31, r3
/* 80140390 0013D2D0  C0 04 00 00 */	lfs f0, 0(r4)
/* 80140394 0013D2D4  D0 03 02 0C */	stfs f0, 0x20c(r3)
/* 80140398 0013D2D8  C0 04 00 04 */	lfs f0, 4(r4)
/* 8014039C 0013D2DC  D0 03 02 10 */	stfs f0, 0x210(r3)
/* 801403A0 0013D2E0  C0 04 00 08 */	lfs f0, 8(r4)
/* 801403A4 0013D2E4  D0 03 02 14 */	stfs f0, 0x214(r3)
/* 801403A8 0013D2E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801403AC 0013D2EC  81 8C 02 18 */	lwz r12, 0x218(r12)
/* 801403B0 0013D2F0  7D 89 03 A6 */	mtctr r12
/* 801403B4 0013D2F4  4E 80 04 21 */	bctrl 
/* 801403B8 0013D2F8  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 801403BC 0013D2FC  28 00 00 00 */	cmplwi r0, 0
/* 801403C0 0013D300  40 82 00 18 */	bne .L_801403D8
/* 801403C4 0013D304  7F E3 FB 78 */	mr r3, r31
/* 801403C8 0013D308  38 80 00 0E */	li r4, 0xe
/* 801403CC 0013D30C  38 A0 00 00 */	li r5, 0
/* 801403D0 0013D310  48 0D E1 B5 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 801403D4 0013D314  48 00 00 14 */	b .L_801403E8
.L_801403D8:
/* 801403D8 0013D318  7F E3 FB 78 */	mr r3, r31
/* 801403DC 0013D31C  38 80 00 0D */	li r4, 0xd
/* 801403E0 0013D320  38 A0 00 00 */	li r5, 0
/* 801403E4 0013D324  48 0D E1 A1 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
.L_801403E8:
/* 801403E8 0013D328  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801403EC 0013D32C  48 02 4C D1 */	bl init__Q24Game11NaviWhistleFv
/* 801403F0 0013D330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801403F4 0013D334  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801403F8 0013D338  7C 08 03 A6 */	mtlr r0
/* 801403FC 0013D33C  38 21 00 10 */	addi r1, r1, 0x10
/* 80140400 0013D340  4E 80 00 20 */	blr 
.endfn "onSetPosition__Q24Game4NaviFR10Vector3<f>"

.fn onKill__Q24Game4NaviFPQ24Game15CreatureKillArg, global
/* 80140404 0013D344  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140408 0013D348  7C 08 02 A6 */	mflr r0
/* 8014040C 0013D34C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140410 0013D350  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80140414 0013D354  7C 7F 1B 78 */	mr r31, r3
/* 80140418 0013D358  4B FF CA 35 */	bl killFakePiki__Q24Game8FakePikiFv
/* 8014041C 0013D35C  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80140420 0013D360  80 03 00 00 */	lwz r0, 0(r3)
/* 80140424 0013D364  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80140428 0013D368  90 03 00 00 */	stw r0, 0(r3)
/* 8014042C 0013D36C  48 27 7D 49 */	bl killLight___Q23efx11TNaviEffectFv
/* 80140430 0013D370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140434 0013D374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140438 0013D378  7C 08 03 A6 */	mtlr r0
/* 8014043C 0013D37C  38 21 00 10 */	addi r1, r1, 0x10
/* 80140440 0013D380  4E 80 00 20 */	blr 
.endfn onKill__Q24Game4NaviFPQ24Game15CreatureKillArg

.fn onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent, global
/* 80140444 0013D384  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80140448 0013D388  7C 08 02 A6 */	mflr r0
/* 8014044C 0013D38C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80140450 0013D390  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80140454 0013D394  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80140458 0013D398  7C 9E 23 78 */	mr r30, r4
/* 8014045C 0013D39C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80140460 0013D3A0  7C 7D 1B 78 */	mr r29, r3
/* 80140464 0013D3A4  80 63 02 74 */	lwz r3, 0x274(r3)
/* 80140468 0013D3A8  28 03 00 00 */	cmplwi r3, 0
/* 8014046C 0013D3AC  41 82 00 1C */	beq .L_80140488
/* 80140470 0013D3B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80140474 0013D3B4  7F A4 EB 78 */	mr r4, r29
/* 80140478 0013D3B8  7F C5 F3 78 */	mr r5, r30
/* 8014047C 0013D3BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80140480 0013D3C0  7D 89 03 A6 */	mtctr r12
/* 80140484 0013D3C4  4E 80 04 21 */	bctrl 
.L_80140488:
/* 80140488 0013D3C8  80 7D 02 48 */	lwz r3, 0x248(r29)
/* 8014048C 0013D3CC  28 03 00 00 */	cmplwi r3, 0
/* 80140490 0013D3D0  41 82 00 6C */	beq .L_801404FC
/* 80140494 0013D3D4  38 63 00 5C */	addi r3, r3, 0x5c
/* 80140498 0013D3D8  48 2D BF 9D */	bl getAttribute__Q27MapCode4CodeFv
/* 8014049C 0013D3DC  7C 60 1B 78 */	mr r0, r3
/* 801404A0 0013D3E0  7F A3 EB 78 */	mr r3, r29
/* 801404A4 0013D3E4  81 9D 00 00 */	lwz r12, 0(r29)
/* 801404A8 0013D3E8  7C 1F 03 78 */	mr r31, r0
/* 801404AC 0013D3EC  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801404B0 0013D3F0  7D 89 03 A6 */	mtctr r12
/* 801404B4 0013D3F4  4E 80 04 21 */	bctrl 
/* 801404B8 0013D3F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801404BC 0013D3FC  41 82 00 08 */	beq .L_801404C4
/* 801404C0 0013D400  3B E0 00 04 */	li r31, 4
.L_801404C4:
/* 801404C4 0013D404  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 801404C8 0013D408  28 00 00 C8 */	cmplwi r0, 0xc8
/* 801404CC 0013D40C  40 82 00 18 */	bne .L_801404E4
/* 801404D0 0013D410  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 801404D4 0013D414  7F E5 FB 78 */	mr r5, r31
/* 801404D8 0013D418  38 80 08 40 */	li r4, 0x840
/* 801404DC 0013D41C  48 32 2A 29 */	bl playWalkSound__Q23PSM4NaviFQ33PSM4Navi8FootTypei
/* 801404E0 0013D420  48 00 00 1C */	b .L_801404FC
.L_801404E4:
/* 801404E4 0013D424  28 00 00 C9 */	cmplwi r0, 0xc9
/* 801404E8 0013D428  40 82 00 14 */	bne .L_801404FC
/* 801404EC 0013D42C  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 801404F0 0013D430  7F E5 FB 78 */	mr r5, r31
/* 801404F4 0013D434  38 80 08 20 */	li r4, 0x820
/* 801404F8 0013D438  48 32 2A 0D */	bl playWalkSound__Q23PSM4NaviFQ33PSM4Navi8FootTypei
.L_801404FC:
/* 801404FC 0013D43C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80140500 0013D440  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80140504 0013D444  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80140508 0013D448  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014050C 0013D44C  7C 08 03 A6 */	mtlr r0
/* 80140510 0013D450  38 21 00 20 */	addi r1, r1, 0x20
/* 80140514 0013D454  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent

.fn onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, weak
/* 80140518 0013D458  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn getPosition__Q24Game4NaviFv, global
/* 8014051C 0013D45C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140520 0013D460  7C 08 02 A6 */	mflr r0
/* 80140524 0013D464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140528 0013D468  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014052C 0013D46C  7C 7F 1B 78 */	mr r31, r3
/* 80140530 0013D470  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80140534 0013D474  28 05 00 00 */	cmplwi r5, 0
/* 80140538 0013D478  41 82 00 38 */	beq .L_80140570
/* 8014053C 0013D47C  80 05 01 F0 */	lwz r0, 0x1f0(r5)
/* 80140540 0013D480  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80140544 0013D484  41 82 00 2C */	beq .L_80140570
/* 80140548 0013D488  80 64 01 74 */	lwz r3, 0x174(r4)
/* 8014054C 0013D48C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80140550 0013D490  48 2E 93 51 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80140554 0013D494  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80140558 0013D498  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8014055C 0013D49C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80140560 0013D4A0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80140564 0013D4A4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80140568 0013D4A8  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8014056C 0013D4AC  48 00 00 1C */	b .L_80140588
.L_80140570:
/* 80140570 0013D4B0  C0 04 02 0C */	lfs f0, 0x20c(r4)
/* 80140574 0013D4B4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80140578 0013D4B8  C0 04 02 10 */	lfs f0, 0x210(r4)
/* 8014057C 0013D4BC  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80140580 0013D4C0  C0 04 02 14 */	lfs f0, 0x214(r4)
/* 80140584 0013D4C4  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80140588:
/* 80140588 0013D4C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014058C 0013D4CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140590 0013D4D0  7C 08 03 A6 */	mtlr r0
/* 80140594 0013D4D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80140598 0013D4D8  4E 80 00 20 */	blr 
.endfn getPosition__Q24Game4NaviFv

.fn onStickStart__Q24Game4NaviFPQ24Game8Creature, global
/* 8014059C 0013D4DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801405A0 0013D4E0  7C 08 02 A6 */	mflr r0
/* 801405A4 0013D4E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801405A8 0013D4E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801405AC 0013D4EC  7C 7F 1B 78 */	mr r31, r3
/* 801405B0 0013D4F0  7C 83 23 78 */	mr r3, r4
/* 801405B4 0013D4F4  81 84 00 00 */	lwz r12, 0(r4)
/* 801405B8 0013D4F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801405BC 0013D4FC  7D 89 03 A6 */	mtctr r12
/* 801405C0 0013D500  4E 80 04 21 */	bctrl 
/* 801405C4 0013D504  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801405C8 0013D508  41 82 00 10 */	beq .L_801405D8
/* 801405CC 0013D50C  88 7F 02 59 */	lbz r3, 0x259(r31)
/* 801405D0 0013D510  38 03 00 01 */	addi r0, r3, 1
/* 801405D4 0013D514  98 1F 02 59 */	stb r0, 0x259(r31)
.L_801405D8:
/* 801405D8 0013D518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801405DC 0013D51C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801405E0 0013D520  7C 08 03 A6 */	mtlr r0
/* 801405E4 0013D524  38 21 00 10 */	addi r1, r1, 0x10
/* 801405E8 0013D528  4E 80 00 20 */	blr 
.endfn onStickStart__Q24Game4NaviFPQ24Game8Creature

.fn onStickEnd__Q24Game4NaviFPQ24Game8Creature, global
/* 801405EC 0013D52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801405F0 0013D530  7C 08 02 A6 */	mflr r0
/* 801405F4 0013D534  90 01 00 14 */	stw r0, 0x14(r1)
/* 801405F8 0013D538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801405FC 0013D53C  7C 7F 1B 78 */	mr r31, r3
/* 80140600 0013D540  7C 83 23 78 */	mr r3, r4
/* 80140604 0013D544  81 84 00 00 */	lwz r12, 0(r4)
/* 80140608 0013D548  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014060C 0013D54C  7D 89 03 A6 */	mtctr r12
/* 80140610 0013D550  4E 80 04 21 */	bctrl 
/* 80140614 0013D554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140618 0013D558  41 82 00 18 */	beq .L_80140630
/* 8014061C 0013D55C  88 7F 02 59 */	lbz r3, 0x259(r31)
/* 80140620 0013D560  28 03 00 00 */	cmplwi r3, 0
/* 80140624 0013D564  41 82 00 0C */	beq .L_80140630
/* 80140628 0013D568  38 03 FF FF */	addi r0, r3, -1
/* 8014062C 0013D56C  98 1F 02 59 */	stb r0, 0x259(r31)
.L_80140630:
/* 80140630 0013D570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140634 0013D574  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140638 0013D578  7C 08 03 A6 */	mtlr r0
/* 8014063C 0013D57C  38 21 00 10 */	addi r1, r1, 0x10
/* 80140640 0013D580  4E 80 00 20 */	blr 
.endfn onStickEnd__Q24Game4NaviFPQ24Game8Creature

.fn procActionButton__Q24Game4NaviFv, global
/* 80140644 0013D584  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80140648 0013D588  7C 08 02 A6 */	mflr r0
/* 8014064C 0013D58C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80140650 0013D590  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80140654 0013D594  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80140658 0013D598  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8014065C 0013D59C  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80140660 0013D5A0  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 80140664 0013D5A4  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80140668 0013D5A8  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 8014066C 0013D5AC  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 80140670 0013D5B0  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 80140674 0013D5B4  7C 7F 1B 78 */	mr r31, r3
/* 80140678 0013D5B8  88 03 02 6A */	lbz r0, 0x26a(r3)
/* 8014067C 0013D5BC  28 00 00 00 */	cmplwi r0, 0
/* 80140680 0013D5C0  41 82 00 14 */	beq .L_80140694
/* 80140684 0013D5C4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80140688 0013D5C8  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8014068C 0013D5CC  C3 83 02 C8 */	lfs f28, 0x2c8(r3)
/* 80140690 0013D5D0  48 00 00 10 */	b .L_801406A0
.L_80140694:
/* 80140694 0013D5D4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80140698 0013D5D8  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8014069C 0013D5DC  C3 83 02 A0 */	lfs f28, 0x2a0(r3)
.L_801406A0:
/* 801406A0 0013D5E0  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 801406A4 0013D5E4  28 03 00 00 */	cmplwi r3, 0
/* 801406A8 0013D5E8  41 82 00 08 */	beq .L_801406B0
/* 801406AC 0013D5EC  38 63 00 30 */	addi r3, r3, 0x30
.L_801406B0:
/* 801406B0 0013D5F0  38 00 00 00 */	li r0, 0
/* 801406B4 0013D5F4  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 801406B8 0013D5F8  38 84 05 A4 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 801406BC 0013D5FC  EF 9C 07 32 */	fmuls f28, f28, f28
/* 801406C0 0013D600  28 00 00 00 */	cmplwi r0, 0
/* 801406C4 0013D604  90 81 00 38 */	stw r4, 0x38(r1)
/* 801406C8 0013D608  3B C0 00 00 */	li r30, 0
/* 801406CC 0013D60C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801406D0 0013D610  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801406D4 0013D614  90 61 00 40 */	stw r3, 0x40(r1)
/* 801406D8 0013D618  40 82 00 1C */	bne .L_801406F4
/* 801406DC 0013D61C  81 83 00 00 */	lwz r12, 0(r3)
/* 801406E0 0013D620  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801406E4 0013D624  7D 89 03 A6 */	mtctr r12
/* 801406E8 0013D628  4E 80 04 21 */	bctrl 
/* 801406EC 0013D62C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801406F0 0013D630  48 00 02 1C */	b .L_8014090C
.L_801406F4:
/* 801406F4 0013D634  81 83 00 00 */	lwz r12, 0(r3)
/* 801406F8 0013D638  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801406FC 0013D63C  7D 89 03 A6 */	mtctr r12
/* 80140700 0013D640  4E 80 04 21 */	bctrl 
/* 80140704 0013D644  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80140708 0013D648  48 00 00 58 */	b .L_80140760
.L_8014070C:
/* 8014070C 0013D64C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140710 0013D650  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140714 0013D654  81 83 00 00 */	lwz r12, 0(r3)
/* 80140718 0013D658  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014071C 0013D65C  7D 89 03 A6 */	mtctr r12
/* 80140720 0013D660  4E 80 04 21 */	bctrl 
/* 80140724 0013D664  7C 64 1B 78 */	mr r4, r3
/* 80140728 0013D668  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014072C 0013D66C  81 83 00 00 */	lwz r12, 0(r3)
/* 80140730 0013D670  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140734 0013D674  7D 89 03 A6 */	mtctr r12
/* 80140738 0013D678  4E 80 04 21 */	bctrl 
/* 8014073C 0013D67C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140740 0013D680  40 82 01 CC */	bne .L_8014090C
/* 80140744 0013D684  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140748 0013D688  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8014074C 0013D68C  81 83 00 00 */	lwz r12, 0(r3)
/* 80140750 0013D690  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140754 0013D694  7D 89 03 A6 */	mtctr r12
/* 80140758 0013D698  4E 80 04 21 */	bctrl 
/* 8014075C 0013D69C  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80140760:
/* 80140760 0013D6A0  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80140764 0013D6A4  38 61 00 38 */	addi r3, r1, 0x38
/* 80140768 0013D6A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014076C 0013D6AC  7D 89 03 A6 */	mtctr r12
/* 80140770 0013D6B0  4E 80 04 21 */	bctrl 
/* 80140774 0013D6B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140778 0013D6B8  41 82 FF 94 */	beq .L_8014070C
/* 8014077C 0013D6BC  48 00 01 90 */	b .L_8014090C
.L_80140780:
/* 80140780 0013D6C0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140784 0013D6C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80140788 0013D6C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014078C 0013D6CC  7D 89 03 A6 */	mtctr r12
/* 80140790 0013D6D0  4E 80 04 21 */	bctrl 
/* 80140794 0013D6D4  7C 60 1B 78 */	mr r0, r3
/* 80140798 0013D6D8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014079C 0013D6DC  7C 04 03 78 */	mr r4, r0
/* 801407A0 0013D6E0  81 84 00 00 */	lwz r12, 0(r4)
/* 801407A4 0013D6E4  7C 9C 23 78 */	mr r28, r4
/* 801407A8 0013D6E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801407AC 0013D6EC  7D 89 03 A6 */	mtctr r12
/* 801407B0 0013D6F0  4E 80 04 21 */	bctrl 
/* 801407B4 0013D6F4  7F E4 FB 78 */	mr r4, r31
/* 801407B8 0013D6F8  38 61 00 20 */	addi r3, r1, 0x20
/* 801407BC 0013D6FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801407C0 0013D700  C3 E1 00 2C */	lfs f31, 0x2c(r1)
/* 801407C4 0013D704  81 8C 00 08 */	lwz r12, 8(r12)
/* 801407C8 0013D708  C3 C1 00 30 */	lfs f30, 0x30(r1)
/* 801407CC 0013D70C  C3 A1 00 34 */	lfs f29, 0x34(r1)
/* 801407D0 0013D710  7D 89 03 A6 */	mtctr r12
/* 801407D4 0013D714  4E 80 04 21 */	bctrl 
/* 801407D8 0013D718  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801407DC 0013D71C  7F 83 E3 78 */	mr r3, r28
/* 801407E0 0013D720  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801407E4 0013D724  EC 7E 08 28 */	fsubs f3, f30, f1
/* 801407E8 0013D728  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 801407EC 0013D72C  EC 1D 00 28 */	fsubs f0, f29, f0
/* 801407F0 0013D730  EC 5F 08 28 */	fsubs f2, f31, f1
/* 801407F4 0013D734  FC 20 1A 10 */	fabs f1, f3
/* 801407F8 0013D738  EC 00 00 32 */	fmuls f0, f0, f0
/* 801407FC 0013D73C  FF E0 08 18 */	frsp f31, f1
/* 80140800 0013D740  EF A2 00 BA */	fmadds f29, f2, f2, f0
/* 80140804 0013D744  48 09 9C 8D */	bl canPullout__Q34Game12ItemPikihead4ItemFv
/* 80140808 0013D748  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014080C 0013D74C  41 82 00 44 */	beq .L_80140850
/* 80140810 0013D750  FC 1D E0 40 */	fcmpo cr0, f29, f28
/* 80140814 0013D754  40 80 00 3C */	bge .L_80140850
/* 80140818 0013D758  C0 02 A0 10 */	lfs f0, lbl_80518370@sda21(r2)
/* 8014081C 0013D75C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80140820 0013D760  40 80 00 30 */	bge .L_80140850
/* 80140824 0013D764  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80140828 0013D768  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014082C 0013D76C  2C 00 00 01 */	cmpwi r0, 1
/* 80140830 0013D770  40 82 00 18 */	bne .L_80140848
/* 80140834 0013D774  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 80140838 0013D778  A0 7C 01 F4 */	lhz r3, 0x1f4(r28)
/* 8014083C 0013D77C  20 00 00 01 */	subfic r0, r0, 1
/* 80140840 0013D780  7C 03 00 00 */	cmpw r3, r0
/* 80140844 0013D784  40 82 00 0C */	bne .L_80140850
.L_80140848:
/* 80140848 0013D788  FF 80 E8 90 */	fmr f28, f29
/* 8014084C 0013D78C  7F 9E E3 78 */	mr r30, r28
.L_80140850:
/* 80140850 0013D790  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80140854 0013D794  28 00 00 00 */	cmplwi r0, 0
/* 80140858 0013D798  40 82 00 24 */	bne .L_8014087C
/* 8014085C 0013D79C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140860 0013D7A0  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140864 0013D7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80140868 0013D7A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014086C 0013D7AC  7D 89 03 A6 */	mtctr r12
/* 80140870 0013D7B0  4E 80 04 21 */	bctrl 
/* 80140874 0013D7B4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80140878 0013D7B8  48 00 00 94 */	b .L_8014090C
.L_8014087C:
/* 8014087C 0013D7BC  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140880 0013D7C0  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140884 0013D7C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80140888 0013D7C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014088C 0013D7CC  7D 89 03 A6 */	mtctr r12
/* 80140890 0013D7D0  4E 80 04 21 */	bctrl 
/* 80140894 0013D7D4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80140898 0013D7D8  48 00 00 58 */	b .L_801408F0
.L_8014089C:
/* 8014089C 0013D7DC  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801408A0 0013D7E0  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801408A4 0013D7E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801408A8 0013D7E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801408AC 0013D7EC  7D 89 03 A6 */	mtctr r12
/* 801408B0 0013D7F0  4E 80 04 21 */	bctrl 
/* 801408B4 0013D7F4  7C 64 1B 78 */	mr r4, r3
/* 801408B8 0013D7F8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801408BC 0013D7FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801408C0 0013D800  81 8C 00 08 */	lwz r12, 8(r12)
/* 801408C4 0013D804  7D 89 03 A6 */	mtctr r12
/* 801408C8 0013D808  4E 80 04 21 */	bctrl 
/* 801408CC 0013D80C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801408D0 0013D810  40 82 00 3C */	bne .L_8014090C
/* 801408D4 0013D814  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801408D8 0013D818  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801408DC 0013D81C  81 83 00 00 */	lwz r12, 0(r3)
/* 801408E0 0013D820  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801408E4 0013D824  7D 89 03 A6 */	mtctr r12
/* 801408E8 0013D828  4E 80 04 21 */	bctrl 
/* 801408EC 0013D82C  90 61 00 3C */	stw r3, 0x3c(r1)
.L_801408F0:
/* 801408F0 0013D830  81 81 00 38 */	lwz r12, 0x38(r1)
/* 801408F4 0013D834  38 61 00 38 */	addi r3, r1, 0x38
/* 801408F8 0013D838  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801408FC 0013D83C  7D 89 03 A6 */	mtctr r12
/* 80140900 0013D840  4E 80 04 21 */	bctrl 
/* 80140904 0013D844  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140908 0013D848  41 82 FF 94 */	beq .L_8014089C
.L_8014090C:
/* 8014090C 0013D84C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140910 0013D850  81 83 00 00 */	lwz r12, 0(r3)
/* 80140914 0013D854  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80140918 0013D858  7D 89 03 A6 */	mtctr r12
/* 8014091C 0013D85C  4E 80 04 21 */	bctrl 
/* 80140920 0013D860  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140924 0013D864  7C 04 18 40 */	cmplw r4, r3
/* 80140928 0013D868  40 82 FE 58 */	bne .L_80140780
/* 8014092C 0013D86C  28 1E 00 00 */	cmplwi r30, 0
/* 80140930 0013D870  41 82 03 30 */	beq .L_80140C60
/* 80140934 0013D874  38 00 00 00 */	li r0, 0
/* 80140938 0013D878  7F E3 FB 78 */	mr r3, r31
/* 8014093C 0013D87C  98 01 00 7C */	stb r0, 0x7c(r1)
/* 80140940 0013D880  7F C4 F3 78 */	mr r4, r30
/* 80140944 0013D884  38 A1 00 64 */	addi r5, r1, 0x64
/* 80140948 0013D888  48 00 03 AD */	bl setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg
/* 8014094C 0013D88C  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 80140950 0013D890  7F E4 FB 78 */	mr r4, r31
/* 80140954 0013D894  38 C1 00 64 */	addi r6, r1, 0x64
/* 80140958 0013D898  38 A0 00 09 */	li r5, 9
/* 8014095C 0013D89C  81 83 00 00 */	lwz r12, 0(r3)
/* 80140960 0013D8A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140964 0013D8A4  7D 89 03 A6 */	mtctr r12
/* 80140968 0013D8A8  4E 80 04 21 */	bctrl 
/* 8014096C 0013D8AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80140970 0013D8B0  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 80140974 0013D8B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80140978 0013D8B8  20 80 00 01 */	subfic r4, r0, 1
/* 8014097C 0013D8BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80140980 0013D8C0  7D 89 03 A6 */	mtctr r12
/* 80140984 0013D8C4  4E 80 04 21 */	bctrl 
/* 80140988 0013D8C8  7C 7D 1B 79 */	or. r29, r3, r3
/* 8014098C 0013D8CC  41 82 02 CC */	beq .L_80140C58
/* 80140990 0013D8D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80140994 0013D8D4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80140998 0013D8D8  7D 89 03 A6 */	mtctr r12
/* 8014099C 0013D8DC  4E 80 04 21 */	bctrl 
/* 801409A0 0013D8E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801409A4 0013D8E4  41 82 02 B4 */	beq .L_80140C58
/* 801409A8 0013D8E8  7F A3 EB 78 */	mr r3, r29
/* 801409AC 0013D8EC  48 00 0A 99 */	bl getStateID__Q24Game4NaviFv
/* 801409B0 0013D8F0  2C 03 00 01 */	cmpwi r3, 1
/* 801409B4 0013D8F4  40 82 02 A4 */	bne .L_80140C58
/* 801409B8 0013D8F8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801409BC 0013D8FC  3B 80 00 00 */	li r28, 0
/* 801409C0 0013D900  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801409C4 0013D904  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 801409C8 0013D908  28 00 00 00 */	cmplwi r0, 0
/* 801409CC 0013D90C  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 801409D0 0013D910  EF 80 00 32 */	fmuls f28, f0, f0
/* 801409D4 0013D914  40 82 00 20 */	bne .L_801409F4
/* 801409D8 0013D918  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801409DC 0013D91C  81 83 00 00 */	lwz r12, 0(r3)
/* 801409E0 0013D920  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801409E4 0013D924  7D 89 03 A6 */	mtctr r12
/* 801409E8 0013D928  4E 80 04 21 */	bctrl 
/* 801409EC 0013D92C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801409F0 0013D930  48 00 02 00 */	b .L_80140BF0
.L_801409F4:
/* 801409F4 0013D934  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801409F8 0013D938  81 83 00 00 */	lwz r12, 0(r3)
/* 801409FC 0013D93C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80140A00 0013D940  7D 89 03 A6 */	mtctr r12
/* 80140A04 0013D944  4E 80 04 21 */	bctrl 
/* 80140A08 0013D948  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80140A0C 0013D94C  48 00 00 58 */	b .L_80140A64
.L_80140A10:
/* 80140A10 0013D950  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140A14 0013D954  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140A18 0013D958  81 83 00 00 */	lwz r12, 0(r3)
/* 80140A1C 0013D95C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80140A20 0013D960  7D 89 03 A6 */	mtctr r12
/* 80140A24 0013D964  4E 80 04 21 */	bctrl 
/* 80140A28 0013D968  7C 64 1B 78 */	mr r4, r3
/* 80140A2C 0013D96C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80140A30 0013D970  81 83 00 00 */	lwz r12, 0(r3)
/* 80140A34 0013D974  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140A38 0013D978  7D 89 03 A6 */	mtctr r12
/* 80140A3C 0013D97C  4E 80 04 21 */	bctrl 
/* 80140A40 0013D980  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140A44 0013D984  40 82 01 AC */	bne .L_80140BF0
/* 80140A48 0013D988  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140A4C 0013D98C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140A50 0013D990  81 83 00 00 */	lwz r12, 0(r3)
/* 80140A54 0013D994  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140A58 0013D998  7D 89 03 A6 */	mtctr r12
/* 80140A5C 0013D99C  4E 80 04 21 */	bctrl 
/* 80140A60 0013D9A0  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80140A64:
/* 80140A64 0013D9A4  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80140A68 0013D9A8  38 61 00 38 */	addi r3, r1, 0x38
/* 80140A6C 0013D9AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80140A70 0013D9B0  7D 89 03 A6 */	mtctr r12
/* 80140A74 0013D9B4  4E 80 04 21 */	bctrl 
/* 80140A78 0013D9B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140A7C 0013D9BC  41 82 FF 94 */	beq .L_80140A10
/* 80140A80 0013D9C0  48 00 01 70 */	b .L_80140BF0
.L_80140A84:
/* 80140A84 0013D9C4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140A88 0013D9C8  81 83 00 00 */	lwz r12, 0(r3)
/* 80140A8C 0013D9CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80140A90 0013D9D0  7D 89 03 A6 */	mtctr r12
/* 80140A94 0013D9D4  4E 80 04 21 */	bctrl 
/* 80140A98 0013D9D8  7C 7B 1B 78 */	mr r27, r3
/* 80140A9C 0013D9DC  7C 1B F0 40 */	cmplw r27, r30
/* 80140AA0 0013D9E0  41 82 00 94 */	beq .L_80140B34
/* 80140AA4 0013D9E4  7C 64 1B 78 */	mr r4, r3
/* 80140AA8 0013D9E8  38 61 00 14 */	addi r3, r1, 0x14
/* 80140AAC 0013D9EC  81 84 00 00 */	lwz r12, 0(r4)
/* 80140AB0 0013D9F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140AB4 0013D9F4  7D 89 03 A6 */	mtctr r12
/* 80140AB8 0013D9F8  4E 80 04 21 */	bctrl 
/* 80140ABC 0013D9FC  7F E4 FB 78 */	mr r4, r31
/* 80140AC0 0013DA00  38 61 00 08 */	addi r3, r1, 8
/* 80140AC4 0013DA04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80140AC8 0013DA08  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 80140ACC 0013DA0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140AD0 0013DA10  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 80140AD4 0013DA14  C3 E1 00 1C */	lfs f31, 0x1c(r1)
/* 80140AD8 0013DA18  7D 89 03 A6 */	mtctr r12
/* 80140ADC 0013DA1C  4E 80 04 21 */	bctrl 
/* 80140AE0 0013DA20  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80140AE4 0013DA24  7F 63 DB 78 */	mr r3, r27
/* 80140AE8 0013DA28  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80140AEC 0013DA2C  EC 7E 08 28 */	fsubs f3, f30, f1
/* 80140AF0 0013DA30  C0 21 00 08 */	lfs f1, 8(r1)
/* 80140AF4 0013DA34  EC 1F 00 28 */	fsubs f0, f31, f0
/* 80140AF8 0013DA38  EC 5D 08 28 */	fsubs f2, f29, f1
/* 80140AFC 0013DA3C  FC 20 1A 10 */	fabs f1, f3
/* 80140B00 0013DA40  EC 00 00 32 */	fmuls f0, f0, f0
/* 80140B04 0013DA44  FF E0 08 18 */	frsp f31, f1
/* 80140B08 0013DA48  EF A2 00 BA */	fmadds f29, f2, f2, f0
/* 80140B0C 0013DA4C  48 09 99 85 */	bl canPullout__Q34Game12ItemPikihead4ItemFv
/* 80140B10 0013DA50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140B14 0013DA54  41 82 00 20 */	beq .L_80140B34
/* 80140B18 0013DA58  FC 1D E0 40 */	fcmpo cr0, f29, f28
/* 80140B1C 0013DA5C  40 80 00 18 */	bge .L_80140B34
/* 80140B20 0013DA60  C0 02 A0 10 */	lfs f0, lbl_80518370@sda21(r2)
/* 80140B24 0013DA64  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80140B28 0013DA68  40 80 00 0C */	bge .L_80140B34
/* 80140B2C 0013DA6C  FF 80 E8 90 */	fmr f28, f29
/* 80140B30 0013DA70  7F 7C DB 78 */	mr r28, r27
.L_80140B34:
/* 80140B34 0013DA74  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80140B38 0013DA78  28 00 00 00 */	cmplwi r0, 0
/* 80140B3C 0013DA7C  40 82 00 24 */	bne .L_80140B60
/* 80140B40 0013DA80  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140B44 0013DA84  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140B48 0013DA88  81 83 00 00 */	lwz r12, 0(r3)
/* 80140B4C 0013DA8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140B50 0013DA90  7D 89 03 A6 */	mtctr r12
/* 80140B54 0013DA94  4E 80 04 21 */	bctrl 
/* 80140B58 0013DA98  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80140B5C 0013DA9C  48 00 00 94 */	b .L_80140BF0
.L_80140B60:
/* 80140B60 0013DAA0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140B64 0013DAA4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140B68 0013DAA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80140B6C 0013DAAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140B70 0013DAB0  7D 89 03 A6 */	mtctr r12
/* 80140B74 0013DAB4  4E 80 04 21 */	bctrl 
/* 80140B78 0013DAB8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80140B7C 0013DABC  48 00 00 58 */	b .L_80140BD4
.L_80140B80:
/* 80140B80 0013DAC0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140B84 0013DAC4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140B88 0013DAC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80140B8C 0013DACC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80140B90 0013DAD0  7D 89 03 A6 */	mtctr r12
/* 80140B94 0013DAD4  4E 80 04 21 */	bctrl 
/* 80140B98 0013DAD8  7C 64 1B 78 */	mr r4, r3
/* 80140B9C 0013DADC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80140BA0 0013DAE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80140BA4 0013DAE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140BA8 0013DAE8  7D 89 03 A6 */	mtctr r12
/* 80140BAC 0013DAEC  4E 80 04 21 */	bctrl 
/* 80140BB0 0013DAF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140BB4 0013DAF4  40 82 00 3C */	bne .L_80140BF0
/* 80140BB8 0013DAF8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140BBC 0013DAFC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140BC0 0013DB00  81 83 00 00 */	lwz r12, 0(r3)
/* 80140BC4 0013DB04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140BC8 0013DB08  7D 89 03 A6 */	mtctr r12
/* 80140BCC 0013DB0C  4E 80 04 21 */	bctrl 
/* 80140BD0 0013DB10  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80140BD4:
/* 80140BD4 0013DB14  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80140BD8 0013DB18  38 61 00 38 */	addi r3, r1, 0x38
/* 80140BDC 0013DB1C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80140BE0 0013DB20  7D 89 03 A6 */	mtctr r12
/* 80140BE4 0013DB24  4E 80 04 21 */	bctrl 
/* 80140BE8 0013DB28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80140BEC 0013DB2C  41 82 FF 94 */	beq .L_80140B80
.L_80140BF0:
/* 80140BF0 0013DB30  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80140BF4 0013DB34  81 83 00 00 */	lwz r12, 0(r3)
/* 80140BF8 0013DB38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80140BFC 0013DB3C  7D 89 03 A6 */	mtctr r12
/* 80140C00 0013DB40  4E 80 04 21 */	bctrl 
/* 80140C04 0013DB44  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80140C08 0013DB48  7C 04 18 40 */	cmplw r4, r3
/* 80140C0C 0013DB4C  40 82 FE 78 */	bne .L_80140A84
/* 80140C10 0013DB50  28 1C 00 00 */	cmplwi r28, 0
/* 80140C14 0013DB54  41 82 00 44 */	beq .L_80140C58
/* 80140C18 0013DB58  38 00 00 00 */	li r0, 0
/* 80140C1C 0013DB5C  7F A3 EB 78 */	mr r3, r29
/* 80140C20 0013DB60  98 01 00 60 */	stb r0, 0x60(r1)
/* 80140C24 0013DB64  7F 84 E3 78 */	mr r4, r28
/* 80140C28 0013DB68  38 A1 00 48 */	addi r5, r1, 0x48
/* 80140C2C 0013DB6C  48 00 00 C9 */	bl setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg
/* 80140C30 0013DB70  38 00 00 01 */	li r0, 1
/* 80140C34 0013DB74  7F A4 EB 78 */	mr r4, r29
/* 80140C38 0013DB78  98 01 00 60 */	stb r0, 0x60(r1)
/* 80140C3C 0013DB7C  38 C1 00 48 */	addi r6, r1, 0x48
/* 80140C40 0013DB80  38 A0 00 09 */	li r5, 9
/* 80140C44 0013DB84  80 7D 02 70 */	lwz r3, 0x270(r29)
/* 80140C48 0013DB88  81 83 00 00 */	lwz r12, 0(r3)
/* 80140C4C 0013DB8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80140C50 0013DB90  7D 89 03 A6 */	mtctr r12
/* 80140C54 0013DB94  4E 80 04 21 */	bctrl 
.L_80140C58:
/* 80140C58 0013DB98  38 60 00 01 */	li r3, 1
/* 80140C5C 0013DB9C  48 00 00 08 */	b .L_80140C64
.L_80140C60:
/* 80140C60 0013DBA0  38 60 00 00 */	li r3, 0
.L_80140C64:
/* 80140C64 0013DBA4  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 80140C68 0013DBA8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80140C6C 0013DBAC  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 80140C70 0013DBB0  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80140C74 0013DBB4  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 80140C78 0013DBB8  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 80140C7C 0013DBBC  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 80140C80 0013DBC0  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 80140C84 0013DBC4  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 80140C88 0013DBC8  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80140C8C 0013DBCC  7C 08 03 A6 */	mtlr r0
/* 80140C90 0013DBD0  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80140C94 0013DBD4  4E 80 00 20 */	blr 
.endfn procActionButton__Q24Game4NaviFv

.fn "getAt__27MonoObjectMgr<Q24Game4Navi>Fi", weak
/* 80140C98 0013DBD8  1C 04 03 20 */	mulli r0, r4, 0x320
/* 80140C9C 0013DBDC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80140CA0 0013DBE0  7C 63 02 14 */	add r3, r3, r0
/* 80140CA4 0013DBE4  4E 80 00 20 */	blr 
.endfn "getAt__27MonoObjectMgr<Q24Game4Navi>Fi"

.fn "isDone__36Iterator<Q34Game12ItemPikihead4Item>Fv", weak
/* 80140CA8 0013DBE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140CAC 0013DBEC  7C 08 02 A6 */	mflr r0
/* 80140CB0 0013DBF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140CB4 0013DBF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80140CB8 0013DBF8  7C 7F 1B 78 */	mr r31, r3
/* 80140CBC 0013DBFC  80 63 00 08 */	lwz r3, 8(r3)
/* 80140CC0 0013DC00  81 83 00 00 */	lwz r12, 0(r3)
/* 80140CC4 0013DC04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80140CC8 0013DC08  7D 89 03 A6 */	mtctr r12
/* 80140CCC 0013DC0C  4E 80 04 21 */	bctrl 
/* 80140CD0 0013DC10  80 1F 00 04 */	lwz r0, 4(r31)
/* 80140CD4 0013DC14  7C 00 18 50 */	subf r0, r0, r3
/* 80140CD8 0013DC18  7C 00 00 34 */	cntlzw r0, r0
/* 80140CDC 0013DC1C  54 03 D9 7E */	srwi r3, r0, 5
/* 80140CE0 0013DC20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140CE4 0013DC24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140CE8 0013DC28  7C 08 03 A6 */	mtlr r0
/* 80140CEC 0013DC2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80140CF0 0013DC30  4E 80 00 20 */	blr 
.endfn "isDone__36Iterator<Q34Game12ItemPikihead4Item>Fv"

.fn setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg, global
/* 80140CF4 0013DC34  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80140CF8 0013DC38  7C 08 02 A6 */	mflr r0
/* 80140CFC 0013DC3C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80140D00 0013DC40  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80140D04 0013DC44  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80140D08 0013DC48  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80140D0C 0013DC4C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80140D10 0013DC50  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80140D14 0013DC54  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80140D18 0013DC58  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80140D1C 0013DC5C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80140D20 0013DC60  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80140D24 0013DC64  7C 7D 1B 78 */	mr r29, r3
/* 80140D28 0013DC68  7C 9E 23 78 */	mr r30, r4
/* 80140D2C 0013DC6C  7F A4 EB 78 */	mr r4, r29
/* 80140D30 0013DC70  7C BF 2B 78 */	mr r31, r5
/* 80140D34 0013DC74  81 9D 00 00 */	lwz r12, 0(r29)
/* 80140D38 0013DC78  38 61 00 08 */	addi r3, r1, 8
/* 80140D3C 0013DC7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140D40 0013DC80  7D 89 03 A6 */	mtctr r12
/* 80140D44 0013DC84  4E 80 04 21 */	bctrl 
/* 80140D48 0013DC88  7F C4 F3 78 */	mr r4, r30
/* 80140D4C 0013DC8C  38 61 00 14 */	addi r3, r1, 0x14
/* 80140D50 0013DC90  81 9E 00 00 */	lwz r12, 0(r30)
/* 80140D54 0013DC94  81 8C 00 08 */	lwz r12, 8(r12)
/* 80140D58 0013DC98  7D 89 03 A6 */	mtctr r12
/* 80140D5C 0013DC9C  4E 80 04 21 */	bctrl 
/* 80140D60 0013DCA0  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 80140D64 0013DCA4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80140D68 0013DCA8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80140D6C 0013DCAC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80140D70 0013DCB0  EF C3 10 28 */	fsubs f30, f3, f2
/* 80140D74 0013DCB4  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80140D78 0013DCB8  EF A1 00 28 */	fsubs f29, f1, f0
/* 80140D7C 0013DCBC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80140D80 0013DCC0  FC 40 F0 90 */	fmr f2, f30
/* 80140D84 0013DCC4  EF E3 00 28 */	fsubs f31, f3, f0
/* 80140D88 0013DCC8  FC 20 E8 90 */	fmr f1, f29
/* 80140D8C 0013DCCC  48 2D 0A 51 */	bl pikmin2_atan2f__Fff
/* 80140D90 0013DCD0  48 2D 0E 41 */	bl roundAng__Ff
/* 80140D94 0013DCD4  C0 5D 01 FC */	lfs f2, 0x1fc(r29)
/* 80140D98 0013DCD8  48 2D 0E 65 */	bl angDist__Fff
/* 80140D9C 0013DCDC  C0 42 9F EC */	lfs f2, lbl_8051834C@sda21(r2)
/* 80140DA0 0013DCE0  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80140DA4 0013DCE4  EC 21 10 24 */	fdivs f1, f1, f2
/* 80140DA8 0013DCE8  EC 1D 07 7A */	fmadds f0, f29, f29, f0
/* 80140DAC 0013DCEC  D0 3F 00 00 */	stfs f1, 0(r31)
/* 80140DB0 0013DCF0  EC 3E 07 BA */	fmadds f1, f30, f30, f0
/* 80140DB4 0013DCF4  48 2D 0A 51 */	bl pikmin2_sqrtf__Ff
/* 80140DB8 0013DCF8  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
/* 80140DBC 0013DCFC  38 00 00 02 */	li r0, 2
/* 80140DC0 0013DD00  C0 02 A0 18 */	lfs f0, lbl_80518378@sda21(r2)
/* 80140DC4 0013DD04  EC 42 08 24 */	fdivs f2, f2, f1
/* 80140DC8 0013DD08  C0 62 A0 14 */	lfs f3, lbl_80518374@sda21(r2)
/* 80140DCC 0013DD0C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80140DD0 0013DD10  EC 02 00 32 */	fmuls f0, f2, f0
/* 80140DD4 0013DD14  EC 43 00 32 */	fmuls f2, f3, f0
/* 80140DD8 0013DD18  EC 3D 00 B2 */	fmuls f1, f29, f2
/* 80140DDC 0013DD1C  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 80140DE0 0013DD20  EC 5E 00 B2 */	fmuls f2, f30, f2
/* 80140DE4 0013DD24  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80140DE8 0013DD28  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80140DEC 0013DD2C  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 80140DF0 0013DD30  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80140DF4 0013DD34  93 DF 00 14 */	stw r30, 0x14(r31)
/* 80140DF8 0013DD38  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80140DFC 0013DD3C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80140E00 0013DD40  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80140E04 0013DD44  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80140E08 0013DD48  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80140E0C 0013DD4C  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80140E10 0013DD50  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80140E14 0013DD54  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80140E18 0013DD58  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80140E1C 0013DD5C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80140E20 0013DD60  7C 08 03 A6 */	mtlr r0
/* 80140E24 0013DD64  38 21 00 60 */	addi r1, r1, 0x60
/* 80140E28 0013DD68  4E 80 00 20 */	blr 
.endfn setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg

.fn hasDope__Q24Game4NaviFi, global
/* 80140E2C 0013DD6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140E30 0013DD70  7C 08 02 A6 */	mflr r0
/* 80140E34 0013DD74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140E38 0013DD78  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80140E3C 0013DD7C  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80140E40 0013DD80  2C 00 00 01 */	cmpwi r0, 1
/* 80140E44 0013DD84  40 82 00 20 */	bne .L_80140E64
/* 80140E48 0013DD88  54 80 10 3A */	slwi r0, r4, 2
/* 80140E4C 0013DD8C  7C 63 02 14 */	add r3, r3, r0
/* 80140E50 0013DD90  80 63 02 5C */	lwz r3, 0x25c(r3)
/* 80140E54 0013DD94  7C 03 00 D0 */	neg r0, r3
/* 80140E58 0013DD98  7C 00 18 78 */	andc r0, r0, r3
/* 80140E5C 0013DD9C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80140E60 0013DDA0  48 00 00 0C */	b .L_80140E6C
.L_80140E64:
/* 80140E64 0013DDA4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80140E68 0013DDA8  48 0A 76 ED */	bl hasDope__Q24Game8PlayDataFi
.L_80140E6C:
/* 80140E6C 0013DDAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140E70 0013DDB0  7C 08 03 A6 */	mtlr r0
/* 80140E74 0013DDB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80140E78 0013DDB8  4E 80 00 20 */	blr 
.endfn hasDope__Q24Game4NaviFi

.fn getDopeCount__Q24Game4NaviFi, global
/* 80140E7C 0013DDBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140E80 0013DDC0  7C 08 02 A6 */	mflr r0
/* 80140E84 0013DDC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140E88 0013DDC8  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80140E8C 0013DDCC  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80140E90 0013DDD0  2C 00 00 01 */	cmpwi r0, 1
/* 80140E94 0013DDD4  40 82 00 14 */	bne .L_80140EA8
/* 80140E98 0013DDD8  54 80 10 3A */	slwi r0, r4, 2
/* 80140E9C 0013DDDC  7C 63 02 14 */	add r3, r3, r0
/* 80140EA0 0013DDE0  80 63 02 5C */	lwz r3, 0x25c(r3)
/* 80140EA4 0013DDE4  48 00 00 0C */	b .L_80140EB0
.L_80140EA8:
/* 80140EA8 0013DDE8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80140EAC 0013DDEC  48 0A 75 2D */	bl getDopeCount__Q24Game8PlayDataFi
.L_80140EB0:
/* 80140EB0 0013DDF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140EB4 0013DDF4  7C 08 03 A6 */	mtlr r0
/* 80140EB8 0013DDF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80140EBC 0013DDFC  4E 80 00 20 */	blr 
.endfn getDopeCount__Q24Game4NaviFi

.fn useDope__Q24Game4NaviFi, global
/* 80140EC0 0013DE00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140EC4 0013DE04  7C 08 02 A6 */	mflr r0
/* 80140EC8 0013DE08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80140ECC 0013DE0C  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80140ED0 0013DE10  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80140ED4 0013DE14  2C 00 00 01 */	cmpwi r0, 1
/* 80140ED8 0013DE18  40 82 00 1C */	bne .L_80140EF4
/* 80140EDC 0013DE1C  54 80 10 3A */	slwi r0, r4, 2
/* 80140EE0 0013DE20  7C 83 02 14 */	add r4, r3, r0
/* 80140EE4 0013DE24  80 64 02 5C */	lwz r3, 0x25c(r4)
/* 80140EE8 0013DE28  38 03 FF FF */	addi r0, r3, -1
/* 80140EEC 0013DE2C  90 04 02 5C */	stw r0, 0x25c(r4)
/* 80140EF0 0013DE30  48 00 00 0C */	b .L_80140EFC
.L_80140EF4:
/* 80140EF4 0013DE34  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80140EF8 0013DE38  48 0A 78 0D */	bl useDope__Q24Game8PlayDataFi
.L_80140EFC:
/* 80140EFC 0013DE3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140F00 0013DE40  7C 08 03 A6 */	mtlr r0
/* 80140F04 0013DE44  38 21 00 10 */	addi r1, r1, 0x10
/* 80140F08 0013DE48  4E 80 00 20 */	blr 
.endfn useDope__Q24Game4NaviFi

.fn incDopeCount__Q24Game4NaviFi, global
/* 80140F0C 0013DE4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80140F10 0013DE50  7C 08 02 A6 */	mflr r0
/* 80140F14 0013DE54  90 01 00 24 */	stw r0, 0x24(r1)
/* 80140F18 0013DE58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80140F1C 0013DE5C  7C 9F 23 78 */	mr r31, r4
/* 80140F20 0013DE60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80140F24 0013DE64  7C 7E 1B 78 */	mr r30, r3
/* 80140F28 0013DE68  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80140F2C 0013DE6C  80 06 00 44 */	lwz r0, 0x44(r6)
/* 80140F30 0013DE70  2C 00 00 01 */	cmpwi r0, 1
/* 80140F34 0013DE74  40 82 00 58 */	bne .L_80140F8C
/* 80140F38 0013DE78  A0 BE 02 DC */	lhz r5, 0x2dc(r30)
/* 80140F3C 0013DE7C  3C 60 80 4B */	lis r3, __vt__Q24Game11GameMessage@ha
/* 80140F40 0013DE80  38 03 05 90 */	addi r0, r3, __vt__Q24Game11GameMessage@l
/* 80140F44 0013DE84  3C 60 80 4B */	lis r3, __vt__Q24Game22GameMessageVsGetDoping@ha
/* 80140F48 0013DE88  90 01 00 08 */	stw r0, 8(r1)
/* 80140F4C 0013DE8C  38 03 61 BC */	addi r0, r3, __vt__Q24Game22GameMessageVsGetDoping@l
/* 80140F50 0013DE90  38 81 00 08 */	addi r4, r1, 8
/* 80140F54 0013DE94  90 01 00 08 */	stw r0, 8(r1)
/* 80140F58 0013DE98  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80140F5C 0013DE9C  93 E1 00 10 */	stw r31, 0x10(r1)
/* 80140F60 0013DEA0  80 66 00 58 */	lwz r3, 0x58(r6)
/* 80140F64 0013DEA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80140F68 0013DEA8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80140F6C 0013DEAC  7D 89 03 A6 */	mtctr r12
/* 80140F70 0013DEB0  4E 80 04 21 */	bctrl 
/* 80140F74 0013DEB4  57 E0 10 3A */	slwi r0, r31, 2
/* 80140F78 0013DEB8  7C 9E 02 14 */	add r4, r30, r0
/* 80140F7C 0013DEBC  80 64 02 5C */	lwz r3, 0x25c(r4)
/* 80140F80 0013DEC0  38 03 00 01 */	addi r0, r3, 1
/* 80140F84 0013DEC4  90 04 02 5C */	stw r0, 0x25c(r4)
/* 80140F88 0013DEC8  48 00 00 0C */	b .L_80140F94
.L_80140F8C:
/* 80140F8C 0013DECC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80140F90 0013DED0  48 0A 75 45 */	bl incDopeCount__Q24Game8PlayDataFi
.L_80140F94:
/* 80140F94 0013DED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80140F98 0013DED8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80140F9C 0013DEDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80140FA0 0013DEE0  7C 08 03 A6 */	mtlr r0
/* 80140FA4 0013DEE4  38 21 00 20 */	addi r1, r1, 0x20
/* 80140FA8 0013DEE8  4E 80 00 20 */	blr 
.endfn incDopeCount__Q24Game4NaviFi

.fn sendMessage__Q24Game15BaseGameSectionFRQ24Game11GameMessage, weak
/* 80140FAC 0013DEEC  38 60 00 00 */	li r3, 0
/* 80140FB0 0013DEF0  4E 80 00 20 */	blr 
.endfn sendMessage__Q24Game15BaseGameSectionFRQ24Game11GameMessage

.fn "applyDopes__Q24Game4NaviFiR10Vector3<f>", global
/* 80140FB4 0013DEF4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80140FB8 0013DEF8  7C 08 02 A6 */	mflr r0
/* 80140FBC 0013DEFC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80140FC0 0013DF00  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80140FC4 0013DF04  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80140FC8 0013DF08  7C 9E 23 78 */	mr r30, r4
/* 80140FCC 0013DF0C  2C 1E 00 01 */	cmpwi r30, 1
/* 80140FD0 0013DF10  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80140FD4 0013DF14  7C 7D 1B 78 */	mr r29, r3
/* 80140FD8 0013DF18  93 81 00 50 */	stw r28, 0x50(r1)
/* 80140FDC 0013DF1C  40 82 00 70 */	bne .L_8014104C
/* 80140FE0 0013DF20  C0 05 00 00 */	lfs f0, 0(r5)
/* 80140FE4 0013DF24  3C C0 80 4B */	lis r6, "__vt__32IDelegate1<PQ24Game10CellObject>"@ha
/* 80140FE8 0013DF28  3C 60 80 4B */	lis r3, lbl_804B04EC@ha
/* 80140FEC 0013DF2C  84 E3 04 EC */	lwzu r7, lbl_804B04EC@l(r3)
/* 80140FF0 0013DF30  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80140FF4 0013DF34  39 26 05 84 */	addi r9, r6, "__vt__32IDelegate1<PQ24Game10CellObject>"@l
/* 80140FF8 0013DF38  3C 80 80 4B */	lis r4, "__vt__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>"@ha
/* 80140FFC 0013DF3C  C0 02 A0 1C */	lfs f0, lbl_8051837C@sda21(r2)
/* 80141000 0013DF40  C0 25 00 04 */	lfs f1, 4(r5)
/* 80141004 0013DF44  39 04 05 78 */	addi r8, r4, "__vt__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>"@l
/* 80141008 0013DF48  80 C3 00 04 */	lwz r6, 4(r3)
/* 8014100C 0013DF4C  38 81 00 24 */	addi r4, r1, 0x24
/* 80141010 0013DF50  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80141014 0013DF54  80 03 00 08 */	lwz r0, 8(r3)
/* 80141018 0013DF58  C0 25 00 08 */	lfs f1, 8(r5)
/* 8014101C 0013DF5C  38 A1 00 34 */	addi r5, r1, 0x34
/* 80141020 0013DF60  80 6D 92 C8 */	lwz r3, cellMgr__4Game@sda21(r13)
/* 80141024 0013DF64  91 21 00 34 */	stw r9, 0x34(r1)
/* 80141028 0013DF68  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8014102C 0013DF6C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80141030 0013DF70  91 01 00 34 */	stw r8, 0x34(r1)
/* 80141034 0013DF74  93 A1 00 38 */	stw r29, 0x38(r1)
/* 80141038 0013DF78  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 8014103C 0013DF7C  90 C1 00 40 */	stw r6, 0x40(r1)
/* 80141040 0013DF80  90 01 00 44 */	stw r0, 0x44(r1)
/* 80141044 0013DF84  48 01 55 85 */	bl "mapSearch__Q24Game11CellPyramidFRQ23Sys6SphereP32IDelegate1<PQ24Game10CellObject>"
/* 80141048 0013DF88  48 00 02 2C */	b .L_80141274
.L_8014104C:
/* 8014104C 0013DF8C  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 80141050 0013DF90  38 00 00 00 */	li r0, 0
/* 80141054 0013DF94  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80141058 0013DF98  3B E0 00 00 */	li r31, 0
/* 8014105C 0013DF9C  38 84 BC 84 */	addi r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80141060 0013DFA0  28 00 00 00 */	cmplwi r0, 0
/* 80141064 0013DFA4  90 81 00 14 */	stw r4, 0x14(r1)
/* 80141068 0013DFA8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8014106C 0013DFAC  90 01 00 18 */	stw r0, 0x18(r1)
/* 80141070 0013DFB0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80141074 0013DFB4  40 82 00 1C */	bne .L_80141090
/* 80141078 0013DFB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014107C 0013DFBC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80141080 0013DFC0  7D 89 03 A6 */	mtctr r12
/* 80141084 0013DFC4  4E 80 04 21 */	bctrl 
/* 80141088 0013DFC8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8014108C 0013DFCC  48 00 01 C8 */	b .L_80141254
.L_80141090:
/* 80141090 0013DFD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80141094 0013DFD4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80141098 0013DFD8  7D 89 03 A6 */	mtctr r12
/* 8014109C 0013DFDC  4E 80 04 21 */	bctrl 
/* 801410A0 0013DFE0  90 61 00 18 */	stw r3, 0x18(r1)
/* 801410A4 0013DFE4  48 00 00 58 */	b .L_801410FC
.L_801410A8:
/* 801410A8 0013DFE8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801410AC 0013DFEC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801410B0 0013DFF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801410B4 0013DFF4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801410B8 0013DFF8  7D 89 03 A6 */	mtctr r12
/* 801410BC 0013DFFC  4E 80 04 21 */	bctrl 
/* 801410C0 0013E000  7C 64 1B 78 */	mr r4, r3
/* 801410C4 0013E004  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801410C8 0013E008  81 83 00 00 */	lwz r12, 0(r3)
/* 801410CC 0013E00C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801410D0 0013E010  7D 89 03 A6 */	mtctr r12
/* 801410D4 0013E014  4E 80 04 21 */	bctrl 
/* 801410D8 0013E018  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801410DC 0013E01C  40 82 01 78 */	bne .L_80141254
/* 801410E0 0013E020  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801410E4 0013E024  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801410E8 0013E028  81 83 00 00 */	lwz r12, 0(r3)
/* 801410EC 0013E02C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801410F0 0013E030  7D 89 03 A6 */	mtctr r12
/* 801410F4 0013E034  4E 80 04 21 */	bctrl 
/* 801410F8 0013E038  90 61 00 18 */	stw r3, 0x18(r1)
.L_801410FC:
/* 801410FC 0013E03C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80141100 0013E040  38 61 00 14 */	addi r3, r1, 0x14
/* 80141104 0013E044  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80141108 0013E048  7D 89 03 A6 */	mtctr r12
/* 8014110C 0013E04C  4E 80 04 21 */	bctrl 
/* 80141110 0013E050  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141114 0013E054  41 82 FF 94 */	beq .L_801410A8
/* 80141118 0013E058  48 00 01 3C */	b .L_80141254
.L_8014111C:
/* 8014111C 0013E05C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80141120 0013E060  81 83 00 00 */	lwz r12, 0(r3)
/* 80141124 0013E064  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80141128 0013E068  7D 89 03 A6 */	mtctr r12
/* 8014112C 0013E06C  4E 80 04 21 */	bctrl 
/* 80141130 0013E070  81 83 00 00 */	lwz r12, 0(r3)
/* 80141134 0013E074  7C 7C 1B 78 */	mr r28, r3
/* 80141138 0013E078  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014113C 0013E07C  7D 89 03 A6 */	mtctr r12
/* 80141140 0013E080  4E 80 04 21 */	bctrl 
/* 80141144 0013E084  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141148 0013E088  41 82 00 50 */	beq .L_80141198
/* 8014114C 0013E08C  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80141150 0013E090  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractDope@ha
/* 80141154 0013E094  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 80141158 0013E098  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014115C 0013E09C  38 03 49 98 */	addi r0, r3, __vt__Q24Game12InteractDope@l
/* 80141160 0013E0A0  7F 83 E3 78 */	mr r3, r28
/* 80141164 0013E0A4  90 81 00 08 */	stw r4, 8(r1)
/* 80141168 0013E0A8  38 81 00 08 */	addi r4, r1, 8
/* 8014116C 0013E0AC  90 01 00 08 */	stw r0, 8(r1)
/* 80141170 0013E0B0  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80141174 0013E0B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80141178 0013E0B8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8014117C 0013E0BC  7D 89 03 A6 */	mtctr r12
/* 80141180 0013E0C0  4E 80 04 21 */	bctrl 
/* 80141184 0013E0C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141188 0013E0C8  41 82 00 10 */	beq .L_80141198
/* 8014118C 0013E0CC  28 1F 00 00 */	cmplwi r31, 0
/* 80141190 0013E0D0  40 82 00 08 */	bne .L_80141198
/* 80141194 0013E0D4  7F 9F E3 78 */	mr r31, r28
.L_80141198:
/* 80141198 0013E0D8  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8014119C 0013E0DC  28 00 00 00 */	cmplwi r0, 0
/* 801411A0 0013E0E0  40 82 00 24 */	bne .L_801411C4
/* 801411A4 0013E0E4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801411A8 0013E0E8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801411AC 0013E0EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801411B0 0013E0F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801411B4 0013E0F4  7D 89 03 A6 */	mtctr r12
/* 801411B8 0013E0F8  4E 80 04 21 */	bctrl 
/* 801411BC 0013E0FC  90 61 00 18 */	stw r3, 0x18(r1)
/* 801411C0 0013E100  48 00 00 94 */	b .L_80141254
.L_801411C4:
/* 801411C4 0013E104  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801411C8 0013E108  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801411CC 0013E10C  81 83 00 00 */	lwz r12, 0(r3)
/* 801411D0 0013E110  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801411D4 0013E114  7D 89 03 A6 */	mtctr r12
/* 801411D8 0013E118  4E 80 04 21 */	bctrl 
/* 801411DC 0013E11C  90 61 00 18 */	stw r3, 0x18(r1)
/* 801411E0 0013E120  48 00 00 58 */	b .L_80141238
.L_801411E4:
/* 801411E4 0013E124  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801411E8 0013E128  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801411EC 0013E12C  81 83 00 00 */	lwz r12, 0(r3)
/* 801411F0 0013E130  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801411F4 0013E134  7D 89 03 A6 */	mtctr r12
/* 801411F8 0013E138  4E 80 04 21 */	bctrl 
/* 801411FC 0013E13C  7C 64 1B 78 */	mr r4, r3
/* 80141200 0013E140  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80141204 0013E144  81 83 00 00 */	lwz r12, 0(r3)
/* 80141208 0013E148  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014120C 0013E14C  7D 89 03 A6 */	mtctr r12
/* 80141210 0013E150  4E 80 04 21 */	bctrl 
/* 80141214 0013E154  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141218 0013E158  40 82 00 3C */	bne .L_80141254
/* 8014121C 0013E15C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80141220 0013E160  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80141224 0013E164  81 83 00 00 */	lwz r12, 0(r3)
/* 80141228 0013E168  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014122C 0013E16C  7D 89 03 A6 */	mtctr r12
/* 80141230 0013E170  4E 80 04 21 */	bctrl 
/* 80141234 0013E174  90 61 00 18 */	stw r3, 0x18(r1)
.L_80141238:
/* 80141238 0013E178  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8014123C 0013E17C  38 61 00 14 */	addi r3, r1, 0x14
/* 80141240 0013E180  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80141244 0013E184  7D 89 03 A6 */	mtctr r12
/* 80141248 0013E188  4E 80 04 21 */	bctrl 
/* 8014124C 0013E18C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141250 0013E190  41 82 FF 94 */	beq .L_801411E4
.L_80141254:
/* 80141254 0013E194  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80141258 0013E198  81 83 00 00 */	lwz r12, 0(r3)
/* 8014125C 0013E19C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80141260 0013E1A0  7D 89 03 A6 */	mtctr r12
/* 80141264 0013E1A4  4E 80 04 21 */	bctrl 
/* 80141268 0013E1A8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8014126C 0013E1AC  7C 04 18 40 */	cmplw r4, r3
/* 80141270 0013E1B0  40 82 FE AC */	bne .L_8014111C
.L_80141274:
/* 80141274 0013E1B4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80141278 0013E1B8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8014127C 0013E1BC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80141280 0013E1C0  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80141284 0013E1C4  83 81 00 50 */	lwz r28, 0x50(r1)
/* 80141288 0013E1C8  7C 08 03 A6 */	mtlr r0
/* 8014128C 0013E1CC  38 21 00 60 */	addi r1, r1, 0x60
/* 80141290 0013E1D0  4E 80 00 20 */	blr 
.endfn "applyDopes__Q24Game4NaviFiR10Vector3<f>"

.fn applyDopeSmoke__Q24Game4NaviFPQ24Game10CellObject, global
/* 80141294 0013E1D4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80141298 0013E1D8  7C 08 02 A6 */	mflr r0
/* 8014129C 0013E1DC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801412A0 0013E1E0  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 801412A4 0013E1E4  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 801412A8 0013E1E8  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 801412AC 0013E1EC  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 801412B0 0013E1F0  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 801412B4 0013E1F4  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 801412B8 0013E1F8  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 801412BC 0013E1FC  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 801412C0 0013E200  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 801412C4 0013E204  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 801412C8 0013E208  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 801412CC 0013E20C  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 801412D0 0013E210  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801412D4 0013E214  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801412D8 0013E218  7C 7E 1B 78 */	mr r30, r3
/* 801412DC 0013E21C  7C 80 23 78 */	mr r0, r4
/* 801412E0 0013E220  7F C4 F3 78 */	mr r4, r30
/* 801412E4 0013E224  38 61 00 14 */	addi r3, r1, 0x14
/* 801412E8 0013E228  81 9E 00 00 */	lwz r12, 0(r30)
/* 801412EC 0013E22C  7C 1F 03 78 */	mr r31, r0
/* 801412F0 0013E230  81 8C 00 08 */	lwz r12, 8(r12)
/* 801412F4 0013E234  7D 89 03 A6 */	mtctr r12
/* 801412F8 0013E238  4E 80 04 21 */	bctrl 
/* 801412FC 0013E23C  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80141300 0013E240  C3 A1 00 18 */	lfs f29, 0x18(r1)
/* 80141304 0013E244  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80141308 0013E248  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 8014130C 0013E24C  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80141310 0013E250  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80141314 0013E254  C3 E1 00 1C */	lfs f31, 0x1c(r1)
/* 80141318 0013E258  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 8014131C 0013E25C  EF 80 F0 28 */	fsubs f28, f0, f30
/* 80141320 0013E260  EC 1B 06 F2 */	fmuls f0, f27, f27
/* 80141324 0013E264  EF 41 F8 28 */	fsubs f26, f1, f31
/* 80141328 0013E268  EC 1C 07 3A */	fmadds f0, f28, f28, f0
/* 8014132C 0013E26C  EC 3A 06 BA */	fmadds f1, f26, f26, f0
/* 80141330 0013E270  48 2D 04 D5 */	bl pikmin2_sqrtf__Ff
/* 80141334 0013E274  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141338 0013E278  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014133C 0013E27C  40 81 00 18 */	ble .L_80141354
/* 80141340 0013E280  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80141344 0013E284  EC 00 08 24 */	fdivs f0, f0, f1
/* 80141348 0013E288  EF 9C 00 32 */	fmuls f28, f28, f0
/* 8014134C 0013E28C  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80141350 0013E290  EF 5A 00 32 */	fmuls f26, f26, f0
.L_80141354:
/* 80141354 0013E294  7F E4 FB 78 */	mr r4, r31
/* 80141358 0013E298  38 61 00 08 */	addi r3, r1, 8
/* 8014135C 0013E29C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80141360 0013E2A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80141364 0013E2A4  7D 89 03 A6 */	mtctr r12
/* 80141368 0013E2A8  4E 80 04 21 */	bctrl 
/* 8014136C 0013E2AC  C0 82 A0 20 */	lfs f4, lbl_80518380@sda21(r2)
/* 80141370 0013E2B0  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80141374 0013E2B4  EC 5B 01 32 */	fmuls f2, f27, f4
/* 80141378 0013E2B8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8014137C 0013E2BC  EC 1C 01 32 */	fmuls f0, f28, f4
/* 80141380 0013E2C0  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 80141384 0013E2C4  EC 9A 01 32 */	fmuls f4, f26, f4
/* 80141388 0013E2C8  EC 5D 10 2A */	fadds f2, f29, f2
/* 8014138C 0013E2CC  EC 1E 00 2A */	fadds f0, f30, f0
/* 80141390 0013E2D0  EC 9F 20 2A */	fadds f4, f31, f4
/* 80141394 0013E2D4  EC 43 10 28 */	fsubs f2, f3, f2
/* 80141398 0013E2D8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8014139C 0013E2DC  EC 65 20 28 */	fsubs f3, f5, f4
/* 801413A0 0013E2E0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 801413A4 0013E2E4  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 801413A8 0013E2E8  EC 23 00 FA */	fmadds f1, f3, f3, f0
/* 801413AC 0013E2EC  48 2D 04 59 */	bl pikmin2_sqrtf__Ff
/* 801413B0 0013E2F0  C0 02 A0 1C */	lfs f0, lbl_8051837C@sda21(r2)
/* 801413B4 0013E2F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801413B8 0013E2F8  4C 40 13 82 */	cror 2, 0, 2
/* 801413BC 0013E2FC  40 82 00 40 */	bne .L_801413FC
/* 801413C0 0013E300  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801413C4 0013E304  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractDope@ha
/* 801413C8 0013E308  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 801413CC 0013E30C  38 00 00 01 */	li r0, 1
/* 801413D0 0013E310  90 81 00 20 */	stw r4, 0x20(r1)
/* 801413D4 0013E314  38 A3 49 98 */	addi r5, r3, __vt__Q24Game12InteractDope@l
/* 801413D8 0013E318  7F E3 FB 78 */	mr r3, r31
/* 801413DC 0013E31C  38 81 00 20 */	addi r4, r1, 0x20
/* 801413E0 0013E320  93 C1 00 24 */	stw r30, 0x24(r1)
/* 801413E4 0013E324  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801413E8 0013E328  90 01 00 28 */	stw r0, 0x28(r1)
/* 801413EC 0013E32C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801413F0 0013E330  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801413F4 0013E334  7D 89 03 A6 */	mtctr r12
/* 801413F8 0013E338  4E 80 04 21 */	bctrl 
.L_801413FC:
/* 801413FC 0013E33C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80141400 0013E340  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80141404 0013E344  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80141408 0013E348  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8014140C 0013E34C  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80141410 0013E350  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80141414 0013E354  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80141418 0013E358  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8014141C 0013E35C  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 80141420 0013E360  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 80141424 0013E364  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 80141428 0013E368  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 8014142C 0013E36C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80141430 0013E370  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80141434 0013E374  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80141438 0013E378  7C 08 03 A6 */	mtlr r0
/* 8014143C 0013E37C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80141440 0013E380  4E 80 00 20 */	blr 
.endfn applyDopeSmoke__Q24Game4NaviFPQ24Game10CellObject

.fn getStateID__Q24Game4NaviFv, global
/* 80141444 0013E384  80 63 02 74 */	lwz r3, 0x274(r3)
/* 80141448 0013E388  28 03 00 00 */	cmplwi r3, 0
/* 8014144C 0013E38C  41 82 00 0C */	beq .L_80141458
/* 80141450 0013E390  80 63 00 04 */	lwz r3, 4(r3)
/* 80141454 0013E394  4E 80 00 20 */	blr 
.L_80141458:
/* 80141458 0013E398  38 60 FF FF */	li r3, -1
/* 8014145C 0013E39C  4E 80 00 20 */	blr 
.endfn getStateID__Q24Game4NaviFv

.fn transit__Q24Game4NaviFiPQ24Game8StateArg, global
/* 80141460 0013E3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141464 0013E3A4  7C 08 02 A6 */	mflr r0
/* 80141468 0013E3A8  7C 67 1B 78 */	mr r7, r3
/* 8014146C 0013E3AC  7C A6 2B 78 */	mr r6, r5
/* 80141470 0013E3B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141474 0013E3B4  7C 80 23 78 */	mr r0, r4
/* 80141478 0013E3B8  7C E4 3B 78 */	mr r4, r7
/* 8014147C 0013E3BC  80 63 02 70 */	lwz r3, 0x270(r3)
/* 80141480 0013E3C0  7C 05 03 78 */	mr r5, r0
/* 80141484 0013E3C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80141488 0013E3C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014148C 0013E3CC  7D 89 03 A6 */	mtctr r12
/* 80141490 0013E3D0  4E 80 04 21 */	bctrl 
/* 80141494 0013E3D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141498 0013E3D8  7C 08 03 A6 */	mtlr r0
/* 8014149C 0013E3DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801414A0 0013E3E0  4E 80 00 20 */	blr 
.endfn transit__Q24Game4NaviFiPQ24Game8StateArg

.fn getOlimarData__Q24Game4NaviFv, global
/* 801414A4 0013E3E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801414A8 0013E3E8  38 63 00 48 */	addi r3, r3, 0x48
/* 801414AC 0013E3EC  4E 80 00 20 */	blr 
.endfn getOlimarData__Q24Game4NaviFv

.fn getJAIObject__Q24Game4NaviFv, global
/* 801414B0 0013E3F0  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 801414B4 0013E3F4  28 03 00 00 */	cmplwi r3, 0
/* 801414B8 0013E3F8  4D 82 00 20 */	beqlr 
/* 801414BC 0013E3FC  38 63 00 30 */	addi r3, r3, 0x30
/* 801414C0 0013E400  4E 80 00 20 */	blr 
.endfn getJAIObject__Q24Game4NaviFv

.fn getPSCreature__Q24Game4NaviFv, global
/* 801414C4 0013E404  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 801414C8 0013E408  4E 80 00 20 */	blr 
.endfn getPSCreature__Q24Game4NaviFv

.fn "wallCallback__Q24Game4NaviFR10Vector3<f>", global
/* 801414CC 0013E40C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801414D0 0013E410  7C 08 02 A6 */	mflr r0
/* 801414D4 0013E414  7C 66 1B 78 */	mr r6, r3
/* 801414D8 0013E418  7C 85 23 78 */	mr r5, r4
/* 801414DC 0013E41C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801414E0 0013E420  80 63 02 74 */	lwz r3, 0x274(r3)
/* 801414E4 0013E424  28 03 00 00 */	cmplwi r3, 0
/* 801414E8 0013E428  41 82 00 18 */	beq .L_80141500
/* 801414EC 0013E42C  81 83 00 00 */	lwz r12, 0(r3)
/* 801414F0 0013E430  7C C4 33 78 */	mr r4, r6
/* 801414F4 0013E434  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801414F8 0013E438  7D 89 03 A6 */	mtctr r12
/* 801414FC 0013E43C  4E 80 04 21 */	bctrl 
.L_80141500:
/* 80141500 0013E440  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141504 0013E444  7C 08 03 A6 */	mtlr r0
/* 80141508 0013E448  38 21 00 10 */	addi r1, r1, 0x10
/* 8014150C 0013E44C  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game4NaviFR10Vector3<f>"

.fn "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>", weak
/* 80141510 0013E450  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"

.fn bounceCallback__Q24Game4NaviFPQ23Sys8Triangle, global
/* 80141514 0013E454  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141518 0013E458  7C 08 02 A6 */	mflr r0
/* 8014151C 0013E45C  7C 66 1B 78 */	mr r6, r3
/* 80141520 0013E460  7C 85 23 78 */	mr r5, r4
/* 80141524 0013E464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141528 0013E468  80 63 02 74 */	lwz r3, 0x274(r3)
/* 8014152C 0013E46C  28 03 00 00 */	cmplwi r3, 0
/* 80141530 0013E470  41 82 00 18 */	beq .L_80141548
/* 80141534 0013E474  81 83 00 00 */	lwz r12, 0(r3)
/* 80141538 0013E478  7C C4 33 78 */	mr r4, r6
/* 8014153C 0013E47C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80141540 0013E480  7D 89 03 A6 */	mtctr r12
/* 80141544 0013E484  4E 80 04 21 */	bctrl 
.L_80141548:
/* 80141548 0013E488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014154C 0013E48C  7C 08 03 A6 */	mtlr r0
/* 80141550 0013E490  38 21 00 10 */	addi r1, r1, 0x10
/* 80141554 0013E494  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game4NaviFPQ23Sys8Triangle

.fn bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle, weak
/* 80141558 0013E498  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle

.fn collisionCallback__Q24Game4NaviFRQ24Game9CollEvent, global
/* 8014155C 0013E49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141560 0013E4A0  7C 08 02 A6 */	mflr r0
/* 80141564 0013E4A4  7C 66 1B 78 */	mr r6, r3
/* 80141568 0013E4A8  7C 85 23 78 */	mr r5, r4
/* 8014156C 0013E4AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141570 0013E4B0  80 63 02 74 */	lwz r3, 0x274(r3)
/* 80141574 0013E4B4  28 03 00 00 */	cmplwi r3, 0
/* 80141578 0013E4B8  41 82 00 18 */	beq .L_80141590
/* 8014157C 0013E4BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80141580 0013E4C0  7C C4 33 78 */	mr r4, r6
/* 80141584 0013E4C4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80141588 0013E4C8  7D 89 03 A6 */	mtctr r12
/* 8014158C 0013E4CC  4E 80 04 21 */	bctrl 
.L_80141590:
/* 80141590 0013E4D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141594 0013E4D4  7C 08 03 A6 */	mtlr r0
/* 80141598 0013E4D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014159C 0013E4DC  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game4NaviFRQ24Game9CollEvent

.fn collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent, weak
/* 801415A0 0013E4E0  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent

.fn platCallback__Q24Game4NaviFRQ24Game9PlatEvent, global
/* 801415A4 0013E4E4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801415A8 0013E4E8  7C 08 02 A6 */	mflr r0
/* 801415AC 0013E4EC  90 01 00 74 */	stw r0, 0x74(r1)
/* 801415B0 0013E4F0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801415B4 0013E4F4  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801415B8 0013E4F8  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801415BC 0013E4FC  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 801415C0 0013E500  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 801415C4 0013E504  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 801415C8 0013E508  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801415CC 0013E50C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801415D0 0013E510  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801415D4 0013E514  7C 9E 23 78 */	mr r30, r4
/* 801415D8 0013E518  3C 80 65 6C */	lis r4, 0x656C6563@ha
/* 801415DC 0013E51C  80 BE 00 00 */	lwz r5, 0(r30)
/* 801415E0 0013E520  7C 7D 1B 78 */	mr r29, r3
/* 801415E4 0013E524  83 FE 00 10 */	lwz r31, 0x10(r30)
/* 801415E8 0013E528  38 84 65 63 */	addi r4, r4, 0x656C6563@l
/* 801415EC 0013E52C  38 65 00 F8 */	addi r3, r5, 0xf8
/* 801415F0 0013E530  38 A0 00 2A */	li r5, 0x2a
/* 801415F4 0013E534  48 2D 1D 09 */	bl match__4ID32FUlc
/* 801415F8 0013E538  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801415FC 0013E53C  41 82 00 E0 */	beq .L_801416DC
/* 80141600 0013E540  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80141604 0013E544  38 80 00 01 */	li r4, 1
/* 80141608 0013E548  38 63 00 48 */	addi r3, r3, 0x48
/* 8014160C 0013E54C  48 0A 49 C5 */	bl hasItem__Q24Game10OlimarDataFi
/* 80141610 0013E550  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141614 0013E554  40 82 00 F0 */	bne .L_80141704
/* 80141618 0013E558  7F E4 FB 78 */	mr r4, r31
/* 8014161C 0013E55C  80 BE 00 00 */	lwz r5, 0(r30)
/* 80141620 0013E560  81 9F 00 00 */	lwz r12, 0(r31)
/* 80141624 0013E564  38 61 00 08 */	addi r3, r1, 8
/* 80141628 0013E568  80 A5 00 B8 */	lwz r5, 0xb8(r5)
/* 8014162C 0013E56C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80141630 0013E570  C3 C5 00 08 */	lfs f30, 8(r5)
/* 80141634 0013E574  C3 A5 00 18 */	lfs f29, 0x18(r5)
/* 80141638 0013E578  C3 E5 00 28 */	lfs f31, 0x28(r5)
/* 8014163C 0013E57C  7D 89 03 A6 */	mtctr r12
/* 80141640 0013E580  4E 80 04 21 */	bctrl 
/* 80141644 0013E584  C0 3D 02 10 */	lfs f1, 0x210(r29)
/* 80141648 0013E588  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8014164C 0013E58C  C0 5D 02 0C */	lfs f2, 0x20c(r29)
/* 80141650 0013E590  EC 01 00 28 */	fsubs f0, f1, f0
/* 80141654 0013E594  C0 21 00 08 */	lfs f1, 8(r1)
/* 80141658 0013E598  C0 9D 02 14 */	lfs f4, 0x214(r29)
/* 8014165C 0013E59C  EC 42 08 28 */	fsubs f2, f2, f1
/* 80141660 0013E5A0  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 80141664 0013E5A4  EC 20 07 72 */	fmuls f1, f0, f29
/* 80141668 0013E5A8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8014166C 0013E5AC  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141670 0013E5B0  EC 22 0F BA */	fmadds f1, f2, f30, f1
/* 80141674 0013E5B4  EC 23 0F FA */	fmadds f1, f3, f31, f1
/* 80141678 0013E5B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014167C 0013E5BC  40 80 00 10 */	bge .L_8014168C
/* 80141680 0013E5C0  C0 02 A0 24 */	lfs f0, lbl_80518384@sda21(r2)
/* 80141684 0013E5C4  EF DE 00 32 */	fmuls f30, f30, f0
/* 80141688 0013E5C8  EF FF 00 32 */	fmuls f31, f31, f0
.L_8014168C:
/* 8014168C 0013E5CC  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80141690 0013E5D0  7F A3 EB 78 */	mr r3, r29
/* 80141694 0013E5D4  C0 22 A0 28 */	lfs f1, lbl_80518388@sda21(r2)
/* 80141698 0013E5D8  38 A1 00 14 */	addi r5, r1, 0x14
/* 8014169C 0013E5DC  80 C4 00 C8 */	lwz r6, 0xc8(r4)
/* 801416A0 0013E5E0  38 80 00 0C */	li r4, 0xc
/* 801416A4 0013E5E4  EC 7E 00 72 */	fmuls f3, f30, f1
/* 801416A8 0013E5E8  C0 02 A0 2C */	lfs f0, lbl_8051838C@sda21(r2)
/* 801416AC 0013E5EC  C0 46 0C 50 */	lfs f2, 0xc50(r6)
/* 801416B0 0013E5F0  EC 3F 00 72 */	fmuls f1, f31, f1
/* 801416B4 0013E5F4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801416B8 0013E5F8  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 801416BC 0013E5FC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801416C0 0013E600  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 801416C4 0013E604  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 801416C8 0013E608  81 9D 00 00 */	lwz r12, 0(r29)
/* 801416CC 0013E60C  81 8C 02 2C */	lwz r12, 0x22c(r12)
/* 801416D0 0013E610  7D 89 03 A6 */	mtctr r12
/* 801416D4 0013E614  4E 80 04 21 */	bctrl 
/* 801416D8 0013E618  48 00 00 2C */	b .L_80141704
.L_801416DC:
/* 801416DC 0013E61C  80 DE 00 00 */	lwz r6, 0(r30)
/* 801416E0 0013E620  3C 60 66 69 */	lis r3, 0x66696E6C@ha
/* 801416E4 0013E624  38 83 6E 6C */	addi r4, r3, 0x66696E6C@l
/* 801416E8 0013E628  38 A0 00 2A */	li r5, 0x2a
/* 801416EC 0013E62C  38 66 00 F8 */	addi r3, r6, 0xf8
/* 801416F0 0013E630  48 2D 1C 0D */	bl match__4ID32FUlc
/* 801416F4 0013E634  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801416F8 0013E638  41 82 00 0C */	beq .L_80141704
/* 801416FC 0013E63C  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 80141700 0013E640  48 05 39 55 */	bl shrink__Q24Game6CPlateFv
.L_80141704:
/* 80141704 0013E644  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80141708 0013E648  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8014170C 0013E64C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80141710 0013E650  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80141714 0013E654  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80141718 0013E658  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8014171C 0013E65C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80141720 0013E660  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80141724 0013E664  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80141728 0013E668  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8014172C 0013E66C  7C 08 03 A6 */	mtlr r0
/* 80141730 0013E670  38 21 00 70 */	addi r1, r1, 0x70
/* 80141734 0013E674  4E 80 00 20 */	blr 
.endfn platCallback__Q24Game4NaviFRQ24Game9PlatEvent

.fn "viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>", global
/* 80141738 0013E678  4E 80 00 20 */	blr 
.endfn "viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"

.fn viewGetShape__Q24Game4NaviFv, global
/* 8014173C 0013E67C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80141740 0013E680  4E 80 00 20 */	blr 
.endfn viewGetShape__Q24Game4NaviFv

.fn viewGetBaseScale__Q24Game4NaviFv, global
/* 80141744 0013E684  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 80141748 0013E688  28 00 00 00 */	cmplwi r0, 0
/* 8014174C 0013E68C  40 82 00 0C */	bne .L_80141758
/* 80141750 0013E690  C0 22 A0 08 */	lfs f1, lbl_80518368@sda21(r2)
/* 80141754 0013E694  4E 80 00 20 */	blr 
.L_80141758:
/* 80141758 0013E698  C0 22 A0 0C */	lfs f1, lbl_8051836C@sda21(r2)
/* 8014175C 0013E69C  4E 80 00 20 */	blr 
.endfn viewGetBaseScale__Q24Game4NaviFv

.fn doEntry__Q24Game4NaviFv, global
/* 80141760 0013E6A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80141764 0013E6A4  7C 08 02 A6 */	mflr r0
/* 80141768 0013E6A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014176C 0013E6AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80141770 0013E6B0  7C 7F 1B 78 */	mr r31, r3
/* 80141774 0013E6B4  4B FF D0 51 */	bl doEntry__Q24Game8FakePikiFv
/* 80141778 0013E6B8  7F E3 FB 78 */	mr r3, r31
/* 8014177C 0013E6BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80141780 0013E6C0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80141784 0013E6C4  7D 89 03 A6 */	mtctr r12
/* 80141788 0013E6C8  4E 80 04 21 */	bctrl 
/* 8014178C 0013E6CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80141790 0013E6D0  40 82 00 20 */	bne .L_801417B0
/* 80141794 0013E6D4  88 1F 02 68 */	lbz r0, 0x268(r31)
/* 80141798 0013E6D8  28 00 00 00 */	cmplwi r0, 0
/* 8014179C 0013E6DC  41 82 00 14 */	beq .L_801417B0
/* 801417A0 0013E6E0  88 7F 00 D8 */	lbz r3, 0xd8(r31)
/* 801417A4 0013E6E4  38 00 FF CB */	li r0, -53
/* 801417A8 0013E6E8  7C 60 00 38 */	and r0, r3, r0
/* 801417AC 0013E6EC  98 1F 00 D8 */	stb r0, 0xd8(r31)
.L_801417B0:
/* 801417B0 0013E6F0  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 801417B4 0013E6F4  28 00 00 00 */	cmplwi r0, 0
/* 801417B8 0013E6F8  41 82 01 8C */	beq .L_80141944
/* 801417BC 0013E6FC  80 7F 02 98 */	lwz r3, 0x298(r31)
/* 801417C0 0013E700  C0 22 9F EC */	lfs f1, lbl_8051834C@sda21(r2)
/* 801417C4 0013E704  48 2F 2D 89 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 801417C8 0013E708  80 7F 02 9C */	lwz r3, 0x29c(r31)
/* 801417CC 0013E70C  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 801417D0 0013E710  48 2F 2D 7D */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 801417D4 0013E714  A0 1F 02 88 */	lhz r0, 0x288(r31)
/* 801417D8 0013E718  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801417DC 0013E71C  40 82 00 58 */	bne .L_80141834
/* 801417E0 0013E720  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801417E4 0013E724  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 801417E8 0013E728  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801417EC 0013E72C  41 82 00 1C */	beq .L_80141808
/* 801417F0 0013E730  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 801417F4 0013E734  81 83 00 00 */	lwz r12, 0(r3)
/* 801417F8 0013E738  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801417FC 0013E73C  7D 89 03 A6 */	mtctr r12
/* 80141800 0013E740  4E 80 04 21 */	bctrl 
/* 80141804 0013E744  48 00 00 18 */	b .L_8014181C
.L_80141808:
/* 80141808 0013E748  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 8014180C 0013E74C  81 83 00 00 */	lwz r12, 0(r3)
/* 80141810 0013E750  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80141814 0013E754  7D 89 03 A6 */	mtctr r12
/* 80141818 0013E758  4E 80 04 21 */	bctrl 
.L_8014181C:
/* 8014181C 0013E75C  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80141820 0013E760  80 63 00 08 */	lwz r3, 8(r3)
/* 80141824 0013E764  81 83 00 00 */	lwz r12, 0(r3)
/* 80141828 0013E768  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8014182C 0013E76C  7D 89 03 A6 */	mtctr r12
/* 80141830 0013E770  4E 80 04 21 */	bctrl 
.L_80141834:
/* 80141834 0013E774  80 7F 02 A8 */	lwz r3, 0x2a8(r31)
/* 80141838 0013E778  28 03 00 00 */	cmplwi r3, 0
/* 8014183C 0013E77C  41 82 00 2C */	beq .L_80141868
/* 80141840 0013E780  88 83 02 B8 */	lbz r4, 0x2b8(r3)
/* 80141844 0013E784  3C 60 80 51 */	lis r3, pikiColorsCursor__Q24Game4Piki@ha
/* 80141848 0013E788  38 03 22 CC */	addi r0, r3, pikiColorsCursor__Q24Game4Piki@l
/* 8014184C 0013E78C  54 83 10 3A */	slwi r3, r4, 2
/* 80141850 0013E790  7C 60 1A 14 */	add r3, r0, r3
/* 80141854 0013E794  88 03 00 00 */	lbz r0, 0(r3)
/* 80141858 0013E798  88 C3 00 01 */	lbz r6, 1(r3)
/* 8014185C 0013E79C  88 E3 00 02 */	lbz r7, 2(r3)
/* 80141860 0013E7A0  89 03 00 03 */	lbz r8, 3(r3)
/* 80141864 0013E7A4  48 00 00 14 */	b .L_80141878
.L_80141868:
/* 80141868 0013E7A8  38 E0 00 FF */	li r7, 0xff
/* 8014186C 0013E7AC  39 00 00 FF */	li r8, 0xff
/* 80141870 0013E7B0  7C E6 3B 78 */	mr r6, r7
/* 80141874 0013E7B4  7C E0 3B 78 */	mr r0, r7
.L_80141878:
/* 80141878 0013E7B8  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8014187C 0013E7BC  80 63 00 08 */	lwz r3, 8(r3)
/* 80141880 0013E7C0  80 63 00 04 */	lwz r3, 4(r3)
/* 80141884 0013E7C4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80141888 0013E7C8  80 63 00 00 */	lwz r3, 0(r3)
/* 8014188C 0013E7CC  28 03 00 00 */	cmplwi r3, 0
/* 80141890 0013E7D0  41 82 00 54 */	beq .L_801418E4
/* 80141894 0013E7D4  B0 01 00 08 */	sth r0, 8(r1)
/* 80141898 0013E7D8  38 A1 00 08 */	addi r5, r1, 8
/* 8014189C 0013E7DC  38 80 00 00 */	li r4, 0
/* 801418A0 0013E7E0  B0 C1 00 0A */	sth r6, 0xa(r1)
/* 801418A4 0013E7E4  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 801418A8 0013E7E8  B1 01 00 0E */	sth r8, 0xe(r1)
/* 801418AC 0013E7EC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 801418B0 0013E7F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801418B4 0013E7F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801418B8 0013E7F8  7D 89 03 A6 */	mtctr r12
/* 801418BC 0013E7FC  4E 80 04 21 */	bctrl 
/* 801418C0 0013E800  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 801418C4 0013E804  80 63 00 08 */	lwz r3, 8(r3)
/* 801418C8 0013E808  81 83 00 00 */	lwz r12, 0(r3)
/* 801418CC 0013E80C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801418D0 0013E810  7D 89 03 A6 */	mtctr r12
/* 801418D4 0013E814  4E 80 04 21 */	bctrl 
/* 801418D8 0013E818  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 801418DC 0013E81C  80 63 00 08 */	lwz r3, 8(r3)
/* 801418E0 0013E820  4B F2 53 8D */	bl diff__8J3DModelFv
.L_801418E4:
/* 801418E4 0013E824  A0 1F 02 88 */	lhz r0, 0x288(r31)
/* 801418E8 0013E828  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801418EC 0013E82C  40 82 00 58 */	bne .L_80141944
/* 801418F0 0013E830  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801418F4 0013E834  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 801418F8 0013E838  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801418FC 0013E83C  41 82 00 1C */	beq .L_80141918
/* 80141900 0013E840  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80141904 0013E844  81 83 00 00 */	lwz r12, 0(r3)
/* 80141908 0013E848  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014190C 0013E84C  7D 89 03 A6 */	mtctr r12
/* 80141910 0013E850  4E 80 04 21 */	bctrl 
/* 80141914 0013E854  48 00 00 18 */	b .L_8014192C
.L_80141918:
/* 80141918 0013E858  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8014191C 0013E85C  81 83 00 00 */	lwz r12, 0(r3)
/* 80141920 0013E860  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80141924 0013E864  7D 89 03 A6 */	mtctr r12
/* 80141928 0013E868  4E 80 04 21 */	bctrl 
.L_8014192C:
/* 8014192C 0013E86C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80141930 0013E870  80 63 00 08 */	lwz r3, 8(r3)
/* 80141934 0013E874  81 83 00 00 */	lwz r12, 0(r3)
/* 80141938 0013E878  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8014193C 0013E87C  7D 89 03 A6 */	mtctr r12
/* 80141940 0013E880  4E 80 04 21 */	bctrl 
.L_80141944:
/* 80141944 0013E884  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80141948 0013E888  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014194C 0013E88C  7C 08 03 A6 */	mtlr r0
/* 80141950 0013E890  38 21 00 20 */	addi r1, r1, 0x20
/* 80141954 0013E894  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game4NaviFv

.fn doAnimation__Q24Game4NaviFv, global
/* 80141958 0013E898  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014195C 0013E89C  7C 08 02 A6 */	mflr r0
/* 80141960 0013E8A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80141964 0013E8A4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80141968 0013E8A8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8014196C 0013E8AC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80141970 0013E8B0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80141974 0013E8B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80141978 0013E8B8  7C 7F 1B 78 */	mr r31, r3
/* 8014197C 0013E8BC  81 8C 00 C0 */	lwz r12, 0xc0(r12)
/* 80141980 0013E8C0  7D 89 03 A6 */	mtctr r12
/* 80141984 0013E8C4  4E 80 04 21 */	bctrl 
/* 80141988 0013E8C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014198C 0013E8CC  41 82 00 F8 */	beq .L_80141A84
/* 80141990 0013E8D0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80141994 0013E8D4  7F E3 FB 78 */	mr r3, r31
/* 80141998 0013E8D8  C3 E4 00 54 */	lfs f31, 0x54(r4)
/* 8014199C 0013E8DC  4B FF A3 CD */	bl updateCell__Q24Game8CreatureFv
/* 801419A0 0013E8E0  38 61 00 2C */	addi r3, r1, 0x2c
/* 801419A4 0013E8E4  48 09 5E 65 */	bl __ct__Q24Game9AILODParmFv
/* 801419A8 0013E8E8  C0 22 A0 30 */	lfs f1, lbl_80518390@sda21(r2)
/* 801419AC 0013E8EC  7F E3 FB 78 */	mr r3, r31
/* 801419B0 0013E8F0  C0 02 A0 34 */	lfs f0, lbl_80518394@sda21(r2)
/* 801419B4 0013E8F4  38 81 00 2C */	addi r4, r1, 0x2c
/* 801419B8 0013E8F8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801419BC 0013E8FC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801419C0 0013E900  48 09 5E 7D */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 801419C4 0013E904  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801419C8 0013E908  48 2E 72 89 */	bl clearAnimatorAll__Q28SysShape5ModelFv
/* 801419CC 0013E90C  C0 02 A0 38 */	lfs f0, lbl_80518398@sda21(r2)
/* 801419D0 0013E910  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 801419D4 0013E914  81 9F 01 AC */	lwz r12, 0x1ac(r31)
/* 801419D8 0013E918  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801419DC 0013E91C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801419E0 0013E920  FC 20 F8 90 */	fmr f1, f31
/* 801419E4 0013E924  7D 89 03 A6 */	mtctr r12
/* 801419E8 0013E928  4E 80 04 21 */	bctrl 
/* 801419EC 0013E92C  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 801419F0 0013E930  FC 20 F8 90 */	fmr f1, f31
/* 801419F4 0013E934  81 9F 01 C8 */	lwz r12, 0x1c8(r31)
/* 801419F8 0013E938  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801419FC 0013E93C  7D 89 03 A6 */	mtctr r12
/* 80141A00 0013E940  4E 80 04 21 */	bctrl 
/* 80141A04 0013E944  7F E3 FB 78 */	mr r3, r31
/* 80141A08 0013E948  81 9F 00 00 */	lwz r12, 0(r31)
/* 80141A0C 0013E94C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 80141A10 0013E950  7D 89 03 A6 */	mtctr r12
/* 80141A14 0013E954  4E 80 04 21 */	bctrl 
/* 80141A18 0013E958  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 80141A1C 0013E95C  83 DF 01 74 */	lwz r30, 0x174(r31)
/* 80141A20 0013E960  81 9F 01 C8 */	lwz r12, 0x1c8(r31)
/* 80141A24 0013E964  81 8C 00 08 */	lwz r12, 8(r12)
/* 80141A28 0013E968  7D 89 03 A6 */	mtctr r12
/* 80141A2C 0013E96C  4E 80 04 21 */	bctrl 
/* 80141A30 0013E970  80 9E 00 08 */	lwz r4, 8(r30)
/* 80141A34 0013E974  80 84 00 04 */	lwz r4, 4(r4)
/* 80141A38 0013E978  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80141A3C 0013E97C  80 84 00 00 */	lwz r4, 0(r4)
/* 80141A40 0013E980  90 64 00 54 */	stw r3, 0x54(r4)
/* 80141A44 0013E984  38 7F 01 38 */	addi r3, r31, 0x138
/* 80141A48 0013E988  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 80141A4C 0013E98C  80 84 00 08 */	lwz r4, 8(r4)
/* 80141A50 0013E990  38 84 00 24 */	addi r4, r4, 0x24
/* 80141A54 0013E994  4B FA 88 79 */	bl PSMTXCopy
/* 80141A58 0013E998  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80141A5C 0013E99C  80 63 00 08 */	lwz r3, 8(r3)
/* 80141A60 0013E9A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80141A64 0013E9A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80141A68 0013E9A8  7D 89 03 A6 */	mtctr r12
/* 80141A6C 0013E9AC  4E 80 04 21 */	bctrl 
/* 80141A70 0013E9B0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80141A74 0013E9B4  4B FF 40 29 */	bl update__8CollTreeFv
/* 80141A78 0013E9B8  7F E3 FB 78 */	mr r3, r31
/* 80141A7C 0013E9BC  48 00 01 A1 */	bl updateCursor__Q24Game4NaviFv
/* 80141A80 0013E9C0  48 00 01 7C */	b .L_80141BFC
.L_80141A84:
/* 80141A84 0013E9C4  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 80141A88 0013E9C8  28 00 00 00 */	cmplwi r0, 0
/* 80141A8C 0013E9CC  41 82 00 10 */	beq .L_80141A9C
/* 80141A90 0013E9D0  7F E3 FB 78 */	mr r3, r31
/* 80141A94 0013E9D4  4B FF CD F1 */	bl doAnimation__Q24Game8FakePikiFv
/* 80141A98 0013E9D8  48 00 00 B4 */	b .L_80141B4C
.L_80141A9C:
/* 80141A9C 0013E9DC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80141AA0 0013E9E0  7F E3 FB 78 */	mr r3, r31
/* 80141AA4 0013E9E4  C3 E4 00 54 */	lfs f31, 0x54(r4)
/* 80141AA8 0013E9E8  4B FF A2 C1 */	bl updateCell__Q24Game8CreatureFv
/* 80141AAC 0013E9EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80141AB0 0013E9F0  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 80141AB4 0013E9F4  28 00 00 00 */	cmplwi r0, 0
/* 80141AB8 0013E9F8  40 82 00 3C */	bne .L_80141AF4
/* 80141ABC 0013E9FC  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 80141AC0 0013EA00  C0 1F 02 34 */	lfs f0, 0x234(r31)
/* 80141AC4 0013EA04  81 9F 01 AC */	lwz r12, 0x1ac(r31)
/* 80141AC8 0013EA08  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80141ACC 0013EA0C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80141AD0 0013EA10  7D 89 03 A6 */	mtctr r12
/* 80141AD4 0013EA14  4E 80 04 21 */	bctrl 
/* 80141AD8 0013EA18  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 80141ADC 0013EA1C  C0 1F 02 34 */	lfs f0, 0x234(r31)
/* 80141AE0 0013EA20  81 9F 01 C8 */	lwz r12, 0x1c8(r31)
/* 80141AE4 0013EA24  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80141AE8 0013EA28  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80141AEC 0013EA2C  7D 89 03 A6 */	mtctr r12
/* 80141AF0 0013EA30  4E 80 04 21 */	bctrl 
.L_80141AF4:
/* 80141AF4 0013EA34  7F E3 FB 78 */	mr r3, r31
/* 80141AF8 0013EA38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80141AFC 0013EA3C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 80141B00 0013EA40  7D 89 03 A6 */	mtctr r12
/* 80141B04 0013EA44  4E 80 04 21 */	bctrl 
/* 80141B08 0013EA48  7F E3 FB 78 */	mr r3, r31
/* 80141B0C 0013EA4C  4B FF C1 29 */	bl moveVelocity__Q24Game8FakePikiFv
/* 80141B10 0013EA50  7F E3 FB 78 */	mr r3, r31
/* 80141B14 0013EA54  4B FF C4 D5 */	bl moveRotation__Q24Game8FakePikiFv
/* 80141B18 0013EA58  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 80141B1C 0013EA5C  38 7F 01 38 */	addi r3, r31, 0x138
/* 80141B20 0013EA60  80 84 00 08 */	lwz r4, 8(r4)
/* 80141B24 0013EA64  38 84 00 24 */	addi r4, r4, 0x24
/* 80141B28 0013EA68  4B FA 87 A5 */	bl PSMTXCopy
/* 80141B2C 0013EA6C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80141B30 0013EA70  80 63 00 08 */	lwz r3, 8(r3)
/* 80141B34 0013EA74  81 83 00 00 */	lwz r12, 0(r3)
/* 80141B38 0013EA78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80141B3C 0013EA7C  7D 89 03 A6 */	mtctr r12
/* 80141B40 0013EA80  4E 80 04 21 */	bctrl 
/* 80141B44 0013EA84  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80141B48 0013EA88  4B FF 3F 55 */	bl update__8CollTreeFv
.L_80141B4C:
/* 80141B4C 0013EA8C  80 7F 02 C0 */	lwz r3, 0x2c0(r31)
/* 80141B50 0013EA90  48 2E 7D 51 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80141B54 0013EA94  C0 22 A0 3C */	lfs f1, lbl_8051839C@sda21(r2)
/* 80141B58 0013EA98  38 9F 02 C4 */	addi r4, r31, 0x2c4
/* 80141B5C 0013EA9C  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141B60 0013EAA0  38 A1 00 08 */	addi r5, r1, 8
/* 80141B64 0013EAA4  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 80141B68 0013EAA8  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80141B6C 0013EAAC  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 80141B70 0013EAB0  4B FA 90 69 */	bl PSMTXMultVec
/* 80141B74 0013EAB4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80141B78 0013EAB8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80141B7C 0013EABC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80141B80 0013EAC0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80141B84 0013EAC4  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 80141B88 0013EAC8  D0 5F 02 CC */	stfs f2, 0x2cc(r31)
/* 80141B8C 0013EACC  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 80141B90 0013EAD0  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80141B94 0013EAD4  28 00 00 00 */	cmplwi r0, 0
/* 80141B98 0013EAD8  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80141B9C 0013EADC  41 82 00 30 */	beq .L_80141BCC
/* 80141BA0 0013EAE0  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80141BA4 0013EAE4  38 81 00 20 */	addi r4, r1, 0x20
/* 80141BA8 0013EAE8  80 C3 00 0C */	lwz r6, 0xc(r3)
/* 80141BAC 0013EAEC  80 A6 00 00 */	lwz r5, 0(r6)
/* 80141BB0 0013EAF0  80 06 00 04 */	lwz r0, 4(r6)
/* 80141BB4 0013EAF4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80141BB8 0013EAF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80141BBC 0013EAFC  80 06 00 08 */	lwz r0, 8(r6)
/* 80141BC0 0013EB00  90 01 00 28 */	stw r0, 0x28(r1)
/* 80141BC4 0013EB04  48 27 67 11 */	bl "updateCursor___Q23efx11TNaviEffectF10Vector3<f>f"
/* 80141BC8 0013EB08  48 00 00 2C */	b .L_80141BF4
.L_80141BCC:
/* 80141BCC 0013EB0C  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80141BD0 0013EB10  38 81 00 14 */	addi r4, r1, 0x14
/* 80141BD4 0013EB14  80 C3 00 0C */	lwz r6, 0xc(r3)
/* 80141BD8 0013EB18  80 A6 00 00 */	lwz r5, 0(r6)
/* 80141BDC 0013EB1C  80 06 00 04 */	lwz r0, 4(r6)
/* 80141BE0 0013EB20  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80141BE4 0013EB24  90 01 00 18 */	stw r0, 0x18(r1)
/* 80141BE8 0013EB28  80 06 00 08 */	lwz r0, 8(r6)
/* 80141BEC 0013EB2C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80141BF0 0013EB30  48 27 66 E5 */	bl "updateCursor___Q23efx11TNaviEffectF10Vector3<f>f"
.L_80141BF4:
/* 80141BF4 0013EB34  7F E3 FB 78 */	mr r3, r31
/* 80141BF8 0013EB38  48 00 00 25 */	bl updateCursor__Q24Game4NaviFv
.L_80141BFC:
/* 80141BFC 0013EB3C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80141C00 0013EB40  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80141C04 0013EB44  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80141C08 0013EB48  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80141C0C 0013EB4C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80141C10 0013EB50  7C 08 03 A6 */	mtlr r0
/* 80141C14 0013EB54  38 21 00 50 */	addi r1, r1, 0x50
/* 80141C18 0013EB58  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game4NaviFv

.fn updateCursor__Q24Game4NaviFv, global
/* 80141C1C 0013EB5C  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80141C20 0013EB60  7C 08 02 A6 */	mflr r0
/* 80141C24 0013EB64  90 01 01 14 */	stw r0, 0x114(r1)
/* 80141C28 0013EB68  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80141C2C 0013EB6C  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80141C30 0013EB70  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80141C34 0013EB74  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80141C38 0013EB78  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80141C3C 0013EB7C  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80141C40 0013EB80  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80141C44 0013EB84  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80141C48 0013EB88  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80141C4C 0013EB8C  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80141C50 0013EB90  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80141C54 0013EB94  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80141C58 0013EB98  DB 21 00 A0 */	stfd f25, 0xa0(r1)
/* 80141C5C 0013EB9C  F3 21 00 A8 */	psq_st f25, 168(r1), 0, qr0
/* 80141C60 0013EBA0  DB 01 00 90 */	stfd f24, 0x90(r1)
/* 80141C64 0013EBA4  F3 01 00 98 */	psq_st f24, 152(r1), 0, qr0
/* 80141C68 0013EBA8  DA E1 00 80 */	stfd f23, 0x80(r1)
/* 80141C6C 0013EBAC  F2 E1 00 88 */	psq_st f23, 136(r1), 0, qr0
/* 80141C70 0013EBB0  DA C1 00 70 */	stfd f22, 0x70(r1)
/* 80141C74 0013EBB4  F2 C1 00 78 */	psq_st f22, 120(r1), 0, qr0
/* 80141C78 0013EBB8  DA A1 00 60 */	stfd f21, 0x60(r1)
/* 80141C7C 0013EBBC  F2 A1 00 68 */	psq_st f21, 104(r1), 0, qr0
/* 80141C80 0013EBC0  DA 81 00 50 */	stfd f20, 0x50(r1)
/* 80141C84 0013EBC4  F2 81 00 58 */	psq_st f20, 88(r1), 0, qr0
/* 80141C88 0013EBC8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80141C8C 0013EBCC  7C 7F 1B 78 */	mr r31, r3
/* 80141C90 0013EBD0  38 61 00 08 */	addi r3, r1, 8
/* 80141C94 0013EBD4  7F E4 FB 78 */	mr r4, r31
/* 80141C98 0013EBD8  80 BF 02 8C */	lwz r5, 0x28c(r31)
/* 80141C9C 0013EBDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80141CA0 0013EBE0  C3 E5 00 0C */	lfs f31, 0xc(r5)
/* 80141CA4 0013EBE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80141CA8 0013EBE8  C3 C5 00 10 */	lfs f30, 0x10(r5)
/* 80141CAC 0013EBEC  C3 A5 00 14 */	lfs f29, 0x14(r5)
/* 80141CB0 0013EBF0  7D 89 03 A6 */	mtctr r12
/* 80141CB4 0013EBF4  4E 80 04 21 */	bctrl 
/* 80141CB8 0013EBF8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80141CBC 0013EBFC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80141CC0 0013EC00  EF 7E 08 28 */	fsubs f27, f30, f1
/* 80141CC4 0013EC04  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80141CC8 0013EC08  EF 9F 00 28 */	fsubs f28, f31, f0
/* 80141CCC 0013EC0C  EF 5D 08 28 */	fsubs f26, f29, f1
/* 80141CD0 0013EC10  EC 1B 06 F2 */	fmuls f0, f27, f27
/* 80141CD4 0013EC14  EC 1C 07 3A */	fmadds f0, f28, f28, f0
/* 80141CD8 0013EC18  EC 3A 06 BA */	fmadds f1, f26, f26, f0
/* 80141CDC 0013EC1C  48 2C FB 29 */	bl pikmin2_sqrtf__Ff
/* 80141CE0 0013EC20  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141CE4 0013EC24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141CE8 0013EC28  40 81 00 18 */	ble .L_80141D00
/* 80141CEC 0013EC2C  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80141CF0 0013EC30  EC 00 08 24 */	fdivs f0, f0, f1
/* 80141CF4 0013EC34  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80141CF8 0013EC38  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80141CFC 0013EC3C  EF 5A 00 32 */	fmuls f26, f26, f0
.L_80141D00:
/* 80141D00 0013EC40  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80141D04 0013EC44  C3 23 00 18 */	lfs f25, 0x18(r3)
/* 80141D08 0013EC48  C2 E3 00 20 */	lfs f23, 0x20(r3)
/* 80141D0C 0013EC4C  EC 39 06 B2 */	fmuls f1, f25, f26
/* 80141D10 0013EC50  C3 03 00 1C */	lfs f24, 0x1c(r3)
/* 80141D14 0013EC54  EC 57 06 F2 */	fmuls f2, f23, f27
/* 80141D18 0013EC58  EC 18 07 32 */	fmuls f0, f24, f28
/* 80141D1C 0013EC5C  EE B7 0F 38 */	fmsubs f21, f23, f28, f1
/* 80141D20 0013EC60  EE D8 16 B8 */	fmsubs f22, f24, f26, f2
/* 80141D24 0013EC64  EE 99 06 F8 */	fmsubs f20, f25, f27, f0
/* 80141D28 0013EC68  EC 15 05 72 */	fmuls f0, f21, f21
/* 80141D2C 0013EC6C  EC 16 05 BA */	fmadds f0, f22, f22, f0
/* 80141D30 0013EC70  EC 34 05 3A */	fmadds f1, f20, f20, f0
/* 80141D34 0013EC74  48 2C FA D1 */	bl pikmin2_sqrtf__Ff
/* 80141D38 0013EC78  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141D3C 0013EC7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141D40 0013EC80  40 81 00 18 */	ble .L_80141D58
/* 80141D44 0013EC84  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80141D48 0013EC88  EC 00 08 24 */	fdivs f0, f0, f1
/* 80141D4C 0013EC8C  EE D6 00 32 */	fmuls f22, f22, f0
/* 80141D50 0013EC90  EE B5 00 32 */	fmuls f21, f21, f0
/* 80141D54 0013EC94  EE 94 00 32 */	fmuls f20, f20, f0
.L_80141D58:
/* 80141D58 0013EC98  EC 36 05 F2 */	fmuls f1, f22, f23
/* 80141D5C 0013EC9C  EC 54 06 32 */	fmuls f2, f20, f24
/* 80141D60 0013ECA0  EC 15 06 72 */	fmuls f0, f21, f25
/* 80141D64 0013ECA4  EF 74 0E 78 */	fmsubs f27, f20, f25, f1
/* 80141D68 0013ECA8  EF 55 15 F8 */	fmsubs f26, f21, f23, f2
/* 80141D6C 0013ECAC  EF 96 06 38 */	fmsubs f28, f22, f24, f0
/* 80141D70 0013ECB0  EC 1B 06 F2 */	fmuls f0, f27, f27
/* 80141D74 0013ECB4  EC 1A 06 BA */	fmadds f0, f26, f26, f0
/* 80141D78 0013ECB8  EC 3C 07 3A */	fmadds f1, f28, f28, f0
/* 80141D7C 0013ECBC  48 2C FA 89 */	bl pikmin2_sqrtf__Ff
/* 80141D80 0013ECC0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141D84 0013ECC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141D88 0013ECC8  40 81 00 18 */	ble .L_80141DA0
/* 80141D8C 0013ECCC  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80141D90 0013ECD0  EC 00 08 24 */	fdivs f0, f0, f1
/* 80141D94 0013ECD4  EF 5A 00 32 */	fmuls f26, f26, f0
/* 80141D98 0013ECD8  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80141D9C 0013ECDC  EF 9C 00 32 */	fmuls f28, f28, f0
.L_80141DA0:
/* 80141DA0 0013ECE0  D2 C1 00 14 */	stfs f22, 0x14(r1)
/* 80141DA4 0013ECE4  38 61 00 14 */	addi r3, r1, 0x14
/* 80141DA8 0013ECE8  D2 A1 00 24 */	stfs f21, 0x24(r1)
/* 80141DAC 0013ECEC  D2 81 00 34 */	stfs f20, 0x34(r1)
/* 80141DB0 0013ECF0  D3 21 00 18 */	stfs f25, 0x18(r1)
/* 80141DB4 0013ECF4  D3 01 00 28 */	stfs f24, 0x28(r1)
/* 80141DB8 0013ECF8  D2 E1 00 38 */	stfs f23, 0x38(r1)
/* 80141DBC 0013ECFC  D3 41 00 1C */	stfs f26, 0x1c(r1)
/* 80141DC0 0013ED00  D3 61 00 2C */	stfs f27, 0x2c(r1)
/* 80141DC4 0013ED04  D3 81 00 3C */	stfs f28, 0x3c(r1)
/* 80141DC8 0013ED08  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 80141DCC 0013ED0C  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 80141DD0 0013ED10  D3 A1 00 40 */	stfs f29, 0x40(r1)
/* 80141DD4 0013ED14  80 9F 02 90 */	lwz r4, 0x290(r31)
/* 80141DD8 0013ED18  80 84 00 08 */	lwz r4, 8(r4)
/* 80141DDC 0013ED1C  38 84 00 24 */	addi r4, r4, 0x24
/* 80141DE0 0013ED20  4B FA 84 ED */	bl PSMTXCopy
/* 80141DE4 0013ED24  80 9F 02 94 */	lwz r4, 0x294(r31)
/* 80141DE8 0013ED28  38 61 00 14 */	addi r3, r1, 0x14
/* 80141DEC 0013ED2C  80 84 00 08 */	lwz r4, 8(r4)
/* 80141DF0 0013ED30  38 84 00 24 */	addi r4, r4, 0x24
/* 80141DF4 0013ED34  4B FA 84 D9 */	bl PSMTXCopy
/* 80141DF8 0013ED38  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80141DFC 0013ED3C  80 63 00 08 */	lwz r3, 8(r3)
/* 80141E00 0013ED40  81 83 00 00 */	lwz r12, 0(r3)
/* 80141E04 0013ED44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80141E08 0013ED48  7D 89 03 A6 */	mtctr r12
/* 80141E0C 0013ED4C  4E 80 04 21 */	bctrl 
/* 80141E10 0013ED50  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80141E14 0013ED54  80 63 00 08 */	lwz r3, 8(r3)
/* 80141E18 0013ED58  81 83 00 00 */	lwz r12, 0(r3)
/* 80141E1C 0013ED5C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80141E20 0013ED60  7D 89 03 A6 */	mtctr r12
/* 80141E24 0013ED64  4E 80 04 21 */	bctrl 
/* 80141E28 0013ED68  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80141E2C 0013ED6C  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80141E30 0013ED70  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80141E34 0013ED74  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80141E38 0013ED78  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80141E3C 0013ED7C  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80141E40 0013ED80  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80141E44 0013ED84  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80141E48 0013ED88  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80141E4C 0013ED8C  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80141E50 0013ED90  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80141E54 0013ED94  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80141E58 0013ED98  E3 21 00 A8 */	psq_l f25, 168(r1), 0, qr0
/* 80141E5C 0013ED9C  CB 21 00 A0 */	lfd f25, 0xa0(r1)
/* 80141E60 0013EDA0  E3 01 00 98 */	psq_l f24, 152(r1), 0, qr0
/* 80141E64 0013EDA4  CB 01 00 90 */	lfd f24, 0x90(r1)
/* 80141E68 0013EDA8  E2 E1 00 88 */	psq_l f23, 136(r1), 0, qr0
/* 80141E6C 0013EDAC  CA E1 00 80 */	lfd f23, 0x80(r1)
/* 80141E70 0013EDB0  E2 C1 00 78 */	psq_l f22, 120(r1), 0, qr0
/* 80141E74 0013EDB4  CA C1 00 70 */	lfd f22, 0x70(r1)
/* 80141E78 0013EDB8  E2 A1 00 68 */	psq_l f21, 104(r1), 0, qr0
/* 80141E7C 0013EDBC  CA A1 00 60 */	lfd f21, 0x60(r1)
/* 80141E80 0013EDC0  E2 81 00 58 */	psq_l f20, 88(r1), 0, qr0
/* 80141E84 0013EDC4  CA 81 00 50 */	lfd f20, 0x50(r1)
/* 80141E88 0013EDC8  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80141E8C 0013EDCC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80141E90 0013EDD0  7C 08 03 A6 */	mtlr r0
/* 80141E94 0013EDD4  38 21 01 10 */	addi r1, r1, 0x110
/* 80141E98 0013EDD8  4E 80 00 20 */	blr 
.endfn updateCursor__Q24Game4NaviFv

.fn doSimulation__Q24Game4NaviFf, global
/* 80141E9C 0013EDDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141EA0 0013EDE0  7C 08 02 A6 */	mflr r0
/* 80141EA4 0013EDE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141EA8 0013EDE8  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 80141EAC 0013EDEC  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 80141EB0 0013EDF0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80141EB4 0013EDF4  41 82 00 2C */	beq .L_80141EE0
/* 80141EB8 0013EDF8  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80141EBC 0013EDFC  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80141EC0 0013EE00  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 80141EC4 0013EE04  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 80141EC8 0013EE08  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 80141ECC 0013EE0C  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 80141ED0 0013EE10  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 80141ED4 0013EE14  D0 03 01 1C */	stfs f0, 0x11c(r3)
/* 80141ED8 0013EE18  D0 03 01 20 */	stfs f0, 0x120(r3)
/* 80141EDC 0013EE1C  D0 03 01 24 */	stfs f0, 0x124(r3)
.L_80141EE0:
/* 80141EE0 0013EE20  4B FF CE FD */	bl doSimulation__Q24Game8FakePikiFf
/* 80141EE4 0013EE24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141EE8 0013EE28  7C 08 03 A6 */	mtlr r0
/* 80141EEC 0013EE2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80141EF0 0013EE30  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game4NaviFf

.fn doSetView__Q24Game4NaviFi, global
/* 80141EF4 0013EE34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141EF8 0013EE38  7C 08 02 A6 */	mflr r0
/* 80141EFC 0013EE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141F00 0013EE40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80141F04 0013EE44  7C 9F 23 78 */	mr r31, r4
/* 80141F08 0013EE48  93 C1 00 08 */	stw r30, 8(r1)
/* 80141F0C 0013EE4C  7C 7E 1B 78 */	mr r30, r3
/* 80141F10 0013EE50  4B FF 99 A1 */	bl doSetView__Q24Game8CreatureFi
/* 80141F14 0013EE54  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80141F18 0013EE58  7F E4 FB 78 */	mr r4, r31
/* 80141F1C 0013EE5C  48 2F D1 A5 */	bl setCurrentViewNo__Q28SysShape5ModelFUl
/* 80141F20 0013EE60  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 80141F24 0013EE64  7F E4 FB 78 */	mr r4, r31
/* 80141F28 0013EE68  48 2F D1 99 */	bl setCurrentViewNo__Q28SysShape5ModelFUl
/* 80141F2C 0013EE6C  38 00 00 10 */	li r0, 0x10
/* 80141F30 0013EE70  88 7E 00 D8 */	lbz r3, 0xd8(r30)
/* 80141F34 0013EE74  7C 00 F8 30 */	slw r0, r0, r31
/* 80141F38 0013EE78  7C 60 00 39 */	and. r0, r3, r0
/* 80141F3C 0013EE7C  41 82 00 30 */	beq .L_80141F6C
/* 80141F40 0013EE80  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80141F44 0013EE84  81 83 00 00 */	lwz r12, 0(r3)
/* 80141F48 0013EE88  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80141F4C 0013EE8C  7D 89 03 A6 */	mtctr r12
/* 80141F50 0013EE90  4E 80 04 21 */	bctrl 
/* 80141F54 0013EE94  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 80141F58 0013EE98  81 83 00 00 */	lwz r12, 0(r3)
/* 80141F5C 0013EE9C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80141F60 0013EEA0  7D 89 03 A6 */	mtctr r12
/* 80141F64 0013EEA4  4E 80 04 21 */	bctrl 
/* 80141F68 0013EEA8  48 00 00 2C */	b .L_80141F94
.L_80141F6C:
/* 80141F6C 0013EEAC  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80141F70 0013EEB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80141F74 0013EEB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80141F78 0013EEB8  7D 89 03 A6 */	mtctr r12
/* 80141F7C 0013EEBC  4E 80 04 21 */	bctrl 
/* 80141F80 0013EEC0  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 80141F84 0013EEC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80141F88 0013EEC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80141F8C 0013EECC  7D 89 03 A6 */	mtctr r12
/* 80141F90 0013EED0  4E 80 04 21 */	bctrl 
.L_80141F94:
/* 80141F94 0013EED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141F98 0013EED8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80141F9C 0013EEDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80141FA0 0013EEE0  7C 08 03 A6 */	mtlr r0
/* 80141FA4 0013EEE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80141FA8 0013EEE8  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game4NaviFi

.fn doViewCalc__Q24Game4NaviFv, global
/* 80141FAC 0013EEEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141FB0 0013EEF0  7C 08 02 A6 */	mflr r0
/* 80141FB4 0013EEF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141FB8 0013EEF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80141FBC 0013EEFC  7C 7F 1B 78 */	mr r31, r3
/* 80141FC0 0013EF00  4B FF 99 F9 */	bl doViewCalc__Q24Game8CreatureFv
/* 80141FC4 0013EF04  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80141FC8 0013EF08  48 2F D0 91 */	bl viewCalc__Q28SysShape5ModelFv
/* 80141FCC 0013EF0C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80141FD0 0013EF10  48 2F D0 89 */	bl viewCalc__Q28SysShape5ModelFv
/* 80141FD4 0013EF14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141FD8 0013EF18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80141FDC 0013EF1C  7C 08 03 A6 */	mtlr r0
/* 80141FE0 0013EF20  38 21 00 10 */	addi r1, r1, 0x10
/* 80141FE4 0013EF24  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game4NaviFv

.fn setLifeMax__Q24Game4NaviFv, global
/* 80141FE8 0013EF28  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80141FEC 0013EF2C  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 80141FF0 0013EF30  C0 04 09 D0 */	lfs f0, 0x9d0(r4)
/* 80141FF4 0013EF34  D0 03 02 A0 */	stfs f0, 0x2a0(r3)
/* 80141FF8 0013EF38  4E 80 00 20 */	blr 
.endfn setLifeMax__Q24Game4NaviFv

.fn getLifeRatio__Q24Game4NaviFv, global
/* 80141FFC 0013EF3C  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80142000 0013EF40  C0 23 02 A0 */	lfs f1, 0x2a0(r3)
/* 80142004 0013EF44  80 64 00 C8 */	lwz r3, 0xc8(r4)
/* 80142008 0013EF48  C0 03 09 D0 */	lfs f0, 0x9d0(r3)
/* 8014200C 0013EF4C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80142010 0013EF50  4E 80 00 20 */	blr 
.endfn getLifeRatio__Q24Game4NaviFv

.fn getDownfloorMass__Q24Game4NaviFv, global
/* 80142014 0013EF54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80142018 0013EF58  7C 08 02 A6 */	mflr r0
/* 8014201C 0013EF5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80142020 0013EF60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80142024 0013EF64  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80142028 0013EF68  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014202C 0013EF6C  83 E3 02 74 */	lwz r31, 0x274(r3)
/* 80142030 0013EF70  28 1F 00 00 */	cmplwi r31, 0
/* 80142034 0013EF74  41 82 00 0C */	beq .L_80142040
/* 80142038 0013EF78  80 1F 00 04 */	lwz r0, 4(r31)
/* 8014203C 0013EF7C  48 00 00 08 */	b .L_80142044
.L_80142040:
/* 80142040 0013EF80  38 00 FF FF */	li r0, -1
.L_80142044:
/* 80142044 0013EF84  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80142048 0013EF88  2C 00 00 06 */	cmpwi r0, 6
/* 8014204C 0013EF8C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80142050 0013EF90  83 C3 0C 28 */	lwz r30, 0xc28(r3)
/* 80142054 0013EF94  40 82 00 4C */	bne .L_801420A0
/* 80142058 0013EF98  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8014205C 0013EF9C  3B A0 00 01 */	li r29, 1
/* 80142060 0013EFA0  28 03 00 00 */	cmplwi r3, 0
/* 80142064 0013EFA4  41 82 00 30 */	beq .L_80142094
/* 80142068 0013EFA8  48 00 6E CD */	bl getStateID__Q24Game4PikiFv
/* 8014206C 0013EFAC  2C 03 00 04 */	cmpwi r3, 4
/* 80142070 0013EFB0  40 82 00 1C */	bne .L_8014208C
/* 80142074 0013EFB4  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80142078 0013EFB8  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8014207C 0013EFBC  2C 00 00 03 */	cmpwi r0, 3
/* 80142080 0013EFC0  40 82 00 18 */	bne .L_80142098
/* 80142084 0013EFC4  3B A0 00 02 */	li r29, 2
/* 80142088 0013EFC8  48 00 00 10 */	b .L_80142098
.L_8014208C:
/* 8014208C 0013EFCC  3B A0 00 00 */	li r29, 0
/* 80142090 0013EFD0  48 00 00 08 */	b .L_80142098
.L_80142094:
/* 80142094 0013EFD4  3B A0 00 00 */	li r29, 0
.L_80142098:
/* 80142098 0013EFD8  7C 7E EA 14 */	add r3, r30, r29
/* 8014209C 0013EFDC  48 00 00 08 */	b .L_801420A4
.L_801420A0:
/* 801420A0 0013EFE0  7F C3 F3 78 */	mr r3, r30
.L_801420A4:
/* 801420A4 0013EFE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801420A8 0013EFE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801420AC 0013EFEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801420B0 0013EFF0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801420B4 0013EFF4  7C 08 03 A6 */	mtlr r0
/* 801420B8 0013EFF8  38 21 00 20 */	addi r1, r1, 0x20
/* 801420BC 0013EFFC  4E 80 00 20 */	blr 
.endfn getDownfloorMass__Q24Game4NaviFv

.fn update__Q24Game4NaviFv, global
/* 801420C0 0013F000  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801420C4 0013F004  7C 08 02 A6 */	mflr r0
/* 801420C8 0013F008  90 01 00 44 */	stw r0, 0x44(r1)
/* 801420CC 0013F00C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801420D0 0013F010  7C 7F 1B 78 */	mr r31, r3
/* 801420D4 0013F014  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801420D8 0013F018  88 63 02 A4 */	lbz r3, 0x2a4(r3)
/* 801420DC 0013F01C  28 03 00 00 */	cmplwi r3, 0
/* 801420E0 0013F020  41 82 00 0C */	beq .L_801420EC
/* 801420E4 0013F024  38 03 FF FF */	addi r0, r3, -1
/* 801420E8 0013F028  98 1F 02 A4 */	stb r0, 0x2a4(r31)
.L_801420EC:
/* 801420EC 0013F02C  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 801420F0 0013F030  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801420F4 0013F034  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801420F8 0013F038  7D 89 03 A6 */	mtctr r12
/* 801420FC 0013F03C  4E 80 04 21 */	bctrl 
/* 80142100 0013F040  7F E3 FB 78 */	mr r3, r31
/* 80142104 0013F044  48 0D D2 CD */	bl demoCheck__Q24Game4NaviFv
/* 80142108 0013F048  7F E3 FB 78 */	mr r3, r31
/* 8014210C 0013F04C  4B FF B7 31 */	bl updateLook__Q24Game8FakePikiFv
/* 80142110 0013F050  7F E3 FB 78 */	mr r3, r31
/* 80142114 0013F054  81 9F 00 00 */	lwz r12, 0(r31)
/* 80142118 0013F058  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 8014211C 0013F05C  7D 89 03 A6 */	mtctr r12
/* 80142120 0013F060  4E 80 04 21 */	bctrl 
/* 80142124 0013F064  7F E3 FB 78 */	mr r3, r31
/* 80142128 0013F068  48 00 29 AD */	bl updateKaisanDisable__Q24Game4NaviFv
/* 8014212C 0013F06C  7F E3 FB 78 */	mr r3, r31
/* 80142130 0013F070  48 00 2A 3D */	bl updateThrowDisable__Q24Game4NaviFv
/* 80142134 0013F074  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80142138 0013F078  48 27 5D C5 */	bl update__Q23efx11TNaviEffectFv
/* 8014213C 0013F07C  7F E3 FB 78 */	mr r3, r31
/* 80142140 0013F080  48 00 0D 51 */	bl checkHole__Q24Game4NaviFv
/* 80142144 0013F084  28 03 00 00 */	cmplwi r3, 0
/* 80142148 0013F088  41 82 00 3C */	beq .L_80142184
/* 8014214C 0013F08C  80 BF 02 78 */	lwz r5, 0x278(r31)
/* 80142150 0013F090  28 05 00 00 */	cmplwi r5, 0
/* 80142154 0013F094  41 82 00 30 */	beq .L_80142184
/* 80142158 0013F098  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8014215C 0013F09C  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80142160 0013F0A0  41 82 00 24 */	beq .L_80142184
/* 80142164 0013F0A4  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80142168 0013F0A8  7C 64 1B 78 */	mr r4, r3
/* 8014216C 0013F0AC  80 66 00 58 */	lwz r3, 0x58(r6)
/* 80142170 0013F0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80142174 0013F0B4  81 8C 00 DC */	lwz r12, 0xdc(r12)
/* 80142178 0013F0B8  7D 89 03 A6 */	mtctr r12
/* 8014217C 0013F0BC  4E 80 04 21 */	bctrl 
/* 80142180 0013F0C0  48 00 01 D0 */	b .L_80142350
.L_80142184:
/* 80142184 0013F0C4  7F E3 FB 78 */	mr r3, r31
/* 80142188 0013F0C8  48 00 10 31 */	bl checkCave__Q24Game4NaviFv
/* 8014218C 0013F0CC  28 03 00 00 */	cmplwi r3, 0
/* 80142190 0013F0D0  41 82 00 40 */	beq .L_801421D0
/* 80142194 0013F0D4  80 9F 02 78 */	lwz r4, 0x278(r31)
/* 80142198 0013F0D8  28 04 00 00 */	cmplwi r4, 0
/* 8014219C 0013F0DC  41 82 00 34 */	beq .L_801421D0
/* 801421A0 0013F0E0  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 801421A4 0013F0E4  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 801421A8 0013F0E8  41 82 00 28 */	beq .L_801421D0
/* 801421AC 0013F0EC  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 801421B0 0013F0F0  7C 64 1B 78 */	mr r4, r3
/* 801421B4 0013F0F4  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 801421B8 0013F0F8  80 66 00 58 */	lwz r3, 0x58(r6)
/* 801421BC 0013F0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801421C0 0013F100  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 801421C4 0013F104  7D 89 03 A6 */	mtctr r12
/* 801421C8 0013F108  4E 80 04 21 */	bctrl 
/* 801421CC 0013F10C  48 00 01 84 */	b .L_80142350
.L_801421D0:
/* 801421D0 0013F110  7F E3 FB 78 */	mr r3, r31
/* 801421D4 0013F114  48 00 12 B1 */	bl checkBigFountain__Q24Game4NaviFv
/* 801421D8 0013F118  7C 7E 1B 79 */	or. r30, r3, r3
/* 801421DC 0013F11C  41 82 00 58 */	beq .L_80142234
/* 801421E0 0013F120  80 9F 02 78 */	lwz r4, 0x278(r31)
/* 801421E4 0013F124  28 04 00 00 */	cmplwi r4, 0
/* 801421E8 0013F128  41 82 00 4C */	beq .L_80142234
/* 801421EC 0013F12C  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 801421F0 0013F130  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 801421F4 0013F134  41 82 00 40 */	beq .L_80142234
/* 801421F8 0013F138  81 83 00 00 */	lwz r12, 0(r3)
/* 801421FC 0013F13C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80142200 0013F140  7D 89 03 A6 */	mtctr r12
/* 80142204 0013F144  4E 80 04 21 */	bctrl 
/* 80142208 0013F148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014220C 0013F14C  40 82 00 28 */	bne .L_80142234
/* 80142210 0013F150  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80142214 0013F154  7F C4 F3 78 */	mr r4, r30
/* 80142218 0013F158  80 BF 02 78 */	lwz r5, 0x278(r31)
/* 8014221C 0013F15C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80142220 0013F160  81 83 00 00 */	lwz r12, 0(r3)
/* 80142224 0013F164  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 80142228 0013F168  7D 89 03 A6 */	mtctr r12
/* 8014222C 0013F16C  4E 80 04 21 */	bctrl 
/* 80142230 0013F170  48 00 01 20 */	b .L_80142350
.L_80142234:
/* 80142234 0013F174  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80142238 0013F178  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8014223C 0013F17C  80 84 00 50 */	lwz r4, 0x50(r4)
/* 80142240 0013F180  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80142244 0013F184  7C 64 00 50 */	subf r3, r4, r0
/* 80142248 0013F188  4B F8 3F 09 */	bl abs
/* 8014224C 0013F18C  2C 03 00 0A */	cmpwi r3, 0xa
/* 80142250 0013F190  40 81 00 48 */	ble .L_80142298
/* 80142254 0013F194  38 61 00 1C */	addi r3, r1, 0x1c
/* 80142258 0013F198  48 07 25 3D */	bl __ct__Q24Game8FootmarkFv
/* 8014225C 0013F19C  7F E4 FB 78 */	mr r4, r31
/* 80142260 0013F1A0  38 61 00 10 */	addi r3, r1, 0x10
/* 80142264 0013F1A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80142268 0013F1A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014226C 0013F1AC  7D 89 03 A6 */	mtctr r12
/* 80142270 0013F1B0  4E 80 04 21 */	bctrl 
/* 80142274 0013F1B4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80142278 0013F1B8  38 81 00 1C */	addi r4, r1, 0x1c
/* 8014227C 0013F1BC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80142280 0013F1C0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80142284 0013F1C4  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80142288 0013F1C8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8014228C 0013F1CC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80142290 0013F1D0  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 80142294 0013F1D4  48 07 25 A5 */	bl add__Q24Game9FootmarksFRQ24Game8Footmark
.L_80142298:
/* 80142298 0013F1D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014229C 0013F1DC  48 07 2D 25 */	bl paused_soft__Q24Game10GameSystemFv
/* 801422A0 0013F1E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801422A4 0013F1E4  40 82 00 8C */	bne .L_80142330
/* 801422A8 0013F1E8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801422AC 0013F1EC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801422B0 0013F1F0  2C 00 00 01 */	cmpwi r0, 1
/* 801422B4 0013F1F4  40 82 00 7C */	bne .L_80142330
/* 801422B8 0013F1F8  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801422BC 0013F1FC  28 03 00 00 */	cmplwi r3, 0
/* 801422C0 0013F200  41 82 00 70 */	beq .L_80142330
/* 801422C4 0013F204  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801422C8 0013F208  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 801422CC 0013F20C  41 82 00 64 */	beq .L_80142330
/* 801422D0 0013F210  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 801422D4 0013F214  28 03 00 00 */	cmplwi r3, 0
/* 801422D8 0013F218  41 82 00 58 */	beq .L_80142330
/* 801422DC 0013F21C  81 83 00 00 */	lwz r12, 0(r3)
/* 801422E0 0013F220  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801422E4 0013F224  7D 89 03 A6 */	mtctr r12
/* 801422E8 0013F228  4E 80 04 21 */	bctrl 
/* 801422EC 0013F22C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801422F0 0013F230  41 82 00 40 */	beq .L_80142330
/* 801422F4 0013F234  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 801422F8 0013F238  3C 60 80 4B */	lis r3, __vt__Q24Game11GameMessage@ha
/* 801422FC 0013F23C  38 03 05 90 */	addi r0, r3, __vt__Q24Game11GameMessage@l
/* 80142300 0013F240  3C 60 80 4B */	lis r3, __vt__Q24Game20GameMessageVsUseCard@ha
/* 80142304 0013F244  90 01 00 08 */	stw r0, 8(r1)
/* 80142308 0013F248  38 03 60 F4 */	addi r0, r3, __vt__Q24Game20GameMessageVsUseCard@l
/* 8014230C 0013F24C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80142310 0013F250  38 81 00 08 */	addi r4, r1, 8
/* 80142314 0013F254  90 01 00 08 */	stw r0, 8(r1)
/* 80142318 0013F258  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8014231C 0013F25C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80142320 0013F260  81 83 00 00 */	lwz r12, 0(r3)
/* 80142324 0013F264  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80142328 0013F268  7D 89 03 A6 */	mtctr r12
/* 8014232C 0013F26C  4E 80 04 21 */	bctrl 
.L_80142330:
/* 80142330 0013F270  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 80142334 0013F274  7F E4 FB 78 */	mr r4, r31
/* 80142338 0013F278  81 83 00 00 */	lwz r12, 0(r3)
/* 8014233C 0013F27C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80142340 0013F280  7D 89 03 A6 */	mtctr r12
/* 80142344 0013F284  4E 80 04 21 */	bctrl 
/* 80142348 0013F288  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8014234C 0013F28C  48 05 42 51 */	bl update__Q24Game6CPlateFv
.L_80142350:
/* 80142350 0013F290  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80142354 0013F294  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80142358 0013F298  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014235C 0013F29C  7C 08 03 A6 */	mtlr r0
/* 80142360 0013F2A0  38 21 00 40 */	addi r1, r1, 0x40
/* 80142364 0013F2A4  4E 80 00 20 */	blr 
.endfn update__Q24Game4NaviFv

.fn vsUsableY__Q24Game9NaviStateFv, weak
/* 80142368 0013F2A8  38 60 00 01 */	li r3, 1
/* 8014236C 0013F2AC  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game9NaviStateFv

.fn openKanketuMenu__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller, weak
/* 80142370 0013F2B0  4E 80 00 20 */	blr 
.endfn openKanketuMenu__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller

.fn openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi, weak
/* 80142374 0013F2B4  4E 80 00 20 */	blr 
.endfn openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi

.fn openCaveMoreMenu__Q24Game15BaseGameSectionFPQ34Game8ItemHole4ItemP10Controller, weak
/* 80142378 0013F2B8  4E 80 00 20 */	blr 
.endfn openCaveMoreMenu__Q24Game15BaseGameSectionFPQ34Game8ItemHole4ItemP10Controller

.fn do_updateLookCreature__Q24Game4NaviFv, global
/* 8014237C 0013F2BC  4E 80 00 20 */	blr 
.endfn do_updateLookCreature__Q24Game4NaviFv

.fn inWaterCallback__Q24Game4NaviFPQ24Game8WaterBox, global
/* 80142380 0013F2C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80142384 0013F2C4  7C 08 02 A6 */	mflr r0
/* 80142388 0013F2C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014238C 0013F2CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80142390 0013F2D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80142394 0013F2D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80142398 0013F2D8  7C 7D 1B 78 */	mr r29, r3
/* 8014239C 0013F2DC  7C 83 23 78 */	mr r3, r4
/* 801423A0 0013F2E0  81 84 00 00 */	lwz r12, 0(r4)
/* 801423A4 0013F2E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801423A8 0013F2E8  7D 89 03 A6 */	mtctr r12
/* 801423AC 0013F2EC  4E 80 04 21 */	bctrl 
/* 801423B0 0013F2F0  80 9D 02 D0 */	lwz r4, 0x2d0(r29)
/* 801423B4 0013F2F4  90 64 00 18 */	stw r3, 0x18(r4)
/* 801423B8 0013F2F8  83 DD 02 D0 */	lwz r30, 0x2d0(r29)
/* 801423BC 0013F2FC  80 9E 00 00 */	lwz r4, 0(r30)
/* 801423C0 0013F300  7F C3 F3 78 */	mr r3, r30
/* 801423C4 0013F304  60 80 00 01 */	ori r0, r4, 1
/* 801423C8 0013F308  54 9F 07 FE */	clrlwi r31, r4, 0x1f
/* 801423CC 0013F30C  90 1E 00 00 */	stw r0, 0(r30)
/* 801423D0 0013F310  48 27 5B 4D */	bl updateHamon___Q23efx11TNaviEffectFv
/* 801423D4 0013F314  28 1F 00 00 */	cmplwi r31, 0
/* 801423D8 0013F318  40 82 00 0C */	bne .L_801423E4
/* 801423DC 0013F31C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 801423E0 0013F320  48 27 54 B5 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_801423E4:
/* 801423E4 0013F324  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 801423E8 0013F328  38 80 08 14 */	li r4, 0x814
/* 801423EC 0013F32C  38 A0 00 00 */	li r5, 0
/* 801423F0 0013F330  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801423F4 0013F334  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801423F8 0013F338  7D 89 03 A6 */	mtctr r12
/* 801423FC 0013F33C  4E 80 04 21 */	bctrl 
/* 80142400 0013F340  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80142404 0013F344  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80142408 0013F348  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014240C 0013F34C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80142410 0013F350  7C 08 03 A6 */	mtlr r0
/* 80142414 0013F354  38 21 00 20 */	addi r1, r1, 0x20
/* 80142418 0013F358  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q24Game4NaviFPQ24Game8WaterBox

.fn outWaterCallback__Q24Game4NaviFv, global
/* 8014241C 0013F35C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142420 0013F360  7C 08 02 A6 */	mflr r0
/* 80142424 0013F364  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142428 0013F368  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014242C 0013F36C  83 E3 02 D0 */	lwz r31, 0x2d0(r3)
/* 80142430 0013F370  80 1F 00 00 */	lwz r0, 0(r31)
/* 80142434 0013F374  7F E3 FB 78 */	mr r3, r31
/* 80142438 0013F378  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8014243C 0013F37C  90 1F 00 00 */	stw r0, 0(r31)
/* 80142440 0013F380  48 27 5C 15 */	bl killHamonA___Q23efx11TNaviEffectFv
/* 80142444 0013F384  7F E3 FB 78 */	mr r3, r31
/* 80142448 0013F388  48 27 5C 91 */	bl killHamonB___Q23efx11TNaviEffectFv
/* 8014244C 0013F38C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80142450 0013F390  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142454 0013F394  7C 08 03 A6 */	mtlr r0
/* 80142458 0013F398  38 21 00 10 */	addi r1, r1, 0x10
/* 8014245C 0013F39C  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q24Game4NaviFv

.fn ignoreAtari__Q24Game4NaviFPQ24Game8Creature, global
/* 80142460 0013F3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142464 0013F3A4  7C 08 02 A6 */	mflr r0
/* 80142468 0013F3A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014246C 0013F3AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80142470 0013F3B0  7C 9F 23 78 */	mr r31, r4
/* 80142474 0013F3B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80142478 0013F3B8  7C 7E 1B 78 */	mr r30, r3
/* 8014247C 0013F3BC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80142480 0013F3C0  80 05 01 F0 */	lwz r0, 0x1f0(r5)
/* 80142484 0013F3C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80142488 0013F3C8  41 82 00 28 */	beq .L_801424B0
/* 8014248C 0013F3CC  7F E3 FB 78 */	mr r3, r31
/* 80142490 0013F3D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80142494 0013F3D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80142498 0013F3D8  7D 89 03 A6 */	mtctr r12
/* 8014249C 0013F3DC  4E 80 04 21 */	bctrl 
/* 801424A0 0013F3E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801424A4 0013F3E4  41 82 00 0C */	beq .L_801424B0
/* 801424A8 0013F3E8  38 60 00 01 */	li r3, 1
/* 801424AC 0013F3EC  48 00 00 4C */	b .L_801424F8
.L_801424B0:
/* 801424B0 0013F3F0  7F E3 FB 78 */	mr r3, r31
/* 801424B4 0013F3F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801424B8 0013F3F8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 801424BC 0013F3FC  7D 89 03 A6 */	mtctr r12
/* 801424C0 0013F400  4E 80 04 21 */	bctrl 
/* 801424C4 0013F404  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801424C8 0013F408  41 82 00 18 */	beq .L_801424E0
/* 801424CC 0013F40C  88 1F 03 2C */	lbz r0, 0x32c(r31)
/* 801424D0 0013F410  28 00 00 01 */	cmplwi r0, 1
/* 801424D4 0013F414  40 82 00 0C */	bne .L_801424E0
/* 801424D8 0013F418  38 60 00 01 */	li r3, 1
/* 801424DC 0013F41C  48 00 00 1C */	b .L_801424F8
.L_801424E0:
/* 801424E0 0013F420  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 801424E4 0013F424  7F E4 FB 78 */	mr r4, r31
/* 801424E8 0013F428  81 83 00 00 */	lwz r12, 0(r3)
/* 801424EC 0013F42C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801424F0 0013F430  7D 89 03 A6 */	mtctr r12
/* 801424F4 0013F434  4E 80 04 21 */	bctrl 
.L_801424F8:
/* 801424F8 0013F438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801424FC 0013F43C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142500 0013F440  83 C1 00 08 */	lwz r30, 8(r1)
/* 80142504 0013F444  7C 08 03 A6 */	mtlr r0
/* 80142508 0013F448  38 21 00 10 */	addi r1, r1, 0x10
/* 8014250C 0013F44C  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game4NaviFPQ24Game8Creature

.fn ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature, weak
/* 80142510 0013F450  38 60 00 00 */	li r3, 0
/* 80142514 0013F454  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature

.fn on_movie_begin__Q24Game4NaviFb, global
/* 80142518 0013F458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014251C 0013F45C  7C 08 02 A6 */	mflr r0
/* 80142520 0013F460  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142524 0013F464  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80142528 0013F468  A0 03 02 88 */	lhz r0, 0x288(r3)
/* 8014252C 0013F46C  60 00 00 01 */	ori r0, r0, 1
/* 80142530 0013F470  B0 03 02 88 */	sth r0, 0x288(r3)
/* 80142534 0013F474  83 E3 02 D0 */	lwz r31, 0x2d0(r3)
/* 80142538 0013F478  7F E3 FB 78 */	mr r3, r31
/* 8014253C 0013F47C  48 27 5D 6D */	bl killCursor___Q23efx11TNaviEffectFv
/* 80142540 0013F480  7F E3 FB 78 */	mr r3, r31
/* 80142544 0013F484  48 27 5C D5 */	bl killLightAct___Q23efx11TNaviEffectFv
/* 80142548 0013F488  7F E3 FB 78 */	mr r3, r31
/* 8014254C 0013F48C  48 27 60 C1 */	bl killFueact___Q23efx11TNaviEffectFv
/* 80142550 0013F490  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80142554 0013F494  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142558 0013F498  7C 08 03 A6 */	mtlr r0
/* 8014255C 0013F49C  38 21 00 10 */	addi r1, r1, 0x10
/* 80142560 0013F4A0  4E 80 00 20 */	blr 
.endfn on_movie_begin__Q24Game4NaviFb

.fn on_movie_end__Q24Game4NaviFb, global
/* 80142564 0013F4A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142568 0013F4A8  7C 08 02 A6 */	mflr r0
/* 8014256C 0013F4AC  38 80 00 1F */	li r4, 0x1f
/* 80142570 0013F4B0  38 A0 00 1F */	li r5, 0x1f
/* 80142574 0013F4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142578 0013F4B8  38 C0 00 00 */	li r6, 0
/* 8014257C 0013F4BC  38 E0 00 00 */	li r7, 0
/* 80142580 0013F4C0  A0 03 02 88 */	lhz r0, 0x288(r3)
/* 80142584 0013F4C4  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 80142588 0013F4C8  B0 03 02 88 */	sth r0, 0x288(r3)
/* 8014258C 0013F4CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80142590 0013F4D0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80142594 0013F4D4  7D 89 03 A6 */	mtctr r12
/* 80142598 0013F4D8  4E 80 04 21 */	bctrl 
/* 8014259C 0013F4DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801425A0 0013F4E0  7C 08 03 A6 */	mtlr r0
/* 801425A4 0013F4E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801425A8 0013F4E8  4E 80 00 20 */	blr 
.endfn on_movie_end__Q24Game4NaviFb

.fn movieUserCommand__Q24Game4NaviFUlPQ24Game11MoviePlayer, global
/* 801425AC 0013F4EC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801425B0 0013F4F0  7C 08 02 A6 */	mflr r0
/* 801425B4 0013F4F4  90 01 00 54 */	stw r0, 0x54(r1)
/* 801425B8 0013F4F8  38 04 FF 9C */	addi r0, r4, -100
/* 801425BC 0013F4FC  28 00 00 07 */	cmplwi r0, 7
/* 801425C0 0013F500  3C 80 80 48 */	lis r4, lbl_8047C788@ha
/* 801425C4 0013F504  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801425C8 0013F508  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801425CC 0013F50C  7C BE 2B 78 */	mr r30, r5
/* 801425D0 0013F510  38 A4 C7 88 */	addi r5, r4, lbl_8047C788@l
/* 801425D4 0013F514  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801425D8 0013F518  7C 7D 1B 78 */	mr r29, r3
/* 801425DC 0013F51C  41 81 02 30 */	bgt .L_8014280C
/* 801425E0 0013F520  3C 80 80 4B */	lis r4, lbl_804B04F8@ha
/* 801425E4 0013F524  54 00 10 3A */	slwi r0, r0, 2
/* 801425E8 0013F528  38 84 04 F8 */	addi r4, r4, lbl_804B04F8@l
/* 801425EC 0013F52C  7C 04 00 2E */	lwzx r0, r4, r0
/* 801425F0 0013F530  7C 09 03 A6 */	mtctr r0
/* 801425F4 0013F534  4E 80 04 20 */	bctr 
.L_801425F8:
/* 801425F8 0013F538  48 00 22 2D */	bl enterAllPikis__Q24Game4NaviFv
/* 801425FC 0013F53C  80 1E 01 F0 */	lwz r0, 0x1f0(r30)
/* 80142600 0013F540  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80142604 0013F544  41 82 02 08 */	beq .L_8014280C
/* 80142608 0013F548  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014260C 0013F54C  38 80 00 00 */	li r4, 0
/* 80142610 0013F550  48 01 D6 A5 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80142614 0013F554  48 00 01 F8 */	b .L_8014280C
.L_80142618:
/* 80142618 0013F558  83 FE 01 94 */	lwz r31, 0x194(r30)
/* 8014261C 0013F55C  28 1F 00 00 */	cmplwi r31, 0
/* 80142620 0013F560  40 82 00 18 */	bne .L_80142638
/* 80142624 0013F564  38 65 00 0C */	addi r3, r5, 0xc
/* 80142628 0013F568  38 A5 00 40 */	addi r5, r5, 0x40
/* 8014262C 0013F56C  38 80 08 56 */	li r4, 0x856
/* 80142630 0013F570  4C C6 31 82 */	crclr 6
/* 80142634 0013F574  4B EE 80 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80142638:
/* 80142638 0013F578  7F E4 FB 78 */	mr r4, r31
/* 8014263C 0013F57C  38 61 00 14 */	addi r3, r1, 0x14
/* 80142640 0013F580  81 9F 00 00 */	lwz r12, 0(r31)
/* 80142644 0013F584  81 8C 00 08 */	lwz r12, 8(r12)
/* 80142648 0013F588  7D 89 03 A6 */	mtctr r12
/* 8014264C 0013F58C  4E 80 04 21 */	bctrl 
/* 80142650 0013F590  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80142654 0013F594  7F A3 EB 78 */	mr r3, r29
/* 80142658 0013F598  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8014265C 0013F59C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80142660 0013F5A0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80142664 0013F5A4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80142668 0013F5A8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8014266C 0013F5AC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80142670 0013F5B0  48 00 25 45 */	bl "holeinAllPikis__Q24Game4NaviFR10Vector3<f>"
/* 80142674 0013F5B4  48 00 01 98 */	b .L_8014280C
.L_80142678:
/* 80142678 0013F5B8  83 FE 01 94 */	lwz r31, 0x194(r30)
/* 8014267C 0013F5BC  28 1F 00 00 */	cmplwi r31, 0
/* 80142680 0013F5C0  40 82 00 18 */	bne .L_80142698
/* 80142684 0013F5C4  38 65 00 0C */	addi r3, r5, 0xc
/* 80142688 0013F5C8  38 A5 00 54 */	addi r5, r5, 0x54
/* 8014268C 0013F5CC  38 80 08 64 */	li r4, 0x864
/* 80142690 0013F5D0  4C C6 31 82 */	crclr 6
/* 80142694 0013F5D4  4B EE 7F AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80142698:
/* 80142698 0013F5D8  7F E4 FB 78 */	mr r4, r31
/* 8014269C 0013F5DC  38 61 00 08 */	addi r3, r1, 8
/* 801426A0 0013F5E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801426A4 0013F5E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801426A8 0013F5E8  7D 89 03 A6 */	mtctr r12
/* 801426AC 0013F5EC  4E 80 04 21 */	bctrl 
/* 801426B0 0013F5F0  C0 41 00 08 */	lfs f2, 8(r1)
/* 801426B4 0013F5F4  7F A3 EB 78 */	mr r3, r29
/* 801426B8 0013F5F8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801426BC 0013F5FC  38 81 00 20 */	addi r4, r1, 0x20
/* 801426C0 0013F600  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801426C4 0013F604  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801426C8 0013F608  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801426CC 0013F60C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801426D0 0013F610  48 00 27 F1 */	bl "fountainonAllPikis__Q24Game4NaviFR10Vector3<f>"
/* 801426D4 0013F614  48 00 01 38 */	b .L_8014280C
.L_801426D8:
/* 801426D8 0013F618  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801426DC 0013F61C  7F A4 EB 78 */	mr r4, r29
/* 801426E0 0013F620  48 0F F6 11 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 801426E4 0013F624  48 00 01 28 */	b .L_8014280C
.L_801426E8:
/* 801426E8 0013F628  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801426EC 0013F62C  7F A4 EB 78 */	mr r4, r29
/* 801426F0 0013F630  48 0F F5 BD */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 801426F4 0013F634  48 00 01 18 */	b .L_8014280C
.L_801426F8:
/* 801426F8 0013F638  83 FD 02 D0 */	lwz r31, 0x2d0(r29)
/* 801426FC 0013F63C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80142700 0013F640  54 60 00 01 */	rlwinm. r0, r3, 0, 0, 0
/* 80142704 0013F644  40 82 00 28 */	bne .L_8014272C
/* 80142708 0013F648  90 7F 00 04 */	stw r3, 4(r31)
/* 8014270C 0013F64C  38 00 00 00 */	li r0, 0
/* 80142710 0013F650  98 1F 00 00 */	stb r0, 0(r31)
/* 80142714 0013F654  98 1F 00 01 */	stb r0, 1(r31)
/* 80142718 0013F658  98 1F 00 02 */	stb r0, 2(r31)
/* 8014271C 0013F65C  98 1F 00 03 */	stb r0, 3(r31)
/* 80142720 0013F660  80 1F 00 00 */	lwz r0, 0(r31)
/* 80142724 0013F664  64 00 80 00 */	oris r0, r0, 0x8000
/* 80142728 0013F668  90 1F 00 00 */	stw r0, 0(r31)
.L_8014272C:
/* 8014272C 0013F66C  38 7F 03 3C */	addi r3, r31, 0x33c
/* 80142730 0013F670  81 9F 03 3C */	lwz r12, 0x33c(r31)
/* 80142734 0013F674  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80142738 0013F678  7D 89 03 A6 */	mtctr r12
/* 8014273C 0013F67C  4E 80 04 21 */	bctrl 
/* 80142740 0013F680  38 7F 03 6C */	addi r3, r31, 0x36c
/* 80142744 0013F684  81 9F 03 6C */	lwz r12, 0x36c(r31)
/* 80142748 0013F688  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8014274C 0013F68C  7D 89 03 A6 */	mtctr r12
/* 80142750 0013F690  4E 80 04 21 */	bctrl 
/* 80142754 0013F694  38 7F 03 9C */	addi r3, r31, 0x39c
/* 80142758 0013F698  81 9F 03 9C */	lwz r12, 0x39c(r31)
/* 8014275C 0013F69C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80142760 0013F6A0  7D 89 03 A6 */	mtctr r12
/* 80142764 0013F6A4  4E 80 04 21 */	bctrl 
/* 80142768 0013F6A8  7F E3 FB 78 */	mr r3, r31
/* 8014276C 0013F6AC  48 27 58 E9 */	bl killHamonA___Q23efx11TNaviEffectFv
/* 80142770 0013F6B0  7F E3 FB 78 */	mr r3, r31
/* 80142774 0013F6B4  48 27 59 65 */	bl killHamonB___Q23efx11TNaviEffectFv
/* 80142778 0013F6B8  7F E3 FB 78 */	mr r3, r31
/* 8014277C 0013F6BC  48 27 59 F9 */	bl killLight___Q23efx11TNaviEffectFv
/* 80142780 0013F6C0  7F E3 FB 78 */	mr r3, r31
/* 80142784 0013F6C4  48 27 5A 95 */	bl killLightAct___Q23efx11TNaviEffectFv
/* 80142788 0013F6C8  7F E3 FB 78 */	mr r3, r31
/* 8014278C 0013F6CC  48 27 5B 1D */	bl killCursor___Q23efx11TNaviEffectFv
/* 80142790 0013F6D0  7F E3 FB 78 */	mr r3, r31
/* 80142794 0013F6D4  48 27 5E 79 */	bl killFueact___Q23efx11TNaviEffectFv
/* 80142798 0013F6D8  48 00 00 74 */	b .L_8014280C
.L_8014279C:
/* 8014279C 0013F6DC  83 FD 02 D0 */	lwz r31, 0x2d0(r29)
/* 801427A0 0013F6E0  80 1F 00 00 */	lwz r0, 0(r31)
/* 801427A4 0013F6E4  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 801427A8 0013F6E8  41 82 00 18 */	beq .L_801427C0
/* 801427AC 0013F6EC  80 1F 00 04 */	lwz r0, 4(r31)
/* 801427B0 0013F6F0  90 1F 00 00 */	stw r0, 0(r31)
/* 801427B4 0013F6F4  80 1F 00 00 */	lwz r0, 0(r31)
/* 801427B8 0013F6F8  54 00 00 7E */	clrlwi r0, r0, 1
/* 801427BC 0013F6FC  90 1F 00 00 */	stw r0, 0(r31)
.L_801427C0:
/* 801427C0 0013F700  80 1F 00 00 */	lwz r0, 0(r31)
/* 801427C4 0013F704  54 1E 07 FF */	clrlwi. r30, r0, 0x1f
/* 801427C8 0013F708  41 82 00 24 */	beq .L_801427EC
/* 801427CC 0013F70C  60 00 00 01 */	ori r0, r0, 1
/* 801427D0 0013F710  7F E3 FB 78 */	mr r3, r31
/* 801427D4 0013F714  90 1F 00 00 */	stw r0, 0(r31)
/* 801427D8 0013F718  48 27 57 45 */	bl updateHamon___Q23efx11TNaviEffectFv
/* 801427DC 0013F71C  28 1E 00 00 */	cmplwi r30, 0
/* 801427E0 0013F720  40 82 00 0C */	bne .L_801427EC
/* 801427E4 0013F724  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801427E8 0013F728  48 27 50 AD */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_801427EC:
/* 801427EC 0013F72C  80 7F 00 00 */	lwz r3, 0(r31)
/* 801427F0 0013F730  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 801427F4 0013F734  41 82 00 18 */	beq .L_8014280C
/* 801427F8 0013F738  60 60 00 02 */	ori r0, r3, 2
/* 801427FC 0013F73C  7F E3 FB 78 */	mr r3, r31
/* 80142800 0013F740  90 1F 00 00 */	stw r0, 0(r31)
/* 80142804 0013F744  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80142808 0013F748  48 27 58 F5 */	bl createLight___Q23efx11TNaviEffectFPA4_f
.L_8014280C:
/* 8014280C 0013F74C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80142810 0013F750  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80142814 0013F754  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80142818 0013F758  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8014281C 0013F75C  7C 08 03 A6 */	mtlr r0
/* 80142820 0013F760  38 21 00 50 */	addi r1, r1, 0x50
/* 80142824 0013F764  4E 80 00 20 */	blr 
.endfn movieUserCommand__Q24Game4NaviFUlPQ24Game11MoviePlayer

.fn movieSetFaceDir__Q24Game4NaviFf, global
/* 80142828 0013F768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014282C 0013F76C  7C 08 02 A6 */	mflr r0
/* 80142830 0013F770  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142834 0013F774  D0 23 01 FC */	stfs f1, 0x1fc(r3)
/* 80142838 0013F778  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 8014283C 0013F77C  48 02 2B F5 */	bl setFaceDir__Q24Game11NaviWhistleFf
/* 80142840 0013F780  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80142844 0013F784  7C 08 03 A6 */	mtlr r0
/* 80142848 0013F788  38 21 00 10 */	addi r1, r1, 0x10
/* 8014284C 0013F78C  4E 80 00 20 */	blr 
.endfn movieSetFaceDir__Q24Game4NaviFf

.fn movieStartAnimation__Q24Game4NaviFUl, global
/* 80142850 0013F790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142854 0013F794  7C 08 02 A6 */	mflr r0
/* 80142858 0013F798  7C 85 23 78 */	mr r5, r4
/* 8014285C 0013F79C  38 C0 00 00 */	li r6, 0
/* 80142860 0013F7A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142864 0013F7A4  38 E0 00 00 */	li r7, 0
/* 80142868 0013F7A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014286C 0013F7AC  7C 7F 1B 78 */	mr r31, r3
/* 80142870 0013F7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80142874 0013F7B4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80142878 0013F7B8  7D 89 03 A6 */	mtctr r12
/* 8014287C 0013F7BC  4E 80 04 21 */	bctrl 
/* 80142880 0013F7C0  C0 02 A0 38 */	lfs f0, lbl_80518398@sda21(r2)
/* 80142884 0013F7C4  D0 1F 02 34 */	stfs f0, 0x234(r31)
/* 80142888 0013F7C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014288C 0013F7CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142890 0013F7D0  7C 08 03 A6 */	mtlr r0
/* 80142894 0013F7D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80142898 0013F7D8  4E 80 00 20 */	blr 
.endfn movieStartAnimation__Q24Game4NaviFUl

.fn movieStartDemoAnimation__Q24Game4NaviFPQ28SysShape8AnimInfo, global
/* 8014289C 0013F7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801428A0 0013F7E0  7C 08 02 A6 */	mflr r0
/* 801428A4 0013F7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801428A8 0013F7E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801428AC 0013F7EC  7C 9F 23 78 */	mr r31, r4
/* 801428B0 0013F7F0  93 C1 00 08 */	stw r30, 8(r1)
/* 801428B4 0013F7F4  7C 7E 1B 78 */	mr r30, r3
/* 801428B8 0013F7F8  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 801428BC 0013F7FC  48 2E 64 95 */	bl startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
/* 801428C0 0013F800  7F E4 FB 78 */	mr r4, r31
/* 801428C4 0013F804  38 7E 01 AC */	addi r3, r30, 0x1ac
/* 801428C8 0013F808  48 2E 64 89 */	bl startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
/* 801428CC 0013F80C  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 801428D0 0013F810  38 7E 01 AC */	addi r3, r30, 0x1ac
/* 801428D4 0013F814  48 2E 64 E5 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 801428D8 0013F818  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801428DC 0013F81C  40 82 00 20 */	bne .L_801428FC
/* 801428E0 0013F820  3C 60 80 48 */	lis r3, lbl_8047C794@ha
/* 801428E4 0013F824  3C A0 80 48 */	lis r5, lbl_8047C7F4@ha
/* 801428E8 0013F828  38 63 C7 94 */	addi r3, r3, lbl_8047C794@l
/* 801428EC 0013F82C  38 80 08 99 */	li r4, 0x899
/* 801428F0 0013F830  38 A5 C7 F4 */	addi r5, r5, lbl_8047C7F4@l
/* 801428F4 0013F834  4C C6 31 82 */	crclr 6
/* 801428F8 0013F838  4B EE 7D 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801428FC:
/* 801428FC 0013F83C  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 80142900 0013F840  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 80142904 0013F844  48 2E 64 B5 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 80142908 0013F848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014290C 0013F84C  40 82 00 20 */	bne .L_8014292C
/* 80142910 0013F850  3C 60 80 48 */	lis r3, lbl_8047C794@ha
/* 80142914 0013F854  3C A0 80 48 */	lis r5, lbl_8047C7F4@ha
/* 80142918 0013F858  38 63 C7 94 */	addi r3, r3, lbl_8047C794@l
/* 8014291C 0013F85C  38 80 08 9A */	li r4, 0x89a
/* 80142920 0013F860  38 A5 C7 F4 */	addi r5, r5, lbl_8047C7F4@l
/* 80142924 0013F864  4C C6 31 82 */	crclr 6
/* 80142928 0013F868  4B EE 7D 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014292C:
/* 8014292C 0013F86C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80142930 0013F870  48 2E 63 21 */	bl clearAnimatorAll__Q28SysShape5ModelFv
/* 80142934 0013F874  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 80142938 0013F878  83 FE 01 74 */	lwz r31, 0x174(r30)
/* 8014293C 0013F87C  81 9E 01 C8 */	lwz r12, 0x1c8(r30)
/* 80142940 0013F880  81 8C 00 08 */	lwz r12, 8(r12)
/* 80142944 0013F884  7D 89 03 A6 */	mtctr r12
/* 80142948 0013F888  4E 80 04 21 */	bctrl 
/* 8014294C 0013F88C  80 9F 00 08 */	lwz r4, 8(r31)
/* 80142950 0013F890  80 84 00 04 */	lwz r4, 4(r4)
/* 80142954 0013F894  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80142958 0013F898  80 84 00 00 */	lwz r4, 0(r4)
/* 8014295C 0013F89C  90 64 00 54 */	stw r3, 0x54(r4)
/* 80142960 0013F8A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142964 0013F8A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80142968 0013F8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014296C 0013F8AC  7C 08 03 A6 */	mtlr r0
/* 80142970 0013F8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80142974 0013F8B4  4E 80 00 20 */	blr 
.endfn movieStartDemoAnimation__Q24Game4NaviFPQ28SysShape8AnimInfo

.fn "movieSetTranslation__Q24Game4NaviFR10Vector3<f>f", global
/* 80142978 0013F8B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014297C 0013F8BC  7C 08 02 A6 */	mflr r0
/* 80142980 0013F8C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80142984 0013F8C4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80142988 0013F8C8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8014298C 0013F8CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80142990 0013F8D0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80142994 0013F8D4  7C 7F 1B 78 */	mr r31, r3
/* 80142998 0013F8D8  FF E0 08 90 */	fmr f31, f1
/* 8014299C 0013F8DC  38 A0 00 00 */	li r5, 0
/* 801429A0 0013F8E0  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 801429A4 0013F8E4  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 801429A8 0013F8E8  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 801429AC 0013F8EC  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 801429B0 0013F8F0  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 801429B4 0013F8F4  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 801429B8 0013F8F8  D0 03 01 1C */	stfs f0, 0x11c(r3)
/* 801429BC 0013F8FC  D0 03 01 20 */	stfs f0, 0x120(r3)
/* 801429C0 0013F900  D0 03 01 24 */	stfs f0, 0x124(r3)
/* 801429C4 0013F904  C0 03 02 0C */	lfs f0, 0x20c(r3)
/* 801429C8 0013F908  D0 03 02 38 */	stfs f0, 0x238(r3)
/* 801429CC 0013F90C  C0 03 02 10 */	lfs f0, 0x210(r3)
/* 801429D0 0013F910  D0 03 02 3C */	stfs f0, 0x23c(r3)
/* 801429D4 0013F914  C0 03 02 14 */	lfs f0, 0x214(r3)
/* 801429D8 0013F918  D0 03 02 40 */	stfs f0, 0x240(r3)
/* 801429DC 0013F91C  4B FF 87 CD */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801429E0 0013F920  D3 FF 01 FC */	stfs f31, 0x1fc(r31)
/* 801429E4 0013F924  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801429E8 0013F928  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801429EC 0013F92C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801429F0 0013F930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801429F4 0013F934  7C 08 03 A6 */	mtlr r0
/* 801429F8 0013F938  38 21 00 20 */	addi r1, r1, 0x20
/* 801429FC 0013F93C  4E 80 00 20 */	blr 
.endfn "movieSetTranslation__Q24Game4NaviFR10Vector3<f>f"

.fn "movieGotoPosition__Q24Game4NaviFR10Vector3<f>", global
/* 80142A00 0013F940  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80142A04 0013F944  7C 08 02 A6 */	mflr r0
/* 80142A08 0013F948  90 01 00 54 */	stw r0, 0x54(r1)
/* 80142A0C 0013F94C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80142A10 0013F950  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80142A14 0013F954  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80142A18 0013F958  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80142A1C 0013F95C  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80142A20 0013F960  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80142A24 0013F964  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 80142A28 0013F968  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 80142A2C 0013F96C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80142A30 0013F970  C0 24 00 00 */	lfs f1, 0(r4)
/* 80142A34 0013F974  7C 7F 1B 78 */	mr r31, r3
/* 80142A38 0013F978  C0 03 02 0C */	lfs f0, 0x20c(r3)
/* 80142A3C 0013F97C  C0 64 00 08 */	lfs f3, 8(r4)
/* 80142A40 0013F980  EF E1 00 28 */	fsubs f31, f1, f0
/* 80142A44 0013F984  C0 43 02 14 */	lfs f2, 0x214(r3)
/* 80142A48 0013F988  C0 24 00 04 */	lfs f1, 4(r4)
/* 80142A4C 0013F98C  C0 03 02 10 */	lfs f0, 0x210(r3)
/* 80142A50 0013F990  EF A3 10 28 */	fsubs f29, f3, f2
/* 80142A54 0013F994  EC 5F 07 F2 */	fmuls f2, f31, f31
/* 80142A58 0013F998  EF C1 00 28 */	fsubs f30, f1, f0
/* 80142A5C 0013F99C  EC 3D 07 72 */	fmuls f1, f29, f29
/* 80142A60 0013F9A0  EC 1E 17 BA */	fmadds f0, f30, f30, f2
/* 80142A64 0013F9A4  EF 82 08 2A */	fadds f28, f2, f1
/* 80142A68 0013F9A8  EC 21 00 2A */	fadds f1, f1, f0
/* 80142A6C 0013F9AC  48 2C ED 99 */	bl pikmin2_sqrtf__Ff
/* 80142A70 0013F9B0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80142A74 0013F9B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142A78 0013F9B8  40 81 00 18 */	ble .L_80142A90
/* 80142A7C 0013F9BC  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80142A80 0013F9C0  EC 00 08 24 */	fdivs f0, f0, f1
/* 80142A84 0013F9C4  EF FF 00 32 */	fmuls f31, f31, f0
/* 80142A88 0013F9C8  EF DE 00 32 */	fmuls f30, f30, f0
/* 80142A8C 0013F9CC  EF BD 00 32 */	fmuls f29, f29, f0
.L_80142A90:
/* 80142A90 0013F9D0  C0 02 A0 40 */	lfs f0, lbl_805183A0@sda21(r2)
/* 80142A94 0013F9D4  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80142A98 0013F9D8  40 80 00 28 */	bge .L_80142AC0
/* 80142A9C 0013F9DC  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80142AA0 0013F9E0  38 60 00 01 */	li r3, 1
/* 80142AA4 0013F9E4  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80142AA8 0013F9E8  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80142AAC 0013F9EC  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80142AB0 0013F9F0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80142AB4 0013F9F4  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80142AB8 0013F9F8  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80142ABC 0013F9FC  48 00 00 3C */	b .L_80142AF8
.L_80142AC0:
/* 80142AC0 0013FA00  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80142AC4 0013FA04  38 60 00 00 */	li r3, 0
/* 80142AC8 0013FA08  C0 62 9F E8 */	lfs f3, lbl_80518348@sda21(r2)
/* 80142ACC 0013FA0C  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 80142AD0 0013FA10  C0 04 03 B8 */	lfs f0, 0x3b8(r4)
/* 80142AD4 0013FA14  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80142AD8 0013FA18  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80142ADC 0013FA1C  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80142AE0 0013FA20  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80142AE4 0013FA24  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80142AE8 0013FA28  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80142AEC 0013FA2C  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 80142AF0 0013FA30  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80142AF4 0013FA34  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80142AF8:
/* 80142AF8 0013FA38  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80142AFC 0013FA3C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80142B00 0013FA40  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80142B04 0013FA44  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80142B08 0013FA48  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80142B0C 0013FA4C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80142B10 0013FA50  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 80142B14 0013FA54  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 80142B18 0013FA58  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80142B1C 0013FA5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142B20 0013FA60  7C 08 03 A6 */	mtlr r0
/* 80142B24 0013FA64  38 21 00 50 */	addi r1, r1, 0x50
/* 80142B28 0013FA68  4E 80 00 20 */	blr 
.endfn "movieGotoPosition__Q24Game4NaviFR10Vector3<f>"

.fn set_movie_draw__Q24Game4NaviFb, global
/* 80142B2C 0013FA6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142B30 0013FA70  7C 08 02 A6 */	mflr r0
/* 80142B34 0013FA74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142B38 0013FA78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80142B3C 0013FA7C  7C 7F 1B 78 */	mr r31, r3
/* 80142B40 0013FA80  93 C1 00 08 */	stw r30, 8(r1)
/* 80142B44 0013FA84  7C 9E 23 78 */	mr r30, r4
/* 80142B48 0013FA88  81 83 00 00 */	lwz r12, 0(r3)
/* 80142B4C 0013FA8C  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80142B50 0013FA90  7D 89 03 A6 */	mtctr r12
/* 80142B54 0013FA94  4E 80 04 21 */	bctrl 
/* 80142B58 0013FA98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80142B5C 0013FA9C  40 82 00 9C */	bne .L_80142BF8
/* 80142B60 0013FAA0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80142B64 0013FAA4  41 82 00 94 */	beq .L_80142BF8
/* 80142B68 0013FAA8  7F E3 FB 78 */	mr r3, r31
/* 80142B6C 0013FAAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80142B70 0013FAB0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80142B74 0013FAB4  7D 89 03 A6 */	mtctr r12
/* 80142B78 0013FAB8  4E 80 04 21 */	bctrl 
/* 80142B7C 0013FABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80142B80 0013FAC0  41 82 01 3C */	beq .L_80142CBC
/* 80142B84 0013FAC4  83 FF 02 D0 */	lwz r31, 0x2d0(r31)
/* 80142B88 0013FAC8  80 1F 00 00 */	lwz r0, 0(r31)
/* 80142B8C 0013FACC  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 80142B90 0013FAD0  41 82 00 18 */	beq .L_80142BA8
/* 80142B94 0013FAD4  80 1F 00 04 */	lwz r0, 4(r31)
/* 80142B98 0013FAD8  90 1F 00 00 */	stw r0, 0(r31)
/* 80142B9C 0013FADC  80 1F 00 00 */	lwz r0, 0(r31)
/* 80142BA0 0013FAE0  54 00 00 7E */	clrlwi r0, r0, 1
/* 80142BA4 0013FAE4  90 1F 00 00 */	stw r0, 0(r31)
.L_80142BA8:
/* 80142BA8 0013FAE8  80 1F 00 00 */	lwz r0, 0(r31)
/* 80142BAC 0013FAEC  54 1E 07 FF */	clrlwi. r30, r0, 0x1f
/* 80142BB0 0013FAF0  41 82 00 24 */	beq .L_80142BD4
/* 80142BB4 0013FAF4  60 00 00 01 */	ori r0, r0, 1
/* 80142BB8 0013FAF8  7F E3 FB 78 */	mr r3, r31
/* 80142BBC 0013FAFC  90 1F 00 00 */	stw r0, 0(r31)
/* 80142BC0 0013FB00  48 27 53 5D */	bl updateHamon___Q23efx11TNaviEffectFv
/* 80142BC4 0013FB04  28 1E 00 00 */	cmplwi r30, 0
/* 80142BC8 0013FB08  40 82 00 0C */	bne .L_80142BD4
/* 80142BCC 0013FB0C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80142BD0 0013FB10  48 27 4C C5 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_80142BD4:
/* 80142BD4 0013FB14  80 7F 00 00 */	lwz r3, 0(r31)
/* 80142BD8 0013FB18  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80142BDC 0013FB1C  41 82 00 E0 */	beq .L_80142CBC
/* 80142BE0 0013FB20  60 60 00 02 */	ori r0, r3, 2
/* 80142BE4 0013FB24  7F E3 FB 78 */	mr r3, r31
/* 80142BE8 0013FB28  90 1F 00 00 */	stw r0, 0(r31)
/* 80142BEC 0013FB2C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80142BF0 0013FB30  48 27 55 0D */	bl createLight___Q23efx11TNaviEffectFPA4_f
/* 80142BF4 0013FB34  48 00 00 C8 */	b .L_80142CBC
.L_80142BF8:
/* 80142BF8 0013FB38  7F E3 FB 78 */	mr r3, r31
/* 80142BFC 0013FB3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80142C00 0013FB40  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80142C04 0013FB44  7D 89 03 A6 */	mtctr r12
/* 80142C08 0013FB48  4E 80 04 21 */	bctrl 
/* 80142C0C 0013FB4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80142C10 0013FB50  40 82 00 AC */	bne .L_80142CBC
/* 80142C14 0013FB54  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80142C18 0013FB58  40 82 00 A4 */	bne .L_80142CBC
/* 80142C1C 0013FB5C  83 DF 02 D0 */	lwz r30, 0x2d0(r31)
/* 80142C20 0013FB60  80 7E 00 00 */	lwz r3, 0(r30)
/* 80142C24 0013FB64  54 60 00 01 */	rlwinm. r0, r3, 0, 0, 0
/* 80142C28 0013FB68  40 82 00 28 */	bne .L_80142C50
/* 80142C2C 0013FB6C  90 7E 00 04 */	stw r3, 4(r30)
/* 80142C30 0013FB70  38 00 00 00 */	li r0, 0
/* 80142C34 0013FB74  98 1E 00 00 */	stb r0, 0(r30)
/* 80142C38 0013FB78  98 1E 00 01 */	stb r0, 1(r30)
/* 80142C3C 0013FB7C  98 1E 00 02 */	stb r0, 2(r30)
/* 80142C40 0013FB80  98 1E 00 03 */	stb r0, 3(r30)
/* 80142C44 0013FB84  80 1E 00 00 */	lwz r0, 0(r30)
/* 80142C48 0013FB88  64 00 80 00 */	oris r0, r0, 0x8000
/* 80142C4C 0013FB8C  90 1E 00 00 */	stw r0, 0(r30)
.L_80142C50:
/* 80142C50 0013FB90  38 7E 03 3C */	addi r3, r30, 0x33c
/* 80142C54 0013FB94  81 9E 03 3C */	lwz r12, 0x33c(r30)
/* 80142C58 0013FB98  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80142C5C 0013FB9C  7D 89 03 A6 */	mtctr r12
/* 80142C60 0013FBA0  4E 80 04 21 */	bctrl 
/* 80142C64 0013FBA4  38 7E 03 6C */	addi r3, r30, 0x36c
/* 80142C68 0013FBA8  81 9E 03 6C */	lwz r12, 0x36c(r30)
/* 80142C6C 0013FBAC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80142C70 0013FBB0  7D 89 03 A6 */	mtctr r12
/* 80142C74 0013FBB4  4E 80 04 21 */	bctrl 
/* 80142C78 0013FBB8  38 7E 03 9C */	addi r3, r30, 0x39c
/* 80142C7C 0013FBBC  81 9E 03 9C */	lwz r12, 0x39c(r30)
/* 80142C80 0013FBC0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80142C84 0013FBC4  7D 89 03 A6 */	mtctr r12
/* 80142C88 0013FBC8  4E 80 04 21 */	bctrl 
/* 80142C8C 0013FBCC  7F C3 F3 78 */	mr r3, r30
/* 80142C90 0013FBD0  48 27 53 C5 */	bl killHamonA___Q23efx11TNaviEffectFv
/* 80142C94 0013FBD4  7F C3 F3 78 */	mr r3, r30
/* 80142C98 0013FBD8  48 27 54 41 */	bl killHamonB___Q23efx11TNaviEffectFv
/* 80142C9C 0013FBDC  7F C3 F3 78 */	mr r3, r30
/* 80142CA0 0013FBE0  48 27 54 D5 */	bl killLight___Q23efx11TNaviEffectFv
/* 80142CA4 0013FBE4  7F C3 F3 78 */	mr r3, r30
/* 80142CA8 0013FBE8  48 27 55 71 */	bl killLightAct___Q23efx11TNaviEffectFv
/* 80142CAC 0013FBEC  7F C3 F3 78 */	mr r3, r30
/* 80142CB0 0013FBF0  48 27 55 F9 */	bl killCursor___Q23efx11TNaviEffectFv
/* 80142CB4 0013FBF4  7F C3 F3 78 */	mr r3, r30
/* 80142CB8 0013FBF8  48 27 59 55 */	bl killFueact___Q23efx11TNaviEffectFv
.L_80142CBC:
/* 80142CBC 0013FBFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80142CC0 0013FC00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142CC4 0013FC04  83 C1 00 08 */	lwz r30, 8(r1)
/* 80142CC8 0013FC08  7C 08 03 A6 */	mtlr r0
/* 80142CCC 0013FC0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80142CD0 0013FC10  4E 80 00 20 */	blr 
.endfn set_movie_draw__Q24Game4NaviFb

.fn isWalking__Q24Game4NaviFv, global
/* 80142CD4 0013FC14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142CD8 0013FC18  7C 08 02 A6 */	mflr r0
/* 80142CDC 0013FC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142CE0 0013FC20  C0 23 01 E4 */	lfs f1, 0x1e4(r3)
/* 80142CE4 0013FC24  C0 03 01 E8 */	lfs f0, 0x1e8(r3)
/* 80142CE8 0013FC28  EC 21 00 72 */	fmuls f1, f1, f1
/* 80142CEC 0013FC2C  C0 43 01 EC */	lfs f2, 0x1ec(r3)
/* 80142CF0 0013FC30  EC 00 00 32 */	fmuls f0, f0, f0
/* 80142CF4 0013FC34  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80142CF8 0013FC38  EC 01 00 2A */	fadds f0, f1, f0
/* 80142CFC 0013FC3C  EC 22 00 2A */	fadds f1, f2, f0
/* 80142D00 0013FC40  48 2C EB 05 */	bl pikmin2_sqrtf__Ff
/* 80142D04 0013FC44  C0 02 9F EC */	lfs f0, lbl_8051834C@sda21(r2)
/* 80142D08 0013FC48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142D0C 0013FC4C  7C 00 00 26 */	mfcr r0
/* 80142D10 0013FC50  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 80142D14 0013FC54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80142D18 0013FC58  7C 08 03 A6 */	mtlr r0
/* 80142D1C 0013FC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80142D20 0013FC60  4E 80 00 20 */	blr 
.endfn isWalking__Q24Game4NaviFv

.fn setDeadLaydown__Q24Game4NaviFv, global
/* 80142D24 0013FC64  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80142D28 0013FC68  7C 08 02 A6 */	mflr r0
/* 80142D2C 0013FC6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80142D30 0013FC70  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80142D34 0013FC74  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80142D38 0013FC78  7C 7E 1B 78 */	mr r30, r3
/* 80142D3C 0013FC7C  A3 FE 02 DC */	lhz r31, 0x2dc(r30)
/* 80142D40 0013FC80  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80142D44 0013FC84  2C 1F 00 08 */	cmpwi r31, 8
/* 80142D48 0013FC88  40 80 00 2C */	bge .L_80142D74
/* 80142D4C 0013FC8C  38 03 00 20 */	addi r0, r3, 0x20
/* 80142D50 0013FC90  7F E4 1E 70 */	srawi r4, r31, 3
/* 80142D54 0013FC94  7C A4 00 50 */	subf r5, r4, r0
/* 80142D58 0013FC98  38 60 00 01 */	li r3, 1
/* 80142D5C 0013FC9C  54 80 18 38 */	slwi r0, r4, 3
/* 80142D60 0013FCA0  88 85 00 00 */	lbz r4, 0(r5)
/* 80142D64 0013FCA4  7C 00 F8 50 */	subf r0, r0, r31
/* 80142D68 0013FCA8  7C 60 00 30 */	slw r0, r3, r0
/* 80142D6C 0013FCAC  7C 80 03 78 */	or r0, r4, r0
/* 80142D70 0013FCB0  98 05 00 00 */	stb r0, 0(r5)
.L_80142D74:
/* 80142D74 0013FCB4  2C 1F 00 00 */	cmpwi r31, 0
/* 80142D78 0013FCB8  40 82 00 20 */	bne .L_80142D98
/* 80142D7C 0013FCBC  C0 42 A0 44 */	lfs f2, lbl_805183A4@sda21(r2)
/* 80142D80 0013FCC0  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 80142D84 0013FCC4  C0 02 A0 48 */	lfs f0, lbl_805183A8@sda21(r2)
/* 80142D88 0013FCC8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80142D8C 0013FCCC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80142D90 0013FCD0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80142D94 0013FCD4  48 00 00 1C */	b .L_80142DB0
.L_80142D98:
/* 80142D98 0013FCD8  C0 42 A0 4C */	lfs f2, lbl_805183AC@sda21(r2)
/* 80142D9C 0013FCDC  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 80142DA0 0013FCE0  C0 02 9F EC */	lfs f0, lbl_8051834C@sda21(r2)
/* 80142DA4 0013FCE4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80142DA8 0013FCE8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80142DAC 0013FCEC  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_80142DB0:
/* 80142DB0 0013FCF0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80142DB4 0013FCF4  81 83 00 04 */	lwz r12, 4(r3)
/* 80142DB8 0013FCF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80142DBC 0013FCFC  7D 89 03 A6 */	mtctr r12
/* 80142DC0 0013FD00  4E 80 04 21 */	bctrl 
/* 80142DC4 0013FD04  28 03 00 00 */	cmplwi r3, 0
/* 80142DC8 0013FD08  41 82 00 7C */	beq .L_80142E44
/* 80142DCC 0013FD0C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80142DD0 0013FD10  81 83 00 04 */	lwz r12, 4(r3)
/* 80142DD4 0013FD14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80142DD8 0013FD18  7D 89 03 A6 */	mtctr r12
/* 80142DDC 0013FD1C  4E 80 04 21 */	bctrl 
/* 80142DE0 0013FD20  38 81 00 14 */	addi r4, r1, 0x14
/* 80142DE4 0013FD24  38 A1 00 08 */	addi r5, r1, 8
/* 80142DE8 0013FD28  4B FA 7D F1 */	bl PSMTXMultVec
/* 80142DEC 0013FD2C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80142DF0 0013FD30  7F C3 F3 78 */	mr r3, r30
/* 80142DF4 0013FD34  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80142DF8 0013FD38  38 81 00 14 */	addi r4, r1, 0x14
/* 80142DFC 0013FD3C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80142E00 0013FD40  38 A0 00 00 */	li r5, 0
/* 80142E04 0013FD44  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80142E08 0013FD48  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80142E0C 0013FD4C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80142E10 0013FD50  4B FF 83 99 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80142E14 0013FD54  7F C3 F3 78 */	mr r3, r30
/* 80142E18 0013FD58  38 80 00 05 */	li r4, 5
/* 80142E1C 0013FD5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80142E20 0013FD60  38 A0 00 05 */	li r5, 5
/* 80142E24 0013FD64  38 C0 00 00 */	li r6, 0
/* 80142E28 0013FD68  38 E0 00 00 */	li r7, 0
/* 80142E2C 0013FD6C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80142E30 0013FD70  7D 89 03 A6 */	mtctr r12
/* 80142E34 0013FD74  4E 80 04 21 */	bctrl 
/* 80142E38 0013FD78  38 00 00 00 */	li r0, 0
/* 80142E3C 0013FD7C  98 1E 02 68 */	stb r0, 0x268(r30)
/* 80142E40 0013FD80  48 00 00 0C */	b .L_80142E4C
.L_80142E44:
/* 80142E44 0013FD84  38 00 00 01 */	li r0, 1
/* 80142E48 0013FD88  98 1E 02 68 */	stb r0, 0x268(r30)
.L_80142E4C:
/* 80142E4C 0013FD8C  7F C3 F3 78 */	mr r3, r30
/* 80142E50 0013FD90  38 80 00 00 */	li r4, 0
/* 80142E54 0013FD94  81 9E 00 00 */	lwz r12, 0(r30)
/* 80142E58 0013FD98  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80142E5C 0013FD9C  7D 89 03 A6 */	mtctr r12
/* 80142E60 0013FDA0  4E 80 04 21 */	bctrl 
/* 80142E64 0013FDA4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80142E68 0013FDA8  7F E4 FB 78 */	mr r4, r31
/* 80142E6C 0013FDAC  48 01 83 9D */	bl informOrimaDead__Q24Game7NaviMgrFi
/* 80142E70 0013FDB0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80142E74 0013FDB4  D0 1E 02 A0 */	stfs f0, 0x2a0(r30)
/* 80142E78 0013FDB8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80142E7C 0013FDBC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80142E80 0013FDC0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80142E84 0013FDC4  7C 08 03 A6 */	mtlr r0
/* 80142E88 0013FDC8  38 21 00 30 */	addi r1, r1, 0x30
/* 80142E8C 0013FDCC  4E 80 00 20 */	blr 
.endfn setDeadLaydown__Q24Game4NaviFv

.fn checkHole__Q24Game4NaviFv, global
/* 80142E90 0013FDD0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80142E94 0013FDD4  7C 08 02 A6 */	mflr r0
/* 80142E98 0013FDD8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80142E9C 0013FDDC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80142EA0 0013FDE0  7C 7F 1B 78 */	mr r31, r3
/* 80142EA4 0013FDE4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80142EA8 0013FDE8  80 8D 94 48 */	lwz r4, mgr__Q24Game8ItemHole@sda21(r13)
/* 80142EAC 0013FDEC  28 04 00 00 */	cmplwi r4, 0
/* 80142EB0 0013FDF0  40 82 00 0C */	bne .L_80142EBC
/* 80142EB4 0013FDF4  38 60 00 00 */	li r3, 0
/* 80142EB8 0013FDF8  48 00 02 9C */	b .L_80143154
.L_80142EBC:
/* 80142EBC 0013FDFC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80142EC0 0013FE00  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80142EC4 0013FE04  2C 00 00 00 */	cmpwi r0, 0
/* 80142EC8 0013FE08  41 82 00 0C */	beq .L_80142ED4
/* 80142ECC 0013FE0C  38 60 00 00 */	li r3, 0
/* 80142ED0 0013FE10  48 00 02 84 */	b .L_80143154
.L_80142ED4:
/* 80142ED4 0013FE14  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 80142ED8 0013FE18  28 03 00 00 */	cmplwi r3, 0
/* 80142EDC 0013FE1C  41 82 00 0C */	beq .L_80142EE8
/* 80142EE0 0013FE20  80 03 00 04 */	lwz r0, 4(r3)
/* 80142EE4 0013FE24  48 00 00 08 */	b .L_80142EEC
.L_80142EE8:
/* 80142EE8 0013FE28  38 00 FF FF */	li r0, -1
.L_80142EEC:
/* 80142EEC 0013FE2C  2C 00 00 00 */	cmpwi r0, 0
/* 80142EF0 0013FE30  41 82 00 0C */	beq .L_80142EFC
/* 80142EF4 0013FE34  38 60 00 00 */	li r3, 0
/* 80142EF8 0013FE38  48 00 02 5C */	b .L_80143154
.L_80142EFC:
/* 80142EFC 0013FE3C  28 04 00 00 */	cmplwi r4, 0
/* 80142F00 0013FE40  41 82 00 08 */	beq .L_80142F08
/* 80142F04 0013FE44  38 84 00 30 */	addi r4, r4, 0x30
.L_80142F08:
/* 80142F08 0013FE48  38 00 00 00 */	li r0, 0
/* 80142F0C 0013FE4C  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80142F10 0013FE50  38 63 05 60 */	addi r3, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 80142F14 0013FE54  90 01 00 20 */	stw r0, 0x20(r1)
/* 80142F18 0013FE58  28 00 00 00 */	cmplwi r0, 0
/* 80142F1C 0013FE5C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80142F20 0013FE60  90 01 00 18 */	stw r0, 0x18(r1)
/* 80142F24 0013FE64  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80142F28 0013FE68  40 82 00 20 */	bne .L_80142F48
/* 80142F2C 0013FE6C  7C 83 23 78 */	mr r3, r4
/* 80142F30 0013FE70  81 84 00 00 */	lwz r12, 0(r4)
/* 80142F34 0013FE74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80142F38 0013FE78  7D 89 03 A6 */	mtctr r12
/* 80142F3C 0013FE7C  4E 80 04 21 */	bctrl 
/* 80142F40 0013FE80  90 61 00 18 */	stw r3, 0x18(r1)
/* 80142F44 0013FE84  48 00 01 EC */	b .L_80143130
.L_80142F48:
/* 80142F48 0013FE88  7C 83 23 78 */	mr r3, r4
/* 80142F4C 0013FE8C  81 84 00 00 */	lwz r12, 0(r4)
/* 80142F50 0013FE90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80142F54 0013FE94  7D 89 03 A6 */	mtctr r12
/* 80142F58 0013FE98  4E 80 04 21 */	bctrl 
/* 80142F5C 0013FE9C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80142F60 0013FEA0  48 00 00 58 */	b .L_80142FB8
.L_80142F64:
/* 80142F64 0013FEA4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80142F68 0013FEA8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80142F6C 0013FEAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80142F70 0013FEB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80142F74 0013FEB4  7D 89 03 A6 */	mtctr r12
/* 80142F78 0013FEB8  4E 80 04 21 */	bctrl 
/* 80142F7C 0013FEBC  7C 64 1B 78 */	mr r4, r3
/* 80142F80 0013FEC0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80142F84 0013FEC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80142F88 0013FEC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80142F8C 0013FECC  7D 89 03 A6 */	mtctr r12
/* 80142F90 0013FED0  4E 80 04 21 */	bctrl 
/* 80142F94 0013FED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80142F98 0013FED8  40 82 01 98 */	bne .L_80143130
/* 80142F9C 0013FEDC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80142FA0 0013FEE0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80142FA4 0013FEE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80142FA8 0013FEE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80142FAC 0013FEEC  7D 89 03 A6 */	mtctr r12
/* 80142FB0 0013FEF0  4E 80 04 21 */	bctrl 
/* 80142FB4 0013FEF4  90 61 00 18 */	stw r3, 0x18(r1)
.L_80142FB8:
/* 80142FB8 0013FEF8  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80142FBC 0013FEFC  38 61 00 14 */	addi r3, r1, 0x14
/* 80142FC0 0013FF00  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80142FC4 0013FF04  7D 89 03 A6 */	mtctr r12
/* 80142FC8 0013FF08  4E 80 04 21 */	bctrl 
/* 80142FCC 0013FF0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80142FD0 0013FF10  41 82 FF 94 */	beq .L_80142F64
/* 80142FD4 0013FF14  48 00 01 5C */	b .L_80143130
.L_80142FD8:
/* 80142FD8 0013FF18  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80142FDC 0013FF1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80142FE0 0013FF20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80142FE4 0013FF24  7D 89 03 A6 */	mtctr r12
/* 80142FE8 0013FF28  4E 80 04 21 */	bctrl 
/* 80142FEC 0013FF2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80142FF0 0013FF30  7C 60 1B 78 */	mr r0, r3
/* 80142FF4 0013FF34  7C 1E 03 78 */	mr r30, r0
/* 80142FF8 0013FF38  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80142FFC 0013FF3C  7D 89 03 A6 */	mtctr r12
/* 80143000 0013FF40  4E 80 04 21 */	bctrl 
/* 80143004 0013FF44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143008 0013FF48  41 82 00 6C */	beq .L_80143074
/* 8014300C 0013FF4C  7F C3 F3 78 */	mr r3, r30
/* 80143010 0013FF50  48 08 F4 E9 */	bl canRide__Q34Game8ItemHole4ItemFv
/* 80143014 0013FF54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143018 0013FF58  41 82 00 5C */	beq .L_80143074
/* 8014301C 0013FF5C  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80143020 0013FF60  28 00 00 00 */	cmplwi r0, 0
/* 80143024 0013FF64  40 82 00 50 */	bne .L_80143074
/* 80143028 0013FF68  7F C4 F3 78 */	mr r4, r30
/* 8014302C 0013FF6C  38 61 00 08 */	addi r3, r1, 8
/* 80143030 0013FF70  81 9E 00 00 */	lwz r12, 0(r30)
/* 80143034 0013FF74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143038 0013FF78  7D 89 03 A6 */	mtctr r12
/* 8014303C 0013FF7C  4E 80 04 21 */	bctrl 
/* 80143040 0013FF80  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80143044 0013FF84  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 80143048 0013FF88  C0 41 00 08 */	lfs f2, 8(r1)
/* 8014304C 0013FF8C  EC 61 00 28 */	fsubs f3, f1, f0
/* 80143050 0013FF90  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 80143054 0013FF94  C0 02 A0 50 */	lfs f0, lbl_805183B0@sda21(r2)
/* 80143058 0013FF98  EC 42 08 28 */	fsubs f2, f2, f1
/* 8014305C 0013FF9C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80143060 0013FFA0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80143064 0013FFA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143068 0013FFA8  40 80 00 0C */	bge .L_80143074
/* 8014306C 0013FFAC  7F C3 F3 78 */	mr r3, r30
/* 80143070 0013FFB0  48 00 00 E4 */	b .L_80143154
.L_80143074:
/* 80143074 0013FFB4  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80143078 0013FFB8  28 00 00 00 */	cmplwi r0, 0
/* 8014307C 0013FFBC  40 82 00 24 */	bne .L_801430A0
/* 80143080 0013FFC0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143084 0013FFC4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143088 0013FFC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014308C 0013FFCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80143090 0013FFD0  7D 89 03 A6 */	mtctr r12
/* 80143094 0013FFD4  4E 80 04 21 */	bctrl 
/* 80143098 0013FFD8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8014309C 0013FFDC  48 00 00 94 */	b .L_80143130
.L_801430A0:
/* 801430A0 0013FFE0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801430A4 0013FFE4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801430A8 0013FFE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801430AC 0013FFEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801430B0 0013FFF0  7D 89 03 A6 */	mtctr r12
/* 801430B4 0013FFF4  4E 80 04 21 */	bctrl 
/* 801430B8 0013FFF8  90 61 00 18 */	stw r3, 0x18(r1)
/* 801430BC 0013FFFC  48 00 00 58 */	b .L_80143114
.L_801430C0:
/* 801430C0 00140000  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801430C4 00140004  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801430C8 00140008  81 83 00 00 */	lwz r12, 0(r3)
/* 801430CC 0014000C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801430D0 00140010  7D 89 03 A6 */	mtctr r12
/* 801430D4 00140014  4E 80 04 21 */	bctrl 
/* 801430D8 00140018  7C 64 1B 78 */	mr r4, r3
/* 801430DC 0014001C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801430E0 00140020  81 83 00 00 */	lwz r12, 0(r3)
/* 801430E4 00140024  81 8C 00 08 */	lwz r12, 8(r12)
/* 801430E8 00140028  7D 89 03 A6 */	mtctr r12
/* 801430EC 0014002C  4E 80 04 21 */	bctrl 
/* 801430F0 00140030  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801430F4 00140034  40 82 00 3C */	bne .L_80143130
/* 801430F8 00140038  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801430FC 0014003C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143100 00140040  81 83 00 00 */	lwz r12, 0(r3)
/* 80143104 00140044  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80143108 00140048  7D 89 03 A6 */	mtctr r12
/* 8014310C 0014004C  4E 80 04 21 */	bctrl 
/* 80143110 00140050  90 61 00 18 */	stw r3, 0x18(r1)
.L_80143114:
/* 80143114 00140054  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80143118 00140058  38 61 00 14 */	addi r3, r1, 0x14
/* 8014311C 0014005C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80143120 00140060  7D 89 03 A6 */	mtctr r12
/* 80143124 00140064  4E 80 04 21 */	bctrl 
/* 80143128 00140068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014312C 0014006C  41 82 FF 94 */	beq .L_801430C0
.L_80143130:
/* 80143130 00140070  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143134 00140074  81 83 00 00 */	lwz r12, 0(r3)
/* 80143138 00140078  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014313C 0014007C  7D 89 03 A6 */	mtctr r12
/* 80143140 00140080  4E 80 04 21 */	bctrl 
/* 80143144 00140084  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143148 00140088  7C 04 18 40 */	cmplw r4, r3
/* 8014314C 0014008C  40 82 FE 8C */	bne .L_80142FD8
/* 80143150 00140090  38 60 00 00 */	li r3, 0
.L_80143154:
/* 80143154 00140094  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80143158 00140098  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014315C 0014009C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80143160 001400A0  7C 08 03 A6 */	mtlr r0
/* 80143164 001400A4  38 21 00 30 */	addi r1, r1, 0x30
/* 80143168 001400A8  4E 80 00 20 */	blr 
.endfn checkHole__Q24Game4NaviFv

.fn "isDone__26Iterator<Q24Game8BaseItem>Fv", weak
/* 8014316C 001400AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80143170 001400B0  7C 08 02 A6 */	mflr r0
/* 80143174 001400B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80143178 001400B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014317C 001400BC  7C 7F 1B 78 */	mr r31, r3
/* 80143180 001400C0  80 63 00 08 */	lwz r3, 8(r3)
/* 80143184 001400C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80143188 001400C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014318C 001400CC  7D 89 03 A6 */	mtctr r12
/* 80143190 001400D0  4E 80 04 21 */	bctrl 
/* 80143194 001400D4  80 1F 00 04 */	lwz r0, 4(r31)
/* 80143198 001400D8  7C 00 18 50 */	subf r0, r0, r3
/* 8014319C 001400DC  7C 00 00 34 */	cntlzw r0, r0
/* 801431A0 001400E0  54 03 D9 7E */	srwi r3, r0, 5
/* 801431A4 001400E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801431A8 001400E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801431AC 001400EC  7C 08 03 A6 */	mtlr r0
/* 801431B0 001400F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801431B4 001400F4  4E 80 00 20 */	blr 
.endfn "isDone__26Iterator<Q24Game8BaseItem>Fv"

.fn checkCave__Q24Game4NaviFv, global
/* 801431B8 001400F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801431BC 001400FC  7C 08 02 A6 */	mflr r0
/* 801431C0 00140100  90 01 00 34 */	stw r0, 0x34(r1)
/* 801431C4 00140104  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801431C8 00140108  7C 7F 1B 78 */	mr r31, r3
/* 801431CC 0014010C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801431D0 00140110  80 8D 94 A0 */	lwz r4, mgr__Q24Game8ItemCave@sda21(r13)
/* 801431D4 00140114  28 04 00 00 */	cmplwi r4, 0
/* 801431D8 00140118  40 82 00 0C */	bne .L_801431E4
/* 801431DC 0014011C  38 60 00 00 */	li r3, 0
/* 801431E0 00140120  48 00 02 8C */	b .L_8014346C
.L_801431E4:
/* 801431E4 00140124  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801431E8 00140128  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801431EC 0014012C  2C 00 00 00 */	cmpwi r0, 0
/* 801431F0 00140130  41 82 00 0C */	beq .L_801431FC
/* 801431F4 00140134  38 60 00 00 */	li r3, 0
/* 801431F8 00140138  48 00 02 74 */	b .L_8014346C
.L_801431FC:
/* 801431FC 0014013C  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 80143200 00140140  28 03 00 00 */	cmplwi r3, 0
/* 80143204 00140144  41 82 00 0C */	beq .L_80143210
/* 80143208 00140148  80 03 00 04 */	lwz r0, 4(r3)
/* 8014320C 0014014C  48 00 00 08 */	b .L_80143214
.L_80143210:
/* 80143210 00140150  38 00 FF FF */	li r0, -1
.L_80143214:
/* 80143214 00140154  2C 00 00 00 */	cmpwi r0, 0
/* 80143218 00140158  41 82 00 0C */	beq .L_80143224
/* 8014321C 0014015C  38 60 00 00 */	li r3, 0
/* 80143220 00140160  48 00 02 4C */	b .L_8014346C
.L_80143224:
/* 80143224 00140164  28 04 00 00 */	cmplwi r4, 0
/* 80143228 00140168  41 82 00 08 */	beq .L_80143230
/* 8014322C 0014016C  38 84 00 30 */	addi r4, r4, 0x30
.L_80143230:
/* 80143230 00140170  38 00 00 00 */	li r0, 0
/* 80143234 00140174  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80143238 00140178  38 63 05 60 */	addi r3, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8014323C 0014017C  90 01 00 20 */	stw r0, 0x20(r1)
/* 80143240 00140180  28 00 00 00 */	cmplwi r0, 0
/* 80143244 00140184  90 61 00 14 */	stw r3, 0x14(r1)
/* 80143248 00140188  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014324C 0014018C  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80143250 00140190  40 82 00 20 */	bne .L_80143270
/* 80143254 00140194  7C 83 23 78 */	mr r3, r4
/* 80143258 00140198  81 84 00 00 */	lwz r12, 0(r4)
/* 8014325C 0014019C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80143260 001401A0  7D 89 03 A6 */	mtctr r12
/* 80143264 001401A4  4E 80 04 21 */	bctrl 
/* 80143268 001401A8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8014326C 001401AC  48 00 01 DC */	b .L_80143448
.L_80143270:
/* 80143270 001401B0  7C 83 23 78 */	mr r3, r4
/* 80143274 001401B4  81 84 00 00 */	lwz r12, 0(r4)
/* 80143278 001401B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014327C 001401BC  7D 89 03 A6 */	mtctr r12
/* 80143280 001401C0  4E 80 04 21 */	bctrl 
/* 80143284 001401C4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80143288 001401C8  48 00 00 58 */	b .L_801432E0
.L_8014328C:
/* 8014328C 001401CC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143290 001401D0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143294 001401D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80143298 001401D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014329C 001401DC  7D 89 03 A6 */	mtctr r12
/* 801432A0 001401E0  4E 80 04 21 */	bctrl 
/* 801432A4 001401E4  7C 64 1B 78 */	mr r4, r3
/* 801432A8 001401E8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801432AC 001401EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801432B0 001401F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801432B4 001401F4  7D 89 03 A6 */	mtctr r12
/* 801432B8 001401F8  4E 80 04 21 */	bctrl 
/* 801432BC 001401FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801432C0 00140200  40 82 01 88 */	bne .L_80143448
/* 801432C4 00140204  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801432C8 00140208  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801432CC 0014020C  81 83 00 00 */	lwz r12, 0(r3)
/* 801432D0 00140210  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801432D4 00140214  7D 89 03 A6 */	mtctr r12
/* 801432D8 00140218  4E 80 04 21 */	bctrl 
/* 801432DC 0014021C  90 61 00 18 */	stw r3, 0x18(r1)
.L_801432E0:
/* 801432E0 00140220  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801432E4 00140224  38 61 00 14 */	addi r3, r1, 0x14
/* 801432E8 00140228  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801432EC 0014022C  7D 89 03 A6 */	mtctr r12
/* 801432F0 00140230  4E 80 04 21 */	bctrl 
/* 801432F4 00140234  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801432F8 00140238  41 82 FF 94 */	beq .L_8014328C
/* 801432FC 0014023C  48 00 01 4C */	b .L_80143448
.L_80143300:
/* 80143300 00140240  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143304 00140244  81 83 00 00 */	lwz r12, 0(r3)
/* 80143308 00140248  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014330C 0014024C  7D 89 03 A6 */	mtctr r12
/* 80143310 00140250  4E 80 04 21 */	bctrl 
/* 80143314 00140254  81 83 00 00 */	lwz r12, 0(r3)
/* 80143318 00140258  7C 60 1B 78 */	mr r0, r3
/* 8014331C 0014025C  7C 1E 03 78 */	mr r30, r0
/* 80143320 00140260  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80143324 00140264  7D 89 03 A6 */	mtctr r12
/* 80143328 00140268  4E 80 04 21 */	bctrl 
/* 8014332C 0014026C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143330 00140270  41 82 00 5C */	beq .L_8014338C
/* 80143334 00140274  80 1E 01 F4 */	lwz r0, 0x1f4(r30)
/* 80143338 00140278  28 00 00 00 */	cmplwi r0, 0
/* 8014333C 0014027C  40 82 00 50 */	bne .L_8014338C
/* 80143340 00140280  7F C4 F3 78 */	mr r4, r30
/* 80143344 00140284  38 61 00 08 */	addi r3, r1, 8
/* 80143348 00140288  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014334C 0014028C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143350 00140290  7D 89 03 A6 */	mtctr r12
/* 80143354 00140294  4E 80 04 21 */	bctrl 
/* 80143358 00140298  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8014335C 0014029C  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 80143360 001402A0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80143364 001402A4  EC 61 00 28 */	fsubs f3, f1, f0
/* 80143368 001402A8  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 8014336C 001402AC  C0 02 A0 54 */	lfs f0, lbl_805183B4@sda21(r2)
/* 80143370 001402B0  EC 42 08 28 */	fsubs f2, f2, f1
/* 80143374 001402B4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80143378 001402B8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8014337C 001402BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143380 001402C0  40 80 00 0C */	bge .L_8014338C
/* 80143384 001402C4  7F C3 F3 78 */	mr r3, r30
/* 80143388 001402C8  48 00 00 E4 */	b .L_8014346C
.L_8014338C:
/* 8014338C 001402CC  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80143390 001402D0  28 00 00 00 */	cmplwi r0, 0
/* 80143394 001402D4  40 82 00 24 */	bne .L_801433B8
/* 80143398 001402D8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8014339C 001402DC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801433A0 001402E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801433A4 001402E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801433A8 001402E8  7D 89 03 A6 */	mtctr r12
/* 801433AC 001402EC  4E 80 04 21 */	bctrl 
/* 801433B0 001402F0  90 61 00 18 */	stw r3, 0x18(r1)
/* 801433B4 001402F4  48 00 00 94 */	b .L_80143448
.L_801433B8:
/* 801433B8 001402F8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801433BC 001402FC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801433C0 00140300  81 83 00 00 */	lwz r12, 0(r3)
/* 801433C4 00140304  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801433C8 00140308  7D 89 03 A6 */	mtctr r12
/* 801433CC 0014030C  4E 80 04 21 */	bctrl 
/* 801433D0 00140310  90 61 00 18 */	stw r3, 0x18(r1)
/* 801433D4 00140314  48 00 00 58 */	b .L_8014342C
.L_801433D8:
/* 801433D8 00140318  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801433DC 0014031C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801433E0 00140320  81 83 00 00 */	lwz r12, 0(r3)
/* 801433E4 00140324  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801433E8 00140328  7D 89 03 A6 */	mtctr r12
/* 801433EC 0014032C  4E 80 04 21 */	bctrl 
/* 801433F0 00140330  7C 64 1B 78 */	mr r4, r3
/* 801433F4 00140334  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801433F8 00140338  81 83 00 00 */	lwz r12, 0(r3)
/* 801433FC 0014033C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143400 00140340  7D 89 03 A6 */	mtctr r12
/* 80143404 00140344  4E 80 04 21 */	bctrl 
/* 80143408 00140348  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014340C 0014034C  40 82 00 3C */	bne .L_80143448
/* 80143410 00140350  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143414 00140354  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143418 00140358  81 83 00 00 */	lwz r12, 0(r3)
/* 8014341C 0014035C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80143420 00140360  7D 89 03 A6 */	mtctr r12
/* 80143424 00140364  4E 80 04 21 */	bctrl 
/* 80143428 00140368  90 61 00 18 */	stw r3, 0x18(r1)
.L_8014342C:
/* 8014342C 0014036C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80143430 00140370  38 61 00 14 */	addi r3, r1, 0x14
/* 80143434 00140374  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80143438 00140378  7D 89 03 A6 */	mtctr r12
/* 8014343C 0014037C  4E 80 04 21 */	bctrl 
/* 80143440 00140380  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143444 00140384  41 82 FF 94 */	beq .L_801433D8
.L_80143448:
/* 80143448 00140388  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8014344C 0014038C  81 83 00 00 */	lwz r12, 0(r3)
/* 80143450 00140390  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80143454 00140394  7D 89 03 A6 */	mtctr r12
/* 80143458 00140398  4E 80 04 21 */	bctrl 
/* 8014345C 0014039C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143460 001403A0  7C 04 18 40 */	cmplw r4, r3
/* 80143464 001403A4  40 82 FE 9C */	bne .L_80143300
/* 80143468 001403A8  38 60 00 00 */	li r3, 0
.L_8014346C:
/* 8014346C 001403AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80143470 001403B0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80143474 001403B4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80143478 001403B8  7C 08 03 A6 */	mtlr r0
/* 8014347C 001403BC  38 21 00 30 */	addi r1, r1, 0x30
/* 80143480 001403C0  4E 80 00 20 */	blr 
.endfn checkCave__Q24Game4NaviFv

.fn checkBigFountain__Q24Game4NaviFv, global
/* 80143484 001403C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80143488 001403C8  7C 08 02 A6 */	mflr r0
/* 8014348C 001403CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80143490 001403D0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80143494 001403D4  7C 7F 1B 78 */	mr r31, r3
/* 80143498 001403D8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014349C 001403DC  80 8D 94 B0 */	lwz r4, mgr__Q24Game15ItemBigFountain@sda21(r13)
/* 801434A0 001403E0  28 04 00 00 */	cmplwi r4, 0
/* 801434A4 001403E4  40 82 00 0C */	bne .L_801434B0
/* 801434A8 001403E8  38 60 00 00 */	li r3, 0
/* 801434AC 001403EC  48 00 02 74 */	b .L_80143720
.L_801434B0:
/* 801434B0 001403F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801434B4 001403F4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801434B8 001403F8  2C 00 00 00 */	cmpwi r0, 0
/* 801434BC 001403FC  41 82 00 0C */	beq .L_801434C8
/* 801434C0 00140400  38 60 00 00 */	li r3, 0
/* 801434C4 00140404  48 00 02 5C */	b .L_80143720
.L_801434C8:
/* 801434C8 00140408  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 801434CC 0014040C  28 03 00 00 */	cmplwi r3, 0
/* 801434D0 00140410  41 82 00 0C */	beq .L_801434DC
/* 801434D4 00140414  80 03 00 04 */	lwz r0, 4(r3)
/* 801434D8 00140418  48 00 00 08 */	b .L_801434E0
.L_801434DC:
/* 801434DC 0014041C  38 00 FF FF */	li r0, -1
.L_801434E0:
/* 801434E0 00140420  2C 00 00 00 */	cmpwi r0, 0
/* 801434E4 00140424  41 82 00 0C */	beq .L_801434F0
/* 801434E8 00140428  38 60 00 00 */	li r3, 0
/* 801434EC 0014042C  48 00 02 34 */	b .L_80143720
.L_801434F0:
/* 801434F0 00140430  28 04 00 00 */	cmplwi r4, 0
/* 801434F4 00140434  41 82 00 08 */	beq .L_801434FC
/* 801434F8 00140438  38 84 00 30 */	addi r4, r4, 0x30
.L_801434FC:
/* 801434FC 0014043C  38 00 00 00 */	li r0, 0
/* 80143500 00140440  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80143504 00140444  38 63 05 60 */	addi r3, r3, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 80143508 00140448  90 01 00 20 */	stw r0, 0x20(r1)
/* 8014350C 0014044C  28 00 00 00 */	cmplwi r0, 0
/* 80143510 00140450  90 61 00 14 */	stw r3, 0x14(r1)
/* 80143514 00140454  90 01 00 18 */	stw r0, 0x18(r1)
/* 80143518 00140458  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8014351C 0014045C  40 82 00 20 */	bne .L_8014353C
/* 80143520 00140460  7C 83 23 78 */	mr r3, r4
/* 80143524 00140464  81 84 00 00 */	lwz r12, 0(r4)
/* 80143528 00140468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014352C 0014046C  7D 89 03 A6 */	mtctr r12
/* 80143530 00140470  4E 80 04 21 */	bctrl 
/* 80143534 00140474  90 61 00 18 */	stw r3, 0x18(r1)
/* 80143538 00140478  48 00 01 C4 */	b .L_801436FC
.L_8014353C:
/* 8014353C 0014047C  7C 83 23 78 */	mr r3, r4
/* 80143540 00140480  81 84 00 00 */	lwz r12, 0(r4)
/* 80143544 00140484  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80143548 00140488  7D 89 03 A6 */	mtctr r12
/* 8014354C 0014048C  4E 80 04 21 */	bctrl 
/* 80143550 00140490  90 61 00 18 */	stw r3, 0x18(r1)
/* 80143554 00140494  48 00 00 58 */	b .L_801435AC
.L_80143558:
/* 80143558 00140498  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8014355C 0014049C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143560 001404A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80143564 001404A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80143568 001404A8  7D 89 03 A6 */	mtctr r12
/* 8014356C 001404AC  4E 80 04 21 */	bctrl 
/* 80143570 001404B0  7C 64 1B 78 */	mr r4, r3
/* 80143574 001404B4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80143578 001404B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014357C 001404BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143580 001404C0  7D 89 03 A6 */	mtctr r12
/* 80143584 001404C4  4E 80 04 21 */	bctrl 
/* 80143588 001404C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014358C 001404CC  40 82 01 70 */	bne .L_801436FC
/* 80143590 001404D0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143594 001404D4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143598 001404D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014359C 001404DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801435A0 001404E0  7D 89 03 A6 */	mtctr r12
/* 801435A4 001404E4  4E 80 04 21 */	bctrl 
/* 801435A8 001404E8  90 61 00 18 */	stw r3, 0x18(r1)
.L_801435AC:
/* 801435AC 001404EC  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801435B0 001404F0  38 61 00 14 */	addi r3, r1, 0x14
/* 801435B4 001404F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801435B8 001404F8  7D 89 03 A6 */	mtctr r12
/* 801435BC 001404FC  4E 80 04 21 */	bctrl 
/* 801435C0 00140500  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801435C4 00140504  41 82 FF 94 */	beq .L_80143558
/* 801435C8 00140508  48 00 01 34 */	b .L_801436FC
.L_801435CC:
/* 801435CC 0014050C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801435D0 00140510  81 83 00 00 */	lwz r12, 0(r3)
/* 801435D4 00140514  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801435D8 00140518  7D 89 03 A6 */	mtctr r12
/* 801435DC 0014051C  4E 80 04 21 */	bctrl 
/* 801435E0 00140520  7C 60 1B 78 */	mr r0, r3
/* 801435E4 00140524  7C 1E 03 78 */	mr r30, r0
/* 801435E8 00140528  48 0A 9C 81 */	bl canRide__Q34Game15ItemBigFountain4ItemFv
/* 801435EC 0014052C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801435F0 00140530  41 82 00 50 */	beq .L_80143640
/* 801435F4 00140534  7F C4 F3 78 */	mr r4, r30
/* 801435F8 00140538  38 61 00 08 */	addi r3, r1, 8
/* 801435FC 0014053C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80143600 00140540  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143604 00140544  7D 89 03 A6 */	mtctr r12
/* 80143608 00140548  4E 80 04 21 */	bctrl 
/* 8014360C 0014054C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80143610 00140550  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 80143614 00140554  C0 41 00 08 */	lfs f2, 8(r1)
/* 80143618 00140558  EC 61 00 28 */	fsubs f3, f1, f0
/* 8014361C 0014055C  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 80143620 00140560  C0 02 A0 54 */	lfs f0, lbl_805183B4@sda21(r2)
/* 80143624 00140564  EC 42 08 28 */	fsubs f2, f2, f1
/* 80143628 00140568  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8014362C 0014056C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80143630 00140570  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143634 00140574  40 80 00 0C */	bge .L_80143640
/* 80143638 00140578  7F C3 F3 78 */	mr r3, r30
/* 8014363C 0014057C  48 00 00 E4 */	b .L_80143720
.L_80143640:
/* 80143640 00140580  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80143644 00140584  28 00 00 00 */	cmplwi r0, 0
/* 80143648 00140588  40 82 00 24 */	bne .L_8014366C
/* 8014364C 0014058C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143650 00140590  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143654 00140594  81 83 00 00 */	lwz r12, 0(r3)
/* 80143658 00140598  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014365C 0014059C  7D 89 03 A6 */	mtctr r12
/* 80143660 001405A0  4E 80 04 21 */	bctrl 
/* 80143664 001405A4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80143668 001405A8  48 00 00 94 */	b .L_801436FC
.L_8014366C:
/* 8014366C 001405AC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143670 001405B0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143674 001405B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80143678 001405B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014367C 001405BC  7D 89 03 A6 */	mtctr r12
/* 80143680 001405C0  4E 80 04 21 */	bctrl 
/* 80143684 001405C4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80143688 001405C8  48 00 00 58 */	b .L_801436E0
.L_8014368C:
/* 8014368C 001405CC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143690 001405D0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143694 001405D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80143698 001405D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014369C 001405DC  7D 89 03 A6 */	mtctr r12
/* 801436A0 001405E0  4E 80 04 21 */	bctrl 
/* 801436A4 001405E4  7C 64 1B 78 */	mr r4, r3
/* 801436A8 001405E8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801436AC 001405EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801436B0 001405F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801436B4 001405F4  7D 89 03 A6 */	mtctr r12
/* 801436B8 001405F8  4E 80 04 21 */	bctrl 
/* 801436BC 001405FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801436C0 00140600  40 82 00 3C */	bne .L_801436FC
/* 801436C4 00140604  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801436C8 00140608  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801436CC 0014060C  81 83 00 00 */	lwz r12, 0(r3)
/* 801436D0 00140610  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801436D4 00140614  7D 89 03 A6 */	mtctr r12
/* 801436D8 00140618  4E 80 04 21 */	bctrl 
/* 801436DC 0014061C  90 61 00 18 */	stw r3, 0x18(r1)
.L_801436E0:
/* 801436E0 00140620  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801436E4 00140624  38 61 00 14 */	addi r3, r1, 0x14
/* 801436E8 00140628  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801436EC 0014062C  7D 89 03 A6 */	mtctr r12
/* 801436F0 00140630  4E 80 04 21 */	bctrl 
/* 801436F4 00140634  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801436F8 00140638  41 82 FF 94 */	beq .L_8014368C
.L_801436FC:
/* 801436FC 0014063C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80143700 00140640  81 83 00 00 */	lwz r12, 0(r3)
/* 80143704 00140644  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80143708 00140648  7D 89 03 A6 */	mtctr r12
/* 8014370C 0014064C  4E 80 04 21 */	bctrl 
/* 80143710 00140650  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80143714 00140654  7C 04 18 40 */	cmplw r4, r3
/* 80143718 00140658  40 82 FE B4 */	bne .L_801435CC
/* 8014371C 0014065C  38 60 00 00 */	li r3, 0
.L_80143720:
/* 80143720 00140660  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80143724 00140664  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80143728 00140668  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014372C 0014066C  7C 08 03 A6 */	mtlr r0
/* 80143730 00140670  38 21 00 30 */	addi r1, r1, 0x30
/* 80143734 00140674  4E 80 00 20 */	blr 
.endfn checkBigFountain__Q24Game4NaviFv

.fn checkOnyon__Q24Game4NaviFv, global
/* 80143738 00140678  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014373C 0014067C  7C 08 02 A6 */	mflr r0
/* 80143740 00140680  90 01 00 44 */	stw r0, 0x44(r1)
/* 80143744 00140684  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80143748 00140688  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014374C 0014068C  7C 7E 1B 78 */	mr r30, r3
/* 80143750 00140690  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80143754 00140694  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80143758 00140698  80 85 00 44 */	lwz r4, 0x44(r5)
/* 8014375C 0014069C  2C 04 00 00 */	cmpwi r4, 0
/* 80143760 001406A0  41 82 00 0C */	beq .L_8014376C
/* 80143764 001406A4  38 60 00 00 */	li r3, 0
/* 80143768 001406A8  48 00 03 1C */	b .L_80143A84
.L_8014376C:
/* 8014376C 001406AC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80143770 001406B0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80143774 001406B4  2C 00 00 00 */	cmpwi r0, 0
/* 80143778 001406B8  41 82 00 0C */	beq .L_80143784
/* 8014377C 001406BC  38 60 00 00 */	li r3, 0
/* 80143780 001406C0  48 00 03 04 */	b .L_80143A84
.L_80143784:
/* 80143784 001406C4  80 CD 93 30 */	lwz r6, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80143788 001406C8  28 06 00 00 */	cmplwi r6, 0
/* 8014378C 001406CC  40 82 00 0C */	bne .L_80143798
/* 80143790 001406D0  38 60 00 00 */	li r3, 0
/* 80143794 001406D4  48 00 02 F0 */	b .L_80143A84
.L_80143798:
/* 80143798 001406D8  2C 04 00 00 */	cmpwi r4, 0
/* 8014379C 001406DC  40 82 00 1C */	bne .L_801437B8
/* 801437A0 001406E0  80 65 00 40 */	lwz r3, 0x40(r5)
/* 801437A4 001406E4  80 03 02 18 */	lwz r0, 0x218(r3)
/* 801437A8 001406E8  28 00 00 00 */	cmplwi r0, 0
/* 801437AC 001406EC  40 82 00 0C */	bne .L_801437B8
/* 801437B0 001406F0  38 60 00 00 */	li r3, 0
/* 801437B4 001406F4  48 00 02 D0 */	b .L_80143A84
.L_801437B8:
/* 801437B8 001406F8  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 801437BC 001406FC  28 03 00 00 */	cmplwi r3, 0
/* 801437C0 00140700  41 82 00 0C */	beq .L_801437CC
/* 801437C4 00140704  80 03 00 04 */	lwz r0, 4(r3)
/* 801437C8 00140708  48 00 00 08 */	b .L_801437D0
.L_801437CC:
/* 801437CC 0014070C  38 00 FF FF */	li r0, -1
.L_801437D0:
/* 801437D0 00140710  2C 00 00 00 */	cmpwi r0, 0
/* 801437D4 00140714  41 82 00 0C */	beq .L_801437E0
/* 801437D8 00140718  38 60 00 00 */	li r3, 0
/* 801437DC 0014071C  48 00 02 A8 */	b .L_80143A84
.L_801437E0:
/* 801437E0 00140720  28 06 00 00 */	cmplwi r6, 0
/* 801437E4 00140724  41 82 00 08 */	beq .L_801437EC
/* 801437E8 00140728  38 C6 00 30 */	addi r6, r6, 0x30
.L_801437EC:
/* 801437EC 0014072C  3C 60 80 4B */	lis r3, "__vt__23Iterator<Q24Game5Onyon>"@ha
/* 801437F0 00140730  38 00 00 00 */	li r0, 0
/* 801437F4 00140734  38 A3 05 48 */	addi r5, r3, "__vt__23Iterator<Q24Game5Onyon>"@l
/* 801437F8 00140738  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801437FC 0014073C  7F C4 F3 78 */	mr r4, r30
/* 80143800 00140740  38 61 00 08 */	addi r3, r1, 8
/* 80143804 00140744  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80143808 00140748  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014380C 0014074C  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80143810 00140750  81 9E 00 00 */	lwz r12, 0(r30)
/* 80143814 00140754  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143818 00140758  7D 89 03 A6 */	mtctr r12
/* 8014381C 0014075C  4E 80 04 21 */	bctrl 
/* 80143820 00140760  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80143824 00140764  3B E0 00 00 */	li r31, 0
/* 80143828 00140768  C0 41 00 08 */	lfs f2, 8(r1)
/* 8014382C 0014076C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80143830 00140770  28 00 00 00 */	cmplwi r0, 0
/* 80143834 00140774  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80143838 00140778  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8014383C 0014077C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80143840 00140780  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80143844 00140784  40 82 00 20 */	bne .L_80143864
/* 80143848 00140788  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8014384C 0014078C  81 83 00 00 */	lwz r12, 0(r3)
/* 80143850 00140790  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80143854 00140794  7D 89 03 A6 */	mtctr r12
/* 80143858 00140798  4E 80 04 21 */	bctrl 
/* 8014385C 0014079C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80143860 001407A0  48 00 02 00 */	b .L_80143A60
.L_80143864:
/* 80143864 001407A4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80143868 001407A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014386C 001407AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80143870 001407B0  7D 89 03 A6 */	mtctr r12
/* 80143874 001407B4  4E 80 04 21 */	bctrl 
/* 80143878 001407B8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014387C 001407BC  48 00 00 58 */	b .L_801438D4
.L_80143880:
/* 80143880 001407C0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80143884 001407C4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80143888 001407C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014388C 001407CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80143890 001407D0  7D 89 03 A6 */	mtctr r12
/* 80143894 001407D4  4E 80 04 21 */	bctrl 
/* 80143898 001407D8  7C 64 1B 78 */	mr r4, r3
/* 8014389C 001407DC  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 801438A0 001407E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801438A4 001407E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801438A8 001407E8  7D 89 03 A6 */	mtctr r12
/* 801438AC 001407EC  4E 80 04 21 */	bctrl 
/* 801438B0 001407F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801438B4 001407F4  40 82 01 AC */	bne .L_80143A60
/* 801438B8 001407F8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801438BC 001407FC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801438C0 00140800  81 83 00 00 */	lwz r12, 0(r3)
/* 801438C4 00140804  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801438C8 00140808  7D 89 03 A6 */	mtctr r12
/* 801438CC 0014080C  4E 80 04 21 */	bctrl 
/* 801438D0 00140810  90 61 00 24 */	stw r3, 0x24(r1)
.L_801438D4:
/* 801438D4 00140814  81 81 00 20 */	lwz r12, 0x20(r1)
/* 801438D8 00140818  38 61 00 20 */	addi r3, r1, 0x20
/* 801438DC 0014081C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801438E0 00140820  7D 89 03 A6 */	mtctr r12
/* 801438E4 00140824  4E 80 04 21 */	bctrl 
/* 801438E8 00140828  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801438EC 0014082C  41 82 FF 94 */	beq .L_80143880
/* 801438F0 00140830  48 00 01 70 */	b .L_80143A60
.L_801438F4:
/* 801438F4 00140834  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801438F8 00140838  81 83 00 00 */	lwz r12, 0(r3)
/* 801438FC 0014083C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80143900 00140840  7D 89 03 A6 */	mtctr r12
/* 80143904 00140844  4E 80 04 21 */	bctrl 
/* 80143908 00140848  A0 03 02 2E */	lhz r0, 0x22e(r3)
/* 8014390C 0014084C  7C 7D 1B 78 */	mr r29, r3
/* 80143910 00140850  28 00 00 03 */	cmplwi r0, 3
/* 80143914 00140854  41 82 00 90 */	beq .L_801439A4
/* 80143918 00140858  28 00 00 04 */	cmplwi r0, 4
/* 8014391C 0014085C  40 82 00 2C */	bne .L_80143948
/* 80143920 00140860  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80143924 00140864  38 80 00 04 */	li r4, 4
/* 80143928 00140868  48 0A 36 F9 */	bl hasContainer__Q24Game8PlayDataFi
/* 8014392C 0014086C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143930 00140870  40 82 00 18 */	bne .L_80143948
/* 80143934 00140874  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80143938 00140878  38 80 00 03 */	li r4, 3
/* 8014393C 0014087C  48 0A 36 E5 */	bl hasContainer__Q24Game8PlayDataFi
/* 80143940 00140880  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143944 00140884  41 82 00 60 */	beq .L_801439A4
.L_80143948:
/* 80143948 00140888  7F A3 EB 78 */	mr r3, r29
/* 8014394C 0014088C  38 81 00 14 */	addi r4, r1, 0x14
/* 80143950 00140890  48 03 63 59 */	bl "insideAccessArea__Q24Game5OnyonFR10Vector3<f>"
/* 80143954 00140894  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143958 00140898  41 82 00 34 */	beq .L_8014398C
/* 8014395C 0014089C  7F A3 EB 78 */	mr r3, r29
/* 80143960 001408A0  38 80 00 01 */	li r4, 1
/* 80143964 001408A4  48 03 57 4D */	bl setSpotEffectActive__Q24Game5OnyonFb
/* 80143968 001408A8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8014396C 001408AC  38 80 10 1B */	li r4, 0x101b
/* 80143970 001408B0  38 A0 00 00 */	li r5, 0
/* 80143974 001408B4  48 1F 4C BD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80143978 001408B8  A0 1E 02 88 */	lhz r0, 0x288(r30)
/* 8014397C 001408BC  7F BF EB 78 */	mr r31, r29
/* 80143980 001408C0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80143984 001408C4  B0 1E 02 88 */	sth r0, 0x288(r30)
/* 80143988 001408C8  48 00 00 1C */	b .L_801439A4
.L_8014398C:
/* 8014398C 001408CC  A0 1E 02 88 */	lhz r0, 0x288(r30)
/* 80143990 001408D0  7F A3 EB 78 */	mr r3, r29
/* 80143994 001408D4  38 80 00 00 */	li r4, 0
/* 80143998 001408D8  60 00 00 02 */	ori r0, r0, 2
/* 8014399C 001408DC  B0 1E 02 88 */	sth r0, 0x288(r30)
/* 801439A0 001408E0  48 03 57 11 */	bl setSpotEffectActive__Q24Game5OnyonFb
.L_801439A4:
/* 801439A4 001408E4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801439A8 001408E8  28 00 00 00 */	cmplwi r0, 0
/* 801439AC 001408EC  40 82 00 24 */	bne .L_801439D0
/* 801439B0 001408F0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801439B4 001408F4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801439B8 001408F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801439BC 001408FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801439C0 00140900  7D 89 03 A6 */	mtctr r12
/* 801439C4 00140904  4E 80 04 21 */	bctrl 
/* 801439C8 00140908  90 61 00 24 */	stw r3, 0x24(r1)
/* 801439CC 0014090C  48 00 00 94 */	b .L_80143A60
.L_801439D0:
/* 801439D0 00140910  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801439D4 00140914  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801439D8 00140918  81 83 00 00 */	lwz r12, 0(r3)
/* 801439DC 0014091C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801439E0 00140920  7D 89 03 A6 */	mtctr r12
/* 801439E4 00140924  4E 80 04 21 */	bctrl 
/* 801439E8 00140928  90 61 00 24 */	stw r3, 0x24(r1)
/* 801439EC 0014092C  48 00 00 58 */	b .L_80143A44
.L_801439F0:
/* 801439F0 00140930  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801439F4 00140934  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801439F8 00140938  81 83 00 00 */	lwz r12, 0(r3)
/* 801439FC 0014093C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80143A00 00140940  7D 89 03 A6 */	mtctr r12
/* 80143A04 00140944  4E 80 04 21 */	bctrl 
/* 80143A08 00140948  7C 64 1B 78 */	mr r4, r3
/* 80143A0C 0014094C  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80143A10 00140950  81 83 00 00 */	lwz r12, 0(r3)
/* 80143A14 00140954  81 8C 00 08 */	lwz r12, 8(r12)
/* 80143A18 00140958  7D 89 03 A6 */	mtctr r12
/* 80143A1C 0014095C  4E 80 04 21 */	bctrl 
/* 80143A20 00140960  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143A24 00140964  40 82 00 3C */	bne .L_80143A60
/* 80143A28 00140968  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80143A2C 0014096C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80143A30 00140970  81 83 00 00 */	lwz r12, 0(r3)
/* 80143A34 00140974  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80143A38 00140978  7D 89 03 A6 */	mtctr r12
/* 80143A3C 0014097C  4E 80 04 21 */	bctrl 
/* 80143A40 00140980  90 61 00 24 */	stw r3, 0x24(r1)
.L_80143A44:
/* 80143A44 00140984  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80143A48 00140988  38 61 00 20 */	addi r3, r1, 0x20
/* 80143A4C 0014098C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80143A50 00140990  7D 89 03 A6 */	mtctr r12
/* 80143A54 00140994  4E 80 04 21 */	bctrl 
/* 80143A58 00140998  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143A5C 0014099C  41 82 FF 94 */	beq .L_801439F0
.L_80143A60:
/* 80143A60 001409A0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80143A64 001409A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80143A68 001409A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80143A6C 001409AC  7D 89 03 A6 */	mtctr r12
/* 80143A70 001409B0  4E 80 04 21 */	bctrl 
/* 80143A74 001409B4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80143A78 001409B8  7C 04 18 40 */	cmplw r4, r3
/* 80143A7C 001409BC  40 82 FE 78 */	bne .L_801438F4
/* 80143A80 001409C0  7F E3 FB 78 */	mr r3, r31
.L_80143A84:
/* 80143A84 001409C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80143A88 001409C8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80143A8C 001409CC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80143A90 001409D0  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80143A94 001409D4  7C 08 03 A6 */	mtlr r0
/* 80143A98 001409D8  38 21 00 40 */	addi r1, r1, 0x40
/* 80143A9C 001409DC  4E 80 00 20 */	blr 
.endfn checkOnyon__Q24Game4NaviFv

.fn "isDone__23Iterator<Q24Game5Onyon>Fv", weak
/* 80143AA0 001409E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80143AA4 001409E4  7C 08 02 A6 */	mflr r0
/* 80143AA8 001409E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80143AAC 001409EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80143AB0 001409F0  7C 7F 1B 78 */	mr r31, r3
/* 80143AB4 001409F4  80 63 00 08 */	lwz r3, 8(r3)
/* 80143AB8 001409F8  81 83 00 00 */	lwz r12, 0(r3)
/* 80143ABC 001409FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80143AC0 00140A00  7D 89 03 A6 */	mtctr r12
/* 80143AC4 00140A04  4E 80 04 21 */	bctrl 
/* 80143AC8 00140A08  80 1F 00 04 */	lwz r0, 4(r31)
/* 80143ACC 00140A0C  7C 00 18 50 */	subf r0, r0, r3
/* 80143AD0 00140A10  7C 00 00 34 */	cntlzw r0, r0
/* 80143AD4 00140A14  54 03 D9 7E */	srwi r3, r0, 5
/* 80143AD8 00140A18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80143ADC 00140A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80143AE0 00140A20  7C 08 03 A6 */	mtlr r0
/* 80143AE4 00140A24  38 21 00 10 */	addi r1, r1, 0x10
/* 80143AE8 00140A28  4E 80 00 20 */	blr 
.endfn "isDone__23Iterator<Q24Game5Onyon>Fv"

.fn getMapCollisionRadius__Q24Game4NaviFv, global
/* 80143AEC 00140A2C  C0 22 A0 58 */	lfs f1, lbl_805183B8@sda21(r2)
/* 80143AF0 00140A30  4E 80 00 20 */	blr 
.endfn getMapCollisionRadius__Q24Game4NaviFv

.fn doDirectDraw__Q24Game4NaviFR8Graphics, global
/* 80143AF4 00140A34  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game4NaviFR8Graphics

.fn disableController__Q24Game4NaviFv, global
/* 80143AF8 00140A38  38 00 00 00 */	li r0, 0
/* 80143AFC 00140A3C  90 03 02 78 */	stw r0, 0x278(r3)
/* 80143B00 00140A40  4E 80 00 20 */	blr 
.endfn disableController__Q24Game4NaviFv

.fn control__Q24Game4NaviFv, global
/* 80143B04 00140A44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80143B08 00140A48  7C 08 02 A6 */	mflr r0
/* 80143B0C 00140A4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80143B10 00140A50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80143B14 00140A54  7C 7F 1B 78 */	mr r31, r3
/* 80143B18 00140A58  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 80143B1C 00140A5C  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 80143B20 00140A60  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80143B24 00140A64  40 82 00 08 */	bne .L_80143B2C
/* 80143B28 00140A68  48 00 00 B5 */	bl makeVelocity__Q24Game4NaviFv
.L_80143B2C:
/* 80143B2C 00140A6C  7F E3 FB 78 */	mr r3, r31
/* 80143B30 00140A70  38 80 00 00 */	li r4, 0
/* 80143B34 00140A74  48 00 22 B5 */	bl makeCStick__Q24Game4NaviFb
/* 80143B38 00140A78  7F E3 FB 78 */	mr r3, r31
/* 80143B3C 00140A7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80143B40 00140A80  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80143B44 00140A84  7D 89 03 A6 */	mtctr r12
/* 80143B48 00140A88  4E 80 04 21 */	bctrl 
/* 80143B4C 00140A8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143B50 00140A90  40 82 00 78 */	bne .L_80143BC8
/* 80143B54 00140A94  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80143B58 00140A98  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80143B5C 00140A9C  2C 00 00 00 */	cmpwi r0, 0
/* 80143B60 00140AA0  40 82 00 40 */	bne .L_80143BA0
/* 80143B64 00140AA4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80143B68 00140AA8  48 01 70 B9 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80143B6C 00140AAC  7C 03 F8 40 */	cmplw r3, r31
/* 80143B70 00140AB0  40 82 00 58 */	bne .L_80143BC8
/* 80143B74 00140AB4  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80143B78 00140AB8  C0 5F 02 F4 */	lfs f2, 0x2f4(r31)
/* 80143B7C 00140ABC  28 03 00 00 */	cmplwi r3, 0
/* 80143B80 00140AC0  C0 3F 02 EC */	lfs f1, 0x2ec(r31)
/* 80143B84 00140AC4  7C 65 1B 78 */	mr r5, r3
/* 80143B88 00140AC8  41 82 00 08 */	beq .L_80143B90
/* 80143B8C 00140ACC  38 A3 00 30 */	addi r5, r3, 0x30
.L_80143B90:
/* 80143B90 00140AD0  38 63 00 70 */	addi r3, r3, 0x70
/* 80143B94 00140AD4  38 80 00 01 */	li r4, 1
/* 80143B98 00140AD8  48 1F BA BD */	bl playRappa__Q26PSGame5RappaFbffPQ27JAInter6Object
/* 80143B9C 00140ADC  48 00 00 2C */	b .L_80143BC8
.L_80143BA0:
/* 80143BA0 00140AE0  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80143BA4 00140AE4  C0 5F 02 F4 */	lfs f2, 0x2f4(r31)
/* 80143BA8 00140AE8  28 03 00 00 */	cmplwi r3, 0
/* 80143BAC 00140AEC  C0 3F 02 EC */	lfs f1, 0x2ec(r31)
/* 80143BB0 00140AF0  7C 65 1B 78 */	mr r5, r3
/* 80143BB4 00140AF4  41 82 00 08 */	beq .L_80143BBC
/* 80143BB8 00140AF8  38 A3 00 30 */	addi r5, r3, 0x30
.L_80143BBC:
/* 80143BBC 00140AFC  38 63 00 70 */	addi r3, r3, 0x70
/* 80143BC0 00140B00  38 80 00 01 */	li r4, 1
/* 80143BC4 00140B04  48 1F BA 91 */	bl playRappa__Q26PSGame5RappaFbffPQ27JAInter6Object
.L_80143BC8:
/* 80143BC8 00140B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80143BCC 00140B0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80143BD0 00140B10  7C 08 03 A6 */	mtlr r0
/* 80143BD4 00140B14  38 21 00 10 */	addi r1, r1, 0x10
/* 80143BD8 00140B18  4E 80 00 20 */	blr 
.endfn control__Q24Game4NaviFv

.fn makeVelocity__Q24Game4NaviFv, global
/* 80143BDC 00140B1C  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 80143BE0 00140B20  7C 08 02 A6 */	mflr r0
/* 80143BE4 00140B24  90 01 01 04 */	stw r0, 0x104(r1)
/* 80143BE8 00140B28  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 80143BEC 00140B2C  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 80143BF0 00140B30  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 80143BF4 00140B34  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 80143BF8 00140B38  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 80143BFC 00140B3C  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 80143C00 00140B40  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 80143C04 00140B44  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 80143C08 00140B48  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 80143C0C 00140B4C  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 80143C10 00140B50  DB 41 00 A0 */	stfd f26, 0xa0(r1)
/* 80143C14 00140B54  F3 41 00 A8 */	psq_st f26, 168(r1), 0, qr0
/* 80143C18 00140B58  DB 21 00 90 */	stfd f25, 0x90(r1)
/* 80143C1C 00140B5C  F3 21 00 98 */	psq_st f25, 152(r1), 0, qr0
/* 80143C20 00140B60  DB 01 00 80 */	stfd f24, 0x80(r1)
/* 80143C24 00140B64  F3 01 00 88 */	psq_st f24, 136(r1), 0, qr0
/* 80143C28 00140B68  DA E1 00 70 */	stfd f23, 0x70(r1)
/* 80143C2C 00140B6C  F2 E1 00 78 */	psq_st f23, 120(r1), 0, qr0
/* 80143C30 00140B70  DA C1 00 60 */	stfd f22, 0x60(r1)
/* 80143C34 00140B74  F2 C1 00 68 */	psq_st f22, 104(r1), 0, qr0
/* 80143C38 00140B78  DA A1 00 50 */	stfd f21, 0x50(r1)
/* 80143C3C 00140B7C  F2 A1 00 58 */	psq_st f21, 88(r1), 0, qr0
/* 80143C40 00140B80  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80143C44 00140B84  7C 7F 1B 78 */	mr r31, r3
/* 80143C48 00140B88  80 63 02 78 */	lwz r3, 0x278(r3)
/* 80143C4C 00140B8C  28 03 00 00 */	cmplwi r3, 0
/* 80143C50 00140B90  41 82 00 6C */	beq .L_80143CBC
/* 80143C54 00140B94  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80143C58 00140B98  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80143C5C 00140B9C  40 82 00 54 */	bne .L_80143CB0
/* 80143C60 00140BA0  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80143C64 00140BA4  40 82 00 4C */	bne .L_80143CB0
/* 80143C68 00140BA8  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 80143C6C 00140BAC  40 82 00 44 */	bne .L_80143CB0
/* 80143C70 00140BB0  54 60 05 29 */	rlwinm. r0, r3, 0, 0x14, 0x14
/* 80143C74 00140BB4  40 82 00 3C */	bne .L_80143CB0
/* 80143C78 00140BB8  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80143C7C 00140BBC  40 82 00 34 */	bne .L_80143CB0
/* 80143C80 00140BC0  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 80143C84 00140BC4  40 82 00 2C */	bne .L_80143CB0
/* 80143C88 00140BC8  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 80143C8C 00140BCC  40 82 00 24 */	bne .L_80143CB0
/* 80143C90 00140BD0  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80143C94 00140BD4  40 82 00 1C */	bne .L_80143CB0
/* 80143C98 00140BD8  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80143C9C 00140BDC  40 82 00 14 */	bne .L_80143CB0
/* 80143CA0 00140BE0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80143CA4 00140BE4  40 82 00 0C */	bne .L_80143CB0
/* 80143CA8 00140BE8  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80143CAC 00140BEC  41 82 00 10 */	beq .L_80143CBC
.L_80143CB0:
/* 80143CB0 00140BF0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80143CB4 00140BF4  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 80143CB8 00140BF8  48 00 00 18 */	b .L_80143CD0
.L_80143CBC:
/* 80143CBC 00140BFC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80143CC0 00140C00  C0 3F 03 08 */	lfs f1, 0x308(r31)
/* 80143CC4 00140C04  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80143CC8 00140C08  EC 01 00 2A */	fadds f0, f1, f0
/* 80143CCC 00140C0C  D0 1F 03 08 */	stfs f0, 0x308(r31)
.L_80143CD0:
/* 80143CD0 00140C10  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 80143CD4 00140C14  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80143CD8 00140C18  FC 40 08 90 */	fmr f2, f1
/* 80143CDC 00140C1C  28 03 00 00 */	cmplwi r3, 0
/* 80143CE0 00140C20  41 82 00 10 */	beq .L_80143CF0
/* 80143CE4 00140C24  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 80143CE8 00140C28  C0 43 00 4C */	lfs f2, 0x4c(r3)
/* 80143CEC 00140C2C  FC 20 00 50 */	fneg f1, f0
.L_80143CF0:
/* 80143CF0 00140C30  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80143CF4 00140C34  7F E3 FB 78 */	mr r3, r31
/* 80143CF8 00140C38  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80143CFC 00140C3C  38 81 00 38 */	addi r4, r1, 0x38
/* 80143D00 00140C40  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80143D04 00140C44  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80143D08 00140C48  48 00 02 ED */	bl "reviseController__Q24Game4NaviFR10Vector3<f>"
/* 80143D0C 00140C4C  C2 C1 00 38 */	lfs f22, 0x38(r1)
/* 80143D10 00140C50  38 61 00 20 */	addi r3, r1, 0x20
/* 80143D14 00140C54  C2 A1 00 40 */	lfs f21, 0x40(r1)
/* 80143D18 00140C58  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80143D1C 00140C5C  48 2D 65 8D */	bl getSideVector__11CullFrustumFv
/* 80143D20 00140C60  C3 61 00 20 */	lfs f27, 0x20(r1)
/* 80143D24 00140C64  38 61 00 14 */	addi r3, r1, 0x14
/* 80143D28 00140C68  C3 21 00 28 */	lfs f25, 0x28(r1)
/* 80143D2C 00140C6C  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80143D30 00140C70  48 2D 65 59 */	bl getUpVector__11CullFrustumFv
/* 80143D34 00140C74  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80143D38 00140C78  38 61 00 08 */	addi r3, r1, 8
/* 80143D3C 00140C7C  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 80143D40 00140C80  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 80143D44 00140C84  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80143D48 00140C88  48 2D 65 8D */	bl getViewVector__11CullFrustumFv
/* 80143D4C 00140C8C  C3 42 9F F4 */	lfs f26, lbl_80518354@sda21(r2)
/* 80143D50 00140C90  C3 01 00 08 */	lfs f24, 8(r1)
/* 80143D54 00140C94  EC 1B D6 FA */	fmadds f0, f27, f27, f26
/* 80143D58 00140C98  C3 81 00 0C */	lfs f28, 0xc(r1)
/* 80143D5C 00140C9C  C2 E1 00 10 */	lfs f23, 0x10(r1)
/* 80143D60 00140CA0  EC 39 06 7A */	fmadds f1, f25, f25, f0
/* 80143D64 00140CA4  48 2C DA A1 */	bl pikmin2_sqrtf__Ff
/* 80143D68 00140CA8  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80143D6C 00140CAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143D70 00140CB0  40 81 00 18 */	ble .L_80143D88
/* 80143D74 00140CB4  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80143D78 00140CB8  EC 00 08 24 */	fdivs f0, f0, f1
/* 80143D7C 00140CBC  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80143D80 00140CC0  EF 5A 00 32 */	fmuls f26, f26, f0
/* 80143D84 00140CC4  EF 39 00 32 */	fmuls f25, f25, f0
.L_80143D88:
/* 80143D88 00140CC8  FC 1E E0 40 */	fcmpo cr0, f30, f28
/* 80143D8C 00140CCC  40 81 00 08 */	ble .L_80143D94
/* 80143D90 00140CD0  48 00 00 0C */	b .L_80143D9C
.L_80143D94:
/* 80143D94 00140CD4  FF 00 F8 90 */	fmr f24, f31
/* 80143D98 00140CD8  FE E0 E8 90 */	fmr f23, f29
.L_80143D9C:
/* 80143D9C 00140CDC  C3 82 9F F4 */	lfs f28, lbl_80518354@sda21(r2)
/* 80143DA0 00140CE0  EC 18 E6 3A */	fmadds f0, f24, f24, f28
/* 80143DA4 00140CE4  EC 37 05 FA */	fmadds f1, f23, f23, f0
/* 80143DA8 00140CE8  48 2C DA 5D */	bl pikmin2_sqrtf__Ff
/* 80143DAC 00140CEC  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80143DB0 00140CF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143DB4 00140CF4  40 81 00 18 */	ble .L_80143DCC
/* 80143DB8 00140CF8  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80143DBC 00140CFC  EC 00 08 24 */	fdivs f0, f0, f1
/* 80143DC0 00140D00  EF 18 00 32 */	fmuls f24, f24, f0
/* 80143DC4 00140D04  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80143DC8 00140D08  EE F7 00 32 */	fmuls f23, f23, f0
.L_80143DCC:
/* 80143DCC 00140D0C  EC 3B 05 B2 */	fmuls f1, f27, f22
/* 80143DD0 00140D10  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80143DD4 00140D14  EC 18 05 72 */	fmuls f0, f24, f21
/* 80143DD8 00140D18  38 80 00 07 */	li r4, 7
/* 80143DDC 00140D1C  EC 7A 05 B2 */	fmuls f3, f26, f22
/* 80143DE0 00140D20  38 63 00 48 */	addi r3, r3, 0x48
/* 80143DE4 00140D24  EC 5C 05 72 */	fmuls f2, f28, f21
/* 80143DE8 00140D28  EC 81 00 2A */	fadds f4, f1, f0
/* 80143DEC 00140D2C  EC 39 05 B2 */	fmuls f1, f25, f22
/* 80143DF0 00140D30  EC 17 05 72 */	fmuls f0, f23, f21
/* 80143DF4 00140D34  EC 43 10 2A */	fadds f2, f3, f2
/* 80143DF8 00140D38  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 80143DFC 00140D3C  EC 01 00 2A */	fadds f0, f1, f0
/* 80143E00 00140D40  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80143E04 00140D44  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80143E08 00140D48  48 0A 21 C9 */	bl hasItem__Q24Game10OlimarDataFi
/* 80143E0C 00140D4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80143E10 00140D50  41 82 00 14 */	beq .L_80143E24
/* 80143E14 00140D54  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80143E18 00140D58  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80143E1C 00140D5C  C2 A3 0B B0 */	lfs f21, 0xbb0(r3)
/* 80143E20 00140D60  48 00 00 10 */	b .L_80143E30
.L_80143E24:
/* 80143E24 00140D64  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80143E28 00140D68  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80143E2C 00140D6C  C2 A3 03 B8 */	lfs f21, 0x3b8(r3)
.L_80143E30:
/* 80143E30 00140D70  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80143E34 00140D74  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80143E38 00140D78  EC 21 00 72 */	fmuls f1, f1, f1
/* 80143E3C 00140D7C  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80143E40 00140D80  EC 00 00 32 */	fmuls f0, f0, f0
/* 80143E44 00140D84  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80143E48 00140D88  EC 01 00 2A */	fadds f0, f1, f0
/* 80143E4C 00140D8C  EC 22 00 2A */	fadds f1, f2, f0
/* 80143E50 00140D90  48 2C D9 B5 */	bl pikmin2_sqrtf__Ff
/* 80143E54 00140D94  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80143E58 00140D98  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80143E5C 00140D9C  C0 03 08 E0 */	lfs f0, 0x8e0(r3)
/* 80143E60 00140DA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143E64 00140DA4  40 81 00 0C */	ble .L_80143E70
/* 80143E68 00140DA8  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80143E6C 00140DAC  D0 1F 03 08 */	stfs f0, 0x308(r31)
.L_80143E70:
/* 80143E70 00140DB0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80143E74 00140DB4  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80143E78 00140DB8  EC 00 05 72 */	fmuls f0, f0, f21
/* 80143E7C 00140DBC  C0 62 9F F8 */	lfs f3, lbl_80518358@sda21(r2)
/* 80143E80 00140DC0  EC 42 05 72 */	fmuls f2, f2, f21
/* 80143E84 00140DC4  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80143E88 00140DC8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80143E8C 00140DCC  EC 84 05 72 */	fmuls f4, f4, f21
/* 80143E90 00140DD0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80143E94 00140DD4  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80143E98 00140DD8  EC 04 00 F2 */	fmuls f0, f4, f3
/* 80143E9C 00140DDC  D0 5F 01 E8 */	stfs f2, 0x1e8(r31)
/* 80143EA0 00140DE0  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80143EA4 00140DE4  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 80143EA8 00140DE8  28 00 00 00 */	cmplwi r0, 0
/* 80143EAC 00140DEC  41 82 00 CC */	beq .L_80143F78
/* 80143EB0 00140DF0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80143EB4 00140DF4  38 00 00 00 */	li r0, 0
/* 80143EB8 00140DF8  C0 5F 03 08 */	lfs f2, 0x308(r31)
/* 80143EBC 00140DFC  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80143EC0 00140E00  C0 03 08 90 */	lfs f0, 0x890(r3)
/* 80143EC4 00140E04  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80143EC8 00140E08  4C 41 13 82 */	cror 2, 1, 2
/* 80143ECC 00140E0C  40 82 00 08 */	bne .L_80143ED4
/* 80143ED0 00140E10  38 00 00 01 */	li r0, 1
.L_80143ED4:
/* 80143ED4 00140E14  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80143ED8 00140E18  40 82 00 14 */	bne .L_80143EEC
/* 80143EDC 00140E1C  40 82 00 84 */	bne .L_80143F60
/* 80143EE0 00140E20  C0 03 08 E0 */	lfs f0, 0x8e0(r3)
/* 80143EE4 00140E24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143EE8 00140E28  40 81 00 78 */	ble .L_80143F60
.L_80143EEC:
/* 80143EEC 00140E2C  C0 03 09 08 */	lfs f0, 0x908(r3)
/* 80143EF0 00140E30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143EF4 00140E34  4C 40 13 82 */	cror 2, 0, 2
/* 80143EF8 00140E38  40 82 00 68 */	bne .L_80143F60
/* 80143EFC 00140E3C  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80143F00 00140E40  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80143F04 00140E44  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80143F08 00140E48  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80143F0C 00140E4C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80143F10 00140E50  C0 23 00 00 */	lfs f1, 0(r3)
/* 80143F14 00140E54  C0 43 00 08 */	lfs f2, 8(r3)
/* 80143F18 00140E58  48 2C D8 C5 */	bl pikmin2_atan2f__Fff
/* 80143F1C 00140E5C  48 2C DC B5 */	bl roundAng__Ff
/* 80143F20 00140E60  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 80143F24 00140E64  48 2C DC D9 */	bl angDist__Fff
/* 80143F28 00140E68  C0 42 A0 5C */	lfs f2, lbl_805183BC@sda21(r2)
/* 80143F2C 00140E6C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80143F30 00140E70  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80143F34 00140E74  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 80143F38 00140E78  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 80143F3C 00140E7C  48 2C DC 95 */	bl roundAng__Ff
/* 80143F40 00140E80  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80143F44 00140E84  7F E3 FB 78 */	mr r3, r31
/* 80143F48 00140E88  38 80 00 00 */	li r4, 0
/* 80143F4C 00140E8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80143F50 00140E90  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80143F54 00140E94  7D 89 03 A6 */	mtctr r12
/* 80143F58 00140E98  4E 80 04 21 */	bctrl 
/* 80143F5C 00140E9C  48 00 00 1C */	b .L_80143F78
.L_80143F60:
/* 80143F60 00140EA0  7F E3 FB 78 */	mr r3, r31
/* 80143F64 00140EA4  38 80 00 01 */	li r4, 1
/* 80143F68 00140EA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80143F6C 00140EAC  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80143F70 00140EB0  7D 89 03 A6 */	mtctr r12
/* 80143F74 00140EB4  4E 80 04 21 */	bctrl 
.L_80143F78:
/* 80143F78 00140EB8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80143F7C 00140EBC  38 81 00 2C */	addi r4, r1, 0x2c
/* 80143F80 00140EC0  38 A0 00 00 */	li r5, 0
/* 80143F84 00140EC4  48 02 17 95 */	bl "update__Q24Game11NaviWhistleFR10Vector3<f>b"
/* 80143F88 00140EC8  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 80143F8C 00140ECC  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 80143F90 00140ED0  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 80143F94 00140ED4  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 80143F98 00140ED8  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 80143F9C 00140EDC  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 80143FA0 00140EE0  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 80143FA4 00140EE4  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 80143FA8 00140EE8  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 80143FAC 00140EEC  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 80143FB0 00140EF0  E3 41 00 A8 */	psq_l f26, 168(r1), 0, qr0
/* 80143FB4 00140EF4  CB 41 00 A0 */	lfd f26, 0xa0(r1)
/* 80143FB8 00140EF8  E3 21 00 98 */	psq_l f25, 152(r1), 0, qr0
/* 80143FBC 00140EFC  CB 21 00 90 */	lfd f25, 0x90(r1)
/* 80143FC0 00140F00  E3 01 00 88 */	psq_l f24, 136(r1), 0, qr0
/* 80143FC4 00140F04  CB 01 00 80 */	lfd f24, 0x80(r1)
/* 80143FC8 00140F08  E2 E1 00 78 */	psq_l f23, 120(r1), 0, qr0
/* 80143FCC 00140F0C  CA E1 00 70 */	lfd f23, 0x70(r1)
/* 80143FD0 00140F10  E2 C1 00 68 */	psq_l f22, 104(r1), 0, qr0
/* 80143FD4 00140F14  CA C1 00 60 */	lfd f22, 0x60(r1)
/* 80143FD8 00140F18  E2 A1 00 58 */	psq_l f21, 88(r1), 0, qr0
/* 80143FDC 00140F1C  CA A1 00 50 */	lfd f21, 0x50(r1)
/* 80143FE0 00140F20  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80143FE4 00140F24  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80143FE8 00140F28  7C 08 03 A6 */	mtlr r0
/* 80143FEC 00140F2C  38 21 01 00 */	addi r1, r1, 0x100
/* 80143FF0 00140F30  4E 80 00 20 */	blr 
.endfn makeVelocity__Q24Game4NaviFv

.fn "reviseController__Q24Game4NaviFR10Vector3<f>", global
/* 80143FF4 00140F34  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80143FF8 00140F38  7C 08 02 A6 */	mflr r0
/* 80143FFC 00140F3C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80144000 00140F40  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80144004 00140F44  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80144008 00140F48  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8014400C 00140F4C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80144010 00140F50  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80144014 00140F54  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 80144018 00140F58  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 8014401C 00140F5C  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 80144020 00140F60  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80144024 00140F64  7C 9F 23 78 */	mr r31, r4
/* 80144028 00140F68  C0 24 00 00 */	lfs f1, 0(r4)
/* 8014402C 00140F6C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80144030 00140F70  EC 21 00 72 */	fmuls f1, f1, f1
/* 80144034 00140F74  C0 44 00 08 */	lfs f2, 8(r4)
/* 80144038 00140F78  EC 00 00 32 */	fmuls f0, f0, f0
/* 8014403C 00140F7C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80144040 00140F80  EC 01 00 2A */	fadds f0, f1, f0
/* 80144044 00140F84  EC 22 00 2A */	fadds f1, f2, f0
/* 80144048 00140F88  48 2C D7 BD */	bl pikmin2_sqrtf__Ff
/* 8014404C 00140F8C  FF E0 08 90 */	fmr f31, f1
/* 80144050 00140F90  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80144054 00140F94  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80144058 00140F98  48 2C D7 85 */	bl pikmin2_atan2f__Fff
/* 8014405C 00140F9C  48 2C DB 75 */	bl roundAng__Ff
/* 80144060 00140FA0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80144064 00140FA4  3C 00 43 30 */	lis r0, 0x4330
/* 80144068 00140FA8  C0 62 A0 64 */	lfs f3, lbl_805183C4@sda21(r2)
/* 8014406C 00140FAC  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80144070 00140FB0  C0 A2 A0 60 */	lfs f5, lbl_805183C0@sda21(r2)
/* 80144074 00140FB4  C0 43 08 40 */	lfs f2, 0x840(r3)
/* 80144078 00140FB8  C0 02 9F E8 */	lfs f0, lbl_80518348@sda21(r2)
/* 8014407C 00140FBC  EC 83 00 B2 */	fmuls f4, f3, f2
/* 80144080 00140FC0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80144084 00140FC4  C8 62 A0 70 */	lfd f3, lbl_805183D0@sda21(r2)
/* 80144088 00140FC8  C0 42 A0 68 */	lfs f2, lbl_805183C8@sda21(r2)
/* 8014408C 00140FCC  EC 85 01 32 */	fmuls f4, f5, f4
/* 80144090 00140FD0  90 01 00 20 */	stw r0, 0x20(r1)
/* 80144094 00140FD4  EC 00 09 3A */	fmadds f0, f0, f4, f1
/* 80144098 00140FD8  EC 00 20 24 */	fdivs f0, f0, f4
/* 8014409C 00140FDC  FC 00 00 1E */	fctiwz f0, f0
/* 801440A0 00140FE0  D8 01 00 08 */	stfd f0, 8(r1)
/* 801440A4 00140FE4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801440A8 00140FE8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801440AC 00140FEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801440B0 00140FF0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801440B4 00140FF4  EC 00 18 28 */	fsubs f0, f0, f3
/* 801440B8 00140FF8  EF A4 00 32 */	fmuls f29, f4, f0
/* 801440BC 00140FFC  EC 1D 10 24 */	fdivs f0, f29, f2
/* 801440C0 00141000  FC 00 00 1E */	fctiwz f0, f0
/* 801440C4 00141004  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801440C8 00141008  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801440CC 0014100C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801440D0 00141010  90 01 00 24 */	stw r0, 0x24(r1)
/* 801440D4 00141014  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 801440D8 00141018  EC 00 18 28 */	fsubs f0, f0, f3
/* 801440DC 0014101C  EF 82 E8 3C */	fnmsubs f28, f2, f0, f29
/* 801440E0 00141020  EC 22 E0 28 */	fsubs f1, f2, f28
/* 801440E4 00141024  48 2C D6 4D */	bl pikmin2_sinf__Ff
/* 801440E8 00141028  FF C0 08 90 */	fmr f30, f1
/* 801440EC 0014102C  FC 20 E0 90 */	fmr f1, f28
/* 801440F0 00141030  48 2C D6 41 */	bl pikmin2_sinf__Ff
/* 801440F4 00141034  EF C1 F0 2A */	fadds f30, f1, f30
/* 801440F8 00141038  C0 22 A0 68 */	lfs f1, lbl_805183C8@sda21(r2)
/* 801440FC 0014103C  48 2C D6 35 */	bl pikmin2_sinf__Ff
/* 80144100 00141040  EC 21 F0 24 */	fdivs f1, f1, f30
/* 80144104 00141044  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
/* 80144108 00141048  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014410C 0014104C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80144110 00141050  C0 03 09 30 */	lfs f0, 0x930(r3)
/* 80144114 00141054  EC 22 08 24 */	fdivs f1, f2, f1
/* 80144118 00141058  EF FF 00 72 */	fmuls f31, f31, f1
/* 8014411C 0014105C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80144120 00141060  4C 41 13 82 */	cror 2, 1, 2
/* 80144124 00141064  40 82 00 08 */	bne .L_8014412C
/* 80144128 00141068  FF E0 10 90 */	fmr f31, f2
.L_8014412C:
/* 8014412C 0014106C  C0 03 08 E0 */	lfs f0, 0x8e0(r3)
/* 80144130 00141070  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80144134 00141074  40 80 00 08 */	bge .L_8014413C
/* 80144138 00141078  C3 E2 9F F4 */	lfs f31, lbl_80518354@sda21(r2)
.L_8014413C:
/* 8014413C 0014107C  FC 20 E8 90 */	fmr f1, f29
/* 80144140 00141080  48 2C D6 59 */	bl pikmin2_cosf__Ff
/* 80144144 00141084  EF DF 00 72 */	fmuls f30, f31, f1
/* 80144148 00141088  FC 20 E8 90 */	fmr f1, f29
/* 8014414C 0014108C  48 2C D5 E5 */	bl pikmin2_sinf__Ff
/* 80144150 00141090  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80144154 00141094  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80144158 00141098  D0 3F 00 00 */	stfs f1, 0(r31)
/* 8014415C 0014109C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80144160 001410A0  D3 DF 00 08 */	stfs f30, 8(r31)
/* 80144164 001410A4  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80144168 001410A8  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8014416C 001410AC  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80144170 001410B0  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80144174 001410B4  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80144178 001410B8  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8014417C 001410BC  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 80144180 001410C0  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 80144184 001410C4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80144188 001410C8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014418C 001410CC  7C 08 03 A6 */	mtlr r0
/* 80144190 001410D0  38 21 00 70 */	addi r1, r1, 0x70
/* 80144194 001410D4  4E 80 00 20 */	blr 
.endfn "reviseController__Q24Game4NaviFR10Vector3<f>"

.fn callPikis__Q24Game4NaviFv, global
/* 80144198 001410D8  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8014419C 001410DC  7C 08 02 A6 */	mflr r0
/* 801441A0 001410E0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 801441A4 001410E4  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 801441A8 001410E8  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 801441AC 001410EC  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 801441B0 001410F0  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 801441B4 001410F4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 801441B8 001410F8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 801441BC 001410FC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 801441C0 00141100  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 801441C4 00141104  38 00 00 00 */	li r0, 0
/* 801441C8 00141108  7C 7F 1B 78 */	mr r31, r3
/* 801441CC 0014110C  90 0D 92 98 */	stw r0, numSearch@sda21(r13)
/* 801441D0 00141110  3C 60 80 48 */	lis r3, lbl_8047C788@ha
/* 801441D4 00141114  3B C3 C7 88 */	addi r30, r3, lbl_8047C788@l
/* 801441D8 00141118  38 61 00 2C */	addi r3, r1, 0x2c
/* 801441DC 0014111C  80 BF 02 8C */	lwz r5, 0x28c(r31)
/* 801441E0 00141120  38 81 00 1C */	addi r4, r1, 0x1c
/* 801441E4 00141124  C0 45 00 10 */	lfs f2, 0x10(r5)
/* 801441E8 00141128  C0 65 00 14 */	lfs f3, 0x14(r5)
/* 801441EC 0014112C  C0 25 00 24 */	lfs f1, 0x24(r5)
/* 801441F0 00141130  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 801441F4 00141134  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801441F8 00141138  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801441FC 0014113C  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80144200 00141140  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80144204 00141144  48 0E A1 9D */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80144208 00141148  38 61 00 4C */	addi r3, r1, 0x4c
/* 8014420C 0014114C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80144210 00141150  48 0E A1 D1 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80144214 00141154  C3 C2 9F F4 */	lfs f30, lbl_80518354@sda21(r2)
/* 80144218 00141158  38 61 00 4C */	addi r3, r1, 0x4c
/* 8014421C 0014115C  3B A0 00 00 */	li r29, 0
/* 80144220 00141160  48 0E A2 3D */	bl first__Q24Game12CellIteratorFv
/* 80144224 00141164  C3 E2 A0 18 */	lfs f31, lbl_80518378@sda21(r2)
/* 80144228 00141168  48 00 01 04 */	b .L_8014432C
.L_8014422C:
/* 8014422C 0014116C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80144230 00141170  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80144234 00141174  EF DE 00 2A */	fadds f30, f30, f0
/* 80144238 00141178  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 8014423C 0014117C  40 81 00 3C */	ble .L_80144278
/* 80144240 00141180  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80144244 00141184  38 7E 00 0C */	addi r3, r30, 0xc
/* 80144248 00141188  38 BE 00 78 */	addi r5, r30, 0x78
/* 8014424C 0014118C  38 80 0C 54 */	li r4, 0xc54
/* 80144250 00141190  90 01 00 08 */	stw r0, 8(r1)
/* 80144254 00141194  80 01 00 68 */	lwz r0, 0x68(r1)
/* 80144258 00141198  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014425C 0014119C  80 C1 00 50 */	lwz r6, 0x50(r1)
/* 80144260 001411A0  80 E1 00 54 */	lwz r7, 0x54(r1)
/* 80144264 001411A4  81 01 00 58 */	lwz r8, 0x58(r1)
/* 80144268 001411A8  81 21 00 5C */	lwz r9, 0x5c(r1)
/* 8014426C 001411AC  81 41 00 60 */	lwz r10, 0x60(r1)
/* 80144270 001411B0  4C C6 31 82 */	crclr 6
/* 80144274 001411B4  4B EE 63 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80144278:
/* 80144278 001411B8  38 61 00 4C */	addi r3, r1, 0x4c
/* 8014427C 001411BC  48 0E A2 C9 */	bl __ml__Q24Game12CellIteratorFv
/* 80144280 001411C0  28 1D 00 00 */	cmplwi r29, 0
/* 80144284 001411C4  7C 7C 1B 78 */	mr r28, r3
/* 80144288 001411C8  41 82 00 44 */	beq .L_801442CC
/* 8014428C 001411CC  7C 1D E0 40 */	cmplw r29, r28
/* 80144290 001411D0  40 82 00 3C */	bne .L_801442CC
/* 80144294 001411D4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80144298 001411D8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8014429C 001411DC  38 BE 00 98 */	addi r5, r30, 0x98
/* 801442A0 001411E0  38 80 0C 61 */	li r4, 0xc61
/* 801442A4 001411E4  90 01 00 08 */	stw r0, 8(r1)
/* 801442A8 001411E8  80 01 00 68 */	lwz r0, 0x68(r1)
/* 801442AC 001411EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801442B0 001411F0  80 C1 00 50 */	lwz r6, 0x50(r1)
/* 801442B4 001411F4  80 E1 00 54 */	lwz r7, 0x54(r1)
/* 801442B8 001411F8  81 01 00 58 */	lwz r8, 0x58(r1)
/* 801442BC 001411FC  81 21 00 5C */	lwz r9, 0x5c(r1)
/* 801442C0 00141200  81 41 00 60 */	lwz r10, 0x60(r1)
/* 801442C4 00141204  4C C6 31 82 */	crclr 6
/* 801442C8 00141208  4B EE 63 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801442CC:
/* 801442CC 0014120C  28 1C 00 00 */	cmplwi r28, 0
/* 801442D0 00141210  7F 9D E3 78 */	mr r29, r28
/* 801442D4 00141214  41 82 00 50 */	beq .L_80144324
/* 801442D8 00141218  7C 1C F8 40 */	cmplw r28, r31
/* 801442DC 0014121C  41 82 00 48 */	beq .L_80144324
/* 801442E0 00141220  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801442E4 00141224  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractFue@ha
/* 801442E8 00141228  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 801442EC 0014122C  38 A0 00 00 */	li r5, 0
/* 801442F0 00141230  90 01 00 10 */	stw r0, 0x10(r1)
/* 801442F4 00141234  38 C3 49 BC */	addi r6, r3, __vt__Q24Game11InteractFue@l
/* 801442F8 00141238  38 00 00 01 */	li r0, 1
/* 801442FC 0014123C  7F 83 E3 78 */	mr r3, r28
/* 80144300 00141240  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80144304 00141244  38 81 00 10 */	addi r4, r1, 0x10
/* 80144308 00141248  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8014430C 0014124C  98 A1 00 18 */	stb r5, 0x18(r1)
/* 80144310 00141250  98 01 00 19 */	stb r0, 0x19(r1)
/* 80144314 00141254  81 9C 00 00 */	lwz r12, 0(r28)
/* 80144318 00141258  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8014431C 0014125C  7D 89 03 A6 */	mtctr r12
/* 80144320 00141260  4E 80 04 21 */	bctrl 
.L_80144324:
/* 80144324 00141264  38 61 00 4C */	addi r3, r1, 0x4c
/* 80144328 00141268  48 0E A1 D9 */	bl next__Q24Game12CellIteratorFv
.L_8014432C:
/* 8014432C 0014126C  38 61 00 4C */	addi r3, r1, 0x4c
/* 80144330 00141270  48 0E A2 05 */	bl isDone__Q24Game12CellIteratorFv
/* 80144334 00141274  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144338 00141278  41 82 FE F4 */	beq .L_8014422C
/* 8014433C 0014127C  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 80144340 00141280  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80144344 00141284  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 80144348 00141288  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8014434C 0014128C  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80144350 00141290  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80144354 00141294  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80144358 00141298  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8014435C 0014129C  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 80144360 001412A0  7C 08 03 A6 */	mtlr r0
/* 80144364 001412A4  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80144368 001412A8  4E 80 00 20 */	blr 
.endfn callPikis__Q24Game4NaviFv

.fn invincible__Q24Game4NaviFv, global
/* 8014436C 001412AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144370 001412B0  7C 08 02 A6 */	mflr r0
/* 80144374 001412B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144378 001412B8  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8014437C 001412BC  28 04 00 00 */	cmplwi r4, 0
/* 80144380 001412C0  41 82 00 18 */	beq .L_80144398
/* 80144384 001412C4  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80144388 001412C8  2C 00 00 00 */	cmpwi r0, 0
/* 8014438C 001412CC  41 82 00 0C */	beq .L_80144398
/* 80144390 001412D0  38 60 00 01 */	li r3, 1
/* 80144394 001412D4  48 00 00 54 */	b .L_801443E8
.L_80144398:
/* 80144398 001412D8  88 03 02 A4 */	lbz r0, 0x2a4(r3)
/* 8014439C 001412DC  28 00 00 00 */	cmplwi r0, 0
/* 801443A0 001412E0  41 82 00 0C */	beq .L_801443AC
/* 801443A4 001412E4  38 60 00 01 */	li r3, 1
/* 801443A8 001412E8  48 00 00 40 */	b .L_801443E8
.L_801443AC:
/* 801443AC 001412EC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801443B0 001412F0  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 801443B4 001412F4  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801443B8 001412F8  40 82 00 0C */	bne .L_801443C4
/* 801443BC 001412FC  38 60 00 01 */	li r3, 1
/* 801443C0 00141300  48 00 00 28 */	b .L_801443E8
.L_801443C4:
/* 801443C4 00141304  80 63 02 74 */	lwz r3, 0x274(r3)
/* 801443C8 00141308  28 03 00 00 */	cmplwi r3, 0
/* 801443CC 0014130C  41 82 00 18 */	beq .L_801443E4
/* 801443D0 00141310  81 83 00 00 */	lwz r12, 0(r3)
/* 801443D4 00141314  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801443D8 00141318  7D 89 03 A6 */	mtctr r12
/* 801443DC 0014131C  4E 80 04 21 */	bctrl 
/* 801443E0 00141320  48 00 00 08 */	b .L_801443E8
.L_801443E4:
/* 801443E4 00141324  38 60 00 01 */	li r3, 1
.L_801443E8:
/* 801443E8 00141328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801443EC 0014132C  7C 08 03 A6 */	mtlr r0
/* 801443F0 00141330  38 21 00 10 */	addi r1, r1, 0x10
/* 801443F4 00141334  4E 80 00 20 */	blr 
.endfn invincible__Q24Game4NaviFv

.fn invincible__Q24Game9NaviStateFv, weak
/* 801443F8 00141338  38 60 00 00 */	li r3, 0
/* 801443FC 0014133C  4E 80 00 20 */	blr 
.endfn invincible__Q24Game9NaviStateFv

.fn setInvincibleTimer__Q24Game4NaviFUc, global
/* 80144400 00141340  98 83 02 A4 */	stb r4, 0x2a4(r3)
/* 80144404 00141344  4E 80 00 20 */	blr 
.endfn setInvincibleTimer__Q24Game4NaviFUc

.fn startDamage__Q24Game4NaviFf, global
/* 80144408 00141348  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014440C 0014134C  7C 08 02 A6 */	mflr r0
/* 80144410 00141350  90 01 00 34 */	stw r0, 0x34(r1)
/* 80144414 00141354  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80144418 00141358  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8014441C 0014135C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80144420 00141360  81 83 00 00 */	lwz r12, 0(r3)
/* 80144424 00141364  FF E0 08 90 */	fmr f31, f1
/* 80144428 00141368  7C 7F 1B 78 */	mr r31, r3
/* 8014442C 0014136C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80144430 00141370  7D 89 03 A6 */	mtctr r12
/* 80144434 00141374  4E 80 04 21 */	bctrl 
/* 80144438 00141378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014443C 0014137C  41 82 01 B8 */	beq .L_801445F4
/* 80144440 00141380  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80144444 00141384  28 03 00 00 */	cmplwi r3, 0
/* 80144448 00141388  41 82 00 18 */	beq .L_80144460
/* 8014444C 0014138C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80144450 00141390  2C 00 00 00 */	cmpwi r0, 0
/* 80144454 00141394  41 82 00 0C */	beq .L_80144460
/* 80144458 00141398  38 60 00 01 */	li r3, 1
/* 8014445C 0014139C  48 00 00 54 */	b .L_801444B0
.L_80144460:
/* 80144460 001413A0  88 1F 02 A4 */	lbz r0, 0x2a4(r31)
/* 80144464 001413A4  28 00 00 00 */	cmplwi r0, 0
/* 80144468 001413A8  41 82 00 0C */	beq .L_80144474
/* 8014446C 001413AC  38 60 00 01 */	li r3, 1
/* 80144470 001413B0  48 00 00 40 */	b .L_801444B0
.L_80144474:
/* 80144474 001413B4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80144478 001413B8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014447C 001413BC  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80144480 001413C0  40 82 00 0C */	bne .L_8014448C
/* 80144484 001413C4  38 60 00 01 */	li r3, 1
/* 80144488 001413C8  48 00 00 28 */	b .L_801444B0
.L_8014448C:
/* 8014448C 001413CC  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 80144490 001413D0  28 03 00 00 */	cmplwi r3, 0
/* 80144494 001413D4  41 82 00 18 */	beq .L_801444AC
/* 80144498 001413D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014449C 001413DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801444A0 001413E0  7D 89 03 A6 */	mtctr r12
/* 801444A4 001413E4  4E 80 04 21 */	bctrl 
/* 801444A8 001413E8  48 00 00 08 */	b .L_801444B0
.L_801444AC:
/* 801444AC 001413EC  38 60 00 01 */	li r3, 1
.L_801444B0:
/* 801444B0 001413F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801444B4 001413F4  41 82 00 08 */	beq .L_801444BC
/* 801444B8 001413F8  48 00 01 3C */	b .L_801445F4
.L_801444BC:
/* 801444BC 001413FC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801444C0 00141400  38 80 00 05 */	li r4, 5
/* 801444C4 00141404  38 63 00 48 */	addi r3, r3, 0x48
/* 801444C8 00141408  48 0A 1B 09 */	bl hasItem__Q24Game10OlimarDataFi
/* 801444CC 0014140C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801444D0 00141410  41 82 00 14 */	beq .L_801444E4
/* 801444D4 00141414  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801444D8 00141418  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 801444DC 0014141C  C0 03 0C 00 */	lfs f0, 0xc00(r3)
/* 801444E0 00141420  EF FF 00 32 */	fmuls f31, f31, f0
.L_801444E4:
/* 801444E4 00141424  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 801444E8 00141428  28 03 00 00 */	cmplwi r3, 0
/* 801444EC 0014142C  41 82 00 0C */	beq .L_801444F8
/* 801444F0 00141430  80 03 00 04 */	lwz r0, 4(r3)
/* 801444F4 00141434  48 00 00 08 */	b .L_801444FC
.L_801444F8:
/* 801444F8 00141438  38 00 FF FF */	li r0, -1
.L_801444FC:
/* 801444FC 0014143C  2C 00 00 0D */	cmpwi r0, 0xd
/* 80144500 00141440  41 82 00 F4 */	beq .L_801445F4
/* 80144504 00141444  3C 60 80 4B */	lis r3, __vt__Q24Game13NaviDamageArg@ha
/* 80144508 00141448  D3 E1 00 08 */	stfs f31, 8(r1)
/* 8014450C 0014144C  38 03 05 3C */	addi r0, r3, __vt__Q24Game13NaviDamageArg@l
/* 80144510 00141450  7F E4 FB 78 */	mr r4, r31
/* 80144514 00141454  90 01 00 0C */	stw r0, 0xc(r1)
/* 80144518 00141458  38 C1 00 08 */	addi r6, r1, 8
/* 8014451C 0014145C  38 A0 00 0D */	li r5, 0xd
/* 80144520 00141460  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 80144524 00141464  81 83 00 00 */	lwz r12, 0(r3)
/* 80144528 00141468  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014452C 0014146C  7D 89 03 A6 */	mtctr r12
/* 80144530 00141470  4E 80 04 21 */	bctrl 
/* 80144534 00141474  C0 1F 02 A0 */	lfs f0, 0x2a0(r31)
/* 80144538 00141478  38 80 08 0F */	li r4, 0x80f
/* 8014453C 0014147C  38 A0 00 00 */	li r5, 0
/* 80144540 00141480  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80144544 00141484  D0 1F 02 A0 */	stfs f0, 0x2a0(r31)
/* 80144548 00141488  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8014454C 0014148C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80144550 00141490  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80144554 00141494  7D 89 03 A6 */	mtctr r12
/* 80144558 00141498  4E 80 04 21 */	bctrl 
/* 8014455C 0014149C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80144560 001414A0  38 80 00 1D */	li r4, 0x1d
/* 80144564 001414A4  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 80144568 001414A8  48 10 DE 29 */	bl startVibration__Q24Game9CameraMgrFii
/* 8014456C 001414AC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80144570 001414B0  38 80 00 01 */	li r4, 1
/* 80144574 001414B4  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 80144578 001414B8  48 10 F3 AD */	bl startRumble__Q24Game9RumbleMgrFii
/* 8014457C 001414BC  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80144580 001414C0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80144584 001414C4  48 27 40 B5 */	bl createOrimadamage___Q23efx11TNaviEffectFPA4_f
/* 80144588 001414C8  48 31 48 F9 */	bl PSMGetDamageD__Fv
/* 8014458C 001414CC  28 03 00 00 */	cmplwi r3, 0
/* 80144590 001414D0  41 82 00 14 */	beq .L_801445A4
/* 80144594 001414D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144598 001414D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014459C 001414DC  7D 89 03 A6 */	mtctr r12
/* 801445A0 001414E0  4E 80 04 21 */	bctrl 
.L_801445A4:
/* 801445A4 001414E4  C0 3F 02 A0 */	lfs f1, 0x2a0(r31)
/* 801445A8 001414E8  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 801445AC 001414EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801445B0 001414F0  40 80 00 44 */	bge .L_801445F4
/* 801445B4 001414F4  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 801445B8 001414F8  28 03 00 00 */	cmplwi r3, 0
/* 801445BC 001414FC  41 82 00 0C */	beq .L_801445C8
/* 801445C0 00141500  80 03 00 04 */	lwz r0, 4(r3)
/* 801445C4 00141504  48 00 00 08 */	b .L_801445CC
.L_801445C8:
/* 801445C8 00141508  38 00 FF FF */	li r0, -1
.L_801445CC:
/* 801445CC 0014150C  2C 00 00 13 */	cmpwi r0, 0x13
/* 801445D0 00141510  41 82 00 24 */	beq .L_801445F4
/* 801445D4 00141514  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 801445D8 00141518  7F E4 FB 78 */	mr r4, r31
/* 801445DC 0014151C  38 A0 00 13 */	li r5, 0x13
/* 801445E0 00141520  38 C0 00 00 */	li r6, 0
/* 801445E4 00141524  81 83 00 00 */	lwz r12, 0(r3)
/* 801445E8 00141528  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801445EC 0014152C  7D 89 03 A6 */	mtctr r12
/* 801445F0 00141530  4E 80 04 21 */	bctrl 
.L_801445F4:
/* 801445F4 00141534  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801445F8 00141538  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801445FC 0014153C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80144600 00141540  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80144604 00141544  7C 08 03 A6 */	mtlr r0
/* 80144608 00141548  38 21 00 30 */	addi r1, r1, 0x30
/* 8014460C 0014154C  4E 80 00 20 */	blr 
.endfn startDamage__Q24Game4NaviFf

.fn addDamage__Q24Game4NaviFfb, global
/* 80144610 00141550  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80144614 00141554  7C 08 02 A6 */	mflr r0
/* 80144618 00141558  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014461C 0014155C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80144620 00141560  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80144624 00141564  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80144628 00141568  93 C1 00 08 */	stw r30, 8(r1)
/* 8014462C 0014156C  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80144630 00141570  FF E0 08 90 */	fmr f31, f1
/* 80144634 00141574  7C 7E 1B 78 */	mr r30, r3
/* 80144638 00141578  7C 9F 23 78 */	mr r31, r4
/* 8014463C 0014157C  28 05 00 00 */	cmplwi r5, 0
/* 80144640 00141580  41 82 00 10 */	beq .L_80144650
/* 80144644 00141584  80 05 00 18 */	lwz r0, 0x18(r5)
/* 80144648 00141588  2C 00 00 00 */	cmpwi r0, 0
/* 8014464C 0014158C  40 82 01 B8 */	bne .L_80144804
.L_80144650:
/* 80144650 00141590  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80144654 00141594  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80144658 00141598  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8014465C 0014159C  41 82 01 A8 */	beq .L_80144804
/* 80144660 001415A0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80144664 001415A4  38 80 00 05 */	li r4, 5
/* 80144668 001415A8  38 63 00 48 */	addi r3, r3, 0x48
/* 8014466C 001415AC  48 0A 19 65 */	bl hasItem__Q24Game10OlimarDataFi
/* 80144670 001415B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144674 001415B4  41 82 00 14 */	beq .L_80144688
/* 80144678 001415B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014467C 001415BC  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80144680 001415C0  C0 03 0C 00 */	lfs f0, 0xc00(r3)
/* 80144684 001415C4  EF FF 00 32 */	fmuls f31, f31, f0
.L_80144688:
/* 80144688 001415C8  7F C3 F3 78 */	mr r3, r30
/* 8014468C 001415CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80144690 001415D0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80144694 001415D4  7D 89 03 A6 */	mtctr r12
/* 80144698 001415D8  4E 80 04 21 */	bctrl 
/* 8014469C 001415DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801446A0 001415E0  41 82 01 64 */	beq .L_80144804
/* 801446A4 001415E4  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 801446A8 001415E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801446AC 001415EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801446B0 001415F0  7D 89 03 A6 */	mtctr r12
/* 801446B4 001415F4  4E 80 04 21 */	bctrl 
/* 801446B8 001415F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801446BC 001415FC  41 82 00 08 */	beq .L_801446C4
/* 801446C0 00141600  48 00 01 44 */	b .L_80144804
.L_801446C4:
/* 801446C4 00141604  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801446C8 00141608  28 03 00 00 */	cmplwi r3, 0
/* 801446CC 0014160C  41 82 00 18 */	beq .L_801446E4
/* 801446D0 00141610  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801446D4 00141614  2C 00 00 00 */	cmpwi r0, 0
/* 801446D8 00141618  41 82 00 0C */	beq .L_801446E4
/* 801446DC 0014161C  38 60 00 01 */	li r3, 1
/* 801446E0 00141620  48 00 00 54 */	b .L_80144734
.L_801446E4:
/* 801446E4 00141624  88 1E 02 A4 */	lbz r0, 0x2a4(r30)
/* 801446E8 00141628  28 00 00 00 */	cmplwi r0, 0
/* 801446EC 0014162C  41 82 00 0C */	beq .L_801446F8
/* 801446F0 00141630  38 60 00 01 */	li r3, 1
/* 801446F4 00141634  48 00 00 40 */	b .L_80144734
.L_801446F8:
/* 801446F8 00141638  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801446FC 0014163C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80144700 00141640  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80144704 00141644  40 82 00 0C */	bne .L_80144710
/* 80144708 00141648  38 60 00 01 */	li r3, 1
/* 8014470C 0014164C  48 00 00 28 */	b .L_80144734
.L_80144710:
/* 80144710 00141650  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 80144714 00141654  28 03 00 00 */	cmplwi r3, 0
/* 80144718 00141658  41 82 00 18 */	beq .L_80144730
/* 8014471C 0014165C  81 83 00 00 */	lwz r12, 0(r3)
/* 80144720 00141660  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80144724 00141664  7D 89 03 A6 */	mtctr r12
/* 80144728 00141668  4E 80 04 21 */	bctrl 
/* 8014472C 0014166C  48 00 00 08 */	b .L_80144734
.L_80144730:
/* 80144730 00141670  38 60 00 01 */	li r3, 1
.L_80144734:
/* 80144734 00141674  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144738 00141678  40 82 00 CC */	bne .L_80144804
/* 8014473C 0014167C  C0 1E 02 A0 */	lfs f0, 0x2a0(r30)
/* 80144740 00141680  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80144744 00141684  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80144748 00141688  D0 1E 02 A0 */	stfs f0, 0x2a0(r30)
/* 8014474C 0014168C  41 82 00 68 */	beq .L_801447B4
/* 80144750 00141690  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 80144754 00141694  38 80 08 0F */	li r4, 0x80f
/* 80144758 00141698  38 A0 00 00 */	li r5, 0
/* 8014475C 0014169C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80144760 001416A0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80144764 001416A4  7D 89 03 A6 */	mtctr r12
/* 80144768 001416A8  4E 80 04 21 */	bctrl 
/* 8014476C 001416AC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80144770 001416B0  38 80 00 1D */	li r4, 0x1d
/* 80144774 001416B4  A0 BE 02 DC */	lhz r5, 0x2dc(r30)
/* 80144778 001416B8  48 10 DC 19 */	bl startVibration__Q24Game9CameraMgrFii
/* 8014477C 001416BC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80144780 001416C0  38 80 00 01 */	li r4, 1
/* 80144784 001416C4  A0 BE 02 DC */	lhz r5, 0x2dc(r30)
/* 80144788 001416C8  48 10 F1 9D */	bl startRumble__Q24Game9RumbleMgrFii
/* 8014478C 001416CC  80 7E 02 D0 */	lwz r3, 0x2d0(r30)
/* 80144790 001416D0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80144794 001416D4  48 27 3E A5 */	bl createOrimadamage___Q23efx11TNaviEffectFPA4_f
/* 80144798 001416D8  48 31 46 E9 */	bl PSMGetDamageD__Fv
/* 8014479C 001416DC  28 03 00 00 */	cmplwi r3, 0
/* 801447A0 001416E0  41 82 00 14 */	beq .L_801447B4
/* 801447A4 001416E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801447A8 001416E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801447AC 001416EC  7D 89 03 A6 */	mtctr r12
/* 801447B0 001416F0  4E 80 04 21 */	bctrl 
.L_801447B4:
/* 801447B4 001416F4  C0 3E 02 A0 */	lfs f1, 0x2a0(r30)
/* 801447B8 001416F8  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 801447BC 001416FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801447C0 00141700  40 80 00 44 */	bge .L_80144804
/* 801447C4 00141704  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 801447C8 00141708  28 03 00 00 */	cmplwi r3, 0
/* 801447CC 0014170C  41 82 00 0C */	beq .L_801447D8
/* 801447D0 00141710  80 03 00 04 */	lwz r0, 4(r3)
/* 801447D4 00141714  48 00 00 08 */	b .L_801447DC
.L_801447D8:
/* 801447D8 00141718  38 00 FF FF */	li r0, -1
.L_801447DC:
/* 801447DC 0014171C  2C 00 00 13 */	cmpwi r0, 0x13
/* 801447E0 00141720  41 82 00 24 */	beq .L_80144804
/* 801447E4 00141724  80 7E 02 70 */	lwz r3, 0x270(r30)
/* 801447E8 00141728  7F C4 F3 78 */	mr r4, r30
/* 801447EC 0014172C  38 A0 00 13 */	li r5, 0x13
/* 801447F0 00141730  38 C0 00 00 */	li r6, 0
/* 801447F4 00141734  81 83 00 00 */	lwz r12, 0(r3)
/* 801447F8 00141738  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801447FC 0014173C  7D 89 03 A6 */	mtctr r12
/* 80144800 00141740  4E 80 04 21 */	bctrl 
.L_80144804:
/* 80144804 00141744  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80144808 00141748  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014480C 0014174C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80144810 00141750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80144814 00141754  83 C1 00 08 */	lwz r30, 8(r1)
/* 80144818 00141758  7C 08 03 A6 */	mtlr r0
/* 8014481C 0014175C  38 21 00 20 */	addi r1, r1, 0x20
/* 80144820 00141760  4E 80 00 20 */	blr 
.endfn addDamage__Q24Game4NaviFfb

.fn enterAllPikis__Q24Game4NaviFv, global
/* 80144824 00141764  94 21 FE 40 */	stwu r1, -0x1c0(r1)
/* 80144828 00141768  7C 08 02 A6 */	mflr r0
/* 8014482C 0014176C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80144830 00141770  90 01 01 C4 */	stw r0, 0x1c4(r1)
/* 80144834 00141774  38 04 BC 9C */	addi r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80144838 00141778  93 E1 01 BC */	stw r31, 0x1bc(r1)
/* 8014483C 0014177C  3B E0 00 00 */	li r31, 0
/* 80144840 00141780  93 C1 01 B8 */	stw r30, 0x1b8(r1)
/* 80144844 00141784  93 A1 01 B4 */	stw r29, 0x1b4(r1)
/* 80144848 00141788  3B A0 00 00 */	li r29, 0
/* 8014484C 0014178C  28 1D 00 00 */	cmplwi r29, 0
/* 80144850 00141790  93 81 01 B0 */	stw r28, 0x1b0(r1)
/* 80144854 00141794  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80144858 00141798  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 8014485C 0014179C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80144860 001417A0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80144864 001417A4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144868 001417A8  40 82 00 1C */	bne .L_80144884
/* 8014486C 001417AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80144870 001417B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80144874 001417B4  7D 89 03 A6 */	mtctr r12
/* 80144878 001417B8  4E 80 04 21 */	bctrl 
/* 8014487C 001417BC  90 61 00 14 */	stw r3, 0x14(r1)
/* 80144880 001417C0  48 00 01 8C */	b .L_80144A0C
.L_80144884:
/* 80144884 001417C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144888 001417C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014488C 001417CC  7D 89 03 A6 */	mtctr r12
/* 80144890 001417D0  4E 80 04 21 */	bctrl 
/* 80144894 001417D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80144898 001417D8  48 00 00 58 */	b .L_801448F0
.L_8014489C:
/* 8014489C 001417DC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801448A0 001417E0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801448A4 001417E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801448A8 001417E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801448AC 001417EC  7D 89 03 A6 */	mtctr r12
/* 801448B0 001417F0  4E 80 04 21 */	bctrl 
/* 801448B4 001417F4  7C 64 1B 78 */	mr r4, r3
/* 801448B8 001417F8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801448BC 001417FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801448C0 00141800  81 8C 00 08 */	lwz r12, 8(r12)
/* 801448C4 00141804  7D 89 03 A6 */	mtctr r12
/* 801448C8 00141808  4E 80 04 21 */	bctrl 
/* 801448CC 0014180C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801448D0 00141810  40 82 01 3C */	bne .L_80144A0C
/* 801448D4 00141814  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801448D8 00141818  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801448DC 0014181C  81 83 00 00 */	lwz r12, 0(r3)
/* 801448E0 00141820  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801448E4 00141824  7D 89 03 A6 */	mtctr r12
/* 801448E8 00141828  4E 80 04 21 */	bctrl 
/* 801448EC 0014182C  90 61 00 14 */	stw r3, 0x14(r1)
.L_801448F0:
/* 801448F0 00141830  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801448F4 00141834  38 61 00 10 */	addi r3, r1, 0x10
/* 801448F8 00141838  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801448FC 0014183C  7D 89 03 A6 */	mtctr r12
/* 80144900 00141840  4E 80 04 21 */	bctrl 
/* 80144904 00141844  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144908 00141848  41 82 FF 94 */	beq .L_8014489C
/* 8014490C 0014184C  48 00 01 00 */	b .L_80144A0C
.L_80144910:
/* 80144910 00141850  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80144914 00141854  81 83 00 00 */	lwz r12, 0(r3)
/* 80144918 00141858  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014491C 0014185C  7D 89 03 A6 */	mtctr r12
/* 80144920 00141860  4E 80 04 21 */	bctrl 
/* 80144924 00141864  81 83 00 00 */	lwz r12, 0(r3)
/* 80144928 00141868  7C 7E 1B 78 */	mr r30, r3
/* 8014492C 0014186C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80144930 00141870  7D 89 03 A6 */	mtctr r12
/* 80144934 00141874  4E 80 04 21 */	bctrl 
/* 80144938 00141878  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014493C 0014187C  41 82 00 14 */	beq .L_80144950
/* 80144940 00141880  38 61 00 20 */	addi r3, r1, 0x20
/* 80144944 00141884  3B FF 00 01 */	addi r31, r31, 1
/* 80144948 00141888  7F C3 E9 2E */	stwx r30, r3, r29
/* 8014494C 0014188C  3B BD 00 04 */	addi r29, r29, 4
.L_80144950:
/* 80144950 00141890  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80144954 00141894  28 00 00 00 */	cmplwi r0, 0
/* 80144958 00141898  40 82 00 24 */	bne .L_8014497C
/* 8014495C 0014189C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80144960 001418A0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80144964 001418A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144968 001418A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014496C 001418AC  7D 89 03 A6 */	mtctr r12
/* 80144970 001418B0  4E 80 04 21 */	bctrl 
/* 80144974 001418B4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80144978 001418B8  48 00 00 94 */	b .L_80144A0C
.L_8014497C:
/* 8014497C 001418BC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80144980 001418C0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80144984 001418C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144988 001418C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014498C 001418CC  7D 89 03 A6 */	mtctr r12
/* 80144990 001418D0  4E 80 04 21 */	bctrl 
/* 80144994 001418D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80144998 001418D8  48 00 00 58 */	b .L_801449F0
.L_8014499C:
/* 8014499C 001418DC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801449A0 001418E0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801449A4 001418E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801449A8 001418E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801449AC 001418EC  7D 89 03 A6 */	mtctr r12
/* 801449B0 001418F0  4E 80 04 21 */	bctrl 
/* 801449B4 001418F4  7C 64 1B 78 */	mr r4, r3
/* 801449B8 001418F8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801449BC 001418FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801449C0 00141900  81 8C 00 08 */	lwz r12, 8(r12)
/* 801449C4 00141904  7D 89 03 A6 */	mtctr r12
/* 801449C8 00141908  4E 80 04 21 */	bctrl 
/* 801449CC 0014190C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801449D0 00141910  40 82 00 3C */	bne .L_80144A0C
/* 801449D4 00141914  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801449D8 00141918  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801449DC 0014191C  81 83 00 00 */	lwz r12, 0(r3)
/* 801449E0 00141920  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801449E4 00141924  7D 89 03 A6 */	mtctr r12
/* 801449E8 00141928  4E 80 04 21 */	bctrl 
/* 801449EC 0014192C  90 61 00 14 */	stw r3, 0x14(r1)
.L_801449F0:
/* 801449F0 00141930  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801449F4 00141934  38 61 00 10 */	addi r3, r1, 0x10
/* 801449F8 00141938  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801449FC 0014193C  7D 89 03 A6 */	mtctr r12
/* 80144A00 00141940  4E 80 04 21 */	bctrl 
/* 80144A04 00141944  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144A08 00141948  41 82 FF 94 */	beq .L_8014499C
.L_80144A0C:
/* 80144A0C 0014194C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80144A10 00141950  81 83 00 00 */	lwz r12, 0(r3)
/* 80144A14 00141954  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80144A18 00141958  7D 89 03 A6 */	mtctr r12
/* 80144A1C 0014195C  4E 80 04 21 */	bctrl 
/* 80144A20 00141960  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80144A24 00141964  7C 04 18 40 */	cmplw r4, r3
/* 80144A28 00141968  40 82 FE E8 */	bne .L_80144910
/* 80144A2C 0014196C  3B A1 00 20 */	addi r29, r1, 0x20
/* 80144A30 00141970  3B C0 00 00 */	li r30, 0
/* 80144A34 00141974  48 00 00 64 */	b .L_80144A98
.L_80144A38:
/* 80144A38 00141978  83 9D 00 00 */	lwz r28, 0(r29)
/* 80144A3C 0014197C  88 9C 02 B8 */	lbz r4, 0x2b8(r28)
/* 80144A40 00141980  2C 04 00 02 */	cmpwi r4, 2
/* 80144A44 00141984  41 81 00 10 */	bgt .L_80144A54
/* 80144A48 00141988  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80144A4C 0014198C  48 03 70 51 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 80144A50 00141990  48 00 00 0C */	b .L_80144A5C
.L_80144A54:
/* 80144A54 00141994  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80144A58 00141998  80 63 00 B0 */	lwz r3, 0xb0(r3)
.L_80144A5C:
/* 80144A5C 0014199C  28 03 00 00 */	cmplwi r3, 0
/* 80144A60 001419A0  41 82 00 30 */	beq .L_80144A90
/* 80144A64 001419A4  3C A0 80 4B */	lis r5, __vt__Q26PikiAI9ActionArg@ha
/* 80144A68 001419A8  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 80144A6C 001419AC  38 C5 05 30 */	addi r6, r5, __vt__Q26PikiAI9ActionArg@l
/* 80144A70 001419B0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80144A74 001419B4  38 04 05 24 */	addi r0, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 80144A78 001419B8  38 A1 00 08 */	addi r5, r1, 8
/* 80144A7C 001419BC  90 C1 00 08 */	stw r6, 8(r1)
/* 80144A80 001419C0  38 80 00 02 */	li r4, 2
/* 80144A84 001419C4  90 01 00 08 */	stw r0, 8(r1)
/* 80144A88 001419C8  80 7C 02 94 */	lwz r3, 0x294(r28)
/* 80144A8C 001419CC  48 05 25 09 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_80144A90:
/* 80144A90 001419D0  3B BD 00 04 */	addi r29, r29, 4
/* 80144A94 001419D4  3B DE 00 01 */	addi r30, r30, 1
.L_80144A98:
/* 80144A98 001419D8  7C 1E F8 00 */	cmpw r30, r31
/* 80144A9C 001419DC  41 80 FF 9C */	blt .L_80144A38
/* 80144AA0 001419E0  80 01 01 C4 */	lwz r0, 0x1c4(r1)
/* 80144AA4 001419E4  83 E1 01 BC */	lwz r31, 0x1bc(r1)
/* 80144AA8 001419E8  83 C1 01 B8 */	lwz r30, 0x1b8(r1)
/* 80144AAC 001419EC  83 A1 01 B4 */	lwz r29, 0x1b4(r1)
/* 80144AB0 001419F0  83 81 01 B0 */	lwz r28, 0x1b0(r1)
/* 80144AB4 001419F4  7C 08 03 A6 */	mtlr r0
/* 80144AB8 001419F8  38 21 01 C0 */	addi r1, r1, 0x1c0
/* 80144ABC 001419FC  4E 80 00 20 */	blr 
.endfn enterAllPikis__Q24Game4NaviFv

.fn formationable__Q24Game4NaviFv, global
/* 80144AC0 00141A00  88 03 02 D4 */	lbz r0, 0x2d4(r3)
/* 80144AC4 00141A04  7C 00 07 74 */	extsb r0, r0
/* 80144AC8 00141A08  7C 00 00 34 */	cntlzw r0, r0
/* 80144ACC 00141A0C  54 03 D9 7E */	srwi r3, r0, 5
/* 80144AD0 00141A10  4E 80 00 20 */	blr 
.endfn formationable__Q24Game4NaviFv

.fn updateKaisanDisable__Q24Game4NaviFv, global
/* 80144AD4 00141A14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144AD8 00141A18  7C 08 02 A6 */	mflr r0
/* 80144ADC 00141A1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144AE0 00141A20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80144AE4 00141A24  7C 7F 1B 78 */	mr r31, r3
/* 80144AE8 00141A28  88 03 02 D4 */	lbz r0, 0x2d4(r3)
/* 80144AEC 00141A2C  7C 00 07 75 */	extsb. r0, r0
/* 80144AF0 00141A30  40 81 00 40 */	ble .L_80144B30
/* 80144AF4 00141A34  C0 3F 01 E4 */	lfs f1, 0x1e4(r31)
/* 80144AF8 00141A38  C0 1F 01 E8 */	lfs f0, 0x1e8(r31)
/* 80144AFC 00141A3C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80144B00 00141A40  C0 5F 01 EC */	lfs f2, 0x1ec(r31)
/* 80144B04 00141A44  EC 00 00 32 */	fmuls f0, f0, f0
/* 80144B08 00141A48  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80144B0C 00141A4C  EC 01 00 2A */	fadds f0, f1, f0
/* 80144B10 00141A50  EC 22 00 2A */	fadds f1, f2, f0
/* 80144B14 00141A54  48 2C CC F1 */	bl pikmin2_sqrtf__Ff
/* 80144B18 00141A58  C0 02 A0 78 */	lfs f0, lbl_805183D8@sda21(r2)
/* 80144B1C 00141A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144B20 00141A60  40 81 00 10 */	ble .L_80144B30
/* 80144B24 00141A64  88 7F 02 D4 */	lbz r3, 0x2d4(r31)
/* 80144B28 00141A68  38 03 FF FF */	addi r0, r3, -1
/* 80144B2C 00141A6C  98 1F 02 D4 */	stb r0, 0x2d4(r31)
.L_80144B30:
/* 80144B30 00141A70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144B34 00141A74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80144B38 00141A78  7C 08 03 A6 */	mtlr r0
/* 80144B3C 00141A7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80144B40 00141A80  4E 80 00 20 */	blr 
.endfn updateKaisanDisable__Q24Game4NaviFv

.fn clearKaisanDisable__Q24Game4NaviFv, global
/* 80144B44 00141A84  38 00 00 00 */	li r0, 0
/* 80144B48 00141A88  98 03 02 D4 */	stb r0, 0x2d4(r3)
/* 80144B4C 00141A8C  4E 80 00 20 */	blr 
.endfn clearKaisanDisable__Q24Game4NaviFv

.fn throwable__Q24Game4NaviFv, global
/* 80144B50 00141A90  88 03 02 BC */	lbz r0, 0x2bc(r3)
/* 80144B54 00141A94  7C 00 00 34 */	cntlzw r0, r0
/* 80144B58 00141A98  54 03 D9 7E */	srwi r3, r0, 5
/* 80144B5C 00141A9C  4E 80 00 20 */	blr 
.endfn throwable__Q24Game4NaviFv

.fn startThrowDisable__Q24Game4NaviFv, global
/* 80144B60 00141AA0  38 00 00 0A */	li r0, 0xa
/* 80144B64 00141AA4  98 03 02 BC */	stb r0, 0x2bc(r3)
/* 80144B68 00141AA8  4E 80 00 20 */	blr 
.endfn startThrowDisable__Q24Game4NaviFv

.fn updateThrowDisable__Q24Game4NaviFv, global
/* 80144B6C 00141AAC  88 03 02 BC */	lbz r0, 0x2bc(r3)
/* 80144B70 00141AB0  28 00 00 00 */	cmplwi r0, 0
/* 80144B74 00141AB4  4D 82 00 20 */	beqlr 
/* 80144B78 00141AB8  80 83 02 78 */	lwz r4, 0x278(r3)
/* 80144B7C 00141ABC  28 04 00 00 */	cmplwi r4, 0
/* 80144B80 00141AC0  41 82 00 18 */	beq .L_80144B98
/* 80144B84 00141AC4  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80144B88 00141AC8  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80144B8C 00141ACC  41 82 00 0C */	beq .L_80144B98
/* 80144B90 00141AD0  38 00 00 0A */	li r0, 0xa
/* 80144B94 00141AD4  98 03 02 BC */	stb r0, 0x2bc(r3)
.L_80144B98:
/* 80144B98 00141AD8  88 83 02 BC */	lbz r4, 0x2bc(r3)
/* 80144B9C 00141ADC  38 04 FF FF */	addi r0, r4, -1
/* 80144BA0 00141AE0  98 03 02 BC */	stb r0, 0x2bc(r3)
/* 80144BA4 00141AE4  4E 80 00 20 */	blr 
.endfn updateThrowDisable__Q24Game4NaviFv

.fn clearThrowDisable__Q24Game4NaviFv, global
/* 80144BA8 00141AE8  38 00 00 00 */	li r0, 0
/* 80144BAC 00141AEC  98 03 02 BC */	stb r0, 0x2bc(r3)
/* 80144BB0 00141AF0  4E 80 00 20 */	blr 
.endfn clearThrowDisable__Q24Game4NaviFv

.fn "holeinAllPikis__Q24Game4NaviFR10Vector3<f>", global
/* 80144BB4 00141AF4  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 80144BB8 00141AF8  7C 08 02 A6 */	mflr r0
/* 80144BBC 00141AFC  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80144BC0 00141B00  93 E1 01 CC */	stw r31, 0x1cc(r1)
/* 80144BC4 00141B04  93 C1 01 C8 */	stw r30, 0x1c8(r1)
/* 80144BC8 00141B08  7C 9E 23 78 */	mr r30, r4
/* 80144BCC 00141B0C  38 80 00 00 */	li r4, 0
/* 80144BD0 00141B10  93 A1 01 C4 */	stw r29, 0x1c4(r1)
/* 80144BD4 00141B14  93 81 01 C0 */	stw r28, 0x1c0(r1)
/* 80144BD8 00141B18  7C 7C 1B 78 */	mr r28, r3
/* 80144BDC 00141B1C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80144BE0 00141B20  48 01 66 ED */	bl getAliveOrima__Q24Game7NaviMgrFi
/* 80144BE4 00141B24  80 7C 02 54 */	lwz r3, 0x254(r28)
/* 80144BE8 00141B28  3B A0 00 00 */	li r29, 0
/* 80144BEC 00141B2C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80144BF0 00141B30  3B E0 00 00 */	li r31, 0
/* 80144BF4 00141B34  38 04 BC 84 */	addi r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80144BF8 00141B38  28 1D 00 00 */	cmplwi r29, 0
/* 80144BFC 00141B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144C00 00141B40  93 A1 00 20 */	stw r29, 0x20(r1)
/* 80144C04 00141B44  93 A1 00 18 */	stw r29, 0x18(r1)
/* 80144C08 00141B48  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80144C0C 00141B4C  40 82 00 1C */	bne .L_80144C28
/* 80144C10 00141B50  81 83 00 00 */	lwz r12, 0(r3)
/* 80144C14 00141B54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80144C18 00141B58  7D 89 03 A6 */	mtctr r12
/* 80144C1C 00141B5C  4E 80 04 21 */	bctrl 
/* 80144C20 00141B60  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144C24 00141B64  48 00 01 F8 */	b .L_80144E1C
.L_80144C28:
/* 80144C28 00141B68  81 83 00 00 */	lwz r12, 0(r3)
/* 80144C2C 00141B6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80144C30 00141B70  7D 89 03 A6 */	mtctr r12
/* 80144C34 00141B74  4E 80 04 21 */	bctrl 
/* 80144C38 00141B78  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144C3C 00141B7C  48 00 00 58 */	b .L_80144C94
.L_80144C40:
/* 80144C40 00141B80  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144C44 00141B84  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144C48 00141B88  81 83 00 00 */	lwz r12, 0(r3)
/* 80144C4C 00141B8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80144C50 00141B90  7D 89 03 A6 */	mtctr r12
/* 80144C54 00141B94  4E 80 04 21 */	bctrl 
/* 80144C58 00141B98  7C 64 1B 78 */	mr r4, r3
/* 80144C5C 00141B9C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80144C60 00141BA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80144C64 00141BA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80144C68 00141BA8  7D 89 03 A6 */	mtctr r12
/* 80144C6C 00141BAC  4E 80 04 21 */	bctrl 
/* 80144C70 00141BB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144C74 00141BB4  40 82 01 A8 */	bne .L_80144E1C
/* 80144C78 00141BB8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144C7C 00141BBC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144C80 00141BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80144C84 00141BC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144C88 00141BC8  7D 89 03 A6 */	mtctr r12
/* 80144C8C 00141BCC  4E 80 04 21 */	bctrl 
/* 80144C90 00141BD0  90 61 00 18 */	stw r3, 0x18(r1)
.L_80144C94:
/* 80144C94 00141BD4  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80144C98 00141BD8  38 61 00 14 */	addi r3, r1, 0x14
/* 80144C9C 00141BDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80144CA0 00141BE0  7D 89 03 A6 */	mtctr r12
/* 80144CA4 00141BE4  4E 80 04 21 */	bctrl 
/* 80144CA8 00141BE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144CAC 00141BEC  41 82 FF 94 */	beq .L_80144C40
/* 80144CB0 00141BF0  48 00 01 6C */	b .L_80144E1C
.L_80144CB4:
/* 80144CB4 00141BF4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144CB8 00141BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80144CBC 00141BFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80144CC0 00141C00  7D 89 03 A6 */	mtctr r12
/* 80144CC4 00141C04  4E 80 04 21 */	bctrl 
/* 80144CC8 00141C08  81 83 00 00 */	lwz r12, 0(r3)
/* 80144CCC 00141C0C  7C 60 1B 78 */	mr r0, r3
/* 80144CD0 00141C10  7C 1C 03 78 */	mr r28, r0
/* 80144CD4 00141C14  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80144CD8 00141C18  7D 89 03 A6 */	mtctr r12
/* 80144CDC 00141C1C  4E 80 04 21 */	bctrl 
/* 80144CE0 00141C20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144CE4 00141C24  41 82 00 7C */	beq .L_80144D60
/* 80144CE8 00141C28  80 7C 02 90 */	lwz r3, 0x290(r28)
/* 80144CEC 00141C2C  38 80 00 1B */	li r4, 0x1b
/* 80144CF0 00141C30  81 83 00 00 */	lwz r12, 0(r3)
/* 80144CF4 00141C34  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80144CF8 00141C38  7D 89 03 A6 */	mtctr r12
/* 80144CFC 00141C3C  4E 80 04 21 */	bctrl 
/* 80144D00 00141C40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144D04 00141C44  41 82 00 38 */	beq .L_80144D3C
/* 80144D08 00141C48  80 7C 02 90 */	lwz r3, 0x290(r28)
/* 80144D0C 00141C4C  38 80 00 1B */	li r4, 0x1b
/* 80144D10 00141C50  81 83 00 00 */	lwz r12, 0(r3)
/* 80144D14 00141C54  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80144D18 00141C58  7D 89 03 A6 */	mtctr r12
/* 80144D1C 00141C5C  4E 80 04 21 */	bctrl 
/* 80144D20 00141C60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144D24 00141C64  41 82 00 18 */	beq .L_80144D3C
/* 80144D28 00141C68  38 61 00 24 */	addi r3, r1, 0x24
/* 80144D2C 00141C6C  3B FF 00 01 */	addi r31, r31, 1
/* 80144D30 00141C70  7F 83 E9 2E */	stwx r28, r3, r29
/* 80144D34 00141C74  3B BD 00 04 */	addi r29, r29, 4
/* 80144D38 00141C78  48 00 00 28 */	b .L_80144D60
.L_80144D3C:
/* 80144D3C 00141C7C  80 7C 02 8C */	lwz r3, 0x28c(r28)
/* 80144D40 00141C80  7F 84 E3 78 */	mr r4, r28
/* 80144D44 00141C84  38 A0 00 00 */	li r5, 0
/* 80144D48 00141C88  38 C0 00 00 */	li r6, 0
/* 80144D4C 00141C8C  48 04 52 E5 */	bl transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
/* 80144D50 00141C90  38 61 00 24 */	addi r3, r1, 0x24
/* 80144D54 00141C94  3B FF 00 01 */	addi r31, r31, 1
/* 80144D58 00141C98  7F 83 E9 2E */	stwx r28, r3, r29
/* 80144D5C 00141C9C  3B BD 00 04 */	addi r29, r29, 4
.L_80144D60:
/* 80144D60 00141CA0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80144D64 00141CA4  28 00 00 00 */	cmplwi r0, 0
/* 80144D68 00141CA8  40 82 00 24 */	bne .L_80144D8C
/* 80144D6C 00141CAC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144D70 00141CB0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144D74 00141CB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144D78 00141CB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144D7C 00141CBC  7D 89 03 A6 */	mtctr r12
/* 80144D80 00141CC0  4E 80 04 21 */	bctrl 
/* 80144D84 00141CC4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144D88 00141CC8  48 00 00 94 */	b .L_80144E1C
.L_80144D8C:
/* 80144D8C 00141CCC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144D90 00141CD0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144D94 00141CD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144D98 00141CD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144D9C 00141CDC  7D 89 03 A6 */	mtctr r12
/* 80144DA0 00141CE0  4E 80 04 21 */	bctrl 
/* 80144DA4 00141CE4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144DA8 00141CE8  48 00 00 58 */	b .L_80144E00
.L_80144DAC:
/* 80144DAC 00141CEC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144DB0 00141CF0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144DB4 00141CF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144DB8 00141CF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80144DBC 00141CFC  7D 89 03 A6 */	mtctr r12
/* 80144DC0 00141D00  4E 80 04 21 */	bctrl 
/* 80144DC4 00141D04  7C 64 1B 78 */	mr r4, r3
/* 80144DC8 00141D08  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80144DCC 00141D0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80144DD0 00141D10  81 8C 00 08 */	lwz r12, 8(r12)
/* 80144DD4 00141D14  7D 89 03 A6 */	mtctr r12
/* 80144DD8 00141D18  4E 80 04 21 */	bctrl 
/* 80144DDC 00141D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144DE0 00141D20  40 82 00 3C */	bne .L_80144E1C
/* 80144DE4 00141D24  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144DE8 00141D28  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144DEC 00141D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80144DF0 00141D30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144DF4 00141D34  7D 89 03 A6 */	mtctr r12
/* 80144DF8 00141D38  4E 80 04 21 */	bctrl 
/* 80144DFC 00141D3C  90 61 00 18 */	stw r3, 0x18(r1)
.L_80144E00:
/* 80144E00 00141D40  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80144E04 00141D44  38 61 00 14 */	addi r3, r1, 0x14
/* 80144E08 00141D48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80144E0C 00141D4C  7D 89 03 A6 */	mtctr r12
/* 80144E10 00141D50  4E 80 04 21 */	bctrl 
/* 80144E14 00141D54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144E18 00141D58  41 82 FF 94 */	beq .L_80144DAC
.L_80144E1C:
/* 80144E1C 00141D5C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144E20 00141D60  81 83 00 00 */	lwz r12, 0(r3)
/* 80144E24 00141D64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80144E28 00141D68  7D 89 03 A6 */	mtctr r12
/* 80144E2C 00141D6C  4E 80 04 21 */	bctrl 
/* 80144E30 00141D70  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144E34 00141D74  7C 04 18 40 */	cmplw r4, r3
/* 80144E38 00141D78  40 82 FE 7C */	bne .L_80144CB4
/* 80144E3C 00141D7C  3B A1 00 24 */	addi r29, r1, 0x24
/* 80144E40 00141D80  3B 80 00 00 */	li r28, 0
/* 80144E44 00141D84  48 00 00 44 */	b .L_80144E88
.L_80144E48:
/* 80144E48 00141D88  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80144E4C 00141D8C  38 C1 00 08 */	addi r6, r1, 8
/* 80144E50 00141D90  80 9D 00 00 */	lwz r4, 0(r29)
/* 80144E54 00141D94  38 A0 00 1B */	li r5, 0x1b
/* 80144E58 00141D98  D0 01 00 08 */	stfs f0, 8(r1)
/* 80144E5C 00141D9C  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80144E60 00141DA0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80144E64 00141DA4  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80144E68 00141DA8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80144E6C 00141DAC  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80144E70 00141DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80144E74 00141DB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144E78 00141DB8  7D 89 03 A6 */	mtctr r12
/* 80144E7C 00141DBC  4E 80 04 21 */	bctrl 
/* 80144E80 00141DC0  3B BD 00 04 */	addi r29, r29, 4
/* 80144E84 00141DC4  3B 9C 00 01 */	addi r28, r28, 1
.L_80144E88:
/* 80144E88 00141DC8  7C 1C F8 00 */	cmpw r28, r31
/* 80144E8C 00141DCC  41 80 FF BC */	blt .L_80144E48
/* 80144E90 00141DD0  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 80144E94 00141DD4  83 E1 01 CC */	lwz r31, 0x1cc(r1)
/* 80144E98 00141DD8  83 C1 01 C8 */	lwz r30, 0x1c8(r1)
/* 80144E9C 00141DDC  83 A1 01 C4 */	lwz r29, 0x1c4(r1)
/* 80144EA0 00141DE0  83 81 01 C0 */	lwz r28, 0x1c0(r1)
/* 80144EA4 00141DE4  7C 08 03 A6 */	mtlr r0
/* 80144EA8 00141DE8  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80144EAC 00141DEC  4E 80 00 20 */	blr 
.endfn "holeinAllPikis__Q24Game4NaviFR10Vector3<f>"

.fn soft_transittable__Q24Game9PikiStateFi, weak
/* 80144EB0 00141DF0  38 60 00 01 */	li r3, 1
/* 80144EB4 00141DF4  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game9PikiStateFi

.fn transittable__Q24Game9PikiStateFi, weak
/* 80144EB8 00141DF8  38 60 00 01 */	li r3, 1
/* 80144EBC 00141DFC  4E 80 00 20 */	blr 
.endfn transittable__Q24Game9PikiStateFi

.fn "fountainonAllPikis__Q24Game4NaviFR10Vector3<f>", global
/* 80144EC0 00141E00  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 80144EC4 00141E04  7C 08 02 A6 */	mflr r0
/* 80144EC8 00141E08  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80144ECC 00141E0C  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80144ED0 00141E10  38 05 BC 84 */	addi r0, r5, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80144ED4 00141E14  93 E1 01 CC */	stw r31, 0x1cc(r1)
/* 80144ED8 00141E18  3B E0 00 00 */	li r31, 0
/* 80144EDC 00141E1C  93 C1 01 C8 */	stw r30, 0x1c8(r1)
/* 80144EE0 00141E20  7C 9E 23 78 */	mr r30, r4
/* 80144EE4 00141E24  93 A1 01 C4 */	stw r29, 0x1c4(r1)
/* 80144EE8 00141E28  3B A0 00 00 */	li r29, 0
/* 80144EEC 00141E2C  28 1D 00 00 */	cmplwi r29, 0
/* 80144EF0 00141E30  93 81 01 C0 */	stw r28, 0x1c0(r1)
/* 80144EF4 00141E34  80 63 02 54 */	lwz r3, 0x254(r3)
/* 80144EF8 00141E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144EFC 00141E3C  93 A1 00 20 */	stw r29, 0x20(r1)
/* 80144F00 00141E40  93 A1 00 18 */	stw r29, 0x18(r1)
/* 80144F04 00141E44  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80144F08 00141E48  40 82 00 1C */	bne .L_80144F24
/* 80144F0C 00141E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80144F10 00141E50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80144F14 00141E54  7D 89 03 A6 */	mtctr r12
/* 80144F18 00141E58  4E 80 04 21 */	bctrl 
/* 80144F1C 00141E5C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144F20 00141E60  48 00 02 04 */	b .L_80145124
.L_80144F24:
/* 80144F24 00141E64  81 83 00 00 */	lwz r12, 0(r3)
/* 80144F28 00141E68  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80144F2C 00141E6C  7D 89 03 A6 */	mtctr r12
/* 80144F30 00141E70  4E 80 04 21 */	bctrl 
/* 80144F34 00141E74  90 61 00 18 */	stw r3, 0x18(r1)
/* 80144F38 00141E78  48 00 00 58 */	b .L_80144F90
.L_80144F3C:
/* 80144F3C 00141E7C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144F40 00141E80  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144F44 00141E84  81 83 00 00 */	lwz r12, 0(r3)
/* 80144F48 00141E88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80144F4C 00141E8C  7D 89 03 A6 */	mtctr r12
/* 80144F50 00141E90  4E 80 04 21 */	bctrl 
/* 80144F54 00141E94  7C 64 1B 78 */	mr r4, r3
/* 80144F58 00141E98  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80144F5C 00141E9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80144F60 00141EA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80144F64 00141EA4  7D 89 03 A6 */	mtctr r12
/* 80144F68 00141EA8  4E 80 04 21 */	bctrl 
/* 80144F6C 00141EAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144F70 00141EB0  40 82 01 B4 */	bne .L_80145124
/* 80144F74 00141EB4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144F78 00141EB8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80144F7C 00141EBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80144F80 00141EC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144F84 00141EC4  7D 89 03 A6 */	mtctr r12
/* 80144F88 00141EC8  4E 80 04 21 */	bctrl 
/* 80144F8C 00141ECC  90 61 00 18 */	stw r3, 0x18(r1)
.L_80144F90:
/* 80144F90 00141ED0  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80144F94 00141ED4  38 61 00 14 */	addi r3, r1, 0x14
/* 80144F98 00141ED8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80144F9C 00141EDC  7D 89 03 A6 */	mtctr r12
/* 80144FA0 00141EE0  4E 80 04 21 */	bctrl 
/* 80144FA4 00141EE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144FA8 00141EE8  41 82 FF 94 */	beq .L_80144F3C
/* 80144FAC 00141EEC  48 00 01 78 */	b .L_80145124
.L_80144FB0:
/* 80144FB0 00141EF0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80144FB4 00141EF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80144FB8 00141EF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80144FBC 00141EFC  7D 89 03 A6 */	mtctr r12
/* 80144FC0 00141F00  4E 80 04 21 */	bctrl 
/* 80144FC4 00141F04  81 83 00 00 */	lwz r12, 0(r3)
/* 80144FC8 00141F08  7C 60 1B 78 */	mr r0, r3
/* 80144FCC 00141F0C  7C 1C 03 78 */	mr r28, r0
/* 80144FD0 00141F10  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80144FD4 00141F14  7D 89 03 A6 */	mtctr r12
/* 80144FD8 00141F18  4E 80 04 21 */	bctrl 
/* 80144FDC 00141F1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80144FE0 00141F20  41 82 00 88 */	beq .L_80145068
/* 80144FE4 00141F24  88 1C 02 B8 */	lbz r0, 0x2b8(r28)
/* 80144FE8 00141F28  2C 00 00 05 */	cmpwi r0, 5
/* 80144FEC 00141F2C  41 82 00 7C */	beq .L_80145068
/* 80144FF0 00141F30  80 7C 02 90 */	lwz r3, 0x290(r28)
/* 80144FF4 00141F34  38 80 00 1C */	li r4, 0x1c
/* 80144FF8 00141F38  81 83 00 00 */	lwz r12, 0(r3)
/* 80144FFC 00141F3C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80145000 00141F40  7D 89 03 A6 */	mtctr r12
/* 80145004 00141F44  4E 80 04 21 */	bctrl 
/* 80145008 00141F48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014500C 00141F4C  41 82 00 38 */	beq .L_80145044
/* 80145010 00141F50  80 7C 02 90 */	lwz r3, 0x290(r28)
/* 80145014 00141F54  38 80 00 1C */	li r4, 0x1c
/* 80145018 00141F58  81 83 00 00 */	lwz r12, 0(r3)
/* 8014501C 00141F5C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80145020 00141F60  7D 89 03 A6 */	mtctr r12
/* 80145024 00141F64  4E 80 04 21 */	bctrl 
/* 80145028 00141F68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014502C 00141F6C  41 82 00 18 */	beq .L_80145044
/* 80145030 00141F70  38 61 00 24 */	addi r3, r1, 0x24
/* 80145034 00141F74  3B FF 00 01 */	addi r31, r31, 1
/* 80145038 00141F78  7F 83 E9 2E */	stwx r28, r3, r29
/* 8014503C 00141F7C  3B BD 00 04 */	addi r29, r29, 4
/* 80145040 00141F80  48 00 00 28 */	b .L_80145068
.L_80145044:
/* 80145044 00141F84  80 7C 02 8C */	lwz r3, 0x28c(r28)
/* 80145048 00141F88  7F 84 E3 78 */	mr r4, r28
/* 8014504C 00141F8C  38 A0 00 00 */	li r5, 0
/* 80145050 00141F90  38 C0 00 00 */	li r6, 0
/* 80145054 00141F94  48 04 4F DD */	bl transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
/* 80145058 00141F98  38 61 00 24 */	addi r3, r1, 0x24
/* 8014505C 00141F9C  3B FF 00 01 */	addi r31, r31, 1
/* 80145060 00141FA0  7F 83 E9 2E */	stwx r28, r3, r29
/* 80145064 00141FA4  3B BD 00 04 */	addi r29, r29, 4
.L_80145068:
/* 80145068 00141FA8  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8014506C 00141FAC  28 00 00 00 */	cmplwi r0, 0
/* 80145070 00141FB0  40 82 00 24 */	bne .L_80145094
/* 80145074 00141FB4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80145078 00141FB8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8014507C 00141FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80145080 00141FC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145084 00141FC4  7D 89 03 A6 */	mtctr r12
/* 80145088 00141FC8  4E 80 04 21 */	bctrl 
/* 8014508C 00141FCC  90 61 00 18 */	stw r3, 0x18(r1)
/* 80145090 00141FD0  48 00 00 94 */	b .L_80145124
.L_80145094:
/* 80145094 00141FD4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80145098 00141FD8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8014509C 00141FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801450A0 00141FE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801450A4 00141FE4  7D 89 03 A6 */	mtctr r12
/* 801450A8 00141FE8  4E 80 04 21 */	bctrl 
/* 801450AC 00141FEC  90 61 00 18 */	stw r3, 0x18(r1)
/* 801450B0 00141FF0  48 00 00 58 */	b .L_80145108
.L_801450B4:
/* 801450B4 00141FF4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801450B8 00141FF8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801450BC 00141FFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801450C0 00142000  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801450C4 00142004  7D 89 03 A6 */	mtctr r12
/* 801450C8 00142008  4E 80 04 21 */	bctrl 
/* 801450CC 0014200C  7C 64 1B 78 */	mr r4, r3
/* 801450D0 00142010  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801450D4 00142014  81 83 00 00 */	lwz r12, 0(r3)
/* 801450D8 00142018  81 8C 00 08 */	lwz r12, 8(r12)
/* 801450DC 0014201C  7D 89 03 A6 */	mtctr r12
/* 801450E0 00142020  4E 80 04 21 */	bctrl 
/* 801450E4 00142024  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801450E8 00142028  40 82 00 3C */	bne .L_80145124
/* 801450EC 0014202C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801450F0 00142030  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801450F4 00142034  81 83 00 00 */	lwz r12, 0(r3)
/* 801450F8 00142038  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801450FC 0014203C  7D 89 03 A6 */	mtctr r12
/* 80145100 00142040  4E 80 04 21 */	bctrl 
/* 80145104 00142044  90 61 00 18 */	stw r3, 0x18(r1)
.L_80145108:
/* 80145108 00142048  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8014510C 0014204C  38 61 00 14 */	addi r3, r1, 0x14
/* 80145110 00142050  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80145114 00142054  7D 89 03 A6 */	mtctr r12
/* 80145118 00142058  4E 80 04 21 */	bctrl 
/* 8014511C 0014205C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145120 00142060  41 82 FF 94 */	beq .L_801450B4
.L_80145124:
/* 80145124 00142064  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80145128 00142068  81 83 00 00 */	lwz r12, 0(r3)
/* 8014512C 0014206C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80145130 00142070  7D 89 03 A6 */	mtctr r12
/* 80145134 00142074  4E 80 04 21 */	bctrl 
/* 80145138 00142078  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8014513C 0014207C  7C 04 18 40 */	cmplw r4, r3
/* 80145140 00142080  40 82 FE 70 */	bne .L_80144FB0
/* 80145144 00142084  3B A1 00 24 */	addi r29, r1, 0x24
/* 80145148 00142088  3B 80 00 00 */	li r28, 0
/* 8014514C 0014208C  48 00 00 44 */	b .L_80145190
.L_80145150:
/* 80145150 00142090  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80145154 00142094  38 C1 00 08 */	addi r6, r1, 8
/* 80145158 00142098  80 9D 00 00 */	lwz r4, 0(r29)
/* 8014515C 0014209C  38 A0 00 1C */	li r5, 0x1c
/* 80145160 001420A0  D0 01 00 08 */	stfs f0, 8(r1)
/* 80145164 001420A4  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80145168 001420A8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8014516C 001420AC  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80145170 001420B0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80145174 001420B4  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80145178 001420B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014517C 001420BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145180 001420C0  7D 89 03 A6 */	mtctr r12
/* 80145184 001420C4  4E 80 04 21 */	bctrl 
/* 80145188 001420C8  3B BD 00 04 */	addi r29, r29, 4
/* 8014518C 001420CC  3B 9C 00 01 */	addi r28, r28, 1
.L_80145190:
/* 80145190 001420D0  7C 1C F8 00 */	cmpw r28, r31
/* 80145194 001420D4  41 80 FF BC */	blt .L_80145150
/* 80145198 001420D8  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 8014519C 001420DC  83 E1 01 CC */	lwz r31, 0x1cc(r1)
/* 801451A0 001420E0  83 C1 01 C8 */	lwz r30, 0x1c8(r1)
/* 801451A4 001420E4  83 A1 01 C4 */	lwz r29, 0x1c4(r1)
/* 801451A8 001420E8  83 81 01 C0 */	lwz r28, 0x1c0(r1)
/* 801451AC 001420EC  7C 08 03 A6 */	mtlr r0
/* 801451B0 001420F0  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 801451B4 001420F4  4E 80 00 20 */	blr 
.endfn "fountainonAllPikis__Q24Game4NaviFR10Vector3<f>"

.fn demowaitAllPikis__Q24Game4NaviFv, global
/* 801451B8 001420F8  94 21 FE 40 */	stwu r1, -0x1c0(r1)
/* 801451BC 001420FC  7C 08 02 A6 */	mflr r0
/* 801451C0 00142100  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 801451C4 00142104  90 01 01 C4 */	stw r0, 0x1c4(r1)
/* 801451C8 00142108  38 04 BC 84 */	addi r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 801451CC 0014210C  93 E1 01 BC */	stw r31, 0x1bc(r1)
/* 801451D0 00142110  3B E0 00 00 */	li r31, 0
/* 801451D4 00142114  93 C1 01 B8 */	stw r30, 0x1b8(r1)
/* 801451D8 00142118  3B C0 00 00 */	li r30, 0
/* 801451DC 0014211C  28 1E 00 00 */	cmplwi r30, 0
/* 801451E0 00142120  93 A1 01 B4 */	stw r29, 0x1b4(r1)
/* 801451E4 00142124  80 63 02 54 */	lwz r3, 0x254(r3)
/* 801451E8 00142128  90 01 00 08 */	stw r0, 8(r1)
/* 801451EC 0014212C  93 C1 00 14 */	stw r30, 0x14(r1)
/* 801451F0 00142130  93 C1 00 0C */	stw r30, 0xc(r1)
/* 801451F4 00142134  90 61 00 10 */	stw r3, 0x10(r1)
/* 801451F8 00142138  40 82 00 1C */	bne .L_80145214
/* 801451FC 0014213C  81 83 00 00 */	lwz r12, 0(r3)
/* 80145200 00142140  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80145204 00142144  7D 89 03 A6 */	mtctr r12
/* 80145208 00142148  4E 80 04 21 */	bctrl 
/* 8014520C 0014214C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80145210 00142150  48 00 02 04 */	b .L_80145414
.L_80145214:
/* 80145214 00142154  81 83 00 00 */	lwz r12, 0(r3)
/* 80145218 00142158  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014521C 0014215C  7D 89 03 A6 */	mtctr r12
/* 80145220 00142160  4E 80 04 21 */	bctrl 
/* 80145224 00142164  90 61 00 0C */	stw r3, 0xc(r1)
/* 80145228 00142168  48 00 00 58 */	b .L_80145280
.L_8014522C:
/* 8014522C 0014216C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80145230 00142170  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80145234 00142174  81 83 00 00 */	lwz r12, 0(r3)
/* 80145238 00142178  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014523C 0014217C  7D 89 03 A6 */	mtctr r12
/* 80145240 00142180  4E 80 04 21 */	bctrl 
/* 80145244 00142184  7C 64 1B 78 */	mr r4, r3
/* 80145248 00142188  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8014524C 0014218C  81 83 00 00 */	lwz r12, 0(r3)
/* 80145250 00142190  81 8C 00 08 */	lwz r12, 8(r12)
/* 80145254 00142194  7D 89 03 A6 */	mtctr r12
/* 80145258 00142198  4E 80 04 21 */	bctrl 
/* 8014525C 0014219C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145260 001421A0  40 82 01 B4 */	bne .L_80145414
/* 80145264 001421A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80145268 001421A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8014526C 001421AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80145270 001421B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145274 001421B4  7D 89 03 A6 */	mtctr r12
/* 80145278 001421B8  4E 80 04 21 */	bctrl 
/* 8014527C 001421BC  90 61 00 0C */	stw r3, 0xc(r1)
.L_80145280:
/* 80145280 001421C0  81 81 00 08 */	lwz r12, 8(r1)
/* 80145284 001421C4  38 61 00 08 */	addi r3, r1, 8
/* 80145288 001421C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014528C 001421CC  7D 89 03 A6 */	mtctr r12
/* 80145290 001421D0  4E 80 04 21 */	bctrl 
/* 80145294 001421D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145298 001421D8  41 82 FF 94 */	beq .L_8014522C
/* 8014529C 001421DC  48 00 01 78 */	b .L_80145414
.L_801452A0:
/* 801452A0 001421E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801452A4 001421E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801452A8 001421E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801452AC 001421EC  7D 89 03 A6 */	mtctr r12
/* 801452B0 001421F0  4E 80 04 21 */	bctrl 
/* 801452B4 001421F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801452B8 001421F8  7C 60 1B 78 */	mr r0, r3
/* 801452BC 001421FC  7C 1D 03 78 */	mr r29, r0
/* 801452C0 00142200  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801452C4 00142204  7D 89 03 A6 */	mtctr r12
/* 801452C8 00142208  4E 80 04 21 */	bctrl 
/* 801452CC 0014220C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801452D0 00142210  41 82 00 88 */	beq .L_80145358
/* 801452D4 00142214  88 1D 02 B8 */	lbz r0, 0x2b8(r29)
/* 801452D8 00142218  2C 00 00 05 */	cmpwi r0, 5
/* 801452DC 0014221C  41 82 00 7C */	beq .L_80145358
/* 801452E0 00142220  80 7D 02 90 */	lwz r3, 0x290(r29)
/* 801452E4 00142224  38 80 00 01 */	li r4, 1
/* 801452E8 00142228  81 83 00 00 */	lwz r12, 0(r3)
/* 801452EC 0014222C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801452F0 00142230  7D 89 03 A6 */	mtctr r12
/* 801452F4 00142234  4E 80 04 21 */	bctrl 
/* 801452F8 00142238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801452FC 0014223C  41 82 00 38 */	beq .L_80145334
/* 80145300 00142240  80 7D 02 90 */	lwz r3, 0x290(r29)
/* 80145304 00142244  38 80 00 01 */	li r4, 1
/* 80145308 00142248  81 83 00 00 */	lwz r12, 0(r3)
/* 8014530C 0014224C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80145310 00142250  7D 89 03 A6 */	mtctr r12
/* 80145314 00142254  4E 80 04 21 */	bctrl 
/* 80145318 00142258  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014531C 0014225C  41 82 00 18 */	beq .L_80145334
/* 80145320 00142260  38 61 00 18 */	addi r3, r1, 0x18
/* 80145324 00142264  3B FF 00 01 */	addi r31, r31, 1
/* 80145328 00142268  7F A3 F1 2E */	stwx r29, r3, r30
/* 8014532C 0014226C  3B DE 00 04 */	addi r30, r30, 4
/* 80145330 00142270  48 00 00 28 */	b .L_80145358
.L_80145334:
/* 80145334 00142274  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 80145338 00142278  7F A4 EB 78 */	mr r4, r29
/* 8014533C 0014227C  38 A0 00 00 */	li r5, 0
/* 80145340 00142280  38 C0 00 00 */	li r6, 0
/* 80145344 00142284  48 04 4C ED */	bl transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
/* 80145348 00142288  38 61 00 18 */	addi r3, r1, 0x18
/* 8014534C 0014228C  3B FF 00 01 */	addi r31, r31, 1
/* 80145350 00142290  7F A3 F1 2E */	stwx r29, r3, r30
/* 80145354 00142294  3B DE 00 04 */	addi r30, r30, 4
.L_80145358:
/* 80145358 00142298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014535C 0014229C  28 00 00 00 */	cmplwi r0, 0
/* 80145360 001422A0  40 82 00 24 */	bne .L_80145384
/* 80145364 001422A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80145368 001422A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8014536C 001422AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80145370 001422B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145374 001422B4  7D 89 03 A6 */	mtctr r12
/* 80145378 001422B8  4E 80 04 21 */	bctrl 
/* 8014537C 001422BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80145380 001422C0  48 00 00 94 */	b .L_80145414
.L_80145384:
/* 80145384 001422C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80145388 001422C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8014538C 001422CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80145390 001422D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145394 001422D4  7D 89 03 A6 */	mtctr r12
/* 80145398 001422D8  4E 80 04 21 */	bctrl 
/* 8014539C 001422DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801453A0 001422E0  48 00 00 58 */	b .L_801453F8
.L_801453A4:
/* 801453A4 001422E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801453A8 001422E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801453AC 001422EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801453B0 001422F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801453B4 001422F4  7D 89 03 A6 */	mtctr r12
/* 801453B8 001422F8  4E 80 04 21 */	bctrl 
/* 801453BC 001422FC  7C 64 1B 78 */	mr r4, r3
/* 801453C0 00142300  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801453C4 00142304  81 83 00 00 */	lwz r12, 0(r3)
/* 801453C8 00142308  81 8C 00 08 */	lwz r12, 8(r12)
/* 801453CC 0014230C  7D 89 03 A6 */	mtctr r12
/* 801453D0 00142310  4E 80 04 21 */	bctrl 
/* 801453D4 00142314  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801453D8 00142318  40 82 00 3C */	bne .L_80145414
/* 801453DC 0014231C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801453E0 00142320  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801453E4 00142324  81 83 00 00 */	lwz r12, 0(r3)
/* 801453E8 00142328  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801453EC 0014232C  7D 89 03 A6 */	mtctr r12
/* 801453F0 00142330  4E 80 04 21 */	bctrl 
/* 801453F4 00142334  90 61 00 0C */	stw r3, 0xc(r1)
.L_801453F8:
/* 801453F8 00142338  81 81 00 08 */	lwz r12, 8(r1)
/* 801453FC 0014233C  38 61 00 08 */	addi r3, r1, 8
/* 80145400 00142340  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80145404 00142344  7D 89 03 A6 */	mtctr r12
/* 80145408 00142348  4E 80 04 21 */	bctrl 
/* 8014540C 0014234C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145410 00142350  41 82 FF 94 */	beq .L_801453A4
.L_80145414:
/* 80145414 00142354  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80145418 00142358  81 83 00 00 */	lwz r12, 0(r3)
/* 8014541C 0014235C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80145420 00142360  7D 89 03 A6 */	mtctr r12
/* 80145424 00142364  4E 80 04 21 */	bctrl 
/* 80145428 00142368  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8014542C 0014236C  7C 04 18 40 */	cmplw r4, r3
/* 80145430 00142370  40 82 FE 70 */	bne .L_801452A0
/* 80145434 00142374  3B C1 00 18 */	addi r30, r1, 0x18
/* 80145438 00142378  3B A0 00 00 */	li r29, 0
/* 8014543C 0014237C  48 00 00 2C */	b .L_80145468
.L_80145440:
/* 80145440 00142380  80 9E 00 00 */	lwz r4, 0(r30)
/* 80145444 00142384  38 A0 00 01 */	li r5, 1
/* 80145448 00142388  38 C0 00 00 */	li r6, 0
/* 8014544C 0014238C  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80145450 00142390  81 83 00 00 */	lwz r12, 0(r3)
/* 80145454 00142394  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145458 00142398  7D 89 03 A6 */	mtctr r12
/* 8014545C 0014239C  4E 80 04 21 */	bctrl 
/* 80145460 001423A0  3B DE 00 04 */	addi r30, r30, 4
/* 80145464 001423A4  3B BD 00 01 */	addi r29, r29, 1
.L_80145468:
/* 80145468 001423A8  7C 1D F8 00 */	cmpw r29, r31
/* 8014546C 001423AC  41 80 FF D4 */	blt .L_80145440
/* 80145470 001423B0  80 01 01 C4 */	lwz r0, 0x1c4(r1)
/* 80145474 001423B4  83 E1 01 BC */	lwz r31, 0x1bc(r1)
/* 80145478 001423B8  83 C1 01 B8 */	lwz r30, 0x1b8(r1)
/* 8014547C 001423BC  83 A1 01 B4 */	lwz r29, 0x1b4(r1)
/* 80145480 001423C0  7C 08 03 A6 */	mtlr r0
/* 80145484 001423C4  38 21 01 C0 */	addi r1, r1, 0x1c0
/* 80145488 001423C8  4E 80 00 20 */	blr 
.endfn demowaitAllPikis__Q24Game4NaviFv

.fn releasePikis__Q24Game4NaviFv, global
/* 8014548C 001423CC  94 21 FC E0 */	stwu r1, -0x320(r1)
/* 80145490 001423D0  7C 08 02 A6 */	mflr r0
/* 80145494 001423D4  90 01 03 24 */	stw r0, 0x324(r1)
/* 80145498 001423D8  DB E1 03 10 */	stfd f31, 0x310(r1)
/* 8014549C 001423DC  F3 E1 03 18 */	psq_st f31, 792(r1), 0, qr0
/* 801454A0 001423E0  DB C1 03 00 */	stfd f30, 0x300(r1)
/* 801454A4 001423E4  F3 C1 03 08 */	psq_st f30, 776(r1), 0, qr0
/* 801454A8 001423E8  DB A1 02 F0 */	stfd f29, 0x2f0(r1)
/* 801454AC 001423EC  F3 A1 02 F8 */	psq_st f29, 760(r1), 0, qr0
/* 801454B0 001423F0  BE 21 02 B4 */	stmw r17, 0x2b4(r1)
/* 801454B4 001423F4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801454B8 001423F8  7C 7E 1B 78 */	mr r30, r3
/* 801454BC 001423FC  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 801454C0 00142400  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801454C4 00142404  40 82 00 0C */	bne .L_801454D0
/* 801454C8 00142408  38 60 00 00 */	li r3, 0
/* 801454CC 0014240C  48 00 08 E8 */	b .L_80145DB4
.L_801454D0:
/* 801454D0 00142410  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801454D4 00142414  3A A0 00 00 */	li r21, 0
/* 801454D8 00142418  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 801454DC 0014241C  81 83 00 00 */	lwz r12, 0(r3)
/* 801454E0 00142420  20 80 00 01 */	subfic r4, r0, 1
/* 801454E4 00142424  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801454E8 00142428  7D 89 03 A6 */	mtctr r12
/* 801454EC 0014242C  4E 80 04 21 */	bctrl 
/* 801454F0 00142430  80 83 02 74 */	lwz r4, 0x274(r3)
/* 801454F4 00142434  28 04 00 00 */	cmplwi r4, 0
/* 801454F8 00142438  41 82 00 0C */	beq .L_80145504
/* 801454FC 0014243C  80 04 00 04 */	lwz r0, 4(r4)
/* 80145500 00142440  48 00 00 08 */	b .L_80145508
.L_80145504:
/* 80145504 00142444  38 00 FF FF */	li r0, -1
.L_80145508:
/* 80145508 00142448  2C 00 00 01 */	cmpwi r0, 1
/* 8014550C 0014244C  40 82 00 08 */	bne .L_80145514
/* 80145510 00142450  3A A0 00 01 */	li r21, 1
.L_80145514:
/* 80145514 00142454  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 80145518 00142458  3C 80 80 4C */	lis r4, __vt__Q24Game14InteractKaisan@ha
/* 8014551C 0014245C  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 80145520 00142460  93 C1 00 0C */	stw r30, 0xc(r1)
/* 80145524 00142464  38 04 86 20 */	addi r0, r4, __vt__Q24Game14InteractKaisan@l
/* 80145528 00142468  38 81 00 08 */	addi r4, r1, 8
/* 8014552C 0014246C  90 A1 00 08 */	stw r5, 8(r1)
/* 80145530 00142470  90 01 00 08 */	stw r0, 8(r1)
/* 80145534 00142474  81 83 00 00 */	lwz r12, 0(r3)
/* 80145538 00142478  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8014553C 0014247C  7D 89 03 A6 */	mtctr r12
/* 80145540 00142480  4E 80 04 21 */	bctrl 
/* 80145544 00142484  3B A0 00 00 */	li r29, 0
/* 80145548 00142488  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 8014554C 0014248C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80145550 00142490  3B E0 00 00 */	li r31, 0
/* 80145554 00142494  38 04 BC 84 */	addi r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80145558 00142498  28 1D 00 00 */	cmplwi r29, 0
/* 8014555C 0014249C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80145560 001424A0  93 A1 00 4C */	stw r29, 0x4c(r1)
/* 80145564 001424A4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80145568 001424A8  90 61 00 48 */	stw r3, 0x48(r1)
/* 8014556C 001424AC  40 82 00 1C */	bne .L_80145588
/* 80145570 001424B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80145574 001424B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80145578 001424B8  7D 89 03 A6 */	mtctr r12
/* 8014557C 001424BC  4E 80 04 21 */	bctrl 
/* 80145580 001424C0  90 61 00 44 */	stw r3, 0x44(r1)
/* 80145584 001424C4  48 00 01 D4 */	b .L_80145758
.L_80145588:
/* 80145588 001424C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014558C 001424CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80145590 001424D0  7D 89 03 A6 */	mtctr r12
/* 80145594 001424D4  4E 80 04 21 */	bctrl 
/* 80145598 001424D8  90 61 00 44 */	stw r3, 0x44(r1)
/* 8014559C 001424DC  48 00 00 58 */	b .L_801455F4
.L_801455A0:
/* 801455A0 001424E0  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801455A4 001424E4  80 81 00 44 */	lwz r4, 0x44(r1)
/* 801455A8 001424E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801455AC 001424EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801455B0 001424F0  7D 89 03 A6 */	mtctr r12
/* 801455B4 001424F4  4E 80 04 21 */	bctrl 
/* 801455B8 001424F8  7C 64 1B 78 */	mr r4, r3
/* 801455BC 001424FC  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801455C0 00142500  81 83 00 00 */	lwz r12, 0(r3)
/* 801455C4 00142504  81 8C 00 08 */	lwz r12, 8(r12)
/* 801455C8 00142508  7D 89 03 A6 */	mtctr r12
/* 801455CC 0014250C  4E 80 04 21 */	bctrl 
/* 801455D0 00142510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801455D4 00142514  40 82 01 84 */	bne .L_80145758
/* 801455D8 00142518  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801455DC 0014251C  80 81 00 44 */	lwz r4, 0x44(r1)
/* 801455E0 00142520  81 83 00 00 */	lwz r12, 0(r3)
/* 801455E4 00142524  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801455E8 00142528  7D 89 03 A6 */	mtctr r12
/* 801455EC 0014252C  4E 80 04 21 */	bctrl 
/* 801455F0 00142530  90 61 00 44 */	stw r3, 0x44(r1)
.L_801455F4:
/* 801455F4 00142534  81 81 00 40 */	lwz r12, 0x40(r1)
/* 801455F8 00142538  38 61 00 40 */	addi r3, r1, 0x40
/* 801455FC 0014253C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80145600 00142540  7D 89 03 A6 */	mtctr r12
/* 80145604 00142544  4E 80 04 21 */	bctrl 
/* 80145608 00142548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014560C 0014254C  41 82 FF 94 */	beq .L_801455A0
/* 80145610 00142550  48 00 01 48 */	b .L_80145758
.L_80145614:
/* 80145614 00142554  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80145618 00142558  81 83 00 00 */	lwz r12, 0(r3)
/* 8014561C 0014255C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80145620 00142560  7D 89 03 A6 */	mtctr r12
/* 80145624 00142564  4E 80 04 21 */	bctrl 
/* 80145628 00142568  7C 60 1B 78 */	mr r0, r3
/* 8014562C 0014256C  7C 11 03 78 */	mr r17, r0
/* 80145630 00142570  48 00 39 05 */	bl getStateID__Q24Game4PikiFv
/* 80145634 00142574  80 71 02 90 */	lwz r3, 0x290(r17)
/* 80145638 00142578  28 03 00 00 */	cmplwi r3, 0
/* 8014563C 0014257C  41 82 00 1C */	beq .L_80145658
/* 80145640 00142580  81 83 00 00 */	lwz r12, 0(r3)
/* 80145644 00142584  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80145648 00142588  7D 89 03 A6 */	mtctr r12
/* 8014564C 0014258C  4E 80 04 21 */	bctrl 
/* 80145650 00142590  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145654 00142594  41 82 00 48 */	beq .L_8014569C
.L_80145658:
/* 80145658 00142598  7E 23 8B 78 */	mr r3, r17
/* 8014565C 0014259C  81 91 00 00 */	lwz r12, 0(r17)
/* 80145660 001425A0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80145664 001425A4  7D 89 03 A6 */	mtctr r12
/* 80145668 001425A8  4E 80 04 21 */	bctrl 
/* 8014566C 001425AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145670 001425B0  41 82 00 2C */	beq .L_8014569C
/* 80145674 001425B4  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80145678 001425B8  80 81 00 44 */	lwz r4, 0x44(r1)
/* 8014567C 001425BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80145680 001425C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80145684 001425C4  7D 89 03 A6 */	mtctr r12
/* 80145688 001425C8  4E 80 04 21 */	bctrl 
/* 8014568C 001425CC  38 81 01 08 */	addi r4, r1, 0x108
/* 80145690 001425D0  3B FF 00 01 */	addi r31, r31, 1
/* 80145694 001425D4  7C 64 E9 2E */	stwx r3, r4, r29
/* 80145698 001425D8  3B BD 00 04 */	addi r29, r29, 4
.L_8014569C:
/* 8014569C 001425DC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 801456A0 001425E0  28 00 00 00 */	cmplwi r0, 0
/* 801456A4 001425E4  40 82 00 24 */	bne .L_801456C8
/* 801456A8 001425E8  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801456AC 001425EC  80 81 00 44 */	lwz r4, 0x44(r1)
/* 801456B0 001425F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801456B4 001425F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801456B8 001425F8  7D 89 03 A6 */	mtctr r12
/* 801456BC 001425FC  4E 80 04 21 */	bctrl 
/* 801456C0 00142600  90 61 00 44 */	stw r3, 0x44(r1)
/* 801456C4 00142604  48 00 00 94 */	b .L_80145758
.L_801456C8:
/* 801456C8 00142608  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801456CC 0014260C  80 81 00 44 */	lwz r4, 0x44(r1)
/* 801456D0 00142610  81 83 00 00 */	lwz r12, 0(r3)
/* 801456D4 00142614  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801456D8 00142618  7D 89 03 A6 */	mtctr r12
/* 801456DC 0014261C  4E 80 04 21 */	bctrl 
/* 801456E0 00142620  90 61 00 44 */	stw r3, 0x44(r1)
/* 801456E4 00142624  48 00 00 58 */	b .L_8014573C
.L_801456E8:
/* 801456E8 00142628  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801456EC 0014262C  80 81 00 44 */	lwz r4, 0x44(r1)
/* 801456F0 00142630  81 83 00 00 */	lwz r12, 0(r3)
/* 801456F4 00142634  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801456F8 00142638  7D 89 03 A6 */	mtctr r12
/* 801456FC 0014263C  4E 80 04 21 */	bctrl 
/* 80145700 00142640  7C 64 1B 78 */	mr r4, r3
/* 80145704 00142644  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80145708 00142648  81 83 00 00 */	lwz r12, 0(r3)
/* 8014570C 0014264C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80145710 00142650  7D 89 03 A6 */	mtctr r12
/* 80145714 00142654  4E 80 04 21 */	bctrl 
/* 80145718 00142658  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014571C 0014265C  40 82 00 3C */	bne .L_80145758
/* 80145720 00142660  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80145724 00142664  80 81 00 44 */	lwz r4, 0x44(r1)
/* 80145728 00142668  81 83 00 00 */	lwz r12, 0(r3)
/* 8014572C 0014266C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80145730 00142670  7D 89 03 A6 */	mtctr r12
/* 80145734 00142674  4E 80 04 21 */	bctrl 
/* 80145738 00142678  90 61 00 44 */	stw r3, 0x44(r1)
.L_8014573C:
/* 8014573C 0014267C  81 81 00 40 */	lwz r12, 0x40(r1)
/* 80145740 00142680  38 61 00 40 */	addi r3, r1, 0x40
/* 80145744 00142684  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80145748 00142688  7D 89 03 A6 */	mtctr r12
/* 8014574C 0014268C  4E 80 04 21 */	bctrl 
/* 80145750 00142690  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145754 00142694  41 82 FF 94 */	beq .L_801456E8
.L_80145758:
/* 80145758 00142698  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8014575C 0014269C  81 83 00 00 */	lwz r12, 0(r3)
/* 80145760 001426A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80145764 001426A4  7D 89 03 A6 */	mtctr r12
/* 80145768 001426A8  4E 80 04 21 */	bctrl 
/* 8014576C 001426AC  80 81 00 44 */	lwz r4, 0x44(r1)
/* 80145770 001426B0  7C 04 18 40 */	cmplw r4, r3
/* 80145774 001426B4  40 82 FE A0 */	bne .L_80145614
/* 80145778 001426B8  56 A0 06 3F */	clrlwi. r0, r21, 0x18
/* 8014577C 001426BC  40 82 00 0C */	bne .L_80145788
/* 80145780 001426C0  2C 1F 00 00 */	cmpwi r31, 0
/* 80145784 001426C4  40 81 00 0C */	ble .L_80145790
.L_80145788:
/* 80145788 001426C8  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8014578C 001426CC  48 31 D6 D9 */	bl playKaisanSE__Q23PSM4NaviFv
.L_80145790:
/* 80145790 001426D0  2C 1F 00 00 */	cmpwi r31, 0
/* 80145794 001426D4  40 82 00 0C */	bne .L_801457A0
/* 80145798 001426D8  7E A3 AB 78 */	mr r3, r21
/* 8014579C 001426DC  48 00 06 18 */	b .L_80145DB4
.L_801457A0:
/* 801457A0 001426E0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 801457A4 001426E4  38 00 00 00 */	li r0, 0
/* 801457A8 001426E8  3A C1 00 A8 */	addi r22, r1, 0xa8
/* 801457AC 001426EC  3A E1 00 88 */	addi r23, r1, 0x88
/* 801457B0 001426F0  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 801457B4 001426F4  7E F2 BB 78 */	mr r18, r23
/* 801457B8 001426F8  7E D3 B3 78 */	mr r19, r22
/* 801457BC 001426FC  3A A0 00 00 */	li r21, 0
/* 801457C0 00142700  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 801457C4 00142704  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 801457C8 00142708  90 01 00 88 */	stw r0, 0x88(r1)
/* 801457CC 0014270C  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801457D0 00142710  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 801457D4 00142714  D0 01 00 BC */	stfs f0, 0xbc(r1)
/* 801457D8 00142718  90 01 00 8C */	stw r0, 0x8c(r1)
/* 801457DC 0014271C  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 801457E0 00142720  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 801457E4 00142724  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 801457E8 00142728  90 01 00 90 */	stw r0, 0x90(r1)
/* 801457EC 0014272C  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 801457F0 00142730  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 801457F4 00142734  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 801457F8 00142738  90 01 00 94 */	stw r0, 0x94(r1)
/* 801457FC 0014273C  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80145800 00142740  D0 01 00 DC */	stfs f0, 0xdc(r1)
/* 80145804 00142744  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 80145808 00142748  90 01 00 98 */	stw r0, 0x98(r1)
/* 8014580C 0014274C  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 80145810 00142750  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 80145814 00142754  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 80145818 00142758  90 01 00 9C */	stw r0, 0x9c(r1)
/* 8014581C 0014275C  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 80145820 00142760  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 80145824 00142764  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 80145828 00142768  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8014582C 0014276C  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80145830 00142770  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80145834 00142774  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80145838 00142778  90 01 00 A4 */	stw r0, 0xa4(r1)
.L_8014583C:
/* 8014583C 0014277C  3A 21 01 08 */	addi r17, r1, 0x108
/* 80145840 00142780  3A 80 00 00 */	li r20, 0
/* 80145844 00142784  48 00 00 D8 */	b .L_8014591C
.L_80145848:
/* 80145848 00142788  2C 15 00 02 */	cmpwi r21, 2
/* 8014584C 0014278C  41 82 00 68 */	beq .L_801458B4
/* 80145850 00142790  80 91 00 00 */	lwz r4, 0(r17)
/* 80145854 00142794  88 04 02 B8 */	lbz r0, 0x2b8(r4)
/* 80145858 00142798  7C 15 00 00 */	cmpw r21, r0
/* 8014585C 0014279C  40 82 00 B8 */	bne .L_80145914
/* 80145860 001427A0  81 84 00 00 */	lwz r12, 0(r4)
/* 80145864 001427A4  38 61 00 34 */	addi r3, r1, 0x34
/* 80145868 001427A8  80 B2 00 00 */	lwz r5, 0(r18)
/* 8014586C 001427AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80145870 001427B0  38 05 00 01 */	addi r0, r5, 1
/* 80145874 001427B4  90 12 00 00 */	stw r0, 0(r18)
/* 80145878 001427B8  7D 89 03 A6 */	mtctr r12
/* 8014587C 001427BC  4E 80 04 21 */	bctrl 
/* 80145880 001427C0  C0 53 00 00 */	lfs f2, 0(r19)
/* 80145884 001427C4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80145888 001427C8  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8014588C 001427CC  EC 42 00 2A */	fadds f2, f2, f0
/* 80145890 001427D0  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80145894 001427D4  D0 53 00 00 */	stfs f2, 0(r19)
/* 80145898 001427D8  C0 53 00 04 */	lfs f2, 4(r19)
/* 8014589C 001427DC  EC 22 08 2A */	fadds f1, f2, f1
/* 801458A0 001427E0  D0 33 00 04 */	stfs f1, 4(r19)
/* 801458A4 001427E4  C0 33 00 08 */	lfs f1, 8(r19)
/* 801458A8 001427E8  EC 01 00 2A */	fadds f0, f1, f0
/* 801458AC 001427EC  D0 13 00 08 */	stfs f0, 8(r19)
/* 801458B0 001427F0  48 00 00 64 */	b .L_80145914
.L_801458B4:
/* 801458B4 001427F4  80 91 00 00 */	lwz r4, 0(r17)
/* 801458B8 001427F8  88 04 02 B8 */	lbz r0, 0x2b8(r4)
/* 801458BC 001427FC  2C 00 00 02 */	cmpwi r0, 2
/* 801458C0 00142800  40 82 00 54 */	bne .L_80145914
/* 801458C4 00142804  81 84 00 00 */	lwz r12, 0(r4)
/* 801458C8 00142808  38 61 00 28 */	addi r3, r1, 0x28
/* 801458CC 0014280C  80 A1 00 90 */	lwz r5, 0x90(r1)
/* 801458D0 00142810  81 8C 00 08 */	lwz r12, 8(r12)
/* 801458D4 00142814  38 05 00 01 */	addi r0, r5, 1
/* 801458D8 00142818  90 01 00 90 */	stw r0, 0x90(r1)
/* 801458DC 0014281C  7D 89 03 A6 */	mtctr r12
/* 801458E0 00142820  4E 80 04 21 */	bctrl 
/* 801458E4 00142824  C0 21 00 C0 */	lfs f1, 0xc0(r1)
/* 801458E8 00142828  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801458EC 0014282C  C0 61 00 C4 */	lfs f3, 0xc4(r1)
/* 801458F0 00142830  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801458F4 00142834  EC 81 00 2A */	fadds f4, f1, f0
/* 801458F8 00142838  C0 21 00 C8 */	lfs f1, 0xc8(r1)
/* 801458FC 0014283C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80145900 00142840  EC 43 10 2A */	fadds f2, f3, f2
/* 80145904 00142844  D0 81 00 C0 */	stfs f4, 0xc0(r1)
/* 80145908 00142848  EC 01 00 2A */	fadds f0, f1, f0
/* 8014590C 0014284C  D0 41 00 C4 */	stfs f2, 0xc4(r1)
/* 80145910 00142850  D0 01 00 C8 */	stfs f0, 0xc8(r1)
.L_80145914:
/* 80145914 00142854  3A 31 00 04 */	addi r17, r17, 4
/* 80145918 00142858  3A 94 00 01 */	addi r20, r20, 1
.L_8014591C:
/* 8014591C 0014285C  7C 14 F8 00 */	cmpw r20, r31
/* 80145920 00142860  41 80 FF 28 */	blt .L_80145848
/* 80145924 00142864  3A B5 00 01 */	addi r21, r21, 1
/* 80145928 00142868  3A 73 00 0C */	addi r19, r19, 0xc
/* 8014592C 0014286C  2C 15 00 08 */	cmpwi r21, 8
/* 80145930 00142870  3A 52 00 04 */	addi r18, r18, 4
/* 80145934 00142874  41 80 FF 08 */	blt .L_8014583C
/* 80145938 00142878  3A A1 00 68 */	addi r21, r1, 0x68
/* 8014593C 0014287C  7E F1 BB 78 */	mr r17, r23
/* 80145940 00142880  7E D2 B3 78 */	mr r18, r22
/* 80145944 00142884  3A 80 00 00 */	li r20, 0
/* 80145948 00142888  7E B3 AB 78 */	mr r19, r21
.L_8014594C:
/* 8014594C 0014288C  80 11 00 00 */	lwz r0, 0(r17)
/* 80145950 00142890  2C 00 00 00 */	cmpwi r0, 0
/* 80145954 00142894  40 81 00 6C */	ble .L_801459C0
/* 80145958 00142898  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 8014595C 0014289C  3C 00 43 30 */	lis r0, 0x4330
/* 80145960 001428A0  90 61 02 9C */	stw r3, 0x29c(r1)
/* 80145964 001428A4  C8 62 A0 70 */	lfd f3, lbl_805183D0@sda21(r2)
/* 80145968 001428A8  90 01 02 98 */	stw r0, 0x298(r1)
/* 8014596C 001428AC  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
/* 80145970 001428B0  C8 01 02 98 */	lfd f0, 0x298(r1)
/* 80145974 001428B4  C0 32 00 00 */	lfs f1, 0(r18)
/* 80145978 001428B8  EC 00 18 28 */	fsubs f0, f0, f3
/* 8014597C 001428BC  90 61 02 A4 */	stw r3, 0x2a4(r1)
/* 80145980 001428C0  90 01 02 A0 */	stw r0, 0x2a0(r1)
/* 80145984 001428C4  EC 82 00 24 */	fdivs f4, f2, f0
/* 80145988 001428C8  C8 01 02 A0 */	lfd f0, 0x2a0(r1)
/* 8014598C 001428CC  EC 41 01 32 */	fmuls f2, f1, f4
/* 80145990 001428D0  EC 20 18 28 */	fsubs f1, f0, f3
/* 80145994 001428D4  D0 52 00 00 */	stfs f2, 0(r18)
/* 80145998 001428D8  C0 12 00 04 */	lfs f0, 4(r18)
/* 8014599C 001428DC  EC 00 01 32 */	fmuls f0, f0, f4
/* 801459A0 001428E0  D0 12 00 04 */	stfs f0, 4(r18)
/* 801459A4 001428E4  C0 12 00 08 */	lfs f0, 8(r18)
/* 801459A8 001428E8  EC 00 01 32 */	fmuls f0, f0, f4
/* 801459AC 001428EC  D0 12 00 08 */	stfs f0, 8(r18)
/* 801459B0 001428F0  48 2C BE 55 */	bl pikmin2_sqrtf__Ff
/* 801459B4 001428F4  C0 02 A0 7C */	lfs f0, lbl_805183DC@sda21(r2)
/* 801459B8 001428F8  EC 00 00 72 */	fmuls f0, f0, f1
/* 801459BC 001428FC  D0 13 00 00 */	stfs f0, 0(r19)
.L_801459C0:
/* 801459C0 00142900  3A 94 00 01 */	addi r20, r20, 1
/* 801459C4 00142904  3A 52 00 0C */	addi r18, r18, 0xc
/* 801459C8 00142908  2C 14 00 08 */	cmpwi r20, 8
/* 801459CC 0014290C  3A 73 00 04 */	addi r19, r19, 4
/* 801459D0 00142910  3A 31 00 04 */	addi r17, r17, 4
/* 801459D4 00142914  41 80 FF 78 */	blt .L_8014594C
/* 801459D8 00142918  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801459DC 0014291C  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 801459E0 00142920  81 83 00 00 */	lwz r12, 0(r3)
/* 801459E4 00142924  20 80 00 01 */	subfic r4, r0, 1
/* 801459E8 00142928  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801459EC 0014292C  7D 89 03 A6 */	mtctr r12
/* 801459F0 00142930  4E 80 04 21 */	bctrl 
/* 801459F4 00142934  3A 60 00 00 */	li r19, 0
/* 801459F8 00142938  7C 74 1B 78 */	mr r20, r3
.L_801459FC:
/* 801459FC 0014293C  7E FA BB 78 */	mr r26, r23
/* 80145A00 00142940  7E D9 B3 78 */	mr r25, r22
/* 80145A04 00142944  7E B8 AB 78 */	mr r24, r21
/* 80145A08 00142948  3A 40 00 00 */	li r18, 0
.L_80145A0C:
/* 80145A0C 0014294C  80 1A 00 00 */	lwz r0, 0(r26)
/* 80145A10 00142950  2C 00 00 00 */	cmpwi r0, 0
/* 80145A14 00142954  40 81 01 A8 */	ble .L_80145BBC
/* 80145A18 00142958  7F C4 F3 78 */	mr r4, r30
/* 80145A1C 0014295C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80145A20 00142960  81 9E 00 00 */	lwz r12, 0(r30)
/* 80145A24 00142964  81 8C 00 08 */	lwz r12, 8(r12)
/* 80145A28 00142968  7D 89 03 A6 */	mtctr r12
/* 80145A2C 0014296C  4E 80 04 21 */	bctrl 
/* 80145A30 00142970  C0 59 00 04 */	lfs f2, 4(r25)
/* 80145A34 00142974  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80145A38 00142978  C0 39 00 00 */	lfs f1, 0(r25)
/* 80145A3C 0014297C  EF C2 00 28 */	fsubs f30, f2, f0
/* 80145A40 00142980  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80145A44 00142984  C0 59 00 08 */	lfs f2, 8(r25)
/* 80145A48 00142988  EF E1 00 28 */	fsubs f31, f1, f0
/* 80145A4C 0014298C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80145A50 00142990  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80145A54 00142994  EF A2 08 28 */	fsubs f29, f2, f1
/* 80145A58 00142998  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 80145A5C 0014299C  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 80145A60 001429A0  48 2C BD A5 */	bl pikmin2_sqrtf__Ff
/* 80145A64 001429A4  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80145A68 001429A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145A6C 001429AC  40 81 00 1C */	ble .L_80145A88
/* 80145A70 001429B0  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80145A74 001429B4  EC 00 08 24 */	fdivs f0, f0, f1
/* 80145A78 001429B8  EF FF 00 32 */	fmuls f31, f31, f0
/* 80145A7C 001429BC  EF DE 00 32 */	fmuls f30, f30, f0
/* 80145A80 001429C0  EF BD 00 32 */	fmuls f29, f29, f0
/* 80145A84 001429C4  48 00 00 08 */	b .L_80145A8C
.L_80145A88:
/* 80145A88 001429C8  FC 20 00 90 */	fmr f1, f0
.L_80145A8C:
/* 80145A8C 001429CC  C0 18 00 00 */	lfs f0, 0(r24)
/* 80145A90 001429D0  C0 42 A0 10 */	lfs f2, lbl_80518370@sda21(r2)
/* 80145A94 001429D4  EC 21 00 28 */	fsubs f1, f1, f0
/* 80145A98 001429D8  C0 02 A0 78 */	lfs f0, lbl_805183D8@sda21(r2)
/* 80145A9C 001429DC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80145AA0 001429E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145AA4 001429E4  40 80 00 38 */	bge .L_80145ADC
/* 80145AA8 001429E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 80145AAC 001429EC  C0 79 00 00 */	lfs f3, 0(r25)
/* 80145AB0 001429F0  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80145AB4 001429F4  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80145AB8 001429F8  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80145ABC 001429FC  EC 43 10 2A */	fadds f2, f3, f2
/* 80145AC0 00142A00  D0 59 00 00 */	stfs f2, 0(r25)
/* 80145AC4 00142A04  C0 59 00 04 */	lfs f2, 4(r25)
/* 80145AC8 00142A08  EC 22 08 2A */	fadds f1, f2, f1
/* 80145ACC 00142A0C  D0 39 00 04 */	stfs f1, 4(r25)
/* 80145AD0 00142A10  C0 39 00 08 */	lfs f1, 8(r25)
/* 80145AD4 00142A14  EC 01 00 2A */	fadds f0, f1, f0
/* 80145AD8 00142A18  D0 19 00 08 */	stfs f0, 8(r25)
.L_80145ADC:
/* 80145ADC 00142A1C  7E 83 A3 78 */	mr r3, r20
/* 80145AE0 00142A20  81 94 00 00 */	lwz r12, 0(r20)
/* 80145AE4 00142A24  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80145AE8 00142A28  7D 89 03 A6 */	mtctr r12
/* 80145AEC 00142A2C  4E 80 04 21 */	bctrl 
/* 80145AF0 00142A30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145AF4 00142A34  41 82 00 C8 */	beq .L_80145BBC
/* 80145AF8 00142A38  7E 84 A3 78 */	mr r4, r20
/* 80145AFC 00142A3C  38 61 00 10 */	addi r3, r1, 0x10
/* 80145B00 00142A40  81 94 00 00 */	lwz r12, 0(r20)
/* 80145B04 00142A44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80145B08 00142A48  7D 89 03 A6 */	mtctr r12
/* 80145B0C 00142A4C  4E 80 04 21 */	bctrl 
/* 80145B10 00142A50  C0 59 00 04 */	lfs f2, 4(r25)
/* 80145B14 00142A54  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80145B18 00142A58  C0 39 00 00 */	lfs f1, 0(r25)
/* 80145B1C 00142A5C  EF C2 00 28 */	fsubs f30, f2, f0
/* 80145B20 00142A60  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80145B24 00142A64  C0 59 00 08 */	lfs f2, 8(r25)
/* 80145B28 00142A68  EF A1 00 28 */	fsubs f29, f1, f0
/* 80145B2C 00142A6C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80145B30 00142A70  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80145B34 00142A74  EF E2 08 28 */	fsubs f31, f2, f1
/* 80145B38 00142A78  EC 1D 07 7A */	fmadds f0, f29, f29, f0
/* 80145B3C 00142A7C  EC 3F 07 FA */	fmadds f1, f31, f31, f0
/* 80145B40 00142A80  48 2C BC C5 */	bl pikmin2_sqrtf__Ff
/* 80145B44 00142A84  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80145B48 00142A88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145B4C 00142A8C  40 81 00 1C */	ble .L_80145B68
/* 80145B50 00142A90  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80145B54 00142A94  EC 00 08 24 */	fdivs f0, f0, f1
/* 80145B58 00142A98  EF BD 00 32 */	fmuls f29, f29, f0
/* 80145B5C 00142A9C  EF DE 00 32 */	fmuls f30, f30, f0
/* 80145B60 00142AA0  EF FF 00 32 */	fmuls f31, f31, f0
/* 80145B64 00142AA4  48 00 00 08 */	b .L_80145B6C
.L_80145B68:
/* 80145B68 00142AA8  FC 20 00 90 */	fmr f1, f0
.L_80145B6C:
/* 80145B6C 00142AAC  C0 18 00 00 */	lfs f0, 0(r24)
/* 80145B70 00142AB0  C0 42 A0 10 */	lfs f2, lbl_80518370@sda21(r2)
/* 80145B74 00142AB4  EC 21 00 28 */	fsubs f1, f1, f0
/* 80145B78 00142AB8  C0 02 A0 78 */	lfs f0, lbl_805183D8@sda21(r2)
/* 80145B7C 00142ABC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80145B80 00142AC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145B84 00142AC4  40 80 00 38 */	bge .L_80145BBC
/* 80145B88 00142AC8  EC 00 08 28 */	fsubs f0, f0, f1
/* 80145B8C 00142ACC  C0 79 00 00 */	lfs f3, 0(r25)
/* 80145B90 00142AD0  EC 5D 00 32 */	fmuls f2, f29, f0
/* 80145B94 00142AD4  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80145B98 00142AD8  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80145B9C 00142ADC  EC 43 10 2A */	fadds f2, f3, f2
/* 80145BA0 00142AE0  D0 59 00 00 */	stfs f2, 0(r25)
/* 80145BA4 00142AE4  C0 59 00 04 */	lfs f2, 4(r25)
/* 80145BA8 00142AE8  EC 22 08 2A */	fadds f1, f2, f1
/* 80145BAC 00142AEC  D0 39 00 04 */	stfs f1, 4(r25)
/* 80145BB0 00142AF0  C0 39 00 08 */	lfs f1, 8(r25)
/* 80145BB4 00142AF4  EC 01 00 2A */	fadds f0, f1, f0
/* 80145BB8 00142AF8  D0 19 00 08 */	stfs f0, 8(r25)
.L_80145BBC:
/* 80145BBC 00142AFC  3A 32 00 01 */	addi r17, r18, 1
/* 80145BC0 00142B00  3B A1 00 88 */	addi r29, r1, 0x88
/* 80145BC4 00142B04  1C 11 00 0C */	mulli r0, r17, 0xc
/* 80145BC8 00142B08  3B 81 00 A8 */	addi r28, r1, 0xa8
/* 80145BCC 00142B0C  56 23 10 3A */	slwi r3, r17, 2
/* 80145BD0 00142B10  3B 61 00 68 */	addi r27, r1, 0x68
/* 80145BD4 00142B14  7F BD 1A 14 */	add r29, r29, r3
/* 80145BD8 00142B18  7F 9C 02 14 */	add r28, r28, r0
/* 80145BDC 00142B1C  7F 7B 1A 14 */	add r27, r27, r3
/* 80145BE0 00142B20  48 00 00 FC */	b .L_80145CDC
.L_80145BE4:
/* 80145BE4 00142B24  80 1A 00 00 */	lwz r0, 0(r26)
/* 80145BE8 00142B28  2C 00 00 00 */	cmpwi r0, 0
/* 80145BEC 00142B2C  40 81 00 E0 */	ble .L_80145CCC
/* 80145BF0 00142B30  80 1D 00 00 */	lwz r0, 0(r29)
/* 80145BF4 00142B34  2C 00 00 00 */	cmpwi r0, 0
/* 80145BF8 00142B38  40 81 00 D4 */	ble .L_80145CCC
/* 80145BFC 00142B3C  C0 59 00 04 */	lfs f2, 4(r25)
/* 80145C00 00142B40  C0 1C 00 04 */	lfs f0, 4(r28)
/* 80145C04 00142B44  C0 39 00 00 */	lfs f1, 0(r25)
/* 80145C08 00142B48  EF C2 00 28 */	fsubs f30, f2, f0
/* 80145C0C 00142B4C  C0 1C 00 00 */	lfs f0, 0(r28)
/* 80145C10 00142B50  C0 59 00 08 */	lfs f2, 8(r25)
/* 80145C14 00142B54  EF A1 00 28 */	fsubs f29, f1, f0
/* 80145C18 00142B58  C0 3C 00 08 */	lfs f1, 8(r28)
/* 80145C1C 00142B5C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80145C20 00142B60  EF E2 08 28 */	fsubs f31, f2, f1
/* 80145C24 00142B64  EC 1D 07 7A */	fmadds f0, f29, f29, f0
/* 80145C28 00142B68  EC 3F 07 FA */	fmadds f1, f31, f31, f0
/* 80145C2C 00142B6C  48 2C BB D9 */	bl pikmin2_sqrtf__Ff
/* 80145C30 00142B70  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80145C34 00142B74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145C38 00142B78  40 81 00 1C */	ble .L_80145C54
/* 80145C3C 00142B7C  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80145C40 00142B80  EC 00 08 24 */	fdivs f0, f0, f1
/* 80145C44 00142B84  EF BD 00 32 */	fmuls f29, f29, f0
/* 80145C48 00142B88  EF DE 00 32 */	fmuls f30, f30, f0
/* 80145C4C 00142B8C  EF FF 00 32 */	fmuls f31, f31, f0
/* 80145C50 00142B90  48 00 00 08 */	b .L_80145C58
.L_80145C54:
/* 80145C54 00142B94  FC 20 00 90 */	fmr f1, f0
.L_80145C58:
/* 80145C58 00142B98  C0 18 00 00 */	lfs f0, 0(r24)
/* 80145C5C 00142B9C  C0 5B 00 00 */	lfs f2, 0(r27)
/* 80145C60 00142BA0  EC 21 00 28 */	fsubs f1, f1, f0
/* 80145C64 00142BA4  C0 02 A0 78 */	lfs f0, lbl_805183D8@sda21(r2)
/* 80145C68 00142BA8  EC 21 10 28 */	fsubs f1, f1, f2
/* 80145C6C 00142BAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145C70 00142BB0  40 80 00 5C */	bge .L_80145CCC
/* 80145C74 00142BB4  EC 60 08 28 */	fsubs f3, f0, f1
/* 80145C78 00142BB8  C0 19 00 00 */	lfs f0, 0(r25)
/* 80145C7C 00142BBC  EC 3D 00 F2 */	fmuls f1, f29, f3
/* 80145C80 00142BC0  EC 5E 00 F2 */	fmuls f2, f30, f3
/* 80145C84 00142BC4  EC 7F 00 F2 */	fmuls f3, f31, f3
/* 80145C88 00142BC8  EC 00 08 2A */	fadds f0, f0, f1
/* 80145C8C 00142BCC  D0 19 00 00 */	stfs f0, 0(r25)
/* 80145C90 00142BD0  C0 19 00 04 */	lfs f0, 4(r25)
/* 80145C94 00142BD4  EC 00 10 2A */	fadds f0, f0, f2
/* 80145C98 00142BD8  D0 19 00 04 */	stfs f0, 4(r25)
/* 80145C9C 00142BDC  C0 19 00 08 */	lfs f0, 8(r25)
/* 80145CA0 00142BE0  EC 00 18 2A */	fadds f0, f0, f3
/* 80145CA4 00142BE4  D0 19 00 08 */	stfs f0, 8(r25)
/* 80145CA8 00142BE8  C0 1C 00 00 */	lfs f0, 0(r28)
/* 80145CAC 00142BEC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80145CB0 00142BF0  D0 1C 00 00 */	stfs f0, 0(r28)
/* 80145CB4 00142BF4  C0 1C 00 04 */	lfs f0, 4(r28)
/* 80145CB8 00142BF8  EC 00 10 28 */	fsubs f0, f0, f2
/* 80145CBC 00142BFC  D0 1C 00 04 */	stfs f0, 4(r28)
/* 80145CC0 00142C00  C0 1C 00 08 */	lfs f0, 8(r28)
/* 80145CC4 00142C04  EC 00 18 28 */	fsubs f0, f0, f3
/* 80145CC8 00142C08  D0 1C 00 08 */	stfs f0, 8(r28)
.L_80145CCC:
/* 80145CCC 00142C0C  3B BD 00 04 */	addi r29, r29, 4
/* 80145CD0 00142C10  3B 9C 00 0C */	addi r28, r28, 0xc
/* 80145CD4 00142C14  3B 7B 00 04 */	addi r27, r27, 4
/* 80145CD8 00142C18  3A 31 00 01 */	addi r17, r17, 1
.L_80145CDC:
/* 80145CDC 00142C1C  2C 11 00 08 */	cmpwi r17, 8
/* 80145CE0 00142C20  41 80 FF 04 */	blt .L_80145BE4
/* 80145CE4 00142C24  3A 52 00 01 */	addi r18, r18, 1
/* 80145CE8 00142C28  3B 39 00 0C */	addi r25, r25, 0xc
/* 80145CEC 00142C2C  2C 12 00 08 */	cmpwi r18, 8
/* 80145CF0 00142C30  3B 18 00 04 */	addi r24, r24, 4
/* 80145CF4 00142C34  3B 5A 00 04 */	addi r26, r26, 4
/* 80145CF8 00142C38  41 80 FD 14 */	blt .L_80145A0C
/* 80145CFC 00142C3C  3A 73 00 01 */	addi r19, r19, 1
/* 80145D00 00142C40  2C 13 00 04 */	cmpwi r19, 4
/* 80145D04 00142C44  41 80 FC F8 */	blt .L_801459FC
/* 80145D08 00142C48  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 80145D0C 00142C4C  3C 60 80 4B */	lis r3, __vt__Q26PikiAI10ActFreeArg@ha
/* 80145D10 00142C50  3A 81 01 08 */	addi r20, r1, 0x108
/* 80145D14 00142C54  3A 61 00 68 */	addi r19, r1, 0x68
/* 80145D18 00142C58  3A 44 05 30 */	addi r18, r4, __vt__Q26PikiAI9ActionArg@l
/* 80145D1C 00142C5C  3A 23 05 18 */	addi r17, r3, __vt__Q26PikiAI10ActFreeArg@l
/* 80145D20 00142C60  3A A0 00 00 */	li r21, 0
/* 80145D24 00142C64  48 00 00 7C */	b .L_80145DA0
.L_80145D28:
/* 80145D28 00142C68  81 14 00 00 */	lwz r8, 0(r20)
/* 80145D2C 00142C6C  39 21 00 A8 */	addi r9, r1, 0xa8
/* 80145D30 00142C70  38 60 00 01 */	li r3, 1
/* 80145D34 00142C74  38 80 28 00 */	li r4, 0x2800
/* 80145D38 00142C78  88 E8 02 B8 */	lbz r7, 0x2b8(r8)
/* 80145D3C 00142C7C  38 A0 00 5A */	li r5, 0x5a
/* 80145D40 00142C80  38 C0 00 00 */	li r6, 0
/* 80145D44 00142C84  1C 07 00 0C */	mulli r0, r7, 0xc
/* 80145D48 00142C88  54 E7 10 3A */	slwi r7, r7, 2
/* 80145D4C 00142C8C  92 41 00 50 */	stw r18, 0x50(r1)
/* 80145D50 00142C90  7C 73 3C 2E */	lfsx f3, r19, r7
/* 80145D54 00142C94  7D 29 02 14 */	add r9, r9, r0
/* 80145D58 00142C98  92 21 00 50 */	stw r17, 0x50(r1)
/* 80145D5C 00142C9C  C0 49 00 00 */	lfs f2, 0(r9)
/* 80145D60 00142CA0  C0 29 00 04 */	lfs f1, 4(r9)
/* 80145D64 00142CA4  C0 09 00 08 */	lfs f0, 8(r9)
/* 80145D68 00142CA8  98 61 00 54 */	stb r3, 0x54(r1)
/* 80145D6C 00142CAC  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 80145D70 00142CB0  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 80145D74 00142CB4  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80145D78 00142CB8  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80145D7C 00142CBC  80 68 02 50 */	lwz r3, 0x250(r8)
/* 80145D80 00142CC0  48 31 C8 01 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 80145D84 00142CC4  80 74 00 00 */	lwz r3, 0(r20)
/* 80145D88 00142CC8  38 A1 00 50 */	addi r5, r1, 0x50
/* 80145D8C 00142CCC  38 80 00 01 */	li r4, 1
/* 80145D90 00142CD0  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80145D94 00142CD4  48 05 12 01 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80145D98 00142CD8  3A 94 00 04 */	addi r20, r20, 4
/* 80145D9C 00142CDC  3A B5 00 01 */	addi r21, r21, 1
.L_80145DA0:
/* 80145DA0 00142CE0  7C 15 F8 00 */	cmpw r21, r31
/* 80145DA4 00142CE4  41 80 FF 84 */	blt .L_80145D28
/* 80145DA8 00142CE8  38 00 00 3C */	li r0, 0x3c
/* 80145DAC 00142CEC  38 60 00 01 */	li r3, 1
/* 80145DB0 00142CF0  98 1E 02 D4 */	stb r0, 0x2d4(r30)
.L_80145DB4:
/* 80145DB4 00142CF4  E3 E1 03 18 */	psq_l f31, 792(r1), 0, qr0
/* 80145DB8 00142CF8  CB E1 03 10 */	lfd f31, 0x310(r1)
/* 80145DBC 00142CFC  E3 C1 03 08 */	psq_l f30, 776(r1), 0, qr0
/* 80145DC0 00142D00  CB C1 03 00 */	lfd f30, 0x300(r1)
/* 80145DC4 00142D04  E3 A1 02 F8 */	psq_l f29, 760(r1), 0, qr0
/* 80145DC8 00142D08  CB A1 02 F0 */	lfd f29, 0x2f0(r1)
/* 80145DCC 00142D0C  BA 21 02 B4 */	lmw r17, 0x2b4(r1)
/* 80145DD0 00142D10  80 01 03 24 */	lwz r0, 0x324(r1)
/* 80145DD4 00142D14  7C 08 03 A6 */	mtlr r0
/* 80145DD8 00142D18  38 21 03 20 */	addi r1, r1, 0x320
/* 80145DDC 00142D1C  4E 80 00 20 */	blr 
.endfn releasePikis__Q24Game4NaviFv

.fn releasable__Q24Game9PikiStateFv, weak
/* 80145DE0 00142D20  38 60 00 00 */	li r3, 0
/* 80145DE4 00142D24  4E 80 00 20 */	blr 
.endfn releasable__Q24Game9PikiStateFv

.fn makeCStick__Q24Game4NaviFb, global
/* 80145DE8 00142D28  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 80145DEC 00142D2C  7C 08 02 A6 */	mflr r0
/* 80145DF0 00142D30  90 01 01 94 */	stw r0, 0x194(r1)
/* 80145DF4 00142D34  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 80145DF8 00142D38  F3 E1 01 88 */	psq_st f31, 392(r1), 0, qr0
/* 80145DFC 00142D3C  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 80145E00 00142D40  F3 C1 01 78 */	psq_st f30, 376(r1), 0, qr0
/* 80145E04 00142D44  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 80145E08 00142D48  F3 A1 01 68 */	psq_st f29, 360(r1), 0, qr0
/* 80145E0C 00142D4C  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 80145E10 00142D50  F3 81 01 58 */	psq_st f28, 344(r1), 0, qr0
/* 80145E14 00142D54  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 80145E18 00142D58  F3 61 01 48 */	psq_st f27, 328(r1), 0, qr0
/* 80145E1C 00142D5C  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 80145E20 00142D60  F3 41 01 38 */	psq_st f26, 312(r1), 0, qr0
/* 80145E24 00142D64  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 80145E28 00142D68  F3 21 01 28 */	psq_st f25, 296(r1), 0, qr0
/* 80145E2C 00142D6C  DB 01 01 10 */	stfd f24, 0x110(r1)
/* 80145E30 00142D70  F3 01 01 18 */	psq_st f24, 280(r1), 0, qr0
/* 80145E34 00142D74  DA E1 01 00 */	stfd f23, 0x100(r1)
/* 80145E38 00142D78  F2 E1 01 08 */	psq_st f23, 264(r1), 0, qr0
/* 80145E3C 00142D7C  DA C1 00 F0 */	stfd f22, 0xf0(r1)
/* 80145E40 00142D80  F2 C1 00 F8 */	psq_st f22, 248(r1), 0, qr0
/* 80145E44 00142D84  DA A1 00 E0 */	stfd f21, 0xe0(r1)
/* 80145E48 00142D88  F2 A1 00 E8 */	psq_st f21, 232(r1), 0, qr0
/* 80145E4C 00142D8C  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 80145E50 00142D90  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 80145E54 00142D94  7C 7F 1B 78 */	mr r31, r3
/* 80145E58 00142D98  C2 C2 9F F4 */	lfs f22, lbl_80518354@sda21(r2)
/* 80145E5C 00142D9C  80 A3 02 78 */	lwz r5, 0x278(r3)
/* 80145E60 00142DA0  7C 9E 23 78 */	mr r30, r4
/* 80145E64 00142DA4  FE A0 B0 90 */	fmr f21, f22
/* 80145E68 00142DA8  28 05 00 00 */	cmplwi r5, 0
/* 80145E6C 00142DAC  41 82 00 20 */	beq .L_80145E8C
/* 80145E70 00142DB0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80145E74 00142DB4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80145E78 00142DB8  2C 00 00 00 */	cmpwi r0, 0
/* 80145E7C 00142DBC  40 82 00 10 */	bne .L_80145E8C
/* 80145E80 00142DC0  C0 05 00 58 */	lfs f0, 0x58(r5)
/* 80145E84 00142DC4  C2 A5 00 5C */	lfs f21, 0x5c(r5)
/* 80145E88 00142DC8  FE C0 00 50 */	fneg f22, f0
.L_80145E8C:
/* 80145E8C 00142DCC  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80145E90 00142DD0  38 61 00 80 */	addi r3, r1, 0x80
/* 80145E94 00142DD4  48 2D 44 15 */	bl getSideVector__11CullFrustumFv
/* 80145E98 00142DD8  C3 61 00 80 */	lfs f27, 0x80(r1)
/* 80145E9C 00142DDC  38 61 00 74 */	addi r3, r1, 0x74
/* 80145EA0 00142DE0  C3 21 00 88 */	lfs f25, 0x88(r1)
/* 80145EA4 00142DE4  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80145EA8 00142DE8  48 2D 43 E1 */	bl getUpVector__11CullFrustumFv
/* 80145EAC 00142DEC  C3 E1 00 74 */	lfs f31, 0x74(r1)
/* 80145EB0 00142DF0  38 61 00 68 */	addi r3, r1, 0x68
/* 80145EB4 00142DF4  C3 C1 00 78 */	lfs f30, 0x78(r1)
/* 80145EB8 00142DF8  C3 A1 00 7C */	lfs f29, 0x7c(r1)
/* 80145EBC 00142DFC  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80145EC0 00142E00  48 2D 44 15 */	bl getViewVector__11CullFrustumFv
/* 80145EC4 00142E04  C3 42 9F F4 */	lfs f26, lbl_80518354@sda21(r2)
/* 80145EC8 00142E08  C3 01 00 68 */	lfs f24, 0x68(r1)
/* 80145ECC 00142E0C  EC 1B D6 FA */	fmadds f0, f27, f27, f26
/* 80145ED0 00142E10  C3 81 00 6C */	lfs f28, 0x6c(r1)
/* 80145ED4 00142E14  C2 E1 00 70 */	lfs f23, 0x70(r1)
/* 80145ED8 00142E18  EC 39 06 7A */	fmadds f1, f25, f25, f0
/* 80145EDC 00142E1C  48 2C B9 29 */	bl pikmin2_sqrtf__Ff
/* 80145EE0 00142E20  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80145EE4 00142E24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145EE8 00142E28  40 81 00 18 */	ble .L_80145F00
/* 80145EEC 00142E2C  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80145EF0 00142E30  EC 00 08 24 */	fdivs f0, f0, f1
/* 80145EF4 00142E34  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80145EF8 00142E38  EF 5A 00 32 */	fmuls f26, f26, f0
/* 80145EFC 00142E3C  EF 39 00 32 */	fmuls f25, f25, f0
.L_80145F00:
/* 80145F00 00142E40  FC 1E E0 40 */	fcmpo cr0, f30, f28
/* 80145F04 00142E44  40 81 00 08 */	ble .L_80145F0C
/* 80145F08 00142E48  48 00 00 0C */	b .L_80145F14
.L_80145F0C:
/* 80145F0C 00142E4C  FF 00 F8 90 */	fmr f24, f31
/* 80145F10 00142E50  FE E0 E8 90 */	fmr f23, f29
.L_80145F14:
/* 80145F14 00142E54  C3 82 9F F4 */	lfs f28, lbl_80518354@sda21(r2)
/* 80145F18 00142E58  EC 18 E6 3A */	fmadds f0, f24, f24, f28
/* 80145F1C 00142E5C  EC 37 05 FA */	fmadds f1, f23, f23, f0
/* 80145F20 00142E60  48 2C B8 E5 */	bl pikmin2_sqrtf__Ff
/* 80145F24 00142E64  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80145F28 00142E68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145F2C 00142E6C  40 81 00 18 */	ble .L_80145F44
/* 80145F30 00142E70  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80145F34 00142E74  EC 00 08 24 */	fdivs f0, f0, f1
/* 80145F38 00142E78  EF 18 00 32 */	fmuls f24, f24, f0
/* 80145F3C 00142E7C  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80145F40 00142E80  EE F7 00 32 */	fmuls f23, f23, f0
.L_80145F44:
/* 80145F44 00142E84  EC BB 05 B2 */	fmuls f5, f27, f22
/* 80145F48 00142E88  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80145F4C 00142E8C  EC 98 05 72 */	fmuls f4, f24, f21
/* 80145F50 00142E90  EC 17 05 72 */	fmuls f0, f23, f21
/* 80145F54 00142E94  EC 39 05 B2 */	fmuls f1, f25, f22
/* 80145F58 00142E98  EC 7A 05 B2 */	fmuls f3, f26, f22
/* 80145F5C 00142E9C  EC 5C 05 72 */	fmuls f2, f28, f21
/* 80145F60 00142EA0  EE E5 20 2A */	fadds f23, f5, f4
/* 80145F64 00142EA4  EF 21 00 2A */	fadds f25, f1, f0
/* 80145F68 00142EA8  EF 03 10 2A */	fadds f24, f3, f2
/* 80145F6C 00142EAC  41 82 00 10 */	beq .L_80145F7C
/* 80145F70 00142EB0  C2 E2 9F F4 */	lfs f23, lbl_80518354@sda21(r2)
/* 80145F74 00142EB4  FF 00 B8 90 */	fmr f24, f23
/* 80145F78 00142EB8  FF 20 B8 90 */	fmr f25, f23
.L_80145F7C:
/* 80145F7C 00142EBC  EC 18 06 32 */	fmuls f0, f24, f24
/* 80145F80 00142EC0  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 80145F84 00142EC4  38 00 00 00 */	li r0, 0
/* 80145F88 00142EC8  D0 3F 02 EC */	stfs f1, 0x2ec(r31)
/* 80145F8C 00142ECC  EC 17 05 FA */	fmadds f0, f23, f23, f0
/* 80145F90 00142ED0  D0 3F 02 F0 */	stfs f1, 0x2f0(r31)
/* 80145F94 00142ED4  EF 99 06 7A */	fmadds f28, f25, f25, f0
/* 80145F98 00142ED8  D0 3F 02 F4 */	stfs f1, 0x2f4(r31)
/* 80145F9C 00142EDC  98 1F 03 0D */	stb r0, 0x30d(r31)
/* 80145FA0 00142EE0  FC 20 E0 90 */	fmr f1, f28
/* 80145FA4 00142EE4  48 2C B8 61 */	bl pikmin2_sqrtf__Ff
/* 80145FA8 00142EE8  C0 02 A0 80 */	lfs f0, lbl_805183E0@sda21(r2)
/* 80145FAC 00142EEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145FB0 00142EF0  40 81 01 70 */	ble .L_80146120
/* 80145FB4 00142EF4  38 00 00 01 */	li r0, 1
/* 80145FB8 00142EF8  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80145FBC 00142EFC  98 1F 03 0D */	stb r0, 0x30d(r31)
/* 80145FC0 00142F00  FC 20 B8 90 */	fmr f1, f23
/* 80145FC4 00142F04  FC 40 C8 90 */	fmr f2, f25
/* 80145FC8 00142F08  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 80145FCC 00142F0C  D2 FF 02 EC */	stfs f23, 0x2ec(r31)
/* 80145FD0 00142F10  D3 1F 02 F0 */	stfs f24, 0x2f0(r31)
/* 80145FD4 00142F14  D3 3F 02 F4 */	stfs f25, 0x2f4(r31)
/* 80145FD8 00142F18  48 2C B8 05 */	bl pikmin2_atan2f__Fff
/* 80145FDC 00142F1C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80145FE0 00142F20  FF A0 08 90 */	fmr f29, f1
/* 80145FE4 00142F24  C3 C3 00 F0 */	lfs f30, 0xf0(r3)
/* 80145FE8 00142F28  48 2C B7 B1 */	bl pikmin2_cosf__Ff
/* 80145FEC 00142F2C  FF 60 08 90 */	fmr f27, f1
/* 80145FF0 00142F30  FC 20 E8 90 */	fmr f1, f29
/* 80145FF4 00142F34  48 2C B7 3D */	bl pikmin2_sinf__Ff
/* 80145FF8 00142F38  FF 40 08 90 */	fmr f26, f1
/* 80145FFC 00142F3C  FC 20 F0 90 */	fmr f1, f30
/* 80146000 00142F40  48 2C B7 99 */	bl pikmin2_cosf__Ff
/* 80146004 00142F44  FE C0 08 90 */	fmr f22, f1
/* 80146008 00142F48  FC 20 F0 90 */	fmr f1, f30
/* 8014600C 00142F4C  48 2C B7 25 */	bl pikmin2_sinf__Ff
/* 80146010 00142F50  FE A0 08 90 */	fmr f21, f1
/* 80146014 00142F54  C0 22 A0 88 */	lfs f1, lbl_805183E8@sda21(r2)
/* 80146018 00142F58  48 2C B7 81 */	bl pikmin2_cosf__Ff
/* 8014601C 00142F5C  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80146020 00142F60  EC 1A 05 7A */	fmadds f0, f26, f21, f0
/* 80146024 00142F64  EC 1B 05 BA */	fmadds f0, f27, f22, f0
/* 80146028 00142F68  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8014602C 00142F6C  40 81 00 1C */	ble .L_80146048
/* 80146030 00142F70  FC 20 E8 90 */	fmr f1, f29
/* 80146034 00142F74  FC 40 F0 90 */	fmr f2, f30
/* 80146038 00142F78  48 2C BB C5 */	bl angDist__Fff
/* 8014603C 00142F7C  C0 02 A0 84 */	lfs f0, lbl_805183E4@sda21(r2)
/* 80146040 00142F80  EC 20 F0 7A */	fmadds f1, f0, f1, f30
/* 80146044 00142F84  48 00 00 08 */	b .L_8014604C
.L_80146048:
/* 80146048 00142F88  FC 20 E8 90 */	fmr f1, f29
.L_8014604C:
/* 8014604C 00142F8C  48 2C BB 85 */	bl roundAng__Ff
/* 80146050 00142F90  FE A0 08 90 */	fmr f21, f1
/* 80146054 00142F94  FC 20 E0 90 */	fmr f1, f28
/* 80146058 00142F98  D2 BF 02 F8 */	stfs f21, 0x2f8(r31)
/* 8014605C 00142F9C  48 2C B7 A9 */	bl pikmin2_sqrtf__Ff
/* 80146060 00142FA0  C0 02 A0 80 */	lfs f0, lbl_805183E0@sda21(r2)
/* 80146064 00142FA4  C0 42 A0 8C */	lfs f2, lbl_805183EC@sda21(r2)
/* 80146068 00142FA8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8014606C 00142FAC  C0 02 A0 94 */	lfs f0, lbl_805183F4@sda21(r2)
/* 80146070 00142FB0  EC 21 10 24 */	fdivs f1, f1, f2
/* 80146074 00142FB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80146078 00142FB8  4C 41 13 82 */	cror 2, 1, 2
/* 8014607C 00142FBC  40 82 00 0C */	bne .L_80146088
/* 80146080 00142FC0  C0 22 9F F8 */	lfs f1, lbl_80518358@sda21(r2)
/* 80146084 00142FC4  48 00 00 10 */	b .L_80146094
.L_80146088:
/* 80146088 00142FC8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8014608C 00142FCC  C0 22 A0 90 */	lfs f1, lbl_805183F0@sda21(r2)
/* 80146090 00142FD0  EC 21 00 32 */	fmuls f1, f1, f0
.L_80146094:
/* 80146094 00142FD4  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80146098 00142FD8  80 83 00 C8 */	lwz r4, 0xc8(r3)
/* 8014609C 00142FDC  48 05 00 5D */	bl refresh__Q24Game6CPlateFif
/* 801460A0 00142FE0  88 7F 02 58 */	lbz r3, 0x258(r31)
/* 801460A4 00142FE4  28 03 00 28 */	cmplwi r3, 0x28
/* 801460A8 00142FE8  40 80 00 0C */	bge .L_801460B4
/* 801460AC 00142FEC  38 03 00 01 */	addi r0, r3, 1
/* 801460B0 00142FF0  98 1F 02 58 */	stb r0, 0x258(r31)
.L_801460B4:
/* 801460B4 00142FF4  7F E4 FB 78 */	mr r4, r31
/* 801460B8 00142FF8  38 61 00 5C */	addi r3, r1, 0x5c
/* 801460BC 00142FFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801460C0 00143000  81 8C 00 08 */	lwz r12, 8(r12)
/* 801460C4 00143004  7D 89 03 A6 */	mtctr r12
/* 801460C8 00143008  4E 80 04 21 */	bctrl 
/* 801460CC 0014300C  C0 61 00 5C */	lfs f3, 0x5c(r1)
/* 801460D0 00143010  FC 20 A8 90 */	fmr f1, f21
/* 801460D4 00143014  C0 41 00 60 */	lfs f2, 0x60(r1)
/* 801460D8 00143018  38 81 00 CC */	addi r4, r1, 0xcc
/* 801460DC 0014301C  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801460E0 00143020  38 BF 02 00 */	addi r5, r31, 0x200
/* 801460E4 00143024  D0 61 00 CC */	stfs f3, 0xcc(r1)
/* 801460E8 00143028  D0 41 00 D0 */	stfs f2, 0xd0(r1)
/* 801460EC 0014302C  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 801460F0 00143030  88 1F 02 58 */	lbz r0, 0x258(r31)
/* 801460F4 00143034  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 801460F8 00143038  28 00 00 28 */	cmplwi r0, 0x28
/* 801460FC 0014303C  41 80 00 0C */	blt .L_80146108
/* 80146100 00143040  C0 42 A0 98 */	lfs f2, lbl_805183F8@sda21(r2)
/* 80146104 00143044  48 00 00 08 */	b .L_8014610C
.L_80146108:
/* 80146108 00143048  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
.L_8014610C:
/* 8014610C 0014304C  48 04 F1 E1 */	bl "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
/* 80146110 00143050  38 00 00 00 */	li r0, 0
/* 80146114 00143054  98 1F 02 FC */	stb r0, 0x2fc(r31)
/* 80146118 00143058  98 1F 03 0C */	stb r0, 0x30c(r31)
/* 8014611C 0014305C  48 00 05 70 */	b .L_8014668C
.L_80146120:
/* 80146120 00143060  38 00 00 00 */	li r0, 0
/* 80146124 00143064  98 1F 02 58 */	stb r0, 0x258(r31)
/* 80146128 00143068  88 1F 02 FC */	lbz r0, 0x2fc(r31)
/* 8014612C 0014306C  28 00 00 00 */	cmplwi r0, 0
/* 80146130 00143070  40 82 00 0C */	bne .L_8014613C
/* 80146134 00143074  38 00 00 01 */	li r0, 1
/* 80146138 00143078  98 1F 03 0C */	stb r0, 0x30c(r31)
.L_8014613C:
/* 8014613C 0014307C  88 1F 02 FC */	lbz r0, 0x2fc(r31)
/* 80146140 00143080  C0 22 A0 60 */	lfs f1, lbl_805183C0@sda21(r2)
/* 80146144 00143084  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80146148 00143088  28 00 00 00 */	cmplwi r0, 0
/* 8014614C 0014308C  EE A1 00 2A */	fadds f21, f1, f0
/* 80146150 00143090  40 82 00 A4 */	bne .L_801461F4
/* 80146154 00143094  C0 3F 01 E4 */	lfs f1, 0x1e4(r31)
/* 80146158 00143098  C0 1F 01 E8 */	lfs f0, 0x1e8(r31)
/* 8014615C 0014309C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80146160 001430A0  C0 5F 01 EC */	lfs f2, 0x1ec(r31)
/* 80146164 001430A4  EC 00 00 32 */	fmuls f0, f0, f0
/* 80146168 001430A8  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8014616C 001430AC  EC 01 00 2A */	fadds f0, f1, f0
/* 80146170 001430B0  EC 22 00 2A */	fadds f1, f2, f0
/* 80146174 001430B4  48 2C B6 91 */	bl pikmin2_sqrtf__Ff
/* 80146178 001430B8  C0 02 A0 20 */	lfs f0, lbl_80518380@sda21(r2)
/* 8014617C 001430BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80146180 001430C0  40 80 00 74 */	bge .L_801461F4
/* 80146184 001430C4  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 80146188 001430C8  28 03 00 00 */	cmplwi r3, 0
/* 8014618C 001430CC  41 82 00 0C */	beq .L_80146198
/* 80146190 001430D0  80 03 00 04 */	lwz r0, 4(r3)
/* 80146194 001430D4  48 00 00 08 */	b .L_8014619C
.L_80146198:
/* 80146198 001430D8  38 00 FF FF */	li r0, -1
.L_8014619C:
/* 8014619C 001430DC  2C 00 00 06 */	cmpwi r0, 6
/* 801461A0 001430E0  41 82 00 54 */	beq .L_801461F4
/* 801461A4 001430E4  7F E4 FB 78 */	mr r4, r31
/* 801461A8 001430E8  38 61 00 50 */	addi r3, r1, 0x50
/* 801461AC 001430EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801461B0 001430F0  C2 BF 02 F8 */	lfs f21, 0x2f8(r31)
/* 801461B4 001430F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801461B8 001430F8  7D 89 03 A6 */	mtctr r12
/* 801461BC 001430FC  4E 80 04 21 */	bctrl 
/* 801461C0 00143100  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 801461C4 00143104  FC 20 A8 90 */	fmr f1, f21
/* 801461C8 00143108  C0 61 00 54 */	lfs f3, 0x54(r1)
/* 801461CC 0014310C  38 81 00 C0 */	addi r4, r1, 0xc0
/* 801461D0 00143110  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801461D4 00143114  38 BF 02 00 */	addi r5, r31, 0x200
/* 801461D8 00143118  D0 41 00 C0 */	stfs f2, 0xc0(r1)
/* 801461DC 0014311C  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
/* 801461E0 00143120  D0 61 00 C4 */	stfs f3, 0xc4(r1)
/* 801461E4 00143124  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 801461E8 00143128  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 801461EC 0014312C  48 04 F1 01 */	bl "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
/* 801461F0 00143130  48 00 00 0C */	b .L_801461FC
.L_801461F4:
/* 801461F4 00143134  38 00 00 01 */	li r0, 1
/* 801461F8 00143138  98 1F 02 FC */	stb r0, 0x2fc(r31)
.L_801461FC:
/* 801461FC 0014313C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80146200 00143140  C0 22 9F F4 */	lfs f1, lbl_80518354@sda21(r2)
/* 80146204 00143144  80 83 00 C8 */	lwz r4, 0xc8(r3)
/* 80146208 00143148  48 04 FE F1 */	bl refresh__Q24Game6CPlateFif
/* 8014620C 0014314C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80146210 00143150  38 00 00 00 */	li r0, 0
/* 80146214 00143154  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80146218 00143158  C2 C2 A0 9C */	lfs f22, lbl_805183FC@sda21(r2)
/* 8014621C 0014315C  38 84 BC 84 */	addi r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80146220 00143160  28 00 00 00 */	cmplwi r0, 0
/* 80146224 00143164  90 81 00 B0 */	stw r4, 0xb0(r1)
/* 80146228 00143168  90 01 00 BC */	stw r0, 0xbc(r1)
/* 8014622C 0014316C  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80146230 00143170  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 80146234 00143174  40 82 00 1C */	bne .L_80146250
/* 80146238 00143178  81 83 00 00 */	lwz r12, 0(r3)
/* 8014623C 0014317C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80146240 00143180  7D 89 03 A6 */	mtctr r12
/* 80146244 00143184  4E 80 04 21 */	bctrl 
/* 80146248 00143188  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8014624C 0014318C  48 00 01 D8 */	b .L_80146424
.L_80146250:
/* 80146250 00143190  81 83 00 00 */	lwz r12, 0(r3)
/* 80146254 00143194  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80146258 00143198  7D 89 03 A6 */	mtctr r12
/* 8014625C 0014319C  4E 80 04 21 */	bctrl 
/* 80146260 001431A0  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 80146264 001431A4  48 00 00 58 */	b .L_801462BC
.L_80146268:
/* 80146268 001431A8  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8014626C 001431AC  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 80146270 001431B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80146274 001431B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146278 001431B8  7D 89 03 A6 */	mtctr r12
/* 8014627C 001431BC  4E 80 04 21 */	bctrl 
/* 80146280 001431C0  7C 64 1B 78 */	mr r4, r3
/* 80146284 001431C4  80 61 00 BC */	lwz r3, 0xbc(r1)
/* 80146288 001431C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014628C 001431CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146290 001431D0  7D 89 03 A6 */	mtctr r12
/* 80146294 001431D4  4E 80 04 21 */	bctrl 
/* 80146298 001431D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014629C 001431DC  40 82 01 88 */	bne .L_80146424
/* 801462A0 001431E0  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 801462A4 001431E4  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 801462A8 001431E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801462AC 001431EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801462B0 001431F0  7D 89 03 A6 */	mtctr r12
/* 801462B4 001431F4  4E 80 04 21 */	bctrl 
/* 801462B8 001431F8  90 61 00 B4 */	stw r3, 0xb4(r1)
.L_801462BC:
/* 801462BC 001431FC  81 81 00 B0 */	lwz r12, 0xb0(r1)
/* 801462C0 00143200  38 61 00 B0 */	addi r3, r1, 0xb0
/* 801462C4 00143204  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801462C8 00143208  7D 89 03 A6 */	mtctr r12
/* 801462CC 0014320C  4E 80 04 21 */	bctrl 
/* 801462D0 00143210  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801462D4 00143214  41 82 FF 94 */	beq .L_80146268
/* 801462D8 00143218  48 00 01 4C */	b .L_80146424
.L_801462DC:
/* 801462DC 0014321C  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 801462E0 00143220  81 83 00 00 */	lwz r12, 0(r3)
/* 801462E4 00143224  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801462E8 00143228  7D 89 03 A6 */	mtctr r12
/* 801462EC 0014322C  4E 80 04 21 */	bctrl 
/* 801462F0 00143230  7C 7E 1B 78 */	mr r30, r3
/* 801462F4 00143234  48 00 2C 41 */	bl getStateID__Q24Game4PikiFv
/* 801462F8 00143238  7F E4 FB 78 */	mr r4, r31
/* 801462FC 0014323C  38 61 00 38 */	addi r3, r1, 0x38
/* 80146300 00143240  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146304 00143244  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146308 00143248  7D 89 03 A6 */	mtctr r12
/* 8014630C 0014324C  4E 80 04 21 */	bctrl 
/* 80146310 00143250  7F C4 F3 78 */	mr r4, r30
/* 80146314 00143254  38 61 00 44 */	addi r3, r1, 0x44
/* 80146318 00143258  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014631C 0014325C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146320 00143260  7D 89 03 A6 */	mtctr r12
/* 80146324 00143264  4E 80 04 21 */	bctrl 
/* 80146328 00143268  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 8014632C 0014326C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80146330 00143270  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 80146334 00143274  EC 62 00 28 */	fsubs f3, f2, f0
/* 80146338 00143278  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8014633C 0014327C  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 80146340 00143280  EC 81 00 28 */	fsubs f4, f1, f0
/* 80146344 00143284  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80146348 00143288  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8014634C 0014328C  EC 22 08 28 */	fsubs f1, f2, f1
/* 80146350 00143290  EC 04 01 3A */	fmadds f0, f4, f4, f0
/* 80146354 00143294  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80146358 00143298  48 2C B4 AD */	bl pikmin2_sqrtf__Ff
/* 8014635C 0014329C  FC 01 B0 40 */	fcmpo cr0, f1, f22
/* 80146360 001432A0  40 80 00 08 */	bge .L_80146368
/* 80146364 001432A4  FE C0 08 90 */	fmr f22, f1
.L_80146368:
/* 80146368 001432A8  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8014636C 001432AC  28 00 00 00 */	cmplwi r0, 0
/* 80146370 001432B0  40 82 00 24 */	bne .L_80146394
/* 80146374 001432B4  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 80146378 001432B8  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8014637C 001432BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80146380 001432C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146384 001432C4  7D 89 03 A6 */	mtctr r12
/* 80146388 001432C8  4E 80 04 21 */	bctrl 
/* 8014638C 001432CC  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 80146390 001432D0  48 00 00 94 */	b .L_80146424
.L_80146394:
/* 80146394 001432D4  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 80146398 001432D8  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8014639C 001432DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801463A0 001432E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801463A4 001432E4  7D 89 03 A6 */	mtctr r12
/* 801463A8 001432E8  4E 80 04 21 */	bctrl 
/* 801463AC 001432EC  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 801463B0 001432F0  48 00 00 58 */	b .L_80146408
.L_801463B4:
/* 801463B4 001432F4  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 801463B8 001432F8  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 801463BC 001432FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801463C0 00143300  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801463C4 00143304  7D 89 03 A6 */	mtctr r12
/* 801463C8 00143308  4E 80 04 21 */	bctrl 
/* 801463CC 0014330C  7C 64 1B 78 */	mr r4, r3
/* 801463D0 00143310  80 61 00 BC */	lwz r3, 0xbc(r1)
/* 801463D4 00143314  81 83 00 00 */	lwz r12, 0(r3)
/* 801463D8 00143318  81 8C 00 08 */	lwz r12, 8(r12)
/* 801463DC 0014331C  7D 89 03 A6 */	mtctr r12
/* 801463E0 00143320  4E 80 04 21 */	bctrl 
/* 801463E4 00143324  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801463E8 00143328  40 82 00 3C */	bne .L_80146424
/* 801463EC 0014332C  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 801463F0 00143330  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 801463F4 00143334  81 83 00 00 */	lwz r12, 0(r3)
/* 801463F8 00143338  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801463FC 0014333C  7D 89 03 A6 */	mtctr r12
/* 80146400 00143340  4E 80 04 21 */	bctrl 
/* 80146404 00143344  90 61 00 B4 */	stw r3, 0xb4(r1)
.L_80146408:
/* 80146408 00143348  81 81 00 B0 */	lwz r12, 0xb0(r1)
/* 8014640C 0014334C  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80146410 00143350  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80146414 00143354  7D 89 03 A6 */	mtctr r12
/* 80146418 00143358  4E 80 04 21 */	bctrl 
/* 8014641C 0014335C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146420 00143360  41 82 FF 94 */	beq .L_801463B4
.L_80146424:
/* 80146424 00143364  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 80146428 00143368  81 83 00 00 */	lwz r12, 0(r3)
/* 8014642C 0014336C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80146430 00143370  7D 89 03 A6 */	mtctr r12
/* 80146434 00143374  4E 80 04 21 */	bctrl 
/* 80146438 00143378  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8014643C 0014337C  7C 04 18 40 */	cmplw r4, r3
/* 80146440 00143380  40 82 FE 9C */	bne .L_801462DC
/* 80146444 00143384  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80146448 00143388  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8014644C 0014338C  C0 03 06 B0 */	lfs f0, 0x6b0(r3)
/* 80146450 00143390  FC 16 00 40 */	fcmpo cr0, f22, f0
/* 80146454 00143394  40 80 00 30 */	bge .L_80146484
/* 80146458 00143398  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 8014645C 0014339C  2C 00 00 00 */	cmpwi r0, 0
/* 80146460 001433A0  40 82 00 14 */	bne .L_80146474
/* 80146464 001433A4  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 80146468 001433A8  38 03 00 01 */	addi r0, r3, 1
/* 8014646C 001433AC  90 1F 03 04 */	stw r0, 0x304(r31)
/* 80146470 001433B0  48 00 00 7C */	b .L_801464EC
.L_80146474:
/* 80146474 001433B4  38 00 00 00 */	li r0, 0
/* 80146478 001433B8  90 1F 03 04 */	stw r0, 0x304(r31)
/* 8014647C 001433BC  90 1F 03 00 */	stw r0, 0x300(r31)
/* 80146480 001433C0  48 00 00 6C */	b .L_801464EC
.L_80146484:
/* 80146484 001433C4  C0 03 06 D8 */	lfs f0, 0x6d8(r3)
/* 80146488 001433C8  FC 16 00 40 */	fcmpo cr0, f22, f0
/* 8014648C 001433CC  40 80 00 34 */	bge .L_801464C0
/* 80146490 001433D0  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 80146494 001433D4  2C 00 00 01 */	cmpwi r0, 1
/* 80146498 001433D8  40 82 00 14 */	bne .L_801464AC
/* 8014649C 001433DC  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 801464A0 001433E0  38 03 00 01 */	addi r0, r3, 1
/* 801464A4 001433E4  90 1F 03 04 */	stw r0, 0x304(r31)
/* 801464A8 001433E8  48 00 00 44 */	b .L_801464EC
.L_801464AC:
/* 801464AC 001433EC  38 60 00 00 */	li r3, 0
/* 801464B0 001433F0  38 00 00 01 */	li r0, 1
/* 801464B4 001433F4  90 7F 03 04 */	stw r3, 0x304(r31)
/* 801464B8 001433F8  90 1F 03 00 */	stw r0, 0x300(r31)
/* 801464BC 001433FC  48 00 00 30 */	b .L_801464EC
.L_801464C0:
/* 801464C0 00143400  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 801464C4 00143404  2C 00 00 02 */	cmpwi r0, 2
/* 801464C8 00143408  40 82 00 14 */	bne .L_801464DC
/* 801464CC 0014340C  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 801464D0 00143410  38 03 00 01 */	addi r0, r3, 1
/* 801464D4 00143414  90 1F 03 04 */	stw r0, 0x304(r31)
/* 801464D8 00143418  48 00 00 14 */	b .L_801464EC
.L_801464DC:
/* 801464DC 0014341C  38 60 00 00 */	li r3, 0
/* 801464E0 00143420  38 00 00 02 */	li r0, 2
/* 801464E4 00143424  90 7F 03 04 */	stw r3, 0x304(r31)
/* 801464E8 00143428  90 1F 03 00 */	stw r0, 0x300(r31)
.L_801464EC:
/* 801464EC 0014342C  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 801464F0 00143430  2C 00 00 00 */	cmpwi r0, 0
/* 801464F4 00143434  40 82 00 10 */	bne .L_80146504
/* 801464F8 00143438  38 00 00 01 */	li r0, 1
/* 801464FC 0014343C  98 1F 02 FD */	stb r0, 0x2fd(r31)
/* 80146500 00143440  48 00 01 8C */	b .L_8014668C
.L_80146504:
/* 80146504 00143444  2C 00 00 01 */	cmpwi r0, 1
/* 80146508 00143448  40 82 00 D4 */	bne .L_801465DC
/* 8014650C 0014344C  38 00 00 01 */	li r0, 1
/* 80146510 00143450  7F E4 FB 78 */	mr r4, r31
/* 80146514 00143454  98 1F 02 FD */	stb r0, 0x2fd(r31)
/* 80146518 00143458  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014651C 0014345C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146520 00143460  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146524 00143464  7D 89 03 A6 */	mtctr r12
/* 80146528 00143468  4E 80 04 21 */	bctrl 
/* 8014652C 0014346C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80146530 00143470  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80146534 00143474  C0 43 00 A8 */	lfs f2, 0xa8(r3)
/* 80146538 00143478  C0 23 00 A4 */	lfs f1, 0xa4(r3)
/* 8014653C 0014347C  EC 62 00 28 */	fsubs f3, f2, f0
/* 80146540 00143480  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80146544 00143484  C0 43 00 AC */	lfs f2, 0xac(r3)
/* 80146548 00143488  EE A1 00 28 */	fsubs f21, f1, f0
/* 8014654C 0014348C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80146550 00143490  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80146554 00143494  EE C2 08 28 */	fsubs f22, f2, f1
/* 80146558 00143498  EC 15 05 7A */	fmadds f0, f21, f21, f0
/* 8014655C 0014349C  EC 36 05 BA */	fmadds f1, f22, f22, f0
/* 80146560 001434A0  48 2C B2 A5 */	bl pikmin2_sqrtf__Ff
/* 80146564 001434A4  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80146568 001434A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014656C 001434AC  40 81 00 14 */	ble .L_80146580
/* 80146570 001434B0  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80146574 001434B4  EC 00 08 24 */	fdivs f0, f0, f1
/* 80146578 001434B8  EE B5 00 32 */	fmuls f21, f21, f0
/* 8014657C 001434BC  EE D6 00 32 */	fmuls f22, f22, f0
.L_80146580:
/* 80146580 001434C0  FC 20 A8 90 */	fmr f1, f21
/* 80146584 001434C4  FC 40 B0 90 */	fmr f2, f22
/* 80146588 001434C8  48 2C B2 55 */	bl pikmin2_atan2f__Fff
/* 8014658C 001434CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146590 001434D0  FE A0 08 90 */	fmr f21, f1
/* 80146594 001434D4  7F E4 FB 78 */	mr r4, r31
/* 80146598 001434D8  38 61 00 20 */	addi r3, r1, 0x20
/* 8014659C 001434DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801465A0 001434E0  7D 89 03 A6 */	mtctr r12
/* 801465A4 001434E4  4E 80 04 21 */	bctrl 
/* 801465A8 001434E8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801465AC 001434EC  FC 20 A8 90 */	fmr f1, f21
/* 801465B0 001434F0  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 801465B4 001434F4  38 81 00 A4 */	addi r4, r1, 0xa4
/* 801465B8 001434F8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801465BC 001434FC  38 BF 02 00 */	addi r5, r31, 0x200
/* 801465C0 00143500  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 801465C4 00143504  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
/* 801465C8 00143508  D0 61 00 A8 */	stfs f3, 0xa8(r1)
/* 801465CC 0014350C  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 801465D0 00143510  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 801465D4 00143514  48 04 EF 29 */	bl "setPosGray__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
/* 801465D8 00143518  48 00 00 B4 */	b .L_8014668C
.L_801465DC:
/* 801465DC 0014351C  2C 00 00 02 */	cmpwi r0, 2
/* 801465E0 00143520  40 82 00 AC */	bne .L_8014668C
/* 801465E4 00143524  38 00 00 00 */	li r0, 0
/* 801465E8 00143528  98 1F 03 0C */	stb r0, 0x30c(r31)
/* 801465EC 0014352C  88 1F 02 FD */	lbz r0, 0x2fd(r31)
/* 801465F0 00143530  28 00 00 00 */	cmplwi r0, 0
/* 801465F4 00143534  41 82 00 50 */	beq .L_80146644
/* 801465F8 00143538  7F E4 FB 78 */	mr r4, r31
/* 801465FC 0014353C  38 61 00 14 */	addi r3, r1, 0x14
/* 80146600 00143540  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146604 00143544  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146608 00143548  7D 89 03 A6 */	mtctr r12
/* 8014660C 0014354C  4E 80 04 21 */	bctrl 
/* 80146610 00143550  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 80146614 00143554  FC 20 A8 90 */	fmr f1, f21
/* 80146618 00143558  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8014661C 0014355C  38 81 00 98 */	addi r4, r1, 0x98
/* 80146620 00143560  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80146624 00143564  38 BF 02 00 */	addi r5, r31, 0x200
/* 80146628 00143568  D0 61 00 98 */	stfs f3, 0x98(r1)
/* 8014662C 0014356C  D0 41 00 9C */	stfs f2, 0x9c(r1)
/* 80146630 00143570  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80146634 00143574  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80146638 00143578  48 04 F8 1D */	bl "rearrangeSlot__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>"
/* 8014663C 0014357C  38 00 00 00 */	li r0, 0
/* 80146640 00143580  98 1F 02 FD */	stb r0, 0x2fd(r31)
.L_80146644:
/* 80146644 00143584  7F E4 FB 78 */	mr r4, r31
/* 80146648 00143588  38 61 00 08 */	addi r3, r1, 8
/* 8014664C 0014358C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146650 00143590  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146654 00143594  7D 89 03 A6 */	mtctr r12
/* 80146658 00143598  4E 80 04 21 */	bctrl 
/* 8014665C 0014359C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80146660 001435A0  FC 20 A8 90 */	fmr f1, f21
/* 80146664 001435A4  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80146668 001435A8  38 81 00 8C */	addi r4, r1, 0x8c
/* 8014666C 001435AC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80146670 001435B0  38 BF 02 00 */	addi r5, r31, 0x200
/* 80146674 001435B4  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 80146678 001435B8  C0 42 9F F8 */	lfs f2, lbl_80518358@sda21(r2)
/* 8014667C 001435BC  D0 61 00 90 */	stfs f3, 0x90(r1)
/* 80146680 001435C0  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80146684 001435C4  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80146688 001435C8  48 04 EC 65 */	bl "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
.L_8014668C:
/* 8014668C 001435CC  D2 FF 02 E0 */	stfs f23, 0x2e0(r31)
/* 80146690 001435D0  D3 1F 02 E4 */	stfs f24, 0x2e4(r31)
/* 80146694 001435D4  D3 3F 02 E8 */	stfs f25, 0x2e8(r31)
/* 80146698 001435D8  E3 E1 01 88 */	psq_l f31, 392(r1), 0, qr0
/* 8014669C 001435DC  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 801466A0 001435E0  E3 C1 01 78 */	psq_l f30, 376(r1), 0, qr0
/* 801466A4 001435E4  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 801466A8 001435E8  E3 A1 01 68 */	psq_l f29, 360(r1), 0, qr0
/* 801466AC 001435EC  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 801466B0 001435F0  E3 81 01 58 */	psq_l f28, 344(r1), 0, qr0
/* 801466B4 001435F4  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 801466B8 001435F8  E3 61 01 48 */	psq_l f27, 328(r1), 0, qr0
/* 801466BC 001435FC  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 801466C0 00143600  E3 41 01 38 */	psq_l f26, 312(r1), 0, qr0
/* 801466C4 00143604  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 801466C8 00143608  E3 21 01 28 */	psq_l f25, 296(r1), 0, qr0
/* 801466CC 0014360C  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 801466D0 00143610  E3 01 01 18 */	psq_l f24, 280(r1), 0, qr0
/* 801466D4 00143614  CB 01 01 10 */	lfd f24, 0x110(r1)
/* 801466D8 00143618  E2 E1 01 08 */	psq_l f23, 264(r1), 0, qr0
/* 801466DC 0014361C  CA E1 01 00 */	lfd f23, 0x100(r1)
/* 801466E0 00143620  E2 C1 00 F8 */	psq_l f22, 248(r1), 0, qr0
/* 801466E4 00143624  CA C1 00 F0 */	lfd f22, 0xf0(r1)
/* 801466E8 00143628  E2 A1 00 E8 */	psq_l f21, 232(r1), 0, qr0
/* 801466EC 0014362C  CA A1 00 E0 */	lfd f21, 0xe0(r1)
/* 801466F0 00143630  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 801466F4 00143634  80 01 01 94 */	lwz r0, 0x194(r1)
/* 801466F8 00143638  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 801466FC 0014363C  7C 08 03 A6 */	mtlr r0
/* 80146700 00143640  38 21 01 90 */	addi r1, r1, 0x190
/* 80146704 00143644  4E 80 00 20 */	blr 
.endfn makeCStick__Q24Game4NaviFb

.fn isCStickNetural__Q24Game4NaviFv, global
/* 80146708 00143648  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014670C 0014364C  7C 08 02 A6 */	mflr r0
/* 80146710 00143650  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146714 00143654  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146718 00143658  C0 23 02 EC */	lfs f1, 0x2ec(r3)
/* 8014671C 0014365C  C0 03 02 F0 */	lfs f0, 0x2f0(r3)
/* 80146720 00143660  EC 21 00 72 */	fmuls f1, f1, f1
/* 80146724 00143664  C0 43 02 F4 */	lfs f2, 0x2f4(r3)
/* 80146728 00143668  EC 00 00 32 */	fmuls f0, f0, f0
/* 8014672C 0014366C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80146730 00143670  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80146734 00143674  83 E3 00 C8 */	lwz r31, 0xc8(r3)
/* 80146738 00143678  EC 01 00 2A */	fadds f0, f1, f0
/* 8014673C 0014367C  EC 22 00 2A */	fadds f1, f2, f0
/* 80146740 00143680  48 2C B0 C5 */	bl pikmin2_sqrtf__Ff
/* 80146744 00143684  C0 1F 08 E0 */	lfs f0, 0x8e0(r31)
/* 80146748 00143688  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014674C 0014368C  4C 40 13 82 */	cror 2, 0, 2
/* 80146750 00143690  7C 00 00 26 */	mfcr r0
/* 80146754 00143694  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 80146758 00143698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014675C 0014369C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146760 001436A0  7C 08 03 A6 */	mtlr r0
/* 80146764 001436A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80146768 001436A8  4E 80 00 20 */	blr 
.endfn isCStickNetural__Q24Game4NaviFv

.fn findNextThrowPiki__Q24Game4NaviFv, global
/* 8014676C 001436AC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80146770 001436B0  7C 08 02 A6 */	mflr r0
/* 80146774 001436B4  90 01 00 74 */	stw r0, 0x74(r1)
/* 80146778 001436B8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8014677C 001436BC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80146780 001436C0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80146784 001436C4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80146788 001436C8  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8014678C 001436CC  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 80146790 001436D0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80146794 001436D4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80146798 001436D8  38 A0 00 00 */	li r5, 0
/* 8014679C 001436DC  7C 7F 1B 78 */	mr r31, r3
/* 801467A0 001436E0  90 A3 02 A8 */	stw r5, 0x2a8(r3)
/* 801467A4 001436E4  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 801467A8 001436E8  28 05 00 00 */	cmplwi r5, 0
/* 801467AC 001436EC  C3 A2 A0 28 */	lfs f29, lbl_80518388@sda21(r2)
/* 801467B0 001436F0  80 63 02 54 */	lwz r3, 0x254(r3)
/* 801467B4 001436F4  38 04 BC 84 */	addi r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 801467B8 001436F8  90 01 00 20 */	stw r0, 0x20(r1)
/* 801467BC 001436FC  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801467C0 00143700  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801467C4 00143704  90 61 00 28 */	stw r3, 0x28(r1)
/* 801467C8 00143708  40 82 00 1C */	bne .L_801467E4
/* 801467CC 0014370C  81 83 00 00 */	lwz r12, 0(r3)
/* 801467D0 00143710  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801467D4 00143714  7D 89 03 A6 */	mtctr r12
/* 801467D8 00143718  4E 80 04 21 */	bctrl 
/* 801467DC 0014371C  90 61 00 24 */	stw r3, 0x24(r1)
/* 801467E0 00143720  48 00 01 F8 */	b .L_801469D8
.L_801467E4:
/* 801467E4 00143724  81 83 00 00 */	lwz r12, 0(r3)
/* 801467E8 00143728  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801467EC 0014372C  7D 89 03 A6 */	mtctr r12
/* 801467F0 00143730  4E 80 04 21 */	bctrl 
/* 801467F4 00143734  90 61 00 24 */	stw r3, 0x24(r1)
/* 801467F8 00143738  48 00 00 58 */	b .L_80146850
.L_801467FC:
/* 801467FC 0014373C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80146800 00143740  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80146804 00143744  81 83 00 00 */	lwz r12, 0(r3)
/* 80146808 00143748  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014680C 0014374C  7D 89 03 A6 */	mtctr r12
/* 80146810 00143750  4E 80 04 21 */	bctrl 
/* 80146814 00143754  7C 64 1B 78 */	mr r4, r3
/* 80146818 00143758  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014681C 0014375C  81 83 00 00 */	lwz r12, 0(r3)
/* 80146820 00143760  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146824 00143764  7D 89 03 A6 */	mtctr r12
/* 80146828 00143768  4E 80 04 21 */	bctrl 
/* 8014682C 0014376C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146830 00143770  40 82 01 A8 */	bne .L_801469D8
/* 80146834 00143774  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80146838 00143778  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8014683C 0014377C  81 83 00 00 */	lwz r12, 0(r3)
/* 80146840 00143780  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146844 00143784  7D 89 03 A6 */	mtctr r12
/* 80146848 00143788  4E 80 04 21 */	bctrl 
/* 8014684C 0014378C  90 61 00 24 */	stw r3, 0x24(r1)
.L_80146850:
/* 80146850 00143790  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80146854 00143794  38 61 00 20 */	addi r3, r1, 0x20
/* 80146858 00143798  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014685C 0014379C  7D 89 03 A6 */	mtctr r12
/* 80146860 001437A0  4E 80 04 21 */	bctrl 
/* 80146864 001437A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146868 001437A8  41 82 FF 94 */	beq .L_801467FC
/* 8014686C 001437AC  48 00 01 6C */	b .L_801469D8
.L_80146870:
/* 80146870 001437B0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80146874 001437B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80146878 001437B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014687C 001437BC  7D 89 03 A6 */	mtctr r12
/* 80146880 001437C0  4E 80 04 21 */	bctrl 
/* 80146884 001437C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146888 001437C8  7C 7E 1B 78 */	mr r30, r3
/* 8014688C 001437CC  7F E4 FB 78 */	mr r4, r31
/* 80146890 001437D0  38 61 00 14 */	addi r3, r1, 0x14
/* 80146894 001437D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146898 001437D8  7D 89 03 A6 */	mtctr r12
/* 8014689C 001437DC  4E 80 04 21 */	bctrl 
/* 801468A0 001437E0  7F C4 F3 78 */	mr r4, r30
/* 801468A4 001437E4  38 61 00 08 */	addi r3, r1, 8
/* 801468A8 001437E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801468AC 001437EC  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 801468B0 001437F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801468B4 001437F4  C3 C1 00 1C */	lfs f30, 0x1c(r1)
/* 801468B8 001437F8  7D 89 03 A6 */	mtctr r12
/* 801468BC 001437FC  4E 80 04 21 */	bctrl 
/* 801468C0 00143800  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801468C4 00143804  C0 21 00 08 */	lfs f1, 8(r1)
/* 801468C8 00143808  EC 1E 00 28 */	fsubs f0, f30, f0
/* 801468CC 0014380C  EC 3F 08 28 */	fsubs f1, f31, f1
/* 801468D0 00143810  EC 00 00 32 */	fmuls f0, f0, f0
/* 801468D4 00143814  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 801468D8 00143818  48 2C AF 2D */	bl pikmin2_sqrtf__Ff
/* 801468DC 0014381C  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 801468E0 00143820  FF C0 08 90 */	fmr f30, f1
/* 801468E4 00143824  7C 00 F8 40 */	cmplw r0, r31
/* 801468E8 00143828  40 82 00 34 */	bne .L_8014691C
/* 801468EC 0014382C  FC 1E E8 40 */	fcmpo cr0, f30, f29
/* 801468F0 00143830  40 80 00 2C */	bge .L_8014691C
/* 801468F4 00143834  7F C3 F3 78 */	mr r3, r30
/* 801468F8 00143838  48 00 26 3D */	bl getStateID__Q24Game4PikiFv
/* 801468FC 0014383C  2C 03 00 00 */	cmpwi r3, 0
/* 80146900 00143840  40 82 00 1C */	bne .L_8014691C
/* 80146904 00143844  7F C3 F3 78 */	mr r3, r30
/* 80146908 00143848  48 00 2B 1D */	bl isThrowable__Q24Game4PikiFv
/* 8014690C 0014384C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146910 00143850  41 82 00 0C */	beq .L_8014691C
/* 80146914 00143854  93 DF 02 A8 */	stw r30, 0x2a8(r31)
/* 80146918 00143858  FF A0 F0 90 */	fmr f29, f30
.L_8014691C:
/* 8014691C 0014385C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80146920 00143860  28 00 00 00 */	cmplwi r0, 0
/* 80146924 00143864  40 82 00 24 */	bne .L_80146948
/* 80146928 00143868  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8014692C 0014386C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80146930 00143870  81 83 00 00 */	lwz r12, 0(r3)
/* 80146934 00143874  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146938 00143878  7D 89 03 A6 */	mtctr r12
/* 8014693C 0014387C  4E 80 04 21 */	bctrl 
/* 80146940 00143880  90 61 00 24 */	stw r3, 0x24(r1)
/* 80146944 00143884  48 00 00 94 */	b .L_801469D8
.L_80146948:
/* 80146948 00143888  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8014694C 0014388C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80146950 00143890  81 83 00 00 */	lwz r12, 0(r3)
/* 80146954 00143894  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146958 00143898  7D 89 03 A6 */	mtctr r12
/* 8014695C 0014389C  4E 80 04 21 */	bctrl 
/* 80146960 001438A0  90 61 00 24 */	stw r3, 0x24(r1)
/* 80146964 001438A4  48 00 00 58 */	b .L_801469BC
.L_80146968:
/* 80146968 001438A8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8014696C 001438AC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80146970 001438B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80146974 001438B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146978 001438B8  7D 89 03 A6 */	mtctr r12
/* 8014697C 001438BC  4E 80 04 21 */	bctrl 
/* 80146980 001438C0  7C 64 1B 78 */	mr r4, r3
/* 80146984 001438C4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80146988 001438C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014698C 001438CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146990 001438D0  7D 89 03 A6 */	mtctr r12
/* 80146994 001438D4  4E 80 04 21 */	bctrl 
/* 80146998 001438D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014699C 001438DC  40 82 00 3C */	bne .L_801469D8
/* 801469A0 001438E0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801469A4 001438E4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801469A8 001438E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801469AC 001438EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801469B0 001438F0  7D 89 03 A6 */	mtctr r12
/* 801469B4 001438F4  4E 80 04 21 */	bctrl 
/* 801469B8 001438F8  90 61 00 24 */	stw r3, 0x24(r1)
.L_801469BC:
/* 801469BC 001438FC  81 81 00 20 */	lwz r12, 0x20(r1)
/* 801469C0 00143900  38 61 00 20 */	addi r3, r1, 0x20
/* 801469C4 00143904  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801469C8 00143908  7D 89 03 A6 */	mtctr r12
/* 801469CC 0014390C  4E 80 04 21 */	bctrl 
/* 801469D0 00143910  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801469D4 00143914  41 82 FF 94 */	beq .L_80146968
.L_801469D8:
/* 801469D8 00143918  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801469DC 0014391C  81 83 00 00 */	lwz r12, 0(r3)
/* 801469E0 00143920  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801469E4 00143924  7D 89 03 A6 */	mtctr r12
/* 801469E8 00143928  4E 80 04 21 */	bctrl 
/* 801469EC 0014392C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801469F0 00143930  7C 04 18 40 */	cmplw r4, r3
/* 801469F4 00143934  40 82 FE 7C */	bne .L_80146870
/* 801469F8 00143938  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 801469FC 0014393C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80146A00 00143940  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80146A04 00143944  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80146A08 00143948  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80146A0C 0014394C  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80146A10 00143950  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80146A14 00143954  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80146A18 00143958  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80146A1C 0014395C  7C 08 03 A6 */	mtlr r0
/* 80146A20 00143960  38 21 00 70 */	addi r1, r1, 0x70
/* 80146A24 00143964  4E 80 00 20 */	blr 
.endfn findNextThrowPiki__Q24Game4NaviFv

.fn ogGetNextThrowPiki__Q24Game4NaviFv, global
/* 80146A28 00143968  80 63 02 A8 */	lwz r3, 0x2a8(r3)
/* 80146A2C 0014396C  28 03 00 00 */	cmplwi r3, 0
/* 80146A30 00143970  40 82 00 0C */	bne .L_80146A3C
/* 80146A34 00143974  38 60 00 00 */	li r3, 0
/* 80146A38 00143978  4E 80 00 20 */	blr 
.L_80146A3C:
/* 80146A3C 0014397C  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 80146A40 00143980  88 63 02 B9 */	lbz r3, 0x2b9(r3)
/* 80146A44 00143984  1C 00 00 03 */	mulli r0, r0, 3
/* 80146A48 00143988  7C 60 1A 14 */	add r3, r0, r3
/* 80146A4C 0014398C  38 63 00 01 */	addi r3, r3, 1
/* 80146A50 00143990  4E 80 00 20 */	blr 
.endfn ogGetNextThrowPiki__Q24Game4NaviFv

.fn "throwPiki__Q24Game4NaviFPQ24Game4PikiR10Vector3<f>", global
/* 80146A54 00143994  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80146A58 00143998  7C 08 02 A6 */	mflr r0
/* 80146A5C 0014399C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80146A60 001439A0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80146A64 001439A4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80146A68 001439A8  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80146A6C 001439AC  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80146A70 001439B0  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80146A74 001439B4  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80146A78 001439B8  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 80146A7C 001439BC  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 80146A80 001439C0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80146A84 001439C4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80146A88 001439C8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80146A8C 001439CC  7C 7D 1B 78 */	mr r29, r3
/* 80146A90 001439D0  7C 9E 23 78 */	mr r30, r4
/* 80146A94 001439D4  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80146A98 001439D8  7C BF 2B 78 */	mr r31, r5
/* 80146A9C 001439DC  38 80 08 06 */	li r4, 0x806
/* 80146AA0 001439E0  38 A0 00 00 */	li r5, 0
/* 80146AA4 001439E4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80146AA8 001439E8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80146AAC 001439EC  7D 89 03 A6 */	mtctr r12
/* 80146AB0 001439F0  4E 80 04 21 */	bctrl 
/* 80146AB4 001439F4  7F A4 EB 78 */	mr r4, r29
/* 80146AB8 001439F8  38 61 00 14 */	addi r3, r1, 0x14
/* 80146ABC 001439FC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80146AC0 00143A00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146AC4 00143A04  7D 89 03 A6 */	mtctr r12
/* 80146AC8 00143A08  4E 80 04 21 */	bctrl 
/* 80146ACC 00143A0C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80146AD0 00143A10  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80146AD4 00143A14  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80146AD8 00143A18  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80146ADC 00143A1C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80146AE0 00143A20  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80146AE4 00143A24  C0 3D 01 FC */	lfs f1, 0x1fc(r29)
/* 80146AE8 00143A28  4B F8 87 CD */	bl cos
/* 80146AEC 00143A2C  FF A0 08 18 */	frsp f29, f1
/* 80146AF0 00143A30  C0 3D 01 FC */	lfs f1, 0x1fc(r29)
/* 80146AF4 00143A34  4B F8 8D 29 */	bl sin
/* 80146AF8 00143A38  FC C0 08 18 */	frsp f6, f1
/* 80146AFC 00143A3C  C0 42 A0 A0 */	lfs f2, lbl_80518400@sda21(r2)
/* 80146B00 00143A40  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80146B04 00143A44  7F C3 F3 78 */	mr r3, r30
/* 80146B08 00143A48  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80146B0C 00143A4C  EC 62 07 72 */	fmuls f3, f2, f29
/* 80146B10 00143A50  EC A1 00 2A */	fadds f5, f1, f0
/* 80146B14 00143A54  C0 81 00 28 */	lfs f4, 0x28(r1)
/* 80146B18 00143A58  C0 02 9F EC */	lfs f0, lbl_8051834C@sda21(r2)
/* 80146B1C 00143A5C  EC 22 01 B2 */	fmuls f1, f2, f6
/* 80146B20 00143A60  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80146B24 00143A64  EC 64 18 2A */	fadds f3, f4, f3
/* 80146B28 00143A68  EC 22 08 2A */	fadds f1, f2, f1
/* 80146B2C 00143A6C  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 80146B30 00143A70  EC 05 00 2A */	fadds f0, f5, f0
/* 80146B34 00143A74  38 81 00 20 */	addi r4, r1, 0x20
/* 80146B38 00143A78  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80146B3C 00143A7C  38 A0 00 00 */	li r5, 0
/* 80146B40 00143A80  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80146B44 00143A84  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80146B48 00143A88  4B FF 46 61 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80146B4C 00143A8C  7F C4 F3 78 */	mr r4, r30
/* 80146B50 00143A90  38 61 00 08 */	addi r3, r1, 8
/* 80146B54 00143A94  81 9E 00 00 */	lwz r12, 0(r30)
/* 80146B58 00143A98  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146B5C 00143A9C  7D 89 03 A6 */	mtctr r12
/* 80146B60 00143AA0  4E 80 04 21 */	bctrl 
/* 80146B64 00143AA4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80146B68 00143AA8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80146B6C 00143AAC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80146B70 00143AB0  EF A2 00 28 */	fsubs f29, f2, f0
/* 80146B74 00143AB4  C0 01 00 08 */	lfs f0, 8(r1)
/* 80146B78 00143AB8  EF C1 00 28 */	fsubs f30, f1, f0
/* 80146B7C 00143ABC  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80146B80 00143AC0  EC 3E 07 BA */	fmadds f1, f30, f30, f0
/* 80146B84 00143AC4  48 2C AC 81 */	bl pikmin2_sqrtf__Ff
/* 80146B88 00143AC8  FF E0 08 90 */	fmr f31, f1
/* 80146B8C 00143ACC  FC 20 F0 90 */	fmr f1, f30
/* 80146B90 00143AD0  FC 40 E8 90 */	fmr f2, f29
/* 80146B94 00143AD4  48 2C AC 49 */	bl pikmin2_atan2f__Fff
/* 80146B98 00143AD8  FF A0 08 90 */	fmr f29, f1
/* 80146B9C 00143ADC  48 2C B0 35 */	bl roundAng__Ff
/* 80146BA0 00143AE0  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 80146BA4 00143AE4  7F C3 F3 78 */	mr r3, r30
/* 80146BA8 00143AE8  C0 22 9F E8 */	lfs f1, lbl_80518348@sda21(r2)
/* 80146BAC 00143AEC  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80146BB0 00143AF0  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 80146BB4 00143AF4  C0 04 06 38 */	lfs f0, 0x638(r4)
/* 80146BB8 00143AF8  EF C1 00 32 */	fmuls f30, f1, f0
/* 80146BBC 00143AFC  48 00 2A 29 */	bl getThrowHeight__Q24Game4PikiFv
/* 80146BC0 00143B00  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 80146BC4 00143B04  2C 00 00 03 */	cmpwi r0, 3
/* 80146BC8 00143B08  40 82 00 0C */	bne .L_80146BD4
/* 80146BCC 00143B0C  C0 02 9F E8 */	lfs f0, lbl_80518348@sda21(r2)
/* 80146BD0 00143B10  EF DE 00 32 */	fmuls f30, f30, f0
.L_80146BD4:
/* 80146BD4 00143B14  EC 01 F0 24 */	fdivs f0, f1, f30
/* 80146BD8 00143B18  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 80146BDC 00143B1C  C0 42 9F E8 */	lfs f2, lbl_80518348@sda21(r2)
/* 80146BE0 00143B20  2C 00 00 03 */	cmpwi r0, 3
/* 80146BE4 00143B24  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 80146BE8 00143B28  EC 22 00 F2 */	fmuls f1, f2, f3
/* 80146BEC 00143B2C  EF DE 00 7A */	fmadds f30, f30, f1, f0
/* 80146BF0 00143B30  EC 7E 18 24 */	fdivs f3, f30, f3
/* 80146BF4 00143B34  40 82 00 08 */	bne .L_80146BFC
/* 80146BF8 00143B38  EC 63 00 B2 */	fmuls f3, f3, f2
.L_80146BFC:
/* 80146BFC 00143B3C  C0 02 A0 A4 */	lfs f0, lbl_80518404@sda21(r2)
/* 80146C00 00143B40  FC 20 E8 90 */	fmr f1, f29
/* 80146C04 00143B44  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80146C08 00143B48  EF 9F 00 24 */	fdivs f28, f31, f0
/* 80146C0C 00143B4C  48 2C AB 8D */	bl pikmin2_cosf__Ff
/* 80146C10 00143B50  EF FC 00 72 */	fmuls f31, f28, f1
/* 80146C14 00143B54  FC 20 E8 90 */	fmr f1, f29
/* 80146C18 00143B58  48 2C AB 19 */	bl pikmin2_sinf__Ff
/* 80146C1C 00143B5C  EC 5C 00 72 */	fmuls f2, f28, f1
/* 80146C20 00143B60  C3 A2 9F F4 */	lfs f29, lbl_80518354@sda21(r2)
/* 80146C24 00143B64  C0 22 9F F8 */	lfs f1, lbl_80518358@sda21(r2)
/* 80146C28 00143B68  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80146C2C 00143B6C  D0 5E 02 00 */	stfs f2, 0x200(r30)
/* 80146C30 00143B70  D3 DE 02 04 */	stfs f30, 0x204(r30)
/* 80146C34 00143B74  D3 FE 02 08 */	stfs f31, 0x208(r30)
/* 80146C38 00143B78  C0 5D 02 00 */	lfs f2, 0x200(r29)
/* 80146C3C 00143B7C  C0 7D 02 08 */	lfs f3, 0x208(r29)
/* 80146C40 00143B80  EF C2 00 72 */	fmuls f30, f2, f1
/* 80146C44 00143B84  EF E3 00 72 */	fmuls f31, f3, f1
/* 80146C48 00143B88  EC 1E 07 BA */	fmadds f0, f30, f30, f0
/* 80146C4C 00143B8C  EC 3F 07 FA */	fmadds f1, f31, f31, f0
/* 80146C50 00143B90  48 2C AB B5 */	bl pikmin2_sqrtf__Ff
/* 80146C54 00143B94  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80146C58 00143B98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80146C5C 00143B9C  40 81 00 1C */	ble .L_80146C78
/* 80146C60 00143BA0  C0 02 9F F8 */	lfs f0, lbl_80518358@sda21(r2)
/* 80146C64 00143BA4  EC 00 08 24 */	fdivs f0, f0, f1
/* 80146C68 00143BA8  EF DE 00 32 */	fmuls f30, f30, f0
/* 80146C6C 00143BAC  EF BD 00 32 */	fmuls f29, f29, f0
/* 80146C70 00143BB0  EF FF 00 32 */	fmuls f31, f31, f0
/* 80146C74 00143BB4  48 00 00 08 */	b .L_80146C7C
.L_80146C78:
/* 80146C78 00143BB8  FC 20 00 90 */	fmr f1, f0
.L_80146C7C:
/* 80146C7C 00143BBC  C0 5D 03 08 */	lfs f2, 0x308(r29)
/* 80146C80 00143BC0  C0 02 9F F4 */	lfs f0, lbl_80518354@sda21(r2)
/* 80146C84 00143BC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80146C88 00143BC8  40 81 00 08 */	ble .L_80146C90
/* 80146C8C 00143BCC  FC 20 00 90 */	fmr f1, f0
.L_80146C90:
/* 80146C90 00143BD0  EC 5E 00 72 */	fmuls f2, f30, f1
/* 80146C94 00143BD4  C0 1E 02 00 */	lfs f0, 0x200(r30)
/* 80146C98 00143BD8  EC 7D 00 72 */	fmuls f3, f29, f1
/* 80146C9C 00143BDC  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80146CA0 00143BE0  EC 00 10 2A */	fadds f0, f0, f2
/* 80146CA4 00143BE4  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 80146CA8 00143BE8  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 80146CAC 00143BEC  EC 00 18 2A */	fadds f0, f0, f3
/* 80146CB0 00143BF0  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 80146CB4 00143BF4  C0 1E 02 08 */	lfs f0, 0x208(r30)
/* 80146CB8 00143BF8  EC 00 08 2A */	fadds f0, f0, f1
/* 80146CBC 00143BFC  D0 1E 02 08 */	stfs f0, 0x208(r30)
/* 80146CC0 00143C00  C0 1E 02 00 */	lfs f0, 0x200(r30)
/* 80146CC4 00143C04  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 80146CC8 00143C08  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 80146CCC 00143C0C  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 80146CD0 00143C10  C0 1E 02 08 */	lfs f0, 0x208(r30)
/* 80146CD4 00143C14  D0 1E 01 EC */	stfs f0, 0x1ec(r30)
/* 80146CD8 00143C18  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80146CDC 00143C1C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80146CE0 00143C20  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80146CE4 00143C24  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80146CE8 00143C28  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80146CEC 00143C2C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80146CF0 00143C30  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 80146CF4 00143C34  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 80146CF8 00143C38  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80146CFC 00143C3C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80146D00 00143C40  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80146D04 00143C44  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80146D08 00143C48  7C 08 03 A6 */	mtlr r0
/* 80146D0C 00143C4C  38 21 00 80 */	addi r1, r1, 0x80
/* 80146D10 00143C50  4E 80 00 20 */	blr 
.endfn "throwPiki__Q24Game4NaviFPQ24Game4PikiR10Vector3<f>"

.fn commandOn__Q24Game4NaviFv, global
/* 80146D14 00143C54  88 63 03 0D */	lbz r3, 0x30d(r3)
/* 80146D18 00143C58  4E 80 00 20 */	blr 
.endfn commandOn__Q24Game4NaviFv

.fn getName__Q26PikiAI10ActFreeArgFv, weak
/* 80146D1C 00143C5C  3C 60 80 48 */	lis r3, lbl_8047C840@ha
/* 80146D20 00143C60  38 63 C8 40 */	addi r3, r3, lbl_8047C840@l
/* 80146D24 00143C64  4E 80 00 20 */	blr 
.endfn getName__Q26PikiAI10ActFreeArgFv

.fn getName__Q26PikiAI17CreatureActionArgFv, weak
/* 80146D28 00143C68  3C 60 80 48 */	lis r3, lbl_8047C84C@ha
/* 80146D2C 00143C6C  38 63 C8 4C */	addi r3, r3, lbl_8047C84C@l
/* 80146D30 00143C70  4E 80 00 20 */	blr 
.endfn getName__Q26PikiAI17CreatureActionArgFv

.fn getName__Q26PikiAI9ActionArgFv, weak
/* 80146D34 00143C74  3C 60 80 48 */	lis r3, lbl_8047C860@ha
/* 80146D38 00143C78  38 63 C8 60 */	addi r3, r3, lbl_8047C860@l
/* 80146D3C 00143C7C  4E 80 00 20 */	blr 
.endfn getName__Q26PikiAI9ActionArgFv

.fn getName__Q24Game13NaviDamageArgFv, weak
/* 80146D40 00143C80  3C 60 80 48 */	lis r3, lbl_8047C86C@ha
/* 80146D44 00143C84  38 63 C8 6C */	addi r3, r3, lbl_8047C86C@l
/* 80146D48 00143C88  4E 80 00 20 */	blr 
.endfn getName__Q24Game13NaviDamageArgFv

.fn "__ml__23Iterator<Q24Game5Onyon>Fv", weak
/* 80146D4C 00143C8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146D50 00143C90  7C 08 02 A6 */	mflr r0
/* 80146D54 00143C94  7C 64 1B 78 */	mr r4, r3
/* 80146D58 00143C98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146D5C 00143C9C  80 63 00 08 */	lwz r3, 8(r3)
/* 80146D60 00143CA0  80 84 00 04 */	lwz r4, 4(r4)
/* 80146D64 00143CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80146D68 00143CA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146D6C 00143CAC  7D 89 03 A6 */	mtctr r12
/* 80146D70 00143CB0  4E 80 04 21 */	bctrl 
/* 80146D74 00143CB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146D78 00143CB8  7C 08 03 A6 */	mtlr r0
/* 80146D7C 00143CBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80146D80 00143CC0  4E 80 00 20 */	blr 
.endfn "__ml__23Iterator<Q24Game5Onyon>Fv"

.fn "next__23Iterator<Q24Game5Onyon>Fv", weak
/* 80146D84 00143CC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146D88 00143CC8  7C 08 02 A6 */	mflr r0
/* 80146D8C 00143CCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146D90 00143CD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146D94 00143CD4  7C 7F 1B 78 */	mr r31, r3
/* 80146D98 00143CD8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80146D9C 00143CDC  28 00 00 00 */	cmplwi r0, 0
/* 80146DA0 00143CE0  40 82 00 24 */	bne .L_80146DC4
/* 80146DA4 00143CE4  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146DA8 00143CE8  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146DAC 00143CEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80146DB0 00143CF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146DB4 00143CF4  7D 89 03 A6 */	mtctr r12
/* 80146DB8 00143CF8  4E 80 04 21 */	bctrl 
/* 80146DBC 00143CFC  90 7F 00 04 */	stw r3, 4(r31)
/* 80146DC0 00143D00  48 00 00 94 */	b .L_80146E54
.L_80146DC4:
/* 80146DC4 00143D04  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146DC8 00143D08  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146DCC 00143D0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80146DD0 00143D10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146DD4 00143D14  7D 89 03 A6 */	mtctr r12
/* 80146DD8 00143D18  4E 80 04 21 */	bctrl 
/* 80146DDC 00143D1C  90 7F 00 04 */	stw r3, 4(r31)
/* 80146DE0 00143D20  48 00 00 58 */	b .L_80146E38
.L_80146DE4:
/* 80146DE4 00143D24  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146DE8 00143D28  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146DEC 00143D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80146DF0 00143D30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146DF4 00143D34  7D 89 03 A6 */	mtctr r12
/* 80146DF8 00143D38  4E 80 04 21 */	bctrl 
/* 80146DFC 00143D3C  7C 64 1B 78 */	mr r4, r3
/* 80146E00 00143D40  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80146E04 00143D44  81 83 00 00 */	lwz r12, 0(r3)
/* 80146E08 00143D48  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146E0C 00143D4C  7D 89 03 A6 */	mtctr r12
/* 80146E10 00143D50  4E 80 04 21 */	bctrl 
/* 80146E14 00143D54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146E18 00143D58  40 82 00 3C */	bne .L_80146E54
/* 80146E1C 00143D5C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146E20 00143D60  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146E24 00143D64  81 83 00 00 */	lwz r12, 0(r3)
/* 80146E28 00143D68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146E2C 00143D6C  7D 89 03 A6 */	mtctr r12
/* 80146E30 00143D70  4E 80 04 21 */	bctrl 
/* 80146E34 00143D74  90 7F 00 04 */	stw r3, 4(r31)
.L_80146E38:
/* 80146E38 00143D78  7F E3 FB 78 */	mr r3, r31
/* 80146E3C 00143D7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146E40 00143D80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80146E44 00143D84  7D 89 03 A6 */	mtctr r12
/* 80146E48 00143D88  4E 80 04 21 */	bctrl 
/* 80146E4C 00143D8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146E50 00143D90  41 82 FF 94 */	beq .L_80146DE4
.L_80146E54:
/* 80146E54 00143D94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146E58 00143D98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80146E5C 00143D9C  7C 08 03 A6 */	mtlr r0
/* 80146E60 00143DA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80146E64 00143DA4  4E 80 00 20 */	blr 
.endfn "next__23Iterator<Q24Game5Onyon>Fv"

.fn "first__23Iterator<Q24Game5Onyon>Fv", weak
/* 80146E68 00143DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146E6C 00143DAC  7C 08 02 A6 */	mflr r0
/* 80146E70 00143DB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146E74 00143DB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146E78 00143DB8  7C 7F 1B 78 */	mr r31, r3
/* 80146E7C 00143DBC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80146E80 00143DC0  28 00 00 00 */	cmplwi r0, 0
/* 80146E84 00143DC4  40 82 00 20 */	bne .L_80146EA4
/* 80146E88 00143DC8  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146E8C 00143DCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80146E90 00143DD0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80146E94 00143DD4  7D 89 03 A6 */	mtctr r12
/* 80146E98 00143DD8  4E 80 04 21 */	bctrl 
/* 80146E9C 00143DDC  90 7F 00 04 */	stw r3, 4(r31)
/* 80146EA0 00143DE0  48 00 00 90 */	b .L_80146F30
.L_80146EA4:
/* 80146EA4 00143DE4  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146EA8 00143DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80146EAC 00143DEC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80146EB0 00143DF0  7D 89 03 A6 */	mtctr r12
/* 80146EB4 00143DF4  4E 80 04 21 */	bctrl 
/* 80146EB8 00143DF8  90 7F 00 04 */	stw r3, 4(r31)
/* 80146EBC 00143DFC  48 00 00 58 */	b .L_80146F14
.L_80146EC0:
/* 80146EC0 00143E00  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146EC4 00143E04  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146EC8 00143E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80146ECC 00143E0C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146ED0 00143E10  7D 89 03 A6 */	mtctr r12
/* 80146ED4 00143E14  4E 80 04 21 */	bctrl 
/* 80146ED8 00143E18  7C 64 1B 78 */	mr r4, r3
/* 80146EDC 00143E1C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80146EE0 00143E20  81 83 00 00 */	lwz r12, 0(r3)
/* 80146EE4 00143E24  81 8C 00 08 */	lwz r12, 8(r12)
/* 80146EE8 00143E28  7D 89 03 A6 */	mtctr r12
/* 80146EEC 00143E2C  4E 80 04 21 */	bctrl 
/* 80146EF0 00143E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146EF4 00143E34  40 82 00 3C */	bne .L_80146F30
/* 80146EF8 00143E38  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146EFC 00143E3C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146F00 00143E40  81 83 00 00 */	lwz r12, 0(r3)
/* 80146F04 00143E44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146F08 00143E48  7D 89 03 A6 */	mtctr r12
/* 80146F0C 00143E4C  4E 80 04 21 */	bctrl 
/* 80146F10 00143E50  90 7F 00 04 */	stw r3, 4(r31)
.L_80146F14:
/* 80146F14 00143E54  7F E3 FB 78 */	mr r3, r31
/* 80146F18 00143E58  81 9F 00 00 */	lwz r12, 0(r31)
/* 80146F1C 00143E5C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80146F20 00143E60  7D 89 03 A6 */	mtctr r12
/* 80146F24 00143E64  4E 80 04 21 */	bctrl 
/* 80146F28 00143E68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80146F2C 00143E6C  41 82 FF 94 */	beq .L_80146EC0
.L_80146F30:
/* 80146F30 00143E70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146F34 00143E74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80146F38 00143E78  7C 08 03 A6 */	mtlr r0
/* 80146F3C 00143E7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80146F40 00143E80  4E 80 00 20 */	blr 
.endfn "first__23Iterator<Q24Game5Onyon>Fv"

.fn "__ml__26Iterator<Q24Game8BaseItem>Fv", weak
/* 80146F44 00143E84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146F48 00143E88  7C 08 02 A6 */	mflr r0
/* 80146F4C 00143E8C  7C 64 1B 78 */	mr r4, r3
/* 80146F50 00143E90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146F54 00143E94  80 63 00 08 */	lwz r3, 8(r3)
/* 80146F58 00143E98  80 84 00 04 */	lwz r4, 4(r4)
/* 80146F5C 00143E9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80146F60 00143EA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146F64 00143EA4  7D 89 03 A6 */	mtctr r12
/* 80146F68 00143EA8  4E 80 04 21 */	bctrl 
/* 80146F6C 00143EAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146F70 00143EB0  7C 08 03 A6 */	mtlr r0
/* 80146F74 00143EB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80146F78 00143EB8  4E 80 00 20 */	blr 
.endfn "__ml__26Iterator<Q24Game8BaseItem>Fv"

.fn "next__26Iterator<Q24Game8BaseItem>Fv", weak
/* 80146F7C 00143EBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146F80 00143EC0  7C 08 02 A6 */	mflr r0
/* 80146F84 00143EC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146F88 00143EC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146F8C 00143ECC  7C 7F 1B 78 */	mr r31, r3
/* 80146F90 00143ED0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80146F94 00143ED4  28 00 00 00 */	cmplwi r0, 0
/* 80146F98 00143ED8  40 82 00 24 */	bne .L_80146FBC
/* 80146F9C 00143EDC  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146FA0 00143EE0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146FA4 00143EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80146FA8 00143EE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146FAC 00143EEC  7D 89 03 A6 */	mtctr r12
/* 80146FB0 00143EF0  4E 80 04 21 */	bctrl 
/* 80146FB4 00143EF4  90 7F 00 04 */	stw r3, 4(r31)
/* 80146FB8 00143EF8  48 00 00 94 */	b .L_8014704C
.L_80146FBC:
/* 80146FBC 00143EFC  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146FC0 00143F00  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146FC4 00143F04  81 83 00 00 */	lwz r12, 0(r3)
/* 80146FC8 00143F08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80146FCC 00143F0C  7D 89 03 A6 */	mtctr r12
/* 80146FD0 00143F10  4E 80 04 21 */	bctrl 
/* 80146FD4 00143F14  90 7F 00 04 */	stw r3, 4(r31)
/* 80146FD8 00143F18  48 00 00 58 */	b .L_80147030
.L_80146FDC:
/* 80146FDC 00143F1C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80146FE0 00143F20  80 9F 00 04 */	lwz r4, 4(r31)
/* 80146FE4 00143F24  81 83 00 00 */	lwz r12, 0(r3)
/* 80146FE8 00143F28  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80146FEC 00143F2C  7D 89 03 A6 */	mtctr r12
/* 80146FF0 00143F30  4E 80 04 21 */	bctrl 
/* 80146FF4 00143F34  7C 64 1B 78 */	mr r4, r3
/* 80146FF8 00143F38  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80146FFC 00143F3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80147000 00143F40  81 8C 00 08 */	lwz r12, 8(r12)
/* 80147004 00143F44  7D 89 03 A6 */	mtctr r12
/* 80147008 00143F48  4E 80 04 21 */	bctrl 
/* 8014700C 00143F4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80147010 00143F50  40 82 00 3C */	bne .L_8014704C
/* 80147014 00143F54  80 7F 00 08 */	lwz r3, 8(r31)
/* 80147018 00143F58  80 9F 00 04 */	lwz r4, 4(r31)
/* 8014701C 00143F5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80147020 00143F60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80147024 00143F64  7D 89 03 A6 */	mtctr r12
/* 80147028 00143F68  4E 80 04 21 */	bctrl 
/* 8014702C 00143F6C  90 7F 00 04 */	stw r3, 4(r31)
.L_80147030:
/* 80147030 00143F70  7F E3 FB 78 */	mr r3, r31
/* 80147034 00143F74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80147038 00143F78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014703C 00143F7C  7D 89 03 A6 */	mtctr r12
/* 80147040 00143F80  4E 80 04 21 */	bctrl 
/* 80147044 00143F84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80147048 00143F88  41 82 FF 94 */	beq .L_80146FDC
.L_8014704C:
/* 8014704C 00143F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147050 00143F90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147054 00143F94  7C 08 03 A6 */	mtlr r0
/* 80147058 00143F98  38 21 00 10 */	addi r1, r1, 0x10
/* 8014705C 00143F9C  4E 80 00 20 */	blr 
.endfn "next__26Iterator<Q24Game8BaseItem>Fv"

.fn "first__26Iterator<Q24Game8BaseItem>Fv", weak
/* 80147060 00143FA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147064 00143FA4  7C 08 02 A6 */	mflr r0
/* 80147068 00143FA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014706C 00143FAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147070 00143FB0  7C 7F 1B 78 */	mr r31, r3
/* 80147074 00143FB4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80147078 00143FB8  28 00 00 00 */	cmplwi r0, 0
/* 8014707C 00143FBC  40 82 00 20 */	bne .L_8014709C
/* 80147080 00143FC0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80147084 00143FC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80147088 00143FC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014708C 00143FCC  7D 89 03 A6 */	mtctr r12
/* 80147090 00143FD0  4E 80 04 21 */	bctrl 
/* 80147094 00143FD4  90 7F 00 04 */	stw r3, 4(r31)
/* 80147098 00143FD8  48 00 00 90 */	b .L_80147128
.L_8014709C:
/* 8014709C 00143FDC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801470A0 00143FE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801470A4 00143FE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801470A8 00143FE8  7D 89 03 A6 */	mtctr r12
/* 801470AC 00143FEC  4E 80 04 21 */	bctrl 
/* 801470B0 00143FF0  90 7F 00 04 */	stw r3, 4(r31)
/* 801470B4 00143FF4  48 00 00 58 */	b .L_8014710C
.L_801470B8:
/* 801470B8 00143FF8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801470BC 00143FFC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801470C0 00144000  81 83 00 00 */	lwz r12, 0(r3)
/* 801470C4 00144004  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801470C8 00144008  7D 89 03 A6 */	mtctr r12
/* 801470CC 0014400C  4E 80 04 21 */	bctrl 
/* 801470D0 00144010  7C 64 1B 78 */	mr r4, r3
/* 801470D4 00144014  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801470D8 00144018  81 83 00 00 */	lwz r12, 0(r3)
/* 801470DC 0014401C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801470E0 00144020  7D 89 03 A6 */	mtctr r12
/* 801470E4 00144024  4E 80 04 21 */	bctrl 
/* 801470E8 00144028  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801470EC 0014402C  40 82 00 3C */	bne .L_80147128
/* 801470F0 00144030  80 7F 00 08 */	lwz r3, 8(r31)
/* 801470F4 00144034  80 9F 00 04 */	lwz r4, 4(r31)
/* 801470F8 00144038  81 83 00 00 */	lwz r12, 0(r3)
/* 801470FC 0014403C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80147100 00144040  7D 89 03 A6 */	mtctr r12
/* 80147104 00144044  4E 80 04 21 */	bctrl 
/* 80147108 00144048  90 7F 00 04 */	stw r3, 4(r31)
.L_8014710C:
/* 8014710C 0014404C  7F E3 FB 78 */	mr r3, r31
/* 80147110 00144050  81 9F 00 00 */	lwz r12, 0(r31)
/* 80147114 00144054  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80147118 00144058  7D 89 03 A6 */	mtctr r12
/* 8014711C 0014405C  4E 80 04 21 */	bctrl 
/* 80147120 00144060  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80147124 00144064  41 82 FF 94 */	beq .L_801470B8
.L_80147128:
/* 80147128 00144068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014712C 0014406C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147130 00144070  7C 08 03 A6 */	mtlr r0
/* 80147134 00144074  38 21 00 10 */	addi r1, r1, 0x10
/* 80147138 00144078  4E 80 00 20 */	blr 
.endfn "first__26Iterator<Q24Game8BaseItem>Fv"

.fn actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection, weak
/* 8014713C 0014407C  38 60 00 01 */	li r3, 1
/* 80147140 00144080  4E 80 00 20 */	blr 
.endfn actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection

.fn actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection, weak
/* 80147144 00144084  38 60 00 01 */	li r3, 1
/* 80147148 00144088  4E 80 00 20 */	blr 
.endfn actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection

.fn actVs__Q24Game11GameMessageFPQ24Game13VsGameSection, weak
/* 8014714C 0014408C  38 60 00 01 */	li r3, 1
/* 80147150 00144090  4E 80 00 20 */	blr 
.endfn actVs__Q24Game11GameMessageFPQ24Game13VsGameSection

.fn "__ml__36Iterator<Q34Game12ItemPikihead4Item>Fv", weak
/* 80147154 00144094  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147158 00144098  7C 08 02 A6 */	mflr r0
/* 8014715C 0014409C  7C 64 1B 78 */	mr r4, r3
/* 80147160 001440A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147164 001440A4  80 63 00 08 */	lwz r3, 8(r3)
/* 80147168 001440A8  80 84 00 04 */	lwz r4, 4(r4)
/* 8014716C 001440AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80147170 001440B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80147174 001440B4  7D 89 03 A6 */	mtctr r12
/* 80147178 001440B8  4E 80 04 21 */	bctrl 
/* 8014717C 001440BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147180 001440C0  7C 08 03 A6 */	mtlr r0
/* 80147184 001440C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80147188 001440C8  4E 80 00 20 */	blr 
.endfn "__ml__36Iterator<Q34Game12ItemPikihead4Item>Fv"

.fn "next__36Iterator<Q34Game12ItemPikihead4Item>Fv", weak
/* 8014718C 001440CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147190 001440D0  7C 08 02 A6 */	mflr r0
/* 80147194 001440D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147198 001440D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014719C 001440DC  7C 7F 1B 78 */	mr r31, r3
/* 801471A0 001440E0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801471A4 001440E4  28 00 00 00 */	cmplwi r0, 0
/* 801471A8 001440E8  40 82 00 24 */	bne .L_801471CC
/* 801471AC 001440EC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801471B0 001440F0  80 9F 00 04 */	lwz r4, 4(r31)
/* 801471B4 001440F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801471B8 001440F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801471BC 001440FC  7D 89 03 A6 */	mtctr r12
/* 801471C0 00144100  4E 80 04 21 */	bctrl 
/* 801471C4 00144104  90 7F 00 04 */	stw r3, 4(r31)
/* 801471C8 00144108  48 00 00 94 */	b .L_8014725C
.L_801471CC:
/* 801471CC 0014410C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801471D0 00144110  80 9F 00 04 */	lwz r4, 4(r31)
/* 801471D4 00144114  81 83 00 00 */	lwz r12, 0(r3)
/* 801471D8 00144118  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801471DC 0014411C  7D 89 03 A6 */	mtctr r12
/* 801471E0 00144120  4E 80 04 21 */	bctrl 
/* 801471E4 00144124  90 7F 00 04 */	stw r3, 4(r31)
/* 801471E8 00144128  48 00 00 58 */	b .L_80147240
.L_801471EC:
/* 801471EC 0014412C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801471F0 00144130  80 9F 00 04 */	lwz r4, 4(r31)
/* 801471F4 00144134  81 83 00 00 */	lwz r12, 0(r3)
/* 801471F8 00144138  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801471FC 0014413C  7D 89 03 A6 */	mtctr r12
/* 80147200 00144140  4E 80 04 21 */	bctrl 
/* 80147204 00144144  7C 64 1B 78 */	mr r4, r3
/* 80147208 00144148  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8014720C 0014414C  81 83 00 00 */	lwz r12, 0(r3)
/* 80147210 00144150  81 8C 00 08 */	lwz r12, 8(r12)
/* 80147214 00144154  7D 89 03 A6 */	mtctr r12
/* 80147218 00144158  4E 80 04 21 */	bctrl 
/* 8014721C 0014415C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80147220 00144160  40 82 00 3C */	bne .L_8014725C
/* 80147224 00144164  80 7F 00 08 */	lwz r3, 8(r31)
/* 80147228 00144168  80 9F 00 04 */	lwz r4, 4(r31)
/* 8014722C 0014416C  81 83 00 00 */	lwz r12, 0(r3)
/* 80147230 00144170  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80147234 00144174  7D 89 03 A6 */	mtctr r12
/* 80147238 00144178  4E 80 04 21 */	bctrl 
/* 8014723C 0014417C  90 7F 00 04 */	stw r3, 4(r31)
.L_80147240:
/* 80147240 00144180  7F E3 FB 78 */	mr r3, r31
/* 80147244 00144184  81 9F 00 00 */	lwz r12, 0(r31)
/* 80147248 00144188  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014724C 0014418C  7D 89 03 A6 */	mtctr r12
/* 80147250 00144190  4E 80 04 21 */	bctrl 
/* 80147254 00144194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80147258 00144198  41 82 FF 94 */	beq .L_801471EC
.L_8014725C:
/* 8014725C 0014419C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147260 001441A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147264 001441A4  7C 08 03 A6 */	mtlr r0
/* 80147268 001441A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014726C 001441AC  4E 80 00 20 */	blr 
.endfn "next__36Iterator<Q34Game12ItemPikihead4Item>Fv"

.fn "first__36Iterator<Q34Game12ItemPikihead4Item>Fv", weak
/* 80147270 001441B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147274 001441B4  7C 08 02 A6 */	mflr r0
/* 80147278 001441B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014727C 001441BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147280 001441C0  7C 7F 1B 78 */	mr r31, r3
/* 80147284 001441C4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80147288 001441C8  28 00 00 00 */	cmplwi r0, 0
/* 8014728C 001441CC  40 82 00 20 */	bne .L_801472AC
/* 80147290 001441D0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80147294 001441D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80147298 001441D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014729C 001441DC  7D 89 03 A6 */	mtctr r12
/* 801472A0 001441E0  4E 80 04 21 */	bctrl 
/* 801472A4 001441E4  90 7F 00 04 */	stw r3, 4(r31)
/* 801472A8 001441E8  48 00 00 90 */	b .L_80147338
.L_801472AC:
/* 801472AC 001441EC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801472B0 001441F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801472B4 001441F4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801472B8 001441F8  7D 89 03 A6 */	mtctr r12
/* 801472BC 001441FC  4E 80 04 21 */	bctrl 
/* 801472C0 00144200  90 7F 00 04 */	stw r3, 4(r31)
/* 801472C4 00144204  48 00 00 58 */	b .L_8014731C
.L_801472C8:
/* 801472C8 00144208  80 7F 00 08 */	lwz r3, 8(r31)
/* 801472CC 0014420C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801472D0 00144210  81 83 00 00 */	lwz r12, 0(r3)
/* 801472D4 00144214  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801472D8 00144218  7D 89 03 A6 */	mtctr r12
/* 801472DC 0014421C  4E 80 04 21 */	bctrl 
/* 801472E0 00144220  7C 64 1B 78 */	mr r4, r3
/* 801472E4 00144224  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801472E8 00144228  81 83 00 00 */	lwz r12, 0(r3)
/* 801472EC 0014422C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801472F0 00144230  7D 89 03 A6 */	mtctr r12
/* 801472F4 00144234  4E 80 04 21 */	bctrl 
/* 801472F8 00144238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801472FC 0014423C  40 82 00 3C */	bne .L_80147338
/* 80147300 00144240  80 7F 00 08 */	lwz r3, 8(r31)
/* 80147304 00144244  80 9F 00 04 */	lwz r4, 4(r31)
/* 80147308 00144248  81 83 00 00 */	lwz r12, 0(r3)
/* 8014730C 0014424C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80147310 00144250  7D 89 03 A6 */	mtctr r12
/* 80147314 00144254  4E 80 04 21 */	bctrl 
/* 80147318 00144258  90 7F 00 04 */	stw r3, 4(r31)
.L_8014731C:
/* 8014731C 0014425C  7F E3 FB 78 */	mr r3, r31
/* 80147320 00144260  81 9F 00 00 */	lwz r12, 0(r31)
/* 80147324 00144264  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80147328 00144268  7D 89 03 A6 */	mtctr r12
/* 8014732C 0014426C  4E 80 04 21 */	bctrl 
/* 80147330 00144270  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80147334 00144274  41 82 FF 94 */	beq .L_801472C8
.L_80147338:
/* 80147338 00144278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014733C 0014427C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147340 00144280  7C 08 03 A6 */	mtlr r0
/* 80147344 00144284  38 21 00 10 */	addi r1, r1, 0x10
/* 80147348 00144288  4E 80 00 20 */	blr 
.endfn "first__36Iterator<Q34Game12ItemPikihead4Item>Fv"

.fn "setVelocity__Q24Game4NaviFR10Vector3<f>", weak
/* 8014734C 0014428C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80147350 00144290  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 80147354 00144294  C0 04 00 04 */	lfs f0, 4(r4)
/* 80147358 00144298  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 8014735C 0014429C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80147360 001442A0  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 80147364 001442A4  4E 80 00 20 */	blr 
.endfn "setVelocity__Q24Game4NaviFR10Vector3<f>"

.fn getCreatureName__Q24Game4NaviFv, weak
/* 80147368 001442A8  38 62 A0 A8 */	addi r3, r2, lbl_80518408@sda21
/* 8014736C 001442AC  4E 80 00 20 */	blr 
.endfn getCreatureName__Q24Game4NaviFv

.fn create__Q23efx7TFueactFPQ23efx3Arg, weak
/* 80147370 001442B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147374 001442B4  7C 08 02 A6 */	mflr r0
/* 80147378 001442B8  38 80 00 00 */	li r4, 0
/* 8014737C 001442BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147380 001442C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147384 001442C4  3B E0 00 00 */	li r31, 0
/* 80147388 001442C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8014738C 001442CC  7C 7E 1B 78 */	mr r30, r3
/* 80147390 001442D0  38 7E 00 04 */	addi r3, r30, 4
/* 80147394 001442D4  81 9E 00 04 */	lwz r12, 4(r30)
/* 80147398 001442D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014739C 001442DC  7D 89 03 A6 */	mtctr r12
/* 801473A0 001442E0  4E 80 04 21 */	bctrl 
/* 801473A4 001442E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801473A8 001442E8  41 82 00 48 */	beq .L_801473F0
/* 801473AC 001442EC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 801473B0 001442F0  38 80 00 00 */	li r4, 0
/* 801473B4 001442F4  81 9E 00 1C */	lwz r12, 0x1c(r30)
/* 801473B8 001442F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801473BC 001442FC  7D 89 03 A6 */	mtctr r12
/* 801473C0 00144300  4E 80 04 21 */	bctrl 
/* 801473C4 00144304  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801473C8 00144308  41 82 00 28 */	beq .L_801473F0
/* 801473CC 0014430C  38 7E 00 34 */	addi r3, r30, 0x34
/* 801473D0 00144310  38 80 00 00 */	li r4, 0
/* 801473D4 00144314  81 9E 00 34 */	lwz r12, 0x34(r30)
/* 801473D8 00144318  81 8C 00 08 */	lwz r12, 8(r12)
/* 801473DC 0014431C  7D 89 03 A6 */	mtctr r12
/* 801473E0 00144320  4E 80 04 21 */	bctrl 
/* 801473E4 00144324  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801473E8 00144328  41 82 00 08 */	beq .L_801473F0
/* 801473EC 0014432C  3B E0 00 01 */	li r31, 1
.L_801473F0:
/* 801473F0 00144330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801473F4 00144334  7F E3 FB 78 */	mr r3, r31
/* 801473F8 00144338  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801473FC 0014433C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80147400 00144340  7C 08 03 A6 */	mtlr r0
/* 80147404 00144344  38 21 00 10 */	addi r1, r1, 0x10
/* 80147408 00144348  4E 80 00 20 */	blr 
.endfn create__Q23efx7TFueactFPQ23efx3Arg

.fn fade__Q23efx7TFueactFv, weak
/* 8014740C 0014434C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147410 00144350  7C 08 02 A6 */	mflr r0
/* 80147414 00144354  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147418 00144358  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014741C 0014435C  7C 7F 1B 78 */	mr r31, r3
/* 80147420 00144360  38 7F 00 04 */	addi r3, r31, 4
/* 80147424 00144364  81 9F 00 04 */	lwz r12, 4(r31)
/* 80147428 00144368  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014742C 0014436C  7D 89 03 A6 */	mtctr r12
/* 80147430 00144370  4E 80 04 21 */	bctrl 
/* 80147434 00144374  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80147438 00144378  81 9F 00 1C */	lwz r12, 0x1c(r31)
/* 8014743C 0014437C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80147440 00144380  7D 89 03 A6 */	mtctr r12
/* 80147444 00144384  4E 80 04 21 */	bctrl 
/* 80147448 00144388  38 7F 00 34 */	addi r3, r31, 0x34
/* 8014744C 0014438C  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 80147450 00144390  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80147454 00144394  7D 89 03 A6 */	mtctr r12
/* 80147458 00144398  4E 80 04 21 */	bctrl 
/* 8014745C 0014439C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147460 001443A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147464 001443A4  7C 08 03 A6 */	mtlr r0
/* 80147468 001443A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014746C 001443AC  4E 80 00 20 */	blr 
.endfn fade__Q23efx7TFueactFv

.fn fade__Q23efx13TFueactCircleFv, weak
/* 80147470 001443B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147474 001443B4  7C 08 02 A6 */	mflr r0
/* 80147478 001443B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014747C 001443BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147480 001443C0  7C 7F 1B 78 */	mr r31, r3
/* 80147484 001443C4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80147488 001443C8  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8014748C 001443CC  48 27 46 21 */	bl fade__11ParticleMgrFP14JPABaseEmitter
/* 80147490 001443D0  38 00 00 00 */	li r0, 0
/* 80147494 001443D4  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80147498 001443D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014749C 001443DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801474A0 001443E0  7C 08 03 A6 */	mtlr r0
/* 801474A4 001443E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801474A8 001443E8  4E 80 00 20 */	blr 
.endfn fade__Q23efx13TFueactCircleFv

.fn forceKill__Q23efx7TFueactFv, weak
/* 801474AC 001443EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801474B0 001443F0  7C 08 02 A6 */	mflr r0
/* 801474B4 001443F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801474B8 001443F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801474BC 001443FC  7C 7F 1B 78 */	mr r31, r3
/* 801474C0 00144400  38 7F 00 04 */	addi r3, r31, 4
/* 801474C4 00144404  81 9F 00 04 */	lwz r12, 4(r31)
/* 801474C8 00144408  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801474CC 0014440C  7D 89 03 A6 */	mtctr r12
/* 801474D0 00144410  4E 80 04 21 */	bctrl 
/* 801474D4 00144414  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801474D8 00144418  81 9F 00 1C */	lwz r12, 0x1c(r31)
/* 801474DC 0014441C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801474E0 00144420  7D 89 03 A6 */	mtctr r12
/* 801474E4 00144424  4E 80 04 21 */	bctrl 
/* 801474E8 00144428  38 7F 00 34 */	addi r3, r31, 0x34
/* 801474EC 0014442C  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 801474F0 00144430  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801474F4 00144434  7D 89 03 A6 */	mtctr r12
/* 801474F8 00144438  4E 80 04 21 */	bctrl 
/* 801474FC 0014443C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147500 00144440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147504 00144444  7C 08 03 A6 */	mtlr r0
/* 80147508 00144448  38 21 00 10 */	addi r1, r1, 0x10
/* 8014750C 0014444C  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx7TFueactFv

.fn forceKill__Q23efx13TFueactCircleFv, weak
/* 80147510 00144450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147514 00144454  7C 08 02 A6 */	mflr r0
/* 80147518 00144458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014751C 0014445C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147520 00144460  7C 7F 1B 78 */	mr r31, r3
/* 80147524 00144464  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80147528 00144468  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8014752C 0014446C  48 27 45 55 */	bl forceKill__11ParticleMgrFP14JPABaseEmitter
/* 80147530 00144470  38 00 00 00 */	li r0, 0
/* 80147534 00144474  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80147538 00144478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014753C 0014447C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147540 00144480  7C 08 03 A6 */	mtlr r0
/* 80147544 00144484  38 21 00 10 */	addi r1, r1, 0x10
/* 80147548 00144488  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx13TFueactCircleFv

.fn "init__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi", weak
/* 8014754C 0014448C  4E 80 00 20 */	blr 
.endfn "init__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"

.fn "invoke__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>FPQ24Game10CellObject", weak
/* 80147550 00144490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147554 00144494  7C 08 02 A6 */	mflr r0
/* 80147558 00144498  7C 65 1B 78 */	mr r5, r3
/* 8014755C 0014449C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147560 001444A0  39 85 00 08 */	addi r12, r5, 8
/* 80147564 001444A4  80 63 00 04 */	lwz r3, 4(r3)
/* 80147568 001444A8  4B F7 A5 BD */	bl __ptmf_scall
/* 8014756C 001444AC  60 00 00 00 */	nop 
/* 80147570 001444B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147574 001444B4  7C 08 03 A6 */	mtlr r0
/* 80147578 001444B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014757C 001444BC  4E 80 00 20 */	blr 
.endfn "invoke__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>FPQ24Game10CellObject"

.fn "transit__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg", weak
/* 80147580 001444C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80147584 001444C4  7C 08 02 A6 */	mflr r0
/* 80147588 001444C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014758C 001444CC  54 A0 10 3A */	slwi r0, r5, 2
/* 80147590 001444D0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80147594 001444D4  7C 7B 1B 78 */	mr r27, r3
/* 80147598 001444D8  7C 9C 23 78 */	mr r28, r4
/* 8014759C 001444DC  7C DD 33 78 */	mr r29, r6
/* 801475A0 001444E0  83 C4 02 74 */	lwz r30, 0x274(r4)
/* 801475A4 001444E4  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801475A8 001444E8  28 1E 00 00 */	cmplwi r30, 0
/* 801475AC 001444EC  7F E3 00 2E */	lwzx r31, r3, r0
/* 801475B0 001444F0  41 82 00 20 */	beq .L_801475D0
/* 801475B4 001444F4  7F C3 F3 78 */	mr r3, r30
/* 801475B8 001444F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801475BC 001444FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801475C0 00144500  7D 89 03 A6 */	mtctr r12
/* 801475C4 00144504  4E 80 04 21 */	bctrl 
/* 801475C8 00144508  80 1E 00 04 */	lwz r0, 4(r30)
/* 801475CC 0014450C  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801475D0:
/* 801475D0 00144510  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801475D4 00144514  7C 1F 00 00 */	cmpw r31, r0
/* 801475D8 00144518  41 80 00 08 */	blt .L_801475E0
.L_801475DC:
/* 801475DC 0014451C  48 00 00 00 */	b .L_801475DC
.L_801475E0:
/* 801475E0 00144520  80 7B 00 04 */	lwz r3, 4(r27)
/* 801475E4 00144524  57 E0 10 3A */	slwi r0, r31, 2
/* 801475E8 00144528  7F 84 E3 78 */	mr r4, r28
/* 801475EC 0014452C  7F A5 EB 78 */	mr r5, r29
/* 801475F0 00144530  7C 63 00 2E */	lwzx r3, r3, r0
/* 801475F4 00144534  90 7C 02 74 */	stw r3, 0x274(r28)
/* 801475F8 00144538  81 83 00 00 */	lwz r12, 0(r3)
/* 801475FC 0014453C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80147600 00144540  7D 89 03 A6 */	mtctr r12
/* 80147604 00144544  4E 80 04 21 */	bctrl 
/* 80147608 00144548  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8014760C 0014454C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80147610 00144550  7C 08 03 A6 */	mtlr r0
/* 80147614 00144554  38 21 00 20 */	addi r1, r1, 0x20
/* 80147618 00144558  4E 80 00 20 */	blr 
.endfn "transit__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"

.fn "init__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviPQ24Game8StateArg", weak
/* 8014761C 0014455C  4E 80 00 20 */	blr 
.endfn "init__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviPQ24Game8StateArg"

.fn "cleanup__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi", weak
/* 80147620 00144560  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"

.fn "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi", weak
/* 80147624 00144564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147628 00144568  7C 08 02 A6 */	mflr r0
/* 8014762C 0014456C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147630 00144570  80 64 02 74 */	lwz r3, 0x274(r4)
/* 80147634 00144574  28 03 00 00 */	cmplwi r3, 0
/* 80147638 00144578  41 82 00 14 */	beq .L_8014764C
/* 8014763C 0014457C  81 83 00 00 */	lwz r12, 0(r3)
/* 80147640 00144580  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80147644 00144584  7D 89 03 A6 */	mtctr r12
/* 80147648 00144588  4E 80 04 21 */	bctrl 
.L_8014764C:
/* 8014764C 0014458C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147650 00144590  7C 08 03 A6 */	mtlr r0
/* 80147654 00144594  38 21 00 10 */	addi r1, r1, 0x10
/* 80147658 00144598  4E 80 00 20 */	blr 
.endfn "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"

.fn "exec__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi", weak
/* 8014765C 0014459C  4E 80 00 20 */	blr 
.endfn "exec__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"

.fn __sinit_navi_cpp, local
/* 80147660 001445A0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80147664 001445A4  38 00 FF FF */	li r0, -1
/* 80147668 001445A8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8014766C 001445AC  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80147670 001445B0  90 0D 92 90 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80147674 001445B4  D4 03 04 E0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80147678 001445B8  D0 0D 92 94 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8014767C 001445BC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80147680 001445C0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80147684 001445C4  4E 80 00 20 */	blr 
.endfn __sinit_navi_cpp

.fn "@4@__dt__Q23efx12TFueactBiri1Fv", weak
/* 80147688 001445C8  38 63 FF FC */	addi r3, r3, -4
/* 8014768C 001445CC  4B FF 87 D0 */	b __dt__Q23efx12TFueactBiri1Fv
.endfn "@4@__dt__Q23efx12TFueactBiri1Fv"

.fn "@4@__dt__Q23efx12TFueactBiri2Fv", weak
/* 80147690 001445D0  38 63 FF FC */	addi r3, r3, -4
/* 80147694 001445D4  4B FF 87 2C */	b __dt__Q23efx12TFueactBiri2Fv
.endfn "@4@__dt__Q23efx12TFueactBiri2Fv"

.fn "@376@onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent", weak
/* 80147698 001445D8  38 63 FE 88 */	addi r3, r3, -376
/* 8014769C 001445DC  4B FF 8D A8 */	b onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent
.endfn "@376@onKeyEvent__Q24Game4NaviFRCQ28SysShape8KeyEvent"

.fn "@784@12@viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>", weak
/* 801476A0 001445E0  39 60 00 0C */	li r11, 0xc
/* 801476A4 001445E4  7D 63 58 2E */	lwzx r11, r3, r11
/* 801476A8 001445E8  7C 63 5A 14 */	add r3, r3, r11
/* 801476AC 001445EC  38 63 FC F0 */	addi r3, r3, -784
/* 801476B0 001445F0  4B FF A0 88 */	b "viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"
.endfn "@784@12@viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<f>"

.fn "@784@12@viewGetShape__Q24Game4NaviFv", weak
/* 801476B4 001445F4  39 60 00 0C */	li r11, 0xc
/* 801476B8 001445F8  7D 63 58 2E */	lwzx r11, r3, r11
/* 801476BC 001445FC  7C 63 5A 14 */	add r3, r3, r11
/* 801476C0 00144600  38 63 FC F0 */	addi r3, r3, -784
/* 801476C4 00144604  4B FF A0 78 */	b viewGetShape__Q24Game4NaviFv
.endfn "@784@12@viewGetShape__Q24Game4NaviFv"

.fn "@784@12@viewGetBaseScale__Q24Game4NaviFv", weak
/* 801476C8 00144608  39 60 00 0C */	li r11, 0xc
/* 801476CC 0014460C  7D 63 58 2E */	lwzx r11, r3, r11
/* 801476D0 00144610  7C 63 5A 14 */	add r3, r3, r11
/* 801476D4 00144614  38 63 FC F0 */	addi r3, r3, -784
/* 801476D8 00144618  4B FF A0 6C */	b viewGetBaseScale__Q24Game4NaviFv
.endfn "@784@12@viewGetBaseScale__Q24Game4NaviFv"
