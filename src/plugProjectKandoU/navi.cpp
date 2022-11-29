#include "Game/Navi.h"
#include "Game/StateMachine.h"

#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/JUT/JUTException.h"

#include "SysShape/Model.h"

#include "CollInfo.h"
/*
    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_navi_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .balign 8
    lbl_8047C788:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .balign 4
    lbl_8047C794:
        .asciz "navi.cpp"
    .balign 4
    lbl_8047C7A0:
        .4byte 0x83558393
        .4byte 0x815B815B
        .4byte 0x81698145
        .4byte 0x84748145
        .4byte 0x816A817C
        .4byte 0x817C836C
        .4byte 0x83930A00
    .balign 4
    lbl_8047C7BC:
        .asciz "happajnt3"
    .balign 4
    lbl_8047C7C8:
        .asciz "no target!! HOLEIN\n"
    .balign 4
    lbl_8047C7DC:
        .asciz "no target!! FOUNTAINON\n"
    .balign 4
    lbl_8047C7F4:
        .asciz "P2Assert"
    .balign 4
    lbl_8047C800:
        .asciz "timeout %d,%d:%d\n%d,%d-%d,%d\n"
    .balign 4
    lbl_8047C820:
        .asciz "infloop %d,%d:%d\n%d,%d-%d,%d\n"
    .balign 4
    lbl_8047C840:
        .asciz "ActFreeArg"
    .balign 4
    lbl_8047C84C:
        .asciz "CreatureActionArg"
    .balign 4
    lbl_8047C860:
        .asciz "ActionArg"
    .balign 4
    lbl_8047C86C:
        .asciz "NaviDamageArg"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .balign 8
    lbl_804B04E0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    lbl_804B04EC:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte applyDopeSmoke__Q24Game4NaviFPQ24Game10CellObject
    lbl_804B04F8:
        .4byte lbl_801425F8
        .4byte lbl_8014280C
        .4byte lbl_80142618
        .4byte lbl_80142678
        .4byte lbl_801426D8
        .4byte lbl_801426F8
        .4byte lbl_8014279C
        .4byte lbl_801426E8
    .global __vt__Q26PikiAI10ActFreeArg
    __vt__Q26PikiAI10ActFreeArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI10ActFreeArgFv
    .global __vt__Q26PikiAI17CreatureActionArg
    __vt__Q26PikiAI17CreatureActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI17CreatureActionArgFv
    .global __vt__Q26PikiAI9ActionArg
    __vt__Q26PikiAI9ActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI9ActionArgFv
    .global __vt__Q24Game13NaviDamageArg
    __vt__Q24Game13NaviDamageArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q24Game13NaviDamageArgFv
    .global "__vt__23Iterator<Q24Game5Onyon>"
    "__vt__23Iterator<Q24Game5Onyon>":
        .4byte 0
        .4byte 0
        .4byte "first__23Iterator<Q24Game5Onyon>Fv"
        .4byte "next__23Iterator<Q24Game5Onyon>Fv"
        .4byte "isDone__23Iterator<Q24Game5Onyon>Fv"
        .4byte "__ml__23Iterator<Q24Game5Onyon>Fv"
    .global "__vt__26Iterator<Q24Game8BaseItem>"
    "__vt__26Iterator<Q24Game8BaseItem>":
        .4byte 0
        .4byte 0
        .4byte "first__26Iterator<Q24Game8BaseItem>Fv"
        .4byte "next__26Iterator<Q24Game8BaseItem>Fv"
        .4byte "isDone__26Iterator<Q24Game8BaseItem>Fv"
        .4byte "__ml__26Iterator<Q24Game8BaseItem>Fv"
    .global "__vt__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>"
    "__vt__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__44Delegate1<Q24Game4Navi,PQ24Game10CellObject>FPQ24Game10CellObject"
    .global "__vt__32IDelegate1<PQ24Game10CellObject>"
    "__vt__32IDelegate1<PQ24Game10CellObject>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game11GameMessage
    __vt__Q24Game11GameMessage:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
        .4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
        .4byte actVs__Q24Game11GameMessageFPQ24Game13VsGameSection
    .global "__vt__36Iterator<Q34Game12ItemPikihead4Item>"
    "__vt__36Iterator<Q34Game12ItemPikihead4Item>":
        .4byte 0
        .4byte 0
        .4byte "first__36Iterator<Q34Game12ItemPikihead4Item>Fv"
        .4byte "next__36Iterator<Q34Game12ItemPikihead4Item>Fv"
        .4byte "isDone__36Iterator<Q34Game12ItemPikihead4Item>Fv"
        .4byte "__ml__36Iterator<Q34Game12ItemPikihead4Item>Fv"
    .global __vt__Q24Game4Navi
    __vt__Q24Game4Navi:
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
        .4byte
   startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
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
    .global __vt__Q23efx15ContextChasePos
    __vt__Q23efx15ContextChasePos:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23efx15ContextChasePosFv
        .4byte getChildCount__5CNodeFv
    .global "__vt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>"
    "__vt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx10TChaseMtx2
    __vt__Q23efx10TChaseMtx2:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global "__vt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>"
    "__vt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .global __vt__Q23efx11TChaseMtxT2
    __vt__Q23efx11TChaseMtxT2:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .global __vt__Q23efx12TOrimadamage
    __vt__Q23efx12TOrimadamage:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
        .4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .global __vt__Q23efx7Context
    __vt__Q23efx7Context:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23efx7ContextFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q23efx12TFueactBiri2
    __vt__Q23efx12TFueactBiri2:
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
        .4byte
   doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx12TFueactBiri2Fv .global __vt__Q23efx12TFueactBiri1
    __vt__Q23efx12TFueactBiri1:
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
        .4byte
   doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx12TFueactBiri1Fv .global __vt__Q23efx7TFueact
    __vt__Q23efx7TFueact:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx7TFueactFPQ23efx3Arg
        .4byte forceKill__Q23efx7TFueactFv
        .4byte fade__Q23efx7TFueactFv
    .global "__vt__Q24Game26StateMachine<Q24Game4Navi>"
    "__vt__Q24Game26StateMachine<Q24Game4Navi>":
        .4byte 0
        .4byte 0
        .4byte "init__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .balign 8
    gu32NAN___Q24Game5P2JST:
        .skip 4
    gfNAN___Q24Game5P2JST:
        .skip 4
    numSearch:
        .skip 4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_80518348:
        .float 0.5
    lbl_8051834C:
        .float 10.0
    lbl_80518350:
        .float 4.0
    lbl_80518354:
        .float 0.0
    lbl_80518358:
        .float 1.0
    lbl_8051835C:
        .float 24.0
    .balign 4
    lbl_80518360:
        .asciz "headjnt"
    .balign 4
    lbl_80518368:
        .float 1.3
    lbl_8051836C:
        .float 1.5
    lbl_80518370:
        .float 25.0
    lbl_80518374:
        .float 3.0003002
    lbl_80518378:
        .float 15.0
    lbl_8051837C:
        .float 140.0
    lbl_80518380:
        .float 50.0
    lbl_80518384:
        .float -1.0
    lbl_80518388:
        .float 200.0
    lbl_8051838C:
        .float 150.0
    lbl_80518390:
        .float 0.02
    lbl_80518394:
        .float 0.015
    lbl_80518398:
        .float 30.0
    lbl_8051839C:
        .float 5.0
    lbl_805183A0:
        .float 400.0
    lbl_805183A4:
        .float -170.0
    lbl_805183A8:
        .float 40.0
    lbl_805183AC:
        .float -190.0
    lbl_805183B0:
        .float 3600.0
    lbl_805183B4:
        .float 6400.0
    lbl_805183B8:
        .float 8.5
    lbl_805183BC:
        .float 0.2
    lbl_805183C0:
        .float 3.1415927
    lbl_805183C4:
        .float 0.0055555557
    lbl_805183C8:
        .float 0.7853982
    .balign 8
    lbl_805183D0:
        .4byte 0x43300000
        .4byte 0x80000000
    lbl_805183D8:
        .float 20.0
    lbl_805183DC:
        .float 6.25
    lbl_805183E0:
        .float 0.05
    lbl_805183E4:
        .float 0.4
    lbl_805183E8:
        .float 2.0943952
    lbl_805183EC:
        .float 0.95
    lbl_805183F0:
        .float 0.6
    lbl_805183F4:
        .float 0.9
    lbl_805183F8:
        .float 3.0
    lbl_805183FC:
        .float 12800.0
    lbl_80518400:
        .float -15.0
    lbl_80518404:
        .float 2.0
    .balign 4
    lbl_80518408:
        .asciz "orima"
*/
static const u32 fillerbytes[3] = { 0, 0, 0 };
namespace Game {

/*
 * --INFO--
 * Address:	8013F6D4
 * Size:	000050
 * Matches
 */
void Navi::getShadowParam(Game::ShadowParam& get)
{
	get.m_position = m_shadowParam.m_position;
	get.m_position.y += 0.5f;

	get.m_boundingSphere.m_radius = 10.0f;
	get.m_size                    = 4.0f;

	get.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	8013F724
 * Size:	000024
 * Matches
 */
void Navi::getLODSphere(Sys::Sphere& get)
{
	get.m_radius   = 0.0f;
	get.m_position = m_shadowParam.m_boundingSphere.m_position;
}

/*
 * --INFO--
 * Address:	8013F748
 * Size:	000208
 */
Navi::Navi()
    : FakePiki()
{
	_288.m_byteView.a = 0;
	_288.m_byteView.b = 0;

	m_padinput  = nullptr;
	m_padinput2 = nullptr;
	m_camera    = nullptr;
	m_camera2   = nullptr;
	m_cursor    = nullptr;

	m_objectTypeID = 1;
	// ETC. ETC. todo
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8013F788
	addi     r0, r31, 0x310
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x250(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x310(r31)
	stw      r0, 0x314(r31)
	stw      r0, 0x318(r31)

lbl_8013F788:
	mr       r3, r31
	bl       __ct__Q24Game8FakePikiFv
	lis      r3, __vt__Q24Game4Navi@ha
	addi     r5, r31, 0x310
	addi     r6, r3, __vt__Q24Game4Navi@l
	li       r4, 0
	stw      r6, 0(r31)
	addi     r3, r6, 0x1b0
	addi     r7, r6, 0x230
	li       r0, 1
	stw      r3, 0x178(r31)
	li       r3, 0x3c8
	lwz      r6, 0x250(r31)
	stw      r7, 0(r6)
	lwz      r6, 0x250(r31)
	subf     r5, r6, r5
	stw      r5, 0xc(r6)
	stb      r4, 0x288(r31)
	stb      r4, 0x289(r31)
	stw      r4, 0x278(r31)
	stw      r4, 0x27c(r31)
	stw      r4, 0x280(r31)
	stw      r4, 0x284(r31)
	stw      r4, 0x28c(r31)
	sth      r0, 0x128(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013F800
	bl       __ct__Q23efx11TNaviEffectFv
	mr       r0, r3

lbl_8013F800:
	stw      r0, 0x2d0(r31)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	lwz      r3, 0x2d0(r31)
	li       r7, 0
	bl
"init__Q23efx11TNaviEffectFP10Vector3<f>PA4_fP10Vector3<f>Q33efx11TNaviEffect12enumNaviType"
	lwz      r4, 0x2d0(r31)
	addi     r0, r31, 0x20c
	li       r3, 0x20
	stw      r0, 8(r4)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8013F858
	lis      r5, "__vt__Q24Game26StateMachine<Q24Game4Navi>"@ha
	lis      r4, __vt__Q24Game7NaviFSM@ha
	addi     r0, r5, "__vt__Q24Game26StateMachine<Q24Game4Navi>"@l
	li       r5, -1
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q24Game7NaviFSM@l
	stw      r5, 0x18(r3)
	stw      r0, 0(r3)

lbl_8013F858:
	stw      r3, 0x270(r31)
	mr       r4, r31
	lwz      r3, 0x270(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x114
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013F890
	li       r4, 0x64
	bl       __ct__Q24Game6CPlateFi
	mr       r0, r3

lbl_8013F890:
	stw      r0, 0x254(r31)
	li       r3, 0x20
	lfs      f0, lbl_80518358@sda21(r2)
	stfs     f0, 0x118(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013F8B4
	bl       __ct__Q24Game9FootmarksFv
	mr       r0, r3

lbl_8013F8B4:
	stw      r0, 0x2d8(r31)
	li       r4, 0x10
	lwz      r3, 0x2d8(r31)
	bl       alloc__Q24Game9FootmarksFi
	li       r0, 1
	li       r3, 0x10
	stb      r0, 0x135(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8013F8EC
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys17MatRepeatAnimator@ha
	addi     r0, r3, __vt__Q23Sys17MatRepeatAnimator@l
	stw      r0, 0(r30)

lbl_8013F8EC:
	stw      r30, 0x298(r31)
	li       r3, 0xc
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8013F910
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r30)

lbl_8013F910:
	stw      r30, 0x29c(r31)
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013F930
	mr       r4, r31
	bl       __ct__Q23PSM4NaviFPQ24Game4Navi
	mr       r0, r3

lbl_8013F930:
	stw      r0, 0x26c(r31)
	mr       r3, r31
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8013F950
 * Size:	0002B0
 */
TNaviEffect::TNaviEffect()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, __ct__Q23efx15ContextChasePosFv@ha
	lis      r5, __dt__Q23efx15ContextChasePosFv@ha
	stw      r0, 0x44(r1)
	li       r0, 0
	addi     r4, r4, __ct__Q23efx15ContextChasePosFv@l
	addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
	stmw     r21, 0x14(r1)
	mr       r31, r3
	li       r6, 0x1c
	li       r7, 1
	stb      r0, 0(r3)
	addi     r3, r31, 0x28
	stb      r0, 1(r31)
	stb      r0, 2(r31)
	stb      r0, 3(r31)
	stb      r0, 4(r31)
	stb      r0, 5(r31)
	stb      r0, 6(r31)
	stb      r0, 7(r31)
	stw      r0, 8(r31)
	stw      r0, 0xc(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x18(r31)
	bl       __construct_array
	lis      r3, __ct__Q23efx15ContextChasePosFv@ha
	lis      r5, __dt__Q23efx15ContextChasePosFv@ha
	addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
	li       r6, 0x1c
	addi     r3, r31, 0x44
	addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
	li       r7, 1
	bl       __construct_array
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx7TFueact@ha
	addi     r4, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__19JPAParticleCallBack@ha
	stw      r4, 0x60(r31)
	addi     r0, r3, __vt__Q23efx7TFueact@l
	lis      r3, __vt__Q23efx13TFueactCircle@ha
	lis      r5, __vt__Q23efx5TSync@ha
	stw      r0, 0x60(r31)
	addi     r25, r5, __vt__Q23efx5TSync@l
	lis      r8, __vt__18JPAEmitterCallBack@ha
	addi     r7, r3, __vt__Q23efx13TFueactCircle@l
	stw      r4, 0x64(r31)
	addi     r0, r8, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx15TFueactBiriBase@ha
	lis      r5, __vt__Q23efx12TFueactBiri1@ha
	stw      r0, 0x68(r31)
	addi     r27, r3, __vt__Q23efx15TFueactBiriBase@l
	addi     r6, r6, __vt__19JPAParticleCallBack@l
	addi     r28, r5, __vt__Q23efx12TFueactBiri1@l
	stw      r6, 0x6c(r31)
	lis      r3, __vt__Q23efx12TFueactBiri2@ha
	addi     r10, r3, __vt__Q23efx12TFueactBiri2@l
	lis      r5, __vt__Q23efx7TCursor@ha
	stw      r7, 0x64(r31)
	addi     r6, r7, 0x14
	addi     r8, r5, __vt__Q23efx7TCursor@l
	addi     r29, r31, 0xac
	stw      r6, 0x68(r31)
	addi     r6, r7, 0x30
	lis      r3, __vt__Q23efx11TOneEmitter@ha
	li       r24, 0
	stw      r6, 0x6c(r31)
	addi     r7, r3, __vt__Q23efx11TOneEmitter@l
	addi     r30, r29, 0x14
	addi     r23, r25, 0x14
	stw      r24, 0x78(r31)
	li       r26, 0x67
	addi     r22, r27, 0x14
	addi     r12, r28, 0x14
	stw      r4, 0x7c(r31)
	li       r11, 0x68
	addi     r9, r10, 0x14
	addi     r6, r7, 0x14
	stw      r0, 0x80(r31)
	li       r5, 0x19
	mr       r3, r30
	stw      r25, 0x7c(r31)
	stw      r23, 0x80(r31)
	stw      r24, 0x84(r31)
	sth      r26, 0x88(r31)
	stb      r24, 0x8a(r31)
	stw      r27, 0x7c(r31)
	stw      r22, 0x80(r31)
	stw      r28, 0x7c(r31)
	stw      r12, 0x80(r31)
	stw      r4, 0x94(r31)
	stw      r0, 0x98(r31)
	stw      r25, 0x94(r31)
	stw      r23, 0x98(r31)
	stw      r24, 0x9c(r31)
	sth      r11, 0xa0(r31)
	stb      r24, 0xa2(r31)
	stw      r27, 0x94(r31)
	stw      r22, 0x98(r31)
	stw      r10, 0x94(r31)
	stw      r9, 0x98(r31)
	stw      r4, 0xac(r31)
	stw      r8, 0xac(r31)
	stw      r4, 0xb0(r31)
	stw      r0, 0xb4(r31)
	stw      r7, 0xb0(r31)
	stw      r6, 0xb4(r31)
	stw      r24, 0xb8(r31)
	sth      r5, 0xbc(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23efx7Context@ha
	lis      r4, __ct__Q23efx7ContextFv@ha
	addi     r0, r3, __vt__Q23efx7Context@l
	li       r6, 0x24
	stw      r0, 0(r30)
	li       r0, 0
	lis      r3, __dt__Q23efx7ContextFv@ha
	addi     r4, r4, __ct__Q23efx7ContextFv@l
	stw      r0, 0x10(r30)
	addi     r5, r3, __dt__Q23efx7ContextFv@l
	addi     r3, r29, 0x3c
	li       r7, 0x10
	stw      r0, 0xc(r30)
	stw      r0, 8(r30)
	stw      r0, 4(r30)
	stw      r0, 0x24(r29)
	stw      r0, 0x20(r29)
	stw      r0, 0x1c(r29)
	stw      r0, 0x18(r29)
	bl       __construct_array
	mr       r3, r29
	li       r4, 0
	li       r5, 0x10
	bl       init__Q23efx7TCursorFll
	addi     r21, r31, 0x33c
	li       r4, 0
	mr       r3, r21
	li       r5, 0x123
	li       r6, 0x123
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx11TOrimaLight@ha
	addi     r22, r31, 0x36c
	addi     r3, r3, __vt__Q23efx11TOrimaLight@l
	li       r0, 0
	stw      r3, 0(r21)
	mr       r3, r22
	li       r4, 0
	li       r5, 0x124
	stw      r0, 0x2c(r21)
	li       r6, 0x125
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx14TOrimaLightAct@ha
	addi     r21, r31, 0x39c
	addi     r3, r3, __vt__Q23efx14TOrimaLightAct@l
	li       r0, 0
	stw      r3, 0(r22)
	mr       r3, r21
	li       r4, 0
	li       r5, 0x121
	stw      r0, 0x2c(r22)
	li       r6, 0x122
	bl       __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
	lis      r4, __vt__Q23efx12TOrimadamage@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q23efx12TOrimadamage@l
	stw      r0, 0(r21)
	lmw      r21, 0x14(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FC00
 * Size:	000084
 */
TChaseMtxT::~TChaseMtxT()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FC68
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FC58
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8013FC58:
	extsh.   r0, r31
	ble      lbl_8013FC68
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FC68:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FC84
 * Size:	000050
 */
Context::Context()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23efx7Context@ha
	li       r0, 0
	addi     r4, r3, __vt__Q23efx7Context@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0xc(r31)
	stw      r0, 8(r31)
	stw      r0, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FCD4
 * Size:	00008C
 */
TOneEmitter::~TOneEmitter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FD44
	lis      r3, __vt__Q23efx11TOneEmitter@ha
	addic.   r0, r30, 0x10
	addi     r3, r3, __vt__Q23efx11TOneEmitter@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FD28
	lis      r4, __vt__Q23efx7Context@ha
	addi     r3, r30, 0x10
	addi     r0, r4, __vt__Q23efx7Context@l
	li       r4, 0
	stw      r0, 0x10(r30)
	bl       __dt__5CNodeFv

lbl_8013FD28:
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__18JPAEmitterCallBackFv
	extsh.   r0, r31
	ble      lbl_8013FD44
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FD44:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FD60
 * Size:	000060
 */
Context::~Context()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FDA4
	lis      r5, __vt__Q23efx7Context@ha
	li       r4, 0
	addi     r0, r5, __vt__Q23efx7Context@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8013FDA4
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FDA4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FDC0
 * Size:	00009C
 */
TFueactBiri2::~TFueactBiri2()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FE40
	lis      r3, __vt__Q23efx12TFueactBiri2@ha
	addi     r3, r3, __vt__Q23efx12TFueactBiri2@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FE30
	lis      r3, __vt__Q23efx15TFueactBiriBase@ha
	addi     r3, r3, __vt__Q23efx15TFueactBiriBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FE30
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8013FE30:
	extsh.   r0, r31
	ble      lbl_8013FE40
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FE40:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FE5C
 * Size:	00009C
 */
TFueactBiri1::~TFueactBiri1()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FEDC
	lis      r3, __vt__Q23efx12TFueactBiri1@ha
	addi     r3, r3, __vt__Q23efx12TFueactBiri1@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FECC
	lis      r3, __vt__Q23efx15TFueactBiriBase@ha
	addi     r3, r3, __vt__Q23efx15TFueactBiriBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FECC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8013FECC:
	extsh.   r0, r31
	ble      lbl_8013FEDC
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FEDC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FEF8
 * Size:	000084
 */
TFueactBiriBase::~TFueactBiriBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FF60
	lis      r3, __vt__Q23efx15TFueactBiriBase@ha
	addi     r3, r3, __vt__Q23efx15TFueactBiriBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8013FF50
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8013FF50:
	extsh.   r0, r31
	ble      lbl_8013FF60
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FF60:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FF7C
 * Size:	000080
 */
TFueactCircle::~TFueactCircle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013FFE0
	lis      r4, __vt__Q23efx13TFueactCircle@ha
	addi     r3, r30, 8
	addi     r6, r4, __vt__Q23efx13TFueactCircle@l
	li       r4, 0
	stw      r6, 0(r30)
	addi     r5, r6, 0x14
	addi     r0, r6, 0x30
	stw      r5, 4(r30)
	stw      r0, 8(r30)
	bl       __dt__19JPAParticleCallBackFv
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__18JPAEmitterCallBackFv
	extsh.   r0, r31
	ble      lbl_8013FFE0
	mr       r3, r30
	bl       __dl__FPv

lbl_8013FFE0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013FFFC
 * Size:	000060
 */
ContextChasePos::~ContextChasePos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80140040
	lis      r5, __vt__Q23efx15ContextChasePos@ha
	li       r4, 0
	addi     r0, r5, __vt__Q23efx15ContextChasePos@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80140040
	mr       r3, r30
	bl       __dl__FPv

lbl_80140040:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	8014005C
 * Size:	000054
 */
ContextChasePos::ContextChasePos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23efx15ContextChasePos@ha
	li       r0, 0
	addi     r4, r3, __vt__Q23efx15ContextChasePos@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0xc(r31)
	stw      r0, 8(r31)
	stw      r0, 4(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801400B0
 * Size:	000290
 * Majority matches except for var offsets and end of func
 * Believe it's fixed -EpochFlame
 */
void Navi::onInit(Game::CreatureInitArg* arg)
{
	m_stick = 0;
	_258    = 0;
	u16 uVar2;

	clearKaisanDisable();
	clearThrowDisable();

	m_invincibleTimer = 0;
	_2F8              = 0.0f;

	m_sprayCounts[1] = 0;
	m_sprayCounts[0] = 0;

	initFakePiki();
	naviMgr->setupNavi(this);

	m_model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc = nullptr;
	m_model->m_j3dModel->m_modelData->m_jointTree.m_joints[1]->m_mtxCalc = nullptr;

	_288.m_byteView.a = 0;
	_288.m_byteView.b = 0;
	_288.m_shortView &= ~1;

	initAnimator();

	m_isAlive = false;
	_308      = 0.0f;

	m_cursor = new NaviWhistle(this);

	_2DE            = 0;
	m_nextThrowPiki = nullptr;
	m_holdPikiTimer = 0.0f;
	_2AC            = 0;

	m_collTree->createFromFactory(m_model, naviMgr->_CC, 0);
	JUT_ASSERTLINE(838, ((s32)m_collTree->m_part) >= 0x80000000, "ザンーー（・д・）??ネン\n");
	m_collTree->attachModel(m_model);

	m_fsm->start(this, 0, nullptr);

	getCreatureID();

	m_beaconJoint = m_model->getJoint("happajnt3");

	m_effectsObj->m_beaconMtx = m_beaconJoint->getWorldMatrix();
	m_effectsObj->_0C         = &m_cursor->_0C;

	SysShape::Joint* headJnt = m_model->getJoint("headjnt");
	m_effectsObj->m_headMtx  = headJnt->getWorldMatrix();
	m_effectsObj->setNaviType((efx::TNaviEffect::enumNaviType)(bool)m_naviIndex.m_shortView);

	m_effectsObj->createLight();

	setLifeMax();

	_26A = 0;
	_269 = 0;
	Vector3f navi_scale; // navi model scale
	navi_scale.x = 1.3f;
	navi_scale.y = 1.3f;
	navi_scale.z = 1.3f;
	if (m_naviIndex.m_shortView == 1) { // case for Louie/President scale
		navi_scale.x = 1.5f;
		navi_scale.y = 1.5f;
		navi_scale.z = 1.5f;
	}

	m_scale = navi_scale;
	uVar2   = m_naviIndex.m_shortView;
	m_cursorMatAnim->start((Sys::MatBaseAnimation*)(naviMgr->naviIndexArray + (u32)uVar2 * 5 + 3));
	m_arrowMatAnim->start((Sys::MatBaseAnimation*)(naviMgr->naviIndexArray + (u32)uVar2 * 5 + 0xd));
}

/*
 * --INFO--
 * Address:	80140340
 * Size:	000008
 */
s32 Navi::getCreatureID()
{
	return m_naviIndex.m_shortView;
	/*
	lhz      r3, 0x2dc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80140348
 * Size:	000034
 */
void StateMachine<Game::Navi>::start(Game::Navi*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r0, 0x274(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014037C
 * Size:	000088
 */
void Navi::onSetPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f0, 0(r4)
	stfs     f0, 0x20c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x210(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x214(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x218(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_801403D8
	mr       r3, r31
	li       r4, 0xe
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_801403E8

lbl_801403D8:
	mr       r3, r31
	li       r4, 0xd
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl

lbl_801403E8:
	lwz      r3, 0x28c(r31)
	bl       init__Q24Game11NaviWhistleFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80140404
 * Size:	000040
 */
void Navi::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       killFakePiki__Q24Game8FakePikiFv
	lwz      r3, 0x2d0(r31)
	lwz      r0, 0(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0(r3)
	bl       killLight___Q23efx11TNaviEffectFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80140444
 * Size:	0000D4
 */
void Navi::onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x274(r3)
	cmplwi   r3, 0
	beq      lbl_80140488
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r30
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80140488:
	lwz      r3, 0x248(r29)
	cmplwi   r3, 0
	beq      lbl_801404FC
	addi     r3, r3, 0x5c
	bl       getAttribute__Q27MapCode4CodeFv
	mr       r0, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r31, r0
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801404C4
	li       r31, 4

lbl_801404C4:
	lwz      r0, 0x1c(r30)
	cmplwi   r0, 0xc8
	bne      lbl_801404E4
	lwz      r3, 0x26c(r29)
	mr       r5, r31
	li       r4, 0x840
	bl       playWalkSound__Q23PSM4NaviFQ33PSM4Navi8FootTypei
	b        lbl_801404FC

lbl_801404E4:
	cmplwi   r0, 0xc9
	bne      lbl_801404FC
	lwz      r3, 0x26c(r29)
	mr       r5, r31
	li       r4, 0x820
	bl       playWalkSound__Q23PSM4NaviFQ33PSM4Navi8FootTypei

lbl_801404FC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80140518
 * Size:	000004
 */
void NaviState::onKeyEvent(Game::Navi*, const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	8014051C
 * Size:	000080
 */
Vector3f Navi::getPosition()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, moviePlayer__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_80140570
	lwz      r0, 0x1f0(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80140570
	lwz      r3, 0x174(r4)
	lwz      r3, 0x10(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f1, 0x1c(r3)
	lfs      f2, 0x2c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	b        lbl_80140588

lbl_80140570:
	lfs      f0, 0x20c(r4)
	stfs     f0, 0(r31)
	lfs      f0, 0x210(r4)
	stfs     f0, 4(r31)
	lfs      f0, 0x214(r4)
	stfs     f0, 8(r31)

lbl_80140588:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014059C
 * Size:	000050
 */
void Navi::onStickStart(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801405D8
	lbz      r3, 0x259(r31)
	addi     r0, r3, 1
	stb      r0, 0x259(r31)

lbl_801405D8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801405EC
 * Size:	000058
 */
void Navi::onStickEnd(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140630
	lbz      r3, 0x259(r31)
	cmplwi   r3, 0
	beq      lbl_80140630
	addi     r0, r3, -1
	stb      r0, 0x259(r31)

lbl_80140630:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80140644
 * Size:	000654
 */
void Navi::procActionButton()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stmw     r27, 0x8c(r1)
	mr       r31, r3
	lbz      r0, 0x26a(r3)
	cmplwi   r0, 0
	beq      lbl_80140694
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f28, 0x2c8(r3)
	b        lbl_801406A0

lbl_80140694:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f28, 0x2a0(r3)

lbl_801406A0:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801406B0
	addi     r3, r3, 0x30

lbl_801406B0:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	fmuls    f28, f28, f28
	cmplwi   r0, 0
	stw      r4, 0x38(r1)
	li       r30, 0
	stw      r0, 0x44(r1)
	stw      r0, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_801406F4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_8014090C

lbl_801406F4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140760

lbl_8014070C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014090C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80140760:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014070C
	b        lbl_8014090C

lbl_80140780:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 0x2c
	mr       r4, r0
	lwz      r12, 0(r4)
	mr       r28, r4
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f31, 0x2c(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x30(r1)
	lfs      f29, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	mr       r3, r28
	lfs      f0, 0x28(r1)
	fsubs    f3, f30, f1
	lfs      f1, 0x20(r1)
	fsubs    f0, f29, f0
	fsubs    f2, f31, f1
	fabs     f1, f3
	fmuls    f0, f0, f0
	frsp     f31, f1
	fmadds   f29, f2, f2, f0
	bl       canPullout__Q34Game12ItemPikihead4ItemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140850
	fcmpo    cr0, f29, f28
	bge      lbl_80140850
	lfs      f0, lbl_80518370@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80140850
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80140848
	lhz      r0, 0x2dc(r31)
	lhz      r3, 0x1f4(r28)
	subfic   r0, r0, 1
	cmpw     r3, r0
	bne      lbl_80140850

lbl_80140848:
	fmr      f28, f29
	mr       r30, r28

lbl_80140850:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_8014087C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_8014090C

lbl_8014087C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801408F0

lbl_8014089C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014090C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_801408F0:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014089C

lbl_8014090C:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80140780
	cmplwi   r30, 0
	beq      lbl_80140C60
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x7c(r1)
	mr       r4, r30
	addi     r5, r1, 0x64
	bl
setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg
	lwz      r3, 0x270(r31)
	mr       r4, r31
	addi     r6, r1, 0x64
	li       r5, 9
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r31)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80140C58
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140C58
	mr       r3, r29
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 1
	bne      lbl_80140C58
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r28, 0
	lwz      r0, 0x44(r1)
	lwz      r3, 0xc8(r3)
	cmplwi   r0, 0
	lfs      f0, 0x2c8(r3)
	fmuls    f28, f0, f0
	bne      lbl_801409F4
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140BF0

lbl_801409F4:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140A64

lbl_80140A10:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80140BF0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80140A64:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140A10
	b        lbl_80140BF0

lbl_80140A84:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	cmplw    r27, r30
	beq      lbl_80140B34
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f31, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	mr       r3, r27
	lfs      f0, 0x10(r1)
	fsubs    f3, f30, f1
	lfs      f1, 8(r1)
	fsubs    f0, f31, f0
	fsubs    f2, f29, f1
	fabs     f1, f3
	fmuls    f0, f0, f0
	frsp     f31, f1
	fmadds   f29, f2, f2, f0
	bl       canPullout__Q34Game12ItemPikihead4ItemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140B34
	fcmpo    cr0, f29, f28
	bge      lbl_80140B34
	lfs      f0, lbl_80518370@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80140B34
	fmr      f28, f29
	mr       r28, r27

lbl_80140B34:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_80140B60
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140BF0

lbl_80140B60:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140BD4

lbl_80140B80:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80140BF0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80140BD4:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140B80

lbl_80140BF0:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80140A84
	cmplwi   r28, 0
	beq      lbl_80140C58
	li       r0, 0
	mr       r3, r29
	stb      r0, 0x60(r1)
	mr       r4, r28
	addi     r5, r1, 0x48
	bl
setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg
	li       r0, 1
	mr       r4, r29
	stb      r0, 0x60(r1)
	addi     r6, r1, 0x48
	li       r5, 9
	lwz      r3, 0x270(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80140C58:
	li       r3, 1
	b        lbl_80140C64

lbl_80140C60:
	li       r3, 0

lbl_80140C64:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lmw      r27, 0x8c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80140C98
 * Size:	000010
 */
/*void MonoObjectMgr<Game::Navi>::getAt(int)
{
    mulli    r0, r4, 0x320
    lwz      r3, 0x28(r3)
    add      r3, r3, r0
    blr
}*/

/*
 * --INFO--
 * Address:	80140CA8
 * Size:	00004C
 */
// void Iterator<Game::ItemPikihead::Item>::isDone()
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 4(r31)
subf     r0, r0, r3
cntlzw   r0, r0
srwi     r3, r0, 5
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}

namespace Game {

/*
 * --INFO--
 * Address:	80140CF4
 * Size:	000138
 */
void Navi::setupNukuAdjustArg(Game::ItemPikihead::Item*, Game::NaviNukuAdjustStateArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r4, r29
	  mr        r31, r5
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x1C(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f30, f3, f2
	  lfs       f3, 0x18(r1)
	  fsubs     f29, f1, f0
	  lfs       f0, 0xC(r1)
	  fmr       f2, f30
	  fsubs     f31, f3, f0
	  fmr       f1, f29
	  bl        0x2D0A50
	  bl        0x2D0E40
	  lfs       f2, 0x1FC(r29)
	  bl        0x2D0E64
	  lfs       f2, -0x6014(r2)
	  fmuls     f0, f31, f31
	  fdivs     f1, f1, f2
	  fmadds    f0, f29, f29, f0
	  stfs      f1, 0x0(r31)
	  fmadds    f1, f30, f30, f0
	  bl        0x2D0A50
	  lfs       f2, -0x6008(r2)
	  li        r0, 0x2
	  lfs       f0, -0x5FE8(r2)
	  fdivs     f2, f2, f1
	  lfs       f3, -0x5FEC(r2)
	  fsubs     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f2, f3, f0
	  fmuls     f1, f29, f2
	  fmuls     f0, f31, f2
	  fmuls     f2, f30, f2
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  stfs      f2, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r30, 0x14(r31)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140E2C
 * Size:	000050
 * Matches
 * https://decomp.me/scratch/6AZ0H
 */
bool Navi::hasDope(int sprayType)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		return (m_sprayCounts[sprayType] > 0); // signed to generate andc
	} else {
		return playData->hasDope(sprayType);
	}
}

/*
 * --INFO--
 * Address:	80140E7C
 * Size:	000044
 * Matches
 * https://decomp.me/scratch/1gQV1
 */
int Navi::getDopeCount(int sprayType)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		return (m_sprayCounts[sprayType]);
	} else {
		return playData->getDopeCount(sprayType);
	}
}

/*
 * --INFO--
 * Address:	80140EC0
 * Size:	00004C
 * Matches
 * https://decomp.me/scratch/Z907P
 */
void Navi::useDope(int sprayType)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		(m_sprayCounts[sprayType]--);
	} else {
		playData->useDope(sprayType);
	}
}

/*
 * --INFO--
 * Address:	80140F0C
 * Size:	0000A0
 */
void Navi::incDopeCount(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r6, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r6)
	cmpwi    r0, 1
	bne      lbl_80140F8C
	lhz      r5, 0x2dc(r30)
	lis      r3, __vt__Q24Game11GameMessage@ha
	addi     r0, r3, __vt__Q24Game11GameMessage@l
	lis      r3, __vt__Q24Game22GameMessageVsGetDoping@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game22GameMessageVsGetDoping@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stw      r5, 0xc(r1)
	stw      r31, 0x10(r1)
	lwz      r3, 0x58(r6)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	slwi     r0, r31, 2
	add      r4, r30, r0
	lwz      r3, 0x25c(r4)
	addi     r0, r3, 1
	stw      r0, 0x25c(r4)
	b        lbl_80140F94

lbl_80140F8C:
	lwz      r3, playData__4Game@sda21(r13)
	bl       incDopeCount__Q24Game8PlayDataFi

lbl_80140F94:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
